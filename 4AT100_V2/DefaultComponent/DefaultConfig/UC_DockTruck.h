/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_DockTruck
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_DockTruck.h
*********************************************************************/

#ifndef UC_DockTruck_H
#define UC_DockTruck_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DriveAutonomously.h"
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance itsUC_FollowPath
#include "UC_FollowPath.h"
//## classInstance itsUC_GeneratePath
#include "UC_GeneratePath.h"
//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_DockTruck
class UC_DockTruck : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    explicit UC_DockTruck(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~UC_DockTruck(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const UC_FollowPath* getItsUC_FollowPath(void) const;
    
    //## auto_generated
    const UC_GeneratePath* getItsUC_GeneratePath(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Relations and components    ////

private :

    UC_FollowPath itsUC_FollowPath;		//## classInstance itsUC_FollowPath
    
    UC_GeneratePath itsUC_GeneratePath;		//## classInstance itsUC_GeneratePath
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_DockTruck.h
*********************************************************************/
