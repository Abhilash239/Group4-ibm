/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: ToUnity_Simulation
	Model Element	: ToUnity
//!	Generated Date	: Tue, 2, Jun 2020  
	File Path	: DefaultComponent\ToUnity_Simulation\ToUnity.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "ToUnity.h"
//## link itsCollisionDetectionSystem
#include "CollisionDetectionSystem.h"
//## link itsLocSystem
#include "LocSystem.h"
//## link itsTruck
#include "Truck.h"
//## link itsUC_DockTruck
#include "UC_DockTruck.h"
//#[ ignore
#define UnityPkg_ToUnity_ToUnity_SERIALIZE OM_NO_OP

#define UnityPkg_ToUnity_calc_signals_SERIALIZE OM_NO_OP

#define UnityPkg_ToUnity_init_SERIALIZE OM_NO_OP

#define UnityPkg_ToUnity_parse_collision_csv_SERIALIZE aomsmethod->addAttribute("str", x2String(str));

#define UnityPkg_ToUnity_parse_drive_csv_SERIALIZE aomsmethod->addAttribute("str", x2String(str));

#define UnityPkg_ToUnity_send_receive_SERIALIZE OM_NO_OP

#define OMAnim_UnityPkg_ToUnity_setObstaclePosX_RhpReal_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_obstaclePosX)

#define OMAnim_UnityPkg_ToUnity_setObstaclePosX_RhpReal_SERIALIZE_RET_VAL

#define OMAnim_UnityPkg_ToUnity_setObstaclePosY_RhpReal_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_obstaclePosY)

#define OMAnim_UnityPkg_ToUnity_setObstaclePosY_RhpReal_SERIALIZE_RET_VAL

#define OMAnim_UnityPkg_ToUnity_setSteeringCmd_RhpReal_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_steeringCmd)

#define OMAnim_UnityPkg_ToUnity_setSteeringCmd_RhpReal_SERIALIZE_RET_VAL

#define OMAnim_UnityPkg_ToUnity_setTrailer1PosX_RhpReal_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_trailer1PosX)

#define OMAnim_UnityPkg_ToUnity_setTrailer1PosX_RhpReal_SERIALIZE_RET_VAL

#define OMAnim_UnityPkg_ToUnity_setTrailer1PosY_RhpReal_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_trailer1PosY)

#define OMAnim_UnityPkg_ToUnity_setTrailer1PosY_RhpReal_SERIALIZE_RET_VAL

#define OMAnim_UnityPkg_ToUnity_setTrailer2PosX_RhpReal_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_trailer2PosX)

#define OMAnim_UnityPkg_ToUnity_setTrailer2PosX_RhpReal_SERIALIZE_RET_VAL

#define OMAnim_UnityPkg_ToUnity_setTrailer2PosY_RhpReal_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_trailer2PosY)

#define OMAnim_UnityPkg_ToUnity_setTrailer2PosY_RhpReal_SERIALIZE_RET_VAL

#define OMAnim_UnityPkg_ToUnity_setTruckPosX_RhpReal_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_truckPosX)

#define OMAnim_UnityPkg_ToUnity_setTruckPosX_RhpReal_SERIALIZE_RET_VAL

#define OMAnim_UnityPkg_ToUnity_setTruckPosY_RhpReal_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_truckPosY)

#define OMAnim_UnityPkg_ToUnity_setTruckPosY_RhpReal_SERIALIZE_RET_VAL

#define OMAnim_UnityPkg_ToUnity_setVelocityCmd_RhpReal_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_velocityCmd)

#define OMAnim_UnityPkg_ToUnity_setVelocityCmd_RhpReal_SERIALIZE_RET_VAL
//#]

//## package UnityPkg

//## class ToUnity
ToUnity::ToUnity(IOxfActive* theActiveContext) : steeringCmd(0), velocity(0), velocityCmd(0), Ki(0.1), Kp(0.5), address_collision("127.0.0.1"), address_drive("127.0.0.1"), dt(50), integratedVelocityError(0), integratedVelocityErrorMax(0.5), maxSteeringAngle(45.0f), port_collision(54321), port_drive(54320), trailerCollisionCode(0), truckCollisionCode(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ToUnity, ToUnity(), 0, UnityPkg_ToUnity_ToUnity_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsCollisionDetectionSystem = NULL;
    itsLocSystem = NULL;
    itsTruck = NULL;
    itsUC_DockTruck = NULL;
    initStatechart();
}

