/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/startrader/basic/StarTrader_setup.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x634178a8a550 ---------A   00001  REM Written in HP Basic
    0x634178a8a610 ---------A   00002  REM From: http://www.langesite.com/startrader/
    0x634178a9ccb0 ---------A   00010 COM S[12,15],T[12,12],T$[72],B[3,12]
    0x634178a99c50 ---------A   00020 COM W,D9,K9,X9,D1,X1,P9,T9,S9,Y9,H
    0x634178aa4210 ---------A   00030 COM Y1,R9,G9,Q,M[6,3],C[6,3]
    0x634178aa4730 ---------A   00035 COM S1,T1,R
    0x634178aa4770 ---------A   00040 REM *** STAR TRADERS ***
    0x634178aa47b0 ---------A   00050 REM <<<GAME SET-UP MODULE>>>
    0x634178aa4850 ---------A   00060 REM S IS THE STAR SYSTEM INFO ARRAY
    0x634178aa48f0 ---------A   00070 REM T IS THE TRADING SHIP INFO ARRAY
    0x634178aa49a0 ---------A   00080 REM T$ IS THE TRADING SHIP NAME STRING
    0x634178aa4a60 ---------A   00090 REM M AND C DETERMINE A STAR'S PRODUCTIVITY/MONTH
    0x634178aa4b20 ---------A   00092 REM   PROD/MO. = S(7,J) * M(I,R1)  +  C(I,R1)
    0x634178aa4be0 ---------A   00094 REM   WHERE J IS THE STAR ID #,I THE MERCHANDISE #,
    0x634178aa4ca0 ---------A   00096 REM   AND R1 IS THE DEVELOPMENT CLASS OF THE STAR
    0x634178aa4d40 ---------A   00100 REM B CONTAINS THE BANK ACCOUNTS
    0x634178aa4de0 ---------A   00110 REM A$ IS THE STANDARD INPUT BUFFER
    0x634178aa50a0 ---------A   00120 DIM A$[6]
    0x634178aa5120 ---------A   00130 REM R9 IS THE SPEED OF A SHIP IN LIGHT-YEARS PER DAY
    0x634178aa51a0 ---------A   00140 REM D9 IS THE MINIMUM  DISTANCE ALLOWED BETWEEN STARS
    0x634178aa5240 ---------A   00150 REM Q IS THE PROBABILITY OF A DELAY
    0x634178aa5300 ---------A   00160 REM K9 IS THE MAX NUMBER OF BIDDING ROUNDS
    0x634178aa53c0 ---------A   00170 REM W IS THE MAX WEIGHT OF A TRADING SHIP
    0x634178aa5440 ---------A   00180 REM X9 CONTROLS THE PROFIT MARGIN; HIGH X9 LIMITS THE %
    0x634178aa54c0 ---------A   00190 REM G9 IS THE STELLAR DEVELOPMENT INCREMENT 1<=G9<=5
    0x634178aa5560 ---------A   00195 REM R=1 IF THIS IS A RESTART
    0x634178a9ad20 ---------A   00200 LET R9=2/7
    0x634178a9ae30 ---------A   00210 LET D9=15
    0x634178aa5c00 ---------A   00220 LET Q=.1
    0x634178aa5e10 ---------A   00230 LET K9=3
    0x634178aa6020 ---------A   00240 LET W=30
    0x634178aa6230 ---------A   00250 LET X9=36
    0x634178aa6440 ---------A   00260 LET G9=1.25
    0x634178aa6880 ---------A   00265 LET R=0
    0x634178aa6910 ---------A   00270 REM D1 IS THE DAY OF THIS YEAR (1<=D1<=360)
    0x634178aa6990 ---------A   00280 REM Y1 IS THIS YEAR
    0x634178aa6bb0 ---------A   00290 LET D1=1
    0x634178aa6dd0 ---------A   00300 LET Y1=2070
    0x634178aa6e50 ---------A   00302 REM SET UP ECONOMETRICS MODEL
    0x634178aa6eb0 ---------A   00304 RESTORE 2410
    0x634178aa70f0 ---------A   00306 MAT READ M,C
    0x634178aa7160 ---------A   00310 REM *** BLOCK #1
    0x634178aa7310 ---------A   00320 PRINT "INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)";
    0x634178a99840 ---------A   00330 INPUT A$
    0x634178a98600 ---------A   00340 IF A$[1,1]="N" THEN 590
    0x634178aa7860 ---------A   00350 PRINT 
    0x634178aa7a00 ---------A   00360 PRINT "     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT"
    0x634178aa7ba0 ---------A   00370 PRINT "HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR"
    0x634178aa7d40 ---------A   00380 PRINT "SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY"
    0x634178aa7ec0 ---------A   00390 PRINT "FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED."
    0x634178aa7f60 ---------A   00400 PRINT 
    0x634178aa8100 ---------A   00410 PRINT "     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR"
    0x634178aa82a0 ---------A   00420 PRINT "TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO"
    0x634178aa8440 ---------A   00430 PRINT "STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU"
    0x634178aa85b0 ---------A   00440 PRINT "DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS."
    0x634178aa8650 ---------A   00450 PRINT 
    0x634178aa87f0 ---------A   00460 PRINT "     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY"
    0x634178aa8990 ---------A   00470 PRINT "GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT"
    0x634178aa8b30 ---------A   00480 PRINT "HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY"
    0x634178aa8ca0 ---------A   00490 PRINT "MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS."
    0x634178aa8d40 ---------A   00500 PRINT 
    0x634178aa8ee0 ---------A   00510 PRINT "     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A"
    0x634178aa9270 ---------A   00520 PRINT "WEEK AND CAN CARRY UP TO";W;" TONS OF CARGO.  ONLY"
    0x634178aa9410 ---------A   00530 PRINT "CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM."
    0x634178aa95b0 ---------A   00540 PRINT "THEY PAY 5% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE"
    0x634178aa9b40 ---------A   00550 PRINT "PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL"
    0x634178aa9c90 ---------A   00560 PRINT "BANK."
    0x634178aa9d00 ---------A   00570 PRINT 
    0x634178aa9d70 ---------A   00580 REM *** BLOCK #2
    0x634178aa9f20 ---------A T 00590 PRINT "HAVE ALL PLAYERS PLAYED BEFORE";
    0x634178a985a0 ---------A   00600 INPUT A$
    0x634178aaa0a0 ---------A   00605 PRINT 
    0x634178a996d0 ---------A   00610 IF A$[1,1]="Y" THEN 630
    0x634178aaa4d0 ---------A   00620 GOTO 660
    0x634178aaa640 ---------A T 00630 PRINT "DO YOU WANT TO SET UP YOUR OWN GAME";
    0x634178a99ea0 ---------A   00640 INPUT A$
    0x634178aaa7c0 ---------A   00645 PRINT 
    0x634178a99a20 ---------A   00650 IF A$[1,1]="Y" THEN 760
    0x634178aaace0 ---------A T 00660 PRINT "HOW MANY PLAYERS";
    0x634178a99970 ---------A   00670 INPUT P9
    0x634178aaae60 ---------A   00675 PRINT 
    0x634178aab300 ---------A   00680 GOTO P9-1 OF 710,710,710
    0x634178aab450 ---------A   00690 PRINT "2,3, OR 4 CAN PLAY"
    0x634178aab4c0 ---------A   00700 GOTO 660
    0x634178aab7e0 ---------A T 00710 T9=2*P9
    0x634178aabc10 ---------A   00720 S9=3*P9+1
    0x634178aabf40 ---------A   00730 Y9=Y1+5
    0x634178aabfb0 ---------A   00740 GOTO 1350
    0x634178aac010 ---------A   00750 REM *** BLOCK #3
    0x634178aac1a0 ---------A T 00760 PRINT "IS THIS A RESTART";
    0x634178aac2f0 ---------A   00770 INPUT A$
    0x634178aac380 ---------A   00775 PRINT 
    0x634178aac7a0 ---------A   00780 IF A$[1,1]="N" THEN 940
    0x634178aac960 ---------A   00790 PRINT "LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'"
    0x634178aacae0 ---------A   00800 PRINT "YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY"
    0x634178aacb50 ---------A   00810 PRINT 
    0x634178aaccb0 ---------A   00820 INPUT T$
    0x634178aad280 ---------A   00830 INPUT W,D9,K9,X9,D1,Y1
    0x634178aad840 ---------A   00835 INPUT P9,T9,S9,Y9,T1,S1
    0x634178aadc00 ---------A   00840 FOR J=1 TO S9
    0x634178aae080 ---------A   00845 FOR I=1 TO 9 STEP 4
    0x634178aaee80 ---------A   00850 INPUT S[I,J],S[I+1,J],S[I+2,J],S[I+3,J]
    0x634178aaefc0 ---------A   00855 NEXT I
    0x634178aaf100 ---------A   00860 NEXT J
    0x634178aaf400 ---------A   00870 FOR J=1 TO T9
    0x634178aaf7c0 ---------A   00875 FOR I=1 TO 9 STEP 4
    0x634178ab05c0 ---------A   00880 INPUT T[I,J],T[I+1,J],T[I+2,J],T[I+3,J]
    0x634178ab0700 ---------A   00885 NEXT I
    0x634178ab0840 ---------A   00890 NEXT J
    0x634178ab0b50 ---------A   00900 FOR I=1 TO P9
    0x634178ab1350 ---------A   00910 INPUT B[1,I],B[2,I],B[3,I]
    0x634178ab1490 ---------A   00920 NEXT I
    0x634178ab16b0 ---------A   00925 R=1
    0x634178ab1750 ---------A   00930 CHAIN "$TRADES"
    0x634178ab18d0 ---------A T 00940 PRINT "HOW MANY PLAYERS";
    0x634178ab1a20 ---------A   00950 INPUT P9
    0x634178ab1ab0 ---------A   00955 PRINT 
    0x634178ab1f30 ---------A   00960 IF P9 >= 2 AND P9 <= 12 THEN 990
    0x634178ab20a0 ---------A   00970 PRINT "2,3,4, ... ,12 CAN PLAY"
    0x634178ab2120 ---------A   00980 GOTO 940
    0x634178ab2290 ---------A T 00990 PRINT "HOW MANY SHIPS PER PLAYER";
    0x634178ab24a0 ---------A   01000 INPUT X
    0x634178ab2520 ---------A   01005 PRINT 
    0x634178ab2770 ---------A   01010 IF X<1 THEN 990
    0x634178ab2ae0 ---------A   01020 T9=P9*X
    0x634178ab2d50 ---------A   01030 IF T9 <= 12 THEN 1070
    0x634178ab2ef0 ---------A   01040 PRINT "I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;"
    0x634178ab3440 ---------A   01050 PRINT P9;" PLAYERS TIMES";X;" SHIPS MAKES";T9
    0x634178ab34c0 ---------A   01060 GOTO 990
    0x634178ab3e30 ---------A T 01070 PRINT "HOW MANY STAR SYSTEMS";
    0x634178ab3f80 ---------A   01080 INPUT S9
    0x634178ab4010 ---------A   01085 PRINT 
    0x634178ab4490 ---------A   01090 IF S9 >= 4 AND S9 <= 13 THEN 1120
    0x634178ab45f0 ---------A   01100 PRINT "FROM 4 TO 13 STARS"
    0x634178ab4680 ---------A   01110 GOTO 1070
    0x634178ab47f0 ---------A T 01120 PRINT "ENTER THE LENGTH OF GAME IN YEARS";
    0x634178ab4940 ---------A T 01130 INPUT X
    0x634178ab49d0 ---------A   01135 PRINT 
    0x634178ab4f50 ---------A   01140 IF X >= 1 AND INT(X)=X THEN 1170
    0x634178ab50c0 ---------A   01150 PRINT "CHOOSE A POSITIVE INTEGER"
    0x634178ab5130 ---------A   01160 GOTO 1130
    0x634178ab5490 ---------A T 01170 Y9=Y1+X
    0x634178ab5620 ---------A T 01180 PRINT "WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)";
    0x634178ab5770 ---------A   01190 INPUT W
    0x634178ab57f0 ---------A   01195 PRINT 
    0x634178ab5a70 ---------A   01200 IF W<25 THEN 1180
    0x634178ab5c10 ---------A T 01210 PRINT "WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)";
    0x634178ab5d60 ---------A   01220 INPUT D9
    0x634178ab5df0 ---------A   01225 PRINT 
    0x634178ab6270 ---------A   01230 IF D9 <= 25 AND D9 >= 10 THEN 1260
    0x634178ab63e0 ---------A   01240 PRINT "MIN SPACING 10, MAX 25"
    0x634178ab6470 ---------A   01250 GOTO 1210
    0x634178ab65e0 ---------A T 01260 PRINT "HOW MANY BIDS OR OFFERS(USUALLY 3)";
    0x634178ab6730 ---------A   01270 INPUT K9
    0x634178ab67b0 ---------A   01275 PRINT 
    0x634178ab6a30 ---------A   01280 IF K9<1 THEN 1260
    0x634178ab6be0 ---------A   01290 PRINT "SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER"
    0x634178ab6d70 ---------A   01300 PRINT "THE NUMBER, THE LOWER THE PROFIT % ... USUALLY SET TO 2"
    0x634178ab6ee0 ---------A   01310 PRINT "...YOUR NUMBER";
    0x634178ab7040 ---------A   01320 INPUT X9
    0x634178ab75c0 ---------A   01330 X9=18*(ABS(X9) MIN 5)
    0x634178ab7630 ---------A   01340 REM *** BLOCK #4.1
    0x634178ab7c30 ---------A T 01350 S[11,1]=S[12,1]=0
    0x634178ab7fc0 ---------A   01360 S[7,1]=15
    0x634178ab8030 ---------A   01370 REM *** BLOCK #4.2
    0x634178ab8250 ---------A   01380 H=1
    0x634178ab8460 ---------A   01390 S1=2
    0x634178ab84d0 ---------A   01400 GOSUB 1920
    0x634178ab86d0 ---------A   01410 S1=3
    0x634178ab8740 ---------A   01420 GOSUB 1920
    0x634178ab8940 ---------A   01430 S1=4
    0x634178ab89b0 ---------A   01440 GOSUB 2010
    0x634178ab8cb0 ---------A   01450 FOR S1=5 TO S9
    0x634178ab9590 ---------A   01460 GOSUB S1-3*INT((S1-1)/3) OF 1920,2010,2060
    0x634178ab96c0 ---------A   01470 NEXT S1
    0x634178ab9740 ---------A   01480 REM *** BLOCK #4.3
    0x634178ab9a40 ---------A   01490 FOR S1=1 TO S9
    0x634178ab9d20 ---------A   01500 FOR J=1 TO 6
    0x634178aba100 ---------A   01510 S[J,S1]=0
    0x634178aba230 ---------A   01520 NEXT J
    0x634178aba490 ---------A   01530 IF S1>1 THEN 1560
    0x634178aba6b0 ---------A   01540 I=1
    0x634178aba730 ---------A   01550 GOTO 1600
    0x634178abadf0 ---------A T 01560 I=4*INT(14*RND(0))+5
    0x634178abb1f0 ---------A   01570 FOR J=2 TO S1-1
    0x634178abb610 ---------A   01580 IF I=S[8,J] THEN 1560
    0x634178abb750 ---------A   01590 NEXT J
    0x634178abbb30 ---------A T 01600 S[8,S1]=I
    0x634178abbee0 ---------A   01610 S[9,S1]=270
    0x634178abc3b0 ---------A   01620 S[10,S1]=Y1-1
    0x634178abc4e0 ---------A   01630 NEXT S1
    0x634178abc560 ---------A   01640 REM *** BLOCK #4.4
    0x634178abc920 ---------A   01650 T1=L=1
    0x634178abc990 ---------A   01655 PRINT 
    0x634178abca30 ---------A   01657 PRINT 
    0x634178abcbb0 ---------A   01660 PRINT "CAPTAINS, NAME YOUR SHIPS (UP TO 6 LETTERS/BLANKS/NUMBERS)"
    0x634178abcfc0 ---------A   01670 FOR I=1 TO T9/P9
    0x634178abd040 ---------A   01680 PRINT 
    0x634178abd400 ---------A   01690 FOR P1=1 TO P9
    0x634178abdcc0 ---------A   01700 T[1,T1]=T[2,T1]=T[6,T1]=0
    0x634178abe070 ---------A   01710 T[3,T1]=15
    0x634178abe6a0 ---------A   01720 T[4,T1]=T[5,T1]=10
    0x634178abea50 ---------A   01730 T[7,T1]=25
    0x634178abee20 ---------A   01740 T[9,T1]=D1
    0x634178abf1f0 ---------A   01750 T[10,T1]=Y1
    0x634178abf5d0 ---------A   01760 T[11,T1]=5000
    0x634178abfa50 ---------A   01770 PRINT "   CAPTAIN";P1;"WHAT DO YOU CHRISTEN YOUR SHIP #";I;
    0x634178abfe60 ---------A   01780 INPUT T$[L,L+5]
    0x634178ac01a0 ---------A   01790 T1=T1+1
    0x634178ac04d0 ---------A   01800 L=L+6
    0x634178ac0600 ---------A   01810 NEXT P1
    0x634178ac0740 ---------A   01820 NEXT I
    0x634178ac07c0 ---------A   01830 REM *** BLOCK #4.5
    0x634178ac0b80 ---------A   01840 FOR B1=1 TO P9
    0x634178ac0f40 ---------A   01850 B[1,B1]=0
    0x634178ac1310 ---------A   01860 B[2,B1]=D1
    0x634178ac16e0 ---------A   01870 B[3,B1]=Y1
    0x634178ac1810 ---------A   01880 NEXT B1
    0x634178ac18c0 ---------A   01890 CHAIN "$TRADES"
    0x634178ac1950 ---------B   01900 REM *** GOSUBS FOLLOW ***
    0x634178ac19e0 ---------B   01910 REM <FRONTIER> GOSUB
    0x634178ac1f20 ---------B B 01920 X=(RND(0)-.5)*100
    0x634178ac23f0 ---------B   01930 Y=50*RND(0)
    0x634178ac2940 ---------B   01940 IF (ABS(X)<25) AND (Y<25) THEN 1920
    0x634178ac2c20 ---------B   01950 F=1
    0x634178ac2c90 ---------B   01960 GOSUB 2190
    0x634178ac2ed0 ---------B   01970 IF F=0 THEN 1920
    0x634178ac3290 ---------B   01980 S[7,S1]=0
    0x634178ac32e0 ---------B   01990 RETURN
    0x634178ac3380 ---------C   02000 REM *** <UNDERDEVELOPED> GOSUB
    0x634178ac3660 ---------C G 02010 E=100
    0x634178ac36d0 ---------C   02020 GOSUB 2110
    0x634178ac3a70 ---------C   02030 S[7,S1]=5
    0x634178ac3ac0 ---------C   02040 RETURN
    0x634178ac3b60 ---------D   02050 REM *** <DEVELOPED> GOSUB
    0x634178ac3d80 ---------D G 02060 E=50
    0x634178ac3df0 ---------D   02070 GOSUB 2110
    0x634178ac4190 ---------D   02080 S[7,S1]=10
    0x634178ac41e0 ---------D   02090 RETURN
    0x634178ac4280 ---------E   02100 REM *** <GENERATE CO-ORDS> GOSUB
    0x634178ac47e0 ---------E B 02110 X=(RND(0)-.5)*E
    0x634178ac4cf0 ---------E   02120 Y=RND(0)*E/2
    0x634178ac4f00 ---------E   02130 F=1
    0x634178ac4f70 ---------E   02140 GOSUB 2190
    0x634178ac51b0 ---------E   02150 IF F=0 THEN 2110
    0x634178ac5210 ---------E   02160 RETURN
    0x634178ac52b0 ---------F   02170 REM *** <TEST STAR CO-ORDS> GOSUB
    0x634178ac5370 ---------F   02180 REM FIRST CONVERT CO-ORDS TO NEXT HALF-BOARD
    0x634178ac57e0 ---------F G 02190 GOTO H OF 2300,2260,2240,2200
    0x634178ac5ad0 ---------F T 02200 Z=X
    0x634178ac5d00 ---------F   02210 X=-Y
    0x634178ac5f30 ---------F   02220 Y=Z
    0x634178ac5fa0 ---------F   02230 GOTO 2300
    0x634178ac61c0 ---------F T 02240 Y=-Y
    0x634178ac6230 ---------F   02250 GOTO 2300
    0x634178ac6450 ---------F T 02260 Z=X
    0x634178ac6680 ---------F   02270 X=Y
    0x634178ab36f0 ---------F   02280 Y=Z
    0x634178ab3770 ---------F   02290 REM SECOND, TEST PROXIMITY
    0x634178ab3ba0 ---------F T 02300 FOR J=1 TO S1-1
    0x634178ac8200 ---------F   02310 IF SQR((X-S[11,J])^2+(Y-S[12,J])^2) >= D9 THEN 2340
    0x634178ac8420 ---------F   02320 F=0
    0x634178ac8470 ---------F   02330 RETURN
    0x634178ac85b0 ---------F T 02340 NEXT J
    0x634178ac8680 ---------F   02350 REM FINALLY, ENTER CO-ORDS AND INCREMENT HALF-BOARD CTR
    0x634178ac8b40 ---------F   02360 S[11,S1]=INT(X)
    0x634178ac8ff0 ---------F   02370 S[12,S1]=INT(Y)
    0x634178ac9060 ---------F   02380 REM H=1+(H <= 3)*H
    0x634178ac9540 ---------F   02381 H=MOD(1+H)
    0x634178ac9590 ---------F   02390 RETURN
    0x634178ac9650 ---------A   02400 REM *** DATA FOR ECONOMETRIC MODEL FOLLOWS ***
    0x634178ac96d0 ---------A   02410 REM MODEL #1
    0x634178aca780 ---------A   02420 DATA -0.025,-0.05,-0.025,0,-0.025,-0.025,0,.1,.1,-0.025,.1,0,.1,.2,.1,.1,-0.025,0
    0x634178acb430 ---------A   02430 DATA 1,1.5,.5,.75,.75,.75,-0.25,-0.25,-0.25,0,-0.5,.5,0,-0.5
    0x634178acb820 ---------A   02440 DATA 0,.5,1.5,0
    0x634178acb870 ---------A   02450 END
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
     01920      01400G, 01420G, 01460G, 01940T, 01970T
     02010      01440G, 01460G
     02060      01460G
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

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x634178a8a550 (00001)   0x000000000000 (00000)   0x634178acb870 (02450)   0x634178acb870 (02450)   
   B) 0x634178ac1950 (01900)   0x634178ac1f20 (01920)   0x634178ac32e0 (01990)   0x634178ac32e0 (01990)   
   C) 0x634178ac3380 (02000)   0x634178ac3660 (02010)   0x634178ac3ac0 (02040)   0x634178ac3ac0 (02040)   
   D) 0x634178ac3b60 (02050)   0x634178ac3d80 (02060)   0x634178ac41e0 (02090)   0x634178ac41e0 (02090)   
   E) 0x634178ac4280 (02100)   0x634178ac47e0 (02110)   0x634178ac5210 (02160)   0x634178ac5210 (02160)   
   F) 0x634178ac52b0 (02170)   0x634178ac57e0 (02190)   0x634178ac8470 (02330)   0x634178ac9590 (02390)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03810 - 10000    6200 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/startrader/basic/StarTrader_setup.bas'
 *
    A$              Array    String          {0,5} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B               Array    Integer         {0,9} 
    B1                       Integer     
    C               Array    Integer         {0,9} 
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D1                       Integer     
    D9                       Integer     
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G9                       Integer     
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K9                       Integer     
    L                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M               Array    Integer         {0,9} 
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    MOD             Array    Integer         {0,9} 
    OCT$            Function String          args=1, float  
    P1                       Integer     
    P9                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    R                        Integer     
    R9                       Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,9} 
    S1                       Integer     
    S9                       Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T               Array    Integer         {0,9} 
    T$              Array    String          {0,9} 
    T1                       Integer     
    T9                       Integer     
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X                        Integer     
    X1                       Integer     
    X9                       Integer     
    Y                        Integer     
    Y1                       Integer     
    Y9                       Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/startrader/basic/StarTrader_setup.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x634178a8a550 ---------A   01000  REM Written in HP Basic
    0x634178a8a610 ---------A   01010  REM From: http://www.langesite.com/startrader/
    0x634178a9ccb0 ---------A   01020 COM S[12,15],T[12,12],T$[72],B[3,12]
    0x634178a99c50 ---------A   01030 COM W,D9,K9,X9,D1,X1,P9,T9,S9,Y9,H
    0x634178aa4210 ---------A   01040 COM Y1,R9,G9,Q,M[6,3],C[6,3]
    0x634178aa4730 ---------A   01050 COM S1,T1,R
    0x634178aa4770 ---------A   01060 REM *** STAR TRADERS ***
    0x634178aa47b0 ---------A   01070 REM <<<GAME SET-UP MODULE>>>
    0x634178aa4850 ---------A   01080 REM S IS THE STAR SYSTEM INFO ARRAY
    0x634178aa48f0 ---------A   01090 REM T IS THE TRADING SHIP INFO ARRAY
    0x634178aa49a0 ---------A   01100 REM T$ IS THE TRADING SHIP NAME STRING
    0x634178aa4a60 ---------A   01110 REM M AND C DETERMINE A STAR'S PRODUCTIVITY/MONTH
    0x634178aa4b20 ---------A   01120 REM   PROD/MO. = S(7,J) * M(I,R1)  +  C(I,R1)
    0x634178aa4be0 ---------A   01130 REM   WHERE J IS THE STAR ID #,I THE MERCHANDISE #,
    0x634178aa4ca0 ---------A   01140 REM   AND R1 IS THE DEVELOPMENT CLASS OF THE STAR
    0x634178aa4d40 ---------A   01150 REM B CONTAINS THE BANK ACCOUNTS
    0x634178aa4de0 ---------A   01160 REM A$ IS THE STANDARD INPUT BUFFER
    0x634178aa50a0 ---------A   01170 DIM A$[6]
    0x634178aa5120 ---------A   01180 REM R9 IS THE SPEED OF A SHIP IN LIGHT-YEARS PER DAY
    0x634178aa51a0 ---------A   01190 REM D9 IS THE MINIMUM  DISTANCE ALLOWED BETWEEN STARS
    0x634178aa5240 ---------A   01200 REM Q IS THE PROBABILITY OF A DELAY
    0x634178aa5300 ---------A   01210 REM K9 IS THE MAX NUMBER OF BIDDING ROUNDS
    0x634178aa53c0 ---------A   01220 REM W IS THE MAX WEIGHT OF A TRADING SHIP
    0x634178aa5440 ---------A   01230 REM X9 CONTROLS THE PROFIT MARGIN; HIGH X9 LIMITS THE %
    0x634178aa54c0 ---------A   01240 REM G9 IS THE STELLAR DEVELOPMENT INCREMENT 1<=G9<=5
    0x634178aa5560 ---------A   01250 REM R=1 IF THIS IS A RESTART
    0x634178a9ad20 ---------A   01260 LET R9=2/7
    0x634178a9ae30 ---------A   01270 LET D9=15
    0x634178aa5c00 ---------A   01280 LET Q=.1
    0x634178aa5e10 ---------A   01290 LET K9=3
    0x634178aa6020 ---------A   01300 LET W=30
    0x634178aa6230 ---------A   01310 LET X9=36
    0x634178aa6440 ---------A   01320 LET G9=1.25
    0x634178aa6880 ---------A   01330 LET R=0
    0x634178aa6910 ---------A   01340 REM D1 IS THE DAY OF THIS YEAR (1<=D1<=360)
    0x634178aa6990 ---------A   01350 REM Y1 IS THIS YEAR
    0x634178aa6bb0 ---------A   01360 LET D1=1
    0x634178aa6dd0 ---------A   01370 LET Y1=2070
    0x634178aa6e50 ---------A   01380 REM SET UP ECONOMETRICS MODEL
    0x634178aa6eb0 ---------A   01390 RESTORE 3200
    0x634178aa70f0 ---------A   01400 MAT READ M,C
    0x634178aa7160 ---------A   01410 REM *** BLOCK #1
    0x634178aa7310 ---------A   01420 PRINT "INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)";
    0x634178a99840 ---------A   01430 INPUT A$
    0x634178a98600 ---------A   01440 IF A$[1,1]="N" THEN 1690
    0x634178aa7860 ---------A   01450 PRINT 
    0x634178aa7a00 ---------A   01460 PRINT "     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT"
    0x634178aa7ba0 ---------A   01470 PRINT "HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR"
    0x634178aa7d40 ---------A   01480 PRINT "SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY"
    0x634178aa7ec0 ---------A   01490 PRINT "FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED."
    0x634178aa7f60 ---------A   01500 PRINT 
    0x634178aa8100 ---------A   01510 PRINT "     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR"
    0x634178aa82a0 ---------A   01520 PRINT "TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO"
    0x634178aa8440 ---------A   01530 PRINT "STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU"
    0x634178aa85b0 ---------A   01540 PRINT "DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS."
    0x634178aa8650 ---------A   01550 PRINT 
    0x634178aa87f0 ---------A   01560 PRINT "     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY"
    0x634178aa8990 ---------A   01570 PRINT "GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT"
    0x634178aa8b30 ---------A   01580 PRINT "HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY"
    0x634178aa8ca0 ---------A   01590 PRINT "MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS."
    0x634178aa8d40 ---------A   01600 PRINT 
    0x634178aa8ee0 ---------A   01610 PRINT "     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A"
    0x634178aa9270 ---------A   01620 PRINT "WEEK AND CAN CARRY UP TO";W;" TONS OF CARGO.  ONLY"
    0x634178aa9410 ---------A   01630 PRINT "CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM."
    0x634178aa95b0 ---------A   01640 PRINT "THEY PAY 5% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE"
    0x634178aa9b40 ---------A   01650 PRINT "PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL"
    0x634178aa9c90 ---------A   01660 PRINT "BANK."
    0x634178aa9d00 ---------A   01670 PRINT 
    0x634178aa9d70 ---------A   01680 REM *** BLOCK #2
    0x634178aa9f20 ---------A T 01690 PRINT "HAVE ALL PLAYERS PLAYED BEFORE";
    0x634178a985a0 ---------A   01700 INPUT A$
    0x634178aaa0a0 ---------A   01710 PRINT 
    0x634178a996d0 ---------A   01720 IF A$[1,1]="Y" THEN 1740
    0x634178aaa4d0 ---------A   01730 GOTO 1780
    0x634178aaa640 ---------A T 01740 PRINT "DO YOU WANT TO SET UP YOUR OWN GAME";
    0x634178a99ea0 ---------A   01750 INPUT A$
    0x634178aaa7c0 ---------A   01760 PRINT 
    0x634178a99a20 ---------A   01770 IF A$[1,1]="Y" THEN 1890
    0x634178aaace0 ---------A T 01780 PRINT "HOW MANY PLAYERS";
    0x634178a99970 ---------A   01790 INPUT P9
    0x634178aaae60 ---------A   01800 PRINT 
    0x634178aab300 ---------A   01810 GOTO P9-1 OF 1840,1840,1840
    0x634178aab450 ---------A   01820 PRINT "2,3, OR 4 CAN PLAY"
    0x634178aab4c0 ---------A   01830 GOTO 1780
    0x634178aab7e0 ---------A T 01840 T9=2*P9
    0x634178aabc10 ---------A   01850 S9=3*P9+1
    0x634178aabf40 ---------A   01860 Y9=Y1+5
    0x634178aabfb0 ---------A   01870 GOTO 2620
    0x634178aac010 ---------A   01880 REM *** BLOCK #3
    0x634178aac1a0 ---------A T 01890 PRINT "IS THIS A RESTART";
    0x634178aac2f0 ---------A   01900 INPUT A$
    0x634178aac380 ---------A   01910 PRINT 
    0x634178aac7a0 ---------A   01920 IF A$[1,1]="N" THEN 2140
    0x634178aac960 ---------A   01930 PRINT "LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'"
    0x634178aacae0 ---------A   01940 PRINT "YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY"
    0x634178aacb50 ---------A   01950 PRINT 
    0x634178aaccb0 ---------A   01960 INPUT T$
    0x634178aad280 ---------A   01970 INPUT W,D9,K9,X9,D1,Y1
    0x634178aad840 ---------A   01980 INPUT P9,T9,S9,Y9,T1,S1
    0x634178aadc00 ---------A   01990 FOR J=1 TO S9
    0x634178aae080 ---------A   02000 FOR I=1 TO 9 STEP 4
    0x634178aaee80 ---------A   02010 INPUT S[I,J],S[I+1,J],S[I+2,J],S[I+3,J]
    0x634178aaefc0 ---------A   02020 NEXT I
    0x634178aaf100 ---------A   02030 NEXT J
    0x634178aaf400 ---------A   02040 FOR J=1 TO T9
    0x634178aaf7c0 ---------A   02050 FOR I=1 TO 9 STEP 4
    0x634178ab05c0 ---------A   02060 INPUT T[I,J],T[I+1,J],T[I+2,J],T[I+3,J]
    0x634178ab0700 ---------A   02070 NEXT I
    0x634178ab0840 ---------A   02080 NEXT J
    0x634178ab0b50 ---------A   02090 FOR I=1 TO P9
    0x634178ab1350 ---------A   02100 INPUT B[1,I],B[2,I],B[3,I]
    0x634178ab1490 ---------A   02110 NEXT I
    0x634178ab16b0 ---------A   02120 R=1
    0x634178ab1750 ---------A   02130 CHAIN "$TRADES"
    0x634178ab18d0 ---------A T 02140 PRINT "HOW MANY PLAYERS";
    0x634178ab1a20 ---------A   02150 INPUT P9
    0x634178ab1ab0 ---------A   02160 PRINT 
    0x634178ab1f30 ---------A   02170 IF P9 >= 2 AND P9 <= 12 THEN 2200
    0x634178ab20a0 ---------A   02180 PRINT "2,3,4, ... ,12 CAN PLAY"
    0x634178ab2120 ---------A   02190 GOTO 2140
    0x634178ab2290 ---------A T 02200 PRINT "HOW MANY SHIPS PER PLAYER";
    0x634178ab24a0 ---------A   02210 INPUT X
    0x634178ab2520 ---------A   02220 PRINT 
    0x634178ab2770 ---------A   02230 IF X<1 THEN 2200
    0x634178ab2ae0 ---------A   02240 T9=P9*X
    0x634178ab2d50 ---------A   02250 IF T9 <= 12 THEN 2290
    0x634178ab2ef0 ---------A   02260 PRINT "I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;"
    0x634178ab3440 ---------A   02270 PRINT P9;" PLAYERS TIMES";X;" SHIPS MAKES";T9
    0x634178ab34c0 ---------A   02280 GOTO 2200
    0x634178ab3e30 ---------A T 02290 PRINT "HOW MANY STAR SYSTEMS";
    0x634178ab3f80 ---------A   02300 INPUT S9
    0x634178ab4010 ---------A   02310 PRINT 
    0x634178ab4490 ---------A   02320 IF S9 >= 4 AND S9 <= 13 THEN 2350
    0x634178ab45f0 ---------A   02330 PRINT "FROM 4 TO 13 STARS"
    0x634178ab4680 ---------A   02340 GOTO 2290
    0x634178ab47f0 ---------A T 02350 PRINT "ENTER THE LENGTH OF GAME IN YEARS";
    0x634178ab4940 ---------A T 02360 INPUT X
    0x634178ab49d0 ---------A   02370 PRINT 
    0x634178ab4f50 ---------A   02380 IF X >= 1 AND INT(X)=X THEN 2410
    0x634178ab50c0 ---------A   02390 PRINT "CHOOSE A POSITIVE INTEGER"
    0x634178ab5130 ---------A   02400 GOTO 2360
    0x634178ab5490 ---------A T 02410 Y9=Y1+X
    0x634178ab5620 ---------A T 02420 PRINT "WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)";
    0x634178ab5770 ---------A   02430 INPUT W
    0x634178ab57f0 ---------A   02440 PRINT 
    0x634178ab5a70 ---------A   02450 IF W<25 THEN 2420
    0x634178ab5c10 ---------A T 02460 PRINT "WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)";
    0x634178ab5d60 ---------A   02470 INPUT D9
    0x634178ab5df0 ---------A   02480 PRINT 
    0x634178ab6270 ---------A   02490 IF D9 <= 25 AND D9 >= 10 THEN 2520
    0x634178ab63e0 ---------A   02500 PRINT "MIN SPACING 10, MAX 25"
    0x634178ab6470 ---------A   02510 GOTO 2460
    0x634178ab65e0 ---------A T 02520 PRINT "HOW MANY BIDS OR OFFERS(USUALLY 3)";
    0x634178ab6730 ---------A   02530 INPUT K9
    0x634178ab67b0 ---------A   02540 PRINT 
    0x634178ab6a30 ---------A   02550 IF K9<1 THEN 2520
    0x634178ab6be0 ---------A   02560 PRINT "SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER"
    0x634178ab6d70 ---------A   02570 PRINT "THE NUMBER, THE LOWER THE PROFIT % ... USUALLY SET TO 2"
    0x634178ab6ee0 ---------A   02580 PRINT "...YOUR NUMBER";
    0x634178ab7040 ---------A   02590 INPUT X9
    0x634178ab75c0 ---------A   02600 X9=18*(ABS(X9) MIN 5)
    0x634178ab7630 ---------A   02610 REM *** BLOCK #4.1
    0x634178ab7c30 ---------A T 02620 S[11,1]=S[12,1]=0
    0x634178ab7fc0 ---------A   02630 S[7,1]=15
    0x634178ab8030 ---------A   02640 REM *** BLOCK #4.2
    0x634178ab8250 ---------A   02650 H=1
    0x634178ab8460 ---------A   02660 S1=2
    0x634178ab84d0 ---------A   02670 GOSUB 3270
    0x634178ab86d0 ---------A   02680 S1=3
    0x634178ab8740 ---------A   02690 GOSUB 3270
    0x634178ab8940 ---------A   02700 S1=4
    0x634178ab89b0 ---------A   02710 GOSUB 3370
    0x634178ab8cb0 ---------A   02720 FOR S1=5 TO S9
    0x634178ab9590 ---------A   02730 GOSUB S1-3*INT((S1-1)/3) OF 3270,3370,3430
    0x634178ab96c0 ---------A   02740 NEXT S1
    0x634178ab9740 ---------A   02750 REM *** BLOCK #4.3
    0x634178ab9a40 ---------A   02760 FOR S1=1 TO S9
    0x634178ab9d20 ---------A   02770 FOR J=1 TO 6
    0x634178aba100 ---------A   02780 S[J,S1]=0
    0x634178aba230 ---------A   02790 NEXT J
    0x634178aba490 ---------A   02800 IF S1>1 THEN 2830
    0x634178aba6b0 ---------A   02810 I=1
    0x634178aba730 ---------A   02820 GOTO 2870
    0x634178abadf0 ---------A T 02830 I=4*INT(14*RND(0))+5
    0x634178abb1f0 ---------A   02840 FOR J=2 TO S1-1
    0x634178abb610 ---------A   02850 IF I=S[8,J] THEN 2830
    0x634178abb750 ---------A   02860 NEXT J
    0x634178abbb30 ---------A T 02870 S[8,S1]=I
    0x634178abbee0 ---------A   02880 S[9,S1]=270
    0x634178abc3b0 ---------A   02890 S[10,S1]=Y1-1
    0x634178abc4e0 ---------A   02900 NEXT S1
    0x634178abc560 ---------A   02910 REM *** BLOCK #4.4
    0x634178abc920 ---------A   02920 T1=L=1
    0x634178abc990 ---------A   02930 PRINT 
    0x634178abca30 ---------A   02940 PRINT 
    0x634178abcbb0 ---------A   02950 PRINT "CAPTAINS, NAME YOUR SHIPS (UP TO 6 LETTERS/BLANKS/NUMBERS)"
    0x634178abcfc0 ---------A   02960 FOR I=1 TO T9/P9
    0x634178abd040 ---------A   02970 PRINT 
    0x634178abd400 ---------A   02980 FOR P1=1 TO P9
    0x634178abdcc0 ---------A   02990 T[1,T1]=T[2,T1]=T[6,T1]=0
    0x634178abe070 ---------A   03000 T[3,T1]=15
    0x634178abe6a0 ---------A   03010 T[4,T1]=T[5,T1]=10
    0x634178abea50 ---------A   03020 T[7,T1]=25
    0x634178abee20 ---------A   03030 T[9,T1]=D1
    0x634178abf1f0 ---------A   03040 T[10,T1]=Y1
    0x634178abf5d0 ---------A   03050 T[11,T1]=5000
    0x634178abfa50 ---------A   03060 PRINT "   CAPTAIN";P1;"WHAT DO YOU CHRISTEN YOUR SHIP #";I;
    0x634178abfe60 ---------A   03070 INPUT T$[L,L+5]
    0x634178ac01a0 ---------A   03080 T1=T1+1
    0x634178ac04d0 ---------A   03090 L=L+6
    0x634178ac0600 ---------A   03100 NEXT P1
    0x634178ac0740 ---------A   03110 NEXT I
    0x634178ac07c0 ---------A   03120 REM *** BLOCK #4.5
    0x634178ac0b80 ---------A   03130 FOR B1=1 TO P9
    0x634178ac0f40 ---------A   03140 B[1,B1]=0
    0x634178ac1310 ---------A   03150 B[2,B1]=D1
    0x634178ac16e0 ---------A   03160 B[3,B1]=Y1
    0x634178ac1810 ---------A   03170 NEXT B1
    0x634178ac18c0 ---------A   03180 CHAIN "$TRADES"
    0x634178ac9650 ---------A   03190 REM *** DATA FOR ECONOMETRIC MODEL FOLLOWS ***
    0x634178ac96d0 ---------A   03200 REM MODEL #1
    0x634178aca780 ---------A   03210 DATA -0.025,-0.05,-0.025,0,-0.025,-0.025,0,.1,.1,-0.025,.1,0,.1,.2,.1,.1,-0.025,0
    0x634178acb430 ---------A   03220 DATA 1,1.5,.5,.75,.75,.75,-0.25,-0.25,-0.25,0,-0.5,.5,0,-0.5
    0x634178acb820 ---------A   03230 DATA 0,.5,1.5,0
    0x634178acb870 ---------A   03240 END
    0x634178ac1950 ---------B   03250 REM *** GOSUBS FOLLOW ***
    0x634178ac19e0 ---------B   03260 REM <FRONTIER> GOSUB
    0x634178ac1f20 ---------B B 03270 X=(RND(0)-.5)*100
    0x634178ac23f0 ---------B   03280 Y=50*RND(0)
    0x634178ac2940 ---------B   03290 IF (ABS(X)<25) AND (Y<25) THEN 3270
    0x634178ac2c20 ---------B   03300 F=1
    0x634178ac2c90 ---------B   03310 GOSUB 3580
    0x634178ac2ed0 ---------B   03320 IF F=0 THEN 3270
    0x634178ac3290 ---------B   03330 S[7,S1]=0
    0x634178ad2bc0 ---------B   03340 GOTO 03350
    0x634178ad2c00 ---------B T 03350 RETURN
    0x634178ac3380 ---------C   03360 REM *** <UNDERDEVELOPED> GOSUB
    0x634178ac3660 ---------C G 03370 E=100
    0x634178ac36d0 ---------C   03380 GOSUB 3490
    0x634178ac3a70 ---------C   03390 S[7,S1]=5
    0x634178ad2c40 ---------C   03400 GOTO 03410
    0x634178ad2ca0 ---------C T 03410 RETURN
    0x634178ac3b60 ---------D   03420 REM *** <DEVELOPED> GOSUB
    0x634178ac3d80 ---------D G 03430 E=50
    0x634178ac3df0 ---------D   03440 GOSUB 3490
    0x634178ac4190 ---------D   03450 S[7,S1]=10
    0x634178ad2d00 ---------D   03460 GOTO 03470
    0x634178ad2d60 ---------D T 03470 RETURN
    0x634178ac4280 ---------E   03480 REM *** <GENERATE CO-ORDS> GOSUB
    0x634178ac47e0 ---------E B 03490 X=(RND(0)-.5)*E
    0x634178ac4cf0 ---------E   03500 Y=RND(0)*E/2
    0x634178ac4f00 ---------E   03510 F=1
    0x634178ac4f70 ---------E   03520 GOSUB 3580
    0x634178ac51b0 ---------E   03530 IF F=0 THEN 3490
    0x634178ad2dc0 ---------E   03540 GOTO 03550
    0x634178ad2e20 ---------E T 03550 RETURN
    0x634178ac52b0 ---------F   03560 REM *** <TEST STAR CO-ORDS> GOSUB
    0x634178ac5370 ---------F   03570 REM FIRST CONVERT CO-ORDS TO NEXT HALF-BOARD
    0x634178ac57e0 ---------F G 03580 GOTO H OF 3690,3650,3630,3590
    0x634178ac5ad0 ---------F T 03590 Z=X
    0x634178ac5d00 ---------F   03600 X=-Y
    0x634178ac5f30 ---------F   03610 Y=Z
    0x634178ac5fa0 ---------F   03620 GOTO 3690
    0x634178ac61c0 ---------F T 03630 Y=-Y
    0x634178ac6230 ---------F   03640 GOTO 3690
    0x634178ac6450 ---------F T 03650 Z=X
    0x634178ac6680 ---------F   03660 X=Y
    0x634178ab36f0 ---------F   03670 Y=Z
    0x634178ab3770 ---------F   03680 REM SECOND, TEST PROXIMITY
    0x634178ab3ba0 ---------F T 03690 FOR J=1 TO S1-1
    0x634178ac8200 ---------F   03700 IF SQR((X-S[11,J])^2+(Y-S[12,J])^2) >= D9 THEN 3730
    0x634178ac8420 ---------F   03710 F=0
    0x634178ad23b0 ---------F   03720 GOTO 03800
    0x634178ac85b0 ---------F T 03730 NEXT J
    0x634178ac8680 ---------F   03740 REM FINALLY, ENTER CO-ORDS AND INCREMENT HALF-BOARD CTR
    0x634178ac8b40 ---------F   03750 S[11,S1]=INT(X)
    0x634178ac8ff0 ---------F   03760 S[12,S1]=INT(Y)
    0x634178ac9060 ---------F   03770 REM H=1+(H <= 3)*H
    0x634178ac9540 ---------F   03780 H=MOD(1+H)
    0x634178ad2410 ---------F   03790 GOTO 03800
    0x634178ad2470 ---------F T 03800 RETURN
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
char* data_03210s[]={"-0.025","-0.05","-0.025","0","-0.025","-0.025","0",".1",".1","-0.025",".1","0",".1",".2",".1",".1","-0.025","0"};
char* data_03220s[]={"1","1.5",".5",".75",".75",".75","-0.25","-0.25","-0.25","0","-0.5",".5","0","-0.5"};
char* data_03230s[]={"0",".5","1.5","0"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3210, 18,data_03210s},
    { 3220, 14,data_03220s},
    { 3230,  4,data_03230s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[6];                              // Basic: A$
int    B_int_arr[10];                             // Basic: B
int    B1_int;                                    // Basic: B1
int    C_int_arr[10];                             // Basic: C
int    D1_int;                                    // Basic: D1
int    D9_int;                                    // Basic: D9
int    E_int;                                     // Basic: E
int    F_int;                                     // Basic: F
int    G9_int;                                    // Basic: G9
int    H_int;                                     // Basic: H
int    I_int;                                     // Basic: I
int    J_int;                                     // Basic: J
int    K9_int;                                    // Basic: K9
int    L_int;                                     // Basic: L
int    M_int_arr[10];                             // Basic: M
int    MOD_int_arr[10];                           // Basic: MOD
int    P1_int;                                    // Basic: P1
int    P9_int;                                    // Basic: P9
int    Q_int;                                     // Basic: Q
int    R_int;                                     // Basic: R
int    R9_int;                                    // Basic: R9
int    S_int_arr[10];                             // Basic: S
int    S1_int;                                    // Basic: S1
int    S9_int;                                    // Basic: S9
int    T_int_arr[10];                             // Basic: T
char*  T_str_arr[10];                             // Basic: T$
int    T1_int;                                    // Basic: T1
int    T9_int;                                    // Basic: T9
int    W_int;                                     // Basic: W
int    X_int;                                     // Basic: X
int    X1_int;                                    // Basic: X1
int    X9_int;                                    // Basic: X9
int    Y_int;                                     // Basic: Y
int    Y1_int;                                    // Basic: Y1
int    Y9_int;                                    // Basic: Y9
int    Z_int;                                     // Basic: Z
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Frontier();
void Underdeveloped();
void Developed();
void GenCoords();
void ConvCoords();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------
    // 03250 REM *** GOSUBS FOLLOW ***
    // 03260 REM <FRONTIER> GOSUB

void Frontier(){

  Lbl_03270:
    // 03270 X=(RND(0)-.5)*100
    X_int = (RND(0)-0.5)*100;
    // 03280 Y=50*RND(0)
    Y_int = 50*RND(0);
    // 03290 IF (ABS(X)<25) AND (Y<25) THEN 3270
    if(ABS(X_int)<25&&Y_int<25)goto Lbl_03270;
    // 03300 F=1
    F_int = 1;
    // 03310 GOSUB 3580
    ConvCoords();
    // 03320 IF F=0 THEN 3270
    if(F_int==0)goto Lbl_03270;
    // 03330 S[7,S1]=0
    S_int_arr[7][S1_int] = 0;
    // 03340 GOTO 03350
    goto Lbl_03350;

  Lbl_03350:
    // 03350 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 03360 REM *** <UNDERDEVELOPED> GOSUB

void Underdeveloped(){
    // 03370 E=100
    E_int = 100;
    // 03380 GOSUB 3490
    GenCoords();
    // 03390 S[7,S1]=5
    S_int_arr[7][S1_int] = 5;
    // 03400 GOTO 03410
    goto Lbl_03410;

  Lbl_03410:
    // 03410 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------
    // 03420 REM *** <DEVELOPED> GOSUB

void Developed(){
    // 03430 E=50
    E_int = 50;
    // 03440 GOSUB 3490
    GenCoords();
    // 03450 S[7,S1]=10
    S_int_arr[7][S1_int] = 10;
    // 03460 GOTO 03470
    goto Lbl_03470;

  Lbl_03470:
    // 03470 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------
    // 03480 REM *** <GENERATE CO-ORDS> GOSUB

void GenCoords(){

  Lbl_03490:
    // 03490 X=(RND(0)-.5)*E
    X_int = (RND(0)-0.5)*E_int;
    // 03500 Y=RND(0)*E/2
    Y_int = RND(0)*E_int/2;
    // 03510 F=1
    F_int = 1;
    // 03520 GOSUB 3580
    ConvCoords();
    // 03530 IF F=0 THEN 3490
    if(F_int==0)goto Lbl_03490;
    // 03540 GOTO 03550
    goto Lbl_03550;

  Lbl_03550:
    // 03550 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------
    // 03560 REM *** <TEST STAR CO-ORDS> GOSUB
    // 03570 REM FIRST CONVERT CO-ORDS TO NEXT HALF-BOARD

void ConvCoords(){
    // 03580 GOTO H OF 3690,3650,3630,3590
    switch((int)(H_int)){
        case 1: goto Lbl_03690;
        case 2: goto Lbl_03650;
        case 3: goto Lbl_03630;
        case 4: goto Lbl_03590;
        default: break; 
    };

  Lbl_03590:
    // 03590 Z=X
    Z_int = X_int;
    // 03600 X=-Y
    X_int = Y_int;
    // 03610 Y=Z
    Y_int = Z_int;
    // 03620 GOTO 3690
    goto Lbl_03690;

  Lbl_03630:
    // 03630 Y=-Y
    Y_int = Y_int;
    // 03640 GOTO 3690
    goto Lbl_03690;

  Lbl_03650:
    // 03650 Z=X
    Z_int = X_int;
    // 03660 X=Y
    X_int = Y_int;
    // 03670 Y=Z
    Y_int = Z_int;
    // 03680 REM SECOND, TEST PROXIMITY

  Lbl_03690:
    // 03690 FOR J=1 TO S1-1
    for(J_int=1;J_int<=S1_int-1;J_int++){
        // 03700 IF SQR((X-S[11,J])^2+(Y-S[12,J])^2) >= D9 THEN 3730
        if(SQR(IPower((X_int-S_int_arr[11][J_int]),2)+IPower((Y_int-S_int_arr[12][J_int]),2))>=D9_int)goto Lbl_03730;
        // 03710 F=0
        F_int = 0;
        // 03720 GOTO 03800
        goto Lbl_03800;

  Lbl_03730:
        // 03730 NEXT J
        int dummy_3730=0; // Ignore this line.
    }; // End-For(J_int)
    // 03740 REM FINALLY, ENTER CO-ORDS AND INCREMENT HALF-BOARD CTR
    // 03750 S[11,S1]=INT(X)
    S_int_arr[11][S1_int] = INT(X_int);
    // 03760 S[12,S1]=INT(Y)
    S_int_arr[12][S1_int] = INT(Y_int);
    // 03770 REM H=1+(H <= 3)*H
    // 03780 H=MOD(1+H)
    H_int = MOD_int_arr[1+H_int];
    // 03790 GOTO 03800
    goto Lbl_03800;

  Lbl_03800:
    // 03800 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    LoadCommonAreas("CommonArea.bin");
    // 01000  REM Written in HP Basic
    // 01010  REM From: http://www.langesite.com/startrader/
    // 01020 COM S[12,15],T[12,12],T$[72],B[3,12]
    // 01030 COM W,D9,K9,X9,D1,X1,P9,T9,S9,Y9,H
    // 01040 COM Y1,R9,G9,Q,M[6,3],C[6,3]
    // 01050 COM S1,T1,R
    // 01060 REM *** STAR TRADERS ***
    // 01070 REM <<<GAME SET-UP MODULE>>>
    // 01080 REM S IS THE STAR SYSTEM INFO ARRAY
    // 01090 REM T IS THE TRADING SHIP INFO ARRAY
    // 01100 REM T$ IS THE TRADING SHIP NAME STRING
    // 01110 REM M AND C DETERMINE A STAR'S PRODUCTIVITY/MONTH
    // 01120 REM   PROD/MO. = S(7,J) * M(I,R1)  +  C(I,R1)
    // 01130 REM   WHERE J IS THE STAR ID #,I THE MERCHANDISE #,
    // 01140 REM   AND R1 IS THE DEVELOPMENT CLASS OF THE STAR
    // 01150 REM B CONTAINS THE BANK ACCOUNTS
    // 01160 REM A$ IS THE STANDARD INPUT BUFFER
    // 01170 DIM A$[6]
    // 01180 REM R9 IS THE SPEED OF A SHIP IN LIGHT-YEARS PER DAY
    // 01190 REM D9 IS THE MINIMUM  DISTANCE ALLOWED BETWEEN STARS
    // 01200 REM Q IS THE PROBABILITY OF A DELAY
    // 01210 REM K9 IS THE MAX NUMBER OF BIDDING ROUNDS
    // 01220 REM W IS THE MAX WEIGHT OF A TRADING SHIP
    // 01230 REM X9 CONTROLS THE PROFIT MARGIN; HIGH X9 LIMITS THE %
    // 01240 REM G9 IS THE STELLAR DEVELOPMENT INCREMENT 1<=G9<=5
    // 01250 REM R=1 IF THIS IS A RESTART
    // 01260 LET R9=2/7
    R9_int = 2/7;
    // 01270 LET D9=15
    D9_int = 15;
    // 01280 LET Q=.1
    Q_int = 0.1;
    // 01290 LET K9=3
    K9_int = 3;
    // 01300 LET W=30
    W_int = 30;
    // 01310 LET X9=36
    X9_int = 36;
    // 01320 LET G9=1.25
    G9_int = 1.25;
    // 01330 LET R=0
    R_int = 0;
    // 01340 REM D1 IS THE DAY OF THIS YEAR (1<=D1<=360)
    // 01350 REM Y1 IS THIS YEAR
    // 01360 LET D1=1
    D1_int = 1;
    // 01370 LET Y1=2070
    Y1_int = 2070;
    // 01380 REM SET UP ECONOMETRICS MODEL
    // 01390 RESTORE 3200
    Data_Index=0;
    RestoreData(3200);
    // 01400 MAT READ M,C
    for(int d0=0;d0<=9;d0++){
        M_int_arr[d0] = Get_Data_Int();
    }
    for(int d0=0;d0<=9;d0++){
        C_int_arr[d0] = Get_Data_Int();
    }
    // 01410 REM *** BLOCK #1
    // 01420 PRINT "INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)";
    b2c_printf("INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)");
    // 01430 INPUT A$
    // Start of Basic INPUT statement 01430
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01430
    // 01440 IF A$[1,1]="N" THEN 1690
    if(strcmp(A_str_arr[1][1],"N")==0)goto Lbl_01690;
    // 01450 PRINT 
    b2c_printf("\n");
    // 01460 PRINT "     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT"
    b2c_printf("     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT\n");
    // 01470 PRINT "HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR"
    b2c_printf("HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR\n");
    // 01480 PRINT "SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY"
    b2c_printf("SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY\n");
    // 01490 PRINT "FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED."
    b2c_printf("FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED.\n");
    // 01500 PRINT 
    b2c_printf("\n");
    // 01510 PRINT "     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR"
    b2c_printf("     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR\n");
    // 01520 PRINT "TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO"
    b2c_printf("TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO\n");
    // 01530 PRINT "STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU"
    b2c_printf("STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU\n");
    // 01540 PRINT "DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS."
    b2c_printf("DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS.\n");
    // 01550 PRINT 
    b2c_printf("\n");
    // 01560 PRINT "     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY"
    b2c_printf("     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY\n");
    // 01570 PRINT "GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT"
    b2c_printf("GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT\n");
    // 01580 PRINT "HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY"
    b2c_printf("HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY\n");
    // 01590 PRINT "MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS."
    b2c_printf("MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS.\n");
    // 01600 PRINT 
    b2c_printf("\n");
    // 01610 PRINT "     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A"
    b2c_printf("     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A\n");
    // 01620 PRINT "WEEK AND CAN CARRY UP TO";W;" TONS OF CARGO.  ONLY"
    b2c_printf("WEEK AND CAN CARRY UP TO %d  TONS OF CARGO.  ONLY\n",W_int);
    // 01630 PRINT "CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM."
    b2c_printf("CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM.\n");
    // 01640 PRINT "THEY PAY 5% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE"
    b2c_printf("THEY PAY 5%% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE\n");
    // 01650 PRINT "PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL"
    b2c_printf("PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL\n");
    // 01660 PRINT "BANK."
    b2c_printf("BANK.\n");
    // 01670 PRINT 
    b2c_printf("\n");
    // 01680 REM *** BLOCK #2

  Lbl_01690:
    // 01690 PRINT "HAVE ALL PLAYERS PLAYED BEFORE";
    b2c_printf("HAVE ALL PLAYERS PLAYED BEFORE");
    // 01700 INPUT A$
    // Start of Basic INPUT statement 01700
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01700
    // 01710 PRINT 
    b2c_printf("\n");
    // 01720 IF A$[1,1]="Y" THEN 1740
    if(strcmp(A_str_arr[1][1],"Y")==0)goto Lbl_01740;
    // 01730 GOTO 1780
    goto Lbl_01780;

  Lbl_01740:
    // 01740 PRINT "DO YOU WANT TO SET UP YOUR OWN GAME";
    b2c_printf("DO YOU WANT TO SET UP YOUR OWN GAME");
    // 01750 INPUT A$
    // Start of Basic INPUT statement 01750
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01750
    // 01760 PRINT 
    b2c_printf("\n");
    // 01770 IF A$[1,1]="Y" THEN 1890
    if(strcmp(A_str_arr[1][1],"Y")==0)goto Lbl_01890;

  Lbl_01780:
    // 01780 PRINT "HOW MANY PLAYERS";
    b2c_printf("HOW MANY PLAYERS");
    // 01790 INPUT P9
    // Start of Basic INPUT statement 01790
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01790
    // 01800 PRINT 
    b2c_printf("\n");
    // 01810 GOTO P9-1 OF 1840,1840,1840
    switch((int)(P9_int-1)){
        case 1: goto Lbl_01840;
        case 2: goto Lbl_01840;
        case 3: goto Lbl_01840;
        default: break; 
    };
    // 01820 PRINT "2,3, OR 4 CAN PLAY"
    b2c_printf("2,3, OR 4 CAN PLAY\n");
    // 01830 GOTO 1780
    goto Lbl_01780;

  Lbl_01840:
    // 01840 T9=2*P9
    T9_int = 2*P9_int;
    // 01850 S9=3*P9+1
    S9_int = 3*P9_int+1;
    // 01860 Y9=Y1+5
    Y9_int = Y1_int+5;
    // 01870 GOTO 2620
    goto Lbl_02620;
    // 01880 REM *** BLOCK #3

  Lbl_01890:
    // 01890 PRINT "IS THIS A RESTART";
    b2c_printf("IS THIS A RESTART");
    // 01900 INPUT A$
    // Start of Basic INPUT statement 01900
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01900
    // 01910 PRINT 
    b2c_printf("\n");
    // 01920 IF A$[1,1]="N" THEN 2140
    if(strcmp(A_str_arr[1][1],"N")==0)goto Lbl_02140;
    // 01930 PRINT "LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'"
    b2c_printf("LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'\n");
    // 01940 PRINT "YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY"
    b2c_printf("YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY\n");
    // 01950 PRINT 
    b2c_printf("\n");
    // 01960 INPUT T$
    // Start of Basic INPUT statement 01960
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&T_str_arr,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01960
    // 01970 INPUT W,D9,K9,X9,D1,Y1
    // Start of Basic INPUT statement 01970
    {
        int numargs=6;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&W_int,args,0)) ||
                (err += b2c_strtoi(&D9_int,args,1)) ||
                (err += b2c_strtoi(&K9_int,args,2)) ||
                (err += b2c_strtoi(&X9_int,args,3)) ||
                (err += b2c_strtoi(&D1_int,args,4)) ||
                (err += b2c_strtoi(&Y1_int,args,5)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01970
    // 01980 INPUT P9,T9,S9,Y9,T1,S1
    // Start of Basic INPUT statement 01980
    {
        int numargs=6;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P9_int,args,0)) ||
                (err += b2c_strtoi(&T9_int,args,1)) ||
                (err += b2c_strtoi(&S9_int,args,2)) ||
                (err += b2c_strtoi(&Y9_int,args,3)) ||
                (err += b2c_strtoi(&T1_int,args,4)) ||
                (err += b2c_strtoi(&S1_int,args,5)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01980
    // 01990 FOR J=1 TO S9
    for(J_int=1;J_int<=S9_int;J_int++){
        // 02000 FOR I=1 TO 9 STEP 4
        for(I_int=1;I_int<=9;I_int+=4){
            // 02010 INPUT S[I,J],S[I+1,J],S[I+2,J],S[I+3,J]
            // Start of Basic INPUT statement 02010
            {
                int numargs=4;
                char *args[numargs+1];
                bool echoeol=true;
                while(true){
                    fprintf(stdout," ? ");
                    int err=input(args,numargs,echoeol);
                    if(err==0x03) break;
                    if(err || 
                        (err += b2c_strtoi(&S_int_arr[I_int][J_int],args,0)) ||
                        (err += b2c_strtoi(&S_int_arr[I_int+1][J_int],args,1)) ||
                        (err += b2c_strtoi(&S_int_arr[I_int+2][J_int],args,2)) ||
                        (err += b2c_strtoi(&S_int_arr[I_int+3][J_int],args,3)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 02010
            // 02020 NEXT I
            int dummy_2020=0; // Ignore this line.
        }; // End-For(I_int)
        // 02030 NEXT J
        int dummy_2030=0; // Ignore this line.
    }; // End-For(J_int)
    // 02040 FOR J=1 TO T9
    for(J_int=1;J_int<=T9_int;J_int++){
        // 02050 FOR I=1 TO 9 STEP 4
        for(I_int=1;I_int<=9;I_int+=4){
            // 02060 INPUT T[I,J],T[I+1,J],T[I+2,J],T[I+3,J]
            // Start of Basic INPUT statement 02060
            {
                int numargs=4;
                char *args[numargs+1];
                bool echoeol=true;
                while(true){
                    fprintf(stdout," ? ");
                    int err=input(args,numargs,echoeol);
                    if(err==0x03) break;
                    if(err || 
                        (err += b2c_strtoi(&T_int_arr[I_int][J_int],args,0)) ||
                        (err += b2c_strtoi(&T_int_arr[I_int+1][J_int],args,1)) ||
                        (err += b2c_strtoi(&T_int_arr[I_int+2][J_int],args,2)) ||
                        (err += b2c_strtoi(&T_int_arr[I_int+3][J_int],args,3)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 02060
            // 02070 NEXT I
            int dummy_2070=0; // Ignore this line.
        }; // End-For(I_int)
        // 02080 NEXT J
        int dummy_2080=0; // Ignore this line.
    }; // End-For(J_int)
    // 02090 FOR I=1 TO P9
    for(I_int=1;I_int<=P9_int;I_int++){
        // 02100 INPUT B[1,I],B[2,I],B[3,I]
        // Start of Basic INPUT statement 02100
        {
            int numargs=3;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&B_int_arr[1][I_int],args,0)) ||
                    (err += b2c_strtoi(&B_int_arr[2][I_int],args,1)) ||
                    (err += b2c_strtoi(&B_int_arr[3][I_int],args,2)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 02100
        // 02110 NEXT I
        int dummy_2110=0; // Ignore this line.
    }; // End-For(I_int)
    // 02120 R=1
    R_int = 1;
    // 02130 CHAIN "$TRADES"
    SaveCommonAreas("CommonArea.bin");
    b2c_chain("$TRADES",-1);

  Lbl_02140:
    // 02140 PRINT "HOW MANY PLAYERS";
    b2c_printf("HOW MANY PLAYERS");
    // 02150 INPUT P9
    // Start of Basic INPUT statement 02150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02150
    // 02160 PRINT 
    b2c_printf("\n");
    // 02170 IF P9 >= 2 AND P9 <= 12 THEN 2200
    if(P9_int>=2&&P9_int<=12)goto Lbl_02200;
    // 02180 PRINT "2,3,4, ... ,12 CAN PLAY"
    b2c_printf("2,3,4, ... ,12 CAN PLAY\n");
    // 02190 GOTO 2140
    goto Lbl_02140;

  Lbl_02200:
    // 02200 PRINT "HOW MANY SHIPS PER PLAYER";
    b2c_printf("HOW MANY SHIPS PER PLAYER");
    // 02210 INPUT X
    // Start of Basic INPUT statement 02210
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02210
    // 02220 PRINT 
    b2c_printf("\n");
    // 02230 IF X<1 THEN 2200
    if(X_int<1)goto Lbl_02200;
    // 02240 T9=P9*X
    T9_int = P9_int*X_int;
    // 02250 IF T9 <= 12 THEN 2290
    if(T9_int<=12)goto Lbl_02290;
    // 02260 PRINT "I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;"
    b2c_printf("I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;\n");
    // 02270 PRINT P9;" PLAYERS TIMES";X;" SHIPS MAKES";T9
    b2c_printf(" %d  PLAYERS TIMES %d  SHIPS MAKES %d \n",P9_int,X_int,T9_int);
    // 02280 GOTO 2200
    goto Lbl_02200;

  Lbl_02290:
    // 02290 PRINT "HOW MANY STAR SYSTEMS";
    b2c_printf("HOW MANY STAR SYSTEMS");
    // 02300 INPUT S9
    // Start of Basic INPUT statement 02300
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02300
    // 02310 PRINT 
    b2c_printf("\n");
    // 02320 IF S9 >= 4 AND S9 <= 13 THEN 2350
    if(S9_int>=4&&S9_int<=13)goto Lbl_02350;
    // 02330 PRINT "FROM 4 TO 13 STARS"
    b2c_printf("FROM 4 TO 13 STARS\n");
    // 02340 GOTO 2290
    goto Lbl_02290;

  Lbl_02350:
    // 02350 PRINT "ENTER THE LENGTH OF GAME IN YEARS";
    b2c_printf("ENTER THE LENGTH OF GAME IN YEARS");

  Lbl_02360:
    // 02360 INPUT X
    // Start of Basic INPUT statement 02360
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02360
    // 02370 PRINT 
    b2c_printf("\n");
    // 02380 IF X >= 1 AND INT(X)=X THEN 2410
    if(X_int>=1&&INT(X_int)==X_int)goto Lbl_02410;
    // 02390 PRINT "CHOOSE A POSITIVE INTEGER"
    b2c_printf("CHOOSE A POSITIVE INTEGER\n");
    // 02400 GOTO 2360
    goto Lbl_02360;

  Lbl_02410:
    // 02410 Y9=Y1+X
    Y9_int = Y1_int+X_int;

  Lbl_02420:
    // 02420 PRINT "WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)";
    b2c_printf("WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)");
    // 02430 INPUT W
    // Start of Basic INPUT statement 02430
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&W_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02430
    // 02440 PRINT 
    b2c_printf("\n");
    // 02450 IF W<25 THEN 2420
    if(W_int<25)goto Lbl_02420;

  Lbl_02460:
    // 02460 PRINT "WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)";
    b2c_printf("WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)");
    // 02470 INPUT D9
    // Start of Basic INPUT statement 02470
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02470
    // 02480 PRINT 
    b2c_printf("\n");
    // 02490 IF D9 <= 25 AND D9 >= 10 THEN 2520
    if(D9_int<=25&&D9_int>=10)goto Lbl_02520;
    // 02500 PRINT "MIN SPACING 10, MAX 25"
    b2c_printf("MIN SPACING 10, MAX 25\n");
    // 02510 GOTO 2460
    goto Lbl_02460;

  Lbl_02520:
    // 02520 PRINT "HOW MANY BIDS OR OFFERS(USUALLY 3)";
    b2c_printf("HOW MANY BIDS OR OFFERS(USUALLY 3)");
    // 02530 INPUT K9
    // Start of Basic INPUT statement 02530
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&K9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02530
    // 02540 PRINT 
    b2c_printf("\n");
    // 02550 IF K9<1 THEN 2520
    if(K9_int<1)goto Lbl_02520;
    // 02560 PRINT "SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER"
    b2c_printf("SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER\n");
    // 02570 PRINT "THE NUMBER, THE LOWER THE PROFIT % ... USUALLY SET TO 2"
    b2c_printf("THE NUMBER, THE LOWER THE PROFIT %% ... USUALLY SET TO 2\n");
    // 02580 PRINT "...YOUR NUMBER";
    b2c_printf("...YOUR NUMBER");
    // 02590 INPUT X9
    // Start of Basic INPUT statement 02590
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02590
    // 02600 X9=18*(ABS(X9) MIN 5)
    X9_int = 18*(ABS(X9_int));
    // 02610 REM *** BLOCK #4.1

  Lbl_02620:
    // 02620 S[11,1]=S[12,1]=0
    S_int_arr[12][1] = S_int_arr[11][1] = 0;
    // 02630 S[7,1]=15
    S_int_arr[7][1] = 15;
    // 02640 REM *** BLOCK #4.2
    // 02650 H=1
    H_int = 1;
    // 02660 S1=2
    S1_int = 2;
    // 02670 GOSUB 3270
    Frontier();
    // 02680 S1=3
    S1_int = 3;
    // 02690 GOSUB 3270
    Frontier();
    // 02700 S1=4
    S1_int = 4;
    // 02710 GOSUB 3370
    Underdeveloped();
    // 02720 FOR S1=5 TO S9
    for(S1_int=5;S1_int<=S9_int;S1_int++){
        // 02730 GOSUB S1-3*INT((S1-1)/3) OF 3270,3370,3430
        switch((int)(S1_int-3*INT((S1_int-1)/3))){
            case 1: Frontier(); break;
            case 2: Underdeveloped(); break;
            case 3: Developed(); break;
            default: break; 
        };
        // 02740 NEXT S1
        int dummy_2740=0; // Ignore this line.
    }; // End-For(S1_int)
    // 02750 REM *** BLOCK #4.3
    // 02760 FOR S1=1 TO S9
    for(S1_int=1;S1_int<=S9_int;S1_int++){
        // 02770 FOR J=1 TO 6
        for(J_int=1;J_int<=6;J_int++){
            // 02780 S[J,S1]=0
            S_int_arr[J_int][S1_int] = 0;
            // 02790 NEXT J
            int dummy_2790=0; // Ignore this line.
        }; // End-For(J_int)
        // 02800 IF S1>1 THEN 2830
        if(S1_int>1)goto Lbl_02830;
        // 02810 I=1
        I_int = 1;
        // 02820 GOTO 2870
        goto Lbl_02870;

  Lbl_02830:
        // 02830 I=4*INT(14*RND(0))+5
        I_int = 4*INT(14*RND(0))+5;
        // 02840 FOR J=2 TO S1-1
        for(J_int=2;J_int<=S1_int-1;J_int++){
            // 02850 IF I=S[8,J] THEN 2830
            if(I_int==S_int_arr[8][J_int])goto Lbl_02830;
            // 02860 NEXT J
            int dummy_2860=0; // Ignore this line.
        }; // End-For(J_int)

  Lbl_02870:
        // 02870 S[8,S1]=I
        S_int_arr[8][S1_int] = I_int;
        // 02880 S[9,S1]=270
        S_int_arr[9][S1_int] = 270;
        // 02890 S[10,S1]=Y1-1
        S_int_arr[10][S1_int] = Y1_int-1;
        // 02900 NEXT S1
        int dummy_2900=0; // Ignore this line.
    }; // End-For(S1_int)
    // 02910 REM *** BLOCK #4.4
    // 02920 T1=L=1
    L_int = T1_int = 1;
    // 02930 PRINT 
    b2c_printf("\n");
    // 02940 PRINT 
    b2c_printf("\n");
    // 02950 PRINT "CAPTAINS, NAME YOUR SHIPS (UP TO 6 LETTERS/BLANKS/NUMBERS)"
    b2c_printf("CAPTAINS, NAME YOUR SHIPS (UP TO 6 LETTERS/BLANKS/NUMBERS)\n");
    // 02960 FOR I=1 TO T9/P9
    for(I_int=1;I_int<=T9_int/P9_int;I_int++){
        // 02970 PRINT 
        b2c_printf("\n");
        // 02980 FOR P1=1 TO P9
        for(P1_int=1;P1_int<=P9_int;P1_int++){
            // 02990 T[1,T1]=T[2,T1]=T[6,T1]=0
            T_int_arr[6][T1_int] = T_int_arr[2][T1_int] = T_int_arr[1][T1_int] = 0;
            // 03000 T[3,T1]=15
            T_int_arr[3][T1_int] = 15;
            // 03010 T[4,T1]=T[5,T1]=10
            T_int_arr[5][T1_int] = T_int_arr[4][T1_int] = 10;
            // 03020 T[7,T1]=25
            T_int_arr[7][T1_int] = 25;
            // 03030 T[9,T1]=D1
            T_int_arr[9][T1_int] = D1_int;
            // 03040 T[10,T1]=Y1
            T_int_arr[10][T1_int] = Y1_int;
            // 03050 T[11,T1]=5000
            T_int_arr[11][T1_int] = 5000;
            // 03060 PRINT "   CAPTAIN";P1;"WHAT DO YOU CHRISTEN YOUR SHIP #";I;
            b2c_printf("   CAPTAIN %d WHAT DO YOU CHRISTEN YOUR SHIP # %d ",P1_int,I_int);
            // 03070 INPUT T$[L,L+5]
            // Start of Basic INPUT statement 03070
            {
                int numargs=1;
                char *args[numargs+1];
                bool echoeol=true;
                while(true){
                    fprintf(stdout," ? ");
                    int err=input(args,numargs,echoeol);
                    if(err==0x03) break;
                    if(err || 
                        (err += b2c_strtos(&T_str_arr[L_int][L_int+5],args,0)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 03070
            // 03080 T1=T1+1
            T1_int = T1_int+1;
            // 03090 L=L+6
            L_int = L_int+6;
            // 03100 NEXT P1
            int dummy_3100=0; // Ignore this line.
        }; // End-For(P1_int)
        // 03110 NEXT I
        int dummy_3110=0; // Ignore this line.
    }; // End-For(I_int)
    // 03120 REM *** BLOCK #4.5
    // 03130 FOR B1=1 TO P9
    for(B1_int=1;B1_int<=P9_int;B1_int++){
        // 03140 B[1,B1]=0
        B_int_arr[1][B1_int] = 0;
        // 03150 B[2,B1]=D1
        B_int_arr[2][B1_int] = D1_int;
        // 03160 B[3,B1]=Y1
        B_int_arr[3][B1_int] = Y1_int;
        // 03170 NEXT B1
        int dummy_3170=0; // Ignore this line.
    }; // End-For(B1_int)
    // 03180 CHAIN "$TRADES"
    SaveCommonAreas("CommonArea.bin");
    b2c_chain("$TRADES",-1);
    // 03190 REM *** DATA FOR ECONOMETRIC MODEL FOLLOWS ***
    // 03200 REM MODEL #1
    // 03210 DATA -0.025,-0.05,-0.025,0,-0.025,-0.025,0,.1,.1,-0.025,.1,0,.1,.2,.1,.1,-0.025,0
    // 03220 DATA 1,1.5,.5,.75,.75,.75,-0.25,-0.25,-0.25,0,-0.5,.5,0,-0.5
    // 03230 DATA 0,.5,1.5,0
    // 03240 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
