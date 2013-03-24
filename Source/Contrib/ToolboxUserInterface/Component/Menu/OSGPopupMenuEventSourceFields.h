/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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


#ifndef _OSGPOPUPMENUEVENTSOURCEFIELDS_H_
#define _OSGPOPUPMENUEVENTSOURCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class PopupMenuEventSource;

OSG_GEN_CONTAINERPTR(PopupMenuEventSource);
/*! \ingroup GrpContribToolboxUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribToolboxUserInterface
 */
template <>
struct FieldTraits<PopupMenuEventSource *, nsOSG> :
    public FieldTraitsFCPtrBase<PopupMenuEventSource *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<PopupMenuEventSource *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<PopupMenuEventSource *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPopupMenuEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenuEventSource *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPopupMenuEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenuEventSource *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPopupMenuEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenuEventSource *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPopupMenuEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenuEventSource *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPopupMenuEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenuEventSource *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPopupMenuEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenuEventSource *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPopupMenuEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenuEventSource *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPopupMenuEventSourcePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<PopupMenuEventSource *,
                      RecordedRefCountPolicy, nsOSG  > SFRecPopupMenuEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<PopupMenuEventSource *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecPopupMenuEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<PopupMenuEventSource *,
                      WeakRefCountPolicy, nsOSG      > SFWeakPopupMenuEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<PopupMenuEventSource *,
                      NoRefCountPolicy, nsOSG        > SFUncountedPopupMenuEventSourcePtr;


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<PopupMenuEventSource *,
                      RecordedRefCountPolicy, nsOSG  > MFRecPopupMenuEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<PopupMenuEventSource *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecPopupMenuEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<PopupMenuEventSource *,
                      WeakRefCountPolicy, nsOSG      > MFWeakPopupMenuEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<PopupMenuEventSource *,
                      NoRefCountPolicy, nsOSG        > MFUncountedPopupMenuEventSourcePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFRecPopupMenuEventSourcePtr : 
    public PointerSField<PopupMenuEventSource *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUnrecPopupMenuEventSourcePtr : 
    public PointerSField<PopupMenuEventSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFWeakPopupMenuEventSourcePtr :
    public PointerSField<PopupMenuEventSource *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUncountedPopupMenuEventSourcePtr :
    public PointerSField<PopupMenuEventSource *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFRecPopupMenuEventSourcePtr :
    public PointerMField<PopupMenuEventSource *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUnrecPopupMenuEventSourcePtr :
    public PointerMField<PopupMenuEventSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFWeakPopupMenuEventSourcePtr :
    public PointerMField<PopupMenuEventSource *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUncountedPopupMenuEventSourcePtr :
    public PointerMField<PopupMenuEventSource *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPOPUPMENUEVENTSOURCEFIELDS_H_ */
