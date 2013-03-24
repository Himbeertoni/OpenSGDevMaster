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
 **     class ComboBox!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &ComboBoxBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ComboBoxBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ComboBoxBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the ComboBox::_sfExpandButton field.
inline
ToggleButton * ComboBoxBase::getExpandButton(void) const
{
    return _sfExpandButton.getValue();
}

//! Set the value of the ComboBox::_sfExpandButton field.
inline
void ComboBoxBase::setExpandButton(ToggleButton * const value)
{
    editSField(ExpandButtonFieldMask);

    _sfExpandButton.setValue(value);
}

//! Get the value of the ComboBox::_sfEditor field.
inline
ComboBoxEditor * ComboBoxBase::getEditor(void) const
{
    return _sfEditor.getValue();
}

//! Set the value of the ComboBox::_sfEditor field.
inline
void ComboBoxBase::setEditor(ComboBoxEditor * const value)
{
    editSField(EditorFieldMask);

    _sfEditor.setValue(value);
}

//! Get the value of the ComboBox::_sfModel field.
inline
ComboBoxModel * ComboBoxBase::getModel(void) const
{
    return _sfModel.getValue();
}

//! Set the value of the ComboBox::_sfModel field.
inline
void ComboBoxBase::setModel(ComboBoxModel * const value)
{
    editSField(ModelFieldMask);

    _sfModel.setValue(value);
}

//! Get the value of the ComboBox::_sfCellGenerator field.
inline
ComponentGenerator * ComboBoxBase::getCellGenerator(void) const
{
    return _sfCellGenerator.getValue();
}

//! Set the value of the ComboBox::_sfCellGenerator field.
inline
void ComboBoxBase::setCellGenerator(ComponentGenerator * const value)
{
    editSField(CellGeneratorFieldMask);

    _sfCellGenerator.setValue(value);
}

//! Get the value of the ComboBox::_sfComponentGeneratorSelectedItem field.
inline
Component * ComboBoxBase::getComponentGeneratorSelectedItem(void) const
{
    return _sfComponentGeneratorSelectedItem.getValue();
}

//! Set the value of the ComboBox::_sfComponentGeneratorSelectedItem field.
inline
void ComboBoxBase::setComponentGeneratorSelectedItem(Component * const value)
{
    editSField(ComponentGeneratorSelectedItemFieldMask);

    _sfComponentGeneratorSelectedItem.setValue(value);
}
//! Get the value of the ComboBox::_sfMaxRowCount field.

inline
UInt32 &ComboBoxBase::editMaxRowCount(void)
{
    editSField(MaxRowCountFieldMask);

    return _sfMaxRowCount.getValue();
}

//! Get the value of the ComboBox::_sfMaxRowCount field.
inline
      UInt32  ComboBoxBase::getMaxRowCount(void) const
{
    return _sfMaxRowCount.getValue();
}

//! Set the value of the ComboBox::_sfMaxRowCount field.
inline
void ComboBoxBase::setMaxRowCount(const UInt32 value)
{
    editSField(MaxRowCountFieldMask);

    _sfMaxRowCount.setValue(value);
}

//! Get the value of the ComboBox::_sfComboListPopupMenu field.
inline
ListGeneratedPopupMenu * ComboBoxBase::getComboListPopupMenu(void) const
{
    return _sfComboListPopupMenu.getValue();
}

//! Set the value of the ComboBox::_sfComboListPopupMenu field.
inline
void ComboBoxBase::setComboListPopupMenu(ListGeneratedPopupMenu * const value)
{
    editSField(ComboListPopupMenuFieldMask);

    _sfComboListPopupMenu.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ComboBoxBase::execSync (      ComboBoxBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ExpandButtonFieldMask & whichField))
        _sfExpandButton.syncWith(pFrom->_sfExpandButton);

    if(FieldBits::NoField != (EditorFieldMask & whichField))
        _sfEditor.syncWith(pFrom->_sfEditor);

    if(FieldBits::NoField != (ModelFieldMask & whichField))
        _sfModel.syncWith(pFrom->_sfModel);

    if(FieldBits::NoField != (CellGeneratorFieldMask & whichField))
        _sfCellGenerator.syncWith(pFrom->_sfCellGenerator);

    if(FieldBits::NoField != (ComponentGeneratorSelectedItemFieldMask & whichField))
        _sfComponentGeneratorSelectedItem.syncWith(pFrom->_sfComponentGeneratorSelectedItem);

    if(FieldBits::NoField != (MaxRowCountFieldMask & whichField))
        _sfMaxRowCount.syncWith(pFrom->_sfMaxRowCount);

    if(FieldBits::NoField != (ComboListPopupMenuFieldMask & whichField))
        _sfComboListPopupMenu.syncWith(pFrom->_sfComboListPopupMenu);
}
#endif


inline
const Char8 *ComboBoxBase::getClassname(void)
{
    return "ComboBox";
}
OSG_GEN_CONTAINERPTR(ComboBox);

OSG_END_NAMESPACE

