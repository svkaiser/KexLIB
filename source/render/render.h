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

#ifndef __RENDER_H__
#define __RENDER_H__

#include "kexlib.h"
#include "renderBackend.h"
#include "shaderProg.h"
#include "fbo.h"
#include "image.h"
#include "renderFont.h"
#include "textureObject.h"
#include "cpuVertexList.h"

KEXLIB_NAMESPACE_START(kexlib)
KEXLIB_NAMESPACE_START(render)

extern kexRenderBackend *backend;
extern kexCpuVertList *cpuVertList;

KEXLIB_NAMESPACE_END
KEXLIB_NAMESPACE_END

#endif
