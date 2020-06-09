/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerStructure
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerStructure.h
*********************************************************************/

#ifndef ControllerStructure_H
#define ControllerStructure_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ControllerModel.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsControllerInput
#include "ControllerInput.h"
//## classInstance itsControllerOutput
#include "ControllerOutput.h"
//## package ControllerModel

//## class ControllerStructure
class ControllerStructure : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedControllerStructure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ControllerStructure(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~ControllerStructure();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ControllerInput* getItsControllerInput() const;
    
    //## auto_generated
    ControllerModel* getItsControllerModel() const;
    
    //## auto_generated
    ControllerOutput* getItsControllerOutput() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    ControllerInput itsControllerInput;		//## classInstance itsControllerInput
    
    ControllerModel itsControllerModel;		//## classInstance itsControllerModel
    
    ControllerOutput itsControllerOutput;		//## classInstance itsControllerOutput
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedControllerStructure : virtual public AOMInstance {
    DECLARE_META(ControllerStructure, OMAnimatedControllerStructure)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerStructure.h
*********************************************************************/
