/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_6 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: UC_FollowPath
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_6\UC_DockTruck_Simulation\UC_FollowPath.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UC_FollowPath.h"
//## link itsUC_GeneratePath
#include "UC_GeneratePath.h"
//#[ ignore
#define UseCaseAnalysisPkg_DriveAutonomously_UC_FollowPath_UC_FollowPath_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DriveAutonomously_UC_FollowPath_execFollowPath_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DriveAutonomously_UC_FollowPath_resFollowPath_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_FollowPath
UC_FollowPath::UC_FollowPath(IOxfActive* const theActiveContext) : OMReactive(), itsUC_GeneratePath(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_FollowPath, UC_FollowPath(), 0, UseCaseAnalysisPkg_DriveAutonomously_UC_FollowPath_UC_FollowPath_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

UC_FollowPath::~UC_FollowPath(void) {
    NOTIFY_DESTRUCTOR(~UC_FollowPath, true);
    cleanUpRelations();
}

void UC_FollowPath::execFollowPath(void) {
    NOTIFY_OPERATION(execFollowPath, execFollowPath(), 0, UseCaseAnalysisPkg_DriveAutonomously_UC_FollowPath_execFollowPath_SERIALIZE);
    //#[ operation execFollowPath()
    //#]
}

void UC_FollowPath::resFollowPath(void) {
    NOTIFY_OPERATION(resFollowPath, resFollowPath(), 0, UseCaseAnalysisPkg_DriveAutonomously_UC_FollowPath_resFollowPath_SERIALIZE);
    //#[ operation resFollowPath()
    //#]
}

const UC_GeneratePath* UC_FollowPath::getItsUC_GeneratePath(void) const {
    return itsUC_GeneratePath;
}

void UC_FollowPath::setItsUC_GeneratePath(UC_GeneratePath* const p_UC_GeneratePath) {
    if(p_UC_GeneratePath != NULL)
        {
            p_UC_GeneratePath->_setItsUC_FollowPath(this);
        }
    _setItsUC_GeneratePath(p_UC_GeneratePath);
}

bool UC_FollowPath::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC_FollowPath::cleanUpRelations(void) {
    if(itsUC_GeneratePath != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_GeneratePath");
            const UC_FollowPath* p_UC_FollowPath = itsUC_GeneratePath->getItsUC_FollowPath();
            if(p_UC_FollowPath != NULL)
                {
                    itsUC_GeneratePath->__setItsUC_FollowPath(NULL);
                }
            itsUC_GeneratePath = NULL;
        }
}

void UC_FollowPath::__setItsUC_GeneratePath(UC_GeneratePath* const p_UC_GeneratePath) {
    itsUC_GeneratePath = p_UC_GeneratePath;
    if(p_UC_GeneratePath != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_GeneratePath", p_UC_GeneratePath, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_GeneratePath");
        }
}

void UC_FollowPath::_setItsUC_GeneratePath(UC_GeneratePath* const p_UC_GeneratePath) {
    if(itsUC_GeneratePath != NULL)
        {
            itsUC_GeneratePath->__setItsUC_FollowPath(NULL);
        }
    __setItsUC_GeneratePath(p_UC_GeneratePath);
}

void UC_FollowPath::_clearItsUC_GeneratePath(void) {
    NOTIFY_RELATION_CLEARED("itsUC_GeneratePath");
    itsUC_GeneratePath = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_FollowPath::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_GeneratePath", false, true);
    if(myReal->itsUC_GeneratePath)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_GeneratePath);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(UC_FollowPath, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, false, OMAnimatedUC_FollowPath)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: component_6\UC_DockTruck_Simulation\UC_FollowPath.cpp
*********************************************************************/
