/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 20184717
	Component	: DefaultComponent 
	Configuration 	: ToUnity_Simulation
	Model Element	: ToUnity
//!	Generated Date	: Fri, 17, May 2019  
	File Path	: DefaultComponent\ToUnity_Simulation\ToUnity.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "ToUnity.h"
//#[ ignore
#define Default_ToUnity_ToUnity_SERIALIZE OM_NO_OP

#define Default_ToUnity_send_receive_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class ToUnity
ToUnity::ToUnity(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ToUnity, ToUnity(), 0, Default_ToUnity_ToUnity_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

ToUnity::~ToUnity() {
    NOTIFY_DESTRUCTOR(~ToUnity, true);
}

void ToUnity::send_receive() {
    NOTIFY_OPERATION(send_receive, send_receive(), 0, Default_ToUnity_send_receive_SERIALIZE);
    //#[ operation send_receive()
    std::cout << "Hi there! " << this->accelerationSignal << std::endl;
    //#]
}

RhpReal ToUnity::getAccelerationSignal() const {
    return accelerationSignal;
}

void ToUnity::setAccelerationSignal(RhpReal p_accelerationSignal) {
    accelerationSignal = p_accelerationSignal;
    NOTIFY_SET_OPERATION;
}

RhpReal ToUnity::getObstaclePosX() const {
    return obstaclePosX;
}

void ToUnity::setObstaclePosX(RhpReal p_obstaclePosX) {
    obstaclePosX = p_obstaclePosX;
}

RhpReal ToUnity::getObstaclePosY() const {
    return obstaclePosY;
}

void ToUnity::setObstaclePosY(RhpReal p_obstaclePosY) {
    obstaclePosY = p_obstaclePosY;
}

RhpReal ToUnity::getSteeringCmd() const {
    return steeringCmd;
}

void ToUnity::setSteeringCmd(RhpReal p_steeringCmd) {
    steeringCmd = p_steeringCmd;
    NOTIFY_SET_OPERATION;
}

RhpReal ToUnity::getTrailer1PosX() const {
    return trailer1PosX;
}

void ToUnity::setTrailer1PosX(RhpReal p_trailer1PosX) {
    trailer1PosX = p_trailer1PosX;
}

RhpReal ToUnity::getTrailer1PosY() const {
    return trailer1PosY;
}

void ToUnity::setTrailer1PosY(RhpReal p_trailer1PosY) {
    trailer1PosY = p_trailer1PosY;
}

RhpReal ToUnity::getTrailer2PosX() const {
    return trailer2PosX;
}

void ToUnity::setTrailer2PosX(RhpReal p_trailer2PosX) {
    trailer2PosX = p_trailer2PosX;
}

RhpReal ToUnity::getTrailer2PosY() const {
    return trailer2PosY;
}

void ToUnity::setTrailer2PosY(RhpReal p_trailer2PosY) {
    trailer2PosY = p_trailer2PosY;
}

RhpReal ToUnity::getTruckPosX() const {
    return truckPosX;
}

void ToUnity::setTruckPosX(RhpReal p_truckPosX) {
    truckPosX = p_truckPosX;
}

RhpReal ToUnity::getTruckPosY() const {
    return truckPosY;
}

void ToUnity::setTruckPosY(RhpReal p_truckPosY) {
    truckPosY = p_truckPosY;
}

RhpReal ToUnity::getVelocity() const {
    return velocity;
}

void ToUnity::setVelocity(RhpReal p_velocity) {
    velocity = p_velocity;
    NOTIFY_SET_OPERATION;
}

RhpReal ToUnity::getVelocityCmd() const {
    return velocityCmd;
}

void ToUnity::setVelocityCmd(RhpReal p_velocityCmd) {
    velocityCmd = p_velocityCmd;
    NOTIFY_SET_OPERATION;
}

bool ToUnity::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ToUnity::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void ToUnity::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.running");
        rootState_subState = running;
        rootState_active = running;
        //#[ state running.(Entry) 
        send_receive();
        //#]
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus ToUnity::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State running
    if(rootState_active == running)
        {
            if(IS_EVENT_TYPE_OF(updateConnection_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.running");
                    NOTIFY_STATE_ENTERED("ROOT.running");
                    rootState_subState = running;
                    rootState_active = running;
                    //#[ state running.(Entry) 
                    send_receive();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedToUnity::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("steeringCmd", x2String(myReal->steeringCmd));
    aomsAttributes->addAttribute("velocityCmd", x2String(myReal->velocityCmd));
    aomsAttributes->addAttribute("velocity", x2String(myReal->velocity));
    aomsAttributes->addAttribute("truckPosX", x2String(myReal->truckPosX));
    aomsAttributes->addAttribute("truckPosY", x2String(myReal->truckPosY));
    aomsAttributes->addAttribute("trailer1PosX", x2String(myReal->trailer1PosX));
    aomsAttributes->addAttribute("trailer1PosY", x2String(myReal->trailer1PosY));
    aomsAttributes->addAttribute("trailer2PosX", x2String(myReal->trailer2PosX));
    aomsAttributes->addAttribute("trailer2PosY", x2String(myReal->trailer2PosY));
    aomsAttributes->addAttribute("obstaclePosX", x2String(myReal->obstaclePosX));
    aomsAttributes->addAttribute("obstaclePosY", x2String(myReal->obstaclePosY));
    aomsAttributes->addAttribute("accelerationSignal", x2String(myReal->accelerationSignal));
}

void OMAnimatedToUnity::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == ToUnity::running)
        {
            running_serializeStates(aomsState);
        }
}

void OMAnimatedToUnity::running_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.running");
}
//#]

IMPLEMENT_REACTIVE_META_P(ToUnity, Default, Default, false, OMAnimatedToUnity)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ToUnity_Simulation\ToUnity.cpp
*********************************************************************/
