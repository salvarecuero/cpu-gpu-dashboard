[Variables]
; This section is required but can be empty
; Variables are defined in Variables.inc

; ==========================================
; SHARED METER STYLES - Dark Theme
; ==========================================

[StyleTitle]
FontFace=Segoe UI
FontSize=16
FontWeight=600
FontColor=#ColorText#
AntiAlias=1
DynamicVariables=1

[StyleLabel]
FontFace=Segoe UI
FontSize=13
FontWeight=500
FontColor=#ColorTextMuted#
AntiAlias=1
DynamicVariables=1

[StyleValue]
FontFace=Segoe UI
FontSize=14
FontWeight=600
FontColor=#ColorText#
AntiAlias=1
DynamicVariables=1

[StyleValueSmall]
FontFace=Segoe UI
FontSize=9
FontWeight=500
FontColor=#ColorTextMuted#
AntiAlias=1
DynamicVariables=1

[StyleUnit]
FontFace=Segoe UI
FontSize=7
FontColor=#ColorTextMuted#
AntiAlias=1
DynamicVariables=1

[StyleButton]
FontFace=Segoe UI
FontSize=9
FontWeight=500
FontColor=#ColorTextMuted#
SolidColor=0,0,0,0
Padding=4,4,4,4
AntiAlias=1
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "#ColorAccent#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "#ColorTextMuted#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleButtonPrimary]
FontFace=Segoe UI
FontSize=10
FontWeight=600
FontColor=255,255,255,255
SolidColor=#ColorAccent#
Padding=12,10,12,10
AntiAlias=1
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor "#ColorAccentHover#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor "#ColorAccent#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleInputField]
FontFace=Segoe UI
FontSize=12
FontColor=#ColorText#
SolidColor=#ColorBackgroundLight#
Padding=12,10,12,10
AntiAlias=1
DynamicVariables=1

[StyleInputValue]
FontFace=Segoe UI
FontSize=12
FontWeight=400
FontColor=#ColorText#
AntiAlias=1
DynamicVariables=1

[StyleError]
FontFace=Segoe UI
FontSize=10
FontColor=#ColorDanger#
AntiAlias=1
DynamicVariables=1

[StyleLink]
FontFace=Segoe UI
FontSize=9
FontColor=#ColorAccent#
AntiAlias=1
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "#ColorAccentHover#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "#ColorAccent#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleInstructions]
FontFace=Segoe UI
FontSize=9
FontColor=#ColorTextMuted#
AntiAlias=1
ClipString=2
DynamicVariables=1

[StyleHelper]
FontFace=Segoe UI
FontSize=8
FontColor=#ColorTextMuted#
StringAlign=Center
AntiAlias=1
DynamicVariables=1

[StyleLabelClickable]
FontFace=Segoe UI
FontSize=11
FontWeight=500
FontColor=255,255,255,128
StringAlign=Center
SolidColor=0,0,0,1
Padding=10,5,10,5
AntiAlias=1
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255,200"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255,128"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables IsConfigured "0" "#@#Variables.inc"][!ActivateConfig "CPUGPUDashboard\Setup" "Setup.ini"][!DeactivateConfig "#CURRENTCONFIG#"]
