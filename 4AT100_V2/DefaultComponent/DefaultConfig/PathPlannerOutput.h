/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerOutput
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerOutput.h
*********************************************************************/

#ifndef PathPlannerOutput_H
#define PathPlannerOutput_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## link itsPathPlannerStructure
class PathPlannerStructure;

//## package PathPlannerModel

//## class PathPlannerOutput
class PathPlannerOutput {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    PathPlannerOutput(void);
    
    //## auto_generated
    ~PathPlannerOutput(void);
    
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
	File Path	: DefaultComponent\DefaultConfig\PathPlannerOutput.h
*********************************************************************/
