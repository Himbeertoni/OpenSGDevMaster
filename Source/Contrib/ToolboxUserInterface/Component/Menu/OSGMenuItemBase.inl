/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &MenuItemBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 MenuItemBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 MenuItemBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the MenuItem::_sfAcceleratorModifiers field.

inline
UInt32 &MenuItemBase::editAcceleratorModifiers(void)
{
    editSField(AcceleratorModifiersFieldMask);

    return _sfAcceleratorModifiers.getValue();
}

//! Get the value of the MenuItem::_sfAcceleratorModifiers field.
inline
      UInt32  MenuItemBase::getAcceleratorModifiers(void) const
{
    return _sfAcceleratorModifiers.getValue();
}

//! Set the value of the MenuItem::_sfAcceleratorModifiers field.
inline
void MenuItemBase::setAcceleratorModifiers(const UInt32 value)
{
    editSField(AcceleratorModifiersFieldMask);

    _sfAcceleratorModifiers.setValue(value);
}
//! Get the value of the MenuItem::_sfAcceleratorKey field.

inline
UInt32 &MenuItemBase::editAcceleratorKey(void)
{
    editSField(AcceleratorKeyFieldMask);

    return _sfAcceleratorKey.getValue();
}

//! Get the value of the MenuItem::_sfAcceleratorKey field.
inline
      UInt32  MenuItemBase::getAcceleratorKey(void) const
{
    return _sfAcceleratorKey.getValue();
}

//! Set the value of the MenuItem::_sfAcceleratorKey field.
inline
void MenuItemBase::setAcceleratorKey(const UInt32 value)
{
    editSField(AcceleratorKeyFieldMask);

    _sfAcceleratorKey.setValue(value);
}
//! Get the value of the MenuItem::_sfMnemonicKey field.

inline
UInt32 &MenuItemBase::editMnemonicKey(void)
{
    editSField(MnemonicKeyFieldMask);

    return _sfMnemonicKey.getValue();
}

//! Get the value of the MenuItem::_sfMnemonicKey field.
inline
      UInt32  MenuItemBase::getMnemonicKey(void) const
{
    return _sfMnemonicKey.getValue();
}

//! Set the value of the MenuItem::_sfMnemonicKey field.
inline
void MenuItemBase::setMnemonicKey(const UInt32 value)
{
    editSField(MnemonicKeyFieldMask);

    _sfMnemonicKey.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void MenuItemBase::execSync (      MenuItemBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ParentMenuFieldMask & whichField))
        _sfParentMenu.syncWith(pFrom->_sfParentMenu);

    if(FieldBits::NoField != (AcceleratorModifiersFieldMask & whichField))
        _sfAcceleratorModifiers.syncWith(pFrom->_sfAcceleratorModifiers);

    if(FieldBits::NoField != (AcceleratorKeyFieldMask & whichField))
        _sfAcceleratorKey.syncWith(pFrom->_sfAcceleratorKey);

    if(FieldBits::NoField != (MnemonicKeyFieldMask & whichField))
        _sfMnemonicKey.syncWith(pFrom->_sfMnemonicKey);
}
#endif


inline
const Char8 *MenuItemBase::getClassname(void)
{
    return "MenuItem";
}
OSG_GEN_CONTAINERPTR(MenuItem);

OSG_END_NAMESPACE
