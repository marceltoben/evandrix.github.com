/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_jpeg.h
 * Desc := JPEG class
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

#ifndef RP_JPEG_H
#define RP_JPEG_H

#include "rp_types.h"

/*! @brief JPEG class */
class rp_jpeg
{
    public:

        rp_jpeg();
       ~rp_jpeg();

        /*! create jpeg from the specified rgb24 data*/
        bool create_jpeg(uint08 *p_rgb24, uint32 width, uint32 height, const wchar_t *file_name) { return create_jpeg(p_rgb24, width, height, width*3*sizeof(uint08), file_name); }

        /*! create jpeg from the specified rgb24 data, using the specified stride (in bytes) */
        bool create_jpeg(uint08 *p_rgb24, uint32 width, uint32 height, uint32 stride, const wchar_t *file_name);

    private:

       /*! attempt to initialize this instance */
        bool init();

        /*! attempt to cleanup this instance */
        bool cleanup();

        /*! initialization flag */
        bool init_flag;
};

#endif

