EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A3 16535 11693
encoding utf-8
Sheet 3 7
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text HLabel 7600 3600 2    50   Input ~ 0
V_BUS_SENSE
Text HLabel 2200 5000 0    50   Input ~ 0
CANFD_RX
Text HLabel 2200 5100 0    50   Input ~ 0
CANFD_TX
Text HLabel 7600 3000 2    50   Input ~ 0
CANFD_Fault
$Comp
L OpenTurn-rescue:CY8C6244AZI-S4D92-cy8c6244azi-s4d92 U?
U 1 1 60CAF32E
P 3650 900
AR Path="/60CAF32E" Ref="U?"  Part="1" 
AR Path="/60AF747C/60CAF32E" Ref="U301"  Part="1" 
F 0 "U301" H 4900 1065 50  0000 C CNN
F 1 "CY8C6244AZI-S4D92" H 4900 974 50  0000 C CNN
F 2 "Package_DFN_QFN:Texas_S-PVQFN-N64_EP4.25x4.25mm_ThermalVias" H 3700 950 50  0001 C CNN
F 3 "" H 3700 950 50  0001 C CNN
	1    3650 900 
	1    0    0    -1  
$EndComp
Wire Wire Line
	7400 5000 7400 4900
Wire Wire Line
	7400 4900 6250 4900
Wire Wire Line
	12000 5950 13350 5950
Wire Wire Line
	11600 5950 12000 5950
$Comp
L power:GND #PWR?
U 1 1 60CAF394
P 12000 6350
AR Path="/60CAF394" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/60CAF394" Ref="#PWR0319"  Part="1" 
F 0 "#PWR0319" H 12000 6100 50  0001 C CNN
F 1 "GND" H 12005 6177 50  0000 C CNN
F 2 "" H 12000 6350 50  0001 C CNN
F 3 "" H 12000 6350 50  0001 C CNN
	1    12000 6350
	1    0    0    -1  
$EndComp
Connection ~ 12000 5950
Wire Wire Line
	12000 6050 12000 5950
$Comp
L Device:C_Small C?
U 1 1 60CAF39C
P 12000 6150
AR Path="/60CAF39C" Ref="C?"  Part="1" 
AR Path="/60AF747C/60CAF39C" Ref="C318"  Part="1" 
F 0 "C318" H 12092 6196 50  0000 L CNN
F 1 "100n" H 12092 6105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 12000 6150 50  0001 C CNN
F 3 "~" H 12000 6150 50  0001 C CNN
	1    12000 6150
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R?
U 1 1 60CAF3A2
P 12000 5750
AR Path="/60CAF3A2" Ref="R?"  Part="1" 
AR Path="/60AF747C/60CAF3A2" Ref="R305"  Part="1" 
F 0 "R305" H 12059 5796 50  0000 L CNN
F 1 "10k" H 12059 5705 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" H 12000 5750 50  0001 C CNN
F 3 "~" H 12000 5750 50  0001 C CNN
	1    12000 5750
	1    0    0    -1  
$EndComp
Wire Wire Line
	3550 1100 2850 1100
Wire Wire Line
	2850 1100 2850 2300
Wire Wire Line
	3550 1000 2500 1000
Wire Wire Line
	2500 1000 2500 2300
$Comp
L power:+3.3V #PWR?
U 1 1 60CDE8A4
P 1000 9400
AR Path="/60CDE8A4" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/60CDE8A4" Ref="#PWR0302"  Part="1" 
F 0 "#PWR0302" H 1000 9250 50  0001 C CNN
F 1 "+3.3V" H 1015 9573 50  0000 C CNN
F 2 "" H 1000 9400 50  0001 C CNN
F 3 "" H 1000 9400 50  0001 C CNN
	1    1000 9400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 60CDE8AB
P 1500 10000
AR Path="/60CDE8AB" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/60CDE8AB" Ref="#PWR0303"  Part="1" 
F 0 "#PWR0303" H 1500 9750 50  0001 C CNN
F 1 "GND" H 1505 9827 50  0000 C CNN
F 2 "" H 1500 10000 50  0001 C CNN
F 3 "" H 1500 10000 50  0001 C CNN
	1    1500 10000
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 9900 1950 9900
$Comp
L Connector_Generic:Conn_02x05_Odd_Even J?
U 1 1 60CEE033
P 13650 5750
AR Path="/60CEE033" Ref="J?"  Part="1" 
AR Path="/60AF747C/60CEE033" Ref="J302"  Part="1" 
F 0 "J302" H 13700 6167 50  0000 C CNN
F 1 "JTAG/SWD" H 13700 6076 50  0000 C CNN
F 2 "Connector_PinHeader_1.27mm:PinHeader_2x05_P1.27mm_Vertical_SMD" H 13650 5750 50  0001 C CNN
F 3 "~" H 13650 5750 50  0001 C CNN
	1    13650 5750
	-1   0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 60CEE041
P 13900 6000
AR Path="/60CEE041" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/60CEE041" Ref="#PWR0324"  Part="1" 
F 0 "#PWR0324" H 13900 5750 50  0001 C CNN
F 1 "GND" H 13905 5827 50  0000 C CNN
F 2 "" H 13900 6000 50  0001 C CNN
F 3 "" H 13900 6000 50  0001 C CNN
	1    13900 6000
	-1   0    0    -1  
$EndComp
Wire Wire Line
	13900 6000 13900 5950
Wire Wire Line
	13900 5950 13900 5850
Wire Wire Line
	13900 5850 13850 5850
Connection ~ 13900 5950
Wire Wire Line
	13900 5950 13850 5950
Wire Wire Line
	13900 5850 13900 5750
Wire Wire Line
	13900 5750 13850 5750
Connection ~ 13900 5850
Wire Wire Line
	13900 5750 13900 5650
Wire Wire Line
	13900 5650 13850 5650
Connection ~ 13900 5750
Wire Wire Line
	13900 5500 13900 5550
Wire Wire Line
	13900 5550 13850 5550
