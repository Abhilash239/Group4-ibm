/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PathPlannerModel
//!	Generated Date	: Fri, 5, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\PathPlannerModel.h
*********************************************************************/

#ifndef PathPlannerModel_H
#define PathPlannerModel_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class PathPlannerInput;

//## auto_generated
class PathPlannerModel;

//## auto_generated
class PathPlannerOutput;

//## link itsPathPlannerStructure
class PathPlannerStructure;

//## package PathPlannerModel



//## package PathPlannerModel

//## class PathPlannerModel
class PathPlannerModel : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPathPlannerModel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PathPlannerModel(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~PathPlannerModel();
    
    ////    Additional operations    ////
    
    //## auto_generated
    PathPlannerStructure* getItsPathPlannerStructure() const;
    
    //## auto_generated
    void setItsPathPlannerStructure(PathPlannerStructure* p_PathPlannerStructure);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
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
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum PathPlannerModel_Enum {
        OMNonState = 0
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPathPlannerModel : virtual public AOMInstance {
    DECLARE_REACTIVE_META(PathPlannerModel, OMAnimatedPathPlannerModel)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool PathPlannerModel::rootState_IN() const {
    return true;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PathPlannerModel.h
*********************************************************************/
