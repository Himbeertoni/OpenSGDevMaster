/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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


#ifndef _OSGCOLORLAYERFIELDS_H_
#define _OSGCOLORLAYERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ColorLayer;

OSG_GEN_CONTAINERPTR(ColorLayer);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ColorLayer *> :
    public FieldTraitsFCPtrBase<ColorLayer *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ColorLayer *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFColorLayerPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFColorLayerPtr"; }
};

template<> inline
const Char8 *FieldTraits<ColorLayer *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecColorLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorLayer *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecColorLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorLayer *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakColorLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorLayer *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdColorLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorLayer *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecColorLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorLayer *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecColorLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorLayer *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakColorLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorLayer *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdColorLayerPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ColorLayer *,
                      RecordedRefCountPolicy  > SFRecColorLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ColorLayer *,
                      UnrecordedRefCountPolicy> SFUnrecColorLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ColorLayer *,
                      WeakRefCountPolicy      > SFWeakColorLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ColorLayer *,
                      NoRefCountPolicy        > SFUncountedColorLayerPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ColorLayer *,
                      RecordedRefCountPolicy  > MFRecColorLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ColorLayer *,
                      UnrecordedRefCountPolicy> MFUnrecColorLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ColorLayer *,
                      WeakRefCountPolicy      > MFWeakColorLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ColorLayer *,
                      NoRefCountPolicy        > MFUncountedColorLayerPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecColorLayerPtr : 
    public PointerSField<ColorLayer *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecColorLayerPtr : 
    public PointerSField<ColorLayer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakColorLayerPtr :
    public PointerSField<ColorLayer *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedColorLayerPtr :
    public PointerSField<ColorLayer *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecColorLayerPtr :
    public PointerMField<ColorLayer *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecColorLayerPtr :
    public PointerMField<ColorLayer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakColorLayerPtr :
    public PointerMField<ColorLayer *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedColorLayerPtr :
    public PointerMField<ColorLayer *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOLORLAYERFIELDS_H_ */
