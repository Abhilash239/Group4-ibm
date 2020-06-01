/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ChargingSystem
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ChargingSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ChargingSystem.h"
//#[ ignore
#define ActorPkg_ChargingSystem_ChargingSystem_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor ChargingSystem
ChargingSystem::ChargingSystem() {
    NOTIFY_CONSTRUCTOR(ChargingSystem, ChargingSystem(), 0, ActorPkg_ChargingSystem_ChargingSystem_SERIALIZE);
}

ChargingSystem::~ChargingSystem() {
    NOTIFY_DESTRUCTOR(~ChargingSystem, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(ChargingSystem, ActorPkg, ActorPkg, false, OMAnimatedChargingSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ChargingSystem.cpp
*********************************************************************/
