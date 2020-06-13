/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_5 
	Configuration 	: SystemConfiguration_Simulation
	Model Element	: Configuration
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_5\SystemConfiguration_Simulation\Configuration.h
*********************************************************************/

#ifndef Configuration_H
#define Configuration_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
class SystemConfiguration;

//## package UseCaseAnalysisPkg::Configuration



//## event reqLogIn()
class reqLogIn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqLogIn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqLogIn(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqLogIn : virtual public AOMEvent {
    DECLARE_META_EVENT(reqLogIn)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqLogIn_Configuration_UseCaseAnalysisPkg_id;
//#]

//## event reqAutoDriving()
class reqAutoDriving : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqAutoDriving;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqAutoDriving(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqAutoDriving : virtual public AOMEvent {
    DECLARE_META_EVENT(reqAutoDriving)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqAutoDriving_Configuration_UseCaseAnalysisPkg_id;
//#]

//## event reqManualDriving()
class reqManualDriving : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqManualDriving;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqManualDriving(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqManualDriving : virtual public AOMEvent {
    DECLARE_META_EVENT(reqManualDriving)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqManualDriving_Configuration_UseCaseAnalysisPkg_id;
//#]

//## event PasswordSuccess()
class PasswordSuccess : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPasswordSuccess;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PasswordSuccess(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPasswordSuccess : virtual public AOMEvent {
    DECLARE_META_EVENT(PasswordSuccess)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID PasswordSuccess_Configuration_UseCaseAnalysisPkg_id;
//#]

//## event reqLogOut()
class reqLogOut : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqLogOut;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqLogOut(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqLogOut : virtual public AOMEvent {
    DECLARE_META_EVENT(reqLogOut)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqLogOut_Configuration_UseCaseAnalysisPkg_id;
//#]

#endif
/*********************************************************************
	File Path	: component_5\SystemConfiguration_Simulation\Configuration.h
*********************************************************************/
