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
 **     class TableModel
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTABLEMODELBASE_H_
#define _OSGTABLEMODELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGFieldContainer.h" // Parent

#include "OSGTableModelEventSourceFields.h" // EventSource type

#include "OSGTableModelFields.h"

#include "OSGTableModelEventSource.h"

OSG_BEGIN_NAMESPACE


class TableModel;

//! \brief TableModel Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING TableModelBase : public FieldContainer
{
  public:

    typedef FieldContainer Inherited;
    typedef FieldContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TableModel);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        EventSourceFieldId = Inherited::NextFieldId,
        NextFieldId = EventSourceFieldId + 1
    };

    static const OSG::BitVector EventSourceFieldMask =
        (TypeTraits<BitVector>::One << EventSourceFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecTableModelEventSourcePtr SFEventSourceType;

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

            const SFUnrecTableModelEventSourcePtr *getSFEventSource    (void) const;
                  SFUnrecTableModelEventSourcePtr *editSFEventSource    (void);


                  TableModelEventSource * getEventSource    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setEventSource    (TableModelEventSource * const value);

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
    /*! \}                                                                 */
    /*! \name                Event Forwards to EventSource                 */
    /*! \{                                                                 */
    
    //ContentsHeaderRowChanged
    boost::signals2::connection connectContentsHeaderRowChanged(const TableModelEventSource::ContentsHeaderRowChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectContentsHeaderRowChanged(const TableModelEventSource::ContentsHeaderRowChangedEventType::group_type &group,
                                                       const TableModelEventSource::ContentsHeaderRowChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectContentsHeaderRowChanged(const TableModelEventSource::ContentsHeaderRowChangedEventType::group_type &group);
    void   disconnectAllSlotsContentsHeaderRowChanged(void);
    bool   isEmptyContentsHeaderRowChanged  (void) const;
    UInt32 numSlotsContentsHeaderRowChanged (void) const;
    
    //ContentsChanged
    boost::signals2::connection connectContentsChanged(const TableModelEventSource::ContentsChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectContentsChanged(const TableModelEventSource::ContentsChangedEventType::group_type &group,
                                                       const TableModelEventSource::ContentsChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectContentsChanged        (const TableModelEventSource::ContentsChangedEventType::group_type &group);
    void   disconnectAllSlotsContentsChanged(void);
    bool   isEmptyContentsChanged           (void) const;
    UInt32 numSlotsContentsChanged          (void) const;
    
    //IntervalAdded
    boost::signals2::connection connectIntervalAdded  (const TableModelEventSource::IntervalAddedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectIntervalAdded  (const TableModelEventSource::IntervalAddedEventType::group_type &group,
                                                       const TableModelEventSource::IntervalAddedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectIntervalAdded          (const TableModelEventSource::IntervalAddedEventType::group_type &group);
    void   disconnectAllSlotsIntervalAdded  (void);
    bool   isEmptyIntervalAdded             (void) const;
    UInt32 numSlotsIntervalAdded            (void) const;
    
    //IntervalRemoved
    boost::signals2::connection connectIntervalRemoved(const TableModelEventSource::IntervalRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectIntervalRemoved(const TableModelEventSource::IntervalRemovedEventType::group_type &group,
                                                       const TableModelEventSource::IntervalRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectIntervalRemoved        (const TableModelEventSource::IntervalRemovedEventType::group_type &group);
    void   disconnectAllSlotsIntervalRemoved(void);
    bool   isEmptyIntervalRemoved           (void) const;
    UInt32 numSlotsIntervalRemoved          (void) const;
    
    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecTableModelEventSourcePtr _sfEventSource;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TableModelBase(void);
    TableModelBase(const TableModelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TableModelBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TableModel *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleEventSource     (void) const;
    EditFieldHandlePtr editHandleEventSource    (void);

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

            void execSync (      TableModelBase *pFrom,
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
    void operator =(const TableModelBase &source);
};

typedef TableModelBase *TableModelBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTABLEMODELBASE_H_ */
