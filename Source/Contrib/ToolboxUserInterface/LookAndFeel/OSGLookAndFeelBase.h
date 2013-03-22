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
 **     class LookAndFeel
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLOOKANDFEELBASE_H_
#define _OSGLOOKANDFEELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGFieldContainer.h" // Parent

#include "OSGFieldContainerFields.h"    // Prototypes type
#include "OSGBaseFields.h"              // TextCaretRate type
#include "OSGComponentFields.h"         // DefaultToolTip type

#include "OSGLookAndFeelFields.h"

OSG_BEGIN_NAMESPACE

class LookAndFeel;

//! \brief LookAndFeel Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING LookAndFeelBase : public FieldContainer
{
  public:

    typedef FieldContainer Inherited;
    typedef FieldContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(LookAndFeel);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PrototypesFieldId = Inherited::NextFieldId,
        TextCaretRateFieldId = PrototypesFieldId + 1,
        ToolTipPopupTimeFieldId = TextCaretRateFieldId + 1,
        SubMenuPopupTimeFieldId = ToolTipPopupTimeFieldId + 1,
        KeyAcceleratorMenuFlashTimeFieldId = SubMenuPopupTimeFieldId + 1,
        DefaultToolTipFieldId = KeyAcceleratorMenuFlashTimeFieldId + 1,
        NextFieldId = DefaultToolTipFieldId + 1
    };

    static const OSG::BitVector PrototypesFieldMask =
        (TypeTraits<BitVector>::One << PrototypesFieldId);
    static const OSG::BitVector TextCaretRateFieldMask =
        (TypeTraits<BitVector>::One << TextCaretRateFieldId);
    static const OSG::BitVector ToolTipPopupTimeFieldMask =
        (TypeTraits<BitVector>::One << ToolTipPopupTimeFieldId);
    static const OSG::BitVector SubMenuPopupTimeFieldMask =
        (TypeTraits<BitVector>::One << SubMenuPopupTimeFieldId);
    static const OSG::BitVector KeyAcceleratorMenuFlashTimeFieldMask =
        (TypeTraits<BitVector>::One << KeyAcceleratorMenuFlashTimeFieldId);
    static const OSG::BitVector DefaultToolTipFieldMask =
        (TypeTraits<BitVector>::One << DefaultToolTipFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFUnrecFieldContainerPtr MFPrototypesType;
    typedef SFTime            SFTextCaretRateType;
    typedef SFTime            SFToolTipPopupTimeType;
    typedef SFTime            SFSubMenuPopupTimeType;
    typedef SFTime            SFKeyAcceleratorMenuFlashTimeType;
    typedef SFUnrecComponentPtr SFDefaultToolTipType;

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


                  SFTime              *editSFTextCaretRate  (void);
            const SFTime              *getSFTextCaretRate   (void) const;

                  SFTime              *editSFToolTipPopupTime(void);
            const SFTime              *getSFToolTipPopupTime (void) const;

                  SFTime              *editSFSubMenuPopupTime(void);
            const SFTime              *getSFSubMenuPopupTime (void) const;

                  SFTime              *editSFKeyAcceleratorMenuFlashTime(void);
            const SFTime              *getSFKeyAcceleratorMenuFlashTime (void) const;
            const SFUnrecComponentPtr *getSFDefaultToolTip (void) const;
                  SFUnrecComponentPtr *editSFDefaultToolTip (void);


                  Time                &editTextCaretRate  (void);
            const Time                &getTextCaretRate   (void) const;

                  Time                &editToolTipPopupTime(void);
            const Time                &getToolTipPopupTime (void) const;

                  Time                &editSubMenuPopupTime(void);
            const Time                &getSubMenuPopupTime (void) const;

                  Time                &editKeyAcceleratorMenuFlashTime(void);
            const Time                &getKeyAcceleratorMenuFlashTime (void) const;

                  Component * getDefaultToolTip (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTextCaretRate  (const Time &value);
            void setToolTipPopupTime(const Time &value);
            void setSubMenuPopupTime(const Time &value);
            void setKeyAcceleratorMenuFlashTime(const Time &value);
            void setDefaultToolTip (Component * const value);

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
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFUnrecFieldContainerPtr _mfPrototypes;
    SFTime            _sfTextCaretRate;
    SFTime            _sfToolTipPopupTime;
    SFTime            _sfSubMenuPopupTime;
    SFTime            _sfKeyAcceleratorMenuFlashTime;
    SFUnrecComponentPtr _sfDefaultToolTip;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LookAndFeelBase(void);
    LookAndFeelBase(const LookAndFeelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LookAndFeelBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const LookAndFeel *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandlePrototypes      (void) const;
    EditFieldHandlePtr editHandlePrototypes     (void);
    GetFieldHandlePtr  getHandleTextCaretRate   (void) const;
    EditFieldHandlePtr editHandleTextCaretRate  (void);
    GetFieldHandlePtr  getHandleToolTipPopupTime (void) const;
    EditFieldHandlePtr editHandleToolTipPopupTime(void);
    GetFieldHandlePtr  getHandleSubMenuPopupTime (void) const;
    EditFieldHandlePtr editHandleSubMenuPopupTime(void);
    GetFieldHandlePtr  getHandleKeyAcceleratorMenuFlashTime (void) const;
    EditFieldHandlePtr editHandleKeyAcceleratorMenuFlashTime(void);
    GetFieldHandlePtr  getHandleDefaultToolTip  (void) const;
    EditFieldHandlePtr editHandleDefaultToolTip (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const MFUnrecFieldContainerPtr *getMFPrototypes      (void) const;
                  MFUnrecFieldContainerPtr *editMFPrototypes     (void);


                  FieldContainer * getPrototypes     (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToPrototypes           (FieldContainer * const value   );
    void assignPrototypes           (const MFUnrecFieldContainerPtr &value);
    void removeFromPrototypes (UInt32                uiIndex );
    void removeObjFromPrototypes(FieldContainer * const value   );
    void clearPrototypes            (void                          );

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

            void execSync (      LookAndFeelBase *pFrom,
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
    void operator =(const LookAndFeelBase &source);
};

typedef LookAndFeelBase *LookAndFeelBaseP;

OSG_END_NAMESPACE

#endif /* _OSGLOOKANDFEELBASE_H_ */