Text HLabel 2200 3900 0    50   Input ~ 0
ENCODER_DATA
Text HLabel 2200 4000 0    50   Input ~ 0
ENCODER_SCK
Text HLabel 2200 4100 0    50   Input ~ 0
ENCODER_CS0
Text HLabel 2200 4200 0    50   Input ~ 0
ENCODER_CS1
Text HLabel 2200 4300 0    50   Input ~ 0
ENCODER_QOAD_A1
Text HLabel 2200 4400 0    50   Input ~ 0
ENCODER_QOAD_B1
Text HLabel 2200 4500 0    50   Input ~ 0
ENCODER_QOAD_I1
Text HLabel 2200 3400 0    50   Input ~ 0
ENCODER_QOAD_A2
Text HLabel 2200 3500 0    50   Input ~ 0
ENCODER_QOAD_B2
Text HLabel 2200 3600 0    50   Input ~ 0
ENCODER_QOAD_I2
Text HLabel 7600 1700 2    50   Input ~ 0
DRV_PWM_AL
Text HLabel 7600 1800 2    50   Input ~ 0
DRV_PWM_AH
Text HLabel 7600 1900 2    50   Input ~ 0
DRV_PWM_BL
Text HLabel 7600 2000 2    50   Input ~ 0
DRV_PWM_BH
Text HLabel 7600 2300 2    50   Input ~ 0
DRV_PWM_CL
Text HLabel 7600 2400 2    50   Input ~ 0
DRV_PWM_CH
Text HLabel 7600 4200 2    50   Input ~ 0
DRV_CAL
Text HLabel 7600 4300 2    50   Input ~ 0
DRV_ENABLE
Text HLabel 7600 3100 2    50   Input ~ 0
DRV_nFAULT
Text HLabel 7600 3300 2    50   Input ~ 0
DRV_ISENSE_A
Text HLabel 7600 3400 2    50   Input ~ 0
DRV_ISENSE_B
Text HLabel 7600 3500 2    50   Input ~ 0
DRV_ISENSE_C
Text HLabel 7600 2600 2    50   Input ~ 0
DRV_MOSI
Text HLabel 7600 2700 2    50   Input ~ 0
DRV_MISO
Text HLabel 7600 2800 2    50   Input ~ 0
DRV_SCK
Text HLabel 7600 2900 2    50   Input ~ 0
DRV_CS
$Comp
L Device:R_Small R?
U 1 1 60B29C46
P 3150 3800
AR Path="/60B29C46" Ref="R?"  Part="1" 
AR Path="/60AF747C/60B29C46" Ref="R301"  Part="1" 
F 0 "R301" H 3209 3846 50  0000 L CNN
F 1 "10k" H 3209 3755 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" H 3150 3800 50  0001 C CNN
F 3 "~" H 3150 3800 50  0001 C CNN
	1    3150 3800
	0    1    -1   0   
$EndComp
$Comp
L Device:C_Small C311
U 1 1 60B37BB3
P 2500 2400
F 0 "C311" H 2592 2446 50  0000 L CNN
F 1 "100n" H 2592 2355 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 2500 2400 50  0001 C CNN
F 3 "~" H 2500 2400 50  0001 C CNN
	1    2500 2400
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C312
U 1 1 60B3ADAA
P 2850 2400
F 0 "C312" H 2942 2446 50  0000 L CNN
F 1 "100n" H 2942 2355 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 2850 2400 50  0001 C CNN
F 3 "~" H 2850 2400 50  0001 C CNN
	1    2850 2400
	1    0    0    -1  
$EndComp
$Comp
L power:VDDA #PWR0304
U 1 1 60B66B27
P 3150 9400
F 0 "#PWR0304" H 3150 9250 50  0001 C CNN
F 1 "VDDA" H 3165 9573 50  0000 C CNN
F 2 "" H 3150 9400 50  0001 C CNN
F 3 "" H 3150 9400 50  0001 C CNN
	1    3150 9400
	1    0    0    -1  
$EndComp
Wire Wire Line
	1200 9500 1000 9500
Wire Wire Line
	1000 9500 1000 9400
Wire Wire Line
	3050 9500 3150 9500
$Comp
L Device:L_Small L302
U 1 1 60B7856F
P 1300 9500
F 0 "L302" V 1485 9500 50  0000 C CNN
F 1 "1k@100MHz" V 1394 9500 50  0000 C CNN
F 2 "Inductor_SMD:L_0603_1608Metric" H 1300 9500 50  0001 C CNN
F 3 "~" H 1300 9500 50  0001 C CNN
	1    1300 9500
	0    -1   -1   0   
$EndComp
$Comp
L Device:C_Small C304
U 1 1 60BB34D4
P 1950 9700
F 0 "C304" H 2042 9746 50  0000 L CNN
F 1 "100n" H 2042 9655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 1950 9700 50  0001 C CNN
F 3 "~" H 1950 9700 50  0001 C CNN
	1    1950 9700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1400 9500 1500 9500
$Comp
L Device:C_Small C302
U 1 1 60BB6652
P 1500 9700
F 0 "C302" H 1592 9746 50  0000 L CNN
F 1 "10u" H 1592 9655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 1500 9700 50  0001 C CNN
F 3 "~" H 1500 9700 50  0001 C CNN
	1    1500 9700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 9600 1500 9500
Connection ~ 1500 9500
Wire Wire Line
	1500 9500 1950 9500
Wire Wire Line
	1950 9600 1950 9500
Connection ~ 1950 9500
Wire Wire Line
	1950 9800 1950 9900
Wire Wire Line
	1500 10000 1500 9900
Connection ~ 1500 9900
Wire Wire Line
	1500 9900 1500 9800
$Comp
L power:+3.3V #PWR?
U 1 1 60BD57EB
P 1000 8400
AR Path="/60BD57EB" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/60BD57EB" Ref="#PWR0301"  Part="1" 
F 0 "#PWR0301" H 1000 8250 50  0001 C CNN
F 1 "+3.3V" H 1015 8573 50  0000 C CNN
F 2 "" H 1000 8400 50  0001 C CNN
F 3 "" H 1000 8400 50  0001 C CNN
	1    1000 8400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 60BD57F1
