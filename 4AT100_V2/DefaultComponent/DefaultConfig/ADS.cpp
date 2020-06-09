/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ADS
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ADS.cpp
*********************************************************************/

//## auto_generated
#include "ADS.h"
//## link itsTruck
#include "Truck.h"
//## auto_generated
#include <omthread.h>
//## package Default

//## class ADS
//#[ ignore
ADS::Obstacles_port_C::Obstacles_port_C(void) : OMDefaultReactivePort(), _p_(0) {
}

ADS::Obstacles_port_C::~Obstacles_port_C(void) {
}

void ADS::Obstacles_port_C::connectADS(ADS* part) {
}

ADS::proxyport_2_C::proxyport_2_C(void) : OMDefaultReactivePort(), _p_(0) {
}

ADS::proxyport_2_C::~proxyport_2_C(void) {
}

void ADS::proxyport_2_C::connectADS(ADS* part) {
}

ADS::proxyport_4_C::proxyport_4_C(void) : OMDefaultReactivePort(), _p_(0) {
}

ADS::proxyport_4_C::~proxyport_4_C(void) {
}

void ADS::proxyport_4_C::connectADS(ADS* part) {
}

ADS::proxyport_6_C::proxyport_6_C(void) : OMDefaultReactivePort(), _p_(0) {
}

ADS::proxyport_6_C::~proxyport_6_C(void) {
}

void ADS::proxyport_6_C::connectADS(ADS* part) {
}

ADS::DC_Operator_port_C::DC_Operator_port_C(void) : OMDefaultReactivePort(), _p_(0) {
}

ADS::DC_Operator_port_C::~DC_Operator_port_C(void) {
}

void ADS::DC_Operator_port_C::connectADS(ADS* part) {
}

ADS::LSPort_C::LSPort_C(void) : OMDefaultReactivePort(), _p_(0) {
}

ADS::LSPort_C::~LSPort_C(void) {
}

void ADS::LSPort_C::connectADS(ADS* part) {
}

ADS::TruckPort_C::TruckPort_C(void) : OMDefaultReactivePort(), _p_(0) {
}

ADS::TruckPort_C::~TruckPort_C(void) {
}

void ADS::TruckPort_C::connectADS(ADS* part) {
}

ADS::DriverPort_C::DriverPort_C(void) : OMDefaultReactivePort(), _p_(0) {
}

ADS::DriverPort_C::~DriverPort_C(void) {
}

void ADS::DriverPort_C::connectADS(ADS* part) {
}

ADS::proxyport_25_C::proxyport_25_C(void) : OMDefaultReactivePort(), _p_(0) {
}

ADS::proxyport_25_C::~proxyport_25_C(void) {
}

void ADS::proxyport_25_C::connectADS(ADS* part) {
}
//#]

ADS::ADS(void) : itsTruck(NULL) {
}

ADS::ADS(IOxfActive* const theActiveContext) : OMReactive() {
    setActiveContext(theActiveContext, false);
    {
        {
            itsGUI.setShouldDelete(false);
        }
        {
            itsUC_DockTruck.setShouldDelete(false);
        }
    }
}

ADS::~ADS(void) {
    cleanUpRelations();
}

ADS::Obstacles_port_C* ADS::getObstacles_port(void) const {
    return (ADS::Obstacles_port_C*) &Obstacles_port;
}

ADS::Obstacles_port_C* ADS::get_Obstacles_port(void) const {
    return (ADS::Obstacles_port_C*) &Obstacles_port;
}

ADS::proxyport_2_C* ADS::getProxyport_2(void) const {
    return (ADS::proxyport_2_C*) &proxyport_2;
}

ADS::proxyport_2_C* ADS::get_proxyport_2(void) const {
    return (ADS::proxyport_2_C*) &proxyport_2;
}

ADS::proxyport_4_C* ADS::getProxyport_4(void) const {
    return (ADS::proxyport_4_C*) &proxyport_4;
}

ADS::proxyport_4_C* ADS::get_proxyport_4(void) const {
    return (ADS::proxyport_4_C*) &proxyport_4;
}

ADS::proxyport_6_C* ADS::getProxyport_6(void) const {
    return (ADS::proxyport_6_C*) &proxyport_6;
}

ADS::proxyport_6_C* ADS::get_proxyport_6(void) const {
    return (ADS::proxyport_6_C*) &proxyport_6;
}

ADS::DC_Operator_port_C* ADS::getDC_Operator_port(void) const {
    return (ADS::DC_Operator_port_C*) &DC_Operator_port;
}

ADS::DC_Operator_port_C* ADS::get_DC_Operator_port(void) const {
    return (ADS::DC_Operator_port_C*) &DC_Operator_port;
}

ADS::LSPort_C* ADS::getLSPort(void) const {
    return (ADS::LSPort_C*) &LSPort;
}

ADS::LSPort_C* ADS::get_LSPort(void) const {
    return (ADS::LSPort_C*) &LSPort;
}

ADS::TruckPort_C* ADS::getTruckPort(void) const {
    return (ADS::TruckPort_C*) &TruckPort;
}

ADS::TruckPort_C* ADS::get_TruckPort(void) const {
    return (ADS::TruckPort_C*) &TruckPort;
}

ADS::DriverPort_C* ADS::getDriverPort(void) const {
    return (ADS::DriverPort_C*) &DriverPort;
}

ADS::DriverPort_C* ADS::get_DriverPort(void) const {
    return (ADS::DriverPort_C*) &DriverPort;
}

ADS::proxyport_25_C* ADS::getProxyport_25(void) const {
    return (ADS::proxyport_25_C*) &proxyport_25;
}

ADS::proxyport_25_C* ADS::get_proxyport_25(void) const {
    return (ADS::proxyport_25_C*) &proxyport_25;
}

const Truck* ADS::getItsTruck(void) const {
    return itsTruck;
}

void ADS::setItsTruck(Truck* const p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsADS(this);
        }
    _setItsTruck(p_Truck);
}

const GUI* ADS::getItsGUI(void) const {
    return &itsGUI;
}

const UC_DockTruck* ADS::getItsUC_DockTruck(void) const {
    return &itsUC_DockTruck;
}

const UGE* ADS::getItsUGE(void) const {
    return &itsUGE;
}

bool ADS::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsGUI.startBehavior();
        }
    if(done == true)
        {
            done = itsUC_DockTruck.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void ADS::cleanUpRelations(void) {
    if(itsTruck != NULL)
        {
            const ADS* p_ADS = itsTruck->getItsADS();
            if(p_ADS != NULL)
                {
                    itsTruck->__setItsADS(NULL);
                }
            itsTruck = NULL;
        }
}

void ADS::__setItsTruck(Truck* const p_Truck) {
    itsTruck = p_Truck;
}

void ADS::_setItsTruck(Truck* const p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsADS(NULL);
        }
    __setItsTruck(p_Truck);
}

void ADS::_clearItsTruck(void) {
    itsTruck = NULL;
}

void ADS::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsGUI.setActiveContext(theActiveContext, false);
        itsUC_DockTruck.setActiveContext(theActiveContext, false);
    }
}

void ADS::destroy(void) {
    itsGUI.destroy();
    itsUC_DockTruck.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ADS.cpp
*********************************************************************/
