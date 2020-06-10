/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: UC_AdjustLighting
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_AdjustLighting.h
*********************************************************************/

#ifndef UC_AdjustLighting_H
#define UC_AdjustLighting_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "AdjustHVACandLighting.h"
//## link itsTruck
class Truck;

//## package UseCaseAnalysisPkg::AdjustHVACandLighting

//## class UC_AdjustLighting
class UC_AdjustLighting {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_AdjustLighting;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_AdjustLighting();
    
    //## auto_generated
    virtual ~UC_AdjustLighting();
    
    ////    Operations    ////
    
    //## operation adjustLighting(int)
    virtual void adjustLighting(int lighting);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getLightingIntensity() const;
    
    //## auto_generated
    void setLightingIntensity(int p_lightingIntensity);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int lightingIntensity;		//## attribute lightingIntensity
    
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
class OMAnimatedUC_AdjustLighting : virtual public AOMInstance {
    DECLARE_META(UC_AdjustLighting, OMAnimatedUC_AdjustLighting)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_AdjustLighting.h
*********************************************************************/
