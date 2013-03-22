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
 **     class TableColumn!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include "OSGChangeEventDetails.h"

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TableColumnBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TableColumnBase::getClassTypeId(void)
{
    return _type.getId();
}
//! access the producer type of the class
inline
const EventProducerType &TableColumnBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TableColumnBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
OSG::UInt16 TableColumnBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TableColumn::_sfMaxWidth field.

inline
UInt32 &TableColumnBase::editMaxWidth(void)
{
    editSField(MaxWidthFieldMask);

    return _sfMaxWidth.getValue();
}

//! Get the value of the TableColumn::_sfMaxWidth field.
inline
      UInt32  TableColumnBase::getMaxWidth(void) const
{
    return _sfMaxWidth.getValue();
}

//! Set the value of the TableColumn::_sfMaxWidth field.
inline
void TableColumnBase::setMaxWidth(const UInt32 value)
{
    editSField(MaxWidthFieldMask);

    _sfMaxWidth.setValue(value);
}
//! Get the value of the TableColumn::_sfMinWidth field.

inline
UInt32 &TableColumnBase::editMinWidth(void)
{
    editSField(MinWidthFieldMask);

    return _sfMinWidth.getValue();
}

//! Get the value of the TableColumn::_sfMinWidth field.
inline
      UInt32  TableColumnBase::getMinWidth(void) const
{
    return _sfMinWidth.getValue();
}

//! Set the value of the TableColumn::_sfMinWidth field.
inline
void TableColumnBase::setMinWidth(const UInt32 value)
{
    editSField(MinWidthFieldMask);

    _sfMinWidth.setValue(value);
}
//! Get the value of the TableColumn::_sfModelIndex field.

inline
UInt32 &TableColumnBase::editModelIndex(void)
{
    editSField(ModelIndexFieldMask);

    return _sfModelIndex.getValue();
}

//! Get the value of the TableColumn::_sfModelIndex field.
inline
      UInt32  TableColumnBase::getModelIndex(void) const
{
    return _sfModelIndex.getValue();
}

//! Set the value of the TableColumn::_sfModelIndex field.
inline
void TableColumnBase::setModelIndex(const UInt32 value)
{
    editSField(ModelIndexFieldMask);

    _sfModelIndex.setValue(value);
}
//! Get the value of the TableColumn::_sfPreferredWidth field.

inline
UInt32 &TableColumnBase::editPreferredWidth(void)
{
    editSField(PreferredWidthFieldMask);

    return _sfPreferredWidth.getValue();
}

//! Get the value of the TableColumn::_sfPreferredWidth field.
inline
      UInt32  TableColumnBase::getPreferredWidth(void) const
{
    return _sfPreferredWidth.getValue();
}

//! Set the value of the TableColumn::_sfPreferredWidth field.
inline
void TableColumnBase::setPreferredWidth(const UInt32 value)
{
    editSField(PreferredWidthFieldMask);

    _sfPreferredWidth.setValue(value);
}
//! Get the value of the TableColumn::_sfWidth field.

inline
UInt32 &TableColumnBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the TableColumn::_sfWidth field.
inline
      UInt32  TableColumnBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the TableColumn::_sfWidth field.
inline
void TableColumnBase::setWidth(const UInt32 value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the TableColumn::_sfResizable field.

inline
bool &TableColumnBase::editResizable(void)
{
    editSField(ResizableFieldMask);

    return _sfResizable.getValue();
}

//! Get the value of the TableColumn::_sfResizable field.
inline
      bool  TableColumnBase::getResizable(void) const
{
    return _sfResizable.getValue();
}

//! Set the value of the TableColumn::_sfResizable field.
inline
void TableColumnBase::setResizable(const bool value)
{
    editSField(ResizableFieldMask);

    _sfResizable.setValue(value);
}

//! Get the value of the TableColumn::_sfCellEditor field.
inline
TableCellEditor * TableColumnBase::getCellEditor(void) const
{
    return _sfCellEditor.getValue();
}

//! Set the value of the TableColumn::_sfCellEditor field.
inline
void TableColumnBase::setCellEditor(TableCellEditor * const value)
{
    editSField(CellEditorFieldMask);

    _sfCellEditor.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TableColumnBase::execSync (      TableColumnBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (MaxWidthFieldMask & whichField))
        _sfMaxWidth.syncWith(pFrom->_sfMaxWidth);

    if(FieldBits::NoField != (MinWidthFieldMask & whichField))
        _sfMinWidth.syncWith(pFrom->_sfMinWidth);

    if(FieldBits::NoField != (ModelIndexFieldMask & whichField))
        _sfModelIndex.syncWith(pFrom->_sfModelIndex);

    if(FieldBits::NoField != (PreferredWidthFieldMask & whichField))
        _sfPreferredWidth.syncWith(pFrom->_sfPreferredWidth);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
        _sfResizable.syncWith(pFrom->_sfResizable);

    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
        _sfCellEditor.syncWith(pFrom->_sfCellEditor);
}
#endif


inline
const Char8 *TableColumnBase::getClassname(void)
{
    return "TableColumn";
}

inline
UInt32 TableColumnBase::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *TableColumnBase::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *TableColumnBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 TableColumnBase::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  TableColumnBase::connectFieldChanged(const FieldChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _FieldChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TableColumnBase::connectFieldChanged(const FieldChangedEventType::group_type &group,
                                                    const FieldChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _FieldChangedEvent.connect(group, listener, at);
}

inline
void  TableColumnBase::disconnectFieldChanged(const FieldChangedEventType::group_type &group)
{
    _FieldChangedEvent.disconnect(group);
}

inline
void  TableColumnBase::disconnectAllSlotsFieldChanged(void)
{
    _FieldChangedEvent.disconnect_all_slots();
}

inline
bool  TableColumnBase::isEmptyFieldChanged(void) const
{
    return _FieldChangedEvent.empty();
}

inline
UInt32  TableColumnBase::numSlotsFieldChanged(void) const
{
    return _FieldChangedEvent.num_slots();
}

inline
void TableColumnBase::produceFieldChanged(FieldChangedEventDetailsType* const e)
{
    produceEvent(FieldChangedEventId, e);
}

OSG_GEN_CONTAINERPTR(TableColumn);

OSG_END_NAMESPACE
