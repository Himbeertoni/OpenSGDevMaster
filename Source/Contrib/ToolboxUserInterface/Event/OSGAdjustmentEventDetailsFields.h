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


#ifndef _OSGADJUSTMENTEVENTDETAILSFIELDS_H_
#define _OSGADJUSTMENTEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AdjustmentEventDetails;

OSG_GEN_CONTAINERPTR(AdjustmentEventDetails);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<AdjustmentEventDetails *> :
    public FieldTraitsFCPtrBase<AdjustmentEventDetails *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AdjustmentEventDetails *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAdjustmentEventDetailsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAdjustmentEventDetailsPtr"; }
};

template<> inline
const Char8 *FieldTraits<AdjustmentEventDetails *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAdjustmentEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AdjustmentEventDetails *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAdjustmentEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AdjustmentEventDetails *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAdjustmentEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AdjustmentEventDetails *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAdjustmentEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AdjustmentEventDetails *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAdjustmentEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AdjustmentEventDetails *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAdjustmentEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AdjustmentEventDetails *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAdjustmentEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AdjustmentEventDetails *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAdjustmentEventDetailsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AdjustmentEventDetails *,
                      RecordedRefCountPolicy  > SFRecAdjustmentEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AdjustmentEventDetails *,
                      UnrecordedRefCountPolicy> SFUnrecAdjustmentEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AdjustmentEventDetails *,
                      WeakRefCountPolicy      > SFWeakAdjustmentEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AdjustmentEventDetails *,
                      NoRefCountPolicy        > SFUncountedAdjustmentEventDetailsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AdjustmentEventDetails *,
                      RecordedRefCountPolicy  > MFRecAdjustmentEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AdjustmentEventDetails *,
                      UnrecordedRefCountPolicy> MFUnrecAdjustmentEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AdjustmentEventDetails *,
                      WeakRefCountPolicy      > MFWeakAdjustmentEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AdjustmentEventDetails *,
                      NoRefCountPolicy        > MFUncountedAdjustmentEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecAdjustmentEventDetailsPtr : 
    public PointerSField<AdjustmentEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecAdjustmentEventDetailsPtr : 
    public PointerSField<AdjustmentEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakAdjustmentEventDetailsPtr :
    public PointerSField<AdjustmentEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedAdjustmentEventDetailsPtr :
    public PointerSField<AdjustmentEventDetails *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecAdjustmentEventDetailsPtr :
    public PointerMField<AdjustmentEventDetails *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecAdjustmentEventDetailsPtr :
    public PointerMField<AdjustmentEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakAdjustmentEventDetailsPtr :
    public PointerMField<AdjustmentEventDetails *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedAdjustmentEventDetailsPtr :
    public PointerMField<AdjustmentEventDetails *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGADJUSTMENTEVENTDETAILSFIELDS_H_ */
