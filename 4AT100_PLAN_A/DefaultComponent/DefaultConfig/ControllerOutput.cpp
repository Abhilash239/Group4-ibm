/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerOutput
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerOutput.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ControllerOutput.h"
//## link itsControllerStructure
#include "ControllerStructure.h"
//#[ ignore
#define ControllerModel_ControllerOutput_ControllerOutput_SERIALIZE OM_NO_OP
//#]

//## package ControllerModel

//## class ControllerOutput
//#[ ignore
ControllerOutput::delta0_SP_C::delta0_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

ControllerOutput::delta0_SP_C::~delta0_SP_C() {
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

doubleFlowInterface* ControllerOutput::delta0_SP_C::getItsDoubleFlowInterface() {
    return this;
}

void ControllerOutput::delta0_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void ControllerOutput::delta0_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}
//#]

ControllerOutput::ControllerOutput() {
    NOTIFY_CONSTRUCTOR(ControllerOutput, ControllerOutput(), 0, ControllerModel_ControllerOutput_ControllerOutput_SERIALIZE);
    itsControllerStructure = NULL;
    initRelations();
}

ControllerOutput::~ControllerOutput() {
    NOTIFY_DESTRUCTOR(~ControllerOutput, true);
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

ControllerOutput::delta0_SP_C* ControllerOutput::getDelta0_SP() const {
    return (ControllerOutput::delta0_SP_C*) &delta0_SP;
}

ControllerOutput::delta0_SP_C* ControllerOutput::get_delta0_SP() const {
    return (ControllerOutput::delta0_SP_C*) &delta0_SP;
}

double ControllerOutput::getDelta0() const {
    return delta0;
}

ControllerStructure* ControllerOutput::getItsControllerStructure() const {
    return itsControllerStructure;
}

void ControllerOutput::setItsControllerStructure(ControllerStructure* p_ControllerStructure) {
    _setItsControllerStructure(p_ControllerStructure);
}

void ControllerOutput::initRelations() {
    if (get_delta0_SP() != NULL) {
        get_delta0_SP()->connectControllerOutput(this);
    }
}

void ControllerOutput::cleanUpRelations() {
    if(itsControllerStructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControllerStructure");
            itsControllerStructure = NULL;
        }
}

void ControllerOutput::__setItsControllerStructure(ControllerStructure* p_ControllerStructure) {
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

void ControllerOutput::_setItsControllerStructure(ControllerStructure* p_ControllerStructure) {
    __setItsControllerStructure(p_ControllerStructure);
}

void ControllerOutput::_clearItsControllerStructure() {
    NOTIFY_RELATION_CLEARED("itsControllerStructure");
    itsControllerStructure = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedControllerOutput::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("delta0", x2String(myReal->delta0));
}

void OMAnimatedControllerOutput::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControllerStructure", false, true);
    if(myReal->itsControllerStructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsControllerStructure);
        }
}
//#]

IMPLEMENT_META_P(ControllerOutput, ControllerModel, ControllerModel, false, OMAnimatedControllerOutput)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerOutput.cpp
*********************************************************************/
