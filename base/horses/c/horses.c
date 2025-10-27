/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/horses.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x61537faa0db0 ---------A   01010 PRINT "BASIC LIBRARY--'HORSES'--18-JUL-70"
    0x61537fa8f5d0 ---------A   01020 REM  *  *  *  *  *  *  *    MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *  *
    0x61537fa8f610 ---------A   01030 REM
    0x61537fa9fb80 ---------A   01040 RANDOM
    0x61537faa0f30 ---------A   01050 PRINT"WELCOME TO DATALINE SYSTEMS RACETRACK"
    0x61537faa0ff0 ---------A   01060 PRINT
    0x61537faa10b0 ---------A   01070 PRINT "DO YOU WANT DIRECTIONS";
    0x61537faa05e0 ---------A   01080 INPUT X$
    0x61537fa9f090 ---------A   01090 IF X$="NO" THEN1150
    0x61537fa9f480 ---------A   01100 PRINT"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU"
    0x61537fa9ebe0 ---------A   01110 PRINT"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE."
    0x61537faa1180 ---------A   01120 PRINT "DURING THE RACE , A HORSE WILL BE SHOWN BY ITS"
    0x61537fa9f680 ---------A   01130 PRINT"NUMBER.THE HORSES RACE DOWN THE PAPER!"
    0x61537fa9f6d0 ---------A   01140 PRINT
    0x61537fa9f840 ---------A T 01150 PRINT "HOW MANY WANT TO BET";
    0x61537faa6a00 ---------A   01160 INPUT C
    0x61537faa6b20 ---------A   01170 PRINT "WHEN ? APPEARS,TYPE NAME"
    0x61537faa6e70 ---------A   01180 FOR A=1 TO C
    0x61537faa7170 ---------A   01190 INPUT W$(A)
    0x61537faa72b0 ---------A   01200 NEXT A
    0x61537faa7310 ---------A   01210 PRINT
    0x61537faa7760 ---------A   01220 PRINT"HORSE"," ","NUMBER","ODDS"
    0x61537faa77d0 ---------A   01230 PRINT
    0x61537faa7de0 ---------A   01240 LET S(M(I))=0
    0x61537faa80b0 ---------A   01250 LET R=0
    0x61537faa8360 ---------A   01260 FOR A=1 TO 8
    0x61537faa8a20 ---------A   01270 LET D(A)=INT(10*RND+1)
    0x61537faa8b50 ---------A   01280 NEXT A
    0x61537faa8e30 ---------A   01290 FOR A=1TO 8
    0x61537faa9270 ---------A   01300 LET R=R+D(A)
    0x61537faa93a0 ---------A   01310 NEXT A
    0x61537faa9740 ---------A   01320 LET V$(1)="JOE MAW"
    0x61537faa9a10 ---------A   01330 LET V$(2)="L.B.J."
    0x61537faa9ef0 ---------A   01340 LET V$(3)="MR.WASHBURN"
    0x61537faaa1e0 ---------A   01350 LET V$(4)="MISS KAREN"
    0x61537faaa4d0 ---------A   01360 LET V$(5)="JOLLY"
    0x61537faaa7a0 ---------A   01370 LET V$(6)="FOR Q."
    0x61537faaaa70 ---------A   01380 LET V$(7)="JELLY DO NOT"
    0x61537faaad60 ---------A   01390 LET V$(8)="ACID ROCK"
    0x61537faab100 ---------A   01400 FOR N=1 TO8
    0x61537faab940 ---------A   01410 PRINT V$(N)," ",N,R/D(N);":1"
    0x61537faaba70 ---------A   01420 NEXT N
    0x61537faabc40 ---------A   01430 PRINT"--------------------------------------------------"
    0x61537faabda0 ---------A   01440 PRINT "PLACE YOUR BETS...HORSE # THEN AMOUNT"
    0x61537faac150 ---------A   01450 FOR J=1 TO C
    0x61537faac3b0 ---------A T 01460 PRINT W$(J);
    0x61537faac930 ---------A   01470 INPUT Q(J),P(J)
    0x61537faacc80 ---------A   01480 IF P(J)<1 THEN 1500
    0x61537faacfd0 ---------A   01490 IF P(J)<100000 THEN 1520
    0x61537faad130 ---------A T 01500 PRINT"  YOU CAN'T DO THAT!"
    0x61537faad1a0 ---------A   01510 GOTO 1460
    0x61537faad2c0 ---------A T 01520 NEXT J
    0x61537faad350 ---------A   01530 PRINT
    0x61537faad4b0 ---------A   01540 PRINT"1 2 3 4 5 6 7 8"
    0x61537faad620 ---------A T 01550 PRINT"XXXXSTARTXXXX";
    0x61537faad910 ---------A   01560 FOR I=1 TON
    0x61537faadb50 ---------A   01570 LET M=I
    0x61537faade70 ---------A   01580 LET M(I)=M
    0x61537faae610 ---------A   01590 LET Y(M(I))=INT(100*RND+1)
    0x61537faaea30 ---------A   01600 IF Y(M(I))<10 THEN1690
    0x61537faaf060 ---------A   01610 LET S=INT(R/D(I)+.5)
    0x61537faaf5a0 ---------A   01620 IF Y(M(I))<S+17 THEN 1710
    0x61537faafaf0 ---------A   01630 IF Y(M(I))<S+37 THEN 1730
    0x61537fab0040 ---------A   01640 IF Y(M(I))<S+57 THEN1750
    0x61537fab0590 ---------A   01650 IF Y(M(I))<77+S THEN1770
    0x61537fab0ee0 ---------A   01660 IF Y(M(I))<S+92 THEN1790
    0x61537fab12c0 ---------A   01670 LET Y(M(I))=7
    0x61537fab1330 ---------A   01680 GOTO 1800
    0x61537fab16f0 ---------A T 01690 LET Y(M(I))=1
    0x61537fab1760 ---------A   01700 GOTO 1800
    0x61537fab1b20 ---------A T 01710 LET Y(M(I))=2
    0x61537fab1b90 ---------A   01720 GOTO 1800
    0x61537fab1f50 ---------A T 01730 LET Y(M(I))=3
    0x61537fab1fc0 ---------A   01740 GOTO 1800
    0x61537fab2380 ---------A T 01750 LET Y(M(I))=4
    0x61537fab23f0 ---------A   01760 GOTO 1800
    0x61537fab27b0 ---------A T 01770 LET Y(M(I))=5
    0x61537fab2820 ---------A   01780 GOTO 1800
    0x61537fab2be0 ---------A T 01790 LET Y(M(I))=6
    0x61537fab2d10 ---------A T 01800 NEXTI
    0x61537fab2f50 ---------A   01810 LET M=I
    0x61537fab3230 ---------A   01820 FOR I=1TO8
    0x61537fab3ad0 ---------A   01830 LET S(M(I))=S(M(I))+Y(M(I))
    0x61537fab3c00 ---------A   01840 NEXTI
    0x61537fab3e20 ---------A   01850 LET I=1
    0x61537fab41b0 ---------A   01860 FOR L=1 TO8
    0x61537fab45c0 ---------A   01870 FORI=1TO 8-L
    0x61537fab4cc0 ---------A   01880 IF S(M(I))<S(M(I+1))THEN 1920
    0x61537fab50a0 ---------A   01890 LET H=M(I)
    0x61537fab5590 ---------A   01900 LET M(I)=M(I+1)
    0x61537fab59a0 ---------A   01910 LET M(I+1)=H
    0x61537fab5ad0 ---------A T 01920 NEXT I
    0x61537fab5c10 ---------A   01930 NEXT L
    0x61537fab60b0 ---------A   01940 LET T=S(M(8))
    0x61537fab6390 ---------A   01950 FOR I=1 TO8
    0x61537fab6c30 ---------A   01960 LET B=S(M(I))-S(M(I-1))
    0x61537fab6e80 ---------A   01970 IF B=0 THEN 2020
    0x61537fab7180 ---------A   01980 FOR A=1 TO B
    0x61537fab7210 ---------A   01990 PRINT
    0x61537fab7620 ---------A   02000 IF S(M(I))>27 THEN2070
    0x61537fab7760 ---------A   02010 NEXT A
    0x61537fab79c0 ---------A T 02020 PRINT M(I);
    0x61537fab7af0 ---------A   02030 NEXT I
    0x61537fab7ef0 ---------A   02040 FOR A=1 TO 28-T
    0x61537fab7f70 ---------A   02050 PRINT
    0x61537fab80a0 ---------A   02060 NEXT A
    0x61537fab8210 ---------A T 02070 PRINT"XXXXFINISHXXXX"
    0x61537fab8470 ---------A   02080 IF T<28 THEN 1550
    0x61537fab85d0 ---------A   02090 PRINT"**************"
    0x61537fab8740 ---------A   02100 PRINT"WINNER IS ";
    0x61537fab8ad0 ---------A   02110 FOR I=8 TO 1STEP-1
    0x61537fab8eb0 ---------A   02120 LET F=M(I)
    0x61537fab8f30 ---------A   02130 PRINT
    0x61537fab9360 ---------A   02140 PRINT "HORSE NO." F, V$(F)
    0x61537fab9490 ---------A   02150 NEXT I
    0x61537fab97a0 ---------A   02160 FOR J=1 TO C
    0x61537fab9bc0 ---------A   02170 IF Q(J)<>M(8) THEN 2200
    0x61537fab9ef0 ---------A   02180 LET N=Q(J)
    0x61537faba760 ---------A   02190 PRINT W$(J);"WINS $";(R/D(N))*P(J)
    0x61537faba890 ---------A T 02200 NEXT J
    0x61537faba8f0 ---------A   02210 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01150      01090T
     01460      01510T
     01500      01480T
     01520      01490T
     01550      02080T
     01690      01600T
     01710      01620T
     01730      01630T
     01750      01640T
     01770      01650T
     01790      01660T
     01800      01680T, 01700T, 01720T, 01740T, 01760T, 01780T
     01920      01880T
     02020      01970T
     02070      02000T
     02200      02170T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x61537faa0db0 (01010)   0x61537faa0db0 (01010)   0x61537faba8f0 (02210)   0x61537faba8f0 (02210)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02210 - 10000    7800 

 */



