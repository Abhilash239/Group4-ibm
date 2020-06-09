/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerOutput
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerOutput.h
*********************************************************************/

#ifndef PathPlannerOutput_H
#define PathPlannerOutput_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "PathPlannerModel.h"
//## link itsPathPlannerStructure
class PathPlannerStructure;

//## package PathPlannerModel

//## class PathPlannerOutput
class PathPlannerOutput {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPathPlannerOutput;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PathPlannerOutput();
    
    //## auto_generated
    ~PathPlannerOutput();
    
    ////    Additional operations    ////
    
    //## auto_generated
    PathPlannerStructure* getItsPathPlannerStructure() const;
    
    //## auto_generated
    void setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    PathPlannerStructure* itsPathPlannerStructure;		//## link itsPathPlannerStructure
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure);
    
    //## auto_generated
    void _setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure);
    
    //## auto_generated
    void _clearItsPathPlannerStructure();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPathPlannerOutput : virtual public AOMInstance {
    DECLARE_META(PathPlannerOutput, OMAnimatedPathPlannerOutput)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerOutput.h
*********************************************************************/
