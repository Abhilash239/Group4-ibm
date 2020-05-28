/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Unity
//!	Generated Date	: Thu, 28, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Unity.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ToUnity.h"
//## auto_generated
#include "Unity.h"
//#[ ignore
#define updateConnection_SERIALIZE OM_NO_OP

#define updateConnection_UNSERIALIZE OM_NO_OP

#define updateConnection_CONSTRUCTOR updateConnection()
//#]

//## package Unity


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Unity, Unity)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event updateConnection()
updateConnection::updateConnection() {
    NOTIFY_EVENT_CONSTRUCTOR(updateConnection)
    setId(updateConnection_Unity_id);
}

bool updateConnection::isTypeOf(const short id) const {
    return (updateConnection_Unity_id==id);
}

IMPLEMENT_META_EVENT_P(updateConnection, Unity, Unity, updateConnection())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Unity.cpp
*********************************************************************/
