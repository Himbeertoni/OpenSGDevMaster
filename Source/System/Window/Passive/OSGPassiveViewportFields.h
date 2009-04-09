/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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


#ifndef _OSGPASSIVEVIEWPORTFIELDS_H_
#define _OSGPASSIVEVIEWPORTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PassiveViewport;

OSG_GEN_CONTAINERPTR(PassiveViewport);

/*! \ingroup GrpWindowFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<PassiveViewport *> :
    public FieldTraitsFCPtrBase<PassiveViewport *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PassiveViewport *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPassiveViewportPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPassiveViewportPtr"; }
};

template<> inline
const Char8 *FieldTraits<PassiveViewport *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPassiveViewportPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowFieldSFields */
typedef PointerSField<PassiveViewport *,
                      RecordedRefCountPolicy  > SFRecPassiveViewportPtr;
/*! \ingroup GrpWindowFieldSFields */
typedef PointerSField<PassiveViewport *,
                      UnrecordedRefCountPolicy> SFUnrecPassiveViewportPtr;
/*! \ingroup GrpWindowFieldSFields */
typedef PointerSField<PassiveViewport *,
                      WeakRefCountPolicy      > SFWeakPassiveViewportPtr;
/*! \ingroup GrpWindowFieldSFields */
typedef PointerSField<PassiveViewport *,
                      NoRefCountPolicy        > SFUncountedPassiveViewportPtr;


/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<PassiveViewport *,
                      RecordedRefCountPolicy  > MFRecPassiveViewportPtr;
/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<PassiveViewport *,
                      UnrecordedRefCountPolicy> MFUnrecPassiveViewportPtr;
/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<PassiveViewport *,
                      WeakRefCountPolicy      > MFWeakPassiveViewportPtr;
/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<PassiveViewport *,
                      NoRefCountPolicy        > MFUncountedPassiveViewportPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecPassiveViewportPtr : 
    public PointerSField<PassiveViewport *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecPassiveViewportPtr : 
    public PointerSField<PassiveViewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakPassiveViewportPtr :
    public PointerSField<PassiveViewport *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedPassiveViewportPtr :
    public PointerSField<PassiveViewport *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecPassiveViewportPtr :
    public PointerMField<PassiveViewport *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecPassiveViewportPtr :
    public PointerMField<PassiveViewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakPassiveViewportPtr :
    public PointerMField<PassiveViewport *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedPassiveViewportPtr :
    public PointerMField<PassiveViewport *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPASSIVEVIEWPORTFIELDS_H_ */