/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/StarTrader_setup.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ca3ea3f8550 ---------A   00001  REM Written in HP Basic
    0x5ca3ea3f8610 ---------A   00002  REM From: http://www.langesite.com/startrader/
    0x5ca3ea40bf70 ---------A   00010 COM S[12,15],T[12,12],T$[72],B[3,12]
    0x5ca3ea407760 ---------A   00020 COM W,D9,K9,X9,D1,X1,P9,T9,S9,Y9,H
    0x5ca3ea4130d0 ---------A   00030 COM Y1,R9,G9,Q,M[6,3],C[6,3]
    0x5ca3ea4135f0 ---------A   00035 COM S1,T1,R
    0x5ca3ea413630 ---------A   00040 REM *** STAR TRADERS ***
    0x5ca3ea413670 ---------A   00050 REM <<<GAME SET-UP MODULE>>>
    0x5ca3ea413710 ---------A   00060 REM S IS THE STAR SYSTEM INFO ARRAY
    0x5ca3ea4137b0 ---------A   00070 REM T IS THE TRADING SHIP INFO ARRAY
    0x5ca3ea413860 ---------A   00080 REM T$ IS THE TRADING SHIP NAME STRING
    0x5ca3ea413920 ---------A   00090 REM M AND C DETERMINE A STAR'S PRODUCTIVITY/MONTH
    0x5ca3ea4139e0 ---------A   00092 REM   PROD/MO. = S(7,J) * M(I,R1)  +  C(I,R1)
    0x5ca3ea413aa0 ---------A   00094 REM   WHERE J IS THE STAR ID #,I THE MERCHANDISE #,
    0x5ca3ea413b60 ---------A   00096 REM   AND R1 IS THE DEVELOPMENT CLASS OF THE STAR
    0x5ca3ea413c00 ---------A   00100 REM B CONTAINS THE BANK ACCOUNTS
    0x5ca3ea413ca0 ---------A   00110 REM A$ IS THE STANDARD INPUT BUFFER
    0x5ca3ea413f60 ---------A   00120 DIM A$[6]
    0x5ca3ea413fe0 ---------A   00130 REM R9 IS THE SPEED OF A SHIP IN LIGHT-YEARS PER DAY
    0x5ca3ea414060 ---------A   00140 REM D9 IS THE MINIMUM  DISTANCE ALLOWED BETWEEN STARS
    0x5ca3ea414100 ---------A   00150 REM Q IS THE PROBABILITY OF A DELAY
    0x5ca3ea4141c0 ---------A   00160 REM K9 IS THE MAX NUMBER OF BIDDING ROUNDS
    0x5ca3ea414280 ---------A   00170 REM W IS THE MAX WEIGHT OF A TRADING SHIP
    0x5ca3ea414300 ---------A   00180 REM X9 CONTROLS THE PROFIT MARGIN; HIGH X9 LIMITS THE %
    0x5ca3ea414380 ---------A   00190 REM G9 IS THE STELLAR DEVELOPMENT INCREMENT 1<=G9<=5
    0x5ca3ea414420 ---------A   00195 REM R=1 IF THIS IS A RESTART
    0x5ca3ea40a030 ---------A   00200 LET R9=2/7
    0x5ca3ea40a0f0 ---------A   00210 LET D9=15
    0x5ca3ea414ac0 ---------A   00220 LET Q=.1
    0x5ca3ea414cd0 ---------A   00230 LET K9=3
    0x5ca3ea414ee0 ---------A   00240 LET W=30
    0x5ca3ea4150f0 ---------A   00250 LET X9=36
    0x5ca3ea415300 ---------A   00260 LET G9=1.25
    0x5ca3ea415740 ---------A   00265 LET R=0
    0x5ca3ea4157d0 ---------A   00270 REM D1 IS THE DAY OF THIS YEAR (1<=D1<=360)
    0x5ca3ea415850 ---------A   00280 REM Y1 IS THIS YEAR
    0x5ca3ea415a70 ---------A   00290 LET D1=1
    0x5ca3ea415c90 ---------A   00300 LET Y1=2070
    0x5ca3ea415d10 ---------A   00302 REM SET UP ECONOMETRICS MODEL
    0x5ca3ea415d70 ---------A   00304 RESTORE 2410
    0x5ca3ea415fb0 ---------A   00306 MAT READ M,C
    0x5ca3ea416020 ---------A   00310 REM *** BLOCK #1
    0x5ca3ea4161d0 ---------A   00320 PRINT "INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)";
    0x5ca3ea407610 ---------A   00330 INPUT A$
    0x5ca3ea4075b0 ---------A   00340 IF A$[1,1]="N" THEN 590
    0x5ca3ea416720 ---------A   00350 PRINT 
    0x5ca3ea4168c0 ---------A   00360 PRINT "     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT"
    0x5ca3ea416a60 ---------A   00370 PRINT "HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR"
    0x5ca3ea416c00 ---------A   00380 PRINT "SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY"
    0x5ca3ea416d80 ---------A   00390 PRINT "FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED."
    0x5ca3ea416e20 ---------A   00400 PRINT 
    0x5ca3ea416fc0 ---------A   00410 PRINT "     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR"
    0x5ca3ea417160 ---------A   00420 PRINT "TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO"
    0x5ca3ea417300 ---------A   00430 PRINT "STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU"
    0x5ca3ea417470 ---------A   00440 PRINT "DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS."
    0x5ca3ea417510 ---------A   00450 PRINT 
    0x5ca3ea4176b0 ---------A   00460 PRINT "     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY"
    0x5ca3ea417850 ---------A   00470 PRINT "GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT"
    0x5ca3ea4179f0 ---------A   00480 PRINT "HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY"
    0x5ca3ea417b60 ---------A   00490 PRINT "MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS."
    0x5ca3ea417c00 ---------A   00500 PRINT 
    0x5ca3ea417da0 ---------A   00510 PRINT "     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A"
    0x5ca3ea418130 ---------A   00520 PRINT "WEEK AND CAN CARRY UP TO";W;" TONS OF CARGO.  ONLY"
    0x5ca3ea4182d0 ---------A   00530 PRINT "CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM."
    0x5ca3ea418470 ---------A   00540 PRINT "THEY PAY 5% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE"
    0x5ca3ea418a00 ---------A   00550 PRINT "PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL"
    0x5ca3ea418b50 ---------A   00560 PRINT "BANK."
    0x5ca3ea418bc0 ---------A   00570 PRINT 
    0x5ca3ea418c30 ---------A   00580 REM *** BLOCK #2
    0x5ca3ea418de0 ---------A T 00590 PRINT "HAVE ALL PLAYERS PLAYED BEFORE";
    0x5ca3ea418f30 ---------A   00600 INPUT A$
    0x5ca3ea418fc0 ---------A   00605 PRINT 
    0x5ca3ea4193b0 ---------A   00610 IF A$[1,1]="Y" THEN 630
    0x5ca3ea419450 ---------A   00620 GOTO 660
    0x5ca3ea4195c0 ---------A T 00630 PRINT "DO YOU WANT TO SET UP YOUR OWN GAME";
    0x5ca3ea419710 ---------A   00640 INPUT A$
    0x5ca3ea4197a0 ---------A   00645 PRINT 
    0x5ca3ea419ba0 ---------A   00650 IF A$[1,1]="Y" THEN 760
    0x5ca3ea419d20 ---------A T 00660 PRINT "HOW MANY PLAYERS";
    0x5ca3ea419e70 ---------A   00670 INPUT P9
    0x5ca3ea419f00 ---------A   00675 PRINT 
    0x5ca3ea41a3a0 ---------A   00680 GOTO P9-1 OF 710,710,710
    0x5ca3ea41a4f0 ---------A   00690 PRINT "2,3, OR 4 CAN PLAY"
    0x5ca3ea41a560 ---------A   00700 GOTO 660
    0x5ca3ea41a880 ---------A T 00710 T9=2*P9
    0x5ca3ea41acb0 ---------A   00720 S9=3*P9+1
    0x5ca3ea41afe0 ---------A   00730 Y9=Y1+5
    0x5ca3ea41b050 ---------A   00740 GOTO 1350
    0x5ca3ea41b0b0 ---------A   00750 REM *** BLOCK #3
    0x5ca3ea41b240 ---------A T 00760 PRINT "IS THIS A RESTART";
    0x5ca3ea41b390 ---------A   00770 INPUT A$
    0x5ca3ea41b420 ---------A   00775 PRINT 
    0x5ca3ea41b840 ---------A   00780 IF A$[1,1]="N" THEN 940
    0x5ca3ea41ba00 ---------A   00790 PRINT "LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'"
    0x5ca3ea41bb80 ---------A   00800 PRINT "YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY"
    0x5ca3ea41bbf0 ---------A   00810 PRINT 
    0x5ca3ea41bd50 ---------A   00820 INPUT T$
    0x5ca3ea41c320 ---------A   00830 INPUT W,D9,K9,X9,D1,Y1
    0x5ca3ea41c8e0 ---------A   00835 INPUT P9,T9,S9,Y9,T1,S1
    0x5ca3ea41cca0 ---------A   00840 FOR J=1 TO S9
    0x5ca3ea41d120 ---------A   00845 FOR I=1 TO 9 STEP 4
    0x5ca3ea41df20 ---------A   00850 INPUT S[I,J],S[I+1,J],S[I+2,J],S[I+3,J]
    0x5ca3ea41e060 ---------A   00855 NEXT I
    0x5ca3ea41e1a0 ---------A   00860 NEXT J
    0x5ca3ea41e4a0 ---------A   00870 FOR J=1 TO T9
    0x5ca3ea41e860 ---------A   00875 FOR I=1 TO 9 STEP 4
    0x5ca3ea41f660 ---------A   00880 INPUT T[I,J],T[I+1,J],T[I+2,J],T[I+3,J]
    0x5ca3ea41f7a0 ---------A   00885 NEXT I
    0x5ca3ea41f8e0 ---------A   00890 NEXT J
    0x5ca3ea41fbf0 ---------A   00900 FOR I=1 TO P9
    0x5ca3ea4203f0 ---------A   00910 INPUT B[1,I],B[2,I],B[3,I]
    0x5ca3ea420530 ---------A   00920 NEXT I
    0x5ca3ea420750 ---------A   00925 R=1
    0x5ca3ea4207f0 ---------A   00930 CHAIN "$TRADES"
    0x5ca3ea420970 ---------A T 00940 PRINT "HOW MANY PLAYERS";
    0x5ca3ea420ac0 ---------A   00950 INPUT P9
    0x5ca3ea420b50 ---------A   00955 PRINT 
    0x5ca3ea420fd0 ---------A   00960 IF P9 >= 2 AND P9 <= 12 THEN 990
    0x5ca3ea421140 ---------A   00970 PRINT "2,3,4, ... ,12 CAN PLAY"
    0x5ca3ea4211c0 ---------A   00980 GOTO 940
    0x5ca3ea421330 ---------A T 00990 PRINT "HOW MANY SHIPS PER PLAYER";
    0x5ca3ea421540 ---------A   01000 INPUT X
    0x5ca3ea4215c0 ---------A   01005 PRINT 
    0x5ca3ea421810 ---------A   01010 IF X<1 THEN 990
    0x5ca3ea421b80 ---------A   01020 T9=P9*X
    0x5ca3ea421df0 ---------A   01030 IF T9 <= 12 THEN 1070
    0x5ca3ea421f90 ---------A   01040 PRINT "I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;"
    0x5ca3ea4224e0 ---------A   01050 PRINT P9;" PLAYERS TIMES";X;" SHIPS MAKES";T9
    0x5ca3ea422560 ---------A   01060 GOTO 990
    0x5ca3ea422ed0 ---------A T 01070 PRINT "HOW MANY STAR SYSTEMS";
    0x5ca3ea423020 ---------A   01080 INPUT S9
    0x5ca3ea4230b0 ---------A   01085 PRINT 
    0x5ca3ea423530 ---------A   01090 IF S9 >= 4 AND S9 <= 13 THEN 1120
    0x5ca3ea423690 ---------A   01100 PRINT "FROM 4 TO 13 STARS"
    0x5ca3ea423720 ---------A   01110 GOTO 1070
    0x5ca3ea423890 ---------A T 01120 PRINT "ENTER THE LENGTH OF GAME IN YEARS";
    0x5ca3ea4239e0 ---------A T 01130 INPUT X
    0x5ca3ea423a70 ---------A   01135 PRINT 
    0x5ca3ea423ff0 ---------A   01140 IF X >= 1 AND INT(X)=X THEN 1170
    0x5ca3ea424160 ---------A   01150 PRINT "CHOOSE A POSITIVE INTEGER"
    0x5ca3ea4241d0 ---------A   01160 GOTO 1130
    0x5ca3ea424530 ---------A T 01170 Y9=Y1+X
    0x5ca3ea4246c0 ---------A T 01180 PRINT "WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)";
    0x5ca3ea424810 ---------A   01190 INPUT W
    0x5ca3ea424890 ---------A   01195 PRINT 
    0x5ca3ea424b10 ---------A   01200 IF W<25 THEN 1180
    0x5ca3ea424cb0 ---------A T 01210 PRINT "WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)";
    0x5ca3ea424e00 ---------A   01220 INPUT D9
    0x5ca3ea424e90 ---------A   01225 PRINT 
    0x5ca3ea425310 ---------A   01230 IF D9 <= 25 AND D9 >= 10 THEN 1260
    0x5ca3ea425480 ---------A   01240 PRINT "MIN SPACING 10, MAX 25"
    0x5ca3ea425510 ---------A   01250 GOTO 1210
    0x5ca3ea425680 ---------A T 01260 PRINT "HOW MANY BIDS OR OFFERS(USUALLY 3)";
    0x5ca3ea4257d0 ---------A   01270 INPUT K9
    0x5ca3ea425850 ---------A   01275 PRINT 
    0x5ca3ea425ad0 ---------A   01280 IF K9<1 THEN 1260
    0x5ca3ea425c80 ---------A   01290 PRINT "SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER"
    0x5ca3ea425e10 ---------A   01300 PRINT "THE NUMBER, THE LOWER THE PROFIT % ... USUALLY SET TO 2"
    0x5ca3ea425f80 ---------A   01310 PRINT "...YOUR NUMBER";
    0x5ca3ea4260e0 ---------A   01320 INPUT X9
    0x5ca3ea426660 ---------A   01330 X9=18*(ABS(X9) MIN 5)
    0x5ca3ea4266d0 ---------A   01340 REM *** BLOCK #4.1
    0x5ca3ea426cd0 ---------A T 01350 S[11,1]=S[12,1]=0
    0x5ca3ea427060 ---------A   01360 S[7,1]=15
    0x5ca3ea4270d0 ---------A   01370 REM *** BLOCK #4.2
    0x5ca3ea4272f0 ---------A   01380 H=1
    0x5ca3ea427500 ---------A   01390 S1=2
    0x5ca3ea427570 ---------A   01400 GOSUB 1920
    0x5ca3ea427770 ---------A   01410 S1=3
    0x5ca3ea4277e0 ---------A   01420 GOSUB 1920
    0x5ca3ea4279e0 ---------A   01430 S1=4
    0x5ca3ea427a50 ---------A   01440 GOSUB 2010
    0x5ca3ea427d50 ---------A   01450 FOR S1=5 TO S9
    0x5ca3ea428630 ---------A   01460 GOSUB S1-3*INT((S1-1)/3) OF 1920,2010,2060
    0x5ca3ea428760 ---------A   01470 NEXT S1
    0x5ca3ea4287e0 ---------A   01480 REM *** BLOCK #4.3
    0x5ca3ea428ae0 ---------A   01490 FOR S1=1 TO S9
    0x5ca3ea428dc0 ---------A   01500 FOR J=1 TO 6
    0x5ca3ea4291a0 ---------A   01510 S[J,S1]=0
    0x5ca3ea4292d0 ---------A   01520 NEXT J
    0x5ca3ea429530 ---------A   01530 IF S1>1 THEN 1560
    0x5ca3ea429750 ---------A   01540 I=1
    0x5ca3ea4297d0 ---------A   01550 GOTO 1600
    0x5ca3ea429e90 ---------A T 01560 I=4*INT(14*RND(0))+5
    0x5ca3ea42a290 ---------A   01570 FOR J=2 TO S1-1
    0x5ca3ea42a6b0 ---------A   01580 IF I=S[8,J] THEN 1560
    0x5ca3ea42a7f0 ---------A   01590 NEXT J
    0x5ca3ea42abd0 ---------A T 01600 S[8,S1]=I
    0x5ca3ea42af80 ---------A   01610 S[9,S1]=270
    0x5ca3ea42b450 ---------A   01620 S[10,S1]=Y1-1
    0x5ca3ea42b580 ---------A   01630 NEXT S1
    0x5ca3ea42b600 ---------A   01640 REM *** BLOCK #4.4
    0x5ca3ea42b9c0 ---------A   01650 T1=L=1
    0x5ca3ea42ba30 ---------A   01655 PRINT 
    0x5ca3ea42bad0 ---------A   01657 PRINT 
    0x5ca3ea42bc50 ---------A   01660 PRINT "CAPTAINS, NAME YOUR SHIPS (UP TO 6 LETTERS/BLANKS/NUMBERS)"
    0x5ca3ea42c060 ---------A   01670 FOR I=1 TO T9/P9
    0x5ca3ea42c0e0 ---------A   01680 PRINT 
    0x5ca3ea42c4a0 ---------A   01690 FOR P1=1 TO P9
    0x5ca3ea42cd60 ---------A   01700 T[1,T1]=T[2,T1]=T[6,T1]=0
    0x5ca3ea42d110 ---------A   01710 T[3,T1]=15
    0x5ca3ea42d740 ---------A   01720 T[4,T1]=T[5,T1]=10
    0x5ca3ea42daf0 ---------A   01730 T[7,T1]=25
    0x5ca3ea42dec0 ---------A   01740 T[9,T1]=D1
    0x5ca3ea42e290 ---------A   01750 T[10,T1]=Y1
    0x5ca3ea42e670 ---------A   01760 T[11,T1]=5000
    0x5ca3ea42eaf0 ---------A   01770 PRINT "   CAPTAIN";P1;"WHAT DO YOU CHRISTEN YOUR SHIP #";I;
    0x5ca3ea42ef00 ---------A   01780 INPUT T$[L,L+5]
    0x5ca3ea42f240 ---------A   01790 T1=T1+1
    0x5ca3ea42f570 ---------A   01800 L=L+6
    0x5ca3ea42f6a0 ---------A   01810 NEXT P1
    0x5ca3ea42f7e0 ---------A   01820 NEXT I
    0x5ca3ea42f860 ---------A   01830 REM *** BLOCK #4.5
    0x5ca3ea42fc20 ---------A   01840 FOR B1=1 TO P9
    0x5ca3ea42ffe0 ---------A   01850 B[1,B1]=0
    0x5ca3ea4303b0 ---------A   01860 B[2,B1]=D1
    0x5ca3ea430780 ---------A   01870 B[3,B1]=Y1
    0x5ca3ea4308b0 ---------A   01880 NEXT B1
    0x5ca3ea430960 ---------A   01890 CHAIN "$TRADES"
    0x5ca3ea4309f0 ---------B   01900 REM *** GOSUBS FOLLOW ***
    0x5ca3ea430a80 ---------B   01910 REM <FRONTIER> GOSUB
    0x5ca3ea430fc0 ---------B B 01920 X=(RND(0)-.5)*100
    0x5ca3ea431490 ---------B   01930 Y=50*RND(0)
    0x5ca3ea4319e0 ---------B   01940 IF (ABS(X)<25) AND (Y<25) THEN 1920
    0x5ca3ea431cc0 ---------B   01950 F=1
    0x5ca3ea431d30 ---------B   01960 GOSUB 2190
    0x5ca3ea431f70 ---------B   01970 IF F=0 THEN 1920
    0x5ca3ea432330 ---------B   01980 S[7,S1]=0
    0x5ca3ea432380 ---------B   01990 RETURN
    0x5ca3ea432420 ---------C   02000 REM *** <UNDERDEVELOPED> GOSUB
    0x5ca3ea432700 ---------C G 02010 E=100
    0x5ca3ea432770 ---------C   02020 GOSUB 2110
    0x5ca3ea432b10 ---------C   02030 S[7,S1]=5
    0x5ca3ea432b60 ---------C   02040 RETURN
    0x5ca3ea432c00 ---------D   02050 REM *** <DEVELOPED> GOSUB
    0x5ca3ea432e20 ---------D G 02060 E=50
    0x5ca3ea432e90 ---------D   02070 GOSUB 2110
    0x5ca3ea433230 ---------D   02080 S[7,S1]=10
    0x5ca3ea433280 ---------D   02090 RETURN
    0x5ca3ea433320 ---------E   02100 REM *** <GENERATE CO-ORDS> GOSUB
    0x5ca3ea433880 ---------E B 02110 X=(RND(0)-.5)*E
    0x5ca3ea433d90 ---------E   02120 Y=RND(0)*E/2
    0x5ca3ea433fa0 ---------E   02130 F=1
    0x5ca3ea434010 ---------E   02140 GOSUB 2190
    0x5ca3ea434250 ---------E   02150 IF F=0 THEN 2110
    0x5ca3ea4342b0 ---------E   02160 RETURN
    0x5ca3ea434350 ---------F   02170 REM *** <TEST STAR CO-ORDS> GOSUB
    0x5ca3ea434410 ---------F   02180 REM FIRST CONVERT CO-ORDS TO NEXT HALF-BOARD
    0x5ca3ea434880 ---------F G 02190 GOTO H OF 2300,2260,2240,2200
    0x5ca3ea434b70 ---------F T 02200 Z=X
    0x5ca3ea434da0 ---------F   02210 X=-Y
    0x5ca3ea434fd0 ---------F   02220 Y=Z
    0x5ca3ea435040 ---------F   02230 GOTO 2300
    0x5ca3ea435260 ---------F T 02240 Y=-Y
    0x5ca3ea4352d0 ---------F   02250 GOTO 2300
    0x5ca3ea4354f0 ---------F T 02260 Z=X
    0x5ca3ea435720 ---------F   02270 X=Y
    0x5ca3ea422790 ---------F   02280 Y=Z
    0x5ca3ea422810 ---------F   02290 REM SECOND, TEST PROXIMITY
    0x5ca3ea422c40 ---------F T 02300 FOR J=1 TO S1-1
    0x5ca3ea4372a0 ---------F   02310 IF SQR((X-S[11,J])^2+(Y-S[12,J])^2) >= D9 THEN 2340
    0x5ca3ea4374c0 ---------F   02320 F=0
    0x5ca3ea437510 ---------F   02330 RETURN
    0x5ca3ea437650 ---------F T 02340 NEXT J
    0x5ca3ea437720 ---------F   02350 REM FINALLY, ENTER CO-ORDS AND INCREMENT HALF-BOARD CTR
    0x5ca3ea437be0 ---------F   02360 S[11,S1]=INT(X)
    0x5ca3ea438090 ---------F   02370 S[12,S1]=INT(Y)
    0x5ca3ea438100 ---------F   02380 REM H=1+(H <= 3)*H
    0x5ca3ea4385e0 ---------F   02381 H=MOD(1+H)
    0x5ca3ea438630 ---------F   02390 RETURN
    0x5ca3ea4386f0 ---------A   02400 REM *** DATA FOR ECONOMETRIC MODEL FOLLOWS ***
    0x5ca3ea438770 ---------A   02410 REM MODEL #1
    0x5ca3ea439820 ---------A   02420 DATA -0.025,-0.05,-0.025,0,-0.025,-0.025,0,.1,.1,-0.025,.1,0,.1,.2,.1,.1,-0.025,0
    0x5ca3ea43a4d0 ---------A   02430 DATA 1,1.5,.5,.75,.75,.75,-0.25,-0.25,-0.25,0,-0.5,.5,0,-0.5
    0x5ca3ea43a8c0 ---------A   02440 DATA 0,.5,1.5,0
    0x5ca3ea43a910 ---------A   02450 END
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
   A) 0x5ca3ea3f8550 (00001)   0x000000000000 (00000)   0x5ca3ea43a910 (02450)   0x5ca3ea43a910 (02450)   
   B) 0x5ca3ea4309f0 (01900)   0x5ca3ea430fc0 (01920)   0x5ca3ea432380 (01990)   0x5ca3ea432380 (01990)   
   C) 0x5ca3ea432420 (02000)   0x5ca3ea432700 (02010)   0x5ca3ea432b60 (02040)   0x5ca3ea432b60 (02040)   
   D) 0x5ca3ea432c00 (02050)   0x5ca3ea432e20 (02060)   0x5ca3ea433280 (02090)   0x5ca3ea433280 (02090)   
   E) 0x5ca3ea433320 (02100)   0x5ca3ea433880 (02110)   0x5ca3ea4342b0 (02160)   0x5ca3ea4342b0 (02160)   
   F) 0x5ca3ea434350 (02170)   0x5ca3ea434880 (02190)   0x5ca3ea437510 (02330)   0x5ca3ea438630 (02390)   

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
 *  Symbol Table Listing for 'basic/StarTrader_setup.bas'
 *
    A$              Array    String          {0,5} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B               Array    Float           {0,2} {0,11} 
    B1                       Float       
    C               Array    Float           {0,5} {0,2} 
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D1                       Float       
    D9                       Float       
    E                        Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Float       
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G9                       Float       
    H                        Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    K9                       Float       
    L                        Float       
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M               Array    Float           {0,5} {0,2} 
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    MOD             Array    Float           {0,9} 
    OCT$            Function String          args=1, float  
    P1                       Float       
    P9                       Float       
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Float       
    R                        Float       
    R9                       Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Float           {0,11} {0,14} 
    S1                       Float       
    S9                       Float       
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T               Array    Float           {0,11} {0,11} 
    T$              Array    String          {0,71} 
    T1                       Float       
    T9                       Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Float       
    X                        Float       
    X1                       Float       
    X9                       Float       
    Y                        Float       
    Y1                       Float       
    Y9                       Float       
    Z                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/StarTrader_setup.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ca3ea3f8550 ---------A   01000  REM Written in HP Basic
    0x5ca3ea3f8610 ---------A   01010  REM From: http://www.langesite.com/startrader/
    0x5ca3ea40bf70 ---------A   01020 COM S[12,15],T[12,12],T$[72],B[3,12]
    0x5ca3ea407760 ---------A   01030 COM W,D9,K9,X9,D1,X1,P9,T9,S9,Y9,H
    0x5ca3ea4130d0 ---------A   01040 COM Y1,R9,G9,Q,M[6,3],C[6,3]
    0x5ca3ea4135f0 ---------A   01050 COM S1,T1,R
    0x5ca3ea413630 ---------A   01060 REM *** STAR TRADERS ***
    0x5ca3ea413670 ---------A   01070 REM <<<GAME SET-UP MODULE>>>
    0x5ca3ea413710 ---------A   01080 REM S IS THE STAR SYSTEM INFO ARRAY
    0x5ca3ea4137b0 ---------A   01090 REM T IS THE TRADING SHIP INFO ARRAY
    0x5ca3ea413860 ---------A   01100 REM T$ IS THE TRADING SHIP NAME STRING
    0x5ca3ea413920 ---------A   01110 REM M AND C DETERMINE A STAR'S PRODUCTIVITY/MONTH
    0x5ca3ea4139e0 ---------A   01120 REM   PROD/MO. = S(7,J) * M(I,R1)  +  C(I,R1)
    0x5ca3ea413aa0 ---------A   01130 REM   WHERE J IS THE STAR ID #,I THE MERCHANDISE #,
    0x5ca3ea413b60 ---------A   01140 REM   AND R1 IS THE DEVELOPMENT CLASS OF THE STAR
    0x5ca3ea413c00 ---------A   01150 REM B CONTAINS THE BANK ACCOUNTS
    0x5ca3ea413ca0 ---------A   01160 REM A$ IS THE STANDARD INPUT BUFFER
    0x5ca3ea413f60 ---------A   01170 DIM A$[6]
    0x5ca3ea413fe0 ---------A   01180 REM R9 IS THE SPEED OF A SHIP IN LIGHT-YEARS PER DAY
    0x5ca3ea414060 ---------A   01190 REM D9 IS THE MINIMUM  DISTANCE ALLOWED BETWEEN STARS
    0x5ca3ea414100 ---------A   01200 REM Q IS THE PROBABILITY OF A DELAY
    0x5ca3ea4141c0 ---------A   01210 REM K9 IS THE MAX NUMBER OF BIDDING ROUNDS
    0x5ca3ea414280 ---------A   01220 REM W IS THE MAX WEIGHT OF A TRADING SHIP
    0x5ca3ea414300 ---------A   01230 REM X9 CONTROLS THE PROFIT MARGIN; HIGH X9 LIMITS THE %
    0x5ca3ea414380 ---------A   01240 REM G9 IS THE STELLAR DEVELOPMENT INCREMENT 1<=G9<=5
    0x5ca3ea414420 ---------A   01250 REM R=1 IF THIS IS A RESTART
    0x5ca3ea40a030 ---------A   01260 LET R9=2/7
    0x5ca3ea40a0f0 ---------A   01270 LET D9=15
    0x5ca3ea414ac0 ---------A   01280 LET Q=.1
    0x5ca3ea414cd0 ---------A   01290 LET K9=3
    0x5ca3ea414ee0 ---------A   01300 LET W=30
    0x5ca3ea4150f0 ---------A   01310 LET X9=36
    0x5ca3ea415300 ---------A   01320 LET G9=1.25
    0x5ca3ea415740 ---------A   01330 LET R=0
    0x5ca3ea4157d0 ---------A   01340 REM D1 IS THE DAY OF THIS YEAR (1<=D1<=360)
    0x5ca3ea415850 ---------A   01350 REM Y1 IS THIS YEAR
    0x5ca3ea415a70 ---------A   01360 LET D1=1
    0x5ca3ea415c90 ---------A   01370 LET Y1=2070
    0x5ca3ea415d10 ---------A   01380 REM SET UP ECONOMETRICS MODEL
    0x5ca3ea415d70 ---------A   01390 RESTORE 3200
    0x5ca3ea415fb0 ---------A   01400 MAT READ M,C
    0x5ca3ea416020 ---------A   01410 REM *** BLOCK #1
    0x5ca3ea4161d0 ---------A   01420 PRINT "INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)";
    0x5ca3ea407610 ---------A   01430 INPUT A$
    0x5ca3ea4075b0 ---------A   01440 IF A$[1,1]="N" THEN 1690
    0x5ca3ea416720 ---------A   01450 PRINT 
    0x5ca3ea4168c0 ---------A   01460 PRINT "     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT"
    0x5ca3ea416a60 ---------A   01470 PRINT "HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR"
    0x5ca3ea416c00 ---------A   01480 PRINT "SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY"
    0x5ca3ea416d80 ---------A   01490 PRINT "FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED."
    0x5ca3ea416e20 ---------A   01500 PRINT 
    0x5ca3ea416fc0 ---------A   01510 PRINT "     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR"
    0x5ca3ea417160 ---------A   01520 PRINT "TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO"
    0x5ca3ea417300 ---------A   01530 PRINT "STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU"
    0x5ca3ea417470 ---------A   01540 PRINT "DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS."
    0x5ca3ea417510 ---------A   01550 PRINT 
    0x5ca3ea4176b0 ---------A   01560 PRINT "     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY"
    0x5ca3ea417850 ---------A   01570 PRINT "GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT"
    0x5ca3ea4179f0 ---------A   01580 PRINT "HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY"
    0x5ca3ea417b60 ---------A   01590 PRINT "MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS."
    0x5ca3ea417c00 ---------A   01600 PRINT 
    0x5ca3ea417da0 ---------A   01610 PRINT "     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A"
    0x5ca3ea418130 ---------A   01620 PRINT "WEEK AND CAN CARRY UP TO";W;" TONS OF CARGO.  ONLY"
    0x5ca3ea4182d0 ---------A   01630 PRINT "CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM."
    0x5ca3ea418470 ---------A   01640 PRINT "THEY PAY 5% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE"
    0x5ca3ea418a00 ---------A   01650 PRINT "PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL"
    0x5ca3ea418b50 ---------A   01660 PRINT "BANK."
    0x5ca3ea418bc0 ---------A   01670 PRINT 
    0x5ca3ea418c30 ---------A   01680 REM *** BLOCK #2
    0x5ca3ea418de0 ---------A T 01690 PRINT "HAVE ALL PLAYERS PLAYED BEFORE";
    0x5ca3ea418f30 ---------A   01700 INPUT A$
    0x5ca3ea418fc0 ---------A   01710 PRINT 
    0x5ca3ea4193b0 ---------A   01720 IF A$[1,1]="Y" THEN 1740
    0x5ca3ea419450 ---------A   01730 GOTO 1780
    0x5ca3ea4195c0 ---------A T 01740 PRINT "DO YOU WANT TO SET UP YOUR OWN GAME";
    0x5ca3ea419710 ---------A   01750 INPUT A$
    0x5ca3ea4197a0 ---------A   01760 PRINT 
    0x5ca3ea419ba0 ---------A   01770 IF A$[1,1]="Y" THEN 1890
    0x5ca3ea419d20 ---------A T 01780 PRINT "HOW MANY PLAYERS";
    0x5ca3ea419e70 ---------A   01790 INPUT P9
    0x5ca3ea419f00 ---------A   01800 PRINT 
    0x5ca3ea41a3a0 ---------A   01810 GOTO P9-1 OF 1840,1840,1840
    0x5ca3ea41a4f0 ---------A   01820 PRINT "2,3, OR 4 CAN PLAY"
    0x5ca3ea41a560 ---------A   01830 GOTO 1780
    0x5ca3ea41a880 ---------A T 01840 T9=2*P9
    0x5ca3ea41acb0 ---------A   01850 S9=3*P9+1
    0x5ca3ea41afe0 ---------A   01860 Y9=Y1+5
    0x5ca3ea41b050 ---------A   01870 GOTO 2620
    0x5ca3ea41b0b0 ---------A   01880 REM *** BLOCK #3
    0x5ca3ea41b240 ---------A T 01890 PRINT "IS THIS A RESTART";
    0x5ca3ea41b390 ---------A   01900 INPUT A$
    0x5ca3ea41b420 ---------A   01910 PRINT 
    0x5ca3ea41b840 ---------A   01920 IF A$[1,1]="N" THEN 2140
    0x5ca3ea41ba00 ---------A   01930 PRINT "LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'"
    0x5ca3ea41bb80 ---------A   01940 PRINT "YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY"
    0x5ca3ea41bbf0 ---------A   01950 PRINT 
    0x5ca3ea41bd50 ---------A   01960 INPUT T$
    0x5ca3ea41c320 ---------A   01970 INPUT W,D9,K9,X9,D1,Y1
    0x5ca3ea41c8e0 ---------A   01980 INPUT P9,T9,S9,Y9,T1,S1
    0x5ca3ea41cca0 ---------A   01990 FOR J=1 TO S9
    0x5ca3ea41d120 ---------A   02000 FOR I=1 TO 9 STEP 4
    0x5ca3ea41df20 ---------A   02010 INPUT S[I,J],S[I+1,J],S[I+2,J],S[I+3,J]
    0x5ca3ea41e060 ---------A   02020 NEXT I
    0x5ca3ea41e1a0 ---------A   02030 NEXT J
    0x5ca3ea41e4a0 ---------A   02040 FOR J=1 TO T9
    0x5ca3ea41e860 ---------A   02050 FOR I=1 TO 9 STEP 4
    0x5ca3ea41f660 ---------A   02060 INPUT T[I,J],T[I+1,J],T[I+2,J],T[I+3,J]
    0x5ca3ea41f7a0 ---------A   02070 NEXT I
    0x5ca3ea41f8e0 ---------A   02080 NEXT J
    0x5ca3ea41fbf0 ---------A   02090 FOR I=1 TO P9
    0x5ca3ea4203f0 ---------A   02100 INPUT B[1,I],B[2,I],B[3,I]
    0x5ca3ea420530 ---------A   02110 NEXT I
    0x5ca3ea420750 ---------A   02120 R=1
    0x5ca3ea4207f0 ---------A   02130 CHAIN "$TRADES"
    0x5ca3ea420970 ---------A T 02140 PRINT "HOW MANY PLAYERS";
    0x5ca3ea420ac0 ---------A   02150 INPUT P9
    0x5ca3ea420b50 ---------A   02160 PRINT 
    0x5ca3ea420fd0 ---------A   02170 IF P9 >= 2 AND P9 <= 12 THEN 2200
    0x5ca3ea421140 ---------A   02180 PRINT "2,3,4, ... ,12 CAN PLAY"
    0x5ca3ea4211c0 ---------A   02190 GOTO 2140
    0x5ca3ea421330 ---------A T 02200 PRINT "HOW MANY SHIPS PER PLAYER";
    0x5ca3ea421540 ---------A   02210 INPUT X
    0x5ca3ea4215c0 ---------A   02220 PRINT 
    0x5ca3ea421810 ---------A   02230 IF X<1 THEN 2200
    0x5ca3ea421b80 ---------A   02240 T9=P9*X
    0x5ca3ea421df0 ---------A   02250 IF T9 <= 12 THEN 2290
    0x5ca3ea421f90 ---------A   02260 PRINT "I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;"
    0x5ca3ea4224e0 ---------A   02270 PRINT P9;" PLAYERS TIMES";X;" SHIPS MAKES";T9
    0x5ca3ea422560 ---------A   02280 GOTO 2200
    0x5ca3ea422ed0 ---------A T 02290 PRINT "HOW MANY STAR SYSTEMS";
    0x5ca3ea423020 ---------A   02300 INPUT S9
    0x5ca3ea4230b0 ---------A   02310 PRINT 
    0x5ca3ea423530 ---------A   02320 IF S9 >= 4 AND S9 <= 13 THEN 2350
    0x5ca3ea423690 ---------A   02330 PRINT "FROM 4 TO 13 STARS"
    0x5ca3ea423720 ---------A   02340 GOTO 2290
    0x5ca3ea423890 ---------A T 02350 PRINT "ENTER THE LENGTH OF GAME IN YEARS";
    0x5ca3ea4239e0 ---------A T 02360 INPUT X
    0x5ca3ea423a70 ---------A   02370 PRINT 
    0x5ca3ea423ff0 ---------A   02380 IF X >= 1 AND INT(X)=X THEN 2410
    0x5ca3ea424160 ---------A   02390 PRINT "CHOOSE A POSITIVE INTEGER"
    0x5ca3ea4241d0 ---------A   02400 GOTO 2360
    0x5ca3ea424530 ---------A T 02410 Y9=Y1+X
    0x5ca3ea4246c0 ---------A T 02420 PRINT "WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)";
    0x5ca3ea424810 ---------A   02430 INPUT W
    0x5ca3ea424890 ---------A   02440 PRINT 
    0x5ca3ea424b10 ---------A   02450 IF W<25 THEN 2420
    0x5ca3ea424cb0 ---------A T 02460 PRINT "WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)";
    0x5ca3ea424e00 ---------A   02470 INPUT D9
    0x5ca3ea424e90 ---------A   02480 PRINT 
    0x5ca3ea425310 ---------A   02490 IF D9 <= 25 AND D9 >= 10 THEN 2520
    0x5ca3ea425480 ---------A   02500 PRINT "MIN SPACING 10, MAX 25"
    0x5ca3ea425510 ---------A   02510 GOTO 2460
    0x5ca3ea425680 ---------A T 02520 PRINT "HOW MANY BIDS OR OFFERS(USUALLY 3)";
    0x5ca3ea4257d0 ---------A   02530 INPUT K9
    0x5ca3ea425850 ---------A   02540 PRINT 
    0x5ca3ea425ad0 ---------A   02550 IF K9<1 THEN 2520
    0x5ca3ea425c80 ---------A   02560 PRINT "SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER"
    0x5ca3ea425e10 ---------A   02570 PRINT "THE NUMBER, THE LOWER THE PROFIT % ... USUALLY SET TO 2"
    0x5ca3ea425f80 ---------A   02580 PRINT "...YOUR NUMBER";
    0x5ca3ea4260e0 ---------A   02590 INPUT X9
    0x5ca3ea426660 ---------A   02600 X9=18*(ABS(X9) MIN 5)
    0x5ca3ea4266d0 ---------A   02610 REM *** BLOCK #4.1
    0x5ca3ea426cd0 ---------A T 02620 S[11,1]=S[12,1]=0
    0x5ca3ea427060 ---------A   02630 S[7,1]=15
    0x5ca3ea4270d0 ---------A   02640 REM *** BLOCK #4.2
    0x5ca3ea4272f0 ---------A   02650 H=1
    0x5ca3ea427500 ---------A   02660 S1=2
    0x5ca3ea427570 ---------A   02670 GOSUB 3270
    0x5ca3ea427770 ---------A   02680 S1=3
    0x5ca3ea4277e0 ---------A   02690 GOSUB 3270
    0x5ca3ea4279e0 ---------A   02700 S1=4
    0x5ca3ea427a50 ---------A   02710 GOSUB 3370
    0x5ca3ea427d50 ---------A   02720 FOR S1=5 TO S9
    0x5ca3ea428630 ---------A   02730 GOSUB S1-3*INT((S1-1)/3) OF 3270,3370,3430
    0x5ca3ea428760 ---------A   02740 NEXT S1
    0x5ca3ea4287e0 ---------A   02750 REM *** BLOCK #4.3
    0x5ca3ea428ae0 ---------A   02760 FOR S1=1 TO S9
    0x5ca3ea428dc0 ---------A   02770 FOR J=1 TO 6
    0x5ca3ea4291a0 ---------A   02780 S[J,S1]=0
    0x5ca3ea4292d0 ---------A   02790 NEXT J
    0x5ca3ea429530 ---------A   02800 IF S1>1 THEN 2830
    0x5ca3ea429750 ---------A   02810 I=1
    0x5ca3ea4297d0 ---------A   02820 GOTO 2870
    0x5ca3ea429e90 ---------A T 02830 I=4*INT(14*RND(0))+5
    0x5ca3ea42a290 ---------A   02840 FOR J=2 TO S1-1
    0x5ca3ea42a6b0 ---------A   02850 IF I=S[8,J] THEN 2830
    0x5ca3ea42a7f0 ---------A   02860 NEXT J
    0x5ca3ea42abd0 ---------A T 02870 S[8,S1]=I
    0x5ca3ea42af80 ---------A   02880 S[9,S1]=270
    0x5ca3ea42b450 ---------A   02890 S[10,S1]=Y1-1
    0x5ca3ea42b580 ---------A   02900 NEXT S1
    0x5ca3ea42b600 ---------A   02910 REM *** BLOCK #4.4
    0x5ca3ea42b9c0 ---------A   02920 T1=L=1
    0x5ca3ea42ba30 ---------A   02930 PRINT 
    0x5ca3ea42bad0 ---------A   02940 PRINT 
    0x5ca3ea42bc50 ---------A   02950 PRINT "CAPTAINS, NAME YOUR SHIPS (UP TO 6 LETTERS/BLANKS/NUMBERS)"
    0x5ca3ea42c060 ---------A   02960 FOR I=1 TO T9/P9
    0x5ca3ea42c0e0 ---------A   02970 PRINT 
    0x5ca3ea42c4a0 ---------A   02980 FOR P1=1 TO P9
    0x5ca3ea42cd60 ---------A   02990 T[1,T1]=T[2,T1]=T[6,T1]=0
    0x5ca3ea42d110 ---------A   03000 T[3,T1]=15
    0x5ca3ea42d740 ---------A   03010 T[4,T1]=T[5,T1]=10
    0x5ca3ea42daf0 ---------A   03020 T[7,T1]=25
    0x5ca3ea42dec0 ---------A   03030 T[9,T1]=D1
    0x5ca3ea42e290 ---------A   03040 T[10,T1]=Y1
    0x5ca3ea42e670 ---------A   03050 T[11,T1]=5000
    0x5ca3ea42eaf0 ---------A   03060 PRINT "   CAPTAIN";P1;"WHAT DO YOU CHRISTEN YOUR SHIP #";I;
    0x5ca3ea42ef00 ---------A   03070 INPUT T$[L,L+5]
    0x5ca3ea42f240 ---------A   03080 T1=T1+1
    0x5ca3ea42f570 ---------A   03090 L=L+6
    0x5ca3ea42f6a0 ---------A   03100 NEXT P1
    0x5ca3ea42f7e0 ---------A   03110 NEXT I
    0x5ca3ea42f860 ---------A   03120 REM *** BLOCK #4.5
    0x5ca3ea42fc20 ---------A   03130 FOR B1=1 TO P9
    0x5ca3ea42ffe0 ---------A   03140 B[1,B1]=0
    0x5ca3ea4303b0 ---------A   03150 B[2,B1]=D1
    0x5ca3ea430780 ---------A   03160 B[3,B1]=Y1
    0x5ca3ea4308b0 ---------A   03170 NEXT B1
    0x5ca3ea430960 ---------A   03180 CHAIN "$TRADES"
    0x5ca3ea4386f0 ---------A   03190 REM *** DATA FOR ECONOMETRIC MODEL FOLLOWS ***
    0x5ca3ea438770 ---------A   03200 REM MODEL #1
    0x5ca3ea439820 ---------A   03210 DATA -0.025,-0.05,-0.025,0,-0.025,-0.025,0,.1,.1,-0.025,.1,0,.1,.2,.1,.1,-0.025,0
    0x5ca3ea43a4d0 ---------A   03220 DATA 1,1.5,.5,.75,.75,.75,-0.25,-0.25,-0.25,0,-0.5,.5,0,-0.5
    0x5ca3ea43a8c0 ---------A   03230 DATA 0,.5,1.5,0
    0x5ca3ea43a910 ---------A   03240 END
    0x5ca3ea4309f0 ---------B   03250 REM *** GOSUBS FOLLOW ***
    0x5ca3ea430a80 ---------B   03260 REM <FRONTIER> GOSUB
    0x5ca3ea430fc0 ---------B B 03270 X=(RND(0)-.5)*100
    0x5ca3ea431490 ---------B   03280 Y=50*RND(0)
    0x5ca3ea4319e0 ---------B   03290 IF (ABS(X)<25) AND (Y<25) THEN 3270
    0x5ca3ea431cc0 ---------B   03300 F=1
    0x5ca3ea431d30 ---------B   03310 GOSUB 3580
    0x5ca3ea431f70 ---------B   03320 IF F=0 THEN 3270
    0x5ca3ea432330 ---------B   03330 S[7,S1]=0
    0x5ca3ea441c60 ---------B   03340 GOTO 03350
    0x5ca3ea441ca0 ---------B T 03350 RETURN
    0x5ca3ea432420 ---------C   03360 REM *** <UNDERDEVELOPED> GOSUB
    0x5ca3ea432700 ---------C G 03370 E=100
    0x5ca3ea432770 ---------C   03380 GOSUB 3490
    0x5ca3ea432b10 ---------C   03390 S[7,S1]=5
    0x5ca3ea441ce0 ---------C   03400 GOTO 03410
    0x5ca3ea441d40 ---------C T 03410 RETURN
    0x5ca3ea432c00 ---------D   03420 REM *** <DEVELOPED> GOSUB
    0x5ca3ea432e20 ---------D G 03430 E=50
    0x5ca3ea432e90 ---------D   03440 GOSUB 3490
    0x5ca3ea433230 ---------D   03450 S[7,S1]=10
    0x5ca3ea441da0 ---------D   03460 GOTO 03470
    0x5ca3ea441e00 ---------D T 03470 RETURN
    0x5ca3ea433320 ---------E   03480 REM *** <GENERATE CO-ORDS> GOSUB
    0x5ca3ea433880 ---------E B 03490 X=(RND(0)-.5)*E
    0x5ca3ea433d90 ---------E   03500 Y=RND(0)*E/2
    0x5ca3ea433fa0 ---------E   03510 F=1
    0x5ca3ea434010 ---------E   03520 GOSUB 3580
    0x5ca3ea434250 ---------E   03530 IF F=0 THEN 3490
    0x5ca3ea441e60 ---------E   03540 GOTO 03550
    0x5ca3ea441ec0 ---------E T 03550 RETURN
    0x5ca3ea434350 ---------F   03560 REM *** <TEST STAR CO-ORDS> GOSUB
    0x5ca3ea434410 ---------F   03570 REM FIRST CONVERT CO-ORDS TO NEXT HALF-BOARD
    0x5ca3ea434880 ---------F G 03580 GOTO H OF 3690,3650,3630,3590
    0x5ca3ea434b70 ---------F T 03590 Z=X
    0x5ca3ea434da0 ---------F   03600 X=-Y
    0x5ca3ea434fd0 ---------F   03610 Y=Z
    0x5ca3ea435040 ---------F   03620 GOTO 3690
    0x5ca3ea435260 ---------F T 03630 Y=-Y
    0x5ca3ea4352d0 ---------F   03640 GOTO 3690
    0x5ca3ea4354f0 ---------F T 03650 Z=X
    0x5ca3ea435720 ---------F   03660 X=Y
    0x5ca3ea422790 ---------F   03670 Y=Z
    0x5ca3ea422810 ---------F   03680 REM SECOND, TEST PROXIMITY
    0x5ca3ea422c40 ---------F T 03690 FOR J=1 TO S1-1
    0x5ca3ea4372a0 ---------F   03700 IF SQR((X-S[11,J])^2+(Y-S[12,J])^2) >= D9 THEN 3730
    0x5ca3ea4374c0 ---------F   03710 F=0
    0x5ca3ea441450 ---------F   03720 GOTO 03800
    0x5ca3ea437650 ---------F T 03730 NEXT J
    0x5ca3ea437720 ---------F   03740 REM FINALLY, ENTER CO-ORDS AND INCREMENT HALF-BOARD CTR
    0x5ca3ea437be0 ---------F   03750 S[11,S1]=INT(X)
    0x5ca3ea438090 ---------F   03760 S[12,S1]=INT(Y)
    0x5ca3ea438100 ---------F   03770 REM H=1+(H <= 3)*H
    0x5ca3ea4385e0 ---------F   03780 H=MOD(1+H)
    0x5ca3ea4414b0 ---------F   03790 GOTO 03800
    0x5ca3ea441510 ---------F T 03800 RETURN
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
#include <jansson.h>
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
float  B_flt_arr[3][12];                          // Basic: B Common
float  B1_flt;                                    // Basic: B1 
float  C_flt_arr[6][3];                           // Basic: C Common
float  D1_flt;                                    // Basic: D1 Common
float  D9_flt;                                    // Basic: D9 Common
float  E_flt;                                     // Basic: E 
float  F_flt;                                     // Basic: F 
float  G9_flt;                                    // Basic: G9 Common
float  H_flt;                                     // Basic: H Common
float  I_flt;                                     // Basic: I 
float  J_flt;                                     // Basic: J 
float  K9_flt;                                    // Basic: K9 Common
float  L_flt;                                     // Basic: L 
float  M_flt_arr[6][3];                           // Basic: M Common
float  MOD_flt_arr[10];                           // Basic: MOD 
float  P1_flt;                                    // Basic: P1 
float  P9_flt;                                    // Basic: P9 Common
float  Q_flt;                                     // Basic: Q Common
float  R_flt;                                     // Basic: R Common
float  R9_flt;                                    // Basic: R9 Common
float  S_flt_arr[12][15];                         // Basic: S Common
float  S1_flt;                                    // Basic: S1 Common
float  S9_flt;                                    // Basic: S9 Common
float  T_flt_arr[12][12];                         // Basic: T Common
char*  T_str_arr[72];                             // Basic: T$ Common
float  T1_flt;                                    // Basic: T1 Common
float  T9_flt;                                    // Basic: T9 Common
float  W_flt;                                     // Basic: W Common
float  X_flt;                                     // Basic: X 
float  X1_flt;                                    // Basic: X1 Common
float  X9_flt;                                    // Basic: X9 Common
float  Y_flt;                                     // Basic: Y 
float  Y1_flt;                                    // Basic: Y1 Common
float  Y9_flt;                                    // Basic: Y9 Common
float  Z_flt;                                     // Basic: Z 
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
    // 03250 REM *** GOSUBS FOLLOW ***
    // 03260 REM <FRONTIER> GOSUB

