/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_utf.h
 * Desc := Class to simplify UTF text conversion
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

#ifndef RP_UTF_H
#define RP_UTF_H

#include "rp_types.h"

/*! @brief UTF class. */
class rp_utf
{
    public:

        /*! convert from UTF-16 to wchar_t */
        static uint32 utf16_to_wc(const uint16 *utf16_str, wchar_t *wc_str, uint32 max_len);

        /*! convert from UTF-16 to UTF-8 */
        static uint32 utf16_to_utf08(const uint16 *utf16_str, uint08 *utf08_str, uint32 max_len, bool use_bom = false);

        /*! convert from wchar_t to UTF-16 */
        static uint32 wc_to_utf16(const wchar_t *wc_str, uint16 *utf16_str, uint32 max_len);

        /*! convert from wchar_t to UTF-8 */
        static uint32 wc_to_utf08(const wchar_t *wc_str, uint08 *utf08_str, uint32 max_len, bool use_bom = false);

        /*! convert from UTF-8 to wchar_t */
        static uint32 utf08_to_wc(const uint08 *utf08_str, uint32 inp_len, wchar_t *wc_str, uint32 max_len, bool *p_has_bom = 0);

        /*! convert from UTF-8 to UTF-16 */
        static uint32 utf08_to_utf16(const uint08 *utf08_str, uint32 inp_len, uint16 *utf16_str, uint32 max_len, bool *p_has_bom = 0);

    private:
};

#endif

