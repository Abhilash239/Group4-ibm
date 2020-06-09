/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: UC_AdjustHVAC
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_AdjustHVAC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UC_AdjustHVAC.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define UseCaseAnalysisPkg_AdjustHVACandLighting_UC_AdjustHVAC_UC_AdjustHVAC_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_AdjustHVACandLighting_UC_AdjustHVAC_adjustHVAC_SERIALIZE aomsmethod->addAttribute("cooling", x2String(cooling));
//#]

//## package UseCaseAnalysisPkg::AdjustHVACandLighting

//## class UC_AdjustHVAC
//#[ ignore
UC_AdjustHVAC::Activity_2OfUC_AdjustHVAC::ActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC::ActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC(const OMString& id, Activity_2OfUC_AdjustHVAC& activity, IOxfEvent::ID eventId, UC_AdjustHVAC& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> UC_AdjustHVAC::Activity_2OfUC_AdjustHVAC::ActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC();
}

void UC_AdjustHVAC::Activity_2OfUC_AdjustHVAC::ActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC();
}

UC_AdjustHVAC::Activity_2OfUC_AdjustHVAC::ActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC::ActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC(const OMString& id, Activity_2OfUC_AdjustHVAC& activity, UC_AdjustHVAC& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> UC_AdjustHVAC::Activity_2OfUC_AdjustHVAC::ActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC(cooling);
}

void UC_AdjustHVAC::Activity_2OfUC_AdjustHVAC::ActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC::setCooling(int value) {
    this->cooling = value;
}

void UC_AdjustHVAC::Activity_2OfUC_AdjustHVAC::ActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("cooling", x2String(cooling));
}

void UC_AdjustHVAC::Activity_2OfUC_AdjustHVAC::ActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC(cooling);
}

UC_AdjustHVAC::Activity_2OfUC_AdjustHVAC::ActionActivityfinal_4InActivityActivity_2OfUC_AdjustHVAC::ActionActivityfinal_4InActivityActivity_2OfUC_AdjustHVAC(const OMString& id, Activity_2OfUC_AdjustHVAC& activity, UC_AdjustHVAC& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> UC_AdjustHVAC::Activity_2OfUC_AdjustHVAC::ActionActivityfinal_4InActivityActivity_2OfUC_AdjustHVAC::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_4InActivityActivity_2OfUC_AdjustHVAC();
}

UC_AdjustHVAC::Activity_2OfUC_AdjustHVAC::Activity_2OfUC_AdjustHVAC(UC_AdjustHVAC& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC* varAccepteventaction_0 = new ActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC("activity_2:ROOT.accepteventaction_0", *this, reqAdjustHVAC_AdjustHVACandLighting_UseCaseAnalysisPkg_id, *mContext);
    ActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC* varCalloperation_2 = new ActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC("activity_2:ROOT.calloperation_2", *this, *mContext);
    ActionActivityfinal_4InActivityActivity_2OfUC_AdjustHVAC* varActivityfinal_4 = new ActionActivityfinal_4InActivityActivity_2OfUC_AdjustHVAC("activity_2:ROOT.activityfinal_4", *this, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("activity_2:0", *this);
    
    // Setup flows
    new OMControlFlow("activity_2:0", *this, *varInitialNode0, *varAccepteventaction_0);
    new OMControlFlow("activity_2:1", *this, *varAccepteventaction_0, *varCalloperation_2);
    new OMControlFlow("activity_2:2", *this, *varCalloperation_2, *varActivityfinal_4);
}
//#]

UC_AdjustHVAC::UC_AdjustHVAC() : coolingValue(20) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(UC_AdjustHVAC, UC_AdjustHVAC(), 0, UseCaseAnalysisPkg_AdjustHVACandLighting_UC_AdjustHVAC_UC_AdjustHVAC_SERIALIZE);
    itsTruck = NULL;
}

UC_AdjustHVAC::~UC_AdjustHVAC() {
    NOTIFY_DESTRUCTOR(~UC_AdjustHVAC, true);
    cleanUpRelations();
}

void UC_AdjustHVAC::adjustHVAC(int cooling) {
    NOTIFY_OPERATION(adjustHVAC, adjustHVAC(int), 1, UseCaseAnalysisPkg_AdjustHVACandLighting_UC_AdjustHVAC_adjustHVAC_SERIALIZE);
    //#[ operation adjustHVAC(int)
    //#]
}

//#[ ignore
OMActivity* UC_AdjustHVAC::createMainActivity() {
    return new Activity_2OfUC_AdjustHVAC(*this);
}

void* UC_AdjustHVAC::getMe() {
    return this;
}
//#]

OMList<OMString> UC_AdjustHVAC::delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC() {
    //#[ activity_action activity_2:ROOT.accepteventaction_0
    OMList<OMString> ans;
    ans.add("activity_2:1");
    return ans;
    //#]
}

void UC_AdjustHVAC::delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC() {
    //#[ activity_action activity_2:ROOT.accepteventaction_0
    //#]
}

OMList<OMString> UC_AdjustHVAC::delegatedFilterPassableFlowsFromActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC(int cooling) {
    //#[ activity_action activity_2:ROOT.calloperation_2
    OMList<OMString> ans;
    ans.add("activity_2:2");
    return ans;
    //#]
}

void UC_AdjustHVAC::delegatedInvokeContextMethodFromActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC(int cooling) {
    //#[ activity_action activity_2:ROOT.calloperation_2
    adjustHVAC(cooling);
    //#]
}

OMList<OMString> UC_AdjustHVAC::delegatedFilterPassableFlowsFromActionActivityfinal_4InActivityActivity_2OfUC_AdjustHVAC() {
    //#[ activity_action activity_2:ROOT.activityfinal_4
    OMList<OMString> ans;
    return ans;
    //#]
}

int UC_AdjustHVAC::getCoolingValue() const {
    return coolingValue;
}

void UC_AdjustHVAC::setCoolingValue(int p_coolingValue) {
    coolingValue = p_coolingValue;
}

Truck* UC_AdjustHVAC::getItsTruck() const {
    return itsTruck;
}

void UC_AdjustHVAC::setItsTruck(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsUC_AdjustHVAC(this);
        }
    _setItsTruck(p_Truck);
}

bool UC_AdjustHVAC::startBehavior() {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

void UC_AdjustHVAC::cleanUpRelations() {
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            UC_AdjustHVAC* p_UC_AdjustHVAC = itsTruck->getItsUC_AdjustHVAC();
            if(p_UC_AdjustHVAC != NULL)
                {
                    itsTruck->__setItsUC_AdjustHVAC(NULL);
                }
            itsTruck = NULL;
        }
}

void UC_AdjustHVAC::__setItsTruck(Truck* p_Truck) {
    itsTruck = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
        }
}

void UC_AdjustHVAC::_setItsTruck(Truck* p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsUC_AdjustHVAC(NULL);
        }
    __setItsTruck(p_Truck);
}

void UC_AdjustHVAC::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_AdjustHVAC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("coolingValue", x2String(myReal->coolingValue));
}

void OMAnimatedUC_AdjustHVAC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
}
//#]

IMPLEMENT_ACTIVITY_META_P(UC_AdjustHVAC, UseCaseAnalysisPkg_AdjustHVACandLighting, UseCaseAnalysisPkg::AdjustHVACandLighting, false, OMAnimatedUC_AdjustHVAC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_AdjustHVAC.cpp
*********************************************************************/
