/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: GUI
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\GUI.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "GUI.h"
//## event reqAdjustLighting()
#include "AdjustHVACandLighting.h"
//## link itsDCOperator
#include "DCOperator.h"
//## event reqDock()
#include "DriveAutonomously.h"
//## link itsDriver
#include "Driver.h"
//## package ArchitecturePkg

//## class GUI
GUI::GUI(IOxfActive* const theActiveContext) : OMReactive(), itsDCOperator(NULL), itsDriver(NULL) {
    setActiveContext(theActiveContext, false);
}

GUI::~GUI(void) {
    cleanUpRelations();
}

const int GUI::getDocknumber(void) const {
    return docknumber;
}

void GUI::setDocknumber(const int p_docknumber) {
    docknumber = p_docknumber;
}

const DCOperator* GUI::getItsDCOperator(void) const {
    return itsDCOperator;
}

void GUI::setItsDCOperator(DCOperator* const p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsGUI(this);
        }
    _setItsDCOperator(p_DCOperator);
}

const Driver* GUI::getItsDriver(void) const {
    return itsDriver;
}

void GUI::setItsDriver(Driver* const p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsGUI(this);
        }
    _setItsDriver(p_Driver);
}

const UC_AdjustHVAC* GUI::getItsUC_AdjustHVAC(void) const {
    return &itsUC_AdjustHVAC;
}

const UC_AdjustLighting* GUI::getItsUC_AdjustLighting(void) const {
    return &itsUC_AdjustLighting;
}

bool GUI::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsUC_AdjustHVAC.startBehavior();
        }
    if(done == true)
        {
            done = itsUC_AdjustLighting.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void GUI::cleanUpRelations(void) {
    if(itsDCOperator != NULL)
        {
            const GUI* p_GUI = itsDCOperator->getItsGUI();
            if(p_GUI != NULL)
                {
                    itsDCOperator->__setItsGUI(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsDriver != NULL)
        {
            const GUI* p_GUI = itsDriver->getItsGUI();
            if(p_GUI != NULL)
                {
                    itsDriver->__setItsGUI(NULL);
                }
            itsDriver = NULL;
        }
}

void GUI::__setItsDCOperator(DCOperator* const p_DCOperator) {
    itsDCOperator = p_DCOperator;
}

void GUI::_setItsDCOperator(DCOperator* const p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsGUI(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void GUI::_clearItsDCOperator(void) {
    itsDCOperator = NULL;
}

void GUI::__setItsDriver(Driver* const p_Driver) {
    itsDriver = p_Driver;
}

void GUI::_setItsDriver(Driver* const p_Driver) {
    if(itsDriver != NULL)
        {
            itsDriver->__setItsGUI(NULL);
        }
    __setItsDriver(p_Driver);
}

void GUI::_clearItsDriver(void) {
    itsDriver = NULL;
}

void GUI::destroy(void) {
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\GUI.cpp
*********************************************************************/
