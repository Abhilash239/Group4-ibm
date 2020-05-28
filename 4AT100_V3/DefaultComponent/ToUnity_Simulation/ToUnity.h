/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 20184717
	Component	: DefaultComponent 
	Configuration 	: ToUnity_Simulation
	Model Element	: ToUnity
//!	Generated Date	: Fri, 17, May 2019  
	File Path	: DefaultComponent\ToUnity_Simulation\ToUnity.h
*********************************************************************/

#ifndef ToUnity_H
#define ToUnity_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\omthread.h>
//## package Default

//## class ToUnity
class ToUnity : public OMReactive {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedToUnity;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ToUnity(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~ToUnity();
    
    ////    Operations    ////
    
    //## operation send_receive()
    virtual void send_receive();
    
    ////    Additional operations    ////
    
    //## auto_generated
    RhpReal getAccelerationSignal() const;
    
    //## auto_generated
    void setAccelerationSignal(RhpReal p_accelerationSignal);
    
    //## auto_generated
    RhpReal getObstaclePosX() const;
    
    //## auto_generated
    void setObstaclePosX(RhpReal p_obstaclePosX);
    
    //## auto_generated
    RhpReal getObstaclePosY() const;
    
    //## auto_generated
    void setObstaclePosY(RhpReal p_obstaclePosY);
    
    //## auto_generated
    RhpReal getSteeringCmd() const;
    
    //## auto_generated
    void setSteeringCmd(RhpReal p_steeringCmd);
    
    //## auto_generated
    RhpReal getTrailer1PosX() const;
    
    //## auto_generated
    void setTrailer1PosX(RhpReal p_trailer1PosX);
    
    //## auto_generated
    RhpReal getTrailer1PosY() const;
    
    //## auto_generated
    void setTrailer1PosY(RhpReal p_trailer1PosY);
    
    //## auto_generated
    RhpReal getTrailer2PosX() const;
    
    //## auto_generated
    void setTrailer2PosX(RhpReal p_trailer2PosX);
    
    //## auto_generated
    RhpReal getTrailer2PosY() const;
    
    //## auto_generated
    void setTrailer2PosY(RhpReal p_trailer2PosY);
    
    //## auto_generated
    RhpReal getTruckPosX() const;
    
    //## auto_generated
    void setTruckPosX(RhpReal p_truckPosX);
    
    //## auto_generated
    RhpReal getTruckPosY() const;
    
    //## auto_generated
    void setTruckPosY(RhpReal p_truckPosY);
    
    //## auto_generated
    RhpReal getVelocity() const;
    
    //## auto_generated
    void setVelocity(RhpReal p_velocity);
    
    //## auto_generated
    RhpReal getVelocityCmd() const;
    
    //## auto_generated
    void setVelocityCmd(RhpReal p_velocityCmd);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    RhpReal accelerationSignal;		//## attribute accelerationSignal
    
    RhpReal obstaclePosX;		//## attribute obstaclePosX
    
    RhpReal obstaclePosY;		//## attribute obstaclePosY
    
    RhpReal steeringCmd;		//## attribute steeringCmd
    
    RhpReal trailer1PosX;		//## attribute trailer1PosX
    
    RhpReal trailer1PosY;		//## attribute trailer1PosY
    
    RhpReal trailer2PosX;		//## attribute trailer2PosX
    
    RhpReal trailer2PosY;		//## attribute trailer2PosY
    
    RhpReal truckPosX;		//## attribute truckPosX
    
    RhpReal truckPosY;		//## attribute truckPosY
    
    RhpReal velocity;		//## attribute velocity
    
    RhpReal velocityCmd;		//## attribute velocityCmd
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // running:
    //## statechart_method
    inline bool running_IN() const;

protected :

//#[ ignore
    enum ToUnity_Enum {
        OMNonState = 0,
        running = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedToUnity : virtual public AOMInstance {
    DECLARE_REACTIVE_META(ToUnity, OMAnimatedToUnity)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void running_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool ToUnity::rootState_IN() const {
    return true;
}

inline bool ToUnity::running_IN() const {
    return rootState_subState == running;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\ToUnity_Simulation\ToUnity.h
*********************************************************************/
