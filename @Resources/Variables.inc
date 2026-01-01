[Variables]
; ==========================================
; CPU/GPU Dashboard Configuration
; ==========================================
; Set these values to match your HWiNFO sensor indexes
; Run in Command Prompt:
;   reg query HKEY_CURRENT_USER\SOFTWARE\HWiNFO64\VSB
; to find your sensor index numbers

; CPU Sensors
CPUTempIndex=0
CPUUsageIndex=1

; GPU Sensors
GPUTempIndex=2
GPUUsageIndex=3

; Registry Location
; Use HKEY_CURRENT_USER (default) or HKEY_LOCAL_MACHINE
RegHKey=HKEY_CURRENT_USER

; Configuration State (0=needs setup, 1=configured)
IsConfigured=0

; ==========================================
; Visual Settings
; ==========================================

; Temperature Thresholds (Celsius)
TempLow=40
TempMedium=60
TempHigh=80

; Colors (R,G,B,A format) - Dark Theme
ColorGood=76,175,80,255
ColorWarning=255,193,7,255
ColorDanger=244,67,54,255
ColorBackground=30,30,30,255
ColorBackgroundLight=45,45,45,255
ColorBackgroundDark=20,20,20,255
ColorBorder=60,60,60,255
ColorText=255,255,255,255
ColorTextMuted=160,160,160,255
ColorAccent=100,181,246,255
ColorAccentHover=130,200,255,255
ColorRingBg=50,50,50,255

; Dimensions
SkinWidth=320
SkinHeight=245
SkinWidthSetup=320
SkinHeightSetup=330
Padding=16
CornerRadius=8
