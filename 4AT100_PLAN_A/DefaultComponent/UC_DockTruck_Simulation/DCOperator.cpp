/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Tue, 2, Jun 2020  
	File Path	: DefaultComponent\UC_DockTruck_Simulation\DCOperator.cpp
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
	File Path	: DefaultComponent\UC_DockTruck_Simulation\DCOperator.cpp
*********************************************************************/
