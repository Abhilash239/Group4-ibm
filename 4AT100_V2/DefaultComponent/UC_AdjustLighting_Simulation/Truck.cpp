/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustLighting_Simulation
	Model Element	: Truck
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\Truck.cpp
*********************************************************************/

//## auto_generated
#include "Truck.h"
//## link itsADS
#include "ADS.h"
//## link itsUC_AdjustHVAC
#include "UC_AdjustHVAC.h"
//## link itsUC_AdjustLighting
#include "UC_AdjustLighting.h"
//## link itsUGE
#include "UGE.h"
//## package ActorPkg

//## actor Truck
Truck::Truck(void) : itsADS(NULL), itsUC_AdjustHVAC(NULL), itsUC_AdjustLighting(NULL), itsUGE(NULL) {
}

Truck::~Truck(void) {
    cleanUpRelations();
}

const ADS* Truck::getItsADS(void) const {
    return itsADS;
}

void Truck::setItsADS(ADS* const p_ADS) {
    if(p_ADS != NULL)
        {
            p_ADS->_setItsTruck(this);
        }
    _setItsADS(p_ADS);
}

const UC_AdjustHVAC* Truck::getItsUC_AdjustHVAC(void) const {
    return itsUC_AdjustHVAC;
}

void Truck::setItsUC_AdjustHVAC(UC_AdjustHVAC* const p_UC_AdjustHVAC) {
    if(p_UC_AdjustHVAC != NULL)
        {
            p_UC_AdjustHVAC->_setItsTruck(this);
        }
    _setItsUC_AdjustHVAC(p_UC_AdjustHVAC);
}

const UC_AdjustLighting* Truck::getItsUC_AdjustLighting(void) const {
    return itsUC_AdjustLighting;
}

void Truck::setItsUC_AdjustLighting(UC_AdjustLighting* const p_UC_AdjustLighting) {
    if(p_UC_AdjustLighting != NULL)
        {
            p_UC_AdjustLighting->_setItsTruck(this);
        }
    _setItsUC_AdjustLighting(p_UC_AdjustLighting);
}

const UGE* Truck::getItsUGE(void) const {
    return itsUGE;
}

void Truck::setItsUGE(UGE* const p_UGE) {
    if(p_UGE != NULL)
        {
            p_UGE->_setItsTruck(this);
        }
    _setItsUGE(p_UGE);
}

void Truck::cleanUpRelations(void) {
    if(itsADS != NULL)
        {
            const Truck* p_Truck = itsADS->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsADS->__setItsTruck(NULL);
                }
            itsADS = NULL;
        }
    if(itsUC_AdjustHVAC != NULL)
        {
            const Truck* p_Truck = itsUC_AdjustHVAC->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsUC_AdjustHVAC->__setItsTruck(NULL);
                }
            itsUC_AdjustHVAC = NULL;
        }
    if(itsUC_AdjustLighting != NULL)
        {
            const Truck* p_Truck = itsUC_AdjustLighting->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsUC_AdjustLighting->__setItsTruck(NULL);
                }
            itsUC_AdjustLighting = NULL;
        }
    if(itsUGE != NULL)
        {
            const Truck* p_Truck = itsUGE->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsUGE->__setItsTruck(NULL);
                }
            itsUGE = NULL;
        }
}

void Truck::__setItsADS(ADS* const p_ADS) {
    itsADS = p_ADS;
}

void Truck::_setItsADS(ADS* const p_ADS) {
    if(itsADS != NULL)
        {
            itsADS->__setItsTruck(NULL);
        }
    __setItsADS(p_ADS);
}

void Truck::_clearItsADS(void) {
    itsADS = NULL;
}

void Truck::__setItsUC_AdjustHVAC(UC_AdjustHVAC* const p_UC_AdjustHVAC) {
    itsUC_AdjustHVAC = p_UC_AdjustHVAC;
}

void Truck::_setItsUC_AdjustHVAC(UC_AdjustHVAC* const p_UC_AdjustHVAC) {
    if(itsUC_AdjustHVAC != NULL)
        {
            itsUC_AdjustHVAC->__setItsTruck(NULL);
        }
    __setItsUC_AdjustHVAC(p_UC_AdjustHVAC);
}

void Truck::_clearItsUC_AdjustHVAC(void) {
    itsUC_AdjustHVAC = NULL;
}

void Truck::__setItsUC_AdjustLighting(UC_AdjustLighting* const p_UC_AdjustLighting) {
    itsUC_AdjustLighting = p_UC_AdjustLighting;
}

void Truck::_setItsUC_AdjustLighting(UC_AdjustLighting* const p_UC_AdjustLighting) {
    if(itsUC_AdjustLighting != NULL)
        {
            itsUC_AdjustLighting->__setItsTruck(NULL);
        }
    __setItsUC_AdjustLighting(p_UC_AdjustLighting);
}

void Truck::_clearItsUC_AdjustLighting(void) {
    itsUC_AdjustLighting = NULL;
}

void Truck::__setItsUGE(UGE* const p_UGE) {
    itsUGE = p_UGE;
}

void Truck::_setItsUGE(UGE* const p_UGE) {
    if(itsUGE != NULL)
        {
            itsUGE->__setItsTruck(NULL);
        }
    __setItsUGE(p_UGE);
}

void Truck::_clearItsUGE(void) {
    itsUGE = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\Truck.cpp
*********************************************************************/
