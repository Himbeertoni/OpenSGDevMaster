// OpenSG Tutorial Example: Creating a Button Component
//
// This tutorial explains how to edit the basic features of
// a Button created in the OSG User Interface library.
// 
// Includes: Button PreferredSize, MaximumSize, MinimumSize, Font,
// Text,and adding a Button to a Scene.  Also note that clicking
// the Button causes it to appear pressed


// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// Methods to create simple geometry: boxes, spheres, tori etc.
#include "OSGSimpleGeometry.h"

// A little helper to simplify scene management and interaction
#include "OSGSimpleSceneManager.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGViewport.h"

// The general scene file loading handler
#include "OSGSceneFileHandler.h"

// Input
//#include <OpenSG/Input/OSGWindowUtils.h>

//Text Foreground
#include "OSGSimpleTextForeground.h"

//Animation
#include "OSGKeyframeSequences.h"
#include "OSGKeyframeAnimator.h"
#include "OSGFieldAnimation.h"

// UserInterface Headers
#include "OSGUIForeground.h"
#include "OSGInternalWindow.h"
#include "OSGUIDrawingSurface.h"
#include "OSGGraphics3DExtrude.h"
#include "OSGLookAndFeelManager.h"

#include "OSGScrollPanel.h"
#include "OSGLabel.h"

// List header files
#include "OSGList.h"
#include "OSGDefaultListModel.h"
#include "OSGDefaultListSelectionModel.h"

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

WindowEventProducerUnrecPtr TutorialWindowEventProducer;

// Forward declaration so we can have the interesting stuff upfront
void display(SimpleSceneManager *mgr);
void reshape(Vec2f Size, SimpleSceneManager *mgr);

ListSelectionModelUnrecPtr selectionModel;

// 20UIRectangle Headers
#include "OSGButton.h"
#include "OSGBorders.h"
#include "OSGLookAndFeelManager.h"
#include "OSGLayers.h"
#include "OSGUIFont.h"
#include "OSGFlowLayout.h"
#include "OSGUIRectangle.h"

// 12ComplexLayout Headers
#include "OSGButton.h"
#include "OSGLabel.h"
#include "OSGLineBorder.h"
#include "OSGAbsoluteLayout.h"
#include "OSGAbsoluteLayoutConstraints.h"
#include "OSGBoxLayout.h"
#include "OSGFlowLayout.h"
#include "OSGPanel.h"
#include "OSGLineBorder.h"
#include "OSGEmptyBorder.h"
#include "OSGEtchedBorder.h"
//#include "OSGUIDefines.h"
#include "OSGColorLayer.h"
#include "OSGGradientLayer.h"
#include "OSGCompoundLayer.h"

// 29Spinner Headers
#include "OSGFlowLayout.h"
#include "OSGLayers.h"
#include "OSGRadioButton.h"
#include "OSGRadioButtonGroup.h"
#include "OSGSpinner.h"
#include "OSGSpinnerModel.h"
#include "OSGNumberSpinnerModel.h"

// 12CheckboxButton Headers
#include "OSGButton.h"
#include "OSGLineBorder.h"
#include "OSGAbsoluteLayout.h"
#include "OSGUIFont.h"
#include "OSGCheckboxButton.h"
#include "OSGRadioButton.h"

#include "OSGWindowUtils.h"

// Global Spinner Models that will be affected by button listeners
Int32SpinnerModelPtr TheModel1;
Int32SpinnerModelPtr TheModel2;
Int32SpinnerModelPtr TheModel3;

// Create three materials to be add to 3d objects
ChunkMaterialTransitPtr createRedMaterial();
ChunkMaterialTransitPtr createBlueMaterial();
ChunkMaterialTransitPtr createGreenMaterial();

// Create pointers for several 3d objects
NodeRecPtr scene, ExampleTorus, ExampleCone, ExampleSphere, ExampleBox;

class SimpleScreenDoc
{
  public:
    SimpleScreenDoc(SimpleSceneManager*  SceneManager,
                    WindowEventProducer* MainWindow);

  private:
    SimpleTextForegroundRecPtr _DocForeground;
    SimpleTextForegroundRecPtr _DocShowForeground;
    FieldAnimationRecPtr _ShowDocFadeOutAnimation;

    SimpleScreenDoc(void);
    SimpleScreenDoc(const SimpleScreenDoc& );

    SimpleTextForegroundTransitPtr makeDocForeground(void);
    SimpleTextForegroundTransitPtr makeDocShowForeground(void);

    void keyTyped(KeyEventDetails* const details);
};

/******************************************************

  Documentation Foreground

 ******************************************************/
SimpleTextForegroundTransitPtr SimpleScreenDoc::makeDocForeground(void)
{
    SimpleTextForegroundRecPtr DocForeground =  SimpleTextForeground::create(); 

    DocForeground->addLine("This tutorial is a simple demonstration of the use");
    DocForeground->addLine("\\{\\color=AAAA00FF }.");
    DocForeground->addLine("");
    
    DocForeground->addLine("\\{\\color=AAAAAAFF Key Commands}:");
    DocForeground->addLine("   \\{\\color=AAAAFFFF Cmd+q}: Close the application");
    DocForeground->addLine("       \\{\\color=AAAAFFFF ?}: Show/hide this documentation");

    return SimpleTextForegroundTransitPtr(DocForeground);
}

ChunkMaterialTransitPtr createRedMaterial()
{ 
    ChunkMaterialUnrecPtr RedBackgroundMaterial = ChunkMaterial::create();
    MaterialChunkUnrecPtr RedBackgroundMaterialChunk = MaterialChunk::create();
    RedBackgroundMaterialChunk->setAmbient(Color4f(1.0,0.0,0.0,1.0));
    RedBackgroundMaterialChunk->setDiffuse(Color4f(1.0,0.0,0.0,1.0));
    RedBackgroundMaterialChunk->setSpecular(Color4f(1.0,0.0,0.0,1.0));
    
    RedBackgroundMaterial->addChunk(RedBackgroundMaterialChunk);
    
    return ChunkMaterialTransitPtr( RedBackgroundMaterial );
}

ChunkMaterialTransitPtr createBlueMaterial()
{
    ChunkMaterialUnrecPtr BlueBackgroundMaterial = ChunkMaterial::create();
    MaterialChunkUnrecPtr BlueBackgroundMaterialChunk = MaterialChunk::create();
    BlueBackgroundMaterialChunk->setAmbient(Color4f(0.0,0.0,0.8,1.0));
    BlueBackgroundMaterialChunk->setDiffuse(Color4f(0.0,0.0,0.8,1.0));
    BlueBackgroundMaterialChunk->setSpecular(Color4f(0.0,0.0,0.8,1.0));
    
    BlueBackgroundMaterial->addChunk(BlueBackgroundMaterialChunk);
    
    return ChunkMaterialTransitPtr( BlueBackgroundMaterial );
}

