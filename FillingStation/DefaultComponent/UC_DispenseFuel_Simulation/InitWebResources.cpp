/********************************************************************
	Rhapsody	: 8.4 
	Login		: naika
	Component	: DefaultComponent 
	Configuration 	: UC_DispenseFuel_Simulation
	Model Element	: InitWebResources.cpp
//!	Generated Date	: Mon, 2, Dec 2019  
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\InitWebResources.cpp
*********************************************************************/

extern "C" {
    extern void SetDeviceName(const char * name);
    extern void SetHomePageUrl(const char * name);
    extern void SetSignaturePageUrl(const char * name);
    extern void SetRefreshTimeout(int time);
    extern void SetPropPortNumber(unsigned short port);
    extern void AddWebLicenses(const char **);
    extern int IsExternalWebconfig();

    static const char * licenses[] = {
        "RPGetConnected",
        (char*)0
    };

    void InitWebResources() {
        AddWebLicenses(licenses);

        SetDeviceName("FillingStation");

        if (!IsExternalWebconfig()) {
        	SetHomePageUrl("cgibin?Abs_App=Abstract_Default");
        	SetSignaturePageUrl("sign.htm");
        	SetRefreshTimeout(1000);
        	SetPropPortNumber((unsigned int) 80);

        }
    }

}

/*********************************************************************
	File Path	: DefaultComponent\UC_DispenseFuel_Simulation\InitWebResources.cpp
*********************************************************************/
