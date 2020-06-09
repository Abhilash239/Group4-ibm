/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_GeneratePath
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_GeneratePath.h
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
    ////    Constructors and destructors    ////
    
public :

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_GeneratePath.h
*********************************************************************/
