/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_binary.h
 * Desc := Class to simplify writing binary data into a buffer
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

#ifndef RP_BINARY_H
#define RP_BINARY_H

#include "rp_types.h"
#include "rp_stream.h"

/*! @brief Binary class. */
class rp_binary : public rp_stream
{
    public:

        /*! retrieve Four CC for the specified string */
        static uint32 four_cc(const char *name);

        rp_binary(void *p_buffer, uint32 buffer_size = (uint32)-1);
        virtual ~rp_binary() { }

        /*! change to the specified buffer */
        void set_buffer(void *p_buffer) { this->p_buffer = p_buffer; }

        /*! retrieve the current internal buffer */
        void *get_buffer() { return this->p_buffer; }

        /*! \name rp_stream interface */
        /*! \{ */

        /*! read the specified number of bytes from stream */
        virtual uint32 get_raw(void *p_data, uint32 offset, uint32 size);

        /*! write the specified number of bytes to stream */
        virtual uint32 set_raw(void *p_data, uint32 offset, uint32 size);

        /*! end of stream state */
        virtual bool is_eos() { return (cur_offset >= buffer_size); }

        /*! reset current offset */
        virtual bool reset() { cur_offset = 0; return true; }

        /*! \} */

    private:

        /*! internal buffer */
        void *p_buffer;

        /*! internal maximum buffer size */
        uint32 buffer_size;

        /*! internal current buffer offset */
        uint32 cur_offset;
};

#endif

