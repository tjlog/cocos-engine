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

import { ccclass, type, serializable, editable, formerlySerializedAs } from 'cc.decorator';
import { EDITOR } from 'internal:constants';
import { lerp } from '../../core/math';
import { Enum } from '../../core/value-types';
import { AnimationCurve, constructLegacyCurveAndConvert } from '../../core/geometry/curve';
import { Texture2D, ImageAsset, RealCurve, CCClass } from '../../core';
import { PixelFormat, Filter, WrapMode } from '../../core/assets/asset-enum';

const setClassAttr = CCClass.Attr.setClassAttr;

const SerializableTable = [
    ['mode', 'constant', 'multiplier'],
    ['mode', 'spline', 'multiplier'],
    ['mode', 'splineMin', 'splineMax', 'multiplier'],
    ['mode', 'constantMin', 'constantMax', 'multiplier'],
] as const;

export const Mode = Enum({
    Constant: 0,
    Curve: 1,
    TwoCurves: 2,
    TwoConstants: 3,
});
// TODO: can not remove ccclass for now, we need ccclass specified deserialization to handle deserialization of RealCurve
@ccclass('cc.CurveRange')
export default class CurveRange  {
    public static Mode = Mode;

    /**
     * @zh 曲线类型[[Mode]]。
     */
    public mode = Mode.Constant;

    /**
     * @zh 当mode为Curve时，使用的曲线。
     */
    public spline = constructLegacyCurveAndConvert();

    /**
     * @zh 当mode为TwoCurves时，使用的曲线下限。
     */
    public splineMin = constructLegacyCurveAndConvert();

    /**
     * @zh 当mode为TwoCurves时，使用的曲线上限。
     */
    public splineMax = constructLegacyCurveAndConvert();

    /**
     * @zh 当mode为Curve时，使用的曲线。
     * @deprecated Since V3.3. Use `spline` instead.
     */
    get curve () {
        return this._curve ??= new AnimationCurve(this.spline);
    }

    set curve (value) {
        this._curve = value;
        this.spline = value._internalCurve;
    }

    /**
     * @zh 当mode为TwoCurves时，使用的曲线下限。
     * @deprecated Since V3.3. Use `splineMin` instead.
     */
    get curveMin () {
        return this._curveMin ??= new AnimationCurve(this.splineMin);
    }

    set curveMin (value) {
        this._curveMin = value;
        this.splineMin = value._internalCurve;
    }

    /**
     * @zh 当mode为TwoCurves时，使用的曲线上限。
     * @deprecated Since V3.3. Use `splineMax` instead.
     */
    get curveMax () {
        return this._curveMax ??= new AnimationCurve(this.splineMax);
    }

    set curveMax (value) {
        this._curveMax = value;
        this.splineMax = value._internalCurve;
    }

    /**
     * @zh 当mode为Constant时，曲线的值。
     */
    public constant = 0;

    /**
     * @zh 当mode为TwoConstants时，曲线的上限。
     */
    public constantMin = 0;

    /**
     * @zh 当mode为TwoConstants时，曲线的下限。
     */
    public constantMax = 0;

    /**
     * @zh 应用于曲线插值的系数。
     */
    public multiplier = 1;

    constructor () {

    }

    public evaluate (time: number, rndRatio: number) {
        switch (this.mode) {
        default:
        case Mode.Constant:
            return this.constant;
        case Mode.Curve:
            return this.spline.evaluate(time) * this.multiplier;
        case Mode.TwoCurves:
            return lerp(this.splineMin.evaluate(time), this.splineMax.evaluate(time), rndRatio) * this.multiplier;
        case Mode.TwoConstants:
            return lerp(this.constantMin, this.constantMax, rndRatio);
        }
    }

    public getMax (): number {
        switch (this.mode) {
        default:
        case Mode.Constant:
            return this.constant;
        case Mode.Curve:
            return this.multiplier;
        case Mode.TwoConstants:
            return this.constantMax;
        case Mode.TwoCurves:
            return this.multiplier;
        }
    }

    /**
     * @deprecated since v3.5.0, this is an engine private interface that will be removed in the future.
     */
    public _onBeforeSerialize (props) {
        // eslint-disable-next-line @typescript-eslint/no-unsafe-return
        return SerializableTable[this.mode];
    }

