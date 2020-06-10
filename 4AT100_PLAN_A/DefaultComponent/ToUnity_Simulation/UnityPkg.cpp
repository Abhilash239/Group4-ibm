/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: ToUnity_Simulation
	Model Element	: UnityPkg
//!	Generated Date	: Tue, 2, Jun 2020  
	File Path	: DefaultComponent\ToUnity_Simulation\UnityPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ToUnity.h"
//## auto_generated
#include "UnityPkg.h"
//#[ ignore
#define updateConnection_SERIALIZE OM_NO_OP

#define updateConnection_UNSERIALIZE OM_NO_OP

#define updateConnection_CONSTRUCTOR updateConnection()
//#]

//## package UnityPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UnityPkg, UnityPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event updateConnection()
updateConnection::updateConnection() {
    NOTIFY_EVENT_CONSTRUCTOR(updateConnection)
    setId(updateConnection_UnityPkg_id);
}

bool updateConnection::isTypeOf(const short id) const {
    return (updateConnection_UnityPkg_id==id);
}

IMPLEMENT_META_EVENT_P(updateConnection, UnityPkg, UnityPkg, updateConnection())

/*********************************************************************
	File Path	: DefaultComponent\ToUnity_Simulation\UnityPkg.cpp
*********************************************************************/
