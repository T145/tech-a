;===========
; BACKGROUND
;===========

[MeterUnderBackground1]
Meter=Image
X=0
Y=0
W=710
H=710
Greyscale=1
ImageTint=#BckColor1#
ImageName=BG1.png
Hidden=0

[MeterUnderBackground2]
Meter=Image
X=0
Y=0
W=710
H=710
Greyscale=1
ImageTint=#BckColor2#
ImageName=BG2.png
Hidden=0

[MeterUnderBackground3]
Meter=Image
X=0
Y=0
W=710
H=710
Greyscale=1
ImageTint=#BckColor3#
ImageName=BG3.png
Hidden=0
[MeterUnderBackground4]

Meter=Image
X=0
Y=0
W=710
H=710
Greyscale=1
ImageTint=#BckColor4#
ImageName=BG4.png
Hidden=0

[MeterUnderBackground5]
Meter=Image
X=0
Y=0
W=710
H=710
Greyscale=1
ImageTint=#BckColor5#
ImageName=BG5.png
Hidden=0

[MeterUnderBackground6]
Meter=Image
X=0
Y=0
W=710
H=710
Greyscale=1
ImageTint=#BckColor6#
ImageName=BG6.png
Hidden=0

;===========
; BUTTONS
;===========

[MeterbuttonComp]
Meter=BUTTON
X=137
Y=227
ButtonImage=COMP.png
Greyscale=1
ImageTint=#BtnColor1#
LeftMouseDownAction=[shell:MyComputerFolder]

[Meterbuttondocs]
Meter=BUTTON
X=124
Y=281
ButtonImage=DOCS.png
Greyscale=1
ImageTint=#BtnColor1#
LeftMouseDownAction=[shell:DocumentsLibrary]

[MeterbuttonCTRL]
Meter=BUTTON
X=124
Y=340
ButtonImage=CTRL.png
Greyscale=1
ImageTint=#BtnColor1#
LeftMouseDownAction=[shell:ControlPanelFolder]

[MeterbuttonDESK]
Meter=BUTTON
X=127
Y=393
ButtonImage=DESK.png
Greyscale=1
ImageTint=#BtnColor1#
LeftMouseDownAction=[shell:Desktop]

[MeterbuttonXPLR]
Meter=BUTTON
X=536
Y=233
ButtonImage=XPLR.png
Greyscale=1
ImageTint=#BtnColor1#
LeftMouseUpAction=["C:\Program Files (x86)\r2 Studios\Xion\Xion.exe"]

[MeterbuttonCHRM]
Meter=BUTTON
X=556
Y=288
ButtonImage=CHRM.png
Greyscale=1
ImageTint=#BtnColor1#
LeftMouseDownAction=["C:\Program Files (x86)\Google\Chrome\Application\chrome.exe"]

[MeterbuttonGAME]
Meter=BUTTON
X=560
Y=348
ButtonImage=GAME.png
Greyscale=1
ImageTint=#BtnColor1#
LeftMouseDownAction=[shell:Games]

[MeterbuttonCFG]
Meter=BUTTON
X=545
Y=399
ButtonImage=CFG.png
Greyscale=1
ImageTint=#BtnColor1#
LeftMouseDownAction= [!RainmeterActivateConfig "TECH-A\CFG" "configure.ini"]

;===========
; TIME
;===========

[MeterTime]
Meter=STRING
MeasureName=MeasureClock
X=350
Y=167
FontColor=#FColor1#
FontSize=6
StringAlign=CENTER
FontFace=#Font4#

AntiAlias=1
Hidden=0

[MeterLabel]
Meter=STRING
MeasureName=MeasureLabel
X=380
Y=167
FontColor=#FColor2#
FontSize=6
StringAlign=CENTER
FontFace=#Font4#

AntiAlias=1
Hidden=0


[Meterdate]
Meter=STRING
MeasureName=MeasureDate
X=348
Y=534
FontColor=#FColor1#
FontSize=6
StringAlign=CENTER
FontFace=#Font4#

AntiAlias=1
Hidden=0

[Metermounth]
Meter=STRING
MeasureName=MeasureMonth
X=379
Y=534
FontColor=#FColor2#
FontSize=6
StringAlign=CENTER
FontFace=#Font4#

AntiAlias=1
Hidden=0

[MeterBigAnimation]
Meter=BITMAP
MeasureName=MeasureTime10
X=0
Y=0
Greyscale=1
ImageTint=#AColor2#
BitmapImage=BigAnimation.png
BitmapFrames=10
BitmapExtend=1
AntiAlias=1
hidden=1

