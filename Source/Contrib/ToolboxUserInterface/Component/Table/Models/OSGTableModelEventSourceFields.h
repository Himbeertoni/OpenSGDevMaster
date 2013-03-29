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


#ifndef _OSGTABLEMODELEVENTSOURCEFIELDS_H_
#define _OSGTABLEMODELEVENTSOURCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class TableModelEventSource;

OSG_GEN_CONTAINERPTR(TableModelEventSource);
/*! \ingroup GrpContribToolboxUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribToolboxUserInterface
 */
template <>
struct FieldTraits<TableModelEventSource *, nsOSG> :
    public FieldTraitsFCPtrBase<TableModelEventSource *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<TableModelEventSource *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<TableModelEventSource *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTableModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModelEventSource *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTableModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModelEventSource *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTableModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModelEventSource *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTableModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModelEventSource *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTableModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModelEventSource *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTableModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModelEventSource *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTableModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableModelEventSource *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTableModelEventSourcePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TableModelEventSource *,
                      RecordedRefCountPolicy, nsOSG  > SFRecTableModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TableModelEventSource *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecTableModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TableModelEventSource *,
                      WeakRefCountPolicy, nsOSG      > SFWeakTableModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TableModelEventSource *,
                      NoRefCountPolicy, nsOSG        > SFUncountedTableModelEventSourcePtr;


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TableModelEventSource *,
                      RecordedRefCountPolicy, nsOSG  > MFRecTableModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TableModelEventSource *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecTableModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TableModelEventSource *,
                      WeakRefCountPolicy, nsOSG      > MFWeakTableModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TableModelEventSource *,
                      NoRefCountPolicy, nsOSG        > MFUncountedTableModelEventSourcePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFRecTableModelEventSourcePtr : 
    public PointerSField<TableModelEventSource *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUnrecTableModelEventSourcePtr : 
    public PointerSField<TableModelEventSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFWeakTableModelEventSourcePtr :
    public PointerSField<TableModelEventSource *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUncountedTableModelEventSourcePtr :
    public PointerSField<TableModelEventSource *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFRecTableModelEventSourcePtr :
    public PointerMField<TableModelEventSource *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUnrecTableModelEventSourcePtr :
    public PointerMField<TableModelEventSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFWeakTableModelEventSourcePtr :
    public PointerMField<TableModelEventSource *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUncountedTableModelEventSourcePtr :
    public PointerMField<TableModelEventSource *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTABLEMODELEventSourceFIELDS_H_ */
