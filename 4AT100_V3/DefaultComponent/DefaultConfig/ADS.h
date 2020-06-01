/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ADS
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ADS.h
*********************************************************************/

#ifndef ADS_H
#define ADS_H

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
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsGUI
#include "GUI.h"
//## classInstance itsToUnity
#include "ToUnity.h"
//## classInstance itsUC_ControlPath
#include "UC_ControlPath.h"
//## classInstance itsUC_DockTruck
#include "UC_DockTruck.h"
//## package UseCaseAnalysisPkg::DriveAutonomously

//## class ADS
class ADS : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedADS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ADS(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~ADS();
    
    ////    Additional operations    ////
    
    //## auto_generated
    GUI* getItsGUI() const;
    
    //## auto_generated
    ToUnity* getItsToUnity() const;
    
    //## auto_generated
    UC_ControlPath* getItsUC_ControlPath() const;
    
    //## auto_generated
    UC_DockTruck* getItsUC_DockTruck() const;
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Relations and components    ////

protected :

    GUI itsGUI;		//## classInstance itsGUI
    
    ToUnity itsToUnity;		//## classInstance itsToUnity
    
    UC_ControlPath itsUC_ControlPath;		//## classInstance itsUC_ControlPath
    
    UC_DockTruck itsUC_DockTruck;		//## classInstance itsUC_DockTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedADS : virtual public AOMInstance {
    DECLARE_META(ADS, OMAnimatedADS)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ADS.h
*********************************************************************/
