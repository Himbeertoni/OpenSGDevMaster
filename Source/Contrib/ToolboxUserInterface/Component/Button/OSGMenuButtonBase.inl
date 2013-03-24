/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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
 **     class MenuButton!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &MenuButtonBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 MenuButtonBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 MenuButtonBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the MenuButton::_sfModel field.
inline
ListModel * MenuButtonBase::getModel(void) const
{
    return _sfModel.getValue();
}

//! Set the value of the MenuButton::_sfModel field.
inline
void MenuButtonBase::setModel(ListModel * const value)
{
    editSField(ModelFieldMask);

    _sfModel.setValue(value);
}

//! Get the value of the MenuButton::_sfCellGenerator field.
inline
ComponentGenerator * MenuButtonBase::getCellGenerator(void) const
{
    return _sfCellGenerator.getValue();
}

//! Set the value of the MenuButton::_sfCellGenerator field.
inline
void MenuButtonBase::setCellGenerator(ComponentGenerator * const value)
{
    editSField(CellGeneratorFieldMask);

    _sfCellGenerator.setValue(value);
}

//! Get the value of the MenuButton::_sfMenuButtonPopupMenu field.
inline
ListGeneratedPopupMenu * MenuButtonBase::getMenuButtonPopupMenu(void) const
{
    return _sfMenuButtonPopupMenu.getValue();
}

//! Set the value of the MenuButton::_sfMenuButtonPopupMenu field.
inline
void MenuButtonBase::setMenuButtonPopupMenu(ListGeneratedPopupMenu * const value)
{
    editSField(MenuButtonPopupMenuFieldMask);

    _sfMenuButtonPopupMenu.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void MenuButtonBase::execSync (      MenuButtonBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ModelFieldMask & whichField))
        _sfModel.syncWith(pFrom->_sfModel);

    if(FieldBits::NoField != (CellGeneratorFieldMask & whichField))
        _sfCellGenerator.syncWith(pFrom->_sfCellGenerator);

    if(FieldBits::NoField != (MenuButtonPopupMenuFieldMask & whichField))
        _sfMenuButtonPopupMenu.syncWith(pFrom->_sfMenuButtonPopupMenu);
}
#endif


inline
const Char8 *MenuButtonBase::getClassname(void)
{
    return "MenuButton";
}
OSG_GEN_CONTAINERPTR(MenuButton);

OSG_END_NAMESPACE

