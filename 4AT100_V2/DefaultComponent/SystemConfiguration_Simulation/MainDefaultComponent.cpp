/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: SystemConfiguration_Simulation
	Model Element	: SystemConfiguration_Simulation
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\SystemConfiguration_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "SystemConfiguration.h"
RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                SystemConfiguration p_SystemConfiguration;
                p_SystemConfiguration.setShouldDelete(false);
                (void) p_SystemConfiguration.startBehavior();
                //#[ configuration DefaultComponent::SystemConfiguration_Simulation 
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
	File Path	: DefaultComponent\SystemConfiguration_Simulation\MainDefaultComponent.cpp
*********************************************************************/
