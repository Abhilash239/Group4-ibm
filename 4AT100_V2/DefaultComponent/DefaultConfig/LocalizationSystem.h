/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LocalizationSystem
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\LocalizationSystem.h
*********************************************************************/

#ifndef LocalizationSystem_H
#define LocalizationSystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class LocalizationSystem
class LocalizationSystem {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    LocalizationSystem(void);
    
    //## auto_generated
    ~LocalizationSystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getCoordinates(void) const;
    
    //## auto_generated
    void setCoordinates(const int p_Coordinates);
    
    ////    Attributes    ////

private :

    // Coordinates of static obstacles
    int Coordinates;		//## attribute Coordinates
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LocalizationSystem.h
*********************************************************************/
