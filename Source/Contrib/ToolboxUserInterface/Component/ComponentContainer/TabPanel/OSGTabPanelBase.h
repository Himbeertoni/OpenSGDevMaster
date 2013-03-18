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
 **     class TabPanel
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTABPANELBASE_H_
#define _OSGTABPANELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGComponentContainer.h" // Parent

#include "OSGComponentFields.h"         // Tabs type
#include "OSGSysFields.h"               // TabPlacement type
#include "OSGVecFields.h"               // TabBorderInsets type
#include "OSGBorderFields.h"            // TabBorder type
#include "OSGLayerFields.h"             // TabBackground type
#include "OSGSingleSelectionModelFields.h" // SelectionModel type

#include "OSGTabPanelFields.h"

OSG_BEGIN_NAMESPACE

class TabPanel;

//! \brief TabPanel Base Class.

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING TabPanelBase : public ComponentContainer
{
  public:

    typedef ComponentContainer Inherited;
    typedef ComponentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TabPanel);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        TabsFieldId = Inherited::NextFieldId,
        TabContentsFieldId = TabsFieldId + 1,
        TabPlacementFieldId = TabContentsFieldId + 1,
        TabAlignmentFieldId = TabPlacementFieldId + 1,
        TabRotationFieldId = TabAlignmentFieldId + 1,
        TabBorderInsetsFieldId = TabRotationFieldId + 1,
        TabBorderFieldId = TabBorderInsetsFieldId + 1,
        TabBackgroundFieldId = TabBorderFieldId + 1,
        TabDisabledBorderFieldId = TabBackgroundFieldId + 1,
        TabDisabledBackgroundFieldId = TabDisabledBorderFieldId + 1,
        TabFocusedBorderFieldId = TabDisabledBackgroundFieldId + 1,
        TabFocusedBackgroundFieldId = TabFocusedBorderFieldId + 1,
        TabRolloverBorderFieldId = TabFocusedBackgroundFieldId + 1,
        TabRolloverBackgroundFieldId = TabRolloverBorderFieldId + 1,
        TabActiveBorderFieldId = TabRolloverBackgroundFieldId + 1,
        TabActiveBackgroundFieldId = TabActiveBorderFieldId + 1,
        ContentBorderInsetsFieldId = TabActiveBackgroundFieldId + 1,
        ContentBorderFieldId = ContentBorderInsetsFieldId + 1,
        ContentBackgroundFieldId = ContentBorderFieldId + 1,
        ContentDisabledBorderFieldId = ContentBackgroundFieldId + 1,
        ContentDisabledBackgroundFieldId = ContentDisabledBorderFieldId + 1,
        ContentRolloverBorderFieldId = ContentDisabledBackgroundFieldId + 1,
        ContentRolloverBackgroundFieldId = ContentRolloverBorderFieldId + 1,
        SelectionModelFieldId = ContentRolloverBackgroundFieldId + 1,
        NextFieldId = SelectionModelFieldId + 1
    };

    static const OSG::BitVector TabsFieldMask =
        (TypeTraits<BitVector>::One << TabsFieldId);
    static const OSG::BitVector TabContentsFieldMask =
        (TypeTraits<BitVector>::One << TabContentsFieldId);
    static const OSG::BitVector TabPlacementFieldMask =
        (TypeTraits<BitVector>::One << TabPlacementFieldId);
    static const OSG::BitVector TabAlignmentFieldMask =
        (TypeTraits<BitVector>::One << TabAlignmentFieldId);
    static const OSG::BitVector TabRotationFieldMask =
        (TypeTraits<BitVector>::One << TabRotationFieldId);
    static const OSG::BitVector TabBorderInsetsFieldMask =
        (TypeTraits<BitVector>::One << TabBorderInsetsFieldId);
    static const OSG::BitVector TabBorderFieldMask =
        (TypeTraits<BitVector>::One << TabBorderFieldId);
    static const OSG::BitVector TabBackgroundFieldMask =
        (TypeTraits<BitVector>::One << TabBackgroundFieldId);
    static const OSG::BitVector TabDisabledBorderFieldMask =
        (TypeTraits<BitVector>::One << TabDisabledBorderFieldId);
    static const OSG::BitVector TabDisabledBackgroundFieldMask =
        (TypeTraits<BitVector>::One << TabDisabledBackgroundFieldId);
    static const OSG::BitVector TabFocusedBorderFieldMask =
        (TypeTraits<BitVector>::One << TabFocusedBorderFieldId);
    static const OSG::BitVector TabFocusedBackgroundFieldMask =
        (TypeTraits<BitVector>::One << TabFocusedBackgroundFieldId);
    static const OSG::BitVector TabRolloverBorderFieldMask =
        (TypeTraits<BitVector>::One << TabRolloverBorderFieldId);
    static const OSG::BitVector TabRolloverBackgroundFieldMask =
        (TypeTraits<BitVector>::One << TabRolloverBackgroundFieldId);
    static const OSG::BitVector TabActiveBorderFieldMask =
        (TypeTraits<BitVector>::One << TabActiveBorderFieldId);
    static const OSG::BitVector TabActiveBackgroundFieldMask =
        (TypeTraits<BitVector>::One << TabActiveBackgroundFieldId);
    static const OSG::BitVector ContentBorderInsetsFieldMask =
        (TypeTraits<BitVector>::One << ContentBorderInsetsFieldId);
    static const OSG::BitVector ContentBorderFieldMask =
        (TypeTraits<BitVector>::One << ContentBorderFieldId);
    static const OSG::BitVector ContentBackgroundFieldMask =
        (TypeTraits<BitVector>::One << ContentBackgroundFieldId);
    static const OSG::BitVector ContentDisabledBorderFieldMask =
        (TypeTraits<BitVector>::One << ContentDisabledBorderFieldId);
    static const OSG::BitVector ContentDisabledBackgroundFieldMask =
        (TypeTraits<BitVector>::One << ContentDisabledBackgroundFieldId);
    static const OSG::BitVector ContentRolloverBorderFieldMask =
        (TypeTraits<BitVector>::One << ContentRolloverBorderFieldId);
    static const OSG::BitVector ContentRolloverBackgroundFieldMask =
        (TypeTraits<BitVector>::One << ContentRolloverBackgroundFieldId);
    static const OSG::BitVector SelectionModelFieldMask =
        (TypeTraits<BitVector>::One << SelectionModelFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFUnrecComponentPtr MFTabsType;
    typedef MFUnrecComponentPtr MFTabContentsType;
    typedef SFUInt32          SFTabPlacementType;
    typedef SFReal32          SFTabAlignmentType;
    typedef SFUInt32          SFTabRotationType;
    typedef SFVec4f           SFTabBorderInsetsType;
    typedef SFUnrecBorderPtr  SFTabBorderType;
    typedef SFUnrecLayerPtr   SFTabBackgroundType;
    typedef SFUnrecBorderPtr  SFTabDisabledBorderType;
    typedef SFUnrecLayerPtr   SFTabDisabledBackgroundType;
    typedef SFUnrecBorderPtr  SFTabFocusedBorderType;
    typedef SFUnrecLayerPtr   SFTabFocusedBackgroundType;
    typedef SFUnrecBorderPtr  SFTabRolloverBorderType;
    typedef SFUnrecLayerPtr   SFTabRolloverBackgroundType;
    typedef SFUnrecBorderPtr  SFTabActiveBorderType;
    typedef SFUnrecLayerPtr   SFTabActiveBackgroundType;
    typedef SFVec2f           SFContentBorderInsetsType;
    typedef SFUnrecBorderPtr  SFContentBorderType;
    typedef SFUnrecLayerPtr   SFContentBackgroundType;
    typedef SFUnrecBorderPtr  SFContentDisabledBorderType;
    typedef SFUnrecLayerPtr   SFContentDisabledBackgroundType;
    typedef SFUnrecBorderPtr  SFContentRolloverBorderType;
    typedef SFUnrecLayerPtr   SFContentRolloverBackgroundType;
    typedef SFUnrecSingleSelectionModelPtr SFSelectionModelType;

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

            const MFUnrecComponentPtr *getMFTabs           (void) const;
                  MFUnrecComponentPtr *editMFTabs           (void);
            const MFUnrecComponentPtr *getMFTabContents    (void) const;
                  MFUnrecComponentPtr *editMFTabContents    (void);

                  SFUInt32            *editSFTabPlacement   (void);
            const SFUInt32            *getSFTabPlacement    (void) const;

                  SFReal32            *editSFTabAlignment   (void);
            const SFReal32            *getSFTabAlignment    (void) const;

                  SFUInt32            *editSFTabRotation    (void);
            const SFUInt32            *getSFTabRotation     (void) const;

                  SFVec4f             *editSFTabBorderInsets(void);
            const SFVec4f             *getSFTabBorderInsets (void) const;
            const SFUnrecBorderPtr    *getSFTabBorder      (void) const;
                  SFUnrecBorderPtr    *editSFTabBorder      (void);
            const SFUnrecLayerPtr     *getSFTabBackground  (void) const;
                  SFUnrecLayerPtr     *editSFTabBackground  (void);
            const SFUnrecBorderPtr    *getSFTabDisabledBorder(void) const;
                  SFUnrecBorderPtr    *editSFTabDisabledBorder(void);
            const SFUnrecLayerPtr     *getSFTabDisabledBackground(void) const;
                  SFUnrecLayerPtr     *editSFTabDisabledBackground(void);
            const SFUnrecBorderPtr    *getSFTabFocusedBorder(void) const;
                  SFUnrecBorderPtr    *editSFTabFocusedBorder(void);
            const SFUnrecLayerPtr     *getSFTabFocusedBackground(void) const;
                  SFUnrecLayerPtr     *editSFTabFocusedBackground(void);
            const SFUnrecBorderPtr    *getSFTabRolloverBorder(void) const;
                  SFUnrecBorderPtr    *editSFTabRolloverBorder(void);
            const SFUnrecLayerPtr     *getSFTabRolloverBackground(void) const;
                  SFUnrecLayerPtr     *editSFTabRolloverBackground(void);
            const SFUnrecBorderPtr    *getSFTabActiveBorder(void) const;
                  SFUnrecBorderPtr    *editSFTabActiveBorder(void);
            const SFUnrecLayerPtr     *getSFTabActiveBackground(void) const;
                  SFUnrecLayerPtr     *editSFTabActiveBackground(void);

                  SFVec2f             *editSFContentBorderInsets(void);
            const SFVec2f             *getSFContentBorderInsets (void) const;
            const SFUnrecBorderPtr    *getSFContentBorder  (void) const;
                  SFUnrecBorderPtr    *editSFContentBorder  (void);
            const SFUnrecLayerPtr     *getSFContentBackground(void) const;
                  SFUnrecLayerPtr     *editSFContentBackground(void);
            const SFUnrecBorderPtr    *getSFContentDisabledBorder(void) const;
                  SFUnrecBorderPtr    *editSFContentDisabledBorder(void);
            const SFUnrecLayerPtr     *getSFContentDisabledBackground(void) const;
                  SFUnrecLayerPtr     *editSFContentDisabledBackground(void);
            const SFUnrecBorderPtr    *getSFContentRolloverBorder(void) const;
                  SFUnrecBorderPtr    *editSFContentRolloverBorder(void);
            const SFUnrecLayerPtr     *getSFContentRolloverBackground(void) const;
                  SFUnrecLayerPtr     *editSFContentRolloverBackground(void);


                  Component * getTabs           (const UInt32 index) const;

                  Component * getTabContents    (const UInt32 index) const;

                  UInt32              &editTabPlacement   (void);
                  UInt32               getTabPlacement    (void) const;

                  Real32              &editTabAlignment   (void);
                  Real32               getTabAlignment    (void) const;

                  UInt32              &editTabRotation    (void);
                  UInt32               getTabRotation     (void) const;

                  Vec4f               &editTabBorderInsets(void);
            const Vec4f               &getTabBorderInsets (void) const;

                  Border * getTabBorder      (void) const;

                  Layer * getTabBackground  (void) const;

                  Border * getTabDisabledBorder(void) const;

                  Layer * getTabDisabledBackground(void) const;

                  Border * getTabFocusedBorder(void) const;

                  Layer * getTabFocusedBackground(void) const;

                  Border * getTabRolloverBorder(void) const;

                  Layer * getTabRolloverBackground(void) const;

                  Border * getTabActiveBorder(void) const;

                  Layer * getTabActiveBackground(void) const;

                  Vec2f               &editContentBorderInsets(void);
            const Vec2f               &getContentBorderInsets (void) const;

                  Border * getContentBorder  (void) const;

                  Layer * getContentBackground(void) const;

                  Border * getContentDisabledBorder(void) const;

                  Layer * getContentDisabledBackground(void) const;

                  Border * getContentRolloverBorder(void) const;

                  Layer * getContentRolloverBackground(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTabPlacement   (const UInt32 value);
            void setTabAlignment   (const Real32 value);
            void setTabRotation    (const UInt32 value);
            void setTabBorderInsets(const Vec4f &value);
            void setTabBorder      (Border * const value);
            void setTabBackground  (Layer * const value);
            void setTabDisabledBorder(Border * const value);
            void setTabDisabledBackground(Layer * const value);
            void setTabFocusedBorder(Border * const value);
            void setTabFocusedBackground(Layer * const value);
            void setTabRolloverBorder(Border * const value);
            void setTabRolloverBackground(Layer * const value);
            void setTabActiveBorder(Border * const value);
            void setTabActiveBackground(Layer * const value);
            void setContentBorderInsets(const Vec2f &value);
            void setContentBorder  (Border * const value);
            void setContentBackground(Layer * const value);
            void setContentDisabledBorder(Border * const value);
            void setContentDisabledBackground(Layer * const value);
            void setContentRolloverBorder(Border * const value);
            void setContentRolloverBackground(Layer * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToTabs                (Component * const value   );
    void assignTabs               (const MFUnrecComponentPtr &value);
    void removeFromTabs  (UInt32               uiIndex );
    void removeObjFromTabs(Component * const value   );
    void clearTabs                  (void                         );

    void pushToTabContents           (Component * const value   );
    void assignTabContents          (const MFUnrecComponentPtr &value);
    void removeFromTabContents (UInt32               uiIndex );
    void removeObjFromTabContents(Component * const value   );
    void clearTabContents            (void                         );

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

    static  TabPanelTransitPtr  create          (void);
    static  TabPanel           *createEmpty     (void);

    static  TabPanelTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TabPanel            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TabPanelTransitPtr  createDependent  (BitVector bFlags);

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

    MFUnrecComponentPtr _mfTabs;
    MFUnrecComponentPtr _mfTabContents;
    SFUInt32          _sfTabPlacement;
    SFReal32          _sfTabAlignment;
    SFUInt32          _sfTabRotation;
    SFVec4f           _sfTabBorderInsets;
    SFUnrecBorderPtr  _sfTabBorder;
    SFUnrecLayerPtr   _sfTabBackground;
    SFUnrecBorderPtr  _sfTabDisabledBorder;
    SFUnrecLayerPtr   _sfTabDisabledBackground;
    SFUnrecBorderPtr  _sfTabFocusedBorder;
    SFUnrecLayerPtr   _sfTabFocusedBackground;
    SFUnrecBorderPtr  _sfTabRolloverBorder;
    SFUnrecLayerPtr   _sfTabRolloverBackground;
    SFUnrecBorderPtr  _sfTabActiveBorder;
    SFUnrecLayerPtr   _sfTabActiveBackground;
    SFVec2f           _sfContentBorderInsets;
    SFUnrecBorderPtr  _sfContentBorder;
    SFUnrecLayerPtr   _sfContentBackground;
    SFUnrecBorderPtr  _sfContentDisabledBorder;
    SFUnrecLayerPtr   _sfContentDisabledBackground;
    SFUnrecBorderPtr  _sfContentRolloverBorder;
    SFUnrecLayerPtr   _sfContentRolloverBackground;
    SFUnrecSingleSelectionModelPtr _sfSelectionModel;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TabPanelBase(void);
    TabPanelBase(const TabPanelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TabPanelBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TabPanel *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleTabs            (void) const;
    EditFieldHandlePtr editHandleTabs           (void);
    GetFieldHandlePtr  getHandleTabContents     (void) const;
    EditFieldHandlePtr editHandleTabContents    (void);
    GetFieldHandlePtr  getHandleTabPlacement    (void) const;
    EditFieldHandlePtr editHandleTabPlacement   (void);
    GetFieldHandlePtr  getHandleTabAlignment    (void) const;
    EditFieldHandlePtr editHandleTabAlignment   (void);
    GetFieldHandlePtr  getHandleTabRotation     (void) const;
    EditFieldHandlePtr editHandleTabRotation    (void);
    GetFieldHandlePtr  getHandleTabBorderInsets (void) const;
    EditFieldHandlePtr editHandleTabBorderInsets(void);
    GetFieldHandlePtr  getHandleTabBorder       (void) const;
    EditFieldHandlePtr editHandleTabBorder      (void);
    GetFieldHandlePtr  getHandleTabBackground   (void) const;
    EditFieldHandlePtr editHandleTabBackground  (void);
    GetFieldHandlePtr  getHandleTabDisabledBorder (void) const;
    EditFieldHandlePtr editHandleTabDisabledBorder(void);
    GetFieldHandlePtr  getHandleTabDisabledBackground (void) const;
    EditFieldHandlePtr editHandleTabDisabledBackground(void);
    GetFieldHandlePtr  getHandleTabFocusedBorder (void) const;
    EditFieldHandlePtr editHandleTabFocusedBorder(void);
    GetFieldHandlePtr  getHandleTabFocusedBackground (void) const;
    EditFieldHandlePtr editHandleTabFocusedBackground(void);
    GetFieldHandlePtr  getHandleTabRolloverBorder (void) const;
    EditFieldHandlePtr editHandleTabRolloverBorder(void);
    GetFieldHandlePtr  getHandleTabRolloverBackground (void) const;
    EditFieldHandlePtr editHandleTabRolloverBackground(void);
    GetFieldHandlePtr  getHandleTabActiveBorder (void) const;
    EditFieldHandlePtr editHandleTabActiveBorder(void);
    GetFieldHandlePtr  getHandleTabActiveBackground (void) const;
    EditFieldHandlePtr editHandleTabActiveBackground(void);
    GetFieldHandlePtr  getHandleContentBorderInsets (void) const;
    EditFieldHandlePtr editHandleContentBorderInsets(void);
    GetFieldHandlePtr  getHandleContentBorder   (void) const;
    EditFieldHandlePtr editHandleContentBorder  (void);
    GetFieldHandlePtr  getHandleContentBackground (void) const;
    EditFieldHandlePtr editHandleContentBackground(void);
    GetFieldHandlePtr  getHandleContentDisabledBorder (void) const;
    EditFieldHandlePtr editHandleContentDisabledBorder(void);
    GetFieldHandlePtr  getHandleContentDisabledBackground (void) const;
    EditFieldHandlePtr editHandleContentDisabledBackground(void);
    GetFieldHandlePtr  getHandleContentRolloverBorder (void) const;
    EditFieldHandlePtr editHandleContentRolloverBorder(void);
    GetFieldHandlePtr  getHandleContentRolloverBackground (void) const;
    EditFieldHandlePtr editHandleContentRolloverBackground(void);
    GetFieldHandlePtr  getHandleSelectionModel  (void) const;
    EditFieldHandlePtr editHandleSelectionModel (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecSingleSelectionModelPtr *getSFSelectionModel  (void) const;
                  SFUnrecSingleSelectionModelPtr *editSFSelectionModel (void);


                  SingleSelectionModel * getSelectionModel (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSelectionModel (SingleSelectionModel * const value);

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

            void execSync (      TabPanelBase *pFrom,
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
    void operator =(const TabPanelBase &source);
};

typedef TabPanelBase *TabPanelBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTABPANELBASE_H_ */