ToUnity::~ToUnity() {
    NOTIFY_DESTRUCTOR(~ToUnity, true);
    cleanUpRelations();
    cancelTimeouts();
}

void ToUnity::send_receive() {
    NOTIFY_OPERATION(send_receive, send_receive(), 0, UnityPkg_ToUnity_send_receive_SERIALIZE);
    //#[ operation send_receive()
    int slen = sizeof(si_other_drive);
    
    
    //================ Send/Receive Drive Information ==============
    sprintf(message_drive, "%f,%f\n", this->steeringSignal, this->accelerationSignal);
    
    if (sendto(	sockfd_drive, 
    			message_drive, 
    			strlen(message_drive), 0, 
    			(struct sockaddr*) 
    			&si_other_drive, 
    			slen) == SOCKET_ERROR) {
    			
    	printf("Error sending drive message!\n");
    }
    
    memset(buf_drive, '\0', BUFLEN);
    if (recvfrom(	sockfd_drive, 
    				buf_drive, 
    				BUFLEN, 0, 
    				(struct sockaddr*) &si_other_drive, 
    				&slen) == SOCKET_ERROR) {
    				
    	printf("Error receiving drive message!\n");
    }
    else {
    	parse_drive_csv(buf_drive);
    }
    
    
    //================ Send/Receive Collision Information ==============
    sprintf(message_collision, "col_info\n"); 
    
    //send the message
    if (sendto(	sockfd_collision, 
    			message_collision, 
    			strlen(message_collision), 0, 
    			(struct sockaddr*) &si_other_collision, 
    			slen) == SOCKET_ERROR) {
    			
    	printf("Error sending collision message!\n");
    }
    
    memset(buf_collision, '\0', BUFLEN);
    if (recvfrom(	sockfd_collision, 
    				buf_collision, 
    				BUFLEN, 0, 
    				(struct sockaddr*) &si_other_collision,
    				&slen) == SOCKET_ERROR) {
    	
    	printf("Error receiving collision message!\n");
    }
    else {
    	//printf("col %s\n", buf_collision);
    	parse_collision_csv(buf_collision);
    }
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
    NOTIFY_SET_OPERATION;
}

RhpReal ToUnity::getObstaclePosY() const {
    return obstaclePosY;
}

void ToUnity::setObstaclePosY(RhpReal p_obstaclePosY) {
    obstaclePosY = p_obstaclePosY;
    NOTIFY_SET_OPERATION;
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
    NOTIFY_SET_OPERATION;
}

RhpReal ToUnity::getTrailer1PosY() const {
    return trailer1PosY;
}

void ToUnity::setTrailer1PosY(RhpReal p_trailer1PosY) {
    trailer1PosY = p_trailer1PosY;
    NOTIFY_SET_OPERATION;
}

RhpReal ToUnity::getTrailer2PosX() const {
    return trailer2PosX;
}

void ToUnity::setTrailer2PosX(RhpReal p_trailer2PosX) {
    trailer2PosX = p_trailer2PosX;
    NOTIFY_SET_OPERATION;
}

RhpReal ToUnity::getTrailer2PosY() const {
    return trailer2PosY;
}

void ToUnity::setTrailer2PosY(RhpReal p_trailer2PosY) {
    trailer2PosY = p_trailer2PosY;
    NOTIFY_SET_OPERATION;
}

RhpReal ToUnity::getTruckPosX() const {
    return truckPosX;
}

void ToUnity::setTruckPosX(RhpReal p_truckPosX) {
    truckPosX = p_truckPosX;
    NOTIFY_SET_OPERATION;
}

RhpReal ToUnity::getTruckPosY() const {
    return truckPosY;
}

void ToUnity::setTruckPosY(RhpReal p_truckPosY) {
    truckPosY = p_truckPosY;
    NOTIFY_SET_OPERATION;
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
    rootState_timeout = NULL;
}

