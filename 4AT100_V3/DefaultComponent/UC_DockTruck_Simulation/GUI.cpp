/********************************************************************
	Rhapsody	: 8.4 
	Login		: 20191029
	Component	: DefaultComponent 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: GUI
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\UC_DockTruck_Simulation\GUI.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GUI.h"
//## link itsDCOperator
#include "DCOperator.h"
//## link itsUC_DockTruck
#include "UC_DockTruck.h"
//#[ ignore
#define reqDock_SERIALIZE OMADD_SER(docknumber, x2String(myEvent->docknumber))

#define reqDock_UNSERIALIZE OMADD_UNSER(int, docknumber, OMDestructiveString2X)

#define reqDock_CONSTRUCTOR reqDock(docknumber)

#define GUI_GUI_GUI_SERIALIZE OM_NO_OP

#define OMAnim_GUI_GUI_setDocknumber_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_docknumber)

#define OMAnim_GUI_GUI_setDocknumber_int_SERIALIZE_RET_VAL
//#]

//## package GUI


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(GUI, GUI)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event reqDock(int)
reqDock::reqDock() {
    NOTIFY_EVENT_CONSTRUCTOR(reqDock)
    setId(reqDock_GUI_id);
}

reqDock::reqDock(int p_docknumber) : docknumber(p_docknumber) {
    NOTIFY_EVENT_CONSTRUCTOR(reqDock)
    setId(reqDock_GUI_id);
}

bool reqDock::isTypeOf(const short id) const {
    return (reqDock_GUI_id==id);
}

IMPLEMENT_META_EVENT_P(reqDock, GUI, GUI, reqDock(int))

//## package GUI

//## class GUI
GUI::GUI(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(GUI, GUI(), 0, GUI_GUI_GUI_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCOperator = NULL;
    itsUC_DockTruck = NULL;
}

GUI::~GUI() {
    NOTIFY_DESTRUCTOR(~GUI, true);
    cleanUpRelations();
}

int GUI::getDocknumber() const {
    return docknumber;
}

void GUI::setDocknumber(int p_docknumber) {
    docknumber = p_docknumber;
    NOTIFY_SET_OPERATION;
}

DCOperator* GUI::getItsDCOperator() const {
    return itsDCOperator;
}

void GUI::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsGUI(this);
        }
    _setItsDCOperator(p_DCOperator);
}

UC_DockTruck* GUI::getItsUC_DockTruck() const {
    return itsUC_DockTruck;
}

void GUI::setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck) {
    if(p_UC_DockTruck != NULL)
        {
            p_UC_DockTruck->_setItsGUI(this);
        }
    _setItsUC_DockTruck(p_UC_DockTruck);
}

bool GUI::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void GUI::cleanUpRelations() {
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            GUI* p_GUI = itsDCOperator->getItsGUI();
            if(p_GUI != NULL)
                {
                    itsDCOperator->__setItsGUI(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsUC_DockTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_DockTruck");
            GUI* p_GUI = itsUC_DockTruck->getItsGUI();
            if(p_GUI != NULL)
                {
                    itsUC_DockTruck->__setItsGUI(NULL);
                }
            itsUC_DockTruck = NULL;
        }
}

void GUI::__setItsDCOperator(DCOperator* p_DCOperator) {
    itsDCOperator = p_DCOperator;
    if(p_DCOperator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCOperator", p_DCOperator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
        }
}

void GUI::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsGUI(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void GUI::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void GUI::__setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck) {
    itsUC_DockTruck = p_UC_DockTruck;
    if(p_UC_DockTruck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_DockTruck", p_UC_DockTruck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_DockTruck");
        }
}

void GUI::_setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck) {
    if(itsUC_DockTruck != NULL)
        {
            itsUC_DockTruck->__setItsGUI(NULL);
        }
    __setItsUC_DockTruck(p_UC_DockTruck);
}

void GUI::_clearItsUC_DockTruck() {
    NOTIFY_RELATION_CLEARED("itsUC_DockTruck");
    itsUC_DockTruck = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGUI::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("docknumber", x2String(myReal->docknumber));
}

void OMAnimatedGUI::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCOperator", false, true);
    if(myReal->itsDCOperator)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator);
        }
    aomsRelations->addRelation("itsUC_DockTruck", false, true);
    if(myReal->itsUC_DockTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_DockTruck);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(GUI, GUI, GUI, false, OMAnimatedGUI)

IMPLEMENT_META_OP(OMAnimatedGUI, GUI_GUI_setDocknumber_int, "setDocknumber", FALSE, "setDocknumber(int)", 1)

IMPLEMENT_OP_CALL(GUI_GUI_setDocknumber_int, GUI, setDocknumber(p_docknumber), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_DockTruck_Simulation\GUI.cpp
*********************************************************************/
