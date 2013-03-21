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


#ifndef _OSGCANVASFIELDS_H_
#define _OSGCANVASFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Canvas;

OSG_GEN_CONTAINERPTR(Canvas);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<Canvas *> :
    public FieldTraitsFCPtrBase<Canvas *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Canvas *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCanvasPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCanvasPtr"; }
};

template<> inline
const Char8 *FieldTraits<Canvas *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCanvasPtr"; 
}

template<> inline
const Char8 *FieldTraits<Canvas *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCanvasPtr"; 
}

template<> inline
const Char8 *FieldTraits<Canvas *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCanvasPtr"; 
}

template<> inline
const Char8 *FieldTraits<Canvas *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCanvasPtr"; 
}

template<> inline
const Char8 *FieldTraits<Canvas *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCanvasPtr"; 
}

template<> inline
const Char8 *FieldTraits<Canvas *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCanvasPtr"; 
}

template<> inline
const Char8 *FieldTraits<Canvas *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCanvasPtr"; 
}

template<> inline
const Char8 *FieldTraits<Canvas *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCanvasPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Canvas *,
                      RecordedRefCountPolicy  > SFRecCanvasPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Canvas *,
                      UnrecordedRefCountPolicy> SFUnrecCanvasPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Canvas *,
                      WeakRefCountPolicy      > SFWeakCanvasPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Canvas *,
                      NoRefCountPolicy        > SFUncountedCanvasPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Canvas *,
                      RecordedRefCountPolicy  > MFRecCanvasPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Canvas *,
                      UnrecordedRefCountPolicy> MFUnrecCanvasPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Canvas *,
                      WeakRefCountPolicy      > MFWeakCanvasPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Canvas *,
                      NoRefCountPolicy        > MFUncountedCanvasPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecCanvasPtr : 
    public PointerSField<Canvas *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecCanvasPtr : 
    public PointerSField<Canvas *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakCanvasPtr :
    public PointerSField<Canvas *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedCanvasPtr :
    public PointerSField<Canvas *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecCanvasPtr :
    public PointerMField<Canvas *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecCanvasPtr :
    public PointerMField<Canvas *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakCanvasPtr :
    public PointerMField<Canvas *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedCanvasPtr :
    public PointerMField<Canvas *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCANVASFIELDS_H_ */
