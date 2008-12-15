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


#ifndef _OSGDISPLAYFILTERGROUPFIELDS_H_
#define _OSGDISPLAYFILTERGROUPFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DisplayFilterGroup;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! DisplayFilterGroupPtr

OSG_GEN_CONTAINERPTR(DisplayFilterGroup);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpEffectGroupsFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<DisplayFilterGroup *> :
    public FieldTraitsFCPtrBase<DisplayFilterGroup *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DisplayFilterGroup *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_EFFECTGROUPS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDisplayFilterGroupPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDisplayFilterGroupPtr"; }
};

template<> inline
const Char8 *FieldTraits<DisplayFilterGroup *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDisplayFilterGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilterGroup *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDisplayFilterGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilterGroup *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDisplayFilterGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilterGroup *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDisplayFilterGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilterGroup *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDisplayFilterGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilterGroup *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDisplayFilterGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilterGroup *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDisplayFilterGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilterGroup *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDisplayFilterGroupPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<DisplayFilterGroupPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpEffectGroupsFieldSingle */

typedef PointerSField<DisplayFilterGroup *,
                      RecordedRefCountPolicy  > SFRecDisplayFilterGroupPtr;
typedef PointerSField<DisplayFilterGroup *,
                      UnrecordedRefCountPolicy> SFUnrecDisplayFilterGroupPtr;
typedef PointerSField<DisplayFilterGroup *,
                      WeakRefCountPolicy      > SFWeakDisplayFilterGroupPtr;
typedef PointerSField<DisplayFilterGroup *,
                      NoRefCountPolicy        > SFUncountedDisplayFilterGroupPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpEffectGroupsFieldMulti */

typedef PointerMField<DisplayFilterGroup *,
                      RecordedRefCountPolicy  > MFRecDisplayFilterGroupPtr;
typedef PointerMField<DisplayFilterGroup *,
                      UnrecordedRefCountPolicy> MFUnrecDisplayFilterGroupPtr;
typedef PointerMField<DisplayFilterGroup *,
                      WeakRefCountPolicy      > MFWeakDisplayFilterGroupPtr;
typedef PointerMField<DisplayFilterGroup *,
                      NoRefCountPolicy        > MFUncountedDisplayFilterGroupPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGDISPLAYFILTERGROUPFIELDS_H_ */