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
    0x59d90c5845d0 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x59d90c594f00 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x59d90c595e70 ---------A   00010 CLS: PRINT@413, "WARFISH"
    0x59d90c595ff0 ---------A   00020 PRINT: PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    0x59d90c593610 ---------A   00030 PRINT@960, "";: INPUT "DO YOU NEED INSTRUCTIONS";I$
    0x59d90c595620 ---------A   00040 Q0=RND(0)
    0x59d90c595690 ---------A T 00050 REM
    0x59d90c5946e0 ---------A   00060 IF LEFT$(I$,1)="N" THEN CLS: GOTO 190
    0x59d90c59b980 ----------   00070 CLS:PRINTTAB(28); "WARFISH":PRINT
    0x59d90c59bae0 ----------   00080 PRINT"YOU COMMAND AN AMERICAN SUBMARINE THAT HAS BEEN SENT OUT"
    0x59d90c59bc30 ----------   00090 PRINT"TO ATTACK JAPANESE SHIPS AT SEA DURING WORLD WAR II."
    0x59d90c59bcd0 ----------   00100 PRINT
    0x59d90c59be70 ----------   00110 PRINT"THE ORDERS THAT CAN BE GIVEN ARE THE FOLLOWING:"
    0x59d90c59c010 ----------   00120 PRINT"    PERISCOPE - TO SEARCH FOR JAPANESE SHIPS."
    0x59d90c59c1b0 ----------   00130 PRINT"    TORPEDO - TO LAUNCH TORPEDOES AT JAPANESE SHIPS."
    0x59d90c59c350 ----------   00140 PRINT"    DIVE - TO ESCAPE ATTACKING JAPANESE SHIPS."
    0x59d90c59c540 ----------   00150 PRINT"THESE ARE SOME HISTORIC U.S. NAVY SUBMARINES:":PRINT
    0x59d90c59c6e0 ----------   00160 PRINT"    TAUTOG, SILVERSIDES, CAVALLA, BLUEFISH, THRESHER"
    0x59d90c59c8d0 ----------   00170 PRINT"    SWORDFISH, FLASHER, TROUT, ARCHER.":PRINT
    0x59d90c59ca70 ----------   00180 PRINT"SELECT ONE OF THE ABOVE, OR USE A NAME OF YOUR CHOICE."
    0x59d90c59cb80 ---------A T 00190 PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    0x59d90c59cd50 ---------A   00200 INPUT A$
    0x59d90c59d030 ---------A   00210 T=26
    0x59d90c59d5c0 ---------A T 00220 D=INT(RND(0)*10)
    0x59d90c59d7f0 ---------A   00230 IF D<6 THEN 380
    0x59d90c59dc70 ---------A   00240 IF D<>6 AND D<>7 THEN 270
    0x59d90c59df70 ---------A   00250 R$="DESTROYER"
    0x59d90c59e240 ---------A   00260 W=2100
    0x59d90c59e470 ---------A T 00270 IF D<>8 THEN300
    0x59d90c59e6b0 ---------A   00280 R$="DESTROYER ESCORT"
    0x59d90c59e8c0 ---------A   00290 W=1350
    0x59d90c59eb10 ---------A T 00300 IF D<>9 THEN 330
    0x59d90c59ed50 ---------A   00310 R$="TORPEDO BOAT"
    0x59d90c59f150 ---------A   00320 W=70
    0x59d90c59f5c0 ---------A T 00330 IF D=6 OR D=7 THEN 360
    0x59d90c59f8a0 ---------A   00340 Q=1
    0x59d90c59f910 ---------A   00350 GOTO 370
    0x59d90c59fb30 ---------A T 00360 Q=2
    0x59d90c59fe80 ---------A T 00370 PRINT"JAPANESE"; R$; " IS ATTACKING."
    0x59d90c5a00d0 ---------A T 00380 IF D>=6 THEN 400
    0x59d90c5a0670 ---------A   00390 A=INT(RND(0)*10)
    0x59d90c5a06e0 ---------A T 00400 REM
    0x59d90c5a0870 ---------A T 00410 PRINT"ORDERS, COMMANDER";
    0x59d90c5a0a90 ---------A   00420 INPUT C$
    0x59d90c5a0f80 ---------A   00430 CLS: C$=MID$(C$,1,1)
    0x59d90c5a1200 ---------A   00440 IF C$="P" THEN 480
    0x59d90c5a1490 ---------A   00450 IF C$="T" THEN 1100
    0x59d90c5a1710 ---------A   00460 IF C$="D" THEN 1370
    0x59d90c5a17a0 ---------A   00470 GOTO 410
    0x59d90c5a1c00 ---------A T 00480 IF D>5 OR Q>0 THEN 1080
    0x59d90c5a1e60 ---------A   00490 IF A>=4 THEN 570
    0x59d90c5a20b0 ---------A   00500 R$="FREIGHTER"
    0x59d90c5a2520 ---------A   00510 IF A<>0 AND A<>1 THEN 530
    0x59d90c5a2740 ---------A   00520 W=6500
    0x59d90c5a2990 ---------A T 00530 IF A<>2 THEN 550
    0x59d90c5a2bb0 ---------A   00540 W=7500
    0x59d90c5a2e00 ---------A T 00550 IF A<>3 THEN 570
    0x59d90c5a3030 ---------A   00560 W=8100
    0x59d90c5a34a0 ---------A T 00570 IF A<>7 AND A<>8 THEN 630
    0x59d90c5a36e0 ---------A   00580 R$="TANKER"
    0x59d90c5a3930 ---------A   00590 IF A<>8 THEN 620
    0x59d90c5a3b50 ---------A   00600 W=10000
    0x59d90c5a3bc0 ---------A   00610 GOTO 630
    0x59d90c5a3dd0 ---------A T 00620 W=9500
    0x59d90c5a4240 ---------A T 00630 IF A<>4 AND A<>5 THEN 690
    0x59d90c5a4890 ---------A   00640 R$="TRANSPORT"
    0x59d90c5a4ae0 ---------A   00650 IF A<>5 THEN 680
    0x59d90c5a4d00 ---------A   00660 W=11500
    0x59d90c5a4d70 ---------A   00670 GOTO 690
    0x59d90c5a4f70 ---------A T 00680 W=8800
    0x59d90c5a51d0 ---------A T 00690 IF A<>6 THEN 720
    0x59d90c5a5410 ---------A   00700 R$="AMMUNITION SHIP"
    0x59d90c5a5630 ---------A   00710 W=9650
    0x59d90c5a5aa0 ---------A T 00720 IF A>=9 OR A=6 THEN 740
    0x59d90c5a5cc0 ---------A   00730 Q=1
    0x59d90c5a5f10 ---------A T 00740 IF A<>6 THEN 760
    0x59d90c5a6130 ---------A   00750 Q=1
    0x59d90c5a6380 ---------A T 00760 IF A<9 THEN 1080
    0x59d90c5a6920 ---------A   00770 E=INT(RND(0)*10)
    0x59d90c5a6b70 ---------A   00780 IF E<>0 THEN 810
    0x59d90c5a6db0 ---------A   00790 R$="BATTLESHIP"
    0x59d90c5a6fc0 ---------A   00800 W=33500
    0x59d90c5a7220 ---------A T 00810 IF E<>1 THEN 840
    0x59d90c5a7460 ---------A   00820 R$="AIRCRAFT CARRIER"
    0x59d90c5a7670 ---------A   00830 W=25700
    0x59d90c5a78d0 ---------A T 00840 IF E<>2 THEN 870
    0x59d90c5a7b10 ---------A   00850 R$="HEAVY CRUISER"
    0x59d90c5a7d20 ---------A   00860 W=9900
    0x59d90c5a7f80 ---------A T 00870 IF E<>3 THEN 900
    0x59d90c5a81c0 ---------A   00880 R$="LIGHT CRUISER"
    0x59d90c5a83e0 ---------A   00890 W=9600
    0x59d90c5a8850 ---------A T 00900 IF E<>4 AND E<>5 THEN 930
    0x59d90c5a8a90 ---------A   00910 R$="DESTROYER"
    0x59d90c5a8cb0 ---------A   00920 W=2100
    0x59d90c5a9120 ---------A T 00930 IF E<>6 AND E<>7 THEN 960
    0x59d90c5a9360 ---------A   00940 R$="SUBMARINE"
    0x59d90c5a9580 ---------A   00950 W=1500
    0x59d90c5a99f0 ---------A T 00960 IF E<>8 AND E<>9 THEN 980
    0x59d90c5a9c10 ---------A   00970 W=1350
    0x59d90c5a9e60 ---------A T 00980 IF E<=5 THEN 1000
    0x59d90c5aa090 ---------A   00990 Q=1
    0x59d90c5aa500 ---------A T 01000 IF E<>4 AND E<>5 THEN 1020
    0x59d90c5aa730 ---------A   01010 Q=2
    0x59d90c5aaba0 ---------A T 01020 IF E<>2 AND E<>3 THEN 1040
    0x59d90c5aadc0 ---------A   01030 Q=3
    0x59d90c5ab010 ---------A T 01040 IF E<>1 THEN 1060
    0x59d90c5ab230 ---------A   01050 W=4
    0x59d90c5ab480 ---------A T 01060 IF E<>0 THEN 1080
    0x59d90c5ab6c0 ---------A   01070 Q=7
    0x59d90c5abc10 ---------A T 01080 PRINT"JAPANESE "; R$; " -"; W; "TONS."
    0x59d90c5abc80 ---------A   01090 GOTO  400
    0x59d90c5abee0 ---------A T 01100 IF Q>=1 THEN 1130
    0x59d90c5ac060 ---------A   01110 PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    0x59d90c5ac2c0 ---------A   01120 IF Q<1 THEN 410
    0x59d90c5ac540 ---------A T 01130 PRINTT; "TORPEDOES LEFT."
    0x59d90c5ac6c0 ---------A T 01140 PRINT"NUMBER OF TORPEDOES TO FIRE";
    0x59d90c5ac8e0 ---------A   01150 INPUT R
    0x59d90c5ace90 ---------A   01160 IF R<0 OR T-R<0 THEN 1140
    0x59d90c5ad1f0 ---------A   01170 IF R<>INT(R) THEN 1140
    0x59d90c5ad550 ---------A   01180 T=T-R
    0x59d90c5adae0 ---------A T 01190 S=INT(RND(0)*10)
    0x59d90c5add50 ---------A   01200 IF S>R THEN 1190
    0x59d90c5ae0b0 ---------A   01210 Q=Q-S
    0x59d90c5ae300 ---------A   01220 IF Q<=0 THEN 1240
    0x59d90c5ae600 ---------A   01230 Q$="DAMAGED"
    0x59d90c5ae850 ---------A T 01240 IF Q>=1 THEN 1280
    0x59d90c5aea90 ---------A   01250 Q$="SUNK"
    0x59d90c5aeea0 ---------A   01260 O=O+W
    0x59d90c5af2b0 ---------A   01270 L=L+1
    0x59d90c5aff30 ---------A T 01280 PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    0x59d90c5b0180 ---------A   01290 IF S<>0 THEN 1310
    0x59d90c5b0200 ---------A   01300 PRINT
    0x59d90c5b0460 ---------A T 01310 IF S<=0 THEN 1330
    0x59d90c5b09d0 ---------A   01320 PRINT"- ";R$;" ";Q$; "."
    0x59d90c5b0e40 ---------A T 01330 IF D>5 AND Q>0 THEN 1560
    0x59d90c5b10a0 ---------A   01340 IF T<1 THEN 1580
    0x59d90c5b1300 ---------A   01350 IF Q<1 THEN 220
    0x59d90c5b1380 ---------A   01360 GOTO  400
    0x59d90c5b15e0 ---------A T 01370 IF D>=6 THEN 1390
    0x59d90c5b1940 ---------A   01380 PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    0x59d90c5b1ba0 ---------A T 01390 IF D<6 THEN 410
    0x59d90c5b2260 ---------A   01400 U=INT(RND(0)*10)*250
    0x59d90c5b2800 ---------A   01410 PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    0x59d90c5b2d50 ---------A   01420 FOR XX=1 TO 63:PRINT"=";:NEXT
    0x59d90c5b3390 ---------A T 01430 PRINTU;"YARDS"; TAB(32);Z;"FEET"
    0x59d90c5b36c0 ---------A   01440 U=U-250
    0x59d90c5b3a00 ---------A   01450 Z=Z+25
    0x59d90c5b3c60 ---------A   01460 IF U>-250 THEN 1430
    0x59d90c5b3ef0 ---------A   01470 IF R$="TORPEDO BOAT" THEN 1510
    0x59d90c5b46a0 ---------A   01480 N=INT(RND(0)*10)*25+50
    0x59d90c5b4d50 ---------A   01490 IF N+26>Z AND N-26<Z THEN 1540
    0x59d90c5b5180 ---------A   01500 U=0:Z=0
    0x59d90c5b5520 ---------A T 01510 PRINT:PRINT"THE USS ";A$;" IS UNHURT."
    0x59d90c5b5730 ---------A   01520 Q=0
    0x59d90c5b57d0 ---------A   01530 GOTO 220
    0x59d90c5b5b60 ---------A T 01540 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
    0x59d90c5b5be0 ---------A   01550 GOTO 1610
    0x59d90c5b6080 ---------A T 01560 FOR I=1 TO 1500:NEXT I
    0x59d90c5b6460 ---------A   01565 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
    0x59d90c5b64e0 ---------A   01570 GOTO 1610
    0x59d90c5b68c0 ---------A T 01580 FOR I=1 TO 1500:NEXT I
    0x59d90c5b6ca0 ---------A   01585 CLS:PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
    0x59d90c5b6f20 ---------A   01590 IF O<=0 THEN 1610
    0x59d90c5b70f0 ---------A   01600 PRINT:PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
    0x59d90c5b7190 ---------A T 01610 PRINT
    0x59d90c5b7700 ---------A   01620 PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
    0x59d90c5b7a60 ---------A   01630 PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
    0x59d90c5b7b40 ---------A   01640 PRINT:PRINT
    0x59d90c5b7da0 ---------A   01650 INPUT "DO YOU WANT TO TRY AGAIN";ANS$
    0x59d90c5b81e0 ---------A   01660 IF LEFT$(ANS$,1)="Y" THEN 50 ELSE END
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
   A) 0x59d90c5845d0 (00001)   0x000000000000 (00000)   0x59d90c5b81e0 (01660)   0x59d90c5b81e0 (01660)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02580 - 10000    7430 

 */



