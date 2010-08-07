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
 **     class FishEyeProjectorData!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"


#include "OSGGLEXT.h"                     // TextureFormat default header

#include "OSGFrameBufferObject.h"       // RenderTarget Class
#include "OSGTextureObjChunk.h"         // Textures Class
#include "OSGCamera.h"                  // Camera Class

#include "OSGFishEyeProjectorDataBase.h"
#include "OSGFishEyeProjectorData.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FishEyeProjectorData
    Data use for rendering by the HDR stage
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FrameBufferObject * FishEyeProjectorDataBase::_sfRenderTarget
    
*/

/*! \var TextureObjChunk * FishEyeProjectorDataBase::_mfTextures
    
*/

/*! \var UInt32          FishEyeProjectorDataBase::_sfTextureRes
    
*/

/*! \var GLenum          FishEyeProjectorDataBase::_sfTextureFormat
    
*/

/*! \var Camera *        FishEyeProjectorDataBase::_sfCamera
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FishEyeProjectorData *>::_type("FishEyeProjectorDataPtr", "StageDataPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FishEyeProjectorData *)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FishEyeProjectorDataBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecFrameBufferObjectPtr::Description(
        SFUnrecFrameBufferObjectPtr::getClassType(),
        "renderTarget",
        "",
        RenderTargetFieldId, RenderTargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FishEyeProjectorData::editHandleRenderTarget),
        static_cast<FieldGetMethodSig >(&FishEyeProjectorData::getHandleRenderTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecTextureObjChunkPtr::Description(
        MFUnrecTextureObjChunkPtr::getClassType(),
        "textures",
        "",
        TexturesFieldId, TexturesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FishEyeProjectorData::editHandleTextures),
        static_cast<FieldGetMethodSig >(&FishEyeProjectorData::getHandleTextures));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "textureRes",
        "",
        TextureResFieldId, TextureResFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FishEyeProjectorData::editHandleTextureRes),
        static_cast<FieldGetMethodSig >(&FishEyeProjectorData::getHandleTextureRes));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "textureFormat",
        "",
        TextureFormatFieldId, TextureFormatFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FishEyeProjectorData::editHandleTextureFormat),
        static_cast<FieldGetMethodSig >(&FishEyeProjectorData::getHandleTextureFormat));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecCameraPtr::Description(
        SFUnrecCameraPtr::getClassType(),
        "camera",
        "",
        CameraFieldId, CameraFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FishEyeProjectorData::editHandleCamera),
        static_cast<FieldGetMethodSig >(&FishEyeProjectorData::getHandleCamera));

    oType.addInitialDesc(pDesc);
}


FishEyeProjectorDataBase::TypeObject FishEyeProjectorDataBase::_type(
    FishEyeProjectorDataBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FishEyeProjectorDataBase::createEmptyLocal),
    FishEyeProjectorData::initMethod,
    FishEyeProjectorData::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FishEyeProjectorData::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"FishEyeProjectorData\"\n"
    "    parent=\"StageData\"\n"
    "    library=\"EffectGroups\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    \n"
    ">\n"
    "Data use for rendering by the HDR stage\n"
    "\t<Field\n"
    "\t\tname=\"renderTarget\"\n"
    "\t\ttype=\"FrameBufferObject\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"pointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"textures\"\n"
    "\t\ttype=\"TextureObjChunk\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"pointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "    <Field\n"
    "\t\tname=\"textureRes\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"512\"\n"
    "\t\taccess=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "\t<Field\n"
    "\t\tname=\"textureFormat\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_RGB\"\n"
    "\t\tdefaultHeader=\"&quot;OSGGLEXT.h&quot;\"\n"
    "\t\taccess=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "\t<Field\n"
    "\t\tname=\"camera\"\n"
    "\t\ttype=\"CameraPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "Data use for rendering by the HDR stage\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FishEyeProjectorDataBase::getType(void)
{
    return _type;
}

const FieldContainerType &FishEyeProjectorDataBase::getType(void) const
{
    return _type;
}

UInt32 FishEyeProjectorDataBase::getContainerSize(void) const
{
    return sizeof(FishEyeProjectorData);
}

/*------------------------- decorator get ------------------------------*/


