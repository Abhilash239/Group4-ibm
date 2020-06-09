/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_DockTruck
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_DockTruck.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "UC_DockTruck.h"
//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_DockTruck
UC_DockTruck::UC_DockTruck(IOxfActive* const theActiveContext) : OMReactive() {
    setActiveContext(theActiveContext, false);
    {
        {
            itsUC_GeneratePath.setShouldDelete(false);
        }
        {
            itsUC_FollowPath.setShouldDelete(false);
        }
    }
}

UC_DockTruck::~UC_DockTruck(void) {
}

const UC_FollowPath* UC_DockTruck::getItsUC_FollowPath(void) const {
    return &itsUC_FollowPath;
}

const UC_GeneratePath* UC_DockTruck::getItsUC_GeneratePath(void) const {
    return &itsUC_GeneratePath;
}

bool UC_DockTruck::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsUC_FollowPath.startBehavior();
        }
    if(done == true)
        {
            done = itsUC_GeneratePath.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void UC_DockTruck::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsUC_GeneratePath.setActiveContext(theActiveContext, false);
        itsUC_FollowPath.setActiveContext(theActiveContext, false);
    }
}

void UC_DockTruck::destroy(void) {
    itsUC_FollowPath.destroy();
    itsUC_GeneratePath.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_DockTruck.cpp
*********************************************************************/
