/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/lunar/basic/lunar.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x56047d6a7dc0 ---------A   00100 PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    0x56047d6a7e80 ---------A   00110 PRINT
    0x56047d6a8020 ---------A   00120 PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    0x56047d6a81d0 ---------A   00130 PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    0x56047d6a82f0 ---------A   00140 PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    0x56047d6a8470 ---------A   00150 INPUT A
    0x56047d6a8630 ---------A   00160 IF A=1 THEN320
    0x56047d6a87f0 ---------A   00170 IF A=0 THEN 180
    0x56047d6a88a0 ---------A T 00180 PRINT
    0x56047d6a8a60 ---------A   00190 PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    0x56047d6a8bf0 ---------A   00200 PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    0x56047d6acfd0 ---------A   00210 PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    0x56047d6ad150 ---------A   00220 PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    0x56047d6ad2d0 ---------A   00230 PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    0x56047d6ad450 ---------A   00240 PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    0x56047d6ad5c0 ---------A   00250 PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    0x56047d6ad740 ---------A   00260 PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    0x56047d6ad9e0 ---------A   00270 PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    0x56047d6adb50 ---------A   00280 PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    0x56047d6adc90 ---------A   00290 PRINT"     LESS THAN 20 FEET PER SECOND."
    0x56047d6ade10 ---------A   00300 PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    0x56047d6adf50 ---------A   00310 PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    0x56047d6adfe0 ---------A T 00320 PRINT
    0x56047d6ae120 ---------A   00330 PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    0x56047d6ae270 ---------A   00340 INPUT T$
    0x56047d6ae330 ---------A   00350 PRINT
    0x56047d6ae3d0 ---------A   00360 :             ##.##             #####             #####          ####
    0x56047d6ae5d0 ---------A   00370 PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    0x56047d6ae730 ---------A   00380 PRINT"              ----            ------            --------        ----"
    0x56047d6ae7b0 ---------A   00390 PRINT
    0x56047d6aeb60 ---------A   00400 PRINT"MOON" TAB(45);"*"
    0x56047d6aed50 ---------A   00410 H=40000
    0x56047d6aef40 ---------A   00420 V=8000
    0x56047d6af340 ---------A   00430 V1=8000
    0x56047d6af610 ---------A   00440 J=RND(-1)
    0x56047d6af900 ---------A   00450 LET J=INT(J*15)
    0x56047d6afaf0 ---------A   00460 F=9000
    0x56047d6afce0 ---------A   00480 N=0.00
    0x56047d6afed0 ---------A   00490 B=40
    0x56047d6aff40 ---------A   00500 GO TO 610
    0x56047d6b00a0 ---------A T 00510 B=0
    0x56047d6b0340 ---------A   00520 FOR X=1 TO 100
    0x56047d6b0b80 ---------A   00530 V=V-(K^3*1.5+K*15)+10-H/10000
    0x56047d6b0f10 ---------A   00540 F=F-ABS(K*93)
    0x56047d6b10c0 ---------A   00550 IF F<0 THEN 770
    0x56047d6b1460 ---------A   00560 H=H-(V+V1)/2
    0x56047d6b1750 ---------A   00570 B=H/1000+4
    0x56047d6b1900 ---------A   00580 IF H<0 THEN 800
    0x56047d6b1a50 ---------A   00590 V1=V
    0x56047d6b1d50 ---------A   00600 PRINT"MOON"; TAB(B);"*"
    0x56047d6b2060 ---------A T 00610 PRINT USING 360,N,H,V,F
    0x56047d6b21b0 ---------A   00620 PRINT"      FIRE";
    0x56047d6b2250 ---------A   00630 GO TO 650
    0x56047d6b2390 ---------A T 00640 PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
    0x56047d6b2460 ---------A T 00650 INPUT K
    0x56047d6b2630 ---------A   00660 IF K=999 THEN 880
    0x56047d6b2850 ---------A   00670 IF ABS(K)>10 THEN 640
    0x56047d6b28d0 ---------A   00680 PRINT
    0x56047d6b2ae0 ---------A   00690 N=N+1.00
    0x56047d6b2c90 ---------A   00700 IF X=2 THEN 730
    0x56047d6b2d50 ---------A T 00710 NEXT X
    0x56047d6b2dd0 ---------A   00720 GO TO 510
    0x56047d6b2f70 ---------A T 00730 IF J=2 THEN 1140
    0x56047d6b3130 ---------A   00740 IF J=13 THEN 1180
    0x56047d6b32f0 ---------A   00750 IF J=4 THEN 1340
    0x56047d6b3780 ---------A   00760 GO TO 510
    0x56047d6b3820 ---------A T 00770 PRINT
    0x56047d6b3ad0 ---------A   00780 PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    0x56047d6b3b40 ---------A   00790 GO TO 1560
    0x56047d6b3ce0 ---------A T 00800 IF V<0 THEN 910
    0x56047d6b3ea0 ---------A   00810 IF V<20 THEN 950
    0x56047d6b4060 ---------A   00820 IFV<40 THEN 1570
    0x56047d6b4110 ---------A   00830 PRINT
    0x56047d6b4510 ---------A   00840 PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    0x56047d6b4580 ---------A   00850 GO TO 1560
    0x56047d6b4720 ----------   00860 IF H<5 THEN 950
    0x56047d6b47d0 ----------   00870 GO TO 510
    0x56047d6b4920 ---------A T 00880 PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    0x56047d6b4a60 ---------A   00890 PRINT"  THE LUNAR SURFACE !!!!"
    0x56047d6b4ad0 ---------A   00900 GO TO 980
    0x56047d6b4b70 ---------A T 00910 PRINT
    0x56047d6b4ce0 ---------A   00920 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    0x56047d6b4e10 ---------A   00930 PRINT"  PER SECOND!!"
    0x56047d6b4e80 ---------A   00940 GO TO 980
    0x56047d6b4f10 ---------A T 00950 PRINT
    0x56047d6b5080 ---------A   00960 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    0x56047d6b5330 ---------A   00970 PRINT"  AT ";V;" FEET PER SECOND!!"
    0x56047d6b5470 ---------A T 00980 PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    0x56047d6b54e0 ---------A   00990 PRINT
    0x56047d6b5580 ---------A   01000 PRINT
    0x56047d6b5700 ---------A   01010 PRINT"**************************************************"
    0x56047d6b5880 ---------A   01020 PRINT"*                                                *"
    0x56047d6b5b30 ---------A   01030 PRINT"*       ";T$;"                                    * "
    0x56047d6b5d10 ---------A   01040 IF K=999 THEN 1070
    0x56047d6b5e70 ---------A   01050 PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    0x56047d6b5f10 ---------A   01060 GO TO 1080
    0x56047d6b6080 ---------A T 01070 PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    0x56047d6b6200 ---------A T 01080 PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    0x56047d6b6380 ---------A   01090 PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    0x56047d6b6500 ---------A   01100 PRINT"*                                                *"
    0x56047d6b6680 ---------A   01110 PRINT"*                              DATALINE          *"
    0x56047d6b67d0 ---------A   01120 PRINT"**************************************************"
    0x56047d6b6870 ---------A   01130 GO TO 1560
    0x56047d6b6b40 ---------A T 01140 PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    0x56047d6b6cb0 ---------A   01150 PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    0x56047d6b6e00 ---------A   01160 PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    0x56047d6b6e70 ---------A   01170 GO TO 1560
    0x56047d6b6f00 ---------A T 01180 PRINT
    0x56047d6b7080 ---------A   01190 PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    0x56047d6b71e0 ---------A   01200 PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    0x56047d6b7340 ---------A   01210 PRINT"  (TYPE IN 1, 2, OR 3 )...";
    0x56047d6b7490 ---------A   01220 INPUT R
    0x56047d6b76f0 ---------A   01230 LET W=RND(-1)
    0x56047d6b7a40 ---------A   01240 LET W=INT(W*3)+1
    0x56047d6b7bf0 ---------A   01250 IF W=R THEN 1300
    0x56047d6b8030 ---------A   01260 PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    0x56047d6b8190 ---------A   01270 PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    0x56047d6b82c0 ---------A   01280 PRINT" START OVER AGAIN...."
    0x56047d6b8360 ---------A   01290 GO TO 1600
    0x56047d6b84e0 ---------A T 01300 PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    0x56047d6b8640 ---------A   01310 PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    0x56047d6b86b0 ---------A   01320 GO TO 710
    0x56047d6b8710 ----------   01330 GO TO 1560
    0x56047d6b87a0 ---------A T 01340 PRINT
    0x56047d6b8930 ---------A   01350 PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    0x56047d6b8ac0 ---------A   01360 PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    0x56047d6b8c40 ---------A   01370 PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    0x56047d6b8d80 ---------A   01380 PRINT"     HOW MANY WILL YOU SHOOT ?"
    0x56047d6b8ed0 ---------A   01390 INPUT Z
    0x56047d6b98a0 ---------A   01400 IF Z=9 THEN 1440
    0x56047d6b9a60 ---------A   01410 IF Z=8 THEN 1440
    0x56047d6b9c20 ---------A   01420 IF Z<8 THEN 1460
    0x56047d6b9e00 ---------A   01430 IF Z>8 THEN 1510
    0x56047d6b9f60 ---------A T 01440 PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    0x56047d6b9fd0 ---------A   01450 GO TO 710
    0x56047d6ba050 ---------A T 01460 PRINT
    0x56047d6ba320 ---------A   01470 PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    0x56047d6ba480 ---------A   01480 PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    0x56047d6ba5c0 ---------A   01490 PRINT"   START OVER AGAIN..."
    0x56047d6ba630 ---------A   01500 GO TO 1560
    0x56047d6ba6c0 ---------A T 01510 PRINT
    0x56047d6ba990 ---------A   01520 PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    0x56047d6bab10 ---------A   01530 PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    0x56047d6bac90 ---------A   01540 PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    0x56047d6bade0 ---------A   01550 PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    0x56047d6bae30 ---------A T 01560 STOP
    0x56047d6bb160 ---------A T 01570 PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    0x56047d6bb2f0 ---------A   01580 PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    0x56047d6bb450 ---------A   01590 PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    0x56047d6bb4a0 ---------A T 01600 END
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

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x56047d6a7dc0   0x56047d6a7dc0   0x56047d6bb4a0   0x56047d6bb4a0 


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02500 - 10000    7510 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/lunar/basic/lunar.bas'
 *
    A              Integer 
    ABS   Function Integer     args=1, int   
    B              Float   
    F              Integer 
    H              Float   
    INT   Function Integer     args=1, float 
    J              Integer 
    K              Integer 
    N              Float   
    R              Integer 
    RND   Function Integer     args=1, int   
    T$             String  
    TAB   Function String      args=1, 
    V              Float   
    V1             Float   
    W              Integer 
    X              Integer 
    Z              Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/lunar/basic/lunar.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x56047d6a7dc0 ---------A   01000 PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    0x56047d6a7e80 ---------A   01010 PRINT
    0x56047d6a8020 ---------A   01020 PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    0x56047d6a81d0 ---------A   01030 PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    0x56047d6a82f0 ---------A   01040 PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    0x56047d6a8470 ---------A   01050 INPUT A
    0x56047d6a8630 ---------A   01060 IF A=1 THEN1220
    0x56047d6a87f0 ---------A   01070 IF A=0 THEN 1080
    0x56047d6a88a0 ---------A T 01080 PRINT
    0x56047d6a8a60 ---------A   01090 PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    0x56047d6a8bf0 ---------A   01100 PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    0x56047d6acfd0 ---------A   01110 PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    0x56047d6ad150 ---------A   01120 PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    0x56047d6ad2d0 ---------A   01130 PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    0x56047d6ad450 ---------A   01140 PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    0x56047d6ad5c0 ---------A   01150 PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    0x56047d6ad740 ---------A   01160 PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    0x56047d6ad9e0 ---------A   01170 PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    0x56047d6adb50 ---------A   01180 PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    0x56047d6adc90 ---------A   01190 PRINT"     LESS THAN 20 FEET PER SECOND."
    0x56047d6ade10 ---------A   01200 PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    0x56047d6adf50 ---------A   01210 PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    0x56047d6adfe0 ---------A T 01220 PRINT
    0x56047d6ae120 ---------A   01230 PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    0x56047d6ae270 ---------A   01240 INPUT T$
    0x56047d6ae330 ---------A   01250 PRINT
    0x56047d6ae3d0 ---------A   01260 :             ##.##             #####             #####          ####
    0x56047d6ae5d0 ---------A   01270 PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    0x56047d6ae730 ---------A   01280 PRINT"              ----            ------            --------        ----"
    0x56047d6ae7b0 ---------A   01290 PRINT
    0x56047d6aeb60 ---------A   01300 PRINT"MOON" TAB(45);"*"
    0x56047d6aed50 ---------A   01310 H=40000
    0x56047d6aef40 ---------A   01320 V=8000
    0x56047d6af340 ---------A   01330 V1=8000
    0x56047d6af610 ---------A   01340 J=RND(-1)
    0x56047d6af900 ---------A   01350 LET J=INT(J*15)
    0x56047d6afaf0 ---------A   01360 F=9000
    0x56047d6afce0 ---------A   01370 N=0.00
    0x56047d6afed0 ---------A   01380 B=40
    0x56047d6aff40 ---------A   01390 GO TO 1500
    0x56047d6b00a0 ---------A T 01400 B=0
    0x56047d6b0340 ---------A   01410 FOR X=1 TO 100
    0x56047d6b0b80 ---------A   01420 V=V-(K^3*1.5+K*15)+10-H/10000
    0x56047d6b0f10 ---------A   01430 F=F-ABS(K*93)
    0x56047d6b10c0 ---------A   01440 IF F<0 THEN 1660
    0x56047d6b1460 ---------A   01450 H=H-(V+V1)/2
    0x56047d6b1750 ---------A   01460 B=H/1000+4
    0x56047d6b1900 ---------A   01470 IF H<0 THEN 1690
    0x56047d6b1a50 ---------A   01480 V1=V
    0x56047d6b1d50 ---------A   01490 PRINT"MOON"; TAB(B);"*"
    0x56047d6b2060 ---------A T 01500 PRINT USING 1260,N,H,V,F
    0x56047d6b21b0 ---------A   01510 PRINT"      FIRE";
    0x56047d6b2250 ---------A   01520 GO TO 1540
    0x56047d6b2390 ---------A T 01530 PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
    0x56047d6b2460 ---------A T 01540 INPUT K
    0x56047d6b2630 ---------A   01550 IF K=999 THEN 1770
    0x56047d6b2850 ---------A   01560 IF ABS(K)>10 THEN 1530
    0x56047d6b28d0 ---------A   01570 PRINT
    0x56047d6b2ae0 ---------A   01580 N=N+1.00
    0x56047d6b2c90 ---------A   01590 IF X=2 THEN 1620
    0x56047d6b2d50 ---------A T 01600 NEXT X
    0x56047d6b2dd0 ---------A   01610 GO TO 1400
    0x56047d6b2f70 ---------A T 01620 IF J=2 THEN 2030
    0x56047d6b3130 ---------A   01630 IF J=13 THEN 2070
    0x56047d6b32f0 ---------A   01640 IF J=4 THEN 2230
    0x56047d6b3780 ---------A   01650 GO TO 1400
    0x56047d6b3820 ---------A T 01660 PRINT
    0x56047d6b3ad0 ---------A   01670 PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    0x56047d6b3b40 ---------A   01680 GO TO 2450
    0x56047d6b3ce0 ---------A T 01690 IF V<0 THEN 1800
    0x56047d6b3ea0 ---------A   01700 IF V<20 THEN 1840
    0x56047d6b4060 ---------A   01710 IFV<40 THEN 2460
    0x56047d6b4110 ---------A   01720 PRINT
    0x56047d6b4510 ---------A   01730 PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    0x56047d6b4580 ---------A   01740 GO TO 2450
    0x56047d6b4720 ----------   01750 IF H<5 THEN 1840
    0x56047d6b47d0 ----------   01760 GO TO 1400
    0x56047d6b4920 ---------A T 01770 PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    0x56047d6b4a60 ---------A   01780 PRINT"  THE LUNAR SURFACE !!!!"
    0x56047d6b4ad0 ---------A   01790 GO TO 1870
    0x56047d6b4b70 ---------A T 01800 PRINT
    0x56047d6b4ce0 ---------A   01810 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    0x56047d6b4e10 ---------A   01820 PRINT"  PER SECOND!!"
    0x56047d6b4e80 ---------A   01830 GO TO 1870
    0x56047d6b4f10 ---------A T 01840 PRINT
    0x56047d6b5080 ---------A   01850 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    0x56047d6b5330 ---------A   01860 PRINT"  AT ";V;" FEET PER SECOND!!"
    0x56047d6b5470 ---------A T 01870 PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    0x56047d6b54e0 ---------A   01880 PRINT
    0x56047d6b5580 ---------A   01890 PRINT
    0x56047d6b5700 ---------A   01900 PRINT"**************************************************"
    0x56047d6b5880 ---------A   01910 PRINT"*                                                *"
    0x56047d6b5b30 ---------A   01920 PRINT"*       ";T$;"                                    * "
    0x56047d6b5d10 ---------A   01930 IF K=999 THEN 1960
    0x56047d6b5e70 ---------A   01940 PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    0x56047d6b5f10 ---------A   01950 GO TO 1970
    0x56047d6b6080 ---------A T 01960 PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    0x56047d6b6200 ---------A T 01970 PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    0x56047d6b6380 ---------A   01980 PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    0x56047d6b6500 ---------A   01990 PRINT"*                                                *"
    0x56047d6b6680 ---------A   02000 PRINT"*                              DATALINE          *"
    0x56047d6b67d0 ---------A   02010 PRINT"**************************************************"
    0x56047d6b6870 ---------A   02020 GO TO 2450
    0x56047d6b6b40 ---------A T 02030 PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    0x56047d6b6cb0 ---------A   02040 PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    0x56047d6b6e00 ---------A   02050 PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    0x56047d6b6e70 ---------A   02060 GO TO 2450
    0x56047d6b6f00 ---------A T 02070 PRINT
    0x56047d6b7080 ---------A   02080 PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    0x56047d6b71e0 ---------A   02090 PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    0x56047d6b7340 ---------A   02100 PRINT"  (TYPE IN 1, 2, OR 3 )...";
    0x56047d6b7490 ---------A   02110 INPUT R
    0x56047d6b76f0 ---------A   02120 LET W=RND(-1)
    0x56047d6b7a40 ---------A   02130 LET W=INT(W*3)+1
    0x56047d6b7bf0 ---------A   02140 IF W=R THEN 2190
    0x56047d6b8030 ---------A   02150 PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    0x56047d6b8190 ---------A   02160 PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    0x56047d6b82c0 ---------A   02170 PRINT" START OVER AGAIN...."
    0x56047d6b8360 ---------A   02180 GO TO 2490
    0x56047d6b84e0 ---------A T 02190 PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    0x56047d6b8640 ---------A   02200 PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    0x56047d6b86b0 ---------A   02210 GO TO 1600
    0x56047d6b8710 ----------   02220 GO TO 2450
    0x56047d6b87a0 ---------A T 02230 PRINT
    0x56047d6b8930 ---------A   02240 PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    0x56047d6b8ac0 ---------A   02250 PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    0x56047d6b8c40 ---------A   02260 PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    0x56047d6b8d80 ---------A   02270 PRINT"     HOW MANY WILL YOU SHOOT ?"
    0x56047d6b8ed0 ---------A   02280 INPUT Z
    0x56047d6b98a0 ---------A   02290 IF Z=9 THEN 2330
    0x56047d6b9a60 ---------A   02300 IF Z=8 THEN 2330
    0x56047d6b9c20 ---------A   02310 IF Z<8 THEN 2350
    0x56047d6b9e00 ---------A   02320 IF Z>8 THEN 2400
    0x56047d6b9f60 ---------A T 02330 PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    0x56047d6b9fd0 ---------A   02340 GO TO 1600
    0x56047d6ba050 ---------A T 02350 PRINT
    0x56047d6ba320 ---------A   02360 PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    0x56047d6ba480 ---------A   02370 PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    0x56047d6ba5c0 ---------A   02380 PRINT"   START OVER AGAIN..."
    0x56047d6ba630 ---------A   02390 GO TO 2450
    0x56047d6ba6c0 ---------A T 02400 PRINT
    0x56047d6ba990 ---------A   02410 PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    0x56047d6bab10 ---------A   02420 PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    0x56047d6bac90 ---------A   02430 PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    0x56047d6bade0 ---------A   02440 PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    0x56047d6bae30 ---------A T 02450 STOP
    0x56047d6bb160 ---------A T 02460 PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    0x56047d6bb2f0 ---------A   02470 PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    0x56047d6bb450 ---------A   02480 PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    0x56047d6bb4a0 ---------A T 02490 END
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
char* UsingFmt_01260 = "             %5.2f             %5d             %5d          %4d";
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
int   A_int;        // Comments?
float B_flt;        // Comments?
int   F_int;        // Comments?
float H_flt;        // Comments?
int   J_int;        // Comments?
int   K_int;        // Comments?
float N_flt;        // Comments?
int   R_int;        // Comments?
char* T_str;        // Comments?
float V_flt;        // Comments?
float V1_flt;       // Comments?
int   W_int;        // Comments?
int   X_int;        // Comments?
int   Z_int;        // Comments?
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
// Program Subroutines.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    b2c_fprintf(stdout,"BASIC LIBRARY--'LUNAR'--18-OCT-73"); b2c_fprintf(stdout,"\n");
    // 01010 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01020 PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    b2c_fprintf(stdout," THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"); b2c_fprintf(stdout,"\n");
    // 01030 PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    b2c_fprintf(stdout,"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"); b2c_fprintf(stdout,"\n");
    // 01040 PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    b2c_fprintf(stdout,"    TYPE IN '1' ,IF NOT, TYPE IN '0'."); b2c_fprintf(stdout,"\n");
    // 01050 INPUT A
    // Start of Basic INPUT statement 01050
    printf(" ? ");
    char inpbuf_01050[100];
    if(fgets(inpbuf_01050,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01050=strtok(inpbuf_01050," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01050==nullptr){
            A_int = 0;
        }else{
            A_int = atof(ps_01050);
        };
    }; // End of Basic INPUT statement 01050
    // 01060 IF A=1 THEN1220
    if(A_int==1)goto Lbl_01220;
    // 01070 IF A=0 THEN 1080
    if(A_int==0)goto Lbl_01080;

  Lbl_01080:
    // 01080 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01090 PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    b2c_fprintf(stdout,"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "); b2c_fprintf(stdout,"\n");
    // 01100 PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    b2c_fprintf(stdout,"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"); b2c_fprintf(stdout,"\n");
    // 01110 PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    b2c_fprintf(stdout,"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "); b2c_fprintf(stdout,"\n");
    // 01120 PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    b2c_fprintf(stdout,"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."); b2c_fprintf(stdout,"\n");
    // 01130 PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    b2c_fprintf(stdout,"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "); b2c_fprintf(stdout,"\n");
    // 01140 PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    b2c_fprintf(stdout,"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"); b2c_fprintf(stdout,"\n");
    // 01150 PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    b2c_fprintf(stdout,"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"); b2c_fprintf(stdout,"\n");
    // 01160 PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    b2c_fprintf(stdout,"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"); b2c_fprintf(stdout,"\n");
    // 01170 PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    b2c_fprintf(stdout,"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."); b2c_fprintf(stdout,"\n");
    // 01180 PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    b2c_fprintf(stdout,"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"); b2c_fprintf(stdout,"\n");
    // 01190 PRINT"     LESS THAN 20 FEET PER SECOND."
    b2c_fprintf(stdout,"     LESS THAN 20 FEET PER SECOND."); b2c_fprintf(stdout,"\n");
    // 01200 PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    b2c_fprintf(stdout,"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"); b2c_fprintf(stdout,"\n");
    // 01210 PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    b2c_fprintf(stdout,"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."); b2c_fprintf(stdout,"\n");

  Lbl_01220:
    // 01220 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01230 PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    b2c_fprintf(stdout,"PLEASE TYPE IN YOUR FIRST NAME..."); b2c_fprintf(stdout,"\n");
    // 01240 INPUT T$
    // Start of Basic INPUT statement 01240
    printf(" ? ");
    char inpbuf_01240[100];
    if(fgets(inpbuf_01240,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01240=strtok(inpbuf_01240," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01240==nullptr){
            T_str = "";
        }else{
            T_str = ps_01240;
        };
    }; // End of Basic INPUT statement 01240
    // 01250 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01260 :             ##.##             #####             #####          ####
    // 01270 PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    b2c_fprintf(stdout,"              TIME            HEIGHT            VELOCITY        FUEL"); b2c_fprintf(stdout,"\n");
    // 01280 PRINT"              ----            ------            --------        ----"
    b2c_fprintf(stdout,"              ----            ------            --------        ----"); b2c_fprintf(stdout,"\n");
    // 01290 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01300 PRINT"MOON" TAB(45);"*"
    b2c_fprintf(stdout,"MOON%s*",TAB(45)); b2c_fprintf(stdout,"\n");
    // 01310 H=40000
    H_flt = 40000;
    // 01320 V=8000
    V_flt = 8000;
    // 01330 V1=8000
    V1_flt = 8000;
    // 01340 J=RND(-1)
    J_int = RND(-1);
    // 01350 LET J=INT(J*15)
    J_int = INT(J_int*15);
    // 01360 F=9000
    F_int = 9000;
    // 01370 N=0.00
    N_flt = 0.;
    // 01380 B=40
    B_flt = 40;
    // 01390 GO TO 1500
    goto Lbl_01500;

  Lbl_01400:
    // 01400 B=0
    B_flt = 0;
    // 01410 FOR X=1 TO 100
    for(X_int=1;X_int<=100;X_int++){
        // 01420 V=V-(K^3*1.5+K*15)+10-H/10000
        V_flt = V_flt-(IPower(K_int,3)*1.5+K_int*15)+10-H_flt/10000;
        // 01430 F=F-ABS(K*93)
        F_int = F_int-ABS(K_int*93);
        // 01440 IF F<0 THEN 1660
        if(F_int<0)goto Lbl_01660;
        // 01450 H=H-(V+V1)/2
        H_flt = H_flt-(V_flt+V1_flt)/2;
        // 01460 B=H/1000+4
        B_flt = H_flt/1000+4;
        // 01470 IF H<0 THEN 1690
        if(H_flt<0)goto Lbl_01690;
        // 01480 V1=V
        V1_flt = V_flt;
        // 01490 PRINT"MOON"; TAB(B);"*"
        b2c_fprintf(stdout,"MOON%s*",TAB(B_flt)); b2c_fprintf(stdout,"\n");

  Lbl_01500:
        // 01500 PRINT USING 1260,N,H,V,F
        b2c_fprintf(stdout,b2c_ConvertUsingFormatStr(UsingFmt_01260),FT(N_flt),IT(H_flt),IT(V_flt),IT(F_int)); b2c_fprintf(stdout,"\n");
        // 01510 PRINT"      FIRE";
        b2c_fprintf(stdout,"      FIRE"); 
        // 01520 GO TO 1540
        goto Lbl_01540;

  Lbl_01530:
        // 01530 PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
        b2c_fprintf(stdout,"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"); b2c_fprintf(stdout,"\n");

  Lbl_01540:
        // 01540 INPUT K
        // Start of Basic INPUT statement 01540
        printf(" ? ");
        char inpbuf_01540[100];
        if(fgets(inpbuf_01540,100,stdin)==nullptr){
            fprintf(stderr,"ERROR: End of file on input.\n");
            exit(2);
        }else{
            char *ps_01540=strtok(inpbuf_01540," ,\t\n");
            // This may cause problems if BASIC programmer expected
            // input strings to be copied instead of just pointing
            // to the input buffer (ie. strings can be over written).
            if(ps_01540==nullptr){
                K_int = 0;
            }else{
                K_int = atof(ps_01540);
            };
        }; // End of Basic INPUT statement 01540
        // 01550 IF K=999 THEN 1770
        if(K_int==999)goto Lbl_01770;
        // 01560 IF ABS(K)>10 THEN 1530
        if(ABS(K_int)>10)goto Lbl_01530;
        // 01570 PRINT
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 01580 N=N+1.00
        N_flt = N_flt+1.;
        // 01590 IF X=2 THEN 1620
        if(X_int==2)goto Lbl_01620;

  Lbl_01600:
        // 01600 NEXT X
        int dummy_1600=0; // Ignore this line.
    }; // End-For(X_int)
    // 01610 GO TO 1400
    goto Lbl_01400;

  Lbl_01620:
    // 01620 IF J=2 THEN 2030
    if(J_int==2)goto Lbl_02030;
    // 01630 IF J=13 THEN 2070
    if(J_int==13)goto Lbl_02070;
    // 01640 IF J=4 THEN 2230
    if(J_int==4)goto Lbl_02230;
    // 01650 GO TO 1400
    goto Lbl_01400;

  Lbl_01660:
    // 01660 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01670 PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    b2c_fprintf(stdout,"  YOU HAVE JUST RUN OUT OF FUEL  %f FEET ABOVE THE SURFACE!!",H_flt); b2c_fprintf(stdout,"\n");
    // 01680 GO TO 2450
    goto Lbl_02450;

  Lbl_01690:
    // 01690 IF V<0 THEN 1800
    if(V_flt<0)goto Lbl_01800;
    // 01700 IF V<20 THEN 1840
    if(V_flt<20)goto Lbl_01840;
    // 01710 IFV<40 THEN 2460
    if(V_flt<40)goto Lbl_02460;
    // 01720 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01730 PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    b2c_fprintf(stdout," YOU HAVE JUST CRASHED!! AT  %f FPS., GOOD-BYE, %s!!",V_flt,T_str); b2c_fprintf(stdout,"\n");
    // 01740 GO TO 2450
    goto Lbl_02450;

  Lbl_01770:
    // 01770 PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    b2c_fprintf(stdout,"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"); b2c_fprintf(stdout,"\n");
    // 01780 PRINT"  THE LUNAR SURFACE !!!!"
    b2c_fprintf(stdout,"  THE LUNAR SURFACE !!!!"); b2c_fprintf(stdout,"\n");
    // 01790 GO TO 1870
    goto Lbl_01870;

  Lbl_01800:
    // 01800 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01810 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    b2c_fprintf(stdout," CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"); b2c_fprintf(stdout,"\n");
    // 01820 PRINT"  PER SECOND!!"
    b2c_fprintf(stdout,"  PER SECOND!!"); b2c_fprintf(stdout,"\n");
    // 01830 GO TO 1870
    goto Lbl_01870;

  Lbl_01840:
    // 01840 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01850 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    b2c_fprintf(stdout," CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"); b2c_fprintf(stdout,"\n");
    // 01860 PRINT"  AT ";V;" FEET PER SECOND!!"
    b2c_fprintf(stdout,"  AT  %f  FEET PER SECOND!!",V_flt); b2c_fprintf(stdout,"\n");

  Lbl_01870:
    // 01870 PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    b2c_fprintf(stdout,"  HERE IS YOUR PILOT\S LICENSE..."); b2c_fprintf(stdout,"\n");
    // 01880 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01890 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01900 PRINT"**************************************************"
    b2c_fprintf(stdout,"**************************************************"); b2c_fprintf(stdout,"\n");
    // 01910 PRINT"*                                                *"
    b2c_fprintf(stdout,"*                                                *"); b2c_fprintf(stdout,"\n");
    // 01920 PRINT"*       ";T$;"                                    * "
    b2c_fprintf(stdout,"*       %s                                    * ",T_str); b2c_fprintf(stdout,"\n");
    // 01930 IF K=999 THEN 1960
    if(K_int==999)goto Lbl_01960;
    // 01940 PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    b2c_fprintf(stdout,"*                  HAS SUCCESSFULLY LANDED       *"); b2c_fprintf(stdout,"\n");
    // 01950 GO TO 1970
    goto Lbl_01970;

  Lbl_01960:
    // 01960 PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    b2c_fprintf(stdout,"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"); b2c_fprintf(stdout,"\n");

  Lbl_01970:
    // 01970 PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    b2c_fprintf(stdout,"*     A SIMULATED MODULE ON THE MOON, AND IS     *"); b2c_fprintf(stdout,"\n");
    // 01980 PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    b2c_fprintf(stdout,"*     A CERTIFIED MOON BUGGY DRIVER.             *"); b2c_fprintf(stdout,"\n");
    // 01990 PRINT"*                                                *"
    b2c_fprintf(stdout,"*                                                *"); b2c_fprintf(stdout,"\n");
    // 02000 PRINT"*                              DATALINE          *"
    b2c_fprintf(stdout,"*                              DATALINE          *"); b2c_fprintf(stdout,"\n");
    // 02010 PRINT"**************************************************"
    b2c_fprintf(stdout,"**************************************************"); b2c_fprintf(stdout,"\n");
    // 02020 GO TO 2450
    goto Lbl_02450;

  Lbl_02030:
    // 02030 PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    b2c_fprintf(stdout," SORRY,%s, BUT A HOSTILE STARSHIP FROM SATURN HAS JUST",T_str); b2c_fprintf(stdout,"\n");
    // 02040 PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    b2c_fprintf(stdout,"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"); b2c_fprintf(stdout,"\n");
    // 02050 PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    b2c_fprintf(stdout,"   LUNAR VEHICLE !!  START OVER AGAIN..."); b2c_fprintf(stdout,"\n");
    // 02060 GO TO 2450
    goto Lbl_02450;

  Lbl_02070:
    // 02070 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02080 PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    b2c_fprintf(stdout," ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"); b2c_fprintf(stdout,"\n");
    // 02090 PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    b2c_fprintf(stdout,"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."); b2c_fprintf(stdout,"\n");
    // 02100 PRINT"  (TYPE IN 1, 2, OR 3 )...";
    b2c_fprintf(stdout,"  (TYPE IN 1, 2, OR 3 )..."); 
    // 02110 INPUT R
    // Start of Basic INPUT statement 02110
    printf(" ? ");
    char inpbuf_02110[100];
    if(fgets(inpbuf_02110,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02110=strtok(inpbuf_02110," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02110==nullptr){
            R_int = 0;
        }else{
            R_int = atof(ps_02110);
        };
    }; // End of Basic INPUT statement 02110
    // 02120 LET W=RND(-1)
    W_int = RND(-1);
    // 02130 LET W=INT(W*3)+1
    W_int = INT(W_int*3)+1;
    // 02140 IF W=R THEN 2190
    if(W_int==R_int)goto Lbl_02190;
    // 02150 PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    b2c_fprintf(stdout," SORRY %s, BUT THE CORRECT FUEL TANK WAS NUMBER  %d  , AND",T_str,W_int); b2c_fprintf(stdout,"\n");
    // 02160 PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    b2c_fprintf(stdout,"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"); b2c_fprintf(stdout,"\n");
    // 02170 PRINT" START OVER AGAIN...."
    b2c_fprintf(stdout," START OVER AGAIN...."); b2c_fprintf(stdout,"\n");
    // 02180 GO TO 2490
    goto Lbl_02490;

  Lbl_02190:
    // 02190 PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    b2c_fprintf(stdout," YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"); b2c_fprintf(stdout,"\n");
    // 02200 PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    b2c_fprintf(stdout,"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."); b2c_fprintf(stdout,"\n");
    // 02210 GO TO 1600
    goto Lbl_01600;

  Lbl_02230:
    // 02230 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02240 PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    b2c_fprintf(stdout,"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"); b2c_fprintf(stdout,"\n");
    // 02250 PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    b2c_fprintf(stdout,"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"); b2c_fprintf(stdout,"\n");
    // 02260 PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    b2c_fprintf(stdout,"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"); b2c_fprintf(stdout,"\n");
    // 02270 PRINT"     HOW MANY WILL YOU SHOOT ?"
    b2c_fprintf(stdout,"     HOW MANY WILL YOU SHOOT ?"); b2c_fprintf(stdout,"\n");
    // 02280 INPUT Z
    // Start of Basic INPUT statement 02280
    printf(" ? ");
    char inpbuf_02280[100];
    if(fgets(inpbuf_02280,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02280=strtok(inpbuf_02280," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02280==nullptr){
            Z_int = 0;
        }else{
            Z_int = atof(ps_02280);
        };
    }; // End of Basic INPUT statement 02280
    // 02290 IF Z=9 THEN 2330
    if(Z_int==9)goto Lbl_02330;
    // 02300 IF Z=8 THEN 2330
    if(Z_int==8)goto Lbl_02330;
    // 02310 IF Z<8 THEN 2350
    if(Z_int<8)goto Lbl_02350;
    // 02320 IF Z>8 THEN 2400
    if(Z_int>8)goto Lbl_02400;

  Lbl_02330:
    // 02330 PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    b2c_fprintf(stdout,"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."); b2c_fprintf(stdout,"\n");
    // 02340 GO TO 1600
    goto Lbl_01600;

  Lbl_02350:
    // 02350 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02360 PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    b2c_fprintf(stdout," SORRY, %s, BUT THAT WASN\T ENOUGH!!",T_str); b2c_fprintf(stdout,"\n");
    // 02370 PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    b2c_fprintf(stdout,"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"); b2c_fprintf(stdout,"\n");
    // 02380 PRINT"   START OVER AGAIN..."
    b2c_fprintf(stdout,"   START OVER AGAIN..."); b2c_fprintf(stdout,"\n");
    // 02390 GO TO 2450
    goto Lbl_02450;

  Lbl_02400:
    // 02400 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02410 PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    b2c_fprintf(stdout,"  SORRY,%s, BUT YOU USED TOO MANY ROCKETS,",T_str); b2c_fprintf(stdout,"\n");
    // 02420 PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    b2c_fprintf(stdout,"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"); b2c_fprintf(stdout,"\n");
    // 02430 PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    b2c_fprintf(stdout,"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"); b2c_fprintf(stdout,"\n");
    // 02440 PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    b2c_fprintf(stdout,"    COMPLETELY OFF COURSE!! START OVER AGAIN..."); b2c_fprintf(stdout,"\n");

  Lbl_02450:
    // 02450 STOP
    exit(1);

  Lbl_02460:
    // 02460 PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    b2c_fprintf(stdout," YOU HAVE LANDED, BUT AT A VELOCITY OF  %f  FEET PER SECOND,",V_flt); b2c_fprintf(stdout,"\n");
    // 02470 PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    b2c_fprintf(stdout,"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"); b2c_fprintf(stdout,"\n");
    // 02480 PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    b2c_fprintf(stdout,"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"); b2c_fprintf(stdout,"\n");

  Lbl_02490:
    // 02490 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
