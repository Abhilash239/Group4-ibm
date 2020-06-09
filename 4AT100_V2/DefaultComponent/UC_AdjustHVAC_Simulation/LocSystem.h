/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: LocSystem
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\LocSystem.h
*********************************************************************/

#ifndef LocSystem_H
#define LocSystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## link itsUGE
class UGE;

//## package ActorPkg

//## actor LocSystem
class LocSystem {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    LocSystem(void);
    
    //## auto_generated
    ~LocSystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const UGE* getItsUGE(void) const;
    
    //## auto_generated
    void setItsUGE(UGE* const p_UGE);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    UGE* itsUGE;		//## link itsUGE
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUGE(UGE* const p_UGE);
    
    //## auto_generated
    void _setItsUGE(UGE* const p_UGE);
    
    //## auto_generated
    void _clearItsUGE(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\LocSystem.h
*********************************************************************/
