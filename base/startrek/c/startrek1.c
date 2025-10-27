/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/startrek1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x615499c7a5d0 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x615499c8b020 ---------A   00002 REM trs2 - TRS-80 Level II BASIC tokenized file
    0x615499c8a910 ---------A T 00010 CLS 
    0x615499c8bdd0 ---------A   00020 PRINT @210,"S U P E R S T A R T R E K"
    0x615499c8bf50 ---------A   00030 PRINT : PRINT 
    0x615499c7a2f0 ---------A   00100 CLEAR 600
    0x615499c8c010 ---------A   00110 Z$=" "
    0x615499c8c0d0 ---------A   00120 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8): RANDOM 
    0x615499c936b0 ---------A   00130 T= INT( RND(0)*20+20)*100:T0=T:T9=25+ INT( RND(0)*10):D0=0:E=3000:E0=E
    0x615499c94c80 ---------A   00140 P=10:PO=P:S9=200:S=0:B9=0:K9=0:X$="":X0$=" IS "
    0x615499c95b00 ---------A   00170 Q1= RND(8):Q2= RND(8):S1= RND(8):S2= RND(8)
    0x615499c96670 ---------A   00180 FOR I=1 TO 9:C(I,1)=0:C(I,2)=0: NEXT I
    0x615499c97ba0 ---------A   00190 C(3,1)=-1:C(2,1)=-1:C(4,1)=-1:C(4,2)=-1:C(5,2)=-1:C(6,2)=-1
    0x615499c993b0 ---------A   00200 C(1,2)=1:C(2,2)=1:C(6,1)=1:C(7,1)=1:C(8,1)=1:C(8,2)=1:C(9,2)=1
    0x615499c99a70 ---------A   00210 FOR I=1 TO 8:D(I)=0: NEXT I
    0x615499c99d60 ---------A   00220 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    0x615499c9add0 ---------A   00230 FOR I=1 TO 8: FOR J=1 TO 8:K3=0:Z(I,J)=0:R1= RND(0)
    0x615499c9b5a0 ---------A   00240 IF R1>.98 THEN K3=3:K9=K9+3: GOTO 270
    0x615499c9bd20 ----------   00250 IF R1>.95 THEN K3=2:K9=K9+2: GOTO 270
    0x615499c9c490 ----------   00260 IF R1>.8 THEN K3=1:K9=K9+1
    0x615499c9cf90 ---------A T 00270 B3=0: IF RND(0)>.96 THEN B3=1:B9=B9+1
    0x615499c9e020 ---------A   00280 G(I,J)=K3*100+B3*10+ RND(8): NEXT J: NEXT I: IF K9>T9 THEN T9=K9+1
    0x615499c9e2a0 ---------A   00290 IF B9<>0 THEN 320
    0x615499c9f090 ---------A   00300 IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100:K9=K9+1
    0x615499c9fef0 ---------A   00310 B9=1:G(Q1,Q2)=G(Q1,Q2)+10:Q1= RND(8):Q2= RND(8)
    0x615499ca0860 ---------A T 00320 K7=K9: IF B9<>1 THEN X$="S":X0$=" ARE "
    0x615499ca09c0 ---------A   00330 PRINT "YOUR ORDERS ARE AS FOLLOWES:"
    0x615499ca0d20 ---------A   00340 PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
    0x615499ca0ed0 ---------A   00350 PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x615499ca1680 ---------A   00360 PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
    0x615499ca1c20 ---------A   00370 PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
    0x615499ca1ee0 ---------A   00380 PRINT : INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
    0x615499ca3830 ---------A T 00400 Z4=Q1:Z5=Q2:K3=0:B3=0:S3=0:G5=0:D4=.5* RND(0):Z(Q1,Q2)=G(Q1,Q2)
    0x615499ca42f0 ---------A   00410 IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 510
    0x615499ca4370 ---------A   00450 REM 
    0x615499ca5160 ---------A   00460 K3= INT(G(Q1,Q2)*.01):B3= INT(G(Q1,Q2)*.1)-10*K3
    0x615499ca5bf0 ---------A   00470 S3=G(Q1,Q2)-100*K3-10*B3: IF K3=0 THEN 500
    0x615499ca5ff0 ---------A   00480 CLS : PRINT @396,"COMBAT AREA CONDITION RED": IF S>200 THEN 500
    0x615499ca6180 ---------A   00490 PRINT @463,"SHIELDS DANGEROUSLY LOW"
    0x615499ca6c90 ---------A T 00500 FOR I=1 TO 3:K(I,1)=0:K(I,2)=0: NEXT I
    0x615499ca80e0 ---------A T 00510 FOR I=1 TO 3:K(I,3)=0: NEXT I:Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
    0x615499ca8c00 ---------A   00520 A$="<*>":Z1=S1:Z2=S2: GOSUB 3320: IF K3<1 THEN 550
    0x615499ca9670 ---------A   00530 FOR I=1 TO K3: GOSUB 3300:A$="+K+":Z1=R1:Z2=R2
    0x615499caa610 ---------A   00540 GOSUB 3320:K(I,1)=R1:K(I,1)=R2:K(I,3)=S9*(.5+ RND(0)): NEXT I
    0x615499caa8a0 ---------A T 00550 IF B3<1 THEN 570
    0x615499cab560 ---------A   00560 GOSUB 3300:A$=">!<":Z1=R1:B4=R1:Z2=R2:B5=R2: GOSUB 3320
    0x615499cac010 ---------A T 00570 FOR I=1 TO S3: GOSUB 3300:A$=" * ":Z1=R1:Z2=R2: GOSUB 3320: NEXT I
    0x615499cac0b0 ---------A T 00580 GOSUB 2460
    0x615499cac970 ---------A T 00590 IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
    0x615499cacd50 ---------A   00600 CLS : PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
    0x615499cacf20 ---------A   00610 PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
    0x615499cad1f0 ---------A   00620 PRINT " AND SHIELD CONTROL.": PRINT "IS PRESENTLY INCAPABLE OF CROSS";
    0x615499cad3c0 ---------A   00630 PRINT "-CIRUITING TO ENGINE ROOM!!": GOTO 2330
    0x615499cad780 ----------   00640 PRINT "YOUR ORDERS, CAPTAIN ";NA$;: INPUT A$
    0x615499cae310 ----------   00650 FOR I=1 TO 9: IF LEFT$ (A$,3)<> MID$ (A1$,3*I-2,3) THEN 670
    0x615499caeb50 ----------   00660 ON I GOTO 770,580,1410,1490,1680,1990,2070,2680,2360
    0x615499caee20 ---------- T 00670 NEXT I: CLS : PRINT "ENTER ONE OF THE FOLOWING:"
    0x615499caef90 ----------   00680 PRINT " NAV(TO SET COURSE)"
    0x615499caf110 ----------   00690 PRINT " SRS(FOR SHORT RANGE SENSOR SCAN)"
    0x615499caf280 ----------   00700 PRINT " LRS(FOR LONG RANGE SENSOR SCAN)"
    0x615499caf3f0 ----------   00710 PRINT " PHA(TO FIRE PHASERS)"
    0x615499caf570 ----------   00720 PRINT " TOR(TO FIRE PHOTON TORPEDOES)"
    0x615499caf6f0 ----------   00730 PRINT " SHE(TO RAISE OR LOWER SHIELDS)"
    0x615499caf870 ----------   00740 PRINT " DAM(FOR DAMAGE CONTROAL REPORTS)"
    0x615499cafa00 ----------   00750 PRINT " COM(TO CALL ON LIBRARY-COMPUTER)"
    0x615499cb0030 ----------   00760 PRINT " XXX(TO RESIGN YOUR COMAND)": PRINT : GOTO 590
    0x615499cb0690 ---------- T 00770 INPUT "COURSE(0-9)";C1: IF C1=9 THEN C1=1
    0x615499cb0b40 ----------   00780 IF C1>=1 AND C1<9 THEN 800
    0x615499cb0d20 ----------   00790 PRINT " LT. SULU REPORTS, 'INCORECT COURSE DATA, SIR!'": GOTO 590
    0x615499cb1480 ---------- T 00800 X$="8": IF D(1)<0 THEN X$="0.2"
    0x615499cb1f20 ----------   00810 PRINT "WARP FACTOR(0-";X$;")";: INPUT W1: IF D(1)<0 AND W1>.2 THEN 860
    0x615499cb23a0 ----------   00820 IF W1>0 AND W1<=8 THEN 870
    0x615499cb2640 ----------   00830 IF W1=0 THEN 590
    0x615499cb2a60 ----------   00840 PRINT " CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T TAKEWARP";W1;"!": GOTO 590
    0x615499cb2c30 ---------- T 00860 PRINT "WARP ENGINES ARE DAMMAGED. MAXIMUM SPEED=WARP 0.2": GOTO 590
    0x615499cb34b0 ---------- T 00870 N= INT(W1*8+.5): IF E-N>=0 THEN 940
    0x615499cb3650 ----------   00880 PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x615499cb3b00 ----------   00890 PRINT TAB(23)"FOR MANUVERING AT WARP";W1;"!"
    0x615499cb41a0 ----------   00900 IF S<N-E OR D(7)<0 THEN 590
    0x615499cb4530 ----------   00910 PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEDGES";S;"UNITS OF ENERGY"
    0x615499cb47d0 ----------   00920 PRINT TAB(23)"PRESENTLY DEPLOYED TO SHIELDS."
    0x615499cb4860 ----------   00930 GOTO 590
    0x615499cb4f40 ---------- T 00940 FOR I=1 TO K3: IF K(I,3)=0 THEN 970
    0x615499cb5990 ----------   00950 A$=" ":Z1=K(I,1):Z2=K(I,2): GOSUB 3320: GOSUB 3300
    0x615499cb6380 ----------   00960 K(I,1)=Z1:K(I,2)=Z2:A$="+K+": GOSUB 3320
    0x615499cb6ea0 ---------- T 00970 NEXT I: GOSUB 2220:D1=0:D6=W1: IF W1>=1 THEN D6=1
    0x615499cb74d0 ----------   00980 FOR I=1 TO 8: IF D(I)>=0 THEN 1030
    0x615499cb8340 ----------   00990 D(I)=D(I)+D6: IF D(I)>-.1 AND D(I)<0 THEN D(I)=-.1: GOTO 1030
    0x615499cb8680 ----------   01000 IF D(I)<0 THEN 1030
    0x615499cb8c40 ----------   01010 IF D1<>1 THEN D1=1: PRINT "DAMAGE CONTROL REPORT"
    0x615499cb9340 ----------   01020 PRINT TAB(8);:R1=I: GOSUB 3370: PRINT G2$;" REPAIR COMPLEATED"
    0x615499cb9790 ---------- T 01030 NEXT I: IF RND(0)>.2 THEN 1090
    0x615499cb9db0 ----------   01040 R1= RND(8): IF RND(0)>=6 THEN 1070
    0x615499cba820 ----------   01050 Q(R1)=D(R1)-( RND(0)*5+1): PRINT "DAMAGE CONTROL REPORT:";
    0x615499cbab80 ----------   01060 GOSUB 3370: PRINT G2$;" DAMAGED": PRINT : GOTO 1090
    0x615499cbb4b0 ---------- T 01070 D(R1)=D(R1)+ RND(0)*3+1: PRINT "DAMAGE CONTROL REPORT:"
    0x615499cbb7c0 ----------   01080 GOSUB 3370: PRINT G2$;" STATE OF REPAIR IMPROVED": PRINT 
    0x615499cbc050 ---------- T 01090 A$=" ":Z1= INT(S1):Z2= INT(S2): GOSUB 3320
    0x615499cbd4c0 ----------   01100 X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1)):X=S1:Y=S2
    0x615499cbe950 ----------   01110 X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1)):Q4=Q1:Q5=Q2
    0x615499cbfb70 ----------   01120 FOR I=1 TO N:S1=S1+X1:S2=S2+X2: IF S1<1 OR S1>=9 OR S2<1 OR S2>=9 THEN 1210
    0x615499cc0960 ----------   01130 S8= INT(S1)*24+ INT(S2)*3-26: IF MID$ (Q$,S8,2)=" " THEN 1160
    0x615499cc1340 ----------   01140 S1= INT(S1-X1):S2= INT(S2-X2): PRINT "WARP ENGINES SHUT DOWN AT ";
    0x615499cc1900 ----------   01150 PRINT "SECTOR";S1;",";S2;"DUE TO BAD NAVIGATION.": GOTO 1170
    0x615499cc2040 ---------- T 01160 NEXT I:S1= INT(S1):S2= INT(S2)
    0x615499cc2b90 ---------- T 01170 A$="<*>":Z1= INT(S1):Z2= INT(S2): GOSUB 3320: GOSUB 1370:T8=1
    0x615499cc32e0 ----------   01180 IF W1<1 THEN T8=.1* INT(10*W1)
    0x615499cc39b0 ----------   01190 T=T+T8: IF T>T0+T9 THEN 2330
    0x615499cc3a70 ----------   01200 GOTO 580
    0x615499cc5470 ---------- T 01210 X=8*Q1+X+N*X1:Y=8*Q2+Y+N*X2:Q1= INT(X/8):Q2= INT(Y/8):S1= INT(X-Q1*8)
    0x615499cc60f0 ----------   01220 S2= INT(Y-Q2*8): IF S1=0 THEN Q1=Q1-1:S1=8
    0x615499cc6860 ----------   01230 IF S2=0 THEN Q2=Q2-1:S2=8
    0x615499cc7350 ----------   01240 X5=0: IF Q1<1 THEN X5=1:Q1=1:S1=1
    0x615499cc7b90 ----------   01250 IF Q1>8 THEN X5=1:Q1=8:S1=8
    0x615499cc83d0 ----------   01260 IF Q2<1 THEN X5=1:Q2=1:S2=1
    0x615499cc8c00 ----------   01270 IF Q2>8 THEN X5=1:Q2=8:S2=8
    0x615499cc8e80 ----------   01280 IF X5=0 THEN 1350
    0x615499cc9030 ----------   01290 PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMAND:"
    0x615499cc91e0 ----------   01300 PRINT " 'PREMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMITER"
    0x615499cc9380 ----------   01310 PRINT " IS HEREBY *DENIED*. SHUT DOWN YOUR ENGINES.'"
    0x615499cc9520 ----------   01320 PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x615499cc9e80 ----------   01330 PRINT "AT SECTOR";S1;",";S2;"OF QUADRENT";Q1;",";Q2;"'"
    0x615499cca220 ----------   01340 IF T>T0+T9 THEN 2330
    0x615499cca8f0 ---------- T 01350 IF 8*Q1+Q2=8*Q4+Q5 THEN 1170
    0x615499ccacd0 ----------   01360 T=T+1: GOSUB 1370: GOTO 400
    0x615499ccb3b0 ----------   01370 E=E-N-10: IF E>=0 THEN RETURN 
    0x615499ccb540 ----------   01380 PRINT "SHIELD CONTROL SUPPLIES ENERGY TO COMPLEAT MANUVER."
    0x615499ccbea0 ----------   01390 S=S+E:E=0: IF S<=0 THEN S=0
    0x615499ccbf00 ----------   01400 RETURN 
    0x615499cccc40 ---------- T 01410 IF D(3)<0 THEN PRINT "LONG RANG SENSORES ARE INOPERABLE": GOTO 590
    0x615499ccd0f0 ----------   01420 CLS : PRINT "LONG RANGE SCAN FOR QUADRANT";Q1;",";Q2
    0x615499ccd540 ----------   01430 O1$="--------------------": PRINT O1$
    0x615499cce7a0 ----------   01440 FOR I=Q1-1 TO Q1+1:N(1)=-1:N(2)=-1:N(3)=-3: FOR J=Q2-1 TO Q2+1
    0x615499ccfd10 ----------   01450 IF I>0 AND I<9 AND J>0 AND J<9 THEN N(J-Q2+2)=G(I,J):Z(I,J)=G(I,J)
    0x615499cd0800 ----------   01460 NEXT J: FOR L=1 TO 3: PRINT ": ";: IF N(L)<0 THEN PRINT "*** ";: GOTO 1480
    0x615499cd0ee0 ----------   01470 PRINT RIGHT$(STR$(N(L)+1000),3);" ";
    0x615499cd1430 ---------- T 01480 NEXT L: PRINT ":": PRINT O1$: NEXT I: GOTO 590
    0x615499cd1950 ---------- T 01490 CLS : PRINT : IF D(4)<0 THEN PRINT "PHASERS INOPERATIVE.": GOTO 590
    0x615499cd1bd0 ----------   01500 IF K3>0 THEN 1530
    0x615499cd1d80 ---------- T 01510 PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSORES SHOW NO ENEMY SHIPS"
    0x615499cd2090 ----------   01520 PRINT TAB(32)"IN THIS QUADRENT'": GOTO 590
    0x615499cd24f0 ---------- T 01530 IF D(8)<0 THEN PRINT "COMPUTER FAILER HAMPERS ACCURACY"
    0x615499cd26a0 ----------   01540 PRINT "PHASERS LOCKED ON TARGET; ";
    0x615499cd2a30 ---------- T 01550 PRINT "ENERGY AVAILABLE=";E;"UNITS"
    0x615499cd2e10 ----------   01560 INPUT "NUMBER OF UNITS TO DIVERT TO PHASER BANKS";X: IF X<=0 THEN 590
    0x615499cd31a0 ----------   01570 IF E-X<=0 THEN 1550
    0x615499cd3c10 ----------   01580 E=E-X: IF D(7)<0 THEN X=X* RND(0)
    0x615499cd47c0 ----------   01590 H1= INT(X/K3): FOR I=1 TO 3: IF K(I,3)<=0 THEN 1670
    0x615499cd54f0 ----------   01600 JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x615499cd6270 ----------   01604 H= INT((H1/JH)*( RND(0)+2)): IF H>.15*K(I,3) THEN 1620
    0x615499cd6ab0 ----------   01610 PRINT "SENSORS SHOW NO DAMAGE TO ENEMY AT ";K(I,1);",";K(I,2): GOTO 1670
    0x615499cd77c0 ---------- T 01620 K(I,3)=K(I,3)-H: PRINT H;: PRINT "UNITS HIT ON KLINGON AT SECTOR";K(I,1);",";
    0x615499cd8050 ----------   01630 PRINT K(I,2): IF K(I,3)<=0 THEN PRINT "*** KLINGON DESTROYED ***": GOTO 1650
    0x615499cd85b0 ----------   01640 PRINT " (SENSORS SHOW";K(I,3);"UNITS REMAINING)": GOTO 1670
    0x615499cd95e0 ---------- T 01650 K3=K3-1:K9=K9-1:Z1=K(I,1):Z2=K(I,2):A$=" ": GOSUB 3320
    0x615499cda7e0 ----------   01660 K(I,3)=0:G(Q1,Q2)=G(Q1,Q2)-100:Z(Q1,Q2)=G(Q1,Q2): IF K9<=0 THEN 2430
    0x615499cda9c0 ---------- T 01670 NEXT I: GOSUB 2220: GOTO 590
    0x615499cdaa20 ---------A T 01680 REM 
    0x615499cdae80 ----------   01685 IF P<0 THEN PRINT "ALL PHOTON TORPEDOES EXPENDED.": GOTO 590
    0x615499cdb350 ----------   01690 IF D(5)<0 THEN PRINT "PHOTON TUBES ARE NOT OPERATIONAL": GOTO 590
    0x615499cdb900 ---------- T 01700 INPUT "PHOTON TORPEDO COURSE(1-9)";C1: IF C1=9 THEN C1=1
    0x615499cdbdb0 ----------   01710 IF C1>=1 AND C1<9 THEN 1740
    0x615499cdbf30 ----------   01720 PRINT "ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x615499cdbfd0 ----------   01730 GOTO 590
    0x615499cdd400 ---------- T 01740 X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1)):E=E-2:P=P-1
    0x615499cde630 ----------   01750 X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1)):X=S1:Y=S2
    0x615499cdf630 ---------- T 01770 X=X+X1:Y=Y+X2:X3= INT(X+.5):Y3= INT(Y+.5)
    0x615499cdfef0 ----------   01780 IF X3<1 OR X3>8 OR Y3<1 OR Y3>8 THEN 1980
    0x615499ce0230 ----------   01785 PRINT @832, STRING$(63," ")
    0x615499ce0d30 ----------   01790 PRINT @832,"TRACKING TORPEDO:";X3;",";Y3;:A$=" ":Z1=X:Z2=Y: GOSUB 3460
    0x615499ce1030 ----------   01800 IF Z3<>0 THEN 1770
    0x615499ce10d0 ----------   01805 PRINT 
    0x615499ce19d0 ----------   01810 A$="+K+":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1860
    0x615499ce23c0 ----------   01820 PRINT "*** KLINGON DESTROYED ***":K3=K3-1:K9=K9-1: IF K9<=0 THEN 2430
    0x615499ce2e80 ----------   01830 FOR I=1 TO 3: IF X3=K(I,1) AND Y3=K(I,2) THEN 1850
    0x615499ce31d0 ----------   01840 NEXT I:I=3
    0x615499ce35f0 ---------- T 01850 K(I,3)=0: GOTO 1960
    0x615499ce3ee0 ---------- T 01860 A$=" * ":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1880
    0x615499ce4500 ----------   01870 PRINT "STAR AT";X3;",";Y3;"ABSORBED TORPEDO ENERGY.": GOSUB 2220: GOTO 590
    0x615499ce4de0 ---------- T 01880 A$=">!<":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1700
    0x615499ce5580 ----------   01890 PRINT "*** STARBASE DESTROYED ***":B3=B3-1:B9=B9-1
    0x615499ce5c30 ----------   01900 IF B9>0 OR K9>T-10-T9 THEN 1940
    0x615499ce5ea0 ----------   01909 NA$="WALDO"
    0x615499ce6240 ----------   01910 PRINT "CAPTAIN ";NA$;" YOU ARE HEREBY RELIEVED OF COMMAND"
    0x615499ce63d0 ----------   01920 PRINT "AND SENTENCED TO 99 STARDATES OF HARD LABOR ON CYGNUS 12!!"
    0x615499ce67c0 ----------   01925 FOR II=1 TO 2500: NEXT 
    0x615499ce6850 ----------   01930 GOTO 2360
    0x615499ce69c0 ---------- T 01940 PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x615499ce6d10 ----------   01950 PRINT "COURT MARTIAL!":D=0
    0x615499ce73e0 ---------- T 01960 Z1=X:Z2=Y:A$=" ": GOSUB 3320
    0x615499ce8250 ----------   01970 G(Q1,Q2)=K3*100+B3*10+S3:Z(Q1,Q2)=G(Q1,Q2): GOSUB 2220: GOTO 590
    0x615499ce84a0 ---------- T 01980 PRINT : PRINT "TORPEDO MISSED.": GOSUB 2220: GOTO 590
    0x615499ce8980 ---------- T 01990 IF D(7)<0 THEN PRINT "SHIELD CONTROL INOPERABLE.": GOTO 590
    0x615499ce8e90 ----------   02000 PRINT "ENERGY ADVAILABLE=";E+S;: INPUT "NUMBER OF UNITS TO SHIELDS";X
    0x615499ce94e0 ----------   02010 IF X<0 OR S=X THEN PRINT "<SHIELDS REMAIN UNCHANGED>": GOTO 590
    0x615499ce9890 ----------   02020 IF X<=E+S THEN 2050
    0x615499ce9c30 ----------   02030 PRINT "CAPTAIN "NA$"! THIS IS NOT THE FEDERATION TREASURY."
    0x615499ce9e00 ----------   02040 PRINT "<SHIELDS UNCHANGED>": GOTO 590
    0x615499cea5e0 ---------- T 02050 E=E+S-X:S=X: PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x615499ceaa50 ----------   02060 PRINT " 'SHIELDS NOW AT"; INT(S);"UNITS PER UOUR COMAND.'"
    0x615499ceae50 ----------   02065 FOR II=1 TO 1500: NEXT : CLS : GOSUB 2460: GOTO 590
    0x615499ceb180 ---------- T 02070 IF D(6)>=0 THEN 2180
    0x615499ceb540 ----------   02080 PRINT "DAMMAGE CONTROL REPORT NOT AVAILABLE": IF D=0 THEN 590
    0x615499cec1d0 ---------- T 02090 D3=0:FOR TI=1 TO 8: IF D(I)<0 THEN D3=D3+.1
    0x615499cec570 ----------   02100 NEXT I: IF D3=0 THEN 590
    0x615499cecd70 ----------   02110 PRINT :D3=D3+D4: IF D3>=1 THEN D3=.9
    0x615499cecf30 ----------   02120 PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP"
    0x615499ced5a0 ----------   02130 PRINT "ESTIMATED TIME TO REPAIR:";.01* INT(100*D3);"STARDATES"
    0x615499ced730 ----------   02140 INPUT "WILL YOU AUTHORIZE THE REPAIR ORDER(Y/N)";A$
    0x615499ced9d0 ----------   02150 IF A$<>Y THEN 590
    0x615499cee360 ----------   02160 FOR I=1 TO 8:IF HD(I)<0 THEN D(I)=0
    0x615499cee910 ----------   02170 NEXT I:T=T+D3+.1
    0x615499ceede0 ---------- T 02180 CLS : PRINT : PRINT "DEVICE STATE OF REPAIR": FOR R1=1 TO 8
    0x615499cef900 ----------   02190 GOSUB 3370: PRINT G2$; LEFT$(Z$,25-LEN(G2$)); INT(D(R1)*100)*.01
    0x615499cefcc0 ----------   02200 NEXT R1: PRINT : IF D0<>0 THEN 2090
    0x615499cefd50 ----------   02210 GOTO 590
    0x615499cf0010 ----------   02220 IF K3<=0 THEN RETURN 
    0x615499cf0400 ----------   02230 IF D0<>0 THEN PRINT "STARBASE SHIELDS PROTECT THE ENTERPRISE": RETURN 
    0x615499cf0b00 ----------   02240 FOR I=1 TO 3: IF K(I,3)<=0 THEN 2320
    0x615499cf1770 ----------   02245 JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x615499cf2c70 ----------   02250 H= INT((K(I,3)/JH)*(2+ RND(0))):S=S-H:K(I,3)=K(I,3)/(3+ RND(0))
    0x615499cf3510 ----------   02260 PRINT H;"UNITS HIT ON ENTERPRISE FROM SECTOR";K(I,1);",";K(I,2)
    0x615499cf3790 ----------   02270 IF S<=0 THEN 2340
    0x615499cf3d40 ----------   02280 PRINT " <SHIELDS DOWN TO";S;"UNITS>": IF H<20 THEN 2320
    0x615499cf43c0 ----------   02290 IF RND(0)>.6 OR H/S<=.02 THEN 2320
    0x615499cf5030 ----------   02300 R1= RND(8):D(R1)=D(R1)-H/S-.5* RND(0): GOSUB 3370
    0x615499cf5380 ----------   02310 PRINT "DAMAGE CONTROL REPORTS '";G2$;" DAMAGED BY THE HIT'"
    0x615499cf54f0 ---------- T 02320 NEXT I: RETURN 
    0x615499cf5c10 ---------A T 02330 PRINT "IT IS STARDATE";T: FOR I=1 TO 1500: NEXT I: GOTO 2360
    0x615499cf6340 ---------- T 02340 FOR I=1 TO 500: NEXT I: CLS : PRINT : PRINT "THE ENTERPRISE HAS BEEN DESTROYED.": PRINT "THE FEDERATION";
    0x615499cf6510 ----------   02350 PRINT " WILL BE CONQUERED": GOTO 2330
    0x615499cf68b0 ---------A T 02360 CLS : PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
    0x615499cf6a20 ---------A   02370 PRINT "THE END OF YOUR MISSION."
    0x615499cf6d40 ---------A T 02380 PRINT : PRINT : IF B9=0 THEN 2420
    0x615499cf6ef0 ---------A   02390 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x615499cf70a0 ---------A   02400 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x615499cf7480 ---------A   02410 INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$: IF A$="AYE" THEN 10
    0x615499cf74e0 ---------A T 02420 END 
    0x615499cf7900 ----------   02425 T=100:B9=1
    0x615499cf7cb0 ---------- T 02430 FOR II=1 TO 1500: NEXT : CLS 
    0x615499cf8050 ----------   02435 PRINT @192,"CONGRATIONS, MON CAPITAN "NA$"! THE LAST KLINGON BATTLE"
    0x615499cf8390 ----------   02440 PRINT TAB(5)"CRUISER MENACING THE FEDERATION HAS BEEN DESTROYED!": PRINT 
    0x615499cf8c60 ----------   02450 PRINT TAB(10)"YOUR EFFICIENCY RATING IS";1000*(K7/(T-T0))^2: GOTO 2380
    0x615499cf96a0 ---------B G 02460 FOR I=S1-1 TO S1+1: FOR J=S2-1 TO S2+1
    0x615499cfa700 ---------B   02470 IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 2490
    0x615499cfafe0 ---------B   02480 A$=">!<":Z1=I:Z2=J: GOSUB 3460: IF Z3=1 THEN 2500
    0x615499cfb4a0 ---------B T 02490 NEXT J: NEXT I:D0=0: GOTO 2520
    0x615499cfbe30 ---------B T 02500 D0=1:C$="DOCKED":E=E0:P=P0
    0x615499cfc690 ---------B   02510 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES": FOR IX=1 TO 1500: NEXT IX:S=0: GOTO 2540
    0x615499cfcb60 ---------B T 02520 IF K3>0 THEN C$="*RED*": GOTO 2540
    0x615499cfd2f0 ----------   02530 C$="GREEN": IF E<E0*.1 THEN C$="YELLOW"
    0x615499cfd640 ---------B T 02540 IF D(2)>=0 THEN 2560
    0x615499cfdd10 ---------B   02550 IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS : PRINT 
    0x615499cfdef0 ---------B   02555 PRINT "*** SHORT RANGE SENSORS ARE OUT ***": PRINT : RETURN 
    0x615499cfe5e0 ---------B T 02560 CLS :O1$="---------------------------------": PRINT O1$: FOR I=1 TO 8
    0x615499cff630 ---------B   02570 FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3: PRINT " "; MID$(Q$,J,3);: NEXT J
    0x615499cffdd0 ---------B   02580 ON I GOTO 2590,2600,2610,2620,2630,2640,2650,2660
    0x615499ccc4e0 ---------B T 02590 PRINT " STARDATE "; INT(T*10)*.1: GOTO 2670
    0x615499d00e30 ---------B T 02600 PRINT " CONDITION ";C$: GOTO 2670
    0x615499d012c0 ---------B T 02610 PRINT " QUADRANT ";Q1;",";Q2: GOTO 2670
    0x615499d01770 ---------B T 02620 PRINT " SECTOR ";S1;",";S2: GOTO 2670
    0x615499d01b00 ---------B T 02630 PRINT " PHOTON TORPEDOES "; INT(P): GOTO 2670
    0x615499d01fb0 ---------B T 02640 PRINT " TOTAL ENERGY "; INT(E+S): GOTO 2670
    0x615499d02340 ---------B T 02650 PRINT " SHIELDS "; INT(S): GOTO 2670
    0x615499d02670 ---------B T 02660 PRINT " KLINGONS REMAINING "; INT(K9)
    0x615499d02910 ---------B T 02670 NEXT I: PRINT O1$: RETURN 
    0x615499d02e30 ---------- T 02680 IF D(8)<0 THEN PRINT "COMPUTER DISABLED": GOTO 590
    0x615499d034e0 ---------- T 02690 INPUT "COMPUTER ACTIVE AND AWAITING A COMAND";A: IF A<0 OR A>4 THEN 2710
    0x615499d03de0 ----------   02700 H8=1: ON A+1 GOTO 2810,2930,3010,3270,3070
    0x615499d03fb0 ---------- T 02710 CLS : PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER."
    0x615499d04120 ----------   02720 PRINT " 0=CUMULITIVE GALACTIVE RECORD"
    0x615499d04280 ----------   02730 PRINT " 1=STATUS REPORT"
    0x615499d043f0 ----------   02740 PRINT " 2=PHOTON TORPEDO DATA"
    0x615499d04560 ----------   02750 PRINT " 3=STARBASE NAV DATA"
    0x615499d046c0 ----------   02760 PRINT " 4=DIRECTION/DISTANCE CALCULATOR"
    0x615499d047b0 ----------   02770 PRINT : GOTO 2690
    0x615499d04eb0 ----------   02780 H8=0:G5=1: CLS : PRINT TAB(24)"THE GALAXY": GOTO 2840
    0x615499d05090 ---------- T 02810 PRINT : PRINT " ";
    0x615499d05540 ----------   02820 CLS : PRINT "COMPUTER RECORD OF GALAXY FOR QUADRENT";Q1;",";Q2
    0x615499d055c0 ----------   02830 PRINT 
    0x615499d05740 ---------- T 02840 PRINT " 1 2 3 4 5 6 7 8"
    0x615499d059c0 ----------   02850 O1$=" ----- ----- ------ ------ ------ ------ ----- ------"
    0x615499d06170 ----------   02860 PRINT O1$: FOR I=1 TO 8: PRINT 1;: IF H8=0 THEN 2900
    0x615499d06b70 ----------   02870 FOR J=1 TO 8: PRINT " ";: IF Z(I,J)=0 THEN PRINT "***";: GOTO 2890
    0x615499d07210 ----------   02880 PRINT RIGHT$(STR$(Z(I,J)+1000),3);
    0x615499d073e0 ---------- T 02890 NEXT J: GOTO 2920
    0x615499d081a0 ---------- T 02900 Z4=I:Z5=1: GOSUB 3490:J0= INT(15-.5* LEN(G2$)): PRINT TAB(J0);G2$;
    0x615499d08d00 ----------   02910 Z5=5: GOSUB 3490:J0= INT(39-.5* LEN /(G2$)): PRINT TAB(J0);G2$;
    0x615499d08f60 ---------- T 02920 PRINT : NEXT I: PRINT : GOTO 590
    0x615499d09740 ---------- T 02930 CLS : PRINT " STSTAS REPORT:":X$="": IF K9>1 THEN X$="S"
    0x615499d09be0 ----------   02940 PRINT "KLINGON";X$;" LEFT: ";K9
    0x615499d0a4c0 ----------   02950 PRINT "MISSION MUST BE COMPLEATED IN";.1* INT((T0+T9-T)*10),"STARDATES"
    0x615499d0adb0 ----------   02960 X$="S": IF B9<2 THEN X$="": IF B9<1 THEN 2990
    0x615499d0b330 ----------   02970 PRINT "THE FEDERATION IS MAINTAINING";B9;"STARBASE";X$;" IN THE GALAXY"
    0x615499d0b720 ----------   02975 FOR IX=1 TO 1500: NEXT IX
    0x615499d0b7d0 ----------   02980 GOTO 2070
    0x615499d0bb60 ---------- T 02990 PRINT "CAPTAIN "NA$"! YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN"
    0x615499d0bce0 ----------   03000 PRINT "IN THE GALAXY--YOU HAVE NO STARBASES LEFT!"
    0x615499d0c060 ----------   03005 FOR I=1 TO 2000: NEXT : GOTO 2070
    0x615499d0c2b0 ---------- T 03010 IF K3<=0 THEN 1510
    0x615499d0c950 ----------   03020 X$="": IF K3>1 THEN X$="S"
    0x615499d0cbe0 ----------   03030 PRINT "FROM ENTERPRISE TO KLINGON";X$
    0x615499d0d490 ----------   03040 H8=0: FOR I=1 TO 3: IF K(I,3)<=0 THEN 3260
    0x615499d0dc30 ----------   03050 W1=K(I,1):X=K(I,2)
    0x615499d0e0e0 ---------- T 03060 C1=S1:A=S2: GOTO 3110
    0x615499d0e2a0 ---------- T 03070 CLS : PRINT "DIRECTION/DISTANCE CALCULATER:"
    0x615499d0eb00 ----------   03080 PRINT "YOU ARE AT QUADRENT ";Q1;",";Q2;" SECTOR ";S1;",";S2
    0x615499d0f090 ----------   03090 PRINT "PLEASE ENTER":C1=Q1:A=Q2
    0x615499d0f300 ----------   03100 INPUT " DESTINATION COORDINATES(X,Y)";W1,X
    0x615499d0fbc0 ---------- T 03110 X=X-A:A=C1-W1: IF X<0 THEN 3190
    0x615499d0fe20 ----------   03120 IF A<0 THEN 3210
    0x615499d10090 ----------   03130 IF X>0 THEN 3150
    0x615499d10540 ----------   03140 IF A=0 THEN C1=5: GOTO 3160
    0x615499d10750 ---------- T 03150 C1=1
    0x615499d10bc0 ---------- T 03160 IF ABS(A)<= ABS(X) THEN 3180
    0x615499d11780 ----------   03170 PRINT "DIRECTION=";C1+((( ABS(A)- ABS(X))+ ABS(A))/ ABS(A));: GOTO 3250
    0x615499d11fc0 ---------- T 03180 PRINT "DIRECTION=";C1+( ABS(A)/( ABS(X)+.001));: GOTO 3250
    0x615499d12460 ---------- T 03190 IF A>0 THEN C1=3: GOTO 3220
    0x615499d128f0 ----------   03200 IF X<>0 THEN C1=5: GOTO 3160
    0x615499d12b00 ---------- T 03210 C1=7
    0x615499d12f70 ---------- T 03220 IF ABS(A)>= ABS(X) THEN 3240
    0x615499d13b20 ----------   03230 PRINT "DIRECTION=";C1+((( ABS(X)- ABS(A))+ ABS(X))/ ABS(X));: GOTO 3250
    0x615499d141d0 ---------- T 03240 PRINT "DIRECTION=";C1+( ABS(X)/ ABS(A));
    0x615499d14360 ---------- T 03250 PRINT "DISTANCE=";
    0x615499d14c70 ----------   03252 IF W1=B4 THEN PRINT SQR(X^2+A^2)/10: GOTO 3254
    0x615499d151b0 ----------   03253 PRINT SQR(X^2+A^2)
    0x615499d15400 ---------- T 03254 IF H8=1 THEN 590
    0x615499d155e0 ---------- T 03260 NEXT I: GOTO 590
    0x615499d15e10 ---------- T 03270 IF B3<>0 THEN PRINT "FROM ENTERPRISE TO STAREBASE:":W1=B4:X=B5: GOTO 3060
    0x615499d15fa0 ----------   03280 PRINT "MR SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS";
    0x615499d16180 ----------   03290 PRINT " QUADRANT '": GOTO 590
    0x615499d16fd0 ---------C B 03300 R1= RND(8):R2= RND(8):A$=" ":Z1=R1:Z2=R2: GOSUB 3460: IF Z3=0 THEN 3300
    0x615499d17030 ---------C   03310 RETURN 
    0x615499d17a80 ---------D G 03320 S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
    0x615499d17f20 ---------D   03330 IF LEN(A$)<>3 THEN PRINT "ERROR": STOP 
    0x615499d186b0 ----------   03340 IF S8=1 THEN Q$=A$+ RIGHT$ (Q$,189): RETURN 
    0x615499d18e40 ----------   03350 IF S8=190 THEN Q$= LEFT$ (Q$,189)+A$: RETURN 
    0x615499d198a0 ----------   03360 Q$= LEFT$ (Q$,S8-1)+A$+ RIGHT$ (Q$,190-S8): RETURN 
    0x615499d1a040 ---------E G 03370 ON R1 GOTO 3380,3390,3400,3410,3420,3430,3440,3450
    0x615499d1a2a0 ---------E T 03380 G2$="WARP ENGINES": RETURN 
    0x615499d1a530 ---------E T 03390 G2$="SHORT RANGE SCANNERS": RETURN 
    0x615499d1a7c0 ---------E T 03400 G2$="LONG RANGE SCANNERS": RETURN 
    0x615499d1aa40 ---------E T 03410 G2$="PHASER CONTROL": RETURN 
    0x615499d1acc0 ---------E T 03420 G2$="PHOTON TUBES": RETURN 
    0x615499d1af40 ---------E T 03430 G2$="DAMMAGE CONTROL": RETURN 
    0x615499d1b1c0 ---------E T 03440 G2$="SHIELD CONTROL": RETURN 
    0x615499d1b440 ---------E T 03450 G2$="LIBRARY-COMPUTER": RETURN 
    0x615499d1c730 ---------F G 03460 Z1= INT(Z1+.5):Z2= INT(Z2+.5):S8=(Z2-1)*3+(Z1-1)*24+1:Z3=0
    0x615499d1cc60 ---------F   03470 IF MID$(Q$,S8,3)<>A$ THEN RETURN 
    0x615499d1ceb0 ---------F   03480 Z3=1: RETURN 
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00010      02410T
     00270      00240T, 00250T
     00320      00290T
     00400      01360T
     00500      00470T, 00480T
     00510      00410T
     00550      00520T
     00570      00550T
     00580      00660T, 01200T
     00590      00760T, 00790T, 00830T, 00840T, 00860T, 00900T, 00930T, 01410T, 
                01480T, 01490T, 01520T, 01560T, 01670T, 01685T, 01690T, 01730T, 
                01870T, 01970T, 01980T, 01990T, 02010T, 02040T, 02065T, 02080T, 
                02100T, 02150T, 02210T, 02680T, 02920T, 03254T, 03260T, 03290T
     00670      00650T
     00770      00660T
     00800      00780T
     00860      00810T
     00870      00820T
     00940      00870T
     00970      00940T
     01030      00980T, 00990T, 01000T
     01070      01040T
     01090      01030T, 01060T
     01160      01130T
     01170      01150T, 01350T
     01210      01120T
     01350      01280T
     01410      00660T
     01480      01460T
     01490      00660T
     01510      03010T
     01530      01500T
     01550      01570T
     01620      01604T
     01650      01630T
     01670      01590T, 01610T, 01640T
     01680      00660T
     01700      01880T
     01740      01710T
     01770      01800T
     01850      01830T
     01860      01810T
     01880      01860T
     01940      01900T
     01960      01850T
     01980      01780T
     01990      00660T
     02050      02020T
     02070      00660T, 02980T, 03005T
     02090      02200T
     02180      02070T
     02320      02240T, 02280T, 02290T
     02330      00630T, 01190T, 01340T, 02350T
     02340      02270T
     02360      00660T, 01930T, 02330T
     02380      02450T
     02420      02380T
     02430      01660T, 01820T
     02460      00580G
     02490      02470T
     02500      02480T
     02520      02490T
     02540      02510T, 02520T
     02560      02540T
     02590      02580T
     02600      02580T
     02610      02580T
     02620      02580T
     02630      02580T
     02640      02580T
     02650      02580T
     02660      02580T
     02670      02590T, 02600T, 02610T, 02620T, 02630T, 02640T, 02650T
     02680      00660T
     02690      02770T
     02710      02690T
     02810      02700T
     02840      02780T
     02890      02870T
     02900      02860T
     02920      02890T
     02930      02700T
     02990      02960T
     03010      02700T
     03060      03270T
     03070      02700T
     03110      03060T
     03150      03130T
     03160      03140T, 03200T
     03180      03160T
     03190      03110T
     03210      03120T
     03220      03190T
     03240      03220T
     03250      03170T, 03180T, 03230T
     03254      03252T
     03260      03040T
     03270      02700T
     03300      00950G, 03300T
     03320      00560G, 00960G, 01090G, 01650G, 01960G
     03370      02300G
     03380      03370T
     03390      03370T
     03400      03370T
     03410      03370T
     03420      03370T
     03430      03370T
     03440      03370T
     03450      03370T
     03460      01790G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x615499c7a5d0 (00001)   0x615499c7a5d0 (00001)   0x615499d1ceb0 (03480)   0x615499cf74e0 (02420)   
   B) 0x615499cf96a0 (02460)   0x615499cf96a0 (02460)   0x615499cfdef0 (02555)   0x615499d02910 (02670)   
   C) 0x615499d16fd0 (03300)   0x615499d16fd0 (03300)   0x615499d17030 (03310)   0x615499d17030 (03310)   
   D) 0x615499d17a80 (03320)   0x615499d17a80 (03320)   0x000000000000 (00000)   0x615499d17f20 (03330)   
   E) 0x615499d1a040 (03370)   0x615499d1a040 (03370)   0x615499d1a2a0 (03380)   0x615499d1b440 (03450)   
   F) 0x615499d1c730 (03460)   0x615499d1c730 (03460)   0x615499d1ceb0 (03480)   0x615499d1ceb0 (03480)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02030 - 10000    7980 

 */



