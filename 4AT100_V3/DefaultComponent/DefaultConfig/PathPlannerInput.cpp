/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerInput
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerInput.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PathPlannerInput.h"
//## link itsPathPlannerStructure
#include "PathPlannerStructure.h"
//#[ ignore
#define PathPlannerModel_PathPlannerInput_PathPlannerInput_SERIALIZE OM_NO_OP
//#]

//## package PathPlannerModel

//## class PathPlannerInput
PathPlannerInput::PathPlannerInput() {
    NOTIFY_CONSTRUCTOR(PathPlannerInput, PathPlannerInput(), 0, PathPlannerModel_PathPlannerInput_PathPlannerInput_SERIALIZE);
    itsPathPlannerStructure = NULL;
}

PathPlannerInput::~PathPlannerInput() {
    NOTIFY_DESTRUCTOR(~PathPlannerInput, true);
    cleanUpRelations();
}

PathPlannerStructure* PathPlannerInput::getItsPathPlannerStructure() const {
    return itsPathPlannerStructure;
}

void PathPlannerInput::setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure) {
    _setItsPathPlannerStructure(p_PathPlannerStructure);
}

void PathPlannerInput::cleanUpRelations() {
    if(itsPathPlannerStructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPathPlannerStructure");
            itsPathPlannerStructure = NULL;
        }
}

void PathPlannerInput::__setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure) {
    itsPathPlannerStructure = p_PathPlannerStructure;
    if(p_PathPlannerStructure != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPathPlannerStructure", p_PathPlannerStructure, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPathPlannerStructure");
        }
}

void PathPlannerInput::_setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure) {
    __setItsPathPlannerStructure(p_PathPlannerStructure);
}

void PathPlannerInput::_clearItsPathPlannerStructure() {
    NOTIFY_RELATION_CLEARED("itsPathPlannerStructure");
    itsPathPlannerStructure = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPathPlannerInput::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPathPlannerStructure", false, true);
    if(myReal->itsPathPlannerStructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsPathPlannerStructure);
        }
}
//#]

IMPLEMENT_META_P(PathPlannerInput, PathPlannerModel, PathPlannerModel, false, OMAnimatedPathPlannerInput)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerInput.cpp
*********************************************************************/
