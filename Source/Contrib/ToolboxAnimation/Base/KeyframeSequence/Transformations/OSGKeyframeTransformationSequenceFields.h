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


#ifndef _OSGKEYFRAMETRANSFORMATIONSEQUENCEFIELDS_H_
#define _OSGKEYFRAMETRANSFORMATIONSEQUENCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class KeyframeTransformationSequence;

OSG_GEN_CONTAINERPTR(KeyframeTransformationSequence);

/*! \ingroup GrpTBAnimationFieldTraits
    \ingroup GrpLibOSGTBAnimation
 */
template <>
struct FieldTraits<KeyframeTransformationSequence *> :
    public FieldTraitsFCPtrBase<KeyframeTransformationSequence *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<KeyframeTransformationSequence *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFKeyframeTransformationSequencePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFKeyframeTransformationSequencePtr"; }
};

template<> inline
const Char8 *FieldTraits<KeyframeTransformationSequence *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecKeyframeTransformationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeTransformationSequence *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecKeyframeTransformationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeTransformationSequence *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakKeyframeTransformationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeTransformationSequence *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdKeyframeTransformationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeTransformationSequence *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecKeyframeTransformationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeTransformationSequence *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecKeyframeTransformationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeTransformationSequence *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakKeyframeTransformationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeTransformationSequence *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdKeyframeTransformationSequencePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeTransformationSequence *,
                      RecordedRefCountPolicy  > SFRecKeyframeTransformationSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeTransformationSequence *,
                      UnrecordedRefCountPolicy> SFUnrecKeyframeTransformationSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeTransformationSequence *,
                      WeakRefCountPolicy      > SFWeakKeyframeTransformationSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeTransformationSequence *,
                      NoRefCountPolicy        > SFUncountedKeyframeTransformationSequencePtr;


/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeTransformationSequence *,
                      RecordedRefCountPolicy  > MFRecKeyframeTransformationSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeTransformationSequence *,
                      UnrecordedRefCountPolicy> MFUnrecKeyframeTransformationSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeTransformationSequence *,
                      WeakRefCountPolicy      > MFWeakKeyframeTransformationSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeTransformationSequence *,
                      NoRefCountPolicy        > MFUncountedKeyframeTransformationSequencePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFRecKeyframeTransformationSequencePtr : 
    public PointerSField<KeyframeTransformationSequence *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUnrecKeyframeTransformationSequencePtr : 
    public PointerSField<KeyframeTransformationSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFWeakKeyframeTransformationSequencePtr :
    public PointerSField<KeyframeTransformationSequence *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUncountedKeyframeTransformationSequencePtr :
    public PointerSField<KeyframeTransformationSequence *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFRecKeyframeTransformationSequencePtr :
    public PointerMField<KeyframeTransformationSequence *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUnrecKeyframeTransformationSequencePtr :
    public PointerMField<KeyframeTransformationSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFWeakKeyframeTransformationSequencePtr :
    public PointerMField<KeyframeTransformationSequence *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUncountedKeyframeTransformationSequencePtr :
    public PointerMField<KeyframeTransformationSequence *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGKEYFRAMETRANSFORMATIONSEQUENCEFIELDS_H_ */
