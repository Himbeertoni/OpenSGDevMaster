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
 **     class RadioButton!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGUIDrawObjectCanvas.h"      // RadioDrawObject Class

#include "OSGRadioButtonBase.h"
#include "OSGRadioButton.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RadioButton
    A UI Radio Button.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UIDrawObjectCanvas * RadioButtonBase::_sfRadioDrawObject
    
*/

/*! \var UIDrawObjectCanvas * RadioButtonBase::_sfSelectedRadioDrawObject
    
*/

/*! \var UIDrawObjectCanvas * RadioButtonBase::_sfActiveRadioDrawObject
    
*/

/*! \var UIDrawObjectCanvas * RadioButtonBase::_sfActiveSelectedRadioDrawObject
    
*/

/*! \var UIDrawObjectCanvas * RadioButtonBase::_sfRolloverRadioDrawObject
    
*/

/*! \var UIDrawObjectCanvas * RadioButtonBase::_sfRolloverSelectedRadioDrawObject
    
*/

/*! \var UIDrawObjectCanvas * RadioButtonBase::_sfDisabledRadioDrawObject
    
*/

/*! \var UIDrawObjectCanvas * RadioButtonBase::_sfDisabledSelectedRadioDrawObject
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RadioButton *>::_type("RadioButtonPtr", "ToggleButtonPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RadioButton *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RadioButton *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           RadioButton *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void RadioButtonBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecUIDrawObjectCanvasPtr::Description(
        SFUnrecUIDrawObjectCanvasPtr::getClassType(),
        "RadioDrawObject",
        "",
        RadioDrawObjectFieldId, RadioDrawObjectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RadioButton::editHandleRadioDrawObject),
        static_cast<FieldGetMethodSig >(&RadioButton::getHandleRadioDrawObject));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIDrawObjectCanvasPtr::Description(
        SFUnrecUIDrawObjectCanvasPtr::getClassType(),
        "SelectedRadioDrawObject",
        "",
        SelectedRadioDrawObjectFieldId, SelectedRadioDrawObjectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RadioButton::editHandleSelectedRadioDrawObject),
        static_cast<FieldGetMethodSig >(&RadioButton::getHandleSelectedRadioDrawObject));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIDrawObjectCanvasPtr::Description(
        SFUnrecUIDrawObjectCanvasPtr::getClassType(),
        "ActiveRadioDrawObject",
        "",
        ActiveRadioDrawObjectFieldId, ActiveRadioDrawObjectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RadioButton::editHandleActiveRadioDrawObject),
        static_cast<FieldGetMethodSig >(&RadioButton::getHandleActiveRadioDrawObject));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIDrawObjectCanvasPtr::Description(
        SFUnrecUIDrawObjectCanvasPtr::getClassType(),
        "ActiveSelectedRadioDrawObject",
        "",
        ActiveSelectedRadioDrawObjectFieldId, ActiveSelectedRadioDrawObjectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RadioButton::editHandleActiveSelectedRadioDrawObject),
        static_cast<FieldGetMethodSig >(&RadioButton::getHandleActiveSelectedRadioDrawObject));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIDrawObjectCanvasPtr::Description(
        SFUnrecUIDrawObjectCanvasPtr::getClassType(),
        "RolloverRadioDrawObject",
        "",
        RolloverRadioDrawObjectFieldId, RolloverRadioDrawObjectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RadioButton::editHandleRolloverRadioDrawObject),
        static_cast<FieldGetMethodSig >(&RadioButton::getHandleRolloverRadioDrawObject));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIDrawObjectCanvasPtr::Description(
        SFUnrecUIDrawObjectCanvasPtr::getClassType(),
        "RolloverSelectedRadioDrawObject",
        "",
        RolloverSelectedRadioDrawObjectFieldId, RolloverSelectedRadioDrawObjectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RadioButton::editHandleRolloverSelectedRadioDrawObject),
        static_cast<FieldGetMethodSig >(&RadioButton::getHandleRolloverSelectedRadioDrawObject));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIDrawObjectCanvasPtr::Description(
        SFUnrecUIDrawObjectCanvasPtr::getClassType(),
        "DisabledRadioDrawObject",
        "",
        DisabledRadioDrawObjectFieldId, DisabledRadioDrawObjectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RadioButton::editHandleDisabledRadioDrawObject),
        static_cast<FieldGetMethodSig >(&RadioButton::getHandleDisabledRadioDrawObject));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIDrawObjectCanvasPtr::Description(
        SFUnrecUIDrawObjectCanvasPtr::getClassType(),
        "DisabledSelectedRadioDrawObject",
        "",
        DisabledSelectedRadioDrawObjectFieldId, DisabledSelectedRadioDrawObjectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RadioButton::editHandleDisabledSelectedRadioDrawObject),
        static_cast<FieldGetMethodSig >(&RadioButton::getHandleDisabledSelectedRadioDrawObject));

    oType.addInitialDesc(pDesc);
}


RadioButtonBase::TypeObject RadioButtonBase::_type(
    RadioButtonBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&RadioButtonBase::createEmptyLocal),
    RadioButton::initMethod,
    RadioButton::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RadioButton::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"RadioButton\"\n"
    "\tparent=\"ToggleButton\"\n"
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
    "A UI Radio Button.\n"
    "\t<Field\n"
    "\t\tname=\"RadioDrawObject\"\n"
    "\t\ttype=\"UIDrawObjectCanvas\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"SelectedRadioDrawObject\"\n"
    "\t\ttype=\"UIDrawObjectCanvas\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ActiveRadioDrawObject\"\n"
    "\t\ttype=\"UIDrawObjectCanvas\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ActiveSelectedRadioDrawObject\"\n"
    "\t\ttype=\"UIDrawObjectCanvas\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"RolloverRadioDrawObject\"\n"
    "\t\ttype=\"UIDrawObjectCanvas\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"RolloverSelectedRadioDrawObject\"\n"
    "\t\ttype=\"UIDrawObjectCanvas\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"DisabledRadioDrawObject\"\n"
    "\t\ttype=\"UIDrawObjectCanvas\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"DisabledSelectedRadioDrawObject\"\n"
    "\t\ttype=\"UIDrawObjectCanvas\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI Radio Button.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RadioButtonBase::getType(void)
{
    return _type;
}

const FieldContainerType &RadioButtonBase::getType(void) const
{
    return _type;
}

UInt32 RadioButtonBase::getContainerSize(void) const
{
    return sizeof(RadioButton);
}

/*------------------------- decorator get ------------------------------*/


