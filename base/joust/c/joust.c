/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/joust.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x625cdae57d50 ---------A   01000 RANDOMIZE
    0x625cdae56b80 ---------A   01010 PRINT TAB(26);"JOUST"
    0x625cdae57ed0 ---------A   01020 PRINT TAB(20);"CREATIVE COMPUTING"
    0x625cdae57e10 ---------A   01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x625cdae57f90 ---------A   01040 PRINT
    0x625cdae57580 ---------A   01050 PRINT
    0x625cdae571b0 ---------A   01060 PRINT
    0x625cdae57a40 ---------A   01070 PRINT"WHAT IS YOUR NAME, PLEASE";
    0x625cdae556d0 ---------A   01080 INPUT A$
    0x625cdae58050 ---------A   01085 PRINT
    0x625cdae580f0 ---------A   01090 PRINT"SIR ";A$;" YOU ARE A MEDIEVAL KNIGHT IN A JOUSTING TOURNAMENT."
    0x625cdae566a0 ---------A   01100 PRINT"THE PRIZE TO THE WINNER IS THE PRINCESS' HAND IN MARRIAGE."
    0x625cdae56840 ---------A   01110 PRINT"TO WIN, YOU MUST BEAT FOUR OTHER KNIGHTS."
    0x625cdae5d960 ---------A   01120 PRINT"TO JOUST, YOU PICK AN AIMING POINT FOR THE LANCE,"
    0x625cdae5dac0 ---------A   01130 PRINT"AND THEN ONE OF FROM 3 TO 6 DIFFERENT POSSIBLE DEFENCE POSITIONS."
    0x625cdae5dbd0 ---------A   01140 PRINT"THE AIMING POINTS ARE:"
    0x625cdae5dce0 ---------A   01150 PRINT"1 - HELM"
    0x625cdae5de50 ---------A   01160 PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x625cdae5dfb0 ---------A   01170 PRINT"3 - UPPER MIDDLE"
    0x625cdae5e110 ---------A   01180 PRINT"4 - UPPER RIGHT"
    0x625cdae5e270 ---------A   01190 PRINT"5 - LOWER LEFT"
    0x625cdae5e3d0 ---------A   01200 PRINT"6 - LOWER MIDDLE"
    0x625cdae5e530 ---------A   01210 PRINT"7 - LOWER RIGHT"
    0x625cdae5e680 ---------A   01220 PRINT"8 - BASE OF SHIELD"
    0x625cdae5e730 ---------A   01230 PRINT
    0x625cdae5e8c0 ---------A   01240 PRINT"IF YOU BREAK A LANCE OR LOSE A HELM, YOU WILL BE GIVEN ANOTHER."
    0x625cdae5ea10 ---------A   01250 PRINT"GOOD LUCK, SIR!"
    0x625cdae5ea80 ---------A T 01260 PRINT
    0x625cdae5ee20 ---------A   01270 FOR A = 1 TO 4
    0x625cdae5f290 ---------A   01280 ON A GOTO 1310,1330,1350,1370
    0x625cdae5f310 ---------A   01290 REM OFF YOU GO TO THE FOUR JOUSTS
    0x625cdae5f3e0 ---------A   01300 REM ------------------------------------------------
    0x625cdae5f5b0 ---------A T 01310 PRINT"THIS IS YOUR FIRST JOUST. YOU ARE UP AGAINST THE GOLD KNIGHT."
    0x625cdae5f870 ---------A   01320 GOTO 1390
    0x625cdae5f9e0 ---------A T 01330 PRINT"THIS IS YOUR SECOND JOUST. YOUR OPPONENT IS THE SILVER KNIGHT."
    0x625cdae5fa90 ---------A   01340 GOTO 1390
    0x625cdae5fc00 ---------A T 01350 PRINT"YOU ARE DOING WELL! YOUR THIRD JOUST IS AGAINST THE RED KNIGHT."
    0x625cdae5fca0 ---------A   01360 GOTO 1390
    0x625cdae5fe50 ---------A T 01370 PRINT"THIS IS YOUR FINAL TEST!! IF YOU WIN THIS ONE, THE PRINCESS"
    0x625cdae60000 ---------A   01380 PRINT"IS YOURS!!! THIS FIGHT IS AGAINST THE FIERCE BLACK KNIGHT!!!!"
    0x625cdae60190 ---------A T 01390 PRINT "YOUR AIMING POINT(1-8) OR 0 {ZERO} FOR HELP";
    0x625cdae603a0 ---------A   01400 INPUT B
    0x625cdae60600 ---------A   01405 IF B = 0 THEN 2530
    0x625cdae60860 ---------A   01410 IF B < 1 THEN 1390
    0x625cdae60ae0 ---------A   01420 IF B > 8 THEN 1390
    0x625cdae60c70 ---------A   01430 PRINT"YOU MAY USE ONE OF THESE DEFENCES:"
    0x625cdae613f0 ---------A   01440 ON B  GOTO 1450,1470,1490,1520,1450,1490,1450,1540
    0x625cdae61560 ---------A T 01450 PRINT" 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x625cdae61610 ---------A   01460 GOTO 1550
    0x625cdae61780 ---------A T 01470 PRINT" 3 -LEFT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x625cdae61830 ---------A   01480 GOTO 1550
    0x625cdae619c0 ---------A T 01490 PRINT"1 - LOWER HELM, 2 - RIGHT LEAN, 3 - LEFT LEAN, 4 - STEADY SEAT,"
    0x625cdae61b20 ---------A   01500 PRINT" 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x625cdae61bd0 ---------A   01510 GOTO 1550
    0x625cdae61d40 ---------A T 01520 PRINT"2 - RIGHT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x625cdae61df0 ---------A   01530 GOTO 1550
    0x625cdae61f70 ---------A T 01540 PRINT"1 - LOWER HELM, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x625cdae620e0 ---------A T 01550 PRINT"WHAT IS YOUR CHOICE";
    0x625cdae622f0 ---------A   01560 INPUT C
    0x625cdae629b0 ---------A   01570 D=INT(RND(1)*8)+1
    0x625cdae63120 ---------A   01580 ON D GOTO 1590,1600,1610,1620,1630,1640,1650,1660
    0x625cdae63710 ---------A T 01590 ON C GOTO 1670,1670,1670,1730,1790,1670
    0x625cdae63d00 ---------A T 01600 ON C GOTO 1790,1760,1670,1760,1760,1670
    0x625cdae642f0 ---------A T 01610 ON C GOTO 1820,1790,1700,1760,1880,1850
    0x625cdae648e0 ---------A T 01620 ON C GOTO 1700,1670,1760,1700,1700,1790
    0x625cdae652e0 ---------A T 01630 ON C GOTO 1760,1880,1670,1760,1670,1760
    0x625cdae658d0 ---------A T 01640 ON C GOTO 1880,1700,1760,1880,1820,1760
    0x625cdae65ec0 ---------A T 01650 ON C GOTO 1700,1670,1880,1700,1700,1700
    0x625cdae664a0 ---------A T 01660 ON C GOTO 1760,1700,1820,1760,1820,1760
    0x625cdae665f0 ---------A T 01670 PRINT"HE MISSED YOU!"
    0x625cdae668c0 ---------A   01680 S=0
    0x625cdae66950 ---------A   01690 GOTO 1900
    0x625cdae66aa0 ---------A T 01700 PRINT"HE HIT YOUR SHIELD BUT IT GLANCED OFF"
    0x625cdae66cb0 ---------A   01710 S=0
    0x625cdae66d30 ---------A   01720 GOTO 1900
    0x625cdae66e80 ---------A T 01730 PRINT"HE KNOCKED OFF YOUR HELM"
    0x625cdae67090 ---------A   01740 S=0
    0x625cdae67110 ---------A   01750 GOTO 1900
    0x625cdae67250 ---------A T 01760 PRINT"HE BROKE HIS LANCE."
    0x625cdae67460 ---------A   01770 S=0
    0x625cdae674e0 ---------A   01780 GOTO 1900
    0x625cdae67630 ---------A T 01790 PRINT"HE HAS UNSEATED YOU(THUD!)"
    0x625cdae67840 ---------A   01800 S=5
    0x625cdae678e0 ---------A   01810 GOTO 1900
    0x625cdae67a50 ---------A T 01820 PRINT"HE HAS BROKEN HIS LANCE, INJURED AND UNSEATED YOU (OUCH!)"
    0x625cdae67c60 ---------A   01830 S=5
    0x625cdae67cf0 ---------A   01840 GOTO 1900
    0x625cdae67e50 ---------A T 01850 PRINT"HE HAS INJURED AND UNSEATED YOU (CRASH!)"
    0x625cdae68060 ---------A   01860 S=5
    0x625cdae68100 ---------A   01870 GOTO 1900
    0x625cdae68260 ---------A T 01880 PRINT"HE HAS BROKEN HIS LANCE AND UNSEATED YOU (CLANG!)"
    0x625cdae68470 ---------A   01890 S=5
    0x625cdae68b20 ---------A T 01900 E=INT(RND(1)*6)+1
    0x625cdae69270 ---------A   01910 ON D GOTO 1920,1940,1960,1970,1920,1960,1920,2000
    0x625cdae694c0 ---------A T 01920 IF E<4 THEN 1900
    0x625cdae69540 ---------A   01930 GOTO 2020
    0x625cdae69780 ---------A T 01940 IF E<3 THEN 1900
    0x625cdae69800 ---------A   01950 GOTO 2020
    0x625cdae69860 ---------A T 01960 GOTO 2020
    0x625cdae69aa0 ---------A T 01970 IF E=1 THEN 1900
    0x625cdae69d00 ---------A   01980 IF E=3 THEN 1900
    0x625cdae69d80 ---------A   01990 GOTO 2020
    0x625cdae69fc0 ---------A T 02000 IF E=2 THEN 1900
    0x625cdae6a240 ---------A   02010 IF E=3 THEN 1900
    0x625cdae6a840 ---------A T 02020 ON E GOTO 2030,2040,2050,2060,2070,2080
    0x625cdae6afb0 ---------A T 02030 ON B GOTO 2090,2210,2240,2120,2180,2300,2120,2180
    0x625cdae6b720 ---------A T 02040 ON B GOTO 2090,2180,2210,2090,2300,2120,2090,2120
    0x625cdae6be90 ---------A T 02050 ON B GOTO 2090,2090,2120,2180,2090,2180,2300,2210
    0x625cdae6c600 ---------A T 02060 ON B GOTO 2150,2180,2180,2120,2180,2300,2120,2180
    0x625cdae6cd70 ---------A T 02070 ON B GOTO 2210,2180,2300,2120,2090,2240,2120,2240
    0x625cdae6d4d0 ---------A T 02080 ON B GOTO 2090,2090,2270,2210,2180,2180,2120,2180
    0x625cdae6d630 ---------A T 02090 PRINT"YOU MISSED HIM (HISS!)"
    0x625cdae6d900 ---------A   02100 T=0
    0x625cdae6d990 ---------A   02110 GOTO 2330
    0x625cdae6dae0 ---------A T 02120 PRINT"YOU HIT HIS SHIELD BUT GLANCED OFF."
    0x625cdae6dcf0 ---------A   02130 T=0
    0x625cdae6dd80 ---------A   02140 GOTO 2330
    0x625cdae6ded0 ---------A T 02150 PRINT"YOU KNOCKED OFF HIS HELM (CHEERS!)"
    0x625cdae6e0e0 ---------A   02160 T=0
    0x625cdae6e170 ---------A   02170 GOTO 2330
    0x625cdae6e2c0 ---------A T 02180 PRINT"YOU BROKE YOUR LANCE (CRACK...!)"
    0x625cdae6e4d0 ---------A   02190 T=0
    0x625cdae6e560 ---------A   02200 GOTO 2330
    0x625cdae6e6c0 ---------A T 02210 PRINT"YOU UNSEATED HIM(LOUD CHEERS AND MUZZAMS!!)"
    0x625cdae6e8d0 ---------A   02220 T=5
    0x625cdae6e970 ---------A   02230 GOTO 2330
    0x625cdae6eae0 ---------A T 02240 PRINT"YOU BROKE YOUR LANCE, BUT UNSEATED AND INJURED YOUR FOE."
    0x625cdae6ecf0 ---------A   02250 T=5
    0x625cdae6ed80 ---------A   02260 GOTO 2330
    0x625cdae6f6f0 ---------A T 02270 PRINT"YOU INJURED AND UNSEATED YOUR OPPONENT."
    0x625cdae6f900 ---------A   02280 T=5
    0x625cdae6f9a0 ---------A   02290 GOTO 2330
    0x625cdae6fb00 ---------A T 02300 PRINT"YOU BROKE YOUR LANCE BUT UNSEATED YOUR OPPONENT."
    0x625cdae6fd10 ---------A   02310 T=5
    0x625cdae6fd80 ---------A   02320 GOTO 2330
    0x625cdae6ffe0 ---------A T 02330 IF S = T THEN 2350
    0x625cdae70060 ---------A   02340 GOTO 2360
    0x625cdae702a0 ---------A T 02350 IF S = 0 THEN 2480
    0x625cdae70500 ---------A T 02360 IF S = T GOTO 2460
    0x625cdae70780 ---------A   02370 IF S < T GOTO 2390
    0x625cdae70a30 ---------A   02380 IF S > T THEN 2440
    0x625cdae70ba0 ---------A T 02390 PRINT"YOU HAVE WON THIS JOUST."
    0x625cdae70c10 ---------A   02400 PRINT
    0x625cdae70c80 ---------A   02410 GOTO 2420
    0x625cdae70da0 ---------A T 02420 NEXT A
    0x625cdae70e50 ---------A   02430 GOTO 2520
    0x625cdae70fb0 ---------A T 02440 PRINT"TOO BAD, YOU LOST. HOPE YOUR INSURANCE WAS PAID UP."
    0x625cdae71050 ---------A   02450 GOTO 2500
    0x625cdae711c0 ---------A T 02460 PRINT"TOO BAD, YOU BOTH LOST. AT LEAST YOUR HONOUR IS INTACT."
    0x625cdae71240 ---------A   02470 GOTO 2500
    0x625cdae71390 ---------A T 02480 PRINT"YOU ARE READY TO TRY AGAIN."
    0x625cdae71420 ---------A   02490 GOTO 1390
    0x625cdae71590 ---------A T 02500 PRINT"SORRY, BETTER LUCK NEXT JOUST."
    0x625cdae71720 ---------A   02501 PRINT"DO YOU WISH TO JOUST AGAIN ('Y' OR 'N')";
    0x625cdae71940 ---------A   02502 INPUT B$
    0x625cdae71bd0 ---------A   02503 IF B$ = "Y" THEN 1260
    0x625cdae71e50 ---------A   02504 IF B$ = "N" THEN 9990
    0x625cdae71f00 ---------A   02510 GOTO 9999
    0x625cdae72060 ---------A T 02520 PRINT"HOORAY! YOU ARE THE WINNER, HERE COMES THE BRIDE!"
    0x625cdae720e0 ---------A   02525 GOTO 9999
    0x625cdae72230 ---------A T 02530 PRINT"THE AIMING POINTS ARE:"
    0x625cdae72390 ---------A   02540 PRINT"1 - HELM"
    0x625cdae72500 ---------A   02550 PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x625cdae72660 ---------A   02560 PRINT"3 - UPPER MIDDLE"
    0x625cdae727c0 ---------A   02570 PRINT"4 - UPPER RIGHT"
    0x625cdae72920 ---------A   02580 PRINT"5 - LOWER LEFT"
    0x625cdae72a80 ---------A   02590 PRINT"6 - LOWER MIDDLE"
    0x625cdae72be0 ---------A   02600 PRINT"7 - LOWER RIGHT"
    0x625cdae72d30 ---------A   02610 PRINT"8 - BASE OF SHIELD"
    0x625cdae72da0 ---------A   02620 PRINT
    0x625cdae72e10 ---------A   02630 GOTO 1390
    0x625cdae72ea0 ---------A T 09990 PRINT 
    0x625cdae73010 ---------A   09991 PRINT"***************************************************"
    0x625cdae730a0 ---------A   09992 PRINT
    0x625cdae73210 ---------A   09993 PRINT"TOO BAD, THE PRINCESS WAS A VIRGIN!!!!"
    0x625cdae732b0 ---------A   09994 PRINT
    0x625cdae73420 ---------A   09995 PRINT"***************************************************"
    0x625cdae73470 ---------A T 09999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01260      02503T
     01310      01280T
     01330      01280T
     01350      01280T
     01370      01280T
     01390      01320T, 01340T, 01360T, 01410T, 01420T, 02490T, 02630T
     01450      01440T, 01440T, 01440T
     01470      01440T
     01490      01440T, 01440T
     01520      01440T
     01540      01440T
     01550      01460T, 01480T, 01510T, 01530T
     01590      01580T
     01600      01580T
     01610      01580T
     01620      01580T
     01630      01580T
     01640      01580T
     01650      01580T
     01660      01580T
     01670      01590T, 01590T, 01590T, 01590T, 01600T, 01600T, 01620T, 01630T, 
                01630T, 01650T
     01700      01610T, 01620T, 01620T, 01620T, 01640T, 01650T, 01650T, 01650T, 
                01650T, 01660T
     01730      01590T
     01760      01600T, 01600T, 01600T, 01610T, 01620T, 01630T, 01630T, 01630T, 
                01640T, 01640T, 01660T, 01660T, 01660T
     01790      01590T, 01600T, 01610T, 01620T
     01820      01610T, 01640T, 01660T, 01660T
     01850      01610T
     01880      01610T, 01630T, 01640T, 01640T, 01650T
     01900      01690T, 01720T, 01750T, 01780T, 01810T, 01840T, 01870T, 01920T, 
                01940T, 01970T, 01980T, 02000T, 02010T
     01920      01910T, 01910T, 01910T
     01940      01910T
     01960      01910T, 01910T
     01970      01910T
     02000      01910T
     02020      01930T, 01950T, 01960T, 01990T
     02030      02020T
     02040      02020T
     02050      02020T
     02060      02020T
     02070      02020T
     02080      02020T
     02090      02030T, 02040T, 02040T, 02040T, 02050T, 02050T, 02050T, 02070T, 
                02080T, 02080T
     02120      02030T, 02030T, 02040T, 02040T, 02050T, 02060T, 02060T, 02070T, 
                02070T, 02080T
     02150      02060T
     02180      02030T, 02030T, 02040T, 02050T, 02050T, 02060T, 02060T, 02060T, 
                02060T, 02070T, 02080T, 02080T, 02080T
     02210      02030T, 02040T, 02050T, 02070T, 02080T
     02240      02030T, 02070T, 02070T
     02270      02080T
     02300      02030T, 02040T, 02050T, 02060T, 02070T
     02330      02110T, 02140T, 02170T, 02200T, 02230T, 02260T, 02290T, 02320T
     02350      02330T
     02360      02340T
     02390      02370T
     02420      02410T
     02440      02380T
     02460      02360T
     02480      02350T
     02500      02450T, 02470T
     02520      02430T
     02530      01405T
     09990      02504T
     09999      02510T, 02525T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x625cdae57d50 (01000)   0x625cdae57d50 (01000)   0x625cdae73470 (09999)   0x625cdae73470 (09999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02780 - 10000    7230 

 */



/*
 *  Symbol Table Listing for 'basic/joust.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B$                       String      
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
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/joust.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x625cdae57d50 ---------A   01000 RANDOMIZE
    0x625cdae56b80 ---------A   01010 PRINT TAB(26);"JOUST"
    0x625cdae57ed0 ---------A   01020 PRINT TAB(20);"CREATIVE COMPUTING"
    0x625cdae57e10 ---------A   01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x625cdae57f90 ---------A   01040 PRINT
    0x625cdae57580 ---------A   01050 PRINT
    0x625cdae571b0 ---------A   01060 PRINT
    0x625cdae57a40 ---------A   01070 PRINT"WHAT IS YOUR NAME, PLEASE";
    0x625cdae556d0 ---------A   01080 INPUT A$
    0x625cdae58050 ---------A   01090 PRINT
    0x625cdae580f0 ---------A   01100 PRINT"SIR ";A$;" YOU ARE A MEDIEVAL KNIGHT IN A JOUSTING TOURNAMENT."
    0x625cdae566a0 ---------A   01110 PRINT"THE PRIZE TO THE WINNER IS THE PRINCESS' HAND IN MARRIAGE."
    0x625cdae56840 ---------A   01120 PRINT"TO WIN, YOU MUST BEAT FOUR OTHER KNIGHTS."
    0x625cdae5d960 ---------A   01130 PRINT"TO JOUST, YOU PICK AN AIMING POINT FOR THE LANCE,"
    0x625cdae5dac0 ---------A   01140 PRINT"AND THEN ONE OF FROM 3 TO 6 DIFFERENT POSSIBLE DEFENCE POSITIONS."
    0x625cdae5dbd0 ---------A   01150 PRINT"THE AIMING POINTS ARE:"
    0x625cdae5dce0 ---------A   01160 PRINT"1 - HELM"
    0x625cdae5de50 ---------A   01170 PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x625cdae5dfb0 ---------A   01180 PRINT"3 - UPPER MIDDLE"
    0x625cdae5e110 ---------A   01190 PRINT"4 - UPPER RIGHT"
    0x625cdae5e270 ---------A   01200 PRINT"5 - LOWER LEFT"
    0x625cdae5e3d0 ---------A   01210 PRINT"6 - LOWER MIDDLE"
    0x625cdae5e530 ---------A   01220 PRINT"7 - LOWER RIGHT"
    0x625cdae5e680 ---------A   01230 PRINT"8 - BASE OF SHIELD"
    0x625cdae5e730 ---------A   01240 PRINT
    0x625cdae5e8c0 ---------A   01250 PRINT"IF YOU BREAK A LANCE OR LOSE A HELM, YOU WILL BE GIVEN ANOTHER."
    0x625cdae5ea10 ---------A   01260 PRINT"GOOD LUCK, SIR!"
    0x625cdae5ea80 ---------A T 01270 PRINT
    0x625cdae5ee20 ---------A   01280 FOR A = 1 TO 4
    0x625cdae5f290 ---------A   01290 ON A GOTO 1320,1340,1360,1380
    0x625cdae5f310 ---------A   01300 REM OFF YOU GO TO THE FOUR JOUSTS
    0x625cdae5f3e0 ---------A   01310 REM ------------------------------------------------
    0x625cdae5f5b0 ---------A T 01320 PRINT"THIS IS YOUR FIRST JOUST. YOU ARE UP AGAINST THE GOLD KNIGHT."
    0x625cdae5f870 ---------A   01330 GOTO 1400
    0x625cdae5f9e0 ---------A T 01340 PRINT"THIS IS YOUR SECOND JOUST. YOUR OPPONENT IS THE SILVER KNIGHT."
    0x625cdae5fa90 ---------A   01350 GOTO 1400
    0x625cdae5fc00 ---------A T 01360 PRINT"YOU ARE DOING WELL! YOUR THIRD JOUST IS AGAINST THE RED KNIGHT."
    0x625cdae5fca0 ---------A   01370 GOTO 1400
    0x625cdae5fe50 ---------A T 01380 PRINT"THIS IS YOUR FINAL TEST!! IF YOU WIN THIS ONE, THE PRINCESS"
    0x625cdae60000 ---------A   01390 PRINT"IS YOURS!!! THIS FIGHT IS AGAINST THE FIERCE BLACK KNIGHT!!!!"
    0x625cdae60190 ---------A T 01400 PRINT "YOUR AIMING POINT(1-8) OR 0 {ZERO} FOR HELP";
    0x625cdae603a0 ---------A   01410 INPUT B
    0x625cdae60600 ---------A   01420 IF B = 0 THEN 2600
    0x625cdae60860 ---------A   01430 IF B < 1 THEN 1400
    0x625cdae60ae0 ---------A   01440 IF B > 8 THEN 1400
    0x625cdae60c70 ---------A   01450 PRINT"YOU MAY USE ONE OF THESE DEFENCES:"
    0x625cdae613f0 ---------A   01460 ON B  GOTO 1510,1470,1510,1560,1470,1490,1470,1540
    0x625cdae61560 ---------A T 01470 PRINT" 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x625cdae61610 ---------A   01480 GOTO 1570
    0x625cdae61780 ---------A T 01490 PRINT" 3 -LEFT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x625cdae61830 ---------A   01500 GOTO 1570
    0x625cdae619c0 ---------A T 01510 PRINT"1 - LOWER HELM, 2 - RIGHT LEAN, 3 - LEFT LEAN, 4 - STEADY SEAT,"
    0x625cdae61b20 ---------A   01520 PRINT" 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x625cdae61bd0 ---------A   01530 GOTO 1570
    0x625cdae61d40 ---------A T 01540 PRINT"2 - RIGHT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x625cdae61df0 ---------A   01550 GOTO 1570
    0x625cdae61f70 ---------A T 01560 PRINT"1 - LOWER HELM, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x625cdae620e0 ---------A T 01570 PRINT"WHAT IS YOUR CHOICE";
    0x625cdae622f0 ---------A   01580 INPUT C
    0x625cdae629b0 ---------A   01590 D=INT(RND(1)*8)+1
    0x625cdae63120 ---------A   01600 ON D GOTO 1670,1680,1610,1620,1630,1640,1650,1660
    0x625cdae63710 ---------A T 01610 ON C GOTO 1690,1690,1690,1750,1810,1690
    0x625cdae63d00 ---------A T 01620 ON C GOTO 1810,1780,1690,1780,1780,1690
    0x625cdae642f0 ---------A T 01630 ON C GOTO 1840,1810,1720,1780,1900,1870
    0x625cdae648e0 ---------A T 01640 ON C GOTO 1720,1690,1780,1720,1720,1810
    0x625cdae652e0 ---------A T 01650 ON C GOTO 1780,1900,1690,1780,1690,1780
    0x625cdae658d0 ---------A T 01660 ON C GOTO 1900,1720,1780,1900,1840,1780
    0x625cdae65ec0 ---------A T 01670 ON C GOTO 1720,1690,1900,1720,1720,1720
    0x625cdae664a0 ---------A T 01680 ON C GOTO 1780,1720,1840,1780,1840,1780
    0x625cdae665f0 ---------A T 01690 PRINT"HE MISSED YOU!"
    0x625cdae668c0 ---------A   01700 S=0
    0x625cdae66950 ---------A   01710 GOTO 1920
    0x625cdae66aa0 ---------A T 01720 PRINT"HE HIT YOUR SHIELD BUT IT GLANCED OFF"
    0x625cdae66cb0 ---------A   01730 S=0
    0x625cdae66d30 ---------A   01740 GOTO 1920
    0x625cdae66e80 ---------A T 01750 PRINT"HE KNOCKED OFF YOUR HELM"
    0x625cdae67090 ---------A   01760 S=0
    0x625cdae67110 ---------A   01770 GOTO 1920
    0x625cdae67250 ---------A T 01780 PRINT"HE BROKE HIS LANCE."
    0x625cdae67460 ---------A   01790 S=0
    0x625cdae674e0 ---------A   01800 GOTO 1920
    0x625cdae67630 ---------A T 01810 PRINT"HE HAS UNSEATED YOU(THUD!)"
    0x625cdae67840 ---------A   01820 S=5
    0x625cdae678e0 ---------A   01830 GOTO 1920
    0x625cdae67a50 ---------A T 01840 PRINT"HE HAS BROKEN HIS LANCE, INJURED AND UNSEATED YOU (OUCH!)"
    0x625cdae67c60 ---------A   01850 S=5
    0x625cdae67cf0 ---------A   01860 GOTO 1920
    0x625cdae67e50 ---------A T 01870 PRINT"HE HAS INJURED AND UNSEATED YOU (CRASH!)"
    0x625cdae68060 ---------A   01880 S=5
    0x625cdae68100 ---------A   01890 GOTO 1920
    0x625cdae68260 ---------A T 01900 PRINT"HE HAS BROKEN HIS LANCE AND UNSEATED YOU (CLANG!)"
    0x625cdae68470 ---------A   01910 S=5
    0x625cdae68b20 ---------A T 01920 E=INT(RND(1)*6)+1
    0x625cdae69270 ---------A   01930 ON D GOTO 1980,1940,1980,1990,1940,1960,1940,2020
    0x625cdae694c0 ---------A T 01940 IF E<4 THEN 1920
    0x625cdae69540 ---------A   01950 GOTO 2040
    0x625cdae69780 ---------A T 01960 IF E<3 THEN 1920
    0x625cdae69800 ---------A   01970 GOTO 2040
    0x625cdae69860 ---------A T 01980 GOTO 2040
    0x625cdae69aa0 ---------A T 01990 IF E=1 THEN 1920
    0x625cdae69d00 ---------A   02000 IF E=3 THEN 1920
    0x625cdae69d80 ---------A   02010 GOTO 2040
    0x625cdae69fc0 ---------A T 02020 IF E=2 THEN 1920
    0x625cdae6a240 ---------A   02030 IF E=3 THEN 1920
    0x625cdae6a840 ---------A T 02040 ON E GOTO 2090,2100,2050,2060,2070,2080
    0x625cdae6afb0 ---------A T 02050 ON B GOTO 2110,2230,2260,2140,2200,2320,2140,2200
    0x625cdae6b720 ---------A T 02060 ON B GOTO 2110,2200,2230,2110,2320,2140,2110,2140
    0x625cdae6be90 ---------A T 02070 ON B GOTO 2110,2110,2140,2200,2110,2200,2320,2230
    0x625cdae6c600 ---------A T 02080 ON B GOTO 2170,2200,2200,2140,2200,2320,2140,2200
    0x625cdae6cd70 ---------A T 02090 ON B GOTO 2230,2200,2320,2140,2110,2260,2140,2260
    0x625cdae6d4d0 ---------A T 02100 ON B GOTO 2110,2110,2290,2230,2200,2200,2140,2200
    0x625cdae6d630 ---------A T 02110 PRINT"YOU MISSED HIM (HISS!)"
    0x625cdae6d900 ---------A   02120 T=0
    0x625cdae6d990 ---------A   02130 GOTO 2350
    0x625cdae6dae0 ---------A T 02140 PRINT"YOU HIT HIS SHIELD BUT GLANCED OFF."
    0x625cdae6dcf0 ---------A   02150 T=0
    0x625cdae6dd80 ---------A   02160 GOTO 2350
    0x625cdae6ded0 ---------A T 02170 PRINT"YOU KNOCKED OFF HIS HELM (CHEERS!)"
    0x625cdae6e0e0 ---------A   02180 T=0
    0x625cdae6e170 ---------A   02190 GOTO 2350
    0x625cdae6e2c0 ---------A T 02200 PRINT"YOU BROKE YOUR LANCE (CRACK...!)"
    0x625cdae6e4d0 ---------A   02210 T=0
    0x625cdae6e560 ---------A   02220 GOTO 2350
    0x625cdae6e6c0 ---------A T 02230 PRINT"YOU UNSEATED HIM(LOUD CHEERS AND MUZZAMS!!)"
    0x625cdae6e8d0 ---------A   02240 T=5
    0x625cdae6e970 ---------A   02250 GOTO 2350
    0x625cdae6eae0 ---------A T 02260 PRINT"YOU BROKE YOUR LANCE, BUT UNSEATED AND INJURED YOUR FOE."
    0x625cdae6ecf0 ---------A   02270 T=5
    0x625cdae6ed80 ---------A   02280 GOTO 2350
    0x625cdae6f6f0 ---------A T 02290 PRINT"YOU INJURED AND UNSEATED YOUR OPPONENT."
    0x625cdae6f900 ---------A   02300 T=5
    0x625cdae6f9a0 ---------A   02310 GOTO 2350
    0x625cdae6fb00 ---------A T 02320 PRINT"YOU BROKE YOUR LANCE BUT UNSEATED YOUR OPPONENT."
    0x625cdae6fd10 ---------A   02330 T=5
    0x625cdae6fd80 ---------A   02340 GOTO 2350
    0x625cdae6ffe0 ---------A T 02350 IF S = T THEN 2370
    0x625cdae70060 ---------A   02360 GOTO 2380
    0x625cdae702a0 ---------A T 02370 IF S = 0 THEN 2500
    0x625cdae70500 ---------A T 02380 IF S = T GOTO 2480
    0x625cdae70780 ---------A   02390 IF S < T GOTO 2410
    0x625cdae70a30 ---------A   02400 IF S > T THEN 2460
    0x625cdae70ba0 ---------A T 02410 PRINT"YOU HAVE WON THIS JOUST."
    0x625cdae70c10 ---------A   02420 PRINT
    0x625cdae70c80 ---------A   02430 GOTO 2440
    0x625cdae70da0 ---------A T 02440 NEXT A
    0x625cdae70e50 ---------A   02450 GOTO 2580
    0x625cdae70fb0 ---------A T 02460 PRINT"TOO BAD, YOU LOST. HOPE YOUR INSURANCE WAS PAID UP."
    0x625cdae71050 ---------A   02470 GOTO 2520
    0x625cdae711c0 ---------A T 02480 PRINT"TOO BAD, YOU BOTH LOST. AT LEAST YOUR HONOUR IS INTACT."
    0x625cdae71240 ---------A   02490 GOTO 2520
    0x625cdae71390 ---------A T 02500 PRINT"YOU ARE READY TO TRY AGAIN."
    0x625cdae71420 ---------A   02510 GOTO 1400
    0x625cdae71590 ---------A T 02520 PRINT"SORRY, BETTER LUCK NEXT JOUST."
    0x625cdae71720 ---------A   02530 PRINT"DO YOU WISH TO JOUST AGAIN ('Y' OR 'N')";
    0x625cdae71940 ---------A   02540 INPUT B$
    0x625cdae71bd0 ---------A   02550 IF B$ = "Y" THEN 1270
    0x625cdae71e50 ---------A   02560 IF B$ = "N" THEN 2710
    0x625cdae71f00 ---------A   02570 GOTO 2770
    0x625cdae72060 ---------A T 02580 PRINT"HOORAY! YOU ARE THE WINNER, HERE COMES THE BRIDE!"
    0x625cdae720e0 ---------A   02590 GOTO 2770
    0x625cdae72230 ---------A T 02600 PRINT"THE AIMING POINTS ARE:"
    0x625cdae72390 ---------A   02610 PRINT"1 - HELM"
    0x625cdae72500 ---------A   02620 PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x625cdae72660 ---------A   02630 PRINT"3 - UPPER MIDDLE"
    0x625cdae727c0 ---------A   02640 PRINT"4 - UPPER RIGHT"
    0x625cdae72920 ---------A   02650 PRINT"5 - LOWER LEFT"
    0x625cdae72a80 ---------A   02660 PRINT"6 - LOWER MIDDLE"
    0x625cdae72be0 ---------A   02670 PRINT"7 - LOWER RIGHT"
    0x625cdae72d30 ---------A   02680 PRINT"8 - BASE OF SHIELD"
    0x625cdae72da0 ---------A   02690 PRINT
    0x625cdae72e10 ---------A   02700 GOTO 1400
    0x625cdae72ea0 ---------A T 02710 PRINT 
    0x625cdae73010 ---------A   02720 PRINT"***************************************************"
    0x625cdae730a0 ---------A   02730 PRINT
    0x625cdae73210 ---------A   02740 PRINT"TOO BAD, THE PRINCESS WAS A VIRGIN!!!!"
    0x625cdae732b0 ---------A   02750 PRINT
    0x625cdae73420 ---------A   02760 PRINT"***************************************************"
    0x625cdae73470 ---------A T 02770 END
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
char*  A_str;                                     // Basic: A$ 
int    B_int;                                     // Basic: B 
char*  B_str;                                     // Basic: B$ 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
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
    // 01000 RANDOMIZE
    RANDOMIZE();
