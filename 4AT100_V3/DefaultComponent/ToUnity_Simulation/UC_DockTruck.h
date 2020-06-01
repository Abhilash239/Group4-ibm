/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: ToUnity_Simulation
	Model Element	: UC_DockTruck
//!	Generated Date	: Tue, 2, Jun 2020  
	File Path	: DefaultComponent\ToUnity_Simulation\UC_DockTruck.h
*********************************************************************/

#ifndef UC_DockTruck_H
#define UC_DockTruck_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "winsock2.h"
//## auto_generated
#include "stdio.h"
//## auto_generated
#include "windows.h"
//## auto_generated
#include "iostream"
//## auto_generated
#include "Ws2tcpip.h"
//## auto_generated
#include "string.h"
//## auto_generated
#include "DriveAutonomously.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class UC_DockTruck
#include "_Out.h"
//## link itsGUI
class GUI;

//## link itsToUnity
class ToUnity;

//## link itsUC_ControlPath
class UC_ControlPath;

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class UC_DockTruck
class UC_DockTruck : public OMReactive, public _Out {
public :

//#[ ignore
    //## package UseCaseAnalysisPkg::DriveAutonomously
    class docknumber_SP_C : public _Out {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        docknumber_SP_C();
        
        //## auto_generated
        virtual ~docknumber_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectUC_DockTruck(UC_DockTruck* part);
        
        //## auto_generated
        _Out* getIts_Out();
        
