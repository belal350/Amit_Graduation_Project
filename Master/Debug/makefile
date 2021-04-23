################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
MASTER.BELAL.lss \

FLASH_IMAGE += \
MASTER.BELAL.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: MASTER.BELAL.elf secondary-outputs

# Tool invocations
MASTER.BELAL.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,MASTER.BELAL.map -mmcu=atmega32 -o "MASTER.BELAL.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

MASTER.BELAL.lss: MASTER.BELAL.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S MASTER.BELAL.elf  >"MASTER.BELAL.lss"
	@echo 'Finished building: $@'
	@echo ' '

MASTER.BELAL.hex: MASTER.BELAL.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex MASTER.BELAL.elf  "MASTER.BELAL.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: MASTER.BELAL.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=berkeley -t MASTER.BELAL.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) MASTER.BELAL.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
