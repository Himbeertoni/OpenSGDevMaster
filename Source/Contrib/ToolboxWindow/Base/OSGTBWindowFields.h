/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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


#ifndef _OSGTBWINDOWFIELDS_H_
#define _OSGTBWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class TBWindow;

OSG_GEN_CONTAINERPTR(TBWindow);
/*! \ingroup GrpSystemFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<TBWindow *, nsOSG> :
    public FieldTraitsFCPtrBase<TBWindow *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<TBWindow *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXWINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<TBWindow *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTBWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBWindow *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTBWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBWindow *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTBWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBWindow *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTBWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBWindow *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTBWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBWindow *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTBWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBWindow *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTBWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<TBWindow *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTBWindowPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<TBWindow *,
                      RecordedRefCountPolicy, nsOSG  > SFRecTBWindowPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<TBWindow *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecTBWindowPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<TBWindow *,
                      WeakRefCountPolicy, nsOSG      > SFWeakTBWindowPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<TBWindow *,
                      NoRefCountPolicy, nsOSG        > SFUncountedTBWindowPtr;


/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<TBWindow *,
                      RecordedRefCountPolicy, nsOSG  > MFRecTBWindowPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<TBWindow *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecTBWindowPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<TBWindow *,
                      WeakRefCountPolicy, nsOSG      > MFWeakTBWindowPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<TBWindow *,
                      NoRefCountPolicy, nsOSG        > MFUncountedTBWindowPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecTBWindowPtr : 
    public PointerSField<TBWindow *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecTBWindowPtr : 
    public PointerSField<TBWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakTBWindowPtr :
    public PointerSField<TBWindow *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedTBWindowPtr :
    public PointerSField<TBWindow *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecTBWindowPtr :
    public PointerMField<TBWindow *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecTBWindowPtr :
    public PointerMField<TBWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakTBWindowPtr :
    public PointerMField<TBWindow *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedTBWindowPtr :
    public PointerMField<TBWindow *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTBWINDOWFIELDS_H_ */