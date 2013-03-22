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
 **     class MenuItem!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"


#include "OSGKeyEventDetails.h"           // AcceleratorKey default header
#include "OSGKeyEventDetails.h"           // MnemonicKey default header

#include "OSGFieldContainer.h"          // ParentMenu Class

#include "OSGMenuItemBase.h"
#include "OSGMenuItem.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MenuItem
    A UI MenuItem.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FieldContainer * MenuItemBase::_sfParentMenu
    
*/

/*! \var UInt32          MenuItemBase::_sfAcceleratorModifiers
    
*/

/*! \var UInt32          MenuItemBase::_sfAcceleratorKey
    
*/

/*! \var UInt32          MenuItemBase::_sfMnemonicKey
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MenuItem *>::_type("MenuItemPtr", "ToggleButtonPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MenuItem *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MenuItem *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MenuItem *,
                           0);

DataType &FieldTraits< MenuItem *, 1 >::getType(void)
{
    return FieldTraits<MenuItem *, 0>::getType();
}


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      MenuItem *,
                      UnrecordedRefCountPolicy,
                      1);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MenuItemBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFParentFieldContainerPtr::Description(
        SFParentFieldContainerPtr::getClassType(),
        "ParentMenu",
        "",
        ParentMenuFieldId, ParentMenuFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&MenuItem::invalidEditField),
        static_cast     <FieldGetMethodSig >(&MenuItem::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "AcceleratorModifiers",
        "",
        AcceleratorModifiersFieldId, AcceleratorModifiersFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MenuItem::editHandleAcceleratorModifiers),
        static_cast<FieldGetMethodSig >(&MenuItem::getHandleAcceleratorModifiers));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "AcceleratorKey",
        "",
        AcceleratorKeyFieldId, AcceleratorKeyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MenuItem::editHandleAcceleratorKey),
        static_cast<FieldGetMethodSig >(&MenuItem::getHandleAcceleratorKey));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "MnemonicKey",
        "",
        MnemonicKeyFieldId, MnemonicKeyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MenuItem::editHandleMnemonicKey),
        static_cast<FieldGetMethodSig >(&MenuItem::getHandleMnemonicKey));

    oType.addInitialDesc(pDesc);
}


MenuItemBase::TypeObject MenuItemBase::_type(
    MenuItemBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&MenuItemBase::createEmptyLocal),
    MenuItem::initMethod,
    MenuItem::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&MenuItem::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MenuItem\"\n"
    "\tparent=\"ToggleButton\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    childFields=\"multi\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "\t>\n"
    "\tA UI MenuItem.\n"
    "\t<Field\n"
    "\t   name=\"ParentMenu\"\n"
    "\t   type=\"FieldContainer\"\n"
    "\t   cardinality=\"single\"\n"
    "\t   visibility=\"external\"\n"
    "\t   access=\"none\"\n"
    "       doRefCount=\"false\"\n"
    "       passFieldMask=\"true\"\n"
    "       category=\"parentpointer\"\n"
    "\t   >\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"AcceleratorModifiers\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"AcceleratorKey\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"KeyEventDetails::KEY_NONE\"\n"
    "\t\tdefaultHeader=\"OSGKeyEventDetails.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"MnemonicKey\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"KeyEventDetails::KEY_NONE\"\n"
    "\t\tdefaultHeader=\"OSGKeyEventDetails.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI MenuItem.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MenuItemBase::getType(void)
{
    return _type;
}

const FieldContainerType &MenuItemBase::getType(void) const
{
    return _type;
}

UInt32 MenuItemBase::getContainerSize(void) const
{
    return sizeof(MenuItem);
}

/*------------------------- decorator get ------------------------------*/



SFUInt32 *MenuItemBase::editSFAcceleratorModifiers(void)
{
    editSField(AcceleratorModifiersFieldMask);

    return &_sfAcceleratorModifiers;
}

const SFUInt32 *MenuItemBase::getSFAcceleratorModifiers(void) const
{
    return &_sfAcceleratorModifiers;
}


SFUInt32 *MenuItemBase::editSFAcceleratorKey(void)
{
    editSField(AcceleratorKeyFieldMask);

    return &_sfAcceleratorKey;
}

const SFUInt32 *MenuItemBase::getSFAcceleratorKey(void) const
{
    return &_sfAcceleratorKey;
}


SFUInt32 *MenuItemBase::editSFMnemonicKey(void)
{
    editSField(MnemonicKeyFieldMask);

    return &_sfMnemonicKey;
}

const SFUInt32 *MenuItemBase::getSFMnemonicKey(void) const
{
    return &_sfMnemonicKey;
}






/*------------------------------ access -----------------------------------*/

UInt32 MenuItemBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParentMenuFieldMask & whichField))
    {
        returnValue += _sfParentMenu.getBinSize();
    }
    if(FieldBits::NoField != (AcceleratorModifiersFieldMask & whichField))
    {
        returnValue += _sfAcceleratorModifiers.getBinSize();
    }
    if(FieldBits::NoField != (AcceleratorKeyFieldMask & whichField))
    {
        returnValue += _sfAcceleratorKey.getBinSize();
    }
    if(FieldBits::NoField != (MnemonicKeyFieldMask & whichField))
    {
        returnValue += _sfMnemonicKey.getBinSize();
    }

    return returnValue;
}

void MenuItemBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParentMenuFieldMask & whichField))
    {
        _sfParentMenu.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AcceleratorModifiersFieldMask & whichField))
    {
        _sfAcceleratorModifiers.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AcceleratorKeyFieldMask & whichField))
    {
        _sfAcceleratorKey.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MnemonicKeyFieldMask & whichField))
    {
        _sfMnemonicKey.copyToBin(pMem);
    }
}

void MenuItemBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParentMenuFieldMask & whichField))
    {
        _sfParentMenu.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AcceleratorModifiersFieldMask & whichField))
    {
        _sfAcceleratorModifiers.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AcceleratorKeyFieldMask & whichField))
    {
        _sfAcceleratorKey.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MnemonicKeyFieldMask & whichField))
    {
        _sfMnemonicKey.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MenuItemTransitPtr MenuItemBase::createLocal(BitVector bFlags)
{
    MenuItemTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MenuItem>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MenuItemTransitPtr MenuItemBase::createDependent(BitVector bFlags)
{
    MenuItemTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MenuItem>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MenuItemTransitPtr MenuItemBase::create(void)
{
    MenuItemTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MenuItem>(tmpPtr);
    }

    return fc;
}

MenuItem *MenuItemBase::createEmptyLocal(BitVector bFlags)
{
    MenuItem *returnValue;

    newPtr<MenuItem>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MenuItem *MenuItemBase::createEmpty(void)
{
    MenuItem *returnValue;

    newPtr<MenuItem>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MenuItemBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MenuItem *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MenuItem *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MenuItemBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MenuItem *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MenuItem *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MenuItemBase::shallowCopy(void) const
{
    MenuItem *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MenuItem *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

MenuItemBase::MenuItemBase(void) :
    Inherited(),
    _sfParentMenu             (NULL),
    _sfAcceleratorModifiers   (UInt32(0)),
    _sfAcceleratorKey         (UInt32(KeyEventDetails::KEY_NONE)),
    _sfMnemonicKey            (UInt32(KeyEventDetails::KEY_NONE))
{
}

MenuItemBase::MenuItemBase(const MenuItemBase &source) :
    Inherited(source),
    _sfParentMenu             (NULL),
    _sfAcceleratorModifiers   (source._sfAcceleratorModifiers   ),
    _sfAcceleratorKey         (source._sfAcceleratorKey         ),
    _sfMnemonicKey            (source._sfMnemonicKey            )
{
}


/*-------------------------- destructors ----------------------------------*/

MenuItemBase::~MenuItemBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool MenuItemBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == ParentMenuFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            FieldContainer *pOldParent =
                _sfParentMenu.getValue         ();

            UInt16 oldChildFieldId =
                _sfParentMenu.getParentFieldPos();

            if(pOldParent != NULL)
            {
                pOldParent->unlinkChild(this, oldChildFieldId);
            }

            editSField(ParentMenuFieldMask);

            _sfParentMenu.setValue(static_cast<FieldContainer *>(pParent), childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool MenuItemBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == ParentMenuFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            if(_sfParentMenu.getValue() == pParent)
            {
                editSField(ParentMenuFieldMask);

                _sfParentMenu.setValue(NULL, 0xFFFF);

                return true;
            }

            FWARNING(("MenuItemBase::unlinkParent: "
                      "Child <-> Parent link inconsistent.\n"));

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}



GetFieldHandlePtr MenuItemBase::getHandleParentMenu      (void) const
{
    SFParentFieldContainerPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr MenuItemBase::editHandleParentMenu     (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr MenuItemBase::getHandleAcceleratorModifiers (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfAcceleratorModifiers,
             this->getType().getFieldDesc(AcceleratorModifiersFieldId),
             const_cast<MenuItemBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MenuItemBase::editHandleAcceleratorModifiers(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfAcceleratorModifiers,
             this->getType().getFieldDesc(AcceleratorModifiersFieldId),
             this));


    editSField(AcceleratorModifiersFieldMask);

    return returnValue;
}

GetFieldHandlePtr MenuItemBase::getHandleAcceleratorKey  (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfAcceleratorKey,
             this->getType().getFieldDesc(AcceleratorKeyFieldId),
             const_cast<MenuItemBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MenuItemBase::editHandleAcceleratorKey (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfAcceleratorKey,
             this->getType().getFieldDesc(AcceleratorKeyFieldId),
             this));


    editSField(AcceleratorKeyFieldMask);

    return returnValue;
}

GetFieldHandlePtr MenuItemBase::getHandleMnemonicKey     (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfMnemonicKey,
             this->getType().getFieldDesc(MnemonicKeyFieldId),
             const_cast<MenuItemBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MenuItemBase::editHandleMnemonicKey    (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfMnemonicKey,
             this->getType().getFieldDesc(MnemonicKeyFieldId),
             this));


    editSField(MnemonicKeyFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void MenuItemBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MenuItem *pThis = static_cast<MenuItem *>(this);

    pThis->execSync(static_cast<MenuItem *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MenuItemBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MenuItem *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MenuItem *>(pRefAspect),
                  dynamic_cast<const MenuItem *>(this));

    return returnValue;
}
#endif

void MenuItemBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE