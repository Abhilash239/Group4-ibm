/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: DriveAutonomously
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\UC_DockTruck_Simulation\DriveAutonomously.h
*********************************************************************/

#ifndef DriveAutonomously_H
#define DriveAutonomously_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "winsock2.h"
//## auto_generated
#include "stdio.h"
//## auto_generated
#include "windows.h"
//## auto_generated
#include "iostream"
//## auto_generated
#include "Ws2tcpip.h"
//## auto_generated
#include "string.h"
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class UC_ControlPath;

//## auto_generated
class UC_DockTruck;

//#[ ignore
#define evFollowPath_DriveAutonomously_UseCaseAnalysisPkg_id 201
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously



//## event evFollowPath()
class evFollowPath : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFollowPath;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFollowPath();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFollowPath : virtual public AOMEvent {
    DECLARE_META_EVENT(evFollowPath)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_DockTruck_Simulation\DriveAutonomously.h
*********************************************************************/
