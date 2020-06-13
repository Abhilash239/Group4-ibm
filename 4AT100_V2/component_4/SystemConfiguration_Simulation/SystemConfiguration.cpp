/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_4 
	Configuration 	: SystemConfiguration_Simulation
	Model Element	: SystemConfiguration
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_4\SystemConfiguration_Simulation\SystemConfiguration.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SystemConfiguration.h"
//## event reqDock()
#include "DriveAutonomously.h"
//#[ ignore
#define UseCaseAnalysisPkg_Configuration_SystemConfiguration_SystemConfiguration_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_Configuration_SystemConfiguration_checkPassword_SERIALIZE OM_NO_OP

#define OMAnim_UseCaseAnalysisPkg_Configuration_SystemConfiguration_setPasswordInput_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_PasswordInput)

#define OMAnim_UseCaseAnalysisPkg_Configuration_SystemConfiguration_setPasswordInput_int_SERIALIZE_RET_VAL
//#]

//## package UseCaseAnalysisPkg::Configuration

//## class SystemConfiguration
SystemConfiguration::SystemConfiguration(IOxfActive* const theActiveContext) : OMReactive(), AutoDrivingMode(0), ManualDrivingMode(0), PasswordCorrect(0), PasswordDefault(11111), PasswordInput(11111) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SystemConfiguration, SystemConfiguration(), 0, UseCaseAnalysisPkg_Configuration_SystemConfiguration_SystemConfiguration_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

SystemConfiguration::~SystemConfiguration(void) {
    NOTIFY_DESTRUCTOR(~SystemConfiguration, true);
}

bool SystemConfiguration::checkPassword(void) {
    NOTIFY_OPERATION(checkPassword, checkPassword(), 0, UseCaseAnalysisPkg_Configuration_SystemConfiguration_checkPassword_SERIALIZE);
    //#[ operation checkPassword()
    if (PasswordInput == PasswordDefault)
    	{PasswordCorrect = 1 ;  
    	return PasswordCorrect;}
    else
    	{PasswordCorrect = 0 ;    
    	return PasswordCorrect;}
    //#]
}

const bool SystemConfiguration::getAutoDrivingMode(void) const {
    return AutoDrivingMode;
}

void SystemConfiguration::setAutoDrivingMode(const bool p_AutoDrivingMode) {
    AutoDrivingMode = p_AutoDrivingMode;
    NOTIFY_SET_OPERATION;
}

const bool SystemConfiguration::getManualDrivingMode(void) const {
    return ManualDrivingMode;
}

void SystemConfiguration::setManualDrivingMode(const bool p_ManualDrivingMode) {
    ManualDrivingMode = p_ManualDrivingMode;
    NOTIFY_SET_OPERATION;
}

const bool SystemConfiguration::getPasswordCorrect(void) const {
    return PasswordCorrect;
}

void SystemConfiguration::setPasswordCorrect(const bool p_PasswordCorrect) {
    PasswordCorrect = p_PasswordCorrect;
}

const int SystemConfiguration::getPasswordDefault(void) const {
    return PasswordDefault;
}

void SystemConfiguration::setPasswordDefault(const int p_PasswordDefault) {
    PasswordDefault = p_PasswordDefault;
}

const int SystemConfiguration::getPasswordInput(void) const {
    return PasswordInput;
}

void SystemConfiguration::setPasswordInput(const int p_PasswordInput) {
    PasswordInput = p_PasswordInput;
    NOTIFY_SET_OPERATION;
}

bool SystemConfiguration::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void SystemConfiguration::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    LogIn_subState = OMNonState;
    AutoDriving_subState = OMNonState;
}

void SystemConfiguration::LogIn_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.LogIn");
    rootState_subState = LogIn;
    NOTIFY_TRANSITION_STARTED("5");
    NOTIFY_STATE_ENTERED("ROOT.LogIn.ManualDriving");
    LogIn_subState = ManualDriving;
    rootState_active = ManualDriving;
    //#[ state LogIn.ManualDriving.(Entry) 
    ManualDrivingMode = 1;
    AutoDrivingMode = 0;
    //#]
    NOTIFY_TRANSITION_TERMINATED("5");
}

IOxfReactive::TakeEventStatus SystemConfiguration::LogIn_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(reqLogOut_Configuration_UseCaseAnalysisPkg_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("6");
            switch (LogIn_subState) {
                // State ManualDriving
                case ManualDriving:
                {
                    //#[ state LogIn.ManualDriving.(Exit) 
                     ManualDrivingMode = 0;
                    AutoDrivingMode = 1;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.LogIn.ManualDriving");
                }
                break;
                // State AutoDriving
                case AutoDriving:
                {
                    AutoDriving_exit();
                }
                break;
                default:
                    break;
            }
            LogIn_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.LogIn");
            NOTIFY_STATE_ENTERED("ROOT.LogOut");
            rootState_subState = LogOut;
            rootState_active = LogOut;
            NOTIFY_TRANSITION_TERMINATED("6");
            res = eventConsumed;
        }
    
    return res;
}

