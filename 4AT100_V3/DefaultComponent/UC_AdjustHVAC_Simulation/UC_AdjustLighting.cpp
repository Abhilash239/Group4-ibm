/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: UC_AdjustLighting
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_AdjustLighting.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UC_AdjustLighting.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define UseCaseAnalysisPkg_AdjustHVACandLighting_UC_AdjustLighting_UC_AdjustLighting_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_AdjustHVACandLighting_UC_AdjustLighting_adjustLighting_SERIALIZE aomsmethod->addAttribute("lighting", x2String(lighting));
//#]

//## package UseCaseAnalysisPkg::AdjustHVACandLighting

//## class UC_AdjustLighting
UC_AdjustLighting::UC_AdjustLighting() {
    NOTIFY_CONSTRUCTOR(UC_AdjustLighting, UC_AdjustLighting(), 0, UseCaseAnalysisPkg_AdjustHVACandLighting_UC_AdjustLighting_UC_AdjustLighting_SERIALIZE);
    itsTruck = NULL;
}

UC_AdjustLighting::~UC_AdjustLighting() {
    NOTIFY_DESTRUCTOR(~UC_AdjustLighting, true);
    cleanUpRelations();
}

void UC_AdjustLighting::adjustLighting(int lighting) {
    NOTIFY_OPERATION(adjustLighting, adjustLighting(int), 1, UseCaseAnalysisPkg_AdjustHVACandLighting_UC_AdjustLighting_adjustLighting_SERIALIZE);
    //#[ operation adjustLighting(int)
    //#]
}

int UC_AdjustLighting::getLightingIntensity() const {
    return lightingIntensity;
}

void UC_AdjustLighting::setLightingIntensity(int p_lightingIntensity) {
    lightingIntensity = p_lightingIntensity;
}

Truck* UC_AdjustLighting::getItsTruck() const {
    return itsTruck;
}

void UC_AdjustLighting::setItsTruck(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsUC_AdjustLighting(this);
        }
    _setItsTruck(p_Truck);
}

void UC_AdjustLighting::cleanUpRelations() {
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            UC_AdjustLighting* p_UC_AdjustLighting = itsTruck->getItsUC_AdjustLighting();
            if(p_UC_AdjustLighting != NULL)
                {
                    itsTruck->__setItsUC_AdjustLighting(NULL);
                }
            itsTruck = NULL;
        }
}

void UC_AdjustLighting::__setItsTruck(Truck* p_Truck) {
    itsTruck = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
        }
}

void UC_AdjustLighting::_setItsTruck(Truck* p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsUC_AdjustLighting(NULL);
        }
    __setItsTruck(p_Truck);
}

void UC_AdjustLighting::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_AdjustLighting::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("lightingIntensity", x2String(myReal->lightingIntensity));
}

void OMAnimatedUC_AdjustLighting::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
}
//#]

IMPLEMENT_META_P(UC_AdjustLighting, UseCaseAnalysisPkg_AdjustHVACandLighting, UseCaseAnalysisPkg::AdjustHVACandLighting, false, OMAnimatedUC_AdjustLighting)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\UC_AdjustLighting.cpp
*********************************************************************/
