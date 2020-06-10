/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerStructure
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerStructure.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ControllerStructure.h"
//#[ ignore
#define ControllerModel_ControllerStructure_ControllerStructure_SERIALIZE OM_NO_OP
//#]

//## package ControllerModel

//## class ControllerStructure
ControllerStructure::ControllerStructure(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ControllerStructure, ControllerStructure(), 0, ControllerModel_ControllerStructure_ControllerStructure_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsControllerModel.setShouldDelete(false);
        }
    }
    initRelations();
}

ControllerStructure::~ControllerStructure() {
    NOTIFY_DESTRUCTOR(~ControllerStructure, true);
}

ControllerInput* ControllerStructure::getItsControllerInput() const {
    return (ControllerInput*) &itsControllerInput;
}

ControllerModel* ControllerStructure::getItsControllerModel() const {
    return (ControllerModel*) &itsControllerModel;
}

ControllerOutput* ControllerStructure::getItsControllerOutput() const {
    return (ControllerOutput*) &itsControllerOutput;
}

bool ControllerStructure::startBehavior() {
    bool done = true;
    done &= itsControllerModel.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void ControllerStructure::initRelations() {
    itsControllerInput._setItsControllerStructure(this);
    itsControllerModel._setItsControllerStructure(this);
    itsControllerOutput._setItsControllerStructure(this);
}

void ControllerStructure::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsControllerModel.setActiveContext(theActiveContext, false);
    }
}

void ControllerStructure::destroy() {
    itsControllerModel.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedControllerStructure::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControllerInput", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsControllerInput);
    aomsRelations->addRelation("itsControllerModel", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsControllerModel);
    aomsRelations->addRelation("itsControllerOutput", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsControllerOutput);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(ControllerStructure, ControllerModel, ControllerModel, false, OMAnimatedControllerStructure)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerStructure.cpp
*********************************************************************/
