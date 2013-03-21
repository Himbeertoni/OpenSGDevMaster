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


#ifndef _OSGUIDRAWINGSURFACEMOUSETRANSFORMFUNCTORFIELDS_H_
#define _OSGUIDRAWINGSURFACEMOUSETRANSFORMFUNCTORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class UIDrawingSurfaceMouseTransformFunctor;

OSG_GEN_CONTAINERPTR(UIDrawingSurfaceMouseTransformFunctor);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<UIDrawingSurfaceMouseTransformFunctor *> :
    public FieldTraitsFCPtrBase<UIDrawingSurfaceMouseTransformFunctor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<UIDrawingSurfaceMouseTransformFunctor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFUIDrawingSurfaceMouseTransformFunctorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFUIDrawingSurfaceMouseTransformFunctorPtr"; }
};

template<> inline
const Char8 *FieldTraits<UIDrawingSurfaceMouseTransformFunctor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecUIDrawingSurfaceMouseTransformFunctorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIDrawingSurfaceMouseTransformFunctor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecUIDrawingSurfaceMouseTransformFunctorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIDrawingSurfaceMouseTransformFunctor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakUIDrawingSurfaceMouseTransformFunctorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIDrawingSurfaceMouseTransformFunctor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdUIDrawingSurfaceMouseTransformFunctorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIDrawingSurfaceMouseTransformFunctor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecUIDrawingSurfaceMouseTransformFunctorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIDrawingSurfaceMouseTransformFunctor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecUIDrawingSurfaceMouseTransformFunctorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIDrawingSurfaceMouseTransformFunctor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakUIDrawingSurfaceMouseTransformFunctorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UIDrawingSurfaceMouseTransformFunctor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdUIDrawingSurfaceMouseTransformFunctorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<UIDrawingSurfaceMouseTransformFunctor *,
                      RecordedRefCountPolicy  > SFRecUIDrawingSurfaceMouseTransformFunctorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<UIDrawingSurfaceMouseTransformFunctor *,
                      UnrecordedRefCountPolicy> SFUnrecUIDrawingSurfaceMouseTransformFunctorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<UIDrawingSurfaceMouseTransformFunctor *,
                      WeakRefCountPolicy      > SFWeakUIDrawingSurfaceMouseTransformFunctorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<UIDrawingSurfaceMouseTransformFunctor *,
                      NoRefCountPolicy        > SFUncountedUIDrawingSurfaceMouseTransformFunctorPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<UIDrawingSurfaceMouseTransformFunctor *,
                      RecordedRefCountPolicy  > MFRecUIDrawingSurfaceMouseTransformFunctorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<UIDrawingSurfaceMouseTransformFunctor *,
                      UnrecordedRefCountPolicy> MFUnrecUIDrawingSurfaceMouseTransformFunctorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<UIDrawingSurfaceMouseTransformFunctor *,
                      WeakRefCountPolicy      > MFWeakUIDrawingSurfaceMouseTransformFunctorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<UIDrawingSurfaceMouseTransformFunctor *,
                      NoRefCountPolicy        > MFUncountedUIDrawingSurfaceMouseTransformFunctorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecUIDrawingSurfaceMouseTransformFunctorPtr : 
    public PointerSField<UIDrawingSurfaceMouseTransformFunctor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecUIDrawingSurfaceMouseTransformFunctorPtr : 
    public PointerSField<UIDrawingSurfaceMouseTransformFunctor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakUIDrawingSurfaceMouseTransformFunctorPtr :
    public PointerSField<UIDrawingSurfaceMouseTransformFunctor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedUIDrawingSurfaceMouseTransformFunctorPtr :
    public PointerSField<UIDrawingSurfaceMouseTransformFunctor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecUIDrawingSurfaceMouseTransformFunctorPtr :
    public PointerMField<UIDrawingSurfaceMouseTransformFunctor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecUIDrawingSurfaceMouseTransformFunctorPtr :
    public PointerMField<UIDrawingSurfaceMouseTransformFunctor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakUIDrawingSurfaceMouseTransformFunctorPtr :
    public PointerMField<UIDrawingSurfaceMouseTransformFunctor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedUIDrawingSurfaceMouseTransformFunctorPtr :
    public PointerMField<UIDrawingSurfaceMouseTransformFunctor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGUIDRAWINGSURFACEMOUSETRANSFORMFUNCTORFIELDS_H_ */
