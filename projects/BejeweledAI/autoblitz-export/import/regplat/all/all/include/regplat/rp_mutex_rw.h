/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_mutex_rw.h
 * Desc := Read/Write Mutex class
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

#ifndef RP_MUTEX_RW_H
#define RP_MUTEX_RW_H

#include "rp_types.h"
#include "rp_mutex.h"
#include "rp_event.h"
#include "rp_array_list.h"

/*! @brief Read/Write Mutex class. */
class rp_mutex_rw
{
    public:

        rp_mutex_rw(const wchar_t *name = 0);

        /*! wait for writer mutex ownership */
        void wait_w();

        /*! wait for reader mutex ownership */
        void wait_r();

        /*! release writer mutex ownership */
        void release_w();

        /*! release reader mutex ownership */
        void release_r();

        /*! switch from writer to reader ownership (non-atomic operation!) */
        void switch_r2w() { release_r(); wait_w(); }

        /*! switch from reader to writer ownership (non-atomic operation!) */
        void switch_w2r() { release_w(); wait_r(); }

    private:

        /*! list of current readers */
        rp_array_list reader_list;

        /*! current reader count */
        uint32 reader_count;

        /*! event to signal when there are no readers remaining */
        rp_event event_no_reader;

        /*! writer access mutex */
        rp_mutex mutex_w;

        /*! reader access mutex */
        rp_mutex mutex_r;
};

#endif

