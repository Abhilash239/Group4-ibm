/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DockTruck
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DockTruck.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DockTruck.h"
//## link itsDCOperator
#include "DCOperator.h"
//## link itsLocSystem
#include "LocSystem.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define UseCaseAnalysisPkg_DriveAutonomously_DockTruck_DockTruck_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously

//## usecase DockTruck
DockTruck::DockTruck() {
    NOTIFY_CONSTRUCTOR(DockTruck, DockTruck(), 0, UseCaseAnalysisPkg_DriveAutonomously_DockTruck_DockTruck_SERIALIZE);
    itsDCOperator = NULL;
    itsLocSystem = NULL;
    itsTruck = NULL;
}

DockTruck::~DockTruck() {
    NOTIFY_DESTRUCTOR(~DockTruck, true);
    cleanUpRelations();
}

DCOperator* DockTruck::getItsDCOperator() const {
    return itsDCOperator;
}

void DockTruck::setItsDCOperator(DCOperator* p_DCOperator) {
    itsDCOperator = p_DCOperator;
    if(p_DCOperator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCOperator", p_DCOperator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
        }
}

LocSystem* DockTruck::getItsLocSystem() const {
    return itsLocSystem;
}

void DockTruck::setItsLocSystem(LocSystem* p_LocSystem) {
    itsLocSystem = p_LocSystem;
    if(p_LocSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLocSystem", p_LocSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLocSystem");
        }
}

Truck* DockTruck::getItsTruck() const {
    return itsTruck;
}

void DockTruck::setItsTruck(Truck* p_Truck) {
    itsTruck = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
        }
}

void DockTruck::cleanUpRelations() {
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            itsDCOperator = NULL;
        }
    if(itsLocSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLocSystem");
            itsLocSystem = NULL;
        }
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            itsTruck = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDockTruck::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCOperator", false, true);
    if(myReal->itsDCOperator)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator);
        }
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsLocSystem", false, true);
    if(myReal->itsLocSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsLocSystem);
        }
}
//#]

IMPLEMENT_META_P(DockTruck, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, false, OMAnimatedDockTruck)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DockTruck.cpp
*********************************************************************/
