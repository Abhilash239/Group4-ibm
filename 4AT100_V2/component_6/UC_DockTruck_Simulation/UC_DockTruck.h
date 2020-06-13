/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_6 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: UC_DockTruck
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_6\UC_DockTruck_Simulation\UC_DockTruck.h
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
#include <omthread.h>
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
//#[ ignore
#define OMAnim_UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_setDockNumber_int_ARGS_DECLARATION int p_dockNumber;
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_DockTruck
class UC_DockTruck : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_DockTruck;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit UC_DockTruck(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~UC_DockTruck(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getDockNumber(void) const;
    
    //## auto_generated
    void setDockNumber(const int p_dockNumber);
    
    //## auto_generated
    const bool getEmergency(void) const;
    
    //## auto_generated
    void setEmergency(const bool p_emergency);
    
    //## auto_generated
    const UC_FollowPath* getItsUC_FollowPath(void) const;
    
    //## auto_generated
    const UC_GeneratePath* getItsUC_GeneratePath(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);

public :

    //## TriggeredOperation reqStartFollowPath()
    void reqStartFollowPath(void);
    
    ////    Attributes    ////

private :

    int dockNumber;		//## attribute dockNumber
    
    bool emergency;		//## attribute emergency
    
    ////    Relations and components    ////
    
    UC_FollowPath itsUC_FollowPath;		//## classInstance itsUC_FollowPath
    
    UC_GeneratePath itsUC_GeneratePath;		//## classInstance itsUC_GeneratePath
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // PathGenerate:
    //## statechart_method
    inline RhpBoolean PathGenerate_IN(void) const;
    
    // InputDockNumber:
    //## statechart_method
    inline RhpBoolean InputDockNumber_IN(void) const;
    
    // idle:
    //## statechart_method
    inline RhpBoolean idle_IN(void) const;
    
    // FollowPath:
    //## statechart_method
    inline RhpBoolean FollowPath_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum UC_DockTruck_Enum {
        OMNonState = 0,
        PathGenerate = 1,
        InputDockNumber = 2,
        idle = 3,
        FollowPath = 4
    };
//#]

private :

//#[ ignore
    UC_DockTruck_Enum rootState_subState;
    
    UC_DockTruck_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_setDockNumber_int)

//#[ ignore
class OMAnimatedUC_DockTruck : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC_DockTruck, OMAnimatedUC_DockTruck)
    
    DECLARE_META_OP(UseCaseAnalysisPkg_DriveAutonomously_UC_DockTruck_setDockNumber_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PathGenerate_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void InputDockNumber_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FollowPath_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
class reqStartFollowPath_UC_DockTruck_Event : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    reqStartFollowPath_UC_DockTruck_Event(void);
    
    ////    Framework    ////
    
    static const IOxfEvent::ID reqStartFollowPath_UC_DockTruck_Event_id;
};
//#]

inline RhpBoolean UC_DockTruck::rootState_IN(void) const {
    return true;
}

inline RhpBoolean UC_DockTruck::PathGenerate_IN(void) const {
    return rootState_subState == PathGenerate;
}

inline RhpBoolean UC_DockTruck::InputDockNumber_IN(void) const {
    return rootState_subState == InputDockNumber;
}

inline RhpBoolean UC_DockTruck::idle_IN(void) const {
    return rootState_subState == idle;
}

inline RhpBoolean UC_DockTruck::FollowPath_IN(void) const {
    return rootState_subState == FollowPath;
}

#endif
/*********************************************************************
	File Path	: component_6\UC_DockTruck_Simulation\UC_DockTruck.h
*********************************************************************/
