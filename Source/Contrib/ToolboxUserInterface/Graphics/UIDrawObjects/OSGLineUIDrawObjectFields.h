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


#ifndef _OSGLINEUIDRAWOBJECTFIELDS_H_
#define _OSGLINEUIDRAWOBJECTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class LineUIDrawObject;

OSG_GEN_CONTAINERPTR(LineUIDrawObject);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<LineUIDrawObject *> :
    public FieldTraitsFCPtrBase<LineUIDrawObject *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<LineUIDrawObject *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFLineUIDrawObjectPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFLineUIDrawObjectPtr"; }
};

template<> inline
const Char8 *FieldTraits<LineUIDrawObject *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecLineUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineUIDrawObject *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecLineUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineUIDrawObject *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakLineUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineUIDrawObject *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdLineUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineUIDrawObject *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecLineUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineUIDrawObject *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecLineUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineUIDrawObject *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakLineUIDrawObjectPtr"; 
}

template<> inline
const Char8 *FieldTraits<LineUIDrawObject *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdLineUIDrawObjectPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<LineUIDrawObject *,
                      RecordedRefCountPolicy  > SFRecLineUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<LineUIDrawObject *,
                      UnrecordedRefCountPolicy> SFUnrecLineUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<LineUIDrawObject *,
                      WeakRefCountPolicy      > SFWeakLineUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<LineUIDrawObject *,
                      NoRefCountPolicy        > SFUncountedLineUIDrawObjectPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<LineUIDrawObject *,
                      RecordedRefCountPolicy  > MFRecLineUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<LineUIDrawObject *,
                      UnrecordedRefCountPolicy> MFUnrecLineUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<LineUIDrawObject *,
                      WeakRefCountPolicy      > MFWeakLineUIDrawObjectPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<LineUIDrawObject *,
                      NoRefCountPolicy        > MFUncountedLineUIDrawObjectPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecLineUIDrawObjectPtr : 
    public PointerSField<LineUIDrawObject *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecLineUIDrawObjectPtr : 
    public PointerSField<LineUIDrawObject *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakLineUIDrawObjectPtr :
    public PointerSField<LineUIDrawObject *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedLineUIDrawObjectPtr :
    public PointerSField<LineUIDrawObject *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecLineUIDrawObjectPtr :
    public PointerMField<LineUIDrawObject *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecLineUIDrawObjectPtr :
    public PointerMField<LineUIDrawObject *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakLineUIDrawObjectPtr :
    public PointerMField<LineUIDrawObject *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedLineUIDrawObjectPtr :
    public PointerMField<LineUIDrawObject *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGLINEUIDRAWOBJECTFIELDS_H_ */