    private declare _curve: AnimationCurve | undefined;
    private declare _curveMin: AnimationCurve | undefined;
    private declare _curveMax: AnimationCurve | undefined;
}

CCClass.fastDefine('cc.CurveRange', CurveRange, {
    multiplier: 1,
    constantMax: 0,
    constantMin: 0,
    constant: 0,
    mode: Mode.Constant,
    splineMax: Object.freeze(constructLegacyCurveAndConvert()),
    splineMin: Object.freeze(constructLegacyCurveAndConvert()),
    spline: Object.freeze(constructLegacyCurveAndConvert()),
});

setClassAttr(CurveRange, 'multiplier', 'visible', true);
setClassAttr(CurveRange, 'constantMax', 'visible', true);
setClassAttr(CurveRange, 'constantMin', 'visible', true);
setClassAttr(CurveRange, 'constant', 'visible', true);
setClassAttr(CurveRange, 'mode', 'type', 'Enum');
setClassAttr(CurveRange, 'mode', 'enumList', Enum.getList(Mode));
setClassAttr(CurveRange, 'mode', 'visible', true);
setClassAttr(CurveRange, 'splineMax', 'type', 'Object');
setClassAttr(CurveRange, 'splineMax', 'ctor', RealCurve);
setClassAttr(CurveRange, 'splineMax', 'visible', true);
setClassAttr(CurveRange, 'splineMin', 'type', 'Object');
setClassAttr(CurveRange, 'splineMin', 'ctor', RealCurve);
setClassAttr(CurveRange, 'splineMin', 'visible', true);
setClassAttr(CurveRange, 'spline', 'type', 'Object');
setClassAttr(CurveRange, 'spline', 'ctor', RealCurve);
setClassAttr(CurveRange, 'spline', 'visible', true);

function evaluateCurve (cr: CurveRange, time: number, index: number) {
    switch (cr.mode) {
    case Mode.Constant:
        return cr.constant;
    case Mode.Curve:
        return cr.spline.evaluate(time) * cr.multiplier;
    case Mode.TwoCurves:
        return index === 0 ? cr.splineMin.evaluate(time) * cr.multiplier : cr.splineMax.evaluate(time) * cr.multiplier;
    case Mode.TwoConstants:
        return index === 0 ? cr.constantMin : cr.constantMax;
    default:
        return 0;
    }
}

function evaluateHeight (cr: CurveRange) {
    switch (cr.mode) {
    case Mode.TwoConstants:
        return 2;
    case Mode.TwoCurves:
        return 2;
    default:
        return 1;
    }
}

function packTexture (data, width, height) {
    const image = new ImageAsset({
        width,
        height,
        _data: data,
        _compressed: false,
        format: PixelFormat.RGBA32F,
    });

    const texture = new Texture2D();
    texture.setFilters(Filter.NEAREST, Filter.NEAREST);
    texture.setMipFilter(Filter.NONE);
    texture.setWrapMode(WrapMode.CLAMP_TO_EDGE, WrapMode.CLAMP_TO_EDGE, WrapMode.CLAMP_TO_EDGE);
    texture.image = image;

    return texture;
}

function updateTexture (tex: Texture2D | null, data, width, height): Texture2D {
    if (tex === null || width !== tex.width || height !== tex.height) {
        if (tex) {
            tex.destroy();
        }
        tex = packTexture(data, width, height);
    } else {
        tex.uploadData(data);
    }
    return tex;
}

