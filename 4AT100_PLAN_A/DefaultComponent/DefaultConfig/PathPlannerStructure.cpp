/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerStructure
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerStructure.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PathPlannerStructure.h"
//#[ ignore
#define PathPlannerModel_PathPlannerStructure_PathPlannerStructure_SERIALIZE OM_NO_OP
//#]

//## package PathPlannerModel

//## class PathPlannerStructure
PathPlannerStructure::PathPlannerStructure(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(PathPlannerStructure, PathPlannerStructure(), 0, PathPlannerModel_PathPlannerStructure_PathPlannerStructure_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsPathPlannerModel.setShouldDelete(false);
        }
    }
    initRelations();
}

PathPlannerStructure::~PathPlannerStructure() {
    NOTIFY_DESTRUCTOR(~PathPlannerStructure, true);
}

PathPlannerInput* PathPlannerStructure::getItsPathPlannerInput() const {
    return (PathPlannerInput*) &itsPathPlannerInput;
}

PathPlannerModel* PathPlannerStructure::getItsPathPlannerModel() const {
    return (PathPlannerModel*) &itsPathPlannerModel;
}

PathPlannerOutput* PathPlannerStructure::getItsPathPlannerOutput() const {
    return (PathPlannerOutput*) &itsPathPlannerOutput;
}

bool PathPlannerStructure::startBehavior() {
    bool done = true;
    done &= itsPathPlannerModel.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void PathPlannerStructure::initRelations() {
    itsPathPlannerInput._setItsPathPlannerStructure(this);
    itsPathPlannerModel._setItsPathPlannerStructure(this);
    itsPathPlannerOutput._setItsPathPlannerStructure(this);
}

void PathPlannerStructure::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsPathPlannerModel.setActiveContext(theActiveContext, false);
    }
}

void PathPlannerStructure::destroy() {
    itsPathPlannerModel.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPathPlannerStructure::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPathPlannerInput", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPathPlannerInput);
    aomsRelations->addRelation("itsPathPlannerModel", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPathPlannerModel);
    aomsRelations->addRelation("itsPathPlannerOutput", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPathPlannerOutput);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(PathPlannerStructure, PathPlannerModel, PathPlannerModel, false, OMAnimatedPathPlannerStructure)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerStructure.cpp
*********************************************************************/