[MeterAnimodeOFF]
Meter=STRING
X=283
Y=145
FontColor=#FColor1#
StringStyle=NORMAL
FontSize=#FontHeight3#
StringAlign=CENTER
FontFace=#Font4#
AntiAlias=#AntiAlias#
Hidden=0
Prefix="ANI OFF"
LeftMouseDownAction= [!RainmeterHideMeter MeterBigAnimation]

[MeterAnimodeON]
Meter=STRING
X=445
Y=145
FontColor=#FColor1#
StringStyle=NORMAL
FontSize=#FontHeight3#
StringAlign=CENTER
FontFace=#Font4#
AntiAlias=#AntiAlias#
Hidden=0
Prefix="ANI ON"
LeftMouseDownAction= [!RainmeterShowMeter MeterBigAnimation]

;===========
; NETWORK INFO
;===========

[mNetIn]
Measure=NetIn

[mNetInTotal]
Measure=NetIn
Cumulative=1

[mNetOut]
Measure=NetOut

[mNetOutTotal]
Measure=NetOut
Cumulative=1

[MeasureRing2]
Measure=Calc
Formula=360

[CalcNetIn]
Measure=Calc
Formula=mNetIn/6144000

[CalcNetOut]
Measure=Calc
Formula=mNetOut/1048576


[UPLOAD]
Meter=STRING
MeasureName=mNetOut
FontColor=#FColor1#
FontSize=6
StringAlign=CENTER
FontFace=#Font4#
X=57
Y=315
Text="%1B"
AutoScale=1
Group=NET
Hidden=0

[UPLOAD.Total]
Meter=STRING
MeasureName=mNetOutTotal
FontColor=#FColor2#
FontSize=6
StringAlign=CENTER
FontFace=#Font4#
X=r
Y=20r
Text="%1B"
AutoScale=1
Group=NET
Hidden=0

[DOWNLOAD.Total]
Meter=STRING
MeasureName=mNetInTotal
FontColor=#FColor2#
FontSize=6
StringAlign=CENTER
FontFace=#Font4#
X=r
Y=30r
Text="%1B"
AutoScale=1
Group=NET
Hidden=0

[DOWNLOAD]
Meter=STRING
MeasureName=mNetIn
FontColor=#FColor1#
FontSize=6
StringAlign=CENTER
FontFace=#Font4#
X=r
Y=20r
Text="%1B"
AutoScale=1
Group=NET
Hidden=0

;----------------------------

[MeterCircleee443]
Meter=ROUNDLINE
MeasureName=CalcNetIn
X=361
Y=355
LineLength=265
LineStart=261
StartAngle=3.159045946109736
RotationAngle=0.3665191429188092
AntiAlias=1
LineColor=#LColor5#
Solid=1
Hidden=0

[Circlenet1]
Meter=ROUNDLINE
MeasureName=CalcNetOut
X=361
Y=355
LineLength=265
LineStart=261
StartAngle=3.12413936106985
RotationAngle=-0.3665191429188092
LineColor=#LColor1#
Solid=1
AntiAlias=1
Hidden=0

[Circlenet2]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=361
Y=355
LineLength=265
LineStart=261
StartAngle=3.12413936106985
RotationAngle=-0.3665191429188092
AntiAlias=1
LineColor=#LColor3#
Solid=1
Hidden=0

[Circlenet3]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=361
Y=355
LineLength=265
LineStart=261
StartAngle=3.159045946109736
RotationAngle=0.3665191429188092
AntiAlias=1
LineColor=#LColor3#
Solid=1
Hidden=0

;===========
; RAM
;===========

[MeasureMem]
Measure=PhysicalMemory

[MeasurePhysMemTotal]
Measure=PhysicalMemory
Total=1

[MeasureTotalRAM]
Measure=PhysicalMemory
Total=1

[MeasureUsedRAM]
Measure=PhysicalMemory
InvertMeasure=0

[MeasureUsedRAM1]
Measure=PhysicalMemory
InvertMeasure=1

[MeasureFreeRAM]
Measure=PhysicalMemory
InvertMeasure=1

;-----------------------------

[UsedRAM.p2x]
MeasureName=MeasureUsedRAM
Meter=STRING
X=655
Y=392
FontColor=#FColor2#
FontSize=6
FontFace=#Font4#
StringAlign=CENTER
AntiAlias=0
AutoScale=1
NumOfDecimals=2
Percentual=1
PostFix="%"
Hidden=0
LeftMouseDownAction= [!RainmeterActivateConfig "EarthquakeMap" "Last7Days.Magnitude2.5+.ini"]

