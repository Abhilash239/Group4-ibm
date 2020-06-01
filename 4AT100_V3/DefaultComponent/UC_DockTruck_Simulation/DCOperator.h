/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\UC_DockTruck_Simulation\DCOperator.h
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
//## link itsGUI
class GUI;

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
    
    ////    Additional operations    ////
    
    //## auto_generated
    GUI* getItsGUI() const;
    
    //## auto_generated
    void setItsGUI(GUI* p_GUI);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    GUI* itsGUI;		//## link itsGUI
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsGUI(GUI* p_GUI);
    
    //## auto_generated
    void _setItsGUI(GUI* p_GUI);
    
    //## auto_generated
    void _clearItsGUI();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCOperator : virtual public AOMInstance {
    DECLARE_META(DCOperator, OMAnimatedDCOperator)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_DockTruck_Simulation\DCOperator.h
*********************************************************************/
