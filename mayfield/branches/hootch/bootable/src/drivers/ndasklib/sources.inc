MSC_WARNING_LEVEL=-W3 -WX -Wp64

C_DEFINES = -DUNICODE $(C_DEFINES)
#C_DEFINES = -D__NDASCHIP20_ALPHA_SUPPORT__ $(C_DEFINES) 
#C_DEFINES = -D__SPINLOCK_DEBUG__ $(C_DEFINES) 
#C_DEFINES = -D__DETECT_CABLE80__ $(C_DEFINES) 
C_DEFINES = -D__BSRECORDER_HACK__ $(C_DEFINES)
#C_DEFINES = -D__DVD_ENCRYPT_CONTENT__ $(C_DEFINES)
#C_DEFINES = -D__ENABLE_CONTENTENCRYPT_AES_TEST__ $(C_DEFINES)
#C_DEFINES = -D__ENABLE_PERFORMACE_CHECK__ $(C_DEFINES)
#C_DEFINES = -D__ENABLE_LOCKED_READ__ $(C_DEFINES)

!IF	$(FREEBUILD)
MSC_OPTIMIZATION=/O2
!ENDIF


INCLUDES=$(NDAS_DRIVER_INC_PATH);$(NDAS_DRIVER_INC_PATH)\kernel;$(NDAS_INC_PATH)

SOURCES= lsccb.c \
		lslurn.c \
		lslurnassoc.c \
		lslurnIde.c \
		lslurnIdedisk.c \
		lslurnIdeodd.c \
		lsproto.c \
		lsprotoide.c \
		lstransport.c \
		kdebug.c \
		lsutils.c \
		cipher.c \
		devreg.c \
		repos.c

#C_DEFINES=$(C_DEFINES) -D__NDFS__

