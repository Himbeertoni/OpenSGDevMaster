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
 **     class CameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGNode.h"                    // Beacon Class

#include "OSGCameraDecoratorBase.h"
#include "OSGCameraDecorator.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CameraDecorator
    \ingroup GrpSystemWindowCameras

    The Camera base class, see \ref PageSystemWindowCamera for a description.

    The only common fields are _sfNear and _sfFar.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var CameraPtr CameraDecoratorBase::_sfDecoratee
    The object being decorated
*/

/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CameraDecorator *>::_type("CameraDecoratorPtr", "CameraPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CameraDecorator *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CameraDecorator *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CameraDecorator *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CameraDecoratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;

    pDesc = new SFUnrecCameraPtr::Description(
        SFUnrecCameraPtr::getClassType(),
        "decoratee",
        "undocumented decoratee",
        DecorateeFieldId, DecorateeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CameraDecorator::editHandleDecoratee),
        static_cast<FieldGetMethodSig >(&CameraDecorator::getHandleDecoratee ));

    oType.addInitialDesc(pDesc);
}


CameraDecoratorBase::TypeObject CameraDecoratorBase::_type(
    CameraDecoratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    CameraDecorator::initMethod,
    CameraDecorator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CameraDecorator::classDescInserter),
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

FieldContainerType &CameraDecoratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &CameraDecoratorBase::getType(void) const
{
    return _type;
}

UInt32 CameraDecoratorBase::getContainerSize(void) const
{
    return sizeof(CameraDecorator);
}

/*------------------------- decorator get ------------------------------*/

const SFUnrecCameraPtr *CameraDecoratorBase::getSFDecoratee(void) const
{
    return &_sfDecoratee;
}

//! Get the CameraDecorator::_sfBeacon field.
const SFWeakNodePtr *CameraDecoratorBase::getSFBeacon(void) const
{
    if(_sfDecoratee.getValue() != NULL)
    {
        return getDecoratee()->getSFBeacon();
    }
    else
    {
        return NULL;
    }
}
//! Get the CameraDecorator::_sfBeacon field.
SFWeakNodePtr *CameraDecoratorBase::editSFBeacon(void)
{
    if(_sfDecoratee.getValue() != NULL)
    {
        return getDecoratee()->editSFBeacon();
    }
    else
    {
        return NULL;
    }
}

SFReal32 *CameraDecoratorBase::editSFNear(void)
{
    if(_sfDecoratee.getValue() != NULL)
    {
        return getDecoratee()->editSFNear();
    }
    else
    {
        return NULL;
    }
}

const SFReal32 *CameraDecoratorBase::getSFNear(void) const
{
    if(_sfDecoratee.getValue() != NULL)
    {
        return getDecoratee()->getSFNear();
    }
    else
    {
        return NULL;
    }
}

SFReal32 *CameraDecoratorBase::editSFFar(void)
{
    if(_sfDecoratee.getValue() != NULL)
    {
        return getDecoratee()->editSFFar();
    }
    else
    {
        return NULL;
    }
}

const SFReal32 *CameraDecoratorBase::getSFFar(void) const
{
    if(_sfDecoratee.getValue() != NULL)
    {
        return getDecoratee()->getSFFar();
    }
    else
    {
        return NULL;
    }
}






/*------------------------------ access -----------------------------------*/

UInt32 CameraDecoratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DecorateeFieldMask & whichField))
    {
        returnValue += _sfDecoratee.getBinSize();
    }

    return returnValue;
}

void CameraDecoratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DecorateeFieldMask & whichField))
    {
        _sfDecoratee.copyToBin(pMem);
    }
}

void CameraDecoratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DecorateeFieldMask & whichField))
    {
        editSField(DecorateeFieldMask);
        _sfDecoratee.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

CameraDecoratorBase::CameraDecoratorBase(void) :
    Inherited(),
    _sfDecoratee()
{
}

CameraDecoratorBase::CameraDecoratorBase(const CameraDecoratorBase &source) :
    Inherited(source),
    _sfDecoratee(source._sfDecoratee)
{
}


/*-------------------------- destructors ----------------------------------*/

CameraDecoratorBase::~CameraDecoratorBase(void)
{
}

void CameraDecoratorBase::onCreate(const CameraDecorator *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        CameraDecorator *pThis = static_cast<CameraDecorator *>(this);

        pThis->setBeacon(source->getBeacon());
    }
}

