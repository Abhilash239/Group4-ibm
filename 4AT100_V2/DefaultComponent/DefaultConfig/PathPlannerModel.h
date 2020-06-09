/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerModel
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerModel.h
*********************************************************************/

#ifndef PathPlannerModel_H
#define PathPlannerModel_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## link itsPathPlannerStructure
class PathPlannerStructure;

//## package PathPlannerModel

//## class PathPlannerModel
class PathPlannerModel : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    explicit PathPlannerModel(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~PathPlannerModel(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const PathPlannerStructure* getItsPathPlannerStructure(void) const;
    
    //## auto_generated
    void setItsPathPlannerStructure(PathPlannerStructure* const p_PathPlannerStructure);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
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
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum PathPlannerModel_Enum {
        OMNonState = 0
    };
//#]

private :

//#[ ignore
    PathPlannerModel_Enum rootState_subState;
    
    PathPlannerModel_Enum rootState_active;
//#]
};

inline RhpBoolean PathPlannerModel::rootState_IN(void) const {
    return true;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerModel.h
*********************************************************************/
