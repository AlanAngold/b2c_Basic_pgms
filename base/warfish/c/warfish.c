/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/warfish.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5918ec3eadb0 ---------A   00001  REM NOTE: Basic language type forced to be:
    0x5918ec3eaf30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5918ec3e86d0 ---------A   00010  CLS: PRINT@413, "WARFISH"
    0x5918ec3ea5e0 ---------A   00020  PRINT: PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    0x5918ec3e9040 ---------A   00030  PRINT@960, "";: INPUT "DO YOU NEED INSTRUCTIONS";I$
    0x5918ec3e8ea0 ---------A   00040  Q0=RND(0)
    0x5918ec3e8be0 ---------A T 00050  REM
    0x5918ec3e9860 ---------A   00060  IF LEFT$(I$,1)="N" THEN CLS: GOTO 190
    0x5918ec3f0b60 ----------   00070  CLS:PRINTTAB(28); "WARFISH":PRINT
    0x5918ec3e90a0 ----------   00080  PRINT"YOU COMMAND AN AMERICAN SUBMARINE THAT HAS BEEN SENT OUT"
    0x5918ec3f0e20 ----------   00090  PRINT"TO ATTACK JAPANESE SHIPS AT SEA DURING WORLD WAR II."
    0x5918ec3f0ed0 ----------   00100  PRINT
    0x5918ec3f1080 ----------   00110  PRINT"THE ORDERS THAT CAN BE GIVEN ARE THE FOLLOWING:"
    0x5918ec3f1230 ----------   00120  PRINT"    PERISCOPE - TO SEARCH FOR JAPANESE SHIPS."
    0x5918ec3f13e0 ----------   00130  PRINT"    TORPEDO - TO LAUNCH TORPEDOES AT JAPANESE SHIPS."
    0x5918ec3f1590 ----------   00140  PRINT"    DIVE - TO ESCAPE ATTACKING JAPANESE SHIPS."
    0x5918ec3f17a0 ----------   00150  PRINT"THESE ARE SOME HISTORIC U.S. NAVY SUBMARINES:":PRINT
    0x5918ec3f1950 ----------   00160  PRINT"    TAUTOG, SILVERSIDES, CAVALLA, BLUEFISH, THRESHER"
    0x5918ec3f1b60 ----------   00170  PRINT"    SWORDFISH, FLASHER, TROUT, ARCHER.":PRINT
    0x5918ec3f1d10 ----------   00180  PRINT"SELECT ONE OF THE ABOVE, OR USE A NAME OF YOUR CHOICE."
    0x5918ec3f1e30 ---------A T 00190  PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    0x5918ec3f1ff0 ---------A   00200  INPUT A$
    0x5918ec3f22d0 ---------A   00210  T=26
    0x5918ec3f2860 ---------A T 00220  D=INT(RND(0)*10)
    0x5918ec3f2a90 ---------A   00230  IF D<6 THEN 380
    0x5918ec3f2f10 ---------A   00240  IF D<>6 AND D<>7 THEN 270
    0x5918ec3f3210 ---------A   00250  R$="DESTROYER"
    0x5918ec3f34e0 ---------A   00260  W=2100
    0x5918ec3f3710 ---------A T 00270  IF D<>8 THEN300
    0x5918ec3f3950 ---------A   00280  R$="DESTROYER ESCORT"
    0x5918ec3f3b60 ---------A   00290  W=1350
    0x5918ec3f3db0 ---------A T 00300  IF D<>9 THEN 330
    0x5918ec3f3ff0 ---------A   00310  R$="TORPEDO BOAT"
    0x5918ec3f43f0 ---------A   00320  W=70
    0x5918ec3f4860 ---------A T 00330  IF D=6 OR D=7 THEN 360
    0x5918ec3f4b40 ---------A   00340  Q=1
    0x5918ec3f4bb0 ---------A   00350  GOTO 370
    0x5918ec3f4de0 ---------A T 00360  Q=2
    0x5918ec3f5130 ---------A T 00370  PRINT"JAPANESE"; R$; " IS ATTACKING."
    0x5918ec3f5390 ---------A T 00380  IF D>=6 THEN 400
    0x5918ec3f5930 ---------A   00390  A=INT(RND(0)*10)
    0x5918ec3f59a0 ---------A T 00400  REM
    0x5918ec3f5b40 ---------A T 00410  PRINT"ORDERS, COMMANDER";
    0x5918ec3f5d70 ---------A   00420  INPUT C$
    0x5918ec3f6270 ---------A   00430  CLS: C$=MID$(C$,1,1)
    0x5918ec3f64f0 ---------A   00440  IF C$="P" THEN 480
    0x5918ec3f6780 ---------A   00450  IF C$="T" THEN 1100
    0x5918ec3f6a00 ---------A   00460  IF C$="D" THEN 1370
    0x5918ec3f6a90 ---------A   00470  GOTO 410
    0x5918ec3f6f00 ---------A T 00480  IF D>5 OR Q>0 THEN 1080
    0x5918ec3f7160 ---------A   00490  IF A>=4 THEN 570
    0x5918ec3f73b0 ---------A   00500  R$="FREIGHTER"
    0x5918ec3f7820 ---------A   00510  IF A<>0 AND A<>1 THEN 530
    0x5918ec3f7a40 ---------A   00520  W=6500
    0x5918ec3f7c90 ---------A T 00530  IF A<>2 THEN 550
    0x5918ec3f7eb0 ---------A   00540  W=7500
    0x5918ec3f8100 ---------A T 00550  IF A<>3 THEN 570
    0x5918ec3f8330 ---------A   00560  W=8100
    0x5918ec3f87a0 ---------A T 00570  IF A<>7 AND A<>8 THEN 630
    0x5918ec3f89e0 ---------A   00580  R$="TANKER"
    0x5918ec3f8c30 ---------A   00590  IF A<>8 THEN 620
    0x5918ec3f8e50 ---------A   00600  W=10000
    0x5918ec3f8ec0 ---------A   00610  GOTO 630
    0x5918ec3f90e0 ---------A T 00620  W=9500
    0x5918ec3f9550 ---------A T 00630  IF A<>4 AND A<>5 THEN 690
    0x5918ec3f9ba0 ---------A   00640  R$="TRANSPORT"
    0x5918ec3f9df0 ---------A   00650  IF A<>5 THEN 680
    0x5918ec3fa010 ---------A   00660  W=11500
    0x5918ec3fa080 ---------A   00670  GOTO 690
    0x5918ec3fa290 ---------A T 00680  W=8800
    0x5918ec3fa4f0 ---------A T 00690  IF A<>6 THEN 720
    0x5918ec3fa730 ---------A   00700  R$="AMMUNITION SHIP"
    0x5918ec3fa950 ---------A   00710  W=9650
    0x5918ec3fadc0 ---------A T 00720  IF A>=9 OR A=6 THEN 740
    0x5918ec3fafe0 ---------A   00730  Q=1
    0x5918ec3fb230 ---------A T 00740  IF A<>6 THEN 760
    0x5918ec3fb450 ---------A   00750  Q=1
    0x5918ec3fb6a0 ---------A T 00760  IF A<9 THEN 1080
    0x5918ec3fbc40 ---------A   00770  E=INT(RND(0)*10)
    0x5918ec3fbe90 ---------A   00780  IF E<>0 THEN 810
    0x5918ec3fc0d0 ---------A   00790  R$="BATTLESHIP"
    0x5918ec3fc2e0 ---------A   00800  W=33500
    0x5918ec3fc540 ---------A T 00810  IF E<>1 THEN 840
    0x5918ec3fc780 ---------A   00820  R$="AIRCRAFT CARRIER"
    0x5918ec3fc990 ---------A   00830  W=25700
    0x5918ec3fcbf0 ---------A T 00840  IF E<>2 THEN 870
    0x5918ec3fce30 ---------A   00850  R$="HEAVY CRUISER"
    0x5918ec3fd040 ---------A   00860  W=9900
    0x5918ec3fd2a0 ---------A T 00870  IF E<>3 THEN 900
    0x5918ec3fd4e0 ---------A   00880  R$="LIGHT CRUISER"
    0x5918ec3fd700 ---------A   00890  W=9600
    0x5918ec3fdb70 ---------A T 00900  IF E<>4 AND E<>5 THEN 930
    0x5918ec3fddb0 ---------A   00910  R$="DESTROYER"
    0x5918ec3fdfd0 ---------A   00920  W=2100
    0x5918ec3fe440 ---------A T 00930  IF E<>6 AND E<>7 THEN 960
    0x5918ec3fe680 ---------A   00940  R$="SUBMARINE"
    0x5918ec3fe8a0 ---------A   00950  W=1500
    0x5918ec3fed10 ---------A T 00960  IF E<>8 AND E<>9 THEN 980
    0x5918ec3fef30 ---------A   00970  W=1350
    0x5918ec3ff180 ---------A T 00980  IF E<=5 THEN 1000
    0x5918ec3ff3b0 ---------A   00990  Q=1
    0x5918ec3ff820 ---------A T 01000  IF E<>4 AND E<>5 THEN 1020
    0x5918ec3ffa50 ---------A   01010  Q=2
    0x5918ec3ffec0 ---------A T 01020  IF E<>2 AND E<>3 THEN 1040
    0x5918ec4000e0 ---------A   01030  Q=3
    0x5918ec400330 ---------A T 01040  IF E<>1 THEN 1060
    0x5918ec400550 ---------A   01050  W=4
    0x5918ec4007a0 ---------A T 01060  IF E<>0 THEN 1080
    0x5918ec4009e0 ---------A   01070  Q=7
    0x5918ec400f30 ---------A T 01080  PRINT"JAPANESE "; R$; " -"; W; "TONS."
    0x5918ec400fb0 ---------A   01090  GOTO  400
    0x5918ec401220 ---------A T 01100  IF Q>=1 THEN 1130
    0x5918ec4013a0 ---------A   01110  PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    0x5918ec401610 ---------A   01120  IF Q<1 THEN 410
    0x5918ec401890 ---------A T 01130  PRINTT; "TORPEDOES LEFT."
    0x5918ec401a20 ---------A T 01140  PRINT"NUMBER OF TORPEDOES TO FIRE";
    0x5918ec401c50 ---------A   01150  INPUT R
    0x5918ec402200 ---------A   01160  IF R<0 OR T-R<0 THEN 1140
    0x5918ec402560 ---------A   01170  IF R<>INT(R) THEN 1140
    0x5918ec4028c0 ---------A   01180  T=T-R
    0x5918ec402e50 ---------A T 01190  S=INT(RND(0)*10)
    0x5918ec4030c0 ---------A   01200  IF S>R THEN 1190
    0x5918ec403420 ---------A   01210  Q=Q-S
    0x5918ec403670 ---------A   01220  IF Q<=0 THEN 1240
    0x5918ec403970 ---------A   01230  Q$="DAMAGED"
    0x5918ec403bc0 ---------A T 01240  IF Q>=1 THEN 1280
    0x5918ec403e00 ---------A   01250  Q$="SUNK"
    0x5918ec404210 ---------A   01260  O=O+W
    0x5918ec404620 ---------A   01270  L=L+1
    0x5918ec4052a0 ---------A T 01280  PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    0x5918ec405500 ---------A   01290  IF S<>0 THEN 1310
    0x5918ec405580 ---------A   01300  PRINT
    0x5918ec4057f0 ---------A T 01310  IF S<=0 THEN 1330
    0x5918ec405d60 ---------A   01320  PRINT"- ";R$;" ";Q$; "."
    0x5918ec4061e0 ---------A T 01330  IF D>5 AND Q>0 THEN 1560
    0x5918ec406440 ---------A   01340  IF T<1 THEN 1580
    0x5918ec4066a0 ---------A   01350  IF Q<1 THEN 220
    0x5918ec406720 ---------A   01360  GOTO  400
    0x5918ec406990 ---------A T 01370  IF D>=6 THEN 1390
    0x5918ec406cf0 ---------A   01380  PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    0x5918ec406f60 ---------A T 01390  IF D<6 THEN 410
    0x5918ec407620 ---------A   01400  U=INT(RND(0)*10)*250
    0x5918ec407bc0 ---------A   01410  PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    0x5918ec408130 ---------A   01420  FOR XX=1 TO 63:PRINT"=";:NEXT
    0x5918ec408780 ---------A T 01430  PRINTU;"YARDS"; TAB(32);Z;"FEET"
    0x5918ec408ac0 ---------A   01440  U=U-250
    0x5918ec408e00 ---------A   01450  Z=Z+25
    0x5918ec409060 ---------A   01460  IF U>-250 THEN 1430
    0x5918ec4092f0 ---------A   01470  IF R$="TORPEDO BOAT" THEN 1510
    0x5918ec409aa0 ---------A   01480  N=INT(RND(0)*10)*25+50
    0x5918ec40a150 ---------A   01490  IF N+26>Z AND N-26<Z THEN 1540
    0x5918ec40a580 ---------A   01500  U=0:Z=0
    0x5918ec40a930 ---------A T 01510  PRINT:PRINT"THE USS ";A$;" IS UNHURT."
    0x5918ec40ab50 ---------A   01520  Q=0
    0x5918ec40abf0 ---------A   01530  GOTO 220
    0x5918ec40afa0 ---------A T 01540  CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
    0x5918ec40b030 ---------A   01550  GOTO 1610
    0x5918ec40b4e0 ---------A T 01560  FOR I=1 TO 1500:NEXT I
    0x5918ec40b8e0 ---------A   01565  CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
    0x5918ec40b970 ---------A   01570  GOTO 1610
    0x5918ec40bd60 ---------A T 01580  FOR I=1 TO 1500:NEXT I
    0x5918ec40c160 ---------A   01585  CLS:PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
    0x5918ec40c3f0 ---------A   01590  IF O<=0 THEN 1610
    0x5918ec40c5d0 ---------A   01600  PRINT:PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
    0x5918ec40c680 ---------A T 01610  PRINT
    0x5918ec40cc00 ---------A   01620  PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
    0x5918ec40cf70 ---------A   01630  PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
    0x5918ec40d070 ---------A   01640  PRINT:PRINT
    0x5918ec40d2e0 ---------A   01650  INPUT "DO YOU WANT TO TRY AGAIN";ANS$
    0x5918ec40d720 ---------A   01660  IF LEFT$(ANS$,1)="Y" THEN 50 ELSE END
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

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5918ec3eadb0 (00001)   0x5918ec3eadb0 (00001)   0x5918ec40d720 (01660)   0x5918ec40d720 (01660)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/warfish.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5918ec3eadb0 ---------A   00001  REM NOTE
    0x5918ec3eaf30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5918ec3eae70 ----------   00010  CLS
    0x5918ec3e86d0 ---------A        a PRINT@413, "WARFISH"
    0x5918ec3e8670 ----------   00020  PRINT
    0x5918ec3ea5e0 ---------A        a PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    0x5918ec3e89e0 ----------   00030  PRINT@960, "";
    0x5918ec3e9040 ---------A        a INPUT "DO YOU NEED INSTRUCTIONS";I$
    0x5918ec3e8ea0 ---------A   00040  Q0=RND(0)
    0x5918ec3e8be0 ---------A T 00050  REM
    0x5918ec3e9800 ----------   00060  IF LEFT$(I$,1)="N" THEN CLS
    0x5918ec3e9860 ---------A        a GOTO 190
    0x5918ec3f08a0 ----------   00070  CLS
    0x5918ec3f0ab0 ----------        a PRINTTAB(28); "WARFISH"
    0x5918ec3f0b60 ----------        b PRINT
    0x5918ec3e90a0 ----------   00080  PRINT"YOU COMMAND AN AMERICAN SUBMARINE THAT HAS BEEN SENT OUT"
    0x5918ec3f0e20 ----------   00090  PRINT"TO ATTACK JAPANESE SHIPS AT SEA DURING WORLD WAR II."
    0x5918ec3f0ed0 ----------   00100  PRINT
    0x5918ec3f1080 ----------   00110  PRINT"THE ORDERS THAT CAN BE GIVEN ARE THE FOLLOWING:"
    0x5918ec3f1230 ----------   00120  PRINT"    PERISCOPE - TO SEARCH FOR JAPANESE SHIPS."
    0x5918ec3f13e0 ----------   00130  PRINT"    TORPEDO - TO LAUNCH TORPEDOES AT JAPANESE SHIPS."
    0x5918ec3f1590 ----------   00140  PRINT"    DIVE - TO ESCAPE ATTACKING JAPANESE SHIPS."
    0x5918ec3f16f0 ----------   00150  PRINT"THESE ARE SOME HISTORIC U.S. NAVY SUBMARINES:"
    0x5918ec3f17a0 ----------        a PRINT
    0x5918ec3f1950 ----------   00160  PRINT"    TAUTOG, SILVERSIDES, CAVALLA, BLUEFISH, THRESHER"
    0x5918ec3f1ab0 ----------   00170  PRINT"    SWORDFISH, FLASHER, TROUT, ARCHER."
    0x5918ec3f1b60 ----------        a PRINT
    0x5918ec3f1d10 ----------   00180  PRINT"SELECT ONE OF THE ABOVE, OR USE A NAME OF YOUR CHOICE."
    0x5918ec3f1e30 ---------A T 00190  PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    0x5918ec3f1ff0 ---------A   00200  INPUT A$
    0x5918ec3f22d0 ---------A   00210  T=26
    0x5918ec3f2860 ---------A T 00220  D=INT(RND(0)*10)
    0x5918ec3f2a90 ---------A   00230  IF D<6 THEN 380
    0x5918ec3f2f10 ---------A   00240  IF D<>6 AND D<>7 THEN 270
    0x5918ec3f3210 ---------A   00250  R$="DESTROYER"
    0x5918ec3f34e0 ---------A   00260  W=2100
    0x5918ec3f3710 ---------A T 00270  IF D<>8 THEN300
    0x5918ec3f3950 ---------A   00280  R$="DESTROYER ESCORT"
    0x5918ec3f3b60 ---------A   00290  W=1350
    0x5918ec3f3db0 ---------A T 00300  IF D<>9 THEN 330
    0x5918ec3f3ff0 ---------A   00310  R$="TORPEDO BOAT"
    0x5918ec3f43f0 ---------A   00320  W=70
    0x5918ec3f4860 ---------A T 00330  IF D=6 OR D=7 THEN 360
    0x5918ec3f4b40 ---------A   00340  Q=1
    0x5918ec3f4bb0 ---------A   00350  GOTO 370
    0x5918ec3f4de0 ---------A T 00360  Q=2
    0x5918ec3f5130 ---------A T 00370  PRINT"JAPANESE"; R$; " IS ATTACKING."
    0x5918ec3f5390 ---------A T 00380  IF D>=6 THEN 400
    0x5918ec3f5930 ---------A   00390  A=INT(RND(0)*10)
    0x5918ec3f59a0 ---------A T 00400  REM
    0x5918ec3f5b40 ---------A T 00410  PRINT"ORDERS, COMMANDER";
    0x5918ec3f5d70 ---------A   00420  INPUT C$
    0x5918ec3f5dd0 ----------   00430  CLS
    0x5918ec3f6270 ---------A        a C$=MID$(C$,1,1)
    0x5918ec3f64f0 ---------A   00440  IF C$="P" THEN 480
    0x5918ec3f6780 ---------A   00450  IF C$="T" THEN 1100
    0x5918ec3f6a00 ---------A   00460  IF C$="D" THEN 1370
    0x5918ec3f6a90 ---------A   00470  GOTO 410
    0x5918ec3f6f00 ---------A T 00480  IF D>5 OR Q>0 THEN 1080
    0x5918ec3f7160 ---------A   00490  IF A>=4 THEN 570
    0x5918ec3f73b0 ---------A   00500  R$="FREIGHTER"
    0x5918ec3f7820 ---------A   00510  IF A<>0 AND A<>1 THEN 530
    0x5918ec3f7a40 ---------A   00520  W=6500
    0x5918ec3f7c90 ---------A T 00530  IF A<>2 THEN 550
    0x5918ec3f7eb0 ---------A   00540  W=7500
    0x5918ec3f8100 ---------A T 00550  IF A<>3 THEN 570
    0x5918ec3f8330 ---------A   00560  W=8100
    0x5918ec3f87a0 ---------A T 00570  IF A<>7 AND A<>8 THEN 630
    0x5918ec3f89e0 ---------A   00580  R$="TANKER"
    0x5918ec3f8c30 ---------A   00590  IF A<>8 THEN 620
    0x5918ec3f8e50 ---------A   00600  W=10000
    0x5918ec3f8ec0 ---------A   00610  GOTO 630
    0x5918ec3f90e0 ---------A T 00620  W=9500
    0x5918ec3f9550 ---------A T 00630  IF A<>4 AND A<>5 THEN 690
    0x5918ec3f9ba0 ---------A   00640  R$="TRANSPORT"
    0x5918ec3f9df0 ---------A   00650  IF A<>5 THEN 680
    0x5918ec3fa010 ---------A   00660  W=11500
    0x5918ec3fa080 ---------A   00670  GOTO 690
    0x5918ec3fa290 ---------A T 00680  W=8800
    0x5918ec3fa4f0 ---------A T 00690  IF A<>6 THEN 720
    0x5918ec3fa730 ---------A   00700  R$="AMMUNITION SHIP"
    0x5918ec3fa950 ---------A   00710  W=9650
    0x5918ec3fadc0 ---------A T 00720  IF A>=9 OR A=6 THEN 740
    0x5918ec3fafe0 ---------A   00730  Q=1
    0x5918ec3fb230 ---------A T 00740  IF A<>6 THEN 760
    0x5918ec3fb450 ---------A   00750  Q=1
    0x5918ec3fb6a0 ---------A T 00760  IF A<9 THEN 1080
    0x5918ec3fbc40 ---------A   00770  E=INT(RND(0)*10)
    0x5918ec3fbe90 ---------A   00780  IF E<>0 THEN 810
    0x5918ec3fc0d0 ---------A   00790  R$="BATTLESHIP"
    0x5918ec3fc2e0 ---------A   00800  W=33500
    0x5918ec3fc540 ---------A T 00810  IF E<>1 THEN 840
    0x5918ec3fc780 ---------A   00820  R$="AIRCRAFT CARRIER"
    0x5918ec3fc990 ---------A   00830  W=25700
    0x5918ec3fcbf0 ---------A T 00840  IF E<>2 THEN 870
    0x5918ec3fce30 ---------A   00850  R$="HEAVY CRUISER"
    0x5918ec3fd040 ---------A   00860  W=9900
    0x5918ec3fd2a0 ---------A T 00870  IF E<>3 THEN 900
    0x5918ec3fd4e0 ---------A   00880  R$="LIGHT CRUISER"
    0x5918ec3fd700 ---------A   00890  W=9600
    0x5918ec3fdb70 ---------A T 00900  IF E<>4 AND E<>5 THEN 930
    0x5918ec3fddb0 ---------A   00910  R$="DESTROYER"
    0x5918ec3fdfd0 ---------A   00920  W=2100
    0x5918ec3fe440 ---------A T 00930  IF E<>6 AND E<>7 THEN 960
    0x5918ec3fe680 ---------A   00940  R$="SUBMARINE"
    0x5918ec3fe8a0 ---------A   00950  W=1500
    0x5918ec3fed10 ---------A T 00960  IF E<>8 AND E<>9 THEN 980
    0x5918ec3fef30 ---------A   00970  W=1350
    0x5918ec3ff180 ---------A T 00980  IF E<=5 THEN 1000
    0x5918ec3ff3b0 ---------A   00990  Q=1
    0x5918ec3ff820 ---------A T 01000  IF E<>4 AND E<>5 THEN 1020
    0x5918ec3ffa50 ---------A   01010  Q=2
    0x5918ec3ffec0 ---------A T 01020  IF E<>2 AND E<>3 THEN 1040
    0x5918ec4000e0 ---------A   01030  Q=3
    0x5918ec400330 ---------A T 01040  IF E<>1 THEN 1060
    0x5918ec400550 ---------A   01050  W=4
    0x5918ec4007a0 ---------A T 01060  IF E<>0 THEN 1080
    0x5918ec4009e0 ---------A   01070  Q=7
    0x5918ec400f30 ---------A T 01080  PRINT"JAPANESE "; R$; " -"; W; "TONS."
    0x5918ec400fb0 ---------A   01090  GOTO  400
    0x5918ec401220 ---------A T 01100  IF Q>=1 THEN 1130
    0x5918ec4013a0 ---------A   01110  PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    0x5918ec401610 ---------A   01120  IF Q<1 THEN 410
    0x5918ec401890 ---------A T 01130  PRINTT; "TORPEDOES LEFT."
    0x5918ec401a20 ---------A T 01140  PRINT"NUMBER OF TORPEDOES TO FIRE";
    0x5918ec401c50 ---------A   01150  INPUT R
    0x5918ec402200 ---------A   01160  IF R<0 OR T-R<0 THEN 1140
    0x5918ec402560 ---------A   01170  IF R<>INT(R) THEN 1140
    0x5918ec4028c0 ---------A   01180  T=T-R
    0x5918ec402e50 ---------A T 01190  S=INT(RND(0)*10)
    0x5918ec4030c0 ---------A   01200  IF S>R THEN 1190
    0x5918ec403420 ---------A   01210  Q=Q-S
    0x5918ec403670 ---------A   01220  IF Q<=0 THEN 1240
    0x5918ec403970 ---------A   01230  Q$="DAMAGED"
    0x5918ec403bc0 ---------A T 01240  IF Q>=1 THEN 1280
    0x5918ec403e00 ---------A   01250  Q$="SUNK"
    0x5918ec404210 ---------A   01260  O=O+W
    0x5918ec404620 ---------A   01270  L=L+1
    0x5918ec4052a0 ---------A T 01280  PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    0x5918ec405500 ---------A   01290  IF S<>0 THEN 1310
    0x5918ec405580 ---------A   01300  PRINT
    0x5918ec4057f0 ---------A T 01310  IF S<=0 THEN 1330
    0x5918ec405d60 ---------A   01320  PRINT"- ";R$;" ";Q$; "."
    0x5918ec4061e0 ---------A T 01330  IF D>5 AND Q>0 THEN 1560
    0x5918ec406440 ---------A   01340  IF T<1 THEN 1580
    0x5918ec4066a0 ---------A   01350  IF Q<1 THEN 220
    0x5918ec406720 ---------A   01360  GOTO  400
    0x5918ec406990 ---------A T 01370  IF D>=6 THEN 1390
    0x5918ec406cf0 ---------A   01380  PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    0x5918ec406f60 ---------A T 01390  IF D<6 THEN 410
    0x5918ec407620 ---------A   01400  U=INT(RND(0)*10)*250
    0x5918ec407bc0 ---------A   01410  PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    0x5918ec407f40 ----------   01420  FOR XX=1 TO 63
    0x5918ec4080a0 ----------        a PRINT"=";
    0x5918ec408130 ---------A        b NEXT
    0x5918ec408780 ---------A T 01430  PRINTU;"YARDS"; TAB(32);Z;"FEET"
    0x5918ec408ac0 ---------A   01440  U=U-250
    0x5918ec408e00 ---------A   01450  Z=Z+25
    0x5918ec409060 ---------A   01460  IF U>-250 THEN 1430
    0x5918ec4092f0 ---------A   01470  IF R$="TORPEDO BOAT" THEN 1510
    0x5918ec409aa0 ---------A   01480  N=INT(RND(0)*10)*25+50
    0x5918ec40a150 ---------A   01490  IF N+26>Z AND N-26<Z THEN 1540
    0x5918ec40a350 ----------   01500  U=0
    0x5918ec40a580 ---------A        a Z=0
    0x5918ec40a5d0 ---------- T 01510  PRINT
    0x5918ec40a930 ---------A T      a PRINT"THE USS ";A$;" IS UNHURT."
    0x5918ec40ab50 ---------A   01520  Q=0
    0x5918ec40abf0 ---------A   01530  GOTO 220
    0x5918ec40ac40 ---------- T 01540  CLS
    0x5918ec40afa0 ---------A T      a PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
    0x5918ec40b030 ---------A   01550  GOTO 1610
    0x5918ec40b3a0 ---------- T 01560  FOR I=1 TO 1500
    0x5918ec40b4e0 ---------A T      a NEXT I
    0x5918ec40b580 ----------   01565  CLS
    0x5918ec40b8e0 ---------A        a PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
    0x5918ec40b970 ---------A   01570  GOTO 1610
    0x5918ec40bc20 ---------- T 01580  FOR I=1 TO 1500
    0x5918ec40bd60 ---------A T      a NEXT I
    0x5918ec40be00 ----------   01585  CLS
    0x5918ec40c160 ---------A        a PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
    0x5918ec40c3f0 ---------A   01590  IF O<=0 THEN 1610
    0x5918ec40c450 ----------   01600  PRINT
    0x5918ec40c5d0 ---------A        a PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
    0x5918ec40c680 ---------A T 01610  PRINT
    0x5918ec40cc00 ---------A   01620  PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
    0x5918ec40cf70 ---------A   01630  PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
    0x5918ec40cfd0 ----------   01640  PRINT
    0x5918ec40d070 ---------A        a PRINT
    0x5918ec40d2e0 ---------A   01650  INPUT "DO YOU WANT TO TRY AGAIN";ANS$
    0x5918ec40d720 ---------A   01660  IF LEFT$(ANS$,1)="Y" THEN 50 ELSE END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/warfish.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5918ec3eadb0 ---------A T 01000  REM NOTE
    0x5918ec3eaf30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5918ec3eae70 ---------- T 01020  CLS
    0x5918ec3e86d0 ---------A   01030  PRINT@413, "WARFISH"
    0x5918ec3e8670 ---------- T 01040  PRINT
    0x5918ec3ea5e0 ---------A   01050  PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    0x5918ec3e89e0 ---------- T 01060  PRINT@960, "";
    0x5918ec3e9040 ---------A   01070  INPUT "DO YOU NEED INSTRUCTIONS";I$
    0x5918ec3e8ea0 ---------A T 01080  Q0=RND(0)
    0x5918ec3e8be0 ---------A   01090  REM
    0x5918ec3e9800 ---------- T 01100  IF LEFT$(I$,1)="N" THEN CLS
    0x5918ec3e9860 ---------A   01110  GOTO 1280
    0x5918ec3f08a0 ----------   01120  CLS
    0x5918ec3f0ab0 ---------- T 01130  PRINTTAB(28); "WARFISH"
    0x5918ec3f0b60 ---------- T 01140  PRINT
    0x5918ec3e90a0 ----------   01150  PRINT"YOU COMMAND AN AMERICAN SUBMARINE THAT HAS BEEN SENT OUT"
    0x5918ec3f0e20 ----------   01160  PRINT"TO ATTACK JAPANESE SHIPS AT SEA DURING WORLD WAR II."
    0x5918ec3f0ed0 ----------   01170  PRINT
    0x5918ec3f1080 ----------   01180  PRINT"THE ORDERS THAT CAN BE GIVEN ARE THE FOLLOWING:"
    0x5918ec3f1230 ---------- T 01190  PRINT"    PERISCOPE - TO SEARCH FOR JAPANESE SHIPS."
    0x5918ec3f13e0 ----------   01200  PRINT"    TORPEDO - TO LAUNCH TORPEDOES AT JAPANESE SHIPS."
    0x5918ec3f1590 ----------   01210  PRINT"    DIVE - TO ESCAPE ATTACKING JAPANESE SHIPS."
    0x5918ec3f16f0 ----------   01220  PRINT"THESE ARE SOME HISTORIC U.S. NAVY SUBMARINES:"
    0x5918ec3f17a0 ----------   01230  PRINT
    0x5918ec3f1950 ---------- T 01240  PRINT"    TAUTOG, SILVERSIDES, CAVALLA, BLUEFISH, THRESHER"
    0x5918ec3f1ab0 ----------   01250  PRINT"    SWORDFISH, FLASHER, TROUT, ARCHER."
    0x5918ec3f1b60 ----------   01260  PRINT
    0x5918ec3f1d10 ----------   01270  PRINT"SELECT ONE OF THE ABOVE, OR USE A NAME OF YOUR CHOICE."
    0x5918ec3f1e30 ---------A T 01280  PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    0x5918ec3f1ff0 ---------A   01290  INPUT A$
    0x5918ec3f22d0 ---------A   01300  T=26
    0x5918ec3f2860 ---------A T 01310  D=INT(RND(0)*10)
    0x5918ec3f2a90 ---------A   01320  IF D<6 THEN 1470
    0x5918ec3f2f10 ---------A T 01330  IF D<>6 AND D<>7 THEN 1360
    0x5918ec3f3210 ---------A   01340  R$="DESTROYER"
    0x5918ec3f34e0 ---------A   01350  W=2100
    0x5918ec3f3710 ---------A   01360  IF D<>8 THEN1390
    0x5918ec3f3950 ---------A T 01370  R$="DESTROYER ESCORT"
    0x5918ec3f3b60 ---------A   01380  W=1350
    0x5918ec3f3db0 ---------A T 01390  IF D<>9 THEN 1420
    0x5918ec3f3ff0 ---------A   01400  R$="TORPEDO BOAT"
    0x5918ec3f43f0 ---------A   01410  W=70
    0x5918ec3f4860 ---------A   01420  IF D=6 OR D=7 THEN 1450
    0x5918ec3f4b40 ---------A T 01430  Q=1
    0x5918ec3f4bb0 ---------A   01440  GOTO 1460
    0x5918ec3f4de0 ---------A   01450  Q=2
    0x5918ec3f5130 ---------A   01460  PRINT"JAPANESE"; R$; " IS ATTACKING."
    0x5918ec3f5390 ---------A   01470  IF D>=6 THEN 1490
    0x5918ec3f5930 ---------A   01480  A=INT(RND(0)*10)
    0x5918ec3f59a0 ---------A   01490  REM
    0x5918ec3f5b40 ---------A   01500  PRINT"ORDERS, COMMANDER";
    0x5918ec3f5d70 ---------A T 01510  INPUT C$
    0x5918ec3f5dd0 ----------   01520  CLS
    0x5918ec3f6270 ---------A   01530  C$=MID$(C$,1,1)
    0x5918ec3f64f0 ---------A T 01540  IF C$="P" THEN 1580
    0x5918ec3f6780 ---------A   01550  IF C$="T" THEN 2200
    0x5918ec3f6a00 ---------A T 01560  IF C$="D" THEN 2470
    0x5918ec3f6a90 ---------A   01570  GOTO 1500
    0x5918ec3f6f00 ---------A T 01580  IF D>5 OR Q>0 THEN 2180
    0x5918ec3f7160 ---------A   01590  IF A>=4 THEN 1670
    0x5918ec3f73b0 ---------A   01600  R$="FREIGHTER"
    0x5918ec3f7820 ---------A T 01610  IF A<>0 AND A<>1 THEN 1630
    0x5918ec3f7a40 ---------A   01620  W=6500
    0x5918ec3f7c90 ---------A   01630  IF A<>2 THEN 1650
    0x5918ec3f7eb0 ---------A   01640  W=7500
    0x5918ec3f8100 ---------A   01650  IF A<>3 THEN 1670
    0x5918ec3f8330 ---------A   01660  W=8100
    0x5918ec3f87a0 ---------A   01670  IF A<>7 AND A<>8 THEN 1730
    0x5918ec3f89e0 ---------A   01680  R$="TANKER"
    0x5918ec3f8c30 ---------A   01690  IF A<>8 THEN 1720
    0x5918ec3f8e50 ---------A   01700  W=10000
    0x5918ec3f8ec0 ---------A   01710  GOTO 1730
    0x5918ec3f90e0 ---------A   01720  W=9500
    0x5918ec3f9550 ---------A   01730  IF A<>4 AND A<>5 THEN 1790
    0x5918ec3f9ba0 ---------A   01740  R$="TRANSPORT"
    0x5918ec3f9df0 ---------A   01750  IF A<>5 THEN 1780
    0x5918ec3fa010 ---------A   01760  W=11500
    0x5918ec3fa080 ---------A   01770  GOTO 1790
    0x5918ec3fa290 ---------A   01780  W=8800
    0x5918ec3fa4f0 ---------A   01790  IF A<>6 THEN 1820
    0x5918ec3fa730 ---------A   01800  R$="AMMUNITION SHIP"
    0x5918ec3fa950 ---------A   01810  W=9650
    0x5918ec3fadc0 ---------A   01820  IF A>=9 OR A=6 THEN 1840
    0x5918ec3fafe0 ---------A   01830  Q=1
    0x5918ec3fb230 ---------A   01840  IF A<>6 THEN 1860
    0x5918ec3fb450 ---------A   01850  Q=1
    0x5918ec3fb6a0 ---------A   01860  IF A<9 THEN 2180
    0x5918ec3fbc40 ---------A   01870  E=INT(RND(0)*10)
    0x5918ec3fbe90 ---------A   01880  IF E<>0 THEN 1910
    0x5918ec3fc0d0 ---------A   01890  R$="BATTLESHIP"
    0x5918ec3fc2e0 ---------A   01900  W=33500
    0x5918ec3fc540 ---------A   01910  IF E<>1 THEN 1940
    0x5918ec3fc780 ---------A   01920  R$="AIRCRAFT CARRIER"
    0x5918ec3fc990 ---------A   01930  W=25700
    0x5918ec3fcbf0 ---------A   01940  IF E<>2 THEN 1970
    0x5918ec3fce30 ---------A   01950  R$="HEAVY CRUISER"
    0x5918ec3fd040 ---------A   01960  W=9900
    0x5918ec3fd2a0 ---------A   01970  IF E<>3 THEN 2000
    0x5918ec3fd4e0 ---------A   01980  R$="LIGHT CRUISER"
    0x5918ec3fd700 ---------A   01990  W=9600
    0x5918ec3fdb70 ---------A   02000  IF E<>4 AND E<>5 THEN 2030
    0x5918ec3fddb0 ---------A   02010  R$="DESTROYER"
    0x5918ec3fdfd0 ---------A   02020  W=2100
    0x5918ec3fe440 ---------A   02030  IF E<>6 AND E<>7 THEN 2060
    0x5918ec3fe680 ---------A   02040  R$="SUBMARINE"
    0x5918ec3fe8a0 ---------A   02050  W=1500
    0x5918ec3fed10 ---------A   02060  IF E<>8 AND E<>9 THEN 2080
    0x5918ec3fef30 ---------A   02070  W=1350
    0x5918ec3ff180 ---------A   02080  IF E<=5 THEN 2100
    0x5918ec3ff3b0 ---------A   02090  Q=1
    0x5918ec3ff820 ---------A   02100  IF E<>4 AND E<>5 THEN 2120
    0x5918ec3ffa50 ---------A   02110  Q=2
    0x5918ec3ffec0 ---------A   02120  IF E<>2 AND E<>3 THEN 2140
    0x5918ec4000e0 ---------A   02130  Q=3
    0x5918ec400330 ---------A   02140  IF E<>1 THEN 2160
    0x5918ec400550 ---------A   02150  W=4
    0x5918ec4007a0 ---------A   02160  IF E<>0 THEN 2180
    0x5918ec4009e0 ---------A   02170  Q=7
    0x5918ec400f30 ---------A   02180  PRINT"JAPANESE "; R$; " -"; W; "TONS."
    0x5918ec400fb0 ---------A   02190  GOTO  1490
    0x5918ec401220 ---------A   02200  IF Q>=1 THEN 2230
    0x5918ec4013a0 ---------A   02210  PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    0x5918ec401610 ---------A   02220  IF Q<1 THEN 1500
    0x5918ec401890 ---------A   02230  PRINTT; "TORPEDOES LEFT."
    0x5918ec401a20 ---------A   02240  PRINT"NUMBER OF TORPEDOES TO FIRE";
    0x5918ec401c50 ---------A   02250  INPUT R
    0x5918ec402200 ---------A   02260  IF R<0 OR T-R<0 THEN 2240
    0x5918ec402560 ---------A   02270  IF R<>INT(R) THEN 2240
    0x5918ec4028c0 ---------A   02280  T=T-R
    0x5918ec402e50 ---------A   02290  S=INT(RND(0)*10)
    0x5918ec4030c0 ---------A   02300  IF S>R THEN 2290
    0x5918ec403420 ---------A   02310  Q=Q-S
    0x5918ec403670 ---------A   02320  IF Q<=0 THEN 2340
    0x5918ec403970 ---------A   02330  Q$="DAMAGED"
    0x5918ec403bc0 ---------A   02340  IF Q>=1 THEN 2380
    0x5918ec403e00 ---------A   02350  Q$="SUNK"
    0x5918ec404210 ---------A   02360  O=O+W
    0x5918ec404620 ---------A   02370  L=L+1
    0x5918ec4052a0 ---------A   02380  PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    0x5918ec405500 ---------A   02390  IF S<>0 THEN 2410
    0x5918ec405580 ---------A   02400  PRINT
    0x5918ec4057f0 ---------A   02410  IF S<=0 THEN 2430
    0x5918ec405d60 ---------A   02420  PRINT"- ";R$;" ";Q$; "."
    0x5918ec4061e0 ---------A   02430  IF D>5 AND Q>0 THEN 2720
    0x5918ec406440 ---------A   02440  IF T<1 THEN 2770
    0x5918ec4066a0 ---------A   02450  IF Q<1 THEN 1310
    0x5918ec406720 ---------A   02460  GOTO  1490
    0x5918ec406990 ---------A   02470  IF D>=6 THEN 2490
    0x5918ec406cf0 ---------A   02480  PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    0x5918ec406f60 ---------A   02490  IF D<6 THEN 1500
    0x5918ec407620 ---------A   02500  U=INT(RND(0)*10)*250
    0x5918ec407bc0 ---------A   02510  PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    0x5918ec407f40 ----------   02520  FOR XX=1 TO 63
    0x5918ec4080a0 ----------   02530  PRINT"=";
    0x5918ec408130 ---------A   02540  NEXT
    0x5918ec408780 ---------A   02550  PRINTU;"YARDS"; TAB(32);Z;"FEET"
    0x5918ec408ac0 ---------A   02560  U=U-250
    0x5918ec408e00 ---------A   02570  Z=Z+25
    0x5918ec409060 ---------A   02580  IF U>-250 THEN 2550
    0x5918ec4092f0 ---------A   02590  IF R$="TORPEDO BOAT" THEN 2650
    0x5918ec409aa0 ---------A   02600  N=INT(RND(0)*10)*25+50
    0x5918ec40a150 ---------A   02610  IF N+26>Z AND N-26<Z THEN 2690
    0x5918ec40a350 ----------   02620  U=0
    0x5918ec40a580 ---------A   02630  Z=0
    0x5918ec40a5d0 ----------   02640  PRINT
    0x5918ec40a930 ---------A   02650  PRINT"THE USS ";A$;" IS UNHURT."
    0x5918ec40ab50 ---------A   02660  Q=0
    0x5918ec40abf0 ---------A   02670  GOTO 1310
    0x5918ec40ac40 ----------   02680  CLS
    0x5918ec40afa0 ---------A   02690  PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
    0x5918ec40b030 ---------A   02700  GOTO 2830
    0x5918ec40b3a0 ----------   02710  FOR I=1 TO 1500
    0x5918ec40b4e0 ---------A   02720  NEXT I
    0x5918ec40b580 ----------   02730  CLS
    0x5918ec40b8e0 ---------A   02740  PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
    0x5918ec40b970 ---------A   02750  GOTO 2830
    0x5918ec40bc20 ----------   02760  FOR I=1 TO 1500
    0x5918ec40bd60 ---------A   02770  NEXT I
    0x5918ec40be00 ----------   02780  CLS
    0x5918ec40c160 ---------A   02790  PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
    0x5918ec40c3f0 ---------A   02800  IF O<=0 THEN 2830
    0x5918ec40c450 ----------   02810  PRINT
    0x5918ec40c5d0 ---------A   02820  PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
    0x5918ec40c680 ---------A   02830  PRINT
    0x5918ec40cc00 ---------A   02840  PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
    0x5918ec40cf70 ---------A   02850  PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
    0x5918ec40cfd0 ----------   02860  PRINT
    0x5918ec40d070 ---------A   02870  PRINT
    0x5918ec40d2e0 ---------A   02880  INPUT "DO YOU WANT TO TRY AGAIN";ANS$
    0x5918ec40d720 ---------A   02890  IF LEFT$(ANS$,1)="Y" THEN 1090 ELSE END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02710 - 10000    7300 

 */