void SystemConfiguration::AutoDriving_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.LogIn.AutoDriving");
    LogIn_subState = AutoDriving;
    NOTIFY_STATE_ENTERED("ROOT.LogIn.AutoDriving.sendaction_6");
    AutoDriving_subState = sendaction_6;
    rootState_active = sendaction_6;
    //#[ state LogIn.AutoDriving.sendaction_6.(Entry) 
    GEN(reqDock);
    //#]
}

void SystemConfiguration::AutoDriving_exit(void) {
    // State sendaction_6
    if(AutoDriving_subState == sendaction_6)
        {
            NOTIFY_STATE_EXITED("ROOT.LogIn.AutoDriving.sendaction_6");
        }
    AutoDriving_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.LogIn.AutoDriving");
}

IOxfReactive::TakeEventStatus SystemConfiguration::AutoDriving_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(reqManualDriving_Configuration_UseCaseAnalysisPkg_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("4");
            AutoDriving_exit();
            NOTIFY_STATE_ENTERED("ROOT.LogIn.ManualDriving");
            LogIn_subState = ManualDriving;
            rootState_active = ManualDriving;
            //#[ state LogIn.ManualDriving.(Entry) 
            ManualDrivingMode = 1;
            AutoDrivingMode = 0;
            //#]
            NOTIFY_TRANSITION_TERMINATED("4");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = LogIn_handleEvent();
        }
    return res;
}

void SystemConfiguration::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.LogOut");
        rootState_subState = LogOut;
        rootState_active = LogOut;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SystemConfiguration::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State LogOut
        case LogOut:
        {
            if(IS_EVENT_TYPE_OF(reqLogIn_Configuration_UseCaseAnalysisPkg_id) == 1)
                {
                    //## transition 1 
                    if(PasswordCorrect == 0)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            //#[ state LogOut.(Exit) 
                              checkPassword();
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.LogOut");
                            NOTIFY_STATE_ENTERED("ROOT.LogOut");
                            rootState_subState = LogOut;
                            rootState_active = LogOut;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 2 
                            if(PasswordCorrect ==1)
                                {
                                    NOTIFY_TRANSITION_STARTED("2");
                                    //#[ state LogOut.(Exit) 
                                      checkPassword();
                                    //#]
                                    NOTIFY_STATE_EXITED("ROOT.LogOut");
                                    LogIn_entDef();
                                    NOTIFY_TRANSITION_TERMINATED("2");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        // State ManualDriving
        case ManualDriving:
        {
            if(IS_EVENT_TYPE_OF(reqAutoDriving_Configuration_UseCaseAnalysisPkg_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    //#[ state LogIn.ManualDriving.(Exit) 
                     ManualDrivingMode = 0;
                    AutoDrivingMode = 1;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.LogIn.ManualDriving");
                    AutoDriving_entDef();
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = LogIn_handleEvent();
                }
        }
        break;
        // State sendaction_6
        case sendaction_6:
        {
            res = AutoDriving_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSystemConfiguration::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("PasswordDefault", x2String(myReal->PasswordDefault));
    aomsAttributes->addAttribute("PasswordInput", x2String(myReal->PasswordInput));
    aomsAttributes->addAttribute("PasswordCorrect", x2String(myReal->PasswordCorrect));
    aomsAttributes->addAttribute("ManualDrivingMode", x2String(myReal->ManualDrivingMode));
    aomsAttributes->addAttribute("AutoDrivingMode", x2String(myReal->AutoDrivingMode));
}

void OMAnimatedSystemConfiguration::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SystemConfiguration::LogOut:
        {
            LogOut_serializeStates(aomsState);
        }
        break;
        case SystemConfiguration::LogIn:
        {
            LogIn_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSystemConfiguration::LogOut_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LogOut");
}

void OMAnimatedSystemConfiguration::LogIn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LogIn");
    switch (myReal->LogIn_subState) {
        case SystemConfiguration::ManualDriving:
        {
            ManualDriving_serializeStates(aomsState);
        }
        break;
        case SystemConfiguration::AutoDriving:
        {
            AutoDriving_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSystemConfiguration::ManualDriving_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LogIn.ManualDriving");
}

void OMAnimatedSystemConfiguration::AutoDriving_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LogIn.AutoDriving");
    if(myReal->AutoDriving_subState == SystemConfiguration::sendaction_6)
        {
            sendaction_6_serializeStates(aomsState);
        }
}

void OMAnimatedSystemConfiguration::sendaction_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LogIn.AutoDriving.sendaction_6");
}
//#]

IMPLEMENT_REACTIVE_META_P(SystemConfiguration, UseCaseAnalysisPkg_Configuration, UseCaseAnalysisPkg::Configuration, false, OMAnimatedSystemConfiguration)

IMPLEMENT_META_OP(OMAnimatedSystemConfiguration, UseCaseAnalysisPkg_Configuration_SystemConfiguration_setPasswordInput_int, "setPasswordInput", FALSE, "setPasswordInput(int)", 1)

IMPLEMENT_OP_CALL(UseCaseAnalysisPkg_Configuration_SystemConfiguration_setPasswordInput_int, SystemConfiguration, setPasswordInput(p_PasswordInput), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: component_4\SystemConfiguration_Simulation\SystemConfiguration.cpp
*********************************************************************/
