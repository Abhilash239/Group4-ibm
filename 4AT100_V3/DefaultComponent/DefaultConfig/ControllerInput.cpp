/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerInput
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerInput.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ControllerInput.h"
//## link itsControllerStructure
#include "ControllerStructure.h"
//#[ ignore
#define ControllerModel_ControllerInput_ControllerInput_SERIALIZE OM_NO_OP
//#]

//## package ControllerModel

//## class ControllerInput
//#[ ignore
ControllerInput::psi_h_SP_C::psi_h_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

ControllerInput::psi_h_SP_C::~psi_h_SP_C() {
    cleanUpRelations();
}

void ControllerInput::psi_h_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* ControllerInput::psi_h_SP_C::getItsDoubleFlowInterface() {
    return this;
}

doubleFlowInterface* ControllerInput::psi_h_SP_C::getOutBound() {
    return this;
}

void ControllerInput::psi_h_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerInput::psi_h_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

ControllerInput::psi_st_SP_C::psi_st_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

ControllerInput::psi_st_SP_C::~psi_st_SP_C() {
    cleanUpRelations();
}

void ControllerInput::psi_st_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* ControllerInput::psi_st_SP_C::getItsDoubleFlowInterface() {
    return this;
}

doubleFlowInterface* ControllerInput::psi_st_SP_C::getOutBound() {
    return this;
}

void ControllerInput::psi_st_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerInput::psi_st_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

ControllerInput::v_h_SP_C::v_h_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

ControllerInput::v_h_SP_C::~v_h_SP_C() {
    cleanUpRelations();
}

void ControllerInput::v_h_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* ControllerInput::v_h_SP_C::getItsDoubleFlowInterface() {
    return this;
}

doubleFlowInterface* ControllerInput::v_h_SP_C::getOutBound() {
    return this;
}

void ControllerInput::v_h_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerInput::v_h_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

ControllerInput::x_st_SP_C::x_st_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

ControllerInput::x_st_SP_C::~x_st_SP_C() {
    cleanUpRelations();
}

void ControllerInput::x_st_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* ControllerInput::x_st_SP_C::getItsDoubleFlowInterface() {
    return this;
}

doubleFlowInterface* ControllerInput::x_st_SP_C::getOutBound() {
    return this;
}

void ControllerInput::x_st_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerInput::x_st_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

ControllerInput::y_st_SP_C::y_st_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

ControllerInput::y_st_SP_C::~y_st_SP_C() {
    cleanUpRelations();
}

void ControllerInput::y_st_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* ControllerInput::y_st_SP_C::getItsDoubleFlowInterface() {
    return this;
}

doubleFlowInterface* ControllerInput::y_st_SP_C::getOutBound() {
    return this;
}

void ControllerInput::y_st_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerInput::y_st_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}
//#]

ControllerInput::ControllerInput() {
    NOTIFY_CONSTRUCTOR(ControllerInput, ControllerInput(), 0, ControllerModel_ControllerInput_ControllerInput_SERIALIZE);
    itsControllerStructure = NULL;
}

ControllerInput::~ControllerInput() {
    NOTIFY_DESTRUCTOR(~ControllerInput, true);
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

ControllerInput::psi_h_SP_C* ControllerInput::getPsi_h_SP() const {
    return (ControllerInput::psi_h_SP_C*) &psi_h_SP;
}

ControllerInput::psi_h_SP_C* ControllerInput::get_psi_h_SP() const {
    return (ControllerInput::psi_h_SP_C*) &psi_h_SP;
}

ControllerInput::psi_st_SP_C* ControllerInput::getPsi_st_SP() const {
    return (ControllerInput::psi_st_SP_C*) &psi_st_SP;
}

ControllerInput::psi_st_SP_C* ControllerInput::get_psi_st_SP() const {
    return (ControllerInput::psi_st_SP_C*) &psi_st_SP;
}

ControllerInput::v_h_SP_C* ControllerInput::getV_h_SP() const {
    return (ControllerInput::v_h_SP_C*) &v_h_SP;
}

ControllerInput::v_h_SP_C* ControllerInput::get_v_h_SP() const {
    return (ControllerInput::v_h_SP_C*) &v_h_SP;
}

ControllerInput::x_st_SP_C* ControllerInput::getX_st_SP() const {
    return (ControllerInput::x_st_SP_C*) &x_st_SP;
}

ControllerInput::x_st_SP_C* ControllerInput::get_x_st_SP() const {
    return (ControllerInput::x_st_SP_C*) &x_st_SP;
}

ControllerInput::y_st_SP_C* ControllerInput::getY_st_SP() const {
    return (ControllerInput::y_st_SP_C*) &y_st_SP;
}

ControllerInput::y_st_SP_C* ControllerInput::get_y_st_SP() const {
    return (ControllerInput::y_st_SP_C*) &y_st_SP;
}

double ControllerInput::getPsi_h() const {
    return psi_h;
}

double ControllerInput::getPsi_st() const {
    return psi_st;
}

double ControllerInput::getV_h() const {
    return v_h;
}

double ControllerInput::getX_st() const {
    return x_st;
}

double ControllerInput::getY_st() const {
    return y_st;
}

ControllerStructure* ControllerInput::getItsControllerStructure() const {
    return itsControllerStructure;
}

void ControllerInput::setItsControllerStructure(ControllerStructure* p_ControllerStructure) {
    _setItsControllerStructure(p_ControllerStructure);
}

void ControllerInput::cleanUpRelations() {
    if(itsControllerStructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControllerStructure");
            itsControllerStructure = NULL;
        }
}

void ControllerInput::__setItsControllerStructure(ControllerStructure* p_ControllerStructure) {
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

void ControllerInput::_setItsControllerStructure(ControllerStructure* p_ControllerStructure) {
    __setItsControllerStructure(p_ControllerStructure);
}

void ControllerInput::_clearItsControllerStructure() {
    NOTIFY_RELATION_CLEARED("itsControllerStructure");
    itsControllerStructure = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedControllerInput::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("x_st", x2String(myReal->x_st));
    aomsAttributes->addAttribute("y_st", x2String(myReal->y_st));
    aomsAttributes->addAttribute("psi_st", x2String(myReal->psi_st));
    aomsAttributes->addAttribute("psi_h", x2String(myReal->psi_h));
    aomsAttributes->addAttribute("v_h", x2String(myReal->v_h));
}

void OMAnimatedControllerInput::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControllerStructure", false, true);
    if(myReal->itsControllerStructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsControllerStructure);
        }
}
//#]

IMPLEMENT_META_P(ControllerInput, ControllerModel, ControllerModel, false, OMAnimatedControllerInput)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerInput.cpp
*********************************************************************/
