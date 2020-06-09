/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerStructure
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerStructure.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "ControllerStructure.h"
//## package ControllerModel

//## class ControllerStructure
ControllerStructure::ControllerStructure(IOxfActive* const theActiveContext) : OMReactive() {
    setActiveContext(theActiveContext, false);
    {
        {
            itsControllerModel.setShouldDelete(false);
        }
    }
    initRelations();
}

ControllerStructure::~ControllerStructure(void) {
}

const ControllerInput* ControllerStructure::getItsControllerInput(void) const {
    return &itsControllerInput;
}

const ControllerModel* ControllerStructure::getItsControllerModel(void) const {
    return &itsControllerModel;
}

const ControllerOutput* ControllerStructure::getItsControllerOutput(void) const {
    return &itsControllerOutput;
}

bool ControllerStructure::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsControllerModel.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void ControllerStructure::initRelations(void) {
    itsControllerInput._setItsControllerStructure(this);
    itsControllerModel._setItsControllerStructure(this);
    itsControllerOutput._setItsControllerStructure(this);
}

void ControllerStructure::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsControllerModel.setActiveContext(theActiveContext, false);
    }
}

void ControllerStructure::destroy(void) {
    itsControllerModel.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerStructure.cpp
*********************************************************************/
