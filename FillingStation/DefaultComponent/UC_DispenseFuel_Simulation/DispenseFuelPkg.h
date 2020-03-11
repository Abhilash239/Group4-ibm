/*********************************************************************
	Rhapsody	: 8.4 
	Login		: naika
	Component	: DefaultComponent 
	Configuration 	: UC_DispenseFuel_Simulation
	Model Element	: DispenseFuelPkg
//!	Generated Date	: Sun, 15, Dec 2019  
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\DispenseFuelPkg.h
*********************************************************************/

#ifndef DispenseFuelPkg_H
#define DispenseFuelPkg_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include "UseCaseAnalysisPkg.h"
//## auto_generated
class UC_DispenseFuel;

//## package UseCaseAnalysisPkg::DispenseFuelPkg



//## event event_3()
class event_3 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevent_3;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    event_3(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevent_3 : virtual public AOMEvent {
    DECLARE_META_EVENT(event_3)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID event_3_DispenseFuelPkg_UseCaseAnalysisPkg_id;
//#]

//## event event_4()
class event_4 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevent_4;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    event_4(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevent_4 : virtual public AOMEvent {
    DECLARE_META_EVENT(event_4)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID event_4_DispenseFuelPkg_UseCaseAnalysisPkg_id;
//#]

//## event reqDispenseFuel()
class reqDispenseFuel : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqDispenseFuel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqDispenseFuel(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqDispenseFuel : virtual public AOMEvent {
    DECLARE_META_EVENT(reqDispenseFuel)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqDispenseFuel_DispenseFuelPkg_UseCaseAnalysisPkg_id;
//#]

//## event evPictureTaken()
class evPictureTaken : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPictureTaken;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPictureTaken(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPictureTaken : virtual public AOMEvent {
    DECLARE_META_EVENT(evPictureTaken)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evPictureTaken_DispenseFuelPkg_UseCaseAnalysisPkg_id;
//#]

//## event reqAuthorizeFuelling()
class reqAuthorizeFuelling : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqAuthorizeFuelling;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqAuthorizeFuelling(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqAuthorizeFuelling : virtual public AOMEvent {
    DECLARE_META_EVENT(reqAuthorizeFuelling)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqAuthorizeFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id;
//#]

//## event reqStartFuelling()
class reqStartFuelling : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqStartFuelling;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqStartFuelling(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqStartFuelling : virtual public AOMEvent {
    DECLARE_META_EVENT(reqStartFuelling)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqStartFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id;
//#]

//## event reqStopFuelling()
class reqStopFuelling : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqStopFuelling;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqStopFuelling(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqStopFuelling : virtual public AOMEvent {
    DECLARE_META_EVENT(reqStopFuelling)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqStopFuelling_DispenseFuelPkg_UseCaseAnalysisPkg_id;
//#]

//## event reqResetPump()
class reqResetPump : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqResetPump;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqResetPump(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqResetPump : virtual public AOMEvent {
    DECLARE_META_EVENT(reqResetPump)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqResetPump_DispenseFuelPkg_UseCaseAnalysisPkg_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\DispenseFuelPkg.h
*********************************************************************/
