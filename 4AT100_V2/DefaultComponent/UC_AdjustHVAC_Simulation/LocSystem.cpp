/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: LocSystem
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\LocSystem.cpp
*********************************************************************/

//## auto_generated
#include "LocSystem.h"
//## link itsUGE
#include "UGE.h"
//## package ActorPkg

//## actor LocSystem
LocSystem::LocSystem(void) : itsUGE(NULL) {
}

LocSystem::~LocSystem(void) {
    cleanUpRelations();
}

const UGE* LocSystem::getItsUGE(void) const {
    return itsUGE;
}

void LocSystem::setItsUGE(UGE* const p_UGE) {
    if(p_UGE != NULL)
        {
            p_UGE->_setItsLocSystem(this);
        }
    _setItsUGE(p_UGE);
}

void LocSystem::cleanUpRelations(void) {
    if(itsUGE != NULL)
        {
            const LocSystem* p_LocSystem = itsUGE->getItsLocSystem();
            if(p_LocSystem != NULL)
                {
                    itsUGE->__setItsLocSystem(NULL);
                }
            itsUGE = NULL;
        }
}

void LocSystem::__setItsUGE(UGE* const p_UGE) {
    itsUGE = p_UGE;
}

void LocSystem::_setItsUGE(UGE* const p_UGE) {
    if(itsUGE != NULL)
        {
            itsUGE->__setItsLocSystem(NULL);
        }
    __setItsUGE(p_UGE);
}

void LocSystem::_clearItsUGE(void) {
    itsUGE = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\LocSystem.cpp
*********************************************************************/
