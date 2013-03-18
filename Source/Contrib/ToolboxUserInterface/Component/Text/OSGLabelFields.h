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


#ifndef _OSGLABELFIELDS_H_
#define _OSGLABELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Label;

OSG_GEN_CONTAINERPTR(Label);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<Label *> :
    public FieldTraitsFCPtrBase<Label *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Label *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFLabelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFLabelPtr"; }
};

template<> inline
const Char8 *FieldTraits<Label *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<Label *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<Label *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<Label *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<Label *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<Label *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<Label *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<Label *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdLabelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Label *,
                      RecordedRefCountPolicy  > SFRecLabelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Label *,
                      UnrecordedRefCountPolicy> SFUnrecLabelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Label *,
                      WeakRefCountPolicy      > SFWeakLabelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<Label *,
                      NoRefCountPolicy        > SFUncountedLabelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Label *,
                      RecordedRefCountPolicy  > MFRecLabelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Label *,
                      UnrecordedRefCountPolicy> MFUnrecLabelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Label *,
                      WeakRefCountPolicy      > MFWeakLabelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<Label *,
                      NoRefCountPolicy        > MFUncountedLabelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecLabelPtr : 
    public PointerSField<Label *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecLabelPtr : 
    public PointerSField<Label *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakLabelPtr :
    public PointerSField<Label *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedLabelPtr :
    public PointerSField<Label *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecLabelPtr :
    public PointerMField<Label *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecLabelPtr :
    public PointerMField<Label *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakLabelPtr :
    public PointerMField<Label *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedLabelPtr :
    public PointerMField<Label *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGLABELFIELDS_H_ */
