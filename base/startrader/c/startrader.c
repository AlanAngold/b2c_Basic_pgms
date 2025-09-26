/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/startrader/basic/startrader.bas: 
 *
                   +---+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |   | |
        Address    v   v v Original BASIC statement
    -------------- ----- - ------------------------------------------------------------------------------
    0x55e5523424d0 ---------A   00010 COM S[12,15],T[12,12],T$[72],B[3,12]
    0x55e552347150 ---------A   00020 COM W,D9,K9,X9,D1,X1,P9,T9,S9,Y9,H
    0x55e552347970 ---------A   00030 COM Y1,R9,G9,Q,M[6,3],C[6,3]
    0x55e552347c90 ---------A   00035 COM S1,T1,R
    0x55e552347d00 ---------A   00040 REM *** STAR TRADERS ***
    0x55e552347dc0 ---------A   00050 REM <<<GAME SET-UP MODULE>>>
    0x55e552347e60 ---------A   00060 REM S IS THE STAR SYSTEM INFO ARRAY
    0x55e552347f00 ---------A   00070 REM T IS THE TRADING SHIP INFO ARRAY
    0x55e552347fb0 ---------A   00080 REM T$ IS THE TRADING SHIP NAME STRING
    0x55e552348100 ---------A   00090 REM M AND C DETERMINE A STAR'S PRODUCTIVITY/MONTH
    0x55e5523481c0 ---------A   00092 REM   PROD/MO. = S(7,J) * M(I,R1)  +  C(I,R1)
    0x55e552348280 ---------A   00094 REM   WHERE J IS THE STAR ID #,I THE MERCHANDISE #,
    0x55e552348340 ---------A   00096 REM   AND R1 IS THE DEVELOPMENT CLASS OF THE STAR
    0x55e5523483e0 ---------A   00100 REM B CONTAINS THE BANK ACCOUNTS
    0x55e552348480 ---------A   00110 REM A$ IS THE STANDARD INPUT BUFFER
    0x55e552348660 ---------A   00120 DIM A$[6]
    0x55e5523486e0 ---------A   00130 REM R9 IS THE SPEED OF A SHIP IN LIGHT-YEARS PER DAY
    0x55e5523488c0 ---------A   00140 REM D9 IS THE MINIMUM  DISTANCE ALLOWED BETWEEN STARS
    0x55e552348960 ---------A   00150 REM Q IS THE PROBABILITY OF A DELAY
    0x55e552348a20 ---------A   00160 REM K9 IS THE MAX NUMBER OF BIDDING ROUNDS
    0x55e552348ae0 ---------A   00170 REM W IS THE MAX WEIGHT OF A TRADING SHIP
    0x55e552348bb0 ---------A   00180 REM X9 CONTROLS THE PROFIT MARGIN; HIGH X9 LIMITS THE %
    0x55e552348c80 ---------A   00190 REM G9 IS THE STELLAR DEVELOPMENT INCREMENT 1<=G9<=5
    0x55e552348d20 ---------A   00195 REM R=1 IF THIS IS A RESTART
    0x55e552349000 ---------A   00200 LET R9=2/7
    0x55e5523491f0 ---------A   00210 LET D9=15
    0x55e5523493e0 ---------A   00220 LET Q=.1
    0x55e5523495d0 ---------A   00230 LET K9=3
    0x55e5523497c0 ---------A   00240 LET W=30
    0x55e5523499b0 ---------A   00250 LET X9=36
    0x55e552349ba0 ---------A   00260 LET G9=1.25
    0x55e552349db0 ---------A   00265 LET R=0
    0x55e552349e40 ---------A   00270 REM D1 IS THE DAY OF THIS YEAR (1<=D1<=360)
    0x55e55234a0d0 ---------A   00280 REM Y1 IS THIS YEAR
    0x55e55234a2d0 ---------A   00290 LET D1=1
    0x55e55234a4d0 ---------A   00300 LET Y1=2070
    0x55e55234a550 ---------A   00302 REM SET UP ECONOMETRICS MODEL
    0x55e55234a5b0 ---------A   00304 RESTORE 2410
    0x55e55234a7f0 ---------A   00306 MAT READ M,C
    0x55e55234a930 ---------A   00310 REM *** BLOCK #1
    0x55e55234aac0 ---------A   00320 PRINT "INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)";
    0x55e55234ac20 ---------A   00330 INPUT A$
    0x55e55234af40 ---------A   00340 IF A$[1,1]="N" THEN 590
    0x55e55234aff0 ---------A   00350 PRINT 
    0x55e55234b170 ---------A   00360 PRINT "     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT"
    0x55e55234b2f0 ---------A   00370 PRINT "HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR"
    0x55e55234b470 ---------A   00380 PRINT "SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY"
    0x55e55234b5d0 ---------A   00390 PRINT "FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED."
    0x55e55234b670 ---------A   00400 PRINT 
    0x55e55234b7f0 ---------A   00410 PRINT "     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR"
    0x55e55234b970 ---------A   00420 PRINT "TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO"
    0x55e55234baf0 ---------A   00430 PRINT "STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU"
    0x55e55234bc40 ---------A   00440 PRINT "DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS."
    0x55e55234bce0 ---------A   00450 PRINT 
    0x55e55234be60 ---------A   00460 PRINT "     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY"
    0x55e55234bfe0 ---------A   00470 PRINT "GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT"
    0x55e55234c160 ---------A   00480 PRINT "HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY"
    0x55e55234c2b0 ---------A   00490 PRINT "MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS."
    0x55e55234c350 ---------A   00500 PRINT 
    0x55e55234c4d0 ---------A   00510 PRINT "     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A"
    0x55e55234c7a0 ---------A   00520 PRINT "WEEK AND CAN CARRY UP TO";W;" TONS OF CARGO.  ONLY"
    0x55e55234c920 ---------A   00530 PRINT "CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM."
    0x55e55234caa0 ---------A   00540 PRINT "THEY PAY 5% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE"
    0x55e55234cc00 ---------A   00550 PRINT "PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL"
    0x55e55234cd30 ---------A   00560 PRINT "BANK."
    0x55e55234d1b0 ---------A   00570 PRINT 
    0x55e55234d220 ---------A   00580 REM *** BLOCK #2
    0x55e55234d3b0 ---------A T 00590 PRINT "HAVE ALL PLAYERS PLAYED BEFORE";
    0x55e55234d480 ---------A   00600 INPUT A$
    0x55e55234d510 ---------A   00605 PRINT 
    0x55e55234d820 ---------A   00610 IF A$[1,1]="Y" THEN 630
    0x55e55234d8c0 ---------A   00620 GOTO 660
    0x55e55234da10 ---------A T 00630 PRINT "DO YOU WANT TO SET UP YOUR OWN GAME";
    0x55e55234dae0 ---------A   00640 INPUT A$
    0x55e55234db70 ---------A   00645 PRINT 
    0x55e55234de90 ---------A   00650 IF A$[1,1]="Y" THEN 760
    0x55e55234dff0 ---------A T 00660 PRINT "HOW MANY PLAYERS";
    0x55e55234e140 ---------A   00670 INPUT P9
    0x55e55234e1d0 ---------A   00675 PRINT 
    0x55e55234e570 ---------A   00680 GOTO P9-1 OF 710,710,710
    0x55e55234e6a0 ---------A   00690 PRINT "2,3, OR 4 CAN PLAY"
    0x55e55234e710 ---------A   00700 GOTO 660
    0x55e55234e990 ---------A T 00710 T9=2*P9
    0x55e55234ed00 ---------A   00720 S9=3*P9+1
    0x55e55234ef90 ---------A   00730 Y9=Y1+5
    0x55e55234f000 ---------A   00740 GOTO 1350
    0x55e55234f060 ---------A   00750 REM *** BLOCK #3
    0x55e55234f1d0 ---------A T 00760 PRINT "IS THIS A RESTART";
    0x55e55234f2a0 ---------A   00770 INPUT A$
    0x55e55234f330 ---------A   00775 PRINT 
    0x55e55234f670 ---------A   00780 IF A$[1,1]="N" THEN 940
    0x55e55234f810 ---------A   00790 PRINT "LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'"
    0x55e55234f970 ---------A   00800 PRINT "YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY"
    0x55e55234f9e0 ---------A   00810 PRINT 
    0x55e55234fb40 ---------A   00820 INPUT T$
    0x55e55234fe10 ---------A   00830 INPUT W,D9,K9,X9,D1,Y1
    0x55e5523501d0 ---------A   00835 INPUT P9,T9,S9,Y9,T1,S1
    0x55e552350430 ---------A   00840 FOR J=1 TO S9
    0x55e552350790 ---------A   00845 FOR I=1 TO 9 STEP 4
    0x55e552350f30 ---------A   00850 INPUT S[I,J],S[I+1,J],S[I+2,J],S[I+3,J]
    0x55e552350ff0 ---------A   00855 NEXT I
    0x55e5523510b0 ---------A   00860 NEXT J
    0x55e552351290 ---------A   00870 FOR J=1 TO T9
    0x55e552351570 ---------A   00875 FOR I=1 TO 9 STEP 4
    0x55e552351d10 ---------A   00880 INPUT T[I,J],T[I+1,J],T[I+2,J],T[I+3,J]
    0x55e552351dd0 ---------A   00885 NEXT I
    0x55e552351e90 ---------A   00890 NEXT J
    0x55e552352080 ---------A   00900 FOR I=1 TO P9
    0x55e552352520 ---------A   00910 INPUT B[1,I],B[2,I],B[3,I]
    0x55e5523525e0 ---------A   00920 NEXT I
    0x55e552352760 ---------A   00925 R=1
    0x55e552352800 ---------A   00930 CHAIN "$TRADES"
    0x55e552352960 ---------A T 00940 PRINT "HOW MANY PLAYERS";
    0x55e552352a30 ---------A   00950 INPUT P9
    0x55e552352ac0 ---------A   00955 PRINT 
    0x55e552352e00 ---------A   00960 IF P9 >= 2 AND P9 <= 12 THEN 990
    0x55e552352f50 ---------A   00970 PRINT "2,3,4, ... ,12 CAN PLAY"
    0x55e552352fd0 ---------A   00980 GOTO 940
    0x55e552353120 ---------A T 00990 PRINT "HOW MANY SHIPS PER PLAYER";
    0x55e552353270 ---------A   01000 INPUT X
    0x55e5523532f0 ---------A   01005 PRINT 
    0x55e5523534a0 ---------A   01010 IF X<1 THEN 990
    0x55e552353690 ---------A   01020 T9=P9*X
    0x55e552353860 ---------A   01030 IF T9 <= 12 THEN 1070
    0x55e5523539e0 ---------A   01040 PRINT "I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;"
    0x55e552353d70 ---------A   01050 PRINT P9;" PLAYERS TIMES";X;" SHIPS MAKES";T9
    0x55e552353df0 ---------A   01060 GOTO 990
    0x55e552353f30 ---------A T 01070 PRINT "HOW MANY STAR SYSTEMS";
    0x55e552354000 ---------A   01080 INPUT S9
    0x55e5523548a0 ---------A   01085 PRINT 
    0x55e552354be0 ---------A   01090 IF S9 >= 4 AND S9 <= 13 THEN 1120
    0x55e552354d20 ---------A   01100 PRINT "FROM 4 TO 13 STARS"
    0x55e552354db0 ---------A   01110 GOTO 1070
    0x55e552354f00 ---------A T 01120 PRINT "ENTER THE LENGTH OF GAME IN YEARS";
    0x55e552354fd0 ---------A T 01130 INPUT X
    0x55e552355060 ---------A   01135 PRINT 
    0x55e552355440 ---------A   01140 IF X >= 1 AND INT(X)=X THEN 1170
    0x55e552355590 ---------A   01150 PRINT "CHOOSE A POSITIVE INTEGER"
    0x55e552355600 ---------A   01160 GOTO 1130
    0x55e5523557e0 ---------A T 01170 Y9=Y1+X
    0x55e552355950 ---------A T 01180 PRINT "WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)";
    0x55e552355a20 ---------A   01190 INPUT W
    0x55e552355aa0 ---------A   01195 PRINT 
    0x55e552355c80 ---------A   01200 IF W<25 THEN 1180
    0x55e552355e00 ---------A T 01210 PRINT "WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)";
    0x55e552355ed0 ---------A   01220 INPUT D9
    0x55e552355f60 ---------A   01225 PRINT 
    0x55e5523562a0 ---------A   01230 IF D9 <= 25 AND D9 >= 10 THEN 1260
    0x55e5523563f0 ---------A   01240 PRINT "MIN SPACING 10, MAX 25"
    0x55e552356480 ---------A   01250 GOTO 1210
    0x55e5523565d0 ---------A T 01260 PRINT "HOW MANY BIDS OR OFFERS(USUALLY 3)";
    0x55e5523566a0 ---------A   01270 INPUT K9
    0x55e552356720 ---------A   01275 PRINT 
    0x55e552356900 ---------A   01280 IF K9<1 THEN 1260
    0x55e552356a90 ---------A   01290 PRINT "SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER"
    0x55e552356c00 ---------A   01300 PRINT "THE NUMBER, THE LOWER THE PROFIT % ... USUALLY SET TO 2"
    0x55e552356d50 ---------A   01310 PRINT "...YOUR NUMBER";
    0x55e552356e30 ---------A   01320 INPUT X9
    0x55e5523572d0 ---------A   01330 X9=18*(ABS(X9) MIN 5)
    0x55e552357340 ---------A   01340 REM *** BLOCK #4.1
    0x55e5523577a0 ---------A T 01350 S[11,1]=S[12,1]=0
    0x55e552357a50 ---------A   01360 S[7,1]=15
    0x55e552357ac0 ---------A   01370 REM *** BLOCK #4.2
    0x55e552357cc0 ---------A   01380 H=1
    0x55e552357e30 ---------A   01390 S1=2
    0x55e552357ea0 ---------A   01400 GOSUB 1920
    0x55e552358000 ---------A   01410 S1=3
    0x55e552358070 ---------A   01420 GOSUB 1920
    0x55e5523581d0 ---------A   01430 S1=4
    0x55e552358240 ---------A   01440 GOSUB 2010
    0x55e552358420 ---------A   01450 FOR S1=5 TO S9
    0x55e552358ac0 ----------   01460 GOSUB S1-3*INT((S1-1)/3) OF 1920,2010,2060
    0x55e552358b70 ----------   01470 NEXT S1
    0x55e552358bf0 ---------A   01480 REM *** BLOCK #4.3
    0x55e552358dd0 ----------   01490 FOR S1=1 TO S9
    0x55e552358ff0 ----------   01500 FOR J=1 TO 6
    0x55e552359230 ----------   01510 S[J,S1]=0
    0x55e5523592e0 ----------   01520 NEXT J
    0x55e5523594a0 ----------   01530 IF S1>1 THEN 1560
    0x55e552359620 ----------   01540 I=1
    0x55e5523596a0 ----------   01550 GOTO 1600
    0x55e552359be0 ---------- T 01560 I=4*INT(14*RND(0))+5
    0x55e552359ea0 ----------   01570 FOR J=2 TO S1-1
    0x55e55235a120 ----------   01580 IF I=S[8,J] THEN 1560
    0x55e55235a1e0 ----------   01590 NEXT J
    0x55e55235a420 ---------- T 01600 S[8,S1]=I
    0x55e55235a690 ----------   01610 S[9,S1]=270
    0x55e55235a9a0 ----------   01620 S[10,S1]=Y1-1
    0x55e55235aa50 ----------   01630 NEXT S1
    0x55e55235aad0 ---------A   01640 REM *** BLOCK #4.4
    0x55e55235ad30 ----------   01650 T1=L=1
    0x55e55235ada0 ----------   01655 PRINT 
    0x55e55235ae40 ----------   01657 PRINT 
    0x55e55235afa0 ----------   01660 PRINT "CAPTAINS, NAME YOUR SHIPS (UP TO 6 LETTERS/BLANKS/NUMBERS)"
    0x55e55235b210 ----------   01670 FOR I=1 TO T9/P9
    0x55e55235b290 ----------   01680 PRINT 
    0x55e55235b4f0 ----------   01690 FOR P1=1 TO P9
    0x55e55235ba30 ----------   01700 T[1,T1]=T[2,T1]=T[6,T1]=0
    0x55e55235bca0 ----------   01710 T[3,T1]=15
    0x55e55235c070 ----------   01720 T[4,T1]=T[5,T1]=10
    0x55e55235c2e0 ----------   01730 T[7,T1]=25
    0x55e55235c510 ----------   01740 T[9,T1]=D1
    0x55e55235c740 ----------   01750 T[10,T1]=Y1
    0x55e55235c9e0 ----------   01760 T[11,T1]=5000
    0x55e55235cd20 ----------   01770 PRINT "   CAPTAIN";P1;"WHAT DO YOU CHRISTEN YOUR SHIP #";I;
    0x55e55235cf90 ----------   01780 INPUT T$[L,L+5]
    0x55e55235d1b0 ----------   01790 T1=T1+1
    0x55e55235d3c0 ----------   01800 L=L+6
    0x55e55235d470 ----------   01810 NEXT P1
    0x55e55235d530 ----------   01820 NEXT I
    0x55e55235d5b0 ---------A   01830 REM *** BLOCK #4.5
    0x55e55235d810 ----------   01840 FOR B1=1 TO P9
    0x55e55235da90 ----------   01850 B[1,B1]=0
    0x55e55235dcc0 ----------   01860 B[2,B1]=D1
    0x55e55235def0 ----------   01870 B[3,B1]=Y1
    0x55e55235dfa0 ----------   01880 NEXT B1
    0x55e55235e050 ----------   01890 CHAIN "$TRADES"
    0x55e55235e0e0 ---------B   01900 REM *** GOSUBS FOLLOW ***
    0x55e55235e170 ---------B   01910 REM <FRONTIER> GOSUB
    0x55e55235e550 ---------B B 01920 X=(RND(0)-.5)*100
    0x55e55235e8a0 ---------B   01930 Y=50*RND(0)
    0x55e55235ec30 ---------B   01940 IF (ABS(X)<25) AND (Y<25) THEN 1920
    0x55e55235ee30 ---------B   01950 F=1
    0x55e55235eea0 ---------B   01960 GOSUB 2190
    0x55e55235f040 ---------B   01970 IF F=0 THEN 1920
    0x55e55235f2c0 ---------B   01980 S[7,S1]=0
    0x55e55235f310 ---------B   01990 RETURN
    0x55e55235f3b0 ---------C   02000 REM *** <UNDERDEVELOPED> GOSUB
    0x55e55235f5b0 ---------C B 02010 E=100
    0x55e55235f620 ---------C   02020 GOSUB 2110
    0x55e55235f880 ---------C   02030 S[7,S1]=5
    0x55e55235f8d0 ---------C   02040 RETURN
    0x55e55235f970 ---------A   02050 REM *** <DEVELOPED> GOSUB
    0x55e55235faf0 ---------- T 02060 E=50
    0x55e55235fb60 ----------   02070 GOSUB 2110
    0x55e55235fdc0 ----------   02080 S[7,S1]=10
    0x55e55235fe10 ----------   02090 RETURN
    0x55e55235feb0 ---------D   02100 REM *** <GENERATE CO-ORDS> GOSUB
    0x55e552360250 ---------D B 02110 X=(RND(0)-.5)*E
    0x55e5523605a0 ---------D   02120 Y=RND(0)*E/2
    0x55e552360710 ---------D   02130 F=1
    0x55e552360780 ---------D   02140 GOSUB 2190
    0x55e552360920 ---------D   02150 IF F=0 THEN 2110
    0x55e552360980 ---------D   02160 RETURN
    0x55e552360a20 ---------E   02170 REM *** <TEST STAR CO-ORDS> GOSUB
    0x55e552360ae0 ---------E   02180 REM FIRST CONVERT CO-ORDS TO NEXT HALF-BOARD
    0x55e552360e50 ---------E G 02190 GOTO H OF 2300,2260,2240,2200
    0x55e552361000 ---------E T 02200 Z=X
    0x55e552361130 ---------E   02210 X=-Y
    0x55e552361260 ---------E   02220 Y=Z
    0x55e5523612d0 ---------E   02230 GOTO 2300
    0x55e5523613f0 ---------E T 02240 Y=-Y
    0x55e552361460 ---------E   02250 GOTO 2300
    0x55e552361580 ---------E T 02260 Z=X
    0x55e5523616b0 ---------E   02270 X=Y
    0x55e5523617f0 ---------E   02280 Y=Z
    0x55e552361870 ---------E   02290 REM SECOND, TEST PROXIMITY
    0x55e5523542f0 ---------E T 02300 FOR J=1 TO S1-1
    0x55e552362be0 ---------E   02310 IF SQR((X-S[11,J])^2+(Y-S[12,J])^2) >= D9 THEN 2340
    0x55e552362d60 ---------E   02320 F=0
    0x55e552362db0 ---------E   02330 RETURN
    0x55e552362e70 ---------E T 02340 NEXT J
    0x55e552362f40 ---------E   02350 REM FINALLY, ENTER CO-ORDS AND INCREMENT HALF-BOARD CTR
    0x55e5523631e0 ---------E   02360 S[11,S1]=INT(X)
    0x55e552363470 ---------E   02370 S[12,S1]=INT(Y)
    0x55e552363760 ---------E   02380 H=MOD(1+H)
    0x55e5523637b0 ---------E   02390 RETURN
    0x55e552363870 ---------A   02400 REM *** DATA FOR ECONOMETRIC MODEL FOLLOWS ***
    0x55e5523638f0 ---------A   02410 REM MODEL #1
    0x55e552364760 ---------A   02420 DATA -0.025,-0.05,-0.025,0,-0.025,-0.025,0,.1,.1,-0.025,.1,0,.1,.2,.1,.1,-0.025,0
    0x55e552365250 ---------A   02430 DATA 1,1.5,.5,.75,.75,.75,-0.25,-0.25,-0.25,0,-0.5,.5,0,-0.5
    0x55e5523655c0 ---------A   02440 DATA 0,.5,1.5,0
    0x55e552365610 ---------A   02450 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00590      00340T
     00630      00610T
     00660      00620T, 00700T
     00710      00680T, 00680T, 00680T
     00760      00650T
     00940      00780T, 00980T
     00990      00960T, 01010T, 01060T
     01070      01030T, 01110T
     01120      01090T
     01130      01160T
     01170      01140T
     01180      01200T
     01210      01250T
     01260      01230T, 01280T
     01350      00740T
     01560      01530T, 01580T
     01600      01550T
     01920      01400G, 01420G, 01460T, 01940T, 01970T
     02010      01440G, 01460T
     02060      01460T
     02110      02020G, 02070G, 02150T
     02190      01960G, 02140G
     02200      02190T
     02240      02190T
     02260      02190T
     02300      02190T, 02230T, 02250T
     02340      02310T
     02410      00304G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x55e5523424d0   0x55e5523424d0   0x55e552365610   0x55e552365610 
   B) 0x55e55235e0e0   0x55e55235e550   0x55e55235f310   0x55e55235f310 
   C) 0x55e55235f3b0   0x55e55235f5b0   0x55e55235f8d0   0x55e55235f8d0 
   D) 0x55e55235feb0   0x55e552360250   0x55e552360980   0x55e552360980 
   E) 0x55e552360a20   0x55e552360e50   0x55e552362db0   0x55e5523637b0 

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
     03770 - 10000    6240 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/startrader/basic/startrader.bas'
 *
    A$    Array    String      {0,7} 
    A$             String  
    ABS   Function Integer     args=1, int   
    B     Array    Integer     {0,4} {0,13} 
    B1             Integer 
    C     Array    Integer     {0,7} {0,4} 
    C              Integer 
    D1    Array    Integer     
    D1             Integer 
    D9    Array    Integer     
    D9             Integer 
    E              Integer 
    F              Integer 
    G9    Array    Integer     
    G9             Float   
    H     Array    Integer     
    H              Integer 
    I              Integer 
    INT   Function Integer     args=1, float 
    J              Integer 
    K9    Array    Integer     
    K9             Integer 
    L              Integer 
    M     Array    Integer     {0,7} {0,4} 
    M              Integer 
    MIN   Array    String      {0,10} {0,10} 
    MOD   Array    Integer     {0,10} 
    P1             Integer 
    P9    Array    Integer     
    P9             Integer 
    Q     Array    Integer     
    Q              Float   
    R     Array    Integer     
    R              Integer 
    R9    Array    Integer     
    R9             Integer 
    RND   Function Integer     args=1, int   
    S     Array    Integer     {0,13} {0,16} 
    S1    Array    Integer     
    S1             Integer 
    S9    Array    Integer     
    S9             Integer 
    SQR   Function Integer     args=1, float 
    T     Array    Integer     {0,13} {0,13} 
    T$    Array    String      {0,73} 
    T$             String  
    T1    Array    Integer     
    T1             Integer 
    T9    Array    Integer     
    T9             Float   
    W     Array    Integer     
    W              Integer 
    X              Float   
    X1    Array    Integer     
    X9    Array    Integer     
    X9             Unknown 
    Y              Integer 
    Y1    Array    Integer     
    Y1             Integer 
    Y9    Array    Integer     
    Y9             Float   
    Z              Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/startrader/basic/startrader.bas: 
 *
                   +---+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |   | |
        Address    v   v v Original BASIC statement
    -------------- ----- - ------------------------------------------------------------------------------
    0x55e5523424d0 ---------A   01000 COM S[12,15],T[12,12],T$[72],B[3,12]
    0x55e552347150 ---------A   01010 COM W,D9,K9,X9,D1,X1,P9,T9,S9,Y9,H
    0x55e552347970 ---------A   01020 COM Y1,R9,G9,Q,M[6,3],C[6,3]
    0x55e552347c90 ---------A   01030 COM S1,T1,R
    0x55e552347d00 ---------A   01040 REM *** STAR TRADERS ***
    0x55e552347dc0 ---------A   01050 REM <<<GAME SET-UP MODULE>>>
    0x55e552347e60 ---------A   01060 REM S IS THE STAR SYSTEM INFO ARRAY
    0x55e552347f00 ---------A   01070 REM T IS THE TRADING SHIP INFO ARRAY
    0x55e552347fb0 ---------A   01080 REM T$ IS THE TRADING SHIP NAME STRING
    0x55e552348100 ---------A   01090 REM M AND C DETERMINE A STAR'S PRODUCTIVITY/MONTH
    0x55e5523481c0 ---------A   01100 REM   PROD/MO. = S(7,J) * M(I,R1)  +  C(I,R1)
    0x55e552348280 ---------A   01110 REM   WHERE J IS THE STAR ID #,I THE MERCHANDISE #,
    0x55e552348340 ---------A   01120 REM   AND R1 IS THE DEVELOPMENT CLASS OF THE STAR
    0x55e5523483e0 ---------A   01130 REM B CONTAINS THE BANK ACCOUNTS
    0x55e552348480 ---------A   01140 REM A$ IS THE STANDARD INPUT BUFFER
    0x55e552348660 ---------A   01150 DIM A$[6]
    0x55e5523486e0 ---------A   01160 REM R9 IS THE SPEED OF A SHIP IN LIGHT-YEARS PER DAY
    0x55e5523488c0 ---------A   01170 REM D9 IS THE MINIMUM  DISTANCE ALLOWED BETWEEN STARS
    0x55e552348960 ---------A   01180 REM Q IS THE PROBABILITY OF A DELAY
    0x55e552348a20 ---------A   01190 REM K9 IS THE MAX NUMBER OF BIDDING ROUNDS
    0x55e552348ae0 ---------A   01200 REM W IS THE MAX WEIGHT OF A TRADING SHIP
    0x55e552348bb0 ---------A   01210 REM X9 CONTROLS THE PROFIT MARGIN; HIGH X9 LIMITS THE %
    0x55e552348c80 ---------A   01220 REM G9 IS THE STELLAR DEVELOPMENT INCREMENT 1<=G9<=5
    0x55e552348d20 ---------A   01230 REM R=1 IF THIS IS A RESTART
    0x55e552349000 ---------A   01240 LET R9=2/7
    0x55e5523491f0 ---------A   01250 LET D9=15
    0x55e5523493e0 ---------A   01260 LET Q=.1
    0x55e5523495d0 ---------A   01270 LET K9=3
    0x55e5523497c0 ---------A   01280 LET W=30
    0x55e5523499b0 ---------A   01290 LET X9=36
    0x55e552349ba0 ---------A   01300 LET G9=1.25
    0x55e552349db0 ---------A   01310 LET R=0
    0x55e552349e40 ---------A   01320 REM D1 IS THE DAY OF THIS YEAR (1<=D1<=360)
    0x55e55234a0d0 ---------A   01330 REM Y1 IS THIS YEAR
    0x55e55234a2d0 ---------A   01340 LET D1=1
    0x55e55234a4d0 ---------A   01350 LET Y1=2070
    0x55e55234a550 ---------A   01360 REM SET UP ECONOMETRICS MODEL
    0x55e55234a5b0 ---------A   01370 RESTORE 3230
    0x55e55234a7f0 ---------A   01380 MAT READ M,C
    0x55e55234a930 ---------A   01390 REM *** BLOCK #1
    0x55e55234aac0 ---------A   01400 PRINT "INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)";
    0x55e55234ac20 ---------A   01410 INPUT A$
    0x55e55234af40 ---------A   01420 IF A$[1,1]="N" THEN 1670
    0x55e55234aff0 ---------A   01430 PRINT 
    0x55e55234b170 ---------A   01440 PRINT "     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT"
    0x55e55234b2f0 ---------A   01450 PRINT "HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR"
    0x55e55234b470 ---------A   01460 PRINT "SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY"
    0x55e55234b5d0 ---------A   01470 PRINT "FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED."
    0x55e55234b670 ---------A   01480 PRINT 
    0x55e55234b7f0 ---------A   01490 PRINT "     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR"
    0x55e55234b970 ---------A   01500 PRINT "TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO"
    0x55e55234baf0 ---------A   01510 PRINT "STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU"
    0x55e55234bc40 ---------A   01520 PRINT "DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS."
    0x55e55234bce0 ---------A   01530 PRINT 
    0x55e55234be60 ---------A   01540 PRINT "     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY"
    0x55e55234bfe0 ---------A   01550 PRINT "GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT"
    0x55e55234c160 ---------A   01560 PRINT "HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY"
    0x55e55234c2b0 ---------A   01570 PRINT "MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS."
    0x55e55234c350 ---------A   01580 PRINT 
    0x55e55234c4d0 ---------A   01590 PRINT "     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A"
    0x55e55234c7a0 ---------A   01600 PRINT "WEEK AND CAN CARRY UP TO";W;" TONS OF CARGO.  ONLY"
    0x55e55234c920 ---------A   01610 PRINT "CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM."
    0x55e55234caa0 ---------A   01620 PRINT "THEY PAY 5% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE"
    0x55e55234cc00 ---------A   01630 PRINT "PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL"
    0x55e55234cd30 ---------A   01640 PRINT "BANK."
    0x55e55234d1b0 ---------A   01650 PRINT 
    0x55e55234d220 ---------A   01660 REM *** BLOCK #2
    0x55e55234d3b0 ---------A T 01670 PRINT "HAVE ALL PLAYERS PLAYED BEFORE";
    0x55e55234d480 ---------A   01680 INPUT A$
    0x55e55234d510 ---------A   01690 PRINT 
    0x55e55234d820 ---------A   01700 IF A$[1,1]="Y" THEN 1720
    0x55e55234d8c0 ---------A   01710 GOTO 1760
    0x55e55234da10 ---------A T 01720 PRINT "DO YOU WANT TO SET UP YOUR OWN GAME";
    0x55e55234dae0 ---------A   01730 INPUT A$
    0x55e55234db70 ---------A   01740 PRINT 
    0x55e55234de90 ---------A   01750 IF A$[1,1]="Y" THEN 1870
    0x55e55234dff0 ---------A T 01760 PRINT "HOW MANY PLAYERS";
    0x55e55234e140 ---------A   01770 INPUT P9
    0x55e55234e1d0 ---------A   01780 PRINT 
    0x55e55234e570 ---------A   01790 GOTO P9-1 OF 1820,1820,1820
    0x55e55234e6a0 ---------A   01800 PRINT "2,3, OR 4 CAN PLAY"
    0x55e55234e710 ---------A   01810 GOTO 1760
    0x55e55234e990 ---------A T 01820 T9=2*P9
    0x55e55234ed00 ---------A   01830 S9=3*P9+1
    0x55e55234ef90 ---------A   01840 Y9=Y1+5
    0x55e55234f000 ---------A   01850 GOTO 2600
    0x55e55234f060 ---------A   01860 REM *** BLOCK #3
    0x55e55234f1d0 ---------A T 01870 PRINT "IS THIS A RESTART";
    0x55e55234f2a0 ---------A   01880 INPUT A$
    0x55e55234f330 ---------A   01890 PRINT 
    0x55e55234f670 ---------A   01900 IF A$[1,1]="N" THEN 2120
    0x55e55234f810 ---------A   01910 PRINT "LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'"
    0x55e55234f970 ---------A T 01920 PRINT "YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY"
    0x55e55234f9e0 ---------A   01930 PRINT 
    0x55e55234fb40 ---------A   01940 INPUT T$
    0x55e55234fe10 ---------A   01950 INPUT W,D9,K9,X9,D1,Y1
    0x55e5523501d0 ---------A   01960 INPUT P9,T9,S9,Y9,T1,S1
    0x55e552350430 ---------A   01970 FOR J=1 TO S9
    0x55e552350790 ---------A   01980 FOR I=1 TO 9 STEP 4
    0x55e552350f30 ---------A   01990 INPUT S[I,J],S[I+1,J],S[I+2,J],S[I+3,J]
    0x55e552350ff0 ---------A   02000 NEXT I
    0x55e5523510b0 ---------A T 02010 NEXT J
    0x55e552351290 ---------A   02020 FOR J=1 TO T9
    0x55e552351570 ---------A   02030 FOR I=1 TO 9 STEP 4
    0x55e552351d10 ---------A   02040 INPUT T[I,J],T[I+1,J],T[I+2,J],T[I+3,J]
    0x55e552351dd0 ---------A   02050 NEXT I
    0x55e552351e90 ---------A   02060 NEXT J
    0x55e552352080 ---------A   02070 FOR I=1 TO P9
    0x55e552352520 ---------A   02080 INPUT B[1,I],B[2,I],B[3,I]
    0x55e5523525e0 ---------A   02090 NEXT I
    0x55e552352760 ---------A   02100 R=1
    0x55e552352800 ---------A   02110 CHAIN "$TRADES"
    0x55e552352960 ---------A T 02120 PRINT "HOW MANY PLAYERS";
    0x55e552352a30 ---------A   02130 INPUT P9
    0x55e552352ac0 ---------A   02140 PRINT 
    0x55e552352e00 ---------A   02150 IF P9 >= 2 AND P9 <= 12 THEN 2180
    0x55e552352f50 ---------A   02160 PRINT "2,3,4, ... ,12 CAN PLAY"
    0x55e552352fd0 ---------A   02170 GOTO 2120
    0x55e552353120 ---------A T 02180 PRINT "HOW MANY SHIPS PER PLAYER";
    0x55e552353270 ---------A   02190 INPUT X
    0x55e5523532f0 ---------A   02200 PRINT 
    0x55e5523534a0 ---------A   02210 IF X<1 THEN 2180
    0x55e552353690 ---------A   02220 T9=P9*X
    0x55e552353860 ---------A   02230 IF T9 <= 12 THEN 2270
    0x55e5523539e0 ---------A   02240 PRINT "I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;"
    0x55e552353d70 ---------A   02250 PRINT P9;" PLAYERS TIMES";X;" SHIPS MAKES";T9
    0x55e552353df0 ---------A   02260 GOTO 2180
    0x55e552353f30 ---------A T 02270 PRINT "HOW MANY STAR SYSTEMS";
    0x55e552354000 ---------A   02280 INPUT S9
    0x55e5523548a0 ---------A   02290 PRINT 
    0x55e552354be0 ---------A   02300 IF S9 >= 4 AND S9 <= 13 THEN 2330
    0x55e552354d20 ---------A   02310 PRINT "FROM 4 TO 13 STARS"
    0x55e552354db0 ---------A   02320 GOTO 2270
    0x55e552354f00 ---------A T 02330 PRINT "ENTER THE LENGTH OF GAME IN YEARS";
    0x55e552354fd0 ---------A T 02340 INPUT X
    0x55e552355060 ---------A   02350 PRINT 
    0x55e552355440 ---------A   02360 IF X >= 1 AND INT(X)=X THEN 2390
    0x55e552355590 ---------A   02370 PRINT "CHOOSE A POSITIVE INTEGER"
    0x55e552355600 ---------A   02380 GOTO 2340
    0x55e5523557e0 ---------A T 02390 Y9=Y1+X
    0x55e552355950 ---------A T 02400 PRINT "WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)";
    0x55e552355a20 ---------A   02410 INPUT W
    0x55e552355aa0 ---------A   02420 PRINT 
    0x55e552355c80 ---------A   02430 IF W<25 THEN 2400
    0x55e552355e00 ---------A T 02440 PRINT "WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)";
    0x55e552355ed0 ---------A   02450 INPUT D9
    0x55e552355f60 ---------A   02460 PRINT 
    0x55e5523562a0 ---------A   02470 IF D9 <= 25 AND D9 >= 10 THEN 2500
    0x55e5523563f0 ---------A   02480 PRINT "MIN SPACING 10, MAX 25"
    0x55e552356480 ---------A   02490 GOTO 2440
    0x55e5523565d0 ---------A T 02500 PRINT "HOW MANY BIDS OR OFFERS(USUALLY 3)";
    0x55e5523566a0 ---------A   02510 INPUT K9
    0x55e552356720 ---------A   02520 PRINT 
    0x55e552356900 ---------A   02530 IF K9<1 THEN 2500
    0x55e552356a90 ---------A   02540 PRINT "SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER"
    0x55e552356c00 ---------A   02550 PRINT "THE NUMBER, THE LOWER THE PROFIT % ... USUALLY SET TO 2"
    0x55e552356d50 ---------A   02560 PRINT "...YOUR NUMBER";
    0x55e552356e30 ---------A   02570 INPUT X9
    0x55e5523572d0 ---------A   02580 X9=18*(ABS(X9) MIN 5)
    0x55e552357340 ---------A   02590 REM *** BLOCK #4.1
    0x55e5523577a0 ---------A T 02600 S[11,1]=S[12,1]=0
    0x55e552357a50 ---------A   02610 S[7,1]=15
    0x55e552357ac0 ---------A   02620 REM *** BLOCK #4.2
    0x55e552357cc0 ---------A   02630 H=1
    0x55e552357e30 ---------A   02640 S1=2
    0x55e552357ea0 ---------A   02650 GOSUB 3280
    0x55e552358000 ---------A   02660 S1=3
    0x55e552358070 ---------A   02670 GOSUB 3280
    0x55e5523581d0 ---------A   02680 S1=4
    0x55e552358240 ---------A   02690 GOSUB 3390
    0x55e552358420 ---------A   02700 FOR S1=5 TO S9
    0x55e552358ac0 ----------   02710 GOSUB S1-3*INT((S1-1)/3) OF 1920,2010,3180
    0x55e552358b70 ----------   02720 NEXT S1
    0x55e552358bf0 ---------A   02730 REM *** BLOCK #4.3
    0x55e552358dd0 ----------   02740 FOR S1=1 TO S9
    0x55e552358ff0 ----------   02750 FOR J=1 TO 6
    0x55e552359230 ----------   02760 S[J,S1]=0
    0x55e5523592e0 ----------   02770 NEXT J
    0x55e5523594a0 ----------   02780 IF S1>1 THEN 2810
    0x55e552359620 ----------   02790 I=1
    0x55e5523596a0 ----------   02800 GOTO 2850
    0x55e552359be0 ---------- T 02810 I=4*INT(14*RND(0))+5
    0x55e552359ea0 ----------   02820 FOR J=2 TO S1-1
    0x55e55235a120 ----------   02830 IF I=S[8,J] THEN 2810
    0x55e55235a1e0 ----------   02840 NEXT J
    0x55e55235a420 ---------- T 02850 S[8,S1]=I
    0x55e55235a690 ----------   02860 S[9,S1]=270
    0x55e55235a9a0 ----------   02870 S[10,S1]=Y1-1
    0x55e55235aa50 ----------   02880 NEXT S1
    0x55e55235aad0 ---------A   02890 REM *** BLOCK #4.4
    0x55e55235ad30 ----------   02900 T1=L=1
    0x55e55235ada0 ----------   02910 PRINT 
    0x55e55235ae40 ----------   02920 PRINT 
    0x55e55235afa0 ----------   02930 PRINT "CAPTAINS, NAME YOUR SHIPS (UP TO 6 LETTERS/BLANKS/NUMBERS)"
    0x55e55235b210 ----------   02940 FOR I=1 TO T9/P9
    0x55e55235b290 ----------   02950 PRINT 
    0x55e55235b4f0 ----------   02960 FOR P1=1 TO P9
    0x55e55235ba30 ----------   02970 T[1,T1]=T[2,T1]=T[6,T1]=0
    0x55e55235bca0 ----------   02980 T[3,T1]=15
    0x55e55235c070 ----------   02990 T[4,T1]=T[5,T1]=10
    0x55e55235c2e0 ----------   03000 T[7,T1]=25
    0x55e55235c510 ----------   03010 T[9,T1]=D1
    0x55e55235c740 ----------   03020 T[10,T1]=Y1
    0x55e55235c9e0 ----------   03030 T[11,T1]=5000
    0x55e55235cd20 ----------   03040 PRINT "   CAPTAIN";P1;"WHAT DO YOU CHRISTEN YOUR SHIP #";I;
    0x55e55235cf90 ----------   03050 INPUT T$[L,L+5]
    0x55e55235d1b0 ----------   03060 T1=T1+1
    0x55e55235d3c0 ----------   03070 L=L+6
    0x55e55235d470 ----------   03080 NEXT P1
    0x55e55235d530 ----------   03090 NEXT I
    0x55e55235d5b0 ---------A   03100 REM *** BLOCK #4.5
    0x55e55235d810 ----------   03110 FOR B1=1 TO P9
    0x55e55235da90 ----------   03120 B[1,B1]=0
    0x55e55235dcc0 ----------   03130 B[2,B1]=D1
    0x55e55235def0 ----------   03140 B[3,B1]=Y1
    0x55e55235dfa0 ----------   03150 NEXT B1
    0x55e55235e050 ----------   03160 CHAIN "$TRADES"
    0x55e55235f970 ---------A   03170 REM *** <DEVELOPED> GOSUB
    0x55e55235faf0 ---------- T 03180 E=50
    0x55e55235fb60 ----------   03190 GOSUB 3450
    0x55e55235fdc0 ----------   03200 S[7,S1]=10
    0x55e55235fe10 ----------   03210 RETURN
    0x55e552363870 ---------A   03220 REM *** DATA FOR ECONOMETRIC MODEL FOLLOWS ***
    0x55e5523638f0 ---------A   03230 REM MODEL #1
    0x55e552364760 ---------A   03240 DATA -0.025,-0.05,-0.025,0,-0.025,-0.025,0,.1,.1,-0.025,.1,0,.1,.2,.1,.1,-0.025,0
    0x55e552365250 ---------A   03250 DATA 1,1.5,.5,.75,.75,.75,-0.25,-0.25,-0.25,0,-0.5,.5,0,-0.5
    0x55e5523655c0 ---------A   03260 DATA 0,.5,1.5,0
    0x55e552365610 ---------A   03270 END
    0x55e55236bff0 ---------B G 03280 GOTO 3310 (Pseudo Goto)
    0x55e55235e0e0 ---------B   03290 REM *** GOSUBS FOLLOW ***
    0x55e55235e170 ---------B   03300 REM <FRONTIER> GOSUB
    0x55e55235e550 ---------B T 03310 X=(RND(0)-.5)*100
    0x55e55235e8a0 ---------B   03320 Y=50*RND(0)
    0x55e55235ec30 ---------B   03330 IF (ABS(X)<25) AND (Y<25) THEN 3310
    0x55e55235ee30 ---------B   03340 F=1
    0x55e55235eea0 ---------B   03350 GOSUB 3530
    0x55e55235f040 ---------B   03360 IF F=0 THEN 3310
    0x55e55235f2c0 ---------B   03370 S[7,S1]=0
    0x55e55235f310 ---------B   03380 RETURN
    0x55e55236c0b0 ---------C G 03390 GOTO 3410 (Pseudo Goto)
    0x55e55235f3b0 ---------C   03400 REM *** <UNDERDEVELOPED> GOSUB
    0x55e55235f5b0 ---------C T 03410 E=100
    0x55e55235f620 ---------C   03420 GOSUB 3450
    0x55e55235f880 ---------C   03430 S[7,S1]=5
    0x55e55235f8d0 ---------C   03440 RETURN
    0x55e55236c190 ---------D G 03450 GOTO 3470 (Pseudo Goto)
    0x55e55235feb0 ---------D   03460 REM *** <GENERATE CO-ORDS> GOSUB
    0x55e552360250 ---------D T 03470 X=(RND(0)-.5)*E
    0x55e5523605a0 ---------D   03480 Y=RND(0)*E/2
    0x55e552360710 ---------D   03490 F=1
    0x55e552360780 ---------D   03500 GOSUB 3530
    0x55e552360920 ---------D   03510 IF F=0 THEN 3470
    0x55e552360980 ---------D   03520 RETURN
    0x55e55236c260 ---------E G 03530 GOTO 3560 (Pseudo Goto)
    0x55e552360a20 ---------E   03540 REM *** <TEST STAR CO-ORDS> GOSUB
    0x55e552360ae0 ---------E   03550 REM FIRST CONVERT CO-ORDS TO NEXT HALF-BOARD
    0x55e552360e50 ---------E T 03560 GOTO H OF 3670,3630,3610,3570
    0x55e552361000 ---------E T 03570 Z=X
    0x55e552361130 ---------E   03580 X=-Y
    0x55e552361260 ---------E   03590 Y=Z
    0x55e5523612d0 ---------E   03600 GOTO 3670
    0x55e5523613f0 ---------E T 03610 Y=-Y
    0x55e552361460 ---------E   03620 GOTO 3670
    0x55e552361580 ---------E T 03630 Z=X
    0x55e5523616b0 ---------E   03640 X=Y
    0x55e5523617f0 ---------E   03650 Y=Z
    0x55e552361870 ---------E   03660 REM SECOND, TEST PROXIMITY
    0x55e5523542f0 ---------E T 03670 FOR J=1 TO S1-1
    0x55e552362be0 ---------E   03680 IF SQR((X-S[11,J])^2+(Y-S[12,J])^2) >= D9 THEN 3710
    0x55e552362d60 ---------E   03690 F=0
    0x55e55236c340 ---------E   03700 GOTO 3760 (Pseudo Goto)
    0x55e552362e70 ---------E T 03710 NEXT J
    0x55e552362f40 ---------E   03720 REM FINALLY, ENTER CO-ORDS AND INCREMENT HALF-BOARD CTR
    0x55e5523631e0 ---------E   03730 S[11,S1]=INT(X)
    0x55e552363470 ---------E   03740 S[12,S1]=INT(Y)
    0x55e552363760 ---------E   03750 H=MOD(1+H)
    0x55e5523637b0 ---------E T 03760 RETURN
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
#include <unistd.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
char* data_03240s[]={"-0.025","-0.05","-0.025","0","-0.025","-0.025","0",".1",".1","-0.025",".1","0",".1",".2",".1",".1","-0.025","0"};
char* data_03250s[]={"1","1.5",".5",".75",".75",".75","-0.25","-0.25","-0.25","0","-0.5",".5","0","-0.5"};
char* data_03260s[]={"0",".5","1.5","0"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3240, 18,data_03240s},
    { 3250, 14,data_03250s},
    { 3260,  4,data_03260s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char* A_str_arr[7]; // Comments?
char* A_str;        // Comments?
int   B_int_arr[4][13]; // Comments?
int   B1_int;       // Comments?
int   C_int_arr[7][4];  // Comments?
int   C_int;        // Comments?
int   D1_int_arr[]; // Comments?
int   D1_int;       // Comments?
int   D9_int_arr[]; // Comments?
int   D9_int;       // Comments?
int   E_int;        // Comments?
int   F_int;        // Comments?
int   G9_int_arr[]; // Comments?
float G9_flt;       // Comments?
int   H_int_arr[];  // Comments?
int   H_int;        // Comments?
int   I_int;        // Comments?
int   J_int;        // Comments?
int   K9_int_arr[]; // Comments?
int   K9_int;       // Comments?
int   L_int;        // Comments?
int   M_int_arr[7][4];  // Comments?
int   M_int;        // Comments?
char* MIN_str_arr[10][10];  // Comments?
int   MOD_int_arr[10];  // Comments?
int   P1_int;       // Comments?
int   P9_int_arr[]; // Comments?
int   P9_int;       // Comments?
int   Q_int_arr[];  // Comments?
float Q_flt;        // Comments?
int   R_int_arr[];  // Comments?
int   R_int;        // Comments?
int   R9_int_arr[]; // Comments?
int   R9_int;       // Comments?
int   S_int_arr[13][16];// Comments?
int   S1_int_arr[]; // Comments?
int   S1_int;       // Comments?
int   S9_int_arr[]; // Comments?
int   S9_int;       // Comments?
int   T_int_arr[13][13];// Comments?
char* T_str_arr[73];// Comments?
char* T_str;        // Comments?
int   T1_int_arr[]; // Comments?
int   T1_int;       // Comments?
int   T9_int_arr[]; // Comments?
float T9_flt;       // Comments?
int   W_int_arr[];  // Comments?
int   W_int;        // Comments?
float X_flt;        // Comments?
int   X1_int_arr[]; // Comments?
int   X9_int_arr[]; // Comments?
xxxxx X9;           // Comments?
int   Y_int;        // Comments?
int   Y1_int_arr[]; // Comments?
int   Y1_int;       // Comments?
int   Y9_int_arr[]; // Comments?
float Y9_flt;       // Comments?
int   Z_int;        // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03280();
void Routine_03390();
void Routine_03450();
void Routine_03530();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_03280(){
    // 03280 GOTO 3310 (Pseudo Goto)
    goto Lbl_03310;
    // 03290 REM *** GOSUBS FOLLOW ***
    // 03300 REM <FRONTIER> GOSUB

  Lbl_03310:
    // 03310 X=(RND(0)-.5)*100
    X_flt = (RND(0)-0.5)*100;
    // 03320 Y=50*RND(0)
    Y_int = 50*RND(0);
    // 03330 IF (ABS(X)<25) AND (Y<25) THEN 3310
    if(ABS(X_flt)<25&&Y_int<25)goto Lbl_03310;
    // 03340 F=1
    F_int = 1;
    // 03350 GOSUB 3530
    Routine_03530();
    // 03360 IF F=0 THEN 3310
    if(F_int==0)goto Lbl_03310;
    // 03370 S[7,S1]=0
    S_int_arr[(int)7][(int)S1_int] = 0;
    // 03380 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_03390(){
    // 03390 GOTO 3410 (Pseudo Goto)
    goto Lbl_03410;
    // 03400 REM *** <UNDERDEVELOPED> GOSUB

  Lbl_03410:
    // 03410 E=100
    E_int = 100;
    // 03420 GOSUB 3450
    Routine_03450();
    // 03430 S[7,S1]=5
    S_int_arr[(int)7][(int)S1_int] = 5;
    // 03440 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_03450(){
    // 03450 GOTO 3470 (Pseudo Goto)
    goto Lbl_03470;
    // 03460 REM *** <GENERATE CO-ORDS> GOSUB

  Lbl_03470:
    // 03470 X=(RND(0)-.5)*E
    X_flt = (RND(0)-0.5)*E_int;
    // 03480 Y=RND(0)*E/2
    Y_int = RND(0)*E_int/2;
    // 03490 F=1
    F_int = 1;
    // 03500 GOSUB 3530
    Routine_03530();
    // 03510 IF F=0 THEN 3470
    if(F_int==0)goto Lbl_03470;
    // 03520 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

void Routine_03530(){
    // 03530 GOTO 3560 (Pseudo Goto)
    goto Lbl_03560;
    // 03540 REM *** <TEST STAR CO-ORDS> GOSUB
    // 03550 REM FIRST CONVERT CO-ORDS TO NEXT HALF-BOARD

  Lbl_03560:
    // 03560 GOTO H OF 3670,3630,3610,3570
    switch((int)(H_int)){
        case 1: goto Lbl_03670;
        case 2: goto Lbl_03630;
        case 3: goto Lbl_03610;
        case 4: goto Lbl_03570;
        default: break; 
    };

  Lbl_03570:
    // 03570 Z=X
    Z_int = X_flt;
    // 03580 X=-Y
    X_flt = -Y_int;
    // 03590 Y=Z
    Y_int = Z_int;
    // 03600 GOTO 3670
    goto Lbl_03670;

  Lbl_03610:
    // 03610 Y=-Y
    Y_int = -Y_int;
    // 03620 GOTO 3670
    goto Lbl_03670;

  Lbl_03630:
    // 03630 Z=X
    Z_int = X_flt;
    // 03640 X=Y
    X_flt = Y_int;
    // 03650 Y=Z
    Y_int = Z_int;
    // 03660 REM SECOND, TEST PROXIMITY

  Lbl_03670:
    // 03670 FOR J=1 TO S1-1
    for(J_int=1;J_int<=S1_int-1;J_int++){
        // 03680 IF SQR((X-S[11,J])^2+(Y-S[12,J])^2) >= D9 THEN 3710
        if(SQR(FPower((X_flt-S_int_arr[(int)11][(int)J_int]),2)+IPower((Y_int-S_int_arr[(int)12][(int)J_int]),2))>=D9_int)goto Lbl_03710;
        // 03690 F=0
        F_int = 0;
        // 03700 GOTO 3760 (Pseudo Goto)
        goto Lbl_03760;

  Lbl_03710:
        // 03710 NEXT J
        int dummy_3710=0; // Ignore this line.
    }; // End-For(J_int)
    // 03720 REM FINALLY, ENTER CO-ORDS AND INCREMENT HALF-BOARD CTR
    // 03730 S[11,S1]=INT(X)
    S_int_arr[(int)11][(int)S1_int] = INT(X_flt);
    // 03740 S[12,S1]=INT(Y)
    S_int_arr[(int)12][(int)S1_int] = INT(Y_int);
    // 03750 H=MOD(1+H)
    H_int = MOD_int_arr[(int)1+H_int];

  Lbl_03760:
    // 03760 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    LoadCommonAreas("CommonArea.bin");
    // 01000 COM S[12,15],T[12,12],T$[72],B[3,12]
    // 01010 COM W,D9,K9,X9,D1,X1,P9,T9,S9,Y9,H
    // 01020 COM Y1,R9,G9,Q,M[6,3],C[6,3]
    // 01030 COM S1,T1,R
    // 01040 REM *** STAR TRADERS ***
    // 01050 REM <<<GAME SET-UP MODULE>>>
    // 01060 REM S IS THE STAR SYSTEM INFO ARRAY
    // 01070 REM T IS THE TRADING SHIP INFO ARRAY
    // 01080 REM T$ IS THE TRADING SHIP NAME STRING
    // 01090 REM M AND C DETERMINE A STAR'S PRODUCTIVITY/MONTH
    // 01100 REM   PROD/MO. = S(7,J) * M(I,R1)  +  C(I,R1)
    // 01110 REM   WHERE J IS THE STAR ID #,I THE MERCHANDISE #,
    // 01120 REM   AND R1 IS THE DEVELOPMENT CLASS OF THE STAR
    // 01130 REM B CONTAINS THE BANK ACCOUNTS
    // 01140 REM A$ IS THE STANDARD INPUT BUFFER
    // 01150 DIM A$[6]
    // 01160 REM R9 IS THE SPEED OF A SHIP IN LIGHT-YEARS PER DAY
    // 01170 REM D9 IS THE MINIMUM  DISTANCE ALLOWED BETWEEN STARS
    // 01180 REM Q IS THE PROBABILITY OF A DELAY
    // 01190 REM K9 IS THE MAX NUMBER OF BIDDING ROUNDS
    // 01200 REM W IS THE MAX WEIGHT OF A TRADING SHIP
    // 01210 REM X9 CONTROLS THE PROFIT MARGIN; HIGH X9 LIMITS THE %
    // 01220 REM G9 IS THE STELLAR DEVELOPMENT INCREMENT 1<=G9<=5
    // 01230 REM R=1 IF THIS IS A RESTART
    // 01240 LET R9=2/7
    R9_int = 2/7;
    // 01250 LET D9=15
    D9_int = 15;
    // 01260 LET Q=.1
    Q_flt = 0.1;
    // 01270 LET K9=3
    K9_int = 3;
    // 01280 LET W=30
    W_int = 30;
    // 01290 LET X9=36
    X9 = 36;
    // 01300 LET G9=1.25
    G9_flt = 1.25;
    // 01310 LET R=0
    R_int = 0;
    // 01320 REM D1 IS THE DAY OF THIS YEAR (1<=D1<=360)
    // 01330 REM Y1 IS THIS YEAR
    // 01340 LET D1=1
    D1_int = 1;
    // 01350 LET Y1=2070
    Y1_int = 2070;
    // 01360 REM SET UP ECONOMETRICS MODEL
    // 01370 RESTORE 3230
    Data_Index=0;
    RestoreData(3230);
    // 01380 MAT READ M,C
    for(int d0=1;d0<=6;d0++){
        for(int d1=1;d1<=3;d1++){
            M_int_arr[d0][d1] = Get_Data_Int();
        }
    }
    for(int d0=1;d0<=6;d0++){
        for(int d1=1;d1<=3;d1++){
            C_int_arr[d0][d1] = Get_Data_Int();
        }
    }
    // 01390 REM *** BLOCK #1
    // 01400 PRINT "INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)";
    b2c_fprintf(stdout,"INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)"); 
    // 01410 INPUT A$
    // Start of Basic INPUT statement 01410
    printf(" ? ");
    char inpbuf_01410[100];
    if(fgets(inpbuf_01410,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01410=strtok(inpbuf_01410," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01410==nullptr){
            A_str = "";
        }else{
            A_str = ps_01410;
        };
    }; // End of Basic INPUT statement 01410
    // 01420 IF A$[1,1]="N" THEN 1670
    if(strcmp(A_str_arr[(int)1][(int)1],"N")==0)goto Lbl_01670;
    // 01430 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01440 PRINT "     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT"
    b2c_fprintf(stdout,"     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT"); b2c_fprintf(stdout,"\n");
    // 01450 PRINT "HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR"
    b2c_fprintf(stdout,"HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR"); b2c_fprintf(stdout,"\n");
    // 01460 PRINT "SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY"
    b2c_fprintf(stdout,"SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY"); b2c_fprintf(stdout,"\n");
    // 01470 PRINT "FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED."
    b2c_fprintf(stdout,"FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED."); b2c_fprintf(stdout,"\n");
    // 01480 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01490 PRINT "     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR"
    b2c_fprintf(stdout,"     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR"); b2c_fprintf(stdout,"\n");
    // 01500 PRINT "TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO"
    b2c_fprintf(stdout,"TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO"); b2c_fprintf(stdout,"\n");
    // 01510 PRINT "STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU"
    b2c_fprintf(stdout,"STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU"); b2c_fprintf(stdout,"\n");
    // 01520 PRINT "DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS."
    b2c_fprintf(stdout,"DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS."); b2c_fprintf(stdout,"\n");
    // 01530 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01540 PRINT "     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY"
    b2c_fprintf(stdout,"     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY"); b2c_fprintf(stdout,"\n");
    // 01550 PRINT "GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT"
    b2c_fprintf(stdout,"GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT"); b2c_fprintf(stdout,"\n");
    // 01560 PRINT "HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY"
    b2c_fprintf(stdout,"HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY"); b2c_fprintf(stdout,"\n");
    // 01570 PRINT "MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS."
    b2c_fprintf(stdout,"MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS."); b2c_fprintf(stdout,"\n");
    // 01580 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01590 PRINT "     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A"
    b2c_fprintf(stdout,"     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A"); b2c_fprintf(stdout,"\n");
    // 01600 PRINT "WEEK AND CAN CARRY UP TO";W;" TONS OF CARGO.  ONLY"
    b2c_fprintf(stdout,"WEEK AND CAN CARRY UP TO %d  TONS OF CARGO.  ONLY",W_int); b2c_fprintf(stdout,"\n");
    // 01610 PRINT "CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM."
    b2c_fprintf(stdout,"CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM."); b2c_fprintf(stdout,"\n");
    // 01620 PRINT "THEY PAY 5% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE"
    b2c_fprintf(stdout,"THEY PAY 5%% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE"); b2c_fprintf(stdout,"\n");
    // 01630 PRINT "PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL"
    b2c_fprintf(stdout,"PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL"); b2c_fprintf(stdout,"\n");
    // 01640 PRINT "BANK."
    b2c_fprintf(stdout,"BANK."); b2c_fprintf(stdout,"\n");
    // 01650 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01660 REM *** BLOCK #2

  Lbl_01670:
    // 01670 PRINT "HAVE ALL PLAYERS PLAYED BEFORE";
    b2c_fprintf(stdout,"HAVE ALL PLAYERS PLAYED BEFORE"); 
    // 01680 INPUT A$
    // Start of Basic INPUT statement 01680
    printf(" ? ");
    char inpbuf_01680[100];
    if(fgets(inpbuf_01680,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01680=strtok(inpbuf_01680," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01680==nullptr){
            A_str = "";
        }else{
            A_str = ps_01680;
        };
    }; // End of Basic INPUT statement 01680
    // 01690 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01700 IF A$[1,1]="Y" THEN 1720
    if(strcmp(A_str_arr[(int)1][(int)1],"Y")==0)goto Lbl_01720;
    // 01710 GOTO 1760
    goto Lbl_01760;

  Lbl_01720:
    // 01720 PRINT "DO YOU WANT TO SET UP YOUR OWN GAME";
    b2c_fprintf(stdout,"DO YOU WANT TO SET UP YOUR OWN GAME"); 
    // 01730 INPUT A$
    // Start of Basic INPUT statement 01730
    printf(" ? ");
    char inpbuf_01730[100];
    if(fgets(inpbuf_01730,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01730=strtok(inpbuf_01730," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01730==nullptr){
            A_str = "";
        }else{
            A_str = ps_01730;
        };
    }; // End of Basic INPUT statement 01730
    // 01740 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01750 IF A$[1,1]="Y" THEN 1870
    if(strcmp(A_str_arr[(int)1][(int)1],"Y")==0)goto Lbl_01870;

  Lbl_01760:
    // 01760 PRINT "HOW MANY PLAYERS";
    b2c_fprintf(stdout,"HOW MANY PLAYERS"); 
    // 01770 INPUT P9
    // Start of Basic INPUT statement 01770
    printf(" ? ");
    char inpbuf_01770[100];
    if(fgets(inpbuf_01770,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01770=strtok(inpbuf_01770," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01770==nullptr){
            P9_int = 0;
        }else{
            P9_int = atof(ps_01770);
        };
    }; // End of Basic INPUT statement 01770
    // 01780 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01790 GOTO P9-1 OF 1820,1820,1820
    switch((int)(P9_int-1)){
        case 1: goto Lbl_01820;
        case 2: goto Lbl_01820;
        case 3: goto Lbl_01820;
        default: break; 
    };
    // 01800 PRINT "2,3, OR 4 CAN PLAY"
    b2c_fprintf(stdout,"2,3, OR 4 CAN PLAY"); b2c_fprintf(stdout,"\n");
    // 01810 GOTO 1760
    goto Lbl_01760;

  Lbl_01820:
    // 01820 T9=2*P9
    T9_flt = 2*P9_int;
    // 01830 S9=3*P9+1
    S9_int = 3*P9_int+1;
    // 01840 Y9=Y1+5
    Y9_flt = Y1_int+5;
    // 01850 GOTO 2600
    goto Lbl_02600;
    // 01860 REM *** BLOCK #3

  Lbl_01870:
    // 01870 PRINT "IS THIS A RESTART";
    b2c_fprintf(stdout,"IS THIS A RESTART"); 
    // 01880 INPUT A$
    // Start of Basic INPUT statement 01880
    printf(" ? ");
    char inpbuf_01880[100];
    if(fgets(inpbuf_01880,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01880=strtok(inpbuf_01880," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01880==nullptr){
            A_str = "";
        }else{
            A_str = ps_01880;
        };
    }; // End of Basic INPUT statement 01880
    // 01890 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01900 IF A$[1,1]="N" THEN 2120
    if(strcmp(A_str_arr[(int)1][(int)1],"N")==0)goto Lbl_02120;
    // 01910 PRINT "LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'"
    b2c_fprintf(stdout,"LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'"); b2c_fprintf(stdout,"\n");

  Lbl_01920:
    // 01920 PRINT "YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY"
    b2c_fprintf(stdout,"YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY"); b2c_fprintf(stdout,"\n");
    // 01930 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01940 INPUT T$
    // Start of Basic INPUT statement 01940
    printf(" ? ");
    char inpbuf_01940[100];
    if(fgets(inpbuf_01940,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01940=strtok(inpbuf_01940," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01940==nullptr){
            T_str = "";
        }else{
            T_str = ps_01940;
        };
    }; // End of Basic INPUT statement 01940
    // 01950 INPUT W,D9,K9,X9,D1,Y1
    // Start of Basic INPUT statement 01950
    printf(" ? ");
    char inpbuf_01950[100];
    if(fgets(inpbuf_01950,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01950=strtok(inpbuf_01950," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01950==nullptr){
            W_int = 0;
        }else{
            W_int = atof(ps_01950);
        };
        ps_01950=strtok(nullptr," ,\t\n");
        if(ps_01950==nullptr){
            D9_int = 0;
        }else{
            D9_int = atof(ps_01950);
        };
        ps_01950=strtok(nullptr," ,\t\n");
        if(ps_01950==nullptr){
            K9_int = 0;
        }else{
            K9_int = atof(ps_01950);
        };
        ps_01950=strtok(nullptr," ,\t\n");
        if(ps_01950==nullptr){
        }else{
        };
        ps_01950=strtok(nullptr," ,\t\n");
        if(ps_01950==nullptr){
            D1_int = 0;
        }else{
            D1_int = atof(ps_01950);
        };
        ps_01950=strtok(nullptr," ,\t\n");
        if(ps_01950==nullptr){
            Y1_int = 0;
        }else{
            Y1_int = atof(ps_01950);
        };
    }; // End of Basic INPUT statement 01950
    // 01960 INPUT P9,T9,S9,Y9,T1,S1
    // Start of Basic INPUT statement 01960
    printf(" ? ");
    char inpbuf_01960[100];
    if(fgets(inpbuf_01960,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01960=strtok(inpbuf_01960," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01960==nullptr){
            P9_int = 0;
        }else{
            P9_int = atof(ps_01960);
        };
        ps_01960=strtok(nullptr," ,\t\n");
        if(ps_01960==nullptr){
            T9_flt = 0.00;
        }else{
            T9_flt = atof(ps_01960);
        };
        ps_01960=strtok(nullptr," ,\t\n");
        if(ps_01960==nullptr){
            S9_int = 0;
        }else{
            S9_int = atof(ps_01960);
        };
        ps_01960=strtok(nullptr," ,\t\n");
        if(ps_01960==nullptr){
            Y9_flt = 0.00;
        }else{
            Y9_flt = atof(ps_01960);
        };
        ps_01960=strtok(nullptr," ,\t\n");
        if(ps_01960==nullptr){
            T1_int = 0;
        }else{
            T1_int = atof(ps_01960);
        };
        ps_01960=strtok(nullptr," ,\t\n");
        if(ps_01960==nullptr){
            S1_int = 0;
        }else{
            S1_int = atof(ps_01960);
        };
    }; // End of Basic INPUT statement 01960
    // 01970 FOR J=1 TO S9
    for(J_int=1;J_int<=S9_int;J_int++){
        // 01980 FOR I=1 TO 9 STEP 4
        for(I_int=1;I_int<=9;I_int+=4){
            // 01990 INPUT S[I,J],S[I+1,J],S[I+2,J],S[I+3,J]
            // Start of Basic INPUT statement 01990
            printf(" ? ");
            char inpbuf_01990[100];
            if(fgets(inpbuf_01990,100,stdin)==nullptr){
                fprintf(stderr,"ERROR: End of file on input.\n");
                exit(2);
            }else{
                char *ps_01990=strtok(inpbuf_01990," ,\t\n");
                // This may cause problems if BASIC programmer expected
                // input strings to be copied instead of just pointing
                // to the input buffer (ie. strings can be over written).
                if(ps_01990==nullptr){
                    S_int_arr[(int)I_int][(int)J_int] = 0;
                }else{
                    S_int_arr[(int)I_int][(int)J_int] = atof(ps_01990);
                };
                ps_01990=strtok(nullptr," ,\t\n");
                if(ps_01990==nullptr){
                    S_int_arr[(int)I_int+1][(int)J_int] = 0;
                }else{
                    S_int_arr[(int)I_int+1][(int)J_int] = atof(ps_01990);
                };
                ps_01990=strtok(nullptr," ,\t\n");
                if(ps_01990==nullptr){
                    S_int_arr[(int)I_int+2][(int)J_int] = 0;
                }else{
                    S_int_arr[(int)I_int+2][(int)J_int] = atof(ps_01990);
                };
                ps_01990=strtok(nullptr," ,\t\n");
                if(ps_01990==nullptr){
                    S_int_arr[(int)I_int+3][(int)J_int] = 0;
                }else{
                    S_int_arr[(int)I_int+3][(int)J_int] = atof(ps_01990);
                };
            }; // End of Basic INPUT statement 01990
            // 02000 NEXT I
            int dummy_2000=0; // Ignore this line.
        }; // End-For(I_int)

  Lbl_02010:
        // 02010 NEXT J
        int dummy_2010=0; // Ignore this line.
    }; // End-For(J_int)
    // 02020 FOR J=1 TO T9
    for(J_int=1;J_int<=T9_flt;J_int++){
        // 02030 FOR I=1 TO 9 STEP 4
        for(I_int=1;I_int<=9;I_int+=4){
            // 02040 INPUT T[I,J],T[I+1,J],T[I+2,J],T[I+3,J]
            // Start of Basic INPUT statement 02040
            printf(" ? ");
            char inpbuf_02040[100];
            if(fgets(inpbuf_02040,100,stdin)==nullptr){
                fprintf(stderr,"ERROR: End of file on input.\n");
                exit(2);
            }else{
                char *ps_02040=strtok(inpbuf_02040," ,\t\n");
                // This may cause problems if BASIC programmer expected
                // input strings to be copied instead of just pointing
                // to the input buffer (ie. strings can be over written).
                if(ps_02040==nullptr){
                    T_int_arr[(int)I_int][(int)J_int] = 0;
                }else{
                    T_int_arr[(int)I_int][(int)J_int] = atof(ps_02040);
                };
                ps_02040=strtok(nullptr," ,\t\n");
                if(ps_02040==nullptr){
                    T_int_arr[(int)I_int+1][(int)J_int] = 0;
                }else{
                    T_int_arr[(int)I_int+1][(int)J_int] = atof(ps_02040);
                };
                ps_02040=strtok(nullptr," ,\t\n");
                if(ps_02040==nullptr){
                    T_int_arr[(int)I_int+2][(int)J_int] = 0;
                }else{
                    T_int_arr[(int)I_int+2][(int)J_int] = atof(ps_02040);
                };
                ps_02040=strtok(nullptr," ,\t\n");
                if(ps_02040==nullptr){
                    T_int_arr[(int)I_int+3][(int)J_int] = 0;
                }else{
                    T_int_arr[(int)I_int+3][(int)J_int] = atof(ps_02040);
                };
            }; // End of Basic INPUT statement 02040
            // 02050 NEXT I
            int dummy_2050=0; // Ignore this line.
        }; // End-For(I_int)
        // 02060 NEXT J
        int dummy_2060=0; // Ignore this line.
    }; // End-For(J_int)
    // 02070 FOR I=1 TO P9
    for(I_int=1;I_int<=P9_int;I_int++){
        // 02080 INPUT B[1,I],B[2,I],B[3,I]
        // Start of Basic INPUT statement 02080
        printf(" ? ");
        char inpbuf_02080[100];
        if(fgets(inpbuf_02080,100,stdin)==nullptr){
            fprintf(stderr,"ERROR: End of file on input.\n");
            exit(2);
        }else{
            char *ps_02080=strtok(inpbuf_02080," ,\t\n");
            // This may cause problems if BASIC programmer expected
            // input strings to be copied instead of just pointing
            // to the input buffer (ie. strings can be over written).
            if(ps_02080==nullptr){
                B_int_arr[(int)1][(int)I_int] = 0;
            }else{
                B_int_arr[(int)1][(int)I_int] = atof(ps_02080);
            };
            ps_02080=strtok(nullptr," ,\t\n");
            if(ps_02080==nullptr){
                B_int_arr[(int)2][(int)I_int] = 0;
            }else{
                B_int_arr[(int)2][(int)I_int] = atof(ps_02080);
            };
            ps_02080=strtok(nullptr," ,\t\n");
            if(ps_02080==nullptr){
                B_int_arr[(int)3][(int)I_int] = 0;
            }else{
                B_int_arr[(int)3][(int)I_int] = atof(ps_02080);
            };
        }; // End of Basic INPUT statement 02080
        // 02090 NEXT I
        int dummy_2090=0; // Ignore this line.
    }; // End-For(I_int)
    // 02100 R=1
    R_int = 1;
    // 02110 CHAIN "$TRADES"
    SaveCommonArea("CommonArea.bin");
    execl("$TRADES","",nullptr);
    switch(errno){
        case EACCES:	fprintf(stderr,"EXECL: Permission denied.\n"); break;
        case EMFILE:	fprintf(stderr,"EXECL: Too many open files.\n"); break;
        case ENOENT:	fprintf(stderr,"EXECL: Path or file name not found.\n"); break;
        case ENOEXEC:	fprintf(stderr,"EXECL: Exec format error.\n"); break;
        case ENOMEM:	fprintf(stderr,"EXECL: Not enough memory.\n"); break;
        default:	    fprintf(stderr,"EXECL: Unknown error.\n"); break;
    };

  Lbl_02120:
    // 02120 PRINT "HOW MANY PLAYERS";
    b2c_fprintf(stdout,"HOW MANY PLAYERS"); 
    // 02130 INPUT P9
    // Start of Basic INPUT statement 02130
    printf(" ? ");
    char inpbuf_02130[100];
    if(fgets(inpbuf_02130,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02130=strtok(inpbuf_02130," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02130==nullptr){
            P9_int = 0;
        }else{
            P9_int = atof(ps_02130);
        };
    }; // End of Basic INPUT statement 02130
    // 02140 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02150 IF P9 >= 2 AND P9 <= 12 THEN 2180
    if(P9_int>=2&&P9_int<=12)goto Lbl_02180;
    // 02160 PRINT "2,3,4, ... ,12 CAN PLAY"
    b2c_fprintf(stdout,"2,3,4, ... ,12 CAN PLAY"); b2c_fprintf(stdout,"\n");
    // 02170 GOTO 2120
    goto Lbl_02120;

  Lbl_02180:
    // 02180 PRINT "HOW MANY SHIPS PER PLAYER";
    b2c_fprintf(stdout,"HOW MANY SHIPS PER PLAYER"); 
    // 02190 INPUT X
    // Start of Basic INPUT statement 02190
    printf(" ? ");
    char inpbuf_02190[100];
    if(fgets(inpbuf_02190,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02190=strtok(inpbuf_02190," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02190==nullptr){
            X_flt = 0.00;
        }else{
            X_flt = atof(ps_02190);
        };
    }; // End of Basic INPUT statement 02190
    // 02200 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02210 IF X<1 THEN 2180
    if(X_flt<1)goto Lbl_02180;
    // 02220 T9=P9*X
    T9_flt = P9_int*X_flt;
    // 02230 IF T9 <= 12 THEN 2270
    if(T9_flt<=12)goto Lbl_02270;
    // 02240 PRINT "I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;"
    b2c_fprintf(stdout,"I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;"); b2c_fprintf(stdout,"\n");
    // 02250 PRINT P9;" PLAYERS TIMES";X;" SHIPS MAKES";T9
    b2c_fprintf(stdout," %d  PLAYERS TIMES %f  SHIPS MAKES %f ",P9_int,X_flt,T9_flt); b2c_fprintf(stdout,"\n");
    // 02260 GOTO 2180
    goto Lbl_02180;

  Lbl_02270:
    // 02270 PRINT "HOW MANY STAR SYSTEMS";
    b2c_fprintf(stdout,"HOW MANY STAR SYSTEMS"); 
    // 02280 INPUT S9
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
            S9_int = 0;
        }else{
            S9_int = atof(ps_02280);
        };
    }; // End of Basic INPUT statement 02280
    // 02290 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02300 IF S9 >= 4 AND S9 <= 13 THEN 2330
    if(S9_int>=4&&S9_int<=13)goto Lbl_02330;
    // 02310 PRINT "FROM 4 TO 13 STARS"
    b2c_fprintf(stdout,"FROM 4 TO 13 STARS"); b2c_fprintf(stdout,"\n");
    // 02320 GOTO 2270
    goto Lbl_02270;

  Lbl_02330:
    // 02330 PRINT "ENTER THE LENGTH OF GAME IN YEARS";
    b2c_fprintf(stdout,"ENTER THE LENGTH OF GAME IN YEARS"); 

  Lbl_02340:
    // 02340 INPUT X
    // Start of Basic INPUT statement 02340
    printf(" ? ");
    char inpbuf_02340[100];
    if(fgets(inpbuf_02340,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02340=strtok(inpbuf_02340," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02340==nullptr){
            X_flt = 0.00;
        }else{
            X_flt = atof(ps_02340);
        };
    }; // End of Basic INPUT statement 02340
    // 02350 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02360 IF X >= 1 AND INT(X)=X THEN 2390
    if(X_flt>=1&&INT(X_flt)==X_flt)goto Lbl_02390;
    // 02370 PRINT "CHOOSE A POSITIVE INTEGER"
    b2c_fprintf(stdout,"CHOOSE A POSITIVE INTEGER"); b2c_fprintf(stdout,"\n");
    // 02380 GOTO 2340
    goto Lbl_02340;

  Lbl_02390:
    // 02390 Y9=Y1+X
    Y9_flt = Y1_int+X_flt;

  Lbl_02400:
    // 02400 PRINT "WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)";
    b2c_fprintf(stdout,"WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)"); 
    // 02410 INPUT W
    // Start of Basic INPUT statement 02410
    printf(" ? ");
    char inpbuf_02410[100];
    if(fgets(inpbuf_02410,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02410=strtok(inpbuf_02410," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02410==nullptr){
            W_int = 0;
        }else{
            W_int = atof(ps_02410);
        };
    }; // End of Basic INPUT statement 02410
    // 02420 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02430 IF W<25 THEN 2400
    if(W_int<25)goto Lbl_02400;

  Lbl_02440:
    // 02440 PRINT "WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)";
    b2c_fprintf(stdout,"WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)"); 
    // 02450 INPUT D9
    // Start of Basic INPUT statement 02450
    printf(" ? ");
    char inpbuf_02450[100];
    if(fgets(inpbuf_02450,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02450=strtok(inpbuf_02450," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02450==nullptr){
            D9_int = 0;
        }else{
            D9_int = atof(ps_02450);
        };
    }; // End of Basic INPUT statement 02450
    // 02460 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02470 IF D9 <= 25 AND D9 >= 10 THEN 2500
    if(D9_int<=25&&D9_int>=10)goto Lbl_02500;
    // 02480 PRINT "MIN SPACING 10, MAX 25"
    b2c_fprintf(stdout,"MIN SPACING 10, MAX 25"); b2c_fprintf(stdout,"\n");
    // 02490 GOTO 2440
    goto Lbl_02440;

  Lbl_02500:
    // 02500 PRINT "HOW MANY BIDS OR OFFERS(USUALLY 3)";
    b2c_fprintf(stdout,"HOW MANY BIDS OR OFFERS(USUALLY 3)"); 
    // 02510 INPUT K9
    // Start of Basic INPUT statement 02510
    printf(" ? ");
    char inpbuf_02510[100];
    if(fgets(inpbuf_02510,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02510=strtok(inpbuf_02510," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02510==nullptr){
            K9_int = 0;
        }else{
            K9_int = atof(ps_02510);
        };
    }; // End of Basic INPUT statement 02510
    // 02520 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02530 IF K9<1 THEN 2500
    if(K9_int<1)goto Lbl_02500;
    // 02540 PRINT "SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER"
    b2c_fprintf(stdout,"SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER"); b2c_fprintf(stdout,"\n");
    // 02550 PRINT "THE NUMBER, THE LOWER THE PROFIT % ... USUALLY SET TO 2"
    b2c_fprintf(stdout,"THE NUMBER, THE LOWER THE PROFIT %% ... USUALLY SET TO 2"); b2c_fprintf(stdout,"\n");
    // 02560 PRINT "...YOUR NUMBER";
    b2c_fprintf(stdout,"...YOUR NUMBER"); 
    // 02570 INPUT X9
    // Start of Basic INPUT statement 02570
    printf(" ? ");
    char inpbuf_02570[100];
    if(fgets(inpbuf_02570,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02570=strtok(inpbuf_02570," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02570==nullptr){
        }else{
        };
    }; // End of Basic INPUT statement 02570
    // 02580 X9=18*(ABS(X9) MIN 5)
    X9 = StringCat(18,(MIN_str_arr[(int)ABS(X9)][(int)5]));
    // 02590 REM *** BLOCK #4.1

  Lbl_02600:
    // 02600 S[11,1]=S[12,1]=0
    S_int_arr[(int)12][(int)1] = S_int_arr[(int)11][(int)1] = 0;
    // 02610 S[7,1]=15
    S_int_arr[(int)7][(int)1] = 15;
    // 02620 REM *** BLOCK #4.2
    // 02630 H=1
    H_int = 1;
    // 02640 S1=2
    S1_int = 2;
    // 02650 GOSUB 3280
    Routine_03280();
    // 02660 S1=3
    S1_int = 3;
    // 02670 GOSUB 3280
    Routine_03280();
    // 02680 S1=4
    S1_int = 4;
    // 02690 GOSUB 3390
    Routine_03390();
    // 02700 FOR S1=5 TO S9
    for(S1_int=5;S1_int<=S9_int;S1_int++){
        // 02730 REM *** BLOCK #4.3
        // 02890 REM *** BLOCK #4.4
        // 03100 REM *** BLOCK #4.5
        // 03170 REM *** <DEVELOPED> GOSUB
        // 03220 REM *** DATA FOR ECONOMETRIC MODEL FOLLOWS ***
        // 03230 REM MODEL #1
        // 03240 DATA -0.025,-0.05,-0.025,0,-0.025,-0.025,0,.1,.1,-0.025,.1,0,.1,.2,.1,.1,-0.025,0
        // 03250 DATA 1,1.5,.5,.75,.75,.75,-0.25,-0.25,-0.25,0,-0.5,.5,0,-0.5
        // 03260 DATA 0,.5,1.5,0
        // 03270 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
