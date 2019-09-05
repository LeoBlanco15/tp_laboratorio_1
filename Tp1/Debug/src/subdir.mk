################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Trabajo\ practico\ 1.c \
../src/tp.c 

OBJS += \
./src/Trabajo\ practico\ 1.o \
./src/tp.o 

C_DEPS += \
./src/Trabajo\ practico\ 1.d \
./src/tp.d 


# Each subdirectory must supply rules for building sources it contributes
src/Trabajo\ practico\ 1.o: ../src/Trabajo\ practico\ 1.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Trabajo practico 1.d" -MT"src/Trabajo\ practico\ 1.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


