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


#ifndef _OSGCELLEDITORFIELDS_H_
#define _OSGCELLEDITORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class CellEditor;

OSG_GEN_CONTAINERPTR(CellEditor);
/*! \ingroup GrpContribToolboxUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribToolboxUserInterface
 */
template <>
struct FieldTraits<CellEditor *, nsOSG> :
    public FieldTraitsFCPtrBase<CellEditor *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<CellEditor *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<CellEditor *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCellEditorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<CellEditor *,
                      RecordedRefCountPolicy, nsOSG  > SFRecCellEditorPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<CellEditor *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecCellEditorPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<CellEditor *,
                      WeakRefCountPolicy, nsOSG      > SFWeakCellEditorPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<CellEditor *,
                      NoRefCountPolicy, nsOSG        > SFUncountedCellEditorPtr;


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<CellEditor *,
                      RecordedRefCountPolicy, nsOSG  > MFRecCellEditorPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<CellEditor *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecCellEditorPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<CellEditor *,
                      WeakRefCountPolicy, nsOSG      > MFWeakCellEditorPtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<CellEditor *,
                      NoRefCountPolicy, nsOSG        > MFUncountedCellEditorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFRecCellEditorPtr : 
    public PointerSField<CellEditor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUnrecCellEditorPtr : 
    public PointerSField<CellEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFWeakCellEditorPtr :
    public PointerSField<CellEditor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUncountedCellEditorPtr :
    public PointerSField<CellEditor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFRecCellEditorPtr :
    public PointerMField<CellEditor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUnrecCellEditorPtr :
    public PointerMField<CellEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFWeakCellEditorPtr :
    public PointerMField<CellEditor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUncountedCellEditorPtr :
    public PointerMField<CellEditor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCELLEDITORFIELDS_H_ */
