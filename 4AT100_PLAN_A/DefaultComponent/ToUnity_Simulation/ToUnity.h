/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: ToUnity_Simulation
	Model Element	: ToUnity
//!	Generated Date	: Tue, 2, Jun 2020  
	File Path	: DefaultComponent\ToUnity_Simulation\ToUnity.h
*********************************************************************/

#ifndef ToUnity_H
#define ToUnity_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
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
//## auto_generated
#include "winsock2.h"
//## auto_generated
#include "stdio.h"
//## auto_generated
#include "windows.h"
//## auto_generated
#include "iostream"
//## auto_generated
#include "Ws2tcpip.h"
//## auto_generated
#include "string.h"
//## auto_generated
#include "UnityPkg.h"
//## link itsCollisionDetectionSystem
class CollisionDetectionSystem;

//## link itsLocSystem
class LocSystem;

//## link itsTruck
class Truck;

//## link itsUC_DockTruck
class UC_DockTruck;

//#[ ignore
#define OMAnim_UnityPkg_ToUnity_setObstaclePosX_RhpReal_ARGS_DECLARATION RhpReal p_obstaclePosX;

#define OMAnim_UnityPkg_ToUnity_setObstaclePosY_RhpReal_ARGS_DECLARATION RhpReal p_obstaclePosY;

#define OMAnim_UnityPkg_ToUnity_setSteeringCmd_RhpReal_ARGS_DECLARATION RhpReal p_steeringCmd;

#define OMAnim_UnityPkg_ToUnity_setTrailer1PosX_RhpReal_ARGS_DECLARATION RhpReal p_trailer1PosX;

#define OMAnim_UnityPkg_ToUnity_setTrailer1PosY_RhpReal_ARGS_DECLARATION RhpReal p_trailer1PosY;

#define OMAnim_UnityPkg_ToUnity_setTrailer2PosX_RhpReal_ARGS_DECLARATION RhpReal p_trailer2PosX;

#define OMAnim_UnityPkg_ToUnity_setTrailer2PosY_RhpReal_ARGS_DECLARATION RhpReal p_trailer2PosY;

#define OMAnim_UnityPkg_ToUnity_setTruckPosX_RhpReal_ARGS_DECLARATION RhpReal p_truckPosX;

#define OMAnim_UnityPkg_ToUnity_setTruckPosY_RhpReal_ARGS_DECLARATION RhpReal p_truckPosY;

#define OMAnim_UnityPkg_ToUnity_setVelocityCmd_RhpReal_ARGS_DECLARATION RhpReal p_velocityCmd;
//#]

//## package UnityPkg

//## class ToUnity
class ToUnity : public OMReactive {
public :

    //#[ type BUFLEN
    #define BUFLEN 512
    //#]
    
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

    //## operation calc_signals()
    virtual void calc_signals();
    
    //## operation init()
    virtual void init();
    
    //## operation parse_collision_csv(char*)
    virtual void parse_collision_csv(char* str);
    
    //## operation parse_drive_csv(char*)
    virtual void parse_drive_csv(char* str);
    
    //## auto_generated
    RhpReal getKi() const;
    
    //## auto_generated
    void setKi(RhpReal p_Ki);
    
    //## auto_generated
    RhpReal getKp() const;
    
    //## auto_generated
    void setKp(RhpReal p_Kp);
    
    //## auto_generated
    char* getAddress_collision() const;
    
    //## auto_generated
    void setAddress_collision(char* p_address_collision);
    
    //## auto_generated
    char* getAddress_drive() const;
    
    //## auto_generated
    void setAddress_drive(char* p_address_drive);
    
    //## auto_generated
    char getBuf_collision(int i1) const;
    
    //## auto_generated
    void setBuf_collision(int i1, char p_buf_collision);
    
    //## auto_generated
    char getBuf_drive(int i1) const;
    
    //## auto_generated
    void setBuf_drive(int i1, char p_buf_drive);
    
    //## auto_generated
    int getDt() const;
    
    //## auto_generated
    void setDt(int p_dt);
    
