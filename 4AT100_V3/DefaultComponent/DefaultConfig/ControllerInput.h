/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ControllerInput
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ControllerInput.h
*********************************************************************/

#ifndef ControllerInput_H
#define ControllerInput_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ControllerModel.h"
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
        psi_h_SP_C();
        
        //## auto_generated
        virtual ~psi_h_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface();
        
        //## auto_generated
        doubleFlowInterface* getOutBound();
        
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
    
    //## package ControllerModel
    class psi_st_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        psi_st_SP_C();
        
        //## auto_generated
        virtual ~psi_st_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface();
        
        //## auto_generated
        doubleFlowInterface* getOutBound();
        
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
    
    //## package ControllerModel
    class v_h_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        v_h_SP_C();
        
        //## auto_generated
        virtual ~v_h_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface();
        
        //## auto_generated
        doubleFlowInterface* getOutBound();
        
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
    
    //## package ControllerModel
    class x_st_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        x_st_SP_C();
        
        //## auto_generated
        virtual ~x_st_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface();
        
        //## auto_generated
        doubleFlowInterface* getOutBound();
        
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
    
    //## package ControllerModel
    class y_st_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        y_st_SP_C();
        
        //## auto_generated
        virtual ~y_st_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface();
        
        //## auto_generated
        doubleFlowInterface* getOutBound();
        
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
    friend class OMAnimatedControllerInput;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ControllerInput();
    
    //## auto_generated
    ~ControllerInput();
    
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
    psi_h_SP_C* getPsi_h_SP() const;
    
    //## auto_generated
    psi_h_SP_C* get_psi_h_SP() const;
    
    //## auto_generated
    psi_st_SP_C* getPsi_st_SP() const;
    
    //## auto_generated
    psi_st_SP_C* get_psi_st_SP() const;
    
    //## auto_generated
    v_h_SP_C* getV_h_SP() const;
    
    //## auto_generated
    v_h_SP_C* get_v_h_SP() const;
    
    //## auto_generated
    x_st_SP_C* getX_st_SP() const;
    
    //## auto_generated
    x_st_SP_C* get_x_st_SP() const;
    
    //## auto_generated
    y_st_SP_C* getY_st_SP() const;
    
    //## auto_generated
    y_st_SP_C* get_y_st_SP() const;
    
    //## auto_generated
    double getPsi_h() const;
    
    //## auto_generated
    double getPsi_st() const;
    
    //## auto_generated
    double getV_h() const;
    
    //## auto_generated
    double getX_st() const;
    
    //## auto_generated
    double getY_st() const;
    
    //## auto_generated
    ControllerStructure* getItsControllerStructure() const;
    
    //## auto_generated
    void setItsControllerStructure(ControllerStructure* p_ControllerStructure);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
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
    void __setItsControllerStructure(ControllerStructure* p_ControllerStructure);
    
    //## auto_generated
    void _setItsControllerStructure(ControllerStructure* p_ControllerStructure);
    
    //## auto_generated
    void _clearItsControllerStructure();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedControllerInput : virtual public AOMInstance {
    DECLARE_META(ControllerInput, OMAnimatedControllerInput)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ControllerInput.h
*********************************************************************/
