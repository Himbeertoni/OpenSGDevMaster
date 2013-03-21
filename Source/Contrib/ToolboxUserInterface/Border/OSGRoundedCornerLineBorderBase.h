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
 **     class RoundedCornerLineBorder
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGROUNDEDCORNERLINEBORDERBASE_H_
#define _OSGROUNDEDCORNERLINEBORDERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGBorder.h" // Parent

#include "OSGSysFields.h"               // Width type
#include "OSGBaseFields.h"              // Color type

#include "OSGRoundedCornerLineBorderFields.h"

OSG_BEGIN_NAMESPACE

class RoundedCornerLineBorder;

//! \brief RoundedCornerLineBorder Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING RoundedCornerLineBorderBase : public Border
{
  public:

    typedef Border Inherited;
    typedef Border ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(RoundedCornerLineBorder);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        WidthFieldId = Inherited::NextFieldId,
        ColorFieldId = WidthFieldId + 1,
        CornerRadiusFieldId = ColorFieldId + 1,
        NextFieldId = CornerRadiusFieldId + 1
    };

    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector ColorFieldMask =
        (TypeTraits<BitVector>::One << ColorFieldId);
    static const OSG::BitVector CornerRadiusFieldMask =
        (TypeTraits<BitVector>::One << CornerRadiusFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFWidthType;
    typedef SFColor4f         SFColorType;
    typedef SFReal32          SFCornerRadiusType;

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


                  SFReal32            *editSFWidth          (void);
            const SFReal32            *getSFWidth           (void) const;

                  SFColor4f           *editSFColor          (void);
            const SFColor4f           *getSFColor           (void) const;

                  SFReal32            *editSFCornerRadius   (void);
            const SFReal32            *getSFCornerRadius    (void) const;


                  Real32              &editWidth          (void);
                  Real32               getWidth           (void) const;

                  Color4f             &editColor          (void);
            const Color4f             &getColor           (void) const;

                  Real32              &editCornerRadius   (void);
                  Real32               getCornerRadius    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setWidth          (const Real32 value);
            void setColor          (const Color4f &value);
            void setCornerRadius   (const Real32 value);

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

    static  RoundedCornerLineBorderTransitPtr  create          (void);
    static  RoundedCornerLineBorder           *createEmpty     (void);

    static  RoundedCornerLineBorderTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  RoundedCornerLineBorder            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  RoundedCornerLineBorderTransitPtr  createDependent  (BitVector bFlags);

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

    SFReal32          _sfWidth;
    SFColor4f         _sfColor;
    SFReal32          _sfCornerRadius;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    RoundedCornerLineBorderBase(void);
    RoundedCornerLineBorderBase(const RoundedCornerLineBorderBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~RoundedCornerLineBorderBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleColor           (void) const;
    EditFieldHandlePtr editHandleColor          (void);
    GetFieldHandlePtr  getHandleCornerRadius    (void) const;
    EditFieldHandlePtr editHandleCornerRadius   (void);

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

            void execSync (      RoundedCornerLineBorderBase *pFrom,
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
    void operator =(const RoundedCornerLineBorderBase &source);
};

typedef RoundedCornerLineBorderBase *RoundedCornerLineBorderBaseP;

OSG_END_NAMESPACE

#endif /* _OSGROUNDEDCORNERLINEBORDERBASE_H_ */
