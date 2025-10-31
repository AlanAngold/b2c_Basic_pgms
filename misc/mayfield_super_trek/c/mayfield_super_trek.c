/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/mayfield_super_trek.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57082c3b9bf0 ---------A   00000   REM  Extracted from HP tape image 16-Nov-2003 by Pete Turnbull
    0x57082c3bb170 ---------A   00001   REM ****  HP BASIC PROGRAM LIBRARY  ******************************
    0x57082c3bb230 ---------A   00002   REM
    0x57082c3b87f0 ---------A   00003   REM       STTR1: STAR TREK
    0x57082c3ba1e0 ---------A   00004   REM
    0x57082c3ba6a0 ---------A   00005   REM       36243  REV B  --  10/73
    0x57082c3b92d0 ---------A   00006   REM
    0x57082c3b9e80 ---------A   00007   REM ****  CONTRIBUTED PROGRAM  ***********************************
    0x57082c3ba270 ---------A   00100   REM *****************************************************************
    0x57082c3ba7c0 ---------A   00110   REM ***                                                           ***
    0x57082c3b9040 ---------A   00120   REM ***     STAR TREK: BY MIKE MAYFIELD, CENTERLINE ENGINEERING   ***
    0x57082c3b8e90 ---------A   00130   REM ***                                                           ***
    0x57082c3b8be0 ---------A   00140   REM ***        TOTAL INTERACTION GAME - ORIG. 20 OCT 1972
    0x57082c3bb280 ---------A   00150   REM ***                                                           ***
    0x57082c3b9620 ---------A   00160   REM *****************************************************************
    0x57082c3b9670 ---------A   00170   GOSUB 5460
    0x57082c3b96c0 ---------A   00180   PRINT "                          STAR TREK "
    0x57082c3b9720 ---------A   00190   PRINT "DO YOU WANT INSTRUCTIONS (THEY'RE LONG!)";
    0x57082c3b9820 ---------A   00200   INPUT A$
    0x57082c3b98c0 ---------A   00210   IF A$ <> "YES" THEN 230
    0x57082c3b9920 ---------A   00220   GOSUB 5820
    0x57082c3c0a20 --------CA T 00230   REM *****  PROGRAM STARTS HERE *****
    0x57082c3c0c50 --------CA   00240   Z$="                                                                      "
    0x57082c3c0ce0 --------CA   00250   GOSUB 5460
    0x57082c3c1bf0 --------CA   00260   DIM G[8,8],C[9,2],K[3,3],N[3],Z[8,8]
    0x57082c3c2c40 --------CA   00270   DIM C$[6],D$[72],E$[24],A$[3],Q$[72],R$[72],S$[48]
    0x57082c3c2e60 --------CA   00280   DIM Z$[72]
    0x57082c3c3790 --------CA   00290   T0=T=INT(RND(1)*20+20)*100
    0x57082c3c3a60 --------CA   00300   T9=30
    0x57082c3c3d30 --------CA   00310   D0=0
    0x57082c3c41a0 --------CA   00320   E0=E=3000
    0x57082c3c4610 --------CA   00330   P0=P=10
    0x57082c3c48e0 --------CA   00340   S9=200
    0x57082c3c4f80 --------CA   00350   S=H8=0
    0x57082c3c6050 --------CA   00360   DEF FND(D)=SQR((K[I,1]-S1)^2+(K[I,2]-S2)^2)
    0x57082c3c66e0 --------CA   00370   Q1=INT(RND(1)*8+1)
    0x57082c3c6d70 --------CA   00380   Q2=INT(RND(1)*8+1)
    0x57082c3c7340 --------CA   00390   S1=INT(RND(1)*8+1)
    0x57082c3c7920 --------CA   00400   S2=INT(RND(1)*8+1)
    0x57082c3c8090 --------CA   00410   T7=TIM(0)+60*TIM(1)
    0x57082c3c9020 --------CA   00420   C[2,1]=C[3,1]=C[4,1]=C[4,2]=C[5,2]=C[6,2]=-1
    0x57082c3c9d50 --------CA   00430   C[1,1]=C[3,2]=C[5,1]=C[7,2]=C[9,1]=0
    0x57082c3caf20 --------CA   00440   C[1,2]=C[2,2]=C[6,1]=C[7,1]=C[8,1]=C[8,2]=C[9,2]=1
    0x57082c3cb220 --------CA   00450   MAT D=ZER
    0x57082c3cb490 --------CA   00460   D$="WARP ENGINESS.R. SENSORSL.R. SENSORSPHASER CNTRL"
    0x57082c3cb7a0 --------CA   00470   D$[49]="PHOTON TUBESDAMAGE CNTRL"
    0x57082c3cb9d0 --------CA   00480   E$="SHIELD CNTRLCOMPUTER"
    0x57082c3cbe40 --------CA T 00490   B9=K9=0
    0x57082c3cc110 --------CA   00500   FOR I=1 TO 8
    0x57082c3cc4b0 --------CA   00510   FOR J=1 TO 8
    0x57082c3cc870 --------CA   00520   R1=RND(1)
    0x57082c3ccac0 --------CA   00530   IF R1>.98 THEN 580
    0x57082c3ccd20 --------CA   00540   IF R1>.95 THEN 610
    0x57082c3ccf80 --------CA   00550   IF R1>.8 THEN 640
    0x57082c3cd260 --------CA   00560   K3=0
    0x57082c3cd2d0 --------CA   00570   GOTO 660
    0x57082c3cd4e0 --------CA T 00580   K3=3
    0x57082c3cd810 --------CA   00590   K9=K9+3
    0x57082c3cd880 --------CA   00600   GOTO 660
    0x57082c3cda90 --------CA T 00610   K3=2
    0x57082c3cddc0 --------CA   00620   K9=K9+2
    0x57082c3cde30 --------CA   00630   GOTO 660
    0x57082c3ce040 --------CA T 00640   K3=1
    0x57082c3ce370 --------CA   00650   K9=K9+1
    0x57082c3ce660 --------CA T 00660   R1=RND(1)
    0x57082c3cecc0 --------CA   00670   IF R1>.96 THEN 700
    0x57082c3cefa0 --------CA   00680   B3=0
    0x57082c3cf010 --------CA   00690   GOTO 720
    0x57082c3cf220 --------CA T 00700   B3=1
    0x57082c3cf550 --------CA   00710   B9=B9+1
    0x57082c3cfbf0 --------CA T 00720   S3=INT(RND(1)*8+1)
    0x57082c3d0420 --------CA   00730   G[I,J]=K3*100+B3*10+S3
    0x57082c3d07f0 --------CA   00740   Z[I,J]=0
    0x57082c3d0920 --------CA   00750   NEXT J
    0x57082c3d0a70 --------CA   00760   NEXT I
    0x57082c3d0d90 --------CA   00770   K7=K9
    0x57082c3d1240 --------CA   00775   IF B9 <= 0 OR K9 <= 0 THEN 490
    0x57082c3d19a0 --------CA   00780   PRINT "YOU MUST DESTROY"K9;" KLINGONS IN"T9;" STARDATES WITH"B9;" STARBASES"
    0x57082c3d1da0 --------CA T 00810   K3=B3=S3=0
    0x57082c3d2650 --------CA   00820   IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 920
    0x57082c3d2c10 --------CA   00830   X=G[Q1,Q2]*.01
    0x57082c3d2f20 --------CA   00840   K3=INT(X)
    0x57082c3d34a0 --------CA   00850   B3=INT((X-K3)*10)
    0x57082c3d3e50 --------CA   00860   S3=G[Q1,Q2]-INT(G[Q1,Q2]*.1)*10
    0x57082c3d40a0 --------CA   00870   IF K3=0 THEN 910
    0x57082c3d4320 --------CA   00880   IF S>200 THEN 910
    0x57082c3d44a0 --------CA   00890   PRINT "COMBAT AREA      CONDITION RED"
    0x57082c3d4610 --------CA   00900   PRINT "   SHIELDS DANGEROUSLY LOW"
    0x57082c3d4830 --------CA T 00910   MAT K=ZER
    0x57082c3d4b10 --------CA T 00920   FOR I=1 TO 3
    0x57082c3d4ed0 --------CA   00930   K[I,3]=0
    0x57082c3d5000 --------CA   00940   NEXT I
    0x57082c3d5250 --------CA   00950   Q$=Z$
    0x57082c3d5480 --------CA   00960   R$=Z$
    0x57082c3d5830 --------CA   00970   S$=Z$[1,48]
    0x57082c3d5a60 --------CA   00980   A$="<*>"
    0x57082c3d5d50 --------CA   00990   Z1=S1
    0x57082c3d6040 --------CA   01000   Z2=S2
    0x57082c3d60b0 --------CA   01010   GOSUB 5510
    0x57082c3d63a0 --------CA   01020   FOR I=1 TO K3
    0x57082c3d6420 --------CA   01030   GOSUB 5380
    0x57082c3d6650 --------CA   01040   A$="+++"
    0x57082c3d6880 --------CA   01050   Z1=R1
    0x57082c3d6b70 --------CA   01060   Z2=R2
    0x57082c3d6be0 --------CA   01070   GOSUB 5510
    0x57082c3d6fb0 --------CA   01080   K[I,1]=R1
    0x57082c3d7380 --------CA   01090   K[I,2]=R2
    0x57082c3d7750 --------CA   01100   K[I,3]=S9
    0x57082c3d7880 --------CA   01110   NEXT I
    0x57082c3d7b90 --------CA   01120   FOR I=1 TO B3
    0x57082c3d7c10 --------CA   01130   GOSUB 5380
    0x57082c3d7e40 --------CA   01140   A$=">!<"
    0x57082c3d8070 --------CA   01150   Z1=R1
    0x57082c3d82a0 --------CA   01160   Z2=R2
    0x57082c3d8310 --------CA   01170   GOSUB 5510
    0x57082c3d8440 --------CA   01180   NEXT I
    0x57082c3d8750 --------CA   01190   FOR I=1 TO S3
    0x57082c3d87d0 --------CA   01200   GOSUB 5380
    0x57082c3d8a00 --------CA   01210   A$=" * "
    0x57082c3d8c30 --------CA   01220   Z1=R1
    0x57082c3d8e60 --------CA   01230   Z2=R2
    0x57082c3d8ed0 --------CA   01240   GOSUB 5510
    0x57082c3d9000 --------CA   01250   NEXT I
    0x57082c3d9090 --------CA T 01260   GOSUB 4120
    0x57082c3d9200 --------CA T 01270   PRINT "COMMAND:";
    0x57082c3d9450 --------CA   01280   INPUT A
    0x57082c3d9cb0 --------CA   01290   GOTO A+1 OF 1410,1260,2330,2530,2800,3460,3560,4630
    0x57082c3d9d40 --------CA   01300   PRINT
    0x57082c3d9ec0 --------CA   01310   PRINT "   0 = SET COURSE"
    0x57082c3da860 --------CA   01320   PRINT "   1 = SHORT RANGE SENSOR SCAN"
    0x57082c3da9e0 --------CA   01330   PRINT "   2 = LONG RANGE SENSOR SCAN"
    0x57082c3dab60 --------CA   01340   PRINT "   3 = FIRE PHASERS"
    0x57082c3dace0 --------CA   01350   PRINT "   4 = FIRE PHOTON TORPEDOES"
    0x57082c3dae60 --------CA   01360   PRINT "   5 = SHIELD CONTROL"
    0x57082c3daff0 --------CA   01370   PRINT "   6 = DAMAGE CONTROL REPORT"
    0x57082c3db160 --------CA   01380   PRINT "   7 = CALL ON LIBRARY COMPUTER"
    0x57082c3db1e0 --------CA   01390   PRINT
    0x57082c3db270 --------CA   01400   GOTO 1270
    0x57082c3db3e0 --------CA T 01410   PRINT "COURSE (1-9):";
    0x57082c3db600 --------CA   01420   INPUT C1
    0x57082c3db870 --------CA   01430   IF C1=0 THEN 1270
    0x57082c3dbd00 --------CA   01440   IF C1<1 OR C1 >= 9 THEN 1410
    0x57082c3dbe80 --------CA   01450   PRINT "WARP FACTOR (0-8):";
    0x57082c3dc0b0 --------CA   01460   INPUT W1
    0x57082c3dc550 --------CA   01470   IF W1<0 OR W1>8 THEN 1410
    0x57082c3dcac0 --------CA   01480   IF D[1] >= 0 OR W1 <= .2 THEN 1510
    0x57082c3dcc40 --------CA   01490   PRINT "WARP ENGINES ARE DAMAGED, MAXIMUM SPEED = WARP .2"
    0x57082c3dccd0 --------CA   01500   GOTO 1410
    0x57082c3dcf20 --------CA T 01510   IF K3 <= 0 THEN 1560
    0x57082c3dcfb0 --------CA   01520   GOSUB 3790
    0x57082c3dd200 --------CA   01530   IF K3 <= 0 THEN 1560
    0x57082c3dd460 --------CA   01540   IF S<0 THEN 4000
    0x57082c3dd4e0 --------CA   01550   GOTO 1610
    0x57082c3dd730 --------CA T 01560   IF E>0 THEN 1610
    0x57082c3dd9b0 --------CA   01570   IF S<1 THEN 3920
    0x57082c3ddd50 --------CA   01580   PRINT "YOU HAVE"E" UNITS OF ENERGY"
    0x57082c3de0d0 --------CA   01590   PRINT "SUGGEST YOU GET SOME FROM YOUR SHIELDS WHICH HAVE"S" UNITS LEFT"
    0x57082c3de150 --------CA   01600   GOTO 1270
    0x57082c3de430 --------CA T 01610   FOR I=1 TO 8
    0x57082c3de770 --------CA   01620   IF D[I] >= 0 THEN 1640
    0x57082c3dec70 --------CA   01630   D[I]=D[I]+1
    0x57082c3deda0 --------CA T 01640   NEXT I
    0x57082c3df0f0 --------CA   01650   IF RND(1)>.2 THEN 1810
    0x57082c3df6e0 --------CA   01660   R1=INT(RND(1)*8+1)
    0x57082c3dfa00 --------CA   01670   IF RND(1) >= .5 THEN 1750
    0x57082c3e0220 --------CA   01680   D[R1]=D[R1]-(RND(1)*5+1)
    0x57082c3e02a0 --------CA   01690   PRINT
    0x57082c3e0430 --------CA   01700   PRINT "DAMAGE CONTROL REPORT:";
    0x57082c3e04b0 --------CA   01710   GOSUB 5610
    0x57082c3e0600 --------CA   01720   PRINT " DAMAGED"
    0x57082c3e0680 --------CA   01730   PRINT
    0x57082c3e0710 --------CA   01740   GOTO 1810
    0x57082c3e0f20 --------CA T 01750   D[R1]=D[R1]+(RND(1)*5+1)
    0x57082c3e0fa0 --------CA   01760   PRINT
    0x57082c3e1130 --------CA   01770   PRINT "DAMAGE CONTROL REPORT:";
    0x57082c3e11c0 --------CA   01780   GOSUB 5610
    0x57082c3e1320 --------CA   01790   PRINT " STATE OF REPAIR IMPROVED"
    0x57082c3e13a0 --------CA   01800   PRINT
    0x57082c3e17c0 --------CA T 01810   N=INT(W1*8)
    0x57082c3e19f0 --------CA   01820   A$="   "
    0x57082c3e1c20 --------CA   01830   Z1=S1
    0x57082c3e1e50 --------CA   01840   Z2=S2
    0x57082c3e1ec0 --------CA   01850   GOSUB 5510
    0x57082c3e20f0 --------CA   01870   X=S1
    0x57082c3e23e0 --------CA   01880   Y=S2
    0x57082c3e27d0 --------CA   01885   C2=INT(C1)
    0x57082c3e35c0 --------CA   01890   X1=C[C2,1]+(C[C2+1,1]-C[C2,1])*(C1-C2)
    0x57082c3e4390 --------CA   01900   X2=C[C2,2]+(C[C2+1,2]-C[C2,2])*(C1-C2)
    0x57082c3e4680 --------CA   01910   FOR I=1 TO N
    0x57082c3e49e0 --------CA   01920   S1=S1+X1
    0x57082c3e4d60 --------CA   01930   S2=S2+X2
    0x57082c3e5610 --------CA   01940   IF S1<.5 OR S1 >= 8.5 OR S2<.5 OR S2 >= 8.5 THEN 2170
    0x57082c3e5850 --------CA   01950   A$="   "
    0x57082c3e5a80 --------CA   01960   Z1=S1
    0x57082c3e5cb0 --------CA   01970   Z2=S2
    0x57082c3e5d30 --------CA   01980   GOSUB 5680
    0x57082c3e6050 --------CA   01990   IF Z3 <> 0 THEN 2070
    0x57082c3e6390 --------CA   02030   PRINT  USING 5370;S1,S2
    0x57082c3e66f0 --------CA   02040   S1=S1-X1
    0x57082c3e6a40 --------CA   02050   S2=S2-X2
    0x57082c3e6ab0 --------CA   02060   GOTO 2080
    0x57082c3e6be0 --------CA T 02070   NEXT I
    0x57082c3e6e30 --------CA T 02080   A$="<*>"
    0x57082c3e7240 --------CA   02083   S1=INT(S1+.5)
    0x57082c3e7650 --------CA   02086   S2=INT(S2+.5)
    0x57082c3e7880 --------CA   02090   Z1=S1
    0x57082c3e7ab0 --------CA   02100   Z2=S2
    0x57082c3e7b20 --------CA   02110   GOSUB 5510
    0x57082c3e7f70 --------CA   02120   E=E-N+5
    0x57082c3e81c0 --------CA   02130   IF W1<1 THEN 2150
    0x57082c3e8510 --------CA   02140   T=T+1
    0x57082c3e88a0 --------CA T 02150   IF T>T0+T9 THEN 3970
    0x57082c3e8920 --------CA   02160   GOTO 1260
    0x57082c3e8fb0 --------CA T 02170   X=Q1*8+X+X1*N
    0x57082c3e9640 --------CA   02180   Y=Q2*8+Y+X2*N
    0x57082c3e9a50 --------CA   02190   Q1=INT(X/8)
    0x57082c3e9e60 --------CA   02200   Q2=INT(Y/8)
    0x57082c3ea490 --------CA   02210   S1=INT(X-Q1*8+.5)
    0x57082c3eaad0 --------CA   02220   S2=INT(Y-Q2*8+.5)
    0x57082c3ead20 --------CA   02230   IF S1 <> 0 THEN 2260
    0x57082c3eb060 --------CA   02240   Q1=Q1-1
    0x57082c3eb280 --------CA   02250   S1=8
    0x57082c3eb4d0 --------CA T 02260   IF S2 <> 0 THEN 2290
    0x57082c3eb810 --------CA   02270   Q2=Q2-1
    0x57082c3eba20 --------CA   02280   S2=8
    0x57082c3ebd50 --------CA T 02290   T=T+1
    0x57082c3ec1b0 --------CA   02300   E=E-N+5
    0x57082c3ec540 --------CA   02310   IF T>T0+T9 THEN 3970
    0x57082c3ec5d0 --------CA   02320   GOTO 810
    0x57082c3ec900 --------CA T 02330   IF D[3] >= 0 THEN 2370
    0x57082c3ecaa0 --------CA   02340   PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x57082c3ecb40 --------CA   02350   IMAGE  "LONG RANGE SENSOR SCAN FOR QUADRANT",D,",",D
    0x57082c3ecbe0 --------CA   02360   GOTO 1270
    0x57082c3ecf10 --------CA T 02370   PRINT  USING 2350;Q1,Q2
    0x57082c3ed060 --------CA   02380   PRINT  USING 2520
    0x57082c3ed580 --------CA   02390   FOR I=Q1-1 TO Q1+1
    0x57082c3ed7b0 --------CA   02400   MAT N=ZER
    0x57082c3edcf0 --------CA   02410   FOR J=Q2-1 TO Q2+1
    0x57082c3ee5b0 --------CA   02420   IF I<1 OR I>8 OR J<1 OR J>8 THEN 2460
    0x57082c3eecc0 --------CA   02430   N[J-Q2+2]=G[I,J]
    0x57082c3eefd0 --------CA   02440   IF D[7]<0 THEN 2460
    0x57082c3ef590 --------CA   02450   Z[I,J]=G[I,J]
    0x57082c3ef6c0 --------CA T 02460   NEXT J
    0x57082c3efd60 --------CA   02470   PRINT  USING 2510;N[1],N[2],N[3]
    0x57082c3efea0 --------CA   02480   PRINT  USING 2520
    0x57082c3effe0 --------CA   02490   NEXT I
    0x57082c3f0080 --------CA   02500   GOTO 1270
    0x57082c3f00f0 ----------   02510   IMAGE  ": ",3(3D," :")
    0x57082c3f0190 ----------   02520   IMAGE  "-----------------"
    0x57082c3f0420 --------CA T 02530   IF K3 <= 0 THEN 3670
    0x57082c3f0760 --------CA   02540   IF D[4] >= 0 THEN 2570
    0x57082c3f08d0 --------CA   02550   PRINT "PHASER CONTROL IS DISABLED"
    0x57082c3f0960 --------CA   02560   GOTO 1270
    0x57082c3f0c90 --------CA T 02570   IF D[7] >= 0 THEN 2590
    0x57082c3f0e30 --------CA   02580   PRINT " COMPUTER FAILURE HAMPERS ACCURACY"
    0x57082c3f10c0 --------CA T 02590   PRINT "PHASERS LOCKED ON TARGET.  ENERGY AVAILABLE="E
    0x57082c3f1250 --------CA   02600   PRINT "NUMBER OF UNITS TO FIRE:";
    0x57082c3da030 --------CA   02610   INPUT X
    0x57082c3da2a0 --------CA   02620   IF X <= 0 THEN 1270
    0x57082c3da620 --------CA   02630   IF E-X<0 THEN 2570
    0x57082c3f2520 --------CA   02640   E=E-X
    0x57082c3f25a0 --------CA   02650   GOSUB 3790
    0x57082c3f28b0 --------CA   02660   IF D[7] >= 0 THEN 2680
    0x57082c3f2cd0 --------CA   02670   X=X*RND(1)
    0x57082c3f2fb0 --------CA T 02680   FOR I=1 TO 3
    0x57082c3f33c0 --------CA   02690   IF K[I,3] <= 0 THEN 2770
    0x57082c3f3d20 --------CA   02700   H=(X/K3/FND(0))*(2*RND(1))
    0x57082c3f43d0 --------CA   02710   K[I,3]=K[I,3]-H
    0x57082c3f4e20 --------CA   02720   PRINT  USING 2730;H,K[I,1],K[I,2],K[I,3]
    0x57082c3f4ed0 --------CA   02730   IMAGE  4D," UNIT HIT ON KLINGON AT SECTOR ",D,",",D,"   (",3D," LEFT)"
    0x57082c3f52f0 --------CA   02740   IF K[I,3]>0 THEN 2770
    0x57082c3f5380 --------CA   02750   GOSUB 3690
    0x57082c3f55d0 --------CA   02760   IF K9 <= 0 THEN 4040
    0x57082c3f5710 --------CA T 02770   NEXT I
    0x57082c3f5980 --------CA   02780   IF E<0 THEN 4000
    0x57082c3f5a10 --------CA   02790   GOTO 1270
    0x57082c3f5d40 --------CA T 02800   IF D[5] >= 0 THEN 2830
    0x57082c3f5eb0 --------CA   02810   PRINT "PHOTON TUBES ARE NOT OPERATIONAL"
    0x57082c3f5f30 --------CA   02820   GOTO 1270
    0x57082c3f61a0 --------CA T 02830   IF P>0 THEN 2860
    0x57082c3f6310 --------CA   02840   PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x57082c3f63a0 --------CA   02850   GOTO 1270
    0x57082c3f6510 --------CA T 02860   PRINT "TORPEDO COURSE (1-9):";
    0x57082c3f6670 --------CA   02870   INPUT C1
    0x57082c3f68e0 --------CA   02880   IF C1=0 THEN 1270
    0x57082c3f6d60 --------CA   02890   IF C1<1 OR C1 >= 9 THEN 2860
    0x57082c3f70a0 --------CA   02895   C2=INT(C1)
    0x57082c3f7dd0 --------CA   02900   X1=C[C2,1]+(C[C2+1,1]-C[C2,1])*(C1-C2)
    0x57082c3f8ae0 --------CA   02910   X2=C[C2,2]+(C[C2+1,2]-C[C2,2])*(C1-C2)
    0x57082c3f8d10 --------CA   02920   X=S1
    0x57082c3f8f40 --------CA   02930   Y=S2
    0x57082c3f9280 --------CA   02940   P=P-1
    0x57082c3f93d0 --------CA   02950   PRINT "TORPEDO TRACK:"
    0x57082c3f9730 --------CA T 02960   X=X+X1
    0x57082c3f9aa0 --------CA   02970   Y=Y+X2
    0x57082c3fa360 --------CA   02980   IF X<.5 OR X >= 8.5 OR Y<.5 OR Y >= 8.5 THEN 3420
    0x57082c3fa6b0 --------CA   02990   PRINT  USING 3000;X,Y
    0x57082c3fa730 --------CA   03000   IMAGE  15X,D,",",D
    0x57082c3fa980 --------CA   03010   A$="   "
    0x57082c3fabb0 --------CA   03020   Z1=X
    0x57082c3fade0 --------CA   03030   Z2=Y
    0x57082c3fae50 --------CA   03040   GOSUB 5680
    0x57082c3fb0a0 --------CA   03050   IF Z3=0 THEN 3070
    0x57082c3fb120 --------CA   03060   GOTO 2960
    0x57082c3fb350 --------CA T 03070   A$="+++"
    0x57082c3fb580 --------CA   03080   Z1=X
    0x57082c3fb7b0 --------CA   03090   Z2=Y
    0x57082c3fb820 --------CA   03100   GOSUB 5680
    0x57082c3fba80 --------CA   03110   IF Z3=0 THEN 3220
    0x57082c3fbbf0 --------CA   03120   PRINT "*** KLINGON DESTROYED ***"
    0x57082c3fbf30 --------CA   03130   K3=K3-1
    0x57082c3fc270 --------CA   03140   K9=K9-1
    0x57082c3fc4c0 --------CA   03150   IF K9 <= 0 THEN 4040
    0x57082c3fc7b0 --------CA   03160   FOR I=1 TO 3
    0x57082c3fcdc0 --------CA   03170   IF INT(X+.5) <> K[I,1] THEN 3190
    0x57082c3fd3c0 --------CA   03180   IF INT(Y+.5)=K[I,2] THEN 3200
    0x57082c3fd500 --------CA T 03190   NEXT I
    0x57082c3fd8d0 --------CA T 03200   K[I,3]=0
    0x57082c3fd940 --------CA   03210   GOTO 3360
    0x57082c3fdb70 --------CA T 03220   A$=" * "
    0x57082c3fdda0 --------CA   03230   Z1=X
    0x57082c3fdfd0 --------CA   03240   Z2=Y
    0x57082c3fe040 --------CA   03250   GOSUB 5680
    0x57082c3fe2b0 --------CA   03260   IF Z3=0 THEN 3290
    0x57082c3fe420 --------CA   03270   PRINT "YOU CAN'T DESTROY STARS SILLY"
    0x57082c3fe4a0 --------CA   03280   GOTO 3420
    0x57082c3fe6d0 --------CA T 03290   A$=">!<"
    0x57082c3fe900 --------CA   03300   Z1=X
    0x57082c3feb30 --------CA   03310   Z2=Y
    0x57082c3feba0 --------CA   03320   GOSUB 5680
    0x57082c3fee20 --------CA   03330   IF Z3=0 THEN 2960
    0x57082c3fefa0 --------CA   03340   PRINT "*** STAR BASE DESTROYED ***  .......CONGRATULATIONS"
    0x57082c3ff2e0 --------CA   03350   B3=B3-1
    0x57082c3ff510 --------CA T 03360   A$="   "
    0x57082c3ff920 --------CA   03370   Z1=INT(X+.5)
    0x57082c3ffd30 --------CA   03380   Z2=INT(Y+.5)
    0x57082c3ffdb0 --------CA   03390   GOSUB 5510
    0x57082c4005e0 --------CA   03400   G[Q1,Q2]=K3*100+B3*10+S3
    0x57082c400660 --------CA   03410   GOTO 3430
    0x57082c4007b0 --------CA T 03420   PRINT "TORPEDO MISSED"
    0x57082c400830 --------CA T 03430   GOSUB 3790
    0x57082c400a80 --------CA   03440   IF E<0 THEN 4000
    0x57082c400b10 --------CA   03450   GOTO 1270
    0x57082c400e40 --------CA T 03460   IF D[7] >= 0 THEN 3490
    0x57082c400fb0 --------CA   03470   PRINT "SHIELD CONTROL IS NON-OPERATIONAL"
    0x57082c401060 --------CA   03480   GOTO 1270
    0x57082c401500 --------CA T 03490   PRINT "ENERGY AVAILABLE ="E+S"   NUMBER OF UNITS TO SHIELDS:";
    0x57082c401670 --------CA   03500   INPUT X
    0x57082c4018e0 --------CA   03510   IF X <= 0 THEN 1270
    0x57082c401d80 --------CA   03520   IF E+S-X<0 THEN 3490
    0x57082c402200 --------CA   03530   E=E+S-X
    0x57082c402430 --------CA   03540   S=X
    0x57082c4024b0 --------CA   03550   GOTO 1270
    0x57082c4027e0 --------CA T 03560   IF D[6] >= 0 THEN 3590
    0x57082c402960 --------CA   03570   PRINT "DAMAGE CONTROL REPORT IS NOT AVAILABLE"
    0x57082c4029e0 --------CA   03580   GOTO 1270
    0x57082c402a70 --------CA T 03590   PRINT
    0x57082c402be0 --------CA   03600   PRINT "DEVICE        STATE OF REPAIR"
    0x57082c402ec0 --------CA   03610   FOR R1=1 TO 8
    0x57082c402f40 --------CA   03620   GOSUB 5610
    0x57082c403270 --------CA   03630   PRINT "",D[R1]
    0x57082c4033b0 --------CA   03640   NEXT R1
    0x57082c403440 --------CA   03650   PRINT
    0x57082c4034f0 --------CA   03660   GOTO 1270
    0x57082c403670 --------CA T 03670   PRINT "SHORT RANGE SENSORS REPORT NO KLINGONS IN THIS QUADRANT"
    0x57082c403700 --------CA   03680   GOTO 1270
    0x57082c403da0 ---------B G 03690   PRINT  USING 3700;K[I,1],K[I,2]
    0x57082c403e40 ---------B   03700   IMAGE  "KLINGON AT SECTOR ",D,",",D," DESTROYED ****"
    0x57082c404190 ---------B   03710   K3=K3-1
    0x57082c4044c0 ---------B   03720   K9=K9-1
    0x57082c4046f0 ---------B   03730   A$="   "
    0x57082c404ac0 ---------B   03740   Z1=K[I,1]
    0x57082c404e90 ---------B   03750   Z2=K[I,2]
    0x57082c404f10 ---------B   03760   GOSUB 5510
    0x57082c405740 ---------B   03770   G[Q1,Q2]=K3*100+B3*10+S3
    0x57082c405790 ---------B   03780   RETURN
    0x57082c405a40 ---------C G 03790   IF C$ <> "DOCKED" THEN 3820
    0x57082c405bc0 ---------C   03800   PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x57082c405c20 ---------C   03810   RETURN
    0x57082c405e90 ---------C T 03820   IF K3 <= 0 THEN 3910
    0x57082c406180 ---------C   03830   FOR I=1 TO 3
    0x57082c406590 ---------C   03840   IF K[I,3] <= 0 THEN 3900
    0x57082c406eb0 ---------C   03850   H=(K[I,3]/FND(0))*(2*RND(1))
    0x57082c407220 ---------C   03860   S=S-H
    0x57082c407ad0 ---------C   03870   PRINT  USING 3880;H,K[I,1],K[I,2],S
    0x57082c407b80 ---------C   03880   IMAGE  4D," UNIT HIT ON ENTERPRISE AT SECTOR ",D,",",D,"   (",4D," LEFT)"
    0x57082c407df0 ---------C   03890   IF S<0 THEN 4000
    0x57082c407f30 ---------C T 03900   NEXT I
    0x57082c407fa0 ---------C T 03910   RETURN
    0x57082c4081a0 --------CA T 03920   PRINT "THE ENTERPRISE IS DEAD IN SPACE.  IF YOU SURVIVE ALL IMPENDING"
    0x57082c408330 --------CA   03930   PRINT "ATTACK YOU WILL BE DEMOTED TO THE RANK OF PRIVATE"
    0x57082c408590 --------CA T 03940   IF K3 <= 0 THEN 4020
    0x57082c408610 --------CA   03950   GOSUB 3790
    0x57082c408680 --------CA   03960   GOTO 3940
    0x57082c408700 --------CA T 03970   PRINT
    0x57082c408960 --------CA   03980   PRINT "IT IS STARDATE"T
    0x57082c4089e0 --------CA   03990   GOTO 4020
    0x57082c408a90 --------CA T 04000   PRINT
    0x57082c408c50 --------CA   04010   PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED"
    0x57082c408fc0 --------CA T 04020   PRINT "THERE ARE STILL"K9" KLINGON BATTLE CRUISERS"
    0x57082c409040 --------CA   04030   GOTO 230
    0x57082c4090f0 --------CA T 04040   PRINT
    0x57082c4092a0 --------CA   04050   PRINT "THE LAST KLINGON BATTLE CRUISER IN THE GALAXY HAS BEEN DESTROYED"
    0x57082c409410 --------CA   04060   PRINT "THE FEDERATION HAS BEEN SAVED !!!"
    0x57082c4094c0 --------CA   04070   PRINT
    0x57082c409b40 --------CA   04080   PRINT "YOUR EFFICIENCY RATING ="((K7/(T-T0))*1000)
    0x57082c40a220 --------CA   04090   T1=TIM(0)+TIM(1)*60
    0x57082c40ab60 --------CA   04100   PRINT "YOUR ACTUAL TIME OF MISSION ="INT((((T1-T7)*.4)-T7)*100)" MINUTES"
    0x57082c40abf0 --------CA   04110   GOTO 230
    0x57082c40b110 ---------D G 04120   FOR I=S1-1 TO S1+1
    0x57082c40b650 ---------D   04130   FOR J=S2-1 TO S2+1
    0x57082c40bf10 ---------D   04140   IF I<1 OR I>8 OR J<1 OR J>8 THEN 4200
    0x57082c40c150 ---------D   04150   A$=">!<"
    0x57082c40c380 ---------D   04160   Z1=I
    0x57082c40c5b0 ---------D   04170   Z2=J
    0x57082c40c620 ---------D   04180   GOSUB 5680
    0x57082c40c870 ---------D   04190   IF Z3=1 THEN 4240
    0x57082c40c9b0 ---------D T 04200   NEXT J
    0x57082c40cb00 ---------D   04210   NEXT I
    0x57082c40cd30 ---------D   04220   D0=0
    0x57082c40cda0 ---------D   04230   GOTO 4310
    0x57082c40cfb0 ---------D T 04240   D0=1
    0x57082c40d1e0 ---------D   04250   C$="DOCKED"
    0x57082c40d3f0 ---------D   04260   E=3000
    0x57082c40d620 ---------D   04270   P=10
    0x57082c40d780 ---------D   04280   PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x57082c40d9a0 ---------D   04290   S=0
    0x57082c40da10 ---------D   04300   GOTO 4380
    0x57082c40dc70 ---------D T 04310   IF K3>0 THEN 4350
    0x57082c40dff0 ---------D   04320   IF E<E0*.1 THEN 4370
    0x57082c40e230 ---------D   04330   C$="GREEN"
    0x57082c40e2a0 ---------D   04340   GOTO 4380
    0x57082c40e4d0 ---------D T 04350   C$="RED"
    0x57082c40e540 ---------D   04360   GOTO 4380
    0x57082c40e780 ---------D T 04370   C$="YELLOW"
    0x57082c40ea90 ---------D T 04380   IF D[2] >= 0 THEN 4430
    0x57082c40eb30 ---------D   04390   PRINT
    0x57082c40eca0 ---------D   04400   PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x57082c40ed20 ---------D   04410   PRINT
    0x57082c40eda0 ---------D   04420   GOTO 4530
    0x57082c40eeb0 ---------D T 04430   PRINT  USING 4540
    0x57082c410450 ---------D   04440   PRINT  USING 4550;Q$[1,3],Q$[4,6],Q$[7,9],Q$[10,12],Q$[13,15],Q$[16,18],Q$[19,21],Q$[22,24]
    0x57082c411af0 ---------D   04450   PRINT  USING 4560;Q$[25,27],Q$[28,30],Q$[31,33],Q$[34,36],Q$[37,39],Q$[40,42],Q$[43,45],Q$[46,48],T
    0x57082c413180 ---------D   04460   PRINT  USING 4570;Q$[49,51],Q$[52,54],Q$[55,57],Q$[58,60],Q$[61,63],Q$[64,66],Q$[67,69],Q$[70,72],C$
    0x57082c414920 ---------D   04470   PRINT  USING 4580;R$[1,3],R$[4,6],R$[7,9],R$[10,12],R$[13,15],R$[16,18],R$[19,21],R$[22,24],Q1,Q2
    0x57082c4160c0 ---------D   04480   PRINT  USING 4590;R$[25,27],R$[28,30],R$[31,33],R$[34,36],R$[37,39],R$[40,42],R$[43,45],R$[46,48],S1,S2
    0x57082c417750 ---------D   04490   PRINT  USING 4600;R$[49,51],R$[52,54],R$[55,57],R$[58,60],R$[61,63],R$[64,66],R$[67,69],R$[70,72],E
    0x57082c418df0 ---------D   04500   PRINT  USING 4610;S$[1,3],S$[4,6],S$[7,9],S$[10,12],S$[13,15],S$[16,18],S$[19,21],S$[22,24],P
    0x57082c41a430 ---------D   04510   PRINT  USING 4620;S$[25,27],S$[28,30],S$[31,33],S$[34,36],S$[37,39],S$[40,42],S$[43,45],S$[46,48],S
    0x57082c41a570 ---------D   04520   PRINT  USING 4540
    0x57082c41a5d0 ---------D T 04530   RETURN 
    0x57082c41a680 ----------   04540   IMAGE  "---------------------------------"
    0x57082c41a710 ----------   04550   IMAGE  8(X,3A)
    0x57082c41a7d0 ----------   04560   IMAGE  8(X,3A),8X,"STARDATE",8X,5D
    0x57082c41a890 ----------   04570   IMAGE  8(X,3A),8X,"CONDITION",8X,6A
    0x57082c41a950 ----------   04580   IMAGE  8(X,3A),8X,"QUADRANT",9X,D,",",D
    0x57082c41aa10 ----------   04590   IMAGE  8(X,3A),8X,"SECTOR",11X,D,",",D
    0x57082c41aac0 ----------   04600   IMAGE  8(X,3A),8X,"ENERGY",9X,6D
    0x57082c41ab80 ----------   04610   IMAGE  8(X,3A),8X,"PHOTON TORPEDOES",3D
    0x57082c41ac30 ----------   04620   IMAGE  8(X,3A),8X,"SHIELDS",8X,6D
    0x57082c41af80 --------CA T 04630   IF D[8] >= 0 THEN 4660
    0x57082c41b0e0 --------CA   04640   PRINT "COMPUTER DISABLED"
    0x57082c41b180 --------CA   04650   GOTO 1270
    0x57082c41b300 --------CA T 04660   PRINT "COMPUTER ACTIVE AND AWAITING COMMAND";
    0x57082c41b470 --------CA   04670   INPUT A
    0x57082c41b930 --------CA   04680   GOTO A+1 OF 4740,4830,4880
    0x57082c41bac0 --------CA   04690   PRINT "FUNCTIONS AVAILABLE FROM COMPUTER"
    0x57082c41bc40 --------CA   04700   PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x57082c41bdc0 --------CA   04710   PRINT "   1 = STATUS REPORT"
    0x57082c41bf30 --------CA   04720   PRINT "   2 = PHOTON TORPEDO DATA"
    0x57082c41bfc0 --------CA   04730   GOTO 4660
    0x57082c41c320 --------CA T 04740   PRINT  USING 4750;Q1,Q2
    0x57082c41c3c0 --------CA   04750   IMAGE  "COMPUTER RECORD OF GALAXY FOR QUADRANT ",D,",",D
    0x57082c41c510 --------CA   04760   PRINT  USING 5330
    0x57082c41c650 --------CA   04770   PRINT  USING 5360
    0x57082c41c970 --------CA   04780   FOR I=1 TO 8
    0x57082c41e0b0 --------CA   04790   PRINT  USING 5350;I,Z[I,1],Z[I,2],Z[I,3],Z[I,4],Z[I,5],Z[I,6],Z[I,7],Z[I,8]
    0x57082c41e1f0 --------CA   04800   PRINT  USING 5360
    0x57082c41e330 --------CA   04810   NEXT I
    0x57082c41e3d0 --------CA   04820   GOTO 1270
    0x57082c41e550 --------CA T 04830   PRINT "\012   STATUS REPORT\012"
    0x57082c41e7e0 --------CA   04840   PRINT "NUMBER OF KLINGONS LEFT ="K9
    0x57082c41ecf0 --------CA   04850   PRINT "NUMBER OF STARDATES LEFT ="(T0+T9)-T
    0x57082c41ef60 --------CA   04860   PRINT "NUMBER OF STARBASES LEFT ="B9
    0x57082c41efe0 --------CA   04870   GOTO 3560
    0x57082c41f050 --------CA T 04880   PRINT 
    0x57082c41f270 --------CA   04890   H8=0
    0x57082c41f550 --------CA   04900   FOR I=1 TO 3
    0x57082c41f950 --------CA   04910   IF K[I,3] <= 0 THEN 5260
    0x57082c41fb90 --------CA   04920   C1=S1
    0x57082c41fdc0 --------CA   04930   A=S2
    0x57082c420190 --------CA   04940   W1=K[I,1]
    0x57082c420560 --------CA   04950   X=K[I,2]
    0x57082c4205e0 --------CA   04960   GOTO 5010
    0x57082c420b50 --------CA T 04970   PRINT  USING 4980;Q1,Q2,S1,S2
    0x57082c420c00 --------CA   04980   IMAGE  "YOU ARE AT QUADRANT ( ",D,",",D," )  SECTOR ( ",D,",",D," )"
    0x57082c420dc0 --------CA   04990   PRINT "SHIP'S & TARGET'S COORDINATES ARE";
    0x57082c4211c0 --------CA   05000   INPUT C1,A,W1,X
    0x57082c421520 --------CA T 05010   X=X-A
    0x57082c421870 --------CA   05020   A=C1-W1
    0x57082c421ac0 --------CA   05030   IF X<0 THEN 5130
    0x57082c421d20 --------CA   05040   IF A<0 THEN 5190
    0x57082c421f80 --------CA   05050   IF X>0 THEN 5070
    0x57082c4221e0 --------CA   05060   IF A=0 THEN 5150
    0x57082c422410 --------CA T 05070   C1=1
    0x57082c422870 --------CA T 05080   IF ABS(A) <= ABS(X) THEN 5110
    0x57082c423390 --------CA   05090   PRINT "DIRECTION ="C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
    0x57082c423430 --------CA   05100   GOTO 5240
    0x57082c423ac0 --------CA T 05110   PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
    0x57082c423b40 --------CA   05120   GOTO 5240
    0x57082c423d90 --------CA T 05130   IF A>0 THEN 5170
    0x57082c423ff0 --------CA   05140   IF X=0 THEN 5190
    0x57082c424210 --------CA T 05150   C1=5
    0x57082c3f12d0 --------CA   05160   GOTO 5080
    0x57082c3f14e0 --------CA T 05170   C1=3
    0x57082c3f1550 --------CA   05180   GOTO 5200
    0x57082c3f1770 --------CA T 05190   C1=7
    0x57082c3f1bd0 --------CA T 05200   IF ABS(A) >= ABS(X) THEN 5230
    0x57082c4266b0 --------CA   05210   PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
    0x57082c426750 --------CA   05220   GOTO 5240
    0x57082c426df0 --------CA T 05230   PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
    0x57082c427490 --------CA T 05240   PRINT "DISTANCE ="(SQR(X^2+A^2))
    0x57082c4276f0 --------CA   05250   IF H8=1 THEN 5320
    0x57082c427830 --------CA T 05260   NEXT I
    0x57082c427a80 --------CA   05270   H8=0
    0x57082c427c00 --------CA T 05280   PRINT "DO YOU WANT TO USE THE CALCULATOR";
    0x57082c427d70 --------CA   05290   INPUT A$
    0x57082c428000 --------CA   05300   IF A$="YES" THEN 4970
    0x57082c428280 --------CA   05310   IF A$ <> "NO" THEN 5280
    0x57082c428330 --------CA T 05320   GOTO 1270
    0x57082c4283c0 ----------   05330   IMAGE  "     1     2     3     4     5     6     7     8"
    0x57082c4284a0 ----------   05340   IMAGE  "---------------------------------------------------"
    0x57082c428530 ----------   05350   IMAGE  D,8(3X,3D)
    0x57082c428610 ----------   05360   IMAGE  "   ----- ----- ----- ----- ----- ----- ----- -----"
    0x57082c428710 ----------   05370   IMAGE  " WARP ENGINES SHUTDOWN AT SECTOR ",D,",",D," DUE TO BAD NAVIGATION"
    0x57082c428d20 ---------E B 05380   R1=INT(RND(1)*8+1)
    0x57082c4292f0 ---------E   05390   R2=INT(RND(1)*8+1)
    0x57082c429520 ---------E   05400   A$="   "
    0x57082c429750 ---------E   05410   Z1=R1
    0x57082c429980 ---------E   05420   Z2=R2
    0x57082c4299f0 ---------E   05430   GOSUB 5680
    0x57082c429c40 ---------E   05440   IF Z3=0 THEN 5380
    0x57082c429ca0 ---------E   05450   RETURN
    0x57082c429f80 ---------F G 05460   FOR I=1 TO 11
    0x57082c42a000 ---------F   05470   PRINT
    0x57082c42a140 ---------F   05480   NEXT I
    0x57082c42a1d0 ---------F   05490   PRINT
    0x57082c42a230 ---------F   05500   RETURN
    0x57082c42a310 ---------G G 05510   REM ******  INSERTION IN STRING ARRAY FOR QUADRANT ******
    0x57082c42aa50 ---------G   05520   S8=Z1*24+Z2*3-26
    0x57082c42aca0 ---------G   05530   IF S8>72 THEN 5560
    0x57082c42b1a0 ---------G   05540   Q$[S8,S8+2]=A$
    0x57082c42b220 ---------G   05550   GOTO 5600
    0x57082c42b480 ---------G T 05560   IF S8>144 THEN 5590
    0x57082c42ba80 ---------G   05570   R$[S8-72,S8-70]=A$
    0x57082c42bb00 ---------G   05580   GOTO 5600
    0x57082c42c0f0 ---------G T 05590   S$[S8-144,S8-142]=A$
    0x57082c42c140 ---------G T 05600   RETURN
    0x57082c42c200 ---------H G 05610   REM ****  PRINTS DEVICE NAME FROM ARRAY *****
    0x57082c42c660 ---------H   05620   S8=R1*12-11
    0x57082c42c8c0 ---------H   05630   IF S8>72 THEN 5660
    0x57082c42cd00 ---------H   05640   PRINT D$[S8,S8+11];
    0x57082c42cd90 ---------H   05650   GOTO 5670
    0x57082c42d2c0 ---------H T 05660   PRINT E$[S8-72,S8-61];
    0x57082c42d320 ---------H T 05670   RETURN
    0x57082c42d400 ---------I G 05680   REM *******  STRING COMPARISON IN QUADRANT ARRAY **********
    0x57082c42d830 ---------I   05683   Z1=INT(Z1+.5)
    0x57082c42dc40 ---------I   05686   Z2=INT(Z2+.5)
    0x57082c42e290 ---------I   05690   S8=Z1*24+Z2*3-26
    0x57082c42e4b0 ---------I   05700   Z3=0
    0x57082c42e710 ---------I   05710   IF S8>72 THEN 5750
    0x57082c42ec50 ---------I   05720   IF Q$[S8,S8+2] <> A$ THEN 5810
    0x57082c42ee70 ---------I   05730   Z3=1
    0x57082c42eef0 ---------I   05740   GOTO 5810
    0x57082c42f160 ---------I T 05750   IF S8>144 THEN 5790
    0x57082c42f7a0 ---------I   05760   IF R$[S8-72,S8-70] <> A$ THEN 5810
    0x57082c42f9c0 ---------I   05770   Z3=1
    0x57082c42fa50 ---------I   05780   GOTO 5810
    0x57082c430080 ---------I T 05790   IF S$[S8-144,S8-142] <> A$ THEN 5810
    0x57082c4302a0 ---------I   05800   Z3=1
    0x57082c4302f0 ---------I T 05810   RETURN
    0x57082c430470 ---------J G 05820   PRINT "     INSTRUCTIONS:"
    0x57082c4305e0 ---------J   05830   PRINT "<*> = ENTERPRISE"
    0x57082c430750 ---------J   05840   PRINT "+++ = KLINGON"
    0x57082c4308c0 ---------J   05850   PRINT ">!< = STARBASE"
    0x57082c430a40 ---------J   05860   PRINT " *  = STAR"
    0x57082c430be0 ---------J   05870   PRINT "COMMAND 0 = WARP ENGINE CONTROL"
    0x57082c430da0 ---------J   05880   PRINT "  'COURSE' IS IN A CIRCULAR NUMERICAL          4  3  2"
    0x57082c430f50 ---------J   05890   PRINT "  VECTOR ARRANGEMENT AS SHOWN.                  \ ^ /"
    0x57082c431100 ---------J   05900   PRINT "  INTERGER AND REAL VALUES MAY BE                \^/"
    0x57082c4312c0 ---------J   05910   PRINT "  USED.  THEREFORE COURSE 1.5 IS              5 ----- 1"
    0x57082c431470 ---------J   05920   PRINT "  HALF WAY BETWEEN 1 AND 2.                      /^\"
    0x57082c431620 ---------J   05930   PRINT "                                                / ^ \"
    0x57082c4317c0 ---------J   05940   PRINT "  A VECTOR OF 9 IS UNDEFINED, BUT              6  7  8"
    0x57082c431960 ---------J   05950   PRINT "  VALUES MAY APPROACH 9."
    0x57082c431b00 ---------J   05960   PRINT "                                               COURSE"
    0x57082c431c90 ---------J   05970   PRINT "  ONE 'WARP FACTOR' IS THE SIZE OF"
    0x57082c431e20 ---------J   05980   PRINT "  ONE QUADRANT.  THEREFORE TO GET"
    0x57082c431fb0 ---------J   05990   PRINT "  FROM QUADRANT 6,5 TO 5,5 YOU WOULD"
    0x57082c432140 ---------J   06000   PRINT "  USE COURSE 3, WARP FACTOR 1"
    0x57082c4322e0 ---------J   06010   PRINT "COMMAND 1 = SHORT RANGE SENSOR SCAN"
    0x57082c432490 ---------J   06020   PRINT "  PRINTS THE QUADRANT YOU ARE CURRENTLY IN, INCLUDING"
    0x57082c432640 ---------J   06030   PRINT "  STARS, KLINGONS, STARBASES, AND THE ENTERPRISE; ALONG"
    0x57082c4327d0 ---------J   06040   PRINT "  WITH OTHER PERTINATE INFORMATION."
    0x57082c432970 ---------J   06050   PRINT "COMMAND 2 = LONG RANGE SENSOR SCAN"
    0x57082c432b30 ---------J   06060   PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x57082c432cf0 ---------J   06070   PRINT "  OF THE ENTERPRISE IN THE MIDDLE OF THE SCAN.  THE SCAN"
    0x57082c432eb0 ---------J   06080   PRINT "  IS CODED IN THE FORM XXX, WHERE THE UNITS DIGIT IS THE"
    0x57082c433070 ---------J   06090   PRINT "  NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF STAR-"
    0x57082c433220 ---------J   06100   PRINT "  BASES, THE HUNDREDS DIGIT IS THE NUMBER OF KLINGONS."
    0x57082c4333c0 ---------J   06110   PRINT "COMMAND 3 = PHASER CONTROL"
    0x57082c433580 ---------J   06120   PRINT "  ALLOWS YOU TO DESTROY THE KLINGONS BY HITTING HIM WITH"
    0x57082c433740 ---------J   06130   PRINT "  SUITABLY LARGE NUMBERS OF ENERGY UNITS TO DEPLETE HIS "
    0x57082c4338e0 ---------J   06140   PRINT "  SHIELD POWER.  KEEP IN MIND THAT WHEN YOU SHOOT AT"
    0x57082c433a70 ---------J   06150   PRINT "  HIM, HE GONNA DO IT TO YOU TOO."
    0x57082c433c10 ---------J   06160   PRINT "COMMAND 4 = PHOTON TORPEDO CONTROL"
    0x57082c433dc0 ---------J   06170   PRINT "  COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL"
    0x57082c433f80 ---------J   06180   PRINT "  IF YOU HIT THE KLINGON, HE IS DESTROYED AND CANNOT FIRE"
    0x57082c434110 ---------J   06190   PRINT "  BACK AT YOU.  IF YOU MISS, HE WILL SHOOT HIS PHASERS AT"
    0x57082c4342a0 ---------J   06200   PRINT "  YOU."
    0x57082c434460 ---------J   06210   PRINT "   NOTE: THE LIBRARY COMPUTER (COMMAND 7) HAS AN OPTION"
    0x57082c434600 ---------J   06220   PRINT "   TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
    0x57082c4347b0 ---------J   06230   PRINT "COMMAND 5 = SHIELD CONTROL"
    0x57082c434970 ---------J   06240   PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS"
    0x57082c434b10 ---------J   06250   PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY."
    0x57082c434cc0 ---------J   06260   PRINT "COMMAND 6 = DAMAGE CONTROL REPORT"
    0x57082c434e80 ---------J   06270   PRINT "  GIVES STATE OF REPAIRS OF ALL DEVICES.  A STATE OF REPAIR"
    0x57082c435020 ---------J   06280   PRINT "  LESS THAN ZERO SHOWS THAT THAT DEVICE IS TEMPORARALY"
    0x57082c4351a0 ---------J   06290   PRINT "  DAMAGED."
    0x57082c435340 ---------J   06300   PRINT "COMMAND 7 = LIBRARY COMPUTER"
    0x57082c4354e0 ---------J   06310   PRINT "  THE LIBRARY COMPUTER CONTAINS THREE OPTIONS:"
    0x57082c435690 ---------J   06320   PRINT "    OPTION 0 = CUMULATIVE GALACTIC RECORD"
    0x57082c435840 ---------J   06330   PRINT "     SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
    0x57082c4359d0 ---------J   06340   PRINT "     LONG RANGE SENSOR SCANS"
    0x57082c435b70 ---------J   06350   PRINT "    OPTION 1 = STATUS REPORT"
    0x57082c435d10 ---------J   06360   PRINT "     SHOWS NUMBER OF KLINGONS, STARDATES AND STARBASES"
    0x57082c435e90 ---------J   06370   PRINT "     LEFT."
    0x57082c436030 ---------J   06380   PRINT "    OPTION 2 = PHOTON TORPEDO DATA"
    0x57082c4361e0 ---------J   06390   PRINT "     GIVES TRAJECTORY AND DISTANCE BETWEEN THE ENTERPRISE"
    0x57082c436360 ---------J   06400   PRINT "     AND ALL KLINGONS IN YOUR QUADRANT"
    0x57082c4363c0 ---------J   06410   RETURN
    0x57082c436420 ---------A   06420   END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00230      00210T, 04030T, 04110T
     00490      00775T
     00580      00530T
     00610      00540T
     00640      00550T
     00660      00570T, 00600T, 00630T
     00700      00670T
     00720      00690T
     00810      02320T
     00910      00870T, 00880T
     00920      00820T
     01260      01290T, 02160T
     01270      01400T, 01430T, 01600T, 02360T, 02500T, 02560T, 02620T, 02790T, 
                02820T, 02850T, 02880T, 03450T, 03480T, 03510T, 03550T, 03580T, 
                03660T, 03680T, 04650T, 04820T, 05320T
     01410      01290T, 01440T, 01470T, 01500T
     01510      01480T
     01560      01510T, 01530T
     01610      01550T, 01560T
     01640      01620T
     01750      01670T
     01810      01650T, 01740T
     02070      01990T
     02080      02060T
     02150      02130T
     02170      01940T
     02260      02230T
     02290      02260T
     02330      01290T
     02370      02330T
     02460      02420T, 02440T
     02530      01290T
     02570      02540T, 02630T
     02590      02570T
     02680      02660T
     02770      02690T, 02740T
     02800      01290T
     02830      02800T
     02860      02830T, 02890T
     02960      03060T, 03330T
     03070      03050T
     03190      03170T
     03200      03180T
     03220      03110T
     03290      03260T
     03360      03210T
     03420      02980T, 03280T
     03430      03410T
     03460      01290T
     03490      03460T, 03520T
     03560      01290T, 04870T
     03590      03560T
     03670      02530T
     03690      02750G
     03790      01520G, 02650G, 03430G, 03950G
     03820      03790T
     03900      03840T
     03910      03820T
     03920      01570T
     03940      03960T
     03970      02150T, 02310T
     04000      01540T, 02780T, 03440T, 03890T
     04020      03940T, 03990T
     04040      02760T, 03150T
     04120      01260G
     04200      04140T
     04240      04190T
     04310      04230T
     04350      04310T
     04370      04320T
     04380      04300T, 04340T, 04360T
     04430      04380T
     04530      04420T
     04630      01290T
     04660      04630T, 04730T
     04740      04680T
     04830      04680T
     04880      04680T
     04970      05300T
     05010      04960T
     05070      05050T
     05080      05160T
     05110      05080T
     05130      05030T
     05150      05060T
     05170      05130T
     05190      05040T, 05140T
     05200      05180T
     05230      05200T
     05240      05100T, 05120T, 05220T
     05260      04910T
     05280      05310T
     05320      05250T
     05380      01030G, 01130G, 01200G, 05440T
     05460      00170G, 00250G
     05510      01010G, 01070G, 01170G, 01240G, 01850G, 02110G, 03390G, 03760G
     05560      05530T
     05590      05560T
     05600      05550T, 05580T
     05610      01710G, 01780G, 03620G
     05660      05630T
     05670      05650T
     05680      01980G, 03040G, 03100G, 03250G, 03320G, 04180G, 05430G
     05750      05710T
     05790      05750T
     05810      05720T, 05740T, 05760T, 05780T, 05790T
     05820      00220G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x57082c3b9bf0 (00000)   0x57082c3b9bf0 (00000)   0x57082c436420 (06420)   0x57082c436420 (06420)   
   B) 0x57082c403da0 (03690)   0x57082c403da0 (03690)   0x57082c405790 (03780)   0x57082c405790 (03780)   
   C) 0x57082c3c0a20 (00230)   0x57082c405a40 (03790)   0x57082c405c20 (03810)   0x57082c428330 (05320)   
   D) 0x57082c40b110 (04120)   0x57082c40b110 (04120)   0x57082c41a5d0 (04530)   0x57082c41a5d0 (04530)   
   E) 0x57082c428d20 (05380)   0x57082c428d20 (05380)   0x57082c429ca0 (05450)   0x57082c429ca0 (05450)   
   F) 0x57082c429f80 (05460)   0x57082c429f80 (05460)   0x57082c42a230 (05500)   0x57082c42a230 (05500)   
   G) 0x57082c42a310 (05510)   0x57082c42a310 (05510)   0x57082c42c140 (05600)   0x57082c42c140 (05600)   
   H) 0x57082c42c200 (05610)   0x57082c42c200 (05610)   0x57082c42d320 (05670)   0x57082c42d320 (05670)   
   I) 0x57082c42d400 (05680)   0x57082c42d400 (05680)   0x57082c4302f0 (05810)   0x57082c4302f0 (05810)   
   J) 0x57082c430470 (05820)   0x57082c430470 (05820)   0x57082c4363c0 (06410)   0x57082c4363c0 (06410)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!
    NOTE: Routine G overlaps, or is tangled with, routine A!
    NOTE: Routine H overlaps, or is tangled with, routine A!
    NOTE: Routine I overlaps, or is tangled with, routine A!
    NOTE: Routine J overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine C!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/mayfield_super_trek.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57082c3b9bf0 ---------A   00000  REM  Extracted from HP tape image 16-Nov-2003 by Pete Turnbull
    0x57082c3bb170 ---------A   00001  REM ****  HP BASIC PROGRAM LIBRARY  ******************************
    0x57082c3bb230 ---------A   00002  REM
    0x57082c3b87f0 ---------A   00003  REM       STTR1
    0x57082c3ba1e0 ---------A   00004  REM
    0x57082c3ba6a0 ---------A   00005  REM       36243  REV B  --  10/73
    0x57082c3b92d0 ---------A   00006  REM
    0x57082c3b9e80 ---------A   00007  REM ****  CONTRIBUTED PROGRAM  ***********************************
    0x57082c3ba270 ---------A   00100  REM *****************************************************************
    0x57082c3ba7c0 ---------A   00110  REM ***                                                           ***
    0x57082c3b9040 ---------A   00120  REM ***     STAR TREK
    0x57082c3b8e90 ---------A   00130  REM ***                                                           ***
    0x57082c3b8be0 ---------A   00140  REM ***        TOTAL INTERACTION GAME - ORIG. 20 OCT 1972
    0x57082c3bb280 ---------A   00150  REM ***                                                           ***
    0x57082c3b9620 ---------A   00160  REM *****************************************************************
    0x57082c3b9670 ---------A   00170  GOSUB 5460
    0x57082c3b96c0 ---------A   00180  PRINT "                          STAR TREK "
    0x57082c3b9720 ---------A   00190  PRINT "DO YOU WANT INSTRUCTIONS (THEY'RE LONG!)";
    0x57082c3b9820 ---------A   00200  INPUT A$
    0x57082c3b98c0 ---------A   00210  IF A$ <> "YES" THEN 230
    0x57082c3b9920 ---------A   00220  GOSUB 5820
    0x57082c3c0a20 --------CA T 00230  REM *****  PROGRAM STARTS HERE *****
    0x57082c3c0c50 --------CA   00240  Z$="                                                                      "
    0x57082c3c0ce0 --------CA   00250  GOSUB 5460
    0x57082c3c1bf0 --------CA   00260  DIM G[8,8],C[9,2],K[3,3],N[3],Z[8,8]
    0x57082c3c2c40 --------CA   00270  DIM C$[6],D$[72],E$[24],A$[3],Q$[72],R$[72],S$[48]
    0x57082c3c2e60 --------CA   00280  DIM Z$[72]
    0x57082c3c3790 --------CA   00290  T0=T=INT(RND(1)*20+20)*100
    0x57082c3c3a60 --------CA   00300  T9=30
    0x57082c3c3d30 --------CA   00310  D0=0
    0x57082c3c41a0 --------CA   00320  E0=E=3000
    0x57082c3c4610 --------CA   00330  P0=P=10
    0x57082c3c48e0 --------CA   00340  S9=200
    0x57082c3c4f80 --------CA   00350  S=H8=0
    0x57082c3c6050 --------CA   00360  DEF FND(D)=SQR((K[I,1]-S1)^2+(K[I,2]-S2)^2)
    0x57082c3c66e0 --------CA   00370  Q1=INT(RND(1)*8+1)
    0x57082c3c6d70 --------CA   00380  Q2=INT(RND(1)*8+1)
    0x57082c3c7340 --------CA   00390  S1=INT(RND(1)*8+1)
    0x57082c3c7920 --------CA   00400  S2=INT(RND(1)*8+1)
    0x57082c3c8090 --------CA   00410  T7=TIM(0)+60*TIM(1)
    0x57082c3c9020 --------CA   00420  C[2,1]=C[3,1]=C[4,1]=C[4,2]=C[5,2]=C[6,2]=-1
    0x57082c3c9d50 --------CA   00430  C[1,1]=C[3,2]=C[5,1]=C[7,2]=C[9,1]=0
    0x57082c3caf20 --------CA   00440  C[1,2]=C[2,2]=C[6,1]=C[7,1]=C[8,1]=C[8,2]=C[9,2]=1
    0x57082c3cb220 --------CA   00450  MAT D=ZER
    0x57082c3cb490 --------CA   00460  D$="WARP ENGINESS.R. SENSORSL.R. SENSORSPHASER CNTRL"
    0x57082c3cb7a0 --------CA   00470  D$[49]="PHOTON TUBESDAMAGE CNTRL"
    0x57082c3cb9d0 --------CA   00480  E$="SHIELD CNTRLCOMPUTER"
    0x57082c3cbe40 --------CA T 00490  B9=K9=0
    0x57082c3cc110 --------CA   00500  FOR I=1 TO 8
    0x57082c3cc4b0 --------CA   00510  FOR J=1 TO 8
    0x57082c3cc870 --------CA   00520  R1=RND(1)
    0x57082c3ccac0 --------CA   00530  IF R1>.98 THEN 580
    0x57082c3ccd20 --------CA   00540  IF R1>.95 THEN 610
    0x57082c3ccf80 --------CA   00550  IF R1>.8 THEN 640
    0x57082c3cd260 --------CA   00560  K3=0
    0x57082c3cd2d0 --------CA   00570  GOTO 660
    0x57082c3cd4e0 --------CA T 00580  K3=3
    0x57082c3cd810 --------CA   00590  K9=K9+3
    0x57082c3cd880 --------CA   00600  GOTO 660
    0x57082c3cda90 --------CA T 00610  K3=2
    0x57082c3cddc0 --------CA   00620  K9=K9+2
    0x57082c3cde30 --------CA   00630  GOTO 660
    0x57082c3ce040 --------CA T 00640  K3=1
    0x57082c3ce370 --------CA   00650  K9=K9+1
    0x57082c3ce660 --------CA T 00660  R1=RND(1)
    0x57082c3cecc0 --------CA   00670  IF R1>.96 THEN 700
    0x57082c3cefa0 --------CA   00680  B3=0
    0x57082c3cf010 --------CA   00690  GOTO 720
    0x57082c3cf220 --------CA T 00700  B3=1
    0x57082c3cf550 --------CA   00710  B9=B9+1
    0x57082c3cfbf0 --------CA T 00720  S3=INT(RND(1)*8+1)
    0x57082c3d0420 --------CA   00730  G[I,J]=K3*100+B3*10+S3
    0x57082c3d07f0 --------CA   00740  Z[I,J]=0
    0x57082c3d0920 --------CA   00750  NEXT J
    0x57082c3d0a70 --------CA   00760  NEXT I
    0x57082c3d0d90 --------CA   00770  K7=K9
    0x57082c3d1240 --------CA   00775  IF B9 <= 0 OR K9 <= 0 THEN 490
    0x57082c3d19a0 --------CA   00780  PRINT "YOU MUST DESTROY"K9;" KLINGONS IN"T9;" STARDATES WITH"B9;" STARBASES"
    0x57082c3d1da0 --------CA T 00810  K3=B3=S3=0
    0x57082c3d2650 --------CA   00820  IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 920
    0x57082c3d2c10 --------CA   00830  X=G[Q1,Q2]*.01
    0x57082c3d2f20 --------CA   00840  K3=INT(X)
    0x57082c3d34a0 --------CA   00850  B3=INT((X-K3)*10)
    0x57082c3d3e50 --------CA   00860  S3=G[Q1,Q2]-INT(G[Q1,Q2]*.1)*10
    0x57082c3d40a0 --------CA   00870  IF K3=0 THEN 910
    0x57082c3d4320 --------CA   00880  IF S>200 THEN 910
    0x57082c3d44a0 --------CA   00890  PRINT "COMBAT AREA      CONDITION RED"
    0x57082c3d4610 --------CA   00900  PRINT "   SHIELDS DANGEROUSLY LOW"
    0x57082c3d4830 --------CA T 00910  MAT K=ZER
    0x57082c3d4b10 --------CA T 00920  FOR I=1 TO 3
    0x57082c3d4ed0 --------CA   00930  K[I,3]=0
    0x57082c3d5000 --------CA   00940  NEXT I
    0x57082c3d5250 --------CA   00950  Q$=Z$
    0x57082c3d5480 --------CA   00960  R$=Z$
    0x57082c3d5830 --------CA   00970  S$=Z$[1,48]
    0x57082c3d5a60 --------CA   00980  A$="<*>"
    0x57082c3d5d50 --------CA   00990  Z1=S1
    0x57082c3d6040 --------CA   01000  Z2=S2
    0x57082c3d60b0 --------CA   01010  GOSUB 5510
    0x57082c3d63a0 --------CA   01020  FOR I=1 TO K3
    0x57082c3d6420 --------CA   01030  GOSUB 5380
    0x57082c3d6650 --------CA   01040  A$="+++"
    0x57082c3d6880 --------CA   01050  Z1=R1
    0x57082c3d6b70 --------CA   01060  Z2=R2
    0x57082c3d6be0 --------CA   01070  GOSUB 5510
    0x57082c3d6fb0 --------CA   01080  K[I,1]=R1
    0x57082c3d7380 --------CA   01090  K[I,2]=R2
    0x57082c3d7750 --------CA   01100  K[I,3]=S9
    0x57082c3d7880 --------CA   01110  NEXT I
    0x57082c3d7b90 --------CA   01120  FOR I=1 TO B3
    0x57082c3d7c10 --------CA   01130  GOSUB 5380
    0x57082c3d7e40 --------CA   01140  A$=">!<"
    0x57082c3d8070 --------CA   01150  Z1=R1
    0x57082c3d82a0 --------CA   01160  Z2=R2
    0x57082c3d8310 --------CA   01170  GOSUB 5510
    0x57082c3d8440 --------CA   01180  NEXT I
    0x57082c3d8750 --------CA   01190  FOR I=1 TO S3
    0x57082c3d87d0 --------CA   01200  GOSUB 5380
    0x57082c3d8a00 --------CA   01210  A$=" * "
    0x57082c3d8c30 --------CA   01220  Z1=R1
    0x57082c3d8e60 --------CA   01230  Z2=R2
    0x57082c3d8ed0 --------CA   01240  GOSUB 5510
    0x57082c3d9000 --------CA   01250  NEXT I
    0x57082c3d9090 --------CA T 01260  GOSUB 4120
    0x57082c3d9200 --------CA T 01270  PRINT "COMMAND:";
    0x57082c3d9450 --------CA   01280  INPUT A
    0x57082c3d9cb0 --------CA   01290  GOTO A+1 OF 1410,1260,2330,2530,2800,3460,3560,4630
    0x57082c3d9d40 --------CA   01300  PRINT
    0x57082c3d9ec0 --------CA   01310  PRINT "   0 = SET COURSE"
    0x57082c3da860 --------CA   01320  PRINT "   1 = SHORT RANGE SENSOR SCAN"
    0x57082c3da9e0 --------CA   01330  PRINT "   2 = LONG RANGE SENSOR SCAN"
    0x57082c3dab60 --------CA   01340  PRINT "   3 = FIRE PHASERS"
    0x57082c3dace0 --------CA   01350  PRINT "   4 = FIRE PHOTON TORPEDOES"
    0x57082c3dae60 --------CA   01360  PRINT "   5 = SHIELD CONTROL"
    0x57082c3daff0 --------CA   01370  PRINT "   6 = DAMAGE CONTROL REPORT"
    0x57082c3db160 --------CA   01380  PRINT "   7 = CALL ON LIBRARY COMPUTER"
    0x57082c3db1e0 --------CA   01390  PRINT
    0x57082c3db270 --------CA   01400  GOTO 1270
    0x57082c3db3e0 --------CA T 01410  PRINT "COURSE (1-9):";
    0x57082c3db600 --------CA   01420  INPUT C1
    0x57082c3db870 --------CA   01430  IF C1=0 THEN 1270
    0x57082c3dbd00 --------CA   01440  IF C1<1 OR C1 >= 9 THEN 1410
    0x57082c3dbe80 --------CA   01450  PRINT "WARP FACTOR (0-8):";
    0x57082c3dc0b0 --------CA   01460  INPUT W1
    0x57082c3dc550 --------CA   01470  IF W1<0 OR W1>8 THEN 1410
    0x57082c3dcac0 --------CA   01480  IF D[1] >= 0 OR W1 <= .2 THEN 1510
    0x57082c3dcc40 --------CA   01490  PRINT "WARP ENGINES ARE DAMAGED, MAXIMUM SPEED = WARP .2"
    0x57082c3dccd0 --------CA   01500  GOTO 1410
    0x57082c3dcf20 --------CA T 01510  IF K3 <= 0 THEN 1560
    0x57082c3dcfb0 --------CA   01520  GOSUB 3790
    0x57082c3dd200 --------CA   01530  IF K3 <= 0 THEN 1560
    0x57082c3dd460 --------CA   01540  IF S<0 THEN 4000
    0x57082c3dd4e0 --------CA   01550  GOTO 1610
    0x57082c3dd730 --------CA T 01560  IF E>0 THEN 1610
    0x57082c3dd9b0 --------CA   01570  IF S<1 THEN 3920
    0x57082c3ddd50 --------CA   01580  PRINT "YOU HAVE"E" UNITS OF ENERGY"
    0x57082c3de0d0 --------CA   01590  PRINT "SUGGEST YOU GET SOME FROM YOUR SHIELDS WHICH HAVE"S" UNITS LEFT"
    0x57082c3de150 --------CA   01600  GOTO 1270
    0x57082c3de430 --------CA T 01610  FOR I=1 TO 8
    0x57082c3de770 --------CA   01620  IF D[I] >= 0 THEN 1640
    0x57082c3dec70 --------CA   01630  D[I]=D[I]+1
    0x57082c3deda0 --------CA T 01640  NEXT I
    0x57082c3df0f0 --------CA   01650  IF RND(1)>.2 THEN 1810
    0x57082c3df6e0 --------CA   01660  R1=INT(RND(1)*8+1)
    0x57082c3dfa00 --------CA   01670  IF RND(1) >= .5 THEN 1750
    0x57082c3e0220 --------CA   01680  D[R1]=D[R1]-(RND(1)*5+1)
    0x57082c3e02a0 --------CA   01690  PRINT
    0x57082c3e0430 --------CA   01700  PRINT "DAMAGE CONTROL REPORT:";
    0x57082c3e04b0 --------CA   01710  GOSUB 5610
    0x57082c3e0600 --------CA   01720  PRINT " DAMAGED"
    0x57082c3e0680 --------CA   01730  PRINT
    0x57082c3e0710 --------CA   01740  GOTO 1810
    0x57082c3e0f20 --------CA T 01750  D[R1]=D[R1]+(RND(1)*5+1)
    0x57082c3e0fa0 --------CA   01760  PRINT
    0x57082c3e1130 --------CA   01770  PRINT "DAMAGE CONTROL REPORT:";
    0x57082c3e11c0 --------CA   01780  GOSUB 5610
    0x57082c3e1320 --------CA   01790  PRINT " STATE OF REPAIR IMPROVED"
    0x57082c3e13a0 --------CA   01800  PRINT
    0x57082c3e17c0 --------CA T 01810  N=INT(W1*8)
    0x57082c3e19f0 --------CA   01820  A$="   "
    0x57082c3e1c20 --------CA   01830  Z1=S1
    0x57082c3e1e50 --------CA   01840  Z2=S2
    0x57082c3e1ec0 --------CA   01850  GOSUB 5510
    0x57082c3e20f0 --------CA   01870  X=S1
    0x57082c3e23e0 --------CA   01880  Y=S2
    0x57082c3e27d0 --------CA   01885  C2=INT(C1)
    0x57082c3e35c0 --------CA   01890  X1=C[C2,1]+(C[C2+1,1]-C[C2,1])*(C1-C2)
    0x57082c3e4390 --------CA   01900  X2=C[C2,2]+(C[C2+1,2]-C[C2,2])*(C1-C2)
    0x57082c3e4680 --------CA   01910  FOR I=1 TO N
    0x57082c3e49e0 --------CA   01920  S1=S1+X1
    0x57082c3e4d60 --------CA   01930  S2=S2+X2
    0x57082c3e5610 --------CA   01940  IF S1<.5 OR S1 >= 8.5 OR S2<.5 OR S2 >= 8.5 THEN 2170
    0x57082c3e5850 --------CA   01950  A$="   "
    0x57082c3e5a80 --------CA   01960  Z1=S1
    0x57082c3e5cb0 --------CA   01970  Z2=S2
    0x57082c3e5d30 --------CA   01980  GOSUB 5680
    0x57082c3e6050 --------CA   01990  IF Z3 <> 0 THEN 2070
    0x57082c3e6390 --------CA   02030  PRINT  USING 5370;S1,S2
    0x57082c3e66f0 --------CA   02040  S1=S1-X1
    0x57082c3e6a40 --------CA   02050  S2=S2-X2
    0x57082c3e6ab0 --------CA   02060  GOTO 2080
    0x57082c3e6be0 --------CA T 02070  NEXT I
    0x57082c3e6e30 --------CA T 02080  A$="<*>"
    0x57082c3e7240 --------CA   02083  S1=INT(S1+.5)
    0x57082c3e7650 --------CA   02086  S2=INT(S2+.5)
    0x57082c3e7880 --------CA   02090  Z1=S1
    0x57082c3e7ab0 --------CA   02100  Z2=S2
    0x57082c3e7b20 --------CA   02110  GOSUB 5510
    0x57082c3e7f70 --------CA   02120  E=E-N+5
    0x57082c3e81c0 --------CA   02130  IF W1<1 THEN 2150
    0x57082c3e8510 --------CA   02140  T=T+1
    0x57082c3e88a0 --------CA T 02150  IF T>T0+T9 THEN 3970
    0x57082c3e8920 --------CA   02160  GOTO 1260
    0x57082c3e8fb0 --------CA T 02170  X=Q1*8+X+X1*N
    0x57082c3e9640 --------CA   02180  Y=Q2*8+Y+X2*N
    0x57082c3e9a50 --------CA   02190  Q1=INT(X/8)
    0x57082c3e9e60 --------CA   02200  Q2=INT(Y/8)
    0x57082c3ea490 --------CA   02210  S1=INT(X-Q1*8+.5)
    0x57082c3eaad0 --------CA   02220  S2=INT(Y-Q2*8+.5)
    0x57082c3ead20 --------CA   02230  IF S1 <> 0 THEN 2260
    0x57082c3eb060 --------CA   02240  Q1=Q1-1
    0x57082c3eb280 --------CA   02250  S1=8
    0x57082c3eb4d0 --------CA T 02260  IF S2 <> 0 THEN 2290
    0x57082c3eb810 --------CA   02270  Q2=Q2-1
    0x57082c3eba20 --------CA   02280  S2=8
    0x57082c3ebd50 --------CA T 02290  T=T+1
    0x57082c3ec1b0 --------CA   02300  E=E-N+5
    0x57082c3ec540 --------CA   02310  IF T>T0+T9 THEN 3970
    0x57082c3ec5d0 --------CA   02320  GOTO 810
    0x57082c3ec900 --------CA T 02330  IF D[3] >= 0 THEN 2370
    0x57082c3ecaa0 --------CA   02340  PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x57082c3ecb40 --------CA   02350  IMAGE  "LONG RANGE SENSOR SCAN FOR QUADRANT",D,",",D
    0x57082c3ecbe0 --------CA   02360  GOTO 1270
    0x57082c3ecf10 --------CA T 02370  PRINT  USING 2350;Q1,Q2
    0x57082c3ed060 --------CA   02380  PRINT  USING 2520
    0x57082c3ed580 --------CA   02390  FOR I=Q1-1 TO Q1+1
    0x57082c3ed7b0 --------CA   02400  MAT N=ZER
    0x57082c3edcf0 --------CA   02410  FOR J=Q2-1 TO Q2+1
    0x57082c3ee5b0 --------CA   02420  IF I<1 OR I>8 OR J<1 OR J>8 THEN 2460
    0x57082c3eecc0 --------CA   02430  N[J-Q2+2]=G[I,J]
    0x57082c3eefd0 --------CA   02440  IF D[7]<0 THEN 2460
    0x57082c3ef590 --------CA   02450  Z[I,J]=G[I,J]
    0x57082c3ef6c0 --------CA T 02460  NEXT J
    0x57082c3efd60 --------CA   02470  PRINT  USING 2510;N[1],N[2],N[3]
    0x57082c3efea0 --------CA   02480  PRINT  USING 2520
    0x57082c3effe0 --------CA   02490  NEXT I
    0x57082c3f0080 --------CA   02500  GOTO 1270
    0x57082c3f00f0 ----------   02510  IMAGE  ": ",3(3D," :")
    0x57082c3f0190 ----------   02520  IMAGE  "-----------------"
    0x57082c3f0420 --------CA T 02530  IF K3 <= 0 THEN 3670
    0x57082c3f0760 --------CA   02540  IF D[4] >= 0 THEN 2570
    0x57082c3f08d0 --------CA   02550  PRINT "PHASER CONTROL IS DISABLED"
    0x57082c3f0960 --------CA   02560  GOTO 1270
    0x57082c3f0c90 --------CA T 02570  IF D[7] >= 0 THEN 2590
    0x57082c3f0e30 --------CA   02580  PRINT " COMPUTER FAILURE HAMPERS ACCURACY"
    0x57082c3f10c0 --------CA T 02590  PRINT "PHASERS LOCKED ON TARGET.  ENERGY AVAILABLE="E
    0x57082c3f1250 --------CA   02600  PRINT "NUMBER OF UNITS TO FIRE:";
    0x57082c3da030 --------CA   02610  INPUT X
    0x57082c3da2a0 --------CA   02620  IF X <= 0 THEN 1270
    0x57082c3da620 --------CA   02630  IF E-X<0 THEN 2570
    0x57082c3f2520 --------CA   02640  E=E-X
    0x57082c3f25a0 --------CA   02650  GOSUB 3790
    0x57082c3f28b0 --------CA   02660  IF D[7] >= 0 THEN 2680
    0x57082c3f2cd0 --------CA   02670  X=X*RND(1)
    0x57082c3f2fb0 --------CA T 02680  FOR I=1 TO 3
    0x57082c3f33c0 --------CA   02690  IF K[I,3] <= 0 THEN 2770
    0x57082c3f3d20 --------CA   02700  H=(X/K3/FND(0))*(2*RND(1))
    0x57082c3f43d0 --------CA   02710  K[I,3]=K[I,3]-H
    0x57082c3f4e20 --------CA   02720  PRINT  USING 2730;H,K[I,1],K[I,2],K[I,3]
    0x57082c3f4ed0 --------CA   02730  IMAGE  4D," UNIT HIT ON KLINGON AT SECTOR ",D,",",D,"   (",3D," LEFT)"
    0x57082c3f52f0 --------CA   02740  IF K[I,3]>0 THEN 2770
    0x57082c3f5380 --------CA   02750  GOSUB 3690
    0x57082c3f55d0 --------CA   02760  IF K9 <= 0 THEN 4040
    0x57082c3f5710 --------CA T 02770  NEXT I
    0x57082c3f5980 --------CA   02780  IF E<0 THEN 4000
    0x57082c3f5a10 --------CA   02790  GOTO 1270
    0x57082c3f5d40 --------CA T 02800  IF D[5] >= 0 THEN 2830
    0x57082c3f5eb0 --------CA   02810  PRINT "PHOTON TUBES ARE NOT OPERATIONAL"
    0x57082c3f5f30 --------CA   02820  GOTO 1270
    0x57082c3f61a0 --------CA T 02830  IF P>0 THEN 2860
    0x57082c3f6310 --------CA   02840  PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x57082c3f63a0 --------CA   02850  GOTO 1270
    0x57082c3f6510 --------CA T 02860  PRINT "TORPEDO COURSE (1-9):";
    0x57082c3f6670 --------CA   02870  INPUT C1
    0x57082c3f68e0 --------CA   02880  IF C1=0 THEN 1270
    0x57082c3f6d60 --------CA   02890  IF C1<1 OR C1 >= 9 THEN 2860
    0x57082c3f70a0 --------CA   02895  C2=INT(C1)
    0x57082c3f7dd0 --------CA   02900  X1=C[C2,1]+(C[C2+1,1]-C[C2,1])*(C1-C2)
    0x57082c3f8ae0 --------CA   02910  X2=C[C2,2]+(C[C2+1,2]-C[C2,2])*(C1-C2)
    0x57082c3f8d10 --------CA   02920  X=S1
    0x57082c3f8f40 --------CA   02930  Y=S2
    0x57082c3f9280 --------CA   02940  P=P-1
    0x57082c3f93d0 --------CA   02950  PRINT "TORPEDO TRACK:"
    0x57082c3f9730 --------CA T 02960  X=X+X1
    0x57082c3f9aa0 --------CA   02970  Y=Y+X2
    0x57082c3fa360 --------CA   02980  IF X<.5 OR X >= 8.5 OR Y<.5 OR Y >= 8.5 THEN 3420
    0x57082c3fa6b0 --------CA   02990  PRINT  USING 3000;X,Y
    0x57082c3fa730 --------CA   03000  IMAGE  15X,D,",",D
    0x57082c3fa980 --------CA   03010  A$="   "
    0x57082c3fabb0 --------CA   03020  Z1=X
    0x57082c3fade0 --------CA   03030  Z2=Y
    0x57082c3fae50 --------CA   03040  GOSUB 5680
    0x57082c3fb0a0 --------CA   03050  IF Z3=0 THEN 3070
    0x57082c3fb120 --------CA   03060  GOTO 2960
    0x57082c3fb350 --------CA T 03070  A$="+++"
    0x57082c3fb580 --------CA   03080  Z1=X
    0x57082c3fb7b0 --------CA   03090  Z2=Y
    0x57082c3fb820 --------CA   03100  GOSUB 5680
    0x57082c3fba80 --------CA   03110  IF Z3=0 THEN 3220
    0x57082c3fbbf0 --------CA   03120  PRINT "*** KLINGON DESTROYED ***"
    0x57082c3fbf30 --------CA   03130  K3=K3-1
    0x57082c3fc270 --------CA   03140  K9=K9-1
    0x57082c3fc4c0 --------CA   03150  IF K9 <= 0 THEN 4040
    0x57082c3fc7b0 --------CA   03160  FOR I=1 TO 3
    0x57082c3fcdc0 --------CA   03170  IF INT(X+.5) <> K[I,1] THEN 3190
    0x57082c3fd3c0 --------CA   03180  IF INT(Y+.5)=K[I,2] THEN 3200
    0x57082c3fd500 --------CA T 03190  NEXT I
    0x57082c3fd8d0 --------CA T 03200  K[I,3]=0
    0x57082c3fd940 --------CA   03210  GOTO 3360
    0x57082c3fdb70 --------CA T 03220  A$=" * "
    0x57082c3fdda0 --------CA   03230  Z1=X
    0x57082c3fdfd0 --------CA   03240  Z2=Y
    0x57082c3fe040 --------CA   03250  GOSUB 5680
    0x57082c3fe2b0 --------CA   03260  IF Z3=0 THEN 3290
    0x57082c3fe420 --------CA   03270  PRINT "YOU CAN'T DESTROY STARS SILLY"
    0x57082c3fe4a0 --------CA   03280  GOTO 3420
    0x57082c3fe6d0 --------CA T 03290  A$=">!<"
    0x57082c3fe900 --------CA   03300  Z1=X
    0x57082c3feb30 --------CA   03310  Z2=Y
    0x57082c3feba0 --------CA   03320  GOSUB 5680
    0x57082c3fee20 --------CA   03330  IF Z3=0 THEN 2960
    0x57082c3fefa0 --------CA   03340  PRINT "*** STAR BASE DESTROYED ***  .......CONGRATULATIONS"
    0x57082c3ff2e0 --------CA   03350  B3=B3-1
    0x57082c3ff510 --------CA T 03360  A$="   "
    0x57082c3ff920 --------CA   03370  Z1=INT(X+.5)
    0x57082c3ffd30 --------CA   03380  Z2=INT(Y+.5)
    0x57082c3ffdb0 --------CA   03390  GOSUB 5510
    0x57082c4005e0 --------CA   03400  G[Q1,Q2]=K3*100+B3*10+S3
    0x57082c400660 --------CA   03410  GOTO 3430
    0x57082c4007b0 --------CA T 03420  PRINT "TORPEDO MISSED"
    0x57082c400830 --------CA T 03430  GOSUB 3790
    0x57082c400a80 --------CA   03440  IF E<0 THEN 4000
    0x57082c400b10 --------CA   03450  GOTO 1270
    0x57082c400e40 --------CA T 03460  IF D[7] >= 0 THEN 3490
    0x57082c400fb0 --------CA   03470  PRINT "SHIELD CONTROL IS NON-OPERATIONAL"
    0x57082c401060 --------CA   03480  GOTO 1270
    0x57082c401500 --------CA T 03490  PRINT "ENERGY AVAILABLE ="E+S"   NUMBER OF UNITS TO SHIELDS:";
    0x57082c401670 --------CA   03500  INPUT X
    0x57082c4018e0 --------CA   03510  IF X <= 0 THEN 1270
    0x57082c401d80 --------CA   03520  IF E+S-X<0 THEN 3490
    0x57082c402200 --------CA   03530  E=E+S-X
    0x57082c402430 --------CA   03540  S=X
    0x57082c4024b0 --------CA   03550  GOTO 1270
    0x57082c4027e0 --------CA T 03560  IF D[6] >= 0 THEN 3590
    0x57082c402960 --------CA   03570  PRINT "DAMAGE CONTROL REPORT IS NOT AVAILABLE"
    0x57082c4029e0 --------CA   03580  GOTO 1270
    0x57082c402a70 --------CA T 03590  PRINT
    0x57082c402be0 --------CA   03600  PRINT "DEVICE        STATE OF REPAIR"
    0x57082c402ec0 --------CA   03610  FOR R1=1 TO 8
    0x57082c402f40 --------CA   03620  GOSUB 5610
    0x57082c403270 --------CA   03630  PRINT "",D[R1]
    0x57082c4033b0 --------CA   03640  NEXT R1
    0x57082c403440 --------CA   03650  PRINT
    0x57082c4034f0 --------CA   03660  GOTO 1270
    0x57082c403670 --------CA T 03670  PRINT "SHORT RANGE SENSORS REPORT NO KLINGONS IN THIS QUADRANT"
    0x57082c403700 --------CA   03680  GOTO 1270
    0x57082c403da0 ---------B G 03690  PRINT  USING 3700;K[I,1],K[I,2]
    0x57082c403e40 ---------B   03700  IMAGE  "KLINGON AT SECTOR ",D,",",D," DESTROYED ****"
    0x57082c404190 ---------B   03710  K3=K3-1
    0x57082c4044c0 ---------B   03720  K9=K9-1
    0x57082c4046f0 ---------B   03730  A$="   "
    0x57082c404ac0 ---------B   03740  Z1=K[I,1]
    0x57082c404e90 ---------B   03750  Z2=K[I,2]
    0x57082c404f10 ---------B   03760  GOSUB 5510
    0x57082c405740 ---------B   03770  G[Q1,Q2]=K3*100+B3*10+S3
    0x57082c405790 ---------B   03780  RETURN
    0x57082c405a40 ---------C G 03790  IF C$ <> "DOCKED" THEN 3820
    0x57082c405bc0 ---------C   03800  PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x57082c405c20 ---------C   03810  RETURN
    0x57082c405e90 ---------C T 03820  IF K3 <= 0 THEN 3910
    0x57082c406180 ---------C   03830  FOR I=1 TO 3
    0x57082c406590 ---------C   03840  IF K[I,3] <= 0 THEN 3900
    0x57082c406eb0 ---------C   03850  H=(K[I,3]/FND(0))*(2*RND(1))
    0x57082c407220 ---------C   03860  S=S-H
    0x57082c407ad0 ---------C   03870  PRINT  USING 3880;H,K[I,1],K[I,2],S
    0x57082c407b80 ---------C   03880  IMAGE  4D," UNIT HIT ON ENTERPRISE AT SECTOR ",D,",",D,"   (",4D," LEFT)"
    0x57082c407df0 ---------C   03890  IF S<0 THEN 4000
    0x57082c407f30 ---------C T 03900  NEXT I
    0x57082c407fa0 ---------C T 03910  RETURN
    0x57082c4081a0 --------CA T 03920  PRINT "THE ENTERPRISE IS DEAD IN SPACE.  IF YOU SURVIVE ALL IMPENDING"
    0x57082c408330 --------CA   03930  PRINT "ATTACK YOU WILL BE DEMOTED TO THE RANK OF PRIVATE"
    0x57082c408590 --------CA T 03940  IF K3 <= 0 THEN 4020
    0x57082c408610 --------CA   03950  GOSUB 3790
    0x57082c408680 --------CA   03960  GOTO 3940
    0x57082c408700 --------CA T 03970  PRINT
    0x57082c408960 --------CA   03980  PRINT "IT IS STARDATE"T
    0x57082c4089e0 --------CA   03990  GOTO 4020
    0x57082c408a90 --------CA T 04000  PRINT
    0x57082c408c50 --------CA   04010  PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED"
    0x57082c408fc0 --------CA T 04020  PRINT "THERE ARE STILL"K9" KLINGON BATTLE CRUISERS"
    0x57082c409040 --------CA   04030  GOTO 230
    0x57082c4090f0 --------CA T 04040  PRINT
    0x57082c4092a0 --------CA   04050  PRINT "THE LAST KLINGON BATTLE CRUISER IN THE GALAXY HAS BEEN DESTROYED"
    0x57082c409410 --------CA   04060  PRINT "THE FEDERATION HAS BEEN SAVED !!!"
    0x57082c4094c0 --------CA   04070  PRINT
    0x57082c409b40 --------CA   04080  PRINT "YOUR EFFICIENCY RATING ="((K7/(T-T0))*1000)
    0x57082c40a220 --------CA   04090  T1=TIM(0)+TIM(1)*60
    0x57082c40ab60 --------CA   04100  PRINT "YOUR ACTUAL TIME OF MISSION ="INT((((T1-T7)*.4)-T7)*100)" MINUTES"
    0x57082c40abf0 --------CA   04110  GOTO 230
    0x57082c40b110 ---------D G 04120  FOR I=S1-1 TO S1+1
    0x57082c40b650 ---------D   04130  FOR J=S2-1 TO S2+1
    0x57082c40bf10 ---------D   04140  IF I<1 OR I>8 OR J<1 OR J>8 THEN 4200
    0x57082c40c150 ---------D   04150  A$=">!<"
    0x57082c40c380 ---------D   04160  Z1=I
    0x57082c40c5b0 ---------D   04170  Z2=J
    0x57082c40c620 ---------D   04180  GOSUB 5680
    0x57082c40c870 ---------D   04190  IF Z3=1 THEN 4240
    0x57082c40c9b0 ---------D T 04200  NEXT J
    0x57082c40cb00 ---------D   04210  NEXT I
    0x57082c40cd30 ---------D   04220  D0=0
    0x57082c40cda0 ---------D   04230  GOTO 4310
    0x57082c40cfb0 ---------D T 04240  D0=1
    0x57082c40d1e0 ---------D   04250  C$="DOCKED"
    0x57082c40d3f0 ---------D   04260  E=3000
    0x57082c40d620 ---------D   04270  P=10
    0x57082c40d780 ---------D   04280  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x57082c40d9a0 ---------D   04290  S=0
    0x57082c40da10 ---------D   04300  GOTO 4380
    0x57082c40dc70 ---------D T 04310  IF K3>0 THEN 4350
    0x57082c40dff0 ---------D   04320  IF E<E0*.1 THEN 4370
    0x57082c40e230 ---------D   04330  C$="GREEN"
    0x57082c40e2a0 ---------D   04340  GOTO 4380
    0x57082c40e4d0 ---------D T 04350  C$="RED"
    0x57082c40e540 ---------D   04360  GOTO 4380
    0x57082c40e780 ---------D T 04370  C$="YELLOW"
    0x57082c40ea90 ---------D T 04380  IF D[2] >= 0 THEN 4430
    0x57082c40eb30 ---------D   04390  PRINT
    0x57082c40eca0 ---------D   04400  PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x57082c40ed20 ---------D   04410  PRINT
    0x57082c40eda0 ---------D   04420  GOTO 4530
    0x57082c40eeb0 ---------D T 04430  PRINT  USING 4540
    0x57082c410450 ---------D   04440  PRINT  USING 4550;Q$[1,3],Q$[4,6],Q$[7,9],Q$[10,12],Q$[13,15],Q$[16,18],Q$[19,21],Q$[22,24]
    0x57082c411af0 ---------D   04450  PRINT  USING 4560;Q$[25,27],Q$[28,30],Q$[31,33],Q$[34,36],Q$[37,39],Q$[40,42],Q$[43,45],Q$[46,48],T
    0x57082c413180 ---------D   04460  PRINT  USING 4570;Q$[49,51],Q$[52,54],Q$[55,57],Q$[58,60],Q$[61,63],Q$[64,66],Q$[67,69],Q$[70,72],C$
    0x57082c414920 ---------D   04470  PRINT  USING 4580;R$[1,3],R$[4,6],R$[7,9],R$[10,12],R$[13,15],R$[16,18],R$[19,21],R$[22,24],Q1,Q2
    0x57082c4160c0 ---------D   04480  PRINT  USING 4590;R$[25,27],R$[28,30],R$[31,33],R$[34,36],R$[37,39],R$[40,42],R$[43,45],R$[46,48],S1,S2
    0x57082c417750 ---------D   04490  PRINT  USING 4600;R$[49,51],R$[52,54],R$[55,57],R$[58,60],R$[61,63],R$[64,66],R$[67,69],R$[70,72],E
    0x57082c418df0 ---------D   04500  PRINT  USING 4610;S$[1,3],S$[4,6],S$[7,9],S$[10,12],S$[13,15],S$[16,18],S$[19,21],S$[22,24],P
    0x57082c41a430 ---------D   04510  PRINT  USING 4620;S$[25,27],S$[28,30],S$[31,33],S$[34,36],S$[37,39],S$[40,42],S$[43,45],S$[46,48],S
    0x57082c41a570 ---------D   04520  PRINT  USING 4540
    0x57082c41a5d0 ---------D T 04530  RETURN 
    0x57082c41a680 ----------   04540  IMAGE  "---------------------------------"
    0x57082c41a710 ----------   04550  IMAGE  8(X,3A)
    0x57082c41a7d0 ----------   04560  IMAGE  8(X,3A),8X,"STARDATE",8X,5D
    0x57082c41a890 ----------   04570  IMAGE  8(X,3A),8X,"CONDITION",8X,6A
    0x57082c41a950 ----------   04580  IMAGE  8(X,3A),8X,"QUADRANT",9X,D,",",D
    0x57082c41aa10 ----------   04590  IMAGE  8(X,3A),8X,"SECTOR",11X,D,",",D
    0x57082c41aac0 ----------   04600  IMAGE  8(X,3A),8X,"ENERGY",9X,6D
    0x57082c41ab80 ----------   04610  IMAGE  8(X,3A),8X,"PHOTON TORPEDOES",3D
    0x57082c41ac30 ----------   04620  IMAGE  8(X,3A),8X,"SHIELDS",8X,6D
    0x57082c41af80 --------CA T 04630  IF D[8] >= 0 THEN 4660
    0x57082c41b0e0 --------CA   04640  PRINT "COMPUTER DISABLED"
    0x57082c41b180 --------CA   04650  GOTO 1270
    0x57082c41b300 --------CA T 04660  PRINT "COMPUTER ACTIVE AND AWAITING COMMAND";
    0x57082c41b470 --------CA   04670  INPUT A
    0x57082c41b930 --------CA   04680  GOTO A+1 OF 4740,4830,4880
    0x57082c41bac0 --------CA   04690  PRINT "FUNCTIONS AVAILABLE FROM COMPUTER"
    0x57082c41bc40 --------CA   04700  PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x57082c41bdc0 --------CA   04710  PRINT "   1 = STATUS REPORT"
    0x57082c41bf30 --------CA   04720  PRINT "   2 = PHOTON TORPEDO DATA"
    0x57082c41bfc0 --------CA   04730  GOTO 4660
    0x57082c41c320 --------CA T 04740  PRINT  USING 4750;Q1,Q2
    0x57082c41c3c0 --------CA   04750  IMAGE  "COMPUTER RECORD OF GALAXY FOR QUADRANT ",D,",",D
    0x57082c41c510 --------CA   04760  PRINT  USING 5330
    0x57082c41c650 --------CA   04770  PRINT  USING 5360
    0x57082c41c970 --------CA   04780  FOR I=1 TO 8
    0x57082c41e0b0 --------CA   04790  PRINT  USING 5350;I,Z[I,1],Z[I,2],Z[I,3],Z[I,4],Z[I,5],Z[I,6],Z[I,7],Z[I,8]
    0x57082c41e1f0 --------CA   04800  PRINT  USING 5360
    0x57082c41e330 --------CA   04810  NEXT I
    0x57082c41e3d0 --------CA   04820  GOTO 1270
    0x57082c41e550 --------CA T 04830  PRINT "\012   STATUS REPORT\012"
    0x57082c41e7e0 --------CA   04840  PRINT "NUMBER OF KLINGONS LEFT ="K9
    0x57082c41ecf0 --------CA   04850  PRINT "NUMBER OF STARDATES LEFT ="(T0+T9)-T
    0x57082c41ef60 --------CA   04860  PRINT "NUMBER OF STARBASES LEFT ="B9
    0x57082c41efe0 --------CA   04870  GOTO 3560
    0x57082c41f050 --------CA T 04880  PRINT 
    0x57082c41f270 --------CA   04890  H8=0
    0x57082c41f550 --------CA   04900  FOR I=1 TO 3
    0x57082c41f950 --------CA   04910  IF K[I,3] <= 0 THEN 5260
    0x57082c41fb90 --------CA   04920  C1=S1
    0x57082c41fdc0 --------CA   04930  A=S2
    0x57082c420190 --------CA   04940  W1=K[I,1]
    0x57082c420560 --------CA   04950  X=K[I,2]
    0x57082c4205e0 --------CA   04960  GOTO 5010
    0x57082c420b50 --------CA T 04970  PRINT  USING 4980;Q1,Q2,S1,S2
    0x57082c420c00 --------CA   04980  IMAGE  "YOU ARE AT QUADRANT ( ",D,",",D," )  SECTOR ( ",D,",",D," )"
    0x57082c420dc0 --------CA   04990  PRINT "SHIP'S & TARGET'S COORDINATES ARE";
    0x57082c4211c0 --------CA   05000  INPUT C1,A,W1,X
    0x57082c421520 --------CA T 05010  X=X-A
    0x57082c421870 --------CA   05020  A=C1-W1
    0x57082c421ac0 --------CA   05030  IF X<0 THEN 5130
    0x57082c421d20 --------CA   05040  IF A<0 THEN 5190
    0x57082c421f80 --------CA   05050  IF X>0 THEN 5070
    0x57082c4221e0 --------CA   05060  IF A=0 THEN 5150
    0x57082c422410 --------CA T 05070  C1=1
    0x57082c422870 --------CA T 05080  IF ABS(A) <= ABS(X) THEN 5110
    0x57082c423390 --------CA   05090  PRINT "DIRECTION ="C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
    0x57082c423430 --------CA   05100  GOTO 5240
    0x57082c423ac0 --------CA T 05110  PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
    0x57082c423b40 --------CA   05120  GOTO 5240
    0x57082c423d90 --------CA T 05130  IF A>0 THEN 5170
    0x57082c423ff0 --------CA   05140  IF X=0 THEN 5190
    0x57082c424210 --------CA T 05150  C1=5
    0x57082c3f12d0 --------CA   05160  GOTO 5080
    0x57082c3f14e0 --------CA T 05170  C1=3
    0x57082c3f1550 --------CA   05180  GOTO 5200
    0x57082c3f1770 --------CA T 05190  C1=7
    0x57082c3f1bd0 --------CA T 05200  IF ABS(A) >= ABS(X) THEN 5230
    0x57082c4266b0 --------CA   05210  PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
    0x57082c426750 --------CA   05220  GOTO 5240
    0x57082c426df0 --------CA T 05230  PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
    0x57082c427490 --------CA T 05240  PRINT "DISTANCE ="(SQR(X^2+A^2))
    0x57082c4276f0 --------CA   05250  IF H8=1 THEN 5320
    0x57082c427830 --------CA T 05260  NEXT I
    0x57082c427a80 --------CA   05270  H8=0
    0x57082c427c00 --------CA T 05280  PRINT "DO YOU WANT TO USE THE CALCULATOR";
    0x57082c427d70 --------CA   05290  INPUT A$
    0x57082c428000 --------CA   05300  IF A$="YES" THEN 4970
    0x57082c428280 --------CA   05310  IF A$ <> "NO" THEN 5280
    0x57082c428330 --------CA T 05320  GOTO 1270
    0x57082c4283c0 ----------   05330  IMAGE  "     1     2     3     4     5     6     7     8"
    0x57082c4284a0 ----------   05340  IMAGE  "---------------------------------------------------"
    0x57082c428530 ----------   05350  IMAGE  D,8(3X,3D)
    0x57082c428610 ----------   05360  IMAGE  "   ----- ----- ----- ----- ----- ----- ----- -----"
    0x57082c428710 ----------   05370  IMAGE  " WARP ENGINES SHUTDOWN AT SECTOR ",D,",",D," DUE TO BAD NAVIGATION"
    0x57082c428d20 ---------E B 05380  R1=INT(RND(1)*8+1)
    0x57082c4292f0 ---------E   05390  R2=INT(RND(1)*8+1)
    0x57082c429520 ---------E   05400  A$="   "
    0x57082c429750 ---------E   05410  Z1=R1
    0x57082c429980 ---------E   05420  Z2=R2
    0x57082c4299f0 ---------E   05430  GOSUB 5680
    0x57082c429c40 ---------E   05440  IF Z3=0 THEN 5380
    0x57082c429ca0 ---------E   05450  RETURN
    0x57082c429f80 ---------F G 05460  FOR I=1 TO 11
    0x57082c42a000 ---------F   05470  PRINT
    0x57082c42a140 ---------F   05480  NEXT I
    0x57082c42a1d0 ---------F   05490  PRINT
    0x57082c42a230 ---------F   05500  RETURN
    0x57082c42a310 ---------G G 05510  REM ******  INSERTION IN STRING ARRAY FOR QUADRANT ******
    0x57082c42aa50 ---------G   05520  S8=Z1*24+Z2*3-26
    0x57082c42aca0 ---------G   05530  IF S8>72 THEN 5560
    0x57082c42b1a0 ---------G   05540  Q$[S8,S8+2]=A$
    0x57082c42b220 ---------G   05550  GOTO 5600
    0x57082c42b480 ---------G T 05560  IF S8>144 THEN 5590
    0x57082c42ba80 ---------G   05570  R$[S8-72,S8-70]=A$
    0x57082c42bb00 ---------G   05580  GOTO 5600
    0x57082c42c0f0 ---------G T 05590  S$[S8-144,S8-142]=A$
    0x57082c42c140 ---------G T 05600  RETURN
    0x57082c42c200 ---------H G 05610  REM ****  PRINTS DEVICE NAME FROM ARRAY *****
    0x57082c42c660 ---------H   05620  S8=R1*12-11
    0x57082c42c8c0 ---------H   05630  IF S8>72 THEN 5660
    0x57082c42cd00 ---------H   05640  PRINT D$[S8,S8+11];
    0x57082c42cd90 ---------H   05650  GOTO 5670
    0x57082c42d2c0 ---------H T 05660  PRINT E$[S8-72,S8-61];
    0x57082c42d320 ---------H T 05670  RETURN
    0x57082c42d400 ---------I G 05680  REM *******  STRING COMPARISON IN QUADRANT ARRAY **********
    0x57082c42d830 ---------I   05683  Z1=INT(Z1+.5)
    0x57082c42dc40 ---------I   05686  Z2=INT(Z2+.5)
    0x57082c42e290 ---------I   05690  S8=Z1*24+Z2*3-26
    0x57082c42e4b0 ---------I   05700  Z3=0
    0x57082c42e710 ---------I   05710  IF S8>72 THEN 5750
    0x57082c42ec50 ---------I   05720  IF Q$[S8,S8+2] <> A$ THEN 5810
    0x57082c42ee70 ---------I   05730  Z3=1
    0x57082c42eef0 ---------I   05740  GOTO 5810
    0x57082c42f160 ---------I T 05750  IF S8>144 THEN 5790
    0x57082c42f7a0 ---------I   05760  IF R$[S8-72,S8-70] <> A$ THEN 5810
    0x57082c42f9c0 ---------I   05770  Z3=1
    0x57082c42fa50 ---------I   05780  GOTO 5810
    0x57082c430080 ---------I T 05790  IF S$[S8-144,S8-142] <> A$ THEN 5810
    0x57082c4302a0 ---------I   05800  Z3=1
    0x57082c4302f0 ---------I T 05810  RETURN
    0x57082c430470 ---------J G 05820  PRINT "     INSTRUCTIONS:"
    0x57082c4305e0 ---------J   05830  PRINT "<*> = ENTERPRISE"
    0x57082c430750 ---------J   05840  PRINT "+++ = KLINGON"
    0x57082c4308c0 ---------J   05850  PRINT ">!< = STARBASE"
    0x57082c430a40 ---------J   05860  PRINT " *  = STAR"
    0x57082c430be0 ---------J   05870  PRINT "COMMAND 0 = WARP ENGINE CONTROL"
    0x57082c430da0 ---------J   05880  PRINT "  'COURSE' IS IN A CIRCULAR NUMERICAL          4  3  2"
    0x57082c430f50 ---------J   05890  PRINT "  VECTOR ARRANGEMENT AS SHOWN.                  \ ^ /"
    0x57082c431100 ---------J   05900  PRINT "  INTERGER AND REAL VALUES MAY BE                \^/"
    0x57082c4312c0 ---------J   05910  PRINT "  USED.  THEREFORE COURSE 1.5 IS              5 ----- 1"
    0x57082c431470 ---------J   05920  PRINT "  HALF WAY BETWEEN 1 AND 2.                      /^\"
    0x57082c431620 ---------J   05930  PRINT "                                                / ^ \"
    0x57082c4317c0 ---------J   05940  PRINT "  A VECTOR OF 9 IS UNDEFINED, BUT              6  7  8"
    0x57082c431960 ---------J   05950  PRINT "  VALUES MAY APPROACH 9."
    0x57082c431b00 ---------J   05960  PRINT "                                               COURSE"
    0x57082c431c90 ---------J   05970  PRINT "  ONE 'WARP FACTOR' IS THE SIZE OF"
    0x57082c431e20 ---------J   05980  PRINT "  ONE QUADRANT.  THEREFORE TO GET"
    0x57082c431fb0 ---------J   05990  PRINT "  FROM QUADRANT 6,5 TO 5,5 YOU WOULD"
    0x57082c432140 ---------J   06000  PRINT "  USE COURSE 3, WARP FACTOR 1"
    0x57082c4322e0 ---------J   06010  PRINT "COMMAND 1 = SHORT RANGE SENSOR SCAN"
    0x57082c432490 ---------J   06020  PRINT "  PRINTS THE QUADRANT YOU ARE CURRENTLY IN, INCLUDING"
    0x57082c432640 ---------J   06030  PRINT "  STARS, KLINGONS, STARBASES, AND THE ENTERPRISE; ALONG"
    0x57082c4327d0 ---------J   06040  PRINT "  WITH OTHER PERTINATE INFORMATION."
    0x57082c432970 ---------J   06050  PRINT "COMMAND 2 = LONG RANGE SENSOR SCAN"
    0x57082c432b30 ---------J   06060  PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x57082c432cf0 ---------J   06070  PRINT "  OF THE ENTERPRISE IN THE MIDDLE OF THE SCAN.  THE SCAN"
    0x57082c432eb0 ---------J   06080  PRINT "  IS CODED IN THE FORM XXX, WHERE THE UNITS DIGIT IS THE"
    0x57082c433070 ---------J   06090  PRINT "  NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF STAR-"
    0x57082c433220 ---------J   06100  PRINT "  BASES, THE HUNDREDS DIGIT IS THE NUMBER OF KLINGONS."
    0x57082c4333c0 ---------J   06110  PRINT "COMMAND 3 = PHASER CONTROL"
    0x57082c433580 ---------J   06120  PRINT "  ALLOWS YOU TO DESTROY THE KLINGONS BY HITTING HIM WITH"
    0x57082c433740 ---------J   06130  PRINT "  SUITABLY LARGE NUMBERS OF ENERGY UNITS TO DEPLETE HIS "
    0x57082c4338e0 ---------J   06140  PRINT "  SHIELD POWER.  KEEP IN MIND THAT WHEN YOU SHOOT AT"
    0x57082c433a70 ---------J   06150  PRINT "  HIM, HE GONNA DO IT TO YOU TOO."
    0x57082c433c10 ---------J   06160  PRINT "COMMAND 4 = PHOTON TORPEDO CONTROL"
    0x57082c433dc0 ---------J   06170  PRINT "  COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL"
    0x57082c433f80 ---------J   06180  PRINT "  IF YOU HIT THE KLINGON, HE IS DESTROYED AND CANNOT FIRE"
    0x57082c434110 ---------J   06190  PRINT "  BACK AT YOU.  IF YOU MISS, HE WILL SHOOT HIS PHASERS AT"
    0x57082c4342a0 ---------J   06200  PRINT "  YOU."
    0x57082c434460 ---------J   06210  PRINT "   NOTE: THE LIBRARY COMPUTER (COMMAND 7) HAS AN OPTION"
    0x57082c434600 ---------J   06220  PRINT "   TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
    0x57082c4347b0 ---------J   06230  PRINT "COMMAND 5 = SHIELD CONTROL"
    0x57082c434970 ---------J   06240  PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS"
    0x57082c434b10 ---------J   06250  PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY."
    0x57082c434cc0 ---------J   06260  PRINT "COMMAND 6 = DAMAGE CONTROL REPORT"
    0x57082c434e80 ---------J   06270  PRINT "  GIVES STATE OF REPAIRS OF ALL DEVICES.  A STATE OF REPAIR"
    0x57082c435020 ---------J   06280  PRINT "  LESS THAN ZERO SHOWS THAT THAT DEVICE IS TEMPORARALY"
    0x57082c4351a0 ---------J   06290  PRINT "  DAMAGED."
    0x57082c435340 ---------J   06300  PRINT "COMMAND 7 = LIBRARY COMPUTER"
    0x57082c4354e0 ---------J   06310  PRINT "  THE LIBRARY COMPUTER CONTAINS THREE OPTIONS:"
    0x57082c435690 ---------J   06320  PRINT "    OPTION 0 = CUMULATIVE GALACTIC RECORD"
    0x57082c435840 ---------J   06330  PRINT "     SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
    0x57082c4359d0 ---------J   06340  PRINT "     LONG RANGE SENSOR SCANS"
    0x57082c435b70 ---------J   06350  PRINT "    OPTION 1 = STATUS REPORT"
    0x57082c435d10 ---------J   06360  PRINT "     SHOWS NUMBER OF KLINGONS, STARDATES AND STARBASES"
    0x57082c435e90 ---------J   06370  PRINT "     LEFT."
    0x57082c436030 ---------J   06380  PRINT "    OPTION 2 = PHOTON TORPEDO DATA"
    0x57082c4361e0 ---------J   06390  PRINT "     GIVES TRAJECTORY AND DISTANCE BETWEEN THE ENTERPRISE"
    0x57082c436360 ---------J   06400  PRINT "     AND ALL KLINGONS IN YOUR QUADRANT"
    0x57082c4363c0 ---------J   06410  RETURN
    0x57082c436420 ---------A   06420  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/mayfield_super_trek.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57082c3b9bf0 ---------A   01000  REM  Extracted from HP tape image 16-Nov-2003 by Pete Turnbull
    0x57082c3bb170 ---------A   01010  REM ****  HP BASIC PROGRAM LIBRARY  ******************************
    0x57082c3bb230 ---------A   01020  REM
    0x57082c3b87f0 ---------A   01030  REM       STTR1
    0x57082c3ba1e0 ---------A   01040  REM
    0x57082c3ba6a0 ---------A   01050  REM       36243  REV B  --  10/73
    0x57082c3b92d0 ---------A   01060  REM
    0x57082c3b9e80 ---------A   01070  REM ****  CONTRIBUTED PROGRAM  ***********************************
    0x57082c3ba270 ---------A   01080  REM *****************************************************************
    0x57082c3ba7c0 ---------A   01090  REM ***                                                           ***
    0x57082c3b9040 ---------A   01100  REM ***     STAR TREK
    0x57082c3b8e90 ---------A   01110  REM ***                                                           ***
    0x57082c3b8be0 ---------A   01120  REM ***        TOTAL INTERACTION GAME - ORIG. 20 OCT 1972
    0x57082c3bb280 ---------A   01130  REM ***                                                           ***
    0x57082c3b9620 ---------A   01140  REM *****************************************************************
    0x57082c3b9670 ---------A   01150  GOSUB 6430
    0x57082c3b96c0 ---------A   01160  PRINT "                          STAR TREK "
    0x57082c3b9720 ---------A   01170  PRINT "DO YOU WANT INSTRUCTIONS (THEY'RE LONG!)";
    0x57082c3b9820 ---------A   01180  INPUT A$
    0x57082c3b98c0 ---------A   01190  IF A$ <> "YES" THEN 1210
    0x57082c3b9920 ---------A   01200  GOSUB 6810
    0x57082c3c0a20 --------CA   01210  REM *****  PROGRAM STARTS HERE *****
    0x57082c3c0c50 --------CA   01220  Z$="                                                                      "
    0x57082c3c0ce0 --------CA   01230  GOSUB 6430
    0x57082c3c1bf0 --------CA   01240  DIM G[8,8],C[9,2],K[3,3],N[3],Z[8,8]
    0x57082c3c2c40 --------CA   01250  DIM C$[6],D$[72],E$[24],A$[3],Q$[72],R$[72],S$[48]
    0x57082c3c2e60 --------CA T 01260  DIM Z$[72]
    0x57082c3c3790 --------CA T 01270  T0=T=INT(RND(1)*20+20)*100
    0x57082c3c3a60 --------CA   01280  T9=30
    0x57082c3c3d30 --------CA   01290  D0=0
    0x57082c3c41a0 --------CA   01300  E0=E=3000
    0x57082c3c4610 --------CA   01310  P0=P=10
    0x57082c3c48e0 --------CA   01320  S9=200
    0x57082c3c4f80 --------CA   01330  S=H8=0
    0x57082c3c6050 --------CA   01340  DEF FND(D)=SQR((K[I,1]-S1)^2+(K[I,2]-S2)^2)
    0x57082c3c66e0 --------CA   01350  Q1=INT(RND(1)*8+1)
    0x57082c3c6d70 --------CA   01360  Q2=INT(RND(1)*8+1)
    0x57082c3c7340 --------CA   01370  S1=INT(RND(1)*8+1)
    0x57082c3c7920 --------CA   01380  S2=INT(RND(1)*8+1)
    0x57082c3c8090 --------CA   01390  T7=TIM(0)+60*TIM(1)
    0x57082c3c9020 --------CA   01400  C[2,1]=C[3,1]=C[4,1]=C[4,2]=C[5,2]=C[6,2]=-1
    0x57082c3c9d50 --------CA T 01410  C[1,1]=C[3,2]=C[5,1]=C[7,2]=C[9,1]=0
    0x57082c3caf20 --------CA   01420  C[1,2]=C[2,2]=C[6,1]=C[7,1]=C[8,1]=C[8,2]=C[9,2]=1
    0x57082c3cb220 --------CA   01430  MAT D=ZER
    0x57082c3cb490 --------CA   01440  D$="WARP ENGINESS.R. SENSORSL.R. SENSORSPHASER CNTRL"
    0x57082c3cb7a0 --------CA   01450  D$[49]="PHOTON TUBESDAMAGE CNTRL"
    0x57082c3cb9d0 --------CA   01460  E$="SHIELD CNTRLCOMPUTER"
    0x57082c3cbe40 --------CA   01470  B9=K9=0
    0x57082c3cc110 --------CA   01480  FOR I=1 TO 8
    0x57082c3cc4b0 --------CA   01490  FOR J=1 TO 8
    0x57082c3cc870 --------CA   01500  R1=RND(1)
    0x57082c3ccac0 --------CA T 01510  IF R1>.98 THEN 1560
    0x57082c3ccd20 --------CA   01520  IF R1>.95 THEN 1590
    0x57082c3ccf80 --------CA   01530  IF R1>.8 THEN 1620
    0x57082c3cd260 --------CA   01540  K3=0
    0x57082c3cd2d0 --------CA   01550  GOTO 1640
    0x57082c3cd4e0 --------CA T 01560  K3=3
    0x57082c3cd810 --------CA   01570  K9=K9+3
    0x57082c3cd880 --------CA   01580  GOTO 1640
    0x57082c3cda90 --------CA   01590  K3=2
    0x57082c3cddc0 --------CA   01600  K9=K9+2
    0x57082c3cde30 --------CA T 01610  GOTO 1640
    0x57082c3ce040 --------CA   01620  K3=1
    0x57082c3ce370 --------CA   01630  K9=K9+1
    0x57082c3ce660 --------CA T 01640  R1=RND(1)
    0x57082c3cecc0 --------CA   01650  IF R1>.96 THEN 1680
    0x57082c3cefa0 --------CA   01660  B3=0
    0x57082c3cf010 --------CA   01670  GOTO 1700
    0x57082c3cf220 --------CA   01680  B3=1
    0x57082c3cf550 --------CA   01690  B9=B9+1
    0x57082c3cfbf0 --------CA   01700  S3=INT(RND(1)*8+1)
    0x57082c3d0420 --------CA   01710  G[I,J]=K3*100+B3*10+S3
    0x57082c3d07f0 --------CA   01720  Z[I,J]=0
    0x57082c3d0920 --------CA   01730  NEXT J
    0x57082c3d0a70 --------CA   01740  NEXT I
    0x57082c3d0d90 --------CA T 01750  K7=K9
    0x57082c3d1240 --------CA   01760  IF B9 <= 0 OR K9 <= 0 THEN 1470
    0x57082c3d19a0 --------CA   01770  PRINT "YOU MUST DESTROY"K9;" KLINGONS IN"T9;" STARDATES WITH"B9;" STARBASES"
    0x57082c3d1da0 --------CA   01780  K3=B3=S3=0
    0x57082c3d2650 --------CA   01790  IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 1890
    0x57082c3d2c10 --------CA   01800  X=G[Q1,Q2]*.01
    0x57082c3d2f20 --------CA T 01810  K3=INT(X)
    0x57082c3d34a0 --------CA   01820  B3=INT((X-K3)*10)
    0x57082c3d3e50 --------CA   01830  S3=G[Q1,Q2]-INT(G[Q1,Q2]*.1)*10
    0x57082c3d40a0 --------CA   01840  IF K3=0 THEN 1880
    0x57082c3d4320 --------CA   01850  IF S>200 THEN 1880
    0x57082c3d44a0 --------CA   01860  PRINT "COMBAT AREA      CONDITION RED"
    0x57082c3d4610 --------CA   01870  PRINT "   SHIELDS DANGEROUSLY LOW"
    0x57082c3d4830 --------CA   01880  MAT K=ZER
    0x57082c3d4b10 --------CA   01890  FOR I=1 TO 3
    0x57082c3d4ed0 --------CA   01900  K[I,3]=0
    0x57082c3d5000 --------CA   01910  NEXT I
    0x57082c3d5250 --------CA   01920  Q$=Z$
    0x57082c3d5480 --------CA   01930  R$=Z$
    0x57082c3d5830 --------CA   01940  S$=Z$[1,48]
    0x57082c3d5a60 --------CA   01950  A$="<*>"
    0x57082c3d5d50 --------CA   01960  Z1=S1
    0x57082c3d6040 --------CA   01970  Z2=S2
    0x57082c3d60b0 --------CA   01980  GOSUB 6480
    0x57082c3d63a0 --------CA   01990  FOR I=1 TO K3
    0x57082c3d6420 --------CA   02000  GOSUB 6350
    0x57082c3d6650 --------CA   02010  A$="+++"
    0x57082c3d6880 --------CA   02020  Z1=R1
    0x57082c3d6b70 --------CA   02030  Z2=R2
    0x57082c3d6be0 --------CA   02040  GOSUB 6480
    0x57082c3d6fb0 --------CA   02050  K[I,1]=R1
    0x57082c3d7380 --------CA   02060  K[I,2]=R2
    0x57082c3d7750 --------CA T 02070  K[I,3]=S9
    0x57082c3d7880 --------CA T 02080  NEXT I
    0x57082c3d7b90 --------CA   02090  FOR I=1 TO B3
    0x57082c3d7c10 --------CA   02100  GOSUB 6350
    0x57082c3d7e40 --------CA   02110  A$=">!<"
    0x57082c3d8070 --------CA   02120  Z1=R1
    0x57082c3d82a0 --------CA   02130  Z2=R2
    0x57082c3d8310 --------CA   02140  GOSUB 6480
    0x57082c3d8440 --------CA T 02150  NEXT I
    0x57082c3d8750 --------CA   02160  FOR I=1 TO S3
    0x57082c3d87d0 --------CA T 02170  GOSUB 6350
    0x57082c3d8a00 --------CA   02180  A$=" * "
    0x57082c3d8c30 --------CA   02190  Z1=R1
    0x57082c3d8e60 --------CA   02200  Z2=R2
    0x57082c3d8ed0 --------CA   02210  GOSUB 6480
    0x57082c3d9000 --------CA   02220  NEXT I
    0x57082c3d9090 --------CA   02230  GOSUB 5090
    0x57082c3d9200 --------CA   02240  PRINT "COMMAND:";
    0x57082c3d9450 --------CA   02250  INPUT A
    0x57082c3d9cb0 --------CA T 02260  GOTO A+1 OF 2380,2230,3290,3490,3760,4430,4530,5600
    0x57082c3d9d40 --------CA   02270  PRINT
    0x57082c3d9ec0 --------CA   02280  PRINT "   0 = SET COURSE"
    0x57082c3da860 --------CA T 02290  PRINT "   1 = SHORT RANGE SENSOR SCAN"
    0x57082c3da9e0 --------CA   02300  PRINT "   2 = LONG RANGE SENSOR SCAN"
    0x57082c3dab60 --------CA   02310  PRINT "   3 = FIRE PHASERS"
    0x57082c3dace0 --------CA   02320  PRINT "   4 = FIRE PHOTON TORPEDOES"
    0x57082c3dae60 --------CA T 02330  PRINT "   5 = SHIELD CONTROL"
    0x57082c3daff0 --------CA   02340  PRINT "   6 = DAMAGE CONTROL REPORT"
    0x57082c3db160 --------CA   02350  PRINT "   7 = CALL ON LIBRARY COMPUTER"
    0x57082c3db1e0 --------CA   02360  PRINT
    0x57082c3db270 --------CA T 02370  GOTO 2240
    0x57082c3db3e0 --------CA   02380  PRINT "COURSE (1-9):";
    0x57082c3db600 --------CA   02390  INPUT C1
    0x57082c3db870 --------CA   02400  IF C1=0 THEN 2240
    0x57082c3dbd00 --------CA   02410  IF C1<1 OR C1 >= 9 THEN 2380
    0x57082c3dbe80 --------CA   02420  PRINT "WARP FACTOR (0-8):";
    0x57082c3dc0b0 --------CA   02430  INPUT W1
    0x57082c3dc550 --------CA   02440  IF W1<0 OR W1>8 THEN 2380
    0x57082c3dcac0 --------CA   02450  IF D[1] >= 0 OR W1 <= .2 THEN 2480
    0x57082c3dcc40 --------CA T 02460  PRINT "WARP ENGINES ARE DAMAGED, MAXIMUM SPEED = WARP .2"
    0x57082c3dccd0 --------CA   02470  GOTO 2380
    0x57082c3dcf20 --------CA   02480  IF K3 <= 0 THEN 2530
    0x57082c3dcfb0 --------CA   02490  GOSUB 4760
    0x57082c3dd200 --------CA   02500  IF K3 <= 0 THEN 2530
    0x57082c3dd460 --------CA   02510  IF S<0 THEN 4970
    0x57082c3dd4e0 --------CA   02520  GOTO 2580
    0x57082c3dd730 --------CA T 02530  IF E>0 THEN 2580
    0x57082c3dd9b0 --------CA   02540  IF S<1 THEN 4890
    0x57082c3ddd50 --------CA   02550  PRINT "YOU HAVE"E" UNITS OF ENERGY"
    0x57082c3de0d0 --------CA   02560  PRINT "SUGGEST YOU GET SOME FROM YOUR SHIELDS WHICH HAVE"S" UNITS LEFT"
    0x57082c3de150 --------CA T 02570  GOTO 2240
    0x57082c3de430 --------CA   02580  FOR I=1 TO 8
    0x57082c3de770 --------CA T 02590  IF D[I] >= 0 THEN 2610
    0x57082c3dec70 --------CA   02600  D[I]=D[I]+1
    0x57082c3deda0 --------CA   02610  NEXT I
    0x57082c3df0f0 --------CA   02620  IF RND(1)>.2 THEN 2780
    0x57082c3df6e0 --------CA   02630  R1=INT(RND(1)*8+1)
    0x57082c3dfa00 --------CA   02640  IF RND(1) >= .5 THEN 2720
    0x57082c3e0220 --------CA   02650  D[R1]=D[R1]-(RND(1)*5+1)
    0x57082c3e02a0 --------CA   02660  PRINT
    0x57082c3e0430 --------CA   02670  PRINT "DAMAGE CONTROL REPORT:";
    0x57082c3e04b0 --------CA T 02680  GOSUB 6580
    0x57082c3e0600 --------CA   02690  PRINT " DAMAGED"
    0x57082c3e0680 --------CA   02700  PRINT
    0x57082c3e0710 --------CA   02710  GOTO 2780
    0x57082c3e0f20 --------CA   02720  D[R1]=D[R1]+(RND(1)*5+1)
    0x57082c3e0fa0 --------CA   02730  PRINT
    0x57082c3e1130 --------CA   02740  PRINT "DAMAGE CONTROL REPORT:";
    0x57082c3e11c0 --------CA   02750  GOSUB 6580
    0x57082c3e1320 --------CA   02760  PRINT " STATE OF REPAIR IMPROVED"
    0x57082c3e13a0 --------CA T 02770  PRINT
    0x57082c3e17c0 --------CA   02780  N=INT(W1*8)
    0x57082c3e19f0 --------CA   02790  A$="   "
    0x57082c3e1c20 --------CA T 02800  Z1=S1
    0x57082c3e1e50 --------CA   02810  Z2=S2
    0x57082c3e1ec0 --------CA   02820  GOSUB 6480
    0x57082c3e20f0 --------CA T 02830  X=S1
    0x57082c3e23e0 --------CA   02840  Y=S2
    0x57082c3e27d0 --------CA   02850  C2=INT(C1)
    0x57082c3e35c0 --------CA T 02860  X1=C[C2,1]+(C[C2+1,1]-C[C2,1])*(C1-C2)
    0x57082c3e4390 --------CA   02870  X2=C[C2,2]+(C[C2+1,2]-C[C2,2])*(C1-C2)
    0x57082c3e4680 --------CA   02880  FOR I=1 TO N
    0x57082c3e49e0 --------CA   02890  S1=S1+X1
    0x57082c3e4d60 --------CA   02900  S2=S2+X2
    0x57082c3e5610 --------CA   02910  IF S1<.5 OR S1 >= 8.5 OR S2<.5 OR S2 >= 8.5 THEN 3130
    0x57082c3e5850 --------CA   02920  A$="   "
    0x57082c3e5a80 --------CA   02930  Z1=S1
    0x57082c3e5cb0 --------CA   02940  Z2=S2
    0x57082c3e5d30 --------CA   02950  GOSUB 6650
    0x57082c3e6050 --------CA T 02960  IF Z3 <> 0 THEN 3010
    0x57082c3e6390 --------CA   02970  PRINT  USING 6340;S1,S2
    0x57082c3e66f0 --------CA   02980  S1=S1-X1
    0x57082c3e6a40 --------CA   02990  S2=S2-X2
    0x57082c3e6ab0 --------CA   03000  GOTO 3020
    0x57082c3e6be0 --------CA   03010  NEXT I
    0x57082c3e6e30 --------CA   03020  A$="<*>"
    0x57082c3e7240 --------CA   03030  S1=INT(S1+.5)
    0x57082c3e7650 --------CA   03040  S2=INT(S2+.5)
    0x57082c3e7880 --------CA   03050  Z1=S1
    0x57082c3e7ab0 --------CA   03060  Z2=S2
    0x57082c3e7b20 --------CA T 03070  GOSUB 6480
    0x57082c3e7f70 --------CA   03080  E=E-N+5
    0x57082c3e81c0 --------CA   03090  IF W1<1 THEN 3110
    0x57082c3e8510 --------CA   03100  T=T+1
    0x57082c3e88a0 --------CA   03110  IF T>T0+T9 THEN 4940
    0x57082c3e8920 --------CA   03120  GOTO 2230
    0x57082c3e8fb0 --------CA   03130  X=Q1*8+X+X1*N
    0x57082c3e9640 --------CA   03140  Y=Q2*8+Y+X2*N
    0x57082c3e9a50 --------CA   03150  Q1=INT(X/8)
    0x57082c3e9e60 --------CA   03160  Q2=INT(Y/8)
    0x57082c3ea490 --------CA   03170  S1=INT(X-Q1*8+.5)
    0x57082c3eaad0 --------CA   03180  S2=INT(Y-Q2*8+.5)
    0x57082c3ead20 --------CA T 03190  IF S1 <> 0 THEN 3220
    0x57082c3eb060 --------CA T 03200  Q1=Q1-1
    0x57082c3eb280 --------CA   03210  S1=8
    0x57082c3eb4d0 --------CA T 03220  IF S2 <> 0 THEN 3250
    0x57082c3eb810 --------CA   03230  Q2=Q2-1
    0x57082c3eba20 --------CA   03240  S2=8
    0x57082c3ebd50 --------CA   03250  T=T+1
    0x57082c3ec1b0 --------CA   03260  E=E-N+5
    0x57082c3ec540 --------CA   03270  IF T>T0+T9 THEN 4940
    0x57082c3ec5d0 --------CA   03280  GOTO 1780
    0x57082c3ec900 --------CA T 03290  IF D[3] >= 0 THEN 3330
    0x57082c3ecaa0 --------CA   03300  PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x57082c3ecb40 --------CA   03310  IMAGE  "LONG RANGE SENSOR SCAN FOR QUADRANT",D,",",D
    0x57082c3ecbe0 --------CA   03320  GOTO 2240
    0x57082c3ecf10 --------CA   03330  PRINT  USING 3310;Q1,Q2
    0x57082c3ed060 --------CA   03340  PRINT  USING 3480
    0x57082c3ed580 --------CA   03350  FOR I=Q1-1 TO Q1+1
    0x57082c3ed7b0 --------CA T 03360  MAT N=ZER
    0x57082c3edcf0 --------CA   03370  FOR J=Q2-1 TO Q2+1
    0x57082c3ee5b0 --------CA   03380  IF I<1 OR I>8 OR J<1 OR J>8 THEN 3420
    0x57082c3eecc0 --------CA   03390  N[J-Q2+2]=G[I,J]
    0x57082c3eefd0 --------CA   03400  IF D[7]<0 THEN 3420
    0x57082c3ef590 --------CA   03410  Z[I,J]=G[I,J]
    0x57082c3ef6c0 --------CA T 03420  NEXT J
    0x57082c3efd60 --------CA T 03430  PRINT  USING 3470;N[1],N[2],N[3]
    0x57082c3efea0 --------CA   03440  PRINT  USING 3480
    0x57082c3effe0 --------CA   03450  NEXT I
    0x57082c3f0080 --------CA T 03460  GOTO 2240
    0x57082c3f00f0 ----------   03470  IMAGE  ": ",3(3D," :")
    0x57082c3f0190 ----------   03480  IMAGE  "-----------------"
    0x57082c3f0420 --------CA T 03490  IF K3 <= 0 THEN 4640
    0x57082c3f0760 --------CA   03500  IF D[4] >= 0 THEN 3530
    0x57082c3f08d0 --------CA   03510  PRINT "PHASER CONTROL IS DISABLED"
    0x57082c3f0960 --------CA   03520  GOTO 2240
    0x57082c3f0c90 --------CA   03530  IF D[7] >= 0 THEN 3550
    0x57082c3f0e30 --------CA   03540  PRINT " COMPUTER FAILURE HAMPERS ACCURACY"
    0x57082c3f10c0 --------CA   03550  PRINT "PHASERS LOCKED ON TARGET.  ENERGY AVAILABLE="E
    0x57082c3f1250 --------CA T 03560  PRINT "NUMBER OF UNITS TO FIRE:";
    0x57082c3da030 --------CA   03570  INPUT X
    0x57082c3da2a0 --------CA   03580  IF X <= 0 THEN 2240
    0x57082c3da620 --------CA T 03590  IF E-X<0 THEN 3530
    0x57082c3f2520 --------CA   03600  E=E-X
    0x57082c3f25a0 --------CA   03610  GOSUB 4760
    0x57082c3f28b0 --------CA   03620  IF D[7] >= 0 THEN 3640
    0x57082c3f2cd0 --------CA   03630  X=X*RND(1)
    0x57082c3f2fb0 --------CA   03640  FOR I=1 TO 3
    0x57082c3f33c0 --------CA   03650  IF K[I,3] <= 0 THEN 3730
    0x57082c3f3d20 --------CA   03660  H=(X/K3/FND(0))*(2*RND(1))
    0x57082c3f43d0 --------CA T 03670  K[I,3]=K[I,3]-H
    0x57082c3f4e20 --------CA   03680  PRINT  USING 3690;H,K[I,1],K[I,2],K[I,3]
    0x57082c3f4ed0 --------CA G 03690  IMAGE  4D," UNIT HIT ON KLINGON AT SECTOR ",D,",",D,"   (",3D," LEFT)"
    0x57082c3f52f0 --------CA   03700  IF K[I,3]>0 THEN 3730
    0x57082c3f5380 --------CA   03710  GOSUB 4660
    0x57082c3f55d0 --------CA   03720  IF K9 <= 0 THEN 5010
    0x57082c3f5710 --------CA   03730  NEXT I
    0x57082c3f5980 --------CA   03740  IF E<0 THEN 4970
    0x57082c3f5a10 --------CA   03750  GOTO 2240
    0x57082c3f5d40 --------CA   03760  IF D[5] >= 0 THEN 3790
    0x57082c3f5eb0 --------CA   03770  PRINT "PHOTON TUBES ARE NOT OPERATIONAL"
    0x57082c3f5f30 --------CA   03780  GOTO 2240
    0x57082c3f61a0 --------CA G 03790  IF P>0 THEN 3820
    0x57082c3f6310 --------CA   03800  PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x57082c3f63a0 --------CA   03810  GOTO 2240
    0x57082c3f6510 --------CA T 03820  PRINT "TORPEDO COURSE (1-9):";
    0x57082c3f6670 --------CA   03830  INPUT C1
    0x57082c3f68e0 --------CA   03840  IF C1=0 THEN 2240
    0x57082c3f6d60 --------CA   03850  IF C1<1 OR C1 >= 9 THEN 3820
    0x57082c3f70a0 --------CA   03860  C2=INT(C1)
    0x57082c3f7dd0 --------CA   03870  X1=C[C2,1]+(C[C2+1,1]-C[C2,1])*(C1-C2)
    0x57082c3f8ae0 --------CA   03880  X2=C[C2,2]+(C[C2+1,2]-C[C2,2])*(C1-C2)
    0x57082c3f8d10 --------CA   03890  X=S1
    0x57082c3f8f40 --------CA T 03900  Y=S2
    0x57082c3f9280 --------CA T 03910  P=P-1
    0x57082c3f93d0 --------CA T 03920  PRINT "TORPEDO TRACK:"
    0x57082c3f9730 --------CA   03930  X=X+X1
    0x57082c3f9aa0 --------CA T 03940  Y=Y+X2
    0x57082c3fa360 --------CA   03950  IF X<.5 OR X >= 8.5 OR Y<.5 OR Y >= 8.5 THEN 4390
    0x57082c3fa6b0 --------CA   03960  PRINT  USING 3970;X,Y
    0x57082c3fa730 --------CA T 03970  IMAGE  15X,D,",",D
    0x57082c3fa980 --------CA   03980  A$="   "
    0x57082c3fabb0 --------CA   03990  Z1=X
    0x57082c3fade0 --------CA T 04000  Z2=Y
    0x57082c3fae50 --------CA   04010  GOSUB 6650
    0x57082c3fb0a0 --------CA T 04020  IF Z3=0 THEN 4040
    0x57082c3fb120 --------CA   04030  GOTO 3930
    0x57082c3fb350 --------CA T 04040  A$="+++"
    0x57082c3fb580 --------CA   04050  Z1=X
    0x57082c3fb7b0 --------CA   04060  Z2=Y
    0x57082c3fb820 --------CA   04070  GOSUB 6650
    0x57082c3fba80 --------CA   04080  IF Z3=0 THEN 4190
    0x57082c3fbbf0 --------CA   04090  PRINT "*** KLINGON DESTROYED ***"
    0x57082c3fbf30 --------CA   04100  K3=K3-1
    0x57082c3fc270 --------CA   04110  K9=K9-1
    0x57082c3fc4c0 --------CA G 04120  IF K9 <= 0 THEN 5010
    0x57082c3fc7b0 --------CA   04130  FOR I=1 TO 3
    0x57082c3fcdc0 --------CA   04140  IF INT(X+.5) <> K[I,1] THEN 4160
    0x57082c3fd3c0 --------CA   04150  IF INT(Y+.5)=K[I,2] THEN 4170
    0x57082c3fd500 --------CA   04160  NEXT I
    0x57082c3fd8d0 --------CA   04170  K[I,3]=0
    0x57082c3fd940 --------CA   04180  GOTO 4330
    0x57082c3fdb70 --------CA   04190  A$=" * "
    0x57082c3fdda0 --------CA T 04200  Z1=X
    0x57082c3fdfd0 --------CA   04210  Z2=Y
    0x57082c3fe040 --------CA   04220  GOSUB 6650
    0x57082c3fe2b0 --------CA   04230  IF Z3=0 THEN 4260
    0x57082c3fe420 --------CA T 04240  PRINT "YOU CAN'T DESTROY STARS SILLY"
    0x57082c3fe4a0 --------CA   04250  GOTO 4390
    0x57082c3fe6d0 --------CA   04260  A$=">!<"
    0x57082c3fe900 --------CA   04270  Z1=X
    0x57082c3feb30 --------CA   04280  Z2=Y
    0x57082c3feba0 --------CA   04290  GOSUB 6650
    0x57082c3fee20 --------CA   04300  IF Z3=0 THEN 3930
    0x57082c3fefa0 --------CA T 04310  PRINT "*** STAR BASE DESTROYED ***  .......CONGRATULATIONS"
    0x57082c3ff2e0 --------CA   04320  B3=B3-1
    0x57082c3ff510 --------CA   04330  A$="   "
    0x57082c3ff920 --------CA   04340  Z1=INT(X+.5)
    0x57082c3ffd30 --------CA T 04350  Z2=INT(Y+.5)
    0x57082c3ffdb0 --------CA   04360  GOSUB 6480
    0x57082c4005e0 --------CA T 04370  G[Q1,Q2]=K3*100+B3*10+S3
    0x57082c400660 --------CA T 04380  GOTO 4400
    0x57082c4007b0 --------CA   04390  PRINT "TORPEDO MISSED"
    0x57082c400830 --------CA   04400  GOSUB 4760
    0x57082c400a80 --------CA   04410  IF E<0 THEN 4970
    0x57082c400b10 --------CA   04420  GOTO 2240
    0x57082c400e40 --------CA T 04430  IF D[7] >= 0 THEN 4460
    0x57082c400fb0 --------CA   04440  PRINT "SHIELD CONTROL IS NON-OPERATIONAL"
    0x57082c401060 --------CA   04450  GOTO 2240
    0x57082c401500 --------CA   04460  PRINT "ENERGY AVAILABLE ="E+S"   NUMBER OF UNITS TO SHIELDS:";
    0x57082c401670 --------CA   04470  INPUT X
    0x57082c4018e0 --------CA   04480  IF X <= 0 THEN 2240
    0x57082c401d80 --------CA   04490  IF E+S-X<0 THEN 4460
    0x57082c402200 --------CA   04500  E=E+S-X
    0x57082c402430 --------CA   04510  S=X
    0x57082c4024b0 --------CA   04520  GOTO 2240
    0x57082c4027e0 --------CA T 04530  IF D[6] >= 0 THEN 4560
    0x57082c402960 --------CA   04540  PRINT "DAMAGE CONTROL REPORT IS NOT AVAILABLE"
    0x57082c4029e0 --------CA   04550  GOTO 2240
    0x57082c402a70 --------CA   04560  PRINT
    0x57082c402be0 --------CA   04570  PRINT "DEVICE        STATE OF REPAIR"
    0x57082c402ec0 --------CA   04580  FOR R1=1 TO 8
    0x57082c402f40 --------CA   04590  GOSUB 6580
    0x57082c403270 --------CA   04600  PRINT "",D[R1]
    0x57082c4033b0 --------CA   04610  NEXT R1
    0x57082c403440 --------CA   04620  PRINT
    0x57082c4034f0 --------CA T 04630  GOTO 2240
    0x57082c403670 --------CA   04640  PRINT "SHORT RANGE SENSORS REPORT NO KLINGONS IN THIS QUADRANT"
    0x57082c403700 --------CA   04650  GOTO 2240
    0x57082c403da0 ---------B T 04660  PRINT  USING 4670;K[I,1],K[I,2]
    0x57082c403e40 ---------B   04670  IMAGE  "KLINGON AT SECTOR ",D,",",D," DESTROYED ****"
    0x57082c404190 ---------B   04680  K3=K3-1
    0x57082c4044c0 ---------B   04690  K9=K9-1
    0x57082c4046f0 ---------B   04700  A$="   "
    0x57082c404ac0 ---------B   04710  Z1=K[I,1]
    0x57082c404e90 ---------B   04720  Z2=K[I,2]
    0x57082c404f10 ---------B   04730  GOSUB 6480
    0x57082c405740 ---------B T 04740  G[Q1,Q2]=K3*100+B3*10+S3
    0x57082c405790 ---------B   04750  RETURN
    0x57082c405a40 ---------C   04760  IF C$ <> "DOCKED" THEN 4790
    0x57082c405bc0 ---------C   04770  PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x57082c405c20 ---------C   04780  RETURN
    0x57082c405e90 ---------C   04790  IF K3 <= 0 THEN 4880
    0x57082c406180 ---------C   04800  FOR I=1 TO 3
    0x57082c406590 ---------C   04810  IF K[I,3] <= 0 THEN 4870
    0x57082c406eb0 ---------C   04820  H=(K[I,3]/FND(0))*(2*RND(1))
    0x57082c407220 ---------C T 04830  S=S-H
    0x57082c407ad0 ---------C   04840  PRINT  USING 4850;H,K[I,1],K[I,2],S
    0x57082c407b80 ---------C   04850  IMAGE  4D," UNIT HIT ON ENTERPRISE AT SECTOR ",D,",",D,"   (",4D," LEFT)"
    0x57082c407df0 ---------C   04860  IF S<0 THEN 4970
    0x57082c407f30 ---------C   04870  NEXT I
    0x57082c407fa0 ---------C T 04880  RETURN
    0x57082c4081a0 --------CA   04890  PRINT "THE ENTERPRISE IS DEAD IN SPACE.  IF YOU SURVIVE ALL IMPENDING"
    0x57082c408330 --------CA   04900  PRINT "ATTACK YOU WILL BE DEMOTED TO THE RANK OF PRIVATE"
    0x57082c408590 --------CA   04910  IF K3 <= 0 THEN 4990
    0x57082c408610 --------CA   04920  GOSUB 4760
    0x57082c408680 --------CA   04930  GOTO 4910
    0x57082c408700 --------CA   04940  PRINT
    0x57082c408960 --------CA   04950  PRINT "IT IS STARDATE"T
    0x57082c4089e0 --------CA   04960  GOTO 4990
    0x57082c408a90 --------CA T 04970  PRINT
    0x57082c408c50 --------CA   04980  PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED"
    0x57082c408fc0 --------CA   04990  PRINT "THERE ARE STILL"K9" KLINGON BATTLE CRUISERS"
    0x57082c409040 --------CA   05000  GOTO 1210
    0x57082c4090f0 --------CA T 05010  PRINT
    0x57082c4092a0 --------CA   05020  PRINT "THE LAST KLINGON BATTLE CRUISER IN THE GALAXY HAS BEEN DESTROYED"
    0x57082c409410 --------CA   05030  PRINT "THE FEDERATION HAS BEEN SAVED !!!"
    0x57082c4094c0 --------CA   05040  PRINT
    0x57082c409b40 --------CA   05050  PRINT "YOUR EFFICIENCY RATING ="((K7/(T-T0))*1000)
    0x57082c40a220 --------CA   05060  T1=TIM(0)+TIM(1)*60
    0x57082c40ab60 --------CA T 05070  PRINT "YOUR ACTUAL TIME OF MISSION ="INT((((T1-T7)*.4)-T7)*100)" MINUTES"
    0x57082c40abf0 --------CA T 05080  GOTO 1210
    0x57082c40b110 ---------D   05090  FOR I=S1-1 TO S1+1
    0x57082c40b650 ---------D   05100  FOR J=S2-1 TO S2+1
    0x57082c40bf10 ---------D T 05110  IF I<1 OR I>8 OR J<1 OR J>8 THEN 5170
    0x57082c40c150 ---------D   05120  A$=">!<"
    0x57082c40c380 ---------D T 05130  Z1=I
    0x57082c40c5b0 ---------D   05140  Z2=J
    0x57082c40c620 ---------D T 05150  GOSUB 6650
    0x57082c40c870 ---------D   05160  IF Z3=1 THEN 5210
    0x57082c40c9b0 ---------D T 05170  NEXT J
    0x57082c40cb00 ---------D   05180  NEXT I
    0x57082c40cd30 ---------D T 05190  D0=0
    0x57082c40cda0 ---------D T 05200  GOTO 5280
    0x57082c40cfb0 ---------D   05210  D0=1
    0x57082c40d1e0 ---------D   05220  C$="DOCKED"
    0x57082c40d3f0 ---------D T 05230  E=3000
    0x57082c40d620 ---------D T 05240  P=10
    0x57082c40d780 ---------D   05250  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x57082c40d9a0 ---------D T 05260  S=0
    0x57082c40da10 ---------D   05270  GOTO 5350
    0x57082c40dc70 ---------D T 05280  IF K3>0 THEN 5320
    0x57082c40dff0 ---------D   05290  IF E<E0*.1 THEN 5340
    0x57082c40e230 ---------D   05300  C$="GREEN"
    0x57082c40e2a0 ---------D   05310  GOTO 5350
    0x57082c40e4d0 ---------D T 05320  C$="RED"
    0x57082c40e540 ---------D   05330  GOTO 5350
    0x57082c40e780 ---------D   05340  C$="YELLOW"
    0x57082c40ea90 ---------D   05350  IF D[2] >= 0 THEN 5400
    0x57082c40eb30 ---------D   05360  PRINT
    0x57082c40eca0 ---------D   05370  PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x57082c40ed20 ---------D B 05380  PRINT
    0x57082c40eda0 ---------D   05390  GOTO 5500
    0x57082c40eeb0 ---------D   05400  PRINT  USING 5510
    0x57082c410450 ---------D   05410  PRINT  USING 5520;Q$[1,3],Q$[4,6],Q$[7,9],Q$[10,12],Q$[13,15],Q$[16,18],Q$[19,21],Q$[22,24]
    0x57082c411af0 ---------D   05420  PRINT  USING 5530;Q$[25,27],Q$[28,30],Q$[31,33],Q$[34,36],Q$[37,39],Q$[40,42],Q$[43,45],Q$[46,48],T
    0x57082c413180 ---------D   05430  PRINT  USING 5540;Q$[49,51],Q$[52,54],Q$[55,57],Q$[58,60],Q$[61,63],Q$[64,66],Q$[67,69],Q$[70,72],C$
    0x57082c414920 ---------D   05440  PRINT  USING 5550;R$[1,3],R$[4,6],R$[7,9],R$[10,12],R$[13,15],R$[16,18],R$[19,21],R$[22,24],Q1,Q2
    0x57082c4160c0 ---------D   05450  PRINT  USING 5560;R$[25,27],R$[28,30],R$[31,33],R$[34,36],R$[37,39],R$[40,42],R$[43,45],R$[46,48],S1,S2
    0x57082c417750 ---------D G 05460  PRINT  USING 5570;R$[49,51],R$[52,54],R$[55,57],R$[58,60],R$[61,63],R$[64,66],R$[67,69],R$[70,72],E
    0x57082c418df0 ---------D   05470  PRINT  USING 5580;S$[1,3],S$[4,6],S$[7,9],S$[10,12],S$[13,15],S$[16,18],S$[19,21],S$[22,24],P
    0x57082c41a430 ---------D   05480  PRINT  USING 5590;S$[25,27],S$[28,30],S$[31,33],S$[34,36],S$[37,39],S$[40,42],S$[43,45],S$[46,48],S
    0x57082c41a570 ---------D   05490  PRINT  USING 5510
    0x57082c41a5d0 ---------D   05500  RETURN 
    0x57082c41a680 ---------- G 05510  IMAGE  "---------------------------------"
    0x57082c41a710 ----------   05520  IMAGE  8(X,3A)
    0x57082c41a7d0 ----------   05530  IMAGE  8(X,3A),8X,"STARDATE",8X,5D
    0x57082c41a890 ----------   05540  IMAGE  8(X,3A),8X,"CONDITION",8X,6A
    0x57082c41a950 ----------   05550  IMAGE  8(X,3A),8X,"QUADRANT",9X,D,",",D
    0x57082c41aa10 ---------- T 05560  IMAGE  8(X,3A),8X,"SECTOR",11X,D,",",D
    0x57082c41aac0 ----------   05570  IMAGE  8(X,3A),8X,"ENERGY",9X,6D
    0x57082c41ab80 ----------   05580  IMAGE  8(X,3A),8X,"PHOTON TORPEDOES",3D
    0x57082c41ac30 ---------- T 05590  IMAGE  8(X,3A),8X,"SHIELDS",8X,6D
    0x57082c41af80 --------CA T 05600  IF D[8] >= 0 THEN 5630
    0x57082c41b0e0 --------CA G 05610  PRINT "COMPUTER DISABLED"
    0x57082c41b180 --------CA   05620  GOTO 2240
    0x57082c41b300 --------CA   05630  PRINT "COMPUTER ACTIVE AND AWAITING COMMAND";
    0x57082c41b470 --------CA   05640  INPUT A
    0x57082c41b930 --------CA   05650  GOTO A+1 OF 5710,5800,5850
    0x57082c41bac0 --------CA T 05660  PRINT "FUNCTIONS AVAILABLE FROM COMPUTER"
    0x57082c41bc40 --------CA T 05670  PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x57082c41bdc0 --------CA G 05680  PRINT "   1 = STATUS REPORT"
    0x57082c41bf30 --------CA   05690  PRINT "   2 = PHOTON TORPEDO DATA"
    0x57082c41bfc0 --------CA   05700  GOTO 5630
    0x57082c41c320 --------CA   05710  PRINT  USING 5720;Q1,Q2
    0x57082c41c3c0 --------CA   05720  IMAGE  "COMPUTER RECORD OF GALAXY FOR QUADRANT ",D,",",D
    0x57082c41c510 --------CA   05730  PRINT  USING 6300
    0x57082c41c650 --------CA   05740  PRINT  USING 6330
    0x57082c41c970 --------CA T 05750  FOR I=1 TO 8
    0x57082c41e0b0 --------CA   05760  PRINT  USING 6320;I,Z[I,1],Z[I,2],Z[I,3],Z[I,4],Z[I,5],Z[I,6],Z[I,7],Z[I,8]
    0x57082c41e1f0 --------CA   05770  PRINT  USING 6330
    0x57082c41e330 --------CA   05780  NEXT I
    0x57082c41e3d0 --------CA T 05790  GOTO 2240
    0x57082c41e550 --------CA   05800  PRINT "\012   STATUS REPORT\012"
    0x57082c41e7e0 --------CA T 05810  PRINT "NUMBER OF KLINGONS LEFT ="K9
    0x57082c41ecf0 --------CA G 05820  PRINT "NUMBER OF STARDATES LEFT ="(T0+T9)-T
    0x57082c41ef60 --------CA   05830  PRINT "NUMBER OF STARBASES LEFT ="B9
    0x57082c41efe0 --------CA   05840  GOTO 4530
    0x57082c41f050 --------CA   05850  PRINT 
    0x57082c41f270 --------CA   05860  H8=0
    0x57082c41f550 --------CA   05870  FOR I=1 TO 3
    0x57082c41f950 --------CA   05880  IF K[I,3] <= 0 THEN 6230
    0x57082c41fb90 --------CA   05890  C1=S1
    0x57082c41fdc0 --------CA   05900  A=S2
    0x57082c420190 --------CA   05910  W1=K[I,1]
    0x57082c420560 --------CA   05920  X=K[I,2]
    0x57082c4205e0 --------CA   05930  GOTO 5980
    0x57082c420b50 --------CA   05940  PRINT  USING 5950;Q1,Q2,S1,S2
    0x57082c420c00 --------CA   05950  IMAGE  "YOU ARE AT QUADRANT ( ",D,",",D," )  SECTOR ( ",D,",",D," )"
    0x57082c420dc0 --------CA   05960  PRINT "SHIP'S & TARGET'S COORDINATES ARE";
    0x57082c4211c0 --------CA   05970  INPUT C1,A,W1,X
    0x57082c421520 --------CA   05980  X=X-A
    0x57082c421870 --------CA   05990  A=C1-W1
    0x57082c421ac0 --------CA   06000  IF X<0 THEN 6100
    0x57082c421d20 --------CA   06010  IF A<0 THEN 6160
    0x57082c421f80 --------CA   06020  IF X>0 THEN 6040
    0x57082c4221e0 --------CA   06030  IF A=0 THEN 6120
    0x57082c422410 --------CA   06040  C1=1
    0x57082c422870 --------CA   06050  IF ABS(A) <= ABS(X) THEN 6080
    0x57082c423390 --------CA   06060  PRINT "DIRECTION ="C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
    0x57082c423430 --------CA   06070  GOTO 6210
    0x57082c423ac0 --------CA   06080  PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
    0x57082c423b40 --------CA   06090  GOTO 6210
    0x57082c423d90 --------CA   06100  IF A>0 THEN 6140
    0x57082c423ff0 --------CA   06110  IF X=0 THEN 6160
    0x57082c424210 --------CA   06120  C1=5
    0x57082c3f12d0 --------CA   06130  GOTO 6050
    0x57082c3f14e0 --------CA   06140  C1=3
    0x57082c3f1550 --------CA   06150  GOTO 6170
    0x57082c3f1770 --------CA   06160  C1=7
    0x57082c3f1bd0 --------CA   06170  IF ABS(A) >= ABS(X) THEN 6200
    0x57082c4266b0 --------CA   06180  PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
    0x57082c426750 --------CA   06190  GOTO 6210
    0x57082c426df0 --------CA   06200  PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
    0x57082c427490 --------CA   06210  PRINT "DISTANCE ="(SQR(X^2+A^2))
    0x57082c4276f0 --------CA   06220  IF H8=1 THEN 6290
    0x57082c427830 --------CA   06230  NEXT I
    0x57082c427a80 --------CA   06240  H8=0
    0x57082c427c00 --------CA   06250  PRINT "DO YOU WANT TO USE THE CALCULATOR";
    0x57082c427d70 --------CA   06260  INPUT A$
    0x57082c428000 --------CA   06270  IF A$="YES" THEN 5940
    0x57082c428280 --------CA   06280  IF A$ <> "NO" THEN 6250
    0x57082c428330 --------CA   06290  GOTO 2240
    0x57082c4283c0 ----------   06300  IMAGE  "     1     2     3     4     5     6     7     8"
    0x57082c4284a0 ----------   06310  IMAGE  "---------------------------------------------------"
    0x57082c428530 ----------   06320  IMAGE  D,8(3X,3D)
    0x57082c428610 ----------   06330  IMAGE  "   ----- ----- ----- ----- ----- ----- ----- -----"
    0x57082c428710 ----------   06340  IMAGE  " WARP ENGINES SHUTDOWN AT SECTOR ",D,",",D," DUE TO BAD NAVIGATION"
    0x57082c428d20 ---------E   06350  R1=INT(RND(1)*8+1)
    0x57082c4292f0 ---------E   06360  R2=INT(RND(1)*8+1)
    0x57082c429520 ---------E   06370  A$="   "
    0x57082c429750 ---------E   06380  Z1=R1
    0x57082c429980 ---------E   06390  Z2=R2
    0x57082c4299f0 ---------E   06400  GOSUB 6650
    0x57082c429c40 ---------E   06410  IF Z3=0 THEN 6350
    0x57082c429ca0 ---------E   06420  RETURN
    0x57082c429f80 ---------F   06430  FOR I=1 TO 11
    0x57082c42a000 ---------F   06440  PRINT
    0x57082c42a140 ---------F   06450  NEXT I
    0x57082c42a1d0 ---------F   06460  PRINT
    0x57082c42a230 ---------F   06470  RETURN
    0x57082c42a310 ---------G   06480  REM ******  INSERTION IN STRING ARRAY FOR QUADRANT ******
    0x57082c42aa50 ---------G   06490  S8=Z1*24+Z2*3-26
    0x57082c42aca0 ---------G   06500  IF S8>72 THEN 6530
    0x57082c42b1a0 ---------G   06510  Q$[S8,S8+2]=A$
    0x57082c42b220 ---------G   06520  GOTO 6570
    0x57082c42b480 ---------G   06530  IF S8>144 THEN 6560
    0x57082c42ba80 ---------G   06540  R$[S8-72,S8-70]=A$
    0x57082c42bb00 ---------G   06550  GOTO 6570
    0x57082c42c0f0 ---------G   06560  S$[S8-144,S8-142]=A$
    0x57082c42c140 ---------G   06570  RETURN
    0x57082c42c200 ---------H   06580  REM ****  PRINTS DEVICE NAME FROM ARRAY *****
    0x57082c42c660 ---------H   06590  S8=R1*12-11
    0x57082c42c8c0 ---------H   06600  IF S8>72 THEN 6630
    0x57082c42cd00 ---------H   06610  PRINT D$[S8,S8+11];
    0x57082c42cd90 ---------H   06620  GOTO 6640
    0x57082c42d2c0 ---------H   06630  PRINT E$[S8-72,S8-61];
    0x57082c42d320 ---------H   06640  RETURN
    0x57082c42d400 ---------I   06650  REM *******  STRING COMPARISON IN QUADRANT ARRAY **********
    0x57082c42d830 ---------I   06660  Z1=INT(Z1+.5)
    0x57082c42dc40 ---------I   06670  Z2=INT(Z2+.5)
    0x57082c42e290 ---------I   06680  S8=Z1*24+Z2*3-26
    0x57082c42e4b0 ---------I   06690  Z3=0
    0x57082c42e710 ---------I   06700  IF S8>72 THEN 6740
    0x57082c42ec50 ---------I   06710  IF Q$[S8,S8+2] <> A$ THEN 6800
    0x57082c42ee70 ---------I   06720  Z3=1
    0x57082c42eef0 ---------I   06730  GOTO 6800
    0x57082c42f160 ---------I   06740  IF S8>144 THEN 6780
    0x57082c42f7a0 ---------I   06750  IF R$[S8-72,S8-70] <> A$ THEN 6800
    0x57082c42f9c0 ---------I   06760  Z3=1
    0x57082c42fa50 ---------I   06770  GOTO 6800
    0x57082c430080 ---------I   06780  IF S$[S8-144,S8-142] <> A$ THEN 6800
    0x57082c4302a0 ---------I   06790  Z3=1
    0x57082c4302f0 ---------I   06800  RETURN
    0x57082c430470 ---------J   06810  PRINT "     INSTRUCTIONS:"
    0x57082c4305e0 ---------J   06820  PRINT "<*> = ENTERPRISE"
    0x57082c430750 ---------J   06830  PRINT "+++ = KLINGON"
    0x57082c4308c0 ---------J   06840  PRINT ">!< = STARBASE"
    0x57082c430a40 ---------J   06850  PRINT " *  = STAR"
    0x57082c430be0 ---------J   06860  PRINT "COMMAND 0 = WARP ENGINE CONTROL"
    0x57082c430da0 ---------J   06870  PRINT "  'COURSE' IS IN A CIRCULAR NUMERICAL          4  3  2"
    0x57082c430f50 ---------J   06880  PRINT "  VECTOR ARRANGEMENT AS SHOWN.                  \ ^ /"
    0x57082c431100 ---------J   06890  PRINT "  INTERGER AND REAL VALUES MAY BE                \^/"
    0x57082c4312c0 ---------J   06900  PRINT "  USED.  THEREFORE COURSE 1.5 IS              5 ----- 1"
    0x57082c431470 ---------J   06910  PRINT "  HALF WAY BETWEEN 1 AND 2.                      /^\"
    0x57082c431620 ---------J   06920  PRINT "                                                / ^ \"
    0x57082c4317c0 ---------J   06930  PRINT "  A VECTOR OF 9 IS UNDEFINED, BUT              6  7  8"
    0x57082c431960 ---------J   06940  PRINT "  VALUES MAY APPROACH 9."
    0x57082c431b00 ---------J   06950  PRINT "                                               COURSE"
    0x57082c431c90 ---------J   06960  PRINT "  ONE 'WARP FACTOR' IS THE SIZE OF"
    0x57082c431e20 ---------J   06970  PRINT "  ONE QUADRANT.  THEREFORE TO GET"
    0x57082c431fb0 ---------J   06980  PRINT "  FROM QUADRANT 6,5 TO 5,5 YOU WOULD"
    0x57082c432140 ---------J   06990  PRINT "  USE COURSE 3, WARP FACTOR 1"
    0x57082c4322e0 ---------J   07000  PRINT "COMMAND 1 = SHORT RANGE SENSOR SCAN"
    0x57082c432490 ---------J   07010  PRINT "  PRINTS THE QUADRANT YOU ARE CURRENTLY IN, INCLUDING"
    0x57082c432640 ---------J   07020  PRINT "  STARS, KLINGONS, STARBASES, AND THE ENTERPRISE; ALONG"
    0x57082c4327d0 ---------J   07030  PRINT "  WITH OTHER PERTINATE INFORMATION."
    0x57082c432970 ---------J   07040  PRINT "COMMAND 2 = LONG RANGE SENSOR SCAN"
    0x57082c432b30 ---------J   07050  PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x57082c432cf0 ---------J   07060  PRINT "  OF THE ENTERPRISE IN THE MIDDLE OF THE SCAN.  THE SCAN"
    0x57082c432eb0 ---------J   07070  PRINT "  IS CODED IN THE FORM XXX, WHERE THE UNITS DIGIT IS THE"
    0x57082c433070 ---------J   07080  PRINT "  NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF STAR-"
    0x57082c433220 ---------J   07090  PRINT "  BASES, THE HUNDREDS DIGIT IS THE NUMBER OF KLINGONS."
    0x57082c4333c0 ---------J   07100  PRINT "COMMAND 3 = PHASER CONTROL"
    0x57082c433580 ---------J   07110  PRINT "  ALLOWS YOU TO DESTROY THE KLINGONS BY HITTING HIM WITH"
    0x57082c433740 ---------J   07120  PRINT "  SUITABLY LARGE NUMBERS OF ENERGY UNITS TO DEPLETE HIS "
    0x57082c4338e0 ---------J   07130  PRINT "  SHIELD POWER.  KEEP IN MIND THAT WHEN YOU SHOOT AT"
    0x57082c433a70 ---------J   07140  PRINT "  HIM, HE GONNA DO IT TO YOU TOO."
    0x57082c433c10 ---------J   07150  PRINT "COMMAND 4 = PHOTON TORPEDO CONTROL"
    0x57082c433dc0 ---------J   07160  PRINT "  COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL"
    0x57082c433f80 ---------J   07170  PRINT "  IF YOU HIT THE KLINGON, HE IS DESTROYED AND CANNOT FIRE"
    0x57082c434110 ---------J   07180  PRINT "  BACK AT YOU.  IF YOU MISS, HE WILL SHOOT HIS PHASERS AT"
    0x57082c4342a0 ---------J   07190  PRINT "  YOU."
    0x57082c434460 ---------J   07200  PRINT "   NOTE: THE LIBRARY COMPUTER (COMMAND 7) HAS AN OPTION"
    0x57082c434600 ---------J   07210  PRINT "   TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
    0x57082c4347b0 ---------J   07220  PRINT "COMMAND 5 = SHIELD CONTROL"
    0x57082c434970 ---------J   07230  PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS"
    0x57082c434b10 ---------J   07240  PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY."
    0x57082c434cc0 ---------J   07250  PRINT "COMMAND 6 = DAMAGE CONTROL REPORT"
    0x57082c434e80 ---------J   07260  PRINT "  GIVES STATE OF REPAIRS OF ALL DEVICES.  A STATE OF REPAIR"
    0x57082c435020 ---------J   07270  PRINT "  LESS THAN ZERO SHOWS THAT THAT DEVICE IS TEMPORARALY"
    0x57082c4351a0 ---------J   07280  PRINT "  DAMAGED."
    0x57082c435340 ---------J   07290  PRINT "COMMAND 7 = LIBRARY COMPUTER"
    0x57082c4354e0 ---------J   07300  PRINT "  THE LIBRARY COMPUTER CONTAINS THREE OPTIONS:"
    0x57082c435690 ---------J   07310  PRINT "    OPTION 0 = CUMULATIVE GALACTIC RECORD"
    0x57082c435840 ---------J   07320  PRINT "     SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
    0x57082c4359d0 ---------J   07330  PRINT "     LONG RANGE SENSOR SCANS"
    0x57082c435b70 ---------J   07340  PRINT "    OPTION 1 = STATUS REPORT"
    0x57082c435d10 ---------J   07350  PRINT "     SHOWS NUMBER OF KLINGONS, STARDATES AND STARBASES"
    0x57082c435e90 ---------J   07360  PRINT "     LEFT."
    0x57082c436030 ---------J   07370  PRINT "    OPTION 2 = PHOTON TORPEDO DATA"
    0x57082c4361e0 ---------J   07380  PRINT "     GIVES TRAJECTORY AND DISTANCE BETWEEN THE ENTERPRISE"
    0x57082c436360 ---------J   07390  PRINT "     AND ALL KLINGONS IN YOUR QUADRANT"
    0x57082c4363c0 ---------J   07400  RETURN
    0x57082c436420 ---------A   07410  END
 */