[freeRAM.p2x2]
MeasureName=MeasureFreeRAM
Meter=STRING
X=655
Y=312
FontColor=#FColor2#
FontSize=6
FontFace=#Font4#
StringAlign=CENTER
AntiAlias=0
AutoScale=1
NumOfDecimals=2
Percentual=1
PostFix="%"
Hidden=0

[UsedTOTAL]
MeasureName=MeasureTotalRAM
Meter=STRING
X=660
Y=352
FontColor=#FColor1#
FontSize=6
FontFace=#Font4#
StringAlign=CENTER
AntiAlias=0
AutoScale=1
NumOfDecimals=2
Hidden=0
LeftMouseDownAction= [!RainmeterDeActivateConfig "EarthquakeMap" "Last7Days.Magnitude2.5+.ini"]

[RAMl12x]
Meter=ROUNDLINE
MeasureName=MeasureUsedRAM
X=361
Y=355
LineLength=265
LineStart=261
StartAngle=0.0174532925199433
RotationAngle=0.3665191429188092
LineColor=#LColor5#
AntiAlias=1
Solid=1
Hidden=0

[RAMl12xx]
Meter=ROUNDLINE
MeasureName=MeasureFreeRAM
X=361
Y=355
LineLength=265
LineStart=261
StartAngle=6.265732014659643
RotationAngle=-0.3665191429188092
LineColor=#LColor1#
AntiAlias=1
Solid=1
Hidden=0

[Circleram2]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=361
Y=355
LineLength=265
LineStart=261
StartAngle=0.0174532925199433
RotationAngle=0.3665191429188092
AntiAlias=1
LineColor=#LColor3#
Solid=1
Hidden=0

[Circleram3]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=361
Y=355
LineLength=265
LineStart=261
StartAngle=6.265732014659643
RotationAngle=-0.3665191429188092
AntiAlias=1
LineColor=#LColor3#
Solid=1
Hidden=0

;===========
; COMMANDS
;===========

[Metergamemode1]
Meter=STRING
X=336
Y=128
FontColor=#FColor1#
StringStyle=NORMAL
FontSize=#FontHeight3#
StringAlign=CENTER
FontFace=#Font4#
AntiAlias=#AntiAlias#
Hidden=0
Prefix="GAME"
LeftMouseDownAction= [!RainmeterDeActivateConfig "TECH-A\rotator" "rotator.ini"]

[Metergamemode2]
Meter=STRING
X=336
Y=138
FontColor=#FColor2#
StringStyle=NORMAL
FontSize=#FontHeight3#
StringAlign=CENTER
FontFace=#Font4#
AntiAlias=#AntiAlias#
Hidden=0
Prefix="MODE"
LeftMouseDownAction= [!RainmeterDeActivateConfig "TECH-A\rotator" "rotator.ini"]

[MeterDeskmode1]
Meter=STRING
X=391
Y=128
FontColor=#FColor2#
StringStyle=NORMAL
FontSize=#FontHeight3#
StringAlign=CENTER
FontFace=#Font4#
AntiAlias=#AntiAlias#
Hidden=0
Prefix="DESK"
LeftMouseDownAction= [!RainmeterActivateConfig "TECH-A\rotator" "rotator.ini"]

[MeterDeskmode2]
Meter=STRING
X=391
Y=138
FontColor=#FColor1#
StringStyle=NORMAL
FontSize=#FontHeight3#
StringAlign=CENTER
FontFace=#Font4#
AntiAlias=#AntiAlias#
Hidden=0
Prefix="MODE"
LeftMouseDownAction= [!RainmeterActivateConfig "TECH-A\rotator" "rotator.ini"]




;===========
; HDDS
;===========

; C DRIVE

[Mse_DriveUsed1]
Measure=FreeDiskSpace
Drive=#Drive1#:
InvertMeasure=1