void ToUnity::calc_signals() {
    NOTIFY_OPERATION(calc_signals, calc_signals(), 0, UnityPkg_ToUnity_calc_signals_SERIALIZE);
    //#[ operation calc_signals()
    
    RhpReal velocityError =  this->velocityCmd - this->velocity;
    
    this->integratedVelocityError += velocityError * (float) this->dt * 0.001;
    
    if (this->integratedVelocityError > this->integratedVelocityErrorMax) {
    	 this->integratedVelocityError = this->integratedVelocityErrorMax;
    }
    else if (this->integratedVelocityError < - this->integratedVelocityErrorMax) {
    	 this->integratedVelocityError = - this->integratedVelocityErrorMax;
    }
    
    
    this->accelerationSignal = 	this->Kp * velocityError +
    							this->Ki * integratedVelocityError;
    
    
    this->steeringSignal = this->steeringCmd / this->maxSteeringAngle;
    //#]
}

void ToUnity::init() {
    NOTIFY_OPERATION(init, init(), 0, UnityPkg_ToUnity_init_SERIALIZE);
    //#[ operation init()
    #ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN 
    #define _WINSOCK_DEPRECATED_NO_WARNINGS
    #endif      
    
    #include <stdlib.h> 
    
    int slen = sizeof(si_other_drive);
    int iVal = 5;
    int ret = 0;
    
    WSAStartup(0x0101,&ws);
    
    ret = setsockopt(this->sockfd_drive, SOL_SOCKET, SO_RCVTIMEO, (char *)&iVal, sizeof(iVal));
    ret = setsockopt(this->sockfd_collision, SOL_SOCKET, SO_RCVTIMEO, (char *)&iVal, sizeof(iVal));
    
    sockfd_drive = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    sockfd_collision = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
        
    //setup address structure
    memset((char *)&si_other_drive, 0, sizeof(si_other_drive));
    si_other_drive.sin_family = AF_INET;
    si_other_drive.sin_port = htons(port_drive);
    si_other_drive.sin_addr.s_addr = inet_addr(address_drive);
    
    memset((char *)&si_other_collision, 0, sizeof(si_other_collision));
    si_other_collision.sin_family = AF_INET;
    si_other_collision.sin_port = htons(port_collision);
    si_other_collision.sin_addr.s_addr = inet_addr(address_collision);
    
    recvfrom(sockfd_drive, buf_drive, BUFLEN, 0, (struct sockaddr *) &si_other_drive, &slen);
    recvfrom(sockfd_collision, buf_collision, BUFLEN, 0, (struct sockaddr *) &si_other_collision, &slen);
    
    memset(buf_drive, '\0', BUFLEN);
    memset(buf_collision, '\0', BUFLEN);
    //#]
}

void ToUnity::parse_collision_csv(char* str) {
    NOTIFY_OPERATION(parse_collision_csv, parse_collision_csv(char*), 1, UnityPkg_ToUnity_parse_collision_csv_SERIALIZE);
    //#[ operation parse_collision_csv(char*)
    int i;
    char * ts = str;
    for (i = 0; ts[i]; ts[i]==',' ? i++ : *ts++);
        
    if (i == 4) {
    	char* p = strtok(str, ",");
    	this->truckCollisionCode = atoi(p);
    
     	p = strtok(NULL, ",");
     	this->trailerCollisionCode = atoi(p);
    
    	p = strtok(NULL, ",");
    	this->obstaclePosX = strtof(p, NULL);
    
    	p = strtok(NULL, ",");
    	this->obstaclePosY = strtof(p, NULL);
    
    	p = strtok(NULL, ",");
    	this->obstacleRot = strtof(p, NULL);
    }
    
    this->truckCollisionWalls = (this->truckCollisionCode & 1) >> 0 |
    							(this->truckCollisionCode & 2) >> 1 |
    							(this->truckCollisionCode & 4) >> 2;
    this->truckCollisionObstacle = (this->truckCollisionCode & 8) >> 3;
    
    
    this->trailerCollisionWalls = 	(this->trailerCollisionCode & 1) >> 0 |
    								(this->trailerCollisionCode & 2) >> 1 |
    								(this->trailerCollisionCode & 4) >> 2;
    this->trailerCollisionObstacle = (this->trailerCollisionCode & 8) >> 3;
    
    this->obstacleCollision = this->trailerCollisionObstacle | this->truckCollisionObstacle;  
    //#]
}

