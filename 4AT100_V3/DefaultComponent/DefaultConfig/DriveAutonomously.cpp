/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DriveAutonomously
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DriveAutonomously.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DriveAutonomously.h"
//## auto_generated
#include "UC_ControlPath.h"
//## auto_generated
#include "UC_DockTruck.h"
//#[ ignore
#define evFollowPath_SERIALIZE OM_NO_OP

#define evFollowPath_UNSERIALIZE OM_NO_OP

#define evFollowPath_CONSTRUCTOR evFollowPath()
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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DriveAutonomously.cpp
*********************************************************************/
