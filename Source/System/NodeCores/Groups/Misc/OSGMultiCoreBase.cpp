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
 **     class MultiCore!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMULTICOREINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNodeCore.h> // Cores Class

#include "OSGMultiCoreBase.h"
#include "OSGMultiCore.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MultiCore
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var NodeCorePtr     MultiCoreBase::_mfCores
    
*/


void MultiCoreBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFNodeCorePtr::Description(
        MFNodeCorePtr::getClassType(),
        "cores",
        "",
        CoresFieldId, CoresFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&MultiCoreBase::editHandleCores),
        static_cast<FieldGetMethodSig >(&MultiCoreBase::getHandleCores));

    oType.addInitialDesc(pDesc);
}


MultiCoreBase::TypeObject MultiCoreBase::_type(
    MultiCoreBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &MultiCoreBase::createEmpty,
    MultiCore::initMethod,
    (InitalInsertDescFunc) &MultiCoreBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MultiCore\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"cores\"\n"
    "\t\ttype=\"NodeCorePtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "        linkMParent=\"true\"\n"
    "        access=\"public\"\n"
    "\n"
    "        pushToFieldAs=\"addCore\"\n"
    "        assignMFieldAs=\"assignCoresFrom\"\n"
    "        insertIntoMFieldAs=\"insertCore\"\n"
    "        replaceInMFieldIndexAs=\"replaceCore\"\n"
    "        replaceInMFieldObjectAs=\"replaceCore\"\n"
    "        removeFromMFieldIndexAs=\"subCore\"\n"
    "        removeFromMFieldObjectAs=\"subCore\"\n"
    "        clearFieldAs=\"clearCores\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MultiCoreBase::getType(void)
{
    return _type;
}

const FieldContainerType &MultiCoreBase::getType(void) const
{
    return _type;
}

UInt32 MultiCoreBase::getContainerSize(void) const
{
    return sizeof(MultiCore);
}

/*------------------------- decorator get ------------------------------*/


//! Get the MultiCore::_mfCores field.
const MFNodeCorePtr *MultiCoreBase::getMFCores(void) const
{
    return &_mfCores;
}



void MultiCoreBase::addCore(NodeCorePtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(CoresFieldMask, _mfCores);

    addRef(value);

    _mfCores.push_back(value);

    value->addParent(this, CoresFieldMask);
}

void MultiCoreBase::assignCoresFrom(const MFNodeCorePtr     &value)
{
    MFNodeCorePtr    ::const_iterator elemIt  =
        value.begin();
    MFNodeCorePtr    ::const_iterator elemEnd =
        value.end  ();

    static_cast<MultiCore *>(this)->clearCores();

    while(elemIt != elemEnd)
    {
        this->addCore(*elemIt);

        ++elemIt;
    }
}

void MultiCoreBase::insertCore(UInt32                uiIndex,
                                                   NodeCorePtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(CoresFieldMask, _mfCores);

    MFNodeCorePtr::iterator fieldIt = _mfCores.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfCores.insert(fieldIt, value);

    value->addParent(this, CoresFieldMask);
}

void MultiCoreBase::replaceCore(UInt32                uiIndex,
                                                       NodeCorePtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfCores.size())
        return;

    editMField(CoresFieldMask, _mfCores);

    addRef(value);

    if(_mfCores[uiIndex] != NullFC)
    {
        _mfCores[uiIndex]->subParent(this);
    }

    subRef(_mfCores[uiIndex]);

    _mfCores[uiIndex] = value;

    value->addParent(this, CoresFieldMask);
}

