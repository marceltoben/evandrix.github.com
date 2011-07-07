/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_thread.h
 * Desc := Thread class
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

#ifndef RP_THREAD_H
#define RP_THREAD_H

#include "rp_types.h"

/*! thread entry point prototype */
typedef void (*rp_thread_func)(bool *p_stop_flag, void *p_context);

/*! @brief Thread class. */
class rp_thread
{
    public:

        rp_thread() : pf_func(0), p_context(0), p_handle(0), stop_flag(false) { }
        rp_thread(rp_thread_func pf_func, void *p_context) : pf_func(pf_func), p_context(p_context), p_handle(0), stop_flag(false) { }
       ~rp_thread() { stop(); }

        /*! start thread */
        void start();

        /*! start thread, using specified parameters */
        void start(rp_thread_func pf_func, void *p_context) { this->pf_func = pf_func; this->p_context = p_context; start(); }

        /*! stop thread */
        void stop(bool async = false);

        /*! access entry point function */
        rp_thread_func get_func() { return pf_func; }

        /*! access user context */
        void *get_context() { return p_context; }

        /*! access thread stop request flag */
        bool get_stop_flag() { return stop_flag; }

        /*! access address of thread stop request flag */
        bool *get_stop_flag_ptr() { return &stop_flag; }

        /*! access stop event */
        rp_event *get_stop_event() { return &stop_event; }

        /*! check stopped state */
        bool is_stopped() { return stop_event.is_set(); }

        /*! sleep for the specified number of milliseconds */
        static void sleep(int ms);

        /*! retrieve unique thread identifier */
        static int get_current_thread_id();

    private:

        /*! internal thread entry point function */
        rp_thread_func pf_func;

        /*! internal user context */
        void *p_context;

        /*! internal thread handle */
        void *p_handle;

        /*! internal thread stop request flag */
        bool stop_flag;

        /*! internal thread stopped event */
        rp_event stop_event;
};

#endif

