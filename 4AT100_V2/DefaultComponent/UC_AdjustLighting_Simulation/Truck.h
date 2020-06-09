/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustLighting_Simulation
	Model Element	: Truck
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\Truck.h
*********************************************************************/

#ifndef Truck_H
#define Truck_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## link itsADS
class ADS;

//## link itsUC_AdjustHVAC
class UC_AdjustHVAC;

//## link itsUC_AdjustLighting
class UC_AdjustLighting;

//## link itsUGE
class UGE;

//## package ActorPkg

//## actor Truck
class Truck {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Truck(void);
    
    //## auto_generated
    ~Truck(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const ADS* getItsADS(void) const;
    
    //## auto_generated
    void setItsADS(ADS* const p_ADS);
    
    //## auto_generated
    const UC_AdjustHVAC* getItsUC_AdjustHVAC(void) const;
    
    //## auto_generated
    void setItsUC_AdjustHVAC(UC_AdjustHVAC* const p_UC_AdjustHVAC);
    
    //## auto_generated
    const UC_AdjustLighting* getItsUC_AdjustLighting(void) const;
    
    //## auto_generated
    void setItsUC_AdjustLighting(UC_AdjustLighting* const p_UC_AdjustLighting);
    
    //## auto_generated
    const UGE* getItsUGE(void) const;
    
    //## auto_generated
    void setItsUGE(UGE* const p_UGE);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    ADS* itsADS;		//## link itsADS
    
    UC_AdjustHVAC* itsUC_AdjustHVAC;		//## link itsUC_AdjustHVAC
    
    UC_AdjustLighting* itsUC_AdjustLighting;		//## link itsUC_AdjustLighting
    
    UGE* itsUGE;		//## link itsUGE
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsADS(ADS* const p_ADS);
    
    //## auto_generated
    void _setItsADS(ADS* const p_ADS);
    
    //## auto_generated
    void _clearItsADS(void);
    
    //## auto_generated
    void __setItsUC_AdjustHVAC(UC_AdjustHVAC* const p_UC_AdjustHVAC);
    
    //## auto_generated
    void _setItsUC_AdjustHVAC(UC_AdjustHVAC* const p_UC_AdjustHVAC);
    
    //## auto_generated
    void _clearItsUC_AdjustHVAC(void);
    
    //## auto_generated
    void __setItsUC_AdjustLighting(UC_AdjustLighting* const p_UC_AdjustLighting);
    
    //## auto_generated
    void _setItsUC_AdjustLighting(UC_AdjustLighting* const p_UC_AdjustLighting);
    
    //## auto_generated
    void _clearItsUC_AdjustLighting(void);
    
    //## auto_generated
    void __setItsUGE(UGE* const p_UGE);
    
    //## auto_generated
    void _setItsUGE(UGE* const p_UGE);
    
    //## auto_generated
    void _clearItsUGE(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\Truck.h
*********************************************************************/
