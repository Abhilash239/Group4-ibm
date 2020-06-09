/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerOutput
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerOutput.h
*********************************************************************/

#ifndef ControllerOutput_H
#define ControllerOutput_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ControllerModel.h"
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
        delta0_SP_C();
        
        //## auto_generated
        virtual ~delta0_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        void connectControllerOutput(ControllerOutput* part);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        doubleFlowInterface* itsDoubleFlowInterface;		//## link itsDoubleFlowInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedControllerOutput;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ControllerOutput();
    
    //## auto_generated
    ~ControllerOutput();
    
    ////    Operations    ////
    
//#[ ignore
    void SetValue(double data, void * pCaller = NULL);
    
    void setDelta0(double p_delta0);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    delta0_SP_C* getDelta0_SP() const;
    
    //## auto_generated
    delta0_SP_C* get_delta0_SP() const;
    
    //## auto_generated
    double getDelta0() const;
    
    //## auto_generated
    ControllerStructure* getItsControllerStructure() const;
    
    //## auto_generated
    void setItsControllerStructure(ControllerStructure* p_ControllerStructure);

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    double delta0;		//## attribute delta0
    
    ////    Relations and components    ////
    
//#[ ignore
    delta0_SP_C delta0_SP;
//#]

    ControllerStructure* itsControllerStructure;		//## link itsControllerStructure
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsControllerStructure(ControllerStructure* p_ControllerStructure);
    
    //## auto_generated
    void _setItsControllerStructure(ControllerStructure* p_ControllerStructure);
    
    //## auto_generated
    void _clearItsControllerStructure();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedControllerOutput : virtual public AOMInstance {
    DECLARE_META(ControllerOutput, OMAnimatedControllerOutput)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerOutput.h
*********************************************************************/