[MeasureUsed1]
Measure=FreeDiskSpace
Drive=#Drive1#:
IgnoreRemovable=0
InvertMeasure=1
UpdateDivider=2
Substitute="1.0":"Removed"
IfEqualValue=0
IfEqualAction=[!RainmeterHideMeter Rl_DriveUsed1][!RainmeterHideMeter Rl_DriveUsed1x][!RainmeterHideMeter Rl_DriveUsed11][!RainmeterHideMeter Rl_DriveUsed11x][!RainmeterHideMeter Rl_DriveAccess1][!RainmeterHideMeter Rl_DriveAccess1Cirlce][!RainmeterHideMeter Rl_DriveAccess12][!RainmeterHideMeter Rl_DriveAccess_txt1][!RainmeterHideMeter Drive%1][!RainmeterHideMeter Rl_DriveTotal1][!RainmeterHideMeter Rl_DriveAccess1Cirlce2]
IfAboveValue=1
IfAboveAction=[!RainmeterShowMeter Rl_DriveUsed1][!RainmeterShowMeter Rl_DriveUsed1x][!RainmeterShowMeter Rl_DriveUsed11][!RainmeterShowMeter Rl_DriveUsed11x][!RainmeterShowMeter Rl_DriveAccess1][!RainmeterShowMeter Rl_DriveAccess1Cirlce][!RainmeterShowMeter Rl_DriveAccess12][!RainmeterShowMeter Rl_DriveAccess_txt1][!RainmeterShowMeter Drive%1][!RainmeterShowMeter Rl_DriveTotal1][!RainmeterShowMeter Rl_DriveAccess1Cirlce2]

[Mse_DriveUsed11]
Measure=FreeDiskSpace
Drive=#Drive1#:
InvertMeasure=0


[Mse_DriveSize1]
Measure=FreeDiskSpace
Drive=#Drive1#:
Total=1

;------------------------------------------------------------------------------------

[Rl_DriveUsed1]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed1
X=80
Y=250
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed1x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed1
X=80
Y=250
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed11]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed11
X=80
Y=250
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed11x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed11
X=80
Y=250
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[MeterunUsedHBarCircle1]
MeasureName=MeasureRing2
Meter=ROUNDLINE
X=80
Y=250
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Mse_DriveAccess1]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#Drive1#:"

[Rl_DriveAccess1]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess1
X=80
Y=250
LineLength=24
LineStart=22
StartAngle=5.497787143782138
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess1Cirlce]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=80
Y=250
LineLength=24
LineStart=22
StartAngle=5.497787143782138
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor4#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess12]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess1
X=80
Y=250
LineLength=24
LineStart=22
StartAngle=2.356194490192345
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess1Cirlce2]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=80
Y=250
LineLength=24
LineStart=22
StartAngle=2.356194490192345
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess1Cirlcexxx]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=80
Y=250
LineLength=16
LineStart=15
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor5#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess_txt1]
Meter=STRING
MeasureName=Mse_DriveAccess1
X=80
Y=220
FontColor=#FColor1#
FontSize=6
FontFace=#Font2#
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0

[Drive%1]
Meter=STRING
X=74
Y=247
FontColor=#FColor4#
FontSize=11
FontFace=#Font2#
AntiAlias=1
Text=#Drive1#
LeftMouseDownAction=["#Drive1#:"]
Hidden=0


[Rl_DriveTotal1]
Meter=STRING
MeasureName=Mse_DriveSize1
X=80
Y=276
FontColor=#FColor3#
FontSize=6
FontFace=#Font2#
StringAlign=Right
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0

; D DRIVE

[Mse_DriveUsed2]
Measure=FreeDiskSpace
Drive=#Drive2#:
InvertMeasure=1

[MeasureUsed2]
Measure=FreeDiskSpace
Drive=#Drive2#:
IgnoreRemovable=0
InvertMeasure=1
UpdateDivider=2
Substitute="1.0":"Removed"
IfEqualValue=0
IfEqualAction=[!RainmeterHideMeter Rl_DriveUsed2][!RainmeterHideMeter Rl_DriveUsed2x][!RainmeterHideMeter Rl_DriveUsed22][!RainmeterHideMeter Rl_DriveUsed22x][!RainmeterHideMeter Rl_DriveAccess2][!RainmeterHideMeter Rl_DriveAccess2Cirlce][!RainmeterHideMeter Rl_DriveAccess22][!RainmeterHideMeter Rl_DriveAccess_txt2][!RainmeterHideMeter Drive%2][!RainmeterHideMeter Rl_DriveTotal2][!RainmeterHideMeter Rl_DriveAccess2Cirlce22]
IfAboveValue=1
IfAboveAction=[!RainmeterShowMeter Rl_DriveUsed2][!RainmeterShowMeter Rl_DriveUsed2x][!RainmeterShowMeter Rl_DriveUsed22][!RainmeterShowMeter Rl_DriveUsed22x][!RainmeterShowMeter Rl_DriveAccess2][!RainmeterShowMeter Rl_DriveAccess2Cirlce][!RainmeterShowMeter Rl_DriveAccess22][!RainmeterShowMeter Rl_DriveAccess_txt2][!RainmeterShowMeter Drive%2][!RainmeterShowMeter Rl_DriveTotal2][!RainmeterShowMeter Rl_DriveAccess2Cirlce22]


