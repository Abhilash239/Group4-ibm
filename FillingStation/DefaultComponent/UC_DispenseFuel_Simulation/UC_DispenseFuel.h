/*********************************************************************
	Rhapsody	: 8.4 
	Login		: naika
	Component	: DefaultComponent 
	Configuration 	: UC_DispenseFuel_Simulation
	Model Element	: UC_DispenseFuel
//!	Generated Date	: Mon, 16, Dec 2019  
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\UC_DispenseFuel.h
*********************************************************************/

#ifndef UC_DispenseFuel_H
#define UC_DispenseFuel_H

//## auto_generated
#include <WebComponents\WebComponentsTypes.h>
//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "DispenseFuelPkg.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## link itsCamera
class Camera;

//## link itsCashier
class Cashier;

//## link itsMotorist
class Motorist;

//#[ ignore
#define OMAnim_UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_setPayAtPump_RhpBoolean_ARGS_DECLARATION RhpBoolean p_payAtPump;
//#]

//## package UseCaseAnalysisPkg::DispenseFuelPkg

//## class UC_DispenseFuel
class UC_DispenseFuel : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_DispenseFuel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit UC_DispenseFuel(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~UC_DispenseFuel(void);
    
    ////    Operations    ////
    
    //## operation addTimestamp(int)
    virtual void addTimestamp(int picture);
    
    //## operation alertNewUser()
    virtual void alertNewUser(void);
    
    //## operation archivePicture()
    virtual void archivePicture(void);
    
    //## operation enablePump()
    virtual void enablePump(void);
    
    //## operation resetPump()
    virtual void resetPump(void);
    
    //## operation startPump()
    virtual void startPump(void);
    
    //## operation stopPump()
    virtual void stopPump(void);
    
    //## operation updatePrice()
    virtual void updatePrice(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const RhpBoolean getPayAtPump(void) const;
    
    //## auto_generated
    void setPayAtPump(const RhpBoolean p_payAtPump);
    
    //## auto_generated
    const int getTotalPrice(void) const;
    
    //## auto_generated
    void setTotalPrice(const int p_totalPrice);
    
    //## auto_generated
    const int getUnitPrice(void) const;
    
    //## auto_generated
    void setUnitPrice(const int p_unitPrice);
    
    //## auto_generated
    const int getUnitsPumped(void) const;
    
    //## auto_generated
    void setUnitsPumped(const int p_unitsPumped);
    
    //## auto_generated
    const Camera* getItsCamera(void) const;
    
    //## auto_generated
    void setItsCamera(Camera* const p_Camera);
    
    //## auto_generated
    const Cashier* getItsCashier(void) const;
    
    //## auto_generated
    void setItsCashier(Cashier* const p_Cashier);
    
    //## auto_generated
    const Motorist* getItsMotorist(void) const;
    
    //## auto_generated
    void setItsMotorist(Motorist* const p_Motorist);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);

public :

//#[ ignore
    virtual const ClassWebAdapter * getItsWebAdapter(void) const;
    
    void visitWebAdaptedRelations(void) const;
//#]

protected :

//#[ ignore
    void initWebAdapters(void);
//#]

private :

//#[ ignore
    void event_3WebWrapper(void);
    
    void event_4WebWrapper(void);
    
    void reqDispenseFuelWebWrapper(void);
    
    void evPictureTakenWebWrapper(void);
    
    void reqAuthorizeFuellingWebWrapper(void);
    
    void reqStartFuellingWebWrapper(void);
    
    void reqStopFuellingWebWrapper(void);
    
    void reqResetPumpWebWrapper(void);
//#]

    ////    Attributes    ////
    
    RhpBoolean payAtPump;		//## attribute payAtPump
    
    int totalPrice;		//## attribute totalPrice
    
    int unitPrice;		//## attribute unitPrice
    
    int unitsPumped;		//## attribute unitsPumped
    
    ////    Relations and components    ////
    
    Camera* itsCamera;		//## link itsCamera
    
    Cashier* itsCashier;		//## link itsCashier
    
    Motorist* itsMotorist;		//## link itsMotorist
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCamera(Camera* const p_Camera);
    
    //## auto_generated
    void _setItsCamera(Camera* const p_Camera);
    
    //## auto_generated
    void _clearItsCamera(void);
    
    //## auto_generated
    void __setItsCashier(Cashier* const p_Cashier);
    
    //## auto_generated
    void _setItsCashier(Cashier* const p_Cashier);
    
    //## auto_generated
    void _clearItsCashier(void);
    
    //## auto_generated
    void __setItsMotorist(Motorist* const p_Motorist);
    
    //## auto_generated
    void _setItsMotorist(Motorist* const p_Motorist);
    
    //## auto_generated
    void _clearItsMotorist(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // WaitingForCashier:
    //## statechart_method
    inline RhpBoolean WaitingForCashier_IN(void) const;
    
    // WaitingForCamera:
    //## statechart_method
    inline RhpBoolean WaitingForCamera_IN(void) const;
    
    // WaitingForBoth:
    //## statechart_method
    inline RhpBoolean WaitingForBoth_IN(void) const;
    
    // PumpEnabled:
    //## statechart_method
    inline RhpBoolean PumpEnabled_IN(void) const;
    
    //## statechart_method
    void PumpEnabled_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus PumpEnabled_handleEvent(void);
    
    // PumpOff:
    //## statechart_method
    inline RhpBoolean PumpOff_IN(void) const;
    
    // PumpActive:
    //## statechart_method
    inline RhpBoolean PumpActive_IN(void) const;
    
    // PumpDisabled:
    //## statechart_method
    inline RhpBoolean PumpDisabled_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum UC_DispenseFuel_Enum {
        OMNonState = 0,
        WaitingForCashier = 1,
        WaitingForCamera = 2,
        WaitingForBoth = 3,
        PumpEnabled = 4,
        PumpOff = 5,
        PumpActive = 6,
        PumpDisabled = 7
    };
//#]

private :

//#[ ignore
    UC_DispenseFuel_Enum rootState_subState;
    
    UC_DispenseFuel_Enum rootState_active;
    
    UC_DispenseFuel_Enum PumpEnabled_subState;
//#]

public :

//#[ ignore
    ClassWebAdapter * itsWebAdapter;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_setPayAtPump_RhpBoolean)

//#[ ignore
class OMAnimatedUC_DispenseFuel : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC_DispenseFuel, OMAnimatedUC_DispenseFuel)
    
    DECLARE_META_OP(UseCaseAnalysisPkg_DispenseFuelPkg_UC_DispenseFuel_setPayAtPump_RhpBoolean)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingForCashier_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingForCamera_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingForBoth_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PumpEnabled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PumpOff_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PumpActive_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PumpDisabled_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean UC_DispenseFuel::rootState_IN(void) const {
    return true;
}

inline RhpBoolean UC_DispenseFuel::WaitingForCashier_IN(void) const {
    return rootState_subState == WaitingForCashier;
}

inline RhpBoolean UC_DispenseFuel::WaitingForCamera_IN(void) const {
    return rootState_subState == WaitingForCamera;
}

inline RhpBoolean UC_DispenseFuel::WaitingForBoth_IN(void) const {
    return rootState_subState == WaitingForBoth;
}

inline RhpBoolean UC_DispenseFuel::PumpEnabled_IN(void) const {
    return rootState_subState == PumpEnabled;
}

inline RhpBoolean UC_DispenseFuel::PumpOff_IN(void) const {
    return PumpEnabled_subState == PumpOff;
}

inline RhpBoolean UC_DispenseFuel::PumpActive_IN(void) const {
    return PumpEnabled_subState == PumpActive;
}

inline RhpBoolean UC_DispenseFuel::PumpDisabled_IN(void) const {
    return rootState_subState == PumpDisabled;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\UC_DispenseFuel.h
*********************************************************************/
