/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GeneratePath
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\GeneratePath.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GeneratePath.h"
//## link itsCollisionDetectionSystem
#include "CollisionDetectionSystem.h"
//## link itsLocSystem
#include "LocSystem.h"
//#[ ignore
#define UseCaseAnalysisPkg_DriveAutonomously_GeneratePath_GeneratePath_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously

//## usecase GeneratePath
GeneratePath::GeneratePath() {
    NOTIFY_CONSTRUCTOR(GeneratePath, GeneratePath(), 0, UseCaseAnalysisPkg_DriveAutonomously_GeneratePath_GeneratePath_SERIALIZE);
    itsCollisionDetectionSystem = NULL;
    itsLocSystem = NULL;
    itsLocSystem_1 = NULL;
}

GeneratePath::~GeneratePath() {
    NOTIFY_DESTRUCTOR(~GeneratePath, true);
    cleanUpRelations();
}

CollisionDetectionSystem* GeneratePath::getItsCollisionDetectionSystem() const {
    return itsCollisionDetectionSystem;
}

void GeneratePath::setItsCollisionDetectionSystem(CollisionDetectionSystem* p_CollisionDetectionSystem) {
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

LocSystem* GeneratePath::getItsLocSystem() const {
    return itsLocSystem;
}

void GeneratePath::setItsLocSystem(LocSystem* p_LocSystem) {
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

LocSystem* GeneratePath::getItsLocSystem_1() const {
    return itsLocSystem_1;
}

void GeneratePath::setItsLocSystem_1(LocSystem* p_LocSystem) {
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

void GeneratePath::cleanUpRelations() {
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
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGeneratePath::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLocSystem", false, true);
    if(myReal->itsLocSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsLocSystem);
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

IMPLEMENT_META_P(GeneratePath, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, false, OMAnimatedGeneratePath)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GeneratePath.cpp
*********************************************************************/
