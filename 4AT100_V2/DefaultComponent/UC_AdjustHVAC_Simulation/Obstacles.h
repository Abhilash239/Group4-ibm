/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: Obstacles
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\Obstacles.h
*********************************************************************/

#ifndef Obstacles_H
#define Obstacles_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <OMDefaultReactivePort.h>
//## link itsCollisionDetectionSystem
class CollisionDetectionSystem;

//## package ActorPkg

//## actor Obstacles
class Obstacles {
public :

//#[ ignore
    //## package ActorPkg
    class Obstacles_port_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Obstacles_port_C(void);
        
        //## auto_generated
        virtual ~Obstacles_port_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectObstacles(Obstacles* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Obstacles(void);
    
    //## auto_generated
    ~Obstacles(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    Obstacles_port_C* getObstacles_port(void) const;
    
    //## auto_generated
    Obstacles_port_C* get_Obstacles_port(void) const;
    
    //## auto_generated
    const CollisionDetectionSystem* getItsCollisionDetectionSystem(void) const;
    
    //## auto_generated
    void setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

//#[ ignore
    Obstacles_port_C Obstacles_port;
//#]

    CollisionDetectionSystem* itsCollisionDetectionSystem;		//## link itsCollisionDetectionSystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem);
    
    //## auto_generated
    void _setItsCollisionDetectionSystem(CollisionDetectionSystem* const p_CollisionDetectionSystem);
    
    //## auto_generated
    void _clearItsCollisionDetectionSystem(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\Obstacles.h
*********************************************************************/
