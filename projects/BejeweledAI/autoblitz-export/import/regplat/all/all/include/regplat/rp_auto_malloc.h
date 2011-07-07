/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_auto_malloc.h
 * Desc := Auto malloc utility class
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

#ifndef RP_AUTO_MALLOC_H
#define RP_AUTO_MALLOC_H

#include <stdlib.h>

/*! @brief Automatic malloc utility class
 *
 * This class helps manage the malloc'ing and free'ing of memory. The
 * class tracks when a heap instance goes out of scope. In the following
 * example, the memory is malloc'd at "// A" and free'd at "// B" :
 *
 * <pre>
 * ...
 * {
 *     rp_auto_malloc buff(128); // A
 *     ...
 * } // B
 * </pre>
 *
 */

template <class T, int type_size = sizeof(T)> class rp_auto_malloc
{
    public:

        /*! allocate the specified number of elements, optionally clearing the memory to zero */
        rp_auto_malloc(uint32 size, bool auto_clear=false) { ptr = auto_clear ? (T*)calloc(size, type_size) : (T*)malloc(size*type_size); }
       ~rp_auto_malloc() { free(ptr); }

        /*! allow void* compatibility */
        operator T*() const { return ptr; }

        /*! allow explicit access to internal data pointer */
        T* get_ptr() { return ptr; }

    private:

        /*! internal memory pointer */
        T *ptr;
};

#endif

