/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/evenwin2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5db6dfae4b80 ---------A   00001 PRINT CHR$(26);TAB(31);"EVEN WINS"
    0x5db6dfae5f30 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5db6dfae5ff0 ---------A   00003 PRINT:PRINT
    0x5db6dfae60b0 ---------A   00004 Y1=0
    0x5db6dfae5740 ---------A   00010 M1=0
    0x5db6dfae3ca0 ---------A   00020 DIM M(20),Y(20)
    0x5db6dfaeb9f0 ---------A   00030 PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x5db6dfaebb40 ---------A   00040 PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x5db6dfaebc50 ---------A   00050 PRINT "OTHER OBJECTS ON A TABLE."
    0x5db6dfaebca0 ---------A   00060 PRINT
    0x5db6dfaebd40 ---------A   00070 PRINT 
    0x5db6dfaebee0 ---------A   00080 PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x5db6dfaec080 ---------A   00090 PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x5db6dfaec210 ---------A   00100 PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x5db6dfaec360 ---------A   00110 PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x5db6dfaec3b0 ---------A   00120 PRINT
    0x5db6dfaec450 ---------A   00130 PRINT
    0x5db6dfaec600 ---------A   00140 PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x5db6dfaec790 ---------A   00150 PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x5db6dfaec8a0 ---------A   00160 PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x5db6dfaec910 ---------A   00170 PRINT
    0x5db6dfaec980 ---------A   00180 PRINT
    0x5db6dfaeca20 ---------A   00190 PRINT
    0x5db6dfaecbb0 ---------A T 00200 PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x5db6dfaecce0 ---------A   00210 PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x5db6dfae40a0 ---------A   00220 INPUT C
    0x5db6dfaecf10 ---------A   00225 PRINT
    0x5db6dfae36d0 ---------A   00230 IF C=0 THEN 250
    0x5db6dfaed180 ---------A   00240 GOTO 1060
    0x5db6dfaed440 ---------A T 00250 T=27
    0x5db6dfaed630 ---------A   00260 M=2
    0x5db6dfaed920 ---------A   00270 PRINT:PRINT "TOTAL=";T:PRINT
    0x5db6dfaedc70 ---------A   00280 M1=M1+M
    0x5db6dfaee1b0 ---------A   00290 T=T-M
    0x5db6dfaeebb0 ---------A T 00300 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x5db6dfaeedf0 ---------A   00310 IF T=0 THEN 880
    0x5db6dfaef0f0 ---------A   00320 PRINT:PRINT "TOTAL=";T:PRINT
    0x5db6dfaef190 ---------A   00330 PRINT
    0x5db6dfaef6a0 ---------A   00340 PRINT "WHAT IS YOUR NEXT MOVE (MY TOTAL IS";M1;CHR$(8);")";
    0x5db6dfaef7f0 ---------A T 00350 INPUT Y
    0x5db6dfaef870 ---------A T 00360 PRINT
    0x5db6dfaefac0 ---------A   00370 IF Y<1 THEN 1160
    0x5db6dfaefd20 ---------A   00380 IF Y>4 THEN 1160
    0x5db6dfaeffd0 ---------A   00390 IF Y<=T THEN 430
    0x5db6dfaf0140 ---------A   00400 PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x5db6dfaf0290 ---------A   00410 PRINT "LEFT.  TRY AGAIN."
    0x5db6dfaf0300 ---------A   00420 GOTO 350
    0x5db6dfaf0640 ---------A T 00430 Y1=Y1+Y
    0x5db6dfaf0990 ---------A   00440 T=T-Y
    0x5db6dfaf0be0 ---------A   00450 IF T=0 THEN 880
    0x5db6dfaf0e40 ---------A   00460 PRINT "TOTAL=";T
    0x5db6dfaf0ed0 ---------A   00470 PRINT
    0x5db6dfaf13e0 ---------A   00480 PRINT "YOUR TOTAL IS";Y1;CHR$(8);"."
    0x5db6dfaf1630 ---------A   00490 IF T<.5 THEN 880
    0x5db6dfaf1d40 ---------A   00500 R=T-6*INT(T/6)
    0x5db6dfaf2290 ---------A   00510 IF INT(Y1/2)=Y1/2 THEN 700
    0x5db6dfaf24f0 ---------A   00520 IF T<4.2 THEN 580
    0x5db6dfaf2750 ---------A   00530 IF R>3.4 THEN 620
    0x5db6dfaf2a90 ---------A   00540 M=R+1
    0x5db6dfaf2de0 ---------A   00550 M1=M1+M
    0x5db6dfaf3130 ---------A   00560 T=T-M
    0x5db6dfaf31a0 ---------A   00570 GOTO 300
    0x5db6dfaf33c0 ---------A T 00580 M=T
    0x5db6dfaf3710 ---------A   00590 T=T-M
    0x5db6dfaf3790 ---------A   00600 GOTO 830
    0x5db6dfaf3c10 ---------A   00610 REM     250 IS WHERE I WIN.
    0x5db6dfaf3e70 ---------A T 00620 IF R<4.7 THEN 660
    0x5db6dfaf40d0 ---------A   00630 IF R>3.5 THEN 660
    0x5db6dfaf42f0 ---------A T 00640 M=1
    0x5db6dfaf4360 ---------A   00650 GOTO 670
    0x5db6dfaf4560 ---------A T 00660 M=4
    0x5db6dfaf48b0 ---------A T 00670 T=T-M
    0x5db6dfaf4c00 ---------A   00680 M1=M1+M
    0x5db6dfaf4ca0 ---------A   00690 GOTO 300
    0x5db6dfaf4d30 ---------A T 00700 REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x5db6dfaf4f90 ---------A   00710 IF R<1.5 THEN 1020
    0x5db6dfaf51f0 ---------A   00720 IF R>5.3 THEN 1020
    0x5db6dfaf5530 ---------A   00730 M=R-1
    0x5db6dfaf5880 ---------A   00740 M1=M1+M
    0x5db6dfaf5bd0 ---------A   00750 T=T-M
    0x5db6dfaf5e30 ---------A   00760 IF T<.2 THEN 790
    0x5db6dfaf5eb0 ---------A   00770 REM     IS # ZERO HERE
    0x5db6dfaf5f40 ---------A   00780 GOTO 300
    0x5db6dfaf5fa0 ---------A T 00790 REM     IS = ZERO HERE
    0x5db6dfaf6870 ---------A   00800 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x5db6dfaf68f0 ---------A   00810 PRINT
    0x5db6dfaf6970 ---------A   00820 GOTO 880
    0x5db6dfaf69e0 ---------A T 00830 REM    THIS IS WHERE I WIN
    0x5db6dfaf72b0 ---------A   00840 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x5db6dfaf7330 ---------A   00850 PRINT
    0x5db6dfaf7480 ---------A   00860 PRINT "TOTAL = 0"
    0x5db6dfaf77e0 ---------A   00870 M1=M1+M
    0x5db6dfaf7940 ---------A T 00880 PRINT "THAT IS ALL OF THE MARBLES."
    0x5db6dfaf79e0 ---------A   00890 PRINT
    0x5db6dfaf82b0 ---------A   00900 PRINT " MY TOTAL IS";M1;CHR$(8);", YOUR TOTAL IS";Y1;CHR$(8);"."
    0x5db6dfaf8330 ---------A   00910 PRINT
    0x5db6dfaf88a0 ---------A   00920 IF INT(M1/2)=M1/2 THEN 950
    0x5db6dfaf8a30 ---------A   00930 PRINT "     YOU WON.  DO YOU WANT TO PLAY";
    0x5db6dfaf8ac0 ---------A   00940 GOTO 960
    0x5db6dfaf8c40 ---------A T 00950 PRINT "     I WON.  DO YOU WANT TO PLAY";
    0x5db6dfaf8f30 ---------A T 00960 INPUT " AGAIN";A1$:PRINT:PRINT
    0x5db6dfaf9340 ---------A   00980 IF LEFT$(A1$,1)="N" THEN 1030
    0x5db6dfaf9560 ---------A   00990 M1=0
    0x5db6dfaf9770 ---------A   01000 Y1=0
    0x5db6dfaf97e0 ---------A   01010 GOTO 200
    0x5db6dfaf9840 ---------A T 01020 GOTO 640
    0x5db6dfaf98b0 ---------A T 01030 PRINT
    0x5db6dfaf9a00 ---------A   01040 PRINT "OK.  SEE YOU LATER."
    0x5db6dfaf9a70 ---------A   01050 GOTO 1230
    0x5db6dfaf9c70 ---------A T 01060 T=27
    0x5db6dfaf9ce0 ---------A   01070 PRINT
    0x5db6dfaf9d50 ---------A   01080 PRINT
    0x5db6dfaf9dc0 ---------A   01090 PRINT
    0x5db6dfafa010 ---------A   01100 PRINT "TOTAL=";T
    0x5db6dfafa080 ---------A   01110 PRINT
    0x5db6dfafa100 ---------A   01120 PRINT
    0x5db6dfafa280 ---------A   01130 PRINT "WHAT IS YOUR FIRST MOVE";
    0x5db6dfafa3d0 ---------A   01140 INPUT Y
    0x5db6dfafa450 ---------A   01150 GOTO 360
    0x5db6dfafa4e0 ---------A T 01160 PRINT
    0x5db6dfafa660 ---------A   01170 PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x5db6dfafa7c0 ---------A   01180 PRINT "INTEGER BETWEEN 1 AND 4."
    0x5db6dfafa850 ---------A   01190 PRINT
    0x5db6dfafa9b0 ---------A   01200 PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x5db6dfafaa20 ---------A   01210 PRINT
    0x5db6dfafaa90 ---------A   01220 GOTO 350
    0x5db6dfafaaf0 ---------A T 01230 RUN "MENU"
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00200      01010T
     00250      00230T
     00300      00570T, 00690T, 00780T
     00350      00420T, 01220T
     00360      01150T
     00430      00390T
     00580      00520T
     00620      00530T
     00640      01020T
     00660      00620T, 00630T
     00670      00650T
     00700      00510T
     00790      00760T
     00830      00600T
     00880      00310T, 00450T, 00490T, 00820T
     00950      00920T
     00960      00940T
     01020      00710T, 00720T
     01030      00980T
     01060      00240T
     01160      00370T, 00380T
     01230      01050T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5db6dfae4b80 (00001)   0x5db6dfae4b80 (00001)   0x5db6dfafaaf0 (01230)   0x5db6dfafaaf0 (01230)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02270 - 10000    7740 

 */



