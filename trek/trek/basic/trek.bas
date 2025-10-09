   10 KEY OFF : SD=1
   12 IF TR>0 THEN 20 : ELSE A=0 : ON TIMER (1) GOSUB 3400 : TIMER ON 
   15 IF TR>0 THEN 20 : ELSE A=A+1 : GOTO 15
   20 DIM CH$(26),CT$(26),TT(21),TTS(15),TK(35),ND(21),TS$(21),NK(100)
   30 TS$(1)="Chandley Frigate Mk II" : TS$(2)="Enterprise Class Cruiser" : TS$(3)="Chandley Frigate Mk I" 
   35 TS$(4)="Reliant Cruiser Mk II" : TS$(5)="Reliant Cruiser Mk I"
   40 TS$(6)="Kiev Class Frigate" : TS$(7)="Andor Class Cruiser" : TS$(8)="Constitution Cruiser Mk III" 
   45 TS$(9)="Brenton Cruiser Mk III" : TS$(10)="Durret Class Cruiser"
   50 TS$(11)="Constitution Cruiser Mk II" : TS$(12)="Lenthal Class Destroyer" : TS$(13)="Wilkerson Class Destroyer" 
   55 TS$(14)="Loknar Frigate Mk II" : TS$(15)="Thufir Class Destroyer"
   60 TS$(16)="Larson Destroyer Mk VI" : TS$(17)="Remora Escort Mk II" : TS$(18)="Nelson Scout Mk VII" 
   65 TS$(19)="Constitution Cruiser Mk I" : TS$(20)="Enter Other Vessel"
   70 TT(1)=140.5 : TT(2)=129.5 : TT(3)=119.699997 : TT(4)=75.099998 : TT(5)=67 : TT(6)=59.900002 : TT(7)=57.799999 
   71 TT(8)=52.5 : TT(9)=48.700001 : TT(10)=37.599998 : TT(11)=36.400002 : TT(12)=32 : TT(13)=29.9 : TT(14)=22.700001 
   72 TT(15)=18.1 : TT(16)=14.6 : TT(17)=12.9 : TT(18)=10.7 : TT(19)=8
   80 TK(1)=145.899994 : TK(2)=115.5 : TK(3)=81.400002 : TK(4)=77 : TK(5)=66.099998 : TK(6)=56.900002 : TK(7)=40.400002 
   85 TK(8)=38.599998 : TK(9)=29.299999 : TK(10)=26.200001 : TK(11)=20.1 : TK(12)=18.6 : TK(13)=16.200001 : TK(14)=13.3 : TK(15)=11.1 : TK(16)=9
   90 TK(17)=128.399994 : TK(18)=115.400002 : TK(19)=85.699997 : TK(20)=60.200001 : TK(21)=54.099998 : TK(22)=44.099998 
   91 TK(23)=31 : TK(24)=17.5 : TK(25)=16 : TK(26)=12.5 : TK(27)=9.7 : TK(28)=8.7 : TK(29)=110.300003 : TK(30)=33.200001 
   92 TK(31)=25.5 : TK(32)=56.799999 : TK(33)=14.4 : TK(34)=15
  100 CT$(1)="D" : CT$(2)="H" : CT$(3)="L" : CT$(4)="O" : CT$(5)="P" : CT$(6)="Q" : CT$(7)="R" : CT$(8)="S" : CT$(9)="T" 
  101 CT$(10)="U" : CT$(11)="W" : CT$(12)="X" : CT$(13)="Y"
  110 CT$(14)="F" : CT$(15)="J" : CT$(16)="E" : CT$(17)="V" : CT$(18)="M" : CT$(19)="N" : CT$(20)="K" : PL$(0)="Torpedoes" 
  111 FOR A=1 TO 3 : PL$(A)="Plasma weapon" : NEXT 
  112 CH$(1)="986420" : CH$(2)="9876543210" : CH$(3)="9988776543210" : CH$(4)="99887765443210" : CH$(5)="777666555443322110" 
  114 CH$(6)="99988776543210" : CH$(7)="9988776655443210"
  115 CH$(8)="9998877665543210" : CH$(9)="998877665544332210" : CH$(10)="998877665544332210" : CH$(11)="99998877665544332210" 
  116 CH$(12)="9998887766554433221100" : CH$(13)="999888777666554433221100"
  117 CH$(14)="98653210" : CH$(15)="9988775310" : CH$(16)="86543210" : CH$(17)="887776665554443322110" : CH$(18)="98766655443210" 
  119 CH$(19)="9988776543210" : CH$(20)="776655443322110"
  120 CLS : COLOR 13 : LOCATE 2,31 : PRINT "**              **" : LOCATE 3,33 : PRINT "HELLO CAPTAIN." 
  125 PRINT ,"          COMBAT SIMULATOR STANDS READY." : PRINT TAB(23);"**" STRING$(30,32)"**" : FV=0
  130 PRINT : PRINT ,,"  CHOOSE YOUR VESSEL : ": PRINT : NWE=2 : FPL=0 : V1$="" : V2$="" : V3$="" : V4$="" : V5$="" : V6$="" : COLOR 5
  140 PRINT " #  NAME & TYPE OF VESSEL","     C.E.  "CHR$(186)"  #  NAME & TYPE OF VESSEL       C.E."
  150 FOR A=1 TO 10
  160 PRINT " "CHR$(64+A)". "TS$(A); TAB(33-INT(TT(A)/100));TT(A); TAB(40);CHR$(186);"  "CHR$(74+A)". "TS$(10+A); TAB(73);TT(10+A)
  170 NEXT 
  180 PRINT : PRINT TAB(27);"U. Use Non-Federation Vessel" : PRINT TAB(27);"?  *** Use Random Vessel ***"
  190 A$= INKEY$ : IF A$="" THEN 190 : ELSE IF ASC(A$)>64 AND ASC(A$)<91 THEN A$=CHR$(ASC(A$)+32)
  200 IF A$="?" THEN GOSUB 880 : A$=CHR$(97+INT(RND*19))
  210 FOR A=1 TO 3 : DM(A)=0 : NEXT : NTT=0 : PP=1 : P$="Phaser" : P1$="PHASER" : V6$=""
  220 E$(1)="=O" : E$(3)="O=" : E$(2)=CHR$(212)+CHR$(190) : E$(4)=CHR$(213)+CHR$(184) : TS=ASC(A$)-96 : IF TS<1 OR TS>21 THEN 190
  230 FV=0 : IF TS=21 THEN FV=1 : GOTO 260
  235 IF TS=10 OR TS=13 OR TS=16 OR TS=17 OR TS=18 THEN E$(1)="-O" : E$(3)="O-" : E$(2)=" "+CHR$(207) : E$(4)=" "+CHR$(209)
  240 ON TS GOTO 2280,2300,2280,2320,2320,2450,2340,2380,2430,2360,2380,2400,2410,2460,2440,2480,2490,2510,2380,250
  250 ON TS GOTO 890,910,930,950,970,990,1010,1030,1050,1070,1090,1110,1130,1150,1170,1190,1210,1230,1250,2520
  260 SO=SS : P2=P : CLS : PRINT TAB(31);"VERY GOOD CAPTAIN." : AD$="Klingon" : AV$="KLINGON" : D1$="Disruptor" 
  265 D2$="DISRUPTOR" : K$="-]" : PL=0 : AV=1 : KM(3)=0 : NKT=0 : CT1=0 : CLK=0 : KPA=1
  270 IF FV=0 THEN PRINT TAB((80-(18+LEN(TS$(TS))))/2);"Your Vessel :   The "TS$(TS) : LOCATE 3,29 : PRINT "Combat Efficiency : "TT(TS)
  280 IF FV=0 THEN LOCATE 4,30 : COLOR 1,0 : PRINT "CHOOSE YOUR OPPONENT : ": COLOR 5,0
  290 PRINT "#  MODEL  NAME OF VESSEL  TORPS  C.E. "CHR$(186)" #  MODEL NAME OF VESSEL    TORPS   C.E."
  300 PRINT "A. L-24  `Ever-Victorious' YES  145.9 "CHR$(186)" Q.*V-30 `Winged Defender'  PLASMA 128.4"
  310 PRINT "B.*L-13D `Fat Man'         YES  115.5 "CHR$(186)" R. Z-1  `Nova'              YES   115.4"
  320 PRINT "C. D-10H `Riskadh'         YES   81.4 "CHR$(186)" S.*V-6  `Gallant Wing'     PLASMA  85.7"
  330 PRINT "D.*L-42  `Great Bird'      YES   77   "CHR$(186)" T.*V-27 `Comet of Destruc.' YES    60.2"
  340 PRINT "E. L-9   `Saber'           YES   66.1 "CHR$(186)" U.*V-11 `Stormbird'         YES    54.1"
  350 PRINT "F. L-13C `Fat Man'          NO   56.9 "CHR$(186)" V.*V-7  `Whitewind'         YES    44.1"
  360 PRINT "G.*D-7S  `Bringer of Just.'YES   40.4 "CHR$(186)" W.*T-5  `Fire Swarm'        YES    31"
  370 PRINT "H. D-10  `Riskadh'         YES   38.6 "CHR$(186)" X.*V-5  `Skyfire'          PLASMA  17.5"
  380 PRINT "I. D-7M  `Bringer of Dest.'YES   29.3 "CHR$(186)" Y.*T-2  `Death Talon'      PLASMA  16"
  390 PRINT "J. D-20C `Death Rite'       NO   26.2 "CHR$(186)" Z.*V-8  `Bird of Prey'     PLASMA  12.5"
  400 PRINT "K.*D-14  `Stinger'         YES   20.1 "CHR$(186)" 1. V-4  `Wing of Vengeance'  NO     9.7"
  410 PRINT "L.*D-18  `Gull'            YES   18.6 "CHR$(186)" 2. S-3  `Free Flight'        NO     8.7"
  420 PRINT "M. D-2   `Stingtongue'     YES   16.2 "CHR$(186)" 3. BH-2  Gorn Battleship    YES   110.3"
  430 PRINT "N. D-7G  `Truthbringer'   PLASMA 13.3 "CHR$(186)" 4. MD-8  Gorn Cruiser       YES    33.2"
  440 PRINT "O. D-7A  `Painbringer'      NO   11.1 "CHR$(186)" 5. MA-12 Gorn Cruiser       YES    25.5"
  450 PRINT "P. D-11D `One Wing'        YES    9   "CHR$(186)" 6. Orion Wanderer           YES    56.8"
  460 PRINT "9. Input Other Vessel                 "CHR$(186)" 7. Orion Lightning           NO    14.4"
  470 PRINT "?. Random Vessel                      "CHR$(186)" 8. Tholian Cruiser           NO    15"
  480 A$= INKEY$ : IF A$="" THEN 480
  490 IF A$<>"?" THEN 500 : ELSE GOSUB 880 : A=INT(RND*34+1) : GOSUB 880 : IF RND*100<ABS((TK(A)-TT(TS))/10) THEN 490 : ELSE TTS=A : GOTO 520
  500 IF FV=0 THEN 505 : ELSE IF A$="A" OR A$="R" OR A$="3" THEN 3300
  505 IF VAL(A$)=0 THEN TTS=ASC(A$)-96 : ELSE TTS=26+VAL(A$)
  510 IF TTS<1 OR TTS>35 THEN 480
  520 IF TTS<17 AND FV>0 THEN VF=1
  525 IF TTS>16 AND TTS<29 THEN AV=2 : AD$="Romulan" : AV$="ROMULAN" : IF FV>0 THEN VF=2
  530 IF TTS=29 OR TTS=30 OR TTS=31 THEN AD$="Gorn" : AV$="GORN" : D1$="Blaster" : D2$="BLASTER" : K$=CHR$(174)+CHR$(240) : IF FV>0 THEN VF=3
  540 IF TTS<17 THEN ON TTS GOTO 1280,1300,1320,1340,1360,1380,1400,1420,1440,1460,1480,1500,1520,1540,1560,1580
  550 ON TTS-16 GOTO 2030,2050,2070,2090,2110,2130,2150,2170,2190,2210,2230,2250,3010,3030,3050,3070,3090,3110,2760
  560 MKP=MMP : SO1=SS1 : KP=KP1 : KT=NKT : KBW=NKP : KMW=NKT : IF A$<>"?" AND FV=0 THEN 1800
  570 IF FV=0 THEN 610 : ELSE IF KBW+KMW>13 THEN 3500 : ELSE IF CLK=0 THEN 590 : ELSE CLS : PRINT : PRINT TAB(10);"* WARNING *" 
  575 LOCATE 10 : PRINT "This program is unable to give the player a" : PRINT 
  580 INPUT "Cloaking Device.  Proceed without it";A$ : IF LEFT$(A$,1)<>"Y" AND LEFT$(A$,1)<>"y" THEN 120 : ELSE CLK=0
  590 TS$(21)=VN$ : TS=21 : TD=KTD : PP=KPA : FPL=PL : NTT=NKT : IF NTT>0 THEN CLS : PRINT VN$" has"NTT"Torpedo Tubes" : PRINT 
  595 PRINT "1 Fwd, 2 Stbd, 3 Aft, 4 Port" : PRINT : PRINT : FOR A=1 TO NTT : PRINT "Torpedo firing arc #"A; : INPUT NT(A) : NEXT : IF FPL>0 THEN PP=PLA
  600 E$(3)=K$ : IF VF=2 THEN E$(2)=CHR$(157)+CHR$(157) : E$(4)=CHR$(127)+CHR$(127)
  601 IF K$="-]" THEN E$(1)="[-" : E$(2)=" "+CHR$(194) : E$(4)=" "+CHR$(193)
  602 IF K$="-"+CHR$(240) THEN E$(1)=CHR$(240)+"-"
  603 IF K$=CHR$(240)+"=" THEN E$(1)="="+CHR$(240)
  604 IF K$="="+CHR$(240) THEN E$(1)=CHR$(240)+"="
  605 IF K$=CHR$(174)+"<" THEN E$(1)=">"+CHR$(175)
  606 IF VF=3 THEN E$(1)=CHR$(240)+CHR$(175) : E$(2)="UU" : E$(4)=CHR$(239)+CHR$(239)
  607 IF VF=4 THEN E$(1)="="+CHR$(196) : E$(3)=CHR$(196)+"=" : E$(2)=CHR$(244)+" ": E$(4)=" "+CHR$(245)
  608 IF VF=5 THEN E$(1)=CHR$(174)+">" : E$(2)="\/" : E$(4)="/\"
  609 SS=SS1 : P=KP1 : SPR=KSR : MSP=MMP : MPR=KPR : NP=NKP : MFP=MPP : FOR A=1 TO 3 : DM(A)=KM(A) : NEXT : WE=KW : IE=KI : P$=D1$ : P1$=D2$ : CH=CH1 : CT=CT1 : FV=0 : TT(21)=TK(TTS) : GOTO 1600
  610 CLS : COLOR 2,0 : LOCATE 2,22 : PRINT "<<<==="; : IF VF=0 THEN PRINT "STARFLEET"; : ELSE IF VF=4 THEN PRINT "RIGELLIAN"; 
  615 ELSE IF VF=3 THEN PRINT "ALLIANCE"; : ELSE IF VF=5 THEN PRINT "ASSEMBLY"; : ELSE PRINT "IMPERIAL";
  620 PRINT " BULLETIN===>>>" : IF AV=4 THEN AD$="Orion" : AV$="ORION" : K$=CHR$(196)+"="
  630 LOCATE 5,10 : PRINT "TO :   Captain of the ";TS$(TS)
  640 LOCATE 6,10 : PRINT "STARDATE :   8508.05" : LOCATE 7,10 : PRINT "PRIORITY :   One"
  650 NZ$="border" : IF VF>0 THEN 670 : ELSE ZN$="Federation" : IF AV=1 OR AV=2 THEN NZ$="Neutral Zone"
  660 GOTO 680
  670 IF VF=5 THEN ZN$="Assembly" : ELSE IF VF=4 THEN ZN$="Homeworlds" : ELSE IF VF=3 THEN ZN$="Alliance" : ELSE ZN$="Empire"
  680 IF TT(TS)=0 OR TK(TTS)=0 THEN 700 : ELSE LOCATE 8,10 : PRINT "MISSION :   "; : IF TT(TS)*0.5>TK(TTS) OR TK(TTS)*0.5>TT(TS) THEN PRINT "Very ";
  690 IF TT(TS)*0.9>TK(TTS) THEN PRINT "Easy" : ELSE IF TT(TS)<TK(TTS)*0.9 THEN PRINT "Difficult" : ELSE PRINT "Normal"
  700 LOCATE 10,10 : PRINT "    A "AD$" Battle Cruiser has entered your Quadrant."
  710 LOCATE 12,10 : PRINT "It has crossed over the "NZ$" and its intentions"
  720 LOCATE 14,10 : PRINT "are hostile.  Your orders are to set course immediately"
  730 LOCATE 16,10 : PRINT "to intercept and disable the vessel before it can reach"
  740 LOCATE 18,10 : PRINT "inhabited regions of the "ZN$"."
  750 IF VF=0 THEN LOCATE 21,10 : PRINT "    Signed :   Arbatov, Commodore" : LOCATE 22,23 : PRINT "Commander Starbase 16"
  755 LOCATE 21,63 : PRINT "` Press Esc to `" : LOCATE 22,63 : PRINT "`choose another`" : LOCATE 23,63 : PRINT "`   mission    `"
  760 A$= INKEY$ : IF A$="" THEN 760 : ELSE IF A$=CHR$(27) THEN 60
  770 COLOR 7,0 : CLS : LOCATE 11,15 : PRINT "NAVIGATOR :   Course plotted to intercept" : PRINT TAB(27);AD$" vessel, Captain."
  810 TS$=TS$(TS) : TT=TT(TS) : TK=TK(TTS) : FP$=CH$(CH) : FT$=CH$(CT) : FP1$=CT$(CH) : FT1$=CT$(CT) : AP$=CH$(CH1) : AT$=CH$(CT1) : PL$=PL$(PL)
  870 CHAIN "trek_prg",,ALL
  880 RANDOMIZE(VAL(RIGHT$( TIME$ ,2))) : RETURN 
  890 SS=28 : SPR=3 : MSP=16 : NP=6 : MFP=10 : P=52 : TD=16 : DM(3)=10 : DM(2)=17 : DM(1)=24 : MPR=1 : WE=32 : IE=20
  900 CH=13 : CT=7 : NTT=4 : NT(1)=1 : NT(2)=1 : NT(3)=3 : NT(4)=3 : GOTO 1600
  910 SS=26 : SPR=4 : MSP=16 : NP=6 : MFP=10 : P=60 : TD=20 : DM(3)=10 : DM(2)=17 : DM(1)=24 : MPR=4/3 : WE=52 : IE=8
  920 CH=13 : CT=8 : NTT=2 : NT(1)=1 : NT(2)=1 : GOTO 1600
  930 SS=28 : SPR=3 : MSP=16 : NP=6 : MFP=10 : P=48 : TD=12 : DM(3)=10 : DM(2)=17 : DM(1)=24 : MPR=1 : WE=32 : IE=16
  940 CH=13 : CT=4 : NTT=4 : NT(1)=1 : NT(2)=1 : NT(3)=3 : NT(4)=3 : GOTO 1600
  950 SS=24 : SPR=3 : MSP=14 : NP=4 : MFP=10 : P=52 : TD=20 : DM(3)=10 : DM(2)=17 : DM(1)=24 : MPR=4/3 : WE=40 : IE=12
  960 CH=13 : CT=8 : NTT=2 : NT(1)=1 : NT(2)=3 : GOTO 1600
  970 SS=22 : SPR=3 : MSP=14 : NP=4 : MFP=7 : P=48 : TD=20 : DM(3)=10 : DM(2)=17 : DM(1)=20 : MPR=4/3 : WE=40 : IE=8
  980 CH=11 : CT=8 : NTT=2 : NT(1)=1 : NT(2)=3 : GOTO 1600
  990 SS=24 : SPR=3 : MSP=14 : NP=6 : MFP=5 : P=44 : TD=20 : DM(2)=10 : DM(1)=18 : MPR=1 : WE=32 : IE=12
 1000 CH=9 : CT=8 : NTT=2 : NT(1)=1 : NT(2)=3 : GOTO 1600
 1010 SS=22 : SPR=3 : MSP=15 : NP=2 : MFP=8 : P=42 : TD=8 : DM(3)=5 : DM(2)=12 : DM(1)=18 : MPR=1 : WE=26 : IE=16
 1020 CH=9 : CT=7 : NTT=8 : NT(1)=1 : NT(2)=1 : NT(3)=1 : NT(4)=1 : NT(5)=4 : NT(6)=2 : NT(7)=3 : NT(8)=3 : GOTO 1600
 1030 SS=22 : SPR=3 : MSP=16 : NP=6 : MFP=5 : P=48 : TD=16 : DM(3)=10 : DM(2)=17 : DM(1)=20 : MPR=4/3 : WE=40 : IE=8
 1040 CH=11 : CT=7 : NTT=2 : NT(1)=1 : NT(2)=1 : GOTO 1600
 1050 SS=26 : SPR=3 : MSP=14 : NP=6 : MFP=5 : P=44 : TD=12 : DM(2)=10 : DM(1)=18 : MPR=4/3 : WE=40 : IE=4
 1060 CH=9 : CT=4 : NTT=3 : NT(1)=1 : NT(2)=1 : NT(3)=3 : GOTO 1600
 1070 SS=22 : SPR=3 : MSP=16 : NP=4 : MFP=6 : P=32 : TD=12 : DM(3)=0 : DM(2)=12 : DM(1)=22 : MPR=1 : NWE=1 : WE=20 : IE=12
 1080 CH=12 : CT=4 : NTT=2 : NT(1)=1 : NT(2)=3 : GOTO 1600
 1090 SS=20 : SPR=2 : MSP=16 : NP=6 : MFP=5 : P=44 : TD=10 : DM(3)=10 : DM(2)=17 : DM(1)=20 : MPR=4/3 : WE=40 : IE=4
 1100 CH=11 : CT=3 : NTT=2 : NT(1)=1 : NT(2)=1 : GOTO 1600
 1110 SS=19 : SPR=2 : MSP=12 : NP=6 : MFP=8 : P=40 : DM(3)=5 : DM(2)=12 : DM(1)=18 : MPR=1 : WE=24 : IE=16
 1120 CH=9 : NTT=0 : GOTO 1600
 1130 SS=15 : SPR=3 : MSP=12 : NP=4 : MFP=5 : P=38 : TD=10 : DM(3)=10 : DM(2)=17 : DM(1)=20 : MPR=1 : WE=26 : IE=12
 1140 CH=11 : CT=3 : NTT=2 : NT(1)=1 : NT(2)=3 : GOTO 1600
 1150 SS=18 : SPR=2 : MSP=16 : NP=8 : MFP=4 : P=29 : TD=6 : DM(2)=8 : DM(1)=16 : MPR=1 : WE=26 : IE=3
 1160 CH=7 : CT=1 : NTT=4 : NT(1)=1 : NT(2)=1 : NT(3)=1 : NT(4)=3 : GOTO 1600
 1170 SS=16 : SPR=2 : MSP=8 : NP=6 : MFP=4 : P=39 : TD=6 : DM(3)=0 : DM(2)=8 : DM(1)=16 : MPR=2/3 : WE=36 : IE=3
 1180 CH=7 : CT=2 : NTT=2 : NT(1)=1 : NT(2)=1 : GOTO 1600
 1190 SS=14 : SPR=2 : MSP=7 : NP=6 : MFP=4 : P=23 : TD=6 : DM(2)=8 : DM(1)=15 : MPR=2/3 : WE=20 : NWE=1 : IE=3
 1200 CH=6 : CT=2 : NTT=2 : NT(1)=1 : NT(2)=1 : GOTO 1600
 1210 SS=12 : SPR=2 : MSP=10 : NP=8 : MFP=3 : P=22 : DM(2)=8 : DM(1)=15 : MPR=2/3 : WE=16 : NWE=1 : IE=6
 1220 CH=6 : GOTO 1600
 1230 SS=13 : SPR=2 : MSP=16 : NP=3 : MFP=5 : P=28 : DM(2)=10 : DM(1)=18 : MPR=2/3 : WE=20 : NWE=1 : IE=8
 1240 CH=9 : GOTO 1600
 1250 SS=20 : SPR=1 : MSP=9 : NP=6 : MFP=3 : P=36 : TD=12 : DM(2)=4 : DM(1)=7 : MPR=4/3 : WE=32 : IE=4
 1260 CH=2 : CT=2 : NTT=2 : NT(1)=1 : NT(2)=1 : PP=4 : P$="Laser" : P1$="LASER" : GOTO 1600
 1270 REM *** KLINGON SHIP STATS ***
 1280 SS1=38 : MMP=15 : KSR=3 : MPP=6 : KM(3)=7 : KM(2)=15 : KM(1)=20 : NKP=10 : KP1=79 : KPR=5/3 : KW=56 : KI=23 : NKT=4 : KPA=2 : KTD=20 : MNT=4 : MTT=2
 1290 CH1=12 : CT1=7 : VN$="L-24 `Ever-Victorious'" : GOTO 560
 1300 SS1=34 : MMP=15 : KSR=3 : MPP=6 : KM(3)=7 : KM(2)=15 : KM(1)=20 : NKP=8 : KP1=63 : KPR=4/3 : KW=40 : KI=23 : NKT=4 : KPA=2 : KTD=20 : MNT=4 : MTT=2
 1310 CH1=11 : CT1=7 : CLK=48 : VN$="L-13D `Fat Man'" : GOTO 560
 1320 SS1=30 : MMP=14 : KSR=3 : MPP=5 : KM(3)=7 : KM(2)=15 : KM(1)=22 : NKP=10 : KP1=52 : KPR=4/3 : KW=40 : KI=12 : KPA=2 : KTD=20 : NKT=2 : MNT=2 : MTT=1
 1330 CH1=12 : CT1=6 : VN$="D-10H `Riskadh'" : GOTO 560
 1340 SS1=26 : MMP=15 : KSR=3 : MPP=5 : KM(3)=7 : KM(2)=15 : KM(1)=22 : NKP=6 : KP1=63 : KPR=4/3 : KW=40 : KI=23 : NKT=4 : KTD=10 : MNT=4 : MTT=2
 1350 CH1=12 : CT1=6 : CLK=48 : VN$="L-42 `Great Bird'" : GOTO 560
 1360 SS1=27 : MMP=15 : KSR=3 : MPP=6 : KM(3)=7 : KM(2)=15 : KM(1)=20 : NKP=7 : KP1=48 : KPR=4/3 : KW=36 : KI=12 : NKT=2 : KPA=2 : KTD=20 : MNT=2 : MTT=1
 1370 CH1=12 : CT1=7 : VN$="L-9 `Saber'" : GOTO 560
 1380 SS1=32 : MMP=14 : KSR=3 : MPP=6 : KM(3)=7 : KM(2)=15 : KM(1)=20 : NKP=8 : KP1=53 : KP=KP1 : KPR=5/3 : KW=36 : KI=17 : MNT=0 : MTT=0
 1390 CH1=11 : VN$="L-13C `Fat Man'" : GOTO 560
 1400 SS1=22 : MMP=12 : KSR=2 : MPP=7 : KM(3)=7 : KM(2)=15 : KM(1)=20 : NKP=6 : KP1=44 : KPR=1 : KW=40 : KI=4 : KPA=2 : KTD=18 : NKT=2 : MNT=2 : MTT=1
 1410 CH1=10 : CT1=6 : CLK=32 : VN$="D-7S `Bringer of Justice'" : GOTO 560
 1420 SS1=24 : MMP=15 : KSR=2 : MPP=5 : KM(3)=8 : KM(2)=15 : KM(1)=22 : NKP=7 : KP1=40 : KPR=4/3 : KW=36 : KI=4 : NKT=2 : KPA=2 : KTD=18 : MNT=2 : MTT=1
 1430 CH1=11 : CT1=6 : VN$="D-10D `Riskadh'" : GOTO 560
 1440 SS1=20 : MMP=12 : KSR=2 : MPP=7 : KM(3)=7 : KM(2)=15 : KM(1)=20 : NKP=4 : KP1=44 : KPR=1 : KW=40 : KI=4 : NKT=2 : KPA=2 : KTD=15 : MNT=2 : MTT=1
 1450 CH1=10 : CT1=7 : VN$="D-7M `Bringer of Destruction'" : GOTO 560
 1460 SS1=18 : MMP=12 : KSR=2 : MPP=6 : KM(2)=18 : KM(1)=18 : NKP=6 : KP1=40 : KPR=1 : KW=36 : KI=4 : NKT=0 : MNT=0 : MTT=0
 1470 CH1=9 : VN$="D-20C `Death Rite'" : GOTO 560
 1480 SS1=15 : MMP=11 : KSR=2 : MPP=6 : KM(2)=18 : KM(1)=18 : NKP=4 : KP1=40 : KPR=1 : KW=44 : KI=18 : NKT=2 : KTD=10 : MNT=2 : MTT=1
 1490 CH1=9 : CT1=2 : CLK=22 : VN$="D-14 `Stinger'" : GOTO 560
 1500 SS1=14 : MMP=8 : KSR=2 : MPP=4 : KM(2)=10 : KM(1)=18 : NKP=6 : KP1=42 : KPR=1 : KW=40 : KI=2 : NKT=1 : KTD=10 : MNT=1 : MTT=1
 1510 CH1=5 : CT1=6 : CLK=32 : VN$="D-18 `Gull'" : GOTO 560
 1520 SS1=10 : MMP=15 : KSR=3/2 : MPP=6 : KM(2)=18 : KM(1)=18 : NKP=2 : KP1=34 : KPR=1 : KW=28 : KI=6 : NKT=4 : KTD=10 : MNT=4 : MTT=2
 1530 CH1=9 : CT1=2 : VN$="D-2 `Stingtongue'" : GOTO 560
 1540 SS1=20 : MMP=8 : KSR=1 : MPP=6 : KM(2)=18 : KM(1)=18 : NKP=4 : KP1=40 : KPR=4/3 : KW=36 : KI=4 : NKT=0 : MNT=0 : MTT=0 : NKT=1 : PL=1 : PLA=10 : MNT=1 : MTT=1
 1550 CH1=9 : CT1=16 : VN$="D-7G `Truthbringer'" : GOTO 560
 1560 SS1=20 : MMP=8 : KSR=1 : MPP=6 : KM(2)=18 : KM(1)=18 : NKP=4 : KP1=40 : KPR=4/3 : KW=36 : KI=4 : NKT=0 : MNT=0 : MTT=0
 1570 CH1=9 : VN$="D-7A `Painbringer'" : GOTO 560
 1580 SS1=15 : MMP=13 : KSR=3/2 : MPP=5 : KM(3)=7 : KM(2)=15 : KM(1)=20 : NKP=2 : KP1=40 : KPR=1 : KW=36 : KI=4 : NKT=2 : KTD=6 : MNT=2 : MTT=1
 1590 CH1=11 : CT1=14 : VN$="D-11D `One Wing ": K$=CHR$(196)+CHR$(189) : GOTO 560
 1600 CLS : COLOR 0,2 : PRINT " "TS$(TS)" ": COLOR 2,0 : PRINT TAB(43);V1$ : PRINT ,,,V2$
 1610 PRINT "Total Power Units Available : "P,V3$
 1620 PRINT ,,,V4$ : COLOR 10 : PRINT "Engines & Power Data : ",, : COLOR 2 : PRINT V5$
 1630 PRINT "   Warp Engines :     "NWE"x"WE/NWE"units",V6$ : PRINT "   Impulse Engines :      "IE"units"
 1640 IF MPR=INT(MPR) THEN M$=STR$(MPR)+"/1" : GOTO 1660
 1650 IF MPR*3=INT(MPR*3) THEN M$=STR$(MPR*3)+"/3"
 1660 PRINT "   Movement Point Ratio : "M$
 1670 COLOR 10 : PRINT "Beam Weapons :   ["P$"s]",
 1675 COLOR 2 : PRINT "Damage Modifiers : ": PRINT "   Number :         "NP, : IF DM(3)=0 THEN PRINT : ELSE PRINT " +3  ( 1 -"DM(3)")"
 1680 PRINT "   Firing Chart :    "CT$(CH)," +2  ("DM(3)+1"-"DM(2)")"
 1690 PRINT "   Maximum Power :  "MFP, : IF DM(1)>0 AND DM(1)<>DM(2) THEN PRINT " +1  ("DM(2)+1"-"DM(1)")" : ELSE PRINT 
 1700 IF NTT<1 THEN 1720 : ELSE COLOR 10 : PRINT "Missile Weapons :  ["; : IF PP>7 THEN PRINT "Plasma Weapon]" 
 1703 ELSE IF PP>3 THEN PRINT "Accelerator Cannon]" : ELSE IF PP>1 THEN PRINT "Torpedoes]" : ELSE PRINT "Photon Torpedoes]"
 1705 COLOR 2 : PRINT "   Number :        "NTT : PRINT "   Firing Chart :   "CT$(CT)
 1710 PRINT "   Power to arm :  "PP : IF FPL=0 THEN PRINT "   Damage :        "TD : ELSE PRINT "   Plasma Type :    RPL-";RIGHT$(STR$(FPL),1)
 1720 COLOR 10 : PRINT "Shields and Superstructure Data : ": COLOR 2
 1730 IF SPR<>INT(SPR) AND SPR*2=INT(SPR*2) THEN SP$="2/"+RIGHT$(STR$(SPR*2),1) : ELSE SP$="1/"+RIGHT$(STR$(SPR),1)
 1740 PRINT "   Superstructure Points : "SS; TAB(48);"Combat Efficiency : "TT(TS) : PRINT "   Shield Point Ratio :    "SP$
 1750 PRINT "   Maximum Power :         "MSP
 1760 REM goto 620
 1770 COLOR 0,7 : LOCATE 16,51 : PRINT " Will you take ": LOCATE 17,49 : PRINT "this ship, Captain?" : COLOR 13,0
 1780 A$= INKEY$ : IF A$="" THEN 1780
 1790 IF A$="Y" OR A$="y" THEN 260 : ELSE 60
 1800 CLS : COLOR 0,14 : PRINT " "VN$" ": COLOR 14,0
 1810 PRINT : PRINT : PRINT "Engines & Power Data : ": COLOR 6,0
 1820 PRINT "   Total Power Units Available : "KP
 1830 PRINT "   Warp Engines :      2 x"KW/2"units" : PRINT "   Impulse Engines :      "KI"units"
 1840 IF KPR=INT(KPR) THEN MM$=STR$(KPR)+"/1" : GOTO 1860
 1850 IF KPR*3=INT(KPR*3) THEN MM$=STR$(KPR*3)+"/3"
 1860 PRINT "   Movement Point Ratio : "MM$
 1870 COLOR 14 : PRINT "Beam Weapons : ",, : COLOR 6 : PRINT "Damage Modifiers : ": PRINT "   Number :         "NKP, : IF KM(3)=0 THEN PRINT : ELSE PRINT " +3  ( 1 -"KM(3)")"
 1880 PRINT "   Firing Chart :    "CT$(CH1), : IF KM(2)>0 THEN PRINT " +2  ("KM(3)+1"-"KM(2)")" : ELSE PRINT 
 1890 PRINT "   Maximum Power :  "MPP, : IF KM(1)>0 AND KM(1)<>KM(2) THEN PRINT " +1  ("KM(2)+1"-"KM(1)")" : ELSE PRINT 
 1900 IF NKT>0 AND PL=0 THEN COLOR 14 : PRINT "Missile Weapons : ": COLOR 6 : PRINT "   Number :        "NKT : PRINT "   Firing Chart :   "CT$(CT1)
 1910 IF NKT>0 AND PL=0 THEN PRINT "   Power to arm :  "KPA : PRINT "   Damage :        "KTD
 1920 IF PL>0 THEN COLOR 14 : PRINT "Plasma Weapon : ": COLOR 6 : PRINT "   Type :          RPL-"RIGHT$(STR$(PL),1) : PRINT "   Number :         1"
 1930 IF PL>0 THEN PRINT "   Firing Chart :   "CT$(CT1) : PRINT "   Power to arm :  "PLA
 1940 COLOR 14 : PRINT "Shields and Superstructure Data : ": COLOR 6
 1950 IF KSR<>INT(KSR) AND KSR*2=INT(KSR*2) THEN KP$="2/"+RIGHT$(STR$(KSR*2),1) : ELSE KP$="1/"+RIGHT$(STR$(KSR),1)
 1960 PRINT "   Superstructure Points : "SS1 : PRINT "   Shield Point Ratio :    "KP$; TAB(47);"Combat Efficiency : "TK(TTS)
 1970 PRINT "   Maximum Power :         "MMP
 1980 IF CLK>0 THEN COLOR 14 : PRINT "Cloaking Device   "; : COLOR 6 : PRINT "Power to arm :  "CLK
 1990 COLOR 0,7 : LOCATE 16,51 : PRINT " Will you take ": LOCATE 17,49 : PRINT "this ship, Captain?" : COLOR 2,0
 2000 A$= INKEY$ : IF A$="" THEN 2000
 2010 IF A$="Y" OR A$="y" THEN 610 : ELSE 260
 2020 REM *** ROMULAN SHIP STATS ***
 2030 SS1=30 : KP1=68 : KW=48 : KI=20 : KPR=4/3 : MMP=13 : KSR=3 : KM(3)=8 : KM(2)=16 : KM(1)=20 : NKP=8 : MPP=6 : NKT=1 : PL=3 : PLA=8 : MNT=1 : MTT=1
 2040 CH1=11 : CT1=9 : CLK=38 : K$="-"+CHR$(240) : VN$="V-30 `Winged Defender'" : GOTO 560
 2050 SS1=35 : KP1=76 : KW=48 : KI=28 : KPR=5/3 : MMP=15 : KSR=3 : KM(3)=10 : KM(2)=16 : KM(1)=21 : NKP=10 : MPP=9 : NKT=6 : KTD=10 : MNT=6 : MTT=2
 2060 CH1=17 : CT1=6 : K$=CHR$(240)+"=" : VN$="Z-1 `Nova'" : GOTO 560
 2070 SS1=26 : KP1=52 : KW=48 : KI=4 : KPR=4/3 : MMP=15 : KSR=3 : KM(3)=8 : KM(2)=16 : KM(1)=20 : NKP=6 : MPP=6 : NKT=1 : PL=2 : PLA=15 : MNT=1 : MTT=1
 2080 CH1=11 : CT1=18 : CLK=38 : K$="="+CHR$(240) : VN$="V-6 `Gallant Wing'" : GOTO 560
 2090 SS1=25 : KP1=52 : KW=48 : KI=4 : KPR=4/3 : MMP=15 : KSR=2 : KM(3)=8 : KM(2)=16 : KM(1)=20 : NKP=5 : MPP=8 : NKT=2 : KTD=8 : MNT=2 : MTT=1
 2100 CH1=10 : CT1=2 : CLK=38 : K$=CHR$(240)+"=" : VN$="V-27 `Comet of Destruction'" : GOTO 560
 2110 SS1=21 : KP1=44 : KW=36 : KI=8 : KPR=4/3 : MMP=11 : KSR=3 : KM(3)=8 : KM(2)=16 : KM(1)=20 : NKP=4 : MPP=8 : NKT=2 : KTD=10 : MNT=2 : MTT=1
 2120 CH1=10 : CT1=6 : CLK=22 : VN$="V-11 `Stormbird'" : GOTO 560
 2130 SS1=18 : KP1=44 : KW=36 : KI=8 : KPR=4/3 : MMP=14 : KSR=3 : KM(3)=10 : KM(2)=16 : KM(1)=21 : NKP=6 : MPP=5 : NKT=3 : KTD=8 : MNT=3 : MTT=2
 2140 CH1=17 : CT1=2 : CLK=22 : K$="="+CHR$(240) : VN$="V-7 `Whitewind'" : GOTO 560
 2150 SS1=10 : KP1=35 : KW=30 : KI=5 : KPR=1 : MMP=8 : KSR=2 : KM(3)=4 : KM(2)=9 : KM(1)=13 : NKP=8 : MPP=6 : NKT=1 : KTD=8 : MNT=1 : MTT=1
 2160 CH1=19 : CT1=2 : CLK=15 : K$="-"+CHR$(240) : VN$="T-5 `Fire Swarm'" : GOTO 560
 2170 SS1=18 : KP1=38 : KW=26 : KI=12 : KPR=1 : MMP=13 : KSR=1 : : KM(3)=10 : KM(2)=16 : KM(1)=21 : NKP=4 : MPP=5 : NKT=1 : PL=1 : PLA=10 : MNT=1 : MTT=1
 2180 CH1=17 : CT1=16 : CLK=15 : K$="="+CHR$(240) : VN$="V-5 `Skyfire'" : GOTO 560
 2190 SS1=10 : KP1=25 : KW=20 : KI=5 : KPR=2/3 : MMP=10 : KSR=2 : KM(3)=4 : KM(2)=9 : KM(1)=14 : NKP=6 : MPP=3 : NKT=1 : PL=1 : PLA=10 : MNT=1 : MTT=1
 2200 CH1=20 : CT1=16 : CLK=10 : K$="="+CHR$(240) : VN$="T-2 `Death Talon'" : GOTO 560
 2210 SS1=15 : KP1=35 : KW=30 : KI=5 : KPR=4/3 : MMP=8 : KSR=2 : KM(3)=2 : KM(2)=6 : KM(1)=10 : NKP=1 : MPP=6 : NKT=1 : PL=2 : PLA=15 : MNT=1 : MTT=1
 2220 CH1=15 : CT1=18 : CLK=15 : K$=CHR$(240)+"=" : VN$="V-8 `Bird of Prey'" : GOTO 560
 2230 SS1=12 : KP1=32 : KW=30 : KI=2 : KPR=1 : MMP=13 : KSR=1 : KM(3)=2 : KM(2)=6 : KM(1)=10 : NKP=6 : MPP=6
 2240 CH1=15 : K$=CHR$(174)+"<" : VN$="V-4 `Wing of Vengeance'" : GOTO 560
 2250 SS1=6 : KP1=25 : KW=22 : KI=3 : KPR=1/3 : MMP=7 : KSR=2 : KM(2)=6 : KM(1)=10 : NKP=4 : MPP=4
 2260 CH1=15 : K$="="+CHR$(240) : VN$="S-3 `Free Flight'" : GOTO 560
 2270 REM *** GRAPHIC IMAGE OF FEDERATION SHIP ***
 2280 V1$="        "+CHR$(223)+ STRING$(3,219)+ STRING$(4,223) : V2$="  "+CHR$(220)+ STRING$(2,219)+CHR$(220)+" "+CHR$(220)+CHR$(219)+CHR$(223) 
 2285 V3$=CHR$(220)+ STRING$(7,219)+CHR$(221) : V4$=CHR$(223)+RIGHT$(V3$,8)
 2290 V5$="  "+CHR$(223)+ STRING$(2,219)+CHR$(223)+" "+CHR$(223)+CHR$(219)+CHR$(220) : V6$="        "+CHR$(220)+ STRING$(3,219)+ STRING$(4,220) : GOTO 250
 2300 V1$="   "+CHR$(220)+ STRING$(4,219)+CHR$(220)+"    "+ STRING$(15,220) : V2$=" "+CHR$(220)+ STRING$(8,219)+CHR$(220)+"     "+CHR$(220)+CHR$(219)+ STRING$(2,223) 
 2305 V3$= STRING$(12,219)+ STRING$(3,220)+CHR$(219)+ STRING$(3,220)
 2310 V4$= STRING$(12,219)+ STRING$(3,223)+CHR$(219)+ STRING$(3,223) : V5$=" "+CHR$(223)+ STRING$(8,219)+CHR$(223)+"     "+CHR$(223)+CHR$(219)+ STRING$(2,220) 
 2315 V6$="   "+CHR$(223)+ STRING$(4,219)+CHR$(223)+"    "+ STRING$(15,223) : GOTO 250
 2320 V1$="    "+ STRING$(3,220)+" "+CHR$(223)+ STRING$(2,219)+ STRING$(9,223) : V2$=" "+CHR$(220)+ STRING$(9,219)+CHR$(220) 
 2325 V5$=" "+CHR$(223)+ STRING$(9,219)+CHR$(223) : V3$= STRING$(13,219) : V4$=V3$
 2330 V6$="    "+ STRING$(3,223)+" "+CHR$(220)+ STRING$(2,219)+ STRING$(9,220) : GOTO 250
 2340 V1$="      "+ STRING$(5,178) : V6$=V1$ : V2$="  "+ STRING$(5,219)+ STRING$(6,178)+CHR$(223)+ STRING$(3,219)+CHR$(223) 
 2345 V3$= STRING$(9,219)+"  "+ STRING$(13,223) : V4$= STRING$(9,219)+"  "+ STRING$(13,220)
 2350 V5$="  "+ STRING$(5,219)+ STRING$(6,178)+CHR$(220)+ STRING$(3,219)+CHR$(220) : GOTO 250
 2360 V1$="" : V2$="  "+CHR$(220)+ STRING$(6,219)+CHR$(220) : V3$=" "+ STRING$(11,219) : V4$=CHR$(222)+ STRING$(11,219)+ STRING$(10,219) : V5$=" "+ STRING$(11,219)
 2370 V6$="  "+CHR$(223)+ STRING$(6,219)+CHR$(223) : GOTO 250
 2380 V1$="   "+ STRING$(5,220)+"    "+ STRING$(14,220) : V2$=" "+CHR$(220)+ STRING$(7,219)+CHR$(220)+"     "+CHR$(219) 
 2385 V3$= STRING$(11,219)+ STRING$(4,220)+CHR$(219)+ STRING$(2,220)
 2390 V4$= STRING$(11,219)+ STRING$(4,223)+CHR$(219)+ STRING$(2,223) : V5$=" "+CHR$(223)+ STRING$(7,219)+CHR$(223)+"     "+CHR$(219) 
 2395 V6$="   "+ STRING$(5,223)+"    "+ STRING$(14,223) : CH=11 : CT=3 : NTT=2 : NT(1)=1 : NT(2)=1 : GOTO 250
 2400 V1$="       "+ STRING$(2,178) : V6$=V1$ : V2$="  "+ STRING$(4,219)+ STRING$(11,178) : V3$= STRING$(9,219)+ STRING$(5,176)+ STRING$(10,223) 
 2405 V4$= STRING$(9,219)+ STRING$(5,176)+ STRING$(10,220) : V5$=V2$ : GOTO 250
 2410 V1$="" : V2$="  "+CHR$(220)+ STRING$(6,219)+CHR$(220) : V3$=CHR$(220)+ STRING$(10,219)+CHR$(220) : V4$= STRING$(9,219)+ STRING$(3,176)+ STRING$(10,219) 
 2415 V5$=CHR$(223)+ STRING$(10,219)+CHR$(223)
 2420 V6$="  "+CHR$(223)+ STRING$(6,219)+CHR$(223) : GOTO 250
 2430 V1$="      "+ STRING$(8,220) : V6$="      "+ STRING$(8,223) : V2$=" "+CHR$(220)+ STRING$(7,219) 
 2435 V3$=CHR$(222)+ STRING$(7,219)+CHR$(221) : V4$=V3$ : V5$=" "+CHR$(223)+ STRING$(7,219)
 2440 V1$="" : V6$=V1$ : V2$="  "+ STRING$(4,219)+ STRING$(11,178) : V3$= STRING$(8,219)+CHR$(176)+ STRING$(11,223) 
 2445 V4$= STRING$(8,219)+CHR$(176)+ STRING$(11,220) : V5$=V2$ : GOTO 250
 2450 V1$="   "+ STRING$(9,220) : V2$=" "+ STRING$(12,219)+ STRING$(11,220) : V3$= STRING$(13,219)+CHR$(220) : V4$= STRING$(13,219)+CHR$(223) 
 2455 V5$=" "+ STRING$(12,219)+ STRING$(11,223) : V6$="   "+ STRING$(9,223) : GOTO 250
 2460 V1$="   "+ STRING$(5,220)+"    "+ STRING$(13,220) : V2$=" "+CHR$(220)+ STRING$(6,219)+CHR$(223)+CHR$(220)+"   "+ STRING$(2,220)+CHR$(219)+CHR$(32) 
 2465 V3$= STRING$(9,219)+ STRING$(2,177)+ STRING$(4,223)
 2470 V4$= STRING$(9,219)+ STRING$(2,177)+ STRING$(4,220) : V5$=" "+CHR$(223)+ STRING$(6,219)+CHR$(220)+CHR$(223)+"   "+ STRING$(2,223)+CHR$(219)+CHR$(220) 
 2475 V6$="   "+ STRING$(5,223)+"    "+ STRING$(13,223) : GOTO 250
 2480 V1$="   "+ STRING$(8,220) : V2$=" "+CHR$(220)+ STRING$(10,219) : V3$= STRING$(12,219)+ STRING$(10,220) : V4$= STRING$(12,219)+ STRING$(10,223) 
 2485 V5$=" "+CHR$(223)+ STRING$(10,219) : V6$="   "+ STRING$(8,223) : GOTO 250
 2490 V1$="    "+ STRING$(3,220)+ STRING$(4,219) : V2$=" "+CHR$(220)+ STRING$(5,219)+CHR$(220)+ STRING$(4,177) : V3$= STRING$(9,219)+ STRING$(8,220)
 2500 V4$= STRING$(9,219)+ STRING$(8,223) : V5$=" "+CHR$(223)+ STRING$(5,219)+CHR$(223)+ STRING$(4,177) : V6$="    "+ STRING$(3,223)+ STRING$(4,219) : GOTO 250
 2510 V1$="   "+ STRING$(5,220) : V2$=" "+CHR$(220)+ STRING$(7,219)+CHR$(220) : V3$= STRING$(11,219)+ STRING$(11,220) 
 2515 V4$=CHR$(223)+ STRING$(9,219)+CHR$(223) : V5$="  "+CHR$(223)+ STRING$(5,219)+CHR$(223) : GOTO 250
 2520 CLS : PRINT "<* INPUT OTHER VESSEL *>"
 2530 PRINT : INPUT "Name of vessel";TS$(20) : IF TS$(20)="" THEN RUN 
 2540 INPUT "Superstructure Points";SS : IF SS<1 OR SS>35 THEN 2540 : ELSE SO=SS
 2550 INPUT "Total Power Points ( 60 max )";P : IF P<1 OR P>60 THEN 2550 : ELSE P2=P
 2560 INPUT " Warp engine output (total)";WE : IF WE>P THEN 2560
 2570 IE=P-WE : PRINT "  Impulse engine output =";IE
 2580 INPUT " Movement point ratio";MPR$ : IF VAL(MPR$)=0 THEN 2580 : ELSE IF MID$(MPR$,2,1)<>"/" THEN MPR=VAL(MPR$) : ELSE MPR=VAL(LEFT$(MPR$,1))/VAL(RIGHT$(MPR$,1))
 2585 IF MPR<0.5 OR MPR>3 THEN 2580
 2590 INPUT "Number of Beam Weapons ( 11 max )";NP : IF NP<0 OR NP>11 THEN 2590 : ELSE IF NP=0 THEN 2650
 2600 INPUT " Type of beam weapon (Phaser, Laser, etc.)";P$ : P1$=P$ : FOR A=1 TO LEN(P1$) : IF ASC(MID$(P1$,A,1))>90 THEN MID$(P1$,A,1)=CHR$(ASC(MID$(P1$,A,1))-32)
 2605 NEXT 
 2610 INPUT " Firing chart";F$ : GOSUB 3200
 2615 FOR A=1 TO 20 : IF CT$(A)=F$ THEN 2630
 2620 NEXT : A=21 : GOSUB 3220 : IF CH$(21)="" THEN 2610
 2630 CH=A : INPUT " Maximum power per shot";MFP : PRINT " Maximum range ="LEN(CH$(CH))
 2640 FOR A=3 TO 1 STEP -1 : PRINT "  +"A"bonus out to distance"; : INPUT DM(A) : IF DM(A)>LEN(CH$(CH)) THEN DM(A)=LEN(CH$(CH))
 2645 IF A<3 AND DM(A)<DM(A+1) THEN DM(A)=DM(A+1)
 2650 NEXT : PRINT "Number of Missile Weapons ("11-NP"max )"; : INPUT NTT : IF NTT<1 OR NTT>11-NP THEN 2720
 2660 INPUT " Type (0 for Photon torp, 1-3 for Plasma)";FPL : IF FPL>3 THEN 2660
 2670 PRINT "   1 Forward, 2 Starboard, 3 Aft, 4 Port" : FOR A=1 TO NTT : PRINT "  Firing Arc #"A; : INPUT NT(A) : NEXT 
 2675 IF FPL<1 THEN 2680 : ELSE IF FPL=1 THEN F$="E" : PP=10
 2676 IF FPL=2 THEN F$="M" : PP=15
 2677 IF FPL=3 THEN F$="T" : PP=8
 2678 FOR A=1 TO 20 : IF CT$(A)=F$ THEN CT=A : GOTO 2720
 2679 NEXT : A=22 : GOSUB 3220 : GOTO 2720
 2680 INPUT " Firing Chart";F$ : GOSUB 3200 : FOR A=1 TO 20 : IF CT$(A)=F$ THEN 2700
 2690 NEXT : A=22 : GOSUB 3220 : IF CH$(22)="" THEN 2680
 2700 CT=A : INPUT " Power to arm";PP : IF PP<1 THEN PP=1
 2710 INPUT " Damage";TD : IF TD<1 OR TD>30 THEN 2710
 2720 INPUT "Shield Point Ratio (1/x)";SPR : IF SPR>4 THEN 2720
 2730 INPUT " Maximum shield power";MSP : IF MSP>20 THEN 2730
 2740 INPUT "Combat Efficiency";TT(20) : IF TT(20)<1 THEN 2740
 2750 TS=20 : GOTO 1600
 2760 CLS : PRINT "<* ENTER OTHER ENEMY VESSEL *>"
 2770 PRINT : INPUT "Name of vessel";VN$ : IF VN$="" THEN 260 : ELSE INPUT " Identity of vessel (Klingon, Romulan, etc.)";AD$ 
 2775 AV$=AD$ : FOR A=1 TO LEN(AV$) : IF ASC(MID$(AV$,A,1))>90 THEN MID$(AV$,A,1)=CHR$(ASC(MID$(AV$,A,1))-32)
 2780 NEXT : INPUT "Superstructure Points";SS1 : IF SS1<1 THEN 1780
 2785 INPUT "Total Power Points";KP1 : IF KP1<1 THEN 2785
 2790 INPUT " Warp engine output (total)";KW : IF KW>KP1 THEN 2790 : ELSE KI=KP1-KW : PRINT "  Impulse engine output ="KI
 2800 INPUT " Movement point ratio";KPR$ : IF VAL(KPR$)=0 THEN 2800 : ELSE IF MID$(KPR$,2,1)<>"/" THEN KPR=VAL(KPR$) : ELSE KPR=VAL(LEFT$(KPR$,1))/VAL(RIGHT$(KPR$,1))
 2805 IF KPR<=0 OR KPR>3 THEN 2800 : ELSE INPUT "Number of Beam Weapons";NKP : IF NKP<0 THEN 2805
 2810 INPUT " Type of beam weapons (Disruptor, etc.)";D1$ : D2$=D1$ : FOR A=1 TO LEN(D2$) : IF ASC(MID$(D2$,A,1))>90 THEN MID$(D2$,A,1)=CHR$(ASC(MID$(D2$,A,1))-32)
 2815 NEXT 
 2820 INPUT " Firing chart";F$ : GOSUB 3200 : FOR A=1 TO 20 : IF CT$(A)=F$ THEN 2840
 2830 NEXT : A=23 : GOSUB 3220 : IF CH$(23)="" THEN 2820
 2840 CH1=A : INPUT " Maximum power/shot";MPP : PRINT "  Maximum range ="LEN(CH$(CH1)) : FOR A=3 TO 1 STEP -1 : PRINT "  +"A"bonus"; 
 2845 INPUT KM(A) : IF KM(A)>LEN(CH$(CH1)) THEN KM(A)=LEN(CH$(CH1))
 2845 IF A<3 AND KM(A)<KM(A+1) THEN KM(A)=KM(A+1)
 2850 NEXT : INPUT "Number of Missile Weapons";NKT : MNT=NKT : IF NKT<1 THEN 2910 : ELSE IF NKT=1 THEN 2870
 2860 INPUT " Photon or Plasma torpedo (0 for photon, 1-3 for type of plasma)";PL : IF PL>0 THEN MNT=1 : MTT=1 : IF PL>3 THEN 2860
 2870 IF PL=0 THEN INPUT " How many can be fired at a time";MTT : IF MTT>NKT THEN 2870
 2880 INPUT " Firing Chart";F$ : GOSUB 3200 : FOR A=1 TO 20 : IF CT$(A)=F$ THEN 2900
 2890 NEXT : A=24 : GOSUB 3220 : IF CH$(24)="" THEN 2880
 2900 CT1=A : IF PL=0 THEN INPUT " Damage";TD : ELSE IF PL=1 THEN PLA=10 : ELSE IF PL=2 THEN PLA=15 : ELSE IF PL=3 THEN PLA=8
 2910 INPUT "Shield Point Ratio (1/x)";KSR : INPUT " Maximum shield power";MMP
 2920 INPUT "Cloaking Device (0 if none, else amount to power it)";CLK : IF CLK>0 AND CLK<10 THEN 2920
 2930 PRINT "1 -], 2 "CHR$(240)"=, 3 ="CHR$(240)", 4 "CHR$(174);CHR$(240)", 5 "CHR$(196)"=, 6 O=, or 7 Enter another" : INPUT " Which icon for this ship";I
 2940 K$="" : IF I<7 THEN 2980 : ELSE PRINT "  Enter icon (Press Alt+# on keypad for special character)" : PRINT "  ";
 2950 IF LEN(K$)>1 THEN 2970 : ELSE A$= INKEY$ : IF A$="" THEN 2950
 2960 K$=K$+A$ : PRINT A$; : GOTO 2950
 2970 INPUT "   Is this correct, Captain";A$ : IF LEFT$(A$,1)="y" OR LEFT$(A$,1)="Y" THEN 2990 : ELSE 2940
 2980 IF I=1 THEN K$="-]" : ELSE IF I=2 THEN K$=CHR$(240)+"=" : ELSE IF I=3 THEN K$="="+CHR$(240) : ELSE IF I=4 THEN K$=CHR$(174)+CHR$(240) 
 2985 IF I=5 THEN K$=CHR$(196)+"=" : ELSE IF I=6 THEN K$="O="
 2990 INPUT "Combat Efficiency";TK(33) : GOTO 560
 3000 REM *** GORN ORION THOLIAN SHIP STATS ***
 3010 SS1=51 : KP1=67 : KW=52 : KI=15 : KPR=2 : MMP=13 : KSR=2 : KM(3)=10 : KM(2)=15 : KM(1)=20 : NKP=8 : MPP=6 : NKT=8 : KPA=2 : KTD=10 : MNT=8 : MTT=4
 3020 CH1=11 : CT1=20 : AV=3 : VN$="BH-2 Gorn Battleship" : GOTO 560
 3030 SS1=34 : KP1=42 : KW=36 : KI=6 : KPR=4/3 : MMP=12 : KSR=2 : KM(3)=6 : KM(2)=12 : KM(1)=18 : NKP=8 : MPP=5 : NKT=3 : KPA=2 : KTD=8 : MNT=3 : MTT=3
 3040 CH1=5 : CT1=4 : AV=3 : VN$="MD-8 Gorn Cruiser" : GOTO 560
 3050 SS1=27 : KP1=36 : KW=32 : KI=4 : KPR=4/3 : MMP=10 : KSR=2 : KM(3)=6 : KM(2)=12 : KM(1)=16 : NKP=6 : MPP=5 : NKT=2 : KPA=2 : KTD=10 : MNT=2 : MTT=2
 3060 CH1=7 : CT1=20 : AV=3 : VN$="MA-12 Gorn Cruiser" : GOTO 560
 3070 SS1=21 : KP1=37 : KW=34 : KI=3 : KPR=2/3 : MMP=8 : KSR=4 : KM(2)=18 : KM(1)=18 : NKP=4 : MPP=6 : NKT=4 : KTD=10 : MNT=4 : MTT=2 : IF FV>0 THEN VF=4
 3080 CH1=9 : CT1=3 : AV=4 : VN$="Orion Wanderer" : GOTO 560
 3090 SS1=16 : KP1=33 : KW=30 : KI=3 : KPR=1 : MMP=6 : KSR=3 : KM(2)=0 : KM(1)=16 : NKP=6 : MPP=4 : IF FV>0 THEN VF=4
 3100 CH1=7 : AV=4 : VN$="Orion Lightning" : GOTO 560
 3110 SS1=18 : KP1=24 : KW=20 : KI=4 : KPR=2/3 : MMP=10 : KSR=2 : KM(3)=5 : KM(2)=12 : KM(1)=16 : NKP=4 : MPP=3 : IF FV>0 THEN VF=5
 3120 CH1=8 : AV=3 : D1$="Phaser" : D2$="PHASER" : AD$="Tholian" : AV$="THOLIAN" : VN$="Tholian Cruiser" : K$="<"+CHR$(175) : GOTO 560
 3200 F$=LEFT$(F$,1) : IF ASC(F$)>90 THEN F$=CHR$(ASC(F$)-32)
 3210 RETURN 
 3220 PRINT "  Please input data for that chart," : PRINT "  subtracting 1 from each number." : PRINT "  Thus, Chart I reads `776655443210'."
 3230 LINE INPUT "  (Or press return for another chart)  ";CH$(A) : CT$(A)=F$ : RETURN 
 3300 CLS : LOCATE 8,20 : PRINT "I'm sorry, Captain, but this ship" : PRINT TAB(20);"has too much armament for the" 
 3305 TAB(20);"distribution screen to handle."
 3310 PRINT : PRINT TAB(20);"Consequently, I regret to inform" : PRINT TAB(20);"you that you must choose another" 
 3315 PRINT TAB(20);"opponent.  Please press a key" : PRINT TAB(20);"to continue."
 3320 A$= INKEY$ : IF A$="" THEN 3320 : ELSE 260
 3400 TIMER OFF : TR=A/10 : RETURN 
 3500 CLS : LOCATE 8,20 : PRINT "I'm sorry, Captain, but this ship" : PRINT TAB(20);"has too many weapons systems for" : PRINT TAB(20);"the simulator to handle.  Would"
 3510 PRINT TAB(20);"you like me to scale it down from" : PRINT TAB(19);KBW;"to";13-KMW;"beam weapons?"
 3520 A$= INKEY$ : IF A$="" THEN 3520 : ELSE IF A$<>"Y" AND A$<>"y" THEN 120 : ELSE KBW=13-KMW : GOTO 570
