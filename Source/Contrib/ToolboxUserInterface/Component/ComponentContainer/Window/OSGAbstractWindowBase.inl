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
 **     class AbstractWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &AbstractWindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 AbstractWindowBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 AbstractWindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the AbstractWindow::_sfClosable field.

inline
bool &AbstractWindowBase::editClosable(void)
{
    editSField(ClosableFieldMask);

    return _sfClosable.getValue();
}

//! Get the value of the AbstractWindow::_sfClosable field.
inline
      bool  AbstractWindowBase::getClosable(void) const
{
    return _sfClosable.getValue();
}

//! Set the value of the AbstractWindow::_sfClosable field.
inline
void AbstractWindowBase::setClosable(const bool value)
{
    editSField(ClosableFieldMask);

    _sfClosable.setValue(value);
}
//! Get the value of the AbstractWindow::_sfIconable field.

inline
bool &AbstractWindowBase::editIconable(void)
{
    editSField(IconableFieldMask);

    return _sfIconable.getValue();
}

//! Get the value of the AbstractWindow::_sfIconable field.
inline
      bool  AbstractWindowBase::getIconable(void) const
{
    return _sfIconable.getValue();
}

//! Set the value of the AbstractWindow::_sfIconable field.
inline
void AbstractWindowBase::setIconable(const bool value)
{
    editSField(IconableFieldMask);

    _sfIconable.setValue(value);
}
//! Get the value of the AbstractWindow::_sfMaximizable field.

inline
bool &AbstractWindowBase::editMaximizable(void)
{
    editSField(MaximizableFieldMask);

    return _sfMaximizable.getValue();
}

//! Get the value of the AbstractWindow::_sfMaximizable field.
inline
      bool  AbstractWindowBase::getMaximizable(void) const
{
    return _sfMaximizable.getValue();
}

//! Set the value of the AbstractWindow::_sfMaximizable field.
inline
void AbstractWindowBase::setMaximizable(const bool value)
{
    editSField(MaximizableFieldMask);

    _sfMaximizable.setValue(value);
}
//! Get the value of the AbstractWindow::_sfIsClosed field.

inline
bool &AbstractWindowBase::editIsClosed(void)
{
    editSField(IsClosedFieldMask);

    return _sfIsClosed.getValue();
}

//! Get the value of the AbstractWindow::_sfIsClosed field.
inline
      bool  AbstractWindowBase::getIsClosed(void) const
{
    return _sfIsClosed.getValue();
}

//! Set the value of the AbstractWindow::_sfIsClosed field.
inline
void AbstractWindowBase::setIsClosed(const bool value)
{
    editSField(IsClosedFieldMask);

    _sfIsClosed.setValue(value);
}
//! Get the value of the AbstractWindow::_sfIsIcon field.

inline
bool &AbstractWindowBase::editIsIcon(void)
{
    editSField(IsIconFieldMask);

    return _sfIsIcon.getValue();
}

//! Get the value of the AbstractWindow::_sfIsIcon field.
inline
      bool  AbstractWindowBase::getIsIcon(void) const
{
    return _sfIsIcon.getValue();
}

//! Set the value of the AbstractWindow::_sfIsIcon field.
inline
void AbstractWindowBase::setIsIcon(const bool value)
{
    editSField(IsIconFieldMask);

    _sfIsIcon.setValue(value);
}
//! Get the value of the AbstractWindow::_sfIsMaximized field.

inline
bool &AbstractWindowBase::editIsMaximized(void)
{
    editSField(IsMaximizedFieldMask);

    return _sfIsMaximized.getValue();
}

//! Get the value of the AbstractWindow::_sfIsMaximized field.
inline
      bool  AbstractWindowBase::getIsMaximized(void) const
{
    return _sfIsMaximized.getValue();
}

//! Set the value of the AbstractWindow::_sfIsMaximized field.
inline
void AbstractWindowBase::setIsMaximized(const bool value)
{
    editSField(IsMaximizedFieldMask);

    _sfIsMaximized.setValue(value);
}
//! Get the value of the AbstractWindow::_sfResizable field.

inline
bool &AbstractWindowBase::editResizable(void)
{
    editSField(ResizableFieldMask);

    return _sfResizable.getValue();
}

//! Get the value of the AbstractWindow::_sfResizable field.
inline
      bool  AbstractWindowBase::getResizable(void) const
{
    return _sfResizable.getValue();
}

//! Set the value of the AbstractWindow::_sfResizable field.
inline
void AbstractWindowBase::setResizable(const bool value)
{
    editSField(ResizableFieldMask);

    _sfResizable.setValue(value);
}
//! Get the value of the AbstractWindow::_sfIsSelected field.

inline
bool &AbstractWindowBase::editIsSelected(void)
{
    editSField(IsSelectedFieldMask);

    return _sfIsSelected.getValue();
}

//! Get the value of the AbstractWindow::_sfIsSelected field.
inline
      bool  AbstractWindowBase::getIsSelected(void) const
{
    return _sfIsSelected.getValue();
}

