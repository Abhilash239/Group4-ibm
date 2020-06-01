/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: CollisionDetectionSystem
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\UC_DockTruck_Simulation\CollisionDetectionSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CollisionDetectionSystem.h"
//## link itsToUnity
#include "ToUnity.h"
//#[ ignore
#define ActorPkg_CollisionDetectionSystem_CollisionDetectionSystem_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor CollisionDetectionSystem
CollisionDetectionSystem::CollisionDetectionSystem() {
    NOTIFY_CONSTRUCTOR(CollisionDetectionSystem, CollisionDetectionSystem(), 0, ActorPkg_CollisionDetectionSystem_CollisionDetectionSystem_SERIALIZE);
    itsToUnity = NULL;
}

CollisionDetectionSystem::~CollisionDetectionSystem() {
    NOTIFY_DESTRUCTOR(~CollisionDetectionSystem, true);
    cleanUpRelations();
}

ToUnity* CollisionDetectionSystem::getItsToUnity() const {
    return itsToUnity;
}

void CollisionDetectionSystem::setItsToUnity(ToUnity* p_ToUnity) {
    if(p_ToUnity != NULL)
        {
            p_ToUnity->_setItsCollisionDetectionSystem(this);
        }
    _setItsToUnity(p_ToUnity);
}

void CollisionDetectionSystem::cleanUpRelations() {
    if(itsToUnity != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsToUnity");
            CollisionDetectionSystem* p_CollisionDetectionSystem = itsToUnity->getItsCollisionDetectionSystem();
            if(p_CollisionDetectionSystem != NULL)
                {
                    itsToUnity->__setItsCollisionDetectionSystem(NULL);
                }
            itsToUnity = NULL;
        }
}

void CollisionDetectionSystem::__setItsToUnity(ToUnity* p_ToUnity) {
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

void CollisionDetectionSystem::_setItsToUnity(ToUnity* p_ToUnity) {
    if(itsToUnity != NULL)
        {
            itsToUnity->__setItsCollisionDetectionSystem(NULL);
        }
    __setItsToUnity(p_ToUnity);
}

void CollisionDetectionSystem::_clearItsToUnity() {
    NOTIFY_RELATION_CLEARED("itsToUnity");
    itsToUnity = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCollisionDetectionSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsToUnity", false, true);
    if(myReal->itsToUnity)
        {
            aomsRelations->ADD_ITEM(myReal->itsToUnity);
        }
}
//#]

IMPLEMENT_META_P(CollisionDetectionSystem, ActorPkg, ActorPkg, false, OMAnimatedCollisionDetectionSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_DockTruck_Simulation\CollisionDetectionSystem.cpp
*********************************************************************/
