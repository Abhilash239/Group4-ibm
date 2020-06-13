/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_5 
	Configuration 	: SystemConfiguration_Simulation
	Model Element	: Configuration
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_5\SystemConfiguration_Simulation\Configuration.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Configuration.h"
//## auto_generated
#include "SystemConfiguration.h"
//#[ ignore
#define reqLogIn_SERIALIZE OM_NO_OP

#define reqLogIn_UNSERIALIZE OM_NO_OP

#define reqLogIn_CONSTRUCTOR reqLogIn()

#define reqAutoDriving_SERIALIZE OM_NO_OP

#define reqAutoDriving_UNSERIALIZE OM_NO_OP

#define reqAutoDriving_CONSTRUCTOR reqAutoDriving()

#define reqManualDriving_SERIALIZE OM_NO_OP

#define reqManualDriving_UNSERIALIZE OM_NO_OP

#define reqManualDriving_CONSTRUCTOR reqManualDriving()

#define PasswordSuccess_SERIALIZE OM_NO_OP

#define PasswordSuccess_UNSERIALIZE OM_NO_OP

#define PasswordSuccess_CONSTRUCTOR PasswordSuccess()

#define reqLogOut_SERIALIZE OM_NO_OP

#define reqLogOut_UNSERIALIZE OM_NO_OP

#define reqLogOut_CONSTRUCTOR reqLogOut()
//#]

//## package UseCaseAnalysisPkg::Configuration


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_Configuration, UseCaseAnalysisPkg::Configuration)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event reqLogIn()
reqLogIn::reqLogIn(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqLogIn)
    setId(reqLogIn_Configuration_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqLogIn_Configuration_UseCaseAnalysisPkg_id(2801);
//#]

IMPLEMENT_META_EVENT_P(reqLogIn, UseCaseAnalysisPkg_Configuration, UseCaseAnalysisPkg::Configuration, reqLogIn())

//## event reqAutoDriving()
reqAutoDriving::reqAutoDriving(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqAutoDriving)
    setId(reqAutoDriving_Configuration_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqAutoDriving_Configuration_UseCaseAnalysisPkg_id(2802);
//#]

IMPLEMENT_META_EVENT_P(reqAutoDriving, UseCaseAnalysisPkg_Configuration, UseCaseAnalysisPkg::Configuration, reqAutoDriving())

//## event reqManualDriving()
reqManualDriving::reqManualDriving(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqManualDriving)
    setId(reqManualDriving_Configuration_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqManualDriving_Configuration_UseCaseAnalysisPkg_id(2803);
//#]

IMPLEMENT_META_EVENT_P(reqManualDriving, UseCaseAnalysisPkg_Configuration, UseCaseAnalysisPkg::Configuration, reqManualDriving())

//## event PasswordSuccess()
PasswordSuccess::PasswordSuccess(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(PasswordSuccess)
    setId(PasswordSuccess_Configuration_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID PasswordSuccess_Configuration_UseCaseAnalysisPkg_id(2804);
//#]

IMPLEMENT_META_EVENT_P(PasswordSuccess, UseCaseAnalysisPkg_Configuration, UseCaseAnalysisPkg::Configuration, PasswordSuccess())

//## event reqLogOut()
reqLogOut::reqLogOut(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqLogOut)
    setId(reqLogOut_Configuration_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqLogOut_Configuration_UseCaseAnalysisPkg_id(2805);
//#]

IMPLEMENT_META_EVENT_P(reqLogOut, UseCaseAnalysisPkg_Configuration, UseCaseAnalysisPkg::Configuration, reqLogOut())

/*********************************************************************
	File Path	: component_5\SystemConfiguration_Simulation\Configuration.cpp
*********************************************************************/
