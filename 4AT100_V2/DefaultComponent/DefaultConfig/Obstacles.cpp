/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Obstacles
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Obstacles.cpp
*********************************************************************/

//## auto_generated
#include "Obstacles.h"
//## link itsCollisionDetectionSystem
#include "CollisionDetectionSystem.h"
//## package ActorPkg

//## actor Obstacles
//#[ ignore
Obstacles::Obstacles_port_C::Obstacles_port_C(void) : OMDefaultReactivePort(), _p_(0) {
}

Obstacles::Obstacles_port_C::~Obstacles_port_C(void) {
}

void Obstacles::Obstacles_port_C::connectObstacles(Obstacles* part) {
}
//#]

Obstacles::Obstacles(void) : itsCollisionDetectionSystem(NULL) {
}

Obstacles::~Obstacles(void) {
    cleanUpRelations();
}

Obstacles::Obstacles_port_C* Obstacles::getObstacles_port(void) const {
    return (Obstacles::Obstacles_port_C*) &Obstacles_port;
}

Obstacles::Obstacles_port_C* Obstacles::get_Obstacles_port(void) const {
    return (Obstacles::Obstacles_port_C*) &Obstacles_port;
}

const CollisionDetectionSystem* Obstacles::getItsCollisionDetectionSystem(void) const {
    return itsCollisionDetectionSystem;
}

void Obstacles::setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem) {
    if(p_CollisionDetectionSystem != NULL)
        {
            p_CollisionDetectionSystem->_setItsObstacles(this);
        }
    _setItsCollisionDetectionSystem(p_CollisionDetectionSystem);
}

void Obstacles::cleanUpRelations(void) {
    if(itsCollisionDetectionSystem != NULL)
        {
            const Obstacles* p_Obstacles = itsCollisionDetectionSystem->getItsObstacles();
            if(p_Obstacles != NULL)
                {
                    itsCollisionDetectionSystem->__setItsObstacles(NULL);
                }
            itsCollisionDetectionSystem = NULL;
        }
}

void Obstacles::__setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem) {
    itsCollisionDetectionSystem = p_CollisionDetectionSystem;
}

void Obstacles::_setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem) {
    if(itsCollisionDetectionSystem != NULL)
        {
            itsCollisionDetectionSystem->__setItsObstacles(NULL);
        }
    __setItsCollisionDetectionSystem(p_CollisionDetectionSystem);
}

void Obstacles::_clearItsCollisionDetectionSystem(void) {
    itsCollisionDetectionSystem = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Obstacles.cpp
*********************************************************************/
