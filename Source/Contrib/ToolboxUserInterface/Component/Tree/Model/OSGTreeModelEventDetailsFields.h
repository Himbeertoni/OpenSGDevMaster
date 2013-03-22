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


#ifndef _OSGTREEMODELEVENTDETAILSFIELDS_H_
#define _OSGTREEMODELEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TreeModelEventDetails;

OSG_GEN_CONTAINERPTR(TreeModelEventDetails);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<TreeModelEventDetails *> :
    public FieldTraitsFCPtrBase<TreeModelEventDetails *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TreeModelEventDetails *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTreeModelEventDetailsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTreeModelEventDetailsPtr"; }
};

template<> inline
const Char8 *FieldTraits<TreeModelEventDetails *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTreeModelEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModelEventDetails *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTreeModelEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModelEventDetails *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTreeModelEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModelEventDetails *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTreeModelEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModelEventDetails *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTreeModelEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModelEventDetails *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTreeModelEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModelEventDetails *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTreeModelEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModelEventDetails *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTreeModelEventDetailsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeModelEventDetails *,
                      RecordedRefCountPolicy  > SFRecTreeModelEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeModelEventDetails *,
                      UnrecordedRefCountPolicy> SFUnrecTreeModelEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeModelEventDetails *,
                      WeakRefCountPolicy      > SFWeakTreeModelEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeModelEventDetails *,
                      NoRefCountPolicy        > SFUncountedTreeModelEventDetailsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeModelEventDetails *,
                      RecordedRefCountPolicy  > MFRecTreeModelEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeModelEventDetails *,
                      UnrecordedRefCountPolicy> MFUnrecTreeModelEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeModelEventDetails *,
                      WeakRefCountPolicy      > MFWeakTreeModelEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeModelEventDetails *,
                      NoRefCountPolicy        > MFUncountedTreeModelEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecTreeModelEventDetailsPtr : 
    public PointerSField<TreeModelEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecTreeModelEventDetailsPtr : 
    public PointerSField<TreeModelEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakTreeModelEventDetailsPtr :
    public PointerSField<TreeModelEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedTreeModelEventDetailsPtr :
    public PointerSField<TreeModelEventDetails *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecTreeModelEventDetailsPtr :
    public PointerMField<TreeModelEventDetails *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecTreeModelEventDetailsPtr :
    public PointerMField<TreeModelEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakTreeModelEventDetailsPtr :
    public PointerMField<TreeModelEventDetails *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedTreeModelEventDetailsPtr :
    public PointerMField<TreeModelEventDetails *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTREEMODELEVENTDETAILSFIELDS_H_ */