void ToUnity::parse_drive_csv(char* str) {
    NOTIFY_OPERATION(parse_drive_csv, parse_drive_csv(char*), 1, UnityPkg_ToUnity_parse_drive_csv_SERIALIZE);
    //#[ operation parse_drive_csv(char*)
    char* p = strtok(str, ",");
    this->velocity = strtof(p, NULL);
    
    p = strtok(NULL, ",");
    this->truckPosX = strtof(p, NULL);
    p = strtok(NULL, ",");
    //remote_vehicle.truck.z = strtof(p, NULL);
    p = strtok(NULL, ",");
    this->truckPosY = strtof(p, NULL);
    
    p = strtok(NULL, ",");
    this->trailer1PosX = strtof(p, NULL);
    p = strtok(NULL, ",");
    //remote_vehicle.trailer1.z = strtof(p, NULL);
    p = strtok(NULL, ",");
    this->trailer1PosY = strtof(p, NULL);
    
    p = strtok(NULL, ",");
    this->trailer2PosX = strtof(p, NULL);
    p = strtok(NULL, ",");
    //remote_vehicle.trailer2.z = strtof(p, NULL);
    p = strtok(NULL, ",");
    this->trailer2PosY = strtof(p, NULL);
    //#]
}

RhpReal ToUnity::getKi() const {
    return Ki;
}

void ToUnity::setKi(RhpReal p_Ki) {
    Ki = p_Ki;
}

RhpReal ToUnity::getKp() const {
    return Kp;
}

void ToUnity::setKp(RhpReal p_Kp) {
    Kp = p_Kp;
}

char* ToUnity::getAddress_collision() const {
    return address_collision;
}

void ToUnity::setAddress_collision(char* p_address_collision) {
    address_collision = p_address_collision;
}

char* ToUnity::getAddress_drive() const {
    return address_drive;
}

void ToUnity::setAddress_drive(char* p_address_drive) {
    address_drive = p_address_drive;
}

char ToUnity::getBuf_collision(int i1) const {
    return buf_collision[i1];
}

void ToUnity::setBuf_collision(int i1, char p_buf_collision) {
    buf_collision[i1] = p_buf_collision;
}

char ToUnity::getBuf_drive(int i1) const {
    return buf_drive[i1];
}

void ToUnity::setBuf_drive(int i1, char p_buf_drive) {
    buf_drive[i1] = p_buf_drive;
}

int ToUnity::getDt() const {
    return dt;
}

void ToUnity::setDt(int p_dt) {
    dt = p_dt;
}

RhpReal ToUnity::getIntegratedVelocityError() const {
    return integratedVelocityError;
}

void ToUnity::setIntegratedVelocityError(RhpReal p_integratedVelocityError) {
    integratedVelocityError = p_integratedVelocityError;
}

RhpReal ToUnity::getIntegratedVelocityErrorMax() const {
    return integratedVelocityErrorMax;
}

void ToUnity::setIntegratedVelocityErrorMax(RhpReal p_integratedVelocityErrorMax) {
    integratedVelocityErrorMax = p_integratedVelocityErrorMax;
}

RhpReal ToUnity::getMaxSteeringAngle() const {
    return maxSteeringAngle;
}

void ToUnity::setMaxSteeringAngle(RhpReal p_maxSteeringAngle) {
    maxSteeringAngle = p_maxSteeringAngle;
}

char ToUnity::getMessage_collision(int i1) const {
    return message_collision[i1];
}

void ToUnity::setMessage_collision(int i1, char p_message_collision) {
    message_collision[i1] = p_message_collision;
}

char ToUnity::getMessage_drive(int i1) const {
    return message_drive[i1];
}

void ToUnity::setMessage_drive(int i1, char p_message_drive) {
    message_drive[i1] = p_message_drive;
}

bool ToUnity::getObstacleCollision() const {
    return obstacleCollision;
}

void ToUnity::setObstacleCollision(bool p_obstacleCollision) {
    obstacleCollision = p_obstacleCollision;
    NOTIFY_SET_OPERATION;
}

RhpReal ToUnity::getObstacleRot() const {
    return obstacleRot;
}

void ToUnity::setObstacleRot(RhpReal p_obstacleRot) {
    obstacleRot = p_obstacleRot;
}

int ToUnity::getPort_collision() const {
    return port_collision;
}

void ToUnity::setPort_collision(int p_port_collision) {
    port_collision = p_port_collision;
}

int ToUnity::getPort_drive() const {
    return port_drive;
}

