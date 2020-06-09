
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)SimulinkIntegration$(LIB_POSTFIX)$(LIB_EXT)

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15amd64$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:amd64 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\ProgramData\IBM\Rational\Rhapsody\8.4\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rational\Rhapsody\8.4"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  itsPart_0.obj \
  ADS.obj \
  DeliveringCenter.obj \
  Truck.obj \
  LocalizationSystem.obj \
  Standards.obj \
  Standardsss.obj \
  class_19.obj \
  ChargingSystem.obj \
  DC.obj \
  DCOperator.obj \
  Driver.obj \
  CollisionDetectionSystem.obj \
  Obstacles.obj \
  LocSystem.obj \
  Government.obj \
  SafetyStandards.obj \
  ControllerInput.obj \
  ControllerStructure.obj \
  ControllerOutput.obj \
  ControllerModel.obj \
  GUI.obj \
  UGE.obj \
  UC_DockTruck.obj \
  UC_GeneratePath.obj \
  UC_FollowPath.obj \
  UC_AdjustHVAC.obj \
  UC_AdjustLighting.obj \
  PathPlannerInput.obj \
  PathPlannerStructure.obj \
  PathPlannerOutput.obj \
  PathPlannerModel.obj \
  doubleFlowInterface.obj \
  Default.obj \
  DriveAutonomously.obj \
  AdjustHVACandLighting.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






itsPart_0.obj : itsPart_0.cpp itsPart_0.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"itsPart_0.obj" "itsPart_0.cpp" 



ADS.obj : ADS.cpp ADS.h    Default.h Truck.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ADS.obj" "ADS.cpp" 



DeliveringCenter.obj : DeliveringCenter.cpp DeliveringCenter.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DeliveringCenter.obj" "DeliveringCenter.cpp" 



Truck.obj : Truck.cpp Truck.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Truck.obj" "Truck.cpp" 



LocalizationSystem.obj : LocalizationSystem.cpp LocalizationSystem.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LocalizationSystem.obj" "LocalizationSystem.cpp" 



Standards.obj : Standards.cpp Standards.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Standards.obj" "Standards.cpp" 



Standardsss.obj : Standardsss.cpp Standardsss.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Standardsss.obj" "Standardsss.cpp" 



class_19.obj : class_19.cpp class_19.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"class_19.obj" "class_19.cpp" 



ChargingSystem.obj : ChargingSystem.cpp ChargingSystem.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ChargingSystem.obj" "ChargingSystem.cpp" 



DC.obj : DC.cpp DC.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DC.obj" "DC.cpp" 



DCOperator.obj : DCOperator.cpp DCOperator.h    GUI.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DCOperator.obj" "DCOperator.cpp" 



Driver.obj : Driver.cpp Driver.h    GUI.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Driver.obj" "Driver.cpp" 



CollisionDetectionSystem.obj : CollisionDetectionSystem.cpp CollisionDetectionSystem.h    Obstacles.h UGE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CollisionDetectionSystem.obj" "CollisionDetectionSystem.cpp" 



Obstacles.obj : Obstacles.cpp Obstacles.h    CollisionDetectionSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Obstacles.obj" "Obstacles.cpp" 



LocSystem.obj : LocSystem.cpp LocSystem.h    UGE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LocSystem.obj" "LocSystem.cpp" 



Government.obj : Government.cpp Government.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Government.obj" "Government.cpp" 



SafetyStandards.obj : SafetyStandards.cpp SafetyStandards.h    ADS.h Truck.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SafetyStandards.obj" "SafetyStandards.cpp" 



ControllerInput.obj : ControllerInput.cpp ControllerInput.h    ControllerStructure.h doubleFlowInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ControllerInput.obj" "ControllerInput.cpp" 



ControllerStructure.obj : ControllerStructure.cpp ControllerStructure.h    ControllerInput.h ControllerModel.h ControllerOutput.h doubleFlowInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ControllerStructure.obj" "ControllerStructure.cpp" 



ControllerOutput.obj : ControllerOutput.cpp ControllerOutput.h    ControllerStructure.h doubleFlowInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ControllerOutput.obj" "ControllerOutput.cpp" 



ControllerModel.obj : ControllerModel.cpp ControllerModel.h    ControllerStructure.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ControllerModel.obj" "ControllerModel.cpp" 



GUI.obj : GUI.cpp GUI.h    DCOperator.h UC_AdjustLighting.h UC_AdjustHVAC.h Driver.h DriveAutonomously.h AdjustHVACandLighting.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GUI.obj" "GUI.cpp" 



UGE.obj : UGE.cpp UGE.h    Truck.h LocSystem.h CollisionDetectionSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UGE.obj" "UGE.cpp" 



UC_DockTruck.obj : UC_DockTruck.cpp UC_DockTruck.h    DriveAutonomously.h UC_GeneratePath.h UC_FollowPath.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_DockTruck.obj" "UC_DockTruck.cpp" 



