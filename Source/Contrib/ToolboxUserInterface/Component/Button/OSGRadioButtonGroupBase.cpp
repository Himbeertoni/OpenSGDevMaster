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
 **     Do not change this file, changes should be done in the derived      **
 **     class RadioButtonGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGRadioButton.h"             // SelectedButton Class

#include "OSGRadioButtonGroupBase.h"
#include "OSGRadioButtonGroup.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RadioButtonGroup
    A UI Radio Button Group.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var RadioButton *   RadioButtonGroupBase::_sfSelectedButton
    
*/

/*! \var RadioButton *   RadioButtonGroupBase::_mfGroupButtons
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RadioButtonGroup *>::_type("RadioButtonGroupPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RadioButtonGroup *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RadioButtonGroup *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           RadioButtonGroup *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void RadioButtonGroupBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecRadioButtonPtr::Description(
        SFUnrecRadioButtonPtr::getClassType(),
        "SelectedButton",
        "",
        SelectedButtonFieldId, SelectedButtonFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RadioButtonGroup::editHandleSelectedButton),
        static_cast<FieldGetMethodSig >(&RadioButtonGroup::getHandleSelectedButton));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecRadioButtonPtr::Description(
        MFUnrecRadioButtonPtr::getClassType(),
        "GroupButtons",
        "",
        GroupButtonsFieldId, GroupButtonsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RadioButtonGroup::editHandleGroupButtons),
        static_cast<FieldGetMethodSig >(&RadioButtonGroup::getHandleGroupButtons));

    oType.addInitialDesc(pDesc);
}


RadioButtonGroupBase::TypeObject RadioButtonGroupBase::_type(
    RadioButtonGroupBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&RadioButtonGroupBase::createEmptyLocal),
    RadioButtonGroup::initMethod,
    RadioButtonGroup::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RadioButtonGroup::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"RadioButtonGroup\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI Radio Button Group.\n"
    "\t<Field\n"
    "\t\tname=\"SelectedButton\"\n"
    "\t\ttype=\"RadioButton\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"GroupButtons\"\n"
    "\t\ttype=\"RadioButton\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI Radio Button Group.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RadioButtonGroupBase::getType(void)
{
    return _type;
}

const FieldContainerType &RadioButtonGroupBase::getType(void) const
{
    return _type;
}

UInt32 RadioButtonGroupBase::getContainerSize(void) const
{
    return sizeof(RadioButtonGroup);
}

/*------------------------- decorator get ------------------------------*/


//! Get the RadioButtonGroup::_sfSelectedButton field.
const SFUnrecRadioButtonPtr *RadioButtonGroupBase::getSFSelectedButton(void) const
{
    return &_sfSelectedButton;
}

SFUnrecRadioButtonPtr *RadioButtonGroupBase::editSFSelectedButton (void)
{
    editSField(SelectedButtonFieldMask);

    return &_sfSelectedButton;
}

//! Get the RadioButtonGroup::_mfGroupButtons field.
const MFUnrecRadioButtonPtr *RadioButtonGroupBase::getMFGroupButtons(void) const
{
    return &_mfGroupButtons;
}

MFUnrecRadioButtonPtr *RadioButtonGroupBase::editMFGroupButtons   (void)
{
    editMField(GroupButtonsFieldMask, _mfGroupButtons);

    return &_mfGroupButtons;
}



void RadioButtonGroupBase::pushToGroupButtons(RadioButton * const value)
{
    editMField(GroupButtonsFieldMask, _mfGroupButtons);

    _mfGroupButtons.push_back(value);
}

void RadioButtonGroupBase::assignGroupButtons(const MFUnrecRadioButtonPtr &value)
{
    MFUnrecRadioButtonPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecRadioButtonPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<RadioButtonGroup *>(this)->clearGroupButtons();

    while(elemIt != elemEnd)
    {
        this->pushToGroupButtons(*elemIt);

        ++elemIt;
    }
}

void RadioButtonGroupBase::removeFromGroupButtons(UInt32 uiIndex)
{
    if(uiIndex < _mfGroupButtons.size())
    {
        editMField(GroupButtonsFieldMask, _mfGroupButtons);

        _mfGroupButtons.erase(uiIndex);
    }
}

void RadioButtonGroupBase::removeObjFromGroupButtons(RadioButton * const value)
{
    Int32 iElemIdx = _mfGroupButtons.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(GroupButtonsFieldMask, _mfGroupButtons);

        _mfGroupButtons.erase(iElemIdx);
    }
}
void RadioButtonGroupBase::clearGroupButtons(void)
{
    editMField(GroupButtonsFieldMask, _mfGroupButtons);


    _mfGroupButtons.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 RadioButtonGroupBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SelectedButtonFieldMask & whichField))
    {
        returnValue += _sfSelectedButton.getBinSize();
    }
    if(FieldBits::NoField != (GroupButtonsFieldMask & whichField))
    {
        returnValue += _mfGroupButtons.getBinSize();
    }

    return returnValue;
}

void RadioButtonGroupBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SelectedButtonFieldMask & whichField))
    {
        _sfSelectedButton.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GroupButtonsFieldMask & whichField))
    {
        _mfGroupButtons.copyToBin(pMem);
    }
}

void RadioButtonGroupBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SelectedButtonFieldMask & whichField))
    {
        _sfSelectedButton.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GroupButtonsFieldMask & whichField))
    {
        _mfGroupButtons.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RadioButtonGroupTransitPtr RadioButtonGroupBase::createLocal(BitVector bFlags)
{
    RadioButtonGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RadioButtonGroup>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
RadioButtonGroupTransitPtr RadioButtonGroupBase::createDependent(BitVector bFlags)
{
    RadioButtonGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<RadioButtonGroup>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RadioButtonGroupTransitPtr RadioButtonGroupBase::create(void)
{
    RadioButtonGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RadioButtonGroup>(tmpPtr);
    }

    return fc;
}

RadioButtonGroup *RadioButtonGroupBase::createEmptyLocal(BitVector bFlags)
{
    RadioButtonGroup *returnValue;

    newPtr<RadioButtonGroup>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RadioButtonGroup *RadioButtonGroupBase::createEmpty(void)
{
    RadioButtonGroup *returnValue;

    newPtr<RadioButtonGroup>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr RadioButtonGroupBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RadioButtonGroup *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RadioButtonGroup *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RadioButtonGroupBase::shallowCopyDependent(
    BitVector bFlags) const
{
    RadioButtonGroup *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RadioButtonGroup *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr RadioButtonGroupBase::shallowCopy(void) const
{
    RadioButtonGroup *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RadioButtonGroup *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

RadioButtonGroupBase::RadioButtonGroupBase(void) :
    Inherited(),
    _sfSelectedButton         (NULL),
    _mfGroupButtons           ()
{
}

RadioButtonGroupBase::RadioButtonGroupBase(const RadioButtonGroupBase &source) :
    Inherited(source),
    _sfSelectedButton         (NULL),
    _mfGroupButtons           ()
{
}


/*-------------------------- destructors ----------------------------------*/

RadioButtonGroupBase::~RadioButtonGroupBase(void)
{
}

void RadioButtonGroupBase::onCreate(const RadioButtonGroup *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        RadioButtonGroup *pThis = static_cast<RadioButtonGroup *>(this);

        pThis->setSelectedButton(source->getSelectedButton());

        MFUnrecRadioButtonPtr::const_iterator GroupButtonsIt  =
            source->_mfGroupButtons.begin();
        MFUnrecRadioButtonPtr::const_iterator GroupButtonsEnd =
            source->_mfGroupButtons.end  ();

        while(GroupButtonsIt != GroupButtonsEnd)
        {
            pThis->pushToGroupButtons(*GroupButtonsIt);

            ++GroupButtonsIt;
        }
    }
}

GetFieldHandlePtr RadioButtonGroupBase::getHandleSelectedButton  (void) const
{
    SFUnrecRadioButtonPtr::GetHandlePtr returnValue(
        new  SFUnrecRadioButtonPtr::GetHandle(
             &_sfSelectedButton,
             this->getType().getFieldDesc(SelectedButtonFieldId),
             const_cast<RadioButtonGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RadioButtonGroupBase::editHandleSelectedButton (void)
{
    SFUnrecRadioButtonPtr::EditHandlePtr returnValue(
        new  SFUnrecRadioButtonPtr::EditHandle(
             &_sfSelectedButton,
             this->getType().getFieldDesc(SelectedButtonFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RadioButtonGroup::setSelectedButton,
                    static_cast<RadioButtonGroup *>(this), _1));

    editSField(SelectedButtonFieldMask);

    return returnValue;
}

GetFieldHandlePtr RadioButtonGroupBase::getHandleGroupButtons    (void) const
{
    MFUnrecRadioButtonPtr::GetHandlePtr returnValue(
        new  MFUnrecRadioButtonPtr::GetHandle(
             &_mfGroupButtons,
             this->getType().getFieldDesc(GroupButtonsFieldId),
             const_cast<RadioButtonGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RadioButtonGroupBase::editHandleGroupButtons   (void)
{
    MFUnrecRadioButtonPtr::EditHandlePtr returnValue(
        new  MFUnrecRadioButtonPtr::EditHandle(
             &_mfGroupButtons,
             this->getType().getFieldDesc(GroupButtonsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&RadioButtonGroup::pushToGroupButtons,
                    static_cast<RadioButtonGroup *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&RadioButtonGroup::removeFromGroupButtons,
                    static_cast<RadioButtonGroup *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&RadioButtonGroup::removeObjFromGroupButtons,
                    static_cast<RadioButtonGroup *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&RadioButtonGroup::clearGroupButtons,
                    static_cast<RadioButtonGroup *>(this)));

    editMField(GroupButtonsFieldMask, _mfGroupButtons);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void RadioButtonGroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RadioButtonGroup *pThis = static_cast<RadioButtonGroup *>(this);

    pThis->execSync(static_cast<RadioButtonGroup *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RadioButtonGroupBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RadioButtonGroup *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RadioButtonGroup *>(pRefAspect),
                  dynamic_cast<const RadioButtonGroup *>(this));

    return returnValue;
}
#endif

void RadioButtonGroupBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<RadioButtonGroup *>(this)->setSelectedButton(NULL);

    static_cast<RadioButtonGroup *>(this)->clearGroupButtons();


}


OSG_END_NAMESPACE
