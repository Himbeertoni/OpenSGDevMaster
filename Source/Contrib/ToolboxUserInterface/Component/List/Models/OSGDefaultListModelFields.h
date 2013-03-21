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


#ifndef _OSGDEFAULTLISTMODELFIELDS_H_
#define _OSGDEFAULTLISTMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DefaultListModel;

OSG_GEN_CONTAINERPTR(DefaultListModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<DefaultListModel *> :
    public FieldTraitsFCPtrBase<DefaultListModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DefaultListModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDefaultListModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDefaultListModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<DefaultListModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDefaultListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultListModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDefaultListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultListModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDefaultListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultListModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDefaultListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultListModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDefaultListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultListModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDefaultListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultListModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDefaultListModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<DefaultListModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDefaultListModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DefaultListModel *,
                      RecordedRefCountPolicy  > SFRecDefaultListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DefaultListModel *,
                      UnrecordedRefCountPolicy> SFUnrecDefaultListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DefaultListModel *,
                      WeakRefCountPolicy      > SFWeakDefaultListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DefaultListModel *,
                      NoRefCountPolicy        > SFUncountedDefaultListModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DefaultListModel *,
                      RecordedRefCountPolicy  > MFRecDefaultListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DefaultListModel *,
                      UnrecordedRefCountPolicy> MFUnrecDefaultListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DefaultListModel *,
                      WeakRefCountPolicy      > MFWeakDefaultListModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DefaultListModel *,
                      NoRefCountPolicy        > MFUncountedDefaultListModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecDefaultListModelPtr : 
    public PointerSField<DefaultListModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecDefaultListModelPtr : 
    public PointerSField<DefaultListModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakDefaultListModelPtr :
    public PointerSField<DefaultListModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedDefaultListModelPtr :
    public PointerSField<DefaultListModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecDefaultListModelPtr :
    public PointerMField<DefaultListModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecDefaultListModelPtr :
    public PointerMField<DefaultListModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakDefaultListModelPtr :
    public PointerMField<DefaultListModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedDefaultListModelPtr :
    public PointerMField<DefaultListModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDEFAULTLISTMODELFIELDS_H_ */
