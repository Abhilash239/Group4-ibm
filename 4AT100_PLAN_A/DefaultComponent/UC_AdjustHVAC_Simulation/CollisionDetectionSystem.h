/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: CollisionDetectionSystem
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\CollisionDetectionSystem.h
*********************************************************************/

#ifndef CollisionDetectionSystem_H
#define CollisionDetectionSystem_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## link itsToUnity
class ToUnity;

//## package ActorPkg

//## actor CollisionDetectionSystem
class CollisionDetectionSystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCollisionDetectionSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CollisionDetectionSystem();
    
    //## auto_generated
    ~CollisionDetectionSystem();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ToUnity* getItsToUnity() const;
    
    //## auto_generated
    void setItsToUnity(ToUnity* p_ToUnity);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ToUnity* itsToUnity;		//## link itsToUnity
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsToUnity(ToUnity* p_ToUnity);
    
    //## auto_generated
    void _setItsToUnity(ToUnity* p_ToUnity);
    
    //## auto_generated
    void _clearItsToUnity();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCollisionDetectionSystem : virtual public AOMInstance {
    DECLARE_META(CollisionDetectionSystem, OMAnimatedCollisionDetectionSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\CollisionDetectionSystem.h
*********************************************************************/