void ToUnity::setPort_drive(int p_port_drive) {
    port_drive = p_port_drive;
}

SOCKADDR_IN ToUnity::getSi_other_collision() const {
    return si_other_collision;
}

void ToUnity::setSi_other_collision(SOCKADDR_IN p_si_other_collision) {
    si_other_collision = p_si_other_collision;
}

SOCKADDR_IN ToUnity::getSi_other_drive() const {
    return si_other_drive;
}

void ToUnity::setSi_other_drive(SOCKADDR_IN p_si_other_drive) {
    si_other_drive = p_si_other_drive;
}

int ToUnity::getSockfd_collision() const {
    return sockfd_collision;
}

void ToUnity::setSockfd_collision(int p_sockfd_collision) {
    sockfd_collision = p_sockfd_collision;
}

int ToUnity::getSockfd_drive() const {
    return sockfd_drive;
}

void ToUnity::setSockfd_drive(int p_sockfd_drive) {
    sockfd_drive = p_sockfd_drive;
}

RhpReal ToUnity::getSteeringSignal() const {
    return steeringSignal;
}

void ToUnity::setSteeringSignal(RhpReal p_steeringSignal) {
    steeringSignal = p_steeringSignal;
}

int ToUnity::getTrailerCollisionCode() const {
    return trailerCollisionCode;
}

void ToUnity::setTrailerCollisionCode(int p_trailerCollisionCode) {
    trailerCollisionCode = p_trailerCollisionCode;
}

bool ToUnity::getTrailerCollisionObstacle() const {
    return trailerCollisionObstacle;
}

void ToUnity::setTrailerCollisionObstacle(bool p_trailerCollisionObstacle) {
    trailerCollisionObstacle = p_trailerCollisionObstacle;
    NOTIFY_SET_OPERATION;
}

int ToUnity::getTrailerCollisionWalls() const {
    return trailerCollisionWalls;
}

void ToUnity::setTrailerCollisionWalls(int p_trailerCollisionWalls) {
    trailerCollisionWalls = p_trailerCollisionWalls;
    NOTIFY_SET_OPERATION;
}

int ToUnity::getTruckCollisionCode() const {
    return truckCollisionCode;
}

void ToUnity::setTruckCollisionCode(int p_truckCollisionCode) {
    truckCollisionCode = p_truckCollisionCode;
}

bool ToUnity::getTruckCollisionObstacle() const {
    return truckCollisionObstacle;
}

void ToUnity::setTruckCollisionObstacle(bool p_truckCollisionObstacle) {
    truckCollisionObstacle = p_truckCollisionObstacle;
    NOTIFY_SET_OPERATION;
}

int ToUnity::getTruckCollisionWalls() const {
    return truckCollisionWalls;
}

void ToUnity::setTruckCollisionWalls(int p_truckCollisionWalls) {
    truckCollisionWalls = p_truckCollisionWalls;
    NOTIFY_SET_OPERATION;
}

WSADATA ToUnity::getWs() const {
    return ws;
}

void ToUnity::setWs(WSADATA p_ws) {
    ws = p_ws;
}

CollisionDetectionSystem* ToUnity::getItsCollisionDetectionSystem() const {
    return itsCollisionDetectionSystem;
}

void ToUnity::setItsCollisionDetectionSystem(CollisionDetectionSystem* p_CollisionDetectionSystem) {
    if(p_CollisionDetectionSystem != NULL)
        {
            p_CollisionDetectionSystem->_setItsToUnity(this);
        }
    _setItsCollisionDetectionSystem(p_CollisionDetectionSystem);
}

LocSystem* ToUnity::getItsLocSystem() const {
    return itsLocSystem;
}

void ToUnity::setItsLocSystem(LocSystem* p_LocSystem) {
    if(p_LocSystem != NULL)
        {
            p_LocSystem->_setItsToUnity(this);
        }
    _setItsLocSystem(p_LocSystem);
}

Truck* ToUnity::getItsTruck() const {
    return itsTruck;
}

void ToUnity::setItsTruck(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsToUnity(this);
        }
    _setItsTruck(p_Truck);
}

UC_DockTruck* ToUnity::getItsUC_DockTruck() const {
    return itsUC_DockTruck;
}

