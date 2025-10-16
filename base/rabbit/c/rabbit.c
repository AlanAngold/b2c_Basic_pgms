/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/rabbit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56bdf3d7acf0 ---------A   01000 PRINT"DO YOU WANT INSTRUCTIONS :";
    0x56bdf3d78610 ---------A   01010 INPUT A$
    0x56bdf3d785b0 ---------A   01020 IF MID$(A$,1,1)="N" THEN 1220
    0x56bdf3d78b20 ---------A   01030 IF MID$(A$,1,1)="n" THEN 1220
    0x56bdf3d79ac0 ---------A   01040 PRINT
    0x56bdf3d7af30 ---------A   01050 PRINT
    0x56bdf3d7b0e0 ---------A   01060 PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    0x56bdf3d7b180 ---------A   01070 PRINT"to come within a certian distance of the computer controlled"
    0x56bdf3d79740 ---------A   01080 PRINT"rabbit, which also moves.  "
    0x56bdf3d80880 ---------A   01090 PRINT"    The way you do this is to hop around (the rabbit hops too) "
    0x56bdf3d80a30 ---------A   01100 PRINT"such that your path crosses the rabbit's path at the same time"
    0x56bdf3d80b90 ---------A   01110 PRINT"Or in other words you come close enough to grab the little "
    0x56bdf3d80d00 ---------A   01120 PRINT"booger.  "
    0x56bdf3d80ec0 ---------A   01130 PRINT"    Oh by the way your arms are about 20 units long.  The number"
    0x56bdf3d81080 ---------A   01140 PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    0x56bdf3d81240 ---------A   01150 PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    0x56bdf3d81400 ---------A   01160 PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    0x56bdf3d815c0 ---------A   01170 PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    0x56bdf3d81770 ---------A   01180 PRINT"so keep that in mind when jumping.  The computer will prompt"
    0x56bdf3d81930 ---------A   01190 PRINT"you for the direction you want to jump next.  Remember "
    0x56bdf3d81a90 ---------A   01200 PRINT"you and the rabbit don't necessarily jump at the same velocity."
    0x56bdf3d81ba0 ---------A   01210 PRINT"   GOOD LUCK"
    0x56bdf3d81c30 ---------A T 01220 PRINT
    0x56bdf3d81d80 ---------A   01230 PRINT"                   TYPE 'QUIT' TO STOP."
    0x56bdf3d81dd0 ---------A   01240 PRINT
    0x56bdf3d81e70 ---------A   01250 RANDOMIZE
    0x56bdf3d81f10 ---------A   01260 REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    0x56bdf3d82170 ---------A   01270 LET T = 400
    0x56bdf3d821c0 ---------A   01280 REM
    0x56bdf3d82280 ---------A   01290 REM -- INITIALIZE VELOCITIES AND POSITIONS --
    0x56bdf3d82300 ---------A   01300 REM
    0x56bdf3d82b90 ---------A   01310 LET V1 = INT(RND(0)*10+0.5)*10+50
    0x56bdf3d834a0 ---------A   01320 LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    0x56bdf3d84160 ---------A T 01330 LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x56bdf3d84c00 ---------A   01340 LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x56bdf3d84e60 ---------A   01350 IF Y1 = 0  THEN 1330
    0x56bdf3d850c0 ---------A   01360 IF X1 = 0 THEN 1330
    0x56bdf3d853a0 ---------A   01370 LET X2 = 0
    0x56bdf3d85680 ---------A   01380 LET Y2 = 0
    0x56bdf3d857e0 ---------A   01390 PRINT"SPEEDS (UNITS/HOP):"
    0x56bdf3d85c30 ---------A   01400 PRINT"RABBIT -";V1,"YOU -";V2
    0x56bdf3d85ca0 ---------A   01410 PRINT
    0x56bdf3d85d10 ---------A   01420 PRINT
    0x56bdf3d85d90 ---------A   01430 PRINT
    0x56bdf3d86670 ---------A   01440 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x56bdf3d86a40 ---------A   01450 LET P1 = 3.14159/180
    0x56bdf3d86d10 ---------A   01460 LET H1 = 1
    0x56bdf3d86d80 ---------A   01470 REM
    0x56bdf3d86e10 ---------A   01480 REM -- PRINT OUT --
    0x56bdf3d86e90 ---------A   01490 REM
    0x56bdf3d87440 ---------A T 01500 LET D1 = INT(RND(0)*359)
    0x56bdf3d875b0 ---------A   01510 PRINT"HOP#: ";
    0x56bdf3d87960 ---------A   01520 LET Z = H
    0x56bdf3d879e0 ---------A   01530 GOSUB 2330
    0x56bdf3d87b60 ---------A   01540 PRINT"    DISTANCE TO RABBIT: ";
    0x56bdf3d88450 ---------A   01550 LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    0x56bdf3d884d0 ---------A   01560 GOSUB 2330
    0x56bdf3d88640 ---------A   01570 PRINT"    CLOSEST APPROACH: ";
    0x56bdf3d88950 ---------A   01580 LET Z = SQR(C)
    0x56bdf3d889c0 ---------A   01590 GOSUB 2330
    0x56bdf3d88a40 ---------A   01600 PRINT
    0x56bdf3d88bc0 ---------A   01610 PRINT"RABBIT   ---    POSITION:  (";
    0x56bdf3d88df0 ---------A   01620 LET Z = X1
    0x56bdf3d88e60 ---------A   01630 GOSUB 2280
    0x56bdf3d88fc0 ---------A   01640 PRINT",";
    0x56bdf3d89600 ---------A   01650 LET Z = Y1
    0x56bdf3d89680 ---------A   01660 GOSUB 2280
    0x56bdf3d897f0 ---------A   01670 PRINT")     AND DIRECTION:  ";
    0x56bdf3d89a20 ---------A   01680 LET Z = D1
    0x56bdf3d89a90 ---------A   01690 GOSUB 2330
    0x56bdf3d89b10 ---------A   01700 PRINT
    0x56bdf3d89c90 ---------A   01710 PRINT"YOU      ---    POSITION:  (";
    0x56bdf3d89ec0 ---------A   01720 LET Z = X2
    0x56bdf3d89f30 ---------A   01730 GOSUB 2280
    0x56bdf3d8a090 ---------A   01740 PRINT",";
    0x56bdf3d8a2c0 ---------A   01750 LET Z = Y2
    0x56bdf3d8a340 ---------A   01760 GOSUB 2280
    0x56bdf3d8a4a0 ---------A   01770 PRINT")     AND DIRECTION: ";
    0x56bdf3d8a530 ---------A   01780 GOTO 1800
    0x56bdf3d8a6a0 ---------A T 01790 PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    0x56bdf3d8a7f0 ---------A T 01800 INPUT A$
    0x56bdf3d8aae0 ---------A   01810 DIM A(15)
    0x56bdf3d8b5c0 ---------A   01820 LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    0x56bdf3d8b7d0 ---------A   01830 CHANGE A$ TO A
    0x56bdf3d8bb90 ---------A   01840 FOR I = 1 TO 15
    0x56bdf3d8bee0 ---------A   01850     IF A(I) = 0 THEN 1910
    0x56bdf3d8c230 ---------A   01859     IF A(I) =113 THEN 2240
    0x56bdf3d8c580 ---------A   01860     IF A(I) = 81 THEN 2240
    0x56bdf3d8c9d0 ---------A   01870     IF A(I)-48 < 0 THEN 1790
    0x56bdf3d8ce10 ---------A   01880     IF A(I)-48 > 9 THEN 1790
    0x56bdf3d8cf50 ---------A   01890 NEXT I
    0x56bdf3d8cfd0 ---------A   01900 GO TO 1790
    0x56bdf3d8d480 ---------A T 01910 FOR J = 1 TO I-1
    0x56bdf3d8de80 ---------A   01920     D2=D2+(A(I-J)-48)*10^(J-1)
    0x56bdf3d8dfb0 ---------A   01930 NEXT J
    0x56bdf3d8e230 ---------A   01940 IF D2 < 0 THEN 1790
    0x56bdf3d8e490 ---------A   01950 IF D2 >= 360 THEN 1790
    0x56bdf3d8e510 ---------A   01960 PRINT
    0x56bdf3d8e580 ---------A   01970 PRINT
    0x56bdf3d8e5f0 ---------A   01980 REM
    0x56bdf3d8e6b0 ---------A   01990 REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    0x56bdf3d8e730 ---------A   02000 REM
    0x56bdf3d8ee70 ---------A   02010 LET X3 = V1*COS(D1*P1)/100
    0x56bdf3d8f590 ---------A   02020 LET Y3 = V1*SIN(D1*P1)/100
    0x56bdf3d8fcb0 ---------A   02030 LET X4 = V2*COS(D2*P1)/100
    0x56bdf3d903d0 ---------A   02040 LET Y4 = V2*SIN(D2*P1)/100
    0x56bdf3d90be0 ---------A   02050 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x56bdf3d90eb0 ---------A   02060 FOR I = 1 TO 100
    0x56bdf3d91210 ---------A   02070     LET X1 = X1+X3
    0x56bdf3d91560 ---------A   02080     LET Y1 = Y1+Y3
    0x56bdf3d918b0 ---------A   02090     LET X2 = X2+X4
    0x56bdf3d91c20 ---------A   02100     LET Y2 = Y2+Y4
    0x56bdf3d92480 ---------A   02110     IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2130
    0x56bdf3d92ca0 ---------A   02120     C = (X2-X1)^2+(Y2-Y1)^2
    0x56bdf3d92dd0 ---------A T 02130 NEXT I
    0x56bdf3d93110 ---------A   02140 LET H = H+1
    0x56bdf3d93380 ---------A   02150 IF C > T THEN 1500
    0x56bdf3d93400 ---------A   02160 PRINT
    0x56bdf3d93470 ---------A   02170 PRINT
    0x56bdf3d935c0 ---------A   02180 PRINT"**********"
    0x56bdf3d93710 ---------A   02190 PRINT"* GOT YA *"
    0x56bdf3d93860 ---------A   02200 PRINT"**********"
    0x56bdf3d938d0 ---------A   02210 PRINT
    0x56bdf3d93940 ---------A   02220 PRINT
    0x56bdf3d939b0 ---------A   02230 PRINT
    0x56bdf3d93a00 ---------A T 02240 STOP
    0x56bdf3d93a80 ---------B   02250 REM
    0x56bdf3d93b50 ---------B   02260 REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    0x56bdf3d93bd0 ---------B   02270 REM
    0x56bdf3d94640 ---------B G 02280 IF Z < 0 THEN 2310
    0x56bdf3d947c0 ---------B   02290 PRINT "+";
    0x56bdf3d94830 ---------B   02300 GOTO 2330
    0x56bdf3d94990 ---------B T 02310 PRINT"-";
    0x56bdf3d94bc0 ---------B   02320 LET Z = -Z
    0x56bdf3d94fe0 ---------B B 02330 LET Z = INT(Z+0.5)
    0x56bdf3d952d0 ---------B   02340 LET S$ = "0123456789"
    0x56bdf3d955b0 ---------B   02350 FOR I = 1 TO 4
    0x56bdf3d95d00 ---------B   02360     LET W = INT(Z/10^(4-I))
    0x56bdf3d96200 ---------B   02370     PRINT MID$(S$,W+1,1);
    0x56bdf3d968b0 ---------B   02380     LET Z = Z-W*10^(4-I)
    0x56bdf3d969e0 ---------B   02390 NEXT I
    0x56bdf3d96a40 ---------B   02400 RETURN
    0x56bdf3d96aa0 ---------A   02410 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01220      01020T, 01030T
     01330      01350T, 01360T
     01500      02150T
     01790      01870T, 01880T, 01900T, 01940T, 01950T
     01800      01780T
     01910      01850T
     02130      02110T
     02240      01859T, 01860T
     02280      01630G, 01660G, 01730G, 01760G
     02310      02280T
     02330      01530G, 01560G, 01590G, 01690G, 02300T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x56bdf3d7acf0 (01000)   0x000000000000 (00000)   0x56bdf3d96aa0 (02410)   0x56bdf3d96aa0 (02410)   
   B) 0x56bdf3d93a80 (02250)   0x56bdf3d94640 (02280)   0x56bdf3d96a40 (02400)   0x56bdf3d96a40 (02400)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02440 - 10000    7570 

 */



