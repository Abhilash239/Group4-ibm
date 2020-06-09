/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerModel
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerModel.cpp
*********************************************************************/

//#[ ignore
#define _OMSTATECHART_ANIMATED

#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PathPlannerModel.h"
//## link itsPathPlannerStructure
#include "PathPlannerStructure.h"
//## auto_generated
#include "PathPlannerInput.h"
//## auto_generated
#include "PathPlannerOutput.h"
//#[ ignore
#define PathPlannerModel_PathPlannerModel_PathPlannerModel_SERIALIZE OM_NO_OP
//#]

//## package PathPlannerModel


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(PathPlannerModel, PathPlannerModel)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## package PathPlannerModel

//## class PathPlannerModel
PathPlannerModel::PathPlannerModel(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(PathPlannerModel, PathPlannerModel(), 0, PathPlannerModel_PathPlannerModel_PathPlannerModel_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsPathPlannerStructure = NULL;
    initStatechart();
}

PathPlannerModel::~PathPlannerModel() {
    NOTIFY_DESTRUCTOR(~PathPlannerModel, true);
    cleanUpRelations();
}

PathPlannerStructure* PathPlannerModel::getItsPathPlannerStructure() const {
    return itsPathPlannerStructure;
}

void PathPlannerModel::setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure) {
    _setItsPathPlannerStructure(p_PathPlannerStructure);
}

bool PathPlannerModel::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PathPlannerModel::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PathPlannerModel::cleanUpRelations() {
    if(itsPathPlannerStructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPathPlannerStructure");
            itsPathPlannerStructure = NULL;
        }
}

void PathPlannerModel::__setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure) {
    itsPathPlannerStructure = p_PathPlannerStructure;
    if(p_PathPlannerStructure != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPathPlannerStructure", p_PathPlannerStructure, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPathPlannerStructure");
        }
}

void PathPlannerModel::_setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure) {
    __setItsPathPlannerStructure(p_PathPlannerStructure);
}

void PathPlannerModel::_clearItsPathPlannerStructure() {
    NOTIFY_RELATION_CLEARED("itsPathPlannerStructure");
    itsPathPlannerStructure = NULL;
}

void PathPlannerModel::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
    }
}

IOxfReactive::TakeEventStatus PathPlannerModel::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPathPlannerModel::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPathPlannerStructure", false, true);
    if(myReal->itsPathPlannerStructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsPathPlannerStructure);
        }
}

void OMAnimatedPathPlannerModel::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
}
//#]

IMPLEMENT_REACTIVE_META_P(PathPlannerModel, PathPlannerModel, PathPlannerModel, false, OMAnimatedPathPlannerModel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerModel.cpp
*********************************************************************/
