/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: SystemConfiguration_Simulation
	Model Element	: SystemConfiguration
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\SystemConfiguration_Simulation\SystemConfiguration.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "SystemConfiguration.h"
//## event reqDock()
#include "DriveAutonomously.h"
//## package UseCaseAnalysisPkg::Configuration

//## class SystemConfiguration
SystemConfiguration::SystemConfiguration(IOxfActive* const theActiveContext) : OMReactive(), AutoDrivingMode(0), ManualDrivingMode(0), PasswordCorrect(0), PasswordDefault(11111), PasswordInput(11111) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

SystemConfiguration::~SystemConfiguration(void) {
}

bool SystemConfiguration::checkPassword(void) {
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
}

const bool SystemConfiguration::getManualDrivingMode(void) const {
    return ManualDrivingMode;
}

void SystemConfiguration::setManualDrivingMode(const bool p_ManualDrivingMode) {
    ManualDrivingMode = p_ManualDrivingMode;
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
    rootState_subState = LogIn;
    LogIn_subState = ManualDriving;
    rootState_active = ManualDriving;
    //#[ state LogIn.ManualDriving.(Entry) 
    ManualDrivingMode = 1;
    AutoDrivingMode = 0;
    //#]
}

IOxfReactive::TakeEventStatus SystemConfiguration::LogIn_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(reqLogOut_Configuration_UseCaseAnalysisPkg_id) == 1)
        {
            switch (LogIn_subState) {
                // State ManualDriving
                case ManualDriving:
                {
                    //#[ state LogIn.ManualDriving.(Exit) 
                     ManualDrivingMode = 0;
                    AutoDrivingMode = 1;
                    //#]
                }
                break;
                // State AutoDriving
                case AutoDriving:
                {
                    // State sendaction_6
                    
                    AutoDriving_subState = OMNonState;
                }
                break;
                default:
                    break;
            }
            LogIn_subState = OMNonState;
            rootState_subState = LogOut;
            rootState_active = LogOut;
            res = eventConsumed;
        }
    
    return res;
}

void SystemConfiguration::AutoDriving_entDef(void) {
    LogIn_subState = AutoDriving;
    AutoDriving_subState = sendaction_6;
    rootState_active = sendaction_6;
    //#[ state LogIn.AutoDriving.sendaction_6.(Entry) 
    GEN(reqDock);
    //#]
}

IOxfReactive::TakeEventStatus SystemConfiguration::AutoDriving_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(reqManualDriving_Configuration_UseCaseAnalysisPkg_id) == 1)
        {
            // State sendaction_6
            
            AutoDriving_subState = OMNonState;
            LogIn_subState = ManualDriving;
            rootState_active = ManualDriving;
            //#[ state LogIn.ManualDriving.(Entry) 
            ManualDrivingMode = 1;
            AutoDrivingMode = 0;
            //#]
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
                    //## transition 1 
                    if(PasswordCorrect == 0)
                        {
                            //#[ state LogOut.(Exit) 
                              checkPassword();
                            //#]
                            rootState_subState = LogOut;
                            rootState_active = LogOut;
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 2 
                            if(PasswordCorrect ==1)
                                {
                                    //#[ state LogOut.(Exit) 
                                      checkPassword();
                                    //#]
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
                    //#[ state LogIn.ManualDriving.(Exit) 
                     ManualDrivingMode = 0;
                    AutoDrivingMode = 1;
                    //#]
                    AutoDriving_entDef();
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

/*********************************************************************
	File Path	: DefaultComponent\SystemConfiguration_Simulation\SystemConfiguration.cpp
*********************************************************************/
