/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_6 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: UC_FollowPath
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_6\UC_DockTruck_Simulation\UC_FollowPath.h
*********************************************************************/

#ifndef UC_FollowPath_H
#define UC_FollowPath_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DriveAutonomously.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## link itsUC_GeneratePath
class UC_GeneratePath;

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_FollowPath
class UC_FollowPath : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_FollowPath;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit UC_FollowPath(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~UC_FollowPath(void);
    
    ////    Operations    ////
    
    //## operation execFollowPath()
    virtual void execFollowPath(void);
    
    //## operation resFollowPath()
    virtual void resFollowPath(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const UC_GeneratePath* getItsUC_GeneratePath(void) const;
    
    //## auto_generated
    void setItsUC_GeneratePath(UC_GeneratePath* const p_UC_GeneratePath);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    UC_GeneratePath* itsUC_GeneratePath;		//## link itsUC_GeneratePath
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUC_GeneratePath(UC_GeneratePath* const p_UC_GeneratePath);
    
    //## auto_generated
    void _setItsUC_GeneratePath(UC_GeneratePath* const p_UC_GeneratePath);
    
    //## auto_generated
    void _clearItsUC_GeneratePath(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_FollowPath : virtual public AOMInstance {
    DECLARE_META(UC_FollowPath, OMAnimatedUC_FollowPath)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: component_6\UC_DockTruck_Simulation\UC_FollowPath.h
*********************************************************************/
