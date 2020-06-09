/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustHVAC_Simulation
	Model Element	: GUI
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\GUI.h
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
#include "DriveAutonomously.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class docknumber_SP_C
#include "_Out.h"
//## link itsDCOperator
class DCOperator;

//## link itsUC_DockTruck
class UC_DockTruck;

//## package UseCaseAnalysisPkg::DriveAutonomously

//## class GUI
class GUI : public OMReactive {
public :

//#[ ignore
    //## package UseCaseAnalysisPkg::DriveAutonomously
    class docknumber_SP_C : public _Out {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        docknumber_SP_C();
        
        //## auto_generated
        virtual ~docknumber_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        _Out* getIts_Out();
        
        //## auto_generated
        _Out* getOutBound();
        
        //## auto_generated
        virtual void setDocknumber(int p_docknumber);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setIts_Out(_Out* p__Out);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        _Out* its_Out;		//## link its_Out
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedGUI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GUI(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~GUI();
    
    ////    Operations    ////
    
//#[ ignore
    void setDocknumber(int p_docknumber);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    docknumber_SP_C* getDocknumber_SP() const;
    
    //## auto_generated
    docknumber_SP_C* get_docknumber_SP() const;
    
    //## auto_generated
    int getDocknumber() const;
    
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
    
//#[ ignore
    docknumber_SP_C docknumber_SP;
//#]

    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    UC_DockTruck* itsUC_DockTruck;		//## link itsUC_DockTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck);
    
    //## auto_generated
    void _setItsUC_DockTruck(UC_DockTruck* p_UC_DockTruck);
    
    //## auto_generated
    void _clearItsUC_DockTruck();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGUI : virtual public AOMInstance {
    DECLARE_META(GUI, OMAnimatedGUI)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustHVAC_Simulation\GUI.h
*********************************************************************/
