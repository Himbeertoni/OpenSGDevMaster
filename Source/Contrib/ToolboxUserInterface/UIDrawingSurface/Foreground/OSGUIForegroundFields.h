/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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


#ifndef _OSGUIFOREGROUNDFIELDS_H_
#define _OSGUIFOREGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class UIForeground;

OSG_GEN_CONTAINERPTR(UIForeground);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<UIForeground *> :
    public FieldTraitsFCPtrBase<UIForeground *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<UIForeground *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFUIForegroundPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFUIForegroundPtr"; }
};

template<> inline
const Char8 *FieldTraits<UIForeground *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecUIForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIForeground *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecUIForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIForeground *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakUIForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIForeground *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdUIForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIForeground *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecUIForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIForeground *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecUIForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIForeground *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakUIForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIForeground *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdUIForegroundPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<UIForeground *,
                      RecordedRefCountPolicy  > SFRecUIForegroundPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<UIForeground *,
                      UnrecordedRefCountPolicy> SFUnrecUIForegroundPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<UIForeground *,
                      WeakRefCountPolicy      > SFWeakUIForegroundPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<UIForeground *,
                      NoRefCountPolicy        > SFUncountedUIForegroundPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<UIForeground *,
                      RecordedRefCountPolicy  > MFRecUIForegroundPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<UIForeground *,
                      UnrecordedRefCountPolicy> MFUnrecUIForegroundPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<UIForeground *,
                      WeakRefCountPolicy      > MFWeakUIForegroundPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<UIForeground *,
                      NoRefCountPolicy        > MFUncountedUIForegroundPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecUIForegroundPtr : 
    public PointerSField<UIForeground *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecUIForegroundPtr : 
    public PointerSField<UIForeground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakUIForegroundPtr :
    public PointerSField<UIForeground *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedUIForegroundPtr :
    public PointerSField<UIForeground *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecUIForegroundPtr :
    public PointerMField<UIForeground *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecUIForegroundPtr :
    public PointerMField<UIForeground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakUIForegroundPtr :
    public PointerMField<UIForeground *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedUIForegroundPtr :
    public PointerMField<UIForeground *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGUIFOREGROUNDFIELDS_H_ */
