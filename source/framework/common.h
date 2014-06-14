// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// Copyright(C) 2007-2012 Samuel Villarreal
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.
//
//-----------------------------------------------------------------------------

#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#ifdef _MSC_VER
#include "opndir.h"
#else
#include <dirent.h>
#endif
#include <new>

#define MAX_FILEPATH    256
#define MAX_HASH        2048

typedef unsigned char   byte;
typedef unsigned short  word;
typedef unsigned long   ulong;
typedef int             kbool;
typedef unsigned int    dtexture;
typedef unsigned int    rcolor;
typedef char            filepath_t[MAX_FILEPATH];

#if defined(_MSC_VER)
typedef signed __int8 int8_t;
typedef unsigned __int8 uint8_t;
typedef signed __int16 int16_t;
typedef unsigned __int16 uint16_t;
typedef signed __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef signed __int64 int64_t;
typedef unsigned __int64 uint64_t;
#endif

typedef union {
    int     i;
    float   f;
} fint_t;

#define ASCII_SLASH		47
#define ASCII_BACKSLASH 92

#ifdef _WIN32

#define DIR_SEPARATOR '\\'
#define PATH_SEPARATOR ';'

#else

#define DIR_SEPARATOR '/'
#define PATH_SEPARATOR ':'

#endif

#include <limits.h>
#define D_MININT INT_MIN
#define D_MAXINT INT_MAX

#ifndef MAX
#define MAX(a,b) ((a)>(b)?(a):(b))
#endif

#ifndef MIN
#define MIN(a,b) ((a)<(b)?(a):(b))
#endif

#ifndef BETWEEN
#define BETWEEN(l,u,x) ((l)>(x)?(l):(x)>(u)?(u):(x))
#endif

#ifndef BIT
#define BIT(num) (1<<(num))
#endif

#if defined(__WIN32__) && !defined(__GNUC__)
#define KDECL __cdecl
#else
#define KDECL
#endif

// attribute hints are available only under GNU C

#ifndef __GNUC__
#define __attribute__(x)
#endif

// function inlining is available on most platforms, however,
// the GNU C __inline__ is too common and conflicts with a 
// definition in SDL, so it needs to be factored out into a 
// custom macro definition

#if defined(__GNUC__)
#define d_inline __inline__
#elif defined(_MSC_VER) || defined(WIN32)
#define d_inline __forceinline
#else
#define d_inline
#endif

#define KEXLIB_NAMESPACE_START  namespace kexlib {
#define KEXLIB_NAMESPACE_END    }

#define RGBA(r,g,b,a) ((rcolor)((((a)&0xff)<<24)|(((b)&0xff)<<16)|(((g)&0xff)<<8)|((r)&0xff)))

#define COLOR_WHITE         RGBA(0xFF, 0xFF, 0xFF, 0xFF)
#define COLOR_WHITE_A(a)    RGBA(0xFF, 0xFF, 0xFF, a)
#define COLOR_RED           RGBA(0xFF, 0, 0, 0xFF)
#define COLOR_GREEN         RGBA(0, 0xFF, 0, 0xFF)
#define COLOR_YELLOW        RGBA(0xFF, 0xFF, 0, 0xFF)
#define COLOR_CYAN          RGBA(0, 0xFF, 0xFF, 0xFF)

#endif