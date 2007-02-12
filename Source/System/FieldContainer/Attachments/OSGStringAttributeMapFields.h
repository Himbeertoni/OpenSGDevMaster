/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSTRINGATTRIBUTEMAPFIELDS_H_
#define _OSGSTRINGATTRIBUTEMAPFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerAttachmentFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class StringAttributeMap;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! StringAttributeMapPtr

typedef PointerFwdBuilder<FieldContainerAttachmentPtr,
                          FieldContainerAttachmentConstPtr,
                          StringAttributeMap>::ObjPtr         StringAttributeMapPtr;
typedef PointerFwdBuilder<FieldContainerAttachmentPtr,
                          FieldContainerAttachmentConstPtr,
                          StringAttributeMap>::ObjPtrConst    StringAttributeMapPtrConst;
typedef PointerFwdBuilder<FieldContainerAttachmentPtr,
                          FieldContainerAttachmentConstPtr,
                          StringAttributeMap>::ObjConstPtr    StringAttributeMapConstPtr;
typedef PointerFwdBuilder<FieldContainerAttachmentPtr,
                          FieldContainerAttachmentConstPtr,
                          StringAttributeMap>::ObjPtrArg      StringAttributeMapPtrArg;
typedef PointerFwdBuilder<FieldContainerAttachmentPtr,
                          FieldContainerAttachmentConstPtr,
                          StringAttributeMap>::ObjConstPtrArg StringAttributeMapConstPtrArg;
typedef PointerFwdBuilder<FieldContainerAttachmentPtr,
                          FieldContainerAttachmentConstPtr,
                          StringAttributeMap>::ObjPtrConstArg StringAttributeMapPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<StringAttributeMapPtr> :
    public FieldTraitsTemplateBase<StringAttributeMapPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<StringAttributeMapPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    static const char *getSName(void) { return "SFStringAttributeMapPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<StringAttributeMapPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef SFieldAdaptor<StringAttributeMapPtr, SFFieldContainerPtr> SFStringAttributeMapPtr;
#endif

#ifndef OSG_COMPILESTRINGATTRIBUTEMAPINST
OSG_FIELD_DLLEXPORT_DECL1(SField, StringAttributeMapPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGSTRINGATTRIBUTEMAPFIELDS_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGSTRINGATTRIBUTEMAPFIELDS_H_ */
