/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerOutput
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerOutput.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PathPlannerOutput.h"
//## link itsPathPlannerStructure
#include "PathPlannerStructure.h"
//#[ ignore
#define PathPlannerModel_PathPlannerOutput_PathPlannerOutput_SERIALIZE OM_NO_OP
//#]

//## package PathPlannerModel

//## class PathPlannerOutput
PathPlannerOutput::PathPlannerOutput() {
    NOTIFY_CONSTRUCTOR(PathPlannerOutput, PathPlannerOutput(), 0, PathPlannerModel_PathPlannerOutput_PathPlannerOutput_SERIALIZE);
    itsPathPlannerStructure = NULL;
}

PathPlannerOutput::~PathPlannerOutput() {
    NOTIFY_DESTRUCTOR(~PathPlannerOutput, true);
    cleanUpRelations();
}

PathPlannerStructure* PathPlannerOutput::getItsPathPlannerStructure() const {
    return itsPathPlannerStructure;
}

void PathPlannerOutput::setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure) {
    _setItsPathPlannerStructure(p_PathPlannerStructure);
}

void PathPlannerOutput::cleanUpRelations() {
    if(itsPathPlannerStructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPathPlannerStructure");
            itsPathPlannerStructure = NULL;
        }
}

void PathPlannerOutput::__setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure) {
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

void PathPlannerOutput::_setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure) {
    __setItsPathPlannerStructure(p_PathPlannerStructure);
}

void PathPlannerOutput::_clearItsPathPlannerStructure() {
    NOTIFY_RELATION_CLEARED("itsPathPlannerStructure");
    itsPathPlannerStructure = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPathPlannerOutput::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPathPlannerStructure", false, true);
    if(myReal->itsPathPlannerStructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsPathPlannerStructure);
        }
}
//#]

IMPLEMENT_META_P(PathPlannerOutput, PathPlannerModel, PathPlannerModel, false, OMAnimatedPathPlannerOutput)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerOutput.cpp
*********************************************************************/
