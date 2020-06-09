/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Driver
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/

//## auto_generated
#include "Driver.h"
//## link itsGUI
#include "GUI.h"
//## package ActorPkg

//## actor Driver
Driver::Driver(void) : itsGUI(NULL) {
}

Driver::~Driver(void) {
    cleanUpRelations();
}

const GUI* Driver::getItsGUI(void) const {
    return itsGUI;
}

void Driver::setItsGUI(GUI* const p_GUI) {
    if(p_GUI != NULL)
        {
            p_GUI->_setItsDriver(this);
        }
    _setItsGUI(p_GUI);
}

void Driver::cleanUpRelations(void) {
    if(itsGUI != NULL)
        {
            const Driver* p_Driver = itsGUI->getItsDriver();
            if(p_Driver != NULL)
                {
                    itsGUI->__setItsDriver(NULL);
                }
            itsGUI = NULL;
        }
}

void Driver::__setItsGUI(GUI* const p_GUI) {
    itsGUI = p_GUI;
}

void Driver::_setItsGUI(GUI* const p_GUI) {
    if(itsGUI != NULL)
        {
            itsGUI->__setItsDriver(NULL);
        }
    __setItsGUI(p_GUI);
}

void Driver::_clearItsGUI(void) {
    itsGUI = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/
