/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GeneratePath
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\GeneratePath.h
*********************************************************************/

#ifndef GeneratePath_H
#define GeneratePath_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "winsock2.h"
//## auto_generated
#include "stdio.h"
//## auto_generated
#include "windows.h"
//## auto_generated
#include "iostream"
//## auto_generated
#include "Ws2tcpip.h"
//## auto_generated
#include "string.h"
//## auto_generated
#include "DriveAutonomously.h"
//## link itsCollisionDetectionSystem
class CollisionDetectionSystem;

//## link itsLocSystem
class LocSystem;

//## package UseCaseAnalysisPkg::DriveAutonomously

//## usecase GeneratePath
class GeneratePath {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGeneratePath;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GeneratePath();
    
    //## auto_generated
    ~GeneratePath();
    
    ////    Additional operations    ////
    
    //## auto_generated
    CollisionDetectionSystem* getItsCollisionDetectionSystem() const;
    
    //## auto_generated
    void setItsCollisionDetectionSystem(CollisionDetectionSystem* p_CollisionDetectionSystem);
    
    //## auto_generated
    LocSystem* getItsLocSystem() const;
    
    //## auto_generated
    void setItsLocSystem(LocSystem* p_LocSystem);
    
    //## auto_generated
    LocSystem* getItsLocSystem_1() const;
    
    //## auto_generated
    void setItsLocSystem_1(LocSystem* p_LocSystem);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    CollisionDetectionSystem* itsCollisionDetectionSystem;		//## link itsCollisionDetectionSystem
    
    LocSystem* itsLocSystem;		//## link itsLocSystem
    
    LocSystem* itsLocSystem_1;		//## link itsLocSystem_1
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGeneratePath : virtual public AOMInstance {
    DECLARE_META(GeneratePath, OMAnimatedGeneratePath)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GeneratePath.h
*********************************************************************/
