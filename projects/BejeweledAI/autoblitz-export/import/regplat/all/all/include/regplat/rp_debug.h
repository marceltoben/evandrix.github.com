/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_debug.h
 * Desc := Efficient helper utility for printing debug information.
 * 
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice, 
 *   this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice, 
 *   this list of conditions and the following disclaimer in the documentation 
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of Aaron "Caustik" Robinson nor the names of its 
 *   contributors may be used to endorse or promote products derived from this 
 *   software without specific prior written permission.
 * 
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 *   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 *****************************************************************************/

#ifndef RP_DEBUG_H
#define RP_DEBUG_H

#include "rp_types.h"

/*
    rp_debug_error   := Displayed for trace level <= 3
    rp_debug_warning := Displayed for trace level <= 2
    rp_debug_verbose := Displayed for trace level <= 1
    rp_debug_trace   := Displayed for all trace levels

    Each of these functions behaves identical to 'printf' when enabled.

    RP_DEBUG_TRACE   [rp_debug_trace]
    RP_DEBUG_TRACE=3 [rp_debug_trace, rp_debug_error]
    RP_DEBUG_TRACE=2 [rp_debug_trace, rp_debug_error, rp_debug_warning]
    RP_DEBUG_TRACE=1 [rp_debug_trace, rp_debug_error, rp_debug_warning, rp_debug_verbose]

    Leaving RP_DEBUG_TRACE undefined will disable all trace information.
*/

/*! rp_debug_empty compiles to nothing when disabled */
#ifdef __cplusplus
inline void rp_null_func(char *format, ...) { }
#define rp_debug_empty rp_null_func
#else
#define rp_debug_empty { }
#endif

/*! debug trace enabled */
#ifdef RP_DEBUG_TRACE
#include <stdio.h>
#ifdef RP_DEBUG_TRACE_DETAILS
#define rp_debug_trace printf("File : %s\nLine #%d\n", __FILE__, __LINE__); printf
#else
#define rp_debug_trace printf
#endif
#else
/*! debug trace disabled */
#define rp_debug_trace rp_debug_empty
#endif

/*! if debug trace is enabled, set appropriate level */
#ifdef RP_DEBUG_TRACE

/*! debug trace level - verbose */
#if RP_DEBUG_TRACE <= 1
#define rp_debug_verbose rp_debug_trace
#else
#define rp_debug_verbose rp_debug_empty
#endif

/*! debug trace level - warning */
#if RP_DEBUG_TRACE <= 2
#define rp_debug_warning rp_debug_trace
#else
#define rp_debug_warning rp_debug_empty
#endif

/*! debug trace level - error */
#if RP_DEBUG_TRACE <= 3
#define rp_debug_error rp_debug_trace
#else
#define rp_debug_error rp_debug_empty
#endif

/*! if debug trace is disabled, set empty calls */
#else

#define rp_debug_verbose rp_debug_empty
#define rp_debug_warning rp_debug_empty
#define rp_debug_error rp_debug_empty

#endif

#endif

