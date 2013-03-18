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


#ifndef _OSGABSTRACTTREEMODELLAYOUTFIELDS_H_
#define _OSGABSTRACTTREEMODELLAYOUTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AbstractTreeModelLayout;

OSG_GEN_CONTAINERPTR(AbstractTreeModelLayout);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<AbstractTreeModelLayout *> :
    public FieldTraitsFCPtrBase<AbstractTreeModelLayout *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AbstractTreeModelLayout *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAbstractTreeModelLayoutPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAbstractTreeModelLayoutPtr"; }
};

template<> inline
const Char8 *FieldTraits<AbstractTreeModelLayout *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAbstractTreeModelLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModelLayout *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAbstractTreeModelLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModelLayout *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAbstractTreeModelLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModelLayout *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAbstractTreeModelLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModelLayout *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAbstractTreeModelLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModelLayout *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAbstractTreeModelLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModelLayout *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAbstractTreeModelLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModelLayout *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAbstractTreeModelLayoutPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTreeModelLayout *,
                      RecordedRefCountPolicy  > SFRecAbstractTreeModelLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTreeModelLayout *,
                      UnrecordedRefCountPolicy> SFUnrecAbstractTreeModelLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTreeModelLayout *,
                      WeakRefCountPolicy      > SFWeakAbstractTreeModelLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTreeModelLayout *,
                      NoRefCountPolicy        > SFUncountedAbstractTreeModelLayoutPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTreeModelLayout *,
                      RecordedRefCountPolicy  > MFRecAbstractTreeModelLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTreeModelLayout *,
                      UnrecordedRefCountPolicy> MFUnrecAbstractTreeModelLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTreeModelLayout *,
                      WeakRefCountPolicy      > MFWeakAbstractTreeModelLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTreeModelLayout *,
                      NoRefCountPolicy        > MFUncountedAbstractTreeModelLayoutPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecAbstractTreeModelLayoutPtr : 
    public PointerSField<AbstractTreeModelLayout *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecAbstractTreeModelLayoutPtr : 
    public PointerSField<AbstractTreeModelLayout *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakAbstractTreeModelLayoutPtr :
    public PointerSField<AbstractTreeModelLayout *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedAbstractTreeModelLayoutPtr :
    public PointerSField<AbstractTreeModelLayout *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecAbstractTreeModelLayoutPtr :
    public PointerMField<AbstractTreeModelLayout *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecAbstractTreeModelLayoutPtr :
    public PointerMField<AbstractTreeModelLayout *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakAbstractTreeModelLayoutPtr :
    public PointerMField<AbstractTreeModelLayout *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedAbstractTreeModelLayoutPtr :
    public PointerMField<AbstractTreeModelLayout *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGABSTRACTTREEMODELLAYOUTFIELDS_H_ */
