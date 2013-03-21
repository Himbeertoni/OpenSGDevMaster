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


#ifndef _OSGCOMBOBOXFIELDS_H_
#define _OSGCOMBOBOXFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ComboBox;

OSG_GEN_CONTAINERPTR(ComboBox);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ComboBox *> :
    public FieldTraitsFCPtrBase<ComboBox *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ComboBox *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFComboBoxPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFComboBoxPtr"; }
};

template<> inline
const Char8 *FieldTraits<ComboBox *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecComboBoxPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBox *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecComboBoxPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBox *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakComboBoxPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBox *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdComboBoxPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBox *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecComboBoxPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBox *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecComboBoxPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBox *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakComboBoxPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBox *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdComboBoxPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBox *,
                      RecordedRefCountPolicy  > SFRecComboBoxPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBox *,
                      UnrecordedRefCountPolicy> SFUnrecComboBoxPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBox *,
                      WeakRefCountPolicy      > SFWeakComboBoxPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBox *,
                      NoRefCountPolicy        > SFUncountedComboBoxPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBox *,
                      RecordedRefCountPolicy  > MFRecComboBoxPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBox *,
                      UnrecordedRefCountPolicy> MFUnrecComboBoxPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBox *,
                      WeakRefCountPolicy      > MFWeakComboBoxPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBox *,
                      NoRefCountPolicy        > MFUncountedComboBoxPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecComboBoxPtr : 
    public PointerSField<ComboBox *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecComboBoxPtr : 
    public PointerSField<ComboBox *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakComboBoxPtr :
    public PointerSField<ComboBox *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedComboBoxPtr :
    public PointerSField<ComboBox *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecComboBoxPtr :
    public PointerMField<ComboBox *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecComboBoxPtr :
    public PointerMField<ComboBox *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakComboBoxPtr :
    public PointerMField<ComboBox *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedComboBoxPtr :
    public PointerMField<ComboBox *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOMBOBOXFIELDS_H_ */
