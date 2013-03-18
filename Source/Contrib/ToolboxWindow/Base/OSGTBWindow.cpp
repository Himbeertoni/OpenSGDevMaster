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

#include "OSGTBWindow.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTBWindowBase.cpp file.
// To modify it, please change the .fcd file (OSGTBWindow.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TBWindow::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
#if 0
void TBWindow::openWindow(const Pnt2f& screenPosition,
                       const Vec2f& size,
                       const std::string& windowName)
{
    //getWindow()->openWindow( screenPosition, size, windowName );
}


void TBWindow::closeWindow(void)
{
    //getWindow()->closeWindow();
}
    
void TBWindow::mainLoop(void)
{
    //getWindow()->mainLoop();
}

void TBWindow::setPosition(Pnt2f pos)
{
    //getWindow()->setPosition( pos );
}

Pnt2f TBWindow::getPosition(void) const
{
    return Pnt2f();//getWindow()->getPosition();
}

void TBWindow::setSize(Vec2us size)
{
    //getWindow()->setSize( size );
}

void TBWindow::setSize(UInt16 width, UInt16 height)
{
	//getWindow()->setSize( width, height );
}

Vec2f TBWindow::getSize(void) const
{
    return Vec2f();//getWindow()->getSize();
}

void TBWindow::setFocused(bool focused)
{
    //getWindow()->setFocused( focused );
}

bool TBWindow::getFocused(void) const
{
	return false;//getWindow()->getFocused();
}

void TBWindow::setVisible(bool visible)
{
	//getWindow()->setVisible( visible );
}

bool TBWindow::getVisible(void) const
{
	return false;//getWindow()->getVisible();
}

void TBWindow::setIconify(bool iconify)
{
	//getWindow()->setIconify( iconify );
}

bool TBWindow::getIconify(void) const
{
	return false;//getWindow()->getIconify();
}

void TBWindow::setFullscreen(bool fullscreen)
{
	//getWindow()->setFullscreen( fullscreen );
}

bool TBWindow::getFullscreen(void) const
{
    return false;//getWindow()->getFullscreen();
}

void TBWindow::setTitle(const std::string& titleText)
{
	//getWindow()->setTitle( titleText );
}

std::string TBWindow::getTitle(void)
{
    return std::string();//getWindow()->getTitle();
}

void TBWindow::setResizable(bool isResizable)
{
	//getWindow()->setResizable( isResizable );
}

bool TBWindow::getResizable(void)
{
	return false;//getWindow()->getResizable();
}

void TBWindow::setDrawBorder(bool drawBorder)
{
    //getWindow()->setDrawBorder( drawBorder );
}

bool TBWindow::getDrawBorder(void)
{
	return false;//getWindow()->getDrawBorder();
}

void TBWindow::setShowCursor(bool showCursor)
{
	//getWindow()->setShowCursor( showCursor );
}

bool TBWindow::getShowCursor(void) const
{
	return false;//getWindow()->getShowCursor();
}
    
void TBWindow::setAttachMouseToCursor(bool attach)
{
	//getWindow()->setAttachMouseToCursor( attach );
}
    
bool TBWindow::getAttachMouseToCursor(void) const
{
	return false;//getWindow()->getAttachMouseToCursor();
}

Vec2f TBWindow::getDesktopSize(void) const
{
	return Vec2f();//getWindow()->getDesktopSize();
}

std::vector<BoostPath> TBWindow::openFileDialog(const std::string& windowTitle,
        const std::vector<OSG::WindowEventProducer::FileDialogFilter>& filters,
        const BoostPath& initialDir,
        bool allowMultiSelect)
{
	return std::vector<BoostPath>();//getWindow()->openFileDialog( windowTitle, filters, initialDir, allowMultiSelect );
}

BoostPath TBWindow::saveFileDialog(const std::string& dialogTitle,
                    const std::vector<OSG::WindowEventProducer::FileDialogFilter>& filters,
                    const std::string& initialFile,
                    const BoostPath& initialDirectory,
                    bool promptForOverwrite
                    )
{
	return BoostPath();//getWindow()->saveFileDialog( dialogTitle, filters, initialFile, initialDirectory, promptForOverwrite );
}


void TBWindow::draw(void)
{
	//getWindow()->draw();
}

void TBWindow::update(void)
{
	//getWindow()->update();
}

bool TBWindow::attachWindow(void)
{
	return false;//getWindow()->attachWindow();
}

UInt32 TBWindow::getKeyModifiers(void) const
{
	return 0u;//getWindow()->getKeyModifiers();
}

KeyEventDetails::KeyState TBWindow::getKeyState(KeyEventDetails::Key theKey) const
{
	return KeyEventDetails::KeyState();//getWindow()->getKeyState( theKey );
}
    
Pnt2f TBWindow::getMousePosition(void) const
{
	return Pnt2f();//getWindow()->getMousePosition();
}

std::string TBWindow::getClipboard(void) const
{
	return std::string();//getWindow()->getClipboard();
}

void TBWindow::putClipboard(const std::string& value)
{
	//getWindow()->putClipboard( value );
}
#endif
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

TBWindow::TBWindow(void) :
    Inherited()
{
}

TBWindow::TBWindow(const TBWindow &source) :
    Inherited(source)
{
}

TBWindow::~TBWindow(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TBWindow::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TBWindow::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TBWindow NI" << std::endl;
}

OSG_END_NAMESPACE