void Frontier(){

  Lbl_03270:
    // 03270 X=(RND(0)-.5)*100
    X_flt = (RND(0)-0.5)*100;
    // 03280 Y=50*RND(0)
    Y_flt = 50*RND(0);
    // 03290 IF (ABS(X)<25) AND (Y<25) THEN 3270
    if(ABS(X_flt)<25&&Y_flt<25)goto Lbl_03270;
    // 03300 F=1
    F_flt = 1;
    // 03310 GOSUB 3580
    ConvCoords();
    // 03320 IF F=0 THEN 3270
    if(F_flt==0)goto Lbl_03270;
    // 03330 S[7,S1]=0
    S_flt_arr[7][(int)S1_flt] = 0;
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
    E_flt = 100;
    // 03380 GOSUB 3490
    GenCoords();
    // 03390 S[7,S1]=5
    S_flt_arr[7][(int)S1_flt] = 5;
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
    E_flt = 50;
    // 03440 GOSUB 3490
    GenCoords();
    // 03450 S[7,S1]=10
    S_flt_arr[7][(int)S1_flt] = 10;
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
    X_flt = (RND(0)-0.5)*E_flt;
    // 03500 Y=RND(0)*E/2
    Y_flt = RND(0)*E_flt/2;
    // 03510 F=1
    F_flt = 1;
    // 03520 GOSUB 3580
    ConvCoords();
    // 03530 IF F=0 THEN 3490
    if(F_flt==0)goto Lbl_03490;
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
    switch((int)(H_flt)){
        case 1: goto Lbl_03690;
        case 2: goto Lbl_03650;
        case 3: goto Lbl_03630;
        case 4: goto Lbl_03590;
        default: break; 
    };

  Lbl_03590:
    // 03590 Z=X
    Z_flt = X_flt;
    // 03600 X=-Y
    X_flt = Y_flt;
    // 03610 Y=Z
    Y_flt = Z_flt;
    // 03620 GOTO 3690
    goto Lbl_03690;

  Lbl_03630:
    // 03630 Y=-Y
    Y_flt = Y_flt;
    // 03640 GOTO 3690
    goto Lbl_03690;

  Lbl_03650:
    // 03650 Z=X
    Z_flt = X_flt;
    // 03660 X=Y
    X_flt = Y_flt;
    // 03670 Y=Z
    Y_flt = Z_flt;
    // 03680 REM SECOND, TEST PROXIMITY

  Lbl_03690:
    // 03690 FOR J=1 TO S1-1
    for(J_flt=1;J_flt<=S1_flt-1;J_flt++){
        // 03700 IF SQR((X-S[11,J])^2+(Y-S[12,J])^2) >= D9 THEN 3730
        if(SQR(FPower((X_flt-S_flt_arr[11][(int)J_flt]),2)+FPower((Y_flt-S_flt_arr[12][(int)J_flt]),2))>=D9_flt)goto Lbl_03730;
        // 03710 F=0
        F_flt = 0;
        // 03720 GOTO 03800
        goto Lbl_03800;

  Lbl_03730:
        // 03730 NEXT J
        int dummy_3730=0; // Ignore this line.
    }; // End-For(J_flt)
    // 03740 REM FINALLY, ENTER CO-ORDS AND INCREMENT HALF-BOARD CTR
    // 03750 S[11,S1]=INT(X)
    S_flt_arr[11][(int)S1_flt] = INT(X_flt);
    // 03760 S[12,S1]=INT(Y)
    S_flt_arr[12][(int)S1_flt] = INT(Y_flt);
    // 03770 REM H=1+(H <= 3)*H
    // 03780 H=MOD(1+H)
    H_flt = MOD_flt_arr[(int)1+H_flt];
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
    LoadCommonAreas("basic/StarTrader_setup_cmn.json");
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
    R9_flt = 2/7;
    // 01270 LET D9=15
    D9_flt = 15;
    // 01280 LET Q=.1
    Q_flt = 0.1;
    // 01290 LET K9=3
    K9_flt = 3;
    // 01300 LET W=30
    W_flt = 30;
    // 01310 LET X9=36
    X9_flt = 36;
    // 01320 LET G9=1.25
    G9_flt = 1.25;
    // 01330 LET R=0
    R_flt = 0;
    // 01340 REM D1 IS THE DAY OF THIS YEAR (1<=D1<=360)
    // 01350 REM Y1 IS THIS YEAR
    // 01360 LET D1=1
    D1_flt = 1;
    // 01370 LET Y1=2070
    Y1_flt = 2070;
    // 01380 REM SET UP ECONOMETRICS MODEL
    // 01390 RESTORE 3200
    Data_Index=0;
    RestoreData(3200);
    // 01400 MAT READ M,C
    for(int d0=0;d0<=5;d0++){
        for(int d1=0;d1<=2;d1++){
            M_flt_arr[d0][d1] = Get_Data_Float();
        }
    }
    for(int d0=0;d0<=5;d0++){
        for(int d1=0;d1<=2;d1++){
            C_flt_arr[d0][d1] = Get_Data_Float();
        }
    }
    // 01410 REM *** BLOCK #1
    // 01420 PRINT "INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)";
    b2c_printf("Instructions (type 'y' or 'n' please)");
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
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01430
    // 01440 IF A$[1,1]="N" THEN 1690
    if(A_str_arr[1][1]=='N')goto Lbl_01690;
    // 01450 PRINT 
    b2c_printf("");
    // 01460 PRINT "     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT"
    b2c_printf("     the date is jan 1, 2070 and interstellar flight\n");
    // 01470 PRINT "HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR"
    b2c_printf("Has existed for 70 years.  There are several star\n");
    // 01480 PRINT "SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY"
    b2c_printf("Systems that have been colonized.  Some are only\n");
    // 01490 PRINT "FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED."
    b2c_printf("Frontier systems, others are older and more developed.\n");
    // 01500 PRINT 
    b2c_printf("\n");
    // 01510 PRINT "     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR"
    b2c_printf("     each of you is the captain of two interstellar\n");
    // 01520 PRINT "TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO"
    b2c_printf("Trading ships.  You will travel from star system to\n");
    // 01530 PRINT "STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU"
    b2c_printf("Star system, buying and selling merchandise.  If you\n");
    // 01540 PRINT "DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS."
    b2c_printf("Drive a good bargain you can make large profits.\n");
    // 01550 PRINT 
    b2c_printf("\n");
    // 01560 PRINT "     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY"
    b2c_printf("     as time goes on, each star system will slowly\n");
    // 01570 PRINT "GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT"
    b2c_printf("Grow, and its needs will change.  A star system that\n");
    // 01580 PRINT "HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY"
    b2c_printf("How is selling much uranium and raw metals cheaply\n");
    // 01590 PRINT "MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS."
    b2c_printf("May not have enough for export in a few years.\n");
    // 01600 PRINT 
    b2c_printf("\n");
    // 01610 PRINT "     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A"
    b2c_printf("     your ships can travel about two lightyears in a\n");
    // 01620 PRINT "WEEK AND CAN CARRY UP TO";W;" TONS OF CARGO.  ONLY"
    b2c_printf("Week and can carry up to %.2f Week and can carry up to tons of cargo.  Only\n",W_flt);
    // 01630 PRINT "CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM."
    b2c_printf("Class i and class ii star systems have banks on them.\n");
    // 01640 PRINT "THEY PAY 5% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE"
    b2c_printf("They pay 5%% interest and any money you deposit on one\n");
    // 01650 PRINT "PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL"
    b2c_printf("Planet is available on another - provided there's a local\n");
    // 01660 PRINT "BANK."
    b2c_printf("Bank.\n");
    // 01670 PRINT 
    b2c_printf("\n");
    // 01680 REM *** BLOCK #2

  Lbl_01690:
    // 01690 PRINT "HAVE ALL PLAYERS PLAYED BEFORE";
    b2c_printf("Have all players played before");
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
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01700
    // 01710 PRINT 
    b2c_printf("");
    // 01720 IF A$[1,1]="Y" THEN 1740
    if(A_str_arr[1][1]=='Y')goto Lbl_01740;
    // 01730 GOTO 1780
    goto Lbl_01780;

  Lbl_01740:
    // 01740 PRINT "DO YOU WANT TO SET UP YOUR OWN GAME";
    b2c_printf("Do you want to set up your own game");
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
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01750
    // 01760 PRINT 
    b2c_printf("");
    // 01770 IF A$[1,1]="Y" THEN 1890
    if(A_str_arr[1][1]=='Y')goto Lbl_01890;

  Lbl_01780:
    // 01780 PRINT "HOW MANY PLAYERS";
    b2c_printf("How many players");
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
                (err += b2c_strtof(&P9_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01790
    // 01800 PRINT 
    b2c_printf("");
    // 01810 GOTO P9-1 OF 1840,1840,1840
    switch((int)(P9_flt-1)){
        case 1: goto Lbl_01840;
        case 2: goto Lbl_01840;
        case 3: goto Lbl_01840;
        default: break; 
    };
    // 01820 PRINT "2,3, OR 4 CAN PLAY"
    b2c_printf("2,3, or 4 can play\n");
    // 01830 GOTO 1780
    goto Lbl_01780;

  Lbl_01840:
    // 01840 T9=2*P9
    T9_flt = 2*P9_flt;
    // 01850 S9=3*P9+1
    S9_flt = 3*P9_flt+1;
    // 01860 Y9=Y1+5
    Y9_flt = Y1_flt+5;
    // 01870 GOTO 2620
    goto Lbl_02620;
    // 01880 REM *** BLOCK #3

  Lbl_01890:
    // 01890 PRINT "IS THIS A RESTART";
    b2c_printf("Is this a restart");
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
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01900
    // 01910 PRINT 
    b2c_printf("");
    // 01920 IF A$[1,1]="N" THEN 2140
    if(A_str_arr[1][1]=='N')goto Lbl_02140;
    // 01930 PRINT "LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'"
    b2c_printf("Load the tape into the tape reader.  When i type a '?'\n");
    // 01940 PRINT "YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY"
    b2c_printf("You can flip the switch to 'start' whenever you're ready\n");
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
                (err += b2c_strtos(&T_str_arr[0],args,0)) ){
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
                (err += b2c_strtof(&W_flt,args,0)) ||
                (err += b2c_strtof(&D9_flt,args,1)) ||
                (err += b2c_strtof(&K9_flt,args,2)) ||
                (err += b2c_strtof(&X9_flt,args,3)) ||
                (err += b2c_strtof(&D1_flt,args,4)) ||
                (err += b2c_strtof(&Y1_flt,args,5)) ){
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
                (err += b2c_strtof(&P9_flt,args,0)) ||
                (err += b2c_strtof(&T9_flt,args,1)) ||
                (err += b2c_strtof(&S9_flt,args,2)) ||
                (err += b2c_strtof(&Y9_flt,args,3)) ||
                (err += b2c_strtof(&T1_flt,args,4)) ||
                (err += b2c_strtof(&S1_flt,args,5)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01980
    // 01990 FOR J=1 TO S9
    for(J_flt=1;J_flt<=S9_flt;J_flt++){
        // 02000 FOR I=1 TO 9 STEP 4
        for(I_flt=1;I_flt<=9;I_flt+=4){
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
                        (err += b2c_strtof(&S_flt_arr[(int)I_flt][(int)J_flt],args,0)) ||
                        (err += b2c_strtof(&S_flt_arr[(int)I_flt+1][(int)J_flt],args,1)) ||
                        (err += b2c_strtof(&S_flt_arr[(int)I_flt+2][(int)J_flt],args,2)) ||
                        (err += b2c_strtof(&S_flt_arr[(int)I_flt+3][(int)J_flt],args,3)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 02010
            // 02020 NEXT I
            int dummy_2020=0; // Ignore this line.
        }; // End-For(I_flt)
        // 02030 NEXT J
        int dummy_2030=0; // Ignore this line.
    }; // End-For(J_flt)
    // 02040 FOR J=1 TO T9
    for(J_flt=1;J_flt<=T9_flt;J_flt++){
        // 02050 FOR I=1 TO 9 STEP 4
        for(I_flt=1;I_flt<=9;I_flt+=4){
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
                        (err += b2c_strtof(&T_flt_arr[(int)I_flt][(int)J_flt],args,0)) ||
                        (err += b2c_strtof(&T_flt_arr[(int)I_flt+1][(int)J_flt],args,1)) ||
                        (err += b2c_strtof(&T_flt_arr[(int)I_flt+2][(int)J_flt],args,2)) ||
                        (err += b2c_strtof(&T_flt_arr[(int)I_flt+3][(int)J_flt],args,3)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 02060
            // 02070 NEXT I
            int dummy_2070=0; // Ignore this line.
        }; // End-For(I_flt)
        // 02080 NEXT J
        int dummy_2080=0; // Ignore this line.
    }; // End-For(J_flt)
    // 02090 FOR I=1 TO P9
    for(I_flt=1;I_flt<=P9_flt;I_flt++){
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
                    (err += b2c_strtof(&B_flt_arr[1][(int)I_flt],args,0)) ||
                    (err += b2c_strtof(&B_flt_arr[2][(int)I_flt],args,1)) ||
                    (err += b2c_strtof(&B_flt_arr[3][(int)I_flt],args,2)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 02100
        // 02110 NEXT I
        int dummy_2110=0; // Ignore this line.
    }; // End-For(I_flt)
    // 02120 R=1
    R_flt = 1;
    // 02130 CHAIN "$TRADES"
    SaveCommonAreas("%s_cmn.json");
    b2c_chain("$TRADES",-1);

  Lbl_02140:
    // 02140 PRINT "HOW MANY PLAYERS";
    b2c_printf("How many players");
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
                (err += b2c_strtof(&P9_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02150
    // 02160 PRINT 
    b2c_printf("");
    // 02170 IF P9 >= 2 AND P9 <= 12 THEN 2200
    if(P9_flt>=2&&P9_flt<=12)goto Lbl_02200;
    // 02180 PRINT "2,3,4, ... ,12 CAN PLAY"
    b2c_printf("2,3,4, ... ,12 Can play\n");
    // 02190 GOTO 2140
    goto Lbl_02140;

  Lbl_02200:
    // 02200 PRINT "HOW MANY SHIPS PER PLAYER";
    b2c_printf("How many ships per player");
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
                (err += b2c_strtof(&X_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02210
    // 02220 PRINT 
    b2c_printf("");
    // 02230 IF X<1 THEN 2200
    if(X_flt<1)goto Lbl_02200;
    // 02240 T9=P9*X
    T9_flt = P9_flt*X_flt;
    // 02250 IF T9 <= 12 THEN 2290
    if(T9_flt<=12)goto Lbl_02290;
    // 02260 PRINT "I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;"
    b2c_printf("I can't keep track of more than 12 ships;\n");
    // 02270 PRINT P9;" PLAYERS TIMES";X;" SHIPS MAKES";T9
    b2c_printf(" %.2f ºCê£\ players times players times %.2f  players times ships makes ships makes %.2f \n",P9_flt,X_flt,T9_flt);
    // 02280 GOTO 2200
    goto Lbl_02200;

  Lbl_02290:
    // 02290 PRINT "HOW MANY STAR SYSTEMS";
    b2c_printf("How many star systems");
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
                (err += b2c_strtof(&S9_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02300
    // 02310 PRINT 
    b2c_printf("");
    // 02320 IF S9 >= 4 AND S9 <= 13 THEN 2350
    if(S9_flt>=4&&S9_flt<=13)goto Lbl_02350;
    // 02330 PRINT "FROM 4 TO 13 STARS"
    b2c_printf("From 4 to 13 stars\n");
    // 02340 GOTO 2290
    goto Lbl_02290;

  Lbl_02350:
    // 02350 PRINT "ENTER THE LENGTH OF GAME IN YEARS";
    b2c_printf("Enter the length of game in years");

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
                (err += b2c_strtof(&X_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02360
    // 02370 PRINT 
    b2c_printf("\n");
    // 02380 IF X >= 1 AND INT(X)=X THEN 2410
    if(X_flt>=1&&INT(X_flt)==X_flt)goto Lbl_02410;
    // 02390 PRINT "CHOOSE A POSITIVE INTEGER"
    b2c_printf("Choose a positive integer\n");
    // 02400 GOTO 2360
    goto Lbl_02360;

  Lbl_02410:
    // 02410 Y9=Y1+X
    Y9_flt = Y1_flt+X_flt;

  Lbl_02420:
    // 02420 PRINT "WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)";
    b2c_printf("What's the max cargoe tonnage(usually 30)");
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
                (err += b2c_strtof(&W_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02430
    // 02440 PRINT 
    b2c_printf("");
    // 02450 IF W<25 THEN 2420
    if(W_flt<25)goto Lbl_02420;

  Lbl_02460:
    // 02460 PRINT "WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)";
    b2c_printf("What's the minimum distance between stars(usually 15)");
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
                (err += b2c_strtof(&D9_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02470
    // 02480 PRINT 
    b2c_printf("");
    // 02490 IF D9 <= 25 AND D9 >= 10 THEN 2520
    if(D9_flt<=25&&D9_flt>=10)goto Lbl_02520;
    // 02500 PRINT "MIN SPACING 10, MAX 25"
    b2c_printf("Min spacing 10, max 25\n");
    // 02510 GOTO 2460
    goto Lbl_02460;

  Lbl_02520:
    // 02520 PRINT "HOW MANY BIDS OR OFFERS(USUALLY 3)";
    b2c_printf("How many bids or offers(usually 3)");
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
                (err += b2c_strtof(&K9_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02530
    // 02540 PRINT 
    b2c_printf("");
    // 02550 IF K9<1 THEN 2520
    if(K9_flt<1)goto Lbl_02520;
    // 02560 PRINT "SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER"
    b2c_printf("Set the profit margin(1,2,3,4 or 5)...The higher\n");
    // 02570 PRINT "THE NUMBER, THE LOWER THE PROFIT % ... USUALLY SET TO 2"
    b2c_printf("The number, the lower the profit %% ... Usually set to 2\n");
    // 02580 PRINT "...YOUR NUMBER";
    b2c_printf("...Your number");
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
                (err += b2c_strtof(&X9_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02590
    // 02600 X9=18*(ABS(X9) MIN 5)
    X9_flt = 18*(ABS(X9_flt));
    // 02610 REM *** BLOCK #4.1

  Lbl_02620:
    // 02620 S[11,1]=S[12,1]=0
    S_flt_arr[12][1] = S_flt_arr[11][1] = 0;
    // 02630 S[7,1]=15
    S_flt_arr[7][1] = 15;
    // 02640 REM *** BLOCK #4.2
    // 02650 H=1
    H_flt = 1;
    // 02660 S1=2
    S1_flt = 2;
    // 02670 GOSUB 3270
    Frontier();
    // 02680 S1=3
    S1_flt = 3;
    // 02690 GOSUB 3270
    Frontier();
    // 02700 S1=4
    S1_flt = 4;
    // 02710 GOSUB 3370
    Underdeveloped();
    // 02720 FOR S1=5 TO S9
    for(S1_flt=5;S1_flt<=S9_flt;S1_flt++){
        // 02730 GOSUB S1-3*INT((S1-1)/3) OF 3270,3370,3430
        switch((int)(S1_flt-3*INT((S1_flt-1)/3))){
            case 1: Frontier(); break;
            case 2: Underdeveloped(); break;
            case 3: Developed(); break;
            default: break; 
        };
        // 02740 NEXT S1
        int dummy_2740=0; // Ignore this line.
    }; // End-For(S1_flt)
    // 02750 REM *** BLOCK #4.3
    // 02760 FOR S1=1 TO S9
    for(S1_flt=1;S1_flt<=S9_flt;S1_flt++){
        // 02770 FOR J=1 TO 6
        for(J_flt=1;J_flt<=6;J_flt++){
            // 02780 S[J,S1]=0
            S_flt_arr[(int)J_flt][(int)S1_flt] = 0;
            // 02790 NEXT J
            int dummy_2790=0; // Ignore this line.
        }; // End-For(J_flt)
        // 02800 IF S1>1 THEN 2830
        if(S1_flt>1)goto Lbl_02830;
        // 02810 I=1
        I_flt = 1;
        // 02820 GOTO 2870
        goto Lbl_02870;

  Lbl_02830:
        // 02830 I=4*INT(14*RND(0))+5
        I_flt = 4*INT(14*RND(0))+5;
        // 02840 FOR J=2 TO S1-1
        for(J_flt=2;J_flt<=S1_flt-1;J_flt++){
            // 02850 IF I=S[8,J] THEN 2830
            if(I_flt==S_flt_arr[8][(int)J_flt])goto Lbl_02830;
            // 02860 NEXT J
            int dummy_2860=0; // Ignore this line.
        }; // End-For(J_flt)

  Lbl_02870:
        // 02870 S[8,S1]=I
        S_flt_arr[8][(int)S1_flt] = I_flt;
        // 02880 S[9,S1]=270
        S_flt_arr[9][(int)S1_flt] = 270;
        // 02890 S[10,S1]=Y1-1
        S_flt_arr[10][(int)S1_flt] = Y1_flt-1;
        // 02900 NEXT S1
        int dummy_2900=0; // Ignore this line.
    }; // End-For(S1_flt)
    // 02910 REM *** BLOCK #4.4
    // 02920 T1=L=1
    L_flt = T1_flt = 1;
    // 02930 PRINT 
    b2c_printf("\n");
    // 02940 PRINT 
    b2c_printf("\n");
    // 02950 PRINT "CAPTAINS, NAME YOUR SHIPS (UP TO 6 LETTERS/BLANKS/NUMBERS)"
    b2c_printf("Captains, name your ships (up to 6 letters/blanks/numbers)\n");
    // 02960 FOR I=1 TO T9/P9
    for(I_flt=1;I_flt<=T9_flt/P9_flt;I_flt++){
        // 02970 PRINT 
        b2c_printf("\n");
        // 02980 FOR P1=1 TO P9
        for(P1_flt=1;P1_flt<=P9_flt;P1_flt++){
            // 02990 T[1,T1]=T[2,T1]=T[6,T1]=0
            T_flt_arr[6][(int)T1_flt] = T_flt_arr[2][(int)T1_flt] = T_flt_arr[1][(int)T1_flt] = 0;
            // 03000 T[3,T1]=15
            T_flt_arr[3][(int)T1_flt] = 15;
            // 03010 T[4,T1]=T[5,T1]=10
            T_flt_arr[5][(int)T1_flt] = T_flt_arr[4][(int)T1_flt] = 10;
            // 03020 T[7,T1]=25
            T_flt_arr[7][(int)T1_flt] = 25;
            // 03030 T[9,T1]=D1
            T_flt_arr[9][(int)T1_flt] = D1_flt;
            // 03040 T[10,T1]=Y1
            T_flt_arr[10][(int)T1_flt] = Y1_flt;
            // 03050 T[11,T1]=5000
            T_flt_arr[11][(int)T1_flt] = 5000;
            // 03060 PRINT "   CAPTAIN";P1;"WHAT DO YOU CHRISTEN YOUR SHIP #";I;
            b2c_printf("   captain %.2f    captainWhat do you christen your ship #What do you christen your ship # %.2f What do you christen your ship #\n",P1_flt,I_flt);
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
                        (err += unknown_type(T_str_arr[(int)L_flt][(int)L_flt+5],args,0)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 03070
            // 03080 T1=T1+1
            T1_flt = T1_flt+1;
            // 03090 L=L+6
            L_flt = L_flt+6;
            // 03100 NEXT P1
            int dummy_3100=0; // Ignore this line.
        }; // End-For(P1_flt)
        // 03110 NEXT I
        int dummy_3110=0; // Ignore this line.
    }; // End-For(I_flt)
    // 03120 REM *** BLOCK #4.5
    // 03130 FOR B1=1 TO P9
    for(B1_flt=1;B1_flt<=P9_flt;B1_flt++){
        // 03140 B[1,B1]=0
        B_flt_arr[1][(int)B1_flt] = 0;
        // 03150 B[2,B1]=D1
        B_flt_arr[2][(int)B1_flt] = D1_flt;
        // 03160 B[3,B1]=Y1
        B_flt_arr[3][(int)B1_flt] = Y1_flt;
        // 03170 NEXT B1
        int dummy_3170=0; // Ignore this line.
    }; // End-For(B1_flt)
    // 03180 CHAIN "$TRADES"
    SaveCommonAreas("%s_cmn.json");
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
