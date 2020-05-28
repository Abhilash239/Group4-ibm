/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ToUnity
//!	Generated Date	: Thu, 28, May 2020  
	File Path	: DefaultComponent\DefaultConfig\ToUnity.cpp
*********************************************************************/

//## auto_generated
#include "ToUnity.h"
//## auto_generated
#include <omthread.h>
//## package UnityPkg

//## class ToUnity
ToUnity::ToUnity(IOxfActive* const theActiveContext) : OMReactive(), steeringCmd(0), velocity(0), velocityCmd(0), Ki(0.1), Kp(0.5), address_collision("127.0.0.1"), address_drive("127.0.0.1"), dt(50), integratedVelocityError(0), integratedVelocityErrorMax(0.5), maxSteeringAngle(45.0f), port_collision(54321), port_drive(54320), trailerCollisionCode(0), truckCollisionCode(0) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

ToUnity::~ToUnity(void) {
    cancelTimeouts();
}

void ToUnity::send_receive(void) {
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

const RhpReal ToUnity::getAccelerationSignal(void) const {
    return accelerationSignal;
}

const RhpReal ToUnity::getObstaclePosX(void) const {
    return obstaclePosX;
}

const RhpReal ToUnity::getObstaclePosY(void) const {
    return obstaclePosY;
}

const RhpReal ToUnity::getSteeringCmd(void) const {
    return steeringCmd;
}

const RhpReal ToUnity::getTrailer1PosX(void) const {
    return trailer1PosX;
}

const RhpReal ToUnity::getTrailer1PosY(void) const {
    return trailer1PosY;
}

const RhpReal ToUnity::getTrailer2PosX(void) const {
    return trailer2PosX;
}

const RhpReal ToUnity::getTrailer2PosY(void) const {
    return trailer2PosY;
}

const RhpReal ToUnity::getTruckPosX(void) const {
    return truckPosX;
}

const RhpReal ToUnity::getTruckPosY(void) const {
    return truckPosY;
}

const RhpReal ToUnity::getVelocity(void) const {
    return velocity;
}

const RhpReal ToUnity::getVelocityCmd(void) const {
    return velocityCmd;
}

bool ToUnity::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ToUnity::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void ToUnity::calc_signals(void) {
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

void ToUnity::init(void) {
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
    //#[ operation parse_drive_csv(char*)
    char* p = strtok(str, ",");
    this->velocity = strtof(p, NULL);
    
    p = strtok(NULL, ",");
    this->truckPosX = strtof(p, NULL);
    p = strtok(NULL, ",");
    this->truckPosY = strtof(p, NULL);
    p = strtok(NULL, ",");
    //remote_vehicle.truck.z = strtof(p, NULL);
    
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

const RhpReal ToUnity::getKi(void) const {
    return Ki;
}

void ToUnity::setKi(const RhpReal p_Ki) {
    Ki = p_Ki;
}

const RhpReal ToUnity::getKp(void) const {
    return Kp;
}

void ToUnity::setKp(const RhpReal p_Kp) {
    Kp = p_Kp;
}

void ToUnity::setAccelerationSignal(const RhpReal p_accelerationSignal) {
    accelerationSignal = p_accelerationSignal;
}

const char* ToUnity::getAddress_collision(void) const {
    return address_collision;
}

void ToUnity::setAddress_collision(char* const p_address_collision) {
    address_collision = p_address_collision;
}

const char* ToUnity::getAddress_drive(void) const {
    return address_drive;
}

void ToUnity::setAddress_drive(char* const p_address_drive) {
    address_drive = p_address_drive;
}

const char ToUnity::getBuf_collision(const Rhp_int32_t iterI1) const {
    return buf_collision[iterI1];
}

void ToUnity::setBuf_collision(const Rhp_int32_t iterI1, const char p_buf_collision) {
    buf_collision[iterI1] = p_buf_collision;
}

const char ToUnity::getBuf_drive(const Rhp_int32_t iterI1) const {
    return buf_drive[iterI1];
}

void ToUnity::setBuf_drive(const Rhp_int32_t iterI1, const char p_buf_drive) {
    buf_drive[iterI1] = p_buf_drive;
}

const int ToUnity::getDt(void) const {
    return dt;
}

void ToUnity::setDt(const int p_dt) {
    dt = p_dt;
}

const RhpReal ToUnity::getIntegratedVelocityError(void) const {
    return integratedVelocityError;
}

void ToUnity::setIntegratedVelocityError(const RhpReal p_integratedVelocityError) {
    integratedVelocityError = p_integratedVelocityError;
}

const RhpReal ToUnity::getIntegratedVelocityErrorMax(void) const {
    return integratedVelocityErrorMax;
}

void ToUnity::setIntegratedVelocityErrorMax(const RhpReal p_integratedVelocityErrorMax) {
    integratedVelocityErrorMax = p_integratedVelocityErrorMax;
}

const RhpReal ToUnity::getMaxSteeringAngle(void) const {
    return maxSteeringAngle;
}

void ToUnity::setMaxSteeringAngle(const RhpReal p_maxSteeringAngle) {
    maxSteeringAngle = p_maxSteeringAngle;
}

const char ToUnity::getMessage_collision(const Rhp_int32_t iterI1) const {
    return message_collision[iterI1];
}

void ToUnity::setMessage_collision(const Rhp_int32_t iterI1, const char p_message_collision) {
    message_collision[iterI1] = p_message_collision;
}

const char ToUnity::getMessage_drive(const Rhp_int32_t iterI1) const {
    return message_drive[iterI1];
}

void ToUnity::setMessage_drive(const Rhp_int32_t iterI1, const char p_message_drive) {
    message_drive[iterI1] = p_message_drive;
}

const bool ToUnity::getObstacleCollision(void) const {
    return obstacleCollision;
}

void ToUnity::setObstacleCollision(const bool p_obstacleCollision) {
    obstacleCollision = p_obstacleCollision;
}

void ToUnity::setObstaclePosX(const RhpReal p_obstaclePosX) {
    obstaclePosX = p_obstaclePosX;
}

void ToUnity::setObstaclePosY(const RhpReal p_obstaclePosY) {
    obstaclePosY = p_obstaclePosY;
}

const RhpReal ToUnity::getObstacleRot(void) const {
    return obstacleRot;
}

void ToUnity::setObstacleRot(const RhpReal p_obstacleRot) {
    obstacleRot = p_obstacleRot;
}

const int ToUnity::getPort_collision(void) const {
    return port_collision;
}

void ToUnity::setPort_collision(const int p_port_collision) {
    port_collision = p_port_collision;
}

const int ToUnity::getPort_drive(void) const {
    return port_drive;
}

void ToUnity::setPort_drive(const int p_port_drive) {
    port_drive = p_port_drive;
}

const SOCKADDR_IN ToUnity::getSi_other_collision(void) const {
    return si_other_collision;
}

void ToUnity::setSi_other_collision(const SOCKADDR_IN p_si_other_collision) {
    si_other_collision = p_si_other_collision;
}

const SOCKADDR_IN ToUnity::getSi_other_drive(void) const {
    return si_other_drive;
}

void ToUnity::setSi_other_drive(const SOCKADDR_IN p_si_other_drive) {
    si_other_drive = p_si_other_drive;
}

const int ToUnity::getSockfd_collision(void) const {
    return sockfd_collision;
}

void ToUnity::setSockfd_collision(const int p_sockfd_collision) {
    sockfd_collision = p_sockfd_collision;
}

const int ToUnity::getSockfd_drive(void) const {
    return sockfd_drive;
}

void ToUnity::setSockfd_drive(const int p_sockfd_drive) {
    sockfd_drive = p_sockfd_drive;
}

void ToUnity::setSteeringCmd(const RhpReal p_steeringCmd) {
    steeringCmd = p_steeringCmd;
}

const RhpReal ToUnity::getSteeringSignal(void) const {
    return steeringSignal;
}

void ToUnity::setSteeringSignal(const RhpReal p_steeringSignal) {
    steeringSignal = p_steeringSignal;
}

void ToUnity::setTrailer1PosX(const RhpReal p_trailer1PosX) {
    trailer1PosX = p_trailer1PosX;
}

void ToUnity::setTrailer1PosY(const RhpReal p_trailer1PosY) {
    trailer1PosY = p_trailer1PosY;
}

void ToUnity::setTrailer2PosX(const RhpReal p_trailer2PosX) {
    trailer2PosX = p_trailer2PosX;
}

void ToUnity::setTrailer2PosY(const RhpReal p_trailer2PosY) {
    trailer2PosY = p_trailer2PosY;
}

const int ToUnity::getTrailerCollisionCode(void) const {
    return trailerCollisionCode;
}

void ToUnity::setTrailerCollisionCode(const int p_trailerCollisionCode) {
    trailerCollisionCode = p_trailerCollisionCode;
}

const bool ToUnity::getTrailerCollisionObstacle(void) const {
    return trailerCollisionObstacle;
}

void ToUnity::setTrailerCollisionObstacle(const bool p_trailerCollisionObstacle) {
    trailerCollisionObstacle = p_trailerCollisionObstacle;
}

const int ToUnity::getTrailerCollisionWalls(void) const {
    return trailerCollisionWalls;
}

void ToUnity::setTrailerCollisionWalls(const int p_trailerCollisionWalls) {
    trailerCollisionWalls = p_trailerCollisionWalls;
}

const int ToUnity::getTruckCollisionCode(void) const {
    return truckCollisionCode;
}

void ToUnity::setTruckCollisionCode(const int p_truckCollisionCode) {
    truckCollisionCode = p_truckCollisionCode;
}

const bool ToUnity::getTruckCollisionObstacle(void) const {
    return truckCollisionObstacle;
}

void ToUnity::setTruckCollisionObstacle(const bool p_truckCollisionObstacle) {
    truckCollisionObstacle = p_truckCollisionObstacle;
}

const int ToUnity::getTruckCollisionWalls(void) const {
    return truckCollisionWalls;
}

void ToUnity::setTruckCollisionWalls(const int p_truckCollisionWalls) {
    truckCollisionWalls = p_truckCollisionWalls;
}

void ToUnity::setTruckPosX(const RhpReal p_truckPosX) {
    truckPosX = p_truckPosX;
}

void ToUnity::setTruckPosY(const RhpReal p_truckPosY) {
    truckPosY = p_truckPosY;
}

void ToUnity::setVelocity(const RhpReal p_velocity) {
    velocity = p_velocity;
}

void ToUnity::setVelocityCmd(const RhpReal p_velocityCmd) {
    velocityCmd = p_velocityCmd;
}

const WSADATA ToUnity::getWs(void) const {
    return ws;
}

void ToUnity::setWs(const WSADATA p_ws) {
    ws = p_ws;
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

void ToUnity::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void ToUnity::rootState_entDef(void) {
    {
        pushNullTransition();
        rootState_subState = initializing;
        rootState_active = initializing;
        //#[ state initializing.(Entry) 
        this->init();
        //#]
    }
}

IOxfReactive::TakeEventStatus ToUnity::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State running
        case running:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            cancel(rootState_timeout);
                            rootState_subState = running;
                            rootState_active = running;
                            //#[ state running.(Entry) 
                            this->calc_signals();
                            this->send_receive();
                            //#]
                            rootState_timeout = scheduleTimeout(dt, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State initializing
        case initializing:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    popNullTransition();
                    rootState_subState = running;
                    rootState_active = running;
                    //#[ state running.(Entry) 
                    this->calc_signals();
                    this->send_receive();
                    //#]
                    rootState_timeout = scheduleTimeout(dt, NULL);
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ToUnity.cpp
*********************************************************************/
