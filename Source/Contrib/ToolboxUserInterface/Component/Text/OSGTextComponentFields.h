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


#ifndef _OSGTEXTCOMPONENTFIELDS_H_
#define _OSGTEXTCOMPONENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TextComponent;

OSG_GEN_CONTAINERPTR(TextComponent);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<TextComponent *> :
    public FieldTraitsFCPtrBase<TextComponent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TextComponent *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTextComponentPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTextComponentPtr"; }
};

template<> inline
const Char8 *FieldTraits<TextComponent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponent *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponent *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponent *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTextComponentPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextComponent *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTextComponentPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TextComponent *,
                      RecordedRefCountPolicy  > SFRecTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TextComponent *,
                      UnrecordedRefCountPolicy> SFUnrecTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TextComponent *,
                      WeakRefCountPolicy      > SFWeakTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TextComponent *,
                      NoRefCountPolicy        > SFUncountedTextComponentPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TextComponent *,
                      RecordedRefCountPolicy  > MFRecTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TextComponent *,
                      UnrecordedRefCountPolicy> MFUnrecTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TextComponent *,
                      WeakRefCountPolicy      > MFWeakTextComponentPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TextComponent *,
                      NoRefCountPolicy        > MFUncountedTextComponentPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecTextComponentPtr : 
    public PointerSField<TextComponent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecTextComponentPtr : 
    public PointerSField<TextComponent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakTextComponentPtr :
    public PointerSField<TextComponent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedTextComponentPtr :
    public PointerSField<TextComponent *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecTextComponentPtr :
    public PointerMField<TextComponent *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecTextComponentPtr :
    public PointerMField<TextComponent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakTextComponentPtr :
    public PointerMField<TextComponent *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedTextComponentPtr :
    public PointerMField<TextComponent *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTEXTCOMPONENTFIELDS_H_ */
