/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: block_2_Simulation
	Model Element	: block_2
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\block_2_Simulation\block_2.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "block_2.h"
//#[ ignore
#define UseCaseAnalysisPkg_AdjustHVACandLighting_block_2_block_2_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::AdjustHVACandLighting

//## class block_2
block_2::block_2(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(block_2, block_2(), 0, UseCaseAnalysisPkg_AdjustHVACandLighting_block_2_block_2_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

block_2::~block_2() {
    NOTIFY_DESTRUCTOR(~block_2, true);
}

bool block_2::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void block_2::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void block_2::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.state_0");
        rootState_subState = state_0;
        rootState_active = state_0;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus block_2::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedblock_2::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == block_2::state_0)
        {
            state_0_serializeStates(aomsState);
        }
}

void OMAnimatedblock_2::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
}
//#]

IMPLEMENT_REACTIVE_META_P(block_2, UseCaseAnalysisPkg_AdjustHVACandLighting, UseCaseAnalysisPkg::AdjustHVACandLighting, false, OMAnimatedblock_2)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\block_2_Simulation\block_2.cpp
*********************************************************************/
