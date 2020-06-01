/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Obstacles
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Obstacles.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Obstacles.h"
//#[ ignore
#define ActorPkg_Obstacles_Obstacles_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Obstacles
Obstacles::Obstacles() {
    NOTIFY_CONSTRUCTOR(Obstacles, Obstacles(), 0, ActorPkg_Obstacles_Obstacles_SERIALIZE);
}

Obstacles::~Obstacles() {
    NOTIFY_DESTRUCTOR(~Obstacles, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Obstacles, ActorPkg, ActorPkg, false, OMAnimatedObstacles)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Obstacles.cpp
*********************************************************************/
