/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SafetyStandards
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\SafetyStandards.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SafetyStandards.h"
//#[ ignore
#define ActorPkg_SafetyStandards_SafetyStandards_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor SafetyStandards
SafetyStandards::SafetyStandards() {
    NOTIFY_CONSTRUCTOR(SafetyStandards, SafetyStandards(), 0, ActorPkg_SafetyStandards_SafetyStandards_SERIALIZE);
}

SafetyStandards::~SafetyStandards() {
    NOTIFY_DESTRUCTOR(~SafetyStandards, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SafetyStandards, ActorPkg, ActorPkg, false, OMAnimatedSafetyStandards)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SafetyStandards.cpp
*********************************************************************/
