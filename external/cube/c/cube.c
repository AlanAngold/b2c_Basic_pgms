/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/cube.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5eae846ebb80 ---------A   00010 PRINT TAB(34);"CUBE"
    0x5eae846eced0 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5eae846eb2d0 ---------A   00030 PRINT : PRINT : PRINT
    0x5eae846db2f0 ---------A   00100 PRINT "DO YOU WANT TO SEE THE INSTRUCTIONS? (YES--1,NO--0)"
    0x5eae846ea6d0 ---------A   00110 INPUT B7
    0x5eae846ea670 ---------A   00120 IF B7=0 THEN 370
    0x5eae846ec690 ---------A   00130 PRINT"THIS IS A GAME IN WHICH YOU WILL BE PLAYING AGAINST THE"
    0x5eae846ed0a0 ---------A   00140 PRINT"RANDOM DECISION OF THE COMPUTER. THE FIELD OF PLAY IS A"
    0x5eae846eb670 ---------A   00150 PRINT"CUBE OF SIDE 3. ANY OF THE 27 LOCATIONS CAN BE DESIGNATED"
    0x5eae846eb7d0 ---------A   00160 PRINT"BY INPUTING THREE NUMBERS SUCH AS 2,3,1. AT THE START,"
    0x5eae846f2910 ---------A   00170 PRINT"YOU ARE AUTOMATICALLY AT LOCATION 1,1,1. THE OBJECT OF"
    0x5eae846f2ac0 ---------A   00180 PRINT"THE GAME IS TO GET TO LOCATION 3,3,3. ONE MINOR DETAIL:"
    0x5eae846f2c70 ---------A   00190 PRINT"THE COMPUTER WILL PICK, AT RANDOM, 5 LOCATIONS AT WHICH"
    0x5eae846f2e20 ---------A   00200 PRINT"IT WILL PLANT LAND MINES. IF YOU HIT ONE OF THESE LOCATIONS"
    0x5eae846f2fd0 ---------A   00210 PRINT"YOU LOSE. ONE OTHER DETAIL: YOU MAY MOVE ONLY ONE SPACE "
    0x5eae846f3180 ---------A   00220 PRINT"IN ONE DIRECTION EACH MOVE. FOR  EXAMPLE: FROM 1,1,2 YOU"
    0x5eae846f3320 ---------A   00230 PRINT"MAY MOVE TO 2,1,2 OR 1,1,3. YOU MAY NOT CHANGE"
    0x5eae846f34d0 ---------A   00240 PRINT"TWO OF THE NUMBERS ON THE SAME MOVE. IF YOU MAKE AN ILLEGAL"
    0x5eae846f3630 ---------A   00250 PRINT"MOVE, YOU LOSE AND THE COMPUTER TAKES THE MONEY YOU MAY"
    0x5eae846f3740 ---------A   00260 PRINT"HAVE BET ON THAT ROUND."
    0x5eae846f3790 ---------A   00270 PRINT
    0x5eae846f3830 ---------A   00280 PRINT
    0x5eae846f3990 ---------A   00290 PRINT"ALL YES OR NO QUESTIONS WILL BE ANSWERED BY A 1 FOR YES"
    0x5eae846f3aa0 ---------A   00300 PRINT"OR A 0 (ZERO) FOR NO."
    0x5eae846f3b40 ---------A   00310 PRINT
    0x5eae846f3d00 ---------A   00320 PRINT"WHEN STATING THE AMOUNT OF A WAGER, PRINT ONLY THE NUMBER"
    0x5eae846f3e60 ---------A   00330 PRINT"OF DOLLARS (EXAMPLE: 250)  YOU ARE AUTOMATICALLY STARTED WITH"
    0x5eae846f3f70 ---------A   00340 PRINT"500 DOLLARS IN YOUR ACCOUNT."
    0x5eae846f3fc0 ---------A   00350 PRINT
    0x5eae846f4110 ---------A   00360 PRINT "GOOD LUCK!"
    0x5eae846f43c0 ---------A T 00370 LET A1=500
    0x5eae846f4a70 ---------A T 00380 LET A=INT(3*(RND(X)))
    0x5eae846f4cc0 ---------A   00390 IF A<>0 THEN 410
    0x5eae846f5100 ---------A   00400 LET A=3
    0x5eae846f56f0 ---------A T 00410 LET B=INT(3*(RND(X)))
    0x5eae846f5940 ---------A   00420 IF B<>0 THEN 440
    0x5eae846f5b70 ---------A   00430 LET B=2
    0x5eae846f6160 ---------A T 00440 LET C=INT(3*(RND(X)))
    0x5eae846f63b0 ---------A   00450 IF C<>0 THEN 470
    0x5eae846f65e0 ---------A   00460 LET C=3
    0x5eae846f6bd0 ---------A T 00470 LET D=INT(3*(RND(X)))
    0x5eae846f6e20 ---------A   00480 IF D<>0 THEN 500
    0x5eae846f7050 ---------A   00490 LET D=1
    0x5eae846f7640 ---------A T 00500 LET E=INT(3*(RND(X)))
    0x5eae846f7890 ---------A   00510 IF E<>0 THEN 530
    0x5eae846f7ac0 ---------A   00520 LET E=3
    0x5eae846f80b0 ---------A T 00530 LET F=INT(3*(RND(X)))
    0x5eae846f8300 ---------A   00540 IF F<>0 THEN 560
    0x5eae846f8530 ---------A   00550 LET F=3
    0x5eae846f8b20 ---------A T 00560 LET G=INT(3*(RND(X)))
    0x5eae846f8d70 ---------A   00570 IF G<>0 THEN 590
    0x5eae846f8fa0 ---------A   00580 LET G=3
    0x5eae846f9590 ---------A T 00590 LET H=INT(3*(RND(X)))
    0x5eae846f97e0 ---------A   00600 IF H<>0 THEN 620
    0x5eae846f9a10 ---------A   00610 LET H=3
    0x5eae846fa000 ---------A T 00620 LET I=INT(3*(RND(X)))
    0x5eae846fa250 ---------A   00630 IF I<>0 THEN 650
    0x5eae846fa480 ---------A   00640 LET I=2
    0x5eae846faa70 ---------A T 00650 LET J=INT(3*(RND(X)))
    0x5eae846facc0 ---------A   00660 IF J<>0 THEN 680
    0x5eae846faef0 ---------A   00670 LET J=3
    0x5eae846fb4e0 ---------A T 00680 LET K=INT(3*(RND(X)))
    0x5eae846fb730 ---------A   00690 IF K<>0 THEN 710
    0x5eae846fb960 ---------A   00700 LET K=2
    0x5eae846fbf50 ---------A T 00710 LET L=INT(3*(RND(X)))
    0x5eae846fc5b0 ---------A   00720 IF L<>0 THEN 740
    0x5eae846fc7e0 ---------A   00730 LET L=3
    0x5eae846fcdd0 ---------A T 00740 LET M=INT(3*(RND(X)))
    0x5eae846fd020 ---------A   00750 IF M<>0 THEN 770
    0x5eae846fd250 ---------A   00760 LET M=3
    0x5eae846fd840 ---------A T 00770 LET N=INT(3*(RND(X)))
    0x5eae846fda90 ---------A   00780 IF N<>0 THEN 800
    0x5eae846fdcc0 ---------A   00790 LET N=1
    0x5eae846fe2b0 ---------A T 00800 LET O=INT (3*(RND(X)))
    0x5eae846fe500 ---------A   00810 IF O <>0 THEN 830
    0x5eae846fe730 ---------A   00820 LET O=3
    0x5eae846fe880 ---------A T 00830 PRINT "WANT TO MAKE A WAGER?"
    0x5eae846fea90 ---------A   00840 INPUT Z
    0x5eae846fecf0 ---------A   00850 IF Z=0 THEN 920
    0x5eae846fee70 ---------A   00860 PRINT "HOW MUCH ";
    0x5eae846ff080 ---------A T 00870 INPUT Z1
    0x5eae846ff300 ---------A   00876 IF A1<Z1 THEN 1522
    0x5eae846ff5e0 ---------A   00880 LET W=1
    0x5eae846ff7f0 ---------A   00890 LET X=1
    0x5eae846ffac0 ---------A   00900 LET Y=1
    0x5eae846ffb40 ---------A   00910 PRINT
    0x5eae846ffcb0 ---------A T 00920 PRINT "IT'S YOUR MOVE:  ";
    0x5eae84700200 ---------A T 00930 INPUT P,Q,R
    0x5eae84700580 ---------A   00940 IF P>W+1 THEN 1030
    0x5eae84700900 ---------A   00950 IF P=W+1 THEN 1000
    0x5eae84700c90 ---------A   00960 IF Q>X+1 THEN 1030
    0x5eae84701060 ---------A   00970 IF Q=(X+1) THEN 1010
    0x5eae84701420 ---------A   00980 IF R >(Y+1)  THEN 1030
    0x5eae847014b0 ---------A   00990 GOTO 1050
    0x5eae84701820 ---------A T 01000 IF Q>= X+1 THEN 1030
    0x5eae84701ba0 ---------A T 01010 IF R>=Y+1 THEN 1030
    0x5eae84701c40 ---------A   01020 GOTO 1050
    0x5eae84701de0 ---------A T 01030 PRINT:PRINT "ILLEGAL MOVE. YOU LOSE."
    0x5eae84701e50 ---------A   01040 GOTO 1440
    0x5eae84702070 ---------A T 01050 LET W=P
    0x5eae847022a0 ---------A   01060 LET X=Q
    0x5eae847024d0 ---------A   01070 LET Y=R
    0x5eae84702720 ---------A   01080 IF P=3 THEN 1100
    0x5eae847027a0 ---------A   01090 GOTO 1130
    0x5eae847029e0 ---------A T 01100 IF  Q=3 THEN 1120
    0x5eae84702a60 ---------A   01110 GOTO 1130
    0x5eae84702ca0 ---------A T 01120 IF R=3 THEN 1530
    0x5eae84702f20 ---------A T 01130 IF P=A THEN 1150
    0x5eae84702fa0 ---------A   01140 GOTO 1180
    0x5eae84703200 ---------A T 01150 IF Q=B THEN 1170
    0x5eae84703280 ---------A   01160 GOTO 1180
    0x5eae847034e0 ---------A T 01170 IF R=C THEN 1400
    0x5eae84703760 ---------A T 01180 IF P=D THEN 1200
    0x5eae847037e0 ---------A   01190 GOTO 1230
    0x5eae84703a40 ---------A T 01200 IF Q=E THEN 1220
    0x5eae84703ac0 ---------A   01210 GOTO 1230
    0x5eae84703d20 ---------A T 01220 IF  R=F THEN 1400
    0x5eae84703fa0 ---------A T 01230 IF P=G THEN 1250
    0x5eae84704020 ---------A   01240 GOTO 1280
    0x5eae84704280 ---------A T 01250 IF Q=H THEN 1270
    0x5eae84704300 ---------A   01260 GOTO 1280
    0x5eae84704560 ---------A T 01270 IF R=I THEN 1400
    0x5eae847047e0 ---------A T 01280 IF P=J THEN 1300
    0x5eae84704860 ---------A   01290 GOTO 1330
    0x5eae84704ac0 ---------A T 01300 IF Q=K THEN 1320
    0x5eae84704b40 ---------A   01310 GOTO 1330
    0x5eae84704da0 ---------A T 01320 IF R=L THEN 1440
    0x5eae84705020 ---------A T 01330 IF P=M THEN 1350
    0x5eae847050a0 ---------A   01340 GOTO 1380
    0x5eae84705b10 ---------A T 01350 IF Q=N THEN 1370
    0x5eae84705b90 ---------A   01360 GOTO 1380
    0x5eae84705e00 ---------A T 01370 IF R=O THEN 1400
    0x5eae84705f80 ---------A T 01380 PRINT "NEXT MOVE: ";
    0x5eae84706000 ---------A   01390 GOTO 930 
    0x5eae84706140 ---------A T 01400 PRINT"******BANG******"
    0x5eae84706290 ---------A   01410 PRINT "YOU LOSE!"
    0x5eae84706300 ---------A   01420 PRINT
    0x5eae84706370 ---------A   01430 PRINT
    0x5eae847065c0 ---------A T 01440 IF   Z=0 THEN 1580
    0x5eae84706640 ---------A   01450 PRINT 
    0x5eae84706a50 ---------A   01460 LET Z2=A1-Z1
    0x5eae84706ca0 ---------A   01470 IF Z2>0 THEN 1500
    0x5eae84706e00 ---------A   01480 PRINT "YOU BUST."
    0x5eae84706e90 ---------A   01490 GOTO 1610
    0x5eae847071d0 ---------A T 01500 PRINT " YOU NOW HAVE"; Z2; "DOLLARS."
    0x5eae84707400 ---------A   01510 LET A1=Z2
    0x5eae84707490 ---------A   01520 GOTO 1580
    0x5eae84707600 ---------A T 01522 PRINT"TRIED TO FOOL ME; BET AGAIN";
    0x5eae84707680 ---------A   01525 GOTO 870
    0x5eae847077c0 ---------A T 01530 PRINT"CONGRATULATIONS!"
    0x5eae84707a10 ---------A   01540 IF Z=0 THEN 1580
    0x5eae84707d90 ---------A   01550 LET Z2=A1+Z1
    0x5eae847080e0 ---------A   01560 PRINT "YOU NOW HAVE"; Z2;"DOLLARS."
    0x5eae84708320 ---------A   01570 LET A1=Z2
    0x5eae847084a0 ---------A T 01580 PRINT"DO YOU WANT TO TRY AGAIN ";
    0x5eae847086b0 ---------A   01590 INPUT S
    0x5eae84708920 ---------A   01600 IF S=1 THEN 380
    0x5eae84708a80 ---------A T 01610 PRINT "TOUGH LUCK!"
    0x5eae84708af0 ---------A   01620 PRINT
    0x5eae84708c40 ---------A   01630 PRINT "GOODBYE."
    0x5eae84708c90 ---------A   01640 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00370      00120T
     00380      01600T
     00410      00390T
     00440      00420T
     00470      00450T
     00500      00480T
     00530      00510T
     00560      00540T
     00590      00570T
     00620      00600T
     00650      00630T
     00680      00660T
     00710      00690T
     00740      00720T
     00770      00750T
     00800      00780T
     00830      00810T
     00870      01525T
     00920      00850T
     00930      01390T
     01000      00950T
     01010      00970T
     01030      00940T, 00960T, 00980T, 01000T, 01010T
     01050      00990T, 01020T
     01100      01080T
     01120      01100T
     01130      01090T, 01110T
     01150      01130T
     01170      01150T
     01180      01140T, 01160T
     01200      01180T
     01220      01200T
     01230      01190T, 01210T
     01250      01230T
     01270      01250T
     01280      01240T, 01260T
     01300      01280T
     01320      01300T
     01330      01290T, 01310T
     01350      01330T
     01370      01350T
     01380      01340T, 01360T
     01400      01170T, 01220T, 01270T, 01370T
     01440      01040T, 01320T
     01500      01470T
     01522      00876T
     01530      01120T
     01580      01440T, 01520T, 01540T
     01610      01490T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5eae846ebb80 (00010)   0x5eae846ebb80 (00010)   0x5eae84708c90 (01640)   0x5eae84708c90 (01640)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02610 - 10000    7400 

 */



