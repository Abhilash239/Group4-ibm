/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustLighting_Simulation
	Model Element	: UGE
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\UGE.h
*********************************************************************/

#ifndef UGE_H
#define UGE_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## link itsCollisionDetectionSystem
class CollisionDetectionSystem;

//## link itsLocSystem
class LocSystem;

//## link itsTruck
class Truck;

//## package ArchitecturePkg

//## class UGE
class UGE {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    UGE(void);
    
    //## auto_generated
    virtual ~UGE(void);
    
    ////    Operations    ////
    
    //## operation reqTruckPosition()
    virtual void reqTruckPosition(void);
    
    //## operation resTruckPosition()
    virtual void resTruckPosition(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const CollisionDetectionSystem* getItsCollisionDetectionSystem(void) const;
    
    //## auto_generated
    void setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem);
    
    //## auto_generated
    const LocSystem* getItsLocSystem(void) const;
    
    //## auto_generated
    void setItsLocSystem(LocSystem* const p_LocSystem);
    
    //## auto_generated
    const Truck* getItsTruck(void) const;
    
    //## auto_generated
    void setItsTruck(Truck* const p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    CollisionDetectionSystem* itsCollisionDetectionSystem;		//## link itsCollisionDetectionSystem
    
    LocSystem* itsLocSystem;		//## link itsLocSystem
    
    Truck* itsTruck;		//## link itsTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem);
    
    //## auto_generated
    void _setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem);
    
    //## auto_generated
    void _clearItsCollisionDetectionSystem(void);
    
    //## auto_generated
    void __setItsLocSystem(LocSystem* const p_LocSystem);
    
    //## auto_generated
    void _setItsLocSystem(LocSystem* const p_LocSystem);
    
    //## auto_generated
    void _clearItsLocSystem(void);
    
    //## auto_generated
    void __setItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    void _setItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    void _clearItsTruck(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\UGE.h
*********************************************************************/
