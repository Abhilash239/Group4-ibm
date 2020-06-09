/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_FollowPath
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_FollowPath.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "UC_FollowPath.h"
//## link itsUC_GeneratePath
#include "UC_GeneratePath.h"
//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_FollowPath
UC_FollowPath::UC_FollowPath(IOxfActive* const theActiveContext) : OMReactive(), itsUC_GeneratePath(NULL) {
    setActiveContext(theActiveContext, false);
}

UC_FollowPath::~UC_FollowPath(void) {
    cleanUpRelations();
}

void UC_FollowPath::execFollowPath(void) {
    //#[ operation execFollowPath()
    //#]
}

void UC_FollowPath::resFollowPath(void) {
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
}

void UC_FollowPath::_setItsUC_GeneratePath(UC_GeneratePath* const p_UC_GeneratePath) {
    if(itsUC_GeneratePath != NULL)
        {
            itsUC_GeneratePath->__setItsUC_FollowPath(NULL);
        }
    __setItsUC_GeneratePath(p_UC_GeneratePath);
}

void UC_FollowPath::_clearItsUC_GeneratePath(void) {
    itsUC_GeneratePath = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_FollowPath.cpp
*********************************************************************/
