/********************************************************************
	Rhapsody	: 8.4 
	Login		: naika
	Component	: DefaultComponent 
	Configuration 	: UC_DispenseFuel_Simulation
	Model Element	: DispenseFuelPkg
//!	Generated Date	: Sun, 15, Dec 2019  
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\DispenseFuelPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DispenseFuelPkg.h"
//## auto_generated
#include "UC_DispenseFuel.h"
//#[ ignore
#define event_3_SERIALIZE OM_NO_OP

#define event_3_UNSERIALIZE OM_NO_OP

#define event_3_CONSTRUCTOR event_3()

#define event_4_SERIALIZE OM_NO_OP

#define event_4_UNSERIALIZE OM_NO_OP

#define event_4_CONSTRUCTOR event_4()

#define reqDispenseFuel_SERIALIZE OM_NO_OP

#define reqDispenseFuel_UNSERIALIZE OM_NO_OP

#define reqDispenseFuel_CONSTRUCTOR reqDispenseFuel()

#define evPictureTaken_SERIALIZE OM_NO_OP

#define evPictureTaken_UNSERIALIZE OM_NO_OP

#define evPictureTaken_CONSTRUCTOR evPictureTaken()

#define reqAuthorizeFuelling_SERIALIZE OM_NO_OP

#define reqAuthorizeFuelling_UNSERIALIZE OM_NO_OP

#define reqAuthorizeFuelling_CONSTRUCTOR reqAuthorizeFuelling()

#define reqStartFuelling_SERIALIZE OM_NO_OP

#define reqStartFuelling_UNSERIALIZE OM_NO_OP

#define reqStartFuelling_CONSTRUCTOR reqStartFuelling()

#define reqStopFuelling_SERIALIZE OM_NO_OP

#define reqStopFuelling_UNSERIALIZE OM_NO_OP

#define reqStopFuelling_CONSTRUCTOR reqStopFuelling()

#define reqResetPump_SERIALIZE OM_NO_OP

#define reqResetPump_UNSERIALIZE OM_NO_OP

#define reqResetPump_CONSTRUCTOR reqResetPump()
//#]

//## package UseCaseAnalysisPkg::DispenseFuelPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_DispenseFuelPkg, UseCaseAnalysisPkg::DispenseFuelPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event event_3()
event_3::event_3(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(event_3)
    setId(event_3_DispenseFuelPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID event_3_DispenseFuelPkg_UseCaseAnalysisPkg_id(1001);
//#]

IMPLEMENT_META_EVENT_P(event_3, UseCaseAnalysisPkg_DispenseFuelPkg, UseCaseAnalysisPkg::DispenseFuelPkg, event_3())

//## event event_4()
event_4::event_4(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(event_4)
    setId(event_4_DispenseFuelPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID event_4_DispenseFuelPkg_UseCaseAnalysisPkg_id(1002);
//#]

IMPLEMENT_META_EVENT_P(event_4, UseCaseAnalysisPkg_DispenseFuelPkg, UseCaseAnalysisPkg::DispenseFuelPkg, event_4())

//## event reqDispenseFuel()
reqDispenseFuel::reqDispenseFuel(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqDispenseFuel)
    setId(reqDispenseFuel_DispenseFuelPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqDispenseFuel_DispenseFuelPkg_UseCaseAnalysisPkg_id(1003);
//#]

IMPLEMENT_META_EVENT_P(reqDispenseFuel, UseCaseAnalysisPkg_DispenseFuelPkg, UseCaseAnalysisPkg::DispenseFuelPkg, reqDispenseFuel())

//## event evPictureTaken()
evPictureTaken::evPictureTaken(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evPictureTaken)
    setId(evPictureTaken_DispenseFuelPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID evPictureTaken_DispenseFuelPkg_UseCaseAnalysisPkg_id(1004);
//#]

IMPLEMENT_META_EVENT_P(evPictureTaken, UseCaseAnalysisPkg_DispenseFuelPkg, UseCaseAnalysisPkg::DispenseFuelPkg, evPictureTaken())

//## event reqAuthorizeFuelling()
reqAuthorizeFuelling::reqAuthorizeFuelling(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqAuthorizeFuelling)
    setId(reqAuthorizeFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqAuthorizeFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id(1005);
//#]

IMPLEMENT_META_EVENT_P(reqAuthorizeFuelling, UseCaseAnalysisPkg_DispenseFuelPkg, UseCaseAnalysisPkg::DispenseFuelPkg, reqAuthorizeFuelling())

//## event reqStartFuelling()
reqStartFuelling::reqStartFuelling(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqStartFuelling)
    setId(reqStartFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqStartFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id(1006);
//#]

IMPLEMENT_META_EVENT_P(reqStartFuelling, UseCaseAnalysisPkg_DispenseFuelPkg, UseCaseAnalysisPkg::DispenseFuelPkg, reqStartFuelling())

//## event reqStopFuelling()
reqStopFuelling::reqStopFuelling(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqStopFuelling)
    setId(reqStopFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqStopFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id(1007);
//#]

IMPLEMENT_META_EVENT_P(reqStopFuelling, UseCaseAnalysisPkg_DispenseFuelPkg, UseCaseAnalysisPkg::DispenseFuelPkg, reqStopFuelling())

//## event reqResetPump()
reqResetPump::reqResetPump(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqResetPump)
    setId(reqResetPump_DispenseFuelPkg_UseCaseAnalysisPkg_id);
}

//#[ ignore
const IOxfEvent::ID reqResetPump_DispenseFuelPkg_UseCaseAnalysisPkg_id(1008);
//#]

IMPLEMENT_META_EVENT_P(reqResetPump, UseCaseAnalysisPkg_DispenseFuelPkg, UseCaseAnalysisPkg::DispenseFuelPkg, reqResetPump())

/*********************************************************************
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\DispenseFuelPkg.cpp
*********************************************************************/
