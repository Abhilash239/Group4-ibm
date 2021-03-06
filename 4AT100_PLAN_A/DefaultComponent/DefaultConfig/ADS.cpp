/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ADS
//!	Generated Date	: Tue, 2, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ADS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ADS.h"
//#[ ignore
#define UseCaseAnalysisPkg_DriveAutonomously_ADS_ADS_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class ADS
ADS::ADS(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ADS, ADS(), 0, UseCaseAnalysisPkg_DriveAutonomously_ADS_ADS_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsToUnity.setShouldDelete(false);
        }
        {
            itsGUI.setShouldDelete(false);
        }
        {
            itsUC_DockTruck.setShouldDelete(false);
        }
    }
}

ADS::~ADS() {
    NOTIFY_DESTRUCTOR(~ADS, true);
}

GUI* ADS::getItsGUI() const {
    return (GUI*) &itsGUI;
}

ToUnity* ADS::getItsToUnity() const {
    return (ToUnity*) &itsToUnity;
}

UC_ControlPath* ADS::getItsUC_ControlPath() const {
    return (UC_ControlPath*) &itsUC_ControlPath;
}

UC_DockTruck* ADS::getItsUC_DockTruck() const {
    return (UC_DockTruck*) &itsUC_DockTruck;
}

bool ADS::startBehavior() {
    bool done = true;
    done &= itsGUI.startBehavior();
    done &= itsToUnity.startBehavior();
    done &= itsUC_DockTruck.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void ADS::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsToUnity.setActiveContext(theActiveContext, false);
        itsGUI.setActiveContext(theActiveContext, false);
        itsUC_DockTruck.setActiveContext(theActiveContext, false);
    }
}

void ADS::destroy() {
    itsGUI.destroy();
    itsToUnity.destroy();
    itsUC_DockTruck.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedADS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsToUnity", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsToUnity);
    aomsRelations->addRelation("itsGUI", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsGUI);
    aomsRelations->addRelation("itsUC_DockTruck", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_DockTruck);
    aomsRelations->addRelation("itsUC_ControlPath", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_ControlPath);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(ADS, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, false, OMAnimatedADS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ADS.cpp
*********************************************************************/