void MultiCoreBase::replaceCore(NodeCorePtrConstArg pOldElem,
                                                        NodeCorePtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfCores.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(CoresFieldMask, _mfCores);

        MFNodeCorePtr::iterator fieldIt = _mfCores.begin();

        fieldIt += elemIdx;


        if(pOldElem != NullFC)
        {
            pOldElem->subParent(this);
        }

        pNewElem->addParent(this, CoresFieldMask);

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void MultiCoreBase::subCore(UInt32 uiIndex)
{
    if(uiIndex < _mfCores.size())
    {
        editMField(CoresFieldMask, _mfCores);

        MFNodeCorePtr::iterator fieldIt = _mfCores.begin();

        fieldIt += uiIndex;


        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        subRef(*fieldIt);

        _mfCores.erase(fieldIt);
    }
}

void MultiCoreBase::subCore(NodeCorePtrConstArg value)
{
    Int32 iElemIdx = _mfCores.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(CoresFieldMask, _mfCores);

        MFNodeCorePtr::iterator fieldIt = _mfCores.begin();

        fieldIt += iElemIdx;


        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        subRef(*fieldIt);

        _mfCores.erase(fieldIt);
    }
}
void MultiCoreBase::clearCores(void)
{
    editMField(CoresFieldMask, _mfCores);

    MFNodeCorePtr::iterator       fieldIt  = _mfCores.begin();
    MFNodeCorePtr::const_iterator fieldEnd = _mfCores.end  ();

    while(fieldIt != fieldEnd)
    {
        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfCores.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 MultiCoreBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CoresFieldMask & whichField))
    {
        returnValue += _mfCores.getBinSize();
    }

    return returnValue;
}

void MultiCoreBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CoresFieldMask & whichField))
    {
        _mfCores.copyToBin(pMem);
    }
}

void MultiCoreBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CoresFieldMask & whichField))
    {
        _mfCores.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MultiCorePtr MultiCoreBase::create(void)
{
    MultiCorePtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<MultiCore::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
MultiCorePtr MultiCoreBase::createEmpty(void)
{
    MultiCorePtr returnValue;

    newPtr<MultiCore>(returnValue);

    return returnValue;
}

FieldContainerPtr MultiCoreBase::shallowCopy(void) const
{
    MultiCorePtr returnValue;

    newPtr(returnValue, dynamic_cast<const MultiCore *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

MultiCoreBase::MultiCoreBase(void) :
    Inherited(),
    _mfCores                  ()
{
}

MultiCoreBase::MultiCoreBase(const MultiCoreBase &source) :
    Inherited(source),
    _mfCores                  ()
{
}


/*-------------------------- destructors ----------------------------------*/

MultiCoreBase::~MultiCoreBase(void)
{
}

void MultiCoreBase::onCreate(const MultiCore *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFNodeCorePtr::const_iterator CoresIt  =
            source->_mfCores.begin();
        MFNodeCorePtr::const_iterator CoresEnd =
            source->_mfCores.end  ();

        while(CoresIt != CoresEnd)
        {
            this->addCore(*CoresIt);

            ++CoresIt;
        }
    }
}

GetFieldHandlePtr MultiCoreBase::getHandleCores           (void) const
{
    MFNodeCorePtr::GetHandlePtr returnValue(
        new  MFNodeCorePtr::GetHandle(
             &_mfCores, 
             this->getType().getFieldDesc(CoresFieldId)));

    return returnValue;
}

EditFieldHandlePtr MultiCoreBase::editHandleCores          (void)
{
    MFNodeCorePtr::EditHandlePtr returnValue(
        new  MFNodeCorePtr::EditHandle(
             &_mfCores, 
             this->getType().getFieldDesc(CoresFieldId)));

    returnValue->setAddMethod(boost::bind(&MultiCore::addCore, 
                              static_cast<MultiCore *>(this), _1));

    editMField(CoresFieldMask, _mfCores);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MultiCoreBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<MultiCoreBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr MultiCoreBase::createAspectCopy(void) const
{
    MultiCorePtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MultiCore *>(this));

    return returnValue;
}
#endif

void MultiCoreBase::resolveLinks(void)
{
    Inherited::resolveLinks();


    static_cast<MultiCore *>(this)->clearCores();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MultiCorePtr>::_type("MultiCorePtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MultiCorePtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, MultiCorePtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, MultiCorePtr, MFFieldContainerPtr);

OSG_END_NAMESPACE