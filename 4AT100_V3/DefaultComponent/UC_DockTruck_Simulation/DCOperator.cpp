/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\UC_DockTruck_Simulation\DCOperator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCOperator.h"
//## link itsGUI
#include "GUI.h"
//#[ ignore
#define ActorPkg_DCOperator_DCOperator_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor DCOperator
DCOperator::DCOperator() {
    NOTIFY_CONSTRUCTOR(DCOperator, DCOperator(), 0, ActorPkg_DCOperator_DCOperator_SERIALIZE);
    itsGUI = NULL;
}

DCOperator::~DCOperator() {
    NOTIFY_DESTRUCTOR(~DCOperator, true);
    cleanUpRelations();
}

GUI* DCOperator::getItsGUI() const {
    return itsGUI;
}

void DCOperator::setItsGUI(GUI* p_GUI) {
    if(p_GUI != NULL)
        {
            p_GUI->_setItsDCOperator(this);
        }
    _setItsGUI(p_GUI);
}

void DCOperator::cleanUpRelations() {
    if(itsGUI != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGUI");
            DCOperator* p_DCOperator = itsGUI->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsGUI->__setItsDCOperator(NULL);
                }
            itsGUI = NULL;
        }
}

void DCOperator::__setItsGUI(GUI* p_GUI) {
    itsGUI = p_GUI;
    if(p_GUI != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGUI", p_GUI, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGUI");
        }
}

void DCOperator::_setItsGUI(GUI* p_GUI) {
    if(itsGUI != NULL)
        {
            itsGUI->__setItsDCOperator(NULL);
        }
    __setItsGUI(p_GUI);
}

void DCOperator::_clearItsGUI() {
    NOTIFY_RELATION_CLEARED("itsGUI");
    itsGUI = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCOperator::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsGUI", false, true);
    if(myReal->itsGUI)
        {
            aomsRelations->ADD_ITEM(myReal->itsGUI);
        }
}
//#]

IMPLEMENT_META_P(DCOperator, ActorPkg, ActorPkg, false, OMAnimatedDCOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_DockTruck_Simulation\DCOperator.cpp
*********************************************************************/
