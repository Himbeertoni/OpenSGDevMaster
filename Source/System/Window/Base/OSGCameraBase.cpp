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
 **     class Camera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGNode.h"                    // Beacon Class

#include "OSGCameraBase.h"
#include "OSGCamera.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Camera
    \ingroup GrpSystemWindowCameras

    The Camera base class, see \ref PageSystemWindowCamera for a description.

    The only common fields are _sfNear and _sfFar.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Node *          CameraBase::_sfBeacon
    The object that define's the camera's coordinate system. The camera is positioned
    at the origin of the system and looks down the negative z-axis (OpenGL-style).
*/

/*! \var Real32          CameraBase::_sfNear
    The near distance of the camera.
*/

/*! \var Real32          CameraBase::_sfFar
    The far distance of the camera.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Camera *>::_type("CameraPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Camera *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Camera *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Camera *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CameraBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFWeakNodePtr::Description(
        SFWeakNodePtr::getClassType(),
        "beacon",
        "The object that define's the camera's coordinate system. The camera is positioned\n"
        "at the origin of the system and looks down the negative z-axis (OpenGL-style).\n",
        BeaconFieldId, BeaconFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Camera::editHandleBeacon),
        static_cast<FieldGetMethodSig >(&Camera::getHandleBeacon));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "near",
        "The near distance of the camera.\n",
        NearFieldId, NearFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Camera::editHandleNear),
        static_cast<FieldGetMethodSig >(&Camera::getHandleNear));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "far",
        "The far distance of the camera.\n",
        FarFieldId, FarFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Camera::editHandleFar),
        static_cast<FieldGetMethodSig >(&Camera::getHandleFar));

    oType.addInitialDesc(pDesc);
}


CameraBase::TypeObject CameraBase::_type(
    CameraBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    Camera::initMethod,
    Camera::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Camera::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"Camera\"\n"
    "   parent=\"AttachmentContainer\"\n"
    "   library=\"System\"\n"
    "   structure=\"abstract\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"true\"\n"
    "   decorateeFieldFlags=\"SFDefaultFlags | Field::FStdAccess\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowCameras\n"
    "\n"
    "The Camera base class, see \\ref PageSystemWindowCamera for a description.\n"
    "\n"
    "The only common fields are _sfNear and _sfFar.\n"
    "\t<Field\n"
    "\t\tname=\"beacon\"\n"
    "\t\ttype=\"Node\"\n"
    "        category=\"weakpointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe object that define's the camera's coordinate system. The camera is positioned\n"
    "\tat the origin of the system and looks down the negative z-axis (OpenGL-style).\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"near\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe near distance of the camera.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"far\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe far distance of the camera.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowCameras\n"
    "\n"
    "The Camera base class, see \\ref PageSystemWindowCamera for a description.\n"
    "\n"
    "The only common fields are _sfNear and _sfFar.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CameraBase::getType(void)
{
    return _type;
}

const FieldContainerType &CameraBase::getType(void) const
{
    return _type;
}

UInt32 CameraBase::getContainerSize(void) const
{
    return sizeof(Camera);
}

/*------------------------- decorator get ------------------------------*/


//! Get the Camera::_sfBeacon field.
const SFWeakNodePtr *CameraBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}

SFWeakNodePtr       *CameraBase::editSFBeacon         (void)
{
    editSField(BeaconFieldMask);

    return &_sfBeacon;
}

SFReal32 *CameraBase::editSFNear(void)
{
    editSField(NearFieldMask);

    return &_sfNear;
}

const SFReal32 *CameraBase::getSFNear(void) const
{
    return &_sfNear;
}


SFReal32 *CameraBase::editSFFar(void)
{
    editSField(FarFieldMask);

    return &_sfFar;
}

const SFReal32 *CameraBase::getSFFar(void) const
{
    return &_sfFar;
}






/*------------------------------ access -----------------------------------*/

UInt32 CameraBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }
    if(FieldBits::NoField != (NearFieldMask & whichField))
    {
        returnValue += _sfNear.getBinSize();
    }
    if(FieldBits::NoField != (FarFieldMask & whichField))
    {
        returnValue += _sfFar.getBinSize();
    }

    return returnValue;
}

void CameraBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NearFieldMask & whichField))
    {
        _sfNear.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FarFieldMask & whichField))
    {
        _sfFar.copyToBin(pMem);
    }
}

void CameraBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        editSField(BeaconFieldMask);
        _sfBeacon.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NearFieldMask & whichField))
    {
        editSField(NearFieldMask);
        _sfNear.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FarFieldMask & whichField))
    {
        editSField(FarFieldMask);
        _sfFar.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

CameraBase::CameraBase(void) :
    Inherited(),
    _sfBeacon                 (NULL),
    _sfNear                   (),
    _sfFar                    ()
{
}

CameraBase::CameraBase(const CameraBase &source) :
    Inherited(source),
    _sfBeacon                 (NULL),
    _sfNear                   (source._sfNear                   ),
    _sfFar                    (source._sfFar                    )
{
}


/*-------------------------- destructors ----------------------------------*/

CameraBase::~CameraBase(void)
{
}

void CameraBase::onCreate(const Camera *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        Camera *pThis = static_cast<Camera *>(this);

        pThis->setBeacon(source->getBeacon());
    }
}

GetFieldHandlePtr CameraBase::getHandleBeacon          (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             const_cast<CameraBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CameraBase::editHandleBeacon         (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&Camera::setBeacon,
                    static_cast<Camera *>(this), _1));

    editSField(BeaconFieldMask);

    return returnValue;
}

GetFieldHandlePtr CameraBase::getHandleNear            (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfNear,
             this->getType().getFieldDesc(NearFieldId),
             const_cast<CameraBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CameraBase::editHandleNear           (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfNear,
             this->getType().getFieldDesc(NearFieldId),
             this));


    editSField(NearFieldMask);

    return returnValue;
}

GetFieldHandlePtr CameraBase::getHandleFar             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFar,
             this->getType().getFieldDesc(FarFieldId),
             const_cast<CameraBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CameraBase::editHandleFar            (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFar,
             this->getType().getFieldDesc(FarFieldId),
             this));


    editSField(FarFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CameraBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Camera *pThis = static_cast<Camera *>(this);

    pThis->execSync(static_cast<Camera *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void CameraBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Camera *>(this)->setBeacon(NULL);


}

/*------------------------------ get -----------------------------------*/


//! Get the value of the Camera::_sfBeacon field.
Node * CameraBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the Camera::_sfBeacon field.
void CameraBase::setBeacon(Node * const value)
{
    editSField(BeaconFieldMask);

    _sfBeacon.setValue(value);
}
//! Get the value of the Camera::_sfNear field.

Real32 &CameraBase::editNear(void)
{
    editSField(NearFieldMask);

    return _sfNear.getValue();
}

//! Get the value of the Camera::_sfNear field.
      Real32  CameraBase::getNear(void) const
{
    return _sfNear.getValue();
}


//! Set the value of the Camera::_sfNear field.
void CameraBase::setNear(const Real32 value)
{
    editSField(NearFieldMask);

    _sfNear.setValue(value);
}
//! Get the value of the Camera::_sfFar field.

Real32 &CameraBase::editFar(void)
{
    editSField(FarFieldMask);

    return _sfFar.getValue();
}

//! Get the value of the Camera::_sfFar field.
      Real32  CameraBase::getFar(void) const
{
    return _sfFar.getValue();
}


//! Set the value of the Camera::_sfFar field.
void CameraBase::setFar(const Real32 value)
{
    editSField(FarFieldMask);

    _sfFar.setValue(value);
}


OSG_END_NAMESPACE
