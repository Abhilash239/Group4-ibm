/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: doubleFlowInterface
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\doubleFlowInterface.h
*********************************************************************/

#ifndef doubleFlowInterface_H
#define doubleFlowInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//#[ ignore
//## package FlowPortInterfaces

//## ignore
class doubleFlowInterface {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    doubleFlowInterface(void);
    
    //## auto_generated
    virtual ~doubleFlowInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation SetValue(double,void *)
    virtual void SetValue(double data, void * pCaller = NULL) = 0;
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\doubleFlowInterface.h
*********************************************************************/
