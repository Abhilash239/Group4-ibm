/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DC
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DC.h"
//#[ ignore
#define ActorPkg_DC_DC_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor DC
DC::DC() {
    NOTIFY_CONSTRUCTOR(DC, DC(), 0, ActorPkg_DC_DC_SERIALIZE);
}

DC::~DC() {
    NOTIFY_DESTRUCTOR(~DC, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(DC, ActorPkg, ActorPkg, false, OMAnimatedDC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DC.cpp
*********************************************************************/
