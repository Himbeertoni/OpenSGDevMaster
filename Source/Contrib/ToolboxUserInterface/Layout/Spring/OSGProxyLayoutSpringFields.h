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


#ifndef _OSGPROXYLAYOUTSPRINGFIELDS_H_
#define _OSGPROXYLAYOUTSPRINGFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ProxyLayoutSpring;

OSG_GEN_CONTAINERPTR(ProxyLayoutSpring);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ProxyLayoutSpring *> :
    public FieldTraitsFCPtrBase<ProxyLayoutSpring *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ProxyLayoutSpring *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFProxyLayoutSpringPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFProxyLayoutSpringPtr"; }
};

template<> inline
const Char8 *FieldTraits<ProxyLayoutSpring *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecProxyLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProxyLayoutSpring *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecProxyLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProxyLayoutSpring *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakProxyLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProxyLayoutSpring *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdProxyLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProxyLayoutSpring *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecProxyLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProxyLayoutSpring *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecProxyLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProxyLayoutSpring *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakProxyLayoutSpringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProxyLayoutSpring *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdProxyLayoutSpringPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ProxyLayoutSpring *,
                      RecordedRefCountPolicy  > SFRecProxyLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ProxyLayoutSpring *,
                      UnrecordedRefCountPolicy> SFUnrecProxyLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ProxyLayoutSpring *,
                      WeakRefCountPolicy      > SFWeakProxyLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ProxyLayoutSpring *,
                      NoRefCountPolicy        > SFUncountedProxyLayoutSpringPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ProxyLayoutSpring *,
                      RecordedRefCountPolicy  > MFRecProxyLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ProxyLayoutSpring *,
                      UnrecordedRefCountPolicy> MFUnrecProxyLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ProxyLayoutSpring *,
                      WeakRefCountPolicy      > MFWeakProxyLayoutSpringPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ProxyLayoutSpring *,
                      NoRefCountPolicy        > MFUncountedProxyLayoutSpringPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecProxyLayoutSpringPtr : 
    public PointerSField<ProxyLayoutSpring *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecProxyLayoutSpringPtr : 
    public PointerSField<ProxyLayoutSpring *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakProxyLayoutSpringPtr :
    public PointerSField<ProxyLayoutSpring *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedProxyLayoutSpringPtr :
    public PointerSField<ProxyLayoutSpring *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecProxyLayoutSpringPtr :
    public PointerMField<ProxyLayoutSpring *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecProxyLayoutSpringPtr :
    public PointerMField<ProxyLayoutSpring *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakProxyLayoutSpringPtr :
    public PointerMField<ProxyLayoutSpring *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedProxyLayoutSpringPtr :
    public PointerMField<ProxyLayoutSpring *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPROXYLAYOUTSPRINGFIELDS_H_ */
