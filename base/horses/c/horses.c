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
    0x57f1ac3b2cf0 ---------A   01010 PRINT "BASIC LIBRARY--'HORSES'--18-JUL-70"
    0x57f1ac3a15d0 ---------A   01020 REM  *  *  *  *  *  *  *    MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *  *
    0x57f1ac3a1610 ---------A   01030 REM
    0x57f1ac3b1ac0 ---------A   01040 RANDOM
    0x57f1ac3b2e70 ---------A   01050 PRINT"WELCOME TO DATALINE SYSTEMS RACETRACK"
    0x57f1ac3b2f30 ---------A   01060 PRINT
    0x57f1ac3b2ff0 ---------A   01070 PRINT "DO YOU WANT DIRECTIONS";
    0x57f1ac3b2520 ---------A   01080 INPUT X$
    0x57f1ac3b0fd0 ---------A   01090 IF X$="NO" THEN1150
    0x57f1ac3b13c0 ---------A   01100 PRINT"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU"
    0x57f1ac3b0b20 ---------A   01110 PRINT"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE."
    0x57f1ac3b30c0 ---------A   01120 PRINT "DURING THE RACE , A HORSE WILL BE SHOWN BY ITS"
    0x57f1ac3b15c0 ---------A   01130 PRINT"NUMBER.THE HORSES RACE DOWN THE PAPER!"
    0x57f1ac3b1610 ---------A   01140 PRINT
    0x57f1ac3b1780 ---------A T 01150 PRINT "HOW MANY WANT TO BET";
    0x57f1ac3b8940 ---------A   01160 INPUT C
    0x57f1ac3b8a60 ---------A   01170 PRINT "WHEN ? APPEARS,TYPE NAME"
    0x57f1ac3b8db0 ---------A   01180 FOR A=1 TO C
    0x57f1ac3b90b0 ---------A   01190 INPUT W$(A)
    0x57f1ac3b91f0 ---------A   01200 NEXT A
    0x57f1ac3b9250 ---------A   01210 PRINT
    0x57f1ac3b96a0 ---------A   01220 PRINT"HORSE"," ","NUMBER","ODDS"
    0x57f1ac3b9710 ---------A   01230 PRINT
    0x57f1ac3b9d20 ---------A   01240 LET S(M(I))=0
    0x57f1ac3b9ff0 ---------A   01250 LET R=0
    0x57f1ac3ba2a0 ---------A   01260 FOR A=1 TO 8
    0x57f1ac3ba960 ---------A   01270 LET D(A)=INT(10*RND+1)
    0x57f1ac3baa90 ---------A   01280 NEXT A
    0x57f1ac3bad70 ---------A   01290 FOR A=1TO 8
    0x57f1ac3bb1b0 ---------A   01300 LET R=R+D(A)
    0x57f1ac3bb2e0 ---------A   01310 NEXT A
    0x57f1ac3bb680 ---------A   01320 LET V$(1)="JOE MAW"
    0x57f1ac3bb950 ---------A   01330 LET V$(2)="L.B.J."
    0x57f1ac3bbe30 ---------A   01340 LET V$(3)="MR.WASHBURN"
    0x57f1ac3bc120 ---------A   01350 LET V$(4)="MISS KAREN"
    0x57f1ac3bc410 ---------A   01360 LET V$(5)="JOLLY"
    0x57f1ac3bc6e0 ---------A   01370 LET V$(6)="FOR Q."
    0x57f1ac3bc9b0 ---------A   01380 LET V$(7)="JELLY DO NOT"
    0x57f1ac3bcca0 ---------A   01390 LET V$(8)="ACID ROCK"
    0x57f1ac3bd040 ---------A   01400 FOR N=1 TO8
    0x57f1ac3bd880 ---------A   01410 PRINT V$(N)," ",N,R/D(N);":1"
    0x57f1ac3bd9b0 ---------A   01420 NEXT N
    0x57f1ac3bdb80 ---------A   01430 PRINT"--------------------------------------------------"
    0x57f1ac3bdce0 ---------A   01440 PRINT "PLACE YOUR BETS...HORSE # THEN AMOUNT"
    0x57f1ac3be090 ---------A   01450 FOR J=1 TO C
    0x57f1ac3be2f0 ---------A T 01460 PRINT W$(J);
    0x57f1ac3be870 ---------A   01470 INPUT Q(J),P(J)
    0x57f1ac3bebc0 ---------A   01480 IF P(J)<1 THEN 1500
    0x57f1ac3bef10 ---------A   01490 IF P(J)<100000 THEN 1520
    0x57f1ac3bf070 ---------A T 01500 PRINT"  YOU CAN'T DO THAT!"
    0x57f1ac3bf0e0 ---------A   01510 GOTO 1460
    0x57f1ac3bf200 ---------A T 01520 NEXT J
    0x57f1ac3bf290 ---------A   01530 PRINT
    0x57f1ac3bf3f0 ---------A   01540 PRINT"1 2 3 4 5 6 7 8"
    0x57f1ac3bf560 ---------A T 01550 PRINT"XXXXSTARTXXXX";
    0x57f1ac3bf850 ---------A   01560 FOR I=1 TON
    0x57f1ac3bfa90 ---------A   01570 LET M=I
    0x57f1ac3bfdb0 ---------A   01580 LET M(I)=M
    0x57f1ac3c0550 ---------A   01590 LET Y(M(I))=INT(100*RND+1)
    0x57f1ac3c0970 ---------A   01600 IF Y(M(I))<10 THEN1690
    0x57f1ac3c0fa0 ---------A   01610 LET S=INT(R/D(I)+.5)
    0x57f1ac3c14e0 ---------A   01620 IF Y(M(I))<S+17 THEN 1710
    0x57f1ac3c1a30 ---------A   01630 IF Y(M(I))<S+37 THEN 1730
    0x57f1ac3c1f80 ---------A   01640 IF Y(M(I))<S+57 THEN1750
    0x57f1ac3c24d0 ---------A   01650 IF Y(M(I))<77+S THEN1770
    0x57f1ac3c2e20 ---------A   01660 IF Y(M(I))<S+92 THEN1790
    0x57f1ac3c3200 ---------A   01670 LET Y(M(I))=7
    0x57f1ac3c3270 ---------A   01680 GOTO 1800
    0x57f1ac3c3630 ---------A T 01690 LET Y(M(I))=1
    0x57f1ac3c36a0 ---------A   01700 GOTO 1800
    0x57f1ac3c3a60 ---------A T 01710 LET Y(M(I))=2
    0x57f1ac3c3ad0 ---------A   01720 GOTO 1800
    0x57f1ac3c3e90 ---------A T 01730 LET Y(M(I))=3
    0x57f1ac3c3f00 ---------A   01740 GOTO 1800
    0x57f1ac3c42c0 ---------A T 01750 LET Y(M(I))=4
    0x57f1ac3c4330 ---------A   01760 GOTO 1800
    0x57f1ac3c46f0 ---------A T 01770 LET Y(M(I))=5
    0x57f1ac3c4760 ---------A   01780 GOTO 1800
    0x57f1ac3c4b20 ---------A T 01790 LET Y(M(I))=6
    0x57f1ac3c4c50 ---------A T 01800 NEXTI
    0x57f1ac3c4e90 ---------A   01810 LET M=I
    0x57f1ac3c5170 ---------A   01820 FOR I=1TO8
    0x57f1ac3c5a10 ---------A   01830 LET S(M(I))=S(M(I))+Y(M(I))
    0x57f1ac3c5b40 ---------A   01840 NEXTI
    0x57f1ac3c5d60 ---------A   01850 LET I=1
    0x57f1ac3c60f0 ---------A   01860 FOR L=1 TO8
    0x57f1ac3c6500 ---------A   01870 FORI=1TO 8-L
    0x57f1ac3c6c00 ---------A   01880 IF S(M(I))<S(M(I+1))THEN 1920
    0x57f1ac3c6fe0 ---------A   01890 LET H=M(I)
    0x57f1ac3c74d0 ---------A   01900 LET M(I)=M(I+1)
    0x57f1ac3c78e0 ---------A   01910 LET M(I+1)=H
    0x57f1ac3c7a10 ---------A T 01920 NEXT I
    0x57f1ac3c7b50 ---------A   01930 NEXT L
    0x57f1ac3c7ff0 ---------A   01940 LET T=S(M(8))
    0x57f1ac3c82d0 ---------A   01950 FOR I=1 TO8
    0x57f1ac3c8b70 ---------A   01960 LET B=S(M(I))-S(M(I-1))
    0x57f1ac3c8dc0 ---------A   01970 IF B=0 THEN 2020
    0x57f1ac3c90c0 ---------A   01980 FOR A=1 TO B
    0x57f1ac3c9150 ---------A   01990 PRINT
    0x57f1ac3c9560 ---------A   02000 IF S(M(I))>27 THEN2070
    0x57f1ac3c96a0 ---------A   02010 NEXT A
    0x57f1ac3c9900 ---------A T 02020 PRINT M(I);
    0x57f1ac3c9a30 ---------A   02030 NEXT I
    0x57f1ac3c9e30 ---------A   02040 FOR A=1 TO 28-T
    0x57f1ac3c9eb0 ---------A   02050 PRINT
    0x57f1ac3c9fe0 ---------A   02060 NEXT A
    0x57f1ac3ca150 ---------A T 02070 PRINT"XXXXFINISHXXXX"
    0x57f1ac3ca3b0 ---------A   02080 IF T<28 THEN 1550
    0x57f1ac3ca510 ---------A   02090 PRINT"**************"
    0x57f1ac3ca680 ---------A   02100 PRINT"WINNER IS ";
    0x57f1ac3caa10 ---------A   02110 FOR I=8 TO 1STEP-1
    0x57f1ac3cadf0 ---------A   02120 LET F=M(I)
    0x57f1ac3cae70 ---------A   02130 PRINT
    0x57f1ac3cb2a0 ---------A   02140 PRINT "HORSE NO." F, V$(F)
    0x57f1ac3cb3d0 ---------A   02150 NEXT I
    0x57f1ac3cb6e0 ---------A   02160 FOR J=1 TO C
    0x57f1ac3cbb00 ---------A   02170 IF Q(J)<>M(8) THEN 2200
    0x57f1ac3cbe30 ---------A   02180 LET N=Q(J)
    0x57f1ac3cc6a0 ---------A   02190 PRINT W$(J);"WINS $";(R/D(N))*P(J)
    0x57f1ac3cc7d0 ---------A T 02200 NEXT J
    0x57f1ac3cc830 ---------A   02210 END
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
   A) 0x57f1ac3b2cf0 (01010)   0x000000000000 (00000)   0x57f1ac3cc830 (02210)   0x57f1ac3cc830 (02210)   


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
    A                        Float       
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
    C                        Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D               Array    Float           {0,9} 
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Float       
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    L                        Float       
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M               Array    Float           {0,9} 
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Float       
    OCT$            Function String          args=1, float  
    P               Array    Float           {0,9} 
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q               Array    Float           {0,9} 
    R                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Float           {0,9} 
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
    V$              Array    String          {0,9} 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W$              Array    String          {0,9} 
    X$                       String      
    Y               Array    Float           {0,9} 

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
    0x57f1ac3b2cf0 ---------A   01000 PRINT "BASIC LIBRARY--'HORSES'--18-JUL-70"
    0x57f1ac3a15d0 ---------A   01010 REM  *  *  *  *  *  *  *    MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *  *
    0x57f1ac3a1610 ---------A   01020 REM
    0x57f1ac3b1ac0 ---------A   01030 RANDOM
    0x57f1ac3b2e70 ---------A   01040 PRINT"WELCOME TO DATALINE SYSTEMS RACETRACK"
    0x57f1ac3b2f30 ---------A   01050 PRINT
    0x57f1ac3b2ff0 ---------A   01060 PRINT "DO YOU WANT DIRECTIONS";
    0x57f1ac3b2520 ---------A   01070 INPUT X$
    0x57f1ac3b0fd0 ---------A   01080 IF X$="NO" THEN1140
    0x57f1ac3b13c0 ---------A   01090 PRINT"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU"
    0x57f1ac3b0b20 ---------A   01100 PRINT"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE."
    0x57f1ac3b30c0 ---------A   01110 PRINT "DURING THE RACE , A HORSE WILL BE SHOWN BY ITS"
    0x57f1ac3b15c0 ---------A   01120 PRINT"NUMBER.THE HORSES RACE DOWN THE PAPER!"
    0x57f1ac3b1610 ---------A   01130 PRINT
    0x57f1ac3b1780 ---------A T 01140 PRINT "HOW MANY WANT TO BET";
    0x57f1ac3b8940 ---------A   01150 INPUT C
    0x57f1ac3b8a60 ---------A   01160 PRINT "WHEN ? APPEARS,TYPE NAME"
    0x57f1ac3b8db0 ---------A   01170 FOR A=1 TO C
    0x57f1ac3b90b0 ---------A   01180 INPUT W$(A)
    0x57f1ac3b91f0 ---------A   01190 NEXT A
    0x57f1ac3b9250 ---------A   01200 PRINT
    0x57f1ac3b96a0 ---------A   01210 PRINT"HORSE"," ","NUMBER","ODDS"
    0x57f1ac3b9710 ---------A   01220 PRINT
    0x57f1ac3b9d20 ---------A   01230 LET S(M(I))=0
    0x57f1ac3b9ff0 ---------A   01240 LET R=0
    0x57f1ac3ba2a0 ---------A   01250 FOR A=1 TO 8
    0x57f1ac3ba960 ---------A   01260 LET D(A)=INT(10*RND+1)
    0x57f1ac3baa90 ---------A   01270 NEXT A
    0x57f1ac3bad70 ---------A   01280 FOR A=1TO 8
    0x57f1ac3bb1b0 ---------A   01290 LET R=R+D(A)
    0x57f1ac3bb2e0 ---------A   01300 NEXT A
    0x57f1ac3bb680 ---------A   01310 LET V$(1)="JOE MAW"
    0x57f1ac3bb950 ---------A   01320 LET V$(2)="L.B.J."
    0x57f1ac3bbe30 ---------A   01330 LET V$(3)="MR.WASHBURN"
    0x57f1ac3bc120 ---------A   01340 LET V$(4)="MISS KAREN"
    0x57f1ac3bc410 ---------A   01350 LET V$(5)="JOLLY"
    0x57f1ac3bc6e0 ---------A   01360 LET V$(6)="FOR Q."
    0x57f1ac3bc9b0 ---------A   01370 LET V$(7)="JELLY DO NOT"
    0x57f1ac3bcca0 ---------A   01380 LET V$(8)="ACID ROCK"
    0x57f1ac3bd040 ---------A   01390 FOR N=1 TO8
    0x57f1ac3bd880 ---------A   01400 PRINT V$(N)," ",N,R/D(N);":1"
    0x57f1ac3bd9b0 ---------A   01410 NEXT N
    0x57f1ac3bdb80 ---------A   01420 PRINT"--------------------------------------------------"
    0x57f1ac3bdce0 ---------A   01430 PRINT "PLACE YOUR BETS...HORSE # THEN AMOUNT"
    0x57f1ac3be090 ---------A   01440 FOR J=1 TO C
    0x57f1ac3be2f0 ---------A T 01450 PRINT W$(J);
    0x57f1ac3be870 ---------A   01460 INPUT Q(J),P(J)
    0x57f1ac3bebc0 ---------A   01470 IF P(J)<1 THEN 1490
    0x57f1ac3bef10 ---------A   01480 IF P(J)<100000 THEN 1510
    0x57f1ac3bf070 ---------A T 01490 PRINT"  YOU CAN'T DO THAT!"
    0x57f1ac3bf0e0 ---------A   01500 GOTO 1450
    0x57f1ac3bf200 ---------A T 01510 NEXT J
    0x57f1ac3bf290 ---------A   01520 PRINT
    0x57f1ac3bf3f0 ---------A   01530 PRINT"1 2 3 4 5 6 7 8"
    0x57f1ac3bf560 ---------A T 01540 PRINT"XXXXSTARTXXXX";
    0x57f1ac3bf850 ---------A   01550 FOR I=1 TON
    0x57f1ac3bfa90 ---------A   01560 LET M=I
    0x57f1ac3bfdb0 ---------A   01570 LET M(I)=M
    0x57f1ac3c0550 ---------A   01580 LET Y(M(I))=INT(100*RND+1)
    0x57f1ac3c0970 ---------A   01590 IF Y(M(I))<10 THEN1680
    0x57f1ac3c0fa0 ---------A   01600 LET S=INT(R/D(I)+.5)
    0x57f1ac3c14e0 ---------A   01610 IF Y(M(I))<S+17 THEN 1700
    0x57f1ac3c1a30 ---------A   01620 IF Y(M(I))<S+37 THEN 1720
    0x57f1ac3c1f80 ---------A   01630 IF Y(M(I))<S+57 THEN1740
    0x57f1ac3c24d0 ---------A   01640 IF Y(M(I))<77+S THEN1760
    0x57f1ac3c2e20 ---------A   01650 IF Y(M(I))<S+92 THEN1780
    0x57f1ac3c3200 ---------A   01660 LET Y(M(I))=7
    0x57f1ac3c3270 ---------A   01670 GOTO 1790
    0x57f1ac3c3630 ---------A T 01680 LET Y(M(I))=1
    0x57f1ac3c36a0 ---------A   01690 GOTO 1790
    0x57f1ac3c3a60 ---------A T 01700 LET Y(M(I))=2
    0x57f1ac3c3ad0 ---------A   01710 GOTO 1790
    0x57f1ac3c3e90 ---------A T 01720 LET Y(M(I))=3
    0x57f1ac3c3f00 ---------A   01730 GOTO 1790
    0x57f1ac3c42c0 ---------A T 01740 LET Y(M(I))=4
    0x57f1ac3c4330 ---------A   01750 GOTO 1790
    0x57f1ac3c46f0 ---------A T 01760 LET Y(M(I))=5
    0x57f1ac3c4760 ---------A   01770 GOTO 1790
    0x57f1ac3c4b20 ---------A T 01780 LET Y(M(I))=6
    0x57f1ac3c4c50 ---------A T 01790 NEXTI
    0x57f1ac3c4e90 ---------A   01800 LET M=I
    0x57f1ac3c5170 ---------A   01810 FOR I=1TO8
    0x57f1ac3c5a10 ---------A   01820 LET S(M(I))=S(M(I))+Y(M(I))
    0x57f1ac3c5b40 ---------A   01830 NEXTI
    0x57f1ac3c5d60 ---------A   01840 LET I=1
    0x57f1ac3c60f0 ---------A   01850 FOR L=1 TO8
    0x57f1ac3c6500 ---------A   01860 FORI=1TO 8-L
    0x57f1ac3c6c00 ---------A   01870 IF S(M(I))<S(M(I+1))THEN 1910
    0x57f1ac3c6fe0 ---------A   01880 LET H=M(I)
    0x57f1ac3c74d0 ---------A   01890 LET M(I)=M(I+1)
    0x57f1ac3c78e0 ---------A   01900 LET M(I+1)=H
    0x57f1ac3c7a10 ---------A T 01910 NEXT I
    0x57f1ac3c7b50 ---------A   01920 NEXT L
    0x57f1ac3c7ff0 ---------A   01930 LET T=S(M(8))
    0x57f1ac3c82d0 ---------A   01940 FOR I=1 TO8
    0x57f1ac3c8b70 ---------A   01950 LET B=S(M(I))-S(M(I-1))
    0x57f1ac3c8dc0 ---------A   01960 IF B=0 THEN 2010
    0x57f1ac3c90c0 ---------A   01970 FOR A=1 TO B
    0x57f1ac3c9150 ---------A   01980 PRINT
    0x57f1ac3c9560 ---------A   01990 IF S(M(I))>27 THEN2060
    0x57f1ac3c96a0 ---------A   02000 NEXT A
    0x57f1ac3c9900 ---------A T 02010 PRINT M(I);
    0x57f1ac3c9a30 ---------A   02020 NEXT I
    0x57f1ac3c9e30 ---------A   02030 FOR A=1 TO 28-T
    0x57f1ac3c9eb0 ---------A   02040 PRINT
    0x57f1ac3c9fe0 ---------A   02050 NEXT A
    0x57f1ac3ca150 ---------A T 02060 PRINT"XXXXFINISHXXXX"
    0x57f1ac3ca3b0 ---------A   02070 IF T<28 THEN 1540
    0x57f1ac3ca510 ---------A   02080 PRINT"**************"
    0x57f1ac3ca680 ---------A   02090 PRINT"WINNER IS ";
    0x57f1ac3caa10 ---------A   02100 FOR I=8 TO 1STEP-1
    0x57f1ac3cadf0 ---------A   02110 LET F=M(I)
    0x57f1ac3cae70 ---------A   02120 PRINT
    0x57f1ac3cb2a0 ---------A   02130 PRINT "HORSE NO." F, V$(F)
    0x57f1ac3cb3d0 ---------A   02140 NEXT I
    0x57f1ac3cb6e0 ---------A   02150 FOR J=1 TO C
    0x57f1ac3cbb00 ---------A   02160 IF Q(J)<>M(8) THEN 2190
    0x57f1ac3cbe30 ---------A   02170 LET N=Q(J)
    0x57f1ac3cc6a0 ---------A   02180 PRINT W$(J);"WINS $";(R/D(N))*P(J)
    0x57f1ac3cc7d0 ---------A T 02190 NEXT J
    0x57f1ac3cc830 ---------A   02200 END
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
float  B_flt;                                     // Basic: B 
float  C_flt;                                     // Basic: C 
float  D_flt_arr[10];                             // Basic: D 
float  F_flt;                                     // Basic: F 
float  H_flt;                                     // Basic: H 
float  I_flt;                                     // Basic: I 
float  J_flt;                                     // Basic: J 
float  L_flt;                                     // Basic: L 
float  M_flt_arr[10];                             // Basic: M 
float  N_flt;                                     // Basic: N 
float  P_flt_arr[10];                             // Basic: P 
float  Q_flt_arr[10];                             // Basic: Q 
float  R_flt;                                     // Basic: R 
float  S_flt_arr[10];                             // Basic: S 
float  T_flt;                                     // Basic: T 
char*  V_str_arr[10];                             // Basic: V$ 
char*  W_str_arr[10];                             // Basic: W$ 
char*  X_str;                                     // Basic: X$ 
float  Y_flt_arr[10];                             // Basic: Y 
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
    b2c_printf("Basic library--'horses'--18-jul-70\n");
    // 01010 REM  *  *  *  *  *  *  *    MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *  *
    // 01020 REM
    // 01030 RANDOM
    RANDOMIZE();
    // 01040 PRINT"WELCOME TO DATALINE SYSTEMS RACETRACK"
    b2c_printf("Welcome to dataline systems racetrack\n");
    // 01050 PRINT
    b2c_printf("\n");
    // 01060 PRINT "DO YOU WANT DIRECTIONS";
    b2c_printf("Do you want directions");
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
    if(strcmp(X_str,"No")==0)goto Lbl_01140;
    // 01090 PRINT"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU"
    b2c_printf("Up to 10 may play.A table of odds will be printed. You\n");
    // 01100 PRINT"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE."
    b2c_printf("May bet any + amount under 100000 on one horse.\n");
    // 01110 PRINT "DURING THE RACE , A HORSE WILL BE SHOWN BY ITS"
    b2c_printf("During the race , a horse will be shown by its\n");
    // 01120 PRINT"NUMBER.THE HORSES RACE DOWN THE PAPER!"
    b2c_printf("Number.The horses race down the paper!\n");
    // 01130 PRINT
    b2c_printf("\n");

  Lbl_01140:
    // 01140 PRINT "HOW MANY WANT TO BET";
    b2c_printf("How many want to bet");
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
                (err += b2c_strtof(&C_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160 PRINT "WHEN ? APPEARS,TYPE NAME"
    b2c_printf("When ? Appears,type name\n");
    // 01170 FOR A=1 TO C
    for(A_flt=1;A_flt<=C_flt;A_flt++){
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
                    (err += b2c_strtos(&W_str_arr[(int)A_flt],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01180
        // 01190 NEXT A
        int dummy_1190=0; // Ignore this line.
    }; // End-For(A_flt)
    // 01200 PRINT
    b2c_printf("\n");
    // 01210 PRINT"HORSE"," ","NUMBER","ODDS"
    b2c_printf("Horse NumberOdds\n");
    // 01220 PRINT
    b2c_printf("\n");
    // 01230 LET S(M(I))=0
    S_flt_arr[(int)M_flt_arr[(int)I_flt]] = 0;
    // 01240 LET R=0
    R_flt = 0;
    // 01250 FOR A=1 TO 8
    for(A_flt=1;A_flt<=8;A_flt++){
        // 01260 LET D(A)=INT(10*RND+1)
        D_flt_arr[(int)A_flt] = INT(10*RND()+1);
        // 01270 NEXT A
        int dummy_1270=0; // Ignore this line.
    }; // End-For(A_flt)
    // 01280 FOR A=1TO 8
    for(A_flt=1;A_flt<=8;A_flt++){
        // 01290 LET R=R+D(A)
        R_flt = R_flt+D_flt_arr[(int)A_flt];
        // 01300 NEXT A
        int dummy_1300=0; // Ignore this line.
    }; // End-For(A_flt)
    // 01310 LET V$(1)="JOE MAW"
    GLBpStr="Joe maw";
    V_str_arr[1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01320 LET V$(2)="L.B.J."
    GLBpStr="L.B.J.";
    V_str_arr[2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01330 LET V$(3)="MR.WASHBURN"
    GLBpStr="Mr.Washburn";
    V_str_arr[3] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01340 LET V$(4)="MISS KAREN"
    GLBpStr="Miss karen";
    V_str_arr[4] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01350 LET V$(5)="JOLLY"
    GLBpStr="Jolly";
    V_str_arr[5] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01360 LET V$(6)="FOR Q."
    GLBpStr="For q.";
    V_str_arr[6] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01370 LET V$(7)="JELLY DO NOT"
    GLBpStr="Jelly do not";
    V_str_arr[7] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01380 LET V$(8)="ACID ROCK"
    GLBpStr="Acid rock";
    V_str_arr[8] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01390 FOR N=1 TO8
    for(N_flt=1;N_flt<=8;N_flt++){
        // 01400 PRINT V$(N)," ",N,R/D(N);":1"
        b2c_printf("%sâ<¬ñW   %.2f  _flt/D_flt_arr[(int)N_flt]_flt/D_flt_arr[(int)N_flt]:1\n",V_str_arr[(int)N_flt],N_flt);
        // 01410 NEXT N
        int dummy_1410=0; // Ignore this line.
    }; // End-For(N_flt)
    // 01420 PRINT"--------------------------------------------------"
    b2c_printf("--------------------------------------------------\n");
    // 01430 PRINT "PLACE YOUR BETS...HORSE # THEN AMOUNT"
    b2c_printf("Place your bets...Horse # then amount\n");
    // 01440 FOR J=1 TO C
    for(J_flt=1;J_flt<=C_flt;J_flt++){

  Lbl_01450:
        // 01450 PRINT W$(J);
        b2c_printf("%säXþ\n",W_str_arr[(int)J_flt]);
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
                    (err += b2c_strtof(&Q_flt_arr[(int)J_flt],args,0)) ||
                    (err += b2c_strtof(&P_flt_arr[(int)J_flt],args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01460
        // 01470 IF P(J)<1 THEN 1490
        if(P_flt_arr[(int)J_flt]<1)goto Lbl_01490;
        // 01480 IF P(J)<100000 THEN 1510
        if(P_flt_arr[(int)J_flt]<100000)goto Lbl_01510;

  Lbl_01490:
        // 01490 PRINT"  YOU CAN'T DO THAT!"
        b2c_printf("  you can't do that!\n");
        // 01500 GOTO 1450
        goto Lbl_01450;

  Lbl_01510:
        // 01510 NEXT J
        int dummy_1510=0; // Ignore this line.
    }; // End-For(J_flt)
    // 01520 PRINT
    b2c_printf("\n");
    // 01530 PRINT"1 2 3 4 5 6 7 8"
    b2c_printf("1 2 3 4 5 6 7 8\n");

  Lbl_01540:
    // 01540 PRINT"XXXXSTARTXXXX";
    b2c_printf("Xxxxstartxxxx");
    // 01550 FOR I=1 TON
    for(I_flt=1;I_flt<=N_flt;I_flt++){
        // 01560 LET M=I
        M_flt_arr[0] = I_flt;
        // 01570 LET M(I)=M
        M_flt_arr[(int)I_flt] = M_flt_arr[0];
        // 01580 LET Y(M(I))=INT(100*RND+1)
        Y_flt_arr[(int)M_flt_arr[(int)I_flt]] = INT(100*RND()+1);
        // 01590 IF Y(M(I))<10 THEN1680
        if(Y_flt_arr[(int)M_flt_arr[(int)I_flt]]<10)goto Lbl_01680;
        // 01600 LET S=INT(R/D(I)+.5)
        S_flt_arr[0] = INT(R_flt/D_flt_arr[(int)I_flt]+0.5);
        // 01610 IF Y(M(I))<S+17 THEN 1700
        if(Y_flt_arr[(int)M_flt_arr[(int)I_flt]]<S_flt_arr[0]+17)goto Lbl_01700;
        // 01620 IF Y(M(I))<S+37 THEN 1720
        if(Y_flt_arr[(int)M_flt_arr[(int)I_flt]]<S_flt_arr[0]+37)goto Lbl_01720;
        // 01630 IF Y(M(I))<S+57 THEN1740
        if(Y_flt_arr[(int)M_flt_arr[(int)I_flt]]<S_flt_arr[0]+57)goto Lbl_01740;
        // 01640 IF Y(M(I))<77+S THEN1760
        if(Y_flt_arr[(int)M_flt_arr[(int)I_flt]]<77+S_flt_arr[0])goto Lbl_01760;
        // 01650 IF Y(M(I))<S+92 THEN1780
        if(Y_flt_arr[(int)M_flt_arr[(int)I_flt]]<S_flt_arr[0]+92)goto Lbl_01780;
        // 01660 LET Y(M(I))=7
        Y_flt_arr[(int)M_flt_arr[(int)I_flt]] = 7;
        // 01670 GOTO 1790
        goto Lbl_01790;

  Lbl_01680:
        // 01680 LET Y(M(I))=1
        Y_flt_arr[(int)M_flt_arr[(int)I_flt]] = 1;
        // 01690 GOTO 1790
        goto Lbl_01790;

  Lbl_01700:
        // 01700 LET Y(M(I))=2
        Y_flt_arr[(int)M_flt_arr[(int)I_flt]] = 2;
        // 01710 GOTO 1790
        goto Lbl_01790;

  Lbl_01720:
        // 01720 LET Y(M(I))=3
        Y_flt_arr[(int)M_flt_arr[(int)I_flt]] = 3;
        // 01730 GOTO 1790
        goto Lbl_01790;

  Lbl_01740:
        // 01740 LET Y(M(I))=4
        Y_flt_arr[(int)M_flt_arr[(int)I_flt]] = 4;
        // 01750 GOTO 1790
        goto Lbl_01790;

  Lbl_01760:
        // 01760 LET Y(M(I))=5
        Y_flt_arr[(int)M_flt_arr[(int)I_flt]] = 5;
        // 01770 GOTO 1790
        goto Lbl_01790;

  Lbl_01780:
        // 01780 LET Y(M(I))=6
        Y_flt_arr[(int)M_flt_arr[(int)I_flt]] = 6;

  Lbl_01790:
        // 01790 NEXTI
        int dummy_1790=0; // Ignore this line.
    }; // End-For(I_flt)
    // 01800 LET M=I
    M_flt_arr[0] = I_flt;
    // 01810 FOR I=1TO8
    for(I_flt=1;I_flt<=8;I_flt++){
        // 01820 LET S(M(I))=S(M(I))+Y(M(I))
        S_flt_arr[(int)M_flt_arr[(int)I_flt]] = S_flt_arr[(int)M_flt_arr[(int)I_flt]]+Y_flt_arr[(int)M_flt_arr[(int)I_flt]];
        // 01830 NEXTI
        int dummy_1830=0; // Ignore this line.
    }; // End-For(I_flt)
    // 01840 LET I=1
    I_flt = 1;
    // 01850 FOR L=1 TO8
    for(L_flt=1;L_flt<=8;L_flt++){
        // 01860 FORI=1TO 8-L
        for(I_flt=1;I_flt<=8-L_flt;I_flt++){
            // 01870 IF S(M(I))<S(M(I+1))THEN 1910
            if(S_flt_arr[(int)M_flt_arr[(int)I_flt]]<S_flt_arr[(int)M_flt_arr[(int)I_flt+1]])goto Lbl_01910;
            // 01880 LET H=M(I)
            H_flt = M_flt_arr[(int)I_flt];
            // 01890 LET M(I)=M(I+1)
            M_flt_arr[(int)I_flt] = M_flt_arr[(int)I_flt+1];
            // 01900 LET M(I+1)=H
            M_flt_arr[(int)I_flt+1] = H_flt;

  Lbl_01910:
            // 01910 NEXT I
            int dummy_1910=0; // Ignore this line.
        }; // End-For(I_flt)
        // 01920 NEXT L
        int dummy_1920=0; // Ignore this line.
    }; // End-For(L_flt)
    // 01930 LET T=S(M(8))
    T_flt = S_flt_arr[(int)M_flt_arr[8]];
    // 01940 FOR I=1 TO8
    for(I_flt=1;I_flt<=8;I_flt++){
        // 01950 LET B=S(M(I))-S(M(I-1))
        B_flt = S_flt_arr[(int)M_flt_arr[(int)I_flt]]-S_flt_arr[(int)M_flt_arr[(int)I_flt-1]];
        // 01960 IF B=0 THEN 2010
        if(B_flt==0)goto Lbl_02010;
        // 01970 FOR A=1 TO B
        for(A_flt=1;A_flt<=B_flt;A_flt++){
            // 01980 PRINT
            b2c_printf("");
            // 01990 IF S(M(I))>27 THEN2060
            if(S_flt_arr[(int)M_flt_arr[(int)I_flt]]>27)goto Lbl_02060;
            // 02000 NEXT A
            int dummy_2000=0; // Ignore this line.
        }; // End-For(A_flt)

  Lbl_02010:
        // 02010 PRINT M(I);
        b2c_printf(" %.2f äXþ\n",M_flt_arr[(int)I_flt]);
        // 02020 NEXT I
        int dummy_2020=0; // Ignore this line.
    }; // End-For(I_flt)
    // 02030 FOR A=1 TO 28-T
    for(A_flt=1;A_flt<=28-T_flt;A_flt++){
        // 02040 PRINT
        b2c_printf("\n");
        // 02050 NEXT A
        int dummy_2050=0; // Ignore this line.
    }; // End-For(A_flt)

  Lbl_02060:
    // 02060 PRINT"XXXXFINISHXXXX"
    b2c_printf("Xxxxfinishxxxx\n");
    // 02070 IF T<28 THEN 1540
    if(T_flt<28)goto Lbl_01540;
    // 02080 PRINT"**************"
    b2c_printf("**************\n");
    // 02090 PRINT"WINNER IS ";
    b2c_printf("Winner is ");
    // 02100 FOR I=8 TO 1STEP-1
    for(I_flt=8;I_flt>=1;I_flt+=-1){
        // 02110 LET F=M(I)
        F_flt = M_flt_arr[(int)I_flt];
        // 02120 PRINT
        b2c_printf("");
        // 02130 PRINT "HORSE NO." F, V$(F)
        b2c_printf("Horse no. %.2f Horse no.%s\n",F_flt,V_str_arr[(int)F_flt]);
        // 02140 NEXT I
        int dummy_2140=0; // Ignore this line.
    }; // End-For(I_flt)
    // 02150 FOR J=1 TO C
    for(J_flt=1;J_flt<=C_flt;J_flt++){
        // 02160 IF Q(J)<>M(8) THEN 2190
        if(Q_flt_arr[(int)J_flt]!=M_flt_arr[8])goto Lbl_02190;
        // 02170 LET N=Q(J)
        N_flt = Q_flt_arr[(int)J_flt];
        // 02180 PRINT W$(J);"WINS $";(R/D(N))*P(J)
        b2c_printf("%së<¬ñWWins $Wins $R_flt/D_flt_arr[(int)N_flt])*P_flt_arr[(int)J_flt]\n",W_str_arr[(int)J_flt]);

  Lbl_02190:
        // 02190 NEXT J
        int dummy_2190=0; // Ignore this line.
    }; // End-For(J_flt)
    // 02200 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
