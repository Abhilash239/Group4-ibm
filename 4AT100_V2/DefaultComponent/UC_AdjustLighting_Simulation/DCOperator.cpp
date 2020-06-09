/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustLighting_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\DCOperator.cpp
*********************************************************************/

//## auto_generated
#include "DCOperator.h"
//## link itsGUI
#include "GUI.h"
//## package ActorPkg

//## actor DCOperator
DCOperator::DCOperator(void) : itsGUI(NULL) {
}

DCOperator::~DCOperator(void) {
    cleanUpRelations();
}

const GUI* DCOperator::getItsGUI(void) const {
    return itsGUI;
}

void DCOperator::setItsGUI(GUI* const p_GUI) {
    if(p_GUI != NULL)
        {
            p_GUI->_setItsDCOperator(this);
        }
    _setItsGUI(p_GUI);
}

void DCOperator::cleanUpRelations(void) {
    if(itsGUI != NULL)
        {
            const DCOperator* p_DCOperator = itsGUI->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsGUI->__setItsDCOperator(NULL);
                }
            itsGUI = NULL;
        }
}

void DCOperator::__setItsGUI(GUI* const p_GUI) {
    itsGUI = p_GUI;
}

void DCOperator::_setItsGUI(GUI* const p_GUI) {
    if(itsGUI != NULL)
        {
            itsGUI->__setItsDCOperator(NULL);
        }
    __setItsGUI(p_GUI);
}

void DCOperator::_clearItsGUI(void) {
    itsGUI = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\DCOperator.cpp
*********************************************************************/
