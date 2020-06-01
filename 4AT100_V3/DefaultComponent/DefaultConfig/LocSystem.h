/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LocSystem
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\LocSystem.h
*********************************************************************/

#ifndef LocSystem_H
#define LocSystem_H

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
#include "ActorPkg.h"
//## link itsToUnity
class ToUnity;

//## package ActorPkg

//## actor LocSystem
class LocSystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLocSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    LocSystem();
    
    //## auto_generated
    ~LocSystem();
    
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
class OMAnimatedLocSystem : virtual public AOMInstance {
    DECLARE_META(LocSystem, OMAnimatedLocSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LocSystem.h
*********************************************************************/
