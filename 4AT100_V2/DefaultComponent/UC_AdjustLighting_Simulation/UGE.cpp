/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustLighting_Simulation
	Model Element	: UGE
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\UGE.cpp
*********************************************************************/

//## auto_generated
#include "UGE.h"
//## link itsCollisionDetectionSystem
#include "CollisionDetectionSystem.h"
//## link itsLocSystem
#include "LocSystem.h"
//## link itsTruck
#include "Truck.h"
//## package ArchitecturePkg

//## class UGE
UGE::UGE(void) : itsCollisionDetectionSystem(NULL), itsLocSystem(NULL), itsTruck(NULL) {
}

UGE::~UGE(void) {
    cleanUpRelations();
}

void UGE::reqTruckPosition(void) {
    //#[ operation reqTruckPosition()
    //#]
}

void UGE::resTruckPosition(void) {
    //#[ operation resTruckPosition()
    //#]
}

const CollisionDetectionSystem* UGE::getItsCollisionDetectionSystem(void) const {
    return itsCollisionDetectionSystem;
}

void UGE::setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem) {
    if(p_CollisionDetectionSystem != NULL)
        {
            p_CollisionDetectionSystem->_setItsUGE(this);
        }
    _setItsCollisionDetectionSystem(p_CollisionDetectionSystem);
}

const LocSystem* UGE::getItsLocSystem(void) const {
    return itsLocSystem;
}

void UGE::setItsLocSystem(LocSystem* const p_LocSystem) {
    if(p_LocSystem != NULL)
        {
            p_LocSystem->_setItsUGE(this);
        }
    _setItsLocSystem(p_LocSystem);
}

const Truck* UGE::getItsTruck(void) const {
    return itsTruck;
}

void UGE::setItsTruck(Truck* const p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsUGE(this);
        }
    _setItsTruck(p_Truck);
}

void UGE::cleanUpRelations(void) {
    if(itsCollisionDetectionSystem != NULL)
        {
            const UGE* p_UGE = itsCollisionDetectionSystem->getItsUGE();
            if(p_UGE != NULL)
                {
                    itsCollisionDetectionSystem->__setItsUGE(NULL);
                }
            itsCollisionDetectionSystem = NULL;
        }
    if(itsLocSystem != NULL)
        {
            const UGE* p_UGE = itsLocSystem->getItsUGE();
            if(p_UGE != NULL)
                {
                    itsLocSystem->__setItsUGE(NULL);
                }
            itsLocSystem = NULL;
        }
    if(itsTruck != NULL)
        {
            const UGE* p_UGE = itsTruck->getItsUGE();
            if(p_UGE != NULL)
                {
                    itsTruck->__setItsUGE(NULL);
                }
            itsTruck = NULL;
        }
}

void UGE::__setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem) {
    itsCollisionDetectionSystem = p_CollisionDetectionSystem;
}

void UGE::_setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem) {
    if(itsCollisionDetectionSystem != NULL)
        {
            itsCollisionDetectionSystem->__setItsUGE(NULL);
        }
    __setItsCollisionDetectionSystem(p_CollisionDetectionSystem);
}

void UGE::_clearItsCollisionDetectionSystem(void) {
    itsCollisionDetectionSystem = NULL;
}

void UGE::__setItsLocSystem(LocSystem* const p_LocSystem) {
    itsLocSystem = p_LocSystem;
}

void UGE::_setItsLocSystem(LocSystem* const p_LocSystem) {
    if(itsLocSystem != NULL)
        {
            itsLocSystem->__setItsUGE(NULL);
        }
    __setItsLocSystem(p_LocSystem);
}

void UGE::_clearItsLocSystem(void) {
    itsLocSystem = NULL;
}

void UGE::__setItsTruck(Truck* const p_Truck) {
    itsTruck = p_Truck;
}

void UGE::_setItsTruck(Truck* const p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsUGE(NULL);
        }
    __setItsTruck(p_Truck);
}

void UGE::_clearItsTruck(void) {
    itsTruck = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\UGE.cpp
*********************************************************************/