//! Get the RadioButton::_sfRadioDrawObject field.
const SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::getSFRadioDrawObject(void) const
{
    return &_sfRadioDrawObject;
}

SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::editSFRadioDrawObject(void)
{
    editSField(RadioDrawObjectFieldMask);

    return &_sfRadioDrawObject;
}

//! Get the RadioButton::_sfSelectedRadioDrawObject field.
const SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::getSFSelectedRadioDrawObject(void) const
{
    return &_sfSelectedRadioDrawObject;
}

SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::editSFSelectedRadioDrawObject(void)
{
    editSField(SelectedRadioDrawObjectFieldMask);

    return &_sfSelectedRadioDrawObject;
}

//! Get the RadioButton::_sfActiveRadioDrawObject field.
const SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::getSFActiveRadioDrawObject(void) const
{
    return &_sfActiveRadioDrawObject;
}

SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::editSFActiveRadioDrawObject(void)
{
    editSField(ActiveRadioDrawObjectFieldMask);

    return &_sfActiveRadioDrawObject;
}

//! Get the RadioButton::_sfActiveSelectedRadioDrawObject field.
const SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::getSFActiveSelectedRadioDrawObject(void) const
{
    return &_sfActiveSelectedRadioDrawObject;
}

SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::editSFActiveSelectedRadioDrawObject(void)
{
    editSField(ActiveSelectedRadioDrawObjectFieldMask);

    return &_sfActiveSelectedRadioDrawObject;
}

//! Get the RadioButton::_sfRolloverRadioDrawObject field.
const SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::getSFRolloverRadioDrawObject(void) const
{
    return &_sfRolloverRadioDrawObject;
}

SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::editSFRolloverRadioDrawObject(void)
{
    editSField(RolloverRadioDrawObjectFieldMask);

    return &_sfRolloverRadioDrawObject;
}

//! Get the RadioButton::_sfRolloverSelectedRadioDrawObject field.
const SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::getSFRolloverSelectedRadioDrawObject(void) const
{
    return &_sfRolloverSelectedRadioDrawObject;
}

SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::editSFRolloverSelectedRadioDrawObject(void)
{
    editSField(RolloverSelectedRadioDrawObjectFieldMask);

    return &_sfRolloverSelectedRadioDrawObject;
}

//! Get the RadioButton::_sfDisabledRadioDrawObject field.
const SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::getSFDisabledRadioDrawObject(void) const
{
    return &_sfDisabledRadioDrawObject;
}

SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::editSFDisabledRadioDrawObject(void)
{
    editSField(DisabledRadioDrawObjectFieldMask);

    return &_sfDisabledRadioDrawObject;
}

//! Get the RadioButton::_sfDisabledSelectedRadioDrawObject field.
const SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::getSFDisabledSelectedRadioDrawObject(void) const
{
    return &_sfDisabledSelectedRadioDrawObject;
}

SFUnrecUIDrawObjectCanvasPtr *RadioButtonBase::editSFDisabledSelectedRadioDrawObject(void)
{
    editSField(DisabledSelectedRadioDrawObjectFieldMask);

    return &_sfDisabledSelectedRadioDrawObject;
}





/*------------------------------ access -----------------------------------*/

UInt32 RadioButtonBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RadioDrawObjectFieldMask & whichField))
    {
        returnValue += _sfRadioDrawObject.getBinSize();
    }
    if(FieldBits::NoField != (SelectedRadioDrawObjectFieldMask & whichField))
    {
        returnValue += _sfSelectedRadioDrawObject.getBinSize();
    }
    if(FieldBits::NoField != (ActiveRadioDrawObjectFieldMask & whichField))
    {
        returnValue += _sfActiveRadioDrawObject.getBinSize();
    }
    if(FieldBits::NoField != (ActiveSelectedRadioDrawObjectFieldMask & whichField))
    {
        returnValue += _sfActiveSelectedRadioDrawObject.getBinSize();
    }
    if(FieldBits::NoField != (RolloverRadioDrawObjectFieldMask & whichField))
    {
        returnValue += _sfRolloverRadioDrawObject.getBinSize();
    }
    if(FieldBits::NoField != (RolloverSelectedRadioDrawObjectFieldMask & whichField))
    {
        returnValue += _sfRolloverSelectedRadioDrawObject.getBinSize();
    }
    if(FieldBits::NoField != (DisabledRadioDrawObjectFieldMask & whichField))
    {
        returnValue += _sfDisabledRadioDrawObject.getBinSize();
    }
    if(FieldBits::NoField != (DisabledSelectedRadioDrawObjectFieldMask & whichField))
    {
        returnValue += _sfDisabledSelectedRadioDrawObject.getBinSize();
    }

    return returnValue;
}

void RadioButtonBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RadioDrawObjectFieldMask & whichField))
    {
        _sfRadioDrawObject.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SelectedRadioDrawObjectFieldMask & whichField))
    {
        _sfSelectedRadioDrawObject.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ActiveRadioDrawObjectFieldMask & whichField))
    {
        _sfActiveRadioDrawObject.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ActiveSelectedRadioDrawObjectFieldMask & whichField))
    {
        _sfActiveSelectedRadioDrawObject.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RolloverRadioDrawObjectFieldMask & whichField))
    {
        _sfRolloverRadioDrawObject.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RolloverSelectedRadioDrawObjectFieldMask & whichField))
    {
        _sfRolloverSelectedRadioDrawObject.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DisabledRadioDrawObjectFieldMask & whichField))
    {
        _sfDisabledRadioDrawObject.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DisabledSelectedRadioDrawObjectFieldMask & whichField))
    {
        _sfDisabledSelectedRadioDrawObject.copyToBin(pMem);
    }
}

void RadioButtonBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RadioDrawObjectFieldMask & whichField))
    {
        _sfRadioDrawObject.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SelectedRadioDrawObjectFieldMask & whichField))
    {
        _sfSelectedRadioDrawObject.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ActiveRadioDrawObjectFieldMask & whichField))
    {
        _sfActiveRadioDrawObject.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ActiveSelectedRadioDrawObjectFieldMask & whichField))
    {
        _sfActiveSelectedRadioDrawObject.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RolloverRadioDrawObjectFieldMask & whichField))
    {
        _sfRolloverRadioDrawObject.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RolloverSelectedRadioDrawObjectFieldMask & whichField))
    {
        _sfRolloverSelectedRadioDrawObject.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DisabledRadioDrawObjectFieldMask & whichField))
    {
        _sfDisabledRadioDrawObject.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DisabledSelectedRadioDrawObjectFieldMask & whichField))
    {
        _sfDisabledSelectedRadioDrawObject.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RadioButtonTransitPtr RadioButtonBase::createLocal(BitVector bFlags)
{
    RadioButtonTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RadioButton>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
RadioButtonTransitPtr RadioButtonBase::createDependent(BitVector bFlags)
{
    RadioButtonTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<RadioButton>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RadioButtonTransitPtr RadioButtonBase::create(void)
{
    RadioButtonTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RadioButton>(tmpPtr);
    }

    return fc;
}

RadioButton *RadioButtonBase::createEmptyLocal(BitVector bFlags)
{
    RadioButton *returnValue;

    newPtr<RadioButton>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RadioButton *RadioButtonBase::createEmpty(void)
{
    RadioButton *returnValue;

    newPtr<RadioButton>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RadioButtonBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RadioButton *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RadioButton *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RadioButtonBase::shallowCopyDependent(
    BitVector bFlags) const
{
    RadioButton *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RadioButton *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr RadioButtonBase::shallowCopy(void) const
{
    RadioButton *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RadioButton *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RadioButtonBase::RadioButtonBase(void) :
    Inherited(),
    _sfRadioDrawObject        (NULL),
    _sfSelectedRadioDrawObject(NULL),
    _sfActiveRadioDrawObject  (NULL),
    _sfActiveSelectedRadioDrawObject(NULL),
    _sfRolloverRadioDrawObject(NULL),
    _sfRolloverSelectedRadioDrawObject(NULL),
    _sfDisabledRadioDrawObject(NULL),
    _sfDisabledSelectedRadioDrawObject(NULL)
{
}

RadioButtonBase::RadioButtonBase(const RadioButtonBase &source) :
    Inherited(source),
    _sfRadioDrawObject        (NULL),
    _sfSelectedRadioDrawObject(NULL),
    _sfActiveRadioDrawObject  (NULL),
    _sfActiveSelectedRadioDrawObject(NULL),
    _sfRolloverRadioDrawObject(NULL),
    _sfRolloverSelectedRadioDrawObject(NULL),
    _sfDisabledRadioDrawObject(NULL),
    _sfDisabledSelectedRadioDrawObject(NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

RadioButtonBase::~RadioButtonBase(void)
{
}

void RadioButtonBase::onCreate(const RadioButton *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        RadioButton *pThis = static_cast<RadioButton *>(this);

        pThis->setRadioDrawObject(source->getRadioDrawObject());

        pThis->setSelectedRadioDrawObject(source->getSelectedRadioDrawObject());

        pThis->setActiveRadioDrawObject(source->getActiveRadioDrawObject());

        pThis->setActiveSelectedRadioDrawObject(source->getActiveSelectedRadioDrawObject());

        pThis->setRolloverRadioDrawObject(source->getRolloverRadioDrawObject());

        pThis->setRolloverSelectedRadioDrawObject(source->getRolloverSelectedRadioDrawObject());

        pThis->setDisabledRadioDrawObject(source->getDisabledRadioDrawObject());

        pThis->setDisabledSelectedRadioDrawObject(source->getDisabledSelectedRadioDrawObject());
    }
}

GetFieldHandlePtr RadioButtonBase::getHandleRadioDrawObject (void) const
{
    SFUnrecUIDrawObjectCanvasPtr::GetHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::GetHandle(
             &_sfRadioDrawObject,
             this->getType().getFieldDesc(RadioDrawObjectFieldId),
             const_cast<RadioButtonBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RadioButtonBase::editHandleRadioDrawObject(void)
{
    SFUnrecUIDrawObjectCanvasPtr::EditHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::EditHandle(
             &_sfRadioDrawObject,
             this->getType().getFieldDesc(RadioDrawObjectFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RadioButton::setRadioDrawObject,
                    static_cast<RadioButton *>(this), _1));

    editSField(RadioDrawObjectFieldMask);

    return returnValue;
}

GetFieldHandlePtr RadioButtonBase::getHandleSelectedRadioDrawObject (void) const
{
    SFUnrecUIDrawObjectCanvasPtr::GetHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::GetHandle(
             &_sfSelectedRadioDrawObject,
             this->getType().getFieldDesc(SelectedRadioDrawObjectFieldId),
             const_cast<RadioButtonBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RadioButtonBase::editHandleSelectedRadioDrawObject(void)
{
    SFUnrecUIDrawObjectCanvasPtr::EditHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::EditHandle(
             &_sfSelectedRadioDrawObject,
             this->getType().getFieldDesc(SelectedRadioDrawObjectFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RadioButton::setSelectedRadioDrawObject,
                    static_cast<RadioButton *>(this), _1));

    editSField(SelectedRadioDrawObjectFieldMask);

    return returnValue;
}

GetFieldHandlePtr RadioButtonBase::getHandleActiveRadioDrawObject (void) const
{
    SFUnrecUIDrawObjectCanvasPtr::GetHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::GetHandle(
             &_sfActiveRadioDrawObject,
             this->getType().getFieldDesc(ActiveRadioDrawObjectFieldId),
             const_cast<RadioButtonBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RadioButtonBase::editHandleActiveRadioDrawObject(void)
{
    SFUnrecUIDrawObjectCanvasPtr::EditHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::EditHandle(
             &_sfActiveRadioDrawObject,
             this->getType().getFieldDesc(ActiveRadioDrawObjectFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RadioButton::setActiveRadioDrawObject,
                    static_cast<RadioButton *>(this), _1));

    editSField(ActiveRadioDrawObjectFieldMask);

    return returnValue;
}

GetFieldHandlePtr RadioButtonBase::getHandleActiveSelectedRadioDrawObject (void) const
{
    SFUnrecUIDrawObjectCanvasPtr::GetHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::GetHandle(
             &_sfActiveSelectedRadioDrawObject,
             this->getType().getFieldDesc(ActiveSelectedRadioDrawObjectFieldId),
             const_cast<RadioButtonBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RadioButtonBase::editHandleActiveSelectedRadioDrawObject(void)
{
    SFUnrecUIDrawObjectCanvasPtr::EditHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::EditHandle(
             &_sfActiveSelectedRadioDrawObject,
             this->getType().getFieldDesc(ActiveSelectedRadioDrawObjectFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RadioButton::setActiveSelectedRadioDrawObject,
                    static_cast<RadioButton *>(this), _1));

    editSField(ActiveSelectedRadioDrawObjectFieldMask);

    return returnValue;
}

GetFieldHandlePtr RadioButtonBase::getHandleRolloverRadioDrawObject (void) const
{
    SFUnrecUIDrawObjectCanvasPtr::GetHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::GetHandle(
             &_sfRolloverRadioDrawObject,
             this->getType().getFieldDesc(RolloverRadioDrawObjectFieldId),
             const_cast<RadioButtonBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RadioButtonBase::editHandleRolloverRadioDrawObject(void)
{
    SFUnrecUIDrawObjectCanvasPtr::EditHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::EditHandle(
             &_sfRolloverRadioDrawObject,
             this->getType().getFieldDesc(RolloverRadioDrawObjectFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RadioButton::setRolloverRadioDrawObject,
                    static_cast<RadioButton *>(this), _1));

    editSField(RolloverRadioDrawObjectFieldMask);

    return returnValue;
}

GetFieldHandlePtr RadioButtonBase::getHandleRolloverSelectedRadioDrawObject (void) const
{
    SFUnrecUIDrawObjectCanvasPtr::GetHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::GetHandle(
             &_sfRolloverSelectedRadioDrawObject,
             this->getType().getFieldDesc(RolloverSelectedRadioDrawObjectFieldId),
             const_cast<RadioButtonBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RadioButtonBase::editHandleRolloverSelectedRadioDrawObject(void)
{
    SFUnrecUIDrawObjectCanvasPtr::EditHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::EditHandle(
             &_sfRolloverSelectedRadioDrawObject,
             this->getType().getFieldDesc(RolloverSelectedRadioDrawObjectFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RadioButton::setRolloverSelectedRadioDrawObject,
                    static_cast<RadioButton *>(this), _1));

    editSField(RolloverSelectedRadioDrawObjectFieldMask);

    return returnValue;
}

GetFieldHandlePtr RadioButtonBase::getHandleDisabledRadioDrawObject (void) const
{
    SFUnrecUIDrawObjectCanvasPtr::GetHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::GetHandle(
             &_sfDisabledRadioDrawObject,
             this->getType().getFieldDesc(DisabledRadioDrawObjectFieldId),
             const_cast<RadioButtonBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RadioButtonBase::editHandleDisabledRadioDrawObject(void)
{
    SFUnrecUIDrawObjectCanvasPtr::EditHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::EditHandle(
             &_sfDisabledRadioDrawObject,
             this->getType().getFieldDesc(DisabledRadioDrawObjectFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RadioButton::setDisabledRadioDrawObject,
                    static_cast<RadioButton *>(this), _1));

    editSField(DisabledRadioDrawObjectFieldMask);

    return returnValue;
}

GetFieldHandlePtr RadioButtonBase::getHandleDisabledSelectedRadioDrawObject (void) const
{
    SFUnrecUIDrawObjectCanvasPtr::GetHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::GetHandle(
             &_sfDisabledSelectedRadioDrawObject,
             this->getType().getFieldDesc(DisabledSelectedRadioDrawObjectFieldId),
             const_cast<RadioButtonBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RadioButtonBase::editHandleDisabledSelectedRadioDrawObject(void)
{
    SFUnrecUIDrawObjectCanvasPtr::EditHandlePtr returnValue(
        new  SFUnrecUIDrawObjectCanvasPtr::EditHandle(
             &_sfDisabledSelectedRadioDrawObject,
             this->getType().getFieldDesc(DisabledSelectedRadioDrawObjectFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RadioButton::setDisabledSelectedRadioDrawObject,
                    static_cast<RadioButton *>(this), _1));

    editSField(DisabledSelectedRadioDrawObjectFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void RadioButtonBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RadioButton *pThis = static_cast<RadioButton *>(this);

    pThis->execSync(static_cast<RadioButton *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RadioButtonBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RadioButton *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RadioButton *>(pRefAspect),
                  dynamic_cast<const RadioButton *>(this));

    return returnValue;
}
#endif

void RadioButtonBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<RadioButton *>(this)->setRadioDrawObject(NULL);

    static_cast<RadioButton *>(this)->setSelectedRadioDrawObject(NULL);

    static_cast<RadioButton *>(this)->setActiveRadioDrawObject(NULL);

    static_cast<RadioButton *>(this)->setActiveSelectedRadioDrawObject(NULL);

    static_cast<RadioButton *>(this)->setRolloverRadioDrawObject(NULL);

    static_cast<RadioButton *>(this)->setRolloverSelectedRadioDrawObject(NULL);

    static_cast<RadioButton *>(this)->setDisabledRadioDrawObject(NULL);

    static_cast<RadioButton *>(this)->setDisabledSelectedRadioDrawObject(NULL);


}


OSG_END_NAMESPACE
