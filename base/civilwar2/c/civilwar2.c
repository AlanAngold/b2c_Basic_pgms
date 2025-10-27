/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/civilwar2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5949523e7ba0 ---------A   00002 PRINT TAB(26) "CIVIL WAR"
    0x5949523e8f50 ---------A   00004 PRINT TAB(15) "CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5949523e7910 ---------A   00006 PRINT : PRINT : PRINT
    0x5949523d7300 ---------A   00020 REM ORIGINAL GAME DESIGN: CRAM, GOODIE, HIBBARD LEXINGTON H.S.
    0x5949523e67f0 ---------A   00030 REM MODIFICATIONS: G. PAUL, R. HESS (TIES), 1973
    0x5949523eee60 ---------A   00050  DIM S(4),C$(14),M1(14),M2(14),C1(14),C2(14),M(14)
    0x5949523eeee0 ---------A   00060  REM UNION INFO ON LIKELY CONFEDERATE STRATEGY
    0x5949523ef950 ---------A   00070  S(1)=25 : S(2)=25 : S(3)=25 : S(4)=25
    0x5949523ef9a0 ---------A   00082  REM READ HISTORICAL DATA.
    0x5949523e66d0 ---------A   00084  FOR D=1 TO 14
    0x5949523f0800 ---------A   00086  READ C$(D),M1(D),M2(D),C1(D),C2(D),M(D)
    0x5949523f0920 ---------A   00088  NEXT D
    0x5949523e8ac0 ---------A   00089  LET D=RND(-1)
    0x5949523f0c20 ---------A   00090  PRINT
    0x5949523f0d70 ---------A   00100  PRINT "DO YOU WANT INSTRUCTIONS";
    0x5949523e6670 ---------A T 00110  INPUT X$
    0x5949523f1160 ---------A   00120  IF X$="YES" THEN 160
    0x5949523f13c0 ---------A   00130  IF X$="NO" THEN 370
    0x5949523f1540 ---------A   00140  PRINT "YES OR NO -- ";
    0x5949523f15c0 ---------A   00150  GOTO 110
    0x5949523f1730 ---------A T 00160  PRINT : PRINT : PRINT : PRINT
    0x5949523f18c0 ---------A   00170  PRINT "THIS IS A CIVIL WAR SIMULATION."
    0x5949523f1a60 ---------A   00180  PRINT "TO PLAY TYPE A RESPONSE WHEN THE COMPUTER ASKS."
    0x5949523f1c10 ---------A   00190  PRINT "REMEMBER THAT ALL FACTORS ARE INTERRELATED AND THAT YOUR"
    0x5949523f1dd0 ---------A   00200  PRINT "RESPONSES COULD CHANGE HISTORY. FACTS AND FIGURES USED ARE"
    0x5949523f1f80 ---------A   00210  PRINT "BASED ON THE ACTUAL OCCURRENCE. MOST BATTLES TEND TO RESULT"
    0x5949523f2100 ---------A   00220  PRINT "AS THEY DID IN THE CIVIL WAR, BUT IT ALL DEPENDS ON YOU!!"
    0x5949523f21a0 ---------A   00230  PRINT
    0x5949523f2330 ---------A   00240  PRINT "THE OBJECT OF THE GAME IS TO WIN AS MANY BATTLES AS ";
    0x5949523f2480 ---------A   00245  PRINT "POSSIBLE."
    0x5949523f2510 ---------A   00250  PRINT
    0x5949523f26a0 ---------A   00260  PRINT "YOUR CHOICES FOR DEFENSIVE STRATEGY ARE:"
    0x5949523f2830 ---------A   00270  PRINT "        (1) ARTILLERY ATTACK"
    0x5949523f2be0 ---------A   00280  PRINT "        (2) FORTIFICATION AGAINST FRONTAL ATTACK"
    0x5949523f2d60 ---------A   00290  PRINT "        (3) FORTIFICATION AGAINST FLANKING MANEUVERS"
    0x5949523f2ee0 ---------A   00300  PRINT "        (4) FALLING BACK"
    0x5949523f3070 ---------A   00310  PRINT " YOUR CHOICES FOR OFFENSIVE STRATEGY ARE:"
    0x5949523f31e0 ---------A   00320  PRINT "        (1) ARTILLERY ATTACK"
    0x5949523f3360 ---------A   00330  PRINT "        (2) FRONTAL ATTACK"
    0x5949523f34d0 ---------A   00340  PRINT "        (3) FLANKING MANEUVERS"
    0x5949523f3660 ---------A   00350  PRINT "        (4) ENCIRCLEMENT"
    0x5949523f3800 ---------A   00360  PRINT "YOU MAY SURRENDER BY TYPING A '5' FOR YOUR STRATEGY."
    0x5949523f3a80 ---------A T 00370  PRINT : PRINT : PRINT : PRINT "ARE THERE TWO GENERALS PRESENT ";
    0x5949523f3bf0 ---------A T 00380  PRINT "(ANSWER YES OR NO)";
    0x5949523f3e10 ---------A   00390  INPUT B$
    0x5949523f40a0 ---------A   00400  IF B$="YES" THEN 430
    0x5949523f4350 ---------A   00410  IF B$ <> "NO" THEN 380
    0x5949523f4510 ---------A   00420  PRINT : PRINT "YOU ARE THE CONFEDERACY.   GOOD LUCK!"
    0x5949523f4580 ---------A   00425  PRINT
    0x5949523f47a0 ---------A T 00430  LET D=1
    0x5949523f4a10 ---------A   00440  IF B$ <> "YES" THEN 460
    0x5949523f4c60 ---------A   00450  LET D=2
    0x5949523f4e00 ---------A T 00460  PRINT "SELECT A BATTLE BY TYPING A NUMBER FROM 1 TO 14 ON"
    0x5949523f4fb0 ---------A   00470  PRINT "REQUEST.  TYPE ANY OTHER NUMBER TO END THE SIMULATION."
    0x5949523f5130 ---------A   00480  PRINT "BUT '0' BRINGS BACK EXACT PREVIOUS BATTLE SITUATION"
    0x5949523f5290 ---------A   00490  PRINT "ALLOWING YOU TO REPLAY IT"
    0x5949523f5330 ---------A   00500  PRINT
    0x5949523f54c0 ---------A   00510  PRINT "NOTE: A NEGATIVE FOOD$ ENTRY CAUSES THE PROGRAM TO "
    0x5949523f5630 ---------A   00520  PRINT "USE THE ENTRIES FROM THE PREVIOUS BATTLE"
    0x5949523f56c0 ---------A   00530  PRINT
    0x5949523f5860 ---------A   00540  PRINT "AFTER REQUESTING A BATTLE, DO YOU WISH ";
    0x5949523f59e0 ---------A   00550  PRINT "BATTLE DESCRIPTIONS ";
    0x5949523f5b50 ---------A T 00560  PRINT "(ANSWER YES OR NO)";
    0x5949523f5cb0 ---------A   00570  INPUT X$
    0x5949523f5f40 ---------A   00580  IF X$="YES" THEN 600
    0x5949523f65f0 ---------A   00590  IF X$ <> "NO" THEN 560
    0x5949523f8130 ---------A T 00600  L=0:W=0:R1=0:Q1=0:M3=0:M4=0:P1=0:P2=0:T1=0:T2=0
    0x5949523fa320 ---------A   00610  F(2)=0:H(2)=0:B(2)=0:R2=0:Q2=0:C6=0:F=0:W0=0:Y=0:Y2=0:U=0:U2=0
    0x5949523fa450 ---------A T 00620  PRINT : PRINT : PRINT
    0x5949523fa5d0 ---------A   00630  PRINT "WHICH BATTLE DO YOU WISH TO SIMULATE";
    0x5949523fa7e0 ---------A   00640  INPUT A
    0x5949523faa50 ---------A   00650  IF A <> 0 THEN 660
    0x5949523fad70 ---------A   00655  IF R <> 0 THEN 1140
    0x5949523fafe0 ---------A T 00660  IF A <=0 THEN 2860
    0x5949523fb240 ---------A   00665  IF A >= 15 THEN 2860
    0x5949523fb560 ---------A   00670  LET C$=C$(A)
    0x5949523fb870 ---------A   00680  LET M1=M1(A)
    0x5949523fbb80 ---------A   00690  LET M2=M2(A)
    0x5949523fbe90 ---------A   00700  LET C1=C1(A)
    0x5949523fc1a0 ---------A   00710  LET C2=C2(A)
    0x5949523fc4b0 ---------A   00720  LET M=M(A)
    0x5949523fc6d0 ---------A   00960  LET U=0
    0x5949523fc740 ---------A   00970  REM  INFLATION CALC
    0x5949523fcda0 ---------A   00980  LET I1=10+(L-W)*2
    0x5949523fd400 ---------A   00990  LET I2=10+(W-L)*2
    0x5949523fd470 ---------A   01000  REM - MONEY AVAILABLE
    0x5949523fe460 ---------A   01010  LET D(1)=100*INT((M1*(100-I1)/2000)*(1+(R1-Q1)/(R1+1))+.5)
    0x5949523feda0 ---------A   01020  LET D(2)=100*INT(M2*(100-I2)/2000+.5)
    0x5949523ff040 ---------A   01030  IF B$ <> "YES" THEN 1050
    0x5949523ffff0 ---------A   01040  LET D(2)=100*INT((M2*(100-I2)/2000)*(1+(R2-Q2)/(R2+1))+.5)
    0x594952400060 ---------A T 01050  REM - MEN   AVAILABLE
    0x594952400a80 ---------A   01060  LET M5=INT(M1*(1+(P1-T1)/(M3+1)))
    0x594952401470 ---------A   01070  LET M6=INT(M2*(1+(P2-T2)/(M4+1)))
    0x594952401980 ---------A   01080  LET F1=5*M1/6
    0x594952401b40 ---------A   01090  PRINT : PRINT : PRINT : PRINT : PRINT
    0x594952401db0 ---------A   01100  PRINT "THIS IS THE BATTLE OF ";C$
    0x594952402020 ---------A   01110  IF X$="NO" THEN 1150
    0x5949524022b0 ---------A   01120  IF A>11 THEN 1130
    0x594952402c60 ---------A   01125  ON A GOTO 3580,3620,3650,3690,3720,3750,3780,3800,3830,3860,3890
    0x594952403100 ---------A T 01130  ON A-11 GOTO 3920,3950,3980
    0x594952403350 ---------A T 01140  PRINT C$" INSTANT REPLAY"
    0x5949524033d0 ---------A T 01150  PRINT
    0x594952403730 ---------A   01160  PRINT " ","CONFEDERACY"," UNION"
    0x594952403c90 ---------A   01170  PRINT "MEN"," "M5," "M6
    0x594952404380 ---------A   01180  PRINT "MONEY","$";D(1),"$";D(2)
    0x594952404bd0 ---------A   01190  PRINT "INFLATION"," ";I1+15;"%"," ";I2;"%"
    0x594952404c70 ---------A   01195  PRINT
    0x594952404d00 ---------A   01200  REM - ONLY IN PRINTOUT IS CONFED INFLATION = I1+15%
    0x594952404dc0 ---------A   01210  REM - IF TWO GENERALS, INPUT CONFED. FIRST
    0x594952405190 ---------A   01220  FOR I=1 TO D
    0x594952405410 ---------A   01230  IF B$ <> "YES" THEN 1260
    0x594952405680 ---------A   01240  IF I=2 THEN 1260
    0x594952405830 ---------A   01250  PRINT "CONFEDERATE GENERAL---";
    0x5949524059a0 ---------A T 01260  PRINT "HOW MUCH DO YOU WISH TO SPEND FOR"
    0x594952405b10 ---------A T 01270  PRINT " - FOOD......";
    0x594952405c70 ---------A   01280  INPUT F
    0x594952405ee0 ---------A   01290  IF F >= 0 THEN 1360
    0x594952406150 ---------A   01300  IF R1 <> 0 THEN 1330
    0x5949524062b0 ---------A   01310  PRINT "NO PREVIOUS ENTRIES"
    0x594952406340 ---------A   01320  GOTO 1270
    0x5949524064a0 ---------A T 01330  PRINT "ASSUME YOU WANT TO KEEP SAME ALLOCATIONS"
    0x594952406510 ---------A   01340  PRINT
    0x594952406580 ---------A   01350  GOTO 1510
    0x594952406890 ---------A T 01360  LET F(I)=F
    0x594952406a00 ---------A T 01370  PRINT " - SALARIES..";
    0x594952406c30 ---------A   01380  INPUT H(I)
    0x594952406f20 ---------A   01390  LET N=1
    0x594952407260 ---------A   01400  IF H(I)<0 THEN 1490
    0x5949524073e0 ---------A T 01410  PRINT " - AMMUNITION";
    0x594952407e20 ---------A   01420  INPUT B(I)
    0x594952408050 ---------A   01430  LET N=2
    0x594952408380 ---------A   01440  IF B(I)<0 THEN 1490
    0x594952408420 ---------A   01450  PRINT
    0x594952408c70 ---------A   01460  IF F(I)+H(I)+B(I) <= D(I) THEN 1510
    0x594952408fc0 ---------A   01470  PRINT "THINK AGAIN! YOU HAVE ONLY $"D(I)
    0x594952409050 ---------A   01480  GOTO 1270
    0x5949524091b0 ---------A T 01490  PRINT "NEGATIVE VALUES NOT ALLOWED."
    0x594952409490 ---------A   01500  ON N GOTO 1370,1410
    0x594952409700 ---------A T 01510  IF B$ <> "YES" THEN 1550
    0x594952409970 ---------A   01520  IF I=2 THEN 1550
    0x594952409af0 ---------A   01530  PRINT "UNION GENERAL---";
    0x594952409c20 ---------A   01540  NEXT I
    0x594952409ff0 ---------A T 01550  FOR Z=1 TO D
    0x59495240a280 ---------A   01560  IF B$ <> "YES" THEN 1620
    0x59495240a570 ---------A   01570  ON Z GOTO 1580,1600
    0x59495240a6e0 ---------A T 01580  PRINT "CONFEDERATE ";
    0x59495240a760 ---------A   01590  GOTO 1620
    0x59495240a8c0 ---------A T 01600  PRINT "      UNION ";
    0x59495240a930 ---------A   01610  REM - FIND MORALE
    0x59495240b5c0 ---------A T 01620  LET O=((2*F(Z)^2+H(Z)^2)/F1^2+1)
    0x59495240b820 ---------A   01630  IF O<10 THEN 1660
    0x59495240b980 ---------A   01640  PRINT "MORALE IS HIGH"
    0x59495240b9f0 ---------A   01650  GOTO 1700
    0x59495240bc40 ---------A T 01660  IF O<5 THEN 1690
    0x59495240bda0 ---------A   01670  PRINT "MORALE IS FAIR"
    0x59495240be20 ---------A   01680  GOTO 1700
    0x59495240bf70 ---------A T 01690  PRINT "MORALE IS POOR"
    0x59495240c1e0 ---------A T 01700  IF B$ <> "YES" THEN 1760
    0x59495240c500 ---------A   01710  LET O(Z)=O
    0x59495240c630 ---------A   01720  NEXT Z
    0x59495240c9f0 ---------A   01730  LET O2=O(2)
    0x59495240ccf0 ---------A   01740  LET O=O(1)
    0x59495240ce90 ---------A   01750  PRINT "CONFEDERATE GENERAL---";
    0x59495240cf10 ---------A T 01760  REM - ACTUAL OFF/DEF BATTLE SITUATION
    0x59495240d190 ---------A   01770  IF M <> 3 THEN 1800
    0x59495240d300 ---------A   01780  PRINT "YOU ARE ON THE OFFENSIVE"
    0x59495240d380 ---------A   01790  GOTO 1840
    0x59495240d5d0 ---------A T 01800  IF M <> 1 THEN 1830
    0x59495240d740 ---------A   01810  PRINT "YOU ARE ON THE DEFENSIVE"
    0x59495240d7d0 ---------A   01820  GOTO 1840
    0x59495240d920 ---------A T 01830  PRINT "BOTH SIDES ARE ON THE OFFENSIVE "
    0x59495240d9a0 ---------A T 01840  PRINT
    0x59495240da10 ---------A   01850  REM - CHOOSE STRATEGIES
    0x59495240dca0 ---------A   01860  IF B$ <> "YES" THEN 1910
    0x59495240df90 ---------A   01870  FOR I=1 TO 2
    0x59495240e280 ---------A   01880  ON I GOTO 1890,1920
    0x59495240e3f0 ---------A T 01890  PRINT "CONFEDERATE STRATEGY ";
    0x59495240e470 ---------A   01900  GOTO 1920
    0x59495240e5d0 ---------A T 01910  PRINT "YOUR STRATEGY ";
    0x59495240e730 ---------A T 01920  INPUT Y
    0x59495240eb80 ---------A   01930  IF ABS(Y-3)<3 THEN 1960
    0x59495240eee0 ---------A   01940  PRINT "STRATEGY";Y;"NOT ALLOWED."
    0x59495240ef60 ---------A   01950  GOTO 1910
    0x59495240f1c0 ---------A T 01960  IF B$="YES" THEN 2000
    0x59495240f420 ---------A   01970  IF Y=5 THEN 2830
    0x59495240f4a0 ---------A   01980  GOSUB 3110
    0x59495240f500 ---------A   01990  GOTO 2170
    0x59495240f740 ---------A T 02000  IF I=2 THEN 2040
    0x59495240fa50 ---------A   02010  LET Y1=Y
    0x59495240fbc0 ---------A T 02020  PRINT "UNION STRATEGY ";
    0x59495240fcf0 ---------A   02030  NEXT I
    0x59495240ff30 ---------A T 02040  LET Y2=Y
    0x594952410160 ---------A   02050  LET Y=Y1
    0x5949524103c0 ---------A   02060  IF Y2=5 THEN 2020
    0x594952410450 ---------A   02070  REM : SIMULATED LOSSES-NORTH
    0x5949524110f0 ---------A   02080  LET C6=(2*C2/5)*(1+1/(2*(ABS(Y2-Y)+1)))
    0x594952411af0 ---------A   02090  LET C6=C6*(1.28+(5*M2/6)/(B(2)+1))
    0x594952412280 ---------A   02100  LET C6=INT(C6*(1+1/O2)+.5)
    0x594952412310 ---------A   02110  REM - IF LOSS > MEN PRESENT, RESCALE LOSSES
    0x594952412720 ---------A   02120  LET E2=100/O2
    0x594952412ba0 ---------A   02130  IF INT(C6+E2)<M6 THEN 2190
    0x5949524130c0 ---------A   02140  LET C6=INT(13*M6/20)
    0x5949524134f0 ---------A   02150  LET E2=7*C6/13
    0x594952413710 ---------A   02160  LET U2=1
    0x594952413790 ---------A T 02170  REM - CALCULATE SIMULATED LOSSES
    0x594952413830 ---------A   02180  PRINT
    0x594952413b60 ---------A T 02190  PRINT : PRINT : PRINT ,"CONFEDERACY","UNION"
    0x594952414890 ---------A   02200  LET C5=(2*C1/5)*(1+1/(2*(ABS(Y2-Y)+1)))
    0x594952415580 ---------A   02210  LET C5=INT(C5*(1+1/O)*(1.28+F1/(B(1)+1))+.5)
    0x594952415990 ---------A   02220  LET E=100/O
    0x594952416460 ---------A   02230  IF C5+100/O<M1*(1+(P1-T1)/(M3+1)) THEN 2270
    0x594952416fa0 ---------A   02240  LET C5=INT(13*M1/20*(1+(P1-T1)/(M3+1)))
    0x5949524173d0 ---------A   02250  LET E=7*C5/13
    0x5949524175e0 ---------A   02260  LET U=1
    0x594952417840 ---------A T 02270  IF D=1 THEN 2500
    0x594952417bb0 ---------A T 02280  PRINT "CASUALTIES",C5,C6
    0x5949524180c0 ---------A   02290  PRINT "DESERTIONS",INT(E),INT(E2)
    0x594952418140 ---------A   02300  PRINT
    0x5949524183d0 ---------A   02310  IF B$ <> "YES" THEN 2350
    0x594952418670 ---------A   02320  PRINT "COMPARED TO THE ACTUAL CASUALTIES AT "C$
    0x594952418e30 ---------A   02330  PRINT "CONFEDERATE:"INT(100*(C5/C1)+.5)"% OF THE ORIGINAL"
    0x5949524195c0 ---------A   02340  PRINT "UNION:      "INT(100*(C6/C2)+.5)"% OF THE ORIGINAL"
    0x594952419630 ---------A T 02350  PRINT
    0x5949524196a0 ---------A   02360  REM - 1 WHO ONE
    0x594952419910 ---------A   02370  IF U <> 1 THEN 2380
    0x594952419b70 ---------A   02375  IF U2=1 THEN 2460
    0x594952419dd0 ---------A T 02380  IF U=1 THEN 2420
    0x59495241a040 ---------A   02390  IF U2=1 THEN 2440
    0x59495241a510 ---------A   02400  IF C5+E=C6+E2 THEN 2460
    0x59495241a9e0 ---------A   02410  IF C5+E<C6+E2 THEN 2440
    0x59495241ac40 ---------A T 02420  PRINT "THE UNION WINS "C$
    0x59495241acc0 ---------A   02430  GOTO 2600
    0x59495241af00 ---------A T 02440  PRINT "THE CONFEDERACY WINS "C$
    0x59495241af80 ---------A   02450  GOTO 2660
    0x59495241b0d0 ---------A T 02460  PRINT "BATTLE OUTCOME UNRESOLVED"
    0x59495241b400 ---------A   02470  LET W0=W0+1
    0x59495241b650 ---------A   02480  IF A=0 THEN 2790
    0x59495241b6e0 ---------A   02490  GOTO 2680
    0x59495241be60 ---------A T 02500  LET C6=INT(17*C2*C1/(C5*20))
    0x59495241c190 ---------A   02510  LET E2=5*O
    0x59495241c230 ---------A   02520  GOTO 2280
    0x59495241c9d0 ----------   02530  PRINT "YOUR CASUALTIES WERE "INT(100*(C5/C1)+.5)"% OF "
    0x59495241cc30 ----------   02540  PRINT "THE ACTUAL CASUALTIES AT ";C$
    0x59495241ccb0 ----------   02550  PRINT
    0x59495241cd20 ---------A   02560  REM - FIND WHO WON
    0x59495241cfa0 ----------   02570  IF U=1 THEN 2590
    0x59495241d9f0 ----------   02580  IF C5+E<17*C2*C1/(C5*20)+5*O THEN 2630
    0x59495241dc50 ---------- T 02590  PRINT "YOU LOSE ";C$
    0x59495241dea0 ---------A T 02600  IF A=0 THEN 2790
    0x59495241e1e0 ---------A   02610  LET L=L+1
    0x59495241e260 ---------A   02620  GOTO 2680
    0x59495241e4d0 ---------- T 02630  PRINT "YOU WIN ";C$
    0x59495241e560 ---------A   02640  REM - CUMULATIVE BATTLE FACTORS WHICH ALTER HISTORICAL
    0x59495241e630 ---------A   02650  REM  RESOURCES AVAILABLE.IF A REPLAY DON'T UPDATE.
    0x59495241e890 ---------A T 02660  IF A=0 THEN 2790
    0x59495241ebd0 ---------A   02670  LET W=W+1
    0x59495241f040 ---------A T 02680  LET T1=T1+C5+E
    0x594952407850 ---------A   02690  LET T2=T2+C6+E2
    0x594952407ba0 ---------A   02700  LET P1=P1+C1
    0x594952420370 ---------A   02710  LET P2=P2+C2
    0x594952420b90 ---------A   02720  LET Q1=Q1+(F(1)+H(1)+B(1))
    0x5949524213b0 ---------A   02730  LET Q2=Q2+(F(2)+H(2)+B(2))
    0x594952421a70 ---------A   02740  LET R1=R1+M1*(100-I1)/20
    0x594952422120 ---------A   02750  LET R2=R2+M2*(100-I2)/20
    0x594952422470 ---------A   02760  LET M3=M3+M1
    0x5949524227c0 ---------A   02770  LET M4=M4+M2
    0x594952422830 ---------A   02780  GOSUB 3300
    0x594952422c30 ---------A T 02790  U=0:U2=0
    0x594952422d80 ---------A   02800  PRINT "---------------"
    0x594952422e00 ---------A   02810  GOTO 620
    0x594952422e60 ---------A   02820  REM------FINISH OFF
    0x594952422ff0 ---------A T 02830  PRINT "THE CONFEDERACY HAS SURRENDERED"
    0x594952423080 ---------A   02840  GOTO 2860
    0x5949524231f0 ----------   02850  PRINT "THE UNION HAS SURRENDERED."
    0x594952423400 ---------A T 02860  PRINT : PRINT : PRINT : PRINT : PRINT : PRINT
    0x594952423590 ---------A   02870  PRINT "THE CONFEDERACY ";
    0x5949524239e0 ---------A   02880  PRINT "HAS WON "W" BATTLES AND LOST "L
    0x594952423c30 ---------A   02890  IF Y=5 THEN 2940
    0x594952423ea0 ---------A   02900  IF Y2=5 THEN 2920
    0x594952424120 ---------A   02910  IF W <= L THEN 2940
    0x5949524243a0 ---------A   02915  IF Y=5 THEN 2940
    0x594952424510 ---------A T 02920  PRINT "THE CONFEDERACY HAS WON THE WAR"
    0x594952424590 ---------A   02930  GOTO 2950
    0x5949524246e0 ---------A T 02940  PRINT "THE UNION HAS WON THE WAR"
    0x594952424750 ---------A T 02950  PRINT
    0x5949524249d0 ---------A   02960  IF R1=0 THEN 3100
    0x594952424f90 ---------A   02970  PRINT "FOR THE "W+L+W0" BATTLES FOUGHT (EXCUDING RERUNS)"
    0x594952425310 ---------A   02980  PRINT " "," "," ";
    0x594952425580 ---------A   02990  PRINT "CONFEDERACY"," UNION"
    0x594952425cb0 ---------A   03000  PRINT "HISTORICAL LOSSES",INT(P1+.5),INT(P2+.5)
    0x5949524263c0 ---------A   03010  PRINT "SIMULATED LOSSES",INT(T1+.5),INT(T2+.5)
    0x594952426460 ---------A   03020  PRINT
    0x594952427040 ---------A   03030  PRINT "    % OF ORIGINAL",INT(100*(T1/P1)+.5),INT(100*(T2/P2)+.5)
    0x5949524272b0 ---------A   03040  IF B$="YES" THEN 3100
    0x594952427360 ---------A   03050  PRINT
    0x594952427500 ---------A   03060  PRINT "UNION INTELLIGENCE SUGGESTS THAT THE SOUTH USED "
    0x594952427680 ---------A   03070  PRINT "STRATEGIES 1, 2, 3, 4 IN THE FOLLOWING PERCENTAGES"
    0x594952427eb0 ---------A   03080  PRINT S(1);S2(2);S(3);S(4)
    0x594952427f30 ---------A   03090  REM---------------------------------
    0x594952427f90 ---------A T 03100  STOP
    0x594952428040 ---------B G 03110  REM - UNION STRATEGY IS COMPUTER CHOSEN
    0x5949524281e0 ---------B   03120  PRINT "UNION STRATEGY IS ";
    0x594952428430 ---------B   03130  IF A <> 0 THEN 3180
    0x5949524285a0 ---------B T 03140  INPUT Y2
    0x594952428800 ---------B   03150  IF Y2 <=0 THEN 3160
    0x594952428a90 ---------B   03155  IF Y2<5 THEN 3290
    0x594952428c20 ---------B T 03160  PRINT "ENTER 1 , 2 ,3 , OR 4 (USUALLY PREVIOUS UNION STRATEGY)"
    0x594952428c90 ---------B   03170  GOTO 3140
    0x594952428f50 ---------B T 03180  LET S0=0
    0x594952429340 ---------B   03190  LET R=100*RND(0)
    0x594952429610 ---------B   03200  FOR I=1 TO 4
    0x594952429a80 ---------B   03210  LET S0=S0+S(I)
    0x594952429b20 ---------B   03220  REM - IF ACTUAL STRATEGY INFO IS IN PROGRAM DATA STATEMENTS
    0x594952429bf0 ---------B   03230  REM   THEN R-100 IS EXTRA WEIGHT GIVEN TO THAT STATEGY.
    0x594952429e70 ---------B   03240  IF R<S0 THEN 3270
    0x594952429fb0 ---------B   03250  NEXT I
    0x59495242a080 ---------B   03260  REM - IF ACTUAL STRAT. IN,THEN HERE IS Y2= HIST. STRAT.
    0x59495242a2c0 ---------B T 03270  LET Y2=I
    0x59495242a410 ---------B   03280  PRINT Y2
    0x59495242a460 ---------B T 03290  RETURN
    0x59495242a530 ---------C G 03300  REM LEARN  PRESENT STRATEGY, START FORGETTING OLD ONES
    0x59495242a610 ---------C   03310  REM - PRESENT STRATEGY OF SOUTH GAINS 3*S, OTHERS LOSE S
    0x59495242a6f0 ---------C   03320  REM   PROBABILITY POINTS, UNLESS A STRATEGY FALLS BELOW 5%.
    0x59495242a910 ---------C   03330  LET S=3
    0x59495242ab20 ---------C   03340  LET S0=0
    0x59495242ae00 ---------C   03350  FOR I=1 TO 4
    0x59495242b140 ---------C   03360  IF S(I) <= 5 THEN 3390
    0x59495242b660 ---------C   03370  LET S(I)=S(I)-S
    0x59495242b9b0 ---------C   03380  LET S0=S0+S
    0x59495242bae0 ---------C T 03390  NEXT I
    0x59495242c000 ---------C   03400  LET S(Y)=S(Y)+S0
    0x59495242c050 ---------C   03410  RETURN
    0x59495242c130 ---------A   03420  REM - HISTORICAL DATA...CAN ADD MORE (STRAT.,ETC) BY INSERTING
    0x59495242c210 ---------A   03430  REM   DATA STATEMENTS AFTER APPRO. INFO, AND ADJUSTING READ
    0x59495242c810 ---------A   03440  DATA "BULL RUN",18000,18500,1967,2708,1
    0x59495242cde0 ---------A   03450  DATA "SHILOH",40000.,44894.,10699,13047,3
    0x59495242d3c0 ---------A   03460  DATA "SEVEN DAYS",95000.,115000.,20614,15849,3
    0x59495242d990 ---------A   03470  DATA "SECOND BULL RUN",54000.,63000.,10000,14000,2
    0x59495242df60 ---------A   03480  DATA "ANTIETAM",40000.,50000.,10000,12000,3
    0x59495242e530 ---------A   03490  DATA "FREDERICKSBURG",75000.,120000.,5377,12653,1
    0x59495242eb10 ---------A   03500  DATA "MURFREESBORO",38000.,45000.,11000,12000,1
    0x59495242f0e0 ---------A   03510  DATA "CHANCELLORSVILLE",32000,90000.,13000,17197,2
    0x59495242f6b0 ---------A   03520  DATA "VICKSBURG",50000.,70000.,12000,19000,1
    0x59495242fc80 ---------A   03530  DATA "GETTYSBURG",72500.,85000.,20000,23000,3
    0x594952430250 ---------A   03540  DATA "CHICKAMAUGA",66000.,60000.,18000,16000,2
    0x594952430820 ---------A   03550  DATA "CHATTANOOGA",37000.,60000.,36700.,5800,2
    0x594952430df0 ---------A   03560  DATA "SPOTSYLVANIA",62000.,110000.,17723,18000,2
    0x5949524313e0 ---------A   03570  DATA "ATLANTA",65000.,100000.,8500,3700,1
    0x594952431590 ---------A T 03580  PRINT "JULY 21, 1861.  GEN. BEAUREGARD, COMMANDING THE SOUTH, MET"
    0x594952431740 ---------A   03590  PRINT "UNION FORCES WITH GEN. MCDOWELL IN A PREMATURE BATTLE AT"
    0x5949524318c0 ---------A   03600  PRINT "BULL RUN. GEN. JACKSON HELPED PUSH BACK THE UNION ATTACK."
    0x594952431960 ---------A   03610  GOTO 1150
    0x594952431ae0 ---------A T 03620  PRINT "APRIL 6-7, 1862.  THE CONFEDERATE SURPRISE ATTACK AT"
    0x594952431c50 ---------A   03630  PRINT "SHILOH FAILED DUE TO POOR ORGANIZATION."
    0x594952431cf0 ---------A   03640  GOTO 1150
    0x594952431e80 ---------A T 03650  PRINT "JUNE 25-JULY 1, 1862.  GENERAL LEE (CSA) UPHELD THE"
    0x594952432020 ---------A   03660  PRINT "OFFENSIVE THROUGHOUT THE BATTLE AND FORCED GEN. MCCLELLAN"
    0x594952432190 ---------A   03670  PRINT "AND THE UNION FORCES AWAY FROM RICHMOND."
    0x594952432230 ---------A   03680  GOTO 1150
    0x5949524323c0 ---------A T 03690  PRINT "AUG 29-30, 1862.  THE COMBINED CONFEDERATE FORCES UNDER";
    0x594952432540 ---------A   03695  PRINT " LEE"
    0x5949524326c0 ---------A   03700  PRINT "AND JACKSON DROVE THE UNION FORCES BACK INTO WASHINGTON."
    0x594952432760 ---------A   03710  GOTO 1150
    0x5949524328e0 ---------A T 03720  PRINT "SEPT 17, 1862.  THE SOUTH FAILED TO INCORPORATE MARYLAND"
    0x594952432a30 ---------A   03730  PRINT "INTO THE CONFEDERACY."
    0x594952432ad0 ---------A   03740  GOTO 1150
    0x594952432c60 ---------A T 03750  PRINT "DEC 13, 1862.  THE CONFEDERACY UNDER LEE SUCCESSFULLY"
    0x594952432dd0 ---------A   03760  PRINT "REPULSED AN ATTACK BY THE UNION UNDER GEN. BURNSIDE."
    0x594952432e70 ---------A   03770  GOTO 1150
    0x594952433000 ---------A T 03780  PRINT "DEC 31, 1862.  THE SOUTH UNDER GEN. BRAGG WON A CLOSE ";
    0x594952433150 ---------A   03785  PRINT "BATTLE."
    0x5949524331f0 ---------A   03790  GOTO 1150
    0x594952433390 ---------A T 03800  PRINT "MAY 1-6, 1863.  THE SOUTH HAD A COSTLY VICTORY AND LOST"
    0x594952433510 ---------A   03810  PRINT "ONE OF THEIR OUTSTANDING GENERALS, 'STONEWALL' JACKSON."
    0x5949524335c0 ---------A   03820  GOTO 1150
    0x594952433760 ---------A T 03830  PRINT "JULY 4, 1863.  VICKSBURG WAS A COSTLY DEFEAT FOR THE SOUTH"
    0x5949524338d0 ---------A   03840  PRINT "BECAUSE IT GAVE THE UNION ACCESS TO THE MISSISSIPPI."
    0x594952433970 ---------A   03850  GOTO 1150
    0x594952433b00 ---------A T 03860  PRINT "JULY 1-3, 1863.  A SOUTHERN MISTAKE BY GEN. LEE AT ";
    0x594952433c80 ---------A   03865  PRINT "GETTYSBURG"
    0x594952433df0 ---------A   03870  PRINT "COST THEM ONE OF THE MOST CRUCIAL BATTLES OF THE WAR."
    0x594952433ea0 ---------A   03880  GOTO 1150
    0x594952434030 ---------A T 03890  PRINT "SEPT. 15, 1863. CONFUSION IN A FOREST NEAR CHICKAMAUGA LED"
    0x594952434190 ---------A   03900  PRINT "TO A COSTLY SOUTHERN VICTORY."
    0x594952434240 ---------A   03910  GOTO 1150
    0x5949524343e0 ---------A T 03920  PRINT "NOV. 25, 1863. AFTER THE SOUTH HAD SIEGED GEN. ROSENCRANS'"
    0x594952434550 ---------A   03930  PRINT "ARMY FOR THREE MONTHS, GEN. GRANT BROKE THE SIEGE."
    0x5949524345f0 ---------A   03940  GOTO 1150
    0x594952434790 ---------A T 03950  PRINT "MAY 5, 1864.  GRANT'S PLAN TO KEEP LEE ISOLATED BEGAN TO"
    0x594952434910 ---------A   03960  PRINT "FAIL HERE, AND CONTINUED AT COLD HARBOR AND PETERSBURG."
    0x5949524349b0 ---------A   03970  GOTO 1150
    0x594952434b50 ---------A T 03980  PRINT "AUGUST, 1864.  SHERMAN AND THREE VETERAN ARMIES CONVERGED"
    0x594952434cd0 ---------A   03990  PRINT "ON ATLANTA AND DEALT THE DEATH BLOW TO THE CONFEDERACY."
    0x594952434d40 ---------A   04000  GOTO 1150
    0x594952434d80 ---------A   04010  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00110      00150T
     00160      00120T
     00370      00130T
     00380      00410T
     00430      00400T
     00460      00440T
     00560      00590T
     00600      00580T
     00620      02810T
     00660      00650T
     01050      01030T
     01130      01120T
     01140      00655T
     01150      01110T, 03610T, 03640T, 03680T, 03710T, 03740T, 03770T, 03790T, 
                03820T, 03850T, 03880T, 03910T, 03940T, 03970T, 04000T
     01260      01230T, 01240T
     01270      01320T, 01480T
     01330      01300T
     01360      01290T
     01370      01500T
     01410      01500T
     01490      01400T, 01440T
     01510      01350T, 01460T
     01550      01510T, 01520T
     01580      01570T
     01600      01570T
     01620      01560T, 01590T
     01660      01630T
     01690      01660T
     01700      01650T, 01680T
     01760      01700T
     01800      01770T
     01830      01800T
     01840      01790T, 01820T
     01890      01880T
     01910      01860T, 01950T
     01920      01880T, 01900T
     01960      01930T
     02000      01960T
     02020      02060T
     02040      02000T
     02170      01990T
     02190      02130T
     02270      02230T
     02280      02520T
     02350      02310T
     02380      02370T
     02420      02380T
     02440      02390T, 02410T
     02460      02375T, 02400T
     02500      02270T
     02590      02570T
     02600      02430T
     02630      02580T
     02660      02450T
     02680      02490T, 02620T
     02790      02480T, 02600T, 02660T
     02830      01970T
     02860      00660T, 00665T, 02840T
     02920      02900T
     02940      02890T, 02910T, 02915T
     02950      02930T
     03100      02960T, 03040T
     03110      01980G
     03140      03170T
     03160      03150T
     03180      03130T
     03270      03240T
     03290      03155T
     03300      02780G
     03390      03360T
     03580      01125T
     03620      01125T
     03650      01125T
     03690      01125T
     03720      01125T
     03750      01125T
     03780      01125T
     03800      01125T
     03830      01125T
     03860      01125T
     03890      01125T
     03920      01130T
     03950      01130T
     03980      01130T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5949523e7ba0 (00002)   0x5949523e7ba0 (00002)   0x594952434d80 (04010)   0x594952434d80 (04010)   
   B) 0x594952428040 (03110)   0x594952428040 (03110)   0x59495242a460 (03290)   0x59495242a460 (03290)   
   C) 0x59495242a530 (03300)   0x59495242a530 (03300)   0x59495242c050 (03410)   0x59495242c050 (03410)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     04890 - 10000    5120 

 */



