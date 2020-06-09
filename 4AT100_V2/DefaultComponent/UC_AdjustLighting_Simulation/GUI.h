/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustLighting_Simulation
	Model Element	: GUI
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\GUI.h
*********************************************************************/

#ifndef GUI_H
#define GUI_H

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
//## classInstance itsUC_AdjustHVAC
#include "UC_AdjustHVAC.h"
//## classInstance itsUC_AdjustLighting
#include "UC_AdjustLighting.h"
//## link itsDCOperator
class DCOperator;

//## link itsDriver
class Driver;

//## package ArchitecturePkg

//## class GUI
class GUI : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    explicit GUI(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~GUI(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getDocknumber(void) const;
    
    //## auto_generated
    void setDocknumber(const int p_docknumber);
    
    //## auto_generated
    const DCOperator* getItsDCOperator(void) const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* const p_DCOperator);
    
    //## auto_generated
    const Driver* getItsDriver(void) const;
    
    //## auto_generated
    void setItsDriver(Driver* const p_Driver);
    
    //## auto_generated
    const UC_AdjustHVAC* getItsUC_AdjustHVAC(void) const;
    
    //## auto_generated
    const UC_AdjustLighting* getItsUC_AdjustLighting(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int docknumber;		//## attribute docknumber
    
    ////    Relations and components    ////
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Driver* itsDriver;		//## link itsDriver
    
    UC_AdjustHVAC itsUC_AdjustHVAC;		//## classInstance itsUC_AdjustHVAC
    
    UC_AdjustLighting itsUC_AdjustLighting;		//## classInstance itsUC_AdjustLighting
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCOperator(DCOperator* const p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* const p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator(void);
    
    //## auto_generated
    void __setItsDriver(Driver* const p_Driver);
    
    //## auto_generated
    void _setItsDriver(Driver* const p_Driver);
    
    //## auto_generated
    void _clearItsDriver(void);
    
    //## auto_generated
    virtual void destroy(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\GUI.h
*********************************************************************/
