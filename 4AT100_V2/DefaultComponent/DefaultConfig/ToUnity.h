/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ToUnity
//!	Generated Date	: Thu, 28, May 2020  
	File Path	: DefaultComponent\DefaultConfig\ToUnity.h
*********************************************************************/

#ifndef ToUnity_H
#define ToUnity_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include "UnityPkg.h"
//## package UnityPkg

//## class ToUnity
class ToUnity : public OMReactive {
public :

    //#[ type BUFLEN
    #define BUFLEN 512
    //#]
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit ToUnity(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~ToUnity(void);
    
    ////    Operations    ////
    
    //## operation send_receive()
    virtual void send_receive(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const RhpReal getAccelerationSignal(void) const;
    
    //## auto_generated
    const RhpReal getObstaclePosX(void) const;
    
    //## auto_generated
    const RhpReal getObstaclePosY(void) const;
    
    //## auto_generated
    const RhpReal getSteeringCmd(void) const;
    
    //## auto_generated
    const RhpReal getTrailer1PosX(void) const;
    
    //## auto_generated
    const RhpReal getTrailer1PosY(void) const;
    
    //## auto_generated
    const RhpReal getTrailer2PosX(void) const;
    
    //## auto_generated
    const RhpReal getTrailer2PosY(void) const;
    
    //## auto_generated
    const RhpReal getTruckPosX(void) const;
    
    //## auto_generated
    const RhpReal getTruckPosY(void) const;
    
    //## auto_generated
    const RhpReal getVelocity(void) const;
    
    //## auto_generated
    const RhpReal getVelocityCmd(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

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

    //## operation calc_signals()
    virtual void calc_signals(void);
    
    //## operation init()
    virtual void init(void);
    
    //## operation parse_collision_csv(char*)
    virtual void parse_collision_csv(char* str);
    
    //## operation parse_drive_csv(char*)
    virtual void parse_drive_csv(char* str);
    
    //## auto_generated
    const RhpReal getKi(void) const;
    
    //## auto_generated
    void setKi(const RhpReal p_Ki);
    
    //## auto_generated
    const RhpReal getKp(void) const;
    
    //## auto_generated
    void setKp(const RhpReal p_Kp);
    
    //## auto_generated
    void setAccelerationSignal(const RhpReal p_accelerationSignal);
    
    //## auto_generated
    const char* getAddress_collision(void) const;
    
    //## auto_generated
    void setAddress_collision(char* const p_address_collision);
    
    //## auto_generated
    const char* getAddress_drive(void) const;
    
    //## auto_generated
    void setAddress_drive(char* const p_address_drive);
    
    //## auto_generated
    const char getBuf_collision(const Rhp_int32_t iterI1) const;
    
    //## auto_generated
    void setBuf_collision(const Rhp_int32_t iterI1, const char p_buf_collision);
    
    //## auto_generated
    const char getBuf_drive(const Rhp_int32_t iterI1) const;
    
    //## auto_generated
    void setBuf_drive(const Rhp_int32_t iterI1, const char p_buf_drive);
    
    //## auto_generated
    const int getDt(void) const;
    
    //## auto_generated
    void setDt(const int p_dt);
    
    //## auto_generated
    const RhpReal getIntegratedVelocityError(void) const;
    
    //## auto_generated
    void setIntegratedVelocityError(const RhpReal p_integratedVelocityError);
    
    //## auto_generated
    const RhpReal getIntegratedVelocityErrorMax(void) const;
    
    //## auto_generated
    void setIntegratedVelocityErrorMax(const RhpReal p_integratedVelocityErrorMax);
    
    //## auto_generated
    const RhpReal getMaxSteeringAngle(void) const;
    
    //## auto_generated
    void setMaxSteeringAngle(const RhpReal p_maxSteeringAngle);
    
    //## auto_generated
    const char getMessage_collision(const Rhp_int32_t iterI1) const;
    
    //## auto_generated
    void setMessage_collision(const Rhp_int32_t iterI1, const char p_message_collision);
    
    //## auto_generated
    const char getMessage_drive(const Rhp_int32_t iterI1) const;
    
    //## auto_generated
    void setMessage_drive(const Rhp_int32_t iterI1, const char p_message_drive);
    
    //## auto_generated
    const bool getObstacleCollision(void) const;
    
    //## auto_generated
    void setObstacleCollision(const bool p_obstacleCollision);
    
    //## auto_generated
    void setObstaclePosX(const RhpReal p_obstaclePosX);
    
    //## auto_generated
    void setObstaclePosY(const RhpReal p_obstaclePosY);
    
    //## auto_generated
    const RhpReal getObstacleRot(void) const;
    
    //## auto_generated
    void setObstacleRot(const RhpReal p_obstacleRot);
    
    //## auto_generated
    const int getPort_collision(void) const;
    
    //## auto_generated
    void setPort_collision(const int p_port_collision);
    
    //## auto_generated
    const int getPort_drive(void) const;
    
    //## auto_generated
    void setPort_drive(const int p_port_drive);
    
    //## auto_generated
    const SOCKADDR_IN getSi_other_collision(void) const;
    
    //## auto_generated
    void setSi_other_collision(const SOCKADDR_IN p_si_other_collision);
    
    //## auto_generated
    const SOCKADDR_IN getSi_other_drive(void) const;
    
    //## auto_generated
    void setSi_other_drive(const SOCKADDR_IN p_si_other_drive);
    
    //## auto_generated
    const int getSockfd_collision(void) const;
    
    //## auto_generated
    void setSockfd_collision(const int p_sockfd_collision);
    
    //## auto_generated
    const int getSockfd_drive(void) const;
    
    //## auto_generated
    void setSockfd_drive(const int p_sockfd_drive);
    
    //## auto_generated
    void setSteeringCmd(const RhpReal p_steeringCmd);
    
    //## auto_generated
    const RhpReal getSteeringSignal(void) const;
    
    //## auto_generated
    void setSteeringSignal(const RhpReal p_steeringSignal);
    
    //## auto_generated
    void setTrailer1PosX(const RhpReal p_trailer1PosX);
    
    //## auto_generated
    void setTrailer1PosY(const RhpReal p_trailer1PosY);
    
    //## auto_generated
    void setTrailer2PosX(const RhpReal p_trailer2PosX);
    
    //## auto_generated
    void setTrailer2PosY(const RhpReal p_trailer2PosY);
    
    //## auto_generated
    const int getTrailerCollisionCode(void) const;
    
    //## auto_generated
    void setTrailerCollisionCode(const int p_trailerCollisionCode);
    
    //## auto_generated
    const bool getTrailerCollisionObstacle(void) const;
    
    //## auto_generated
    void setTrailerCollisionObstacle(const bool p_trailerCollisionObstacle);
    
    //## auto_generated
    const int getTrailerCollisionWalls(void) const;
    
    //## auto_generated
    void setTrailerCollisionWalls(const int p_trailerCollisionWalls);
    
    //## auto_generated
    const int getTruckCollisionCode(void) const;
    
    //## auto_generated
    void setTruckCollisionCode(const int p_truckCollisionCode);
    
    //## auto_generated
    const bool getTruckCollisionObstacle(void) const;
    
    //## auto_generated
    void setTruckCollisionObstacle(const bool p_truckCollisionObstacle);
    
    //## auto_generated
    const int getTruckCollisionWalls(void) const;
    
    //## auto_generated
    void setTruckCollisionWalls(const int p_truckCollisionWalls);
    
    //## auto_generated
    void setTruckPosX(const RhpReal p_truckPosX);
    
    //## auto_generated
    void setTruckPosY(const RhpReal p_truckPosY);
    
    //## auto_generated
    void setVelocity(const RhpReal p_velocity);
    
    //## auto_generated
    void setVelocityCmd(const RhpReal p_velocityCmd);
    
    //## auto_generated
    const WSADATA getWs(void) const;
    
    //## auto_generated
    void setWs(const WSADATA p_ws);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);

protected :

    //## auto_generated
    void cancelTimeouts(void);

private :

    RhpReal Ki;		//## attribute Ki
    
    RhpReal Kp;		//## attribute Kp
    
    char* address_collision;		//## attribute address_collision
    
    char* address_drive;		//## attribute address_drive
    
    char buf_collision[BUFLEN];		//## attribute buf_collision
    
    char buf_drive[BUFLEN];		//## attribute buf_drive
    
    int dt;		//## attribute dt
    
    RhpReal integratedVelocityError;		//## attribute integratedVelocityError
    
    RhpReal integratedVelocityErrorMax;		//## attribute integratedVelocityErrorMax
    
    RhpReal maxSteeringAngle;		//## attribute maxSteeringAngle
    
    char message_collision[BUFLEN];		//## attribute message_collision
    
    char message_drive[BUFLEN];		//## attribute message_drive
    
    bool obstacleCollision;		//## attribute obstacleCollision
    
    RhpReal obstacleRot;		//## attribute obstacleRot
    
    int port_collision;		//## attribute port_collision
    
    int port_drive;		//## attribute port_drive
    
    SOCKADDR_IN si_other_collision;		//## attribute si_other_collision
    
    SOCKADDR_IN si_other_drive;		//## attribute si_other_drive
    
    int sockfd_collision;		//## attribute sockfd_collision
    
    int sockfd_drive;		//## attribute sockfd_drive
    
    RhpReal steeringSignal;		//## attribute steeringSignal
    
    int trailerCollisionCode;		//## attribute trailerCollisionCode
    
    bool trailerCollisionObstacle;		//## attribute trailerCollisionObstacle
    
    int trailerCollisionWalls;		//## attribute trailerCollisionWalls
    
    int truckCollisionCode;		//## attribute truckCollisionCode
    
    bool truckCollisionObstacle;		//## attribute truckCollisionObstacle
    
    int truckCollisionWalls;		//## attribute truckCollisionWalls
    
    WSADATA ws;		//## attribute ws

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // running:
    //## statechart_method
    inline RhpBoolean running_IN(void) const;
    
    // initializing:
    //## statechart_method
    inline RhpBoolean initializing_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum ToUnity_Enum {
        OMNonState = 0,
        running = 1,
        initializing = 2
    };
//#]

private :

//#[ ignore
    ToUnity_Enum rootState_subState;
    
    ToUnity_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

inline RhpBoolean ToUnity::rootState_IN(void) const {
    return true;
}

inline RhpBoolean ToUnity::running_IN(void) const {
    return rootState_subState == running;
}

inline RhpBoolean ToUnity::initializing_IN(void) const {
    return rootState_subState == initializing;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ToUnity.h
*********************************************************************/
