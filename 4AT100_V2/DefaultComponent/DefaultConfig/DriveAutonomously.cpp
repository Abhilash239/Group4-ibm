/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DriveAutonomously
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DriveAutonomously.cpp
*********************************************************************/

//## auto_generated
#include "DriveAutonomously.h"
//## auto_generated
#include "UC_DockTruck.h"
//## auto_generated
#include "UC_FollowPath.h"
//## auto_generated
#include "UC_GeneratePath.h"
//## package UseCaseAnalysisPkg::DriveAutonomously



//## event reqDock()
reqDock::reqDock(void) : OMEvent() {
    setId(reqDock_DriveAutonomously_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqDock_DriveAutonomously_UseCaseAnalysisPkg_id(201);
//#]

//## event reqGeneratePath()
reqGeneratePath::reqGeneratePath(void) : OMEvent() {
    setId(reqGeneratePath_DriveAutonomously_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqGeneratePath_DriveAutonomously_UseCaseAnalysisPkg_id(202);
//#]

//## event reqFollowPath()
reqFollowPath::reqFollowPath(void) : OMEvent() {
    setId(reqFollowPath_DriveAutonomously_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqFollowPath_DriveAutonomously_UseCaseAnalysisPkg_id(203);
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DriveAutonomously.cpp
*********************************************************************/
