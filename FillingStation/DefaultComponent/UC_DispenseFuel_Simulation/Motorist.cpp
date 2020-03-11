/********************************************************************
	Rhapsody	: 8.4 
	Login		: naika
	Component	: DefaultComponent 
	Configuration 	: UC_DispenseFuel_Simulation
	Model Element	: Motorist
//!	Generated Date	: Mon, 2, Dec 2019  
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\Motorist.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Motorist.h"
//## link itsUC_DispenseFuel
#include "UC_DispenseFuel.h"
//#[ ignore
#define ActorPkg_Motorist_Motorist_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Motorist
Motorist::Motorist(void) : itsUC_DispenseFuel(NULL) {
    NOTIFY_CONSTRUCTOR(Motorist, Motorist(), 0, ActorPkg_Motorist_Motorist_SERIALIZE);
}

Motorist::~Motorist(void) {
    NOTIFY_DESTRUCTOR(~Motorist, true);
    cleanUpRelations();
}

const UC_DispenseFuel* Motorist::getItsUC_DispenseFuel(void) const {
    return itsUC_DispenseFuel;
}

void Motorist::setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel) {
    if(p_UC_DispenseFuel != NULL)
        {
            p_UC_DispenseFuel->_setItsMotorist(this);
        }
    _setItsUC_DispenseFuel(p_UC_DispenseFuel);
}

void Motorist::cleanUpRelations(void) {
    if(itsUC_DispenseFuel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_DispenseFuel");
            const Motorist* p_Motorist = itsUC_DispenseFuel->getItsMotorist();
            if(p_Motorist != NULL)
                {
                    itsUC_DispenseFuel->__setItsMotorist(NULL);
                }
            itsUC_DispenseFuel = NULL;
        }
}

void Motorist::__setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel) {
    itsUC_DispenseFuel = p_UC_DispenseFuel;
    if(p_UC_DispenseFuel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_DispenseFuel", p_UC_DispenseFuel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_DispenseFuel");
        }
}

void Motorist::_setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel) {
    if(itsUC_DispenseFuel != NULL)
        {
            itsUC_DispenseFuel->__setItsMotorist(NULL);
        }
    __setItsUC_DispenseFuel(p_UC_DispenseFuel);
}

void Motorist::_clearItsUC_DispenseFuel(void) {
    NOTIFY_RELATION_CLEARED("itsUC_DispenseFuel");
    itsUC_DispenseFuel = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMotorist::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_DispenseFuel", false, true);
    if(myReal->itsUC_DispenseFuel)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_DispenseFuel);
        }
}
//#]

IMPLEMENT_META_P(Motorist, ActorPkg, ActorPkg, false, OMAnimatedMotorist)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\Motorist.cpp
*********************************************************************/