/*
 *  Symbol Table Listing for 'basic/evenwin2.bas'
 *
    A1$                      String      
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
    ELSE                     Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
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
    M               Array    Integer         {0,19} 
    M1                       Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    PRINT                    Integer     
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
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    Y               Array    Integer         {0,19} 
    Y1                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/evenwin2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5db6dfae4b80 ---------A   01000 PRINT CHR$(26);TAB(31000);"EVEN WINS"
    0x5db6dfae5f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5db6dfae5ff0 ---------A   01020 PRINT:PRINT
    0x5db6dfae60b0 ---------A   01030 Y1=0
    0x5db6dfae5740 ---------A   01040 M1=0
    0x5db6dfae3ca0 ---------A   01050 DIM M(1050),Y(20)
    0x5db6dfaeb9f0 ---------A   01060 PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x5db6dfaebb40 ---------A   01070 PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x5db6dfaebc50 ---------A   01080 PRINT "OTHER OBJECTS ON A TABLE."
    0x5db6dfaebca0 ---------A   01090 PRINT
    0x5db6dfaebd40 ---------A   01100 PRINT 
    0x5db6dfaebee0 ---------A   01110 PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x5db6dfaec080 ---------A   01120 PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x5db6dfaec210 ---------A   01130 PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x5db6dfaec360 ---------A   01140 PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x5db6dfaec3b0 ---------A   01150 PRINT
    0x5db6dfaec450 ---------A   01160 PRINT
    0x5db6dfaec600 ---------A   01170 PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x5db6dfaec790 ---------A   01180 PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x5db6dfaec8a0 ---------A   01190 PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x5db6dfaec910 ---------A   01200 PRINT
    0x5db6dfaec980 ---------A   01210 PRINT
    0x5db6dfaeca20 ---------A   01220 PRINT
    0x5db6dfaecbb0 ---------A T 01230 PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x5db6dfaecce0 ---------A   01240 PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x5db6dfae40a0 ---------A   01250 INPUT C
    0x5db6dfaecf10 ---------A   01260 PRINT
    0x5db6dfae36d0 ---------A   01270 IF C=0 THEN 1290
    0x5db6dfaed180 ---------A   01280 GOTO 2090
    0x5db6dfaed440 ---------A T 01290 T=27
    0x5db6dfaed630 ---------A   01300 M=2
    0x5db6dfaed920 ---------A   01310 PRINT:PRINT "TOTAL=";T:PRINT
    0x5db6dfaedc70 ---------A   01320 M1=M1+M
    0x5db6dfaee1b0 ---------A   01330 T=T-M
    0x5db6dfaeebb0 ---------A T 01340 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x5db6dfaeedf0 ---------A   01350 IF T=0 THEN 1920
    0x5db6dfaef0f0 ---------A   01360 PRINT:PRINT "TOTAL=";T:PRINT
    0x5db6dfaef190 ---------A   01370 PRINT
    0x5db6dfaef6a0 ---------A   01380 PRINT "WHAT IS YOUR NEXT MOVE (MY TOTAL IS";M1;CHR$(8);")";
    0x5db6dfaef7f0 ---------A T 01390 INPUT Y
    0x5db6dfaef870 ---------A T 01400 PRINT
    0x5db6dfaefac0 ---------A   01410 IF Y<1 THEN 2190
    0x5db6dfaefd20 ---------A   01420 IF Y>4 THEN 2190
    0x5db6dfaeffd0 ---------A   01430 IF Y<=T THEN 1470
    0x5db6dfaf0140 ---------A   01440 PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x5db6dfaf0290 ---------A   01450 PRINT "LEFT.  TRY AGAIN."
    0x5db6dfaf0300 ---------A   01460 GOTO 1390
    0x5db6dfaf0640 ---------A T 01470 Y1=Y1+Y
    0x5db6dfaf0990 ---------A   01480 T=T-Y
    0x5db6dfaf0be0 ---------A   01490 IF T=0 THEN 1920
    0x5db6dfaf0e40 ---------A   01500 PRINT "TOTAL=";T
    0x5db6dfaf0ed0 ---------A   01510 PRINT
    0x5db6dfaf13e0 ---------A   01520 PRINT "YOUR TOTAL IS";Y1;CHR$(8);"."
    0x5db6dfaf1630 ---------A   01530 IF T<.5 THEN 1920
    0x5db6dfaf1d40 ---------A   01540 R=T-6*INT(T/6)
    0x5db6dfaf2290 ---------A   01550 IF INT(Y1/2)=Y1/2 THEN 1750
    0x5db6dfaf24f0 ---------A   01560 IF T<4.2 THEN 1620
    0x5db6dfaf2750 ---------A   01570 IF R>3.4 THEN 1660
    0x5db6dfaf2a90 ---------A   01580 M=R+1
    0x5db6dfaf2de0 ---------A   01590 M1=M1+M
    0x5db6dfaf3130 ---------A   01600 T=T-M
    0x5db6dfaf31a0 ---------A   01610 GOTO 1340
    0x5db6dfaf33c0 ---------A T 01620 M=T
    0x5db6dfaf3710 ---------A   01630 T=T-M
    0x5db6dfaf3790 ---------A   01640 GOTO 1880
    0x5db6dfaf3c10 ---------A   01650 REM     250 IS WHERE I WIN.
    0x5db6dfaf3e70 ---------A T 01660 IF R<4.7 THEN 1700
    0x5db6dfaf40d0 ---------A   01670 IF R>3.5 THEN 1700
    0x5db6dfaf42f0 ---------A T 01680 M=1
    0x5db6dfaf4360 ---------A   01690 GOTO 1710
    0x5db6dfaf4560 ---------A T 01700 M=4
    0x5db6dfaf48b0 ---------A T 01710 T=T-M
    0x5db6dfaf4c00 ---------A   01720 M1=M1+M
    0x5db6dfaf4ca0 ---------A   01730 GOTO 1340
    0x5db6dfaf4d30 ---------A   01740 REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x5db6dfaf4f90 ---------A T 01750 IF R<1.5 THEN 2050
    0x5db6dfaf51f0 ---------A   01760 IF R>5.3 THEN 2050
    0x5db6dfaf5530 ---------A   01770 M=R-1
    0x5db6dfaf5880 ---------A   01780 M1=M1+M
    0x5db6dfaf5bd0 ---------A   01790 T=T-M
    0x5db6dfaf5e30 ---------A   01800 IF T<.2 THEN 1840
    0x5db6dfaf5eb0 ---------A   01810 REM     IS # ZERO HERE
    0x5db6dfaf5f40 ---------A   01820 GOTO 1340
    0x5db6dfaf5fa0 ---------A   01830 REM     IS = ZERO HERE
    0x5db6dfaf6870 ---------A T 01840 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x5db6dfaf68f0 ---------A   01850 PRINT
    0x5db6dfaf6970 ---------A   01860 GOTO 1920
    0x5db6dfaf69e0 ---------A   01870 REM    THIS IS WHERE I WIN
    0x5db6dfaf72b0 ---------A T 01880 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x5db6dfaf7330 ---------A   01890 PRINT
    0x5db6dfaf7480 ---------A   01900 PRINT "TOTAL = 0"
    0x5db6dfaf77e0 ---------A   01910 M1=M1+M
    0x5db6dfaf7940 ---------A T 01920 PRINT "THAT IS ALL OF THE MARBLES."
    0x5db6dfaf79e0 ---------A   01930 PRINT
    0x5db6dfaf82b0 ---------A   01940 PRINT " MY TOTAL IS";M1;CHR$(8);", YOUR TOTAL IS";Y1;CHR$(8);"."
    0x5db6dfaf8330 ---------A   01950 PRINT
    0x5db6dfaf88a0 ---------A   01960 IF INT(M1/2)=M1/2 THEN 1990
    0x5db6dfaf8a30 ---------A   01970 PRINT "     YOU WON.  DO YOU WANT TO PLAY";
    0x5db6dfaf8ac0 ---------A   01980 GOTO 2000
    0x5db6dfaf8c40 ---------A T 01990 PRINT "     I WON.  DO YOU WANT TO PLAY";
    0x5db6dfaf8f30 ---------A T 02000 INPUT " AGAIN";A1$:PRINT:PRINT
    0x5db6dfaf9340 ---------A   02010 IF LEFT$(A1$,1)="N" THEN 2060
    0x5db6dfaf9560 ---------A   02020 M1=0
    0x5db6dfaf9770 ---------A   02030 Y1=0
    0x5db6dfaf97e0 ---------A   02040 GOTO 1230
    0x5db6dfaf9840 ---------A T 02050 GOTO 1680
    0x5db6dfaf98b0 ---------A T 02060 PRINT
    0x5db6dfaf9a00 ---------A   02070 PRINT "OK.  SEE YOU LATER."
    0x5db6dfaf9a70 ---------A   02080 GOTO 2260
    0x5db6dfaf9c70 ---------A T 02090 T=27
    0x5db6dfaf9ce0 ---------A   02100 PRINT
    0x5db6dfaf9d50 ---------A   02110 PRINT
    0x5db6dfaf9dc0 ---------A   02120 PRINT
    0x5db6dfafa010 ---------A   02130 PRINT "TOTAL=";T
    0x5db6dfafa080 ---------A   02140 PRINT
    0x5db6dfafa100 ---------A   02150 PRINT
    0x5db6dfafa280 ---------A   02160 PRINT "WHAT IS YOUR FIRST MOVE";
    0x5db6dfafa3d0 ---------A   02170 INPUT Y
    0x5db6dfafa450 ---------A   02180 GOTO 1400
    0x5db6dfafa4e0 ---------A T 02190 PRINT
    0x5db6dfafa660 ---------A   02200 PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x5db6dfafa7c0 ---------A   02210 PRINT "INTEGER BETWEEN 1 AND 4."
    0x5db6dfafa850 ---------A   02220 PRINT
    0x5db6dfafa9b0 ---------A   02230 PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x5db6dfafaa20 ---------A   02240 PRINT
    0x5db6dfafaa90 ---------A   02250 GOTO 1390
    0x5db6dfafaaf0 ---------A T 02260 RUN "MENU"
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
char*  A1_str;                                    // Basic: A1$ 
int    C_int;                                     // Basic: C 
int    ELSE_int;                                  // Basic: ELSE 
int    M_int_arr[20];                             // Basic: M 
int    M1_int;                                    // Basic: M1 
int    PRINT_int;                                 // Basic: PRINT 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    Y_int_arr[20];                             // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
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
