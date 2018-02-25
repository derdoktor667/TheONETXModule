EESchema Schematic File Version 2
LIBS:TheONETXParts
LIBS:Multipro-txV2-3d-cache
LIBS:power
LIBS:device
LIBS:switches
LIBS:relays
LIBS:motors
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:modules
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Arduino_Nano_v3.x A1
U 1 1 5A9174CD
P 5400 3400
F 0 "A1" H 5100 4250 50  0000 R CNN
F 1 "Arduino_Nano_v3.x" V 5450 3750 50  0000 R CNN
F 2 "Modules:Arduino_Nano" H 5550 2450 50  0001 L CNN
F 3 "" H 5400 2400 50  0001 C CNN
	1    5400 3400
	-1   0    0    -1  
$EndComp
$Comp
L GND #PWR01
U 1 1 5A91751A
P 5350 4500
F 0 "#PWR01" H 5350 4500 30  0001 C CNN
F 1 "GND" H 5350 4430 30  0001 C CNN
F 2 "" H 5350 4500 60  0000 C CNN
F 3 "" H 5350 4500 60  0000 C CNN
	1    5350 4500
	1    0    0    -1  
$EndComp
Wire Wire Line
	5300 4400 5400 4400
Wire Wire Line
	5350 4400 5350 4500
Connection ~ 5350 4400
$Comp
L Conn_01x05_Female J1
U 1 1 5A918030
P 8600 3200
F 0 "J1" H 8600 3500 50  0000 C CNN
F 1 "Conn_01x05_Female" H 8600 2900 50  0001 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x05_Pitch2.54mm" H 8600 3200 50  0001 C CNN
F 3 "" H 8600 3200 50  0001 C CNN
	1    8600 3200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR02
U 1 1 5A9180F6
P 8300 3600
F 0 "#PWR02" H 8300 3600 30  0001 C CNN
F 1 "GND" H 8300 3530 30  0001 C CNN
F 2 "" H 8300 3600 60  0000 C CNN
F 3 "" H 8300 3600 60  0000 C CNN
	1    8300 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	8400 3300 8300 3300
$Comp
L R R1
U 1 1 5A918115
P 6750 3000
F 0 "R1" V 6830 3000 40  0000 C CNN
F 1 "2.2K" V 6757 3001 40  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal" V 6680 3000 30  0001 C CNN
F 3 "" H 6750 3000 30  0000 C CNN
	1    6750 3000
	0    -1   -1   0   
$EndComp
$Comp
L R R2
U 1 1 5A918145
P 7250 3250
F 0 "R2" V 7330 3250 40  0000 C CNN
F 1 "10K" V 7257 3251 40  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal" V 7180 3250 30  0001 C CNN
F 3 "" H 7250 3250 30  0000 C CNN
	1    7250 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	7000 3000 8400 3000
Connection ~ 7250 3000
Wire Wire Line
	6500 3000 5900 3000
Wire Wire Line
	8300 3300 8300 3600
$Comp
L GND #PWR?
U 1 1 5A91832F
P 7250 3550
F 0 "#PWR?" H 7250 3550 30  0001 C CNN
F 1 "GND" H 7250 3480 30  0001 C CNN
F 2 "" H 7250 3550 60  0000 C CNN
F 3 "" H 7250 3550 60  0000 C CNN
	1    7250 3550
	1    0    0    -1  
$EndComp
Wire Wire Line
	7250 3550 7250 3500
$EndSCHEMATC
