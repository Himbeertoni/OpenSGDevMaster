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


#ifndef _OSGKEYFRAMEBASICSEQUENCEFIELDS_H_
#define _OSGKEYFRAMEBASICSEQUENCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class KeyframeBasicSequence;

OSG_GEN_CONTAINERPTR(KeyframeBasicSequence);

/*! \ingroup GrpTBAnimationFieldTraits
    \ingroup GrpLibOSGTBAnimation
 */
template <>
struct FieldTraits<KeyframeBasicSequence *> :
    public FieldTraitsFCPtrBase<KeyframeBasicSequence *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<KeyframeBasicSequence *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFKeyframeBasicSequencePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFKeyframeBasicSequencePtr"; }
};

template<> inline
const Char8 *FieldTraits<KeyframeBasicSequence *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecKeyframeBasicSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeBasicSequence *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecKeyframeBasicSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeBasicSequence *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakKeyframeBasicSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeBasicSequence *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdKeyframeBasicSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeBasicSequence *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecKeyframeBasicSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeBasicSequence *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecKeyframeBasicSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeBasicSequence *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakKeyframeBasicSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeBasicSequence *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdKeyframeBasicSequencePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeBasicSequence *,
                      RecordedRefCountPolicy  > SFRecKeyframeBasicSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeBasicSequence *,
                      UnrecordedRefCountPolicy> SFUnrecKeyframeBasicSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeBasicSequence *,
                      WeakRefCountPolicy      > SFWeakKeyframeBasicSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeBasicSequence *,
                      NoRefCountPolicy        > SFUncountedKeyframeBasicSequencePtr;


/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeBasicSequence *,
                      RecordedRefCountPolicy  > MFRecKeyframeBasicSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeBasicSequence *,
                      UnrecordedRefCountPolicy> MFUnrecKeyframeBasicSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeBasicSequence *,
                      WeakRefCountPolicy      > MFWeakKeyframeBasicSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeBasicSequence *,
                      NoRefCountPolicy        > MFUncountedKeyframeBasicSequencePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFRecKeyframeBasicSequencePtr : 
    public PointerSField<KeyframeBasicSequence *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUnrecKeyframeBasicSequencePtr : 
    public PointerSField<KeyframeBasicSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFWeakKeyframeBasicSequencePtr :
    public PointerSField<KeyframeBasicSequence *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUncountedKeyframeBasicSequencePtr :
    public PointerSField<KeyframeBasicSequence *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFRecKeyframeBasicSequencePtr :
    public PointerMField<KeyframeBasicSequence *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUnrecKeyframeBasicSequencePtr :
    public PointerMField<KeyframeBasicSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFWeakKeyframeBasicSequencePtr :
    public PointerMField<KeyframeBasicSequence *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUncountedKeyframeBasicSequencePtr :
    public PointerMField<KeyframeBasicSequence *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGKEYFRAMEBASICSEQUENCEFIELDS_H_ */
