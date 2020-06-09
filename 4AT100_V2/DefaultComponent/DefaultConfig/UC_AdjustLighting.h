/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_AdjustLighting
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_AdjustLighting.h
*********************************************************************/

#ifndef UC_AdjustLighting_H
#define UC_AdjustLighting_H

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

//## class UC_AdjustLighting
class UC_AdjustLighting : virtual public OMActivityContext {
public :

    //## auto_generated
    class Activity_adjustLightingOfUC_AdjustLighting;
    
//#[ ignore
    class Activity_adjustLightingOfUC_AdjustLighting : virtual public OMActivity {
    public :
    
        class ActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting(const OMString& id, Activity_adjustLightingOfUC_AdjustLighting& activity, IOxfEvent::ID eventId, UC_AdjustLighting& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void acceptEventData(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_AdjustLighting* mContext;
        };
        
        class ActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting(const OMString& id, Activity_adjustLightingOfUC_AdjustLighting& activity, UC_AdjustLighting& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void setLighting(int value);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_AdjustLighting* mContext;
            
            int lighting;
        };
        
        class ActionActivityfinal_3InActivityActivity_adjustLightingOfUC_AdjustLighting : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_3InActivityActivity_adjustLightingOfUC_AdjustLighting(const OMString& id, Activity_adjustLightingOfUC_AdjustLighting& activity, UC_AdjustLighting& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_AdjustLighting* mContext;
        };
        
        ////    Constructors and destructors    ////
        
        Activity_adjustLightingOfUC_AdjustLighting(UC_AdjustLighting& context);
        
        ////    Framework    ////
        
        UC_AdjustLighting* mContext;
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_AdjustLighting(void);
    
    //## auto_generated
    virtual ~UC_AdjustLighting(void);
    
    ////    Operations    ////
    
    //## operation adjustLighting(int)
    virtual void adjustLighting(int lighting);
    
//#[ ignore
    virtual OMActivity* createMainActivity(void);
//#]

    //## activity_action activity_adjustLighting:ROOT.accepteventaction_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting(void);
    
    //## activity_action activity_adjustLighting:ROOT.accepteventaction_0
    void delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_adjustLightingOfUC_AdjustLighting(void);
    
    //## activity_action activity_adjustLighting:ROOT.calloperation_1
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting(int lighting);
    
    //## activity_action activity_adjustLighting:ROOT.calloperation_1
    void delegatedInvokeContextMethodFromActionCalloperation_1InActivityActivity_adjustLightingOfUC_AdjustLighting(int lighting);
    
    //## activity_action activity_adjustLighting:ROOT.activityfinal_3
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_3InActivityActivity_adjustLightingOfUC_AdjustLighting(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getLightingIntensity(void) const;
    
    //## auto_generated
    void setLightingIntensity(const int p_lightingIntensity);
    
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

    int lightingIntensity;		//## attribute lightingIntensity
    
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
	File Path	: DefaultComponent\DefaultConfig\UC_AdjustLighting.h
*********************************************************************/