[Mse_DriveUsed22]
Measure=FreeDiskSpace
Drive=#Drive2#:
InvertMeasure=0

[Mse_DriveSize2]
Measure=FreeDiskSpace
Drive=#Drive2#:
Total=1

;------------------------------------------------------------------------------------

[Rl_DriveUsed2]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed2
X=80
Y=465
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed2x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed2
X=80
Y=465
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed22]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed22
X=80
Y=465
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[MeterunUsedHBarCircle2]
MeasureName=MeasureRing2
Meter=ROUNDLINE
X=80
Y=465
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed22x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed22
X=80
Y=465
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0


[Mse_DriveAccess2]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#Drive2#:"

[Rl_DriveAccess2]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess2
X=80
Y=465
LineLength=24
LineStart=22
StartAngle=0
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess2Cirlce]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=80
Y=465
LineLength=24
LineStart=22
StartAngle=0
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor4#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess22x]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess2
X=80
Y=465
LineLength=24
LineStart=22
StartAngle=3.141592653589793
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess2Cirlce22]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=80
Y=465
LineLength=24
LineStart=22
StartAngle=3.141592653589793
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess2Cirlcexxx]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=80
Y=465
LineLength=16
LineStart=15
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor5#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess_txt2]
Meter=STRING
MeasureName=Mse_DriveAccess2
X=55
Y=435
FontColor=#FColor1#
FontSize=6
FontFace=#Font2#
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0

[Drive%2]
Meter=STRING
X=74
Y=462
FontColor=#FColor4#
FontSize=11
FontFace=#Font2#
AntiAlias=1
Text=#Drive2#
LeftMouseDownAction=["#Drive2#:"]
Hidden=0


[Rl_DriveTotal2]
Meter=STRING
MeasureName=Mse_DriveSize2
X=115
Y=493
FontColor=#FColor3#
FontSize=6
FontFace=#Font2#
StringAlign=Right
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0

; E DRIVE

[Mse_DriveUsed3]
Measure=FreeDiskSpace
Drive=#Drive3#:
InvertMeasure=1

[MeasureUsed3]
Measure=FreeDiskSpace
Drive=#Drive3#:
IgnoreRemovable=0
InvertMeasure=1
UpdateDivider=2
Substitute="1.0":"Removed"
IfEqualValue=0
IfEqualAction=[!RainmeterHideMeter Rl_DriveUsed3][!RainmeterHideMeter Rl_DriveUsed3x][!RainmeterHideMeter Rl_DriveUsed33][!RainmeterHideMeter Rl_DriveUsed33x][!RainmeterHideMeter Rl_DriveAccess3][!RainmeterHideMeter Rl_DriveAccess3Cirlce][!RainmeterHideMeter Rl_DriveAccess33][!RainmeterHideMeter Rl_DriveAccess_txt3][!RainmeterHideMeter Drive%3][!RainmeterHideMeter Rl_DriveTotal3][!RainmeterHideMeter Rl_DriveAccess3Cirlce22]
IfAboveValue=1
IfAboveAction=[!RainmeterShowMeter Rl_DriveUsed3][!RainmeterShowMeter Rl_DriveUsed3x][!RainmeterShowMeter Rl_DriveUsed33][!RainmeterShowMeter Rl_DriveUsed33x][!RainmeterShowMeter Rl_DriveAccess3][!RainmeterShowMeter Rl_DriveAccess3Cirlce][!RainmeterShowMeter Rl_DriveAccess33][!RainmeterShowMeter Rl_DriveAccess_txt3][!RainmeterShowMeter Drive%3][!RainmeterShowMeter Rl_DriveTotal3][!RainmeterShowMeter Rl_DriveAccess3Cirlce22]

[Mse_DriveUsed33]
Measure=FreeDiskSpace
Drive=#Drive3#:
InvertMeasure=0

[Mse_DriveSize3]
Measure=FreeDiskSpace
Drive=#Drive3#:
Total=1

;------------------------------------------------------------------------------------

[Rl_DriveUsed3]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed3
X=645
Y=465
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed3x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed3
X=645
Y=465
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed33]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed33
X=645
Y=465
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[MeterunUsedHBarCircle3]
MeasureName=MeasureRing2
Meter=ROUNDLINE
X=645
Y=465
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed33x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed33
X=645
Y=465
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0


[Mse_DriveAccess3]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#Drive3#:"

