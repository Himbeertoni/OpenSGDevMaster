/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  Robert Goetz                                                  *
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
 **     class GenericEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGGenericEventDetailsBase.h"
#include "OSGGenericEventDetails.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GenericEventDetails
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var StringToUInt32Map GenericEventDetailsBase::_sfNumberMap
    
*/

/*! \var FieldContainerMap GenericEventDetailsBase::_sfContainerMap
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GenericEventDetails *>::_type("GenericEventDetailsPtr", "EventDetailsPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GenericEventDetails *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GenericEventDetails *,
                           0);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GenericEventDetailsBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFStringToUInt32Map::Description(
        SFStringToUInt32Map::getClassType(),
        "NumberMap",
        "",
        NumberMapFieldId, NumberMapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GenericEventDetails::editHandleNumberMap),
        static_cast<FieldGetMethodSig >(&GenericEventDetails::getHandleNumberMap));

    oType.addInitialDesc(pDesc);

    pDesc = new SFFieldContainerMap::Description(
        SFFieldContainerMap::getClassType(),
        "ContainerMap",
        "",
        ContainerMapFieldId, ContainerMapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GenericEventDetails::editHandleContainerMap),
        static_cast<FieldGetMethodSig >(&GenericEventDetails::getHandleContainerMap));

    oType.addInitialDesc(pDesc);
}


GenericEventDetailsBase::TypeObject GenericEventDetailsBase::_type(
    GenericEventDetailsBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&GenericEventDetailsBase::createEmptyLocal),
    GenericEventDetails::initMethod,
    GenericEventDetails::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GenericEventDetails::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GenericEventDetails\"\n"
    "\tparent=\"EventDetails\"\n"
    "    library=\"Base\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"true\"\n"
    "\tsupportUnregisteredCreate=\"true\"\n"
    "    authors=\"Robert Goetz                                                  \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"NumberMap\"\n"
    "\t\ttype=\"StringToUInt32Map\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ContainerMap\"\n"
    "\t\ttype=\"FieldContainerMap\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GenericEventDetailsBase::getType(void)
{
    return _type;
}

const FieldContainerType &GenericEventDetailsBase::getType(void) const
{
    return _type;
}

UInt32 GenericEventDetailsBase::getContainerSize(void) const
{
    return sizeof(GenericEventDetails);
}

/*------------------------- decorator get ------------------------------*/


SFStringToUInt32Map *GenericEventDetailsBase::editSFNumberMap(void)
{
    editSField(NumberMapFieldMask);

    return &_sfNumberMap;
}

const SFStringToUInt32Map *GenericEventDetailsBase::getSFNumberMap(void) const
{
    return &_sfNumberMap;
}


SFFieldContainerMap *GenericEventDetailsBase::editSFContainerMap(void)
{
    editSField(ContainerMapFieldMask);

    return &_sfContainerMap;
}

const SFFieldContainerMap *GenericEventDetailsBase::getSFContainerMap(void) const
{
    return &_sfContainerMap;
}






/*------------------------------ access -----------------------------------*/

UInt32 GenericEventDetailsBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NumberMapFieldMask & whichField))
    {
        returnValue += _sfNumberMap.getBinSize();
    }
    if(FieldBits::NoField != (ContainerMapFieldMask & whichField))
    {
        returnValue += _sfContainerMap.getBinSize();
    }

    return returnValue;
}

void GenericEventDetailsBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NumberMapFieldMask & whichField))
    {
        _sfNumberMap.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ContainerMapFieldMask & whichField))
    {
        _sfContainerMap.copyToBin(pMem);
    }
}

void GenericEventDetailsBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NumberMapFieldMask & whichField))
    {
        _sfNumberMap.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ContainerMapFieldMask & whichField))
    {
        _sfContainerMap.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GenericEventDetailsTransitPtr GenericEventDetailsBase::createLocal(BitVector bFlags)
{
    GenericEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GenericEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GenericEventDetailsTransitPtr GenericEventDetailsBase::createDependent(BitVector bFlags)
{
    GenericEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GenericEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GenericEventDetailsTransitPtr GenericEventDetailsBase::create(void)
{
    GenericEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GenericEventDetails>(tmpPtr);
    }

    return fc;
}

GenericEventDetails *GenericEventDetailsBase::createEmptyLocal(BitVector bFlags)
{
    GenericEventDetails *returnValue;

    newPtr<GenericEventDetails>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GenericEventDetails *GenericEventDetailsBase::createEmpty(void)
{
    GenericEventDetails *returnValue;

    newPtr<GenericEventDetails>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

GenericEventDetails *GenericEventDetailsBase::createUnregistered(void)
{
    GenericEventDetails *returnValue = new GenericEventDetails;

#ifdef OSG_MT_CPTR_ASPECT
    returnValue->setupAspectStore();
#endif
    //Do not register with the FieldContainer Factory

    returnValue->onCreate      (      );
    returnValue->onCreateAspect(returnValue);
    
    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();
    
    return returnValue;
}

FieldContainerTransitPtr GenericEventDetailsBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GenericEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GenericEventDetails *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GenericEventDetailsBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GenericEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GenericEventDetails *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GenericEventDetailsBase::shallowCopy(void) const
{
    GenericEventDetails *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GenericEventDetails *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

GenericEventDetailsBase::GenericEventDetailsBase(void) :
    Inherited(),
    _sfNumberMap              (),
    _sfContainerMap           ()
{
}

GenericEventDetailsBase::GenericEventDetailsBase(const GenericEventDetailsBase &source) :
    Inherited(source),
    _sfNumberMap              (source._sfNumberMap              ),
    _sfContainerMap           (source._sfContainerMap           )
{
}


/*-------------------------- destructors ----------------------------------*/

GenericEventDetailsBase::~GenericEventDetailsBase(void)
{
}


GetFieldHandlePtr GenericEventDetailsBase::getHandleNumberMap       (void) const
{
    SFStringToUInt32Map::GetHandlePtr returnValue(
        new  SFStringToUInt32Map::GetHandle(
             &_sfNumberMap,
             this->getType().getFieldDesc(NumberMapFieldId),
             const_cast<GenericEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GenericEventDetailsBase::editHandleNumberMap      (void)
{
    SFStringToUInt32Map::EditHandlePtr returnValue(
        new  SFStringToUInt32Map::EditHandle(
             &_sfNumberMap,
             this->getType().getFieldDesc(NumberMapFieldId),
             this));


    editSField(NumberMapFieldMask);

    return returnValue;
}

GetFieldHandlePtr GenericEventDetailsBase::getHandleContainerMap    (void) const
{
    SFFieldContainerMap::GetHandlePtr returnValue(
        new  SFFieldContainerMap::GetHandle(
             &_sfContainerMap,
             this->getType().getFieldDesc(ContainerMapFieldId),
             const_cast<GenericEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GenericEventDetailsBase::editHandleContainerMap   (void)
{
    SFFieldContainerMap::EditHandlePtr returnValue(
        new  SFFieldContainerMap::EditHandle(
             &_sfContainerMap,
             this->getType().getFieldDesc(ContainerMapFieldId),
             this));


    editSField(ContainerMapFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void GenericEventDetailsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GenericEventDetails *pThis = static_cast<GenericEventDetails *>(this);

    pThis->execSync(static_cast<GenericEventDetails *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GenericEventDetailsBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GenericEventDetails *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GenericEventDetails *>(pRefAspect),
                  dynamic_cast<const GenericEventDetails *>(this));

    return returnValue;
}
#endif

void GenericEventDetailsBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
