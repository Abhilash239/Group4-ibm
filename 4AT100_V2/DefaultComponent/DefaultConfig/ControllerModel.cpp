/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerModel
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerModel.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "ControllerModel.h"
//## link itsControllerStructure
#include "ControllerStructure.h"
//## package ControllerModel

//## class ControllerModel
ControllerModel::ControllerModel(IOxfActive* const theActiveContext) : OMReactive(), itsControllerStructure(NULL) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

ControllerModel::~ControllerModel(void) {
    cleanUpRelations();
}

const ControllerStructure* ControllerModel::getItsControllerStructure(void) const {
    return itsControllerStructure;
}

void ControllerModel::setItsControllerStructure(ControllerStructure* const p_ControllerStructure) {
    _setItsControllerStructure(p_ControllerStructure);
}

bool ControllerModel::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ControllerModel::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void ControllerModel::cleanUpRelations(void) {
    if(itsControllerStructure != NULL)
        {
            itsControllerStructure = NULL;
        }
}

void ControllerModel::__setItsControllerStructure(ControllerStructure* const p_ControllerStructure) {
    itsControllerStructure = p_ControllerStructure;
}

void ControllerModel::_setItsControllerStructure(ControllerStructure* const p_ControllerStructure) {
    __setItsControllerStructure(p_ControllerStructure);
}

void ControllerModel::_clearItsControllerStructure(void) {
    itsControllerStructure = NULL;
}

void ControllerModel::rootState_entDef(void) {
}

IOxfReactive::TakeEventStatus ControllerModel::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerModel.cpp
*********************************************************************/
