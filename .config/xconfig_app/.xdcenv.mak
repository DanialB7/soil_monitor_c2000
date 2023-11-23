#
_XDCBUILDCOUNT = 0
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/bios_6_83_00_18/packages;C:/Users/SURFACE/ONEDRI~1/Desktop/Lab2Idle/.config
override XDCROOT = C:/ti/ccs1040/xdctools_3_62_01_15_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/bios_6_83_00_18/packages;C:/Users/SURFACE/ONEDRI~1/Desktop/Lab2Idle/.config;C:/ti/ccs1040/xdctools_3_62_01_15_core/packages;..
HOSTOS = Windows
endif