P 2900 9000
AR Path="/60BD57F1" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/60BD57F1" Ref="#PWR0305"  Part="1" 
F 0 "#PWR0305" H 2900 8750 50  0001 C CNN
F 1 "GND" H 2905 8827 50  0000 C CNN
F 2 "" H 2900 9000 50  0001 C CNN
F 3 "" H 2900 9000 50  0001 C CNN
	1    2900 9000
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 8900 1850 8900
Wire Wire Line
	1200 8500 1000 8500
Wire Wire Line
	1000 8500 1000 8400
$Comp
L Device:L_Small L301
U 1 1 60BD5801
P 1300 8500
F 0 "L301" V 1485 8500 50  0000 C CNN
F 1 "1k@100MHz" V 1394 8500 50  0000 C CNN
F 2 "Inductor_SMD:L_0603_1608Metric" H 1300 8500 50  0001 C CNN
F 3 "~" H 1300 8500 50  0001 C CNN
	1    1300 8500
	0    -1   -1   0   
$EndComp
$Comp
L Device:C_Small C303
U 1 1 60BD5807
P 1850 8700
F 0 "C303" H 1942 8746 50  0000 L CNN
F 1 "100n" H 1942 8655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 1850 8700 50  0001 C CNN
F 3 "~" H 1850 8700 50  0001 C CNN
	1    1850 8700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1400 8500 1500 8500
$Comp
L Device:C_Small C301
U 1 1 60BD580E
P 1500 8700
F 0 "C301" H 1592 8746 50  0000 L CNN
F 1 "10u" H 1592 8655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 1500 8700 50  0001 C CNN
F 3 "~" H 1500 8700 50  0001 C CNN
	1    1500 8700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 8600 1500 8500
Connection ~ 1500 8500
Wire Wire Line
	1500 8500 1850 8500
Wire Wire Line
	1850 8600 1850 8500
Wire Wire Line
	1850 8800 1850 8900
Wire Wire Line
	2900 9000 2900 8900
Wire Wire Line
	1500 8900 1500 8800
Wire Wire Line
	2300 8900 2650 8900
$Comp
L Device:C_Small C306
U 1 1 60BE1D2D
P 2650 8700
F 0 "C306" H 2742 8746 50  0000 L CNN
F 1 "100n" H 2742 8655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 2650 8700 50  0001 C CNN
F 3 "~" H 2650 8700 50  0001 C CNN
	1    2650 8700
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C305
U 1 1 60BE1D34
P 2300 8700
F 0 "C305" H 2392 8746 50  0000 L CNN
F 1 "1u" H 2392 8655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 2300 8700 50  0001 C CNN
F 3 "~" H 2300 8700 50  0001 C CNN
	1    2300 8700
	1    0    0    -1  
$EndComp
Wire Wire Line
	2300 8600 2300 8500
Wire Wire Line
	2300 8500 2650 8500
Wire Wire Line
	2650 8600 2650 8500
Wire Wire Line
	2650 8800 2650 8900
Wire Wire Line
	2300 8900 2300 8800
$Comp
L Device:C_Small C314
U 1 1 60BE8452
P 3250 2400
F 0 "C314" H 3342 2446 50  0000 L CNN
F 1 "4u7" H 3342 2355 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 3250 2400 50  0001 C CNN
F 3 "~" H 3250 2400 50  0001 C CNN
	1    3250 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 2300 3250 2100
Wire Wire Line
	3550 2700 3250 2700
Wire Wire Line
	3550 2100 3250 2100
Wire Wire Line
	3100 8900 3450 8900
$Comp
L Device:C_Small C308
U 1 1 60CA4B39
P 3450 8700
F 0 "C308" H 3542 8746 50  0000 L CNN
F 1 "100n" H 3542 8655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 3450 8700 50  0001 C CNN
F 3 "~" H 3450 8700 50  0001 C CNN
	1    3450 8700
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C307
U 1 1 60CA4B3F
P 3100 8700
F 0 "C307" H 3192 8746 50  0000 L CNN
F 1 "1u" H 3192 8655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 3100 8700 50  0001 C CNN
F 3 "~" H 3100 8700 50  0001 C CNN
	1    3100 8700
	1    0    0    -1  
$EndComp
Wire Wire Line
	3100 8600 3100 8500
Wire Wire Line
	3100 8500 3450 8500
Wire Wire Line
	3450 8600 3450 8500
Wire Wire Line
	3450 8800 3450 8900
Wire Wire Line
	3100 8900 3100 8800
Wire Wire Line
	3900 8900 4250 8900
$Comp
L Device:C_Small C310
U 1 1 60CA7AE9
P 4250 8700
F 0 "C310" H 4342 8746 50  0000 L CNN
F 1 "100n" H 4342 8655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4250 8700 50  0001 C CNN
F 3 "~" H 4250 8700 50  0001 C CNN
	1    4250 8700
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C309
U 1 1 60CA7AEF
P 3900 8700
F 0 "C309" H 3992 8746 50  0000 L CNN
F 1 "1u" H 3992 8655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 3900 8700 50  0001 C CNN
F 3 "~" H 3900 8700 50  0001 C CNN
	1    3900 8700
	1    0    0    -1  
$EndComp
Wire Wire Line
	3900 8600 3900 8500
Wire Wire Line
	3900 8500 4250 8500
Wire Wire Line
	4250 8600 4250 8500
Wire Wire Line
	4250 8800 4250 8900
Wire Wire Line
	3900 8900 3900 8800
Wire Wire Line
	4700 8900 5050 8900
$Comp
L Device:C_Small C315
U 1 1 60CAA533
P 5050 8700
F 0 "C315" H 5142 8746 50  0000 L CNN
F 1 "100n" H 5142 8655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 5050 8700 50  0001 C CNN
F 3 "~" H 5050 8700 50  0001 C CNN
	1    5050 8700
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C313
U 1 1 60CAA539
P 4700 8700
F 0 "C313" H 4792 8746 50  0000 L CNN
F 1 "1u" H 4792 8655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4700 8700 50  0001 C CNN
F 3 "~" H 4700 8700 50  0001 C CNN
	1    4700 8700
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 8600 4700 8500
Wire Wire Line
	4700 8500 5050 8500
