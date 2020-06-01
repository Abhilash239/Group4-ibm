/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: ToUnity_Simulation
	Model Element	: ToUnity_Simulation
//!	Generated Date	: Tue, 2, Jun 2020  
	File Path	: DefaultComponent\ToUnity_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ToUnity.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423, "", 1))
        {
            ToUnity * p_ToUnity;
            p_ToUnity = new ToUnity;
            p_ToUnity->startBehavior();
            //#[ configuration DefaultComponent::ToUnity_Simulation 
            //#]
            OXF::start();
            delete p_ToUnity;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\ToUnity_Simulation\MainDefaultComponent.cpp
*********************************************************************/
