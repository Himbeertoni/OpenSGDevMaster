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
 **     class ColorChooser!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGComponent.h"               // PreviewPanel Class
#include "OSGColorSelectionModel.h"     // SelectionModel Class

#include "OSGColorChooserBase.h"
#include "OSGColorChooser.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ColorChooser
    A UI ColorChooser.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          ColorChooserBase::_mfChooserPanelTypeIds
    
*/

/*! \var Component *     ColorChooserBase::_sfPreviewPanel
    
*/

/*! \var ColorSelectionModel * ColorChooserBase::_sfSelectionModel
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ColorChooser *>::_type("ColorChooserPtr", "PanelPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ColorChooser *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ColorChooser *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ColorChooser *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ColorChooserBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "ChooserPanelTypeIds",
        "",
        ChooserPanelTypeIdsFieldId, ChooserPanelTypeIdsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorChooser::editHandleChooserPanelTypeIds),
        static_cast<FieldGetMethodSig >(&ColorChooser::getHandleChooserPanelTypeIds));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecComponentPtr::Description(
        SFUnrecComponentPtr::getClassType(),
        "PreviewPanel",
        "",
        PreviewPanelFieldId, PreviewPanelFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorChooser::editHandlePreviewPanel),
        static_cast<FieldGetMethodSig >(&ColorChooser::getHandlePreviewPanel));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecColorSelectionModelPtr::Description(
        SFUnrecColorSelectionModelPtr::getClassType(),
        "SelectionModel",
        "",
        SelectionModelFieldId, SelectionModelFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorChooser::editHandleSelectionModel),
        static_cast<FieldGetMethodSig >(&ColorChooser::getHandleSelectionModel));

    oType.addInitialDesc(pDesc);
}


ColorChooserBase::TypeObject ColorChooserBase::_type(
    ColorChooserBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ColorChooserBase::createEmptyLocal),
    ColorChooser::initMethod,
    ColorChooser::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ColorChooser::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ColorChooser\"\n"
    "    parent=\"Panel\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    >\n"
    "    A UI ColorChooser.\n"
    "\t<Field\n"
    "\t\tname=\"ChooserPanelTypeIds\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "        category=\"data\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "    <Field\n"
    "        name=\"PreviewPanel\"\n"
    "        type=\"Component\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"NULL\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"SelectionModel\"\n"
    "        type=\"ColorSelectionModel\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"NULL\"\n"
    "        >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "A UI ColorChooser.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ColorChooserBase::getType(void)
{
    return _type;
}

const FieldContainerType &ColorChooserBase::getType(void) const
{
    return _type;
}

UInt32 ColorChooserBase::getContainerSize(void) const
{
    return sizeof(ColorChooser);
}

/*------------------------- decorator get ------------------------------*/


MFUInt32 *ColorChooserBase::editMFChooserPanelTypeIds(void)
{
    editMField(ChooserPanelTypeIdsFieldMask, _mfChooserPanelTypeIds);

    return &_mfChooserPanelTypeIds;
}

const MFUInt32 *ColorChooserBase::getMFChooserPanelTypeIds(void) const
{
    return &_mfChooserPanelTypeIds;
}


//! Get the ColorChooser::_sfPreviewPanel field.
const SFUnrecComponentPtr *ColorChooserBase::getSFPreviewPanel(void) const
{
    return &_sfPreviewPanel;
}

SFUnrecComponentPtr *ColorChooserBase::editSFPreviewPanel   (void)
{
    editSField(PreviewPanelFieldMask);

    return &_sfPreviewPanel;
}

//! Get the ColorChooser::_sfSelectionModel field.
const SFUnrecColorSelectionModelPtr *ColorChooserBase::getSFSelectionModel(void) const
{
    return &_sfSelectionModel;
}

SFUnrecColorSelectionModelPtr *ColorChooserBase::editSFSelectionModel (void)
{
    editSField(SelectionModelFieldMask);

    return &_sfSelectionModel;
}





/*------------------------------ access -----------------------------------*/

UInt32 ColorChooserBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChooserPanelTypeIdsFieldMask & whichField))
    {
        returnValue += _mfChooserPanelTypeIds.getBinSize();
    }
    if(FieldBits::NoField != (PreviewPanelFieldMask & whichField))
    {
        returnValue += _sfPreviewPanel.getBinSize();
    }
    if(FieldBits::NoField != (SelectionModelFieldMask & whichField))
    {
        returnValue += _sfSelectionModel.getBinSize();
    }

    return returnValue;
}

void ColorChooserBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChooserPanelTypeIdsFieldMask & whichField))
    {
        _mfChooserPanelTypeIds.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PreviewPanelFieldMask & whichField))
    {
        _sfPreviewPanel.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SelectionModelFieldMask & whichField))
    {
        _sfSelectionModel.copyToBin(pMem);
    }
}

void ColorChooserBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChooserPanelTypeIdsFieldMask & whichField))
    {
        _mfChooserPanelTypeIds.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PreviewPanelFieldMask & whichField))
    {
        _sfPreviewPanel.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SelectionModelFieldMask & whichField))
    {
        _sfSelectionModel.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ColorChooserTransitPtr ColorChooserBase::createLocal(BitVector bFlags)
{
    ColorChooserTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ColorChooser>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ColorChooserTransitPtr ColorChooserBase::createDependent(BitVector bFlags)
{
    ColorChooserTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ColorChooser>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ColorChooserTransitPtr ColorChooserBase::create(void)
{
    ColorChooserTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ColorChooser>(tmpPtr);
    }

    return fc;
}

ColorChooser *ColorChooserBase::createEmptyLocal(BitVector bFlags)
{
    ColorChooser *returnValue;

    newPtr<ColorChooser>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ColorChooser *ColorChooserBase::createEmpty(void)
{
    ColorChooser *returnValue;

    newPtr<ColorChooser>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ColorChooserBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ColorChooser *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ColorChooser *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ColorChooserBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ColorChooser *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ColorChooser *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ColorChooserBase::shallowCopy(void) const
{
    ColorChooser *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ColorChooser *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ColorChooserBase::ColorChooserBase(void) :
    Inherited(),
    _mfChooserPanelTypeIds    (),
    _sfPreviewPanel           (NULL),
    _sfSelectionModel         (NULL)
{
}

ColorChooserBase::ColorChooserBase(const ColorChooserBase &source) :
    Inherited(source),
    _mfChooserPanelTypeIds    (source._mfChooserPanelTypeIds    ),
    _sfPreviewPanel           (NULL),
    _sfSelectionModel         (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

ColorChooserBase::~ColorChooserBase(void)
{
}

void ColorChooserBase::onCreate(const ColorChooser *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ColorChooser *pThis = static_cast<ColorChooser *>(this);

        pThis->setPreviewPanel(source->getPreviewPanel());

        pThis->setSelectionModel(source->getSelectionModel());
    }
}

GetFieldHandlePtr ColorChooserBase::getHandleChooserPanelTypeIds (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfChooserPanelTypeIds,
             this->getType().getFieldDesc(ChooserPanelTypeIdsFieldId),
             const_cast<ColorChooserBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorChooserBase::editHandleChooserPanelTypeIds(void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfChooserPanelTypeIds,
             this->getType().getFieldDesc(ChooserPanelTypeIdsFieldId),
             this));


    editMField(ChooserPanelTypeIdsFieldMask, _mfChooserPanelTypeIds);

    return returnValue;
}

GetFieldHandlePtr ColorChooserBase::getHandlePreviewPanel    (void) const
{
    SFUnrecComponentPtr::GetHandlePtr returnValue(
        new  SFUnrecComponentPtr::GetHandle(
             &_sfPreviewPanel,
             this->getType().getFieldDesc(PreviewPanelFieldId),
             const_cast<ColorChooserBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorChooserBase::editHandlePreviewPanel   (void)
{
    SFUnrecComponentPtr::EditHandlePtr returnValue(
        new  SFUnrecComponentPtr::EditHandle(
             &_sfPreviewPanel,
             this->getType().getFieldDesc(PreviewPanelFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ColorChooser::setPreviewPanel,
                    static_cast<ColorChooser *>(this), _1));

    editSField(PreviewPanelFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorChooserBase::getHandleSelectionModel  (void) const
{
    SFUnrecColorSelectionModelPtr::GetHandlePtr returnValue(
        new  SFUnrecColorSelectionModelPtr::GetHandle(
             &_sfSelectionModel,
             this->getType().getFieldDesc(SelectionModelFieldId),
             const_cast<ColorChooserBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorChooserBase::editHandleSelectionModel (void)
{
    SFUnrecColorSelectionModelPtr::EditHandlePtr returnValue(
        new  SFUnrecColorSelectionModelPtr::EditHandle(
             &_sfSelectionModel,
             this->getType().getFieldDesc(SelectionModelFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ColorChooser::setSelectionModel,
                    static_cast<ColorChooser *>(this), _1));

    editSField(SelectionModelFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void ColorChooserBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ColorChooser *pThis = static_cast<ColorChooser *>(this);

    pThis->execSync(static_cast<ColorChooser *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ColorChooserBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ColorChooser *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ColorChooser *>(pRefAspect),
                  dynamic_cast<const ColorChooser *>(this));

    return returnValue;
}
#endif

void ColorChooserBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ColorChooser *>(this)->setPreviewPanel(NULL);

    static_cast<ColorChooser *>(this)->setSelectionModel(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfChooserPanelTypeIds.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
