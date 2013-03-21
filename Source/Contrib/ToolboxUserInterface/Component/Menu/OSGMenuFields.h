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


#ifndef _OSGMENUFIELDS_H_
#define _OSGMENUFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Menu;

OSG_GEN_CONTAINERPTR(Menu);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<Menu *> :
    public FieldTraitsFCPtrBase<Menu *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Menu *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFMenuPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFMenuPtr"; }
};

template<> inline
const Char8 *FieldTraits<Menu *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<Menu *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<Menu *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<Menu *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<Menu *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<Menu *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<Menu *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<Menu *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMenuPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Menu *,
                      RecordedRefCountPolicy  > SFRecMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Menu *,
                      UnrecordedRefCountPolicy> SFUnrecMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Menu *,
                      WeakRefCountPolicy      > SFWeakMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Menu *,
                      NoRefCountPolicy        > SFUncountedMenuPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Menu *,
                      RecordedRefCountPolicy  > MFRecMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Menu *,
                      UnrecordedRefCountPolicy> MFUnrecMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Menu *,
                      WeakRefCountPolicy      > MFWeakMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Menu *,
                      NoRefCountPolicy        > MFUncountedMenuPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecMenuPtr : 
    public PointerSField<Menu *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecMenuPtr : 
    public PointerSField<Menu *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakMenuPtr :
    public PointerSField<Menu *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedMenuPtr :
    public PointerSField<Menu *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecMenuPtr :
    public PointerMField<Menu *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecMenuPtr :
    public PointerMField<Menu *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakMenuPtr :
    public PointerMField<Menu *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedMenuPtr :
    public PointerMField<Menu *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMENUFIELDS_H_ */
