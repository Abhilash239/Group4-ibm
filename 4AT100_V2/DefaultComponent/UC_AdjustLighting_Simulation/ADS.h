/*********************************************************************
	Rhapsody	: 8.4 
	Login		: REN Jiabo
	Component	: DefaultComponent 
	Configuration 	: UC_AdjustLighting_Simulation
	Model Element	: ADS
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\ADS.h
*********************************************************************/

#ifndef ADS_H
#define ADS_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <OMDefaultReactivePort.h>
//## link itsTruck
class Truck;

//## package Default

//## class ADS
class ADS {
public :

//#[ ignore
    //## package Default
    class Obstacles_port_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Obstacles_port_C(void);
        
        //## auto_generated
        virtual ~Obstacles_port_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectADS(ADS* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Default
    class proxyport_2_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        proxyport_2_C(void);
        
        //## auto_generated
        virtual ~proxyport_2_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectADS(ADS* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Default
    class proxyport_4_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        proxyport_4_C(void);
        
        //## auto_generated
        virtual ~proxyport_4_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectADS(ADS* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Default
    class proxyport_6_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        proxyport_6_C(void);
        
        //## auto_generated
        virtual ~proxyport_6_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectADS(ADS* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Default
    class DC_Operator_port_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        DC_Operator_port_C(void);
        
        //## auto_generated
        virtual ~DC_Operator_port_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectADS(ADS* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Default
    class LSPort_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        LSPort_C(void);
        
        //## auto_generated
        virtual ~LSPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectADS(ADS* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Default
    class TruckPort_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        TruckPort_C(void);
        
        //## auto_generated
        virtual ~TruckPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectADS(ADS* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Default
    class DriverPort_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        DriverPort_C(void);
        
        //## auto_generated
        virtual ~DriverPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectADS(ADS* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Default
    class proxyport_25_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        proxyport_25_C(void);
        
        //## auto_generated
        virtual ~proxyport_25_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectADS(ADS* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ADS(void);
    
    //## auto_generated
    ~ADS(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    Obstacles_port_C* getObstacles_port(void) const;
    
    //## auto_generated
    Obstacles_port_C* get_Obstacles_port(void) const;
    
    //## auto_generated
    proxyport_2_C* getProxyport_2(void) const;
    
    //## auto_generated
    proxyport_2_C* get_proxyport_2(void) const;
    
    //## auto_generated
    proxyport_4_C* getProxyport_4(void) const;
    
    //## auto_generated
    proxyport_4_C* get_proxyport_4(void) const;
    
    //## auto_generated
    proxyport_6_C* getProxyport_6(void) const;
    
    //## auto_generated
    proxyport_6_C* get_proxyport_6(void) const;
    
    //## auto_generated
    DC_Operator_port_C* getDC_Operator_port(void) const;
    
    //## auto_generated
    DC_Operator_port_C* get_DC_Operator_port(void) const;
    
    //## auto_generated
    LSPort_C* getLSPort(void) const;
    
    //## auto_generated
    LSPort_C* get_LSPort(void) const;
    
    //## auto_generated
    TruckPort_C* getTruckPort(void) const;
    
    //## auto_generated
    TruckPort_C* get_TruckPort(void) const;
    
    //## auto_generated
    DriverPort_C* getDriverPort(void) const;
    
    //## auto_generated
    DriverPort_C* get_DriverPort(void) const;
    
    //## auto_generated
    proxyport_25_C* getProxyport_25(void) const;
    
    //## auto_generated
    proxyport_25_C* get_proxyport_25(void) const;
    
    //## auto_generated
    const Truck* getItsTruck(void) const;
    
    //## auto_generated
    void setItsTruck(Truck* const p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

//#[ ignore
    Obstacles_port_C Obstacles_port;
    
    proxyport_2_C proxyport_2;
    
    proxyport_4_C proxyport_4;
    
    proxyport_6_C proxyport_6;
    
    DC_Operator_port_C DC_Operator_port;
    
    LSPort_C LSPort;
    
    TruckPort_C TruckPort;
    
    DriverPort_C DriverPort;
    
    proxyport_25_C proxyport_25;
//#]

    Truck* itsTruck;		//## link itsTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    void _setItsTruck(Truck* const p_Truck);
    
    //## auto_generated
    void _clearItsTruck(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_AdjustLighting_Simulation\ADS.h
*********************************************************************/
