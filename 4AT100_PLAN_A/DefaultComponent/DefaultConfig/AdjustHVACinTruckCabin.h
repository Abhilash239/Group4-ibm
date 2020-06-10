/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AdjustHVACinTruckCabin
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\AdjustHVACinTruckCabin.h
*********************************************************************/

#ifndef AdjustHVACinTruckCabin_H
#define AdjustHVACinTruckCabin_H

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
#include "AdjustHVACandLighting.h"
//## link itsDriver
class Driver;

//## link itsTruck
class Truck;

//## package UseCaseAnalysisPkg::AdjustHVACandLighting

//## usecase AdjustHVACinTruckCabin
// Actors: 
// Truck, driver
// 
// Pre-condition:
// Driver logged in 
// 
// Trigger:
// The driver inputs a value for HVAC setting
// 
// Post-condition:
// HVAC is adjusted according to the input
// 
// Main Scenario:
// 1)ADS receives the input from driver through GUI
// 2)ADS sends signals to truck to adjust the HVAC
// 3)Truck acknowledges the receipt 
// 4)Truck adjust the HVAC 
// 
// Alternative Scenario:
// 3') ADS sends an error message to driver
class AdjustHVACinTruckCabin {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAdjustHVACinTruckCabin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AdjustHVACinTruckCabin();
    
    //## auto_generated
    ~AdjustHVACinTruckCabin();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Driver* getItsDriver() const;
    
    //## auto_generated
    void setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Driver* itsDriver;		//## link itsDriver
    
    Truck* itsTruck;		//## link itsTruck
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAdjustHVACinTruckCabin : virtual public AOMInstance {
    DECLARE_META(AdjustHVACinTruckCabin, OMAnimatedAdjustHVACinTruckCabin)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AdjustHVACinTruckCabin.h
*********************************************************************/
