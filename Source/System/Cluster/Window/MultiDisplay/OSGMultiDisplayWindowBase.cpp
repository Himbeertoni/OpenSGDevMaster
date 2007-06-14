/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class MultiDisplayWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMULTIDISPLAYWINDOWINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGMultiDisplayWindowBase.h"
#include "OSGMultiDisplayWindow.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MultiDisplayWindow
    Cluster rendering configuration for multible displays
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var UInt32          MultiDisplayWindowBase::_sfHServers
    Number of horizontal servers
*/

/*! \var UInt32          MultiDisplayWindowBase::_sfVServers
    Number of vertical servers
*/

/*! \var bool            MultiDisplayWindowBase::_sfManageClientViewports
    If true, duplicate all viewports into the client window
*/

/*! \var Int32           MultiDisplayWindowBase::_sfXOverlap
    Horizontal overlap
*/

/*! \var Int32           MultiDisplayWindowBase::_sfYOverlap
    Vertical overlap
*/


void MultiDisplayWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(MultiDisplayWindowBase::*GetSFHServersF)(void) const;

    GetSFHServersF GetSFHServers = &MultiDisplayWindowBase::getSFHServers;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "hServers",
        "Number of horizontal servers\n",
        HServersFieldId, HServersFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MultiDisplayWindowBase::editSFHServers),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFHServers));
#else
        reinterpret_cast<FieldGetMethodSig >(&MultiDisplayWindowBase::getSFHServers));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(MultiDisplayWindowBase::*GetSFVServersF)(void) const;

    GetSFVServersF GetSFVServers = &MultiDisplayWindowBase::getSFVServers;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "vServers",
        "Number of vertical servers\n",
        VServersFieldId, VServersFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MultiDisplayWindowBase::editSFVServers),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFVServers));
#else
        reinterpret_cast<FieldGetMethodSig >(&MultiDisplayWindowBase::getSFVServers));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(MultiDisplayWindowBase::*GetSFManageClientViewportsF)(void) const;

    GetSFManageClientViewportsF GetSFManageClientViewports = &MultiDisplayWindowBase::getSFManageClientViewports;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "manageClientViewports",
        "If true, duplicate all viewports into the client window\n",
        ManageClientViewportsFieldId, ManageClientViewportsFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MultiDisplayWindowBase::editSFManageClientViewports),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFManageClientViewports));
#else
        reinterpret_cast<FieldGetMethodSig >(&MultiDisplayWindowBase::getSFManageClientViewports));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFInt32 *(MultiDisplayWindowBase::*GetSFXOverlapF)(void) const;

    GetSFXOverlapF GetSFXOverlap = &MultiDisplayWindowBase::getSFXOverlap;
#endif

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "xOverlap",
        "Horizontal overlap\n",
        XOverlapFieldId, XOverlapFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MultiDisplayWindowBase::editSFXOverlap),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFXOverlap));
#else
        reinterpret_cast<FieldGetMethodSig >(&MultiDisplayWindowBase::getSFXOverlap));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFInt32 *(MultiDisplayWindowBase::*GetSFYOverlapF)(void) const;

    GetSFYOverlapF GetSFYOverlap = &MultiDisplayWindowBase::getSFYOverlap;
#endif

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "yOverlap",
        "Vertical overlap\n",
        YOverlapFieldId, YOverlapFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MultiDisplayWindowBase::editSFYOverlap),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFYOverlap));
#else
        reinterpret_cast<FieldGetMethodSig >(&MultiDisplayWindowBase::getSFYOverlap));
#endif

    oType.addInitialDesc(pDesc);
}


