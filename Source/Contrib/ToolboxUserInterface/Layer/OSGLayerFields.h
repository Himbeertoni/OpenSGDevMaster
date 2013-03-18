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


#ifndef _OSGLAYERFIELDS_H_
#define _OSGLAYERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Layer;

OSG_GEN_CONTAINERPTR(Layer);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<Layer *> :
    public FieldTraitsFCPtrBase<Layer *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Layer *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFLayerPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFLayerPtr"; }
};

template<> inline
const Char8 *FieldTraits<Layer *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layer *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layer *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layer *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layer *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layer *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layer *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<Layer *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdLayerPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Layer *,
                      RecordedRefCountPolicy  > SFRecLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Layer *,
                      UnrecordedRefCountPolicy> SFUnrecLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Layer *,
                      WeakRefCountPolicy      > SFWeakLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Layer *,
                      NoRefCountPolicy        > SFUncountedLayerPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Layer *,
                      RecordedRefCountPolicy  > MFRecLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Layer *,
                      UnrecordedRefCountPolicy> MFUnrecLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Layer *,
                      WeakRefCountPolicy      > MFWeakLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Layer *,
                      NoRefCountPolicy        > MFUncountedLayerPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecLayerPtr : 
    public PointerSField<Layer *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecLayerPtr : 
    public PointerSField<Layer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakLayerPtr :
    public PointerSField<Layer *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedLayerPtr :
    public PointerSField<Layer *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecLayerPtr :
    public PointerMField<Layer *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecLayerPtr :
    public PointerMField<Layer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakLayerPtr :
    public PointerMField<Layer *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedLayerPtr :
    public PointerMField<Layer *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGLAYERFIELDS_H_ */
