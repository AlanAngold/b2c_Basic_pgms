/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/nim.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cd1dac44b60 ---------A   00100 PRINT TAB(33);"NIM"
    0x5cd1dac45e70 ---------A   00110 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cd1dac45ff0 ---------A   00120 PRINT:PRINT:PRINT
    0x5cd1dac460e0 ---------A   00210 DIM A(100),B(100,10),D(2)
    0x5cd1dac45560 ---------A   00220 PRINT "THIS IS THE GAME OF NIM."
    0x5cd1dac44620 ---------A   00230 PRINT "DO YOU WANT INSTRUCTIONS";
    0x5cd1dac436d0 ---------A T 00240 INPUT Z$
    0x5cd1dac43670 ---------A   00250 IF Z$="NO" THEN 440
    0x5cd1dac4bb60 ---------A   00260 IF Z$="no" THEN 440
    0x5cd1dac4bdc0 ---------A   00270 IF Z$="YES" THEN 310
    0x5cd1dac4c050 ---------A   00280 IF Z$="yes" THEN 310
    0x5cd1dac455b0 ---------A   00290 PRINT "PLEASE ANSWER YES OR NO"
    0x5cd1dac4c210 ---------A   00300 GOTO 240
    0x5cd1dac4c3a0 ---------A T 00310 PRINT "THE GAME IS PLAYED WITH A NUMBER OF PILES OF OBJECTS."
    0x5cd1dac4c550 ---------A   00320 PRINT "ANY NUMBER OF OBJECTS ARE REMOVED FROM ONE PILE BY YOU AND"
    0x5cd1dac4c6f0 ---------A   00330 PRINT "THE MACHINE ALTERNATELY.  ON YOUR TURN, YOU MAY TAKE"
    0x5cd1dac4c890 ---------A   00340 PRINT "ALL THE OBJECTS THAT REMAIN IN ANY PILE, BUT YOU MUST"
    0x5cd1dac4ca40 ---------A   00350 PRINT "TAKE AT LEAST ONE OBJECT, AND YOU MAY TAKE OBJECTS FROM"
    0x5cd1dac4cbf0 ---------A   00360 PRINT "ONLY ONE PILE ON A SINGLE TURN.  YOU MUST SPECIFY WHETHER"
    0x5cd1dac4cda0 ---------A   00370 PRINT "WINNING IS DEFINED AS TAKING OR NOT TAKING THE LAST OBJECT,"
    0x5cd1dac4cf50 ---------A   00380 PRINT "THE NUMBER OF PILES IN THE GAME, AND HOW MANY OBJECTS ARE"
    0x5cd1dac4d0e0 ---------A   00390 PRINT "ORIGINALLY IN EACH PILE.  EACH PILE MAY CONTAIN A"
    0x5cd1dac4d270 ---------A   00400 PRINT "DIFFERENT NUMBER OF OBJECTS."
    0x5cd1dac4d420 ---------A   00410 PRINT "THE MACHINE WILL SHOW ITS MOVE BY LISTING EACH PILE AND THE"
    0x5cd1dac4d5a0 ---------A   00420 PRINT "NUMBER OF OBJECTS REMAINING IN THE PILES AFTER  EACH OF ITS"
    0x5cd1dac4d6f0 ---------A   00430 PRINT "MOVES."
    0x5cd1dac4d790 ---------A T 00440 PRINT
    0x5cd1dac4d920 ---------A T 00450 PRINT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST";
    0x5cd1dac4db30 ---------A   00460 INPUT W
    0x5cd1dac4dd90 ---------A   00470 IF W=1 THEN 490
    0x5cd1dac4e000 ---------A   00480 IF W<>2 THEN 450
    0x5cd1dac4e180 ---------A T 00490 PRINT "ENTER NUMBER OF PILES";
    0x5cd1dac4e390 ---------A   00500 INPUT N
    0x5cd1dac4e800 ---------A   00510 IF N>100 THEN 490
    0x5cd1dac4ea70 ---------A   00520 IF N<1 THEN 490
    0x5cd1dac4ede0 ---------A   00530 IF N<>INT(N) THEN 490
    0x5cd1dac4ef40 ---------A   00540 PRINT "ENTER PILE SIZES"
    0x5cd1dac4f2f0 ---------A   00550 FOR I=1 TO N
    0x5cd1dac4f470 ---------A T 00560 PRINT I;
    0x5cd1dac4f6b0 ---------A   00570 INPUT A(I)
    0x5cd1dac4f9f0 ---------A   00580 IF A(I)>2000 THEN 560
    0x5cd1dac4fd40 ---------A   00590 IF A(I)<1 THEN 560
    0x5cd1dac50260 ---------A   00600 IF A(I)<>INT(A(I)) THEN 560
    0x5cd1dac503a0 ---------A   00610 NEXT I
    0x5cd1dac50540 ---------A   00620 PRINT "DO YOU WANT TO MOVE FIRST";
    0x5cd1dac50760 ---------A T 00630 INPUT Q9$
    0x5cd1dac509f0 ---------A   00640 IF Q9$="YES" THEN 1450
    0x5cd1dac50c80 ---------A   00650 IF Q9$="yes" THEN 1450
    0x5cd1dac50f10 ---------A   00660 IF Q9$="NO" THEN 700
    0x5cd1dac511a0 ---------A   00670 IF Q9$="no" THEN 700
    0x5cd1dac51310 ---------A   00680 PRINT "PLEASE ANSWER YES OR NO."
    0x5cd1dac51380 ---------A   00690 GOTO 630
    0x5cd1dac515c0 ---------A T 00700 IF W=1 THEN 940
    0x5cd1dac518a0 ---------A   00710 LET C=0
    0x5cd1dac51b90 ---------A   00720 FOR I=1 TO N
    0x5cd1dac51ed0 ---------A   00730 IF A(I)=0 THEN 770
    0x5cd1dac52210 ---------A   00740 LET C=C+1
    0x5cd1dac52460 ---------A   00750 IF C=3 THEN 840
    0x5cd1dac52780 ---------A   00760 LET D(C)=I
    0x5cd1dac528b0 ---------A T 00770 NEXT I
    0x5cd1dac52b20 ---------A   00780 IF C=2 THEN 920
    0x5cd1dac52f30 ---------A   00790 IF A(D(1))>1 THEN 820
    0x5cd1dac53090 ---------A T 00800 PRINT "MACHINE LOSES"
    0x5cd1dac53110 ---------A   00810 GOTO 1640
    0x5cd1dac53250 ---------A T 00820 PRINT "MACHINE WINS"
    0x5cd1dac536d0 ---------A   00830 GOTO 1640
    0x5cd1dac538d0 ---------A T 00840 LET C=0
    0x5cd1dac53bc0 ---------A   00850 FOR I=1 TO N
    0x5cd1dac53f00 ---------A   00860 IF A(I)>1 THEN 940
    0x5cd1dac54240 ---------A   00870 IF A(I)=0 THEN 890
    0x5cd1dac54580 ---------A   00880 LET C=C+1
    0x5cd1dac546b0 ---------A T 00890 NEXT I
    0x5cd1dac54c20 ---------A   00900 IF C/2<>INT(C/2) THEN 800
    0x5cd1dac54cb0 ---------A   00910 GOTO 940
    0x5cd1dac550a0 ---------A T 00920 IF A(D(1))=1 THEN 820
    0x5cd1dac554a0 ---------A   00930 IF A(D(2))=1 THEN 820
    0x5cd1dac557a0 ---------A T 00940 FOR I=1 TO N
    0x5cd1dac55b80 ---------A   00950 LET E=A(I)
    0x5cd1dac55f10 ---------A   00960 FOR J=0 TO 10
    0x5cd1dac56320 ---------A   00970 LET F=E/2
    0x5cd1dac56a50 ---------A   00980 LET B(I,J)=2*(F-INT(F))
    0x5cd1dac56d60 ---------A   00990 LET E=INT(F)
    0x5cd1dac56e90 ---------A   01000 NEXT J
    0x5cd1dac56fd0 ---------A   01010 NEXT I
    0x5cd1dac57380 ---------A   01020 FOR J=10 TO 0 STEP -1
    0x5cd1dac575a0 ---------A   01030 LET C=0
    0x5cd1dac57870 ---------A   01040 LET H=0
    0x5cd1dac57b70 ---------A   01050 FOR I=1 TO N
    0x5cd1dac57f90 ---------A   01060 IF B(I,J)=0 THEN 1110
    0x5cd1dac582e0 ---------A   01070 LET C=C+1
    0x5cd1dac58630 ---------A   01080 IF A(I)<=H THEN 1110
    0x5cd1dac58950 ---------A   01090 LET H=A(I)
    0x5cd1dac58c40 ---------A   01100 LET G=I
    0x5cd1dac58d70 ---------A T 01110 NEXT I
    0x5cd1dac592e0 ---------A   01120 IF C/2<>INT(C/2) THEN 1190
    0x5cd1dac59420 ---------A   01130 NEXT J
    0x5cd1dac59a40 ---------A T 01140 LET E=INT(N*RND(1)+1)
    0x5cd1dac59d80 ---------A   01150 IF A(E)=0 THEN 1140
    0x5cd1dac5a460 ---------A   01160 LET F=INT(A(E)*RND(1)+1)
    0x5cd1dac5a970 ---------A   01170 LET A(E)=A(E)-F
    0x5cd1dac5a9e0 ---------A   01180 GOTO 1380
    0x5cd1dac5acc0 ---------A T 01190 LET A(G)=0
    0x5cd1dac5af90 ---------A   01200 FOR J=0 TO 10
    0x5cd1dac5b370 ---------A   01210 LET B(G,J)=0
    0x5cd1dac5b580 ---------A   01220 LET C=0
    0x5cd1dac5b880 ---------A   01230 FOR I=1 TO N
    0x5cd1dac5bca0 ---------A   01240 IF B(I,J)=0 THEN 1260
    0x5cd1dac5bfe0 ---------A   01250 LET C=C+1
    0x5cd1dac5c110 ---------A T 01260 NEXT I
    0x5cd1dac5cda0 ---------A   01270 LET A(G)=A(G)+2*(C/2-INT(C/2))*2^J
    0x5cd1dac5ced0 ---------A   01280 NEXT J
    0x5cd1dac5d130 ---------A   01290 IF W=1 THEN 1380
    0x5cd1dac5d350 ---------A   01300 LET C=0
    0x5cd1dac5d650 ---------A   01310 FOR I=1 TO N
    0x5cd1dac5d9a0 ---------A   01320 IF A(I)>1 THEN 1380
    0x5cd1dac5dce0 ---------A   01330 IF A(I)=0 THEN 1350
    0x5cd1dac5e020 ---------A   01340 LET C=C+1
    0x5cd1dac5e150 ---------A T 01350 NEXT I
    0x5cd1dac5e6c0 ---------A   01360 IF C/2<>INT(C/2) THEN 1380
    0x5cd1dac5ebc0 ---------A   01370 LET A(G)=1-A(G)
    0x5cd1dac5ed10 ---------A T 01380 PRINT "PILE  SIZE"
    0x5cd1dac5f000 ---------A   01390 FOR I=1 TO N
    0x5cd1dac5f340 ---------A   01400 PRINT I;A(I)
    0x5cd1dac5f470 ---------A   01410 NEXT I
    0x5cd1dac5f6d0 ---------A   01420 IF W=2 THEN 1450
    0x5cd1dac5f750 ---------A   01430 GOSUB 1570
    0x5cd1dac5fa70 ---------A   01440 IF Z=1 THEN 820
    0x5cd1dac5fc10 ---------A T 01450 PRINT "YOUR MOVE - PILE, NUMBER TO BE REMOVED";
    0x5cd1dac5ffc0 ---------A   01460 INPUT X,Y
    0x5cd1dac60a50 ---------A   01470 IF X>N THEN 1450
    0x5cd1dac60cc0 ---------A   01480 IF X<1 THEN 1450
    0x5cd1dac61030 ---------A   01490 IF X<>INT(X) THEN 1450
    0x5cd1dac61390 ---------A   01500 IF Y>A(X) THEN 1450
    0x5cd1dac61600 ---------A   01510 IF Y<1 THEN 1450
    0x5cd1dac61960 ---------A   01520 IF Y<>INT(Y) THEN 1450
    0x5cd1dac61e80 ---------A   01530 LET A(X)=A(X)-Y
    0x5cd1dac61ef0 ---------A   01540 GOSUB 1570
    0x5cd1dac62130 ---------A   01550 IF Z=1 THEN 800
    0x5cd1dac621b0 ---------A   01560 GOTO 700
    0x5cd1dac623b0 ---------B G 01570 LET Z=0
    0x5cd1dac626b0 ---------B   01580 FOR I=1 TO N
    0x5cd1dac629f0 ---------B   01590 IF A(I)=0 THEN 1610
    0x5cd1dac62a50 ---------B   01600 RETURN
    0x5cd1dac62b90 ---------B T 01610 NEXT I
    0x5cd1dac62db0 ---------B   01620 LET Z=1
    0x5cd1dac62e00 ---------B   01630 RETURN
    0x5cd1dac62fb0 ---------A T 01640 PRINT "do you want to play another game";
    0x5cd1dac63110 ---------A T 01650 INPUT Q9$
    0x5cd1dac63370 ---------A   01660 IF Q9$="YES" GOTO 1720
    0x5cd1dac63600 ---------A   01670 IF Q9$="yes" GOTO 1720
    0x5cd1dac63890 ---------A   01680 IF Q9$="NO" GOTO 1730
    0x5cd1dac63b20 ---------A   01690 IF Q9$="no" GOTO 1730
    0x5cd1dac63cb0 ---------A   01700 PRINT "PLEASE.  YES OR NO."
    0x5cd1dac63d20 ---------A   01710 GOTO 1650 
    0x5cd1dac63d80 ---------A T 01720 GOTO 440
    0x5cd1dac63dc0 ---------A T 01730 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00240      00300T
     00310      00270T, 00280T
     00440      00250T, 00260T, 01720T
     00450      00480T
     00490      00470T, 00510T, 00520T, 00530T
     00560      00580T, 00590T, 00600T
     00630      00690T
     00700      00660T, 00670T, 01560T
     00770      00730T
     00800      00900T, 01550T
     00820      00790T, 00920T, 00930T, 01440T
     00840      00750T
     00890      00870T
     00920      00780T
     00940      00700T, 00860T, 00910T
     01110      01060T, 01080T
     01140      01150T
     01190      01120T
     01260      01240T
     01350      01330T
     01380      01180T, 01290T, 01320T, 01360T
     01450      00640T, 00650T, 01420T, 01470T, 01480T, 01490T, 01500T, 01510T, 
                01520T
     01570      01430G, 01540G
     01610      01590T
     01640      00810T, 00830T
     01650      01710T
     01720      01660T, 01670T
     01730      01680T, 01690T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5cd1dac44b60 (00100)   0x5cd1dac44b60 (00100)   0x5cd1dac63dc0 (01730)   0x5cd1dac63dc0 (01730)   
   B) 0x5cd1dac623b0 (01570)   0x5cd1dac623b0 (01570)   0x5cd1dac62a50 (01600)   0x5cd1dac62e00 (01630)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02570 - 10000    7440 

 */



/*
 *  Symbol Table Listing for 'basic/nim.bas'
 *
    A               Array    Integer         {0,99} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B               Array    Integer         {0,99} {0,9} 
    C                        Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D               Array    Integer         {0,1} 
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    H                        Integer     
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
    N                        Integer     
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q9$                      String      
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
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/nim.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cd1dac44b60 ---------A   01000 PRINT TAB(33);"NIM"
    0x5cd1dac45e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cd1dac45ff0 ---------A   01020 PRINT:PRINT:PRINT
    0x5cd1dac460e0 ---------A   01030 DIM A(100),B(100,10),D(2)
    0x5cd1dac45560 ---------A   01040 PRINT "THIS IS THE GAME OF NIM."
    0x5cd1dac44620 ---------A   01050 PRINT "DO YOU WANT INSTRUCTIONS";
    0x5cd1dac436d0 ---------A T 01060 INPUT Z$
    0x5cd1dac43670 ---------A   01070 IF Z$="NO" THEN 1260
    0x5cd1dac4bb60 ---------A   01080 IF Z$="no" THEN 1260
    0x5cd1dac4bdc0 ---------A   01090 IF Z$="YES" THEN 1130
    0x5cd1dac4c050 ---------A   01100 IF Z$="yes" THEN 1130
    0x5cd1dac455b0 ---------A   01110 PRINT "PLEASE ANSWER YES OR NO"
    0x5cd1dac4c210 ---------A   01120 GOTO 1060
    0x5cd1dac4c3a0 ---------A T 01130 PRINT "THE GAME IS PLAYED WITH A NUMBER OF PILES OF OBJECTS."
    0x5cd1dac4c550 ---------A   01140 PRINT "ANY NUMBER OF OBJECTS ARE REMOVED FROM ONE PILE BY YOU AND"
    0x5cd1dac4c6f0 ---------A   01150 PRINT "THE MACHINE ALTERNATELY.  ON YOUR TURN, YOU MAY TAKE"
    0x5cd1dac4c890 ---------A   01160 PRINT "ALL THE OBJECTS THAT REMAIN IN ANY PILE, BUT YOU MUST"
    0x5cd1dac4ca40 ---------A   01170 PRINT "TAKE AT LEAST ONE OBJECT, AND YOU MAY TAKE OBJECTS FROM"
    0x5cd1dac4cbf0 ---------A   01180 PRINT "ONLY ONE PILE ON A SINGLE TURN.  YOU MUST SPECIFY WHETHER"
    0x5cd1dac4cda0 ---------A   01190 PRINT "WINNING IS DEFINED AS TAKING OR NOT TAKING THE LAST OBJECT,"
    0x5cd1dac4cf50 ---------A   01200 PRINT "THE NUMBER OF PILES IN THE GAME, AND HOW MANY OBJECTS ARE"
    0x5cd1dac4d0e0 ---------A   01210 PRINT "ORIGINALLY IN EACH PILE.  EACH PILE MAY CONTAIN A"
    0x5cd1dac4d270 ---------A   01220 PRINT "DIFFERENT NUMBER OF OBJECTS."
    0x5cd1dac4d420 ---------A   01230 PRINT "THE MACHINE WILL SHOW ITS MOVE BY LISTING EACH PILE AND THE"
    0x5cd1dac4d5a0 ---------A   01240 PRINT "NUMBER OF OBJECTS REMAINING IN THE PILES AFTER  EACH OF ITS"
    0x5cd1dac4d6f0 ---------A   01250 PRINT "MOVES."
    0x5cd1dac4d790 ---------A T 01260 PRINT
    0x5cd1dac4d920 ---------A T 01270 PRINT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST";
    0x5cd1dac4db30 ---------A   01280 INPUT W
    0x5cd1dac4dd90 ---------A   01290 IF W=1 THEN 1310
    0x5cd1dac4e000 ---------A   01300 IF W<>2 THEN 1270
    0x5cd1dac4e180 ---------A T 01310 PRINT "ENTER NUMBER OF PILES";
    0x5cd1dac4e390 ---------A   01320 INPUT N
    0x5cd1dac4e800 ---------A   01330 IF N>100 THEN 1310
    0x5cd1dac4ea70 ---------A   01340 IF N<1 THEN 1310
    0x5cd1dac4ede0 ---------A   01350 IF N<>INT(N) THEN 1310
    0x5cd1dac4ef40 ---------A   01360 PRINT "ENTER PILE SIZES"
    0x5cd1dac4f2f0 ---------A   01370 FOR I=1 TO N
    0x5cd1dac4f470 ---------A T 01380 PRINT I;
    0x5cd1dac4f6b0 ---------A   01390 INPUT A(I)
    0x5cd1dac4f9f0 ---------A   01400 IF A(I)>2000 THEN 1380
    0x5cd1dac4fd40 ---------A   01410 IF A(I)<1 THEN 1380
    0x5cd1dac50260 ---------A   01420 IF A(I)<>INT(A(I)) THEN 1380
    0x5cd1dac503a0 ---------A   01430 NEXT I
    0x5cd1dac50540 ---------A   01440 PRINT "DO YOU WANT TO MOVE FIRST";
    0x5cd1dac50760 ---------A T 01450 INPUT Q9$
    0x5cd1dac509f0 ---------A   01460 IF Q9$="YES" THEN 2270
    0x5cd1dac50c80 ---------A   01470 IF Q9$="yes" THEN 2270
    0x5cd1dac50f10 ---------A   01480 IF Q9$="NO" THEN 1520
    0x5cd1dac511a0 ---------A   01490 IF Q9$="no" THEN 1520
    0x5cd1dac51310 ---------A   01500 PRINT "PLEASE ANSWER YES OR NO."
    0x5cd1dac51380 ---------A   01510 GOTO 1450
    0x5cd1dac515c0 ---------A T 01520 IF W=1 THEN 1760
    0x5cd1dac518a0 ---------A   01530 LET C=0
    0x5cd1dac51b90 ---------A   01540 FOR I=1 TO N
    0x5cd1dac51ed0 ---------A   01550 IF A(I)=0 THEN 1590
    0x5cd1dac52210 ---------A   01560 LET C=C+1
    0x5cd1dac52460 ---------A   01570 IF C=3 THEN 1660
    0x5cd1dac52780 ---------A   01580 LET D(C)=I
    0x5cd1dac528b0 ---------A T 01590 NEXT I
    0x5cd1dac52b20 ---------A   01600 IF C=2 THEN 1740
    0x5cd1dac52f30 ---------A   01610 IF A(D(1))>1 THEN 1640
    0x5cd1dac53090 ---------A T 01620 PRINT "MACHINE LOSES"
    0x5cd1dac53110 ---------A   01630 GOTO 2390
    0x5cd1dac53250 ---------A T 01640 PRINT "MACHINE WINS"
    0x5cd1dac536d0 ---------A   01650 GOTO 2390
    0x5cd1dac538d0 ---------A T 01660 LET C=0
    0x5cd1dac53bc0 ---------A   01670 FOR I=1 TO N
    0x5cd1dac53f00 ---------A   01680 IF A(I)>1 THEN 1760
    0x5cd1dac54240 ---------A   01690 IF A(I)=0 THEN 1710
    0x5cd1dac54580 ---------A   01700 LET C=C+1
    0x5cd1dac546b0 ---------A T 01710 NEXT I
    0x5cd1dac54c20 ---------A   01720 IF C/2<>INT(C/2) THEN 1620
    0x5cd1dac54cb0 ---------A   01730 GOTO 1760
    0x5cd1dac550a0 ---------A T 01740 IF A(D(1))=1 THEN 1640
    0x5cd1dac554a0 ---------A   01750 IF A(D(2))=1 THEN 1640
    0x5cd1dac557a0 ---------A T 01760 FOR I=1 TO N
    0x5cd1dac55b80 ---------A   01770 LET E=A(I)
    0x5cd1dac55f10 ---------A   01780 FOR J=0 TO 10
    0x5cd1dac56320 ---------A   01790 LET F=E/2
    0x5cd1dac56a50 ---------A   01800 LET B(I,J)=2*(F-INT(F))
    0x5cd1dac56d60 ---------A   01810 LET E=INT(F)
    0x5cd1dac56e90 ---------A   01820 NEXT J
    0x5cd1dac56fd0 ---------A   01830 NEXT I
    0x5cd1dac57380 ---------A   01840 FOR J=10 TO 0 STEP -1
    0x5cd1dac575a0 ---------A   01850 LET C=0
    0x5cd1dac57870 ---------A   01860 LET H=0
    0x5cd1dac57b70 ---------A   01870 FOR I=1 TO N
    0x5cd1dac57f90 ---------A   01880 IF B(I,J)=0 THEN 1930
    0x5cd1dac582e0 ---------A   01890 LET C=C+1
    0x5cd1dac58630 ---------A   01900 IF A(I)<=H THEN 1930
    0x5cd1dac58950 ---------A   01910 LET H=A(I)
    0x5cd1dac58c40 ---------A   01920 LET G=I
    0x5cd1dac58d70 ---------A T 01930 NEXT I
    0x5cd1dac592e0 ---------A   01940 IF C/2<>INT(C/2) THEN 2010
    0x5cd1dac59420 ---------A   01950 NEXT J
    0x5cd1dac59a40 ---------A T 01960 LET E=INT(N*RND(1)+1)
    0x5cd1dac59d80 ---------A   01970 IF A(E)=0 THEN 1960
    0x5cd1dac5a460 ---------A   01980 LET F=INT(A(E)*RND(1)+1)
    0x5cd1dac5a970 ---------A   01990 LET A(E)=A(E)-F
    0x5cd1dac5a9e0 ---------A   02000 GOTO 2200
    0x5cd1dac5acc0 ---------A T 02010 LET A(G)=0
    0x5cd1dac5af90 ---------A   02020 FOR J=0 TO 10
    0x5cd1dac5b370 ---------A   02030 LET B(G,J)=0
    0x5cd1dac5b580 ---------A   02040 LET C=0
    0x5cd1dac5b880 ---------A   02050 FOR I=1 TO N
    0x5cd1dac5bca0 ---------A   02060 IF B(I,J)=0 THEN 2080
    0x5cd1dac5bfe0 ---------A   02070 LET C=C+1
    0x5cd1dac5c110 ---------A T 02080 NEXT I
    0x5cd1dac5cda0 ---------A   02090 LET A(G)=A(G)+2*(C/2-INT(C/2))*2^J
    0x5cd1dac5ced0 ---------A   02100 NEXT J
    0x5cd1dac5d130 ---------A   02110 IF W=1 THEN 2200
    0x5cd1dac5d350 ---------A   02120 LET C=0
    0x5cd1dac5d650 ---------A   02130 FOR I=1 TO N
    0x5cd1dac5d9a0 ---------A   02140 IF A(I)>1 THEN 2200
    0x5cd1dac5dce0 ---------A   02150 IF A(I)=0 THEN 2170
    0x5cd1dac5e020 ---------A   02160 LET C=C+1
    0x5cd1dac5e150 ---------A T 02170 NEXT I
    0x5cd1dac5e6c0 ---------A   02180 IF C/2<>INT(C/2) THEN 2200
    0x5cd1dac5ebc0 ---------A   02190 LET A(G)=1-A(G)
    0x5cd1dac5ed10 ---------A T 02200 PRINT "PILE  SIZE"
    0x5cd1dac5f000 ---------A   02210 FOR I=1 TO N
    0x5cd1dac5f340 ---------A   02220 PRINT I;A(I)
    0x5cd1dac5f470 ---------A   02230 NEXT I
    0x5cd1dac5f6d0 ---------A   02240 IF W=2 THEN 2270
    0x5cd1dac5f750 ---------A   02250 GOSUB 2490
    0x5cd1dac5fa70 ---------A   02260 IF Z=1 THEN 1640
    0x5cd1dac5fc10 ---------A T 02270 PRINT "YOUR MOVE - PILE, NUMBER TO BE REMOVED";
    0x5cd1dac5ffc0 ---------A   02280 INPUT X,Y
    0x5cd1dac60a50 ---------A   02290 IF X>N THEN 2270
    0x5cd1dac60cc0 ---------A   02300 IF X<1 THEN 2270
    0x5cd1dac61030 ---------A   02310 IF X<>INT(X) THEN 2270
    0x5cd1dac61390 ---------A   02320 IF Y>A(X) THEN 2270
    0x5cd1dac61600 ---------A   02330 IF Y<1 THEN 2270
    0x5cd1dac61960 ---------A   02340 IF Y<>INT(Y) THEN 2270
    0x5cd1dac61e80 ---------A   02350 LET A(X)=A(X)-Y
    0x5cd1dac61ef0 ---------A   02360 GOSUB 2490
    0x5cd1dac62130 ---------A   02370 IF Z=1 THEN 1620
    0x5cd1dac621b0 ---------A   02380 GOTO 1520
    0x5cd1dac62fb0 ---------A T 02390 PRINT "do you want to play another game";
    0x5cd1dac63110 ---------A T 02400 INPUT Q9$
    0x5cd1dac63370 ---------A   02410 IF Q9$="YES" GOTO 2470
    0x5cd1dac63600 ---------A   02420 IF Q9$="yes" GOTO 2470
    0x5cd1dac63890 ---------A   02430 IF Q9$="NO" GOTO 2480
    0x5cd1dac63b20 ---------A   02440 IF Q9$="no" GOTO 2480
    0x5cd1dac63cb0 ---------A   02450 PRINT "PLEASE.  YES OR NO."
    0x5cd1dac63d20 ---------A   02460 GOTO 2400 
    0x5cd1dac63d80 ---------A T 02470 GOTO 1260
    0x5cd1dac63dc0 ---------A T 02480 END
    0x5cd1dac623b0 ---------B G 02490 LET Z=0
    0x5cd1dac626b0 ---------B   02500 FOR I=1 TO N
    0x5cd1dac629f0 ---------B   02510 IF A(I)=0 THEN 2530
    0x5cd1dac68c00 ---------B   02520 GOTO 02560
    0x5cd1dac62b90 ---------B T 02530 NEXT I
    0x5cd1dac62db0 ---------B   02540 LET Z=1
    0x5cd1dac68c40 ---------B   02550 GOTO 02560
    0x5cd1dac68c80 ---------B T 02560 RETURN
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
int    A_int_arr[100];                            // Basic: A 
int    B_int_arr[100][10];                        // Basic: B 
int    C_int;                                     // Basic: C 
int    D_int_arr[2];                              // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    N_int;                                     // Basic: N 
char*  Q9_str;                                    // Basic: Q9$ 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
char*  Z_str;                                     // Basic: Z$ 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02490();

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

void Routine_02490(){
    // 02490 LET Z=0
    Z_int = 0;
    // 02500 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 02510 IF A(I)=0 THEN 2530
        if(A_int_arr[I_int]==0)goto Lbl_02530;
        // 02520 GOTO 02560
        goto Lbl_02560;

  Lbl_02530:
        // 02530 NEXT I
        int dummy_2530=0; // Ignore this line.
    }; // End-For(I_int)
    // 02540 LET Z=1
    Z_int = 1;
    // 02550 GOTO 02560
    goto Lbl_02560;

  Lbl_02560:
    // 02560 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