GetFieldHandlePtr  CameraDecoratorBase::getHandleDecoratee (void) const
{
    SFUnrecCameraPtr::GetHandlePtr returnValue(
        new SFUnrecCameraPtr::GetHandle(
            &_sfDecoratee,
            this->getType().getFieldDesc(DecorateeFieldId),
            const_cast<CameraDecoratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CameraDecoratorBase::editHandleDecoratee(void)
{
    SFUnrecCameraPtr::EditHandlePtr returnValue(
        new SFUnrecCameraPtr::EditHandle(
            &_sfDecoratee,
            this->getType().getFieldDesc(DecorateeFieldId),
            this));

    returnValue->setSetMethod(boost::bind(&CameraDecorator::setDecoratee,
                              static_cast<CameraDecorator *>(this), _1));

    editSField(DecorateeFieldMask);

    return returnValue;
}

GetFieldHandlePtr CameraDecoratorBase::getHandleBeacon          (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             const_cast<CameraDecoratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CameraDecoratorBase::editHandleBeacon         (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CameraDecorator::setBeacon,
                    static_cast<CameraDecorator *>(this), _1));

    editSField(BeaconFieldMask);

    return returnValue;
}

GetFieldHandlePtr CameraDecoratorBase::getHandleNear            (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfNear,
             this->getType().getFieldDesc(NearFieldId),
             const_cast<CameraDecoratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CameraDecoratorBase::editHandleNear           (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfNear,
             this->getType().getFieldDesc(NearFieldId),
             this));


    editSField(NearFieldMask);

    return returnValue;
}

GetFieldHandlePtr CameraDecoratorBase::getHandleFar             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFar,
             this->getType().getFieldDesc(FarFieldId),
             const_cast<CameraDecoratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CameraDecoratorBase::editHandleFar            (void)
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
void CameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CameraDecorator *pThis = static_cast<CameraDecorator *>(this);

    pThis->execSync(static_cast<CameraDecorator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void CameraDecoratorBase::resolveLinks(void)
{
    static_cast<CameraDecorator *>(this)->setDecoratee(NULL);    

    Inherited::resolveLinks();

    static_cast<CameraDecorator *>(this)->setBeacon(NULL);


}

/*------------------------------ get -----------------------------------*/


//! Get the value of the CameraDecorator::_sfBeacon field.
Node * CameraDecoratorBase::getBeacon(void) const
{
    if(_sfDecoratee.getValue() != NULL)
    {
        return getDecoratee()->getBeacon();
    }
    else
    {
        return Inherited::getBeacon();
    }
}

//! Set the value of the CameraDecorator::_sfBeacon field.
void CameraDecoratorBase::setBeacon(Node * const value)
{
    if(_sfDecoratee.getValue() != NULL)
    {
        getDecoratee()->setBeacon(value);
    }
    else
    {
        Inherited::setBeacon(value);
    }
}

//! Get the value of the CameraDecorator::_sfNear field.
Real32 &CameraDecoratorBase::editNear(void)
{
    if(_sfDecoratee.getValue() != NULL)
    {
        return getDecoratee()->editNear();
    }
    else
    {
        return Inherited::editNear();
    }
}

//! Get the value of the CameraDecorator::_sfNear field.
      Real32  CameraDecoratorBase::getNear(void) const
{
    if(_sfDecoratee.getValue() != NULL)
    {
        return getDecoratee()->getNear();
    }
    else
    {
        return Inherited::getNear();
    }
}


//! Set the value of the CameraDecorator::_sfNear field.
void CameraDecoratorBase::setNear(const Real32 value)
{
    if(_sfDecoratee.getValue() != NULL)
    {
        getDecoratee()->setNear(value);
    }
    else
    {
        Inherited::setNear(value);
    }
}

//! Get the value of the CameraDecorator::_sfFar field.
Real32 &CameraDecoratorBase::editFar(void)
{
    if(_sfDecoratee.getValue() != NULL)
    {
        return getDecoratee()->editFar();
    }
    else
    {
        return Inherited::editFar();
    }
}

//! Get the value of the CameraDecorator::_sfFar field.
      Real32  CameraDecoratorBase::getFar(void) const
{
    if(_sfDecoratee.getValue() != NULL)
    {
        return getDecoratee()->getFar();
    }
    else
    {
        return Inherited::getFar();
    }
}


//! Set the value of the CameraDecorator::_sfFar field.
void CameraDecoratorBase::setFar(const Real32 value)
{
    if(_sfDecoratee.getValue() != NULL)
    {
        getDecoratee()->setFar(value);
    }
    else
    {
        Inherited::setFar(value);
    }
}


OSG_END_NAMESPACE