    //## auto_generated
    RhpReal getIntegratedVelocityError() const;
    
    //## auto_generated
    void setIntegratedVelocityError(RhpReal p_integratedVelocityError);
    
    //## auto_generated
    RhpReal getIntegratedVelocityErrorMax() const;
    
    //## auto_generated
    void setIntegratedVelocityErrorMax(RhpReal p_integratedVelocityErrorMax);
    
    //## auto_generated
    RhpReal getMaxSteeringAngle() const;
    
    //## auto_generated
    void setMaxSteeringAngle(RhpReal p_maxSteeringAngle);
    
    //## auto_generated
    char getMessage_collision(int i1) const;
    
    //## auto_generated
    void setMessage_collision(int i1, char p_message_collision);
    
    //## auto_generated
    char getMessage_drive(int i1) const;
    
    //## auto_generated
    void setMessage_drive(int i1, char p_message_drive);
    
    //## auto_generated
    bool getObstacleCollision() const;
    
    //## auto_generated
    void setObstacleCollision(bool p_obstacleCollision);
    
    //## auto_generated
    RhpReal getObstacleRot() const;
    
    //## auto_generated
    void setObstacleRot(RhpReal p_obstacleRot);
    
    //## auto_generated
    int getPort_collision() const;
    
    //## auto_generated
    void setPort_collision(int p_port_collision);
    
    //## auto_generated
    int getPort_drive() const;
    
    //## auto_generated
    void setPort_drive(int p_port_drive);
    
    //## auto_generated
    SOCKADDR_IN getSi_other_collision() const;
    
    //## auto_generated
    void setSi_other_collision(SOCKADDR_IN p_si_other_collision);
    
    //## auto_generated
    SOCKADDR_IN getSi_other_drive() const;
    
    //## auto_generated
    void setSi_other_drive(SOCKADDR_IN p_si_other_drive);
    
    //## auto_generated
    int getSockfd_collision() const;
    
    //## auto_generated
    void setSockfd_collision(int p_sockfd_collision);
    
    //## auto_generated
    int getSockfd_drive() const;
    
    //## auto_generated
    void setSockfd_drive(int p_sockfd_drive);
    
    //## auto_generated
    RhpReal getSteeringSignal() const;
    
    //## auto_generated
    void setSteeringSignal(RhpReal p_steeringSignal);
    
    //## auto_generated
    int getTrailerCollisionCode() const;
    
    //## auto_generated
    void setTrailerCollisionCode(int p_trailerCollisionCode);
    
    //## auto_generated
    bool getTrailerCollisionObstacle() const;
    
    //## auto_generated
    void setTrailerCollisionObstacle(bool p_trailerCollisionObstacle);
    
    //## auto_generated
    int getTrailerCollisionWalls() const;
    
    //## auto_generated
    void setTrailerCollisionWalls(int p_trailerCollisionWalls);
    
    //## auto_generated
    int getTruckCollisionCode() const;
    
    //## auto_generated
    void setTruckCollisionCode(int p_truckCollisionCode);
    
    //## auto_generated
    bool getTruckCollisionObstacle() const;
    
    //## auto_generated
    void setTruckCollisionObstacle(bool p_truckCollisionObstacle);
    
    //## auto_generated
    int getTruckCollisionWalls() const;
    
    //## auto_generated
    void setTruckCollisionWalls(int p_truckCollisionWalls);
    
    //## auto_generated
    WSADATA getWs() const;
    
    //## auto_generated
    void setWs(WSADATA p_ws);
    
    //## auto_generated
    CollisionDetectionSystem* getItsCollisionDetectionSystem() const;
    
    //## auto_generated
    void setItsCollisionDetectionSystem(CollisionDetectionSystem* p_CollisionDetectionSystem);
    
    //## auto_generated
    LocSystem* getItsLocSystem() const;
    
    //## auto_generated
    void setItsLocSystem(LocSystem* p_LocSystem);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    UC_DockTruck* getItsUC_DockTruck() const;
    
    //## auto_generated
    void setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
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
    
