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
 **     class AbstractTreeModelLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGAbstractTreeModelLayoutBase.h"
#include "OSGAbstractTreeModelLayout.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AbstractTreeModelLayout
    A UI Abstract Tree Model Layout.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            AbstractTreeModelLayoutBase::_sfRootVisibleInternal
    Is the tree model root visible.
*/

/*! \var Real32          AbstractTreeModelLayoutBase::_sfRowHeightInternal
    The Row Height.
*/

/*! \var Real32          AbstractTreeModelLayoutBase::_sfDepthOffsetInternal
    The Depth Offset.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<AbstractTreeModelLayout *>::_type("AbstractTreeModelLayoutPtr", "TreeModelLayoutPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(AbstractTreeModelLayout *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AbstractTreeModelLayout *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AbstractTreeModelLayout *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AbstractTreeModelLayoutBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "RootVisibleInternal",
        "Is the tree model root visible.\n",
        RootVisibleInternalFieldId, RootVisibleInternalFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AbstractTreeModelLayout::editHandleRootVisibleInternal),
        static_cast<FieldGetMethodSig >(&AbstractTreeModelLayout::getHandleRootVisibleInternal));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "RowHeightInternal",
        "The Row Height.\n",
        RowHeightInternalFieldId, RowHeightInternalFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AbstractTreeModelLayout::editHandleRowHeightInternal),
        static_cast<FieldGetMethodSig >(&AbstractTreeModelLayout::getHandleRowHeightInternal));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "DepthOffsetInternal",
        "The Depth Offset.\n",
        DepthOffsetInternalFieldId, DepthOffsetInternalFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AbstractTreeModelLayout::editHandleDepthOffsetInternal),
        static_cast<FieldGetMethodSig >(&AbstractTreeModelLayout::getHandleDepthOffsetInternal));

    oType.addInitialDesc(pDesc);
}


AbstractTreeModelLayoutBase::TypeObject AbstractTreeModelLayoutBase::_type(
    AbstractTreeModelLayoutBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    AbstractTreeModelLayout::initMethod,
    AbstractTreeModelLayout::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AbstractTreeModelLayout::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"AbstractTreeModelLayout\"\n"
    "\tparent=\"TreeModelLayout\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    >\n"
    "    A UI Abstract Tree Model Layout.\n"
    "    <Field\n"
    "        name=\"RootVisibleInternal\"\n"
    "        type=\"bool\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"false\"\n"
    "        access=\"protected\"\n"
    "        >\n"
    "        Is the tree model root visible.\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"RowHeightInternal\"\n"
    "        type=\"Real32\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"13.0\"\n"
    "        access=\"protected\"\n"
    "        >\n"
    "        The Row Height.\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"DepthOffsetInternal\"\n"
    "        type=\"Real32\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"15.0\"\n"
    "        access=\"protected\"\n"
    "        >\n"
    "        The Depth Offset.\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "A UI Abstract Tree Model Layout.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AbstractTreeModelLayoutBase::getType(void)
{
    return _type;
}

const FieldContainerType &AbstractTreeModelLayoutBase::getType(void) const
{
    return _type;
}

UInt32 AbstractTreeModelLayoutBase::getContainerSize(void) const
{
    return sizeof(AbstractTreeModelLayout);
}

/*------------------------- decorator get ------------------------------*/


SFBool *AbstractTreeModelLayoutBase::editSFRootVisibleInternal(void)
{
    editSField(RootVisibleInternalFieldMask);

    return &_sfRootVisibleInternal;
}

const SFBool *AbstractTreeModelLayoutBase::getSFRootVisibleInternal(void) const
{
    return &_sfRootVisibleInternal;
}


SFReal32 *AbstractTreeModelLayoutBase::editSFRowHeightInternal(void)
{
    editSField(RowHeightInternalFieldMask);

    return &_sfRowHeightInternal;
}

const SFReal32 *AbstractTreeModelLayoutBase::getSFRowHeightInternal(void) const
{
    return &_sfRowHeightInternal;
}


SFReal32 *AbstractTreeModelLayoutBase::editSFDepthOffsetInternal(void)
{
    editSField(DepthOffsetInternalFieldMask);

    return &_sfDepthOffsetInternal;
}

