/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Structure
//!	Generated Date	: Thu, 28, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Structure.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "Structure.h"
//## package UnityPkg

//## class Structure
Structure::Structure(IOxfActive* const theActiveContext) : OMReactive() {
    setActiveContext(theActiveContext, false);
    {
        {
            itsToUnity.setShouldDelete(false);
        }
    }
}

Structure::~Structure(void) {
}

const sim* Structure::getItsSim(void) const {
    return &itsSim;
}

const ToUnity* Structure::getItsToUnity(void) const {
    return &itsToUnity;
}

bool Structure::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsToUnity.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void Structure::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsToUnity.setActiveContext(theActiveContext, false);
    }
}

void Structure::destroy(void) {
    itsToUnity.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Structure.cpp
*********************************************************************/
