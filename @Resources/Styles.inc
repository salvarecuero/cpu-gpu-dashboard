[Variables]
; This section is required but can be empty
; Variables are defined in Variables.inc

; ==========================================
; SHARED METER STYLES
; ==========================================

[StyleTitle]
FontFace=Segoe UI
FontSize=14
FontWeight=600
FontColor=#ColorText#
AntiAlias=1
DynamicVariables=1

[StyleLabel]
FontFace=Segoe UI
FontSize=10
FontColor=#ColorTextMuted#
AntiAlias=1
DynamicVariables=1

[StyleValue]
FontFace=Segoe UI
FontSize=20
FontWeight=700
FontColor=#ColorText#
AntiAlias=1
DynamicVariables=1

[StyleValueSmall]
FontFace=Segoe UI
FontSize=14
FontWeight=600
FontColor=#ColorText#
AntiAlias=1
DynamicVariables=1

[StyleUnit]
FontFace=Segoe UI
FontSize=9
FontColor=#ColorTextMuted#
AntiAlias=1
DynamicVariables=1

[StyleButton]
FontFace=Segoe UI
FontSize=10
FontWeight=500
FontColor=#ColorText#
SolidColor=#ColorBackgroundLight#
Padding=12,8,12,8
AntiAlias=1
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor "70,70,70,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor "#ColorBackgroundLight#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleButtonPrimary]
FontFace=Segoe UI
FontSize=11
FontWeight=600
FontColor=#ColorText#
SolidColor=#ColorAccent#
Padding=15,10,15,10
AntiAlias=1
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor "130,200,255,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor "#ColorAccent#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleInputField]
FontFace=Segoe UI
FontSize=11
FontColor=#ColorText#
SolidColor=#ColorBackgroundLight#
Padding=10,8,10,8
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
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "130,200,255,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "#ColorAccent#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleInstructions]
FontFace=Segoe UI
FontSize=9
FontColor=#ColorTextMuted#
AntiAlias=1
ClipString=2
DynamicVariables=1