void ToUnity::setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck) {
    if(p_UC_DockTruck != NULL)
        {
            p_UC_DockTruck->_setItsToUnity(this);
        }
    _setItsUC_DockTruck(p_UC_DockTruck);
}

void ToUnity::cleanUpRelations() {
    if(itsCollisionDetectionSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollisionDetectionSystem");
            ToUnity* p_ToUnity = itsCollisionDetectionSystem->getItsToUnity();
            if(p_ToUnity != NULL)
                {
                    itsCollisionDetectionSystem->__setItsToUnity(NULL);
                }
            itsCollisionDetectionSystem = NULL;
        }
    if(itsLocSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLocSystem");
            ToUnity* p_ToUnity = itsLocSystem->getItsToUnity();
            if(p_ToUnity != NULL)
                {
                    itsLocSystem->__setItsToUnity(NULL);
                }
            itsLocSystem = NULL;
        }
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            ToUnity* p_ToUnity = itsTruck->getItsToUnity();
            if(p_ToUnity != NULL)
                {
                    itsTruck->__setItsToUnity(NULL);
                }
            itsTruck = NULL;
        }
    if(itsUC_DockTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_DockTruck");
            ToUnity* p_ToUnity = itsUC_DockTruck->getItsToUnity();
            if(p_ToUnity != NULL)
                {
                    itsUC_DockTruck->__setItsToUnity(NULL);
                }
            itsUC_DockTruck = NULL;
        }
}

void ToUnity::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool ToUnity::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void ToUnity::__setItsCollisionDetectionSystem(CollisionDetectionSystem* p_CollisionDetectionSystem) {
    itsCollisionDetectionSystem = p_CollisionDetectionSystem;
    if(p_CollisionDetectionSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollisionDetectionSystem", p_CollisionDetectionSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollisionDetectionSystem");
        }
}

void ToUnity::_setItsCollisionDetectionSystem(CollisionDetectionSystem* p_CollisionDetectionSystem) {
    if(itsCollisionDetectionSystem != NULL)
        {
            itsCollisionDetectionSystem->__setItsToUnity(NULL);
        }
    __setItsCollisionDetectionSystem(p_CollisionDetectionSystem);
}

void ToUnity::_clearItsCollisionDetectionSystem() {
    NOTIFY_RELATION_CLEARED("itsCollisionDetectionSystem");
    itsCollisionDetectionSystem = NULL;
}

void ToUnity::__setItsLocSystem(LocSystem* p_LocSystem) {
    itsLocSystem = p_LocSystem;
    if(p_LocSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLocSystem", p_LocSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLocSystem");
        }
}

void ToUnity::_setItsLocSystem(LocSystem* p_LocSystem) {
    if(itsLocSystem != NULL)
        {
            itsLocSystem->__setItsToUnity(NULL);
        }
    __setItsLocSystem(p_LocSystem);
}

void ToUnity::_clearItsLocSystem() {
    NOTIFY_RELATION_CLEARED("itsLocSystem");
    itsLocSystem = NULL;
}

void ToUnity::__setItsTruck(Truck* p_Truck) {
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

void ToUnity::_setItsTruck(Truck* p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsToUnity(NULL);
        }
    __setItsTruck(p_Truck);
}

void ToUnity::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck = NULL;
}

void ToUnity::__setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck) {
    itsUC_DockTruck = p_UC_DockTruck;
    if(p_UC_DockTruck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_DockTruck", p_UC_DockTruck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_DockTruck");
        }
}

void ToUnity::_setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck) {
    if(itsUC_DockTruck != NULL)
        {
            itsUC_DockTruck->__setItsToUnity(NULL);
        }
    __setItsUC_DockTruck(p_UC_DockTruck);
}

void ToUnity::_clearItsUC_DockTruck() {
    NOTIFY_RELATION_CLEARED("itsUC_DockTruck");
    itsUC_DockTruck = NULL;
}

