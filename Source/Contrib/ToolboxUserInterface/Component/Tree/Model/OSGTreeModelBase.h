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
 **     class TreeModel
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTREEMODELBASE_H_
#define _OSGTREEMODELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent


#include "OSGTreeModelFields.h"

//Event Producer Headers
#include "OSGActivity.h"
#include "OSGConsumableEventCombiner.h"

#include "OSGTreeModelEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

class TreeModel;

//! \brief TreeModel Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING TreeModelBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TreeModel);
    
    
    typedef TreeModelEventDetails TreeNodesChangedEventDetailsType;
    typedef TreeModelEventDetails TreeNodesInsertedEventDetailsType;
    typedef TreeModelEventDetails TreeNodesRemovedEventDetailsType;
    typedef TreeModelEventDetails TreeNodesWillBeRemovedEventDetailsType;
    typedef TreeModelEventDetails TreeStructureChangedEventDetailsType;

    typedef boost::signals2::signal<void (EventDetails* const            , UInt32)> BaseEventType;
    typedef boost::signals2::signal<void (TreeModelEventDetails* const, UInt32), ConsumableEventCombiner> TreeNodesChangedEventType;
    typedef boost::signals2::signal<void (TreeModelEventDetails* const, UInt32), ConsumableEventCombiner> TreeNodesInsertedEventType;
    typedef boost::signals2::signal<void (TreeModelEventDetails* const, UInt32), ConsumableEventCombiner> TreeNodesRemovedEventType;
    typedef boost::signals2::signal<void (TreeModelEventDetails* const, UInt32), ConsumableEventCombiner> TreeNodesWillBeRemovedEventType;
    typedef boost::signals2::signal<void (TreeModelEventDetails* const, UInt32), ConsumableEventCombiner> TreeStructureChangedEventType;

    /*==========================  PUBLIC  =================================*/

  public:


    enum
    {
        TreeNodesChangedEventId = 1,
        TreeNodesInsertedEventId = TreeNodesChangedEventId + 1,
        TreeNodesRemovedEventId = TreeNodesInsertedEventId + 1,
        TreeNodesWillBeRemovedEventId = TreeNodesRemovedEventId + 1,
        TreeStructureChangedEventId = TreeNodesWillBeRemovedEventId + 1,
        NextProducedEventId = TreeStructureChangedEventId + 1
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

    virtual UInt32                   getNumProducedEvents       (void                                ) const;
    virtual const EventDescription *getProducedEventDescription(const std::string &ProducedEventName) const;
    virtual const EventDescription *getProducedEventDescription(UInt32 ProducedEventId              ) const;
    virtual UInt32                   getProducedEventId         (const std::string &ProducedEventName) const;
    
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
    
    //TreeNodesChanged
    boost::signals2::connection connectTreeNodesChanged(const TreeNodesChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectTreeNodesChanged(const TreeNodesChangedEventType::group_type &group,
                                                       const TreeNodesChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectTreeNodesChanged       (const TreeNodesChangedEventType::group_type &group);
    void   disconnectAllSlotsTreeNodesChanged(void);
    bool   isEmptyTreeNodesChanged          (void) const;
    UInt32 numSlotsTreeNodesChanged         (void) const;
    
    //TreeNodesInserted
    boost::signals2::connection connectTreeNodesInserted(const TreeNodesInsertedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectTreeNodesInserted(const TreeNodesInsertedEventType::group_type &group,
                                                       const TreeNodesInsertedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectTreeNodesInserted      (const TreeNodesInsertedEventType::group_type &group);
    void   disconnectAllSlotsTreeNodesInserted(void);
    bool   isEmptyTreeNodesInserted         (void) const;
    UInt32 numSlotsTreeNodesInserted        (void) const;
    
    //TreeNodesRemoved
    boost::signals2::connection connectTreeNodesRemoved(const TreeNodesRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectTreeNodesRemoved(const TreeNodesRemovedEventType::group_type &group,
                                                       const TreeNodesRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectTreeNodesRemoved       (const TreeNodesRemovedEventType::group_type &group);
    void   disconnectAllSlotsTreeNodesRemoved(void);
    bool   isEmptyTreeNodesRemoved          (void) const;
    UInt32 numSlotsTreeNodesRemoved         (void) const;
    
    //TreeNodesWillBeRemoved
    boost::signals2::connection connectTreeNodesWillBeRemoved(const TreeNodesWillBeRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectTreeNodesWillBeRemoved(const TreeNodesWillBeRemovedEventType::group_type &group,
                                                       const TreeNodesWillBeRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectTreeNodesWillBeRemoved (const TreeNodesWillBeRemovedEventType::group_type &group);
    void   disconnectAllSlotsTreeNodesWillBeRemoved(void);
    bool   isEmptyTreeNodesWillBeRemoved    (void) const;
    UInt32 numSlotsTreeNodesWillBeRemoved   (void) const;
    
    //TreeStructureChanged
    boost::signals2::connection connectTreeStructureChanged(const TreeStructureChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectTreeStructureChanged(const TreeStructureChangedEventType::group_type &group,
                                                       const TreeStructureChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectTreeStructureChanged   (const TreeStructureChangedEventType::group_type &group);
    void   disconnectAllSlotsTreeStructureChanged(void);
    bool   isEmptyTreeStructureChanged      (void) const;
    UInt32 numSlotsTreeStructureChanged     (void) const;
    
    
    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    TreeNodesChangedEventType _TreeNodesChangedEvent;
    TreeNodesInsertedEventType _TreeNodesInsertedEvent;
    TreeNodesRemovedEventType _TreeNodesRemovedEvent;
    TreeNodesWillBeRemovedEventType _TreeNodesWillBeRemovedEvent;
    TreeStructureChangedEventType _TreeStructureChangedEvent;
    /*! \}                                                                 */

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TreeModelBase(void);
    TreeModelBase(const TreeModelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TreeModelBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleTreeNodesChangedSignal(void) const;
    GetEventHandlePtr getHandleTreeNodesInsertedSignal(void) const;
    GetEventHandlePtr getHandleTreeNodesRemovedSignal(void) const;
    GetEventHandlePtr getHandleTreeNodesWillBeRemovedSignal(void) const;
    GetEventHandlePtr getHandleTreeStructureChangedSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    void produceTreeNodesChanged    (TreeNodesChangedEventDetailsType* const e);
    void produceTreeNodesInserted   (TreeNodesInsertedEventDetailsType* const e);
    void produceTreeNodesRemoved    (TreeNodesRemovedEventDetailsType* const e);
    void produceTreeNodesWillBeRemoved  (TreeNodesWillBeRemovedEventDetailsType* const e);
    void produceTreeStructureChanged  (TreeStructureChangedEventDetailsType* const e);
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

            void execSync (      TreeModelBase *pFrom,
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
    void operator =(const TreeModelBase &source);
};

typedef TreeModelBase *TreeModelBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTREEMODELBASE_H_ */
