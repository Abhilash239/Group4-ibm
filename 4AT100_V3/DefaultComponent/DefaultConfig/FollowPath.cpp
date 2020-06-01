/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: FollowPath
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\FollowPath.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "FollowPath.h"
//## link itsCollisionDetectionSystem
#include "CollisionDetectionSystem.h"
//## link itsLocSystem
#include "LocSystem.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define UseCaseAnalysisPkg_DriveAutonomously_FollowPath_FollowPath_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously

//## usecase FollowPath
FollowPath::FollowPath() {
    NOTIFY_CONSTRUCTOR(FollowPath, FollowPath(), 0, UseCaseAnalysisPkg_DriveAutonomously_FollowPath_FollowPath_SERIALIZE);
    itsCollisionDetectionSystem = NULL;
    itsLocSystem = NULL;
    itsLocSystem_1 = NULL;
    itsTruck = NULL;
}

FollowPath::~FollowPath() {
    NOTIFY_DESTRUCTOR(~FollowPath, true);
    cleanUpRelations();
}

CollisionDetectionSystem* FollowPath::getItsCollisionDetectionSystem() const {
    return itsCollisionDetectionSystem;
}

void FollowPath::setItsCollisionDetectionSystem(CollisionDetectionSystem* p_CollisionDetectionSystem) {
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

LocSystem* FollowPath::getItsLocSystem() const {
    return itsLocSystem;
}

void FollowPath::setItsLocSystem(LocSystem* p_LocSystem) {
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

LocSystem* FollowPath::getItsLocSystem_1() const {
    return itsLocSystem_1;
}

void FollowPath::setItsLocSystem_1(LocSystem* p_LocSystem) {
    itsLocSystem_1 = p_LocSystem;
    if(p_LocSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLocSystem_1", p_LocSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLocSystem_1");
        }
}

Truck* FollowPath::getItsTruck() const {
    return itsTruck;
}

void FollowPath::setItsTruck(Truck* p_Truck) {
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

void FollowPath::cleanUpRelations() {
    if(itsCollisionDetectionSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollisionDetectionSystem");
            itsCollisionDetectionSystem = NULL;
        }
    if(itsLocSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLocSystem");
            itsLocSystem = NULL;
        }
    if(itsLocSystem_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLocSystem_1");
            itsLocSystem_1 = NULL;
        }
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            itsTruck = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFollowPath::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLocSystem", false, true);
    if(myReal->itsLocSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsLocSystem);
        }
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsLocSystem_1", false, true);
    if(myReal->itsLocSystem_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsLocSystem_1);
        }
    aomsRelations->addRelation("itsCollisionDetectionSystem", false, true);
    if(myReal->itsCollisionDetectionSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollisionDetectionSystem);
        }
}
//#]

IMPLEMENT_META_P(FollowPath, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, false, OMAnimatedFollowPath)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\FollowPath.cpp
*********************************************************************/
