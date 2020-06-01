/*********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GUI
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\GUI.h
*********************************************************************/

#ifndef GUI_H
#define GUI_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "winsock2.h"
//## auto_generated
#include "stdio.h"
//## auto_generated
#include "windows.h"
//## auto_generated
#include "iostream"
//## auto_generated
#include "Ws2tcpip.h"
//## auto_generated
#include "string.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsDCOperator
class DCOperator;

//## auto_generated
class GUI;

//## link itsUC_DockTruck
class UC_DockTruck;

//#[ ignore
#define reqDock_GUI_id 15001

#define OMAnim_GUI_GUI_setDocknumber_int_ARGS_DECLARATION int p_docknumber;
//#]

//## package GUI



//## event reqDock(int)
class reqDock : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqDock;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqDock();
    
    //## auto_generated
    reqDock(int p_docknumber);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    int docknumber;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqDock : virtual public AOMEvent {
    DECLARE_META_EVENT(reqDock)
};
//#]
#endif // _OMINSTRUMENT

//## package GUI

//## class GUI
class GUI : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGUI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GUI(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~GUI();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getDocknumber() const;
    
    //## auto_generated
    void setDocknumber(int p_docknumber);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    UC_DockTruck* getItsUC_DockTruck() const;
    
    //## auto_generated
    void setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int docknumber;		//## attribute docknumber
    
    ////    Relations and components    ////
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    UC_DockTruck* itsUC_DockTruck;		//## link itsUC_DockTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator();
    
    //## auto_generated
    void __setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck);
    
    //## auto_generated
    void _setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck);
    
    //## auto_generated
    void _clearItsUC_DockTruck();
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(GUI_GUI_setDocknumber_int)

//#[ ignore
class OMAnimatedGUI : virtual public AOMInstance {
    DECLARE_META(GUI, OMAnimatedGUI)
    
    DECLARE_META_OP(GUI_GUI_setDocknumber_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GUI.h
*********************************************************************/