ChunkMaterialTransitPtr createGreenMaterial()
{
    ChunkMaterialUnrecPtr GreenBackgroundMaterial = ChunkMaterial::create();
    MaterialChunkUnrecPtr GreenBackgroundMaterialChunk = MaterialChunk::create();
    GreenBackgroundMaterialChunk->setAmbient(Color4f(0.0,1.0,0.0,1.0));
    GreenBackgroundMaterialChunk->setDiffuse(Color4f(0.0,1.0,0.0,1.0));
    GreenBackgroundMaterialChunk->setSpecular(Color4f(0.0,1.0,0.0,1.0));
    
    GreenBackgroundMaterial->addChunk(GreenBackgroundMaterialChunk);
    
    return ChunkMaterialTransitPtr( GreenBackgroundMaterial );

}

void create3DObjects(void) // creates several 3d objects, assigns materials to them, and translates them in 3D space
{
    // Make Object Nodes
    NodeRecPtr ExampleTorusGeo = makeTorus(90, 270, 16, 16);
    NodeRecPtr ExampleConeGeo = makeCone(150, 50, 16, true, true);
    NodeRecPtr ExampleSphereGeo = makeSphere(4, 50);
    NodeRecPtr ExampleBoxGeo = makeBox(100, 100, 100, 1, 1, 1);

    // AssignTextures - The materials are not currently used because something about the material causes a problem with viewing them in 3D
    // The problem is with OSGUIRectangle.cpp not rendering the 3D objects before the surface to be extruded

    /*beginEditCP(ExampleConeGeo->getCore());
      Geometry::Ptr::dcast(ExampleConeGeo->getCore())->setMaterial(createBlueMaterial());
      endEditCP(ExampleConeGeo->getCore());    

      beginEditCP(ExampleSphereGeo->getCore());
      Geometry::Ptr::dcast(ExampleSphereGeo->getCore())->setMaterial(createRedMaterial());
      endEditCP(ExampleSphereGeo->getCore());

      beginEditCP(ExampleBoxGeo->getCore());
      Geometry::Ptr::dcast(ExampleBoxGeo->getCore())->setMaterial(createGreenMaterial());
      endEditCP(ExampleBoxGeo->getCore());*/

    // Preform transformations on them
    Matrix mat; // A matrix variable which will be used to designate where each 3D object is drawn in 3D space

    // On Torus    
    mat.setTranslate(0.0,100.0,-200.0); // X=0.0, Y=100.0, Z=-200.0
    TransformRecPtr TorusTranCore = Transform::create();
    TorusTranCore->setMatrix(mat);
    
    ExampleTorus = Node::create();
    ExampleTorus->setCore(TorusTranCore);
    ExampleTorus->addChild(ExampleTorusGeo);
    
    // On Sphere
    mat.setTranslate(0.0,100.0,-200.0); // X=0.0, Y=100.0, Z=-200.0

    TransformRecPtr SphereTranCore = Transform::create();
    SphereTranCore->setMatrix(mat);
    
    ExampleSphere = Node::create();
    ExampleSphere->setCore(SphereTranCore);
    ExampleSphere->addChild(ExampleSphereGeo);
    
    // On Cone
    mat.setTranslate(0.0,0.0,500.0); // X=0.0, Y=0.0, Z=500.0

    TransformRecPtr ConeTranCore = Transform::create();
    ConeTranCore->setMatrix(mat);
    
    ExampleCone = Node::create();
    ExampleCone->setCore(ConeTranCore);
    ExampleCone->addChild(ExampleConeGeo);
    
    // On Box
    mat.setTranslate(250.0,250.0,400.0); // X=250.0, Y=250.0, Z=400.0

    TransformRecPtr ExampleBoxTranCore = Transform::create();
    ExampleBoxTranCore->setMatrix(mat);
    
    ExampleBox = Node::create();
    ExampleBox->setCore(ExampleBoxTranCore);
    ExampleBox->addChild(ExampleBoxGeo);
}

void handleSingleIncButtonSelected(ButtonSelectedEventDetails* const details,
                                   Int32SpinnerModelPtr TheModel)
{         
    TheModel1->setStepSize(1);
}

void handleSingleIncButtonDeselected(ButtonSelectedEventDetails* const details,
                                   Int32SpinnerModelPtr TheModel)
{         
    TheModel1->setStepSize(2);

}

void handleDoubleIncButtonSelected(ButtonSelectedEventDetails* const details,
                                   Int32SpinnerModelPtr TheModel)
{         
    TheModel1->setStepSize(2);

}

void handleDoubleIncButtonDeselected(ButtonSelectedEventDetails* const details,
                                   Int32SpinnerModelPtr TheModel)
{         
    TheModel1->setStepSize(1);

}

void handleAddTorusButtonSelected(ButtonSelectedEventDetails* const details) // If the check button is selected draw the torus
{         
    scene->addChild(ExampleTorus);
}

void handleAddTorusButtonDeselected(ButtonSelectedEventDetails* const details) // If the check button is deselected remove the torus
{         
    scene->subChild(ExampleTorus);
}

void handleAddSphereButtonSelected(ButtonSelectedEventDetails* const details) // If the check button is selected draw the torus
{         
    scene->addChild(ExampleSphere);
}

void handleAddSphereButtonDeselected(ButtonSelectedEventDetails* const details) // If the check button is deselected remove the torus
{         
    scene->subChild(ExampleSphere);
}

void handleAddBoxButtonSelected(ButtonSelectedEventDetails* const details) // If the check button is selected draw the torus
{         
    scene->addChild(ExampleBox);
}

void handleAddBoxButtonDeselected(ButtonSelectedEventDetails* const details) // If the check button is deselected remove the torus
{         
    scene->subChild(ExampleBox);
}

void keyPressed(KeyEventDetails* const details)
{
    if(details->getKey() == KeyEventDetails::KEY_Q && details->getModifiers() & KeyEventDetails::KEY_MODIFIER_COMMAND)
    {
        dynamic_cast<WindowEventProducer*>(details->getSource())->closeWindow();
    }
}

