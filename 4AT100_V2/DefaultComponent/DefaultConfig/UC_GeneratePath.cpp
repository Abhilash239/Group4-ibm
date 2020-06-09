/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_GeneratePath
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_GeneratePath.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "UC_GeneratePath.h"
//## link itsUC_FollowPath
#include "UC_FollowPath.h"
//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_GeneratePath
UC_GeneratePath::UC_GeneratePath(IOxfActive* const theActiveContext) : OMReactive(), itsUC_FollowPath(NULL) {
    setActiveContext(theActiveContext, false);
}

UC_GeneratePath::~UC_GeneratePath(void) {
    cleanUpRelations();
}

void UC_GeneratePath::execGeneratePath(void) {
    //#[ operation execGeneratePath()
    //#]
}

void UC_GeneratePath::resGeneratePath(void) {
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
}

void UC_GeneratePath::_setItsUC_FollowPath(UC_FollowPath* const p_UC_FollowPath) {
    if(itsUC_FollowPath != NULL)
        {
            itsUC_FollowPath->__setItsUC_GeneratePath(NULL);
        }
    __setItsUC_FollowPath(p_UC_FollowPath);
}

void UC_GeneratePath::_clearItsUC_FollowPath(void) {
    itsUC_FollowPath = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_GeneratePath.cpp
*********************************************************************/
