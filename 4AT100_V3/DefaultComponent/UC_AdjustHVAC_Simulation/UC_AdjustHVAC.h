/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: UC_AdjustHVAC
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_AdjustHVAC.h
*********************************************************************/

#ifndef UC_AdjustHVAC_H
#define UC_AdjustHVAC_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
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
    class Activity_2OfUC_AdjustHVAC;
    
//#[ ignore
    class Activity_2OfUC_AdjustHVAC : virtual public OMActivity {
    public :
    
        class ActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC(const OMString& id, Activity_2OfUC_AdjustHVAC& activity, IOxfEvent::ID eventId, UC_AdjustHVAC& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_AdjustHVAC* mContext;
        };
        
        class ActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC(const OMString& id, Activity_2OfUC_AdjustHVAC& activity, UC_AdjustHVAC& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setCooling(int value);
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_AdjustHVAC* mContext;
            
            int cooling;
        };
        
        class ActionActivityfinal_4InActivityActivity_2OfUC_AdjustHVAC : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_4InActivityActivity_2OfUC_AdjustHVAC(const OMString& id, Activity_2OfUC_AdjustHVAC& activity, UC_AdjustHVAC& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_AdjustHVAC* mContext;
        };
        
        ////    Constructors and destructors    ////
        
        Activity_2OfUC_AdjustHVAC(UC_AdjustHVAC& context);
        
        ////    Framework    ////
        
        UC_AdjustHVAC* mContext;
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_AdjustHVAC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_AdjustHVAC();
    
    //## auto_generated
    virtual ~UC_AdjustHVAC();
    
    ////    Operations    ////
    
    //## operation adjustHVAC(int)
    virtual void adjustHVAC(int cooling);
    
//#[ ignore
    virtual OMActivity* createMainActivity();
    
    virtual void* getMe();
//#]

    //## activity_action activity_2:ROOT.accepteventaction_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC();
    
    //## activity_action activity_2:ROOT.accepteventaction_0
    void delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_2OfUC_AdjustHVAC();
    
    //## activity_action activity_2:ROOT.calloperation_2
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC(int cooling);
    
    //## activity_action activity_2:ROOT.calloperation_2
    void delegatedInvokeContextMethodFromActionCalloperation_2InActivityActivity_2OfUC_AdjustHVAC(int cooling);
    
    //## activity_action activity_2:ROOT.activityfinal_4
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_4InActivityActivity_2OfUC_AdjustHVAC();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getCoolingValue() const;
    
    //## auto_generated
    void setCoolingValue(int p_coolingValue);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int coolingValue;		//## attribute coolingValue
    
    ////    Relations and components    ////
    
    Truck* itsTruck;		//## link itsTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_AdjustHVAC : virtual public AOMInstance {
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;

    DECLARE_ACTIVITY_META(UC_AdjustHVAC, OMAnimatedUC_AdjustHVAC)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_AdjustHVAC.h
*********************************************************************/