/*
 *  Symbol Table Listing for 'basic/rabbit.bas'
 *
    A               Array    Float           {0,14} 
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D1                       Float       
    D2                       Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Float       
    H1                       Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
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
    OCT$            Function String          args=1, float  
    P1                       Float       
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S$                       String      
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
    V1                       Float       
    V2                       Float       
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Float       
    X1                       Float       
    X2                       Float       
    X3                       Float       
    X4                       Float       
    Y1                       Float       
    Y2                       Float       
    Y3                       Float       
    Y4                       Float       
    Z                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/rabbit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56bdf3d7acf0 ---------A   01000 PRINT"DO YOU WANT INSTRUCTIONS :";
    0x56bdf3d78610 ---------A   01010 INPUT A$
    0x56bdf3d785b0 ---------A   01020 IF MID$(A$,1,1)="N" THEN 1220
    0x56bdf3d78b20 ---------A   01030 IF MID$(A$,1,1)="n" THEN 1220
    0x56bdf3d79ac0 ---------A   01040 PRINT
    0x56bdf3d7af30 ---------A   01050 PRINT
    0x56bdf3d7b0e0 ---------A   01060 PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    0x56bdf3d7b180 ---------A   01070 PRINT"to come within a certian distance of the computer controlled"
    0x56bdf3d79740 ---------A   01080 PRINT"rabbit, which also moves.  "
    0x56bdf3d80880 ---------A   01090 PRINT"    The way you do this is to hop around (the rabbit hops too) "
    0x56bdf3d80a30 ---------A   01100 PRINT"such that your path crosses the rabbit's path at the same time"
    0x56bdf3d80b90 ---------A   01110 PRINT"Or in other words you come close enough to grab the little "
    0x56bdf3d80d00 ---------A   01120 PRINT"booger.  "
    0x56bdf3d80ec0 ---------A   01130 PRINT"    Oh by the way your arms are about 20 units long.  The number"
    0x56bdf3d81080 ---------A   01140 PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    0x56bdf3d81240 ---------A   01150 PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    0x56bdf3d81400 ---------A   01160 PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    0x56bdf3d815c0 ---------A   01170 PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    0x56bdf3d81770 ---------A   01180 PRINT"so keep that in mind when jumping.  The computer will prompt"
    0x56bdf3d81930 ---------A   01190 PRINT"you for the direction you want to jump next.  Remember "
    0x56bdf3d81a90 ---------A   01200 PRINT"you and the rabbit don't necessarily jump at the same velocity."
    0x56bdf3d81ba0 ---------A   01210 PRINT"   GOOD LUCK"
    0x56bdf3d81c30 ---------A T 01220 PRINT
    0x56bdf3d81d80 ---------A   01230 PRINT"                   TYPE 'QUIT' TO STOP."
    0x56bdf3d81dd0 ---------A   01240 PRINT
    0x56bdf3d81e70 ---------A   01250 RANDOMIZE
    0x56bdf3d81f10 ---------A   01260 REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    0x56bdf3d82170 ---------A   01270 LET T = 400
    0x56bdf3d821c0 ---------A   01280 REM
    0x56bdf3d82280 ---------A   01290 REM -- INITIALIZE VELOCITIES AND POSITIONS --
    0x56bdf3d82300 ---------A   01300 REM
    0x56bdf3d82b90 ---------A   01310 LET V1 = INT(RND(0)*10+0.5)*10+50
    0x56bdf3d834a0 ---------A   01320 LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    0x56bdf3d84160 ---------A T 01330 LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x56bdf3d84c00 ---------A   01340 LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x56bdf3d84e60 ---------A   01350 IF Y1 = 0  THEN 1330
    0x56bdf3d850c0 ---------A   01360 IF X1 = 0 THEN 1330
    0x56bdf3d853a0 ---------A   01370 LET X2 = 0
    0x56bdf3d85680 ---------A   01380 LET Y2 = 0
    0x56bdf3d857e0 ---------A   01390 PRINT"SPEEDS (UNITS/HOP):"
    0x56bdf3d85c30 ---------A   01400 PRINT"RABBIT -";V1,"YOU -";V2
    0x56bdf3d85ca0 ---------A   01410 PRINT
    0x56bdf3d85d10 ---------A   01420 PRINT
    0x56bdf3d85d90 ---------A   01430 PRINT
    0x56bdf3d86670 ---------A   01440 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x56bdf3d86a40 ---------A   01450 LET P1 = 3.14159/180
    0x56bdf3d86d10 ---------A   01460 LET H1 = 1
    0x56bdf3d86d80 ---------A   01470 REM
    0x56bdf3d86e10 ---------A   01480 REM -- PRINT OUT --
    0x56bdf3d86e90 ---------A   01490 REM
    0x56bdf3d87440 ---------A T 01500 LET D1 = INT(RND(0)*359)
    0x56bdf3d875b0 ---------A   01510 PRINT"HOP#: ";
    0x56bdf3d87960 ---------A   01520 LET Z = H
    0x56bdf3d879e0 ---------A   01530 GOSUB 2350
    0x56bdf3d87b60 ---------A   01540 PRINT"    DISTANCE TO RABBIT: ";
    0x56bdf3d88450 ---------A   01550 LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    0x56bdf3d884d0 ---------A   01560 GOSUB 2350
    0x56bdf3d88640 ---------A   01570 PRINT"    CLOSEST APPROACH: ";
    0x56bdf3d88950 ---------A   01580 LET Z = SQR(C)
    0x56bdf3d889c0 ---------A   01590 GOSUB 2350
    0x56bdf3d88a40 ---------A   01600 PRINT
    0x56bdf3d88bc0 ---------A   01610 PRINT"RABBIT   ---    POSITION:  (";
    0x56bdf3d88df0 ---------A   01620 LET Z = X1
    0x56bdf3d88e60 ---------A   01630 GOSUB 2300
    0x56bdf3d88fc0 ---------A   01640 PRINT",";
    0x56bdf3d89600 ---------A   01650 LET Z = Y1
    0x56bdf3d89680 ---------A   01660 GOSUB 2300
    0x56bdf3d897f0 ---------A   01670 PRINT")     AND DIRECTION:  ";
    0x56bdf3d89a20 ---------A   01680 LET Z = D1
    0x56bdf3d89a90 ---------A   01690 GOSUB 2350
    0x56bdf3d89b10 ---------A   01700 PRINT
    0x56bdf3d89c90 ---------A   01710 PRINT"YOU      ---    POSITION:  (";
    0x56bdf3d89ec0 ---------A   01720 LET Z = X2
    0x56bdf3d89f30 ---------A   01730 GOSUB 2300
    0x56bdf3d8a090 ---------A   01740 PRINT",";
    0x56bdf3d8a2c0 ---------A   01750 LET Z = Y2
    0x56bdf3d8a340 ---------A   01760 GOSUB 2300
    0x56bdf3d8a4a0 ---------A   01770 PRINT")     AND DIRECTION: ";
    0x56bdf3d8a530 ---------A   01780 GOTO 1800
    0x56bdf3d8a6a0 ---------A T 01790 PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    0x56bdf3d8a7f0 ---------A T 01800 INPUT A$
    0x56bdf3d8aae0 ---------A   01810 DIM A(15)
    0x56bdf3d8b5c0 ---------A   01820 LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    0x56bdf3d8b7d0 ---------A   01830 CHANGE A$ TO A
    0x56bdf3d8bb90 ---------A   01840 FOR I = 1 TO 15
    0x56bdf3d8bee0 ---------A   01850     IF A(I) = 0 THEN 1920
    0x56bdf3d8c230 ---------A   01860     IF A(I) =113 THEN 2250
    0x56bdf3d8c580 ---------A   01870     IF A(I) = 81 THEN 2250
    0x56bdf3d8c9d0 ---------A   01880     IF A(I)-48 < 0 THEN 1790
    0x56bdf3d8ce10 ---------A   01890     IF A(I)-48 > 9 THEN 1790
    0x56bdf3d8cf50 ---------A   01900 NEXT I
    0x56bdf3d8cfd0 ---------A   01910 GO TO 1790
    0x56bdf3d8d480 ---------A T 01920 FOR J = 1 TO I-1
    0x56bdf3d8de80 ---------A   01930     D2=D2+(A(I-J)-48)*10^(J-1)
    0x56bdf3d8dfb0 ---------A   01940 NEXT J
    0x56bdf3d8e230 ---------A   01950 IF D2 < 0 THEN 1790
    0x56bdf3d8e490 ---------A   01960 IF D2 >= 360 THEN 1790
    0x56bdf3d8e510 ---------A   01970 PRINT
    0x56bdf3d8e580 ---------A   01980 PRINT
    0x56bdf3d8e5f0 ---------A   01990 REM
    0x56bdf3d8e6b0 ---------A   02000 REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    0x56bdf3d8e730 ---------A   02010 REM
    0x56bdf3d8ee70 ---------A   02020 LET X3 = V1*COS(D1*P1)/100
    0x56bdf3d8f590 ---------A   02030 LET Y3 = V1*SIN(D1*P1)/100
    0x56bdf3d8fcb0 ---------A   02040 LET X4 = V2*COS(D2*P1)/100
    0x56bdf3d903d0 ---------A   02050 LET Y4 = V2*SIN(D2*P1)/100
    0x56bdf3d90be0 ---------A   02060 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x56bdf3d90eb0 ---------A   02070 FOR I = 1 TO 100
    0x56bdf3d91210 ---------A   02080     LET X1 = X1+X3
    0x56bdf3d91560 ---------A   02090     LET Y1 = Y1+Y3
    0x56bdf3d918b0 ---------A   02100     LET X2 = X2+X4
    0x56bdf3d91c20 ---------A   02110     LET Y2 = Y2+Y4
    0x56bdf3d92480 ---------A   02120     IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2140
    0x56bdf3d92ca0 ---------A   02130     C = (X2-X1)^2+(Y2-Y1)^2
    0x56bdf3d92dd0 ---------A T 02140 NEXT I
    0x56bdf3d93110 ---------A   02150 LET H = H+1
    0x56bdf3d93380 ---------A   02160 IF C > T THEN 1500
    0x56bdf3d93400 ---------A   02170 PRINT
    0x56bdf3d93470 ---------A   02180 PRINT
    0x56bdf3d935c0 ---------A   02190 PRINT"**********"
    0x56bdf3d93710 ---------A   02200 PRINT"* GOT YA *"
    0x56bdf3d93860 ---------A   02210 PRINT"**********"
    0x56bdf3d938d0 ---------A   02220 PRINT
    0x56bdf3d93940 ---------A   02230 PRINT
    0x56bdf3d939b0 ---------A   02240 PRINT
    0x56bdf3d93a00 ---------A T 02250 STOP
    0x56bdf3d96aa0 ---------A   02260 END
    0x56bdf3d93a80 ---------B   02270 REM
    0x56bdf3d93b50 ---------B   02280 REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    0x56bdf3d93bd0 ---------B   02290 REM
    0x56bdf3d94640 ---------B G 02300 IF Z < 0 THEN 2330
    0x56bdf3d947c0 ---------B   02310 PRINT "+";
    0x56bdf3d94830 ---------B   02320 GOTO 2350
    0x56bdf3d94990 ---------B T 02330 PRINT"-";
    0x56bdf3d94bc0 ---------B   02340 LET Z = -Z
    0x56bdf3d94fe0 ---------B B 02350 LET Z = INT(Z+0.5)
    0x56bdf3d952d0 ---------B   02360 LET S$ = "0123456789"
    0x56bdf3d955b0 ---------B   02370 FOR I = 1 TO 4
    0x56bdf3d95d00 ---------B   02380     LET W = INT(Z/10^(4-I))
    0x56bdf3d96200 ---------B   02390     PRINT MID$(S$,W+1,1);
    0x56bdf3d968b0 ---------B   02400     LET Z = Z-W*10^(4-I)
    0x56bdf3d969e0 ---------B   02410 NEXT I
    0x56bdf3d9b270 ---------B   02420 GOTO 02430
    0x56bdf3d9b2b0 ---------B T 02430 RETURN
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
float  A_flt_arr[15];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
float  C_flt;                                     // Basic: C 
float  D1_flt;                                    // Basic: D1 
float  D2_flt;                                    // Basic: D2 
float  H_flt;                                     // Basic: H 
float  H1_flt;                                    // Basic: H1 
float  I_flt;                                     // Basic: I 
float  J_flt;                                     // Basic: J 
float  P1_flt;                                    // Basic: P1 
char*  S_str;                                     // Basic: S$ 
float  T_flt;                                     // Basic: T 
float  V1_flt;                                    // Basic: V1 
float  V2_flt;                                    // Basic: V2 
float  W_flt;                                     // Basic: W 
float  X1_flt;                                    // Basic: X1 
float  X2_flt;                                    // Basic: X2 
float  X3_flt;                                    // Basic: X3 
float  X4_flt;                                    // Basic: X4 
float  Y1_flt;                                    // Basic: Y1 
float  Y2_flt;                                    // Basic: Y2 
float  Y3_flt;                                    // Basic: Y3 
float  Y4_flt;                                    // Basic: Y4 
float  Z_flt;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02300();

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
    // 02270 REM
    // 02280 REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    // 02290 REM

void Routine_02300(){
    // 02300 IF Z < 0 THEN 2330
    if(Z_flt<0)goto Lbl_02330;
    // 02310 PRINT "+";
    b2c_printf("+");
    // 02320 GOTO 2350
    goto Lbl_02350;

  Lbl_02330:
    // 02330 PRINT"-";
    b2c_printf("-");
    // 02340 LET Z = -Z
    Z_flt = Z_flt;

void Routine_02350(){

  Lbl_02350:
    // 02350 LET Z = INT(Z+0.5)
    Z_flt = INT(Z_flt+0.5);
    // 02360 LET S$ = "0123456789"
    GLBpStr="0123456789";
    S_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02370 FOR I = 1 TO 4
    for(I_flt=1;I_flt<=4;I_flt++){
        // 02380     LET W = INT(Z/10^(4-I))
        W_flt = INT(Z_flt/FPower(10,(4-I_flt)));
        // 02390     PRINT MID$(S$,W+1,1);
        b2c_printf("");
        // 02400     LET Z = Z-W*10^(4-I)
        Z_flt = Z_flt-W_flt*FPower(10,(4-I_flt));
        // 02410 NEXT I
        int dummy_2410=0; // Ignore this line.
    }; // End-For(I_flt)
    // 02420 GOTO 02430
    goto Lbl_02430;

  Lbl_02430:
    // 02430 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT"DO YOU WANT INSTRUCTIONS :";
    b2c_printf("Do you want instructions :");
    // 01010 INPUT A$
    // Start of Basic INPUT statement 01010
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
    }; // End of Basic INPUT statement 01010
    // 01020 IF MID$(A$,1,1)="N" THEN 1220
    if(MID$(A_str,1,1)=='N')goto Lbl_01220;
    // 01030 IF MID$(A$,1,1)="n" THEN 1220
    if(MID$(A_str,1,1)=='N')goto Lbl_01220;
    // 01040 PRINT
    b2c_printf("");
    // 01050 PRINT
    b2c_printf("");
    // 01060 PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    b2c_printf("    this is the game of rabbit.  The object of rabbit is\n");
    // 01070 PRINT"to come within a certian distance of the computer controlled"
    b2c_printf("To come within a certian distance of the computer controlled\n");
    // 01080 PRINT"rabbit, which also moves.  "
    b2c_printf("Rabbit, which also moves.  \n");
    // 01090 PRINT"    The way you do this is to hop around (the rabbit hops too) "
    b2c_printf("    the way you do this is to hop around (the rabbit hops too) \n");
    // 01100 PRINT"such that your path crosses the rabbit's path at the same time"
    b2c_printf("Such that your path crosses the rabbit's path at the same time\n");
    // 01110 PRINT"Or in other words you come close enough to grab the little "
    b2c_printf("Or in other words you come close enough to grab the little \n");
    // 01120 PRINT"booger.  "
    b2c_printf("Booger.  \n");
    // 01130 PRINT"    Oh by the way your arms are about 20 units long.  The number"
    b2c_printf("    oh by the way your arms are about 20 units long.  The number\n");
    // 01140 PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    b2c_printf("'closest approach' is the closest distance you and your bouncy\n");
    // 01150 PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    b2c_printf("Friend came to each other during the last hop.  The 'distance\n");
    // 01160 PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    b2c_printf("To rabbit' is the distance you are from the rabbit now.  The\n");
    // 01170 PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    b2c_printf("Rabbits 'direction' is the direction he is just about to hop,\n");
    // 01180 PRINT"so keep that in mind when jumping.  The computer will prompt"
    b2c_printf("So keep that in mind when jumping.  The computer will prompt\n");
    // 01190 PRINT"you for the direction you want to jump next.  Remember "
    b2c_printf("You for the direction you want to jump next.  Remember \n");
    // 01200 PRINT"you and the rabbit don't necessarily jump at the same velocity."
    b2c_printf("You and the rabbit don't necessarily jump at the same velocity.\n");
    // 01210 PRINT"   GOOD LUCK"
    b2c_printf("   good luck\n");

  Lbl_01220:
    // 01220 PRINT
    b2c_printf("\n");
    // 01230 PRINT"                   TYPE 'QUIT' TO STOP."
    b2c_printf("                   type 'quit' to stop.\n");
    // 01240 PRINT
    b2c_printf("\n");
    // 01250 RANDOMIZE
    RANDOMIZE();
    // 01260 REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    // 01270 LET T = 400
    T_flt = 400;
    // 01280 REM
    // 01290 REM -- INITIALIZE VELOCITIES AND POSITIONS --
    // 01300 REM
    // 01310 LET V1 = INT(RND(0)*10+0.5)*10+50
    V1_flt = INT(RND(0)*10+0.5)*10+50;
    // 01320 LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    V2_flt = (INT(RND(0)*2+0.5)+1)*V1_flt;

  Lbl_01330:
    // 01330 LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    X1_flt = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5);
    // 01340 LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    Y1_flt = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5);
    // 01350 IF Y1 = 0  THEN 1330
    if(Y1_flt==0)goto Lbl_01330;
    // 01360 IF X1 = 0 THEN 1330
    if(X1_flt==0)goto Lbl_01330;
    // 01370 LET X2 = 0
    X2_flt = 0;
    // 01380 LET Y2 = 0
    Y2_flt = 0;
    // 01390 PRINT"SPEEDS (UNITS/HOP):"
    b2c_printf("Speeds (units/hop):\n");
    // 01400 PRINT"RABBIT -";V1,"YOU -";V2
    b2c_printf("Rabbit - %.2f Rabbit -You -You - %.2f \n",V1_flt,V2_flt);
    // 01410 PRINT
    b2c_printf("\n");
    // 01420 PRINT
    b2c_printf("\n");
    // 01430 PRINT
    b2c_printf("\n");
    // 01440 LET C = (X2-X1)^2+(Y2-Y1)^2
    C_flt = FPower((X2_flt-X1_flt),2)+FPower((Y2_flt-Y1_flt),2);
    // 01450 LET P1 = 3.14159/180
    P1_flt = 3.14/180;
    // 01460 LET H1 = 1
    H1_flt = 1;
    // 01470 REM
    // 01480 REM -- PRINT OUT --
    // 01490 REM

  Lbl_01500:
    // 01500 LET D1 = INT(RND(0)*359)
    D1_flt = INT(RND(0)*359);
    // 01510 PRINT"HOP#: ";
    b2c_printf("Hop#: ");
    // 01520 LET Z = H
    Z_flt = H_flt;
    // 01530 GOSUB 2350
    Routine_02350();
    // 01540 PRINT"    DISTANCE TO RABBIT: ";
    b2c_printf("    distance to rabbit: ");
    // 01550 LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    Z_flt = SQR(FPower((X2_flt-X1_flt),2)+FPower((Y2_flt-Y1_flt),2));
    // 01560 GOSUB 2350
    Routine_02350();
    // 01570 PRINT"    CLOSEST APPROACH: ";
    b2c_printf("    closest approach: ");
    // 01580 LET Z = SQR(C)
    Z_flt = SQR(C_flt);
    // 01590 GOSUB 2350
    Routine_02350();
    // 01600 PRINT
    b2c_printf("\n");
    // 01610 PRINT"RABBIT   ---    POSITION:  (";
    b2c_printf("Rabbit   ---    position:  (");
    // 01620 LET Z = X1
    Z_flt = X1_flt;
    // 01630 GOSUB 2300
    Routine_02300();
    // 01640 PRINT",";
    b2c_printf(",");
    // 01650 LET Z = Y1
    Z_flt = Y1_flt;
    // 01660 GOSUB 2300
    Routine_02300();
    // 01670 PRINT")     AND DIRECTION:  ";
    b2c_printf(")     and direction:  ");
    // 01680 LET Z = D1
    Z_flt = D1_flt;
    // 01690 GOSUB 2350
    Routine_02350();
    // 01700 PRINT
    b2c_printf("\n");
    // 01710 PRINT"YOU      ---    POSITION:  (";
    b2c_printf("You      ---    position:  (");
    // 01720 LET Z = X2
    Z_flt = X2_flt;
    // 01730 GOSUB 2300
    Routine_02300();
    // 01740 PRINT",";
    b2c_printf(",");
    // 01750 LET Z = Y2
    Z_flt = Y2_flt;
    // 01760 GOSUB 2300
    Routine_02300();
    // 01770 PRINT")     AND DIRECTION: ";
    b2c_printf(")     and direction: ");
    // 01780 GOTO 1800
    goto Lbl_01800;

  Lbl_01790:
    // 01790 PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    b2c_printf("Direction to hop (0-359 degrees): ");

  Lbl_01800:
    // 01800 INPUT A$
    // Start of Basic INPUT statement 01800
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
    }; // End of Basic INPUT statement 01800
    // 01810 DIM A(15)
    // 01820 LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    D2_flt = A_flt_arr[5] = A_flt_arr[4] = A_flt_arr[3] = A_flt_arr[2] = A_flt_arr[1] = 0;
    // 01830 CHANGE A$ TO A
    if(A_str!=nullptr){
        for(int i=1;(i<=(int)strlen(A_str))&&(i<=14);i++){
            A_flt_arr[0][i]=(int)A_str[i-1];
        }
    }
    // 01840 FOR I = 1 TO 15
    for(I_flt=1;I_flt<=15;I_flt++){
        // 01850     IF A(I) = 0 THEN 1920
        if(A_flt_arr[(int)I_flt]==0)goto Lbl_01920;
        // 01860     IF A(I) =113 THEN 2250
        if(A_flt_arr[(int)I_flt]==113)goto Lbl_02250;
        // 01870     IF A(I) = 81 THEN 2250
        if(A_flt_arr[(int)I_flt]==81)goto Lbl_02250;
        // 01880     IF A(I)-48 < 0 THEN 1790
        if(A_flt_arr[(int)I_flt]-48<0)goto Lbl_01790;
        // 01890     IF A(I)-48 > 9 THEN 1790
        if(A_flt_arr[(int)I_flt]-48>9)goto Lbl_01790;
        // 01900 NEXT I
        int dummy_1900=0; // Ignore this line.
    }; // End-For(I_flt)
    // 01910 GO TO 1790
    goto Lbl_01790;

  Lbl_01920:
    // 01920 FOR J = 1 TO I-1
    for(J_flt=1;J_flt<=I_flt-1;J_flt++){
        // 01930     D2=D2+(A(I-J)-48)*10^(J-1)
        D2_flt = D2_flt+(A_flt_arr[(int)I_flt-J_flt]-48)*FPower(10,(J_flt-1));
        // 01940 NEXT J
        int dummy_1940=0; // Ignore this line.
    }; // End-For(J_flt)
    // 01950 IF D2 < 0 THEN 1790
    if(D2_flt<0)goto Lbl_01790;
    // 01960 IF D2 >= 360 THEN 1790
    if(D2_flt>=360)goto Lbl_01790;
    // 01970 PRINT
    b2c_printf("");
    // 01980 PRINT
    b2c_printf("");
    // 01990 REM
    // 02000 REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    // 02010 REM
    // 02020 LET X3 = V1*COS(D1*P1)/100
    X3_flt = V1_flt*COS(D1_flt*P1_flt)/100;
    // 02030 LET Y3 = V1*SIN(D1*P1)/100
    Y3_flt = V1_flt*SIN(D1_flt*P1_flt)/100;
    // 02040 LET X4 = V2*COS(D2*P1)/100
    X4_flt = V2_flt*COS(D2_flt*P1_flt)/100;
    // 02050 LET Y4 = V2*SIN(D2*P1)/100
    Y4_flt = V2_flt*SIN(D2_flt*P1_flt)/100;
    // 02060 LET C = (X2-X1)^2+(Y2-Y1)^2
    C_flt = FPower((X2_flt-X1_flt),2)+FPower((Y2_flt-Y1_flt),2);
    // 02070 FOR I = 1 TO 100
    for(I_flt=1;I_flt<=100;I_flt++){
        // 02080     LET X1 = X1+X3
        X1_flt = X1_flt+X3_flt;
        // 02090     LET Y1 = Y1+Y3
        Y1_flt = Y1_flt+Y3_flt;
        // 02100     LET X2 = X2+X4
        X2_flt = X2_flt+X4_flt;
        // 02110     LET Y2 = Y2+Y4
        Y2_flt = Y2_flt+Y4_flt;
        // 02120     IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2140
        if(C_flt<FPower((X2_flt-X1_flt),2)+FPower((Y2_flt-Y1_flt),2))goto Lbl_02140;
        // 02130     C = (X2-X1)^2+(Y2-Y1)^2
        C_flt = FPower((X2_flt-X1_flt),2)+FPower((Y2_flt-Y1_flt),2);

  Lbl_02140:
        // 02140 NEXT I
        int dummy_2140=0; // Ignore this line.
    }; // End-For(I_flt)
    // 02150 LET H = H+1
    H_flt = H_flt+1;
    // 02160 IF C > T THEN 1500
    if(C_flt>T_flt)goto Lbl_01500;
    // 02170 PRINT
    b2c_printf("");
    // 02180 PRINT
    b2c_printf("");
    // 02190 PRINT"**********"
    b2c_printf("**********\n");
    // 02200 PRINT"* GOT YA *"
    b2c_printf("* got ya *\n");
    // 02210 PRINT"**********"
    b2c_printf("**********\n");
    // 02220 PRINT
    b2c_printf("\n");
    // 02230 PRINT
    b2c_printf("\n");
    // 02240 PRINT
    b2c_printf("\n");

  Lbl_02250:
    // 02250 STOP
    exit(1);
    // 02260 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
