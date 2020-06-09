/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: SystemConfiguration_Simulation
	Model Element	: SystemConfiguration
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\SystemConfiguration_Simulation\SystemConfiguration.h
*********************************************************************/

#ifndef SystemConfiguration_H
#define SystemConfiguration_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Configuration.h"
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## package UseCaseAnalysisPkg::Configuration

//## class SystemConfiguration
class SystemConfiguration : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    explicit SystemConfiguration(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~SystemConfiguration(void);
    
    ////    Operations    ////
    
    //## operation checkPassword()
    virtual bool checkPassword(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const bool getPasswordCorrect(void) const;
    
    //## auto_generated
    void setPasswordCorrect(const bool p_PasswordCorrect);
    
    //## auto_generated
    const RhpString getPasswordDefault(void) const;
    
    //## auto_generated
    void setPasswordDefault(const RhpString p_PasswordDefault);
    
    //## auto_generated
    const RhpString getPasswordInput(void) const;
    
    //## auto_generated
    void setPasswordInput(const RhpString p_PasswordInput);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    bool PasswordCorrect;		//## attribute PasswordCorrect
    
    RhpString PasswordDefault;		//## attribute PasswordDefault
    
    RhpString PasswordInput;		//## attribute PasswordInput
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // LogOut:
    //## statechart_method
    inline RhpBoolean LogOut_IN(void) const;
    
    // LogIn:
    //## statechart_method
    inline RhpBoolean LogIn_IN(void) const;
    
    //## statechart_method
    void LogIn_entDef(void);
    
    // ManualDriving:
    //## statechart_method
    inline RhpBoolean ManualDriving_IN(void) const;
    
    // AutoDriving:
    //## statechart_method
    inline RhpBoolean AutoDriving_IN(void) const;
    
    // CheckPassword:
    //## statechart_method
    inline RhpBoolean CheckPassword_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum SystemConfiguration_Enum {
        OMNonState = 0,
        LogOut = 1,
        LogIn = 2,
        ManualDriving = 3,
        AutoDriving = 4,
        CheckPassword = 5
    };
//#]

private :

//#[ ignore
    SystemConfiguration_Enum rootState_subState;
    
    SystemConfiguration_Enum rootState_active;
    
    SystemConfiguration_Enum LogIn_subState;
//#]
};

inline RhpBoolean SystemConfiguration::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SystemConfiguration::LogOut_IN(void) const {
    return rootState_subState == LogOut;
}

inline RhpBoolean SystemConfiguration::LogIn_IN(void) const {
    return rootState_subState == LogIn;
}

inline RhpBoolean SystemConfiguration::ManualDriving_IN(void) const {
    return LogIn_subState == ManualDriving;
}

inline RhpBoolean SystemConfiguration::AutoDriving_IN(void) const {
    return LogIn_subState == AutoDriving;
}

inline RhpBoolean SystemConfiguration::CheckPassword_IN(void) const {
    return rootState_subState == CheckPassword;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\SystemConfiguration_Simulation\SystemConfiguration.h
*********************************************************************/
