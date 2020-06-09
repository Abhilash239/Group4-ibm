/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerStructure
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerStructure.h
*********************************************************************/

#ifndef PathPlannerStructure_H
#define PathPlannerStructure_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance itsPathPlannerInput
#include "PathPlannerInput.h"
//## classInstance itsPathPlannerModel
#include "PathPlannerModel.h"
//## classInstance itsPathPlannerOutput
#include "PathPlannerOutput.h"
//## package PathPlannerModel

//## class PathPlannerStructure
class PathPlannerStructure : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    explicit PathPlannerStructure(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~PathPlannerStructure(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const PathPlannerInput* getItsPathPlannerInput(void) const;
    
    //## auto_generated
    const PathPlannerModel* getItsPathPlannerModel(void) const;
    
    //## auto_generated
    const PathPlannerOutput* getItsPathPlannerOutput(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Relations and components    ////

private :

    PathPlannerInput itsPathPlannerInput;		//## classInstance itsPathPlannerInput
    
    PathPlannerModel itsPathPlannerModel;		//## classInstance itsPathPlannerModel
    
    PathPlannerOutput itsPathPlannerOutput;		//## classInstance itsPathPlannerOutput
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerStructure.h
*********************************************************************/