Wire Wire Line
	5050 8600 5050 8500
Wire Wire Line
	5050 8800 5050 8900
Wire Wire Line
	4700 8900 4700 8800
Wire Wire Line
	1850 8500 2300 8500
Connection ~ 1850 8500
Connection ~ 2300 8500
Wire Wire Line
	2650 8500 3100 8500
Connection ~ 3100 8500
Wire Wire Line
	3450 8500 3900 8500
Connection ~ 3450 8500
Connection ~ 3900 8500
Wire Wire Line
	4250 8500 4700 8500
Connection ~ 4250 8500
Connection ~ 4700 8500
Wire Wire Line
	4700 8900 4250 8900
Connection ~ 4700 8900
Connection ~ 4250 8900
Wire Wire Line
	3900 8900 3450 8900
Connection ~ 3450 8900
Wire Wire Line
	3100 8900 2900 8900
Connection ~ 3100 8900
Connection ~ 2650 8900
Wire Wire Line
	2300 8900 1850 8900
Connection ~ 2300 8900
Connection ~ 1850 8900
Connection ~ 2900 8900
Wire Wire Line
	2900 8900 2650 8900
Connection ~ 2650 8500
Connection ~ 3900 8900
$Comp
L power:VDD #PWR0311
U 1 1 60CD1834
P 5150 8400
F 0 "#PWR0311" H 5150 8250 50  0001 C CNN
F 1 "VDD" H 5165 8573 50  0000 C CNN
F 2 "" H 5150 8400 50  0001 C CNN
F 3 "" H 5150 8400 50  0001 C CNN
	1    5150 8400
	1    0    0    -1  
$EndComp
Connection ~ 5050 8500
Wire Wire Line
	5050 8500 5150 8500
Wire Wire Line
	5150 8500 5150 8400
$Comp
L power:GND #PWR?
U 1 1 60CDE8C1
P 2400 2700
AR Path="/60CDE8C1" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/60CDE8C1" Ref="#PWR0308"  Part="1" 
F 0 "#PWR0308" H 2400 2450 50  0001 C CNN
F 1 "GND" H 2405 2527 50  0000 C CNN
F 2 "" H 2400 2700 50  0001 C CNN
F 3 "" H 2400 2700 50  0001 C CNN
	1    2400 2700
	0    1    1    0   
$EndComp
Wire Wire Line
	3250 2500 3250 2700
Connection ~ 3250 2700
Wire Wire Line
	3250 2700 2850 2700
Wire Wire Line
	2500 2500 2500 2700
Connection ~ 2500 2700
Wire Wire Line
	2500 2700 2400 2700
Wire Wire Line
	2850 2500 2850 2700
Connection ~ 2850 2700
Wire Wire Line
	2850 2700 2500 2700
$Comp
L power:VDDA #PWR0309
U 1 1 60D237A0
P 3300 1200
F 0 "#PWR0309" H 3300 1050 50  0001 C CNN
F 1 "VDDA" V 3315 1328 50  0000 L CNN
F 2 "" H 3300 1200 50  0001 C CNN
F 3 "" H 3300 1200 50  0001 C CNN
	1    3300 1200
	0    -1   -1   0   
$EndComp
$Comp
L power:VDD #PWR0310
U 1 1 60D237A6
P 3300 1400
F 0 "#PWR0310" H 3300 1250 50  0001 C CNN
F 1 "VDD" V 3315 1527 50  0000 L CNN
F 2 "" H 3300 1400 50  0001 C CNN
F 3 "" H 3300 1400 50  0001 C CNN
	1    3300 1400
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3300 1200 3550 1200
Wire Wire Line
	3300 1400 3450 1400
Wire Wire Line
	3450 1800 3550 1800
Connection ~ 3450 1400
Wire Wire Line
	3450 1400 3550 1400
Wire Wire Line
	3550 1700 3450 1700
Connection ~ 3450 1700
Wire Wire Line
	3450 1700 3450 1800
Wire Wire Line
	3450 1500 3550 1500
Wire Wire Line
	3450 1400 3450 1500
Connection ~ 3450 1500
Wire Wire Line
	3450 1500 3450 1600
Wire Wire Line
	3550 1600 3450 1600
Connection ~ 3450 1600
Wire Wire Line
	3450 1600 3450 1700
Text Notes 1600 8450 0    50   ~ 0
VDDD
Text Notes 2300 8450 0    50   ~ 0
VBACKUP
Text Notes 3100 8450 0    50   ~ 0
VDDIO0
Text Notes 3900 8450 0    50   ~ 0
VDDIO1
Text Notes 4700 8450 0    50   ~ 0
VDDIO2
Text Notes 2300 8200 0    50   ~ 0
Place close to MCU Power pins
Text Notes 1600 9450 0    50   ~ 0
VDDA
Wire Wire Line
	3550 2900 2500 2900
Text Label 2500 2900 0    50   ~ 0
RESET
Text Label 11600 5950 0    50   ~ 0
RESET
Wire Wire Line
	12000 6250 12000 6350
Wire Wire Line
	12000 5550 12000 5650
Wire Wire Line
	12000 5850 12000 5950
Wire Wire Line
	13350 5850 12450 5850
Wire Wire Line
	13350 5750 12450 5750
Wire Wire Line
	13350 5650 12450 5650
Wire Wire Line
	13350 5550 12450 5550
Text Label 12450 5550 0    50   ~ 0
SWDIO_TMS
Text Label 12450 5650 0    50   ~ 0
SWDCLK_TCKL
Text Label 7300 1300 2    50   ~ 0
TDI_SDA
Text Label 7300 1200 2    50   ~ 0
SWO_TDO_SCL
Text Label 7300 1500 2    50   ~ 0
SWDCLK_TCKL
Text Label 7300 1400 2    50   ~ 0
SWDIO_TMS
Wire Wire Line
	6250 1400 7300 1400
