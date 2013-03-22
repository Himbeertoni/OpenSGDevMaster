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


#ifndef _OSGBLENDEDKEYFRAMEANIMATORFIELDS_H_
#define _OSGBLENDEDKEYFRAMEANIMATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class BlendedKeyframeAnimator;

OSG_GEN_CONTAINERPTR(BlendedKeyframeAnimator);

/*! \ingroup GrpTBAnimationFieldTraits
    \ingroup GrpLibOSGTBAnimation
 */
template <>
struct FieldTraits<BlendedKeyframeAnimator *> :
    public FieldTraitsFCPtrBase<BlendedKeyframeAnimator *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<BlendedKeyframeAnimator *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBlendedKeyframeAnimatorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBlendedKeyframeAnimatorPtr"; }
};

template<> inline
const Char8 *FieldTraits<BlendedKeyframeAnimator *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBlendedKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<BlendedKeyframeAnimator *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBlendedKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<BlendedKeyframeAnimator *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBlendedKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<BlendedKeyframeAnimator *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBlendedKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<BlendedKeyframeAnimator *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBlendedKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<BlendedKeyframeAnimator *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBlendedKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<BlendedKeyframeAnimator *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBlendedKeyframeAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<BlendedKeyframeAnimator *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBlendedKeyframeAnimatorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<BlendedKeyframeAnimator *,
                      RecordedRefCountPolicy  > SFRecBlendedKeyframeAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<BlendedKeyframeAnimator *,
                      UnrecordedRefCountPolicy> SFUnrecBlendedKeyframeAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<BlendedKeyframeAnimator *,
                      WeakRefCountPolicy      > SFWeakBlendedKeyframeAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<BlendedKeyframeAnimator *,
                      NoRefCountPolicy        > SFUncountedBlendedKeyframeAnimatorPtr;


/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<BlendedKeyframeAnimator *,
                      RecordedRefCountPolicy  > MFRecBlendedKeyframeAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<BlendedKeyframeAnimator *,
                      UnrecordedRefCountPolicy> MFUnrecBlendedKeyframeAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<BlendedKeyframeAnimator *,
                      WeakRefCountPolicy      > MFWeakBlendedKeyframeAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<BlendedKeyframeAnimator *,
                      NoRefCountPolicy        > MFUncountedBlendedKeyframeAnimatorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFRecBlendedKeyframeAnimatorPtr : 
    public PointerSField<BlendedKeyframeAnimator *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUnrecBlendedKeyframeAnimatorPtr : 
    public PointerSField<BlendedKeyframeAnimator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFWeakBlendedKeyframeAnimatorPtr :
    public PointerSField<BlendedKeyframeAnimator *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUncountedBlendedKeyframeAnimatorPtr :
    public PointerSField<BlendedKeyframeAnimator *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFRecBlendedKeyframeAnimatorPtr :
    public PointerMField<BlendedKeyframeAnimator *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUnrecBlendedKeyframeAnimatorPtr :
    public PointerMField<BlendedKeyframeAnimator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFWeakBlendedKeyframeAnimatorPtr :
    public PointerMField<BlendedKeyframeAnimator *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUncountedBlendedKeyframeAnimatorPtr :
    public PointerMField<BlendedKeyframeAnimator *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBLENDEDKEYFRAMEANIMATORFIELDS_H_ */