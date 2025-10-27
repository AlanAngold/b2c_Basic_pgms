/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/hi-q.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x561b6ceebb80 ---------A   00001 PRINT TAB(33);"H-I-Q"
    0x561b6ceeced0 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x561b6ceed050 ---------A   00003 PRINT:PRINT:PRINT
    0x561b6ceeb0a0 ---------A   00004 DIM B(70),T(9,9)
    0x561b6ceec690 ---------A   00005 PRINT "HERE IS THE BOARD:": PRINT
    0x561b6ceeaca0 ---------A   00006 PRINT "          !    !    !"
    0x561b6ceed1b0 ---------A   00007 PRINT "         13   14   15": PRINT
    0x561b6ceeb6e0 ---------A   00008 PRINT "          !    !    !"
    0x561b6cef2840 ---------A   00009 PRINT "         22   23   24": PRINT
    0x561b6ceec6e0 ---------A   00010 PRINT "!    !    !    !    !    !    !"
    0x561b6cef2aa0 ---------A   00011 PRINT "29   30   31   32   33   34   35": PRINT
    0x561b6cef2bf0 ---------A   00012 PRINT "!    !    !    !    !    !    !"
    0x561b6cef2d90 ---------A   00013 PRINT "38   39   40   41   42   43   44": PRINT
    0x561b6cef2f10 ---------A   00014 PRINT "!    !    !    !    !    !    !"
    0x561b6cef30d0 ---------A   00015 PRINT "47   48   49   50   51   52   53": PRINT
    0x561b6cef3230 ---------A   00016 PRINT "          !    !    !"
    0x561b6cef33e0 ---------A   00017 PRINT "         58   59   60": PRINT
    0x561b6cef3540 ---------A   00018 PRINT "          !    !    !"
    0x561b6cef3710 ---------A   00019 PRINT "         67   68   69": PRINT
    0x561b6cef38c0 ---------A   00020 PRINT "TO SAVE TYPING TIME, A COMPRESSED VERSION OF THE GAME BOARD"
    0x561b6cef3a50 ---------A   00022 PRINT "WILL BE USED DURING PLAY.  REFER TO THE ABOVE ONE FOR PEG"
    0x561b6cef3bb0 ---------A   00024 PRINT "NUMBERS.  OK, LET'S BEGIN."
    0x561b6cef3c20 --------DA T 00028 REM *** SET UP BOARD
    0x561b6ceea6d0 --------DA   00029 FOR R=1 TO 9
    0x561b6ceea670 --------DA   00030 FOR C=1 TO 9
    0x561b6cef4b20 --------DA   00031 IF (R-4)*(R-5)*(R-6)=0 THEN 40
    0x561b6cef5380 --------DA   00032 IF (C-4)*(C-5)*(C-6)=0 THEN 40
    0x561b6cef5760 --------DA T 00035 T(R,C)=-5
    0x561b6cef57e0 --------DA   00036 GOTO 50
    0x561b6cef6280 --------DA T 00040 IF (R-1)*(C-1)*(R-9)*(C-9)=0 THEN 35
    0x561b6cef6660 --------DA   00042 T(R,C)=5
    0x561b6cef6790 --------DA T 00050 NEXT C
    0x561b6cef68d0 --------DA   00060 NEXT R
    0x561b6cef6ef0 --------DA   00065 T(5,5)=0: GOSUB 500
    0x561b6cef6f70 --------DA   00070 REM *** INPUT MOVE AND CHECK ON LEGALITY
    0x561b6cef7310 --------DA   00075 FOR W=1 TO 33
    0x561b6cef7560 --------DA   00077 READ M
    0x561b6cef84c0 --------DA   00079 DATA 13,14,15,22,23,24,29,30,31,32,33,34,35,38,39,40,41
    0x561b6cef9330 --------DA   00081 DATA 42,43,44,47,48,49,50,51,52,53,58,59,60,67,68,69
    0x561b6cef9730 --------DA   00083 B(M)=-7: NEXT W
    0x561b6cef9a20 --------DA   00086 B(41)=-3
    0x561b6cef9c50 -------DCA T 00100 INPUT "MOVE WHICH PIECE";Z
    0x561b6cef9fb0 -------DCA   00110 IF B(Z)=-7 THEN 140
    0x561b6cefa170 -------DCA T 00120 PRINT "ILLEGAL MOVE, TRY AGAIN...": GOTO 100
    0x561b6cefa390 -------DCA T 00140 INPUT "TO WHERE";P
    0x561b6cefa6d0 -------DCA   00150 IF B(P)=0 THEN 120
    0x561b6cefaa10 -------DCA   00153 IF B(P)=-7 THEN 120
    0x561b6cefaca0 -------DCA   00156 IF Z=P THEN 100
    0x561b6cefb500 -------DCA   00160 IF ((Z+P)/2)=INT((Z+P)/2) THEN 180
    0x561b6cefb5a0 -------DCA   00170 GOTO 120
    0x561b6cefbf80 -------DCA T 00180 IF (ABS(Z-P)-2)*(ABS(Z-P)-18)<>0 THEN 120
    0x561b6cefc000 -------DCA   00190 GOSUB 1000
    0x561b6cefc060 -------DCA   00200 GOSUB 500
    0x561b6cefc0c0 -------DCA   00210 GOSUB 1500
    0x561b6cefc120 -------DCA   00220 GOTO 100
    0x561b6cefc180 ---------B G 00500 REM *** PRINT BOARD
    0x561b6cefc520 ---------B   00510 FOR X=1 TO 9
    0x561b6cefc8e0 ---------B   00520 FOR Y=1 TO 9
    0x561b6cefd3b0 ---------B   00525 IF (X-1)*(X-9)*(Y-1)*(Y-9)=0 THEN 550
    0x561b6cefdc20 ---------B   00530 IF (X-4)*(X-5)*(X-6)=0 THEN 570
    0x561b6cefe480 ---------B   00540 IF (Y-4)*(Y-5)*(Y-6)=0 THEN 570
    0x561b6cefe500 ---------B T 00550 REM
    0x561b6cefe590 ---------B   00560 GOTO 610
    0x561b6cefe990 ---------B T 00570 IF T(X,Y)<>5 THEN 600
    0x561b6cefed70 ---------B   00580 PRINT TAB(Y*2);"!";
    0x561b6ceff1f0 ---------B   00590 GOTO 610
    0x561b6ceff5b0 ---------B T 00600 PRINT TAB(Y*2);"O";
    0x561b6ceff620 ---------B T 00610 REM
    0x561b6ceff760 ---------B   00615 NEXT Y
    0x561b6ceff7e0 ---------B   00620 PRINT
    0x561b6ceff910 ---------B   00630 NEXT X
    0x561b6ceff970 ---------B   00640 RETURN
    0x561b6ceffa00 ---------C G 01000 REM *** UPDATE BOARD
    0x561b6ceffed0 ---------C   01005 C=1: FOR X=1 TO 9
    0x561b6cf001b0 ---------C   01020 FOR Y=1 TO 9
    0x561b6cf00440 ---------C   01030 IF C<>Z THEN 1220
    0x561b6cf007d0 ---------C   01040 IF C+2<>P THEN 1080
    0x561b6cf00cf0 ---------C   01045 IF T(X,Y+1)=0 THEN 120
    0x561b6cf011e0 ---------C   01050 T(X,Y+2)=5
    0x561b6cf01a80 ---------C   01060 T(X,Y+1)=0: B(C+1)=-3
    0x561b6cf01b00 ---------C   01070 GOTO 1200
    0x561b6cf01e70 ---------C T 01080 IF C+18<>P THEN 1130
    0x561b6cf023a0 ---------C   01085 IF T(X+1,Y)=0 THEN 120
    0x561b6cf03100 ---------C   01090 T(X+2,Y)=5: T(X+1,Y)=0: B(C+9)=-3
    0x561b6cf03180 ---------C   01120 GOTO 1200
    0x561b6cf034f0 ---------C T 01130 IF C-2<>P THEN 1170
    0x561b6cf03a20 ---------C   01135 IF T(X,Y-1)=0 THEN 120
    0x561b6cf04780 ---------C   01140 T(X,Y-2)=5: T(X,Y-1)=0: B(C-1)=-3
    0x561b6cf04800 ---------C   01160 GOTO 1200
    0x561b6cf04b70 ---------C T 01170 IF C-18<>P THEN 1220
    0x561b6cf050a0 ---------C   01175 IF T(X-1,Y)=0 THEN 120
    0x561b6cf05e00 ---------C   01180 T(X-2,Y)=5: T(X-1,Y)=0: B(C-9)=-3
    0x561b6cf063d0 ---------C T 01200 B(Z)=-3: B(P)=-7
    0x561b6cf067f0 ---------C   01210 T(X,Y)=0: GOTO 1240
    0x561b6cf06b10 ---------C T 01220 C=C+1
    0x561b6cf06c40 ---------C   01225 NEXT Y
    0x561b6cf06d80 ---------C   01230 NEXT X
    0x561b6cf06de0 ---------C T 01240 RETURN
    0x561b6cf06e80 ---------D G 01500 REM*** CHECK IF GAME IS OVER
    0x561b6cf07160 ---------D   01505 F=0
    0x561b6cf07430 ---------D   01510 FOR R=2 TO 8
    0x561b6cf07720 ---------D   01520 FOR C=2 TO 8
    0x561b6cf07b40 ---------D   01530 IF T(R,C)<>5 THEN 1580
    0x561b6cf07e80 ---------D   01535 F=F+1
    0x561b6cf08450 ---------D   01540 FOR A=R-1 TO R+1
    0x561b6cf08670 ---------D   01545 T=0
    0x561b6cf08b80 ---------D   01550 FOR B=C-1 TO C+1
    0x561b6cf090a0 ---------D   01560 T=T+T(A,B)
    0x561b6cf091d0 ---------D   01561 NEXT B
    0x561b6cf09440 ---------D   01564 IF T<>10 THEN 1567
    0x561b6cf09860 ---------D   01565 IF T(A,C)<>0 THEN 1630
    0x561b6cf099a0 ---------D T 01567 NEXT A
    0x561b6cf09ec0 ---------D   01568 FOR X=C-1 TO C+1
    0x561b6cf0a0e0 ---------D   01569 T=0
    0x561b6cf0a5f0 ---------D   01570 FOR Y=R-1 TO R+1
    0x561b6cf0ab10 ---------D   01571 T=T+T(Y,X)
    0x561b6cf0ac40 ---------D   01572 NEXT Y
    0x561b6cf0aeb0 ---------D   01573 IF T<>10 THEN 1575
    0x561b6cf0b2d0 ---------D   01574 IF T(R,X)<>0 THEN 1630
    0x561b6cf0b410 ---------D T 01575 NEXT X
    0x561b6cf0b550 ---------D T 01580 NEXT C
    0x561b6cf0b690 ---------D   01590 NEXT R
    0x561b6cf0b720 ---------D   01600 REM *** GAME IS OVER
    0x561b6cf0b8b0 ---------D   01605 PRINT "THE GAME IS OVER."
    0x561b6cf0bc00 ---------D   01610 PRINT "YOU HAD";F;"PIECES REMAINING."
    0x561b6cf0be70 ---------D   01611 IF F<>1 THEN 1615
    0x561b6cf0c010 ---------D   01612 PRINT "BRAVO!  YOU MADE A PERFECT SCORE!"
    0x561b6cf0c1a0 ---------D   01613 PRINT "SAVE THIS PAPER AS A RECORD OF YOUR ACCOMPLISHMENT!"
    0x561b6cf0c440 ---------D T 01615 PRINT: INPUT "PLAY AGAIN (YES OR NO)";A$
    0x561b6cf0ced0 ---------D   01617 IF A$="NO" THEN 2000
    0x561b6cf0cf90 ---------D   01618 RESTORE: GOTO 28
    0x561b6cf0cfd0 ----------   01620 STOP
    0x561b6cf0d030 ---------D T 01630 RETURN
    0x561b6cf0d250 ---------D T 02000 PRINT: PRINT "SO LONG FOR NOW.": PRINT
    0x561b6cf0d2a0 ---------D   02010 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00028      01618T
     00035      00040T
     00040      00031T, 00032T
     00050      00036T
     00100      00120T, 00156T, 00220T
     00120      00150T, 00153T, 00170T, 00180T, 01045T, 01085T, 01135T, 01175T
     00140      00110T
     00180      00160T
     00500      00065G, 00200G
     00550      00525T
     00570      00530T, 00540T
     00600      00570T
     00610      00560T, 00590T
     01000      00190G
     01080      01040T
     01130      01080T
     01170      01130T
     01200      01070T, 01120T, 01160T
     01220      01030T, 01170T
     01240      01210T
     01500      00210G
     01567      01564T
     01575      01573T
     01580      01530T
     01615      01611T
     01630      01565T, 01574T
     02000      01617T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x561b6ceebb80 (00001)   0x561b6ceebb80 (00001)   0x561b6cf0d2a0 (02010)   0x561b6cefc120 (00220)   
   B) 0x561b6cefc180 (00500)   0x561b6cefc180 (00500)   0x561b6ceff970 (00640)   0x561b6ceff970 (00640)   
   C) 0x561b6cef9c50 (00100)   0x561b6ceffa00 (01000)   0x561b6cf06de0 (01240)   0x561b6cf06de0 (01240)   
   D) 0x561b6cef3c20 (00028)   0x561b6cf06e80 (01500)   0x561b6cf0d030 (01630)   0x561b6cf0d2a0 (02010)   

    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03250 - 10000    6760 

 */



