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
    0x5c07b1afbb80 ---------A   00005 PRINT TAB(31);"BASKETBALL"
    0x5c07b1afcf30 ---------A   00007 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c07b1aeb2b0 ---------A   00008 PRINT:PRINT:PRINT
    0x5c07b1afcaa0 ---------A   00010 PRINT "THIS IS DARTMOUTH COLLEGE BASKETBALL.  YOU WILL BE DARTMOUTH"
    0x5c07b1afb090 ---------A   00020 PRINT " CAPTAIN AND PLAYMAKER.  CALL SHOTS AS FOLLOWS:  1. LONG"
    0x5c07b1afb480 ---------A   00030 PRINT " (30 FT.) JUMP SHOT; 2. SHORT (15 FT.) JUMP SHOT; 3. LAY"
    0x5c07b1afc730 ---------A   00040 PRINT " UP; 4. SET SHOT."
    0x5c07b1afd150 ---------A   00060 PRINT "BOTH TEAMS WILL USE THE SAME DEFENSE.  CALL DEFENSE AS"
    0x5c07b1afb6b0 ---------A   00070 PRINT "FOLLOWS:  6. PRESS; 6.5 MAN-TO MAN; 7. ZONE; 7.5 NONE."
    0x5c07b1afb800 ---------A   00072 PRINT "TO CHANGE DEFENSE, JUST TYPE 0 AS YOUR NEXT SHOT."
    0x5c07b1afa670 ---------A   00076 INPUT "YOUR STARTING DEFENSE WILL BE";D:IF D<6 THEN 2010
    0x5c07b1b02b40 ---------A   00079 PRINT
    0x5c07b1b02cf0 ---------A   00080 INPUT "CHOOSE YOUR OPPONENT";O$
    0x5c07b1b02e10 ---------A T 00370 PRINT "CENTER JUMP"
    0x5c07b1b031e0 ---------A   00390 IF RND(1)> 3/5 THEN 420
    0x5c07b1b03400 ---------A   00400 PRINT O$;" CONTROLS THE TAP."
    0x5c07b1b03450 ---------A   00410 GOTO 3000
    0x5c07b1b03570 ---------A T 00420 PRINT "DARTMOUTH CONTROLS THE TAP."
    0x5c07b1b035e0 ---------A T 00425 PRINT
    0x5c07b1b03810 ---------A T 00430 INPUT "YOUR SHOT";Z
    0x5c07b1b03ad0 ---------A   00440 P=0
    0x5c07b1b03e30 ---------A   00445 IF Z<>INT(Z) THEN 455
    0x5c07b1b042b0 ---------A   00446 IF Z<0 OR Z>4 THEN 455
    0x5c07b1b04350 ---------A   00447 GOTO 460
    0x5c07b1b04520 ---------A T 00455 PRINT "INCORRECT ANSWER.  RETYPE IT. ";:GOTO 430
    0x5c07b1b04820 ---------A T 00460 IF RND(1)<.5 THEN 1000
    0x5c07b1b04b40 ---------A   00480 IF T<100 THEN 1000
    0x5c07b1b04bd0 ---------A   00490 PRINT
    0x5c07b1b050b0 ---------A   00491 IF S(1)<>S(0) THEN 510
    0x5c07b1b052e0 ---------A   00492 PRINT:PRINT "   ***** END OF SECOND HALF *****":PRINT
    0x5c07b1b05460 ---------A   00493 PRINT "SCORE AT END OF REGULATION TIME:"
    0x5c07b1b05c30 ---------A   00494 PRINT "        DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c07b1b05cc0 ---------A   00495 PRINT
    0x5c07b1b06030 ---------A   00496 PRINT "BEGIN TWO MINUTE OVERTIME PERIOD"
    0x5c07b1b06240 ---------A   00499 T=93
    0x5c07b1b062c0 ---------A   00500 GOTO 370
    0x5c07b1b06440 ---------A T 00510 PRINT "   ***** END OF GAME *****"
    0x5c07b1b06c20 ---------A   00515 PRINT "FINAL SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c07b1b06c70 ---------A   00520 STOP
    0x5c07b1b06d10 ---------B G 00600 PRINT
    0x5c07b1b06e80 ---------B   00610 PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    0x5c07b1b06ef0 ---------B   00620 PRINT
    0x5c07b1b06f40 ---------B   00630 RETURN
    0x5c07b1b07230 ---------A T 01000 ON Z GOTO 1040,1040
    0x5c07b1b072a0 ---------A   01030 GOTO 1300
    0x5c07b1b075c0 ---------A T 01040 T=T+1
    0x5c07b1b07810 ---------A   01041 IF T=50 THEN 8000
    0x5c07b1b07a70 ---------A   01042 IF T=92 THEN 1046
    0x5c07b1b07af0 ---------A   01043 GOTO 1050
    0x5c07b1b07b50 ---------A T 01046 GOSUB 600
    0x5c07b1b07ca0 ---------A T 01050 PRINT "JUMP SHOT"
    0x5c07b1b081e0 ---------A   01060 IF RND(1)>.341*D/8 THEN 1090
    0x5c07b1b08340 ---------A   01070 PRINT "SHOT IS GOOD."
    0x5c07b1b083b0 ---------A   01075 GOSUB 7000
    0x5c07b1b08420 ---------A   01085 GOTO 3000
    0x5c07b1b08950 ---------A T 01090 IF RND(1)>.682*D/8 THEN 1200
    0x5c07b1b08ac0 ---------A   01100 PRINT "SHOT IS OFF TARGET."
    0x5c07b1b09010 ---------A   01105 IF D/6*RND(1)>.45 THEN 1130
    0x5c07b1b09180 ---------A   01110 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c07b1b09200 ---------A   01120 GOTO 1145
    0x5c07b1b09440 ---------A T 01130 PRINT "REBOUND TO ";O$
    0x5c07b1b094c0 ---------A   01140 GOTO 3000
    0x5c07b1b097c0 ---------A T 01145 IF RND(1)>.4 THEN 1158
    0x5c07b1b09840 ---------A   01150 GOTO 1300
    0x5c07b1b09a90 ---------A T 01158 IF D=6 THEN 5100
    0x5c07b1b0a030 ---------A T 01160 PRINT "BALL PASSED BACK TO YOU. ";
    0x5c07b1b0a0b0 ---------A   01170 GOTO 430
    0x5c07b1b0a3c0 ----------   01180 IF RND(1)>.9 THEN 1190
    0x5c07b1b0a530 ----------   01185 PRINT "PLAYER FOULED, TWO SHOTS."
    0x5c07b1b0a5a0 ----------   01187 GOSUB 4000
    0x5c07b1b0a620 ----------   01188 GOTO 3000
    0x5c07b1b0a960 ---------- T 01190 PRINT "BALL STOLEN. ";O$;"'S BALL."
    0x5c07b1b0a9e0 ----------   01195 GOTO 3000
    0x5c07b1b0af20 ---------A T 01200 IF RND(1)>.782*D/8 THEN 1250
    0x5c07b1b0b0c0 ---------A   01210 PRINT "SHOT IS BLOCKED.  BALL CONTROLLED BY ";
    0x5c07b1b0b3d0 ---------A   01230 IF RND(1)>.5 THEN 1242
    0x5c07b1b0b530 ---------A   01235 PRINT "DARTMOUTH."
    0x5c07b1b0b5a0 ---------A   01240 GOTO 430
    0x5c07b1b0b7e0 ---------A T 01242 PRINT O$;"."
    0x5c07b1b0b860 ---------A   01245 GOTO 3000
    0x5c07b1b0bda0 ---------A T 01250 IF RND(1)>.843*D/8 THEN 1270
    0x5c07b1b0bf10 ---------A   01255 PRINT "SHOOTER IS FOULED.  TWO SHOTS."
    0x5c07b1b0bf80 ---------A   01260 GOSUB 4000
    0x5c07b1b0c000 ---------A   01265 GOTO 3000
    0x5c07b1b0c150 ---------A T 01270 PRINT "CHARGING FOUL.  DARTMOUTH LOSES BALL."
    0x5c07b1b0c1c0 ---------A   01280 GOTO 3000
    0x5c07b1b0c4e0 ---------A T 01300 T=T+1
    0x5c07b1b0c730 ---------A   01301 IF T=50 THEN 8000
    0x5c07b1b0c990 ---------A   01302 IF T=92 THEN 1304
    0x5c07b1b0ca10 ---------A   01303 GOTO 1305
    0x5c07b1b0ca70 ---------A T 01304 GOSUB 600
    0x5c07b1b0ccb0 ---------A T 01305 IF Z=0 THEN 2010
    0x5c07b1b0cf10 ---------A   01310 IF Z>3 THEN 1700
    0x5c07b1b0d080 ---------A   01320 PRINT "LAY UP."
    0x5c07b1b0d5c0 ---------A T 01330 IF 7/D*RND(1)>.4 THEN 1360
    0x5c07b1b0d730 ---------A   01340 PRINT "SHOT IS GOOD.  TWO POINTS."
    0x5c07b1b0d7a0 ---------A   01345 GOSUB 7000
    0x5c07b1b0d810 ---------A   01355 GOTO 3000
    0x5c07b1b0dd40 ---------A T 01360 IF 7/D*RND(1)>.7 THEN 1500
    0x5c07b1b0deb0 ---------A   01370 PRINT "SHOT IS OFF THE RIM."
    0x5c07b1b0e2d0 ---------A   01380 IF RND(1)>2/3 THEN 1415
    0x5c07b1b0e540 ---------A   01390 PRINT O$;" CONTROLS THE REBOUND."
    0x5c07b1b0e5d0 ---------A   01400 GOTO 3000
    0x5c07b1b0e730 ---------A T 01415 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c07b1b0ea40 ---------A   01420 IF RND(1)>.4 THEN 1440
    0x5c07b1b0ead0 ---------A   01430 GOTO 1300
    0x5c07b1b0ec40 ---------A T 01440 PRINT "BALL PASSED BACK TO YOU.";
    0x5c07b1b0ecc0 ---------A   01450 GOTO 430
    0x5c07b1b0f200 ---------A T 01500 IF 7/D*RND(1)>.875 THEN 1600
    0x5c07b1b0f370 ---------A   01510 PRINT "SHOOTER FOULED.  TWO SHOTS."
    0x5c07b1b0f3e0 ---------A   01520 GOSUB 4000
    0x5c07b1b0f450 ---------A   01530 GOTO 3000
    0x5c07b1b0f990 ---------A T 01600 IF 7/D*RND(1)>.925 THEN 1630
    0x5c07b1b0fcf0 ---------A   01610 PRINT "SHOT BLOCKED. ";O$;"'S BALL."
    0x5c07b1b0fd80 ---------A   01620 GOTO 3000
    0x5c07b1b0fee0 ---------A T 01630 PRINT "CHARGING FOUL.  DARTMOUTH LOSES THE BALL."
    0x5c07b1b0ff50 ---------A   01640 GOTO 3000
    0x5c07b1b10090 ---------A T 01700 PRINT "SET SHOT."
    0x5c07b1b10120 ---------A   01710 GOTO 1330
    0x5c07b1b10290 ---------A T 02010 INPUT "YOUR NEW DEFENSIVE ALLIGNMENT IS";D
    0x5c07b1b104f0 ---------A   02030 IF D<6 THEN 2010
    0x5c07b1b10570 ---------A   02040 GOTO 425
    0x5c07b1b10770 ---------A T 03000 P=1
    0x5c07b1b10aa0 ---------A   03005 T=T+1
    0x5c07b1b10cf0 ---------A   03008 IF T=50 THEN 8000
    0x5c07b1b10d70 ---------A   03012 GOTO 3018
    0x5c07b1b10dd0 ----------   03015 GOSUB 600
    0x5c07b1b10e30 ---------A T 03018 PRINT
    0x5c07b1b114e0 ---------A   03020 Z1=10/4*RND(1)+1
    0x5c07b1b11f40 ---------A   03030 IF Z1>2 THEN 3500
    0x5c07b1b120b0 ---------A   03040 PRINT "JUMP SHOT."
    0x5c07b1b125f0 ---------A   03050 IF 8/D*RND(1)>.35 THEN 3100
    0x5c07b1b12750 ---------A   03060 PRINT "SHOT IS GOOD."
    0x5c07b1b127c0 ---------A   03080 GOSUB 6000
    0x5c07b1b12830 ---------A   03090 GOTO 425
    0x5c07b1b12d60 ---------A T 03100 IF 8/D*RND(1)>.75 THEN 3200
    0x5c07b1b12ed0 ---------A   03105 PRINT "SHOT IS OFF RIM."
    0x5c07b1b13420 ---------A T 03110 IF D/6*RND(1)>.5 THEN 3150
    0x5c07b1b13590 ---------A   03120 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c07b1b13610 ---------A   03130 GOTO 425
    0x5c07b1b13860 ---------A T 03150 PRINT O$;" CONTROLS THE REBOUND."
    0x5c07b1b13ac0 ---------A   03160 IF D=6 THEN 5000
    0x5c07b1b13df0 ---------A T 03165 IF RND(1)>.5 THEN 3175
    0x5c07b1b14150 ---------A   03168 PRINT "PASS BACK TO ";O$;" GUARD."
    0x5c07b1b141c0 ---------A   03170 GOTO 3000
    0x5c07b1b14230 ---------A T 03175 GOTO 3500
    0x5c07b1b14760 ---------A T 03200 IF 8/D*RND(1)>.9 THEN 3310
    0x5c07b1b148d0 ---------A   03210 PRINT "PLAYER FOULED.  TWO SHOTS."
    0x5c07b1b14940 ---------A   03220 GOSUB 4000
    0x5c07b1b149c0 ---------A   03230 GOTO 425
    0x5c07b1b14b10 ---------A T 03310 PRINT "OFFENSIVE FOUL.  DARTMOUTH'S BALL."
    0x5c07b1b14b80 ---------A   03320 GOTO 425
    0x5c07b1b14dc0 ---------A T 03500 IF Z1>3 THEN 3800
    0x5c07b1b14f30 ---------A   03510 PRINT "LAY UP."
    0x5c07b1b15470 ---------A T 03520 IF 7/D*RND(1)>.413 THEN 3600
    0x5c07b1b155d0 ---------A   03530 PRINT "SHOT IS GOOD."
    0x5c07b1b15640 ---------A   03540 GOSUB 6000
    0x5c07b1b156b0 ---------A   03550 GOTO 425
    0x5c07b1b157f0 ---------A T 03600 PRINT "SHOT IS MISSED."
    0x5c07b1b15860 ---------A   03610 GOTO 3110
    0x5c07b1b159a0 ---------A T 03800 PRINT "SET SHOT."
    0x5c07b1b15a10 ---------A   03810 GOTO 3520
    0x5c07b1b15a70 ---------C G 04000 REM FOUL SHOOTING
    0x5c07b1b15db0 ---------C   04010 IF RND(1)>.49 THEN 4050
    0x5c07b1b15f20 ---------C   04020 PRINT "SHOOTER MAKES BOTH SHOTS."
    0x5c07b1b16610 ---------C   04030 S(1-P)=S(1-P)+2
    0x5c07b1b16680 ---------C T 04040 GOSUB 6010
    0x5c07b1b166c0 ---------C   04041 RETURN
    0x5c07b1b16a10 ---------C T 04050 IF RND(1)>.75 THEN 4100
    0x5c07b1b16b90 ---------C   04060 PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    0x5c07b1b17280 ---------C   04070 S(1-P)=S(1-P)+1
    0x5c07b1b17300 ---------C   04080 GOTO 4040
    0x5c07b1b17440 ---------C T 04100 PRINT "BOTH SHOTS MISSED."
    0x5c07b1b174c0 ---------C   04110 GOTO 4040
    0x5c07b1b177c0 ---------A T 05000 IF RND(1)>.75 THEN 5010
    0x5c07b1b17860 ---------A   05005 GOTO 3165
    0x5c07b1b179c0 ---------A T 05010 PRINT "BALL STOLEN.  EASY LAY UP FOR DARTMOUTH."
    0x5c07b1b17a30 ---------A   05015 GOSUB 7000
    0x5c07b1b17aa0 ---------A   05030 GOTO 3000
    0x5c07b1b17da0 ---------A T 05100 IF RND(1)>.6 THEN 5120
    0x5c07b1b17e40 ---------A   05110 GOTO 1160
    0x5c07b1b18180 ---------A T 05120 PRINT "PASS STOLEN BY ";O$;" EASY LAYUP."
    0x5c07b1b181f0 ---------A   05130 GOSUB 6000
    0x5c07b1b18250 ---------A   05140 GOTO 425
    0x5c07b1b18700 ---------D G 06000 S(0)=S(0)+2
    0x5c07b1b18cd0 ---------D G 06010 PRINT "SCORE: ";S(1);"TO";S(0)
    0x5c07b1b18d20 ---------D   06020 RETURN
    0x5c07b1b191e0 ---------E G 07000 S(1)=S(1)+2
    0x5c07b1b19250 ---------E   07010 GOSUB 6010
    0x5c07b1b19290 ---------E   07020 RETURN
    0x5c07b1b194f0 ---------A T 08000 PRINT:PRINT "   ***** END OF FIRST HALF *****":PRINT
    0x5c07b1b19cc0 ---------A   08010 PRINT "SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c07b1b19d30 ---------A   08015 PRINT
    0x5c07b1b19da0 ---------A   08016 PRINT
    0x5c07b1b19e10 ---------A   08020 GOTO 370
    0x5c07b1b19e50 ---------A   09999 END
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
   A) 0x5c07b1afbb80 (00005)   0x5c07b1afbb80 (00005)   0x5c07b1b19e50 (09999)   0x5c07b1b19e50 (09999)   
   B) 0x5c07b1b06d10 (00600)   0x5c07b1b06d10 (00600)   0x5c07b1b06f40 (00630)   0x5c07b1b06f40 (00630)   
   C) 0x5c07b1b15a70 (04000)   0x5c07b1b15a70 (04000)   0x5c07b1b166c0 (04041)   0x5c07b1b174c0 (04110)   
   D) 0x5c07b1b18700 (06000)   0x5c07b1b18700 (06000)   0x5c07b1b18d20 (06020)   0x5c07b1b18d20 (06020)   
   E) 0x5c07b1b191e0 (07000)   0x5c07b1b191e0 (07000)   0x5c07b1b19290 (07020)   0x5c07b1b19290 (07020)   

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
    D                        Integer     
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
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,9} 
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
    Z                        Integer     
    Z1                       Integer     

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
    0x5c07b1afbb80 ---------A   01000 PRINT TAB(31);"BASKETBALL"
    0x5c07b1afcf30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c07b1aeb2b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5c07b1afcaa0 ---------A   01030 PRINT "THIS IS DARTMOUTH COLLEGE BASKETBALL.  YOU WILL BE DARTMOUTH"
    0x5c07b1afb090 ---------A   01040 PRINT " CAPTAIN AND PLAYMAKER.  CALL SHOTS AS FOLLOWS:  1. LONG"
    0x5c07b1afb480 ---------A   01050 PRINT " (1050 FT.) JUMP SHOT; 2. SHORT (15 FT.) JUMP SHOT; 3. LAY"
    0x5c07b1afc730 ---------A   01060 PRINT " UP; 4. SET SHOT."
    0x5c07b1afd150 ---------A   01070 PRINT "BOTH TEAMS WILL USE THE SAME DEFENSE.  CALL DEFENSE AS"
    0x5c07b1afb6b0 ---------A   01080 PRINT "FOLLOWS:  6. PRESS; 6.5 MAN-TO MAN; 7. ZONE; 7.5 NONE."
    0x5c07b1afb800 ---------A   01090 PRINT "TO CHANGE DEFENSE, JUST TYPE 0 AS YOUR NEXT SHOT."
    0x5c07b1afa670 ---------A   01100 INPUT "YOUR STARTING DEFENSE WILL BE";D:IF D<6 THEN 2090
    0x5c07b1b02b40 ---------A   01110 PRINT
    0x5c07b1b02cf0 ---------A   01120 INPUT "CHOOSE YOUR OPPONENT";O$
    0x5c07b1b02e10 ---------A T 01130 PRINT "CENTER JUMP"
    0x5c07b1b031e0 ---------A   01140 IF RND(1)> 3/5 THEN 1170
    0x5c07b1b03400 ---------A   01150 PRINT O$;" CONTROLS THE TAP."
    0x5c07b1b03450 ---------A   01160 GOTO 2120
    0x5c07b1b03570 ---------A T 01170 PRINT "DARTMOUTH CONTROLS THE TAP."
    0x5c07b1b035e0 ---------A T 01180 PRINT
    0x5c07b1b03810 ---------A T 01190 INPUT "YOUR SHOT";Z
    0x5c07b1b03ad0 ---------A   01200 P=0
    0x5c07b1b03e30 ---------A   01210 IF Z<>INT(Z) THEN 1240
    0x5c07b1b042b0 ---------A   01220 IF Z<0 OR Z>4 THEN 1240
    0x5c07b1b04350 ---------A   01230 GOTO 1250
    0x5c07b1b04520 ---------A T 01240 PRINT "INCORRECT ANSWER.  RETYPE IT. ";:GOTO 1190
    0x5c07b1b04820 ---------A T 01250 IF RND(1)<.5 THEN 1390
    0x5c07b1b04b40 ---------A   01260 IF T<100 THEN 1390
    0x5c07b1b04bd0 ---------A   01270 PRINT
    0x5c07b1b050b0 ---------A   01280 IF S(1)<>S(0) THEN 1360
    0x5c07b1b052e0 ---------A   01290 PRINT:PRINT "   ***** END OF SECOND HALF *****":PRINT
    0x5c07b1b05460 ---------A   01300 PRINT "SCORE AT END OF REGULATION TIME:"
    0x5c07b1b05c30 ---------A   01310 PRINT "        DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c07b1b05cc0 ---------A   01320 PRINT
    0x5c07b1b06030 ---------A   01330 PRINT "BEGIN TWO MINUTE OVERTIME PERIOD"
    0x5c07b1b06240 ---------A   01340 T=93
    0x5c07b1b062c0 ---------A   01350 GOTO 1130
    0x5c07b1b06440 ---------A T 01360 PRINT "   ***** END OF GAME *****"
    0x5c07b1b06c20 ---------A   01370 PRINT "FINAL SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c07b1b06c70 ---------A   01380 STOP
    0x5c07b1b07230 ---------A T 01390 ON Z GOTO 1410,1410
    0x5c07b1b072a0 ---------A   01400 GOTO 1760
    0x5c07b1b075c0 ---------A T 01410 T=T+1
    0x5c07b1b07810 ---------A   01420 IF T=50 THEN 2610
    0x5c07b1b07a70 ---------A   01430 IF T=92 THEN 1450
    0x5c07b1b07af0 ---------A   01440 GOTO 1460
    0x5c07b1b07b50 ---------A T 01450 GOSUB 2670
    0x5c07b1b07ca0 ---------A T 01460 PRINT "JUMP SHOT"
    0x5c07b1b081e0 ---------A   01470 IF RND(1)>.341*D/8 THEN 1510
    0x5c07b1b08340 ---------A   01480 PRINT "SHOT IS GOOD."
    0x5c07b1b083b0 ---------A   01490 GOSUB 2890
    0x5c07b1b08420 ---------A   01500 GOTO 2120
    0x5c07b1b08950 ---------A T 01510 IF RND(1)>.682*D/8 THEN 1630
    0x5c07b1b08ac0 ---------A   01520 PRINT "SHOT IS OFF TARGET."
    0x5c07b1b09010 ---------A   01530 IF D/6*RND(1)>.45 THEN 1560
    0x5c07b1b09180 ---------A   01540 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c07b1b09200 ---------A   01550 GOTO 1580
    0x5c07b1b09440 ---------A T 01560 PRINT "REBOUND TO ";O$
    0x5c07b1b094c0 ---------A   01570 GOTO 2120
    0x5c07b1b097c0 ---------A T 01580 IF RND(1)>.4 THEN 1600
    0x5c07b1b09840 ---------A   01590 GOTO 1760
    0x5c07b1b09a90 ---------A T 01600 IF D=6 THEN 2560
    0x5c07b1b0a030 ---------A T 01610 PRINT "BALL PASSED BACK TO YOU. ";
    0x5c07b1b0a0b0 ---------A   01620 GOTO 1190
    0x5c07b1b0af20 ---------A T 01630 IF RND(1)>.782*D/8 THEN 1700
    0x5c07b1b0b0c0 ---------A   01640 PRINT "SHOT IS BLOCKED.  BALL CONTROLLED BY ";
    0x5c07b1b0b3d0 ---------A   01650 IF RND(1)>.5 THEN 1680
    0x5c07b1b0b530 ---------A   01660 PRINT "DARTMOUTH."
    0x5c07b1b0b5a0 ---------A   01670 GOTO 1190
    0x5c07b1b0b7e0 ---------A T 01680 PRINT O$;"."
    0x5c07b1b0b860 ---------A   01690 GOTO 2120
    0x5c07b1b0bda0 ---------A T 01700 IF RND(1)>.843*D/8 THEN 1740
    0x5c07b1b0bf10 ---------A   01710 PRINT "SHOOTER IS FOULED.  TWO SHOTS."
    0x5c07b1b0bf80 ---------A   01720 GOSUB 2730
    0x5c07b1b0c000 ---------A   01730 GOTO 2120
    0x5c07b1b0c150 ---------A T 01740 PRINT "CHARGING FOUL.  DARTMOUTH LOSES BALL."
    0x5c07b1b0c1c0 ---------A   01750 GOTO 2120
    0x5c07b1b0c4e0 ---------A T 01760 T=T+1
    0x5c07b1b0c730 ---------A   01770 IF T=50 THEN 2610
    0x5c07b1b0c990 ---------A   01780 IF T=92 THEN 1800
    0x5c07b1b0ca10 ---------A   01790 GOTO 1810
    0x5c07b1b0ca70 ---------A T 01800 GOSUB 2670
    0x5c07b1b0ccb0 ---------A T 01810 IF Z=0 THEN 2090
    0x5c07b1b0cf10 ---------A   01820 IF Z>3 THEN 2070
    0x5c07b1b0d080 ---------A   01830 PRINT "LAY UP."
    0x5c07b1b0d5c0 ---------A T 01840 IF 7/D*RND(1)>.4 THEN 1880
    0x5c07b1b0d730 ---------A   01850 PRINT "SHOT IS GOOD.  TWO POINTS."
    0x5c07b1b0d7a0 ---------A   01860 GOSUB 2890
    0x5c07b1b0d810 ---------A   01870 GOTO 2120
    0x5c07b1b0dd40 ---------A T 01880 IF 7/D*RND(1)>.7 THEN 1980
    0x5c07b1b0deb0 ---------A   01890 PRINT "SHOT IS OFF THE RIM."
    0x5c07b1b0e2d0 ---------A   01900 IF RND(1)>2/3 THEN 1930
    0x5c07b1b0e540 ---------A   01910 PRINT O$;" CONTROLS THE REBOUND."
    0x5c07b1b0e5d0 ---------A   01920 GOTO 2120
    0x5c07b1b0e730 ---------A T 01930 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c07b1b0ea40 ---------A   01940 IF RND(1)>.4 THEN 1960
    0x5c07b1b0ead0 ---------A   01950 GOTO 1760
    0x5c07b1b0ec40 ---------A T 01960 PRINT "BALL PASSED BACK TO YOU.";
    0x5c07b1b0ecc0 ---------A   01970 GOTO 1190
    0x5c07b1b0f200 ---------A T 01980 IF 7/D*RND(1)>.875 THEN 2020
    0x5c07b1b0f370 ---------A   01990 PRINT "SHOOTER FOULED.  TWO SHOTS."
    0x5c07b1b0f3e0 ---------A   02000 GOSUB 2730
    0x5c07b1b0f450 ---------A   02010 GOTO 2120
    0x5c07b1b0f990 ---------A T 02020 IF 7/D*RND(1)>.925 THEN 2050
    0x5c07b1b0fcf0 ---------A   02030 PRINT "SHOT BLOCKED. ";O$;"'S BALL."
    0x5c07b1b0fd80 ---------A   02040 GOTO 2120
    0x5c07b1b0fee0 ---------A T 02050 PRINT "CHARGING FOUL.  DARTMOUTH LOSES THE BALL."
    0x5c07b1b0ff50 ---------A   02060 GOTO 2120
    0x5c07b1b10090 ---------A T 02070 PRINT "SET SHOT."
    0x5c07b1b10120 ---------A   02080 GOTO 1840
    0x5c07b1b10290 ---------A T 02090 INPUT "YOUR NEW DEFENSIVE ALLIGNMENT IS";D
    0x5c07b1b104f0 ---------A   02100 IF D<6 THEN 2090
    0x5c07b1b10570 ---------A   02110 GOTO 1180
    0x5c07b1b10770 ---------A T 02120 P=1
    0x5c07b1b10aa0 ---------A   02130 T=T+1
    0x5c07b1b10cf0 ---------A   02140 IF T=50 THEN 2610
    0x5c07b1b10d70 ---------A   02150 GOTO 2160
    0x5c07b1b10e30 ---------A T 02160 PRINT
    0x5c07b1b114e0 ---------A   02170 Z1=10/4*RND(1)+1
    0x5c07b1b11f40 ---------A   02180 IF Z1>2 THEN 2410
    0x5c07b1b120b0 ---------A   02190 PRINT "JUMP SHOT."
    0x5c07b1b125f0 ---------A   02200 IF 8/D*RND(1)>.35 THEN 2240
    0x5c07b1b12750 ---------A   02210 PRINT "SHOT IS GOOD."
    0x5c07b1b127c0 ---------A   02220 GOSUB 2850
    0x5c07b1b12830 ---------A   02230 GOTO 1180
    0x5c07b1b12d60 ---------A T 02240 IF 8/D*RND(1)>.75 THEN 2350
    0x5c07b1b12ed0 ---------A   02250 PRINT "SHOT IS OFF RIM."
    0x5c07b1b13420 ---------A T 02260 IF D/6*RND(1)>.5 THEN 2290
    0x5c07b1b13590 ---------A   02270 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c07b1b13610 ---------A   02280 GOTO 1180
    0x5c07b1b13860 ---------A T 02290 PRINT O$;" CONTROLS THE REBOUND."
    0x5c07b1b13ac0 ---------A   02300 IF D=6 THEN 2510
    0x5c07b1b13df0 ---------A T 02310 IF RND(1)>.5 THEN 2340
    0x5c07b1b14150 ---------A   02320 PRINT "PASS BACK TO ";O$;" GUARD."
    0x5c07b1b141c0 ---------A   02330 GOTO 2120
    0x5c07b1b14230 ---------A T 02340 GOTO 2410
    0x5c07b1b14760 ---------A T 02350 IF 8/D*RND(1)>.9 THEN 2390
    0x5c07b1b148d0 ---------A   02360 PRINT "PLAYER FOULED.  TWO SHOTS."
    0x5c07b1b14940 ---------A   02370 GOSUB 2730
    0x5c07b1b149c0 ---------A   02380 GOTO 1180
    0x5c07b1b14b10 ---------A T 02390 PRINT "OFFENSIVE FOUL.  DARTMOUTH'S BALL."
    0x5c07b1b14b80 ---------A   02400 GOTO 1180
    0x5c07b1b14dc0 ---------A T 02410 IF Z1>3 THEN 2490
    0x5c07b1b14f30 ---------A   02420 PRINT "LAY UP."
    0x5c07b1b15470 ---------A T 02430 IF 7/D*RND(1)>.413 THEN 2470
    0x5c07b1b155d0 ---------A   02440 PRINT "SHOT IS GOOD."
    0x5c07b1b15640 ---------A   02450 GOSUB 2850
    0x5c07b1b156b0 ---------A   02460 GOTO 1180
    0x5c07b1b157f0 ---------A T 02470 PRINT "SHOT IS MISSED."
    0x5c07b1b15860 ---------A   02480 GOTO 2260
    0x5c07b1b159a0 ---------A T 02490 PRINT "SET SHOT."
    0x5c07b1b15a10 ---------A   02500 GOTO 2430
    0x5c07b1b177c0 ---------A T 02510 IF RND(1)>.75 THEN 2530
    0x5c07b1b17860 ---------A   02520 GOTO 2310
    0x5c07b1b179c0 ---------A T 02530 PRINT "BALL STOLEN.  EASY LAY UP FOR DARTMOUTH."
    0x5c07b1b17a30 ---------A   02540 GOSUB 2890
    0x5c07b1b17aa0 ---------A   02550 GOTO 2120
    0x5c07b1b17da0 ---------A T 02560 IF RND(1)>.6 THEN 2580
    0x5c07b1b17e40 ---------A   02570 GOTO 1610
    0x5c07b1b18180 ---------A T 02580 PRINT "PASS STOLEN BY ";O$;" EASY LAYUP."
    0x5c07b1b181f0 ---------A   02590 GOSUB 2850
    0x5c07b1b18250 ---------A   02600 GOTO 1180
    0x5c07b1b194f0 ---------A T 02610 PRINT:PRINT "   ***** END OF FIRST HALF *****":PRINT
    0x5c07b1b19cc0 ---------A   02620 PRINT "SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c07b1b19d30 ---------A   02630 PRINT
    0x5c07b1b19da0 ---------A   02640 PRINT
    0x5c07b1b19e10 ---------A   02650 GOTO 1130
    0x5c07b1b19e50 ---------A   02660 END
    0x5c07b1b06d10 ---------B G 02670 PRINT
    0x5c07b1b06e80 ---------B   02680 PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    0x5c07b1b06ef0 ---------B   02690 PRINT
    0x5c07b1b1fd30 ---------B   02700 GOTO 02710
    0x5c07b1b1fd70 ---------B T 02710 RETURN
    0x5c07b1b15a70 ---------C   02720 REM FOUL SHOOTING
    0x5c07b1b15db0 ---------C G 02730 IF RND(1)>.49 THEN 2780
    0x5c07b1b15f20 ---------C   02740 PRINT "SHOOTER MAKES BOTH SHOTS."
    0x5c07b1b16610 ---------C   02750 S(1-P)=S(1-P)+2
    0x5c07b1b16680 ---------C T 02760 GOSUB 2860
    0x5c07b1b1fdb0 ---------C   02770 GOTO 02840
    0x5c07b1b16a10 ---------C T 02780 IF RND(1)>.75 THEN 2820
    0x5c07b1b16b90 ---------C   02790 PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    0x5c07b1b17280 ---------C   02800 S(1-P)=S(1-P)+1
    0x5c07b1b17300 ---------C   02810 GOTO 2760
    0x5c07b1b17440 ---------C T 02820 PRINT "BOTH SHOTS MISSED."
    0x5c07b1b174c0 ---------C   02830 GOTO 2760
    0x5c07b1b1fe10 ---------C T 02840 RETURN
    0x5c07b1b18700 ---------D G 02850 S(0)=S(0)+2
    0x5c07b1b18cd0 ---------D G 02860 PRINT "SCORE: ";S(1);"TO";S(0)
    0x5c07b1b1fe70 ---------D   02870 GOTO 02880
    0x5c07b1b1fed0 ---------D T 02880 RETURN
    0x5c07b1b191e0 ---------E G 02890 S(1)=S(1)+2
    0x5c07b1b19250 ---------E   02900 GOSUB 2860
    0x5c07b1b1ff30 ---------E   02910 GOTO 02920
    0x5c07b1b1ff90 ---------E T 02920 RETURN
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
int    D_int;                                     // Basic: D 
char*  O_str;                                     // Basic: O$ 
int    P_int;                                     // Basic: P 
int    S_int_arr[10];                             // Basic: S 
int    T_int;                                     // Basic: T 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02680 PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   *** TWO MINUTES LEFT IN THE GAME ***");strcat(buf,"\n");fputs(buf,fh); };
    // 02690 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOOTER MAKES BOTH SHOTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02750 S(1-P)=S(1-P)+2
    S_int_arr[1-P_int] = S_int_arr[1-P_int]+2;

  Lbl_02760:
    // 02760 GOSUB 2860
    Routine_02860();
    // 02770 GOTO 02840
    goto Lbl_02840;

  Lbl_02780:
    // 02780 IF RND(1)>.75 THEN 2820
    if(RND(1)>0.75)goto Lbl_02820;
    // 02790 PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOOTER MAKES ONE SHOT AND MISSES ONE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02800 S(1-P)=S(1-P)+1
    S_int_arr[1-P_int] = S_int_arr[1-P_int]+1;
    // 02810 GOTO 2760
    goto Lbl_02760;

  Lbl_02820:
    // 02820 PRINT "BOTH SHOTS MISSED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BOTH SHOTS MISSED.");strcat(buf,"\n");fputs(buf,fh); };
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
    S_int_arr[0] = S_int_arr[0]+2;

void Routine_02860(){
    // 02860 PRINT "SCORE: ";S(1);"TO";S(0)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SCORE: "); b2c_INT(buf,S_int_arr[1]);strcat(buf,"TO"); b2c_INT(buf,S_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };
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
    S_int_arr[1] = S_int_arr[1]+2;
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
