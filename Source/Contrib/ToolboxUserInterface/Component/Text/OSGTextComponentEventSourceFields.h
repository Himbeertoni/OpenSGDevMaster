/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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


#ifndef _OSGTEXTCOMPONENTEVENTSOURCEFIELDS_H_
#define _OSGTEXTCOMPONENTEVENTSOURCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class TextComponentEventSource;

OSG_GEN_CONTAINERPTR(TextComponentEventSource);
/*! \ingroup GrpContribToolboxUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribToolboxUserInterface
 */
template <>
struct FieldTraits<TextComponentEventSource *, nsOSG> :
    public FieldTraitsFCPtrBase<TextComponentEventSource *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<TextComponentEventSource *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<TextComponentEventSource *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTextComponentEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponentEventSource *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTextComponentEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponentEventSource *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTextComponentEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponentEventSource *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTextComponentEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponentEventSource *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTextComponentEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponentEventSource *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTextComponentEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponentEventSource *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTextComponentEventSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponentEventSource *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTextComponentEventSourcePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TextComponentEventSource *,
                      RecordedRefCountPolicy, nsOSG  > SFRecTextComponentEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TextComponentEventSource *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecTextComponentEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TextComponentEventSource *,
                      WeakRefCountPolicy, nsOSG      > SFWeakTextComponentEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields */
typedef PointerSField<TextComponentEventSource *,
                      NoRefCountPolicy, nsOSG        > SFUncountedTextComponentEventSourcePtr;


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TextComponentEventSource *,
                      RecordedRefCountPolicy, nsOSG  > MFRecTextComponentEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TextComponentEventSource *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecTextComponentEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TextComponentEventSource *,
                      WeakRefCountPolicy, nsOSG      > MFWeakTextComponentEventSourcePtr;
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields */
typedef PointerMField<TextComponentEventSource *,
                      NoRefCountPolicy, nsOSG        > MFUncountedTextComponentEventSourcePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFRecTextComponentEventSourcePtr : 
    public PointerSField<TextComponentEventSource *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUnrecTextComponentEventSourcePtr : 
    public PointerSField<TextComponentEventSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFWeakTextComponentEventSourcePtr :
    public PointerSField<TextComponentEventSource *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldSFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct SFUncountedTextComponentEventSourcePtr :
    public PointerSField<TextComponentEventSource *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFRecTextComponentEventSourcePtr :
    public PointerMField<TextComponentEventSource *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUnrecTextComponentEventSourcePtr :
    public PointerMField<TextComponentEventSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFWeakTextComponentEventSourcePtr :
    public PointerMField<TextComponentEventSource *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribToolboxUserInterfaceFieldMFields \ingroup GrpLibOSGContribToolboxUserInterface */
struct MFUncountedTextComponentEventSourcePtr :
    public PointerMField<TextComponentEventSource *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTEXTCOMPONENTEVENTSOURCEFIELDS_H_ */