Wire Wire Line
	6250 1500 7300 1500
Wire Wire Line
	6250 1200 7300 1200
Wire Wire Line
	6250 1300 7300 1300
Wire Wire Line
	2200 3400 3550 3400
Wire Wire Line
	2200 3500 3550 3500
Wire Wire Line
	2200 3600 3550 3600
Wire Wire Line
	2200 4000 3550 4000
Wire Wire Line
	2200 4100 3550 4100
Wire Wire Line
	2200 4200 3550 4200
Wire Wire Line
	3550 3800 3250 3800
Wire Wire Line
	3050 3800 2850 3800
Wire Wire Line
	2850 3800 2850 3900
Wire Wire Line
	2850 3900 3550 3900
Wire Wire Line
	2850 3900 2200 3900
Connection ~ 2850 3900
Wire Wire Line
	2200 4300 3550 4300
Wire Wire Line
	2200 4400 3550 4400
Wire Wire Line
	2200 4500 3550 4500
Wire Wire Line
	3550 5000 2200 5000
Wire Wire Line
	3550 5100 2200 5100
Wire Wire Line
	7300 1100 6250 1100
Wire Wire Line
	6250 3300 7600 3300
Wire Wire Line
	6250 3400 7600 3400
Wire Wire Line
	6250 3500 7600 3500
Wire Wire Line
	6250 3600 7600 3600
Wire Wire Line
	6250 3700 7600 3700
Wire Wire Line
	6250 2700 7600 2700
Wire Wire Line
	6250 2800 7600 2800
Wire Wire Line
	6250 2900 7600 2900
Wire Wire Line
	6250 3000 7600 3000
Wire Wire Line
	6250 3100 7600 3100
Wire Wire Line
	6250 2300 7600 2300
Wire Wire Line
	6250 2400 7600 2400
Wire Wire Line
	6250 2600 7600 2600
Wire Wire Line
	6250 1800 7600 1800
Wire Wire Line
	6250 1900 7600 1900
Wire Wire Line
	6250 2000 7600 2000
Wire Wire Line
	6250 1700 7600 1700
Wire Wire Line
	6250 3800 7600 3800
Wire Wire Line
	6250 4200 7600 4200
Wire Wire Line
	6250 4300 7600 4300
Wire Wire Line
	7300 1000 6250 1000
Wire Wire Line
	3550 4700 2200 4700
Wire Wire Line
	3550 4800 2200 4800
Wire Wire Line
	3550 5200 2200 5200
Wire Wire Line
	3550 5300 2200 5300
$Comp
L power:+3.3V #PWR?
U 1 1 610DE222
P 12500 7950
AR Path="/610DE222" Ref="#PWR?"  Part="1" 
AR Path="/60AF5B92/610DE222" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/610DE222" Ref="#PWR0317"  Part="1" 
F 0 "#PWR0317" H 12500 7800 50  0001 C CNN
F 1 "+3.3V" H 12515 8123 50  0000 C CNN
F 2 "" H 12500 7950 50  0001 C CNN
F 3 "" H 12500 7950 50  0001 C CNN
	1    12500 7950
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 610DE228
P 13200 8550
AR Path="/610DE228" Ref="#PWR?"  Part="1" 
AR Path="/60AF5B92/610DE228" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/610DE228" Ref="#PWR0320"  Part="1" 
F 0 "#PWR0320" H 13200 8300 50  0001 C CNN
F 1 "GND" H 13205 8377 50  0000 C CNN
F 2 "" H 13200 8550 50  0001 C CNN
F 3 "" H 13200 8550 50  0001 C CNN
	1    13200 8550
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_02x05_Odd_Even J?
U 1 1 610DE22E
P 12800 8250
AR Path="/60AF5B92/610DE22E" Ref="J?"  Part="1" 
AR Path="/60AF747C/610DE22E" Ref="J301"  Part="1" 
F 0 "J301" H 12850 8667 50  0000 C CNN
F 1 "GPIOs" H 12850 8576 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_2x05_P2.54mm_Vertical_SMD" H 12800 8250 50  0001 C CNN
F 3 "~" H 12800 8250 50  0001 C CNN
	1    12800 8250
	1    0    0    -1  
$EndComp
Wire Wire Line
	12500 7950 12500 8050
Wire Wire Line
	12500 8050 12600 8050
Wire Wire Line
	13200 8550 13200 8450
Wire Wire Line
	13200 8450 13100 8450
Text Label 2200 5200 0    50   ~ 0
STATUS_LED0
Text Label 2200 5300 0    50   ~ 0
STATUS_LED1
Text Label 2200 4700 0    50   ~ 0
DEBUG_UART_RX
Text Label 2200 4800 0    50   ~ 0
DEBUG_UART_TX
Text Label 11850 8350 0    50   ~ 0
DEBUG_UART_RX
Text Label 11850 8450 0    50   ~ 0
DEBUG_UART_TX
Text Label 7300 1000 2    50   ~ 0
GPIO0
Text Label 7300 1100 2    50   ~ 0
GPIO1
Text Label 14250 8250 2    50   ~ 0
SWO_TDO_SCL
Text Label 14250 8350 2    50   ~ 0
TDI_SDA
Text Label 12450 5750 0    50   ~ 0
SWO_TDO_SCL
Text Label 12450 5850 0    50   ~ 0
TDI_SDA
Wire Wire Line
	6250 3900 7600 3900
Wire Wire Line
	6250 4000 7600 4000
Text Label 14250 8050 2    50   ~ 0
GPIO0
Text Label 14250 8150 2    50   ~ 0
GPIO1
Wire Wire Line
	13100 8150 14250 8150
Wire Wire Line
	14250 8050 13100 8050
Wire Wire Line
	13100 8350 13600 8350
Wire Wire Line
	14250 8250 13350 8250
Wire Wire Line
	12600 8150 11850 8150
Wire Wire Line
	11850 8250 12600 8250
Wire Wire Line
	12600 8350 11850 8350
Wire Wire Line
	11850 8450 12600 8450
Text Label 7600 3900 2    50   ~ 0
GPIO2
Text Label 7600 4000 2    50   ~ 0
GPIO3
Text Label 11850 8250 0    50   ~ 0
GPIO2
Text Label 11850 8150 0    50   ~ 0
GPIO3
$Comp
L power:GND #PWR?
U 1 1 611EA263
P 12300 1150
AR Path="/611EA263" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/611EA263" Ref="#PWR0314"  Part="1" 
F 0 "#PWR0314" H 12300 900 50  0001 C CNN
F 1 "GND" H 12305 977 50  0000 C CNN
F 2 "" H 12300 1150 50  0001 C CNN
F 3 "" H 12300 1150 50  0001 C CNN
	1    12300 1150
	1    0    0    -1  
$EndComp
Wire Wire Line
	11900 1150 12300 1150
Wire Wire Line
	10650 1150 11300 1150
Wire Wire Line
	11500 1150 11700 1150
$Comp
L power:GND #PWR?
U 1 1 611EA279
P 12300 1950
AR Path="/611EA279" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/611EA279" Ref="#PWR0316"  Part="1" 
F 0 "#PWR0316" H 12300 1700 50  0001 C CNN
F 1 "GND" H 12305 1777 50  0000 C CNN
F 2 "" H 12300 1950 50  0001 C CNN
F 3 "" H 12300 1950 50  0001 C CNN
	1    12300 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	11900 1950 12300 1950
Wire Wire Line
	11500 1950 11700 1950
$Comp
L power:+3V3 #PWR?
U 1 1 611EA287
P 11050 1950
AR Path="/611EA287" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/611EA287" Ref="#PWR0313"  Part="1" 
F 0 "#PWR0313" H 11050 1800 50  0001 C CNN
F 1 "+3V3" H 11065 2123 50  0000 C CNN
F 2 "" H 11050 1950 50  0001 C CNN
F 3 "" H 11050 1950 50  0001 C CNN
	1    11050 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	11050 1950 11300 1950
$Comp
L power:GND #PWR?
U 1 1 611EA295
P 12300 1500
AR Path="/611EA295" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/611EA295" Ref="#PWR0315"  Part="1" 
F 0 "#PWR0315" H 12300 1250 50  0001 C CNN
F 1 "GND" H 12305 1327 50  0000 C CNN
F 2 "" H 12300 1500 50  0001 C CNN
F 3 "" H 12300 1500 50  0001 C CNN
	1    12300 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	11900 1500 12300 1500
Wire Wire Line
	10650 1500 11300 1500
Wire Wire Line
	11500 1500 11700 1500
Text Label 10650 1150 0    50   ~ 0
STATUS_LED0
Text Label 10650 1500 0    50   ~ 0
STATUS_LED1
$Comp
L Device:R_Small R302
U 1 1 61237A5C
P 11400 1150
F 0 "R302" V 11204 1150 50  0000 C CNN
F 1 "4k7" V 11295 1150 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" H 11400 1150 50  0001 C CNN
F 3 "~" H 11400 1150 50  0001 C CNN
	1    11400 1150
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R303
U 1 1 61238DF9
P 11400 1500
F 0 "R303" V 11204 1500 50  0000 C CNN
F 1 "4k7" V 11295 1500 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" H 11400 1500 50  0001 C CNN
F 3 "~" H 11400 1500 50  0001 C CNN
	1    11400 1500
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R304
U 1 1 61239268
P 11400 1950
F 0 "R304" V 11204 1950 50  0000 C CNN
F 1 "4k7" V 11295 1950 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" H 11400 1950 50  0001 C CNN
F 3 "~" H 11400 1950 50  0001 C CNN
	1    11400 1950
	0    1    1    0   
$EndComp
$Comp
L Device:LED_Small D301
U 1 1 612565A3
P 11800 1150
F 0 "D301" H 11800 943 50  0000 C CNN
F 1 "LED_Small" H 11800 1034 50  0000 C CNN
F 2 "LED_SMD:LED_0603_1608Metric" V 11800 1150 50  0001 C CNN
F 3 "~" V 11800 1150 50  0001 C CNN
	1    11800 1150
	-1   0    0    1   
$EndComp
$Comp
L Device:LED_Small D302
U 1 1 61257867
P 11800 1500
F 0 "D302" H 11800 1293 50  0000 C CNN
F 1 "LED_Small" H 11800 1384 50  0000 C CNN
F 2 "LED_SMD:LED_0603_1608Metric" V 11800 1500 50  0001 C CNN
F 3 "~" V 11800 1500 50  0001 C CNN
	1    11800 1500
	-1   0    0    1   
$EndComp
$Comp
L Device:LED_Small D303
U 1 1 61257F71
P 11800 1950
F 0 "D303" H 11800 1743 50  0000 C CNN
F 1 "LED_Small" H 11800 1834 50  0000 C CNN
F 2 "LED_SMD:LED_0603_1608Metric" V 11800 1950 50  0001 C CNN
F 3 "~" V 11800 1950 50  0001 C CNN
	1    11800 1950
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint TP?
U 1 1 6144687C
P 4500 9650
AR Path="/6144687C" Ref="TP?"  Part="1" 
AR Path="/60AF747C/6144687C" Ref="TP301"  Part="1" 
F 0 "TP301" H 4558 9768 50  0000 L CNN
F 1 "3v3" H 4558 9677 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_D2.0mm" H 4700 9650 50  0001 C CNN
F 3 "~" H 4700 9650 50  0001 C CNN
	1    4500 9650
	1    0    0    -1  
