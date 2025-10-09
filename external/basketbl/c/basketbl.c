/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/basketbl.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x585fcb381ac0 ---------A   00005 PRINT TAB(31);"BASKETBALL"
    0x585fcb382e70 ---------A   00007 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x585fcb3712b0 ---------A   00008 PRINT:PRINT:PRINT
    0x585fcb3829e0 ---------A   00010 PRINT "THIS IS DARTMOUTH COLLEGE BASKETBALL.  YOU WILL BE DARTMOUTH"
    0x585fcb380fd0 ---------A   00020 PRINT " CAPTAIN AND PLAYMAKER.  CALL SHOTS AS FOLLOWS:  1. LONG"
    0x585fcb3813c0 ---------A   00030 PRINT " (30 FT.) JUMP SHOT; 2. SHORT (15 FT.) JUMP SHOT; 3. LAY"
    0x585fcb382670 ---------A   00040 PRINT " UP; 4. SET SHOT."
    0x585fcb383090 ---------A   00060 PRINT "BOTH TEAMS WILL USE THE SAME DEFENSE.  CALL DEFENSE AS"
    0x585fcb3815f0 ---------A   00070 PRINT "FOLLOWS:  6. PRESS; 6.5 MAN-TO MAN; 7. ZONE; 7.5 NONE."
    0x585fcb381740 ---------A   00072 PRINT "TO CHANGE DEFENSE, JUST TYPE 0 AS YOUR NEXT SHOT."
    0x585fcb3805b0 ---------A   00076 INPUT "YOUR STARTING DEFENSE WILL BE";D:IF D<6 THEN 2010
    0x585fcb388a80 ---------A   00079 PRINT
    0x585fcb388c30 ---------A   00080 INPUT "CHOOSE YOUR OPPONENT";O$
    0x585fcb388d50 ---------A T 00370 PRINT "CENTER JUMP"
    0x585fcb389120 ---------A   00390 IF RND(1)> 3/5 THEN 420
    0x585fcb389340 ---------A   00400 PRINT O$;" CONTROLS THE TAP."
    0x585fcb389390 ---------A   00410 GOTO 3000
    0x585fcb3894b0 ---------A T 00420 PRINT "DARTMOUTH CONTROLS THE TAP."
    0x585fcb389520 ---------A T 00425 PRINT
    0x585fcb389750 ---------A T 00430 INPUT "YOUR SHOT";Z
    0x585fcb389a10 ---------A   00440 P=0
    0x585fcb389d70 ---------A   00445 IF Z<>INT(Z) THEN 455
    0x585fcb38a1f0 ---------A   00446 IF Z<0 OR Z>4 THEN 455
    0x585fcb38a290 ---------A   00447 GOTO 460
    0x585fcb38a460 ---------A T 00455 PRINT "INCORRECT ANSWER.  RETYPE IT. ";:GOTO 430
    0x585fcb38a760 ---------A T 00460 IF RND(1)<.5 THEN 1000
    0x585fcb38aa80 ---------A   00480 IF T<100 THEN 1000
    0x585fcb38ab10 ---------A   00490 PRINT
    0x585fcb38aff0 ---------A   00491 IF S(1)<>S(0) THEN 510
    0x585fcb38b220 ---------A   00492 PRINT:PRINT "   ***** END OF SECOND HALF *****":PRINT
    0x585fcb38b3a0 ---------A   00493 PRINT "SCORE AT END OF REGULATION TIME:"
    0x585fcb38bb70 ---------A   00494 PRINT "        DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x585fcb38bc00 ---------A   00495 PRINT
    0x585fcb38bf70 ---------A   00496 PRINT "BEGIN TWO MINUTE OVERTIME PERIOD"
    0x585fcb38c180 ---------A   00499 T=93
    0x585fcb38c200 ---------A   00500 GOTO 370
    0x585fcb38c380 ---------A T 00510 PRINT "   ***** END OF GAME *****"
    0x585fcb38cb60 ---------A   00515 PRINT "FINAL SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x585fcb38cbb0 ---------A   00520 STOP
    0x585fcb38cc50 ---------B G 00600 PRINT
    0x585fcb38cdc0 ---------B   00610 PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    0x585fcb38ce30 ---------B   00620 PRINT
    0x585fcb38ce80 ---------B   00630 RETURN
    0x585fcb38d170 ---------A T 01000 ON Z GOTO 1040,1040
    0x585fcb38d1e0 ---------A   01030 GOTO 1300
    0x585fcb38d500 ---------A T 01040 T=T+1
    0x585fcb38d750 ---------A   01041 IF T=50 THEN 8000
    0x585fcb38d9b0 ---------A   01042 IF T=92 THEN 1046
    0x585fcb38da30 ---------A   01043 GOTO 1050
    0x585fcb38da90 ---------A T 01046 GOSUB 600
    0x585fcb38dbe0 ---------A T 01050 PRINT "JUMP SHOT"
    0x585fcb38e120 ---------A   01060 IF RND(1)>.341*D/8 THEN 1090
    0x585fcb38e280 ---------A   01070 PRINT "SHOT IS GOOD."
    0x585fcb38e2f0 ---------A   01075 GOSUB 7000
    0x585fcb38e360 ---------A   01085 GOTO 3000
    0x585fcb38e890 ---------A T 01090 IF RND(1)>.682*D/8 THEN 1200
    0x585fcb38ea00 ---------A   01100 PRINT "SHOT IS OFF TARGET."
    0x585fcb38ef50 ---------A   01105 IF D/6*RND(1)>.45 THEN 1130
    0x585fcb38f0c0 ---------A   01110 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x585fcb38f140 ---------A   01120 GOTO 1145
    0x585fcb38f380 ---------A T 01130 PRINT "REBOUND TO ";O$
    0x585fcb38f400 ---------A   01140 GOTO 3000
    0x585fcb38f700 ---------A T 01145 IF RND(1)>.4 THEN 1158
    0x585fcb38f780 ---------A   01150 GOTO 1300
    0x585fcb38f9d0 ---------A T 01158 IF D=6 THEN 5100
    0x585fcb38ff70 ---------A T 01160 PRINT "BALL PASSED BACK TO YOU. ";
    0x585fcb38fff0 ---------A   01170 GOTO 430
    0x585fcb390300 ----------   01180 IF RND(1)>.9 THEN 1190
    0x585fcb390470 ----------   01185 PRINT "PLAYER FOULED, TWO SHOTS."
    0x585fcb3904e0 ----------   01187 GOSUB 4000
    0x585fcb390560 ----------   01188 GOTO 3000
    0x585fcb3908a0 ---------- T 01190 PRINT "BALL STOLEN. ";O$;"'S BALL."
    0x585fcb390920 ----------   01195 GOTO 3000
    0x585fcb390e60 ---------A T 01200 IF RND(1)>.782*D/8 THEN 1250
    0x585fcb391000 ---------A   01210 PRINT "SHOT IS BLOCKED.  BALL CONTROLLED BY ";
    0x585fcb391310 ---------A   01230 IF RND(1)>.5 THEN 1242
    0x585fcb391470 ---------A   01235 PRINT "DARTMOUTH."
    0x585fcb3914e0 ---------A   01240 GOTO 430
    0x585fcb391720 ---------A T 01242 PRINT O$;"."
    0x585fcb3917a0 ---------A   01245 GOTO 3000
    0x585fcb391ce0 ---------A T 01250 IF RND(1)>.843*D/8 THEN 1270
    0x585fcb391e50 ---------A   01255 PRINT "SHOOTER IS FOULED.  TWO SHOTS."
    0x585fcb391ec0 ---------A   01260 GOSUB 4000
    0x585fcb391f40 ---------A   01265 GOTO 3000
    0x585fcb392090 ---------A T 01270 PRINT "CHARGING FOUL.  DARTMOUTH LOSES BALL."
    0x585fcb392100 ---------A   01280 GOTO 3000
    0x585fcb392420 ---------A T 01300 T=T+1
    0x585fcb392670 ---------A   01301 IF T=50 THEN 8000
    0x585fcb3928d0 ---------A   01302 IF T=92 THEN 1304
    0x585fcb392950 ---------A   01303 GOTO 1305
    0x585fcb3929b0 ---------A T 01304 GOSUB 600
    0x585fcb392bf0 ---------A T 01305 IF Z=0 THEN 2010
    0x585fcb392e50 ---------A   01310 IF Z>3 THEN 1700
    0x585fcb392fc0 ---------A   01320 PRINT "LAY UP."
    0x585fcb393500 ---------A T 01330 IF 7/D*RND(1)>.4 THEN 1360
    0x585fcb393670 ---------A   01340 PRINT "SHOT IS GOOD.  TWO POINTS."
    0x585fcb3936e0 ---------A   01345 GOSUB 7000
    0x585fcb393750 ---------A   01355 GOTO 3000
    0x585fcb393c80 ---------A T 01360 IF 7/D*RND(1)>.7 THEN 1500
    0x585fcb393df0 ---------A   01370 PRINT "SHOT IS OFF THE RIM."
    0x585fcb394210 ---------A   01380 IF RND(1)>2/3 THEN 1415
    0x585fcb394480 ---------A   01390 PRINT O$;" CONTROLS THE REBOUND."
    0x585fcb394510 ---------A   01400 GOTO 3000
    0x585fcb394670 ---------A T 01415 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x585fcb394980 ---------A   01420 IF RND(1)>.4 THEN 1440
    0x585fcb394a10 ---------A   01430 GOTO 1300
    0x585fcb394b80 ---------A T 01440 PRINT "BALL PASSED BACK TO YOU.";
    0x585fcb394c00 ---------A   01450 GOTO 430
    0x585fcb395140 ---------A T 01500 IF 7/D*RND(1)>.875 THEN 1600
    0x585fcb3952b0 ---------A   01510 PRINT "SHOOTER FOULED.  TWO SHOTS."
    0x585fcb395320 ---------A   01520 GOSUB 4000
    0x585fcb395390 ---------A   01530 GOTO 3000
    0x585fcb3958d0 ---------A T 01600 IF 7/D*RND(1)>.925 THEN 1630
    0x585fcb395c30 ---------A   01610 PRINT "SHOT BLOCKED. ";O$;"'S BALL."
    0x585fcb395cc0 ---------A   01620 GOTO 3000
    0x585fcb395e20 ---------A T 01630 PRINT "CHARGING FOUL.  DARTMOUTH LOSES THE BALL."
    0x585fcb395e90 ---------A   01640 GOTO 3000
    0x585fcb395fd0 ---------A T 01700 PRINT "SET SHOT."
    0x585fcb396060 ---------A   01710 GOTO 1330
    0x585fcb3961d0 ---------A T 02010 INPUT "YOUR NEW DEFENSIVE ALLIGNMENT IS";D
    0x585fcb396430 ---------A   02030 IF D<6 THEN 2010
    0x585fcb3964b0 ---------A   02040 GOTO 425
    0x585fcb3966b0 ---------A T 03000 P=1
    0x585fcb3969e0 ---------A   03005 T=T+1
    0x585fcb396c30 ---------A   03008 IF T=50 THEN 8000
    0x585fcb396cb0 ---------A   03012 GOTO 3018
    0x585fcb396d10 ----------   03015 GOSUB 600
    0x585fcb396d70 ---------A T 03018 PRINT
    0x585fcb397420 ---------A   03020 Z1=10/4*RND(1)+1
    0x585fcb397e80 ---------A   03030 IF Z1>2 THEN 3500
    0x585fcb397ff0 ---------A   03040 PRINT "JUMP SHOT."
    0x585fcb398530 ---------A   03050 IF 8/D*RND(1)>.35 THEN 3100
    0x585fcb398690 ---------A   03060 PRINT "SHOT IS GOOD."
    0x585fcb398700 ---------A   03080 GOSUB 6000
    0x585fcb398770 ---------A   03090 GOTO 425
    0x585fcb398ca0 ---------A T 03100 IF 8/D*RND(1)>.75 THEN 3200
    0x585fcb398e10 ---------A   03105 PRINT "SHOT IS OFF RIM."
    0x585fcb399360 ---------A T 03110 IF D/6*RND(1)>.5 THEN 3150
    0x585fcb3994d0 ---------A   03120 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x585fcb399550 ---------A   03130 GOTO 425
    0x585fcb3997a0 ---------A T 03150 PRINT O$;" CONTROLS THE REBOUND."
    0x585fcb399a00 ---------A   03160 IF D=6 THEN 5000
    0x585fcb399d30 ---------A T 03165 IF RND(1)>.5 THEN 3175
    0x585fcb39a090 ---------A   03168 PRINT "PASS BACK TO ";O$;" GUARD."
    0x585fcb39a100 ---------A   03170 GOTO 3000
    0x585fcb39a170 ---------A T 03175 GOTO 3500
    0x585fcb39a6a0 ---------A T 03200 IF 8/D*RND(1)>.9 THEN 3310
    0x585fcb39a810 ---------A   03210 PRINT "PLAYER FOULED.  TWO SHOTS."
    0x585fcb39a880 ---------A   03220 GOSUB 4000
    0x585fcb39a900 ---------A   03230 GOTO 425
    0x585fcb39aa50 ---------A T 03310 PRINT "OFFENSIVE FOUL.  DARTMOUTH'S BALL."
    0x585fcb39aac0 ---------A   03320 GOTO 425
    0x585fcb39ad00 ---------A T 03500 IF Z1>3 THEN 3800
    0x585fcb39ae70 ---------A   03510 PRINT "LAY UP."
    0x585fcb39b3b0 ---------A T 03520 IF 7/D*RND(1)>.413 THEN 3600
    0x585fcb39b510 ---------A   03530 PRINT "SHOT IS GOOD."
    0x585fcb39b580 ---------A   03540 GOSUB 6000
    0x585fcb39b5f0 ---------A   03550 GOTO 425
    0x585fcb39b730 ---------A T 03600 PRINT "SHOT IS MISSED."
    0x585fcb39b7a0 ---------A   03610 GOTO 3110
    0x585fcb39b8e0 ---------A T 03800 PRINT "SET SHOT."
    0x585fcb39b950 ---------A   03810 GOTO 3520
    0x585fcb39b9b0 ---------C G 04000 REM FOUL SHOOTING
    0x585fcb39bcf0 ---------C   04010 IF RND(1)>.49 THEN 4050
    0x585fcb39be60 ---------C   04020 PRINT "SHOOTER MAKES BOTH SHOTS."
    0x585fcb39c550 ---------C   04030 S(1-P)=S(1-P)+2
    0x585fcb39c5c0 ---------C T 04040 GOSUB 6010
    0x585fcb39c600 ---------C   04041 RETURN
    0x585fcb39c950 ---------C T 04050 IF RND(1)>.75 THEN 4100
    0x585fcb39cad0 ---------C   04060 PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    0x585fcb39d1c0 ---------C   04070 S(1-P)=S(1-P)+1
    0x585fcb39d240 ---------C   04080 GOTO 4040
    0x585fcb39d380 ---------C T 04100 PRINT "BOTH SHOTS MISSED."
    0x585fcb39d400 ---------C   04110 GOTO 4040
    0x585fcb39d700 ---------A T 05000 IF RND(1)>.75 THEN 5010
    0x585fcb39d7a0 ---------A   05005 GOTO 3165
    0x585fcb39d900 ---------A T 05010 PRINT "BALL STOLEN.  EASY LAY UP FOR DARTMOUTH."
    0x585fcb39d970 ---------A   05015 GOSUB 7000
    0x585fcb39d9e0 ---------A   05030 GOTO 3000
    0x585fcb39dce0 ---------A T 05100 IF RND(1)>.6 THEN 5120
    0x585fcb39dd80 ---------A   05110 GOTO 1160
    0x585fcb39e0c0 ---------A T 05120 PRINT "PASS STOLEN BY ";O$;" EASY LAYUP."
    0x585fcb39e130 ---------A   05130 GOSUB 6000
    0x585fcb39e190 ---------A   05140 GOTO 425
    0x585fcb39e640 ---------D G 06000 S(0)=S(0)+2
    0x585fcb39ec10 ---------D G 06010 PRINT "SCORE: ";S(1);"TO";S(0)
    0x585fcb39ec60 ---------D   06020 RETURN
    0x585fcb39f120 ---------E G 07000 S(1)=S(1)+2
    0x585fcb39f190 ---------E   07010 GOSUB 6010
    0x585fcb39f1d0 ---------E   07020 RETURN
    0x585fcb39f430 ---------A T 08000 PRINT:PRINT "   ***** END OF FIRST HALF *****":PRINT
    0x585fcb39fc00 ---------A   08010 PRINT "SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x585fcb39fc70 ---------A   08015 PRINT
    0x585fcb39fce0 ---------A   08016 PRINT
    0x585fcb39fd50 ---------A   08020 GOTO 370
    0x585fcb39fd90 ---------A   09999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00370      00500T, 08020T
     00420      00390T
     00425      02040T, 03090T, 03130T, 03230T, 03320T, 03550T, 05140T
     00430      00455T, 01170T, 01240T, 01450T
     00455      00445T, 00446T
     00460      00447T
     00510      00491T
     00600      01046G, 01304G, 03015G
     01000      00460T, 00480T
     01040      01000T, 01000T
     01046      01042T
     01050      01043T
     01090      01060T
     01130      01105T
     01145      01120T
     01158      01145T
     01160      05110T
     01190      01180T
     01200      01090T
     01242      01230T
     01250      01200T
     01270      01250T
     01300      01030T, 01150T, 01430T
     01304      01302T
     01305      01303T
     01330      01710T
     01360      01330T
     01415      01380T
     01440      01420T
     01500      01360T
     01600      01500T
     01630      01600T
     01700      01310T
     02010      00076T, 01305T, 02030T
     03000      00410T, 01085T, 01140T, 01188T, 01195T, 01245T, 01265T, 01280T, 
                01355T, 01400T, 01530T, 01620T, 01640T, 03170T, 05030T
     03018      03012T
     03100      03050T
     03110      03610T
     03150      03110T
     03165      05005T
     03175      03165T
     03200      03100T
     03310      03200T
     03500      03030T, 03175T
     03520      03810T
     03600      03520T
     03800      03500T
     04000      01187G, 01260G, 01520G, 03220G
     04040      04080T, 04110T
     04050      04010T
     04100      04050T
     05000      03160T
     05010      05000T
     05100      01158T
     05120      05100T
     06000      03080G, 03540G, 05130G
     06010      04040G, 07010G
     07000      01075G, 01345G, 05015G
     08000      01041T, 01301T, 03008T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x585fcb381ac0 (00005)   0x000000000000 (00000)   0x585fcb39fd90 (09999)   0x585fcb39fd90 (09999)   
   B) 0x585fcb38cc50 (00600)   0x585fcb38cc50 (00600)   0x585fcb38ce80 (00630)   0x585fcb38ce80 (00630)   
   C) 0x585fcb39b9b0 (04000)   0x585fcb39b9b0 (04000)   0x585fcb39c600 (04041)   0x585fcb39d400 (04110)   
   D) 0x585fcb39e640 (06000)   0x585fcb39e640 (06000)   0x585fcb39ec60 (06020)   0x585fcb39ec60 (06020)   
   E) 0x585fcb39f120 (07000)   0x585fcb39f120 (07000)   0x585fcb39f1d0 (07020)   0x585fcb39f1d0 (07020)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02930 - 10000    7080 

 */



