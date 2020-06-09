/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerOutput
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerOutput.cpp
*********************************************************************/

//## auto_generated
#include "PathPlannerOutput.h"
//## link itsPathPlannerStructure
#include "PathPlannerStructure.h"
//## package PathPlannerModel

//## class PathPlannerOutput
PathPlannerOutput::PathPlannerOutput(void) : itsPathPlannerStructure(NULL) {
}

PathPlannerOutput::~PathPlannerOutput(void) {
    cleanUpRelations();
}

const PathPlannerStructure* PathPlannerOutput::getItsPathPlannerStructure(void) const {
    return itsPathPlannerStructure;
}

void PathPlannerOutput::setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure) {
    _setItsPathPlannerStructure(p_PathPlannerStructure);
}

void PathPlannerOutput::cleanUpRelations(void) {
    if(itsPathPlannerStructure != NULL)
        {
            itsPathPlannerStructure = NULL;
        }
}

void PathPlannerOutput::__setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure) {
    itsPathPlannerStructure = p_PathPlannerStructure;
}

void PathPlannerOutput::_setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure) {
    __setItsPathPlannerStructure(p_PathPlannerStructure);
}

void PathPlannerOutput::_clearItsPathPlannerStructure(void) {
    itsPathPlannerStructure = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerOutput.cpp
*********************************************************************/
