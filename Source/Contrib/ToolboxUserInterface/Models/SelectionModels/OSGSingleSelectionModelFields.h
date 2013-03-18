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


#ifndef _OSGSINGLESELECTIONMODELFIELDS_H_
#define _OSGSINGLESELECTIONMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SingleSelectionModel;

OSG_GEN_CONTAINERPTR(SingleSelectionModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<SingleSelectionModel *> :
    public FieldTraitsFCPtrBase<SingleSelectionModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SingleSelectionModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSingleSelectionModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSingleSelectionModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<SingleSelectionModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSingleSelectionModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<SingleSelectionModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSingleSelectionModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<SingleSelectionModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSingleSelectionModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<SingleSelectionModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSingleSelectionModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<SingleSelectionModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSingleSelectionModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<SingleSelectionModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSingleSelectionModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<SingleSelectionModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSingleSelectionModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<SingleSelectionModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSingleSelectionModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SingleSelectionModel *,
                      RecordedRefCountPolicy  > SFRecSingleSelectionModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SingleSelectionModel *,
                      UnrecordedRefCountPolicy> SFUnrecSingleSelectionModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SingleSelectionModel *,
                      WeakRefCountPolicy      > SFWeakSingleSelectionModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SingleSelectionModel *,
                      NoRefCountPolicy        > SFUncountedSingleSelectionModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SingleSelectionModel *,
                      RecordedRefCountPolicy  > MFRecSingleSelectionModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SingleSelectionModel *,
                      UnrecordedRefCountPolicy> MFUnrecSingleSelectionModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SingleSelectionModel *,
                      WeakRefCountPolicy      > MFWeakSingleSelectionModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SingleSelectionModel *,
                      NoRefCountPolicy        > MFUncountedSingleSelectionModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecSingleSelectionModelPtr : 
    public PointerSField<SingleSelectionModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecSingleSelectionModelPtr : 
    public PointerSField<SingleSelectionModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakSingleSelectionModelPtr :
    public PointerSField<SingleSelectionModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedSingleSelectionModelPtr :
    public PointerSField<SingleSelectionModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecSingleSelectionModelPtr :
    public PointerMField<SingleSelectionModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecSingleSelectionModelPtr :
    public PointerMField<SingleSelectionModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakSingleSelectionModelPtr :
    public PointerMField<SingleSelectionModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedSingleSelectionModelPtr :
    public PointerMField<SingleSelectionModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSINGLESELECTIONMODELFIELDS_H_ */
