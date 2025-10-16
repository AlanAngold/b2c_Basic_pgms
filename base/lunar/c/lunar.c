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
    0x621c60cf0c90 ---------A   00100 PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    0x621c60cf0e10 ---------A   00110 PRINT
    0x621c60cf0ed0 ---------A   00120 PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    0x621c60ceff00 ---------A   00130 PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    0x621c60cef850 ---------A   00140 PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    0x621c60cee610 ---------A   00150 INPUT A
    0x621c60cee5b0 ---------A   00160 IF A=1 THEN320
    0x621c60cef3c0 ---------A   00170 IF A=0 THEN 180
    0x621c60cf0580 ---------A T 00180 PRINT
    0x621c60ceeb60 ---------A   00190 PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    0x621c60cf10b0 ---------A   00200 PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    0x621c60cef660 ---------A   00210 PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    0x621c60cf6780 ---------A   00220 PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    0x621c60cf6920 ---------A   00230 PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    0x621c60cf6ac0 ---------A   00240 PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    0x621c60cf6c50 ---------A   00250 PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    0x621c60cf6df0 ---------A   00260 PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    0x621c60cf6fa0 ---------A   00270 PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    0x621c60cf7130 ---------A   00280 PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    0x621c60cf7290 ---------A   00290 PRINT"     LESS THAN 20 FEET PER SECOND."
    0x621c60cf7430 ---------A   00300 PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    0x621c60cf7590 ---------A   00310 PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    0x621c60cf7620 ---------A T 00320 PRINT
    0x621c60cf7730 ---------A   00330 PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    0x621c60cf78e0 ---------A   00340 INPUT T$
    0x621c60cf79a0 ---------A   00350 PRINT
    0x621c60cf7a40 ---------A   00360 :             ##.##             #####             #####          ####
    0x621c60cf7c60 ---------A   00370 PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    0x621c60cf7dc0 ---------A   00380 PRINT"              ----            ------            --------        ----"
    0x621c60cf7e10 ---------A   00390 PRINT
    0x621c60cf81a0 ---------A   00400 PRINT"MOON" TAB(45);"*"
    0x621c60cf8470 ---------A   00410 H=40000
    0x621c60cf8740 ---------A   00420 V=8000
    0x621c60cf8c20 ---------A   00430 V1=8000
    0x621c60cf8fd0 ---------A   00440 J=RND(-1)
    0x621c60cf93e0 ---------A   00450 LET J=INT(J*15)
    0x621c60cf96b0 ---------A   00460 F=9000
    0x621c60cf9980 ---------A   00480 N=0.00
    0x621c60cf9c50 ---------A   00490 B=40
    0x621c60cf9cc0 ---------A   00500 GO TO 610
    0x621c60cf9ec0 ---------A T 00510 B=0
    0x621c60cfa230 ---------A   00520 FOR X=1 TO 100
    0x621c60cfadd0 ---------A   00530 V=V-(K^3*1.5+K*15)+10-H/10000
    0x621c60cfb300 ---------A   00540 F=F-ABS(K*93)
    0x621c60cfb550 ---------A   00550 IF F<0 THEN 770
    0x621c60cfbb10 ---------A   00560 H=H-(V+V1)/2
    0x621c60cfbf40 ---------A   00570 B=H/1000+4
    0x621c60cfc190 ---------A   00580 IF H<0 THEN 800
    0x621c60cfc3b0 ---------A   00590 V1=V
    0x621c60cfc770 ---------A   00600 PRINT"MOON"; TAB(B);"*"
    0x621c60cfcca0 ---------A T 00610 PRINT USING 360,N,H,V,F
    0x621c60cfce10 ---------A   00620 PRINT"      FIRE";
    0x621c60cfceb0 ---------A   00630 GO TO 650
    0x621c60cfd010 ---------A T 00640 PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
    0x621c60cfd160 ---------A T 00650 INPUT K
    0x621c60cfd3d0 ---------A   00660 IF K=999 THEN 880
    0x621c60cfd710 ---------A   00670 IF ABS(K)>10 THEN 640
    0x621c60cfd790 ---------A   00680 PRINT
    0x621c60cfdac0 ---------A   00690 N=N+1.00
    0x621c60cfdd10 ---------A   00700 IF X=2 THEN 730
    0x621c60cfde50 ---------A T 00710 NEXT X
    0x621c60cfded0 ---------A   00720 GO TO 510
    0x621c60cfe110 ---------A T 00730 IF J=2 THEN 1140
    0x621c60cfe370 ---------A   00740 IF J=13 THEN 1180
    0x621c60cfe5d0 ---------A   00750 IF J=4 THEN 1340
    0x621c60cfea60 ---------A   00760 GO TO 510
    0x621c60cfeb00 ---------A T 00770 PRINT
    0x621c60cfee70 ---------A   00780 PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    0x621c60cfeee0 ---------A   00790 GO TO 1560
    0x621c60cff120 ---------A T 00800 IF V<0 THEN 910
    0x621c60cff380 ---------A   00810 IF V<20 THEN 950
    0x621c60cff5e0 ---------A   00820 IFV<40 THEN 1570
    0x621c60cff690 ---------A   00830 PRINT
    0x621c60cffbf0 ---------A   00840 PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    0x621c60cffc60 ---------A   00850 GO TO 1560
    0x621c60cffea0 ----------   00860 IF H<5 THEN 950
    0x621c60cfff50 ----------   00870 GO TO 510
    0x621c60d000c0 ---------A T 00880 PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    0x621c60d00220 ---------A   00890 PRINT"  THE LUNAR SURFACE !!!!"
    0x621c60d00290 ---------A   00900 GO TO 980
    0x621c60d00330 ---------A T 00910 PRINT
    0x621c60d004c0 ---------A   00920 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    0x621c60d00610 ---------A   00930 PRINT"  PER SECOND!!"
    0x621c60d00680 ---------A   00940 GO TO 980
    0x621c60d00710 ---------A T 00950 PRINT
    0x621c60d008a0 ---------A   00960 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    0x621c60d00c10 ---------A   00970 PRINT"  AT ";V;" FEET PER SECOND!!"
    0x621c60d00d70 ---------A T 00980 PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    0x621c60d00de0 ---------A   00990 PRINT
    0x621c60d00e80 ---------A   01000 PRINT
    0x621c60d01020 ---------A   01010 PRINT"**************************************************"
    0x621c60d011c0 ---------A   01020 PRINT"*                                                *"
    0x621c60d01530 ---------A   01030 PRINT"*       ";T$;"                                    * "
    0x621c60d017b0 ---------A   01040 IF K=999 THEN 1070
    0x621c60d01930 ---------A   01050 PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    0x621c60d019d0 ---------A   01060 GO TO 1080
    0x621c60d01b60 ---------A T 01070 PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    0x621c60d01d00 ---------A T 01080 PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    0x621c60d01ea0 ---------A   01090 PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    0x621c60d02040 ---------A   01100 PRINT"*                                                *"
    0x621c60d021e0 ---------A   01110 PRINT"*                              DATALINE          *"
    0x621c60d02350 ---------A   01120 PRINT"**************************************************"
    0x621c60d023f0 ---------A   01130 GO TO 1560
    0x621c60d02780 ---------A T 01140 PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    0x621c60d02910 ---------A   01150 PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    0x621c60d02a80 ---------A   01160 PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    0x621c60d02af0 ---------A   01170 GO TO 1560
    0x621c60d02b80 ---------A T 01180 PRINT
    0x621c60d02d20 ---------A   01190 PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    0x621c60d02ea0 ---------A   01200 PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    0x621c60d03020 ---------A   01210 PRINT"  (TYPE IN 1, 2, OR 3 )...";
    0x621c60d03230 ---------A   01220 INPUT R
    0x621c60d035f0 ---------A   01230 LET W=RND(-1)
    0x621c60d03b00 ---------A   01240 LET W=INT(W*3)+1
    0x621c60d03db0 ---------A   01250 IF W=R THEN 1300
    0x621c60d04350 ---------A   01260 PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    0x621c60d044d0 ---------A   01270 PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    0x621c60d04620 ---------A   01280 PRINT" START OVER AGAIN...."
    0x621c60d046c0 ---------A   01290 GO TO 1600
    0x621c60d04860 ---------A T 01300 PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    0x621c60d049e0 ---------A   01310 PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    0x621c60d04a50 ---------A   01320 GO TO 710
    0x621c60d04ab0 ----------   01330 GO TO 1560
    0x621c60d04b40 ---------A T 01340 PRINT
    0x621c60d04cf0 ---------A   01350 PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    0x621c60d04ea0 ---------A   01360 PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    0x621c60d05040 ---------A   01370 PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    0x621c60d051a0 ---------A   01380 PRINT"     HOW MANY WILL YOU SHOOT ?"
    0x621c60d053b0 ---------A   01390 INPUT Z
    0x621c60d05e20 ---------A   01400 IF Z=9 THEN 1440
    0x621c60d06080 ---------A   01410 IF Z=8 THEN 1440
    0x621c60d062e0 ---------A   01420 IF Z<8 THEN 1460
    0x621c60d06560 ---------A   01430 IF Z>8 THEN 1510
    0x621c60d066e0 ---------A T 01440 PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    0x621c60d06750 ---------A   01450 GO TO 710
    0x621c60d067d0 ---------A T 01460 PRINT
    0x621c60d06b60 ---------A   01470 PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    0x621c60d06ce0 ---------A   01480 PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    0x621c60d06e40 ---------A   01490 PRINT"   START OVER AGAIN..."
    0x621c60d06eb0 ---------A   01500 GO TO 1560
    0x621c60d06f40 ---------A T 01510 PRINT
    0x621c60d072d0 ---------A   01520 PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    0x621c60d07470 ---------A   01530 PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    0x621c60d07610 ---------A   01540 PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    0x621c60d07780 ---------A   01550 PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    0x621c60d077d0 ---------A T 01560 STOP
    0x621c60d07bc0 ---------A T 01570 PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    0x621c60d07d70 ---------A   01580 PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    0x621c60d07ef0 ---------A   01590 PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    0x621c60d07f40 ---------A T 01600 END
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
   A) 0x621c60cf0c90 (00100)   0x000000000000 (00000)   0x621c60d07f40 (01600)   0x621c60d07f40 (01600)   


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
    A                        Float       
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
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
    F                        Float       
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Float       
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    K                        Float       
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
    N                        Float       
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
    T$                       String      
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V                        Float       
    V1                       Float       
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Float       
    X                        Float       
    Z                        Float       

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
    0x621c60cf0c90 ---------A   01000 PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    0x621c60cf0e10 ---------A   01010 PRINT
    0x621c60cf0ed0 ---------A   01020 PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    0x621c60ceff00 ---------A   01030 PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    0x621c60cef850 ---------A   01040 PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    0x621c60cee610 ---------A   01050 INPUT A
    0x621c60cee5b0 ---------A   01060 IF A=1 THEN1220
    0x621c60cef3c0 ---------A   01070 IF A=0 THEN 1080
    0x621c60cf0580 ---------A T 01080 PRINT
    0x621c60ceeb60 ---------A   01090 PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    0x621c60cf10b0 ---------A   01100 PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    0x621c60cef660 ---------A   01110 PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    0x621c60cf6780 ---------A   01120 PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    0x621c60cf6920 ---------A   01130 PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    0x621c60cf6ac0 ---------A   01140 PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    0x621c60cf6c50 ---------A   01150 PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    0x621c60cf6df0 ---------A   01160 PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    0x621c60cf6fa0 ---------A   01170 PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    0x621c60cf7130 ---------A   01180 PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    0x621c60cf7290 ---------A   01190 PRINT"     LESS THAN 20 FEET PER SECOND."
    0x621c60cf7430 ---------A   01200 PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    0x621c60cf7590 ---------A   01210 PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    0x621c60cf7620 ---------A T 01220 PRINT
    0x621c60cf7730 ---------A   01230 PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    0x621c60cf78e0 ---------A   01240 INPUT T$
    0x621c60cf79a0 ---------A   01250 PRINT
    0x621c60cf7a40 ---------A   01260 :             ##.##             #####             #####          ####
    0x621c60cf7c60 ---------A   01270 PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    0x621c60cf7dc0 ---------A   01280 PRINT"              ----            ------            --------        ----"
    0x621c60cf7e10 ---------A   01290 PRINT
    0x621c60cf81a0 ---------A   01300 PRINT"MOON" TAB(45);"*"
    0x621c60cf8470 ---------A   01310 H=40000
    0x621c60cf8740 ---------A   01320 V=8000
    0x621c60cf8c20 ---------A   01330 V1=8000
    0x621c60cf8fd0 ---------A   01340 J=RND(-1)
    0x621c60cf93e0 ---------A   01350 LET J=INT(J*15)
    0x621c60cf96b0 ---------A   01360 F=9000
    0x621c60cf9980 ---------A   01370 N=0.00
    0x621c60cf9c50 ---------A   01380 B=40
    0x621c60cf9cc0 ---------A   01390 GO TO 1500
    0x621c60cf9ec0 ---------A T 01400 B=0
    0x621c60cfa230 ---------A   01410 FOR X=1 TO 100
    0x621c60cfadd0 ---------A   01420 V=V-(K^3*1.5+K*15)+10-H/10000
    0x621c60cfb300 ---------A   01430 F=F-ABS(K*93)
    0x621c60cfb550 ---------A   01440 IF F<0 THEN 1660
    0x621c60cfbb10 ---------A   01450 H=H-(V+V1)/2
    0x621c60cfbf40 ---------A   01460 B=H/1000+4
    0x621c60cfc190 ---------A   01470 IF H<0 THEN 1690
    0x621c60cfc3b0 ---------A   01480 V1=V
    0x621c60cfc770 ---------A   01490 PRINT"MOON"; TAB(B);"*"
    0x621c60cfcca0 ---------A T 01500 PRINT USING 1260,N,H,V,F
    0x621c60cfce10 ---------A   01510 PRINT"      FIRE";
    0x621c60cfceb0 ---------A   01520 GO TO 1540
    0x621c60cfd010 ---------A T 01530 PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
    0x621c60cfd160 ---------A T 01540 INPUT K
    0x621c60cfd3d0 ---------A   01550 IF K=999 THEN 1750
    0x621c60cfd710 ---------A   01560 IF ABS(K)>10 THEN 1530
    0x621c60cfd790 ---------A   01570 PRINT
    0x621c60cfdac0 ---------A   01580 N=N+1.00
    0x621c60cfdd10 ---------A   01590 IF X=2 THEN 1620
    0x621c60cfde50 ---------A T 01600 NEXT X
    0x621c60cfded0 ---------A   01610 GO TO 1400
    0x621c60cfe110 ---------A T 01620 IF J=2 THEN 2010
    0x621c60cfe370 ---------A   01630 IF J=13 THEN 2050
    0x621c60cfe5d0 ---------A   01640 IF J=4 THEN 2200
    0x621c60cfea60 ---------A   01650 GO TO 1400
    0x621c60cfeb00 ---------A T 01660 PRINT
    0x621c60cfee70 ---------A   01670 PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    0x621c60cfeee0 ---------A   01680 GO TO 2420
    0x621c60cff120 ---------A T 01690 IF V<0 THEN 1780
    0x621c60cff380 ---------A   01700 IF V<20 THEN 1820
    0x621c60cff5e0 ---------A   01710 IFV<40 THEN 2430
    0x621c60cff690 ---------A   01720 PRINT
    0x621c60cffbf0 ---------A   01730 PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    0x621c60cffc60 ---------A   01740 GO TO 2420
    0x621c60d000c0 ---------A T 01750 PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    0x621c60d00220 ---------A   01760 PRINT"  THE LUNAR SURFACE !!!!"
    0x621c60d00290 ---------A   01770 GO TO 1850
    0x621c60d00330 ---------A T 01780 PRINT
    0x621c60d004c0 ---------A   01790 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    0x621c60d00610 ---------A   01800 PRINT"  PER SECOND!!"
    0x621c60d00680 ---------A   01810 GO TO 1850
    0x621c60d00710 ---------A T 01820 PRINT
    0x621c60d008a0 ---------A   01830 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    0x621c60d00c10 ---------A   01840 PRINT"  AT ";V;" FEET PER SECOND!!"
    0x621c60d00d70 ---------A T 01850 PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    0x621c60d00de0 ---------A   01860 PRINT
    0x621c60d00e80 ---------A   01870 PRINT
    0x621c60d01020 ---------A   01880 PRINT"**************************************************"
    0x621c60d011c0 ---------A   01890 PRINT"*                                                *"
    0x621c60d01530 ---------A   01900 PRINT"*       ";T$;"                                    * "
    0x621c60d017b0 ---------A   01910 IF K=999 THEN 1940
    0x621c60d01930 ---------A   01920 PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    0x621c60d019d0 ---------A   01930 GO TO 1950
    0x621c60d01b60 ---------A T 01940 PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    0x621c60d01d00 ---------A T 01950 PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    0x621c60d01ea0 ---------A   01960 PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    0x621c60d02040 ---------A   01970 PRINT"*                                                *"
    0x621c60d021e0 ---------A   01980 PRINT"*                              DATALINE          *"
    0x621c60d02350 ---------A   01990 PRINT"**************************************************"
    0x621c60d023f0 ---------A   02000 GO TO 2420
    0x621c60d02780 ---------A T 02010 PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    0x621c60d02910 ---------A   02020 PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    0x621c60d02a80 ---------A   02030 PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    0x621c60d02af0 ---------A   02040 GO TO 2420
    0x621c60d02b80 ---------A T 02050 PRINT
    0x621c60d02d20 ---------A   02060 PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    0x621c60d02ea0 ---------A   02070 PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    0x621c60d03020 ---------A   02080 PRINT"  (TYPE IN 1, 2, OR 3 )...";
    0x621c60d03230 ---------A   02090 INPUT R
    0x621c60d035f0 ---------A   02100 LET W=RND(-1)
    0x621c60d03b00 ---------A   02110 LET W=INT(W*3)+1
    0x621c60d03db0 ---------A   02120 IF W=R THEN 2170
    0x621c60d04350 ---------A   02130 PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    0x621c60d044d0 ---------A   02140 PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    0x621c60d04620 ---------A   02150 PRINT" START OVER AGAIN...."
    0x621c60d046c0 ---------A   02160 GO TO 2460
    0x621c60d04860 ---------A T 02170 PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    0x621c60d049e0 ---------A   02180 PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    0x621c60d04a50 ---------A   02190 GO TO 1600
    0x621c60d04b40 ---------A T 02200 PRINT
    0x621c60d04cf0 ---------A   02210 PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    0x621c60d04ea0 ---------A   02220 PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    0x621c60d05040 ---------A   02230 PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    0x621c60d051a0 ---------A   02240 PRINT"     HOW MANY WILL YOU SHOOT ?"
    0x621c60d053b0 ---------A   02250 INPUT Z
    0x621c60d05e20 ---------A   02260 IF Z=9 THEN 2300
    0x621c60d06080 ---------A   02270 IF Z=8 THEN 2300
    0x621c60d062e0 ---------A   02280 IF Z<8 THEN 2320
    0x621c60d06560 ---------A   02290 IF Z>8 THEN 2370
    0x621c60d066e0 ---------A T 02300 PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    0x621c60d06750 ---------A   02310 GO TO 1600
    0x621c60d067d0 ---------A T 02320 PRINT
    0x621c60d06b60 ---------A   02330 PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    0x621c60d06ce0 ---------A   02340 PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    0x621c60d06e40 ---------A   02350 PRINT"   START OVER AGAIN..."
    0x621c60d06eb0 ---------A   02360 GO TO 2420
    0x621c60d06f40 ---------A T 02370 PRINT
    0x621c60d072d0 ---------A   02380 PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    0x621c60d07470 ---------A   02390 PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    0x621c60d07610 ---------A   02400 PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    0x621c60d07780 ---------A   02410 PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    0x621c60d077d0 ---------A T 02420 STOP
    0x621c60d07bc0 ---------A T 02430 PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    0x621c60d07d70 ---------A   02440 PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    0x621c60d07ef0 ---------A   02450 PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    0x621c60d07f40 ---------A T 02460 END
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
float  A_flt;                                     // Basic: A 
float  B_flt;                                     // Basic: B 
float  F_flt;                                     // Basic: F 
float  H_flt;                                     // Basic: H 
float  J_flt;                                     // Basic: J 
float  K_flt;                                     // Basic: K 
float  N_flt;                                     // Basic: N 
float  R_flt;                                     // Basic: R 
char*  T_str;                                     // Basic: T$ 
float  V_flt;                                     // Basic: V 
float  V1_flt;                                    // Basic: V1 
float  W_flt;                                     // Basic: W 
float  X_flt;                                     // Basic: X 
float  Z_flt;                                     // Basic: Z 
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
    b2c_printf("Basic library--'lunar'--18-oct-73\n");
    // 01010 PRINT
    b2c_printf("\n");
    // 01020 PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    b2c_printf(" this program is designed to simulate the landing of\n");
    // 01030 PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    b2c_printf("   a lunar excursion module.  If you know how it works,\n");
    // 01040 PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    b2c_printf("    type in '1' ,if not, type in '0'.\n");
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
                (err += b2c_strtof(&A_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01050
    // 01060 IF A=1 THEN1220
    if(A_flt==1)goto Lbl_01220;
    // 01070 IF A=0 THEN 1080
    if(A_flt==0)goto Lbl_01080;

  Lbl_01080:
    // 01080 PRINT
    b2c_printf("\n");
    // 01090 PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    b2c_printf("  you are traveling in the lunar atmosphere at an \n");
    // 01100 PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    b2c_printf("   altitude of 40,000 feet, and descending at a rate of\n");
    // 01110 PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    b2c_printf("   8,000 feet per second.  You have access to 20 \n");
    // 01120 PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    b2c_printf("    retrorockets -- 1 to 10 and -1 to -10.\n");
    // 01130 PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    b2c_printf("    a positive number slows down your descent, and a \n");
    // 01140 PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    b2c_printf("    negative number increases your descent. The\n");
    // 01150 PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    b2c_printf("    negative firings are particularly useful when\n");
    // 01160 PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    b2c_printf("    you have slowed down  too much, and you\n");
    // 01170 PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    b2c_printf("    find your height increasing, instead of decreasing.\n");
    // 01180 PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    b2c_printf("    you will land safely if your final velocity is\n");
    // 01190 PRINT"     LESS THAN 20 FEET PER SECOND."
    b2c_printf("     less than 20 feet per second.\n");
    // 01200 PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    b2c_printf("   an asterisk (*) will give your relative position\n");
    // 01210 PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    b2c_printf("    to the moon after each retro fire. You may now begin...\n");

  Lbl_01220:
    // 01220 PRINT
    b2c_printf("\n");
    // 01230 PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    b2c_printf("Please type in your first name...\n");
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
    b2c_printf("\n");
    // 01260 :             ##.##             #####             #####          ####
    // 01270 PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    b2c_printf("              time            height            velocity        fuel\n");
    // 01280 PRINT"              ----            ------            --------        ----"
    b2c_printf("              ----            ------            --------        ----\n");
    // 01290 PRINT
    b2c_printf("\n");
