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


#ifndef _OSGOVERLAYLAYOUTFIELDS_H_
#define _OSGOVERLAYLAYOUTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class OverlayLayout;

OSG_GEN_CONTAINERPTR(OverlayLayout);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<OverlayLayout *> :
    public FieldTraitsFCPtrBase<OverlayLayout *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<OverlayLayout *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFOverlayLayoutPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFOverlayLayoutPtr"; }
};

template<> inline
const Char8 *FieldTraits<OverlayLayout *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecOverlayLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayout *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecOverlayLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayout *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakOverlayLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayout *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdOverlayLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayout *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecOverlayLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayout *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecOverlayLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayout *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakOverlayLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<OverlayLayout *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdOverlayLayoutPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<OverlayLayout *,
                      RecordedRefCountPolicy  > SFRecOverlayLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<OverlayLayout *,
                      UnrecordedRefCountPolicy> SFUnrecOverlayLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<OverlayLayout *,
                      WeakRefCountPolicy      > SFWeakOverlayLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<OverlayLayout *,
                      NoRefCountPolicy        > SFUncountedOverlayLayoutPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<OverlayLayout *,
                      RecordedRefCountPolicy  > MFRecOverlayLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<OverlayLayout *,
                      UnrecordedRefCountPolicy> MFUnrecOverlayLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<OverlayLayout *,
                      WeakRefCountPolicy      > MFWeakOverlayLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<OverlayLayout *,
                      NoRefCountPolicy        > MFUncountedOverlayLayoutPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecOverlayLayoutPtr : 
    public PointerSField<OverlayLayout *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecOverlayLayoutPtr : 
    public PointerSField<OverlayLayout *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakOverlayLayoutPtr :
    public PointerSField<OverlayLayout *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedOverlayLayoutPtr :
    public PointerSField<OverlayLayout *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecOverlayLayoutPtr :
    public PointerMField<OverlayLayout *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecOverlayLayoutPtr :
    public PointerMField<OverlayLayout *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakOverlayLayoutPtr :
    public PointerMField<OverlayLayout *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedOverlayLayoutPtr :
    public PointerMField<OverlayLayout *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGOVERLAYLAYOUTFIELDS_H_ */