[Rl_DriveAccess3]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess3
X=645
Y=465
LineLength=24
LineStart=22
StartAngle=5.497787143782138
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess3Cirlce]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=645
Y=465
LineLength=24
LineStart=22
StartAngle=5.497787143782138
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess33x]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess3
X=645
Y=465
LineLength=24
LineStart=22
StartAngle=2.356194490192345
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess3Cirlce22]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=645
Y=465
LineLength=24
LineStart=22
StartAngle=2.356194490192345
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor4#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess3Cirlcexxx]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=645
Y=465
LineLength=16
LineStart=15
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor5#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess_txt3]
Meter=STRING
MeasureName=Mse_DriveAccess3
X=640
Y=435
FontColor=#FColor1#
FontSize=6
FontFace=#Font2#
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0

[Drive%3]
Meter=STRING
X=639
Y=462
FontColor=#FColor4#
FontSize=11
FontFace=#Font2#
AntiAlias=1
Text=#Drive3#
LeftMouseDownAction=["#Drive3#:"]
Hidden=0


[Rl_DriveTotal3]
Meter=STRING
MeasureName=Mse_DriveSize3
X=645
Y=493
FontColor=#FColor3#
FontSize=6
FontFace=#Font2#
StringAlign=Right
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0


; F DRIVE

[Mse_DriveUsed4]
Measure=FreeDiskSpace
Drive=#Drive4#:
InvertMeasure=1

[MeasureUsed4]
Measure=FreeDiskSpace
Drive=#Drive4#:
IgnoreRemovable=0
InvertMeasure=1
UpdateDivider=2
Substitute="1.0":"Removed"
IfEqualValue=0
IfEqualAction=[!RainmeterHideMeter Rl_DriveUsed4][!RainmeterHideMeter Rl_DriveUsed4x][!RainmeterHideMeter Rl_DriveUsed44][!RainmeterHideMeter Rl_DriveUsed44x][!RainmeterHideMeter Rl_DriveAccess4][!RainmeterHideMeter Rl_DriveAccess4Cirlce][!RainmeterHideMeter Rl_DriveAccess44][!RainmeterHideMeter Rl_DriveAccess_txt4][!RainmeterHideMeter Drive%4][!RainmeterHideMeter Rl_DriveTotal4][!RainmeterHideMeter Rl_DriveAccess4Cirlce22]
IfAboveValue=1
IfAboveAction=[!RainmeterShowMeter Rl_DriveUsed4][!RainmeterShowMeter Rl_DriveUsed4x][!RainmeterShowMeter Rl_DriveUsed44][!RainmeterShowMeter Rl_DriveUsed44x][!RainmeterShowMeter Rl_DriveAccess4][!RainmeterShowMeter Rl_DriveAccess4Cirlce][!RainmeterShowMeter Rl_DriveAccess44][!RainmeterShowMeter Rl_DriveAccess_txt4][!RainmeterShowMeter Drive%4][!RainmeterShowMeter Rl_DriveTotal4][!RainmeterShowMeter Rl_DriveAccess4Cirlce22]

[Mse_DriveUsed44]
Measure=FreeDiskSpace
Drive=#Drive4#:
InvertMeasure=0

[Mse_DriveSize4]
Measure=FreeDiskSpace
Drive=#Drive4#:
Total=1

;------------------------------------------------------------------------------------

[Rl_DriveUsed4]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed4
X=645
Y=250
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed4x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed4
X=645
Y=250
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed44]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed44
X=645
Y=250
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[MeterunUsedHBarCircle4]
MeasureName=MeasureRing2
Meter=ROUNDLINE
X=645
Y=250
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed44x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed44
X=645
Y=250
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0


[Mse_DriveAccess4]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#Drive4#:"

[Rl_DriveAccess4]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess4
X=645
Y=250
LineLength=24
LineStart=22
StartAngle=0
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess4Cirlce]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=645
Y=250
LineLength=24
LineStart=22
StartAngle=0
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess44x]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess4
X=645
Y=250
LineLength=24
LineStart=22
StartAngle=3.141592653589793
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess4Cirlce22]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=645
Y=250
LineLength=24
LineStart=22
StartAngle=3.141592653589793
RotationAngle=0.7853981633974483
LineCount=1
LineColor=#LColor4#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess4Cirlcexxx]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=645
Y=250
LineLength=16
LineStart=15
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor5#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess_txt4]
Meter=STRING
MeasureName=Mse_DriveAccess4
X=620
Y=220
FontColor=#FColor1#
FontSize=6
FontFace=#Font2#
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0

