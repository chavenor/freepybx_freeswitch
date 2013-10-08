/*
 * Copyright 2008-2010 Arsen Chaloyan
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * $Id: mpf_resampler.h 1474 2010-02-07 20:51:47Z achaloyan $
 */

#ifndef MPF_RESAMPLER_H
#define MPF_RESAMPLER_H

/**
 * @file mpf_resampler.h
 * @brief MPF Stream Resampler
 */ 

#include "mpf_stream.h"

APT_BEGIN_EXTERN_C

/**
 * Create audio stream resampler.
 * @param source the source stream to resample
 * @param sink the sink stream to resample to
 * @param pool the pool to allocate memory from
 */
MPF_DECLARE(mpf_audio_stream_t*) mpf_resampler_create(mpf_audio_stream_t *source, mpf_audio_stream_t *sink, apr_pool_t *pool);


APT_END_EXTERN_C

#endif /* MPF_RESAMPLER_H */
