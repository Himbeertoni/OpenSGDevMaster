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


#ifndef _OSGTABLECOLUMNMODELEVENTSOURCEFIELDS_H_
#define _OSGTABLECOLUMNMODELEVENTSOURCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class TableColumnModelEventSource;

OSG_GEN_CONTAINERPTR(TableColumnModelEventSource);
/*! \ingroup GrpContribToolboxUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribToolboxUserInterface
 */
template <>
struct FieldTraits<TableColumnModelEventSource *, nsOSG> :
    public FieldTraitsFCPtrBase<TableColumnModelEventSource *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<TableColumnModelEventSource *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<TableColumnModelEventSource *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTableColumnModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableColumnModelEventSource *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTableColumnModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableColumnModelEventSource *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTableColumnModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableColumnModelEventSource *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTableColumnModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableColumnModelEventSource *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTableColumnModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableColumnModelEventSource *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTableColumnModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableColumnModelEventSource *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTableColumnModelEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TableColumnModelEventSource *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTableColumnModelEventSourcePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TableColumnModelEventSource *,
                      RecordedRefCountPolicy, nsOSG  > SFRecTableColumnModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TableColumnModelEventSource *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecTableColumnModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TableColumnModelEventSource *,
                      WeakRefCountPolicy, nsOSG      > SFWeakTableColumnModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TableColumnModelEventSource *,
                      NoRefCountPolicy, nsOSG        > SFUncountedTableColumnModelEventSourcePtr;


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TableColumnModelEventSource *,
                      RecordedRefCountPolicy, nsOSG  > MFRecTableColumnModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TableColumnModelEventSource *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecTableColumnModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TableColumnModelEventSource *,
                      WeakRefCountPolicy, nsOSG      > MFWeakTableColumnModelEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TableColumnModelEventSource *,
                      NoRefCountPolicy, nsOSG        > MFUncountedTableColumnModelEventSourcePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFRecTableColumnModelEventSourcePtr : 
    public PointerSField<TableColumnModelEventSource *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUnrecTableColumnModelEventSourcePtr : 
    public PointerSField<TableColumnModelEventSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFWeakTableColumnModelEventSourcePtr :
    public PointerSField<TableColumnModelEventSource *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUncountedTableColumnModelEventSourcePtr :
    public PointerSField<TableColumnModelEventSource *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFRecTableColumnModelEventSourcePtr :
    public PointerMField<TableColumnModelEventSource *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUnrecTableColumnModelEventSourcePtr :
    public PointerMField<TableColumnModelEventSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFWeakTableColumnModelEventSourcePtr :
    public PointerMField<TableColumnModelEventSource *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUncountedTableColumnModelEventSourcePtr :
    public PointerMField<TableColumnModelEventSource *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTABLECOLUMNMODELEVENTSOURCEFIELDS_H_ */
