/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerInput
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerInput.cpp
*********************************************************************/

//## auto_generated
#include "PathPlannerInput.h"
//## link itsPathPlannerStructure
#include "PathPlannerStructure.h"
//## package PathPlannerModel

//## class PathPlannerInput
PathPlannerInput::PathPlannerInput(void) : itsPathPlannerStructure(NULL) {
}

PathPlannerInput::~PathPlannerInput(void) {
    cleanUpRelations();
}

const PathPlannerStructure* PathPlannerInput::getItsPathPlannerStructure(void) const {
    return itsPathPlannerStructure;
}

void PathPlannerInput::setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure) {
    _setItsPathPlannerStructure(p_PathPlannerStructure);
}

void PathPlannerInput::cleanUpRelations(void) {
    if(itsPathPlannerStructure != NULL)
        {
            itsPathPlannerStructure = NULL;
        }
}

void PathPlannerInput::__setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure) {
    itsPathPlannerStructure = p_PathPlannerStructure;
}

void PathPlannerInput::_setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure) {
    __setItsPathPlannerStructure(p_PathPlannerStructure);
}

void PathPlannerInput::_clearItsPathPlannerStructure(void) {
    itsPathPlannerStructure = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerInput.cpp
*********************************************************************/