[Drive%4]
Meter=STRING
X=639
Y=247
FontColor=#FColor4#
FontSize=11
FontFace=#Font2#
AntiAlias=1
Text=#Drive4#
LeftMouseDownAction=["#Drive4#:"]
Hidden=0


[Rl_DriveTotal4]
Meter=STRING
MeasureName=Mse_DriveSize4
X=673
Y=276
FontColor=#FColor3#
FontSize=6
FontFace=#Font2#
StringAlign=Right
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0

; G DRIVE

[Mse_DriveUsed5]
Measure=FreeDiskSpace
Drive=#Drive5#:
InvertMeasure=1

[MeasureUsed5]
Measure=FreeDiskSpace
Drive=#Drive5#:
IgnoreRemovable=0
InvertMeasure=1
UpdateDivider=2
Substitute="1.0":"Removed"
IfEqualValue=0
IfEqualAction=[!RainmeterHideMeter Rl_DriveUsed5][!RainmeterHideMeter Rl_DriveUsed5x][!RainmeterHideMeter Rl_DriveUsed55][!RainmeterHideMeter Rl_DriveUsed55x][!RainmeterHideMeter Rl_DriveAccess5][!RainmeterHideMeter Rl_DriveAccess5Cirlce][!RainmeterHideMeter Rl_DriveAccess55][!RainmeterHideMeter Rl_DriveAccess_txt5][!RainmeterHideMeter Drive%5][!RainmeterHideMeter Rl_DriveTotal5][!RainmeterHideMeter Rl_DriveAccess5Cirlce22]
IfAboveValue=1
IfAboveAction=[!RainmeterShowMeter Rl_DriveUsed5][!RainmeterShowMeter Rl_DriveUsed5x][!RainmeterShowMeter Rl_DriveUsed55][!RainmeterShowMeter Rl_DriveUsed55x][!RainmeterShowMeter Rl_DriveAccess5][!RainmeterShowMeter Rl_DriveAccess5Cirlce][!RainmeterShowMeter Rl_DriveAccess55][!RainmeterShowMeter Rl_DriveAccess_txt5][!RainmeterShowMeter Drive%5][!RainmeterShowMeter Rl_DriveTotal5][!RainmeterShowMeter Rl_DriveAccess5Cirlce22]

[Mse_DriveUsed55]
Measure=FreeDiskSpace
Drive=#Drive5#:
InvertMeasure=0

[Mse_DriveSize5]
Measure=FreeDiskSpace
Drive=#Drive5#:
Total=1

;------------------------------------------------------------------------------------

[Rl_DriveUsed5]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed5
X=365
Y=53
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed5x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed5
X=365
Y=53
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed55]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed55
X=365
Y=53
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[MeterunUsedHBarCircle5]
MeasureName=MeasureRing2
Meter=ROUNDLINE
X=365
Y=53
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed55x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed55
X=365
Y=53
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0


[Mse_DriveAccess5]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#Drive5#:"

[Rl_DriveAccess5]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess5
X=365
Y=53
LineLength=24
LineStart=22
StartAngle=4.328416544945937
RotationAngle=0.767944870877505
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess5Cirlce]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=365
Y=53
LineLength=24
LineStart=22
StartAngle=4.328416544945937
RotationAngle=0.767944870877505
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess55x]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess5
X=365
Y=53
LineLength=24
LineStart=22
StartAngle=1.186823891356144
RotationAngle=0.767944870877505
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess5Cirlce22]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=365
Y=53
LineLength=24
LineStart=22
StartAngle=1.186823891356144
RotationAngle=0.767944870877505
LineCount=1
LineColor=#LColor4#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess5Cirlcexxx]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=365
Y=53
LineLength=16
LineStart=15
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor5#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess_txt5]
Meter=STRING
MeasureName=Mse_DriveAccess5
X=388
Y=52
FontColor=#FColor1#
FontSize=6
FontFace=#Font2#
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0

[Drive%5]
Meter=STRING
X=359
Y=50
FontColor=#FColor4#
FontSize=11
FontFace=#Font2#
AntiAlias=1
Text=#Drive5#
LeftMouseDownAction=["#Drive5#:"]
Hidden=0


[Rl_DriveTotal5]
Meter=STRING
MeasureName=Mse_DriveSize5
X=345
Y=52
FontColor=#FColor3#
FontSize=6
FontFace=#Font2#
StringAlign=Right
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0

; H DRIVE

[Mse_DriveUsed6]
Measure=FreeDiskSpace
Drive=#Drive6#:
InvertMeasure=1

