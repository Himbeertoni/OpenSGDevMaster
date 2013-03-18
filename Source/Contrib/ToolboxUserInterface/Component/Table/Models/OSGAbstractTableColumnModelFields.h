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


#ifndef _OSGABSTRACTTABLECOLUMNMODELFIELDS_H_
#define _OSGABSTRACTTABLECOLUMNMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AbstractTableColumnModel;

OSG_GEN_CONTAINERPTR(AbstractTableColumnModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<AbstractTableColumnModel *> :
    public FieldTraitsFCPtrBase<AbstractTableColumnModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AbstractTableColumnModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAbstractTableColumnModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAbstractTableColumnModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<AbstractTableColumnModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAbstractTableColumnModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTableColumnModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAbstractTableColumnModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTableColumnModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAbstractTableColumnModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTableColumnModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAbstractTableColumnModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTableColumnModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAbstractTableColumnModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTableColumnModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAbstractTableColumnModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTableColumnModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAbstractTableColumnModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTableColumnModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAbstractTableColumnModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTableColumnModel *,
                      RecordedRefCountPolicy  > SFRecAbstractTableColumnModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTableColumnModel *,
                      UnrecordedRefCountPolicy> SFUnrecAbstractTableColumnModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTableColumnModel *,
                      WeakRefCountPolicy      > SFWeakAbstractTableColumnModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTableColumnModel *,
                      NoRefCountPolicy        > SFUncountedAbstractTableColumnModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTableColumnModel *,
                      RecordedRefCountPolicy  > MFRecAbstractTableColumnModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTableColumnModel *,
                      UnrecordedRefCountPolicy> MFUnrecAbstractTableColumnModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTableColumnModel *,
                      WeakRefCountPolicy      > MFWeakAbstractTableColumnModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTableColumnModel *,
                      NoRefCountPolicy        > MFUncountedAbstractTableColumnModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecAbstractTableColumnModelPtr : 
    public PointerSField<AbstractTableColumnModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecAbstractTableColumnModelPtr : 
    public PointerSField<AbstractTableColumnModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakAbstractTableColumnModelPtr :
    public PointerSField<AbstractTableColumnModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedAbstractTableColumnModelPtr :
    public PointerSField<AbstractTableColumnModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecAbstractTableColumnModelPtr :
    public PointerMField<AbstractTableColumnModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecAbstractTableColumnModelPtr :
    public PointerMField<AbstractTableColumnModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakAbstractTableColumnModelPtr :
    public PointerMField<AbstractTableColumnModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedAbstractTableColumnModelPtr :
    public PointerMField<AbstractTableColumnModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGABSTRACTTABLECOLUMNMODELFIELDS_H_ */
