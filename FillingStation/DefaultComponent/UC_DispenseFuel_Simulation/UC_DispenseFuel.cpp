/********************************************************************
	Rhapsody	: 8.4 
	Login		: naika
	Component	: DefaultComponent 
	Configuration 	: UC_DispenseFuel_Simulation
	Model Element	: UC_DispenseFuel
//!	Generated Date	: Mon, 16, Dec 2019  
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\UC_DispenseFuel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UC_DispenseFuel.h"
//## link itsCamera
#include "Camera.h"
//## link itsCashier
#include "Cashier.h"
//## link itsMotorist
#include "Motorist.h"
//#[ ignore
#define UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_UC_DispenseFuel_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_addTimestamp_SERIALIZE aomsmethod->addAttribute("picture", x2String(picture));

#define UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_alertNewUser_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_archivePicture_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_enablePump_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_resetPump_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_startPump_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_stopPump_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_updatePrice_SERIALIZE OM_NO_OP

#define OMAnim_UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_setPayAtPump_RhpBoolean_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_payAtPump)

#define OMAnim_UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_setPayAtPump_RhpBoolean_SERIALIZE_RET_VAL
//#]

//## package UseCaseAnalysisPkg::DispenseFuelPkg

//## class UC_DispenseFuel
UC_DispenseFuel::UC_DispenseFuel(IOxfActive* const theActiveContext) : OMReactive(), payAtPump(true
 ), totalPrice(0), unitPrice(1), unitsPumped(0), itsCamera(NULL), itsCashier(NULL), itsMotorist(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_DispenseFuel, UC_DispenseFuel(), 0, UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_UC_DispenseFuel_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
    initWebAdapters();
}

UC_DispenseFuel::~UC_DispenseFuel(void) {
    NOTIFY_DESTRUCTOR(~UC_DispenseFuel, true);
    delete itsWebAdapter;
    cleanUpRelations();
}

void UC_DispenseFuel::addTimestamp(int picture) {
    NOTIFY_OPERATION(addTimestamp, addTimestamp(int), 1, UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_addTimestamp_SERIALIZE);
    //#[ operation addTimestamp(int)
    //#]
}

void UC_DispenseFuel::alertNewUser(void) {
    NOTIFY_OPERATION(alertNewUser, alertNewUser(), 0, UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_alertNewUser_SERIALIZE);
    //#[ operation alertNewUser()
    //#]
}

void UC_DispenseFuel::archivePicture(void) {
    NOTIFY_OPERATION(archivePicture, archivePicture(), 0, UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_archivePicture_SERIALIZE);
    //#[ operation archivePicture()
    //#]
}

void UC_DispenseFuel::enablePump(void) {
    NOTIFY_OPERATION(enablePump, enablePump(), 0, UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_enablePump_SERIALIZE);
    //#[ operation enablePump()
    //#]
}

void UC_DispenseFuel::resetPump(void) {
    NOTIFY_OPERATION(resetPump, resetPump(), 0, UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_resetPump_SERIALIZE);
    //#[ operation resetPump()
    unitsPumped = 0;
    totalPrice = 0;
    //#]
}

void UC_DispenseFuel::startPump(void) {
    NOTIFY_OPERATION(startPump, startPump(), 0, UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_startPump_SERIALIZE);
    //#[ operation startPump()
    //#]
}

void UC_DispenseFuel::stopPump(void) {
    NOTIFY_OPERATION(stopPump, stopPump(), 0, UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_stopPump_SERIALIZE);
    //#[ operation stopPump()
    //#]
}

void UC_DispenseFuel::updatePrice(void) {
    NOTIFY_OPERATION(updatePrice, updatePrice(), 0, UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_updatePrice_SERIALIZE);
    //#[ operation updatePrice()
    unitsPumped ++;
    totalPrice = unitsPumped* unitPrice;
    //#]
}

const RhpBoolean UC_DispenseFuel::getPayAtPump(void) const {
    return payAtPump;
}

void UC_DispenseFuel::setPayAtPump(const RhpBoolean p_payAtPump) {
    payAtPump = p_payAtPump;
    NOTIFY_SET_OPERATION;
}

const int UC_DispenseFuel::getTotalPrice(void) const {
    return totalPrice;
}

void UC_DispenseFuel::setTotalPrice(const int p_totalPrice) {
    totalPrice = p_totalPrice;
}

const int UC_DispenseFuel::getUnitPrice(void) const {
    return unitPrice;
}

void UC_DispenseFuel::setUnitPrice(const int p_unitPrice) {
    unitPrice = p_unitPrice;
}

const int UC_DispenseFuel::getUnitsPumped(void) const {
    return unitsPumped;
}

void UC_DispenseFuel::setUnitsPumped(const int p_unitsPumped) {
    unitsPumped = p_unitsPumped;
}

const Camera* UC_DispenseFuel::getItsCamera(void) const {
    return itsCamera;
}

void UC_DispenseFuel::setItsCamera(Camera* const p_Camera) {
    if(p_Camera != NULL)
        {
            p_Camera->_setItsUC_DispenseFuel(this);
        }
    _setItsCamera(p_Camera);
}

const Cashier* UC_DispenseFuel::getItsCashier(void) const {
    return itsCashier;
}

void UC_DispenseFuel::setItsCashier(Cashier* const p_Cashier) {
    if(p_Cashier != NULL)
        {
            p_Cashier->_setItsUC_DispenseFuel(this);
        }
    _setItsCashier(p_Cashier);
}

const Motorist* UC_DispenseFuel::getItsMotorist(void) const {
    return itsMotorist;
}

void UC_DispenseFuel::setItsMotorist(Motorist* const p_Motorist) {
    if(p_Motorist != NULL)
        {
            p_Motorist->_setItsUC_DispenseFuel(this);
        }
    _setItsMotorist(p_Motorist);
}

bool UC_DispenseFuel::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC_DispenseFuel::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    PumpEnabled_subState = OMNonState;
}

void UC_DispenseFuel::cleanUpRelations(void) {
    if(itsCamera != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCamera");
            const UC_DispenseFuel* p_UC_DispenseFuel = itsCamera->getItsUC_DispenseFuel();
            if(p_UC_DispenseFuel != NULL)
                {
                    itsCamera->__setItsUC_DispenseFuel(NULL);
                }
            itsCamera = NULL;
        }
    if(itsCashier != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCashier");
            const UC_DispenseFuel* p_UC_DispenseFuel = itsCashier->getItsUC_DispenseFuel();
            if(p_UC_DispenseFuel != NULL)
                {
                    itsCashier->__setItsUC_DispenseFuel(NULL);
                }
            itsCashier = NULL;
        }
    if(itsMotorist != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMotorist");
            const UC_DispenseFuel* p_UC_DispenseFuel = itsMotorist->getItsUC_DispenseFuel();
            if(p_UC_DispenseFuel != NULL)
                {
                    itsMotorist->__setItsUC_DispenseFuel(NULL);
                }
            itsMotorist = NULL;
        }
}

//#[ ignore
const ClassWebAdapter * UC_DispenseFuel::getItsWebAdapter(void) const {
    return itsWebAdapter;
}

void UC_DispenseFuel::visitWebAdaptedRelations(void) const {
}

void UC_DispenseFuel::initWebAdapters(void) {
    itsWebAdapter = new ClassWebAdapterTmpl< UC_DispenseFuel >(this, "UC_DispenseFuel");
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< UC_DispenseFuel, event_3 >(this, "event_3"));
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< UC_DispenseFuel, event_4 >(this, "event_4"));
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< UC_DispenseFuel, reqDispenseFuel >(this, "reqDispenseFuel"));
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< UC_DispenseFuel, evPictureTaken >(this, "evPictureTaken"));
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< UC_DispenseFuel, reqAuthorizeFuelling >(this, "reqAuthorizeFuelling"));
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< UC_DispenseFuel, reqStartFuelling >(this, "reqStartFuelling"));
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< UC_DispenseFuel, reqStopFuelling >(this, "reqStopFuelling"));
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< UC_DispenseFuel, reqResetPump >(this, "reqResetPump"));
}

void UC_DispenseFuel::event_3WebWrapper(void) {
    GEN_BY_X(event_3( ), this);
}

void UC_DispenseFuel::event_4WebWrapper(void) {
    GEN_BY_X(event_4( ), this);
}

void UC_DispenseFuel::reqDispenseFuelWebWrapper(void) {
    GEN_BY_X(reqDispenseFuel( ), this);
}

void UC_DispenseFuel::evPictureTakenWebWrapper(void) {
    GEN_BY_X(evPictureTaken( ), this);
}

void UC_DispenseFuel::reqAuthorizeFuellingWebWrapper(void) {
    GEN_BY_X(reqAuthorizeFuelling( ), this);
}

void UC_DispenseFuel::reqStartFuellingWebWrapper(void) {
    GEN_BY_X(reqStartFuelling( ), this);
}

void UC_DispenseFuel::reqStopFuellingWebWrapper(void) {
    GEN_BY_X(reqStopFuelling( ), this);
}

void UC_DispenseFuel::reqResetPumpWebWrapper(void) {
    GEN_BY_X(reqResetPump( ), this);
}
//#]

void UC_DispenseFuel::__setItsCamera(Camera* const p_Camera) {
    itsCamera = p_Camera;
    if(p_Camera != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCamera", p_Camera, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCamera");
        }
}

void UC_DispenseFuel::_setItsCamera(Camera* const p_Camera) {
    if(itsCamera != NULL)
        {
            itsCamera->__setItsUC_DispenseFuel(NULL);
        }
    __setItsCamera(p_Camera);
}

void UC_DispenseFuel::_clearItsCamera(void) {
    NOTIFY_RELATION_CLEARED("itsCamera");
    itsCamera = NULL;
}

void UC_DispenseFuel::__setItsCashier(Cashier* const p_Cashier) {
    itsCashier = p_Cashier;
    if(p_Cashier != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCashier", p_Cashier, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCashier");
        }
}

void UC_DispenseFuel::_setItsCashier(Cashier* const p_Cashier) {
    if(itsCashier != NULL)
        {
            itsCashier->__setItsUC_DispenseFuel(NULL);
        }
    __setItsCashier(p_Cashier);
}

void UC_DispenseFuel::_clearItsCashier(void) {
    NOTIFY_RELATION_CLEARED("itsCashier");
    itsCashier = NULL;
}

void UC_DispenseFuel::__setItsMotorist(Motorist* const p_Motorist) {
    itsMotorist = p_Motorist;
    if(p_Motorist != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMotorist", p_Motorist, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMotorist");
        }
}

void UC_DispenseFuel::_setItsMotorist(Motorist* const p_Motorist) {
    if(itsMotorist != NULL)
        {
            itsMotorist->__setItsUC_DispenseFuel(NULL);
        }
    __setItsMotorist(p_Motorist);
}

void UC_DispenseFuel::_clearItsMotorist(void) {
    NOTIFY_RELATION_CLEARED("itsMotorist");
    itsMotorist = NULL;
}

void UC_DispenseFuel::PumpEnabled_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.PumpEnabled");
    rootState_subState = PumpEnabled;
    //#[ state PumpEnabled.(Entry) 
    enablePump();
    //#]
    NOTIFY_TRANSITION_STARTED("ROOT.PumpEnabled.2");
    NOTIFY_STATE_ENTERED("ROOT.PumpEnabled.ROOT.PumpEnabled.PumpOff");
    PumpEnabled_subState = PumpOff;
    rootState_active = PumpOff;
    //#[ state PumpEnabled.PumpEnabled.PumpOff.(Entry) 
    stopPump();
    //#]
    NOTIFY_TRANSITION_TERMINATED("ROOT.PumpEnabled.2");
}

IOxfReactive::TakeEventStatus UC_DispenseFuel::PumpEnabled_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(reqResetPump_DispenseFuelPkg_UseCaseAnalysisPkg_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("3");
            switch (PumpEnabled_subState) {
                // State PumpOff
                case PumpOff:
                {
                    NOTIFY_STATE_EXITED("ROOT.PumpEnabled.ROOT.PumpEnabled.PumpOff");
                }
                break;
                // State PumpActive
                case PumpActive:
                {
                    NOTIFY_STATE_EXITED("ROOT.PumpEnabled.ROOT.PumpEnabled.PumpActive");
                }
                break;
                default:
                    break;
            }
            PumpEnabled_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.PumpEnabled");
            //#[ transition 3 
            resetPump();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.PumpDisabled");
            rootState_subState = PumpDisabled;
            rootState_active = PumpDisabled;
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    
    return res;
}

void UC_DispenseFuel::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.PumpDisabled");
        rootState_subState = PumpDisabled;
        rootState_active = PumpDisabled;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UC_DispenseFuel::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State PumpDisabled
        case PumpDisabled:
        {
            if(IS_EVENT_TYPE_OF(reqDispenseFuel_DispenseFuelPkg_UseCaseAnalysisPkg_id) == 1)
                {
                    //## transition 4 
                    if( payAtPump)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_STATE_EXITED("ROOT.PumpDisabled");
                            //#[ transition 1 
                            alertNewUser();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.WaitingForCamera");
                            rootState_subState = WaitingForCamera;
                            rootState_active = WaitingForCamera;
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_STATE_EXITED("ROOT.PumpDisabled");
                            //#[ transition 1 
                            alertNewUser();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.WaitingForBoth");
                            rootState_subState = WaitingForBoth;
                            rootState_active = WaitingForBoth;
                            NOTIFY_TRANSITION_TERMINATED("5");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State WaitingForCamera
        case WaitingForCamera:
        {
            if(IS_EVENT_TYPE_OF(evPictureTaken_DispenseFuelPkg_UseCaseAnalysisPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.WaitingForCamera");
                    //#[ transition 2 
                    
                    addTimestamp(0);
                    archivePicture();
                    //#]
                    PumpEnabled_entDef();
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State PumpOff
        case PumpOff:
        {
            if(IS_EVENT_TYPE_OF(reqStartFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.PumpEnabled.0");
                    NOTIFY_STATE_EXITED("ROOT.PumpEnabled.ROOT.PumpEnabled.PumpOff");
                    NOTIFY_STATE_ENTERED("ROOT.PumpEnabled.ROOT.PumpEnabled.PumpActive");
                    PumpEnabled_subState = PumpActive;
                    rootState_active = PumpActive;
                    //#[ state PumpEnabled.PumpEnabled.PumpActive.(Entry) 
                    startPump();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("ROOT.PumpEnabled.0");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = PumpEnabled_handleEvent();
                }
        }
        break;
        // State PumpActive
        case PumpActive:
        {
            if(IS_EVENT_TYPE_OF(reqStopFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.PumpEnabled.1");
                    NOTIFY_STATE_EXITED("ROOT.PumpEnabled.ROOT.PumpEnabled.PumpActive");
                    NOTIFY_STATE_ENTERED("ROOT.PumpEnabled.ROOT.PumpEnabled.PumpOff");
                    PumpEnabled_subState = PumpOff;
                    rootState_active = PumpOff;
                    //#[ state PumpEnabled.PumpEnabled.PumpOff.(Entry) 
                    stopPump();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("ROOT.PumpEnabled.1");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = PumpEnabled_handleEvent();
                }
        }
        break;
        // State WaitingForCashier
        case WaitingForCashier:
        {
            if(IS_EVENT_TYPE_OF(reqAuthorizeFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.WaitingForCashier");
                    PumpEnabled_entDef();
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State WaitingForBoth
        case WaitingForBoth:
        {
            if(IS_EVENT_TYPE_OF(reqAuthorizeFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.WaitingForBoth");
                    NOTIFY_STATE_ENTERED("ROOT.WaitingForCamera");
                    rootState_subState = WaitingForCamera;
                    rootState_active = WaitingForCamera;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(evPictureTaken_DispenseFuelPkg_UseCaseAnalysisPkg_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("7");
                        NOTIFY_STATE_EXITED("ROOT.WaitingForBoth");
                        NOTIFY_STATE_ENTERED("ROOT.WaitingForCashier");
                        rootState_subState = WaitingForCashier;
                        rootState_active = WaitingForCashier;
                        NOTIFY_TRANSITION_TERMINATED("7");
                        res = eventConsumed;
                    }
                }
                
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_DispenseFuel::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("payAtPump", x2String(myReal->payAtPump));
    aomsAttributes->addAttribute("unitPrice", x2String(myReal->unitPrice));
    aomsAttributes->addAttribute("totalPrice", x2String(myReal->totalPrice));
    aomsAttributes->addAttribute("unitsPumped", x2String(myReal->unitsPumped));
}

void OMAnimatedUC_DispenseFuel::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCashier", false, true);
    if(myReal->itsCashier)
        {
            aomsRelations->ADD_ITEM(myReal->itsCashier);
        }
    aomsRelations->addRelation("itsCamera", false, true);
    if(myReal->itsCamera)
        {
            aomsRelations->ADD_ITEM(myReal->itsCamera);
        }
    aomsRelations->addRelation("itsMotorist", false, true);
    if(myReal->itsMotorist)
        {
            aomsRelations->ADD_ITEM(myReal->itsMotorist);
        }
}

void OMAnimatedUC_DispenseFuel::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UC_DispenseFuel::PumpDisabled:
        {
            PumpDisabled_serializeStates(aomsState);
        }
        break;
        case UC_DispenseFuel::WaitingForCamera:
        {
            WaitingForCamera_serializeStates(aomsState);
        }
        break;
        case UC_DispenseFuel::PumpEnabled:
        {
            PumpEnabled_serializeStates(aomsState);
        }
        break;
        case UC_DispenseFuel::WaitingForCashier:
        {
            WaitingForCashier_serializeStates(aomsState);
        }
        break;
        case UC_DispenseFuel::WaitingForBoth:
        {
            WaitingForBoth_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_DispenseFuel::WaitingForCashier_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WaitingForCashier");
}

void OMAnimatedUC_DispenseFuel::WaitingForCamera_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WaitingForCamera");
}

void OMAnimatedUC_DispenseFuel::WaitingForBoth_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WaitingForBoth");
}

void OMAnimatedUC_DispenseFuel::PumpEnabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PumpEnabled");
    switch (myReal->PumpEnabled_subState) {
        case UC_DispenseFuel::PumpOff:
        {
            PumpOff_serializeStates(aomsState);
        }
        break;
        case UC_DispenseFuel::PumpActive:
        {
            PumpActive_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_DispenseFuel::PumpOff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PumpEnabled.ROOT.PumpEnabled.PumpOff");
}

void OMAnimatedUC_DispenseFuel::PumpActive_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PumpEnabled.ROOT.PumpEnabled.PumpActive");
}

void OMAnimatedUC_DispenseFuel::PumpDisabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PumpDisabled");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC_DispenseFuel, UseCaseAnalysisPkg_DispenseFuelPkg, UseCaseAnalysisPkg::DispenseFuelPkg, false, OMAnimatedUC_DispenseFuel)

IMPLEMENT_META_OP(OMAnimatedUC_DispenseFuel, UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_setPayAtPump_RhpBoolean, "setPayAtPump", FALSE, "setPayAtPump(RhpBoolean)", 1)

IMPLEMENT_OP_CALL(UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_setPayAtPump_RhpBoolean, UC_DispenseFuel, setPayAtPump(p_payAtPump), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\UC_DispenseFuel.cpp
*********************************************************************/
