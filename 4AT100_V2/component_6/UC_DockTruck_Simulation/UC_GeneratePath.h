/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_6 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: UC_GeneratePath
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_6\UC_DockTruck_Simulation\UC_GeneratePath.h
*********************************************************************/

#ifndef UC_GeneratePath_H
#define UC_GeneratePath_H

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
//## link itsUC_FollowPath
class UC_FollowPath;

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_GeneratePath
class UC_GeneratePath : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_GeneratePath;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit UC_GeneratePath(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~UC_GeneratePath(void);
    
    ////    Operations    ////
    
    //## operation execGeneratePath()
    virtual void execGeneratePath(void);
    
    //## operation resGeneratePath()
    virtual void resGeneratePath(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const UC_FollowPath* getItsUC_FollowPath(void) const;
    
    //## auto_generated
    void setItsUC_FollowPath(UC_FollowPath* const p_UC_FollowPath);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    UC_FollowPath* itsUC_FollowPath;		//## link itsUC_FollowPath
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUC_FollowPath(UC_FollowPath* const p_UC_FollowPath);
    
    //## auto_generated
    void _setItsUC_FollowPath(UC_FollowPath* const p_UC_FollowPath);
    
    //## auto_generated
    void _clearItsUC_FollowPath(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_GeneratePath : virtual public AOMInstance {
    DECLARE_META(UC_GeneratePath, OMAnimatedUC_GeneratePath)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: component_6\UC_DockTruck_Simulation\UC_GeneratePath.h
*********************************************************************/
