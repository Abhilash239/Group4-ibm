/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 20184717
	Component	: DefaultComponent 
	Configuration 	: ToUnity_Simulation
	Model Element	: Default
//!	Generated Date	: Fri, 17, May 2019  
	File Path	: DefaultComponent\ToUnity_Simulation\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "ToUnity.h"
//#[ ignore
#define updateConnection_SERIALIZE OM_NO_OP

#define updateConnection_UNSERIALIZE OM_NO_OP

#define updateConnection_CONSTRUCTOR updateConnection()
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event updateConnection()
updateConnection::updateConnection() {
    NOTIFY_EVENT_CONSTRUCTOR(updateConnection)
    setId(updateConnection_Default_id);
}

bool updateConnection::isTypeOf(const short id) const {
    return (updateConnection_Default_id==id);
}

IMPLEMENT_META_EVENT_P(updateConnection, Default, Default, updateConnection())

/*********************************************************************
	File Path	: DefaultComponent\ToUnity_Simulation\Default.cpp
*********************************************************************/
