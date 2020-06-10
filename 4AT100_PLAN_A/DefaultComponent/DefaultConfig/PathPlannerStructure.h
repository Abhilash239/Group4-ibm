/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerStructure
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerStructure.h
*********************************************************************/

#ifndef PathPlannerStructure_H
#define PathPlannerStructure_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "PathPlannerModel.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsPathPlannerInput
#include "PathPlannerInput.h"
//## classInstance itsPathPlannerOutput
#include "PathPlannerOutput.h"
//## package PathPlannerModel

//## class PathPlannerStructure
class PathPlannerStructure : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPathPlannerStructure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PathPlannerStructure(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~PathPlannerStructure();
    
    ////    Additional operations    ////
    
    //## auto_generated
    PathPlannerInput* getItsPathPlannerInput() const;
    
    //## auto_generated
    PathPlannerModel* getItsPathPlannerModel() const;
    
    //## auto_generated
    PathPlannerOutput* getItsPathPlannerOutput() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    PathPlannerInput itsPathPlannerInput;		//## classInstance itsPathPlannerInput
    
    PathPlannerModel itsPathPlannerModel;		//## classInstance itsPathPlannerModel
    
    PathPlannerOutput itsPathPlannerOutput;		//## classInstance itsPathPlannerOutput
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPathPlannerStructure : virtual public AOMInstance {
    DECLARE_META(PathPlannerStructure, OMAnimatedPathPlannerStructure)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerStructure.h
*********************************************************************/
