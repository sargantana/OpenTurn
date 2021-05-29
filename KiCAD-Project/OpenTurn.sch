EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A3 16535 11693
encoding utf-8
Sheet 1 7
Title "Controller"
Date ""
Rev "1"
Comp "OpenTurn Cycloidal Actuator -16:1"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Mechanical:MountingHole_Pad H101
U 1 1 612AB39C
P 1150 5450
F 0 "H101" H 1250 5499 50  0000 L CNN
F 1 "3.2mm" H 1250 5408 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3_DIN965_Pad" H 1150 5450 50  0001 C CNN
F 3 "~" H 1150 5450 50  0001 C CNN
	1    1150 5450
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole_Pad H102
U 1 1 612AEA2F
P 1150 5950
F 0 "H102" H 1250 5999 50  0000 L CNN
F 1 "3.2mm" H 1250 5908 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3_DIN965_Pad" H 1150 5950 50  0001 C CNN
F 3 "~" H 1150 5950 50  0001 C CNN
	1    1150 5950
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole_Pad H103
U 1 1 612AFBA1
P 1150 6450
F 0 "H103" H 1250 6499 50  0000 L CNN
F 1 "3.2mm" H 1250 6408 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3_DIN965_Pad" H 1150 6450 50  0001 C CNN
F 3 "~" H 1150 6450 50  0001 C CNN
	1    1150 6450
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0101
U 1 1 612B030D
P 1150 5550
F 0 "#PWR0101" H 1150 5300 50  0001 C CNN
F 1 "GND" H 1155 5377 50  0000 C CNN
F 2 "" H 1150 5550 50  0001 C CNN
F 3 "" H 1150 5550 50  0001 C CNN
	1    1150 5550
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0102
U 1 1 612B2BDA
P 1150 6050
F 0 "#PWR0102" H 1150 5800 50  0001 C CNN
F 1 "GND" H 1155 5877 50  0000 C CNN
F 2 "" H 1150 6050 50  0001 C CNN
F 3 "" H 1150 6050 50  0001 C CNN
	1    1150 6050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0103
U 1 1 612B3E2E
P 1150 6550
F 0 "#PWR0103" H 1150 6300 50  0001 C CNN
F 1 "GND" H 1155 6377 50  0000 C CNN
F 2 "" H 1150 6550 50  0001 C CNN
F 3 "" H 1150 6550 50  0001 C CNN
	1    1150 6550
	1    0    0    -1  
$EndComp
$Sheet
S 1000 1000 3000 3950
U 60AF5B92
F0 "Interfaces" 50
F1 "Interfaces.sch" 50
F2 "CANFD_RX" I R 4000 1800 50 
F3 "CANFD_TX" I R 4000 1900 50 
F4 "CANFD_Fault" I R 4000 2000 50 
F5 "ENCODER_SCK" I R 4000 2750 50 
F6 "ENCODER_CS0" I R 4000 2850 50 
F7 "ENCODER_CS1" I R 4000 2950 50 
F8 "ENCODER_QOAD_A1" I R 4000 3050 50 
F9 "ENCODER_QOAD_B1" I R 4000 3150 50 
F10 "ENCODER_QOAD_I1" I R 4000 3250 50 
F11 "ENCODER_QOAD_A2" I R 4000 3350 50 
F12 "ENCODER_QOAD_B2" I R 4000 3450 50 
F13 "ENCODER_QOAD_I2" I R 4000 3550 50 
F14 "ENCODER_DATA" I R 4000 2650 50 
F15 "V_BUS_SENSE" I R 4000 1200 50 
F16 "RESET" I R 4000 1300 50 
$EndSheet
$Sheet
S 5000 1000 3400 4000
U 60AF747C
F0 "MCU" 50
F1 "MCU.sch" 50
F2 "V_BUS_SENSE" I L 5000 1200 50 
F3 "CANFD_RX" I L 5000 1800 50 
F4 "CANFD_TX" I L 5000 1900 50 
F5 "CANFD_Fault" I L 5000 2000 50 
F6 "ENCODER_DATA" I L 5000 2650 50 
F7 "ENCODER_SCK" I L 5000 2750 50 
F8 "ENCODER_CS0" I L 5000 2850 50 
F9 "ENCODER_CS1" I L 5000 2950 50 
F10 "ENCODER_QOAD_A1" I L 5000 3050 50 
F11 "ENCODER_QOAD_B1" I L 5000 3150 50 
F12 "ENCODER_QOAD_I1" I L 5000 3250 50 
F13 "ENCODER_QOAD_A2" I L 5000 3350 50 
F14 "ENCODER_QOAD_B2" I L 5000 3450 50 
F15 "ENCODER_QOAD_I2" I L 5000 3550 50 
F16 "DRV_PWM_AL" I R 8400 1500 50 
F17 "DRV_PWM_AH" I R 8400 1600 50 
F18 "DRV_PWM_BL" I R 8400 1700 50 
F19 "DRV_PWM_BH" I R 8400 1800 50 
F20 "DRV_PWM_CL" I R 8400 1900 50 
F21 "DRV_PWM_CH" I R 8400 2000 50 
F22 "DRV_CAL" I R 8400 2500 50 
F23 "DRV_ENABLE" I R 8400 2600 50 
F24 "DRV_nFAULT" I R 8400 2700 50 
F25 "DRV_ISENSE_A" I R 8400 3000 50 
F26 "DRV_ISENSE_B" I R 8400 3100 50 
F27 "DRV_ISENSE_C" I R 8400 3200 50 
F28 "DRV_MOSI" I R 8400 3500 50 
F29 "DRV_MISO" I R 8400 3600 50 
F30 "DRV_SCK" I R 8400 3700 50 
F31 "DRV_CS" I R 8400 3800 50 
F32 "RESET" I L 5000 1300 50 
$EndSheet
Wire Wire Line
	4000 1200 5000 1200
