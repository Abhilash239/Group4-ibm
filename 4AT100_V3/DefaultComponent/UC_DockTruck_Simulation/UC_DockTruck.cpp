/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: UC_DockTruck
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\UC_DockTruck_Simulation\UC_DockTruck.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UC_DockTruck.h"
//## link itsGUI
#include "GUI.h"
//## link itsToUnity
#include "ToUnity.h"
//## link itsUC_ControlPath
#include "UC_ControlPath.h"
//#[ ignore
#define UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_UC_DockTruck_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_checkFlag_SERIALIZE aomsmethod->addAttribute("gp_flag", x2String(gp_flag));

#define UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_setDockReqData_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_DockTruck
UC_DockTruck::UC_DockTruck(IOxfActive* theActiveContext) : gp_flag(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_DockTruck, UC_DockTruck(), 0, UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_UC_DockTruck_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsGUI = NULL;
    itsToUnity = NULL;
    itsUC_ControlPath = NULL;
    initStatechart();
}

UC_DockTruck::~UC_DockTruck() {
    NOTIFY_DESTRUCTOR(~UC_DockTruck, true);
    cleanUpRelations();
    cancelTimeouts();
}

void UC_DockTruck::checkFlag(RhpBoolean gp_flag) {
    NOTIFY_OPERATION(checkFlag, checkFlag(RhpBoolean), 1, UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_checkFlag_SERIALIZE);
    //#[ operation checkFlag(RhpBoolean)
    if (this->gp_flag==1)
    	GEN(evFollowPath());
    //#]
}

void UC_DockTruck::setDockReqData() {
    NOTIFY_OPERATION(setDockReqData, setDockReqData(), 0, UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_setDockReqData_SERIALIZE);
    //#[ operation setDockReqData()
      docknumber;
      gp_obstaclePosX=5;
      gp_obstaclePosY=5;
      gp_trailer1PosX=1;
      gp_trailer1PosY=1;
      gp_trailer2PosX=1.1;
      gp_trailer2PosY=1.1;
      gp_truckPosX=1.2;
      gp_truckPosY=1.2;
    //#]
}

int UC_DockTruck::getDocknumber() const {
    return docknumber;
}

void UC_DockTruck::setDocknumber(int p_docknumber) {
    docknumber = p_docknumber;
}

RhpBoolean UC_DockTruck::getGp_flag() const {
    return gp_flag;
}

void UC_DockTruck::setGp_flag(RhpBoolean p_gp_flag) {
    gp_flag = p_gp_flag;
}

RhpReal UC_DockTruck::getGp_obstaclePosX() const {
    return gp_obstaclePosX;
}

void UC_DockTruck::setGp_obstaclePosX(RhpReal p_gp_obstaclePosX) {
    gp_obstaclePosX = p_gp_obstaclePosX;
}

RhpReal UC_DockTruck::getGp_obstaclePosY() const {
    return gp_obstaclePosY;
}

void UC_DockTruck::setGp_obstaclePosY(RhpReal p_gp_obstaclePosY) {
    gp_obstaclePosY = p_gp_obstaclePosY;
}

RhpReal UC_DockTruck::getGp_trailer1PosX() const {
    return gp_trailer1PosX;
}

void UC_DockTruck::setGp_trailer1PosX(RhpReal p_gp_trailer1PosX) {
    gp_trailer1PosX = p_gp_trailer1PosX;
}

RhpReal UC_DockTruck::getGp_trailer1PosY() const {
    return gp_trailer1PosY;
}

void UC_DockTruck::setGp_trailer1PosY(RhpReal p_gp_trailer1PosY) {
    gp_trailer1PosY = p_gp_trailer1PosY;
}

RhpReal UC_DockTruck::getGp_trailer2PosX() const {
    return gp_trailer2PosX;
}

void UC_DockTruck::setGp_trailer2PosX(RhpReal p_gp_trailer2PosX) {
    gp_trailer2PosX = p_gp_trailer2PosX;
}

RhpReal UC_DockTruck::getGp_trailer2PosY() const {
    return gp_trailer2PosY;
}

