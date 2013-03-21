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


#ifndef _OSGGLASSLAYERFIELDS_H_
#define _OSGGLASSLAYERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GlassLayer;

OSG_GEN_CONTAINERPTR(GlassLayer);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<GlassLayer *> :
    public FieldTraitsFCPtrBase<GlassLayer *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GlassLayer *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGlassLayerPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGlassLayerPtr"; }
};

template<> inline
const Char8 *FieldTraits<GlassLayer *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGlassLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlassLayer *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGlassLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlassLayer *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGlassLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlassLayer *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGlassLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlassLayer *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGlassLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlassLayer *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGlassLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlassLayer *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGlassLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<GlassLayer *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGlassLayerPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<GlassLayer *,
                      RecordedRefCountPolicy  > SFRecGlassLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<GlassLayer *,
                      UnrecordedRefCountPolicy> SFUnrecGlassLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<GlassLayer *,
                      WeakRefCountPolicy      > SFWeakGlassLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<GlassLayer *,
                      NoRefCountPolicy        > SFUncountedGlassLayerPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<GlassLayer *,
                      RecordedRefCountPolicy  > MFRecGlassLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<GlassLayer *,
                      UnrecordedRefCountPolicy> MFUnrecGlassLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<GlassLayer *,
                      WeakRefCountPolicy      > MFWeakGlassLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<GlassLayer *,
                      NoRefCountPolicy        > MFUncountedGlassLayerPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecGlassLayerPtr : 
    public PointerSField<GlassLayer *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecGlassLayerPtr : 
    public PointerSField<GlassLayer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakGlassLayerPtr :
    public PointerSField<GlassLayer *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedGlassLayerPtr :
    public PointerSField<GlassLayer *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecGlassLayerPtr :
    public PointerMField<GlassLayer *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecGlassLayerPtr :
    public PointerMField<GlassLayer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakGlassLayerPtr :
    public PointerMField<GlassLayer *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedGlassLayerPtr :
    public PointerMField<GlassLayer *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGLASSLAYERFIELDS_H_ */
