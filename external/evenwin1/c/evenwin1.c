/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/evenwin1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59a923355ac0 ---------A   00001 PRINT TAB(31);"EVEN WINS"
    0x59a923356e70 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x59a923356f30 ---------A   00003 PRINT:PRINT
    0x59a923356ff0 ---------A   00004 Y1=0
    0x59a9233553c0 ---------A   00010 M1=0
    0x59a9233556e0 ---------A   00020 DIM M(20),Y(20)
    0x59a92335c7e0 ---------A   00030 PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x59a92335c930 ---------A   00040 PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x59a92335ca40 ---------A   00050 PRINT "OTHER OBJECTS ON A TABLE."
    0x59a923355410 ---------A   00060 PRINT
    0x59a92335cae0 ---------A   00070 PRINT 
    0x59a92335cc80 ---------A   00080 PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x59a92335ce20 ---------A   00090 PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x59a92335cfb0 ---------A   00100 PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x59a92335d100 ---------A   00110 PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x59a92335d150 ---------A   00120 PRINT
    0x59a92335d1f0 ---------A   00130 PRINT
    0x59a92335d3a0 ---------A   00140 PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x59a92335d530 ---------A   00150 PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x59a92335d640 ---------A   00160 PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x59a92335d690 ---------A   00170 PRINT
    0x59a92335d6e0 ---------A   00180 PRINT
    0x59a92335d780 ---------A   00190 PRINT
    0x59a92335d910 ---------A T 00200 PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x59a92335da20 ---------A   00210 PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x59a923354610 ---------A   00220 INPUT C
    0x59a92335dc10 ---------A   00225 PRINT
    0x59a9233545b0 ---------A   00230 IF C=0 THEN 250
    0x59a92335de80 ---------A   00240 GOTO 1060
    0x59a92335e140 ---------A T 00250 T=27
    0x59a92335e330 ---------A   00260 M=2
    0x59a92335e620 ---------A   00270 PRINT:PRINT "TOTAL=";T:PRINT
    0x59a92335e970 ---------A   00280 M1=M1+M
    0x59a92335eeb0 ---------A   00290 T=T-M
    0x59a92335f200 ---------A T 00300 PRINT "I PICK UP";M;"MARBLES."
    0x59a92335f430 ---------A   00310 IF T=0 THEN 880
    0x59a92335f6e0 ---------A   00320 PRINT:PRINT "TOTAL=";T
    0x59a92335f780 ---------A   00330 PRINT
    0x59a92335f9f0 ---------A   00340 PRINT "     AND WHAT IS YOUR NEXT MOVE, MY TOTAL IS";M1
    0x59a92335fb40 ---------A T 00350 INPUT Y
    0x59a92335fbc0 ---------A T 00360 PRINT
    0x59a92335fe10 ---------A   00370 IF Y<1 THEN 1160
    0x59a923360070 ---------A   00380 IF Y>4 THEN 1160
    0x59a923360320 ---------A   00390 IF Y<=T THEN 430
    0x59a923360490 ---------A   00400 PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x59a9233605e0 ---------A   00410 PRINT "LEFT.  TRY AGAIN."
    0x59a923360650 ---------A   00420 GOTO 350
    0x59a923360990 ---------A T 00430 Y1=Y1+Y
    0x59a923360ce0 ---------A   00440 T=T-Y
    0x59a923360f30 ---------A   00450 IF T=0 THEN 880
    0x59a923361190 ---------A   00460 PRINT "TOTAL=";T
    0x59a923361210 ---------A   00470 PRINT
    0x59a923361460 ---------A   00480 PRINT "YOUR TOTAL IS";Y1
    0x59a9233616b0 ---------A   00490 IF T<.5 THEN 880
    0x59a923361dc0 ---------A   00500 R=T-6*INT(T/6)
    0x59a923362310 ---------A   00510 IF INT(Y1/2)=Y1/2 THEN 700
    0x59a923362570 ---------A   00520 IF T<4.2 THEN 580
    0x59a9233627d0 ---------A   00530 IF R>3.4 THEN 620
    0x59a923362b10 ---------A   00540 M=R+1
    0x59a923362e60 ---------A   00550 M1=M1+M
    0x59a9233631b0 ---------A   00560 T=T-M
    0x59a923363220 ---------A   00570 GOTO 300
    0x59a923363440 ---------A T 00580 M=T
    0x59a923363790 ---------A   00590 T=T-M
    0x59a923363810 ---------A   00600 GOTO 830
    0x59a923363c90 ---------A   00610 REM     250 IS WHERE I WIN.
    0x59a923363ef0 ---------A T 00620 IF R<4.7 THEN 660
    0x59a923364150 ---------A   00630 IF R>3.5 THEN 660
    0x59a923364370 ---------A T 00640 M=1
    0x59a9233643e0 ---------A   00650 GOTO 670
    0x59a9233645e0 ---------A T 00660 M=4
    0x59a923364930 ---------A T 00670 T=T-M
    0x59a923364c80 ---------A   00680 M1=M1+M
    0x59a923364d20 ---------A   00690 GOTO 300
    0x59a923364db0 ---------A T 00700 REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x59a923365010 ---------A   00710 IF R<1.5 THEN 1020
    0x59a923365270 ---------A   00720 IF R>5.3 THEN 1020
    0x59a9233655b0 ---------A   00730 M=R-1
    0x59a923365900 ---------A   00740 M1=M1+M
    0x59a923365c50 ---------A   00750 T=T-M
    0x59a923365eb0 ---------A   00760 IF T<.2 THEN 790
    0x59a923365f30 ---------A   00770 REM     IS # ZERO HERE
    0x59a923365fc0 ---------A   00780 GOTO 300
    0x59a923366020 ---------A T 00790 REM     IS = ZERO HERE
    0x59a923366390 ---------A   00800 PRINT "I PICK UP";M;"MARBLES."
    0x59a923366400 ---------A   00810 PRINT
    0x59a923366480 ---------A   00820 GOTO 880
    0x59a9233664f0 ---------A T 00830 REM    THIS IS WHERE I WIN
    0x59a923366860 ---------A   00840 PRINT "I PICK UP";M;"MARBLES."
    0x59a9233668d0 ---------A   00850 PRINT
    0x59a923366a20 ---------A   00860 PRINT "TOTAL = 0"
    0x59a923366d80 ---------A   00870 M1=M1+M
    0x59a923366ee0 ---------A T 00880 PRINT "THAT IS ALL OF THE MARBLES."
    0x59a923366f70 ---------A   00890 PRINT
    0x59a9233673c0 ---------A   00900 PRINT " MY TOTAL IS";M1;", YOUR TOTAL IS";Y1
    0x59a923367440 ---------A   00910 PRINT
    0x59a9233679b0 ---------A   00920 IF INT(M1/2)=M1/2 THEN 950
    0x59a923367b20 ---------A   00930 PRINT "     YOU WON.  DO YOU WANT TO PLAY"
    0x59a923367bb0 ---------A   00940 GOTO 960
    0x59a923367d20 ---------A T 00950 PRINT "     I WON.  DO YOU WANT TO PLAY"
    0x59a923367e80 ---------A T 00960 PRINT "AGAIN?  TYPE 1 FOR YES AND 0 FOR NO."
    0x59a923368090 ---------A   00970 INPUT A1
    0x59a9233682f0 ---------A   00980 IF A1=0 THEN 1030
    0x59a923368510 ---------A   00990 M1=0
    0x59a923368720 ---------A   01000 Y1=0
    0x59a923368790 ---------A   01010 GOTO 200
    0x59a9233687f0 ---------A T 01020 GOTO 640
    0x59a923368860 ---------A T 01030 PRINT
    0x59a9233689b0 ---------A   01040 PRINT "OK.  SEE YOU LATER."
    0x59a923368a20 ---------A   01050 GOTO 1230
    0x59a923368c20 ---------A T 01060 T=27
    0x59a923368c90 ---------A   01070 PRINT
    0x59a923368d00 ---------A   01080 PRINT
    0x59a923368d70 ---------A   01090 PRINT
    0x59a923368fc0 ---------A   01100 PRINT "TOTAL=";T
    0x59a923369030 ---------A   01110 PRINT
    0x59a9233690b0 ---------A   01120 PRINT
    0x59a923369230 ---------A   01130 PRINT "WHAT IS YOUR FIRST MOVE";
    0x59a923369380 ---------A   01140 INPUT Y
    0x59a923369400 ---------A   01150 GOTO 360
    0x59a923369490 ---------A T 01160 PRINT
    0x59a923369610 ---------A   01170 PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x59a923369770 ---------A   01180 PRINT "INTEGER BETWEEN 1 AND 4."
    0x59a923369800 ---------A   01190 PRINT
    0x59a923369960 ---------A   01200 PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x59a9233699d0 ---------A   01210 PRINT
    0x59a923369a40 ---------A   01220 GOTO 350
    0x59a923369a80 ---------A T 01230 END
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
   A) 0x59a923355ac0 (00001)   0x000000000000 (00000)   0x59a923369a80 (01230)   0x59a923369a80 (01230)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02280 - 10000    7730 

 */



/*
 *  Symbol Table Listing for 'basic/evenwin1.bas'
 *
    A1                       Float       
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
    M               Array    Float           {0,19} 
    M1                       Float       
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
    R                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
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
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    Y               Array    Float           {0,19} 
    Y1                       Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/evenwin1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59a923355ac0 ---------A   01000 PRINT TAB(31000);"EVEN WINS"
    0x59a923356e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x59a923356f30 ---------A   01020 PRINT:PRINT
    0x59a923356ff0 ---------A   01030 Y1=0
    0x59a9233553c0 ---------A   01040 M1=0
    0x59a9233556e0 ---------A   01050 DIM M(1050),Y(20)
    0x59a92335c7e0 ---------A   01060 PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x59a92335c930 ---------A   01070 PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x59a92335ca40 ---------A   01080 PRINT "OTHER OBJECTS ON A TABLE."
    0x59a923355410 ---------A   01090 PRINT
    0x59a92335cae0 ---------A   01100 PRINT 
    0x59a92335cc80 ---------A   01110 PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x59a92335ce20 ---------A   01120 PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x59a92335cfb0 ---------A   01130 PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x59a92335d100 ---------A   01140 PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x59a92335d150 ---------A   01150 PRINT
    0x59a92335d1f0 ---------A   01160 PRINT
    0x59a92335d3a0 ---------A   01170 PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x59a92335d530 ---------A   01180 PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x59a92335d640 ---------A   01190 PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x59a92335d690 ---------A   01200 PRINT
    0x59a92335d6e0 ---------A   01210 PRINT
    0x59a92335d780 ---------A   01220 PRINT
    0x59a92335d910 ---------A T 01230 PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x59a92335da20 ---------A   01240 PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x59a923354610 ---------A   01250 INPUT C
    0x59a92335dc10 ---------A   01260 PRINT
    0x59a9233545b0 ---------A   01270 IF C=0 THEN 1290
    0x59a92335de80 ---------A   01280 GOTO 2100
    0x59a92335e140 ---------A T 01290 T=27
    0x59a92335e330 ---------A   01300 M=2
    0x59a92335e620 ---------A   01310 PRINT:PRINT "TOTAL=";T:PRINT
    0x59a92335e970 ---------A   01320 M1=M1+M
    0x59a92335eeb0 ---------A   01330 T=T-M
    0x59a92335f200 ---------A T 01340 PRINT "I PICK UP";M;"MARBLES."
    0x59a92335f430 ---------A   01350 IF T=0 THEN 1920
    0x59a92335f6e0 ---------A   01360 PRINT:PRINT "TOTAL=";T
    0x59a92335f780 ---------A   01370 PRINT
    0x59a92335f9f0 ---------A   01380 PRINT "     AND WHAT IS YOUR NEXT MOVE, MY TOTAL IS";M1
    0x59a92335fb40 ---------A T 01390 INPUT Y
    0x59a92335fbc0 ---------A T 01400 PRINT
    0x59a92335fe10 ---------A   01410 IF Y<1 THEN 2200
    0x59a923360070 ---------A   01420 IF Y>4 THEN 2200
    0x59a923360320 ---------A   01430 IF Y<=T THEN 1470
    0x59a923360490 ---------A   01440 PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x59a9233605e0 ---------A   01450 PRINT "LEFT.  TRY AGAIN."
    0x59a923360650 ---------A   01460 GOTO 1390
    0x59a923360990 ---------A T 01470 Y1=Y1+Y
    0x59a923360ce0 ---------A   01480 T=T-Y
    0x59a923360f30 ---------A   01490 IF T=0 THEN 1920
    0x59a923361190 ---------A   01500 PRINT "TOTAL=";T
    0x59a923361210 ---------A   01510 PRINT
    0x59a923361460 ---------A   01520 PRINT "YOUR TOTAL IS";Y1
    0x59a9233616b0 ---------A   01530 IF T<.5 THEN 1920
    0x59a923361dc0 ---------A   01540 R=T-6*INT(T/6)
    0x59a923362310 ---------A   01550 IF INT(Y1/2)=Y1/2 THEN 1750
    0x59a923362570 ---------A   01560 IF T<4.2 THEN 1620
    0x59a9233627d0 ---------A   01570 IF R>3.4 THEN 1660
    0x59a923362b10 ---------A   01580 M=R+1
    0x59a923362e60 ---------A   01590 M1=M1+M
    0x59a9233631b0 ---------A   01600 T=T-M
    0x59a923363220 ---------A   01610 GOTO 1340
    0x59a923363440 ---------A T 01620 M=T
    0x59a923363790 ---------A   01630 T=T-M
    0x59a923363810 ---------A   01640 GOTO 1880
    0x59a923363c90 ---------A   01650 REM     250 IS WHERE I WIN.
    0x59a923363ef0 ---------A T 01660 IF R<4.7 THEN 1700
    0x59a923364150 ---------A   01670 IF R>3.5 THEN 1700
    0x59a923364370 ---------A T 01680 M=1
    0x59a9233643e0 ---------A   01690 GOTO 1710
    0x59a9233645e0 ---------A T 01700 M=4
    0x59a923364930 ---------A T 01710 T=T-M
    0x59a923364c80 ---------A   01720 M1=M1+M
    0x59a923364d20 ---------A   01730 GOTO 1340
    0x59a923364db0 ---------A   01740 REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x59a923365010 ---------A T 01750 IF R<1.5 THEN 2060
    0x59a923365270 ---------A   01760 IF R>5.3 THEN 2060
    0x59a9233655b0 ---------A   01770 M=R-1
    0x59a923365900 ---------A   01780 M1=M1+M
    0x59a923365c50 ---------A   01790 T=T-M
    0x59a923365eb0 ---------A   01800 IF T<.2 THEN 1840
    0x59a923365f30 ---------A   01810 REM     IS # ZERO HERE
    0x59a923365fc0 ---------A   01820 GOTO 1340
    0x59a923366020 ---------A   01830 REM     IS = ZERO HERE
    0x59a923366390 ---------A T 01840 PRINT "I PICK UP";M;"MARBLES."
    0x59a923366400 ---------A   01850 PRINT
    0x59a923366480 ---------A   01860 GOTO 1920
    0x59a9233664f0 ---------A   01870 REM    THIS IS WHERE I WIN
    0x59a923366860 ---------A T 01880 PRINT "I PICK UP";M;"MARBLES."
    0x59a9233668d0 ---------A   01890 PRINT
    0x59a923366a20 ---------A   01900 PRINT "TOTAL = 0"
    0x59a923366d80 ---------A   01910 M1=M1+M
    0x59a923366ee0 ---------A T 01920 PRINT "THAT IS ALL OF THE MARBLES."
    0x59a923366f70 ---------A   01930 PRINT
    0x59a9233673c0 ---------A   01940 PRINT " MY TOTAL IS";M1;", YOUR TOTAL IS";Y1
    0x59a923367440 ---------A   01950 PRINT
    0x59a9233679b0 ---------A   01960 IF INT(M1/2)=M1/2 THEN 1990
    0x59a923367b20 ---------A   01970 PRINT "     YOU WON.  DO YOU WANT TO PLAY"
    0x59a923367bb0 ---------A   01980 GOTO 2000
    0x59a923367d20 ---------A T 01990 PRINT "     I WON.  DO YOU WANT TO PLAY"
    0x59a923367e80 ---------A T 02000 PRINT "AGAIN?  TYPE 1 FOR YES AND 0 FOR NO."
    0x59a923368090 ---------A   02010 INPUT A1
    0x59a9233682f0 ---------A   02020 IF A1=0 THEN 2070
    0x59a923368510 ---------A   02030 M1=0
    0x59a923368720 ---------A   02040 Y1=0
    0x59a923368790 ---------A   02050 GOTO 1230
    0x59a9233687f0 ---------A T 02060 GOTO 1680
    0x59a923368860 ---------A T 02070 PRINT
    0x59a9233689b0 ---------A   02080 PRINT "OK.  SEE YOU LATER."
    0x59a923368a20 ---------A   02090 GOTO 2270
    0x59a923368c20 ---------A T 02100 T=27
    0x59a923368c90 ---------A   02110 PRINT
    0x59a923368d00 ---------A   02120 PRINT
    0x59a923368d70 ---------A   02130 PRINT
    0x59a923368fc0 ---------A   02140 PRINT "TOTAL=";T
    0x59a923369030 ---------A   02150 PRINT
    0x59a9233690b0 ---------A   02160 PRINT
    0x59a923369230 ---------A   02170 PRINT "WHAT IS YOUR FIRST MOVE";
    0x59a923369380 ---------A   02180 INPUT Y
    0x59a923369400 ---------A   02190 GOTO 1400
    0x59a923369490 ---------A T 02200 PRINT
    0x59a923369610 ---------A   02210 PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x59a923369770 ---------A   02220 PRINT "INTEGER BETWEEN 1 AND 4."
    0x59a923369800 ---------A   02230 PRINT
    0x59a923369960 ---------A   02240 PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x59a9233699d0 ---------A   02250 PRINT
    0x59a923369a40 ---------A   02260 GOTO 1390
    0x59a923369a80 ---------A T 02270 END
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
float  A1_flt;                                    // Basic: A1 
float  C_flt;                                     // Basic: C 
float  M_flt_arr[20];                             // Basic: M 
float  M1_flt;                                    // Basic: M1 
float  R_flt;                                     // Basic: R 
float  T_flt;                                     // Basic: T 
float  Y_flt_arr[20];                             // Basic: Y 
float  Y1_flt;                                    // Basic: Y1 
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
