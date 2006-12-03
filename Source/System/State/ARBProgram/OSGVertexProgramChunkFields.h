/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGVERTEXPROGRAMCHUNKFIELDS_H_
#define _OSGVERTEXPROGRAMCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGProgramChunkFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class VertexProgramChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! VertexProgramChunkPtr

typedef PointerFwdBuilder<ProgramChunkPtr,
                          ProgramChunkConstPtr,
                          VertexProgramChunk>::ObjPtr         VertexProgramChunkPtr;
typedef PointerFwdBuilder<ProgramChunkPtr,
                          ProgramChunkConstPtr,
                          VertexProgramChunk>::ObjPtrConst    VertexProgramChunkPtrConst;
typedef PointerFwdBuilder<ProgramChunkPtr,
                          ProgramChunkConstPtr,
                          VertexProgramChunk>::ObjConstPtr    VertexProgramChunkConstPtr;
typedef PointerFwdBuilder<ProgramChunkPtr,
                          ProgramChunkConstPtr,
                          VertexProgramChunk>::ObjPtrArg      VertexProgramChunkPtrArg;
typedef PointerFwdBuilder<ProgramChunkPtr,
                          ProgramChunkConstPtr,
                          VertexProgramChunk>::ObjConstPtrArg VertexProgramChunkConstPtrArg;
typedef PointerFwdBuilder<ProgramChunkPtr,
                          ProgramChunkConstPtr,
                          VertexProgramChunk>::ObjPtrConstArg VertexProgramChunkPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpStateFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<VertexProgramChunkPtr> :
    public FieldTraitsTemplateBase<VertexProgramChunkPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<VertexProgramChunkPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING
                     DataType &getType (void);

    static const char *getSName(void) { return "SFVertexProgramChunkPtr"; }
    static const char *getMName(void) { return "MFVertexProgramChunkPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<VertexProgramChunkPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldSingle */

typedef SFieldAdaptor<VertexProgramChunkPtr, SFFieldContainerPtr> SFVertexProgramChunkPtr;
#endif

#ifndef OSG_COMPILEVERTEXPROGRAMCHUNKINST
OSG_FIELD_DLLEXPORT_DECL1(SField, VertexProgramChunkPtr, OSG_STATE_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldMulti */

typedef MFieldAdaptor<VertexProgramChunkPtr, MFFieldContainerPtr> MFVertexProgramChunkPtr;
#endif

#ifndef OSG_COMPILEVERTEXPROGRAMCHUNKINST
OSG_FIELD_DLLEXPORT_DECL1(MField, VertexProgramChunkPtr, OSG_STATE_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGVERTEXPROGRAMCHUNKFIELDS_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGVERTEXPROGRAMCHUNKFIELDS_H_ */
