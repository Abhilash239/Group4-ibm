/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustLighting_Simulation
	Model Element	: DriveAutonomously
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\DriveAutonomously.h
*********************************************************************/

#ifndef DriveAutonomously_H
#define DriveAutonomously_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## package UseCaseAnalysisPkg::DriveAutonomously



//## event reqDock()
class reqDock : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    reqDock(void);
};

//#[ ignore
extern const IOxfEvent::ID reqDock_DriveAutonomously_UseCaseAnalysisPkg_id;
//#]

//## event reqGeneratePath()
class reqGeneratePath : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    reqGeneratePath(void);
};

//#[ ignore
extern const IOxfEvent::ID reqGeneratePath_DriveAutonomously_UseCaseAnalysisPkg_id;
//#]

//## event reqFollowPath()
class reqFollowPath : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    reqFollowPath(void);
};

//#[ ignore
extern const IOxfEvent::ID reqFollowPath_DriveAutonomously_UseCaseAnalysisPkg_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\DriveAutonomously.h
*********************************************************************/
