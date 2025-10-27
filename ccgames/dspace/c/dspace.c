/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/dspace.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57e1e8ad1db0 ---------A   00100 PRINT CHR$(26);TAB(24);"DEEPSPACE"
    0x57e1e8ad0b80 ---------A   00110 PRINT TAB(20);"CREATIVE COMPUTING"
    0x57e1e8ad1f30 ---------A   00120 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x57e1e8ad20b0 ---------A   00130 PRINT:PRINT
    0x57e1e8acfe40 ---------A   00150 PRINT "THIS IS DEEPSPACE, A TACTICAL SIMULATION OF SHIP TO SHIP"
    0x57e1e8ad16a0 ---------A   00160 PRINT "COMBAT IN DEEP SPACE."
    0x57e1e8ad1730 ---------A   00165 PRINT
    0x57e1e8acf6d0 ---------A   00170 PRINT "DO YOU WISH INSTRUCTIONS";:INPUT I$
    0x57e1e8acf670 ---------A   00180 IF LEFT$(I$,1)="N" THEN 610
    0x57e1e8ad7b20 ---------A   00190 PRINT CHR$(26)
    0x57e1e8ad7cd0 ---------A   00200 PRINT "YOU ARE ONE OF A GROUP OF CAPTAINS ASSIGNED TO PATROL A"
    0x57e1e8ad7e70 ---------A   00210 PRINT "SECTION OF YOUR STAR EMPIRE'S BORDER AGAINST HOSTILE"
    0x57e1e8ad8020 ---------A   00220 PRINT "ALIENS. ALL YOUR ENCOUNTERS HERE WILL BE AGAINST HOSTILE"
    0x57e1e8ad81d0 ---------A   00230 PRINT "VESSELS. YOU WILL FIRST BE REQUIRED TO SELECT A VESSEL"
    0x57e1e8ad8380 ---------A   00240 PRINT "FROM ONE OF THREE TYPES, EACH WITH ITS OWN CHARACTERISTICS:"
    0x57e1e8ad87f0 ---------A   00260 PRINT:PRINT "    TYPE","SPEED","CARGO SPACE","PROTECTION"
    0x57e1e8ad8c60 ---------A   00265 PRINT "   ------","-----","-----------","----------"
    0x57e1e8ad90d0 ---------A   00270 PRINT "1- SCOUT"," 10X","     16","    1"
    0x57e1e8ad9540 ---------A   00280 PRINT "2- CRUISER","  4X","     24","    2"
    0x57e1e8ad99c0 ---------A   00290 PRINT "3- BATTLESHIP","  2X","     30","    5"
    0x57e1e8ad9bb0 ---------A   00310 PRINT:PRINT "SPEED IS GIVEN RELATIVE TO THE OTHER SHIPS."
    0x57e1e8ad9d10 ---------A   00320 PRINT "CARGO SPACE IS IN UNITS OF SPACE ABOARD SHIP WHICH CAN BE"
    0x57e1e8ad9e90 ---------A   00330 PRINT "FILLED WITH WEAPONS."
    0x57e1e8ad9ff0 ---------A   00340 PRINT "PROTECTION IS THE RELATIVE STRENGTH OF THE SHIP'S ARMOR"
    0x57e1e8ada140 ---------A   00350 PRINT "AND FORCE FIELDS."
    0x57e1e8ada1f0 ---------A   00360 GOSUB 10000
    0x57e1e8ada3d0 ---------A   00370 PRINT:PRINT "ONCE A SHIP HAS BEEN SELECTED, YOU WILL BE INSTRUCTED TO ARM"
    0x57e1e8ada540 ---------A   00380 PRINT "IT WITH WEAPONRY FROM THE FOLLOWING LIST:"
    0x57e1e8ada5e0 ---------A   00390 PRINT
    0x57e1e8ada790 ---------A   00400 PRINT "     TYPE                    CARGO SPACE    REL. STRENGTH"
    0x57e1e8ada940 ---------A   00405 PRINT "    ------                   -----------    -------------"
    0x57e1e8adaae0 ---------A   00410 PRINT "1- PHASER BANKS                   12                4"
    0x57e1e8adac80 ---------A   00420 PRINT "2- ANTI-MATTER MISSILE             4               20"
    0x57e1e8adb030 ---------A   00430 PRINT "3- HYPERSPACE LANCE                4               16"
    0x57e1e8adb1d0 ---------A   00440 PRINT "4- PHOTON TORPEDO                  2               10"
    0x57e1e8adb380 ---------A   00450 PRINT "5- HYPERON NEUTRALIZATION FIELD   20                6"
    0x57e1e8adb570 ---------A   00470 PRINT:PRINT "WEAPONS #1 & #5 CAN BE FIRED 100 TIMES EACH; ALL OTHERS CAN"
    0x57e1e8adb6a0 ---------A   00480 PRINT "BE FIRED ONCE FOR EACH ON BOARD."
    0x57e1e8adb740 ---------A   00485 PRINT
    0x57e1e8adb8d0 ---------A   00490 PRINT "A TYPICAL LOAD FOR A CRUISER MIGHT CONSIST OF:"
    0x57e1e8adba60 ---------A   00500 PRINT "          1-#1 PHASER BANK          = 12"
    0x57e1e8adbbf0 ---------A   00510 PRINT "          2-#3 HYPERSPACE LANCES    =  8"
    0x57e1e8adbd80 ---------A   00520 PRINT "          2-#4 PHOTON TORPEDOES     =  4"
    0x57e1e8adbf20 ---------A   00530 PRINT "                                  ---------"
    0x57e1e8adc090 ---------A   00540 PRINT "                              24 UNITS OF CARGO"
    0x57e1e8adc140 ---------A   00545 GOSUB 10000
    0x57e1e8adc2e0 ---------A   00550 PRINT " A WORD OF CAUTION: FIRING HIGH YIELD WEAPONS AT CLOSE (<100)"
    0x57e1e8adc490 ---------A   00560 PRINT "RANGE CAN BE DANGEROUS TO YOUR SHIP AND MINIMAL DAMAGE CAN"
    0x57e1e8adc630 ---------A   00570 PRINT "OCCUR AS FAR OUT AS 200 IN SOME CIRCUMSTANCES."
    0x57e1e8adc7f0 ---------A   00590 PRINT:PRINT "RANGE IS GIVEN IN THOUSANDS OF KILOMETERS."
    0x57e1e8adc880 ---------A   00600 GOTO 640
    0x57e1e8adcbf0 ---------A T 00610 PRINT "DO YOU WISH A MANEUVER CHART";:INPUT M$
    0x57e1e8add010 ---------A   00620 IF LEFT$(M$,1)="N" THEN 770
    0x57e1e8add0c0 ---------A T 00640 PRINT
    0x57e1e8add350 ---------A   00650 PRINT "     MANEUVER CHART":PRINT "     --------------"
    0x57e1e8add4c0 ---------A   00670 PRINT " 1      FIRE PHASERS"
    0x57e1e8add640 ---------A   00680 PRINT " 2      FIRE ANTI-MATTER MISSILE"
    0x57e1e8add7b0 ---------A   00690 PRINT " 3      FIRE HYPERSPACE LANCE"
    0x57e1e8add930 ---------A   00700 PRINT " 4      FIRE PHOTON TORPEDO"
    0x57e1e8addab0 ---------A   00710 PRINT " 5      ACTIVE HYPERON NEUTRALIZATION FIELD"
    0x57e1e8addc10 ---------A   00720 PRINT " 6      SELF-DESTRUCT"
    0x57e1e8addd80 ---------A   00730 PRINT " 7      CHANGE VELOCITY"
    0x57e1e8addee0 ---------A   00740 PRINT " 8      DISENGAGE"
    0x57e1e8ade060 ---------A   00750 PRINT " 9      PROCEED"
    0x57e1e8ade220 ---------A T 00770 PRINT:PRINT "YOU HAVE A CHOICE OF THREE SYSTEMS TO PATROL."
    0x57e1e8ade780 ---------A   00780 PRINT "1 - ORION"
    0x57e1e8ade8e0 ---------A   00790 PRINT "2 - DENEB"
    0x57e1e8adea50 ---------A   00800 PRINT "3 - ARCTURUS"
    0x57e1e8adedb0 ---------A T 00810 PRINT "SELECT A SYSTEM (1-3)";:INPUT S9
    0x57e1e8adf010 ---------A   00820 IF S9=1 THEN 2380
    0x57e1e8adf270 ---------A   00830 IF S9=2 THEN 2430
    0x57e1e8adf2f0 ---------A   00840 GOTO 2480
    0x57e1e8adf5b0 ---------A T 00850 D0=0
    0x57e1e8adf880 ---------A   00860 D1=0
    0x57e1e8adfb50 ---------A   00870 N1=0
    0x57e1e8adfe20 ---------A   00880 N2=0
    0x57e1e8ae00f0 ---------A   00890 N3=0
    0x57e1e8ae03c0 ---------A   00900 N4=0
    0x57e1e8ae06c0 ---------A   00910 D=0
    0x57e1e8ae0a40 ---------A T 00920 PRINT "WHICH SPACECRAFT WOULD YOU LIKE (1-3)";:INPUT S
    0x57e1e8ae0de0 ---------A   00930 ON S GOTO 1790,1830,1870
    0x57e1e8ae0e50 ---------A   00960 GOTO 920
    0x57e1e8ae1220 ---------A T 00970 C=C0
    0x57e1e8ae15c0 ---------A T 00980 PRINT "YOU HAVE";C;"UNITS OF CARGO SPACE TO FILL WITH WEAPONRY."
    0x57e1e8ae1af0 ---------A   00990 PRINT "CHOOSE A WEAPON AND THE AMOUNT YOU WISH";:INPUT W,N
    0x57e1e8ae2010 ---------A   01000 ON W GOTO 1910,2010,2100,2190,2280
    0x57e1e8ae2090 ---------A   01050 GOTO 980
    0x57e1e8ae24d0 ---------A T 01060 IF N*C1>C THEN 2530
    0x57e1e8ae2960 ---------A   01070 C=C-N*C1
    0x57e1e8ae2db0 ---------A   01080 ON W GOTO 1990,2080,2170,2260
    0x57e1e8ae2e20 ---------A   01120 GOTO 2360
    0x57e1e8ae3060 ---------A T 01130 IF C>1 THEN 980
    0x57e1e8ae30e0 ---------A   01140 REM
    0x57e1e8ae3680 ---------A   01150 S1=S0*RND(0)
    0x57e1e8ae3d80 ---------A   01160 R=(3*RND(0)+5)*100
    0x57e1e8ae4030 ---------A T 01180 PRINT:PRINT "RANGE TO TARGET:";R
    0x57e1e8ae4290 ---------A   01190 PRINT "RELATIVE VELOCITY:";S1
    0x57e1e8ae4610 ---------A T 01200 PRINT "ACTION";:INPUT M
    0x57e1e8ae4d70 ---------A   01210 ON M GOTO 1940,2030,2120,2210,2310,1660,1390,2760
    0x57e1e8ae4fc0 ---------A T 01290 IF R<500 THEN 1500
    0x57e1e8ae5220 ---------A T 01300 IF S1>0 THEN 1330
    0x57e1e8ae57c0 ---------A   01310 R=R+(S1*8.3)^1.25
    0x57e1e8ae5830 ---------A   01320 GOTO 1340
    0x57e1e8ae5dc0 ---------A T 01330 R=R-(S1*8.3)^1.25
    0x57e1e8ae6010 ---------A T 01340 IF R>1500 THEN 2590
    0x57e1e8ae6270 ---------A   01350 IF R>0 THEN 1370
    0x57e1e8ae64b0 ---------A   01360 R=-R
    0x57e1e8ae6520 ---------A T 01370 PRINT
    0x57e1e8ae65b0 ---------A   01380 GOTO 1180
    0x57e1e8ae6910 ---------A T 01390 PRINT "CHANGE TO BE EFFECTED";:INPUT S2
    0x57e1e8ae6cf0 ---------A   01400 IF (S1+S2)>S0 THEN 2550
    0x57e1e8ae7050 ---------A   01410 S1=S1+S2
    0x57e1e8ae70c0 ---------A   01420 GOTO 1180
    0x57e1e8ae78a0 ---------A T 01430 F0=P1*(Z/R)^1.5
    0x57e1e8ae7910 ---------A   01440 REM
    0x57e1e8ae81a0 ---------A   01450 D0=(2*F0+3*F0*RND(0))/5
    0x57e1e8ae8510 ---------A   01460 D=D+D0
    0x57e1e8ae8770 ---------A   01470 PRINT "SCANNERS REPORT ENEMY DAMAGE NOW:";D
    0x57e1e8ae89c0 ---------A   01480 IF D>99 THEN 2720
    0x57e1e8ae8a40 ---------A   01490 GOTO 1510
    0x57e1e8ae8c40 ---------A T 01500 D0=0
    0x57e1e8ae8cb0 ---------A T 01510 REM
    0x57e1e8ae9430 ---------A   01520 K=E1+E2*RND(0)
    0x57e1e8ae94a0 ---------A   01530 REM
    0x57e1e8aea0f0 ---------A   01540 E=E3+E4*RND(0)+5/P0*RND(0)
    0x57e1e8aea160 ---------A   01550 REM
    0x57e1e8aea7f0 ---------A   01560 F3=E*(K/R)^1.85
    0x57e1e8aeb120 ---------A   01570 D2=(3*F3+3*F3*RND(0))/5.5
    0x57e1e8aeb480 ---------A   01580 D1=D1+D2
    0x57e1e8aec2a0 ---------A   01590 IF (Z*D0)/(R*500)>2.2 THEN 1620
    0x57e1e8aeca20 ---------A   01600 D3=D0*2/(R^2*P0)
    0x57e1e8aecda0 ---------A   01610 D1=D1+D3
    0x57e1e8aed010 ---------A T 01620 PRINT "DAMAGE CONTROL REPORTS YOUR VESSEL DAMAGE AT:";D1
    0x57e1e8aed260 ---------A   01630 IF D1>99 THEN 2740
    0x57e1e8aed4c0 ---------A   01640 IF D>99 THEN 2760
    0x57e1e8aed560 ---------A   01650 GOTO 1300
    0x57e1e8aed6e0 ---------A T 01660 PRINT "SELF DESTRUCT FAILSAFE ACTIVATED!!"
    0x57e1e8aeda50 ---------A   01670 PRINT "INPUT 1 TO RELEASE FAILSAFE";:INPUT U
    0x57e1e8aedcb0 ---------A   01680 IF U=1 THEN 1700
    0x57e1e8aedd50 ---------A   01690 GOTO 1290
    0x57e1e8aedea0 ---------A T 01700 PRINT "SELF DESTRUCT ACCOMPLISHED."
    0x57e1e8aee110 ---------A   01710 IF R>60 THEN 1740
    0x57e1e8aee280 ---------A T 01720 PRINT "ENEMY VESSEL ALSO DESTROYED."
    0x57e1e8aee2f0 ---------A   01730 GOTO 2760
    0x57e1e8aee6d0 ---------A T 01740 D4=3200/R
    0x57e1e8aeea20 ---------A   01750 D=D+D4
    0x57e1e8aeec90 ---------A   01760 IF D>99 THEN 1720
    0x57e1e8aef000 ---------A   01770 PRINT "ENEMY VESSEL SURVIVES WITH";D;"DAMAGE."
    0x57e1e8aef070 ---------A   01780 GOTO 2760
    0x57e1e8aef270 ---------A T 01790 S0=10
    0x57e1e8aef480 ---------A   01800 C0=16
    0x57e1e8aef690 ---------A   01810 P0=1
    0x57e1e8aef700 ---------A   01820 GOTO 970
    0x57e1e8aef900 ---------A T 01830 S0=4
    0x57e1e8aefb10 ---------A   01840 C0=24
    0x57e1e8aefd20 ---------A   01850 P0=2
    0x57e1e8aefd90 ---------A   01860 GOTO 970
    0x57e1e8aeff90 ---------A T 01870 S0=2
    0x57e1e8af01a0 ---------A   01880 C0=30
    0x57e1e8af03b0 ---------A   01890 P0=5
    0x57e1e8af0420 ---------A   01900 GOTO 970
    0x57e1e8af0620 ---------A T 01910 C1=12
    0x57e1e8af0690 ---------A   01930 GOTO 1060
    0x57e1e8af0890 ---------A T 01940 P1=4
    0x57e1e8af0ae0 ---------A   01950 IF N1=0 THEN 2160
    0x57e1e8af0e20 ---------A   01960 N1=N1-1
    0x57e1e8af1030 ---------A   01970 Z=200
    0x57e1e8af10a0 ---------A   01980 GOTO 1430
    0x57e1e8af13e0 ---------A T 01990 N1=N1+N
    0x57e1e8af1450 ---------A   02000 GOTO 1130
    0x57e1e8af1650 ---------A T 02010 C1=4
    0x57e1e8af16c0 ---------A   02020 GOTO 1060
    0x57e1e8af18c0 ---------A T 02030 P1=20
    0x57e1e8af1b10 ---------A   02040 IF N2=0 THEN 2640
    0x57e1e8af1e50 ---------A   02050 N2=N2-1
    0x57e1e8af2060 ---------A   02060 Z=500
    0x57e1e8af20d0 ---------A   02070 GOTO 1430
    0x57e1e8af2410 ---------A T 02080 N2=N2+N
    0x57e1e8af2480 ---------A   02090 GOTO 1130
    0x57e1e8af2680 ---------A T 02100 C1=4
    0x57e1e8af26f0 ---------A   02110 GOTO 1060
    0x57e1e8af28f0 ---------A T 02120 P1=16
    0x57e1e8af2b40 ---------A   02130 IF N3=0 THEN 2660
    0x57e1e8af2e80 ---------A   02140 N3=N3-1
    0x57e1e8af3090 ---------A   02150 Z=550
    0x57e1e8af3100 ---------A T 02160 GOTO 1430
    0x57e1e8af3440 ---------A T 02170 N3=N3+N
    0x57e1e8af34b0 ---------A   02180 GOTO 1130
    0x57e1e8af36b0 ---------A T 02190 C1=2
    0x57e1e8af3720 ---------A   02200 GOTO 1060
    0x57e1e8af3920 ---------A T 02210 P1=10
    0x57e1e8af3c50 ---------A   02220 IF N4=O THEN 2680
    0x57e1e8af3f90 ---------A   02230 N4=N4-1
    0x57e1e8af41a0 ---------A   02240 Z=400
    0x57e1e8af4210 ---------A   02250 GOTO 1430
    0x57e1e8af4550 ---------A T 02260 N4=N4+N
    0x57e1e8af45c0 ---------A   02270 GOTO 1130
    0x57e1e8af47c0 ---------A T 02280 C1=.2
    0x57e1e8af49d0 ---------A   02290 N=100
    0x57e1e8af4a40 ---------A   02300 GOTO 1060
    0x57e1e8af4c40 ---------A T 02310 P1=6
    0x57e1e8af4f50 ---------A   02320 IF N5=0 THEN 2700
    0x57e1e8af5290 ---------A   02330 N5=N5-1
    0x57e1e8af54a0 ---------A   02340 Z=250
    0x57e1e8af5510 ---------A   02350 GOTO 1430
    0x57e1e8af5850 ---------A T 02360 N5=N5+N
    0x57e1e8af58c0 ---------A   02370 GOTO 1130
    0x57e1e8af5ac0 ---------A T 02380 E1=150
    0x57e1e8af5cd0 ---------A   02390 E2=500
    0x57e1e8af5ee0 ---------A   02400 E3=3
    0x57e1e8af60f0 ---------A   02410 E4=4
    0x57e1e8af6160 ---------A   02420 GOTO 850
    0x57e1e8af6360 ---------A T 02430 E1=200
    0x57e1e8af6570 ---------A   02440 E2=350
    0x57e1e8af6780 ---------A   02450 E3=4
    0x57e1e8af6990 ---------A   02460 E4=3
    0x57e1e8af6a00 ---------A   02470 GOTO 850
    0x57e1e8af6c00 ---------A T 02480 E1=150
    0x57e1e8af6e10 ---------A   02490 E2=400
    0x57e1e8af7020 ---------A   02500 E3=5
    0x57e1e8af7230 ---------A   02510 E4=2
    0x57e1e8af72c0 ---------A   02520 GOTO 850
    0x57e1e8af7410 ---------A T 02530 PRINT "NOT ENOUGH SPACE. RESELECT."
    0x57e1e8af74a0 ---------A   02540 GOTO 980
    0x57e1e8af7600 ---------A T 02550 PRINT "CHANGE BEYOND MAXIMUM POSSIBLE."
    0x57e1e8af7760 ---------A   02560 PRINT "INCREASING TO MAXIMUM."
    0x57e1e8af7990 ---------A   02570 S1=S0
    0x57e1e8af7a20 ---------A   02580 GOTO 1300
    0x57e1e8af7b80 ---------A T 02590 PRINT "OUT OF SENSOR RANGE. AUTOMATIC DISENGAGE."
    0x57e1e8af7c00 ---------A   02600 GOTO 2760
    0x57e1e8af7d60 ----------   02610 PRINT "PHASER BANKS DRAINED."
    0x57e1e8af7ec0 ---------A T 02620 PRINT "SELECT ANOTHER COURSE OF ACTION."
    0x57e1e8af7f50 ---------A   02630 GOTO 1200
    0x57e1e8af80a0 ---------A T 02640 PRINT " ALL ANTI-MATTER MISSLES EXPENDED."
    0x57e1e8af8130 ---------A   02650 GOTO 2620
    0x57e1e8af8280 ---------A T 02660 PRINT "ALL HYPERSPACE LANCES EXPENDED."
    0x57e1e8af8310 ---------A   02670 GOTO 2620
    0x57e1e8af8460 ---------A T 02680 PRINT "ALL PHOTON TORPEDO TUBES EMPTY."
    0x57e1e8af84f0 ---------A   02690 GOTO 2620
    0x57e1e8af8640 ---------A T 02700 PRINT "HYPERON NEUTRALIZATION FIELD DRAINED."
    0x57e1e8af86c0 ---------A   02710 GOTO 2620
    0x57e1e8af8810 ---------A T 02720 PRINT "ENEMY VESSEL DESTROYED!"
    0x57e1e8af88a0 ---------A   02730 GOTO 1510
    0x57e1e8af8a00 ---------A T 02740 PRINT "YOUR VESSEL HAS BEEN DESTROYED!"
    0x57e1e8af8d70 ---------A T 02760 PRINT "ANOTHER BATTLE";:INPUT R$
    0x57e1e8af91b0 ---------A   02770 IF LEFT$(R$,1)="Y" THEN 810
    0x57e1e8af93b0 ---------A   02780 PRINT:PRINT "TRY AGAIN LATER!":PRINT
    0x57e1e8af9450 ---------A   02790 GOTO 65000
    0x57e1e8af96b0 ---------B G 10000 PRINT:LINE INPUT "ENTER 'RETURN' TO CONTINUE. ";XX$
    0x57e1e8af98f0 ---------B   10010 PRINT CHR$(26)
    0x57e1e8af9940 ---------B   10020 RETURN
    0x57e1e8af99a0 ---------A T 65000 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00610      00180T
     00640      00600T
     00770      00620T
     00810      02770T
     00850      02420T, 02470T, 02520T
     00920      00960T
     00970      01820T, 01860T, 01900T
     00980      01050T, 01130T, 02540T
     01060      01930T, 02020T, 02110T, 02200T, 02300T
     01130      02000T, 02090T, 02180T, 02270T, 02370T
     01180      01380T, 01420T
     01200      02630T
     01290      01690T
     01300      01650T, 02580T
     01330      01300T
     01340      01320T
     01370      01350T
     01390      01210T
     01430      01980T, 02070T, 02160T, 02250T, 02350T
     01500      01290T
     01510      01490T, 02730T
     01620      01590T
     01660      01210T
     01700      01680T
     01720      01760T
     01740      01710T
     01790      00930T
     01830      00930T
     01870      00930T
     01910      01000T
     01940      01210T
     01990      01080T
     02010      01000T
     02030      01210T
     02080      01080T
     02100      01000T
     02120      01210T
     02160      01950T
     02170      01080T
     02190      01000T
     02210      01210T
     02260      01080T
     02280      01000T
     02310      01210T
     02360      01120T
     02380      00820T
     02430      00830T
     02480      00840T
     02530      01060T
     02550      01400T
     02590      01340T
     02620      02650T, 02670T, 02690T, 02710T
     02640      02040T
     02660      02130T
     02680      02220T
     02700      02320T
     02720      01480T
     02740      01630T
     02760      01210T, 01640T, 01730T, 01780T, 02600T
     10000      00360G, 00545G
     65000      02790T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x57e1e8ad1db0 (00100)   0x57e1e8ad1db0 (00100)   0x57e1e8af99a0 (65000)   0x57e1e8af99a0 (65000)   
   B) 0x57e1e8af96b0 (10000)   0x57e1e8af96b0 (10000)   0x57e1e8af9940 (10020)   0x57e1e8af9940 (10020)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03520 - 10000    6490 

 */



