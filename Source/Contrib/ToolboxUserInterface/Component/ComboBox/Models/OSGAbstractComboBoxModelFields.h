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


#ifndef _OSGABSTRACTCOMBOBOXMODELFIELDS_H_
#define _OSGABSTRACTCOMBOBOXMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AbstractComboBoxModel;

OSG_GEN_CONTAINERPTR(AbstractComboBoxModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<AbstractComboBoxModel *> :
    public FieldTraitsFCPtrBase<AbstractComboBoxModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AbstractComboBoxModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAbstractComboBoxModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAbstractComboBoxModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<AbstractComboBoxModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAbstractComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractComboBoxModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAbstractComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractComboBoxModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAbstractComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractComboBoxModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAbstractComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractComboBoxModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAbstractComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractComboBoxModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAbstractComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractComboBoxModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAbstractComboBoxModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractComboBoxModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAbstractComboBoxModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractComboBoxModel *,
                      RecordedRefCountPolicy  > SFRecAbstractComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractComboBoxModel *,
                      UnrecordedRefCountPolicy> SFUnrecAbstractComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractComboBoxModel *,
                      WeakRefCountPolicy      > SFWeakAbstractComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractComboBoxModel *,
                      NoRefCountPolicy        > SFUncountedAbstractComboBoxModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractComboBoxModel *,
                      RecordedRefCountPolicy  > MFRecAbstractComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractComboBoxModel *,
                      UnrecordedRefCountPolicy> MFUnrecAbstractComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractComboBoxModel *,
                      WeakRefCountPolicy      > MFWeakAbstractComboBoxModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractComboBoxModel *,
                      NoRefCountPolicy        > MFUncountedAbstractComboBoxModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecAbstractComboBoxModelPtr : 
    public PointerSField<AbstractComboBoxModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecAbstractComboBoxModelPtr : 
    public PointerSField<AbstractComboBoxModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakAbstractComboBoxModelPtr :
    public PointerSField<AbstractComboBoxModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedAbstractComboBoxModelPtr :
    public PointerSField<AbstractComboBoxModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecAbstractComboBoxModelPtr :
    public PointerMField<AbstractComboBoxModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecAbstractComboBoxModelPtr :
    public PointerMField<AbstractComboBoxModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakAbstractComboBoxModelPtr :
    public PointerMField<AbstractComboBoxModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedAbstractComboBoxModelPtr :
    public PointerMField<AbstractComboBoxModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGABSTRACTCOMBOBOXMODELFIELDS_H_ */
