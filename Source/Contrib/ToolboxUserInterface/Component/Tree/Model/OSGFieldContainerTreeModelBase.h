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
 **     class FieldContainerTreeModel
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGFIELDCONTAINERTREEMODELBASE_H_
#define _OSGFIELDCONTAINERTREEMODELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAbstractTreeModel.h" // Parent

#include "OSGFieldContainerFields.h"    // InternalRootFieldContainer type
#include "OSGSysFields.h"               // ShowInternalFields type

#include "OSGFieldContainerTreeModelFields.h"

OSG_BEGIN_NAMESPACE

class FieldContainerTreeModel;

//! \brief FieldContainerTreeModel Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING FieldContainerTreeModelBase : public AbstractTreeModel
{
  public:

    typedef AbstractTreeModel Inherited;
    typedef AbstractTreeModel ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(FieldContainerTreeModel);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        InternalRootFieldContainerFieldId = Inherited::NextFieldId,
        ShowInternalFieldsFieldId = InternalRootFieldContainerFieldId + 1,
        ShowMultiFieldsFieldId = ShowInternalFieldsFieldId + 1,
        ShowSingleFieldsFieldId = ShowMultiFieldsFieldId + 1,
        ShowPtrFieldsFieldId = ShowSingleFieldsFieldId + 1,
        ShowDataFieldsFieldId = ShowPtrFieldsFieldId + 1,
        ShowParentPtrFieldsFieldId = ShowDataFieldsFieldId + 1,
        ShowChildPtrFieldsFieldId = ShowParentPtrFieldsFieldId + 1,
        ShowAttachmentsFieldId = ShowChildPtrFieldsFieldId + 1,
        ShowEventProducersFieldId = ShowAttachmentsFieldId + 1,
        ShowCallbackFunctorsFieldId = ShowEventProducersFieldId + 1,
        NextFieldId = ShowCallbackFunctorsFieldId + 1
    };

    static const OSG::BitVector InternalRootFieldContainerFieldMask =
        (TypeTraits<BitVector>::One << InternalRootFieldContainerFieldId);
    static const OSG::BitVector ShowInternalFieldsFieldMask =
        (TypeTraits<BitVector>::One << ShowInternalFieldsFieldId);
    static const OSG::BitVector ShowMultiFieldsFieldMask =
        (TypeTraits<BitVector>::One << ShowMultiFieldsFieldId);
    static const OSG::BitVector ShowSingleFieldsFieldMask =
        (TypeTraits<BitVector>::One << ShowSingleFieldsFieldId);
    static const OSG::BitVector ShowPtrFieldsFieldMask =
        (TypeTraits<BitVector>::One << ShowPtrFieldsFieldId);
    static const OSG::BitVector ShowDataFieldsFieldMask =
        (TypeTraits<BitVector>::One << ShowDataFieldsFieldId);
    static const OSG::BitVector ShowParentPtrFieldsFieldMask =
        (TypeTraits<BitVector>::One << ShowParentPtrFieldsFieldId);
    static const OSG::BitVector ShowChildPtrFieldsFieldMask =
        (TypeTraits<BitVector>::One << ShowChildPtrFieldsFieldId);
    static const OSG::BitVector ShowAttachmentsFieldMask =
        (TypeTraits<BitVector>::One << ShowAttachmentsFieldId);
    static const OSG::BitVector ShowEventProducersFieldMask =
        (TypeTraits<BitVector>::One << ShowEventProducersFieldId);
    static const OSG::BitVector ShowCallbackFunctorsFieldMask =
        (TypeTraits<BitVector>::One << ShowCallbackFunctorsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecFieldContainerPtr SFInternalRootFieldContainerType;
    typedef SFBool            SFShowInternalFieldsType;
    typedef SFBool            SFShowMultiFieldsType;
    typedef SFBool            SFShowSingleFieldsType;
    typedef SFBool            SFShowPtrFieldsType;
    typedef SFBool            SFShowDataFieldsType;
    typedef SFBool            SFShowParentPtrFieldsType;
    typedef SFBool            SFShowChildPtrFieldsType;
    typedef SFBool            SFShowAttachmentsType;
    typedef SFBool            SFShowEventProducersType;
    typedef SFBool            SFShowCallbackFunctorsType;

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


                  SFBool              *editSFShowInternalFields(void);
            const SFBool              *getSFShowInternalFields (void) const;

                  SFBool              *editSFShowMultiFields(void);
            const SFBool              *getSFShowMultiFields (void) const;

                  SFBool              *editSFShowSingleFields(void);
            const SFBool              *getSFShowSingleFields (void) const;

                  SFBool              *editSFShowPtrFields  (void);
            const SFBool              *getSFShowPtrFields   (void) const;

                  SFBool              *editSFShowDataFields (void);
            const SFBool              *getSFShowDataFields  (void) const;

                  SFBool              *editSFShowParentPtrFields(void);
            const SFBool              *getSFShowParentPtrFields (void) const;

                  SFBool              *editSFShowChildPtrFields(void);
            const SFBool              *getSFShowChildPtrFields (void) const;

                  SFBool              *editSFShowAttachments(void);
            const SFBool              *getSFShowAttachments (void) const;

                  SFBool              *editSFShowEventProducers(void);
            const SFBool              *getSFShowEventProducers (void) const;

                  SFBool              *editSFShowCallbackFunctors(void);
            const SFBool              *getSFShowCallbackFunctors (void) const;


                  bool                &editShowInternalFields(void);
                  bool                 getShowInternalFields (void) const;

                  bool                &editShowMultiFields(void);
                  bool                 getShowMultiFields (void) const;

                  bool                &editShowSingleFields(void);
                  bool                 getShowSingleFields (void) const;

                  bool                &editShowPtrFields  (void);
                  bool                 getShowPtrFields   (void) const;

                  bool                &editShowDataFields (void);
                  bool                 getShowDataFields  (void) const;

                  bool                &editShowParentPtrFields(void);
                  bool                 getShowParentPtrFields (void) const;

                  bool                &editShowChildPtrFields(void);
                  bool                 getShowChildPtrFields (void) const;

                  bool                &editShowAttachments(void);
                  bool                 getShowAttachments (void) const;

                  bool                &editShowEventProducers(void);
                  bool                 getShowEventProducers (void) const;

                  bool                &editShowCallbackFunctors(void);
                  bool                 getShowCallbackFunctors (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setShowInternalFields(const bool value);
            void setShowMultiFields(const bool value);
            void setShowSingleFields(const bool value);
            void setShowPtrFields  (const bool value);
            void setShowDataFields (const bool value);
            void setShowParentPtrFields(const bool value);
            void setShowChildPtrFields(const bool value);
            void setShowAttachments(const bool value);
            void setShowEventProducers(const bool value);
            void setShowCallbackFunctors(const bool value);

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
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  FieldContainerTreeModelTransitPtr  create          (void);
    static  FieldContainerTreeModel           *createEmpty     (void);

    static  FieldContainerTreeModelTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  FieldContainerTreeModel            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  FieldContainerTreeModelTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecFieldContainerPtr _sfInternalRootFieldContainer;
    SFBool            _sfShowInternalFields;
    SFBool            _sfShowMultiFields;
    SFBool            _sfShowSingleFields;
    SFBool            _sfShowPtrFields;
    SFBool            _sfShowDataFields;
    SFBool            _sfShowParentPtrFields;
    SFBool            _sfShowChildPtrFields;
    SFBool            _sfShowAttachments;
    SFBool            _sfShowEventProducers;
    SFBool            _sfShowCallbackFunctors;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    FieldContainerTreeModelBase(void);
    FieldContainerTreeModelBase(const FieldContainerTreeModelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~FieldContainerTreeModelBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const FieldContainerTreeModel *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleInternalRootFieldContainer (void) const;
    EditFieldHandlePtr editHandleInternalRootFieldContainer(void);
    GetFieldHandlePtr  getHandleShowInternalFields (void) const;
    EditFieldHandlePtr editHandleShowInternalFields(void);
    GetFieldHandlePtr  getHandleShowMultiFields (void) const;
    EditFieldHandlePtr editHandleShowMultiFields(void);
    GetFieldHandlePtr  getHandleShowSingleFields (void) const;
    EditFieldHandlePtr editHandleShowSingleFields(void);
    GetFieldHandlePtr  getHandleShowPtrFields   (void) const;
    EditFieldHandlePtr editHandleShowPtrFields  (void);
    GetFieldHandlePtr  getHandleShowDataFields  (void) const;
    EditFieldHandlePtr editHandleShowDataFields (void);
    GetFieldHandlePtr  getHandleShowParentPtrFields (void) const;
    EditFieldHandlePtr editHandleShowParentPtrFields(void);
    GetFieldHandlePtr  getHandleShowChildPtrFields (void) const;
    EditFieldHandlePtr editHandleShowChildPtrFields(void);
    GetFieldHandlePtr  getHandleShowAttachments (void) const;
    EditFieldHandlePtr editHandleShowAttachments(void);
    GetFieldHandlePtr  getHandleShowEventProducers (void) const;
    EditFieldHandlePtr editHandleShowEventProducers(void);
    GetFieldHandlePtr  getHandleShowCallbackFunctors (void) const;
    EditFieldHandlePtr editHandleShowCallbackFunctors(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecFieldContainerPtr *getSFInternalRootFieldContainer (void) const;
                  SFUnrecFieldContainerPtr *editSFInternalRootFieldContainer(void);


                  FieldContainer * getInternalRootFieldContainer(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setInternalRootFieldContainer(FieldContainer * const value);

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

            void execSync (      FieldContainerTreeModelBase *pFrom,
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
    void operator =(const FieldContainerTreeModelBase &source);
};

typedef FieldContainerTreeModelBase *FieldContainerTreeModelBaseP;

OSG_END_NAMESPACE

#endif /* _OSGFIELDCONTAINERTREEMODELBASE_H_ */
