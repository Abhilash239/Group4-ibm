/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: AdjustHVACandLighting
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\AdjustHVACandLighting.h
*********************************************************************/

#ifndef AdjustHVACandLighting_H
#define AdjustHVACandLighting_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class UC_AdjustHVAC;

//## auto_generated
class UC_AdjustLighting;

//#[ ignore
#define reqAdjustHVAC_AdjustHVACandLighting_UseCaseAnalysisPkg_id 13601

#define reqAdjustLighting_AdjustHVACandLighting_UseCaseAnalysisPkg_id 13602
//#]

//## package UseCaseAnalysisPkg::AdjustHVACandLighting



//## event reqAdjustHVAC()
class reqAdjustHVAC : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqAdjustHVAC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqAdjustHVAC();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqAdjustHVAC : virtual public AOMEvent {
    DECLARE_META_EVENT(reqAdjustHVAC)
};
//#]
#endif // _OMINSTRUMENT

//## event reqAdjustLighting()
class reqAdjustLighting : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqAdjustLighting;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqAdjustLighting();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqAdjustLighting : virtual public AOMEvent {
    DECLARE_META_EVENT(reqAdjustLighting)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\AdjustHVACandLighting.h
*********************************************************************/
