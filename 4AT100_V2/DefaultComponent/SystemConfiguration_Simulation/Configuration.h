/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: SystemConfiguration_Simulation
	Model Element	: Configuration
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\SystemConfiguration_Simulation\Configuration.h
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
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    reqLogIn(void);
};

//#[ ignore
extern const IOxfEvent::ID reqLogIn_Configuration_UseCaseAnalysisPkg_id;
//#]

//## event reqAutoDriving()
class reqAutoDriving : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    reqAutoDriving(void);
};

//#[ ignore
extern const IOxfEvent::ID reqAutoDriving_Configuration_UseCaseAnalysisPkg_id;
//#]

//## event reqManualDriving()
class reqManualDriving : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    reqManualDriving(void);
};

//#[ ignore
extern const IOxfEvent::ID reqManualDriving_Configuration_UseCaseAnalysisPkg_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\SystemConfiguration_Simulation\Configuration.h
*********************************************************************/
