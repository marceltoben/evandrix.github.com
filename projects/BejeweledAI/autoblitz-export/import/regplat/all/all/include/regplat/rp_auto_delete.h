/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_auto_delete.h
 * Desc := Auto delete utility class
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

#ifndef RP_AUTO_DELETE_H
#define RP_AUTO_DELETE_H

/*! @brief Automatic delete utility class
 *
 * This class helps manage the delete'ing of object instances. The
 * class tracks when a heap instance goes out of scope. In the following
 * example, the memory is delete'd at "// A" :
 *
 * <pre>
 * ...
 * {
 *     my_class *p_my_class = new my_class();
 *     rp_auto_delete auto_del(&p_instance);
 *     ...
 * } // A
 * </pre>
 *
 */

template <class T> class rp_auto_delete
{
    public:

        rp_auto_delete(T **pp_instance, bool *p_delete_flag = 0) { this->pp_instance = pp_instance; this->p_delete_flag = p_delete_flag; }
       ~rp_auto_delete() { if( (pp_instance != 0) && (*pp_instance != 0) && ( (p_delete_flag == 0) || *p_delete_flag )) { delete *pp_instance; *pp_instance = 0; } }

    private:

        /*! internal instance pointer */
        T **pp_instance;

        /*! optional delete flag */
        bool *p_delete_flag;
};

#endif
