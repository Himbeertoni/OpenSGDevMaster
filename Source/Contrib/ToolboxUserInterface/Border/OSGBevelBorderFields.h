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


#ifndef _OSGBEVELBORDERFIELDS_H_
#define _OSGBEVELBORDERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class BevelBorder;

OSG_GEN_CONTAINERPTR(BevelBorder);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<BevelBorder *> :
    public FieldTraitsFCPtrBase<BevelBorder *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<BevelBorder *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBevelBorderPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBevelBorderPtr"; }
};

template<> inline
const Char8 *FieldTraits<BevelBorder *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBevelBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<BevelBorder *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBevelBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<BevelBorder *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBevelBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<BevelBorder *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBevelBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<BevelBorder *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBevelBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<BevelBorder *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBevelBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<BevelBorder *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBevelBorderPtr"; 
}

template<> inline
const Char8 *FieldTraits<BevelBorder *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBevelBorderPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BevelBorder *,
                      RecordedRefCountPolicy  > SFRecBevelBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BevelBorder *,
                      UnrecordedRefCountPolicy> SFUnrecBevelBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BevelBorder *,
                      WeakRefCountPolicy      > SFWeakBevelBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BevelBorder *,
                      NoRefCountPolicy        > SFUncountedBevelBorderPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BevelBorder *,
                      RecordedRefCountPolicy  > MFRecBevelBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BevelBorder *,
                      UnrecordedRefCountPolicy> MFUnrecBevelBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BevelBorder *,
                      WeakRefCountPolicy      > MFWeakBevelBorderPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BevelBorder *,
                      NoRefCountPolicy        > MFUncountedBevelBorderPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecBevelBorderPtr : 
    public PointerSField<BevelBorder *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecBevelBorderPtr : 
    public PointerSField<BevelBorder *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakBevelBorderPtr :
    public PointerSField<BevelBorder *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedBevelBorderPtr :
    public PointerSField<BevelBorder *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecBevelBorderPtr :
    public PointerMField<BevelBorder *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecBevelBorderPtr :
    public PointerMField<BevelBorder *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakBevelBorderPtr :
    public PointerMField<BevelBorder *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedBevelBorderPtr :
    public PointerMField<BevelBorder *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBEVELBORDERFIELDS_H_ */
