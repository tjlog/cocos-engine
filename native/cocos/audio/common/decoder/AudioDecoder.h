/****************************************************************************
 Copyright (c) 2016 Chukong Technologies Inc.
 Copyright (c) 2017-2022 Xiamen Yaji Software Co., Ltd.

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

#pragma once

#include <cstdint>
#include <functional>

#include "audio/include/AudioDef.h"

#if CC_PLATFORM == CC_PLATFORM_WINDOWS
    #include "vorbis/vorbisfile.h"
#elif CC_PLATFORM == CC_PLATFORM_LINUX || CC_PLATFORM == CC_PLATFORM_QNX
    #include "vorbis/vorbisfile.h"
#elif CC_PLATFORM == CC_PLATFORM_OHOS
    #include "ivorbisfile.h"
#endif

namespace cc {

/**
 * @brief The class for decoding compressed audio file to PCM buffer.
 */
class AudioDecoder {
public:
    static const uint32_t INVALID_FRAME_INDEX = UINT32_MAX;

    /**
     * @brief Opens an audio file specified by a file path.
     * @return true if succeed, otherwise false.
     */
    virtual bool open(const char *path) = 0;

    /**
     * @brief Checks whether decoder has opened file successfully.
     * @return true if succeed, otherwise false.
     */
    virtual bool isOpened() const;

    /**
     * @brief Closes opened audio file.
     * @note The method will also be automatically invoked in the destructor.
     */
    virtual void close() = 0;

    /**
     * @brief Reads audio frames of PCM format.
     * @param framesToRead The number of frames excepted to be read.
     * @param pcmBuf The buffer to hold the frames to be read, its size should be >= |framesToRead| * _bytesPerFrame.
     * @return The number of frames actually read, it's probably less than 'framesToRead'. Returns 0 means reach the end of file.
     */
    virtual uint32_t read(uint32_t framesToRead, char *pcmBuf) = 0;

    /**
     * @brief Reads fixed audio frames of PCM format.
     * @param framesToRead The number of frames excepted to be read.
     * @param pcmBuf The buffer to hold the frames to be read, its size should be >= |framesToRead| * _bytesPerFrame.
     * @return The number of frames actually read, it's probably less than |framesToRead|. Returns 0 means reach the end of file.
     * @note The different between |read| and |readFixedFrames| is |readFixedFrames| will do multiple reading operations if |framesToRead| frames
     *       isn't filled entirely, while |read| just does reading operation once whatever |framesToRead| is or isn't filled entirely.
     *       If current position reaches the end of frames, the return value may smaller than |framesToRead| and the remaining
     *       buffer in |pcmBuf| will be set with silence data (0x00).
     */
    virtual uint32_t readFixedFrames(uint32_t framesToRead, char *pcmBuf);

    /**
     * @brief Sets frame offest to be read.
     * @param frameOffset The frame offest to be set.
     * @return true if succeed, otherwise false
     */
    virtual bool seek(uint32_t frameOffset) = 0;

    /**
     * @brief Tells the current frame offset.
     * @return The current frame offset.
     */
    virtual uint32_t tell() const = 0;

    /** Gets total frames of current audio.*/
    virtual uint32_t getTotalFrames() const;

    /** Gets bytes per frame of current audio.*/
    virtual uint32_t getBytesPerFrame() const;

    /** Gets sample rate of current audio.*/
    virtual uint32_t getSampleRate() const;

    /** Gets the channel count of current audio.
     * @note Currently we only support 1 or 2 channels.
     */
    virtual uint32_t getChannelCount() const;

    virtual AudioDataFormat getDataFormat() const;

    virtual PCMHeader getPCMHeader() const;
protected:
    AudioDecoder();
    virtual ~AudioDecoder();

    bool _isOpened;
    PCMHeader _pcmHeader;
    void *_fsHooks = nullptr;

    friend class AudioDecoderManager;
};

} // namespace cc
