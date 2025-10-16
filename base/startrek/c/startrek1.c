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
    0x5616f80cd5d0 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x5616f80ddf60 ---------A   00002 REM trs2 - TRS-80 Level II BASIC tokenized file
    0x5616f80dd850 ---------A T 00010 CLS 
    0x5616f80ded10 ---------A   00020 PRINT @210,"S U P E R S T A R T R E K"
    0x5616f80dee90 ---------A   00030 PRINT : PRINT 
    0x5616f80cd2f0 ---------A   00100 CLEAR 600
    0x5616f80def50 ---------A   00110 Z$=" "
    0x5616f80df010 ---------A   00120 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8): RANDOM 
    0x5616f80e65f0 ---------A   00130 T= INT( RND(0)*20+20)*100:T0=T:T9=25+ INT( RND(0)*10):D0=0:E=3000:E0=E
    0x5616f80e7bc0 ---------A   00140 P=10:PO=P:S9=200:S=0:B9=0:K9=0:X$="":X0$=" IS "
    0x5616f80e8a40 ---------A   00170 Q1= RND(8):Q2= RND(8):S1= RND(8):S2= RND(8)
    0x5616f80e95b0 ---------A   00180 FOR I=1 TO 9:C(I,1)=0:C(I,2)=0: NEXT I
    0x5616f80eaae0 ---------A   00190 C(3,1)=-1:C(2,1)=-1:C(4,1)=-1:C(4,2)=-1:C(5,2)=-1:C(6,2)=-1
    0x5616f80ec2f0 ---------A   00200 C(1,2)=1:C(2,2)=1:C(6,1)=1:C(7,1)=1:C(8,1)=1:C(8,2)=1:C(9,2)=1
    0x5616f80ec9b0 ---------A   00210 FOR I=1 TO 8:D(I)=0: NEXT I
    0x5616f80ecca0 ---------A   00220 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    0x5616f80edd10 ---------A   00230 FOR I=1 TO 8: FOR J=1 TO 8:K3=0:Z(I,J)=0:R1= RND(0)
    0x5616f80ee4e0 ---------A   00240 IF R1>.98 THEN K3=3:K9=K9+3: GOTO 270
    0x5616f80eec60 ----------   00250 IF R1>.95 THEN K3=2:K9=K9+2: GOTO 270
    0x5616f80ef3d0 ----------   00260 IF R1>.8 THEN K3=1:K9=K9+1
    0x5616f80efed0 ---------A T 00270 B3=0: IF RND(0)>.96 THEN B3=1:B9=B9+1
    0x5616f80f0f60 ---------A   00280 G(I,J)=K3*100+B3*10+ RND(8): NEXT J: NEXT I: IF K9>T9 THEN T9=K9+1
    0x5616f80f11e0 ---------A   00290 IF B9<>0 THEN 320
    0x5616f80f1fd0 ---------A   00300 IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100:K9=K9+1
    0x5616f80f2e30 ---------A   00310 B9=1:G(Q1,Q2)=G(Q1,Q2)+10:Q1= RND(8):Q2= RND(8)
    0x5616f80f37a0 ---------A T 00320 K7=K9: IF B9<>1 THEN X$="S":X0$=" ARE "
    0x5616f80f3900 ---------A   00330 PRINT "YOUR ORDERS ARE AS FOLLOWES:"
    0x5616f80f3c60 ---------A   00340 PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
    0x5616f80f3e10 ---------A   00350 PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x5616f80f45c0 ---------A   00360 PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
    0x5616f80f4b60 ---------A   00370 PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
    0x5616f80f4e20 ---------A   00380 PRINT : INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
    0x5616f80f6770 ---------A T 00400 Z4=Q1:Z5=Q2:K3=0:B3=0:S3=0:G5=0:D4=.5* RND(0):Z(Q1,Q2)=G(Q1,Q2)
    0x5616f80f7230 ---------A   00410 IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 510
    0x5616f80f72b0 ---------A   00450 REM 
    0x5616f80f80a0 ---------A   00460 K3= INT(G(Q1,Q2)*.01):B3= INT(G(Q1,Q2)*.1)-10*K3
    0x5616f80f8b30 ---------A   00470 S3=G(Q1,Q2)-100*K3-10*B3: IF K3=0 THEN 500
    0x5616f80f8f30 ---------A   00480 CLS : PRINT @396,"COMBAT AREA CONDITION RED": IF S>200 THEN 500
    0x5616f80f90c0 ---------A   00490 PRINT @463,"SHIELDS DANGEROUSLY LOW"
    0x5616f80f9bd0 ---------A T 00500 FOR I=1 TO 3:K(I,1)=0:K(I,2)=0: NEXT I
    0x5616f80fb020 ---------A T 00510 FOR I=1 TO 3:K(I,3)=0: NEXT I:Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
    0x5616f80fbb40 ---------A   00520 A$="<*>":Z1=S1:Z2=S2: GOSUB 3320: IF K3<1 THEN 550
    0x5616f80fc5b0 ---------A   00530 FOR I=1 TO K3: GOSUB 3300:A$="+K+":Z1=R1:Z2=R2
    0x5616f80fd550 ---------A   00540 GOSUB 3320:K(I,1)=R1:K(I,1)=R2:K(I,3)=S9*(.5+ RND(0)): NEXT I
    0x5616f80fd7e0 ---------A T 00550 IF B3<1 THEN 570
    0x5616f80fe4a0 ---------A   00560 GOSUB 3300:A$=">!<":Z1=R1:B4=R1:Z2=R2:B5=R2: GOSUB 3320
    0x5616f80fef50 ---------A T 00570 FOR I=1 TO S3: GOSUB 3300:A$=" * ":Z1=R1:Z2=R2: GOSUB 3320: NEXT I
    0x5616f80feff0 ---------A T 00580 GOSUB 2460
    0x5616f80ff8b0 ---------A T 00590 IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
    0x5616f80ffc90 ---------A   00600 CLS : PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
    0x5616f80ffe60 ---------A   00610 PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
    0x5616f8100130 ---------A   00620 PRINT " AND SHIELD CONTROL.": PRINT "IS PRESENTLY INCAPABLE OF CROSS";
    0x5616f8100300 ---------A   00630 PRINT "-CIRUITING TO ENGINE ROOM!!": GOTO 2330
    0x5616f81006c0 ----------   00640 PRINT "YOUR ORDERS, CAPTAIN ";NA$;: INPUT A$
    0x5616f8101250 ----------   00650 FOR I=1 TO 9: IF LEFT$ (A$,3)<> MID$ (A1$,3*I-2,3) THEN 670
    0x5616f8101a90 ----------   00660 ON I GOTO 770,580,1410,1490,1680,1990,2070,2680,2360
    0x5616f8101d60 ---------- T 00670 NEXT I: CLS : PRINT "ENTER ONE OF THE FOLOWING:"
    0x5616f8101ed0 ----------   00680 PRINT " NAV(TO SET COURSE)"
    0x5616f8102050 ----------   00690 PRINT " SRS(FOR SHORT RANGE SENSOR SCAN)"
    0x5616f81021c0 ----------   00700 PRINT " LRS(FOR LONG RANGE SENSOR SCAN)"
    0x5616f8102330 ----------   00710 PRINT " PHA(TO FIRE PHASERS)"
    0x5616f81024b0 ----------   00720 PRINT " TOR(TO FIRE PHOTON TORPEDOES)"
    0x5616f8102630 ----------   00730 PRINT " SHE(TO RAISE OR LOWER SHIELDS)"
    0x5616f81027b0 ----------   00740 PRINT " DAM(FOR DAMAGE CONTROAL REPORTS)"
    0x5616f8102940 ----------   00750 PRINT " COM(TO CALL ON LIBRARY-COMPUTER)"
    0x5616f8102f70 ----------   00760 PRINT " XXX(TO RESIGN YOUR COMAND)": PRINT : GOTO 590
    0x5616f81035d0 ---------- T 00770 INPUT "COURSE(0-9)";C1: IF C1=9 THEN C1=1
    0x5616f8103a80 ----------   00780 IF C1>=1 AND C1<9 THEN 800
    0x5616f8103c60 ----------   00790 PRINT " LT. SULU REPORTS, 'INCORECT COURSE DATA, SIR!'": GOTO 590
    0x5616f81043c0 ---------- T 00800 X$="8": IF D(1)<0 THEN X$="0.2"
    0x5616f8104e60 ----------   00810 PRINT "WARP FACTOR(0-";X$;")";: INPUT W1: IF D(1)<0 AND W1>.2 THEN 860
    0x5616f81052e0 ----------   00820 IF W1>0 AND W1<=8 THEN 870
    0x5616f8105580 ----------   00830 IF W1=0 THEN 590
    0x5616f81059a0 ----------   00840 PRINT " CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T TAKEWARP";W1;"!": GOTO 590
    0x5616f8105b70 ---------- T 00860 PRINT "WARP ENGINES ARE DAMMAGED. MAXIMUM SPEED=WARP 0.2": GOTO 590
    0x5616f81063f0 ---------- T 00870 N= INT(W1*8+.5): IF E-N>=0 THEN 940
    0x5616f8106590 ----------   00880 PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x5616f8106a40 ----------   00890 PRINT TAB(23)"FOR MANUVERING AT WARP";W1;"!"
    0x5616f81070e0 ----------   00900 IF S<N-E OR D(7)<0 THEN 590
    0x5616f8107470 ----------   00910 PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEDGES";S;"UNITS OF ENERGY"
    0x5616f8107710 ----------   00920 PRINT TAB(23)"PRESENTLY DEPLOYED TO SHIELDS."
    0x5616f81077a0 ----------   00930 GOTO 590
    0x5616f8107e80 ---------- T 00940 FOR I=1 TO K3: IF K(I,3)=0 THEN 970
    0x5616f81088d0 ----------   00950 A$=" ":Z1=K(I,1):Z2=K(I,2): GOSUB 3320: GOSUB 3300
    0x5616f81092c0 ----------   00960 K(I,1)=Z1:K(I,2)=Z2:A$="+K+": GOSUB 3320
    0x5616f8109de0 ---------- T 00970 NEXT I: GOSUB 2220:D1=0:D6=W1: IF W1>=1 THEN D6=1
    0x5616f810a410 ----------   00980 FOR I=1 TO 8: IF D(I)>=0 THEN 1030
    0x5616f810b280 ----------   00990 D(I)=D(I)+D6: IF D(I)>-.1 AND D(I)<0 THEN D(I)=-.1: GOTO 1030
    0x5616f810b5c0 ----------   01000 IF D(I)<0 THEN 1030
    0x5616f810bb80 ----------   01010 IF D1<>1 THEN D1=1: PRINT "DAMAGE CONTROL REPORT"
    0x5616f810c280 ----------   01020 PRINT TAB(8);:R1=I: GOSUB 3370: PRINT G2$;" REPAIR COMPLEATED"
    0x5616f810c6d0 ---------- T 01030 NEXT I: IF RND(0)>.2 THEN 1090
    0x5616f810ccf0 ----------   01040 R1= RND(8): IF RND(0)>=6 THEN 1070
    0x5616f810d760 ----------   01050 Q(R1)=D(R1)-( RND(0)*5+1): PRINT "DAMAGE CONTROL REPORT:";
    0x5616f810dac0 ----------   01060 GOSUB 3370: PRINT G2$;" DAMAGED": PRINT : GOTO 1090
    0x5616f810e3f0 ---------- T 01070 D(R1)=D(R1)+ RND(0)*3+1: PRINT "DAMAGE CONTROL REPORT:"
    0x5616f810e700 ----------   01080 GOSUB 3370: PRINT G2$;" STATE OF REPAIR IMPROVED": PRINT 
    0x5616f810ef90 ---------- T 01090 A$=" ":Z1= INT(S1):Z2= INT(S2): GOSUB 3320
    0x5616f8110400 ----------   01100 X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1)):X=S1:Y=S2
    0x5616f8111890 ----------   01110 X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1)):Q4=Q1:Q5=Q2
    0x5616f8112ab0 ----------   01120 FOR I=1 TO N:S1=S1+X1:S2=S2+X2: IF S1<1 OR S1>=9 OR S2<1 OR S2>=9 THEN 1210
    0x5616f81138a0 ----------   01130 S8= INT(S1)*24+ INT(S2)*3-26: IF MID$ (Q$,S8,2)=" " THEN 1160
    0x5616f8114280 ----------   01140 S1= INT(S1-X1):S2= INT(S2-X2): PRINT "WARP ENGINES SHUT DOWN AT ";
    0x5616f8114840 ----------   01150 PRINT "SECTOR";S1;",";S2;"DUE TO BAD NAVIGATION.": GOTO 1170
    0x5616f8114f80 ---------- T 01160 NEXT I:S1= INT(S1):S2= INT(S2)
    0x5616f8115ad0 ---------- T 01170 A$="<*>":Z1= INT(S1):Z2= INT(S2): GOSUB 3320: GOSUB 1370:T8=1
    0x5616f8116220 ----------   01180 IF W1<1 THEN T8=.1* INT(10*W1)
    0x5616f81168f0 ----------   01190 T=T+T8: IF T>T0+T9 THEN 2330
    0x5616f81169b0 ----------   01200 GOTO 580
    0x5616f81183b0 ---------- T 01210 X=8*Q1+X+N*X1:Y=8*Q2+Y+N*X2:Q1= INT(X/8):Q2= INT(Y/8):S1= INT(X-Q1*8)
    0x5616f8119030 ----------   01220 S2= INT(Y-Q2*8): IF S1=0 THEN Q1=Q1-1:S1=8
    0x5616f81197a0 ----------   01230 IF S2=0 THEN Q2=Q2-1:S2=8
    0x5616f811a290 ----------   01240 X5=0: IF Q1<1 THEN X5=1:Q1=1:S1=1
    0x5616f811aad0 ----------   01250 IF Q1>8 THEN X5=1:Q1=8:S1=8
    0x5616f811b310 ----------   01260 IF Q2<1 THEN X5=1:Q2=1:S2=1
    0x5616f811bb40 ----------   01270 IF Q2>8 THEN X5=1:Q2=8:S2=8
    0x5616f811bdc0 ----------   01280 IF X5=0 THEN 1350
    0x5616f811bf70 ----------   01290 PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMAND:"
    0x5616f811c120 ----------   01300 PRINT " 'PREMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMITER"
    0x5616f811c2c0 ----------   01310 PRINT " IS HEREBY *DENIED*. SHUT DOWN YOUR ENGINES.'"
    0x5616f811c460 ----------   01320 PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x5616f811cdc0 ----------   01330 PRINT "AT SECTOR";S1;",";S2;"OF QUADRENT";Q1;",";Q2;"'"
    0x5616f811d160 ----------   01340 IF T>T0+T9 THEN 2330
    0x5616f811d830 ---------- T 01350 IF 8*Q1+Q2=8*Q4+Q5 THEN 1170
    0x5616f811dc10 ----------   01360 T=T+1: GOSUB 1370: GOTO 400
    0x5616f811e2f0 ----------   01370 E=E-N-10: IF E>=0 THEN RETURN 
    0x5616f811e480 ----------   01380 PRINT "SHIELD CONTROL SUPPLIES ENERGY TO COMPLEAT MANUVER."
    0x5616f811ede0 ----------   01390 S=S+E:E=0: IF S<=0 THEN S=0
    0x5616f811ee40 ----------   01400 RETURN 
    0x5616f811fb80 ---------- T 01410 IF D(3)<0 THEN PRINT "LONG RANG SENSORES ARE INOPERABLE": GOTO 590
    0x5616f8120030 ----------   01420 CLS : PRINT "LONG RANGE SCAN FOR QUADRANT";Q1;",";Q2
    0x5616f8120480 ----------   01430 O1$="--------------------": PRINT O1$
    0x5616f81216e0 ----------   01440 FOR I=Q1-1 TO Q1+1:N(1)=-1:N(2)=-1:N(3)=-3: FOR J=Q2-1 TO Q2+1
    0x5616f8122c50 ----------   01450 IF I>0 AND I<9 AND J>0 AND J<9 THEN N(J-Q2+2)=G(I,J):Z(I,J)=G(I,J)
    0x5616f8123740 ----------   01460 NEXT J: FOR L=1 TO 3: PRINT ": ";: IF N(L)<0 THEN PRINT "*** ";: GOTO 1480
    0x5616f8123e20 ----------   01470 PRINT RIGHT$(STR$(N(L)+1000),3);" ";
    0x5616f8124370 ---------- T 01480 NEXT L: PRINT ":": PRINT O1$: NEXT I: GOTO 590
    0x5616f8124890 ---------- T 01490 CLS : PRINT : IF D(4)<0 THEN PRINT "PHASERS INOPERATIVE.": GOTO 590
    0x5616f8124b10 ----------   01500 IF K3>0 THEN 1530
    0x5616f8124cc0 ---------- T 01510 PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSORES SHOW NO ENEMY SHIPS"
    0x5616f8124fd0 ----------   01520 PRINT TAB(32)"IN THIS QUADRENT'": GOTO 590
    0x5616f8125430 ---------- T 01530 IF D(8)<0 THEN PRINT "COMPUTER FAILER HAMPERS ACCURACY"
    0x5616f81255e0 ----------   01540 PRINT "PHASERS LOCKED ON TARGET; ";
    0x5616f8125970 ---------- T 01550 PRINT "ENERGY AVAILABLE=";E;"UNITS"
    0x5616f8125d50 ----------   01560 INPUT "NUMBER OF UNITS TO DIVERT TO PHASER BANKS";X: IF X<=0 THEN 590
    0x5616f81260e0 ----------   01570 IF E-X<=0 THEN 1550
    0x5616f8126b50 ----------   01580 E=E-X: IF D(7)<0 THEN X=X* RND(0)
    0x5616f8127700 ----------   01590 H1= INT(X/K3): FOR I=1 TO 3: IF K(I,3)<=0 THEN 1670
    0x5616f8128430 ----------   01600 JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5616f81291b0 ----------   01604 H= INT((H1/JH)*( RND(0)+2)): IF H>.15*K(I,3) THEN 1620
    0x5616f81299f0 ----------   01610 PRINT "SENSORS SHOW NO DAMAGE TO ENEMY AT ";K(I,1);",";K(I,2): GOTO 1670
    0x5616f812a700 ---------- T 01620 K(I,3)=K(I,3)-H: PRINT H;: PRINT "UNITS HIT ON KLINGON AT SECTOR";K(I,1);",";
    0x5616f812af90 ----------   01630 PRINT K(I,2): IF K(I,3)<=0 THEN PRINT "*** KLINGON DESTROYED ***": GOTO 1650
    0x5616f812b4f0 ----------   01640 PRINT " (SENSORS SHOW";K(I,3);"UNITS REMAINING)": GOTO 1670
    0x5616f812c520 ---------- T 01650 K3=K3-1:K9=K9-1:Z1=K(I,1):Z2=K(I,2):A$=" ": GOSUB 3320
    0x5616f812d720 ----------   01660 K(I,3)=0:G(Q1,Q2)=G(Q1,Q2)-100:Z(Q1,Q2)=G(Q1,Q2): IF K9<=0 THEN 2430
    0x5616f812d900 ---------- T 01670 NEXT I: GOSUB 2220: GOTO 590
    0x5616f812d960 ---------A T 01680 REM 
    0x5616f812ddc0 ----------   01685 IF P<0 THEN PRINT "ALL PHOTON TORPEDOES EXPENDED.": GOTO 590
    0x5616f812e290 ----------   01690 IF D(5)<0 THEN PRINT "PHOTON TUBES ARE NOT OPERATIONAL": GOTO 590
    0x5616f812e840 ---------- T 01700 INPUT "PHOTON TORPEDO COURSE(1-9)";C1: IF C1=9 THEN C1=1
    0x5616f812ecf0 ----------   01710 IF C1>=1 AND C1<9 THEN 1740
    0x5616f812ee70 ----------   01720 PRINT "ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5616f812ef10 ----------   01730 GOTO 590
    0x5616f8130340 ---------- T 01740 X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1)):E=E-2:P=P-1
    0x5616f8131570 ----------   01750 X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1)):X=S1:Y=S2
    0x5616f8132570 ---------- T 01770 X=X+X1:Y=Y+X2:X3= INT(X+.5):Y3= INT(Y+.5)
    0x5616f8132e30 ----------   01780 IF X3<1 OR X3>8 OR Y3<1 OR Y3>8 THEN 1980
    0x5616f8133170 ----------   01785 PRINT @832, STRING$(63," ")
    0x5616f8133c70 ----------   01790 PRINT @832,"TRACKING TORPEDO:";X3;",";Y3;:A$=" ":Z1=X:Z2=Y: GOSUB 3460
    0x5616f8133f70 ----------   01800 IF Z3<>0 THEN 1770
    0x5616f8134010 ----------   01805 PRINT 
    0x5616f8134910 ----------   01810 A$="+K+":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1860
    0x5616f8135300 ----------   01820 PRINT "*** KLINGON DESTROYED ***":K3=K3-1:K9=K9-1: IF K9<=0 THEN 2430
    0x5616f8135dc0 ----------   01830 FOR I=1 TO 3: IF X3=K(I,1) AND Y3=K(I,2) THEN 1850
    0x5616f8136110 ----------   01840 NEXT I:I=3
    0x5616f8136530 ---------- T 01850 K(I,3)=0: GOTO 1960
    0x5616f8136e20 ---------- T 01860 A$=" * ":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1880
    0x5616f8137440 ----------   01870 PRINT "STAR AT";X3;",";Y3;"ABSORBED TORPEDO ENERGY.": GOSUB 2220: GOTO 590
    0x5616f8137d20 ---------- T 01880 A$=">!<":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1700
    0x5616f81384c0 ----------   01890 PRINT "*** STARBASE DESTROYED ***":B3=B3-1:B9=B9-1
    0x5616f8138b70 ----------   01900 IF B9>0 OR K9>T-10-T9 THEN 1940
    0x5616f8138de0 ----------   01909 NA$="WALDO"
    0x5616f8139180 ----------   01910 PRINT "CAPTAIN ";NA$;" YOU ARE HEREBY RELIEVED OF COMMAND"
    0x5616f8139310 ----------   01920 PRINT "AND SENTENCED TO 99 STARDATES OF HARD LABOR ON CYGNUS 12!!"
    0x5616f8139700 ----------   01925 FOR II=1 TO 2500: NEXT 
    0x5616f8139790 ----------   01930 GOTO 2360
    0x5616f8139900 ---------- T 01940 PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x5616f8139c50 ----------   01950 PRINT "COURT MARTIAL!":D=0
    0x5616f813a320 ---------- T 01960 Z1=X:Z2=Y:A$=" ": GOSUB 3320
    0x5616f813b190 ----------   01970 G(Q1,Q2)=K3*100+B3*10+S3:Z(Q1,Q2)=G(Q1,Q2): GOSUB 2220: GOTO 590
    0x5616f813b3e0 ---------- T 01980 PRINT : PRINT "TORPEDO MISSED.": GOSUB 2220: GOTO 590
    0x5616f813b8c0 ---------- T 01990 IF D(7)<0 THEN PRINT "SHIELD CONTROL INOPERABLE.": GOTO 590
    0x5616f813bdd0 ----------   02000 PRINT "ENERGY ADVAILABLE=";E+S;: INPUT "NUMBER OF UNITS TO SHIELDS";X
    0x5616f813c420 ----------   02010 IF X<0 OR S=X THEN PRINT "<SHIELDS REMAIN UNCHANGED>": GOTO 590
    0x5616f813c7d0 ----------   02020 IF X<=E+S THEN 2050
    0x5616f813cb70 ----------   02030 PRINT "CAPTAIN "NA$"! THIS IS NOT THE FEDERATION TREASURY."
    0x5616f813cd40 ----------   02040 PRINT "<SHIELDS UNCHANGED>": GOTO 590
    0x5616f813d520 ---------- T 02050 E=E+S-X:S=X: PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x5616f813d990 ----------   02060 PRINT " 'SHIELDS NOW AT"; INT(S);"UNITS PER UOUR COMAND.'"
    0x5616f813dd90 ----------   02065 FOR II=1 TO 1500: NEXT : CLS : GOSUB 2460: GOTO 590
    0x5616f813e0c0 ---------- T 02070 IF D(6)>=0 THEN 2180
    0x5616f813e480 ----------   02080 PRINT "DAMMAGE CONTROL REPORT NOT AVAILABLE": IF D=0 THEN 590
    0x5616f813f110 ---------- T 02090 D3=0:FOR TI=1 TO 8: IF D(I)<0 THEN D3=D3+.1
    0x5616f813f4b0 ----------   02100 NEXT I: IF D3=0 THEN 590
    0x5616f813fcb0 ----------   02110 PRINT :D3=D3+D4: IF D3>=1 THEN D3=.9
    0x5616f813fe70 ----------   02120 PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP"
    0x5616f81404e0 ----------   02130 PRINT "ESTIMATED TIME TO REPAIR:";.01* INT(100*D3);"STARDATES"
    0x5616f8140670 ----------   02140 INPUT "WILL YOU AUTHORIZE THE REPAIR ORDER(Y/N)";A$
    0x5616f8140910 ----------   02150 IF A$<>Y THEN 590
    0x5616f81412a0 ----------   02160 FOR I=1 TO 8:IF HD(I)<0 THEN D(I)=0
    0x5616f8141850 ----------   02170 NEXT I:T=T+D3+.1
    0x5616f8141d20 ---------- T 02180 CLS : PRINT : PRINT "DEVICE STATE OF REPAIR": FOR R1=1 TO 8
    0x5616f8142840 ----------   02190 GOSUB 3370: PRINT G2$; LEFT$(Z$,25-LEN(G2$)); INT(D(R1)*100)*.01
    0x5616f8142c00 ----------   02200 NEXT R1: PRINT : IF D0<>0 THEN 2090
    0x5616f8142c90 ----------   02210 GOTO 590
    0x5616f8142f50 ----------   02220 IF K3<=0 THEN RETURN 
    0x5616f8143340 ----------   02230 IF D0<>0 THEN PRINT "STARBASE SHIELDS PROTECT THE ENTERPRISE": RETURN 
    0x5616f8143a40 ----------   02240 FOR I=1 TO 3: IF K(I,3)<=0 THEN 2320
    0x5616f81446b0 ----------   02245 JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5616f8145bb0 ----------   02250 H= INT((K(I,3)/JH)*(2+ RND(0))):S=S-H:K(I,3)=K(I,3)/(3+ RND(0))
    0x5616f8146450 ----------   02260 PRINT H;"UNITS HIT ON ENTERPRISE FROM SECTOR";K(I,1);",";K(I,2)
    0x5616f81466d0 ----------   02270 IF S<=0 THEN 2340
    0x5616f8146c80 ----------   02280 PRINT " <SHIELDS DOWN TO";S;"UNITS>": IF H<20 THEN 2320
    0x5616f8147300 ----------   02290 IF RND(0)>.6 OR H/S<=.02 THEN 2320
    0x5616f8147f70 ----------   02300 R1= RND(8):D(R1)=D(R1)-H/S-.5* RND(0): GOSUB 3370
    0x5616f81482c0 ----------   02310 PRINT "DAMAGE CONTROL REPORTS '";G2$;" DAMAGED BY THE HIT'"
    0x5616f8148430 ---------- T 02320 NEXT I: RETURN 
    0x5616f8148b50 ---------A T 02330 PRINT "IT IS STARDATE";T: FOR I=1 TO 1500: NEXT I: GOTO 2360
    0x5616f8149280 ---------- T 02340 FOR I=1 TO 500: NEXT I: CLS : PRINT : PRINT "THE ENTERPRISE HAS BEEN DESTROYED.": PRINT "THE FEDERATION";
    0x5616f8149450 ----------   02350 PRINT " WILL BE CONQUERED": GOTO 2330
    0x5616f81497f0 ---------A T 02360 CLS : PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
    0x5616f8149960 ---------A   02370 PRINT "THE END OF YOUR MISSION."
    0x5616f8149c80 ---------A T 02380 PRINT : PRINT : IF B9=0 THEN 2420
    0x5616f8149e30 ---------A   02390 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x5616f8149fe0 ---------A   02400 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x5616f814a3c0 ---------A   02410 INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$: IF A$="AYE" THEN 10
    0x5616f814a420 ---------A T 02420 END 
    0x5616f814a840 ----------   02425 T=100:B9=1
    0x5616f814abf0 ---------- T 02430 FOR II=1 TO 1500: NEXT : CLS 
    0x5616f814af90 ----------   02435 PRINT @192,"CONGRATIONS, MON CAPITAN "NA$"! THE LAST KLINGON BATTLE"
    0x5616f814b2d0 ----------   02440 PRINT TAB(5)"CRUISER MENACING THE FEDERATION HAS BEEN DESTROYED!": PRINT 
    0x5616f814bba0 ----------   02450 PRINT TAB(10)"YOUR EFFICIENCY RATING IS";1000*(K7/(T-T0))^2: GOTO 2380
    0x5616f814c5e0 ---------B G 02460 FOR I=S1-1 TO S1+1: FOR J=S2-1 TO S2+1
    0x5616f814d640 ---------B   02470 IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 2490
    0x5616f814df20 ---------B   02480 A$=">!<":Z1=I:Z2=J: GOSUB 3460: IF Z3=1 THEN 2500
    0x5616f814e3e0 ---------B T 02490 NEXT J: NEXT I:D0=0: GOTO 2520
    0x5616f814ed70 ---------B T 02500 D0=1:C$="DOCKED":E=E0:P=P0
    0x5616f814f5d0 ---------B   02510 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES": FOR IX=1 TO 1500: NEXT IX:S=0: GOTO 2540
    0x5616f814faa0 ---------B T 02520 IF K3>0 THEN C$="*RED*": GOTO 2540
    0x5616f8150230 ----------   02530 C$="GREEN": IF E<E0*.1 THEN C$="YELLOW"
    0x5616f8150580 ---------B T 02540 IF D(2)>=0 THEN 2560
    0x5616f8150c50 ---------B   02550 IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS : PRINT 
    0x5616f8150e30 ---------B   02555 PRINT "*** SHORT RANGE SENSORS ARE OUT ***": PRINT : RETURN 
    0x5616f8151520 ---------B T 02560 CLS :O1$="---------------------------------": PRINT O1$: FOR I=1 TO 8
    0x5616f8152570 ---------B   02570 FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3: PRINT " "; MID$(Q$,J,3);: NEXT J
    0x5616f8152d10 ---------B   02580 ON I GOTO 2590,2600,2610,2620,2630,2640,2650,2660
    0x5616f811f420 ---------B T 02590 PRINT " STARDATE "; INT(T*10)*.1: GOTO 2670
    0x5616f8153d70 ---------B T 02600 PRINT " CONDITION ";C$: GOTO 2670
    0x5616f8154200 ---------B T 02610 PRINT " QUADRANT ";Q1;",";Q2: GOTO 2670
    0x5616f81546b0 ---------B T 02620 PRINT " SECTOR ";S1;",";S2: GOTO 2670
    0x5616f8154a40 ---------B T 02630 PRINT " PHOTON TORPEDOES "; INT(P): GOTO 2670
    0x5616f8154ef0 ---------B T 02640 PRINT " TOTAL ENERGY "; INT(E+S): GOTO 2670
    0x5616f8155280 ---------B T 02650 PRINT " SHIELDS "; INT(S): GOTO 2670
    0x5616f81555b0 ---------B T 02660 PRINT " KLINGONS REMAINING "; INT(K9)
    0x5616f8155850 ---------B T 02670 NEXT I: PRINT O1$: RETURN 
    0x5616f8155d70 ---------- T 02680 IF D(8)<0 THEN PRINT "COMPUTER DISABLED": GOTO 590
    0x5616f8156420 ---------- T 02690 INPUT "COMPUTER ACTIVE AND AWAITING A COMAND";A: IF A<0 OR A>4 THEN 2710
    0x5616f8156d20 ----------   02700 H8=1: ON A+1 GOTO 2810,2930,3010,3270,3070
    0x5616f8156ef0 ---------- T 02710 CLS : PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER."
    0x5616f8157060 ----------   02720 PRINT " 0=CUMULITIVE GALACTIVE RECORD"
    0x5616f81571c0 ----------   02730 PRINT " 1=STATUS REPORT"
    0x5616f8157330 ----------   02740 PRINT " 2=PHOTON TORPEDO DATA"
    0x5616f81574a0 ----------   02750 PRINT " 3=STARBASE NAV DATA"
    0x5616f8157600 ----------   02760 PRINT " 4=DIRECTION/DISTANCE CALCULATOR"
    0x5616f81576f0 ----------   02770 PRINT : GOTO 2690
    0x5616f8157df0 ----------   02780 H8=0:G5=1: CLS : PRINT TAB(24)"THE GALAXY": GOTO 2840
    0x5616f8157fd0 ---------- T 02810 PRINT : PRINT " ";
    0x5616f8158480 ----------   02820 CLS : PRINT "COMPUTER RECORD OF GALAXY FOR QUADRENT";Q1;",";Q2
    0x5616f8158500 ----------   02830 PRINT 
    0x5616f8158680 ---------- T 02840 PRINT " 1 2 3 4 5 6 7 8"
    0x5616f8158900 ----------   02850 O1$=" ----- ----- ------ ------ ------ ------ ----- ------"
    0x5616f81590b0 ----------   02860 PRINT O1$: FOR I=1 TO 8: PRINT 1;: IF H8=0 THEN 2900
    0x5616f8159ab0 ----------   02870 FOR J=1 TO 8: PRINT " ";: IF Z(I,J)=0 THEN PRINT "***";: GOTO 2890
    0x5616f815a150 ----------   02880 PRINT RIGHT$(STR$(Z(I,J)+1000),3);
    0x5616f815a320 ---------- T 02890 NEXT J: GOTO 2920
    0x5616f815b0e0 ---------- T 02900 Z4=I:Z5=1: GOSUB 3490:J0= INT(15-.5* LEN(G2$)): PRINT TAB(J0);G2$;
    0x5616f815bc40 ----------   02910 Z5=5: GOSUB 3490:J0= INT(39-.5* LEN /(G2$)): PRINT TAB(J0);G2$;
    0x5616f815bea0 ---------- T 02920 PRINT : NEXT I: PRINT : GOTO 590
    0x5616f815c680 ---------- T 02930 CLS : PRINT " STSTAS REPORT:":X$="": IF K9>1 THEN X$="S"
    0x5616f815cb20 ----------   02940 PRINT "KLINGON";X$;" LEFT: ";K9
    0x5616f815d400 ----------   02950 PRINT "MISSION MUST BE COMPLEATED IN";.1* INT((T0+T9-T)*10),"STARDATES"
    0x5616f815dcf0 ----------   02960 X$="S": IF B9<2 THEN X$="": IF B9<1 THEN 2990
    0x5616f815e270 ----------   02970 PRINT "THE FEDERATION IS MAINTAINING";B9;"STARBASE";X$;" IN THE GALAXY"
    0x5616f815e660 ----------   02975 FOR IX=1 TO 1500: NEXT IX
    0x5616f815e710 ----------   02980 GOTO 2070
    0x5616f815eaa0 ---------- T 02990 PRINT "CAPTAIN "NA$"! YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN"
    0x5616f815ec20 ----------   03000 PRINT "IN THE GALAXY--YOU HAVE NO STARBASES LEFT!"
    0x5616f815efa0 ----------   03005 FOR I=1 TO 2000: NEXT : GOTO 2070
    0x5616f815f1f0 ---------- T 03010 IF K3<=0 THEN 1510
    0x5616f815f890 ----------   03020 X$="": IF K3>1 THEN X$="S"
    0x5616f815fb20 ----------   03030 PRINT "FROM ENTERPRISE TO KLINGON";X$
    0x5616f81603d0 ----------   03040 H8=0: FOR I=1 TO 3: IF K(I,3)<=0 THEN 3260
    0x5616f8160b70 ----------   03050 W1=K(I,1):X=K(I,2)
    0x5616f8161020 ---------- T 03060 C1=S1:A=S2: GOTO 3110
    0x5616f81611e0 ---------- T 03070 CLS : PRINT "DIRECTION/DISTANCE CALCULATER:"
    0x5616f8161a40 ----------   03080 PRINT "YOU ARE AT QUADRENT ";Q1;",";Q2;" SECTOR ";S1;",";S2
    0x5616f8161fd0 ----------   03090 PRINT "PLEASE ENTER":C1=Q1:A=Q2
    0x5616f8162240 ----------   03100 INPUT " DESTINATION COORDINATES(X,Y)";W1,X
    0x5616f8162b00 ---------- T 03110 X=X-A:A=C1-W1: IF X<0 THEN 3190
    0x5616f8162d60 ----------   03120 IF A<0 THEN 3210
    0x5616f8162fd0 ----------   03130 IF X>0 THEN 3150
    0x5616f8163480 ----------   03140 IF A=0 THEN C1=5: GOTO 3160
    0x5616f8163690 ---------- T 03150 C1=1
    0x5616f8163b00 ---------- T 03160 IF ABS(A)<= ABS(X) THEN 3180
    0x5616f81646c0 ----------   03170 PRINT "DIRECTION=";C1+((( ABS(A)- ABS(X))+ ABS(A))/ ABS(A));: GOTO 3250
    0x5616f8164f00 ---------- T 03180 PRINT "DIRECTION=";C1+( ABS(A)/( ABS(X)+.001));: GOTO 3250
    0x5616f81653a0 ---------- T 03190 IF A>0 THEN C1=3: GOTO 3220
    0x5616f8165830 ----------   03200 IF X<>0 THEN C1=5: GOTO 3160
    0x5616f8165a40 ---------- T 03210 C1=7
    0x5616f8165eb0 ---------- T 03220 IF ABS(A)>= ABS(X) THEN 3240
    0x5616f8166a60 ----------   03230 PRINT "DIRECTION=";C1+((( ABS(X)- ABS(A))+ ABS(X))/ ABS(X));: GOTO 3250
    0x5616f8167110 ---------- T 03240 PRINT "DIRECTION=";C1+( ABS(X)/ ABS(A));
    0x5616f81672a0 ---------- T 03250 PRINT "DISTANCE=";
    0x5616f8167bb0 ----------   03252 IF W1=B4 THEN PRINT SQR(X^2+A^2)/10: GOTO 3254
    0x5616f81680f0 ----------   03253 PRINT SQR(X^2+A^2)
    0x5616f8168340 ---------- T 03254 IF H8=1 THEN 590
    0x5616f8168520 ---------- T 03260 NEXT I: GOTO 590
    0x5616f8168d50 ---------- T 03270 IF B3<>0 THEN PRINT "FROM ENTERPRISE TO STAREBASE:":W1=B4:X=B5: GOTO 3060
    0x5616f8168ee0 ----------   03280 PRINT "MR SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS";
    0x5616f81690c0 ----------   03290 PRINT " QUADRANT '": GOTO 590
    0x5616f8169f10 ---------C B 03300 R1= RND(8):R2= RND(8):A$=" ":Z1=R1:Z2=R2: GOSUB 3460: IF Z3=0 THEN 3300
    0x5616f8169f70 ---------C   03310 RETURN 
    0x5616f816a9c0 ---------D G 03320 S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
    0x5616f816ae60 ---------D   03330 IF LEN(A$)<>3 THEN PRINT "ERROR": STOP 
    0x5616f816b5f0 ----------   03340 IF S8=1 THEN Q$=A$+ RIGHT$ (Q$,189): RETURN 
    0x5616f816bd80 ----------   03350 IF S8=190 THEN Q$= LEFT$ (Q$,189)+A$: RETURN 
    0x5616f816c7e0 ----------   03360 Q$= LEFT$ (Q$,S8-1)+A$+ RIGHT$ (Q$,190-S8): RETURN 
    0x5616f816cf80 ---------E G 03370 ON R1 GOTO 3380,3390,3400,3410,3420,3430,3440,3450
    0x5616f816d1e0 ---------E T 03380 G2$="WARP ENGINES": RETURN 
    0x5616f816d470 ---------E T 03390 G2$="SHORT RANGE SCANNERS": RETURN 
    0x5616f816d700 ---------E T 03400 G2$="LONG RANGE SCANNERS": RETURN 
    0x5616f816d980 ---------E T 03410 G2$="PHASER CONTROL": RETURN 
    0x5616f816dc00 ---------E T 03420 G2$="PHOTON TUBES": RETURN 
    0x5616f816de80 ---------E T 03430 G2$="DAMMAGE CONTROL": RETURN 
    0x5616f816e100 ---------E T 03440 G2$="SHIELD CONTROL": RETURN 
    0x5616f816e380 ---------E T 03450 G2$="LIBRARY-COMPUTER": RETURN 
    0x5616f816f670 ---------F G 03460 Z1= INT(Z1+.5):Z2= INT(Z2+.5):S8=(Z2-1)*3+(Z1-1)*24+1:Z3=0
    0x5616f816fba0 ---------F   03470 IF MID$(Q$,S8,3)<>A$ THEN RETURN 
    0x5616f816fdf0 ---------F   03480 Z3=1: RETURN 
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
   A) 0x5616f80cd5d0 (00001)   0x000000000000 (00000)   0x5616f816fdf0 (03480)   0x5616f814a420 (02420)   
   B) 0x5616f814c5e0 (02460)   0x5616f814c5e0 (02460)   0x5616f8150e30 (02555)   0x5616f8155850 (02670)   
   C) 0x5616f8169f10 (03300)   0x5616f8169f10 (03300)   0x5616f8169f70 (03310)   0x5616f8169f70 (03310)   
   D) 0x5616f816a9c0 (03320)   0x5616f816a9c0 (03320)   0x000000000000 (00000)   0x5616f816ae60 (03330)   
   E) 0x5616f816cf80 (03370)   0x5616f816cf80 (03370)   0x5616f816d1e0 (03380)   0x5616f816e380 (03450)   
   F) 0x5616f816f670 (03460)   0x5616f816f670 (03460)   0x5616f816fdf0 (03480)   0x5616f816fdf0 (03480)   


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
    A                        Float       
    A$                       String      
    A1$                      String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B3                       Float       
    B4                       Float       
    B5                       Float       
    B9                       Float       
    C               Array    Float           {0,8} {0,1} 
    C$                       String      
    C1                       Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D               Array    Float           {0,7} 
    D0                       Float       
    D1                       Float       
    D3                       Float       
    D4                       Float       
    D6                       Float       
    E                        Float       
    E0                       Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G               Array    Float           {0,7} {0,7} 
    G2$                      String      
    G5                       Float       
    H                        Float       
    H1                       Float       
    H8                       Float       
    HD              Array    Float           {0,9} 
    HEX$            Function String          args=1, int    
    I                        Float       
    II                       Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    IX                       Float       
    J                        Float       
    J0                       Float       
    JH                       Float       
    K               Array    Float           {0,2} {0,2} 
    K3                       Float       
    K7                       Float       
    K9                       Float       
    L                        Float       
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
    N               Array    Float           {0,2} 
    NA$                      String      
    O1$                      String      
    OCT$            Function String          args=1, float  
    P                        Float       
    P0                       Float       
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    PO                       Float       
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q               Array    Float           {0,9} 
    Q$                       String      
    Q1                       Float       
    Q2                       Float       
    Q4                       Float       
    Q5                       Float       
    R1                       Float       
    R2                       Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Float       
    S1                       Float       
    S2                       Float       
    S3                       Float       
    S8                       Float       
    S9                       Float       
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Float       
    T0                       Float       
    T8                       Float       
    T9                       Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TI                       Float       
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W1                       Float       
    X                        Float       
    X$                       String      
    X0$                      String      
    X1                       Float       
    X2                       Float       
    X3                       Float       
    X5                       Float       
    Y                        Float       
    Y3                       Float       
    Z               Array    Float           {0,7} {0,7} 
    Z$                       String      
    Z1                       Float       
    Z2                       Float       
    Z3                       Float       
    Z4                       Float       
    Z5                       Float       

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
    0x5616f80cd5d0 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x5616f80ddf60 ---------A   01010 REM trs1010 - TRS-80 Level II BASIC tokenized file
    0x5616f80dd850 ---------A T 01020 CLS 
    0x5616f80ded10 ---------A   01030 PRINT @210,"S U P E R S T A R T R E K"
    0x5616f80dee90 ---------A   01040 PRINT : PRINT 
    0x5616f80cd2f0 ---------A   01050 CLEAR 600
    0x5616f80def50 ---------A   01060 Z$=" "
    0x5616f80df010 ---------A   01070 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8): RANDOM 
    0x5616f80e65f0 ---------A   01080 T= INT( RND(0)*20+20)*100:T0=T:T9=25+ INT( RND(0)*10):D0=0:E=3000:E0=E
    0x5616f80e7bc0 ---------A   01090 P=10:PO=P:S9=200:S=0:B9=0:K9=0:X$="":X0$=" IS "
    0x5616f80e8a40 ---------A   01100 Q1= RND(8):Q2= RND(8):S1= RND(8):S2= RND(8)
    0x5616f80e95b0 ---------A   01110 FOR I=1 TO 9:C(I,1)=0:C(I,2)=0: NEXT I
    0x5616f80eaae0 ---------A   01120 C(3,1)=-1:C(2,1)=-1:C(4,1)=-1:C(4,2)=-1:C(5,2)=-1:C(6,2)=-1
    0x5616f80ec2f0 ---------A   01130 C(1,2)=1:C(2,2)=1:C(6,1)=1:C(7,1)=1:C(8,1)=1:C(8,2)=1:C(9,2)=1
    0x5616f80ec9b0 ---------A   01140 FOR I=1 TO 8:D(I)=0: NEXT I
    0x5616f80ecca0 ---------A   01150 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    0x5616f80edd10 ---------A   01160 FOR I=1 TO 8: FOR J=1 TO 8:K3=0:Z(I,J)=0:R1= RND(0)
    0x5616f80ee4e0 ---------A   01170 IF R1>.98 THEN K3=3:K9=K9+3: GOTO 1180
    0x5616f80efed0 ---------A T 01180 B3=0: IF RND(0)>.96 THEN B3=1:B9=B9+1
    0x5616f80f0f60 ---------A   01190 G(I,J)=K3*100+B3*10+ RND(8): NEXT J: NEXT I: IF K9>T9 THEN T9=K9+1
    0x5616f80f11e0 ---------A   01200 IF B9<>0 THEN 1230
    0x5616f80f1fd0 ---------A   01210 IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100:K9=K9+1
    0x5616f80f2e30 ---------A   01220 B9=1:G(Q1,Q2)=G(Q1,Q2)+10:Q1= RND(8):Q2= RND(8)
    0x5616f80f37a0 ---------A T 01230 K7=K9: IF B9<>1 THEN X$="S":X0$=" ARE "
    0x5616f80f3900 ---------A   01240 PRINT "YOUR ORDERS ARE AS FOLLOWES:"
    0x5616f80f3c60 ---------A   01250 PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
    0x5616f80f3e10 ---------A   01260 PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x5616f80f45c0 ---------A   01270 PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
    0x5616f80f4b60 ---------A   01280 PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
    0x5616f80f4e20 ---------A   01290 PRINT : INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
    0x5616f80f6770 ---------A   01300 Z4=Q1:Z5=Q2:K3=0:B3=0:S3=0:G5=0:D4=.5* RND(0):Z(Q1,Q2)=G(Q1,Q2)
    0x5616f80f7230 ---------A   01310 IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 1380
    0x5616f80f72b0 ---------A   01320 REM 
    0x5616f80f80a0 ---------A   01330 K3= INT(G(Q1,Q2)*.01):B3= INT(G(Q1,Q2)*.1)-10*K3
    0x5616f80f8b30 ---------A   01340 S3=G(Q1,Q2)-100*K3-10*B3: IF K3=0 THEN 1370
    0x5616f80f8f30 ---------A   01350 CLS : PRINT @396,"COMBAT AREA CONDITION RED": IF S>200 THEN 1370
    0x5616f80f90c0 ---------A   01360 PRINT @463,"SHIELDS DANGEROUSLY LOW"
    0x5616f80f9bd0 ---------A T 01370 FOR I=1 TO 3:K(I,1)=0:K(I,2)=0: NEXT I
    0x5616f80fb020 ---------A T 01380 FOR I=1 TO 3:K(I,3)=0: NEXT I:Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
    0x5616f80fbb40 ---------A   01390 A$="<*>":Z1=S1:Z2=S2: GOSUB 3320: IF K3<1 THEN 1420
    0x5616f80fc5b0 ---------A   01400 FOR I=1 TO K3: GOSUB 3300:A$="+K+":Z1=R1:Z2=R2
    0x5616f80fd550 ---------A   01410 GOSUB 3320:K(I,1)=R1:K(I,1)=R2:K(I,3)=S9*(.5+ RND(0)): NEXT I
    0x5616f80fd7e0 ---------A T 01420 IF B3<1 THEN 1440
    0x5616f80fe4a0 ---------A   01430 GOSUB 3300:A$=">!<":Z1=R1:B4=R1:Z2=R2:B5=R2: GOSUB 2010
    0x5616f80fef50 ---------A T 01440 FOR I=1 TO S3: GOSUB 3300:A$=" * ":Z1=R1:Z2=R2: GOSUB 3320: NEXT I
    0x5616f80feff0 ---------A   01450 GOSUB 1780
    0x5616f80ff8b0 ---------A   01460 IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
    0x5616f80ffc90 ---------A   01470 CLS : PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
    0x5616f80ffe60 ---------A   01480 PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
    0x5616f8100130 ---------A   01490 PRINT " AND SHIELD CONTROL.": PRINT "IS PRESENTLY INCAPABLE OF CROSS";
    0x5616f8100300 ---------A   01500 PRINT "-CIRUITING TO ENGINE ROOM!!": GOTO 1520
    0x5616f812d960 ---------A   01510 REM 
    0x5616f8148b50 ---------A T 01520 PRINT "IT IS STARDATE";T: FOR I=1 TO 1500: NEXT I: GOTO 1530
    0x5616f81497f0 ---------A T 01530 CLS : PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
    0x5616f8149960 ---------A   01540 PRINT "THE END OF YOUR MISSION."
    0x5616f8149c80 ---------A   01550 PRINT : PRINT : IF B9=0 THEN 1590
    0x5616f8149e30 ---------A   01560 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x5616f8149fe0 ---------A   01570 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x5616f814a3c0 ---------A   01580 INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$: IF A$="AYE" THEN 1020
    0x5616f814a420 ---------A T 01590 END 
    0x5616f8169f10 ---------- T 01600 R1= RND(8):R2= RND(8):A$=" ":Z1=R1:Z2=R2: GOSUB 3460: IF Z3=0 THEN 1600
    0x5616f8178b50 ----------   01610 GOTO 01620
    0x5616f8178bb0 ---------- T 01620 RETURN
    0x5616f8178c10 ----------   01630 RETURN
    0x5616f816cf80 ----------   01640 ON R1 GOTO 1650,1660,1670,1680,1690,1700,1710,1720
    0x5616f8178c70 ---------- T 01650 GOTO 01730
    0x5616f8178cd0 ---------- T 01660 GOTO 01730
    0x5616f8178d30 ---------- T 01670 GOTO 01730
    0x5616f8178d90 ---------- T 01680 GOTO 01730
    0x5616f8178df0 ---------- T 01690 GOTO 01730
    0x5616f8178e50 ---------- T 01700 GOTO 01730
    0x5616f8178eb0 ---------- T 01710 GOTO 01730
    0x5616f8178f10 ---------- T 01720 GOTO 01730
    0x5616f8178f70 ---------- T 01730 RETURN
    0x5616f816f670 ----------   01740 Z1= INT(Z1+.5):Z2= INT(Z2+.5):S8=(Z2-1)*3+(Z1-1)*24+1:Z3=0
    0x5616f816fba0 ----------   01750 IF MID$(Q$,S8,3)<>A$ THEN RETURN 
    0x5616f8178fd0 ----------   01760 GOTO 01770
    0x5616f8179030 ---------- T 01770 RETURN
    0x5616f814c5e0 ---------B G 01780 FOR I=S1-1 TO S1+1: FOR J=S2-1 TO S2+1
    0x5616f814d640 ---------B   01790 IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 1810
    0x5616f814df20 ---------B   01800 A$=">!<":Z1=I:Z2=J: GOSUB 3460: IF Z3=1 THEN 1820
    0x5616f814e3e0 ---------B T 01810 NEXT J: NEXT I:D0=0: GOTO 1840
    0x5616f814ed70 ---------B T 01820 D0=1:C$="DOCKED":E=E0:P=P0
    0x5616f814f5d0 ---------B   01830 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES": FOR IX=1 TO 1500: NEXT IX:S=0: GOTO 1850
    0x5616f814faa0 ---------B T 01840 IF K3>0 THEN C$="*RED*": GOTO 1850
    0x5616f8150580 ---------B T 01850 IF D(2)>=0 THEN 1880
    0x5616f8150c50 ---------B   01860 IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS : PRINT 
    0x5616f8178a70 ---------B   01870 GOTO 02000
    0x5616f8151520 ---------B T 01880 CLS :O1$="---------------------------------": PRINT O1$: FOR I=1 TO 8
    0x5616f8152570 ---------B   01890 FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3: PRINT " "; MID$(Q$,J,3);: NEXT J
    0x5616f8152d10 ---------B   01900 ON I GOTO 1910,1920,1930,1940,1950,1960,1970,1980
    0x5616f811f420 ---------B T 01910 PRINT " STARDATE "; INT(T*10)*.1: GOTO 1990
    0x5616f8153d70 ---------B T 01920 PRINT " CONDITION ";C$: GOTO 1990
    0x5616f8154200 ---------B T 01930 PRINT " QUADRANT ";Q1;",";Q2: GOTO 1990
    0x5616f81546b0 ---------B T 01940 PRINT " SECTOR ";S1;",";S2: GOTO 1990
    0x5616f8154a40 ---------B T 01950 PRINT " PHOTON TORPEDOES "; INT(P): GOTO 1990
    0x5616f8154ef0 ---------B T 01960 PRINT " TOTAL ENERGY "; INT(E+S): GOTO 1990
    0x5616f8155280 ---------B T 01970 PRINT " SHIELDS "; INT(S): GOTO 1990
    0x5616f81555b0 ---------B T 01980 PRINT " KLINGONS REMAINING "; INT(K9)
    0x5616f8178ab0 ---------B T 01990 GOTO 02000
    0x5616f8178af0 ---------B T 02000 RETURN
    0x5616f816a9c0 ---------C G 02010 S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
    0x5616f816ae60 ---------C   02020 IF LEN(A$)<>3 THEN PRINT "ERROR": STOP 
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
float  A_flt;                                     // Basic: A 
char*  A_str;                                     // Basic: A$ 
char*  A1_str;                                    // Basic: A1$ 
float  B3_flt;                                    // Basic: B3 
float  B4_flt;                                    // Basic: B4 
float  B5_flt;                                    // Basic: B5 
float  B9_flt;                                    // Basic: B9 
float  C_flt_arr[9][2];                           // Basic: C 
char*  C_str;                                     // Basic: C$ 
float  C1_flt;                                    // Basic: C1 
float  D_flt_arr[8];                              // Basic: D 
float  D0_flt;                                    // Basic: D0 
float  D1_flt;                                    // Basic: D1 
float  D3_flt;                                    // Basic: D3 
float  D4_flt;                                    // Basic: D4 
float  D6_flt;                                    // Basic: D6 
float  E_flt;                                     // Basic: E 
float  E0_flt;                                    // Basic: E0 
float  G_flt_arr[8][8];                           // Basic: G 
char*  G2_str;                                    // Basic: G2$ 
float  G5_flt;                                    // Basic: G5 
float  H_flt;                                     // Basic: H 
float  H1_flt;                                    // Basic: H1 
float  H8_flt;                                    // Basic: H8 
float  HD_flt_arr[10];                            // Basic: HD 
float  I_flt;                                     // Basic: I 
float  II_flt;                                    // Basic: II 
float  IX_flt;                                    // Basic: IX 
float  J_flt;                                     // Basic: J 
float  J0_flt;                                    // Basic: J0 
float  JH_flt;                                    // Basic: JH 
float  K_flt_arr[3][3];                           // Basic: K 
float  K3_flt;                                    // Basic: K3 
float  K7_flt;                                    // Basic: K7 
float  K9_flt;                                    // Basic: K9 
float  L_flt;                                     // Basic: L 
float  N_flt_arr[3];                              // Basic: N 
char*  NA_str;                                    // Basic: NA$ 
char*  O1_str;                                    // Basic: O1$ 
float  P_flt;                                     // Basic: P 
float  P0_flt;                                    // Basic: P0 
float  PO_flt;                                    // Basic: PO 
float  Q_flt_arr[10];                             // Basic: Q 
char*  Q_str;                                     // Basic: Q$ 
float  Q1_flt;                                    // Basic: Q1 
float  Q2_flt;                                    // Basic: Q2 
float  Q4_flt;                                    // Basic: Q4 
float  Q5_flt;                                    // Basic: Q5 
float  R1_flt;                                    // Basic: R1 
float  R2_flt;                                    // Basic: R2 
float  S_flt;                                     // Basic: S 
float  S1_flt;                                    // Basic: S1 
float  S2_flt;                                    // Basic: S2 
float  S3_flt;                                    // Basic: S3 
float  S8_flt;                                    // Basic: S8 
float  S9_flt;                                    // Basic: S9 
float  T_flt;                                     // Basic: T 
float  T0_flt;                                    // Basic: T0 
float  T8_flt;                                    // Basic: T8 
float  T9_flt;                                    // Basic: T9 
float  TI_flt;                                    // Basic: TI 
float  W1_flt;                                    // Basic: W1 
float  X_flt;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
char*  X0_str;                                    // Basic: X0$ 
float  X1_flt;                                    // Basic: X1 
float  X2_flt;                                    // Basic: X2 
float  X3_flt;                                    // Basic: X3 
float  X5_flt;                                    // Basic: X5 
float  Y_flt;                                     // Basic: Y 
float  Y3_flt;                                    // Basic: Y3 
float  Z_flt_arr[8][8];                           // Basic: Z 
char*  Z_str;                                     // Basic: Z$ 
float  Z1_flt;                                    // Basic: Z1 
float  Z2_flt;                                    // Basic: Z2 
float  Z3_flt;                                    // Basic: Z3 
float  Z4_flt;                                    // Basic: Z4 
float  Z5_flt;                                    // Basic: Z5 
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
    for(J_flt=S2_flt-1;J_flt<=S2_flt+1;J_flt++){
        // 01790 IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 1810
        if(INT(I_flt+0.5)<1||INT(I_flt+0.5)>8||INT(J_flt+0.5)<1||INT(J_flt+0.5)>8)goto Lbl_01810;
        // 01800 A$=">!<":Z1=I:Z2=J: GOSUB 3460: IF Z3=1 THEN 1820
        if(Z3_flt==1)goto Lbl_01820;

  Lbl_01810:
        // 01810 NEXT J: NEXT I:D0=0: GOTO 1840
        goto Lbl_01840;

  Lbl_01820:
        // 01820 D0=1:C$="DOCKED":E=E0:P=P0
        P_flt = P0_flt;
        // 01830 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES": FOR IX=1 TO 1500: NEXT IX:S=0: GOTO 1850
        goto Lbl_01850;

  Lbl_01840:
        // 01840 IF K3>0 THEN C$="*RED*": GOTO 1850
        goto Lbl_01850;

  Lbl_01850:
        // 01850 IF D(2)>=0 THEN 1880
        if(D_flt_arr[2]>=0)goto Lbl_01880;
        // 01860 IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS : PRINT 
        b2c_printf("");
        // 01870 GOTO 02000
        goto Lbl_02000;

  Lbl_01880:
        // 01880 CLS :O1$="---------------------------------": PRINT O1$: FOR I=1 TO 8
        for(I_flt=1;I_flt<=8;I_flt++){
            // 01890 FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3: PRINT " "; MID$(Q$,J,3);: NEXT J
            int dummy_1890=0; // Ignore this line.
        }; // End-For(J_flt)
        // 01900 ON I GOTO 1910,1920,1930,1940,1950,1960,1970,1980
        switch((int)(I_flt)){
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
        b2c_printf(" klingons remaining ");

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
        S8_flt = INT(Z2_flt-0.5)*3+INT(Z1_flt-0.5)*24+1;
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
    b2c_printf("S u p e r s t a r t r e k\n");
    // 01040 PRINT : PRINT 
    b2c_printf("\n");
    // 01050 CLEAR 600
    ClearMemory(600,4294967295);
    // 01060 Z$=" "
    GLBpStr=" ";
    Z_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01070 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8): RANDOM 
    RANDOMIZE();
    // 01080 T= INT( RND(0)*20+20)*100:T0=T:T9=25+ INT( RND(0)*10):D0=0:E=3000:E0=E
    E0_flt = E_flt;
    // 01090 P=10:PO=P:S9=200:S=0:B9=0:K9=0:X$="":X0$=" IS "
    GLBpStr=" is ";
    X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01100 Q1= RND(8):Q2= RND(8):S1= RND(8):S2= RND(8)
    S2_flt = RND(8);
    // 01110 FOR I=1 TO 9:C(I,1)=0:C(I,2)=0: NEXT I
    int dummy_1110=0; // Ignore this line.
}; // End-For(I_flt)
// 01120 C(3,1)=-1:C(2,1)=-1:C(4,1)=-1:C(4,2)=-1:C(5,2)=-1:C(6,2)=-1
C_flt_arr[6][2] = -1;
// 01130 C(1,2)=1:C(2,2)=1:C(6,1)=1:C(7,1)=1:C(8,1)=1:C(8,2)=1:C(9,2)=1
C_flt_arr[9][2] = 1;
// 01140 FOR I=1 TO 8:D(I)=0: NEXT I
int dummy_1140=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_flt)
r* CName(const char*)// 01150 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
r* CName(const char*)GLBpStr="Navsrslrsphatorshedamcomxxx";
r* CName(const char*)A1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
r* CName(const char*)// 01160 FOR I=1 TO 8: FOR J=1 TO 8:K3=0:Z(I,J)=0:R1= RND(0)
r* CName(const char*)R1_flt = RND(0);
r* CName(const char*)// 01170 IF R1>.98 THEN K3=3:K9=K9+3: GOTO 1180
r* CName(const char*)goto Lbl_01180;

  Lbl_01180:
r* CName(const char*)// 01180 B3=0: IF RND(0)>.96 THEN B3=1:B9=B9+1
r* CName(const char*)B9_flt = B9_flt+1;
r* CName(const char*)// 01190 G(I,J)=K3*100+B3*10+ RND(8): NEXT J: NEXT I: IF K9>T9 THEN T9=K9+1
r* CName(const char*)if(K9_flt>T9_flt) {
r* CName(const char*)}
r* CName(const char*)// 01200 IF B9<>0 THEN 1230
r* CName(const char*)if(B9_flt!=0)goto Lbl_01230;
r* CName(const char*)// 01210 IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100:K9=K9+1
r* CName(const char*)K9_flt = K9_flt+1;
r* CName(const char*)// 01220 B9=1:G(Q1,Q2)=G(Q1,Q2)+10:Q1= RND(8):Q2= RND(8)
r* CName(const char*)Q2_flt = RND(8);

  Lbl_01230:
r* CName(const char*)// 01230 K7=K9: IF B9<>1 THEN X$="S":X0$=" ARE "
r* CName(const char*)GLBpStr=" are ";
r* CName(const char*)X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
r* CName(const char*)// 01240 PRINT "YOUR ORDERS ARE AS FOLLOWES:"
r* CName(const char*)b2c_printf("Your orders are as followes:\n");
r* CName(const char*)// 01250 PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
r* CName(const char*)b2c_printf(" destroy the %.2f  destroy theKlingon warships which have invaded\n",K9_flt);
r* CName(const char*)// 01260 PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
r* CName(const char*)b2c_printf(" the galaxy before they can attack federation headquarters\n");
r* CName(const char*)// 01270 PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
r* CName(const char*)b2c_printf(" on stardate this gives you %.2f  this gives youDays. ThereDays. There%s\n",T9_flt,X0_str);
r* CName(const char*)// 01280 PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
r* CName(const char*)b2c_printf("  %.2f  StarbaseStarbase%sStarbase in the galaxy for resuplying your ship.\n",B9_flt,X_str);
r* CName(const char*)// 01290 PRINT : INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
r* CName(const char*)// Start of Basic INPUT statement 01290
r* CName(const char*){
int numargs=1;
char *args[numargs+1];
bool echoeol=true;
while(true){
    fprintf(stdout,""ENTER YOUR NAME IN THE CAPTAIN'S LOG"");
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
r* CName(const char*)Z_flt_arr[(int)Q1_flt][(int)Q2_flt] = G_flt_arr[(int)Q1_flt][(int)Q2_flt];
r* CName(const char*)// 01310 IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 1380
r* CName(const char*)if(Q1_flt<1||Q1_flt>8||Q2_flt<1||Q2_flt>8)goto Lbl_01380;
r* CName(const char*)// 01320 REM 
r* CName(const char*)// 01330 K3= INT(G(Q1,Q2)*.01):B3= INT(G(Q1,Q2)*.1)-10*K3
r* CName(const char*)B3_flt = INT(G_flt_arr[(int)Q1_flt][(int)Q2_flt]*0.1)-10*K3_flt;
r* CName(const char*)// 01340 S3=G(Q1,Q2)-100*K3-10*B3: IF K3=0 THEN 1370
r* CName(const char*)if(K3_flt==0)goto Lbl_01370;
r* CName(const char*)// 01350 CLS : PRINT @396,"COMBAT AREA CONDITION RED": IF S>200 THEN 1370
r* CName(const char*)if(S_flt>200)goto Lbl_01370;
r* CName(const char*)// 01360 PRINT @463,"SHIELDS DANGEROUSLY LOW"
r* CName(const char*)b2c_printf("Shields dangerously low\n");

  Lbl_01370:
r* CName(const char*)// 01370 FOR I=1 TO 3:K(I,1)=0:K(I,2)=0: NEXT I
r* CName(const char*)int dummy_1370=0; // Ignore this line.
Name(const char*)}; // End-For(I_flt)

  Lbl_01380:
Name(const char*)// 01380 FOR I=1 TO 3:K(I,3)=0: NEXT I:Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
Name(const char*)GLBpStr=StringCat(StringCat(StringCat(StringCat(StringCat(StringCat(StringCat(Z_str,Z_str),Z_str),Z_str),Z_str),Z_str),Z_str),LEFT$(Z_str,17));
Name(const char*)Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
Name(const char*)// 01390 A$="<*>":Z1=S1:Z2=S2: GOSUB 3320: IF K3<1 THEN 1420
Name(const char*)if(K3_flt<1)goto Lbl_01420;
Name(const char*)// 01400 FOR I=1 TO K3: GOSUB 3300:A$="+K+":Z1=R1:Z2=R2
Name(const char*)Z2_flt = R2_flt;
Name(const char*)// 01410 GOSUB 3320:K(I,1)=R1:K(I,1)=R2:K(I,3)=S9*(.5+ RND(0)): NEXT I
Name(const char*)int dummy_1410=0; // Ignore this line.
(const char*)}; // End-For(I_flt)

  Lbl_01420:
(const char*)// 01420 IF B3<1 THEN 1440
(const char*)if(B3_flt<1)goto Lbl_01440;
(const char*)// 01430 GOSUB 3300:A$=">!<":Z1=R1:B4=R1:Z2=R2:B5=R2: GOSUB 2010
(const char*)Routine_02010();

  Lbl_01440:
(const char*)// 01440 FOR I=1 TO S3: GOSUB 3300:A$=" * ":Z1=R1:Z2=R2: GOSUB 3320: NEXT I
(const char*)int dummy_1440=0; // Ignore this line.
st char*)}; // End-For(I_flt)
st char*)// 01450 GOSUB 1780
st char*)Routine_01780();
st char*)// 01460 IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
st char*)if(S_flt+E_flt>10) {
st char*)}
st char*)// 01470 CLS : PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
st char*)b2c_printf("Captain %sCaptain ! You've just stranded your ship in space!\n",NA_str);
st char*)// 01480 PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
st char*)b2c_printf("You have insufficient manuvering energy,");
st char*)// 01490 PRINT " AND SHIELD CONTROL.": PRINT "IS PRESENTLY INCAPABLE OF CROSS";
st char*)b2c_printf("Is presently incapable of cross");
st char*)// 01500 PRINT "-CIRUITING TO ENGINE ROOM!!": GOTO 1520
st char*)goto Lbl_01520;
st char*)// 01510 REM 

  Lbl_01520:
st char*)// 01520 PRINT "IT IS STARDATE";T: FOR I=1 TO 1500: NEXT I: GOTO 1530
st char*)goto Lbl_01530;

  Lbl_01530:
st char*)// 01530 CLS : PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
st char*)b2c_printf("There were %.2f There wereKlingon battle cruisers left at\n",K9_flt);
st char*)// 01540 PRINT "THE END OF YOUR MISSION."
st char*)b2c_printf("The end of your mission.\n");
st char*)// 01550 PRINT : PRINT : IF B9=0 THEN 1590
st char*)if(B9_flt==0)goto Lbl_01590;
st char*)// 01560 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
st char*)b2c_printf("The federation is in need of a new starship commander\n");
st char*)// 01570 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
st char*)b2c_printf("For a similar mission -- if there is a volunteer,\n");
st char*)// 01580 INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$: IF A$="AYE" THEN 1020
st char*)if(strcmp(A_str,"Aye")==0)goto Lbl_01020;

  Lbl_01590:
st char*)// 01590 END 
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
