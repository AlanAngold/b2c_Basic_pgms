/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/boxing.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f14d9529ac0 ---------A   00001 PRINT TAB(33);"BOXING"
    0x5f14d952ae70 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f14d95192b0 ---------A   00003 PRINT:PRINT:PRINT
    0x5f14d9528960 ---------A   00004 PRINT "BOXING OLYMPIC STYLE (3 ROUNDS -- 2 OUT OF 3 WINS)"
    0x5f14d9528fc0 ---------A   00005 J=0
    0x5f14d952a680 ---------A   00006 L=0
    0x5f14d9529440 ---------A   00008 PRINT
    0x5f14d952b140 ---------A   00010 PRINT "WHAT IS YOUR OPPONENT'S NAME";
    0x5f14d9528610 ---------A   00020 INPUT J$
    0x5f14d9528d80 ---------A   00030 PRINT "INPUT YOUR MAN'S NAME";
    0x5f14d9530900 ---------A   00040 INPUT L$
    0x5f14d9530a80 ---------A   00050 PRINT "DIFFERENT PUNCHES ARE: (1) FULL SWING; (2) HOOK; (3) UPPERCUT; (4) JAB."
    0x5f14d9530b90 ---------A   00060 PRINT "WHAT IS YOUR MANS BEST";
    0x5f14d9530d40 ---------A   00064 INPUT B
    0x5f14d9530e60 ---------A   00070 PRINT "WHAT IS HIS VULNERABILITY";
    0x5f14d9531070 ---------A   00080 INPUT D
    0x5f14d9531710 ---------A T 00090 B1=INT(4*RND(1)+1)
    0x5f14d9531da0 ---------A   00100 D1=INT(4*RND(1)+1)
    0x5f14d9532040 ---------A   00110 IF B1=D1 THEN 90
    0x5f14d95324d0 ---------A   00120 PRINT J$;"'S ADVANTAGE IS";B1;"AND VULNERABILITY IS SECRET.":PRINT
    0x5f14d9532860 ---------A   00130 FOR R=1 TO 3
    0x5f14d9532ac0 ---------A   00140 IF J>= 2 THEN 1040
    0x5f14d9532d20 ---------A   00150 IF L>=2 THEN 1060
    0x5f14d9533000 ---------A   00160 X=0
    0x5f14d95332b0 ---------A   00170 Y=0
    0x5f14d9533600 ---------A   00180 PRINT "ROUND";R;"BEGINS..."
    0x5f14d9533990 ---------A   00185 FOR R1= 1 TO 7
    0x5f14d9534030 ---------A   00190 I=INT(10*RND(1)+1)
    0x5f14d9534290 ---------A   00200 IF I>5 THEN 600
    0x5f14d9534510 ---------A   00210 PRINT L$;"'S PUNCH";
    0x5f14d9534720 ---------A   00220 INPUT P
    0x5f14d95349a0 ---------A   00221 IF P=B THEN 225
    0x5f14d9534a20 ---------A   00222 GOTO 230
    0x5f14d9534f50 ---------A T 00225 X=X+2
    0x5f14d95351a0 ---------A T 00230 IF P=1 THEN 340
    0x5f14d9535400 ---------A   00240 IF P=2 THEN 450
    0x5f14d9535670 ---------A   00250 IF P=3 THEN 520
    0x5f14d9535af0 ---------A   00270 PRINT L$;" JABS AT ";J$"'S HEAD ";
    0x5f14d9535d40 ---------A   00271 IF D1=4 THEN 290
    0x5f14d95363e0 ---------A   00275 C=INT(8*RND(1)+1)
    0x5f14d9536630 ---------A   00280 IF C<4 THEN 310
    0x5f14d9536970 ---------A T 00290 X=X+3
    0x5f14d95369f0 ---------A T 00300 GOTO 950
    0x5f14d9536b30 ---------A T 00310 PRINT "IT'S BLOCKED."
    0x5f14d9536bb0 ---------A   00330 GOTO 950
    0x5f14d9536e10 ---------A T 00340 PRINT L$ " SWINGS AND ";
    0x5f14d9537060 ---------A   00341 IF D1=4 THEN 410
    0x5f14d9537700 ---------A   00345 X3=INT(30*RND(1)+1)
    0x5f14d9537950 ---------A   00350 IF X3<10 THEN 410
    0x5f14d9537ad0 ---------A   00360 PRINT "HE MISSES ";
    0x5f14d9537b40 ---------A   00370 PRINT
    0x5f14d9537d90 ---------A   00375 IF X=1 THEN 950
    0x5f14d9537e10 ---------A   00380 PRINT
    0x5f14d9537e80 ---------A   00390 PRINT
    0x5f14d9537f00 ---------A   00400 GOTO 300
    0x5f14d9538040 ---------A T 00410 PRINT "HE CONNECTS!"
    0x5f14d9538290 ---------A   00420 IF X>35 THEN 980
    0x5f14d95385d0 ---------A   00425 X=X+15
    0x5f14d9538650 ---------A   00440 GOTO 300
    0x5f14d95388b0 ---------A T 00450 PRINT L$;" GIVES THE HOOK... ";
    0x5f14d9538b00 ---------A   00455 IF D1=2 THEN 480
    0x5f14d95391a0 ---------A   00460 H1=INT(2*RND(1)+1)
    0x5f14d95393f0 ---------A   00470 IF H1=1 THEN 500
    0x5f14d9539550 ---------A   00475 PRINT "CONNECTS..."
    0x5f14d9539880 ---------A T 00480 X=X+7
    0x5f14d9539d20 ---------A   00490 GOTO 300
    0x5f14d9539e70 ---------A T 00500 PRINT "BUT IT'S BLOCKED!!!!!!!!!!!!!"
    0x5f14d9539ef0 ---------A   00510 GOTO 300
    0x5f14d953a150 ---------A T 00520 PRINT L$ " TRIES AN UPPERCUT ";
    0x5f14d953a3b0 ---------A   00530 IF D1=3 THEN 570
    0x5f14d953aa50 ---------A   00540 D5=INT(100*RND(1)+1)
    0x5f14d953acc0 ---------A   00550 IF D5<51 THEN 570
    0x5f14d953ae30 ---------A   00560 PRINT "AND IT'S BLOCKED (LUCKY BLOCK!)"
    0x5f14d953aeb0 ---------A   00565 GOTO 300
    0x5f14d953aff0 ---------A T 00570 PRINT "AND HE CONNECTS!"
    0x5f14d953b320 ---------A   00580 X=X+4
    0x5f14d953b390 ---------A   00590 GOTO 300
    0x5f14d953ba10 ---------A T 00600 J7=INT(4*RND(1)+1)
    0x5f14d953bc80 ---------A   00601 IF J7 =B1 THEN 605
    0x5f14d953bd00 ---------A   00602 GOTO 610
    0x5f14d953c020 ---------A T 00605 Y=Y+2
    0x5f14d953c270 ---------A T 00610 IF J7=1 THEN 720
    0x5f14d953c4d0 ---------A   00620 IF J7=2 THEN 810
    0x5f14d953c740 ---------A   00630 IF J7 =3 THEN 860
    0x5f14d953c9c0 ---------A   00640 PRINT J$;" JABS AND ";
    0x5f14d953cc10 ---------A   00645 IF D=4 THEN 700
    0x5f14d953d2b0 ---------A   00650 Z4=INT(7*RND(1)+1)
    0x5f14d953d510 ---------A   00655 IF Z4>4 THEN 690
    0x5f14d953d670 ---------A   00660 PRINT "IT'S BLOCKED!"
    0x5f14d953d6f0 ---------A   00670 GOTO 300
    0x5f14d953d830 ---------A T 00690 PRINT " BLOOD SPILLS !!!"
    0x5f14d953db60 ---------A T 00700 Y=Y+5
    0x5f14d953dbe0 ---------A   00710 GOTO 300
    0x5f14d953de50 ---------A T 00720 PRINT J$" TAKES A FULL SWING AND";
    0x5f14d953e0a0 ---------A   00730 IF D=1 THEN 770
    0x5f14d953e740 ---------A   00740 R6=INT(60*RND(1)+1)
    0x5f14d953e9a0 ---------A   00745 IF R6 <30 THEN 770
    0x5f14d953eb00 ---------A   00750 PRINT " IT'S BLOCKED!"
    0x5f14d953eb90 ---------A   00760 GOTO 300
    0x5f14d953ecf0 ---------A T 00770 PRINT " POW!!!!! HE HITS HIM RIGHT IN THE FACE!"
    0x5f14d953ef40 ---------A   00780 IF Y>35 THEN 1010
    0x5f14d953f280 ---------A   00790 Y=Y+15
    0x5f14d953f310 ---------A   00800 GOTO 300
    0x5f14d953f750 ---------A T 00810 PRINT J$;" GETS ";L$;" IN THE JAW (OUCH!)"
    0x5f14d953fa90 ---------A   00820 Y=Y+7
    0x5f14d953fbe0 ---------A   00830 PRINT "....AND AGAIN!"
    0x5f14d953ff10 ---------A   00835 Y=Y+5
    0x5f14d9540160 ---------A   00840 IF Y>35 THEN 1010
    0x5f14d9540200 ---------A   00850 PRINT
    0x5f14d9540470 ---------A T 00860 PRINT L$;" IS ATTACKED BY AN UPPERCUT (OH,OH)..."
    0x5f14d95406d0 ---------A   00865 IF D=3 THEN 890
    0x5f14d9540d70 ---------A   00870 Q4=INT(200*RND(1)+1)
    0x5f14d9540fd0 ---------A   00880 IF Q4>75 THEN 920
    0x5f14d9541330 ---------A T 00890 PRINT "AND ";J$;" CONNECTS..."
    0x5f14d9541660 ---------A   00900 Y=Y+8
    0x5f14d95416f0 ---------A   00910 GOTO 300
    0x5f14d9541a30 ---------A T 00920 PRINT " BLOCKS AND HITS ";J$;" WITH A HOOK."
    0x5f14d9541d60 ---------A   00930 X=X+5
    0x5f14d9541dd0 ---------A   00940 GOTO 300
    0x5f14d9541ef0 ---------A T 00950 NEXT R1
    0x5f14d9542180 ---------A   00951 IF X>Y THEN 955
    0x5f14d9542530 ---------A   00952 PRINT:PRINT J$" WINS ROUND" R
    0x5f14d9542860 ---------A   00953 J=J+1
    0x5f14d95428e0 ---------A   00954 GOTO 960
    0x5f14d9542c70 ---------A T 00955 PRINT:PRINT L$" WINS ROUND"R
    0x5f14d9542fa0 ---------A   00956 L=L+1
    0x5f14d95430d0 ---------A T 00960 NEXT R
    0x5f14d9543330 ---------A   00961 IF J>= 2 THEN 1040
    0x5f14d95435c0 ---------A   00962 IF L>=2 THEN 1060
    0x5f14d9544260 ---------A T 00980 PRINT J$ " IS KNOCKED COLD AND " L$" IS THE WINNER AND CHAMP!";
    0x5f14d9544300 ---------A T 01000 GOTO 1080
    0x5f14d9544770 ---------A T 01010 PRINT L$ " IS KNOCKED COLD AND " J$" IS THE WINNER AND CHAMP!";
    0x5f14d9544800 ---------A   01030 GOTO 1000
    0x5f14d9544c40 ---------A T 01040 PRINT J$ " WINS (NICE GOING," J$;")."
    0x5f14d9544cc0 ---------A   01050 GOTO 1000
    0x5f14d9544f00 ---------A T 01060 PRINT L$ " AMAZINGLY WINS!!"
    0x5f14d9544f70 ---------A   01070 GOTO 1000
    0x5f14d9544fd0 ---------A T 01080 PRINT
    0x5f14d9545060 ---------A   01085 PRINT
    0x5f14d95451d0 ---------A   01090 PRINT "AND NOW GOODBYE FROM THE OLYMPIC ARENA."
    0x5f14d9545240 ---------A   01100 PRINT
    0x5f14d9545290 ---------A   01110 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00090      00110T
     00225      00221T
     00230      00222T
     00290      00271T
     00300      00400T, 00440T, 00490T, 00510T, 00565T, 00590T, 00670T, 00710T, 
                00760T, 00800T, 00910T, 00940T
     00310      00280T
     00340      00230T
     00410      00341T, 00350T
     00450      00240T
     00480      00455T
     00500      00470T
     00520      00250T
     00570      00530T, 00550T
     00600      00200T
     00605      00601T
     00610      00602T
     00690      00655T
     00700      00645T
     00720      00610T
     00770      00730T, 00745T
     00810      00620T
     00860      00630T
     00890      00865T
     00920      00880T
     00950      00300T, 00330T, 00375T
     00955      00951T
     00960      00954T
     00980      00420T
     01000      01030T, 01050T, 01070T
     01010      00780T, 00840T
     01040      00140T, 00961T
     01060      00150T, 00962T
     01080      01000T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5f14d9529ac0 (00001)   0x000000000000 (00000)   0x5f14d9545290 (01110)   0x5f14d9545290 (01110)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02420 - 10000    7590 

 */



/*
 *  Symbol Table Listing for 'basic/boxing.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
    B1                       Float       
    C                        Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Float       
    D1                       Float       
    D5                       Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H1                       Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    J$                       String      
    J7                       Float       
    L                        Float       
    L$                       String      
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
    P                        Float       
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q4                       Float       
    R                        Float       
    R1                       Float       
    R6                       Float       
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
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    X3                       Float       
    Y                        Float       
    Z4                       Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/boxing.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f14d9529ac0 ---------A   01000 PRINT TAB(33);"BOXING"
    0x5f14d952ae70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f14d95192b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5f14d9528960 ---------A   01030 PRINT "BOXING OLYMPIC STYLE (3 ROUNDS -- 2 OUT OF 3 WINS)"
    0x5f14d9528fc0 ---------A   01040 J=0
    0x5f14d952a680 ---------A   01050 L=0
    0x5f14d9529440 ---------A   01060 PRINT
    0x5f14d952b140 ---------A   01070 PRINT "WHAT IS YOUR OPPONENT'S NAME";
    0x5f14d9528610 ---------A   01080 INPUT J$
    0x5f14d9528d80 ---------A   01090 PRINT "INPUT YOUR MAN'S NAME";
    0x5f14d9530900 ---------A   01100 INPUT L$
    0x5f14d9530a80 ---------A   01110 PRINT "DIFFERENT PUNCHES ARE: (1) FULL SWING; (2) HOOK; (3) UPPERCUT; (4) JAB."
    0x5f14d9530b90 ---------A   01120 PRINT "WHAT IS YOUR MANS BEST";
    0x5f14d9530d40 ---------A   01130 INPUT B
    0x5f14d9530e60 ---------A   01140 PRINT "WHAT IS HIS VULNERABILITY";
    0x5f14d9531070 ---------A   01150 INPUT D
    0x5f14d9531710 ---------A T 01160 B1=INT(4*RND(1)+1)
    0x5f14d9531da0 ---------A   01170 D1=INT(4*RND(1)+1)
    0x5f14d9532040 ---------A   01180 IF B1=D1 THEN 1160
    0x5f14d95324d0 ---------A   01190 PRINT J$;"'S ADVANTAGE IS";B1;"AND VULNERABILITY IS SECRET.":PRINT
    0x5f14d9532860 ---------A   01200 FOR R=1 TO 3
    0x5f14d9532ac0 ---------A   01210 IF J>= 2 THEN 2330
    0x5f14d9532d20 ---------A   01220 IF L>=2 THEN 2350
    0x5f14d9533000 ---------A   01230 X=0
    0x5f14d95332b0 ---------A   01240 Y=0
    0x5f14d9533600 ---------A   01250 PRINT "ROUND";R;"BEGINS..."
    0x5f14d9533990 ---------A   01260 FOR R1= 1 TO 7
    0x5f14d9534030 ---------A   01270 I=INT(10*RND(1)+1)
    0x5f14d9534290 ---------A   01280 IF I>5 THEN 1770
    0x5f14d9534510 ---------A   01290 PRINT L$;"'S PUNCH";
    0x5f14d9534720 ---------A   01300 INPUT P
    0x5f14d95349a0 ---------A   01310 IF P=B THEN 1330
    0x5f14d9534a20 ---------A   01320 GOTO 1340
    0x5f14d9534f50 ---------A T 01330 X=X+2
    0x5f14d95351a0 ---------A T 01340 IF P=1 THEN 1450
    0x5f14d9535400 ---------A   01350 IF P=2 THEN 1590
    0x5f14d9535670 ---------A   01360 IF P=3 THEN 1680
    0x5f14d9535af0 ---------A   01370 PRINT L$;" JABS AT ";J$"'S HEAD ";
    0x5f14d9535d40 ---------A   01380 IF D1=4 THEN 1410
    0x5f14d95363e0 ---------A   01390 C=INT(8*RND(1)+1)
    0x5f14d9536630 ---------A   01400 IF C<4 THEN 1430
    0x5f14d9536970 ---------A T 01410 X=X+3
    0x5f14d95369f0 ---------A T 01420 GOTO 2190
    0x5f14d9536b30 ---------A T 01430 PRINT "IT'S BLOCKED."
    0x5f14d9536bb0 ---------A   01440 GOTO 2190
    0x5f14d9536e10 ---------A T 01450 PRINT L$ " SWINGS AND ";
    0x5f14d9537060 ---------A   01460 IF D1=4 THEN 1550
    0x5f14d9537700 ---------A   01470 X3=INT(30*RND(1)+1)
    0x5f14d9537950 ---------A   01480 IF X3<10 THEN 1550
    0x5f14d9537ad0 ---------A   01490 PRINT "HE MISSES ";
    0x5f14d9537b40 ---------A   01500 PRINT
    0x5f14d9537d90 ---------A   01510 IF X=1 THEN 2190
    0x5f14d9537e10 ---------A   01520 PRINT
    0x5f14d9537e80 ---------A   01530 PRINT
    0x5f14d9537f00 ---------A   01540 GOTO 1420
    0x5f14d9538040 ---------A T 01550 PRINT "HE CONNECTS!"
    0x5f14d9538290 ---------A   01560 IF X>35 THEN 2290
    0x5f14d95385d0 ---------A   01570 X=X+15
    0x5f14d9538650 ---------A   01580 GOTO 1420
    0x5f14d95388b0 ---------A T 01590 PRINT L$;" GIVES THE HOOK... ";
    0x5f14d9538b00 ---------A   01600 IF D1=2 THEN 1640
    0x5f14d95391a0 ---------A   01610 H1=INT(2*RND(1)+1)
    0x5f14d95393f0 ---------A   01620 IF H1=1 THEN 1660
    0x5f14d9539550 ---------A   01630 PRINT "CONNECTS..."
    0x5f14d9539880 ---------A T 01640 X=X+7
    0x5f14d9539d20 ---------A   01650 GOTO 1420
    0x5f14d9539e70 ---------A T 01660 PRINT "BUT IT'S BLOCKED!!!!!!!!!!!!!"
    0x5f14d9539ef0 ---------A   01670 GOTO 1420
    0x5f14d953a150 ---------A T 01680 PRINT L$ " TRIES AN UPPERCUT ";
    0x5f14d953a3b0 ---------A   01690 IF D1=3 THEN 1740
    0x5f14d953aa50 ---------A   01700 D5=INT(100*RND(1)+1)
    0x5f14d953acc0 ---------A   01710 IF D5<51 THEN 1740
    0x5f14d953ae30 ---------A   01720 PRINT "AND IT'S BLOCKED (LUCKY BLOCK!)"
    0x5f14d953aeb0 ---------A   01730 GOTO 1420
    0x5f14d953aff0 ---------A T 01740 PRINT "AND HE CONNECTS!"
    0x5f14d953b320 ---------A   01750 X=X+4
    0x5f14d953b390 ---------A   01760 GOTO 1420
    0x5f14d953ba10 ---------A T 01770 J7=INT(4*RND(1)+1)
    0x5f14d953bc80 ---------A   01780 IF J7 =B1 THEN 1800
    0x5f14d953bd00 ---------A   01790 GOTO 1810
    0x5f14d953c020 ---------A T 01800 Y=Y+2
    0x5f14d953c270 ---------A T 01810 IF J7=1 THEN 1930
    0x5f14d953c4d0 ---------A   01820 IF J7=2 THEN 2030
    0x5f14d953c740 ---------A   01830 IF J7 =3 THEN 2090
    0x5f14d953c9c0 ---------A   01840 PRINT J$;" JABS AND ";
    0x5f14d953cc10 ---------A   01850 IF D=4 THEN 1910
    0x5f14d953d2b0 ---------A   01860 Z4=INT(7*RND(1)+1)
    0x5f14d953d510 ---------A   01870 IF Z4>4 THEN 1900
    0x5f14d953d670 ---------A   01880 PRINT "IT'S BLOCKED!"
    0x5f14d953d6f0 ---------A   01890 GOTO 1420
    0x5f14d953d830 ---------A T 01900 PRINT " BLOOD SPILLS !!!"
    0x5f14d953db60 ---------A T 01910 Y=Y+5
    0x5f14d953dbe0 ---------A   01920 GOTO 1420
    0x5f14d953de50 ---------A T 01930 PRINT J$" TAKES A FULL SWING AND";
    0x5f14d953e0a0 ---------A   01940 IF D=1 THEN 1990
    0x5f14d953e740 ---------A   01950 R6=INT(60*RND(1)+1)
    0x5f14d953e9a0 ---------A   01960 IF R6 <30 THEN 1990
    0x5f14d953eb00 ---------A   01970 PRINT " IT'S BLOCKED!"
    0x5f14d953eb90 ---------A   01980 GOTO 1420
    0x5f14d953ecf0 ---------A T 01990 PRINT " POW!!!!! HE HITS HIM RIGHT IN THE FACE!"
    0x5f14d953ef40 ---------A   02000 IF Y>35 THEN 2310
    0x5f14d953f280 ---------A   02010 Y=Y+15
    0x5f14d953f310 ---------A   02020 GOTO 1420
    0x5f14d953f750 ---------A T 02030 PRINT J$;" GETS ";L$;" IN THE JAW (OUCH!)"
    0x5f14d953fa90 ---------A   02040 Y=Y+7
    0x5f14d953fbe0 ---------A   02050 PRINT "....AND AGAIN!"
    0x5f14d953ff10 ---------A   02060 Y=Y+5
    0x5f14d9540160 ---------A   02070 IF Y>35 THEN 2310
    0x5f14d9540200 ---------A   02080 PRINT
    0x5f14d9540470 ---------A T 02090 PRINT L$;" IS ATTACKED BY AN UPPERCUT (OH,OH)..."
    0x5f14d95406d0 ---------A   02100 IF D=3 THEN 2130
    0x5f14d9540d70 ---------A   02110 Q4=INT(200*RND(1)+1)
    0x5f14d9540fd0 ---------A   02120 IF Q4>75 THEN 2160
    0x5f14d9541330 ---------A T 02130 PRINT "AND ";J$;" CONNECTS..."
    0x5f14d9541660 ---------A   02140 Y=Y+8
    0x5f14d95416f0 ---------A   02150 GOTO 1420
    0x5f14d9541a30 ---------A T 02160 PRINT " BLOCKS AND HITS ";J$;" WITH A HOOK."
    0x5f14d9541d60 ---------A   02170 X=X+5
    0x5f14d9541dd0 ---------A   02180 GOTO 1420
    0x5f14d9541ef0 ---------A T 02190 NEXT R1
    0x5f14d9542180 ---------A   02200 IF X>Y THEN 2240
    0x5f14d9542530 ---------A   02210 PRINT:PRINT J$" WINS ROUND" R
    0x5f14d9542860 ---------A   02220 J=J+1
    0x5f14d95428e0 ---------A   02230 GOTO 2260
    0x5f14d9542c70 ---------A T 02240 PRINT:PRINT L$" WINS ROUND"R
    0x5f14d9542fa0 ---------A   02250 L=L+1
    0x5f14d95430d0 ---------A T 02260 NEXT R
    0x5f14d9543330 ---------A   02270 IF J>= 2 THEN 2330
    0x5f14d95435c0 ---------A   02280 IF L>=2 THEN 2350
    0x5f14d9544260 ---------A T 02290 PRINT J$ " IS KNOCKED COLD AND " L$" IS THE WINNER AND CHAMP!";
    0x5f14d9544300 ---------A T 02300 GOTO 2370
    0x5f14d9544770 ---------A T 02310 PRINT L$ " IS KNOCKED COLD AND " J$" IS THE WINNER AND CHAMP!";
    0x5f14d9544800 ---------A   02320 GOTO 2300
    0x5f14d9544c40 ---------A T 02330 PRINT J$ " WINS (NICE GOING," J$;")."
    0x5f14d9544cc0 ---------A   02340 GOTO 2300
    0x5f14d9544f00 ---------A T 02350 PRINT L$ " AMAZINGLY WINS!!"
    0x5f14d9544f70 ---------A   02360 GOTO 2300
    0x5f14d9544fd0 ---------A T 02370 PRINT
    0x5f14d9545060 ---------A   02380 PRINT
    0x5f14d95451d0 ---------A   02390 PRINT "AND NOW GOODBYE FROM THE OLYMPIC ARENA."
    0x5f14d9545240 ---------A   02400 PRINT
    0x5f14d9545290 ---------A   02410 END
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
float  B_flt;                                     // Basic: B 
float  B1_flt;                                    // Basic: B1 
float  C_flt;                                     // Basic: C 
float  D_flt;                                     // Basic: D 
float  D1_flt;                                    // Basic: D1 
float  D5_flt;                                    // Basic: D5 
float  H1_flt;                                    // Basic: H1 
float  I_flt;                                     // Basic: I 
float  J_flt;                                     // Basic: J 
char*  J_str;                                     // Basic: J$ 
float  J7_flt;                                    // Basic: J7 
float  L_flt;                                     // Basic: L 
char*  L_str;                                     // Basic: L$ 
float  P_flt;                                     // Basic: P 
float  Q4_flt;                                    // Basic: Q4 
float  R_flt;                                     // Basic: R 
float  R1_flt;                                    // Basic: R1 
float  R6_flt;                                    // Basic: R6 
float  X_flt;                                     // Basic: X 
float  X3_flt;                                    // Basic: X3 
float  Y_flt;                                     // Basic: Y 
float  Z4_flt;                                    // Basic: Z4 
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
