/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: SystemConfiguration_Simulation
	Model Element	: SystemConfiguration
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\SystemConfiguration_Simulation\SystemConfiguration.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "SystemConfiguration.h"
//## package UseCaseAnalysisPkg::Configuration

//## class SystemConfiguration
SystemConfiguration::SystemConfiguration(IOxfActive* const theActiveContext) : OMReactive(), PasswordCorrect(0), PasswordDefault(11111) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

SystemConfiguration::~SystemConfiguration(void) {
}

bool SystemConfiguration::checkPassword(void) {
    //#[ operation checkPassword()
    if (PasswordInput == PasswordDefault)
    	return 1 ;
    else
    	return 0 ;
    //#]
}

const bool SystemConfiguration::getPasswordCorrect(void) const {
    return PasswordCorrect;
}

void SystemConfiguration::setPasswordCorrect(const bool p_PasswordCorrect) {
    PasswordCorrect = p_PasswordCorrect;
}

const RhpString SystemConfiguration::getPasswordDefault(void) const {
    return PasswordDefault;
}

void SystemConfiguration::setPasswordDefault(const RhpString p_PasswordDefault) {
    PasswordDefault = p_PasswordDefault;
}

const RhpString SystemConfiguration::getPasswordInput(void) const {
    return PasswordInput;
}

void SystemConfiguration::setPasswordInput(const RhpString p_PasswordInput) {
    PasswordInput = p_PasswordInput;
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
}

void SystemConfiguration::LogIn_entDef(void) {
    rootState_subState = LogIn;
    LogIn_subState = ManualDriving;
    rootState_active = ManualDriving;
}

void SystemConfiguration::rootState_entDef(void) {
    {
        rootState_subState = LogOut;
        rootState_active = LogOut;
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
                    pushNullTransition();
                    rootState_subState = CheckPassword;
                    rootState_active = CheckPassword;
                    //#[ state CheckPassword.(Entry) 
                    checkPassword();
                    //#]
                    res = eventConsumed;
                }
            
        }
        break;
        // State CheckPassword
        case CheckPassword:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 2 
                    if(PasswordCorrect == 0)
                        {
                            popNullTransition();
                            rootState_subState = LogOut;
                            rootState_active = LogOut;
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 3 
                            if(PasswordCorrect ==1)
                                {
                                    popNullTransition();
                                    LogIn_entDef();
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
                    LogIn_subState = AutoDriving;
                    rootState_active = AutoDriving;
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State AutoDriving
        case AutoDriving:
        {
            if(IS_EVENT_TYPE_OF(reqManualDriving_Configuration_UseCaseAnalysisPkg_id) == 1)
                {
                    LogIn_subState = ManualDriving;
                    rootState_active = ManualDriving;
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\SystemConfiguration_Simulation\SystemConfiguration.cpp
*********************************************************************/