/*
 *  Symbol Table Listing for 'basic/horses.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    C                        Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D               Array    Integer         {0,9} 
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    L                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M               Array    Integer         {0,9} 
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    OCT$            Function String          args=1, float  
    P               Array    Integer         {0,9} 
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q               Array    Integer         {0,9} 
    R                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,9} 
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
    V$              Array    String          {0,9} 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W$              Array    String          {0,9} 
    X$                       String      
    Y               Array    Integer         {0,9} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/horses.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x61537faa0db0 ---------A   01000 PRINT "BASIC LIBRARY--'HORSES'--18-JUL-70"
    0x61537fa8f5d0 ---------A   01010 REM  *  *  *  *  *  *  *    MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *  *
    0x61537fa8f610 ---------A   01020 REM
    0x61537fa9fb80 ---------A   01030 RANDOM
    0x61537faa0f30 ---------A   01040 PRINT"WELCOME TO DATALINE SYSTEMS RACETRACK"
    0x61537faa0ff0 ---------A   01050 PRINT
    0x61537faa10b0 ---------A   01060 PRINT "DO YOU WANT DIRECTIONS";
    0x61537faa05e0 ---------A   01070 INPUT X$
    0x61537fa9f090 ---------A   01080 IF X$="NO" THEN1140
    0x61537fa9f480 ---------A   01090 PRINT"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU"
    0x61537fa9ebe0 ---------A   01100 PRINT"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE."
    0x61537faa1180 ---------A   01110 PRINT "DURING THE RACE , A HORSE WILL BE SHOWN BY ITS"
    0x61537fa9f680 ---------A   01120 PRINT"NUMBER.THE HORSES RACE DOWN THE PAPER!"
    0x61537fa9f6d0 ---------A   01130 PRINT
    0x61537fa9f840 ---------A T 01140 PRINT "HOW MANY WANT TO BET";
    0x61537faa6a00 ---------A   01150 INPUT C
    0x61537faa6b20 ---------A   01160 PRINT "WHEN ? APPEARS,TYPE NAME"
    0x61537faa6e70 ---------A   01170 FOR A=1 TO C
    0x61537faa7170 ---------A   01180 INPUT W$(A)
    0x61537faa72b0 ---------A   01190 NEXT A
    0x61537faa7310 ---------A   01200 PRINT
    0x61537faa7760 ---------A   01210 PRINT"HORSE"," ","NUMBER","ODDS"
    0x61537faa77d0 ---------A   01220 PRINT
    0x61537faa7de0 ---------A   01230 LET S(M(I))=0
    0x61537faa80b0 ---------A   01240 LET R=0
    0x61537faa8360 ---------A   01250 FOR A=1 TO 8
    0x61537faa8a20 ---------A   01260 LET D(A)=INT(10*RND+1)
    0x61537faa8b50 ---------A   01270 NEXT A
    0x61537faa8e30 ---------A   01280 FOR A=1TO 8
    0x61537faa9270 ---------A   01290 LET R=R+D(A)
    0x61537faa93a0 ---------A   01300 NEXT A
    0x61537faa9740 ---------A   01310 LET V$(1)="JOE MAW"
    0x61537faa9a10 ---------A   01320 LET V$(2)="L.B.J."
    0x61537faa9ef0 ---------A   01330 LET V$(3)="MR.WASHBURN"
    0x61537faaa1e0 ---------A   01340 LET V$(4)="MISS KAREN"
    0x61537faaa4d0 ---------A   01350 LET V$(5)="JOLLY"
    0x61537faaa7a0 ---------A   01360 LET V$(6)="FOR Q."
    0x61537faaaa70 ---------A   01370 LET V$(7)="JELLY DO NOT"
    0x61537faaad60 ---------A   01380 LET V$(8)="ACID ROCK"
    0x61537faab100 ---------A   01390 FOR N=1 TO8
    0x61537faab940 ---------A   01400 PRINT V$(N)," ",N,R/D(N);":1"
    0x61537faaba70 ---------A   01410 NEXT N
    0x61537faabc40 ---------A   01420 PRINT"--------------------------------------------------"
    0x61537faabda0 ---------A   01430 PRINT "PLACE YOUR BETS...HORSE # THEN AMOUNT"
    0x61537faac150 ---------A   01440 FOR J=1 TO C
    0x61537faac3b0 ---------A T 01450 PRINT W$(J);
    0x61537faac930 ---------A   01460 INPUT Q(J),P(J)
    0x61537faacc80 ---------A   01470 IF P(J)<1 THEN 1490
    0x61537faacfd0 ---------A   01480 IF P(J)<100000 THEN 1510
    0x61537faad130 ---------A T 01490 PRINT"  YOU CAN'T DO THAT!"
    0x61537faad1a0 ---------A   01500 GOTO 1450
    0x61537faad2c0 ---------A T 01510 NEXT J
    0x61537faad350 ---------A   01520 PRINT
    0x61537faad4b0 ---------A   01530 PRINT"1 2 3 4 5 6 7 8"
    0x61537faad620 ---------A T 01540 PRINT"XXXXSTARTXXXX";
    0x61537faad910 ---------A   01550 FOR I=1 TON
    0x61537faadb50 ---------A   01560 LET M=I
    0x61537faade70 ---------A   01570 LET M(I)=M
    0x61537faae610 ---------A   01580 LET Y(M(I))=INT(100*RND+1)
    0x61537faaea30 ---------A   01590 IF Y(M(I))<10 THEN1680
    0x61537faaf060 ---------A   01600 LET S=INT(R/D(I)+.5)
    0x61537faaf5a0 ---------A   01610 IF Y(M(I))<S+17 THEN 1700
    0x61537faafaf0 ---------A   01620 IF Y(M(I))<S+37 THEN 1720
    0x61537fab0040 ---------A   01630 IF Y(M(I))<S+57 THEN1740
    0x61537fab0590 ---------A   01640 IF Y(M(I))<77+S THEN1760
    0x61537fab0ee0 ---------A   01650 IF Y(M(I))<S+92 THEN1780
    0x61537fab12c0 ---------A   01660 LET Y(M(I))=7
    0x61537fab1330 ---------A   01670 GOTO 1790
    0x61537fab16f0 ---------A T 01680 LET Y(M(I))=1
    0x61537fab1760 ---------A   01690 GOTO 1790
    0x61537fab1b20 ---------A T 01700 LET Y(M(I))=2
    0x61537fab1b90 ---------A   01710 GOTO 1790
    0x61537fab1f50 ---------A T 01720 LET Y(M(I))=3
    0x61537fab1fc0 ---------A   01730 GOTO 1790
    0x61537fab2380 ---------A T 01740 LET Y(M(I))=4
    0x61537fab23f0 ---------A   01750 GOTO 1790
    0x61537fab27b0 ---------A T 01760 LET Y(M(I))=5
    0x61537fab2820 ---------A   01770 GOTO 1790
    0x61537fab2be0 ---------A T 01780 LET Y(M(I))=6
    0x61537fab2d10 ---------A T 01790 NEXTI
    0x61537fab2f50 ---------A   01800 LET M=I
    0x61537fab3230 ---------A   01810 FOR I=1TO8
    0x61537fab3ad0 ---------A   01820 LET S(M(I))=S(M(I))+Y(M(I))
    0x61537fab3c00 ---------A   01830 NEXTI
    0x61537fab3e20 ---------A   01840 LET I=1
    0x61537fab41b0 ---------A   01850 FOR L=1 TO8
    0x61537fab45c0 ---------A   01860 FORI=1TO 8-L
    0x61537fab4cc0 ---------A   01870 IF S(M(I))<S(M(I+1))THEN 1910
    0x61537fab50a0 ---------A   01880 LET H=M(I)
    0x61537fab5590 ---------A   01890 LET M(I)=M(I+1)
    0x61537fab59a0 ---------A   01900 LET M(I+1)=H
    0x61537fab5ad0 ---------A T 01910 NEXT I
    0x61537fab5c10 ---------A   01920 NEXT L
    0x61537fab60b0 ---------A   01930 LET T=S(M(8))
    0x61537fab6390 ---------A   01940 FOR I=1 TO8
    0x61537fab6c30 ---------A   01950 LET B=S(M(I))-S(M(I-1))
    0x61537fab6e80 ---------A   01960 IF B=0 THEN 2010
    0x61537fab7180 ---------A   01970 FOR A=1 TO B
    0x61537fab7210 ---------A   01980 PRINT
    0x61537fab7620 ---------A   01990 IF S(M(I))>27 THEN2060
    0x61537fab7760 ---------A   02000 NEXT A
    0x61537fab79c0 ---------A T 02010 PRINT M(I);
    0x61537fab7af0 ---------A   02020 NEXT I
    0x61537fab7ef0 ---------A   02030 FOR A=1 TO 28-T
    0x61537fab7f70 ---------A   02040 PRINT
    0x61537fab80a0 ---------A   02050 NEXT A
    0x61537fab8210 ---------A T 02060 PRINT"XXXXFINISHXXXX"
    0x61537fab8470 ---------A   02070 IF T<28 THEN 1540
    0x61537fab85d0 ---------A   02080 PRINT"**************"
    0x61537fab8740 ---------A   02090 PRINT"WINNER IS ";
    0x61537fab8ad0 ---------A   02100 FOR I=8 TO 1STEP-1
    0x61537fab8eb0 ---------A   02110 LET F=M(I)
    0x61537fab8f30 ---------A   02120 PRINT
    0x61537fab9360 ---------A   02130 PRINT "HORSE NO." F, V$(F)
    0x61537fab9490 ---------A   02140 NEXT I
    0x61537fab97a0 ---------A   02150 FOR J=1 TO C
    0x61537fab9bc0 ---------A   02160 IF Q(J)<>M(8) THEN 2190
    0x61537fab9ef0 ---------A   02170 LET N=Q(J)
    0x61537faba760 ---------A   02180 PRINT W$(J);"WINS $";(R/D(N))*P(J)
    0x61537faba890 ---------A T 02190 NEXT J
    0x61537faba8f0 ---------A   02200 END
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
int    B_int;                                     // Basic: B 
int    C_int;                                     // Basic: C 
int    D_int_arr[10];                             // Basic: D 
int    F_int;                                     // Basic: F 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
int    M_int_arr[10];                             // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int_arr[10];                             // Basic: P 
int    Q_int_arr[10];                             // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int_arr[10];                             // Basic: S 
int    T_int;                                     // Basic: T 
char*  V_str_arr[10];                             // Basic: V$ 
char*  W_str_arr[10];                             // Basic: W$ 
char*  X_str;                                     // Basic: X$ 
int    Y_int_arr[10];                             // Basic: Y 
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
    // 01000 PRINT "BASIC LIBRARY--'HORSES'--18-JUL-70"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BASIC LIBRARY--'HORSES'--18-JUL-70");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 REM  *  *  *  *  *  *  *    MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *  *
    // 01020 REM
    // 01030 RANDOM
    RANDOMIZE();
    // 01040 PRINT"WELCOME TO DATALINE SYSTEMS RACETRACK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WELCOME TO DATALINE SYSTEMS RACETRACK");strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "DO YOU WANT DIRECTIONS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT DIRECTIONS");fputs(buf,fh); };
    // 01070 INPUT X$
    // Start of Basic INPUT statement 01070
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01070
    // 01080 IF X$="NO" THEN1140
    if(strcmp(X_str,"NO")==0)goto Lbl_01140;
    // 01090 PRINT"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "DURING THE RACE , A HORSE WILL BE SHOWN BY ITS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DURING THE RACE , A HORSE WILL BE SHOWN BY ITS");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT"NUMBER.THE HORSES RACE DOWN THE PAPER!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NUMBER.THE HORSES RACE DOWN THE PAPER!");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01140:
    // 01140 PRINT "HOW MANY WANT TO BET";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY WANT TO BET");fputs(buf,fh); };
    // 01150 INPUT C
    // Start of Basic INPUT statement 01150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160 PRINT "WHEN ? APPEARS,TYPE NAME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHEN ? APPEARS,TYPE NAME");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 FOR A=1 TO C
    for(A_int=1;A_int<=C_int;A_int++){
        // 01180 INPUT W$(A)
        // Start of Basic INPUT statement 01180
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtos(&W_str_arr[A_int],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01180
        // 01190 NEXT A
        int dummy_1190=0; // Ignore this line.
    }; // End-For(A_int)
    // 01200 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT"HORSE"," ","NUMBER","ODDS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HORSE");strcat(buf," ");strcat(buf,"NUMBER");strcat(buf,"ODDS");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 LET S(M(I))=0
    S_int_arr[M_int_arr[I_int]] = 0;
    // 01240 LET R=0
    R_int = 0;
    // 01250 FOR A=1 TO 8
    for(A_int=1;A_int<=8;A_int++){
        // 01260 LET D(A)=INT(10*RND+1)
        D_int_arr[A_int] = INT(10*RND()+1);
        // 01270 NEXT A
        int dummy_1270=0; // Ignore this line.
    }; // End-For(A_int)
    // 01280 FOR A=1TO 8
    for(A_int=1;A_int<=8;A_int++){
        // 01290 LET R=R+D(A)
        R_int = R_int+D_int_arr[A_int];
        // 01300 NEXT A
        int dummy_1300=0; // Ignore this line.
    }; // End-For(A_int)
    // 01310 LET V$(1)="JOE MAW"
    GLBpStr="JOE MAW";
    V_str_arr[1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01320 LET V$(2)="L.B.J."
    GLBpStr="L.B.J.";
    V_str_arr[2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01330 LET V$(3)="MR.WASHBURN"
    GLBpStr="MR.WASHBURN";
    V_str_arr[3] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01340 LET V$(4)="MISS KAREN"
    GLBpStr="MISS KAREN";
    V_str_arr[4] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01350 LET V$(5)="JOLLY"
    GLBpStr="JOLLY";
    V_str_arr[5] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01360 LET V$(6)="FOR Q."
    GLBpStr="FOR Q.";
    V_str_arr[6] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01370 LET V$(7)="JELLY DO NOT"
    GLBpStr="JELLY DO NOT";
    V_str_arr[7] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01380 LET V$(8)="ACID ROCK"
    GLBpStr="ACID ROCK";
    V_str_arr[8] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01390 FOR N=1 TO8
    for(N_int=1;N_int<=8;N_int++){
        // 01400 PRINT V$(N)," ",N,R/D(N);":1"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_STR(buf,V_str_arr[N_int]);strcat(buf," "); b2c_INT(buf,N_int); b2c_INT(buf,R_int/D_int_arr[N_int]);strcat(buf,":1");strcat(buf,"\n");fputs(buf,fh); };
        // 01410 NEXT N
        int dummy_1410=0; // Ignore this line.
    }; // End-For(N_int)
    // 01420 PRINT"--------------------------------------------------"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"--------------------------------------------------");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT "PLACE YOUR BETS...HORSE # THEN AMOUNT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLACE YOUR BETS...HORSE # THEN AMOUNT");strcat(buf,"\n");fputs(buf,fh); };
    // 01440 FOR J=1 TO C
    for(J_int=1;J_int<=C_int;J_int++){

  Lbl_01450:
        // 01450 PRINT W$(J);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_STR(buf,W_str_arr[J_int]);fputs(buf,fh); };
        // 01460 INPUT Q(J),P(J)
        // Start of Basic INPUT statement 01460
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&Q_int_arr[J_int],args,0)) ||
                    (err += b2c_strtoi(&P_int_arr[J_int],args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01460
        // 01470 IF P(J)<1 THEN 1490
        if(P_int_arr[J_int]<1)goto Lbl_01490;
        // 01480 IF P(J)<100000 THEN 1510
        if(P_int_arr[J_int]<100000)goto Lbl_01510;

  Lbl_01490:
        // 01490 PRINT"  YOU CAN'T DO THAT!"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  YOU CAN'T DO THAT!");strcat(buf,"\n");fputs(buf,fh); };
        // 01500 GOTO 1450
        goto Lbl_01450;

  Lbl_01510:
        // 01510 NEXT J
        int dummy_1510=0; // Ignore this line.
    }; // End-For(J_int)
    // 01520 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01530 PRINT"1 2 3 4 5 6 7 8"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1 2 3 4 5 6 7 8");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01540:
    // 01540 PRINT"XXXXSTARTXXXX";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"XXXXSTARTXXXX");fputs(buf,fh); };
    // 01550 FOR I=1 TON
    for(I_int=1;I_int<=N_int;I_int++){
        // 01560 LET M=I
        M_int_arr[0] = I_int;
        // 01570 LET M(I)=M
        M_int_arr[I_int] = M_int_arr[0];
        // 01580 LET Y(M(I))=INT(100*RND+1)
        Y_int_arr[M_int_arr[I_int]] = INT(100*RND()+1);
        // 01590 IF Y(M(I))<10 THEN1680
        if(Y_int_arr[M_int_arr[I_int]]<10)goto Lbl_01680;
        // 01600 LET S=INT(R/D(I)+.5)
        S_int_arr[0] = INT(R_int/D_int_arr[I_int]+0.5);
        // 01610 IF Y(M(I))<S+17 THEN 1700
        if(Y_int_arr[M_int_arr[I_int]]<S_int_arr[0]+17)goto Lbl_01700;
        // 01620 IF Y(M(I))<S+37 THEN 1720
        if(Y_int_arr[M_int_arr[I_int]]<S_int_arr[0]+37)goto Lbl_01720;
        // 01630 IF Y(M(I))<S+57 THEN1740
        if(Y_int_arr[M_int_arr[I_int]]<S_int_arr[0]+57)goto Lbl_01740;
        // 01640 IF Y(M(I))<77+S THEN1760
        if(Y_int_arr[M_int_arr[I_int]]<77+S_int_arr[0])goto Lbl_01760;
        // 01650 IF Y(M(I))<S+92 THEN1780
        if(Y_int_arr[M_int_arr[I_int]]<S_int_arr[0]+92)goto Lbl_01780;
        // 01660 LET Y(M(I))=7
        Y_int_arr[M_int_arr[I_int]] = 7;
        // 01670 GOTO 1790
        goto Lbl_01790;

  Lbl_01680:
        // 01680 LET Y(M(I))=1
        Y_int_arr[M_int_arr[I_int]] = 1;
        // 01690 GOTO 1790
        goto Lbl_01790;

  Lbl_01700:
        // 01700 LET Y(M(I))=2
        Y_int_arr[M_int_arr[I_int]] = 2;
        // 01710 GOTO 1790
        goto Lbl_01790;

  Lbl_01720:
        // 01720 LET Y(M(I))=3
        Y_int_arr[M_int_arr[I_int]] = 3;
        // 01730 GOTO 1790
        goto Lbl_01790;

  Lbl_01740:
        // 01740 LET Y(M(I))=4
        Y_int_arr[M_int_arr[I_int]] = 4;
        // 01750 GOTO 1790
        goto Lbl_01790;

  Lbl_01760:
        // 01760 LET Y(M(I))=5
        Y_int_arr[M_int_arr[I_int]] = 5;
        // 01770 GOTO 1790
        goto Lbl_01790;

  Lbl_01780:
        // 01780 LET Y(M(I))=6
        Y_int_arr[M_int_arr[I_int]] = 6;

  Lbl_01790:
        // 01790 NEXTI
        int dummy_1790=0; // Ignore this line.
    }; // End-For(I_int)
    // 01800 LET M=I
    M_int_arr[0] = I_int;
    // 01810 FOR I=1TO8
    for(I_int=1;I_int<=8;I_int++){
        // 01820 LET S(M(I))=S(M(I))+Y(M(I))
        S_int_arr[M_int_arr[I_int]] = S_int_arr[M_int_arr[I_int]]+Y_int_arr[M_int_arr[I_int]];
        // 01830 NEXTI
        int dummy_1830=0; // Ignore this line.
    }; // End-For(I_int)
    // 01840 LET I=1
    I_int = 1;
    // 01850 FOR L=1 TO8
    for(L_int=1;L_int<=8;L_int++){
        // 01860 FORI=1TO 8-L
        for(I_int=1;I_int<=8-L_int;I_int++){
            // 01870 IF S(M(I))<S(M(I+1))THEN 1910
            if(S_int_arr[M_int_arr[I_int]]<S_int_arr[M_int_arr[I_int+1]])goto Lbl_01910;
            // 01880 LET H=M(I)
            H_int = M_int_arr[I_int];
            // 01890 LET M(I)=M(I+1)
            M_int_arr[I_int] = M_int_arr[I_int+1];
            // 01900 LET M(I+1)=H
            M_int_arr[I_int+1] = H_int;

  Lbl_01910:
            // 01910 NEXT I
            int dummy_1910=0; // Ignore this line.
        }; // End-For(I_int)
        // 01920 NEXT L
        int dummy_1920=0; // Ignore this line.
    }; // End-For(L_int)
    // 01930 LET T=S(M(8))
    T_int = S_int_arr[M_int_arr[8]];
    // 01940 FOR I=1 TO8
    for(I_int=1;I_int<=8;I_int++){
        // 01950 LET B=S(M(I))-S(M(I-1))
        B_int = S_int_arr[M_int_arr[I_int]]-S_int_arr[M_int_arr[I_int-1]];
        // 01960 IF B=0 THEN 2010
        if(B_int==0)goto Lbl_02010;
        // 01970 FOR A=1 TO B
        for(A_int=1;A_int<=B_int;A_int++){
            // 01980 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 01990 IF S(M(I))>27 THEN2060
            if(S_int_arr[M_int_arr[I_int]]>27)goto Lbl_02060;
            // 02000 NEXT A
            int dummy_2000=0; // Ignore this line.
        }; // End-For(A_int)

  Lbl_02010:
        // 02010 PRINT M(I);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,M_int_arr[I_int]);fputs(buf,fh); };
        // 02020 NEXT I
        int dummy_2020=0; // Ignore this line.
    }; // End-For(I_int)
    // 02030 FOR A=1 TO 28-T
    for(A_int=1;A_int<=28-T_int;A_int++){
        // 02040 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 02050 NEXT A
        int dummy_2050=0; // Ignore this line.
    }; // End-For(A_int)

  Lbl_02060:
    // 02060 PRINT"XXXXFINISHXXXX"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"XXXXFINISHXXXX");strcat(buf,"\n");fputs(buf,fh); };
    // 02070 IF T<28 THEN 1540
    if(T_int<28)goto Lbl_01540;
    // 02080 PRINT"**************"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"**************");strcat(buf,"\n");fputs(buf,fh); };
    // 02090 PRINT"WINNER IS ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WINNER IS ");fputs(buf,fh); };
    // 02100 FOR I=8 TO 1STEP-1
    for(I_int=8;I_int>=1;I_int+=-1){
        // 02110 LET F=M(I)
        F_int = M_int_arr[I_int];
        // 02120 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 02130 PRINT "HORSE NO." F, V$(F)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HORSE NO."); b2c_INT(buf,F_int); b2c_STR(buf,V_str_arr[F_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 02140 NEXT I
        int dummy_2140=0; // Ignore this line.
    }; // End-For(I_int)
    // 02150 FOR J=1 TO C
    for(J_int=1;J_int<=C_int;J_int++){
        // 02160 IF Q(J)<>M(8) THEN 2190
        if(Q_int_arr[J_int]!=M_int_arr[8])goto Lbl_02190;
        // 02170 LET N=Q(J)
        N_int = Q_int_arr[J_int];
        // 02180 PRINT W$(J);"WINS $";(R/D(N))*P(J)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_STR(buf,W_str_arr[J_int]);strcat(buf,"WINS $"); b2c_INT(buf,(R_int/D_int_arr[N_int])*P_int_arr[J_int]);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02190:
        // 02190 NEXT J
        int dummy_2190=0; // Ignore this line.
    }; // End-For(J_int)
    // 02200 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
