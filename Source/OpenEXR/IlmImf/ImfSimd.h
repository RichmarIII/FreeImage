///////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2012, Autodesk, Inc.
// 
// All rights reserved.
//
// Implementation of IIF-specific file format and speed optimizations 
// provided by Innobec Technologies inc on behalf of Autodesk.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
// *       Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// *       Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
// *       Neither the name of Industrial Light & Magic nor the names of
// its contributors may be used to endorse or promote products derived
// from this software without specific prior written permission. 
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
///////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_IMF_SIMD_H
#define INCLUDED_IMF_SIMD_H

//
// Compile time SSE detection:
//    IMF_HAVE_SSE2 - Defined if it's safe to compile SSE2 optimizations
//


// GCC and Visual Studio SSE2 compiler flags
#if defined __SSE2__ || (_MSC_VER >= 1300 && !_M_CEE_PURE) && !defined(__arm__) && !defined(__aarch64__) && !defined(_M_ARM) && !defined(_M_ARM64) && !defined(_M_ARM64EC)
    #define IMF_HAVE_SSE2 1
#endif

extern "C"
{
#if IMF_HAVE_SSE2
    #include <emmintrin.h>
    #include <mmintrin.h>
#endif
}

#endif
