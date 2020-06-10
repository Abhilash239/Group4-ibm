/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: UC_ControlPath
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_ControlPath.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UC_ControlPath.h"
//## link itsUC_DockTruck
#include "UC_DockTruck.h"
//#[ ignore
#define UseCaseAnalysisPkg_DriveAutonomously_UC_ControlPath_UC_ControlPath_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_ControlPath
UC_ControlPath::UC_ControlPath() {
    NOTIFY_CONSTRUCTOR(UC_ControlPath, UC_ControlPath(), 0, UseCaseAnalysisPkg_DriveAutonomously_UC_ControlPath_UC_ControlPath_SERIALIZE);
    itsUC_DockTruck = NULL;
}

UC_ControlPath::~UC_ControlPath() {
    NOTIFY_DESTRUCTOR(~UC_ControlPath, true);
    cleanUpRelations();
}

UC_DockTruck* UC_ControlPath::getItsUC_DockTruck() const {
    return itsUC_DockTruck;
}

void UC_ControlPath::setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck) {
    if(p_UC_DockTruck != NULL)
        {
            p_UC_DockTruck->_setItsUC_ControlPath(this);
        }
    _setItsUC_DockTruck(p_UC_DockTruck);
}

void UC_ControlPath::cleanUpRelations() {
    if(itsUC_DockTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_DockTruck");
            UC_ControlPath* p_UC_ControlPath = itsUC_DockTruck->getItsUC_ControlPath();
            if(p_UC_ControlPath != NULL)
                {
                    itsUC_DockTruck->__setItsUC_ControlPath(NULL);
                }
            itsUC_DockTruck = NULL;
        }
}

void UC_ControlPath::__setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck) {
    itsUC_DockTruck = p_UC_DockTruck;
    if(p_UC_DockTruck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_DockTruck", p_UC_DockTruck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_DockTruck");
        }
}

void UC_ControlPath::_setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck) {
    if(itsUC_DockTruck != NULL)
        {
            itsUC_DockTruck->__setItsUC_ControlPath(NULL);
        }
    __setItsUC_DockTruck(p_UC_DockTruck);
}

void UC_ControlPath::_clearItsUC_DockTruck() {
    NOTIFY_RELATION_CLEARED("itsUC_DockTruck");
    itsUC_DockTruck = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_ControlPath::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_DockTruck", false, true);
    if(myReal->itsUC_DockTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_DockTruck);
        }
}
//#]

IMPLEMENT_META_P(UC_ControlPath, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, false, OMAnimatedUC_ControlPath)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_ControlPath.cpp
*********************************************************************/
