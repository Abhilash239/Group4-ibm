/********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: GUI
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\GUI.cpp
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
#define UseCaseAnalysisPkg_DriveAutonomously_GUI_GUI_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class GUI
//#[ ignore
GUI::docknumber_SP_C::docknumber_SP_C() : _p_(0) {
    its_Out = NULL;
}

GUI::docknumber_SP_C::~docknumber_SP_C() {
    cleanUpRelations();
}

_Out* GUI::docknumber_SP_C::getIts_Out() {
    return this;
}

_Out* GUI::docknumber_SP_C::getOutBound() {
    return this;
}

void GUI::docknumber_SP_C::setDocknumber(int p_docknumber) {
    
    if (its_Out != NULL) {
        its_Out->setDocknumber(p_docknumber);
    }
    
}

void GUI::docknumber_SP_C::setIts_Out(_Out* p__Out) {
    its_Out = p__Out;
}

void GUI::docknumber_SP_C::cleanUpRelations() {
    if(its_Out != NULL)
        {
            its_Out = NULL;
        }
}
//#]

GUI::GUI(IOxfActive* theActiveContext) : docknumber(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(GUI, GUI(), 0, UseCaseAnalysisPkg_DriveAutonomously_GUI_GUI_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCOperator = NULL;
    itsUC_DockTruck = NULL;
}

GUI::~GUI() {
    NOTIFY_DESTRUCTOR(~GUI, true);
    cleanUpRelations();
}

//#[ ignore
void GUI::setDocknumber(int p_docknumber) {
    if (docknumber != p_docknumber)  {
        docknumber = p_docknumber;
        FLOW_DATA_SEND(docknumber, docknumber_SP, setDocknumber, x2String);
    }
}
//#]

GUI::docknumber_SP_C* GUI::getDocknumber_SP() const {
    return (GUI::docknumber_SP_C*) &docknumber_SP;
}

GUI::docknumber_SP_C* GUI::get_docknumber_SP() const {
    return (GUI::docknumber_SP_C*) &docknumber_SP;
}

int GUI::getDocknumber() const {
    return docknumber;
}

DCOperator* GUI::getItsDCOperator() const {
    return itsDCOperator;
}

void GUI::setItsDCOperator(DCOperator* p_DCOperator) {
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

IMPLEMENT_REACTIVE_META_SIMPLE_P(GUI, UseCaseAnalysisPkg_DriveAutonomously, UseCaseAnalysisPkg::DriveAutonomously, false, OMAnimatedGUI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\GUI.cpp
*********************************************************************/