UC_GeneratePath.obj : UC_GeneratePath.cpp UC_GeneratePath.h    DriveAutonomously.h UC_FollowPath.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_GeneratePath.obj" "UC_GeneratePath.cpp" 



UC_FollowPath.obj : UC_FollowPath.cpp UC_FollowPath.h    DriveAutonomously.h UC_GeneratePath.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_FollowPath.obj" "UC_FollowPath.cpp" 



UC_AdjustHVAC.obj : UC_AdjustHVAC.cpp UC_AdjustHVAC.h    AdjustHVACandLighting.h Truck.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_AdjustHVAC.obj" "UC_AdjustHVAC.cpp" 



UC_AdjustLighting.obj : UC_AdjustLighting.cpp UC_AdjustLighting.h    AdjustHVACandLighting.h Truck.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_AdjustLighting.obj" "UC_AdjustLighting.cpp" 



PathPlannerInput.obj : PathPlannerInput.cpp PathPlannerInput.h    PathPlannerStructure.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PathPlannerInput.obj" "PathPlannerInput.cpp" 



PathPlannerStructure.obj : PathPlannerStructure.cpp PathPlannerStructure.h    PathPlannerInput.h PathPlannerModel.h PathPlannerOutput.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PathPlannerStructure.obj" "PathPlannerStructure.cpp" 



PathPlannerOutput.obj : PathPlannerOutput.cpp PathPlannerOutput.h    PathPlannerStructure.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PathPlannerOutput.obj" "PathPlannerOutput.cpp" 



PathPlannerModel.obj : PathPlannerModel.cpp PathPlannerModel.h    PathPlannerStructure.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PathPlannerModel.obj" "PathPlannerModel.cpp" 



doubleFlowInterface.obj : doubleFlowInterface.cpp doubleFlowInterface.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"doubleFlowInterface.obj" "doubleFlowInterface.cpp" 



Default.obj : Default.cpp Default.h    ADS.h DeliveringCenter.h Truck.h LocalizationSystem.h Standards.h Standardsss.h standards.h class_19.h itsPart_0.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Default.obj" "Default.cpp" 



DriveAutonomously.obj : DriveAutonomously.cpp DriveAutonomously.h    UC_DockTruck.h UC_GeneratePath.h UC_FollowPath.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DriveAutonomously.obj" "DriveAutonomously.cpp" 



AdjustHVACandLighting.obj : AdjustHVACandLighting.cpp AdjustHVACandLighting.h    UC_AdjustHVAC.h UC_AdjustLighting.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AdjustHVACandLighting.obj" "AdjustHVACandLighting.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist itsPart_0.obj erase itsPart_0.obj
	if exist ADS.obj erase ADS.obj
	if exist DeliveringCenter.obj erase DeliveringCenter.obj
	if exist Truck.obj erase Truck.obj
	if exist LocalizationSystem.obj erase LocalizationSystem.obj
	if exist Standards.obj erase Standards.obj
	if exist Standardsss.obj erase Standardsss.obj
	if exist class_19.obj erase class_19.obj
	if exist ChargingSystem.obj erase ChargingSystem.obj
	if exist DC.obj erase DC.obj
	if exist DCOperator.obj erase DCOperator.obj
	if exist Driver.obj erase Driver.obj
	if exist CollisionDetectionSystem.obj erase CollisionDetectionSystem.obj
	if exist Obstacles.obj erase Obstacles.obj
	if exist LocSystem.obj erase LocSystem.obj
	if exist Government.obj erase Government.obj
	if exist SafetyStandards.obj erase SafetyStandards.obj
	if exist ControllerInput.obj erase ControllerInput.obj
	if exist ControllerStructure.obj erase ControllerStructure.obj
	if exist ControllerOutput.obj erase ControllerOutput.obj
	if exist ControllerModel.obj erase ControllerModel.obj
	if exist GUI.obj erase GUI.obj
	if exist UGE.obj erase UGE.obj
	if exist UC_DockTruck.obj erase UC_DockTruck.obj
	if exist UC_GeneratePath.obj erase UC_GeneratePath.obj
	if exist UC_FollowPath.obj erase UC_FollowPath.obj
	if exist UC_AdjustHVAC.obj erase UC_AdjustHVAC.obj
	if exist UC_AdjustLighting.obj erase UC_AdjustLighting.obj
	if exist PathPlannerInput.obj erase PathPlannerInput.obj
	if exist PathPlannerStructure.obj erase PathPlannerStructure.obj
	if exist PathPlannerOutput.obj erase PathPlannerOutput.obj
	if exist PathPlannerModel.obj erase PathPlannerModel.obj
	if exist doubleFlowInterface.obj erase doubleFlowInterface.obj
	if exist Default.obj erase Default.obj
	if exist DriveAutonomously.obj erase DriveAutonomously.obj
	if exist AdjustHVACandLighting.obj erase AdjustHVACandLighting.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