//! Get the FishEyeProjectorData::_sfRenderTarget field.
const SFUnrecFrameBufferObjectPtr *FishEyeProjectorDataBase::getSFRenderTarget(void) const
{
    return &_sfRenderTarget;
}

SFUnrecFrameBufferObjectPtr *FishEyeProjectorDataBase::editSFRenderTarget   (void)
{
    editSField(RenderTargetFieldMask);

    return &_sfRenderTarget;
}

//! Get the FishEyeProjectorData::_mfTextures field.
const MFUnrecTextureObjChunkPtr *FishEyeProjectorDataBase::getMFTextures(void) const
{
    return &_mfTextures;
}

MFUnrecTextureObjChunkPtr *FishEyeProjectorDataBase::editMFTextures       (void)
{
    editMField(TexturesFieldMask, _mfTextures);

    return &_mfTextures;
}

SFUInt32 *FishEyeProjectorDataBase::editSFTextureRes(void)
{
    editSField(TextureResFieldMask);

    return &_sfTextureRes;
}

const SFUInt32 *FishEyeProjectorDataBase::getSFTextureRes(void) const
{
    return &_sfTextureRes;
}


SFGLenum *FishEyeProjectorDataBase::editSFTextureFormat(void)
{
    editSField(TextureFormatFieldMask);

    return &_sfTextureFormat;
}

const SFGLenum *FishEyeProjectorDataBase::getSFTextureFormat(void) const
{
    return &_sfTextureFormat;
}


//! Get the FishEyeProjectorData::_sfCamera field.
const SFUnrecCameraPtr *FishEyeProjectorDataBase::getSFCamera(void) const
{
    return &_sfCamera;
}

SFUnrecCameraPtr    *FishEyeProjectorDataBase::editSFCamera         (void)
{
    editSField(CameraFieldMask);

    return &_sfCamera;
}



void FishEyeProjectorDataBase::pushToTextures(TextureObjChunk * const value)
{
    editMField(TexturesFieldMask, _mfTextures);

    _mfTextures.push_back(value);
}

void FishEyeProjectorDataBase::assignTextures (const MFUnrecTextureObjChunkPtr &value)
{
    MFUnrecTextureObjChunkPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecTextureObjChunkPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<FishEyeProjectorData *>(this)->clearTextures();

    while(elemIt != elemEnd)
    {
        this->pushToTextures(*elemIt);

        ++elemIt;
    }
}

void FishEyeProjectorDataBase::removeFromTextures(UInt32 uiIndex)
{
    if(uiIndex < _mfTextures.size())
    {
        editMField(TexturesFieldMask, _mfTextures);

        _mfTextures.erase(uiIndex);
    }
}

void FishEyeProjectorDataBase::removeObjFromTextures(TextureObjChunk * const value)
{
    Int32 iElemIdx = _mfTextures.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(TexturesFieldMask, _mfTextures);

        _mfTextures.erase(iElemIdx);
    }
}
void FishEyeProjectorDataBase::clearTextures(void)
{
    editMField(TexturesFieldMask, _mfTextures);


    _mfTextures.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 FishEyeProjectorDataBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        returnValue += _sfRenderTarget.getBinSize();
    }
    if(FieldBits::NoField != (TexturesFieldMask & whichField))
    {
        returnValue += _mfTextures.getBinSize();
    }
    if(FieldBits::NoField != (TextureResFieldMask & whichField))
    {
        returnValue += _sfTextureRes.getBinSize();
    }
    if(FieldBits::NoField != (TextureFormatFieldMask & whichField))
    {
        returnValue += _sfTextureFormat.getBinSize();
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        returnValue += _sfCamera.getBinSize();
    }

    return returnValue;
}

void FishEyeProjectorDataBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexturesFieldMask & whichField))
    {
        _mfTextures.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureResFieldMask & whichField))
    {
        _sfTextureRes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureFormatFieldMask & whichField))
    {
        _sfTextureFormat.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyToBin(pMem);
    }
}

void FishEyeProjectorDataBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        editSField(RenderTargetFieldMask);
        _sfRenderTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexturesFieldMask & whichField))
    {
        editMField(TexturesFieldMask, _mfTextures);
        _mfTextures.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureResFieldMask & whichField))
    {
        editSField(TextureResFieldMask);
        _sfTextureRes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureFormatFieldMask & whichField))
    {
        editSField(TextureFormatFieldMask);
        _sfTextureFormat.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        editSField(CameraFieldMask);
        _sfCamera.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FishEyeProjectorDataTransitPtr FishEyeProjectorDataBase::createLocal(BitVector bFlags)
{
    FishEyeProjectorDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FishEyeProjectorData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FishEyeProjectorDataTransitPtr FishEyeProjectorDataBase::createDependent(BitVector bFlags)
{
    FishEyeProjectorDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FishEyeProjectorData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FishEyeProjectorDataTransitPtr FishEyeProjectorDataBase::create(void)
{
    FishEyeProjectorDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FishEyeProjectorData>(tmpPtr);
    }

    return fc;
}

FishEyeProjectorData *FishEyeProjectorDataBase::createEmptyLocal(BitVector bFlags)
{
    FishEyeProjectorData *returnValue;

    newPtr<FishEyeProjectorData>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FishEyeProjectorData *FishEyeProjectorDataBase::createEmpty(void)
{
    FishEyeProjectorData *returnValue;

    newPtr<FishEyeProjectorData>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FishEyeProjectorDataBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FishEyeProjectorData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FishEyeProjectorData *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FishEyeProjectorDataBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FishEyeProjectorData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FishEyeProjectorData *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FishEyeProjectorDataBase::shallowCopy(void) const
{
    FishEyeProjectorData *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FishEyeProjectorData *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FishEyeProjectorDataBase::FishEyeProjectorDataBase(void) :
    Inherited(),
    _sfRenderTarget           (NULL),
    _mfTextures               (),
    _sfTextureRes             (UInt32(512)),
    _sfTextureFormat          (GLenum(GL_RGB)),
    _sfCamera                 (NULL)
{
}

FishEyeProjectorDataBase::FishEyeProjectorDataBase(const FishEyeProjectorDataBase &source) :
    Inherited(source),
    _sfRenderTarget           (NULL),
    _mfTextures               (),
    _sfTextureRes             (source._sfTextureRes             ),
    _sfTextureFormat          (source._sfTextureFormat          ),
    _sfCamera                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

FishEyeProjectorDataBase::~FishEyeProjectorDataBase(void)
{
}

void FishEyeProjectorDataBase::onCreate(const FishEyeProjectorData *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        FishEyeProjectorData *pThis = static_cast<FishEyeProjectorData *>(this);

        pThis->setRenderTarget(source->getRenderTarget());

        MFUnrecTextureObjChunkPtr::const_iterator TexturesIt  =
            source->_mfTextures.begin();
        MFUnrecTextureObjChunkPtr::const_iterator TexturesEnd =
            source->_mfTextures.end  ();

        while(TexturesIt != TexturesEnd)
        {
            pThis->pushToTextures(*TexturesIt);

            ++TexturesIt;
        }

        pThis->setCamera(source->getCamera());
    }
}

GetFieldHandlePtr FishEyeProjectorDataBase::getHandleRenderTarget    (void) const
{
    SFUnrecFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::GetHandle(
             &_sfRenderTarget,
             this->getType().getFieldDesc(RenderTargetFieldId),
             const_cast<FishEyeProjectorDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FishEyeProjectorDataBase::editHandleRenderTarget   (void)
{
    SFUnrecFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::EditHandle(
             &_sfRenderTarget,
             this->getType().getFieldDesc(RenderTargetFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&FishEyeProjectorData::setRenderTarget,
                    static_cast<FishEyeProjectorData *>(this), _1));

    editSField(RenderTargetFieldMask);

    return returnValue;
}

GetFieldHandlePtr FishEyeProjectorDataBase::getHandleTextures        (void) const
{
    MFUnrecTextureObjChunkPtr::GetHandlePtr returnValue(
        new  MFUnrecTextureObjChunkPtr::GetHandle(
             &_mfTextures,
             this->getType().getFieldDesc(TexturesFieldId),
             const_cast<FishEyeProjectorDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FishEyeProjectorDataBase::editHandleTextures       (void)
{
    MFUnrecTextureObjChunkPtr::EditHandlePtr returnValue(
        new  MFUnrecTextureObjChunkPtr::EditHandle(
             &_mfTextures,
             this->getType().getFieldDesc(TexturesFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&FishEyeProjectorData::pushToTextures,
                    static_cast<FishEyeProjectorData *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&FishEyeProjectorData::removeFromTextures,
                    static_cast<FishEyeProjectorData *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&FishEyeProjectorData::removeObjFromTextures,
                    static_cast<FishEyeProjectorData *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&FishEyeProjectorData::clearTextures,
                    static_cast<FishEyeProjectorData *>(this)));

    editMField(TexturesFieldMask, _mfTextures);

    return returnValue;
}

GetFieldHandlePtr FishEyeProjectorDataBase::getHandleTextureRes      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfTextureRes,
             this->getType().getFieldDesc(TextureResFieldId),
             const_cast<FishEyeProjectorDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FishEyeProjectorDataBase::editHandleTextureRes     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfTextureRes,
             this->getType().getFieldDesc(TextureResFieldId),
             this));


    editSField(TextureResFieldMask);

    return returnValue;
}

GetFieldHandlePtr FishEyeProjectorDataBase::getHandleTextureFormat   (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfTextureFormat,
             this->getType().getFieldDesc(TextureFormatFieldId),
             const_cast<FishEyeProjectorDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FishEyeProjectorDataBase::editHandleTextureFormat  (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfTextureFormat,
             this->getType().getFieldDesc(TextureFormatFieldId),
             this));


    editSField(TextureFormatFieldMask);

    return returnValue;
}

GetFieldHandlePtr FishEyeProjectorDataBase::getHandleCamera          (void) const
{
    SFUnrecCameraPtr::GetHandlePtr returnValue(
        new  SFUnrecCameraPtr::GetHandle(
             &_sfCamera,
             this->getType().getFieldDesc(CameraFieldId),
             const_cast<FishEyeProjectorDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FishEyeProjectorDataBase::editHandleCamera         (void)
{
    SFUnrecCameraPtr::EditHandlePtr returnValue(
        new  SFUnrecCameraPtr::EditHandle(
             &_sfCamera,
             this->getType().getFieldDesc(CameraFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&FishEyeProjectorData::setCamera,
                    static_cast<FishEyeProjectorData *>(this), _1));

    editSField(CameraFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FishEyeProjectorDataBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FishEyeProjectorData *pThis = static_cast<FishEyeProjectorData *>(this);

    pThis->execSync(static_cast<FishEyeProjectorData *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FishEyeProjectorDataBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FishEyeProjectorData *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FishEyeProjectorData *>(pRefAspect),
                  dynamic_cast<const FishEyeProjectorData *>(this));

    return returnValue;
}
#endif

void FishEyeProjectorDataBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<FishEyeProjectorData *>(this)->setRenderTarget(NULL);

    static_cast<FishEyeProjectorData *>(this)->clearTextures();

    static_cast<FishEyeProjectorData *>(this)->setCamera(NULL);


}


OSG_END_NAMESPACE
