/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

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
 ****************************************************************************/

#define LOG_TAG "AudioDecoderProvider"

#include "audio/android/AudioDecoderProvider.h"
#include "audio/android/AudioDecoderMp3.h"
#include "audio/android/AudioDecoderOgg.h"
#include "audio/android/AudioDecoderSLES.h"
#include "audio/android/AudioDecoderWav.h"
#include "base/memory/Memory.h"
#include "platform/FileUtils.h"

namespace cc {

AudioDecoder *AudioDecoderProvider::createAudioDecoder(SLEngineItf engineItf, const ccstd::string &url, int bufferSizeInFrames, int sampleRate, const FdGetterCallback &fdGetterCallback) {
    AudioDecoder *decoder = nullptr;
    ccstd::string extension = FileUtils::getInstance()->getFileExtension(url);
    ALOGV("url:%s, extension:%s", url.c_str(), extension.c_str());
    if (extension == ".ogg") {
        decoder = ccnew AudioDecoderOgg();
        if (!decoder->init(url, sampleRate)) {
            delete decoder;
            decoder = nullptr;
        }
    } else if (extension == ".mp3") {
        decoder = ccnew AudioDecoderMp3();
        if (!decoder->init(url, sampleRate)) {
            delete decoder;
            decoder = nullptr;
        }
    } else if (extension == ".wav") {
        decoder = ccnew AudioDecoderWav();
        if (!decoder->init(url, sampleRate)) {
            delete decoder;
            decoder = nullptr;
        }
    } else {
        auto slesDecoder = ccnew AudioDecoderSLES();
        if (slesDecoder->init(engineItf, url, bufferSizeInFrames, sampleRate, fdGetterCallback)) {
            decoder = slesDecoder;
        } else {
            delete slesDecoder;
        }
    }

    return decoder;
}

void AudioDecoderProvider::destroyAudioDecoder(AudioDecoder **decoder) {
    if (decoder != nullptr && *decoder != nullptr) {
        delete (*decoder);
        (*decoder) = nullptr;
    }
}

} // namespace cc