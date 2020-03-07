/*********************************************************************
	Rhapsody	: 8.4 
	Login		: naika
	Component	: DefaultComponent 
	Configuration 	: UC_DispenseFuel_Simulation
	Model Element	: Cashier
//!	Generated Date	: Mon, 2, Dec 2019  
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\Cashier.h
*********************************************************************/

#ifndef Cashier_H
#define Cashier_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ActorPkg.h"
//## link itsUC_DispenseFuel
class UC_DispenseFuel;

//## package ActorPkg

//## actor Cashier
class Cashier {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCashier;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Cashier(void);
    
    //## auto_generated
    ~Cashier(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const UC_DispenseFuel* getItsUC_DispenseFuel(void) const;
    
    //## auto_generated
    void setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    UC_DispenseFuel* itsUC_DispenseFuel;		//## link itsUC_DispenseFuel
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel);
    
    //## auto_generated
    void _setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel);
    
    //## auto_generated
    void _clearItsUC_DispenseFuel(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCashier : virtual public AOMInstance {
    DECLARE_META(Cashier, OMAnimatedCashier)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\Cashier.h
*********************************************************************/
