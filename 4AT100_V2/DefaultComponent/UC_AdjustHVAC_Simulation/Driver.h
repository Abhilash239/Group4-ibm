/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: Driver
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\Driver.h
*********************************************************************/

#ifndef Driver_H
#define Driver_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## link itsGUI
class GUI;

//## package ActorPkg

//## actor Driver
class Driver {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Driver(void);
    
    //## auto_generated
    ~Driver(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const GUI* getItsGUI(void) const;
    
    //## auto_generated
    void setItsGUI(GUI* const p_GUI);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    GUI* itsGUI;		//## link itsGUI
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsGUI(GUI* const p_GUI);
    
    //## auto_generated
    void _setItsGUI(GUI* const p_GUI);
    
    //## auto_generated
    void _clearItsGUI(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\Driver.h
*********************************************************************/