void UC_DockTruck::setGp_trailer2PosY(RhpReal p_gp_trailer2PosY) {
    gp_trailer2PosY = p_gp_trailer2PosY;
}

RhpReal UC_DockTruck::getGp_truckPosX() const {
    return gp_truckPosX;
}

void UC_DockTruck::setGp_truckPosX(RhpReal p_gp_truckPosX) {
    gp_truckPosX = p_gp_truckPosX;
}

RhpReal UC_DockTruck::getGp_truckPosY() const {
    return gp_truckPosY;
}

void UC_DockTruck::setGp_truckPosY(RhpReal p_gp_truckPosY) {
    gp_truckPosY = p_gp_truckPosY;
}

RhpReal UC_DockTruck::getVelocity() const {
    return velocity;
}

void UC_DockTruck::setVelocity(RhpReal p_velocity) {
    velocity = p_velocity;
}

GUI* UC_DockTruck::getItsGUI() const {
    return itsGUI;
}

void UC_DockTruck::setItsGUI(GUI* p_GUI) {
    if(p_GUI != NULL)
        {
            p_GUI->_setItsUC_DockTruck(this);
        }
    _setItsGUI(p_GUI);
}

ToUnity* UC_DockTruck::getItsToUnity() const {
    return itsToUnity;
}

void UC_DockTruck::setItsToUnity(ToUnity* p_ToUnity) {
    if(p_ToUnity != NULL)
        {
            p_ToUnity->_setItsUC_DockTruck(this);
        }
    _setItsToUnity(p_ToUnity);
}

UC_ControlPath* UC_DockTruck::getItsUC_ControlPath() const {
    return itsUC_ControlPath;
}

void UC_DockTruck::setItsUC_ControlPath(UC_ControlPath* p_UC_ControlPath) {
    if(p_UC_ControlPath != NULL)
        {
            p_UC_ControlPath->_setItsUC_DockTruck(this);
        }
    _setItsUC_ControlPath(p_UC_ControlPath);
}

bool UC_DockTruck::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC_DockTruck::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    DockTruck_subState = OMNonState;
    DockTruck_timeout = NULL;
}

void UC_DockTruck::cleanUpRelations() {
    if(itsGUI != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGUI");
            UC_DockTruck* p_UC_DockTruck = itsGUI->getItsUC_DockTruck();
            if(p_UC_DockTruck != NULL)
                {
                    itsGUI->__setItsUC_DockTruck(NULL);
                }
            itsGUI = NULL;
        }
    if(itsToUnity != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsToUnity");
            UC_DockTruck* p_UC_DockTruck = itsToUnity->getItsUC_DockTruck();
            if(p_UC_DockTruck != NULL)
                {
                    itsToUnity->__setItsUC_DockTruck(NULL);
                }
            itsToUnity = NULL;
        }
    if(itsUC_ControlPath != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_ControlPath");
            UC_DockTruck* p_UC_DockTruck = itsUC_ControlPath->getItsUC_DockTruck();
            if(p_UC_DockTruck != NULL)
                {
                    itsUC_ControlPath->__setItsUC_DockTruck(NULL);
                }
            itsUC_ControlPath = NULL;
        }
}

void UC_DockTruck::cancelTimeouts() {
    cancel(DockTruck_timeout);
}

bool UC_DockTruck::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(DockTruck_timeout == arg)
        {
            DockTruck_timeout = NULL;
            res = true;
        }
    return res;
}

void UC_DockTruck::__setItsGUI(GUI* p_GUI) {
    itsGUI = p_GUI;
    if(p_GUI != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGUI", p_GUI, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGUI");
        }
}

void UC_DockTruck::_setItsGUI(GUI* p_GUI) {
    if(itsGUI != NULL)
        {
            itsGUI->__setItsUC_DockTruck(NULL);
        }
    __setItsGUI(p_GUI);
}

void UC_DockTruck::_clearItsGUI() {
    NOTIFY_RELATION_CLEARED("itsGUI");
    itsGUI = NULL;
}

