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
 **     class Component!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &ComponentBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ComponentBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ComponentBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

//Test

#ifdef OSG_MT_CPTR_ASPECT
inline
void ComponentBase::execSync (      ComponentBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pFrom->_sfPosition);

    if(FieldBits::NoField != (ClipBoundsFieldMask & whichField))
        _sfClipBounds.syncWith(pFrom->_sfClipBounds);

    if(FieldBits::NoField != (MinSizeFieldMask & whichField))
        _sfMinSize.syncWith(pFrom->_sfMinSize);

    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
        _sfMaxSize.syncWith(pFrom->_sfMaxSize);

    if(FieldBits::NoField != (PreferredSizeFieldMask & whichField))
        _sfPreferredSize.syncWith(pFrom->_sfPreferredSize);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pFrom->_sfSize);

    if(FieldBits::NoField != (StateFieldMask & whichField))
        _sfState.syncWith(pFrom->_sfState);

    if(FieldBits::NoField != (ConstraintsFieldMask & whichField))
        _sfConstraints.syncWith(pFrom->_sfConstraints);

    if(FieldBits::NoField != (BorderFieldMask & whichField))
        _sfBorder.syncWith(pFrom->_sfBorder);

    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
        _sfBackground.syncWith(pFrom->_sfBackground);

    if(FieldBits::NoField != (DisabledBorderFieldMask & whichField))
        _sfDisabledBorder.syncWith(pFrom->_sfDisabledBorder);

    if(FieldBits::NoField != (DisabledBackgroundFieldMask & whichField))
        _sfDisabledBackground.syncWith(pFrom->_sfDisabledBackground);

    if(FieldBits::NoField != (DragEnabledFieldMask & whichField))
        _sfDragEnabled.syncWith(pFrom->_sfDragEnabled);

    if(FieldBits::NoField != (ScrollTrackingCharacteristicsFieldMask & whichField))
        _sfScrollTrackingCharacteristics.syncWith(pFrom->_sfScrollTrackingCharacteristics);

    if(FieldBits::NoField != (FocusedBorderFieldMask & whichField))
        _sfFocusedBorder.syncWith(pFrom->_sfFocusedBorder);

    if(FieldBits::NoField != (FocusedBackgroundFieldMask & whichField))
        _sfFocusedBackground.syncWith(pFrom->_sfFocusedBackground);

    if(FieldBits::NoField != (RolloverBorderFieldMask & whichField))
        _sfRolloverBorder.syncWith(pFrom->_sfRolloverBorder);

    if(FieldBits::NoField != (RolloverBackgroundFieldMask & whichField))
        _sfRolloverBackground.syncWith(pFrom->_sfRolloverBackground);

    if(FieldBits::NoField != (FocusedForegroundFieldMask & whichField))
        _sfFocusedForeground.syncWith(pFrom->_sfFocusedForeground);

    if(FieldBits::NoField != (RolloverForegroundFieldMask & whichField))
        _sfRolloverForeground.syncWith(pFrom->_sfRolloverForeground);

    if(FieldBits::NoField != (DisabledForegroundFieldMask & whichField))
        _sfDisabledForeground.syncWith(pFrom->_sfDisabledForeground);

    if(FieldBits::NoField != (ForegroundFieldMask & whichField))
        _sfForeground.syncWith(pFrom->_sfForeground);

    if(FieldBits::NoField != (ToolTipFieldMask & whichField))
        _sfToolTip.syncWith(pFrom->_sfToolTip);

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
        _sfOpacity.syncWith(pFrom->_sfOpacity);

    if(FieldBits::NoField != (ParentContainerFieldMask & whichField))
        _sfParentContainer.syncWith(pFrom->_sfParentContainer);

    if(FieldBits::NoField != (ClippingFieldMask & whichField))
        _sfClipping.syncWith(pFrom->_sfClipping);

    if(FieldBits::NoField != (PopupMenuFieldMask & whichField))
        _sfPopupMenu.syncWith(pFrom->_sfPopupMenu);

    if(FieldBits::NoField != (CursorFieldMask & whichField))
        _sfCursor.syncWith(pFrom->_sfCursor);

    if(FieldBits::NoField != (EventSourceFieldMask & whichField))
        _sfEventSource.syncWith(pFrom->_sfEventSource);
}
#endif


inline
const Char8 *ComponentBase::getClassname(void)
{
    return "Component";
}
OSG_GEN_CONTAINERPTR(Component);

OSG_END_NAMESPACE

