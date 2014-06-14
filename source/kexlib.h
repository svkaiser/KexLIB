// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// Copyright(C) 2007-2014 Samuel Villarreal
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

#ifndef __KEXLIB_H__
#define __KEXLIB_H__

#include "common.h"
#include "mathlib.h"
#include "system.h"
#include "kstring.h"
#include "inputSystem.h"
#include "cmd.h"
#include "cvar.h"
#include "array.h"
#include "object.h"
#include "memHeap.h"
#include "keymap.h"
#include "fileSystem.h"
#include "binFile.h"
#include "cachefilelist.h"
#include "keyinput.h"
#include "parser.h"
#include "defs.h"

KEXLIB_NAMESPACE_START

extern kexCvar cvarDeveloper;

extern kexSystem *system;
extern kexInputSystem *inputSystem;
extern kexFileSystem *fileSystem;
extern kexCvarManager *cvars;
extern kexCommand *commands;
extern kexInputKey *inputBinds;
extern kexParser *parser;
extern kexDefManager *defs;

KEXLIB_NAMESPACE_END

#endif