void ToUnity::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.initializing");
        pushNullTransition();
        rootState_subState = initializing;
        rootState_active = initializing;
        //#[ state initializing.(Entry) 
        this->init();
        //#]
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus ToUnity::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State running
        case running:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.running");
                            NOTIFY_STATE_ENTERED("ROOT.running");
                            rootState_subState = running;
                            rootState_active = running;
                            //#[ state running.(Entry) 
                            this->calc_signals();
                            this->send_receive();
                            //#]
                            rootState_timeout = scheduleTimeout(dt, "ROOT.running");
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State initializing
        case initializing:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.initializing");
                    NOTIFY_STATE_ENTERED("ROOT.running");
                    rootState_subState = running;
                    rootState_active = running;
                    //#[ state running.(Entry) 
                    this->calc_signals();
                    this->send_receive();
                    //#]
                    rootState_timeout = scheduleTimeout(dt, "ROOT.running");
                    NOTIFY_TRANSITION_TERMINATED("2");
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
    aomsAttributes->addAttribute("ws", UNKNOWN2STRING(myReal->ws));
    aomsAttributes->addAttribute("sockfd_drive", x2String(myReal->sockfd_drive));
    aomsAttributes->addAttribute("port_drive", x2String(myReal->port_drive));
    aomsAttributes->addAttribute("address_drive", x2String(myReal->address_drive));
    aomsAttributes->addAttribute("si_other_drive", UNKNOWN2STRING(myReal->si_other_drive));
    aomsAttributes->addAttribute("buf_drive", array2String(BUFLEN, myReal->buf_drive, sizeof(char), &x2String));
    aomsAttributes->addAttribute("steeringSignal", x2String(myReal->steeringSignal));
    aomsAttributes->addAttribute("message_drive", array2String(BUFLEN, myReal->message_drive, sizeof(char), &x2String));
    aomsAttributes->addAttribute("address_collision", x2String(myReal->address_collision));
    aomsAttributes->addAttribute("buf_collision", array2String(BUFLEN, myReal->buf_collision, sizeof(char), &x2String));
    aomsAttributes->addAttribute("message_collision", array2String(BUFLEN, myReal->message_collision, sizeof(char), &x2String));
    aomsAttributes->addAttribute("port_collision", x2String(myReal->port_collision));
    aomsAttributes->addAttribute("si_other_collision", UNKNOWN2STRING(myReal->si_other_collision));
    aomsAttributes->addAttribute("sockfd_collision", x2String(myReal->sockfd_collision));
    aomsAttributes->addAttribute("obstacleRot", x2String(myReal->obstacleRot));
    aomsAttributes->addAttribute("truckCollisionCode", x2String(myReal->truckCollisionCode));
    aomsAttributes->addAttribute("trailerCollisionCode", x2String(myReal->trailerCollisionCode));
    aomsAttributes->addAttribute("truckCollisionObstacle", x2String(myReal->truckCollisionObstacle));
    aomsAttributes->addAttribute("trailerCollisionObstacle", x2String(myReal->trailerCollisionObstacle));
    aomsAttributes->addAttribute("obstacleCollision", x2String(myReal->obstacleCollision));
    aomsAttributes->addAttribute("truckCollisionWalls", x2String(myReal->truckCollisionWalls));
    aomsAttributes->addAttribute("trailerCollisionWalls", x2String(myReal->trailerCollisionWalls));
    aomsAttributes->addAttribute("Kp", x2String(myReal->Kp));
    aomsAttributes->addAttribute("Ki", x2String(myReal->Ki));
    aomsAttributes->addAttribute("integratedVelocityError", x2String(myReal->integratedVelocityError));
    aomsAttributes->addAttribute("integratedVelocityErrorMax", x2String(myReal->integratedVelocityErrorMax));
    aomsAttributes->addAttribute("dt", x2String(myReal->dt));
    aomsAttributes->addAttribute("maxSteeringAngle", x2String(myReal->maxSteeringAngle));
}

void OMAnimatedToUnity::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsLocSystem", false, true);
    if(myReal->itsLocSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsLocSystem);
        }
    aomsRelations->addRelation("itsCollisionDetectionSystem", false, true);
    if(myReal->itsCollisionDetectionSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollisionDetectionSystem);
        }
    aomsRelations->addRelation("itsUC_DockTruck", false, true);
    if(myReal->itsUC_DockTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_DockTruck);
        }
}

void OMAnimatedToUnity::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case ToUnity::running:
        {
            running_serializeStates(aomsState);
        }
        break;
        case ToUnity::initializing:
        {
            initializing_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedToUnity::running_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.running");
}

void OMAnimatedToUnity::initializing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.initializing");
}
//#]

IMPLEMENT_REACTIVE_META_P(ToUnity, UnityPkg, UnityPkg, false, OMAnimatedToUnity)

