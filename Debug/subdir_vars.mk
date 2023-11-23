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
../F2837xD_GlobalVariableDefs.c \
../HwiExample_DevInit.c \
../Lab2Idle_main.c \
../i2c_driver.c 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt 

GEN_MISC_DIRS += \
./configPkg/ 

C_DEPS += \
./F2837xD_GlobalVariableDefs.d \
./HwiExample_DevInit.d \
./Lab2Idle_main.d \
./i2c_driver.d 

GEN_OPTS += \
./configPkg/compiler.opt 

OBJS += \
./DelayUs.obj \
./F2837xD_GlobalVariableDefs.obj \
./HwiExample_DevInit.obj \
./Lab2Idle_main.obj \
./i2c_driver.obj 

ASM_DEPS += \
./DelayUs.d 

GEN_MISC_DIRS__QUOTED += \
"configPkg\" 

OBJS__QUOTED += \
"DelayUs.obj" \
"F2837xD_GlobalVariableDefs.obj" \
"HwiExample_DevInit.obj" \
"Lab2Idle_main.obj" \
"i2c_driver.obj" 

C_DEPS__QUOTED += \
"F2837xD_GlobalVariableDefs.d" \
"HwiExample_DevInit.d" \
"Lab2Idle_main.d" \
"i2c_driver.d" 

GEN_FILES__QUOTED += \
"configPkg\linker.cmd" \
"configPkg\compiler.opt" 

ASM_DEPS__QUOTED += \
"DelayUs.d" 

ASM_SRCS__QUOTED += \
"../DelayUs.asm" 

C_SRCS__QUOTED += \
"../F2837xD_GlobalVariableDefs.c" \
"../HwiExample_DevInit.c" \
"../i2c_driver.c" 


