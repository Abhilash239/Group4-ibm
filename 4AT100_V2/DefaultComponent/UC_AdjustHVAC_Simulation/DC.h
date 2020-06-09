/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: DC
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\DC.h
*********************************************************************/

#ifndef DC_H
#define DC_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <OMDefaultReactivePort.h>
//## package ActorPkg

//## actor DC
class DC {
public :

//#[ ignore
    //## package ActorPkg
    class port_13_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_13_C(void);
        
        //## auto_generated
        virtual ~port_13_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectDC(DC* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DC(void);
    
    //## auto_generated
    virtual ~DC(void);
    
    ////    Operations    ////
    
    //## operation Operation_2()
    virtual void Operation_2(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    port_13_C* getPort_13(void) const;
    
    //## auto_generated
    port_13_C* get_port_13(void) const;
    
    ////    Relations and components    ////

private :

//#[ ignore
    port_13_C port_13;
//#]
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\DC.h
*********************************************************************/
