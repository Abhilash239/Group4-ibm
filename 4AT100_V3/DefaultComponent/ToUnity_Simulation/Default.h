/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 20184717
	Component	: DefaultComponent 
	Configuration 	: ToUnity_Simulation
	Model Element	: Default
//!	Generated Date	: Fri, 17, May 2019  
	File Path	: DefaultComponent\ToUnity_Simulation\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class ToUnity;

//#[ ignore
#define updateConnection_Default_id 18601
//#]

//## package Default



//## event updateConnection()
class updateConnection : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedupdateConnection;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    updateConnection();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedupdateConnection : virtual public AOMEvent {
    DECLARE_META_EVENT(updateConnection)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ToUnity_Simulation\Default.h
*********************************************************************/