/*
 *  Symbol Table Listing for 'basic/warfish.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ANS$                     String      
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C$                       String      
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
    I$                       String      
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    L                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    O                        Integer     
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    Q$                       String      
    Q0                       Integer     
    R                        Integer     
    R$                       String      
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    XX                       Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/warfish.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5918ec3eadb0 ---------A   01000  REM NOTE
    0x5918ec3eaf30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5918ec3eae70 ---------A   01020  CLS
    0x5918ec3e86d0 ---------A   01030  PRINT@413, "WARFISH"
    0x5918ec3e8670 ---------A   01040  PRINT
    0x5918ec3ea5e0 ---------A   01050  PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    0x5918ec3e89e0 ---------A   01060  PRINT@960, "";
    0x5918ec3e9040 ---------A   01070  INPUT "DO YOU NEED INSTRUCTIONS";I$
    0x5918ec3e8ea0 ---------A   01080  Q0=RND(0)
    0x5918ec3e8be0 ---------A T 01090  REM
    0x5918ec3e9800 ---------A   01100  IF LEFT$(I$,1)="N" THEN CLS
    0x5918ec3e9860 ---------A   01110  GOTO 1120
    0x5918ec3f1e30 ---------A T 01120  PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    0x5918ec3f1ff0 ---------A   01130  INPUT A$
    0x5918ec3f22d0 ---------A   01140  T=26
    0x5918ec3f2860 ---------A T 01150  D=INT(RND(0)*10)
    0x5918ec3f2a90 ---------A   01160  IF D<6 THEN 1310
    0x5918ec3f2f10 ---------A   01170  IF D<>6 AND D<>7 THEN 1200
    0x5918ec3f3210 ---------A   01180  R$="DESTROYER"
    0x5918ec3f34e0 ---------A   01190  W=2100
    0x5918ec3f3710 ---------A T 01200  IF D<>8 THEN1230
    0x5918ec3f3950 ---------A   01210  R$="DESTROYER ESCORT"
    0x5918ec3f3b60 ---------A   01220  W=1350
    0x5918ec3f3db0 ---------A T 01230  IF D<>9 THEN 1260
    0x5918ec3f3ff0 ---------A   01240  R$="TORPEDO BOAT"
    0x5918ec3f43f0 ---------A   01250  W=70
    0x5918ec3f4860 ---------A T 01260  IF D=6 OR D=7 THEN 1290
    0x5918ec3f4b40 ---------A   01270  Q=1
    0x5918ec3f4bb0 ---------A   01280  GOTO 1300
    0x5918ec3f4de0 ---------A T 01290  Q=2
    0x5918ec3f5130 ---------A T 01300  PRINT"JAPANESE"; R$; " IS ATTACKING."
    0x5918ec3f5390 ---------A T 01310  IF D>=6 THEN 1330
    0x5918ec3f5930 ---------A   01320  A=INT(RND(0)*10)
    0x5918ec3f59a0 ---------A T 01330  REM
    0x5918ec3f5b40 ---------A T 01340  PRINT"ORDERS, COMMANDER";
    0x5918ec3f5d70 ---------A   01350  INPUT C$
    0x5918ec3f5dd0 ---------A   01360  CLS
    0x5918ec3f6270 ---------A   01370  C$=MID$(C$,1,1)
    0x5918ec3f64f0 ---------A   01380  IF C$="P" THEN 1420
    0x5918ec3f6780 ---------A   01390  IF C$="T" THEN 2040
    0x5918ec3f6a00 ---------A   01400  IF C$="D" THEN 2310
    0x5918ec3f6a90 ---------A   01410  GOTO 1340
    0x5918ec3f6f00 ---------A T 01420  IF D>5 OR Q>0 THEN 2020
    0x5918ec3f7160 ---------A   01430  IF A>=4 THEN 1510
    0x5918ec3f73b0 ---------A   01440  R$="FREIGHTER"
    0x5918ec3f7820 ---------A   01450  IF A<>0 AND A<>1 THEN 1470
    0x5918ec3f7a40 ---------A   01460  W=6500
    0x5918ec3f7c90 ---------A T 01470  IF A<>2 THEN 1490
    0x5918ec3f7eb0 ---------A   01480  W=7500
    0x5918ec3f8100 ---------A T 01490  IF A<>3 THEN 1510
    0x5918ec3f8330 ---------A   01500  W=8100
    0x5918ec3f87a0 ---------A T 01510  IF A<>7 AND A<>8 THEN 1570
    0x5918ec3f89e0 ---------A   01520  R$="TANKER"
    0x5918ec3f8c30 ---------A   01530  IF A<>8 THEN 1560
    0x5918ec3f8e50 ---------A   01540  W=10200
    0x5918ec3f8ec0 ---------A   01550  GOTO 1570
    0x5918ec3f90e0 ---------A T 01560  W=9500
    0x5918ec3f9550 ---------A T 01570  IF A<>4 AND A<>5 THEN 1630
    0x5918ec3f9ba0 ---------A   01580  R$="TRANSPORT"
    0x5918ec3f9df0 ---------A   01590  IF A<>5 THEN 1620
    0x5918ec3fa010 ---------A   01600  W=11500
    0x5918ec3fa080 ---------A   01610  GOTO 1630
    0x5918ec3fa290 ---------A T 01620  W=8800
    0x5918ec3fa4f0 ---------A T 01630  IF A<>6 THEN 1660
    0x5918ec3fa730 ---------A   01640  R$="AMMUNITION SHIP"
    0x5918ec3fa950 ---------A   01650  W=9650
    0x5918ec3fadc0 ---------A T 01660  IF A>=9 OR A=6 THEN 1680
    0x5918ec3fafe0 ---------A   01670  Q=1
    0x5918ec3fb230 ---------A T 01680  IF A<>6 THEN 1700
    0x5918ec3fb450 ---------A   01690  Q=1
    0x5918ec3fb6a0 ---------A T 01700  IF A<9 THEN 2020
    0x5918ec3fbc40 ---------A   01710  E=INT(RND(0)*10)
    0x5918ec3fbe90 ---------A   01720  IF E<>0 THEN 1750
    0x5918ec3fc0d0 ---------A   01730  R$="BATTLESHIP"
    0x5918ec3fc2e0 ---------A   01740  W=33500
    0x5918ec3fc540 ---------A T 01750  IF E<>1 THEN 1780
    0x5918ec3fc780 ---------A   01760  R$="AIRCRAFT CARRIER"
    0x5918ec3fc990 ---------A   01770  W=25700
    0x5918ec3fcbf0 ---------A T 01780  IF E<>2 THEN 1810
    0x5918ec3fce30 ---------A   01790  R$="HEAVY CRUISER"
    0x5918ec3fd040 ---------A   01800  W=9900
    0x5918ec3fd2a0 ---------A T 01810  IF E<>3 THEN 1840
    0x5918ec3fd4e0 ---------A   01820  R$="LIGHT CRUISER"
    0x5918ec3fd700 ---------A   01830  W=9600
    0x5918ec3fdb70 ---------A T 01840  IF E<>4 AND E<>5 THEN 1870
    0x5918ec3fddb0 ---------A   01850  R$="DESTROYER"
    0x5918ec3fdfd0 ---------A   01860  W=2100
    0x5918ec3fe440 ---------A T 01870  IF E<>6 AND E<>7 THEN 1900
    0x5918ec3fe680 ---------A   01880  R$="SUBMARINE"
    0x5918ec3fe8a0 ---------A   01890  W=1500
    0x5918ec3fed10 ---------A T 01900  IF E<>8 AND E<>9 THEN 1920
    0x5918ec3fef30 ---------A   01910  W=1350
    0x5918ec3ff180 ---------A T 01920  IF E<=5 THEN 1940
    0x5918ec3ff3b0 ---------A   01930  Q=1
    0x5918ec3ff820 ---------A T 01940  IF E<>4 AND E<>5 THEN 1960
    0x5918ec3ffa50 ---------A   01950  Q=2
    0x5918ec3ffec0 ---------A T 01960  IF E<>2 AND E<>3 THEN 1980
    0x5918ec4000e0 ---------A   01970  Q=3
    0x5918ec400330 ---------A T 01980  IF E<>1 THEN 2000
    0x5918ec400550 ---------A   01990  W=4
    0x5918ec4007a0 ---------A T 02000  IF E<>0 THEN 2020
    0x5918ec4009e0 ---------A   02010  Q=7
    0x5918ec400f30 ---------A T 02020  PRINT"JAPANESE "; R$; " -"; W; "TONS."
    0x5918ec400fb0 ---------A   02030  GOTO  1330
    0x5918ec401220 ---------A T 02040  IF Q>=1 THEN 2070
    0x5918ec4013a0 ---------A   02050  PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    0x5918ec401610 ---------A   02060  IF Q<1 THEN 1340
    0x5918ec401890 ---------A T 02070  PRINTT; "TORPEDOES LEFT."
    0x5918ec401a20 ---------A T 02080  PRINT"NUMBER OF TORPEDOES TO FIRE";
    0x5918ec401c50 ---------A   02090  INPUT R
    0x5918ec402200 ---------A   02100  IF R<0 OR T-R<0 THEN 2080
    0x5918ec402560 ---------A   02110  IF R<>INT(R) THEN 2080
    0x5918ec4028c0 ---------A   02120  T=T-R
    0x5918ec402e50 ---------A T 02130  S=INT(RND(0)*10)
    0x5918ec4030c0 ---------A   02140  IF S>R THEN 2130
    0x5918ec403420 ---------A   02150  Q=Q-S
    0x5918ec403670 ---------A   02160  IF Q<=0 THEN 2180
    0x5918ec403970 ---------A   02170  Q$="DAMAGED"
    0x5918ec403bc0 ---------A T 02180  IF Q>=1 THEN 2220
    0x5918ec403e00 ---------A   02190  Q$="SUNK"
    0x5918ec404210 ---------A   02200  O=O+W
    0x5918ec404620 ---------A   02210  L=L+1
    0x5918ec4052a0 ---------A T 02220  PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    0x5918ec405500 ---------A   02230  IF S<>0 THEN 2250
    0x5918ec405580 ---------A   02240  PRINT
    0x5918ec4057f0 ---------A T 02250  IF S<=0 THEN 2270
    0x5918ec405d60 ---------A   02260  PRINT"- ";R$;" ";Q$; "."
    0x5918ec4061e0 ---------A T 02270  IF D>5 AND Q>0 THEN 2540
    0x5918ec406440 ---------A   02280  IF T<1 THEN 2580
    0x5918ec4066a0 ---------A   02290  IF Q<1 THEN 1150
    0x5918ec406720 ---------A   02300  GOTO  1330
    0x5918ec406990 ---------A T 02310  IF D>=6 THEN 2330
    0x5918ec406cf0 ---------A   02320  PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    0x5918ec406f60 ---------A T 02330  IF D<6 THEN 1340
    0x5918ec407620 ---------A   02340  U=INT(RND(0)*10)*250
    0x5918ec407bc0 ---------A   02350  PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    0x5918ec407f40 ---------A   02360  FOR XX=1 TO 63
    0x5918ec4080a0 ---------A   02370  PRINT"=";
    0x5918ec408130 ---------A   02380  NEXT
    0x5918ec408780 ---------A T 02390  PRINTU;"YARDS"; TAB(32);Z;"FEET"
    0x5918ec408ac0 ---------A   02400  U=U-250
    0x5918ec408e00 ---------A   02410  Z=Z+25
    0x5918ec409060 ---------A   02420  IF U>-250 THEN 2390
    0x5918ec4092f0 ---------A   02430  IF R$="TORPEDO BOAT" THEN 2490
    0x5918ec409aa0 ---------A   02440  N=INT(RND(0)*10)*25+50
    0x5918ec40a150 ---------A   02450  IF N+26>Z AND N-26<Z THEN 2520
    0x5918ec40a350 ---------A   02460  U=0
    0x5918ec40a580 ---------A   02470  Z=0
    0x5918ec40a5d0 ---------A   02480  PRINT
    0x5918ec40a930 ---------A T 02490  PRINT"THE USS ";A$;" IS UNHURT."
    0x5918ec40ab50 ---------A   02500  Q=0
    0x5918ec40abf0 ---------A   02510  GOTO 1150
    0x5918ec40afa0 ---------A T 02520  PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
    0x5918ec40b030 ---------A   02530  GOTO 2640
    0x5918ec40b4e0 ---------A T 02540  NEXT I
    0x5918ec40b580 ---------A   02550  CLS
    0x5918ec40b8e0 ---------A   02560  PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
    0x5918ec40b970 ---------A   02570  GOTO 2640
    0x5918ec40bd60 ---------A T 02580  NEXT I
    0x5918ec40be00 ---------A   02590  CLS
    0x5918ec40c160 ---------A   02600  PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
    0x5918ec40c3f0 ---------A   02610  IF O<=0 THEN 2640
    0x5918ec40c450 ---------A   02620  PRINT
    0x5918ec40c5d0 ---------A   02630  PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
    0x5918ec40c680 ---------A T 02640  PRINT
    0x5918ec40cc00 ---------A   02650  PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
    0x5918ec40cf70 ---------A   02660  PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
    0x5918ec40cfd0 ---------A   02670  PRINT
    0x5918ec40d070 ---------A   02680  PRINT
    0x5918ec40d2e0 ---------A   02690  INPUT "DO YOU WANT TO TRY AGAIN";ANS$
    0x5918ec40d720 ---------A   02700  IF LEFT$(ANS$,1)="Y" THEN 1090 ELSE END
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
int    A_int;                                     // Basic: A 
char*  A_str;                                     // Basic: A$ 
char*  ANS_str;                                   // Basic: ANS$ 
char*  C_str;                                     // Basic: C$ 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    I_int;                                     // Basic: I 
char*  I_str;                                     // Basic: I$ 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
int    O_int;                                     // Basic: O 
int    Q_int;                                     // Basic: Q 
char*  Q_str;                                     // Basic: Q$ 
int    Q0_int;                                    // Basic: Q0 
int    R_int;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
int    U_int;                                     // Basic: U 
int    W_int;                                     // Basic: W 
int    XX_int;                                    // Basic: XX 
int    Z_int;                                     // Basic: Z 
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
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM NOTE
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS
    ClearScreen(0);
    // 01030 PRINT@413, "WARFISH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WARFISH");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,7);strcat(buf,"COPYRIGHT 1979 COMPUTING MORRISTOWN NJ");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT@960, "";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"");fputs(buf,fh); };
    // 01070 INPUT "DO YOU NEED INSTRUCTIONS";I$
    // Start of Basic INPUT statement 01070
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"DO YOU NEED INSTRUCTIONS");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&I_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01070
    // 01080 Q0=RND(0)
    Q0_int = RND(0);

  Lbl_01090:
    // 01090 REM
    // 01100 IF LEFT$(I$,1)="N" THEN CLS
    if(LEFT$(I_str,1)=='N') {
    }
    // 01110 GOTO 1120
    goto Lbl_01120;

  Lbl_01120:
    // 01120 PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PRINT THE NAME OF YOUR SUBMARINE");fputs(buf,fh); };
    // 01130 INPUT A$
    // Start of Basic INPUT statement 01130
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 T=26
    T_int = 26;

  Lbl_01150:
    // 01150 D=INT(RND(0)*10)
    D_int = INT(RND(0)*10);
    // 01160 IF D<6 THEN 1310
    if(D_int<6)goto Lbl_01310;
    // 01170 IF D<>6 AND D<>7 THEN 1200
    if(D_int!=6&&D_int!=7)goto Lbl_01200;
    // 01180 R$="DESTROYER"
    GLBpStr="DESTROYER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01190 W=2100
    W_int = 2100;

  Lbl_01200:
    // 01200 IF D<>8 THEN1230
    if(D_int!=8)goto Lbl_01230;
    // 01210 R$="DESTROYER ESCORT"
    GLBpStr="DESTROYER ESCORT";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01220 W=1350
    W_int = 1350;

  Lbl_01230:
    // 01230 IF D<>9 THEN 1260
    if(D_int!=9)goto Lbl_01260;
    // 01240 R$="TORPEDO BOAT"
    GLBpStr="TORPEDO BOAT";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01250 W=70
    W_int = 70;

  Lbl_01260:
    // 01260 IF D=6 OR D=7 THEN 1290
    if(D_int==6||D_int==7)goto Lbl_01290;
    // 01270 Q=1
    Q_int = 1;
    // 01280 GOTO 1300
    goto Lbl_01300;

  Lbl_01290:
    // 01290 Q=2
    Q_int = 2;

  Lbl_01300:
    // 01300 PRINT"JAPANESE"; R$; " IS ATTACKING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"JAPANESE"); strcat(buf,R_str);strcat(buf," IS ATTACKING.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01310:
    // 01310 IF D>=6 THEN 1330
    if(D_int>=6)goto Lbl_01330;
    // 01320 A=INT(RND(0)*10)
    A_int = INT(RND(0)*10);

  Lbl_01330:
    // 01330 REM

  Lbl_01340:
    // 01340 PRINT"ORDERS, COMMANDER";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ORDERS, COMMANDER");fputs(buf,fh); };
    // 01350 INPUT C$
    // Start of Basic INPUT statement 01350
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&C_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01350
    // 01360 CLS
    ClearScreen(0);
    // 01370 C$=MID$(C$,1,1)
    GLBpStr=MID$(C_str,1,1);
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01380 IF C$="P" THEN 1420
    if(strcmp(C_str,"P")==0)goto Lbl_01420;
    // 01390 IF C$="T" THEN 2040
    if(strcmp(C_str,"T")==0)goto Lbl_02040;
    // 01400 IF C$="D" THEN 2310
    if(strcmp(C_str,"D")==0)goto Lbl_02310;
    // 01410 GOTO 1340
    goto Lbl_01340;

  Lbl_01420:
    // 01420 IF D>5 OR Q>0 THEN 2020
    if(D_int>5||Q_int>0)goto Lbl_02020;
    // 01430 IF A>=4 THEN 1510
    if(A_int>=4)goto Lbl_01510;
    // 01440 R$="FREIGHTER"
    GLBpStr="FREIGHTER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01450 IF A<>0 AND A<>1 THEN 1470
    if(A_int!=0&&A_int!=1)goto Lbl_01470;
    // 01460 W=6500
    W_int = 6500;

  Lbl_01470:
    // 01470 IF A<>2 THEN 1490
    if(A_int!=2)goto Lbl_01490;
    // 01480 W=7500
    W_int = 7500;

  Lbl_01490:
    // 01490 IF A<>3 THEN 1510
    if(A_int!=3)goto Lbl_01510;
    // 01500 W=8100
    W_int = 8100;

  Lbl_01510:
    // 01510 IF A<>7 AND A<>8 THEN 1570
    if(A_int!=7&&A_int!=8)goto Lbl_01570;
    // 01520 R$="TANKER"
    GLBpStr="TANKER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01530 IF A<>8 THEN 1560
    if(A_int!=8)goto Lbl_01560;
    // 01540 W=10200
    W_int = 10000;
    // 01550 GOTO 1570
    goto Lbl_01570;

  Lbl_01560:
    // 01560 W=9500
    W_int = 9500;

  Lbl_01570:
    // 01570 IF A<>4 AND A<>5 THEN 1630
    if(A_int!=4&&A_int!=5)goto Lbl_01630;
    // 01580 R$="TRANSPORT"
    GLBpStr="TRANSPORT";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01590 IF A<>5 THEN 1620
    if(A_int!=5)goto Lbl_01620;
    // 01600 W=11500
    W_int = 11500;
    // 01610 GOTO 1630
    goto Lbl_01630;

  Lbl_01620:
    // 01620 W=8800
    W_int = 8800;

  Lbl_01630:
    // 01630 IF A<>6 THEN 1660
    if(A_int!=6)goto Lbl_01660;
    // 01640 R$="AMMUNITION SHIP"
    GLBpStr="AMMUNITION SHIP";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01650 W=9650
    W_int = 9650;

  Lbl_01660:
    // 01660 IF A>=9 OR A=6 THEN 1680
    if(A_int>=9||A_int==6)goto Lbl_01680;
    // 01670 Q=1
    Q_int = 1;

  Lbl_01680:
    // 01680 IF A<>6 THEN 1700
    if(A_int!=6)goto Lbl_01700;
    // 01690 Q=1
    Q_int = 1;

  Lbl_01700:
    // 01700 IF A<9 THEN 2020
    if(A_int<9)goto Lbl_02020;
    // 01710 E=INT(RND(0)*10)
    E_int = INT(RND(0)*10);
    // 01720 IF E<>0 THEN 1750
    if(E_int!=0)goto Lbl_01750;
    // 01730 R$="BATTLESHIP"
    GLBpStr="BATTLESHIP";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01740 W=33500
    W_int = 33500;

  Lbl_01750:
    // 01750 IF E<>1 THEN 1780
    if(E_int!=1)goto Lbl_01780;
    // 01760 R$="AIRCRAFT CARRIER"
    GLBpStr="AIRCRAFT CARRIER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01770 W=25700
    W_int = 25700;

  Lbl_01780:
    // 01780 IF E<>2 THEN 1810
    if(E_int!=2)goto Lbl_01810;
    // 01790 R$="HEAVY CRUISER"
    GLBpStr="HEAVY CRUISER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01800 W=9900
    W_int = 9900;

  Lbl_01810:
    // 01810 IF E<>3 THEN 1840
    if(E_int!=3)goto Lbl_01840;
    // 01820 R$="LIGHT CRUISER"
    GLBpStr="LIGHT CRUISER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01830 W=9600
    W_int = 9600;

  Lbl_01840:
    // 01840 IF E<>4 AND E<>5 THEN 1870
    if(E_int!=4&&E_int!=5)goto Lbl_01870;
    // 01850 R$="DESTROYER"
    GLBpStr="DESTROYER";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01860 W=2100
    W_int = 2100;

  Lbl_01870:
    // 01870 IF E<>6 AND E<>7 THEN 1900
    if(E_int!=6&&E_int!=7)goto Lbl_01900;
    // 01880 R$="SUBMARINE"
    GLBpStr="SUBMARINE";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01890 W=1500
    W_int = 1500;

  Lbl_01900:
    // 01900 IF E<>8 AND E<>9 THEN 1920
    if(E_int!=8&&E_int!=9)goto Lbl_01920;
    // 01910 W=1350
    W_int = 1350;

  Lbl_01920:
    // 01920 IF E<=5 THEN 1940
    if(E_int<=5)goto Lbl_01940;
    // 01930 Q=1
    Q_int = 1;

  Lbl_01940:
    // 01940 IF E<>4 AND E<>5 THEN 1960
    if(E_int!=4&&E_int!=5)goto Lbl_01960;
    // 01950 Q=2
    Q_int = 2;

  Lbl_01960:
    // 01960 IF E<>2 AND E<>3 THEN 1980
    if(E_int!=2&&E_int!=3)goto Lbl_01980;
    // 01970 Q=3
    Q_int = 3;

  Lbl_01980:
    // 01980 IF E<>1 THEN 2000
    if(E_int!=1)goto Lbl_02000;
    // 01990 W=4
    W_int = 4;

  Lbl_02000:
    // 02000 IF E<>0 THEN 2020
    if(E_int!=0)goto Lbl_02020;
    // 02010 Q=7
    Q_int = 7;

  Lbl_02020:
    // 02020 PRINT"JAPANESE "; R$; " -"; W; "TONS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"JAPANESE "); strcat(buf,R_str);strcat(buf," -"); b2c_INT(buf,W_int);strcat(buf,"TONS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02030 GOTO  1330
    goto Lbl_01330;

  Lbl_02040:
    // 02040 IF Q>=1 THEN 2070
    if(Q_int>=1)goto Lbl_02070;
    // 02050 PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN.");strcat(buf,"\n");fputs(buf,fh); };
    // 02060 IF Q<1 THEN 1340
    if(Q_int<1)goto Lbl_01340;

  Lbl_02070:
    // 02070 PRINTT; "TORPEDOES LEFT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,T_int);strcat(buf,"TORPEDOES LEFT.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02080:
    // 02080 PRINT"NUMBER OF TORPEDOES TO FIRE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NUMBER OF TORPEDOES TO FIRE");fputs(buf,fh); };
    // 02090 INPUT R
    // Start of Basic INPUT statement 02090
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02090
    // 02100 IF R<0 OR T-R<0 THEN 2080
    if(R_int<0||T_int-R_int<0)goto Lbl_02080;
    // 02110 IF R<>INT(R) THEN 2080
    if(R_int!=INT(R_int))goto Lbl_02080;
    // 02120 T=T-R
    T_int = T_int-R_int;

  Lbl_02130:
    // 02130 S=INT(RND(0)*10)
    S_int = INT(RND(0)*10);
    // 02140 IF S>R THEN 2130
    if(S_int>R_int)goto Lbl_02130;
    // 02150 Q=Q-S
    Q_int = Q_int-S_int;
    // 02160 IF Q<=0 THEN 2180
    if(Q_int<=0)goto Lbl_02180;
    // 02170 Q$="DAMAGED"
    GLBpStr="DAMAGED";
    Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_02180:
    // 02180 IF Q>=1 THEN 2220
    if(Q_int>=1)goto Lbl_02220;
    // 02190 Q$="SUNK"
    GLBpStr="SUNK";
    Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02200 O=O+W
    O_int = O_int+W_int;
    // 02210 L=L+1
    L_int = L_int+1;

  Lbl_02220:
    // 02220 PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,R_int);strcat(buf,"TORPEDOES FIRED -"); b2c_INT(buf,S_int);strcat(buf,"HITS ");fputs(buf,fh); };
    // 02230 IF S<>0 THEN 2250
    if(S_int!=0)goto Lbl_02250;
    // 02240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02250:
    // 02250 IF S<=0 THEN 2270
    if(S_int<=0)goto Lbl_02270;
    // 02260 PRINT"- ";R$;" ";Q$; "."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"- "); strcat(buf,R_str);strcat(buf," "); strcat(buf,Q_str);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02270:
    // 02270 IF D>5 AND Q>0 THEN 2540
    if(D_int>5&&Q_int>0)goto Lbl_02540;
    // 02280 IF T<1 THEN 2580
    if(T_int<1)goto Lbl_02580;
    // 02290 IF Q<1 THEN 1150
    if(Q_int<1)goto Lbl_01150;
    // 02300 GOTO  1330
    goto Lbl_01330;

  Lbl_02310:
    // 02310 IF D>=6 THEN 2330
    if(D_int>=6)goto Lbl_02330;
    // 02320 PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THE USS "); strcat(buf,A_str);strcat(buf," IS NOT UNDER ATTACK.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02330:
    // 02330 IF D<6 THEN 1340
    if(D_int<6)goto Lbl_01340;
    // 02340 U=INT(RND(0)*10)*250
    U_int = INT(RND(0)*10)*250;
    // 02350 PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DISTANCE OF "); strcat(buf,R_str);b2c_TAB(buf,32);strcat(buf,"DEPTH OF USS "); strcat(buf,A_str);strcat(buf,"\n");fputs(buf,fh); };
    // 02360 FOR XX=1 TO 63
    for(XX_int=1;XX_int<=63;XX_int++){
        // 02370 PRINT"=";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"=");fputs(buf,fh); };
        // 02380 NEXT
        int dummy_2380=0; // Ignore this line.
    };

  Lbl_02390:
    // 02390 PRINTU;"YARDS"; TAB(32);Z;"FEET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,U_int);strcat(buf,"YARDS");b2c_TAB(buf,32); b2c_INT(buf,Z_int);strcat(buf,"FEET");strcat(buf,"\n");fputs(buf,fh); };
    // 02400 U=U-250
    U_int = U_int-250;
    // 02410 Z=Z+25
    Z_int = Z_int+25;
    // 02420 IF U>-250 THEN 2390
    if(U_int>-250)goto Lbl_02390;
    // 02430 IF R$="TORPEDO BOAT" THEN 2490
    if(strcmp(R_str,"TORPEDO BOAT")==0)goto Lbl_02490;
    // 02440 N=INT(RND(0)*10)*25+50
    N_int = INT(RND(0)*10)*25+50;
    // 02450 IF N+26>Z AND N-26<Z THEN 2520
    if(N_int+26>Z_int&&N_int-26<Z_int)goto Lbl_02520;
    // 02460 U=0
    U_int = 0;
    // 02470 Z=0
    Z_int = 0;
    // 02480 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02490:
    // 02490 PRINT"THE USS ";A$;" IS UNHURT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE USS "); strcat(buf,A_str);strcat(buf," IS UNHURT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02500 Q=0
    Q_int = 0;
    // 02510 GOTO 1150
    goto Lbl_01150;

  Lbl_02520:
    // 02520 PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE USS "); strcat(buf,A_str);strcat(buf," HAS BEEN SUNK BY DEPTH CHARGES.");strcat(buf,"\n");fputs(buf,fh); };
    // 02530 GOTO 2640
    goto Lbl_02640;

  Lbl_02540:
    // 02540 NEXT I
    int dummy_2540=0; // Ignore this line.
}; // End-For(I_int)
// 02550 CLS
ClearScreen(0);
// 02560 PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE USS "); strcat(buf,A_str);strcat(buf," HAS BEEN SUNK BY GUNFIRE.");strcat(buf,"\n");fputs(buf,fh); };
// 02570 GOTO 2640
goto Lbl_02640;

  Lbl_02580:
// 02580 NEXT I
int dummy_2580=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_int)
r* CName(const char*)// 02590 CLS
r* CName(const char*)ClearScreen(0);
r* CName(const char*)// 02600 PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE USS "); strcat(buf,A_str);strcat(buf," HAS EXPENDED ALL ITS TORPEDOES.");strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 02610 IF O<=0 THEN 2640
r* CName(const char*)if(O_int<=0)goto Lbl_02640;
r* CName(const char*)// 02620 PRINT
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 02630 PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02640:
r* CName(const char*)// 02640 PRINT
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 02650 PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE SUBMARINE USS "); strcat(buf,A_str);strcat(buf," HAS SUNK A TOTAL OF"); b2c_INT(buf,L_int);strcat(buf,"SHIPS.");strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 02660 PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL ENEMY TONNAGE SUNK: "); b2c_INT(buf,O_int);strcat(buf,"TONS");strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 02670 PRINT
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 02680 PRINT
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 02690 INPUT "DO YOU WANT TO TRY AGAIN";ANS$
r* CName(const char*)// Start of Basic INPUT statement 02690
r* CName(const char*){
int numargs=1;
char *args[numargs+1];
bool echoeol=true;
while(true){
    fprintf(stdout,"DO YOU WANT TO TRY AGAIN");
    int err=input(args,numargs,echoeol);
    if(err==0x03) break;
    if(err || 
        (err += b2c_strtos(&ANS_str,args,0)) ){
         printf("?Redo from start\n");
    }else{
        break;
    };
};
r* CName(const char*)}; // End of Basic INPUT statement 02690
r* CName(const char*)// 02700 IF LEFT$(ANS$,1)="Y" THEN 1090 ELSE END
r* CName(const char*)if(LEFT$(ANS_str,1)=='Y')goto Lbl_01090;
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
