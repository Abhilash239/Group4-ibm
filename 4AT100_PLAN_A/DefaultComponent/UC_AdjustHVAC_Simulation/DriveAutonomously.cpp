/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: DriveAutonomously
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\DriveAutonomously.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DriveAutonomously.h"
//## auto_generated
#include "GUI.h"
//## auto_generated
#include "UC_ControlPath.h"
//## auto_generated
#include "UC_DockTruck.h"
//#[ ignore
#define evFollowPath_SERIALIZE OM_NO_OP

#define evFollowPath_UNSERIALIZE OM_NO_OP

#define evFollowPath_CONSTRUCTOR evFollowPath()

#define reqDock_SERIALIZE OM_NO_OP

#define reqDock_UNSERIALIZE OM_NO_OP

#define reqDock_CONSTRUCTOR reqDock()

#define resetDock_SERIALIZE OM_NO_OP

#define resetDock_UNSERIALIZE OM_NO_OP

#define resetDock_CONSTRUCTOR resetDock()
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evFollowPath()
evFollowPath::evFollowPath() {
    NOTIFY_EVENT_CONSTRUCTOR(evFollowPath)
    setId(evFollowPath_DriveAutonomously_UseCaseAnalysisPkg_id);
}

bool evFollowPath::isTypeOf(const short id) const {
    return (evFollowPath_DriveAutonomously_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evFollowPath, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, evFollowPath())

//## event reqDock()
reqDock::reqDock() {
    NOTIFY_EVENT_CONSTRUCTOR(reqDock)
    setId(reqDock_DriveAutonomously_UseCaseAnalysisPkg_id);
}

bool reqDock::isTypeOf(const short id) const {
    return (reqDock_DriveAutonomously_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqDock, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, reqDock())

//## event resetDock()
resetDock::resetDock() {
    NOTIFY_EVENT_CONSTRUCTOR(resetDock)
    setId(resetDock_DriveAutonomously_UseCaseAnalysisPkg_id);
}

bool resetDock::isTypeOf(const short id) const {
    return (resetDock_DriveAutonomously_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(resetDock, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, resetDock())

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\DriveAutonomously.cpp
*********************************************************************/
