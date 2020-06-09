/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CollisionDetectionSystem
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\CollisionDetectionSystem.cpp
*********************************************************************/

//## auto_generated
#include "CollisionDetectionSystem.h"
//## link itsObstacles
#include "Obstacles.h"
//## link itsUGE
#include "UGE.h"
//## package ActorPkg

//## actor CollisionDetectionSystem
CollisionDetectionSystem::CollisionDetectionSystem(void) : itsObstacles(NULL), itsUGE(NULL) {
}

CollisionDetectionSystem::~CollisionDetectionSystem(void) {
    cleanUpRelations();
}

const Obstacles* CollisionDetectionSystem::getItsObstacles(void) const {
    return itsObstacles;
}

void CollisionDetectionSystem::setItsObstacles(Obstacles* const p_Obstacles) {
    if(p_Obstacles != NULL)
        {
            p_Obstacles->_setItsCollisionDetectionSystem(this);
        }
    _setItsObstacles(p_Obstacles);
}

const UGE* CollisionDetectionSystem::getItsUGE(void) const {
    return itsUGE;
}

void CollisionDetectionSystem::setItsUGE(UGE* const p_UGE) {
    if(p_UGE != NULL)
        {
            p_UGE->_setItsCollisionDetectionSystem(this);
        }
    _setItsUGE(p_UGE);
}

void CollisionDetectionSystem::cleanUpRelations(void) {
    if(itsObstacles != NULL)
        {
            const CollisionDetectionSystem* p_CollisionDetectionSystem = itsObstacles->getItsCollisionDetectionSystem();
            if(p_CollisionDetectionSystem != NULL)
                {
                    itsObstacles->__setItsCollisionDetectionSystem(NULL);
                }
            itsObstacles = NULL;
        }
    if(itsUGE != NULL)
        {
            const CollisionDetectionSystem* p_CollisionDetectionSystem = itsUGE->getItsCollisionDetectionSystem();
            if(p_CollisionDetectionSystem != NULL)
                {
                    itsUGE->__setItsCollisionDetectionSystem(NULL);
                }
            itsUGE = NULL;
        }
}

void CollisionDetectionSystem::__setItsObstacles(Obstacles* const p_Obstacles) {
    itsObstacles = p_Obstacles;
}

void CollisionDetectionSystem::_setItsObstacles(Obstacles* const p_Obstacles) {
    if(itsObstacles != NULL)
        {
            itsObstacles->__setItsCollisionDetectionSystem(NULL);
        }
    __setItsObstacles(p_Obstacles);
}

void CollisionDetectionSystem::_clearItsObstacles(void) {
    itsObstacles = NULL;
}

void CollisionDetectionSystem::__setItsUGE(UGE* const p_UGE) {
    itsUGE = p_UGE;
}

void CollisionDetectionSystem::_setItsUGE(UGE* const p_UGE) {
    if(itsUGE != NULL)
        {
            itsUGE->__setItsCollisionDetectionSystem(NULL);
        }
    __setItsUGE(p_UGE);
}

void CollisionDetectionSystem::_clearItsUGE(void) {
    itsUGE = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CollisionDetectionSystem.cpp
*********************************************************************/