MultiDisplayWindowBase::TypeObject MultiDisplayWindowBase::_type(
    MultiDisplayWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &MultiDisplayWindowBase::createEmpty,
    MultiDisplayWindow::initMethod,
    (InitalInsertDescFunc) &MultiDisplayWindowBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MultiDisplayWindow\"\n"
    "\tparent=\"ClusterWindow\"\n"
    "\tlibrary=\"Cluster\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "Cluster rendering configuration for multible displays\n"
    "\t<Field\n"
    "\t\tname=\"hServers\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tNumber of horizontal servers\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"vServers\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tNumber of vertical servers\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"manageClientViewports\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tIf true, duplicate all viewports into the client window\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"xOverlap\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tHorizontal overlap\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"yOverlap\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tVertical overlap\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "Cluster rendering configuration for multible displays\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MultiDisplayWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &MultiDisplayWindowBase::getType(void) const
{
    return _type;
}

UInt32 MultiDisplayWindowBase::getContainerSize(void) const
{
    return sizeof(MultiDisplayWindow);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *MultiDisplayWindowBase::editSFHServers(void)
{
    editSField(HServersFieldMask);

    return &_sfHServers;
}

const SFUInt32 *MultiDisplayWindowBase::getSFHServers(void) const
{
    return &_sfHServers;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *MultiDisplayWindowBase::getSFHServers       (void)
{
    return this->editSFHServers       ();
}
#endif

SFUInt32 *MultiDisplayWindowBase::editSFVServers(void)
{
    editSField(VServersFieldMask);

    return &_sfVServers;
}

const SFUInt32 *MultiDisplayWindowBase::getSFVServers(void) const
{
    return &_sfVServers;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *MultiDisplayWindowBase::getSFVServers       (void)
{
    return this->editSFVServers       ();
}
#endif

SFBool *MultiDisplayWindowBase::editSFManageClientViewports(void)
{
    editSField(ManageClientViewportsFieldMask);

    return &_sfManageClientViewports;
}

const SFBool *MultiDisplayWindowBase::getSFManageClientViewports(void) const
{
    return &_sfManageClientViewports;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *MultiDisplayWindowBase::getSFManageClientViewports(void)
{
    return this->editSFManageClientViewports();
}
#endif

SFInt32 *MultiDisplayWindowBase::editSFXOverlap(void)
{
    editSField(XOverlapFieldMask);

    return &_sfXOverlap;
}

const SFInt32 *MultiDisplayWindowBase::getSFXOverlap(void) const
{
    return &_sfXOverlap;
}

#ifdef OSG_1_GET_COMPAT
SFInt32             *MultiDisplayWindowBase::getSFXOverlap       (void)
{
    return this->editSFXOverlap       ();
}
#endif

SFInt32 *MultiDisplayWindowBase::editSFYOverlap(void)
{
    editSField(YOverlapFieldMask);

    return &_sfYOverlap;
}

const SFInt32 *MultiDisplayWindowBase::getSFYOverlap(void) const
{
    return &_sfYOverlap;
}

#ifdef OSG_1_GET_COMPAT
SFInt32             *MultiDisplayWindowBase::getSFYOverlap       (void)
{
    return this->editSFYOverlap       ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 MultiDisplayWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HServersFieldMask & whichField))
    {
        returnValue += _sfHServers.getBinSize();
    }
    if(FieldBits::NoField != (VServersFieldMask & whichField))
    {
        returnValue += _sfVServers.getBinSize();
    }
    if(FieldBits::NoField != (ManageClientViewportsFieldMask & whichField))
    {
        returnValue += _sfManageClientViewports.getBinSize();
    }
    if(FieldBits::NoField != (XOverlapFieldMask & whichField))
    {
        returnValue += _sfXOverlap.getBinSize();
    }
    if(FieldBits::NoField != (YOverlapFieldMask & whichField))
    {
        returnValue += _sfYOverlap.getBinSize();
    }

    return returnValue;
}

void MultiDisplayWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HServersFieldMask & whichField))
    {
        _sfHServers.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VServersFieldMask & whichField))
    {
        _sfVServers.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ManageClientViewportsFieldMask & whichField))
    {
        _sfManageClientViewports.copyToBin(pMem);
    }
    if(FieldBits::NoField != (XOverlapFieldMask & whichField))
    {
        _sfXOverlap.copyToBin(pMem);
    }
    if(FieldBits::NoField != (YOverlapFieldMask & whichField))
    {
        _sfYOverlap.copyToBin(pMem);
    }
}

void MultiDisplayWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HServersFieldMask & whichField))
    {
        _sfHServers.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VServersFieldMask & whichField))
    {
        _sfVServers.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ManageClientViewportsFieldMask & whichField))
    {
        _sfManageClientViewports.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (XOverlapFieldMask & whichField))
    {
        _sfXOverlap.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (YOverlapFieldMask & whichField))
    {
        _sfYOverlap.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MultiDisplayWindowPtr MultiDisplayWindowBase::create(void)
{
    MultiDisplayWindowPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<MultiDisplayWindow::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
MultiDisplayWindowPtr MultiDisplayWindowBase::createEmpty(void)
{
    MultiDisplayWindowPtr returnValue;

    newPtr<MultiDisplayWindow>(returnValue);

    return returnValue;
}

FieldContainerPtr MultiDisplayWindowBase::shallowCopy(void) const
{
    MultiDisplayWindowPtr returnValue;

    newPtr(returnValue, dynamic_cast<const MultiDisplayWindow *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

MultiDisplayWindowBase::MultiDisplayWindowBase(void) :
    Inherited(),
    _sfHServers               (),
    _sfVServers               (),
    _sfManageClientViewports  (bool(true)),
    _sfXOverlap               (Int32(0)),
    _sfYOverlap               (Int32(0))
{
}

MultiDisplayWindowBase::MultiDisplayWindowBase(const MultiDisplayWindowBase &source) :
    Inherited(source),
    _sfHServers               (source._sfHServers               ),
    _sfVServers               (source._sfVServers               ),
    _sfManageClientViewports  (source._sfManageClientViewports  ),
    _sfXOverlap               (source._sfXOverlap               ),
    _sfYOverlap               (source._sfYOverlap               )
{
}

/*-------------------------- destructors ----------------------------------*/

MultiDisplayWindowBase::~MultiDisplayWindowBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void MultiDisplayWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<MultiDisplayWindowBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void MultiDisplayWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<MultiDisplayWindowBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void MultiDisplayWindowBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr MultiDisplayWindowBase::createAspectCopy(void) const
{
    MultiDisplayWindowPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MultiDisplayWindow *>(this));

    return returnValue;
}
#endif

void MultiDisplayWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MultiDisplayWindowPtr>::_type("MultiDisplayWindowPtr", "ClusterWindowPtr");
#endif


OSG_END_NAMESPACE
