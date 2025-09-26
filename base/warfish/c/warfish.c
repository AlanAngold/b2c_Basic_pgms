/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/warfish/basic/warfish.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x55c911a70d10 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x55c911a70e00 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x55c911a70fc0 ---------A   00010 CLS: PRINT@413, "WARFISH"
    0x55c911a71340 ---------A   00020 PRINT: PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    0x55c911a715f0 ---------A   00030 PRINT@960, "";: INPUT "DO YOU NEED INSTRUCTIONS";I$
    0x55c911a71920 ---------A   00040 Q0=RND(0)
    0x55c911a71990 ---------A T 00050 REM
    0x55c911a75fd0 ---------A   00060 IF LEFT$(I$,1)="N" THEN CLS: GOTO 190
    0x55c911a762d0 ----------   00070 CLS:PRINTTAB(28); "WARFISH":PRINT
    0x55c911a764a0 ----------   00080 PRINT"YOU COMMAND AN AMERICAN SUBMARINE THAT HAS BEEN SENT OUT"
    0x55c911a765f0 ----------   00090 PRINT"TO ATTACK JAPANESE SHIPS AT SEA DURING WORLD WAR II."
    0x55c911a76690 ----------   00100 PRINT
    0x55c911a76810 ----------   00110 PRINT"THE ORDERS THAT CAN BE GIVEN ARE THE FOLLOWING:"
    0x55c911a76990 ----------   00120 PRINT"    PERISCOPE - TO SEARCH FOR JAPANESE SHIPS."
    0x55c911a76b10 ----------   00130 PRINT"    TORPEDO - TO LAUNCH TORPEDOES AT JAPANESE SHIPS."
    0x55c911a76c90 ----------   00140 PRINT"    DIVE - TO ESCAPE ATTACKING JAPANESE SHIPS."
    0x55c911a76e60 ----------   00150 PRINT"THESE ARE SOME HISTORIC U.S. NAVY SUBMARINES:":PRINT
    0x55c911a770f0 ----------   00160 PRINT"    TAUTOG, SILVERSIDES, CAVALLA, BLUEFISH, THRESHER"
    0x55c911a772c0 ----------   00170 PRINT"    SWORDFISH, FLASHER, TROUT, ARCHER.":PRINT
    0x55c911a77440 ----------   00180 PRINT"SELECT ONE OF THE ABOVE, OR USE A NAME OF YOUR CHOICE."
    0x55c911a775a0 ---------A T 00190 PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    0x55c911a776f0 ---------A   00200 INPUT A$
    0x55c911a778f0 ---------A   00210 T=26
    0x55c911a77d00 ---------A T 00220 D=INT(RND(0)*10)
    0x55c911a77ec0 ---------A   00230 IF D<6 THEN 380
    0x55c911a78200 ---------A   00240 IF D<>6 AND D<>7 THEN 270
    0x55c911a78420 ---------A   00250 R$="DESTROYER"
    0x55c911a78610 ---------A   00260 W=2100
    0x55c911a787d0 ---------A T 00270 IF D<>8 THEN300
    0x55c911a78970 ---------A   00280 R$="DESTROYER ESCORT"
    0x55c911a78ae0 ---------A   00290 W=1350
    0x55c911a78c90 ---------A T 00300 IF D<>9 THEN 330
    0x55c911a78e30 ---------A   00310 R$="TORPEDO BOAT"
    0x55c911a791c0 ---------A   00320 W=70
    0x55c911a794f0 ---------A T 00330 IF D=6 OR D=7 THEN 360
    0x55c911a796f0 ---------A   00340 Q=1
    0x55c911a79760 ---------A   00350 GOTO 370
    0x55c911a798e0 ---------A T 00360 Q=2
    0x55c911a79b70 ---------A T 00370 PRINT"JAPANESE"; R$; " IS ATTACKING."
    0x55c911a79d20 ---------A T 00380 IF D>=6 THEN 400
    0x55c911a7a0c0 ---------A   00390 A=INT(RND(0)*10)
    0x55c911a7a130 ---------A T 00400 REM
    0x55c911a7a2a0 ---------A T 00410 PRINT"ORDERS, COMMANDER";
    0x55c911a7a400 ---------A   00420 INPUT C$
    0x55c911a7a7b0 ---------A   00430 CLS: C$=MID$(C$,1,1)
    0x55c911a7a990 ---------A   00440 IF C$="P" THEN 480
    0x55c911a7ab80 ---------A   00450 IF C$="T" THEN 1100
    0x55c911a7ad60 ---------A   00460 IF C$="D" THEN 1370
    0x55c911a7adf0 ---------A   00470 GOTO 410
    0x55c911a7b110 ---------A T 00480 IF D>5 OR Q>0 THEN 1080
    0x55c911a7b2d0 ---------A   00490 IF A>=4 THEN 570
    0x55c911a7b480 ---------A   00500 R$="FREIGHTER"
    0x55c911a7b7b0 ---------A   00510 IF A<>0 AND A<>1 THEN 530
    0x55c911a7b930 ---------A   00520 W=6500
    0x55c911a7bae0 ---------A T 00530 IF A<>2 THEN 550
    0x55c911a7bc60 ---------A   00540 W=7500
    0x55c911a7be10 ---------A T 00550 IF A<>3 THEN 570
    0x55c911a7bfa0 ---------A   00560 W=8100
    0x55c911a7c2d0 ---------A T 00570 IF A<>7 AND A<>8 THEN 630
    0x55c911a7c470 ---------A   00580 R$="TANKER"
    0x55c911a7c620 ---------A   00590 IF A<>8 THEN 620
    0x55c911a7c7a0 ---------A   00600 W=10000
    0x55c911a7c810 ---------A   00610 GOTO 630
    0x55c911a7c980 ---------A T 00620 W=9500
    0x55c911a7ccb0 ---------A T 00630 IF A<>4 AND A<>5 THEN 690
    0x55c911a7d260 ---------A   00640 R$="TRANSPORT"
    0x55c911a7d410 ---------A   00650 IF A<>5 THEN 680
    0x55c911a7d590 ---------A   00660 W=11500
    0x55c911a7d600 ---------A   00670 GOTO 690
    0x55c911a7d760 ---------A T 00680 W=8800
    0x55c911a7d920 ---------A T 00690 IF A<>6 THEN 720
    0x55c911a7dac0 ---------A   00700 R$="AMMUNITION SHIP"
    0x55c911a7dc40 ---------A   00710 W=9650
    0x55c911a7df70 ---------A T 00720 IF A>=9 OR A=6 THEN 740
    0x55c911a7e0f0 ---------A   00730 Q=1
    0x55c911a7e2a0 ---------A T 00740 IF A<>6 THEN 760
    0x55c911a7e420 ---------A   00750 Q=1
    0x55c911a7e5d0 ---------A T 00760 IF A<9 THEN 1080
    0x55c911a7e970 ---------A   00770 E=INT(RND(0)*10)
    0x55c911a7eb20 ---------A   00780 IF E<>0 THEN 810
    0x55c911a7ecc0 ---------A   00790 R$="BATTLESHIP"
    0x55c911a7ee30 ---------A   00800 W=33500
    0x55c911a7eff0 ---------A T 00810 IF E<>1 THEN 840
    0x55c911a7f190 ---------A   00820 R$="AIRCRAFT CARRIER"
    0x55c911a7f300 ---------A   00830 W=25700
    0x55c911a7f4c0 ---------A T 00840 IF E<>2 THEN 870
    0x55c911a7f660 ---------A   00850 R$="HEAVY CRUISER"
    0x55c911a7f7d0 ---------A   00860 W=9900
    0x55c911a7f990 ---------A T 00870 IF E<>3 THEN 900
    0x55c911a7fb30 ---------A   00880 R$="LIGHT CRUISER"
    0x55c911a7fcb0 ---------A   00890 W=9600
    0x55c911a7ffe0 ---------A T 00900 IF E<>4 AND E<>5 THEN 930
    0x55c911a80180 ---------A   00910 R$="DESTROYER"
    0x55c911a80300 ---------A   00920 W=2100
    0x55c911a80630 ---------A T 00930 IF E<>6 AND E<>7 THEN 960
    0x55c911a807d0 ---------A   00940 R$="SUBMARINE"
    0x55c911a80950 ---------A   00950 W=1500
    0x55c911a80c80 ---------A T 00960 IF E<>8 AND E<>9 THEN 980
    0x55c911a80e00 ---------A   00970 W=1350
    0x55c911a80fb0 ---------A T 00980 IF E<=5 THEN 1000
    0x55c911a81140 ---------A   00990 Q=1
    0x55c911a81470 ---------A T 01000 IF E<>4 AND E<>5 THEN 1020
    0x55c911a81600 ---------A   01010 Q=2
    0x55c911a81930 ---------A T 01020 IF E<>2 AND E<>3 THEN 1040
    0x55c911a81ab0 ---------A   01030 Q=3
    0x55c911a81c60 ---------A T 01040 IF E<>1 THEN 1060
    0x55c911a81de0 ---------A   01050 W=4
    0x55c911a81f90 ---------A T 01060 IF E<>0 THEN 1080
    0x55c911a82130 ---------A   01070 Q=7
    0x55c911a82520 ---------A T 01080 PRINT"JAPANESE "; R$; " -"; W; "TONS."
    0x55c911a82590 ---------A   01090 GOTO  400
    0x55c911a82750 ---------A T 01100 IF Q>=1 THEN 1130
    0x55c911a828b0 ---------A   01110 PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    0x55c911a82a70 ---------A   01120 IF Q<1 THEN 410
    0x55c911a82c50 ---------A T 01130 PRINTT; "TORPEDOES LEFT."
    0x55c911a82db0 ---------A T 01140 PRINT"NUMBER OF TORPEDOES TO FIRE";
    0x55c911a82f10 ---------A   01150 INPUT R
    0x55c911a83300 ---------A   01160 IF R<0 OR T-R<0 THEN 1140
    0x55c911a834e0 ---------A   01170 IF R<>INT(R) THEN 1140
    0x55c911a836c0 ---------A   01180 T=T-R
    0x55c911a83a50 ---------A T 01190 S=INT(RND(0)*10)
    0x55c911a83bc0 ---------A   01200 IF S>R THEN 1190
    0x55c911a83da0 ---------A   01210 Q=Q-S
    0x55c911a83f50 ---------A   01220 IF Q<=0 THEN 1240
    0x55c911a84170 ---------A   01230 Q$="DAMAGED"
    0x55c911a84320 ---------A T 01240 IF Q>=1 THEN 1280
    0x55c911a844c0 ---------A   01250 Q$="SUNK"
    0x55c911a84710 ---------A   01260 O=O+W
    0x55c911a849c0 ---------A   01270 L=L+1
    0x55c911a85500 ---------A T 01280 PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    0x55c911a856b0 ---------A   01290 IF S<>0 THEN 1310
    0x55c911a85730 ---------A   01300 PRINT
    0x55c911a858f0 ---------A T 01310 IF S<=0 THEN 1330
    0x55c911a85d00 ---------A   01320 PRINT"- ";R$;" ";Q$; "."
    0x55c911a86030 ---------A T 01330 IF D>5 AND Q>0 THEN 1560
    0x55c911a861f0 ---------A   01340 IF T<1 THEN 1580
    0x55c911a863b0 ---------A   01350 IF Q<1 THEN 220
    0x55c911a86430 ---------A   01360 GOTO  400
    0x55c911a865f0 ---------A T 01370 IF D>=6 THEN 1390
    0x55c911a86890 ---------A   01380 PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    0x55c911a86a50 ---------A T 01390 IF D<6 THEN 410
    0x55c911a86ef0 ---------A   01400 U=INT(RND(0)*10)*250
    0x55c911a87330 ---------A   01410 PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    0x55c911a87760 ---------A   01420 FOR XX=1 TO 63:PRINT"=";:NEXT
    0x55c911a87c00 ---------A T 01430 PRINTU;"YARDS"; TAB(32);Z;"FEET"
    0x55c911a87e10 ---------A   01440 U=U-250
    0x55c911a88030 ---------A   01450 Z=Z+25
    0x55c911a881f0 ---------A   01460 IF U>-250 THEN 1430
    0x55c911a883e0 ---------A   01470 IF R$="TORPEDO BOAT" THEN 1510
    0x55c911a88950 ---------A   01480 N=INT(RND(0)*10)*25+50
    0x55c911a88dc0 ---------A   01490 IF N+26>Z AND N-26<Z THEN 1540
    0x55c911a890b0 ---------A   01500 U=0:Z=0
    0x55c911a89390 ---------A T 01510 PRINT:PRINT"THE USS ";A$;" IS UNHURT."
    0x55c911a89500 ---------A   01520 Q=0
    0x55c911a895a0 ---------A   01530 GOTO 220
    0x55c911a89870 ---------A T 01540 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
    0x55c911a898f0 ---------A   01550 GOTO 1610
    0x55c911a89c10 ---------A T 01560 FOR I=1 TO 1500:NEXT I
    0x55c911a89f30 ---------A   01565 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
    0x55c911a89fb0 ---------A   01570 GOTO 1610
    0x55c911a8a250 ---------A T 01580 FOR I=1 TO 1500:NEXT I
    0x55c911a8a570 ---------A   01585 CLS:PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
    0x55c911a8a750 ---------A   01590 IF O<=0 THEN 1610
    0x55c911a8a900 ---------A   01600 PRINT:PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
    0x55c911a8a9a0 ---------A T 01610 PRINT
    0x55c911a8adb0 ---------A   01620 PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
    0x55c911a8b050 ---------A   01630 PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
    0x55c911a8b130 ---------A   01640 PRINT:PRINT
    0x55c911a8b2d0 ---------A   01650 INPUT "DO YOU WANT TO TRY AGAIN";ANS$
    0x55c911a8b5d0 ---------A   01660 IF LEFT$(ANS$,1)="Y" THEN 50 ELSE END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00050      01660T
     00190      00060T
     00220      01350T, 01530T
     00270      00240T
     00300      00270T
     00330      00300T
     00360      00330T
     00370      00350T
     00380      00230T
     00400      00380T, 01090T, 01360T
     00410      00470T, 01120T, 01390T
     00480      00440T
     00530      00510T
     00550      00530T
     00570      00490T, 00550T
     00620      00590T
     00630      00570T, 00610T
     00680      00650T
     00690      00630T, 00670T
     00720      00690T
     00740      00720T
     00760      00740T
     00810      00780T
     00840      00810T
     00870      00840T
     00900      00870T
     00930      00900T
     00960      00930T
     00980      00960T
     01000      00980T
     01020      01000T
     01040      01020T
     01060      01040T
     01080      00480T, 00760T, 01060T
     01100      00450T
     01130      01100T
     01140      01160T, 01170T
     01190      01200T
     01240      01220T
     01280      01240T
     01310      01290T
     01330      01310T
     01370      00460T
     01390      01370T
     01430      01460T
     01510      01470T
     01540      01490T
     01560      01330T
     01580      01340T
     01610      01550T, 01570T, 01590T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x55c911a70d10   0x55c911a70d10   0x55c911a8b5d0   0x55c911a8b5d0 


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02700 - 10000    7310 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/warfish/basic/warfish.bas'
 *
    A              Integer 
    A$             String  
    ANS$           String  
    C$             String  
    D              Integer 
    E              Integer 
    I              Integer 
    I$             String  
    INT   Function Integer     args=1, float 
    L              Integer 
    LEFT$ Function String      args=2, char* int   
    MID$  Function String      args=2, char* int   
    N              Integer 
    O              Integer 
    Q              Integer 
    Q$             String  
    Q0             Integer 
    R              Integer 
    R$             String  
    RND   Function Integer     args=1, int   
    S              Integer 
    T              Integer 
    TAB   Function String      args=1, 
    U              Integer 
    W              Integer 
    XX             Integer 
    Z              Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/warfish/basic/warfish.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x55c911a70d10 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x55c911a70e00 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x55c911a70fc0 ---------A   01020 CLS: PRINT@413, "WARFISH"
    0x55c911a71340 ---------A   01030 PRINT: PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    0x55c911a715f0 ---------A   01040 PRINT@960, "";: INPUT "DO YOU NEED INSTRUCTIONS";I$
    0x55c911a71920 ---------A   01050 Q0=RND(0)
    0x55c911a71990 ---------A   01060 REM
    0x55c911a75fd0 ---------A T 01070 IF LEFT$(I$,1)="N" THEN CLS: GOTO 1200
    0x55c911a762d0 ----------   01080 CLS:PRINTTAB(28); "WARFISH":PRINT
    0x55c911a764a0 ----------   01090 PRINT"YOU COMMAND AN AMERICAN SUBMARINE THAT HAS BEEN SENT OUT"
    0x55c911a765f0 ----------   01100 PRINT"TO ATTACK JAPANESE SHIPS AT SEA DURING WORLD WAR II."
    0x55c911a76690 ----------   01110 PRINT
    0x55c911a76810 ----------   01120 PRINT"THE ORDERS THAT CAN BE GIVEN ARE THE FOLLOWING:"
    0x55c911a76990 ----------   01130 PRINT"    PERISCOPE - TO SEARCH FOR JAPANESE SHIPS."
    0x55c911a76b10 ----------   01140 PRINT"    TORPEDO - TO LAUNCH TORPEDOES AT JAPANESE SHIPS."
    0x55c911a76c90 ----------   01150 PRINT"    DIVE - TO ESCAPE ATTACKING JAPANESE SHIPS."
    0x55c911a76e60 ----------   01160 PRINT"THESE ARE SOME HISTORIC U.S. NAVY SUBMARINES:":PRINT
    0x55c911a770f0 ----------   01170 PRINT"    TAUTOG, SILVERSIDES, CAVALLA, BLUEFISH, THRESHER"
    0x55c911a772c0 ----------   01180 PRINT"    SWORDFISH, FLASHER, TROUT, ARCHER.":PRINT
    0x55c911a77440 ----------   01190 PRINT"SELECT ONE OF THE ABOVE, OR USE A NAME OF YOUR CHOICE."
    0x55c911a775a0 ---------A T 01200 PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    0x55c911a776f0 ---------A   01210 INPUT A$
    0x55c911a778f0 ---------A   01220 T=26
    0x55c911a77d00 ---------A T 01230 D=INT(RND(0)*10)
    0x55c911a77ec0 ---------A   01240 IF D<6 THEN 1390
    0x55c911a78200 ---------A   01250 IF D<>6 AND D<>7 THEN 1280
    0x55c911a78420 ---------A   01260 R$="DESTROYER"
    0x55c911a78610 ---------A   01270 W=2100
    0x55c911a787d0 ---------A T 01280 IF D<>8 THEN1310
    0x55c911a78970 ---------A   01290 R$="DESTROYER ESCORT"
    0x55c911a78ae0 ---------A   01300 W=1360
    0x55c911a78c90 ---------A T 01310 IF D<>9 THEN 1340
    0x55c911a78e30 ---------A   01320 R$="TORPEDO BOAT"
    0x55c911a791c0 ---------A   01330 W=70
    0x55c911a794f0 ---------A T 01340 IF D=6 OR D=7 THEN 1370
    0x55c911a796f0 ---------A   01350 Q=1
    0x55c911a79760 ---------A   01360 GOTO 1380
    0x55c911a798e0 ---------A T 01370 Q=2
    0x55c911a79b70 ---------A T 01380 PRINT"JAPANESE"; R$; " IS ATTACKING."
    0x55c911a79d20 ---------A T 01390 IF D>=6 THEN 1420
    0x55c911a7a0c0 ---------A   01400 A=INT(RND(0)*10)
    0x55c911a7a130 ---------A   01410 REM
    0x55c911a7a2a0 ---------A T 01420 PRINT"ORDERS, COMMANDER";
    0x55c911a7a400 ---------A   01430 INPUT C$
    0x55c911a7a7b0 ---------A   01440 CLS: C$=MID$(C$,1,1)
    0x55c911a7a990 ---------A   01450 IF C$="P" THEN 1490
    0x55c911a7ab80 ---------A   01460 IF C$="T" THEN 2110
    0x55c911a7ad60 ---------A   01470 IF C$="D" THEN 2380
    0x55c911a7adf0 ---------A   01480 GOTO 1420
    0x55c911a7b110 ---------A T 01490 IF D>5 OR Q>0 THEN 2090
    0x55c911a7b2d0 ---------A   01500 IF A>=4 THEN 1580
    0x55c911a7b480 ---------A   01510 R$="FREIGHTER"
    0x55c911a7b7b0 ---------A   01520 IF A<>0 AND A<>1 THEN 1540
    0x55c911a7b930 ---------A   01530 W=6600
    0x55c911a7bae0 ---------A T 01540 IF A<>2 THEN 560
    0x55c911a7bc60 ---------A   01550 W=7600
    0x55c911a7be10 ---------A T 01560 IF A<>3 THEN 1580
    0x55c911a7bfa0 ---------A   01570 W=8100
    0x55c911a7c2d0 ---------A T 01580 IF A<>7 AND A<>8 THEN 1640
    0x55c911a7c470 ---------A   01590 R$="TANKER"
    0x55c911a7c620 ---------A   01600 IF A<>8 THEN 1630
    0x55c911a7c7a0 ---------A   01610 W=10000
    0x55c911a7c810 ---------A   01620 GOTO 1640
    0x55c911a7c980 ---------A T 01630 W=9600
    0x55c911a7ccb0 ---------A T 01640 IF A<>4 AND A<>5 THEN 1700
    0x55c911a7d260 ---------A   01650 R$="TRANSPORT"
    0x55c911a7d410 ---------A   01660 IF A<>5 THEN 1690
    0x55c911a7d590 ---------A   01670 W=11600
    0x55c911a7d600 ---------A   01680 GOTO 1700
    0x55c911a7d760 ---------A T 01690 W=8800
    0x55c911a7d920 ---------A T 01700 IF A<>6 THEN 1730
    0x55c911a7dac0 ---------A   01710 R$="AMMUNITION SHIP"
    0x55c911a7dc40 ---------A   01720 W=9660
    0x55c911a7df70 ---------A T 01730 IF A>=9 OR A=6 THEN 1750
    0x55c911a7e0f0 ---------A   01740 Q=1
    0x55c911a7e2a0 ---------A T 01750 IF A<>6 THEN 1770
    0x55c911a7e420 ---------A   01760 Q=1
    0x55c911a7e5d0 ---------A T 01770 IF A<9 THEN 2090
    0x55c911a7e970 ---------A   01780 E=INT(RND(0)*10)
    0x55c911a7eb20 ---------A   01790 IF E<>0 THEN 1820
    0x55c911a7ecc0 ---------A   01800 R$="BATTLESHIP"
    0x55c911a7ee30 ---------A   01810 W=33600
    0x55c911a7eff0 ---------A T 01820 IF E<>1 THEN 1850
    0x55c911a7f190 ---------A   01830 R$="AIRCRAFT CARRIER"
    0x55c911a7f300 ---------A   01840 W=25700
    0x55c911a7f4c0 ---------A T 01850 IF E<>2 THEN 1880
    0x55c911a7f660 ---------A   01860 R$="HEAVY CRUISER"
    0x55c911a7f7d0 ---------A   01870 W=9900
    0x55c911a7f990 ---------A T 01880 IF E<>3 THEN 1910
    0x55c911a7fb30 ---------A   01890 R$="LIGHT CRUISER"
    0x55c911a7fcb0 ---------A   01900 W=9600
    0x55c911a7ffe0 ---------A T 01910 IF E<>4 AND E<>5 THEN 1940
    0x55c911a80180 ---------A   01920 R$="DESTROYER"
    0x55c911a80300 ---------A   01930 W=2100
    0x55c911a80630 ---------A T 01940 IF E<>6 AND E<>7 THEN 1970
    0x55c911a807d0 ---------A   01950 R$="SUBMARINE"
    0x55c911a80950 ---------A   01960 W=1600
    0x55c911a80c80 ---------A T 01970 IF E<>8 AND E<>9 THEN 1990
    0x55c911a80e00 ---------A   01980 W=1360
    0x55c911a80fb0 ---------A T 01990 IF E<=5 THEN 2010
    0x55c911a81140 ---------A   02000 Q=1
    0x55c911a81470 ---------A T 02010 IF E<>4 AND E<>5 THEN 2030
    0x55c911a81600 ---------A   02020 Q=2
    0x55c911a81930 ---------A T 02030 IF E<>2 AND E<>3 THEN 2050
    0x55c911a81ab0 ---------A   02040 Q=3
    0x55c911a81c60 ---------A T 02050 IF E<>1 THEN 2070
    0x55c911a81de0 ---------A   02060 W=4
    0x55c911a81f90 ---------A T 02070 IF E<>0 THEN 2090
    0x55c911a82130 ---------A   02080 Q=7
    0x55c911a82520 ---------A T 02090 PRINT"JAPANESE "; R$; " -"; W; "TONS."
    0x55c911a82590 ---------A   02100 GOTO  1420
    0x55c911a82750 ---------A T 02110 IF Q>=1 THEN 2140
    0x55c911a828b0 ---------A   02120 PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    0x55c911a82a70 ---------A   02130 IF Q<1 THEN 1420
    0x55c911a82c50 ---------A T 02140 PRINTT; "TORPEDOES LEFT."
    0x55c911a82db0 ---------A T 02150 PRINT"NUMBER OF TORPEDOES TO FIRE";
    0x55c911a82f10 ---------A   02160 INPUT R
    0x55c911a83300 ---------A   02170 IF R<0 OR T-R<0 THEN 2150
    0x55c911a834e0 ---------A   02180 IF R<>INT(R) THEN 2150
    0x55c911a836c0 ---------A   02190 T=T-R
    0x55c911a83a50 ---------A T 02200 S=INT(RND(0)*10)
    0x55c911a83bc0 ---------A   02210 IF S>R THEN 2200
    0x55c911a83da0 ---------A   02220 Q=Q-S
    0x55c911a83f50 ---------A   02230 IF Q<=0 THEN 2250
    0x55c911a84170 ---------A   02240 Q$="DAMAGED"
    0x55c911a84320 ---------A T 02250 IF Q>=1 THEN 2290
    0x55c911a844c0 ---------A   02260 Q$="SUNK"
    0x55c911a84710 ---------A   02270 O=O+W
    0x55c911a849c0 ---------A   02280 L=L+1
    0x55c911a85500 ---------A T 02290 PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    0x55c911a856b0 ---------A   02300 IF S<>0 THEN 2320
    0x55c911a85730 ---------A   02310 PRINT
    0x55c911a858f0 ---------A T 02320 IF S<=0 THEN 2340
    0x55c911a85d00 ---------A   02330 PRINT"- ";R$;" ";Q$; "."
    0x55c911a86030 ---------A T 02340 IF D>5 AND Q>0 THEN 2570
    0x55c911a861f0 ---------A   02350 IF T<1 THEN 2600
    0x55c911a863b0 ---------A   02360 IF Q<1 THEN 1230
    0x55c911a86430 ---------A   02370 GOTO  1420
    0x55c911a865f0 ---------A T 02380 IF D>=6 THEN 2400
    0x55c911a86890 ---------A   02390 PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    0x55c911a86a50 ---------A T 02400 IF D<6 THEN 1420
    0x55c911a86ef0 ---------A   02410 U=INT(RND(0)*10)*260
    0x55c911a87330 ---------A   02420 PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    0x55c911a87760 ---------A   02430 FOR XX=1 TO 63:PRINT"=";:NEXT
    0x55c911a87c00 ---------A T 02440 PRINTU;"YARDS"; TAB(32);Z;"FEET"
    0x55c911a87e10 ---------A   02450 U=U-260
    0x55c911a88030 ---------A   02460 Z=Z+25
    0x55c911a881f0 ---------A   02470 IF U>-260 THEN 2440
    0x55c911a883e0 ---------A   02480 IF R$="TORPEDO BOAT" THEN 2520
    0x55c911a88950 ---------A   02490 N=INT(RND(0)*10)*25+60
    0x55c911a88dc0 ---------A   02500 IF N+26>Z AND N-26<Z THEN 2550
    0x55c911a890b0 ---------A   02510 U=0:Z=0
    0x55c911a89390 ---------A T 02520 PRINT:PRINT"THE USS ";A$;" IS UNHURT."
    0x55c911a89500 ---------A   02530 Q=0
    0x55c911a895a0 ---------A   02540 GOTO 1230
    0x55c911a89870 ---------A T 02550 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
    0x55c911a898f0 ---------A   02560 GOTO 2640
    0x55c911a89c10 ---------A T 02570 FOR I=1 TO 1600:NEXT I
    0x55c911a89f30 ---------A   02580 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
    0x55c911a89fb0 ---------A   02590 GOTO 2640
    0x55c911a8a250 ---------A T 02600 FOR I=1 TO 1600:NEXT I
    0x55c911a8a570 ---------A   02610 CLS:PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
    0x55c911a8a750 ---------A   02620 IF O<=0 THEN 2640
    0x55c911a8a900 ---------A   02630 PRINT:PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
    0x55c911a8a9a0 ---------A T 02640 PRINT
    0x55c911a8adb0 ---------A   02650 PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
    0x55c911a8b050 ---------A   02660 PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
    0x55c911a8b130 ---------A   02670 PRINT:PRINT
    0x55c911a8b2d0 ---------A   02680 INPUT "DO YOU WANT TO TRY AGAIN";ANS$
    0x55c911a8b5d0 ---------A   02690 IF LEFT$(ANS$,1)="Y" THEN 1070 ELSE END
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
int   A_int;        // Comments?
char* A_str;        // Comments?
char* ANS_str;      // Comments?
char* C_str;        // Comments?
int   D_int;        // Comments?
int   E_int;        // Comments?
int   I_int;        // Comments?
char* I_str;        // Comments?
int   L_int;        // Comments?
int   N_int;        // Comments?
int   O_int;        // Comments?
int   Q_int;        // Comments?
char* Q_str;        // Comments?
int   Q0_int;       // Comments?
int   R_int;        // Comments?
char* R_str;        // Comments?
int   S_int;        // Comments?
int   T_int;        // Comments?
int   U_int;        // Comments?
int   W_int;        // Comments?
int   XX_int;       // Comments?
int   Z_int;        // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS: PRINT@413, "WARFISH"
    b2c_fprintf(stdout,"WARFISH"); b2c_fprintf(stdout,"\n");
    // 01030 PRINT: PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    b2c_fprintf(stdout,"%sCOPYRIGHT 1979 COMPUTING MORRISTOWN NJ",TAB(7)); b2c_fprintf(stdout,"\n");
    // 01040 PRINT@960, "";: INPUT "DO YOU NEED INSTRUCTIONS";I$
    // Start of Basic INPUT statement 01040
    printf("DO YOU NEED INSTRUCTIONS");
    char inpbuf_01040[100];
    if(fgets(inpbuf_01040,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01040=strtok(inpbuf_01040," ,\t\n");
        I_str=strdup(inpbuf_01040);
    }; // End of Basic INPUT statement 01040
    // 01050 Q0=RND(0)
    Q0_int = RND(0);
    // 01060 REM

  Lbl_01070:
    // 01070 IF LEFT$(I$,1)="N" THEN CLS: GOTO 1200
    goto Lbl_01200;

  Lbl_01200:
    // 01200 PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    b2c_fprintf(stdout,"PRINT THE NAME OF YOUR SUBMARINE"); 
    // 01210 INPUT A$
    // Start of Basic INPUT statement 01210
    printf(" ? ");
    char inpbuf_01210[100];
    if(fgets(inpbuf_01210,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01210=strtok(inpbuf_01210," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01210==nullptr){
            A_str = "";
        }else{
            A_str = ps_01210;
        };
    }; // End of Basic INPUT statement 01210
    // 01220 T=26
    T_int = 26;

  Lbl_01230:
    // 01230 D=INT(RND(0)*10)
    D_int = INT(RND(0)*10);
    // 01240 IF D<6 THEN 1390
    if(D_int<6)goto Lbl_01390;
    // 01250 IF D<>6 AND D<>7 THEN 1280
    if(D_int!=6&&D_int!=7)goto Lbl_01280;
    // 01260 R$="DESTROYER"
    GLBpStr="DESTROYER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01270 W=2100
    W_int = 2100;

  Lbl_01280:
    // 01280 IF D<>8 THEN1310
    if(D_int!=8)goto Lbl_01310;
    // 01290 R$="DESTROYER ESCORT"
    GLBpStr="DESTROYER ESCORT";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01300 W=1360
    W_int = 1350;

  Lbl_01310:
    // 01310 IF D<>9 THEN 1340
    if(D_int!=9)goto Lbl_01340;
    // 01320 R$="TORPEDO BOAT"
    GLBpStr="TORPEDO BOAT";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01330 W=70
    W_int = 70;

  Lbl_01340:
    // 01340 IF D=6 OR D=7 THEN 1370
    if(D_int==6||D_int==7)goto Lbl_01370;
    // 01350 Q=1
    Q_int = 1;
    // 01360 GOTO 1380
    goto Lbl_01380;

  Lbl_01370:
    // 01370 Q=2
    Q_int = 2;

  Lbl_01380:
    // 01380 PRINT"JAPANESE"; R$; " IS ATTACKING."
    b2c_fprintf(stdout,"JAPANESE%s IS ATTACKING.",R_str); b2c_fprintf(stdout,"\n");

  Lbl_01390:
    // 01390 IF D>=6 THEN 1420
    if(D_int>=6)goto Lbl_01420;
    // 01400 A=INT(RND(0)*10)
    A_int = INT(RND(0)*10);
    // 01410 REM

  Lbl_01420:
    // 01420 PRINT"ORDERS, COMMANDER";
    b2c_fprintf(stdout,"ORDERS, COMMANDER"); 
    // 01430 INPUT C$
    // Start of Basic INPUT statement 01430
    printf(" ? ");
    char inpbuf_01430[100];
    if(fgets(inpbuf_01430,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01430=strtok(inpbuf_01430," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01430==nullptr){
            C_str = "";
        }else{
            C_str = ps_01430;
        };
    }; // End of Basic INPUT statement 01430
    // 01440 CLS: C$=MID$(C$,1,1)
    GLBpStr=MID(C_str,1,1);
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01450 IF C$="P" THEN 1490
    if(strcmp(C_str,"P")==0)goto Lbl_01490;
    // 01460 IF C$="T" THEN 2110
    if(strcmp(C_str,"T")==0)goto Lbl_02110;
    // 01470 IF C$="D" THEN 2380
    if(strcmp(C_str,"D")==0)goto Lbl_02380;
    // 01480 GOTO 1420
    goto Lbl_01420;

  Lbl_01490:
    // 01490 IF D>5 OR Q>0 THEN 2090
    if(D_int>5||Q_int>0)goto Lbl_02090;
    // 01500 IF A>=4 THEN 1580
    if(A_int>=4)goto Lbl_01580;
    // 01510 R$="FREIGHTER"
    GLBpStr="FREIGHTER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01520 IF A<>0 AND A<>1 THEN 1540
    if(A_int!=0&&A_int!=1)goto Lbl_01540;
    // 01530 W=6600
    W_int = 6500;

  Lbl_01540:
    // 01540 IF A<>2 THEN 560
    if(A_int!=2)goto Lbl_01560;
    // 01550 W=7600
    W_int = 7500;

  Lbl_01560:
    // 01560 IF A<>3 THEN 1580
    if(A_int!=3)goto Lbl_01580;
    // 01570 W=8100
    W_int = 8100;

  Lbl_01580:
    // 01580 IF A<>7 AND A<>8 THEN 1640
    if(A_int!=7&&A_int!=8)goto Lbl_01640;
    // 01590 R$="TANKER"
    GLBpStr="TANKER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01600 IF A<>8 THEN 1630
    if(A_int!=8)goto Lbl_01630;
    // 01610 W=10000
    W_int = 10000;
    // 01620 GOTO 1640
    goto Lbl_01640;

  Lbl_01630:
    // 01630 W=9600
    W_int = 9500;

  Lbl_01640:
    // 01640 IF A<>4 AND A<>5 THEN 1700
    if(A_int!=4&&A_int!=5)goto Lbl_01700;
    // 01650 R$="TRANSPORT"
    GLBpStr="TRANSPORT";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01660 IF A<>5 THEN 1690
    if(A_int!=5)goto Lbl_01690;
    // 01670 W=11600
    W_int = 11500;
    // 01680 GOTO 1700
    goto Lbl_01700;

  Lbl_01690:
    // 01690 W=8800
    W_int = 8800;

  Lbl_01700:
    // 01700 IF A<>6 THEN 1730
    if(A_int!=6)goto Lbl_01730;
    // 01710 R$="AMMUNITION SHIP"
    GLBpStr="AMMUNITION SHIP";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01720 W=9660
    W_int = 9650;

  Lbl_01730:
    // 01730 IF A>=9 OR A=6 THEN 1750
    if(A_int>=9||A_int==6)goto Lbl_01750;
    // 01740 Q=1
    Q_int = 1;

  Lbl_01750:
    // 01750 IF A<>6 THEN 1770
    if(A_int!=6)goto Lbl_01770;
    // 01760 Q=1
    Q_int = 1;

  Lbl_01770:
    // 01770 IF A<9 THEN 2090
    if(A_int<9)goto Lbl_02090;
    // 01780 E=INT(RND(0)*10)
    E_int = INT(RND(0)*10);
    // 01790 IF E<>0 THEN 1820
    if(E_int!=0)goto Lbl_01820;
    // 01800 R$="BATTLESHIP"
    GLBpStr="BATTLESHIP";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01810 W=33600
    W_int = 33500;

  Lbl_01820:
    // 01820 IF E<>1 THEN 1850
    if(E_int!=1)goto Lbl_01850;
    // 01830 R$="AIRCRAFT CARRIER"
    GLBpStr="AIRCRAFT CARRIER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01840 W=25700
    W_int = 25700;

  Lbl_01850:
    // 01850 IF E<>2 THEN 1880
    if(E_int!=2)goto Lbl_01880;
    // 01860 R$="HEAVY CRUISER"
    GLBpStr="HEAVY CRUISER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01870 W=9900
    W_int = 9900;

  Lbl_01880:
    // 01880 IF E<>3 THEN 1910
    if(E_int!=3)goto Lbl_01910;
    // 01890 R$="LIGHT CRUISER"
    GLBpStr="LIGHT CRUISER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01900 W=9600
    W_int = 9600;

  Lbl_01910:
    // 01910 IF E<>4 AND E<>5 THEN 1940
    if(E_int!=4&&E_int!=5)goto Lbl_01940;
    // 01920 R$="DESTROYER"
    GLBpStr="DESTROYER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01930 W=2100
    W_int = 2100;

  Lbl_01940:
    // 01940 IF E<>6 AND E<>7 THEN 1970
    if(E_int!=6&&E_int!=7)goto Lbl_01970;
    // 01950 R$="SUBMARINE"
    GLBpStr="SUBMARINE";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01960 W=1600
    W_int = 1500;

  Lbl_01970:
    // 01970 IF E<>8 AND E<>9 THEN 1990
    if(E_int!=8&&E_int!=9)goto Lbl_01990;
    // 01980 W=1360
    W_int = 1350;

  Lbl_01990:
    // 01990 IF E<=5 THEN 2010
    if(E_int<=5)goto Lbl_02010;
    // 02000 Q=1
    Q_int = 1;

  Lbl_02010:
    // 02010 IF E<>4 AND E<>5 THEN 2030
    if(E_int!=4&&E_int!=5)goto Lbl_02030;
    // 02020 Q=2
    Q_int = 2;

  Lbl_02030:
    // 02030 IF E<>2 AND E<>3 THEN 2050
    if(E_int!=2&&E_int!=3)goto Lbl_02050;
    // 02040 Q=3
    Q_int = 3;

  Lbl_02050:
    // 02050 IF E<>1 THEN 2070
    if(E_int!=1)goto Lbl_02070;
    // 02060 W=4
    W_int = 4;

  Lbl_02070:
    // 02070 IF E<>0 THEN 2090
    if(E_int!=0)goto Lbl_02090;
    // 02080 Q=7
    Q_int = 7;

  Lbl_02090:
    // 02090 PRINT"JAPANESE "; R$; " -"; W; "TONS."
    b2c_fprintf(stdout,"JAPANESE %s - %d TONS.",R_str,W_int); b2c_fprintf(stdout,"\n");
    // 02100 GOTO  1420
    goto Lbl_01420;

  Lbl_02110:
    // 02110 IF Q>=1 THEN 2140
    if(Q_int>=1)goto Lbl_02140;
    // 02120 PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    b2c_fprintf(stdout,"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."); b2c_fprintf(stdout,"\n");
    // 02130 IF Q<1 THEN 1420
    if(Q_int<1)goto Lbl_01420;

  Lbl_02140:
    // 02140 PRINTT; "TORPEDOES LEFT."
    b2c_fprintf(stdout," %d TORPEDOES LEFT.",T_int); b2c_fprintf(stdout,"\n");

  Lbl_02150:
    // 02150 PRINT"NUMBER OF TORPEDOES TO FIRE";
    b2c_fprintf(stdout,"NUMBER OF TORPEDOES TO FIRE"); 
    // 02160 INPUT R
    // Start of Basic INPUT statement 02160
    printf(" ? ");
    char inpbuf_02160[100];
    if(fgets(inpbuf_02160,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02160=strtok(inpbuf_02160," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02160==nullptr){
            R_int = 0;
        }else{
            R_int = atof(ps_02160);
        };
    }; // End of Basic INPUT statement 02160
    // 02170 IF R<0 OR T-R<0 THEN 2150
    if(R_int<0||T_int-R_int<0)goto Lbl_02150;
    // 02180 IF R<>INT(R) THEN 2150
    if(R_int!=INT(R_int))goto Lbl_02150;
    // 02190 T=T-R
    T_int = T_int-R_int;

  Lbl_02200:
    // 02200 S=INT(RND(0)*10)
    S_int = INT(RND(0)*10);
    // 02210 IF S>R THEN 2200
    if(S_int>R_int)goto Lbl_02200;
    // 02220 Q=Q-S
    Q_int = Q_int-S_int;
    // 02230 IF Q<=0 THEN 2250
    if(Q_int<=0)goto Lbl_02250;
    // 02240 Q$="DAMAGED"
    GLBpStr="DAMAGED";
    Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_02250:
    // 02250 IF Q>=1 THEN 2290
    if(Q_int>=1)goto Lbl_02290;
    // 02260 Q$="SUNK"
    GLBpStr="SUNK";
    Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02270 O=O+W
    O_int = O_int+W_int;
    // 02280 L=L+1
    L_int = L_int+1;

  Lbl_02290:
    // 02290 PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    b2c_fprintf(stdout," %d TORPEDOES FIRED - %d HITS ",R_int,S_int); 
    // 02300 IF S<>0 THEN 2320
    if(S_int!=0)goto Lbl_02320;
    // 02310 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

  Lbl_02320:
    // 02320 IF S<=0 THEN 2340
    if(S_int<=0)goto Lbl_02340;
    // 02330 PRINT"- ";R$;" ";Q$; "."
    b2c_fprintf(stdout,"- %s %s.",R_str,Q_str); b2c_fprintf(stdout,"\n");

  Lbl_02340:
    // 02340 IF D>5 AND Q>0 THEN 2570
    if(D_int>5&&Q_int>0)goto Lbl_02570;
    // 02350 IF T<1 THEN 2600
    if(T_int<1)goto Lbl_02600;
    // 02360 IF Q<1 THEN 1230
    if(Q_int<1)goto Lbl_01230;
    // 02370 GOTO  1420
    goto Lbl_01420;

  Lbl_02380:
    // 02380 IF D>=6 THEN 2400
    if(D_int>=6)goto Lbl_02400;
    // 02390 PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    b2c_fprintf(stdout," THE USS %s IS NOT UNDER ATTACK.",A_str); b2c_fprintf(stdout,"\n");

  Lbl_02400:
    // 02400 IF D<6 THEN 1420
    if(D_int<6)goto Lbl_01420;
    // 02410 U=INT(RND(0)*10)*260
    U_int = INT(RND(0)*10)*250;
    // 02420 PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    b2c_fprintf(stdout,"DISTANCE OF %s%sDEPTH OF USS %s",R_str,TAB(32),A_str); b2c_fprintf(stdout,"\n");
    // 02430 FOR XX=1 TO 63:PRINT"=";:NEXT
    int dummy_2430=0; // Ignore this line.
};

  Lbl_02440:
// 02440 PRINTU;"YARDS"; TAB(32);Z;"FEET"
b2c_fprintf(stdout," %d YARDS%s %d FEET",U_int,TAB(32),Z_int); b2c_fprintf(stdout,"\n");
// 02450 U=U-260
U_int = U_int-250;
// 02460 Z=Z+25
Z_int = Z_int+25;
// 02470 IF U>-260 THEN 2440
if(U_int>-250)goto Lbl_02440;
// 02480 IF R$="TORPEDO BOAT" THEN 2520
if(strcmp(R_str,"TORPEDO BOAT")==0)goto Lbl_02520;
// 02490 N=INT(RND(0)*10)*25+60
N_int = INT(RND(0)*10)*25+50;
// 02500 IF N+26>Z AND N-26<Z THEN 2550
if(N_int+26>Z_int&&N_int-26<Z_int)goto Lbl_02550;
// 02510 U=0:Z=0
Z_int = 0;

  Lbl_02520:
// 02520 PRINT:PRINT"THE USS ";A$;" IS UNHURT."
b2c_fprintf(stdout,"THE USS %s IS UNHURT.",A_str); b2c_fprintf(stdout,"\n");
// 02530 Q=0
Q_int = 0;
// 02540 GOTO 1230
goto Lbl_01230;

  Lbl_02550:
// 02550 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
b2c_fprintf(stdout,"THE USS %s HAS BEEN SUNK BY DEPTH CHARGES.",A_str); b2c_fprintf(stdout,"\n");
// 02560 GOTO 2640
goto Lbl_02640;

  Lbl_02570:
// 02570 FOR I=1 TO 1600:NEXT I
int dummy_2570=0; // Ignore this line.
}; // End-For(I_int)
// 02580 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
b2c_fprintf(stdout,"THE USS %s HAS BEEN SUNK BY GUNFIRE.",A_str); b2c_fprintf(stdout,"\n");
// 02590 GOTO 2640
goto Lbl_02640;

  Lbl_02600:
// 02600 FOR I=1 TO 1600:NEXT I
int dummy_2600=0; // Ignore this line.
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>}; // End-For(I_int)
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>// 02610 CLS:PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>b2c_fprintf(stdout,"THE USS %s HAS EXPENDED ALL ITS TORPEDOES.",A_str); b2c_fprintf(stdout,"\n");
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>// 02620 IF O<=0 THEN 2640
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>if(O_int<=0)goto Lbl_02640;
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>// 02630 PRINT:PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>b2c_fprintf(stdout,"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."); b2c_fprintf(stdout,"\n");

  Lbl_02640:
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>// 02640 PRINT
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>// 02650 PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>b2c_fprintf(stdout,"THE SUBMARINE USS %s HAS SUNK A TOTAL OF %d SHIPS.",A_str,L_int); b2c_fprintf(stdout,"\n");
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>// 02660 PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>b2c_fprintf(stdout,"TOTAL ENEMY TONNAGE SUNK:  %d TONS",O_int); b2c_fprintf(stdout,"\n");
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>// 02670 PRINT:PRINT
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>// 02680 INPUT "DO YOU WANT TO TRY AGAIN";ANS$
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>// Start of Basic INPUT statement 02680
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>printf("DO YOU WANT TO TRY AGAIN");
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>char inpbuf_02680[100];
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>if(fgets(inpbuf_02680,100,stdin)==nullptr){
fprintf(stderr,"ERROR: End of file on input.\n");
exit(2);
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>}else{
char *ps_02680=strtok(inpbuf_02680," ,\t\n");
ANS_str=strdup(inpbuf_02680);
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>}; // End of Basic INPUT statement 02680
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>// 02690 IF LEFT$(ANS$,1)="Y" THEN 1070 ELSE END
ýÿÁ¢ýÿÍ¢ýÿÙ¢ýÿå¢ýÿ<stdio>if(strcmp(LEFT(ANS_str,1),"Y")==0)goto Lbl_01070;
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
