/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: AdjustHVACandLighting
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\AdjustHVACandLighting.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AdjustHVACandLighting.h"
//## auto_generated
#include "UC_AdjustHVAC.h"
//## auto_generated
#include "UC_AdjustLighting.h"
//#[ ignore
#define reqAdjustHVAC_SERIALIZE OM_NO_OP

#define reqAdjustHVAC_UNSERIALIZE OM_NO_OP

#define reqAdjustHVAC_CONSTRUCTOR reqAdjustHVAC()

#define reqAdjustLighting_SERIALIZE OM_NO_OP

#define reqAdjustLighting_UNSERIALIZE OM_NO_OP

#define reqAdjustLighting_CONSTRUCTOR reqAdjustLighting()
//#]

//## package UseCaseAnalysisPkg::AdjustHVACandLighting


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_AdjustHVACandLighting, UseCaseAnalysisPkg::AdjustHVACandLighting)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event reqAdjustHVAC()
reqAdjustHVAC::reqAdjustHVAC() {
    NOTIFY_EVENT_CONSTRUCTOR(reqAdjustHVAC)
    setId(reqAdjustHVAC_AdjustHVACandLighting_UseCaseAnalysisPkg_id);
}

bool reqAdjustHVAC::isTypeOf(const short id) const {
    return (reqAdjustHVAC_AdjustHVACandLighting_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqAdjustHVAC, UseCaseAnalysisPkg_AdjustHVACandLighting, UseCaseAnalysisPkg::AdjustHVACandLighting, reqAdjustHVAC())

//## event reqAdjustLighting()
reqAdjustLighting::reqAdjustLighting() {
    NOTIFY_EVENT_CONSTRUCTOR(reqAdjustLighting)
    setId(reqAdjustLighting_AdjustHVACandLighting_UseCaseAnalysisPkg_id);
}

bool reqAdjustLighting::isTypeOf(const short id) const {
    return (reqAdjustLighting_AdjustHVACandLighting_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqAdjustLighting, UseCaseAnalysisPkg_AdjustHVACandLighting, UseCaseAnalysisPkg::AdjustHVACandLighting, reqAdjustLighting())

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\AdjustHVACandLighting.cpp
*********************************************************************/
