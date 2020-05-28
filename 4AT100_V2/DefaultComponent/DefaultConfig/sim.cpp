/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sim
//!	Generated Date	: Thu, 28, May 2020  
	File Path	: DefaultComponent\DefaultConfig\sim.cpp
*********************************************************************/

//## auto_generated
#include "sim.h"
//## package UnityPkg

//## class sim
//#[ ignore
sim::sim(void) {
    m_nSampleTime = 100;
    TestDrive_initialize(1);
}

sim::~sim(void) {
    TestDrive_terminate();
}

void sim::doStep(void) {
    
    TestDrive_step(0);
    
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sim.cpp
*********************************************************************/