$EndComp
$Comp
L Connector:TestPoint TP?
U 1 1 61446882
P 5050 9650
AR Path="/61446882" Ref="TP?"  Part="1" 
AR Path="/60AF747C/61446882" Ref="TP302"  Part="1" 
F 0 "TP302" H 5108 9768 50  0000 L CNN
F 1 "GND" H 5108 9677 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 5250 9650 50  0001 C CNN
F 3 "~" H 5250 9650 50  0001 C CNN
	1    5050 9650
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 61446888
P 4500 9650
AR Path="/61446888" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/61446888" Ref="#PWR0306"  Part="1" 
F 0 "#PWR0306" H 4500 9500 50  0001 C CNN
F 1 "+3.3V" H 4515 9823 50  0000 C CNN
F 2 "" H 4500 9650 50  0001 C CNN
F 3 "" H 4500 9650 50  0001 C CNN
	1    4500 9650
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 6144688E
P 5050 9650
AR Path="/6144688E" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/6144688E" Ref="#PWR0307"  Part="1" 
F 0 "#PWR0307" H 5050 9400 50  0001 C CNN
F 1 "GND" H 5055 9477 50  0000 C CNN
F 2 "" H 5050 9650 50  0001 C CNN
F 3 "" H 5050 9650 50  0001 C CNN
	1    5050 9650
	1    0    0    -1  
$EndComp
Wire Wire Line
	6250 5000 6700 5000
Connection ~ 7400 5000
Connection ~ 6700 5000
$Comp
L Sensor_Temperature:MCP9700AT-HTT U?
U 1 1 618747F7
P 6950 9550
AR Path="/618747F7" Ref="U?"  Part="1" 
AR Path="/60AFCC9B/618747F7" Ref="U?"  Part="1" 
AR Path="/60AF747C/618747F7" Ref="U303"  Part="1" 
F 0 "U303" H 6621 9596 50  0000 R CNN
F 1 "MCP9700AT-HTT" H 6621 9505 50  0000 R CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 6950 9150 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21942e.pdf" H 6800 9800 50  0001 C CNN
	1    6950 9550
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 618747FE
P 6950 9850
AR Path="/618747FE" Ref="#PWR?"  Part="1" 
AR Path="/60AFCC9B/618747FE" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/618747FE" Ref="#PWR0322"  Part="1" 
F 0 "#PWR0322" H 6950 9600 50  0001 C CNN
F 1 "GND" H 6955 9677 50  0000 C CNN
F 2 "" H 6950 9850 50  0001 C CNN
F 3 "" H 6950 9850 50  0001 C CNN
	1    6950 9850
	1    0    0    -1  
$EndComp
Text GLabel 6750 9200 0    50   Input ~ 0
VDDA
Wire Wire Line
	6750 9200 6950 9200
Wire Wire Line
	6950 9200 6950 9250
NoConn ~ 3550 3300
NoConn ~ 3550 3200
NoConn ~ 3550 3100
NoConn ~ 6250 4700
NoConn ~ 6250 4600
NoConn ~ 6250 4500
NoConn ~ 6250 4400
Text Label 7600 3700 2    50   ~ 0
TEMP1
Text Label 7600 3800 2    50   ~ 0
TEMP2
Wire Wire Line
	7350 9550 7600 9550
Text Label 7600 9550 2    50   ~ 0
TEMP1
$Comp
L Sensor_Temperature:MCP9700AT-HTT U?
U 1 1 61946F34
P 6950 8650
AR Path="/61946F34" Ref="U?"  Part="1" 
AR Path="/60AFCC9B/61946F34" Ref="U?"  Part="1" 
AR Path="/60AF747C/61946F34" Ref="U302"  Part="1" 
F 0 "U302" H 6621 8696 50  0000 R CNN
F 1 "MCP9700AT-HTT" H 6621 8605 50  0000 R CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 6950 8250 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21942e.pdf" H 6800 8900 50  0001 C CNN
	1    6950 8650
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 61946F3A
P 6950 8950
AR Path="/61946F3A" Ref="#PWR?"  Part="1" 
AR Path="/60AFCC9B/61946F3A" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/61946F3A" Ref="#PWR0321"  Part="1" 
F 0 "#PWR0321" H 6950 8700 50  0001 C CNN
F 1 "GND" H 6955 8777 50  0000 C CNN
F 2 "" H 6950 8950 50  0001 C CNN
F 3 "" H 6950 8950 50  0001 C CNN
	1    6950 8950
	1    0    0    -1  
$EndComp
Text GLabel 6750 8300 0    50   Input ~ 0
VDDA
Wire Wire Line
	6750 8300 6950 8300
Wire Wire Line
	6950 8300 6950 8350
Wire Wire Line
	7350 8650 7600 8650
Text Label 7600 8650 2    50   ~ 0
TEMP2
$Comp
L Device:C_Small C322
U 1 1 60AE0CAE
P 2500 9700
F 0 "C322" H 2592 9746 50  0000 L CNN
F 1 "100n" H 2592 9655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 2500 9700 50  0001 C CNN
F 3 "~" H 2500 9700 50  0001 C CNN
	1    2500 9700
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C323
U 1 1 60AE173F
P 3050 9700
F 0 "C323" H 3142 9746 50  0000 L CNN
F 1 "100n" H 3142 9655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 3050 9700 50  0001 C CNN
F 3 "~" H 3050 9700 50  0001 C CNN
	1    3050 9700
	1    0    0    -1  
$EndComp
Wire Wire Line
	2500 9500 2500 9600
Wire Wire Line
	2500 9500 3050 9500
Wire Wire Line
	3050 9500 3050 9600
Connection ~ 2500 9500
Wire Wire Line
	3050 9800 3050 9900
Wire Wire Line
	3050 9900 2500 9900
Connection ~ 1950 9900
Wire Wire Line
	2500 9800 2500 9900
Connection ~ 2500 9900
Wire Wire Line
	2500 9900 1950 9900
Connection ~ 3050 9500
Wire Wire Line
	1950 9500 2500 9500
Wire Wire Line
	6700 5000 6950 5000
Wire Wire Line
	7150 5000 7400 5000
$Comp
L power:GND #PWR?
U 1 1 60CAF348
P 7050 5600
AR Path="/60CAF348" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/60CAF348" Ref="#PWR0312"  Part="1" 
F 0 "#PWR0312" H 7050 5350 50  0001 C CNN
F 1 "GND" H 7055 5427 50  0000 C CNN
F 2 "" H 7050 5600 50  0001 C CNN
F 3 "" H 7050 5600 50  0001 C CNN
	1    7050 5600
	-1   0    0    -1  
