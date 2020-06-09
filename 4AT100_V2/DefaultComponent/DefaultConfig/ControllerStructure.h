/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerStructure
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerStructure.h
*********************************************************************/

#ifndef ControllerStructure_H
#define ControllerStructure_H

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
//## classInstance itsControllerInput
#include "ControllerInput.h"
//## classInstance itsControllerModel
#include "ControllerModel.h"
//## classInstance itsControllerOutput
#include "ControllerOutput.h"
//## package ControllerModel

//## class ControllerStructure
class ControllerStructure : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    explicit ControllerStructure(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~ControllerStructure(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const ControllerInput* getItsControllerInput(void) const;
    
    //## auto_generated
    const ControllerModel* getItsControllerModel(void) const;
    
    //## auto_generated
    const ControllerOutput* getItsControllerOutput(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Relations and components    ////

private :

    ControllerInput itsControllerInput;		//## classInstance itsControllerInput
    
    ControllerModel itsControllerModel;		//## classInstance itsControllerModel
    
    ControllerOutput itsControllerOutput;		//## classInstance itsControllerOutput
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerStructure.h
*********************************************************************/
