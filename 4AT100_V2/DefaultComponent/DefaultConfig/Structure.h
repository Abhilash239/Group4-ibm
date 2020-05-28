/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Structure
//!	Generated Date	: Thu, 28, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Structure.h
*********************************************************************/

#ifndef Structure_H
#define Structure_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "UnityPkg.h"
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance itsSim
#include "sim.h"
//## classInstance itsToUnity
#include "ToUnity.h"
//## package UnityPkg

//## class Structure
class Structure : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    explicit Structure(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~Structure(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const sim* getItsSim(void) const;
    
    //## auto_generated
    const ToUnity* getItsToUnity(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Relations and components    ////

private :

    sim itsSim;		//## classInstance itsSim
    
    ToUnity itsToUnity;		//## classInstance itsToUnity
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Structure.h
*********************************************************************/
