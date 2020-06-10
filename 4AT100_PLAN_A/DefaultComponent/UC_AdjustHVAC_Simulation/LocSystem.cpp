/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: LocSystem
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\LocSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LocSystem.h"
//## link itsToUnity
#include "ToUnity.h"
//#[ ignore
#define ActorPkg_LocSystem_LocSystem_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor LocSystem
LocSystem::LocSystem() {
    NOTIFY_CONSTRUCTOR(LocSystem, LocSystem(), 0, ActorPkg_LocSystem_LocSystem_SERIALIZE);
    itsToUnity = NULL;
}

LocSystem::~LocSystem() {
    NOTIFY_DESTRUCTOR(~LocSystem, true);
    cleanUpRelations();
}

ToUnity* LocSystem::getItsToUnity() const {
    return itsToUnity;
}

void LocSystem::setItsToUnity(ToUnity* p_ToUnity) {
    if(p_ToUnity != NULL)
        {
            p_ToUnity->_setItsLocSystem(this);
        }
    _setItsToUnity(p_ToUnity);
}

void LocSystem::cleanUpRelations() {
    if(itsToUnity != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsToUnity");
            LocSystem* p_LocSystem = itsToUnity->getItsLocSystem();
            if(p_LocSystem != NULL)
                {
                    itsToUnity->__setItsLocSystem(NULL);
                }
            itsToUnity = NULL;
        }
}

void LocSystem::__setItsToUnity(ToUnity* p_ToUnity) {
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

void LocSystem::_setItsToUnity(ToUnity* p_ToUnity) {
    if(itsToUnity != NULL)
        {
            itsToUnity->__setItsLocSystem(NULL);
        }
    __setItsToUnity(p_ToUnity);
}

void LocSystem::_clearItsToUnity() {
    NOTIFY_RELATION_CLEARED("itsToUnity");
    itsToUnity = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLocSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsToUnity", false, true);
    if(myReal->itsToUnity)
        {
            aomsRelations->ADD_ITEM(myReal->itsToUnity);
        }
}
//#]

IMPLEMENT_META_P(LocSystem, ActorPkg, ActorPkg, false, OMAnimatedLocSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\LocSystem.cpp
*********************************************************************/
