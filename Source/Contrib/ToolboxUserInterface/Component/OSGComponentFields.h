/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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


#ifndef _OSGCOMPONENTFIELDS_H_
#define _OSGCOMPONENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Component;

OSG_GEN_CONTAINERPTR(Component);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<Component *> :
    public FieldTraitsFCPtrBase<Component *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Component *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFComponentPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFComponentPtr"; }
};

template<> inline
const Char8 *FieldTraits<Component *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdComponentPtr"; 
}


/*! \ingroup GrpContribUserInterfaceFieldTraits
 */
template <>
struct FieldTraits<Component *, 1> :
    public FieldTraitsFCPtrBase<Component *, 1>
{
  private:

  public:
    typedef FieldTraits<Component *, 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<Component *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<Component *, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildComponentPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Component *,
                      RecordedRefCountPolicy  > SFRecComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Component *,
                      UnrecordedRefCountPolicy> SFUnrecComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Component *,
                      WeakRefCountPolicy      > SFWeakComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Component *,
                      NoRefCountPolicy        > SFUncountedComponentPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Component *,
                      RecordedRefCountPolicy  > MFRecComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Component *,
                      UnrecordedRefCountPolicy> MFUnrecComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Component *,
                      WeakRefCountPolicy      > MFWeakComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Component *,
                      NoRefCountPolicy        > MFUncountedComponentPtr;



/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef ChildPointerMField<
          Component *, 
          UnrecordedRefCountPolicy,
          1             > MFUnrecChildComponentPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecComponentPtr : 
    public PointerSField<Component *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecComponentPtr : 
    public PointerSField<Component *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakComponentPtr :
    public PointerSField<Component *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedComponentPtr :
    public PointerSField<Component *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecComponentPtr :
    public PointerMField<Component *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecComponentPtr :
    public PointerMField<Component *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakComponentPtr :
    public PointerMField<Component *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedComponentPtr :
    public PointerMField<Component *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecChildComponentPtr :
    public ChildPointerMField<
        Component *, 
        UnrecordedRefCountPolicy,
        1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOMPONENTFIELDS_H_ */