/*
 *  Symbol Table Listing for 'basic/dspace.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Integer     
    C0                       Integer     
    C1                       Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    D0                       Integer     
    D1                       Integer     
    D2                       Integer     
    D3                       Integer     
    D4                       Integer     
    E                        Integer     
    E1                       Integer     
    E2                       Integer     
    E3                       Integer     
    E4                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F0                       Integer     
    F3                       Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I$                       String      
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
    M$                       String      
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    N1                       Integer     
    N2                       Integer     
    N3                       Integer     
    N4                       Integer     
    N5                       Integer     
    O                        Integer     
    OCT$            Function String          args=1, float  
    P0                       Integer     
    P1                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
    R$                       String      
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
    S0                       Integer     
    S1                       Integer     
    S2                       Integer     
    S9                       Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    XX$                      String      
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/dspace.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57e1e8ad1db0 ---------A   01000 PRINT CHR$(26);TAB(24);"DEEPSPACE"
    0x57e1e8ad0b80 ---------A   01010 PRINT TAB(20);"CREATIVE COMPUTING"
    0x57e1e8ad1f30 ---------A   01020 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x57e1e8ad20b0 ---------A   01030 PRINT:PRINT
    0x57e1e8acfe40 ---------A   01040 PRINT "THIS IS DEEPSPACE, A TACTICAL SIMULATION OF SHIP TO SHIP"
    0x57e1e8ad16a0 ---------A   01050 PRINT "COMBAT IN DEEP SPACE."
    0x57e1e8ad1730 ---------A   01060 PRINT
    0x57e1e8acf6d0 ---------A   01070 PRINT "DO YOU WISH INSTRUCTIONS";:INPUT I$
    0x57e1e8acf670 ---------A   01080 IF LEFT$(I$,1)="N" THEN 1510
    0x57e1e8ad7b20 ---------A   01090 PRINT CHR$(26)
    0x57e1e8ad7cd0 ---------A   01100 PRINT "YOU ARE ONE OF A GROUP OF CAPTAINS ASSIGNED TO PATROL A"
    0x57e1e8ad7e70 ---------A   01110 PRINT "SECTION OF YOUR STAR EMPIRE'S BORDER AGAINST HOSTILE"
    0x57e1e8ad8020 ---------A   01120 PRINT "ALIENS. ALL YOUR ENCOUNTERS HERE WILL BE AGAINST HOSTILE"
    0x57e1e8ad81d0 ---------A   01130 PRINT "VESSELS. YOU WILL FIRST BE REQUIRED TO SELECT A VESSEL"
    0x57e1e8ad8380 ---------A   01140 PRINT "FROM ONE OF THREE TYPES, EACH WITH ITS OWN CHARACTERISTICS:"
    0x57e1e8ad87f0 ---------A   01150 PRINT:PRINT "    TYPE","SPEED","CARGO SPACE","PROTECTION"
    0x57e1e8ad8c60 ---------A   01160 PRINT "   ------","-----","-----------","----------"
    0x57e1e8ad90d0 ---------A   01170 PRINT "1- SCOUT"," 10X","     16","    1"
    0x57e1e8ad9540 ---------A   01180 PRINT "2- CRUISER","  4X","     24","    2"
    0x57e1e8ad99c0 ---------A   01190 PRINT "3- BATTLESHIP","  2X","     30","    5"
    0x57e1e8ad9bb0 ---------A   01200 PRINT:PRINT "SPEED IS GIVEN RELATIVE TO THE OTHER SHIPS."
    0x57e1e8ad9d10 ---------A   01210 PRINT "CARGO SPACE IS IN UNITS OF SPACE ABOARD SHIP WHICH CAN BE"
    0x57e1e8ad9e90 ---------A   01220 PRINT "FILLED WITH WEAPONS."
    0x57e1e8ad9ff0 ---------A   01230 PRINT "PROTECTION IS THE RELATIVE STRENGTH OF THE SHIP'S ARMOR"
    0x57e1e8ada140 ---------A   01240 PRINT "AND FORCE FIELDS."
    0x57e1e8ada1f0 ---------A   01250 GOSUB 3480
    0x57e1e8ada3d0 ---------A   01260 PRINT:PRINT "ONCE A SHIP HAS BEEN SELECTED, YOU WILL BE INSTRUCTED TO ARM"
    0x57e1e8ada540 ---------A   01270 PRINT "IT WITH WEAPONRY FROM THE FOLLOWING LIST:"
    0x57e1e8ada5e0 ---------A   01280 PRINT
    0x57e1e8ada790 ---------A   01290 PRINT "     TYPE                    CARGO SPACE    REL. STRENGTH"
    0x57e1e8ada940 ---------A   01300 PRINT "    ------                   -----------    -------------"
    0x57e1e8adaae0 ---------A   01310 PRINT "1- PHASER BANKS                   12                4"
    0x57e1e8adac80 ---------A   01320 PRINT "2- ANTI-MATTER MISSILE             4               20"
    0x57e1e8adb030 ---------A   01330 PRINT "3- HYPERSPACE LANCE                4               16"
    0x57e1e8adb1d0 ---------A   01340 PRINT "4- PHOTON TORPEDO                  2               10"
    0x57e1e8adb380 ---------A   01350 PRINT "5- HYPERON NEUTRALIZATION FIELD   20                6"
    0x57e1e8adb570 ---------A   01360 PRINT:PRINT "WEAPONS #1 & #5 CAN BE FIRED 100 TIMES EACH; ALL OTHERS CAN"
    0x57e1e8adb6a0 ---------A   01370 PRINT "BE FIRED ONCE FOR EACH ON BOARD."
    0x57e1e8adb740 ---------A   01380 PRINT
    0x57e1e8adb8d0 ---------A   01390 PRINT "A TYPICAL LOAD FOR A CRUISER MIGHT CONSIST OF:"
    0x57e1e8adba60 ---------A   01400 PRINT "          1-#1 PHASER BANK          = 12"
    0x57e1e8adbbf0 ---------A   01410 PRINT "          2-#3 HYPERSPACE LANCES    =  8"
    0x57e1e8adbd80 ---------A   01420 PRINT "          2-#4 PHOTON TORPEDOES     =  4"
    0x57e1e8adbf20 ---------A   01430 PRINT "                                  ---------"
    0x57e1e8adc090 ---------A   01440 PRINT "                              24 UNITS OF CARGO"
    0x57e1e8adc140 ---------A   01450 GOSUB 3480
    0x57e1e8adc2e0 ---------A   01460 PRINT " A WORD OF CAUTION: FIRING HIGH YIELD WEAPONS AT CLOSE (<100)"
    0x57e1e8adc490 ---------A   01470 PRINT "RANGE CAN BE DANGEROUS TO YOUR SHIP AND MINIMAL DAMAGE CAN"
    0x57e1e8adc630 ---------A   01480 PRINT "OCCUR AS FAR OUT AS 200 IN SOME CIRCUMSTANCES."
    0x57e1e8adc7f0 ---------A   01490 PRINT:PRINT "RANGE IS GIVEN IN THOUSANDS OF KILOMETERS."
    0x57e1e8adc880 ---------A   01500 GOTO 1530
    0x57e1e8adcbf0 ---------A T 01510 PRINT "DO YOU WISH A MANEUVER CHART";:INPUT M$
    0x57e1e8add010 ---------A   01520 IF LEFT$(M$,1)="N" THEN 1640
    0x57e1e8add0c0 ---------A T 01530 PRINT
    0x57e1e8add350 ---------A   01540 PRINT "     MANEUVER CHART":PRINT "     --------------"
    0x57e1e8add4c0 ---------A   01550 PRINT " 1      FIRE PHASERS"
    0x57e1e8add640 ---------A   01560 PRINT " 2      FIRE ANTI-MATTER MISSILE"
    0x57e1e8add7b0 ---------A   01570 PRINT " 3      FIRE HYPERSPACE LANCE"
    0x57e1e8add930 ---------A   01580 PRINT " 4      FIRE PHOTON TORPEDO"
    0x57e1e8addab0 ---------A   01590 PRINT " 5      ACTIVE HYPERON NEUTRALIZATION FIELD"
    0x57e1e8addc10 ---------A   01600 PRINT " 6      SELF-DESTRUCT"
    0x57e1e8addd80 ---------A   01610 PRINT " 7      CHANGE VELOCITY"
    0x57e1e8addee0 ---------A   01620 PRINT " 8      DISENGAGE"
    0x57e1e8ade060 ---------A   01630 PRINT " 9      PROCEED"
    0x57e1e8ade220 ---------A T 01640 PRINT:PRINT "YOU HAVE A CHOICE OF THREE SYSTEMS TO PATROL."
    0x57e1e8ade780 ---------A   01650 PRINT "1 - ORION"
    0x57e1e8ade8e0 ---------A   01660 PRINT "2 - DENEB"
    0x57e1e8adea50 ---------A   01670 PRINT "3 - ARCTURUS"
    0x57e1e8adedb0 ---------A T 01680 PRINT "SELECT A SYSTEM (1-3)";:INPUT S9
    0x57e1e8adf010 ---------A   01690 IF S9=1 THEN 3070
    0x57e1e8adf270 ---------A   01700 IF S9=2 THEN 3120
    0x57e1e8adf2f0 ---------A   01710 GOTO 3170
    0x57e1e8adf5b0 ---------A T 01720 D0=0
    0x57e1e8adf880 ---------A   01730 D1=0
    0x57e1e8adfb50 ---------A   01740 N1=0
    0x57e1e8adfe20 ---------A   01750 N2=0
    0x57e1e8ae00f0 ---------A   01760 N3=0
    0x57e1e8ae03c0 ---------A   01770 N4=0
    0x57e1e8ae06c0 ---------A   01780 D=0
    0x57e1e8ae0a40 ---------A T 01790 PRINT "WHICH SPACECRAFT WOULD YOU LIKE (1-3)";:INPUT S
    0x57e1e8ae0de0 ---------A   01800 ON S GOTO 2490,2530,2570
    0x57e1e8ae0e50 ---------A   01810 GOTO 1790
    0x57e1e8ae1220 ---------A T 01820 C=C0
    0x57e1e8ae15c0 ---------A T 01830 PRINT "YOU HAVE";C;"UNITS OF CARGO SPACE TO FILL WITH WEAPONRY."
    0x57e1e8ae1af0 ---------A   01840 PRINT "CHOOSE A WEAPON AND THE AMOUNT YOU WISH";:INPUT W,N
    0x57e1e8ae2010 ---------A   01850 ON W GOTO 2610,2700,2790,2880,2970
    0x57e1e8ae2090 ---------A   01860 GOTO 1830
    0x57e1e8ae24d0 ---------A T 01870 IF N*C1>C THEN 3220
    0x57e1e8ae2960 ---------A   01880 C=C-N*C1
    0x57e1e8ae2db0 ---------A   01890 ON W GOTO 2680,2770,2860,2950
    0x57e1e8ae2e20 ---------A   01900 GOTO 3050
    0x57e1e8ae3060 ---------A T 01910 IF C>1 THEN 1830
    0x57e1e8ae30e0 ---------A   01920 REM
    0x57e1e8ae3680 ---------A   01930 S1=S0*RND(0)
    0x57e1e8ae3d80 ---------A   01940 R=(3*RND(0)+5)*100
    0x57e1e8ae4030 ---------A T 01950 PRINT:PRINT "RANGE TO TARGET:";R
    0x57e1e8ae4290 ---------A   01960 PRINT "RELATIVE VELOCITY:";S1
    0x57e1e8ae4610 ---------A T 01970 PRINT "ACTION";:INPUT M
    0x57e1e8ae4d70 ---------A   01980 ON M GOTO 2630,2720,2810,2900,3000,2360,2090,3430
    0x57e1e8ae4fc0 ---------A T 01990 IF R<500 THEN 2200
    0x57e1e8ae5220 ---------A T 02000 IF S1>0 THEN 2030
    0x57e1e8ae57c0 ---------A   02010 R=R+(S1*8.3)^1.25
    0x57e1e8ae5830 ---------A   02020 GOTO 2040
    0x57e1e8ae5dc0 ---------A T 02030 R=R-(S1*8.3)^1.25
    0x57e1e8ae6010 ---------A T 02040 IF R>1500 THEN 3280
    0x57e1e8ae6270 ---------A   02050 IF R>0 THEN 2070
    0x57e1e8ae64b0 ---------A   02060 R=-R
    0x57e1e8ae6520 ---------A T 02070 PRINT
    0x57e1e8ae65b0 ---------A   02080 GOTO 1950
    0x57e1e8ae6910 ---------A T 02090 PRINT "CHANGE TO BE EFFECTED";:INPUT S2
    0x57e1e8ae6cf0 ---------A   02100 IF (S1+S2)>S0 THEN 3240
    0x57e1e8ae7050 ---------A   02110 S1=S1+S2
    0x57e1e8ae70c0 ---------A   02120 GOTO 1950
    0x57e1e8ae78a0 ---------A T 02130 F0=P1*(Z/R)^1.5
    0x57e1e8ae7910 ---------A   02140 REM
    0x57e1e8ae81a0 ---------A   02150 D0=(2*F0+3*F0*RND(0))/5
    0x57e1e8ae8510 ---------A   02160 D=D+D0
    0x57e1e8ae8770 ---------A   02170 PRINT "SCANNERS REPORT ENEMY DAMAGE NOW:";D
    0x57e1e8ae89c0 ---------A   02180 IF D>99 THEN 3400
    0x57e1e8ae8a40 ---------A   02190 GOTO 2220
    0x57e1e8ae8c40 ---------A T 02200 D0=0
    0x57e1e8ae8cb0 ---------A   02210 REM
    0x57e1e8ae9430 ---------A T 02220 K=E1+E2*RND(0)
    0x57e1e8ae94a0 ---------A   02230 REM
    0x57e1e8aea0f0 ---------A   02240 E=E3+E4*RND(0)+5/P0*RND(0)
    0x57e1e8aea160 ---------A   02250 REM
    0x57e1e8aea7f0 ---------A   02260 F3=E*(K/R)^1.85
    0x57e1e8aeb120 ---------A   02270 D2=(3*F3+3*F3*RND(0))/5.5
    0x57e1e8aeb480 ---------A   02280 D1=D1+D2
    0x57e1e8aec2a0 ---------A   02290 IF (Z*D0)/(R*500)>2.2 THEN 2320
    0x57e1e8aeca20 ---------A   02300 D3=D0*2/(R^2*P0)
    0x57e1e8aecda0 ---------A   02310 D1=D1+D3
    0x57e1e8aed010 ---------A T 02320 PRINT "DAMAGE CONTROL REPORTS YOUR VESSEL DAMAGE AT:";D1
    0x57e1e8aed260 ---------A   02330 IF D1>99 THEN 3420
    0x57e1e8aed4c0 ---------A   02340 IF D>99 THEN 3430
    0x57e1e8aed560 ---------A   02350 GOTO 2000
    0x57e1e8aed6e0 ---------A T 02360 PRINT "SELF DESTRUCT FAILSAFE ACTIVATED!!"
    0x57e1e8aeda50 ---------A   02370 PRINT "INPUT 1 TO RELEASE FAILSAFE";:INPUT U
    0x57e1e8aedcb0 ---------A   02380 IF U=1 THEN 2400
    0x57e1e8aedd50 ---------A   02390 GOTO 1990
    0x57e1e8aedea0 ---------A T 02400 PRINT "SELF DESTRUCT ACCOMPLISHED."
    0x57e1e8aee110 ---------A   02410 IF R>60 THEN 2440
    0x57e1e8aee280 ---------A T 02420 PRINT "ENEMY VESSEL ALSO DESTROYED."
    0x57e1e8aee2f0 ---------A   02430 GOTO 3430
    0x57e1e8aee6d0 ---------A T 02440 D4=3200/R
    0x57e1e8aeea20 ---------A   02450 D=D+D4
    0x57e1e8aeec90 ---------A   02460 IF D>99 THEN 2420
    0x57e1e8aef000 ---------A   02470 PRINT "ENEMY VESSEL SURVIVES WITH";D;"DAMAGE."
    0x57e1e8aef070 ---------A   02480 GOTO 3430
    0x57e1e8aef270 ---------A T 02490 S0=10
    0x57e1e8aef480 ---------A   02500 C0=16
    0x57e1e8aef690 ---------A   02510 P0=1
    0x57e1e8aef700 ---------A   02520 GOTO 1820
    0x57e1e8aef900 ---------A T 02530 S0=4
    0x57e1e8aefb10 ---------A   02540 C0=24
    0x57e1e8aefd20 ---------A   02550 P0=2
    0x57e1e8aefd90 ---------A   02560 GOTO 1820
    0x57e1e8aeff90 ---------A T 02570 S0=2
    0x57e1e8af01a0 ---------A   02580 C0=30
    0x57e1e8af03b0 ---------A   02590 P0=5
    0x57e1e8af0420 ---------A   02600 GOTO 1820
    0x57e1e8af0620 ---------A T 02610 C1=12
    0x57e1e8af0690 ---------A   02620 GOTO 1870
    0x57e1e8af0890 ---------A T 02630 P1=4
    0x57e1e8af0ae0 ---------A   02640 IF N1=0 THEN 2850
    0x57e1e8af0e20 ---------A   02650 N1=N1-1
    0x57e1e8af1030 ---------A   02660 Z=200
    0x57e1e8af10a0 ---------A   02670 GOTO 2130
    0x57e1e8af13e0 ---------A T 02680 N1=N1+N
    0x57e1e8af1450 ---------A   02690 GOTO 1910
    0x57e1e8af1650 ---------A T 02700 C1=4
    0x57e1e8af16c0 ---------A   02710 GOTO 1870
    0x57e1e8af18c0 ---------A T 02720 P1=20
    0x57e1e8af1b10 ---------A   02730 IF N2=0 THEN 3320
    0x57e1e8af1e50 ---------A   02740 N2=N2-1
    0x57e1e8af2060 ---------A   02750 Z=500
    0x57e1e8af20d0 ---------A   02760 GOTO 2130
    0x57e1e8af2410 ---------A T 02770 N2=N2+N
    0x57e1e8af2480 ---------A   02780 GOTO 1910
    0x57e1e8af2680 ---------A T 02790 C1=4
    0x57e1e8af26f0 ---------A   02800 GOTO 1870
    0x57e1e8af28f0 ---------A T 02810 P1=16
    0x57e1e8af2b40 ---------A   02820 IF N3=0 THEN 3340
    0x57e1e8af2e80 ---------A   02830 N3=N3-1
    0x57e1e8af3090 ---------A   02840 Z=550
    0x57e1e8af3100 ---------A T 02850 GOTO 2130
    0x57e1e8af3440 ---------A T 02860 N3=N3+N
    0x57e1e8af34b0 ---------A   02870 GOTO 1910
    0x57e1e8af36b0 ---------A T 02880 C1=2
    0x57e1e8af3720 ---------A   02890 GOTO 1870
    0x57e1e8af3920 ---------A T 02900 P1=10
    0x57e1e8af3c50 ---------A   02910 IF N4=O THEN 3360
    0x57e1e8af3f90 ---------A   02920 N4=N4-1
    0x57e1e8af41a0 ---------A   02930 Z=400
    0x57e1e8af4210 ---------A   02940 GOTO 2130
    0x57e1e8af4550 ---------A T 02950 N4=N4+N
    0x57e1e8af45c0 ---------A   02960 GOTO 1910
    0x57e1e8af47c0 ---------A T 02970 C1=.2
    0x57e1e8af49d0 ---------A   02980 N=100
    0x57e1e8af4a40 ---------A   02990 GOTO 1870
    0x57e1e8af4c40 ---------A T 03000 P1=6
    0x57e1e8af4f50 ---------A   03010 IF N5=0 THEN 3380
    0x57e1e8af5290 ---------A   03020 N5=N5-1
    0x57e1e8af54a0 ---------A   03030 Z=250
    0x57e1e8af5510 ---------A   03040 GOTO 2130
    0x57e1e8af5850 ---------A T 03050 N5=N5+N
    0x57e1e8af58c0 ---------A   03060 GOTO 1910
    0x57e1e8af5ac0 ---------A T 03070 E1=150
    0x57e1e8af5cd0 ---------A   03080 E2=500
    0x57e1e8af5ee0 ---------A   03090 E3=3
    0x57e1e8af60f0 ---------A   03100 E4=4
    0x57e1e8af6160 ---------A   03110 GOTO 1720
    0x57e1e8af6360 ---------A T 03120 E1=200
    0x57e1e8af6570 ---------A   03130 E2=350
    0x57e1e8af6780 ---------A   03140 E3=4
    0x57e1e8af6990 ---------A   03150 E4=3
    0x57e1e8af6a00 ---------A   03160 GOTO 1720
    0x57e1e8af6c00 ---------A T 03170 E1=150
    0x57e1e8af6e10 ---------A   03180 E2=400
    0x57e1e8af7020 ---------A   03190 E3=5
    0x57e1e8af7230 ---------A   03200 E4=2
    0x57e1e8af72c0 ---------A   03210 GOTO 1720
    0x57e1e8af7410 ---------A T 03220 PRINT "NOT ENOUGH SPACE. RESELECT."
    0x57e1e8af74a0 ---------A   03230 GOTO 1830
    0x57e1e8af7600 ---------A T 03240 PRINT "CHANGE BEYOND MAXIMUM POSSIBLE."
    0x57e1e8af7760 ---------A   03250 PRINT "INCREASING TO MAXIMUM."
    0x57e1e8af7990 ---------A   03260 S1=S0
    0x57e1e8af7a20 ---------A   03270 GOTO 2000
    0x57e1e8af7b80 ---------A T 03280 PRINT "OUT OF SENSOR RANGE. AUTOMATIC DISENGAGE."
    0x57e1e8af7c00 ---------A   03290 GOTO 3430
    0x57e1e8af7ec0 ---------A T 03300 PRINT "SELECT ANOTHER COURSE OF ACTION."
    0x57e1e8af7f50 ---------A   03310 GOTO 1970
    0x57e1e8af80a0 ---------A T 03320 PRINT " ALL ANTI-MATTER MISSLES EXPENDED."
    0x57e1e8af8130 ---------A   03330 GOTO 3300
    0x57e1e8af8280 ---------A T 03340 PRINT "ALL HYPERSPACE LANCES EXPENDED."
    0x57e1e8af8310 ---------A   03350 GOTO 3300
    0x57e1e8af8460 ---------A T 03360 PRINT "ALL PHOTON TORPEDO TUBES EMPTY."
    0x57e1e8af84f0 ---------A   03370 GOTO 3300
    0x57e1e8af8640 ---------A T 03380 PRINT "HYPERON NEUTRALIZATION FIELD DRAINED."
    0x57e1e8af86c0 ---------A   03390 GOTO 3300
    0x57e1e8af8810 ---------A T 03400 PRINT "ENEMY VESSEL DESTROYED!"
    0x57e1e8af88a0 ---------A   03410 GOTO 2220
    0x57e1e8af8a00 ---------A T 03420 PRINT "YOUR VESSEL HAS BEEN DESTROYED!"
    0x57e1e8af8d70 ---------A T 03430 PRINT "ANOTHER BATTLE";:INPUT R$
    0x57e1e8af91b0 ---------A   03440 IF LEFT$(R$,1)="Y" THEN 1680
    0x57e1e8af93b0 ---------A   03450 PRINT:PRINT "TRY AGAIN LATER!":PRINT
    0x57e1e8af9450 ---------A   03460 GOTO 3470
    0x57e1e8af99a0 ---------A T 03470 END
    0x57e1e8af96b0 ---------B G 03480 PRINT:LINE INPUT "ENTER 'RETURN' TO CONTINUE. ";XX$
    0x57e1e8af98f0 ---------B   03490 PRINT CHR$(26)
    0x57e1e8b00a20 ---------B   03500 GOTO 03510
    0x57e1e8b00a60 ---------B T 03510 RETURN
 */

