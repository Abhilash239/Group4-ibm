/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_AdjustLighting
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_AdjustLighting.cpp
*********************************************************************/

//## auto_generated
#include "UC_AdjustLighting.h"
//## link itsTruck
#include "Truck.h"
//## package UseCaseAnalysisPkg::AdjustHVACandLighting

//## class UC_AdjustLighting
//#[ ignore
UC_AdjustLighting::Activity_adjustLightingOfUC_AdjustLighting::ActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting::ActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting(const OMString& id, Activity_adjustLightingOfUC_AdjustLighting& activity, IOxfEvent::ID eventId, UC_AdjustLighting& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> UC_AdjustLighting::Activity_adjustLightingOfUC_AdjustLighting::ActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting();
}

void UC_AdjustLighting::Activity_adjustLightingOfUC_AdjustLighting::ActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting::acceptEventData(void) {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting();
}

UC_AdjustLighting::Activity_adjustLightingOfUC_AdjustLighting::ActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting::ActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting(const OMString& id, Activity_adjustLightingOfUC_AdjustLighting& activity, UC_AdjustLighting& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> UC_AdjustLighting::Activity_adjustLightingOfUC_AdjustLighting::ActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting(lighting);
}

void UC_AdjustLighting::Activity_adjustLightingOfUC_AdjustLighting::ActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting::setLighting(int value) {
    this->lighting = value;
}

void UC_AdjustLighting::Activity_adjustLightingOfUC_AdjustLighting::ActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting(lighting);
}

UC_AdjustLighting::Activity_adjustLightingOfUC_AdjustLighting::ActionActivityfinal_3InActivityActivity_adjustLightingOfUC_AdjustLighting::ActionActivityfinal_3InActivityActivity_adjustLightingOfUC_AdjustLighting(const OMString& id, Activity_adjustLightingOfUC_AdjustLighting& activity, UC_AdjustLighting& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> UC_AdjustLighting::Activity_adjustLightingOfUC_AdjustLighting::ActionActivityfinal_3InActivityActivity_adjustLightingOfUC_AdjustLighting::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_3InActivityActivity_adjustLightingOfUC_AdjustLighting();
}

UC_AdjustLighting::Activity_adjustLightingOfUC_AdjustLighting::Activity_adjustLightingOfUC_AdjustLighting(UC_AdjustLighting& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting* varAccepteventaction_0 = new ActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting("activity_adjustLighting:ROOT.accepteventaction_0", *this, reqAdjustLighting_AdjustHVACandLighting_UseCaseAnalysisPkg_id, *mContext);
    ActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting* varCalloperation_1 = new ActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting("activity_adjustLighting:ROOT.calloperation_1", *this, *mContext);
    ActionActivityfinal_3InActivityActivity_adjustLightingOfUC_AdjustLighting* varActivityfinal_3 = new ActionActivityfinal_3InActivityActivity_adjustLightingOfUC_AdjustLighting("activity_adjustLighting:ROOT.activityfinal_3", *this, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("activity_adjustLighting:0", *this);
    
    // Setup flows
    new OMControlFlow("activity_adjustLighting:0", *this, *varInitialNode0, *varAccepteventaction_0);
    new OMControlFlow("activity_adjustLighting:1", *this, *varAccepteventaction_0, *varCalloperation_1);
    new OMControlFlow("activity_adjustLighting:2", *this, *varCalloperation_1, *varActivityfinal_3);
}
//#]

UC_AdjustLighting::UC_AdjustLighting(void) : itsTruck(NULL) {
}

UC_AdjustLighting::~UC_AdjustLighting(void) {
    cleanUpRelations();
}

void UC_AdjustLighting::adjustLighting(int lighting) {
    //#[ operation adjustLighting(int)
    //#]
}

//#[ ignore
OMActivity* UC_AdjustLighting::createMainActivity(void) {
    return new Activity_adjustLightingOfUC_AdjustLighting(*this);
}
//#]

OMList<OMString> UC_AdjustLighting::delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting(void) {
    //#[ activity_action activity_adjustLighting:ROOT.accepteventaction_0
    OMList<OMString> ans;
    ans.add("activity_adjustLighting:1");
    return ans;
    //#]
}

void UC_AdjustLighting::delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting(void) {
    //#[ activity_action activity_adjustLighting:ROOT.accepteventaction_0
    //#]
}

OMList<OMString> UC_AdjustLighting::delegatedFilterPassableFlowsFromActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting(int lighting) {
    //#[ activity_action activity_adjustLighting:ROOT.calloperation_1
    OMList<OMString> ans;
    ans.add("activity_adjustLighting:2");
    return ans;
    //#]
}

void UC_AdjustLighting::delegatedInvokeContextMethodFromActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting(int lighting) {
    //#[ activity_action activity_adjustLighting:ROOT.calloperation_1
    adjustLighting(lighting);
    //#]
}

OMList<OMString> UC_AdjustLighting::delegatedFilterPassableFlowsFromActionActivityfinal_3InActivityActivity_adjustLightingOfUC_AdjustLighting(void) {
    //#[ activity_action activity_adjustLighting:ROOT.activityfinal_3
    OMList<OMString> ans;
    return ans;
    //#]
}

const int UC_AdjustLighting::getLightingIntensity(void) const {
    return lightingIntensity;
}

void UC_AdjustLighting::setLightingIntensity(const int p_lightingIntensity) {
    lightingIntensity = p_lightingIntensity;
}

const Truck* UC_AdjustLighting::getItsTruck(void) const {
    return itsTruck;
}

void UC_AdjustLighting::setItsTruck(Truck* const p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsUC_AdjustLighting(this);
        }
    _setItsTruck(p_Truck);
}

bool UC_AdjustLighting::startBehavior(void) {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

void UC_AdjustLighting::cleanUpRelations(void) {
    if(itsTruck != NULL)
        {
            const UC_AdjustLighting* p_UC_AdjustLighting = itsTruck->getItsUC_AdjustLighting();
            if(p_UC_AdjustLighting != NULL)
                {
                    itsTruck->__setItsUC_AdjustLighting(NULL);
                }
            itsTruck = NULL;
        }
}

void UC_AdjustLighting::__setItsTruck(Truck* const p_Truck) {
    itsTruck = p_Truck;
}

void UC_AdjustLighting::_setItsTruck(Truck* const p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsUC_AdjustLighting(NULL);
        }
    __setItsTruck(p_Truck);
}

void UC_AdjustLighting::_clearItsTruck(void) {
    itsTruck = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_AdjustLighting.cpp
*********************************************************************/
