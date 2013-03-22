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
 **     class AbstractTreeModelLayout
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGABSTRACTTREEMODELLAYOUTBASE_H_
#define _OSGABSTRACTTREEMODELLAYOUTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGTreeModelLayout.h" // Parent

#include "OSGSysFields.h"               // RootVisibleInternal type

#include "OSGAbstractTreeModelLayoutFields.h"

OSG_BEGIN_NAMESPACE

class AbstractTreeModelLayout;

//! \brief AbstractTreeModelLayout Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING AbstractTreeModelLayoutBase : public TreeModelLayout
{
  public:

    typedef TreeModelLayout Inherited;
    typedef TreeModelLayout ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(AbstractTreeModelLayout);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RootVisibleInternalFieldId = Inherited::NextFieldId,
        RowHeightInternalFieldId = RootVisibleInternalFieldId + 1,
        DepthOffsetInternalFieldId = RowHeightInternalFieldId + 1,
        NextFieldId = DepthOffsetInternalFieldId + 1
    };

    static const OSG::BitVector RootVisibleInternalFieldMask =
        (TypeTraits<BitVector>::One << RootVisibleInternalFieldId);
    static const OSG::BitVector RowHeightInternalFieldMask =
        (TypeTraits<BitVector>::One << RowHeightInternalFieldId);
    static const OSG::BitVector DepthOffsetInternalFieldMask =
        (TypeTraits<BitVector>::One << DepthOffsetInternalFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFBool            SFRootVisibleInternalType;
    typedef SFReal32          SFRowHeightInternalType;
    typedef SFReal32          SFDepthOffsetInternalType;

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
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
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

    SFBool            _sfRootVisibleInternal;
    SFReal32          _sfRowHeightInternal;
    SFReal32          _sfDepthOffsetInternal;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    AbstractTreeModelLayoutBase(void);
    AbstractTreeModelLayoutBase(const AbstractTreeModelLayoutBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~AbstractTreeModelLayoutBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRootVisibleInternal (void) const;
    EditFieldHandlePtr editHandleRootVisibleInternal(void);
    GetFieldHandlePtr  getHandleRowHeightInternal (void) const;
    EditFieldHandlePtr editHandleRowHeightInternal(void);
    GetFieldHandlePtr  getHandleDepthOffsetInternal (void) const;
    EditFieldHandlePtr editHandleDepthOffsetInternal(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFBool              *editSFRootVisibleInternal(void);
            const SFBool              *getSFRootVisibleInternal (void) const;

                  SFReal32            *editSFRowHeightInternal(void);
            const SFReal32            *getSFRowHeightInternal (void) const;

                  SFReal32            *editSFDepthOffsetInternal(void);
            const SFReal32            *getSFDepthOffsetInternal (void) const;


                  bool                &editRootVisibleInternal(void);
                  bool                 getRootVisibleInternal (void) const;

                  Real32              &editRowHeightInternal(void);
                  Real32               getRowHeightInternal (void) const;

                  Real32              &editDepthOffsetInternal(void);
                  Real32               getDepthOffsetInternal (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRootVisibleInternal(const bool value);
            void setRowHeightInternal(const Real32 value);
            void setDepthOffsetInternal(const Real32 value);

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

            void execSync (      AbstractTreeModelLayoutBase *pFrom,
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
    void operator =(const AbstractTreeModelLayoutBase &source);
};

typedef AbstractTreeModelLayoutBase *AbstractTreeModelLayoutBaseP;

OSG_END_NAMESPACE

#endif /* _OSGABSTRACTTREEMODELLAYOUTBASE_H_ */