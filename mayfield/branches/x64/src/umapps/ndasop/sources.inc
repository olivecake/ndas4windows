
INCLUDES=$(NDAS_INC_PATH);$(NDAS_PUBLIC_INC_PATH);$(PSDK_INC_PATH);
USER_C_FLAGS=/Wp64
C_DEFINES=/DUNICODE /D_UNICODE /D__REDUCED_UNIT_SIZE__=2097152

MSC_WARNING_LEVEL=-W3 -WX

!IF $(FREEBUILD)
USE_MSVCRT=1
MSC_OPTIMIZATION=/Ox
!ELSE
USE_LIBCMT=1
DEBUG_CRTS=1
!ENDIF

SOURCES_COMMON=..\ndasop.cpp
SOURCES_DLL=..\dllentry.cpp ..\ndasop.rc
SOURCES_SLIB=
