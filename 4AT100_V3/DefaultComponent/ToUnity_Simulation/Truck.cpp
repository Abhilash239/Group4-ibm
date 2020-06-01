/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: ToUnity_Simulation
	Model Element	: Truck
//!	Generated Date	: Tue, 2, Jun 2020  
	File Path	: DefaultComponent\ToUnity_Simulation\Truck.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Truck.h"
//## link itsToUnity
#include "ToUnity.h"
//#[ ignore
#define ActorPkg_Truck_Truck_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Truck
Truck::Truck() {
    NOTIFY_CONSTRUCTOR(Truck, Truck(), 0, ActorPkg_Truck_Truck_SERIALIZE);
    itsToUnity = NULL;
}

Truck::~Truck() {
    NOTIFY_DESTRUCTOR(~Truck, true);
    cleanUpRelations();
}

ToUnity* Truck::getItsToUnity() const {
    return itsToUnity;
}

void Truck::setItsToUnity(ToUnity* p_ToUnity) {
    if(p_ToUnity != NULL)
        {
            p_ToUnity->_setItsTruck(this);
        }
    _setItsToUnity(p_ToUnity);
}

void Truck::cleanUpRelations() {
    if(itsToUnity != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsToUnity");
            Truck* p_Truck = itsToUnity->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsToUnity->__setItsTruck(NULL);
                }
            itsToUnity = NULL;
        }
}

void Truck::__setItsToUnity(ToUnity* p_ToUnity) {
    itsToUnity = p_ToUnity;
    if(p_ToUnity != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsToUnity", p_ToUnity, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsToUnity");
        }
}

void Truck::_setItsToUnity(ToUnity* p_ToUnity) {
    if(itsToUnity != NULL)
        {
            itsToUnity->__setItsTruck(NULL);
        }
    __setItsToUnity(p_ToUnity);
}

void Truck::_clearItsToUnity() {
    NOTIFY_RELATION_CLEARED("itsToUnity");
    itsToUnity = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTruck::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsToUnity", false, true);
    if(myReal->itsToUnity)
        {
            aomsRelations->ADD_ITEM(myReal->itsToUnity);
        }
}
//#]

IMPLEMENT_META_P(Truck, ActorPkg, ActorPkg, false, OMAnimatedTruck)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ToUnity_Simulation\Truck.cpp
*********************************************************************/
