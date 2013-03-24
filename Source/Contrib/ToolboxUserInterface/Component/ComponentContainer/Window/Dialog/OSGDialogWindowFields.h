/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
 *          Mark Stenerson                                                   *
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


#ifndef _OSGDIALOGWINDOWFIELDS_H_
#define _OSGDIALOGWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class DialogWindow;

OSG_GEN_CONTAINERPTR(DialogWindow);
/*! \ingroup GrpContribToolboxUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribToolboxUserInterface
 */
template <>
struct FieldTraits<DialogWindow *, nsOSG> :
    public FieldTraitsFCPtrBase<DialogWindow *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<DialogWindow *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<DialogWindow *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDialogWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindow *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDialogWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindow *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDialogWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindow *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDialogWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindow *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDialogWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindow *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDialogWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindow *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDialogWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindow *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDialogWindowPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<DialogWindow *,
                      RecordedRefCountPolicy, nsOSG  > SFRecDialogWindowPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<DialogWindow *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecDialogWindowPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<DialogWindow *,
                      WeakRefCountPolicy, nsOSG      > SFWeakDialogWindowPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<DialogWindow *,
                      NoRefCountPolicy, nsOSG        > SFUncountedDialogWindowPtr;


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<DialogWindow *,
                      RecordedRefCountPolicy, nsOSG  > MFRecDialogWindowPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<DialogWindow *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecDialogWindowPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<DialogWindow *,
                      WeakRefCountPolicy, nsOSG      > MFWeakDialogWindowPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<DialogWindow *,
                      NoRefCountPolicy, nsOSG        > MFUncountedDialogWindowPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFRecDialogWindowPtr : 
    public PointerSField<DialogWindow *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUnrecDialogWindowPtr : 
    public PointerSField<DialogWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFWeakDialogWindowPtr :
    public PointerSField<DialogWindow *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUncountedDialogWindowPtr :
    public PointerSField<DialogWindow *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFRecDialogWindowPtr :
    public PointerMField<DialogWindow *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUnrecDialogWindowPtr :
    public PointerMField<DialogWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFWeakDialogWindowPtr :
    public PointerMField<DialogWindow *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUncountedDialogWindowPtr :
    public PointerMField<DialogWindow *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDIALOGWINDOWFIELDS_H_ */