/*
 *  Symbol Table Listing for 'basic/basketbl.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Float       
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
    O$                       String      
    OCT$            Function String          args=1, float  
    P                        Float       
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
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
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    Z                        Float       
    Z1                       Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/basketbl.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x585fcb381ac0 ---------A   01000 PRINT TAB(31);"BASKETBALL"
    0x585fcb382e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x585fcb3712b0 ---------A   01020 PRINT:PRINT:PRINT
    0x585fcb3829e0 ---------A   01030 PRINT "THIS IS DARTMOUTH COLLEGE BASKETBALL.  YOU WILL BE DARTMOUTH"
    0x585fcb380fd0 ---------A   01040 PRINT " CAPTAIN AND PLAYMAKER.  CALL SHOTS AS FOLLOWS:  1. LONG"
    0x585fcb3813c0 ---------A   01050 PRINT " (1050 FT.) JUMP SHOT; 2. SHORT (15 FT.) JUMP SHOT; 3. LAY"
    0x585fcb382670 ---------A   01060 PRINT " UP; 4. SET SHOT."
    0x585fcb383090 ---------A   01070 PRINT "BOTH TEAMS WILL USE THE SAME DEFENSE.  CALL DEFENSE AS"
    0x585fcb3815f0 ---------A   01080 PRINT "FOLLOWS:  6. PRESS; 6.5 MAN-TO MAN; 7. ZONE; 7.5 NONE."
    0x585fcb381740 ---------A   01090 PRINT "TO CHANGE DEFENSE, JUST TYPE 0 AS YOUR NEXT SHOT."
    0x585fcb3805b0 ---------A   01100 INPUT "YOUR STARTING DEFENSE WILL BE";D:IF D<6 THEN 2090
    0x585fcb388a80 ---------A   01110 PRINT
    0x585fcb388c30 ---------A   01120 INPUT "CHOOSE YOUR OPPONENT";O$
    0x585fcb388d50 ---------A T 01130 PRINT "CENTER JUMP"
    0x585fcb389120 ---------A   01140 IF RND(1)> 3/5 THEN 1170
    0x585fcb389340 ---------A   01150 PRINT O$;" CONTROLS THE TAP."
    0x585fcb389390 ---------A   01160 GOTO 2120
    0x585fcb3894b0 ---------A T 01170 PRINT "DARTMOUTH CONTROLS THE TAP."
    0x585fcb389520 ---------A T 01180 PRINT
    0x585fcb389750 ---------A T 01190 INPUT "YOUR SHOT";Z
    0x585fcb389a10 ---------A   01200 P=0
    0x585fcb389d70 ---------A   01210 IF Z<>INT(Z) THEN 1240
    0x585fcb38a1f0 ---------A   01220 IF Z<0 OR Z>4 THEN 1240
    0x585fcb38a290 ---------A   01230 GOTO 1250
    0x585fcb38a460 ---------A T 01240 PRINT "INCORRECT ANSWER.  RETYPE IT. ";:GOTO 1190
    0x585fcb38a760 ---------A T 01250 IF RND(1)<.5 THEN 1390
    0x585fcb38aa80 ---------A   01260 IF T<100 THEN 1390
    0x585fcb38ab10 ---------A   01270 PRINT
    0x585fcb38aff0 ---------A   01280 IF S(1)<>S(0) THEN 1360
    0x585fcb38b220 ---------A   01290 PRINT:PRINT "   ***** END OF SECOND HALF *****":PRINT
    0x585fcb38b3a0 ---------A   01300 PRINT "SCORE AT END OF REGULATION TIME:"
    0x585fcb38bb70 ---------A   01310 PRINT "        DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x585fcb38bc00 ---------A   01320 PRINT
    0x585fcb38bf70 ---------A   01330 PRINT "BEGIN TWO MINUTE OVERTIME PERIOD"
    0x585fcb38c180 ---------A   01340 T=93
    0x585fcb38c200 ---------A   01350 GOTO 1130
    0x585fcb38c380 ---------A T 01360 PRINT "   ***** END OF GAME *****"
    0x585fcb38cb60 ---------A   01370 PRINT "FINAL SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x585fcb38cbb0 ---------A   01380 STOP
    0x585fcb38d170 ---------A T 01390 ON Z GOTO 1410,1410
    0x585fcb38d1e0 ---------A   01400 GOTO 1760
    0x585fcb38d500 ---------A T 01410 T=T+1
    0x585fcb38d750 ---------A   01420 IF T=50 THEN 2610
    0x585fcb38d9b0 ---------A   01430 IF T=92 THEN 1450
    0x585fcb38da30 ---------A   01440 GOTO 1460
    0x585fcb38da90 ---------A T 01450 GOSUB 2670
    0x585fcb38dbe0 ---------A T 01460 PRINT "JUMP SHOT"
    0x585fcb38e120 ---------A   01470 IF RND(1)>.341*D/8 THEN 1510
    0x585fcb38e280 ---------A   01480 PRINT "SHOT IS GOOD."
    0x585fcb38e2f0 ---------A   01490 GOSUB 2890
    0x585fcb38e360 ---------A   01500 GOTO 2120
    0x585fcb38e890 ---------A T 01510 IF RND(1)>.682*D/8 THEN 1630
    0x585fcb38ea00 ---------A   01520 PRINT "SHOT IS OFF TARGET."
    0x585fcb38ef50 ---------A   01530 IF D/6*RND(1)>.45 THEN 1560
    0x585fcb38f0c0 ---------A   01540 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x585fcb38f140 ---------A   01550 GOTO 1580
    0x585fcb38f380 ---------A T 01560 PRINT "REBOUND TO ";O$
    0x585fcb38f400 ---------A   01570 GOTO 2120
    0x585fcb38f700 ---------A T 01580 IF RND(1)>.4 THEN 1600
    0x585fcb38f780 ---------A   01590 GOTO 1760
    0x585fcb38f9d0 ---------A T 01600 IF D=6 THEN 2560
    0x585fcb38ff70 ---------A T 01610 PRINT "BALL PASSED BACK TO YOU. ";
    0x585fcb38fff0 ---------A   01620 GOTO 1190
    0x585fcb390e60 ---------A T 01630 IF RND(1)>.782*D/8 THEN 1700
    0x585fcb391000 ---------A   01640 PRINT "SHOT IS BLOCKED.  BALL CONTROLLED BY ";
    0x585fcb391310 ---------A   01650 IF RND(1)>.5 THEN 1680
    0x585fcb391470 ---------A   01660 PRINT "DARTMOUTH."
    0x585fcb3914e0 ---------A   01670 GOTO 1190
    0x585fcb391720 ---------A T 01680 PRINT O$;"."
    0x585fcb3917a0 ---------A   01690 GOTO 2120
    0x585fcb391ce0 ---------A T 01700 IF RND(1)>.843*D/8 THEN 1740
    0x585fcb391e50 ---------A   01710 PRINT "SHOOTER IS FOULED.  TWO SHOTS."
    0x585fcb391ec0 ---------A   01720 GOSUB 2730
    0x585fcb391f40 ---------A   01730 GOTO 2120
    0x585fcb392090 ---------A T 01740 PRINT "CHARGING FOUL.  DARTMOUTH LOSES BALL."
    0x585fcb392100 ---------A   01750 GOTO 2120
    0x585fcb392420 ---------A T 01760 T=T+1
    0x585fcb392670 ---------A   01770 IF T=50 THEN 2610
    0x585fcb3928d0 ---------A   01780 IF T=92 THEN 1800
    0x585fcb392950 ---------A   01790 GOTO 1810
    0x585fcb3929b0 ---------A T 01800 GOSUB 2670
    0x585fcb392bf0 ---------A T 01810 IF Z=0 THEN 2090
    0x585fcb392e50 ---------A   01820 IF Z>3 THEN 2070
    0x585fcb392fc0 ---------A   01830 PRINT "LAY UP."
    0x585fcb393500 ---------A T 01840 IF 7/D*RND(1)>.4 THEN 1880
    0x585fcb393670 ---------A   01850 PRINT "SHOT IS GOOD.  TWO POINTS."
    0x585fcb3936e0 ---------A   01860 GOSUB 2890
    0x585fcb393750 ---------A   01870 GOTO 2120
    0x585fcb393c80 ---------A T 01880 IF 7/D*RND(1)>.7 THEN 1980
    0x585fcb393df0 ---------A   01890 PRINT "SHOT IS OFF THE RIM."
    0x585fcb394210 ---------A   01900 IF RND(1)>2/3 THEN 1930
    0x585fcb394480 ---------A   01910 PRINT O$;" CONTROLS THE REBOUND."
    0x585fcb394510 ---------A   01920 GOTO 2120
    0x585fcb394670 ---------A T 01930 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x585fcb394980 ---------A   01940 IF RND(1)>.4 THEN 1960
    0x585fcb394a10 ---------A   01950 GOTO 1760
    0x585fcb394b80 ---------A T 01960 PRINT "BALL PASSED BACK TO YOU.";
    0x585fcb394c00 ---------A   01970 GOTO 1190
    0x585fcb395140 ---------A T 01980 IF 7/D*RND(1)>.875 THEN 2020
    0x585fcb3952b0 ---------A   01990 PRINT "SHOOTER FOULED.  TWO SHOTS."
    0x585fcb395320 ---------A   02000 GOSUB 2730
    0x585fcb395390 ---------A   02010 GOTO 2120
    0x585fcb3958d0 ---------A T 02020 IF 7/D*RND(1)>.925 THEN 2050
    0x585fcb395c30 ---------A   02030 PRINT "SHOT BLOCKED. ";O$;"'S BALL."
    0x585fcb395cc0 ---------A   02040 GOTO 2120
    0x585fcb395e20 ---------A T 02050 PRINT "CHARGING FOUL.  DARTMOUTH LOSES THE BALL."
    0x585fcb395e90 ---------A   02060 GOTO 2120
    0x585fcb395fd0 ---------A T 02070 PRINT "SET SHOT."
    0x585fcb396060 ---------A   02080 GOTO 1840
    0x585fcb3961d0 ---------A T 02090 INPUT "YOUR NEW DEFENSIVE ALLIGNMENT IS";D
    0x585fcb396430 ---------A   02100 IF D<6 THEN 2090
    0x585fcb3964b0 ---------A   02110 GOTO 1180
    0x585fcb3966b0 ---------A T 02120 P=1
    0x585fcb3969e0 ---------A   02130 T=T+1
    0x585fcb396c30 ---------A   02140 IF T=50 THEN 2610
    0x585fcb396cb0 ---------A   02150 GOTO 2160
    0x585fcb396d70 ---------A T 02160 PRINT
    0x585fcb397420 ---------A   02170 Z1=10/4*RND(1)+1
    0x585fcb397e80 ---------A   02180 IF Z1>2 THEN 2410
    0x585fcb397ff0 ---------A   02190 PRINT "JUMP SHOT."
    0x585fcb398530 ---------A   02200 IF 8/D*RND(1)>.35 THEN 2240
    0x585fcb398690 ---------A   02210 PRINT "SHOT IS GOOD."
    0x585fcb398700 ---------A   02220 GOSUB 2850
    0x585fcb398770 ---------A   02230 GOTO 1180
    0x585fcb398ca0 ---------A T 02240 IF 8/D*RND(1)>.75 THEN 2350
    0x585fcb398e10 ---------A   02250 PRINT "SHOT IS OFF RIM."
    0x585fcb399360 ---------A T 02260 IF D/6*RND(1)>.5 THEN 2290
    0x585fcb3994d0 ---------A   02270 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x585fcb399550 ---------A   02280 GOTO 1180
    0x585fcb3997a0 ---------A T 02290 PRINT O$;" CONTROLS THE REBOUND."
    0x585fcb399a00 ---------A   02300 IF D=6 THEN 2510
    0x585fcb399d30 ---------A T 02310 IF RND(1)>.5 THEN 2340
    0x585fcb39a090 ---------A   02320 PRINT "PASS BACK TO ";O$;" GUARD."
    0x585fcb39a100 ---------A   02330 GOTO 2120
    0x585fcb39a170 ---------A T 02340 GOTO 2410
    0x585fcb39a6a0 ---------A T 02350 IF 8/D*RND(1)>.9 THEN 2390
    0x585fcb39a810 ---------A   02360 PRINT "PLAYER FOULED.  TWO SHOTS."
    0x585fcb39a880 ---------A   02370 GOSUB 2730
    0x585fcb39a900 ---------A   02380 GOTO 1180
    0x585fcb39aa50 ---------A T 02390 PRINT "OFFENSIVE FOUL.  DARTMOUTH'S BALL."
    0x585fcb39aac0 ---------A   02400 GOTO 1180
    0x585fcb39ad00 ---------A T 02410 IF Z1>3 THEN 2490
    0x585fcb39ae70 ---------A   02420 PRINT "LAY UP."
    0x585fcb39b3b0 ---------A T 02430 IF 7/D*RND(1)>.413 THEN 2470
    0x585fcb39b510 ---------A   02440 PRINT "SHOT IS GOOD."
    0x585fcb39b580 ---------A   02450 GOSUB 2850
    0x585fcb39b5f0 ---------A   02460 GOTO 1180
    0x585fcb39b730 ---------A T 02470 PRINT "SHOT IS MISSED."
    0x585fcb39b7a0 ---------A   02480 GOTO 2260
    0x585fcb39b8e0 ---------A T 02490 PRINT "SET SHOT."
    0x585fcb39b950 ---------A   02500 GOTO 2430
    0x585fcb39d700 ---------A T 02510 IF RND(1)>.75 THEN 2530
    0x585fcb39d7a0 ---------A   02520 GOTO 2310
    0x585fcb39d900 ---------A T 02530 PRINT "BALL STOLEN.  EASY LAY UP FOR DARTMOUTH."
    0x585fcb39d970 ---------A   02540 GOSUB 2890
    0x585fcb39d9e0 ---------A   02550 GOTO 2120
    0x585fcb39dce0 ---------A T 02560 IF RND(1)>.6 THEN 2580
    0x585fcb39dd80 ---------A   02570 GOTO 1610
    0x585fcb39e0c0 ---------A T 02580 PRINT "PASS STOLEN BY ";O$;" EASY LAYUP."
    0x585fcb39e130 ---------A   02590 GOSUB 2850
    0x585fcb39e190 ---------A   02600 GOTO 1180
    0x585fcb39f430 ---------A T 02610 PRINT:PRINT "   ***** END OF FIRST HALF *****":PRINT
    0x585fcb39fc00 ---------A   02620 PRINT "SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x585fcb39fc70 ---------A   02630 PRINT
    0x585fcb39fce0 ---------A   02640 PRINT
    0x585fcb39fd50 ---------A   02650 GOTO 1130
    0x585fcb39fd90 ---------A   02660 END
    0x585fcb38cc50 ---------B G 02670 PRINT
    0x585fcb38cdc0 ---------B   02680 PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    0x585fcb38ce30 ---------B   02690 PRINT
    0x585fcb3a5c70 ---------B   02700 GOTO 02710
    0x585fcb3a5cb0 ---------B T 02710 RETURN
    0x585fcb39b9b0 ---------C   02720 REM FOUL SHOOTING
    0x585fcb39bcf0 ---------C G 02730 IF RND(1)>.49 THEN 2780
    0x585fcb39be60 ---------C   02740 PRINT "SHOOTER MAKES BOTH SHOTS."
    0x585fcb39c550 ---------C   02750 S(1-P)=S(1-P)+2
    0x585fcb39c5c0 ---------C T 02760 GOSUB 2860
    0x585fcb3a5cf0 ---------C   02770 GOTO 02840
    0x585fcb39c950 ---------C T 02780 IF RND(1)>.75 THEN 2820
    0x585fcb39cad0 ---------C   02790 PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    0x585fcb39d1c0 ---------C   02800 S(1-P)=S(1-P)+1
    0x585fcb39d240 ---------C   02810 GOTO 2760
    0x585fcb39d380 ---------C T 02820 PRINT "BOTH SHOTS MISSED."
    0x585fcb39d400 ---------C   02830 GOTO 2760
    0x585fcb3a5d50 ---------C T 02840 RETURN
    0x585fcb39e640 ---------D G 02850 S(0)=S(0)+2
    0x585fcb39ec10 ---------D G 02860 PRINT "SCORE: ";S(1);"TO";S(0)
    0x585fcb3a5db0 ---------D   02870 GOTO 02880
    0x585fcb3a5e10 ---------D T 02880 RETURN
    0x585fcb39f120 ---------E G 02890 S(1)=S(1)+2
    0x585fcb39f190 ---------E   02900 GOSUB 2860
    0x585fcb3a5e70 ---------E   02910 GOTO 02920
    0x585fcb3a5ed0 ---------E T 02920 RETURN
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
float  D_flt;                                     // Basic: D 
char*  O_str;                                     // Basic: O$ 
float  P_flt;                                     // Basic: P 
float  S_flt_arr[10];                             // Basic: S 
float  T_flt;                                     // Basic: T 
float  Z_flt;                                     // Basic: Z 
float  Z1_flt;                                    // Basic: Z1 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02670();
void Routine_02730();
void Routine_02850();
void Routine_02890();

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

void Routine_02670(){
    // 02670 PRINT
    b2c_printf("\n");
    // 02680 PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    b2c_printf("   *** two minutes left in the game ***\n");
    // 02690 PRINT
    b2c_printf("\n");
    // 02700 GOTO 02710
    goto Lbl_02710;

  Lbl_02710:
    // 02710 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 02720 REM FOUL SHOOTING

void Routine_02730(){
    // 02730 IF RND(1)>.49 THEN 2780
    if(RND(1)>0.49)goto Lbl_02780;
    // 02740 PRINT "SHOOTER MAKES BOTH SHOTS."
    b2c_printf("Shooter makes both shots.\n");
    // 02750 S(1-P)=S(1-P)+2
    S_flt_arr[(int)1-P_flt] = S_flt_arr[(int)1-P_flt]+2;

  Lbl_02760:
    // 02760 GOSUB 2860
    Routine_02860();
    // 02770 GOTO 02840
    goto Lbl_02840;

  Lbl_02780:
    // 02780 IF RND(1)>.75 THEN 2820
    if(RND(1)>0.75)goto Lbl_02820;
    // 02790 PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    b2c_printf("Shooter makes one shot and misses one.\n");
    // 02800 S(1-P)=S(1-P)+1
    S_flt_arr[(int)1-P_flt] = S_flt_arr[(int)1-P_flt]+1;
    // 02810 GOTO 2760
    goto Lbl_02760;

  Lbl_02820:
    // 02820 PRINT "BOTH SHOTS MISSED."
    b2c_printf("Both shots missed.\n");
    // 02830 GOTO 2760
    goto Lbl_02760;

  Lbl_02840:
    // 02840 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_02850(){
    // 02850 S(0)=S(0)+2
    S_flt_arr[0] = S_flt_arr[0]+2;

void Routine_02860(){
    // 02860 PRINT "SCORE: ";S(1);"TO";S(0)
    b2c_printf("Score:  %.2f Score: ToTo %.2f \n",S_flt_arr[1],S_flt_arr[0]);
    // 02870 GOTO 02880
    goto Lbl_02880;

  Lbl_02880:
    // 02880 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

void Routine_02890(){
    // 02890 S(1)=S(1)+2
    S_flt_arr[1] = S_flt_arr[1]+2;
    // 02900 GOSUB 2860
    Routine_02860();
    // 02910 GOTO 02920
    goto Lbl_02920;

  Lbl_02920:
    // 02920 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
