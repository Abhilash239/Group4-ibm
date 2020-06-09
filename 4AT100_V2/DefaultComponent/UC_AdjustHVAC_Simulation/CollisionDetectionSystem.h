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
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## link itsObstacles
class Obstacles;

//## link itsUGE
class UGE;

//## package ActorPkg

//## actor CollisionDetectionSystem
class CollisionDetectionSystem {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    CollisionDetectionSystem(void);
    
    //## auto_generated
    ~CollisionDetectionSystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Obstacles* getItsObstacles(void) const;
    
    //## auto_generated
    void setItsObstacles(Obstacles* const p_Obstacles);
    
    //## auto_generated
    const UGE* getItsUGE(void) const;
    
    //## auto_generated
    void setItsUGE(UGE* const p_UGE);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Obstacles* itsObstacles;		//## link itsObstacles
    
    UGE* itsUGE;		//## link itsUGE
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsObstacles(Obstacles* const p_Obstacles);
    
    //## auto_generated
    void _setItsObstacles(Obstacles* const p_Obstacles);
    
    //## auto_generated
    void _clearItsObstacles(void);
    
    //## auto_generated
    void __setItsUGE(UGE* const p_UGE);
    
    //## auto_generated
    void _setItsUGE(UGE* const p_UGE);
    
    //## auto_generated
    void _clearItsUGE(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\CollisionDetectionSystem.h
*********************************************************************/
