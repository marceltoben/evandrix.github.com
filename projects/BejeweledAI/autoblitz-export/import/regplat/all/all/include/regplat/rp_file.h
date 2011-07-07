/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_file.h
 * Desc := Class to simplify file access
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

#ifndef RP_FILE_H
#define RP_FILE_H

#include "rp_types.h"
#include "rp_stream.h"

#include <stdio.h>

/*! @brief File class. */
class rp_file : public rp_stream
{
    public:

        /*! filename path delimiter */
        static const wchar_t path_delim_w;
        static const char path_delim;

        /*! open the specified file */
        static FILE *open(const wchar_t *path, const wchar_t *mode);
        static FILE *open(const char *path, const char *mode);

        /*! remove the specified file */
        static bool remove(const wchar_t *path);
        static bool remove(const char *path);

        /*! create the specified directory */
        static bool mkdir(const wchar_t *path);
        static bool mkdir(const char *path);

        /*! remove the specified directory */
        static bool rmdir(const wchar_t *path);
        static bool rmdir(const char *path);

        /*! get offset of filename portion of the specified path */
        static sint32 get_filename_offset(const wchar_t *path);
        static sint32 get_filename_offset(const char *path);

        rp_file();
        virtual ~rp_file();

        /*! open ths specified file */
        bool open(const wchar_t *path, bool trunc = false);
        bool open(const char *path, bool trunc = false);

        /*! close the current file */
        void close();

        /*! seek the file, using absolute positioning */
        bool seek_abs(uint32 abs_pos);

        /*! seek the file, using relative positioning */
        bool seek_rel(sint32 rel_pos);

        /*! access file handle */
        FILE *get_handle() { return p_file; }

        /*! \name rp_stream interface */
        /*! \{ */

        /*! read the specified number of bytes from stream */
        virtual uint32 get_raw(void *p_data, uint32 offset, uint32 size);

        /*! write the specified number of bytes to stream */
        virtual uint32 set_raw(void *p_data, uint32 offset, uint32 size);

        /*! end of stream state */
        virtual bool is_eos();

        /*! reset current offset */
        virtual bool reset();

        /*! \} */

    private:

        /*! cached file handle */
        FILE *p_file;
};

/*! offset specifying to use the automatically advancing offset */
#define RP_FILE_OFFSET_AUTO ((uint32)-1)

#endif

