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


#ifndef _OSGABSOLUTELAYOUTFIELDS_H_
#define _OSGABSOLUTELAYOUTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AbsoluteLayout;

OSG_GEN_CONTAINERPTR(AbsoluteLayout);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<AbsoluteLayout *> :
    public FieldTraitsFCPtrBase<AbsoluteLayout *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AbsoluteLayout *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAbsoluteLayoutPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAbsoluteLayoutPtr"; }
};

template<> inline
const Char8 *FieldTraits<AbsoluteLayout *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAbsoluteLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayout *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAbsoluteLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayout *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAbsoluteLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayout *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAbsoluteLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayout *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAbsoluteLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayout *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAbsoluteLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayout *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAbsoluteLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayout *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAbsoluteLayoutPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbsoluteLayout *,
                      RecordedRefCountPolicy  > SFRecAbsoluteLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbsoluteLayout *,
                      UnrecordedRefCountPolicy> SFUnrecAbsoluteLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbsoluteLayout *,
                      WeakRefCountPolicy      > SFWeakAbsoluteLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbsoluteLayout *,
                      NoRefCountPolicy        > SFUncountedAbsoluteLayoutPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbsoluteLayout *,
                      RecordedRefCountPolicy  > MFRecAbsoluteLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbsoluteLayout *,
                      UnrecordedRefCountPolicy> MFUnrecAbsoluteLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbsoluteLayout *,
                      WeakRefCountPolicy      > MFWeakAbsoluteLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbsoluteLayout *,
                      NoRefCountPolicy        > MFUncountedAbsoluteLayoutPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecAbsoluteLayoutPtr : 
    public PointerSField<AbsoluteLayout *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecAbsoluteLayoutPtr : 
    public PointerSField<AbsoluteLayout *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakAbsoluteLayoutPtr :
    public PointerSField<AbsoluteLayout *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedAbsoluteLayoutPtr :
    public PointerSField<AbsoluteLayout *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecAbsoluteLayoutPtr :
    public PointerMField<AbsoluteLayout *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecAbsoluteLayoutPtr :
    public PointerMField<AbsoluteLayout *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakAbsoluteLayoutPtr :
    public PointerMField<AbsoluteLayout *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedAbsoluteLayoutPtr :
    public PointerMField<AbsoluteLayout *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGABSOLUTELAYOUTFIELDS_H_ */