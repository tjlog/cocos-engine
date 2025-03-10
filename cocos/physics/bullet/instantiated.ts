/*
 Copyright (c) 2020 Xiamen Yaji Software Co., Ltd.

 https://www.cocos.com/

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

// eslint-disable-next-line import/no-extraneous-dependencies
import bulletModule, { bulletType } from '@cocos/bullet';
import { WECHAT, RUNTIME_BASED } from 'internal:constants';
import { physics } from '../../../exports/physics-framework';
import { game } from '../../core/game';
import { sys } from '../../core/platform';
import { pageSize, pageCount, importFunc } from './bullet-env';

let bulletLibs: any = bulletModule;
if (globalThis.BULLET) {
    console.log('[Physics][Bullet]: Using the external Bullet libs.');
    bulletLibs = globalThis.BULLET;
}

interface instanceExt extends Bullet.instance {
    CACHE: any,
    BODY_CACHE_NAME: string,
}

export const bt: instanceExt = {} as any;
globalThis.Bullet = bt;
bt.BODY_CACHE_NAME = 'body';

export function waitForAmmoInstantiation () {
    // refer https://stackoverflow.com/questions/47879864/how-can-i-check-if-a-browser-supports-webassembly
    const supported = (() => {
        // iOS 15.4 has some wasm memory issue, can not use wasm for bullet
        const isiOS15_4 = (sys.os === sys.OS.IOS || sys.os === sys.OS.OSX) && sys.isBrowser
        && /(OS 15_4)|(Version\/15.4)/.test(window.navigator.userAgent);
        if (isiOS15_4) {
            return false;
        }
        try {
            if (typeof WebAssembly === 'object'
                && typeof WebAssembly.instantiate === 'function') {
                const module = new WebAssembly.Module(new Uint8Array([0x0, 0x61, 0x73, 0x6d, 0x01, 0x00, 0x00, 0x00]));
                if (module instanceof WebAssembly.Module) {
                    return new WebAssembly.Instance(module) instanceof WebAssembly.Instance;
                }
            }
        } catch (e) {
            return false;
        }
        return false;
    })();
    return Promise.resolve().then(() => {
        if (bulletType === 'fallback') {
            return (bulletModule as any)(supported) as string | typeof bulletModule;
        }
        return bulletLibs as string | typeof bulletModule;
    }).then((module) => {
        if (typeof module === 'string') {
            console.info('[Physics][Bullet]: Using wasm Bullet libs.');
            const infoReport = (msg: any) => { console.info(msg); };
            const errorReport = (msg: any) => { console.error(msg); };
            const memory = new WebAssembly.Memory({ initial: pageCount });
            const importObject = {
                cc: importFunc,
                wasi_snapshot_preview1: { fd_close: infoReport, fd_seek: infoReport, fd_write: infoReport },
                env: { memory },
            };
            return new Promise<void>((resolve, reject) => {
                function instantiateWasm (buff: any) {
                    WebAssembly.instantiate(buff, importObject).then((results) => {
                        const btInstance = results.instance.exports as unknown as Bullet.instance;
                        Object.assign(bt, btInstance);
                        resolve();
                    }, errorReport);
                }

                if (WECHAT || RUNTIME_BASED) {
                    // eslint-disable-next-line @typescript-eslint/restrict-template-expressions
                    const wasmFilePath = `cocos-js/${module}` as any;
                    instantiateWasm(wasmFilePath);
                } else {
                    fetch(module).then((response) => {
                        response.arrayBuffer().then((buff) => {
                            instantiateWasm(buff);
                        }, errorReport);
                    }, errorReport);
                }
            });
        } else {
            console.info('[Physics][Bullet]: Using asmjs Bullet libs.');
            const env: any = importFunc;
            const wasmMemory: any = {};
            wasmMemory.buffer = new ArrayBuffer(pageSize * pageCount);
            env.memory = wasmMemory;
            const btInstance = module(env, wasmMemory);
            Object.assign(bt, btInstance);
            return new Promise<void>((resolve, reject) => { resolve(); });
        }
    });
}

game.onPostInfrastructureInitDelegate.add(waitForAmmoInstantiation);
