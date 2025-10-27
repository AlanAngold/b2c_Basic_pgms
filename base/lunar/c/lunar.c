/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/lunar.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e2c02a0bd50 ---------A   00100 PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    0x5e2c02a0bed0 ---------A   00110 PRINT
    0x5e2c02a0bf90 ---------A   00120 PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    0x5e2c02a0afc0 ---------A   00130 PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    0x5e2c02a0a910 ---------A   00140 PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    0x5e2c02a096d0 ---------A   00150 INPUT A
    0x5e2c02a09670 ---------A   00160 IF A=1 THEN320
    0x5e2c02a0a480 ---------A   00170 IF A=0 THEN 180
    0x5e2c02a0b640 ---------A T 00180 PRINT
    0x5e2c02a09c20 ---------A   00190 PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    0x5e2c02a0c170 ---------A   00200 PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    0x5e2c02a0a720 ---------A   00210 PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    0x5e2c02a11840 ---------A   00220 PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    0x5e2c02a119e0 ---------A   00230 PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    0x5e2c02a11b80 ---------A   00240 PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    0x5e2c02a11d10 ---------A   00250 PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    0x5e2c02a11eb0 ---------A   00260 PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    0x5e2c02a12060 ---------A   00270 PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    0x5e2c02a121f0 ---------A   00280 PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    0x5e2c02a12350 ---------A   00290 PRINT"     LESS THAN 20 FEET PER SECOND."
    0x5e2c02a124f0 ---------A   00300 PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    0x5e2c02a12650 ---------A   00310 PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    0x5e2c02a126e0 ---------A T 00320 PRINT
    0x5e2c02a127f0 ---------A   00330 PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    0x5e2c02a129a0 ---------A   00340 INPUT T$
    0x5e2c02a12a60 ---------A   00350 PRINT
    0x5e2c02a12b00 ---------A   00360 :             ##.##             #####             #####          ####
    0x5e2c02a12d20 ---------A   00370 PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    0x5e2c02a12e80 ---------A   00380 PRINT"              ----            ------            --------        ----"
    0x5e2c02a12ed0 ---------A   00390 PRINT
    0x5e2c02a13260 ---------A   00400 PRINT"MOON" TAB(45);"*"
    0x5e2c02a13530 ---------A   00410 H=40000
    0x5e2c02a13800 ---------A   00420 V=8000
    0x5e2c02a13ce0 ---------A   00430 V1=8000
    0x5e2c02a14090 ---------A   00440 J=RND(-1)
    0x5e2c02a144a0 ---------A   00450 LET J=INT(J*15)
    0x5e2c02a14770 ---------A   00460 F=9000
    0x5e2c02a14a40 ---------A   00480 N=0.00
    0x5e2c02a14d10 ---------A   00490 B=40
    0x5e2c02a14d80 ---------A   00500 GO TO 610
    0x5e2c02a14f80 ---------A T 00510 B=0
    0x5e2c02a152f0 ---------A   00520 FOR X=1 TO 100
    0x5e2c02a15e90 ---------A   00530 V=V-(K^3*1.5+K*15)+10-H/10000
    0x5e2c02a163c0 ---------A   00540 F=F-ABS(K*93)
    0x5e2c02a16610 ---------A   00550 IF F<0 THEN 770
    0x5e2c02a16bd0 ---------A   00560 H=H-(V+V1)/2
    0x5e2c02a17000 ---------A   00570 B=H/1000+4
    0x5e2c02a17250 ---------A   00580 IF H<0 THEN 800
    0x5e2c02a17470 ---------A   00590 V1=V
    0x5e2c02a17830 ---------A   00600 PRINT"MOON"; TAB(B);"*"
    0x5e2c02a17d60 ---------A T 00610 PRINT USING 360,N,H,V,F
    0x5e2c02a17ed0 ---------A   00620 PRINT"      FIRE";
    0x5e2c02a17f70 ---------A   00630 GO TO 650
    0x5e2c02a180d0 ---------A T 00640 PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
    0x5e2c02a18220 ---------A T 00650 INPUT K
    0x5e2c02a18490 ---------A   00660 IF K=999 THEN 880
    0x5e2c02a187d0 ---------A   00670 IF ABS(K)>10 THEN 640
    0x5e2c02a18850 ---------A   00680 PRINT
    0x5e2c02a18b80 ---------A   00690 N=N+1.00
    0x5e2c02a18dd0 ---------A   00700 IF X=2 THEN 730
    0x5e2c02a18f10 ---------A T 00710 NEXT X
    0x5e2c02a18f90 ---------A   00720 GO TO 510
    0x5e2c02a191d0 ---------A T 00730 IF J=2 THEN 1140
    0x5e2c02a19430 ---------A   00740 IF J=13 THEN 1180
    0x5e2c02a19690 ---------A   00750 IF J=4 THEN 1340
    0x5e2c02a19b20 ---------A   00760 GO TO 510
    0x5e2c02a19bc0 ---------A T 00770 PRINT
    0x5e2c02a19f30 ---------A   00780 PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    0x5e2c02a19fa0 ---------A   00790 GO TO 1560
    0x5e2c02a1a1e0 ---------A T 00800 IF V<0 THEN 910
    0x5e2c02a1a440 ---------A   00810 IF V<20 THEN 950
    0x5e2c02a1a6a0 ---------A   00820 IFV<40 THEN 1570
    0x5e2c02a1a750 ---------A   00830 PRINT
    0x5e2c02a1acb0 ---------A   00840 PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    0x5e2c02a1ad20 ---------A   00850 GO TO 1560
    0x5e2c02a1af60 ----------   00860 IF H<5 THEN 950
    0x5e2c02a1b010 ----------   00870 GO TO 510
    0x5e2c02a1b180 ---------A T 00880 PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    0x5e2c02a1b2e0 ---------A   00890 PRINT"  THE LUNAR SURFACE !!!!"
    0x5e2c02a1b350 ---------A   00900 GO TO 980
    0x5e2c02a1b3f0 ---------A T 00910 PRINT
    0x5e2c02a1b580 ---------A   00920 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    0x5e2c02a1b6d0 ---------A   00930 PRINT"  PER SECOND!!"
    0x5e2c02a1b740 ---------A   00940 GO TO 980
    0x5e2c02a1b7d0 ---------A T 00950 PRINT
    0x5e2c02a1b960 ---------A   00960 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    0x5e2c02a1bcd0 ---------A   00970 PRINT"  AT ";V;" FEET PER SECOND!!"
    0x5e2c02a1be30 ---------A T 00980 PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    0x5e2c02a1bea0 ---------A   00990 PRINT
    0x5e2c02a1bf40 ---------A   01000 PRINT
    0x5e2c02a1c0e0 ---------A   01010 PRINT"**************************************************"
    0x5e2c02a1c280 ---------A   01020 PRINT"*                                                *"
    0x5e2c02a1c5f0 ---------A   01030 PRINT"*       ";T$;"                                    * "
    0x5e2c02a1c870 ---------A   01040 IF K=999 THEN 1070
    0x5e2c02a1c9f0 ---------A   01050 PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    0x5e2c02a1ca90 ---------A   01060 GO TO 1080
    0x5e2c02a1cc20 ---------A T 01070 PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    0x5e2c02a1cdc0 ---------A T 01080 PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    0x5e2c02a1cf60 ---------A   01090 PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    0x5e2c02a1d100 ---------A   01100 PRINT"*                                                *"
    0x5e2c02a1d2a0 ---------A   01110 PRINT"*                              DATALINE          *"
    0x5e2c02a1d410 ---------A   01120 PRINT"**************************************************"
    0x5e2c02a1d4b0 ---------A   01130 GO TO 1560
    0x5e2c02a1d840 ---------A T 01140 PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    0x5e2c02a1d9d0 ---------A   01150 PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    0x5e2c02a1db40 ---------A   01160 PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    0x5e2c02a1dbb0 ---------A   01170 GO TO 1560
    0x5e2c02a1dc40 ---------A T 01180 PRINT
    0x5e2c02a1dde0 ---------A   01190 PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    0x5e2c02a1df60 ---------A   01200 PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    0x5e2c02a1e0e0 ---------A   01210 PRINT"  (TYPE IN 1, 2, OR 3 )...";
    0x5e2c02a1e2f0 ---------A   01220 INPUT R
    0x5e2c02a1e6b0 ---------A   01230 LET W=RND(-1)
    0x5e2c02a1ebc0 ---------A   01240 LET W=INT(W*3)+1
    0x5e2c02a1ee70 ---------A   01250 IF W=R THEN 1300
    0x5e2c02a1f410 ---------A   01260 PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    0x5e2c02a1f590 ---------A   01270 PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    0x5e2c02a1f6e0 ---------A   01280 PRINT" START OVER AGAIN...."
    0x5e2c02a1f780 ---------A   01290 GO TO 1600
    0x5e2c02a1f920 ---------A T 01300 PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    0x5e2c02a1faa0 ---------A   01310 PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    0x5e2c02a1fb10 ---------A   01320 GO TO 710
    0x5e2c02a1fb70 ----------   01330 GO TO 1560
    0x5e2c02a1fc00 ---------A T 01340 PRINT
    0x5e2c02a1fdb0 ---------A   01350 PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    0x5e2c02a1ff60 ---------A   01360 PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    0x5e2c02a20100 ---------A   01370 PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    0x5e2c02a20260 ---------A   01380 PRINT"     HOW MANY WILL YOU SHOOT ?"
    0x5e2c02a20470 ---------A   01390 INPUT Z
    0x5e2c02a20ee0 ---------A   01400 IF Z=9 THEN 1440
    0x5e2c02a21140 ---------A   01410 IF Z=8 THEN 1440
    0x5e2c02a213a0 ---------A   01420 IF Z<8 THEN 1460
    0x5e2c02a21620 ---------A   01430 IF Z>8 THEN 1510
    0x5e2c02a217a0 ---------A T 01440 PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    0x5e2c02a21810 ---------A   01450 GO TO 710
    0x5e2c02a21890 ---------A T 01460 PRINT
    0x5e2c02a21c20 ---------A   01470 PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    0x5e2c02a21da0 ---------A   01480 PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    0x5e2c02a21f00 ---------A   01490 PRINT"   START OVER AGAIN..."
    0x5e2c02a21f70 ---------A   01500 GO TO 1560
    0x5e2c02a22000 ---------A T 01510 PRINT
    0x5e2c02a22390 ---------A   01520 PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    0x5e2c02a22530 ---------A   01530 PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    0x5e2c02a226d0 ---------A   01540 PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    0x5e2c02a22840 ---------A   01550 PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    0x5e2c02a22890 ---------A T 01560 STOP
    0x5e2c02a22c80 ---------A T 01570 PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    0x5e2c02a22e30 ---------A   01580 PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    0x5e2c02a22fb0 ---------A   01590 PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    0x5e2c02a23000 ---------A T 01600 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00180      00170T
     00320      00160T
     00510      00720T, 00760T, 00870T
     00610      00500T
     00640      00670T
     00650      00630T
     00710      01320T, 01450T
     00730      00700T
     00770      00550T
     00800      00580T
     00880      00660T
     00910      00800T
     00950      00810T, 00860T
     00980      00900T, 00940T
     01070      01040T
     01080      01060T
     01140      00730T
     01180      00740T
     01300      01250T
     01340      00750T
     01440      01400T, 01410T
     01460      01420T
     01510      01430T
     01560      00790T, 00850T, 01130T, 01170T, 01330T, 01500T
     01570      00820T
     01600      01290T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5e2c02a0bd50 (00100)   0x5e2c02a0bd50 (00100)   0x5e2c02a23000 (01600)   0x5e2c02a23000 (01600)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02470 - 10000    7540 

 */



