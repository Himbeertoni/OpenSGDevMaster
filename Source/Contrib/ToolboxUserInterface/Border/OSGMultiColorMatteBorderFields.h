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


#ifndef _OSGMULTICOLORMATTEBORDERFIELDS_H_
#define _OSGMULTICOLORMATTEBORDERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class MultiColorMatteBorder;

OSG_GEN_CONTAINERPTR(MultiColorMatteBorder);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<MultiColorMatteBorder *> :
    public FieldTraitsFCPtrBase<MultiColorMatteBorder *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<MultiColorMatteBorder *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFMultiColorMatteBorderPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFMultiColorMatteBorderPtr"; }
};

template<> inline
const Char8 *FieldTraits<MultiColorMatteBorder *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMultiColorMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiColorMatteBorder *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMultiColorMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiColorMatteBorder *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMultiColorMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiColorMatteBorder *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMultiColorMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiColorMatteBorder *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMultiColorMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiColorMatteBorder *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMultiColorMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiColorMatteBorder *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMultiColorMatteBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiColorMatteBorder *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMultiColorMatteBorderPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MultiColorMatteBorder *,
                      RecordedRefCountPolicy  > SFRecMultiColorMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MultiColorMatteBorder *,
                      UnrecordedRefCountPolicy> SFUnrecMultiColorMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MultiColorMatteBorder *,
                      WeakRefCountPolicy      > SFWeakMultiColorMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<MultiColorMatteBorder *,
                      NoRefCountPolicy        > SFUncountedMultiColorMatteBorderPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MultiColorMatteBorder *,
                      RecordedRefCountPolicy  > MFRecMultiColorMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MultiColorMatteBorder *,
                      UnrecordedRefCountPolicy> MFUnrecMultiColorMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MultiColorMatteBorder *,
                      WeakRefCountPolicy      > MFWeakMultiColorMatteBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<MultiColorMatteBorder *,
                      NoRefCountPolicy        > MFUncountedMultiColorMatteBorderPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecMultiColorMatteBorderPtr : 
    public PointerSField<MultiColorMatteBorder *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecMultiColorMatteBorderPtr : 
    public PointerSField<MultiColorMatteBorder *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakMultiColorMatteBorderPtr :
    public PointerSField<MultiColorMatteBorder *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedMultiColorMatteBorderPtr :
    public PointerSField<MultiColorMatteBorder *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecMultiColorMatteBorderPtr :
    public PointerMField<MultiColorMatteBorder *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecMultiColorMatteBorderPtr :
    public PointerMField<MultiColorMatteBorder *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakMultiColorMatteBorderPtr :
    public PointerMField<MultiColorMatteBorder *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedMultiColorMatteBorderPtr :
    public PointerMField<MultiColorMatteBorder *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMULTICOLORMATTEBORDERFIELDS_H_ */
