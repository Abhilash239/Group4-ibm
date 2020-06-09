/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerOutput
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerOutput.cpp
*********************************************************************/

//## auto_generated
#include "ControllerOutput.h"
//## link itsControllerStructure
#include "ControllerStructure.h"
//## package ControllerModel

//## class ControllerOutput
//#[ ignore
ControllerOutput::delta0_SP_C::delta0_SP_C(void) : doubleFlowInterface(), _p_(0), itsDoubleFlowInterface(NULL) {
}

ControllerOutput::delta0_SP_C::~delta0_SP_C(void) {
    cleanUpRelations();
}

void ControllerOutput::delta0_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,this);
    }
    
}

void ControllerOutput::delta0_SP_C::connectControllerOutput(ControllerOutput* part) {
    setItsDoubleFlowInterface(part);
    
}

doubleFlowInterface* ControllerOutput::delta0_SP_C::getItsDoubleFlowInterface(void) {
    return this;
}

void ControllerOutput::delta0_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* const p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerOutput::delta0_SP_C::cleanUpRelations(void) {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}
//#]

ControllerOutput::ControllerOutput(void) : doubleFlowInterface(), itsControllerStructure(NULL) {
    initRelations();
}

ControllerOutput::~ControllerOutput(void) {
    cleanUpRelations();
}

//#[ ignore
void ControllerOutput::SetValue(double data, void * pCaller) {
    if (pCaller == (void *)get_delta0_SP()) {
        setDelta0(data);
    }
}

void ControllerOutput::setDelta0(double p_delta0) {
    if (delta0 != p_delta0) {
        delta0 = p_delta0;
        FLOW_DATA_RECEIVE("delta0", delta0, x2String);
    }
    
}
//#]

ControllerOutput::delta0_SP_C* ControllerOutput::getDelta0_SP(void) const {
    return (ControllerOutput::delta0_SP_C*) &delta0_SP;
}

ControllerOutput::delta0_SP_C* ControllerOutput::get_delta0_SP(void) const {
    return (ControllerOutput::delta0_SP_C*) &delta0_SP;
}

const double ControllerOutput::getDelta0(void) const {
    return delta0;
}

const ControllerStructure* ControllerOutput::getItsControllerStructure(void) const {
    return itsControllerStructure;
}

void ControllerOutput::setItsControllerStructure(ControllerStructure* const p_ControllerStructure) {
    _setItsControllerStructure(p_ControllerStructure);
}

void ControllerOutput::initRelations(void) {
    if (get_delta0_SP() != NULL) {
        get_delta0_SP()->connectControllerOutput(this);
    }
}

void ControllerOutput::cleanUpRelations(void) {
    if(itsControllerStructure != NULL)
        {
            itsControllerStructure = NULL;
        }
}

void ControllerOutput::__setItsControllerStructure(ControllerStructure* const p_ControllerStructure) {
    itsControllerStructure = p_ControllerStructure;
}

void ControllerOutput::_setItsControllerStructure(ControllerStructure* const p_ControllerStructure) {
    __setItsControllerStructure(p_ControllerStructure);
}

void ControllerOutput::_clearItsControllerStructure(void) {
    itsControllerStructure = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerOutput.cpp
*********************************************************************/
