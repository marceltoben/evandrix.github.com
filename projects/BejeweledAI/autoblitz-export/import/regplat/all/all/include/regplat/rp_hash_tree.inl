/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_hash_tree.inl
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
 *   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE
 * 
 *****************************************************************************/

#ifndef RP_HASH_TREE_INL
#define RP_HASH_TREE_INL

#include "regplat.h"

template <class T> rp_hash_tree<T>::rp_hash_tree(std::wstring name, bool auto_cleanup) : auto_cleanup(auto_cleanup)
{
    this->name = name;
}

template <class T> rp_hash_tree<T>::~rp_hash_tree()
{
    if(auto_cleanup)
    {
        typename kid_set::const_iterator iter;

        /*! iterate through children */
        for(iter = children.begin(); iter != children.end(); ++iter)
        {
            delete *iter;
        }
    }
}

template <class T> bool rp_hash_tree<T>::kvp_insert(const wchar_t *key, T value)
{
    /*! attempt to insert key, value pair */
    hash_table[key] = value;

    /*! @note we are assuming success from above. is this valid? */
    return true;
}

template <class T> bool rp_hash_tree<T>::kvp_get_value(const wchar_t *key, T &value)
{
    /*! attempt to retrieve key */
    typename hash_map::const_iterator iter = hash_table.find(key);

    /*! detect failure */
    if(iter == hash_table.end()) { return false; }

    /*! assign return parameter */
    value = iter->second;

    return true;
}

template <class T> void *rp_hash_tree<T>::kvp_iter_init()
{
    /*! allocate iterator */
    typename hash_map::const_iterator *p_iter = new typename hash_map::const_iterator;

    /*! begin iterator */
    *p_iter = hash_table.begin();

    /*! return iterator */
    return (void*)p_iter;
}

template <class T> bool rp_hash_tree<T>::kvp_iter_next(void *p_iter, const wchar_t **p_key, T *p_value)
{
    /*! sanity check */
    if(p_iter == 0) { return false; }

    /*! obtain reference to iterator */
    typename hash_map::const_iterator &iter = *(typename hash_map::const_iterator*)p_iter;

    /*! detect if we have no more to iterate */
    if(iter == hash_table.end()) { return false; }

    /*! assign return values */
    if(p_key != 0) { *p_key = iter->first.c_str(); }
    if(p_value != 0) { *p_value = iter->second; }

    /*! increment iterator */
    ++iter;

    return true;
}

template <class T> bool rp_hash_tree<T>::kvp_iter_done(void *p_iter)
{
    /*! sanity check */
    if(p_iter == 0) { return false; }

    /*! cleanup iterator */
    delete (typename hash_map::const_iterator*)p_iter;

    return true;
}

template <class T> bool rp_hash_tree<T>::kid_insert(rp_hash_tree<T> *p_hash_tree)
{
    /*! sanity check */
    if(p_hash_tree == 0) { return false; }

    /*! attempt to insert hash tree */
    children.insert(p_hash_tree);

    /*! @note we are assuming success from above. is this valid? */
    return true;
}

template <class T> void *rp_hash_tree<T>::kid_iter_init()
{
    /*! allocate iterator */
    typename kid_set::const_iterator *p_iter = new typename kid_set::const_iterator;

    /*! begin iterator */
    *p_iter = children.begin();

    /*! return iterator */
    return (void*)p_iter;
}

template <class T> bool rp_hash_tree<T>::kid_iter_next(void *p_iter, rp_hash_tree **p_hash_tree)
{
    /*! sanity check */
    if(p_iter == 0) { return false; }

    /*! obtain reference to iterator */
    typename kid_set::const_iterator &iter = *(typename kid_set::const_iterator*)p_iter;

    /*! detect if we have no more to iterate */
    if(iter == children.end()) { return false; }

    /*! assign return value */
    if(p_hash_tree != 0) { *p_hash_tree = *iter; }

    /*! increment iterator */
    ++iter;

    return true;
}

template <class T> bool rp_hash_tree<T>::kid_iter_done(void *p_iter)
{
    /*! sanity check */
    if(p_iter == 0) { return false; }

    /*! cleanup iterator */
    delete (typename kid_set::const_iterator*)p_iter;

    return true;
}

template <class T> bool rp_hash_tree<T>::print(FILE *out_file, int depth)
{
    std::wostringstream cur_text;

    /*! append depth of spaces */
    {
        int v;

        for(v=0;v<depth;v++)
        {
            cur_text << "  ";
        }
    }

    cur_text << L"<" << name;

    /*! add key, value pairs */
    {
        typename hash_map::const_iterator iter;

        for(iter = hash_table.begin(); iter != hash_table.end(); ++iter)
        {
            cur_text << L" " << iter->first;
            cur_text << L"=\"" << iter->second << L"\"";
        }
    }

    /*! add children */
    if(children.size() > 0)
    {
        cur_text << L">\n";

        fprintf(out_file, "%ls", cur_text.str().c_str());

        typename kid_set::const_iterator iter;

        for(iter = children.begin(); iter != children.end(); ++iter)
        {
            rp_hash_tree *p_cur = *iter;

            /*! recursively print children */
            if(p_cur != 0) { p_cur->print(out_file, depth+1); }
        }

        cur_text.str(L"");
        cur_text << L"</" << name << L">\n";
    }
    else
    {
        cur_text << L"/>\n";
    }

    fprintf(out_file, "%ls", cur_text.str().c_str());

    return false;
}

#endif

