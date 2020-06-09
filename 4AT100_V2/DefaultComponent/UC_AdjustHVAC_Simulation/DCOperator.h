/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\DCOperator.h
*********************************************************************/

#ifndef DCOperator_H
#define DCOperator_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## link itsGUI
class GUI;

//## package ActorPkg

//## actor DCOperator
class DCOperator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DCOperator(void);
    
    //## auto_generated
    ~DCOperator(void);
    
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
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\DCOperator.h
*********************************************************************/