        //## auto_generated
        virtual void setDocknumber(int p_docknumber);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setIts_Out(_Out* p__Out);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        _Out* its_Out;		//## link its_Out
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_DockTruck;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_DockTruck(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~UC_DockTruck();
    
    ////    Operations    ////
    
    //## operation checkFlag(RhpBoolean)
    virtual void checkFlag(RhpBoolean gp_flag);
    
    //## operation setDockReqData()
    virtual void setDockReqData();
    
//#[ ignore
    void setDocknumber(int p_docknumber);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    docknumber_SP_C* getDocknumber_SP() const;
    
    //## auto_generated
    docknumber_SP_C* get_docknumber_SP() const;
    
    //## auto_generated
    int getDocknumber() const;
    
    //## auto_generated
    RhpBoolean getGp_flag() const;
    
    //## auto_generated
    void setGp_flag(RhpBoolean p_gp_flag);
    
    //## auto_generated
    RhpReal getGp_obstaclePosX() const;
    
    //## auto_generated
    void setGp_obstaclePosX(RhpReal p_gp_obstaclePosX);
    
    //## auto_generated
    RhpReal getGp_obstaclePosY() const;
    
    //## auto_generated
    void setGp_obstaclePosY(RhpReal p_gp_obstaclePosY);
    
    //## auto_generated
    RhpReal getGp_trailer1PosX() const;
    
    //## auto_generated
    void setGp_trailer1PosX(RhpReal p_gp_trailer1PosX);
    
    //## auto_generated
    RhpReal getGp_trailer1PosY() const;
    
    //## auto_generated
    void setGp_trailer1PosY(RhpReal p_gp_trailer1PosY);
    
    //## auto_generated
    RhpReal getGp_trailer2PosX() const;
    
    //## auto_generated
    void setGp_trailer2PosX(RhpReal p_gp_trailer2PosX);
    
    //## auto_generated
    RhpReal getGp_trailer2PosY() const;
    
    //## auto_generated
    void setGp_trailer2PosY(RhpReal p_gp_trailer2PosY);
    
    //## auto_generated
    RhpReal getGp_truckPosX() const;
    
    //## auto_generated
    void setGp_truckPosX(RhpReal p_gp_truckPosX);
    
    //## auto_generated
    RhpReal getGp_truckPosY() const;
    
    //## auto_generated
    void setGp_truckPosY(RhpReal p_gp_truckPosY);
    
    //## auto_generated
    RhpReal getVelocity() const;
    
    //## auto_generated
    void setVelocity(RhpReal p_velocity);
    
    //## auto_generated
    GUI* getItsGUI() const;
    
    //## auto_generated
    void setItsGUI(GUI* p_GUI);
    
    //## auto_generated
    ToUnity* getItsToUnity() const;
    
    //## auto_generated
    void setItsToUnity(ToUnity* p_ToUnity);
    
    //## auto_generated
    UC_ControlPath* getItsUC_ControlPath() const;
    
    //## auto_generated
    void setItsUC_ControlPath(UC_ControlPath* p_UC_ControlPath);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int docknumber;		//## attribute docknumber
    
    RhpBoolean gp_flag;		//## attribute gp_flag
    
    RhpReal gp_obstaclePosX;		//## attribute gp_obstaclePosX
    
    RhpReal gp_obstaclePosY;		//## attribute gp_obstaclePosY
    
    RhpReal gp_trailer1PosX;		//## attribute gp_trailer1PosX
    
    RhpReal gp_trailer1PosY;		//## attribute gp_trailer1PosY
    
    RhpReal gp_trailer2PosX;		//## attribute gp_trailer2PosX
    
    RhpReal gp_trailer2PosY;		//## attribute gp_trailer2PosY
    
    RhpReal gp_truckPosX;		//## attribute gp_truckPosX
    
    RhpReal gp_truckPosY;		//## attribute gp_truckPosY
    
    RhpReal velocity;		//## attribute velocity
    
    ////    Relations and components    ////
    
//#[ ignore
    docknumber_SP_C docknumber_SP;
//#]

    GUI* itsGUI;		//## link itsGUI
    
    ToUnity* itsToUnity;		//## link itsToUnity
    
    UC_ControlPath* itsUC_ControlPath;		//## link itsUC_ControlPath
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsGUI(GUI* p_GUI);
    
    //## auto_generated
    void _setItsGUI(GUI* p_GUI);
    
    //## auto_generated
    void _clearItsGUI();
    
    //## auto_generated
    void __setItsToUnity(ToUnity* p_ToUnity);
    
    //## auto_generated
    void _setItsToUnity(ToUnity* p_ToUnity);
    
    //## auto_generated
    void _clearItsToUnity();
    
    //## auto_generated
    void __setItsUC_ControlPath(UC_ControlPath* p_UC_ControlPath);
    
    //## auto_generated
    void _setItsUC_ControlPath(UC_ControlPath* p_UC_ControlPath);
    
    //## auto_generated
    void _clearItsUC_ControlPath();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // WaitingForDockRequest:
    //## statechart_method
    inline bool WaitingForDockRequest_IN() const;
    
    // DockTruck:
    //## statechart_method
    inline bool DockTruck_IN() const;
    
    //## statechart_method
    void DockTruck_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus DockTruck_handleEvent();
    
    // GeneratePath:
    //## statechart_method
    inline bool GeneratePath_IN() const;
    
    // FollowPath:
    //## statechart_method
    inline bool FollowPath_IN() const;
    
    // accepttimeevent_7:
    //## statechart_method
    inline bool accepttimeevent_7_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum UC_DockTruck_Enum {
        OMNonState = 0,
        WaitingForDockRequest = 1,
        DockTruck = 2,
        GeneratePath = 3,
        FollowPath = 4,
        accepttimeevent_7 = 5
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int DockTruck_subState;
    
    IOxfTimeout* DockTruck_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_DockTruck : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC_DockTruck, OMAnimatedUC_DockTruck)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingForDockRequest_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DockTruck_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void GeneratePath_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FollowPath_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_7_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool UC_DockTruck::rootState_IN() const {
    return true;
}

inline bool UC_DockTruck::WaitingForDockRequest_IN() const {
    return rootState_subState == WaitingForDockRequest;
}

inline bool UC_DockTruck::DockTruck_IN() const {
    return rootState_subState == DockTruck;
}

inline bool UC_DockTruck::GeneratePath_IN() const {
    return DockTruck_subState == GeneratePath;
}

inline bool UC_DockTruck::FollowPath_IN() const {
    return DockTruck_subState == FollowPath;
}

inline bool UC_DockTruck::accepttimeevent_7_IN() const {
    return DockTruck_subState == accepttimeevent_7;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\ToUnity_Simulation\UC_DockTruck.h
*********************************************************************/
