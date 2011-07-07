/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_auto_mutex_rw.h
 * Desc := Auto read/write mutex utility class
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

#ifndef RP_AUTO_MUTEX_RW_H
#define RP_AUTO_MUTEX_RW_H

#include "rp_mutex_rw.h"

/*! @brief Automatic read/write mutex utility class
 *
 * This class helps manage the lock'ing and release'ing of a mutex. The
 * class tracks when a heap instance goes out of scope. In the following
 * example, the memory is lock'd at "// A" and released'd at "// B" :
 *
 * <pre>
 * ...
 * {
 *     rp_auto_mutex_rw lock(&mutex); // A
 *     ...
 * } // B
 * </pre>
 *
 */

class rp_auto_mutex_rw
{
    public:

        rp_auto_mutex_rw(rp_mutex_rw *p_mutex_rw, bool writer = false, bool enable = true) : p_mutex_rw(p_mutex_rw), writer(writer), is_done(!enable)
        {
            /*! auto mutex can be disabled, which can come in handy */
            if(!enable) { return; }

            /*! automatically wait on mutex */
            if(p_mutex_rw != 0) 
            {
               if(writer) { p_mutex_rw->wait_w(); }
               else { p_mutex_rw->wait_r(); }
            }
        }

        /*! automatically release mutex on deconstruction */
       ~rp_auto_mutex_rw() { release(); p_mutex_rw = 0; }

        /*! prevent accidental double release of mutex */
        void early_release() { release(); }

    private:

        /*! release mutex */
        void release()
        {
            /*! make sure we haven't already released */
            if(is_done) { return; }

            /*! release mutex */
            if(p_mutex_rw != 0) 
            { 
                if(writer) { p_mutex_rw->release_w(); }
                else { p_mutex_rw->release_r(); }
            }

            /*! update state */
            is_done = true;
        }

        /*! internal mutex pointer */
        rp_mutex_rw *p_mutex_rw;

        /*! internal state - flag specifying if this instance is a writer */
        bool writer;

        /*! internal state */
        bool is_done;
};

#endif

