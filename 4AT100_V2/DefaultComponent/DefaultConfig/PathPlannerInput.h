/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerInput
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerInput.h
*********************************************************************/

#ifndef PathPlannerInput_H
#define PathPlannerInput_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## link itsPathPlannerStructure
class PathPlannerStructure;

//## package PathPlannerModel

//## class PathPlannerInput
class PathPlannerInput {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    PathPlannerInput(void);
    
    //## auto_generated
    ~PathPlannerInput(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const PathPlannerStructure* getItsPathPlannerStructure(void) const;
    
    //## auto_generated
    void setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    PathPlannerStructure* itsPathPlannerStructure;		//## link itsPathPlannerStructure
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure);
    
    //## auto_generated
    void _setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure);
    
    //## auto_generated
    void _clearItsPathPlannerStructure(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerInput.h
*********************************************************************/
