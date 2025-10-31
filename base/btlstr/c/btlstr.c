/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/btlstr.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e8975a4bdb0 ---------A   00900  REM Game of BattleStar
    0x5e8975a4ab80 ---------A   00901  REM 
    0x5e8975a4bf30 ---------A   00902  REM Variable List:
    0x5e8975a4be70 ---------A   00903  REM     A$			- 
    0x5e8975a4bff0 ---------A   00904  REM     B8			- 
    0x5e8975a4afc0 ---------A   00905  REM     B9			- 
    0x5e8975a4a2d0 ---------A   00906  REM     C			- 
    0x5e8975a4a910 ---------A   00907  REM     C$			- Alert Condition
    0x5e8975a3a2b0 ---------A   00908  REM     D$[11]		- 
    0x5e8975a4c0b0 ---------A   00909  REM     E1			- Hyperdrive Coil Energy
    0x5e8975a499e0 ---------A   00910  REM     E2			- Star Drive Energy
    0x5e8975a497f0 ---------A   00911  REM     E3			- Viper Reserve Energy
    0x5e8975a4baa0 ---------A   00912  REM     E4			- Defence Laser Energy
    0x5e8975a4a040 ---------A   00913  REM     F9			- 
    0x5e8975a4a0b0 ---------A   00914  REM     G[11][11]	- 
    0x5e8975a49e40 ---------A   00915  REM     I			- 
    0x5e8975a4a480 ---------A   00916  REM     J			- 
    0x5e8975a4a510 ---------A   00917  REM     K[6][4]	- 
    0x5e8975a4b6a0 ---------A   00918  REM     N[10]		- 
    0x5e8975a4b710 ---------A   00919  REM     N1			- 
    0x5e8975a49be0 ---------A   00920  REM     N2			- Cylons left.
    0x5e8975a49c70 ---------A   00921  REM     N3			- 
    0x5e8975a4c100 ---------A   00922  REM     N4			- 
    0x5e8975a4c190 ---------A   00923  REM     N5			- 
    0x5e8975a4c220 ---------A   00924  REM     N6			- 
    0x5e8975a4a640 ---------A   00925  REM     N7			- 
    0x5e8975a4a6f0 ---------A   00926  REM     P			- Number of missles
    0x5e8975a4a780 ---------A   00927  REM     P4			- 
    0x5e8975a4a820 ---------A   00928  REM     Q[11][11]	- 
    0x5e8975a518a0 ---------A   00929  REM     Q$[8]		- 
    0x5e8975a51920 ---------A   00930  REM     Q1			- Quadrant Indice
    0x5e8975a519d0 ---------A   00931  REM     Q2			- Quadrant Indice
    0x5e8975a51a60 ---------A   00932  REM     Q8			- 
    0x5e8975a51d00 ---------A   00933  REM     Q9			- 
    0x5e8975a51d90 ---------A   00934  REM     R[3][4]	- 
    0x5e8975a51e30 ---------A   00935  REM     S[11][11]	- 
    0x5e8975a51ee0 ---------A   00936  REM     S1			- Sector Indice
    0x5e8975a51f90 ---------A   00937  REM     S2			- Sector Indice
    0x5e8975a52040 ---------A   00938  REM     T			- Game time in Centare
    0x5e8975a520f0 ---------A   00939  REM     T0			- End time for game. 
    0x5e8975a52180 ---------A   00940  REM     T9			- 
    0x5e8975a52210 ---------A   00941  REM     W			- 
    0x5e8975a522a0 ---------A   00942  REM     X			- 
    0x5e8975a52330 ---------A   00943  REM     X1			- 
    0x5e8975a523c0 ---------A   00944  REM     X2			- 
    0x5e8975a52450 ---------A   00945  REM     X3			- 
    0x5e8975a524e0 ---------A   00946  REM     X4			- 
    0x5e8975a52570 ---------A   00947  REM     X5			- 
    0x5e8975a52600 ---------A   00948  REM     X6			- 
    0x5e8975a52690 ---------A   00949  REM     X7			- 
    0x5e8975a52720 ---------A   00950  REM     X8			- 
    0x5e8975a527b0 ---------A   00951  REM     X9			- 
    0x5e8975a52840 ---------A   00952  REM     Y			- 
    0x5e8975a528d0 ---------A   00953  REM     Z9			- 
    0x5e8975a537f0 ---------A   01000  DIM Q(10,10),G(10,10),K(5,3),R(2,3),Q$(7),S(10,10)
    0x5e8975a496d0 ---------A   01010  PRINT"WELCOME TO ** BATTLESTAR **          (BY RWMELHUISH)"
    0x5e8975a49670 ---------A   01012  PRINT
    0x5e8975a539a0 ---------A   01013  PRINT
    0x5e8975a53d40 ---------A   01020  FOR I=1 TO 7
    0x5e8975a53f80 ---------A   01022  READ Q$(I)
    0x5e8975a540b0 ---------A   01023  NEXT I
    0x5e8975a54770 ---------A   01030  DATA ".","*",B,P,C,E,O
    0x5e8975a54a40 ---------A   01040  DIM D$(10)
    0x5e8975a54d10 ---------A   01050  FOR I=1 TO 10
    0x5e8975a54f50 ---------A   01052  READ D$(I)
    0x5e8975a55490 ---------A   01053  NEXT I
    0x5e8975a55e10 ---------A   01060  DATA H,SS,V,M,G,L,S,C,A,R
    0x5e8975a56860 ---------A   01070  T0=INT(RND(-1)*20000)/10+INT(RND(-1)*5000)
    0x5e8975a56b50 ---------A   01072  Z9=0
    0x5e8975a579d0 ---------A   01080  DEF FND(X1,X2)=SQR((S1-X1)^2+(S2-X2)^2)
    0x5e8975a58170 ---------A   01090  DEF FNR(X1)=INT(RND(X1)*10)+1
    0x5e8975a58c00 ---------A   01100  T=T9=T0-(60-3*ABS(FNR(-1)-5))
    0x5e8975a58ed0 ---------A   01110  E1=1250
    0x5e8975a591a0 ---------A   01112  E2=300
    0x5e8975a59470 ---------A   01113  E3=2000
    0x5e8975a598e0 ---------A   01114  Q8=E4=1250
    0x5e8975a59bb0 ---------A   01115  P=13
    0x5e8975a5a020 ---------A   01116  B8=B9=-1
    0x5e8975a5a2f0 ---------A   01120  MAT G=ZER
    0x5e8975a5a6b0 ---------A   01130  Q1=FNR(-1)
    0x5e8975a5aa60 ---------A   01132  Q2=FNR(-1)
    0x5e8975a5ad50 ---------A   01133  S1=FNR(-1)
    0x5e8975a5b040 ---------A   01134  S2=FNR(-1)
    0x5e8975a5b990 ---------A   01135  N1=N2=N3=F9=P4=0
    0x5e8975a5bc60 ---------A   01140  FOR I=1 TO 10
    0x5e8975a5c000 ---------A   01142  FOR J=1 TO 10
    0x5e8975a5c400 ---------A   01143  X1=RND(-1)*50
    0x5e8975a5ca20 ---------A   01144  N4=N5=N6=0
    0x5e8975a5cc70 ---------A   01150  IF X1>.08 THEN 1160
    0x5e8975a5cfc0 ---------A   01152  N5=N5+1
    0x5e8975a5d210 ---------A T 01160  IF X1>.28 THEN 1170
    0x5e8975a5d560 ---------A   01162  N5=N5+1
    0x5e8975a5d7b0 ---------A T 01170  IF X1>1.28 THEN 1180
    0x5e8975a5db00 ---------A   01172  N5=N5+1
    0x5e8975a5dd50 ---------A T 01180  IF X1>3.28 THEN 1190
    0x5e8975a5e0a0 ---------A   01182  N5=N5+1
    0x5e8975a5e2f0 ---------A T 01190  IF X1>13.28 THEN 1200
    0x5e8975a5e630 ---------A   01192  N5=N5+1
    0x5e8975a5e880 ---------A T 01200  IF N2<36 THEN 1210
    0x5e8975a5eaa0 ---------A   01202  N5=0
    0x5e8975a5edf0 ---------A T 01210  N2=N2+N5
    0x5e8975a5f050 ---------A   01212  IF N1>2 THEN 1220
    0x5e8975a5f370 ---------A   01213  IF RND(-1)<.97 THEN 1220
    0x5e8975a5f590 ---------A   01214  N4=1
    0x5e8975a5fb20 ---------A T 01220  N7=ABS(FNR(-1)-1)
    0x5e8975a5fe70 ---------A   01222  N1=N1+N4
    0x5e8975a600c0 ---------A   01223  IF N5>3 THEN 1260
    0x5e8975a604d0 ---------A   01224  X1=RND(-1)*40
    0x5e8975a60720 ---------A   01230  IF X1>4.25 THEN 1240
    0x5e8975a60a70 ---------A   01232  N6=N6+1
    0x5e8975a60cc0 ---------A T 01240  IF X1>16.25 THEN 1250
    0x5e8975a61000 ---------A   01242  N6=N6+1
    0x5e8975a61360 ---------A T 01250  N3=N3+N6
    0x5e8975a61dc0 ---------A T 01260  G(I,J)=N6*1000+N5*100+N4*10+N7
    0x5e8975a620d0 ---------A   01270  IF RND(-1)>.45 THEN 1280
    0x5e8975a62790 ---------A   01272  G(I,J)=G(I,J)+.1
    0x5e8975a628c0 ---------A T 01280  NEXT J
    0x5e8975a62a10 ---------A   01282  NEXT I
    0x5e8975a62c80 ---------A   01283  IF N1>0 THEN 1300
    0x5e8975a62f80 ---------A   01290  I=FNR(-1)
    0x5e8975a63270 ---------A   01292  J=FNR(-1)
    0x5e8975a63920 ---------A   01293  G(I,J)=G(I,J)+10
    0x5e8975a63b30 ---------A   01294  N1=1
    0x5e8975a63bc0 ---------A T 01300  PRINT
    0x5e8975a63e60 ---------A   01302  PRINT N2;"CYLONS HAVE PENETRATED TERRAN SPACE."
    0x5e8975a63ff0 ---------A   01310  PRINT ".....THEY ARE ASSISTED BY THE EASTERN ALLIANCE."
    0x5e8975a64370 ---------A   01320  PRINT "ONLY";N1;"TERRAN PLANET";
    0x5e8975a645d0 ---------A   01322  IF N1<2 THEN 1340
    0x5e8975a64750 ---------A   01330  PRINT "S HAVE";
    0x5e8975a64fe0 ---------A   01332  GOTO 1350
    0x5e8975a65170 ---------A T 01340  PRINT" HAS";
    0x5e8975a65310 ---------A T 01350  PRINT" SURVIVED THE INITIAL ASSAULT."
    0x5e8975a656a0 ---------A   01360  PRINT"YOU HAVE UNTIL CENTARE";T0;"TO DEFEAT THE CYLONS"
    0x5e8975a65810 ---------A   01370  PRINT"AND DRIVE AWAY THE EASTERN ALLIANCE."
    0x5e8975a658a0 ---------A   01380  PRINT
    0x5e8975a65a20 ---------A   01382  PRINT".....REMEMBER :"
    0x5e8975a65ba0 ---------A   01390  PRINT".....DO NOT RUN INTO ANY BLACK HOLES....."
    0x5e8975a65c20 ---------A   01400  PRINT
    0x5e8975a65ca0 ---------A   01402  PRINT
    0x5e8975a65fb0 ---------A   01403  C$="WHO CARES"
    0x5e8975a66120 ---------A T 01404  PRINT" CONTINUE(C)";
    0x5e8975a66350 ---------A   01405  INPUT A$
    0x5e8975a665d0 ---------A   01407  IF A$<>"C" THEN 1404
    0x5e8975a66840 ---------A T 01410  IF N2=0 THEN 3820
    0x5e8975a66f10 ---------A   01412  N6=INT(INT(G(Q1,Q2))/1000)
    0x5e8975a67800 ---------A   01420  N5=INT(INT(G(Q1,Q2))/100)-N6*10
    0x5e8975a68310 ---------A   01430  N4=INT(INT(G(Q1,Q2))/10)-N6*100-N5*10
    0x5e8975a68e40 ---------A   01440  N7=INT(G(Q1,Q2))-N6*1000-N5*100-N4*10
    0x5e8975a69110 ---------A   01450  MAT Q=CON
    0x5e8975a694f0 ---------A   01460  Q(S1,S2)=3
    0x5e8975a69740 ---------A   01462  IF F9<>1 THEN 1470
    0x5e8975a69b20 ---------A   01463  Q(B9,B8)=4
    0x5e8975a69d70 ---------A T 01470  IF N5=0 THEN 1550
    0x5e8975a69df0 ---------A   01472  PRINT
    0x5e8975a69e90 ---------A   01473  PRINT
    0x5e8975a6a010 ---------A   01480  PRINT"COMPUTER LASERS ACTIVATING  ** RED ALERT **"
    0x5e8975a6a0a0 ---------A   01482  PRINT
    0x5e8975a6a420 ---------A   01490  PRINT"SCANNERS SHOW";N5;"CYLON";
    0x5e8975a6a680 ---------A   01492  IF N5<2 THEN 1500
    0x5e8975a6a800 ---------A   01493  PRINT"S";
    0x5e8975a6a960 ---------A T 01500  PRINT"."
    0x5e8975a6ac60 ---------A   01502  FOR I=1 TO N5
    0x5e8975a6ace0 ---------A   01510  GOSUB 2300
    0x5e8975a6b0b0 ---------A   01520  K(I,1)=X1
    0x5e8975a6b480 ---------A   01522  K(I,2)=X2
    0x5e8975a6b6e0 ---------A   01523  IF F9=1 THEN 1540
    0x5e8975a6bd80 ---------A   01524  K(I,3)=175+RND(0)*51
    0x5e8975a6bfd0 ---------A   01530  IF Z9<>1THEN1540
    0x5e8975a6c650 ---------A   01532  K(I,3)=K(I,3)/2
    0x5e8975a6ca20 ---------A T 01540  Q(X1,X2)=5
    0x5e8975a6cb50 ---------A   01542  NEXT I
    0x5e8975a6cdc0 ---------A T 01550  IF N6=0 THEN 1600
    0x5e8975a6d0c0 ---------A   01552  FOR I=1 TO N6
    0x5e8975a6d140 ---------A   01560  GOSUB 2300
    0x5e8975a6d510 ---------A   01570  R(I,1)=X1
    0x5e8975a6d8e0 ---------A   01572  R(I,2)=X2
    0x5e8975a6db40 ---------A   01573  IF F9=1 THEN 1590
    0x5e8975a6e1e0 ---------A   01574  R(I,3)=175+RND(0)*51
    0x5e8975a6e430 ---------A   01580  IF Z9<>1THEN1590
    0x5e8975a6eab0 ---------A   01582  R(I,3)=R(I,3)/1.5
    0x5e8975a6ee80 ---------A T 01590  Q(X1,X2)=6
    0x5e8975a6efb0 ---------A   01592  NEXT I
    0x5e8975a6f220 ---------A T 01600  IF N7=0 THEN 1640
    0x5e8975a6f520 ---------A   01610  I=1 TO N7
    0x5e8975a6f5a0 ---------A   01620  GOSUB 2300
    0x5e8975a6f970 ---------A   01630  Q(X1,X2)=2
    0x5e8975a6faa0 ---------A   01632  NEXT I
    0x5e8975a6fd10 ---------A T 01640  IF N4=0 THEN 1670
    0x5e8975a6ff70 ---------A   01642  IF F9=1 THEN 1670
    0x5e8975a6fff0 ---------A   01650  GOSUB 2300
    0x5e8975a703c0 ---------A   01660  Q(X1,X2)=4
    0x5e8975a705f0 ---------A   01662  B9=X1
    0x5e8975a70840 ---------A   01663  B8=X2
    0x5e8975a70f10 ---------A T 01670  IF G(Q1,Q2)<>INT(G(Q1,Q2)) THEN 1700
    0x5e8975a70f90 ---------A   01680  GOSUB 2300
    0x5e8975a71360 ---------A   01690  Q(X1,X2)=7
    0x5e8975a715b0 ---------A T 01700  IF N5<>0 THEN 1710
    0x5e8975a71810 ---------A   01702  IF N6=0 THEN 1720
    0x5e8975a71890 ---------A T 01710  GOSUB 3400
    0x5e8975a71af0 ---------A T 01720  IF N4=0 THEN 1740
    0x5e8975a71d70 ---------A   01722  IF C$<>"ORBITING" THEN 1740
    0x5e8975a71f90 ---------A   01730  P=13
    0x5e8975a721a0 ---------A   01732  E2=300
    0x5e8975a72210 ---------A   01733  GOTO1790
    0x5e8975a72460 ---------A T 01740  IF N5<>0 THEN 1750
    0x5e8975a726c0 ---------A   01742  IF N6=0 THEN 1760
    0x5e8975a72900 ---------A T 01750  C$="RED"
    0x5e8975a72980 ---------A   01752  GOTO1790
    0x5e8975a72bf0 ---------A T 01760  IF E1>399 THEN 1780
    0x5e8975a72d70 ---------A   01762  PRINT"HYPERDRIVE COILS LOW.  ** YELLOW ALERT **"
    0x5e8975a72fb0 ---------A   01770  C$="YELLOW"
    0x5e8975a73020 ---------A   01772  GOTO1790
    0x5e8975a73250 ---------A T 01780  C$="GREEN"
    0x5e8975a734a0 ---------A T 01790  IF E1<1 THEN 3710
    0x5e8975a73530 ---------A T 01800  PRINT
    0x5e8975a73690 ---------A   01802  PRINT"==================="
    0x5e8975a73970 ---------A   01803  FOR I=1 TO 10
    0x5e8975a73c60 ---------A   01810  FOR J=1 TO 10
    0x5e8975a74180 ---------A   01812  PRINT Q$(Q(I,J));" ";
    0x5e8975a742c0 ---------A   01813  NEXT J
    0x5e8975a74480 ---------A   01814  PRINT"  ";
    0x5e8975a74d80 ---------A   01820  ON I GOTO 1830,1840,1850,1860,1870,1880,1890,1900,1910,1920
    0x5e8975a752e0 ---------A T 01830  PRINT"CENTARE          ";T;"(UNTIL";T0;")"
    0x5e8975a75370 ---------A   01832  GOTO 1930
    0x5e8975a755c0 ---------A T 01840  PRINT"CONDITION         ";C$
    0x5e8975a75650 ---------A   01842  GOTO 1930
    0x5e8975a75aa0 ---------A T 01850  PRINT"QUADRANT      ";Q1;"-";Q2
    0x5e8975a75b30 ---------A   01852  GOTO 1930
    0x5e8975a75f80 ---------A T 01860  PRINT"SECTOR        ";S1;"-";S2
    0x5e8975a76020 ---------A   01862  GOTO 1930
    0x5e8975a76370 ---------A T 01870  PRINT"HYPERDRIVE AT    ";E1;"-DEVICE #1"
    0x5e8975a76400 ---------A   01872  GOTO 1930
    0x5e8975a76650 ---------A T 01880  PRINT"STAR DRIVE AT    ";E2
    0x5e8975a766f0 ---------A   01882  GOTO 1930
    0x5e8975a76a40 ---------A T 01890  PRINT"VIPER RESERVES   ";E3;"-DEVICE #2"
    0x5e8975a76ae0 ---------A   01892  GOTO 1930
    0x5e8975a76e30 ---------A T 01900  PRINT"DEFENSE LASERS   ";E4;"-DEVICE #3"
    0x5e8975a76ec0 ---------A   01902  GOTO 1930
    0x5e8975a77110 ---------A T 01910  PRINT"MISSILES         ";P
    0x5e8975a771a0 ---------A   01912  GOTO 1930
    0x5e8975a773f0 ---------A T 01920  PRINT"CYLONS LEFT      ";N2
    0x5e8975a77530 ---------A T 01930  NEXT I
    0x5e8975a776b0 ---------A   01932  PRINT"==================="
    0x5e8975a77830 ---------A T 01940  PRINT "COMMAND ";
    0x5e8975a779a0 ---------A   01942  INPUT A$
    0x5e8975a77c20 ---------A   01943  IF A$="Q" THEN 3910
    0x5e8975a77f10 ---------A   01950  FOR I=1 TO 10
    0x5e8975a78270 ---------A   01952  IF A$=D$(I) THEN 1990
    0x5e8975a783b0 ---------A   01953  NEXT I
    0x5e8975a78690 ---------A   01960  IF A$<>"OBIWAN KENOBI" THEN 3290
    0x5e8975a78840 ---------A   01970  PRINT"YOU HAVE CALLED UPON THE LEGENDARY POWER OF THE FORCE FOR AID."
    0x5e8975a789b0 ---------A   01980  PRINT"THE FORCE WEAKENS YOUR ENEMIES !"
    0x5e8975a78bd0 ---------A   01982  Z9=1
    0x5e8975a78c70 ---------A   01983  GOTO1940
    0x5e8975a79540 ---------A T 01990  ON I GOTO 2000,2040,2450,2840,3930,2310,1800,3290,3140,3970
    0x5e8975a796c0 ---------A T 02000  PRINT"COURSE ";
    0x5e8975a798e0 ---------A   02003  INPUT C
    0x5e8975a649b0 ---------A   02004  IF C<1 THEN 1940
    0x5e8975a64c20 ---------A   02005  IF C>=9 THEN 1940
    0x5e8975a64db0 ---------A   02010  PRINT "HYPERDRIVE JUMP SPEED ";
    0x5e8975a64f30 ---------A   02013  INPUT W
    0x5e8975a7abd0 ---------A   02014  IF W<1 THEN 1940
    0x5e8975a7ae30 ---------A   02020  IF W>8 THEN 1940
    0x5e8975a7b320 ---------A   02023  X5=INT(W*8)
    0x5e8975a7b690 ---------A   02024  IF E1<=2*X5 THEN 2070
    0x5e8975a7baf0 ---------A   02025  E1=E1-2*X5
    0x5e8975a7bf20 ---------A   02030  T=T+SQR(W)
    0x5e8975a7c450 ---------A   02033  E1=E1+325*SQR(W)
    0x5e8975a7c4c0 ---------A   02034  GOTO 2090
    0x5e8975a7c630 ---------A T 02040  PRINT"COURSE ";
    0x5e8975a7c790 ---------A   02043  INPUT C
    0x5e8975a7c9f0 ---------A   02044  IF C<1 THEN 1940
    0x5e8975a7cc60 ---------A   02045  IF C>=9 THEN 1940
    0x5e8975a7cde0 ---------A   02050  PRINT"STAR SPEED ";
    0x5e8975a7cf40 ---------A   02053  INPUT W
    0x5e8975a7d280 ---------A   02054  W=W/10
    0x5e8975a7d4d0 ---------A   02055  IF W<.2 THEN 1940
    0x5e8975a7d730 ---------A   02060  IF W>.9 THEN 1940
    0x5e8975a7db60 ---------A   02063  X5=INT(W*8)
    0x5e8975a7def0 ---------A   02064  IF E2>=7.5*X5 THEN 2080
    0x5e8975a7e060 ---------A T 02070  PRINT"INSUFFICIENT POWER FOR MOVEMENT"
    0x5e8975a7e0e0 ---------A   02073  GOTO 1940
    0x5e8975a7e530 ---------A T 02080  E2=E2-7.5*X5
    0x5e8975a7ea60 ---------A   02083  E1=E1+350*SQR(W)
    0x5e8975a7ef90 ---------A   02084  T=T+SQR(W)/1.5
    0x5e8975a7f360 ---------A T 02090  Q(S1,S2)=1
    0x5e8975a7f590 ---------A   02093  C$="MOVING"
    0x5e8975a7f800 ---------A   02094  IF T>T0 THEN 3710
    0x5e8975a7fb00 ---------A   02095  X=S1
    0x5e8975a7fdf0 ---------A   02096  Y=S2
    0x5e8975a7fe60 ---------A   02100  GOSUB 2290
    0x5e8975a80150 ---------A   02110  FOR I=1TO X5
    0x5e8975a804b0 ---------A   02113  S1=S1+X1
    0x5e8975a80800 ---------A   02114  S2=S2+X2
    0x5e8975a80a60 ---------A   02115  IF S1<.5 THEN 2190
    0x5e8975a80cc0 ---------A   02120  IF S1>10.5 THEN 2190
    0x5e8975a80f30 ---------A   02123  IF S2<.5 THEN 2190
    0x5e8975a81190 ---------A   02124  IF S2>10.5 THEN 2190
    0x5e8975a81670 ---------A   02130  X6=INT(S1+.5)
    0x5e8975a81b50 ---------A   02133  X7=INT(S2+.5)
    0x5e8975a81f60 ---------A   02134  IF Q(X6,X7)<>7 THEN 2150
    0x5e8975a82010 ---------A   02135  PRINT
    0x5e8975a821a0 ---------A   02140  PRINT"** YOUR BATTLESTAR HAS BEEN ABSORBED BY A BLACK HOLE **"
    0x5e8975a82230 ---------A   02143  GOTO3710
    0x5e8975a82870 ---------A T 02150  IF INT(ABS(X6-B9)+.5)>1 THEN 2200
    0x5e8975a82ec0 ---------A   02153  IF INT(ABS(X7-B8)+.5)>1 THEN 2200
    0x5e8975a83040 ---------A   02160  PRINT"DO YOU WISH TO ORBIT";
    0x5e8975a831b0 ---------A   02163  INPUT A$
    0x5e8975a83440 ---------A   02164  IF A$="Y" THEN 2180
    0x5e8975a836c0 ---------A   02170  IF A$="YES" THEN 2180
    0x5e8975a83aa0 ---------A   02173  B8=B9=F9=-1
    0x5e8975a83b10 ---------A   02174  GOTO 2200
    0x5e8975a83d40 ---------A T 02180  C$="ORBITING"
    0x5e8975a83f70 ---------A   02183  S1=X6
    0x5e8975a841a0 ---------A   02184  S2=X7
    0x5e8975a843b0 ---------A   02185  F9=1
    0x5e8975a84420 ---------A   02186  GOTO 1410
    0x5e8975a847f0 ---------A T 02190  F9=B8=B9=-1
    0x5e8975a84920 ---------A T 02200  NEXT I
    0x5e8975a84d50 ---------A   02203  S1=INT(S1+.5)
    0x5e8975a85160 ---------A   02204  S2=INT(S2+.5)
    0x5e8975a853b0 ---------A T 02210  IF S1>0 THEN 2220
    0x5e8975a856f0 ---------A   02213  S1=S1+10
    0x5e8975a85a20 ---------A   02214  Q1=Q1-1
    0x5e8975a85a90 ---------A   02215  GOTO2210
    0x5e8975a85ce0 ---------A T 02220  IF S1<11 THEN 2230
    0x5e8975a86020 ---------A   02223  S1=S1-10
    0x5e8975a86350 ---------A   02224  Q1=Q1+1
    0x5e8975a863c0 ---------A   02225  GOTO2220
    0x5e8975a86610 ---------A T 02230  IF S2>0 THEN 2240
    0x5e8975a86950 ---------A   02233  S2=S2+10
    0x5e8975a86c80 ---------A   02234  Q2=Q2-1
    0x5e8975a86cf0 ---------A   02235  GOTO 2230
    0x5e8975a86f40 ---------A T 02240  IF S2<11 THEN 2250
    0x5e8975a87280 ---------A   02243  S2=S2-10
    0x5e8975a875b0 ---------A   02244  Q2=Q2+1
    0x5e8975a87620 ---------A   02245  GOTO2240
    0x5e8975a87870 ---------A T 02250  IF Q1>0 THEN 2260
    0x5e8975a87bb0 ---------A   02253  Q1=Q1+10
    0x5e8975a87e00 ---------A T 02260  IF Q1<11 THEN 2270
    0x5e8975a88140 ---------A   02263  Q1=Q1-10
    0x5e8975a88390 ---------A T 02270  IF Q2>0 THEN 2280
    0x5e8975a886d0 ---------A   02273  Q2=Q2+10
    0x5e8975a88920 ---------A T 02280  IF Q2<11 THEN 1410
    0x5e8975a88c60 ---------A   02283  Q2=Q2-10
    0x5e8975a88ce0 ---------A   02284  GOTO 1410
    0x5e8975a89240 ---------B G 02290  X1=-SIN((C-1)*.785398)
    0x5e8975a89790 ---------B   02293  X2=COS((C-1)*.785398)
    0x5e8975a897e0 ---------B   02294  RETURN
    0x5e8975a89ae0 ---------C B 02300  X1=FNR(-1)
    0x5e8975a89de0 ---------C   02303  X2=FNR(-1)
    0x5e8975a8a1f0 ---------C   02304  IF Q(X1,X2)<>1 THEN 2300
    0x5e8975a8a250 ---------C   02305  RETURN
    0x5e8975a8a8b0 ---------A T 02310  IF T-INT(T)>RND(0)/7 THEN 2330
    0x5e8975a8aa20 ---------A   02320  PRINT"NEBULA CLOUD PREVENTS SCAN"
    0x5e8975a8aaa0 ---------A   02323  GOTO 1940
    0x5e8975a8ab40 ---------A T 02330  PRINT
    0x5e8975a8afe0 ---------A   02333  PRINT"LONGE RANGE SENSOR SCAN FOR QUADRANT";Q1;"-";Q2
    0x5e8975a8b170 ---------A   02340  PRINT"     |--------|--------|--------|   POSITIONAL KEY (C P *)"
    0x5e8975a8b690 ---------A   02350  FOR I=Q1-1 TO Q1+1
    0x5e8975a8b8d0 ---------A   02353  X1=I
    0x5e8975a8bde0 ---------A   02354  FOR J=Q2-1 TO Q2+1
    0x5e8975a8c020 ---------A   02355  X2=J
    0x5e8975a8c270 ---------A   02360  IF X1>0 THEN 2370
    0x5e8975a8c5b0 ---------A   02363  X1=X1+10
    0x5e8975a8c800 ---------A T 02370  IF X1<11 THEN 2380
    0x5e8975a8cb40 ---------A   02373  X1=X1-10
    0x5e8975a8cd90 ---------A T 02380  IF X2>0 THEN 2390
    0x5e8975a8d0d0 ---------A   02383  X2=X2+10
    0x5e8975a8d320 ---------A T 02390  IF X2<11 THEN 2400
    0x5e8975a8d670 ---------A   02393  X2=X2-10
    0x5e8975a8dd10 ---------A T 02400  X3=INT(G(X1,X2)/1000)
    0x5e8975a8e7c0 ---------A   02403  N(J-Q2+2)=INT(G(X1,X2))-X3*1000
    0x5e8975a8eeb0 ---------A   02410  S(X1,X2)=N(J-Q2+2)
    0x5e8975a8efe0 ---------A   02413  NEXT J
    0x5e8975a8fca0 ---------A   02420  PRINT TAB(5);"  ";N(1);TAB(14);"  ";N(2);TAB(23);"  ";N(3);
    0x5e8975a8ff60 ---------A   02430  PRINT TAB(32);"  "
    0x5e8975a900d0 ---------A   02433  PRINT"     |--------|--------|--------|"
    0x5e8975a90210 ---------A   02440  NEXT I
    0x5e8975a902a0 ---------A   02443  GOTO 1940
    0x5e8975a904f0 ---------A T 02450  IF N5>0 THEN 2470
    0x5e8975a90780 ---------A   02453  IF N6>0 THEN 2470
    0x5e8975a90900 ---------A   02460  PRINT"YOU ARE HALLUCINATING; NOTHING IS OUT THERE !!!"
    0x5e8975a909a0 ---------A   02463  GOTO 1940
    0x5e8975a90c10 ---------A T 02470  PRINT "VIPERS STANDING BY. SQUADRON SIZE";E3
    0x5e8975a90da0 ---------A   02480  PRINT "HOW MANY UNITS TO LAUNCH ";
    0x5e8975a90f10 ---------A   02483  INPUT X1
    0x5e8975a911b0 ---------A   02490  IF E3>=X1 THEN 2510
    0x5e8975a91520 ---------A   02500  PRINT"I TOLD YOU THERE ARE ONLY";E3;"UNITS !!!"
    0x5e8975a915a0 ---------A   02503  GOTO 1940
    0x5e8975a91800 ---------A T 02510  IF X1<1 THEN 1940
    0x5e8975a91960 ---------A   02513  PRINT"VIPERS LAUNCHED"
    0x5e8975a91cc0 ---------A   02514  E3=E3-X1
    0x5e8975a91f10 ---------A   02515  IF N5=0 THEN2680
    0x5e8975a921f0 ---------A T 02520  X8=0
    0x5e8975a924c0 ---------A   02523  X9=100
    0x5e8975a927d0 ---------A   02524  FOR I=1 TO N5
    0x5e8975a92fa0 ---------A   02530  IF (FND(K(I,1),K(I,2)))>X9 THEN 2550
    0x5e8975a933a0 ---------A   02540  IF K(I,3)<=0 THEN 2550
    0x5e8975a935f0 ---------A   02543  X8=I
    0x5e8975a93d20 ---------A   02544  X9=FND(K(I,1),K(I,2))
    0x5e8975a93e50 ---------A T 02550  NEXT I
    0x5e8975a940c0 ---------A   02553  IF X8=0 THEN 2670
    0x5e8975a94310 ---------A   02554  I=X8
    0x5e8975a94a70 ---------A   02560  IF FND(K(I,1),K(I,2))>3 THEN 2640
    0x5e8975a94e90 ---------A   02570  IF X1<K(I,3) THEN 2620
    0x5e8975a953c0 ---------A   02573  X1=X1-K(I,3)
    0x5e8975a95c60 ---------A T 02580  PRINT"CYLON BASE-STAR AT SECTOR";K(I,1);"-";K(I,2);"DESTROYED"
    0x5e8975a95fa0 ---------A   02590  P4=P4+1
    0x5e8975a96350 ---------A   02593  K(I,3)=0
    0x5e8975a96a60 ---------A   02594  Q(K(I,1),K(I,2))=1
    0x5e8975a96d90 ---------A   02595  N2=N2-1
    0x5e8975a96ff0 ---------A   02600  IF N2=0 THEN 3820
    0x5e8975a976c0 ---------A   02603  G(Q1,Q2)=G(Q1,Q2)-100
    0x5e8975a97ae0 ---------A   02610  IF S(Q1,Q2)=0 THEN 2520
    0x5e8975a981a0 ---------A   02613  S(Q1,Q2)=S(Q1,Q2)-100
    0x5e8975a98240 ---------A   02614  GOTO 2520
    0x5e8975a98ae0 ---------A T 02620  PRINT X1;"CYLON FIGHTERS REMOVED AT SECTOR";K(I,1);"-";K(I,2)
    0x5e8975a99180 ---------A   02630  K(I,3)=K(I,3)-X1
    0x5e8975a99390 ---------A   02633  X1=0
    0x5e8975a99410 ---------A   02634  GOTO 2800
    0x5e8975a9a040 ---------A T 02640  X2=K(I,3)*(FND(K(I,1),K(I,2))/3)^2
    0x5e8975a9a2b0 ---------A   02650  IF X1<X2 THEN 2660
    0x5e8975a9a610 ---------A   02653  X1=X1-X2
    0x5e8975a9a690 ---------A   02654  GOTO 2580
    0x5e8975a9b120 ---------A T 02660  X1=X1/(FND(K(I,1),K(I,2))/3)^2
    0x5e8975a9b190 ---------A   02663  GOTO 2620
    0x5e8975a9b3e0 ---------A T 02670  IF X1=0 THEN 2800
    0x5e8975a9b640 ---------A T 02680  IF N6=0 THEN 2800
    0x5e8975a9b950 ---------A   02683  FOR I=1 TO N6
    0x5e8975a9bd60 ---------A   02684  IF R(I,3)<=0 THEN 2790
    0x5e8975a9c4d0 ---------A   02690  IF FND(R(I,1),R(I,2))>3 THEN 2760
    0x5e8975a9c8f0 ---------A   02700  IF X1<R(I,3) THEN 2740
    0x5e8975a9ce20 ---------A   02703  X1=X1-R(I,3)
    0x5e8975a9d6b0 ---------A T 02710  PRINT"E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2);"DESTROYED"
    0x5e8975a9d9f0 ---------A   02720  P4=P4+.5
    0x5e8975a9dda0 ---------A   02723  R(I,3)=0
    0x5e8975a9e4b0 ---------A   02724  Q(R(I,1),R(I,2))=1
    0x5e8975a9e7f0 ---------A   02725  N3=N3-1
    0x5e8975a9eea0 ---------A   02730  G(Q1,Q2)=G(Q1,Q2)-1000
    0x5e8975a9f1d0 ---------A   02733  N6=N6-1
    0x5e8975a9f270 ---------A   02734  GOTO 2800
    0x5e8975a9fb10 ---------A T 02740  PRINT X1;"UNITS HIT IN E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5e8975aa01b0 ---------A   02750  R(I,3)=R(I,3)-X1
    0x5e8975aa03c0 ---------A   02753  X1=0
    0x5e8975aa0440 ---------A   02754  GOTO 2800
    0x5e8975aa1070 ---------A T 02760  X2=R(I,3)*(FND(R(I,1),R(I,2))/3)^2
    0x5e8975aa12e0 ---------A   02770  IF X1<X2 THEN 2780
    0x5e8975aa1640 ---------A   02773  X1=X1-X2
    0x5e8975aa16c0 ---------A   02774  GOTO 2710
    0x5e8975aa2150 ---------A T 02780  X1=X1/(FND(R(I,1),R(I,2))/3)^2
    0x5e8975aa21c0 ---------A   02783  GOTO 2740
    0x5e8975aa22f0 ---------A T 02790  NEXT I
    0x5e8975aa2590 ---------A T 02800  IF X1<10 THEN 2820
    0x5e8975aa2900 ---------A   02810  PRINT"COMPUTER REPORTS";X1;"VIPERS EXPLODED IN LAUNCH TUBES"
    0x5e8975aa2980 ---------A T 02820  GOSUB 3400
    0x5e8975aa29f0 ---------A   02830  GOTO 1940
    0x5e8975aa2c50 ---------A T 02840  IF P>0 THEN 2850
    0x5e8975aa2db0 ---------A   02843  PRINT"MISSILES EXPENDED"
    0x5e8975aa2e30 ---------A   02844  GOTO 1940
    0x5e8975aa2fa0 ---------A T 02850  PRINT"COURSE ";
    0x5e8975aa3100 ---------A   02853  INPUT C
    0x5e8975aa3360 ---------A   02854  IF C<1 THEN 1940
    0x5e8975aa35c0 ---------A   02855  IF C>=9 THEN 1940
    0x5e8975aa3640 ---------A   02860  GOSUB 2290
    0x5e8975aa3870 ---------A   02870  X=S1
    0x5e8975aa3ab0 ---------A   02873  Y=S2
    0x5e8975aa3d20 ---------A   02874  IF C$="ORBITING" THEN 2880
    0x5e8975aa4070 ---------A   02875  P=P-1
    0x5e8975aa41d0 ---------A T 02880  PRINT"MISSILE AWAY, TRACKING:"
    0x5e8975aa4530 ---------A T 02890  X=X+X1
    0x5e8975aa4880 ---------A   02893  Y=Y+X2
    0x5e8975aa4ae0 ---------A   02894  IF X<.5 THEN 3130
    0x5e8975aa4d40 ---------A   02900  IF X>10.5 THEN 3130
    0x5e8975aa4fb0 ---------A   02903  IF Y<.5 THEN 3130
    0x5e8975aa5230 ---------A   02904  IF Y>10.5 THEN 3130
    0x5e8975aa5b50 ---------A   02910  PRINT INT(X*100)/100;"-";INT(Y*100)/100
    0x5e8975aa5f70 ---------A   02913  X3=INT(X+.5)
    0x5e8975aa6470 ---------A   02914  X4=INT(Y+.5)
    0x5e8975aa6ce0 ---------A   02920  ON Q(X3,X4) GOTO 2890,2940,2890,3020,2960,3060,2930
    0x5e8975aa6e50 ---------A T 02930  PRINT"MISSILE ABSORBED BY BLACK HOLE"
    0x5e8975aa6f00 ---------A   02933  GOTO 3130
    0x5e8975aa7070 ---------A T 02940  PRINT"MISSILE ABSORBED BY STAR - DISRUPTION SLIGHT"
    0x5e8975aa7590 ---------A   02950  P4=P4-RND(-1)*2
    0x5e8975aa7630 ---------A   02953  GOTO 3110
    0x5e8975aa7b90 ---------A T 02960  PRINT"CYLON BASE-STAR AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5e8975aa7ed0 ---------A   02970  P4=P4+1
    0x5e8975aa81d0 ---------A   02973  FOR I=1 TO N5
    0x5e8975aa8600 ---------A   02974  IF K(I,1)<>X3 THEN 3010
    0x5e8975aa8a20 ---------A   02980  IF K(I,2)<>X4 THEN 3010
    0x5e8975aa8df0 ---------A   02983  K(I,3)=0
    0x5e8975aa94b0 ---------A   02984  G(Q1,Q2)=G(Q1,Q2)-100
    0x5e8975aa98d0 ---------A   02990  IF S(Q1,Q2)=0 THEN 3000
    0x5e8975aa9f90 ---------A   02993  S(Q1,Q2)=S(Q1,Q2)-100
    0x5e8975aaa2c0 ---------A T 03000  N2=N2-1
    0x5e8975aaa510 ---------A   03004  IF N2=0 THEN 3820
    0x5e8975aaa590 ---------A   03005  GOTO 3100
    0x5e8975aaa6c0 ---------A T 03010  NEXT I
    0x5e8975aaa770 ---------A   03014  GOTO 3130
    0x5e8975aaa8d0 ---------A T 03020  PRINT "COMMANDER, WHAT HAVE YOU DONE ??!!"
    0x5e8975aaac40 ---------A   03024  P4=P4-30
    0x5e8975aab1a0 ---------A   03030  PRINT"*** TERRAN PLANET AT SECTOR";X3;"-";X4;"DESTROYED ***"
    0x5e8975aab250 ---------A   03040  PRINT
    0x5e8975aab3e0 ---------A   03044  PRINT"ENERGY BOLT APPROACHING FROM DIRECTION OF FORMER PLANET!"
    0x5e8975aab480 ---------A   03050  PRINT
    0x5e8975aab600 ---------A   03054  PRINT"                     **** ZZZZAAP  ****"
    0x5e8975aab680 ---------A   03055  PRINT
    0x5e8975aab720 ---------A   03056  GOTO3710
    0x5e8975aabc70 ---------A T 03060  PRINT"E.A.FLEET AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5e8975aabfb0 ---------A   03070  P4=P4+.5
    0x5e8975aac2b0 ---------A   03074  FOR I=1 TO N6
    0x5e8975aac6e0 ---------A   03075  IF R(I,1)<>X3 THEN3090
    0x5e8975aacb00 ---------A   03076  IF R(I,2)<>X4 THEN3090
    0x5e8975a79cb0 ---------A   03080  R(I,3)=0
    0x5e8975a7a360 ---------A   03084  G(Q1,Q2)=G(Q1,Q2)-1000
    0x5e8975a7a690 ---------A   03085  N3=N3-1
    0x5e8975a7a700 ---------A   03086  GOTO 3100
    0x5e8975a7a830 ---------A T 03090  NEXT I
    0x5e8975aaee50 ---------A T 03100  Q(X3,X4)=1
    0x5e8975aaeec0 ---------A T 03110  GOSUB 3400
    0x5e8975aaef40 ---------A   03120  GOTO 1940
    0x5e8975aaf090 ---------A T 03130  PRINT"MISSILE MISSED TARGET"
    0x5e8975aaf130 ---------A   03134  GOTO 3110
    0x5e8975aaf2b0 ---------A T 03140  PRINT"TRANSFER ENERGY FROM DEVICE # ";
    0x5e8975aaf410 ---------A   03144  INPUT X1
    0x5e8975aaf690 ---------A   03150  IF X1=0 THEN 1940
    0x5e8975aaf820 ---------A   03160  PRINT".... AND ALLOCATE TO DEVICE # ";
    0x5e8975aaf980 ---------A   03164  INPUT X2
    0x5e8975aafbe0 ---------A   03170  IF X2=0 THEN 1940
    0x5e8975aafe70 ---------A   03174  IF X2>X1 THEN 3190
    0x5e8975aaffe0 ---------A T 03180  PRINT"IMPOSSIBLE, COMMANDER !"
    0x5e8975ab0060 ---------A   03184  GOTO 1940
    0x5e8975ab02c0 ---------A T 03190  IF X2>3 THEN 3180
    0x5e8975ab0450 ---------A   03194  PRINT"# OF UNITS TO TRANSFER ";
    0x5e8975ab05c0 ---------A   03195  INPUT X3
    0x5e8975ab08a0 ---------A   03200  ON X1 GOTO 3210,3240
    0x5e8975ab0b40 ---------A T 03210  IF E1>X3 THEN 3230
    0x5e8975ab0cb0 ---------A T 03220  PRINT"INSUFFICIENT POWER AVAILABLE"
    0x5e8975ab0d30 ---------A   03224  GOTO 1940
    0x5e8975ab1080 ---------A T 03230  E1=E1-X3
    0x5e8975ab10f0 ---------A   03234  GOTO 3250
    0x5e8975ab1360 ---------A T 03240  IF X3>E3 THEN 3220
    0x5e8975ab16d0 ---------A   03244  E3=E3+X3
    0x5e8975ab1aa0 ---------A T 03250  ON X2-1 GOTO 3260,3270
    0x5e8975ab1e00 ---------A T 03260  E3=E3+X3
    0x5e8975ab1e70 ---------A   03264  GOTO 3280
    0x5e8975ab21c0 ---------A T 03270  E4=E4+X3
    0x5e8975ab2520 ---------A   03274  Q8=Q8+X3
    0x5e8975ab2670 ---------A T 03280  PRINT"TRANSFER COMPLETE"
    0x5e8975ab2720 ---------A   03284  GOTO 1940
    0x5e8975ab2ac0 ---------A T 03290  PRINT" H -- HYPERDRIVE JUMP";TAB(37);"COURSE GUIDE"
    0x5e8975ab2c60 ---------A   03300  PRINT" SS - STAR-SPEED MANEUVER"
    0x5e8975ab3030 ---------A   03310  PRINT" L -- LONG RANGE SENSOR SCAN";TAB(40);"4  3  2"
    0x5e8975ab3400 ---------A   03320  PRINT" S -- SHORT RANGE SENSOR SCAN";TAB(42);"\|/"
    0x5e8975ab37c0 ---------A   03330  PRINT" V -- LAUNCH VIPERS";TAB(40);"5 -*- 1"
    0x5e8975ab3b90 ---------A   03340  PRINT" M -- FIRE MISSILE";TAB(42);"/|\"
    0x5e8975ab3f50 ---------A   03350  PRINT" A -- ALLOCATE ENERGY UNITS";TAB(40);"6  7  8"
    0x5e8975ab40d0 ---------A   03360  PRINT" G -- GENERATE POWER"
    0x5e8975ab4260 ---------A   03370  PRINT" R -- RECALL LONG RANGE SENSOR INFORMATION"
    0x5e8975ab43f0 ---------A   03380  PRINT" C -- THIS LIST OF COMMANDS"
    0x5e8975ab4560 ---------A   03390  PRINT" Q -- QUIT GAME(ABNORMAL ENDING)"
    0x5e8975ab45f0 ---------A   03394  GOTO 1940
    0x5e8975ab4880 ---------D G 03400  IF C$<>"ORBITING" THEN 3420
    0x5e8975ab4a00 ---------D   03410  PRINT"PLANETARY DEFENSES PROTECT YOUR BATTLESTAR"
    0x5e8975ab4a60 ---------D   03414  RETURN
    0x5e8975ab4cd0 ---------D T 03420  IF Z9=0THEN3430
    0x5e8975ab4e40 ---------D   03424  PRINT"THE FORCE IS WITH YOU !"
    0x5e8975ab5080 ---------D T 03430  C$="GREEN"
    0x5e8975ab5350 ---------D   03434  Q9=0
    0x5e8975ab55a0 ---------D   03435  IF N5=0 THEN 3550
    0x5e8975ab58b0 ---------D   03436  FOR I=1 TO N5
    0x5e8975ab5cb0 ---------D   03440  IF K(I,3)=0 THEN 3540
    0x5e8975ab5f00 ---------D   03444  C$="RED"
    0x5e8975ab6650 ---------D   03450  IF FND(K(I,1),K(I,2))>3 THEN 3520
    0x5e8975ab6b50 ---------D   03454  E4=E4-K(I,3)
    0x5e8975ab7070 ---------D   03455  Q9=Q9+K(I,3)
    0x5e8975ab7940 ---------D   03460  PRINT K(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975ab80e0 ---------D T 03470  PRINT"FROM CYLON AT SECTOR";K(I,1);"-";K(I,2)
    0x5e8975ab8340 ---------D   03474  IF E4>0THEN3490
    0x5e8975ab83d0 ---------D   03480  GOSUB 3740
    0x5e8975ab8630 ---------D T 03490  IF E4>400 THEN 3510
    0x5e8975ab87a0 ---------D   03500  PRINT"LASER CANNONS FAILING !"
    0x5e8975ab8830 ---------D T 03510  GOTO 3540
    0x5e8975ab9460 ---------D T 03520  X1=K(I,3)/(FND(K(I,1),K(I,2))/3)^2
    0x5e8975ab97b0 ---------D   03524  E4=E4-X1
    0x5e8975ab9b20 ---------D   03525  Q9=Q9+X1
    0x5e8975aba230 ---------D   03530  PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975aba2b0 ---------D   03534  GOTO 3470
    0x5e8975aba3e0 ---------D T 03540  NEXT I
    0x5e8975aba650 ---------D T 03550  IF N6=0 THEN 3660
    0x5e8975aba960 ---------D   03554  FOR I=1 TO N6
    0x5e8975abad60 ---------D   03555  IF R(I,3)=0THEN3650
    0x5e8975abafb0 ---------D   03556  C$="RED"
    0x5e8975abb700 ---------D   03560  IF FND(R(I,1),R(I,2))>3 THEN 3630
    0x5e8975abbc00 ---------D   03564  E4=E4-R(I,3)
    0x5e8975abc120 ---------D   03565  Q9=Q9+R(I,3)
    0x5e8975abc9f0 ---------D   03570  PRINT R(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975abd1a0 ---------D T 03580  PRINT"FROM E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5e8975abd400 ---------D   03590  IF E4>0 THEN 3600
    0x5e8975abd490 ---------D   03594  GOSUB 3740
    0x5e8975abd6f0 ---------D T 03600  IF E4>400 THEN 3620
    0x5e8975abd860 ---------D   03610  PRINT"LASER CANNONS FAILING !"
    0x5e8975abd8f0 ---------D T 03620  GOTO 3650
    0x5e8975abe520 ---------D T 03630  X1=R(I,3)/(FND(R(I,1),R(I,2))/3)^2
    0x5e8975abe870 ---------D   03634  E4=E4-X1
    0x5e8975abebe0 ---------D   03635  Q9=Q9+X1
    0x5e8975abf2f0 ---------D   03640  PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975abf370 ---------D   03644  GOTO 3580
    0x5e8975abf4a0 ---------D T 03650  NEXT I
    0x5e8975abf730 ---------D T 03660  IF E1<=0THEN3710
    0x5e8975abfd90 ---------D   03664  PRINT ((Q8-E4)/Q8)*100;"PERCENT DAMAGE.";
    0x5e8975ac0100 ---------D   03670  PRINT"          LASERS FIRING AT";E4;"."
    0x5e8975ac03b0 ---------D   03680  IF Q9<E4 THEN 3700
    0x5e8975ac0530 ---------D   03690  PRINT"COMMANDER, WE CANNOT WITHSTAND ANOTHER ATTACK !!"
    0x5e8975ac0590 ---------D T 03700  RETURN
    0x5e8975ac0750 -------EDA T 03710  PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5e8975ac0bc0 -------EDA   03720  PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5e8975ac0c60 -------EDA   03730  GOTO 3920
    0x5e8975ac0dc0 ---------E G 03740  PRINT"DRAWING ENERGY FOR LASER CANNONS"
    0x5e8975ac1230 ---------E   03744  Q8=Q8-E4+1
    0x5e8975ac16c0 ---------E   03750  IF -E4*1.5+1>E3 THEN 3780
    0x5e8975ac1830 ---------E   03760  VIPER FUEL RESERVES"
    0x5e8975ac1d90 ---------E   03770  E3=E3-1+E4*1.25
    0x5e8975ac1fa0 ---------E   03774  E4=1
    0x5e8975ac1ff0 ---------E   03775  RETURN
    0x5e8975ac25b0 ---------E T 03780  IF -E4*1.5+1>E1+E3 THEN 3710
    0x5e8975ac2740 ---------E   03790  VIPER FUEL EXHAUSTED"
    0x5e8975ac28b0 ---------E   03800  PRINT".......TAPPING HYPERDRIVE COILS"
    0x5e8975ac2c10 ---------E   03810  E4=E4+E3
    0x5e8975ac2e20 ---------E   03814  E3=0
    0x5e8975ac3370 ---------E   03815  E1=E1-1+E4*1.66
    0x5e8975ac3580 ---------E   03816  E4=1
    0x5e8975ac35d0 ---------E   03817  RETURN
    0x5e8975ac3b90 ---------A T 03820  P4=P4-(T-T9)/2
    0x5e8975ac3de0 ---------A   03824  IF P4>10THEN3870
    0x5e8975ac3e90 ---------A   03825  PRINT
    0x5e8975ac4040 ---------A   03830  PRINT"EVEN THOUGH THE CYLONS HAVE BEEN DESTROYED, AND THE"
    0x5e8975ac41e0 ---------A   03840  PRINT"EASTERN ALLIANCE HAS FLED, YOU HAVE BEEN TOO DAMAGING"
    0x5e8975ac4360 ---------A   03850  PRINT"TO TERRAN CIVILIZATIONS TO WIN."
    0x5e8975ac44d0 ---------A   03860  PRINT"..... CALL IT A DRAW ....."
    0x5e8975ac4550 ---------A   03864  GOTO3920
    0x5e8975ac45d0 ---------A T 03870  PRINT
    0x5e8975ac4770 ---------A   03874  PRINT"CONGRATULATIONS, COMMANDER."
    0x5e8975ac4920 ---------A   03880  PRINT"THE CYLONS HAVE BEEN DESTROYED, AND THE EASTERN"
    0x5e8975ac4ab0 ---------A   03890  PRINT"ALLIANCE HAS FLED, MAKING THIS A GREAT VICTORY"
    0x5e8975ac4c20 ---------A   03900  PRINT"FOR THE TERRAN EMPIRE."
    0x5e8975ac4cc0 ---------A T 03910  PRINT
    0x5e8975ac4e30 ---------A   03914  PRINT"A RATING GREATER THAN 10 IS GOOD!"
    0x5e8975ac5400 ---------A   03915  P4=P4-(T-T9)/2
    0x5e8975ac5650 -------EDA T 03920  PRINT"=RATING= ";P4
    0x5e8975ac56e0 -------EDA   03924  PRINT
    0x5e8975ac5840 -------EDA   03925  PRINT"PLEASE TYPE* DONE"
    0x5e8975ac58a0 -------EDA   03926  STOP
    0x5e8975ac5b40 ---------A T 03930  IF C$="GREEN" THEN3940
    0x5e8975ac5dc0 ---------A   03934  IF C$="YELLOW" THEN3940
    0x5e8975ac5e40 ---------A   03935  GOTO3960
    0x5e8975ac6170 ---------A T 03940  E1=E1+500
    0x5e8975ac64a0 ---------A   03944  T=T+.5
    0x5e8975ac6720 ---------A   03945  IF T>T0 THEN3710
    0x5e8975ac6880 ---------A   03950  PRINT"POWER GENERATED"
    0x5e8975ac6910 ---------A   03954  GOTO1940
    0x5e8975ac6a70 ---------A T 03960  PRINT"IMPOSSIBLE UNDER RED ALERT"
    0x5e8975ac6af0 ---------A   03964  GOTO1940
    0x5e8975ac6b60 ---------A T 03970  PRINT
    0x5e8975ac6e40 ---------A   03974  FOR X6=1TO10
    0x5e8975ac7130 ---------A   03975  FOR X7=1TO10
    0x5e8975ac76d0 ---------A   03976  PRINT S(X6,X7);TAB(X7*5);
    0x5e8975ac7810 ---------A   03980  NEXT X7
    0x5e8975ac78a0 ---------A   03984  PRINT
    0x5e8975ac79e0 ---------A   03985  NEXT X6
    0x5e8975ac7a70 ---------A   03986  GOTO1940
    0x5e8975ac7ac0 ---------A   03990  END
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

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5e8975a4bdb0 (00900)   0x5e8975a4bdb0 (00900)   0x5e8975ac7ac0 (03990)   0x5e8975ac7ac0 (03990)   
   B) 0x5e8975a89240 (02290)   0x5e8975a89240 (02290)   0x5e8975a897e0 (02294)   0x5e8975a897e0 (02294)   
   C) 0x5e8975a89ae0 (02300)   0x5e8975a89ae0 (02300)   0x5e8975a8a250 (02305)   0x5e8975a8a250 (02305)   
   D) 0x5e8975ab4880 (03400)   0x5e8975ab4880 (03400)   0x5e8975ab4a60 (03414)   0x5e8975ac58a0 (03926)   
   E) 0x5e8975ac0750 (03710)   0x5e8975ac0dc0 (03740)   0x5e8975ac1ff0 (03775)   0x5e8975ac58a0 (03926)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine D!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/btlstr.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e8975a4bdb0 ---------A   00900  REM Game of BattleStar
    0x5e8975a4ab80 ---------A   00901  REM 
    0x5e8975a4bf30 ---------A   00902  REM Variable List
    0x5e8975a4be70 ---------A   00903  REM     A$			- 
    0x5e8975a4bff0 ---------A   00904  REM     B8			- 
    0x5e8975a4afc0 ---------A   00905  REM     B9			- 
    0x5e8975a4a2d0 ---------A   00906  REM     C			- 
    0x5e8975a4a910 ---------A   00907  REM     C$			- Alert Condition
    0x5e8975a3a2b0 ---------A   00908  REM     D$[11]		- 
    0x5e8975a4c0b0 ---------A   00909  REM     E1			- Hyperdrive Coil Energy
    0x5e8975a499e0 ---------A   00910  REM     E2			- Star Drive Energy
    0x5e8975a497f0 ---------A   00911  REM     E3			- Viper Reserve Energy
    0x5e8975a4baa0 ---------A   00912  REM     E4			- Defence Laser Energy
    0x5e8975a4a040 ---------A   00913  REM     F9			- 
    0x5e8975a4a0b0 ---------A   00914  REM     G[11][11]	- 
    0x5e8975a49e40 ---------A   00915  REM     I			- 
    0x5e8975a4a480 ---------A   00916  REM     J			- 
    0x5e8975a4a510 ---------A   00917  REM     K[6][4]	- 
    0x5e8975a4b6a0 ---------A   00918  REM     N[10]		- 
    0x5e8975a4b710 ---------A   00919  REM     N1			- 
    0x5e8975a49be0 ---------A   00920  REM     N2			- Cylons left.
    0x5e8975a49c70 ---------A   00921  REM     N3			- 
    0x5e8975a4c100 ---------A   00922  REM     N4			- 
    0x5e8975a4c190 ---------A   00923  REM     N5			- 
    0x5e8975a4c220 ---------A   00924  REM     N6			- 
    0x5e8975a4a640 ---------A   00925  REM     N7			- 
    0x5e8975a4a6f0 ---------A   00926  REM     P			- Number of missles
    0x5e8975a4a780 ---------A   00927  REM     P4			- 
    0x5e8975a4a820 ---------A   00928  REM     Q[11][11]	- 
    0x5e8975a518a0 ---------A   00929  REM     Q$[8]		- 
    0x5e8975a51920 ---------A   00930  REM     Q1			- Quadrant Indice
    0x5e8975a519d0 ---------A   00931  REM     Q2			- Quadrant Indice
    0x5e8975a51a60 ---------A   00932  REM     Q8			- 
    0x5e8975a51d00 ---------A   00933  REM     Q9			- 
    0x5e8975a51d90 ---------A   00934  REM     R[3][4]	- 
    0x5e8975a51e30 ---------A   00935  REM     S[11][11]	- 
    0x5e8975a51ee0 ---------A   00936  REM     S1			- Sector Indice
    0x5e8975a51f90 ---------A   00937  REM     S2			- Sector Indice
    0x5e8975a52040 ---------A   00938  REM     T			- Game time in Centare
    0x5e8975a520f0 ---------A   00939  REM     T0			- End time for game. 
    0x5e8975a52180 ---------A   00940  REM     T9			- 
    0x5e8975a52210 ---------A   00941  REM     W			- 
    0x5e8975a522a0 ---------A   00942  REM     X			- 
    0x5e8975a52330 ---------A   00943  REM     X1			- 
    0x5e8975a523c0 ---------A   00944  REM     X2			- 
    0x5e8975a52450 ---------A   00945  REM     X3			- 
    0x5e8975a524e0 ---------A   00946  REM     X4			- 
    0x5e8975a52570 ---------A   00947  REM     X5			- 
    0x5e8975a52600 ---------A   00948  REM     X6			- 
    0x5e8975a52690 ---------A   00949  REM     X7			- 
    0x5e8975a52720 ---------A   00950  REM     X8			- 
    0x5e8975a527b0 ---------A   00951  REM     X9			- 
    0x5e8975a52840 ---------A   00952  REM     Y			- 
    0x5e8975a528d0 ---------A   00953  REM     Z9			- 
    0x5e8975a537f0 ---------A   01000  DIM Q(10,10),G(10,10),K(5,3),R(2,3),Q$(7),S(10,10)
    0x5e8975a496d0 ---------A   01010  PRINT"WELCOME TO ** BATTLESTAR **          (BY RWMELHUISH)"
    0x5e8975a49670 ---------A   01012  PRINT
    0x5e8975a539a0 ---------A   01013  PRINT
    0x5e8975a53d40 ---------A   01020  FOR I=1 TO 7
    0x5e8975a53f80 ---------A   01022  READ Q$(I)
    0x5e8975a540b0 ---------A   01023  NEXT I
    0x5e8975a54770 ---------A   01030  DATA ".","*",B,P,C,E,O
    0x5e8975a54a40 ---------A   01040  DIM D$(10)
    0x5e8975a54d10 ---------A   01050  FOR I=1 TO 10
    0x5e8975a54f50 ---------A   01052  READ D$(I)
    0x5e8975a55490 ---------A   01053  NEXT I
    0x5e8975a55e10 ---------A   01060  DATA H,SS,V,M,G,L,S,C,A,R
    0x5e8975a56860 ---------A   01070  T0=INT(RND(-1)*20000)/10+INT(RND(-1)*5000)
    0x5e8975a56b50 ---------A   01072  Z9=0
    0x5e8975a579d0 ---------A   01080  DEF FND(X1,X2)=SQR((S1-X1)^2+(S2-X2)^2)
    0x5e8975a58170 ---------A   01090  DEF FNR(X1)=INT(RND(X1)*10)+1
    0x5e8975a58c00 ---------A   01100  T=T9=T0-(60-3*ABS(FNR(-1)-5))
    0x5e8975a58ed0 ---------A   01110  E1=1250
    0x5e8975a591a0 ---------A   01112  E2=300
    0x5e8975a59470 ---------A   01113  E3=2000
    0x5e8975a598e0 ---------A   01114  Q8=E4=1250
    0x5e8975a59bb0 ---------A   01115  P=13
    0x5e8975a5a020 ---------A   01116  B8=B9=-1
    0x5e8975a5a2f0 ---------A   01120  MAT G=ZER
    0x5e8975a5a6b0 ---------A   01130  Q1=FNR(-1)
    0x5e8975a5aa60 ---------A   01132  Q2=FNR(-1)
    0x5e8975a5ad50 ---------A   01133  S1=FNR(-1)
    0x5e8975a5b040 ---------A   01134  S2=FNR(-1)
    0x5e8975a5b990 ---------A   01135  N1=N2=N3=F9=P4=0
    0x5e8975a5bc60 ---------A   01140  FOR I=1 TO 10
    0x5e8975a5c000 ---------A   01142  FOR J=1 TO 10
    0x5e8975a5c400 ---------A   01143  X1=RND(-1)*50
    0x5e8975a5ca20 ---------A   01144  N4=N5=N6=0
    0x5e8975a5cc70 ---------A   01150  IF X1>.08 THEN 1160
    0x5e8975a5cfc0 ---------A   01152  N5=N5+1
    0x5e8975a5d210 ---------A T 01160  IF X1>.28 THEN 1170
    0x5e8975a5d560 ---------A   01162  N5=N5+1
    0x5e8975a5d7b0 ---------A T 01170  IF X1>1.28 THEN 1180
    0x5e8975a5db00 ---------A   01172  N5=N5+1
    0x5e8975a5dd50 ---------A T 01180  IF X1>3.28 THEN 1190
    0x5e8975a5e0a0 ---------A   01182  N5=N5+1
    0x5e8975a5e2f0 ---------A T 01190  IF X1>13.28 THEN 1200
    0x5e8975a5e630 ---------A   01192  N5=N5+1
    0x5e8975a5e880 ---------A T 01200  IF N2<36 THEN 1210
    0x5e8975a5eaa0 ---------A   01202  N5=0
    0x5e8975a5edf0 ---------A T 01210  N2=N2+N5
    0x5e8975a5f050 ---------A   01212  IF N1>2 THEN 1220
    0x5e8975a5f370 ---------A   01213  IF RND(-1)<.97 THEN 1220
    0x5e8975a5f590 ---------A   01214  N4=1
    0x5e8975a5fb20 ---------A T 01220  N7=ABS(FNR(-1)-1)
    0x5e8975a5fe70 ---------A   01222  N1=N1+N4
    0x5e8975a600c0 ---------A   01223  IF N5>3 THEN 1260
    0x5e8975a604d0 ---------A   01224  X1=RND(-1)*40
    0x5e8975a60720 ---------A   01230  IF X1>4.25 THEN 1240
    0x5e8975a60a70 ---------A   01232  N6=N6+1
    0x5e8975a60cc0 ---------A T 01240  IF X1>16.25 THEN 1250
    0x5e8975a61000 ---------A   01242  N6=N6+1
    0x5e8975a61360 ---------A T 01250  N3=N3+N6
    0x5e8975a61dc0 ---------A T 01260  G(I,J)=N6*1000+N5*100+N4*10+N7
    0x5e8975a620d0 ---------A   01270  IF RND(-1)>.45 THEN 1280
    0x5e8975a62790 ---------A   01272  G(I,J)=G(I,J)+.1
    0x5e8975a628c0 ---------A T 01280  NEXT J
    0x5e8975a62a10 ---------A   01282  NEXT I
    0x5e8975a62c80 ---------A   01283  IF N1>0 THEN 1300
    0x5e8975a62f80 ---------A   01290  I=FNR(-1)
    0x5e8975a63270 ---------A   01292  J=FNR(-1)
    0x5e8975a63920 ---------A   01293  G(I,J)=G(I,J)+10
    0x5e8975a63b30 ---------A   01294  N1=1
    0x5e8975a63bc0 ---------A T 01300  PRINT
    0x5e8975a63e60 ---------A   01302  PRINT N2;"CYLONS HAVE PENETRATED TERRAN SPACE."
    0x5e8975a63ff0 ---------A   01310  PRINT ".....THEY ARE ASSISTED BY THE EASTERN ALLIANCE."
    0x5e8975a64370 ---------A   01320  PRINT "ONLY";N1;"TERRAN PLANET";
    0x5e8975a645d0 ---------A   01322  IF N1<2 THEN 1340
    0x5e8975a64750 ---------A   01330  PRINT "S HAVE";
    0x5e8975a64fe0 ---------A   01332  GOTO 1350
    0x5e8975a65170 ---------A T 01340  PRINT" HAS";
    0x5e8975a65310 ---------A T 01350  PRINT" SURVIVED THE INITIAL ASSAULT."
    0x5e8975a656a0 ---------A   01360  PRINT"YOU HAVE UNTIL CENTARE";T0;"TO DEFEAT THE CYLONS"
    0x5e8975a65810 ---------A   01370  PRINT"AND DRIVE AWAY THE EASTERN ALLIANCE."
    0x5e8975a658a0 ---------A   01380  PRINT
    0x5e8975a65a20 ---------A   01382  PRINT".....REMEMBER :"
    0x5e8975a65ba0 ---------A   01390  PRINT".....DO NOT RUN INTO ANY BLACK HOLES....."
    0x5e8975a65c20 ---------A   01400  PRINT
    0x5e8975a65ca0 ---------A   01402  PRINT
    0x5e8975a65fb0 ---------A   01403  C$="WHO CARES"
    0x5e8975a66120 ---------A T 01404  PRINT" CONTINUE(C)";
    0x5e8975a66350 ---------A   01405  INPUT A$
    0x5e8975a665d0 ---------A   01407  IF A$<>"C" THEN 1404
    0x5e8975a66840 ---------A T 01410  IF N2=0 THEN 3820
    0x5e8975a66f10 ---------A   01412  N6=INT(INT(G(Q1,Q2))/1000)
    0x5e8975a67800 ---------A   01420  N5=INT(INT(G(Q1,Q2))/100)-N6*10
    0x5e8975a68310 ---------A   01430  N4=INT(INT(G(Q1,Q2))/10)-N6*100-N5*10
    0x5e8975a68e40 ---------A   01440  N7=INT(G(Q1,Q2))-N6*1000-N5*100-N4*10
    0x5e8975a69110 ---------A   01450  MAT Q=CON
    0x5e8975a694f0 ---------A   01460  Q(S1,S2)=3
    0x5e8975a69740 ---------A   01462  IF F9<>1 THEN 1470
    0x5e8975a69b20 ---------A   01463  Q(B9,B8)=4
    0x5e8975a69d70 ---------A T 01470  IF N5=0 THEN 1550
    0x5e8975a69df0 ---------A   01472  PRINT
    0x5e8975a69e90 ---------A   01473  PRINT
    0x5e8975a6a010 ---------A   01480  PRINT"COMPUTER LASERS ACTIVATING  ** RED ALERT **"
    0x5e8975a6a0a0 ---------A   01482  PRINT
    0x5e8975a6a420 ---------A   01490  PRINT"SCANNERS SHOW";N5;"CYLON";
    0x5e8975a6a680 ---------A   01492  IF N5<2 THEN 1500
    0x5e8975a6a800 ---------A   01493  PRINT"S";
    0x5e8975a6a960 ---------A T 01500  PRINT"."
    0x5e8975a6ac60 ---------A   01502  FOR I=1 TO N5
    0x5e8975a6ace0 ---------A   01510  GOSUB 2300
    0x5e8975a6b0b0 ---------A   01520  K(I,1)=X1
    0x5e8975a6b480 ---------A   01522  K(I,2)=X2
    0x5e8975a6b6e0 ---------A   01523  IF F9=1 THEN 1540
    0x5e8975a6bd80 ---------A   01524  K(I,3)=175+RND(0)*51
    0x5e8975a6bfd0 ---------A   01530  IF Z9<>1THEN1540
    0x5e8975a6c650 ---------A   01532  K(I,3)=K(I,3)/2
    0x5e8975a6ca20 ---------A T 01540  Q(X1,X2)=5
    0x5e8975a6cb50 ---------A   01542  NEXT I
    0x5e8975a6cdc0 ---------A T 01550  IF N6=0 THEN 1600
    0x5e8975a6d0c0 ---------A   01552  FOR I=1 TO N6
    0x5e8975a6d140 ---------A   01560  GOSUB 2300
    0x5e8975a6d510 ---------A   01570  R(I,1)=X1
    0x5e8975a6d8e0 ---------A   01572  R(I,2)=X2
    0x5e8975a6db40 ---------A   01573  IF F9=1 THEN 1590
    0x5e8975a6e1e0 ---------A   01574  R(I,3)=175+RND(0)*51
    0x5e8975a6e430 ---------A   01580  IF Z9<>1THEN1590
    0x5e8975a6eab0 ---------A   01582  R(I,3)=R(I,3)/1.5
    0x5e8975a6ee80 ---------A T 01590  Q(X1,X2)=6
    0x5e8975a6efb0 ---------A   01592  NEXT I
    0x5e8975a6f220 ---------A T 01600  IF N7=0 THEN 1640
    0x5e8975a6f520 ---------A   01610  FOR I=1 TO N7
    0x5e8975a6f5a0 ---------A   01620  GOSUB 2300
    0x5e8975a6f970 ---------A   01630  Q(X1,X2)=2
    0x5e8975a6faa0 ---------A   01632  NEXT I
    0x5e8975a6fd10 ---------A T 01640  IF N4=0 THEN 1670
    0x5e8975a6ff70 ---------A   01642  IF F9=1 THEN 1670
    0x5e8975a6fff0 ---------A   01650  GOSUB 2300
    0x5e8975a703c0 ---------A   01660  Q(X1,X2)=4
    0x5e8975a705f0 ---------A   01662  B9=X1
    0x5e8975a70840 ---------A   01663  B8=X2
    0x5e8975a70f10 ---------A T 01670  IF G(Q1,Q2)<>INT(G(Q1,Q2)) THEN 1700
    0x5e8975a70f90 ---------A   01680  GOSUB 2300
    0x5e8975a71360 ---------A   01690  Q(X1,X2)=7
    0x5e8975a715b0 ---------A T 01700  IF N5<>0 THEN 1710
    0x5e8975a71810 ---------A   01702  IF N6=0 THEN 1720
    0x5e8975a71890 ---------A T 01710  GOSUB 3400
    0x5e8975a71af0 ---------A T 01720  IF N4=0 THEN 1740
    0x5e8975a71d70 ---------A   01722  IF C$<>"ORBITING" THEN 1740
    0x5e8975a71f90 ---------A   01730  P=13
    0x5e8975a721a0 ---------A   01732  E2=300
    0x5e8975a72210 ---------A   01733  GOTO1790
    0x5e8975a72460 ---------A T 01740  IF N5<>0 THEN 1750
    0x5e8975a726c0 ---------A   01742  IF N6=0 THEN 1760
    0x5e8975a72900 ---------A T 01750  C$="RED"
    0x5e8975a72980 ---------A   01752  GOTO1790
    0x5e8975a72bf0 ---------A T 01760  IF E1>399 THEN 1780
    0x5e8975a72d70 ---------A   01762  PRINT"HYPERDRIVE COILS LOW.  ** YELLOW ALERT **"
    0x5e8975a72fb0 ---------A   01770  C$="YELLOW"
    0x5e8975a73020 ---------A   01772  GOTO1790
    0x5e8975a73250 ---------A T 01780  C$="GREEN"
    0x5e8975a734a0 ---------A T 01790  IF E1<1 THEN 3710
    0x5e8975a73530 ---------A T 01800  PRINT
    0x5e8975a73690 ---------A   01802  PRINT"==================="
    0x5e8975a73970 ---------A   01803  FOR I=1 TO 10
    0x5e8975a73c60 ---------A   01810  FOR J=1 TO 10
    0x5e8975a74180 ---------A   01812  PRINT Q$(Q(I,J));" ";
    0x5e8975a742c0 ---------A   01813  NEXT J
    0x5e8975a74480 ---------A   01814  PRINT"  ";
    0x5e8975a74d80 ---------A   01820  ON I GOTO 1830,1840,1850,1860,1870,1880,1890,1900,1910,1920
    0x5e8975a752e0 ---------A T 01830  PRINT"CENTARE          ";T;"(UNTIL";T0;")"
    0x5e8975a75370 ---------A   01832  GOTO 1930
    0x5e8975a755c0 ---------A T 01840  PRINT"CONDITION         ";C$
    0x5e8975a75650 ---------A   01842  GOTO 1930
    0x5e8975a75aa0 ---------A T 01850  PRINT"QUADRANT      ";Q1;"-";Q2
    0x5e8975a75b30 ---------A   01852  GOTO 1930
    0x5e8975a75f80 ---------A T 01860  PRINT"SECTOR        ";S1;"-";S2
    0x5e8975a76020 ---------A   01862  GOTO 1930
    0x5e8975a76370 ---------A T 01870  PRINT"HYPERDRIVE AT    ";E1;"-DEVICE #1"
    0x5e8975a76400 ---------A   01872  GOTO 1930
    0x5e8975a76650 ---------A T 01880  PRINT"STAR DRIVE AT    ";E2
    0x5e8975a766f0 ---------A   01882  GOTO 1930
    0x5e8975a76a40 ---------A T 01890  PRINT"VIPER RESERVES   ";E3;"-DEVICE #2"
    0x5e8975a76ae0 ---------A   01892  GOTO 1930
    0x5e8975a76e30 ---------A T 01900  PRINT"DEFENSE LASERS   ";E4;"-DEVICE #3"
    0x5e8975a76ec0 ---------A   01902  GOTO 1930
    0x5e8975a77110 ---------A T 01910  PRINT"MISSILES         ";P
    0x5e8975a771a0 ---------A   01912  GOTO 1930
    0x5e8975a773f0 ---------A T 01920  PRINT"CYLONS LEFT      ";N2
    0x5e8975a77530 ---------A T 01930  NEXT I
    0x5e8975a776b0 ---------A   01932  PRINT"==================="
    0x5e8975a77830 ---------A T 01940  PRINT "COMMAND ";
    0x5e8975a779a0 ---------A   01942  INPUT A$
    0x5e8975a77c20 ---------A   01943  IF A$="Q" THEN 3910
    0x5e8975a77f10 ---------A   01950  FOR I=1 TO 10
    0x5e8975a78270 ---------A   01952  IF A$=D$(I) THEN 1990
    0x5e8975a783b0 ---------A   01953  NEXT I
    0x5e8975a78690 ---------A   01960  IF A$<>"OBIWAN KENOBI" THEN 3290
    0x5e8975a78840 ---------A   01970  PRINT"YOU HAVE CALLED UPON THE LEGENDARY POWER OF THE FORCE FOR AID."
    0x5e8975a789b0 ---------A   01980  PRINT"THE FORCE WEAKENS YOUR ENEMIES !"
    0x5e8975a78bd0 ---------A   01982  Z9=1
    0x5e8975a78c70 ---------A   01983  GOTO1940
    0x5e8975a79540 ---------A T 01990  ON I GOTO 2000,2040,2450,2840,3930,2310,1800,3290,3140,3970
    0x5e8975a796c0 ---------A T 02000  PRINT"COURSE ";
    0x5e8975a798e0 ---------A   02003  INPUT C
    0x5e8975a649b0 ---------A   02004  IF C<1 THEN 1940
    0x5e8975a64c20 ---------A   02005  IF C>=9 THEN 1940
    0x5e8975a64db0 ---------A   02010  PRINT "HYPERDRIVE JUMP SPEED ";
    0x5e8975a64f30 ---------A   02013  INPUT W
    0x5e8975a7abd0 ---------A   02014  IF W<1 THEN 1940
    0x5e8975a7ae30 ---------A   02020  IF W>8 THEN 1940
    0x5e8975a7b320 ---------A   02023  X5=INT(W*8)
    0x5e8975a7b690 ---------A   02024  IF E1<=2*X5 THEN 2070
    0x5e8975a7baf0 ---------A   02025  E1=E1-2*X5
    0x5e8975a7bf20 ---------A   02030  T=T+SQR(W)
    0x5e8975a7c450 ---------A   02033  E1=E1+325*SQR(W)
    0x5e8975a7c4c0 ---------A   02034  GOTO 2090
    0x5e8975a7c630 ---------A T 02040  PRINT"COURSE ";
    0x5e8975a7c790 ---------A   02043  INPUT C
    0x5e8975a7c9f0 ---------A   02044  IF C<1 THEN 1940
    0x5e8975a7cc60 ---------A   02045  IF C>=9 THEN 1940
    0x5e8975a7cde0 ---------A   02050  PRINT"STAR SPEED ";
    0x5e8975a7cf40 ---------A   02053  INPUT W
    0x5e8975a7d280 ---------A   02054  W=W/10
    0x5e8975a7d4d0 ---------A   02055  IF W<.2 THEN 1940
    0x5e8975a7d730 ---------A   02060  IF W>.9 THEN 1940
    0x5e8975a7db60 ---------A   02063  X5=INT(W*8)
    0x5e8975a7def0 ---------A   02064  IF E2>=7.5*X5 THEN 2080
    0x5e8975a7e060 ---------A T 02070  PRINT"INSUFFICIENT POWER FOR MOVEMENT"
    0x5e8975a7e0e0 ---------A   02073  GOTO 1940
    0x5e8975a7e530 ---------A T 02080  E2=E2-7.5*X5
    0x5e8975a7ea60 ---------A   02083  E1=E1+350*SQR(W)
    0x5e8975a7ef90 ---------A   02084  T=T+SQR(W)/1.5
    0x5e8975a7f360 ---------A T 02090  Q(S1,S2)=1
    0x5e8975a7f590 ---------A   02093  C$="MOVING"
    0x5e8975a7f800 ---------A   02094  IF T>T0 THEN 3710
    0x5e8975a7fb00 ---------A   02095  X=S1
    0x5e8975a7fdf0 ---------A   02096  Y=S2
    0x5e8975a7fe60 ---------A   02100  GOSUB 2290
    0x5e8975a80150 ---------A   02110  FOR I=1TO X5
    0x5e8975a804b0 ---------A   02113  S1=S1+X1
    0x5e8975a80800 ---------A   02114  S2=S2+X2
    0x5e8975a80a60 ---------A   02115  IF S1<.5 THEN 2190
    0x5e8975a80cc0 ---------A   02120  IF S1>10.5 THEN 2190
    0x5e8975a80f30 ---------A   02123  IF S2<.5 THEN 2190
    0x5e8975a81190 ---------A   02124  IF S2>10.5 THEN 2190
    0x5e8975a81670 ---------A   02130  X6=INT(S1+.5)
    0x5e8975a81b50 ---------A   02133  X7=INT(S2+.5)
    0x5e8975a81f60 ---------A   02134  IF Q(X6,X7)<>7 THEN 2150
    0x5e8975a82010 ---------A   02135  PRINT
    0x5e8975a821a0 ---------A   02140  PRINT"** YOUR BATTLESTAR HAS BEEN ABSORBED BY A BLACK HOLE **"
    0x5e8975a82230 ---------A   02143  GOTO3710
    0x5e8975a82870 ---------A T 02150  IF INT(ABS(X6-B9)+.5)>1 THEN 2200
    0x5e8975a82ec0 ---------A   02153  IF INT(ABS(X7-B8)+.5)>1 THEN 2200
    0x5e8975a83040 ---------A   02160  PRINT"DO YOU WISH TO ORBIT";
    0x5e8975a831b0 ---------A   02163  INPUT A$
    0x5e8975a83440 ---------A   02164  IF A$="Y" THEN 2180
    0x5e8975a836c0 ---------A   02170  IF A$="YES" THEN 2180
    0x5e8975a83aa0 ---------A   02173  B8=B9=F9=-1
    0x5e8975a83b10 ---------A   02174  GOTO 2200
    0x5e8975a83d40 ---------A T 02180  C$="ORBITING"
    0x5e8975a83f70 ---------A   02183  S1=X6
    0x5e8975a841a0 ---------A   02184  S2=X7
    0x5e8975a843b0 ---------A   02185  F9=1
    0x5e8975a84420 ---------A   02186  GOTO 1410
    0x5e8975a847f0 ---------A T 02190  F9=B8=B9=-1
    0x5e8975a84920 ---------A T 02200  NEXT I
    0x5e8975a84d50 ---------A   02203  S1=INT(S1+.5)
    0x5e8975a85160 ---------A   02204  S2=INT(S2+.5)
    0x5e8975a853b0 ---------A T 02210  IF S1>0 THEN 2220
    0x5e8975a856f0 ---------A   02213  S1=S1+10
    0x5e8975a85a20 ---------A   02214  Q1=Q1-1
    0x5e8975a85a90 ---------A   02215  GOTO2210
    0x5e8975a85ce0 ---------A T 02220  IF S1<11 THEN 2230
    0x5e8975a86020 ---------A   02223  S1=S1-10
    0x5e8975a86350 ---------A   02224  Q1=Q1+1
    0x5e8975a863c0 ---------A   02225  GOTO2220
    0x5e8975a86610 ---------A T 02230  IF S2>0 THEN 2240
    0x5e8975a86950 ---------A   02233  S2=S2+10
    0x5e8975a86c80 ---------A   02234  Q2=Q2-1
    0x5e8975a86cf0 ---------A   02235  GOTO 2230
    0x5e8975a86f40 ---------A T 02240  IF S2<11 THEN 2250
    0x5e8975a87280 ---------A   02243  S2=S2-10
    0x5e8975a875b0 ---------A   02244  Q2=Q2+1
    0x5e8975a87620 ---------A   02245  GOTO2240
    0x5e8975a87870 ---------A T 02250  IF Q1>0 THEN 2260
    0x5e8975a87bb0 ---------A   02253  Q1=Q1+10
    0x5e8975a87e00 ---------A T 02260  IF Q1<11 THEN 2270
    0x5e8975a88140 ---------A   02263  Q1=Q1-10
    0x5e8975a88390 ---------A T 02270  IF Q2>0 THEN 2280
    0x5e8975a886d0 ---------A   02273  Q2=Q2+10
    0x5e8975a88920 ---------A T 02280  IF Q2<11 THEN 1410
    0x5e8975a88c60 ---------A   02283  Q2=Q2-10
    0x5e8975a88ce0 ---------A   02284  GOTO 1410
    0x5e8975a89240 ---------B G 02290  X1=-SIN((C-1)*.785398)
    0x5e8975a89790 ---------B   02293  X2=COS((C-1)*.785398)
    0x5e8975a897e0 ---------B   02294  RETURN
    0x5e8975a89ae0 ---------C B 02300  X1=FNR(-1)
    0x5e8975a89de0 ---------C   02303  X2=FNR(-1)
    0x5e8975a8a1f0 ---------C   02304  IF Q(X1,X2)<>1 THEN 2300
    0x5e8975a8a250 ---------C   02305  RETURN
    0x5e8975a8a8b0 ---------A T 02310  IF T-INT(T)>RND(0)/7 THEN 2330
    0x5e8975a8aa20 ---------A   02320  PRINT"NEBULA CLOUD PREVENTS SCAN"
    0x5e8975a8aaa0 ---------A   02323  GOTO 1940
    0x5e8975a8ab40 ---------A T 02330  PRINT
    0x5e8975a8afe0 ---------A   02333  PRINT"LONGE RANGE SENSOR SCAN FOR QUADRANT";Q1;"-";Q2
    0x5e8975a8b170 ---------A   02340  PRINT"     |--------|--------|--------|   POSITIONAL KEY (C P *)"
    0x5e8975a8b690 ---------A   02350  FOR I=Q1-1 TO Q1+1
    0x5e8975a8b8d0 ---------A   02353  X1=I
    0x5e8975a8bde0 ---------A   02354  FOR J=Q2-1 TO Q2+1
    0x5e8975a8c020 ---------A   02355  X2=J
    0x5e8975a8c270 ---------A   02360  IF X1>0 THEN 2370
    0x5e8975a8c5b0 ---------A   02363  X1=X1+10
    0x5e8975a8c800 ---------A T 02370  IF X1<11 THEN 2380
    0x5e8975a8cb40 ---------A   02373  X1=X1-10
    0x5e8975a8cd90 ---------A T 02380  IF X2>0 THEN 2390
    0x5e8975a8d0d0 ---------A   02383  X2=X2+10
    0x5e8975a8d320 ---------A T 02390  IF X2<11 THEN 2400
    0x5e8975a8d670 ---------A   02393  X2=X2-10
    0x5e8975a8dd10 ---------A T 02400  X3=INT(G(X1,X2)/1000)
    0x5e8975a8e7c0 ---------A   02403  N(J-Q2+2)=INT(G(X1,X2))-X3*1000
    0x5e8975a8eeb0 ---------A   02410  S(X1,X2)=N(J-Q2+2)
    0x5e8975a8efe0 ---------A   02413  NEXT J
    0x5e8975a8fca0 ---------A   02420  PRINT TAB(5);"  ";N(1);TAB(14);"  ";N(2);TAB(23);"  ";N(3);
    0x5e8975a8ff60 ---------A   02430  PRINT TAB(32);"  "
    0x5e8975a900d0 ---------A   02433  PRINT"     |--------|--------|--------|"
    0x5e8975a90210 ---------A   02440  NEXT I
    0x5e8975a902a0 ---------A   02443  GOTO 1940
    0x5e8975a904f0 ---------A T 02450  IF N5>0 THEN 2470
    0x5e8975a90780 ---------A   02453  IF N6>0 THEN 2470
    0x5e8975a90900 ---------A   02460  PRINT"YOU ARE HALLUCINATING; NOTHING IS OUT THERE !!!"
    0x5e8975a909a0 ---------A   02463  GOTO 1940
    0x5e8975a90c10 ---------A T 02470  PRINT "VIPERS STANDING BY. SQUADRON SIZE";E3
    0x5e8975a90da0 ---------A   02480  PRINT "HOW MANY UNITS TO LAUNCH ";
    0x5e8975a90f10 ---------A   02483  INPUT X1
    0x5e8975a911b0 ---------A   02490  IF E3>=X1 THEN 2510
    0x5e8975a91520 ---------A   02500  PRINT"I TOLD YOU THERE ARE ONLY";E3;"UNITS !!!"
    0x5e8975a915a0 ---------A   02503  GOTO 1940
    0x5e8975a91800 ---------A T 02510  IF X1<1 THEN 1940
    0x5e8975a91960 ---------A   02513  PRINT"VIPERS LAUNCHED"
    0x5e8975a91cc0 ---------A   02514  E3=E3-X1
    0x5e8975a91f10 ---------A   02515  IF N5=0 THEN2680
    0x5e8975a921f0 ---------A T 02520  X8=0
    0x5e8975a924c0 ---------A   02523  X9=100
    0x5e8975a927d0 ---------A   02524  FOR I=1 TO N5
    0x5e8975a92fa0 ---------A   02530  IF (FND(K(I,1),K(I,2)))>X9 THEN 2550
    0x5e8975a933a0 ---------A   02540  IF K(I,3)<=0 THEN 2550
    0x5e8975a935f0 ---------A   02543  X8=I
    0x5e8975a93d20 ---------A   02544  X9=FND(K(I,1),K(I,2))
    0x5e8975a93e50 ---------A T 02550  NEXT I
    0x5e8975a940c0 ---------A   02553  IF X8=0 THEN 2670
    0x5e8975a94310 ---------A   02554  I=X8
    0x5e8975a94a70 ---------A   02560  IF FND(K(I,1),K(I,2))>3 THEN 2640
    0x5e8975a94e90 ---------A   02570  IF X1<K(I,3) THEN 2620
    0x5e8975a953c0 ---------A   02573  X1=X1-K(I,3)
    0x5e8975a95c60 ---------A T 02580  PRINT"CYLON BASE-STAR AT SECTOR";K(I,1);"-";K(I,2);"DESTROYED"
    0x5e8975a95fa0 ---------A   02590  P4=P4+1
    0x5e8975a96350 ---------A   02593  K(I,3)=0
    0x5e8975a96a60 ---------A   02594  Q(K(I,1),K(I,2))=1
    0x5e8975a96d90 ---------A   02595  N2=N2-1
    0x5e8975a96ff0 ---------A   02600  IF N2=0 THEN 3820
    0x5e8975a976c0 ---------A   02603  G(Q1,Q2)=G(Q1,Q2)-100
    0x5e8975a97ae0 ---------A   02610  IF S(Q1,Q2)=0 THEN 2520
    0x5e8975a981a0 ---------A   02613  S(Q1,Q2)=S(Q1,Q2)-100
    0x5e8975a98240 ---------A   02614  GOTO 2520
    0x5e8975a98ae0 ---------A T 02620  PRINT X1;"CYLON FIGHTERS REMOVED AT SECTOR";K(I,1);"-";K(I,2)
    0x5e8975a99180 ---------A   02630  K(I,3)=K(I,3)-X1
    0x5e8975a99390 ---------A   02633  X1=0
    0x5e8975a99410 ---------A   02634  GOTO 2800
    0x5e8975a9a040 ---------A T 02640  X2=K(I,3)*(FND(K(I,1),K(I,2))/3)^2
    0x5e8975a9a2b0 ---------A   02650  IF X1<X2 THEN 2660
    0x5e8975a9a610 ---------A   02653  X1=X1-X2
    0x5e8975a9a690 ---------A   02654  GOTO 2580
    0x5e8975a9b120 ---------A T 02660  X1=X1/(FND(K(I,1),K(I,2))/3)^2
    0x5e8975a9b190 ---------A   02663  GOTO 2620
    0x5e8975a9b3e0 ---------A T 02670  IF X1=0 THEN 2800
    0x5e8975a9b640 ---------A T 02680  IF N6=0 THEN 2800
    0x5e8975a9b950 ---------A   02683  FOR I=1 TO N6
    0x5e8975a9bd60 ---------A   02684  IF R(I,3)<=0 THEN 2790
    0x5e8975a9c4d0 ---------A   02690  IF FND(R(I,1),R(I,2))>3 THEN 2760
    0x5e8975a9c8f0 ---------A   02700  IF X1<R(I,3) THEN 2740
    0x5e8975a9ce20 ---------A   02703  X1=X1-R(I,3)
    0x5e8975a9d6b0 ---------A T 02710  PRINT"E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2);"DESTROYED"
    0x5e8975a9d9f0 ---------A   02720  P4=P4+.5
    0x5e8975a9dda0 ---------A   02723  R(I,3)=0
    0x5e8975a9e4b0 ---------A   02724  Q(R(I,1),R(I,2))=1
    0x5e8975a9e7f0 ---------A   02725  N3=N3-1
    0x5e8975a9eea0 ---------A   02730  G(Q1,Q2)=G(Q1,Q2)-1000
    0x5e8975a9f1d0 ---------A   02733  N6=N6-1
    0x5e8975a9f270 ---------A   02734  GOTO 2800
    0x5e8975a9fb10 ---------A T 02740  PRINT X1;"UNITS HIT IN E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5e8975aa01b0 ---------A   02750  R(I,3)=R(I,3)-X1
    0x5e8975aa03c0 ---------A   02753  X1=0
    0x5e8975aa0440 ---------A   02754  GOTO 2800
    0x5e8975aa1070 ---------A T 02760  X2=R(I,3)*(FND(R(I,1),R(I,2))/3)^2
    0x5e8975aa12e0 ---------A   02770  IF X1<X2 THEN 2780
    0x5e8975aa1640 ---------A   02773  X1=X1-X2
    0x5e8975aa16c0 ---------A   02774  GOTO 2710
    0x5e8975aa2150 ---------A T 02780  X1=X1/(FND(R(I,1),R(I,2))/3)^2
    0x5e8975aa21c0 ---------A   02783  GOTO 2740
    0x5e8975aa22f0 ---------A T 02790  NEXT I
    0x5e8975aa2590 ---------A T 02800  IF X1<10 THEN 2820
    0x5e8975aa2900 ---------A   02810  PRINT"COMPUTER REPORTS";X1;"VIPERS EXPLODED IN LAUNCH TUBES"
    0x5e8975aa2980 ---------A T 02820  GOSUB 3400
    0x5e8975aa29f0 ---------A   02830  GOTO 1940
    0x5e8975aa2c50 ---------A T 02840  IF P>0 THEN 2850
    0x5e8975aa2db0 ---------A   02843  PRINT"MISSILES EXPENDED"
    0x5e8975aa2e30 ---------A   02844  GOTO 1940
    0x5e8975aa2fa0 ---------A T 02850  PRINT"COURSE ";
    0x5e8975aa3100 ---------A   02853  INPUT C
    0x5e8975aa3360 ---------A   02854  IF C<1 THEN 1940
    0x5e8975aa35c0 ---------A   02855  IF C>=9 THEN 1940
    0x5e8975aa3640 ---------A   02860  GOSUB 2290
    0x5e8975aa3870 ---------A   02870  X=S1
    0x5e8975aa3ab0 ---------A   02873  Y=S2
    0x5e8975aa3d20 ---------A   02874  IF C$="ORBITING" THEN 2880
    0x5e8975aa4070 ---------A   02875  P=P-1
    0x5e8975aa41d0 ---------A T 02880  PRINT"MISSILE AWAY, TRACKING:"
    0x5e8975aa4530 ---------A T 02890  X=X+X1
    0x5e8975aa4880 ---------A   02893  Y=Y+X2
    0x5e8975aa4ae0 ---------A   02894  IF X<.5 THEN 3130
    0x5e8975aa4d40 ---------A   02900  IF X>10.5 THEN 3130
    0x5e8975aa4fb0 ---------A   02903  IF Y<.5 THEN 3130
    0x5e8975aa5230 ---------A   02904  IF Y>10.5 THEN 3130
    0x5e8975aa5b50 ---------A   02910  PRINT INT(X*100)/100;"-";INT(Y*100)/100
    0x5e8975aa5f70 ---------A   02913  X3=INT(X+.5)
    0x5e8975aa6470 ---------A   02914  X4=INT(Y+.5)
    0x5e8975aa6ce0 ---------A   02920  ON Q(X3,X4) GOTO 2890,2940,2890,3020,2960,3060,2930
    0x5e8975aa6e50 ---------A T 02930  PRINT"MISSILE ABSORBED BY BLACK HOLE"
    0x5e8975aa6f00 ---------A   02933  GOTO 3130
    0x5e8975aa7070 ---------A T 02940  PRINT"MISSILE ABSORBED BY STAR - DISRUPTION SLIGHT"
    0x5e8975aa7590 ---------A   02950  P4=P4-RND(-1)*2
    0x5e8975aa7630 ---------A   02953  GOTO 3110
    0x5e8975aa7b90 ---------A T 02960  PRINT"CYLON BASE-STAR AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5e8975aa7ed0 ---------A   02970  P4=P4+1
    0x5e8975aa81d0 ---------A   02973  FOR I=1 TO N5
    0x5e8975aa8600 ---------A   02974  IF K(I,1)<>X3 THEN 3010
    0x5e8975aa8a20 ---------A   02980  IF K(I,2)<>X4 THEN 3010
    0x5e8975aa8df0 ---------A   02983  K(I,3)=0
    0x5e8975aa94b0 ---------A   02984  G(Q1,Q2)=G(Q1,Q2)-100
    0x5e8975aa98d0 ---------A   02990  IF S(Q1,Q2)=0 THEN 3000
    0x5e8975aa9f90 ---------A   02993  S(Q1,Q2)=S(Q1,Q2)-100
    0x5e8975aaa2c0 ---------A T 03000  N2=N2-1
    0x5e8975aaa510 ---------A   03004  IF N2=0 THEN 3820
    0x5e8975aaa590 ---------A   03005  GOTO 3100
    0x5e8975aaa6c0 ---------A T 03010  NEXT I
    0x5e8975aaa770 ---------A   03014  GOTO 3130
    0x5e8975aaa8d0 ---------A T 03020  PRINT "COMMANDER, WHAT HAVE YOU DONE ??!!"
    0x5e8975aaac40 ---------A   03024  P4=P4-30
    0x5e8975aab1a0 ---------A   03030  PRINT"*** TERRAN PLANET AT SECTOR";X3;"-";X4;"DESTROYED ***"
    0x5e8975aab250 ---------A   03040  PRINT
    0x5e8975aab3e0 ---------A   03044  PRINT"ENERGY BOLT APPROACHING FROM DIRECTION OF FORMER PLANET!"
    0x5e8975aab480 ---------A   03050  PRINT
    0x5e8975aab600 ---------A   03054  PRINT"                     **** ZZZZAAP  ****"
    0x5e8975aab680 ---------A   03055  PRINT
    0x5e8975aab720 ---------A   03056  GOTO3710
    0x5e8975aabc70 ---------A T 03060  PRINT"E.A.FLEET AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5e8975aabfb0 ---------A   03070  P4=P4+.5
    0x5e8975aac2b0 ---------A   03074  FOR I=1 TO N6
    0x5e8975aac6e0 ---------A   03075  IF R(I,1)<>X3 THEN3090
    0x5e8975aacb00 ---------A   03076  IF R(I,2)<>X4 THEN3090
    0x5e8975a79cb0 ---------A   03080  R(I,3)=0
    0x5e8975a7a360 ---------A   03084  G(Q1,Q2)=G(Q1,Q2)-1000
    0x5e8975a7a690 ---------A   03085  N3=N3-1
    0x5e8975a7a700 ---------A   03086  GOTO 3100
    0x5e8975a7a830 ---------A T 03090  NEXT I
    0x5e8975aaee50 ---------A T 03100  Q(X3,X4)=1
    0x5e8975aaeec0 ---------A T 03110  GOSUB 3400
    0x5e8975aaef40 ---------A   03120  GOTO 1940
    0x5e8975aaf090 ---------A T 03130  PRINT"MISSILE MISSED TARGET"
    0x5e8975aaf130 ---------A   03134  GOTO 3110
    0x5e8975aaf2b0 ---------A T 03140  PRINT"TRANSFER ENERGY FROM DEVICE # ";
    0x5e8975aaf410 ---------A   03144  INPUT X1
    0x5e8975aaf690 ---------A   03150  IF X1=0 THEN 1940
    0x5e8975aaf820 ---------A   03160  PRINT".... AND ALLOCATE TO DEVICE # ";
    0x5e8975aaf980 ---------A   03164  INPUT X2
    0x5e8975aafbe0 ---------A   03170  IF X2=0 THEN 1940
    0x5e8975aafe70 ---------A   03174  IF X2>X1 THEN 3190
    0x5e8975aaffe0 ---------A T 03180  PRINT"IMPOSSIBLE, COMMANDER !"
    0x5e8975ab0060 ---------A   03184  GOTO 1940
    0x5e8975ab02c0 ---------A T 03190  IF X2>3 THEN 3180
    0x5e8975ab0450 ---------A   03194  PRINT"# OF UNITS TO TRANSFER ";
    0x5e8975ab05c0 ---------A   03195  INPUT X3
    0x5e8975ab08a0 ---------A   03200  ON X1 GOTO 3210,3240
    0x5e8975ab0b40 ---------A T 03210  IF E1>X3 THEN 3230
    0x5e8975ab0cb0 ---------A T 03220  PRINT"INSUFFICIENT POWER AVAILABLE"
    0x5e8975ab0d30 ---------A   03224  GOTO 1940
    0x5e8975ab1080 ---------A T 03230  E1=E1-X3
    0x5e8975ab10f0 ---------A   03234  GOTO 3250
    0x5e8975ab1360 ---------A T 03240  IF X3>E3 THEN 3220
    0x5e8975ab16d0 ---------A   03244  E3=E3+X3
    0x5e8975ab1aa0 ---------A T 03250  ON X2-1 GOTO 3260,3270
    0x5e8975ab1e00 ---------A T 03260  E3=E3+X3
    0x5e8975ab1e70 ---------A   03264  GOTO 3280
    0x5e8975ab21c0 ---------A T 03270  E4=E4+X3
    0x5e8975ab2520 ---------A   03274  Q8=Q8+X3
    0x5e8975ab2670 ---------A T 03280  PRINT"TRANSFER COMPLETE"
    0x5e8975ab2720 ---------A   03284  GOTO 1940
    0x5e8975ab2ac0 ---------A T 03290  PRINT" H -- HYPERDRIVE JUMP";TAB(37);"COURSE GUIDE"
    0x5e8975ab2c60 ---------A   03300  PRINT" SS - STAR-SPEED MANEUVER"
    0x5e8975ab3030 ---------A   03310  PRINT" L -- LONG RANGE SENSOR SCAN";TAB(40);"4  3  2"
    0x5e8975ab3400 ---------A   03320  PRINT" S -- SHORT RANGE SENSOR SCAN";TAB(42);"\|/"
    0x5e8975ab37c0 ---------A   03330  PRINT" V -- LAUNCH VIPERS";TAB(40);"5 -*- 1"
    0x5e8975ab3b90 ---------A   03340  PRINT" M -- FIRE MISSILE";TAB(42);"/|\"
    0x5e8975ab3f50 ---------A   03350  PRINT" A -- ALLOCATE ENERGY UNITS";TAB(40);"6  7  8"
    0x5e8975ab40d0 ---------A   03360  PRINT" G -- GENERATE POWER"
    0x5e8975ab4260 ---------A   03370  PRINT" R -- RECALL LONG RANGE SENSOR INFORMATION"
    0x5e8975ab43f0 ---------A   03380  PRINT" C -- THIS LIST OF COMMANDS"
    0x5e8975ab4560 ---------A   03390  PRINT" Q -- QUIT GAME(ABNORMAL ENDING)"
    0x5e8975ab45f0 ---------A   03394  GOTO 1940
    0x5e8975ab4880 ---------D G 03400  IF C$<>"ORBITING" THEN 3420
    0x5e8975ab4a00 ---------D   03410  PRINT"PLANETARY DEFENSES PROTECT YOUR BATTLESTAR"
    0x5e8975ab4a60 ---------D   03414  RETURN
    0x5e8975ab4cd0 ---------D T 03420  IF Z9=0THEN3430
    0x5e8975ab4e40 ---------D   03424  PRINT"THE FORCE IS WITH YOU !"
    0x5e8975ab5080 ---------D T 03430  C$="GREEN"
    0x5e8975ab5350 ---------D   03434  Q9=0
    0x5e8975ab55a0 ---------D   03435  IF N5=0 THEN 3550
    0x5e8975ab58b0 ---------D   03436  FOR I=1 TO N5
    0x5e8975ab5cb0 ---------D   03440  IF K(I,3)=0 THEN 3540
    0x5e8975ab5f00 ---------D   03444  C$="RED"
    0x5e8975ab6650 ---------D   03450  IF FND(K(I,1),K(I,2))>3 THEN 3520
    0x5e8975ab6b50 ---------D   03454  E4=E4-K(I,3)
    0x5e8975ab7070 ---------D   03455  Q9=Q9+K(I,3)
    0x5e8975ab7940 ---------D   03460  PRINT K(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975ab80e0 ---------D T 03470  PRINT"FROM CYLON AT SECTOR";K(I,1);"-";K(I,2)
    0x5e8975ab8340 ---------D   03474  IF E4>0THEN3490
    0x5e8975ab83d0 ---------D   03480  GOSUB 3740
    0x5e8975ab8630 ---------D T 03490  IF E4>400 THEN 3510
    0x5e8975ab87a0 ---------D   03500  PRINT"LASER CANNONS FAILING !"
    0x5e8975ab8830 ---------D T 03510  GOTO 3540
    0x5e8975ab9460 ---------D T 03520  X1=K(I,3)/(FND(K(I,1),K(I,2))/3)^2
    0x5e8975ab97b0 ---------D   03524  E4=E4-X1
    0x5e8975ab9b20 ---------D   03525  Q9=Q9+X1
    0x5e8975aba230 ---------D   03530  PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975aba2b0 ---------D   03534  GOTO 3470
    0x5e8975aba3e0 ---------D T 03540  NEXT I
    0x5e8975aba650 ---------D T 03550  IF N6=0 THEN 3660
    0x5e8975aba960 ---------D   03554  FOR I=1 TO N6
    0x5e8975abad60 ---------D   03555  IF R(I,3)=0THEN3650
    0x5e8975abafb0 ---------D   03556  C$="RED"
    0x5e8975abb700 ---------D   03560  IF FND(R(I,1),R(I,2))>3 THEN 3630
    0x5e8975abbc00 ---------D   03564  E4=E4-R(I,3)
    0x5e8975abc120 ---------D   03565  Q9=Q9+R(I,3)
    0x5e8975abc9f0 ---------D   03570  PRINT R(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975abd1a0 ---------D T 03580  PRINT"FROM E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5e8975abd400 ---------D   03590  IF E4>0 THEN 3600
    0x5e8975abd490 ---------D   03594  GOSUB 3740
    0x5e8975abd6f0 ---------D T 03600  IF E4>400 THEN 3620
    0x5e8975abd860 ---------D   03610  PRINT"LASER CANNONS FAILING !"
    0x5e8975abd8f0 ---------D T 03620  GOTO 3650
    0x5e8975abe520 ---------D T 03630  X1=R(I,3)/(FND(R(I,1),R(I,2))/3)^2
    0x5e8975abe870 ---------D   03634  E4=E4-X1
    0x5e8975abebe0 ---------D   03635  Q9=Q9+X1
    0x5e8975abf2f0 ---------D   03640  PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975abf370 ---------D   03644  GOTO 3580
    0x5e8975abf4a0 ---------D T 03650  NEXT I
    0x5e8975abf730 ---------D T 03660  IF E1<=0THEN3710
    0x5e8975abfd90 ---------D   03664  PRINT ((Q8-E4)/Q8)*100;"PERCENT DAMAGE.";
    0x5e8975ac0100 ---------D   03670  PRINT"          LASERS FIRING AT";E4;"."
    0x5e8975ac03b0 ---------D   03680  IF Q9<E4 THEN 3700
    0x5e8975ac0530 ---------D   03690  PRINT"COMMANDER, WE CANNOT WITHSTAND ANOTHER ATTACK !!"
    0x5e8975ac0590 ---------D T 03700  RETURN
    0x5e8975ac0750 -------EDA T 03710  PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5e8975ac0bc0 -------EDA   03720  PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5e8975ac0c60 -------EDA   03730  GOTO 3920
    0x5e8975ac0dc0 ---------E G 03740  PRINT"DRAWING ENERGY FOR LASER CANNONS"
    0x5e8975ac1230 ---------E   03744  Q8=Q8-E4+1
    0x5e8975ac16c0 ---------E   03750  IF -E4*1.5+1>E3 THEN 3780
    0x5e8975ac1830 ---------E   03760  PRINT".....TAPPING VIPER FUEL RESERVES"
    0x5e8975ac1d90 ---------E   03770  E3=E3-1+E4*1.25
    0x5e8975ac1fa0 ---------E   03774  E4=1
    0x5e8975ac1ff0 ---------E   03775  RETURN
    0x5e8975ac25b0 ---------E T 03780  IF -E4*1.5+1>E1+E3 THEN 3710
    0x5e8975ac2740 ---------E   03790  PRINT"....> VIPER FUEL EXHAUSTED"
    0x5e8975ac28b0 ---------E   03800  PRINT".......TAPPING HYPERDRIVE COILS"
    0x5e8975ac2c10 ---------E   03810  E4=E4+E3
    0x5e8975ac2e20 ---------E   03814  E3=0
    0x5e8975ac3370 ---------E   03815  E1=E1-1+E4*1.66
    0x5e8975ac3580 ---------E   03816  E4=1
    0x5e8975ac35d0 ---------E   03817  RETURN
    0x5e8975ac3b90 ---------A T 03820  P4=P4-(T-T9)/2
    0x5e8975ac3de0 ---------A   03824  IF P4>10THEN3870
    0x5e8975ac3e90 ---------A   03825  PRINT
    0x5e8975ac4040 ---------A   03830  PRINT"EVEN THOUGH THE CYLONS HAVE BEEN DESTROYED, AND THE"
    0x5e8975ac41e0 ---------A   03840  PRINT"EASTERN ALLIANCE HAS FLED, YOU HAVE BEEN TOO DAMAGING"
    0x5e8975ac4360 ---------A   03850  PRINT"TO TERRAN CIVILIZATIONS TO WIN."
    0x5e8975ac44d0 ---------A   03860  PRINT"..... CALL IT A DRAW ....."
    0x5e8975ac4550 ---------A   03864  GOTO3920
    0x5e8975ac45d0 ---------A T 03870  PRINT
    0x5e8975ac4770 ---------A   03874  PRINT"CONGRATULATIONS, COMMANDER."
    0x5e8975ac4920 ---------A   03880  PRINT"THE CYLONS HAVE BEEN DESTROYED, AND THE EASTERN"
    0x5e8975ac4ab0 ---------A   03890  PRINT"ALLIANCE HAS FLED, MAKING THIS A GREAT VICTORY"
    0x5e8975ac4c20 ---------A   03900  PRINT"FOR THE TERRAN EMPIRE."
    0x5e8975ac4cc0 ---------A T 03910  PRINT
    0x5e8975ac4e30 ---------A   03914  PRINT"A RATING GREATER THAN 10 IS GOOD!"
    0x5e8975ac5400 ---------A   03915  P4=P4-(T-T9)/2
    0x5e8975ac5650 -------EDA T 03920  PRINT"=RATING= ";P4
    0x5e8975ac56e0 -------EDA   03924  PRINT
    0x5e8975ac5840 -------EDA   03925  PRINT"PLEASE TYPE* DONE"
    0x5e8975ac58a0 -------EDA   03926  STOP
    0x5e8975ac5b40 ---------A T 03930  IF C$="GREEN" THEN3940
    0x5e8975ac5dc0 ---------A   03934  IF C$="YELLOW" THEN3940
    0x5e8975ac5e40 ---------A   03935  GOTO3960
    0x5e8975ac6170 ---------A T 03940  E1=E1+500
    0x5e8975ac64a0 ---------A   03944  T=T+.5
    0x5e8975ac6720 ---------A   03945  IF T>T0 THEN3710
    0x5e8975ac6880 ---------A   03950  PRINT"POWER GENERATED"
    0x5e8975ac6910 ---------A   03954  GOTO1940
    0x5e8975ac6a70 ---------A T 03960  PRINT"IMPOSSIBLE UNDER RED ALERT"
    0x5e8975ac6af0 ---------A   03964  GOTO1940
    0x5e8975ac6b60 ---------A T 03970  PRINT
    0x5e8975ac6e40 ---------A   03974  FOR X6=1TO10
    0x5e8975ac7130 ---------A   03975  FOR X7=1TO10
    0x5e8975ac76d0 ---------A   03976  PRINT S(X6,X7);TAB(X7*5);
    0x5e8975ac7810 ---------A   03980  NEXT X7
    0x5e8975ac78a0 ---------A   03984  PRINT
    0x5e8975ac79e0 ---------A   03985  NEXT X6
    0x5e8975ac7a70 ---------A   03986  GOTO1940
    0x5e8975ac7ac0 ---------A   03990  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/btlstr.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e8975a4bdb0 ---------A   01000  REM Game of BattleStar
    0x5e8975a4ab80 ---------A   01010  REM 
    0x5e8975a4bf30 ---------A   01020  REM Variable List
    0x5e8975a4be70 ---------A   01030  REM     A$			- 
    0x5e8975a4bff0 ---------A   01040  REM     B8			- 
    0x5e8975a4afc0 ---------A   01050  REM     B9			- 
    0x5e8975a4a2d0 ---------A   01060  REM     C			- 
    0x5e8975a4a910 ---------A   01070  REM     C$			- Alert Condition
    0x5e8975a3a2b0 ---------A   01080  REM     D$[11]		- 
    0x5e8975a4c0b0 ---------A   01090  REM     E1			- Hyperdrive Coil Energy
    0x5e8975a499e0 ---------A   01100  REM     E2			- Star Drive Energy
    0x5e8975a497f0 ---------A   01110  REM     E3			- Viper Reserve Energy
    0x5e8975a4baa0 ---------A   01120  REM     E4			- Defence Laser Energy
    0x5e8975a4a040 ---------A   01130  REM     F9			- 
    0x5e8975a4a0b0 ---------A   01140  REM     G[11][11]	- 
    0x5e8975a49e40 ---------A   01150  REM     I			- 
    0x5e8975a4a480 ---------A T 01160  REM     J			- 
    0x5e8975a4a510 ---------A T 01170  REM     K[6][4]	- 
    0x5e8975a4b6a0 ---------A T 01180  REM     N[10]		- 
    0x5e8975a4b710 ---------A T 01190  REM     N1			- 
    0x5e8975a49be0 ---------A T 01200  REM     N2			- Cylons left.
    0x5e8975a49c70 ---------A T 01210  REM     N3			- 
    0x5e8975a4c100 ---------A T 01220  REM     N4			- 
    0x5e8975a4c190 ---------A   01230  REM     N5			- 
    0x5e8975a4c220 ---------A T 01240  REM     N6			- 
    0x5e8975a4a640 ---------A T 01250  REM     N7			- 
    0x5e8975a4a6f0 ---------A T 01260  REM     P			- Number of missles
    0x5e8975a4a780 ---------A   01270  REM     P4			- 
    0x5e8975a4a820 ---------A T 01280  REM     Q[11][11]	- 
    0x5e8975a518a0 ---------A   01290  REM     Q$[8]		- 
    0x5e8975a51920 ---------A T 01300  REM     Q1			- Quadrant Indice
    0x5e8975a519d0 ---------A   01310  REM     Q2			- Quadrant Indice
    0x5e8975a51a60 ---------A   01320  REM     Q8			- 
    0x5e8975a51d00 ---------A   01330  REM     Q9			- 
    0x5e8975a51d90 ---------A T 01340  REM     R[3][4]	- 
    0x5e8975a51e30 ---------A T 01350  REM     S[11][11]	- 
    0x5e8975a51ee0 ---------A   01360  REM     S1			- Sector Indice
    0x5e8975a51f90 ---------A   01370  REM     S2			- Sector Indice
    0x5e8975a52040 ---------A   01380  REM     T			- Game time in Centare
    0x5e8975a520f0 ---------A   01390  REM     T0			- End time for game. 
    0x5e8975a52180 ---------A   01400  REM     T9			- 
    0x5e8975a52210 ---------A T 01410  REM     W			- 
    0x5e8975a522a0 ---------A   01420  REM     X			- 
    0x5e8975a52330 ---------A   01430  REM     X1			- 
    0x5e8975a523c0 ---------A   01440  REM     X2			- 
    0x5e8975a52450 ---------A   01450  REM     X3			- 
    0x5e8975a524e0 ---------A   01460  REM     X4			- 
    0x5e8975a52570 ---------A T 01470  REM     X5			- 
    0x5e8975a52600 ---------A   01480  REM     X6			- 
    0x5e8975a52690 ---------A   01490  REM     X7			- 
    0x5e8975a52720 ---------A T 01500  REM     X8			- 
    0x5e8975a527b0 ---------A   01510  REM     X9			- 
    0x5e8975a52840 ---------A   01520  REM     Y			- 
    0x5e8975a528d0 ---------A   01530  REM     Z9			- 
    0x5e8975a537f0 ---------A T 01540  DIM Q(10,10),G(10,10),K(5,3),R(2,3),Q$(7),S(10,10)
    0x5e8975a496d0 ---------A T 01550  PRINT"WELCOME TO ** BATTLESTAR **          (BY RWMELHUISH)"
    0x5e8975a49670 ---------A   01560  PRINT
    0x5e8975a539a0 ---------A   01570  PRINT
    0x5e8975a53d40 ---------A   01580  FOR I=1 TO 7
    0x5e8975a53f80 ---------A T 01590  READ Q$(I)
    0x5e8975a540b0 ---------A T 01600  NEXT I
    0x5e8975a54770 ---------A   01610  DATA ".","*",B,P,C,E,O
    0x5e8975a54a40 ---------A   01620  DIM D$(10)
    0x5e8975a54d10 ---------A   01630  FOR I=1 TO 10
    0x5e8975a54f50 ---------A T 01640  READ D$(I)
    0x5e8975a55490 ---------A   01650  NEXT I
    0x5e8975a55e10 ---------A   01660  DATA H,SS,V,M,G,L,S,C,A,R
    0x5e8975a56860 ---------A T 01670  T0=INT(RND(-1)*20000)/10+INT(RND(-1)*5000)
    0x5e8975a56b50 ---------A   01680  Z9=0
    0x5e8975a579d0 ---------A   01690  DEF FND(X1,X2)=SQR((S1-X1)^2+(S2-X2)^2)
    0x5e8975a58170 ---------A T 01700  DEF FNR(X1)=INT(RND(X1)*10)+1
    0x5e8975a58c00 ---------A T 01710  T=T9=T0-(60-3*ABS(FNR(-1)-5))
    0x5e8975a58ed0 ---------A T 01720  E1=1250
    0x5e8975a591a0 ---------A   01730  E2=300
    0x5e8975a59470 ---------A T 01740  E3=2000
    0x5e8975a598e0 ---------A T 01750  Q8=E4=1250
    0x5e8975a59bb0 ---------A T 01760  P=13
    0x5e8975a5a020 ---------A   01770  B8=B9=-1
    0x5e8975a5a2f0 ---------A T 01780  MAT G=ZER
    0x5e8975a5a6b0 ---------A T 01790  Q1=FNR(-1)
    0x5e8975a5aa60 ---------A T 01800  Q2=FNR(-1)
    0x5e8975a5ad50 ---------A   01810  S1=FNR(-1)
    0x5e8975a5b040 ---------A   01820  S2=FNR(-1)
    0x5e8975a5b990 ---------A T 01830  N1=N2=N3=F9=P4=0
    0x5e8975a5bc60 ---------A T 01840  FOR I=1 TO 10
    0x5e8975a5c000 ---------A T 01850  FOR J=1 TO 10
    0x5e8975a5c400 ---------A T 01860  X1=RND(-1)*50
    0x5e8975a5ca20 ---------A T 01870  N4=N5=N6=0
    0x5e8975a5cc70 ---------A T 01880  IF X1>.08 THEN 1900
    0x5e8975a5cfc0 ---------A T 01890  N5=N5+1
    0x5e8975a5d210 ---------A T 01900  IF X1>.28 THEN 1920
    0x5e8975a5d560 ---------A T 01910  N5=N5+1
    0x5e8975a5d7b0 ---------A T 01920  IF X1>1.28 THEN 1940
    0x5e8975a5db00 ---------A T 01930  N5=N5+1
    0x5e8975a5dd50 ---------A T 01940  IF X1>3.28 THEN 1960
    0x5e8975a5e0a0 ---------A   01950  N5=N5+1
    0x5e8975a5e2f0 ---------A   01960  IF X1>13.28 THEN 1980
    0x5e8975a5e630 ---------A   01970  N5=N5+1
    0x5e8975a5e880 ---------A   01980  IF N2<36 THEN 2000
    0x5e8975a5eaa0 ---------A T 01990  N5=0
    0x5e8975a5edf0 ---------A T 02000  N2=N2+N5
    0x5e8975a5f050 ---------A   02010  IF N1>2 THEN 2040
    0x5e8975a5f370 ---------A   02020  IF RND(-1)<.97 THEN 2040
    0x5e8975a5f590 ---------A   02030  N4=1
    0x5e8975a5fb20 ---------A T 02040  N7=ABS(FNR(-1)-1)
    0x5e8975a5fe70 ---------A   02050  N1=N1+N4
    0x5e8975a600c0 ---------A   02060  IF N5>3 THEN 2130
    0x5e8975a604d0 ---------A T 02070  X1=RND(-1)*40
    0x5e8975a60720 ---------A T 02080  IF X1>4.25 THEN 2100
    0x5e8975a60a70 ---------A T 02090  N6=N6+1
    0x5e8975a60cc0 ---------A   02100  IF X1>16.25 THEN 2120
    0x5e8975a61000 ---------A   02110  N6=N6+1
    0x5e8975a61360 ---------A   02120  N3=N3+N6
    0x5e8975a61dc0 ---------A   02130  G(I,J)=N6*1000+N5*100+N4*10+N7
    0x5e8975a620d0 ---------A   02140  IF RND(-1)>.45 THEN 2160
    0x5e8975a62790 ---------A T 02150  G(I,J)=G(I,J)+.1
    0x5e8975a628c0 ---------A   02160  NEXT J
    0x5e8975a62a10 ---------A   02170  NEXT I
    0x5e8975a62c80 ---------A T 02180  IF N1>0 THEN 2230
    0x5e8975a62f80 ---------A T 02190  I=FNR(-1)
    0x5e8975a63270 ---------A T 02200  J=FNR(-1)
    0x5e8975a63920 ---------A T 02210  G(I,J)=G(I,J)+10
    0x5e8975a63b30 ---------A T 02220  N1=1
    0x5e8975a63bc0 ---------A T 02230  PRINT
    0x5e8975a63e60 ---------A T 02240  PRINT N2;"CYLONS HAVE PENETRATED TERRAN SPACE."
    0x5e8975a63ff0 ---------A T 02250  PRINT ".....THEY ARE ASSISTED BY THE EASTERN ALLIANCE."
    0x5e8975a64370 ---------A T 02260  PRINT "ONLY";N1;"TERRAN PLANET";
    0x5e8975a645d0 ---------A T 02270  IF N1<2 THEN 2300
    0x5e8975a64750 ---------A T 02280  PRINT "S HAVE";
    0x5e8975a64fe0 ---------A G 02290  GOTO 2310
    0x5e8975a65170 ---------A B 02300  PRINT" HAS";
    0x5e8975a65310 ---------A T 02310  PRINT" SURVIVED THE INITIAL ASSAULT."
    0x5e8975a656a0 ---------A   02320  PRINT"YOU HAVE UNTIL CENTARE";T0;"TO DEFEAT THE CYLONS"
    0x5e8975a65810 ---------A T 02330  PRINT"AND DRIVE AWAY THE EASTERN ALLIANCE."
    0x5e8975a658a0 ---------A   02340  PRINT
    0x5e8975a65a20 ---------A   02350  PRINT".....REMEMBER :"
    0x5e8975a65ba0 ---------A   02360  PRINT".....DO NOT RUN INTO ANY BLACK HOLES....."
    0x5e8975a65c20 ---------A T 02370  PRINT
    0x5e8975a65ca0 ---------A T 02380  PRINT
    0x5e8975a65fb0 ---------A T 02390  C$="WHO CARES"
    0x5e8975a66120 ---------A T 02400  PRINT" CONTINUE(C)";
    0x5e8975a66350 ---------A   02410  INPUT A$
    0x5e8975a665d0 ---------A   02420  IF A$<>"C" THEN 2400
    0x5e8975a66840 ---------A   02430  IF N2=0 THEN 7330
    0x5e8975a66f10 ---------A   02440  N6=INT(INT(G(Q1,Q2))/1000)
    0x5e8975a67800 ---------A T 02450  N5=INT(INT(G(Q1,Q2))/100)-N6*10
    0x5e8975a68310 ---------A   02460  N4=INT(INT(G(Q1,Q2))/10)-N6*100-N5*10
    0x5e8975a68e40 ---------A T 02470  N7=INT(G(Q1,Q2))-N6*1000-N5*100-N4*10
    0x5e8975a69110 ---------A   02480  MAT Q=CON
    0x5e8975a694f0 ---------A   02490  Q(S1,S2)=3
    0x5e8975a69740 ---------A   02500  IF F9<>1 THEN 2520
    0x5e8975a69b20 ---------A T 02510  Q(B9,B8)=4
    0x5e8975a69d70 ---------A T 02520  IF N5=0 THEN 2710
    0x5e8975a69df0 ---------A   02530  PRINT
    0x5e8975a69e90 ---------A   02540  PRINT
    0x5e8975a6a010 ---------A T 02550  PRINT"COMPUTER LASERS ACTIVATING  ** RED ALERT **"
    0x5e8975a6a0a0 ---------A   02560  PRINT
    0x5e8975a6a420 ---------A   02570  PRINT"SCANNERS SHOW";N5;"CYLON";
    0x5e8975a6a680 ---------A T 02580  IF N5<2 THEN 2600
    0x5e8975a6a800 ---------A   02590  PRINT"S";
    0x5e8975a6a960 ---------A   02600  PRINT"."
    0x5e8975a6ac60 ---------A   02610  FOR I=1 TO N5
    0x5e8975a6ace0 ---------A T 02620  GOSUB 4490
    0x5e8975a6b0b0 ---------A   02630  K(I,1)=X1
    0x5e8975a6b480 ---------A T 02640  K(I,2)=X2
    0x5e8975a6b6e0 ---------A   02650  IF F9=1 THEN 2690
    0x5e8975a6bd80 ---------A T 02660  K(I,3)=175+RND(0)*51
    0x5e8975a6bfd0 ---------A T 02670  IF Z9<>1THEN2690
    0x5e8975a6c650 ---------A T 02680  K(I,3)=K(I,3)/2
    0x5e8975a6ca20 ---------A   02690  Q(X1,X2)=5
    0x5e8975a6cb50 ---------A   02700  NEXT I
    0x5e8975a6cdc0 ---------A T 02710  IF N6=0 THEN 2820
    0x5e8975a6d0c0 ---------A   02720  FOR I=1 TO N6
    0x5e8975a6d140 ---------A   02730  GOSUB 4490
    0x5e8975a6d510 ---------A T 02740  R(I,1)=X1
    0x5e8975a6d8e0 ---------A   02750  R(I,2)=X2
    0x5e8975a6db40 ---------A T 02760  IF F9=1 THEN 2800
    0x5e8975a6e1e0 ---------A   02770  R(I,3)=175+RND(0)*51
    0x5e8975a6e430 ---------A T 02780  IF Z9<>1THEN2800
    0x5e8975a6eab0 ---------A T 02790  R(I,3)=R(I,3)/1.5
    0x5e8975a6ee80 ---------A T 02800  Q(X1,X2)=6
    0x5e8975a6efb0 ---------A   02810  NEXT I
    0x5e8975a6f220 ---------A T 02820  IF N7=0 THEN 2870
    0x5e8975a6f520 ---------A   02830  FOR I=1 TO N7
    0x5e8975a6f5a0 ---------A T 02840  GOSUB 4490
    0x5e8975a6f970 ---------A T 02850  Q(X1,X2)=2
    0x5e8975a6faa0 ---------A   02860  NEXT I
    0x5e8975a6fd10 ---------A   02870  IF N4=0 THEN 2930
    0x5e8975a6ff70 ---------A T 02880  IF F9=1 THEN 2930
    0x5e8975a6fff0 ---------A T 02890  GOSUB 4490
    0x5e8975a703c0 ---------A   02900  Q(X1,X2)=4
    0x5e8975a705f0 ---------A   02910  B9=X1
    0x5e8975a70840 ---------A   02920  B8=X2
    0x5e8975a70f10 ---------A T 02930  IF G(Q1,Q2)<>INT(G(Q1,Q2)) THEN 2960
    0x5e8975a70f90 ---------A T 02940  GOSUB 4490
    0x5e8975a71360 ---------A   02950  Q(X1,X2)=7
    0x5e8975a715b0 ---------A T 02960  IF N5<>0 THEN 2980
    0x5e8975a71810 ---------A   02970  IF N6=0 THEN 2990
    0x5e8975a71890 ---------A   02980  GOSUB 6620
    0x5e8975a71af0 ---------A   02990  IF N4=0 THEN 3040
    0x5e8975a71d70 ---------A T 03000  IF C$<>"ORBITING" THEN 3040
    0x5e8975a71f90 ---------A T 03010  P=13
    0x5e8975a721a0 ---------A T 03020  E2=300
    0x5e8975a72210 ---------A   03030  GOTO3130
    0x5e8975a72460 ---------A   03040  IF N5<>0 THEN 3060
    0x5e8975a726c0 ---------A   03050  IF N6=0 THEN 3080
    0x5e8975a72900 ---------A T 03060  C$="RED"
    0x5e8975a72980 ---------A   03070  GOTO3130
    0x5e8975a72bf0 ---------A   03080  IF E1>399 THEN 3120
    0x5e8975a72d70 ---------A T 03090  PRINT"HYPERDRIVE COILS LOW.  ** YELLOW ALERT **"
    0x5e8975a72fb0 ---------A T 03100  C$="YELLOW"
    0x5e8975a73020 ---------A T 03110  GOTO3130
    0x5e8975a73250 ---------A   03120  C$="GREEN"
    0x5e8975a734a0 ---------A T 03130  IF E1<1 THEN 7150
    0x5e8975a73530 ---------A T 03140  PRINT
    0x5e8975a73690 ---------A   03150  PRINT"==================="
    0x5e8975a73970 ---------A   03160  FOR I=1 TO 10
    0x5e8975a73c60 ---------A   03170  FOR J=1 TO 10
    0x5e8975a74180 ---------A T 03180  PRINT Q$(Q(I,J));" ";
    0x5e8975a742c0 ---------A T 03190  NEXT J
    0x5e8975a74480 ---------A   03200  PRINT"  ";
    0x5e8975a74d80 ---------A T 03210  ON I GOTO 3220,3240,3260,3280,3300,3320,3340,3360,3380,3400
    0x5e8975a752e0 ---------A T 03220  PRINT"CENTARE          ";T;"(UNTIL";T0;")"
    0x5e8975a75370 ---------A T 03230  GOTO 3410
    0x5e8975a755c0 ---------A T 03240  PRINT"CONDITION         ";C$
    0x5e8975a75650 ---------A T 03250  GOTO 3410
    0x5e8975a75aa0 ---------A T 03260  PRINT"QUADRANT      ";Q1;"-";Q2
    0x5e8975a75b30 ---------A T 03270  GOTO 3410
    0x5e8975a75f80 ---------A T 03280  PRINT"SECTOR        ";S1;"-";S2
    0x5e8975a76020 ---------A T 03290  GOTO 3410
    0x5e8975a76370 ---------A   03300  PRINT"HYPERDRIVE AT    ";E1;"-DEVICE #1"
    0x5e8975a76400 ---------A   03310  GOTO 3410
    0x5e8975a76650 ---------A   03320  PRINT"STAR DRIVE AT    ";E2
    0x5e8975a766f0 ---------A   03330  GOTO 3410
    0x5e8975a76a40 ---------A   03340  PRINT"VIPER RESERVES   ";E3;"-DEVICE #2"
    0x5e8975a76ae0 ---------A   03350  GOTO 3410
    0x5e8975a76e30 ---------A   03360  PRINT"DEFENSE LASERS   ";E4;"-DEVICE #3"
    0x5e8975a76ec0 ---------A   03370  GOTO 3410
    0x5e8975a77110 ---------A   03380  PRINT"MISSILES         ";P
    0x5e8975a771a0 ---------A   03390  GOTO 3410
    0x5e8975a773f0 ---------A G 03400  PRINT"CYLONS LEFT      ";N2
    0x5e8975a77530 ---------A   03410  NEXT I
    0x5e8975a776b0 ---------A T 03420  PRINT"==================="
    0x5e8975a77830 ---------A T 03430  PRINT "COMMAND ";
    0x5e8975a779a0 ---------A   03440  INPUT A$
    0x5e8975a77c20 ---------A   03450  IF A$="Q" THEN 7460
    0x5e8975a77f10 ---------A   03460  FOR I=1 TO 10
    0x5e8975a78270 ---------A T 03470  IF A$=D$(I) THEN 3540
    0x5e8975a783b0 ---------A   03480  NEXT I
    0x5e8975a78690 ---------A T 03490  IF A$<>"OBIWAN KENOBI" THEN 6500
    0x5e8975a78840 ---------A   03500  PRINT"YOU HAVE CALLED UPON THE LEGENDARY POWER OF THE FORCE FOR AID."
    0x5e8975a789b0 ---------A T 03510  PRINT"THE FORCE WEAKENS YOUR ENEMIES !"
    0x5e8975a78bd0 ---------A T 03520  Z9=1
    0x5e8975a78c70 ---------A   03530  GOTO3430
    0x5e8975a79540 ---------A T 03540  ON I GOTO 3550,3690,4800,5570,7530,4530,6230,6500,3140,7630
    0x5e8975a796c0 ---------A T 03550  PRINT"COURSE ";
    0x5e8975a798e0 ---------A   03560  INPUT C
    0x5e8975a649b0 ---------A   03570  IF C<1 THEN 3430
    0x5e8975a64c20 ---------A T 03580  IF C>=9 THEN 3430
    0x5e8975a64db0 ---------A   03590  PRINT "HYPERDRIVE JUMP SPEED ";
    0x5e8975a64f30 ---------A T 03600  INPUT W
    0x5e8975a7abd0 ---------A   03610  IF W<1 THEN 3430
    0x5e8975a7ae30 ---------A T 03620  IF W>8 THEN 3430
    0x5e8975a7b320 ---------A T 03630  X5=INT(W*8)
    0x5e8975a7b690 ---------A   03640  IF E1<=2*X5 THEN 3800
    0x5e8975a7baf0 ---------A T 03650  E1=E1-2*X5
    0x5e8975a7bf20 ---------A T 03660  T=T+SQR(W)
    0x5e8975a7c450 ---------A   03670  E1=E1+325*SQR(W)
    0x5e8975a7c4c0 ---------A   03680  GOTO 3850
    0x5e8975a7c630 ---------A   03690  PRINT"COURSE ";
    0x5e8975a7c790 ---------A T 03700  INPUT C
    0x5e8975a7c9f0 ---------A T 03710  IF C<1 THEN 3430
    0x5e8975a7cc60 ---------A   03720  IF C>=9 THEN 3430
    0x5e8975a7cde0 ---------A   03730  PRINT"STAR SPEED ";
    0x5e8975a7cf40 ---------A G 03740  INPUT W
    0x5e8975a7d280 ---------A   03750  W=W/10
    0x5e8975a7d4d0 ---------A   03760  IF W<.2 THEN 3430
    0x5e8975a7d730 ---------A   03770  IF W>.9 THEN 3430
    0x5e8975a7db60 ---------A T 03780  X5=INT(W*8)
    0x5e8975a7def0 ---------A   03790  IF E2>=7.5*X5 THEN 3820
    0x5e8975a7e060 ---------A   03800  PRINT"INSUFFICIENT POWER FOR MOVEMENT"
    0x5e8975a7e0e0 ---------A   03810  GOTO 3430
    0x5e8975a7e530 ---------A T 03820  E2=E2-7.5*X5
    0x5e8975a7ea60 ---------A   03830  E1=E1+350*SQR(W)
    0x5e8975a7ef90 ---------A   03840  T=T+SQR(W)/1.5
    0x5e8975a7f360 ---------A   03850  Q(S1,S2)=1
    0x5e8975a7f590 ---------A   03860  C$="MOVING"
    0x5e8975a7f800 ---------A T 03870  IF T>T0 THEN 7150
    0x5e8975a7fb00 ---------A   03880  X=S1
    0x5e8975a7fdf0 ---------A   03890  Y=S2
    0x5e8975a7fe60 ---------A   03900  GOSUB 4460
    0x5e8975a80150 ---------A T 03910  FOR I=1TO X5
    0x5e8975a804b0 ---------A T 03920  S1=S1+X1
    0x5e8975a80800 ---------A T 03930  S2=S2+X2
    0x5e8975a80a60 ---------A T 03940  IF S1<.5 THEN 4170
    0x5e8975a80cc0 ---------A   03950  IF S1>10.5 THEN 4170
    0x5e8975a80f30 ---------A T 03960  IF S2<.5 THEN 4170
    0x5e8975a81190 ---------A T 03970  IF S2>10.5 THEN 4170
    0x5e8975a81670 ---------A   03980  X6=INT(S1+.5)
    0x5e8975a81b50 ---------A   03990  X7=INT(S2+.5)
    0x5e8975a81f60 ---------A   04000  IF Q(X6,X7)<>7 THEN 4040
    0x5e8975a82010 ---------A   04010  PRINT
    0x5e8975a821a0 ---------A   04020  PRINT"** YOUR BATTLESTAR HAS BEEN ABSORBED BY A BLACK HOLE **"
    0x5e8975a82230 ---------A   04030  GOTO7150
    0x5e8975a82870 ---------A   04040  IF INT(ABS(X6-B9)+.5)>1 THEN 4180
    0x5e8975a82ec0 ---------A   04050  IF INT(ABS(X7-B8)+.5)>1 THEN 4180
    0x5e8975a83040 ---------A   04060  PRINT"DO YOU WISH TO ORBIT";
    0x5e8975a831b0 ---------A   04070  INPUT A$
    0x5e8975a83440 ---------A   04080  IF A$="Y" THEN 4120
    0x5e8975a836c0 ---------A   04090  IF A$="YES" THEN 4120
    0x5e8975a83aa0 ---------A   04100  B8=B9=F9=-1
    0x5e8975a83b10 ---------A   04110  GOTO 4180
    0x5e8975a83d40 ---------A   04120  C$="ORBITING"
    0x5e8975a83f70 ---------A   04130  S1=X6
    0x5e8975a841a0 ---------A   04140  S2=X7
    0x5e8975a843b0 ---------A   04150  F9=1
    0x5e8975a84420 ---------A   04160  GOTO 2430
    0x5e8975a847f0 ---------A   04170  F9=B8=B9=-1
    0x5e8975a84920 ---------A   04180  NEXT I
    0x5e8975a84d50 ---------A   04190  S1=INT(S1+.5)
    0x5e8975a85160 ---------A   04200  S2=INT(S2+.5)
    0x5e8975a853b0 ---------A   04210  IF S1>0 THEN 4250
    0x5e8975a856f0 ---------A   04220  S1=S1+10
    0x5e8975a85a20 ---------A   04230  Q1=Q1-1
    0x5e8975a85a90 ---------A   04240  GOTO4210
    0x5e8975a85ce0 ---------A   04250  IF S1<11 THEN 4290
    0x5e8975a86020 ---------A   04260  S1=S1-10
    0x5e8975a86350 ---------A   04270  Q1=Q1+1
    0x5e8975a863c0 ---------A   04280  GOTO4250
    0x5e8975a86610 ---------A   04290  IF S2>0 THEN 4330
    0x5e8975a86950 ---------A   04300  S2=S2+10
    0x5e8975a86c80 ---------A   04310  Q2=Q2-1
    0x5e8975a86cf0 ---------A   04320  GOTO 4290
    0x5e8975a86f40 ---------A   04330  IF S2<11 THEN 4370
    0x5e8975a87280 ---------A   04340  S2=S2-10
    0x5e8975a875b0 ---------A   04350  Q2=Q2+1
    0x5e8975a87620 ---------A   04360  GOTO4330
    0x5e8975a87870 ---------A   04370  IF Q1>0 THEN 4390
    0x5e8975a87bb0 ---------A   04380  Q1=Q1+10
    0x5e8975a87e00 ---------A   04390  IF Q1<11 THEN 4410
    0x5e8975a88140 ---------A   04400  Q1=Q1-10
    0x5e8975a88390 ---------A   04410  IF Q2>0 THEN 4430
    0x5e8975a886d0 ---------A   04420  Q2=Q2+10
    0x5e8975a88920 ---------A   04430  IF Q2<11 THEN 2430
    0x5e8975a88c60 ---------A   04440  Q2=Q2-10
    0x5e8975a88ce0 ---------A   04450  GOTO 2430
    0x5e8975a89240 ---------B   04460  X1=-SIN((C-1)*.785398)
    0x5e8975a89790 ---------B   04470  X2=COS((C-1)*.785398)
    0x5e8975a897e0 ---------B   04480  RETURN
    0x5e8975a89ae0 ---------C   04490  X1=FNR(-1)
    0x5e8975a89de0 ---------C   04500  X2=FNR(-1)
    0x5e8975a8a1f0 ---------C   04510  IF Q(X1,X2)<>1 THEN 4490
    0x5e8975a8a250 ---------C   04520  RETURN
    0x5e8975a8a8b0 ---------A   04530  IF T-INT(T)>RND(0)/7 THEN 4560
    0x5e8975a8aa20 ---------A   04540  PRINT"NEBULA CLOUD PREVENTS SCAN"
    0x5e8975a8aaa0 ---------A   04550  GOTO 3430
    0x5e8975a8ab40 ---------A   04560  PRINT
    0x5e8975a8afe0 ---------A   04570  PRINT"LONGE RANGE SENSOR SCAN FOR QUADRANT";Q1;"-";Q2
    0x5e8975a8b170 ---------A   04580  PRINT"     |--------|--------|--------|   POSITIONAL KEY (C P *)"
    0x5e8975a8b690 ---------A   04590  FOR I=Q1-1 TO Q1+1
    0x5e8975a8b8d0 ---------A   04600  X1=I
    0x5e8975a8bde0 ---------A   04610  FOR J=Q2-1 TO Q2+1
    0x5e8975a8c020 ---------A   04620  X2=J
    0x5e8975a8c270 ---------A   04630  IF X1>0 THEN 4650
    0x5e8975a8c5b0 ---------A   04640  X1=X1+10
    0x5e8975a8c800 ---------A   04650  IF X1<11 THEN 4670
    0x5e8975a8cb40 ---------A   04660  X1=X1-10
    0x5e8975a8cd90 ---------A   04670  IF X2>0 THEN 4690
    0x5e8975a8d0d0 ---------A   04680  X2=X2+10
    0x5e8975a8d320 ---------A   04690  IF X2<11 THEN 4710
    0x5e8975a8d670 ---------A   04700  X2=X2-10
    0x5e8975a8dd10 ---------A   04710  X3=INT(G(X1,X2)/1000)
    0x5e8975a8e7c0 ---------A   04720  N(J-Q2+2)=INT(G(X1,X2))-X3*1000
    0x5e8975a8eeb0 ---------A   04730  S(X1,X2)=N(J-Q2+2)
    0x5e8975a8efe0 ---------A   04740  NEXT J
    0x5e8975a8fca0 ---------A   04750  PRINT TAB(5);"  ";N(1);TAB(14);"  ";N(2);TAB(23);"  ";N(3);
    0x5e8975a8ff60 ---------A   04760  PRINT TAB(32);"  "
    0x5e8975a900d0 ---------A   04770  PRINT"     |--------|--------|--------|"
    0x5e8975a90210 ---------A   04780  NEXT I
    0x5e8975a902a0 ---------A   04790  GOTO 3430
    0x5e8975a904f0 ---------A   04800  IF N5>0 THEN 4840
    0x5e8975a90780 ---------A   04810  IF N6>0 THEN 4840
    0x5e8975a90900 ---------A   04820  PRINT"YOU ARE HALLUCINATING; NOTHING IS OUT THERE !!!"
    0x5e8975a909a0 ---------A   04830  GOTO 3430
    0x5e8975a90c10 ---------A   04840  PRINT "VIPERS STANDING BY. SQUADRON SIZE";E3
    0x5e8975a90da0 ---------A   04850  PRINT "HOW MANY UNITS TO LAUNCH ";
    0x5e8975a90f10 ---------A   04860  INPUT X1
    0x5e8975a911b0 ---------A   04870  IF E3>=X1 THEN 4900
    0x5e8975a91520 ---------A   04880  PRINT"I TOLD YOU THERE ARE ONLY";E3;"UNITS !!!"
    0x5e8975a915a0 ---------A   04890  GOTO 3430
    0x5e8975a91800 ---------A   04900  IF X1<1 THEN 3430
    0x5e8975a91960 ---------A   04910  PRINT"VIPERS LAUNCHED"
    0x5e8975a91cc0 ---------A   04920  E3=E3-X1
    0x5e8975a91f10 ---------A   04930  IF N5=0 THEN5280
    0x5e8975a921f0 ---------A   04940  X8=0
    0x5e8975a924c0 ---------A   04950  X9=100
    0x5e8975a927d0 ---------A   04960  FOR I=1 TO N5
    0x5e8975a92fa0 ---------A   04970  IF (FND(K(I,1),K(I,2)))>X9 THEN 5010
    0x5e8975a933a0 ---------A   04980  IF K(I,3)<=0 THEN 5010
    0x5e8975a935f0 ---------A   04990  X8=I
    0x5e8975a93d20 ---------A   05000  X9=FND(K(I,1),K(I,2))
    0x5e8975a93e50 ---------A   05010  NEXT I
    0x5e8975a940c0 ---------A   05020  IF X8=0 THEN 5270
    0x5e8975a94310 ---------A   05030  I=X8
    0x5e8975a94a70 ---------A   05040  IF FND(K(I,1),K(I,2))>3 THEN 5210
    0x5e8975a94e90 ---------A   05050  IF X1<K(I,3) THEN 5170
    0x5e8975a953c0 ---------A   05060  X1=X1-K(I,3)
    0x5e8975a95c60 ---------A   05070  PRINT"CYLON BASE-STAR AT SECTOR";K(I,1);"-";K(I,2);"DESTROYED"
    0x5e8975a95fa0 ---------A   05080  P4=P4+1
    0x5e8975a96350 ---------A   05090  K(I,3)=0
    0x5e8975a96a60 ---------A   05100  Q(K(I,1),K(I,2))=1
    0x5e8975a96d90 ---------A   05110  N2=N2-1
    0x5e8975a96ff0 ---------A   05120  IF N2=0 THEN 7330
    0x5e8975a976c0 ---------A   05130  G(Q1,Q2)=G(Q1,Q2)-100
    0x5e8975a97ae0 ---------A   05140  IF S(Q1,Q2)=0 THEN 4940
    0x5e8975a981a0 ---------A   05150  S(Q1,Q2)=S(Q1,Q2)-100
    0x5e8975a98240 ---------A   05160  GOTO 4940
    0x5e8975a98ae0 ---------A   05170  PRINT X1;"CYLON FIGHTERS REMOVED AT SECTOR";K(I,1);"-";K(I,2)
    0x5e8975a99180 ---------A   05180  K(I,3)=K(I,3)-X1
    0x5e8975a99390 ---------A   05190  X1=0
    0x5e8975a99410 ---------A   05200  GOTO 5530
    0x5e8975a9a040 ---------A   05210  X2=K(I,3)*(FND(K(I,1),K(I,2))/3)^2
    0x5e8975a9a2b0 ---------A   05220  IF X1<X2 THEN 5250
    0x5e8975a9a610 ---------A   05230  X1=X1-X2
    0x5e8975a9a690 ---------A   05240  GOTO 5070
    0x5e8975a9b120 ---------A   05250  X1=X1/(FND(K(I,1),K(I,2))/3)^2
    0x5e8975a9b190 ---------A   05260  GOTO 5170
    0x5e8975a9b3e0 ---------A   05270  IF X1=0 THEN 5530
    0x5e8975a9b640 ---------A   05280  IF N6=0 THEN 5530
    0x5e8975a9b950 ---------A   05290  FOR I=1 TO N6
    0x5e8975a9bd60 ---------A   05300  IF R(I,3)<=0 THEN 5520
    0x5e8975a9c4d0 ---------A   05310  IF FND(R(I,1),R(I,2))>3 THEN 5460
    0x5e8975a9c8f0 ---------A   05320  IF X1<R(I,3) THEN 5420
    0x5e8975a9ce20 ---------A   05330  X1=X1-R(I,3)
    0x5e8975a9d6b0 ---------A   05340  PRINT"E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2);"DESTROYED"
    0x5e8975a9d9f0 ---------A   05350  P4=P4+.5
    0x5e8975a9dda0 ---------A   05360  R(I,3)=0
    0x5e8975a9e4b0 ---------A   05370  Q(R(I,1),R(I,2))=1
    0x5e8975a9e7f0 ---------A   05380  N3=N3-1
    0x5e8975a9eea0 ---------A   05390  G(Q1,Q2)=G(Q1,Q2)-1000
    0x5e8975a9f1d0 ---------A   05400  N6=N6-1
    0x5e8975a9f270 ---------A   05410  GOTO 5530
    0x5e8975a9fb10 ---------A   05420  PRINT X1;"UNITS HIT IN E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5e8975aa01b0 ---------A   05430  R(I,3)=R(I,3)-X1
    0x5e8975aa03c0 ---------A   05440  X1=0
    0x5e8975aa0440 ---------A   05450  GOTO 5530
    0x5e8975aa1070 ---------A   05460  X2=R(I,3)*(FND(R(I,1),R(I,2))/3)^2
    0x5e8975aa12e0 ---------A   05470  IF X1<X2 THEN 5500
    0x5e8975aa1640 ---------A   05480  X1=X1-X2
    0x5e8975aa16c0 ---------A   05490  GOTO 5340
    0x5e8975aa2150 ---------A   05500  X1=X1/(FND(R(I,1),R(I,2))/3)^2
    0x5e8975aa21c0 ---------A   05510  GOTO 5420
    0x5e8975aa22f0 ---------A   05520  NEXT I
    0x5e8975aa2590 ---------A   05530  IF X1<10 THEN 5550
    0x5e8975aa2900 ---------A   05540  PRINT"COMPUTER REPORTS";X1;"VIPERS EXPLODED IN LAUNCH TUBES"
    0x5e8975aa2980 ---------A   05550  GOSUB 6620
    0x5e8975aa29f0 ---------A   05560  GOTO 3430
    0x5e8975aa2c50 ---------A   05570  IF P>0 THEN 5600
    0x5e8975aa2db0 ---------A   05580  PRINT"MISSILES EXPENDED"
    0x5e8975aa2e30 ---------A   05590  GOTO 3430
    0x5e8975aa2fa0 ---------A   05600  PRINT"COURSE ";
    0x5e8975aa3100 ---------A   05610  INPUT C
    0x5e8975aa3360 ---------A   05620  IF C<1 THEN 3430
    0x5e8975aa35c0 ---------A   05630  IF C>=9 THEN 3430
    0x5e8975aa3640 ---------A   05640  GOSUB 4460
    0x5e8975aa3870 ---------A   05650  X=S1
    0x5e8975aa3ab0 ---------A   05660  Y=S2
    0x5e8975aa3d20 ---------A   05670  IF C$="ORBITING" THEN 5690
    0x5e8975aa4070 ---------A   05680  P=P-1
    0x5e8975aa41d0 ---------A   05690  PRINT"MISSILE AWAY, TRACKING:"
    0x5e8975aa4530 ---------A   05700  X=X+X1
    0x5e8975aa4880 ---------A   05710  Y=Y+X2
    0x5e8975aa4ae0 ---------A   05720  IF X<.5 THEN 6210
    0x5e8975aa4d40 ---------A   05730  IF X>10.5 THEN 6210
    0x5e8975aa4fb0 ---------A   05740  IF Y<.5 THEN 6210
    0x5e8975aa5230 ---------A   05750  IF Y>10.5 THEN 6210
    0x5e8975aa5b50 ---------A   05760  PRINT INT(X*100)/100;"-";INT(Y*100)/100
    0x5e8975aa5f70 ---------A   05770  X3=INT(X+.5)
    0x5e8975aa6470 ---------A   05780  X4=INT(Y+.5)
    0x5e8975aa6ce0 ---------A   05790  ON Q(X3,X4) GOTO 5700,5820,5700,5990,5850,6080,5800
    0x5e8975aa6e50 ---------A   05800  PRINT"MISSILE ABSORBED BY BLACK HOLE"
    0x5e8975aa6f00 ---------A   05810  GOTO 6210
    0x5e8975aa7070 ---------A   05820  PRINT"MISSILE ABSORBED BY STAR - DISRUPTION SLIGHT"
    0x5e8975aa7590 ---------A   05830  P4=P4-RND(-1)*2
    0x5e8975aa7630 ---------A   05840  GOTO 6190
    0x5e8975aa7b90 ---------A   05850  PRINT"CYLON BASE-STAR AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5e8975aa7ed0 ---------A   05860  P4=P4+1
    0x5e8975aa81d0 ---------A   05870  FOR I=1 TO N5
    0x5e8975aa8600 ---------A   05880  IF K(I,1)<>X3 THEN 5970
    0x5e8975aa8a20 ---------A   05890  IF K(I,2)<>X4 THEN 5970
    0x5e8975aa8df0 ---------A   05900  K(I,3)=0
    0x5e8975aa94b0 ---------A   05910  G(Q1,Q2)=G(Q1,Q2)-100
    0x5e8975aa98d0 ---------A   05920  IF S(Q1,Q2)=0 THEN 5940
    0x5e8975aa9f90 ---------A   05930  S(Q1,Q2)=S(Q1,Q2)-100
    0x5e8975aaa2c0 ---------A   05940  N2=N2-1
    0x5e8975aaa510 ---------A   05950  IF N2=0 THEN 7330
    0x5e8975aaa590 ---------A   05960  GOTO 6180
    0x5e8975aaa6c0 ---------A   05970  NEXT I
    0x5e8975aaa770 ---------A   05980  GOTO 6210
    0x5e8975aaa8d0 ---------A   05990  PRINT "COMMANDER, WHAT HAVE YOU DONE ??!!"
    0x5e8975aaac40 ---------A   06000  P4=P4-30
    0x5e8975aab1a0 ---------A   06010  PRINT"*** TERRAN PLANET AT SECTOR";X3;"-";X4;"DESTROYED ***"
    0x5e8975aab250 ---------A   06020  PRINT
    0x5e8975aab3e0 ---------A   06030  PRINT"ENERGY BOLT APPROACHING FROM DIRECTION OF FORMER PLANET!"
    0x5e8975aab480 ---------A   06040  PRINT
    0x5e8975aab600 ---------A   06050  PRINT"                     **** ZZZZAAP  ****"
    0x5e8975aab680 ---------A   06060  PRINT
    0x5e8975aab720 ---------A   06070  GOTO7150
    0x5e8975aabc70 ---------A   06080  PRINT"E.A.FLEET AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5e8975aabfb0 ---------A   06090  P4=P4+.5
    0x5e8975aac2b0 ---------A   06100  FOR I=1 TO N6
    0x5e8975aac6e0 ---------A   06110  IF R(I,1)<>X3 THEN6170
    0x5e8975aacb00 ---------A   06120  IF R(I,2)<>X4 THEN6170
    0x5e8975a79cb0 ---------A   06130  R(I,3)=0
    0x5e8975a7a360 ---------A   06140  G(Q1,Q2)=G(Q1,Q2)-1000
    0x5e8975a7a690 ---------A   06150  N3=N3-1
    0x5e8975a7a700 ---------A   06160  GOTO 6180
    0x5e8975a7a830 ---------A   06170  NEXT I
    0x5e8975aaee50 ---------A   06180  Q(X3,X4)=1
    0x5e8975aaeec0 ---------A   06190  GOSUB 6620
    0x5e8975aaef40 ---------A   06200  GOTO 3430
    0x5e8975aaf090 ---------A   06210  PRINT"MISSILE MISSED TARGET"
    0x5e8975aaf130 ---------A   06220  GOTO 6190
    0x5e8975aaf2b0 ---------A   06230  PRINT"TRANSFER ENERGY FROM DEVICE # ";
    0x5e8975aaf410 ---------A   06240  INPUT X1
    0x5e8975aaf690 ---------A   06250  IF X1=0 THEN 3430
    0x5e8975aaf820 ---------A   06260  PRINT".... AND ALLOCATE TO DEVICE # ";
    0x5e8975aaf980 ---------A   06270  INPUT X2
    0x5e8975aafbe0 ---------A   06280  IF X2=0 THEN 3430
    0x5e8975aafe70 ---------A   06290  IF X2>X1 THEN 6320
    0x5e8975aaffe0 ---------A   06300  PRINT"IMPOSSIBLE, COMMANDER !"
    0x5e8975ab0060 ---------A   06310  GOTO 3430
    0x5e8975ab02c0 ---------A   06320  IF X2>3 THEN 6300
    0x5e8975ab0450 ---------A   06330  PRINT"# OF UNITS TO TRANSFER ";
    0x5e8975ab05c0 ---------A   06340  INPUT X3
    0x5e8975ab08a0 ---------A   06350  ON X1 GOTO 6360,6410
    0x5e8975ab0b40 ---------A   06360  IF E1>X3 THEN 6390
    0x5e8975ab0cb0 ---------A   06370  PRINT"INSUFFICIENT POWER AVAILABLE"
    0x5e8975ab0d30 ---------A   06380  GOTO 3430
    0x5e8975ab1080 ---------A   06390  E1=E1-X3
    0x5e8975ab10f0 ---------A   06400  GOTO 6430
    0x5e8975ab1360 ---------A   06410  IF X3>E3 THEN 6370
    0x5e8975ab16d0 ---------A   06420  E3=E3+X3
    0x5e8975ab1aa0 ---------A   06430  ON X2-1 GOTO 6440,6460
    0x5e8975ab1e00 ---------A   06440  E3=E3+X3
    0x5e8975ab1e70 ---------A   06450  GOTO 6480
    0x5e8975ab21c0 ---------A   06460  E4=E4+X3
    0x5e8975ab2520 ---------A   06470  Q8=Q8+X3
    0x5e8975ab2670 ---------A   06480  PRINT"TRANSFER COMPLETE"
    0x5e8975ab2720 ---------A   06490  GOTO 3430
    0x5e8975ab2ac0 ---------A   06500  PRINT" H -- HYPERDRIVE JUMP";TAB(37);"COURSE GUIDE"
    0x5e8975ab2c60 ---------A   06510  PRINT" SS - STAR-SPEED MANEUVER"
    0x5e8975ab3030 ---------A   06520  PRINT" L -- LONG RANGE SENSOR SCAN";TAB(40);"4  3  2"
    0x5e8975ab3400 ---------A   06530  PRINT" S -- SHORT RANGE SENSOR SCAN";TAB(42);"\|/"
    0x5e8975ab37c0 ---------A   06540  PRINT" V -- LAUNCH VIPERS";TAB(40);"5 -*- 1"
    0x5e8975ab3b90 ---------A   06550  PRINT" M -- FIRE MISSILE";TAB(42);"/|\"
    0x5e8975ab3f50 ---------A   06560  PRINT" A -- ALLOCATE ENERGY UNITS";TAB(40);"6  7  8"
    0x5e8975ab40d0 ---------A   06570  PRINT" G -- GENERATE POWER"
    0x5e8975ab4260 ---------A   06580  PRINT" R -- RECALL LONG RANGE SENSOR INFORMATION"
    0x5e8975ab43f0 ---------A   06590  PRINT" C -- THIS LIST OF COMMANDS"
    0x5e8975ab4560 ---------A   06600  PRINT" Q -- QUIT GAME(ABNORMAL ENDING)"
    0x5e8975ab45f0 ---------A   06610  GOTO 3430
    0x5e8975ab4880 ---------D   06620  IF C$<>"ORBITING" THEN 6650
    0x5e8975ab4a00 ---------D   06630  PRINT"PLANETARY DEFENSES PROTECT YOUR BATTLESTAR"
    0x5e8975ab4a60 ---------D   06640  RETURN
    0x5e8975ab4cd0 ---------D   06650  IF Z9=0THEN6670
    0x5e8975ab4e40 ---------D   06660  PRINT"THE FORCE IS WITH YOU !"
    0x5e8975ab5080 ---------D   06670  C$="GREEN"
    0x5e8975ab5350 ---------D   06680  Q9=0
    0x5e8975ab55a0 ---------D   06690  IF N5=0 THEN 6890
    0x5e8975ab58b0 ---------D   06700  FOR I=1 TO N5
    0x5e8975ab5cb0 ---------D   06710  IF K(I,3)=0 THEN 6880
    0x5e8975ab5f00 ---------D   06720  C$="RED"
    0x5e8975ab6650 ---------D   06730  IF FND(K(I,1),K(I,2))>3 THEN 6830
    0x5e8975ab6b50 ---------D   06740  E4=E4-K(I,3)
    0x5e8975ab7070 ---------D   06750  Q9=Q9+K(I,3)
    0x5e8975ab7940 ---------D   06760  PRINT K(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975ab80e0 ---------D   06770  PRINT"FROM CYLON AT SECTOR";K(I,1);"-";K(I,2)
    0x5e8975ab8340 ---------D   06780  IF E4>0THEN6800
    0x5e8975ab83d0 ---------D   06790  GOSUB 7180
    0x5e8975ab8630 ---------D   06800  IF E4>400 THEN 6820
    0x5e8975ab87a0 ---------D   06810  PRINT"LASER CANNONS FAILING !"
    0x5e8975ab8830 ---------D   06820  GOTO 6880
    0x5e8975ab9460 ---------D   06830  X1=K(I,3)/(FND(K(I,1),K(I,2))/3)^2
    0x5e8975ab97b0 ---------D   06840  E4=E4-X1
    0x5e8975ab9b20 ---------D   06850  Q9=Q9+X1
    0x5e8975aba230 ---------D   06860  PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975aba2b0 ---------D   06870  GOTO 6770
    0x5e8975aba3e0 ---------D   06880  NEXT I
    0x5e8975aba650 ---------D   06890  IF N6=0 THEN 7090
    0x5e8975aba960 ---------D   06900  FOR I=1 TO N6
    0x5e8975abad60 ---------D   06910  IF R(I,3)=0THEN7080
    0x5e8975abafb0 ---------D   06920  C$="RED"
    0x5e8975abb700 ---------D   06930  IF FND(R(I,1),R(I,2))>3 THEN 7030
    0x5e8975abbc00 ---------D   06940  E4=E4-R(I,3)
    0x5e8975abc120 ---------D   06950  Q9=Q9+R(I,3)
    0x5e8975abc9f0 ---------D   06960  PRINT R(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975abd1a0 ---------D   06970  PRINT"FROM E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5e8975abd400 ---------D   06980  IF E4>0 THEN 7000
    0x5e8975abd490 ---------D   06990  GOSUB 7180
    0x5e8975abd6f0 ---------D   07000  IF E4>400 THEN 7020
    0x5e8975abd860 ---------D   07010  PRINT"LASER CANNONS FAILING !"
    0x5e8975abd8f0 ---------D   07020  GOTO 7080
    0x5e8975abe520 ---------D   07030  X1=R(I,3)/(FND(R(I,1),R(I,2))/3)^2
    0x5e8975abe870 ---------D   07040  E4=E4-X1
    0x5e8975abebe0 ---------D   07050  Q9=Q9+X1
    0x5e8975abf2f0 ---------D   07060  PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975abf370 ---------D   07070  GOTO 6970
    0x5e8975abf4a0 ---------D   07080  NEXT I
    0x5e8975abf730 ---------D   07090  IF E1<=0THEN7150
    0x5e8975abfd90 ---------D   07100  PRINT ((Q8-E4)/Q8)*100;"PERCENT DAMAGE.";
    0x5e8975ac0100 ---------D   07110  PRINT"          LASERS FIRING AT";E4;"."
    0x5e8975ac03b0 ---------D   07120  IF Q9<E4 THEN 7140
    0x5e8975ac0530 ---------D   07130  PRINT"COMMANDER, WE CANNOT WITHSTAND ANOTHER ATTACK !!"
    0x5e8975ac0590 ---------D   07140  RETURN
    0x5e8975ac0750 -------EDA   07150  PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5e8975ac0bc0 -------EDA   07160  PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5e8975ac0c60 -------EDA   07170  GOTO 7490
    0x5e8975ac0dc0 ---------E   07180  PRINT"DRAWING ENERGY FOR LASER CANNONS"
    0x5e8975ac1230 ---------E   07190  Q8=Q8-E4+1
    0x5e8975ac16c0 ---------E   07200  IF -E4*1.5+1>E3 THEN 7250
    0x5e8975ac1830 ---------E   07210  PRINT".....TAPPING VIPER FUEL RESERVES"
    0x5e8975ac1d90 ---------E   07220  E3=E3-1+E4*1.25
    0x5e8975ac1fa0 ---------E   07230  E4=1
    0x5e8975ac1ff0 ---------E   07240  RETURN
    0x5e8975ac25b0 ---------E   07250  IF -E4*1.5+1>E1+E3 THEN 7150
    0x5e8975ac2740 ---------E   07260  PRINT"....> VIPER FUEL EXHAUSTED"
    0x5e8975ac28b0 ---------E   07270  PRINT".......TAPPING HYPERDRIVE COILS"
    0x5e8975ac2c10 ---------E   07280  E4=E4+E3
    0x5e8975ac2e20 ---------E   07290  E3=0
    0x5e8975ac3370 ---------E   07300  E1=E1-1+E4*1.66
    0x5e8975ac3580 ---------E   07310  E4=1
    0x5e8975ac35d0 ---------E   07320  RETURN
    0x5e8975ac3b90 ---------A   07330  P4=P4-(T-T9)/2
    0x5e8975ac3de0 ---------A   07340  IF P4>10THEN7410
    0x5e8975ac3e90 ---------A   07350  PRINT
    0x5e8975ac4040 ---------A   07360  PRINT"EVEN THOUGH THE CYLONS HAVE BEEN DESTROYED, AND THE"
    0x5e8975ac41e0 ---------A   07370  PRINT"EASTERN ALLIANCE HAS FLED, YOU HAVE BEEN TOO DAMAGING"
    0x5e8975ac4360 ---------A   07380  PRINT"TO TERRAN CIVILIZATIONS TO WIN."
    0x5e8975ac44d0 ---------A   07390  PRINT"..... CALL IT A DRAW ....."
    0x5e8975ac4550 ---------A   07400  GOTO7490
    0x5e8975ac45d0 ---------A   07410  PRINT
    0x5e8975ac4770 ---------A   07420  PRINT"CONGRATULATIONS, COMMANDER."
    0x5e8975ac4920 ---------A   07430  PRINT"THE CYLONS HAVE BEEN DESTROYED, AND THE EASTERN"
    0x5e8975ac4ab0 ---------A   07440  PRINT"ALLIANCE HAS FLED, MAKING THIS A GREAT VICTORY"
    0x5e8975ac4c20 ---------A   07450  PRINT"FOR THE TERRAN EMPIRE."
    0x5e8975ac4cc0 ---------A   07460  PRINT
    0x5e8975ac4e30 ---------A   07470  PRINT"A RATING GREATER THAN 10 IS GOOD!"
    0x5e8975ac5400 ---------A   07480  P4=P4-(T-T9)/2
    0x5e8975ac5650 -------EDA   07490  PRINT"=RATING= ";P4
    0x5e8975ac56e0 -------EDA   07500  PRINT
    0x5e8975ac5840 -------EDA   07510  PRINT"PLEASE TYPE* DONE"
    0x5e8975ac58a0 -------EDA   07520  STOP
    0x5e8975ac5b40 ---------A   07530  IF C$="GREEN" THEN7560
    0x5e8975ac5dc0 ---------A   07540  IF C$="YELLOW" THEN7560
    0x5e8975ac5e40 ---------A   07550  GOTO7610
    0x5e8975ac6170 ---------A   07560  E1=E1+500
    0x5e8975ac64a0 ---------A   07570  T=T+.5
    0x5e8975ac6720 ---------A   07580  IF T>T0 THEN7150
    0x5e8975ac6880 ---------A   07590  PRINT"POWER GENERATED"
    0x5e8975ac6910 ---------A   07600  GOTO3430
    0x5e8975ac6a70 ---------A   07610  PRINT"IMPOSSIBLE UNDER RED ALERT"
    0x5e8975ac6af0 ---------A   07620  GOTO3430
    0x5e8975ac6b60 ---------A   07630  PRINT
    0x5e8975ac6e40 ---------A   07640  FOR X6=1TO10
    0x5e8975ac7130 ---------A   07650  FOR X7=1TO10
    0x5e8975ac76d0 ---------A   07660  PRINT S(X6,X7);TAB(X7*5);
    0x5e8975ac7810 ---------A   07670  NEXT X7
    0x5e8975ac78a0 ---------A   07680  PRINT
    0x5e8975ac79e0 ---------A   07690  NEXT X6
    0x5e8975ac7a70 ---------A   07700  GOTO3430
    0x5e8975ac7ac0 ---------A   07710  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     08040 - 10000    1970 

 */



/*
 *  Symbol Table Listing for 'basic/btlstr.bas'
 *
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B8                       Integer     
    B9                       Integer     
    C                        Integer     
    C$                       String      
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D$              Array    String          {0,9} 
    E1                       Integer     
    E2                       Integer     
    E3                       Integer     
    E4                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F9                       Integer     
    FIX             Function Integer         args=1, float  
    FND             Array    Integer         {0,9} 
    FNR             Array    Integer         {0,9} 
    FRE             Function Integer         args=1, char*  
    G               Array    Integer         {0,9} {0,9} 
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K               Array    Integer         {0,4} {0,2} 
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
    N               Array    Integer         {0,9} 
    N1                       Integer     
    N2                       Integer     
    N3                       Integer     
    N4                       Integer     
    N5                       Integer     
    N6                       Integer     
    N7                       Integer     
    OCT$            Function String          args=1, float  
    ONE             Array    Integer         {0,9} 
    P                        Integer     
    P4                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q               Array    Integer         {0,9} {0,9} 
    Q$              Array    String          {0,6} 
    Q1                       Integer     
    Q2                       Integer     
    Q8                       Integer     
    Q9                       Integer     
    R               Array    Integer         {0,1} {0,2} 
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,9} {0,9} 
    S1                       Integer     
    S2                       Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    T0                       Integer     
    T9                       Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X                        Integer     
    X1                       Integer     
    X2                       Integer     
    X3                       Integer     
    X4                       Integer     
    X5                       Integer     
    X6                       Integer     
    X7                       Integer     
    X8                       Integer     
    X9                       Integer     
    Y                        Integer     
    Z9                       Integer     
    ZER             Array    Integer         {0,9} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/btlstr.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e8975a4bdb0 ---------A   01000  REM Game of BattleStar
    0x5e8975a4ab80 ---------A   01010  REM 
    0x5e8975a4bf30 ---------A   01020  REM Variable List
    0x5e8975a4be70 ---------A   01030  REM     A$			- 
    0x5e8975a4bff0 ---------A   01040  REM     B8			- 
    0x5e8975a4afc0 ---------A   01050  REM     B9			- 
    0x5e8975a4a2d0 ---------A   01060  REM     C			- 
    0x5e8975a4a910 ---------A   01070  REM     C$			- Alert Condition
    0x5e8975a3a2b0 ---------A   01080  REM     D$[11]		- 
    0x5e8975a4c0b0 ---------A   01090  REM     E1			- Hyperdrive Coil Energy
    0x5e8975a499e0 ---------A   01100  REM     E2			- Star Drive Energy
    0x5e8975a497f0 ---------A   01110  REM     E3			- Viper Reserve Energy
    0x5e8975a4baa0 ---------A   01120  REM     E4			- Defence Laser Energy
    0x5e8975a4a040 ---------A   01130  REM     F9			- 
    0x5e8975a4a0b0 ---------A   01140  REM     G[11][11]	- 
    0x5e8975a49e40 ---------A   01150  REM     I			- 
    0x5e8975a4a480 ---------A   01160  REM     J			- 
    0x5e8975a4a510 ---------A   01170  REM     K[6][4]	- 
    0x5e8975a4b6a0 ---------A   01180  REM     N[10]		- 
    0x5e8975a4b710 ---------A   01190  REM     N1			- 
    0x5e8975a49be0 ---------A   01200  REM     N2			- Cylons left.
    0x5e8975a49c70 ---------A   01210  REM     N3			- 
    0x5e8975a4c100 ---------A   01220  REM     N4			- 
    0x5e8975a4c190 ---------A   01230  REM     N5			- 
    0x5e8975a4c220 ---------A   01240  REM     N6			- 
    0x5e8975a4a640 ---------A   01250  REM     N7			- 
    0x5e8975a4a6f0 ---------A   01260  REM     P			- Number of missles
    0x5e8975a4a780 ---------A   01270  REM     P4			- 
    0x5e8975a4a820 ---------A   01280  REM     Q[11][11]	- 
    0x5e8975a518a0 ---------A   01290  REM     Q$[8]		- 
    0x5e8975a51920 ---------A   01300  REM     Q1			- Quadrant Indice
    0x5e8975a519d0 ---------A   01310  REM     Q2			- Quadrant Indice
    0x5e8975a51a60 ---------A   01320  REM     Q8			- 
    0x5e8975a51d00 ---------A   01330  REM     Q9			- 
    0x5e8975a51d90 ---------A   01340  REM     R[3][4]	- 
    0x5e8975a51e30 ---------A   01350  REM     S[11][11]	- 
    0x5e8975a51ee0 ---------A   01360  REM     S1			- Sector Indice
    0x5e8975a51f90 ---------A   01370  REM     S2			- Sector Indice
    0x5e8975a52040 ---------A   01380  REM     T			- Game time in Centare
    0x5e8975a520f0 ---------A   01390  REM     T0			- End time for game. 
    0x5e8975a52180 ---------A   01400  REM     T9			- 
    0x5e8975a52210 ---------A   01410  REM     W			- 
    0x5e8975a522a0 ---------A   01420  REM     X			- 
    0x5e8975a52330 ---------A   01430  REM     X1			- 
    0x5e8975a523c0 ---------A   01440  REM     X2			- 
    0x5e8975a52450 ---------A   01450  REM     X3			- 
    0x5e8975a524e0 ---------A   01460  REM     X4			- 
    0x5e8975a52570 ---------A   01470  REM     X5			- 
    0x5e8975a52600 ---------A   01480  REM     X6			- 
    0x5e8975a52690 ---------A   01490  REM     X7			- 
    0x5e8975a52720 ---------A   01500  REM     X8			- 
    0x5e8975a527b0 ---------A   01510  REM     X9			- 
    0x5e8975a52840 ---------A   01520  REM     Y			- 
    0x5e8975a528d0 ---------A   01530  REM     Z9			- 
    0x5e8975a537f0 ---------A   01540  DIM Q(10,10),G(10,10),K(5,3),R(2,3),Q$(7),S(10,10)
    0x5e8975a496d0 ---------A   01550  PRINT"WELCOME TO ** BATTLESTAR **          (BY RWMELHUISH)"
    0x5e8975a49670 ---------A   01560  PRINT
    0x5e8975a539a0 ---------A   01570  PRINT
    0x5e8975a53d40 ---------A   01580  FOR I=1 TO 7
    0x5e8975a53f80 ---------A   01590  READ Q$(I)
    0x5e8975a540b0 ---------A   01600  NEXT I
    0x5e8975a54770 ---------A   01610  DATA ".","*",B,P,C,E,O
    0x5e8975a54a40 ---------A   01620  DIM D$(10)
    0x5e8975a54d10 ---------A   01630  FOR I=1 TO 10
    0x5e8975a54f50 ---------A   01640  READ D$(I)
    0x5e8975a55490 ---------A   01650  NEXT I
    0x5e8975a55e10 ---------A   01660  DATA H,SS,V,M,G,L,S,C,A,R
    0x5e8975a56860 ---------A   01670  T0=INT(RND(-1)*20000)/10+INT(RND(-1)*5000)
    0x5e8975a56b50 ---------A   01680  Z9=0
    0x5e8975a579d0 ---------A   01690  DEF FND(X1,X2)=SQR((S1-X1)^2+(S2-X2)^2)
    0x5e8975a58170 ---------A   01700  DEF FNR(X1)=INT(RND(X1)*10)+1
    0x5e8975a58c00 ---------A   01710  T=T9=T0-(60-3*ABS(FNR(-1)-5))
    0x5e8975a58ed0 ---------A   01720  E1=1540
    0x5e8975a591a0 ---------A   01730  E2=300
    0x5e8975a59470 ---------A   01740  E3=2000
    0x5e8975a598e0 ---------A   01750  Q8=E4=1540
    0x5e8975a59bb0 ---------A   01760  P=13
    0x5e8975a5a020 ---------A   01770  B8=B9=-1
    0x5e8975a5a2f0 ---------A   01780  MAT G=ZER
    0x5e8975a5a6b0 ---------A   01790  Q1=FNR(-1)
    0x5e8975a5aa60 ---------A   01800  Q2=FNR(-1)
    0x5e8975a5ad50 ---------A   01810  S1=FNR(-1)
    0x5e8975a5b040 ---------A   01820  S2=FNR(-1)
    0x5e8975a5b990 ---------A   01830  N1=N2=N3=F9=P4=0
    0x5e8975a5bc60 ---------A   01840  FOR I=1 TO 10
    0x5e8975a5c000 ---------A   01850  FOR J=1 TO 10
    0x5e8975a5c400 ---------A   01860  X1=RND(-1)*50
    0x5e8975a5ca20 ---------A   01870  N4=N5=N6=0
    0x5e8975a5cc70 ---------A   01880  IF X1>.08 THEN 1900
    0x5e8975a5cfc0 ---------A   01890  N5=N5+1
    0x5e8975a5d210 ---------A T 01900  IF X1>.28 THEN 1920
    0x5e8975a5d560 ---------A   01910  N5=N5+1
    0x5e8975a5d7b0 ---------A T 01920  IF X1>1.28 THEN 1940
    0x5e8975a5db00 ---------A   01930  N5=N5+1
    0x5e8975a5dd50 ---------A T 01940  IF X1>3.28 THEN 1960
    0x5e8975a5e0a0 ---------A   01950  N5=N5+1
    0x5e8975a5e2f0 ---------A T 01960  IF X1>13.28 THEN 1980
    0x5e8975a5e630 ---------A   01970  N5=N5+1
    0x5e8975a5e880 ---------A T 01980  IF N2<36 THEN 2000
    0x5e8975a5eaa0 ---------A   01990  N5=0
    0x5e8975a5edf0 ---------A T 02000  N2=N2+N5
    0x5e8975a5f050 ---------A   02010  IF N1>2 THEN 2040
    0x5e8975a5f370 ---------A   02020  IF RND(-1)<.97 THEN 2040
    0x5e8975a5f590 ---------A   02030  N4=1
    0x5e8975a5fb20 ---------A T 02040  N7=ABS(FNR(-1)-1)
    0x5e8975a5fe70 ---------A   02050  N1=N1+N4
    0x5e8975a600c0 ---------A   02060  IF N5>3 THEN 2130
    0x5e8975a604d0 ---------A   02070  X1=RND(-1)*40
    0x5e8975a60720 ---------A   02080  IF X1>4.25 THEN 2100
    0x5e8975a60a70 ---------A   02090  N6=N6+1
    0x5e8975a60cc0 ---------A T 02100  IF X1>16.25 THEN 2120
    0x5e8975a61000 ---------A   02110  N6=N6+1
    0x5e8975a61360 ---------A T 02120  N3=N3+N6
    0x5e8975a61dc0 ---------A T 02130  G(I,J)=N6*1000+N5*100+N4*10+N7
    0x5e8975a620d0 ---------A   02140  IF RND(-1)>.45 THEN 2160
    0x5e8975a62790 ---------A   02150  G(I,J)=G(I,J)+.1
    0x5e8975a628c0 ---------A T 02160  NEXT J
    0x5e8975a62a10 ---------A   02170  NEXT I
    0x5e8975a62c80 ---------A   02180  IF N1>0 THEN 2230
    0x5e8975a62f80 ---------A   02190  I=FNR(-1)
    0x5e8975a63270 ---------A   02200  J=FNR(-1)
    0x5e8975a63920 ---------A   02210  G(I,J)=G(I,J)+10
    0x5e8975a63b30 ---------A   02220  N1=1
    0x5e8975a63bc0 ---------A T 02230  PRINT
    0x5e8975a63e60 ---------A   02240  PRINT N2;"CYLONS HAVE PENETRATED TERRAN SPACE."
    0x5e8975a63ff0 ---------A   02250  PRINT ".....THEY ARE ASSISTED BY THE EASTERN ALLIANCE."
    0x5e8975a64370 ---------A   02260  PRINT "ONLY";N1;"TERRAN PLANET";
    0x5e8975a645d0 ---------A   02270  IF N1<2 THEN 2300
    0x5e8975a64750 ---------A   02280  PRINT "S HAVE";
    0x5e8975a64fe0 ---------A   02290  GOTO 2310
    0x5e8975a65170 ---------A T 02300  PRINT" HAS";
    0x5e8975a65310 ---------A T 02310  PRINT" SURVIVED THE INITIAL ASSAULT."
    0x5e8975a656a0 ---------A   02320  PRINT"YOU HAVE UNTIL CENTARE";T0;"TO DEFEAT THE CYLONS"
    0x5e8975a65810 ---------A   02330  PRINT"AND DRIVE AWAY THE EASTERN ALLIANCE."
    0x5e8975a658a0 ---------A   02340  PRINT
    0x5e8975a65a20 ---------A   02350  PRINT".....REMEMBER :"
    0x5e8975a65ba0 ---------A   02360  PRINT".....DO NOT RUN INTO ANY BLACK HOLES....."
    0x5e8975a65c20 ---------A   02370  PRINT
    0x5e8975a65ca0 ---------A   02380  PRINT
    0x5e8975a65fb0 ---------A   02390  C$="WHO CARES"
    0x5e8975a66120 ---------A T 02400  PRINT" CONTINUE(C)";
    0x5e8975a66350 ---------A   02410  INPUT A$
    0x5e8975a665d0 ---------A   02420  IF A$<>"C" THEN 2400
    0x5e8975a66840 ---------A T 02430  IF N2=0 THEN 6580
    0x5e8975a66f10 ---------A   02440  N6=INT(INT(G(Q1,Q2))/1000)
    0x5e8975a67800 ---------A   02450  N5=INT(INT(G(Q1,Q2))/100)-N6*10
    0x5e8975a68310 ---------A   02460  N4=INT(INT(G(Q1,Q2))/10)-N6*100-N5*10
    0x5e8975a68e40 ---------A   02470  N7=INT(G(Q1,Q2))-N6*1000-N5*100-N4*10
    0x5e8975a69110 ---------A   02480  MAT Q=CON
    0x5e8975a694f0 ---------A   02490  Q(S1,S2)=3
    0x5e8975a69740 ---------A   02500  IF F9<>1 THEN 2520
    0x5e8975a69b20 ---------A   02510  Q(B9,B8)=4
    0x5e8975a69d70 ---------A T 02520  IF N5=0 THEN 2710
    0x5e8975a69df0 ---------A   02530  PRINT
    0x5e8975a69e90 ---------A   02540  PRINT
    0x5e8975a6a010 ---------A   02550  PRINT"COMPUTER LASERS ACTIVATING  ** RED ALERT **"
    0x5e8975a6a0a0 ---------A   02560  PRINT
    0x5e8975a6a420 ---------A   02570  PRINT"SCANNERS SHOW";N5;"CYLON";
    0x5e8975a6a680 ---------A   02580  IF N5<2 THEN 2600
    0x5e8975a6a800 ---------A   02590  PRINT"S";
    0x5e8975a6a960 ---------A T 02600  PRINT"."
    0x5e8975a6ac60 ---------A   02610  FOR I=1 TO N5
    0x5e8975a6ace0 ---------A   02620  GOSUB 7150
    0x5e8975a6b0b0 ---------A   02630  K(I,1)=X1
    0x5e8975a6b480 ---------A   02640  K(I,2)=X2
    0x5e8975a6b6e0 ---------A   02650  IF F9=1 THEN 2690
    0x5e8975a6bd80 ---------A   02660  K(I,3)=175+RND(0)*51
    0x5e8975a6bfd0 ---------A   02670  IF Z9<>1THEN2690
    0x5e8975a6c650 ---------A   02680  K(I,3)=K(I,3)/2
    0x5e8975a6ca20 ---------A T 02690  Q(X1,X2)=5
    0x5e8975a6cb50 ---------A   02700  NEXT I
    0x5e8975a6cdc0 ---------A T 02710  IF N6=0 THEN 2820
    0x5e8975a6d0c0 ---------A   02720  FOR I=1 TO N6
    0x5e8975a6d140 ---------A   02730  GOSUB 7150
    0x5e8975a6d510 ---------A   02740  R(I,1)=X1
    0x5e8975a6d8e0 ---------A   02750  R(I,2)=X2
    0x5e8975a6db40 ---------A   02760  IF F9=1 THEN 2800
    0x5e8975a6e1e0 ---------A   02770  R(I,3)=175+RND(0)*51
    0x5e8975a6e430 ---------A   02780  IF Z9<>1THEN2800
    0x5e8975a6eab0 ---------A   02790  R(I,3)=R(I,3)/1.5
    0x5e8975a6ee80 ---------A T 02800  Q(X1,X2)=6
    0x5e8975a6efb0 ---------A   02810  NEXT I
    0x5e8975a6f220 ---------A T 02820  IF N7=0 THEN 2870
    0x5e8975a6f520 ---------A   02830  FOR I=1 TO N7
    0x5e8975a6f5a0 ---------A   02840  GOSUB 7150
    0x5e8975a6f970 ---------A   02850  Q(X1,X2)=2
    0x5e8975a6faa0 ---------A   02860  NEXT I
    0x5e8975a6fd10 ---------A T 02870  IF N4=0 THEN 2930
    0x5e8975a6ff70 ---------A   02880  IF F9=1 THEN 2930
    0x5e8975a6fff0 ---------A   02890  GOSUB 7150
    0x5e8975a703c0 ---------A   02900  Q(X1,X2)=4
    0x5e8975a705f0 ---------A   02910  B9=X1
    0x5e8975a70840 ---------A   02920  B8=X2
    0x5e8975a70f10 ---------A T 02930  IF G(Q1,Q2)<>INT(G(Q1,Q2)) THEN 2960
    0x5e8975a70f90 ---------A   02940  GOSUB 7150
    0x5e8975a71360 ---------A   02950  Q(X1,X2)=7
    0x5e8975a715b0 ---------A T 02960  IF N5<>0 THEN 2980
    0x5e8975a71810 ---------A   02970  IF N6=0 THEN 2990
    0x5e8975a71890 ---------A T 02980  GOSUB 7200
    0x5e8975a71af0 ---------A T 02990  IF N4=0 THEN 3040
    0x5e8975a71d70 ---------A   03000  IF C$<>"ORBITING" THEN 3040
    0x5e8975a71f90 ---------A   03010  P=13
    0x5e8975a721a0 ---------A   03020  E2=300
    0x5e8975a72210 ---------A   03030  GOTO3130
    0x5e8975a72460 ---------A T 03040  IF N5<>0 THEN 3060
    0x5e8975a726c0 ---------A   03050  IF N6=0 THEN 3080
    0x5e8975a72900 ---------A T 03060  C$="RED"
    0x5e8975a72980 ---------A   03070  GOTO3130
    0x5e8975a72bf0 ---------A T 03080  IF E1>399 THEN 3120
    0x5e8975a72d70 ---------A   03090  PRINT"HYPERDRIVE COILS LOW.  ** YELLOW ALERT **"
    0x5e8975a72fb0 ---------A   03100  C$="YELLOW"
    0x5e8975a73020 ---------A   03110  GOTO3130
    0x5e8975a73250 ---------A T 03120  C$="GREEN"
    0x5e8975a734a0 ---------A T 03130  IF E1<1 THEN 7040
    0x5e8975a73530 ---------A T 03140  PRINT
    0x5e8975a73690 ---------A   03150  PRINT"==================="
    0x5e8975a73970 ---------A   03160  FOR I=1 TO 10
    0x5e8975a73c60 ---------A   03170  FOR J=1 TO 10
    0x5e8975a74180 ---------A   03180  PRINT Q$(Q(I,J));" ";
    0x5e8975a742c0 ---------A   03190  NEXT J
    0x5e8975a74480 ---------A   03200  PRINT"  ";
    0x5e8975a74d80 ---------A   03210  ON I GOTO 3220,3240,3260,3280,3300,3320,3340,3360,3380,3400
    0x5e8975a752e0 ---------A T 03220  PRINT"CENTARE          ";T;"(UNTIL";T0;")"
    0x5e8975a75370 ---------A   03230  GOTO 3410
    0x5e8975a755c0 ---------A T 03240  PRINT"CONDITION         ";C$
    0x5e8975a75650 ---------A   03250  GOTO 3410
    0x5e8975a75aa0 ---------A T 03260  PRINT"QUADRANT      ";Q1;"-";Q2
    0x5e8975a75b30 ---------A   03270  GOTO 3410
    0x5e8975a75f80 ---------A T 03280  PRINT"SECTOR        ";S1;"-";S2
    0x5e8975a76020 ---------A   03290  GOTO 3410
    0x5e8975a76370 ---------A T 03300  PRINT"HYPERDRIVE AT    ";E1;"-DEVICE #1"
    0x5e8975a76400 ---------A   03310  GOTO 3410
    0x5e8975a76650 ---------A T 03320  PRINT"STAR DRIVE AT    ";E2
    0x5e8975a766f0 ---------A   03330  GOTO 3410
    0x5e8975a76a40 ---------A T 03340  PRINT"VIPER RESERVES   ";E3;"-DEVICE #2"
    0x5e8975a76ae0 ---------A   03350  GOTO 3410
    0x5e8975a76e30 ---------A T 03360  PRINT"DEFENSE LASERS   ";E4;"-DEVICE #3"
    0x5e8975a76ec0 ---------A   03370  GOTO 3410
    0x5e8975a77110 ---------A T 03380  PRINT"MISSILES         ";P
    0x5e8975a771a0 ---------A   03390  GOTO 3410
    0x5e8975a773f0 ---------A T 03400  PRINT"CYLONS LEFT      ";N2
    0x5e8975a77530 ---------A T 03410  NEXT I
    0x5e8975a776b0 ---------A   03420  PRINT"==================="
    0x5e8975a77830 ---------A T 03430  PRINT "COMMAND ";
    0x5e8975a779a0 ---------A   03440  INPUT A$
    0x5e8975a77c20 ---------A   03450  IF A$="Q" THEN 6710
    0x5e8975a77f10 ---------A   03460  FOR I=1 TO 10
    0x5e8975a78270 ---------A   03470  IF A$=D$(I) THEN 3540
    0x5e8975a783b0 ---------A   03480  NEXT I
    0x5e8975a78690 ---------A   03490  IF A$<>"OBIWAN KENOBI" THEN 6430
    0x5e8975a78840 ---------A   03500  PRINT"YOU HAVE CALLED UPON THE LEGENDARY POWER OF THE FORCE FOR AID."
    0x5e8975a789b0 ---------A   03510  PRINT"THE FORCE WEAKENS YOUR ENEMIES !"
    0x5e8975a78bd0 ---------A   03520  Z9=1
    0x5e8975a78c70 ---------A   03530  GOTO3430
    0x5e8975a79540 ---------A T 03540  ON I GOTO 3550,3690,4730,5500,6780,4460,6160,6430,3140,6880
    0x5e8975a796c0 ---------A T 03550  PRINT"COURSE ";
    0x5e8975a798e0 ---------A   03560  INPUT C
    0x5e8975a649b0 ---------A   03570  IF C<1 THEN 3430
    0x5e8975a64c20 ---------A   03580  IF C>=9 THEN 3430
    0x5e8975a64db0 ---------A   03590  PRINT "HYPERDRIVE JUMP SPEED ";
    0x5e8975a64f30 ---------A   03600  INPUT W
    0x5e8975a7abd0 ---------A   03610  IF W<1 THEN 3430
    0x5e8975a7ae30 ---------A   03620  IF W>8 THEN 3430
    0x5e8975a7b320 ---------A   03630  X5=INT(W*8)
    0x5e8975a7b690 ---------A   03640  IF E1<=2*X5 THEN 3800
    0x5e8975a7baf0 ---------A   03650  E1=E1-2*X5
    0x5e8975a7bf20 ---------A   03660  T=T+SQR(W)
    0x5e8975a7c450 ---------A   03670  E1=E1+325*SQR(W)
    0x5e8975a7c4c0 ---------A   03680  GOTO 3850
    0x5e8975a7c630 ---------A T 03690  PRINT"COURSE ";
    0x5e8975a7c790 ---------A   03700  INPUT C
    0x5e8975a7c9f0 ---------A   03710  IF C<1 THEN 3430
    0x5e8975a7cc60 ---------A   03720  IF C>=9 THEN 3430
    0x5e8975a7cde0 ---------A   03730  PRINT"STAR SPEED ";
    0x5e8975a7cf40 ---------A   03740  INPUT W
    0x5e8975a7d280 ---------A   03750  W=W/10
    0x5e8975a7d4d0 ---------A   03760  IF W<.2 THEN 3430
    0x5e8975a7d730 ---------A   03770  IF W>.9 THEN 3430
    0x5e8975a7db60 ---------A   03780  X5=INT(W*8)
    0x5e8975a7def0 ---------A   03790  IF E2>=7.5*X5 THEN 3820
    0x5e8975a7e060 ---------A T 03800  PRINT"INSUFFICIENT POWER FOR MOVEMENT"
    0x5e8975a7e0e0 ---------A   03810  GOTO 3430
    0x5e8975a7e530 ---------A T 03820  E2=E2-7.5*X5
    0x5e8975a7ea60 ---------A   03830  E1=E1+350*SQR(W)
    0x5e8975a7ef90 ---------A   03840  T=T+SQR(W)/1.5
    0x5e8975a7f360 ---------A T 03850  Q(S1,S2)=1
    0x5e8975a7f590 ---------A   03860  C$="MOVING"
    0x5e8975a7f800 ---------A   03870  IF T>T0 THEN 7040
    0x5e8975a7fb00 ---------A   03880  X=S1
    0x5e8975a7fdf0 ---------A   03890  Y=S2
    0x5e8975a7fe60 ---------A   03900  GOSUB 7110
    0x5e8975a80150 ---------A   03910  FOR I=1TO X5
    0x5e8975a804b0 ---------A   03920  S1=S1+X1
    0x5e8975a80800 ---------A   03930  S2=S2+X2
    0x5e8975a80a60 ---------A   03940  IF S1<.5 THEN 4170
    0x5e8975a80cc0 ---------A   03950  IF S1>10.5 THEN 4170
    0x5e8975a80f30 ---------A   03960  IF S2<.5 THEN 4170
    0x5e8975a81190 ---------A   03970  IF S2>10.5 THEN 4170
    0x5e8975a81670 ---------A   03980  X6=INT(S1+.5)
    0x5e8975a81b50 ---------A   03990  X7=INT(S2+.5)
    0x5e8975a81f60 ---------A   04000  IF Q(X6,X7)<>7 THEN 4040
    0x5e8975a82010 ---------A   04010  PRINT
    0x5e8975a821a0 ---------A   04020  PRINT"** YOUR BATTLESTAR HAS BEEN ABSORBED BY A BLACK HOLE **"
    0x5e8975a82230 ---------A   04030  GOTO7040
    0x5e8975a82870 ---------A T 04040  IF INT(ABS(X6-B9)+.5)>1 THEN 4180
    0x5e8975a82ec0 ---------A   04050  IF INT(ABS(X7-B8)+.5)>1 THEN 4180
    0x5e8975a83040 ---------A   04060  PRINT"DO YOU WISH TO ORBIT";
    0x5e8975a831b0 ---------A   04070  INPUT A$
    0x5e8975a83440 ---------A   04080  IF A$="Y" THEN 4120
    0x5e8975a836c0 ---------A   04090  IF A$="YES" THEN 4120
    0x5e8975a83aa0 ---------A   04100  B8=B9=F9=-1
    0x5e8975a83b10 ---------A   04110  GOTO 4180
    0x5e8975a83d40 ---------A T 04120  C$="ORBITING"
    0x5e8975a83f70 ---------A   04130  S1=X6
    0x5e8975a841a0 ---------A   04140  S2=X7
    0x5e8975a843b0 ---------A   04150  F9=1
    0x5e8975a84420 ---------A   04160  GOTO 2430
    0x5e8975a847f0 ---------A T 04170  F9=B8=B9=-1
    0x5e8975a84920 ---------A T 04180  NEXT I
    0x5e8975a84d50 ---------A   04190  S1=INT(S1+.5)
    0x5e8975a85160 ---------A   04200  S2=INT(S2+.5)
    0x5e8975a853b0 ---------A T 04210  IF S1>0 THEN 4250
    0x5e8975a856f0 ---------A   04220  S1=S1+10
    0x5e8975a85a20 ---------A   04230  Q1=Q1-1
    0x5e8975a85a90 ---------A   04240  GOTO4210
    0x5e8975a85ce0 ---------A T 04250  IF S1<11 THEN 4290
    0x5e8975a86020 ---------A   04260  S1=S1-10
    0x5e8975a86350 ---------A   04270  Q1=Q1+1
    0x5e8975a863c0 ---------A   04280  GOTO4250
    0x5e8975a86610 ---------A T 04290  IF S2>0 THEN 4330
    0x5e8975a86950 ---------A   04300  S2=S2+10
    0x5e8975a86c80 ---------A   04310  Q2=Q2-1
    0x5e8975a86cf0 ---------A   04320  GOTO 4290
    0x5e8975a86f40 ---------A T 04330  IF S2<11 THEN 4370
    0x5e8975a87280 ---------A   04340  S2=S2-10
    0x5e8975a875b0 ---------A   04350  Q2=Q2+1
    0x5e8975a87620 ---------A   04360  GOTO4330
    0x5e8975a87870 ---------A T 04370  IF Q1>0 THEN 4390
    0x5e8975a87bb0 ---------A   04380  Q1=Q1+10
    0x5e8975a87e00 ---------A T 04390  IF Q1<11 THEN 4410
    0x5e8975a88140 ---------A   04400  Q1=Q1-10
    0x5e8975a88390 ---------A T 04410  IF Q2>0 THEN 4430
    0x5e8975a886d0 ---------A   04420  Q2=Q2+10
    0x5e8975a88920 ---------A T 04430  IF Q2<11 THEN 2430
    0x5e8975a88c60 ---------A   04440  Q2=Q2-10
    0x5e8975a88ce0 ---------A   04450  GOTO 2430
    0x5e8975a8a8b0 ---------A T 04460  IF T-INT(T)>RND(0)/7 THEN 4490
    0x5e8975a8aa20 ---------A   04470  PRINT"NEBULA CLOUD PREVENTS SCAN"
    0x5e8975a8aaa0 ---------A   04480  GOTO 3430
    0x5e8975a8ab40 ---------A T 04490  PRINT
    0x5e8975a8afe0 ---------A   04500  PRINT"LONGE RANGE SENSOR SCAN FOR QUADRANT";Q1;"-";Q2
    0x5e8975a8b170 ---------A   04510  PRINT"     |--------|--------|--------|   POSITIONAL KEY (C P *)"
    0x5e8975a8b690 ---------A   04520  FOR I=Q1-1 TO Q1+1
    0x5e8975a8b8d0 ---------A   04530  X1=I
    0x5e8975a8bde0 ---------A   04540  FOR J=Q2-1 TO Q2+1
    0x5e8975a8c020 ---------A   04550  X2=J
    0x5e8975a8c270 ---------A   04560  IF X1>0 THEN 4580
    0x5e8975a8c5b0 ---------A   04570  X1=X1+10
    0x5e8975a8c800 ---------A T 04580  IF X1<11 THEN 4600
    0x5e8975a8cb40 ---------A   04590  X1=X1-10
    0x5e8975a8cd90 ---------A T 04600  IF X2>0 THEN 4620
    0x5e8975a8d0d0 ---------A   04610  X2=X2+10
    0x5e8975a8d320 ---------A T 04620  IF X2<11 THEN 4640
    0x5e8975a8d670 ---------A   04630  X2=X2-10
    0x5e8975a8dd10 ---------A T 04640  X3=INT(G(X1,X2)/1000)
    0x5e8975a8e7c0 ---------A   04650  N(J-Q2+2)=INT(G(X1,X2))-X3*1000
    0x5e8975a8eeb0 ---------A   04660  S(X1,X2)=N(J-Q2+2)
    0x5e8975a8efe0 ---------A   04670  NEXT J
    0x5e8975a8fca0 ---------A   04680  PRINT TAB(5);"  ";N(1);TAB(14);"  ";N(2);TAB(23);"  ";N(3);
    0x5e8975a8ff60 ---------A   04690  PRINT TAB(32);"  "
    0x5e8975a900d0 ---------A   04700  PRINT"     |--------|--------|--------|"
    0x5e8975a90210 ---------A   04710  NEXT I
    0x5e8975a902a0 ---------A   04720  GOTO 3430
    0x5e8975a904f0 ---------A T 04730  IF N5>0 THEN 4770
    0x5e8975a90780 ---------A   04740  IF N6>0 THEN 4770
    0x5e8975a90900 ---------A   04750  PRINT"YOU ARE HALLUCINATING; NOTHING IS OUT THERE !!!"
    0x5e8975a909a0 ---------A   04760  GOTO 3430
    0x5e8975a90c10 ---------A T 04770  PRINT "VIPERS STANDING BY. SQUADRON SIZE";E3
    0x5e8975a90da0 ---------A   04780  PRINT "HOW MANY UNITS TO LAUNCH ";
    0x5e8975a90f10 ---------A   04790  INPUT X1
    0x5e8975a911b0 ---------A   04800  IF E3>=X1 THEN 4830
    0x5e8975a91520 ---------A   04810  PRINT"I TOLD YOU THERE ARE ONLY";E3;"UNITS !!!"
    0x5e8975a915a0 ---------A   04820  GOTO 3430
    0x5e8975a91800 ---------A T 04830  IF X1<1 THEN 3430
    0x5e8975a91960 ---------A   04840  PRINT"VIPERS LAUNCHED"
    0x5e8975a91cc0 ---------A   04850  E3=E3-X1
    0x5e8975a91f10 ---------A   04860  IF N5=0 THEN5210
    0x5e8975a921f0 ---------A T 04870  X8=0
    0x5e8975a924c0 ---------A   04880  X9=100
    0x5e8975a927d0 ---------A   04890  FOR I=1 TO N5
    0x5e8975a92fa0 ---------A   04900  IF (FND(K(I,1),K(I,2)))>X9 THEN 4940
    0x5e8975a933a0 ---------A   04910  IF K(I,3)<=0 THEN 4940
    0x5e8975a935f0 ---------A   04920  X8=I
    0x5e8975a93d20 ---------A   04930  X9=FND(K(I,1),K(I,2))
    0x5e8975a93e50 ---------A T 04940  NEXT I
    0x5e8975a940c0 ---------A   04950  IF X8=0 THEN 5200
    0x5e8975a94310 ---------A   04960  I=X8
    0x5e8975a94a70 ---------A   04970  IF FND(K(I,1),K(I,2))>3 THEN 5140
    0x5e8975a94e90 ---------A   04980  IF X1<K(I,3) THEN 5100
    0x5e8975a953c0 ---------A   04990  X1=X1-K(I,3)
    0x5e8975a95c60 ---------A T 05000  PRINT"CYLON BASE-STAR AT SECTOR";K(I,1);"-";K(I,2);"DESTROYED"
    0x5e8975a95fa0 ---------A   05010  P4=P4+1
    0x5e8975a96350 ---------A   05020  K(I,3)=0
    0x5e8975a96a60 ---------A   05030  Q(K(I,1),K(I,2))=1
    0x5e8975a96d90 ---------A   05040  N2=N2-1
    0x5e8975a96ff0 ---------A   05050  IF N2=0 THEN 6580
    0x5e8975a976c0 ---------A   05060  G(Q1,Q2)=G(Q1,Q2)-100
    0x5e8975a97ae0 ---------A   05070  IF S(Q1,Q2)=0 THEN 4870
    0x5e8975a981a0 ---------A   05080  S(Q1,Q2)=S(Q1,Q2)-100
    0x5e8975a98240 ---------A   05090  GOTO 4870
    0x5e8975a98ae0 ---------A T 05100  PRINT X1;"CYLON FIGHTERS REMOVED AT SECTOR";K(I,1);"-";K(I,2)
    0x5e8975a99180 ---------A   05110  K(I,3)=K(I,3)-X1
    0x5e8975a99390 ---------A   05120  X1=0
    0x5e8975a99410 ---------A   05130  GOTO 5460
    0x5e8975a9a040 ---------A T 05140  X2=K(I,3)*(FND(K(I,1),K(I,2))/3)^2
    0x5e8975a9a2b0 ---------A   05150  IF X1<X2 THEN 5180
    0x5e8975a9a610 ---------A   05160  X1=X1-X2
    0x5e8975a9a690 ---------A   05170  GOTO 5000
    0x5e8975a9b120 ---------A T 05180  X1=X1/(FND(K(I,1),K(I,2))/3)^2
    0x5e8975a9b190 ---------A   05190  GOTO 5100
    0x5e8975a9b3e0 ---------A T 05200  IF X1=0 THEN 5460
    0x5e8975a9b640 ---------A T 05210  IF N6=0 THEN 5460
    0x5e8975a9b950 ---------A   05220  FOR I=1 TO N6
    0x5e8975a9bd60 ---------A   05230  IF R(I,3)<=0 THEN 5450
    0x5e8975a9c4d0 ---------A   05240  IF FND(R(I,1),R(I,2))>3 THEN 5390
    0x5e8975a9c8f0 ---------A   05250  IF X1<R(I,3) THEN 5350
    0x5e8975a9ce20 ---------A   05260  X1=X1-R(I,3)
    0x5e8975a9d6b0 ---------A T 05270  PRINT"E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2);"DESTROYED"
    0x5e8975a9d9f0 ---------A   05280  P4=P4+.5
    0x5e8975a9dda0 ---------A   05290  R(I,3)=0
    0x5e8975a9e4b0 ---------A   05300  Q(R(I,1),R(I,2))=1
    0x5e8975a9e7f0 ---------A   05310  N3=N3-1
    0x5e8975a9eea0 ---------A   05320  G(Q1,Q2)=G(Q1,Q2)-1000
    0x5e8975a9f1d0 ---------A   05330  N6=N6-1
    0x5e8975a9f270 ---------A   05340  GOTO 5460
    0x5e8975a9fb10 ---------A T 05350  PRINT X1;"UNITS HIT IN E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5e8975aa01b0 ---------A   05360  R(I,3)=R(I,3)-X1
    0x5e8975aa03c0 ---------A   05370  X1=0
    0x5e8975aa0440 ---------A   05380  GOTO 5460
    0x5e8975aa1070 ---------A T 05390  X2=R(I,3)*(FND(R(I,1),R(I,2))/3)^2
    0x5e8975aa12e0 ---------A   05400  IF X1<X2 THEN 5430
    0x5e8975aa1640 ---------A   05410  X1=X1-X2
    0x5e8975aa16c0 ---------A   05420  GOTO 5270
    0x5e8975aa2150 ---------A T 05430  X1=X1/(FND(R(I,1),R(I,2))/3)^2
    0x5e8975aa21c0 ---------A   05440  GOTO 5350
    0x5e8975aa22f0 ---------A T 05450  NEXT I
    0x5e8975aa2590 ---------A T 05460  IF X1<10 THEN 5480
    0x5e8975aa2900 ---------A   05470  PRINT"COMPUTER REPORTS";X1;"VIPERS EXPLODED IN LAUNCH TUBES"
    0x5e8975aa2980 ---------A T 05480  GOSUB 7200
    0x5e8975aa29f0 ---------A   05490  GOTO 3430
    0x5e8975aa2c50 ---------A T 05500  IF P>0 THEN 5530
    0x5e8975aa2db0 ---------A   05510  PRINT"MISSILES EXPENDED"
    0x5e8975aa2e30 ---------A   05520  GOTO 3430
    0x5e8975aa2fa0 ---------A T 05530  PRINT"COURSE ";
    0x5e8975aa3100 ---------A   05540  INPUT C
    0x5e8975aa3360 ---------A   05550  IF C<1 THEN 3430
    0x5e8975aa35c0 ---------A   05560  IF C>=9 THEN 3430
    0x5e8975aa3640 ---------A   05570  GOSUB 7110
    0x5e8975aa3870 ---------A   05580  X=S1
    0x5e8975aa3ab0 ---------A   05590  Y=S2
    0x5e8975aa3d20 ---------A   05600  IF C$="ORBITING" THEN 5620
    0x5e8975aa4070 ---------A   05610  P=P-1
    0x5e8975aa41d0 ---------A T 05620  PRINT"MISSILE AWAY, TRACKING:"
    0x5e8975aa4530 ---------A T 05630  X=X+X1
    0x5e8975aa4880 ---------A   05640  Y=Y+X2
    0x5e8975aa4ae0 ---------A   05650  IF X<.5 THEN 6140
    0x5e8975aa4d40 ---------A   05660  IF X>10.5 THEN 6140
    0x5e8975aa4fb0 ---------A   05670  IF Y<.5 THEN 6140
    0x5e8975aa5230 ---------A   05680  IF Y>10.5 THEN 6140
    0x5e8975aa5b50 ---------A   05690  PRINT INT(X*100)/100;"-";INT(Y*100)/100
    0x5e8975aa5f70 ---------A   05700  X3=INT(X+.5)
    0x5e8975aa6470 ---------A   05710  X4=INT(Y+.5)
    0x5e8975aa6ce0 ---------A   05720  ON Q(X3,X4) GOTO 5630,5750,5630,5920,5780,6010,5730
    0x5e8975aa6e50 ---------A T 05730  PRINT"MISSILE ABSORBED BY BLACK HOLE"
    0x5e8975aa6f00 ---------A   05740  GOTO 6140
    0x5e8975aa7070 ---------A T 05750  PRINT"MISSILE ABSORBED BY STAR - DISRUPTION SLIGHT"
    0x5e8975aa7590 ---------A   05760  P4=P4-RND(-1)*2
    0x5e8975aa7630 ---------A   05770  GOTO 6120
    0x5e8975aa7b90 ---------A T 05780  PRINT"CYLON BASE-STAR AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5e8975aa7ed0 ---------A   05790  P4=P4+1
    0x5e8975aa81d0 ---------A   05800  FOR I=1 TO N5
    0x5e8975aa8600 ---------A   05810  IF K(I,1)<>X3 THEN 5900
    0x5e8975aa8a20 ---------A   05820  IF K(I,2)<>X4 THEN 5900
    0x5e8975aa8df0 ---------A   05830  K(I,3)=0
    0x5e8975aa94b0 ---------A   05840  G(Q1,Q2)=G(Q1,Q2)-100
    0x5e8975aa98d0 ---------A   05850  IF S(Q1,Q2)=0 THEN 5870
    0x5e8975aa9f90 ---------A   05860  S(Q1,Q2)=S(Q1,Q2)-100
    0x5e8975aaa2c0 ---------A T 05870  N2=N2-1
    0x5e8975aaa510 ---------A   05880  IF N2=0 THEN 6580
    0x5e8975aaa590 ---------A   05890  GOTO 6110
    0x5e8975aaa6c0 ---------A T 05900  NEXT I
    0x5e8975aaa770 ---------A   05910  GOTO 6140
    0x5e8975aaa8d0 ---------A T 05920  PRINT "COMMANDER, WHAT HAVE YOU DONE ??!!"
    0x5e8975aaac40 ---------A   05930  P4=P4-30
    0x5e8975aab1a0 ---------A   05940  PRINT"*** TERRAN PLANET AT SECTOR";X3;"-";X4;"DESTROYED ***"
    0x5e8975aab250 ---------A   05950  PRINT
    0x5e8975aab3e0 ---------A   05960  PRINT"ENERGY BOLT APPROACHING FROM DIRECTION OF FORMER PLANET!"
    0x5e8975aab480 ---------A   05970  PRINT
    0x5e8975aab600 ---------A   05980  PRINT"                     **** ZZZZAAP  ****"
    0x5e8975aab680 ---------A   05990  PRINT
    0x5e8975aab720 ---------A   06000  GOTO7040
    0x5e8975aabc70 ---------A T 06010  PRINT"E.A.FLEET AT SECTOR";X3;"-";X4;"DESTROYED"
    0x5e8975aabfb0 ---------A   06020  P4=P4+.5
    0x5e8975aac2b0 ---------A   06030  FOR I=1 TO N6
    0x5e8975aac6e0 ---------A   06040  IF R(I,1)<>X3 THEN6100
    0x5e8975aacb00 ---------A   06050  IF R(I,2)<>X4 THEN6100
    0x5e8975a79cb0 ---------A   06060  R(I,3)=0
    0x5e8975a7a360 ---------A   06070  G(Q1,Q2)=G(Q1,Q2)-1000
    0x5e8975a7a690 ---------A   06080  N3=N3-1
    0x5e8975a7a700 ---------A   06090  GOTO 6110
    0x5e8975a7a830 ---------A T 06100  NEXT I
    0x5e8975aaee50 ---------A T 06110  Q(X3,X4)=1
    0x5e8975aaeec0 ---------A T 06120  GOSUB 7200
    0x5e8975aaef40 ---------A   06130  GOTO 3430
    0x5e8975aaf090 ---------A T 06140  PRINT"MISSILE MISSED TARGET"
    0x5e8975aaf130 ---------A   06150  GOTO 6120
    0x5e8975aaf2b0 ---------A T 06160  PRINT"TRANSFER ENERGY FROM DEVICE # ";
    0x5e8975aaf410 ---------A   06170  INPUT X1
    0x5e8975aaf690 ---------A   06180  IF X1=0 THEN 3430
    0x5e8975aaf820 ---------A   06190  PRINT".... AND ALLOCATE TO DEVICE # ";
    0x5e8975aaf980 ---------A   06200  INPUT X2
    0x5e8975aafbe0 ---------A   06210  IF X2=0 THEN 3430
    0x5e8975aafe70 ---------A   06220  IF X2>X1 THEN 6250
    0x5e8975aaffe0 ---------A T 06230  PRINT"IMPOSSIBLE, COMMANDER !"
    0x5e8975ab0060 ---------A   06240  GOTO 3430
    0x5e8975ab02c0 ---------A T 06250  IF X2>3 THEN 6230
    0x5e8975ab0450 ---------A   06260  PRINT"# OF UNITS TO TRANSFER ";
    0x5e8975ab05c0 ---------A   06270  INPUT X3
    0x5e8975ab08a0 ---------A   06280  ON X1 GOTO 6290,6340
    0x5e8975ab0b40 ---------A T 06290  IF E1>X3 THEN 6320
    0x5e8975ab0cb0 ---------A T 06300  PRINT"INSUFFICIENT POWER AVAILABLE"
    0x5e8975ab0d30 ---------A   06310  GOTO 3430
    0x5e8975ab1080 ---------A T 06320  E1=E1-X3
    0x5e8975ab10f0 ---------A   06330  GOTO 6360
    0x5e8975ab1360 ---------A T 06340  IF X3>E3 THEN 6300
    0x5e8975ab16d0 ---------A   06350  E3=E3+X3
    0x5e8975ab1aa0 ---------A T 06360  ON X2-1 GOTO 6370,6390
    0x5e8975ab1e00 ---------A T 06370  E3=E3+X3
    0x5e8975ab1e70 ---------A   06380  GOTO 6410
    0x5e8975ab21c0 ---------A T 06390  E4=E4+X3
    0x5e8975ab2520 ---------A   06400  Q8=Q8+X3
    0x5e8975ab2670 ---------A T 06410  PRINT"TRANSFER COMPLETE"
    0x5e8975ab2720 ---------A   06420  GOTO 3430
    0x5e8975ab2ac0 ---------A T 06430  PRINT" H -- HYPERDRIVE JUMP";TAB(37);"COURSE GUIDE"
    0x5e8975ab2c60 ---------A   06440  PRINT" SS - STAR-SPEED MANEUVER"
    0x5e8975ab3030 ---------A   06450  PRINT" L -- LONG RANGE SENSOR SCAN";TAB(40);"4  3  2"
    0x5e8975ab3400 ---------A   06460  PRINT" S -- SHORT RANGE SENSOR SCAN";TAB(42);"\|/"
    0x5e8975ab37c0 ---------A   06470  PRINT" V -- LAUNCH VIPERS";TAB(40);"5 -*- 1"
    0x5e8975ab3b90 ---------A   06480  PRINT" M -- FIRE MISSILE";TAB(42);"/|\"
    0x5e8975ab3f50 ---------A   06490  PRINT" A -- ALLOCATE ENERGY UNITS";TAB(40);"6  7  8"
    0x5e8975ab40d0 ---------A   06500  PRINT" G -- GENERATE POWER"
    0x5e8975ab4260 ---------A   06510  PRINT" R -- RECALL LONG RANGE SENSOR INFORMATION"
    0x5e8975ab43f0 ---------A   06520  PRINT" C -- THIS LIST OF COMMANDS"
    0x5e8975ab4560 ---------A   06530  PRINT" Q -- QUIT GAME(ABNORMAL ENDING)"
    0x5e8975ab45f0 ---------A   06540  GOTO 3430
    0x5e8975af5700 ----------   06550  PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5e8975af5760 ----------   06560  PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5e8975ad5d10 ----------   06570  GOTO 7070
    0x5e8975ac3b90 ---------A T 06580  P4=P4-(T-T9)/2
    0x5e8975ac3de0 ---------A   06590  IF P4>10THEN6660
    0x5e8975ac3e90 ---------A   06600  PRINT
    0x5e8975ac4040 ---------A   06610  PRINT"EVEN THOUGH THE CYLONS HAVE BEEN DESTROYED, AND THE"
    0x5e8975ac41e0 ---------A   06620  PRINT"EASTERN ALLIANCE HAS FLED, YOU HAVE BEEN TOO DAMAGING"
    0x5e8975ac4360 ---------A   06630  PRINT"TO TERRAN CIVILIZATIONS TO WIN."
    0x5e8975ac44d0 ---------A   06640  PRINT"..... CALL IT A DRAW ....."
    0x5e8975ac4550 ---------A   06650  GOTO7070
    0x5e8975ac45d0 ---------A T 06660  PRINT
    0x5e8975ac4770 ---------A   06670  PRINT"CONGRATULATIONS, COMMANDER."
    0x5e8975ac4920 ---------A   06680  PRINT"THE CYLONS HAVE BEEN DESTROYED, AND THE EASTERN"
    0x5e8975ac4ab0 ---------A   06690  PRINT"ALLIANCE HAS FLED, MAKING THIS A GREAT VICTORY"
    0x5e8975ac4c20 ---------A   06700  PRINT"FOR THE TERRAN EMPIRE."
    0x5e8975ac4cc0 ---------A T 06710  PRINT
    0x5e8975ac4e30 ---------A   06720  PRINT"A RATING GREATER THAN 10 IS GOOD!"
    0x5e8975ac5400 ---------A   06730  P4=P4-(T-T9)/2
    0x5e8975af57c0 ---------A   06740  PRINT"=RATING= ";P4
    0x5e8975af5820 ---------A   06750  PRINT
    0x5e8975af5880 ---------A   06760  PRINT"PLEASE TYPE* DONE"
    0x5e8975af58e0 ---------A   06770  STOP
    0x5e8975ac5b40 ---------A T 06780  IF C$="GREEN" THEN6810
    0x5e8975ac5dc0 ---------A   06790  IF C$="YELLOW" THEN6810
    0x5e8975ac5e40 ---------A   06800  GOTO6860
    0x5e8975ac6170 ---------A T 06810  E1=E1+500
    0x5e8975ac64a0 ---------A   06820  T=T+.5
    0x5e8975ac6720 ---------A   06830  IF T>T0 THEN7040
    0x5e8975ac6880 ---------A   06840  PRINT"POWER GENERATED"
    0x5e8975ac6910 ---------A   06850  GOTO3430
    0x5e8975ac6a70 ---------A T 06860  PRINT"IMPOSSIBLE UNDER RED ALERT"
    0x5e8975ac6af0 ---------A   06870  GOTO3430
    0x5e8975ac6b60 ---------A T 06880  PRINT
    0x5e8975ac6e40 ---------A   06890  FOR X6=1TO10
    0x5e8975ac7130 ---------A   06900  FOR X7=1TO10
    0x5e8975ac76d0 ---------A   06910  PRINT S(X6,X7);TAB(X7*5);
    0x5e8975ac7810 ---------A   06920  NEXT X7
    0x5e8975ac78a0 ---------A   06930  PRINT
    0x5e8975ac79e0 ---------A   06940  NEXT X6
    0x5e8975ac7a70 ---------A   06950  GOTO3430
    0x5e8975ac7ac0 ---------A   06960  END
    0x5e8975af5a60 ----------   06970  PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5e8975af5ac0 ----------   06980  PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5e8975ad5fe0 ----------   06990  GOTO 7070
    0x5e8975af5b20 ----------   07000  PRINT"=RATING= ";P4
    0x5e8975af5b80 ----------   07010  PRINT
    0x5e8975af5be0 ----------   07020  PRINT"PLEASE TYPE* DONE"
    0x5e8975af5c40 ----------   07030  STOP
    0x5e8975ac0750 ---------A T 07040  PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5e8975ac0bc0 ---------A   07050  PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5e8975ac0c60 ---------A   07060  GOTO 7070
    0x5e8975ac5650 ---------A T 07070  PRINT"=RATING= ";P4
    0x5e8975ac56e0 ---------A   07080  PRINT
    0x5e8975ac5840 ---------A   07090  PRINT"PLEASE TYPE* DONE"
    0x5e8975ac58a0 ---------A   07100  STOP
    0x5e8975a89240 ---------B G 07110  X1=-SIN((C-1)*.785398)
    0x5e8975a89790 ---------B   07120  X2=COS((C-1)*.785398)
    0x5e8975ad5ea0 ---------B   07130  GOTO 07140
    0x5e8975af5940 ---------B T 07140  RETURN
    0x5e8975a89ae0 ---------C B 07150  X1=FNR(-1)
    0x5e8975a89de0 ---------C   07160  X2=FNR(-1)
    0x5e8975a8a1f0 ---------C   07170  IF Q(X1,X2)<>1 THEN 7150
    0x5e8975aee310 ---------C   07180  GOTO 07190
    0x5e8975af59c0 ---------C T 07190  RETURN
    0x5e8975ab4880 ---------D G 07200  IF C$<>"ORBITING" THEN 7230
    0x5e8975ab4a00 ---------D   07210  PRINT"PLANETARY DEFENSES PROTECT YOUR BATTLESTAR"
    0x5e8975aee2c0 ---------D   07220  GOTO 07730
    0x5e8975ab4cd0 ---------D T 07230  IF Z9=0THEN7250
    0x5e8975ab4e40 ---------D   07240  PRINT"THE FORCE IS WITH YOU !"
    0x5e8975ab5080 ---------D T 07250  C$="GREEN"
    0x5e8975ab5350 ---------D   07260  Q9=0
    0x5e8975ab55a0 ---------D   07270  IF N5=0 THEN 7470
    0x5e8975ab58b0 ---------D   07280  FOR I=1 TO N5
    0x5e8975ab5cb0 ---------D   07290  IF K(I,3)=0 THEN 7460
    0x5e8975ab5f00 ---------D   07300  C$="RED"
    0x5e8975ab6650 ---------D   07310  IF FND(K(I,1),K(I,2))>3 THEN 7410
    0x5e8975ab6b50 ---------D   07320  E4=E4-K(I,3)
    0x5e8975ab7070 ---------D   07330  Q9=Q9+K(I,3)
    0x5e8975ab7940 ---------D   07340  PRINT K(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975ab80e0 ---------D T 07350  PRINT"FROM CYLON AT SECTOR";K(I,1);"-";K(I,2)
    0x5e8975ab8340 ---------D   07360  IF E4>0THEN7380
    0x5e8975ab83d0 ---------D   07370  GOSUB 7840
    0x5e8975ab8630 ---------D T 07380  IF E4>400 THEN 7400
    0x5e8975ab87a0 ---------D   07390  PRINT"LASER CANNONS FAILING !"
    0x5e8975ab8830 ---------D T 07400  GOTO 7460
    0x5e8975ab9460 ---------D T 07410  X1=K(I,3)/(FND(K(I,1),K(I,2))/3)^2
    0x5e8975ab97b0 ---------D   07420  E4=E4-X1
    0x5e8975ab9b20 ---------D   07430  Q9=Q9+X1
    0x5e8975aba230 ---------D   07440  PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975aba2b0 ---------D   07450  GOTO 7350
    0x5e8975aba3e0 ---------D T 07460  NEXT I
    0x5e8975aba650 ---------D T 07470  IF N6=0 THEN 7670
    0x5e8975aba960 ---------D   07480  FOR I=1 TO N6
    0x5e8975abad60 ---------D   07490  IF R(I,3)=0THEN7660
    0x5e8975abafb0 ---------D   07500  C$="RED"
    0x5e8975abb700 ---------D   07510  IF FND(R(I,1),R(I,2))>3 THEN 7610
    0x5e8975abbc00 ---------D   07520  E4=E4-R(I,3)
    0x5e8975abc120 ---------D   07530  Q9=Q9+R(I,3)
    0x5e8975abc9f0 ---------D   07540  PRINT R(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975abd1a0 ---------D T 07550  PRINT"FROM E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
    0x5e8975abd400 ---------D   07560  IF E4>0 THEN 7580
    0x5e8975abd490 ---------D   07570  GOSUB 7840
    0x5e8975abd6f0 ---------D T 07580  IF E4>400 THEN 7600
    0x5e8975abd860 ---------D   07590  PRINT"LASER CANNONS FAILING !"
    0x5e8975abd8f0 ---------D T 07600  GOTO 7660
    0x5e8975abe520 ---------D T 07610  X1=R(I,3)/(FND(R(I,1),R(I,2))/3)^2
    0x5e8975abe870 ---------D   07620  E4=E4-X1
    0x5e8975abebe0 ---------D   07630  Q9=Q9+X1
    0x5e8975abf2f0 ---------D   07640  PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
    0x5e8975abf370 ---------D   07650  GOTO 7550
    0x5e8975abf4a0 ---------D T 07660  NEXT I
    0x5e8975abf730 ---------D T 07670  IF E1<=0THEN7740
    0x5e8975abfd90 ---------D   07680  PRINT ((Q8-E4)/Q8)*100;"PERCENT DAMAGE.";
    0x5e8975ac0100 ---------D   07690  PRINT"          LASERS FIRING AT";E4;"."
    0x5e8975ac03b0 ---------D   07700  IF Q9<E4 THEN 7720
    0x5e8975ac0530 ---------D   07710  PRINT"COMMANDER, WE CANNOT WITHSTAND ANOTHER ATTACK !!"
    0x5e8975ad6030 ---------D T 07720  GOTO 07730
    0x5e8975af5c80 ---------D T 07730  RETURN
    0x5e8975af5ec0 ---------D T 07740  PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5e8975af5f60 ---------D   07750  PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5e8975ad1fd0 ---------D   07760  GOTO 7770
    0x5e8975af5fc0 ---------D T 07770  PRINT"=RATING= ";P4
    0x5e8975af6020 ---------D   07780  PRINT
    0x5e8975af60a0 ---------D   07790  PRINT"PLEASE TYPE* DONE"
    0x5e8975af6100 ---------D   07800  STOP
    0x5e8975af61a0 ---------E T 07810  PRINT"*** YOU HAVE BEEN DEFEATED ***"
    0x5e8975af6240 ---------E   07820  PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    0x5e8975acbfe0 ---------E   07830  GOTO 7990
    0x5e8975ac0dc0 ---------E G 07840  PRINT"DRAWING ENERGY FOR LASER CANNONS"
    0x5e8975ac1230 ---------E   07850  Q8=Q8-E4+1
    0x5e8975ac16c0 ---------E   07860  IF -E4*1.5+1>E3 THEN 7910
    0x5e8975ac1830 ---------E   07870  PRINT".....TAPPING VIPER FUEL RESERVES"
    0x5e8975ac1d90 ---------E   07880  E3=E3-1+E4*1.25
    0x5e8975ac1fa0 ---------E   07890  E4=1
    0x5e8975ad5f90 ---------E   07900  GOTO 08030
    0x5e8975ac25b0 ---------E T 07910  IF -E4*1.5+1>E1+E3 THEN 7810
    0x5e8975ac2740 ---------E   07920  PRINT"....> VIPER FUEL EXHAUSTED"
    0x5e8975ac28b0 ---------E   07930  PRINT".......TAPPING HYPERDRIVE COILS"
    0x5e8975ac2c10 ---------E   07940  E4=E4+E3
    0x5e8975ac2e20 ---------E   07950  E3=0
    0x5e8975ac3370 ---------E   07960  E1=E1-1+E4*1.66
    0x5e8975ac3580 ---------E   07970  E4=1
    0x5e8975ad5f40 ---------E   07980  GOTO 08030
    0x5e8975af62c0 ---------E T 07990  PRINT"=RATING= ";P4
    0x5e8975af6320 ---------E   08000  PRINT
    0x5e8975af63a0 ---------E   08010  PRINT"PLEASE TYPE* DONE"
    0x5e8975af6400 ---------E   08020  STOP
    0x5e8975af5d20 ---------E T 08030  RETURN
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
char*  A_str;                                     // Basic: A$ 
int    B8_int;                                    // Basic: B8 
int    B9_int;                                    // Basic: B9 
int    C_int;                                     // Basic: C 
char*  C_str;                                     // Basic: C$ 
char*  D_str_arr[10];                             // Basic: D$ 
int    E1_int;                                    // Basic: E1 
int    E2_int;                                    // Basic: E2 
int    E3_int;                                    // Basic: E3 
int    E4_int;                                    // Basic: E4 
int    F9_int;                                    // Basic: F9 
int    FND_int_arr[10];                           // Basic: FND 
int    FNR_int_arr[10];                           // Basic: FNR 
int    G_int_arr[10][10];                         // Basic: G 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int_arr[5][3];                           // Basic: K 
int    N_int_arr[10];                             // Basic: N 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    N3_int;                                    // Basic: N3 
int    N4_int;                                    // Basic: N4 
int    N5_int;                                    // Basic: N5 
int    N6_int;                                    // Basic: N6 
int    N7_int;                                    // Basic: N7 
int    ONE_int_arr[10];                           // Basic: ONE 
int    P_int;                                     // Basic: P 
int    P4_int;                                    // Basic: P4 
int    Q_int_arr[10][10];                         // Basic: Q 
char*  Q_str_arr[7];                              // Basic: Q$ 
int    Q1_int;                                    // Basic: Q1 
int    Q2_int;                                    // Basic: Q2 
int    Q8_int;                                    // Basic: Q8 
int    Q9_int;                                    // Basic: Q9 
int    R_int_arr[2][3];                           // Basic: R 
int    S_int_arr[10][10];                         // Basic: S 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    T_int;                                     // Basic: T 
int    T0_int;                                    // Basic: T0 
int    T9_int;                                    // Basic: T9 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    X1_int;                                    // Basic: X1 
int    X2_int;                                    // Basic: X2 
int    X3_int;                                    // Basic: X3 
int    X4_int;                                    // Basic: X4 
int    X5_int;                                    // Basic: X5 
int    X6_int;                                    // Basic: X6 
int    X7_int;                                    // Basic: X7 
int    X8_int;                                    // Basic: X8 
int    X9_int;                                    // Basic: X9 
int    Y_int;                                     // Basic: Y 
int    Z9_int;                                    // Basic: Z9 
int    ZER_int_arr[10];                           // Basic: ZER 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_07110();
void Routine_07150();
void Routine_07200();
void Routine_07840();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused X1,X2
int FND(int X1,int X2){
    int rtn=SQR(IPower((S1_int-X1_int),2)+IPower((S2_int-X2_int),2));
    return(rtn);
}

#pragma argsused X1
int FNR(int X1){
    int rtn=INT(RND(X1_int)*10)+1;
    return(rtn);
}

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

void Routine_07110(){
    // 07110 X1=-SIN((C-1)*.785398)
    X1_int = -SIN((C_int-1)*0.79);
    // 07120 X2=COS((C-1)*.785398)
    X2_int = COS((C_int-1)*0.79);
    // 07130 GOTO 07140
    goto Lbl_07140;

  Lbl_07140:
    // 07140 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_07150(){

  Lbl_07150:
    // 07150 X1=FNR(-1)
    X1_int = FNR_int_arr[-1];
    // 07160 X2=FNR(-1)
    X2_int = FNR_int_arr[-1];
    // 07170 IF Q(X1,X2)<>1 THEN 7150
    if(Q_int_arr[X1_int][X2_int]!=1)goto Lbl_07150;
    // 07180 GOTO 07190
    goto Lbl_07190;

  Lbl_07190:
    // 07190 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_07200(){
    // 07200 IF C$<>"ORBITING" THEN 7230
    if(strcmp(C_str,"ORBITING")!=0)goto Lbl_07230;
    // 07210 PRINT"PLANETARY DEFENSES PROTECT YOUR BATTLESTAR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLANETARY DEFENSES PROTECT YOUR BATTLESTAR");strcat(buf,"\n");fputs(buf,fh); };
    // 07220 GOTO 07730
    goto Lbl_07730;

  Lbl_07230:
    // 07230 IF Z9=0THEN7250
    if(Z9_int==0)goto Lbl_07250;
    // 07240 PRINT"THE FORCE IS WITH YOU !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE FORCE IS WITH YOU !");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_07250:
    // 07250 C$="GREEN"
    GLBpStr="GREEN";
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 07260 Q9=0
    Q9_int = 0;
    // 07270 IF N5=0 THEN 7470
    if(N5_int==0)goto Lbl_07470;
    // 07280 FOR I=1 TO N5
    for(I_int=1;I_int<=N5_int;I_int++){
        // 07290 IF K(I,3)=0 THEN 7460
        if(K_int_arr[I_int][3]==0)goto Lbl_07460;
        // 07300 C$="RED"
        GLBpStr="RED";
        C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 07310 IF FND(K(I,1),K(I,2))>3 THEN 7410
        if(FND_int_arr[K_int_arr[I_int][1]][K_int_arr[I_int][2]]>3)goto Lbl_07410;
        // 07320 E4=E4-K(I,3)
        E4_int = E4_int-K_int_arr[I_int][3];
        // 07330 Q9=Q9+K(I,3)
        Q9_int = Q9_int+K_int_arr[I_int][3];
        // 07340 PRINT K(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,K_int_arr[I_int][3]);strcat(buf,"UNIT HIT ON LASER"); b2c_INT(buf,INT(RND(-1)*10)+1);fputs(buf,fh); };

  Lbl_07350:
        // 07350 PRINT"FROM CYLON AT SECTOR";K(I,1);"-";K(I,2)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FROM CYLON AT SECTOR"); b2c_INT(buf,K_int_arr[I_int][1]);strcat(buf,"-"); b2c_INT(buf,K_int_arr[I_int][2]);strcat(buf,"\n");fputs(buf,fh); };
        // 07360 IF E4>0THEN7380
        if(E4_int>0)goto Lbl_07380;
        // 07370 GOSUB 7840
        Routine_07840();

  Lbl_07380:
        // 07380 IF E4>400 THEN 7400
        if(E4_int>400)goto Lbl_07400;
        // 07390 PRINT"LASER CANNONS FAILING !"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LASER CANNONS FAILING !");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_07400:
        // 07400 GOTO 7460
        goto Lbl_07460;

  Lbl_07410:
        // 07410 X1=K(I,3)/(FND(K(I,1),K(I,2))/3)^2
        X1_int = K_int_arr[I_int][3]/IPower((FND_int_arr[K_int_arr[I_int][1]][K_int_arr[I_int][2]]/3),2);
        // 07420 E4=E4-X1
        E4_int = E4_int-X1_int;
        // 07430 Q9=Q9+X1
        Q9_int = Q9_int+X1_int;
        // 07440 PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,X1_int);strcat(buf,"UNIT HIT ON LASER"); b2c_INT(buf,INT(RND(-1)*10)+1);fputs(buf,fh); };
        // 07450 GOTO 7350
        goto Lbl_07350;

  Lbl_07460:
        // 07460 NEXT I
        int dummy_7460=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_07470:
    // 07470 IF N6=0 THEN 7670
    if(N6_int==0)goto Lbl_07670;
    // 07480 FOR I=1 TO N6
    for(I_int=1;I_int<=N6_int;I_int++){
        // 07490 IF R(I,3)=0THEN7660
        if(R_int_arr[I_int][3]==0)goto Lbl_07660;
        // 07500 C$="RED"
        GLBpStr="RED";
        C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 07510 IF FND(R(I,1),R(I,2))>3 THEN 7610
        if(FND_int_arr[R_int_arr[I_int][1]][R_int_arr[I_int][2]]>3)goto Lbl_07610;
        // 07520 E4=E4-R(I,3)
        E4_int = E4_int-R_int_arr[I_int][3];
        // 07530 Q9=Q9+R(I,3)
        Q9_int = Q9_int+R_int_arr[I_int][3];
        // 07540 PRINT R(I,3);"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,R_int_arr[I_int][3]);strcat(buf,"UNIT HIT ON LASER"); b2c_INT(buf,INT(RND(-1)*10)+1);fputs(buf,fh); };

  Lbl_07550:
        // 07550 PRINT"FROM E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FROM E.A.FLEET AT SECTOR"); b2c_INT(buf,R_int_arr[I_int][1]);strcat(buf,"-"); b2c_INT(buf,R_int_arr[I_int][2]);strcat(buf,"\n");fputs(buf,fh); };
        // 07560 IF E4>0 THEN 7580
        if(E4_int>0)goto Lbl_07580;
        // 07570 GOSUB 7840
        Routine_07840();

  Lbl_07580:
        // 07580 IF E4>400 THEN 7600
        if(E4_int>400)goto Lbl_07600;
        // 07590 PRINT"LASER CANNONS FAILING !"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LASER CANNONS FAILING !");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_07600:
        // 07600 GOTO 7660
        goto Lbl_07660;

  Lbl_07610:
        // 07610 X1=R(I,3)/(FND(R(I,1),R(I,2))/3)^2
        X1_int = R_int_arr[I_int][3]/IPower((FND_int_arr[R_int_arr[I_int][1]][R_int_arr[I_int][2]]/3),2);
        // 07620 E4=E4-X1
        E4_int = E4_int-X1_int;
        // 07630 Q9=Q9+X1
        Q9_int = Q9_int+X1_int;
        // 07640 PRINT X1;"UNIT HIT ON LASER";INT(RND(-1)*10)+1;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,X1_int);strcat(buf,"UNIT HIT ON LASER"); b2c_INT(buf,INT(RND(-1)*10)+1);fputs(buf,fh); };
        // 07650 GOTO 7550
        goto Lbl_07550;

  Lbl_07660:
        // 07660 NEXT I
        int dummy_7660=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_07670:
    // 07670 IF E1<=0THEN7740
    if(E1_int<=0)goto Lbl_07740;
    // 07680 PRINT ((Q8-E4)/Q8)*100;"PERCENT DAMAGE.";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,((Q8_int-E4_int)/Q8_int)*100);strcat(buf,"PERCENT DAMAGE.");fputs(buf,fh); };
    // 07690 PRINT"          LASERS FIRING AT";E4;"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"          LASERS FIRING AT"); b2c_INT(buf,E4_int);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 07700 IF Q9<E4 THEN 7720
    if(Q9_int<E4_int)goto Lbl_07720;
    // 07710 PRINT"COMMANDER, WE CANNOT WITHSTAND ANOTHER ATTACK !!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMMANDER, WE CANNOT WITHSTAND ANOTHER ATTACK !!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_07720:
    // 07720 GOTO 07730
    goto Lbl_07730;

  Lbl_07730:
    // 07730 RETURN
    return;
};

  Lbl_07740:
    // 07740 PRINT"*** YOU HAVE BEEN DEFEATED ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*** YOU HAVE BEEN DEFEATED ***");strcat(buf,"\n");fputs(buf,fh); };
    // 07750 PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,N2_int);strcat(buf,"CYLON BASE-STARS AND"); b2c_INT(buf,N3_int);strcat(buf,"E.A.FLEETS REMAIN !!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 07760 GOTO 7770
    goto Lbl_07770;

  Lbl_07770:
    // 07770 PRINT"=RATING= ";P4
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"=RATING= "); b2c_INT(buf,P4_int);strcat(buf,"\n");fputs(buf,fh); };
    // 07780 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 07790 PRINT"PLEASE TYPE* DONE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE TYPE* DONE");strcat(buf,"\n");fputs(buf,fh); };
    // 07800 STOP
    exit(1);


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

  Lbl_07810:
    // 07810 PRINT"*** YOU HAVE BEEN DEFEATED ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*** YOU HAVE BEEN DEFEATED ***");strcat(buf,"\n");fputs(buf,fh); };
    // 07820 PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,N2_int);strcat(buf,"CYLON BASE-STARS AND"); b2c_INT(buf,N3_int);strcat(buf,"E.A.FLEETS REMAIN !!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 07830 GOTO 7990
    goto Lbl_07990;

void Routine_07840(){
    // 07840 PRINT"DRAWING ENERGY FOR LASER CANNONS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DRAWING ENERGY FOR LASER CANNONS");strcat(buf,"\n");fputs(buf,fh); };
    // 07850 Q8=Q8-E4+1
    Q8_int = Q8_int-E4_int+1;
    // 07860 IF -E4*1.5+1>E3 THEN 7910
    if(E4_int*1.5+1>E3_int)goto Lbl_07910;
    // 07870 PRINT".....TAPPING VIPER FUEL RESERVES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".....TAPPING VIPER FUEL RESERVES");strcat(buf,"\n");fputs(buf,fh); };
    // 07880 E3=E3-1+E4*1.25
    E3_int = E3_int-1+E4_int*1.25;
    // 07890 E4=1
    E4_int = 1;
    // 07900 GOTO 08030
    goto Lbl_08030;

  Lbl_07910:
    // 07910 IF -E4*1.5+1>E1+E3 THEN 7810
    if(E4_int*1.5+1>E1_int+E3_int)goto Lbl_07810;
    // 07920 PRINT"....> VIPER FUEL EXHAUSTED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"....> VIPER FUEL EXHAUSTED");strcat(buf,"\n");fputs(buf,fh); };
    // 07930 PRINT".......TAPPING HYPERDRIVE COILS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".......TAPPING HYPERDRIVE COILS");strcat(buf,"\n");fputs(buf,fh); };
    // 07940 E4=E4+E3
    E4_int = E4_int+E3_int;
    // 07950 E3=0
    E3_int = 0;
    // 07960 E1=E1-1+E4*1.66
    E1_int = E1_int-1+E4_int*1.66;
    // 07970 E4=1
    E4_int = 1;
    // 07980 GOTO 08030
    goto Lbl_08030;

  Lbl_07990:
    // 07990 PRINT"=RATING= ";P4
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"=RATING= "); b2c_INT(buf,P4_int);strcat(buf,"\n");fputs(buf,fh); };
    // 08000 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 08010 PRINT"PLEASE TYPE* DONE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE TYPE* DONE");strcat(buf,"\n");fputs(buf,fh); };
    // 08020 STOP
    exit(1);

  Lbl_08030:
    // 08030 RETURN
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
    // 01020 REM Variable List
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WELCOME TO ** BATTLESTAR **          (BY RWMELHUISH)");strcat(buf,"\n");fputs(buf,fh); };
    // 01560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01580 FOR I=1 TO 7
    for(I_int=1;I_int<=7;I_int++){
        // 01590 READ Q$(I)
        Q_str_arr[I_int] = Get_Data_String();
        // 01600 NEXT I
        int dummy_1600=0; // Ignore this line.
    }; // End-For(I_int)
    // 01610 DATA ".","*",B,P,C,E,O
    // 01620 DIM D$(10)
    // 01630 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 01640 READ D$(I)
        D_str_arr[I_int] = Get_Data_String();
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
    T9_int = T_int = T0_int-(60-3*ABS(FNR_int_arr[-1]-5));
    // 01720 E1=1540
    E1_int = 1250;
    // 01730 E2=300
    E2_int = 300;
    // 01740 E3=2000
    E3_int = 2000;
    // 01750 Q8=E4=1540
    E4_int = Q8_int = 1250;
    // 01760 P=13
    P_int = 13;
    // 01770 B8=B9=-1
    B9_int = B8_int = -1;
    // 01780 MAT G=ZER
    for(int d0=0;d0<9;d0++){
        for(int d1=0;d1<9;d1++){
            G_int_arr[0][d0][d1]=0;
        }
    }
    // 01790 Q1=FNR(-1)
    Q1_int = FNR_int_arr[-1];
    // 01800 Q2=FNR(-1)
    Q2_int = FNR_int_arr[-1];
    // 01810 S1=FNR(-1)
    S1_int = FNR_int_arr[-1];
    // 01820 S2=FNR(-1)
    S2_int = FNR_int_arr[-1];
    // 01830 N1=N2=N3=F9=P4=0
    P4_int = F9_int = N3_int = N2_int = N1_int = 0;
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
            N7_int = ABS(FNR_int_arr[-1]-1);
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
            G_int_arr[I_int][J_int] = N6_int*1000+N5_int*100+N4_int*10+N7_int;
            // 02140 IF RND(-1)>.45 THEN 2160
            if(RND(-1)>0.45)goto Lbl_02160;
            // 02150 G(I,J)=G(I,J)+.1
            G_int_arr[I_int][J_int] = G_int_arr[I_int][J_int]+0.1;

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
    I_int = FNR_int_arr[-1];
    // 02200 J=FNR(-1)
    J_int = FNR_int_arr[-1];
    // 02210 G(I,J)=G(I,J)+10
    G_int_arr[I_int][J_int] = G_int_arr[I_int][J_int]+10;
    // 02220 N1=1
    N1_int = 1;

  Lbl_02230:
    // 02230 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02240 PRINT N2;"CYLONS HAVE PENETRATED TERRAN SPACE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,N2_int);strcat(buf,"CYLONS HAVE PENETRATED TERRAN SPACE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02250 PRINT ".....THEY ARE ASSISTED BY THE EASTERN ALLIANCE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".....THEY ARE ASSISTED BY THE EASTERN ALLIANCE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02260 PRINT "ONLY";N1;"TERRAN PLANET";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONLY"); b2c_INT(buf,N1_int);strcat(buf,"TERRAN PLANET");fputs(buf,fh); };
    // 02270 IF N1<2 THEN 2300
    if(N1_int<2)goto Lbl_02300;
    // 02280 PRINT "S HAVE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"S HAVE");fputs(buf,fh); };
    // 02290 GOTO 2310
    goto Lbl_02310;

  Lbl_02300:
    // 02300 PRINT" HAS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," HAS");fputs(buf,fh); };

  Lbl_02310:
    // 02310 PRINT" SURVIVED THE INITIAL ASSAULT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," SURVIVED THE INITIAL ASSAULT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02320 PRINT"YOU HAVE UNTIL CENTARE";T0;"TO DEFEAT THE CYLONS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE UNTIL CENTARE"); b2c_INT(buf,T0_int);strcat(buf,"TO DEFEAT THE CYLONS");strcat(buf,"\n");fputs(buf,fh); };
    // 02330 PRINT"AND DRIVE AWAY THE EASTERN ALLIANCE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND DRIVE AWAY THE EASTERN ALLIANCE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02350 PRINT".....REMEMBER :"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".....REMEMBER :");strcat(buf,"\n");fputs(buf,fh); };
    // 02360 PRINT".....DO NOT RUN INTO ANY BLACK HOLES....."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".....DO NOT RUN INTO ANY BLACK HOLES.....");strcat(buf,"\n");fputs(buf,fh); };
    // 02370 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02380 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02390 C$="WHO CARES"
    GLBpStr="WHO CARES";
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_02400:
    // 02400 PRINT" CONTINUE(C)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," CONTINUE(C)");fputs(buf,fh); };
    // 02410 INPUT A$
    // Start of Basic INPUT statement 02410
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02410
    // 02420 IF A$<>"C" THEN 2400
    if(strcmp(A_str,"C")!=0)goto Lbl_02400;

  Lbl_02430:
    // 02430 IF N2=0 THEN 6580
    if(N2_int==0)goto Lbl_06580;
    // 02440 N6=INT(INT(G(Q1,Q2))/1000)
    N6_int = INT(INT(G_int_arr[Q1_int][Q2_int])/1000);
    // 02450 N5=INT(INT(G(Q1,Q2))/100)-N6*10
    N5_int = INT(INT(G_int_arr[Q1_int][Q2_int])/100)-N6_int*10;
    // 02460 N4=INT(INT(G(Q1,Q2))/10)-N6*100-N5*10
    N4_int = INT(INT(G_int_arr[Q1_int][Q2_int])/10)-N6_int*100-N5_int*10;
    // 02470 N7=INT(G(Q1,Q2))-N6*1000-N5*100-N4*10
    N7_int = INT(G_int_arr[Q1_int][Q2_int])-N6_int*1000-N5_int*100-N4_int*10;
    // 02480 MAT Q=CON
    for(int d0=0;d0<9;d0++){
        for(int d1=0;d1<9;d1++){
            Q_int_arr[0][d0][d1]=0;
        }
    }
    // 02490 Q(S1,S2)=3
    Q_int_arr[S1_int][S2_int] = 3;
    // 02500 IF F9<>1 THEN 2520
    if(F9_int!=1)goto Lbl_02520;
    // 02510 Q(B9,B8)=4
    Q_int_arr[B9_int][B8_int] = 4;

  Lbl_02520:
    // 02520 IF N5=0 THEN 2710
    if(N5_int==0)goto Lbl_02710;
    // 02530 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02540 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02550 PRINT"COMPUTER LASERS ACTIVATING  ** RED ALERT **"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER LASERS ACTIVATING  ** RED ALERT **");strcat(buf,"\n");fputs(buf,fh); };
    // 02560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02570 PRINT"SCANNERS SHOW";N5;"CYLON";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SCANNERS SHOW"); b2c_INT(buf,N5_int);strcat(buf,"CYLON");fputs(buf,fh); };
    // 02580 IF N5<2 THEN 2600
    if(N5_int<2)goto Lbl_02600;
    // 02590 PRINT"S";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"S");fputs(buf,fh); };

  Lbl_02600:
    // 02600 PRINT"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 02610 FOR I=1 TO N5
    for(I_int=1;I_int<=N5_int;I_int++){
        // 02620 GOSUB 7150
        Routine_07150();
        // 02630 K(I,1)=X1
        K_int_arr[I_int][1] = X1_int;
        // 02640 K(I,2)=X2
        K_int_arr[I_int][2] = X2_int;
        // 02650 IF F9=1 THEN 2690
        if(F9_int==1)goto Lbl_02690;
        // 02660 K(I,3)=175+RND(0)*51
        K_int_arr[I_int][3] = 175+RND(0)*51;
        // 02670 IF Z9<>1THEN2690
        if(Z9_int!=1)goto Lbl_02690;
        // 02680 K(I,3)=K(I,3)/2
        K_int_arr[I_int][3] = K_int_arr[I_int][3]/2;

  Lbl_02690:
        // 02690 Q(X1,X2)=5
        Q_int_arr[X1_int][X2_int] = 5;
        // 02700 NEXT I
        int dummy_2700=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_02710:
    // 02710 IF N6=0 THEN 2820
    if(N6_int==0)goto Lbl_02820;
    // 02720 FOR I=1 TO N6
    for(I_int=1;I_int<=N6_int;I_int++){
        // 02730 GOSUB 7150
        Routine_07150();
        // 02740 R(I,1)=X1
        R_int_arr[I_int][1] = X1_int;
        // 02750 R(I,2)=X2
        R_int_arr[I_int][2] = X2_int;
        // 02760 IF F9=1 THEN 2800
        if(F9_int==1)goto Lbl_02800;
        // 02770 R(I,3)=175+RND(0)*51
        R_int_arr[I_int][3] = 175+RND(0)*51;
        // 02780 IF Z9<>1THEN2800
        if(Z9_int!=1)goto Lbl_02800;
        // 02790 R(I,3)=R(I,3)/1.5
        R_int_arr[I_int][3] = R_int_arr[I_int][3]/1.5;

  Lbl_02800:
        // 02800 Q(X1,X2)=6
        Q_int_arr[X1_int][X2_int] = 6;
        // 02810 NEXT I
        int dummy_2810=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_02820:
    // 02820 IF N7=0 THEN 2870
    if(N7_int==0)goto Lbl_02870;
    // 02830 FOR I=1 TO N7
    for(I_int=1;I_int<=N7_int;I_int++){
        // 02840 GOSUB 7150
        Routine_07150();
        // 02850 Q(X1,X2)=2
        Q_int_arr[X1_int][X2_int] = 2;
        // 02860 NEXT I
        int dummy_2860=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_02870:
    // 02870 IF N4=0 THEN 2930
    if(N4_int==0)goto Lbl_02930;
    // 02880 IF F9=1 THEN 2930
    if(F9_int==1)goto Lbl_02930;
    // 02890 GOSUB 7150
    Routine_07150();
    // 02900 Q(X1,X2)=4
    Q_int_arr[X1_int][X2_int] = 4;
    // 02910 B9=X1
    B9_int = X1_int;
    // 02920 B8=X2
    B8_int = X2_int;

  Lbl_02930:
    // 02930 IF G(Q1,Q2)<>INT(G(Q1,Q2)) THEN 2960
    if(G_int_arr[Q1_int][Q2_int]!=INT(G_int_arr[Q1_int][Q2_int]))goto Lbl_02960;
    // 02940 GOSUB 7150
    Routine_07150();
    // 02950 Q(X1,X2)=7
    Q_int_arr[X1_int][X2_int] = 7;

  Lbl_02960:
    // 02960 IF N5<>0 THEN 2980
    if(N5_int!=0)goto Lbl_02980;
    // 02970 IF N6=0 THEN 2990
    if(N6_int==0)goto Lbl_02990;

  Lbl_02980:
    // 02980 GOSUB 7200
    Routine_07200();

  Lbl_02990:
    // 02990 IF N4=0 THEN 3040
    if(N4_int==0)goto Lbl_03040;
    // 03000 IF C$<>"ORBITING" THEN 3040
    if(strcmp(C_str,"ORBITING")!=0)goto Lbl_03040;
    // 03010 P=13
    P_int = 13;
    // 03020 E2=300
    E2_int = 300;
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
    if(E1_int>399)goto Lbl_03120;
    // 03090 PRINT"HYPERDRIVE COILS LOW.  ** YELLOW ALERT **"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HYPERDRIVE COILS LOW.  ** YELLOW ALERT **");strcat(buf,"\n");fputs(buf,fh); };
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
    // 03130 IF E1<1 THEN 7040
    if(E1_int<1)goto Lbl_07040;

  Lbl_03140:
    // 03140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03150 PRINT"==================="
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"===================");strcat(buf,"\n");fputs(buf,fh); };
    // 03160 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 03170 FOR J=1 TO 10
        for(J_int=1;J_int<=10;J_int++){
            // 03180 PRINT Q$(Q(I,J));" ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,Q_str_arr[Q_int_arr[I_int][J_int]]);strcat(buf," ");fputs(buf,fh); };
            // 03190 NEXT J
            int dummy_3190=0; // Ignore this line.
        }; // End-For(J_int)
        // 03200 PRINT"  ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  ");fputs(buf,fh); };
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
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CENTARE          "); b2c_INT(buf,T_int);strcat(buf,"(UNTIL"); b2c_INT(buf,T0_int);strcat(buf,")");strcat(buf,"\n");fputs(buf,fh); };
        // 03230 GOTO 3410
        goto Lbl_03410;

  Lbl_03240:
        // 03240 PRINT"CONDITION         ";C$
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONDITION         "); strcat(buf,C_str);strcat(buf,"\n");fputs(buf,fh); };
        // 03250 GOTO 3410
        goto Lbl_03410;

  Lbl_03260:
        // 03260 PRINT"QUADRANT      ";Q1;"-";Q2
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"QUADRANT      "); b2c_INT(buf,Q1_int);strcat(buf,"-"); b2c_INT(buf,Q2_int);strcat(buf,"\n");fputs(buf,fh); };
        // 03270 GOTO 3410
        goto Lbl_03410;

  Lbl_03280:
        // 03280 PRINT"SECTOR        ";S1;"-";S2
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SECTOR        "); b2c_INT(buf,S1_int);strcat(buf,"-"); b2c_INT(buf,S2_int);strcat(buf,"\n");fputs(buf,fh); };
        // 03290 GOTO 3410
        goto Lbl_03410;

  Lbl_03300:
        // 03300 PRINT"HYPERDRIVE AT    ";E1;"-DEVICE #1"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HYPERDRIVE AT    "); b2c_INT(buf,E1_int);strcat(buf,"-DEVICE #1");strcat(buf,"\n");fputs(buf,fh); };
        // 03310 GOTO 3410
        goto Lbl_03410;

  Lbl_03320:
        // 03320 PRINT"STAR DRIVE AT    ";E2
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"STAR DRIVE AT    "); b2c_INT(buf,E2_int);strcat(buf,"\n");fputs(buf,fh); };
        // 03330 GOTO 3410
        goto Lbl_03410;

  Lbl_03340:
        // 03340 PRINT"VIPER RESERVES   ";E3;"-DEVICE #2"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VIPER RESERVES   "); b2c_INT(buf,E3_int);strcat(buf,"-DEVICE #2");strcat(buf,"\n");fputs(buf,fh); };
        // 03350 GOTO 3410
        goto Lbl_03410;

  Lbl_03360:
        // 03360 PRINT"DEFENSE LASERS   ";E4;"-DEVICE #3"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DEFENSE LASERS   "); b2c_INT(buf,E4_int);strcat(buf,"-DEVICE #3");strcat(buf,"\n");fputs(buf,fh); };
        // 03370 GOTO 3410
        goto Lbl_03410;

  Lbl_03380:
        // 03380 PRINT"MISSILES         ";P
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSILES         "); b2c_INT(buf,P_int);strcat(buf,"\n");fputs(buf,fh); };
        // 03390 GOTO 3410
        goto Lbl_03410;

  Lbl_03400:
        // 03400 PRINT"CYLONS LEFT      ";N2
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CYLONS LEFT      "); b2c_INT(buf,N2_int);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03410:
        // 03410 NEXT I
        int dummy_3410=0; // Ignore this line.
    }; // End-For(I_int)
    // 03420 PRINT"==================="
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"===================");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03430:
    // 03430 PRINT "COMMAND ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMMAND ");fputs(buf,fh); };
    // 03440 INPUT A$
    // Start of Basic INPUT statement 03440
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03440
    // 03450 IF A$="Q" THEN 6710
    if(strcmp(A_str,"Q")==0)goto Lbl_06710;
    // 03460 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 03470 IF A$=D$(I) THEN 3540
        if(strcmp(A_str,D_str_arr[I_int])==0)goto Lbl_03540;
        // 03480 NEXT I
        int dummy_3480=0; // Ignore this line.
    }; // End-For(I_int)
    // 03490 IF A$<>"OBIWAN KENOBI" THEN 6430
    if(strcmp(A_str,"OBIWAN KENOBI")!=0)goto Lbl_06430;
    // 03500 PRINT"YOU HAVE CALLED UPON THE LEGENDARY POWER OF THE FORCE FOR AID."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE CALLED UPON THE LEGENDARY POWER OF THE FORCE FOR AID.");strcat(buf,"\n");fputs(buf,fh); };
    // 03510 PRINT"THE FORCE WEAKENS YOUR ENEMIES !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE FORCE WEAKENS YOUR ENEMIES !");strcat(buf,"\n");fputs(buf,fh); };
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COURSE ");fputs(buf,fh); };
    // 03560 INPUT C
    // Start of Basic INPUT statement 03560
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03560
    // 03570 IF C<1 THEN 3430
    if(C_int<1)goto Lbl_03430;
    // 03580 IF C>=9 THEN 3430
    if(C_int>=9)goto Lbl_03430;
    // 03590 PRINT "HYPERDRIVE JUMP SPEED ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HYPERDRIVE JUMP SPEED ");fputs(buf,fh); };
    // 03600 INPUT W
    // Start of Basic INPUT statement 03600
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
    }; // End of Basic INPUT statement 03600
    // 03610 IF W<1 THEN 3430
    if(W_int<1)goto Lbl_03430;
    // 03620 IF W>8 THEN 3430
    if(W_int>8)goto Lbl_03430;
    // 03630 X5=INT(W*8)
    X5_int = INT(W_int*8);
    // 03640 IF E1<=2*X5 THEN 3800
    if(E1_int<=2*X5_int)goto Lbl_03800;
    // 03650 E1=E1-2*X5
    E1_int = E1_int-2*X5_int;
    // 03660 T=T+SQR(W)
    T_int = T_int+SQR(W_int);
    // 03670 E1=E1+325*SQR(W)
    E1_int = E1_int+325*SQR(W_int);
    // 03680 GOTO 3850
    goto Lbl_03850;

  Lbl_03690:
    // 03690 PRINT"COURSE ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COURSE ");fputs(buf,fh); };
    // 03700 INPUT C
    // Start of Basic INPUT statement 03700
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03700
    // 03710 IF C<1 THEN 3430
    if(C_int<1)goto Lbl_03430;
    // 03720 IF C>=9 THEN 3430
    if(C_int>=9)goto Lbl_03430;
    // 03730 PRINT"STAR SPEED ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"STAR SPEED ");fputs(buf,fh); };
    // 03740 INPUT W
    // Start of Basic INPUT statement 03740
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
    if(E2_int>=7.5*X5_int)goto Lbl_03820;

  Lbl_03800:
    // 03800 PRINT"INSUFFICIENT POWER FOR MOVEMENT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INSUFFICIENT POWER FOR MOVEMENT");strcat(buf,"\n");fputs(buf,fh); };
    // 03810 GOTO 3430
    goto Lbl_03430;

  Lbl_03820:
    // 03820 E2=E2-7.5*X5
    E2_int = E2_int-7.5*X5_int;
    // 03830 E1=E1+350*SQR(W)
    E1_int = E1_int+350*SQR(W_int);
    // 03840 T=T+SQR(W)/1.5
    T_int = T_int+SQR(W_int)/1.5;

  Lbl_03850:
    // 03850 Q(S1,S2)=1
    Q_int_arr[S1_int][S2_int] = 1;
    // 03860 C$="MOVING"
    GLBpStr="MOVING";
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 03870 IF T>T0 THEN 7040
    if(T_int>T0_int)goto Lbl_07040;
    // 03880 X=S1
    X_int = S1_int;
    // 03890 Y=S2
    Y_int = S2_int;
    // 03900 GOSUB 7110
    Routine_07110();
    // 03910 FOR I=1TO X5
    for(I_int=1;I_int<=X5_int;I_int++){
        // 03920 S1=S1+X1
        S1_int = S1_int+X1_int;
        // 03930 S2=S2+X2
        S2_int = S2_int+X2_int;
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
        if(Q_int_arr[X6_int][X7_int]!=7)goto Lbl_04040;
        // 04010 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 04020 PRINT"** YOUR BATTLESTAR HAS BEEN ABSORBED BY A BLACK HOLE **"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"** YOUR BATTLESTAR HAS BEEN ABSORBED BY A BLACK HOLE **");strcat(buf,"\n");fputs(buf,fh); };
        // 04030 GOTO7040
        goto Lbl_07040;

  Lbl_04040:
        // 04040 IF INT(ABS(X6-B9)+.5)>1 THEN 4180
        if(INT(ABS(X6_int-B9_int)+0.5)>1)goto Lbl_04180;
        // 04050 IF INT(ABS(X7-B8)+.5)>1 THEN 4180
        if(INT(ABS(X7_int-B8_int)+0.5)>1)goto Lbl_04180;
        // 04060 PRINT"DO YOU WISH TO ORBIT";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WISH TO ORBIT");fputs(buf,fh); };
        // 04070 INPUT A$
        // Start of Basic INPUT statement 04070
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtos(&A_str,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
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
    if(T_int-INT(T_int)>RND(0)/7)goto Lbl_04490;
    // 04470 PRINT"NEBULA CLOUD PREVENTS SCAN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NEBULA CLOUD PREVENTS SCAN");strcat(buf,"\n");fputs(buf,fh); };
    // 04480 GOTO 3430
    goto Lbl_03430;

  Lbl_04490:
    // 04490 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 04500 PRINT"LONGE RANGE SENSOR SCAN FOR QUADRANT";Q1;"-";Q2
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LONGE RANGE SENSOR SCAN FOR QUADRANT"); b2c_INT(buf,Q1_int);strcat(buf,"-"); b2c_INT(buf,Q2_int);strcat(buf,"\n");fputs(buf,fh); };
    // 04510 PRINT"     |--------|--------|--------|   POSITIONAL KEY (C P *)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     |--------|--------|--------|   POSITIONAL KEY (C P *)");strcat(buf,"\n");fputs(buf,fh); };
    // 04520 FOR I=Q1-1 TO Q1+1
    for(I_int=Q1_int-1;I_int<=Q1_int+1;I_int++){
        // 04530 X1=I
        X1_int = I_int;
        // 04540 FOR J=Q2-1 TO Q2+1
        for(J_int=Q2_int-1;J_int<=Q2_int+1;J_int++){
            // 04550 X2=J
            X2_int = J_int;
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
            if(X2_int>0)goto Lbl_04620;
            // 04610 X2=X2+10
            X2_int = X2_int+10;

  Lbl_04620:
            // 04620 IF X2<11 THEN 4640
            if(X2_int<11)goto Lbl_04640;
            // 04630 X2=X2-10
            X2_int = X2_int-10;

  Lbl_04640:
            // 04640 X3=INT(G(X1,X2)/1000)
            X3_int = INT(G_int_arr[X1_int][X2_int]/1000);
            // 04650 N(J-Q2+2)=INT(G(X1,X2))-X3*1000
            N_int_arr[J_int-Q2_int+2] = INT(G_int_arr[X1_int][X2_int])-X3_int*1000;
            // 04660 S(X1,X2)=N(J-Q2+2)
            S_int_arr[X1_int][X2_int] = N_int_arr[J_int-Q2_int+2];
            // 04670 NEXT J
            int dummy_4670=0; // Ignore this line.
        }; // End-For(J_int)
        // 04680 PRINT TAB(5);"  ";N(1);TAB(14);"  ";N(2);TAB(23);"  ";N(3);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,5);strcat(buf,"  "); b2c_INT(buf,N_int_arr[1]);b2c_TAB(buf,14);strcat(buf,"  "); b2c_INT(buf,N_int_arr[2]);b2c_TAB(buf,23);strcat(buf,"  "); b2c_INT(buf,N_int_arr[3]);fputs(buf,fh); };
        // 04690 PRINT TAB(32);"  "
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,32);strcat(buf,"  ");strcat(buf,"\n");fputs(buf,fh); };
        // 04700 PRINT"     |--------|--------|--------|"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     |--------|--------|--------|");strcat(buf,"\n");fputs(buf,fh); };
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE HALLUCINATING; NOTHING IS OUT THERE !!!");strcat(buf,"\n");fputs(buf,fh); };
    // 04760 GOTO 3430
    goto Lbl_03430;

  Lbl_04770:
    // 04770 PRINT "VIPERS STANDING BY. SQUADRON SIZE";E3
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VIPERS STANDING BY. SQUADRON SIZE"); b2c_INT(buf,E3_int);strcat(buf,"\n");fputs(buf,fh); };
    // 04780 PRINT "HOW MANY UNITS TO LAUNCH ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY UNITS TO LAUNCH ");fputs(buf,fh); };
    // 04790 INPUT X1
    // Start of Basic INPUT statement 04790
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 04790
    // 04800 IF E3>=X1 THEN 4830
    if(E3_int>=X1_int)goto Lbl_04830;
    // 04810 PRINT"I TOLD YOU THERE ARE ONLY";E3;"UNITS !!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I TOLD YOU THERE ARE ONLY"); b2c_INT(buf,E3_int);strcat(buf,"UNITS !!!");strcat(buf,"\n");fputs(buf,fh); };
    // 04820 GOTO 3430
    goto Lbl_03430;

  Lbl_04830:
    // 04830 IF X1<1 THEN 3430
    if(X1_int<1)goto Lbl_03430;
    // 04840 PRINT"VIPERS LAUNCHED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VIPERS LAUNCHED");strcat(buf,"\n");fputs(buf,fh); };
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
        if((FND_int_arr[K_int_arr[I_int][1]][K_int_arr[I_int][2]])>X9_int)goto Lbl_04940;
        // 04910 IF K(I,3)<=0 THEN 4940
        if(K_int_arr[I_int][3]<=0)goto Lbl_04940;
        // 04920 X8=I
        X8_int = I_int;
        // 04930 X9=FND(K(I,1),K(I,2))
        X9_int = FND_int_arr[K_int_arr[I_int][1]][K_int_arr[I_int][2]];

  Lbl_04940:
        // 04940 NEXT I
        int dummy_4940=0; // Ignore this line.
    }; // End-For(I_int)
    // 04950 IF X8=0 THEN 5200
    if(X8_int==0)goto Lbl_05200;
    // 04960 I=X8
    I_int = X8_int;
    // 04970 IF FND(K(I,1),K(I,2))>3 THEN 5140
    if(FND_int_arr[K_int_arr[I_int][1]][K_int_arr[I_int][2]]>3)goto Lbl_05140;
    // 04980 IF X1<K(I,3) THEN 5100
    if(X1_int<K_int_arr[I_int][3])goto Lbl_05100;
    // 04990 X1=X1-K(I,3)
    X1_int = X1_int-K_int_arr[I_int][3];

  Lbl_05000:
    // 05000 PRINT"CYLON BASE-STAR AT SECTOR";K(I,1);"-";K(I,2);"DESTROYED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CYLON BASE-STAR AT SECTOR"); b2c_INT(buf,K_int_arr[I_int][1]);strcat(buf,"-"); b2c_INT(buf,K_int_arr[I_int][2]);strcat(buf,"DESTROYED");strcat(buf,"\n");fputs(buf,fh); };
    // 05010 P4=P4+1
    P4_int = P4_int+1;
    // 05020 K(I,3)=0
    K_int_arr[I_int][3] = 0;
    // 05030 Q(K(I,1),K(I,2))=1
    Q_int_arr[K_int_arr[I_int][1]][K_int_arr[I_int][2]] = 1;
    // 05040 N2=N2-1
    N2_int = N2_int-1;
    // 05050 IF N2=0 THEN 6580
    if(N2_int==0)goto Lbl_06580;
    // 05060 G(Q1,Q2)=G(Q1,Q2)-100
    G_int_arr[Q1_int][Q2_int] = G_int_arr[Q1_int][Q2_int]-100;
    // 05070 IF S(Q1,Q2)=0 THEN 4870
    if(S_int_arr[Q1_int][Q2_int]==0)goto Lbl_04870;
    // 05080 S(Q1,Q2)=S(Q1,Q2)-100
    S_int_arr[Q1_int][Q2_int] = S_int_arr[Q1_int][Q2_int]-100;
    // 05090 GOTO 4870
    goto Lbl_04870;

  Lbl_05100:
    // 05100 PRINT X1;"CYLON FIGHTERS REMOVED AT SECTOR";K(I,1);"-";K(I,2)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,X1_int);strcat(buf,"CYLON FIGHTERS REMOVED AT SECTOR"); b2c_INT(buf,K_int_arr[I_int][1]);strcat(buf,"-"); b2c_INT(buf,K_int_arr[I_int][2]);strcat(buf,"\n");fputs(buf,fh); };
    // 05110 K(I,3)=K(I,3)-X1
    K_int_arr[I_int][3] = K_int_arr[I_int][3]-X1_int;
    // 05120 X1=0
    X1_int = 0;
    // 05130 GOTO 5460
    goto Lbl_05460;

  Lbl_05140:
    // 05140 X2=K(I,3)*(FND(K(I,1),K(I,2))/3)^2
    X2_int = K_int_arr[I_int][3]*IPower((FND_int_arr[K_int_arr[I_int][1]][K_int_arr[I_int][2]]/3),2);
    // 05150 IF X1<X2 THEN 5180
    if(X1_int<X2_int)goto Lbl_05180;
    // 05160 X1=X1-X2
    X1_int = X1_int-X2_int;
    // 05170 GOTO 5000
    goto Lbl_05000;

  Lbl_05180:
    // 05180 X1=X1/(FND(K(I,1),K(I,2))/3)^2
    X1_int = X1_int/IPower((FND_int_arr[K_int_arr[I_int][1]][K_int_arr[I_int][2]]/3),2);
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
        if(R_int_arr[I_int][3]<=0)goto Lbl_05450;
        // 05240 IF FND(R(I,1),R(I,2))>3 THEN 5390
        if(FND_int_arr[R_int_arr[I_int][1]][R_int_arr[I_int][2]]>3)goto Lbl_05390;
        // 05250 IF X1<R(I,3) THEN 5350
        if(X1_int<R_int_arr[I_int][3])goto Lbl_05350;
        // 05260 X1=X1-R(I,3)
        X1_int = X1_int-R_int_arr[I_int][3];

  Lbl_05270:
        // 05270 PRINT"E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2);"DESTROYED"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"E.A.FLEET AT SECTOR"); b2c_INT(buf,R_int_arr[I_int][1]);strcat(buf,"-"); b2c_INT(buf,R_int_arr[I_int][2]);strcat(buf,"DESTROYED");strcat(buf,"\n");fputs(buf,fh); };
        // 05280 P4=P4+.5
        P4_int = P4_int+0.5;
        // 05290 R(I,3)=0
        R_int_arr[I_int][3] = 0;
        // 05300 Q(R(I,1),R(I,2))=1
        Q_int_arr[R_int_arr[I_int][1]][R_int_arr[I_int][2]] = 1;
        // 05310 N3=N3-1
        N3_int = N3_int-1;
        // 05320 G(Q1,Q2)=G(Q1,Q2)-1000
        G_int_arr[Q1_int][Q2_int] = G_int_arr[Q1_int][Q2_int]-1000;
        // 05330 N6=N6-1
        N6_int = N6_int-1;
        // 05340 GOTO 5460
        goto Lbl_05460;

  Lbl_05350:
        // 05350 PRINT X1;"UNITS HIT IN E.A.FLEET AT SECTOR";R(I,1);"-";R(I,2)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,X1_int);strcat(buf,"UNITS HIT IN E.A.FLEET AT SECTOR"); b2c_INT(buf,R_int_arr[I_int][1]);strcat(buf,"-"); b2c_INT(buf,R_int_arr[I_int][2]);strcat(buf,"\n");fputs(buf,fh); };
        // 05360 R(I,3)=R(I,3)-X1
        R_int_arr[I_int][3] = R_int_arr[I_int][3]-X1_int;
        // 05370 X1=0
        X1_int = 0;
        // 05380 GOTO 5460
        goto Lbl_05460;

  Lbl_05390:
        // 05390 X2=R(I,3)*(FND(R(I,1),R(I,2))/3)^2
        X2_int = R_int_arr[I_int][3]*IPower((FND_int_arr[R_int_arr[I_int][1]][R_int_arr[I_int][2]]/3),2);
        // 05400 IF X1<X2 THEN 5430
        if(X1_int<X2_int)goto Lbl_05430;
        // 05410 X1=X1-X2
        X1_int = X1_int-X2_int;
        // 05420 GOTO 5270
        goto Lbl_05270;

  Lbl_05430:
        // 05430 X1=X1/(FND(R(I,1),R(I,2))/3)^2
        X1_int = X1_int/IPower((FND_int_arr[R_int_arr[I_int][1]][R_int_arr[I_int][2]]/3),2);
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER REPORTS"); b2c_INT(buf,X1_int);strcat(buf,"VIPERS EXPLODED IN LAUNCH TUBES");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_05480:
    // 05480 GOSUB 7200
    Routine_07200();
    // 05490 GOTO 3430
    goto Lbl_03430;

  Lbl_05500:
    // 05500 IF P>0 THEN 5530
    if(P_int>0)goto Lbl_05530;
    // 05510 PRINT"MISSILES EXPENDED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSILES EXPENDED");strcat(buf,"\n");fputs(buf,fh); };
    // 05520 GOTO 3430
    goto Lbl_03430;

  Lbl_05530:
    // 05530 PRINT"COURSE ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COURSE ");fputs(buf,fh); };
    // 05540 INPUT C
    // Start of Basic INPUT statement 05540
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 05540
    // 05550 IF C<1 THEN 3430
    if(C_int<1)goto Lbl_03430;
    // 05560 IF C>=9 THEN 3430
    if(C_int>=9)goto Lbl_03430;
    // 05570 GOSUB 7110
    Routine_07110();
    // 05580 X=S1
    X_int = S1_int;
    // 05590 Y=S2
    Y_int = S2_int;
    // 05600 IF C$="ORBITING" THEN 5620
    if(strcmp(C_str,"ORBITING")==0)goto Lbl_05620;
    // 05610 P=P-1
    P_int = P_int-1;

  Lbl_05620:
    // 05620 PRINT"MISSILE AWAY, TRACKING:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSILE AWAY, TRACKING:");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_05630:
    // 05630 X=X+X1
    X_int = X_int+X1_int;
    // 05640 Y=Y+X2
    Y_int = Y_int+X2_int;
    // 05650 IF X<.5 THEN 6140
    if(X_int<0.5)goto Lbl_06140;
    // 05660 IF X>10.5 THEN 6140
    if(X_int>10.5)goto Lbl_06140;
    // 05670 IF Y<.5 THEN 6140
    if(Y_int<0.5)goto Lbl_06140;
    // 05680 IF Y>10.5 THEN 6140
    if(Y_int>10.5)goto Lbl_06140;
    // 05690 PRINT INT(X*100)/100;"-";INT(Y*100)/100
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,INT(X_int*100)/100);strcat(buf,"-"); b2c_INT(buf,INT(Y_int*100)/100);strcat(buf,"\n");fputs(buf,fh); };
    // 05700 X3=INT(X+.5)
    X3_int = INT(X_int+0.5);
    // 05710 X4=INT(Y+.5)
    X4_int = INT(Y_int+0.5);
    // 05720 ON Q(X3,X4) GOTO 5630,5750,5630,5920,5780,6010,5730
    switch((int)(Q_int_arr[X3_int][X4_int])){
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSILE ABSORBED BY BLACK HOLE");strcat(buf,"\n");fputs(buf,fh); };
    // 05740 GOTO 6140
    goto Lbl_06140;

  Lbl_05750:
    // 05750 PRINT"MISSILE ABSORBED BY STAR - DISRUPTION SLIGHT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSILE ABSORBED BY STAR - DISRUPTION SLIGHT");strcat(buf,"\n");fputs(buf,fh); };
    // 05760 P4=P4-RND(-1)*2
    P4_int = P4_int-RND(-1)*2;
    // 05770 GOTO 6120
    goto Lbl_06120;

  Lbl_05780:
    // 05780 PRINT"CYLON BASE-STAR AT SECTOR";X3;"-";X4;"DESTROYED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CYLON BASE-STAR AT SECTOR"); b2c_INT(buf,X3_int);strcat(buf,"-"); b2c_INT(buf,X4_int);strcat(buf,"DESTROYED");strcat(buf,"\n");fputs(buf,fh); };
    // 05790 P4=P4+1
    P4_int = P4_int+1;
    // 05800 FOR I=1 TO N5
    for(I_int=1;I_int<=N5_int;I_int++){
        // 05810 IF K(I,1)<>X3 THEN 5900
        if(K_int_arr[I_int][1]!=X3_int)goto Lbl_05900;
        // 05820 IF K(I,2)<>X4 THEN 5900
        if(K_int_arr[I_int][2]!=X4_int)goto Lbl_05900;
        // 05830 K(I,3)=0
        K_int_arr[I_int][3] = 0;
        // 05840 G(Q1,Q2)=G(Q1,Q2)-100
        G_int_arr[Q1_int][Q2_int] = G_int_arr[Q1_int][Q2_int]-100;
        // 05850 IF S(Q1,Q2)=0 THEN 5870
        if(S_int_arr[Q1_int][Q2_int]==0)goto Lbl_05870;
        // 05860 S(Q1,Q2)=S(Q1,Q2)-100
        S_int_arr[Q1_int][Q2_int] = S_int_arr[Q1_int][Q2_int]-100;

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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMMANDER, WHAT HAVE YOU DONE ??!!");strcat(buf,"\n");fputs(buf,fh); };
    // 05930 P4=P4-30
    P4_int = P4_int-30;
    // 05940 PRINT"*** TERRAN PLANET AT SECTOR";X3;"-";X4;"DESTROYED ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*** TERRAN PLANET AT SECTOR"); b2c_INT(buf,X3_int);strcat(buf,"-"); b2c_INT(buf,X4_int);strcat(buf,"DESTROYED ***");strcat(buf,"\n");fputs(buf,fh); };
    // 05950 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 05960 PRINT"ENERGY BOLT APPROACHING FROM DIRECTION OF FORMER PLANET!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENERGY BOLT APPROACHING FROM DIRECTION OF FORMER PLANET!");strcat(buf,"\n");fputs(buf,fh); };
    // 05970 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 05980 PRINT"                     **** ZZZZAAP  ****"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                     **** ZZZZAAP  ****");strcat(buf,"\n");fputs(buf,fh); };
    // 05990 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 06000 GOTO7040
    goto Lbl_07040;

  Lbl_06010:
    // 06010 PRINT"E.A.FLEET AT SECTOR";X3;"-";X4;"DESTROYED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"E.A.FLEET AT SECTOR"); b2c_INT(buf,X3_int);strcat(buf,"-"); b2c_INT(buf,X4_int);strcat(buf,"DESTROYED");strcat(buf,"\n");fputs(buf,fh); };
    // 06020 P4=P4+.5
    P4_int = P4_int+0.5;
    // 06030 FOR I=1 TO N6
    for(I_int=1;I_int<=N6_int;I_int++){
        // 06040 IF R(I,1)<>X3 THEN6100
        if(R_int_arr[I_int][1]!=X3_int)goto Lbl_06100;
        // 06050 IF R(I,2)<>X4 THEN6100
        if(R_int_arr[I_int][2]!=X4_int)goto Lbl_06100;
        // 06060 R(I,3)=0
        R_int_arr[I_int][3] = 0;
        // 06070 G(Q1,Q2)=G(Q1,Q2)-1000
        G_int_arr[Q1_int][Q2_int] = G_int_arr[Q1_int][Q2_int]-1000;
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
    Q_int_arr[X3_int][X4_int] = 1;

  Lbl_06120:
    // 06120 GOSUB 7200
    Routine_07200();
    // 06130 GOTO 3430
    goto Lbl_03430;

  Lbl_06140:
    // 06140 PRINT"MISSILE MISSED TARGET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSILE MISSED TARGET");strcat(buf,"\n");fputs(buf,fh); };
    // 06150 GOTO 6120
    goto Lbl_06120;

  Lbl_06160:
    // 06160 PRINT"TRANSFER ENERGY FROM DEVICE # ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRANSFER ENERGY FROM DEVICE # ");fputs(buf,fh); };
    // 06170 INPUT X1
    // Start of Basic INPUT statement 06170
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 06170
    // 06180 IF X1=0 THEN 3430
    if(X1_int==0)goto Lbl_03430;
    // 06190 PRINT".... AND ALLOCATE TO DEVICE # ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".... AND ALLOCATE TO DEVICE # ");fputs(buf,fh); };
    // 06200 INPUT X2
    // Start of Basic INPUT statement 06200
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X2_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 06200
    // 06210 IF X2=0 THEN 3430
    if(X2_int==0)goto Lbl_03430;
    // 06220 IF X2>X1 THEN 6250
    if(X2_int>X1_int)goto Lbl_06250;

  Lbl_06230:
    // 06230 PRINT"IMPOSSIBLE, COMMANDER !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IMPOSSIBLE, COMMANDER !");strcat(buf,"\n");fputs(buf,fh); };
    // 06240 GOTO 3430
    goto Lbl_03430;

  Lbl_06250:
    // 06250 IF X2>3 THEN 6230
    if(X2_int>3)goto Lbl_06230;
    // 06260 PRINT"# OF UNITS TO TRANSFER ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"# OF UNITS TO TRANSFER ");fputs(buf,fh); };
    // 06270 INPUT X3
    // Start of Basic INPUT statement 06270
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X3_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
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
    if(E1_int>X3_int)goto Lbl_06320;

  Lbl_06300:
    // 06300 PRINT"INSUFFICIENT POWER AVAILABLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INSUFFICIENT POWER AVAILABLE");strcat(buf,"\n");fputs(buf,fh); };
    // 06310 GOTO 3430
    goto Lbl_03430;

  Lbl_06320:
    // 06320 E1=E1-X3
    E1_int = E1_int-X3_int;
    // 06330 GOTO 6360
    goto Lbl_06360;

  Lbl_06340:
    // 06340 IF X3>E3 THEN 6300
    if(X3_int>E3_int)goto Lbl_06300;
    // 06350 E3=E3+X3
    E3_int = E3_int+X3_int;

  Lbl_06360:
    // 06360 ON X2-1 GOTO 6370,6390
    switch((int)(X2_int-1)){
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRANSFER COMPLETE");strcat(buf,"\n");fputs(buf,fh); };
    // 06420 GOTO 3430
    goto Lbl_03430;

  Lbl_06430:
    // 06430 PRINT" H -- HYPERDRIVE JUMP";TAB(37);"COURSE GUIDE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," H -- HYPERDRIVE JUMP");b2c_TAB(buf,37);strcat(buf,"COURSE GUIDE");strcat(buf,"\n");fputs(buf,fh); };
    // 06440 PRINT" SS - STAR-SPEED MANEUVER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," SS - STAR-SPEED MANEUVER");strcat(buf,"\n");fputs(buf,fh); };
    // 06450 PRINT" L -- LONG RANGE SENSOR SCAN";TAB(40);"4  3  2"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," L -- LONG RANGE SENSOR SCAN");b2c_TAB(buf,40);strcat(buf,"4  3  2");strcat(buf,"\n");fputs(buf,fh); };
    // 06460 PRINT" S -- SHORT RANGE SENSOR SCAN";TAB(42);"\|/"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," S -- SHORT RANGE SENSOR SCAN");b2c_TAB(buf,42);strcat(buf,"\|/");strcat(buf,"\n");fputs(buf,fh); };
    // 06470 PRINT" V -- LAUNCH VIPERS";TAB(40);"5 -*- 1"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," V -- LAUNCH VIPERS");b2c_TAB(buf,40);strcat(buf,"5 -*- 1");strcat(buf,"\n");fputs(buf,fh); };
    // 06480 PRINT" M -- FIRE MISSILE";TAB(42);"/|\"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," M -- FIRE MISSILE");b2c_TAB(buf,42);strcat(buf,"/|\");strcat(buf,"\n");fputs(buf,fh); };
    // 06490 PRINT" A -- ALLOCATE ENERGY UNITS";TAB(40);"6  7  8"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," A -- ALLOCATE ENERGY UNITS");b2c_TAB(buf,40);strcat(buf,"6  7  8");strcat(buf,"\n");fputs(buf,fh); };
    // 06500 PRINT" G -- GENERATE POWER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," G -- GENERATE POWER");strcat(buf,"\n");fputs(buf,fh); };
    // 06510 PRINT" R -- RECALL LONG RANGE SENSOR INFORMATION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," R -- RECALL LONG RANGE SENSOR INFORMATION");strcat(buf,"\n");fputs(buf,fh); };
    // 06520 PRINT" C -- THIS LIST OF COMMANDS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," C -- THIS LIST OF COMMANDS");strcat(buf,"\n");fputs(buf,fh); };
    // 06530 PRINT" Q -- QUIT GAME(ABNORMAL ENDING)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," Q -- QUIT GAME(ABNORMAL ENDING)");strcat(buf,"\n");fputs(buf,fh); };
    // 06540 GOTO 3430
    goto Lbl_03430;

  Lbl_06580:
    // 06580 P4=P4-(T-T9)/2
    P4_int = P4_int-(T_int-T9_int)/2;
    // 06590 IF P4>10THEN6660
    if(P4_int>10)goto Lbl_06660;
    // 06600 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 06610 PRINT"EVEN THOUGH THE CYLONS HAVE BEEN DESTROYED, AND THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"EVEN THOUGH THE CYLONS HAVE BEEN DESTROYED, AND THE");strcat(buf,"\n");fputs(buf,fh); };
    // 06620 PRINT"EASTERN ALLIANCE HAS FLED, YOU HAVE BEEN TOO DAMAGING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"EASTERN ALLIANCE HAS FLED, YOU HAVE BEEN TOO DAMAGING");strcat(buf,"\n");fputs(buf,fh); };
    // 06630 PRINT"TO TERRAN CIVILIZATIONS TO WIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO TERRAN CIVILIZATIONS TO WIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 06640 PRINT"..... CALL IT A DRAW ....."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"..... CALL IT A DRAW .....");strcat(buf,"\n");fputs(buf,fh); };
    // 06650 GOTO7070
    goto Lbl_07070;

  Lbl_06660:
    // 06660 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 06670 PRINT"CONGRATULATIONS, COMMANDER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS, COMMANDER.");strcat(buf,"\n");fputs(buf,fh); };
    // 06680 PRINT"THE CYLONS HAVE BEEN DESTROYED, AND THE EASTERN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CYLONS HAVE BEEN DESTROYED, AND THE EASTERN");strcat(buf,"\n");fputs(buf,fh); };
    // 06690 PRINT"ALLIANCE HAS FLED, MAKING THIS A GREAT VICTORY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ALLIANCE HAS FLED, MAKING THIS A GREAT VICTORY");strcat(buf,"\n");fputs(buf,fh); };
    // 06700 PRINT"FOR THE TERRAN EMPIRE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOR THE TERRAN EMPIRE.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_06710:
    // 06710 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 06720 PRINT"A RATING GREATER THAN 10 IS GOOD!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A RATING GREATER THAN 10 IS GOOD!");strcat(buf,"\n");fputs(buf,fh); };
    // 06730 P4=P4-(T-T9)/2
    P4_int = P4_int-(T_int-T9_int)/2;
    // 06740 PRINT"=RATING= ";P4
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"=RATING= "); b2c_INT(buf,P4_int);strcat(buf,"\n");fputs(buf,fh); };
    // 06750 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 06760 PRINT"PLEASE TYPE* DONE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE TYPE* DONE");strcat(buf,"\n");fputs(buf,fh); };
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
    E1_int = E1_int+500;
    // 06820 T=T+.5
    T_int = T_int+0.5;
    // 06830 IF T>T0 THEN7040
    if(T_int>T0_int)goto Lbl_07040;
    // 06840 PRINT"POWER GENERATED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"POWER GENERATED");strcat(buf,"\n");fputs(buf,fh); };
    // 06850 GOTO3430
    goto Lbl_03430;

  Lbl_06860:
    // 06860 PRINT"IMPOSSIBLE UNDER RED ALERT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IMPOSSIBLE UNDER RED ALERT");strcat(buf,"\n");fputs(buf,fh); };
    // 06870 GOTO3430
    goto Lbl_03430;

  Lbl_06880:
    // 06880 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 06890 FOR X6=1TO10
    for(X6_int=1;X6_int<=10;X6_int++){
        // 06900 FOR X7=1TO10
        for(X7_int=1;X7_int<=10;X7_int++){
            // 06910 PRINT S(X6,X7);TAB(X7*5);
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,S_int_arr[X6_int][X7_int]);b2c_TAB(buf,X7_in;fputs(buf,fh); };
            // 06920 NEXT X7
            int dummy_6920=0; // Ignore this line.
        }; // End-For(X7_int)
        // 06930 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 06940 NEXT X6
        int dummy_6940=0; // Ignore this line.
    }; // End-For(X6_int)
    // 06950 GOTO3430
    goto Lbl_03430;
    // 06960 END

  Lbl_07040:
    // 07040 PRINT"*** YOU HAVE BEEN DEFEATED ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*** YOU HAVE BEEN DEFEATED ***");strcat(buf,"\n");fputs(buf,fh); };
    // 07050 PRINT N2;"CYLON BASE-STARS AND";N3;"E.A.FLEETS REMAIN !!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,N2_int);strcat(buf,"CYLON BASE-STARS AND"); b2c_INT(buf,N3_int);strcat(buf,"E.A.FLEETS REMAIN !!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 07060 GOTO 7070
    goto Lbl_07070;

  Lbl_07070:
    // 07070 PRINT"=RATING= ";P4
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"=RATING= "); b2c_INT(buf,P4_int);strcat(buf,"\n");fputs(buf,fh); };
    // 07080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 07090 PRINT"PLEASE TYPE* DONE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE TYPE* DONE");strcat(buf,"\n");fputs(buf,fh); };
    // 07100 STOP
    exit(1);
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
