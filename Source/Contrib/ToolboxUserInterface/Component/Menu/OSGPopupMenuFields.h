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


#ifndef _OSGPOPUPMENUFIELDS_H_
#define _OSGPOPUPMENUFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PopupMenu;

OSG_GEN_CONTAINERPTR(PopupMenu);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<PopupMenu *> :
    public FieldTraitsFCPtrBase<PopupMenu *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PopupMenu *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPopupMenuPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPopupMenuPtr"; }
};

template<> inline
const Char8 *FieldTraits<PopupMenu *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPopupMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenu *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPopupMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenu *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPopupMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenu *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPopupMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenu *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPopupMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenu *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPopupMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenu *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPopupMenuPtr"; 
}

template<> inline
const Char8 *FieldTraits<PopupMenu *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPopupMenuPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<PopupMenu *,
                      RecordedRefCountPolicy  > SFRecPopupMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<PopupMenu *,
                      UnrecordedRefCountPolicy> SFUnrecPopupMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<PopupMenu *,
                      WeakRefCountPolicy      > SFWeakPopupMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<PopupMenu *,
                      NoRefCountPolicy        > SFUncountedPopupMenuPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<PopupMenu *,
                      RecordedRefCountPolicy  > MFRecPopupMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<PopupMenu *,
                      UnrecordedRefCountPolicy> MFUnrecPopupMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<PopupMenu *,
                      WeakRefCountPolicy      > MFWeakPopupMenuPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<PopupMenu *,
                      NoRefCountPolicy        > MFUncountedPopupMenuPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecPopupMenuPtr : 
    public PointerSField<PopupMenu *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecPopupMenuPtr : 
    public PointerSField<PopupMenu *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakPopupMenuPtr :
    public PointerSField<PopupMenu *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedPopupMenuPtr :
    public PointerSField<PopupMenu *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecPopupMenuPtr :
    public PointerMField<PopupMenu *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecPopupMenuPtr :
    public PointerMField<PopupMenu *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakPopupMenuPtr :
    public PointerMField<PopupMenu *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedPopupMenuPtr :
    public PointerMField<PopupMenu *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPOPUPMENUFIELDS_H_ */
