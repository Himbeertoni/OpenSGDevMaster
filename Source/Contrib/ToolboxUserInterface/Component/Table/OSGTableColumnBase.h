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
 **     class TableColumn
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTABLECOLUMNBASE_H_
#define _OSGTABLECOLUMNBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGFieldContainer.h" // Parent

#include "OSGSysFields.h"               // MaxWidth type
#include "OSGTableCellEditorFields.h"   // CellEditor type

#include "OSGTableColumnFields.h"

//Event Producer Headers
#include "OSGActivity.h"
#include "OSGConsumableEventCombiner.h"

#include "OSGChangeEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

class TableColumn;

//! \brief TableColumn Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING TableColumnBase : public FieldContainer
{
  public:

    typedef FieldContainer Inherited;
    typedef FieldContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TableColumn);
    
    
    typedef ChangeEventDetails FieldChangedEventDetailsType;

    typedef boost::signals2::signal<void (EventDetails* const            , UInt32)> BaseEventType;
    typedef boost::signals2::signal<void (ChangeEventDetails* const, UInt32), ConsumableEventCombiner> FieldChangedEventType;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        MaxWidthFieldId = Inherited::NextFieldId,
        MinWidthFieldId = MaxWidthFieldId + 1,
        ModelIndexFieldId = MinWidthFieldId + 1,
        PreferredWidthFieldId = ModelIndexFieldId + 1,
        WidthFieldId = PreferredWidthFieldId + 1,
        ResizableFieldId = WidthFieldId + 1,
        CellEditorFieldId = ResizableFieldId + 1,
        NextFieldId = CellEditorFieldId + 1
    };

    static const OSG::BitVector MaxWidthFieldMask =
        (TypeTraits<BitVector>::One << MaxWidthFieldId);
    static const OSG::BitVector MinWidthFieldMask =
        (TypeTraits<BitVector>::One << MinWidthFieldId);
    static const OSG::BitVector ModelIndexFieldMask =
        (TypeTraits<BitVector>::One << ModelIndexFieldId);
    static const OSG::BitVector PreferredWidthFieldMask =
        (TypeTraits<BitVector>::One << PreferredWidthFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector ResizableFieldMask =
        (TypeTraits<BitVector>::One << ResizableFieldId);
    static const OSG::BitVector CellEditorFieldMask =
        (TypeTraits<BitVector>::One << CellEditorFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFMaxWidthType;
    typedef SFUInt32          SFMinWidthType;
    typedef SFUInt32          SFModelIndexType;
    typedef SFUInt32          SFPreferredWidthType;
    typedef SFUInt32          SFWidthType;
    typedef SFBool            SFResizableType;
    typedef SFUnrecTableCellEditorPtr SFCellEditorType;

    enum
    {
        FieldChangedEventId = 1,
        NextProducedEventId = FieldChangedEventId + 1
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


                  SFUInt32            *editSFMaxWidth       (void);
            const SFUInt32            *getSFMaxWidth        (void) const;

                  SFUInt32            *editSFMinWidth       (void);
            const SFUInt32            *getSFMinWidth        (void) const;

                  SFUInt32            *editSFModelIndex     (void);
            const SFUInt32            *getSFModelIndex      (void) const;

                  SFUInt32            *editSFPreferredWidth (void);
            const SFUInt32            *getSFPreferredWidth  (void) const;

                  SFUInt32            *editSFWidth          (void);
            const SFUInt32            *getSFWidth           (void) const;

                  SFBool              *editSFResizable      (void);
            const SFBool              *getSFResizable       (void) const;
            const SFUnrecTableCellEditorPtr *getSFCellEditor     (void) const;
                  SFUnrecTableCellEditorPtr *editSFCellEditor     (void);


                  UInt32              &editMaxWidth       (void);
                  UInt32               getMaxWidth        (void) const;

                  UInt32              &editMinWidth       (void);
                  UInt32               getMinWidth        (void) const;

                  UInt32              &editModelIndex     (void);
                  UInt32               getModelIndex      (void) const;

                  UInt32              &editPreferredWidth (void);
                  UInt32               getPreferredWidth  (void) const;

                  UInt32              &editWidth          (void);
                  UInt32               getWidth           (void) const;

                  bool                &editResizable      (void);
                  bool                 getResizable       (void) const;

                  TableCellEditor * getCellEditor     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setMaxWidth       (const UInt32 value);
            void setMinWidth       (const UInt32 value);
            void setModelIndex     (const UInt32 value);
            void setPreferredWidth (const UInt32 value);
            void setWidth          (const UInt32 value);
            void setResizable      (const bool value);
            void setCellEditor     (TableCellEditor * const value);

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
    
    //FieldChanged
    boost::signals2::connection connectFieldChanged   (const FieldChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectFieldChanged   (const FieldChangedEventType::group_type &group,
                                                       const FieldChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectFieldChanged           (const FieldChangedEventType::group_type &group);
    void   disconnectAllSlotsFieldChanged   (void);
    bool   isEmptyFieldChanged              (void) const;
    UInt32 numSlotsFieldChanged             (void) const;
    
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TableColumnTransitPtr  create          (void);
    static  TableColumn           *createEmpty     (void);

    static  TableColumnTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TableColumn            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TableColumnTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    FieldChangedEventType _FieldChangedEvent;
    /*! \}                                                                 */

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt32          _sfMaxWidth;
    SFUInt32          _sfMinWidth;
    SFUInt32          _sfModelIndex;
    SFUInt32          _sfPreferredWidth;
    SFUInt32          _sfWidth;
    SFBool            _sfResizable;
    SFUnrecTableCellEditorPtr _sfCellEditor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TableColumnBase(void);
    TableColumnBase(const TableColumnBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TableColumnBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TableColumn *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleMaxWidth        (void) const;
    EditFieldHandlePtr editHandleMaxWidth       (void);
    GetFieldHandlePtr  getHandleMinWidth        (void) const;
    EditFieldHandlePtr editHandleMinWidth       (void);
    GetFieldHandlePtr  getHandleModelIndex      (void) const;
    EditFieldHandlePtr editHandleModelIndex     (void);
    GetFieldHandlePtr  getHandlePreferredWidth  (void) const;
    EditFieldHandlePtr editHandlePreferredWidth (void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleResizable       (void) const;
    EditFieldHandlePtr editHandleResizable      (void);
    GetFieldHandlePtr  getHandleCellEditor      (void) const;
    EditFieldHandlePtr editHandleCellEditor     (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleFieldChangedSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    void produceFieldChanged        (FieldChangedEventDetailsType* const e);
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

            void execSync (      TableColumnBase *pFrom,
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

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

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
    void operator =(const TableColumnBase &source);
};

typedef TableColumnBase *TableColumnBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTABLECOLUMNBASE_H_ */