void mousePressed(MouseEventDetails* const details, SimpleSceneManager* mgr)
{
    if(TutorialWindowEventProducer->getKeyModifiers() & KeyEventDetails::KEY_MODIFIER_CAPS_LOCK) // Enables the mouse to rotate the view, zoom in/out, and change the perspective in combination with the mouse motion listener
    {
        mgr->mouseButtonPress(details->getButton(), details->getLocation().x(), details->getLocation().y());
    }
}
void mouseReleased(MouseEventDetails* const details, SimpleSceneManager* mgr)
{
    if(TutorialWindowEventProducer->getKeyModifiers() & KeyEventDetails::KEY_MODIFIER_CAPS_LOCK) // Enables the mouse to rotate the view, zoom in/out, and change the perspective in combination with the mouse motion listener
    {
        mgr->mouseButtonRelease(details->getButton(), details->getLocation().x(), details->getLocation().y());
    }
}

void mouseMoved(MouseEventDetails* const details, SimpleSceneManager* mgr)
{
    if(TutorialWindowEventProducer->getKeyModifiers() & KeyEventDetails::KEY_MODIFIER_CAPS_LOCK) // Enables the mouse to rotate the view, zoom in/out, and change the perspective in combination with the mouse button listener
    {
        mgr->mouseMove(details->getLocation().x(), details->getLocation().y());
    }
}

void mouseDragged(MouseEventDetails* const details, SimpleSceneManager* mgr)
{
    if(TutorialWindowEventProducer->getKeyModifiers() & KeyEventDetails::KEY_MODIFIER_CAPS_LOCK) // Enables the mouse to rotate the view, zoom in/out, and change the perspective in combination with the mouse button listener
    {
        mgr->mouseMove(details->getLocation().x(), details->getLocation().y());
    }
}

#if 0
// Assign listeners to the classes that make the 3D objects
MakeTorus RightPanelCheck1Listener;
MakeBox RightPanelCheck2Listener;
MakeSphere RightPanelCheck3Listener;

