/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: ToUnity_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Tue, 2, Jun 2020  
	File Path	: DefaultComponent\ToUnity_Simulation\DCOperator.h
*********************************************************************/

#ifndef DCOperator_H
#define DCOperator_H

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
//## package ActorPkg

//## actor DCOperator
class DCOperator {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCOperator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCOperator();
    
    //## auto_generated
    ~DCOperator();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCOperator : virtual public AOMInstance {
    DECLARE_META(DCOperator, OMAnimatedDCOperator)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ToUnity_Simulation\DCOperator.h
*********************************************************************/
