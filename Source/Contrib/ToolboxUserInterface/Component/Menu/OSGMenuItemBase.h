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
 **     class MenuItem
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMENUITEMBASE_H_
#define _OSGMENUITEMBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGToggleButton.h" // Parent

#include "OSGFieldContainerFields.h"    // ParentMenu type
#include "OSGSysFields.h"               // AcceleratorModifiers type

#include "OSGMenuItemFields.h"

OSG_BEGIN_NAMESPACE

class MenuItem;

//! \brief MenuItem Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING MenuItemBase : public ToggleButton
{
  public:

    typedef ToggleButton Inherited;
    typedef ToggleButton ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(MenuItem);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ParentMenuFieldId = Inherited::NextFieldId,
        AcceleratorModifiersFieldId = ParentMenuFieldId + 1,
        AcceleratorKeyFieldId = AcceleratorModifiersFieldId + 1,
        MnemonicKeyFieldId = AcceleratorKeyFieldId + 1,
        NextFieldId = MnemonicKeyFieldId + 1
    };

    static const OSG::BitVector ParentMenuFieldMask =
        (TypeTraits<BitVector>::One << ParentMenuFieldId);
    static const OSG::BitVector AcceleratorModifiersFieldMask =
        (TypeTraits<BitVector>::One << AcceleratorModifiersFieldId);
    static const OSG::BitVector AcceleratorKeyFieldMask =
        (TypeTraits<BitVector>::One << AcceleratorKeyFieldId);
    static const OSG::BitVector MnemonicKeyFieldMask =
        (TypeTraits<BitVector>::One << MnemonicKeyFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFParentFieldContainerPtr SFParentMenuType;
    typedef SFUInt32          SFAcceleratorModifiersType;
    typedef SFUInt32          SFAcceleratorKeyType;
    typedef SFUInt32          SFMnemonicKeyType;

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


                  SFUInt32            *editSFAcceleratorModifiers(void);
            const SFUInt32            *getSFAcceleratorModifiers (void) const;

                  SFUInt32            *editSFAcceleratorKey (void);
            const SFUInt32            *getSFAcceleratorKey  (void) const;

                  SFUInt32            *editSFMnemonicKey    (void);
            const SFUInt32            *getSFMnemonicKey     (void) const;


                  UInt32              &editAcceleratorModifiers(void);
                  UInt32               getAcceleratorModifiers (void) const;

                  UInt32              &editAcceleratorKey (void);
                  UInt32               getAcceleratorKey  (void) const;

                  UInt32              &editMnemonicKey    (void);
                  UInt32               getMnemonicKey     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setAcceleratorModifiers(const UInt32 value);
            void setAcceleratorKey (const UInt32 value);
            void setMnemonicKey    (const UInt32 value);

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

    static  MenuItemTransitPtr  create          (void);
    static  MenuItem           *createEmpty     (void);

    static  MenuItemTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  MenuItem            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  MenuItemTransitPtr  createDependent  (BitVector bFlags);

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

    SFParentFieldContainerPtr _sfParentMenu;
    SFUInt32          _sfAcceleratorModifiers;
    SFUInt32          _sfAcceleratorKey;
    SFUInt32          _sfMnemonicKey;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MenuItemBase(void);
    MenuItemBase(const MenuItemBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MenuItemBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


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
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleParentMenu      (void) const;
    EditFieldHandlePtr editHandleParentMenu     (void);
    GetFieldHandlePtr  getHandleAcceleratorModifiers (void) const;
    EditFieldHandlePtr editHandleAcceleratorModifiers(void);
    GetFieldHandlePtr  getHandleAcceleratorKey  (void) const;
    EditFieldHandlePtr editHandleAcceleratorKey (void);
    GetFieldHandlePtr  getHandleMnemonicKey     (void) const;
    EditFieldHandlePtr editHandleMnemonicKey    (void);

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

            void execSync (      MenuItemBase *pFrom,
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
    void operator =(const MenuItemBase &source);
};

typedef MenuItemBase *MenuItemBaseP;

OSG_END_NAMESPACE

#endif /* _OSGMENUITEMBASE_H_ */