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


#ifndef _OSGSCALELAYOUTSPRINGFIELDS_H_
#define _OSGSCALELAYOUTSPRINGFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ScaleLayoutSpring;

OSG_GEN_CONTAINERPTR(ScaleLayoutSpring);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ScaleLayoutSpring *> :
    public FieldTraitsFCPtrBase<ScaleLayoutSpring *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ScaleLayoutSpring *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFScaleLayoutSpringPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFScaleLayoutSpringPtr"; }
};

template<> inline
const Char8 *FieldTraits<ScaleLayoutSpring *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecScaleLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScaleLayoutSpring *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecScaleLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScaleLayoutSpring *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakScaleLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScaleLayoutSpring *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdScaleLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScaleLayoutSpring *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecScaleLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScaleLayoutSpring *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecScaleLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScaleLayoutSpring *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakScaleLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScaleLayoutSpring *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdScaleLayoutSpringPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ScaleLayoutSpring *,
                      RecordedRefCountPolicy  > SFRecScaleLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ScaleLayoutSpring *,
                      UnrecordedRefCountPolicy> SFUnrecScaleLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ScaleLayoutSpring *,
                      WeakRefCountPolicy      > SFWeakScaleLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ScaleLayoutSpring *,
                      NoRefCountPolicy        > SFUncountedScaleLayoutSpringPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ScaleLayoutSpring *,
                      RecordedRefCountPolicy  > MFRecScaleLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ScaleLayoutSpring *,
                      UnrecordedRefCountPolicy> MFUnrecScaleLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ScaleLayoutSpring *,
                      WeakRefCountPolicy      > MFWeakScaleLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ScaleLayoutSpring *,
                      NoRefCountPolicy        > MFUncountedScaleLayoutSpringPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecScaleLayoutSpringPtr : 
    public PointerSField<ScaleLayoutSpring *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecScaleLayoutSpringPtr : 
    public PointerSField<ScaleLayoutSpring *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakScaleLayoutSpringPtr :
    public PointerSField<ScaleLayoutSpring *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedScaleLayoutSpringPtr :
    public PointerSField<ScaleLayoutSpring *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecScaleLayoutSpringPtr :
    public PointerMField<ScaleLayoutSpring *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecScaleLayoutSpringPtr :
    public PointerMField<ScaleLayoutSpring *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakScaleLayoutSpringPtr :
    public PointerMField<ScaleLayoutSpring *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedScaleLayoutSpringPtr :
    public PointerMField<ScaleLayoutSpring *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSCALELAYOUTSPRINGFIELDS_H_ */
