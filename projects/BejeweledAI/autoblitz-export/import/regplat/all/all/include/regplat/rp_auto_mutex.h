/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_auto_mutex.h
 * Desc := Auto mutex utility class
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

#ifndef RP_AUTO_MUTEX_H
#define RP_AUTO_MUTEX_H

#include "rp_mutex.h"

/*! @brief Automatic mutex utility class
 *
 * This class helps manage the lock'ing and release'ing of a mutex. The
 * class tracks when a heap instance goes out of scope. In the following
 * example, the memory is lock'd at "// A" and released'd at "// B" :
 *
 * <pre>
 * ...
 * {
 *     rp_auto_mutex lock(&mutex); // A
 *     ...
 * } // B
 * </pre>
 *
 */

class rp_auto_mutex
{
    public:

        rp_auto_mutex(rp_mutex *p_mutex, bool enable = true) : p_mutex(p_mutex), is_done(!enable)
        {
            /*! auto mutex can be disabled, which can come in handy */
            if(!enable) { return; }

            /*! automatically wait on mutex */
            if(p_mutex != 0) { p_mutex->wait(); }
        }

        /*! automatically release mutex on deconstruction */
       ~rp_auto_mutex() { release(); p_mutex = 0; }

        /*! prevent accidental double release of mutex */
        void early_release() { release(); }

    private:

        /*! release mutex */
        void release()
        {
            /*! make sure we haven't already released */
            if(is_done) { return; }

            /*! release mutex */
            if(p_mutex != 0) { p_mutex->release(); }

            /*! update state */
            is_done = true;
        }

        /*! internal mutex pointer */
        rp_mutex *p_mutex;

        /*! internal state */
        bool is_done;
};

#endif