#endif
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    {
        selectionModel = DefaultListSelectionModel::create();
        TheModel1.reset( new Int32SpinnerModel() );
        TheModel2.reset( new Int32SpinnerModel() );
        TheModel3.reset( new Int32SpinnerModel() );
        
        // Set up Window
        WindowEventProducerRecPtr TutorialWindow = createNativeWindow();
        TutorialWindow->initWindow();

        // Create the SimpleSceneManager helper
        SimpleSceneManagerRefPtr sceneManager = SimpleSceneManager::create();
        TutorialWindow->setDisplayCallback(boost::bind(display, sceneManager));
        TutorialWindow->setReshapeCallback(boost::bind(reshape, _1, sceneManager));

        // Tell the Manager what to manage
        sceneManager->setWindow(TutorialWindow);

        TutorialWindow->getEventSource()->connectKeyTyped(boost::bind(keyPressed, _1));


        // Set up Window
        TutorialWindow->setDisplayCallback(display);
        TutorialWindow->setReshapeCallback(reshape);

        TutorialWindow->getEventSource()->connectKeyTyped(boost::bind(keyPressed, _1));
        TutorialWindow->getEventSource()->connectMousePressed( boost::bind( mousePressed, _1, sceneManager ) );
        TutorialWindow->getEventSource()->connectMouseReleased( boost::bind( mouseReleased, _1, sceneManager ) );
        TutorialWindow->getEventSource()->connectMouseMoved( boost::bind( mouseMoved, _1, sceneManager ) );
        TutorialWindow->getEventSource()->connectMouseDragged( boost::bind( mouseDragged, _1, sceneManager ) );


        // Make Torus Node (creates Torus in background of scene)
        NodeRecPtr TorusGeometryNode = makeTorus(90, 270, 16, 16);

        // Make Main Scene Node and add the Torus
        create3DObjects();
        scene = Node::create();
        scene->setCore(Group::create());
        //scene->addChild(TorusGeometryNode);
        
        // Create the Graphics
        Graphics3DExtrudeRecPtr TutorialGraphics = Graphics3DExtrude::create();
        TutorialGraphics->setEnablePolygonAntiAliasing(false);
        TutorialGraphics->setExtrudeLength(-40.0);
        
        // Initialize the LookAndFeelManager to enable default settings
        LookAndFeelManager::the()->getLookAndFeel()->init();

        /******************************************************

          Create nine Button Components (button1, button2,
          button3, button4, button5, button6, button7, button8
          and button9) and their AbsoluteLayoutConstraints.

          AbsoluteLayoutConstraints are used within the 
          AbsoluteLayout to define where the Components will
          be placed.  Most other Layouts do not need 
          Constraints, as they place things within the Layout
          automatically.

         ******************************************************/

        ButtonRecPtr button1 = Button::create();
        ButtonRecPtr button2 = Button::create();
        ButtonRecPtr button3 = Button::create();
        ButtonRecPtr button4 = Button::create();
        ButtonRecPtr button5 = Button::create();
        ButtonRecPtr button6 = Button::create();
        ButtonRecPtr button7 = Button::create();
        ButtonRecPtr button8 = Button::create();
        ButtonRecPtr button9 = Button::create();

        /******************************************************

          Edit Button Components and assign text,
          PreferredSize, and AbsoluteLayoutConstraints

         ******************************************************/

        // Create a simple Font to be used with the Button
        UIFontRecPtr sampleFont = UIFont::create();
        sampleFont->setFamily("SANS");
        sampleFont->setGap(1);
        sampleFont->setGlyphPixelSize(46);
        sampleFont->setSize(16);
        //sampleFont->setTextureWidth(0);
        sampleFont->setStyle(TextFace::STYLE_PLAIN);
        
        ColorLayerRecPtr button1Background = ColorLayer::create();
        button1Background->setColor(Color4f(1.0,0.0,0.0,1.0));
        
        //Define each button and give them each a name
        button1->setPreferredSize(Vec2f(100,50));
        button1->setSize(Vec2f(100,50));
        button1->setText("Button 1");
        button1->setTextColor(Color4f(0.0,0.0,0.0,1.0));
        button1->setFont(sampleFont);
        
        button2->setPreferredSize(Vec2f(100,50));
        button2->setSize(Vec2f(100,50));
        button2->setText("Button 2");
        button2->setFont(sampleFont);
        
        button3->setPreferredSize(Vec2f(100,50));
        button3->setSize(Vec2f(100,50));
        button3->setText("Button 3");
        button3->setFont(sampleFont);
        
        button4->setPreferredSize(Vec2f(100,50));
        button4->setSize(Vec2f(100,50));
        button4->setText("Button 4");
        button4->setTextColor(Color4f(0.0,0.0,0.0,1.0));
        button4->setFont(sampleFont);
        
        button5->setPreferredSize(Vec2f(100,50));
        button5->setSize(Vec2f(100,50));
        button5->setText("Button 5");
        button5->setFont(sampleFont);
        
        button6->setPreferredSize(Vec2f(100,50));
        button6->setSize(Vec2f(100,50));
        button6->setText("Button 6");
        button6->setFont(sampleFont);
        
        button7->setPreferredSize(Vec2f(100,50));
        button7->setSize(Vec2f(100,50));
        button7->setText("Button 7");
        button7->setTextColor(Color4f(0.0,0.0,0.0,1.0));
        button7->setFont(sampleFont);
        
        button8->setPreferredSize(Vec2f(100,50));
        button8->setSize(Vec2f(100,50));
        button8->setText("Button 8");
        button8->setFont(sampleFont);
        
        button9->setPreferredSize(Vec2f(100,50));
        button9->setSize(Vec2f(100,50));
        button9->setText("Button 9");
        button9->setFont(sampleFont);
        
        // Create a label, label1, and put some text in it
        LabelRecPtr TheLabel1 = Label::create();
        TheLabel1->setText("Label #1");
        
        // Create a label, label2, and put some text in it
        LabelRecPtr TheLabel2 = Label::create();
        TheLabel2->setText("Label #2");
        
        // Create a label, label3, and put some text in it
        LabelRecPtr TheLabel3 = Label::create();
        TheLabel3->setText("Label #3");
        
        /******************************************************

          Create ListModel.  This is where you set
          the values for the List.

          After creating an AbstractListModel,
          do the following to make a list.

          First, create SFStrings and use the 
          .setValue("VALUE") function to set their
          values.  Then, use the .pushBack(&SFStringName)
          to add them to the List.

          Next, create the ListSelectionModel
          defaults.

          Finally, actually create the List.  Set
          its Model, and SelectionModel
          as shown below.  Finally, choose the
          type of display for the List (choices outlined
          below).



         ******************************************************/
        // Create ListModel Component to add things to
        DefaultListModelRecPtr Model1 = DefaultListModel::create();

        // Add values to it
        Model1->pushBack(boost::any(std::string("Red")));
        Model1->pushBack(boost::any(std::string("Green")));
        Model1->pushBack(boost::any(std::string("Blue")));
        Model1->pushBack(boost::any(std::string("Orange")));
        Model1->pushBack(boost::any(std::string("Purple")));
        Model1->pushBack(boost::any(std::string("Yellow")));
        Model1->pushBack(boost::any(std::string("White")));
        Model1->pushBack(boost::any(std::string("Black")));
        Model1->pushBack(boost::any(std::string("Gray")));
        Model1->pushBack(boost::any(std::string("Brown")));
        Model1->pushBack(boost::any(std::string("Indigo")));
        Model1->pushBack(boost::any(std::string("Pink")));
        Model1->pushBack(boost::any(std::string("Violet")));
        Model1->pushBack(boost::any(std::string("Mauve")));
        Model1->pushBack(boost::any(std::string("Peach")));

        // Create ListModel Component to add things to
        DefaultListModelRecPtr Model2 = DefaultListModel::create();

        // Add values to it
        Model2->pushBack(boost::any(std::string("Taco Pizza")));
        Model2->pushBack(boost::any(std::string("Spaghetti")));
        Model2->pushBack(boost::any(std::string("Chicken Fingers")));
        Model2->pushBack(boost::any(std::string("Buffalo Wings")));
        Model2->pushBack(boost::any(std::string("Cheesesticks")));
        Model2->pushBack(boost::any(std::string("Bloomin' Onion")));
        Model2->pushBack(boost::any(std::string("French Fries")));
        Model2->pushBack(boost::any(std::string("Cheeseburger")));
        Model2->pushBack(boost::any(std::string("Onion Rings")));
        Model2->pushBack(boost::any(std::string("Curly Fries")));
        Model2->pushBack(boost::any(std::string("Chocolate Milkshake")));
        Model2->pushBack(boost::any(std::string("All-Meat Pizza")));
        Model2->pushBack(boost::any(std::string("Supreme Pizza")));
        Model2->pushBack(boost::any(std::string("Veggie Pizza")));
        Model2->pushBack(boost::any(std::string("Cheese Pizza")));

        // Create ListModel Component to add things to
        DefaultListModelRecPtr Model3 = DefaultListModel::create();

        // Add values to it
        Model3->pushBack(boost::any(std::string("London")));
        Model3->pushBack(boost::any(std::string("Paris")));
        Model3->pushBack(boost::any(std::string("Amsterdam")));
        Model3->pushBack(boost::any(std::string("Manama")));
        Model3->pushBack(boost::any(std::string("Dubai")));
        Model3->pushBack(boost::any(std::string("Madrid")));
        Model3->pushBack(boost::any(std::string("Berlin")));
        Model3->pushBack(boost::any(std::string("Beijing")));
        Model3->pushBack(boost::any(std::string("Seoul")));
        Model3->pushBack(boost::any(std::string("Oslow")));
        Model3->pushBack(boost::any(std::string("Beirut")));
        Model3->pushBack(boost::any(std::string("Baghdad")));
        Model3->pushBack(boost::any(std::string("Mexico City")));
        Model3->pushBack(boost::any(std::string("Washington DC")));
        Model3->pushBack(boost::any(std::string("Moscow")));

        // Create ListSelectionModel
        // (normally will be default).
        // Note that the DefaultListSelectionModel was
        // created at the top of this file before
        // the ActionListeners
        //DefaultListSelectionModel SelectionModel;


        // Create Background to be used with the Main Frame
        ColorLayerRecPtr MainFrameBackground = ColorLayer::create();
        //MainFrameBackground->setColor(Color4f(1.0,1.0,1.0,0.5));
        MainFrameBackground->setColor(Color4f(0.0,0.0,0.0,0.0));
        
        // Create ListPtr
        ListRecPtr list1 = List::create();
        list1->setPreferredSize(Vec2f(200,300));
        list1->setBackgrounds(MainFrameBackground);
        list1->setOrientation(List::VERTICAL_ORIENTATION);
        //list->setOrientation(List::HORIZONTAL_ORIENTATION);
        list1->setModel(Model1);
        
        // Create ListPtr
        ListRecPtr list2 = List::create();
        list2->setPreferredSize(Vec2f(200,300));
        list2->setBackgrounds(MainFrameBackground);
        list2->setOrientation(List::VERTICAL_ORIENTATION);
        //list->setOrientation(List::HORIZONTAL_ORIENTATION);
        list2->setModel(Model2);
        
        // Create ListPtr
        ListRecPtr list3 = List::create();
        list3->setPreferredSize(Vec2f(200,300));
        list3->setBackgrounds(MainFrameBackground);
        list3->setOrientation(List::VERTICAL_ORIENTATION);
        //list->setOrientation(List::HORIZONTAL_ORIENTATION);
        list3->setModel(Model3);
        
        // Assign the Model, and SelectionModel
        // to the List
        list1->setSelectionModel(selectionModel);

        // Assign the Model, and SelectionModel
        // to the List
        list2->setSelectionModel(selectionModel);


        // Assign the Model, and SelectionModel
        // to the List
        list3->setSelectionModel(selectionModel);


        /******************************************************

          Determine the SelectionModel
          -SINGLE_SELECTION lets you select ONE item
          via a single mouse click
          -SINGLE_INTERVAL_SELECTION lets you select
          one interval via mouse and SHIFT key
          -MULTIPLE_INTERVAL_SELECTION lets you select
          via mouse, and SHIFT and CONTRL keys

Note: this tutorial is currently set up
to allow for this to be changed via Buttons
with ActionListeners attached to them so
this code is commented out

         ******************************************************/

        //SelectionModel.setMode(DefaultListSelectionModel::SINGLE_SELECTION);
        //SelectionModel.setMode(DefaultListSelectionModel::SINGLE_INTERVAL_SELECTION);
        //SelectionModel.setMode(DefaultListSelectionModel::MULTIPLE_INTERVAL_SELECTION);

        //ScrollPanel
        ScrollPanelRecPtr TheScrollPanel1 = ScrollPanel::create();
        TheScrollPanel1->setPreferredSize(Vec2f(100,300));
        TheScrollPanel1->setHorizontalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
        //TheScrollPanel->setVerticalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
        TheScrollPanel1->setViewComponent(list1);

        //ScrollPanel
        ScrollPanelRecPtr TheScrollPanel2 = ScrollPanel::create();
        TheScrollPanel2->setPreferredSize(Vec2f(100,300));
        TheScrollPanel2->setHorizontalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
        //TheScrollPanel2->setVerticalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
        TheScrollPanel2->setViewComponent(list2);

        //ScrollPanel
        ScrollPanelRecPtr TheScrollPanel3 = ScrollPanel::create();
        TheScrollPanel3->setPreferredSize(Vec2f(100,300));
        TheScrollPanel3->setHorizontalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
        //TheScrollPanel3->setVerticalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
        TheScrollPanel3->setViewComponent(list3);

        /******************************************************

          Create three Spinner Models.  These dictate 
          how the Spinners functions.
          -setMaximum(int): Determine the Maximum 
          value the Spinner can have.
          -setMinimum(int): Determine the Minimum 
          value the Spinner can have.
          -setStepSize(int): Determine the 
          incremental step size.
          -setValue(boost::any(Int32(int)):
          Determine initial starting value
          of the Spinner.

Note: the StepSize can be changed 
dynamically as done in this 
Tutorial with ButtonSelectedListeners.

         ******************************************************/    

        //Spinner Model, TheModel1, used for spinner #1
        TheModel1->setMaximum(100);
        TheModel1->setMinimum(-100);
        TheModel1->setStepSize(2);
        TheModel1->setValue(boost::any(Int32(0)));

        //Spinner Model, TheModel2, used for spinner #2
        TheModel2->setMaximum(100);
        TheModel2->setMinimum(-100);
        TheModel2->setStepSize(4);
        TheModel2->setValue(boost::any(Int32(0)));

        //Spinner Model, TheModel3, used for spinner #3
        TheModel3->setMaximum(100);
        TheModel3->setMinimum(-100);
        TheModel3->setStepSize(6);
        TheModel3->setValue(boost::any(Int32(0)));

        /******************************************************

          Create three Spinners and and assign each a 
          Model.

         ******************************************************/    

        //Spinner #1 will be called ExampleSpinner1 and uses TheModel1
        SpinnerRecPtr ExampleSpinner1 = Spinner::create();
        ExampleSpinner1->setModel(TheModel1);

        //Spinner #2 will be called ExampleSpinner2 and uses TheModel2
        SpinnerRecPtr ExampleSpinner2 = Spinner::create();
        ExampleSpinner2->setModel(TheModel2);

        //Spinner #3 will be called ExampleSpinner3 and uses TheModel3
        SpinnerRecPtr ExampleSpinner3 = Spinner::create();
        ExampleSpinner3->setModel(TheModel3);

        /******************************************************

          Create several Radio Buttons to allow
          for certain characteristics of the
          Spinners to be changed dynamically.
          Each spinner is changed independantly
          of the other spinners and radio button groups.
          See 14RadioButton for more 
          information about RadioButtons.

         ******************************************************/    

        // Create two radio buttons, SingleIncrementButton1 and DoubleIncrementButton1
        RadioButtonRecPtr SingleIncrementButton1 = RadioButton::create();
        RadioButtonRecPtr DoubleIncrementButton1 = RadioButton::create();

        // Create two radio buttons, SingleIncrementButton2 and DoubleIncrementButton2
        RadioButtonRecPtr SingleIncrementButton2 = RadioButton::create();
        RadioButtonRecPtr DoubleIncrementButton2 = RadioButton::create();

        // Create two radio buttons, SingleIncrementButton3 and DoubleIncrementButton3
        RadioButtonRecPtr SingleIncrementButton3 = RadioButton::create();
        RadioButtonRecPtr DoubleIncrementButton3 = RadioButton::create();

        // Edit SingleIncrementButton1 and assign it text
        SingleIncrementButton1->setText("Increment by 1");
        SingleIncrementButton1->setPreferredSize(Vec2f(100,50));
        // Make a button listener and assign it to SingleIncrementButton1
        SingleIncrementButton1->connectButtonSelected( boost::bind( handleSingleIncButtonSelected, _1 ) );
        SingleIncrementButton1->connectButtonDeselected( boost::bind( handleSingleIncButtonDeselected, _1 ) );

        // Edit DoubleIncrementButton1, make it pre-selected, and assign it text
        DoubleIncrementButton1->setText("Increment by 2");
        DoubleIncrementButton1->setPreferredSize(Vec2f(100,50));
        DoubleIncrementButton1->setSelected(true);
        // Make a button listener and assign it to DoubleIncrementButton1
        DoubleIncrementButton1->connectButtonSelected( boost::bind( );
        DoubleIncrementButton1->connectButtonDeselected(&TheDoubleIncrementButtonListener1);

        // Edit SingleIncrementButton2 and assign it text
        SingleIncrementButton2->setText("Increment by 3");
        SingleIncrementButton2->setPreferredSize(Vec2f(100,50));
        // Make a button listener and assign it to SingleIncrementButton2
        SingleIncrementButtonListener2 TheSingleIncrementButtonListener2;
        SingleIncrementButton2->addButtonSelectedListener(&TheSingleIncrementButtonListener2);

        // Edit DoubleIncrementButton2, make it pre-selected, and assign it text
        DoubleIncrementButton2->setText("Increment by 4");
        DoubleIncrementButton2->setPreferredSize(Vec2f(100,50));
        DoubleIncrementButton2->setSelected(true);
        // Make a button listener and assign it to DoubleIncrementButton2
        DoubleIncrementButtonListener2 TheDoubleIncrementButtonListener2;
        DoubleIncrementButton2->addButtonSelectedListener(&TheDoubleIncrementButtonListener2);

        // Edit SingleIncrementButton3 and assign it text
        SingleIncrementButton3->setText("Increment by 5");
        SingleIncrementButton3->setPreferredSize(Vec2f(100,50));
        // Make a button listener and assign it to SingleIncrementButton3
        SingleIncrementButtonListener3 TheSingleIncrementButtonListener3;
        SingleIncrementButton3->addButtonSelectedListener(&TheSingleIncrementButtonListener3);

        // Edit DoubleIncrementButton3, make it pre-selected, and assign it text
        DoubleIncrementButton3->setText("Increment by 6");
        DoubleIncrementButton3->setPreferredSize(Vec2f(100,50));
        DoubleIncrementButton3->setSelected(true);
        // Make a button listener and assign it to DoubleIncrementButton3
        DoubleIncrementButton3->addButtonSelectedListener(&TheDoubleIncrementButtonListener1);

        // Create a radio button group and assign two radio buttons to it
        RadioButtonGroupRecPtr SelectionRadioButtonGroup1 = RadioButtonGroup::create();
        SelectionRadioButtonGroup1->addButton(SingleIncrementButton1);
        SelectionRadioButtonGroup1->addButton(DoubleIncrementButton1);

        // Create a radio button group and assign two radio buttons to it
        RadioButtonGroupRecPtr SelectionRadioButtonGroup2 = RadioButtonGroup::create();
        SelectionRadioButtonGroup2->addButton(SingleIncrementButton2);
        SelectionRadioButtonGroup2->addButton(DoubleIncrementButton2);

        // Create a radio button group and assign two radio buttons to it
        RadioButtonGroupRecPtr SelectionRadioButtonGroup3 = RadioButtonGroup::create();
        SelectionRadioButtonGroup3->addButton(SingleIncrementButton3);
        SelectionRadioButtonGroup3->addButton(DoubleIncrementButton3);

        // Create and edit the CheckBoxes
        CheckboxButtonRecPtr Check1 = CheckboxButton::create();
        CheckboxButtonRecPtr Check2 = CheckboxButton::create();
        CheckboxButtonRecPtr Check3 = CheckboxButton::create();
        CheckboxButtonRecPtr Check4 = CheckboxButton::create();

        Check1->setText("Show Torus");
        Check1->setPreferredSize(Vec2f(125,50));
        Check1->setAlignment(Vec2f(0.0,1.0));
        // Add Listener
        Check1->addButtonSelectedListener(&RightPanelCheck1Listener);

        Check2->setText("Show Box");
        Check2->setPreferredSize(Vec2f(125,50));
        Check2->setAlignment(Vec2f(0.0,1.0));
        endEditCP(Check2, Button::TextFieldMask, Component::PreferredSizeFieldMask);
        // Add Listener
        Check2->addButtonSelectedListener(&RightPanelCheck2Listener);

        Check3->setText("Show Sphere");
        Check3->setPreferredSize(Vec2f(125,50));
        Check3->setAlignment(Vec2f(0.0,1.0));
        // Add Listener
        Check3->addButtonSelectedListener(&RightPanelCheck3Listener);

        Check4->setText("Show Cone");
        Check4->setPreferredSize(Vec2f(125,50));
        Check4->setAlignment(Vec2f(0.0,1.0));
        // Add Listener
        Check4->addButtonSelectedListener(&RightPanelCheck4Listener);

        // Create The Main Frame
        // Create Background to be used with the Main Frame
        EmptyLayerRecPtr MainBackground = EmptyLayer::create();

        EmptyBorderRecPtr MainFrameLineBorder = EmptyBorder::create();

        // Create layouts to be used in the main frame and panels
        LayoutRecPtr MainInternalWindowLayout = FlowLayout::create();
        BoxLayoutRecPtr ExamplePanel2Layout = BoxLayout::create();
        BoxLayoutRecPtr ExamplePanel3Layout = BoxLayout::create();

        ExamplePanel2Layout->setOrientation(BoxLayout::VERTICAL_ORIENTATION);
        
        ExamplePanel3Layout->setOrientation(BoxLayout::HORIZONTAL_ORIENTATION);
        
        // Create several panels that will be assigned layouts, borders, and backgrounds and will have objects added to them
        PanelRecPtr ExamplePanel1 = Panel::create();
        PanelRecPtr ExamplePanel2 = Panel::create();
        PanelRecPtr ExamplePanel3 = Panel::create();
        PanelRecPtr ExamplePanel4 = Panel::create();
        PanelRecPtr ExamplePanel5 = Panel::create();
        PanelRecPtr ExamplePanel6 = Panel::create();
        PanelRecPtr ExamplePanel7 = Panel::create();
        PanelRecPtr ExamplePanel8 = Panel::create();
        PanelRecPtr ExamplePanel9 = Panel::create();
        PanelRecPtr ExamplePanel10 = Panel::create();
        PanelRecPtr ExamplePanel11 = Panel::create();
        PanelRecPtr ExamplePanel12 = Panel::create();
        PanelRecPtr ExamplePanel13 = Panel::create();
        PanelRecPtr ExamplePanel14 = Panel::create();

        // Edit the panels and add buttons, lists, check boxes, labels, radio buttons, spinners, and even other panels to each as desired.
        ExamplePanel1->setPreferredSize(Vec2f(425,175));
        ExamplePanel1->getChildren().push_back(button1);
        ExamplePanel1->getChildren().push_back(button2);
        ExamplePanel1->getChildren().push_back(button3);
        ExamplePanel1->setLayout(MainInternalWindowLayout);
        ExamplePanel1->setBackgrounds(MainBackground);
        ExamplePanel1->setBorders(MainFrameLineBorder);
        
        ExamplePanel2->setPreferredSize(Vec2f(425,375));
        ExamplePanel2->getChildren().push_back(TheLabel1);
        ExamplePanel2->getChildren().push_back(TheScrollPanel1);
        ExamplePanel2->setLayout(ExamplePanel2Layout);
        ExamplePanel2->setBackgrounds(MainBackground);
        ExamplePanel2->setBorders(MainFrameLineBorder);
        
        ExamplePanel3->setPreferredSize(Vec2f(425,125));
        ExamplePanel3->getChildren().push_back(SingleIncrementButton1);
        ExamplePanel3->getChildren().push_back(DoubleIncrementButton1);
        ExamplePanel3->getChildren().push_back(ExampleSpinner1);
        ExamplePanel3->setLayout(MainInternalWindowLayout);
        ExamplePanel3->setBackgrounds(MainBackground);
        ExamplePanel3->setBorders(MainFrameLineBorder);
        
        ExamplePanel4->setPreferredSize(Vec2f(425,175));
        ExamplePanel4->getChildren().push_back(button4);
        ExamplePanel4->getChildren().push_back(button5);
        ExamplePanel4->getChildren().push_back(button6);
        ExamplePanel4->setLayout(MainInternalWindowLayout);
        ExamplePanel4->setBackgrounds(MainBackground);
        ExamplePanel4->setBorders(MainFrameLineBorder);
        
        ExamplePanel5->setPreferredSize(Vec2f(425,375));
        ExamplePanel5->getChildren().push_back(TheLabel2);
        ExamplePanel5->getChildren().push_back(TheScrollPanel2);
        ExamplePanel5->setLayout(ExamplePanel2Layout);
        ExamplePanel5->setBackgrounds(MainBackground);
        ExamplePanel5->setBorders(MainFrameLineBorder);
        
        ExamplePanel6->setPreferredSize(Vec2f(425,125));
        ExamplePanel6->getChildren().push_back(SingleIncrementButton2);
        ExamplePanel6->getChildren().push_back(DoubleIncrementButton2);
        ExamplePanel6->getChildren().push_back(ExampleSpinner2);
        ExamplePanel6->setLayout(MainInternalWindowLayout);
        ExamplePanel6->setBackgrounds(MainBackground);
        ExamplePanel6->setBorders(MainFrameLineBorder);
        
        ExamplePanel7->setPreferredSize(Vec2f(425,175));
        ExamplePanel7->getChildren().push_back(button7);
        ExamplePanel7->getChildren().push_back(button8);
        ExamplePanel7->getChildren().push_back(button9);
        ExamplePanel7->setLayout(MainInternalWindowLayout);
        ExamplePanel7->setBackgrounds(MainBackground);
        ExamplePanel7->setBorders(MainFrameLineBorder);
        
        ExamplePanel8->setPreferredSize(Vec2f(425,375));
        ExamplePanel8->getChildren().push_back(TheLabel3);
        ExamplePanel8->getChildren().push_back(TheScrollPanel3);
        ExamplePanel8->setLayout(ExamplePanel2Layout);
        ExamplePanel8->setBackgrounds(MainBackground);
        ExamplePanel8->setBorders(MainFrameLineBorder);
        
        ExamplePanel9->setPreferredSize(Vec2f(425,125));
        ExamplePanel9->getChildren().push_back(SingleIncrementButton3);
        ExamplePanel9->getChildren().push_back(DoubleIncrementButton3);
        ExamplePanel9->getChildren().push_back(ExampleSpinner3);
        ExamplePanel9->setLayout(MainInternalWindowLayout);
        ExamplePanel9->setBackgrounds(MainBackground);
        ExamplePanel9->setBorders(MainFrameLineBorder);
        
        ExamplePanel10->setPreferredSize(Vec2f(425,675));
        ExamplePanel10->getChildren().push_back(ExamplePanel1);
        ExamplePanel10->getChildren().push_back(ExamplePanel2);
        ExamplePanel10->getChildren().push_back(ExamplePanel3);
        ExamplePanel10->setLayout(MainInternalWindowLayout);
        ExamplePanel10->setBackgrounds(MainBackground);
        ExamplePanel10->setBorders(MainFrameLineBorder);
        
        ExamplePanel11->setPreferredSize(Vec2f(425,675));
        ExamplePanel11->getChildren().push_back(ExamplePanel5);
        ExamplePanel11->getChildren().push_back(ExamplePanel6);
        ExamplePanel11->getChildren().push_back(ExamplePanel4);
        ExamplePanel11->setLayout(MainInternalWindowLayout);
        ExamplePanel11->setBackgrounds(MainBackground);
        ExamplePanel11->setBorders(MainFrameLineBorder);
        
        ExamplePanel12->setPreferredSize(Vec2f(425,675));
        ExamplePanel12->getChildren().push_back(ExamplePanel9);
        ExamplePanel12->getChildren().push_back(ExamplePanel7);
        ExamplePanel12->getChildren().push_back(ExamplePanel8);
        ExamplePanel12->setLayout(MainInternalWindowLayout);
        ExamplePanel12->setBackgrounds(MainBackground);
        ExamplePanel12->setBorders(MainFrameLineBorder);
        
        ExamplePanel13->setPreferredSize(Vec2f(1300,700));
        ExamplePanel13->getChildren().push_back(ExamplePanel10);
        ExamplePanel13->getChildren().push_back(ExamplePanel11);
        ExamplePanel13->getChildren().push_back(ExamplePanel12);
        ExamplePanel13->setLayout(ExamplePanel3Layout);
        ExamplePanel13->setBackgrounds(MainBackground);
        ExamplePanel13->setBorders(MainFrameLineBorder);
        
        ExamplePanel14->setPreferredSize(Vec2f(1300,200));
        ExamplePanel14->getChildren().push_back(Check1);
        ExamplePanel14->getChildren().push_back(Check2);
        ExamplePanel14->getChildren().push_back(Check3);
        ExamplePanel14->getChildren().push_back(Check4);
        ExamplePanel14->setLayout(ExamplePanel3Layout);
        ExamplePanel14->setBackgrounds(MainBackground);
        ExamplePanel14->setBorders(MainFrameLineBorder);
        
        // Create The Main InternalWindow

        InternalWindowRecPtr MainInternalWindow = InternalWindow::create();
        MainInternalWindow->addChild(ExamplePanel13);
        MainInternalWindow->addChild(ExamplePanel14);
        MainInternalWindow->setLayout(MainInternalWindowLayout);
        MainInternalWindow->setBackgrounds(MainBackground);
        MainInternalWindow->setBorders(MainFrameLineBorder);
        MainInternalWindow->setAlignmentInDrawingSurface(Vec2f(0.5f,0.5f));
        MainInternalWindow->setScalingInDrawingSurface(Vec2f(1.0f,1.0f));
        MainInternalWindow->setDrawTitlebar(false);
        MainInternalWindow->setResizable(false);
        
        // Create the Drawing Surface
        UIDrawingSurfaceRecPtr TutorialDrawingSurface = UIDrawingSurface::create();
        TutorialDrawingSurface->setGraphics(TutorialGraphics);
        TutorialDrawingSurface->setEventProducer(TutorialWindowEventProducer);
        
        TutorialDrawingSurface->openWindow(MainInternalWindow);

        //Make A 3D Rectangle to draw the UI on
        UIRectangleRecPtr UIRectCore = UIRectangle::create();
        UIRectCore->setPoint(Pnt3f(-650.0,-450.0,370.0)); // Set the initial point in the center of the drawing surface.
        UIRectCore->setWidth(1300.0); // Set the width of the drawing surface
        UIRectCore->setHeight(900.0); // Set the height of the drawing surface
        UIRectCore->setDrawingSurface(TutorialDrawingSurface);
        
        NodeRecPtr UIRectNode = Node::create();
        UIRectNode->setCore(UIRectCore);
        
        // add the UIRect as a child
        scene->addChild(UIRectNode);
        

        // Tell the Manager what to manage
        mgr->setWindow(MainWindow);
        sceneManager->setRoot(scene);

        // Show the whole Scene
        sceneManager->showAll();

        //Create the Documentation Foreground and add it to the viewport
        SimpleScreenDoc TheSimpleScreenDoc(sceneManager, TutorialWindow);


        //Open Window
        Vec2f WinSize(TutorialWindowEventProducer->getDesktopSize() * 0.85f);
        Pnt2f WinPos((TutorialWindowEventProducer->getDesktopSize() - WinSize) *0.5);
        TutorialWindowEventProducer->openWindow(WinPos,
                                                WinSize,
                                                "01RubberBandCamera");

        //Enter main Loop
        TutorialWindowEventProducer->mainLoop();

        osgExit();

        return 0;
    }
    // Callback functions


    // Redraw the window
    void display(SimpleSceneManager *mgr)
    {
        mgr->redraw();
    }

    // React to size changes
    void reshape(Vec2f Size, SimpleSceneManager *mgr)
    {
        mgr->resize(Size.x(), Size.y());
    }

SimpleTextForegroundTransitPtr SimpleScreenDoc::makeDocShowForeground(void)
{
    SimpleTextForegroundRecPtr DocShowForeground =  SimpleTextForeground::create(); 

    DocShowForeground->setSize(20.0f);
    DocShowForeground->setBgColor(Color4f(0.0f,0.0f,0.0f,0.0f));
    DocShowForeground->setShadowColor(Color4f(0.0f,0.0f,0.0f,0.0f));
    DocShowForeground->setBorderColor(Color4f(1.0f,1.0f,1.0f,0.0f));
    DocShowForeground->setHorizontalAlign(SimpleTextForeground::Middle);
    DocShowForeground->setVerticalAlign(SimpleTextForeground::Top);

    DocShowForeground->addLine("Press ? for help.");

    return SimpleTextForegroundTransitPtr(DocShowForeground);
}

SimpleScreenDoc::SimpleScreenDoc(SimpleSceneManager*  SceneManager,
                                 WindowEventProducer* MainWindow)
{
    _DocForeground = makeDocForeground();
    _DocForeground->setBgColor(Color4f(0.0f,0.0f,0.0f,0.8f));
    _DocForeground->setBorderColor(Color4f(1.0f,1.0f,1.0f,1.0f));
    _DocForeground->setTextMargin(Vec2f(5.0f,5.0f));
    _DocForeground->setHorizontalAlign(SimpleTextForeground::Left);
    _DocForeground->setVerticalAlign(SimpleTextForeground::Top);
    _DocForeground->setActive(false);

    _DocShowForeground = makeDocShowForeground();

    ViewportRefPtr TutorialViewport = SceneManager->getWindow()->getPort(0);
    TutorialViewport->addForeground(_DocForeground);
    TutorialViewport->addForeground(_DocShowForeground);

    MainWindow->getEventSource()->connectKeyTyped(boost::bind(&SimpleScreenDoc::keyTyped,
                                            this,
                                            _1));
    
    //Color Keyframe Sequence
    KeyframeColorSequenceRecPtr ColorKeyframes = KeyframeColorSequenceColor4f::create();
    ColorKeyframes->addKeyframe(Color4f(1.0f,1.0f,1.0f,1.0f),0.0f);
    ColorKeyframes->addKeyframe(Color4f(1.0f,1.0f,1.0f,1.0f),5.0f);
    ColorKeyframes->addKeyframe(Color4f(1.0f,1.0f,1.0f,0.0f),7.0f);
    
    //Animator
    KeyframeAnimatorRecPtr TheAnimator = KeyframeAnimator::create();
    TheAnimator->setKeyframeSequence(ColorKeyframes);
    
    //Animation
    _ShowDocFadeOutAnimation = FieldAnimation::create();
    _ShowDocFadeOutAnimation->setAnimator(TheAnimator);
    _ShowDocFadeOutAnimation->setInterpolationType(TBAnimator::LINEAR_INTERPOLATION);
    _ShowDocFadeOutAnimation->setCycling(1);
    _ShowDocFadeOutAnimation->setAnimatedField(_DocShowForeground,
                                               SimpleTextForeground::ColorFieldId);

    _ShowDocFadeOutAnimation->getEventSource()->attachUpdateProducer(MainWindow->getEventSource() );
    _ShowDocFadeOutAnimation->start();
}

void SimpleScreenDoc::keyTyped(KeyEventDetails* const details)
{
    switch(details->getKeyChar())
    {
        case '?':
            _DocForeground->setActive(!_DocForeground->getActive());
            break;
    }
}

