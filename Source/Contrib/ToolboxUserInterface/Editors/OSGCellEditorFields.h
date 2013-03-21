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

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<CellEditor *> :
    public FieldTraitsFCPtrBase<CellEditor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CellEditor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCellEditorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCellEditorPtr"; }
};

template<> inline
const Char8 *FieldTraits<CellEditor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCellEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<CellEditor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCellEditorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CellEditor *,
                      RecordedRefCountPolicy  > SFRecCellEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CellEditor *,
                      UnrecordedRefCountPolicy> SFUnrecCellEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CellEditor *,
                      WeakRefCountPolicy      > SFWeakCellEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CellEditor *,
                      NoRefCountPolicy        > SFUncountedCellEditorPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CellEditor *,
                      RecordedRefCountPolicy  > MFRecCellEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CellEditor *,
                      UnrecordedRefCountPolicy> MFUnrecCellEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CellEditor *,
                      WeakRefCountPolicy      > MFWeakCellEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CellEditor *,
                      NoRefCountPolicy        > MFUncountedCellEditorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecCellEditorPtr : 
    public PointerSField<CellEditor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecCellEditorPtr : 
    public PointerSField<CellEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakCellEditorPtr :
    public PointerSField<CellEditor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedCellEditorPtr :
    public PointerSField<CellEditor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecCellEditorPtr :
    public PointerMField<CellEditor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecCellEditorPtr :
    public PointerMField<CellEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakCellEditorPtr :
    public PointerMField<CellEditor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedCellEditorPtr :
    public PointerMField<CellEditor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCELLEDITORFIELDS_H_ */
