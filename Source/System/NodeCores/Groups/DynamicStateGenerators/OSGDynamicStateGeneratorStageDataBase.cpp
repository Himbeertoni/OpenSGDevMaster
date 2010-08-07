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
 **     class DynamicStateGeneratorStageData!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGFrameBufferObject.h"       // RenderTarget Class
#include "OSGStateChunk.h"              // Chunks Class

#include "OSGDynamicStateGeneratorStageDataBase.h"
#include "OSGDynamicStateGeneratorStageData.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DynamicStateGeneratorStageData
    Data use for rendering by the cubemap generator stage
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FrameBufferObject * DynamicStateGeneratorStageDataBase::_sfRenderTarget
    The FBO to target for rendering this subtree.
*/

/*! \var StateChunk *    DynamicStateGeneratorStageDataBase::_mfChunks
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DynamicStateGeneratorStageData *>::_type("DynamicStateGeneratorStageDataPtr", "StageDataPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DynamicStateGeneratorStageData *)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DynamicStateGeneratorStageDataBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecFrameBufferObjectPtr::Description(
        SFUnrecFrameBufferObjectPtr::getClassType(),
        "renderTarget",
        "The FBO to target for rendering this subtree.\n",
        RenderTargetFieldId, RenderTargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DynamicStateGeneratorStageData::editHandleRenderTarget),
        static_cast<FieldGetMethodSig >(&DynamicStateGeneratorStageData::getHandleRenderTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecStateChunkPtr::Description(
        MFUnrecStateChunkPtr::getClassType(),
        "chunks",
        "",
        ChunksFieldId, ChunksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FCustomAccess),
        static_cast<FieldEditMethodSig>(&DynamicStateGeneratorStageData::editHandleChunks),
        static_cast<FieldGetMethodSig >(&DynamicStateGeneratorStageData::getHandleChunks));

    oType.addInitialDesc(pDesc);
}


DynamicStateGeneratorStageDataBase::TypeObject DynamicStateGeneratorStageDataBase::_type(
    DynamicStateGeneratorStageDataBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DynamicStateGeneratorStageDataBase::createEmptyLocal),
    DynamicStateGeneratorStageData::initMethod,
    DynamicStateGeneratorStageData::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DynamicStateGeneratorStageData::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"DynamicStateGeneratorStageData\"\n"
    "    parent=\"StageData\"\n"
    "    library=\"Group\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    ">\n"
    "Data use for rendering by the cubemap generator stage\n"
    "    <Field\n"
    "        name=\"renderTarget\"\n"
    "        type=\"FrameBufferObjectPtr\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    The FBO to target for rendering this subtree.\n"
    "    </Field>\n"
    "\t<Field\n"
    "\t\tname=\"chunks\"\n"
    "\t\ttype=\"StateChunkPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "        access=\"protected\"\n"
    "        ptrFieldAccess = \"custom\"\n"
    "    >\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "Data use for rendering by the cubemap generator stage\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DynamicStateGeneratorStageDataBase::getType(void)
{
    return _type;
}

const FieldContainerType &DynamicStateGeneratorStageDataBase::getType(void) const
{
    return _type;
}

UInt32 DynamicStateGeneratorStageDataBase::getContainerSize(void) const
{
    return sizeof(DynamicStateGeneratorStageData);
}

/*------------------------- decorator get ------------------------------*/


//! Get the DynamicStateGeneratorStageData::_sfRenderTarget field.
const SFUnrecFrameBufferObjectPtr *DynamicStateGeneratorStageDataBase::getSFRenderTarget(void) const
{
    return &_sfRenderTarget;
}

SFUnrecFrameBufferObjectPtr *DynamicStateGeneratorStageDataBase::editSFRenderTarget   (void)
{
    editSField(RenderTargetFieldMask);

    return &_sfRenderTarget;
}

//! Get the DynamicStateGeneratorStageData::_mfChunks field.
const MFUnrecStateChunkPtr *DynamicStateGeneratorStageDataBase::getMFChunks(void) const
{
    return &_mfChunks;
}






/*------------------------------ access -----------------------------------*/

UInt32 DynamicStateGeneratorStageDataBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        returnValue += _sfRenderTarget.getBinSize();
    }
    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        returnValue += _mfChunks.getBinSize();
    }

    return returnValue;
}

void DynamicStateGeneratorStageDataBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyToBin(pMem);
    }
}

void DynamicStateGeneratorStageDataBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        editSField(RenderTargetFieldMask);
        _sfRenderTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        editMField(ChunksFieldMask, _mfChunks);
        _mfChunks.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DynamicStateGeneratorStageDataTransitPtr DynamicStateGeneratorStageDataBase::createLocal(BitVector bFlags)
{
    DynamicStateGeneratorStageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DynamicStateGeneratorStageData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DynamicStateGeneratorStageDataTransitPtr DynamicStateGeneratorStageDataBase::createDependent(BitVector bFlags)
{
    DynamicStateGeneratorStageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DynamicStateGeneratorStageData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DynamicStateGeneratorStageDataTransitPtr DynamicStateGeneratorStageDataBase::create(void)
{
    return createLocal();
}

DynamicStateGeneratorStageData *DynamicStateGeneratorStageDataBase::createEmptyLocal(BitVector bFlags)
{
    DynamicStateGeneratorStageData *returnValue;

    newPtr<DynamicStateGeneratorStageData>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DynamicStateGeneratorStageData *DynamicStateGeneratorStageDataBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr DynamicStateGeneratorStageDataBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DynamicStateGeneratorStageData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DynamicStateGeneratorStageData *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DynamicStateGeneratorStageDataBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DynamicStateGeneratorStageData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DynamicStateGeneratorStageData *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DynamicStateGeneratorStageDataBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

DynamicStateGeneratorStageDataBase::DynamicStateGeneratorStageDataBase(void) :
    Inherited(),
    _sfRenderTarget           (NULL),
    _mfChunks                 ()
{
}

DynamicStateGeneratorStageDataBase::DynamicStateGeneratorStageDataBase(const DynamicStateGeneratorStageDataBase &source) :
    Inherited(source),
    _sfRenderTarget           (NULL),
    _mfChunks                 ()
{
}


/*-------------------------- destructors ----------------------------------*/

DynamicStateGeneratorStageDataBase::~DynamicStateGeneratorStageDataBase(void)
{
}

void DynamicStateGeneratorStageDataBase::onCreate(const DynamicStateGeneratorStageData *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        DynamicStateGeneratorStageData *pThis = static_cast<DynamicStateGeneratorStageData *>(this);

        pThis->setRenderTarget(source->getRenderTarget());

        MFUnrecStateChunkPtr::const_iterator ChunksIt  =
            source->_mfChunks.begin();
        MFUnrecStateChunkPtr::const_iterator ChunksEnd =
            source->_mfChunks.end  ();

        while(ChunksIt != ChunksEnd)
        {
            pThis->pushToChunks(*ChunksIt);

            ++ChunksIt;
        }
    }
}

GetFieldHandlePtr DynamicStateGeneratorStageDataBase::getHandleRenderTarget    (void) const
{
    SFUnrecFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::GetHandle(
             &_sfRenderTarget,
             this->getType().getFieldDesc(RenderTargetFieldId),
             const_cast<DynamicStateGeneratorStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DynamicStateGeneratorStageDataBase::editHandleRenderTarget   (void)
{
    SFUnrecFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::EditHandle(
             &_sfRenderTarget,
             this->getType().getFieldDesc(RenderTargetFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DynamicStateGeneratorStageData::setRenderTarget,
                    static_cast<DynamicStateGeneratorStageData *>(this), _1));

    editSField(RenderTargetFieldMask);

    return returnValue;
}

GetFieldHandlePtr DynamicStateGeneratorStageDataBase::getHandleChunks          (void) const
{
    MFUnrecStateChunkPtr::GetHandlePtr returnValue(
        new  MFUnrecStateChunkPtr::GetHandle(
             &_mfChunks,
             this->getType().getFieldDesc(ChunksFieldId),
             const_cast<DynamicStateGeneratorStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DynamicStateGeneratorStageDataBase::editHandleChunks         (void)
{
    MFUnrecStateChunkPtr::EditHandlePtr returnValue(
        new  MFUnrecStateChunkPtr::EditHandle(
             &_mfChunks,
             this->getType().getFieldDesc(ChunksFieldId),
             this));


    editMField(ChunksFieldMask, _mfChunks);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DynamicStateGeneratorStageDataBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DynamicStateGeneratorStageData *pThis = static_cast<DynamicStateGeneratorStageData *>(this);

    pThis->execSync(static_cast<DynamicStateGeneratorStageData *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DynamicStateGeneratorStageDataBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DynamicStateGeneratorStageData *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DynamicStateGeneratorStageData *>(pRefAspect),
                  dynamic_cast<const DynamicStateGeneratorStageData *>(this));

    return returnValue;
}
#endif

void DynamicStateGeneratorStageDataBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<DynamicStateGeneratorStageData *>(this)->setRenderTarget(NULL);

    static_cast<DynamicStateGeneratorStageData *>(this)->clearChunks();


}


OSG_END_NAMESPACE
