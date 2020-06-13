/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_4 
	Configuration 	: SystemConfiguration_Simulation
	Model Element	: SystemConfiguration
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_4\SystemConfiguration_Simulation\SystemConfiguration.h
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
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//#[ ignore
#define OMAnim_UseCaseAnalysisPkg_Configuration_SystemConfiguration_setPasswordInput_int_ARGS_DECLARATION int p_PasswordInput;
//#]

//## package UseCaseAnalysisPkg::Configuration

//## class SystemConfiguration
class SystemConfiguration : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSystemConfiguration;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SystemConfiguration(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~SystemConfiguration(void);
    
    ////    Operations    ////
    
    //## operation checkPassword()
    virtual bool checkPassword(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const bool getAutoDrivingMode(void) const;
    
    //## auto_generated
    void setAutoDrivingMode(const bool p_AutoDrivingMode);
    
    //## auto_generated
    const bool getManualDrivingMode(void) const;
    
    //## auto_generated
    void setManualDrivingMode(const bool p_ManualDrivingMode);
    
    //## auto_generated
    const bool getPasswordCorrect(void) const;
    
    //## auto_generated
    void setPasswordCorrect(const bool p_PasswordCorrect);
    
    //## auto_generated
    const int getPasswordDefault(void) const;
    
    //## auto_generated
    void setPasswordDefault(const int p_PasswordDefault);
    
    //## auto_generated
    const int getPasswordInput(void) const;
    
    //## auto_generated
    void setPasswordInput(const int p_PasswordInput);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    bool AutoDrivingMode;		//## attribute AutoDrivingMode
    
    bool ManualDrivingMode;		//## attribute ManualDrivingMode
    
    bool PasswordCorrect;		//## attribute PasswordCorrect
    
    int PasswordDefault;		//## attribute PasswordDefault
    
    int PasswordInput;		//## attribute PasswordInput
    
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
    
    //## statechart_method
    IOxfReactive::TakeEventStatus LogIn_handleEvent(void);
    
    // ManualDriving:
    //## statechart_method
    inline RhpBoolean ManualDriving_IN(void) const;
    
    // AutoDriving:
    //## statechart_method
    inline RhpBoolean AutoDriving_IN(void) const;
    
    //## statechart_method
    void AutoDriving_entDef(void);
    
    //## statechart_method
    void AutoDriving_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus AutoDriving_handleEvent(void);
    
    // sendaction_6:
    //## statechart_method
    inline RhpBoolean sendaction_6_IN(void) const;

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
        sendaction_6 = 5
    };
//#]

private :

//#[ ignore
    SystemConfiguration_Enum rootState_subState;
    
    SystemConfiguration_Enum rootState_active;
    
    SystemConfiguration_Enum LogIn_subState;
    
    SystemConfiguration_Enum AutoDriving_subState;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(UseCaseAnalysisPkg_Configuration_SystemConfiguration_setPasswordInput_int)

//#[ ignore
class OMAnimatedSystemConfiguration : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SystemConfiguration, OMAnimatedSystemConfiguration)
    
    DECLARE_META_OP(UseCaseAnalysisPkg_Configuration_SystemConfiguration_setPasswordInput_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LogOut_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LogIn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ManualDriving_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AutoDriving_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_6_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

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

inline RhpBoolean SystemConfiguration::sendaction_6_IN(void) const {
    return AutoDriving_subState == sendaction_6;
}

#endif
/*********************************************************************
	File Path	: component_4\SystemConfiguration_Simulation\SystemConfiguration.h
*********************************************************************/
