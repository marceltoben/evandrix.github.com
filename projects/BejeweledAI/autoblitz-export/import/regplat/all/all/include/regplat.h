/******************************************************************************
 * 
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := regplat.h
 * Desc := Primary project include file
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

#ifndef REGPLAT_H
#define REGPLAT_H

/*! header files */
#include "regplat/rp_types.h"
#include "regplat/rp_wchar.h"
#include "regplat/rp_debug.h"
#include "regplat/rp_array_list.h"
#include "regplat/rp_auto_delete.h"
#include "regplat/rp_auto_malloc.h"
#include "regplat/rp_auto_mutex.h"
#include "regplat/rp_auto_mutex_rw.h"
#include "regplat/rp_binary.h"
#include "regplat/rp_capi.h"
#include "regplat/rp_clock.h"
#include "regplat/rp_event.h"
#include "regplat/rp_file.h"
#include "regplat/rp_find_file.h"
#include "regplat/rp_fps.h"
#include "regplat/rp_hash_tree.h"
#include "regplat/rp_http.h"
#include "regplat/rp_jpeg.h"
#include "regplat/rp_math.h"
#include "regplat/rp_mutex.h"
#include "regplat/rp_mutex_rw.h"
#include "regplat/rp_net.h"
#include "regplat/rp_net_conn.h"
#include "regplat/rp_render.h"
#include "regplat/rp_stream.h"
#include "regplat/rp_string.h"
#include "regplat/rp_tcp_conn.h"
#include "regplat/rp_tcp_listener.h"
#include "regplat/rp_thread.h"
#include "regplat/rp_utf.h"

/*! template implementation files */
#include "regplat/rp_hash_tree.inl"

#endif
