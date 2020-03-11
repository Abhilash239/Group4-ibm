/********************************************************************
	Rhapsody	: 8.4 
	Login		: naika
	Component	: DefaultComponent 
	Configuration 	: UC_DispenseFuel_Simulation
	Model Element	: Cashier
//!	Generated Date	: Mon, 2, Dec 2019  
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\Cashier.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Cashier.h"
//## link itsUC_DispenseFuel
#include "UC_DispenseFuel.h"
//#[ ignore
#define ActorPkg_Cashier_Cashier_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Cashier
Cashier::Cashier(void) : itsUC_DispenseFuel(NULL) {
    NOTIFY_CONSTRUCTOR(Cashier, Cashier(), 0, ActorPkg_Cashier_Cashier_SERIALIZE);
}

Cashier::~Cashier(void) {
    NOTIFY_DESTRUCTOR(~Cashier, true);
    cleanUpRelations();
}

const UC_DispenseFuel* Cashier::getItsUC_DispenseFuel(void) const {
    return itsUC_DispenseFuel;
}

void Cashier::setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel) {
    if(p_UC_DispenseFuel != NULL)
        {
            p_UC_DispenseFuel->_setItsCashier(this);
        }
    _setItsUC_DispenseFuel(p_UC_DispenseFuel);
}

void Cashier::cleanUpRelations(void) {
    if(itsUC_DispenseFuel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_DispenseFuel");
            const Cashier* p_Cashier = itsUC_DispenseFuel->getItsCashier();
            if(p_Cashier != NULL)
                {
                    itsUC_DispenseFuel->__setItsCashier(NULL);
                }
            itsUC_DispenseFuel = NULL;
        }
}

void Cashier::__setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel) {
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

void Cashier::_setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel) {
    if(itsUC_DispenseFuel != NULL)
        {
            itsUC_DispenseFuel->__setItsCashier(NULL);
        }
    __setItsUC_DispenseFuel(p_UC_DispenseFuel);
}

void Cashier::_clearItsUC_DispenseFuel(void) {
    NOTIFY_RELATION_CLEARED("itsUC_DispenseFuel");
    itsUC_DispenseFuel = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCashier::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_DispenseFuel", false, true);
    if(myReal->itsUC_DispenseFuel)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_DispenseFuel);
        }
}
//#]

IMPLEMENT_META_P(Cashier, ActorPkg, ActorPkg, false, OMAnimatedCashier)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\Cashier.cpp
*********************************************************************/
