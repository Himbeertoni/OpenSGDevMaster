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
 **     class TextComponent
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTCOMPONENTBASE_H_
#define _OSGTEXTCOMPONENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGComponent.h" // Parent

#include "OSGBaseFields.h"              // Text type
#include "OSGSysFields.h"               // CaretPosition type
#include "OSGUIFontFields.h"            // Font type

#include "OSGTextComponentFields.h"

#include "OSGTextEventDetailsFields.h"
#include "OSGCaretEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

class TextComponent;

//! \brief TextComponent Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING TextComponentBase : public Component
{
  public:

    typedef Component Inherited;
    typedef Component ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TextComponent);
    
    
    typedef TextEventDetails   TextValueChangedEventDetailsType;
    typedef CaretEventDetails  CaretChangedEventDetailsType;

    typedef boost::signals2::signal<void (TextEventDetails* const , UInt32), ConsumableEventCombiner> TextValueChangedEventType;
    typedef boost::signals2::signal<void (CaretEventDetails* const, UInt32), ConsumableEventCombiner> CaretChangedEventType;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        TextFieldId = Inherited::NextFieldId,
        CaretPositionFieldId = TextFieldId + 1,
        FontFieldId = CaretPositionFieldId + 1,
        SelectionBoxColorFieldId = FontFieldId + 1,
        SelectionTextColorFieldId = SelectionBoxColorFieldId + 1,
        ActiveTextColorFieldId = SelectionTextColorFieldId + 1,
        FocusedTextColorFieldId = ActiveTextColorFieldId + 1,
        RolloverTextColorFieldId = FocusedTextColorFieldId + 1,
        DisabledTextColorFieldId = RolloverTextColorFieldId + 1,
        TextColorFieldId = DisabledTextColorFieldId + 1,
        NextFieldId = TextColorFieldId + 1
    };

    static const OSG::BitVector TextFieldMask =
        (TypeTraits<BitVector>::One << TextFieldId);
    static const OSG::BitVector CaretPositionFieldMask =
        (TypeTraits<BitVector>::One << CaretPositionFieldId);
    static const OSG::BitVector FontFieldMask =
        (TypeTraits<BitVector>::One << FontFieldId);
    static const OSG::BitVector SelectionBoxColorFieldMask =
        (TypeTraits<BitVector>::One << SelectionBoxColorFieldId);
    static const OSG::BitVector SelectionTextColorFieldMask =
        (TypeTraits<BitVector>::One << SelectionTextColorFieldId);
    static const OSG::BitVector ActiveTextColorFieldMask =
        (TypeTraits<BitVector>::One << ActiveTextColorFieldId);
    static const OSG::BitVector FocusedTextColorFieldMask =
        (TypeTraits<BitVector>::One << FocusedTextColorFieldId);
    static const OSG::BitVector RolloverTextColorFieldMask =
        (TypeTraits<BitVector>::One << RolloverTextColorFieldId);
    static const OSG::BitVector DisabledTextColorFieldMask =
        (TypeTraits<BitVector>::One << DisabledTextColorFieldId);
    static const OSG::BitVector TextColorFieldMask =
        (TypeTraits<BitVector>::One << TextColorFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFString          SFTextType;
    typedef SFUInt32          SFCaretPositionType;
    typedef SFUnrecUIFontPtr  SFFontType;
    typedef SFColor4f         SFSelectionBoxColorType;
    typedef SFColor4f         SFSelectionTextColorType;
    typedef SFColor4f         SFActiveTextColorType;
    typedef SFColor4f         SFFocusedTextColorType;
    typedef SFColor4f         SFRolloverTextColorType;
    typedef SFColor4f         SFDisabledTextColorType;
    typedef SFColor4f         SFTextColorType;

    enum
    {
        TextValueChangedEventId = Inherited::NextProducedEventId,
        CaretChangedEventId = TextValueChangedEventId + 1,
        NextProducedEventId = CaretChangedEventId + 1
    };

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);
    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);

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


                  SFString            *editSFText           (void);
            const SFString            *getSFText            (void) const;

                  SFUInt32            *editSFCaretPosition  (void);
            const SFUInt32            *getSFCaretPosition   (void) const;
            const SFUnrecUIFontPtr    *getSFFont           (void) const;
                  SFUnrecUIFontPtr    *editSFFont           (void);

                  SFColor4f           *editSFSelectionBoxColor(void);
            const SFColor4f           *getSFSelectionBoxColor (void) const;

                  SFColor4f           *editSFSelectionTextColor(void);
            const SFColor4f           *getSFSelectionTextColor (void) const;

                  SFColor4f           *editSFActiveTextColor(void);
            const SFColor4f           *getSFActiveTextColor (void) const;

                  SFColor4f           *editSFFocusedTextColor(void);
            const SFColor4f           *getSFFocusedTextColor (void) const;

                  SFColor4f           *editSFRolloverTextColor(void);
            const SFColor4f           *getSFRolloverTextColor (void) const;

                  SFColor4f           *editSFDisabledTextColor(void);
            const SFColor4f           *getSFDisabledTextColor (void) const;

                  SFColor4f           *editSFTextColor      (void);
            const SFColor4f           *getSFTextColor       (void) const;


                  std::string         &editText           (void);
            const std::string         &getText            (void) const;

                  UInt32              &editCaretPosition  (void);
                  UInt32               getCaretPosition   (void) const;

                  UIFont * getFont           (void) const;

                  Color4f             &editSelectionBoxColor(void);
            const Color4f             &getSelectionBoxColor (void) const;

                  Color4f             &editSelectionTextColor(void);
            const Color4f             &getSelectionTextColor (void) const;

                  Color4f             &editActiveTextColor(void);
            const Color4f             &getActiveTextColor (void) const;

                  Color4f             &editFocusedTextColor(void);
            const Color4f             &getFocusedTextColor (void) const;

                  Color4f             &editRolloverTextColor(void);
            const Color4f             &getRolloverTextColor (void) const;

                  Color4f             &editDisabledTextColor(void);
            const Color4f             &getDisabledTextColor (void) const;

                  Color4f             &editTextColor      (void);
            const Color4f             &getTextColor       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setText           (const std::string &value);
            void setCaretPosition  (const UInt32 value);
            void setFont           (UIFont * const value);
            void setSelectionBoxColor(const Color4f &value);
            void setSelectionTextColor(const Color4f &value);
            void setActiveTextColor(const Color4f &value);
            void setFocusedTextColor(const Color4f &value);
            void setRolloverTextColor(const Color4f &value);
            void setDisabledTextColor(const Color4f &value);
            void setTextColor      (const Color4f &value);

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

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Event Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 

    
    virtual boost::signals2::connection connectEvent(UInt32 eventId, 
                                              const BaseEventType::slot_type &listener,
                                              boost::signals2::connect_position at= boost::signals2::at_back);
                                              
    virtual boost::signals2::connection connectEvent(UInt32 eventId, 
                                              const BaseEventType::group_type &group,
                                              const BaseEventType::slot_type &listener,
                                              boost::signals2::connect_position at= boost::signals2::at_back);
    
    virtual void   disconnectEvent        (UInt32 eventId, const BaseEventType::group_type &group);
    virtual void   disconnectAllSlotsEvent(UInt32 eventId);
    virtual bool   isEmptyEvent           (UInt32 eventId) const;
    virtual UInt32 numSlotsEvent          (UInt32 eventId) const;

    /*! \}                                                                 */
    /*! \name                Event Access                                 */
    /*! \{                                                                 */
    
    //TextValueChanged
    boost::signals2::connection connectTextValueChanged(const TextValueChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectTextValueChanged(const TextValueChangedEventType::group_type &group,
                                                       const TextValueChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectTextValueChanged       (const TextValueChangedEventType::group_type &group);
    void   disconnectAllSlotsTextValueChanged(void);
    bool   isEmptyTextValueChanged          (void) const;
    UInt32 numSlotsTextValueChanged         (void) const;
    
    //CaretChanged
    boost::signals2::connection connectCaretChanged   (const CaretChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectCaretChanged   (const CaretChangedEventType::group_type &group,
                                                       const CaretChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectCaretChanged           (const CaretChangedEventType::group_type &group);
    void   disconnectAllSlotsCaretChanged   (void);
    bool   isEmptyCaretChanged              (void) const;
    UInt32 numSlotsCaretChanged             (void) const;
    
    
    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    TextValueChangedEventType _TextValueChangedEvent;
    CaretChangedEventType _CaretChangedEvent;
    /*! \}                                                                 */

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFString          _sfText;
    SFUInt32          _sfCaretPosition;
    SFUnrecUIFontPtr  _sfFont;
    SFColor4f         _sfSelectionBoxColor;
    SFColor4f         _sfSelectionTextColor;
    SFColor4f         _sfActiveTextColor;
    SFColor4f         _sfFocusedTextColor;
    SFColor4f         _sfRolloverTextColor;
    SFColor4f         _sfDisabledTextColor;
    SFColor4f         _sfTextColor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextComponentBase(void);
    TextComponentBase(const TextComponentBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextComponentBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TextComponent *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleText            (void) const;
    EditFieldHandlePtr editHandleText           (void);
    GetFieldHandlePtr  getHandleCaretPosition   (void) const;
    EditFieldHandlePtr editHandleCaretPosition  (void);
    GetFieldHandlePtr  getHandleFont            (void) const;
    EditFieldHandlePtr editHandleFont           (void);
    GetFieldHandlePtr  getHandleSelectionBoxColor (void) const;
    EditFieldHandlePtr editHandleSelectionBoxColor(void);
    GetFieldHandlePtr  getHandleSelectionTextColor (void) const;
    EditFieldHandlePtr editHandleSelectionTextColor(void);
    GetFieldHandlePtr  getHandleActiveTextColor (void) const;
    EditFieldHandlePtr editHandleActiveTextColor(void);
    GetFieldHandlePtr  getHandleFocusedTextColor (void) const;
    EditFieldHandlePtr editHandleFocusedTextColor(void);
    GetFieldHandlePtr  getHandleRolloverTextColor (void) const;
    EditFieldHandlePtr editHandleRolloverTextColor(void);
    GetFieldHandlePtr  getHandleDisabledTextColor (void) const;
    EditFieldHandlePtr editHandleDisabledTextColor(void);
    GetFieldHandlePtr  getHandleTextColor       (void) const;
    EditFieldHandlePtr editHandleTextColor      (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleTextValueChangedSignal(void) const;
    GetEventHandlePtr getHandleCaretChangedSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    void produceTextValueChanged    (TextValueChangedEventDetailsType* const e);
    void produceCaretChanged        (CaretChangedEventDetailsType* const e);
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

            void execSync (      TextComponentBase *pFrom,
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
    static EventDescription   *_eventDesc[];
    static EventProducerType _producerType;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TextComponentBase &source);
};

typedef TextComponentBase *TextComponentBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTEXTCOMPONENTBASE_H_ */
