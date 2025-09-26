/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/startrek/basic/startrek1.bas: 
 *
                   +----+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |    | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |    | |
        Address    v    v v Original BASIC statement
    -------------- ------ - ------------------------------------------------------------------------------
    0x560163e70d10 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x560163e70df0 ---------A   00002 REM trs2 - TRS-80 Level II BASIC tokenized file
    0x560163e70eb0 ---------A T 00010 CLS 
    0x560163e70ff0 ---------A   00020 PRINT @210,"S U P E R S T A R T R E K"
    0x560163e71090 ---------A   00030 PRINT : PRINT 
    0x560163e71130 ---------A   00100 CLEAR 600
    0x560163e71370 ---------A   00110 Z$=" "
    0x560163e76230 ---------A   00120 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8): RANDOM 
    0x560163e773b0 ---------A   00130 T= INT( RND(0)*20+20)*100:T0=T:T9=25+ INT( RND(0)*10):D0=0:E=3000:E0=E
    0x560163e782b0 ---------A   00140 P=10:PO=P:S9=200:S=0:B9=0:K9=0:X$="":X0$=" IS "
    0x560163e78bb0 ---------A   00170 Q1= RND(8):Q2= RND(8):S1= RND(8):S2= RND(8)
    0x560163e79380 ---------A   00180 FOR I=1 TO 9:C(I,1)=0:C(I,2)=0: NEXT I
    0x560163e7a370 ---------A   00190 C(3,1)=-1:C(2,1)=-1:C(4,1)=-1:C(4,2)=-1:C(5,2)=-1:C(6,2)=-1
    0x560163e7b560 ---------A   00200 C(1,2)=1:C(2,2)=1:C(6,1)=1:C(7,1)=1:C(8,1)=1:C(8,2)=1:C(9,2)=1
    0x560163e7b9c0 ---------A   00210 FOR I=1 TO 8:D(I)=0: NEXT I
    0x560163e7bc30 ---------A   00220 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    0x560163e7c700 ---------A   00230 FOR I=1 TO 8: FOR J=1 TO 8:K3=0:Z(I,J)=0:R1= RND(0)
    0x560163e7cd80 ---------A   00240 IF R1>.98 THEN K3=3:K9=K9+3: GOTO 270
    0x560163e7d2d0 ----------   00250 IF R1>.95 THEN K3=2:K9=K9+2: GOTO 270
    0x560163e7d7e0 ----------   00260 IF R1>.8 THEN K3=1:K9=K9+1
    0x560163e7df80 ---------A T 00270 B3=0: IF RND(0)>.96 THEN B3=1:B9=B9+1
    0x560163e7e990 ---------A   00280 G(I,J)=K3*100+B3*10+ RND(8): NEXT J: NEXT I: IF K9>T9 THEN T9=K9+1
    0x560163e7eb70 ----------   00290 IF B9<>0 THEN 320
    0x560163e7f380 ----------   00300 IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100:K9=K9+1
    0x560163e7fbe0 ----------   00310 B9=1:G(Q1,Q2)=G(Q1,Q2)+10:Q1= RND(8):Q2= RND(8)
    0x560163e80230 ---------- T 00320 K7=K9: IF B9<>1 THEN X$="S":X0$=" ARE "
    0x560163e803a0 ----------   00330 PRINT "YOUR ORDERS ARE AS FOLLOWES:"
    0x560163e80670 ----------   00340 PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
    0x560163e80800 ----------   00350 PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x560163e80d50 ----------   00360 PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
    0x560163e81190 ----------   00370 PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
    0x560163e81390 ----------   00380 PRINT : INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
    0x560163e822e0 ---------- T 00400 Z4=Q1:Z5=Q2:K3=0:B3=0:S3=0:G5=0:D4=.5* RND(0):Z(Q1,Q2)=G(Q1,Q2)
    0x560163e82b20 ----------   00410 IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 510
    0x560163e82ba0 ---------A   00450 REM 
    0x560163e833b0 ----------   00460 K3= INT(G(Q1,Q2)*.01):B3= INT(G(Q1,Q2)*.1)-10*K3
    0x560163e83a60 ----------   00470 S3=G(Q1,Q2)-100*K3-10*B3: IF K3=0 THEN 500
    0x560163e83da0 ----------   00480 CLS : PRINT @396,"COMBAT AREA CONDITION RED": IF S>200 THEN 500
    0x560163e83f10 ----------   00490 PRINT @463,"SHIELDS DANGEROUSLY LOW"
    0x560163e84660 ---------- T 00500 FOR I=1 TO 3:K(I,1)=0:K(I,2)=0: NEXT I
    0x560163e85350 ---------- T 00510 FOR I=1 TO 3:K(I,3)=0: NEXT I:Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
    0x560163e85a70 ----------   00520 A$="<*>":Z1=S1:Z2=S2: GOSUB 3320: IF K3<1 THEN 550
    0x560163e860e0 ----------   00530 FOR I=1 TO K3: GOSUB 3300:A$="+K+":Z1=R1:Z2=R2
    0x560163e86a60 ----------   00540 GOSUB 3320:K(I,1)=R1:K(I,1)=R2:K(I,3)=S9*(.5+ RND(0)): NEXT I
    0x560163e86c50 ---------- T 00550 IF B3<1 THEN 570
    0x560163e873f0 ----------   00560 GOSUB 3300:A$=">!<":Z1=R1:B4=R1:Z2=R2:B5=R2: GOSUB 3320
    0x560163e87a60 ---------- T 00570 FOR I=1 TO S3: GOSUB 3300:A$=" * ":Z1=R1:Z2=R2: GOSUB 3320: NEXT I
    0x560163e87b00 ---------- T 00580 GOSUB 2460
    0x560163e88140 ---------- T 00590 IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
    0x560163e88460 ----------   00600 CLS : PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
    0x560163e88610 ----------   00610 PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
    0x560163e888a0 ----------   00620 PRINT " AND SHIELD CONTROL.": PRINT "IS PRESENTLY INCAPABLE OF CROSS";
    0x560163e88a50 ----------   00630 PRINT "-CIRUITING TO ENGINE ROOM!!": GOTO 2330
    0x560163e88cf0 ----------   00640 PRINT "YOUR ORDERS, CAPTAIN ";NA$;: INPUT A$
    0x560163e89540 ----------   00650 FOR I=1 TO 9: IF LEFT$ (A$,3)<> MID$ (A1$,3*I-2,3) THEN 670
    0x560163e89be0 ----------   00660 ON I GOTO 770,580,1410,1490,1680,1990,2070,2680,2360
    0x560163e89e10 ---------- T 00670 NEXT I: CLS : PRINT "ENTER ONE OF THE FOLOWING:"
    0x560163e89f60 ----------   00680 PRINT " NAV(TO SET COURSE)"
    0x560163e8a0c0 ----------   00690 PRINT " SRS(FOR SHORT RANGE SENSOR SCAN)"
    0x560163e8a210 ----------   00700 PRINT " LRS(FOR LONG RANGE SENSOR SCAN)"
    0x560163e8a360 ----------   00710 PRINT " PHA(TO FIRE PHASERS)"
    0x560163e8a4c0 ----------   00720 PRINT " TOR(TO FIRE PHOTON TORPEDOES)"
    0x560163e8a620 ----------   00730 PRINT " SHE(TO RAISE OR LOWER SHIELDS)"
    0x560163e8a780 ----------   00740 PRINT " DAM(FOR DAMAGE CONTROAL REPORTS)"
    0x560163e8a8f0 ----------   00750 PRINT " COM(TO CALL ON LIBRARY-COMPUTER)"
    0x560163e8af00 ----------   00760 PRINT " XXX(TO RESIGN YOUR COMAND)": PRINT : GOTO 590
    0x560163e8b360 ---------- T 00770 INPUT "COURSE(0-9)";C1: IF C1=9 THEN C1=1
    0x560163e8b6d0 ----------   00780 IF C1>=1 AND C1<9 THEN 800
    0x560163e8b890 ----------   00790 PRINT " LT. SULU REPORTS, 'INCORECT COURSE DATA, SIR!'": GOTO 590
    0x560163e8bdf0 ---------- T 00800 X$="8": IF D(1)<0 THEN X$="0.2"
    0x560163e8c5b0 ----------   00810 PRINT "WARP FACTOR(0-";X$;")";: INPUT W1: IF D(1)<0 AND W1>.2 THEN 860
    0x560163e8c8f0 ----------   00820 IF W1>0 AND W1<=8 THEN 870
    0x560163e8caf0 ----------   00830 IF W1=0 THEN 590
    0x560163e8ce50 ----------   00840 PRINT " CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T TAKEWARP";W1;"!": GOTO 590
    0x560163e8d000 ---------- T 00860 PRINT "WARP ENGINES ARE DAMMAGED. MAXIMUM SPEED=WARP 0.2": GOTO 590
    0x560163e8d620 ---------- T 00870 N= INT(W1*8+.5): IF E-N>=0 THEN 940
    0x560163e8d7a0 ----------   00880 PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x560163e8dbf0 ----------   00890 PRINT TAB(23)"FOR MANUVERING AT WARP";W1;"!"
    0x560163e8e050 ----------   00900 IF S<N-E OR D(7)<0 THEN 590
    0x560163e8e320 ----------   00910 PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEDGES";S;"UNITS OF ENERGY"
    0x560163e8e580 ----------   00920 PRINT TAB(23)"PRESENTLY DEPLOYED TO SHIELDS."
    0x560163e8e610 ----------   00930 GOTO 590
    0x560163e8ea90 ---------- T 00940 FOR I=1 TO K3: IF K(I,3)=0 THEN 970
    0x560163e8f100 ----------   00950 A$=" ":Z1=K(I,1):Z2=K(I,2): GOSUB 3320: GOSUB 3300
    0x560163e8f710 ----------   00960 K(I,1)=Z1:K(I,2)=Z2:A$="+K+": GOSUB 3320
    0x560163e8fe50 ---------- T 00970 NEXT I: GOSUB 2220:D1=0:D6=W1: IF W1>=1 THEN D6=1
    0x560163e902a0 ----------   00980 FOR I=1 TO 8: IF D(I)>=0 THEN 1030
    0x560163e90b30 ----------   00990 D(I)=D(I)+D6: IF D(I)>-.1 AND D(I)<0 THEN D(I)=-.1: GOTO 1030
    0x560163e90d50 ----------   01000 IF D(I)<0 THEN 1030
    0x560163e911b0 ----------   01010 IF D1<>1 THEN D1=1: PRINT "DAMAGE CONTROL REPORT"
    0x560163e916b0 ----------   01020 PRINT TAB(8);:R1=I: GOSUB 3370: PRINT G2$;" REPAIR COMPLEATED"
    0x560163e919c0 ---------- T 01030 NEXT I: IF RND(0)>.2 THEN 1090
    0x560163e91e00 ----------   01040 R1= RND(8): IF RND(0)>=6 THEN 1070
    0x560163e92530 ----------   01050 Q(R1)=D(R1)-( RND(0)*5+1): PRINT "DAMAGE CONTROL REPORT:";
    0x560163e927f0 ----------   01060 GOSUB 3370: PRINT G2$;" DAMAGED": PRINT : GOTO 1090
    0x560163e92e20 ---------- T 01070 D(R1)=D(R1)+ RND(0)*3+1: PRINT "DAMAGE CONTROL REPORT:"
    0x560163e93090 ----------   01080 GOSUB 3370: PRINT G2$;" STATE OF REPAIR IMPROVED": PRINT 
    0x560163e93580 ---------- T 01090 A$=" ":Z1= INT(S1):Z2= INT(S2): GOSUB 3320
    0x560163e941b0 ----------   01100 X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1)):X=S1:Y=S2
    0x560163e94e00 ----------   01110 X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1)):Q4=Q1:Q5=Q2
    0x560163e95980 ----------   01120 FOR I=1 TO N:S1=S1+X1:S2=S2+X2: IF S1<1 OR S1>=9 OR S2<1 OR S2>=9 THEN 1210
    0x560163e96290 ----------   01130 S8= INT(S1)*24+ INT(S2)*3-26: IF MID$ (Q$,S8,2)=" " THEN 1160
    0x560163e96850 ----------   01140 S1= INT(S1-X1):S2= INT(S2-X2): PRINT "WARP ENGINES SHUT DOWN AT ";
    0x560163e96cb0 ----------   01150 PRINT "SECTOR";S1;",";S2;"DUE TO BAD NAVIGATION.": GOTO 1170
    0x560163e97070 ---------- T 01160 NEXT I:S1= INT(S1):S2= INT(S2)
    0x560163e97740 ---------- T 01170 A$="<*>":Z1= INT(S1):Z2= INT(S2): GOSUB 3320: GOSUB 1370:T8=1
    0x560163e97c30 ----------   01180 IF W1<1 THEN T8=.1* INT(10*W1)
    0x560163e98000 ----------   01190 T=T+T8: IF T>T0+T9 THEN 2330
    0x560163e980c0 ----------   01200 GOTO 580
    0x560163e99020 ---------- T 01210 X=8*Q1+X+N*X1:Y=8*Q2+Y+N*X2:Q1= INT(X/8):Q2= INT(Y/8):S1= INT(X-Q1*8)
    0x560163e99820 ----------   01220 S2= INT(Y-Q2*8): IF S1=0 THEN Q1=Q1-1:S1=8
    0x560163e99d30 ----------   01230 IF S2=0 THEN Q2=Q2-1:S2=8
    0x560163e9a4c0 ----------   01240 X5=0: IF Q1<1 THEN X5=1:Q1=1:S1=1
    0x560163e9aa80 ----------   01250 IF Q1>8 THEN X5=1:Q1=8:S1=8
    0x560163e9b040 ----------   01260 IF Q2<1 THEN X5=1:Q2=1:S2=1
    0x560163e9b5f0 ----------   01270 IF Q2>8 THEN X5=1:Q2=8:S2=8
    0x560163e9b7d0 ----------   01280 IF X5=0 THEN 1350
    0x560163e9b960 ----------   01290 PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMAND:"
    0x560163e9baf0 ----------   01300 PRINT " 'PREMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMITER"
    0x560163e9bc70 ----------   01310 PRINT " IS HEREBY *DENIED*. SHUT DOWN YOUR ENGINES.'"
    0x560163e9bdf0 ----------   01320 PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x560163e9c4b0 ----------   01330 PRINT "AT SECTOR";S1;",";S2;"OF QUADRENT";Q1;",";Q2;"'"
    0x560163e9c6d0 ----------   01340 IF T>T0+T9 THEN 2330
    0x560163e9cb60 ---------- T 01350 IF 8*Q1+Q2=8*Q4+Q5 THEN 1170
    0x560163e9ce20 ----------   01360 T=T+1: GOSUB 1370: GOTO 400
    0x560163e9d2c0 ----------   01370 E=E-N-10: IF E>=0 THEN RETURN 
    0x560163e9d430 ----------   01380 PRINT "SHIELD CONTROL SUPPLIES ENERGY TO COMPLEAT MANUVER."
    0x560163e9da30 ----------   01390 S=S+E:E=0: IF S<=0 THEN S=0
    0x560163e9da90 ----------   01400 RETURN 
    0x560163e9e6f0 ---------- T 01410 IF D(3)<0 THEN PRINT "LONG RANG SENSORES ARE INOPERABLE": GOTO 590
    0x560163e9ea60 ----------   01420 CLS : PRINT "LONG RANGE SCAN FOR QUADRANT";Q1;",";Q2
    0x560163e9ed50 ----------   01430 O1$="--------------------": PRINT O1$
    0x560163e9f9f0 ----------   01440 FOR I=Q1-1 TO Q1+1:N(1)=-1:N(2)=-1:N(3)=-3: FOR J=Q2-1 TO Q2+1
    0x560163ea06c0 ----------   01450 IF I>0 AND I<9 AND J>0 AND J<9 THEN N(J-Q2+2)=G(I,J):Z(I,J)=G(I,J)
    0x560163ea0ed0 ----------   01460 NEXT J: FOR L=1 TO 3: PRINT ": ";: IF N(L)<0 THEN PRINT "*** ";: GOTO 1480
    0x560163ea1450 ----------   01470 PRINT RIGHT$(STR$(N(L)+1000),3);" ";
    0x560163ea1800 ---------- T 01480 NEXT L: PRINT ":": PRINT O1$: NEXT I: GOTO 590
    0x560163ea1c40 ---------- T 01490 CLS : PRINT : IF D(4)<0 THEN PRINT "PHASERS INOPERATIVE.": GOTO 590
    0x560163ea1e20 ----------   01500 IF K3>0 THEN 1530
    0x560163ea1fb0 ---------- T 01510 PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSORES SHOW NO ENEMY SHIPS"
    0x560163ea2280 ----------   01520 PRINT TAB(32)"IN THIS QUADRENT'": GOTO 590
    0x560163ea2600 ---------- T 01530 IF D(8)<0 THEN PRINT "COMPUTER FAILER HAMPERS ACCURACY"
    0x560163ea2790 ----------   01540 PRINT "PHASERS LOCKED ON TARGET; ";
    0x560163ea2a60 ---------- T 01550 PRINT "ENERGY AVAILABLE=";E;"UNITS"
    0x560163ea2d20 ----------   01560 INPUT "NUMBER OF UNITS TO DIVERT TO PHASER BANKS";X: IF X<=0 THEN 590
    0x560163ea2f90 ----------   01570 IF E-X<=0 THEN 1550
    0x560163ea3620 ----------   01580 E=E-X: IF D(7)<0 THEN X=X* RND(0)
    0x560163ea3d90 ----------   01590 H1= INT(X/K3): FOR I=1 TO 3: IF K(I,3)<=0 THEN 1670
    0x560163ea4680 ----------   01600 JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x560163ea4f40 ----------   01604 H= INT((H1/JH)*( RND(0)+2)): IF H>.15*K(I,3) THEN 1620
    0x560163ea5500 ----------   01610 PRINT "SENSORS SHOW NO DAMAGE TO ENEMY AT ";K(I,1);",";K(I,2): GOTO 1670
    0x560163ea5d70 ---------- T 01620 K(I,3)=K(I,3)-H: PRINT H;: PRINT "UNITS HIT ON KLINGON AT SECTOR";K(I,1);",";
    0x560163ea6380 ----------   01630 PRINT K(I,2): IF K(I,3)<=0 THEN PRINT "*** KLINGON DESTROYED ***": GOTO 1650
    0x560163ea6780 ----------   01640 PRINT " (SENSORS SHOW";K(I,3);"UNITS REMAINING)": GOTO 1670
    0x560163ea7190 ---------- T 01650 K3=K3-1:K9=K9-1:Z1=K(I,1):Z2=K(I,2):A$=" ": GOSUB 3320
    0x560163ea7b90 ----------   01660 K(I,3)=0:G(Q1,Q2)=G(Q1,Q2)-100:Z(Q1,Q2)=G(Q1,Q2): IF K9<=0 THEN 2430
    0x560163ea7cf0 ---------- T 01670 NEXT I: GOSUB 2220: GOTO 590
    0x560163ea7d50 ---------A T 01680 REM 
    0x560163ea80f0 ----------   01685 IF P<0 THEN PRINT "ALL PHOTON TORPEDOES EXPENDED.": GOTO 590
    0x560163ea84e0 ----------   01690 IF D(5)<0 THEN PRINT "PHOTON TUBES ARE NOT OPERATIONAL": GOTO 590
    0x560163ea88d0 ---------- T 01700 INPUT "PHOTON TORPEDO COURSE(1-9)";C1: IF C1=9 THEN C1=1
    0x560163ea8c40 ----------   01710 IF C1>=1 AND C1<9 THEN 1740
    0x560163ea8da0 ----------   01720 PRINT "ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x560163ea8e40 ----------   01730 GOTO 590
    0x560163ea9ab0 ---------- T 01740 X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1)):E=E-2:P=P-1
    0x560163eaa560 ----------   01750 X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1)):X=S1:Y=S2
    0x560163eaaea0 ---------- T 01770 X=X+X1:Y=Y+X2:X3= INT(X+.5):Y3= INT(Y+.5)
    0x560163eab4e0 ----------   01780 IF X3<1 OR X3>8 OR Y3<1 OR Y3>8 THEN 1980
    0x560163eab7e0 ----------   01785 PRINT @832, STRING$(63," ")
    0x560163eabf00 ----------   01790 PRINT @832,"TRACKING TORPEDO:";X3;",";Y3;:A$=" ":Z1=X:Z2=Y: GOSUB 3460
    0x560163eac120 ----------   01800 IF Z3<>0 THEN 1770
    0x560163eac1c0 ----------   01805 PRINT 
    0x560163eac780 ----------   01810 A$="+K+":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1860
    0x560163eace70 ----------   01820 PRINT "*** KLINGON DESTROYED ***":K3=K3-1:K9=K9-1: IF K9<=0 THEN 2430
    0x560163ead530 ----------   01830 FOR I=1 TO 3: IF X3=K(I,1) AND Y3=K(I,2) THEN 1850
    0x560163ead760 ----------   01840 NEXT I:I=3
    0x560163eada40 ---------- T 01850 K(I,3)=0: GOTO 1960
    0x560163eadff0 ---------- T 01860 A$=" * ":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1880
    0x560163eae4b0 ----------   01870 PRINT "STAR AT";X3;",";Y3;"ABSORBED TORPEDO ENERGY.": GOSUB 2220: GOTO 590
    0x560163eaea50 ---------- T 01880 A$=">!<":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1700
    0x560163eaef90 ----------   01890 PRINT "*** STARBASE DESTROYED ***":B3=B3-1:B9=B9-1
    0x560163eaf400 ----------   01900 IF B9>0 OR K9>T-10-T9 THEN 1940
    0x560163eaf5d0 ----------   01909 NA$="WALDO"
    0x560163eaf8b0 ----------   01910 PRINT "CAPTAIN ";NA$;" YOU ARE HEREBY RELIEVED OF COMMAND"
    0x560163eafa20 ----------   01920 PRINT "AND SENTENCED TO 99 STARDATES OF HARD LABOR ON CYGNUS 12!!"
    0x560163eafd10 ----------   01925 FOR II=1 TO 2500: NEXT 
    0x560163eafda0 ----------   01930 GOTO 2360
    0x560163eafef0 ---------- T 01940 PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x560163eb0200 ----------   01950 PRINT "COURT MARTIAL!":D=0
    0x560163eb0630 ---------- T 01960 Z1=X:Z2=Y:A$=" ": GOSUB 3320
    0x560163eb0e60 ----------   01970 G(Q1,Q2)=K3*100+B3*10+S3:Z(Q1,Q2)=G(Q1,Q2): GOSUB 2220: GOTO 590
    0x560163eb1090 ---------- T 01980 PRINT : PRINT "TORPEDO MISSED.": GOSUB 2220: GOTO 590
    0x560163eb1490 ---------- T 01990 IF D(7)<0 THEN PRINT "SHIELD CONTROL INOPERABLE.": GOTO 590
    0x560163eb1800 ----------   02000 PRINT "ENERGY ADVAILABLE=";E+S;: INPUT "NUMBER OF UNITS TO SHIELDS";X
    0x560163eb1c90 ----------   02010 IF X<0 OR S=X THEN PRINT "<SHIELDS REMAIN UNCHANGED>": GOTO 590
    0x560163eb1ec0 ----------   02020 IF X<=E+S THEN 2050
    0x560163eb21a0 ----------   02030 PRINT "CAPTAIN "NA$"! THIS IS NOT THE FEDERATION TREASURY."
    0x560163eb2350 ----------   02040 PRINT "<SHIELDS UNCHANGED>": GOTO 590
    0x560163eb2810 ---------- T 02050 E=E+S-X:S=X: PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x560163eb2b40 ----------   02060 PRINT " 'SHIELDS NOW AT"; INT(S);"UNITS PER UOUR COMAND.'"
    0x560163eb2e80 ----------   02065 FOR II=1 TO 1500: NEXT : CLS : GOSUB 2460: GOTO 590
    0x560163eb30f0 ---------- T 02070 IF D(6)>=0 THEN 2180
    0x560163eb33f0 ----------   02080 PRINT "DAMMAGE CONTROL REPORT NOT AVAILABLE": IF D=0 THEN 590
    0x560163eb3c60 ---------- T 02090 D3=0:FOR TI=1 TO 8: IF D(I)<0 THEN D3=D3+.1
    0x560163eb3ee0 ----------   02100 NEXT I: IF D3=0 THEN 590
    0x560163eb4420 ----------   02110 PRINT :D3=D3+D4: IF D3>=1 THEN D3=.9
    0x560163eb45c0 ----------   02120 PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP"
    0x560163eb4ab0 ----------   02130 PRINT "ESTIMATED TIME TO REPAIR:";.01* INT(100*D3);"STARDATES"
    0x560163eb4bc0 ----------   02140 INPUT "WILL YOU AUTHORIZE THE REPAIR ORDER(Y/N)";A$
    0x560163eb4d60 ----------   02150 IF A$<>Y THEN 590
    0x560163eb53b0 ----------   02160 FOR I=1 TO 8:IF HD(I)<0 THEN D(I)=0
    0x560163eb5740 ----------   02170 NEXT I:T=T+D3+.1
    0x560163eb5b30 ---------- T 02180 CLS : PRINT : PRINT "DEVICE STATE OF REPAIR": FOR R1=1 TO 8
    0x560163eb6270 ----------   02190 GOSUB 3370: PRINT G2$; LEFT$(Z$,25-LEN(G2$)); INT(D(R1)*100)*.01
    0x560163eb6510 ----------   02200 NEXT R1: PRINT : IF D0<>0 THEN 2090
    0x560163eb65a0 ----------   02210 GOTO 590
    0x560163eb67c0 ----------   02220 IF K3<=0 THEN RETURN 
    0x560163eb6af0 ----------   02230 IF D0<>0 THEN PRINT "STARBASE SHIELDS PROTECT THE ENTERPRISE": RETURN 
    0x560163eb6ff0 ----------   02240 FOR I=1 TO 3: IF K(I,3)<=0 THEN 2320
    0x560163eb77e0 ----------   02245 JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x560163eb8500 ----------   02250 H= INT((K(I,3)/JH)*(2+ RND(0))):S=S-H:K(I,3)=K(I,3)/(3+ RND(0))
    0x560163eb8aa0 ----------   02260 PRINT H;"UNITS HIT ON ENTERPRISE FROM SECTOR";K(I,1);",";K(I,2)
    0x560163eb8c80 ----------   02270 IF S<=0 THEN 2340
    0x560163eb90d0 ----------   02280 PRINT " <SHIELDS DOWN TO";S;"UNITS>": IF H<20 THEN 2320
    0x560163eb9570 ----------   02290 IF RND(0)>.6 OR H/S<=.02 THEN 2320
    0x560163eb9d00 ----------   02300 R1= RND(8):D(R1)=D(R1)-H/S-.5* RND(0): GOSUB 3370
    0x560163eb9f90 ----------   02310 PRINT "DAMAGE CONTROL REPORTS '";G2$;" DAMAGED BY THE HIT'"
    0x560163eba080 ---------- T 02320 NEXT I: RETURN 
    0x560163eba5c0 ---------- T 02330 PRINT "IT IS STARDATE";T: FOR I=1 TO 1500: NEXT I: GOTO 2360
    0x560163ebab70 ---------- T 02340 FOR I=1 TO 500: NEXT I: CLS : PRINT : PRINT "THE ENTERPRISE HAS BEEN DESTROYED.": PRINT "THE FEDERATION";
    0x560163ebad20 ----------   02350 PRINT " WILL BE CONQUERED": GOTO 2330
    0x560163ebb000 ---------- T 02360 CLS : PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
    0x560163ebb150 ----------   02370 PRINT "THE END OF YOUR MISSION."
    0x560163ebb3d0 ---------- T 02380 PRINT : PRINT : IF B9=0 THEN 2420
    0x560163ebb560 ----------   02390 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x560163ebb6f0 ----------   02400 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x560163ebb9b0 ----------   02410 INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$: IF A$="AYE" THEN 10
    0x560163ebba10 ---------A T 02420 END 
    0x560163ebbcf0 ----------   02425 T=100:B9=1
    0x560163ebbfe0 ---------- T 02430 FOR II=1 TO 1500: NEXT : CLS 
    0x560163ebc2c0 ----------   02435 PRINT @192,"CONGRATIONS, MON CAPITAN "NA$"! THE LAST KLINGON BATTLE"
    0x560163ebc5c0 ----------   02440 PRINT TAB(5)"CRUISER MENACING THE FEDERATION HAS BEEN DESTROYED!": PRINT 
    0x560163ebcc90 ----------   02450 PRINT TAB(10)"YOUR EFFICIENCY RATING IS";1000*(K7/(T-T0))^2: GOTO 2380
    0x560163ebd350 ---------B G 02460 FOR I=S1-1 TO S1+1: FOR J=S2-1 TO S2+1
    0x560163ebdeb0 ---------B   02470 IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 2490
    0x560163ebe450 ---------B   02480 A$=">!<":Z1=I:Z2=J: GOSUB 3460: IF Z3=1 THEN 2500
    0x560163ebe770 ---------B T 02490 NEXT J: NEXT I:D0=0: GOTO 2520
    0x560163ebedb0 ---------B T 02500 D0=1:C$="DOCKED":E=E0:P=P0
    0x560163ebf3d0 ---------B   02510 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES": FOR IX=1 TO 1500: NEXT IX:S=0: GOTO 2540
    0x560163ebf760 ---------B T 02520 IF K3>0 THEN C$="*RED*": GOTO 2540
    0x560163ebfc90 ----------   02530 C$="GREEN": IF E<E0*.1 THEN C$="YELLOW"
    0x560163ebff20 ---------B T 02540 IF D(2)>=0 THEN 2560
    0x560163ec04f0 ---------B   02550 IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS : PRINT 
    0x560163ec06b0 ---------B   02555 PRINT "*** SHORT RANGE SENSORS ARE OUT ***": PRINT : RETURN 
    0x560163ec0bc0 ---------B T 02560 CLS :O1$="---------------------------------": PRINT O1$: FOR I=1 TO 8
    0x560163ec1770 ---------B   02570 FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3: PRINT " "; MID$(Q$,J,3);: NEXT J
    0x560163ec1d90 ---------B   02580 ON I GOTO 2590,2600,2610,2620,2630,2640,2650,2660
    0x560163e9df10 ---------B T 02590 PRINT " STARDATE "; INT(T*10)*.1: GOTO 2670
    0x560163e9e120 ---------B T 02600 PRINT " CONDITION ";C$: GOTO 2670
    0x560163ec2f40 ---------B T 02610 PRINT " QUADRANT ";Q1;",";Q2: GOTO 2670
    0x560163ec32b0 ---------B T 02620 PRINT " SECTOR ";S1;",";S2: GOTO 2670
    0x560163ec3520 ---------B T 02630 PRINT " PHOTON TORPEDOES "; INT(P): GOTO 2670
    0x560163ec3830 ---------B T 02640 PRINT " TOTAL ENERGY "; INT(E+S): GOTO 2670
    0x560163ec3aa0 ---------B T 02650 PRINT " SHIELDS "; INT(S): GOTO 2670
    0x560163ec3cb0 ---------B T 02660 PRINT " KLINGONS REMAINING "; INT(K9)
    0x560163ec3e50 ---------B T 02670 NEXT I: PRINT O1$: RETURN 
    0x560163ec4290 ---------- T 02680 IF D(8)<0 THEN PRINT "COMPUTER DISABLED": GOTO 590
    0x560163ec4740 ---------- T 02690 INPUT "COMPUTER ACTIVE AND AWAITING A COMAND";A: IF A<0 OR A>4 THEN 2710
    0x560163ec4e20 ----------   02700 H8=1: ON A+1 GOTO 2810,2930,3010,3270,3070
    0x560163ec4fd0 ---------- T 02710 CLS : PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER."
    0x560163ec5120 ----------   02720 PRINT " 0=CUMULITIVE GALACTIVE RECORD"
    0x560163ec5260 ----------   02730 PRINT " 1=STATUS REPORT"
    0x560163ec53b0 ----------   02740 PRINT " 2=PHOTON TORPEDO DATA"
    0x560163ec5500 ----------   02750 PRINT " 3=STARBASE NAV DATA"
    0x560163ec5640 ----------   02760 PRINT " 4=DIRECTION/DISTANCE CALCULATOR"
    0x560163ec5730 ----------   02770 PRINT : GOTO 2690
    0x560163ec5cb0 ----------   02780 H8=0:G5=1: CLS : PRINT TAB(24)"THE GALAXY": GOTO 2840
    0x560163ec5e70 ---------- T 02810 PRINT : PRINT " ";
    0x560163ec61e0 ----------   02820 CLS : PRINT "COMPUTER RECORD OF GALAXY FOR QUADRENT";Q1;",";Q2
    0x560163ec6260 ----------   02830 PRINT 
    0x560163ec63c0 ---------- T 02840 PRINT " 1 2 3 4 5 6 7 8"
    0x560163ec65a0 ----------   02850 O1$=" ----- ----- ------ ------ ------ ------ ----- ------"
    0x560163ec6b50 ----------   02860 PRINT O1$: FOR I=1 TO 8: PRINT 1;: IF H8=0 THEN 2900
    0x560163ec72b0 ----------   02870 FOR J=1 TO 8: PRINT " ";: IF Z(I,J)=0 THEN PRINT "***";: GOTO 2890
    0x560163ec7690 ----------   02880 PRINT RIGHT$(STR$(Z(I,J)+1000),3);
    0x560163ec77e0 ---------- T 02890 NEXT J: GOTO 2920
    0x560163ec8080 ---------- T 02900 Z4=I:Z5=1: GOSUB 3490:J0= INT(15-.5* LEN(G2$)): PRINT TAB(J0);G2$;
    0x560163ec8800 ----------   02910 Z5=5: GOSUB 3490:J0= INT(39-.5* LEN /(G2$)): PRINT TAB(J0);G2$;
    0x560163ec89e0 ---------- T 02920 PRINT : NEXT I: PRINT : GOTO 590
    0x560163ec8fc0 ---------- T 02930 CLS : PRINT " STSTAS REPORT:":X$="": IF K9>1 THEN X$="S"
    0x560163ec9320 ----------   02940 PRINT "KLINGON";X$;" LEFT: ";K9
    0x560163ec9980 ----------   02950 PRINT "MISSION MUST BE COMPLEATED IN";.1* INT((T0+T9-T)*10),"STARDATES"
    0x560163ec9ff0 ----------   02960 X$="S": IF B9<2 THEN X$="": IF B9<1 THEN 2990
    0x560163eca410 ----------   02970 PRINT "THE FEDERATION IS MAINTAINING";B9;"STARBASE";X$;" IN THE GALAXY"
    0x560163eca6c0 ----------   02975 FOR IX=1 TO 1500: NEXT IX
    0x560163eca770 ----------   02980 GOTO 2070
    0x560163ecaa40 ---------- T 02990 PRINT "CAPTAIN "NA$"! YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN"
    0x560163ecaba0 ----------   03000 PRINT "IN THE GALAXY--YOU HAVE NO STARBASES LEFT!"
    0x560163ecae60 ----------   03005 FOR I=1 TO 2000: NEXT : GOTO 2070
    0x560163ecb010 ---------- T 03010 IF K3<=0 THEN 1510
    0x560163ecb4d0 ----------   03020 X$="": IF K3>1 THEN X$="S"
    0x560163ecb6c0 ----------   03030 PRINT "FROM ENTERPRISE TO KLINGON";X$
    0x560163ecbcd0 ----------   03040 H8=0: FOR I=1 TO 3: IF K(I,3)<=0 THEN 3260
    0x560163ecc130 ----------   03050 W1=K(I,1):X=K(I,2)
    0x560163ecc3e0 ---------- T 03060 C1=S1:A=S2: GOTO 3110
    0x560163ecc580 ---------- T 03070 CLS : PRINT "DIRECTION/DISTANCE CALCULATER:"
    0x560163eccb60 ----------   03080 PRINT "YOU ARE AT QUADRENT ";Q1;",";Q2;" SECTOR ";S1;",";S2
    0x560163ecced0 ----------   03090 PRINT "PLEASE ENTER":C1=Q1:A=Q2
    0x560163ecd040 ----------   03100 INPUT " DESTINATION COORDINATES(X,Y)";W1,X
    0x560163ecd560 ---------- T 03110 X=X-A:A=C1-W1: IF X<0 THEN 3190
    0x560163ecd720 ----------   03120 IF A<0 THEN 3210
    0x560163ecd8f0 ----------   03130 IF X>0 THEN 3150
    0x560163ecdc60 ----------   03140 IF A=0 THEN C1=5: GOTO 3160
    0x560163ecddd0 ---------- T 03150 C1=1
    0x560163ece0c0 ---------- T 03160 IF ABS(A)<= ABS(X) THEN 3180
    0x560163ece7e0 ----------   03170 PRINT "DIRECTION=";C1+((( ABS(A)- ABS(X))+ ABS(A))/ ABS(A));: GOTO 3250
    0x560163eced60 ---------- T 03180 PRINT "DIRECTION=";C1+( ABS(A)/( ABS(X)+.001));: GOTO 3250
    0x560163ecf0c0 ---------- T 03190 IF A>0 THEN C1=3: GOTO 3220
    0x560163ecf410 ----------   03200 IF X<>0 THEN C1=5: GOTO 3160
    0x560163ecf580 ---------- T 03210 C1=7
    0x560163ecf7f0 ---------- T 03220 IF ABS(A)>= ABS(X) THEN 3240
    0x560163ecff00 ----------   03230 PRINT "DIRECTION=";C1+((( ABS(X)- ABS(A))+ ABS(X))/ ABS(X));: GOTO 3250
    0x560163ed0310 ---------- T 03240 PRINT "DIRECTION=";C1+( ABS(X)/ ABS(A));
    0x560163ed0480 ---------- T 03250 PRINT "DISTANCE=";
    0x560163ed0ab0 ----------   03252 IF W1=B4 THEN PRINT SQR(X^2+A^2)/10: GOTO 3254
    0x560163ed0e30 ----------   03253 PRINT SQR(X^2+A^2)
    0x560163ed0fe0 ---------- T 03254 IF H8=1 THEN 590
    0x560163ed1140 ---------- T 03260 NEXT I: GOTO 590
    0x560163ed16b0 ---------- T 03270 IF B3<>0 THEN PRINT "FROM ENTERPRISE TO STAREBASE:":W1=B4:X=B5: GOTO 3060
    0x560163ed1820 ----------   03280 PRINT "MR SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS";
    0x560163ed19e0 ----------   03290 PRINT " QUADRANT '": GOTO 590
    0x560163ed22b0 ---------C B 03300 R1= RND(8):R2= RND(8):A$=" ":Z1=R1:Z2=R2: GOSUB 3460: IF Z3=0 THEN 3300
    0x560163ed2310 ---------C   03310 RETURN 
    0x560163ed2a40 ---------D G 03320 S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
    0x560163ed2da0 ---------D   03330 IF LEN(A$)<>3 THEN PRINT "ERROR": STOP 
    0x560163ed3270 ----------   03340 IF S8=1 THEN Q$=A$+ RIGHT$ (Q$,189): RETURN 
    0x560163ed3740 ----------   03350 IF S8=190 THEN Q$= LEFT$ (Q$,189)+A$: RETURN 
    0x560163ed3d60 ----------   03360 Q$= LEFT$ (Q$,S8-1)+A$+ RIGHT$ (Q$,190-S8): RETURN 
    0x560163ed4380 ---------E G 03370 ON R1 GOTO 3380,3390,3400,3410,3420,3430,3440,3450
    0x560163ed4540 ---------E T 03380 G2$="WARP ENGINES": RETURN 
    0x560163ed4730 ---------E T 03390 G2$="SHORT RANGE SCANNERS": RETURN 
    0x560163ed4920 ---------E T 03400 G2$="LONG RANGE SCANNERS": RETURN 
    0x560163ed4b00 ---------E T 03410 G2$="PHASER CONTROL": RETURN 
    0x560163ed4ce0 ---------E T 03420 G2$="PHOTON TUBES": RETURN 
    0x560163ed4ec0 ---------E T 03430 G2$="DAMMAGE CONTROL": RETURN 
    0x560163ed50a0 ---------E T 03440 G2$="SHIELD CONTROL": RETURN 
    0x560163ed5280 ---------E T 03450 G2$="LIBRARY-COMPUTER": RETURN 
    0x560163ed5f70 ---------F G 03460 Z1= INT(Z1+.5):Z2= INT(Z2+.5):S8=(Z2-1)*3+(Z1-1)*24+1:Z3=0
    0x560163ed6280 ---------F   03470 IF MID$(Q$,S8,3)<>A$ THEN RETURN 
    0x560163ed6430 ----------   03480 Z3=1: RETURN 
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

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x560163e70d10   0x560163e70d10   0x560163ed6430   0x560163ebba10 
   B) 0x560163ebd350   0x560163ebd350   0x560163ec06b0   0x560163ec3e50 
   C) 0x560163ed22b0   0x560163ed22b0   0x560163ed2310   0x560163ed2310 
   D) 0x560163ed2a40   0x560163ed2a40   0x000000000000   0x560163ed2da0 
   E) 0x560163ed4380   0x560163ed4380   0x560163ed4540   0x560163ed5280 
   F) 0x560163ed5f70   0x560163ed5f70   0x000000000000   0x560163ed6280 


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     04500 - 10000    5510 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/startrek/basic/startrek1.bas'
 *
    A              Integer 
    A$             String  
    A1$            String  
    ABS   Function Integer     args=1, int   
    B3             Integer 
    B4             Integer 
    B5             Integer 
    B9             Integer 
    C     Array    Integer     {0,10} {0,3} 
    C$             String  
    C1             Integer 
    D     Array    Float       {0,9} 
    D              Integer 
    D0             Integer 
    D1             Integer 
    D3             Float   
    D4             Float   
    D6             Integer 
    E              Integer 
    E0             Integer 
    G     Array    Integer     {0,9} {0,9} 
    G2$            String  
    G5             Integer 
    H              Integer 
    H1             Integer 
    H8             Integer 
    HD    Array    Integer     {0,10} 
    I              Integer 
    II             Integer 
    INT   Function Integer     args=1, float 
    IX             Integer 
    J              Integer 
    J0             Integer 
    JH             Integer 
    K     Array    Integer     {0,4} {0,4} 
    K3             Integer 
    K7             Integer 
    K9             Integer 
    L              Integer 
    LEFT$ Function String      args=2, char* int   
    LEN   Function Integer     args=1, char* 
    MID$  Function String      args=2, char* int   
    N     Array    Integer     {0,4} 
    N              Integer 
    NA$            String  
    O1$            String  
    P              Integer 
    P0             Integer 
    PEEK  Function Integer     args=1, int   
    PO             Integer 
    Q     Array    Float       {0,10} 
    Q$             String  
    Q1             Integer 
    Q2             Integer 
    Q4             Integer 
    Q5             Integer 
    R1             Integer 
    R2             Integer 
    RIGHT$ Function String      args=2, char* int   
    RND   Function Integer     args=1, int   
    S              Integer 
    S1             Integer 
    S2             Integer 
    S3             Integer 
    S8             Integer 
    S9             Integer 
    SQR   Function Integer     args=1, float 
    STR$  Function String      args=1, int   
    STRING$ Function String      args=2, int   int   
    T              Float   
    T0             Integer 
    T8             Integer 
    T9             Integer 
    TAB   Function String      args=1, 
    TI             Integer 
    W1             Integer 
    X              Integer 
    X$             String  
    X0$            String  
    X1             Integer 
    X2             Integer 
    X3             Integer 
    X5             Integer 
    Y              Integer 
    Y3             Integer 
    Z     Array    Integer     {0,9} {0,9} 
    Z$             String  
    Z1             Integer 
    Z2             Integer 
    Z3             Integer 
    Z4             Integer 
    Z5             Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/startrek/basic/startrek1.bas: 
 *
                   +----+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |    | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |    | |
        Address    v    v v Original BASIC statement
    -------------- ------ - ------------------------------------------------------------------------------
    0x560163e70d10 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x560163e70df0 ---------A   01010 REM trs1010 - TRS-80 Level II BASIC tokenized file
    0x560163e70eb0 ---------A T 01020 CLS 
    0x560163e70ff0 ---------A   01030 PRINT @210,"S U P E R S T A R T R E K"
    0x560163e71090 ---------A   01040 PRINT : PRINT 
    0x560163e71130 ---------A   01050 CLEAR 600
    0x560163e71370 ---------A   01060 Z$=" "
    0x560163e76230 ---------A   01070 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8): RANDOM 
    0x560163e773b0 ---------A   01080 T= INT( RND(0)*20+20)*100:T0=T:T9=25+ INT( RND(0)*10):D0=0:E=3000:E0=E
    0x560163e782b0 ---------A   01090 P=10:PO=P:S9=200:S=0:B9=0:K9=0:X$="":X0$=" IS "
    0x560163e78bb0 ---------A   01100 Q1= RND(8):Q2= RND(8):S1= RND(8):S2= RND(8)
    0x560163e79380 ---------A   01110 FOR I=1 TO 9:C(I,1)=0:C(I,2)=0: NEXT I
    0x560163e7a370 ---------A   01120 C(3,1)=-1:C(2,1)=-1:C(4,1)=-1:C(4,2)=-1:C(5,2)=-1:C(6,2)=-1
    0x560163e7b560 ---------A   01130 C(1,2)=1:C(2,2)=1:C(6,1)=1:C(7,1)=1:C(8,1)=1:C(8,2)=1:C(9,2)=1
    0x560163e7b9c0 ---------A   01140 FOR I=1 TO 8:D(I)=0: NEXT I
    0x560163e7bc30 ---------A   01150 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    0x560163e7c700 ---------A   01160 FOR I=1 TO 8: FOR J=1 TO 8:K3=0:Z(I,J)=0:R1= RND(0)
    0x560163e7cd80 ---------A   01170 IF R1>.98 THEN K3=3:K9=K9+3: GOTO 1200
    0x560163e7d2d0 ----------   01180 IF R1>.95 THEN K3=2:K9=K9+2: GOTO 1200
    0x560163e7d7e0 ----------   01190 IF R1>.8 THEN K3=1:K9=K9+1
    0x560163e7df80 ---------A T 01200 B3=0: IF RND(0)>.96 THEN B3=1:B9=B9+1
    0x560163e7e990 ---------A   01210 G(I,J)=K3*100+B3*10+ RND(8): NEXT J: NEXT I: IF K9>T9 THEN T9=K9+1
    0x560163e7eb70 ----------   01220 IF B9<>0 THEN 1250
    0x560163e7f380 ----------   01230 IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100:K9=K9+1
    0x560163e7fbe0 ----------   01240 B9=1:G(Q1,Q2)=G(Q1,Q2)+10:Q1= RND(8):Q2= RND(8)
    0x560163e80230 ---------- T 01250 K7=K9: IF B9<>1 THEN X$="S":X0$=" ARE "
    0x560163e803a0 ----------   01260 PRINT "YOUR ORDERS ARE AS FOLLOWES:"
    0x560163e80670 ----------   01270 PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
    0x560163e80800 ----------   01280 PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x560163e80d50 ----------   01290 PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
    0x560163e81190 ----------   01300 PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
    0x560163e81390 ----------   01310 PRINT : INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
    0x560163e822e0 ---------- T 01320 Z4=Q1:Z5=Q2:K3=0:B3=0:S3=0:G5=0:D4=.5* RND(0):Z(Q1,Q2)=G(Q1,Q2)
    0x560163e82b20 ----------   01330 IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 1400
    0x560163e82ba0 ---------A   01340 REM 
    0x560163e833b0 ----------   01350 K3= INT(G(Q1,Q2)*.01):B3= INT(G(Q1,Q2)*.1)-10*K3
    0x560163e83a60 ----------   01360 S3=G(Q1,Q2)-100*K3-10*B3: IF K3=0 THEN 1390
    0x560163e83da0 ----------   01370 CLS : PRINT @396,"COMBAT AREA CONDITION RED": IF S>200 THEN 1390
    0x560163e83f10 ----------   01380 PRINT @463,"SHIELDS DANGEROUSLY LOW"
    0x560163e84660 ---------- T 01390 FOR I=1 TO 3:K(I,1)=0:K(I,2)=0: NEXT I
    0x560163e85350 ---------- T 01400 FOR I=1 TO 3:K(I,3)=0: NEXT I:Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
    0x560163e85a70 ----------   01410 A$="<*>":Z1=S1:Z2=S2: GOSUB 3320: IF K3<1 THEN 1440
    0x560163e860e0 ----------   01420 FOR I=1 TO K3: GOSUB 3300:A$="+K+":Z1=R1:Z2=R2
    0x560163e86a60 ----------   01430 GOSUB 3320:K(I,1)=R1:K(I,1)=R2:K(I,3)=S9*(.5+ RND(0)): NEXT I
    0x560163e86c50 ---------- T 01440 IF B3<1 THEN 1460
    0x560163e873f0 ----------   01450 GOSUB 3300:A$=">!<":Z1=R1:B4=R1:Z2=R2:B5=R2: GOSUB 4370
    0x560163e87a60 ---------- T 01460 FOR I=1 TO S3: GOSUB 3300:A$=" * ":Z1=R1:Z2=R2: GOSUB 3320: NEXT I
    0x560163e87b00 ---------- T 01470 GOSUB 4130
    0x560163e88140 ---------- T 01480 IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
    0x560163e88460 ----------   01490 CLS : PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
    0x560163e88610 ----------   01500 PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
    0x560163e888a0 ----------   01510 PRINT " AND SHIELD CONTROL.": PRINT "IS PRESENTLY INCAPABLE OF CROSS";
    0x560163e88a50 ----------   01520 PRINT "-CIRUITING TO ENGINE ROOM!!": GOTO 3280
    0x560163e88cf0 ----------   01530 PRINT "YOUR ORDERS, CAPTAIN ";NA$;: INPUT A$
    0x560163e89540 ----------   01540 FOR I=1 TO 9: IF LEFT$ (A$,3)<> MID$ (A1$,3*I-2,3) THEN 1560
    0x560163e89be0 ----------   01550 ON I GOTO 1660,1470,2290,2370,2580,2920,3010,3440,3310
    0x560163e89e10 ---------- T 01560 NEXT I: CLS : PRINT "ENTER ONE OF THE FOLOWING:"
    0x560163e89f60 ----------   01570 PRINT " NAV(TO SET COURSE)"
    0x560163e8a0c0 ----------   01580 PRINT " SRS(FOR SHORT RANGE SENSOR SCAN)"
    0x560163e8a210 ----------   01590 PRINT " LRS(FOR LONG RANGE SENSOR SCAN)"
    0x560163e8a360 ----------   01600 PRINT " PHA(TO FIRE PHASERS)"
    0x560163e8a4c0 ----------   01610 PRINT " TOR(TO FIRE PHOTON TORPEDOES)"
    0x560163e8a620 ----------   01620 PRINT " SHE(TO RAISE OR LOWER SHIELDS)"
    0x560163e8a780 ----------   01630 PRINT " DAM(FOR DAMAGE CONTROAL REPORTS)"
    0x560163e8a8f0 ----------   01640 PRINT " COM(TO CALL ON LIBRARY-COMPUTER)"
    0x560163e8af00 ----------   01650 PRINT " XXX(TO RESIGN YOUR COMAND)": PRINT : GOTO 1480
    0x560163e8b360 ---------- T 01660 INPUT "COURSE(0-9)";C1: IF C1=9 THEN C1=1
    0x560163e8b6d0 ----------   01670 IF C1>=1 AND C1<9 THEN 1690
    0x560163e8b890 ----------   01680 PRINT " LT. SULU REPORTS, 'INCORECT COURSE DATA, SIR!'": GOTO 1480
    0x560163e8bdf0 ---------- T 01690 X$="8": IF D(1)<0 THEN X$="0.2"
    0x560163e8c5b0 ----------   01700 PRINT "WARP FACTOR(0-";X$;")";: INPUT W1: IF D(1)<0 AND W1>.2 THEN 1740
    0x560163e8c8f0 ----------   01710 IF W1>0 AND W1<=8 THEN 1750
    0x560163e8caf0 ----------   01720 IF W1=0 THEN 1480
    0x560163e8ce50 ----------   01730 PRINT " CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T TAKEWARP";W1;"!": GOTO 1480
    0x560163e8d000 ---------- T 01740 PRINT "WARP ENGINES ARE DAMMAGED. MAXIMUM SPEED=WARP 0.2": GOTO 1480
    0x560163e8d620 ---------- T 01750 N= INT(W1*8+.5): IF E-N>=0 THEN 1820
    0x560163e8d7a0 ----------   01760 PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x560163e8dbf0 ----------   01770 PRINT TAB(23)"FOR MANUVERING AT WARP";W1;"!"
    0x560163e8e050 ----------   01780 IF S<N-E OR D(7)<0 THEN 1480
    0x560163e8e320 ----------   01790 PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEDGES";S;"UNITS OF ENERGY"
    0x560163e8e580 ----------   01800 PRINT TAB(23)"PRESENTLY DEPLOYED TO SHIELDS."
    0x560163e8e610 ----------   01810 GOTO 1480
    0x560163e8ea90 ---------- T 01820 FOR I=1 TO K3: IF K(I,3)=0 THEN 1850
    0x560163e8f100 ----------   01830 A$=" ":Z1=K(I,1):Z2=K(I,2): GOSUB 3320: GOSUB 4350
    0x560163e8f710 ----------   01840 K(I,1)=Z1:K(I,2)=Z2:A$="+K+": GOSUB 4370
    0x560163e8fe50 ---------- T 01850 NEXT I: GOSUB 2220:D1=0:D6=W1: IF W1>=1 THEN D6=1
    0x560163e902a0 ----------   01860 FOR I=1 TO 8: IF D(I)>=0 THEN 1910
    0x560163e90b30 ----------   01870 D(I)=D(I)+D6: IF D(I)>-.1 AND D(I)<0 THEN D(I)=-.1: GOTO 1910
    0x560163e90d50 ----------   01880 IF D(I)<0 THEN 1910
    0x560163e911b0 ----------   01890 IF D1<>1 THEN D1=1: PRINT "DAMAGE CONTROL REPORT"
    0x560163e916b0 ----------   01900 PRINT TAB(8);:R1=I: GOSUB 3370: PRINT G2$;" REPAIR COMPLEATED"
    0x560163e919c0 ---------- T 01910 NEXT I: IF RND(0)>.2 THEN 1970
    0x560163e91e00 ----------   01920 R1= RND(8): IF RND(0)>=6 THEN 1950
    0x560163e92530 ----------   01930 Q(R1)=D(R1)-( RND(0)*5+1): PRINT "DAMAGE CONTROL REPORT:";
    0x560163e927f0 ----------   01940 GOSUB 3370: PRINT G2$;" DAMAGED": PRINT : GOTO 1970
    0x560163e92e20 ---------- T 01950 D(R1)=D(R1)+ RND(0)*3+1: PRINT "DAMAGE CONTROL REPORT:"
    0x560163e93090 ----------   01960 GOSUB 3370: PRINT G2$;" STATE OF REPAIR IMPROVED": PRINT 
    0x560163e93580 ---------- T 01970 A$=" ":Z1= INT(S1):Z2= INT(S2): GOSUB 4370
    0x560163e941b0 ----------   01980 X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1)):X=S1:Y=S2
    0x560163e94e00 ----------   01990 X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1)):Q4=Q1:Q5=Q2
    0x560163e95980 ----------   02000 FOR I=1 TO N:S1=S1+X1:S2=S2+X2: IF S1<1 OR S1>=9 OR S2<1 OR S2>=9 THEN 2090
    0x560163e96290 ----------   02010 S8= INT(S1)*24+ INT(S2)*3-26: IF MID$ (Q$,S8,2)=" " THEN 2040
    0x560163e96850 ----------   02020 S1= INT(S1-X1):S2= INT(S2-X2): PRINT "WARP ENGINES SHUT DOWN AT ";
    0x560163e96cb0 ----------   02030 PRINT "SECTOR";S1;",";S2;"DUE TO BAD NAVIGATION.": GOTO 2050
    0x560163e97070 ---------- T 02040 NEXT I:S1= INT(S1):S2= INT(S2)
    0x560163e97740 ---------- T 02050 A$="<*>":Z1= INT(S1):Z2= INT(S2): GOSUB 3320: GOSUB 1370:T8=1
    0x560163e97c30 ----------   02060 IF W1<1 THEN T8=.1* INT(10*W1)
    0x560163e98000 ----------   02070 T=T+T8: IF T>T0+T9 THEN 3280
    0x560163e980c0 ----------   02080 GOTO 1470
    0x560163e99020 ---------- T 02090 X=8*Q1+X+N*X1:Y=8*Q2+Y+N*X2:Q1= INT(X/8):Q2= INT(Y/8):S1= INT(X-Q1*8)
    0x560163e99820 ----------   02100 S2= INT(Y-Q2*8): IF S1=0 THEN Q1=Q1-1:S1=8
    0x560163e99d30 ----------   02110 IF S2=0 THEN Q2=Q2-1:S2=8
    0x560163e9a4c0 ----------   02120 X5=0: IF Q1<1 THEN X5=1:Q1=1:S1=1
    0x560163e9aa80 ----------   02130 IF Q1>8 THEN X5=1:Q1=8:S1=8
    0x560163e9b040 ----------   02140 IF Q2<1 THEN X5=1:Q2=1:S2=1
    0x560163e9b5f0 ----------   02150 IF Q2>8 THEN X5=1:Q2=8:S2=8
    0x560163e9b7d0 ----------   02160 IF X5=0 THEN 2230
    0x560163e9b960 ----------   02170 PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMAND:"
    0x560163e9baf0 ----------   02180 PRINT " 'PREMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMITER"
    0x560163e9bc70 ----------   02190 PRINT " IS HEREBY *DENIED*. SHUT DOWN YOUR ENGINES.'"
    0x560163e9bdf0 ----------   02200 PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x560163e9c4b0 ----------   02210 PRINT "AT SECTOR";S1;",";S2;"OF QUADRENT";Q1;",";Q2;"'"
    0x560163e9c6d0 ----------   02220 IF T>T0+T9 THEN 3280
    0x560163e9cb60 ---------- T 02230 IF 8*Q1+Q2=8*Q4+Q5 THEN 2050
    0x560163e9ce20 ----------   02240 T=T+1: GOSUB 1370: GOTO 1320
    0x560163e9d2c0 ----------   02250 E=E-N-10: IF E>=0 THEN RETURN 
    0x560163e9d430 ----------   02260 PRINT "SHIELD CONTROL SUPPLIES ENERGY TO COMPLEAT MANUVER."
    0x560163e9da30 ----------   02270 S=S+E:E=0: IF S<=0 THEN S=0
    0x560163e9da90 ----------   02280 RETURN 
    0x560163e9e6f0 ---------- T 02290 IF D(3)<0 THEN PRINT "LONG RANG SENSORES ARE INOPERABLE": GOTO 1480
    0x560163e9ea60 ----------   02300 CLS : PRINT "LONG RANGE SCAN FOR QUADRANT";Q1;",";Q2
    0x560163e9ed50 ----------   02310 O1$="--------------------": PRINT O1$
    0x560163e9f9f0 ----------   02320 FOR I=Q1-1 TO Q1+1:N(1)=-1:N(2)=-1:N(3)=-3: FOR J=Q2-1 TO Q2+1
    0x560163ea06c0 ----------   02330 IF I>0 AND I<9 AND J>0 AND J<9 THEN N(J-Q2+2)=G(I,J):Z(I,J)=G(I,J)
    0x560163ea0ed0 ----------   02340 NEXT J: FOR L=1 TO 3: PRINT ": ";: IF N(L)<0 THEN PRINT "*** ";: GOTO 2360
    0x560163ea1450 ----------   02350 PRINT RIGHT$(STR$(N(L)+1000),3);" ";
    0x560163ea1800 ---------- T 02360 NEXT L: PRINT ":": PRINT O1$: NEXT I: GOTO 1480
    0x560163ea1c40 ---------- T 02370 CLS : PRINT : IF D(4)<0 THEN PRINT "PHASERS INOPERATIVE.": GOTO 1480
    0x560163ea1e20 ----------   02380 IF K3>0 THEN 2410
    0x560163ea1fb0 ---------- T 02390 PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSORES SHOW NO ENEMY SHIPS"
    0x560163ea2280 ----------   02400 PRINT TAB(32)"IN THIS QUADRENT'": GOTO 1480
    0x560163ea2600 ---------- T 02410 IF D(8)<0 THEN PRINT "COMPUTER FAILER HAMPERS ACCURACY"
    0x560163ea2790 ----------   02420 PRINT "PHASERS LOCKED ON TARGET; ";
    0x560163ea2a60 ---------- T 02430 PRINT "ENERGY AVAILABLE=";E;"UNITS"
    0x560163ea2d20 ----------   02440 INPUT "NUMBER OF UNITS TO DIVERT TO PHASER BANKS";X: IF X<=0 THEN 1480
    0x560163ea2f90 ----------   02450 IF E-X<=0 THEN 2430
    0x560163ea3620 ----------   02460 E=E-X: IF D(7)<0 THEN X=X* RND(0)
    0x560163ea3d90 ----------   02470 H1= INT(X/K3): FOR I=1 TO 3: IF K(I,3)<=0 THEN 2560
    0x560163ea4680 ----------   02480 JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x560163ea4f40 ----------   02490 H= INT((H1/JH)*( RND(0)+2)): IF H>.15*K(I,3) THEN 2510
    0x560163ea5500 ----------   02500 PRINT "SENSORS SHOW NO DAMAGE TO ENEMY AT ";K(I,1);",";K(I,2): GOTO 2560
    0x560163ea5d70 ---------- T 02510 K(I,3)=K(I,3)-H: PRINT H;: PRINT "UNITS HIT ON KLINGON AT SECTOR";K(I,1);",";
    0x560163ea6380 ----------   02520 PRINT K(I,2): IF K(I,3)<=0 THEN PRINT "*** KLINGON DESTROYED ***": GOTO 2540
    0x560163ea6780 ----------   02530 PRINT " (SENSORS SHOW";K(I,3);"UNITS REMAINING)": GOTO 2560
    0x560163ea7190 ---------- T 02540 K3=K3-1:K9=K9-1:Z1=K(I,1):Z2=K(I,2):A$=" ": GOSUB 4370
    0x560163ea7b90 ----------   02550 K(I,3)=0:G(Q1,Q2)=G(Q1,Q2)-100:Z(Q1,Q2)=G(Q1,Q2): IF K9<=0 THEN 3390
    0x560163ea7cf0 ---------- T 02560 NEXT I: GOSUB 2220: GOTO 1480
    0x560163ea7d50 ---------A   02570 REM 
    0x560163ea80f0 ---------- T 02580 IF P<0 THEN PRINT "ALL PHOTON TORPEDOES EXPENDED.": GOTO 1480
    0x560163ea84e0 ----------   02590 IF D(5)<0 THEN PRINT "PHOTON TUBES ARE NOT OPERATIONAL": GOTO 1480
    0x560163ea88d0 ---------- T 02600 INPUT "PHOTON TORPEDO COURSE(1-9)";C1: IF C1=9 THEN C1=1
    0x560163ea8c40 ----------   02610 IF C1>=1 AND C1<9 THEN 2640
    0x560163ea8da0 ----------   02620 PRINT "ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x560163ea8e40 ----------   02630 GOTO 1480
    0x560163ea9ab0 ---------- T 02640 X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1)):E=E-2:P=P-1
    0x560163eaa560 ----------   02650 X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1)):X=S1:Y=S2
    0x560163eaaea0 ---------- T 02660 X=X+X1:Y=Y+X2:X3= INT(X+.5):Y3= INT(Y+.5)
    0x560163eab4e0 ----------   02670 IF X3<1 OR X3>8 OR Y3<1 OR Y3>8 THEN 2910
    0x560163eab7e0 ----------   02680 PRINT @832, STRING$(63," ")
    0x560163eabf00 ----------   02690 PRINT @832,"TRACKING TORPEDO:";X3;",";Y3;:A$=" ":Z1=X:Z2=Y: GOSUB 4480
    0x560163eac120 ----------   02700 IF Z3<>0 THEN 2660
    0x560163eac1c0 ----------   02710 PRINT 
    0x560163eac780 ----------   02720 A$="+K+":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 2770
    0x560163eace70 ----------   02730 PRINT "*** KLINGON DESTROYED ***":K3=K3-1:K9=K9-1: IF K9<=0 THEN 3390
    0x560163ead530 ----------   02740 FOR I=1 TO 3: IF X3=K(I,1) AND Y3=K(I,2) THEN 2760
    0x560163ead760 ----------   02750 NEXT I:I=3
    0x560163eada40 ---------- T 02760 K(I,3)=0: GOTO 2890
    0x560163eadff0 ---------- T 02770 A$=" * ":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 2790
    0x560163eae4b0 ----------   02780 PRINT "STAR AT";X3;",";Y3;"ABSORBED TORPEDO ENERGY.": GOSUB 2220: GOTO 1480
    0x560163eaea50 ---------- T 02790 A$=">!<":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 2600
    0x560163eaef90 ----------   02800 PRINT "*** STARBASE DESTROYED ***":B3=B3-1:B9=B9-1
    0x560163eaf400 ----------   02810 IF B9>0 OR K9>T-10-T9 THEN 2870
    0x560163eaf5d0 ----------   02820 NA$="WALDO"
    0x560163eaf8b0 ----------   02830 PRINT "CAPTAIN ";NA$;" YOU ARE HEREBY RELIEVED OF COMMAND"
    0x560163eafa20 ----------   02840 PRINT "AND SENTENCED TO 99 STARDATES OF HARD LABOR ON CYGNUS 12!!"
    0x560163eafd10 ----------   02850 FOR II=1 TO 2500: NEXT 
    0x560163eafda0 ----------   02860 GOTO 3310
    0x560163eafef0 ---------- T 02870 PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x560163eb0200 ----------   02880 PRINT "COURT MARTIAL!":D=0
    0x560163eb0630 ---------- T 02890 Z1=X:Z2=Y:A$=" ": GOSUB 4370
    0x560163eb0e60 ----------   02900 G(Q1,Q2)=K3*100+B3*10+S3:Z(Q1,Q2)=G(Q1,Q2): GOSUB 2220: GOTO 1480
    0x560163eb1090 ---------- T 02910 PRINT : PRINT "TORPEDO MISSED.": GOSUB 2220: GOTO 1480
    0x560163eb1490 ---------- T 02920 IF D(7)<0 THEN PRINT "SHIELD CONTROL INOPERABLE.": GOTO 1480
    0x560163eb1800 ----------   02930 PRINT "ENERGY ADVAILABLE=";E+S;: INPUT "NUMBER OF UNITS TO SHIELDS";X
    0x560163eb1c90 ----------   02940 IF X<0 OR S=X THEN PRINT "<SHIELDS REMAIN UNCHANGED>": GOTO 1480
    0x560163eb1ec0 ----------   02950 IF X<=E+S THEN 2980
    0x560163eb21a0 ----------   02960 PRINT "CAPTAIN "NA$"! THIS IS NOT THE FEDERATION TREASURY."
    0x560163eb2350 ----------   02970 PRINT "<SHIELDS UNCHANGED>": GOTO 1480
    0x560163eb2810 ---------- T 02980 E=E+S-X:S=X: PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x560163eb2b40 ----------   02990 PRINT " 'SHIELDS NOW AT"; INT(S);"UNITS PER UOUR COMAND.'"
    0x560163eb2e80 ----------   03000 FOR II=1 TO 1500: NEXT : CLS : GOSUB 2460: GOTO 1480
    0x560163eb30f0 ---------- T 03010 IF D(6)>=0 THEN 3120
    0x560163eb33f0 ----------   03020 PRINT "DAMMAGE CONTROL REPORT NOT AVAILABLE": IF D=0 THEN 1480
    0x560163eb3c60 ---------- T 03030 D3=0:FOR TI=1 TO 8: IF D(I)<0 THEN D3=D3+.1
    0x560163eb3ee0 ----------   03040 NEXT I: IF D3=0 THEN 1480
    0x560163eb4420 ----------   03050 PRINT :D3=D3+D4: IF D3>=1 THEN D3=.9
    0x560163eb45c0 ----------   03060 PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP"
    0x560163eb4ab0 ----------   03070 PRINT "ESTIMATED TIME TO REPAIR:";.01* INT(100*D3);"STARDATES"
    0x560163eb4bc0 ----------   03080 INPUT "WILL YOU AUTHORIZE THE REPAIR ORDER(Y/N)";A$
    0x560163eb4d60 ----------   03090 IF A$<>Y THEN 1480
    0x560163eb53b0 ----------   03100 FOR I=1 TO 8:IF HD(I)<0 THEN D(I)=0
    0x560163eb5740 ----------   03110 NEXT I:T=T+D3+.1
    0x560163eb5b30 ---------- T 03120 CLS : PRINT : PRINT "DEVICE STATE OF REPAIR": FOR R1=1 TO 8
    0x560163eb6270 ----------   03130 GOSUB 3370: PRINT G2$; LEFT$(Z$,25-LEN(G2$)); INT(D(R1)*100)*.01
    0x560163eb6510 ----------   03140 NEXT R1: PRINT : IF D0<>0 THEN 3030
    0x560163eb65a0 ----------   03150 GOTO 1480
    0x560163eb67c0 ----------   03160 IF K3<=0 THEN RETURN 
    0x560163eb6af0 ----------   03170 IF D0<>0 THEN PRINT "STARBASE SHIELDS PROTECT THE ENTERPRISE": RETURN 
    0x560163eb6ff0 ----------   03180 FOR I=1 TO 3: IF K(I,3)<=0 THEN 3270
    0x560163eb77e0 ----------   03190 JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x560163eb8500 ----------   03200 H= INT((K(I,3)/JH)*(2+ RND(0))):S=S-H:K(I,3)=K(I,3)/(3+ RND(0))
    0x560163eb8aa0 ----------   03210 PRINT H;"UNITS HIT ON ENTERPRISE FROM SECTOR";K(I,1);",";K(I,2)
    0x560163eb8c80 ----------   03220 IF S<=0 THEN 3290
    0x560163eb90d0 ----------   03230 PRINT " <SHIELDS DOWN TO";S;"UNITS>": IF H<20 THEN 3270
    0x560163eb9570 ----------   03240 IF RND(0)>.6 OR H/S<=.02 THEN 3270
    0x560163eb9d00 ----------   03250 R1= RND(8):D(R1)=D(R1)-H/S-.5* RND(0): GOSUB 4390
    0x560163eb9f90 ----------   03260 PRINT "DAMAGE CONTROL REPORTS '";G2$;" DAMAGED BY THE HIT'"
    0x560163eba080 ---------- T 03270 NEXT I: RETURN 
    0x560163eba5c0 ---------- T 03280 PRINT "IT IS STARDATE";T: FOR I=1 TO 1500: NEXT I: GOTO 3310
    0x560163ebab70 ---------- T 03290 FOR I=1 TO 500: NEXT I: CLS : PRINT : PRINT "THE ENTERPRISE HAS BEEN DESTROYED.": PRINT "THE FEDERATION";
    0x560163ebad20 ----------   03300 PRINT " WILL BE CONQUERED": GOTO 3280
    0x560163ebb000 ---------- T 03310 CLS : PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
    0x560163ebb150 ----------   03320 PRINT "THE END OF YOUR MISSION."
    0x560163ebb3d0 ---------- T 03330 PRINT : PRINT : IF B9=0 THEN 3370
    0x560163ebb560 ----------   03340 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x560163ebb6f0 ----------   03350 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x560163ebb9b0 ----------   03360 INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$: IF A$="AYE" THEN 1020
    0x560163ebba10 ---------A T 03370 END 
    0x560163ebbcf0 ----------   03380 T=100:B9=1
    0x560163ebbfe0 ---------- T 03390 FOR II=1 TO 1500: NEXT : CLS 
    0x560163ebc2c0 ----------   03400 PRINT @192,"CONGRATIONS, MON CAPITAN "NA$"! THE LAST KLINGON BATTLE"
    0x560163ebc5c0 ----------   03410 PRINT TAB(5)"CRUISER MENACING THE FEDERATION HAS BEEN DESTROYED!": PRINT 
    0x560163ebcc90 ----------   03420 PRINT TAB(10)"YOUR EFFICIENCY RATING IS";1000*(K7/(T-T0))^2: GOTO 3330
    0x560163ebfc90 ----------   03430 C$="GREEN": IF E<E0*.1 THEN C$="YELLOW"
    0x560163ec4290 ---------- T 03440 IF D(8)<0 THEN PRINT "COMPUTER DISABLED": GOTO 1480
    0x560163ec4740 ---------- T 03450 INPUT "COMPUTER ACTIVE AND AWAITING A COMAND";A: IF A<0 OR A>4 THEN 3470
    0x560163ec4e20 ----------   03460 H8=1: ON A+1 GOTO 3550,3670,3770,4060,3830
    0x560163ec4fd0 ---------- T 03470 CLS : PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER."
    0x560163ec5120 ----------   03480 PRINT " 0=CUMULITIVE GALACTIVE RECORD"
    0x560163ec5260 ----------   03490 PRINT " 1=STATUS REPORT"
    0x560163ec53b0 ----------   03500 PRINT " 2=PHOTON TORPEDO DATA"
    0x560163ec5500 ----------   03510 PRINT " 3=STARBASE NAV DATA"
    0x560163ec5640 ----------   03520 PRINT " 4=DIRECTION/DISTANCE CALCULATOR"
    0x560163ec5730 ----------   03530 PRINT : GOTO 3450
    0x560163ec5cb0 ----------   03540 H8=0:G5=1: CLS : PRINT TAB(24)"THE GALAXY": GOTO 3580
    0x560163ec5e70 ---------- T 03550 PRINT : PRINT " ";
    0x560163ec61e0 ----------   03560 CLS : PRINT "COMPUTER RECORD OF GALAXY FOR QUADRENT";Q1;",";Q2
    0x560163ec6260 ----------   03570 PRINT 
    0x560163ec63c0 ---------- T 03580 PRINT " 1 2 3 4 5 6 7 8"
    0x560163ec65a0 ----------   03590 O1$=" ----- ----- ------ ------ ------ ------ ----- ------"
    0x560163ec6b50 ----------   03600 PRINT O1$: FOR I=1 TO 8: PRINT 1;: IF H8=0 THEN 3640
    0x560163ec72b0 ----------   03610 FOR J=1 TO 8: PRINT " ";: IF Z(I,J)=0 THEN PRINT "***";: GOTO 3630
    0x560163ec7690 ----------   03620 PRINT RIGHT$(STR$(Z(I,J)+1000),3);
    0x560163ec77e0 ---------- T 03630 NEXT J: GOTO 3660
    0x560163ec8080 ---------- T 03640 Z4=I:Z5=1: GOSUB 3490:J0= INT(15-.5* LEN(G2$)): PRINT TAB(J0);G2$;
    0x560163ec8800 ----------   03650 Z5=5: GOSUB 3490:J0= INT(39-.5* LEN /(G2$)): PRINT TAB(J0);G2$;
    0x560163ec89e0 ---------- T 03660 PRINT : NEXT I: PRINT : GOTO 1480
    0x560163ec8fc0 ---------- T 03670 CLS : PRINT " STSTAS REPORT:":X$="": IF K9>1 THEN X$="S"
    0x560163ec9320 ----------   03680 PRINT "KLINGON";X$;" LEFT: ";K9
    0x560163ec9980 ----------   03690 PRINT "MISSION MUST BE COMPLEATED IN";.1* INT((T0+T9-T)*10),"STARDATES"
    0x560163ec9ff0 ----------   03700 X$="S": IF B9<2 THEN X$="": IF B9<1 THEN 3740
    0x560163eca410 ----------   03710 PRINT "THE FEDERATION IS MAINTAINING";B9;"STARBASE";X$;" IN THE GALAXY"
    0x560163eca6c0 ----------   03720 FOR IX=1 TO 1500: NEXT IX
    0x560163eca770 ----------   03730 GOTO 3010
    0x560163ecaa40 ---------- T 03740 PRINT "CAPTAIN "NA$"! YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN"
    0x560163ecaba0 ----------   03750 PRINT "IN THE GALAXY--YOU HAVE NO STARBASES LEFT!"
    0x560163ecae60 ----------   03760 FOR I=1 TO 2000: NEXT : GOTO 3010
    0x560163ecb010 ---------- T 03770 IF K3<=0 THEN 2390
    0x560163ecb4d0 ----------   03780 X$="": IF K3>1 THEN X$="S"
    0x560163ecb6c0 ----------   03790 PRINT "FROM ENTERPRISE TO KLINGON";X$
    0x560163ecbcd0 ----------   03800 H8=0: FOR I=1 TO 3: IF K(I,3)<=0 THEN 4050
    0x560163ecc130 ----------   03810 W1=K(I,1):X=K(I,2)
    0x560163ecc3e0 ---------- T 03820 C1=S1:A=S2: GOTO 3870
    0x560163ecc580 ---------- T 03830 CLS : PRINT "DIRECTION/DISTANCE CALCULATER:"
    0x560163eccb60 ----------   03840 PRINT "YOU ARE AT QUADRENT ";Q1;",";Q2;" SECTOR ";S1;",";S2
    0x560163ecced0 ----------   03850 PRINT "PLEASE ENTER":C1=Q1:A=Q2
    0x560163ecd040 ----------   03860 INPUT " DESTINATION COORDINATES(X,Y)";W1,X
    0x560163ecd560 ---------- T 03870 X=X-A:A=C1-W1: IF X<0 THEN 3950
    0x560163ecd720 ----------   03880 IF A<0 THEN 3970
    0x560163ecd8f0 ----------   03890 IF X>0 THEN 3910
    0x560163ecdc60 ----------   03900 IF A=0 THEN C1=5: GOTO 3920
    0x560163ecddd0 ---------- T 03910 C1=1
    0x560163ece0c0 ---------- T 03920 IF ABS(A)<= ABS(X) THEN 3940
    0x560163ece7e0 ----------   03930 PRINT "DIRECTION=";C1+((( ABS(A)- ABS(X))+ ABS(A))/ ABS(A));: GOTO 4010
    0x560163eced60 ---------- T 03940 PRINT "DIRECTION=";C1+( ABS(A)/( ABS(X)+.001));: GOTO 4010
    0x560163ecf0c0 ---------- T 03950 IF A>0 THEN C1=3: GOTO 3980
    0x560163ecf410 ----------   03960 IF X<>0 THEN C1=5: GOTO 3920
    0x560163ecf580 ---------- T 03970 C1=7
    0x560163ecf7f0 ---------- T 03980 IF ABS(A)>= ABS(X) THEN 4000
    0x560163ecff00 ----------   03990 PRINT "DIRECTION=";C1+((( ABS(X)- ABS(A))+ ABS(X))/ ABS(X));: GOTO 4010
    0x560163ed0310 ---------- T 04000 PRINT "DIRECTION=";C1+( ABS(X)/ ABS(A));
    0x560163ed0480 ---------- T 04010 PRINT "DISTANCE=";
    0x560163ed0ab0 ----------   04020 IF W1=B4 THEN PRINT SQR(X^2+A^2)/10: GOTO 4040
    0x560163ed0e30 ----------   04030 PRINT SQR(X^2+A^2)
    0x560163ed0fe0 ---------- T 04040 IF H8=1 THEN 1480
    0x560163ed1140 ---------- T 04050 NEXT I: GOTO 1480
    0x560163ed16b0 ---------- T 04060 IF B3<>0 THEN PRINT "FROM ENTERPRISE TO STAREBASE:":W1=B4:X=B5: GOTO 3820
    0x560163ed1820 ----------   04070 PRINT "MR SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS";
    0x560163ed19e0 ----------   04080 PRINT " QUADRANT '": GOTO 1480
    0x560163ed3270 ----------   04090 IF S8=1 THEN Q$=A$+ RIGHT$ (Q$,189): RETURN 
    0x560163ed3740 ----------   04100 IF S8=190 THEN Q$= LEFT$ (Q$,189)+A$: RETURN 
    0x560163ed3d60 ----------   04110 Q$= LEFT$ (Q$,S8-1)+A$+ RIGHT$ (Q$,190-S8): RETURN 
    0x560163ed6430 ----------   04120 Z3=1: RETURN 
    0x560163ebd350 ---------B G 04130 FOR I=S1-1 TO S1+1: FOR J=S2-1 TO S2+1
    0x560163ebdeb0 ---------B   04140 IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 4160
    0x560163ebe450 ---------B   04150 A$=">!<":Z1=I:Z2=J: GOSUB 3460: IF Z3=1 THEN 4170
    0x560163ebe770 ---------B T 04160 NEXT J: NEXT I:D0=0: GOTO 4190
    0x560163ebedb0 ---------B T 04170 D0=1:C$="DOCKED":E=E0:P=P0
    0x560163ebf3d0 ---------B   04180 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES": FOR IX=1 TO 1500: NEXT IX:S=0: GOTO 4200
    0x560163ebf760 ---------B T 04190 IF K3>0 THEN C$="*RED*": GOTO 4200
    0x560163ebff20 ---------B T 04200 IF D(2)>=0 THEN 4230
    0x560163ec04f0 ---------B   04210 IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS : PRINT 
    0x560163edf020 ---------B   04220 GOTO 4340 (Pseudo Goto)
    0x560163ec0bc0 ---------B T 04230 CLS :O1$="---------------------------------": PRINT O1$: FOR I=1 TO 8
    0x560163ec1770 ---------B   04240 FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3: PRINT " "; MID$(Q$,J,3);: NEXT J
    0x560163ec1d90 ---------B   04250 ON I GOTO 4260,4270,4280,4290,4300,4310,4320,4330
    0x560163e9df10 ---------B T 04260 PRINT " STARDATE "; INT(T*10)*.1: GOTO 4340
    0x560163e9e120 ---------B T 04270 PRINT " CONDITION ";C$: GOTO 4340
    0x560163ec2f40 ---------B T 04280 PRINT " QUADRANT ";Q1;",";Q2: GOTO 4340
    0x560163ec32b0 ---------B T 04290 PRINT " SECTOR ";S1;",";S2: GOTO 4340
    0x560163ec3520 ---------B T 04300 PRINT " PHOTON TORPEDOES "; INT(P): GOTO 4340
    0x560163ec3830 ---------B T 04310 PRINT " TOTAL ENERGY "; INT(E+S): GOTO 4340
    0x560163ec3aa0 ---------B T 04320 PRINT " SHIELDS "; INT(S): GOTO 4340
    0x560163ec3cb0 ---------B T 04330 PRINT " KLINGONS REMAINING "; INT(K9)
    0x560163ec3e50 ---------B T 04340 NEXT I: PRINT O1$: RETURN 
    0x560163ed22b0 ---------C B 04350 R1= RND(8):R2= RND(8):A$=" ":Z1=R1:Z2=R2: GOSUB 3460: IF Z3=0 THEN 4350
    0x560163ed2310 ---------C   04360 RETURN 
    0x560163ed2a40 ---------D G 04370 S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
    0x560163ed2da0 ---------D   04380 IF LEN(A$)<>3 THEN PRINT "ERROR": STOP 
    0x560163ed4380 ---------E G 04390 ON R1 GOTO 4400,4410,4420,4430,4440,4450,4460,4470
    0x560163edf090 ---------E T 04400 GOTO 4470 (Pseudo Goto)
    0x560163edf2c0 ---------E T 04410 GOTO 4470 (Pseudo Goto)
    0x560163edf100 ---------E T 04420 GOTO 4470 (Pseudo Goto)
    0x560163edf330 ---------E T 04430 GOTO 4470 (Pseudo Goto)
    0x560163edf170 ---------E T 04440 GOTO 4470 (Pseudo Goto)
    0x560163edf3a0 ---------E T 04450 GOTO 4470 (Pseudo Goto)
    0x560163edf1e0 ---------E T 04460 GOTO 4470 (Pseudo Goto)
    0x560163ed5280 ---------E T 04470 G2$="LIBRARY-COMPUTER": RETURN 
    0x560163ed5f70 ---------F G 04480 Z1= INT(Z1+.5):Z2= INT(Z2+.5):S8=(Z2-1)*3+(Z1-1)*24+1:Z3=0
    0x560163ed6280 ---------F   04490 IF MID$(Q$,S8,3)<>A$ THEN RETURN 
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
int   A_int;        // Comments?
char* A_str;        // Comments?
char* A1_str;       // Comments?
int   B3_int;       // Comments?
int   B4_int;       // Comments?
int   B5_int;       // Comments?
int   B9_int;       // Comments?
int   C_int_arr[10][3]; // Comments?
char* C_str;        // Comments?
int   C1_int;       // Comments?
float D_flt_arr[9]; // Comments?
int   D_int;        // Comments?
int   D0_int;       // Comments?
int   D1_int;       // Comments?
float D3_flt;       // Comments?
float D4_flt;       // Comments?
int   D6_int;       // Comments?
int   E_int;        // Comments?
int   E0_int;       // Comments?
int   G_int_arr[9][9];  // Comments?
char* G2_str;       // Comments?
int   G5_int;       // Comments?
int   H_int;        // Comments?
int   H1_int;       // Comments?
int   H8_int;       // Comments?
int   HD_int_arr[10];   // Comments?
int   I_int;        // Comments?
int   II_int;       // Comments?
int   IX_int;       // Comments?
int   J_int;        // Comments?
int   J0_int;       // Comments?
int   JH_int;       // Comments?
int   K_int_arr[4][4];  // Comments?
int   K3_int;       // Comments?
int   K7_int;       // Comments?
int   K9_int;       // Comments?
int   L_int;        // Comments?
int   N_int_arr[4]; // Comments?
int   N_int;        // Comments?
char* NA_str;       // Comments?
char* O1_str;       // Comments?
int   P_int;        // Comments?
int   P0_int;       // Comments?
int   PO_int;       // Comments?
float Q_flt_arr[10];// Comments?
char* Q_str;        // Comments?
int   Q1_int;       // Comments?
int   Q2_int;       // Comments?
int   Q4_int;       // Comments?
int   Q5_int;       // Comments?
int   R1_int;       // Comments?
int   R2_int;       // Comments?
int   S_int;        // Comments?
int   S1_int;       // Comments?
int   S2_int;       // Comments?
int   S3_int;       // Comments?
int   S8_int;       // Comments?
int   S9_int;       // Comments?
float T_flt;        // Comments?
int   T0_int;       // Comments?
int   T8_int;       // Comments?
int   T9_int;       // Comments?
int   TI_int;       // Comments?
int   W1_int;       // Comments?
int   X_int;        // Comments?
char* X_str;        // Comments?
char* X0_str;       // Comments?
int   X1_int;       // Comments?
int   X2_int;       // Comments?
int   X3_int;       // Comments?
int   X5_int;       // Comments?
int   Y_int;        // Comments?
int   Y3_int;       // Comments?
int   Z_int_arr[9][9];  // Comments?
char* Z_str;        // Comments?
int   Z1_int;       // Comments?
int   Z2_int;       // Comments?
int   Z3_int;       // Comments?
int   Z4_int;       // Comments?
int   Z5_int;       // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_04130();
void Routine_04350();
void Routine_04370();
void Routine_04390();
void Routine_04480();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_04130(){
    // 04130 FOR I=S1-1 TO S1+1: FOR J=S2-1 TO S2+1
    for(J_int=S2_int-1;J_int<=S2_int+1;J_int++){
        // 04140 IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 4160
        if(INT(I_int+0.5)<1||INT(I_int+0.5)>8||INT(J_int+0.5)<1||INT(J_int+0.5)>8)goto Lbl_04160;
        // 04150 A$=">!<":Z1=I:Z2=J: GOSUB 3460: IF Z3=1 THEN 4170
        if(Z3_int==1)goto Lbl_04170;

  Lbl_04160:
        // 04160 NEXT J: NEXT I:D0=0: GOTO 4190
        goto Lbl_04190;

  Lbl_04170:
        // 04170 D0=1:C$="DOCKED":E=E0:P=P0
        P_int = P0_int;
        // 04180 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES": FOR IX=1 TO 1500: NEXT IX:S=0: GOTO 4200
        goto Lbl_04200;

  Lbl_04190:
        // 04190 IF K3>0 THEN C$="*RED*": GOTO 4200
        goto Lbl_04200;

  Lbl_04200:
        // 04200 IF D(2)>=0 THEN 4230
        if(D_flt_arr[(int)2]>=0)goto Lbl_04230;
        // 04210 IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS : PRINT 
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 04220 GOTO 4340 (Pseudo Goto)
        goto Lbl_04340;

  Lbl_04230:
        // 04230 CLS :O1$="---------------------------------": PRINT O1$: FOR I=1 TO 8
        for(I_int=1;I_int<=8;I_int++){
            // 04240 FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3: PRINT " "; MID$(Q$,J,3);: NEXT J
            int dummy_4240=0; // Ignore this line.
        }; // End-For(J_int)
        // 04250 ON I GOTO 4260,4270,4280,4290,4300,4310,4320,4330
        switch((int)(I_int)){
            case 1: goto Lbl_04260;
            case 2: goto Lbl_04270;
            case 3: goto Lbl_04280;
            case 4: goto Lbl_04290;
            case 5: goto Lbl_04300;
            case 6: goto Lbl_04310;
            case 7: goto Lbl_04320;
            case 8: goto Lbl_04330;
            default: break; 
        };

  Lbl_04260:
        // 04260 PRINT " STARDATE "; INT(T*10)*.1: GOTO 4340
        goto Lbl_04340;

  Lbl_04270:
        // 04270 PRINT " CONDITION ";C$: GOTO 4340
        goto Lbl_04340;

  Lbl_04280:
        // 04280 PRINT " QUADRANT ";Q1;",";Q2: GOTO 4340
        goto Lbl_04340;

  Lbl_04290:
        // 04290 PRINT " SECTOR ";S1;",";S2: GOTO 4340
        goto Lbl_04340;

  Lbl_04300:
        // 04300 PRINT " PHOTON TORPEDOES "; INT(P): GOTO 4340
        goto Lbl_04340;

  Lbl_04310:
        // 04310 PRINT " TOTAL ENERGY "; INT(E+S): GOTO 4340
        goto Lbl_04340;

  Lbl_04320:
        // 04320 PRINT " SHIELDS "; INT(S): GOTO 4340
        goto Lbl_04340;

  Lbl_04330:
        // 04330 PRINT " KLINGONS REMAINING "; INT(K9)
        b2c_fprintf(stdout," KLINGONS REMAINING  %d ",INT(K9_int)); b2c_fprintf(stdout,"\n");

  Lbl_04340:
        // 04340 NEXT I: PRINT O1$: RETURN 
        return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_04350(){

  Lbl_04350:
        // 04350 R1= RND(8):R2= RND(8):A$=" ":Z1=R1:Z2=R2: GOSUB 3460: IF Z3=0 THEN 4350
        if(Z3_int==0)goto Lbl_04350;
        // 04360 RETURN 
        return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_04370(){
        // 04370 S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
        S8_int = INT(Z2_int-0.5)*3+INT(Z1_int-0.5)*24+1;
        // 04380 IF LEN(A$)<>3 THEN PRINT "ERROR": STOP 
        exit(1);


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

void Routine_04390(){
        // 04390 ON R1 GOTO 4400,4410,4420,4430,4440,4450,4460,4470
        switch((int)(R1_int)){
            case 1: goto Lbl_04400;
            case 2: goto Lbl_04410;
            case 3: goto Lbl_04420;
            case 4: goto Lbl_04430;
            case 5: goto Lbl_04440;
            case 6: goto Lbl_04450;
            case 7: goto Lbl_04460;
            case 8: goto Lbl_04470;
            default: break; 
        };

  Lbl_04400:
        // 04400 GOTO 4470 (Pseudo Goto)
        goto Lbl_04470;

  Lbl_04410:
        // 04410 GOTO 4470 (Pseudo Goto)
        goto Lbl_04470;

  Lbl_04420:
        // 04420 GOTO 4470 (Pseudo Goto)
        goto Lbl_04470;

  Lbl_04430:
        // 04430 GOTO 4470 (Pseudo Goto)
        goto Lbl_04470;

  Lbl_04440:
        // 04440 GOTO 4470 (Pseudo Goto)
        goto Lbl_04470;

  Lbl_04450:
        // 04450 GOTO 4470 (Pseudo Goto)
        goto Lbl_04470;

  Lbl_04460:
        // 04460 GOTO 4470 (Pseudo Goto)
        goto Lbl_04470;

  Lbl_04470:
        // 04470 G2$="LIBRARY-COMPUTER": RETURN 
        return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------

void Routine_04480(){
        // 04480 Z1= INT(Z1+.5):Z2= INT(Z2+.5):S8=(Z2-1)*3+(Z1-1)*24+1:Z3=0
        Z3_int = 0;
        // 04490 IF MID$(Q$,S8,3)<>A$ THEN RETURN 
        if(strcmp(MID(Q_str,S8_int,3),A_str)!=0) {
        }

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
    b2c_fprintf(stdout,"S U P E R S T A R T R E K"); b2c_fprintf(stdout,"\n");
    // 01040 PRINT : PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
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
C_int_arr[(int)6][(int)2] = -1;
// 01130 C(1,2)=1:C(2,2)=1:C(6,1)=1:C(7,1)=1:C(8,1)=1:C(8,2)=1:C(9,2)=1
C_int_arr[(int)9][(int)2] = 1;
// 01140 FOR I=1 TO 8:D(I)=0: NEXT I
int dummy_1140=0; // Ignore this line.
}; // End-For(I_int)
// 01150 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
GLBpStr="NAVSRSLRSPHATORSHEDAMCOMXXX";
A1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
// 01160 FOR I=1 TO 8: FOR J=1 TO 8:K3=0:Z(I,J)=0:R1= RND(0)
R1_int = RND(0);
// 01170 IF R1>.98 THEN K3=3:K9=K9+3: GOTO 1200
goto Lbl_01200;

  Lbl_01200:
// 01200 B3=0: IF RND(0)>.96 THEN B3=1:B9=B9+1
B9_int = B9_int+1;
// 01210 G(I,J)=K3*100+B3*10+ RND(8): NEXT J: NEXT I: IF K9>T9 THEN T9=K9+1
if(K9_int>T9_int) {
}
// 01340 REM 
// 02570 REM 

  Lbl_03370:
// 03370 END 
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