//---------------------------------------------------------------------------
// $Header$ 
//
// NOTE: This program has been automatically tranlated by b2c
//
// $Log$ 
// 
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    C_int;                                     // Basic: C 
int    C0_int;                                    // Basic: C0 
int    C1_int;                                    // Basic: C1 
int    D_int;                                     // Basic: D 
int    D0_int;                                    // Basic: D0 
int    D1_int;                                    // Basic: D1 
int    D2_int;                                    // Basic: D2 
int    D3_int;                                    // Basic: D3 
int    D4_int;                                    // Basic: D4 
int    E_int;                                     // Basic: E 
int    E1_int;                                    // Basic: E1 
int    E2_int;                                    // Basic: E2 
int    E3_int;                                    // Basic: E3 
int    E4_int;                                    // Basic: E4 
int    F0_int;                                    // Basic: F0 
int    F3_int;                                    // Basic: F3 
char*  I_str;                                     // Basic: I$ 
int    K_int;                                     // Basic: K 
int    M_int;                                     // Basic: M 
char*  M_str;                                     // Basic: M$ 
int    N_int;                                     // Basic: N 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    N3_int;                                    // Basic: N3 
int    N4_int;                                    // Basic: N4 
int    N5_int;                                    // Basic: N5 
int    O_int;                                     // Basic: O 
int    P0_int;                                    // Basic: P0 
int    P1_int;                                    // Basic: P1 
int    R_int;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
int    S_int;                                     // Basic: S 
int    S0_int;                                    // Basic: S0 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    S9_int;                                    // Basic: S9 
int    U_int;                                     // Basic: U 
int    W_int;                                     // Basic: W 
char*  XX_str;                                    // Basic: XX$ 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03480();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Common area load and store routines.
//---------------------------------------------------------------------------
// void  LoadCommonAreas(char* filename){
//     json_error_t error;
// 
//     // Read in the COMMON area save-file
//     json_t *root = json_load_file(filename, 0, &error);
//     if (!root) {
//         fprintf(stderr, "Error reading JSON file: %s\n",error.text);
//         return;
//     }
// 
//     // Get the number of variables read.
//     int count = json_array_size(root);
// 
//     // Read in each variable and store it...
//     for(int v=0;v<count;v++){
// 
//     }
// 
//     // Get rid of storage area
//     json_decref(root);
// };
// void  SaveCommonAreas(char* file){
// };
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_03480(){
    // 03480 PRINT:LINE INPUT "ENTER 'RETURN' TO CONTINUE. ";XX$
    // Start of Basic INPUT statement 03480
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ENTER 'RETURN' TO CONTINUE. ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&XX_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03480
    // 03490 PRINT CHR$(26)
