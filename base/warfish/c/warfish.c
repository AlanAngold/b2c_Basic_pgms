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
    0x5e5389eb45d0 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x5e5389ec4fc0 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5e5389ec5f30 ---------A   00010 CLS: PRINT@413, "WARFISH"
    0x5e5389ec60b0 ---------A   00020 PRINT: PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    0x5e5389ec36d0 ---------A   00030 PRINT@960, "";: INPUT "DO YOU NEED INSTRUCTIONS";I$
    0x5e5389ec56e0 ---------A   00040 Q0=RND(0)
    0x5e5389ec5750 ---------A T 00050 REM
    0x5e5389ec47a0 ---------A   00060 IF LEFT$(I$,1)="N" THEN CLS: GOTO 190
    0x5e5389ecba40 ----------   00070 CLS:PRINTTAB(28); "WARFISH":PRINT
    0x5e5389ecbba0 ----------   00080 PRINT"YOU COMMAND AN AMERICAN SUBMARINE THAT HAS BEEN SENT OUT"
    0x5e5389ecbcf0 ----------   00090 PRINT"TO ATTACK JAPANESE SHIPS AT SEA DURING WORLD WAR II."
    0x5e5389ecbd90 ----------   00100 PRINT
    0x5e5389ecbf30 ----------   00110 PRINT"THE ORDERS THAT CAN BE GIVEN ARE THE FOLLOWING:"
    0x5e5389ecc0d0 ----------   00120 PRINT"    PERISCOPE - TO SEARCH FOR JAPANESE SHIPS."
    0x5e5389ecc270 ----------   00130 PRINT"    TORPEDO - TO LAUNCH TORPEDOES AT JAPANESE SHIPS."
    0x5e5389ecc410 ----------   00140 PRINT"    DIVE - TO ESCAPE ATTACKING JAPANESE SHIPS."
    0x5e5389ecc600 ----------   00150 PRINT"THESE ARE SOME HISTORIC U.S. NAVY SUBMARINES:":PRINT
    0x5e5389ecc7a0 ----------   00160 PRINT"    TAUTOG, SILVERSIDES, CAVALLA, BLUEFISH, THRESHER"
    0x5e5389ecc990 ----------   00170 PRINT"    SWORDFISH, FLASHER, TROUT, ARCHER.":PRINT
    0x5e5389eccb30 ----------   00180 PRINT"SELECT ONE OF THE ABOVE, OR USE A NAME OF YOUR CHOICE."
    0x5e5389eccc40 ---------A T 00190 PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    0x5e5389ecce10 ---------A   00200 INPUT A$
    0x5e5389ecd0f0 ---------A   00210 T=26
    0x5e5389ecd680 ---------A T 00220 D=INT(RND(0)*10)
    0x5e5389ecd8b0 ---------A   00230 IF D<6 THEN 380
    0x5e5389ecdd30 ---------A   00240 IF D<>6 AND D<>7 THEN 270
    0x5e5389ece030 ---------A   00250 R$="DESTROYER"
    0x5e5389ece300 ---------A   00260 W=2100
    0x5e5389ece530 ---------A T 00270 IF D<>8 THEN300
    0x5e5389ece770 ---------A   00280 R$="DESTROYER ESCORT"
    0x5e5389ece980 ---------A   00290 W=1350
    0x5e5389ecebd0 ---------A T 00300 IF D<>9 THEN 330
    0x5e5389ecee10 ---------A   00310 R$="TORPEDO BOAT"
    0x5e5389ecf210 ---------A   00320 W=70
    0x5e5389ecf680 ---------A T 00330 IF D=6 OR D=7 THEN 360
    0x5e5389ecf960 ---------A   00340 Q=1
    0x5e5389ecf9d0 ---------A   00350 GOTO 370
    0x5e5389ecfbf0 ---------A T 00360 Q=2
    0x5e5389ecff40 ---------A T 00370 PRINT"JAPANESE"; R$; " IS ATTACKING."
    0x5e5389ed0190 ---------A T 00380 IF D>=6 THEN 400
    0x5e5389ed0730 ---------A   00390 A=INT(RND(0)*10)
    0x5e5389ed07a0 ---------A T 00400 REM
    0x5e5389ed0930 ---------A T 00410 PRINT"ORDERS, COMMANDER";
    0x5e5389ed0b50 ---------A   00420 INPUT C$
    0x5e5389ed1040 ---------A   00430 CLS: C$=MID$(C$,1,1)
    0x5e5389ed12c0 ---------A   00440 IF C$="P" THEN 480
    0x5e5389ed1550 ---------A   00450 IF C$="T" THEN 1100
    0x5e5389ed17d0 ---------A   00460 IF C$="D" THEN 1370
    0x5e5389ed1860 ---------A   00470 GOTO 410
    0x5e5389ed1cc0 ---------A T 00480 IF D>5 OR Q>0 THEN 1080
    0x5e5389ed1f20 ---------A   00490 IF A>=4 THEN 570
    0x5e5389ed2170 ---------A   00500 R$="FREIGHTER"
    0x5e5389ed25e0 ---------A   00510 IF A<>0 AND A<>1 THEN 530
    0x5e5389ed2800 ---------A   00520 W=6500
    0x5e5389ed2a50 ---------A T 00530 IF A<>2 THEN 550
    0x5e5389ed2c70 ---------A   00540 W=7500
    0x5e5389ed2ec0 ---------A T 00550 IF A<>3 THEN 570
    0x5e5389ed30f0 ---------A   00560 W=8100
    0x5e5389ed3560 ---------A T 00570 IF A<>7 AND A<>8 THEN 630
    0x5e5389ed37a0 ---------A   00580 R$="TANKER"
    0x5e5389ed39f0 ---------A   00590 IF A<>8 THEN 620
    0x5e5389ed3c10 ---------A   00600 W=10000
    0x5e5389ed3c80 ---------A   00610 GOTO 630
    0x5e5389ed3e90 ---------A T 00620 W=9500
    0x5e5389ed4300 ---------A T 00630 IF A<>4 AND A<>5 THEN 690
    0x5e5389ed4950 ---------A   00640 R$="TRANSPORT"
    0x5e5389ed4ba0 ---------A   00650 IF A<>5 THEN 680
    0x5e5389ed4dc0 ---------A   00660 W=11500
    0x5e5389ed4e30 ---------A   00670 GOTO 690
    0x5e5389ed5030 ---------A T 00680 W=8800
    0x5e5389ed5290 ---------A T 00690 IF A<>6 THEN 720
    0x5e5389ed54d0 ---------A   00700 R$="AMMUNITION SHIP"
    0x5e5389ed56f0 ---------A   00710 W=9650
    0x5e5389ed5b60 ---------A T 00720 IF A>=9 OR A=6 THEN 740
    0x5e5389ed5d80 ---------A   00730 Q=1
    0x5e5389ed5fd0 ---------A T 00740 IF A<>6 THEN 760
    0x5e5389ed61f0 ---------A   00750 Q=1
    0x5e5389ed6440 ---------A T 00760 IF A<9 THEN 1080
    0x5e5389ed69e0 ---------A   00770 E=INT(RND(0)*10)
    0x5e5389ed6c30 ---------A   00780 IF E<>0 THEN 810
    0x5e5389ed6e70 ---------A   00790 R$="BATTLESHIP"
    0x5e5389ed7080 ---------A   00800 W=33500
    0x5e5389ed72e0 ---------A T 00810 IF E<>1 THEN 840
    0x5e5389ed7520 ---------A   00820 R$="AIRCRAFT CARRIER"
    0x5e5389ed7730 ---------A   00830 W=25700
    0x5e5389ed7990 ---------A T 00840 IF E<>2 THEN 870
    0x5e5389ed7bd0 ---------A   00850 R$="HEAVY CRUISER"
    0x5e5389ed7de0 ---------A   00860 W=9900
    0x5e5389ed8040 ---------A T 00870 IF E<>3 THEN 900
    0x5e5389ed8280 ---------A   00880 R$="LIGHT CRUISER"
    0x5e5389ed84a0 ---------A   00890 W=9600
    0x5e5389ed8910 ---------A T 00900 IF E<>4 AND E<>5 THEN 930
    0x5e5389ed8b50 ---------A   00910 R$="DESTROYER"
    0x5e5389ed8d70 ---------A   00920 W=2100
    0x5e5389ed91e0 ---------A T 00930 IF E<>6 AND E<>7 THEN 960
    0x5e5389ed9420 ---------A   00940 R$="SUBMARINE"
    0x5e5389ed9640 ---------A   00950 W=1500
    0x5e5389ed9ab0 ---------A T 00960 IF E<>8 AND E<>9 THEN 980
    0x5e5389ed9cd0 ---------A   00970 W=1350
    0x5e5389ed9f20 ---------A T 00980 IF E<=5 THEN 1000
    0x5e5389eda150 ---------A   00990 Q=1
    0x5e5389eda5c0 ---------A T 01000 IF E<>4 AND E<>5 THEN 1020
    0x5e5389eda7f0 ---------A   01010 Q=2
    0x5e5389edac60 ---------A T 01020 IF E<>2 AND E<>3 THEN 1040
    0x5e5389edae80 ---------A   01030 Q=3
    0x5e5389edb0d0 ---------A T 01040 IF E<>1 THEN 1060
    0x5e5389edb2f0 ---------A   01050 W=4
    0x5e5389edb540 ---------A T 01060 IF E<>0 THEN 1080
    0x5e5389edb780 ---------A   01070 Q=7
    0x5e5389edbcd0 ---------A T 01080 PRINT"JAPANESE "; R$; " -"; W; "TONS."
    0x5e5389edbd40 ---------A   01090 GOTO  400
    0x5e5389edbfa0 ---------A T 01100 IF Q>=1 THEN 1130
    0x5e5389edc120 ---------A   01110 PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    0x5e5389edc380 ---------A   01120 IF Q<1 THEN 410
    0x5e5389edc600 ---------A T 01130 PRINTT; "TORPEDOES LEFT."
    0x5e5389edc780 ---------A T 01140 PRINT"NUMBER OF TORPEDOES TO FIRE";
    0x5e5389edc9a0 ---------A   01150 INPUT R
    0x5e5389edcf50 ---------A   01160 IF R<0 OR T-R<0 THEN 1140
    0x5e5389edd2b0 ---------A   01170 IF R<>INT(R) THEN 1140
    0x5e5389edd610 ---------A   01180 T=T-R
    0x5e5389eddba0 ---------A T 01190 S=INT(RND(0)*10)
    0x5e5389edde10 ---------A   01200 IF S>R THEN 1190
    0x5e5389ede170 ---------A   01210 Q=Q-S
    0x5e5389ede3c0 ---------A   01220 IF Q<=0 THEN 1240
    0x5e5389ede6c0 ---------A   01230 Q$="DAMAGED"
    0x5e5389ede910 ---------A T 01240 IF Q>=1 THEN 1280
    0x5e5389edeb50 ---------A   01250 Q$="SUNK"
    0x5e5389edef60 ---------A   01260 O=O+W
    0x5e5389edf370 ---------A   01270 L=L+1
    0x5e5389edfff0 ---------A T 01280 PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    0x5e5389ee0240 ---------A   01290 IF S<>0 THEN 1310
    0x5e5389ee02c0 ---------A   01300 PRINT
    0x5e5389ee0520 ---------A T 01310 IF S<=0 THEN 1330
    0x5e5389ee0a90 ---------A   01320 PRINT"- ";R$;" ";Q$; "."
    0x5e5389ee0f00 ---------A T 01330 IF D>5 AND Q>0 THEN 1560
    0x5e5389ee1160 ---------A   01340 IF T<1 THEN 1580
    0x5e5389ee13c0 ---------A   01350 IF Q<1 THEN 220
    0x5e5389ee1440 ---------A   01360 GOTO  400
    0x5e5389ee16a0 ---------A T 01370 IF D>=6 THEN 1390
    0x5e5389ee1a00 ---------A   01380 PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    0x5e5389ee1c60 ---------A T 01390 IF D<6 THEN 410
    0x5e5389ee2320 ---------A   01400 U=INT(RND(0)*10)*250
    0x5e5389ee28c0 ---------A   01410 PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    0x5e5389ee2e10 ---------A   01420 FOR XX=1 TO 63:PRINT"=";:NEXT
    0x5e5389ee3450 ---------A T 01430 PRINTU;"YARDS"; TAB(32);Z;"FEET"
    0x5e5389ee3780 ---------A   01440 U=U-250
    0x5e5389ee3ac0 ---------A   01450 Z=Z+25
    0x5e5389ee3d20 ---------A   01460 IF U>-250 THEN 1430
    0x5e5389ee3fb0 ---------A   01470 IF R$="TORPEDO BOAT" THEN 1510
    0x5e5389ee4760 ---------A   01480 N=INT(RND(0)*10)*25+50
    0x5e5389ee4e10 ---------A   01490 IF N+26>Z AND N-26<Z THEN 1540
    0x5e5389ee5240 ---------A   01500 U=0:Z=0
    0x5e5389ee55e0 ---------A T 01510 PRINT:PRINT"THE USS ";A$;" IS UNHURT."
    0x5e5389ee57f0 ---------A   01520 Q=0
    0x5e5389ee5890 ---------A   01530 GOTO 220
    0x5e5389ee5c20 ---------A T 01540 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
    0x5e5389ee5ca0 ---------A   01550 GOTO 1610
    0x5e5389ee6140 ---------A T 01560 FOR I=1 TO 1500:NEXT I
    0x5e5389ee6520 ---------A   01565 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
    0x5e5389ee65a0 ---------A   01570 GOTO 1610
    0x5e5389ee6980 ---------A T 01580 FOR I=1 TO 1500:NEXT I
    0x5e5389ee6d60 ---------A   01585 CLS:PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
    0x5e5389ee6fe0 ---------A   01590 IF O<=0 THEN 1610
    0x5e5389ee71b0 ---------A   01600 PRINT:PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
    0x5e5389ee7250 ---------A T 01610 PRINT
    0x5e5389ee77c0 ---------A   01620 PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
    0x5e5389ee7b20 ---------A   01630 PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
    0x5e5389ee7c00 ---------A   01640 PRINT:PRINT
    0x5e5389ee7e60 ---------A   01650 INPUT "DO YOU WANT TO TRY AGAIN";ANS$
    0x5e5389ee82a0 ---------A   01660 IF LEFT$(ANS$,1)="Y" THEN 50 ELSE END
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
   A) 0x5e5389eb45d0 (00001)   0x5e5389eb45d0 (00001)   0x5e5389ee82a0 (01660)   0x5e5389ee82a0 (01660)   


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
    0x5e5389eb45d0 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x5e5389ec4fc0 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5e5389ec5f30 ---------A   01020 CLS: PRINT@413, "WARFISH"
    0x5e5389ec60b0 ---------A   01030 PRINT: PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    0x5e5389ec36d0 ---------A   01040 PRINT@960, "";: INPUT "DO YOU NEED INSTRUCTIONS";I$
    0x5e5389ec56e0 ---------A   01050 Q0=RND(0)
    0x5e5389ec5750 ---------A   01060 REM
    0x5e5389ec47a0 ---------A T 01070 IF LEFT$(I$,1)="N" THEN CLS: GOTO 1080
    0x5e5389eccc40 ---------A T 01080 PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    0x5e5389ecce10 ---------A   01090 INPUT A$
    0x5e5389ecd0f0 ---------A   01100 T=26
    0x5e5389ecd680 ---------A T 01110 D=INT(RND(0)*10)
    0x5e5389ecd8b0 ---------A   01120 IF D<6 THEN 1270
    0x5e5389ecdd30 ---------A   01130 IF D<>6 AND D<>7 THEN 1160
    0x5e5389ece030 ---------A   01140 R$="DESTROYER"
    0x5e5389ece300 ---------A   01150 W=2100
    0x5e5389ece530 ---------A T 01160 IF D<>8 THEN1190
    0x5e5389ece770 ---------A   01170 R$="DESTROYER ESCORT"
    0x5e5389ece980 ---------A   01180 W=1360
    0x5e5389ecebd0 ---------A T 01190 IF D<>9 THEN 1220
    0x5e5389ecee10 ---------A   01200 R$="TORPEDO BOAT"
    0x5e5389ecf210 ---------A   01210 W=70
    0x5e5389ecf680 ---------A T 01220 IF D=6 OR D=7 THEN 1250
    0x5e5389ecf960 ---------A   01230 Q=1
    0x5e5389ecf9d0 ---------A   01240 GOTO 1260
    0x5e5389ecfbf0 ---------A T 01250 Q=2
    0x5e5389ecff40 ---------A T 01260 PRINT"JAPANESE"; R$; " IS ATTACKING."
    0x5e5389ed0190 ---------A T 01270 IF D>=6 THEN 1300
    0x5e5389ed0730 ---------A   01280 A=INT(RND(0)*10)
    0x5e5389ed07a0 ---------A   01290 REM
    0x5e5389ed0930 ---------A T 01300 PRINT"ORDERS, COMMANDER";
    0x5e5389ed0b50 ---------A   01310 INPUT C$
    0x5e5389ed1040 ---------A   01320 CLS: C$=MID$(C$,1,1)
    0x5e5389ed12c0 ---------A   01330 IF C$="P" THEN 1370
    0x5e5389ed1550 ---------A   01340 IF C$="T" THEN 1990
    0x5e5389ed17d0 ---------A   01350 IF C$="D" THEN 2260
    0x5e5389ed1860 ---------A   01360 GOTO 1300
    0x5e5389ed1cc0 ---------A T 01370 IF D>5 OR Q>0 THEN 1970
    0x5e5389ed1f20 ---------A   01380 IF A>=4 THEN 1460
    0x5e5389ed2170 ---------A   01390 R$="FREIGHTER"
    0x5e5389ed25e0 ---------A   01400 IF A<>0 AND A<>1 THEN 1420
    0x5e5389ed2800 ---------A   01410 W=6600
    0x5e5389ed2a50 ---------A T 01420 IF A<>2 THEN 560
    0x5e5389ed2c70 ---------A   01430 W=7600
    0x5e5389ed2ec0 ---------A T 01440 IF A<>3 THEN 1460
    0x5e5389ed30f0 ---------A   01450 W=8100
    0x5e5389ed3560 ---------A T 01460 IF A<>7 AND A<>8 THEN 1520
    0x5e5389ed37a0 ---------A   01470 R$="TANKER"
    0x5e5389ed39f0 ---------A   01480 IF A<>8 THEN 1510
    0x5e5389ed3c10 ---------A   01490 W=10000
    0x5e5389ed3c80 ---------A   01500 GOTO 1520
    0x5e5389ed3e90 ---------A T 01510 W=9600
    0x5e5389ed4300 ---------A T 01520 IF A<>4 AND A<>5 THEN 1580
    0x5e5389ed4950 ---------A   01530 R$="TRANSPORT"
    0x5e5389ed4ba0 ---------A   01540 IF A<>5 THEN 1570
    0x5e5389ed4dc0 ---------A   01550 W=11600
    0x5e5389ed4e30 ---------A   01560 GOTO 1580
    0x5e5389ed5030 ---------A T 01570 W=8800
    0x5e5389ed5290 ---------A T 01580 IF A<>6 THEN 1610
    0x5e5389ed54d0 ---------A   01590 R$="AMMUNITION SHIP"
    0x5e5389ed56f0 ---------A   01600 W=9660
    0x5e5389ed5b60 ---------A T 01610 IF A>=9 OR A=6 THEN 1630
    0x5e5389ed5d80 ---------A   01620 Q=1
    0x5e5389ed5fd0 ---------A T 01630 IF A<>6 THEN 1650
    0x5e5389ed61f0 ---------A   01640 Q=1
    0x5e5389ed6440 ---------A T 01650 IF A<9 THEN 1970
    0x5e5389ed69e0 ---------A   01660 E=INT(RND(0)*10)
    0x5e5389ed6c30 ---------A   01670 IF E<>0 THEN 1700
    0x5e5389ed6e70 ---------A   01680 R$="BATTLESHIP"
    0x5e5389ed7080 ---------A   01690 W=33600
    0x5e5389ed72e0 ---------A T 01700 IF E<>1 THEN 1730
    0x5e5389ed7520 ---------A   01710 R$="AIRCRAFT CARRIER"
    0x5e5389ed7730 ---------A   01720 W=25700
    0x5e5389ed7990 ---------A T 01730 IF E<>2 THEN 1760
    0x5e5389ed7bd0 ---------A   01740 R$="HEAVY CRUISER"
    0x5e5389ed7de0 ---------A   01750 W=9900
    0x5e5389ed8040 ---------A T 01760 IF E<>3 THEN 1790
    0x5e5389ed8280 ---------A   01770 R$="LIGHT CRUISER"
    0x5e5389ed84a0 ---------A   01780 W=9600
    0x5e5389ed8910 ---------A T 01790 IF E<>4 AND E<>5 THEN 1820
    0x5e5389ed8b50 ---------A   01800 R$="DESTROYER"
    0x5e5389ed8d70 ---------A   01810 W=2100
    0x5e5389ed91e0 ---------A T 01820 IF E<>6 AND E<>7 THEN 1850
    0x5e5389ed9420 ---------A   01830 R$="SUBMARINE"
    0x5e5389ed9640 ---------A   01840 W=1600
    0x5e5389ed9ab0 ---------A T 01850 IF E<>8 AND E<>9 THEN 1870
    0x5e5389ed9cd0 ---------A   01860 W=1360
    0x5e5389ed9f20 ---------A T 01870 IF E<=5 THEN 1890
    0x5e5389eda150 ---------A   01880 Q=1
    0x5e5389eda5c0 ---------A T 01890 IF E<>4 AND E<>5 THEN 1910
    0x5e5389eda7f0 ---------A   01900 Q=2
    0x5e5389edac60 ---------A T 01910 IF E<>2 AND E<>3 THEN 1930
    0x5e5389edae80 ---------A   01920 Q=3
    0x5e5389edb0d0 ---------A T 01930 IF E<>1 THEN 1950
    0x5e5389edb2f0 ---------A   01940 W=4
    0x5e5389edb540 ---------A T 01950 IF E<>0 THEN 1970
    0x5e5389edb780 ---------A   01960 Q=7
    0x5e5389edbcd0 ---------A T 01970 PRINT"JAPANESE "; R$; " -"; W; "TONS."
    0x5e5389edbd40 ---------A   01980 GOTO  1300
    0x5e5389edbfa0 ---------A T 01990 IF Q>=1 THEN 2020
    0x5e5389edc120 ---------A   02000 PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    0x5e5389edc380 ---------A   02010 IF Q<1 THEN 1300
    0x5e5389edc600 ---------A T 02020 PRINTT; "TORPEDOES LEFT."
    0x5e5389edc780 ---------A T 02030 PRINT"NUMBER OF TORPEDOES TO FIRE";
    0x5e5389edc9a0 ---------A   02040 INPUT R
    0x5e5389edcf50 ---------A   02050 IF R<0 OR T-R<0 THEN 2030
    0x5e5389edd2b0 ---------A   02060 IF R<>INT(R) THEN 2030
    0x5e5389edd610 ---------A   02070 T=T-R
    0x5e5389eddba0 ---------A T 02080 S=INT(RND(0)*10)
    0x5e5389edde10 ---------A   02090 IF S>R THEN 2080
    0x5e5389ede170 ---------A   02100 Q=Q-S
    0x5e5389ede3c0 ---------A   02110 IF Q<=0 THEN 2130
    0x5e5389ede6c0 ---------A   02120 Q$="DAMAGED"
    0x5e5389ede910 ---------A T 02130 IF Q>=1 THEN 2170
    0x5e5389edeb50 ---------A   02140 Q$="SUNK"
    0x5e5389edef60 ---------A   02150 O=O+W
    0x5e5389edf370 ---------A   02160 L=L+1
    0x5e5389edfff0 ---------A T 02170 PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    0x5e5389ee0240 ---------A   02180 IF S<>0 THEN 2200
    0x5e5389ee02c0 ---------A   02190 PRINT
    0x5e5389ee0520 ---------A T 02200 IF S<=0 THEN 2220
    0x5e5389ee0a90 ---------A   02210 PRINT"- ";R$;" ";Q$; "."
    0x5e5389ee0f00 ---------A T 02220 IF D>5 AND Q>0 THEN 2450
    0x5e5389ee1160 ---------A   02230 IF T<1 THEN 2480
    0x5e5389ee13c0 ---------A   02240 IF Q<1 THEN 1110
    0x5e5389ee1440 ---------A   02250 GOTO  1300
    0x5e5389ee16a0 ---------A T 02260 IF D>=6 THEN 2280
    0x5e5389ee1a00 ---------A   02270 PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    0x5e5389ee1c60 ---------A T 02280 IF D<6 THEN 1300
    0x5e5389ee2320 ---------A   02290 U=INT(RND(0)*10)*260
    0x5e5389ee28c0 ---------A   02300 PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    0x5e5389ee2e10 ---------A   02310 FOR XX=1 TO 63:PRINT"=";:NEXT
    0x5e5389ee3450 ---------A T 02320 PRINTU;"YARDS"; TAB(32);Z;"FEET"
    0x5e5389ee3780 ---------A   02330 U=U-260
    0x5e5389ee3ac0 ---------A   02340 Z=Z+25
    0x5e5389ee3d20 ---------A   02350 IF U>-260 THEN 2320
    0x5e5389ee3fb0 ---------A   02360 IF R$="TORPEDO BOAT" THEN 2400
    0x5e5389ee4760 ---------A   02370 N=INT(RND(0)*10)*25+60
    0x5e5389ee4e10 ---------A   02380 IF N+26>Z AND N-26<Z THEN 2430
    0x5e5389ee5240 ---------A   02390 U=0:Z=0
    0x5e5389ee55e0 ---------A T 02400 PRINT:PRINT"THE USS ";A$;" IS UNHURT."
    0x5e5389ee57f0 ---------A   02410 Q=0
    0x5e5389ee5890 ---------A   02420 GOTO 1110
    0x5e5389ee5c20 ---------A T 02430 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
    0x5e5389ee5ca0 ---------A   02440 GOTO 2520
    0x5e5389ee6140 ---------A T 02450 FOR I=1 TO 1600:NEXT I
    0x5e5389ee6520 ---------A   02460 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
    0x5e5389ee65a0 ---------A   02470 GOTO 2520
    0x5e5389ee6980 ---------A T 02480 FOR I=1 TO 1600:NEXT I
    0x5e5389ee6d60 ---------A   02490 CLS:PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
    0x5e5389ee6fe0 ---------A   02500 IF O<=0 THEN 2520
    0x5e5389ee71b0 ---------A   02510 PRINT:PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
    0x5e5389ee7250 ---------A T 02520 PRINT
    0x5e5389ee77c0 ---------A   02530 PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
    0x5e5389ee7b20 ---------A   02540 PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
    0x5e5389ee7c00 ---------A   02550 PRINT:PRINT
    0x5e5389ee7e60 ---------A   02560 INPUT "DO YOU WANT TO TRY AGAIN";ANS$
    0x5e5389ee82a0 ---------A   02570 IF LEFT$(ANS$,1)="Y" THEN 1070 ELSE END
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
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS: PRINT@413, "WARFISH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WARFISH");strcat(buf,"\n");fputs(buf,fh); };
