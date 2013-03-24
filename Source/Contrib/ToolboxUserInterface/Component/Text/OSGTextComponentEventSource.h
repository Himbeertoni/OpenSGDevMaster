/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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

#ifndef _OSGTEXTCOMPONENTEVENTSOURCE_H_
#define _OSGTEXTCOMPONENTEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTextComponentEventSourceBase.h"
#include "OSGTextEventDetailsFields.h"
#include "OSGCaretEventDetailsFields.h"
OSG_BEGIN_NAMESPACE

/*! \brief TextComponentEventSource class. See \ref
           PageContribToolboxUserInterfaceTextComponentEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING TextComponentEventSource : public TextComponentEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TextComponentEventSourceBase Inherited;
    typedef TextComponentEventSource     Self;
    
    typedef TextEventDetails   TextValueChangedEventDetailsType;
    typedef CaretEventDetails  CaretChangedEventDetailsType;

    typedef boost::signals2::signal<void (TextEventDetails* const , UInt32), ConsumableEventCombiner> TextValueChangedEventType;
    typedef boost::signals2::signal<void (CaretEventDetails* const, UInt32), ConsumableEventCombiner> CaretChangedEventType;

    enum
    {
        TextValueChangedEventId = Inherited::NextProducedEventId,
        CaretChangedEventId = TextValueChangedEventId + 1,
        NextProducedEventId = CaretChangedEventId + 1
    };
    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);
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
    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in TextComponentEventSourceBase.
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    TextValueChangedEventType _TextValueChangedEvent;
    CaretChangedEventType _CaretChangedEvent;
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
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TextComponentEventSource(void);
    TextComponentEventSource(const TextComponentEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextComponentEventSource(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/
    static EventDescription   *_eventDesc[];
    static EventProducerType _producerType;

    friend class FieldContainer;
    friend class TextComponentEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TextComponentEventSource &source);
};

typedef TextComponentEventSource *TextComponentEventSourceP;

OSG_END_NAMESPACE

#include "OSGTextEventDetails.h"
#include "OSGCaretEventDetails.h"
#include "OSGTextComponentEventSourceBase.inl"
#include "OSGTextComponentEventSource.inl"

#endif /* _OSGTEXTCOMPONENTEVENTSOURCE_H_ */
