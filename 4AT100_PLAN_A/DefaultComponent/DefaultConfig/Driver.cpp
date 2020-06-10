/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Driver
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Driver.h"
//#[ ignore
#define ActorPkg_Driver_Driver_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Driver
Driver::Driver() {
    NOTIFY_CONSTRUCTOR(Driver, Driver(), 0, ActorPkg_Driver_Driver_SERIALIZE);
}

Driver::~Driver() {
    NOTIFY_DESTRUCTOR(~Driver, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Driver, ActorPkg, ActorPkg, false, OMAnimatedDriver)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/
