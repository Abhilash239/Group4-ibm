/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_6 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: DriveAutonomously
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_6\UC_DockTruck_Simulation\DriveAutonomously.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DriveAutonomously.h"
//## auto_generated
#include "UC_DockTruck.h"
//## auto_generated
#include "UC_FollowPath.h"
//## auto_generated
#include "UC_GeneratePath.h"
//#[ ignore
#define reqDock_SERIALIZE OM_NO_OP

#define reqDock_UNSERIALIZE OM_NO_OP

#define reqDock_CONSTRUCTOR reqDock()

#define reqGeneratePath_SERIALIZE OM_NO_OP

#define reqGeneratePath_UNSERIALIZE OM_NO_OP

#define reqGeneratePath_CONSTRUCTOR reqGeneratePath()

#define reqFollowPath_SERIALIZE OM_NO_OP

#define reqFollowPath_UNSERIALIZE OM_NO_OP

#define reqFollowPath_CONSTRUCTOR reqFollowPath()

#define reqStartPathGeneration_SERIALIZE OM_NO_OP

#define reqStartPathGeneration_UNSERIALIZE OM_NO_OP

#define reqStartPathGeneration_CONSTRUCTOR reqStartPathGeneration()
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event reqDock()
reqDock::reqDock(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqDock)
    setId(reqDock_DriveAutonomously_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqDock_DriveAutonomously_UseCaseAnalysisPkg_id(201);
//#]

IMPLEMENT_META_EVENT_P(reqDock, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, reqDock())

//## event reqGeneratePath()
reqGeneratePath::reqGeneratePath(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqGeneratePath)
    setId(reqGeneratePath_DriveAutonomously_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqGeneratePath_DriveAutonomously_UseCaseAnalysisPkg_id(202);
//#]

IMPLEMENT_META_EVENT_P(reqGeneratePath, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, reqGeneratePath())

//## event reqFollowPath()
reqFollowPath::reqFollowPath(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqFollowPath)
    setId(reqFollowPath_DriveAutonomously_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqFollowPath_DriveAutonomously_UseCaseAnalysisPkg_id(203);
//#]

IMPLEMENT_META_EVENT_P(reqFollowPath, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, reqFollowPath())

//## event reqStartPathGeneration()
reqStartPathGeneration::reqStartPathGeneration(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqStartPathGeneration)
    setId(reqStartPathGeneration_DriveAutonomously_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqStartPathGeneration_DriveAutonomously_UseCaseAnalysisPkg_id(204);
//#]

IMPLEMENT_META_EVENT_P(reqStartPathGeneration, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, reqStartPathGeneration())

/*********************************************************************
	File Path	: component_6\UC_DockTruck_Simulation\DriveAutonomously.cpp
*********************************************************************/