[MeasureUsed6]
Measure=FreeDiskSpace
Drive=#Drive6#:
IgnoreRemovable=0
InvertMeasure=1
UpdateDivider=2
Substitute="1.0":"Removed"
IfEqualValue=0
IfEqualAction=[!RainmeterHideMeter Rl_DriveUsed6][!RainmeterHideMeter Rl_DriveUsed6x][!RainmeterHideMeter Rl_DriveUsed66][!RainmeterHideMeter Rl_DriveUsed66x][!RainmeterHideMeter Rl_DriveAccess6][!RainmeterHideMeter Rl_DriveAccess6Cirlce][!RainmeterHideMeter Rl_DriveAccess66][!RainmeterHideMeter Rl_DriveAccess_txt6][!RainmeterHideMeter Drive%6][!RainmeterHideMeter Rl_DriveTotal6][!RainmeterHideMeter Rl_DriveAccess6Cirlce22]
IfAboveValue=1
IfAboveAction=[!RainmeterShowMeter Rl_DriveUsed6][!RainmeterShowMeter Rl_DriveUsed6x][!RainmeterShowMeter Rl_DriveUsed66][!RainmeterShowMeter Rl_DriveUsed66x][!RainmeterShowMeter Rl_DriveAccess6][!RainmeterShowMeter Rl_DriveAccess6Cirlce][!RainmeterShowMeter Rl_DriveAccess66][!RainmeterShowMeter Rl_DriveAccess_txt6][!RainmeterShowMeter Drive%6][!RainmeterShowMeter Rl_DriveTotal6][!RainmeterShowMeter Rl_DriveAccess6Cirlce22]

[Mse_DriveUsed66]
Measure=FreeDiskSpace
Drive=#Drive6#:
InvertMeasure=0

[Mse_DriveSize6]
Measure=FreeDiskSpace
Drive=#Drive6#:
Total=1

;------------------------------------------------------------------------------------

[Rl_DriveUsed6]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed6
X=365
Y=656
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed6x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed6
X=365
Y=656
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=3.141592653589793
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed66]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed66
X=365
Y=656
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[MeterunUsedHBarCircle6]
MeasureName=MeasureRing2
Meter=ROUNDLINE
X=365
Y=656
LineLength=20
LineStart=17
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveUsed66x]
Meter=ROUNDLINE
MeasureName=Mse_DriveUsed66
X=365
Y=656
LineLength=20
LineStart=17
StartAngle=3.141592653589793
RotationAngle=-3.141592653589793
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0


[Mse_DriveAccess6]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#Drive6#:"

[Rl_DriveAccess6]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess6
X=365
Y=656
LineLength=24
LineStart=22
StartAngle=4.328416544945937
RotationAngle=0.767944870877505
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess6Cirlce]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=365
Y=656
LineLength=24
LineStart=22
StartAngle=4.328416544945937
RotationAngle=0.767944870877505
LineCount=1
LineColor=#LColor3#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess66x]
Meter=ROUNDLINE
MeasureName=Mse_DriveAccess6
X=365
Y=656
LineLength=24
LineStart=22
StartAngle=1.186823891356144
RotationAngle=0.767944870877505
LineCount=1
LineColor=#LColor2#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess6Cirlce22]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=365
Y=656
LineLength=24
LineStart=22
StartAngle=1.186823891356144
RotationAngle=0.767944870877505
LineCount=1
LineColor=#LColor4#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess6Cirlcexxx]
Meter=ROUNDLINE
MeasureName=MeasureRing2
X=365
Y=656
LineLength=16
LineStart=15
StartAngle=0
RotationAngle=6.28
LineCount=1
LineColor=#LColor5#
AntiAlias=1
Solid=1
Hidden=0

[Rl_DriveAccess_txt6]
Meter=STRING
MeasureName=Mse_DriveAccess6
X=388
Y=655
FontColor=#FColor1#
FontSize=6
FontFace=#Font2#
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0

[Drive%6]
Meter=STRING
X=359
Y=653
FontColor=#FColor4#
FontSize=11
FontFace=#Font2#
AntiAlias=1
Text=#Drive6#
LeftMouseDownAction=["#Drive6#:"]
Hidden=0


[Rl_DriveTotal6]
Meter=STRING
MeasureName=Mse_DriveSize6
X=345
Y=655
FontColor=#FColor3#
FontSize=6
FontFace=#Font2#
StringAlign=Right
AntiAlias=1
AutoScale=1
NumOfDecimals=1
Hidden=0