/*
 *  Symbol Table Listing for 'basic/startrek1.bas'
 *
    A                        Integer     
    A$                       String      
    A1$                      String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B3                       Integer     
    B4                       Integer     
    B5                       Integer     
    B9                       Integer     
    C               Array    Integer         {0,8} {0,1} 
    C$                       String      
    C1                       Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D               Array    Integer         {0,7} 
    D0                       Integer     
    D1                       Integer     
    D3                       Integer     
    D4                       Integer     
    D6                       Integer     
    E                        Integer     
    E0                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G               Array    Integer         {0,7} {0,7} 
    G2$                      String      
    G5                       Integer     
    H                        Integer     
    H1                       Integer     
    H8                       Integer     
    HD              Array    Integer         {0,9} 
    HEX$            Function String          args=1, int    
    I                        Integer     
    II                       Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    IX                       Integer     
    J                        Integer     
    J0                       Integer     
    JH                       Integer     
    K               Array    Integer         {0,2} {0,2} 
    K3                       Integer     
    K7                       Integer     
    K9                       Integer     
    L                        Integer     
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
    N               Array    Integer         {0,2} 
    NA$                      String      
    O1$                      String      
    OCT$            Function String          args=1, float  
    P                        Integer     
    P0                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    PO                       Integer     
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q               Array    Integer         {0,9} 
    Q$                       String      
    Q1                       Integer     
    Q2                       Integer     
    Q4                       Integer     
    Q5                       Integer     
    R1                       Integer     
    R2                       Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
    S1                       Integer     
    S2                       Integer     
    S3                       Integer     
    S8                       Integer     
    S9                       Integer     
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
    T8                       Integer     
    T9                       Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TI                       Integer     
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W1                       Integer     
    X                        Integer     
    X$                       String      
    X0$                      String      
    X1                       Integer     
    X2                       Integer     
    X3                       Integer     
    X5                       Integer     
    Y                        Integer     
    Y3                       Integer     
    Z               Array    Integer         {0,7} {0,7} 
    Z$                       String      
    Z1                       Integer     
    Z2                       Integer     
    Z3                       Integer     
    Z4                       Integer     
    Z5                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/startrek1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x615499c7a5d0 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x615499c8b020 ---------A   01010 REM trs1010 - TRS-80 Level II BASIC tokenized file
    0x615499c8a910 ---------A T 01020 CLS 
    0x615499c8bdd0 ---------A   01030 PRINT @210,"S U P E R S T A R T R E K"
    0x615499c8bf50 ---------A   01040 PRINT : PRINT 
    0x615499c7a2f0 ---------A   01050 CLEAR 600
    0x615499c8c010 ---------A   01060 Z$=" "
    0x615499c8c0d0 ---------A   01070 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8): RANDOM 
    0x615499c936b0 ---------A   01080 T= INT( RND(0)*20+20)*100:T0=T:T9=25+ INT( RND(0)*10):D0=0:E=3000:E0=E
    0x615499c94c80 ---------A   01090 P=10:PO=P:S9=200:S=0:B9=0:K9=0:X$="":X0$=" IS "
    0x615499c95b00 ---------A   01100 Q1= RND(8):Q2= RND(8):S1= RND(8):S2= RND(8)
    0x615499c96670 ---------A   01110 FOR I=1 TO 9:C(I,1)=0:C(I,2)=0: NEXT I
    0x615499c97ba0 ---------A   01120 C(3,1)=-1:C(2,1)=-1:C(4,1)=-1:C(4,2)=-1:C(5,2)=-1:C(6,2)=-1
    0x615499c993b0 ---------A   01130 C(1,2)=1:C(2,2)=1:C(6,1)=1:C(7,1)=1:C(8,1)=1:C(8,2)=1:C(9,2)=1
    0x615499c99a70 ---------A   01140 FOR I=1 TO 8:D(I)=0: NEXT I
    0x615499c99d60 ---------A   01150 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    0x615499c9add0 ---------A   01160 FOR I=1 TO 8: FOR J=1 TO 8:K3=0:Z(I,J)=0:R1= RND(0)
    0x615499c9b5a0 ---------A   01170 IF R1>.98 THEN K3=3:K9=K9+3: GOTO 1180
    0x615499c9cf90 ---------A T 01180 B3=0: IF RND(0)>.96 THEN B3=1:B9=B9+1
    0x615499c9e020 ---------A   01190 G(I,J)=K3*100+B3*10+ RND(8): NEXT J: NEXT I: IF K9>T9 THEN T9=K9+1
    0x615499c9e2a0 ---------A   01200 IF B9<>0 THEN 1230
    0x615499c9f090 ---------A   01210 IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100:K9=K9+1
    0x615499c9fef0 ---------A   01220 B9=1:G(Q1,Q2)=G(Q1,Q2)+10:Q1= RND(8):Q2= RND(8)
    0x615499ca0860 ---------A T 01230 K7=K9: IF B9<>1 THEN X$="S":X0$=" ARE "
    0x615499ca09c0 ---------A   01240 PRINT "YOUR ORDERS ARE AS FOLLOWES:"
    0x615499ca0d20 ---------A   01250 PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
    0x615499ca0ed0 ---------A   01260 PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x615499ca1680 ---------A   01270 PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
    0x615499ca1c20 ---------A   01280 PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
    0x615499ca1ee0 ---------A   01290 PRINT : INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
    0x615499ca3830 ---------A   01300 Z4=Q1:Z5=Q2:K3=0:B3=0:S3=0:G5=0:D4=.5* RND(0):Z(Q1,Q2)=G(Q1,Q2)
    0x615499ca42f0 ---------A   01310 IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 1380
    0x615499ca4370 ---------A   01320 REM 
    0x615499ca5160 ---------A   01330 K3= INT(G(Q1,Q2)*.01):B3= INT(G(Q1,Q2)*.1)-10*K3
    0x615499ca5bf0 ---------A   01340 S3=G(Q1,Q2)-100*K3-10*B3: IF K3=0 THEN 1370
    0x615499ca5ff0 ---------A   01350 CLS : PRINT @396,"COMBAT AREA CONDITION RED": IF S>200 THEN 1370
    0x615499ca6180 ---------A   01360 PRINT @463,"SHIELDS DANGEROUSLY LOW"
    0x615499ca6c90 ---------A T 01370 FOR I=1 TO 3:K(I,1)=0:K(I,2)=0: NEXT I
    0x615499ca80e0 ---------A T 01380 FOR I=1 TO 3:K(I,3)=0: NEXT I:Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
    0x615499ca8c00 ---------A   01390 A$="<*>":Z1=S1:Z2=S2: GOSUB 3320: IF K3<1 THEN 1420
    0x615499ca9670 ---------A   01400 FOR I=1 TO K3: GOSUB 3300:A$="+K+":Z1=R1:Z2=R2
    0x615499caa610 ---------A   01410 GOSUB 3320:K(I,1)=R1:K(I,1)=R2:K(I,3)=S9*(.5+ RND(0)): NEXT I
    0x615499caa8a0 ---------A T 01420 IF B3<1 THEN 1440
    0x615499cab560 ---------A   01430 GOSUB 3300:A$=">!<":Z1=R1:B4=R1:Z2=R2:B5=R2: GOSUB 2010
    0x615499cac010 ---------A T 01440 FOR I=1 TO S3: GOSUB 3300:A$=" * ":Z1=R1:Z2=R2: GOSUB 3320: NEXT I
    0x615499cac0b0 ---------A   01450 GOSUB 1780
    0x615499cac970 ---------A   01460 IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
    0x615499cacd50 ---------A   01470 CLS : PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
    0x615499cacf20 ---------A   01480 PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
    0x615499cad1f0 ---------A   01490 PRINT " AND SHIELD CONTROL.": PRINT "IS PRESENTLY INCAPABLE OF CROSS";
    0x615499cad3c0 ---------A   01500 PRINT "-CIRUITING TO ENGINE ROOM!!": GOTO 1520
    0x615499cdaa20 ---------A   01510 REM 
    0x615499cf5c10 ---------A T 01520 PRINT "IT IS STARDATE";T: FOR I=1 TO 1500: NEXT I: GOTO 1530
    0x615499cf68b0 ---------A T 01530 CLS : PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
    0x615499cf6a20 ---------A   01540 PRINT "THE END OF YOUR MISSION."
    0x615499cf6d40 ---------A   01550 PRINT : PRINT : IF B9=0 THEN 1590
    0x615499cf6ef0 ---------A   01560 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x615499cf70a0 ---------A   01570 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x615499cf7480 ---------A   01580 INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$: IF A$="AYE" THEN 1020
    0x615499cf74e0 ---------A T 01590 END 
    0x615499d16fd0 ---------- T 01600 R1= RND(8):R2= RND(8):A$=" ":Z1=R1:Z2=R2: GOSUB 3460: IF Z3=0 THEN 1600
    0x615499d25c10 ----------   01610 GOTO 01620
    0x615499d25c70 ---------- T 01620 RETURN
    0x615499d25cd0 ----------   01630 RETURN
    0x615499d1a040 ----------   01640 ON R1 GOTO 1650,1660,1670,1680,1690,1700,1710,1720
    0x615499d25d30 ---------- T 01650 GOTO 01730
    0x615499d25d90 ---------- T 01660 GOTO 01730
    0x615499d25df0 ---------- T 01670 GOTO 01730
    0x615499d25e50 ---------- T 01680 GOTO 01730
    0x615499d25eb0 ---------- T 01690 GOTO 01730
    0x615499d25f10 ---------- T 01700 GOTO 01730
    0x615499d25f70 ---------- T 01710 GOTO 01730
    0x615499d25fd0 ---------- T 01720 GOTO 01730
    0x615499d26030 ---------- T 01730 RETURN
    0x615499d1c730 ----------   01740 Z1= INT(Z1+.5):Z2= INT(Z2+.5):S8=(Z2-1)*3+(Z1-1)*24+1:Z3=0
    0x615499d1cc60 ----------   01750 IF MID$(Q$,S8,3)<>A$ THEN RETURN 
    0x615499d26090 ----------   01760 GOTO 01770
    0x615499d260f0 ---------- T 01770 RETURN
    0x615499cf96a0 ---------B G 01780 FOR I=S1-1 TO S1+1: FOR J=S2-1 TO S2+1
    0x615499cfa700 ---------B   01790 IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 1810
    0x615499cfafe0 ---------B   01800 A$=">!<":Z1=I:Z2=J: GOSUB 3460: IF Z3=1 THEN 1820
    0x615499cfb4a0 ---------B T 01810 NEXT J: NEXT I:D0=0: GOTO 1840
    0x615499cfbe30 ---------B T 01820 D0=1:C$="DOCKED":E=E0:P=P0
    0x615499cfc690 ---------B   01830 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES": FOR IX=1 TO 1500: NEXT IX:S=0: GOTO 1850
    0x615499cfcb60 ---------B T 01840 IF K3>0 THEN C$="*RED*": GOTO 1850
    0x615499cfd640 ---------B T 01850 IF D(2)>=0 THEN 1880
    0x615499cfdd10 ---------B   01860 IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS : PRINT 
    0x615499d25b30 ---------B   01870 GOTO 02000
    0x615499cfe5e0 ---------B T 01880 CLS :O1$="---------------------------------": PRINT O1$: FOR I=1 TO 8
    0x615499cff630 ---------B   01890 FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3: PRINT " "; MID$(Q$,J,3);: NEXT J
    0x615499cffdd0 ---------B   01900 ON I GOTO 1910,1920,1930,1940,1950,1960,1970,1980
    0x615499ccc4e0 ---------B T 01910 PRINT " STARDATE "; INT(T*10)*.1: GOTO 1990
    0x615499d00e30 ---------B T 01920 PRINT " CONDITION ";C$: GOTO 1990
    0x615499d012c0 ---------B T 01930 PRINT " QUADRANT ";Q1;",";Q2: GOTO 1990
    0x615499d01770 ---------B T 01940 PRINT " SECTOR ";S1;",";S2: GOTO 1990
    0x615499d01b00 ---------B T 01950 PRINT " PHOTON TORPEDOES "; INT(P): GOTO 1990
    0x615499d01fb0 ---------B T 01960 PRINT " TOTAL ENERGY "; INT(E+S): GOTO 1990
    0x615499d02340 ---------B T 01970 PRINT " SHIELDS "; INT(S): GOTO 1990
    0x615499d02670 ---------B T 01980 PRINT " KLINGONS REMAINING "; INT(K9)
    0x615499d25b70 ---------B T 01990 GOTO 02000
    0x615499d25bb0 ---------B T 02000 RETURN
    0x615499d17a80 ---------C G 02010 S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
    0x615499d17f20 ---------C   02020 IF LEN(A$)<>3 THEN PRINT "ERROR": STOP 
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
char*  A_str;                                     // Basic: A$ 
char*  A1_str;                                    // Basic: A1$ 
int    B3_int;                                    // Basic: B3 
int    B4_int;                                    // Basic: B4 
int    B5_int;                                    // Basic: B5 
int    B9_int;                                    // Basic: B9 
int    C_int_arr[9][2];                           // Basic: C 
char*  C_str;                                     // Basic: C$ 
int    C1_int;                                    // Basic: C1 
int    D_int_arr[8];                              // Basic: D 
int    D0_int;                                    // Basic: D0 
int    D1_int;                                    // Basic: D1 
int    D3_int;                                    // Basic: D3 
int    D4_int;                                    // Basic: D4 
int    D6_int;                                    // Basic: D6 
int    E_int;                                     // Basic: E 
int    E0_int;                                    // Basic: E0 
int    G_int_arr[8][8];                           // Basic: G 
char*  G2_str;                                    // Basic: G2$ 
int    G5_int;                                    // Basic: G5 
int    H_int;                                     // Basic: H 
int    H1_int;                                    // Basic: H1 
int    H8_int;                                    // Basic: H8 
int    HD_int_arr[10];                            // Basic: HD 
int    I_int;                                     // Basic: I 
int    II_int;                                    // Basic: II 
int    IX_int;                                    // Basic: IX 
int    J_int;                                     // Basic: J 
int    J0_int;                                    // Basic: J0 
int    JH_int;                                    // Basic: JH 
int    K_int_arr[3][3];                           // Basic: K 
int    K3_int;                                    // Basic: K3 
int    K7_int;                                    // Basic: K7 
int    K9_int;                                    // Basic: K9 
int    L_int;                                     // Basic: L 
int    N_int_arr[3];                              // Basic: N 
char*  NA_str;                                    // Basic: NA$ 
char*  O1_str;                                    // Basic: O1$ 
int    P_int;                                     // Basic: P 
int    P0_int;                                    // Basic: P0 
int    PO_int;                                    // Basic: PO 
int    Q_int_arr[10];                             // Basic: Q 
char*  Q_str;                                     // Basic: Q$ 
int    Q1_int;                                    // Basic: Q1 
int    Q2_int;                                    // Basic: Q2 
int    Q4_int;                                    // Basic: Q4 
int    Q5_int;                                    // Basic: Q5 
int    R1_int;                                    // Basic: R1 
int    R2_int;                                    // Basic: R2 
int    S_int;                                     // Basic: S 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    S3_int;                                    // Basic: S3 
int    S8_int;                                    // Basic: S8 
int    S9_int;                                    // Basic: S9 
int    T_int;                                     // Basic: T 
int    T0_int;                                    // Basic: T0 
int    T8_int;                                    // Basic: T8 
int    T9_int;                                    // Basic: T9 
int    TI_int;                                    // Basic: TI 
int    W1_int;                                    // Basic: W1 
int    X_int;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
char*  X0_str;                                    // Basic: X0$ 
int    X1_int;                                    // Basic: X1 
int    X2_int;                                    // Basic: X2 
int    X3_int;                                    // Basic: X3 
int    X5_int;                                    // Basic: X5 
int    Y_int;                                     // Basic: Y 
int    Y3_int;                                    // Basic: Y3 
int    Z_int_arr[8][8];                           // Basic: Z 
char*  Z_str;                                     // Basic: Z$ 
int    Z1_int;                                    // Basic: Z1 
int    Z2_int;                                    // Basic: Z2 
int    Z3_int;                                    // Basic: Z3 
int    Z4_int;                                    // Basic: Z4 
int    Z5_int;                                    // Basic: Z5 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01780();
void Routine_02010();

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

void Routine_01780(){
    // 01780 FOR I=S1-1 TO S1+1: FOR J=S2-1 TO S2+1
    for(J_int=S2_int-1;J_int<=S2_int+1;J_int++){
        // 01790 IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 1810
        if(INT(I_int+0.5)<1||INT(I_int+0.5)>8||INT(J_int+0.5)<1||INT(J_int+0.5)>8)goto Lbl_01810;
        // 01800 A$=">!<":Z1=I:Z2=J: GOSUB 3460: IF Z3=1 THEN 1820
        if(Z3_int==1)goto Lbl_01820;

  Lbl_01810:
        // 01810 NEXT J: NEXT I:D0=0: GOTO 1840
        goto Lbl_01840;

  Lbl_01820:
        // 01820 D0=1:C$="DOCKED":E=E0:P=P0
        P_int = P0_int;
        // 01830 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES": FOR IX=1 TO 1500: NEXT IX:S=0: GOTO 1850
        goto Lbl_01850;

  Lbl_01840:
        // 01840 IF K3>0 THEN C$="*RED*": GOTO 1850
        goto Lbl_01850;

  Lbl_01850:
        // 01850 IF D(2)>=0 THEN 1880
        if(D_int_arr[2]>=0)goto Lbl_01880;
        // 01860 IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS : PRINT 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01870 GOTO 02000
        goto Lbl_02000;

  Lbl_01880:
        // 01880 CLS :O1$="---------------------------------": PRINT O1$: FOR I=1 TO 8
        for(I_int=1;I_int<=8;I_int++){
            // 01890 FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3: PRINT " "; MID$(Q$,J,3);: NEXT J
            int dummy_1890=0; // Ignore this line.
        }; // End-For(J_int)
        // 01900 ON I GOTO 1910,1920,1930,1940,1950,1960,1970,1980
        switch((int)(I_int)){
            case 1: goto Lbl_01910;
            case 2: goto Lbl_01920;
            case 3: goto Lbl_01930;
            case 4: goto Lbl_01940;
            case 5: goto Lbl_01950;
            case 6: goto Lbl_01960;
            case 7: goto Lbl_01970;
            case 8: goto Lbl_01980;
            default: break; 
        };

  Lbl_01910:
        // 01910 PRINT " STARDATE "; INT(T*10)*.1: GOTO 1990
        goto Lbl_01990;

  Lbl_01920:
        // 01920 PRINT " CONDITION ";C$: GOTO 1990
        goto Lbl_01990;

  Lbl_01930:
        // 01930 PRINT " QUADRANT ";Q1;",";Q2: GOTO 1990
        goto Lbl_01990;

  Lbl_01940:
        // 01940 PRINT " SECTOR ";S1;",";S2: GOTO 1990
        goto Lbl_01990;

  Lbl_01950:
        // 01950 PRINT " PHOTON TORPEDOES "; INT(P): GOTO 1990
        goto Lbl_01990;

  Lbl_01960:
        // 01960 PRINT " TOTAL ENERGY "; INT(E+S): GOTO 1990
        goto Lbl_01990;

  Lbl_01970:
        // 01970 PRINT " SHIELDS "; INT(S): GOTO 1990
        goto Lbl_01990;

  Lbl_01980:
        // 01980 PRINT " KLINGONS REMAINING "; INT(K9)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," KLINGONS REMAINING ");b2c_INT(buf,INT(K9_int));strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01990:
        // 01990 GOTO 02000
        goto Lbl_02000;

  Lbl_02000:
        // 02000 RETURN
        return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02010(){
        // 02010 S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
        S8_int = INT(Z2_int-0.5)*3+INT(Z1_int-0.5)*24+1;
        // 02020 IF LEN(A$)<>3 THEN PRINT "ERROR": STOP 
        exit(1);

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM trs1010 - TRS-80 Level II BASIC tokenized file

  Lbl_01020:
    // 01020 CLS 
    ClearScreen(0);
    // 01030 PRINT @210,"S U P E R S T A R T R E K"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"S U P E R S T A R T R E K");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT : PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 CLEAR 600
    ClearMemory(600,4294967295);
    // 01060 Z$=" "
    GLBpStr=" ";
    Z_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01070 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8): RANDOM 
    RANDOMIZE();
    // 01080 T= INT( RND(0)*20+20)*100:T0=T:T9=25+ INT( RND(0)*10):D0=0:E=3000:E0=E
    E0_int = E_int;
    // 01090 P=10:PO=P:S9=200:S=0:B9=0:K9=0:X$="":X0$=" IS "
    GLBpStr=" IS ";
    X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01100 Q1= RND(8):Q2= RND(8):S1= RND(8):S2= RND(8)
    S2_int = RND(8);
    // 01110 FOR I=1 TO 9:C(I,1)=0:C(I,2)=0: NEXT I
    int dummy_1110=0; // Ignore this line.
}; // End-For(I_int)
// 01120 C(3,1)=-1:C(2,1)=-1:C(4,1)=-1:C(4,2)=-1:C(5,2)=-1:C(6,2)=-1
C_int_arr[6][2] = -1;
// 01130 C(1,2)=1:C(2,2)=1:C(6,1)=1:C(7,1)=1:C(8,1)=1:C(8,2)=1:C(9,2)=1
C_int_arr[9][2] = 1;
// 01140 FOR I=1 TO 8:D(I)=0: NEXT I
int dummy_1140=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_int)
r* CName(const char*)// 01150 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
r* CName(const char*)GLBpStr="NAVSRSLRSPHATORSHEDAMCOMXXX";
r* CName(const char*)A1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
r* CName(const char*)// 01160 FOR I=1 TO 8: FOR J=1 TO 8:K3=0:Z(I,J)=0:R1= RND(0)
r* CName(const char*)R1_int = RND(0);
r* CName(const char*)// 01170 IF R1>.98 THEN K3=3:K9=K9+3: GOTO 1180
r* CName(const char*)goto Lbl_01180;

  Lbl_01180:
r* CName(const char*)// 01180 B3=0: IF RND(0)>.96 THEN B3=1:B9=B9+1
r* CName(const char*)B9_int = B9_int+1;
r* CName(const char*)// 01190 G(I,J)=K3*100+B3*10+ RND(8): NEXT J: NEXT I: IF K9>T9 THEN T9=K9+1
r* CName(const char*)if(K9_int>T9_int) {
r* CName(const char*)}
r* CName(const char*)// 01200 IF B9<>0 THEN 1230
r* CName(const char*)if(B9_int!=0)goto Lbl_01230;
r* CName(const char*)// 01210 IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100:K9=K9+1
r* CName(const char*)K9_int = K9_int+1;
r* CName(const char*)// 01220 B9=1:G(Q1,Q2)=G(Q1,Q2)+10:Q1= RND(8):Q2= RND(8)
r* CName(const char*)Q2_int = RND(8);

  Lbl_01230:
r* CName(const char*)// 01230 K7=K9: IF B9<>1 THEN X$="S":X0$=" ARE "
r* CName(const char*)GLBpStr=" ARE ";
r* CName(const char*)X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
r* CName(const char*)// 01240 PRINT "YOUR ORDERS ARE AS FOLLOWES:"
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR ORDERS ARE AS FOLLOWES:");strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 01250 PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," DESTROY THE"); b2c_INT(buf,K9_int);strcat(buf,"KLINGON WARSHIPS WHICH HAVE INVADED");strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 01260 PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS");strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 01270 PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ON STARDATE"); b2c_INT(buf,T0_int+T9_int);strcat(buf," THIS GIVES YOU"); b2c_INT(buf,T9_int);strcat(buf,"DAYS. THERE"); b2c_STR(buf,X0_str);strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 01280 PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," "); b2c_INT(buf,B9_int);strcat(buf,"STARBASE"); b2c_STR(buf,X_str);strcat(buf," IN THE GALAXY FOR RESUPLYING YOUR SHIP.");strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 01290 PRINT : INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
r* CName(const char*)// Start of Basic INPUT statement 01290
r* CName(const char*){
int numargs=1;
char *args[numargs+1];
bool echoeol=true;
while(true){
    fprintf(stdout,"ENTER YOUR NAME IN THE CAPTAIN'S LOG");
    int err=input(args,numargs,echoeol);
    if(err==0x03) break;
    if(err || 
        (err += b2c_strtos(&NA_str,args,0)) ){
         printf("?Redo from start\n");
    }else{
        break;
    };
};
r* CName(const char*)}; // End of Basic INPUT statement 01290
r* CName(const char*)// 01300 Z4=Q1:Z5=Q2:K3=0:B3=0:S3=0:G5=0:D4=.5* RND(0):Z(Q1,Q2)=G(Q1,Q2)
r* CName(const char*)Z_int_arr[Q1_int][Q2_int] = G_int_arr[Q1_int][Q2_int];
r* CName(const char*)// 01310 IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 1380
r* CName(const char*)if(Q1_int<1||Q1_int>8||Q2_int<1||Q2_int>8)goto Lbl_01380;
r* CName(const char*)// 01320 REM 
r* CName(const char*)// 01330 K3= INT(G(Q1,Q2)*.01):B3= INT(G(Q1,Q2)*.1)-10*K3
r* CName(const char*)B3_int = INT(G_int_arr[Q1_int][Q2_int]*0.1)-10*K3_int;
r* CName(const char*)// 01340 S3=G(Q1,Q2)-100*K3-10*B3: IF K3=0 THEN 1370
r* CName(const char*)if(K3_int==0)goto Lbl_01370;
r* CName(const char*)// 01350 CLS : PRINT @396,"COMBAT AREA CONDITION RED": IF S>200 THEN 1370
r* CName(const char*)if(S_int>200)goto Lbl_01370;
r* CName(const char*)// 01360 PRINT @463,"SHIELDS DANGEROUSLY LOW"
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHIELDS DANGEROUSLY LOW");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01370:
r* CName(const char*)// 01370 FOR I=1 TO 3:K(I,1)=0:K(I,2)=0: NEXT I
r* CName(const char*)int dummy_1370=0; // Ignore this line.
Name(const char*)}; // End-For(I_int)

  Lbl_01380:
Name(const char*)// 01380 FOR I=1 TO 3:K(I,3)=0: NEXT I:Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
Name(const char*)GLBpStr=StringCat(StringCat(StringCat(StringCat(StringCat(StringCat(StringCat(Z_str,Z_str),Z_str),Z_str),Z_str),Z_str),Z_str),LEFT$(Z_str,17));
Name(const char*)Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
Name(const char*)// 01390 A$="<*>":Z1=S1:Z2=S2: GOSUB 3320: IF K3<1 THEN 1420
Name(const char*)if(K3_int<1)goto Lbl_01420;
Name(const char*)// 01400 FOR I=1 TO K3: GOSUB 3300:A$="+K+":Z1=R1:Z2=R2
Name(const char*)Z2_int = R2_int;
Name(const char*)// 01410 GOSUB 3320:K(I,1)=R1:K(I,1)=R2:K(I,3)=S9*(.5+ RND(0)): NEXT I
Name(const char*)int dummy_1410=0; // Ignore this line.
(const char*)}; // End-For(I_int)

  Lbl_01420:
(const char*)// 01420 IF B3<1 THEN 1440
(const char*)if(B3_int<1)goto Lbl_01440;
(const char*)// 01430 GOSUB 3300:A$=">!<":Z1=R1:B4=R1:Z2=R2:B5=R2: GOSUB 2010
(const char*)Routine_02010();

  Lbl_01440:
(const char*)// 01440 FOR I=1 TO S3: GOSUB 3300:A$=" * ":Z1=R1:Z2=R2: GOSUB 3320: NEXT I
(const char*)int dummy_1440=0; // Ignore this line.
st char*)}; // End-For(I_int)
st char*)// 01450 GOSUB 1780
st char*)Routine_01780();
st char*)// 01460 IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
st char*)if(S_int+E_int>10) {
st char*)}
st char*)// 01470 CLS : PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
st char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CAPTAIN "); b2c_STR(buf,NA_str);strcat(buf,"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!");strcat(buf,"\n");fputs(buf,fh); };
st char*)// 01480 PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
st char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE INSUFFICIENT MANUVERING ENERGY,");fputs(buf,fh); };
st char*)// 01490 PRINT " AND SHIELD CONTROL.": PRINT "IS PRESENTLY INCAPABLE OF CROSS";
st char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IS PRESENTLY INCAPABLE OF CROSS");fputs(buf,fh); };
st char*)// 01500 PRINT "-CIRUITING TO ENGINE ROOM!!": GOTO 1520
st char*)goto Lbl_01520;
st char*)// 01510 REM 

  Lbl_01520:
st char*)// 01520 PRINT "IT IS STARDATE";T: FOR I=1 TO 1500: NEXT I: GOTO 1530
st char*)goto Lbl_01530;

  Lbl_01530:
st char*)// 01530 CLS : PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
st char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THERE WERE"); b2c_INT(buf,K9_int);strcat(buf,"KLINGON BATTLE CRUISERS LEFT AT");strcat(buf,"\n");fputs(buf,fh); };
st char*)// 01540 PRINT "THE END OF YOUR MISSION."
st char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE END OF YOUR MISSION.");strcat(buf,"\n");fputs(buf,fh); };
st char*)// 01550 PRINT : PRINT : IF B9=0 THEN 1590
st char*)if(B9_int==0)goto Lbl_01590;
st char*)// 01560 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
st char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER");strcat(buf,"\n");fputs(buf,fh); };
st char*)// 01570 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
st char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,");strcat(buf,"\n");fputs(buf,fh); };
st char*)// 01580 INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$: IF A$="AYE" THEN 1020
st char*)if(strcmp(A_str,"AYE")==0)goto Lbl_01020;

  Lbl_01590:
st char*)// 01590 END 
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
