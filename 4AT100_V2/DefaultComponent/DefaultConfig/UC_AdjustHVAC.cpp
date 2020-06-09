/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_AdjustHVAC
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_AdjustHVAC.cpp
*********************************************************************/

//## auto_generated
#include "UC_AdjustHVAC.h"
//## link itsTruck
#include "Truck.h"
//## package UseCaseAnalysisPkg::AdjustHVACandLighting

//## class UC_AdjustHVAC
//#[ ignore
UC_AdjustHVAC::Activity_adjustHVACOfUC_AdjustHVAC::ActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC::ActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC(const OMString& id, Activity_adjustHVACOfUC_AdjustHVAC& activity, IOxfEvent::ID eventId, UC_AdjustHVAC& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> UC_AdjustHVAC::Activity_adjustHVACOfUC_AdjustHVAC::ActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC();
}

void UC_AdjustHVAC::Activity_adjustHVACOfUC_AdjustHVAC::ActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC::acceptEventData(void) {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC();
}

UC_AdjustHVAC::Activity_adjustHVACOfUC_AdjustHVAC::ActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC::ActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC(const OMString& id, Activity_adjustHVACOfUC_AdjustHVAC& activity, UC_AdjustHVAC& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> UC_AdjustHVAC::Activity_adjustHVACOfUC_AdjustHVAC::ActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC(cooling);
}

void UC_AdjustHVAC::Activity_adjustHVACOfUC_AdjustHVAC::ActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC::setCooling(int value) {
    this->cooling = value;
}

void UC_AdjustHVAC::Activity_adjustHVACOfUC_AdjustHVAC::ActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC(cooling);
}

UC_AdjustHVAC::Activity_adjustHVACOfUC_AdjustHVAC::ActionActivityfinal_4InActivityActivity_adjustHVACOfUC_AdjustHVAC::ActionActivityfinal_4InActivityActivity_adjustHVACOfUC_AdjustHVAC(const OMString& id, Activity_adjustHVACOfUC_AdjustHVAC& activity, UC_AdjustHVAC& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> UC_AdjustHVAC::Activity_adjustHVACOfUC_AdjustHVAC::ActionActivityfinal_4InActivityActivity_adjustHVACOfUC_AdjustHVAC::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_4InActivityActivity_adjustHVACOfUC_AdjustHVAC();
}

UC_AdjustHVAC::Activity_adjustHVACOfUC_AdjustHVAC::Activity_adjustHVACOfUC_AdjustHVAC(UC_AdjustHVAC& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC* varAccepteventaction_0 = new ActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC("activity_adjustHVAC:ROOT.accepteventaction_0", *this, reqAdjustHVAC_AdjustHVACandLighting_UseCaseAnalysisPkg_id, *mContext);
    ActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC* varCalloperation_2 = new ActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC("activity_adjustHVAC:ROOT.calloperation_2", *this, *mContext);
    ActionActivityfinal_4InActivityActivity_adjustHVACOfUC_AdjustHVAC* varActivityfinal_4 = new ActionActivityfinal_4InActivityActivity_adjustHVACOfUC_AdjustHVAC("activity_adjustHVAC:ROOT.activityfinal_4", *this, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("activity_adjustHVAC:0", *this);
    
    // Setup flows
    new OMControlFlow("activity_adjustHVAC:0", *this, *varInitialNode0, *varAccepteventaction_0);
    new OMControlFlow("activity_adjustHVAC:1", *this, *varAccepteventaction_0, *varCalloperation_2);
    new OMControlFlow("activity_adjustHVAC:2", *this, *varCalloperation_2, *varActivityfinal_4);
}
//#]

UC_AdjustHVAC::UC_AdjustHVAC(void) : coolingValue(20), itsTruck(NULL) {
}

UC_AdjustHVAC::~UC_AdjustHVAC(void) {
    cleanUpRelations();
}

void UC_AdjustHVAC::adjustHVAC(int cooling) {
    //#[ operation adjustHVAC(int)
    //#]
}

//#[ ignore
OMActivity* UC_AdjustHVAC::createMainActivity(void) {
    return new Activity_adjustHVACOfUC_AdjustHVAC(*this);
}
//#]

OMList<OMString> UC_AdjustHVAC::delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC(void) {
    //#[ activity_action activity_adjustHVAC:ROOT.accepteventaction_0
    OMList<OMString> ans;
    ans.add("activity_adjustHVAC:1");
    return ans;
    //#]
}

void UC_AdjustHVAC::delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC(void) {
    //#[ activity_action activity_adjustHVAC:ROOT.accepteventaction_0
    //#]
}

OMList<OMString> UC_AdjustHVAC::delegatedFilterPassableFlowsFromActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC(int cooling) {
    //#[ activity_action activity_adjustHVAC:ROOT.calloperation_2
    OMList<OMString> ans;
    ans.add("activity_adjustHVAC:2");
    return ans;
    //#]
}

void UC_AdjustHVAC::delegatedInvokeContextMethodFromActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC(int cooling) {
    //#[ activity_action activity_adjustHVAC:ROOT.calloperation_2
    adjustHVAC(cooling);
    //#]
}

OMList<OMString> UC_AdjustHVAC::delegatedFilterPassableFlowsFromActionActivityfinal_4InActivityActivity_adjustHVACOfUC_AdjustHVAC(void) {
    //#[ activity_action activity_adjustHVAC:ROOT.activityfinal_4
    OMList<OMString> ans;
    return ans;
    //#]
}

const int UC_AdjustHVAC::getCoolingValue(void) const {
    return coolingValue;
}

void UC_AdjustHVAC::setCoolingValue(const int p_coolingValue) {
    coolingValue = p_coolingValue;
}

const Truck* UC_AdjustHVAC::getItsTruck(void) const {
    return itsTruck;
}

void UC_AdjustHVAC::setItsTruck(Truck* const p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsUC_AdjustHVAC(this);
        }
    _setItsTruck(p_Truck);
}

bool UC_AdjustHVAC::startBehavior(void) {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

void UC_AdjustHVAC::cleanUpRelations(void) {
    if(itsTruck != NULL)
        {
            const UC_AdjustHVAC* p_UC_AdjustHVAC = itsTruck->getItsUC_AdjustHVAC();
            if(p_UC_AdjustHVAC != NULL)
                {
                    itsTruck->__setItsUC_AdjustHVAC(NULL);
                }
            itsTruck = NULL;
        }
}

void UC_AdjustHVAC::__setItsTruck(Truck* const p_Truck) {
    itsTruck = p_Truck;
}

void UC_AdjustHVAC::_setItsTruck(Truck* const p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsUC_AdjustHVAC(NULL);
        }
    __setItsTruck(p_Truck);
}

void UC_AdjustHVAC::_clearItsTruck(void) {
    itsTruck = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_AdjustHVAC.cpp
*********************************************************************/
