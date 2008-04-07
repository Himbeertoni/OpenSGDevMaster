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


#ifndef _OSGTEXTUREENVCHUNKFIELDS_H_
#define _OSGTEXTUREENVCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class TextureEnvChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! TextureEnvChunkPtr

OSG_GEN_CONTAINERPTR(TextureEnvChunk);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpStateFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<TextureEnvChunkPtr> :
    public FieldTraitsFCPtrBase<TextureEnvChunkPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TextureEnvChunkPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTextureEnvChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTextureEnvChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<TextureEnvChunkPtr, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunkPtr, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunkPtr, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunkPtr, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunkPtr, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunkPtr, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunkPtr, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunkPtr, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTextureEnvChunkPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<TextureEnvChunkPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldSingle */

typedef FieldContainerPtrSField<TextureEnvChunkPtr,
                                RecordedRefCountPolicy  > SFRecTextureEnvChunkPtr;
typedef FieldContainerPtrSField<TextureEnvChunkPtr,
                                UnrecordedRefCountPolicy> SFUnrecTextureEnvChunkPtr;
typedef FieldContainerPtrSField<TextureEnvChunkPtr,
                                WeakRefCountPolicy      > SFWeakTextureEnvChunkPtr;
typedef FieldContainerPtrSField<TextureEnvChunkPtr,
                                NoRefCountPolicy        > SFUncountedTextureEnvChunkPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldMulti */

typedef FieldContainerPtrMField<TextureEnvChunkPtr,
                                RecordedRefCountPolicy  > MFRecTextureEnvChunkPtr;
typedef FieldContainerPtrMField<TextureEnvChunkPtr,
                                UnrecordedRefCountPolicy> MFUnrecTextureEnvChunkPtr;
typedef FieldContainerPtrMField<TextureEnvChunkPtr,
                                WeakRefCountPolicy      > MFWeakTextureEnvChunkPtr;
typedef FieldContainerPtrMField<TextureEnvChunkPtr,
                                NoRefCountPolicy        > MFUncountedTextureEnvChunkPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGTEXTUREENVCHUNKFIELDS_H_ */