/*
 *  Symbol Table Listing for 'basic/lunar.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K                        Integer     
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
    T$                       String      
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V                        Integer     
    V1                       Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X                        Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/lunar.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e2c02a0bd50 ---------A   01000 PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    0x5e2c02a0bed0 ---------A   01010 PRINT
    0x5e2c02a0bf90 ---------A   01020 PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    0x5e2c02a0afc0 ---------A   01030 PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    0x5e2c02a0a910 ---------A   01040 PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    0x5e2c02a096d0 ---------A   01050 INPUT A
    0x5e2c02a09670 ---------A   01060 IF A=1 THEN1220
    0x5e2c02a0a480 ---------A   01070 IF A=0 THEN 1080
    0x5e2c02a0b640 ---------A T 01080 PRINT
    0x5e2c02a09c20 ---------A   01090 PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    0x5e2c02a0c170 ---------A   01100 PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    0x5e2c02a0a720 ---------A   01110 PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    0x5e2c02a11840 ---------A   01120 PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    0x5e2c02a119e0 ---------A   01130 PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    0x5e2c02a11b80 ---------A   01140 PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    0x5e2c02a11d10 ---------A   01150 PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    0x5e2c02a11eb0 ---------A   01160 PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    0x5e2c02a12060 ---------A   01170 PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    0x5e2c02a121f0 ---------A   01180 PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    0x5e2c02a12350 ---------A   01190 PRINT"     LESS THAN 20 FEET PER SECOND."
    0x5e2c02a124f0 ---------A   01200 PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    0x5e2c02a12650 ---------A   01210 PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    0x5e2c02a126e0 ---------A T 01220 PRINT
    0x5e2c02a127f0 ---------A   01230 PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    0x5e2c02a129a0 ---------A   01240 INPUT T$
    0x5e2c02a12a60 ---------A   01250 PRINT
    0x5e2c02a12b00 ---------A   01260 :             ##.##             #####             #####          ####
    0x5e2c02a12d20 ---------A   01270 PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    0x5e2c02a12e80 ---------A   01280 PRINT"              ----            ------            --------        ----"
    0x5e2c02a12ed0 ---------A   01290 PRINT
    0x5e2c02a13260 ---------A   01300 PRINT"MOON" TAB(45);"*"
    0x5e2c02a13530 ---------A   01310 H=40000
    0x5e2c02a13800 ---------A   01320 V=8000
    0x5e2c02a13ce0 ---------A   01330 V1=8000
    0x5e2c02a14090 ---------A   01340 J=RND(-1)
    0x5e2c02a144a0 ---------A   01350 LET J=INT(J*15)
    0x5e2c02a14770 ---------A   01360 F=9000
    0x5e2c02a14a40 ---------A   01370 N=0.00
    0x5e2c02a14d10 ---------A   01380 B=40
    0x5e2c02a14d80 ---------A   01390 GO TO 1500
    0x5e2c02a14f80 ---------A T 01400 B=0
    0x5e2c02a152f0 ---------A   01410 FOR X=1 TO 100
    0x5e2c02a15e90 ---------A   01420 V=V-(K^3*1.5+K*15)+10-H/10000
    0x5e2c02a163c0 ---------A   01430 F=F-ABS(K*93)
    0x5e2c02a16610 ---------A   01440 IF F<0 THEN 1660
    0x5e2c02a16bd0 ---------A   01450 H=H-(V+V1)/2
    0x5e2c02a17000 ---------A   01460 B=H/1000+4
    0x5e2c02a17250 ---------A   01470 IF H<0 THEN 1690
    0x5e2c02a17470 ---------A   01480 V1=V
    0x5e2c02a17830 ---------A   01490 PRINT"MOON"; TAB(B);"*"
    0x5e2c02a17d60 ---------A T 01500 PRINT USING 1260,N,H,V,F
    0x5e2c02a17ed0 ---------A   01510 PRINT"      FIRE";
    0x5e2c02a17f70 ---------A   01520 GO TO 1540
    0x5e2c02a180d0 ---------A T 01530 PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
    0x5e2c02a18220 ---------A T 01540 INPUT K
    0x5e2c02a18490 ---------A   01550 IF K=999 THEN 1750
    0x5e2c02a187d0 ---------A   01560 IF ABS(K)>10 THEN 1530
    0x5e2c02a18850 ---------A   01570 PRINT
    0x5e2c02a18b80 ---------A   01580 N=N+1.00
    0x5e2c02a18dd0 ---------A   01590 IF X=2 THEN 1620
    0x5e2c02a18f10 ---------A T 01600 NEXT X
    0x5e2c02a18f90 ---------A   01610 GO TO 1400
    0x5e2c02a191d0 ---------A T 01620 IF J=2 THEN 2010
    0x5e2c02a19430 ---------A   01630 IF J=13 THEN 2050
    0x5e2c02a19690 ---------A   01640 IF J=4 THEN 2200
    0x5e2c02a19b20 ---------A   01650 GO TO 1400
    0x5e2c02a19bc0 ---------A T 01660 PRINT
    0x5e2c02a19f30 ---------A   01670 PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    0x5e2c02a19fa0 ---------A   01680 GO TO 2420
    0x5e2c02a1a1e0 ---------A T 01690 IF V<0 THEN 1780
    0x5e2c02a1a440 ---------A   01700 IF V<20 THEN 1820
    0x5e2c02a1a6a0 ---------A   01710 IFV<40 THEN 2430
    0x5e2c02a1a750 ---------A   01720 PRINT
    0x5e2c02a1acb0 ---------A   01730 PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    0x5e2c02a1ad20 ---------A   01740 GO TO 2420
    0x5e2c02a1b180 ---------A T 01750 PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    0x5e2c02a1b2e0 ---------A   01760 PRINT"  THE LUNAR SURFACE !!!!"
    0x5e2c02a1b350 ---------A   01770 GO TO 1850
    0x5e2c02a1b3f0 ---------A T 01780 PRINT
    0x5e2c02a1b580 ---------A   01790 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    0x5e2c02a1b6d0 ---------A   01800 PRINT"  PER SECOND!!"
    0x5e2c02a1b740 ---------A   01810 GO TO 1850
    0x5e2c02a1b7d0 ---------A T 01820 PRINT
    0x5e2c02a1b960 ---------A   01830 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    0x5e2c02a1bcd0 ---------A   01840 PRINT"  AT ";V;" FEET PER SECOND!!"
    0x5e2c02a1be30 ---------A T 01850 PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    0x5e2c02a1bea0 ---------A   01860 PRINT
    0x5e2c02a1bf40 ---------A   01870 PRINT
    0x5e2c02a1c0e0 ---------A   01880 PRINT"**************************************************"
    0x5e2c02a1c280 ---------A   01890 PRINT"*                                                *"
    0x5e2c02a1c5f0 ---------A   01900 PRINT"*       ";T$;"                                    * "
    0x5e2c02a1c870 ---------A   01910 IF K=999 THEN 1940
    0x5e2c02a1c9f0 ---------A   01920 PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    0x5e2c02a1ca90 ---------A   01930 GO TO 1950
    0x5e2c02a1cc20 ---------A T 01940 PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    0x5e2c02a1cdc0 ---------A T 01950 PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    0x5e2c02a1cf60 ---------A   01960 PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    0x5e2c02a1d100 ---------A   01970 PRINT"*                                                *"
    0x5e2c02a1d2a0 ---------A   01980 PRINT"*                              DATALINE          *"
    0x5e2c02a1d410 ---------A   01990 PRINT"**************************************************"
    0x5e2c02a1d4b0 ---------A   02000 GO TO 2420
    0x5e2c02a1d840 ---------A T 02010 PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    0x5e2c02a1d9d0 ---------A   02020 PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    0x5e2c02a1db40 ---------A   02030 PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    0x5e2c02a1dbb0 ---------A   02040 GO TO 2420
    0x5e2c02a1dc40 ---------A T 02050 PRINT
    0x5e2c02a1dde0 ---------A   02060 PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    0x5e2c02a1df60 ---------A   02070 PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    0x5e2c02a1e0e0 ---------A   02080 PRINT"  (TYPE IN 1, 2, OR 3 )...";
    0x5e2c02a1e2f0 ---------A   02090 INPUT R
    0x5e2c02a1e6b0 ---------A   02100 LET W=RND(-1)
    0x5e2c02a1ebc0 ---------A   02110 LET W=INT(W*3)+1
    0x5e2c02a1ee70 ---------A   02120 IF W=R THEN 2170
    0x5e2c02a1f410 ---------A   02130 PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    0x5e2c02a1f590 ---------A   02140 PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    0x5e2c02a1f6e0 ---------A   02150 PRINT" START OVER AGAIN...."
    0x5e2c02a1f780 ---------A   02160 GO TO 2460
    0x5e2c02a1f920 ---------A T 02170 PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    0x5e2c02a1faa0 ---------A   02180 PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    0x5e2c02a1fb10 ---------A   02190 GO TO 1600
    0x5e2c02a1fc00 ---------A T 02200 PRINT
    0x5e2c02a1fdb0 ---------A   02210 PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    0x5e2c02a1ff60 ---------A   02220 PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    0x5e2c02a20100 ---------A   02230 PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    0x5e2c02a20260 ---------A   02240 PRINT"     HOW MANY WILL YOU SHOOT ?"
    0x5e2c02a20470 ---------A   02250 INPUT Z
    0x5e2c02a20ee0 ---------A   02260 IF Z=9 THEN 2300
    0x5e2c02a21140 ---------A   02270 IF Z=8 THEN 2300
    0x5e2c02a213a0 ---------A   02280 IF Z<8 THEN 2320
    0x5e2c02a21620 ---------A   02290 IF Z>8 THEN 2370
    0x5e2c02a217a0 ---------A T 02300 PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    0x5e2c02a21810 ---------A   02310 GO TO 1600
    0x5e2c02a21890 ---------A T 02320 PRINT
    0x5e2c02a21c20 ---------A   02330 PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    0x5e2c02a21da0 ---------A   02340 PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    0x5e2c02a21f00 ---------A   02350 PRINT"   START OVER AGAIN..."
    0x5e2c02a21f70 ---------A   02360 GO TO 2420
    0x5e2c02a22000 ---------A T 02370 PRINT
    0x5e2c02a22390 ---------A   02380 PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    0x5e2c02a22530 ---------A   02390 PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    0x5e2c02a226d0 ---------A   02400 PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    0x5e2c02a22840 ---------A   02410 PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    0x5e2c02a22890 ---------A T 02420 STOP
    0x5e2c02a22c80 ---------A T 02430 PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    0x5e2c02a22e30 ---------A   02440 PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    0x5e2c02a22fb0 ---------A   02450 PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    0x5e2c02a23000 ---------A T 02460 END
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
char* UsingFmt_01260 = "             %5.2f             %5d             %5d          %4d%s";
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
int    B_int;                                     // Basic: B 
int    F_int;                                     // Basic: F 
int    H_int;                                     // Basic: H 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
int    R_int;                                     // Basic: R 
char*  T_str;                                     // Basic: T$ 
int    V_int;                                     // Basic: V 
int    V1_int;                                    // Basic: V1 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
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
    // 01000 PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BASIC LIBRARY--'LUNAR'--18-OCT-73");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF");strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TYPE IN '1' ,IF NOT, TYPE IN '0'.");strcat(buf,"\n");fputs(buf,fh); };
    // 01050 INPUT A
    // Start of Basic INPUT statement 01050
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01050
    // 01060 IF A=1 THEN1220
    if(A_int==1)goto Lbl_01220;
    // 01070 IF A=0 THEN 1080
    if(A_int==0)goto Lbl_01080;

  Lbl_01080:
    // 01080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN ");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 ");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    RETROROCKETS -- 1 TO 10 AND -1 TO -10.");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A ");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT"     LESS THAN 20 FEET PER SECOND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     LESS THAN 20 FEET PER SECOND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN...");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01220:
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE TYPE IN YOUR FIRST NAME...");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 INPUT T$
    // Start of Basic INPUT statement 01240
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&T_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01240
    // 01250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01260 :             ##.##             #####             #####          ####
    // 01270 PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"              TIME            HEIGHT            VELOCITY        FUEL");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT"              ----            ------            --------        ----"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"              ----            ------            --------        ----");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
