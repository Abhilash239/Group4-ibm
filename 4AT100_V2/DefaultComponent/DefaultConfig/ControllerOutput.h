/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerOutput
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerOutput.h
*********************************************************************/

#ifndef ControllerOutput_H
#define ControllerOutput_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## class ControllerOutput
#include "doubleFlowInterface.h"
//## link itsControllerStructure
class ControllerStructure;

//## package ControllerModel

//## class ControllerOutput
class ControllerOutput : public doubleFlowInterface {
public :

//#[ ignore
    //## package ControllerModel
    class delta0_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        delta0_SP_C(void);
        
        //## auto_generated
        virtual ~delta0_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        void connectControllerOutput(ControllerOutput* part);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsDoubleFlowInterface(doubleFlowInterface* const p_doubleFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        doubleFlowInterface* itsDoubleFlowInterface;		//## link itsDoubleFlowInterface
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ControllerOutput(void);
    
    //## auto_generated
    ~ControllerOutput(void);
    
    ////    Operations    ////
    
//#[ ignore
    void SetValue(double data, void * pCaller = NULL);
    
    void setDelta0(double p_delta0);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    delta0_SP_C* getDelta0_SP(void) const;
    
    //## auto_generated
    delta0_SP_C* get_delta0_SP(void) const;
    
    //## auto_generated
    const double getDelta0(void) const;
    
    //## auto_generated
    const ControllerStructure* getItsControllerStructure(void) const;
    
    //## auto_generated
    void setItsControllerStructure(ControllerStructure* const p_ControllerStructure);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    double delta0;		//## attribute delta0
    
    ////    Relations and components    ////
    
//#[ ignore
    delta0_SP_C delta0_SP;
//#]

    ControllerStructure* itsControllerStructure;		//## link itsControllerStructure
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsControllerStructure(ControllerStructure* const p_ControllerStructure);
    
    //## auto_generated
    void _setItsControllerStructure(ControllerStructure* const p_ControllerStructure);
    
    //## auto_generated
    void _clearItsControllerStructure(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerOutput.h
*********************************************************************/
