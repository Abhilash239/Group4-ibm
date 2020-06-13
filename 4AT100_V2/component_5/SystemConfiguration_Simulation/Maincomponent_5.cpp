/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_5 
	Configuration 	: SystemConfiguration_Simulation
	Model Element	: SystemConfiguration_Simulation
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_5\SystemConfiguration_Simulation\Maincomponent_5.cpp
*********************************************************************/

//## auto_generated
#include "Maincomponent_5.h"
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
                //#[ configuration component_5::SystemConfiguration_Simulation 
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
	File Path	: component_5\SystemConfiguration_Simulation\Maincomponent_5.cpp
*********************************************************************/
