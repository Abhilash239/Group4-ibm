/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerModel
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerModel.h
*********************************************************************/

#ifndef ControllerModel_H
#define ControllerModel_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class ControllerInput;

//## auto_generated
class ControllerModel;

//## auto_generated
class ControllerOutput;

//## link itsControllerStructure
class ControllerStructure;

//## package ControllerModel



//## package ControllerModel

//## class ControllerModel
class ControllerModel : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedControllerModel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ControllerModel(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~ControllerModel();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ControllerStructure* getItsControllerStructure() const;
    
    //## auto_generated
    void setItsControllerStructure(ControllerStructure* p_ControllerStructure);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ControllerStructure* itsControllerStructure;		//## link itsControllerStructure
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsControllerStructure(ControllerStructure* p_ControllerStructure);
    
    //## auto_generated
    void _setItsControllerStructure(ControllerStructure* p_ControllerStructure);
    
    //## auto_generated
    void _clearItsControllerStructure();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum ControllerModel_Enum {
        OMNonState = 0
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedControllerModel : virtual public AOMInstance {
    DECLARE_REACTIVE_META(ControllerModel, OMAnimatedControllerModel)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool ControllerModel::rootState_IN() const {
    return true;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerModel.h
*********************************************************************/