void UC_DockTruck::__setItsToUnity(ToUnity* p_ToUnity) {
    itsToUnity = p_ToUnity;
    if(p_ToUnity != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsToUnity", p_ToUnity, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsToUnity");
        }
}

void UC_DockTruck::_setItsToUnity(ToUnity* p_ToUnity) {
    if(itsToUnity != NULL)
        {
            itsToUnity->__setItsUC_DockTruck(NULL);
        }
    __setItsToUnity(p_ToUnity);
}

void UC_DockTruck::_clearItsToUnity() {
    NOTIFY_RELATION_CLEARED("itsToUnity");
    itsToUnity = NULL;
}

void UC_DockTruck::__setItsUC_ControlPath(UC_ControlPath* p_UC_ControlPath) {
    itsUC_ControlPath = p_UC_ControlPath;
    if(p_UC_ControlPath != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_ControlPath", p_UC_ControlPath, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_ControlPath");
        }
}

void UC_DockTruck::_setItsUC_ControlPath(UC_ControlPath* p_UC_ControlPath) {
    if(itsUC_ControlPath != NULL)
        {
            itsUC_ControlPath->__setItsUC_DockTruck(NULL);
        }
    __setItsUC_ControlPath(p_UC_ControlPath);
}

void UC_DockTruck::_clearItsUC_ControlPath() {
    NOTIFY_RELATION_CLEARED("itsUC_ControlPath");
    itsUC_ControlPath = NULL;
}

void UC_DockTruck::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.WaitingForDockRequest");
        rootState_subState = WaitingForDockRequest;
        rootState_active = WaitingForDockRequest;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UC_DockTruck::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State WaitingForDockRequest
        case WaitingForDockRequest:
        {
            if(IS_EVENT_TYPE_OF(reqDock_GUI_id))
                {
                    OMSETPARAMS(reqDock);
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.WaitingForDockRequest");
                    DockTruck_entDef();
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State GeneratePath
        case GeneratePath:
        {
            if(IS_EVENT_TYPE_OF(evFollowPath_DriveAutonomously_UseCaseAnalysisPkg_id))
                {
                    //## transition 6 
                    if(gp_flag)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            //#[ state DockTruck.GeneratePath.(Exit) 
                             checkFlag(gp_flag);
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.DockTruck.GeneratePath");
                            NOTIFY_STATE_ENTERED("ROOT.DockTruck.FollowPath");
                            DockTruck_subState = FollowPath;
                            rootState_active = FollowPath;
                            DockTruck_timeout = scheduleTimeout(50, "ROOT.DockTruck.FollowPath");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = DockTruck_handleEvent();
                }
        }
        break;
        // State FollowPath
        case FollowPath:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == DockTruck_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(DockTruck_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DockTruck.FollowPath");
                            NOTIFY_STATE_ENTERED("ROOT.DockTruck.accepttimeevent_7");
                            pushNullTransition();
                            DockTruck_subState = accepttimeevent_7;
                            rootState_active = accepttimeevent_7;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = DockTruck_handleEvent();
                }
        }
        break;
        case accepttimeevent_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DockTruck.accepttimeevent_7");
                    NOTIFY_STATE_ENTERED("ROOT.DockTruck.FollowPath");
                    DockTruck_subState = FollowPath;
                    rootState_active = FollowPath;
                    DockTruck_timeout = scheduleTimeout(50, "ROOT.DockTruck.FollowPath");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = DockTruck_handleEvent();
                }
        }
        break;
        default:
            break;
    }
    return res;
}

void UC_DockTruck::DockTruck_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.DockTruck");
    pushNullTransition();
    rootState_subState = DockTruck;
    //#[ state DockTruck.(Entry) 
     
    //#]
    NOTIFY_TRANSITION_STARTED("2");
    NOTIFY_STATE_ENTERED("ROOT.DockTruck.GeneratePath");
    DockTruck_subState = GeneratePath;
    rootState_active = GeneratePath;
    NOTIFY_TRANSITION_TERMINATED("2");
}

