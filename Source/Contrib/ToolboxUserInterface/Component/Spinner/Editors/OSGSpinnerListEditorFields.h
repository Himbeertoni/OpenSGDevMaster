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


#ifndef _OSGSPINNERLISTEDITORFIELDS_H_
#define _OSGSPINNERLISTEDITORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SpinnerListEditor;

OSG_GEN_CONTAINERPTR(SpinnerListEditor);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<SpinnerListEditor *> :
    public FieldTraitsFCPtrBase<SpinnerListEditor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SpinnerListEditor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSpinnerListEditorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSpinnerListEditorPtr"; }
};

template<> inline
const Char8 *FieldTraits<SpinnerListEditor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSpinnerListEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerListEditor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSpinnerListEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerListEditor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSpinnerListEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerListEditor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSpinnerListEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerListEditor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSpinnerListEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerListEditor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSpinnerListEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerListEditor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSpinnerListEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerListEditor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSpinnerListEditorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerListEditor *,
                      RecordedRefCountPolicy  > SFRecSpinnerListEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerListEditor *,
                      UnrecordedRefCountPolicy> SFUnrecSpinnerListEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerListEditor *,
                      WeakRefCountPolicy      > SFWeakSpinnerListEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerListEditor *,
                      NoRefCountPolicy        > SFUncountedSpinnerListEditorPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerListEditor *,
                      RecordedRefCountPolicy  > MFRecSpinnerListEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerListEditor *,
                      UnrecordedRefCountPolicy> MFUnrecSpinnerListEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerListEditor *,
                      WeakRefCountPolicy      > MFWeakSpinnerListEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerListEditor *,
                      NoRefCountPolicy        > MFUncountedSpinnerListEditorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecSpinnerListEditorPtr : 
    public PointerSField<SpinnerListEditor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecSpinnerListEditorPtr : 
    public PointerSField<SpinnerListEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakSpinnerListEditorPtr :
    public PointerSField<SpinnerListEditor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedSpinnerListEditorPtr :
    public PointerSField<SpinnerListEditor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecSpinnerListEditorPtr :
    public PointerMField<SpinnerListEditor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecSpinnerListEditorPtr :
    public PointerMField<SpinnerListEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakSpinnerListEditorPtr :
    public PointerMField<SpinnerListEditor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedSpinnerListEditorPtr :
    public PointerMField<SpinnerListEditor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSPINNERLISTEDITORFIELDS_H_ */
