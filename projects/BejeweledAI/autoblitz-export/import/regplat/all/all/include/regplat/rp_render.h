/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_render.h
 * Desc := Render class
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

#ifndef RP_RENDER_H
#define RP_RENDER_H

#include "rp_types.h"

/*! @brief Render class */
class rp_render
{
    public:

        /*! create a renderer instance */
        static rp_render *create_instance();

        rp_render() : created_flag(false), width(0), height(0), p_platform(0) { }
        virtual ~rp_render() { destroy(); }

        /*! \name rp_render interface */
        /*! \{ */

        /*! create renderer */
        virtual bool create(uint32 width, uint32 height);

        /*! destroy renderer */
        virtual bool destroy();

        /*! message pump - should be called periodically for responsiveness */
        virtual bool pump();

        /*! render 8-bit pixels (pitch is in bytes) */
        virtual bool draw_pixels(uint08 *p_pix, uint32 x, uint32 y, uint32 w, uint32 h, uint32 p);

        /*! \} */

    protected:

        /*! internal state protection */
        rp_mutex state_mutex;

        /*! \name state_mutex protected resources */
        /*! \{ */

        /*! internal cache of created state */
        bool created_flag;

        /*! internal cache of rendered width/height */
        uint32 width, height;

        /*! platform specific data */
        void *p_platform;

        /*! \} */
};

#endif

