/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_6 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: UC_DockTruck_Simulation
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_6\UC_DockTruck_Simulation\Maincomponent_6.cpp
*********************************************************************/

//## auto_generated
#include "Maincomponent_6.h"
//## auto_generated
#include "UC_DockTruck.h"
RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                UC_DockTruck p_UC_DockTruck;
                p_UC_DockTruck.setShouldDelete(false);
                (void) p_UC_DockTruck.startBehavior();
                //#[ configuration component_6::UC_DockTruck_Simulation 
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
	File Path	: component_6\UC_DockTruck_Simulation\Maincomponent_6.cpp
*********************************************************************/