const SFReal32 *AbstractTreeModelLayoutBase::getSFDepthOffsetInternal(void) const
{
    return &_sfDepthOffsetInternal;
}






/*------------------------------ access -----------------------------------*/

UInt32 AbstractTreeModelLayoutBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RootVisibleInternalFieldMask & whichField))
    {
        returnValue += _sfRootVisibleInternal.getBinSize();
    }
    if(FieldBits::NoField != (RowHeightInternalFieldMask & whichField))
    {
        returnValue += _sfRowHeightInternal.getBinSize();
    }
    if(FieldBits::NoField != (DepthOffsetInternalFieldMask & whichField))
    {
        returnValue += _sfDepthOffsetInternal.getBinSize();
    }

    return returnValue;
}

void AbstractTreeModelLayoutBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RootVisibleInternalFieldMask & whichField))
    {
        _sfRootVisibleInternal.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RowHeightInternalFieldMask & whichField))
    {
        _sfRowHeightInternal.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DepthOffsetInternalFieldMask & whichField))
    {
        _sfDepthOffsetInternal.copyToBin(pMem);
    }
}

void AbstractTreeModelLayoutBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RootVisibleInternalFieldMask & whichField))
    {
        _sfRootVisibleInternal.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RowHeightInternalFieldMask & whichField))
    {
        _sfRowHeightInternal.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DepthOffsetInternalFieldMask & whichField))
    {
        _sfDepthOffsetInternal.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

AbstractTreeModelLayoutBase::AbstractTreeModelLayoutBase(void) :
    Inherited(),
    _sfRootVisibleInternal    (bool(false)),
    _sfRowHeightInternal      (Real32(13.0)),
    _sfDepthOffsetInternal    (Real32(15.0))
{
}

AbstractTreeModelLayoutBase::AbstractTreeModelLayoutBase(const AbstractTreeModelLayoutBase &source) :
    Inherited(source),
    _sfRootVisibleInternal    (source._sfRootVisibleInternal    ),
    _sfRowHeightInternal      (source._sfRowHeightInternal      ),
    _sfDepthOffsetInternal    (source._sfDepthOffsetInternal    )
{
}


/*-------------------------- destructors ----------------------------------*/

AbstractTreeModelLayoutBase::~AbstractTreeModelLayoutBase(void)
{
}


GetFieldHandlePtr AbstractTreeModelLayoutBase::getHandleRootVisibleInternal (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfRootVisibleInternal,
             this->getType().getFieldDesc(RootVisibleInternalFieldId),
             const_cast<AbstractTreeModelLayoutBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AbstractTreeModelLayoutBase::editHandleRootVisibleInternal(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfRootVisibleInternal,
             this->getType().getFieldDesc(RootVisibleInternalFieldId),
             this));


    editSField(RootVisibleInternalFieldMask);

    return returnValue;
}

GetFieldHandlePtr AbstractTreeModelLayoutBase::getHandleRowHeightInternal (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfRowHeightInternal,
             this->getType().getFieldDesc(RowHeightInternalFieldId),
             const_cast<AbstractTreeModelLayoutBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AbstractTreeModelLayoutBase::editHandleRowHeightInternal(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfRowHeightInternal,
             this->getType().getFieldDesc(RowHeightInternalFieldId),
             this));


    editSField(RowHeightInternalFieldMask);

    return returnValue;
}

GetFieldHandlePtr AbstractTreeModelLayoutBase::getHandleDepthOffsetInternal (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfDepthOffsetInternal,
             this->getType().getFieldDesc(DepthOffsetInternalFieldId),
             const_cast<AbstractTreeModelLayoutBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AbstractTreeModelLayoutBase::editHandleDepthOffsetInternal(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfDepthOffsetInternal,
             this->getType().getFieldDesc(DepthOffsetInternalFieldId),
             this));


    editSField(DepthOffsetInternalFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void AbstractTreeModelLayoutBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AbstractTreeModelLayout *pThis = static_cast<AbstractTreeModelLayout *>(this);

    pThis->execSync(static_cast<AbstractTreeModelLayout *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void AbstractTreeModelLayoutBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE