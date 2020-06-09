/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerInput
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerInput.h
*********************************************************************/

#ifndef ControllerInput_H
#define ControllerInput_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## class psi_h_SP_C
#include "doubleFlowInterface.h"
//## link itsControllerStructure
class ControllerStructure;

//## package ControllerModel

//## class ControllerInput
class ControllerInput {
public :

//#[ ignore
    //## package ControllerModel
    class psi_h_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        psi_h_SP_C(void);
        
        //## auto_generated
        virtual ~psi_h_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface(void);
        
        //## auto_generated
        doubleFlowInterface* getOutBound(void);
        
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
    
    //## package ControllerModel
    class psi_st_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        psi_st_SP_C(void);
        
        //## auto_generated
        virtual ~psi_st_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface(void);
        
        //## auto_generated
        doubleFlowInterface* getOutBound(void);
        
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
    
    //## package ControllerModel
    class v_h_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        v_h_SP_C(void);
        
        //## auto_generated
        virtual ~v_h_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface(void);
        
        //## auto_generated
        doubleFlowInterface* getOutBound(void);
        
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
    
    //## package ControllerModel
    class x_st_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        x_st_SP_C(void);
        
        //## auto_generated
        virtual ~x_st_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface(void);
        
        //## auto_generated
        doubleFlowInterface* getOutBound(void);
        
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
    
    //## package ControllerModel
    class y_st_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        y_st_SP_C(void);
        
        //## auto_generated
        virtual ~y_st_SP_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface(void);
        
        //## auto_generated
        doubleFlowInterface* getOutBound(void);
        
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
    ControllerInput(void);
    
    //## auto_generated
    ~ControllerInput(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setPsi_h(double p_psi_h);
    
    void setPsi_st(double p_psi_st);
    
    void setV_h(double p_v_h);
    
    void setX_st(double p_x_st);
    
    void setY_st(double p_y_st);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    psi_h_SP_C* getPsi_h_SP(void) const;
    
    //## auto_generated
    psi_h_SP_C* get_psi_h_SP(void) const;
    
    //## auto_generated
    psi_st_SP_C* getPsi_st_SP(void) const;
    
    //## auto_generated
    psi_st_SP_C* get_psi_st_SP(void) const;
    
    //## auto_generated
    v_h_SP_C* getV_h_SP(void) const;
    
    //## auto_generated
    v_h_SP_C* get_v_h_SP(void) const;
    
    //## auto_generated
    x_st_SP_C* getX_st_SP(void) const;
    
    //## auto_generated
    x_st_SP_C* get_x_st_SP(void) const;
    
    //## auto_generated
    y_st_SP_C* getY_st_SP(void) const;
    
    //## auto_generated
    y_st_SP_C* get_y_st_SP(void) const;
    
    //## auto_generated
    const double getPsi_h(void) const;
    
    //## auto_generated
    const double getPsi_st(void) const;
    
    //## auto_generated
    const double getV_h(void) const;
    
    //## auto_generated
    const double getX_st(void) const;
    
    //## auto_generated
    const double getY_st(void) const;
    
    //## auto_generated
    const ControllerStructure* getItsControllerStructure(void) const;
    
    //## auto_generated
    void setItsControllerStructure(ControllerStructure* const p_ControllerStructure);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    double psi_h;		//## attribute psi_h
    
    double psi_st;		//## attribute psi_st
    
    double v_h;		//## attribute v_h
    
    double x_st;		//## attribute x_st
    
    double y_st;		//## attribute y_st
    
    ////    Relations and components    ////
    
//#[ ignore
    psi_h_SP_C psi_h_SP;
    
    psi_st_SP_C psi_st_SP;
    
    v_h_SP_C v_h_SP;
    
    x_st_SP_C x_st_SP;
    
    y_st_SP_C y_st_SP;
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
	File Path	: DefaultComponent\DefaultConfig\ControllerInput.h
*********************************************************************/
