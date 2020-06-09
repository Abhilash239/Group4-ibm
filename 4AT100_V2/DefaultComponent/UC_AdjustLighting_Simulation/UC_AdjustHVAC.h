/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustLighting_Simulation
	Model Element	: UC_AdjustHVAC
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\UC_AdjustHVAC.h
*********************************************************************/

#ifndef UC_AdjustHVAC_H
#define UC_AdjustHVAC_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//##   ignore
#include <simulation\OMActivityContext.h>
//## auto_generated
#include "AdjustHVACandLighting.h"
//## link itsTruck
class Truck;

//## package UseCaseAnalysisPkg::AdjustHVACandLighting

//## class UC_AdjustHVAC
class UC_AdjustHVAC : virtual public OMActivityContext {
public :

    //## auto_generated
    class Activity_adjustHVACOfUC_AdjustHVAC;
    
//#[ ignore
    class Activity_adjustHVACOfUC_AdjustHVAC : virtual public OMActivity {
    public :
    
        class ActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC(const OMString& id, Activity_adjustHVACOfUC_AdjustHVAC& activity, IOxfEvent::ID eventId, UC_AdjustHVAC& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void acceptEventData(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_AdjustHVAC* mContext;
        };
        
        class ActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC(const OMString& id, Activity_adjustHVACOfUC_AdjustHVAC& activity, UC_AdjustHVAC& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void setCooling(int value);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_AdjustHVAC* mContext;
            
            int cooling;
        };
        
        class ActionActivityfinal_4InActivityActivity_adjustHVACOfUC_AdjustHVAC : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_4InActivityActivity_adjustHVACOfUC_AdjustHVAC(const OMString& id, Activity_adjustHVACOfUC_AdjustHVAC& activity, UC_AdjustHVAC& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_AdjustHVAC* mContext;
        };
        
        ////    Constructors and destructors    ////
        
        Activity_adjustHVACOfUC_AdjustHVAC(UC_AdjustHVAC& context);
        
        ////    Framework    ////
        
        UC_AdjustHVAC* mContext;
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_AdjustHVAC(void);
    
    //## auto_generated
    virtual ~UC_AdjustHVAC(void);
    
    ////    Operations    ////
    
    //## operation adjustHVAC(int)
    virtual void adjustHVAC(int cooling);
    
//#[ ignore
    virtual OMActivity* createMainActivity(void);
//#]

    //## activity_action activity_adjustHVAC:ROOT.accepteventaction_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC(void);
    
    //## activity_action activity_adjustHVAC:ROOT.accepteventaction_0
    void delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_adjustHVACOfUC_AdjustHVAC(void);
    
    //## activity_action activity_adjustHVAC:ROOT.calloperation_2
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC(int cooling);
    
    //## activity_action activity_adjustHVAC:ROOT.calloperation_2
    void delegatedInvokeContextMethodFromActionCalloperation_2InActivityActivity_adjustHVACOfUC_AdjustHVAC(int cooling);
    
    //## activity_action activity_adjustHVAC:ROOT.activityfinal_4
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_4InActivityActivity_adjustHVACOfUC_AdjustHVAC(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getCoolingValue(void) const;
    
    //## auto_generated
    void setCoolingValue(const int p_coolingValue);
    
    //## auto_generated
    const Truck* getItsTruck(void) const;
    
    //## auto_generated
    void setItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int coolingValue;		//## attribute coolingValue
    
    ////    Relations and components    ////
    
    Truck* itsTruck;		//## link itsTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    void _setItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    void _clearItsTruck(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\UC_AdjustHVAC.h
*********************************************************************/
