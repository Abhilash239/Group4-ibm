/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerModel
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerModel.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "PathPlannerModel.h"
//## link itsPathPlannerStructure
#include "PathPlannerStructure.h"
//## package PathPlannerModel

//## class PathPlannerModel
PathPlannerModel::PathPlannerModel(IOxfActive* const theActiveContext) : OMReactive(), itsPathPlannerStructure(NULL) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

PathPlannerModel::~PathPlannerModel(void) {
    cleanUpRelations();
}

const PathPlannerStructure* PathPlannerModel::getItsPathPlannerStructure(void) const {
    return itsPathPlannerStructure;
}

void PathPlannerModel::setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure) {
    _setItsPathPlannerStructure(p_PathPlannerStructure);
}

bool PathPlannerModel::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PathPlannerModel::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PathPlannerModel::cleanUpRelations(void) {
    if(itsPathPlannerStructure != NULL)
        {
            itsPathPlannerStructure = NULL;
        }
}

void PathPlannerModel::__setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure) {
    itsPathPlannerStructure = p_PathPlannerStructure;
}

void PathPlannerModel::_setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure) {
    __setItsPathPlannerStructure(p_PathPlannerStructure);
}

void PathPlannerModel::_clearItsPathPlannerStructure(void) {
    itsPathPlannerStructure = NULL;
}

void PathPlannerModel::rootState_entDef(void) {
}

IOxfReactive::TakeEventStatus PathPlannerModel::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerModel.cpp
*********************************************************************/