Wire Wire Line
	5000 1800 4000 1800
Wire Wire Line
	4000 1900 5000 1900
Wire Wire Line
	5000 2000 4000 2000
Wire Wire Line
	5000 2650 4000 2650
Wire Wire Line
	5000 2750 4000 2750
Wire Wire Line
	5000 2850 4000 2850
Wire Wire Line
	5000 2950 4000 2950
Wire Wire Line
	5000 3050 4000 3050
Wire Wire Line
	5000 3150 4000 3150
Wire Wire Line
	5000 3250 4000 3250
Wire Wire Line
	5000 3350 4000 3350
Wire Wire Line
	5000 3450 4000 3450
Wire Wire Line
	5000 3550 4000 3550
$Sheet
S 9500 1000 2000 3500
U 60AFCC9B
F0 "Power" 50
F1 "Power.sch" 50
F2 "DRV_PWM_AL" I L 9500 1500 50 
F3 "DRV_PWM_AH" I L 9500 1600 50 
F4 "DRV_PWM_BL" I L 9500 1700 50 
F5 "DRV_PWM_BH" I L 9500 1800 50 
F6 "DRV_PWM_CL" I L 9500 1900 50 
F7 "DRV_PWM_CH" I L 9500 2000 50 
F8 "DRV_nFAULT" I L 9500 2700 50 
F9 "DRV_ISENSE_A" I L 9500 3000 50 
F10 "DRV_ISENSE_B" I L 9500 3100 50 
F11 "DRV_ISENSE_C" I L 9500 3200 50 
F12 "DRV_MOSI" I L 9500 3500 50 
F13 "DRV_MISO" I L 9500 3600 50 
F14 "DRV_SCK" I L 9500 3700 50 
F15 "DRV_CS" I L 9500 3800 50 
F16 "DRV_CAL" I L 9500 2500 50 
F17 "DRV_ENABLE" I L 9500 2600 50 
$EndSheet
Wire Wire Line
	8400 1500 9500 1500
Wire Wire Line
	8400 1600 9500 1600
Wire Wire Line
	8400 1700 9500 1700
Wire Wire Line
	8400 1800 9500 1800
Wire Wire Line
	8400 1900 9500 1900
Wire Wire Line
	8400 2000 9500 2000
Wire Wire Line
	8400 2500 9500 2500
Wire Wire Line
	8400 2600 9500 2600
Wire Wire Line
	8400 2700 9500 2700
Wire Wire Line
	8400 3000 9500 3000
Wire Wire Line
	8400 3100 9500 3100
Wire Wire Line
	8400 3200 9500 3200
Wire Wire Line
	8400 3500 9500 3500
Wire Wire Line
	8400 3600 9500 3600
Wire Wire Line
	8400 3700 9500 3700
Wire Wire Line
	8400 3800 9500 3800
Wire Wire Line
	4000 1300 5000 1300
$EndSCHEMATC
