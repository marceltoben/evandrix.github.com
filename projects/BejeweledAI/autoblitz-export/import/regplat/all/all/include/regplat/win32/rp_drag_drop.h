/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_drag_drop.h
 * Desc := Drag and drop class
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

#ifndef RP_DRAG_DROP_H
#define RP_DRAG_DROP_H

#include "../rp_types.h"

#include <windows.h>

/*! @brief Drag and drop class. */
class rp_drag_drop
{
    public:

        rp_drag_drop();
        virtual ~rp_drag_drop();

        /*! start drag and drop operation with the specified filename */
        bool start(const wchar_t *filename);

        /*! start drag and drop operation with the specified list of filenames */
        bool start(std::vector<std::wstring> &filelist);

    private:

        /*! drop source implementation */
        class CDropSource : public IDropSource
        {
            public:

                CDropSource() : lRefCount(1) { }

                /*! \brief IUnknown interface */
                /*! \{ */
                HRESULT __stdcall QueryInterface(REFIID iid, void **ppvObject);
                ULONG __stdcall AddRef();
                ULONG __stdcall Release();
                /*! \} */

                /*! \brief IDropSource interface */
                /*! \{ */
                HRESULT __stdcall QueryContinueDrag(BOOL fEscapePressed, DWORD grfKeyState);
                HRESULT __stdcall GiveFeedback(DWORD dwEffect);
                /*! \} */

            private:

                /*! reference count */
                LONG lRefCount;
        };

        /*! data object implementation */
        class CDataObject : public IDataObject
        {
            public:

                CDataObject(FORMATETC *fmt, STGMEDIUM *stdmed, int count);
               ~CDataObject();

                /*! \brief IUnknown interface */
                /*! \{ */
                HRESULT __stdcall QueryInterface(REFIID iid, void **ppvObject);
                ULONG __stdcall AddRef();
                ULONG __stdcall Release();
                /*! \} */

                /*! \brief IDataObject interface */
                /*! \{ */
                HRESULT __stdcall GetData(FORMATETC *pFormatEtc, STGMEDIUM *pMedium);
                HRESULT __stdcall GetDataHere(FORMATETC *pFormatEtc, STGMEDIUM *pMedium);
                HRESULT __stdcall QueryGetData(FORMATETC *pFormatEtc);
                HRESULT __stdcall GetCanonicalFormatEtc(FORMATETC *pFormatEtc, FORMATETC *pFormatEtcOut);
                HRESULT __stdcall SetData(FORMATETC *pFormatEtc, STGMEDIUM *pMedium, BOOL fRelease);
                HRESULT __stdcall EnumFormatEtc(DWORD dwDirection, IEnumFORMATETC **ppEnumFormatEtc);
                HRESULT __stdcall DAdvise(FORMATETC *pFormatEtc, DWORD advf, IAdviseSink *pAdvSink, DWORD *pdwConnection);
                HRESULT __stdcall DUnadvise(DWORD dwConnection);
                HRESULT __stdcall EnumDAdvise(IEnumSTATDATA **ppEnumAdvise);
                /*! \} */

            private:

                /*! lookup the index of the specified format */
                int LookupFormatEtc(FORMATETC *pFormatEtc);

                /*! reference count */
                LONG lRefCount;

                /*! format array */
                FORMATETC *pFormatEtc;

                /*! storage medium array */
                STGMEDIUM *pStgMedium;

                /*! number of formats */
                LONG nNumFormats;
        };
};

#endif

