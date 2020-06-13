/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: component_6 
	Configuration 	: UC_DockTruck_Simulation
	Model Element	: DriveAutonomously
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: component_6\UC_DockTruck_Simulation\DriveAutonomously.h
*********************************************************************/

#ifndef DriveAutonomously_H
#define DriveAutonomously_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
class UC_DockTruck;

//## auto_generated
class UC_FollowPath;

//## auto_generated
class UC_GeneratePath;

//## package UseCaseAnalysisPkg::DriveAutonomously



//## event reqDock()
class reqDock : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqDock;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqDock(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqDock : virtual public AOMEvent {
    DECLARE_META_EVENT(reqDock)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqDock_DriveAutonomously_UseCaseAnalysisPkg_id;
//#]

//## event reqGeneratePath()
class reqGeneratePath : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqGeneratePath;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqGeneratePath(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqGeneratePath : virtual public AOMEvent {
    DECLARE_META_EVENT(reqGeneratePath)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqGeneratePath_DriveAutonomously_UseCaseAnalysisPkg_id;
//#]

//## event reqFollowPath()
class reqFollowPath : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqFollowPath;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqFollowPath(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqFollowPath : virtual public AOMEvent {
    DECLARE_META_EVENT(reqFollowPath)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqFollowPath_DriveAutonomously_UseCaseAnalysisPkg_id;
//#]

//## event reqStartPathGeneration()
class reqStartPathGeneration : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqStartPathGeneration;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqStartPathGeneration(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqStartPathGeneration : virtual public AOMEvent {
    DECLARE_META_EVENT(reqStartPathGeneration)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqStartPathGeneration_DriveAutonomously_UseCaseAnalysisPkg_id;
//#]

#endif
/*********************************************************************
	File Path	: component_6\UC_DockTruck_Simulation\DriveAutonomously.h
*********************************************************************/