$EndComp
Connection ~ 7050 5500
Wire Wire Line
	7050 5500 7050 5600
Wire Wire Line
	6700 5500 7050 5500
Wire Wire Line
	7050 5500 7400 5500
Wire Wire Line
	7400 5400 7400 5500
Wire Wire Line
	7400 5000 7400 5200
$Comp
L Device:C_Small C317
U 1 1 61474EC9
P 7400 5300
F 0 "C317" H 7492 5346 50  0000 L CNN
F 1 "12p" H 7492 5255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 7400 5300 50  0001 C CNN
F 3 "~" H 7400 5300 50  0001 C CNN
	1    7400 5300
	1    0    0    -1  
$EndComp
Wire Wire Line
	6700 5400 6700 5500
Wire Wire Line
	6700 5000 6700 5200
$Comp
L Device:C_Small C316
U 1 1 61473622
P 6700 5300
F 0 "C316" H 6792 5346 50  0000 L CNN
F 1 "12p" H 6792 5255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 6700 5300 50  0001 C CNN
F 3 "~" H 6700 5300 50  0001 C CNN
	1    6700 5300
	1    0    0    -1  
$EndComp
Wire Wire Line
	7050 5350 7050 5500
Wire Wire Line
	7150 5000 7150 5250
Wire Wire Line
	6950 5250 6950 5000
$Comp
L power:GND #PWR?
U 1 1 60C2624A
P 7050 5050
AR Path="/60C2624A" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/60C2624A" Ref="#PWR0111"  Part="1" 
F 0 "#PWR0111" H 7050 4800 50  0001 C CNN
F 1 "GND" H 7055 4877 50  0000 C CNN
F 2 "" H 7050 5050 50  0001 C CNN
F 3 "" H 7050 5050 50  0001 C CNN
	1    7050 5050
	1    0    0    1   
$EndComp
Wire Wire Line
	7050 5150 7050 5050
$Comp
L Device:Crystal_GND24_Small Y301
U 1 1 60B76BD2
P 7050 5250
F 0 "Y301" H 7194 5296 50  0000 L CNN
F 1 "32MHz" H 7194 5205 50  0000 L CNN
F 2 "Crystal:Crystal_SMD_3225-4Pin_3.2x2.5mm" H 7050 5250 50  0001 C CNN
F 3 "~" H 7050 5250 50  0001 C CNN
	1    7050 5250
	1    0    0    -1  
$EndComp
Text Notes 2400 9450 0    50   ~ 0
Temp1
Text Notes 2850 9450 0    50   ~ 0
Temp2
Wire Wire Line
	3150 9500 3150 9400
Text HLabel 2500 2900 0    50   Input ~ 0
RESET
$Comp
L Device:R_Small R?
U 1 1 61025BDB
P 13350 7850
AR Path="/61025BDB" Ref="R?"  Part="1" 
AR Path="/60AF747C/61025BDB" Ref="R306"  Part="1" 
F 0 "R306" H 13409 7896 50  0000 L CNN
F 1 "4k7" H 13409 7805 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" H 13350 7850 50  0001 C CNN
F 3 "~" H 13350 7850 50  0001 C CNN
	1    13350 7850
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R?
U 1 1 61026BDD
P 13600 7850
AR Path="/61026BDD" Ref="R?"  Part="1" 
AR Path="/60AF747C/61026BDD" Ref="R307"  Part="1" 
F 0 "R307" H 13659 7896 50  0000 L CNN
F 1 "4k7" H 13659 7805 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" H 13600 7850 50  0001 C CNN
F 3 "~" H 13600 7850 50  0001 C CNN
	1    13600 7850
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 61026ECD
P 13350 7650
AR Path="/61026ECD" Ref="#PWR?"  Part="1" 
AR Path="/60AF5B92/61026ECD" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/61026ECD" Ref="#PWR0325"  Part="1" 
F 0 "#PWR0325" H 13350 7500 50  0001 C CNN
F 1 "+3.3V" H 13365 7823 50  0000 C CNN
F 2 "" H 13350 7650 50  0001 C CNN
F 3 "" H 13350 7650 50  0001 C CNN
	1    13350 7650
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR?
U 1 1 61027891
P 13600 7650
AR Path="/61027891" Ref="#PWR?"  Part="1" 
AR Path="/60AF5B92/61027891" Ref="#PWR?"  Part="1" 
AR Path="/60AF747C/61027891" Ref="#PWR0326"  Part="1" 
F 0 "#PWR0326" H 13600 7500 50  0001 C CNN
F 1 "+3.3V" H 13615 7823 50  0000 C CNN
F 2 "" H 13600 7650 50  0001 C CNN
F 3 "" H 13600 7650 50  0001 C CNN
	1    13600 7650
	1    0    0    -1  
$EndComp
Wire Wire Line
	13600 7650 13600 7750
Wire Wire Line
	13350 7650 13350 7750
Wire Wire Line
	13350 7950 13350 8250
Wire Wire Line
	13350 8250 13100 8250
Wire Wire Line
	13600 7950 13600 8350
Wire Wire Line
	13600 8350 14250 8350
Connection ~ 13350 8250
Connection ~ 13600 8350
$Comp
L power:VDD #PWR?
U 1 1 60CD4D9C
P 13900 5500
F 0 "#PWR?" H 13900 5350 50  0001 C CNN
F 1 "VDD" H 13915 5673 50  0000 C CNN
F 2 "" H 13900 5500 50  0001 C CNN
F 3 "" H 13900 5500 50  0001 C CNN
	1    13900 5500
	1    0    0    -1  
$EndComp
$Comp
L power:VDD #PWR?
U 1 1 60CE0839
P 12000 5550
F 0 "#PWR?" H 12000 5400 50  0001 C CNN
F 1 "VDD" H 12015 5723 50  0000 C CNN
F 2 "" H 12000 5550 50  0001 C CNN
F 3 "" H 12000 5550 50  0001 C CNN
	1    12000 5550
	1    0    0    -1  
$EndComp
$EndSCHEMATC
