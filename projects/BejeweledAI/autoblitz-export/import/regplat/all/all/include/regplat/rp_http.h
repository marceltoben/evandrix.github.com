/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_http.h
 * Desc := HTTP class
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

#ifndef RP_HTTP_H
#define RP_HTTP_H

#include "rp_types.h"
#include "rp_thread.h"

/*! @brief HTTP class */
class rp_http
{
    public:

        /*! global initialization, which is not thread-safe due to internal
         *  implementation. this should be called ideally at the entry point
         *  of a program which utilizes this class. */
        static bool global_init();

        /*! optional thread function, which may or may not be used by the
         *  platform specific implementation. this is declared here because
         *  the thread will want to access private members */
        static void async_func(bool *p_stop_flag, void *p_context);

        rp_http();
       ~rp_http();

        /*! make a POST request with the specified name, value (HTTP POST) */
        bool post(const char *url, const char *name, const char *value);

        /*! make a GET request */
        bool get(const char *url);

        /*! retrieve result string, if available */
        bool get_response(char *str, uint32 max_size);

        /*! check if response is ready */
        bool is_ready() { return ready_flag; }

    private:

        /*! attempt to initialize this instance */
        bool init();

        /*! attempt to cleanup this instance */
        bool cleanup();

        /*! platform specific data */
        void *p_platform;

        /*! response ready state */
        bool ready_flag;
};

#endif