/*
 *  Symbol Table Listing for 'basic/cube.bas'
 *
    A                        Integer     
    A1                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B7                       Integer     
    C                        Integer     
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
    K                        Integer     
    L                        Integer     
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
    N                        Integer     
    O                        Integer     
    OCT$            Function String          args=1, float  
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    R                        Integer     
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
    Z1                       Integer     
    Z2                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/cube.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5eae846ebb80 ---------A   01000 PRINT TAB(34);"CUBE"
    0x5eae846eced0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5eae846eb2d0 ---------A   01020 PRINT : PRINT : PRINT
    0x5eae846db2f0 ---------A   01030 PRINT "DO YOU WANT TO SEE THE INSTRUCTIONS? (YES--1,NO--0)"
    0x5eae846ea6d0 ---------A   01040 INPUT B7
    0x5eae846ea670 ---------A   01050 IF B7=0 THEN 1300
    0x5eae846ec690 ---------A   01060 PRINT"THIS IS A GAME IN WHICH YOU WILL BE PLAYING AGAINST THE"
    0x5eae846ed0a0 ---------A   01070 PRINT"RANDOM DECISION OF THE COMPUTER. THE FIELD OF PLAY IS A"
    0x5eae846eb670 ---------A   01080 PRINT"CUBE OF SIDE 3. ANY OF THE 27 LOCATIONS CAN BE DESIGNATED"
    0x5eae846eb7d0 ---------A   01090 PRINT"BY INPUTING THREE NUMBERS SUCH AS 2,3,1. AT THE START,"
    0x5eae846f2910 ---------A   01100 PRINT"YOU ARE AUTOMATICALLY AT LOCATION 1,1,1. THE OBJECT OF"
    0x5eae846f2ac0 ---------A   01110 PRINT"THE GAME IS TO GET TO LOCATION 3,3,3. ONE MINOR DETAIL:"
    0x5eae846f2c70 ---------A   01120 PRINT"THE COMPUTER WILL PICK, AT RANDOM, 5 LOCATIONS AT WHICH"
    0x5eae846f2e20 ---------A   01130 PRINT"IT WILL PLANT LAND MINES. IF YOU HIT ONE OF THESE LOCATIONS"
    0x5eae846f2fd0 ---------A   01140 PRINT"YOU LOSE. ONE OTHER DETAIL: YOU MAY MOVE ONLY ONE SPACE "
    0x5eae846f3180 ---------A   01150 PRINT"IN ONE DIRECTION EACH MOVE. FOR  EXAMPLE: FROM 1,1,2 YOU"
    0x5eae846f3320 ---------A   01160 PRINT"MAY MOVE TO 2,1,2 OR 1,1,3. YOU MAY NOT CHANGE"
    0x5eae846f34d0 ---------A   01170 PRINT"TWO OF THE NUMBERS ON THE SAME MOVE. IF YOU MAKE AN ILLEGAL"
    0x5eae846f3630 ---------A   01180 PRINT"MOVE, YOU LOSE AND THE COMPUTER TAKES THE MONEY YOU MAY"
    0x5eae846f3740 ---------A   01190 PRINT"HAVE BET ON THAT ROUND."
    0x5eae846f3790 ---------A   01200 PRINT
    0x5eae846f3830 ---------A   01210 PRINT
    0x5eae846f3990 ---------A   01220 PRINT"ALL YES OR NO QUESTIONS WILL BE ANSWERED BY A 1 FOR YES"
    0x5eae846f3aa0 ---------A   01230 PRINT"OR A 0 (ZERO) FOR NO."
    0x5eae846f3b40 ---------A   01240 PRINT
    0x5eae846f3d00 ---------A   01250 PRINT"WHEN STATING THE AMOUNT OF A WAGER, PRINT ONLY THE NUMBER"
    0x5eae846f3e60 ---------A   01260 PRINT"OF DOLLARS (EXAMPLE: 250)  YOU ARE AUTOMATICALLY STARTED WITH"
    0x5eae846f3f70 ---------A   01270 PRINT"500 DOLLARS IN YOUR ACCOUNT."
    0x5eae846f3fc0 ---------A   01280 PRINT
    0x5eae846f4110 ---------A   01290 PRINT "GOOD LUCK!"
    0x5eae846f43c0 ---------A T 01300 LET A1=500
    0x5eae846f4a70 ---------A T 01310 LET A=INT(3*(RND(X)))
    0x5eae846f4cc0 ---------A   01320 IF A<>0 THEN 1340
    0x5eae846f5100 ---------A   01330 LET A=3
    0x5eae846f56f0 ---------A T 01340 LET B=INT(3*(RND(X)))
    0x5eae846f5940 ---------A   01350 IF B<>0 THEN 1370
    0x5eae846f5b70 ---------A   01360 LET B=2
    0x5eae846f6160 ---------A T 01370 LET C=INT(3*(RND(X)))
    0x5eae846f63b0 ---------A   01380 IF C<>0 THEN 1400
    0x5eae846f65e0 ---------A   01390 LET C=3
    0x5eae846f6bd0 ---------A T 01400 LET D=INT(3*(RND(X)))
    0x5eae846f6e20 ---------A   01410 IF D<>0 THEN 1430
    0x5eae846f7050 ---------A   01420 LET D=1
    0x5eae846f7640 ---------A T 01430 LET E=INT(3*(RND(X)))
    0x5eae846f7890 ---------A   01440 IF E<>0 THEN 1460
    0x5eae846f7ac0 ---------A   01450 LET E=3
    0x5eae846f80b0 ---------A T 01460 LET F=INT(3*(RND(X)))
    0x5eae846f8300 ---------A   01470 IF F<>0 THEN 1490
    0x5eae846f8530 ---------A   01480 LET F=3
    0x5eae846f8b20 ---------A T 01490 LET G=INT(3*(RND(X)))
    0x5eae846f8d70 ---------A   01500 IF G<>0 THEN 1520
    0x5eae846f8fa0 ---------A   01510 LET G=3
    0x5eae846f9590 ---------A T 01520 LET H=INT(3*(RND(X)))
    0x5eae846f97e0 ---------A   01530 IF H<>0 THEN 1550
    0x5eae846f9a10 ---------A   01540 LET H=3
    0x5eae846fa000 ---------A T 01550 LET I=INT(3*(RND(X)))
    0x5eae846fa250 ---------A   01560 IF I<>0 THEN 1580
    0x5eae846fa480 ---------A   01570 LET I=2
    0x5eae846faa70 ---------A T 01580 LET J=INT(3*(RND(X)))
    0x5eae846facc0 ---------A   01590 IF J<>0 THEN 1610
    0x5eae846faef0 ---------A   01600 LET J=3
    0x5eae846fb4e0 ---------A T 01610 LET K=INT(3*(RND(X)))
    0x5eae846fb730 ---------A   01620 IF K<>0 THEN 1640
    0x5eae846fb960 ---------A   01630 LET K=2
    0x5eae846fbf50 ---------A T 01640 LET L=INT(3*(RND(X)))
    0x5eae846fc5b0 ---------A   01650 IF L<>0 THEN 1670
    0x5eae846fc7e0 ---------A   01660 LET L=3
    0x5eae846fcdd0 ---------A T 01670 LET M=INT(3*(RND(X)))
    0x5eae846fd020 ---------A   01680 IF M<>0 THEN 1700
    0x5eae846fd250 ---------A   01690 LET M=3
    0x5eae846fd840 ---------A T 01700 LET N=INT(3*(RND(X)))
    0x5eae846fda90 ---------A   01710 IF N<>0 THEN 1730
    0x5eae846fdcc0 ---------A   01720 LET N=1
    0x5eae846fe2b0 ---------A T 01730 LET O=INT (3*(RND(X)))
    0x5eae846fe500 ---------A   01740 IF O <>0 THEN 1760
    0x5eae846fe730 ---------A   01750 LET O=3
    0x5eae846fe880 ---------A T 01760 PRINT "WANT TO MAKE A WAGER?"
    0x5eae846fea90 ---------A   01770 INPUT Z
    0x5eae846fecf0 ---------A   01780 IF Z=0 THEN 1860
    0x5eae846fee70 ---------A   01790 PRINT "HOW MUCH ";
    0x5eae846ff080 ---------A T 01800 INPUT Z1
    0x5eae846ff300 ---------A   01810 IF A1<Z1 THEN 2470
    0x5eae846ff5e0 ---------A   01820 LET W=1
    0x5eae846ff7f0 ---------A   01830 LET X=1
    0x5eae846ffac0 ---------A   01840 LET Y=1
    0x5eae846ffb40 ---------A   01850 PRINT
    0x5eae846ffcb0 ---------A T 01860 PRINT "IT'S YOUR MOVE:  ";
    0x5eae84700200 ---------A T 01870 INPUT P,Q,R
    0x5eae84700580 ---------A   01880 IF P>W+1 THEN 1970
    0x5eae84700900 ---------A   01890 IF P=W+1 THEN 1940
    0x5eae84700c90 ---------A   01900 IF Q>X+1 THEN 1970
    0x5eae84701060 ---------A   01910 IF Q=(X+1) THEN 1950
    0x5eae84701420 ---------A   01920 IF R >(Y+1)  THEN 1970
    0x5eae847014b0 ---------A   01930 GOTO 1990
    0x5eae84701820 ---------A T 01940 IF Q>= X+1 THEN 1970
    0x5eae84701ba0 ---------A T 01950 IF R>=Y+1 THEN 1970
    0x5eae84701c40 ---------A   01960 GOTO 1990
    0x5eae84701de0 ---------A T 01970 PRINT:PRINT "ILLEGAL MOVE. YOU LOSE."
    0x5eae84701e50 ---------A   01980 GOTO 2380
    0x5eae84702070 ---------A T 01990 LET W=P
    0x5eae847022a0 ---------A   02000 LET X=Q
    0x5eae847024d0 ---------A   02010 LET Y=R
    0x5eae84702720 ---------A   02020 IF P=3 THEN 2040
    0x5eae847027a0 ---------A   02030 GOTO 2070
    0x5eae847029e0 ---------A T 02040 IF  Q=3 THEN 2060
    0x5eae84702a60 ---------A   02050 GOTO 2070
    0x5eae84702ca0 ---------A T 02060 IF R=3 THEN 2490
    0x5eae84702f20 ---------A T 02070 IF P=A THEN 2090
    0x5eae84702fa0 ---------A   02080 GOTO 2120
    0x5eae84703200 ---------A T 02090 IF Q=B THEN 2110
    0x5eae84703280 ---------A   02100 GOTO 2120
    0x5eae847034e0 ---------A T 02110 IF R=C THEN 2340
    0x5eae84703760 ---------A T 02120 IF P=D THEN 2140
    0x5eae847037e0 ---------A   02130 GOTO 2170
    0x5eae84703a40 ---------A T 02140 IF Q=E THEN 2160
    0x5eae84703ac0 ---------A   02150 GOTO 2170
    0x5eae84703d20 ---------A T 02160 IF  R=F THEN 2340
    0x5eae84703fa0 ---------A T 02170 IF P=G THEN 2190
    0x5eae84704020 ---------A   02180 GOTO 2220
    0x5eae84704280 ---------A T 02190 IF Q=H THEN 2210
    0x5eae84704300 ---------A   02200 GOTO 2220
    0x5eae84704560 ---------A T 02210 IF R=I THEN 2340
    0x5eae847047e0 ---------A T 02220 IF P=J THEN 2240
    0x5eae84704860 ---------A   02230 GOTO 2270
    0x5eae84704ac0 ---------A T 02240 IF Q=K THEN 2260
    0x5eae84704b40 ---------A   02250 GOTO 2270
    0x5eae84704da0 ---------A T 02260 IF R=L THEN 2380
    0x5eae84705020 ---------A T 02270 IF P=M THEN 2290
    0x5eae847050a0 ---------A   02280 GOTO 2320
    0x5eae84705b10 ---------A T 02290 IF Q=N THEN 2310
    0x5eae84705b90 ---------A   02300 GOTO 2320
    0x5eae84705e00 ---------A T 02310 IF R=O THEN 2340
    0x5eae84705f80 ---------A T 02320 PRINT "NEXT MOVE: ";
    0x5eae84706000 ---------A   02330 GOTO 1870 
    0x5eae84706140 ---------A T 02340 PRINT"******BANG******"
    0x5eae84706290 ---------A   02350 PRINT "YOU LOSE!"
    0x5eae84706300 ---------A   02360 PRINT
    0x5eae84706370 ---------A   02370 PRINT
    0x5eae847065c0 ---------A T 02380 IF   Z=0 THEN 2540
    0x5eae84706640 ---------A   02390 PRINT 
    0x5eae84706a50 ---------A   02400 LET Z2=A1-Z1
    0x5eae84706ca0 ---------A   02410 IF Z2>0 THEN 2440
    0x5eae84706e00 ---------A   02420 PRINT "YOU BUST."
    0x5eae84706e90 ---------A   02430 GOTO 2570
    0x5eae847071d0 ---------A T 02440 PRINT " YOU NOW HAVE"; Z2; "DOLLARS."
    0x5eae84707400 ---------A   02450 LET A1=Z2
    0x5eae84707490 ---------A   02460 GOTO 2540
    0x5eae84707600 ---------A T 02470 PRINT"TRIED TO FOOL ME; BET AGAIN";
    0x5eae84707680 ---------A   02480 GOTO 1800
    0x5eae847077c0 ---------A T 02490 PRINT"CONGRATULATIONS!"
    0x5eae84707a10 ---------A   02500 IF Z=0 THEN 2540
    0x5eae84707d90 ---------A   02510 LET Z2=A1+Z1
    0x5eae847080e0 ---------A   02520 PRINT "YOU NOW HAVE"; Z2;"DOLLARS."
    0x5eae84708320 ---------A   02530 LET A1=Z2
    0x5eae847084a0 ---------A T 02540 PRINT"DO YOU WANT TO TRY AGAIN ";
    0x5eae847086b0 ---------A   02550 INPUT S
    0x5eae84708920 ---------A   02560 IF S=1 THEN 1310
    0x5eae84708a80 ---------A T 02570 PRINT "TOUGH LUCK!"
    0x5eae84708af0 ---------A   02580 PRINT
    0x5eae84708c40 ---------A   02590 PRINT "GOODBYE."
    0x5eae84708c90 ---------A   02600 END
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
int    A1_int;                                    // Basic: A1 
int    B_int;                                     // Basic: B 
int    B7_int;                                    // Basic: B7 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    O_int;                                     // Basic: O 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
int    Z2_int;                                    // Basic: Z2 
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
