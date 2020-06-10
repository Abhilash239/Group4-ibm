/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: UC_DockTruck_Simulation
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\UC_DockTruck_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "UC_DockTruck.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423, "", 1))
        {
            UC_DockTruck * p_UC_DockTruck;
            p_UC_DockTruck = new UC_DockTruck;
            p_UC_DockTruck->startBehavior();
            //#[ configuration DefaultComponent::UC_DockTruck_Simulation 
            //#]
            OXF::start();
            delete p_UC_DockTruck;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\UC_DockTruck_Simulation\MainDefaultComponent.cpp
*********************************************************************/