//! Set the value of the AbstractWindow::_sfIsSelected field.
inline
void AbstractWindowBase::setIsSelected(const bool value)
{
    editSField(IsSelectedFieldMask);

    _sfIsSelected.setValue(value);
}
//! Get the value of the AbstractWindow::_sfTitle field.

inline
std::string &AbstractWindowBase::editTitle(void)
{
    editSField(TitleFieldMask);

    return _sfTitle.getValue();
}

//! Get the value of the AbstractWindow::_sfTitle field.
inline
const std::string &AbstractWindowBase::getTitle(void) const
{
    return _sfTitle.getValue();
}

//! Set the value of the AbstractWindow::_sfTitle field.
inline
void AbstractWindowBase::setTitle(const std::string &value)
{
    editSField(TitleFieldMask);

    _sfTitle.setValue(value);
}
//! Get the value of the AbstractWindow::_sfModal field.

inline
bool &AbstractWindowBase::editModal(void)
{
    editSField(ModalFieldMask);

    return _sfModal.getValue();
}

//! Get the value of the AbstractWindow::_sfModal field.
inline
      bool  AbstractWindowBase::getModal(void) const
{
    return _sfModal.getValue();
}

//! Set the value of the AbstractWindow::_sfModal field.
inline
void AbstractWindowBase::setModal(const bool value)
{
    editSField(ModalFieldMask);

    _sfModal.setValue(value);
}
//! Get the value of the AbstractWindow::_sfAllwaysOnTop field.

inline
bool &AbstractWindowBase::editAllwaysOnTop(void)
{
    editSField(AllwaysOnTopFieldMask);

    return _sfAllwaysOnTop.getValue();
}

//! Get the value of the AbstractWindow::_sfAllwaysOnTop field.
inline
      bool  AbstractWindowBase::getAllwaysOnTop(void) const
{
    return _sfAllwaysOnTop.getValue();
}

//! Set the value of the AbstractWindow::_sfAllwaysOnTop field.
inline
void AbstractWindowBase::setAllwaysOnTop(const bool value)
{
    editSField(AllwaysOnTopFieldMask);

    _sfAllwaysOnTop.setValue(value);
}
//! Get the value of the AbstractWindow::_sfDrawTitlebar field.

inline
bool &AbstractWindowBase::editDrawTitlebar(void)
{
    editSField(DrawTitlebarFieldMask);

    return _sfDrawTitlebar.getValue();
}

//! Get the value of the AbstractWindow::_sfDrawTitlebar field.
inline
      bool  AbstractWindowBase::getDrawTitlebar(void) const
{
    return _sfDrawTitlebar.getValue();
}

//! Set the value of the AbstractWindow::_sfDrawTitlebar field.
inline
void AbstractWindowBase::setDrawTitlebar(const bool value)
{
    editSField(DrawTitlebarFieldMask);

    _sfDrawTitlebar.setValue(value);
}
//! Get the value of the AbstractWindow::_sfDrawDecorations field.

inline
bool &AbstractWindowBase::editDrawDecorations(void)
{
    editSField(DrawDecorationsFieldMask);

    return _sfDrawDecorations.getValue();
}

//! Get the value of the AbstractWindow::_sfDrawDecorations field.
inline
      bool  AbstractWindowBase::getDrawDecorations(void) const
{
    return _sfDrawDecorations.getValue();
}

//! Set the value of the AbstractWindow::_sfDrawDecorations field.
inline
void AbstractWindowBase::setDrawDecorations(const bool value)
{
    editSField(DrawDecorationsFieldMask);

    _sfDrawDecorations.setValue(value);
}
//! Get the value of the AbstractWindow::_sfLockInput field.

inline
bool &AbstractWindowBase::editLockInput(void)
{
    editSField(LockInputFieldMask);

    return _sfLockInput.getValue();
}

//! Get the value of the AbstractWindow::_sfLockInput field.
inline
      bool  AbstractWindowBase::getLockInput(void) const
{
    return _sfLockInput.getValue();
}

//! Set the value of the AbstractWindow::_sfLockInput field.
inline
void AbstractWindowBase::setLockInput(const bool value)
{
    editSField(LockInputFieldMask);

    _sfLockInput.setValue(value);
}
//! Get the value of the AbstractWindow::_sfAlignmentInDrawingSurface field.

inline
Vec2f &AbstractWindowBase::editAlignmentInDrawingSurface(void)
{
    editSField(AlignmentInDrawingSurfaceFieldMask);

    return _sfAlignmentInDrawingSurface.getValue();
}

//! Get the value of the AbstractWindow::_sfAlignmentInDrawingSurface field.
inline
const Vec2f &AbstractWindowBase::getAlignmentInDrawingSurface(void) const
{
    return _sfAlignmentInDrawingSurface.getValue();
}

//! Set the value of the AbstractWindow::_sfAlignmentInDrawingSurface field.
inline
void AbstractWindowBase::setAlignmentInDrawingSurface(const Vec2f &value)
{
    editSField(AlignmentInDrawingSurfaceFieldMask);

    _sfAlignmentInDrawingSurface.setValue(value);
}
//! Get the value of the AbstractWindow::_sfScalingInDrawingSurface field.

