/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AdjustLightinginTruckCabin
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\AdjustLightinginTruckCabin.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AdjustLightinginTruckCabin.h"
//## link itsDriver
#include "Driver.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define UseCaseAnalysisPkg_AdjustHVACandLighting_AdjustLightinginTruckCabin_AdjustLightinginTruckCabin_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::AdjustHVACandLighting

//## usecase AdjustLightinginTruckCabin
AdjustLightinginTruckCabin::AdjustLightinginTruckCabin() {
    NOTIFY_CONSTRUCTOR(AdjustLightinginTruckCabin, AdjustLightinginTruckCabin(), 0, UseCaseAnalysisPkg_AdjustHVACandLighting_AdjustLightinginTruckCabin_AdjustLightinginTruckCabin_SERIALIZE);
    itsDriver = NULL;
    itsTruck = NULL;
}

AdjustLightinginTruckCabin::~AdjustLightinginTruckCabin() {
    NOTIFY_DESTRUCTOR(~AdjustLightinginTruckCabin, true);
    cleanUpRelations();
}

Driver* AdjustLightinginTruckCabin::getItsDriver() const {
    return itsDriver;
}

void AdjustLightinginTruckCabin::setItsDriver(Driver* p_Driver) {
    itsDriver = p_Driver;
    if(p_Driver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDriver", p_Driver, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
        }
}

Truck* AdjustLightinginTruckCabin::getItsTruck() const {
    return itsTruck;
}

void AdjustLightinginTruckCabin::setItsTruck(Truck* p_Truck) {
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

void AdjustLightinginTruckCabin::cleanUpRelations() {
    if(itsDriver != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
            itsDriver = NULL;
        }
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            itsTruck = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAdjustLightinginTruckCabin::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsDriver", false, true);
    if(myReal->itsDriver)
        {
            aomsRelations->ADD_ITEM(myReal->itsDriver);
        }
}
//#]

IMPLEMENT_META_P(AdjustLightinginTruckCabin, UseCaseAnalysisPkg_AdjustHVACandLighting, UseCaseAnalysisPkg::AdjustHVACandLighting, false, OMAnimatedAdjustLightinginTruckCabin)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AdjustLightinginTruckCabin.cpp
*********************************************************************/
