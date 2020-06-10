/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: UC_ControlPath
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_ControlPath.h
*********************************************************************/

#ifndef UC_ControlPath_H
#define UC_ControlPath_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "DriveAutonomously.h"
//## link itsUC_DockTruck
class UC_DockTruck;

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_ControlPath
class UC_ControlPath {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_ControlPath;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_ControlPath();
    
    //## auto_generated
    ~UC_ControlPath();
    
    ////    Additional operations    ////
    
    //## auto_generated
    UC_DockTruck* getItsUC_DockTruck() const;
    
    //## auto_generated
    void setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    UC_DockTruck* itsUC_DockTruck;		//## link itsUC_DockTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck);
    
    //## auto_generated
    void _setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck);
    
    //## auto_generated
    void _clearItsUC_DockTruck();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_ControlPath : virtual public AOMInstance {
    DECLARE_META(UC_ControlPath, OMAnimatedUC_ControlPath)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_ControlPath.h
*********************************************************************/
