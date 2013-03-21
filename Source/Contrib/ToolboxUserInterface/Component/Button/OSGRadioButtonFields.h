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


#ifndef _OSGRADIOBUTTONFIELDS_H_
#define _OSGRADIOBUTTONFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class RadioButton;

OSG_GEN_CONTAINERPTR(RadioButton);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<RadioButton *> :
    public FieldTraitsFCPtrBase<RadioButton *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<RadioButton *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFRadioButtonPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFRadioButtonPtr"; }
};

template<> inline
const Char8 *FieldTraits<RadioButton *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecRadioButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButton *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecRadioButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButton *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakRadioButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButton *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdRadioButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButton *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecRadioButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButton *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecRadioButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButton *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakRadioButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<RadioButton *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdRadioButtonPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RadioButton *,
                      RecordedRefCountPolicy  > SFRecRadioButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RadioButton *,
                      UnrecordedRefCountPolicy> SFUnrecRadioButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RadioButton *,
                      WeakRefCountPolicy      > SFWeakRadioButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<RadioButton *,
                      NoRefCountPolicy        > SFUncountedRadioButtonPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RadioButton *,
                      RecordedRefCountPolicy  > MFRecRadioButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RadioButton *,
                      UnrecordedRefCountPolicy> MFUnrecRadioButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RadioButton *,
                      WeakRefCountPolicy      > MFWeakRadioButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<RadioButton *,
                      NoRefCountPolicy        > MFUncountedRadioButtonPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecRadioButtonPtr : 
    public PointerSField<RadioButton *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecRadioButtonPtr : 
    public PointerSField<RadioButton *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakRadioButtonPtr :
    public PointerSField<RadioButton *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedRadioButtonPtr :
    public PointerSField<RadioButton *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecRadioButtonPtr :
    public PointerMField<RadioButton *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecRadioButtonPtr :
    public PointerMField<RadioButton *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakRadioButtonPtr :
    public PointerMField<RadioButton *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedRadioButtonPtr :
    public PointerMField<RadioButton *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGRADIOBUTTONFIELDS_H_ */
