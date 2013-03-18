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


#ifndef _OSGCOMBOBOXEDITORFIELDS_H_
#define _OSGCOMBOBOXEDITORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ComboBoxEditor;

OSG_GEN_CONTAINERPTR(ComboBoxEditor);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ComboBoxEditor *> :
    public FieldTraitsFCPtrBase<ComboBoxEditor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ComboBoxEditor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFComboBoxEditorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFComboBoxEditorPtr"; }
};

template<> inline
const Char8 *FieldTraits<ComboBoxEditor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecComboBoxEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxEditor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecComboBoxEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxEditor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakComboBoxEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxEditor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdComboBoxEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxEditor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecComboBoxEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxEditor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecComboBoxEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxEditor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakComboBoxEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComboBoxEditor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdComboBoxEditorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBoxEditor *,
                      RecordedRefCountPolicy  > SFRecComboBoxEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBoxEditor *,
                      UnrecordedRefCountPolicy> SFUnrecComboBoxEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBoxEditor *,
                      WeakRefCountPolicy      > SFWeakComboBoxEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ComboBoxEditor *,
                      NoRefCountPolicy        > SFUncountedComboBoxEditorPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBoxEditor *,
                      RecordedRefCountPolicy  > MFRecComboBoxEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBoxEditor *,
                      UnrecordedRefCountPolicy> MFUnrecComboBoxEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBoxEditor *,
                      WeakRefCountPolicy      > MFWeakComboBoxEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ComboBoxEditor *,
                      NoRefCountPolicy        > MFUncountedComboBoxEditorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecComboBoxEditorPtr : 
    public PointerSField<ComboBoxEditor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecComboBoxEditorPtr : 
    public PointerSField<ComboBoxEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakComboBoxEditorPtr :
    public PointerSField<ComboBoxEditor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedComboBoxEditorPtr :
    public PointerSField<ComboBoxEditor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecComboBoxEditorPtr :
    public PointerMField<ComboBoxEditor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecComboBoxEditorPtr :
    public PointerMField<ComboBoxEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakComboBoxEditorPtr :
    public PointerMField<ComboBoxEditor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedComboBoxEditorPtr :
    public PointerMField<ComboBoxEditor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOMBOBOXEDITORFIELDS_H_ */
