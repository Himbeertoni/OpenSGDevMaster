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


#ifndef _OSGBOXLAYOUTFIELDS_H_
#define _OSGBOXLAYOUTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class BoxLayout;

OSG_GEN_CONTAINERPTR(BoxLayout);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<BoxLayout *> :
    public FieldTraitsFCPtrBase<BoxLayout *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<BoxLayout *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBoxLayoutPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBoxLayoutPtr"; }
};

template<> inline
const Char8 *FieldTraits<BoxLayout *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBoxLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoxLayout *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBoxLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoxLayout *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBoxLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoxLayout *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBoxLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoxLayout *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBoxLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoxLayout *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBoxLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoxLayout *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBoxLayoutPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoxLayout *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBoxLayoutPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BoxLayout *,
                      RecordedRefCountPolicy  > SFRecBoxLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BoxLayout *,
                      UnrecordedRefCountPolicy> SFUnrecBoxLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BoxLayout *,
                      WeakRefCountPolicy      > SFWeakBoxLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BoxLayout *,
                      NoRefCountPolicy        > SFUncountedBoxLayoutPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BoxLayout *,
                      RecordedRefCountPolicy  > MFRecBoxLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BoxLayout *,
                      UnrecordedRefCountPolicy> MFUnrecBoxLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BoxLayout *,
                      WeakRefCountPolicy      > MFWeakBoxLayoutPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BoxLayout *,
                      NoRefCountPolicy        > MFUncountedBoxLayoutPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecBoxLayoutPtr : 
    public PointerSField<BoxLayout *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecBoxLayoutPtr : 
    public PointerSField<BoxLayout *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakBoxLayoutPtr :
    public PointerSField<BoxLayout *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedBoxLayoutPtr :
    public PointerSField<BoxLayout *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecBoxLayoutPtr :
    public PointerMField<BoxLayout *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecBoxLayoutPtr :
    public PointerMField<BoxLayout *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakBoxLayoutPtr :
    public PointerMField<BoxLayout *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedBoxLayoutPtr :
    public PointerMField<BoxLayout *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBOXLAYOUTFIELDS_H_ */
