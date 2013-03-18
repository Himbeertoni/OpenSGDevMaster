/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGTBQT4WindowHelper.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTBQT4WindowHelperBase.cpp file.
// To modify it, please change the .fcd file (OSGTBQT4WindowHelper.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TBQT4WindowHelper::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

TBQT4WindowHelper::TBQT4WindowHelper(void) :
    Inherited()
{
}

TBQT4WindowHelper::TBQT4WindowHelper(const TBQT4WindowHelper &source) :
    Inherited(source)
{
}

TBQT4WindowHelper::~TBQT4WindowHelper(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TBQT4WindowHelper::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TBQT4WindowHelper::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TBQT4WindowHelper NI" << std::endl;
}

void TBQT4WindowHelper::terminate(void)
{
	Inherited::terminate();
}

void TBQT4WindowHelper::doActivate  (void)
{
	Inherited::doActivate();
}

void TBQT4WindowHelper::doDeactivate(void)
{
	Inherited::doDeactivate();
}

bool TBQT4WindowHelper::doSwap      (void)
{
	return Inherited::doSwap();
}

bool TBQT4WindowHelper::hasContext  (void)
{
	return Inherited::hasContext();
}

OSG_END_NAMESPACE
