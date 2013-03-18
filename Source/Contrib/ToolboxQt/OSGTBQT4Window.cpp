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

#include "OSGTBQT4Window.h"

#include "OSGTBWIN32WindowHelper.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTBQT4WindowBase.cpp file.
// To modify it, please change the .fcd file (OSGTBQT4Window.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TBQT4Window::initMethod(InitPhase ePhase)
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

TBQT4Window::TBQT4Window(void) :
    Inherited()
{
}

TBQT4Window::TBQT4Window(const TBQT4Window &source) :
    Inherited(source)
{
}

TBQT4Window::~TBQT4Window(void)
{
}

void TBQT4Window::init(GLInitFunctor oFunc)
{
	getFuckEverything()->init( oFunc );
}

void TBQT4Window::terminate()
{
	getFuckEverything()->terminate();
}

void TBQT4Window::doActivate  (void)
{
	getFuckEverything()->doActivate();
}

void TBQT4Window::doDeactivate(void)
{
	getFuckEverything()->doDeactivate();
}

bool TBQT4Window::doSwap      (void)
{
	return getFuckEverything()->doSwap();
}

bool TBQT4Window::hasContext  (void)
{
	return getFuckEverything()->hasContext();
}

/*----------------------------- class specific ----------------------------*/

void TBQT4Window::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TBQT4Window::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TBQT4Window NI" << std::endl;
}

OSG_END_NAMESPACE
