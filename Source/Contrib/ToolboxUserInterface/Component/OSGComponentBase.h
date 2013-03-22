/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class Component
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOMPONENTBASE_H_
#define _OSGCOMPONENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGVecFields.h"               // Position type
#include "OSGBaseFields.h"              // State type
#include "OSGLayoutConstraintsFields.h" // Constraints type
#include "OSGBorderFields.h"            // Border type
#include "OSGLayerFields.h"             // Background type
#include "OSGSysFields.h"               // DragEnabled type
#include "OSGComponentFields.h"         // ToolTip type
#include "OSGFieldContainerFields.h"    // ParentContainer type
#include "OSGPopupMenuFields.h"         // PopupMenu type
#include "OSGComponentEventSourceFields.h" // EventSource type

#include "OSGComponentFields.h"

OSG_BEGIN_NAMESPACE


class Component;

//! \brief Component Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING ComponentBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Component);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PositionFieldId = Inherited::NextFieldId,
        ClipBoundsFieldId = PositionFieldId + 1,
        MinSizeFieldId = ClipBoundsFieldId + 1,
        MaxSizeFieldId = MinSizeFieldId + 1,
        PreferredSizeFieldId = MaxSizeFieldId + 1,
        SizeFieldId = PreferredSizeFieldId + 1,
        StateFieldId = SizeFieldId + 1,
        ConstraintsFieldId = StateFieldId + 1,
        BorderFieldId = ConstraintsFieldId + 1,
        BackgroundFieldId = BorderFieldId + 1,
        DisabledBorderFieldId = BackgroundFieldId + 1,
        DisabledBackgroundFieldId = DisabledBorderFieldId + 1,
        DragEnabledFieldId = DisabledBackgroundFieldId + 1,
        ScrollTrackingCharacteristicsFieldId = DragEnabledFieldId + 1,
        FocusedBorderFieldId = ScrollTrackingCharacteristicsFieldId + 1,
        FocusedBackgroundFieldId = FocusedBorderFieldId + 1,
        RolloverBorderFieldId = FocusedBackgroundFieldId + 1,
        RolloverBackgroundFieldId = RolloverBorderFieldId + 1,
        FocusedForegroundFieldId = RolloverBackgroundFieldId + 1,
        RolloverForegroundFieldId = FocusedForegroundFieldId + 1,
        DisabledForegroundFieldId = RolloverForegroundFieldId + 1,
        ForegroundFieldId = DisabledForegroundFieldId + 1,
        ToolTipFieldId = ForegroundFieldId + 1,
        OpacityFieldId = ToolTipFieldId + 1,
        ParentContainerFieldId = OpacityFieldId + 1,
        ClippingFieldId = ParentContainerFieldId + 1,
        PopupMenuFieldId = ClippingFieldId + 1,
        CursorFieldId = PopupMenuFieldId + 1,
        EventSourceFieldId = CursorFieldId + 1,
        NextFieldId = EventSourceFieldId + 1
    };

    static const OSG::BitVector PositionFieldMask =
        (TypeTraits<BitVector>::One << PositionFieldId);
    static const OSG::BitVector ClipBoundsFieldMask =
        (TypeTraits<BitVector>::One << ClipBoundsFieldId);
    static const OSG::BitVector MinSizeFieldMask =
        (TypeTraits<BitVector>::One << MinSizeFieldId);
    static const OSG::BitVector MaxSizeFieldMask =
        (TypeTraits<BitVector>::One << MaxSizeFieldId);
    static const OSG::BitVector PreferredSizeFieldMask =
        (TypeTraits<BitVector>::One << PreferredSizeFieldId);
    static const OSG::BitVector SizeFieldMask =
        (TypeTraits<BitVector>::One << SizeFieldId);
    static const OSG::BitVector StateFieldMask =
        (TypeTraits<BitVector>::One << StateFieldId);
    static const OSG::BitVector ConstraintsFieldMask =
        (TypeTraits<BitVector>::One << ConstraintsFieldId);
    static const OSG::BitVector BorderFieldMask =
        (TypeTraits<BitVector>::One << BorderFieldId);
    static const OSG::BitVector BackgroundFieldMask =
        (TypeTraits<BitVector>::One << BackgroundFieldId);
    static const OSG::BitVector DisabledBorderFieldMask =
        (TypeTraits<BitVector>::One << DisabledBorderFieldId);
    static const OSG::BitVector DisabledBackgroundFieldMask =
        (TypeTraits<BitVector>::One << DisabledBackgroundFieldId);
    static const OSG::BitVector DragEnabledFieldMask =
        (TypeTraits<BitVector>::One << DragEnabledFieldId);
    static const OSG::BitVector ScrollTrackingCharacteristicsFieldMask =
        (TypeTraits<BitVector>::One << ScrollTrackingCharacteristicsFieldId);
    static const OSG::BitVector FocusedBorderFieldMask =
        (TypeTraits<BitVector>::One << FocusedBorderFieldId);
    static const OSG::BitVector FocusedBackgroundFieldMask =
        (TypeTraits<BitVector>::One << FocusedBackgroundFieldId);
    static const OSG::BitVector RolloverBorderFieldMask =
        (TypeTraits<BitVector>::One << RolloverBorderFieldId);
    static const OSG::BitVector RolloverBackgroundFieldMask =
        (TypeTraits<BitVector>::One << RolloverBackgroundFieldId);
    static const OSG::BitVector FocusedForegroundFieldMask =
        (TypeTraits<BitVector>::One << FocusedForegroundFieldId);
    static const OSG::BitVector RolloverForegroundFieldMask =
        (TypeTraits<BitVector>::One << RolloverForegroundFieldId);
    static const OSG::BitVector DisabledForegroundFieldMask =
        (TypeTraits<BitVector>::One << DisabledForegroundFieldId);
    static const OSG::BitVector ForegroundFieldMask =
        (TypeTraits<BitVector>::One << ForegroundFieldId);
    static const OSG::BitVector ToolTipFieldMask =
        (TypeTraits<BitVector>::One << ToolTipFieldId);
    static const OSG::BitVector OpacityFieldMask =
        (TypeTraits<BitVector>::One << OpacityFieldId);
    static const OSG::BitVector ParentContainerFieldMask =
        (TypeTraits<BitVector>::One << ParentContainerFieldId);
    static const OSG::BitVector ClippingFieldMask =
        (TypeTraits<BitVector>::One << ClippingFieldId);
    static const OSG::BitVector PopupMenuFieldMask =
        (TypeTraits<BitVector>::One << PopupMenuFieldId);
    static const OSG::BitVector CursorFieldMask =
        (TypeTraits<BitVector>::One << CursorFieldId);
    static const OSG::BitVector EventSourceFieldMask =
        (TypeTraits<BitVector>::One << EventSourceFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFPnt2f           SFPositionType;
    typedef SFPnt4f           SFClipBoundsType;
    typedef SFVec2f           SFMinSizeType;
    typedef SFVec2f           SFMaxSizeType;
    typedef SFVec2f           SFPreferredSizeType;
    typedef SFVec2f           SFSizeType;
    typedef SFBitVector       SFStateType;
    typedef SFUnrecChildLayoutConstraintsPtr SFConstraintsType;
    typedef SFUnrecBorderPtr  SFBorderType;
    typedef SFUnrecLayerPtr   SFBackgroundType;
    typedef SFUnrecBorderPtr  SFDisabledBorderType;
    typedef SFUnrecLayerPtr   SFDisabledBackgroundType;
    typedef SFBool            SFDragEnabledType;
    typedef SFUInt16          SFScrollTrackingCharacteristicsType;
    typedef SFUnrecBorderPtr  SFFocusedBorderType;
    typedef SFUnrecLayerPtr   SFFocusedBackgroundType;
    typedef SFUnrecBorderPtr  SFRolloverBorderType;
    typedef SFUnrecLayerPtr   SFRolloverBackgroundType;
    typedef SFUnrecLayerPtr   SFFocusedForegroundType;
    typedef SFUnrecLayerPtr   SFRolloverForegroundType;
    typedef SFUnrecLayerPtr   SFDisabledForegroundType;
    typedef SFUnrecLayerPtr   SFForegroundType;
    typedef SFUnrecComponentPtr SFToolTipType;
    typedef SFReal32          SFOpacityType;
    typedef SFParentFieldContainerPtr SFParentContainerType;
    typedef SFBool            SFClippingType;
    typedef SFUnrecPopupMenuPtr SFPopupMenuType;
    typedef SFUInt32          SFCursorType;
    typedef SFUnrecComponentEventSourcePtr SFEventSourceType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


    virtual       SFPnt2f             *editSFPosition       (void);
    virtual const SFPnt2f             *getSFPosition        (void) const;

    virtual       SFVec2f             *editSFMinSize        (void);
    virtual const SFVec2f             *getSFMinSize         (void) const;

    virtual       SFVec2f             *editSFMaxSize        (void);
    virtual const SFVec2f             *getSFMaxSize         (void) const;

    virtual       SFVec2f             *editSFPreferredSize  (void);
    virtual const SFVec2f             *getSFPreferredSize   (void) const;

    virtual       SFVec2f             *editSFSize           (void);
    virtual const SFVec2f             *getSFSize            (void) const;

    virtual       SFBitVector         *editSFState          (void);
    virtual const SFBitVector         *getSFState           (void) const;
    virtual const SFUnrecChildLayoutConstraintsPtr *getSFConstraints    (void) const;
    virtual       SFUnrecChildLayoutConstraintsPtr *editSFConstraints    (void);
    virtual const SFUnrecBorderPtr    *getSFBorder         (void) const;
    virtual       SFUnrecBorderPtr    *editSFBorder         (void);
    virtual const SFUnrecLayerPtr     *getSFBackground     (void) const;
    virtual       SFUnrecLayerPtr     *editSFBackground     (void);
    virtual const SFUnrecBorderPtr    *getSFDisabledBorder (void) const;
    virtual       SFUnrecBorderPtr    *editSFDisabledBorder (void);
    virtual const SFUnrecLayerPtr     *getSFDisabledBackground(void) const;
    virtual       SFUnrecLayerPtr     *editSFDisabledBackground(void);

    virtual       SFBool              *editSFDragEnabled    (void);
    virtual const SFBool              *getSFDragEnabled     (void) const;

    virtual       SFUInt16            *editSFScrollTrackingCharacteristics(void);
    virtual const SFUInt16            *getSFScrollTrackingCharacteristics (void) const;
    virtual const SFUnrecBorderPtr    *getSFFocusedBorder  (void) const;
    virtual       SFUnrecBorderPtr    *editSFFocusedBorder  (void);
    virtual const SFUnrecLayerPtr     *getSFFocusedBackground(void) const;
    virtual       SFUnrecLayerPtr     *editSFFocusedBackground(void);
    virtual const SFUnrecBorderPtr    *getSFRolloverBorder (void) const;
    virtual       SFUnrecBorderPtr    *editSFRolloverBorder (void);
    virtual const SFUnrecLayerPtr     *getSFRolloverBackground(void) const;
    virtual       SFUnrecLayerPtr     *editSFRolloverBackground(void);
    virtual const SFUnrecLayerPtr     *getSFFocusedForeground(void) const;
    virtual       SFUnrecLayerPtr     *editSFFocusedForeground(void);
    virtual const SFUnrecLayerPtr     *getSFRolloverForeground(void) const;
    virtual       SFUnrecLayerPtr     *editSFRolloverForeground(void);
    virtual const SFUnrecLayerPtr     *getSFDisabledForeground(void) const;
    virtual       SFUnrecLayerPtr     *editSFDisabledForeground(void);
    virtual const SFUnrecLayerPtr     *getSFForeground     (void) const;
    virtual       SFUnrecLayerPtr     *editSFForeground     (void);
    virtual const SFUnrecComponentPtr *getSFToolTip        (void) const;
    virtual       SFUnrecComponentPtr *editSFToolTip        (void);

    virtual       SFReal32            *editSFOpacity        (void);
    virtual const SFReal32            *getSFOpacity         (void) const;

    virtual       SFBool              *editSFClipping       (void);
    virtual const SFBool              *getSFClipping        (void) const;
    virtual const SFUnrecPopupMenuPtr *getSFPopupMenu      (void) const;
    virtual       SFUnrecPopupMenuPtr *editSFPopupMenu      (void);

    virtual       SFUInt32            *editSFCursor         (void);
    virtual const SFUInt32            *getSFCursor          (void) const;
    virtual const SFUnrecComponentEventSourcePtr *getSFEventSource    (void) const;
    virtual       SFUnrecComponentEventSourcePtr *editSFEventSource    (void);


    virtual       Pnt2f               &editPosition       (void);
    virtual const Pnt2f               &getPosition        (void) const;

    virtual       Vec2f               &editMinSize        (void);
    virtual const Vec2f               &getMinSize         (void) const;

    virtual       Vec2f               &editMaxSize        (void);
    virtual const Vec2f               &getMaxSize         (void) const;

    virtual       Vec2f               &editPreferredSize  (void);
    virtual const Vec2f               &getPreferredSize   (void) const;

    virtual       Vec2f               &editSize           (void);
    virtual const Vec2f               &getSize            (void) const;

    virtual       BitVector           &editState          (void);
    virtual const BitVector           &getState           (void) const;

    virtual       LayoutConstraints * getConstraints    (void) const;

    virtual       Border * getBorder         (void) const;

    virtual       Layer * getBackground     (void) const;

    virtual       Border * getDisabledBorder (void) const;

    virtual       Layer * getDisabledBackground(void) const;

    virtual       bool                &editDragEnabled    (void);
    virtual       bool                 getDragEnabled     (void) const;

    virtual       UInt16              &editScrollTrackingCharacteristics(void);
    virtual       UInt16               getScrollTrackingCharacteristics (void) const;

    virtual       Border * getFocusedBorder  (void) const;

    virtual       Layer * getFocusedBackground(void) const;

    virtual       Border * getRolloverBorder (void) const;

    virtual       Layer * getRolloverBackground(void) const;

    virtual       Layer * getFocusedForeground(void) const;

    virtual       Layer * getRolloverForeground(void) const;

    virtual       Layer * getDisabledForeground(void) const;

    virtual       Layer * getForeground     (void) const;

    virtual       Component * getToolTip        (void) const;

    virtual       Real32              &editOpacity        (void);
    virtual       Real32               getOpacity         (void) const;

    virtual       bool                &editClipping       (void);
    virtual       bool                 getClipping        (void) const;

    virtual       PopupMenu * getPopupMenu      (void) const;

    virtual       UInt32              &editCursor         (void);
    virtual       UInt32               getCursor          (void) const;

    virtual       ComponentEventSource * getEventSource    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

    virtual void setPosition       (const Pnt2f &value);
    virtual void setMinSize        (const Vec2f &value);
    virtual void setMaxSize        (const Vec2f &value);
    virtual void setPreferredSize  (const Vec2f &value);
    virtual void setSize           (const Vec2f &value);
    virtual void setState          (const BitVector &value);
    virtual void setConstraints    (LayoutConstraints * const value);
    virtual void setBorder         (Border * const value);
    virtual void setBackground     (Layer * const value);
    virtual void setDisabledBorder (Border * const value);
    virtual void setDisabledBackground(Layer * const value);
    virtual void setDragEnabled    (const bool value);
    virtual void setScrollTrackingCharacteristics(const UInt16 value);
    virtual void setFocusedBorder  (Border * const value);
    virtual void setFocusedBackground(Layer * const value);
    virtual void setRolloverBorder (Border * const value);
    virtual void setRolloverBackground(Layer * const value);
    virtual void setFocusedForeground(Layer * const value);
    virtual void setRolloverForeground(Layer * const value);
    virtual void setDisabledForeground(Layer * const value);
    virtual void setForeground     (Layer * const value);
    virtual void setToolTip        (Component * const value);
    virtual void setOpacity        (const Real32 value);
    virtual void setClipping       (const bool value);
    virtual void setPopupMenu      (PopupMenu * const value);
    virtual void setCursor         (const UInt32 value);
    virtual void setEventSource    (ComponentEventSource * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFPnt2f           _sfPosition;
    SFPnt4f           _sfClipBounds;
    SFVec2f           _sfMinSize;
    SFVec2f           _sfMaxSize;
    SFVec2f           _sfPreferredSize;
    SFVec2f           _sfSize;
    SFBitVector       _sfState;
    SFUnrecChildLayoutConstraintsPtr _sfConstraints;
    SFUnrecBorderPtr  _sfBorder;
    SFUnrecLayerPtr   _sfBackground;
    SFUnrecBorderPtr  _sfDisabledBorder;
    SFUnrecLayerPtr   _sfDisabledBackground;
    SFBool            _sfDragEnabled;
    SFUInt16          _sfScrollTrackingCharacteristics;
    SFUnrecBorderPtr  _sfFocusedBorder;
    SFUnrecLayerPtr   _sfFocusedBackground;
    SFUnrecBorderPtr  _sfRolloverBorder;
    SFUnrecLayerPtr   _sfRolloverBackground;
    SFUnrecLayerPtr   _sfFocusedForeground;
    SFUnrecLayerPtr   _sfRolloverForeground;
    SFUnrecLayerPtr   _sfDisabledForeground;
    SFUnrecLayerPtr   _sfForeground;
    SFUnrecComponentPtr _sfToolTip;
    SFReal32          _sfOpacity;
    SFParentFieldContainerPtr _sfParentContainer;
    SFBool            _sfClipping;
    SFUnrecPopupMenuPtr _sfPopupMenu;
    SFUInt32          _sfCursor;
    SFUnrecComponentEventSourcePtr _sfEventSource;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ComponentBase(void);
    ComponentBase(const ComponentBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ComponentBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Component *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Parent linking                                               */
    /*! \{                                                                 */

    virtual bool linkParent  (FieldContainer * const pParent,
                              UInt16           const childFieldId,
                              UInt16           const parentFieldId);
    virtual bool unlinkParent(FieldContainer * const pParent,
                              UInt16           const parentFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Child linking                                                */
    /*! \{                                                                 */

    virtual bool unlinkChild(FieldContainer * const pChild,
                             UInt16           const childFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandlePosition        (void) const;
    EditFieldHandlePtr editHandlePosition       (void);
    GetFieldHandlePtr  getHandleClipBounds      (void) const;
    EditFieldHandlePtr editHandleClipBounds     (void);
    GetFieldHandlePtr  getHandleMinSize         (void) const;
    EditFieldHandlePtr editHandleMinSize        (void);
    GetFieldHandlePtr  getHandleMaxSize         (void) const;
    EditFieldHandlePtr editHandleMaxSize        (void);
    GetFieldHandlePtr  getHandlePreferredSize   (void) const;
    EditFieldHandlePtr editHandlePreferredSize  (void);
    GetFieldHandlePtr  getHandleSize            (void) const;
    EditFieldHandlePtr editHandleSize           (void);
    GetFieldHandlePtr  getHandleState           (void) const;
    EditFieldHandlePtr editHandleState          (void);
    GetFieldHandlePtr  getHandleConstraints     (void) const;
    EditFieldHandlePtr editHandleConstraints    (void);
    GetFieldHandlePtr  getHandleBorder          (void) const;
    EditFieldHandlePtr editHandleBorder         (void);
    GetFieldHandlePtr  getHandleBackground      (void) const;
    EditFieldHandlePtr editHandleBackground     (void);
    GetFieldHandlePtr  getHandleDisabledBorder  (void) const;
    EditFieldHandlePtr editHandleDisabledBorder (void);
    GetFieldHandlePtr  getHandleDisabledBackground (void) const;
    EditFieldHandlePtr editHandleDisabledBackground(void);
    GetFieldHandlePtr  getHandleDragEnabled     (void) const;
    EditFieldHandlePtr editHandleDragEnabled    (void);
    GetFieldHandlePtr  getHandleScrollTrackingCharacteristics (void) const;
    EditFieldHandlePtr editHandleScrollTrackingCharacteristics(void);
    GetFieldHandlePtr  getHandleFocusedBorder   (void) const;
    EditFieldHandlePtr editHandleFocusedBorder  (void);
    GetFieldHandlePtr  getHandleFocusedBackground (void) const;
    EditFieldHandlePtr editHandleFocusedBackground(void);
    GetFieldHandlePtr  getHandleRolloverBorder  (void) const;
    EditFieldHandlePtr editHandleRolloverBorder (void);
    GetFieldHandlePtr  getHandleRolloverBackground (void) const;
    EditFieldHandlePtr editHandleRolloverBackground(void);
    GetFieldHandlePtr  getHandleFocusedForeground (void) const;
    EditFieldHandlePtr editHandleFocusedForeground(void);
    GetFieldHandlePtr  getHandleRolloverForeground (void) const;
    EditFieldHandlePtr editHandleRolloverForeground(void);
    GetFieldHandlePtr  getHandleDisabledForeground (void) const;
    EditFieldHandlePtr editHandleDisabledForeground(void);
    GetFieldHandlePtr  getHandleForeground      (void) const;
    EditFieldHandlePtr editHandleForeground     (void);
    GetFieldHandlePtr  getHandleToolTip         (void) const;
    EditFieldHandlePtr editHandleToolTip        (void);
    GetFieldHandlePtr  getHandleOpacity         (void) const;
    EditFieldHandlePtr editHandleOpacity        (void);
    GetFieldHandlePtr  getHandleParentContainer (void) const;
    EditFieldHandlePtr editHandleParentContainer(void);
    GetFieldHandlePtr  getHandleClipping        (void) const;
    EditFieldHandlePtr editHandleClipping       (void);
    GetFieldHandlePtr  getHandlePopupMenu       (void) const;
    EditFieldHandlePtr editHandlePopupMenu      (void);
    GetFieldHandlePtr  getHandleCursor          (void) const;
    EditFieldHandlePtr editHandleCursor         (void);
    GetFieldHandlePtr  getHandleEventSource     (void) const;
    EditFieldHandlePtr editHandleEventSource    (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


    virtual       SFPnt4f             *editSFClipBounds     (void);
    virtual const SFPnt4f             *getSFClipBounds      (void) const;


    virtual       Pnt4f               &editClipBounds     (void);
    virtual const Pnt4f               &getClipBounds      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

    virtual void setClipBounds     (const Pnt4f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      ComponentBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ComponentBase &source);
};

typedef ComponentBase *ComponentBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCOMPONENTBASE_H_ */