void UC_DockTruck::DockTruck_exit() {
    popNullTransition();
    switch (DockTruck_subState) {
        // State GeneratePath
        case GeneratePath:
        {
            //#[ state DockTruck.GeneratePath.(Exit) 
             checkFlag(gp_flag);
            //#]
            NOTIFY_STATE_EXITED("ROOT.DockTruck.GeneratePath");
        }
        break;
        // State FollowPath
        case FollowPath:
        {
            cancel(DockTruck_timeout);
            NOTIFY_STATE_EXITED("ROOT.DockTruck.FollowPath");
        }
        break;
        case accepttimeevent_7:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.DockTruck.accepttimeevent_7");
        }
        break;
        default:
            break;
    }
    DockTruck_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.DockTruck");
}

IOxfReactive::TakeEventStatus UC_DockTruck::DockTruck_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("5");
            DockTruck_exit();
            NOTIFY_STATE_ENTERED("ROOT.WaitingForDockRequest");
            rootState_subState = WaitingForDockRequest;
            rootState_active = WaitingForDockRequest;
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_DockTruck::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("docknumber", x2String(myReal->docknumber));
    aomsAttributes->addAttribute("gp_truckPosX", x2String(myReal->gp_truckPosX));
    aomsAttributes->addAttribute("gp_truckPosY", x2String(myReal->gp_truckPosY));
    aomsAttributes->addAttribute("gp_trailer1PosX", x2String(myReal->gp_trailer1PosX));
    aomsAttributes->addAttribute("gp_trailer1PosY", x2String(myReal->gp_trailer1PosY));
    aomsAttributes->addAttribute("gp_trailer2PosX", x2String(myReal->gp_trailer2PosX));
    aomsAttributes->addAttribute("gp_trailer2PosY", x2String(myReal->gp_trailer2PosY));
    aomsAttributes->addAttribute("gp_obstaclePosX", x2String(myReal->gp_obstaclePosX));
    aomsAttributes->addAttribute("gp_obstaclePosY", x2String(myReal->gp_obstaclePosY));
    aomsAttributes->addAttribute("velocity", x2String(myReal->velocity));
    aomsAttributes->addAttribute("gp_flag", x2String(myReal->gp_flag));
}

void OMAnimatedUC_DockTruck::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_ControlPath", false, true);
    if(myReal->itsUC_ControlPath)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_ControlPath);
        }
    aomsRelations->addRelation("itsGUI", false, true);
    if(myReal->itsGUI)
        {
            aomsRelations->ADD_ITEM(myReal->itsGUI);
        }
    aomsRelations->addRelation("itsToUnity", false, true);
    if(myReal->itsToUnity)
        {
            aomsRelations->ADD_ITEM(myReal->itsToUnity);
        }
}

void OMAnimatedUC_DockTruck::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UC_DockTruck::WaitingForDockRequest:
        {
            WaitingForDockRequest_serializeStates(aomsState);
        }
        break;
        case UC_DockTruck::DockTruck:
        {
            DockTruck_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_DockTruck::WaitingForDockRequest_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WaitingForDockRequest");
}

void OMAnimatedUC_DockTruck::DockTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DockTruck");
    switch (myReal->DockTruck_subState) {
        case UC_DockTruck::GeneratePath:
        {
            GeneratePath_serializeStates(aomsState);
        }
        break;
        case UC_DockTruck::FollowPath:
        {
            FollowPath_serializeStates(aomsState);
        }
        break;
        case UC_DockTruck::accepttimeevent_7:
        {
            accepttimeevent_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_DockTruck::GeneratePath_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DockTruck.GeneratePath");
}

void OMAnimatedUC_DockTruck::FollowPath_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DockTruck.FollowPath");
}

void OMAnimatedUC_DockTruck::accepttimeevent_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DockTruck.accepttimeevent_7");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC_DockTruck, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, false, OMAnimatedUC_DockTruck)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_DockTruck_Simulation\UC_DockTruck.cpp
*********************************************************************/
