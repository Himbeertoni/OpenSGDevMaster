/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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


#ifndef _OSGTOGGLEBUTTONFIELDS_H_
#define _OSGTOGGLEBUTTONFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class ToggleButton;

OSG_GEN_CONTAINERPTR(ToggleButton);
/*! \ingroup GrpContribToolboxUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribToolboxUserInterface
 */
template <>
struct FieldTraits<ToggleButton *, nsOSG> :
    public FieldTraitsFCPtrBase<ToggleButton *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<ToggleButton *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<ToggleButton *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdToggleButtonPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<ToggleButton *,
                      RecordedRefCountPolicy, nsOSG  > SFRecToggleButtonPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<ToggleButton *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecToggleButtonPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<ToggleButton *,
                      WeakRefCountPolicy, nsOSG      > SFWeakToggleButtonPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<ToggleButton *,
                      NoRefCountPolicy, nsOSG        > SFUncountedToggleButtonPtr;


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<ToggleButton *,
                      RecordedRefCountPolicy, nsOSG  > MFRecToggleButtonPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<ToggleButton *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecToggleButtonPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<ToggleButton *,
                      WeakRefCountPolicy, nsOSG      > MFWeakToggleButtonPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<ToggleButton *,
                      NoRefCountPolicy, nsOSG        > MFUncountedToggleButtonPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFRecToggleButtonPtr : 
    public PointerSField<ToggleButton *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUnrecToggleButtonPtr : 
    public PointerSField<ToggleButton *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFWeakToggleButtonPtr :
    public PointerSField<ToggleButton *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUncountedToggleButtonPtr :
    public PointerSField<ToggleButton *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFRecToggleButtonPtr :
    public PointerMField<ToggleButton *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUnrecToggleButtonPtr :
    public PointerMField<ToggleButton *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFWeakToggleButtonPtr :
    public PointerMField<ToggleButton *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUncountedToggleButtonPtr :
    public PointerMField<ToggleButton *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTOGGLEBUTTONFIELDS_H_ */
