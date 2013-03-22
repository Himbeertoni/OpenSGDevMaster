/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class InternalWindow
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGINTERNALWINDOWBASE_H_
#define _OSGINTERNALWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAbstractWindow.h" // Parent

#include "OSGComponentFields.h"         // FocusedComponent type
#include "OSGPopupMenuFields.h"         // ActivePopupMenus type
#include "OSGMenuBarFields.h"           // MenuBar type
#include "OSGTitlebarFields.h"          // Titlebar type

#include "OSGInternalWindowFields.h"

OSG_BEGIN_NAMESPACE

class InternalWindow;

//! \brief InternalWindow Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING InternalWindowBase : public AbstractWindow
{
  public:

    typedef AbstractWindow Inherited;
    typedef AbstractWindow ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(InternalWindow);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        FocusedComponentFieldId = Inherited::NextFieldId,
        ActivePopupMenusFieldId = FocusedComponentFieldId + 1,
        MenuBarFieldId = ActivePopupMenusFieldId + 1,
        TitlebarFieldId = MenuBarFieldId + 1,
        ToolTipsFieldId = TitlebarFieldId + 1,
        NextFieldId = ToolTipsFieldId + 1
    };

    static const OSG::BitVector FocusedComponentFieldMask =
        (TypeTraits<BitVector>::One << FocusedComponentFieldId);
    static const OSG::BitVector ActivePopupMenusFieldMask =
        (TypeTraits<BitVector>::One << ActivePopupMenusFieldId);
    static const OSG::BitVector MenuBarFieldMask =
        (TypeTraits<BitVector>::One << MenuBarFieldId);
    static const OSG::BitVector TitlebarFieldMask =
        (TypeTraits<BitVector>::One << TitlebarFieldId);
    static const OSG::BitVector ToolTipsFieldMask =
        (TypeTraits<BitVector>::One << ToolTipsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecComponentPtr SFFocusedComponentType;
    typedef MFUnrecPopupMenuPtr MFActivePopupMenusType;
    typedef SFUnrecMenuBarPtr SFMenuBarType;
    typedef SFUnrecTitlebarPtr SFTitlebarType;
    typedef MFUnrecComponentPtr MFToolTipsType;

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

            const SFUnrecComponentPtr *getSFFocusedComponent(void) const;
                  SFUnrecComponentPtr *editSFFocusedComponent(void);
            const MFUnrecPopupMenuPtr *getMFActivePopupMenus(void) const;
                  MFUnrecPopupMenuPtr *editMFActivePopupMenus(void);
            const SFUnrecMenuBarPtr   *getSFMenuBar        (void) const;
                  SFUnrecMenuBarPtr   *editSFMenuBar        (void);
            const SFUnrecTitlebarPtr  *getSFTitlebar       (void) const;
                  SFUnrecTitlebarPtr  *editSFTitlebar       (void);
            const MFUnrecComponentPtr *getMFToolTips       (void) const;
                  MFUnrecComponentPtr *editMFToolTips       (void);


                  Component * getFocusedComponent(void) const;

                  PopupMenu * getActivePopupMenus(const UInt32 index) const;

                  MenuBar * getMenuBar        (void) const;

                  Titlebar * getTitlebar       (void) const;

                  Component * getToolTips       (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setFocusedComponent(Component * const value);
            void setMenuBar        (MenuBar * const value);
            void setTitlebar       (Titlebar * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToActivePopupMenus           (PopupMenu * const value   );
    void assignActivePopupMenus          (const MFUnrecPopupMenuPtr &value);
    void removeFromActivePopupMenus (UInt32               uiIndex );
    void removeObjFromActivePopupMenus(PopupMenu * const value   );
    void clearActivePopupMenus            (void                         );

    void pushToToolTips            (Component * const value   );
    void assignToolTips           (const MFUnrecComponentPtr &value);
    void removeFromToolTips (UInt32               uiIndex );
    void removeObjFromToolTips(Component * const value   );
    void clearToolTips              (void                         );

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

    static  InternalWindowTransitPtr  create          (void);
    static  InternalWindow           *createEmpty     (void);

    static  InternalWindowTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  InternalWindow            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  InternalWindowTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecComponentPtr _sfFocusedComponent;
    MFUnrecPopupMenuPtr _mfActivePopupMenus;
    SFUnrecMenuBarPtr _sfMenuBar;
    SFUnrecTitlebarPtr _sfTitlebar;
    MFUnrecComponentPtr _mfToolTips;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    InternalWindowBase(void);
    InternalWindowBase(const InternalWindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~InternalWindowBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const InternalWindow *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleFocusedComponent (void) const;
    EditFieldHandlePtr editHandleFocusedComponent(void);
    GetFieldHandlePtr  getHandleActivePopupMenus (void) const;
    EditFieldHandlePtr editHandleActivePopupMenus(void);
    GetFieldHandlePtr  getHandleMenuBar         (void) const;
    EditFieldHandlePtr editHandleMenuBar        (void);
    GetFieldHandlePtr  getHandleTitlebar        (void) const;
    EditFieldHandlePtr editHandleTitlebar       (void);
    GetFieldHandlePtr  getHandleToolTips        (void) const;
    EditFieldHandlePtr editHandleToolTips       (void);

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

            void execSync (      InternalWindowBase *pFrom,
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
    void operator =(const InternalWindowBase &source);
};

typedef InternalWindowBase *InternalWindowBaseP;

OSG_END_NAMESPACE

#endif /* _OSGINTERNALWINDOWBASE_H_ */