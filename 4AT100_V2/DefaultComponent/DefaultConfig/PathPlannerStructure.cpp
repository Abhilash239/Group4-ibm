/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerStructure
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerStructure.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "PathPlannerStructure.h"
//## package PathPlannerModel

//## class PathPlannerStructure
PathPlannerStructure::PathPlannerStructure(IOxfActive* const theActiveContext) : OMReactive() {
    setActiveContext(theActiveContext, false);
    {
        {
            itsPathPlannerModel.setShouldDelete(false);
        }
    }
    initRelations();
}

PathPlannerStructure::~PathPlannerStructure(void) {
}

const PathPlannerInput* PathPlannerStructure::getItsPathPlannerInput(void) const {
    return &itsPathPlannerInput;
}

const PathPlannerModel* PathPlannerStructure::getItsPathPlannerModel(void) const {
    return &itsPathPlannerModel;
}

const PathPlannerOutput* PathPlannerStructure::getItsPathPlannerOutput(void) const {
    return &itsPathPlannerOutput;
}

bool PathPlannerStructure::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsPathPlannerModel.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void PathPlannerStructure::initRelations(void) {
    itsPathPlannerInput._setItsPathPlannerStructure(this);
    itsPathPlannerModel._setItsPathPlannerStructure(this);
    itsPathPlannerOutput._setItsPathPlannerStructure(this);
}

void PathPlannerStructure::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsPathPlannerModel.setActiveContext(theActiveContext, false);
    }
}

void PathPlannerStructure::destroy(void) {
    itsPathPlannerModel.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerStructure.cpp
*********************************************************************/
