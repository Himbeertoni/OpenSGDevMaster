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


#ifndef _OSGCOMPONENTHEIGHTLAYOUTSPRINGFIELDS_H_
#define _OSGCOMPONENTHEIGHTLAYOUTSPRINGFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ComponentHeightLayoutSpring;

OSG_GEN_CONTAINERPTR(ComponentHeightLayoutSpring);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ComponentHeightLayoutSpring *> :
    public FieldTraitsFCPtrBase<ComponentHeightLayoutSpring *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ComponentHeightLayoutSpring *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFComponentHeightLayoutSpringPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFComponentHeightLayoutSpringPtr"; }
};

template<> inline
const Char8 *FieldTraits<ComponentHeightLayoutSpring *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecComponentHeightLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComponentHeightLayoutSpring *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecComponentHeightLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComponentHeightLayoutSpring *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakComponentHeightLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComponentHeightLayoutSpring *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdComponentHeightLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComponentHeightLayoutSpring *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecComponentHeightLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComponentHeightLayoutSpring *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecComponentHeightLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComponentHeightLayoutSpring *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakComponentHeightLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComponentHeightLayoutSpring *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdComponentHeightLayoutSpringPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComponentHeightLayoutSpring *,
                      RecordedRefCountPolicy  > SFRecComponentHeightLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComponentHeightLayoutSpring *,
                      UnrecordedRefCountPolicy> SFUnrecComponentHeightLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComponentHeightLayoutSpring *,
                      WeakRefCountPolicy      > SFWeakComponentHeightLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComponentHeightLayoutSpring *,
                      NoRefCountPolicy        > SFUncountedComponentHeightLayoutSpringPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComponentHeightLayoutSpring *,
                      RecordedRefCountPolicy  > MFRecComponentHeightLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComponentHeightLayoutSpring *,
                      UnrecordedRefCountPolicy> MFUnrecComponentHeightLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComponentHeightLayoutSpring *,
                      WeakRefCountPolicy      > MFWeakComponentHeightLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComponentHeightLayoutSpring *,
                      NoRefCountPolicy        > MFUncountedComponentHeightLayoutSpringPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecComponentHeightLayoutSpringPtr : 
    public PointerSField<ComponentHeightLayoutSpring *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecComponentHeightLayoutSpringPtr : 
    public PointerSField<ComponentHeightLayoutSpring *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakComponentHeightLayoutSpringPtr :
    public PointerSField<ComponentHeightLayoutSpring *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedComponentHeightLayoutSpringPtr :
    public PointerSField<ComponentHeightLayoutSpring *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecComponentHeightLayoutSpringPtr :
    public PointerMField<ComponentHeightLayoutSpring *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecComponentHeightLayoutSpringPtr :
    public PointerMField<ComponentHeightLayoutSpring *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakComponentHeightLayoutSpringPtr :
    public PointerMField<ComponentHeightLayoutSpring *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedComponentHeightLayoutSpringPtr :
    public PointerMField<ComponentHeightLayoutSpring *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOMPONENTHEIGHTLAYOUTSPRINGFIELDS_H_ */