export function packCurveRangeZ (tex: Texture2D | null, data: Float32Array | null, samples:number, cr: CurveRange, discrete?: boolean) {
    const height = evaluateHeight(cr);
    const len = samples * height * 4;
    if (data === null || data.length !== len) {
        data = new Float32Array(samples * height * 4);
    }
    const interval = 1.0 / (samples - 1);
    let sum = 0;
    let average = 0;
    let offset = 0;

    for (let h = 0; h < height; h++) {
        sum = 0;
        for (let j = 0; j < samples; j++) {
            const value = evaluateCurve(cr, interval * j, h);
            if (discrete) {
                average = value;
            } else {
                sum += value;
                average = sum / (j + 1);
            }
            data[offset + 2] = value;
            offset += 4;
        }
    }
    return { texture: updateTexture(tex, data, samples, height), texdata: data };
}
export function packCurveRangeN (tex: Texture2D | null, data: Float32Array | null, samples:number, cr: CurveRange, discrete?: boolean) {
    const height = evaluateHeight(cr);
    const len = samples * height * 4;
    if (data === null || data.length !== len) {
        data = new Float32Array(samples * height * 4);
    }
    const interval = 1.0 / (samples - 1);
    let sum = 0;
    let average = 0;
    let offset = 0;
    for (let h = 0; h < height; h++) {
        sum = 0;
        for (let j = 0; j < samples; j++) {
            const value = evaluateCurve(cr, interval * j, h);
            if (discrete) {
                average = value;
            } else {
                sum += value;
                average = sum / (j + 1);
            }
            data[offset] = average;
            data[offset + 1] = average;
            data[offset + 2] = average;
            offset += 4;
        }
    }
    return { texture: updateTexture(tex, data, samples, height), texdata: data };
}

// eslint-disable-next-line max-len
export function packCurveRangeXY (tex: Texture2D | null, data: Float32Array | null, samples: number, x: CurveRange, y: CurveRange, discrete?: boolean) {
    const height = Math.max(evaluateHeight(x), evaluateHeight(y));
    const len = samples * height * 4;
    if (data === null || data.length !== len) {
        data = new Float32Array(samples * height * 4);
    }
    const curves: CurveRange[] = [x, y];
    const interval = 1.0 / (samples - 1);

    for (let h = 0; h < height; h++) {
        for (let i = 0; i < 2; i++) {
            const cr = curves[i];
            let sum = 0;
            let average = 0;
            for (let j = 0; j < samples; j++) {
                const value = evaluateCurve(cr, interval * j, h);
                if (discrete) {
                    average = value;
                } else {
                    sum += value;
                    average = sum / (j + 1);
                }
                data[((h * samples) + j) * 4 + i] = average;
            }
        }
    }
    return { texture: updateTexture(tex, data, samples, height), texdata: data };
}

// eslint-disable-next-line max-len
export function packCurveRangeXYZ (tex: Texture2D | null, data: Float32Array | null, samples: number, x: CurveRange, y: CurveRange, z: CurveRange, discrete?: boolean) {
    const height = Math.max(evaluateHeight(x), evaluateHeight(y), evaluateHeight(z));
    const len = samples * height * 4;
    if (data === null || data.length !== len) {
        data = new Float32Array(samples * height * 4);
    }
    const curves: CurveRange[] = [x, y, z];
    const interval = 1.0 / (samples - 1);

    for (let h = 0; h < height; h++) {
        for (let i = 0; i < 3; i++) {
            const cr = curves[i];
            let sum = 0;
            let average = 0;
            for (let j = 0; j < samples; j++) {
                const value = evaluateCurve(cr, interval * j, h);
                if (discrete) {
                    average = value;
                } else {
                    sum += value;
                    average = sum / (j + 1);
                }
                data[((h * samples) + j) * 4 + i] = average;
            }
        }
    }
    return { texture: updateTexture(tex, data, samples, height), texdata: data };
}

// eslint-disable-next-line max-len
export function packCurveRangeXYZW (tex: Texture2D | null, data: Float32Array | null, samples: number, x: CurveRange, y: CurveRange, z: CurveRange, w: CurveRange, discrete?: boolean) {
    const height = Math.max(evaluateHeight(x), evaluateHeight(y), evaluateHeight(z), evaluateHeight(w));
    const len = samples * height * 4;
    if (data === null || data.length !== len) {
        data = new Float32Array(samples * height * 4);
    }
    const curves: CurveRange[] = [x, y, z, w];
    const interval = 1.0 / (samples - 1);

    for (let h = 0; h < height; h++) {
        for (let i = 0; i < 4; i++) {
            const cr = curves[i];
            let sum = 0;
            let average = 0;
            for (let j = 0; j < samples; j++) {
                const value = evaluateCurve(cr, interval * j, h);
                if (discrete) {
                    average = value;
                } else {
                    sum += value;
                    average = sum / (j + 1);
                }
                data[((h * samples) + j) * 4 + i] = average;
            }
        }
    }
    return { texture: updateTexture(tex, data, samples, height), texdata: data };
}
