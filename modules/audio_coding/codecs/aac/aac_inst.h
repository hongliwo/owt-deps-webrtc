/*
 *  Copyright (c) 2014 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef MODULES_AUDIO_CODING_CODECS_AAC_AAC_INST_H_
#define MODULES_AUDIO_CODING_CODECS_AAC_AAC_INST_H_

#include <stddef.h>

#include "rtc_base/ignore_wundef.h"

RTC_PUSH_IGNORING_WUNDEF()
#include "aacenc_lib.h"
#include "aacdecoder_lib.h"
RTC_POP_IGNORING_WUNDEF()

struct WebRtcAacEncInst {
  HANDLE_AACENCODER encoder;
  AACENC_InfoStruct info;
  size_t channels;
  int in_dtx_mode;
  unsigned char *pcmBuffer;
  unsigned long pcmBufferLen;
};

struct WebRtcAacDecInst {
  HANDLE_AACDECODER decoder;
  int prev_decoded_samples;
  size_t channels;
  int in_dtx_mode;
  int sample_rate_hz;
};

#endif  // MODULES_AUDIO_CODING_CODECS_AAC_AAC_INST_H_
