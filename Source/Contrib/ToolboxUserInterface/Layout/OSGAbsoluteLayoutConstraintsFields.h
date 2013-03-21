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


#ifndef _OSGABSOLUTELAYOUTCONSTRAINTSFIELDS_H_
#define _OSGABSOLUTELAYOUTCONSTRAINTSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AbsoluteLayoutConstraints;

OSG_GEN_CONTAINERPTR(AbsoluteLayoutConstraints);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<AbsoluteLayoutConstraints *> :
    public FieldTraitsFCPtrBase<AbsoluteLayoutConstraints *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AbsoluteLayoutConstraints *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAbsoluteLayoutConstraintsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAbsoluteLayoutConstraintsPtr"; }
};

template<> inline
const Char8 *FieldTraits<AbsoluteLayoutConstraints *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAbsoluteLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayoutConstraints *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAbsoluteLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayoutConstraints *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAbsoluteLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayoutConstraints *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAbsoluteLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayoutConstraints *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAbsoluteLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayoutConstraints *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAbsoluteLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayoutConstraints *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAbsoluteLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbsoluteLayoutConstraints *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAbsoluteLayoutConstraintsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbsoluteLayoutConstraints *,
                      RecordedRefCountPolicy  > SFRecAbsoluteLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbsoluteLayoutConstraints *,
                      UnrecordedRefCountPolicy> SFUnrecAbsoluteLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbsoluteLayoutConstraints *,
                      WeakRefCountPolicy      > SFWeakAbsoluteLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbsoluteLayoutConstraints *,
                      NoRefCountPolicy        > SFUncountedAbsoluteLayoutConstraintsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbsoluteLayoutConstraints *,
                      RecordedRefCountPolicy  > MFRecAbsoluteLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbsoluteLayoutConstraints *,
                      UnrecordedRefCountPolicy> MFUnrecAbsoluteLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbsoluteLayoutConstraints *,
                      WeakRefCountPolicy      > MFWeakAbsoluteLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbsoluteLayoutConstraints *,
                      NoRefCountPolicy        > MFUncountedAbsoluteLayoutConstraintsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecAbsoluteLayoutConstraintsPtr : 
    public PointerSField<AbsoluteLayoutConstraints *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecAbsoluteLayoutConstraintsPtr : 
    public PointerSField<AbsoluteLayoutConstraints *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakAbsoluteLayoutConstraintsPtr :
    public PointerSField<AbsoluteLayoutConstraints *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedAbsoluteLayoutConstraintsPtr :
    public PointerSField<AbsoluteLayoutConstraints *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecAbsoluteLayoutConstraintsPtr :
    public PointerMField<AbsoluteLayoutConstraints *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecAbsoluteLayoutConstraintsPtr :
    public PointerMField<AbsoluteLayoutConstraints *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakAbsoluteLayoutConstraintsPtr :
    public PointerMField<AbsoluteLayoutConstraints *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedAbsoluteLayoutConstraintsPtr :
    public PointerMField<AbsoluteLayoutConstraints *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGABSOLUTELAYOUTCONSTRAINTSFIELDS_H_ */
