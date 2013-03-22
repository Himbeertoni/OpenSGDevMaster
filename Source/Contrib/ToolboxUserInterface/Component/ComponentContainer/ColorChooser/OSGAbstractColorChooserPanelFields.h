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


#ifndef _OSGABSTRACTCOLORCHOOSERPANELFIELDS_H_
#define _OSGABSTRACTCOLORCHOOSERPANELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AbstractColorChooserPanel;

OSG_GEN_CONTAINERPTR(AbstractColorChooserPanel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<AbstractColorChooserPanel *> :
    public FieldTraitsFCPtrBase<AbstractColorChooserPanel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AbstractColorChooserPanel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAbstractColorChooserPanelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAbstractColorChooserPanelPtr"; }
};

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAbstractColorChooserPanelPtr"; 
}


/*! \ingroup GrpContribUserInterfaceFieldTraits
 */
template <>
struct FieldTraits<AbstractColorChooserPanel *, 1> :
    public FieldTraitsFCPtrBase<AbstractColorChooserPanel *, 1>
{
  private:

  public:
    typedef FieldTraits<AbstractColorChooserPanel *, 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildAbstractColorChooserPanelPtr"; 
}

template<> inline
const Char8 *FieldTraits<AbstractColorChooserPanel *, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildAbstractColorChooserPanelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractColorChooserPanel *,
                      RecordedRefCountPolicy  > SFRecAbstractColorChooserPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractColorChooserPanel *,
                      UnrecordedRefCountPolicy> SFUnrecAbstractColorChooserPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractColorChooserPanel *,
                      WeakRefCountPolicy      > SFWeakAbstractColorChooserPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<AbstractColorChooserPanel *,
                      NoRefCountPolicy        > SFUncountedAbstractColorChooserPanelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractColorChooserPanel *,
                      RecordedRefCountPolicy  > MFRecAbstractColorChooserPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractColorChooserPanel *,
                      UnrecordedRefCountPolicy> MFUnrecAbstractColorChooserPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractColorChooserPanel *,
                      WeakRefCountPolicy      > MFWeakAbstractColorChooserPanelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<AbstractColorChooserPanel *,
                      NoRefCountPolicy        > MFUncountedAbstractColorChooserPanelPtr;



/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef ChildPointerMField<
          AbstractColorChooserPanel *, 
          UnrecordedRefCountPolicy,
          1             > MFUnrecChildAbstractColorChooserPanelPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecAbstractColorChooserPanelPtr : 
    public PointerSField<AbstractColorChooserPanel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecAbstractColorChooserPanelPtr : 
    public PointerSField<AbstractColorChooserPanel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakAbstractColorChooserPanelPtr :
    public PointerSField<AbstractColorChooserPanel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedAbstractColorChooserPanelPtr :
    public PointerSField<AbstractColorChooserPanel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecAbstractColorChooserPanelPtr :
    public PointerMField<AbstractColorChooserPanel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecAbstractColorChooserPanelPtr :
    public PointerMField<AbstractColorChooserPanel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakAbstractColorChooserPanelPtr :
    public PointerMField<AbstractColorChooserPanel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedAbstractColorChooserPanelPtr :
    public PointerMField<AbstractColorChooserPanel *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecChildAbstractColorChooserPanelPtr :
    public ChildPointerMField<
        AbstractColorChooserPanel *, 
        UnrecordedRefCountPolicy,
        1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGABSTRACTCOLORCHOOSERPANELFIELDS_H_ */