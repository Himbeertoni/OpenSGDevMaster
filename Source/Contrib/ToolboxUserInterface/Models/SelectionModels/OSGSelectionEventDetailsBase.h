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
 **     class SelectionEventDetails
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSELECTIONEVENTDETAILSBASE_H_
#define _OSGSELECTIONEVENTDETAILSBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGEventDetails.h" // Parent

#include "OSGSysFields.h"               // Selected type

#include "OSGSelectionEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

class SelectionEventDetails;

//! \brief SelectionEventDetails Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING SelectionEventDetailsBase : public EventDetails
{
  public:

    typedef EventDetails Inherited;
    typedef EventDetails ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SelectionEventDetails);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        SelectedFieldId = Inherited::NextFieldId,
        PreviouslySelectedFieldId = SelectedFieldId + 1,
        ValueIsAdjustingFieldId = PreviouslySelectedFieldId + 1,
        NextFieldId = ValueIsAdjustingFieldId + 1
    };

    static const OSG::BitVector SelectedFieldMask =
        (TypeTraits<BitVector>::One << SelectedFieldId);
    static const OSG::BitVector PreviouslySelectedFieldMask =
        (TypeTraits<BitVector>::One << PreviouslySelectedFieldId);
    static const OSG::BitVector ValueIsAdjustingFieldMask =
        (TypeTraits<BitVector>::One << ValueIsAdjustingFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFUInt32          MFSelectedType;
    typedef MFUInt32          MFPreviouslySelectedType;
    typedef SFBool            SFValueIsAdjustingType;

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


            const MFUInt32            *getMFSelected        (void) const;

            const MFUInt32            *getMFPreviouslySelected (void) const;

            const SFBool              *getSFValueIsAdjusting (void) const;


                  UInt32               getSelected        (const UInt32 index) const;

                  UInt32               getPreviouslySelected (const UInt32 index) const;

                  bool                 getValueIsAdjusting (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
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
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  SelectionEventDetailsTransitPtr  create          (void);
    static  SelectionEventDetails           *createEmpty     (void);

    static  SelectionEventDetailsTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SelectionEventDetails            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SelectionEventDetailsTransitPtr  createDependent  (BitVector bFlags);

    static  SelectionEventDetails           *createUnregistered(void);

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

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFUInt32          _mfSelected;
    MFUInt32          _mfPreviouslySelected;
    SFBool            _sfValueIsAdjusting;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SelectionEventDetailsBase(void);
    SelectionEventDetailsBase(const SelectionEventDetailsBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SelectionEventDetailsBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleSelected        (void) const;
    EditFieldHandlePtr editHandleSelected       (void);
    GetFieldHandlePtr  getHandlePreviouslySelected (void) const;
    EditFieldHandlePtr editHandlePreviouslySelected(void);
    GetFieldHandlePtr  getHandleValueIsAdjusting (void) const;
    EditFieldHandlePtr editHandleValueIsAdjusting(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  MFUInt32            *editMFSelected       (void);

                  MFUInt32            *editMFPreviouslySelected(void);

                  SFBool              *editSFValueIsAdjusting(void);


                  UInt32              &editSelected       (const UInt32 index);

                  UInt32              &editPreviouslySelected(const UInt32 index);

                  bool                &editValueIsAdjusting(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setValueIsAdjusting(const bool value);

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

            void execSync (      SelectionEventDetailsBase *pFrom,
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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SelectionEventDetailsBase &source);
};

typedef SelectionEventDetailsBase *SelectionEventDetailsBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSELECTIONEVENTDETAILSBASE_H_ */