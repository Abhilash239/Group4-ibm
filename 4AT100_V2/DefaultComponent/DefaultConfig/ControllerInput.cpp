/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerInput
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerInput.cpp
*********************************************************************/

//## auto_generated
#include "ControllerInput.h"
//## link itsControllerStructure
#include "ControllerStructure.h"
//## package ControllerModel

//## class ControllerInput
//#[ ignore
ControllerInput::psi_h_SP_C::psi_h_SP_C(void) : doubleFlowInterface(), _p_(0), itsDoubleFlowInterface(NULL) {
}

ControllerInput::psi_h_SP_C::~psi_h_SP_C(void) {
    cleanUpRelations();
}

void ControllerInput::psi_h_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* ControllerInput::psi_h_SP_C::getItsDoubleFlowInterface(void) {
    return this;
}

doubleFlowInterface* ControllerInput::psi_h_SP_C::getOutBound(void) {
    return this;
}

void ControllerInput::psi_h_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* const p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerInput::psi_h_SP_C::cleanUpRelations(void) {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

ControllerInput::psi_st_SP_C::psi_st_SP_C(void) : doubleFlowInterface(), _p_(0), itsDoubleFlowInterface(NULL) {
}

ControllerInput::psi_st_SP_C::~psi_st_SP_C(void) {
    cleanUpRelations();
}

void ControllerInput::psi_st_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* ControllerInput::psi_st_SP_C::getItsDoubleFlowInterface(void) {
    return this;
}

doubleFlowInterface* ControllerInput::psi_st_SP_C::getOutBound(void) {
    return this;
}

void ControllerInput::psi_st_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* const p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerInput::psi_st_SP_C::cleanUpRelations(void) {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

ControllerInput::v_h_SP_C::v_h_SP_C(void) : doubleFlowInterface(), _p_(0), itsDoubleFlowInterface(NULL) {
}

ControllerInput::v_h_SP_C::~v_h_SP_C(void) {
    cleanUpRelations();
}

void ControllerInput::v_h_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* ControllerInput::v_h_SP_C::getItsDoubleFlowInterface(void) {
    return this;
}

doubleFlowInterface* ControllerInput::v_h_SP_C::getOutBound(void) {
    return this;
}

void ControllerInput::v_h_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* const p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerInput::v_h_SP_C::cleanUpRelations(void) {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

ControllerInput::x_st_SP_C::x_st_SP_C(void) : doubleFlowInterface(), _p_(0), itsDoubleFlowInterface(NULL) {
}

ControllerInput::x_st_SP_C::~x_st_SP_C(void) {
    cleanUpRelations();
}

void ControllerInput::x_st_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* ControllerInput::x_st_SP_C::getItsDoubleFlowInterface(void) {
    return this;
}

doubleFlowInterface* ControllerInput::x_st_SP_C::getOutBound(void) {
    return this;
}

void ControllerInput::x_st_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* const p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerInput::x_st_SP_C::cleanUpRelations(void) {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

ControllerInput::y_st_SP_C::y_st_SP_C(void) : doubleFlowInterface(), _p_(0), itsDoubleFlowInterface(NULL) {
}

ControllerInput::y_st_SP_C::~y_st_SP_C(void) {
    cleanUpRelations();
}

void ControllerInput::y_st_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* ControllerInput::y_st_SP_C::getItsDoubleFlowInterface(void) {
    return this;
}

doubleFlowInterface* ControllerInput::y_st_SP_C::getOutBound(void) {
    return this;
}

void ControllerInput::y_st_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* const p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerInput::y_st_SP_C::cleanUpRelations(void) {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}
//#]

ControllerInput::ControllerInput(void) : itsControllerStructure(NULL) {
}

ControllerInput::~ControllerInput(void) {
    cleanUpRelations();
}

//#[ ignore
void ControllerInput::setPsi_h(double p_psi_h) {
    if (psi_h != p_psi_h)  {
        psi_h = p_psi_h;
        FLOW_DATA_SEND(psi_h, psi_h_SP, SetValue, x2String);
    }
}

void ControllerInput::setPsi_st(double p_psi_st) {
    if (psi_st != p_psi_st)  {
        psi_st = p_psi_st;
        FLOW_DATA_SEND(psi_st, psi_st_SP, SetValue, x2String);
    }
}

void ControllerInput::setV_h(double p_v_h) {
    if (v_h != p_v_h)  {
        v_h = p_v_h;
        FLOW_DATA_SEND(v_h, v_h_SP, SetValue, x2String);
    }
}

void ControllerInput::setX_st(double p_x_st) {
    if (x_st != p_x_st)  {
        x_st = p_x_st;
        FLOW_DATA_SEND(x_st, x_st_SP, SetValue, x2String);
    }
}

void ControllerInput::setY_st(double p_y_st) {
    if (y_st != p_y_st)  {
        y_st = p_y_st;
        FLOW_DATA_SEND(y_st, y_st_SP, SetValue, x2String);
    }
}
//#]

ControllerInput::psi_h_SP_C* ControllerInput::getPsi_h_SP(void) const {
    return (ControllerInput::psi_h_SP_C*) &psi_h_SP;
}

ControllerInput::psi_h_SP_C* ControllerInput::get_psi_h_SP(void) const {
    return (ControllerInput::psi_h_SP_C*) &psi_h_SP;
}

ControllerInput::psi_st_SP_C* ControllerInput::getPsi_st_SP(void) const {
    return (ControllerInput::psi_st_SP_C*) &psi_st_SP;
}

ControllerInput::psi_st_SP_C* ControllerInput::get_psi_st_SP(void) const {
    return (ControllerInput::psi_st_SP_C*) &psi_st_SP;
}

ControllerInput::v_h_SP_C* ControllerInput::getV_h_SP(void) const {
    return (ControllerInput::v_h_SP_C*) &v_h_SP;
}

ControllerInput::v_h_SP_C* ControllerInput::get_v_h_SP(void) const {
    return (ControllerInput::v_h_SP_C*) &v_h_SP;
}

ControllerInput::x_st_SP_C* ControllerInput::getX_st_SP(void) const {
    return (ControllerInput::x_st_SP_C*) &x_st_SP;
}

ControllerInput::x_st_SP_C* ControllerInput::get_x_st_SP(void) const {
    return (ControllerInput::x_st_SP_C*) &x_st_SP;
}

ControllerInput::y_st_SP_C* ControllerInput::getY_st_SP(void) const {
    return (ControllerInput::y_st_SP_C*) &y_st_SP;
}

ControllerInput::y_st_SP_C* ControllerInput::get_y_st_SP(void) const {
    return (ControllerInput::y_st_SP_C*) &y_st_SP;
}

const double ControllerInput::getPsi_h(void) const {
    return psi_h;
}

const double ControllerInput::getPsi_st(void) const {
    return psi_st;
}

const double ControllerInput::getV_h(void) const {
    return v_h;
}

const double ControllerInput::getX_st(void) const {
    return x_st;
}

const double ControllerInput::getY_st(void) const {
    return y_st;
}

const ControllerStructure* ControllerInput::getItsControllerStructure(void) const {
    return itsControllerStructure;
}

void ControllerInput::setItsControllerStructure(ControllerStructure* const p_ControllerStructure) {
    _setItsControllerStructure(p_ControllerStructure);
}

void ControllerInput::cleanUpRelations(void) {
    if(itsControllerStructure != NULL)
        {
            itsControllerStructure = NULL;
        }
}

void ControllerInput::__setItsControllerStructure(ControllerStructure* const p_ControllerStructure) {
    itsControllerStructure = p_ControllerStructure;
}

void ControllerInput::_setItsControllerStructure(ControllerStructure* const p_ControllerStructure) {
    __setItsControllerStructure(p_ControllerStructure);
}

void ControllerInput::_clearItsControllerStructure(void) {
    itsControllerStructure = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerInput.cpp
*********************************************************************/
