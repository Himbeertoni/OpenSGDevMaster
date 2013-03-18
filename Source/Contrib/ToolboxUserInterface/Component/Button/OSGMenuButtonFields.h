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


#ifndef _OSGMENUBUTTONFIELDS_H_
#define _OSGMENUBUTTONFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class MenuButton;

OSG_GEN_CONTAINERPTR(MenuButton);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<MenuButton *> :
    public FieldTraitsFCPtrBase<MenuButton *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<MenuButton *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFMenuButtonPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFMenuButtonPtr"; }
};

template<> inline
const Char8 *FieldTraits<MenuButton *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMenuButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuButton *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMenuButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuButton *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMenuButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuButton *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMenuButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuButton *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMenuButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuButton *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMenuButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuButton *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMenuButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<MenuButton *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMenuButtonPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MenuButton *,
                      RecordedRefCountPolicy  > SFRecMenuButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MenuButton *,
                      UnrecordedRefCountPolicy> SFUnrecMenuButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MenuButton *,
                      WeakRefCountPolicy      > SFWeakMenuButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MenuButton *,
                      NoRefCountPolicy        > SFUncountedMenuButtonPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MenuButton *,
                      RecordedRefCountPolicy  > MFRecMenuButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MenuButton *,
                      UnrecordedRefCountPolicy> MFUnrecMenuButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MenuButton *,
                      WeakRefCountPolicy      > MFWeakMenuButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MenuButton *,
                      NoRefCountPolicy        > MFUncountedMenuButtonPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecMenuButtonPtr : 
    public PointerSField<MenuButton *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecMenuButtonPtr : 
    public PointerSField<MenuButton *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakMenuButtonPtr :
    public PointerSField<MenuButton *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedMenuButtonPtr :
    public PointerSField<MenuButton *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecMenuButtonPtr :
    public PointerMField<MenuButton *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecMenuButtonPtr :
    public PointerMField<MenuButton *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakMenuButtonPtr :
    public PointerMField<MenuButton *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedMenuButtonPtr :
    public PointerMField<MenuButton *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMENUBUTTONFIELDS_H_ */
