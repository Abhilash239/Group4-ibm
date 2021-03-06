
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Release
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)SimulinkIntegration$(LIB_POSTFIX)$(LIB_EXT)

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileRelease) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

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

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkRelease)  /NOLOGO   
LINK_FLAGS=$(LinkRelease)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

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

LIBS= \
  ws2_32.lib

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  ToUnity.obj \
  ChargingSystem.obj \
  DC.obj \
  DCOperator.obj \
  Driver.obj \
  CollisionDetectionSystem.obj \
  Obstacles.obj \
  LocSystem.obj \
  Truck.obj \
  Government.obj \
  SafetyStandards.obj \
  UC_DockTruck.obj \
  UC_ControlPath.obj \
  ADS.obj \
  GUI.obj \
  DockTruck.obj \
  GeneratePath.obj \
  FollowPath.obj \
  _Out.obj \
  UnityPkg.obj \
  ActorPkg.obj \
  DriveAutonomously.obj \
  FlowPortInterfaces.obj




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






ToUnity.obj : ToUnity.cpp ToUnity.h    UnityPkg.h Truck.h LocSystem.h CollisionDetectionSystem.h UC_DockTruck.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ToUnity.obj" "ToUnity.cpp" 



ChargingSystem.obj : ChargingSystem.cpp ChargingSystem.h    ActorPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ChargingSystem.obj" "ChargingSystem.cpp" 



DC.obj : DC.cpp DC.h    ActorPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DC.obj" "DC.cpp" 



DCOperator.obj : DCOperator.cpp DCOperator.h    ActorPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DCOperator.obj" "DCOperator.cpp" 



Driver.obj : Driver.cpp Driver.h    ActorPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Driver.obj" "Driver.cpp" 



CollisionDetectionSystem.obj : CollisionDetectionSystem.cpp CollisionDetectionSystem.h    ActorPkg.h ToUnity.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CollisionDetectionSystem.obj" "CollisionDetectionSystem.cpp" 



Obstacles.obj : Obstacles.cpp Obstacles.h    ActorPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Obstacles.obj" "Obstacles.cpp" 



LocSystem.obj : LocSystem.cpp LocSystem.h    ActorPkg.h ToUnity.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LocSystem.obj" "LocSystem.cpp" 



Truck.obj : Truck.cpp Truck.h    ActorPkg.h ToUnity.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Truck.obj" "Truck.cpp" 



Government.obj : Government.cpp Government.h    ActorPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Government.obj" "Government.cpp" 



SafetyStandards.obj : SafetyStandards.cpp SafetyStandards.h    ActorPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SafetyStandards.obj" "SafetyStandards.cpp" 



UC_DockTruck.obj : UC_DockTruck.cpp UC_DockTruck.h    DriveAutonomously.h UC_ControlPath.h ToUnity.h GUI.h _Out.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_DockTruck.obj" "UC_DockTruck.cpp" 



UC_ControlPath.obj : UC_ControlPath.cpp UC_ControlPath.h    DriveAutonomously.h UC_DockTruck.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_ControlPath.obj" "UC_ControlPath.cpp" 



ADS.obj : ADS.cpp ADS.h    DriveAutonomously.h ToUnity.h GUI.h UC_DockTruck.h UC_ControlPath.h _Out.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ADS.obj" "ADS.cpp" 



GUI.obj : GUI.cpp GUI.h    DriveAutonomously.h DCOperator.h UC_DockTruck.h _Out.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GUI.obj" "GUI.cpp" 



DockTruck.obj : DockTruck.cpp DockTruck.h    DriveAutonomously.h DCOperator.h Truck.h LocSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DockTruck.obj" "DockTruck.cpp" 



GeneratePath.obj : GeneratePath.cpp GeneratePath.h    DriveAutonomously.h LocSystem.h CollisionDetectionSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GeneratePath.obj" "GeneratePath.cpp" 



FollowPath.obj : FollowPath.cpp FollowPath.h    DriveAutonomously.h LocSystem.h Truck.h CollisionDetectionSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"FollowPath.obj" "FollowPath.cpp" 



_Out.obj : _Out.cpp _Out.h    FlowPortInterfaces.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"_Out.obj" "_Out.cpp" 



UnityPkg.obj : UnityPkg.cpp UnityPkg.h    ToUnity.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UnityPkg.obj" "UnityPkg.cpp" 



ActorPkg.obj : ActorPkg.cpp ActorPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ActorPkg.obj" "ActorPkg.cpp" 



DriveAutonomously.obj : DriveAutonomously.cpp DriveAutonomously.h    UC_DockTruck.h UC_ControlPath.h ADS.h GUI.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DriveAutonomously.obj" "DriveAutonomously.cpp" 



FlowPortInterfaces.obj : FlowPortInterfaces.cpp FlowPortInterfaces.h    _Out.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"FlowPortInterfaces.obj" "FlowPortInterfaces.cpp" 






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
	if exist ToUnity.obj erase ToUnity.obj
	if exist ChargingSystem.obj erase ChargingSystem.obj
	if exist DC.obj erase DC.obj
	if exist DCOperator.obj erase DCOperator.obj
	if exist Driver.obj erase Driver.obj
	if exist CollisionDetectionSystem.obj erase CollisionDetectionSystem.obj
	if exist Obstacles.obj erase Obstacles.obj
	if exist LocSystem.obj erase LocSystem.obj
	if exist Truck.obj erase Truck.obj
	if exist Government.obj erase Government.obj
	if exist SafetyStandards.obj erase SafetyStandards.obj
	if exist UC_DockTruck.obj erase UC_DockTruck.obj
	if exist UC_ControlPath.obj erase UC_ControlPath.obj
	if exist ADS.obj erase ADS.obj
	if exist GUI.obj erase GUI.obj
	if exist DockTruck.obj erase DockTruck.obj
	if exist GeneratePath.obj erase GeneratePath.obj
	if exist FollowPath.obj erase FollowPath.obj
	if exist _Out.obj erase _Out.obj
	if exist UnityPkg.obj erase UnityPkg.obj
	if exist ActorPkg.obj erase ActorPkg.obj
	if exist DriveAutonomously.obj erase DriveAutonomously.obj
	if exist FlowPortInterfaces.obj erase FlowPortInterfaces.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
