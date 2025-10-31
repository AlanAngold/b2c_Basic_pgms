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
    0x55e152bf86d0 ---------A   00100  PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    0x55e152bf8670 ---------A   00110  PRINT
    0x55e152bf9fc0 ---------A   00120  PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    0x55e152bf92d0 ---------A   00130  PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    0x55e152be92b0 ---------A   00140  PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    0x55e152bfa1b0 ---------A   00150  INPUT A
    0x55e152bf9080 ---------A   00160  IF A=1 THEN320
    0x55e152bfa680 ---------A   00170  IF A=0 THEN 180
    0x55e152bf8be0 ---------A T 00180  PRINT
    0x55e152bfb0a0 ---------A   00190  PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    0x55e152bf9620 ---------A   00200  PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    0x55e152bf97c0 ---------A   00210  PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    0x55e152c008d0 ---------A   00220  PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    0x55e152c00a80 ---------A   00230  PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    0x55e152c00c30 ---------A   00240  PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    0x55e152c00dd0 ---------A   00250  PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    0x55e152c00f80 ---------A   00260  PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    0x55e152c01140 ---------A   00270  PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    0x55e152c012e0 ---------A   00280  PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    0x55e152c01450 ---------A   00290  PRINT"     LESS THAN 20 FEET PER SECOND."
    0x55e152c01600 ---------A   00300  PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    0x55e152c01770 ---------A   00310  PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    0x55e152c01810 ---------A T 00320  PRINT
    0x55e152c01930 ---------A   00330  PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    0x55e152c01af0 ---------A   00340  INPUT T$
    0x55e152c01bb0 ---------A   00350  PRINT
    0x55e152c01c60 ---------A   00360  :             ##.##             #####             #####          ####
    0x55e152c01e80 ---------A   00370  PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    0x55e152c01ff0 ---------A   00380  PRINT"              ----            ------            --------        ----"
    0x55e152c02050 ---------A   00390  PRINT
    0x55e152c023f0 ---------A   00400  PRINT"MOON" TAB(45);"*"
    0x55e152c026d0 ---------A   00410  H=40000
    0x55e152c029a0 ---------A   00420  V=8000
    0x55e152c02e80 ---------A   00430  V1=8000
    0x55e152c03230 ---------A   00440  J=RND(-1)
    0x55e152c03640 ---------A   00450  LET J=INT(J*15)
    0x55e152c03910 ---------A   00460  F=9000
    0x55e152c03be0 ---------A   00480  N=0.00
    0x55e152c03eb0 ---------A   00490  B=40
    0x55e152c03f20 ---------A   00500  GO TO 610
    0x55e152c04130 ---------A T 00510  B=0
    0x55e152c044a0 ---------A   00520  FOR X=1 TO 100
    0x55e152c05040 ---------A   00530  V=V-(K^3*1.5+K*15)+10-H/10000
    0x55e152c05570 ---------A   00540  F=F-ABS(K*93)
    0x55e152c057c0 ---------A   00550  IF F<0 THEN 770
    0x55e152c05d80 ---------A   00560  H=H-(V+V1)/2
    0x55e152c061b0 ---------A   00570  B=H/1000+4
    0x55e152c06400 ---------A   00580  IF H<0 THEN 800
    0x55e152c06620 ---------A   00590  V1=V
    0x55e152c069e0 ---------A   00600  PRINT"MOON"; TAB(B);"*"
    0x55e152c06f20 ---------A T 00610  PRINT USING 360,N,H,V,F
    0x55e152c070a0 ---------A   00620  PRINT"      FIRE";
    0x55e152c07150 ---------A   00630  GO TO 650
    0x55e152c072c0 ---------A T 00640  PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
    0x55e152c07420 ---------A T 00650  INPUT K
    0x55e152c07690 ---------A   00660  IF K=999 THEN 880
    0x55e152c079d0 ---------A   00670  IF ABS(K)>10 THEN 640
    0x55e152c07a50 ---------A   00680  PRINT
    0x55e152c07d90 ---------A   00690  N=N+1.00
    0x55e152c07fe0 ---------A   00700  IF X=2 THEN 730
    0x55e152c08120 ---------A T 00710  NEXT X
    0x55e152c081b0 ---------A   00720  GO TO 510
    0x55e152c08400 ---------A T 00730  IF J=2 THEN 1140
    0x55e152c08660 ---------A   00740  IF J=13 THEN 1180
    0x55e152c088c0 ---------A   00750  IF J=4 THEN 1340
    0x55e152c08d50 ---------A   00760  GO TO 510
    0x55e152c08e00 ---------A T 00770  PRINT
    0x55e152c09180 ---------A   00780  PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    0x55e152c09200 ---------A   00790  GO TO 1560
    0x55e152c09450 ---------A T 00800  IF V<0 THEN 910
    0x55e152c096b0 ---------A   00810  IF V<20 THEN 950
    0x55e152c09910 ---------A   00820  IFV<40 THEN 1570
    0x55e152c099c0 ---------A   00830  PRINT
    0x55e152c09f30 ---------A   00840  PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    0x55e152c09fb0 ---------A   00850  GO TO 1560
    0x55e152c0a200 ----------   00860  IF H<5 THEN 950
    0x55e152c0a2b0 ----------   00870  GO TO 510
    0x55e152c0a430 ---------A T 00880  PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    0x55e152c0a5a0 ---------A   00890  PRINT"  THE LUNAR SURFACE !!!!"
    0x55e152c0a620 ---------A   00900  GO TO 980
    0x55e152c0a6d0 ---------A T 00910  PRINT
    0x55e152c0a870 ---------A   00920  PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    0x55e152c0a9d0 ---------A   00930  PRINT"  PER SECOND!!"
    0x55e152c0aa50 ---------A   00940  GO TO 980
    0x55e152c0aaf0 ---------A T 00950  PRINT
    0x55e152c0ac90 ---------A   00960  PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    0x55e152c0b010 ---------A   00970  PRINT"  AT ";V;" FEET PER SECOND!!"
    0x55e152c0b180 ---------A T 00980  PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    0x55e152c0b200 ---------A   00990  PRINT
    0x55e152c0b2b0 ---------A   01000  PRINT
    0x55e152c0b460 ---------A   01010  PRINT"**************************************************"
    0x55e152c0b610 ---------A   01020  PRINT"*                                                *"
    0x55e152c0b990 ---------A   01030  PRINT"*       ";T$;"                                    * "
    0x55e152c0bc20 ---------A   01040  IF K=999 THEN 1070
    0x55e152c0bda0 ---------A   01050  PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    0x55e152c0be50 ---------A   01060  GO TO 1080
    0x55e152c0bff0 ---------A T 01070  PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    0x55e152c0c1a0 ---------A T 01080  PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    0x55e152c0c350 ---------A   01090  PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    0x55e152c0c500 ---------A   01100  PRINT"*                                                *"
    0x55e152c0c6b0 ---------A   01110  PRINT"*                              DATALINE          *"
    0x55e152c0c830 ---------A   01120  PRINT"**************************************************"
    0x55e152c0c8e0 ---------A   01130  GO TO 1560
    0x55e152c0cc80 ---------A T 01140  PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    0x55e152c0ce20 ---------A   01150  PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    0x55e152c0cfa0 ---------A   01160  PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    0x55e152c0d020 ---------A   01170  GO TO 1560
    0x55e152c0d0c0 ---------A T 01180  PRINT
    0x55e152c0d270 ---------A   01190  PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    0x55e152c0d400 ---------A   01200  PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    0x55e152c0d590 ---------A   01210  PRINT"  (TYPE IN 1, 2, OR 3 )...";
    0x55e152c0d7b0 ---------A   01220  INPUT R
    0x55e152c0db70 ---------A   01230  LET W=RND(-1)
    0x55e152c0e080 ---------A   01240  LET W=INT(W*3)+1
    0x55e152c0e330 ---------A   01250  IF W=R THEN 1300
    0x55e152c0e8d0 ---------A   01260  PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    0x55e152c0ea60 ---------A   01270  PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    0x55e152c0ebc0 ---------A   01280  PRINT" START OVER AGAIN...."
    0x55e152c0ec70 ---------A   01290  GO TO 1600
    0x55e152c0ee20 ---------A T 01300  PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    0x55e152c0efb0 ---------A   01310  PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    0x55e152c0f030 ---------A   01320  GO TO 710
    0x55e152c0f0a0 ----------   01330  GO TO 1560
    0x55e152c0f140 ---------A T 01340  PRINT
    0x55e152c0f300 ---------A   01350  PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    0x55e152c0f4c0 ---------A   01360  PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    0x55e152c0f670 ---------A   01370  PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    0x55e152c0f7e0 ---------A   01380  PRINT"     HOW MANY WILL YOU SHOOT ?"
    0x55e152c0fa00 ---------A   01390  INPUT Z
    0x55e152c10470 ---------A   01400  IF Z=9 THEN 1440
    0x55e152c106d0 ---------A   01410  IF Z=8 THEN 1440
    0x55e152c10930 ---------A   01420  IF Z<8 THEN 1460
    0x55e152c10bb0 ---------A   01430  IF Z>8 THEN 1510
    0x55e152c10d30 ---------A T 01440  PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    0x55e152c10db0 ---------A   01450  GO TO 710
    0x55e152c10e40 ---------A T 01460  PRINT
    0x55e152c111e0 ---------A   01470  PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    0x55e152c11370 ---------A   01480  PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    0x55e152c114e0 ---------A   01490  PRINT"   START OVER AGAIN..."
    0x55e152c11560 ---------A   01500  GO TO 1560
    0x55e152c11600 ---------A T 01510  PRINT
    0x55e152c119a0 ---------A   01520  PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    0x55e152c11b50 ---------A   01530  PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    0x55e152c11d00 ---------A   01540  PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    0x55e152c11e80 ---------A   01550  PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    0x55e152c11ee0 ---------A T 01560  STOP
    0x55e152c122d0 ---------A T 01570  PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    0x55e152c12490 ---------A   01580  PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    0x55e152c12620 ---------A   01590  PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    0x55e152c12680 ---------A T 01600  END
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
   A) 0x55e152bf86d0 (00100)   0x55e152bf86d0 (00100)   0x55e152c12680 (01600)   0x55e152c12680 (01600)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/lunar.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55e152bf86d0 ---------A   00100  PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    0x55e152bf8670 ---------A   00110  PRINT
    0x55e152bf9fc0 ---------A   00120  PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    0x55e152bf92d0 ---------A   00130  PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    0x55e152be92b0 ---------A   00140  PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    0x55e152bfa1b0 ---------A   00150  INPUT A
    0x55e152bf9080 ---------A   00160  IF A=1 THEN320
    0x55e152bfa680 ---------A   00170  IF A=0 THEN 180
    0x55e152bf8be0 ---------A T 00180  PRINT
    0x55e152bfb0a0 ---------A   00190  PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    0x55e152bf9620 ---------A   00200  PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    0x55e152bf97c0 ---------A   00210  PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    0x55e152c008d0 ---------A   00220  PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    0x55e152c00a80 ---------A   00230  PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    0x55e152c00c30 ---------A   00240  PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    0x55e152c00dd0 ---------A   00250  PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    0x55e152c00f80 ---------A   00260  PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    0x55e152c01140 ---------A   00270  PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    0x55e152c012e0 ---------A   00280  PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    0x55e152c01450 ---------A   00290  PRINT"     LESS THAN 20 FEET PER SECOND."
    0x55e152c01600 ---------A   00300  PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    0x55e152c01770 ---------A   00310  PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    0x55e152c01810 ---------A T 00320  PRINT
    0x55e152c01930 ---------A   00330  PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    0x55e152c01af0 ---------A   00340  INPUT T$
    0x55e152c01bb0 ---------A   00350  PRINT
    0x55e152c01c60 ---------A   00360  
    0x55e152c01e80 ---------A   00370  PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    0x55e152c01ff0 ---------A   00380  PRINT"              ----            ------            --------        ----"
    0x55e152c02050 ---------A   00390  PRINT
    0x55e152c023f0 ---------A   00400  PRINT"MOON" TAB(45);"*"
    0x55e152c026d0 ---------A   00410  H=40000
    0x55e152c029a0 ---------A   00420  V=8000
    0x55e152c02e80 ---------A   00430  V1=8000
    0x55e152c03230 ---------A   00440  J=RND(-1)
    0x55e152c03640 ---------A   00450  LET J=INT(J*15)
    0x55e152c03910 ---------A   00460  F=9000
    0x55e152c03be0 ---------A   00480  N=0.00
    0x55e152c03eb0 ---------A   00490  B=40
    0x55e152c03f20 ---------A   00500  GO TO 610
    0x55e152c04130 ---------A T 00510  B=0
    0x55e152c044a0 ---------A   00520  FOR X=1 TO 100
    0x55e152c05040 ---------A   00530  V=V-(K^3*1.5+K*15)+10-H/10000
    0x55e152c05570 ---------A   00540  F=F-ABS(K*93)
    0x55e152c057c0 ---------A   00550  IF F<0 THEN 770
    0x55e152c05d80 ---------A   00560  H=H-(V+V1)/2
    0x55e152c061b0 ---------A   00570  B=H/1000+4
    0x55e152c06400 ---------A   00580  IF H<0 THEN 800
    0x55e152c06620 ---------A   00590  V1=V
    0x55e152c069e0 ---------A   00600  PRINT"MOON"; TAB(B);"*"
    0x55e152c06f20 ---------A T 00610  PRINT USING 360,N,H,V,F
    0x55e152c070a0 ---------A   00620  PRINT"      FIRE";
    0x55e152c07150 ---------A   00630  GO TO 650
    0x55e152c072c0 ---------A T 00640  PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
    0x55e152c07420 ---------A T 00650  INPUT K
    0x55e152c07690 ---------A   00660  IF K=999 THEN 880
    0x55e152c079d0 ---------A   00670  IF ABS(K)>10 THEN 640
    0x55e152c07a50 ---------A   00680  PRINT
    0x55e152c07d90 ---------A   00690  N=N+1.00
    0x55e152c07fe0 ---------A   00700  IF X=2 THEN 730
    0x55e152c08120 ---------A T 00710  NEXT X
    0x55e152c081b0 ---------A   00720  GO TO 510
    0x55e152c08400 ---------A T 00730  IF J=2 THEN 1140
    0x55e152c08660 ---------A   00740  IF J=13 THEN 1180
    0x55e152c088c0 ---------A   00750  IF J=4 THEN 1340
    0x55e152c08d50 ---------A   00760  GO TO 510
    0x55e152c08e00 ---------A T 00770  PRINT
    0x55e152c09180 ---------A   00780  PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    0x55e152c09200 ---------A   00790  GO TO 1560
    0x55e152c09450 ---------A T 00800  IF V<0 THEN 910
    0x55e152c096b0 ---------A   00810  IF V<20 THEN 950
    0x55e152c09910 ---------A   00820  IFV<40 THEN 1570
    0x55e152c099c0 ---------A   00830  PRINT
    0x55e152c09f30 ---------A   00840  PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    0x55e152c09fb0 ---------A   00850  GO TO 1560
    0x55e152c0a200 ----------   00860  IF H<5 THEN 950
    0x55e152c0a2b0 ----------   00870  GO TO 510
    0x55e152c0a430 ---------A T 00880  PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    0x55e152c0a5a0 ---------A   00890  PRINT"  THE LUNAR SURFACE !!!!"
    0x55e152c0a620 ---------A   00900  GO TO 980
    0x55e152c0a6d0 ---------A T 00910  PRINT
    0x55e152c0a870 ---------A   00920  PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    0x55e152c0a9d0 ---------A   00930  PRINT"  PER SECOND!!"
    0x55e152c0aa50 ---------A   00940  GO TO 980
    0x55e152c0aaf0 ---------A T 00950  PRINT
    0x55e152c0ac90 ---------A   00960  PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    0x55e152c0b010 ---------A   00970  PRINT"  AT ";V;" FEET PER SECOND!!"
    0x55e152c0b180 ---------A T 00980  PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    0x55e152c0b200 ---------A   00990  PRINT
    0x55e152c0b2b0 ---------A   01000  PRINT
    0x55e152c0b460 ---------A   01010  PRINT"**************************************************"
    0x55e152c0b610 ---------A   01020  PRINT"*                                                *"
    0x55e152c0b990 ---------A   01030  PRINT"*       ";T$;"                                    * "
    0x55e152c0bc20 ---------A   01040  IF K=999 THEN 1070
    0x55e152c0bda0 ---------A   01050  PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    0x55e152c0be50 ---------A   01060  GO TO 1080
    0x55e152c0bff0 ---------A T 01070  PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    0x55e152c0c1a0 ---------A T 01080  PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    0x55e152c0c350 ---------A   01090  PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    0x55e152c0c500 ---------A   01100  PRINT"*                                                *"
    0x55e152c0c6b0 ---------A   01110  PRINT"*                              DATALINE          *"
    0x55e152c0c830 ---------A   01120  PRINT"**************************************************"
    0x55e152c0c8e0 ---------A   01130  GO TO 1560
    0x55e152c0cc80 ---------A T 01140  PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    0x55e152c0ce20 ---------A   01150  PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    0x55e152c0cfa0 ---------A   01160  PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    0x55e152c0d020 ---------A   01170  GO TO 1560
    0x55e152c0d0c0 ---------A T 01180  PRINT
    0x55e152c0d270 ---------A   01190  PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    0x55e152c0d400 ---------A   01200  PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    0x55e152c0d590 ---------A   01210  PRINT"  (TYPE IN 1, 2, OR 3 )...";
    0x55e152c0d7b0 ---------A   01220  INPUT R
    0x55e152c0db70 ---------A   01230  LET W=RND(-1)
    0x55e152c0e080 ---------A   01240  LET W=INT(W*3)+1
    0x55e152c0e330 ---------A   01250  IF W=R THEN 1300
    0x55e152c0e8d0 ---------A   01260  PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    0x55e152c0ea60 ---------A   01270  PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    0x55e152c0ebc0 ---------A   01280  PRINT" START OVER AGAIN...."
    0x55e152c0ec70 ---------A   01290  GO TO 1600
    0x55e152c0ee20 ---------A T 01300  PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    0x55e152c0efb0 ---------A   01310  PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    0x55e152c0f030 ---------A   01320  GO TO 710
    0x55e152c0f0a0 ----------   01330  GO TO 1560
    0x55e152c0f140 ---------A T 01340  PRINT
    0x55e152c0f300 ---------A   01350  PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    0x55e152c0f4c0 ---------A   01360  PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    0x55e152c0f670 ---------A   01370  PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    0x55e152c0f7e0 ---------A   01380  PRINT"     HOW MANY WILL YOU SHOOT ?"
    0x55e152c0fa00 ---------A   01390  INPUT Z
    0x55e152c10470 ---------A   01400  IF Z=9 THEN 1440
    0x55e152c106d0 ---------A   01410  IF Z=8 THEN 1440
    0x55e152c10930 ---------A   01420  IF Z<8 THEN 1460
    0x55e152c10bb0 ---------A   01430  IF Z>8 THEN 1510
    0x55e152c10d30 ---------A T 01440  PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    0x55e152c10db0 ---------A   01450  GO TO 710
    0x55e152c10e40 ---------A T 01460  PRINT
    0x55e152c111e0 ---------A   01470  PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    0x55e152c11370 ---------A   01480  PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    0x55e152c114e0 ---------A   01490  PRINT"   START OVER AGAIN..."
    0x55e152c11560 ---------A   01500  GO TO 1560
    0x55e152c11600 ---------A T 01510  PRINT
    0x55e152c119a0 ---------A   01520  PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    0x55e152c11b50 ---------A   01530  PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    0x55e152c11d00 ---------A   01540  PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    0x55e152c11e80 ---------A   01550  PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    0x55e152c11ee0 ---------A T 01560  STOP
    0x55e152c122d0 ---------A T 01570  PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    0x55e152c12490 ---------A   01580  PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    0x55e152c12620 ---------A   01590  PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    0x55e152c12680 ---------A T 01600  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/lunar.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55e152bf86d0 ---------A   01000  PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    0x55e152bf8670 ---------A   01010  PRINT
    0x55e152bf9fc0 ---------A   01020  PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    0x55e152bf92d0 ---------A   01030  PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    0x55e152be92b0 ---------A   01040  PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    0x55e152bfa1b0 ---------A   01050  INPUT A
    0x55e152bf9080 ---------A   01060  IF A=1 THEN1220
    0x55e152bfa680 ---------A T 01070  IF A=0 THEN 1080
    0x55e152bf8be0 ---------A T 01080  PRINT
    0x55e152bfb0a0 ---------A   01090  PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    0x55e152bf9620 ---------A   01100  PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    0x55e152bf97c0 ---------A   01110  PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    0x55e152c008d0 ---------A   01120  PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    0x55e152c00a80 ---------A   01130  PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    0x55e152c00c30 ---------A T 01140  PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    0x55e152c00dd0 ---------A   01150  PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    0x55e152c00f80 ---------A   01160  PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    0x55e152c01140 ---------A   01170  PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    0x55e152c012e0 ---------A T 01180  PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    0x55e152c01450 ---------A   01190  PRINT"     LESS THAN 20 FEET PER SECOND."
    0x55e152c01600 ---------A   01200  PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    0x55e152c01770 ---------A   01210  PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    0x55e152c01810 ---------A   01220  PRINT
    0x55e152c01930 ---------A   01230  PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    0x55e152c01af0 ---------A   01240  INPUT T$
    0x55e152c01bb0 ---------A   01250  PRINT
    0x55e152c01c60 ---------A   01260  
    0x55e152c01e80 ---------A   01270  PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    0x55e152c01ff0 ---------A   01280  PRINT"              ----            ------            --------        ----"
    0x55e152c02050 ---------A   01290  PRINT
    0x55e152c023f0 ---------A T 01300  PRINT"MOON" TAB(45);"*"
    0x55e152c026d0 ---------A   01310  H=40000
    0x55e152c029a0 ---------A   01320  V=8000
    0x55e152c02e80 ---------A   01330  V1=8000
    0x55e152c03230 ---------A T 01340  J=RND(-1)
    0x55e152c03640 ---------A   01350  LET J=INT(J*15)
    0x55e152c03910 ---------A   01360  F=9000
    0x55e152c03be0 ---------A   01370  N=0.00
    0x55e152c03eb0 ---------A   01380  B=40
    0x55e152c03f20 ---------A   01390  GO TO 1500
    0x55e152c04130 ---------A   01400  B=0
    0x55e152c044a0 ---------A   01410  FOR X=1 TO 100
    0x55e152c05040 ---------A   01420  V=V-(K^3*1.5+K*15)+10-H/10000
    0x55e152c05570 ---------A   01430  F=F-ABS(K*93)
    0x55e152c057c0 ---------A T 01440  IF F<0 THEN 1660
    0x55e152c05d80 ---------A   01450  H=H-(V+V1)/2
    0x55e152c061b0 ---------A T 01460  B=H/1000+4
    0x55e152c06400 ---------A   01470  IF H<0 THEN 1690
    0x55e152c06620 ---------A   01480  V1=V
    0x55e152c069e0 ---------A   01490  PRINT"MOON"; TAB(B);"*"
    0x55e152c06f20 ---------A   01500  PRINT USING 1260,N,H,V,F
    0x55e152c070a0 ---------A T 01510  PRINT"      FIRE";
    0x55e152c07150 ---------A   01520  GO TO 1540
    0x55e152c072c0 ---------A   01530  PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
    0x55e152c07420 ---------A   01540  INPUT K
    0x55e152c07690 ---------A   01550  IF K=999 THEN 1770
    0x55e152c079d0 ---------A T 01560  IF ABS(K)>10 THEN 1530
    0x55e152c07a50 ---------A T 01570  PRINT
    0x55e152c07d90 ---------A   01580  N=N+1.00
    0x55e152c07fe0 ---------A   01590  IF X=2 THEN 1620
    0x55e152c08120 ---------A T 01600  NEXT X
    0x55e152c081b0 ---------A   01610  GO TO 1400
    0x55e152c08400 ---------A   01620  IF J=2 THEN 2030
    0x55e152c08660 ---------A   01630  IF J=13 THEN 2070
    0x55e152c088c0 ---------A   01640  IF J=4 THEN 2230
    0x55e152c08d50 ---------A   01650  GO TO 1400
    0x55e152c08e00 ---------A   01660  PRINT
    0x55e152c09180 ---------A   01670  PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    0x55e152c09200 ---------A   01680  GO TO 2450
    0x55e152c09450 ---------A   01690  IF V<0 THEN 1800
    0x55e152c096b0 ---------A   01700  IF V<20 THEN 1840
    0x55e152c09910 ---------A   01710  IFV<40 THEN 2460
    0x55e152c099c0 ---------A   01720  PRINT
    0x55e152c09f30 ---------A   01730  PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    0x55e152c09fb0 ---------A   01740  GO TO 2450
    0x55e152c0a200 ----------   01750  IF H<5 THEN 1840
    0x55e152c0a2b0 ----------   01760  GO TO 1400
    0x55e152c0a430 ---------A   01770  PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    0x55e152c0a5a0 ---------A   01780  PRINT"  THE LUNAR SURFACE !!!!"
    0x55e152c0a620 ---------A   01790  GO TO 1870
    0x55e152c0a6d0 ---------A   01800  PRINT
    0x55e152c0a870 ---------A   01810  PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    0x55e152c0a9d0 ---------A   01820  PRINT"  PER SECOND!!"
    0x55e152c0aa50 ---------A   01830  GO TO 1870
    0x55e152c0aaf0 ---------A   01840  PRINT
    0x55e152c0ac90 ---------A   01850  PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    0x55e152c0b010 ---------A   01860  PRINT"  AT ";V;" FEET PER SECOND!!"
    0x55e152c0b180 ---------A   01870  PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    0x55e152c0b200 ---------A   01880  PRINT
    0x55e152c0b2b0 ---------A   01890  PRINT
    0x55e152c0b460 ---------A   01900  PRINT"**************************************************"
    0x55e152c0b610 ---------A   01910  PRINT"*                                                *"
    0x55e152c0b990 ---------A   01920  PRINT"*       ";T$;"                                    * "
    0x55e152c0bc20 ---------A   01930  IF K=999 THEN 1960
    0x55e152c0bda0 ---------A   01940  PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    0x55e152c0be50 ---------A   01950  GO TO 1970
    0x55e152c0bff0 ---------A   01960  PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    0x55e152c0c1a0 ---------A   01970  PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    0x55e152c0c350 ---------A   01980  PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    0x55e152c0c500 ---------A   01990  PRINT"*                                                *"
    0x55e152c0c6b0 ---------A   02000  PRINT"*                              DATALINE          *"
    0x55e152c0c830 ---------A   02010  PRINT"**************************************************"
    0x55e152c0c8e0 ---------A   02020  GO TO 2450
    0x55e152c0cc80 ---------A   02030  PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    0x55e152c0ce20 ---------A   02040  PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    0x55e152c0cfa0 ---------A   02050  PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    0x55e152c0d020 ---------A   02060  GO TO 2450
    0x55e152c0d0c0 ---------A   02070  PRINT
    0x55e152c0d270 ---------A   02080  PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    0x55e152c0d400 ---------A   02090  PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    0x55e152c0d590 ---------A   02100  PRINT"  (TYPE IN 1, 2, OR 3 )...";
    0x55e152c0d7b0 ---------A   02110  INPUT R
    0x55e152c0db70 ---------A   02120  LET W=RND(-1)
    0x55e152c0e080 ---------A   02130  LET W=INT(W*3)+1
    0x55e152c0e330 ---------A   02140  IF W=R THEN 2190
    0x55e152c0e8d0 ---------A   02150  PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    0x55e152c0ea60 ---------A   02160  PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    0x55e152c0ebc0 ---------A   02170  PRINT" START OVER AGAIN...."
    0x55e152c0ec70 ---------A   02180  GO TO 2490
    0x55e152c0ee20 ---------A   02190  PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    0x55e152c0efb0 ---------A   02200  PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    0x55e152c0f030 ---------A   02210  GO TO 1600
    0x55e152c0f0a0 ----------   02220  GO TO 2450
    0x55e152c0f140 ---------A   02230  PRINT
    0x55e152c0f300 ---------A   02240  PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    0x55e152c0f4c0 ---------A   02250  PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    0x55e152c0f670 ---------A   02260  PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    0x55e152c0f7e0 ---------A   02270  PRINT"     HOW MANY WILL YOU SHOOT ?"
    0x55e152c0fa00 ---------A   02280  INPUT Z
    0x55e152c10470 ---------A   02290  IF Z=9 THEN 2330
    0x55e152c106d0 ---------A   02300  IF Z=8 THEN 2330
    0x55e152c10930 ---------A   02310  IF Z<8 THEN 2350
    0x55e152c10bb0 ---------A   02320  IF Z>8 THEN 2400
    0x55e152c10d30 ---------A   02330  PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    0x55e152c10db0 ---------A   02340  GO TO 1600
    0x55e152c10e40 ---------A   02350  PRINT
    0x55e152c111e0 ---------A   02360  PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    0x55e152c11370 ---------A   02370  PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    0x55e152c114e0 ---------A   02380  PRINT"   START OVER AGAIN..."
    0x55e152c11560 ---------A   02390  GO TO 2450
    0x55e152c11600 ---------A   02400  PRINT
    0x55e152c119a0 ---------A   02410  PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    0x55e152c11b50 ---------A   02420  PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    0x55e152c11d00 ---------A   02430  PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    0x55e152c11e80 ---------A   02440  PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    0x55e152c11ee0 ---------A   02450  STOP
    0x55e152c122d0 ---------A   02460  PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    0x55e152c12490 ---------A   02470  PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    0x55e152c12620 ---------A   02480  PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    0x55e152c12680 ---------A   02490  END
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
    0x55e152bf86d0 ---------A   01000  PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    0x55e152bf8670 ---------A   01010  PRINT
    0x55e152bf9fc0 ---------A   01020  PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    0x55e152bf92d0 ---------A   01030  PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    0x55e152be92b0 ---------A   01040  PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    0x55e152bfa1b0 ---------A   01050  INPUT A
    0x55e152bf9080 ---------A   01060  IF A=1 THEN1220
    0x55e152bfa680 ---------A   01070  IF A=0 THEN 1080
    0x55e152bf8be0 ---------A T 01080  PRINT
    0x55e152bfb0a0 ---------A   01090  PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    0x55e152bf9620 ---------A   01100  PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    0x55e152bf97c0 ---------A   01110  PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    0x55e152c008d0 ---------A   01120  PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    0x55e152c00a80 ---------A   01130  PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    0x55e152c00c30 ---------A   01140  PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    0x55e152c00dd0 ---------A   01150  PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    0x55e152c00f80 ---------A   01160  PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    0x55e152c01140 ---------A   01170  PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    0x55e152c012e0 ---------A   01180  PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    0x55e152c01450 ---------A   01190  PRINT"     LESS THAN 20 FEET PER SECOND."
    0x55e152c01600 ---------A   01200  PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    0x55e152c01770 ---------A   01210  PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    0x55e152c01810 ---------A T 01220  PRINT
    0x55e152c01930 ---------A   01230  PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    0x55e152c01af0 ---------A   01240  INPUT T$
    0x55e152c01bb0 ---------A   01250  PRINT
    0x55e152c01c60 ---------A   01260  
    0x55e152c01e80 ---------A   01270  PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    0x55e152c01ff0 ---------A   01280  PRINT"              ----            ------            --------        ----"
    0x55e152c02050 ---------A   01290  PRINT
    0x55e152c023f0 ---------A   01300  PRINT"MOON" TAB(45);"*"
    0x55e152c026d0 ---------A   01310  H=40000
    0x55e152c029a0 ---------A   01320  V=8000
    0x55e152c02e80 ---------A   01330  V1=8000
    0x55e152c03230 ---------A   01340  J=RND(-1)
    0x55e152c03640 ---------A   01350  LET J=INT(J*15)
    0x55e152c03910 ---------A   01360  F=9000
    0x55e152c03be0 ---------A   01370  N=0.00
    0x55e152c03eb0 ---------A   01380  B=40
    0x55e152c03f20 ---------A   01390  GO TO 1500
    0x55e152c04130 ---------A T 01400  B=0
    0x55e152c044a0 ---------A   01410  FOR X=1 TO 100
    0x55e152c05040 ---------A   01420  V=V-(K^3*1.5+K*15)+10-H/10000
    0x55e152c05570 ---------A   01430  F=F-ABS(K*93)
    0x55e152c057c0 ---------A   01440  IF F<0 THEN 1660
    0x55e152c05d80 ---------A   01450  H=H-(V+V1)/2
    0x55e152c061b0 ---------A   01460  B=H/1000+4
    0x55e152c06400 ---------A   01470  IF H<0 THEN 1690
    0x55e152c06620 ---------A   01480  V1=V
    0x55e152c069e0 ---------A   01490  PRINT"MOON"; TAB(B);"*"
    0x55e152c06f20 ---------A T 01500  PRINT USING 1260,N,H,V,F
    0x55e152c070a0 ---------A   01510  PRINT"      FIRE";
    0x55e152c07150 ---------A   01520  GO TO 1540
    0x55e152c072c0 ---------A T 01530  PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
    0x55e152c07420 ---------A T 01540  INPUT K
    0x55e152c07690 ---------A   01550  IF K=999 THEN 1750
    0x55e152c079d0 ---------A   01560  IF ABS(K)>10 THEN 1530
    0x55e152c07a50 ---------A   01570  PRINT
    0x55e152c07d90 ---------A   01580  N=N+1.00
    0x55e152c07fe0 ---------A   01590  IF X=2 THEN 1620
    0x55e152c08120 ---------A T 01600  NEXT X
    0x55e152c081b0 ---------A   01610  GO TO 1400
    0x55e152c08400 ---------A T 01620  IF J=2 THEN 2010
    0x55e152c08660 ---------A   01630  IF J=13 THEN 2050
    0x55e152c088c0 ---------A   01640  IF J=4 THEN 2200
    0x55e152c08d50 ---------A   01650  GO TO 1400
    0x55e152c08e00 ---------A T 01660  PRINT
    0x55e152c09180 ---------A   01670  PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    0x55e152c09200 ---------A   01680  GO TO 2420
    0x55e152c09450 ---------A T 01690  IF V<0 THEN 1780
    0x55e152c096b0 ---------A   01700  IF V<20 THEN 1820
    0x55e152c09910 ---------A   01710  IFV<40 THEN 2430
    0x55e152c099c0 ---------A   01720  PRINT
    0x55e152c09f30 ---------A   01730  PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    0x55e152c09fb0 ---------A   01740  GO TO 2420
    0x55e152c0a430 ---------A T 01750  PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    0x55e152c0a5a0 ---------A   01760  PRINT"  THE LUNAR SURFACE !!!!"
    0x55e152c0a620 ---------A   01770  GO TO 1850
    0x55e152c0a6d0 ---------A T 01780  PRINT
    0x55e152c0a870 ---------A   01790  PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    0x55e152c0a9d0 ---------A   01800  PRINT"  PER SECOND!!"
    0x55e152c0aa50 ---------A   01810  GO TO 1850
    0x55e152c0aaf0 ---------A T 01820  PRINT
    0x55e152c0ac90 ---------A   01830  PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    0x55e152c0b010 ---------A   01840  PRINT"  AT ";V;" FEET PER SECOND!!"
    0x55e152c0b180 ---------A T 01850  PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    0x55e152c0b200 ---------A   01860  PRINT
    0x55e152c0b2b0 ---------A   01870  PRINT
    0x55e152c0b460 ---------A   01880  PRINT"**************************************************"
    0x55e152c0b610 ---------A   01890  PRINT"*                                                *"
    0x55e152c0b990 ---------A   01900  PRINT"*       ";T$;"                                    * "
    0x55e152c0bc20 ---------A   01910  IF K=999 THEN 1940
    0x55e152c0bda0 ---------A   01920  PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    0x55e152c0be50 ---------A   01930  GO TO 1950
    0x55e152c0bff0 ---------A T 01940  PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    0x55e152c0c1a0 ---------A T 01950  PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    0x55e152c0c350 ---------A   01960  PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    0x55e152c0c500 ---------A   01970  PRINT"*                                                *"
    0x55e152c0c6b0 ---------A   01980  PRINT"*                              DATALINE          *"
    0x55e152c0c830 ---------A   01990  PRINT"**************************************************"
    0x55e152c0c8e0 ---------A   02000  GO TO 2420
    0x55e152c0cc80 ---------A T 02010  PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    0x55e152c0ce20 ---------A   02020  PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    0x55e152c0cfa0 ---------A   02030  PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    0x55e152c0d020 ---------A   02040  GO TO 2420
    0x55e152c0d0c0 ---------A T 02050  PRINT
    0x55e152c0d270 ---------A   02060  PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    0x55e152c0d400 ---------A   02070  PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    0x55e152c0d590 ---------A   02080  PRINT"  (TYPE IN 1, 2, OR 3 )...";
    0x55e152c0d7b0 ---------A   02090  INPUT R
    0x55e152c0db70 ---------A   02100  LET W=RND(-1)
    0x55e152c0e080 ---------A   02110  LET W=INT(W*3)+1
    0x55e152c0e330 ---------A   02120  IF W=R THEN 2170
    0x55e152c0e8d0 ---------A   02130  PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    0x55e152c0ea60 ---------A   02140  PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    0x55e152c0ebc0 ---------A   02150  PRINT" START OVER AGAIN...."
    0x55e152c0ec70 ---------A   02160  GO TO 2460
    0x55e152c0ee20 ---------A T 02170  PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    0x55e152c0efb0 ---------A   02180  PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    0x55e152c0f030 ---------A   02190  GO TO 1600
    0x55e152c0f140 ---------A T 02200  PRINT
    0x55e152c0f300 ---------A   02210  PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    0x55e152c0f4c0 ---------A   02220  PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    0x55e152c0f670 ---------A   02230  PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    0x55e152c0f7e0 ---------A   02240  PRINT"     HOW MANY WILL YOU SHOOT ?"
    0x55e152c0fa00 ---------A   02250  INPUT Z
    0x55e152c10470 ---------A   02260  IF Z=9 THEN 2300
    0x55e152c106d0 ---------A   02270  IF Z=8 THEN 2300
    0x55e152c10930 ---------A   02280  IF Z<8 THEN 2320
    0x55e152c10bb0 ---------A   02290  IF Z>8 THEN 2370
    0x55e152c10d30 ---------A T 02300  PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    0x55e152c10db0 ---------A   02310  GO TO 1600
    0x55e152c10e40 ---------A T 02320  PRINT
    0x55e152c111e0 ---------A   02330  PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    0x55e152c11370 ---------A   02340  PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    0x55e152c114e0 ---------A   02350  PRINT"   START OVER AGAIN..."
    0x55e152c11560 ---------A   02360  GO TO 2420
    0x55e152c11600 ---------A T 02370  PRINT
    0x55e152c119a0 ---------A   02380  PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    0x55e152c11b50 ---------A   02390  PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    0x55e152c11d00 ---------A   02400  PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    0x55e152c11e80 ---------A   02410  PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    0x55e152c11ee0 ---------A T 02420  STOP
    0x55e152c122d0 ---------A T 02430  PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    0x55e152c12490 ---------A   02440  PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    0x55e152c12620 ---------A   02450  PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    0x55e152c12680 ---------A T 02460  END
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
    // 01260 
    // 01270 PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"              TIME            HEIGHT            VELOCITY        FUEL");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT"              ----            ------            --------        ----"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"              ----            ------            --------        ----");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT"MOON" TAB(45);"*"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MOON");b2c_TAB(buf,45);strcat(buf,"*");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 H=40000
    H_int = 40000;
    // 01320 V=8000
    V_int = 8000;
    // 01330 V1=8000
    V1_int = 8000;
    // 01340 J=RND(-1)
    J_int = RND(-1);
    // 01350 LET J=INT(J*15)
    J_int = INT(J_int*15);
    // 01360 F=9000
    F_int = 9000;
    // 01370 N=0.00
    N_int = 0.;
    // 01380 B=40
    B_int = 40;
    // 01390 GO TO 1500
    goto Lbl_01500;

  Lbl_01400:
    // 01400 B=0
    B_int = 0;
    // 01410 FOR X=1 TO 100
    for(X_int=1;X_int<=100;X_int++){
        // 01420 V=V-(K^3*1.5+K*15)+10-H/10000
        V_int = V_int-(IPower(K_int,3)*1.5+K_int*15)+10-H_int/10000;
        // 01430 F=F-ABS(K*93)
        F_int = F_int-ABS(K_int*93);
        // 01440 IF F<0 THEN 1660
        if(F_int<0)goto Lbl_01660;
        // 01450 H=H-(V+V1)/2
        H_int = H_int-(V_int+V1_int)/2;
        // 01460 B=H/1000+4
        B_int = H_int/1000+4;
        // 01470 IF H<0 THEN 1690
        if(H_int<0)goto Lbl_01690;
        // 01480 V1=V
        V1_int = V_int;
        // 01490 PRINT"MOON"; TAB(B);"*"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MOON");b2c_TAB(buf,B_int;strcat(buf,"*");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01500:
        // 01500 PRINT USING 1260,N,H,V,F
        b2c_printf(UsingFmt_01260,IT(N_int),IT(H_int),IT(V_int),IT(F_int),"\n");
        // 01510 PRINT"      FIRE";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      FIRE");fputs(buf,fh); };
        // 01520 GO TO 1540
        goto Lbl_01540;

  Lbl_01530:
        // 01530 PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01540:
        // 01540 INPUT K
        // Start of Basic INPUT statement 01540
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&K_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01540
        // 01550 IF K=999 THEN 1750
        if(K_int==999)goto Lbl_01750;
        // 01560 IF ABS(K)>10 THEN 1530
        if(ABS(K_int)>10)goto Lbl_01530;
        // 01570 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01580 N=N+1.00
        N_int = N_int+1.;
        // 01590 IF X=2 THEN 1620
        if(X_int==2)goto Lbl_01620;

  Lbl_01600:
        // 01600 NEXT X
        int dummy_1600=0; // Ignore this line.
    }; // End-For(X_int)
    // 01610 GO TO 1400
    goto Lbl_01400;

  Lbl_01620:
    // 01620 IF J=2 THEN 2010
    if(J_int==2)goto Lbl_02010;
    // 01630 IF J=13 THEN 2050
    if(J_int==13)goto Lbl_02050;
    // 01640 IF J=4 THEN 2200
    if(J_int==4)goto Lbl_02200;
    // 01650 GO TO 1400
    goto Lbl_01400;

  Lbl_01660:
    // 01660 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01670 PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  YOU HAVE JUST RUN OUT OF FUEL "); b2c_INT(buf,H_int);strcat(buf,"FEET ABOVE THE SURFACE!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01680 GO TO 2420
    goto Lbl_02420;

  Lbl_01690:
    // 01690 IF V<0 THEN 1780
    if(V_int<0)goto Lbl_01780;
    // 01700 IF V<20 THEN 1820
    if(V_int<20)goto Lbl_01820;
    // 01710 IFV<40 THEN 2430
    if(V_int<40)goto Lbl_02430;
    // 01720 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01730 PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," YOU HAVE JUST CRASHED!! AT "); b2c_INT(buf,V_int);strcat(buf,"FPS., GOOD-BYE, "); strcat(buf,T_str);strcat(buf,"!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01740 GO TO 2420
    goto Lbl_02420;

  Lbl_01750:
    // 01750 PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH");strcat(buf,"\n");fputs(buf,fh); };
    // 01760 PRINT"  THE LUNAR SURFACE !!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  THE LUNAR SURFACE !!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01770 GO TO 1850
    goto Lbl_01850;

  Lbl_01780:
    // 01780 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01790 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET");strcat(buf,"\n");fputs(buf,fh); };
    // 01800 PRINT"  PER SECOND!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  PER SECOND!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01810 GO TO 1850
    goto Lbl_01850;

  Lbl_01820:
    // 01820 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01830 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY");strcat(buf,"\n");fputs(buf,fh); };
    // 01840 PRINT"  AT ";V;" FEET PER SECOND!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  AT "); b2c_INT(buf,V_int);strcat(buf," FEET PER SECOND!!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01850:
    // 01850 PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  HERE IS YOUR PILOT\S LICENSE...");strcat(buf,"\n");fputs(buf,fh); };
    // 01860 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01870 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01880 PRINT"**************************************************"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"**************************************************");strcat(buf,"\n");fputs(buf,fh); };
    // 01890 PRINT"*                                                *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*                                                *");strcat(buf,"\n");fputs(buf,fh); };
    // 01900 PRINT"*       ";T$;"                                    * "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*       "); strcat(buf,T_str);strcat(buf,"                                    * ");strcat(buf,"\n");fputs(buf,fh); };
    // 01910 IF K=999 THEN 1940
    if(K_int==999)goto Lbl_01940;
    // 01920 PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*                  HAS SUCCESSFULLY LANDED       *");strcat(buf,"\n");fputs(buf,fh); };
    // 01930 GO TO 1950
    goto Lbl_01950;

  Lbl_01940:
    // 01940 PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01950:
    // 01950 PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*     A SIMULATED MODULE ON THE MOON, AND IS     *");strcat(buf,"\n");fputs(buf,fh); };
    // 01960 PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*     A CERTIFIED MOON BUGGY DRIVER.             *");strcat(buf,"\n");fputs(buf,fh); };
    // 01970 PRINT"*                                                *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*                                                *");strcat(buf,"\n");fputs(buf,fh); };
    // 01980 PRINT"*                              DATALINE          *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*                              DATALINE          *");strcat(buf,"\n");fputs(buf,fh); };
    // 01990 PRINT"**************************************************"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"**************************************************");strcat(buf,"\n");fputs(buf,fh); };
    // 02000 GO TO 2420
    goto Lbl_02420;

  Lbl_02010:
    // 02010 PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," SORRY,"); strcat(buf,T_str);strcat(buf,", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST");strcat(buf,"\n");fputs(buf,fh); };
    // 02020 PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR");strcat(buf,"\n");fputs(buf,fh); };
    // 02030 PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   LUNAR VEHICLE !!  START OVER AGAIN...");strcat(buf,"\n");fputs(buf,fh); };
    // 02040 GO TO 2420
    goto Lbl_02420;

  Lbl_02050:
    // 02050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02060 PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02070 PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02080 PRINT"  (TYPE IN 1, 2, OR 3 )...";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  (TYPE IN 1, 2, OR 3 )...");fputs(buf,fh); };
    // 02090 INPUT R
    // Start of Basic INPUT statement 02090
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02090
    // 02100 LET W=RND(-1)
    W_int = RND(-1);
    // 02110 LET W=INT(W*3)+1
    W_int = INT(W_int*3)+1;
    // 02120 IF W=R THEN 2170
    if(W_int==R_int)goto Lbl_02170;
    // 02130 PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," SORRY "); strcat(buf,T_str);strcat(buf,", BUT THE CORRECT FUEL TANK WAS NUMBER "); b2c_INT(buf,W_int);strcat(buf," , AND");strcat(buf,"\n");fputs(buf,fh); };
    // 02140 PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02150 PRINT" START OVER AGAIN...."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," START OVER AGAIN....");strcat(buf,"\n");fputs(buf,fh); };
    // 02160 GO TO 2460
    goto Lbl_02460;

  Lbl_02170:
    // 02170 PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED");strcat(buf,"\n");fputs(buf,fh); };
    // 02180 PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY...");strcat(buf,"\n");fputs(buf,fh); };
    // 02190 GO TO 1600
    goto Lbl_01600;

  Lbl_02200:
    // 02200 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02210 PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO");strcat(buf,"\n");fputs(buf,fh); };
    // 02220 PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND");strcat(buf,"\n");fputs(buf,fh); };
    // 02230 PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,");strcat(buf,"\n");fputs(buf,fh); };
    // 02240 PRINT"     HOW MANY WILL YOU SHOOT ?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     HOW MANY WILL YOU SHOOT ?");strcat(buf,"\n");fputs(buf,fh); };
    // 02250 INPUT Z
    // Start of Basic INPUT statement 02250
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02250
    // 02260 IF Z=9 THEN 2300
    if(Z_int==9)goto Lbl_02300;
    // 02270 IF Z=8 THEN 2300
    if(Z_int==8)goto Lbl_02300;
    // 02280 IF Z<8 THEN 2320
    if(Z_int<8)goto Lbl_02320;
    // 02290 IF Z>8 THEN 2370
    if(Z_int>8)goto Lbl_02370;

  Lbl_02300:
    // 02300 PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  YOU MADE IT!!!   NOW YOU MAY CONTINUE...");strcat(buf,"\n");fputs(buf,fh); };
    // 02310 GO TO 1600
    goto Lbl_01600;

  Lbl_02320:
    // 02320 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02330 PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," SORRY, "); strcat(buf,T_str);strcat(buf,", BUT THAT WASN\T ENOUGH!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02340 PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02350 PRINT"   START OVER AGAIN..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   START OVER AGAIN...");strcat(buf,"\n");fputs(buf,fh); };
    // 02360 GO TO 2420
    goto Lbl_02420;

  Lbl_02370:
    // 02370 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02380 PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  SORRY,"); strcat(buf,T_str);strcat(buf,", BUT YOU USED TOO MANY ROCKETS,");strcat(buf,"\n");fputs(buf,fh); };
    // 02390 PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,");strcat(buf,"\n");fputs(buf,fh); };
    // 02400 PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 02410 PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    COMPLETELY OFF COURSE!! START OVER AGAIN...");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02420:
    // 02420 STOP
    exit(1);

  Lbl_02430:
    // 02430 PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," YOU HAVE LANDED, BUT AT A VELOCITY OF "); b2c_INT(buf,V_int);strcat(buf," FEET PER SECOND,");strcat(buf,"\n");fputs(buf,fh); };
    // 02440 PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO");strcat(buf,"\n");fputs(buf,fh); };
    // 02450 PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02460:
    // 02460 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
