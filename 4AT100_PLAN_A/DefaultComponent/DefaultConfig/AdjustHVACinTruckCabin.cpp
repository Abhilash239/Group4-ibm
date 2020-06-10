/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AdjustHVACinTruckCabin
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\AdjustHVACinTruckCabin.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AdjustHVACinTruckCabin.h"
//## link itsDriver
#include "Driver.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define UseCaseAnalysisPkg_AdjustHVACandLighting_AdjustHVACinTruckCabin_AdjustHVACinTruckCabin_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::AdjustHVACandLighting

//## usecase AdjustHVACinTruckCabin
AdjustHVACinTruckCabin::AdjustHVACinTruckCabin() {
    NOTIFY_CONSTRUCTOR(AdjustHVACinTruckCabin, AdjustHVACinTruckCabin(), 0, UseCaseAnalysisPkg_AdjustHVACandLighting_AdjustHVACinTruckCabin_AdjustHVACinTruckCabin_SERIALIZE);
    itsDriver = NULL;
    itsTruck = NULL;
}

AdjustHVACinTruckCabin::~AdjustHVACinTruckCabin() {
    NOTIFY_DESTRUCTOR(~AdjustHVACinTruckCabin, true);
    cleanUpRelations();
}

Driver* AdjustHVACinTruckCabin::getItsDriver() const {
    return itsDriver;
}

void AdjustHVACinTruckCabin::setItsDriver(Driver* p_Driver) {
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

Truck* AdjustHVACinTruckCabin::getItsTruck() const {
    return itsTruck;
}

void AdjustHVACinTruckCabin::setItsTruck(Truck* p_Truck) {
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

void AdjustHVACinTruckCabin::cleanUpRelations() {
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
void OMAnimatedAdjustHVACinTruckCabin::serializeRelations(AOMSRelations* aomsRelations) const {
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

IMPLEMENT_META_P(AdjustHVACinTruckCabin, UseCaseAnalysisPkg_AdjustHVACandLighting, UseCaseAnalysisPkg::AdjustHVACandLighting, false, OMAnimatedAdjustHVACinTruckCabin)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AdjustHVACinTruckCabin.cpp
*********************************************************************/