/*
 *  Symbol Table Listing for 'basic/hi-q.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B               Array    Integer         {0,69} 
    C                        Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    OCT$            Function String          args=1, float  
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T               Array    Integer         {0,8} {0,8} 
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X                        Integer     
    Y                        Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/hi-q.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x561b6ceebb80 ---------A   01000 PRINT TAB(33);"H-I-Q"
    0x561b6ceeced0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x561b6ceed050 ---------A   01020 PRINT:PRINT:PRINT
    0x561b6ceeb0a0 ---------A   01030 DIM B(70),T(9,9)
    0x561b6ceec690 ---------A   01040 PRINT "HERE IS THE BOARD:": PRINT
    0x561b6ceeaca0 ---------A   01050 PRINT "          !    !    !"
    0x561b6ceed1b0 ---------A   01060 PRINT "         13   14   15": PRINT
    0x561b6ceeb6e0 ---------A   01070 PRINT "          !    !    !"
    0x561b6cef2840 ---------A   01080 PRINT "         22   23   24": PRINT
    0x561b6ceec6e0 ---------A   01090 PRINT "!    !    !    !    !    !    !"
    0x561b6cef2aa0 ---------A   01100 PRINT "29   30   31   32   33   34   35": PRINT
    0x561b6cef2bf0 ---------A   01110 PRINT "!    !    !    !    !    !    !"
    0x561b6cef2d90 ---------A   01120 PRINT "38   39   40   41   42   43   44": PRINT
    0x561b6cef2f10 ---------A   01130 PRINT "!    !    !    !    !    !    !"
    0x561b6cef30d0 ---------A   01140 PRINT "47   48   49   50   51   52   53": PRINT
    0x561b6cef3230 ---------A   01150 PRINT "          !    !    !"
    0x561b6cef33e0 ---------A   01160 PRINT "         58   59   60": PRINT
    0x561b6cef3540 ---------A   01170 PRINT "          !    !    !"
    0x561b6cef3710 ---------A   01180 PRINT "         67   68   69": PRINT
    0x561b6cef38c0 ---------A   01190 PRINT "TO SAVE TYPING TIME, A COMPRESSED VERSION OF THE GAME BOARD"
    0x561b6cef3a50 ---------A   01200 PRINT "WILL BE USED DURING PLAY.  REFER TO THE ABOVE ONE FOR PEG"
    0x561b6cef3bb0 ---------A   01210 PRINT "NUMBERS.  OK, LET'S BEGIN."
    0x561b6cef3c20 ---------A   01220 REM *** SET UP BOARD
    0x561b6cf11190 ---------A   01230 FOR R=1 TO 9
    0x561b6cf111f0 ---------A   01240 FOR C=1 TO 9
    0x561b6cf11250 ---------A   01250 IF (R-4)*(R-5)*(R-6)=0 THEN 1710
    0x561b6cf112b0 ---------A   01260 IF (C-4)*(C-5)*(C-6)=0 THEN 1710
    0x561b6cf11140 ---------A   01270 T(R,C)=-5
    0x561b6cf11360 ---------A   01280 GOTO 1730
    0x561b6cf113c0 ----------   01290 IF (R-1)*(C-1)*(R-9)*(C-9)=0 THEN 1690
    0x561b6cf11450 ----------   01300 T(R,C)=5
    0x561b6cf114c0 ----------   01310 NEXT C
    0x561b6cf11520 ----------   01320 NEXT R
    0x561b6cf11580 ----------   01330 T(5,5)=0: GOSUB 1980
    0x561b6cf115e0 ---------A   01340 REM *** INPUT MOVE AND CHECK ON LEGALITY
    0x561b6cf11660 ----------   01350 FOR W=1 TO 33
    0x561b6cf116e0 ----------   01360 READ M
    0x561b6cf11740 ---------A   01370 DATA 13,14,15,22,23,24,29,30,31,32,33,34,35,38,39,40,41
    0x561b6cf117e0 ---------A   01380 DATA 42,43,44,47,48,49,50,51,52,53,58,59,60,67,68,69
    0x561b6cf11870 ----------   01390 B(M)=-7: NEXT W
    0x561b6cf118d0 ----------   01400 B(41)=-3
    0x561b6cf11940 ----------   01410 INPUT "MOVE WHICH PIECE";Z
    0x561b6cf119d0 ----------   01420 IF B(Z)=-7 THEN 1860
    0x561b6cf11a50 ----------   01430 PRINT "ILLEGAL MOVE, TRY AGAIN...": GOTO 1830
    0x561b6cf11ad0 ----------   01440 INPUT "TO WHERE";P
    0x561b6cf11b50 ----------   01450 IF B(P)=0 THEN 1850
    0x561b6cf11bd0 ----------   01460 IF B(P)=-7 THEN 1850
    0x561b6cf11c50 ----------   01470 IF Z=P THEN 1830
    0x561b6cf11cd0 ----------   01480 IF ((Z+P)/2)=INT((Z+P)/2) THEN 1920
    0x561b6cf11d60 ----------   01490 GOTO 1850
    0x561b6cf11dc0 ----------   01500 IF (ABS(Z-P)-2)*(ABS(Z-P)-18)<>0 THEN 1850
    0x561b6cf11e60 ----------   01510 GOSUB 2160
    0x561b6cf11ec0 ----------   01520 GOSUB 1980
    0x561b6cf11f20 ----------   01530 GOSUB 1510
    0x561b6cf11f80 ----------   01540 GOTO 1830
    0x561b6cf120a0 ----------   01550 INPUT "MOVE WHICH PIECE";Z
    0x561b6cf12130 ----------   01560 IF B(Z)=-7 THEN 1860
    0x561b6cf121b0 ----------   01570 PRINT "ILLEGAL MOVE, TRY AGAIN...": GOTO 1830
    0x561b6cf12230 ----------   01580 INPUT "TO WHERE";P
    0x561b6cf122b0 ----------   01590 IF B(P)=0 THEN 1850
    0x561b6cf12330 ----------   01600 IF B(P)=-7 THEN 1850
    0x561b6cf123b0 ----------   01610 IF Z=P THEN 1830
    0x561b6cf12430 ----------   01620 IF ((Z+P)/2)=INT((Z+P)/2) THEN 1920
    0x561b6cf124c0 ----------   01630 GOTO 1850
    0x561b6cf12520 ----------   01640 IF (ABS(Z-P)-2)*(ABS(Z-P)-18)<>0 THEN 1850
    0x561b6cf125c0 ----------   01650 GOSUB 2160
    0x561b6cf12620 ----------   01660 GOSUB 1980
    0x561b6cf12680 ----------   01670 GOSUB 1510
    0x561b6cf126e0 ----------   01680 GOTO 1830
    0x561b6cef5760 ---------A T 01690 T(R,C)=-5
    0x561b6cef57e0 ---------A   01700 GOTO 1730
    0x561b6cef6280 ---------A T 01710 IF (R-1)*(C-1)*(R-9)*(C-9)=0 THEN 1690
    0x561b6cef6660 ---------A   01720 T(R,C)=5
    0x561b6cef6790 ---------A T 01730 NEXT C
    0x561b6cef68d0 ---------A   01740 NEXT R
    0x561b6cef6ef0 ---------A   01750 T(5,5)=0: GOSUB 1980
    0x561b6cef6f70 ---------A   01760 REM *** INPUT MOVE AND CHECK ON LEGALITY
    0x561b6cef7310 ---------A   01770 FOR W=1 TO 33
    0x561b6cef7560 ---------A   01780 READ M
    0x561b6cef84c0 ---------A   01790 DATA 13,14,15,22,23,24,29,30,31,32,33,34,35,38,39,40,41
    0x561b6cef9330 ---------A   01800 DATA 42,43,44,47,48,49,50,51,52,53,58,59,60,67,68,69
    0x561b6cef9730 ---------A   01810 B(M)=-7: NEXT W
    0x561b6cef9a20 ---------A   01820 B(41)=-3
    0x561b6cef9c50 ---------A T 01830 INPUT "MOVE WHICH PIECE";Z
    0x561b6cef9fb0 ---------A   01840 IF B(Z)=-7 THEN 1860
    0x561b6cefa170 ---------A T 01850 PRINT "ILLEGAL MOVE, TRY AGAIN...": GOTO 1830
    0x561b6cefa390 ---------A T 01860 INPUT "TO WHERE";P
    0x561b6cefa6d0 ---------A   01870 IF B(P)=0 THEN 1850
    0x561b6cefaa10 ---------A   01880 IF B(P)=-7 THEN 1850
    0x561b6cefaca0 ---------A   01890 IF Z=P THEN 1830
    0x561b6cefb500 ---------A   01900 IF ((Z+P)/2)=INT((Z+P)/2) THEN 1920
    0x561b6cefb5a0 ---------A   01910 GOTO 1850
    0x561b6cefbf80 ---------A T 01920 IF (ABS(Z-P)-2)*(ABS(Z-P)-18)<>0 THEN 1850
    0x561b6cefc000 ---------A   01930 GOSUB 2160
    0x561b6cefc060 ---------A   01940 GOSUB 1980
    0x561b6cefc0c0 ---------A   01950 GOSUB 1510
    0x561b6cefc120 ---------A   01960 GOTO 1830
    0x561b6cefc180 ---------B   01970 REM *** PRINT BOARD
    0x561b6cefc520 ---------B G 01980 FOR X=1 TO 9
    0x561b6cefc8e0 ---------B   01990 FOR Y=1 TO 9
    0x561b6cefd3b0 ---------B   02000 IF (X-1)*(X-9)*(Y-1)*(Y-9)=0 THEN 2040
    0x561b6cefdc20 ---------B   02010 IF (X-4)*(X-5)*(X-6)=0 THEN 2050
    0x561b6cefe480 ---------B   02020 IF (Y-4)*(Y-5)*(Y-6)=0 THEN 2050
    0x561b6cefe500 ---------B   02030 REM
    0x561b6cefe590 ---------B T 02040 GOTO 2100
    0x561b6cefe990 ---------B T 02050 IF T(X,Y)<>5 THEN 2080
    0x561b6cefed70 ---------B   02060 PRINT TAB(Y*2);"!";
    0x561b6ceff1f0 ---------B   02070 GOTO 2100
    0x561b6ceff5b0 ---------B T 02080 PRINT TAB(Y*2);"O";
    0x561b6ceff620 ---------B   02090 REM
    0x561b6ceff760 ---------B T 02100 NEXT Y
    0x561b6ceff7e0 ---------B   02110 PRINT
    0x561b6ceff910 ---------B   02120 NEXT X
    0x561b6cf11fe0 ---------B   02130 GOTO 02140
    0x561b6cf12040 ---------B T 02140 RETURN
    0x561b6ceffa00 ---------C   02150 REM *** UPDATE BOARD
    0x561b6ceffed0 ---------C G 02160 C=1: FOR X=1 TO 9
    0x561b6cf001b0 ---------C   02170 FOR Y=1 TO 9
    0x561b6cf00440 ---------C   02180 IF C<>Z THEN 2370
    0x561b6cf007d0 ---------C   02190 IF C+2<>P THEN 2240
    0x561b6cf00cf0 ---------C   02200 IF T(X,Y+1)=0 THEN 2440
    0x561b6cf011e0 ---------C   02210 T(X,Y+2)=5
    0x561b6cf01a80 ---------C   02220 T(X,Y+1)=0: B(C+1)=-3
    0x561b6cf01b00 ---------C   02230 GOTO 2350
    0x561b6cf01e70 ---------C T 02240 IF C+18<>P THEN 2280
    0x561b6cf023a0 ---------C   02250 IF T(X+1,Y)=0 THEN 2440
    0x561b6cf03100 ---------C   02260 T(X+2,Y)=5: T(X+1,Y)=0: B(C+9)=-3
    0x561b6cf03180 ---------C   02270 GOTO 2350
    0x561b6cf034f0 ---------C T 02280 IF C-2<>P THEN 2320
    0x561b6cf03a20 ---------C   02290 IF T(X,Y-1)=0 THEN 2440
    0x561b6cf04780 ---------C   02300 T(X,Y-2)=5: T(X,Y-1)=0: B(C-1)=-3
    0x561b6cf04800 ---------C   02310 GOTO 2350
    0x561b6cf04b70 ---------C T 02320 IF C-18<>P THEN 2370
    0x561b6cf050a0 ---------C   02330 IF T(X-1,Y)=0 THEN 2440
    0x561b6cf05e00 ---------C   02340 T(X-2,Y)=5: T(X-1,Y)=0: B(C-9)=-3
    0x561b6cf063d0 ---------C T 02350 B(Z)=-3: B(P)=-7
    0x561b6cf067f0 ---------C   02360 T(X,Y)=0: GOTO 2400
    0x561b6cf06b10 ---------C T 02370 C=C+1
    0x561b6cf06c40 ---------C   02380 NEXT Y
    0x561b6cf06d80 ---------C   02390 NEXT X
    0x561b6cf12740 ---------C T 02400 GOTO 02410
    0x561b6cf127a0 ---------C T 02410 RETURN
    0x561b6cf15b50 ---------C T 02420 INPUT "MOVE WHICH PIECE";Z
    0x561b6cf15bb0 ---------C   02430 IF B(Z)=-7 THEN 2450
    0x561b6cf15c10 ---------C T 02440 PRINT "ILLEGAL MOVE, TRY AGAIN...": GOTO 2420
    0x561b6cf15c90 ---------C T 02450 INPUT "TO WHERE";P
    0x561b6cf15cf0 ---------C   02460 IF B(P)=0 THEN 2440
    0x561b6cf15d50 ---------C   02470 IF B(P)=-7 THEN 2440
    0x561b6cf15db0 ---------C   02480 IF Z=P THEN 2420
    0x561b6cf15e10 ---------C   02490 IF ((Z+P)/2)=INT((Z+P)/2) THEN 2510
    0x561b6cf15e70 ---------C   02500 GOTO 2440
    0x561b6cf15eb0 ---------C T 02510 IF (ABS(Z-P)-2)*(ABS(Z-P)-18)<>0 THEN 2440
    0x561b6cf15f50 ---------C   02520 GOSUB 2160
    0x561b6cf15f90 ---------C   02530 GOSUB 1980
    0x561b6cf15fd0 ---------C   02540 GOSUB 1510
    0x561b6cf16010 ---------C   02550 GOTO 2420
    0x561b6ceea6d0 ---------D T 02560 FOR R=1 TO 9
    0x561b6ceea670 ---------D   02570 FOR C=1 TO 9
    0x561b6cef4b20 ---------D   02580 IF (R-4)*(R-5)*(R-6)=0 THEN 2620
    0x561b6cef5380 ---------D   02590 IF (C-4)*(C-5)*(C-6)=0 THEN 2620
    0x561b6cf0f2b0 ---------D T 02600 T(R,C)=-5
    0x561b6cf16090 ---------D   02610 GOTO 2640
    0x561b6cf160f0 ---------D T 02620 IF (R-1)*(C-1)*(R-9)*(C-9)=0 THEN 2600
    0x561b6cf0dff0 ---------D   02630 T(R,C)=5
    0x561b6cf161b0 ---------D T 02640 NEXT C
    0x561b6cf16210 ---------D   02650 NEXT R
    0x561b6cf16270 ---------D   02660 T(5,5)=0: GOSUB 1980
    0x561b6cf162d0 ---------D   02670 REM *** INPUT MOVE AND CHECK ON LEGALITY
    0x561b6cf16350 ---------D   02680 FOR W=1 TO 33
    0x561b6cf163d0 ---------D   02690 READ M
    0x561b6cf0f080 ---------D   02700 DATA 13,14,15,22,23,24,29,30,31,32,33,34,35,38,39,40,41
    0x561b6cf0d510 ---------D   02710 DATA 42,43,44,47,48,49,50,51,52,53,58,59,60,67,68,69
    0x561b6cf16430 ---------D   02720 B(M)=-7: NEXT W
    0x561b6cf0d4a0 ---------D   02730 B(41)=-3
    0x561b6cf164b0 ---------D T 02740 INPUT "MOVE WHICH PIECE";Z
    0x561b6cf16510 ---------D   02750 IF B(Z)=-7 THEN 2770
    0x561b6cf16570 ---------D T 02760 PRINT "ILLEGAL MOVE, TRY AGAIN...": GOTO 2740
    0x561b6cf165f0 ---------D T 02770 INPUT "TO WHERE";P
    0x561b6cf16670 ---------D   02780 IF B(P)=0 THEN 2760
    0x561b6cf166f0 ---------D   02790 IF B(P)=-7 THEN 2760
    0x561b6cf16750 ---------D   02800 IF Z=P THEN 2740
    0x561b6cf167d0 ---------D   02810 IF ((Z+P)/2)=INT((Z+P)/2) THEN 2830
    0x561b6cf16830 ---------D   02820 GOTO 2760
    0x561b6cf16890 ---------D T 02830 IF (ABS(Z-P)-2)*(ABS(Z-P)-18)<>0 THEN 2760
    0x561b6cf16930 ---------D   02840 GOSUB 2160
    0x561b6cf16990 ---------D   02850 GOSUB 1980
    0x561b6cf169f0 ---------D   02860 GOSUB 1510
    0x561b6cf16a50 ---------D   02870 GOTO 2740
    0x561b6cf06e80 ---------D   02880 REM*** CHECK IF GAME IS OVER
    0x561b6cf07160 ---------D G 02890 F=0
    0x561b6cf07430 ---------D   02900 FOR R=2 TO 8
    0x561b6cf07720 ---------D   02910 FOR C=2 TO 8
    0x561b6cf07b40 ---------D   02920 IF T(R,C)<>5 THEN 3100
    0x561b6cf07e80 ---------D   02930 F=F+1
    0x561b6cf08450 ---------D   02940 FOR A=R-1 TO R+1
    0x561b6cf08670 ---------D   02950 T=0
    0x561b6cf08b80 ---------D   02960 FOR B=C-1 TO C+1
    0x561b6cf090a0 ---------D   02970 T=T+T(A,B)
    0x561b6cf091d0 ---------D   02980 NEXT B
    0x561b6cf09440 ---------D   02990 IF T<>10 THEN 3010
    0x561b6cf09860 ---------D   03000 IF T(A,C)<>0 THEN 3210
    0x561b6cf099a0 ---------D T 03010 NEXT A
    0x561b6cf09ec0 ---------D   03020 FOR X=C-1 TO C+1
    0x561b6cf0a0e0 ---------D   03030 T=0
    0x561b6cf0a5f0 ---------D   03040 FOR Y=R-1 TO R+1
    0x561b6cf0ab10 ---------D   03050 T=T+T(Y,X)
    0x561b6cf0ac40 ---------D   03060 NEXT Y
    0x561b6cf0aeb0 ---------D   03070 IF T<>10 THEN 3090
    0x561b6cf0b2d0 ---------D   03080 IF T(R,X)<>0 THEN 3210
    0x561b6cf0b410 ---------D T 03090 NEXT X
    0x561b6cf0b550 ---------D T 03100 NEXT C
    0x561b6cf0b690 ---------D   03110 NEXT R
    0x561b6cf0b720 ---------D   03120 REM *** GAME IS OVER
    0x561b6cf0b8b0 ---------D   03130 PRINT "THE GAME IS OVER."
    0x561b6cf0bc00 ---------D   03140 PRINT "YOU HAD";F;"PIECES REMAINING."
    0x561b6cf0be70 ---------D   03150 IF F<>1 THEN 3180
    0x561b6cf0c010 ---------D   03160 PRINT "BRAVO!  YOU MADE A PERFECT SCORE!"
    0x561b6cf0c1a0 ---------D   03170 PRINT "SAVE THIS PAPER AS A RECORD OF YOUR ACCOMPLISHMENT!"
    0x561b6cf0c440 ---------D T 03180 PRINT: INPUT "PLAY AGAIN (YES OR NO)";A$
    0x561b6cf0ced0 ---------D   03190 IF A$="NO" THEN 3220
    0x561b6cf0cf90 ---------D   03200 RESTORE: GOTO 2560
    0x561b6cf13010 ---------D T 03210 GOTO 03240
    0x561b6cf0d250 ---------D T 03220 PRINT: PRINT "SO LONG FOR NOW.": PRINT
    0x561b6cf0d2a0 ---------D   03230 END
    0x561b6cf13070 ---------D T 03240 RETURN
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
char* data_01370s[]={"13","14","15","22","23","24","29","30","31","32","33","34","35","38","39","40","41"};
char* data_01380s[]={"42","43","44","47","48","49","50","51","52","53","58","59","60","67","68","69"};
char* data_01790s[]={"13","14","15","22","23","24","29","30","31","32","33","34","35","38","39","40","41"};
char* data_01800s[]={"42","43","44","47","48","49","50","51","52","53","58","59","60","67","68","69"};
char* data_02700s[]={"13","14","15","22","23","24","29","30","31","32","33","34","35","38","39","40","41"};
char* data_02710s[]={"42","43","44","47","48","49","50","51","52","53","58","59","60","67","68","69"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1370, 17,data_01370s},
    { 1380, 16,data_01380s},
    { 1790, 17,data_01790s},
    { 1800, 16,data_01800s},
    { 2700, 17,data_02700s},
    { 2710, 16,data_02710s},
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
int    B_int_arr[70];                             // Basic: B 
int    C_int;                                     // Basic: C 
int    F_int;                                     // Basic: F 
int    M_int;                                     // Basic: M 
int    P_int;                                     // Basic: P 
int    R_int;                                     // Basic: R 
int    T_int_arr[9][9];                           // Basic: T 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01980();
void Routine_02160();
void Routine_02890();

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
    // 01970 REM *** PRINT BOARD

void Routine_01980(){
    // 01980 FOR X=1 TO 9
    for(X_int=1;X_int<=9;X_int++){
        // 01990 FOR Y=1 TO 9
        for(Y_int=1;Y_int<=9;Y_int++){
            // 02000 IF (X-1)*(X-9)*(Y-1)*(Y-9)=0 THEN 2040
            if((X_int-1)*(X_int-9)*(Y_int-1)*(Y_int-9)==0)goto Lbl_02040;
            // 02010 IF (X-4)*(X-5)*(X-6)=0 THEN 2050
            if((X_int-4)*(X_int-5)*(X_int-6)==0)goto Lbl_02050;
            // 02020 IF (Y-4)*(Y-5)*(Y-6)=0 THEN 2050
            if((Y_int-4)*(Y_int-5)*(Y_int-6)==0)goto Lbl_02050;
            // 02030 REM

  Lbl_02040:
            // 02040 GOTO 2100
            goto Lbl_02100;

  Lbl_02050:
            // 02050 IF T(X,Y)<>5 THEN 2080
            if(T_int_arr[X_int][Y_int]!=5)goto Lbl_02080;
            // 02060 PRINT TAB(Y*2);"!";
