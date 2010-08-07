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
 **     class MultiPassMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGPrimeMaterial.h"           // Materials Class

#include "OSGMultiPassMaterialBase.h"
#include "OSGMultiPassMaterial.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MultiPassMaterial
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var PrimeMaterial * MultiPassMaterialBase::_mfMaterials
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MultiPassMaterial *>::_type("MultiPassMaterialPtr", "PrimeMaterialPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MultiPassMaterial *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MultiPassMaterial *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MultiPassMaterial *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MultiPassMaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecPrimeMaterialPtr::Description(
        MFUnrecPrimeMaterialPtr::getClassType(),
        "materials",
        "",
        MaterialsFieldId, MaterialsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MultiPassMaterial::editHandleMaterials),
        static_cast<FieldGetMethodSig >(&MultiPassMaterial::getHandleMaterials));

    oType.addInitialDesc(pDesc);
}


MultiPassMaterialBase::TypeObject MultiPassMaterialBase::_type(
    MultiPassMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&MultiPassMaterialBase::createEmptyLocal),
    MultiPassMaterial::initMethod,
    MultiPassMaterial::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&MultiPassMaterial::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MultiPassMaterial\"\n"
    "\tparent=\"PrimeMaterial\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"materials\"\n"
    "\t\ttype=\"PrimeMaterialPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        pushToFieldAs=\"addMaterial\"\n"
    "        assignMFieldAs=\"assignMaterialsFrom\"\n"
    "        insertIntoMFieldAs=\"insertMaterial\"\n"
    "        replaceInMFieldIndexAs=\"replaceMaterial\"\n"
    "        replaceInMFieldObjectAs=\"replaceMaterialByObj\"\n"
    "        removeFromMFieldIndexAs=\"subMaterial\"\n"
    "        removeFromMFieldObjectAs=\"subMaterialByObj\"\n"
    "        clearFieldAs=\"clearMaterials\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MultiPassMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &MultiPassMaterialBase::getType(void) const
{
    return _type;
}

UInt32 MultiPassMaterialBase::getContainerSize(void) const
{
    return sizeof(MultiPassMaterial);
}

/*------------------------- decorator get ------------------------------*/


//! Get the MultiPassMaterial::_mfMaterials field.
const MFUnrecPrimeMaterialPtr *MultiPassMaterialBase::getMFMaterials(void) const
{
    return &_mfMaterials;
}

MFUnrecPrimeMaterialPtr *MultiPassMaterialBase::editMFMaterials      (void)
{
    editMField(MaterialsFieldMask, _mfMaterials);

    return &_mfMaterials;
}



void MultiPassMaterialBase::addMaterial(PrimeMaterial * const value)
{
    editMField(MaterialsFieldMask, _mfMaterials);

    _mfMaterials.push_back(value);
}

void MultiPassMaterialBase::assignMaterialsFrom(const MFUnrecPrimeMaterialPtr &value)
{
    MFUnrecPrimeMaterialPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecPrimeMaterialPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<MultiPassMaterial *>(this)->clearMaterials();

    while(elemIt != elemEnd)
    {
        this->addMaterial(*elemIt);

        ++elemIt;
    }
}

void MultiPassMaterialBase::subMaterial(UInt32 uiIndex)
{
    if(uiIndex < _mfMaterials.size())
    {
        editMField(MaterialsFieldMask, _mfMaterials);

        _mfMaterials.erase(uiIndex);
    }
}

void MultiPassMaterialBase::subMaterialByObj(PrimeMaterial * const value)
{
    Int32 iElemIdx = _mfMaterials.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(MaterialsFieldMask, _mfMaterials);

        _mfMaterials.erase(iElemIdx);
    }
}
void MultiPassMaterialBase::clearMaterials(void)
{
    editMField(MaterialsFieldMask, _mfMaterials);


    _mfMaterials.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 MultiPassMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        returnValue += _mfMaterials.getBinSize();
    }

    return returnValue;
}

void MultiPassMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        _mfMaterials.copyToBin(pMem);
    }
}

void MultiPassMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        editMField(MaterialsFieldMask, _mfMaterials);
        _mfMaterials.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MultiPassMaterialTransitPtr MultiPassMaterialBase::createLocal(BitVector bFlags)
{
    MultiPassMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MultiPassMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MultiPassMaterialTransitPtr MultiPassMaterialBase::createDependent(BitVector bFlags)
{
    MultiPassMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MultiPassMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MultiPassMaterialTransitPtr MultiPassMaterialBase::create(void)
{
    MultiPassMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MultiPassMaterial>(tmpPtr);
    }

    return fc;
}

MultiPassMaterial *MultiPassMaterialBase::createEmptyLocal(BitVector bFlags)
{
    MultiPassMaterial *returnValue;

    newPtr<MultiPassMaterial>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MultiPassMaterial *MultiPassMaterialBase::createEmpty(void)
{
    MultiPassMaterial *returnValue;

    newPtr<MultiPassMaterial>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MultiPassMaterialBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MultiPassMaterial *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MultiPassMaterial *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MultiPassMaterialBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MultiPassMaterial *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MultiPassMaterial *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MultiPassMaterialBase::shallowCopy(void) const
{
    MultiPassMaterial *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MultiPassMaterial *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

MultiPassMaterialBase::MultiPassMaterialBase(void) :
    Inherited(),
    _mfMaterials              ()
{
}

MultiPassMaterialBase::MultiPassMaterialBase(const MultiPassMaterialBase &source) :
    Inherited(source),
    _mfMaterials              ()
{
}


/*-------------------------- destructors ----------------------------------*/

MultiPassMaterialBase::~MultiPassMaterialBase(void)
{
}

void MultiPassMaterialBase::onCreate(const MultiPassMaterial *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        MultiPassMaterial *pThis = static_cast<MultiPassMaterial *>(this);

        MFUnrecPrimeMaterialPtr::const_iterator MaterialsIt  =
            source->_mfMaterials.begin();
        MFUnrecPrimeMaterialPtr::const_iterator MaterialsEnd =
            source->_mfMaterials.end  ();

        while(MaterialsIt != MaterialsEnd)
        {
            pThis->addMaterial(*MaterialsIt);

            ++MaterialsIt;
        }
    }
}

GetFieldHandlePtr MultiPassMaterialBase::getHandleMaterials       (void) const
{
    MFUnrecPrimeMaterialPtr::GetHandlePtr returnValue(
        new  MFUnrecPrimeMaterialPtr::GetHandle(
             &_mfMaterials,
             this->getType().getFieldDesc(MaterialsFieldId),
             const_cast<MultiPassMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MultiPassMaterialBase::editHandleMaterials      (void)
{
    MFUnrecPrimeMaterialPtr::EditHandlePtr returnValue(
        new  MFUnrecPrimeMaterialPtr::EditHandle(
             &_mfMaterials,
             this->getType().getFieldDesc(MaterialsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&MultiPassMaterial::addMaterial,
                    static_cast<MultiPassMaterial *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&MultiPassMaterial::subMaterial,
                    static_cast<MultiPassMaterial *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&MultiPassMaterial::subMaterialByObj,
                    static_cast<MultiPassMaterial *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&MultiPassMaterial::clearMaterials,
                    static_cast<MultiPassMaterial *>(this)));

    editMField(MaterialsFieldMask, _mfMaterials);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MultiPassMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MultiPassMaterial *pThis = static_cast<MultiPassMaterial *>(this);

    pThis->execSync(static_cast<MultiPassMaterial *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MultiPassMaterialBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MultiPassMaterial *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MultiPassMaterial *>(pRefAspect),
                  dynamic_cast<const MultiPassMaterial *>(this));

    return returnValue;
}
#endif

void MultiPassMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<MultiPassMaterial *>(this)->clearMaterials();


}


OSG_END_NAMESPACE
