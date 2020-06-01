/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DockTruck
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DockTruck.h
*********************************************************************/

#ifndef DockTruck_H
#define DockTruck_H

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
#include "DriveAutonomously.h"
//## link itsDCOperator
class DCOperator;

//## link itsLocSystem
class LocSystem;

//## link itsTruck
class Truck;

//## package UseCaseAnalysisPkg::DriveAutonomously

//## usecase DockTruck
class DockTruck {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDockTruck;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DockTruck();
    
    //## auto_generated
    ~DockTruck();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    LocSystem* getItsLocSystem() const;
    
    //## auto_generated
    void setItsLocSystem(LocSystem* p_LocSystem);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    LocSystem* itsLocSystem;		//## link itsLocSystem
    
    Truck* itsTruck;		//## link itsTruck
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDockTruck : virtual public AOMInstance {
    DECLARE_META(DockTruck, OMAnimatedDockTruck)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DockTruck.h
*********************************************************************/
