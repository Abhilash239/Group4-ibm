/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerInput
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerInput.h
*********************************************************************/

#ifndef PathPlannerInput_H
#define PathPlannerInput_H

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

//## class PathPlannerInput
class PathPlannerInput {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPathPlannerInput;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PathPlannerInput();
    
    //## auto_generated
    ~PathPlannerInput();
    
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
class OMAnimatedPathPlannerInput : virtual public AOMInstance {
    DECLARE_META(PathPlannerInput, OMAnimatedPathPlannerInput)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerInput.h
*********************************************************************/
