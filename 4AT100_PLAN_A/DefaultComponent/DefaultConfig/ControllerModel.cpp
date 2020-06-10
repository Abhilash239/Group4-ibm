/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerModel
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerModel.cpp
*********************************************************************/

//#[ ignore
#define _OMSTATECHART_ANIMATED

#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ControllerModel.h"
//## link itsControllerStructure
#include "ControllerStructure.h"
//## auto_generated
#include "ControllerInput.h"
//## auto_generated
#include "ControllerOutput.h"
//#[ ignore
#define ControllerModel_ControllerModel_ControllerModel_SERIALIZE OM_NO_OP
//#]

//## package ControllerModel


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ControllerModel, ControllerModel)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## package ControllerModel

//## class ControllerModel
ControllerModel::ControllerModel(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ControllerModel, ControllerModel(), 0, ControllerModel_ControllerModel_ControllerModel_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsControllerStructure = NULL;
    initStatechart();
}

ControllerModel::~ControllerModel() {
    NOTIFY_DESTRUCTOR(~ControllerModel, true);
    cleanUpRelations();
}

ControllerStructure* ControllerModel::getItsControllerStructure() const {
    return itsControllerStructure;
}

void ControllerModel::setItsControllerStructure(ControllerStructure* p_ControllerStructure) {
    _setItsControllerStructure(p_ControllerStructure);
}

bool ControllerModel::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ControllerModel::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void ControllerModel::cleanUpRelations() {
    if(itsControllerStructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControllerStructure");
            itsControllerStructure = NULL;
        }
}

void ControllerModel::__setItsControllerStructure(ControllerStructure* p_ControllerStructure) {
    itsControllerStructure = p_ControllerStructure;
    if(p_ControllerStructure != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsControllerStructure", p_ControllerStructure, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsControllerStructure");
        }
}

void ControllerModel::_setItsControllerStructure(ControllerStructure* p_ControllerStructure) {
    __setItsControllerStructure(p_ControllerStructure);
}

void ControllerModel::_clearItsControllerStructure() {
    NOTIFY_RELATION_CLEARED("itsControllerStructure");
    itsControllerStructure = NULL;
}

void ControllerModel::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
    }
}

IOxfReactive::TakeEventStatus ControllerModel::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedControllerModel::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControllerStructure", false, true);
    if(myReal->itsControllerStructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsControllerStructure);
        }
}

void OMAnimatedControllerModel::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
}
//#]

IMPLEMENT_REACTIVE_META_P(ControllerModel, ControllerModel, ControllerModel, false, OMAnimatedControllerModel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerModel.cpp
*********************************************************************/