IMPLEMENT_META_OP(OMAnimatedToUnity, UnityPkg_ToUnity_setObstaclePosX_RhpReal, "setObstaclePosX", FALSE, "setObstaclePosX(RhpReal)", 1)

IMPLEMENT_OP_CALL(UnityPkg_ToUnity_setObstaclePosX_RhpReal, ToUnity, setObstaclePosX(p_obstaclePosX), NO_OP())

IMPLEMENT_META_OP(OMAnimatedToUnity, UnityPkg_ToUnity_setObstaclePosY_RhpReal, "setObstaclePosY", FALSE, "setObstaclePosY(RhpReal)", 1)

IMPLEMENT_OP_CALL(UnityPkg_ToUnity_setObstaclePosY_RhpReal, ToUnity, setObstaclePosY(p_obstaclePosY), NO_OP())

IMPLEMENT_META_OP(OMAnimatedToUnity, UnityPkg_ToUnity_setSteeringCmd_RhpReal, "setSteeringCmd", FALSE, "setSteeringCmd(RhpReal)", 1)

IMPLEMENT_OP_CALL(UnityPkg_ToUnity_setSteeringCmd_RhpReal, ToUnity, setSteeringCmd(p_steeringCmd), NO_OP())

IMPLEMENT_META_OP(OMAnimatedToUnity, UnityPkg_ToUnity_setTrailer1PosX_RhpReal, "setTrailer1PosX", FALSE, "setTrailer1PosX(RhpReal)", 1)

IMPLEMENT_OP_CALL(UnityPkg_ToUnity_setTrailer1PosX_RhpReal, ToUnity, setTrailer1PosX(p_trailer1PosX), NO_OP())

IMPLEMENT_META_OP(OMAnimatedToUnity, UnityPkg_ToUnity_setTrailer1PosY_RhpReal, "setTrailer1PosY", FALSE, "setTrailer1PosY(RhpReal)", 1)

IMPLEMENT_OP_CALL(UnityPkg_ToUnity_setTrailer1PosY_RhpReal, ToUnity, setTrailer1PosY(p_trailer1PosY), NO_OP())

IMPLEMENT_META_OP(OMAnimatedToUnity, UnityPkg_ToUnity_setTrailer2PosX_RhpReal, "setTrailer2PosX", FALSE, "setTrailer2PosX(RhpReal)", 1)

IMPLEMENT_OP_CALL(UnityPkg_ToUnity_setTrailer2PosX_RhpReal, ToUnity, setTrailer2PosX(p_trailer2PosX), NO_OP())

IMPLEMENT_META_OP(OMAnimatedToUnity, UnityPkg_ToUnity_setTrailer2PosY_RhpReal, "setTrailer2PosY", FALSE, "setTrailer2PosY(RhpReal)", 1)

IMPLEMENT_OP_CALL(UnityPkg_ToUnity_setTrailer2PosY_RhpReal, ToUnity, setTrailer2PosY(p_trailer2PosY), NO_OP())

IMPLEMENT_META_OP(OMAnimatedToUnity, UnityPkg_ToUnity_setTruckPosX_RhpReal, "setTruckPosX", FALSE, "setTruckPosX(RhpReal)", 1)

IMPLEMENT_OP_CALL(UnityPkg_ToUnity_setTruckPosX_RhpReal, ToUnity, setTruckPosX(p_truckPosX), NO_OP())

IMPLEMENT_META_OP(OMAnimatedToUnity, UnityPkg_ToUnity_setTruckPosY_RhpReal, "setTruckPosY", FALSE, "setTruckPosY(RhpReal)", 1)

IMPLEMENT_OP_CALL(UnityPkg_ToUnity_setTruckPosY_RhpReal, ToUnity, setTruckPosY(p_truckPosY), NO_OP())

IMPLEMENT_META_OP(OMAnimatedToUnity, UnityPkg_ToUnity_setVelocityCmd_RhpReal, "setVelocityCmd", FALSE, "setVelocityCmd(RhpReal)", 1)

IMPLEMENT_OP_CALL(UnityPkg_ToUnity_setVelocityCmd_RhpReal, ToUnity, setVelocityCmd(p_velocityCmd), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ToUnity_Simulation\ToUnity.cpp
*********************************************************************/