inline
Vec2f &AbstractWindowBase::editScalingInDrawingSurface(void)
{
    editSField(ScalingInDrawingSurfaceFieldMask);

    return _sfScalingInDrawingSurface.getValue();
}

//! Get the value of the AbstractWindow::_sfScalingInDrawingSurface field.
inline
const Vec2f &AbstractWindowBase::getScalingInDrawingSurface(void) const
{
    return _sfScalingInDrawingSurface.getValue();
}

//! Set the value of the AbstractWindow::_sfScalingInDrawingSurface field.
inline
void AbstractWindowBase::setScalingInDrawingSurface(const Vec2f &value)
{
    editSField(ScalingInDrawingSurfaceFieldMask);

    _sfScalingInDrawingSurface.setValue(value);
}
//! Get the value of the AbstractWindow::_sfResizeModifyCursorWidth field.

inline
UInt32 &AbstractWindowBase::editResizeModifyCursorWidth(void)
{
    editSField(ResizeModifyCursorWidthFieldMask);

    return _sfResizeModifyCursorWidth.getValue();
}

//! Get the value of the AbstractWindow::_sfResizeModifyCursorWidth field.
inline
      UInt32  AbstractWindowBase::getResizeModifyCursorWidth(void) const
{
    return _sfResizeModifyCursorWidth.getValue();
}

//! Set the value of the AbstractWindow::_sfResizeModifyCursorWidth field.
inline
void AbstractWindowBase::setResizeModifyCursorWidth(const UInt32 value)
{
    editSField(ResizeModifyCursorWidthFieldMask);

    _sfResizeModifyCursorWidth.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void AbstractWindowBase::execSync (      AbstractWindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ParentDrawingSurfaceFieldMask & whichField))
        _sfParentDrawingSurface.syncWith(pFrom->_sfParentDrawingSurface);

    if(FieldBits::NoField != (ClosableFieldMask & whichField))
        _sfClosable.syncWith(pFrom->_sfClosable);

    if(FieldBits::NoField != (IconableFieldMask & whichField))
        _sfIconable.syncWith(pFrom->_sfIconable);

    if(FieldBits::NoField != (MaximizableFieldMask & whichField))
        _sfMaximizable.syncWith(pFrom->_sfMaximizable);

    if(FieldBits::NoField != (IsClosedFieldMask & whichField))
        _sfIsClosed.syncWith(pFrom->_sfIsClosed);

    if(FieldBits::NoField != (IsIconFieldMask & whichField))
        _sfIsIcon.syncWith(pFrom->_sfIsIcon);

    if(FieldBits::NoField != (IsMaximizedFieldMask & whichField))
        _sfIsMaximized.syncWith(pFrom->_sfIsMaximized);

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
        _sfResizable.syncWith(pFrom->_sfResizable);

    if(FieldBits::NoField != (IsSelectedFieldMask & whichField))
        _sfIsSelected.syncWith(pFrom->_sfIsSelected);

    if(FieldBits::NoField != (TitleFieldMask & whichField))
        _sfTitle.syncWith(pFrom->_sfTitle);

    if(FieldBits::NoField != (DesktopIconFieldMask & whichField))
        _sfDesktopIcon.syncWith(pFrom->_sfDesktopIcon);

    if(FieldBits::NoField != (ModalFieldMask & whichField))
        _sfModal.syncWith(pFrom->_sfModal);

    if(FieldBits::NoField != (AllwaysOnTopFieldMask & whichField))
        _sfAllwaysOnTop.syncWith(pFrom->_sfAllwaysOnTop);

    if(FieldBits::NoField != (DrawTitlebarFieldMask & whichField))
        _sfDrawTitlebar.syncWith(pFrom->_sfDrawTitlebar);

    if(FieldBits::NoField != (DrawDecorationsFieldMask & whichField))
        _sfDrawDecorations.syncWith(pFrom->_sfDrawDecorations);

    if(FieldBits::NoField != (LockInputFieldMask & whichField))
        _sfLockInput.syncWith(pFrom->_sfLockInput);

    if(FieldBits::NoField != (AlignmentInDrawingSurfaceFieldMask & whichField))
        _sfAlignmentInDrawingSurface.syncWith(pFrom->_sfAlignmentInDrawingSurface);

    if(FieldBits::NoField != (ScalingInDrawingSurfaceFieldMask & whichField))
        _sfScalingInDrawingSurface.syncWith(pFrom->_sfScalingInDrawingSurface);

    if(FieldBits::NoField != (ResizeModifyCursorWidthFieldMask & whichField))
        _sfResizeModifyCursorWidth.syncWith(pFrom->_sfResizeModifyCursorWidth);
}
#endif


inline
const Char8 *AbstractWindowBase::getClassname(void)
{
    return "AbstractWindow";
}
OSG_GEN_CONTAINERPTR(AbstractWindow);

OSG_END_NAMESPACE

