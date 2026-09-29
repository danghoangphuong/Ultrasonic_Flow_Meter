################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include emlib/subdir.mk
-include CMSIS/efm32zg/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: maxrefdes70.axf

# Tool invocations
maxrefdes70.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m0plus -mthumb -T "maxrefdes70.ld" -Xlinker --gc-sections -Xlinker -Map="maxrefdes70.map" --specs=nano.specs -o maxrefdes70.axf "./src/MAXREFDES70.o" "./src/batteryLevel.o" "./src/dogm163.o" "./emlib/em_assert.o" "./emlib/em_cmu.o" "./emlib/em_emu.o" "./emlib/em_gpio.o" "./emlib/em_system.o" "./emlib/em_usart.o" "./emlib/em_vcmp.o" "./CMSIS/efm32zg/startup_gcc_efm32zg.o" "./CMSIS/efm32zg/system_efm32zg.o" -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: maxrefdes70.hex'
	arm-none-eabi-objcopy -O ihex "maxrefdes70.axf" "maxrefdes70.hex"
	@echo ' '

	@echo 'Building bin file: maxrefdes70.bin'
	arm-none-eabi-objcopy -O binary "maxrefdes70.axf" "maxrefdes70.bin"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "maxrefdes70.axf"
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) maxrefdes70.axf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