/*
 *  Symbol Table Listing for 'basic/warfish.bas'
 *
    A                        Float       
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
    D                        Float       
    E                        Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Float       
    I$                       String      
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    L                        Float       
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
    N                        Float       
    O                        Float       
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Float       
    Q$                       String      
    Q0                       Float       
    R                        Float       
    R$                       String      
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Float       
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Float       
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Float       
    XX                       Float       
    Z                        Float       

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
    0x59d90c5845d0 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x59d90c594f00 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x59d90c595e70 ---------A   01020 CLS: PRINT@413, "WARFISH"
    0x59d90c595ff0 ---------A   01030 PRINT: PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    0x59d90c593610 ---------A   01040 PRINT@960, "";: INPUT "DO YOU NEED INSTRUCTIONS";I$
    0x59d90c595620 ---------A   01050 Q0=RND(0)
    0x59d90c595690 ---------A   01060 REM
    0x59d90c5946e0 ---------A T 01070 IF LEFT$(I$,1)="N" THEN CLS: GOTO 1080
    0x59d90c59cb80 ---------A T 01080 PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    0x59d90c59cd50 ---------A   01090 INPUT A$
    0x59d90c59d030 ---------A   01100 T=26
    0x59d90c59d5c0 ---------A T 01110 D=INT(RND(0)*10)
    0x59d90c59d7f0 ---------A   01120 IF D<6 THEN 1270
    0x59d90c59dc70 ---------A   01130 IF D<>6 AND D<>7 THEN 1160
    0x59d90c59df70 ---------A   01140 R$="DESTROYER"
    0x59d90c59e240 ---------A   01150 W=2100
    0x59d90c59e470 ---------A T 01160 IF D<>8 THEN1190
    0x59d90c59e6b0 ---------A   01170 R$="DESTROYER ESCORT"
    0x59d90c59e8c0 ---------A   01180 W=1360
    0x59d90c59eb10 ---------A T 01190 IF D<>9 THEN 1220
    0x59d90c59ed50 ---------A   01200 R$="TORPEDO BOAT"
    0x59d90c59f150 ---------A   01210 W=70
    0x59d90c59f5c0 ---------A T 01220 IF D=6 OR D=7 THEN 1250
    0x59d90c59f8a0 ---------A   01230 Q=1
    0x59d90c59f910 ---------A   01240 GOTO 1260
    0x59d90c59fb30 ---------A T 01250 Q=2
    0x59d90c59fe80 ---------A T 01260 PRINT"JAPANESE"; R$; " IS ATTACKING."
    0x59d90c5a00d0 ---------A T 01270 IF D>=6 THEN 1300
    0x59d90c5a0670 ---------A   01280 A=INT(RND(0)*10)
    0x59d90c5a06e0 ---------A   01290 REM
    0x59d90c5a0870 ---------A T 01300 PRINT"ORDERS, COMMANDER";
    0x59d90c5a0a90 ---------A   01310 INPUT C$
    0x59d90c5a0f80 ---------A   01320 CLS: C$=MID$(C$,1,1)
    0x59d90c5a1200 ---------A   01330 IF C$="P" THEN 1370
    0x59d90c5a1490 ---------A   01340 IF C$="T" THEN 1990
    0x59d90c5a1710 ---------A   01350 IF C$="D" THEN 2260
    0x59d90c5a17a0 ---------A   01360 GOTO 1300
    0x59d90c5a1c00 ---------A T 01370 IF D>5 OR Q>0 THEN 1970
    0x59d90c5a1e60 ---------A   01380 IF A>=4 THEN 1460
    0x59d90c5a20b0 ---------A   01390 R$="FREIGHTER"
    0x59d90c5a2520 ---------A   01400 IF A<>0 AND A<>1 THEN 1420
    0x59d90c5a2740 ---------A   01410 W=6600
    0x59d90c5a2990 ---------A T 01420 IF A<>2 THEN 560
    0x59d90c5a2bb0 ---------A   01430 W=7600
    0x59d90c5a2e00 ---------A T 01440 IF A<>3 THEN 1460
    0x59d90c5a3030 ---------A   01450 W=8100
    0x59d90c5a34a0 ---------A T 01460 IF A<>7 AND A<>8 THEN 1520
    0x59d90c5a36e0 ---------A   01470 R$="TANKER"
    0x59d90c5a3930 ---------A   01480 IF A<>8 THEN 1510
    0x59d90c5a3b50 ---------A   01490 W=10000
    0x59d90c5a3bc0 ---------A   01500 GOTO 1520
    0x59d90c5a3dd0 ---------A T 01510 W=9600
    0x59d90c5a4240 ---------A T 01520 IF A<>4 AND A<>5 THEN 1580
    0x59d90c5a4890 ---------A   01530 R$="TRANSPORT"
    0x59d90c5a4ae0 ---------A   01540 IF A<>5 THEN 1570
    0x59d90c5a4d00 ---------A   01550 W=11600
    0x59d90c5a4d70 ---------A   01560 GOTO 1580
    0x59d90c5a4f70 ---------A T 01570 W=8800
    0x59d90c5a51d0 ---------A T 01580 IF A<>6 THEN 1610
    0x59d90c5a5410 ---------A   01590 R$="AMMUNITION SHIP"
    0x59d90c5a5630 ---------A   01600 W=9660
    0x59d90c5a5aa0 ---------A T 01610 IF A>=9 OR A=6 THEN 1630
    0x59d90c5a5cc0 ---------A   01620 Q=1
    0x59d90c5a5f10 ---------A T 01630 IF A<>6 THEN 1650
    0x59d90c5a6130 ---------A   01640 Q=1
    0x59d90c5a6380 ---------A T 01650 IF A<9 THEN 1970
    0x59d90c5a6920 ---------A   01660 E=INT(RND(0)*10)
    0x59d90c5a6b70 ---------A   01670 IF E<>0 THEN 1700
    0x59d90c5a6db0 ---------A   01680 R$="BATTLESHIP"
    0x59d90c5a6fc0 ---------A   01690 W=33600
    0x59d90c5a7220 ---------A T 01700 IF E<>1 THEN 1730
    0x59d90c5a7460 ---------A   01710 R$="AIRCRAFT CARRIER"
    0x59d90c5a7670 ---------A   01720 W=25700
    0x59d90c5a78d0 ---------A T 01730 IF E<>2 THEN 1760
    0x59d90c5a7b10 ---------A   01740 R$="HEAVY CRUISER"
    0x59d90c5a7d20 ---------A   01750 W=9900
    0x59d90c5a7f80 ---------A T 01760 IF E<>3 THEN 1790
    0x59d90c5a81c0 ---------A   01770 R$="LIGHT CRUISER"
    0x59d90c5a83e0 ---------A   01780 W=9600
    0x59d90c5a8850 ---------A T 01790 IF E<>4 AND E<>5 THEN 1820
    0x59d90c5a8a90 ---------A   01800 R$="DESTROYER"
    0x59d90c5a8cb0 ---------A   01810 W=2100
    0x59d90c5a9120 ---------A T 01820 IF E<>6 AND E<>7 THEN 1850
    0x59d90c5a9360 ---------A   01830 R$="SUBMARINE"
    0x59d90c5a9580 ---------A   01840 W=1600
    0x59d90c5a99f0 ---------A T 01850 IF E<>8 AND E<>9 THEN 1870
    0x59d90c5a9c10 ---------A   01860 W=1360
    0x59d90c5a9e60 ---------A T 01870 IF E<=5 THEN 1890
    0x59d90c5aa090 ---------A   01880 Q=1
    0x59d90c5aa500 ---------A T 01890 IF E<>4 AND E<>5 THEN 1910
    0x59d90c5aa730 ---------A   01900 Q=2
    0x59d90c5aaba0 ---------A T 01910 IF E<>2 AND E<>3 THEN 1930
    0x59d90c5aadc0 ---------A   01920 Q=3
    0x59d90c5ab010 ---------A T 01930 IF E<>1 THEN 1950
    0x59d90c5ab230 ---------A   01940 W=4
    0x59d90c5ab480 ---------A T 01950 IF E<>0 THEN 1970
    0x59d90c5ab6c0 ---------A   01960 Q=7
    0x59d90c5abc10 ---------A T 01970 PRINT"JAPANESE "; R$; " -"; W; "TONS."
    0x59d90c5abc80 ---------A   01980 GOTO  1300
    0x59d90c5abee0 ---------A T 01990 IF Q>=1 THEN 2020
    0x59d90c5ac060 ---------A   02000 PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    0x59d90c5ac2c0 ---------A   02010 IF Q<1 THEN 1300
    0x59d90c5ac540 ---------A T 02020 PRINTT; "TORPEDOES LEFT."
    0x59d90c5ac6c0 ---------A T 02030 PRINT"NUMBER OF TORPEDOES TO FIRE";
    0x59d90c5ac8e0 ---------A   02040 INPUT R
    0x59d90c5ace90 ---------A   02050 IF R<0 OR T-R<0 THEN 2030
    0x59d90c5ad1f0 ---------A   02060 IF R<>INT(R) THEN 2030
    0x59d90c5ad550 ---------A   02070 T=T-R
    0x59d90c5adae0 ---------A T 02080 S=INT(RND(0)*10)
    0x59d90c5add50 ---------A   02090 IF S>R THEN 2080
    0x59d90c5ae0b0 ---------A   02100 Q=Q-S
    0x59d90c5ae300 ---------A   02110 IF Q<=0 THEN 2130
    0x59d90c5ae600 ---------A   02120 Q$="DAMAGED"
    0x59d90c5ae850 ---------A T 02130 IF Q>=1 THEN 2170
    0x59d90c5aea90 ---------A   02140 Q$="SUNK"
    0x59d90c5aeea0 ---------A   02150 O=O+W
    0x59d90c5af2b0 ---------A   02160 L=L+1
    0x59d90c5aff30 ---------A T 02170 PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    0x59d90c5b0180 ---------A   02180 IF S<>0 THEN 2200
    0x59d90c5b0200 ---------A   02190 PRINT
    0x59d90c5b0460 ---------A T 02200 IF S<=0 THEN 2220
    0x59d90c5b09d0 ---------A   02210 PRINT"- ";R$;" ";Q$; "."
    0x59d90c5b0e40 ---------A T 02220 IF D>5 AND Q>0 THEN 2450
    0x59d90c5b10a0 ---------A   02230 IF T<1 THEN 2480
    0x59d90c5b1300 ---------A   02240 IF Q<1 THEN 1110
    0x59d90c5b1380 ---------A   02250 GOTO  1300
    0x59d90c5b15e0 ---------A T 02260 IF D>=6 THEN 2280
    0x59d90c5b1940 ---------A   02270 PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    0x59d90c5b1ba0 ---------A T 02280 IF D<6 THEN 1300
    0x59d90c5b2260 ---------A   02290 U=INT(RND(0)*10)*260
    0x59d90c5b2800 ---------A   02300 PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    0x59d90c5b2d50 ---------A   02310 FOR XX=1 TO 63:PRINT"=";:NEXT
    0x59d90c5b3390 ---------A T 02320 PRINTU;"YARDS"; TAB(32);Z;"FEET"
    0x59d90c5b36c0 ---------A   02330 U=U-260
    0x59d90c5b3a00 ---------A   02340 Z=Z+25
    0x59d90c5b3c60 ---------A   02350 IF U>-260 THEN 2320
    0x59d90c5b3ef0 ---------A   02360 IF R$="TORPEDO BOAT" THEN 2400
    0x59d90c5b46a0 ---------A   02370 N=INT(RND(0)*10)*25+60
    0x59d90c5b4d50 ---------A   02380 IF N+26>Z AND N-26<Z THEN 2430
    0x59d90c5b5180 ---------A   02390 U=0:Z=0
    0x59d90c5b5520 ---------A T 02400 PRINT:PRINT"THE USS ";A$;" IS UNHURT."
    0x59d90c5b5730 ---------A   02410 Q=0
    0x59d90c5b57d0 ---------A   02420 GOTO 1110
    0x59d90c5b5b60 ---------A T 02430 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
    0x59d90c5b5be0 ---------A   02440 GOTO 2520
    0x59d90c5b6080 ---------A T 02450 FOR I=1 TO 1600:NEXT I
    0x59d90c5b6460 ---------A   02460 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
    0x59d90c5b64e0 ---------A   02470 GOTO 2520
    0x59d90c5b68c0 ---------A T 02480 FOR I=1 TO 1600:NEXT I
    0x59d90c5b6ca0 ---------A   02490 CLS:PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
    0x59d90c5b6f20 ---------A   02500 IF O<=0 THEN 2520
    0x59d90c5b70f0 ---------A   02510 PRINT:PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
    0x59d90c5b7190 ---------A T 02520 PRINT
    0x59d90c5b7700 ---------A   02530 PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
    0x59d90c5b7a60 ---------A   02540 PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
    0x59d90c5b7b40 ---------A   02550 PRINT:PRINT
    0x59d90c5b7da0 ---------A   02560 INPUT "DO YOU WANT TO TRY AGAIN";ANS$
    0x59d90c5b81e0 ---------A   02570 IF LEFT$(ANS$,1)="Y" THEN 1070 ELSE END
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
float  A_flt;                                     // Basic: A 
char*  A_str;                                     // Basic: A$ 
char*  ANS_str;                                   // Basic: ANS$ 
char*  C_str;                                     // Basic: C$ 
float  D_flt;                                     // Basic: D 
float  E_flt;                                     // Basic: E 
float  I_flt;                                     // Basic: I 
char*  I_str;                                     // Basic: I$ 
float  L_flt;                                     // Basic: L 
float  N_flt;                                     // Basic: N 
float  O_flt;                                     // Basic: O 
float  Q_flt;                                     // Basic: Q 
char*  Q_str;                                     // Basic: Q$ 
float  Q0_flt;                                    // Basic: Q0 
float  R_flt;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
float  S_flt;                                     // Basic: S 
float  T_flt;                                     // Basic: T 
float  U_flt;                                     // Basic: U 
float  W_flt;                                     // Basic: W 
float  XX_flt;                                    // Basic: XX 
float  Z_flt;                                     // Basic: Z 
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
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS: PRINT@413, "WARFISH"
    b2c_printf("Warfish\n");
