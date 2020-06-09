/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerModel
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerModel.h
*********************************************************************/

#ifndef ControllerModel_H
#define ControllerModel_H

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
//## link itsControllerStructure
class ControllerStructure;

//## package ControllerModel

//## class ControllerModel
class ControllerModel : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    explicit ControllerModel(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~ControllerModel(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const ControllerStructure* getItsControllerStructure(void) const;
    
    //## auto_generated
    void setItsControllerStructure(ControllerStructure* const p_ControllerStructure);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    ControllerStructure* itsControllerStructure;		//## link itsControllerStructure
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsControllerStructure(ControllerStructure* const p_ControllerStructure);
    
    //## auto_generated
    void _setItsControllerStructure(ControllerStructure* const p_ControllerStructure);
    
    //## auto_generated
    void _clearItsControllerStructure(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum ControllerModel_Enum {
        OMNonState = 0
    };
//#]

private :

//#[ ignore
    ControllerModel_Enum rootState_subState;
    
    ControllerModel_Enum rootState_active;
//#]
};

inline RhpBoolean ControllerModel::rootState_IN(void) const {
    return true;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerModel.h
*********************************************************************/
