/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\DCOperator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCOperator.h"
//#[ ignore
#define ActorPkg_DCOperator_DCOperator_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor DCOperator
DCOperator::DCOperator() {
    NOTIFY_CONSTRUCTOR(DCOperator, DCOperator(), 0, ActorPkg_DCOperator_DCOperator_SERIALIZE);
}

DCOperator::~DCOperator() {
    NOTIFY_DESTRUCTOR(~DCOperator, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(DCOperator, ActorPkg, ActorPkg, false, OMAnimatedDCOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\DCOperator.cpp
*********************************************************************/
