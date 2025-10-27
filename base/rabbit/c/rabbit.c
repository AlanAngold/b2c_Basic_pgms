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
    0x5baf50c8adb0 ---------A   01000 PRINT"DO YOU WANT INSTRUCTIONS :";
    0x5baf50c886d0 ---------A   01010 INPUT A$
    0x5baf50c88670 ---------A   01020 IF MID$(A$,1,1)="N" THEN 1220
    0x5baf50c88be0 ---------A   01030 IF MID$(A$,1,1)="n" THEN 1220
    0x5baf50c89b80 ---------A   01040 PRINT
    0x5baf50c8aff0 ---------A   01050 PRINT
    0x5baf50c8b1a0 ---------A   01060 PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    0x5baf50c8b240 ---------A   01070 PRINT"to come within a certian distance of the computer controlled"
    0x5baf50c89800 ---------A   01080 PRINT"rabbit, which also moves.  "
    0x5baf50c90940 ---------A   01090 PRINT"    The way you do this is to hop around (the rabbit hops too) "
    0x5baf50c90af0 ---------A   01100 PRINT"such that your path crosses the rabbit's path at the same time"
    0x5baf50c90c50 ---------A   01110 PRINT"Or in other words you come close enough to grab the little "
    0x5baf50c90dc0 ---------A   01120 PRINT"booger.  "
    0x5baf50c90f80 ---------A   01130 PRINT"    Oh by the way your arms are about 20 units long.  The number"
    0x5baf50c91140 ---------A   01140 PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    0x5baf50c91300 ---------A   01150 PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    0x5baf50c914c0 ---------A   01160 PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    0x5baf50c91680 ---------A   01170 PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    0x5baf50c91830 ---------A   01180 PRINT"so keep that in mind when jumping.  The computer will prompt"
    0x5baf50c919f0 ---------A   01190 PRINT"you for the direction you want to jump next.  Remember "
    0x5baf50c91b50 ---------A   01200 PRINT"you and the rabbit don't necessarily jump at the same velocity."
    0x5baf50c91c60 ---------A   01210 PRINT"   GOOD LUCK"
    0x5baf50c91cf0 ---------A T 01220 PRINT
    0x5baf50c91e40 ---------A   01230 PRINT"                   TYPE 'QUIT' TO STOP."
    0x5baf50c91e90 ---------A   01240 PRINT
    0x5baf50c91f30 ---------A   01250 RANDOMIZE
    0x5baf50c91fd0 ---------A   01260 REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    0x5baf50c92230 ---------A   01270 LET T = 400
    0x5baf50c92280 ---------A   01280 REM
    0x5baf50c92340 ---------A   01290 REM -- INITIALIZE VELOCITIES AND POSITIONS --
    0x5baf50c923c0 ---------A   01300 REM
    0x5baf50c92c50 ---------A   01310 LET V1 = INT(RND(0)*10+0.5)*10+50
    0x5baf50c93560 ---------A   01320 LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    0x5baf50c94220 ---------A T 01330 LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5baf50c94cc0 ---------A   01340 LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5baf50c94f20 ---------A   01350 IF Y1 = 0  THEN 1330
    0x5baf50c95180 ---------A   01360 IF X1 = 0 THEN 1330
    0x5baf50c95460 ---------A   01370 LET X2 = 0
    0x5baf50c95740 ---------A   01380 LET Y2 = 0
    0x5baf50c958a0 ---------A   01390 PRINT"SPEEDS (UNITS/HOP):"
    0x5baf50c95cf0 ---------A   01400 PRINT"RABBIT -";V1,"YOU -";V2
    0x5baf50c95d60 ---------A   01410 PRINT
    0x5baf50c95dd0 ---------A   01420 PRINT
    0x5baf50c95e50 ---------A   01430 PRINT
    0x5baf50c96730 ---------A   01440 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5baf50c96b00 ---------A   01450 LET P1 = 3.14159/180
    0x5baf50c96dd0 ---------A   01460 LET H1 = 1
    0x5baf50c96e40 ---------A   01470 REM
    0x5baf50c96ed0 ---------A   01480 REM -- PRINT OUT --
    0x5baf50c96f50 ---------A   01490 REM
    0x5baf50c97500 ---------A T 01500 LET D1 = INT(RND(0)*359)
    0x5baf50c97670 ---------A   01510 PRINT"HOP#: ";
    0x5baf50c97a20 ---------A   01520 LET Z = H
    0x5baf50c97aa0 ---------A   01530 GOSUB 2330
    0x5baf50c97c20 ---------A   01540 PRINT"    DISTANCE TO RABBIT: ";
    0x5baf50c98510 ---------A   01550 LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    0x5baf50c98590 ---------A   01560 GOSUB 2330
    0x5baf50c98700 ---------A   01570 PRINT"    CLOSEST APPROACH: ";
    0x5baf50c98a10 ---------A   01580 LET Z = SQR(C)
    0x5baf50c98a80 ---------A   01590 GOSUB 2330
    0x5baf50c98b00 ---------A   01600 PRINT
    0x5baf50c98c80 ---------A   01610 PRINT"RABBIT   ---    POSITION:  (";
    0x5baf50c98eb0 ---------A   01620 LET Z = X1
    0x5baf50c98f20 ---------A   01630 GOSUB 2280
    0x5baf50c99080 ---------A   01640 PRINT",";
    0x5baf50c996c0 ---------A   01650 LET Z = Y1
    0x5baf50c99740 ---------A   01660 GOSUB 2280
    0x5baf50c998b0 ---------A   01670 PRINT")     AND DIRECTION:  ";
    0x5baf50c99ae0 ---------A   01680 LET Z = D1
    0x5baf50c99b50 ---------A   01690 GOSUB 2330
    0x5baf50c99bd0 ---------A   01700 PRINT
    0x5baf50c99d50 ---------A   01710 PRINT"YOU      ---    POSITION:  (";
    0x5baf50c99f80 ---------A   01720 LET Z = X2
    0x5baf50c99ff0 ---------A   01730 GOSUB 2280
    0x5baf50c9a150 ---------A   01740 PRINT",";
    0x5baf50c9a380 ---------A   01750 LET Z = Y2
    0x5baf50c9a400 ---------A   01760 GOSUB 2280
    0x5baf50c9a560 ---------A   01770 PRINT")     AND DIRECTION: ";
    0x5baf50c9a5f0 ---------A   01780 GOTO 1800
    0x5baf50c9a760 ---------A T 01790 PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    0x5baf50c9a8b0 ---------A T 01800 INPUT A$
    0x5baf50c9aba0 ---------A   01810 DIM A(15)
    0x5baf50c9b680 ---------A   01820 LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    0x5baf50c9b890 ---------A   01830 CHANGE A$ TO A
    0x5baf50c9bc50 ---------A   01840 FOR I = 1 TO 15
    0x5baf50c9bfa0 ---------A   01850     IF A(I) = 0 THEN 1910
    0x5baf50c9c2f0 ---------A   01859     IF A(I) =113 THEN 2240
    0x5baf50c9c640 ---------A   01860     IF A(I) = 81 THEN 2240
    0x5baf50c9ca90 ---------A   01870     IF A(I)-48 < 0 THEN 1790
    0x5baf50c9ced0 ---------A   01880     IF A(I)-48 > 9 THEN 1790
    0x5baf50c9d010 ---------A   01890 NEXT I
    0x5baf50c9d090 ---------A   01900 GO TO 1790
    0x5baf50c9d540 ---------A T 01910 FOR J = 1 TO I-1
    0x5baf50c9df40 ---------A   01920     D2=D2+(A(I-J)-48)*10^(J-1)
    0x5baf50c9e070 ---------A   01930 NEXT J
    0x5baf50c9e2f0 ---------A   01940 IF D2 < 0 THEN 1790
    0x5baf50c9e550 ---------A   01950 IF D2 >= 360 THEN 1790
    0x5baf50c9e5d0 ---------A   01960 PRINT
    0x5baf50c9e640 ---------A   01970 PRINT
    0x5baf50c9e6b0 ---------A   01980 REM
    0x5baf50c9e770 ---------A   01990 REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    0x5baf50c9e7f0 ---------A   02000 REM
    0x5baf50c9ef30 ---------A   02010 LET X3 = V1*COS(D1*P1)/100
    0x5baf50c9f650 ---------A   02020 LET Y3 = V1*SIN(D1*P1)/100
    0x5baf50c9fd70 ---------A   02030 LET X4 = V2*COS(D2*P1)/100
    0x5baf50ca0490 ---------A   02040 LET Y4 = V2*SIN(D2*P1)/100
    0x5baf50ca0ca0 ---------A   02050 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5baf50ca0f70 ---------A   02060 FOR I = 1 TO 100
    0x5baf50ca12d0 ---------A   02070     LET X1 = X1+X3
    0x5baf50ca1620 ---------A   02080     LET Y1 = Y1+Y3
    0x5baf50ca1970 ---------A   02090     LET X2 = X2+X4
    0x5baf50ca1ce0 ---------A   02100     LET Y2 = Y2+Y4
    0x5baf50ca2540 ---------A   02110     IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2130
    0x5baf50ca2d60 ---------A   02120     C = (X2-X1)^2+(Y2-Y1)^2
    0x5baf50ca2e90 ---------A T 02130 NEXT I
    0x5baf50ca31d0 ---------A   02140 LET H = H+1
    0x5baf50ca3440 ---------A   02150 IF C > T THEN 1500
    0x5baf50ca34c0 ---------A   02160 PRINT
    0x5baf50ca3530 ---------A   02170 PRINT
    0x5baf50ca3680 ---------A   02180 PRINT"**********"
    0x5baf50ca37d0 ---------A   02190 PRINT"* GOT YA *"
    0x5baf50ca3920 ---------A   02200 PRINT"**********"
    0x5baf50ca3990 ---------A   02210 PRINT
    0x5baf50ca3a00 ---------A   02220 PRINT
    0x5baf50ca3a70 ---------A   02230 PRINT
    0x5baf50ca3ac0 ---------A T 02240 STOP
    0x5baf50ca3b40 ---------B   02250 REM
    0x5baf50ca3c10 ---------B   02260 REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    0x5baf50ca3c90 ---------B   02270 REM
    0x5baf50ca4700 ---------B G 02280 IF Z < 0 THEN 2310
    0x5baf50ca4880 ---------B   02290 PRINT "+";
    0x5baf50ca48f0 ---------B   02300 GOTO 2330
    0x5baf50ca4a50 ---------B T 02310 PRINT"-";
    0x5baf50ca4c80 ---------B   02320 LET Z = -Z
    0x5baf50ca50a0 ---------B B 02330 LET Z = INT(Z+0.5)
    0x5baf50ca5390 ---------B   02340 LET S$ = "0123456789"
    0x5baf50ca5670 ---------B   02350 FOR I = 1 TO 4
    0x5baf50ca5dc0 ---------B   02360     LET W = INT(Z/10^(4-I))
    0x5baf50ca62c0 ---------B   02370     PRINT MID$(S$,W+1,1);
    0x5baf50ca6970 ---------B   02380     LET Z = Z-W*10^(4-I)
    0x5baf50ca6aa0 ---------B   02390 NEXT I
    0x5baf50ca6b00 ---------B   02400 RETURN
    0x5baf50ca6b60 ---------A   02410 END
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
   A) 0x5baf50c8adb0 (01000)   0x5baf50c8adb0 (01000)   0x5baf50ca6b60 (02410)   0x5baf50ca6b60 (02410)   
   B) 0x5baf50ca3b40 (02250)   0x5baf50ca4700 (02280)   0x5baf50ca6b00 (02400)   0x5baf50ca6b00 (02400)   

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
    A               Array    Integer         {0,14} 
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D1                       Integer     
    D2                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
    H1                       Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
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
    P1                       Integer     
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
    V1                       Integer     
    V2                       Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X1                       Integer     
    X2                       Integer     
    X3                       Integer     
    X4                       Integer     
    Y1                       Integer     
    Y2                       Integer     
    Y3                       Integer     
    Y4                       Integer     
    Z                        Integer     

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
    0x5baf50c8adb0 ---------A   01000 PRINT"DO YOU WANT INSTRUCTIONS :";
    0x5baf50c886d0 ---------A   01010 INPUT A$
    0x5baf50c88670 ---------A   01020 IF MID$(A$,1,1)="N" THEN 1220
    0x5baf50c88be0 ---------A   01030 IF MID$(A$,1,1)="n" THEN 1220
    0x5baf50c89b80 ---------A   01040 PRINT
    0x5baf50c8aff0 ---------A   01050 PRINT
    0x5baf50c8b1a0 ---------A   01060 PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    0x5baf50c8b240 ---------A   01070 PRINT"to come within a certian distance of the computer controlled"
    0x5baf50c89800 ---------A   01080 PRINT"rabbit, which also moves.  "
    0x5baf50c90940 ---------A   01090 PRINT"    The way you do this is to hop around (the rabbit hops too) "
    0x5baf50c90af0 ---------A   01100 PRINT"such that your path crosses the rabbit's path at the same time"
    0x5baf50c90c50 ---------A   01110 PRINT"Or in other words you come close enough to grab the little "
    0x5baf50c90dc0 ---------A   01120 PRINT"booger.  "
    0x5baf50c90f80 ---------A   01130 PRINT"    Oh by the way your arms are about 20 units long.  The number"
    0x5baf50c91140 ---------A   01140 PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    0x5baf50c91300 ---------A   01150 PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    0x5baf50c914c0 ---------A   01160 PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    0x5baf50c91680 ---------A   01170 PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    0x5baf50c91830 ---------A   01180 PRINT"so keep that in mind when jumping.  The computer will prompt"
    0x5baf50c919f0 ---------A   01190 PRINT"you for the direction you want to jump next.  Remember "
    0x5baf50c91b50 ---------A   01200 PRINT"you and the rabbit don't necessarily jump at the same velocity."
    0x5baf50c91c60 ---------A   01210 PRINT"   GOOD LUCK"
    0x5baf50c91cf0 ---------A T 01220 PRINT
    0x5baf50c91e40 ---------A   01230 PRINT"                   TYPE 'QUIT' TO STOP."
    0x5baf50c91e90 ---------A   01240 PRINT
    0x5baf50c91f30 ---------A   01250 RANDOMIZE
    0x5baf50c91fd0 ---------A   01260 REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    0x5baf50c92230 ---------A   01270 LET T = 400
    0x5baf50c92280 ---------A   01280 REM
    0x5baf50c92340 ---------A   01290 REM -- INITIALIZE VELOCITIES AND POSITIONS --
    0x5baf50c923c0 ---------A   01300 REM
    0x5baf50c92c50 ---------A   01310 LET V1 = INT(RND(0)*10+0.5)*10+50
    0x5baf50c93560 ---------A   01320 LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    0x5baf50c94220 ---------A T 01330 LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5baf50c94cc0 ---------A   01340 LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5baf50c94f20 ---------A   01350 IF Y1 = 0  THEN 1330
    0x5baf50c95180 ---------A   01360 IF X1 = 0 THEN 1330
    0x5baf50c95460 ---------A   01370 LET X2 = 0
    0x5baf50c95740 ---------A   01380 LET Y2 = 0
    0x5baf50c958a0 ---------A   01390 PRINT"SPEEDS (UNITS/HOP):"
    0x5baf50c95cf0 ---------A   01400 PRINT"RABBIT -";V1,"YOU -";V2
    0x5baf50c95d60 ---------A   01410 PRINT
    0x5baf50c95dd0 ---------A   01420 PRINT
    0x5baf50c95e50 ---------A   01430 PRINT
    0x5baf50c96730 ---------A   01440 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5baf50c96b00 ---------A   01450 LET P1 = 3.14159/180
    0x5baf50c96dd0 ---------A   01460 LET H1 = 1
    0x5baf50c96e40 ---------A   01470 REM
    0x5baf50c96ed0 ---------A   01480 REM -- PRINT OUT --
    0x5baf50c96f50 ---------A   01490 REM
    0x5baf50c97500 ---------A T 01500 LET D1 = INT(RND(0)*359)
    0x5baf50c97670 ---------A   01510 PRINT"HOP#: ";
    0x5baf50c97a20 ---------A   01520 LET Z = H
    0x5baf50c97aa0 ---------A   01530 GOSUB 2350
    0x5baf50c97c20 ---------A   01540 PRINT"    DISTANCE TO RABBIT: ";
    0x5baf50c98510 ---------A   01550 LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    0x5baf50c98590 ---------A   01560 GOSUB 2350
    0x5baf50c98700 ---------A   01570 PRINT"    CLOSEST APPROACH: ";
    0x5baf50c98a10 ---------A   01580 LET Z = SQR(C)
    0x5baf50c98a80 ---------A   01590 GOSUB 2350
    0x5baf50c98b00 ---------A   01600 PRINT
    0x5baf50c98c80 ---------A   01610 PRINT"RABBIT   ---    POSITION:  (";
    0x5baf50c98eb0 ---------A   01620 LET Z = X1
    0x5baf50c98f20 ---------A   01630 GOSUB 2300
    0x5baf50c99080 ---------A   01640 PRINT",";
    0x5baf50c996c0 ---------A   01650 LET Z = Y1
    0x5baf50c99740 ---------A   01660 GOSUB 2300
    0x5baf50c998b0 ---------A   01670 PRINT")     AND DIRECTION:  ";
    0x5baf50c99ae0 ---------A   01680 LET Z = D1
    0x5baf50c99b50 ---------A   01690 GOSUB 2350
    0x5baf50c99bd0 ---------A   01700 PRINT
    0x5baf50c99d50 ---------A   01710 PRINT"YOU      ---    POSITION:  (";
    0x5baf50c99f80 ---------A   01720 LET Z = X2
    0x5baf50c99ff0 ---------A   01730 GOSUB 2300
    0x5baf50c9a150 ---------A   01740 PRINT",";
    0x5baf50c9a380 ---------A   01750 LET Z = Y2
    0x5baf50c9a400 ---------A   01760 GOSUB 2300
    0x5baf50c9a560 ---------A   01770 PRINT")     AND DIRECTION: ";
    0x5baf50c9a5f0 ---------A   01780 GOTO 1800
    0x5baf50c9a760 ---------A T 01790 PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    0x5baf50c9a8b0 ---------A T 01800 INPUT A$
    0x5baf50c9aba0 ---------A   01810 DIM A(15)
    0x5baf50c9b680 ---------A   01820 LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    0x5baf50c9b890 ---------A   01830 CHANGE A$ TO A
    0x5baf50c9bc50 ---------A   01840 FOR I = 1 TO 15
    0x5baf50c9bfa0 ---------A   01850     IF A(I) = 0 THEN 1920
    0x5baf50c9c2f0 ---------A   01860     IF A(I) =113 THEN 2250
    0x5baf50c9c640 ---------A   01870     IF A(I) = 81 THEN 2250
    0x5baf50c9ca90 ---------A   01880     IF A(I)-48 < 0 THEN 1790
    0x5baf50c9ced0 ---------A   01890     IF A(I)-48 > 9 THEN 1790
    0x5baf50c9d010 ---------A   01900 NEXT I
    0x5baf50c9d090 ---------A   01910 GO TO 1790
    0x5baf50c9d540 ---------A T 01920 FOR J = 1 TO I-1
    0x5baf50c9df40 ---------A   01930     D2=D2+(A(I-J)-48)*10^(J-1)
    0x5baf50c9e070 ---------A   01940 NEXT J
    0x5baf50c9e2f0 ---------A   01950 IF D2 < 0 THEN 1790
    0x5baf50c9e550 ---------A   01960 IF D2 >= 360 THEN 1790
    0x5baf50c9e5d0 ---------A   01970 PRINT
    0x5baf50c9e640 ---------A   01980 PRINT
    0x5baf50c9e6b0 ---------A   01990 REM
    0x5baf50c9e770 ---------A   02000 REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    0x5baf50c9e7f0 ---------A   02010 REM
    0x5baf50c9ef30 ---------A   02020 LET X3 = V1*COS(D1*P1)/100
    0x5baf50c9f650 ---------A   02030 LET Y3 = V1*SIN(D1*P1)/100
    0x5baf50c9fd70 ---------A   02040 LET X4 = V2*COS(D2*P1)/100
    0x5baf50ca0490 ---------A   02050 LET Y4 = V2*SIN(D2*P1)/100
    0x5baf50ca0ca0 ---------A   02060 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5baf50ca0f70 ---------A   02070 FOR I = 1 TO 100
    0x5baf50ca12d0 ---------A   02080     LET X1 = X1+X3
    0x5baf50ca1620 ---------A   02090     LET Y1 = Y1+Y3
    0x5baf50ca1970 ---------A   02100     LET X2 = X2+X4
    0x5baf50ca1ce0 ---------A   02110     LET Y2 = Y2+Y4
    0x5baf50ca2540 ---------A   02120     IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2140
    0x5baf50ca2d60 ---------A   02130     C = (X2-X1)^2+(Y2-Y1)^2
    0x5baf50ca2e90 ---------A T 02140 NEXT I
    0x5baf50ca31d0 ---------A   02150 LET H = H+1
    0x5baf50ca3440 ---------A   02160 IF C > T THEN 1500
    0x5baf50ca34c0 ---------A   02170 PRINT
    0x5baf50ca3530 ---------A   02180 PRINT
    0x5baf50ca3680 ---------A   02190 PRINT"**********"
    0x5baf50ca37d0 ---------A   02200 PRINT"* GOT YA *"
    0x5baf50ca3920 ---------A   02210 PRINT"**********"
    0x5baf50ca3990 ---------A   02220 PRINT
    0x5baf50ca3a00 ---------A   02230 PRINT
    0x5baf50ca3a70 ---------A   02240 PRINT
    0x5baf50ca3ac0 ---------A T 02250 STOP
    0x5baf50ca6b60 ---------A   02260 END
    0x5baf50ca3b40 ---------B   02270 REM
    0x5baf50ca3c10 ---------B   02280 REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    0x5baf50ca3c90 ---------B   02290 REM
    0x5baf50ca4700 ---------B G 02300 IF Z < 0 THEN 2330
    0x5baf50ca4880 ---------B   02310 PRINT "+";
    0x5baf50ca48f0 ---------B   02320 GOTO 2350
    0x5baf50ca4a50 ---------B T 02330 PRINT"-";
    0x5baf50ca4c80 ---------B   02340 LET Z = -Z
    0x5baf50ca50a0 ---------B B 02350 LET Z = INT(Z+0.5)
    0x5baf50ca5390 ---------B   02360 LET S$ = "0123456789"
    0x5baf50ca5670 ---------B   02370 FOR I = 1 TO 4
    0x5baf50ca5dc0 ---------B   02380     LET W = INT(Z/10^(4-I))
    0x5baf50ca62c0 ---------B   02390     PRINT MID$(S$,W+1,1);
    0x5baf50ca6970 ---------B   02400     LET Z = Z-W*10^(4-I)
    0x5baf50ca6aa0 ---------B   02410 NEXT I
    0x5baf50cab330 ---------B   02420 GOTO 02430
    0x5baf50cab370 ---------B T 02430 RETURN
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
int    A_int_arr[15];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    C_int;                                     // Basic: C 
int    D1_int;                                    // Basic: D1 
int    D2_int;                                    // Basic: D2 
int    H_int;                                     // Basic: H 
int    H1_int;                                    // Basic: H1 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    P1_int;                                    // Basic: P1 
char*  S_str;                                     // Basic: S$ 
int    T_int;                                     // Basic: T 
int    V1_int;                                    // Basic: V1 
int    V2_int;                                    // Basic: V2 
int    W_int;                                     // Basic: W 
int    X1_int;                                    // Basic: X1 
int    X2_int;                                    // Basic: X2 
int    X3_int;                                    // Basic: X3 
int    X4_int;                                    // Basic: X4 
int    Y1_int;                                    // Basic: Y1 
int    Y2_int;                                    // Basic: Y2 
int    Y3_int;                                    // Basic: Y3 
int    Y4_int;                                    // Basic: Y4 
int    Z_int;                                     // Basic: Z 
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
    if(Z_int<0)goto Lbl_02330;
    // 02310 PRINT "+";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"+");fputs(buf,fh); };
    // 02320 GOTO 2350
    goto Lbl_02350;

  Lbl_02330:
    // 02330 PRINT"-";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"-");fputs(buf,fh); };
    // 02340 LET Z = -Z
    Z_int = Z_int;

void Routine_02350(){

  Lbl_02350:
    // 02350 LET Z = INT(Z+0.5)
    Z_int = INT(Z_int+0.5);
    // 02360 LET S$ = "0123456789"
    GLBpStr="0123456789";
    S_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02370 FOR I = 1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 02380     LET W = INT(Z/10^(4-I))
        W_int = INT(Z_int/IPower(10,(4-I_int)));
        // 02390     PRINT MID$(S$,W+1,1);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);