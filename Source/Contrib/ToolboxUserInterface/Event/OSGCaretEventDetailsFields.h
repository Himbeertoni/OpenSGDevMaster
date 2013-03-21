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


#ifndef _OSGCARETEVENTDETAILSFIELDS_H_
#define _OSGCARETEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class CaretEventDetails;

OSG_GEN_CONTAINERPTR(CaretEventDetails);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<CaretEventDetails *> :
    public FieldTraitsFCPtrBase<CaretEventDetails *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CaretEventDetails *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCaretEventDetailsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCaretEventDetailsPtr"; }
};

template<> inline
const Char8 *FieldTraits<CaretEventDetails *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCaretEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEventDetails *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCaretEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEventDetails *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCaretEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEventDetails *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCaretEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEventDetails *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCaretEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEventDetails *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCaretEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEventDetails *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCaretEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CaretEventDetails *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCaretEventDetailsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CaretEventDetails *,
                      RecordedRefCountPolicy  > SFRecCaretEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CaretEventDetails *,
                      UnrecordedRefCountPolicy> SFUnrecCaretEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CaretEventDetails *,
                      WeakRefCountPolicy      > SFWeakCaretEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<CaretEventDetails *,
                      NoRefCountPolicy        > SFUncountedCaretEventDetailsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CaretEventDetails *,
                      RecordedRefCountPolicy  > MFRecCaretEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CaretEventDetails *,
                      UnrecordedRefCountPolicy> MFUnrecCaretEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CaretEventDetails *,
                      WeakRefCountPolicy      > MFWeakCaretEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<CaretEventDetails *,
                      NoRefCountPolicy        > MFUncountedCaretEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecCaretEventDetailsPtr : 
    public PointerSField<CaretEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecCaretEventDetailsPtr : 
    public PointerSField<CaretEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakCaretEventDetailsPtr :
    public PointerSField<CaretEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedCaretEventDetailsPtr :
    public PointerSField<CaretEventDetails *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecCaretEventDetailsPtr :
    public PointerMField<CaretEventDetails *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecCaretEventDetailsPtr :
    public PointerMField<CaretEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakCaretEventDetailsPtr :
    public PointerMField<CaretEventDetails *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedCaretEventDetailsPtr :
    public PointerMField<CaretEventDetails *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCARETEVENTDETAILSFIELDS_H_ */
