/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_hash_tree.h
 * Desc := Tree class where each node is either <type> or another tree.
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

#ifndef RP_HASH_TREE_H
#define RP_HASH_TREE_H

#include "rp_types.h"

#include <map>
#include <set>

/*! @brief Tree class where each node is either <type> or another tree. */
template <class T> class rp_hash_tree
{
    public:

        /*! auto_cleanup will cause the deconstructor to delete all of it's children */
        rp_hash_tree(std::wstring name, bool auto_cleanup = false);
       ~rp_hash_tree();

        /*! \name key, value pair functions */
        /*! \{ */

        /*! insert the specified key, value pair */
        bool kvp_insert(const wchar_t *key, T value);

        /*! retrieve the value for the specified key */
        bool kvp_get_value(const wchar_t *key, T &value);

        /*! retrieve the value for the specified key (result as int) */
        bool kvp_get_value(const wchar_t *key, sint32 *p_value);

        /*! begin iteration on key, value pairs */
        void *kvp_iter_init();

        /*! continue iteration on key, value pairs */
        bool kvp_iter_next(void *p_iter, const wchar_t **p_key, T *p_value);

        /*! stop iteration on key, value pairs */
        bool kvp_iter_done(void *p_iter);

        /*! \} */

        /*! \name child functions */
        /*! \{ */

        /*! insert the specified hash tree as a child */
        bool kid_insert(rp_hash_tree<T> *p_hash_tree);

        /*! begin iteration on children */
        void *kid_iter_init();

        /*! continue iteration on children */
        bool kid_iter_next(void *p_iter, rp_hash_tree **p_hash_tree);

        /*! stop iteration on children */
        bool kid_iter_done(void *p_iter);

        /*! \} */

        /*! print this tree to the specified file handle */
        bool print(FILE *out_file = stdout, int depth = 0);

        /*! retrieve name of hash tree */
        const wchar_t *get_name() { return this->name.c_str(); }

    private:

        /*! internal cache of tree name */
        std::wstring name;

        /*! internal hash table map type */
        typedef typename std::map<std::wstring, T> hash_map;

        /*! internal hash table [key -> value] pairs */
        hash_map hash_table;

        /*! internal child set type */
        typedef typename std::multiset<rp_hash_tree *> kid_set;

        /*! internal child nodes */
        kid_set children;

        /*! internal cache of auto_cleanup flag */
        bool auto_cleanup;
};

#endif