/*
 *  Symbol Table Listing for 'basic/civilwar2.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B               Array    Integer         {0,9} 
    B$                       String      
    C$              Array    String          {0,13} 
    C1              Array    Integer         {0,13} 
    C2              Array    Integer         {0,13} 
    C5                       Integer     
    C6                       Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    E                        Integer     
    E2                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F               Array    Integer         {0,9} 
    F1                       Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H               Array    Integer         {0,9} 
    HEX$            Function String          args=1, int    
    I                        Integer     
    I1                       Integer     
    I2                       Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    L                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M               Array    Integer         {0,13} 
    M1              Array    Integer         {0,13} 
    M2              Array    Integer         {0,13} 
    M3                       Integer     
    M4                       Integer     
    M5                       Integer     
    M6                       Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    O                        Integer     
    O2                       Integer     
    OCT$            Function String          args=1, float  
    P1                       Integer     
    P2                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q1                       Integer     
    Q2                       Integer     
    R                        Integer     
    R1                       Integer     
    R2                       Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,3} 
    S0                       Integer     
    S2              Array    Integer         {0,9} 
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T1                       Integer     
    T2                       Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Integer     
    U2                       Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    W0                       Integer     
    X$                       String      
    Y                        Integer     
    Y1                       Integer     
    Y2                       Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/civilwar2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5949523e7ba0 ---------A   01000 PRINT TAB(10006) "CIVIL WAR"
    0x5949523e8f50 ---------A   01010 PRINT TAB(15) "CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5949523e7910 ---------A   01020 PRINT : PRINT : PRINT
    0x5949523d7300 ---------A   01030 REM ORIGINAL GAME DESIGN: CRAM, GOODIE, HIBBARD LEXINGTON H.S.
    0x5949523e67f0 ---------A   01040 REM MODIFICATIONS: G. PAUL, R. HESS (TIES), 1973
    0x5949523eee60 ---------A   01050  DIM S(4),C$(14),M1(14),M2(14),C1(14),C2(14),M(14)
    0x5949523eeee0 ---------A   01060  REM UNION INFO ON LIKELY CONFEDERATE STRATEGY
    0x5949523ef950 ---------A   01070  S(1)=25 : S(2)=25 : S(3)=25 : S(4)=25
    0x5949523ef9a0 ---------A   01080  REM READ HISTORICAL DATA.
    0x5949523e66d0 ---------A   01090  FOR D=1 TO 14
    0x5949523f0800 ---------A   01100  READ C$(D),M1(D),M2(D),C1(D),C2(D),M(D)
    0x5949523f0920 ---------A   01110  NEXT D
    0x5949523e8ac0 ---------A   01120  LET D=RND(-1)
    0x5949523f0c20 ---------A   01130  PRINT
    0x5949523f0d70 ---------A   01140  PRINT "DO YOU WANT INSTRUCTIONS";
    0x5949523e6670 ---------A T 01150  INPUT X$
    0x5949523f1160 ---------A   01160  IF X$="YES" THEN 1200
    0x5949523f13c0 ---------A   01170  IF X$="NO" THEN 1420
    0x5949523f1540 ---------A   01180  PRINT "YES OR NO -- ";
    0x5949523f15c0 ---------A   01190  GOTO 1150
    0x5949523f1730 ---------A T 01200  PRINT : PRINT : PRINT : PRINT
    0x5949523f18c0 ---------A   01210  PRINT "THIS IS A CIVIL WAR SIMULATION."
    0x5949523f1a60 ---------A   01220  PRINT "TO PLAY TYPE A RESPONSE WHEN THE COMPUTER ASKS."
    0x5949523f1c10 ---------A   01230  PRINT "REMEMBER THAT ALL FACTORS ARE INTERRELATED AND THAT YOUR"
    0x5949523f1dd0 ---------A   01240  PRINT "RESPONSES COULD CHANGE HISTORY. FACTS AND FIGURES USED ARE"
    0x5949523f1f80 ---------A   01250  PRINT "BASED ON THE ACTUAL OCCURRENCE. MOST BATTLES TEND TO RESULT"
    0x5949523f2100 ---------A   01260  PRINT "AS THEY DID IN THE CIVIL WAR, BUT IT ALL DEPENDS ON YOU!!"
    0x5949523f21a0 ---------A   01270  PRINT
    0x5949523f2330 ---------A   01280  PRINT "THE OBJECT OF THE GAME IS TO WIN AS MANY BATTLES AS ";
    0x5949523f2480 ---------A   01290  PRINT "POSSIBLE."
    0x5949523f2510 ---------A   01300  PRINT
    0x5949523f26a0 ---------A   01310  PRINT "YOUR CHOICES FOR DEFENSIVE STRATEGY ARE:"
    0x5949523f2830 ---------A   01320  PRINT "        (1) ARTILLERY ATTACK"
    0x5949523f2be0 ---------A   01330  PRINT "        (2) FORTIFICATION AGAINST FRONTAL ATTACK"
    0x5949523f2d60 ---------A   01340  PRINT "        (3) FORTIFICATION AGAINST FLANKING MANEUVERS"
    0x5949523f2ee0 ---------A   01350  PRINT "        (4) FALLING BACK"
    0x5949523f3070 ---------A   01360  PRINT " YOUR CHOICES FOR OFFENSIVE STRATEGY ARE:"
    0x5949523f31e0 ---------A   01370  PRINT "        (1) ARTILLERY ATTACK"
    0x5949523f3360 ---------A   01380  PRINT "        (2) FRONTAL ATTACK"
    0x5949523f34d0 ---------A   01390  PRINT "        (3) FLANKING MANEUVERS"
    0x5949523f3660 ---------A   01400  PRINT "        (4) ENCIRCLEMENT"
    0x5949523f3800 ---------A   01410  PRINT "YOU MAY SURRENDER BY TYPING A '5' FOR YOUR STRATEGY."
    0x5949523f3a80 ---------A T 01420  PRINT : PRINT : PRINT : PRINT "ARE THERE TWO GENERALS PRESENT ";
    0x5949523f3bf0 ---------A T 01430  PRINT "(ANSWER YES OR NO)";
    0x5949523f3e10 ---------A   01440  INPUT B$
    0x5949523f40a0 ---------A   01450  IF B$="YES" THEN 1490
    0x5949523f4350 ---------A   01460  IF B$ <> "NO" THEN 1430
    0x5949523f4510 ---------A   01470  PRINT : PRINT "YOU ARE THE CONFEDERACY.   GOOD LUCK!"
    0x5949523f4580 ---------A   01480  PRINT
    0x5949523f47a0 ---------A T 01490  LET D=1
    0x5949523f4a10 ---------A   01500  IF B$ <> "YES" THEN 1520
    0x5949523f4c60 ---------A   01510  LET D=2
    0x5949523f4e00 ---------A T 01520  PRINT "SELECT A BATTLE BY TYPING A NUMBER FROM 1 TO 14 ON"
    0x5949523f4fb0 ---------A   01530  PRINT "REQUEST.  TYPE ANY OTHER NUMBER TO END THE SIMULATION."
    0x5949523f5130 ---------A   01540  PRINT "BUT '0' BRINGS BACK EXACT PREVIOUS BATTLE SITUATION"
    0x5949523f5290 ---------A   01550  PRINT "ALLOWING YOU TO REPLAY IT"
    0x5949523f5330 ---------A   01560  PRINT
    0x5949523f54c0 ---------A   01570  PRINT "NOTE: A NEGATIVE FOOD$ ENTRY CAUSES THE PROGRAM TO "
    0x5949523f5630 ---------A   01580  PRINT "USE THE ENTRIES FROM THE PREVIOUS BATTLE"
    0x5949523f56c0 ---------A   01590  PRINT
    0x5949523f5860 ---------A   01600  PRINT "AFTER REQUESTING A BATTLE, DO YOU WISH ";
    0x5949523f59e0 ---------A   01610  PRINT "BATTLE DESCRIPTIONS ";
    0x5949523f5b50 ---------A T 01620  PRINT "(ANSWER YES OR NO)";
    0x5949523f5cb0 ---------A   01630  INPUT X$
    0x5949523f5f40 ---------A   01640  IF X$="YES" THEN 1660
    0x5949523f65f0 ---------A   01650  IF X$ <> "NO" THEN 1620
    0x5949523f8130 ---------A T 01660  L=0:W=0:R1=0:Q1=0:M3=0:M4=0:P1=0:P2=0:T1=0:T2=0
    0x5949523fa320 ---------A   01670  F(2)=0:H(2)=0:B(2)=0:R2=0:Q2=0:C6=0:F=0:W0=0:Y=0:Y2=0:U=0:U2=0
    0x5949523fa450 ---------A T 01680  PRINT : PRINT : PRINT
    0x5949523fa5d0 ---------A   01690  PRINT "WHICH BATTLE DO YOU WISH TO SIMULATE";
    0x5949523fa7e0 ---------A   01700  INPUT A
    0x5949523faa50 ---------A   01710  IF A <> 0 THEN 1730
    0x5949523fad70 ---------A   01720  IF R <> 0 THEN 2000
    0x5949523fafe0 ---------A T 01730  IF A <=0 THEN 3660
    0x5949523fb240 ---------A   01740  IF A >= 15 THEN 3660
    0x5949523fb560 ---------A   01750  LET C$=C$(A)
    0x5949523fb870 ---------A   01760  LET M1=M1(A)
    0x5949523fbb80 ---------A   01770  LET M2=M2(A)
    0x5949523fbe90 ---------A   01780  LET C1=C1(A)
    0x5949523fc1a0 ---------A   01790  LET C2=C2(A)
    0x5949523fc4b0 ---------A   01800  LET M=M(A)
    0x5949523fc6d0 ---------A   01810  LET U=0
    0x5949523fc740 ---------A   01820  REM  INFLATION CALC
    0x5949523fcda0 ---------A   01830  LET I1=10+(L-W)*2
    0x5949523fd400 ---------A   01840  LET I2=10+(W-L)*2
    0x5949523fd470 ---------A   01850  REM - MONEY AVAILABLE
    0x5949523fe460 ---------A   01860  LET D(1)=100*INT((M1*(100-I1)/2000)*(1+(R1-Q1)/(R1+1))+.5)
    0x5949523feda0 ---------A   01870  LET D(2)=100*INT(M2*(100-I2)/2000+.5)
    0x5949523ff040 ---------A   01880  IF B$ <> "YES" THEN 1910
    0x5949523ffff0 ---------A   01890  LET D(2)=100*INT((M2*(100-I2)/2000)*(1+(R2-Q2)/(R2+1))+.5)
    0x594952400060 ---------A   01900  REM - MEN   AVAILABLE
    0x594952400a80 ---------A T 01910  LET M5=INT(M1*(1+(P1-T1)/(M3+1)))
    0x594952401470 ---------A   01920  LET M6=INT(M2*(1+(P2-T2)/(M4+1)))
    0x594952401980 ---------A   01930  LET F1=5*M1/6
    0x594952401b40 ---------A   01940  PRINT : PRINT : PRINT : PRINT : PRINT
    0x594952401db0 ---------A   01950  PRINT "THIS IS THE BATTLE OF ";C$
    0x594952402020 ---------A   01960  IF X$="NO" THEN 2010
    0x5949524022b0 ---------A   01970  IF A>11 THEN 1990
    0x594952402c60 ---------A   01980  ON A GOTO 4080,4120,4150,4190,4230,4260,4290,4320,4350,4380,4420
    0x594952403100 ---------A T 01990  ON A-11 GOTO 4450,4480,4510
    0x594952403350 ---------A T 02000  PRINT C$" INSTANT REPLAY"
    0x5949524033d0 ---------A T 02010  PRINT
    0x594952403730 ---------A   02020  PRINT " ","CONFEDERACY"," UNION"
    0x594952403c90 ---------A   02030  PRINT "MEN"," "M5," "M6
    0x594952404380 ---------A   02040  PRINT "MONEY","$";D(1),"$";D(2)
    0x594952404bd0 ---------A   02050  PRINT "INFLATION"," ";I1+15;"%"," ";I2;"%"
    0x594952404c70 ---------A   02060  PRINT
    0x594952404d00 ---------A   02070  REM - ONLY IN PRINTOUT IS CONFED INFLATION = I1+15%
    0x594952404dc0 ---------A   02080  REM - IF TWO GENERALS, INPUT CONFED. FIRST
    0x594952405190 ---------A   02090  FOR I=1 TO D
    0x594952405410 ---------A   02100  IF B$ <> "YES" THEN 2130
    0x594952405680 ---------A   02110  IF I=2 THEN 2130
    0x594952405830 ---------A   02120  PRINT "CONFEDERATE GENERAL---";
    0x5949524059a0 ---------A T 02130  PRINT "HOW MUCH DO YOU WISH TO SPEND FOR"
    0x594952405b10 ---------A T 02140  PRINT " - FOOD......";
    0x594952405c70 ---------A   02150  INPUT F
    0x594952405ee0 ---------A   02160  IF F >= 0 THEN 2230
    0x594952406150 ---------A   02170  IF R1 <> 0 THEN 2200
    0x5949524062b0 ---------A   02180  PRINT "NO PREVIOUS ENTRIES"
    0x594952406340 ---------A   02190  GOTO 2140
    0x5949524064a0 ---------A T 02200  PRINT "ASSUME YOU WANT TO KEEP SAME ALLOCATIONS"
    0x594952406510 ---------A   02210  PRINT
    0x594952406580 ---------A   02220  GOTO 2380
    0x594952406890 ---------A T 02230  LET F(I)=F
    0x594952406a00 ---------A T 02240  PRINT " - SALARIES..";
    0x594952406c30 ---------A   02250  INPUT H(I)
    0x594952406f20 ---------A   02260  LET N=1
    0x594952407260 ---------A   02270  IF H(I)<0 THEN 2360
    0x5949524073e0 ---------A T 02280  PRINT " - AMMUNITION";
    0x594952407e20 ---------A   02290  INPUT B(I)
    0x594952408050 ---------A   02300  LET N=2
    0x594952408380 ---------A   02310  IF B(I)<0 THEN 2360
    0x594952408420 ---------A   02320  PRINT
    0x594952408c70 ---------A   02330  IF F(I)+H(I)+B(I) <= D(I) THEN 2380
    0x594952408fc0 ---------A   02340  PRINT "THINK AGAIN! YOU HAVE ONLY $"D(I)
    0x594952409050 ---------A   02350  GOTO 2140
    0x5949524091b0 ---------A T 02360  PRINT "NEGATIVE VALUES NOT ALLOWED."
    0x594952409490 ---------A   02370  ON N GOTO 2240,2280
    0x594952409700 ---------A T 02380  IF B$ <> "YES" THEN 2420
    0x594952409970 ---------A   02390  IF I=2 THEN 2420
    0x594952409af0 ---------A   02400  PRINT "UNION GENERAL---";
    0x594952409c20 ---------A   02410  NEXT I
    0x594952409ff0 ---------A T 02420  FOR Z=1 TO D
    0x59495240a280 ---------A   02430  IF B$ <> "YES" THEN 2490
    0x59495240a570 ---------A   02440  ON Z GOTO 2450,2470
    0x59495240a6e0 ---------A T 02450  PRINT "CONFEDERATE ";
    0x59495240a760 ---------A   02460  GOTO 2490
    0x59495240a8c0 ---------A T 02470  PRINT "      UNION ";
    0x59495240a930 ---------A   02480  REM - FIND MORALE
    0x59495240b5c0 ---------A T 02490  LET O=((2*F(Z)^2+H(Z)^2)/F1^2+1)
    0x59495240b820 ---------A   02500  IF O<10 THEN 2530
    0x59495240b980 ---------A   02510  PRINT "MORALE IS HIGH"
    0x59495240b9f0 ---------A   02520  GOTO 2570
    0x59495240bc40 ---------A T 02530  IF O<5 THEN 2560
    0x59495240bda0 ---------A   02540  PRINT "MORALE IS FAIR"
    0x59495240be20 ---------A   02550  GOTO 2570
    0x59495240bf70 ---------A T 02560  PRINT "MORALE IS POOR"
    0x59495240c1e0 ---------A T 02570  IF B$ <> "YES" THEN 2640
    0x59495240c500 ---------A   02580  LET O(Z)=O
    0x59495240c630 ---------A   02590  NEXT Z
    0x59495240c9f0 ---------A   02600  LET O2=O(2)
    0x59495240ccf0 ---------A   02610  LET O=O(1)
    0x59495240ce90 ---------A   02620  PRINT "CONFEDERATE GENERAL---";
    0x59495240cf10 ---------A   02630  REM - ACTUAL OFF/DEF BATTLE SITUATION
    0x59495240d190 ---------A T 02640  IF M <> 3 THEN 2670
    0x59495240d300 ---------A   02650  PRINT "YOU ARE ON THE OFFENSIVE"
    0x59495240d380 ---------A   02660  GOTO 2710
    0x59495240d5d0 ---------A T 02670  IF M <> 1 THEN 2700
    0x59495240d740 ---------A   02680  PRINT "YOU ARE ON THE DEFENSIVE"
    0x59495240d7d0 ---------A   02690  GOTO 2710
    0x59495240d920 ---------A T 02700  PRINT "BOTH SIDES ARE ON THE OFFENSIVE "
    0x59495240d9a0 ---------A T 02710  PRINT
    0x59495240da10 ---------A   02720  REM - CHOOSE STRATEGIES
    0x59495240dca0 ---------A   02730  IF B$ <> "YES" THEN 2780
    0x59495240df90 ---------A   02740  FOR I=1 TO 2
    0x59495240e280 ---------A   02750  ON I GOTO 2760,2790
    0x59495240e3f0 ---------A T 02760  PRINT "CONFEDERATE STRATEGY ";
    0x59495240e470 ---------A   02770  GOTO 2790
    0x59495240e5d0 ---------A T 02780  PRINT "YOUR STRATEGY ";
    0x59495240e730 ---------A T 02790  INPUT Y
    0x59495240eb80 ---------A   02800  IF ABS(Y-3)<3 THEN 2830
    0x59495240eee0 ---------A   02810  PRINT "STRATEGY";Y;"NOT ALLOWED."
    0x59495240ef60 ---------A   02820  GOTO 2780
    0x59495240f1c0 ---------A T 02830  IF B$="YES" THEN 2870
    0x59495240f420 ---------A   02840  IF Y=5 THEN 3640
    0x59495240f4a0 ---------A   02850  GOSUB 4560
    0x59495240f500 ---------A   02860  GOTO 3050
    0x59495240f740 ---------A T 02870  IF I=2 THEN 2910
    0x59495240fa50 ---------A   02880  LET Y1=Y
    0x59495240fbc0 ---------A T 02890  PRINT "UNION STRATEGY ";
    0x59495240fcf0 ---------A   02900  NEXT I
    0x59495240ff30 ---------A T 02910  LET Y2=Y
    0x594952410160 ---------A   02920  LET Y=Y1
    0x5949524103c0 ---------A   02930  IF Y2=5 THEN 2890
    0x594952410450 ---------A   02940  REM : SIMULATED LOSSES-NORTH
    0x5949524110f0 ---------A   02950  LET C6=(2*C2/5)*(1+1/(2*(ABS(Y2-Y)+1)))
    0x594952411af0 ---------A   02960  LET C6=C6*(1.28+(5*M2/6)/(B(2)+1))
    0x594952412280 ---------A   02970  LET C6=INT(C6*(1+1/O2)+.5)
    0x594952412310 ---------A   02980  REM - IF LOSS > MEN PRESENT, RESCALE LOSSES
    0x594952412720 ---------A   02990  LET E2=100/O2
    0x594952412ba0 ---------A   03000  IF INT(C6+E2)<M6 THEN 3060
    0x5949524130c0 ---------A   03010  LET C6=INT(13*M6/20)
    0x5949524134f0 ---------A   03020  LET E2=7*C6/13
    0x594952413710 ---------A   03030  LET U2=1
    0x594952413790 ---------A   03040  REM - CALCULATE SIMULATED LOSSES
    0x594952413830 ---------A T 03050  PRINT
    0x594952413b60 ---------A T 03060  PRINT : PRINT : PRINT ,"CONFEDERACY","UNION"
    0x594952414890 ---------A   03070  LET C5=(2*C1/5)*(1+1/(2*(ABS(Y2-Y)+1)))
    0x594952415580 ---------A   03080  LET C5=INT(C5*(1+1/O)*(1.28+F1/(B(1)+1))+.5)
    0x594952415990 ---------A   03090  LET E=100/O
    0x594952416460 ---------A   03100  IF C5+100/O<M1*(1+(P1-T1)/(M3+1)) THEN 3140
    0x594952416fa0 ---------A   03110  LET C5=INT(13*M1/20*(1+(P1-T1)/(M3+1)))
    0x5949524173d0 ---------A   03120  LET E=7*C5/13
    0x5949524175e0 ---------A   03130  LET U=1
    0x594952417840 ---------A T 03140  IF D=1 THEN 3380
    0x594952417bb0 ---------A T 03150  PRINT "CASUALTIES",C5,C6
    0x5949524180c0 ---------A   03160  PRINT "DESERTIONS",INT(E),INT(E2)
    0x594952418140 ---------A   03170  PRINT
    0x5949524183d0 ---------A   03180  IF B$ <> "YES" THEN 3220
    0x594952418670 ---------A   03190  PRINT "COMPARED TO THE ACTUAL CASUALTIES AT "C$
    0x594952418e30 ---------A   03200  PRINT "CONFEDERATE:"INT(100*(C5/C1)+.5)"% OF THE ORIGINAL"
    0x5949524195c0 ---------A   03210  PRINT "UNION:      "INT(100*(C6/C2)+.5)"% OF THE ORIGINAL"
    0x594952419630 ---------A T 03220  PRINT
    0x5949524196a0 ---------A   03230  REM - 1 WHO ONE
    0x594952419910 ---------A   03240  IF U <> 1 THEN 3260
    0x594952419b70 ---------A   03250  IF U2=1 THEN 3340
    0x594952419dd0 ---------A T 03260  IF U=1 THEN 3300
    0x59495241a040 ---------A   03270  IF U2=1 THEN 3320
    0x59495241a510 ---------A   03280  IF C5+E=C6+E2 THEN 3340
    0x59495241a9e0 ---------A   03290  IF C5+E<C6+E2 THEN 3320
    0x59495241ac40 ---------A T 03300  PRINT "THE UNION WINS "C$
    0x59495241acc0 ---------A   03310  GOTO 3420
    0x59495241af00 ---------A T 03320  PRINT "THE CONFEDERACY WINS "C$
    0x59495241af80 ---------A   03330  GOTO 3470
    0x59495241b0d0 ---------A T 03340  PRINT "BATTLE OUTCOME UNRESOLVED"
    0x59495241b400 ---------A   03350  LET W0=W0+1
    0x59495241b650 ---------A   03360  IF A=0 THEN 3600
    0x59495241b6e0 ---------A   03370  GOTO 3490
    0x59495241be60 ---------A T 03380  LET C6=INT(17*C2*C1/(C5*20))
    0x59495241c190 ---------A   03390  LET E2=5*O
    0x59495241c230 ---------A   03400  GOTO 3150
    0x59495241cd20 ---------A   03410  REM - FIND WHO WON
    0x59495241dea0 ---------A T 03420  IF A=0 THEN 3600
    0x59495241e1e0 ---------A   03430  LET L=L+1
    0x59495241e260 ---------A   03440  GOTO 3490
    0x59495241e560 ---------A   03450  REM - CUMULATIVE BATTLE FACTORS WHICH ALTER HISTORICAL
    0x59495241e630 ---------A   03460  REM  RESOURCES AVAILABLE.IF A REPLAY DON'T UPDATE.
    0x59495241e890 ---------A T 03470  IF A=0 THEN 3600
    0x59495241ebd0 ---------A   03480  LET W=W+1
    0x59495241f040 ---------A T 03490  LET T1=T1+C5+E
    0x594952407850 ---------A   03500  LET T2=T2+C6+E2
    0x594952407ba0 ---------A   03510  LET P1=P1+C1
    0x594952420370 ---------A   03520  LET P2=P2+C2
    0x594952420b90 ---------A   03530  LET Q1=Q1+(F(1)+H(1)+B(1))
    0x5949524213b0 ---------A   03540  LET Q2=Q2+(F(2)+H(2)+B(2))
    0x594952421a70 ---------A   03550  LET R1=R1+M1*(100-I1)/20
    0x594952422120 ---------A   03560  LET R2=R2+M2*(100-I2)/20
    0x594952422470 ---------A   03570  LET M3=M3+M1
    0x5949524227c0 ---------A   03580  LET M4=M4+M2
    0x594952422830 ---------A   03590  GOSUB 4790
    0x594952422c30 ---------A T 03600  U=0:U2=0
    0x594952422d80 ---------A   03610  PRINT "---------------"
    0x594952422e00 ---------A   03620  GOTO 1680
    0x594952422e60 ---------A   03630  REM------FINISH OFF
    0x594952422ff0 ---------A T 03640  PRINT "THE CONFEDERACY HAS SURRENDERED"
    0x594952423080 ---------A   03650  GOTO 3660
    0x594952423400 ---------A T 03660  PRINT : PRINT : PRINT : PRINT : PRINT : PRINT
    0x594952423590 ---------A   03670  PRINT "THE CONFEDERACY ";
    0x5949524239e0 ---------A   03680  PRINT "HAS WON "W" BATTLES AND LOST "L
    0x594952423c30 ---------A   03690  IF Y=5 THEN 3750
    0x594952423ea0 ---------A   03700  IF Y2=5 THEN 3730
    0x594952424120 ---------A   03710  IF W <= L THEN 3750
    0x5949524243a0 ---------A   03720  IF Y=5 THEN 3750
    0x594952424510 ---------A T 03730  PRINT "THE CONFEDERACY HAS WON THE WAR"
    0x594952424590 ---------A   03740  GOTO 3760
    0x5949524246e0 ---------A T 03750  PRINT "THE UNION HAS WON THE WAR"
    0x594952424750 ---------A T 03760  PRINT
    0x5949524249d0 ---------A   03770  IF R1=0 THEN 3910
    0x594952424f90 ---------A   03780  PRINT "FOR THE "W+L+W0" BATTLES FOUGHT (EXCUDING RERUNS)"
    0x594952425310 ---------A   03790  PRINT " "," "," ";
    0x594952425580 ---------A   03800  PRINT "CONFEDERACY"," UNION"
    0x594952425cb0 ---------A   03810  PRINT "HISTORICAL LOSSES",INT(P1+.5),INT(P2+.5)
    0x5949524263c0 ---------A   03820  PRINT "SIMULATED LOSSES",INT(T1+.5),INT(T2+.5)
    0x594952426460 ---------A   03830  PRINT
    0x594952427040 ---------A   03840  PRINT "    % OF ORIGINAL",INT(100*(T1/P1)+.5),INT(100*(T2/P2)+.5)
    0x5949524272b0 ---------A   03850  IF B$="YES" THEN 3910
    0x594952427360 ---------A   03860  PRINT
    0x594952427500 ---------A   03870  PRINT "UNION INTELLIGENCE SUGGESTS THAT THE SOUTH USED "
    0x594952427680 ---------A   03880  PRINT "STRATEGIES 1, 2, 3, 4 IN THE FOLLOWING PERCENTAGES"
    0x594952427eb0 ---------A   03890  PRINT S(1);S2(2);S(3);S(4)
    0x594952427f30 ---------A   03900  REM---------------------------------
    0x594952427f90 ---------A T 03910  STOP
    0x59495242c130 ---------A   03920  REM - HISTORICAL DATA...CAN ADD MORE (STRAT.,ETC) BY INSERTING
    0x59495242c210 ---------A   03930  REM   DATA STATEMENTS AFTER APPRO. INFO, AND ADJUSTING READ
    0x59495242c810 ---------A   03940  DATA "BULL RUN",18000,18500,1967,2708,1
    0x59495242cde0 ---------A   03950  DATA "SHILOH",40000.,44894.,10699,13047,3
    0x59495242d3c0 ---------A   03960  DATA "SEVEN DAYS",95000.,115000.,20614,15849,3
    0x59495242d990 ---------A   03970  DATA "SECOND BULL RUN",54000.,63000.,10000,14000,2
    0x59495242df60 ---------A   03980  DATA "ANTIETAM",40000.,50000.,10000,12000,3
    0x59495242e530 ---------A   03990  DATA "FREDERICKSBURG",75000.,120000.,5377,12653,1
    0x59495242eb10 ---------A   04000  DATA "MURFREESBORO",38000.,45000.,11000,12000,1
    0x59495242f0e0 ---------A   04010  DATA "CHANCELLORSVILLE",32000,90000.,13000,17197,2
    0x59495242f6b0 ---------A   04020  DATA "VICKSBURG",50000.,70000.,12000,19000,1
    0x59495242fc80 ---------A   04030  DATA "GETTYSBURG",72500.,85000.,20000,23000,3
    0x594952430250 ---------A   04040  DATA "CHICKAMAUGA",66000.,60000.,18000,16000,2
    0x594952430820 ---------A   04050  DATA "CHATTANOOGA",37000.,60000.,36700.,5800,2
    0x594952430df0 ---------A   04060  DATA "SPOTSYLVANIA",62000.,110000.,17723,18000,2
    0x5949524313e0 ---------A   04070  DATA "ATLANTA",65000.,100000.,8500,3700,1
    0x594952431590 ---------A T 04080  PRINT "JULY 21, 1861.  GEN. BEAUREGARD, COMMANDING THE SOUTH, MET"
    0x594952431740 ---------A   04090  PRINT "UNION FORCES WITH GEN. MCDOWELL IN A PREMATURE BATTLE AT"
    0x5949524318c0 ---------A   04100  PRINT "BULL RUN. GEN. JACKSON HELPED PUSH BACK THE UNION ATTACK."
    0x594952431960 ---------A   04110  GOTO 2010
    0x594952431ae0 ---------A T 04120  PRINT "APRIL 6-7, 1862.  THE CONFEDERATE SURPRISE ATTACK AT"
    0x594952431c50 ---------A   04130  PRINT "SHILOH FAILED DUE TO POOR ORGANIZATION."
    0x594952431cf0 ---------A   04140  GOTO 2010
    0x594952431e80 ---------A T 04150  PRINT "JUNE 25-JULY 1, 1862.  GENERAL LEE (CSA) UPHELD THE"
    0x594952432020 ---------A   04160  PRINT "OFFENSIVE THROUGHOUT THE BATTLE AND FORCED GEN. MCCLELLAN"
    0x594952432190 ---------A   04170  PRINT "AND THE UNION FORCES AWAY FROM RICHMOND."
    0x594952432230 ---------A   04180  GOTO 2010
    0x5949524323c0 ---------A T 04190  PRINT "AUG 29-30, 1862.  THE COMBINED CONFEDERATE FORCES UNDER";
    0x594952432540 ---------A   04200  PRINT " LEE"
    0x5949524326c0 ---------A   04210  PRINT "AND JACKSON DROVE THE UNION FORCES BACK INTO WASHINGTON."
    0x594952432760 ---------A   04220  GOTO 2010
    0x5949524328e0 ---------A T 04230  PRINT "SEPT 17, 1862.  THE SOUTH FAILED TO INCORPORATE MARYLAND"
    0x594952432a30 ---------A   04240  PRINT "INTO THE CONFEDERACY."
    0x594952432ad0 ---------A   04250  GOTO 2010
    0x594952432c60 ---------A T 04260  PRINT "DEC 13, 1862.  THE CONFEDERACY UNDER LEE SUCCESSFULLY"
    0x594952432dd0 ---------A   04270  PRINT "REPULSED AN ATTACK BY THE UNION UNDER GEN. BURNSIDE."
    0x594952432e70 ---------A   04280  GOTO 2010
    0x594952433000 ---------A T 04290  PRINT "DEC 31, 1862.  THE SOUTH UNDER GEN. BRAGG WON A CLOSE ";
    0x594952433150 ---------A   04300  PRINT "BATTLE."
    0x5949524331f0 ---------A   04310  GOTO 2010
    0x594952433390 ---------A T 04320  PRINT "MAY 1-6, 1863.  THE SOUTH HAD A COSTLY VICTORY AND LOST"
    0x594952433510 ---------A   04330  PRINT "ONE OF THEIR OUTSTANDING GENERALS, 'STONEWALL' JACKSON."
    0x5949524335c0 ---------A   04340  GOTO 2010
    0x594952433760 ---------A T 04350  PRINT "JULY 4, 1863.  VICKSBURG WAS A COSTLY DEFEAT FOR THE SOUTH"
    0x5949524338d0 ---------A   04360  PRINT "BECAUSE IT GAVE THE UNION ACCESS TO THE MISSISSIPPI."
    0x594952433970 ---------A   04370  GOTO 2010
    0x594952433b00 ---------A T 04380  PRINT "JULY 1-3, 1863.  A SOUTHERN MISTAKE BY GEN. LEE AT ";
    0x594952433c80 ---------A   04390  PRINT "GETTYSBURG"
    0x594952433df0 ---------A   04400  PRINT "COST THEM ONE OF THE MOST CRUCIAL BATTLES OF THE WAR."
    0x594952433ea0 ---------A   04410  GOTO 2010
    0x594952434030 ---------A T 04420  PRINT "SEPT. 15, 1863. CONFUSION IN A FOREST NEAR CHICKAMAUGA LED"
    0x594952434190 ---------A   04430  PRINT "TO A COSTLY SOUTHERN VICTORY."
    0x594952434240 ---------A   04440  GOTO 2010
    0x5949524343e0 ---------A T 04450  PRINT "NOV. 25, 1863. AFTER THE SOUTH HAD SIEGED GEN. ROSENCRANS'"
    0x594952434550 ---------A   04460  PRINT "ARMY FOR THREE MONTHS, GEN. GRANT BROKE THE SIEGE."
    0x5949524345f0 ---------A   04470  GOTO 2010
    0x594952434790 ---------A T 04480  PRINT "MAY 5, 1864.  GRANT'S PLAN TO KEEP LEE ISOLATED BEGAN TO"
    0x594952434910 ---------A   04490  PRINT "FAIL HERE, AND CONTINUED AT COLD HARBOR AND PETERSBURG."
    0x5949524349b0 ---------A   04500  GOTO 2010
    0x594952434b50 ---------A T 04510  PRINT "AUGUST, 1864.  SHERMAN AND THREE VETERAN ARMIES CONVERGED"
    0x594952434cd0 ---------A   04520  PRINT "ON ATLANTA AND DEALT THE DEATH BLOW TO THE CONFEDERACY."
    0x594952434d40 ---------A   04530  GOTO 2010
    0x594952434d80 ---------A   04540  END
    0x594952428040 ---------B   04550  REM - UNION STRATEGY IS COMPUTER CHOSEN
    0x5949524281e0 ---------B G 04560  PRINT "UNION STRATEGY IS ";
    0x594952428430 ---------B   04570  IF A <> 0 THEN 4630
    0x5949524285a0 ---------B T 04580  INPUT Y2
    0x594952428800 ---------B   04590  IF Y2 <=0 THEN 4610
    0x594952428a90 ---------B   04600  IF Y2<5 THEN 4740
    0x594952428c20 ---------B T 04610  PRINT "ENTER 1 , 2 ,3 , OR 4 (USUALLY PREVIOUS UNION STRATEGY)"
    0x594952428c90 ---------B   04620  GOTO 4580
    0x594952428f50 ---------B T 04630  LET S0=0
    0x594952429340 ---------B   04640  LET R=100*RND(0)
    0x594952429610 ---------B   04650  FOR I=1 TO 4
    0x594952429a80 ---------B   04660  LET S0=S0+S(I)
    0x594952429b20 ---------B   04670  REM - IF ACTUAL STRATEGY INFO IS IN PROGRAM DATA STATEMENTS
    0x594952429bf0 ---------B   04680  REM   THEN R-100 IS EXTRA WEIGHT GIVEN TO THAT STATEGY.
    0x594952429e70 ---------B   04690  IF R<S0 THEN 4720
    0x594952429fb0 ---------B   04700  NEXT I
    0x59495242a080 ---------B   04710  REM - IF ACTUAL STRAT. IN,THEN HERE IS Y2= HIST. STRAT.
    0x59495242a2c0 ---------B T 04720  LET Y2=I
    0x59495242a410 ---------B   04730  PRINT Y2
    0x59495243e520 ---------B T 04740 GOTO 04750
    0x59495243e560 ---------B T 04750 RETURN
    0x59495242a530 ---------C   04760  REM LEARN  PRESENT STRATEGY, START FORGETTING OLD ONES
    0x59495242a610 ---------C   04770  REM - PRESENT STRATEGY OF SOUTH GAINS 3*S, OTHERS LOSE S
    0x59495242a6f0 ---------C   04780  REM   PROBABILITY POINTS, UNLESS A STRATEGY FALLS BELOW 5%.
    0x59495242a910 ---------C G 04790  LET S=3
    0x59495242ab20 ---------C   04800  LET S0=0
    0x59495242ae00 ---------C   04810  FOR I=1 TO 4
    0x59495242b140 ---------C   04820  IF S(I) <= 5 THEN 4850
    0x59495242b660 ---------C   04830  LET S(I)=S(I)-S
    0x59495242b9b0 ---------C   04840  LET S0=S0+S
    0x59495242bae0 ---------C T 04850  NEXT I
    0x59495242c000 ---------C   04860  LET S(Y)=S(Y)+S0
    0x59495243e5a0 ---------C   04870 GOTO 04880
    0x59495243e600 ---------C T 04880 RETURN
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
char* data_03940s[]={"BULL RUN","18000","18500","1967","2708","1"};
char* data_03950s[]={"SHILOH","40000.","44894.","10699","13047","3"};
char* data_03960s[]={"SEVEN DAYS","95000.","115000.","20614","15849","3"};
char* data_03970s[]={"SECOND BULL RUN","54000.","63000.","10000","14000","2"};
char* data_03980s[]={"ANTIETAM","40000.","50000.","10000","12000","3"};
char* data_03990s[]={"FREDERICKSBURG","75000.","120000.","5377","12653","1"};
char* data_04000s[]={"MURFREESBORO","38000.","45000.","11000","12000","1"};
char* data_04010s[]={"CHANCELLORSVILLE","32000","90000.","13000","17197","2"};
char* data_04020s[]={"VICKSBURG","50000.","70000.","12000","19000","1"};
char* data_04030s[]={"GETTYSBURG","72500.","85000.","20000","23000","3"};
char* data_04040s[]={"CHICKAMAUGA","66000.","60000.","18000","16000","2"};
char* data_04050s[]={"CHATTANOOGA","37000.","60000.","36700.","5800","2"};
char* data_04060s[]={"SPOTSYLVANIA","62000.","110000.","17723","18000","2"};
char* data_04070s[]={"ATLANTA","65000.","100000.","8500","3700","1"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3940,  6,data_03940s},
    { 3950,  6,data_03950s},
    { 3960,  6,data_03960s},
    { 3970,  6,data_03970s},
    { 3980,  6,data_03980s},
    { 3990,  6,data_03990s},
    { 4000,  6,data_04000s},
    { 4010,  6,data_04010s},
    { 4020,  6,data_04020s},
    { 4030,  6,data_04030s},
    { 4040,  6,data_04040s},
    { 4050,  6,data_04050s},
    { 4060,  6,data_04060s},
    { 4070,  6,data_04070s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
int    B_int_arr[10];                             // Basic: B 
char*  B_str;                                     // Basic: B$ 
char*  C_str_arr[14];                             // Basic: C$ 
int    C1_int_arr[14];                            // Basic: C1 
int    C2_int_arr[14];                            // Basic: C2 
int    C5_int;                                    // Basic: C5 
int    C6_int;                                    // Basic: C6 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    E2_int;                                    // Basic: E2 
int    F_int_arr[10];                             // Basic: F 
int    F1_int;                                    // Basic: F1 
int    H_int_arr[10];                             // Basic: H 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    I2_int;                                    // Basic: I2 
int    L_int;                                     // Basic: L 
int    M_int_arr[14];                             // Basic: M 
int    M1_int_arr[14];                            // Basic: M1 
int    M2_int_arr[14];                            // Basic: M2 
int    M3_int;                                    // Basic: M3 
int    M4_int;                                    // Basic: M4 
int    M5_int;                                    // Basic: M5 
int    M6_int;                                    // Basic: M6 
int    N_int;                                     // Basic: N 
int    O_int;                                     // Basic: O 
int    O2_int;                                    // Basic: O2 
int    P1_int;                                    // Basic: P1 
int    P2_int;                                    // Basic: P2 
int    Q1_int;                                    // Basic: Q1 
int    Q2_int;                                    // Basic: Q2 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    R2_int;                                    // Basic: R2 
int    S_int_arr[4];                              // Basic: S 
int    S0_int;                                    // Basic: S0 
int    S2_int_arr[10];                            // Basic: S2 
int    T1_int;                                    // Basic: T1 
int    T2_int;                                    // Basic: T2 
int    U_int;                                     // Basic: U 
int    U2_int;                                    // Basic: U2 
int    W_int;                                     // Basic: W 
int    W0_int;                                    // Basic: W0 
char*  X_str;                                     // Basic: X$ 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Y2_int;                                    // Basic: Y2 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_04560();
void Routine_04790();

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
    // 04550  REM - UNION STRATEGY IS COMPUTER CHOSEN

void Routine_04560(){
    // 04560  PRINT "UNION STRATEGY IS ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"UNION STRATEGY IS ");fputs(buf,fh); };
    // 04570  IF A <> 0 THEN 4630
    if(A_int!=0)goto Lbl_04630;

  Lbl_04580:
    // 04580  INPUT Y2
    // Start of Basic INPUT statement 04580
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Y2_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 04580
    // 04590  IF Y2 <=0 THEN 4610
    if(Y2_int<=0)goto Lbl_04610;
    // 04600  IF Y2<5 THEN 4740
    if(Y2_int<5)goto Lbl_04740;

  Lbl_04610:
    // 04610  PRINT "ENTER 1 , 2 ,3 , OR 4 (USUALLY PREVIOUS UNION STRATEGY)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER 1 , 2 ,3 , OR 4 (USUALLY PREVIOUS UNION STRATEGY)");strcat(buf,"\n");fputs(buf,fh); };
    // 04620  GOTO 4580
    goto Lbl_04580;

  Lbl_04630:
    // 04630  LET S0=0
    S0_int = 0;
    // 04640  LET R=100*RND(0)
    R_int = 100*RND(0);
    // 04650  FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 04660  LET S0=S0+S(I)
        S0_int = S0_int+S_int_arr[I_int];
        // 04670  REM - IF ACTUAL STRATEGY INFO IS IN PROGRAM DATA STATEMENTS
        // 04680  REM   THEN R-100 IS EXTRA WEIGHT GIVEN TO THAT STATEGY.
        // 04690  IF R<S0 THEN 4720
        if(R_int<S0_int)goto Lbl_04720;
        // 04700  NEXT I
        int dummy_4700=0; // Ignore this line.
    }; // End-For(I_int)
    // 04710  REM - IF ACTUAL STRAT. IN,THEN HERE IS Y2= HIST. STRAT.

  Lbl_04720:
    // 04720  LET Y2=I
    Y2_int = I_int;
    // 04730  PRINT Y2
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,Y2_int);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_04740:
    // 04740 GOTO 04750
    goto Lbl_04750;

  Lbl_04750:
    // 04750 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 04760  REM LEARN  PRESENT STRATEGY, START FORGETTING OLD ONES
    // 04770  REM - PRESENT STRATEGY OF SOUTH GAINS 3*S, OTHERS LOSE S
    // 04780  REM   PROBABILITY POINTS, UNLESS A STRATEGY FALLS BELOW 5%.

void Routine_04790(){
    // 04790  LET S=3
    S_int_arr[0] = 3;
    // 04800  LET S0=0
    S0_int = 0;
    // 04810  FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 04820  IF S(I) <= 5 THEN 4850
        if(S_int_arr[I_int]<=5)goto Lbl_04850;
        // 04830  LET S(I)=S(I)-S
        S_int_arr[I_int] = S_int_arr[I_int]-S_int_arr[0];
        // 04840  LET S0=S0+S
        S0_int = S0_int+S_int_arr[0];

  Lbl_04850:
        // 04850  NEXT I
        int dummy_4850=0; // Ignore this line.
    }; // End-For(I_int)
    // 04860  LET S(Y)=S(Y)+S0
    S_int_arr[Y_int] = S_int_arr[Y_int]+S0_int;
    // 04870 GOTO 04880
    goto Lbl_04880;

  Lbl_04880:
    // 04880 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
