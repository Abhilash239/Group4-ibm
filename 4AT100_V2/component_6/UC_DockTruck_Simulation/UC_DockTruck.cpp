/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_6 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: UC_DockTruck
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_6\UC_DockTruck_Simulation\UC_DockTruck.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UC_DockTruck.h"
//#[ ignore
#define UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_UC_DockTruck_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_reqStartFollowPath_SERIALIZE OM_NO_OP

#define OMAnim_UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_setDockNumber_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_dockNumber)

#define OMAnim_UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_setDockNumber_int_SERIALIZE_RET_VAL
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_DockTruck
UC_DockTruck::UC_DockTruck(IOxfActive* const theActiveContext) : OMReactive(), dockNumber(1), emergency(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_DockTruck, UC_DockTruck(), 0, UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_UC_DockTruck_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsUC_GeneratePath.setShouldDelete(false);
        }
        {
            itsUC_FollowPath.setShouldDelete(false);
        }
    }
    initStatechart();
}

UC_DockTruck::~UC_DockTruck(void) {
    NOTIFY_DESTRUCTOR(~UC_DockTruck, true);
}

const int UC_DockTruck::getDockNumber(void) const {
    return dockNumber;
}

void UC_DockTruck::setDockNumber(const int p_dockNumber) {
    dockNumber = p_dockNumber;
    NOTIFY_SET_OPERATION;
}

const bool UC_DockTruck::getEmergency(void) const {
    return emergency;
}

void UC_DockTruck::setEmergency(const bool p_emergency) {
    emergency = p_emergency;
    NOTIFY_SET_OPERATION;
}

const UC_FollowPath* UC_DockTruck::getItsUC_FollowPath(void) const {
    return &itsUC_FollowPath;
}

const UC_GeneratePath* UC_DockTruck::getItsUC_GeneratePath(void) const {
    return &itsUC_GeneratePath;
}

bool UC_DockTruck::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsUC_FollowPath.startBehavior();
        }
    if(done == true)
        {
            done = itsUC_GeneratePath.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void UC_DockTruck::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

//#[ ignore
#undef OM_RET_TYPE
#define OM_RET_TYPE 
#undef OM_SER_RET
#define OM_SER_RET(val) 
#undef OM_SER_OUT
#define OM_SER_OUT 
//#]


void UC_DockTruck::reqStartFollowPath(void) {
    NOTIFY_TRIGGERED_OPERATION(reqStartFollowPath, reqStartFollowPath(), 0, UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_reqStartFollowPath_SERIALIZE);
    reqStartFollowPath_UC_DockTruck_Event triggerEvent;
    (void) handleTrigger(&triggerEvent);
    OM_RETURN_VOID;
}

void UC_DockTruck::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsUC_GeneratePath.setActiveContext(theActiveContext, false);
        itsUC_FollowPath.setActiveContext(theActiveContext, false);
    }
}

void UC_DockTruck::destroy(void) {
    itsUC_FollowPath.destroy();
    itsUC_GeneratePath.destroy();
    OMReactive::destroy();
}

void UC_DockTruck::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UC_DockTruck::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(reqDock_DriveAutonomously_UseCaseAnalysisPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    NOTIFY_STATE_ENTERED("ROOT.InputDockNumber");
                    rootState_subState = InputDockNumber;
                    rootState_active = InputDockNumber;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State InputDockNumber
        case InputDockNumber:
        {
            if(IS_EVENT_TYPE_OF(reqStartPathGeneration_DriveAutonomously_UseCaseAnalysisPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.InputDockNumber");
                    NOTIFY_STATE_ENTERED("ROOT.PathGenerate");
                    rootState_subState = PathGenerate;
                    rootState_active = PathGenerate;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State PathGenerate
        case PathGenerate:
        {
            if(IS_EVENT_TYPE_OF(reqStartFollowPath_UC_DockTruck_Event::reqStartFollowPath_UC_DockTruck_Event_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.PathGenerate");
                    NOTIFY_STATE_ENTERED("ROOT.FollowPath");
                    rootState_subState = FollowPath;
                    rootState_active = FollowPath;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_DockTruck::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("dockNumber", x2String(myReal->dockNumber));
    aomsAttributes->addAttribute("emergency", x2String(myReal->emergency));
}

void OMAnimatedUC_DockTruck::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_GeneratePath", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_GeneratePath);
    aomsRelations->addRelation("itsUC_FollowPath", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_FollowPath);
}

void OMAnimatedUC_DockTruck::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UC_DockTruck::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case UC_DockTruck::InputDockNumber:
        {
            InputDockNumber_serializeStates(aomsState);
        }
        break;
        case UC_DockTruck::PathGenerate:
        {
            PathGenerate_serializeStates(aomsState);
        }
        break;
        case UC_DockTruck::FollowPath:
        {
            FollowPath_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_DockTruck::PathGenerate_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PathGenerate");
}

void OMAnimatedUC_DockTruck::InputDockNumber_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.InputDockNumber");
}

void OMAnimatedUC_DockTruck::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}

void OMAnimatedUC_DockTruck::FollowPath_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.FollowPath");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC_DockTruck, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, false, OMAnimatedUC_DockTruck)

IMPLEMENT_META_OP(OMAnimatedUC_DockTruck, UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_setDockNumber_int, "setDockNumber", FALSE, "setDockNumber(int)", 1)

IMPLEMENT_OP_CALL(UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_setDockNumber_int, UC_DockTruck, setDockNumber(p_dockNumber), NO_OP())
#endif // _OMINSTRUMENT

//#[ ignore
reqStartFollowPath_UC_DockTruck_Event::reqStartFollowPath_UC_DockTruck_Event(void) {
    setId(reqStartFollowPath_UC_DockTruck_Event_id);
}

const IOxfEvent::ID reqStartFollowPath_UC_DockTruck_Event::reqStartFollowPath_UC_DockTruck_Event_id(31000);
//#]

/*********************************************************************
	File Path	: component_6\UC_DockTruck_Simulation\UC_DockTruck.cpp
*********************************************************************/