    CollisionDetectionSystem* itsCollisionDetectionSystem;		//## link itsCollisionDetectionSystem
    
    LocSystem* itsLocSystem;		//## link itsLocSystem
    
    Truck* itsTruck;		//## link itsTruck
    
    UC_DockTruck* itsUC_DockTruck;		//## link itsUC_DockTruck

public :

    //## auto_generated
    void __setItsCollisionDetectionSystem(CollisionDetectionSystem* p_CollisionDetectionSystem);
    
    //## auto_generated
    void _setItsCollisionDetectionSystem(CollisionDetectionSystem* p_CollisionDetectionSystem);
    
    //## auto_generated
    void _clearItsCollisionDetectionSystem();
    
    //## auto_generated
    void __setItsLocSystem(LocSystem* p_LocSystem);
    
    //## auto_generated
    void _setItsLocSystem(LocSystem* p_LocSystem);
    
    //## auto_generated
    void _clearItsLocSystem();
    
    //## auto_generated
    void __setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck();
    
    //## auto_generated
    void __setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck);
    
    //## auto_generated
    void _setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck);
    
    //## auto_generated
    void _clearItsUC_DockTruck();
    
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
    
    // initializing:
    //## statechart_method
    inline bool initializing_IN() const;

protected :

//#[ ignore
    enum ToUnity_Enum {
        OMNonState = 0,
        running = 1,
        initializing = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(UnityPkg_ToUnity_setObstaclePosX_RhpReal)

DECLARE_OPERATION_CLASS(UnityPkg_ToUnity_setObstaclePosY_RhpReal)

DECLARE_OPERATION_CLASS(UnityPkg_ToUnity_setSteeringCmd_RhpReal)

DECLARE_OPERATION_CLASS(UnityPkg_ToUnity_setTrailer1PosX_RhpReal)

DECLARE_OPERATION_CLASS(UnityPkg_ToUnity_setTrailer1PosY_RhpReal)

DECLARE_OPERATION_CLASS(UnityPkg_ToUnity_setTrailer2PosX_RhpReal)

DECLARE_OPERATION_CLASS(UnityPkg_ToUnity_setTrailer2PosY_RhpReal)

DECLARE_OPERATION_CLASS(UnityPkg_ToUnity_setTruckPosX_RhpReal)

DECLARE_OPERATION_CLASS(UnityPkg_ToUnity_setTruckPosY_RhpReal)

DECLARE_OPERATION_CLASS(UnityPkg_ToUnity_setVelocityCmd_RhpReal)

//#[ ignore
class OMAnimatedToUnity : virtual public AOMInstance {
    DECLARE_REACTIVE_META(ToUnity, OMAnimatedToUnity)
    
    DECLARE_META_OP(UnityPkg_ToUnity_setObstaclePosX_RhpReal)
    
    DECLARE_META_OP(UnityPkg_ToUnity_setObstaclePosY_RhpReal)
    
    DECLARE_META_OP(UnityPkg_ToUnity_setSteeringCmd_RhpReal)
    
    DECLARE_META_OP(UnityPkg_ToUnity_setTrailer1PosX_RhpReal)
    
    DECLARE_META_OP(UnityPkg_ToUnity_setTrailer1PosY_RhpReal)
    
    DECLARE_META_OP(UnityPkg_ToUnity_setTrailer2PosX_RhpReal)
    
    DECLARE_META_OP(UnityPkg_ToUnity_setTrailer2PosY_RhpReal)
    
    DECLARE_META_OP(UnityPkg_ToUnity_setTruckPosX_RhpReal)
    
    DECLARE_META_OP(UnityPkg_ToUnity_setTruckPosY_RhpReal)
    
    DECLARE_META_OP(UnityPkg_ToUnity_setVelocityCmd_RhpReal)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void running_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void initializing_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool ToUnity::rootState_IN() const {
    return true;
}

inline bool ToUnity::running_IN() const {
    return rootState_subState == running;
}

inline bool ToUnity::initializing_IN() const {
    return rootState_subState == initializing;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\ToUnity_Simulation\ToUnity.h
*********************************************************************/
