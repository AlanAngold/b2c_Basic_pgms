/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/btlstr/basic/btlstr.bas: 
 *
                   +---+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |   | |
        Address    v   v v Original BASIC statement
    -------------- ----- - ------------------------------------------------------------------------------
    0x5578f3f86ce0 ---------A   00900 REM Game of BattleStar
    0x5578f3f86d80 ---------A   00901 REM 
    0x5578f3f86e00 ---------A   00902 REM Variable List:
    0x5578f3f86e90 ---------A   00903 REM     A$			- 
    0x5578f3f86f10 ---------A   00904 REM     B8			- 
    0x5578f3f86fe0 ---------A   00905 REM     B9			- 
    0x5578f3f87060 ---------A   00906 REM     C			- 
    0x5578f3f870d0 ---------A   00907 REM     C$			- Alert Condition
    0x5578f3f87150 ---------A   00908 REM     D$[11]		- 
    0x5578f3f87290 ---------A   00909 REM     E1			- Hyperdrive Coil Energy
    0x5578f3f87330 ---------A   00910 REM     E2			- Star Drive Energy
    0x5578f3f873e0 ---------A   00911 REM     E3			- Viper Reserve Energy
    0x5578f3f87490 ---------A   00912 REM     E4			- Defence Laser Energy
    0x5578f3f87510 ---------A   00913 REM     F9			- 
    0x5578f3f875a0 ---------A   00914 REM     G[11][11]	- 
    0x5578f3f87620 ---------A   00915 REM     I			- 
    0x5578f3f876a0 ---------A   00916 REM     J			- 
    0x5578f3f87830 ---------A   00917 REM     K[6][4]	- 
    0x5578f3f878b0 ---------A   00918 REM     N[10]		- 
    0x5578f3f87930 ---------A   00919 REM     N1			- 
    0x5578f3f879d0 ---------A   00920 REM     N2			- Cylons left.
    0x5578f3f87a50 ---------A   00921 REM     N3			- 
    0x5578f3f87ad0 ---------A   00922 REM     N4			- 
    0x5578f3f87b50 ---------A   00923 REM     N5			- 
    0x5578f3f87bd0 ---------A   00924 REM     N6			- 
    0x5578f3f8bea0 ---------A   00925 REM     N7			- 
    0x5578f3f8bf40 ---------A   00926 REM     P			- Number of missles
    0x5578f3f8bfc0 ---------A   00927 REM     P4			- 
    0x5578f3f8c050 ---------A   00928 REM     Q[11][11]	- 
    0x5578f3f8c0d0 ---------A   00929 REM     Q$[8]		- 
    0x5578f3f8c170 ---------A   00930 REM     Q1			- Quadrant Indice
    0x5578f3f8c210 ---------A   00931 REM     Q2			- Quadrant Indice
    0x5578f3f8c290 ---------A   00932 REM     Q8			- 
    0x5578f3f8c520 ---------A   00933 REM     Q9			- 
    0x5578f3f8c5a0 ---------A   00934 REM     R[3][4]	- 
    0x5578f3f8c630 ---------A   00935 REM     S[11][11]	- 
    0x5578f3f8c6d0 ---------A   00936 REM     S1			- Sector Indice
    0x5578f3f8c770 ---------A   00937 REM     S2			- Sector Indice
    0x5578f3f8c810 ---------A   00938 REM     T			- Game time in Centare
    0x5578f3f8c8b0 ---------A   00939 REM     T0			- End time for game. 
    0x5578f3f8c930 ---------A   00940 REM     T9			- 
    0x5578f3f8c9b0 ---------A   00941 REM     W			- 
    0x5578f3f8ca30 ---------A   00942 REM     X			- 
    0x5578f3f8cab0 ---------A   00943 REM     X1			- 
    0x5578f3f8cb30 ---------A   00944 REM     X2			- 
    0x5578f3f8cbb0 ---------A   00945 REM     X3			- 
    0x5578f3f8cc30 ---------A   00946 REM     X4			- 
    0x5578f3f8ccb0 ---------A   00947 REM     X5			- 
    0x5578f3f8cd30 ---------A   00948 REM     X6			- 
    0x5578f3f8cdb0 ---------A   00949 REM     X7			- 
    0x5578f3f8ce30 ---------A   00950 REM     X8			- 
    0x5578f3f8ceb0 ---------A   00951 REM     X9			- 
    0x5578f3f8cf30 ---------A   00952 REM     Y			- 
    0x5578f3f8cfb0 ---------A   00953 REM     Z9			- 
    0x5578f3f8dc50 ---------A   01000 DIM Q(10,10),G(10,10),K(5,3),R(2,3),Q$(7),S(10,10)
    0x5578f3f8dd90 ---------A   01010 PRINT"WELCOME TO ** BATTLESTAR **          (BY RWMELHUISH)"
    0x5578f3f8de00 ---------A   01012 PRINT
    0x5578f3f8de70 ---------A   01013 PRINT
    0x5578f3f8e100 ---------A   01020 FOR I=1 TO 7
    0x5578f3f8e240 ---------A   01022 READ Q$(I)
    0x5578f3f8e2e0 ---------A   01023 NEXT I
    0x5578f3f8e8b0 ---------A   01030 DATA ".","*",B,P,C,E,O
    0x5578f3f8eaa0 ---------A   01040 DIM D$(10)
    0x5578f3f8eca0 ---------A   01050 FOR I=1 TO 10
    0x5578f3f8ede0 ---------A   01052 READ D$(I)
    0x5578f3f8f290 ---------A   01053 NEXT I
    0x5578f3f8fac0 ---------A   01060 DATA H,SS,V,M,G,L,S,C,A,R
    0x5578f3f902b0 ---------A   01070 T0=INT(RND(-1)*20000)/10+INT(RND(-1)*5000)
    0x5578f3f904c0 ---------A   01072 Z9=0
    0x5578f3f90e40 ---------A   01080 DEF FND(X1,X2)=SQR((S1-X1)^2+(S2-X2)^2)
    0x5578f3f91300 ---------A   01090 DEF FNR(X1)=INT(RND(X1)*10)+1
    0x5578f3f91ab0 ---------A   01100 T=T9=T0-(60-3*ABS(FNR(-1)-5))
    0x5578f3f91ca0 ---------A   01110 E1=1250
    0x5578f3f91e90 ---------A   01112 E2=300
    0x5578f3f92080 ---------A   01113 E3=2000
    0x5578f3f92350 ---------A   01114 Q8=E4=1250
    0x5578f3f92540 ---------A   01115 P=13
    0x5578f3f92810 ---------A   01116 B8=B9=-1
    0x5578f3f92940 ---------A   01120 MAT G=ZER
    0x5578f3f92c80 ---------A   01130 Q1=FNR(-1)
    0x5578f3f92ed0 ---------A   01132 Q2=FNR(-1)
    0x5578f3f930a0 ---------A   01133 S1=FNR(-1)
    0x5578f3f93270 ---------A   01134 S2=FNR(-1)
    0x5578f3f937e0 ---------A   01135 N1=N2=N3=F9=P4=0
    0x5578f3f939f0 ---------A   01140 FOR I=1 TO 10
    0x5578f3f93c90 ---------A   01142 FOR J=1 TO 10
    0x5578f3f93f50 ---------A   01143 X1=RND(-1)*50
    0x5578f3f94310 ---------A   01144 N4=N5=N6=0
    0x5578f3f944c0 ---------A   01150 IF X1>.08 THEN 1160
    0x5578f3f946f0 ---------A   01152 N5=N5+1
    0x5578f3f948a0 ---------A T 01160 IF X1>.28 THEN 1170
    0x5578f3f94ad0 ---------A   01162 N5=N5+1
    0x5578f3f94c80 ---------A T 01170 IF X1>1.28 THEN 1180
    0x5578f3f94eb0 ---------A   01172 N5=N5+1
    0x5578f3f95060 ---------A T 01180 IF X1>3.28 THEN 1190
    0x5578f3f95290 ---------A   01182 N5=N5+1
    0x5578f3f95440 ---------A T 01190 IF X1>13.28 THEN 1200
    0x5578f3f95660 ---------A   01192 N5=N5+1
    0x5578f3f95810 ---------A T 01200 IF N2<36 THEN 1210
    0x5578f3f95990 ---------A   01202 N5=0
    0x5578f3f95b60 ---------A T 01210 N2=N2+N5
    0x5578f3f95d20 ---------A   01212 IF N1>2 THEN 1220
    0x5578f3f95f80 ---------A   01213 IF RND(-1)<.97 THEN 1220
    0x5578f3f96100 ---------A   01214 N4=1
    0x5578f3f96490 ---------A T 01220 N7=ABS(FNR(-1)-1)
    0x5578f3f96660 ---------A   01222 N1=N1+N4
    0x5578f3f96810 ---------A   01223 IF N5>3 THEN 1260
    0x5578f3f96ae0 ---------A   01224 X1=RND(-1)*40
    0x5578f3f96c90 ---------A   01230 IF X1>4.25 THEN 1240
    0x5578f3f96ec0 ---------A   01232 N6=N6+1
    0x5578f3f97070 ---------A T 01240 IF X1>16.25 THEN 1250
    0x5578f3f97290 ---------A   01242 N6=N6+1
    0x5578f3f97470 ---------A T 01250 N3=N3+N6
    0x5578f3f97af0 ---------A T 01260 G(I,J)=N6*1000+N5*100+N4*10+N7
    0x5578f3f97d40 ---------A   01270 IF RND(-1)>.45 THEN 1280
    0x5578f3f980e0 ---------A   01272 G(I,J)=G(I,J)+.1
    0x5578f3f98190 ---------A T 01280 NEXT J
    0x5578f3f98250 ---------A   01282 NEXT I
    0x5578f3f98410 ---------A   01283 IF N1>0 THEN 1300
    0x5578f3f985f0 ---------A   01290 I=FNR(-1)
    0x5578f3f987c0 ---------A   01292 J=FNR(-1)
    0x5578f3f98b50 ---------A   01293 G(I,J)=G(I,J)+10
    0x5578f3f98cc0 ---------A   01294 N1=1
    0x5578f3f98d50 ---------A T 01300 PRINT
    0x5578f3f98f40 ---------A   01302 PRINT N2;"CYLONS HAVE PENETRATED TERRAN SPACE."
    0x5578f3f990a0 ---------A   01310 PRINT ".....THEY ARE ASSISTED BY THE EASTERN ALLIANCE."
    0x5578f3f99350 ---------A   01320 PRINT "ONLY";N1;"TERRAN PLANET";
    0x5578f3f99500 ---------A   01322 IF N1<2 THEN 1340
    0x5578f3f99660 ---------A   01330 PRINT "S HAVE";
    0x5578f3f99ee0 ---------A   01332 GOTO 1350
    0x5578f3f9a040 ---------A T 01340 PRINT" HAS";
    0x5578f3f9a1b0 ---------A T 01350 PRINT" SURVIVED THE INITIAL ASSAULT."
    0x5578f3f9a470 ---------A   01360 PRINT"YOU HAVE UNTIL CENTARE";T0;"TO DEFEAT THE CYLONS"
    0x5578f3f9a5b0 ---------A   01370 PRINT"AND DRIVE AWAY THE EASTERN ALLIANCE."
    0x5578f3f9a630 ---------A   01380 PRINT
    0x5578f3f9a780 ---------A   01382 PRINT".....REMEMBER :"
    0x5578f3f9a8d0 ---------A   01390 PRINT".....DO NOT RUN INTO ANY BLACK HOLES....."
    0x5578f3f9a940 ---------A   01400 PRINT
    0x5578f3f9a9b0 ---------A   01402 PRINT
    0x5578f3f9abd0 ---------A   01403 C$="WHO CARES"
    0x5578f3f9ad20 ---------A T 01404 PRINT" CONTINUE(C)";
    0x5578f3f9ae80 ---------A   01405 INPUT A$
    0x5578f3f9b060 ---------A   01407 IF A$<>"C" THEN 1404
    0x5578f3f9b230 ---------A T 01410 IF N2=0 THEN 3820
    0x5578f3f9b5e0 ---------A   01412 N6=INT(INT(G(Q1,Q2))/1000)
    0x5578f3f9bb10 ---------A   01420 N5=INT(INT(G(Q1,Q2))/100)-N6*10
    0x5578f3f9c1c0 ---------A   01430 N4=INT(INT(G(Q1,Q2))/10)-N6*100-N5*10
    0x5578f3f9c890 ---------A   01440 N7=INT(G(Q1,Q2))-N6*1000-N5*100-N4*10
    0x5578f3f9c9c0 ---------A   01450 MAT Q=CON
    0x5578f3f9cce0 ---------A   01460 Q(S1,S2)=3
    0x5578f3f9ce90 ---------A   01462 IF F9<>1 THEN 1470
    0x5578f3f9d0d0 ---------A   01463 Q(B9,B8)=4
    0x5578f3f9d280 ---------A T 01470 IF N5=0 THEN 1550
    0x5578f3f9d300 ---------A   01472 PRINT
    0x5578f3f9d390 ---------A   01473 PRINT
    0x5578f3f9d4e0 ---------A   01480 PRINT"COMPUTER LASERS ACTIVATING  ** RED ALERT **"
    0x5578f3f9d560 ---------A   01482 PRINT
    0x5578f3f9d810 ---------A   01490 PRINT"SCANNERS SHOW";N5;"CYLON";
    0x5578f3f9d9c0 ---------A   01492 IF N5<2 THEN 1500
    0x5578f3f9db20 ---------A   01493 PRINT"S";
    0x5578f3f9dc50 ---------A T 01500 PRINT"."
    0x5578f3f9de20 ---------A   01502 FOR I=1 TO N5
    0x5578f3f9dea0 ---------A   01510 GOSUB 2300
    0x5578f3f9e0c0 ---------A   01520 K(I,1)=X1
    0x5578f3f9e2f0 ---------A   01522 K(I,2)=X2
    0x5578f3f9e4b0 ---------A   01523 IF F9=1 THEN 1540
    0x5578f3f9e950 ---------A   01524 K(I,3)=175+RND(0)*51
    0x5578f3f9eb00 ---------A   01530 IF Z9<>1THEN1540
    0x5578f3f9ef20 ---------A   01532 K(I,3)=K(I,3)/2
    0x5578f3f9f150 ---------A T 01540 Q(X1,X2)=5
    0x5578f3f9f200 ---------A   01542 NEXT I
    0x5578f3f9f3c0 ---------A T 01550 IF N6=0 THEN 1600
    0x5578f3f9f5a0 ---------A   01552 FOR I=1 TO N6
    0x5578f3f9f620 ---------A   01560 GOSUB 2300
    0x5578f3f9f840 ---------A   01570 R(I,1)=X1
    0x5578f3f9fa70 ---------A   01572 R(I,2)=X2
    0x5578f3f9fc30 ---------A   01573 IF F9=1 THEN 1590
    0x5578f3fa00d0 ---------A   01574 R(I,3)=175+RND(0)*51
    0x5578f3fa0280 ---------A   01580 IF Z9<>1THEN1590
    0x5578f3fa06a0 ---------A   01582 R(I,3)=R(I,3)/1.5
    0x5578f3fa08d0 ---------A T 01590 Q(X1,X2)=6
    0x5578f3fa0980 ---------A   01592 NEXT I
    0x5578f3fa0b40 ---------A T 01600 IF N7=0 THEN 1640
    0x5578f3fa0d20 ---------A   01610 I=1 TO N7
    0x5578f3fa0da0 ---------A   01620 GOSUB 2300
    0x5578f3fa0fc0 ---------A   01630 Q(X1,X2)=2
    0x5578f3fa1070 ---------A   01632 NEXT I
    0x5578f3fa1230 ---------A T 01640 IF N4=0 THEN 1670
    0x5578f3fa13f0 ---------A   01642 IF F9=1 THEN 1670
    0x5578f3fa1470 ---------A   01650 GOSUB 2300
    0x5578f3fa1690 ---------A   01660 Q(X1,X2)=4
    0x5578f3fa17c0 ---------A   01662 B9=X1
    0x5578f3fa1910 ---------A   01663 B8=X2
    0x5578f3fa1c60 ---------A T 01670 IF G(Q1,Q2)<>INT(G(Q1,Q2)) THEN 1700
    0x5578f3fa1ce0 ---------A   01680 GOSUB 2300
    0x5578f3fa1f00 ---------A   01690 Q(X1,X2)=7
    0x5578f3fa20b0 ---------A T 01700 IF N5<>0 THEN 1710
    0x5578f3fa2270 ---------A   01702 IF N6=0 THEN 1720
    0x5578f3fa22f0 ---------A T 01710 GOSUB 3400
    0x5578f3fa24a0 ---------A T 01720 IF N4=0 THEN 1740
    0x5578f3fa2680 ---------A   01722 IF C$<>"ORBITING" THEN 1740
    0x5578f3fa2800 ---------A   01730 P=13
    0x5578f3fa2970 ---------A   01732 E2=300
    0x5578f3fa29e0 ---------A   01733 GOTO1790
    0x5578f3fa2b80 ---------A T 01740 IF N5<>0 THEN 1750
    0x5578f3fa2d40 ---------A   01742 IF N6=0 THEN 1760
    0x5578f3fa2ee0 ---------A T 01750 C$="RED"
    0x5578f3fa2f60 ---------A   01752 GOTO1790
    0x5578f3fa3120 ---------A T 01760 IF E1>399 THEN 1780
    0x5578f3fa3280 ---------A   01762 PRINT"HYPERDRIVE COILS LOW.  ** YELLOW ALERT **"
    0x5578f3fa3410 ---------A   01770 C$="YELLOW"
    0x5578f3fa3480 ---------A   01772 GOTO1790
    0x5578f3fa3600 ---------A T 01780 C$="GREEN"
    0x5578f3fa37b0 ---------A T 01790 IF E1<1 THEN 3710
    0x5578f3fa3840 ---------A T 01800 PRINT
    0x5578f3fa3970 ---------A   01802 PRINT"==================="
    0x5578f3fa3b80 ---------A   01803 FOR I=1 TO 10
    0x5578f3fa3db0 ---------A   01810 FOR J=1 TO 10
    0x5578f3fa40b0 ---------A   01812 PRINT Q$(Q(I,J));" ";
    0x5578f3fa4160 ---------A   01813 NEXT J
    0x5578f3fa42f0 ---------A   01814 PRINT"  ";
    0x5578f3fa4a20 ---------A   01820 ON I GOTO 1830,1840,1850,1860,1870,1880,1890,1900,1910,1920
    0x5578f3fa4e10 ---------A T 01830 PRINT"CENTARE          ";T;"(UNTIL";T0;")"
    0x5578f3fa4e90 ---------A   01832 GOTO 1930
    0x5578f3fa5030 ---------A T 01840 PRINT"CONDITION         ";C$
    0x5578f3fa50b0 ---------A   01842 GOTO 1930
    0x5578f3fa53b0 ---------A T 01850 PRINT"QUADRANT      ";Q1;"-";Q2
    0x5578f3fa5430 ---------A   01852 GOTO 1930
    0x5578f3fa5730 ---------A T 01860 PRINT"SECTOR        ";S1;"-";S2
    0x5578f3fa57c0 ---------A   01862 GOTO 1930
    0x5578f3fa5a40 ---------A T 01870 PRINT"HYPERDRIVE AT    ";E1;"-DEVICE #1"
    0x5578f3fa5ac0 ---------A   01872 GOTO 1930
    0x5578f3fa5c60 ---------A T 01880 PRINT"STAR DRIVE AT    ";E2
    0x5578f3fa5cf0 ---------A   01882 GOTO 1930
    0x5578f3fa5f70 ---------A T 01890 PRINT"VIPER RESERVES   ";E3;"-DEVICE #2"
    0x5578f3fa6000 ---------A   01892 GOTO 1930
    0x5578f3fa6280 ---------A T 01900 PRINT"DEFENSE LASERS   ";E4;"-DEVICE #3"
    0x5578f3fa6300 ---------A   01902 GOTO 1930
    0x5578f3fa64a0 ---------A T 01910 PRINT"MISSILES         ";P
    0x5578f3fa6520 ---------A   01912 GOTO 1930
    0x5578f3fa66c0 ---------A T 01920 PRINT"CYLONS LEFT      ";N2
    0x5578f3fa6770 ---------A T 01930 NEXT I
    0x5578f3fa68c0 ---------A   01932 PRINT"==================="
    0x5578f3fa6a10 ---------A T 01940 PRINT "COMMAND ";
    0x5578f3fa6af0 ---------A   01942 INPUT A$
    0x5578f3fa6cd0 ---------A   01943 IF A$="Q" THEN 3910
    0x5578f3fa6f00 ---------A   01950 FOR I=1 TO 10
    0x5578f3fa70e0 ---------A   01952 IF A$=D$(I) THEN 1990
    0x5578f3fa71a0 ---------A   01953 NEXT I
    0x5578f3fa73d0 ---------A   01960 IF A$<>"OBIWAN KENOBI" THEN 3290
    0x5578f3fa7560 ---------A   01970 PRINT"YOU HAVE CALLED UPON THE LEGENDARY POWER OF THE FORCE FOR AID."
    0x5578f3fa76a0 ---------A   01980 PRINT"THE FORCE WEAKENS YOUR ENEMIES !"
    0x5578f3fa7810 ---------A   01982 Z9=1
    0x5578f3fa78b0 ---------A   01983 GOTO1940
    0x5578f3fa7fb0 ---------A T 01990 ON I GOTO 2000,2040,2450,2840,3930,2310,1800,3290,3140,3970
    0x5578f3fa8100 ---------A T 02000 PRINT"COURSE ";
    0x5578f3fa8250 ---------A   02003 INPUT C
    0x5578f3f99810 ---------A   02004 IF C<1 THEN 1940
    0x5578f3f999e0 ---------A   02005 IF C>=9 THEN 1940
    0x5578f3f99b50 ---------A   02010 PRINT "HYPERDRIVE JUMP SPEED ";
    0x5578f3f99ca0 ---------A   02013 INPUT W
    0x5578f3f99e60 ---------A   02014 IF W<1 THEN 1940
    0x5578f3fa9420 ---------A   02020 IF W>8 THEN 1940
    0x5578f3fa9730 ---------A   02023 X5=INT(W*8)
    0x5578f3fa9980 ---------A   02024 IF E1<=2*X5 THEN 2070
    0x5578f3fa9c40 ---------A   02025 E1=E1-2*X5
    0x5578f3fa9e70 ---------A   02030 T=T+SQR(W)
    0x5578f3faa180 ---------A   02033 E1=E1+325*SQR(W)
    0x5578f3faa1f0 ---------A   02034 GOTO 2090
    0x5578f3faa330 ---------A T 02040 PRINT"COURSE ";
    0x5578f3faa400 ---------A   02043 INPUT C
    0x5578f3faa5c0 ---------A   02044 IF C<1 THEN 1940
    0x5578f3faa790 ---------A   02045 IF C>=9 THEN 1940
    0x5578f3faa8f0 ---------A   02050 PRINT"STAR SPEED ";
    0x5578f3faa9c0 ---------A   02053 INPUT W
    0x5578f3faabe0 ---------A   02054 W=W/10
    0x5578f3faad90 ---------A   02055 IF W<.2 THEN 1940
    0x5578f3faaf50 ---------A   02060 IF W>.9 THEN 1940
    0x5578f3fab1e0 ---------A   02063 X5=INT(W*8)
    0x5578f3fab450 ---------A   02064 IF E2>=7.5*X5 THEN 2080
    0x5578f3fab5a0 ---------A T 02070 PRINT"INSUFFICIENT POWER FOR MOVEMENT"
    0x5578f3fab610 ---------A   02073 GOTO 1940
    0x5578f3fab8b0 ---------A T 02080 E2=E2-7.5*X5
    0x5578f3fabbc0 ---------A   02083 E1=E1+350*SQR(W)
    0x5578f3fabed0 ---------A   02084 T=T+SQR(W)/1.5
    0x5578f3fac100 ---------A T 02090 Q(S1,S2)=1
    0x5578f3fac290 ---------A   02093 C$="MOVING"
    0x5578f3fac400 ---------A   02094 IF T>T0 THEN 3710
    0x5578f3fac5c0 ---------A   02095 X=S1
    0x5578f3fac770 ---------A   02096 Y=S2
    0x5578f3fac7e0 ---------A   02100 GOSUB 2290
    0x5578f3fac9a0 ---------A   02110 FOR I=1TO X5
    0x5578f3facb80 ---------A   02113 S1=S1+X1
    0x5578f3facd50 ---------A   02114 S2=S2+X2
    0x5578f3facf10 ---------A   02115 IF S1<.5 THEN 2190
    0x5578f3fad0d0 ---------A   02120 IF S1>10.5 THEN 2190
    0x5578f3fad2a0 ---------A   02123 IF S2<.5 THEN 2190
    0x5578f3fad460 ---------A   02124 IF S2>10.5 THEN 2190
    0x5578f3fad760 ---------A   02130 X6=INT(S1+.5)
    0x5578f3fada60 ---------A   02133 X7=INT(S2+.5)
    0x5578f3fadcd0 ---------A   02134 IF Q(X6,X7)<>7 THEN 2150
    0x5578f3fadd80 ---------A   02135 PRINT
    0x5578f3fadee0 ---------A   02140 PRINT"** YOUR BATTLESTAR HAS BEEN ABSORBED BY A BLACK HOLE **"
    0x5578f3fadf60 ---------A   02143 GOTO3710
    0x5578f3fae350 ---------A T 02150 IF INT(ABS(X6-B9)+.5)>1 THEN 2200
    0x5578f3fae760 ---------A   02153 IF INT(ABS(X7-B8)+.5)>1 THEN 2200
    0x5578f3fae8c0 ---------A   02160 PRINT"DO YOU WISH TO ORBIT";
    0x5578f3fae9a0 ---------A   02163 INPUT A$
    0x5578f3faeb90 ---------A   02164 IF A$="Y" THEN 2180
    0x5578f3faed70 ---------A   02170 IF A$="YES" THEN 2180
    0x5578f3faefb0 ---------A   02173 B8=B9=F9=-1
    0x5578f3faf020 ---------A   02174 GOTO 2200
    0x5578f3faf1a0 ---------A T 02180 C$="ORBITING"
    0x5578f3faf2d0 ---------A   02183 S1=X6
    0x5578f3faf400 ---------A   02184 S2=X7
    0x5578f3faf570 ---------A   02185 F9=1
    0x5578f3faf5e0 ---------A   02186 GOTO 1410
    0x5578f3faf800 ---------A T 02190 F9=B8=B9=-1
    0x5578f3faf8b0 ---------A T 02200 NEXT I
    0x5578f3fafb30 ---------A   02203 S1=INT(S1+.5)
    0x5578f3fafda0 ---------A   02204 S2=INT(S2+.5)
    0x5578f3faff50 ---------A T 02210 IF S1>0 THEN 2220
    0x5578f3fb0170 ---------A   02213 S1=S1+10
    0x5578f3fb0380 ---------A   02214 Q1=Q1-1
    0x5578f3fb03f0 ---------A   02215 GOTO2210
    0x5578f3fb0590 ---------A T 02220 IF S1<11 THEN 2230
    0x5578f3fb07b0 ---------A   02223 S1=S1-10
    0x5578f3fb09c0 ---------A   02224 Q1=Q1+1
    0x5578f3fb0a30 ---------A   02225 GOTO2220
    0x5578f3fb0bd0 ---------A T 02230 IF S2>0 THEN 2240
    0x5578f3fb0df0 ---------A   02233 S2=S2+10
    0x5578f3fb1000 ---------A   02234 Q2=Q2-1
    0x5578f3fb1070 ---------A   02235 GOTO 2230
    0x5578f3fb1210 ---------A T 02240 IF S2<11 THEN 2250
    0x5578f3fb1430 ---------A   02243 S2=S2-10
    0x5578f3fb1640 ---------A   02244 Q2=Q2+1
    0x5578f3fb16b0 ---------A   02245 GOTO2240
    0x5578f3fb1850 ---------A T 02250 IF Q1>0 THEN 2260
    0x5578f3fb1a70 ---------A   02253 Q1=Q1+10
    0x5578f3fb1c20 ---------A T 02260 IF Q1<11 THEN 2270
    0x5578f3fb1e40 ---------A   02263 Q1=Q1-10
    0x5578f3fb1ff0 ---------A T 02270 IF Q2>0 THEN 2280
    0x5578f3fb2210 ---------A   02273 Q2=Q2+10
    0x5578f3fb23c0 ---------A T 02280 IF Q2<11 THEN 1410
    0x5578f3fb25e0 ---------A   02283 Q2=Q2-10
    0x5578f3fb2660 ---------A   02284 GOTO 1410
    0x5578f3fb2a70 ---------B G 02290 X1=-SIN((C-1)*.785398)
    0x5578f3fb2e80 ---------B   02293 X2=COS((C-1)*.785398)
    0x5578f3fb2ed0 ---------B   02294 RETURN
    0x5578f3fb30b0 ---------C B 02300 X1=FNR(-1)
    0x5578f3fb3290 ---------C   02303 X2=FNR(-1)
    0x5578f3fb3500 ---------C   02304 IF Q(X1,X2)<>1 THEN 2300
    0x5578f3fb3560 ---------C   02305 RETURN
    0x5578f3fb3980 ---------A T 02310 IF T-INT(T)>RND(0)/7 THEN 2330
    0x5578f3fb3ad0 ---------A   02320 PRINT"NEBULA CLOUD PREVENTS SCAN"
    0x5578f3fb3b40 ---------A   02323 GOTO 1940
    0x5578f3fb3bd0 ---------A T 02330 PRINT
    0x5578f3fb3f20 ---------A   02333 PRINT"LONGE RANGE SENSOR SCAN FOR QUADRANT";Q1;"-";Q2
    0x5578f3fb4080 ---------A   02340 PRINT"     |--------|--------|--------|   POSITIONAL KEY (C P *)"
    0x5578f3fb43d0 ---------A   02350 FOR I=Q1-1 TO Q1+1
    0x5578f3fb4510 ---------A   02353 X1=I
    0x5578f3fb4860 ---------A   02354 FOR J=Q2-1 TO Q2+1
    0x5578f3fb49a0 ---------A   02355 X2=J
    0x5578f3fb4b50 ---------A   02360 IF X1>0 THEN 2370
    0x5578f3fb4d70 ---------A   02363 X1=X1+10
    0x5578f3fb4f20 ---------A T 02370 IF X1<11 THEN 2380
    0x5578f3fb5140 ---------A   02373 X1=X1-10
    0x5578f3fb52f0 ---------A T 02380 IF X2>0 THEN 2390
    0x5578f3fb5510 ---------A   02383 X2=X2+10
    0x5578f3fb56c0 ---------A T 02390 IF X2<11 THEN 2400
    0x5578f3fb58f0 ---------A   02393 X2=X2-10
    0x5578f3fb5cb0 ---------A T 02400 X3=INT(G(X1,X2)/1000)
    0x5578f3fb62e0 ---------A   02403 N(J-Q2+2)=INT(G(X1,X2))-X3*1000
    0x5578f3fb66b0 ---------A   02410 S(X1,X2)=N(J-Q2+2)
    0x5578f3fb6760 ---------A   02413 NEXT J
    0x5578f3fb71f0 ---------A   02420 PRINT TAB(5);"  ";N(1);TAB(14);"  ";N(2);TAB(23);"  ";N(3);
    0x5578f3fb7460 ---------A   02430 PRINT TAB(32);"  "
    0x5578f3fb75a0 ---------A   02433 PRINT"     |--------|--------|--------|"
    0x5578f3fb7650 ---------A   02440 NEXT I
    0x5578f3fb76d0 ---------A   02443 GOTO 1940
    0x5578f3fb7870 ---------A T 02450 IF N5>0 THEN 2470
    0x5578f3fb7a60 ---------A   02453 IF N6>0 THEN 2470
    0x5578f3fb7bc0 ---------A   02460 PRINT"YOU ARE HALLUCINATING; NOTHING IS OUT THERE !!!"
    0x5578f3fb7c50 ---------A   02463 GOTO 1940
    0x5578f3fb7e10 ---------A T 02470 PRINT "VIPERS STANDING BY. SQUADRON SIZE";E3
    0x5578f3fb7f70 ---------A   02480 PRINT "HOW MANY UNITS TO LAUNCH ";
    0x5578f3fb8050 ---------A   02483 INPUT X1
    0x5578f3fb81f0 ---------A   02490 IF E3>=X1 THEN 2510
    0x5578f3fb84a0 ---------A   02500 PRINT"I TOLD YOU THERE ARE ONLY";E3;"UNITS !!!"
    0x5578f3fb8510 ---------A   02503 GOTO 1940
    0x5578f3fb86c0 ---------A T 02510 IF X1<1 THEN 1940
    0x5578f3fb8800 ---------A   02513 PRINT"VIPERS LAUNCHED"
    0x5578f3fb89d0 ---------A   02514 E3=E3-X1
    0x5578f3fb8b80 ---------A   02515 IF N5=0 THEN2680
    0x5578f3fb8d80 ---------A T 02520 X8=0
    0x5578f3fb8f70 ---------A   02523 X9=100
    0x5578f3fb9160 ---------A   02524 FOR I=1 TO N5
    0x5578f3fb95f0 ---------A   02530 IF (FND(K(I,1),K(I,2)))>X9 THEN 2550
    0x5578f3fb98b0 ---------A   02540 IF K(I,3)<=0 THEN 2550
    0x5578f3fb9a00 ---------A   02543 X8=I
    0x5578f3fb9df0 ---------A   02544 X9=FND(K(I,1),K(I,2))
    0x5578f3fb9ea0 ---------A T 02550 NEXT I
    0x5578f3fba060 ---------A   02553 IF X8=0 THEN 2670
    0x5578f3fba1b0 ---------A   02554 I=X8
    0x5578f3fba630 ---------A   02560 IF FND(K(I,1),K(I,2))>3 THEN 2640
    0x5578f3fba8b0 ---------A   02570 IF X1<K(I,3) THEN 2620
    0x5578f3fbabc0 ---------A   02573 X1=X1-K(I,3)
    0x5578f3fbb1c0 ---------A T 02580 PRINT"CYLON BASE-STAR AT SECTOR";K(I,1);"-";K(I,2);"DESTROYED"
    0x5578f3fbb3d0 ---------A   02590 P4=P4+1
    0x5578f3fbb640 ---------A   02593 K(I,3)=0
    0x5578f3fbba70 ---------A   02594 Q(K(I,1),K(I,2))=1
    0x5578f3fbbc80 ---------A   02595 N2=N2-1
    0x5578f3fbbe40 ---------A   02600 IF N2=0 THEN 3820
    0x5578f3fbc1f0 ---------A   02603 G(Q1,Q2)=G(Q1,Q2)-100
    0x5578f3fbc470 ---------A   02610 IF S(Q1,Q2)=0 THEN 2520
    0x5578f3fbc810 ---------A   02613 S(Q1,Q2)=S(Q1,Q2)-100
    0x5578f3fbc8b0 ---------A   02614 GOTO 2520
    0x5578f3fbce40 ---------A T 02620 PRINT X1;"CYLON FIGHTERS REMOVED AT SECTOR";K(I,1);"-";K(I,2)
    0x5578f3fbd210 ---------A   02630 K(I,3)=K(I,3)-X1
    0x5578f3fbd380 ---------A   02633 X1=0
    0x5578f3fbd400 ---------A   02634 GOTO 2800
    0x5578f3fbdb80 ---------A T 02640 X2=K(I,3)*(FND(K(I,1),K(I,2))/3)^2
    0x5578f3fbdcf0 ---------A   02650 IF X1<X2 THEN 2660
    0x5578f3fbded0 ---------A   02653 X1=X1-X2
    0x5578f3fbdf50 ---------A   02654 GOTO 2580
    0x5578f3fbe5d0 ---------A T 02660 X1=X1/(FND(K(I,1),K(I,2))/3)^2
    0x5578f3fbe640 ---------A   02663 GOTO 2620
    0x5578f3fbe7e0 ---------A T 02670 IF X1=0 THEN 2800
    0x5578f3fbe9a0 ---------A T 02680 IF N6=0 THEN 2800
    0x5578f3fbeb90 ---------A   02683 FOR I=1 TO N6
    0x5578f3fbee60 ---------A   02684 IF R(I,3)<=0 THEN 2790
    0x5578f3fbf2f0 ---------A   02690 IF FND(R(I,1),R(I,2))>3 THEN 2760
    0x5578f3fbf570 ---------A   02700 IF X1<R(I,3) THEN 2740
    0x5578f3fbf880 ---------A   02703 X1=X1-R(I,3)
    0x5578f3fbfe70 ---------A T 02710 PRINT"E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2);"DESTROYED"
    0x5578f3fc0080 ---------A   02720 P4=P4+.5
    0x5578f3fc02f0 ---------A   02723 R(I,3)=0
    0x5578f3fc0720 ---------A   02724 Q(R(I,1),R(I,2))=1
    0x5578f3fc0940 ---------A   02725 N3=N3-1
    0x5578f3fc0cd0 ---------A   02730 G(Q1,Q2)=G(Q1,Q2)-1000
    0x5578f3fc0ee0 ---------A   02733 N6=N6-1
    0x5578f3fc0f80 ---------A   02734 GOTO 2800
    0x5578f3fc1510 ---------A T 02740 PRINT X1;"UNITS HIT IN E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5578f3fc18e0 ---------A   02750 R(I,3)=R(I,3)-X1
    0x5578f3fc1a50 ---------A   02753 X1=0
    0x5578f3fc1ad0 ---------A   02754 GOTO 2800
    0x5578f3fc2250 ---------A T 02760 X2=R(I,3)*(FND(R(I,1),R(I,2))/3)^2
    0x5578f3fc23c0 ---------A   02770 IF X1<X2 THEN 2780
    0x5578f3fc25a0 ---------A   02773 X1=X1-X2
    0x5578f3fc2620 ---------A   02774 GOTO 2710
    0x5578f3fc2ca0 ---------A T 02780 X1=X1/(FND(R(I,1),R(I,2))/3)^2
    0x5578f3fc2d10 ---------A   02783 GOTO 2740
    0x5578f3fc2db0 ---------A T 02790 NEXT I
    0x5578f3fc2fa0 ---------A T 02800 IF X1<10 THEN 2820
    0x5578f3fc3250 ---------A   02810 PRINT"COMPUTER REPORTS";X1;"VIPERS EXPLODED IN LAUNCH TUBES"
    0x5578f3fc32c0 ---------A T 02820 GOSUB 3400
    0x5578f3fc3320 ---------A   02830 GOTO 1940
    0x5578f3fc34d0 ---------A T 02840 IF P>0 THEN 2850
    0x5578f3fc3610 ---------A   02843 PRINT"MISSILES EXPENDED"
    0x5578f3fc3680 ---------A   02844 GOTO 1940
    0x5578f3fc37c0 ---------A T 02850 PRINT"COURSE ";
    0x5578f3fc3890 ---------A   02853 INPUT C
    0x5578f3fc3a50 ---------A   02854 IF C<1 THEN 1940
    0x5578f3fc3c10 ---------A   02855 IF C>=9 THEN 1940
    0x5578f3fc3c90 ---------A   02860 GOSUB 2290
    0x5578f3fc3db0 ---------A   02870 X=S1
    0x5578f3fc3ef0 ---------A   02873 Y=S2
    0x5578f3fc40c0 ---------A   02874 IF C$="ORBITING" THEN 2880
    0x5578f3fc42f0 ---------A   02875 P=P-1
    0x5578f3fc4430 ---------A T 02880 PRINT"MISSILE AWAY, TRACKING:"
    0x5578f3fc4600 ---------A T 02890 X=X+X1
    0x5578f3fc47d0 ---------A   02893 Y=Y+X2
    0x5578f3fc4990 ---------A   02894 IF X<.5 THEN 3130
    0x5578f3fc4b50 ---------A   02900 IF X>10.5 THEN 3130
    0x5578f3fc4d20 ---------A   02903 IF Y<.5 THEN 3130
    0x5578f3fc4f00 ---------A   02904 IF Y>10.5 THEN 3130
    0x5578f3fc5580 ---------A   02910 PRINT INT(X*100)/100;"-";INT(Y*100)/100
    0x5578f3fc57f0 ---------A   02913 X3=INT(X+.5)
    0x5578f3fc5b10 ---------A   02914 X4=INT(Y+.5)
    0x5578f3fc6120 ---------A   02920 ON Q(X3,X4) GOTO 2890,2940,2890,3020,2960,3060,2930
    0x5578f3fc6260 ---------A T 02930 PRINT"MISSILE ABSORBED BY BLACK HOLE"
    0x5578f3fc6300 ---------A   02933 GOTO 3130
    0x5578f3fc6440 ---------A T 02940 PRINT"MISSILE ABSORBED BY STAR - DISRUPTION SLIGHT"
    0x5578f3fc6790 ---------A   02950 P4=P4-RND(-1)*2
    0x5578f3fc6830 ---------A   02953 GOTO 3110
    0x5578f3fc6c20 ---------A T 02960 PRINT"CYLON BASE-STAR AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5578f3fc6e30 ---------A   02970 P4=P4+1
    0x5578f3fc7010 ---------A   02973 FOR I=1 TO N5
    0x5578f3fc72a0 ---------A   02974 IF K(I,1)<>X3 THEN 3010
    0x5578f3fc7520 ---------A   02980 IF K(I,2)<>X4 THEN 3010
    0x5578f3fc77b0 ---------A   02983 K(I,3)=0
    0x5578f3fc7b50 ---------A   02984 G(Q1,Q2)=G(Q1,Q2)-100
    0x5578f3fc7dd0 ---------A   02990 IF S(Q1,Q2)=0 THEN 3000
    0x5578f3fc8170 ---------A   02993 S(Q1,Q2)=S(Q1,Q2)-100
    0x5578f3fc8380 ---------A T 03000 N2=N2-1
    0x5578f3fc8530 ---------A   03004 IF N2=0 THEN 3820
    0x5578f3fc85b0 ---------A   03005 GOTO 3100
    0x5578f3fc8650 ---------A T 03010 NEXT I
    0x5578f3fc86f0 ---------A   03014 GOTO 3130
    0x5578f3fc8820 ---------A T 03020 PRINT "COMMANDER, WHAT HAVE YOU DONE ??!!"
    0x5578f3fc8a60 ---------A   03024 P4=P4-30
    0x5578f3fc8e60 ---------A   03030 PRINT"*** TERRAN PLANET AT SECTOR";X3;"-";X4;"DESTROYED ***"
    0x5578f3fc8f00 ---------A   03040 PRINT
    0x5578f3fc9060 ---------A   03044 PRINT"ENERGY BOLT APPROACHING FROM DIRECTION OF FORMER PLANET!"
    0x5578f3fc90f0 ---------A   03050 PRINT
    0x5578f3fc9240 ---------A   03054 PRINT"                     **** ZZZZAAP  ****"
    0x5578f3fc92b0 ---------A   03055 PRINT
    0x5578f3fc9340 ---------A   03056 GOTO3710
    0x5578f3fc9720 ---------A T 03060 PRINT"E.A.FLEET AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5578f3fc9930 ---------A   03070 P4=P4+.5
    0x5578f3fc9b10 ---------A   03074 FOR I=1 TO N6
    0x5578f3fc9da0 ---------A   03075 IF R(I,1)<>X3 THEN3090
    0x5578f3fca020 ---------A   03076 IF R(I,2)<>X4 THEN3090
    0x5578f3fa84e0 ---------A   03080 R(I,3)=0
    0x5578f3fa8870 ---------A   03084 G(Q1,Q2)=G(Q1,Q2)-1000
    0x5578f3fa8a80 ---------A   03085 N3=N3-1
    0x5578f3fa8af0 ---------A   03086 GOTO 3100
    0x5578f3fa8b90 ---------A T 03090 NEXT I
    0x5578f3fa8dd0 ---------A T 03100 Q(X3,X4)=1
    0x5578f3fa8e40 ---------A T 03110 GOSUB 3400
    0x5578f3fa8eb0 ---------A   03120 GOTO 1940
    0x5578f3fa8fd0 ---------A T 03130 PRINT"MISSILE MISSED TARGET"
    0x5578f3fa9060 ---------A   03134 GOTO 3110
    0x5578f3fa91b0 ---------A T 03140 PRINT"TRANSFER ENERGY FROM DEVICE # ";
    0x5578f3fcc090 ---------A   03144 INPUT X1
    0x5578f3fcc250 ---------A   03150 IF X1=0 THEN 1940
    0x5578f3fcc3a0 ---------A   03160 PRINT".... AND ALLOCATE TO DEVICE # ";
    0x5578f3fcc470 ---------A   03164 INPUT X2
    0x5578f3fcc630 ---------A   03170 IF X2=0 THEN 1940
    0x5578f3fcc7c0 ---------A   03174 IF X2>X1 THEN 3190
    0x5578f3fcc910 ---------A T 03180 PRINT"IMPOSSIBLE, COMMANDER !"
    0x5578f3fcc980 ---------A   03184 GOTO 1940
    0x5578f3fccb30 ---------A T 03190 IF X2>3 THEN 3180
    0x5578f3fccca0 ---------A   03194 PRINT"# OF UNITS TO TRANSFER ";
    0x5578f3fccd80 ---------A   03195 INPUT X3
    0x5578f3fccfa0 ---------A   03200 ON X1 GOTO 3210,3240
    0x5578f3fcd130 ---------A T 03210 IF E1>X3 THEN 3230
    0x5578f3fcd280 ---------A T 03220 PRINT"INSUFFICIENT POWER AVAILABLE"
    0x5578f3fcd2f0 ---------A   03224 GOTO 1940
    0x5578f3fcd4b0 ---------A T 03230 E1=E1-X3
    0x5578f3fcd520 ---------A   03234 GOTO 3250
    0x5578f3fcd680 ---------A T 03240 IF X3>E3 THEN 3220
    0x5578f3fcd870 ---------A   03244 E3=E3+X3
    0x5578f3fcdb60 ---------A T 03250 ON X2-1 GOTO 3260,3270
    0x5578f3fcdd30 ---------A T 03260 E3=E3+X3
    0x5578f3fcdda0 ---------A   03264 GOTO 3280
    0x5578f3fcdf60 ---------A T 03270 E4=E4+X3
    0x5578f3fce140 ---------A   03274 Q8=Q8+X3
    0x5578f3fce270 ---------A T 03280 PRINT"TRANSFER COMPLETE"
    0x5578f3fce310 ---------A   03284 GOTO 1940
    0x5578f3fce640 ---------A T 03290 PRINT" H -- HYPERDRIVE JUMP";TAB(37);"COURSE GUIDE"
    0x5578f3fce7b0 ---------A   03300 PRINT" SS - STAR-SPEED MANEUVER"
    0x5578f3fceb10 ---------A   03310 PRINT" L -- LONG RANGE SENSOR SCAN";TAB(40);"4  3  2"
    0x5578f3fcee70 ---------A   03320 PRINT" S -- SHORT RANGE SENSOR SCAN";TAB(42);"\|/"
    0x5578f3fcf1c0 ---------A   03330 PRINT" V -- LAUNCH VIPERS";TAB(40);"5 -*- 1"
    0x5578f3fcf520 ---------A   03340 PRINT" M -- FIRE MISSILE";TAB(42);"/|\"
    0x5578f3fcf870 ---------A   03350 PRINT" A -- ALLOCATE ENERGY UNITS";TAB(40);"6  7  8"
    0x5578f3fcf9c0 ---------A   03360 PRINT" G -- GENERATE POWER"
    0x5578f3fcfb20 ---------A   03370 PRINT" R -- RECALL LONG RANGE SENSOR INFORMATION"
    0x5578f3fcfc80 ---------A   03380 PRINT" C -- THIS LIST OF COMMANDS"
    0x5578f3fcfdc0 ---------A   03390 PRINT" Q -- QUIT GAME(ABNORMAL ENDING)"
    0x5578f3fcfe40 ---------A   03394 GOTO 1940
    0x5578f3fd0020 ---------D G 03400 IF C$<>"ORBITING" THEN 3420
    0x5578f3fd0180 ---------D   03410 PRINT"PLANETARY DEFENSES PROTECT YOUR BATTLESTAR"
    0x5578f3fd01d0 ---------D   03414 RETURN
    0x5578f3fd03a0 ---------D T 03420 IF Z9=0THEN3430
    0x5578f3fd04f0 ---------D   03424 PRINT"THE FORCE IS WITH YOU !"
    0x5578f3fd0680 ---------D T 03430 C$="GREEN"
    0x5578f3fd0870 ---------D   03434 Q9=0
    0x5578f3fd0a20 ---------D   03435 IF N5=0 THEN 3550
    0x5578f3fd0c10 ---------D   03436 FOR I=1 TO N5
    0x5578f3fd0ed0 ---------D   03440 IF K(I,3)=0 THEN 3540
    0x5578f3fd1080 ---------D   03444 C$="RED"
    0x5578f3fd14f0 ---------D   03450 IF FND(K(I,1),K(I,2))>3 THEN 3520
    0x5578f3fd17d0 ---------D   03454 E4=E4-K(I,3)
    0x5578f3fd1ad0 ---------D   03455 Q9=Q9+K(I,3)
    0x5578f3fd2100 ---------D   03460 PRINT K(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5578f3fd2610 ---------D T 03470 PRINT"FROM CYLON AT SECTOR";K(I,1);"-";K(I,2)
    0x5578f3fd27c0 ---------D   03474 IF E4>0THEN3490
    0x5578f3fd2850 ---------D   03480 GOSUB 3740
    0x5578f3fd2a00 ---------D T 03490 IF E4>400 THEN 3510
    0x5578f3fd2b50 ---------D   03500 PRINT"LASER CANNONS FAILING !"
    0x5578f3fd2bd0 ---------D T 03510 GOTO 3540
    0x5578f3fd3350 ---------D T 03520 X1=K(I,3)/(FND(K(I,1),K(I,2))/3)^2
    0x5578f3fd3520 ---------D   03524 E4=E4-X1
    0x5578f3fd3710 ---------D   03525 Q9=Q9+X1
    0x5578f3fd3c20 ---------D   03530 PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5578f3fd3c90 ---------D   03534 GOTO 3470
    0x5578f3fd3d30 ---------D T 03540 NEXT I
    0x5578f3fd3ef0 ---------D T 03550 IF N6=0 THEN 3660
    0x5578f3fd40e0 ---------D   03554 FOR I=1 TO N6
    0x5578f3fd43a0 ---------D   03555 IF R(I,3)=0THEN3650
    0x5578f3fd4550 ---------D   03556 C$="RED"
    0x5578f3fd49c0 ---------D   03560 IF FND(R(I,1),R(I,2))>3 THEN 3630
    0x5578f3fd4ca0 ---------D   03564 E4=E4-R(I,3)
    0x5578f3fd4fa0 ---------D   03565 Q9=Q9+R(I,3)
    0x5578f3fd55d0 ---------D   03570 PRINT R(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5578f3fd5af0 ---------D T 03580 PRINT"FROM E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5578f3fd5ca0 ---------D   03590 IF E4>0 THEN 3600
    0x5578f3fd5d30 ---------D   03594 GOSUB 3740
    0x5578f3fd5ee0 ---------D T 03600 IF E4>400 THEN 3620
    0x5578f3fd6030 ---------D   03610 PRINT"LASER CANNONS FAILING !"
    0x5578f3fd60b0 ---------D T 03620 GOTO 3650
    0x5578f3fd6830 ---------D T 03630 X1=R(I,3)/(FND(R(I,1),R(I,2))/3)^2
    0x5578f3fd6a00 ---------D   03634 E4=E4-X1
    0x5578f3fd6bf0 ---------D   03635 Q9=Q9+X1
    0x5578f3fd7100 ---------D   03640 PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5578f3fd7170 ---------D   03644 GOTO 3580
    0x5578f3fd7210 ---------D T 03650 NEXT I
    0x5578f3fd73f0 ---------D T 03660 IF E1<=0THEN3710
    0x5578f3fd7890 ---------D   03664 PRINT ((Q8-E4)/Q8)*100;"PERCENT DAMAGE.";
    0x5578f3fd7b30 ---------D   03670 PRINT"          LASERS FIRING AT";E4;"."
    0x5578f3fd7cd0 ---------D   03680 IF Q9<E4 THEN 3700
    0x5578f3fd7e30 ---------D   03690 PRINT"COMMANDER, WE CANNOT WITHSTAND ANOTHER ATTACK !!"
    0x5578f3fd7e80 ---------D T 03700 RETURN
    0x5578f3fd8020 -------EDA T 03710 PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5578f3fd8340 -------EDA   03720 PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5578f3fd83d0 -------EDA   03730 GOTO 3920
    0x5578f3fd8500 ---------E G 03740 PRINT"DRAWING ENERGY FOR LASER CANNONS"
    0x5578f3fd87c0 ---------E   03744 Q8=Q8-E4+1
    0x5578f3fd8b10 ---------E   03750 IF -E4*1.5+1>E3 THEN 3780
    0x5578f3fd8c60 ---------E   03760 VIPER FUEL RESERVES"
    0x5578f3fd8ff0 ---------E   03770 E3=E3-1+E4*1.25
    0x5578f3fd9160 ---------E   03774 E4=1
    0x5578f3fd91b0 ---------E   03775 RETURN
    0x5578f3fd95b0 ---------E T 03780 IF -E4*1.5+1>E1+E3 THEN 3710
    0x5578f3fd9720 ---------E   03790 VIPER FUEL EXHAUSTED"
    0x5578f3fd9860 ---------E   03800 PRINT".......TAPPING HYPERDRIVE COILS"
    0x5578f3fd9a30 ---------E   03810 E4=E4+E3
    0x5578f3fd9ba0 ---------E   03814 E3=0
    0x5578f3fd9f30 ---------E   03815 E1=E1-1+E4*1.66
    0x5578f3fda0a0 ---------E   03816 E4=1
    0x5578f3fda0f0 ---------E   03817 RETURN
    0x5578f3fda490 ---------A T 03820 P4=P4-(T-T9)/2
    0x5578f3fda640 ---------A   03824 IF P4>10THEN3870
    0x5578f3fda6f0 ---------A   03825 PRINT
    0x5578f3fda870 ---------A   03830 PRINT"EVEN THOUGH THE CYLONS HAVE BEEN DESTROYED, AND THE"
    0x5578f3fda9e0 ---------A   03840 PRINT"EASTERN ALLIANCE HAS FLED, YOU HAVE BEEN TOO DAMAGING"
    0x5578f3fdab30 ---------A   03850 PRINT"TO TERRAN CIVILIZATIONS TO WIN."
    0x5578f3fdac70 ---------A   03860 PRINT"..... CALL IT A DRAW ....."
    0x5578f3fdace0 ---------A   03864 GOTO3920
    0x5578f3fdad50 ---------A T 03870 PRINT
    0x5578f3fdaec0 ---------A   03874 PRINT"CONGRATULATIONS, COMMANDER."
    0x5578f3fdb040 ---------A   03880 PRINT"THE CYLONS HAVE BEEN DESTROYED, AND THE EASTERN"
    0x5578f3fdb1a0 ---------A   03890 PRINT"ALLIANCE HAS FLED, MAKING THIS A GREAT VICTORY"
    0x5578f3fdb2e0 ---------A   03900 PRINT"FOR THE TERRAN EMPIRE."
    0x5578f3fdb370 ---------A T 03910 PRINT
    0x5578f3fdb4b0 ---------A   03914 PRINT"A RATING GREATER THAN 10 IS GOOD!"
    0x5578f3fdb850 ---------A   03915 P4=P4-(T-T9)/2
    0x5578f3fdba00 -------EDA T 03920 PRINT"=RATING= ";P4
    0x5578f3fdba80 -------EDA   03924 PRINT
    0x5578f3fdbbb0 -------EDA   03925 PRINT"PLEASE TYPE* DONE"
    0x5578f3fdbc00 -------EDA   03926 STOP
    0x5578f3fdbe00 ---------A T 03930 IF C$="GREEN" THEN3940
    0x5578f3fdbfe0 ---------A   03934 IF C$="YELLOW" THEN3940
    0x5578f3fdc060 ---------A   03935 GOTO3960
    0x5578f3fdc260 ---------A T 03940 E1=E1+500
    0x5578f3fdc470 ---------A   03944 T=T+.5
    0x5578f3fdc5f0 ---------A   03945 IF T>T0 THEN3710
    0x5578f3fdc730 ---------A   03950 PRINT"POWER GENERATED"
    0x5578f3fdc7b0 ---------A   03954 GOTO1940
    0x5578f3fdc8e0 ---------A T 03960 PRINT"IMPOSSIBLE UNDER RED ALERT"
    0x5578f3fdc950 ---------A   03964 GOTO1940
    0x5578f3fdc9b0 ---------A T 03970 PRINT
    0x5578f3fdcbc0 ---------A   03974 FOR X6=1TO10
    0x5578f3fdcdf0 ---------A   03975 FOR X7=1TO10
    0x5578f3fdd170 ---------A   03976 PRINT S(X6,X7);TAB(X7*5);
    0x5578f3fdd220 ---------A   03980 NEXT X7
    0x5578f3fdd2a0 ---------A   03984 PRINT
    0x5578f3fdd350 ---------A   03985 NEXT X6
    0x5578f3fdd3d0 ---------A   03986 GOTO1940
    0x5578f3fdd410 ---------A   03990 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01160      01150T
     01170      01160T
     01180      01170T
     01190      01180T
     01200      01190T
     01210      01200T
     01220      01212T, 01213T
     01240      01230T
     01250      01240T
     01260      01223T
     01280      01270T
     01300      01283T
     01340      01322T
     01350      01332T
     01404      01407T
     01410      02186T, 02280T, 02284T
     01470      01462T
     01500      01492T
     01540      01523T, 01530T
     01550      01470T
     01590      01573T, 01580T
     01600      01550T
     01640      01600T
     01670      01640T, 01642T
     01700      01670T
     01710      01700T
     01720      01702T
     01740      01720T, 01722T
     01750      01740T
     01760      01742T
     01780      01760T
     01790      01733T, 01752T, 01772T
     01800      01990T
     01830      01820T
     01840      01820T
     01850      01820T
     01860      01820T
     01870      01820T
     01880      01820T
     01890      01820T
     01900      01820T
     01910      01820T
     01920      01820T
     01930      01832T, 01842T, 01852T, 01862T, 01872T, 01882T, 01892T, 01902T, 
                01912T
     01940      01983T, 02004T, 02005T, 02014T, 02020T, 02044T, 02045T, 02055T, 
                02060T, 02073T, 02323T, 02443T, 02463T, 02503T, 02510T, 02830T, 
                02844T, 02854T, 02855T, 03120T, 03150T, 03170T, 03184T, 03224T, 
                03284T, 03394T, 03954T, 03964T, 03986T
     01990      01952T
     02000      01990T
     02040      01990T
     02070      02024T
     02080      02064T
     02090      02034T
     02150      02134T
     02180      02164T, 02170T
     02190      02115T, 02120T, 02123T, 02124T
     02200      02150T, 02153T, 02174T
     02210      02215T
     02220      02210T, 02225T
     02230      02220T, 02235T
     02240      02230T, 02245T
     02250      02240T
     02260      02250T
     02270      02260T
     02280      02270T
     02290      02100G, 02860G
     02300      01510G, 01560G, 01620G, 01650G, 01680G, 02304T
     02310      01990T
     02330      02310T
     02370      02360T
     02380      02370T
     02390      02380T
     02400      02390T
     02450      01990T
     02470      02450T, 02453T
     02510      02490T
     02520      02610T, 02614T
     02550      02530T, 02540T
     02580      02654T
     02620      02570T, 02663T
     02640      02560T
     02660      02650T
     02670      02553T
     02680      02515T
     02710      02774T
     02740      02700T, 02783T
     02760      02690T
     02780      02770T
     02790      02684T
     02800      02634T, 02670T, 02680T, 02734T, 02754T
     02820      02800T
     02840      01990T
     02850      02840T
     02880      02874T
     02890      02920T, 02920T
     02930      02920T
     02940      02920T
     02960      02920T
     03000      02990T
     03010      02974T, 02980T
     03020      02920T
     03060      02920T
     03090      03075T, 03076T
     03100      03005T, 03086T
     03110      02953T, 03134T
     03130      02894T, 02900T, 02903T, 02904T, 02933T, 03014T
     03140      01990T
     03180      03190T
     03190      03174T
     03210      03200T
     03220      03240T
     03230      03210T
     03240      03200T
     03250      03234T
     03260      03250T
     03270      03250T
     03280      03264T
     03290      01960T, 01990T
     03400      01710G, 02820G, 03110G
     03420      03400T
     03430      03420T
     03470      03534T
     03490      03474T
     03510      03490T
     03520      03450T
     03540      03440T, 03510T
     03550      03435T
     03580      03644T
     03600      03590T
     03620      03600T
     03630      03560T
     03650      03555T, 03620T
     03660      03550T
     03700      03680T
     03710      01790T, 02094T, 02143T, 03056T, 03660T, 03780T, 03945T
     03740      03480G, 03594G
     03780      03750T
     03820      01410T, 02600T, 03004T
     03870      03824T
     03910      01943T
     03920      03730T, 03864T
     03930      01990T
     03940      03930T, 03934T
     03960      03935T
     03970      01990T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x5578f3f86ce0   0x5578f3f86ce0   0x5578f3fdd410   0x5578f3fdd410 
   B) 0x5578f3fb2a70   0x5578f3fb2a70   0x5578f3fb2ed0   0x5578f3fb2ed0 
   C) 0x5578f3fb30b0   0x5578f3fb30b0   0x5578f3fb3560   0x5578f3fb3560 
   D) 0x5578f3fd0020   0x5578f3fd0020   0x5578f3fd01d0   0x5578f3fdbc00 
   E) 0x5578f3fd8020   0x5578f3fd8500   0x5578f3fd91b0   0x5578f3fdbc00 

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine D!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     07890 - 10000    2120 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/btlstr/basic/btlstr.bas'
 *
    A$             String  
    ABS   Function Integer     args=1, int   
    B8             Integer 
    B9             Integer 
    C              Integer 
    C$             String  
    COS   Function Integer     args=1, float 
    D$    Array    String      {0,11} 
    E1             Float   
    E2             Float   
    E3             Integer 
    E4             Integer 
    F9             Integer 
    FND   Function Integer     args=1, int   
    FNR   Function Integer     args=1, int   
    G     Array    Float       {0,11} {0,11} 
    G              Integer 
    I              Integer 
    INT   Function Integer     args=1, float 
    J              Integer 
    K     Array    Integer     {0,6} {0,4} 
    N     Array    Integer     {0,10} 
    N1             Integer 
    N2             Integer 
    N3             Integer 
    N4             Integer 
    N5             Integer 
    N6             Integer 
    N7             Integer 
    P              Integer 
    P4             Float   
    Q     Array    Integer     {0,11} {0,11} 
    Q              Integer 
    Q$    Array    String      {0,8} 
    Q1             Integer 
    Q2             Integer 
    Q8             Integer 
    Q9             Integer 
    R     Array    Integer     {0,3} {0,4} 
    RND   Function Integer     args=1, int   
    S     Array    Integer     {0,11} {0,11} 
    S1             Integer 
    S2             Integer 
    SIN   Function Integer     args=1, float 
    SQR   Function Integer     args=1, float 
    T              Float   
    T0             Integer 
    T9             Integer 
    TAB   Function String      args=1, 
    W              Integer 
    X              Float   
    X1             Integer 
    X2             Float   
    X3             Integer 
    X4             Integer 
    X5             Integer 
    X6             Integer 
    X7             Integer 
    X8             Integer 
    X9             Integer 
    Y              Float   
    Z9             Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/btlstr/basic/btlstr.bas: 
 *
                   +---+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |   | |
        Address    v   v v Original BASIC statement
    -------------- ----- - ------------------------------------------------------------------------------
    0x5578f3f86ce0 ---------A   01000 REM Game of BattleStar
    0x5578f3f86d80 ---------A   01010 REM 
    0x5578f3f86e00 ---------A   01020 REM Variable List:
    0x5578f3f86e90 ---------A   01030 REM     A$			- 
    0x5578f3f86f10 ---------A   01040 REM     B8			- 
    0x5578f3f86fe0 ---------A   01050 REM     B9			- 
    0x5578f3f87060 ---------A   01060 REM     C			- 
    0x5578f3f870d0 ---------A   01070 REM     C$			- Alert Condition
    0x5578f3f87150 ---------A   01080 REM     D$[11]		- 
    0x5578f3f87290 ---------A   01090 REM     E1			- Hyperdrive Coil Energy
    0x5578f3f87330 ---------A   01100 REM     E2			- Star Drive Energy
    0x5578f3f873e0 ---------A   01110 REM     E3			- Viper Reserve Energy
    0x5578f3f87490 ---------A   01120 REM     E4			- Defence Laser Energy
    0x5578f3f87510 ---------A   01130 REM     F9			- 
    0x5578f3f875a0 ---------A   01140 REM     G[11][11]	- 
    0x5578f3f87620 ---------A   01150 REM     I			- 
    0x5578f3f876a0 ---------A   01160 REM     J			- 
    0x5578f3f87830 ---------A   01170 REM     K[6][4]	- 
    0x5578f3f878b0 ---------A   01180 REM     N[10]		- 
    0x5578f3f87930 ---------A   01190 REM     N1			- 
    0x5578f3f879d0 ---------A   01200 REM     N2			- Cylons left.
    0x5578f3f87a50 ---------A   01210 REM     N3			- 
    0x5578f3f87ad0 ---------A   01220 REM     N4			- 
    0x5578f3f87b50 ---------A   01230 REM     N5			- 
    0x5578f3f87bd0 ---------A   01240 REM     N6			- 
    0x5578f3f8bea0 ---------A   01250 REM     N7			- 
    0x5578f3f8bf40 ---------A   01260 REM     P			- Number of missles
    0x5578f3f8bfc0 ---------A   01270 REM     P4			- 
    0x5578f3f8c050 ---------A   01280 REM     Q[11][11]	- 
    0x5578f3f8c0d0 ---------A   01290 REM     Q$[8]		- 
    0x5578f3f8c170 ---------A   01300 REM     Q1			- Quadrant Indice
    0x5578f3f8c210 ---------A   01310 REM     Q2			- Quadrant Indice
    0x5578f3f8c290 ---------A   01320 REM     Q8			- 
    0x5578f3f8c520 ---------A   01330 REM     Q9			- 
    0x5578f3f8c5a0 ---------A   01340 REM     R[3][4]	- 
    0x5578f3f8c630 ---------A   01350 REM     S[11][11]	- 
    0x5578f3f8c6d0 ---------A   01360 REM     S1			- Sector Indice
    0x5578f3f8c770 ---------A   01370 REM     S2			- Sector Indice
    0x5578f3f8c810 ---------A   01380 REM     T			- Game time in Centare
    0x5578f3f8c8b0 ---------A   01390 REM     T0			- End time for game. 
    0x5578f3f8c930 ---------A   01400 REM     T9			- 
    0x5578f3f8c9b0 ---------A   01410 REM     W			- 
    0x5578f3f8ca30 ---------A   01420 REM     X			- 
    0x5578f3f8cab0 ---------A   01430 REM     X1			- 
    0x5578f3f8cb30 ---------A   01440 REM     X2			- 
    0x5578f3f8cbb0 ---------A   01450 REM     X3			- 
    0x5578f3f8cc30 ---------A   01460 REM     X4			- 
    0x5578f3f8ccb0 ---------A   01470 REM     X5			- 
    0x5578f3f8cd30 ---------A   01480 REM     X6			- 
    0x5578f3f8cdb0 ---------A   01490 REM     X7			- 
    0x5578f3f8ce30 ---------A   01500 REM     X8			- 
    0x5578f3f8ceb0 ---------A   01510 REM     X9			- 
    0x5578f3f8cf30 ---------A   01520 REM     Y			- 
    0x5578f3f8cfb0 ---------A   01530 REM     Z9			- 
    0x5578f3f8dc50 ---------A   01540 DIM Q(10,10),G(10,10),K(5,3),R(2,3),Q$(7),S(10,10)
    0x5578f3f8dd90 ---------A   01550 PRINT"WELCOME TO ** BATTLESTAR **          (BY RWMELHUISH)"
    0x5578f3f8de00 ---------A   01560 PRINT
    0x5578f3f8de70 ---------A   01570 PRINT
    0x5578f3f8e100 ---------A   01580 FOR I=1 TO 7
    0x5578f3f8e240 ---------A   01590 READ Q$(I)
    0x5578f3f8e2e0 ---------A   01600 NEXT I
    0x5578f3f8e8b0 ---------A   01610 DATA ".","*",B,P,C,E,O
    0x5578f3f8eaa0 ---------A   01620 DIM D$(10)
    0x5578f3f8eca0 ---------A   01630 FOR I=1 TO 10
    0x5578f3f8ede0 ---------A   01640 READ D$(I)
    0x5578f3f8f290 ---------A   01650 NEXT I
    0x5578f3f8fac0 ---------A   01660 DATA H,SS,V,M,G,L,S,C,A,R
    0x5578f3f902b0 ---------A   01670 T0=INT(RND(-1)*20000)/10+INT(RND(-1)*5000)
    0x5578f3f904c0 ---------A   01680 Z9=0
    0x5578f3f90e40 ---------A   01690 DEF FND(X1,X2)=SQR((S1-X1)^2+(S2-X2)^2)
    0x5578f3f91300 ---------A   01700 DEF FNR(X1)=INT(RND(X1)*10)+1
    0x5578f3f91ab0 ---------A   01710 T=T9=T0-(60-3*ABS(FNR(-1)-5))
    0x5578f3f91ca0 ---------A   01720 E1=1250
    0x5578f3f91e90 ---------A   01730 E2=300
    0x5578f3f92080 ---------A   01740 E3=2000
    0x5578f3f92350 ---------A   01750 Q8=E4=1250
    0x5578f3f92540 ---------A   01760 P=13
    0x5578f3f92810 ---------A   01770 B8=B9=-1
    0x5578f3f92940 ---------A   01780 MAT G=ZER
    0x5578f3f92c80 ---------A   01790 Q1=FNR(-1)
    0x5578f3f92ed0 ---------A   01800 Q2=FNR(-1)
    0x5578f3f930a0 ---------A   01810 S1=FNR(-1)
    0x5578f3f93270 ---------A   01820 S2=FNR(-1)
    0x5578f3f937e0 ---------A   01830 N1=N2=N3=F9=P4=0
    0x5578f3f939f0 ---------A   01840 FOR I=1 TO 10
    0x5578f3f93c90 ---------A   01850 FOR J=1 TO 10
    0x5578f3f93f50 ---------A   01860 X1=RND(-1)*50
    0x5578f3f94310 ---------A   01870 N4=N5=N6=0
    0x5578f3f944c0 ---------A   01880 IF X1>.08 THEN 1900
    0x5578f3f946f0 ---------A   01890 N5=N5+1
    0x5578f3f948a0 ---------A T 01900 IF X1>.28 THEN 1920
    0x5578f3f94ad0 ---------A   01910 N5=N5+1
    0x5578f3f94c80 ---------A T 01920 IF X1>1.28 THEN 1940
    0x5578f3f94eb0 ---------A   01930 N5=N5+1
    0x5578f3f95060 ---------A T 01940 IF X1>3.28 THEN 1960
    0x5578f3f95290 ---------A   01950 N5=N5+1
    0x5578f3f95440 ---------A T 01960 IF X1>13.28 THEN 1980
    0x5578f3f95660 ---------A   01970 N5=N5+1
    0x5578f3f95810 ---------A T 01980 IF N2<36 THEN 2000
    0x5578f3f95990 ---------A   01990 N5=0
    0x5578f3f95b60 ---------A T 02000 N2=N2+N5
    0x5578f3f95d20 ---------A   02010 IF N1>2 THEN 2040
    0x5578f3f95f80 ---------A   02020 IF RND(-1)<.97 THEN 2040
    0x5578f3f96100 ---------A   02030 N4=1
    0x5578f3f96490 ---------A T 02040 N7=ABS(FNR(-1)-1)
    0x5578f3f96660 ---------A   02050 N1=N1+N4
    0x5578f3f96810 ---------A   02060 IF N5>3 THEN 2130
    0x5578f3f96ae0 ---------A   02070 X1=RND(-1)*40
    0x5578f3f96c90 ---------A   02080 IF X1>4.25 THEN 2100
    0x5578f3f96ec0 ---------A   02090 N6=N6+1
    0x5578f3f97070 ---------A T 02100 IF X1>16.25 THEN 2120
    0x5578f3f97290 ---------A   02110 N6=N6+1
    0x5578f3f97470 ---------A T 02120 N3=N3+N6
    0x5578f3f97af0 ---------A T 02130 G(I,J)=N6*1000+N5*100+N4*10+N7
    0x5578f3f97d40 ---------A   02140 IF RND(-1)>.45 THEN 2160
    0x5578f3f980e0 ---------A   02150 G(I,J)=G(I,J)+.1
    0x5578f3f98190 ---------A T 02160 NEXT J
    0x5578f3f98250 ---------A   02170 NEXT I
    0x5578f3f98410 ---------A   02180 IF N1>0 THEN 2230
    0x5578f3f985f0 ---------A   02190 I=FNR(-1)
    0x5578f3f987c0 ---------A   02200 J=FNR(-1)
    0x5578f3f98b50 ---------A   02210 G(I,J)=G(I,J)+10
    0x5578f3f98cc0 ---------A   02220 N1=1
    0x5578f3f98d50 ---------A T 02230 PRINT
    0x5578f3f98f40 ---------A   02240 PRINT N2;"CYLONS HAVE PENETRATED TERRAN SPACE."
    0x5578f3f990a0 ---------A   02250 PRINT ".....THEY ARE ASSISTED BY THE EASTERN ALLIANCE."
    0x5578f3f99350 ---------A   02260 PRINT "ONLY";N1;"TERRAN PLANET";
    0x5578f3f99500 ---------A   02270 IF N1<2 THEN 2300
    0x5578f3f99660 ---------A   02280 PRINT "S HAVE";
    0x5578f3f99ee0 ---------A   02290 GOTO 2310
    0x5578f3f9a040 ---------A T 02300 PRINT" HAS";
    0x5578f3f9a1b0 ---------A T 02310 PRINT" SURVIVED THE INITIAL ASSAULT."
    0x5578f3f9a470 ---------A   02320 PRINT"YOU HAVE UNTIL CENTARE";T0;"TO DEFEAT THE CYLONS"
    0x5578f3f9a5b0 ---------A   02330 PRINT"AND DRIVE AWAY THE EASTERN ALLIANCE."
    0x5578f3f9a630 ---------A   02340 PRINT
    0x5578f3f9a780 ---------A   02350 PRINT".....REMEMBER :"
    0x5578f3f9a8d0 ---------A   02360 PRINT".....DO NOT RUN INTO ANY BLACK HOLES....."
    0x5578f3f9a940 ---------A   02370 PRINT
    0x5578f3f9a9b0 ---------A   02380 PRINT
    0x5578f3f9abd0 ---------A   02390 C$="WHO CARES"
    0x5578f3f9ad20 ---------A T 02400 PRINT" CONTINUE(C)";
    0x5578f3f9ae80 ---------A   02410 INPUT A$
    0x5578f3f9b060 ---------A   02420 IF A$<>"C" THEN 2400
    0x5578f3f9b230 ---------A T 02430 IF N2=0 THEN 6580
    0x5578f3f9b5e0 ---------A   02440 N6=INT(INT(G(Q1,Q2))/1000)
    0x5578f3f9bb10 ---------A   02450 N5=INT(INT(G(Q1,Q2))/100)-N6*10
    0x5578f3f9c1c0 ---------A   02460 N4=INT(INT(G(Q1,Q2))/10)-N6*100-N5*10
    0x5578f3f9c890 ---------A   02470 N7=INT(G(Q1,Q2))-N6*1000-N5*100-N4*10
    0x5578f3f9c9c0 ---------A   02480 MAT Q=CON
    0x5578f3f9cce0 ---------A   02490 Q(S1,S2)=3
    0x5578f3f9ce90 ---------A   02500 IF F9<>1 THEN 2520
    0x5578f3f9d0d0 ---------A   02510 Q(B9,B8)=4
    0x5578f3f9d280 ---------A T 02520 IF N5=0 THEN 2710
    0x5578f3f9d300 ---------A   02530 PRINT
    0x5578f3f9d390 ---------A   02540 PRINT
    0x5578f3f9d4e0 ---------A   02550 PRINT"COMPUTER LASERS ACTIVATING  ** RED ALERT **"
    0x5578f3f9d560 ---------A   02560 PRINT
    0x5578f3f9d810 ---------A   02570 PRINT"SCANNERS SHOW";N5;"CYLON";
    0x5578f3f9d9c0 ---------A   02580 IF N5<2 THEN 2600
    0x5578f3f9db20 ---------A   02590 PRINT"S";
    0x5578f3f9dc50 ---------A T 02600 PRINT"."
    0x5578f3f9de20 ---------A   02610 FOR I=1 TO N5
    0x5578f3f9dea0 ---------A   02620 GOSUB 7000
    0x5578f3f9e0c0 ---------A   02630 K(I,1)=X1
    0x5578f3f9e2f0 ---------A   02640 K(I,2)=X2
    0x5578f3f9e4b0 ---------A   02650 IF F9=1 THEN 2690
    0x5578f3f9e950 ---------A   02660 K(I,3)=175+RND(0)*51
    0x5578f3f9eb00 ---------A   02670 IF Z9<>1THEN2690
    0x5578f3f9ef20 ---------A   02680 K(I,3)=K(I,3)/2
    0x5578f3f9f150 ---------A T 02690 Q(X1,X2)=5
    0x5578f3f9f200 ---------A   02700 NEXT I
    0x5578f3f9f3c0 ---------A T 02710 IF N6=0 THEN 2820
    0x5578f3f9f5a0 ---------A   02720 FOR I=1 TO N6
    0x5578f3f9f620 ---------A   02730 GOSUB 7000
    0x5578f3f9f840 ---------A   02740 R(I,1)=X1
    0x5578f3f9fa70 ---------A   02750 R(I,2)=X2
    0x5578f3f9fc30 ---------A   02760 IF F9=1 THEN 2800
    0x5578f3fa00d0 ---------A   02770 R(I,3)=175+RND(0)*51
    0x5578f3fa0280 ---------A   02780 IF Z9<>1THEN2800
    0x5578f3fa06a0 ---------A   02790 R(I,3)=R(I,3)/1.5
    0x5578f3fa08d0 ---------A T 02800 Q(X1,X2)=6
    0x5578f3fa0980 ---------A   02810 NEXT I
    0x5578f3fa0b40 ---------A T 02820 IF N7=0 THEN 2870
    0x5578f3fa0d20 ---------A   02830 I=1 TO N7
    0x5578f3fa0da0 ---------A   02840 GOSUB 7000
    0x5578f3fa0fc0 ---------A   02850 Q(X1,X2)=2
    0x5578f3fa1070 ---------A   02860 NEXT I
    0x5578f3fa1230 ---------A T 02870 IF N4=0 THEN 2930
    0x5578f3fa13f0 ---------A   02880 IF F9=1 THEN 2930
    0x5578f3fa1470 ---------A   02890 GOSUB 7000
    0x5578f3fa1690 ---------A   02900 Q(X1,X2)=4
    0x5578f3fa17c0 ---------A   02910 B9=X1
    0x5578f3fa1910 ---------A   02920 B8=X2
    0x5578f3fa1c60 ---------A T 02930 IF G(Q1,Q2)<>INT(G(Q1,Q2)) THEN 2960
    0x5578f3fa1ce0 ---------A   02940 GOSUB 7000
    0x5578f3fa1f00 ---------A   02950 Q(X1,X2)=7
    0x5578f3fa20b0 ---------A T 02960 IF N5<>0 THEN 2980
    0x5578f3fa2270 ---------A   02970 IF N6=0 THEN 2990
    0x5578f3fa22f0 ---------A T 02980 GOSUB 7040
    0x5578f3fa24a0 ---------A T 02990 IF N4=0 THEN 3040
    0x5578f3fa2680 ---------A   03000 IF C$<>"ORBITING" THEN 3040
    0x5578f3fa2800 ---------A   03010 P=13
    0x5578f3fa2970 ---------A   03020 E2=300
    0x5578f3fa29e0 ---------A   03030 GOTO3130
    0x5578f3fa2b80 ---------A T 03040 IF N5<>0 THEN 3060
    0x5578f3fa2d40 ---------A   03050 IF N6=0 THEN 3080
    0x5578f3fa2ee0 ---------A T 03060 C$="RED"
    0x5578f3fa2f60 ---------A   03070 GOTO3130
    0x5578f3fa3120 ---------A T 03080 IF E1>399 THEN 3120
    0x5578f3fa3280 ---------A   03090 PRINT"HYPERDRIVE COILS LOW.  ** YELLOW ALERT **"
    0x5578f3fa3410 ---------A   03100 C$="YELLOW"
    0x5578f3fa3480 ---------A   03110 GOTO3130
    0x5578f3fa3600 ---------A T 03120 C$="GREEN"
    0x5578f3fa37b0 ---------A T 03130 IF E1<1 THEN 6550
    0x5578f3fa3840 ---------A T 03140 PRINT
    0x5578f3fa3970 ---------A   03150 PRINT"==================="
    0x5578f3fa3b80 ---------A   03160 FOR I=1 TO 10
    0x5578f3fa3db0 ---------A   03170 FOR J=1 TO 10
    0x5578f3fa40b0 ---------A   03180 PRINT Q$(Q(I,J));" ";
    0x5578f3fa4160 ---------A   03190 NEXT J
    0x5578f3fa42f0 ---------A   03200 PRINT"  ";
    0x5578f3fa4a20 ---------A   03210 ON I GOTO 3220,3240,3260,3280,3300,3320,3340,3360,3380,3400
    0x5578f3fa4e10 ---------A T 03220 PRINT"CENTARE          ";T;"(UNTIL";T0;")"
    0x5578f3fa4e90 ---------A   03230 GOTO 3410
    0x5578f3fa5030 ---------A T 03240 PRINT"CONDITION         ";C$
    0x5578f3fa50b0 ---------A   03250 GOTO 3410
    0x5578f3fa53b0 ---------A T 03260 PRINT"QUADRANT      ";Q1;"-";Q2
    0x5578f3fa5430 ---------A   03270 GOTO 3410
    0x5578f3fa5730 ---------A T 03280 PRINT"SECTOR        ";S1;"-";S2
    0x5578f3fa57c0 ---------A   03290 GOTO 3410
    0x5578f3fa5a40 ---------A T 03300 PRINT"HYPERDRIVE AT    ";E1;"-DEVICE #1"
    0x5578f3fa5ac0 ---------A   03310 GOTO 3410
    0x5578f3fa5c60 ---------A T 03320 PRINT"STAR DRIVE AT    ";E2
    0x5578f3fa5cf0 ---------A   03330 GOTO 3410
    0x5578f3fa5f70 ---------A T 03340 PRINT"VIPER RESERVES   ";E3;"-DEVICE #2"
    0x5578f3fa6000 ---------A   03350 GOTO 3410
    0x5578f3fa6280 ---------A T 03360 PRINT"DEFENSE LASERS   ";E4;"-DEVICE #3"
    0x5578f3fa6300 ---------A   03370 GOTO 3410
    0x5578f3fa64a0 ---------A T 03380 PRINT"MISSILES         ";P
    0x5578f3fa6520 ---------A   03390 GOTO 3410
    0x5578f3fa66c0 ---------A T 03400 PRINT"CYLONS LEFT      ";N2
    0x5578f3fa6770 ---------A T 03410 NEXT I
    0x5578f3fa68c0 ---------A   03420 PRINT"==================="
    0x5578f3fa6a10 ---------A T 03430 PRINT "COMMAND ";
    0x5578f3fa6af0 ---------A   03440 INPUT A$
    0x5578f3fa6cd0 ---------A   03450 IF A$="Q" THEN 6710
    0x5578f3fa6f00 ---------A   03460 FOR I=1 TO 10
    0x5578f3fa70e0 ---------A   03470 IF A$=D$(I) THEN 3540
    0x5578f3fa71a0 ---------A   03480 NEXT I
    0x5578f3fa73d0 ---------A   03490 IF A$<>"OBIWAN KENOBI" THEN 6430
    0x5578f3fa7560 ---------A   03500 PRINT"YOU HAVE CALLED UPON THE LEGENDARY POWER OF THE FORCE FOR AID."
    0x5578f3fa76a0 ---------A   03510 PRINT"THE FORCE WEAKENS YOUR ENEMIES !"
    0x5578f3fa7810 ---------A   03520 Z9=1
    0x5578f3fa78b0 ---------A   03530 GOTO3430
    0x5578f3fa7fb0 ---------A T 03540 ON I GOTO 3550,3690,4730,5500,6780,4460,6160,6430,3140,6880
    0x5578f3fa8100 ---------A T 03550 PRINT"COURSE ";
    0x5578f3fa8250 ---------A   03560 INPUT C
    0x5578f3f99810 ---------A   03570 IF C<1 THEN 3430
    0x5578f3f999e0 ---------A   03580 IF C>=9 THEN 3430
    0x5578f3f99b50 ---------A   03590 PRINT "HYPERDRIVE JUMP SPEED ";
    0x5578f3f99ca0 ---------A   03600 INPUT W
    0x5578f3f99e60 ---------A   03610 IF W<1 THEN 3430
    0x5578f3fa9420 ---------A   03620 IF W>8 THEN 3430
    0x5578f3fa9730 ---------A   03630 X5=INT(W*8)
    0x5578f3fa9980 ---------A   03640 IF E1<=2*X5 THEN 3800
    0x5578f3fa9c40 ---------A   03650 E1=E1-2*X5
    0x5578f3fa9e70 ---------A   03660 T=T+SQR(W)
    0x5578f3faa180 ---------A   03670 E1=E1+325*SQR(W)
    0x5578f3faa1f0 ---------A   03680 GOTO 3850
    0x5578f3faa330 ---------A T 03690 PRINT"COURSE ";
    0x5578f3faa400 ---------A   03700 INPUT C
    0x5578f3faa5c0 ---------A   03710 IF C<1 THEN 3430
    0x5578f3faa790 ---------A   03720 IF C>=9 THEN 3430
    0x5578f3faa8f0 ---------A   03730 PRINT"STAR SPEED ";
    0x5578f3faa9c0 ---------A   03740 INPUT W
    0x5578f3faabe0 ---------A   03750 W=W/10
    0x5578f3faad90 ---------A   03760 IF W<.2 THEN 3430
    0x5578f3faaf50 ---------A   03770 IF W>.9 THEN 3430
    0x5578f3fab1e0 ---------A   03780 X5=INT(W*8)
    0x5578f3fab450 ---------A   03790 IF E2>=7.5*X5 THEN 3820
    0x5578f3fab5a0 ---------A T 03800 PRINT"INSUFFICIENT POWER FOR MOVEMENT"
    0x5578f3fab610 ---------A   03810 GOTO 3430
    0x5578f3fab8b0 ---------A T 03820 E2=E2-7.5*X5
    0x5578f3fabbc0 ---------A   03830 E1=E1+350*SQR(W)
    0x5578f3fabed0 ---------A   03840 T=T+SQR(W)/1.5
    0x5578f3fac100 ---------A T 03850 Q(S1,S2)=1
    0x5578f3fac290 ---------A   03860 C$="MOVING"
    0x5578f3fac400 ---------A   03870 IF T>T0 THEN 6550
    0x5578f3fac5c0 ---------A   03880 X=S1
    0x5578f3fac770 ---------A   03890 Y=S2
    0x5578f3fac7e0 ---------A   03900 GOSUB 6970
    0x5578f3fac9a0 ---------A   03910 FOR I=1TO X5
    0x5578f3facb80 ---------A   03920 S1=S1+X1
    0x5578f3facd50 ---------A   03930 S2=S2+X2
    0x5578f3facf10 ---------A   03940 IF S1<.5 THEN 4170
    0x5578f3fad0d0 ---------A   03950 IF S1>10.5 THEN 4170
    0x5578f3fad2a0 ---------A   03960 IF S2<.5 THEN 4170
    0x5578f3fad460 ---------A   03970 IF S2>10.5 THEN 4170
    0x5578f3fad760 ---------A   03980 X6=INT(S1+.5)
    0x5578f3fada60 ---------A   03990 X7=INT(S2+.5)
    0x5578f3fadcd0 ---------A   04000 IF Q(X6,X7)<>7 THEN 4040
    0x5578f3fadd80 ---------A   04010 PRINT
    0x5578f3fadee0 ---------A   04020 PRINT"** YOUR BATTLESTAR HAS BEEN ABSORBED BY A BLACK HOLE **"
    0x5578f3fadf60 ---------A   04030 GOTO6550
    0x5578f3fae350 ---------A T 04040 IF INT(ABS(X6-B9)+.5)>1 THEN 4180
    0x5578f3fae760 ---------A   04050 IF INT(ABS(X7-B8)+.5)>1 THEN 4180
    0x5578f3fae8c0 ---------A   04060 PRINT"DO YOU WISH TO ORBIT";
    0x5578f3fae9a0 ---------A   04070 INPUT A$
    0x5578f3faeb90 ---------A   04080 IF A$="Y" THEN 4120
    0x5578f3faed70 ---------A   04090 IF A$="YES" THEN 4120
    0x5578f3faefb0 ---------A   04100 B8=B9=F9=-1
    0x5578f3faf020 ---------A   04110 GOTO 4180
    0x5578f3faf1a0 ---------A T 04120 C$="ORBITING"
    0x5578f3faf2d0 ---------A   04130 S1=X6
    0x5578f3faf400 ---------A   04140 S2=X7
    0x5578f3faf570 ---------A   04150 F9=1
    0x5578f3faf5e0 ---------A   04160 GOTO 2430
    0x5578f3faf800 ---------A T 04170 F9=B8=B9=-1
    0x5578f3faf8b0 ---------A T 04180 NEXT I
    0x5578f3fafb30 ---------A   04190 S1=INT(S1+.5)
    0x5578f3fafda0 ---------A   04200 S2=INT(S2+.5)
    0x5578f3faff50 ---------A T 04210 IF S1>0 THEN 4250
    0x5578f3fb0170 ---------A   04220 S1=S1+10
    0x5578f3fb0380 ---------A   04230 Q1=Q1-1
    0x5578f3fb03f0 ---------A   04240 GOTO4210
    0x5578f3fb0590 ---------A T 04250 IF S1<11 THEN 4290
    0x5578f3fb07b0 ---------A   04260 S1=S1-10
    0x5578f3fb09c0 ---------A   04270 Q1=Q1+1
    0x5578f3fb0a30 ---------A   04280 GOTO4250
    0x5578f3fb0bd0 ---------A T 04290 IF S2>0 THEN 4330
    0x5578f3fb0df0 ---------A   04300 S2=S2+10
    0x5578f3fb1000 ---------A   04310 Q2=Q2-1
    0x5578f3fb1070 ---------A   04320 GOTO 4290
    0x5578f3fb1210 ---------A T 04330 IF S2<11 THEN 4370
    0x5578f3fb1430 ---------A   04340 S2=S2-10
    0x5578f3fb1640 ---------A   04350 Q2=Q2+1
    0x5578f3fb16b0 ---------A   04360 GOTO4330
    0x5578f3fb1850 ---------A T 04370 IF Q1>0 THEN 4390
    0x5578f3fb1a70 ---------A   04380 Q1=Q1+10
    0x5578f3fb1c20 ---------A T 04390 IF Q1<11 THEN 4410
    0x5578f3fb1e40 ---------A   04400 Q1=Q1-10
    0x5578f3fb1ff0 ---------A T 04410 IF Q2>0 THEN 4430
    0x5578f3fb2210 ---------A   04420 Q2=Q2+10
    0x5578f3fb23c0 ---------A T 04430 IF Q2<11 THEN 2430
    0x5578f3fb25e0 ---------A   04440 Q2=Q2-10
    0x5578f3fb2660 ---------A   04450 GOTO 2430
    0x5578f3fb3980 ---------A T 04460 IF T-INT(T)>RND(0)/7 THEN 4490
    0x5578f3fb3ad0 ---------A   04470 PRINT"NEBULA CLOUD PREVENTS SCAN"
    0x5578f3fb3b40 ---------A   04480 GOTO 3430
    0x5578f3fb3bd0 ---------A T 04490 PRINT
    0x5578f3fb3f20 ---------A   04500 PRINT"LONGE RANGE SENSOR SCAN FOR QUADRANT";Q1;"-";Q2
    0x5578f3fb4080 ---------A   04510 PRINT"     |--------|--------|--------|   POSITIONAL KEY (C P *)"
    0x5578f3fb43d0 ---------A   04520 FOR I=Q1-1 TO Q1+1
    0x5578f3fb4510 ---------A   04530 X1=I
    0x5578f3fb4860 ---------A   04540 FOR J=Q2-1 TO Q2+1
    0x5578f3fb49a0 ---------A   04550 X2=J
    0x5578f3fb4b50 ---------A   04560 IF X1>0 THEN 4580
    0x5578f3fb4d70 ---------A   04570 X1=X1+10
    0x5578f3fb4f20 ---------A T 04580 IF X1<11 THEN 4600
    0x5578f3fb5140 ---------A   04590 X1=X1-10
    0x5578f3fb52f0 ---------A T 04600 IF X2>0 THEN 4620
    0x5578f3fb5510 ---------A   04610 X2=X2+10
    0x5578f3fb56c0 ---------A T 04620 IF X2<11 THEN 4640
    0x5578f3fb58f0 ---------A   04630 X2=X2-10
    0x5578f3fb5cb0 ---------A T 04640 X3=INT(G(X1,X2)/1000)
    0x5578f3fb62e0 ---------A   04650 N(J-Q2+2)=INT(G(X1,X2))-X3*1000
    0x5578f3fb66b0 ---------A   04660 S(X1,X2)=N(J-Q2+2)
    0x5578f3fb6760 ---------A   04670 NEXT J
    0x5578f3fb71f0 ---------A   04680 PRINT TAB(5);"  ";N(1);TAB(14);"  ";N(2);TAB(23);"  ";N(3);
    0x5578f3fb7460 ---------A   04690 PRINT TAB(32);"  "
    0x5578f3fb75a0 ---------A   04700 PRINT"     |--------|--------|--------|"
    0x5578f3fb7650 ---------A   04710 NEXT I
    0x5578f3fb76d0 ---------A   04720 GOTO 3430
    0x5578f3fb7870 ---------A T 04730 IF N5>0 THEN 4770
    0x5578f3fb7a60 ---------A   04740 IF N6>0 THEN 4770
    0x5578f3fb7bc0 ---------A   04750 PRINT"YOU ARE HALLUCINATING; NOTHING IS OUT THERE !!!"
    0x5578f3fb7c50 ---------A   04760 GOTO 3430
    0x5578f3fb7e10 ---------A T 04770 PRINT "VIPERS STANDING BY. SQUADRON SIZE";E3
    0x5578f3fb7f70 ---------A   04780 PRINT "HOW MANY UNITS TO LAUNCH ";
    0x5578f3fb8050 ---------A   04790 INPUT X1
    0x5578f3fb81f0 ---------A   04800 IF E3>=X1 THEN 4830
    0x5578f3fb84a0 ---------A   04810 PRINT"I TOLD YOU THERE ARE ONLY";E3;"UNITS !!!"
    0x5578f3fb8510 ---------A   04820 GOTO 3430
    0x5578f3fb86c0 ---------A T 04830 IF X1<1 THEN 3430
    0x5578f3fb8800 ---------A   04840 PRINT"VIPERS LAUNCHED"
    0x5578f3fb89d0 ---------A   04850 E3=E3-X1
    0x5578f3fb8b80 ---------A   04860 IF N5=0 THEN5210
    0x5578f3fb8d80 ---------A T 04870 X8=0
    0x5578f3fb8f70 ---------A   04880 X9=100
    0x5578f3fb9160 ---------A   04890 FOR I=1 TO N5
    0x5578f3fb95f0 ---------A   04900 IF (FND(K(I,1),K(I,2)))>X9 THEN 4940
    0x5578f3fb98b0 ---------A   04910 IF K(I,3)<=0 THEN 4940
    0x5578f3fb9a00 ---------A   04920 X8=I
    0x5578f3fb9df0 ---------A   04930 X9=FND(K(I,1),K(I,2))
    0x5578f3fb9ea0 ---------A T 04940 NEXT I
    0x5578f3fba060 ---------A   04950 IF X8=0 THEN 5200
    0x5578f3fba1b0 ---------A   04960 I=X8
    0x5578f3fba630 ---------A   04970 IF FND(K(I,1),K(I,2))>3 THEN 5140
    0x5578f3fba8b0 ---------A   04980 IF X1<K(I,3) THEN 5100
    0x5578f3fbabc0 ---------A   04990 X1=X1-K(I,3)
    0x5578f3fbb1c0 ---------A T 05000 PRINT"CYLON BASE-STAR AT SECTOR";K(I,1);"-";K(I,2);"DESTROYED"
    0x5578f3fbb3d0 ---------A   05010 P4=P4+1
    0x5578f3fbb640 ---------A   05020 K(I,3)=0
    0x5578f3fbba70 ---------A   05030 Q(K(I,1),K(I,2))=1
    0x5578f3fbbc80 ---------A   05040 N2=N2-1
    0x5578f3fbbe40 ---------A   05050 IF N2=0 THEN 6580
    0x5578f3fbc1f0 ---------A   05060 G(Q1,Q2)=G(Q1,Q2)-100
    0x5578f3fbc470 ---------A   05070 IF S(Q1,Q2)=0 THEN 4870
    0x5578f3fbc810 ---------A   05080 S(Q1,Q2)=S(Q1,Q2)-100
    0x5578f3fbc8b0 ---------A   05090 GOTO 4870
    0x5578f3fbce40 ---------A T 05100 PRINT X1;"CYLON FIGHTERS REMOVED AT SECTOR";K(I,1);"-";K(I,2)
    0x5578f3fbd210 ---------A   05110 K(I,3)=K(I,3)-X1
    0x5578f3fbd380 ---------A   05120 X1=0
    0x5578f3fbd400 ---------A   05130 GOTO 5460
    0x5578f3fbdb80 ---------A T 05140 X2=K(I,3)*(FND(K(I,1),K(I,2))/3)^2
    0x5578f3fbdcf0 ---------A   05150 IF X1<X2 THEN 5180
    0x5578f3fbded0 ---------A   05160 X1=X1-X2
    0x5578f3fbdf50 ---------A   05170 GOTO 5000
    0x5578f3fbe5d0 ---------A T 05180 X1=X1/(FND(K(I,1),K(I,2))/3)^2
    0x5578f3fbe640 ---------A   05190 GOTO 5100
    0x5578f3fbe7e0 ---------A T 05200 IF X1=0 THEN 5460
    0x5578f3fbe9a0 ---------A T 05210 IF N6=0 THEN 5460
    0x5578f3fbeb90 ---------A   05220 FOR I=1 TO N6
    0x5578f3fbee60 ---------A   05230 IF R(I,3)<=0 THEN 5450
    0x5578f3fbf2f0 ---------A   05240 IF FND(R(I,1),R(I,2))>3 THEN 5390
    0x5578f3fbf570 ---------A   05250 IF X1<R(I,3) THEN 5350
    0x5578f3fbf880 ---------A   05260 X1=X1-R(I,3)
    0x5578f3fbfe70 ---------A T 05270 PRINT"E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2);"DESTROYED"
    0x5578f3fc0080 ---------A   05280 P4=P4+.5
    0x5578f3fc02f0 ---------A   05290 R(I,3)=0
    0x5578f3fc0720 ---------A   05300 Q(R(I,1),R(I,2))=1
    0x5578f3fc0940 ---------A   05310 N3=N3-1
    0x5578f3fc0cd0 ---------A   05320 G(Q1,Q2)=G(Q1,Q2)-1000
    0x5578f3fc0ee0 ---------A   05330 N6=N6-1
    0x5578f3fc0f80 ---------A   05340 GOTO 5460
    0x5578f3fc1510 ---------A T 05350 PRINT X1;"UNITS HIT IN E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5578f3fc18e0 ---------A   05360 R(I,3)=R(I,3)-X1
    0x5578f3fc1a50 ---------A   05370 X1=0
    0x5578f3fc1ad0 ---------A   05380 GOTO 5460
    0x5578f3fc2250 ---------A T 05390 X2=R(I,3)*(FND(R(I,1),R(I,2))/3)^2
    0x5578f3fc23c0 ---------A   05400 IF X1<X2 THEN 5430
    0x5578f3fc25a0 ---------A   05410 X1=X1-X2
    0x5578f3fc2620 ---------A   05420 GOTO 5270
    0x5578f3fc2ca0 ---------A T 05430 X1=X1/(FND(R(I,1),R(I,2))/3)^2
    0x5578f3fc2d10 ---------A   05440 GOTO 5350
    0x5578f3fc2db0 ---------A T 05450 NEXT I
    0x5578f3fc2fa0 ---------A T 05460 IF X1<10 THEN 5480
    0x5578f3fc3250 ---------A   05470 PRINT"COMPUTER REPORTS";X1;"VIPERS EXPLODED IN LAUNCH TUBES"
    0x5578f3fc32c0 ---------A T 05480 GOSUB 7040
    0x5578f3fc3320 ---------A   05490 GOTO 3430
    0x5578f3fc34d0 ---------A T 05500 IF P>0 THEN 5530
    0x5578f3fc3610 ---------A   05510 PRINT"MISSILES EXPENDED"
    0x5578f3fc3680 ---------A   05520 GOTO 3430
    0x5578f3fc37c0 ---------A T 05530 PRINT"COURSE ";
    0x5578f3fc3890 ---------A   05540 INPUT C
    0x5578f3fc3a50 ---------A   05550 IF C<1 THEN 3430
    0x5578f3fc3c10 ---------A   05560 IF C>=9 THEN 3430
    0x5578f3fc3c90 ---------A   05570 GOSUB 6970
    0x5578f3fc3db0 ---------A   05580 X=S1
    0x5578f3fc3ef0 ---------A   05590 Y=S2
    0x5578f3fc40c0 ---------A   05600 IF C$="ORBITING" THEN 5620
    0x5578f3fc42f0 ---------A   05610 P=P-1
    0x5578f3fc4430 ---------A T 05620 PRINT"MISSILE AWAY, TRACKING:"
    0x5578f3fc4600 ---------A T 05630 X=X+X1
    0x5578f3fc47d0 ---------A   05640 Y=Y+X2
    0x5578f3fc4990 ---------A   05650 IF X<.5 THEN 6140
    0x5578f3fc4b50 ---------A   05660 IF X>10.5 THEN 6140
    0x5578f3fc4d20 ---------A   05670 IF Y<.5 THEN 6140
    0x5578f3fc4f00 ---------A   05680 IF Y>10.5 THEN 6140
    0x5578f3fc5580 ---------A   05690 PRINT INT(X*100)/100;"-";INT(Y*100)/100
    0x5578f3fc57f0 ---------A   05700 X3=INT(X+.5)
    0x5578f3fc5b10 ---------A   05710 X4=INT(Y+.5)
    0x5578f3fc6120 ---------A   05720 ON Q(X3,X4) GOTO 5630,5750,5630,5920,5780,6010,5730
    0x5578f3fc6260 ---------A T 05730 PRINT"MISSILE ABSORBED BY BLACK HOLE"
    0x5578f3fc6300 ---------A   05740 GOTO 6140
    0x5578f3fc6440 ---------A T 05750 PRINT"MISSILE ABSORBED BY STAR - DISRUPTION SLIGHT"
    0x5578f3fc6790 ---------A   05760 P4=P4-RND(-1)*2
    0x5578f3fc6830 ---------A   05770 GOTO 6120
    0x5578f3fc6c20 ---------A T 05780 PRINT"CYLON BASE-STAR AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5578f3fc6e30 ---------A   05790 P4=P4+1
    0x5578f3fc7010 ---------A   05800 FOR I=1 TO N5
    0x5578f3fc72a0 ---------A   05810 IF K(I,1)<>X3 THEN 5900
    0x5578f3fc7520 ---------A   05820 IF K(I,2)<>X4 THEN 5900
    0x5578f3fc77b0 ---------A   05830 K(I,3)=0
    0x5578f3fc7b50 ---------A   05840 G(Q1,Q2)=G(Q1,Q2)-100
    0x5578f3fc7dd0 ---------A   05850 IF S(Q1,Q2)=0 THEN 5870
    0x5578f3fc8170 ---------A   05860 S(Q1,Q2)=S(Q1,Q2)-100
    0x5578f3fc8380 ---------A T 05870 N2=N2-1
    0x5578f3fc8530 ---------A   05880 IF N2=0 THEN 6580
    0x5578f3fc85b0 ---------A   05890 GOTO 6110
    0x5578f3fc8650 ---------A T 05900 NEXT I
    0x5578f3fc86f0 ---------A   05910 GOTO 6140
    0x5578f3fc8820 ---------A T 05920 PRINT "COMMANDER, WHAT HAVE YOU DONE ??!!"
    0x5578f3fc8a60 ---------A   05930 P4=P4-30
    0x5578f3fc8e60 ---------A   05940 PRINT"*** TERRAN PLANET AT SECTOR";X3;"-";X4;"DESTROYED ***"
    0x5578f3fc8f00 ---------A   05950 PRINT
    0x5578f3fc9060 ---------A   05960 PRINT"ENERGY BOLT APPROACHING FROM DIRECTION OF FORMER PLANET!"
    0x5578f3fc90f0 ---------A   05970 PRINT
    0x5578f3fc9240 ---------A   05980 PRINT"                     **** ZZZZAAP  ****"
    0x5578f3fc92b0 ---------A   05990 PRINT
    0x5578f3fc9340 ---------A   06000 GOTO6550
    0x5578f3fc9720 ---------A T 06010 PRINT"E.A.FLEET AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5578f3fc9930 ---------A   06020 P4=P4+.5
    0x5578f3fc9b10 ---------A   06030 FOR I=1 TO N6
    0x5578f3fc9da0 ---------A   06040 IF R(I,1)<>X3 THEN6100
    0x5578f3fca020 ---------A   06050 IF R(I,2)<>X4 THEN6100
    0x5578f3fa84e0 ---------A   06060 R(I,3)=0
    0x5578f3fa8870 ---------A   06070 G(Q1,Q2)=G(Q1,Q2)-1000
    0x5578f3fa8a80 ---------A   06080 N3=N3-1
    0x5578f3fa8af0 ---------A   06090 GOTO 6110
    0x5578f3fa8b90 ---------A T 06100 NEXT I
    0x5578f3fa8dd0 ---------A T 06110 Q(X3,X4)=1
    0x5578f3fa8e40 ---------A T 06120 GOSUB 7040
    0x5578f3fa8eb0 ---------A   06130 GOTO 3430
    0x5578f3fa8fd0 ---------A T 06140 PRINT"MISSILE MISSED TARGET"
    0x5578f3fa9060 ---------A   06150 GOTO 6120
    0x5578f3fa91b0 ---------A T 06160 PRINT"TRANSFER ENERGY FROM DEVICE # ";
    0x5578f3fcc090 ---------A   06170 INPUT X1
    0x5578f3fcc250 ---------A   06180 IF X1=0 THEN 3430
    0x5578f3fcc3a0 ---------A   06190 PRINT".... AND ALLOCATE TO DEVICE # ";
    0x5578f3fcc470 ---------A   06200 INPUT X2
    0x5578f3fcc630 ---------A   06210 IF X2=0 THEN 3430
    0x5578f3fcc7c0 ---------A   06220 IF X2>X1 THEN 6250
    0x5578f3fcc910 ---------A T 06230 PRINT"IMPOSSIBLE, COMMANDER !"
    0x5578f3fcc980 ---------A   06240 GOTO 3430
    0x5578f3fccb30 ---------A T 06250 IF X2>3 THEN 6230
    0x5578f3fccca0 ---------A   06260 PRINT"# OF UNITS TO TRANSFER ";
    0x5578f3fccd80 ---------A   06270 INPUT X3
    0x5578f3fccfa0 ---------A   06280 ON X1 GOTO 6290,6340
    0x5578f3fcd130 ---------A T 06290 IF E1>X3 THEN 6320
    0x5578f3fcd280 ---------A T 06300 PRINT"INSUFFICIENT POWER AVAILABLE"
    0x5578f3fcd2f0 ---------A   06310 GOTO 3430
    0x5578f3fcd4b0 ---------A T 06320 E1=E1-X3
    0x5578f3fcd520 ---------A   06330 GOTO 6360
    0x5578f3fcd680 ---------A T 06340 IF X3>E3 THEN 6300
    0x5578f3fcd870 ---------A   06350 E3=E3+X3
    0x5578f3fcdb60 ---------A T 06360 ON X2-1 GOTO 6370,6390
    0x5578f3fcdd30 ---------A T 06370 E3=E3+X3
    0x5578f3fcdda0 ---------A   06380 GOTO 6410
    0x5578f3fcdf60 ---------A T 06390 E4=E4+X3
    0x5578f3fce140 ---------A   06400 Q8=Q8+X3
    0x5578f3fce270 ---------A T 06410 PRINT"TRANSFER COMPLETE"
    0x5578f3fce310 ---------A   06420 GOTO 3430
    0x5578f3fce640 ---------A T 06430 PRINT" H -- HYPERDRIVE JUMP";TAB(37);"COURSE GUIDE"
    0x5578f3fce7b0 ---------A   06440 PRINT" SS - STAR-SPEED MANEUVER"
    0x5578f3fceb10 ---------A   06450 PRINT" L -- LONG RANGE SENSOR SCAN";TAB(40);"4  3  2"
    0x5578f3fcee70 ---------A   06460 PRINT" S -- SHORT RANGE SENSOR SCAN";TAB(42);"\|/"
    0x5578f3fcf1c0 ---------A   06470 PRINT" V -- LAUNCH VIPERS";TAB(40);"5 -*- 1"
    0x5578f3fcf520 ---------A   06480 PRINT" M -- FIRE MISSILE";TAB(42);"/|\"
    0x5578f3fcf870 ---------A   06490 PRINT" A -- ALLOCATE ENERGY UNITS";TAB(40);"6  7  8"
    0x5578f3fcf9c0 ---------A   06500 PRINT" G -- GENERATE POWER"
    0x5578f3fcfb20 ---------A   06510 PRINT" R -- RECALL LONG RANGE SENSOR INFORMATION"
    0x5578f3fcfc80 ---------A   06520 PRINT" C -- THIS LIST OF COMMANDS"
    0x5578f3fcfdc0 ---------A   06530 PRINT" Q -- QUIT GAME(ABNORMAL ENDING)"
    0x5578f3fcfe40 ---------A   06540 GOTO 3430
    0x5578f3fd8020 ---------A T 06550 PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5578f3fd8340 ---------A   06560 PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5578f3fd83d0 ---------A   06570 GOTO 6740
    0x5578f3fda490 ---------A T 06580 P4=P4-(T-T9)/2
    0x5578f3fda640 ---------A   06590 IF P4>10THEN6660
    0x5578f3fda6f0 ---------A   06600 PRINT
    0x5578f3fda870 ---------A   06610 PRINT"EVEN THOUGH THE CYLONS HAVE BEEN DESTROYED, AND THE"
    0x5578f3fda9e0 ---------A   06620 PRINT"EASTERN ALLIANCE HAS FLED, YOU HAVE BEEN TOO DAMAGING"
    0x5578f3fdab30 ---------A   06630 PRINT"TO TERRAN CIVILIZATIONS TO WIN."
    0x5578f3fdac70 ---------A   06640 PRINT"..... CALL IT A DRAW ....."
    0x5578f3fdace0 ---------A   06650 GOTO6740
    0x5578f3fdad50 ---------A T 06660 PRINT
    0x5578f3fdaec0 ---------A   06670 PRINT"CONGRATULATIONS, COMMANDER."
    0x5578f3fdb040 ---------A   06680 PRINT"THE CYLONS HAVE BEEN DESTROYED, AND THE EASTERN"
    0x5578f3fdb1a0 ---------A   06690 PRINT"ALLIANCE HAS FLED, MAKING THIS A GREAT VICTORY"
    0x5578f3fdb2e0 ---------A   06700 PRINT"FOR THE TERRAN EMPIRE."
    0x5578f3fdb370 ---------A T 06710 PRINT
    0x5578f3fdb4b0 ---------A   06720 PRINT"A RATING GREATER THAN 10 IS GOOD!"
    0x5578f3fdb850 ---------A   06730 P4=P4-(T-T9)/2
    0x5578f3fdba00 ---------A T 06740 PRINT"=RATING= ";P4
    0x5578f3fdba80 ---------A   06750 PRINT
    0x5578f3fdbbb0 ---------A   06760 PRINT"PLEASE TYPE* DONE"
    0x5578f3fdbc00 ---------A   06770 STOP
    0x5578f3fdbe00 ---------A T 06780 IF C$="GREEN" THEN6810
    0x5578f3fdbfe0 ---------A   06790 IF C$="YELLOW" THEN6810
    0x5578f3fdc060 ---------A   06800 GOTO6860
    0x5578f3fdc260 ---------A T 06810 E1=E1+500
    0x5578f3fdc470 ---------A   06820 T=T+.5
    0x5578f3fdc5f0 ---------A   06830 IF T>T0 THEN6550
    0x5578f3fdc730 ---------A   06840 PRINT"POWER GENERATED"
    0x5578f3fdc7b0 ---------A   06850 GOTO3430
    0x5578f3fdc8e0 ---------A T 06860 PRINT"IMPOSSIBLE UNDER RED ALERT"
    0x5578f3fdc950 ---------A   06870 GOTO3430
    0x5578f3fdc9b0 ---------A T 06880 PRINT
    0x5578f3fdcbc0 ---------A   06890 FOR X6=1TO10
    0x5578f3fdcdf0 ---------A   06900 FOR X7=1TO10
    0x5578f3fdd170 ---------A   06910 PRINT S(X6,X7);TAB(X7*5);
    0x5578f3fdd220 ---------A   06920 NEXT X7
    0x5578f3fdd2a0 ---------A   06930 PRINT
    0x5578f3fdd350 ---------A   06940 NEXT X6
    0x5578f3fdd3d0 ---------A   06950 GOTO3430
    0x5578f3fdd410 ---------A   06960 END
    0x5578f3fb2a70 ---------B G 06970 X1=-SIN((C-1)*.785398)
    0x5578f3fb2e80 ---------B   06980 X2=COS((C-1)*.785398)
    0x5578f3fb2ed0 ---------B   06990 RETURN
    0x5578f3fb30b0 ---------C B 07000 X1=FNR(-1)
    0x5578f3fb3290 ---------C   07010 X2=FNR(-1)
    0x5578f3fb3500 ---------C   07020 IF Q(X1,X2)<>1 THEN 7000
    0x5578f3fb3560 ---------C   07030 RETURN
    0x5578f3fd0020 ---------D G 07040 IF C$<>"ORBITING" THEN 7070
    0x5578f3fd0180 ---------D   07050 PRINT"PLANETARY DEFENSES PROTECT YOUR BATTLESTAR"
    0x5578f3feca40 ---------D   07060 GOTO 7640 (Pseudo Goto)
    0x5578f3fd03a0 ---------D T 07070 IF Z9=0THEN7090
    0x5578f3fd04f0 ---------D   07080 PRINT"THE FORCE IS WITH YOU !"
    0x5578f3fd0680 ---------D T 07090 C$="GREEN"
    0x5578f3fd0870 ---------D   07100 Q9=0
    0x5578f3fd0a20 ---------D   07110 IF N5=0 THEN 7310
    0x5578f3fd0c10 ---------D   07120 FOR I=1 TO N5
    0x5578f3fd0ed0 ---------D   07130 IF K(I,3)=0 THEN 7300
    0x5578f3fd1080 ---------D   07140 C$="RED"
    0x5578f3fd14f0 ---------D   07150 IF FND(K(I,1),K(I,2))>3 THEN 7250
    0x5578f3fd17d0 ---------D   07160 E4=E4-K(I,3)
    0x5578f3fd1ad0 ---------D   07170 Q9=Q9+K(I,3)
    0x5578f3fd2100 ---------D   07180 PRINT K(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5578f3fd2610 ---------D T 07190 PRINT"FROM CYLON AT SECTOR";K(I,1);"-";K(I,2)
    0x5578f3fd27c0 ---------D   07200 IF E4>0THEN7220
    0x5578f3fd2850 ---------D   07210 GOSUB 7650
    0x5578f3fd2a00 ---------D T 07220 IF E4>400 THEN 7240
    0x5578f3fd2b50 ---------D   07230 PRINT"LASER CANNONS FAILING !"
    0x5578f3fd2bd0 ---------D T 07240 GOTO 7300
    0x5578f3fd3350 ---------D T 07250 X1=K(I,3)/(FND(K(I,1),K(I,2))/3)^2
    0x5578f3fd3520 ---------D   07260 E4=E4-X1
    0x5578f3fd3710 ---------D   07270 Q9=Q9+X1
    0x5578f3fd3c20 ---------D   07280 PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5578f3fd3c90 ---------D   07290 GOTO 7190
    0x5578f3fd3d30 ---------D T 07300 NEXT I
    0x5578f3fd3ef0 ---------D T 07310 IF N6=0 THEN 7510
    0x5578f3fd40e0 ---------D   07320 FOR I=1 TO N6
    0x5578f3fd43a0 ---------D   07330 IF R(I,3)=0THEN7500
    0x5578f3fd4550 ---------D   07340 C$="RED"
    0x5578f3fd49c0 ---------D   07350 IF FND(R(I,1),R(I,2))>3 THEN 7450
    0x5578f3fd4ca0 ---------D   07360 E4=E4-R(I,3)
    0x5578f3fd4fa0 ---------D   07370 Q9=Q9+R(I,3)
    0x5578f3fd55d0 ---------D   07380 PRINT R(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5578f3fd5af0 ---------D T 07390 PRINT"FROM E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5578f3fd5ca0 ---------D   07400 IF E4>0 THEN 7420
    0x5578f3fd5d30 ---------D   07410 GOSUB 7650
    0x5578f3fd5ee0 ---------D T 07420 IF E4>400 THEN 7440
    0x5578f3fd6030 ---------D   07430 PRINT"LASER CANNONS FAILING !"
    0x5578f3fd60b0 ---------D T 07440 GOTO 7500
    0x5578f3fd6830 ---------D T 07450 X1=R(I,3)/(FND(R(I,1),R(I,2))/3)^2
    0x5578f3fd6a00 ---------D   07460 E4=E4-X1
    0x5578f3fd6bf0 ---------D   07470 Q9=Q9+X1
    0x5578f3fd7100 ---------D   07480 PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5578f3fd7170 ---------D   07490 GOTO 7390
    0x5578f3fd7210 ---------D T 07500 NEXT I
    0x5578f3fd73f0 ---------D T 07510 IF E1<=0THEN7570
    0x5578f3fd7890 ---------D   07520 PRINT ((Q8-E4)/Q8)*100;"PERCENT DAMAGE.";
    0x5578f3fd7b30 ---------D   07530 PRINT"          LASERS FIRING AT";E4;"."
    0x5578f3fd7cd0 ---------D   07540 IF Q9<E4 THEN 7560
    0x5578f3fd7e30 ---------D   07550 PRINT"COMMANDER, WE CANNOT WITHSTAND ANOTHER ATTACK !!"
    0x5578f3fecab0 ---------D T 07560 GOTO 7640 (Pseudo Goto)
    0x5578f3fe0480 ---------D T 07570 PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5578f3fe0a90 ---------D   07580 PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5578f3fed7c0 ---------D   07590 GOTO 7600
    0x5578f3fde080 ---------D T 07600 PRINT"=RATING= ";P4
    0x5578f3fe4b30 ---------D   07610 PRINT
    0x5578f3fe1de0 ---------D   07620 PRINT"PLEASE TYPE* DONE"
    0x5578f3fed960 ---------D   07630 STOP
    0x5578f3fed9f0 ---------D T 07640 RETURN (Pseudo)
    0x5578f3fecc80 ---------E G 07650 GOTO 7690 (Pseudo Goto)
    0x5578f3fdfec0 ---------E T 07660 PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5578f3fe33c0 ---------E   07670 PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5578f3fedb70 ---------E   07680 GOTO 7840
    0x5578f3fd8500 ---------E T 07690 PRINT"DRAWING ENERGY FOR LASER CANNONS"
    0x5578f3fd87c0 ---------E   07700 Q8=Q8-E4+1
    0x5578f3fd8b10 ---------E   07710 IF -E4*1.5+1>E3 THEN 7760
    0x5578f3fd8c60 ---------E   07720 VIPER FUEL RESERVES"
    0x5578f3fd8ff0 ---------E   07730 E3=E3-1+E4*1.25
    0x5578f3fd9160 ---------E   07740 E4=1
    0x5578f3fecb20 ---------E   07750 GOTO 7880 (Pseudo Goto)
    0x5578f3fd95b0 ---------E T 07760 IF -E4*1.5+1>E1+E3 THEN 7660
    0x5578f3fd9720 ---------E   07770 VIPER FUEL EXHAUSTED"
    0x5578f3fd9860 ---------E   07780 PRINT".......TAPPING HYPERDRIVE COILS"
    0x5578f3fd9a30 ---------E   07790 E4=E4+E3
    0x5578f3fd9ba0 ---------E   07800 E3=0
    0x5578f3fd9f30 ---------E   07810 E1=E1-1+E4*1.66
    0x5578f3fda0a0 ---------E   07820 E4=1
    0x5578f3fecb90 ---------E   07830 GOTO 7880 (Pseudo Goto)
    0x5578f3fe4fe0 ---------E T 07840 PRINT"=RATING= ";P4
    0x5578f3fe13c0 ---------E   07850 PRINT
    0x5578f3fe51c0 ---------E   07860 PRINT"PLEASE TYPE* DONE"
    0x5578f3fedbf0 ---------E   07870 STOP
    0x5578f3feca00 ---------E T 07880 RETURN (Pseudo)
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
char* data_01610s[]={".","*","B","P","C","E","O"};
char* data_01660s[]={"H","SS","V","M","G","L","S","C","A","R"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1610,  7,data_01610s},
    { 1660, 10,data_01660s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char* A_str;        // Comments?
int   B8_int;       // Comments?
int   B9_int;       // Comments?
int   C_int;        // Comments?
char* C_str;        // Comments?
char* D_str_arr[11];// Comments?
float E1_flt;       // Comments?
float E2_flt;       // Comments?
int   E3_int;       // Comments?
int   E4_int;       // Comments?
int   F9_int;       // Comments?
float G_flt_arr[11][11];// Comments?
int   G_int;        // Comments?
int   I_int;        // Comments?
int   J_int;        // Comments?
int   K_int_arr[6][4];  // Comments?
int   N_int_arr[10];// Comments?
int   N1_int;       // Comments?
int   N2_int;       // Comments?
int   N3_int;       // Comments?
int   N4_int;       // Comments?
int   N5_int;       // Comments?
int   N6_int;       // Comments?
int   N7_int;       // Comments?
int   P_int;        // Comments?
float P4_flt;       // Comments?
int   Q_int_arr[11][11];// Comments?
int   Q_int;        // Comments?
char* Q_str_arr[8]; // Comments?
int   Q1_int;       // Comments?
int   Q2_int;       // Comments?
int   Q8_int;       // Comments?
int   Q9_int;       // Comments?
int   R_int_arr[3][4];  // Comments?
int   S_int_arr[11][11];// Comments?
int   S1_int;       // Comments?
int   S2_int;       // Comments?
float T_flt;        // Comments?
int   T0_int;       // Comments?
int   T9_int;       // Comments?
int   W_int;        // Comments?
float X_flt;        // Comments?
int   X1_int;       // Comments?
float X2_flt;       // Comments?
int   X3_int;       // Comments?
int   X4_int;       // Comments?
int   X5_int;       // Comments?
int   X6_int;       // Comments?
int   X7_int;       // Comments?
int   X8_int;       // Comments?
int   X9_int;       // Comments?
float Y_flt;        // Comments?
int   Z9_int;       // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_06970();
void Routine_07000();
void Routine_07040();
void Routine_07650();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused X1,X2
int FND(int X1,float X2){
    int rtn=SQR(IPower((S1_int-X1_int),2)+IPower((S2_int-X2_flt),2));
    return(rtn);
}

#pragma argsused X1
int FNR(int X1){
    int rtn=INT(RND(X1_int)*10)+1;
    return(rtn);
}

//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_06970(){
    // 06970 X1=-SIN((C-1)*.785398)
    X1_int = -SIN((C_int-1)*0.785398);
    // 06980 X2=COS((C-1)*.785398)
    X2_flt = COS((C_int-1)*0.785398);
    // 06990 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_07000(){

  Lbl_07000:
    // 07000 X1=FNR(-1)
    X1_int = FNR(-1);
    // 07010 X2=FNR(-1)
    X2_flt = FNR(-1);
    // 07020 IF Q(X1,X2)<>1 THEN 7000
    if(Q_int_arr[(int)X1_int][(int)X2_flt]!=1)goto Lbl_07000;
    // 07030 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_07040(){
    // 07040 IF C$<>"ORBITING" THEN 7070
    if(strcmp(C_str,"ORBITING")!=0)goto Lbl_07070;
    // 07050 PRINT"PLANETARY DEFENSES PROTECT YOUR BATTLESTAR"
    b2c_fprintf(stdout,"PLANETARY DEFENSES PROTECT YOUR BATTLESTAR"); b2c_fprintf(stdout,"\n");
    // 07060 GOTO 7640 (Pseudo Goto)
    goto Lbl_07640;

  Lbl_07070:
    // 07070 IF Z9=0THEN7090
    if(Z9_int==0)goto Lbl_07090;
    // 07080 PRINT"THE FORCE IS WITH YOU !"
    b2c_fprintf(stdout,"THE FORCE IS WITH YOU !"); b2c_fprintf(stdout,"\n");

  Lbl_07090:
    // 07090 C$="GREEN"
    GLBpStr="GREEN";
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 07100 Q9=0
    Q9_int = 0;
    // 07110 IF N5=0 THEN 7310
    if(N5_int==0)goto Lbl_07310;
    // 07120 FOR I=1 TO N5
    for(I_int=1;I_int<=N5_int;I_int++){
        // 07130 IF K(I,3)=0 THEN 7300
        if(K_int_arr[(int)I_int][(int)3]==0)goto Lbl_07300;
        // 07140 C$="RED"
        GLBpStr="RED";
        C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 07150 IF FND(K(I,1),K(I,2))>3 THEN 7250
        if(FND(K_int_arr[(int)I_int][(int)1],K_int_arr[(int)I_int][(int)2])>3)goto Lbl_07250;
        // 07160 E4=E4-K(I,3)
        E4_int = E4_int-K_int_arr[(int)I_int][(int)3];
        // 07170 Q9=Q9+K(I,3)
        Q9_int = Q9_int+K_int_arr[(int)I_int][(int)3];
        // 07180 PRINT K(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
        b2c_fprintf(stdout," %d UNIT HIT ON LASER%d",K_int_arr[(int)I_int][(int)3],INT(RND(-1)*10)+1); 

  Lbl_07190:
        // 07190 PRINT"FROM CYLON AT SECTOR";K(I,1);"-";K(I,2)
        b2c_fprintf(stdout,"FROM CYLON AT SECTOR %d - %d ",K_int_arr[(int)I_int][(int)1],K_int_arr[(int)I_int][(int)2]); b2c_fprintf(stdout,"\n");
        // 07200 IF E4>0THEN7220
        if(E4_int>0)goto Lbl_07220;
        // 07210 GOSUB 7650
        Routine_07650();

  Lbl_07220:
        // 07220 IF E4>400 THEN 7240
        if(E4_int>400)goto Lbl_07240;
        // 07230 PRINT"LASER CANNONS FAILING !"
        b2c_fprintf(stdout,"LASER CANNONS FAILING !"); b2c_fprintf(stdout,"\n");

  Lbl_07240:
        // 07240 GOTO 7300
        goto Lbl_07300;

  Lbl_07250:
        // 07250 X1=K(I,3)/(FND(K(I,1),K(I,2))/3)^2
        X1_int = K_int_arr[(int)I_int][(int)3]/IPower((FND(K_int_arr[(int)I_int][(int)1],K_int_arr[(int)I_int][(int)2])/3),2);
        // 07260 E4=E4-X1
        E4_int = E4_int-X1_int;
        // 07270 Q9=Q9+X1
        Q9_int = Q9_int+X1_int;
        // 07280 PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
        b2c_fprintf(stdout," %d UNIT HIT ON LASER%d",X1_int,INT(RND(-1)*10)+1); 
        // 07290 GOTO 7190
        goto Lbl_07190;

  Lbl_07300:
        // 07300 NEXT I
        int dummy_7300=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_07310:
    // 07310 IF N6=0 THEN 7510
    if(N6_int==0)goto Lbl_07510;
    // 07320 FOR I=1 TO N6
    for(I_int=1;I_int<=N6_int;I_int++){
        // 07330 IF R(I,3)=0THEN7500
        if(R_int_arr[(int)I_int][(int)3]==0)goto Lbl_07500;
        // 07340 C$="RED"
        GLBpStr="RED";
        C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 07350 IF FND(R(I,1),R(I,2))>3 THEN 7450
        if(FND(R_int_arr[(int)I_int][(int)1],R_int_arr[(int)I_int][(int)2])>3)goto Lbl_07450;
        // 07360 E4=E4-R(I,3)
        E4_int = E4_int-R_int_arr[(int)I_int][(int)3];
        // 07370 Q9=Q9+R(I,3)
        Q9_int = Q9_int+R_int_arr[(int)I_int][(int)3];
        // 07380 PRINT R(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
        b2c_fprintf(stdout," %d UNIT HIT ON LASER%d",R_int_arr[(int)I_int][(int)3],INT(RND(-1)*10)+1); 

  Lbl_07390:
        // 07390 PRINT"FROM E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
        b2c_fprintf(stdout,"FROM E.A.FLEET AT SECTOR %d - %d ",R_int_arr[(int)I_int][(int)1],R_int_arr[(int)I_int][(int)2]); b2c_fprintf(stdout,"\n");
        // 07400 IF E4>0 THEN 7420
        if(E4_int>0)goto Lbl_07420;
        // 07410 GOSUB 7650
        Routine_07650();

  Lbl_07420:
        // 07420 IF E4>400 THEN 7440
        if(E4_int>400)goto Lbl_07440;
        // 07430 PRINT"LASER CANNONS FAILING !"
        b2c_fprintf(stdout,"LASER CANNONS FAILING !"); b2c_fprintf(stdout,"\n");

  Lbl_07440:
        // 07440 GOTO 7500
        goto Lbl_07500;

  Lbl_07450:
        // 07450 X1=R(I,3)/(FND(R(I,1),R(I,2))/3)^2
        X1_int = R_int_arr[(int)I_int][(int)3]/IPower((FND(R_int_arr[(int)I_int][(int)1],R_int_arr[(int)I_int][(int)2])/3),2);
        // 07460 E4=E4-X1
        E4_int = E4_int-X1_int;
        // 07470 Q9=Q9+X1
        Q9_int = Q9_int+X1_int;
        // 07480 PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
        b2c_fprintf(stdout," %d UNIT HIT ON LASER%d",X1_int,INT(RND(-1)*10)+1); 
        // 07490 GOTO 7390
        goto Lbl_07390;

  Lbl_07500:
        // 07500 NEXT I
        int dummy_7500=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_07510:
    // 07510 IF E1<=0THEN7570
    if(E1_flt<=0)goto Lbl_07570;
    // 07520 PRINT ((Q8-E4)/Q8)*100;"PERCENT DAMAGE.";
    b2c_fprintf(stdout,"%dPERCENT DAMAGE.",((Q8_int-E4_int)/Q8_int)*100); 
    // 07530 PRINT"          LASERS FIRING AT";E4;"."
    b2c_fprintf(stdout,"          LASERS FIRING AT %d .",E4_int); b2c_fprintf(stdout,"\n");
    // 07540 IF Q9<E4 THEN 7560
    if(Q9_int<E4_int)goto Lbl_07560;
    // 07550 PRINT"COMMANDER, WE CANNOT WITHSTAND ANOTHER ATTACK !!"
    b2c_fprintf(stdout,"COMMANDER, WE CANNOT WITHSTAND ANOTHER ATTACK !!"); b2c_fprintf(stdout,"\n");

  Lbl_07560:
    // 07560 GOTO 7640 (Pseudo Goto)
    goto Lbl_07640;

  Lbl_07570:
    // 07570 PRINT"*** YOU HAVE BEEN DEFEATED ***"
    b2c_fprintf(stdout,"*** YOU HAVE BEEN DEFEATED ***"); b2c_fprintf(stdout,"\n");
    // 07580 PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    b2c_fprintf(stdout," %d CYLON BASE-STARS AND %d E.A.FLEETS REMAIN !!!!",N2_int,N3_int); b2c_fprintf(stdout,"\n");
    // 07590 GOTO 7600
    goto Lbl_07600;

  Lbl_07600:
    // 07600 PRINT"=RATING= ";P4
    b2c_fprintf(stdout,"=RATING=  %f ",P4_flt); b2c_fprintf(stdout,"\n");
    // 07610 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 07620 PRINT"PLEASE TYPE* DONE"
    b2c_fprintf(stdout,"PLEASE TYPE* DONE"); b2c_fprintf(stdout,"\n");
    // 07630 STOP
    exit(1);

  Lbl_07640:
    // 07640 RETURN (Pseudo)
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

void Routine_07650(){
    // 07650 GOTO 7690 (Pseudo Goto)
    goto Lbl_07690;

  Lbl_07660:
    // 07660 PRINT"*** YOU HAVE BEEN DEFEATED ***"
    b2c_fprintf(stdout,"*** YOU HAVE BEEN DEFEATED ***"); b2c_fprintf(stdout,"\n");
    // 07670 PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    b2c_fprintf(stdout," %d CYLON BASE-STARS AND %d E.A.FLEETS REMAIN !!!!",N2_int,N3_int); b2c_fprintf(stdout,"\n");
    // 07680 GOTO 7840
    goto Lbl_07840;

  Lbl_07690:
    // 07690 PRINT"DRAWING ENERGY FOR LASER CANNONS"
    b2c_fprintf(stdout,"DRAWING ENERGY FOR LASER CANNONS"); b2c_fprintf(stdout,"\n");
    // 07700 Q8=Q8-E4+1
    Q8_int = Q8_int-E4_int+1;
    // 07710 IF -E4*1.5+1>E3 THEN 7760
    if(-E4_int*1.5+1>E3_int)goto Lbl_07760;
    // 07720 VIPER FUEL RESERVES"
    b2c_fprintf(stdout,".....TAPPING VIPER FUEL RESERVES"); b2c_fprintf(stdout,"\n");
    // 07730 E3=E3-1+E4*1.25
    E3_int = E3_int-1+E4_int*1.25;
    // 07740 E4=1
    E4_int = 1;
    // 07750 GOTO 7880 (Pseudo Goto)
    goto Lbl_07880;

  Lbl_07760:
    // 07760 IF -E4*1.5+1>E1+E3 THEN 7660
    if(-E4_int*1.5+1>E1_flt+E3_int)goto Lbl_07660;
    // 07770 VIPER FUEL EXHAUSTED"
    b2c_fprintf(stdout,"....> VIPER FUEL EXHAUSTED"); b2c_fprintf(stdout,"\n");
    // 07780 PRINT".......TAPPING HYPERDRIVE COILS"
    b2c_fprintf(stdout,".......TAPPING HYPERDRIVE COILS"); b2c_fprintf(stdout,"\n");
    // 07790 E4=E4+E3
    E4_int = E4_int+E3_int;
    // 07800 E3=0
    E3_int = 0;
    // 07810 E1=E1-1+E4*1.66
    E1_flt = E1_flt-1+E4_int*1.66;
    // 07820 E4=1
    E4_int = 1;
    // 07830 GOTO 7880 (Pseudo Goto)
    goto Lbl_07880;

  Lbl_07840:
    // 07840 PRINT"=RATING= ";P4
    b2c_fprintf(stdout,"=RATING=  %f ",P4_flt); b2c_fprintf(stdout,"\n");
    // 07850 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 07860 PRINT"PLEASE TYPE* DONE"
    b2c_fprintf(stdout,"PLEASE TYPE* DONE"); b2c_fprintf(stdout,"\n");
    // 07870 STOP
    exit(1);

  Lbl_07880:
    // 07880 RETURN (Pseudo)
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM Game of BattleStar
    // 01010 REM 
    // 01020 REM Variable List:
    // 01030 REM     A$			- 
    // 01040 REM     B8			- 
    // 01050 REM     B9			- 
    // 01060 REM     C			- 
    // 01070 REM     C$			- Alert Condition
    // 01080 REM     D$[11]		- 
    // 01090 REM     E1			- Hyperdrive Coil Energy
    // 01100 REM     E2			- Star Drive Energy
    // 01110 REM     E3			- Viper Reserve Energy
    // 01120 REM     E4			- Defence Laser Energy
    // 01130 REM     F9			- 
    // 01140 REM     G[11][11]	- 
    // 01150 REM     I			- 
    // 01160 REM     J			- 
    // 01170 REM     K[6][4]	- 
    // 01180 REM     N[10]		- 
    // 01190 REM     N1			- 
    // 01200 REM     N2			- Cylons left.
    // 01210 REM     N3			- 
    // 01220 REM     N4			- 
    // 01230 REM     N5			- 
    // 01240 REM     N6			- 
    // 01250 REM     N7			- 
    // 01260 REM     P			- Number of missles
    // 01270 REM     P4			- 
    // 01280 REM     Q[11][11]	- 
    // 01290 REM     Q$[8]		- 
    // 01300 REM     Q1			- Quadrant Indice
    // 01310 REM     Q2			- Quadrant Indice
    // 01320 REM     Q8			- 
    // 01330 REM     Q9			- 
    // 01340 REM     R[3][4]	- 
    // 01350 REM     S[11][11]	- 
    // 01360 REM     S1			- Sector Indice
    // 01370 REM     S2			- Sector Indice
    // 01380 REM     T			- Game time in Centare
    // 01390 REM     T0			- End time for game. 
    // 01400 REM     T9			- 
    // 01410 REM     W			- 
    // 01420 REM     X			- 
    // 01430 REM     X1			- 
    // 01440 REM     X2			- 
    // 01450 REM     X3			- 
    // 01460 REM     X4			- 
    // 01470 REM     X5			- 
    // 01480 REM     X6			- 
    // 01490 REM     X7			- 
    // 01500 REM     X8			- 
    // 01510 REM     X9			- 
    // 01520 REM     Y			- 
    // 01530 REM     Z9			- 
    // 01540 DIM Q(10,10),G(10,10),K(5,3),R(2,3),Q$(7),S(10,10)
    // 01550 PRINT"WELCOME TO ** BATTLESTAR **          (BY RWMELHUISH)"
    b2c_fprintf(stdout,"WELCOME TO ** BATTLESTAR **          (BY RWMELHUISH)"); b2c_fprintf(stdout,"\n");
    // 01560 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01570 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01580 FOR I=1 TO 7
    for(I_int=1;I_int<=7;I_int++){
        // 01590 READ Q$(I)
        Q_str_arr[(int)I_int] = Get_Data_String();
        // 01600 NEXT I
        int dummy_1600=0; // Ignore this line.
    }; // End-For(I_int)
    // 01610 DATA ".","*",B,P,C,E,O
    // 01620 DIM D$(10)
    // 01630 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 01640 READ D$(I)
        D_str_arr[(int)I_int] = Get_Data_String();
        // 01650 NEXT I
        int dummy_1650=0; // Ignore this line.
    }; // End-For(I_int)
    // 01660 DATA H,SS,V,M,G,L,S,C,A,R
    // 01670 T0=INT(RND(-1)*20000)/10+INT(RND(-1)*5000)
    T0_int = INT(RND(-1)*20000)/10+INT(RND(-1)*5000);
    // 01680 Z9=0
    Z9_int = 0;
    // 01690 DEF FND(X1,X2)=SQR((S1-X1)^2+(S2-X2)^2)
    // 01700 DEF FNR(X1)=INT(RND(X1)*10)+1
    // 01710 T=T9=T0-(60-3*ABS(FNR(-1)-5))
    T9_int = T_flt = T0_int-(60-3*ABS(FNR(-1)-5));
    // 01720 E1=1250
    E1_flt = 1250;
    // 01730 E2=300
    E2_flt = 300;
    // 01740 E3=2000
    E3_int = 2000;
    // 01750 Q8=E4=1250
    E4_int = Q8_int = 1250;
    // 01760 P=13
    P_int = 13;
    // 01770 B8=B9=-1
    B9_int = B8_int = -1;
    // 01780 MAT G=ZER
    for(int d0=0;d0<11;d0++){
        for(int d1=0;d1<11;d1++){
            G_flt_arr[d0][d1]=0;
        }
    }
    // 01790 Q1=FNR(-1)
    Q1_int = FNR(-1);
    // 01800 Q2=FNR(-1)
    Q2_int = FNR(-1);
    // 01810 S1=FNR(-1)
    S1_int = FNR(-1);
    // 01820 S2=FNR(-1)
    S2_int = FNR(-1);
    // 01830 N1=N2=N3=F9=P4=0
    P4_flt = F9_int = N3_int = N2_int = N1_int = 0;
    // 01840 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 01850 FOR J=1 TO 10
        for(J_int=1;J_int<=10;J_int++){
            // 01860 X1=RND(-1)*50
            X1_int = RND(-1)*50;
            // 01870 N4=N5=N6=0
            N6_int = N5_int = N4_int = 0;
            // 01880 IF X1>.08 THEN 1900
            if(X1_int>0.08)goto Lbl_01900;
            // 01890 N5=N5+1
            N5_int = N5_int+1;

  Lbl_01900:
            // 01900 IF X1>.28 THEN 1920
            if(X1_int>0.28)goto Lbl_01920;
            // 01910 N5=N5+1
            N5_int = N5_int+1;

  Lbl_01920:
            // 01920 IF X1>1.28 THEN 1940
            if(X1_int>1.28)goto Lbl_01940;
            // 01930 N5=N5+1
            N5_int = N5_int+1;

  Lbl_01940:
            // 01940 IF X1>3.28 THEN 1960
            if(X1_int>3.28)goto Lbl_01960;
            // 01950 N5=N5+1
            N5_int = N5_int+1;

  Lbl_01960:
            // 01960 IF X1>13.28 THEN 1980
            if(X1_int>13.28)goto Lbl_01980;
            // 01970 N5=N5+1
            N5_int = N5_int+1;

  Lbl_01980:
            // 01980 IF N2<36 THEN 2000
            if(N2_int<36)goto Lbl_02000;
            // 01990 N5=0
            N5_int = 0;

  Lbl_02000:
            // 02000 N2=N2+N5
            N2_int = N2_int+N5_int;
            // 02010 IF N1>2 THEN 2040
            if(N1_int>2)goto Lbl_02040;
            // 02020 IF RND(-1)<.97 THEN 2040
            if(RND(-1)<0.97)goto Lbl_02040;
            // 02030 N4=1
            N4_int = 1;

  Lbl_02040:
            // 02040 N7=ABS(FNR(-1)-1)
            N7_int = ABS(FNR(-1)-1);
            // 02050 N1=N1+N4
            N1_int = N1_int+N4_int;
            // 02060 IF N5>3 THEN 2130
            if(N5_int>3)goto Lbl_02130;
            // 02070 X1=RND(-1)*40
            X1_int = RND(-1)*40;
            // 02080 IF X1>4.25 THEN 2100
            if(X1_int>4.25)goto Lbl_02100;
            // 02090 N6=N6+1
            N6_int = N6_int+1;

  Lbl_02100:
            // 02100 IF X1>16.25 THEN 2120
            if(X1_int>16.25)goto Lbl_02120;
            // 02110 N6=N6+1
            N6_int = N6_int+1;

  Lbl_02120:
            // 02120 N3=N3+N6
            N3_int = N3_int+N6_int;

  Lbl_02130:
            // 02130 G(I,J)=N6*1000+N5*100+N4*10+N7
            G_flt_arr[(int)I_int][(int)J_int] = N6_int*1000+N5_int*100+N4_int*10+N7_int;
            // 02140 IF RND(-1)>.45 THEN 2160
            if(RND(-1)>0.45)goto Lbl_02160;
            // 02150 G(I,J)=G(I,J)+.1
            G_flt_arr[(int)I_int][(int)J_int] = G_flt_arr[(int)I_int][(int)J_int]+0.1;

  Lbl_02160:
            // 02160 NEXT J
            int dummy_2160=0; // Ignore this line.
        }; // End-For(J_int)
        // 02170 NEXT I
        int dummy_2170=0; // Ignore this line.
    }; // End-For(I_int)
    // 02180 IF N1>0 THEN 2230
    if(N1_int>0)goto Lbl_02230;
    // 02190 I=FNR(-1)
    I_int = FNR(-1);
    // 02200 J=FNR(-1)
    J_int = FNR(-1);
    // 02210 G(I,J)=G(I,J)+10
    G_flt_arr[(int)I_int][(int)J_int] = G_flt_arr[(int)I_int][(int)J_int]+10;
    // 02220 N1=1
    N1_int = 1;

  Lbl_02230:
    // 02230 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02240 PRINT N2;"CYLONS HAVE PENETRATED TERRAN SPACE."
    b2c_fprintf(stdout," %d CYLONS HAVE PENETRATED TERRAN SPACE.",N2_int); b2c_fprintf(stdout,"\n");
    // 02250 PRINT ".....THEY ARE ASSISTED BY THE EASTERN ALLIANCE."
    b2c_fprintf(stdout,".....THEY ARE ASSISTED BY THE EASTERN ALLIANCE."); b2c_fprintf(stdout,"\n");
    // 02260 PRINT "ONLY";N1;"TERRAN PLANET";
    b2c_fprintf(stdout,"ONLY %d TERRAN PLANET",N1_int); 
    // 02270 IF N1<2 THEN 2300
    if(N1_int<2)goto Lbl_02300;
    // 02280 PRINT "S HAVE";
    b2c_fprintf(stdout,"S HAVE"); 
    // 02290 GOTO 2310
    goto Lbl_02310;

  Lbl_02300:
    // 02300 PRINT" HAS";
    b2c_fprintf(stdout," HAS"); 

  Lbl_02310:
    // 02310 PRINT" SURVIVED THE INITIAL ASSAULT."
    b2c_fprintf(stdout," SURVIVED THE INITIAL ASSAULT."); b2c_fprintf(stdout,"\n");
    // 02320 PRINT"YOU HAVE UNTIL CENTARE";T0;"TO DEFEAT THE CYLONS"
    b2c_fprintf(stdout,"YOU HAVE UNTIL CENTARE %d TO DEFEAT THE CYLONS",T0_int); b2c_fprintf(stdout,"\n");
    // 02330 PRINT"AND DRIVE AWAY THE EASTERN ALLIANCE."
    b2c_fprintf(stdout,"AND DRIVE AWAY THE EASTERN ALLIANCE."); b2c_fprintf(stdout,"\n");
    // 02340 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02350 PRINT".....REMEMBER :"
    b2c_fprintf(stdout,".....REMEMBER :"); b2c_fprintf(stdout,"\n");
    // 02360 PRINT".....DO NOT RUN INTO ANY BLACK HOLES....."
    b2c_fprintf(stdout,".....DO NOT RUN INTO ANY BLACK HOLES....."); b2c_fprintf(stdout,"\n");
    // 02370 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02380 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02390 C$="WHO CARES"
    GLBpStr="WHO CARES";
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_02400:
    // 02400 PRINT" CONTINUE(C)";
    b2c_fprintf(stdout," CONTINUE(C)"); 
    // 02410 INPUT A$
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
            A_str = "";
        }else{
            A_str = ps_02410;
        };
    }; // End of Basic INPUT statement 02410
    // 02420 IF A$<>"C" THEN 2400
    if(strcmp(A_str,"C")!=0)goto Lbl_02400;

  Lbl_02430:
    // 02430 IF N2=0 THEN 6580
    if(N2_int==0)goto Lbl_06580;
    // 02440 N6=INT(INT(G(Q1,Q2))/1000)
    N6_int = INT(INT(G_flt_arr[(int)Q1_int][(int)Q2_int])/1000);
    // 02450 N5=INT(INT(G(Q1,Q2))/100)-N6*10
    N5_int = INT(INT(G_flt_arr[(int)Q1_int][(int)Q2_int])/100)-N6_int*10;
    // 02460 N4=INT(INT(G(Q1,Q2))/10)-N6*100-N5*10
    N4_int = INT(INT(G_flt_arr[(int)Q1_int][(int)Q2_int])/10)-N6_int*100-N5_int*10;
    // 02470 N7=INT(G(Q1,Q2))-N6*1000-N5*100-N4*10
    N7_int = INT(G_flt_arr[(int)Q1_int][(int)Q2_int])-N6_int*1000-N5_int*100-N4_int*10;
    // 02480 MAT Q=CON
    for(int d0=0;d0<11;d0++){
        for(int d1=0;d1<11;d1++){
            Q_int_arr[d0][d1]=1;
        }
    }
    // 02490 Q(S1,S2)=3
    Q_int_arr[(int)S1_int][(int)S2_int] = 3;
    // 02500 IF F9<>1 THEN 2520
    if(F9_int!=1)goto Lbl_02520;
    // 02510 Q(B9,B8)=4
    Q_int_arr[(int)B9_int][(int)B8_int] = 4;

  Lbl_02520:
    // 02520 IF N5=0 THEN 2710
    if(N5_int==0)goto Lbl_02710;
    // 02530 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02540 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02550 PRINT"COMPUTER LASERS ACTIVATING  ** RED ALERT **"
    b2c_fprintf(stdout,"COMPUTER LASERS ACTIVATING  ** RED ALERT **"); b2c_fprintf(stdout,"\n");
    // 02560 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02570 PRINT"SCANNERS SHOW";N5;"CYLON";
    b2c_fprintf(stdout,"SCANNERS SHOW %d CYLON",N5_int); 
    // 02580 IF N5<2 THEN 2600
    if(N5_int<2)goto Lbl_02600;
    // 02590 PRINT"S";
    b2c_fprintf(stdout,"S"); 

  Lbl_02600:
    // 02600 PRINT"."
    b2c_fprintf(stdout,"."); b2c_fprintf(stdout,"\n");
    // 02610 FOR I=1 TO N5
    for(I_int=1;I_int<=N5_int;I_int++){
        // 02620 GOSUB 7000
        Routine_07000();
        // 02630 K(I,1)=X1
        K_int_arr[(int)I_int][(int)1] = X1_int;
        // 02640 K(I,2)=X2
        K_int_arr[(int)I_int][(int)2] = X2_flt;
        // 02650 IF F9=1 THEN 2690
        if(F9_int==1)goto Lbl_02690;
        // 02660 K(I,3)=175+RND(0)*51
        K_int_arr[(int)I_int][(int)3] = 175+RND(0)*51;
        // 02670 IF Z9<>1THEN2690
        if(Z9_int!=1)goto Lbl_02690;
        // 02680 K(I,3)=K(I,3)/2
        K_int_arr[(int)I_int][(int)3] = K_int_arr[(int)I_int][(int)3]/2;

  Lbl_02690:
        // 02690 Q(X1,X2)=5
        Q_int_arr[(int)X1_int][(int)X2_flt] = 5;
        // 02700 NEXT I
        int dummy_2700=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_02710:
    // 02710 IF N6=0 THEN 2820
    if(N6_int==0)goto Lbl_02820;
    // 02720 FOR I=1 TO N6
    for(I_int=1;I_int<=N6_int;I_int++){
        // 02730 GOSUB 7000
        Routine_07000();
        // 02740 R(I,1)=X1
        R_int_arr[(int)I_int][(int)1] = X1_int;
        // 02750 R(I,2)=X2
        R_int_arr[(int)I_int][(int)2] = X2_flt;
        // 02760 IF F9=1 THEN 2800
        if(F9_int==1)goto Lbl_02800;
        // 02770 R(I,3)=175+RND(0)*51
        R_int_arr[(int)I_int][(int)3] = 175+RND(0)*51;
        // 02780 IF Z9<>1THEN2800
        if(Z9_int!=1)goto Lbl_02800;
        // 02790 R(I,3)=R(I,3)/1.5
        R_int_arr[(int)I_int][(int)3] = R_int_arr[(int)I_int][(int)3]/1.5;

  Lbl_02800:
        // 02800 Q(X1,X2)=6
        Q_int_arr[(int)X1_int][(int)X2_flt] = 6;
        // 02810 NEXT I
        int dummy_2810=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_02820:
    // 02820 IF N7=0 THEN 2870
    if(N7_int==0)goto Lbl_02870;
    // 02830 I=1 TO N7
    for(I_int=1;I_int<=N7_int;I_int++){
        // 02840 GOSUB 7000
        Routine_07000();
        // 02850 Q(X1,X2)=2
        Q_int_arr[(int)X1_int][(int)X2_flt] = 2;
        // 02860 NEXT I
        int dummy_2860=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_02870:
    // 02870 IF N4=0 THEN 2930
    if(N4_int==0)goto Lbl_02930;
    // 02880 IF F9=1 THEN 2930
    if(F9_int==1)goto Lbl_02930;
    // 02890 GOSUB 7000
    Routine_07000();
    // 02900 Q(X1,X2)=4
    Q_int_arr[(int)X1_int][(int)X2_flt] = 4;
    // 02910 B9=X1
    B9_int = X1_int;
    // 02920 B8=X2
    B8_int = X2_flt;

  Lbl_02930:
    // 02930 IF G(Q1,Q2)<>INT(G(Q1,Q2)) THEN 2960
    if(G_flt_arr[(int)Q1_int][(int)Q2_int]!=INT(G_flt_arr[(int)Q1_int][(int)Q2_int]))goto Lbl_02960;
    // 02940 GOSUB 7000
    Routine_07000();
    // 02950 Q(X1,X2)=7
    Q_int_arr[(int)X1_int][(int)X2_flt] = 7;

  Lbl_02960:
    // 02960 IF N5<>0 THEN 2980
    if(N5_int!=0)goto Lbl_02980;
    // 02970 IF N6=0 THEN 2990
    if(N6_int==0)goto Lbl_02990;

  Lbl_02980:
    // 02980 GOSUB 7040
    Routine_07040();

  Lbl_02990:
    // 02990 IF N4=0 THEN 3040
    if(N4_int==0)goto Lbl_03040;
    // 03000 IF C$<>"ORBITING" THEN 3040
    if(strcmp(C_str,"ORBITING")!=0)goto Lbl_03040;
    // 03010 P=13
    P_int = 13;
    // 03020 E2=300
    E2_flt = 300;
    // 03030 GOTO3130
    goto Lbl_03130;

  Lbl_03040:
    // 03040 IF N5<>0 THEN 3060
    if(N5_int!=0)goto Lbl_03060;
    // 03050 IF N6=0 THEN 3080
    if(N6_int==0)goto Lbl_03080;

  Lbl_03060:
    // 03060 C$="RED"
    GLBpStr="RED";
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 03070 GOTO3130
    goto Lbl_03130;

  Lbl_03080:
    // 03080 IF E1>399 THEN 3120
    if(E1_flt>399)goto Lbl_03120;
    // 03090 PRINT"HYPERDRIVE COILS LOW.  ** YELLOW ALERT **"
    b2c_fprintf(stdout,"HYPERDRIVE COILS LOW.  ** YELLOW ALERT **"); b2c_fprintf(stdout,"\n");
    // 03100 C$="YELLOW"
    GLBpStr="YELLOW";
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 03110 GOTO3130
    goto Lbl_03130;

  Lbl_03120:
    // 03120 C$="GREEN"
    GLBpStr="GREEN";
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_03130:
    // 03130 IF E1<1 THEN 6550
    if(E1_flt<1)goto Lbl_06550;

  Lbl_03140:
    // 03140 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 03150 PRINT"==================="
    b2c_fprintf(stdout,"==================="); b2c_fprintf(stdout,"\n");
    // 03160 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 03170 FOR J=1 TO 10
        for(J_int=1;J_int<=10;J_int++){
            // 03180 PRINT Q$(Q(I,J));" ";
            b2c_fprintf(stdout,"%s ",Q_str_arr[(int)Q_int_arr[(int)I_int][(int)J_int]]); 
            // 03190 NEXT J
            int dummy_3190=0; // Ignore this line.
        }; // End-For(J_int)
        // 03200 PRINT"  ";
        b2c_fprintf(stdout,"  "); 
        // 03210 ON I GOTO 3220,3240,3260,3280,3300,3320,3340,3360,3380,3400
        switch((int)(I_int)){
            case 1: goto Lbl_03220;
            case 2: goto Lbl_03240;
            case 3: goto Lbl_03260;
            case 4: goto Lbl_03280;
            case 5: goto Lbl_03300;
            case 6: goto Lbl_03320;
            case 7: goto Lbl_03340;
            case 8: goto Lbl_03360;
            case 9: goto Lbl_03380;
            case 10: goto Lbl_03400;
            default: break; 
        };

  Lbl_03220:
        // 03220 PRINT"CENTARE          ";T;"(UNTIL";T0;")"
        b2c_fprintf(stdout,"CENTARE           %f (UNTIL %d )",T_flt,T0_int); b2c_fprintf(stdout,"\n");
        // 03230 GOTO 3410
        goto Lbl_03410;

  Lbl_03240:
        // 03240 PRINT"CONDITION         ";C$
        b2c_fprintf(stdout,"CONDITION         %s",C_str); b2c_fprintf(stdout,"\n");
        // 03250 GOTO 3410
        goto Lbl_03410;

  Lbl_03260:
        // 03260 PRINT"QUADRANT      ";Q1;"-";Q2
        b2c_fprintf(stdout,"QUADRANT       %d - %d ",Q1_int,Q2_int); b2c_fprintf(stdout,"\n");
        // 03270 GOTO 3410
        goto Lbl_03410;

  Lbl_03280:
        // 03280 PRINT"SECTOR        ";S1;"-";S2
        b2c_fprintf(stdout,"SECTOR         %d - %d ",S1_int,S2_int); b2c_fprintf(stdout,"\n");
        // 03290 GOTO 3410
        goto Lbl_03410;

  Lbl_03300:
        // 03300 PRINT"HYPERDRIVE AT    ";E1;"-DEVICE #1"
        b2c_fprintf(stdout,"HYPERDRIVE AT     %f -DEVICE #1",E1_flt); b2c_fprintf(stdout,"\n");
        // 03310 GOTO 3410
        goto Lbl_03410;

  Lbl_03320:
        // 03320 PRINT"STAR DRIVE AT    ";E2
        b2c_fprintf(stdout,"STAR DRIVE AT     %f ",E2_flt); b2c_fprintf(stdout,"\n");
        // 03330 GOTO 3410
        goto Lbl_03410;

  Lbl_03340:
        // 03340 PRINT"VIPER RESERVES   ";E3;"-DEVICE #2"
        b2c_fprintf(stdout,"VIPER RESERVES    %d -DEVICE #2",E3_int); b2c_fprintf(stdout,"\n");
        // 03350 GOTO 3410
        goto Lbl_03410;

  Lbl_03360:
        // 03360 PRINT"DEFENSE LASERS   ";E4;"-DEVICE #3"
        b2c_fprintf(stdout,"DEFENSE LASERS    %d -DEVICE #3",E4_int); b2c_fprintf(stdout,"\n");
        // 03370 GOTO 3410
        goto Lbl_03410;

  Lbl_03380:
        // 03380 PRINT"MISSILES         ";P
        b2c_fprintf(stdout,"MISSILES          %d ",P_int); b2c_fprintf(stdout,"\n");
        // 03390 GOTO 3410
        goto Lbl_03410;

  Lbl_03400:
        // 03400 PRINT"CYLONS LEFT      ";N2
        b2c_fprintf(stdout,"CYLONS LEFT       %d ",N2_int); b2c_fprintf(stdout,"\n");

  Lbl_03410:
        // 03410 NEXT I
        int dummy_3410=0; // Ignore this line.
    }; // End-For(I_int)
    // 03420 PRINT"==================="
    b2c_fprintf(stdout,"==================="); b2c_fprintf(stdout,"\n");

  Lbl_03430:
    // 03430 PRINT "COMMAND ";
    b2c_fprintf(stdout,"COMMAND "); 
    // 03440 INPUT A$
    // Start of Basic INPUT statement 03440
    printf(" ? ");
    char inpbuf_03440[100];
    if(fgets(inpbuf_03440,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_03440=strtok(inpbuf_03440," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_03440==nullptr){
            A_str = "";
        }else{
            A_str = ps_03440;
        };
    }; // End of Basic INPUT statement 03440
    // 03450 IF A$="Q" THEN 6710
    if(strcmp(A_str,"Q")==0)goto Lbl_06710;
    // 03460 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 03470 IF A$=D$(I) THEN 3540
        if(strcmp(A_str,D_str_arr[(int)I_int])==0)goto Lbl_03540;
        // 03480 NEXT I
        int dummy_3480=0; // Ignore this line.
    }; // End-For(I_int)
    // 03490 IF A$<>"OBIWAN KENOBI" THEN 6430
    if(strcmp(A_str,"OBIWAN KENOBI")!=0)goto Lbl_06430;
    // 03500 PRINT"YOU HAVE CALLED UPON THE LEGENDARY POWER OF THE FORCE FOR AID."
    b2c_fprintf(stdout,"YOU HAVE CALLED UPON THE LEGENDARY POWER OF THE FORCE FOR AID."); b2c_fprintf(stdout,"\n");
    // 03510 PRINT"THE FORCE WEAKENS YOUR ENEMIES !"
    b2c_fprintf(stdout,"THE FORCE WEAKENS YOUR ENEMIES !"); b2c_fprintf(stdout,"\n");
    // 03520 Z9=1
    Z9_int = 1;
    // 03530 GOTO3430
    goto Lbl_03430;

  Lbl_03540:
    // 03540 ON I GOTO 3550,3690,4730,5500,6780,4460,6160,6430,3140,6880
    switch((int)(I_int)){
        case 1: goto Lbl_03550;
        case 2: goto Lbl_03690;
        case 3: goto Lbl_04730;
        case 4: goto Lbl_05500;
        case 5: goto Lbl_06780;
        case 6: goto Lbl_04460;
        case 7: goto Lbl_03140;
        case 8: goto Lbl_06430;
        case 9: goto Lbl_06160;
        case 10: goto Lbl_06880;
        default: break; 
    };

  Lbl_03550:
    // 03550 PRINT"COURSE ";
    b2c_fprintf(stdout,"COURSE "); 
    // 03560 INPUT C
    // Start of Basic INPUT statement 03560
    printf(" ? ");
    char inpbuf_03560[100];
    if(fgets(inpbuf_03560,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_03560=strtok(inpbuf_03560," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_03560==nullptr){
            C_int = 0;
        }else{
            C_int = atof(ps_03560);
        };
    }; // End of Basic INPUT statement 03560
    // 03570 IF C<1 THEN 3430
    if(C_int<1)goto Lbl_03430;
    // 03580 IF C>=9 THEN 3430
    if(C_int>=9)goto Lbl_03430;
    // 03590 PRINT "HYPERDRIVE JUMP SPEED ";
    b2c_fprintf(stdout,"HYPERDRIVE JUMP SPEED "); 
    // 03600 INPUT W
    // Start of Basic INPUT statement 03600
    printf(" ? ");
    char inpbuf_03600[100];
    if(fgets(inpbuf_03600,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_03600=strtok(inpbuf_03600," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_03600==nullptr){
            W_int = 0;
        }else{
            W_int = atof(ps_03600);
        };
    }; // End of Basic INPUT statement 03600
    // 03610 IF W<1 THEN 3430
    if(W_int<1)goto Lbl_03430;
    // 03620 IF W>8 THEN 3430
    if(W_int>8)goto Lbl_03430;
    // 03630 X5=INT(W*8)
    X5_int = INT(W_int*8);
    // 03640 IF E1<=2*X5 THEN 3800
    if(E1_flt<=2*X5_int)goto Lbl_03800;
    // 03650 E1=E1-2*X5
    E1_flt = E1_flt-2*X5_int;
    // 03660 T=T+SQR(W)
    T_flt = T_flt+SQR(W_int);
    // 03670 E1=E1+325*SQR(W)
    E1_flt = E1_flt+325*SQR(W_int);
    // 03680 GOTO 3850
    goto Lbl_03850;

  Lbl_03690:
    // 03690 PRINT"COURSE ";
    b2c_fprintf(stdout,"COURSE "); 
    // 03700 INPUT C
    // Start of Basic INPUT statement 03700
    printf(" ? ");
    char inpbuf_03700[100];
    if(fgets(inpbuf_03700,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_03700=strtok(inpbuf_03700," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_03700==nullptr){
            C_int = 0;
        }else{
            C_int = atof(ps_03700);
        };
    }; // End of Basic INPUT statement 03700
    // 03710 IF C<1 THEN 3430
    if(C_int<1)goto Lbl_03430;
    // 03720 IF C>=9 THEN 3430
    if(C_int>=9)goto Lbl_03430;
    // 03730 PRINT"STAR SPEED ";
    b2c_fprintf(stdout,"STAR SPEED "); 
    // 03740 INPUT W
    // Start of Basic INPUT statement 03740
    printf(" ? ");
    char inpbuf_03740[100];
    if(fgets(inpbuf_03740,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_03740=strtok(inpbuf_03740," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_03740==nullptr){
            W_int = 0;
        }else{
            W_int = atof(ps_03740);
        };
    }; // End of Basic INPUT statement 03740
    // 03750 W=W/10
    W_int = W_int/10;
    // 03760 IF W<.2 THEN 3430
    if(W_int<0.2)goto Lbl_03430;
    // 03770 IF W>.9 THEN 3430
    if(W_int>0.9)goto Lbl_03430;
    // 03780 X5=INT(W*8)
    X5_int = INT(W_int*8);
    // 03790 IF E2>=7.5*X5 THEN 3820
    if(E2_flt>=7.5*X5_int)goto Lbl_03820;

  Lbl_03800:
    // 03800 PRINT"INSUFFICIENT POWER FOR MOVEMENT"
    b2c_fprintf(stdout,"INSUFFICIENT POWER FOR MOVEMENT"); b2c_fprintf(stdout,"\n");
    // 03810 GOTO 3430
    goto Lbl_03430;

  Lbl_03820:
    // 03820 E2=E2-7.5*X5
    E2_flt = E2_flt-7.5*X5_int;
    // 03830 E1=E1+350*SQR(W)
    E1_flt = E1_flt+350*SQR(W_int);
    // 03840 T=T+SQR(W)/1.5
    T_flt = T_flt+SQR(W_int)/1.5;

  Lbl_03850:
    // 03850 Q(S1,S2)=1
    Q_int_arr[(int)S1_int][(int)S2_int] = 1;
    // 03860 C$="MOVING"
    GLBpStr="MOVING";
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 03870 IF T>T0 THEN 6550
    if(T_flt>T0_int)goto Lbl_06550;
    // 03880 X=S1
    X_flt = S1_int;
    // 03890 Y=S2
    Y_flt = S2_int;
    // 03900 GOSUB 6970
    Routine_06970();
    // 03910 FOR I=1TO X5
    for(I_int=1;I_int<=X5_int;I_int++){
        // 03920 S1=S1+X1
        S1_int = S1_int+X1_int;
        // 03930 S2=S2+X2
        S2_int = S2_int+X2_flt;
        // 03940 IF S1<.5 THEN 4170
        if(S1_int<0.5)goto Lbl_04170;
        // 03950 IF S1>10.5 THEN 4170
        if(S1_int>10.5)goto Lbl_04170;
        // 03960 IF S2<.5 THEN 4170
        if(S2_int<0.5)goto Lbl_04170;
        // 03970 IF S2>10.5 THEN 4170
        if(S2_int>10.5)goto Lbl_04170;
        // 03980 X6=INT(S1+.5)
        X6_int = INT(S1_int+0.5);
        // 03990 X7=INT(S2+.5)
        X7_int = INT(S2_int+0.5);
        // 04000 IF Q(X6,X7)<>7 THEN 4040
        if(Q_int_arr[(int)X6_int][(int)X7_int]!=7)goto Lbl_04040;
        // 04010 PRINT
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 04020 PRINT"** YOUR BATTLESTAR HAS BEEN ABSORBED BY A BLACK HOLE **"
        b2c_fprintf(stdout,"** YOUR BATTLESTAR HAS BEEN ABSORBED BY A BLACK HOLE **"); b2c_fprintf(stdout,"\n");
        // 04030 GOTO6550
        goto Lbl_06550;

  Lbl_04040:
        // 04040 IF INT(ABS(X6-B9)+.5)>1 THEN 4180
        if(INT(ABS(X6_int-B9_int)+0.5)>1)goto Lbl_04180;
        // 04050 IF INT(ABS(X7-B8)+.5)>1 THEN 4180
        if(INT(ABS(X7_int-B8_int)+0.5)>1)goto Lbl_04180;
        // 04060 PRINT"DO YOU WISH TO ORBIT";
        b2c_fprintf(stdout,"DO YOU WISH TO ORBIT"); 
        // 04070 INPUT A$
        // Start of Basic INPUT statement 04070
        printf(" ? ");
        char inpbuf_04070[100];
        if(fgets(inpbuf_04070,100,stdin)==nullptr){
            fprintf(stderr,"ERROR: End of file on input.\n");
            exit(2);
        }else{
            char *ps_04070=strtok(inpbuf_04070," ,\t\n");
            // This may cause problems if BASIC programmer expected
            // input strings to be copied instead of just pointing
            // to the input buffer (ie. strings can be over written).
            if(ps_04070==nullptr){
                A_str = "";
            }else{
                A_str = ps_04070;
            };
        }; // End of Basic INPUT statement 04070
        // 04080 IF A$="Y" THEN 4120
        if(strcmp(A_str,"Y")==0)goto Lbl_04120;
        // 04090 IF A$="YES" THEN 4120
        if(strcmp(A_str,"YES")==0)goto Lbl_04120;
        // 04100 B8=B9=F9=-1
        F9_int = B9_int = B8_int = -1;
        // 04110 GOTO 4180
        goto Lbl_04180;

  Lbl_04120:
        // 04120 C$="ORBITING"
        GLBpStr="ORBITING";
        C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 04130 S1=X6
        S1_int = X6_int;
        // 04140 S2=X7
        S2_int = X7_int;
        // 04150 F9=1
        F9_int = 1;
        // 04160 GOTO 2430
        goto Lbl_02430;

  Lbl_04170:
        // 04170 F9=B8=B9=-1
        B9_int = B8_int = F9_int = -1;

  Lbl_04180:
        // 04180 NEXT I
        int dummy_4180=0; // Ignore this line.
    }; // End-For(I_int)
    // 04190 S1=INT(S1+.5)
    S1_int = INT(S1_int+0.5);
    // 04200 S2=INT(S2+.5)
    S2_int = INT(S2_int+0.5);

  Lbl_04210:
    // 04210 IF S1>0 THEN 4250
    if(S1_int>0)goto Lbl_04250;
    // 04220 S1=S1+10
    S1_int = S1_int+10;
    // 04230 Q1=Q1-1
    Q1_int = Q1_int-1;
    // 04240 GOTO4210
    goto Lbl_04210;

  Lbl_04250:
    // 04250 IF S1<11 THEN 4290
    if(S1_int<11)goto Lbl_04290;
    // 04260 S1=S1-10
    S1_int = S1_int-10;
    // 04270 Q1=Q1+1
    Q1_int = Q1_int+1;
    // 04280 GOTO4250
    goto Lbl_04250;

  Lbl_04290:
    // 04290 IF S2>0 THEN 4330
    if(S2_int>0)goto Lbl_04330;
    // 04300 S2=S2+10
    S2_int = S2_int+10;
    // 04310 Q2=Q2-1
    Q2_int = Q2_int-1;
    // 04320 GOTO 4290
    goto Lbl_04290;

  Lbl_04330:
    // 04330 IF S2<11 THEN 4370
    if(S2_int<11)goto Lbl_04370;
    // 04340 S2=S2-10
    S2_int = S2_int-10;
    // 04350 Q2=Q2+1
    Q2_int = Q2_int+1;
    // 04360 GOTO4330
    goto Lbl_04330;

  Lbl_04370:
    // 04370 IF Q1>0 THEN 4390
    if(Q1_int>0)goto Lbl_04390;
    // 04380 Q1=Q1+10
    Q1_int = Q1_int+10;

  Lbl_04390:
    // 04390 IF Q1<11 THEN 4410
    if(Q1_int<11)goto Lbl_04410;
    // 04400 Q1=Q1-10
    Q1_int = Q1_int-10;

  Lbl_04410:
    // 04410 IF Q2>0 THEN 4430
    if(Q2_int>0)goto Lbl_04430;
    // 04420 Q2=Q2+10
    Q2_int = Q2_int+10;

  Lbl_04430:
    // 04430 IF Q2<11 THEN 2430
    if(Q2_int<11)goto Lbl_02430;
    // 04440 Q2=Q2-10
    Q2_int = Q2_int-10;
    // 04450 GOTO 2430
    goto Lbl_02430;

  Lbl_04460:
    // 04460 IF T-INT(T)>RND(0)/7 THEN 4490
    if(T_flt-INT(T_flt)>RND(0)/7)goto Lbl_04490;
    // 04470 PRINT"NEBULA CLOUD PREVENTS SCAN"
    b2c_fprintf(stdout,"NEBULA CLOUD PREVENTS SCAN"); b2c_fprintf(stdout,"\n");
    // 04480 GOTO 3430
    goto Lbl_03430;

  Lbl_04490:
    // 04490 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 04500 PRINT"LONGE RANGE SENSOR SCAN FOR QUADRANT";Q1;"-";Q2
    b2c_fprintf(stdout,"LONGE RANGE SENSOR SCAN FOR QUADRANT %d - %d ",Q1_int,Q2_int); b2c_fprintf(stdout,"\n");
    // 04510 PRINT"     |--------|--------|--------|   POSITIONAL KEY (C P *)"
    b2c_fprintf(stdout,"     |--------|--------|--------|   POSITIONAL KEY (C P *)"); b2c_fprintf(stdout,"\n");
    // 04520 FOR I=Q1-1 TO Q1+1
    for(I_int=Q1_int-1;I_int<=Q1_int+1;I_int++){
        // 04530 X1=I
        X1_int = I_int;
        // 04540 FOR J=Q2-1 TO Q2+1
        for(J_int=Q2_int-1;J_int<=Q2_int+1;J_int++){
            // 04550 X2=J
            X2_flt = J_int;
            // 04560 IF X1>0 THEN 4580
            if(X1_int>0)goto Lbl_04580;
            // 04570 X1=X1+10
            X1_int = X1_int+10;

  Lbl_04580:
            // 04580 IF X1<11 THEN 4600
            if(X1_int<11)goto Lbl_04600;
            // 04590 X1=X1-10
            X1_int = X1_int-10;

  Lbl_04600:
            // 04600 IF X2>0 THEN 4620
            if(X2_flt>0)goto Lbl_04620;
            // 04610 X2=X2+10
            X2_flt = X2_flt+10;

  Lbl_04620:
            // 04620 IF X2<11 THEN 4640
            if(X2_flt<11)goto Lbl_04640;
            // 04630 X2=X2-10
            X2_flt = X2_flt-10;

  Lbl_04640:
            // 04640 X3=INT(G(X1,X2)/1000)
            X3_int = INT(G_flt_arr[(int)X1_int][(int)X2_flt]/1000);
            // 04650 N(J-Q2+2)=INT(G(X1,X2))-X3*1000
            N_int_arr[(int)J_int-Q2_int+2] = INT(G_flt_arr[(int)X1_int][(int)X2_flt])-X3_int*1000;
            // 04660 S(X1,X2)=N(J-Q2+2)
            S_int_arr[(int)X1_int][(int)X2_flt] = N_int_arr[(int)J_int-Q2_int+2];
            // 04670 NEXT J
            int dummy_4670=0; // Ignore this line.
        }; // End-For(J_int)
        // 04680 PRINT TAB(5);"  ";N(1);TAB(14);"  ";N(2);TAB(23);"  ";N(3);
        b2c_fprintf(stdout,"%s   %d %s   %d %s   %d ",TAB(5),N_int_arr[(int)1],TAB(14),N_int_arr[(int)2],TAB(23),N_int_arr[(int)3]); 
        // 04690 PRINT TAB(32);"  "
        b2c_fprintf(stdout,"%s  ",TAB(32)); b2c_fprintf(stdout,"\n");
        // 04700 PRINT"     |--------|--------|--------|"
        b2c_fprintf(stdout,"     |--------|--------|--------|"); b2c_fprintf(stdout,"\n");
        // 04710 NEXT I
        int dummy_4710=0; // Ignore this line.
    }; // End-For(I_int)
    // 04720 GOTO 3430
    goto Lbl_03430;

  Lbl_04730:
    // 04730 IF N5>0 THEN 4770
    if(N5_int>0)goto Lbl_04770;
    // 04740 IF N6>0 THEN 4770
    if(N6_int>0)goto Lbl_04770;
    // 04750 PRINT"YOU ARE HALLUCINATING; NOTHING IS OUT THERE !!!"
    b2c_fprintf(stdout,"YOU ARE HALLUCINATING; NOTHING IS OUT THERE !!!"); b2c_fprintf(stdout,"\n");
    // 04760 GOTO 3430
    goto Lbl_03430;

  Lbl_04770:
    // 04770 PRINT "VIPERS STANDING BY. SQUADRON SIZE";E3
    b2c_fprintf(stdout,"VIPERS STANDING BY. SQUADRON SIZE %d ",E3_int); b2c_fprintf(stdout,"\n");
    // 04780 PRINT "HOW MANY UNITS TO LAUNCH ";
    b2c_fprintf(stdout,"HOW MANY UNITS TO LAUNCH "); 
    // 04790 INPUT X1
    // Start of Basic INPUT statement 04790
    printf(" ? ");
    char inpbuf_04790[100];
    if(fgets(inpbuf_04790,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_04790=strtok(inpbuf_04790," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_04790==nullptr){
            X1_int = 0;
        }else{
            X1_int = atof(ps_04790);
        };
    }; // End of Basic INPUT statement 04790
    // 04800 IF E3>=X1 THEN 4830
    if(E3_int>=X1_int)goto Lbl_04830;
    // 04810 PRINT"I TOLD YOU THERE ARE ONLY";E3;"UNITS !!!"
    b2c_fprintf(stdout,"I TOLD YOU THERE ARE ONLY %d UNITS !!!",E3_int); b2c_fprintf(stdout,"\n");
    // 04820 GOTO 3430
    goto Lbl_03430;

  Lbl_04830:
    // 04830 IF X1<1 THEN 3430
    if(X1_int<1)goto Lbl_03430;
    // 04840 PRINT"VIPERS LAUNCHED"
    b2c_fprintf(stdout,"VIPERS LAUNCHED"); b2c_fprintf(stdout,"\n");
    // 04850 E3=E3-X1
    E3_int = E3_int-X1_int;
    // 04860 IF N5=0 THEN5210
    if(N5_int==0)goto Lbl_05210;

  Lbl_04870:
    // 04870 X8=0
    X8_int = 0;
    // 04880 X9=100
    X9_int = 100;
    // 04890 FOR I=1 TO N5
    for(I_int=1;I_int<=N5_int;I_int++){
        // 04900 IF (FND(K(I,1),K(I,2)))>X9 THEN 4940
        if((FND(K_int_arr[(int)I_int][(int)1],K_int_arr[(int)I_int][(int)2]))>X9_int)goto Lbl_04940;
        // 04910 IF K(I,3)<=0 THEN 4940
        if(K_int_arr[(int)I_int][(int)3]<=0)goto Lbl_04940;
        // 04920 X8=I
        X8_int = I_int;
        // 04930 X9=FND(K(I,1),K(I,2))
        X9_int = FND(K_int_arr[(int)I_int][(int)1],K_int_arr[(int)I_int][(int)2]);

  Lbl_04940:
        // 04940 NEXT I
        int dummy_4940=0; // Ignore this line.
    }; // End-For(I_int)
    // 04950 IF X8=0 THEN 5200
    if(X8_int==0)goto Lbl_05200;
    // 04960 I=X8
    I_int = X8_int;
    // 04970 IF FND(K(I,1),K(I,2))>3 THEN 5140
    if(FND(K_int_arr[(int)I_int][(int)1],K_int_arr[(int)I_int][(int)2])>3)goto Lbl_05140;
    // 04980 IF X1<K(I,3) THEN 5100
    if(X1_int<K_int_arr[(int)I_int][(int)3])goto Lbl_05100;
    // 04990 X1=X1-K(I,3)
    X1_int = X1_int-K_int_arr[(int)I_int][(int)3];

  Lbl_05000:
    // 05000 PRINT"CYLON BASE-STAR AT SECTOR";K(I,1);"-";K(I,2);"DESTROYED"
    b2c_fprintf(stdout,"CYLON BASE-STAR AT SECTOR %d - %d DESTROYED",K_int_arr[(int)I_int][(int)1],K_int_arr[(int)I_int][(int)2]); b2c_fprintf(stdout,"\n");
    // 05010 P4=P4+1
    P4_flt = P4_flt+1;
    // 05020 K(I,3)=0
    K_int_arr[(int)I_int][(int)3] = 0;
    // 05030 Q(K(I,1),K(I,2))=1
    Q_int_arr[(int)K_int_arr[(int)I_int][(int)1]][(int)K_int_arr[(int)I_int][(int)2]] = 1;
    // 05040 N2=N2-1
    N2_int = N2_int-1;
    // 05050 IF N2=0 THEN 6580
    if(N2_int==0)goto Lbl_06580;
    // 05060 G(Q1,Q2)=G(Q1,Q2)-100
    G_flt_arr[(int)Q1_int][(int)Q2_int] = G_flt_arr[(int)Q1_int][(int)Q2_int]-100;
    // 05070 IF S(Q1,Q2)=0 THEN 4870
    if(S_int_arr[(int)Q1_int][(int)Q2_int]==0)goto Lbl_04870;
    // 05080 S(Q1,Q2)=S(Q1,Q2)-100
    S_int_arr[(int)Q1_int][(int)Q2_int] = S_int_arr[(int)Q1_int][(int)Q2_int]-100;
    // 05090 GOTO 4870
    goto Lbl_04870;

  Lbl_05100:
    // 05100 PRINT X1;"CYLON FIGHTERS REMOVED AT SECTOR";K(I,1);"-";K(I,2)
    b2c_fprintf(stdout," %d CYLON FIGHTERS REMOVED AT SECTOR %d - %d ",X1_int,K_int_arr[(int)I_int][(int)1],K_int_arr[(int)I_int][(int)2]); b2c_fprintf(stdout,"\n");
    // 05110 K(I,3)=K(I,3)-X1
    K_int_arr[(int)I_int][(int)3] = K_int_arr[(int)I_int][(int)3]-X1_int;
    // 05120 X1=0
    X1_int = 0;
    // 05130 GOTO 5460
    goto Lbl_05460;

  Lbl_05140:
    // 05140 X2=K(I,3)*(FND(K(I,1),K(I,2))/3)^2
    X2_flt = K_int_arr[(int)I_int][(int)3]*IPower((FND(K_int_arr[(int)I_int][(int)1],K_int_arr[(int)I_int][(int)2])/3),2);
    // 05150 IF X1<X2 THEN 5180
    if(X1_int<X2_flt)goto Lbl_05180;
    // 05160 X1=X1-X2
    X1_int = X1_int-X2_flt;
    // 05170 GOTO 5000
    goto Lbl_05000;

  Lbl_05180:
    // 05180 X1=X1/(FND(K(I,1),K(I,2))/3)^2
    X1_int = X1_int/IPower((FND(K_int_arr[(int)I_int][(int)1],K_int_arr[(int)I_int][(int)2])/3),2);
    // 05190 GOTO 5100
    goto Lbl_05100;

  Lbl_05200:
    // 05200 IF X1=0 THEN 5460
    if(X1_int==0)goto Lbl_05460;

  Lbl_05210:
    // 05210 IF N6=0 THEN 5460
    if(N6_int==0)goto Lbl_05460;
    // 05220 FOR I=1 TO N6
    for(I_int=1;I_int<=N6_int;I_int++){
        // 05230 IF R(I,3)<=0 THEN 5450
        if(R_int_arr[(int)I_int][(int)3]<=0)goto Lbl_05450;
        // 05240 IF FND(R(I,1),R(I,2))>3 THEN 5390
        if(FND(R_int_arr[(int)I_int][(int)1],R_int_arr[(int)I_int][(int)2])>3)goto Lbl_05390;
        // 05250 IF X1<R(I,3) THEN 5350
        if(X1_int<R_int_arr[(int)I_int][(int)3])goto Lbl_05350;
        // 05260 X1=X1-R(I,3)
        X1_int = X1_int-R_int_arr[(int)I_int][(int)3];

  Lbl_05270:
        // 05270 PRINT"E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2);"DESTROYED"
        b2c_fprintf(stdout,"E.A.FLEET AT SECTOR %d - %d DESTROYED",R_int_arr[(int)I_int][(int)1],R_int_arr[(int)I_int][(int)2]); b2c_fprintf(stdout,"\n");
        // 05280 P4=P4+.5
        P4_flt = P4_flt+0.5;
        // 05290 R(I,3)=0
        R_int_arr[(int)I_int][(int)3] = 0;
        // 05300 Q(R(I,1),R(I,2))=1
        Q_int_arr[(int)R_int_arr[(int)I_int][(int)1]][(int)R_int_arr[(int)I_int][(int)2]] = 1;
        // 05310 N3=N3-1
        N3_int = N3_int-1;
        // 05320 G(Q1,Q2)=G(Q1,Q2)-1000
        G_flt_arr[(int)Q1_int][(int)Q2_int] = G_flt_arr[(int)Q1_int][(int)Q2_int]-1000;
        // 05330 N6=N6-1
        N6_int = N6_int-1;
        // 05340 GOTO 5460
        goto Lbl_05460;

  Lbl_05350:
        // 05350 PRINT X1;"UNITS HIT IN E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
        b2c_fprintf(stdout," %d UNITS HIT IN E.A.FLEET AT SECTOR %d - %d ",X1_int,R_int_arr[(int)I_int][(int)1],R_int_arr[(int)I_int][(int)2]); b2c_fprintf(stdout,"\n");
        // 05360 R(I,3)=R(I,3)-X1
        R_int_arr[(int)I_int][(int)3] = R_int_arr[(int)I_int][(int)3]-X1_int;
        // 05370 X1=0
        X1_int = 0;
        // 05380 GOTO 5460
        goto Lbl_05460;

  Lbl_05390:
        // 05390 X2=R(I,3)*(FND(R(I,1),R(I,2))/3)^2
        X2_flt = R_int_arr[(int)I_int][(int)3]*IPower((FND(R_int_arr[(int)I_int][(int)1],R_int_arr[(int)I_int][(int)2])/3),2);
        // 05400 IF X1<X2 THEN 5430
        if(X1_int<X2_flt)goto Lbl_05430;
        // 05410 X1=X1-X2
        X1_int = X1_int-X2_flt;
        // 05420 GOTO 5270
        goto Lbl_05270;

  Lbl_05430:
        // 05430 X1=X1/(FND(R(I,1),R(I,2))/3)^2
        X1_int = X1_int/IPower((FND(R_int_arr[(int)I_int][(int)1],R_int_arr[(int)I_int][(int)2])/3),2);
        // 05440 GOTO 5350
        goto Lbl_05350;

  Lbl_05450:
        // 05450 NEXT I
        int dummy_5450=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_05460:
    // 05460 IF X1<10 THEN 5480
    if(X1_int<10)goto Lbl_05480;
    // 05470 PRINT"COMPUTER REPORTS";X1;"VIPERS EXPLODED IN LAUNCH TUBES"
    b2c_fprintf(stdout,"COMPUTER REPORTS %d VIPERS EXPLODED IN LAUNCH TUBES",X1_int); b2c_fprintf(stdout,"\n");

  Lbl_05480:
    // 05480 GOSUB 7040
    Routine_07040();
    // 05490 GOTO 3430
    goto Lbl_03430;

  Lbl_05500:
    // 05500 IF P>0 THEN 5530
    if(P_int>0)goto Lbl_05530;
    // 05510 PRINT"MISSILES EXPENDED"
    b2c_fprintf(stdout,"MISSILES EXPENDED"); b2c_fprintf(stdout,"\n");
    // 05520 GOTO 3430
    goto Lbl_03430;

  Lbl_05530:
    // 05530 PRINT"COURSE ";
    b2c_fprintf(stdout,"COURSE "); 
    // 05540 INPUT C
    // Start of Basic INPUT statement 05540
    printf(" ? ");
    char inpbuf_05540[100];
    if(fgets(inpbuf_05540,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_05540=strtok(inpbuf_05540," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_05540==nullptr){
            C_int = 0;
        }else{
            C_int = atof(ps_05540);
        };
    }; // End of Basic INPUT statement 05540
    // 05550 IF C<1 THEN 3430
    if(C_int<1)goto Lbl_03430;
    // 05560 IF C>=9 THEN 3430
    if(C_int>=9)goto Lbl_03430;
    // 05570 GOSUB 6970
    Routine_06970();
    // 05580 X=S1
    X_flt = S1_int;
    // 05590 Y=S2
    Y_flt = S2_int;
    // 05600 IF C$="ORBITING" THEN 5620
    if(strcmp(C_str,"ORBITING")==0)goto Lbl_05620;
    // 05610 P=P-1
    P_int = P_int-1;

  Lbl_05620:
    // 05620 PRINT"MISSILE AWAY, TRACKING:"
    b2c_fprintf(stdout,"MISSILE AWAY, TRACKING:"); b2c_fprintf(stdout,"\n");

  Lbl_05630:
    // 05630 X=X+X1
    X_flt = X_flt+X1_int;
    // 05640 Y=Y+X2
    Y_flt = Y_flt+X2_flt;
    // 05650 IF X<.5 THEN 6140
    if(X_flt<0.5)goto Lbl_06140;
    // 05660 IF X>10.5 THEN 6140
    if(X_flt>10.5)goto Lbl_06140;
    // 05670 IF Y<.5 THEN 6140
    if(Y_flt<0.5)goto Lbl_06140;
    // 05680 IF Y>10.5 THEN 6140
    if(Y_flt>10.5)goto Lbl_06140;
    // 05690 PRINT INT(X*100)/100;"-";INT(Y*100)/100
    b2c_fprintf(stdout,"%d-%d",INT(X_flt*100)/100,INT(Y_flt*100)/100); b2c_fprintf(stdout,"\n");
    // 05700 X3=INT(X+.5)
    X3_int = INT(X_flt+0.5);
    // 05710 X4=INT(Y+.5)
    X4_int = INT(Y_flt+0.5);
    // 05720 ON Q(X3,X4) GOTO 5630,5750,5630,5920,5780,6010,5730
    switch((int)(Q_int_arr[(int)X3_int][(int)X4_int])){
        case 1: goto Lbl_05630;
        case 2: goto Lbl_05750;
        case 3: goto Lbl_05630;
        case 4: goto Lbl_05920;
        case 5: goto Lbl_05780;
        case 6: goto Lbl_06010;
        case 7: goto Lbl_05730;
        default: break; 
    };

  Lbl_05730:
    // 05730 PRINT"MISSILE ABSORBED BY BLACK HOLE"
    b2c_fprintf(stdout,"MISSILE ABSORBED BY BLACK HOLE"); b2c_fprintf(stdout,"\n");
    // 05740 GOTO 6140
    goto Lbl_06140;

  Lbl_05750:
    // 05750 PRINT"MISSILE ABSORBED BY STAR - DISRUPTION SLIGHT"
    b2c_fprintf(stdout,"MISSILE ABSORBED BY STAR - DISRUPTION SLIGHT"); b2c_fprintf(stdout,"\n");
    // 05760 P4=P4-RND(-1)*2
    P4_flt = P4_flt-RND(-1)*2;
    // 05770 GOTO 6120
    goto Lbl_06120;

  Lbl_05780:
    // 05780 PRINT"CYLON BASE-STAR AT SECTOR";X3;"-";X4;"DESTROYED"
    b2c_fprintf(stdout,"CYLON BASE-STAR AT SECTOR %d - %d DESTROYED",X3_int,X4_int); b2c_fprintf(stdout,"\n");
    // 05790 P4=P4+1
    P4_flt = P4_flt+1;
    // 05800 FOR I=1 TO N5
    for(I_int=1;I_int<=N5_int;I_int++){
        // 05810 IF K(I,1)<>X3 THEN 5900
        if(K_int_arr[(int)I_int][(int)1]!=X3_int)goto Lbl_05900;
        // 05820 IF K(I,2)<>X4 THEN 5900
        if(K_int_arr[(int)I_int][(int)2]!=X4_int)goto Lbl_05900;
        // 05830 K(I,3)=0
        K_int_arr[(int)I_int][(int)3] = 0;
        // 05840 G(Q1,Q2)=G(Q1,Q2)-100
        G_flt_arr[(int)Q1_int][(int)Q2_int] = G_flt_arr[(int)Q1_int][(int)Q2_int]-100;
        // 05850 IF S(Q1,Q2)=0 THEN 5870
        if(S_int_arr[(int)Q1_int][(int)Q2_int]==0)goto Lbl_05870;
        // 05860 S(Q1,Q2)=S(Q1,Q2)-100
        S_int_arr[(int)Q1_int][(int)Q2_int] = S_int_arr[(int)Q1_int][(int)Q2_int]-100;

  Lbl_05870:
        // 05870 N2=N2-1
        N2_int = N2_int-1;
        // 05880 IF N2=0 THEN 6580
        if(N2_int==0)goto Lbl_06580;
        // 05890 GOTO 6110
        goto Lbl_06110;

  Lbl_05900:
        // 05900 NEXT I
        int dummy_5900=0; // Ignore this line.
    }; // End-For(I_int)
    // 05910 GOTO 6140
    goto Lbl_06140;

  Lbl_05920:
    // 05920 PRINT "COMMANDER, WHAT HAVE YOU DONE ??!!"
    b2c_fprintf(stdout,"COMMANDER, WHAT HAVE YOU DONE ??!!"); b2c_fprintf(stdout,"\n");
    // 05930 P4=P4-30
    P4_flt = P4_flt-30;
    // 05940 PRINT"*** TERRAN PLANET AT SECTOR";X3;"-";X4;"DESTROYED ***"
    b2c_fprintf(stdout,"*** TERRAN PLANET AT SECTOR %d - %d DESTROYED ***",X3_int,X4_int); b2c_fprintf(stdout,"\n");
    // 05950 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 05960 PRINT"ENERGY BOLT APPROACHING FROM DIRECTION OF FORMER PLANET!"
    b2c_fprintf(stdout,"ENERGY BOLT APPROACHING FROM DIRECTION OF FORMER PLANET!"); b2c_fprintf(stdout,"\n");
    // 05970 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 05980 PRINT"                     **** ZZZZAAP  ****"
    b2c_fprintf(stdout,"                     **** ZZZZAAP  ****"); b2c_fprintf(stdout,"\n");
    // 05990 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 06000 GOTO6550
    goto Lbl_06550;

  Lbl_06010:
    // 06010 PRINT"E.A.FLEET AT SECTOR";X3;"-";X4;"DESTROYED"
    b2c_fprintf(stdout,"E.A.FLEET AT SECTOR %d - %d DESTROYED",X3_int,X4_int); b2c_fprintf(stdout,"\n");
    // 06020 P4=P4+.5
    P4_flt = P4_flt+0.5;
    // 06030 FOR I=1 TO N6
    for(I_int=1;I_int<=N6_int;I_int++){
        // 06040 IF R(I,1)<>X3 THEN6100
        if(R_int_arr[(int)I_int][(int)1]!=X3_int)goto Lbl_06100;
        // 06050 IF R(I,2)<>X4 THEN6100
        if(R_int_arr[(int)I_int][(int)2]!=X4_int)goto Lbl_06100;
        // 06060 R(I,3)=0
        R_int_arr[(int)I_int][(int)3] = 0;
        // 06070 G(Q1,Q2)=G(Q1,Q2)-1000
        G_flt_arr[(int)Q1_int][(int)Q2_int] = G_flt_arr[(int)Q1_int][(int)Q2_int]-1000;
        // 06080 N3=N3-1
        N3_int = N3_int-1;
        // 06090 GOTO 6110
        goto Lbl_06110;

  Lbl_06100:
        // 06100 NEXT I
        int dummy_6100=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_06110:
    // 06110 Q(X3,X4)=1
    Q_int_arr[(int)X3_int][(int)X4_int] = 1;

  Lbl_06120:
    // 06120 GOSUB 7040
    Routine_07040();
    // 06130 GOTO 3430
    goto Lbl_03430;

  Lbl_06140:
    // 06140 PRINT"MISSILE MISSED TARGET"
    b2c_fprintf(stdout,"MISSILE MISSED TARGET"); b2c_fprintf(stdout,"\n");
    // 06150 GOTO 6120
    goto Lbl_06120;

  Lbl_06160:
    // 06160 PRINT"TRANSFER ENERGY FROM DEVICE # ";
    b2c_fprintf(stdout,"TRANSFER ENERGY FROM DEVICE # "); 
    // 06170 INPUT X1
    // Start of Basic INPUT statement 06170
    printf(" ? ");
    char inpbuf_06170[100];
    if(fgets(inpbuf_06170,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_06170=strtok(inpbuf_06170," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_06170==nullptr){
            X1_int = 0;
        }else{
            X1_int = atof(ps_06170);
        };
    }; // End of Basic INPUT statement 06170
    // 06180 IF X1=0 THEN 3430
    if(X1_int==0)goto Lbl_03430;
    // 06190 PRINT".... AND ALLOCATE TO DEVICE # ";
    b2c_fprintf(stdout,".... AND ALLOCATE TO DEVICE # "); 
    // 06200 INPUT X2
    // Start of Basic INPUT statement 06200
    printf(" ? ");
    char inpbuf_06200[100];
    if(fgets(inpbuf_06200,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_06200=strtok(inpbuf_06200," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_06200==nullptr){
            X2_flt = 0.00;
        }else{
            X2_flt = atof(ps_06200);
        };
    }; // End of Basic INPUT statement 06200
    // 06210 IF X2=0 THEN 3430
    if(X2_flt==0)goto Lbl_03430;
    // 06220 IF X2>X1 THEN 6250
    if(X2_flt>X1_int)goto Lbl_06250;

  Lbl_06230:
    // 06230 PRINT"IMPOSSIBLE, COMMANDER !"
    b2c_fprintf(stdout,"IMPOSSIBLE, COMMANDER !"); b2c_fprintf(stdout,"\n");
    // 06240 GOTO 3430
    goto Lbl_03430;

  Lbl_06250:
    // 06250 IF X2>3 THEN 6230
    if(X2_flt>3)goto Lbl_06230;
    // 06260 PRINT"# OF UNITS TO TRANSFER ";
    b2c_fprintf(stdout,"# OF UNITS TO TRANSFER "); 
    // 06270 INPUT X3
    // Start of Basic INPUT statement 06270
    printf(" ? ");
    char inpbuf_06270[100];
    if(fgets(inpbuf_06270,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_06270=strtok(inpbuf_06270," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_06270==nullptr){
            X3_int = 0;
        }else{
            X3_int = atof(ps_06270);
        };
    }; // End of Basic INPUT statement 06270
    // 06280 ON X1 GOTO 6290,6340
    switch((int)(X1_int)){
        case 1: goto Lbl_06290;
        case 2: goto Lbl_06340;
        default: break; 
    };

  Lbl_06290:
    // 06290 IF E1>X3 THEN 6320
    if(E1_flt>X3_int)goto Lbl_06320;

  Lbl_06300:
    // 06300 PRINT"INSUFFICIENT POWER AVAILABLE"
    b2c_fprintf(stdout,"INSUFFICIENT POWER AVAILABLE"); b2c_fprintf(stdout,"\n");
    // 06310 GOTO 3430
    goto Lbl_03430;

  Lbl_06320:
    // 06320 E1=E1-X3
    E1_flt = E1_flt-X3_int;
    // 06330 GOTO 6360
    goto Lbl_06360;

  Lbl_06340:
    // 06340 IF X3>E3 THEN 6300
    if(X3_int>E3_int)goto Lbl_06300;
    // 06350 E3=E3+X3
    E3_int = E3_int+X3_int;

  Lbl_06360:
    // 06360 ON X2-1 GOTO 6370,6390
    switch((int)(X2_flt-1)){
        case 1: goto Lbl_06370;
        case 2: goto Lbl_06390;
        default: break; 
    };

  Lbl_06370:
    // 06370 E3=E3+X3
    E3_int = E3_int+X3_int;
    // 06380 GOTO 6410
    goto Lbl_06410;

  Lbl_06390:
    // 06390 E4=E4+X3
    E4_int = E4_int+X3_int;
    // 06400 Q8=Q8+X3
    Q8_int = Q8_int+X3_int;

  Lbl_06410:
    // 06410 PRINT"TRANSFER COMPLETE"
    b2c_fprintf(stdout,"TRANSFER COMPLETE"); b2c_fprintf(stdout,"\n");
    // 06420 GOTO 3430
    goto Lbl_03430;

  Lbl_06430:
    // 06430 PRINT" H -- HYPERDRIVE JUMP";TAB(37);"COURSE GUIDE"
    b2c_fprintf(stdout," H -- HYPERDRIVE JUMP%sCOURSE GUIDE",TAB(37)); b2c_fprintf(stdout,"\n");
    // 06440 PRINT" SS - STAR-SPEED MANEUVER"
    b2c_fprintf(stdout," SS - STAR-SPEED MANEUVER"); b2c_fprintf(stdout,"\n");
    // 06450 PRINT" L -- LONG RANGE SENSOR SCAN";TAB(40);"4  3  2"
    b2c_fprintf(stdout," L -- LONG RANGE SENSOR SCAN%s4  3  2",TAB(40)); b2c_fprintf(stdout,"\n");
    // 06460 PRINT" S -- SHORT RANGE SENSOR SCAN";TAB(42);"\|/"
    b2c_fprintf(stdout," S -- SHORT RANGE SENSOR SCAN%s\|/",TAB(42)); b2c_fprintf(stdout,"\n");
    // 06470 PRINT" V -- LAUNCH VIPERS";TAB(40);"5 -*- 1"
    b2c_fprintf(stdout," V -- LAUNCH VIPERS%s5 -*- 1",TAB(40)); b2c_fprintf(stdout,"\n");
    // 06480 PRINT" M -- FIRE MISSILE";TAB(42);"/|\"
    b2c_fprintf(stdout," M -- FIRE MISSILE%s/|\",TAB(42)); b2c_fprintf(stdout,"\n");
    // 06490 PRINT" A -- ALLOCATE ENERGY UNITS";TAB(40);"6  7  8"
    b2c_fprintf(stdout," A -- ALLOCATE ENERGY UNITS%s6  7  8",TAB(40)); b2c_fprintf(stdout,"\n");
    // 06500 PRINT" G -- GENERATE POWER"
    b2c_fprintf(stdout," G -- GENERATE POWER"); b2c_fprintf(stdout,"\n");
    // 06510 PRINT" R -- RECALL LONG RANGE SENSOR INFORMATION"
    b2c_fprintf(stdout," R -- RECALL LONG RANGE SENSOR INFORMATION"); b2c_fprintf(stdout,"\n");
    // 06520 PRINT" C -- THIS LIST OF COMMANDS"
    b2c_fprintf(stdout," C -- THIS LIST OF COMMANDS"); b2c_fprintf(stdout,"\n");
    // 06530 PRINT" Q -- QUIT GAME(ABNORMAL ENDING)"
    b2c_fprintf(stdout," Q -- QUIT GAME(ABNORMAL ENDING)"); b2c_fprintf(stdout,"\n");
    // 06540 GOTO 3430
    goto Lbl_03430;

  Lbl_06550:
    // 06550 PRINT"*** YOU HAVE BEEN DEFEATED ***"
    b2c_fprintf(stdout,"*** YOU HAVE BEEN DEFEATED ***"); b2c_fprintf(stdout,"\n");
    // 06560 PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    b2c_fprintf(stdout," %d CYLON BASE-STARS AND %d E.A.FLEETS REMAIN !!!!",N2_int,N3_int); b2c_fprintf(stdout,"\n");
    // 06570 GOTO 6740
    goto Lbl_06740;

  Lbl_06580:
    // 06580 P4=P4-(T-T9)/2
    P4_flt = P4_flt-(T_flt-T9_int)/2;
    // 06590 IF P4>10THEN6660
    if(P4_flt>10)goto Lbl_06660;
    // 06600 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 06610 PRINT"EVEN THOUGH THE CYLONS HAVE BEEN DESTROYED, AND THE"
    b2c_fprintf(stdout,"EVEN THOUGH THE CYLONS HAVE BEEN DESTROYED, AND THE"); b2c_fprintf(stdout,"\n");
    // 06620 PRINT"EASTERN ALLIANCE HAS FLED, YOU HAVE BEEN TOO DAMAGING"
    b2c_fprintf(stdout,"EASTERN ALLIANCE HAS FLED, YOU HAVE BEEN TOO DAMAGING"); b2c_fprintf(stdout,"\n");
    // 06630 PRINT"TO TERRAN CIVILIZATIONS TO WIN."
    b2c_fprintf(stdout,"TO TERRAN CIVILIZATIONS TO WIN."); b2c_fprintf(stdout,"\n");
    // 06640 PRINT"..... CALL IT A DRAW ....."
    b2c_fprintf(stdout,"..... CALL IT A DRAW ....."); b2c_fprintf(stdout,"\n");
    // 06650 GOTO6740
    goto Lbl_06740;

  Lbl_06660:
    // 06660 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 06670 PRINT"CONGRATULATIONS, COMMANDER."
    b2c_fprintf(stdout,"CONGRATULATIONS, COMMANDER."); b2c_fprintf(stdout,"\n");
    // 06680 PRINT"THE CYLONS HAVE BEEN DESTROYED, AND THE EASTERN"
    b2c_fprintf(stdout,"THE CYLONS HAVE BEEN DESTROYED, AND THE EASTERN"); b2c_fprintf(stdout,"\n");
    // 06690 PRINT"ALLIANCE HAS FLED, MAKING THIS A GREAT VICTORY"
    b2c_fprintf(stdout,"ALLIANCE HAS FLED, MAKING THIS A GREAT VICTORY"); b2c_fprintf(stdout,"\n");
    // 06700 PRINT"FOR THE TERRAN EMPIRE."
    b2c_fprintf(stdout,"FOR THE TERRAN EMPIRE."); b2c_fprintf(stdout,"\n");

  Lbl_06710:
    // 06710 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 06720 PRINT"A RATING GREATER THAN 10 IS GOOD!"
    b2c_fprintf(stdout,"A RATING GREATER THAN 10 IS GOOD!"); b2c_fprintf(stdout,"\n");
    // 06730 P4=P4-(T-T9)/2
    P4_flt = P4_flt-(T_flt-T9_int)/2;

  Lbl_06740:
    // 06740 PRINT"=RATING= ";P4
    b2c_fprintf(stdout,"=RATING=  %f ",P4_flt); b2c_fprintf(stdout,"\n");
    // 06750 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 06760 PRINT"PLEASE TYPE* DONE"
    b2c_fprintf(stdout,"PLEASE TYPE* DONE"); b2c_fprintf(stdout,"\n");
    // 06770 STOP
    exit(1);

  Lbl_06780:
    // 06780 IF C$="GREEN" THEN6810
    if(strcmp(C_str,"GREEN")==0)goto Lbl_06810;
    // 06790 IF C$="YELLOW" THEN6810
    if(strcmp(C_str,"YELLOW")==0)goto Lbl_06810;
    // 06800 GOTO6860
    goto Lbl_06860;

  Lbl_06810:
    // 06810 E1=E1+500
    E1_flt = E1_flt+500;
    // 06820 T=T+.5
    T_flt = T_flt+0.5;
    // 06830 IF T>T0 THEN6550
    if(T_flt>T0_int)goto Lbl_06550;
    // 06840 PRINT"POWER GENERATED"
    b2c_fprintf(stdout,"POWER GENERATED"); b2c_fprintf(stdout,"\n");
    // 06850 GOTO3430
    goto Lbl_03430;

  Lbl_06860:
    // 06860 PRINT"IMPOSSIBLE UNDER RED ALERT"
    b2c_fprintf(stdout,"IMPOSSIBLE UNDER RED ALERT"); b2c_fprintf(stdout,"\n");
    // 06870 GOTO3430
    goto Lbl_03430;

  Lbl_06880:
    // 06880 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 06890 FOR X6=1TO10
    for(X6_int=1;X6_int<=10;X6_int++){
        // 06900 FOR X7=1TO10
        for(X7_int=1;X7_int<=10;X7_int++){
            // 06910 PRINT S(X6,X7);TAB(X7*5);
            b2c_fprintf(stdout," %d %s",S_int_arr[(int)X6_int][(int)X7_int],TAB(X7_int*5)); 
            // 06920 NEXT X7
            int dummy_6920=0; // Ignore this line.
        }; // End-For(X7_int)
        // 06930 PRINT
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 06940 NEXT X6
        int dummy_6940=0; // Ignore this line.
    }; // End-For(X6_int)
    // 06950 GOTO3430
    goto Lbl_03430;
    // 06960 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
