/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_6 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: UC_GeneratePath
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_6\UC_DockTruck_Simulation\UC_GeneratePath.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UC_GeneratePath.h"
//## link itsUC_FollowPath
#include "UC_FollowPath.h"
//#[ ignore
#define UseCaseAnalysisPkg_DriveAutonomously_UC_GeneratePath_UC_GeneratePath_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DriveAutonomously_UC_GeneratePath_execGeneratePath_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DriveAutonomously_UC_GeneratePath_resGeneratePath_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_GeneratePath
UC_GeneratePath::UC_GeneratePath(IOxfActive* const theActiveContext) : OMReactive(), itsUC_FollowPath(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_GeneratePath, UC_GeneratePath(), 0, UseCaseAnalysisPkg_DriveAutonomously_UC_GeneratePath_UC_GeneratePath_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

UC_GeneratePath::~UC_GeneratePath(void) {
    NOTIFY_DESTRUCTOR(~UC_GeneratePath, true);
    cleanUpRelations();
}

void UC_GeneratePath::execGeneratePath(void) {
    NOTIFY_OPERATION(execGeneratePath, execGeneratePath(), 0, UseCaseAnalysisPkg_DriveAutonomously_UC_GeneratePath_execGeneratePath_SERIALIZE);
    //#[ operation execGeneratePath()
    //#]
}

void UC_GeneratePath::resGeneratePath(void) {
    NOTIFY_OPERATION(resGeneratePath, resGeneratePath(), 0, UseCaseAnalysisPkg_DriveAutonomously_UC_GeneratePath_resGeneratePath_SERIALIZE);
    //#[ operation resGeneratePath()
    //#]
}

const UC_FollowPath* UC_GeneratePath::getItsUC_FollowPath(void) const {
    return itsUC_FollowPath;
}

void UC_GeneratePath::setItsUC_FollowPath(UC_FollowPath* const p_UC_FollowPath) {
    if(p_UC_FollowPath != NULL)
        {
            p_UC_FollowPath->_setItsUC_GeneratePath(this);
        }
    _setItsUC_FollowPath(p_UC_FollowPath);
}

bool UC_GeneratePath::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC_GeneratePath::cleanUpRelations(void) {
    if(itsUC_FollowPath != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_FollowPath");
            const UC_GeneratePath* p_UC_GeneratePath = itsUC_FollowPath->getItsUC_GeneratePath();
            if(p_UC_GeneratePath != NULL)
                {
                    itsUC_FollowPath->__setItsUC_GeneratePath(NULL);
                }
            itsUC_FollowPath = NULL;
        }
}

void UC_GeneratePath::__setItsUC_FollowPath(UC_FollowPath* const p_UC_FollowPath) {
    itsUC_FollowPath = p_UC_FollowPath;
    if(p_UC_FollowPath != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_FollowPath", p_UC_FollowPath, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_FollowPath");
        }
}

void UC_GeneratePath::_setItsUC_FollowPath(UC_FollowPath* const p_UC_FollowPath) {
    if(itsUC_FollowPath != NULL)
        {
            itsUC_FollowPath->__setItsUC_GeneratePath(NULL);
        }
    __setItsUC_FollowPath(p_UC_FollowPath);
}

void UC_GeneratePath::_clearItsUC_FollowPath(void) {
    NOTIFY_RELATION_CLEARED("itsUC_FollowPath");
    itsUC_FollowPath = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_GeneratePath::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_FollowPath", false, true);
    if(myReal->itsUC_FollowPath)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_FollowPath);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(UC_GeneratePath, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, false, OMAnimatedUC_GeneratePath)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: component_6\UC_DockTruck_Simulation\UC_GeneratePath.cpp
*********************************************************************/
