/********************************************************************
	Rhapsody	: 8.4 
	Login		: naika
	Component	: DefaultComponent 
	Configuration 	: UC_DispenseFuel_Simulation
	Model Element	: UC_DispenseFuel_Simulation
//!	Generated Date	: Sun, 15, Dec 2019  
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "UC_DispenseFuel.h"
RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                UC_DispenseFuel p_UC_DispenseFuel;
                p_UC_DispenseFuel.setShouldDelete(false);
                (void) p_UC_DispenseFuel.startBehavior();
                //#[ configuration DefaultComponent::UC_DispenseFuel_Simulation 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\MainDefaultComponent.cpp
*********************************************************************/
