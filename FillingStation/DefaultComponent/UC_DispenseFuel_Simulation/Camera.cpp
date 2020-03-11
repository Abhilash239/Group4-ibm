/********************************************************************
	Rhapsody	: 8.4 
	Login		: naika
	Component	: DefaultComponent 
	Configuration 	: UC_DispenseFuel_Simulation
	Model Element	: Camera
//!	Generated Date	: Mon, 2, Dec 2019  
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\Camera.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Camera.h"
//## link itsUC_DispenseFuel
#include "UC_DispenseFuel.h"
//#[ ignore
#define ActorPkg_Camera_Camera_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Camera
Camera::Camera(void) : itsUC_DispenseFuel(NULL) {
    NOTIFY_CONSTRUCTOR(Camera, Camera(), 0, ActorPkg_Camera_Camera_SERIALIZE);
}

Camera::~Camera(void) {
    NOTIFY_DESTRUCTOR(~Camera, true);
    cleanUpRelations();
}

const UC_DispenseFuel* Camera::getItsUC_DispenseFuel(void) const {
    return itsUC_DispenseFuel;
}

void Camera::setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel) {
    if(p_UC_DispenseFuel != NULL)
        {
            p_UC_DispenseFuel->_setItsCamera(this);
        }
    _setItsUC_DispenseFuel(p_UC_DispenseFuel);
}

void Camera::cleanUpRelations(void) {
    if(itsUC_DispenseFuel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_DispenseFuel");
            const Camera* p_Camera = itsUC_DispenseFuel->getItsCamera();
            if(p_Camera != NULL)
                {
                    itsUC_DispenseFuel->__setItsCamera(NULL);
                }
            itsUC_DispenseFuel = NULL;
        }
}

void Camera::__setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel) {
    itsUC_DispenseFuel = p_UC_DispenseFuel;
    if(p_UC_DispenseFuel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_DispenseFuel", p_UC_DispenseFuel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_DispenseFuel");
        }
}

void Camera::_setItsUC_DispenseFuel(UC_DispenseFuel* const p_UC_DispenseFuel) {
    if(itsUC_DispenseFuel != NULL)
        {
            itsUC_DispenseFuel->__setItsCamera(NULL);
        }
    __setItsUC_DispenseFuel(p_UC_DispenseFuel);
}

void Camera::_clearItsUC_DispenseFuel(void) {
    NOTIFY_RELATION_CLEARED("itsUC_DispenseFuel");
    itsUC_DispenseFuel = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCamera::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_DispenseFuel", false, true);
    if(myReal->itsUC_DispenseFuel)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_DispenseFuel);
        }
}
//#]

IMPLEMENT_META_P(Camera, ActorPkg, ActorPkg, false, OMAnimatedCamera)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\Camera.cpp
*********************************************************************/
