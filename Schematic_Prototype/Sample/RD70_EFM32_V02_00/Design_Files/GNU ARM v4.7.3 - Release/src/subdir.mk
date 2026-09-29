################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/MAXREFDES70.c \
../src/batteryLevel.c \
../src/dogm163.c 

OBJS += \
./src/MAXREFDES70.o \
./src/batteryLevel.o \
./src/dogm163.o 

C_DEPS += \
./src/MAXREFDES70.d \
./src/batteryLevel.d \
./src/dogm163.d 


# Each subdirectory must supply rules for building sources it contributes
src/MAXREFDES70.o: ../src/MAXREFDES70.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m0plus -mthumb '-DEFM32ZG110F32=1' '-DNDEBUG=1' -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/CMSIS/Include" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/kits/common/bsp" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/emlib/inc" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/kits/common/drivers" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/Device/SiliconLabs/EFM32ZG/Include" -Os -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -std=c99 -MMD -MP -MF"src/MAXREFDES70.d" -MT"src/MAXREFDES70.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/batteryLevel.o: ../src/batteryLevel.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m0plus -mthumb '-DEFM32ZG110F32=1' '-DNDEBUG=1' -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/CMSIS/Include" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/kits/common/bsp" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/emlib/inc" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/kits/common/drivers" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/Device/SiliconLabs/EFM32ZG/Include" -Os -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -std=c99 -MMD -MP -MF"src/batteryLevel.d" -MT"src/batteryLevel.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/dogm163.o: ../src/dogm163.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m0plus -mthumb '-DEFM32ZG110F32=1' '-DNDEBUG=1' -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/CMSIS/Include" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/kits/common/bsp" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/emlib/inc" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/kits/common/drivers" -I"C:\SiliconLabs\SimplicityStudio\v2_2\developer\sdks\efm32\v2/Device/SiliconLabs/EFM32ZG/Include" -Os -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -std=c99 -MMD -MP -MF"src/dogm163.d" -MT"src/dogm163.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


