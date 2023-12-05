################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../app.cfg 

CMD_SRCS += \
../F2837xD_Headers_BIOS_cpu1.cmd \
../TMS320F28379D.cmd 

ASM_SRCS += \
../DelayUs.asm 

C_SRCS += \
../28379D_uart.c \
../F2837xD_GlobalVariableDefs.c \
../SoilMonitor_DevInit.c \
../SoilMonitor_main.c \
../i2c_driver.c \
../ultrasonic.c 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt 

GEN_MISC_DIRS += \
./configPkg/ 

C_DEPS += \
./28379D_uart.d \
./F2837xD_GlobalVariableDefs.d \
./SoilMonitor_DevInit.d \
./SoilMonitor_main.d \
./i2c_driver.d \
./ultrasonic.d 

GEN_OPTS += \
./configPkg/compiler.opt 

OBJS += \
./28379D_uart.obj \
./DelayUs.obj \
./F2837xD_GlobalVariableDefs.obj \
./SoilMonitor_DevInit.obj \
./SoilMonitor_main.obj \
./i2c_driver.obj \
./ultrasonic.obj 

ASM_DEPS += \
./DelayUs.d 

GEN_MISC_DIRS__QUOTED += \
"configPkg\" 

OBJS__QUOTED += \
"28379D_uart.obj" \
"DelayUs.obj" \
"F2837xD_GlobalVariableDefs.obj" \
"SoilMonitor_DevInit.obj" \
"SoilMonitor_main.obj" \
"i2c_driver.obj" \
"ultrasonic.obj" 

C_DEPS__QUOTED += \
"28379D_uart.d" \
"F2837xD_GlobalVariableDefs.d" \
"SoilMonitor_DevInit.d" \
"SoilMonitor_main.d" \
"i2c_driver.d" \
"ultrasonic.d" 

GEN_FILES__QUOTED += \
"configPkg\linker.cmd" \
"configPkg\compiler.opt" 

ASM_DEPS__QUOTED += \
"DelayUs.d" 

C_SRCS__QUOTED += \
"../28379D_uart.c" \
"../F2837xD_GlobalVariableDefs.c" \
"../SoilMonitor_DevInit.c" \
"../i2c_driver.c" 

ASM_SRCS__QUOTED += \
"../DelayUs.asm" 


