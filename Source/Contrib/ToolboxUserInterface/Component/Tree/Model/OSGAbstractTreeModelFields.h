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


#ifndef _OSGABSTRACTTREEMODELFIELDS_H_
#define _OSGABSTRACTTREEMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AbstractTreeModel;

OSG_GEN_CONTAINERPTR(AbstractTreeModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<AbstractTreeModel *> :
    public FieldTraitsFCPtrBase<AbstractTreeModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AbstractTreeModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAbstractTreeModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAbstractTreeModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<AbstractTreeModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAbstractTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAbstractTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAbstractTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAbstractTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAbstractTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAbstractTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAbstractTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractTreeModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAbstractTreeModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTreeModel *,
                      RecordedRefCountPolicy  > SFRecAbstractTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTreeModel *,
                      UnrecordedRefCountPolicy> SFUnrecAbstractTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTreeModel *,
                      WeakRefCountPolicy      > SFWeakAbstractTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractTreeModel *,
                      NoRefCountPolicy        > SFUncountedAbstractTreeModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTreeModel *,
                      RecordedRefCountPolicy  > MFRecAbstractTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTreeModel *,
                      UnrecordedRefCountPolicy> MFUnrecAbstractTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTreeModel *,
                      WeakRefCountPolicy      > MFWeakAbstractTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractTreeModel *,
                      NoRefCountPolicy        > MFUncountedAbstractTreeModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecAbstractTreeModelPtr : 
    public PointerSField<AbstractTreeModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecAbstractTreeModelPtr : 
    public PointerSField<AbstractTreeModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakAbstractTreeModelPtr :
    public PointerSField<AbstractTreeModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedAbstractTreeModelPtr :
    public PointerSField<AbstractTreeModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecAbstractTreeModelPtr :
    public PointerMField<AbstractTreeModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecAbstractTreeModelPtr :
    public PointerMField<AbstractTreeModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakAbstractTreeModelPtr :
    public PointerMField<AbstractTreeModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedAbstractTreeModelPtr :
    public PointerMField<AbstractTreeModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGABSTRACTTREEMODELFIELDS_H_ */