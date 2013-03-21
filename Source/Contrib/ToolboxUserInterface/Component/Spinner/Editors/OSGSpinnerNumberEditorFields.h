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


#ifndef _OSGSPINNERNUMBEREDITORFIELDS_H_
#define _OSGSPINNERNUMBEREDITORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SpinnerNumberEditor;

OSG_GEN_CONTAINERPTR(SpinnerNumberEditor);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<SpinnerNumberEditor *> :
    public FieldTraitsFCPtrBase<SpinnerNumberEditor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SpinnerNumberEditor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSpinnerNumberEditorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSpinnerNumberEditorPtr"; }
};

template<> inline
const Char8 *FieldTraits<SpinnerNumberEditor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSpinnerNumberEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerNumberEditor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSpinnerNumberEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerNumberEditor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSpinnerNumberEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerNumberEditor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSpinnerNumberEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerNumberEditor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSpinnerNumberEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerNumberEditor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSpinnerNumberEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerNumberEditor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSpinnerNumberEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerNumberEditor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSpinnerNumberEditorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerNumberEditor *,
                      RecordedRefCountPolicy  > SFRecSpinnerNumberEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerNumberEditor *,
                      UnrecordedRefCountPolicy> SFUnrecSpinnerNumberEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerNumberEditor *,
                      WeakRefCountPolicy      > SFWeakSpinnerNumberEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerNumberEditor *,
                      NoRefCountPolicy        > SFUncountedSpinnerNumberEditorPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerNumberEditor *,
                      RecordedRefCountPolicy  > MFRecSpinnerNumberEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerNumberEditor *,
                      UnrecordedRefCountPolicy> MFUnrecSpinnerNumberEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerNumberEditor *,
                      WeakRefCountPolicy      > MFWeakSpinnerNumberEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerNumberEditor *,
                      NoRefCountPolicy        > MFUncountedSpinnerNumberEditorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecSpinnerNumberEditorPtr : 
    public PointerSField<SpinnerNumberEditor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecSpinnerNumberEditorPtr : 
    public PointerSField<SpinnerNumberEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakSpinnerNumberEditorPtr :
    public PointerSField<SpinnerNumberEditor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedSpinnerNumberEditorPtr :
    public PointerSField<SpinnerNumberEditor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecSpinnerNumberEditorPtr :
    public PointerMField<SpinnerNumberEditor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecSpinnerNumberEditorPtr :
    public PointerMField<SpinnerNumberEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakSpinnerNumberEditorPtr :
    public PointerMField<SpinnerNumberEditor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedSpinnerNumberEditorPtr :
    public PointerMField<SpinnerNumberEditor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSPINNERNUMBEREDITORFIELDS_H_ */
