/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Government
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Government.h"
//#[ ignore
#define ActorPkg_Government_Government_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Government
Government::Government() {
    NOTIFY_CONSTRUCTOR(Government, Government(), 0, ActorPkg_Government_Government_SERIALIZE);
}

Government::~Government() {
    NOTIFY_DESTRUCTOR(~Government, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Government, ActorPkg, ActorPkg, false, OMAnimatedGovernment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/
