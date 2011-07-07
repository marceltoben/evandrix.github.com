/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_stream.h
 * Desc := Interface for streamable classes
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

#ifndef RP_STREAM_H
#define RP_STREAM_H

#include "rp_types.h"

#include <stdio.h>

/*! @brief Stream class. */
class rp_stream
{
    public:

        virtual ~rp_stream() { }

        /*! \name rp_stream interface */
        /*! \{ */

        /*! read the specified number of bytes from stream */
        virtual uint32 get_raw(void *p_data, uint32 offset, uint32 size) = 0;

        /*! write the specified number of bytes to stream */
        virtual uint32 set_raw(void *p_data, uint32 offset, uint32 size) = 0;

        /*! end of stream state */
        virtual bool is_eos() = 0;

        /*! reset current offset */
        virtual bool reset() = 0;

        /*! \} */

        /*! \name unicode data access */
        /*! \{ */

        /*! set the utf16 data at the current offset, convert from wchar_t */
        bool set_utf16_wc(const wchar_t *wc_str, uint32 max_size) { return set_utf16_wc((uint32)-1, wc_str, max_size); }

        /*! set the utf16 data at the specified offset, convert from wchar_t */
        bool set_utf16_wc(uint32 offset, const wchar_t *wc_str, uint32 max_size);

        /*! get the utf16 data at the current offset, convert to wchar_t */
        bool get_utf16_wc(wchar_t *wc_str, uint32 max_size) { return get_utf16_wc((uint32)-1, wc_str, max_size); }

        /*! get the utf16 data at the specified offset, convert to wchar_t */
        bool get_utf16_wc(uint32 offset, wchar_t *wc_str, uint32 max_size);

        /*! \} */

        /*! \name line data access */
        /*! \{ */

        /*! set the line data at the current offset */
        bool set_line(const char *str) { return set_line((uint32)-1, str); }

        /*! set the utf16 data at the specified offset, convert from wchar_t */
        bool set_line(uint32 offset, const char *str);

        /*! get the line data at the current offset */
        bool get_line(char *str, uint32 max_size) { return get_line((uint32)-1, str, max_size); }

        /*! get the utf16 data at the specified offset, convert to wchar_t */
        bool get_line(uint32 offset, char *str, uint32 max_size);

        /*! \} */

        /*! \name raw data access */
        /*! \{ */

        /*! set the byte array at the current offset */
        bool set_barray(uint08 *p_value, uint32 size) { return set_barray((uint32)-1, p_value, size); }

        /*! set the byte array at the specified offset */
        bool set_barray(uint32 offset, uint08 *p_value, uint32 size);

        /*! get the byte array at the current offset */
        bool get_barray(uint08 *p_value, uint32 size) { return get_barray((uint32)-1, p_value, size); }

        /*! get the byte array at the specified offset */
        bool get_barray(uint32 offset, uint08 *p_value, uint32 size);

        /*! set the word array at the current offset */
        bool set_warray(uint16 *p_value, uint32 size) { return set_warray((uint32)-1, p_value, size); }

        /*! set the word array at the specified offset */
        bool set_warray(uint32 offset, uint16 *p_value, uint32 size);

        /*! get the word array at the current offset */
        bool get_warray(uint16 *p_value, uint32 size) { return get_warray((uint32)-1, p_value, size); }

        /*! get the word array at the specified offset */
        bool get_warray(uint32 offset, uint16 *p_value, uint32 size);

        /*! set the dword array at the current offset */
        bool set_darray(uint32 *p_value, uint32 size) { return set_darray((uint32)-1, p_value, size); }

        /*! set the dword array at the specified offset */
        bool set_darray(uint32 offset, uint32 *p_value, uint32 size);

        /*! get the dword array at the current offset */
        bool get_darray(uint32 *p_value, uint32 size) { return get_darray((uint32)-1, p_value, size); }

        /*! get the dword array at the specified offset */
        bool get_darray(uint32 offset, uint32 *p_value, uint32 size);

        /*! \} */

        /*! \name integer data type access */
        /*! \{ */

        /*! set the specified uint32 value at the current offset */
        bool set_uint32(uint32 value) { return set_uint32((uint32)-1, value); }

        /*! set the specified uint32 value at the specified offset */
        bool set_uint32(uint32 offset, uint32 value);

        /*! get the uint32 value at the current offset */
        bool get_uint32(uint32 *p_value) { return get_uint32((uint32)-1, p_value); }

        /*! get the uint32 value at the specified offset */
        bool get_uint32(uint32 offset, uint32 *p_value);

        /*! set the specified uint16 value at the current offset */
        bool set_uint16(uint16 value) { return set_uint16((uint32)-1, value); }

        /*! set the specified uint16 value at the specified offset */
        bool set_uint16(uint32 offset, uint16 value);

        /*! get the uint16 value at the current offset */
        bool get_uint16(uint16 *p_value) { return get_uint16((uint32)-1, p_value); }

        /*! get the uint16 value at the specified offset */
        bool get_uint16(uint32 offset, uint16 *p_value);

        /*! set the specified uint08 value at the current offset */
        bool set_uint08(uint08 value) { return set_uint08((uint32)-1, value); }

        /*! set the specified uint08 value at the specified offset */
        bool set_uint08(uint32 offset, uint08 value);

        /*! get the uint08 value at the current offset */
        bool get_uint08(uint08 *p_value) { return get_uint08((uint32)-1, p_value); }

        /*! get the uint08 value at the specified offset */
        bool get_uint08(uint32 offset, uint08 *p_value);

        /*! \} */

    protected:
};

#endif

