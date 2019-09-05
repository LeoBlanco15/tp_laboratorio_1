################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Trabajo\ practico\ 1.c 

OBJS += \
./src/Trabajo\ practico\ 1.o 

C_DEPS += \
./src/Trabajo\ practico\ 1.d 


# Each subdirectory must supply rules for building sources it contributes
src/Trabajo\ practico\ 1.o: ../src/Trabajo\ practico\ 1.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Trabajo practico 1.d" -MT"src/Trabajo\ practico\ 1.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


