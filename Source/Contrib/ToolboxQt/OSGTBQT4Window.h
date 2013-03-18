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

#ifndef _OSGTBQT4WINDOW_H_
#define _OSGTBQT4WINDOW_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTBQT4WindowBase.h"

#include "OSGKeyEventDetails.h"
#include "OSGWindowEventProducer.h"

OSG_BEGIN_NAMESPACE

/*! \brief TBQT4Window class. See \ref
           PageWindowTBQT4Window for a description.
*/
#define CPP11_OVERRIDE override

class OSG_CONTRIBTOOLBOXQT_DLLMAPPING TBQT4Window : public TBQT4WindowBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TBQT4WindowBase Inherited;
    typedef TBQT4Window     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    //WindowEventProducer Interface:
    virtual bool attachWindow(void) CPP11_OVERRIDE;
    virtual Window* initWindow(void) CPP11_OVERRIDE;
    virtual void mainLoop(void) CPP11_OVERRIDE;

    //Set the Window Position
    virtual void setPosition(Pnt2f Pos) CPP11_OVERRIDE;

    //Set the Window Position
    virtual Pnt2f getPosition(void) const CPP11_OVERRIDE;

    //Set the Window size
    virtual void setSize(Vec2us Size) CPP11_OVERRIDE;

    //Get the Window size
    virtual Vec2f getSize(void) const CPP11_OVERRIDE;

    //Focused
    //Set the Window Focus
    virtual void setFocused(bool Focused) CPP11_OVERRIDE;

    //Get the Window Focus
    virtual bool getFocused(void) const CPP11_OVERRIDE;

    //Visible / Iconify / Normal
    //Set the Window Visible
    virtual void setVisible(bool Visible) CPP11_OVERRIDE;

    //Get the Window Visible
    virtual bool getVisible(void) const CPP11_OVERRIDE;

    //Set the Window Iconify
    virtual void setIconify(bool Iconify) CPP11_OVERRIDE;

    //Get the Window Iconify
    virtual bool getIconify(void) const CPP11_OVERRIDE;

    //Fullscreen
    virtual void setFullscreen(bool Fullscreen) CPP11_OVERRIDE;

    //Set the text on the Title bar of the window
    virtual void setTitle(const std::string& TitleText) CPP11_OVERRIDE;

    //Get the text of the Title bar of the window
    virtual std::string getTitle(void) CPP11_OVERRIDE;

    //Set the window to allow or not allow Resizing
    virtual void setResizable(bool IsResizable) CPP11_OVERRIDE;

    //Get whether or not the window allows resizing
    virtual bool getResizable(void) CPP11_OVERRIDE;

    //Set the window to draw or not draw it's border
    virtual void setDrawBorder(bool DrawBorder) CPP11_OVERRIDE;

    //Get wether or not the window is drawing a border
    virtual bool getDrawBorder(void) CPP11_OVERRIDE;

    //Get the Window Fullscreen
    virtual bool getFullscreen(void) const CPP11_OVERRIDE;

    virtual void setShowCursor(bool showCursor) CPP11_OVERRIDE;

    virtual bool getShowCursor(void) const CPP11_OVERRIDE;

    virtual void setAttachMouseToCursor(bool attach) CPP11_OVERRIDE;

    virtual bool getAttachMouseToCursor(void) const CPP11_OVERRIDE;

    virtual UInt32 getKeyModifiers(void) const CPP11_OVERRIDE;
    virtual KeyEventDetails::KeyState getKeyState(KeyEventDetails::Key TheKey) const CPP11_OVERRIDE;
    virtual Pnt2f getMousePosition(void) const CPP11_OVERRIDE;

    virtual std::string getClipboard(void) const CPP11_OVERRIDE;

    virtual void putClipboard(const std::string Value) CPP11_OVERRIDE;

    virtual void openWindow(const Pnt2f& ScreenPosition,
                            const Vec2f& Size,
                            const std::string& WindowName) CPP11_OVERRIDE;

    virtual void closeWindow(void) CPP11_OVERRIDE;

    virtual void draw(void) CPP11_OVERRIDE;
    virtual void update(void) CPP11_OVERRIDE;

    virtual Vec2f getDesktopSize(void) const CPP11_OVERRIDE;

    virtual std::vector<BoostPath> openFileDialog(const std::string& WindowTitle,
                                             const std::vector<OSG::WindowEventProducer::FileDialogFilter>& Filters,
                                             const BoostPath& InitialDir,
                                             bool AllowMultiSelect) CPP11_OVERRIDE;

    virtual BoostPath saveFileDialog(const std::string& DialogTitle,
                                const std::vector<OSG::WindowEventProducer::FileDialogFilter>& Filters,
                                const std::string& InitialFile,
                                const BoostPath& InitialDirectory,
                                bool PromptForOverwrite
                               ) CPP11_OVERRIDE;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:
    virtual void setCursor(void) CPP11_OVERRIDE;

    // Variables should all be in TBQT4WindowBase.
	virtual void init(GLInitFunctor oFunc = GLInitFunctor());
	virtual void terminate   (void) CPP11_OVERRIDE;	
    virtual void doActivate  (void) CPP11_OVERRIDE;
    virtual void doDeactivate(void) CPP11_OVERRIDE;
    virtual bool doSwap      (void) CPP11_OVERRIDE;

    virtual bool hasContext  (void) CPP11_OVERRIDE;

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TBQT4Window(void);
    TBQT4Window(const TBQT4Window &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TBQT4Window(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class TBQT4WindowBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TBQT4Window &source);
};

typedef TBQT4Window *TBQT4WindowP;

OSG_END_NAMESPACE

#include "OSGTBQT4WindowBase.inl"
#include "OSGTBQT4Window.inl"

#endif /* _OSGTBQT4WINDOW_H_ */
