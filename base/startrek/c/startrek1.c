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
    0x5aca956bbdd0 ---------A   00001  REM NOTE: Basic language type forced to be:
    0x5aca956baba0 ---------A   00002  REM trs2 - TRS-80 Level II BASIC tokenized file
    0x5aca956bbf50 ---------A T 00010  CLS 
    0x5aca956b96d0 ---------A   00020  PRINT @210,"S U P E R S T A R T R E K"
    0x5aca956ba2d0 ---------A   00030  PRINT : PRINT 
    0x5aca956bc010 ---------A   00100  CLEAR 600
    0x5aca956bc0d0 ---------A   00110  Z$=" "
    0x5aca956c1df0 ---------A   00120  DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8): RANDOM 
    0x5aca956c36d0 ---------A   00130  T= INT( RND(0)*20+20)*100:T0=T:T9=25+ INT( RND(0)*10):D0=0:E=3000:E0=E
    0x5aca956c4ca0 ---------A   00140  P=10:PO=P:S9=200:S=0:B9=0:K9=0:X$="":X0$=" IS "
    0x5aca956c5b20 ---------A   00170  Q1= RND(8):Q2= RND(8):S1= RND(8):S2= RND(8)
    0x5aca956c66f0 ---------A   00180  FOR I=1 TO 9:C(I,1)=0:C(I,2)=0: NEXT I
    0x5aca956c7c30 ---------A   00190  C(3,1)=-1:C(2,1)=-1:C(4,1)=-1:C(4,2)=-1:C(5,2)=-1:C(6,2)=-1
    0x5aca956c9440 ---------A   00200  C(1,2)=1:C(2,2)=1:C(6,1)=1:C(7,1)=1:C(8,1)=1:C(8,2)=1:C(9,2)=1
    0x5aca956c9b00 ---------A   00210  FOR I=1 TO 8:D(I)=0: NEXT I
    0x5aca956c9e00 ---------A   00220  A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    0x5aca956cae70 ---------A   00230  FOR I=1 TO 8: FOR J=1 TO 8:K3=0:Z(I,J)=0:R1= RND(0)
    0x5aca956cb640 ---------A   00240  IF R1>.98 THEN K3=3:K9=K9+3: GOTO 270
    0x5aca956cbdd0 ----------   00250  IF R1>.95 THEN K3=2:K9=K9+2: GOTO 270
    0x5aca956cc550 ----------   00260  IF R1>.8 THEN K3=1:K9=K9+1
    0x5aca956cd050 ---------A T 00270  B3=0: IF RND(0)>.96 THEN B3=1:B9=B9+1
    0x5aca956ce100 ---------A   00280  G(I,J)=K3*100+B3*10+ RND(8): NEXT J: NEXT I: IF K9>T9 THEN T9=K9+1
    0x5aca956ce380 ---------A   00290  IF B9<>0 THEN 320
    0x5aca956cf170 ---------A   00300  IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100:K9=K9+1
    0x5aca956cffd0 ---------A   00310  B9=1:G(Q1,Q2)=G(Q1,Q2)+10:Q1= RND(8):Q2= RND(8)
    0x5aca956d0940 ---------A T 00320  K7=K9: IF B9<>1 THEN X$="S":X0$=" ARE "
    0x5aca956d0aa0 ---------A   00330  PRINT "YOUR ORDERS ARE AS FOLLOWES:"
    0x5aca956d0e10 ---------A   00340  PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
    0x5aca956d0fd0 ---------A   00350  PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x5aca956d1790 ---------A   00360  PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
    0x5aca956d1d40 ---------A   00370  PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
    0x5aca956d2020 ---------A   00380  PRINT : INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
    0x5aca956d3970 ---------A T 00400  Z4=Q1:Z5=Q2:K3=0:B3=0:S3=0:G5=0:D4=.5* RND(0):Z(Q1,Q2)=G(Q1,Q2)
    0x5aca956d4430 ---------A   00410  IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 510
    0x5aca956d44b0 ---------A   00450  REM 
    0x5aca956d52b0 ---------A   00460  K3= INT(G(Q1,Q2)*.01):B3= INT(G(Q1,Q2)*.1)-10*K3
    0x5aca956d5d40 ---------A   00470  S3=G(Q1,Q2)-100*K3-10*B3: IF K3=0 THEN 500
    0x5aca956d6160 ---------A   00480  CLS : PRINT @396,"COMBAT AREA CONDITION RED": IF S>200 THEN 500
    0x5aca956d62f0 ---------A   00490  PRINT @463,"SHIELDS DANGEROUSLY LOW"
    0x5aca956d6e10 ---------A T 00500  FOR I=1 TO 3:K(I,1)=0:K(I,2)=0: NEXT I
    0x5aca956d8280 ---------A T 00510  FOR I=1 TO 3:K(I,3)=0: NEXT I:Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
    0x5aca956d8db0 ---------A   00520  A$="<*>":Z1=S1:Z2=S2: GOSUB 3320: IF K3<1 THEN 550
    0x5aca956d9830 ---------A   00530  FOR I=1 TO K3: GOSUB 3300:A$="+K+":Z1=R1:Z2=R2
    0x5aca956da7e0 ---------A   00540  GOSUB 3320:K(I,1)=R1:K(I,1)=R2:K(I,3)=S9*(.5+ RND(0)): NEXT I
    0x5aca956daa80 ---------A T 00550  IF B3<1 THEN 570
    0x5aca956db750 ---------A   00560  GOSUB 3300:A$=">!<":Z1=R1:B4=R1:Z2=R2:B5=R2: GOSUB 3320
    0x5aca956dc230 ---------A T 00570  FOR I=1 TO S3: GOSUB 3300:A$=" * ":Z1=R1:Z2=R2: GOSUB 3320: NEXT I
    0x5aca956dc2e0 ---------A T 00580  GOSUB 2460
    0x5aca956dcbb0 ---------A T 00590  IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
    0x5aca956dcfa0 ---------A   00600  CLS : PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
    0x5aca956dd180 ---------A   00610  PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
    0x5aca956dd470 ---------A   00620  PRINT " AND SHIELD CONTROL.": PRINT "IS PRESENTLY INCAPABLE OF CROSS";
    0x5aca956dd660 ---------A   00630  PRINT "-CIRUITING TO ENGINE ROOM!!": GOTO 2330
    0x5aca956dda40 ----------   00640  PRINT "YOUR ORDERS, CAPTAIN ";NA$;: INPUT A$
    0x5aca956de5d0 ----------   00650  FOR I=1 TO 9: IF LEFT$ (A$,3)<> MID$ (A1$,3*I-2,3) THEN 670
    0x5aca956dee10 ----------   00660  ON I GOTO 770,580,1410,1490,1680,1990,2070,2680,2360
    0x5aca956df110 ---------- T 00670  NEXT I: CLS : PRINT "ENTER ONE OF THE FOLOWING:"
    0x5aca956df290 ----------   00680  PRINT " NAV(TO SET COURSE)"
    0x5aca956df420 ----------   00690  PRINT " SRS(FOR SHORT RANGE SENSOR SCAN)"
    0x5aca956df5a0 ----------   00700  PRINT " LRS(FOR LONG RANGE SENSOR SCAN)"
    0x5aca956df720 ----------   00710  PRINT " PHA(TO FIRE PHASERS)"
    0x5aca956df8b0 ----------   00720  PRINT " TOR(TO FIRE PHOTON TORPEDOES)"
    0x5aca956dfa40 ----------   00730  PRINT " SHE(TO RAISE OR LOWER SHIELDS)"
    0x5aca956dfbd0 ----------   00740  PRINT " DAM(FOR DAMAGE CONTROAL REPORTS)"
    0x5aca956dfd70 ----------   00750  PRINT " COM(TO CALL ON LIBRARY-COMPUTER)"
    0x5aca956e03d0 ----------   00760  PRINT " XXX(TO RESIGN YOUR COMAND)": PRINT : GOTO 590
    0x5aca956e0a40 ---------- T 00770  INPUT "COURSE(0-9)";C1: IF C1=9 THEN C1=1
    0x5aca956e0ef0 ----------   00780  IF C1>=1 AND C1<9 THEN 800
    0x5aca956e10e0 ----------   00790  PRINT " LT. SULU REPORTS, 'INCORECT COURSE DATA, SIR!'": GOTO 590
    0x5aca956e1850 ---------- T 00800  X$="8": IF D(1)<0 THEN X$="0.2"
    0x5aca956e2300 ----------   00810  PRINT "WARP FACTOR(0-";X$;")";: INPUT W1: IF D(1)<0 AND W1>.2 THEN 860
    0x5aca956e2780 ----------   00820  IF W1>0 AND W1<=8 THEN 870
    0x5aca956e2a20 ----------   00830  IF W1=0 THEN 590
    0x5aca956e2e50 ----------   00840  PRINT " CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T TAKEWARP";W1;"!": GOTO 590
    0x5aca956e3040 ---------- T 00860  PRINT "WARP ENGINES ARE DAMMAGED. MAXIMUM SPEED=WARP 0.2": GOTO 590
    0x5aca956e38d0 ---------- T 00870  N= INT(W1*8+.5): IF E-N>=0 THEN 940
    0x5aca956e3a70 ----------   00880  PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x5aca956e3f30 ----------   00890  PRINT TAB(23)"FOR MANUVERING AT WARP";W1;"!"
    0x5aca956e45e0 ----------   00900  IF S<N-E OR D(7)<0 THEN 590
    0x5aca956e4970 ----------   00910  PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEDGES";S;"UNITS OF ENERGY"
    0x5aca956e4c20 ----------   00920  PRINT TAB(23)"PRESENTLY DEPLOYED TO SHIELDS."
    0x5aca956e4cc0 ----------   00930  GOTO 590
    0x5aca956e53b0 ---------- T 00940  FOR I=1 TO K3: IF K(I,3)=0 THEN 970
    0x5aca956e5e10 ----------   00950  A$=" ":Z1=K(I,1):Z2=K(I,2): GOSUB 3320: GOSUB 3300
    0x5aca956e6810 ----------   00960  K(I,1)=Z1:K(I,2)=Z2:A$="+K+": GOSUB 3320
    0x5aca956e7360 ---------- T 00970  NEXT I: GOSUB 2220:D1=0:D6=W1: IF W1>=1 THEN D6=1
    0x5aca956e7990 ----------   00980  FOR I=1 TO 8: IF D(I)>=0 THEN 1030
    0x5aca956e8800 ----------   00990  D(I)=D(I)+D6: IF D(I)>-.1 AND D(I)<0 THEN D(I)=-.1: GOTO 1030
    0x5aca956e8b50 ----------   01000  IF D(I)<0 THEN 1030
    0x5aca956e9110 ----------   01010  IF D1<>1 THEN D1=1: PRINT "DAMAGE CONTROL REPORT"
    0x5aca956e9840 ----------   01020  PRINT TAB(8);:R1=I: GOSUB 3370: PRINT G2$;" REPAIR COMPLEATED"
    0x5aca956e9cb0 ---------- T 01030  NEXT I: IF RND(0)>.2 THEN 1090
    0x5aca956ea2d0 ----------   01040  R1= RND(8): IF RND(0)>=6 THEN 1070
    0x5aca956ead40 ----------   01050  Q(R1)=D(R1)-( RND(0)*5+1): PRINT "DAMAGE CONTROL REPORT:";
    0x5aca956eb0e0 ----------   01060  GOSUB 3370: PRINT G2$;" DAMAGED": PRINT : GOTO 1090
    0x5aca956eba20 ---------- T 01070  D(R1)=D(R1)+ RND(0)*3+1: PRINT "DAMAGE CONTROL REPORT:"
    0x5aca956ebd60 ----------   01080  GOSUB 3370: PRINT G2$;" STATE OF REPAIR IMPROVED": PRINT 
    0x5aca956ec600 ---------- T 01090  A$=" ":Z1= INT(S1):Z2= INT(S2): GOSUB 3320
    0x5aca956eda80 ----------   01100  X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1)):X=S1:Y=S2
    0x5aca956eef10 ----------   01110  X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1)):Q4=Q1:Q5=Q2
    0x5aca956f0130 ----------   01120  FOR I=1 TO N:S1=S1+X1:S2=S2+X2: IF S1<1 OR S1>=9 OR S2<1 OR S2>=9 THEN 1210
    0x5aca956f0f20 ----------   01130  S8= INT(S1)*24+ INT(S2)*3-26: IF MID$ (Q$,S8,2)=" " THEN 1160
    0x5aca956f1900 ----------   01140  S1= INT(S1-X1):S2= INT(S2-X2): PRINT "WARP ENGINES SHUT DOWN AT ";
    0x5aca956f1ee0 ----------   01150  PRINT "SECTOR";S1;",";S2;"DUE TO BAD NAVIGATION.": GOTO 1170
    0x5aca956f2640 ---------- T 01160  NEXT I:S1= INT(S1):S2= INT(S2)
    0x5aca956f31b0 ---------- T 01170  A$="<*>":Z1= INT(S1):Z2= INT(S2): GOSUB 3320: GOSUB 1370:T8=1
    0x5aca956f3900 ----------   01180  IF W1<1 THEN T8=.1* INT(10*W1)
    0x5aca956f3fd0 ----------   01190  T=T+T8: IF T>T0+T9 THEN 2330
    0x5aca956f4090 ----------   01200  GOTO 580
    0x5aca956f5aa0 ---------- T 01210  X=8*Q1+X+N*X1:Y=8*Q2+Y+N*X2:Q1= INT(X/8):Q2= INT(Y/8):S1= INT(X-Q1*8)
    0x5aca956f6720 ----------   01220  S2= INT(Y-Q2*8): IF S1=0 THEN Q1=Q1-1:S1=8
    0x5aca956f6e90 ----------   01230  IF S2=0 THEN Q2=Q2-1:S2=8
    0x5aca956f7980 ----------   01240  X5=0: IF Q1<1 THEN X5=1:Q1=1:S1=1
    0x5aca956f81c0 ----------   01250  IF Q1>8 THEN X5=1:Q1=8:S1=8
    0x5aca956f8a00 ----------   01260  IF Q2<1 THEN X5=1:Q2=1:S2=1
    0x5aca956f9230 ----------   01270  IF Q2>8 THEN X5=1:Q2=8:S2=8
    0x5aca956f94b0 ----------   01280  IF X5=0 THEN 1350
    0x5aca956f9660 ----------   01290  PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMAND:"
    0x5aca956f9820 ----------   01300  PRINT " 'PREMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMITER"
    0x5aca956f99d0 ----------   01310  PRINT " IS HEREBY *DENIED*. SHUT DOWN YOUR ENGINES.'"
    0x5aca956f9b80 ----------   01320  PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x5aca956fa4f0 ----------   01330  PRINT "AT SECTOR";S1;",";S2;"OF QUADRENT";Q1;",";Q2;"'"
    0x5aca956fa8a0 ----------   01340  IF T>T0+T9 THEN 2330
    0x5aca956faf70 ---------- T 01350  IF 8*Q1+Q2=8*Q4+Q5 THEN 1170
    0x5aca956fb360 ----------   01360  T=T+1: GOSUB 1370: GOTO 400
    0x5aca956fba50 ----------   01370  E=E-N-10: IF E>=0 THEN RETURN 
    0x5aca956fbbe0 ----------   01380  PRINT "SHIELD CONTROL SUPPLIES ENERGY TO COMPLEAT MANUVER."
    0x5aca956fc550 ----------   01390  S=S+E:E=0: IF S<=0 THEN S=0
    0x5aca956fc5b0 ----------   01400  RETURN 
    0x5aca956fd300 ---------- T 01410  IF D(3)<0 THEN PRINT "LONG RANG SENSORES ARE INOPERABLE": GOTO 590
    0x5aca956fd7d0 ----------   01420  CLS : PRINT "LONG RANGE SCAN FOR QUADRANT";Q1;",";Q2
    0x5aca956fdc30 ----------   01430  O1$="--------------------": PRINT O1$
    0x5aca956feea0 ----------   01440  FOR I=Q1-1 TO Q1+1:N(1)=-1:N(2)=-1:N(3)=-3: FOR J=Q2-1 TO Q2+1
    0x5aca95700410 ----------   01450  IF I>0 AND I<9 AND J>0 AND J<9 THEN N(J-Q2+2)=G(I,J):Z(I,J)=G(I,J)
    0x5aca95700f30 ----------   01460  NEXT J: FOR L=1 TO 3: PRINT ": ";: IF N(L)<0 THEN PRINT "*** ";: GOTO 1480
    0x5aca95701620 ----------   01470  PRINT RIGHT$(STR$(N(L)+1000),3);" ";
    0x5aca95701bc0 ---------- T 01480  NEXT L: PRINT ":": PRINT O1$: NEXT I: GOTO 590
    0x5aca95702120 ---------- T 01490  CLS : PRINT : IF D(4)<0 THEN PRINT "PHASERS INOPERATIVE.": GOTO 590
    0x5aca957023b0 ----------   01500  IF K3>0 THEN 1530
    0x5aca95702560 ---------- T 01510  PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSORES SHOW NO ENEMY SHIPS"
    0x5aca95702890 ----------   01520  PRINT TAB(32)"IN THIS QUADRENT'": GOTO 590
    0x5aca95702d10 ---------- T 01530  IF D(8)<0 THEN PRINT "COMPUTER FAILER HAMPERS ACCURACY"
    0x5aca95702ec0 ----------   01540  PRINT "PHASERS LOCKED ON TARGET; ";
    0x5aca95703260 ---------- T 01550  PRINT "ENERGY AVAILABLE=";E;"UNITS"
    0x5aca95703650 ----------   01560  INPUT "NUMBER OF UNITS TO DIVERT TO PHASER BANKS";X: IF X<=0 THEN 590
    0x5aca957039e0 ----------   01570  IF E-X<=0 THEN 1550
    0x5aca95704450 ----------   01580  E=E-X: IF D(7)<0 THEN X=X* RND(0)
    0x5aca95705000 ----------   01590  H1= INT(X/K3): FOR I=1 TO 3: IF K(I,3)<=0 THEN 1670
    0x5aca95705d30 ----------   01600  JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5aca95706ab0 ----------   01604  H= INT((H1/JH)*( RND(0)+2)): IF H>.15*K(I,3) THEN 1620
    0x5aca95707300 ----------   01610  PRINT "SENSORS SHOW NO DAMAGE TO ENEMY AT ";K(I,1);",";K(I,2): GOTO 1670
    0x5aca95708030 ---------- T 01620  K(I,3)=K(I,3)-H: PRINT H;: PRINT "UNITS HIT ON KLINGON AT SECTOR";K(I,1);",";
    0x5aca957088f0 ----------   01630  PRINT K(I,2): IF K(I,3)<=0 THEN PRINT "*** KLINGON DESTROYED ***": GOTO 1650
    0x5aca95708e70 ----------   01640  PRINT " (SENSORS SHOW";K(I,3);"UNITS REMAINING)": GOTO 1670
    0x5aca95709eb0 ---------- T 01650  K3=K3-1:K9=K9-1:Z1=K(I,1):Z2=K(I,2):A$=" ": GOSUB 3320
    0x5aca9570b0c0 ----------   01660  K(I,3)=0:G(Q1,Q2)=G(Q1,Q2)-100:Z(Q1,Q2)=G(Q1,Q2): IF K9<=0 THEN 2430
    0x5aca9570b2c0 ---------- T 01670  NEXT I: GOSUB 2220: GOTO 590
    0x5aca9570b330 ---------A T 01680  REM 
    0x5aca9570b7b0 ----------   01685  IF P<0 THEN PRINT "ALL PHOTON TORPEDOES EXPENDED.": GOTO 590
    0x5aca9570bca0 ----------   01690  IF D(5)<0 THEN PRINT "PHOTON TUBES ARE NOT OPERATIONAL": GOTO 590
    0x5aca9570c260 ---------- T 01700  INPUT "PHOTON TORPEDO COURSE(1-9)";C1: IF C1=9 THEN C1=1
    0x5aca9570c710 ----------   01710  IF C1>=1 AND C1<9 THEN 1740
    0x5aca9570c890 ----------   01720  PRINT "ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5aca9570c940 ----------   01730  GOTO 590
    0x5aca9570dd80 ---------- T 01740  X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1)):E=E-2:P=P-1
    0x5aca9570efb0 ----------   01750  X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1)):X=S1:Y=S2
    0x5aca9570ffb0 ---------- T 01770  X=X+X1:Y=Y+X2:X3= INT(X+.5):Y3= INT(Y+.5)
    0x5aca95710870 ----------   01780  IF X3<1 OR X3>8 OR Y3<1 OR Y3>8 THEN 1980
    0x5aca95710bb0 ----------   01785  PRINT @832, STRING$(63," ")
    0x5aca957116d0 ----------   01790  PRINT @832,"TRACKING TORPEDO:";X3;",";Y3;:A$=" ":Z1=X:Z2=Y: GOSUB 3460
    0x5aca957119e0 ----------   01800  IF Z3<>0 THEN 1770
    0x5aca95711a80 ----------   01805  PRINT 
    0x5aca957123a0 ----------   01810  A$="+K+":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1860
    0x5aca95712da0 ----------   01820  PRINT "*** KLINGON DESTROYED ***":K3=K3-1:K9=K9-1: IF K9<=0 THEN 2430
    0x5aca95713860 ----------   01830  FOR I=1 TO 3: IF X3=K(I,1) AND Y3=K(I,2) THEN 1850
    0x5aca95713bc0 ----------   01840  NEXT I:I=3
    0x5aca95713fe0 ---------- T 01850  K(I,3)=0: GOTO 1960
    0x5aca957148f0 ---------- T 01860  A$=" * ":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1880
    0x5aca95714f30 ----------   01870  PRINT "STAR AT";X3;",";Y3;"ABSORBED TORPEDO ENERGY.": GOSUB 2220: GOTO 590
    0x5aca95715830 ---------- T 01880  A$=">!<":Z1=X:Z2=Y: GOSUB 3460: IF Z3=0 THEN 1700
    0x5aca95715fe0 ----------   01890  PRINT "*** STARBASE DESTROYED ***":B3=B3-1:B9=B9-1
    0x5aca95716690 ----------   01900  IF B9>0 OR K9>T-10-T9 THEN 1940
    0x5aca95716900 ----------   01909  NA$="WALDO"
    0x5aca95716ca0 ----------   01910  PRINT "CAPTAIN ";NA$;" YOU ARE HEREBY RELIEVED OF COMMAND"
    0x5aca95716e40 ----------   01920  PRINT "AND SENTENCED TO 99 STARDATES OF HARD LABOR ON CYGNUS 12!!"
    0x5aca95717240 ----------   01925  FOR II=1 TO 2500: NEXT 
    0x5aca957172e0 ----------   01930  GOTO 2360
    0x5aca95717460 ---------- T 01940  PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x5aca957177d0 ----------   01950  PRINT "COURT MARTIAL!":D=0
    0x5aca95717ea0 ---------- T 01960  Z1=X:Z2=Y:A$=" ": GOSUB 3320
    0x5aca95718d30 ----------   01970  G(Q1,Q2)=K3*100+B3*10+S3:Z(Q1,Q2)=G(Q1,Q2): GOSUB 2220: GOTO 590
    0x5aca95718fc0 ---------- T 01980  PRINT : PRINT "TORPEDO MISSED.": GOSUB 2220: GOTO 590
    0x5aca957194c0 ---------- T 01990  IF D(7)<0 THEN PRINT "SHIELD CONTROL INOPERABLE.": GOTO 590
    0x5aca957199f0 ----------   02000  PRINT "ENERGY ADVAILABLE=";E+S;: INPUT "NUMBER OF UNITS TO SHIELDS";X
    0x5aca9571a050 ----------   02010  IF X<0 OR S=X THEN PRINT "<SHIELDS REMAIN UNCHANGED>": GOTO 590
    0x5aca9571a410 ----------   02020  IF X<=E+S THEN 2050
    0x5aca9571a7b0 ----------   02030  PRINT "CAPTAIN "NA$"! THIS IS NOT THE FEDERATION TREASURY."
    0x5aca9571a9a0 ----------   02040  PRINT "<SHIELDS UNCHANGED>": GOTO 590
    0x5aca9571b190 ---------- T 02050  E=E+S-X:S=X: PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x5aca9571b610 ----------   02060  PRINT " 'SHIELDS NOW AT"; INT(S);"UNITS PER UOUR COMAND.'"
    0x5aca9571ba50 ----------   02065  FOR II=1 TO 1500: NEXT : CLS : GOSUB 2460: GOTO 590
    0x5aca9571bd90 ---------- T 02070  IF D(6)>=0 THEN 2180
    0x5aca9571c160 ----------   02080  PRINT "DAMMAGE CONTROL REPORT NOT AVAILABLE": IF D=0 THEN 590
    0x5aca9571cdf0 ---------- T 02090  D3=0:FOR TI=1 TO 8: IF D(I)<0 THEN D3=D3+.1
    0x5aca9571d1a0 ----------   02100  NEXT I: IF D3=0 THEN 590
    0x5aca9571d9b0 ----------   02110  PRINT :D3=D3+D4: IF D3>=1 THEN D3=.9
    0x5aca9571db70 ----------   02120  PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP"
    0x5aca9571e1f0 ----------   02130  PRINT "ESTIMATED TIME TO REPAIR:";.01* INT(100*D3);"STARDATES"
    0x5aca9571e390 ----------   02140  INPUT "WILL YOU AUTHORIZE THE REPAIR ORDER(Y/N)";A$
    0x5aca9571e630 ----------   02150  IF A$<>Y THEN 590
    0x5aca9571efc0 ----------   02160  FOR I=1 TO 8:IF HD(I)<0 THEN D(I)=0
    0x5aca9571f580 ----------   02170  NEXT I:T=T+D3+.1
    0x5aca9571fa80 ---------- T 02180  CLS : PRINT : PRINT "DEVICE STATE OF REPAIR": FOR R1=1 TO 8
    0x5aca957205b0 ----------   02190  GOSUB 3370: PRINT G2$; LEFT$(Z$,25-LEN(G2$)); INT(D(R1)*100)*.01
    0x5aca957209a0 ----------   02200  NEXT R1: PRINT : IF D0<>0 THEN 2090
    0x5aca95720a30 ----------   02210  GOTO 590
    0x5aca95720d00 ----------   02220  IF K3<=0 THEN RETURN 
    0x5aca95721100 ----------   02230  IF D0<>0 THEN PRINT "STARBASE SHIELDS PROTECT THE ENTERPRISE": RETURN 
    0x5aca95721800 ----------   02240  FOR I=1 TO 3: IF K(I,3)<=0 THEN 2320
    0x5aca95722470 ----------   02245  JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5aca95723970 ----------   02250  H= INT((K(I,3)/JH)*(2+ RND(0))):S=S-H:K(I,3)=K(I,3)/(3+ RND(0))
    0x5aca95724210 ----------   02260  PRINT H;"UNITS HIT ON ENTERPRISE FROM SECTOR";K(I,1);",";K(I,2)
    0x5aca957244a0 ----------   02270  IF S<=0 THEN 2340
    0x5aca95724a60 ----------   02280  PRINT " <SHIELDS DOWN TO";S;"UNITS>": IF H<20 THEN 2320
    0x5aca957250e0 ----------   02290  IF RND(0)>.6 OR H/S<=.02 THEN 2320
    0x5aca95725d50 ----------   02300  R1= RND(8):D(R1)=D(R1)-H/S-.5* RND(0): GOSUB 3370
    0x5aca957260b0 ----------   02310  PRINT "DAMAGE CONTROL REPORTS '";G2$;" DAMAGED BY THE HIT'"
    0x5aca95726240 ---------- T 02320  NEXT I: RETURN 
    0x5aca95726980 ---------A T 02330  PRINT "IT IS STARDATE";T: FOR I=1 TO 1500: NEXT I: GOTO 2360
    0x5aca95727100 ---------- T 02340  FOR I=1 TO 500: NEXT I: CLS : PRINT : PRINT "THE ENTERPRISE HAS BEEN DESTROYED.": PRINT "THE FEDERATION";
    0x5aca957272f0 ----------   02350  PRINT " WILL BE CONQUERED": GOTO 2330
    0x5aca957276b0 ---------A T 02360  CLS : PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
    0x5aca95727830 ---------A   02370  PRINT "THE END OF YOUR MISSION."
    0x5aca95727b80 ---------A T 02380  PRINT : PRINT : IF B9=0 THEN 2420
    0x5aca95727d30 ---------A   02390  PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x5aca95727ef0 ---------A   02400  PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x5aca957282e0 ---------A   02410  INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$: IF A$="AYE" THEN 10
    0x5aca95728340 ---------A T 02420  END 
    0x5aca95728760 ----------   02425  T=100:B9=1
    0x5aca95728b20 ---------- T 02430  FOR II=1 TO 1500: NEXT : CLS 
    0x5aca95728ed0 ----------   02435  PRINT @192,"CONGRATIONS, MON CAPITAN "NA$"! THE LAST KLINGON BATTLE"
    0x5aca95729230 ----------   02440  PRINT TAB(5)"CRUISER MENACING THE FEDERATION HAS BEEN DESTROYED!": PRINT 
    0x5aca95729b20 ----------   02450  PRINT TAB(10)"YOUR EFFICIENCY RATING IS";1000*(K7/(T-T0))^2: GOTO 2380
    0x5aca9572a570 ---------B G 02460  FOR I=S1-1 TO S1+1: FOR J=S2-1 TO S2+1
    0x5aca9572b5d0 ---------B   02470  IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 2490
    0x5aca9572bec0 ---------B   02480  A$=">!<":Z1=I:Z2=J: GOSUB 3460: IF Z3=1 THEN 2500
    0x5aca9572c3a0 ---------B T 02490  NEXT J: NEXT I:D0=0: GOTO 2520
    0x5aca9572cd40 ---------B T 02500  D0=1:C$="DOCKED":E=E0:P=P0
    0x5aca9572d5c0 ---------B   02510  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES": FOR IX=1 TO 1500: NEXT IX:S=0: GOTO 2540
    0x5aca9572daa0 ---------B T 02520  IF K3>0 THEN C$="*RED*": GOTO 2540
    0x5aca9572e240 ----------   02530  C$="GREEN": IF E<E0*.1 THEN C$="YELLOW"
    0x5aca9572e590 ---------B T 02540  IF D(2)>=0 THEN 2560
    0x5aca9572ec70 ---------B   02550  IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS : PRINT 
    0x5aca9572ee80 ---------B   02555  PRINT "*** SHORT RANGE SENSORS ARE OUT ***": PRINT : RETURN 
    0x5aca9572f590 ---------B T 02560  CLS :O1$="---------------------------------": PRINT O1$: FOR I=1 TO 8
    0x5aca957305f0 ---------B   02570  FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3: PRINT " "; MID$(Q$,J,3);: NEXT J
    0x5aca95730da0 ---------B   02580  ON I GOTO 2590,2600,2610,2620,2630,2640,2650,2660
    0x5aca956fcba0 ---------B T 02590  PRINT " STARDATE "; INT(T*10)*.1: GOTO 2670
    0x5aca95731e50 ---------B T 02600  PRINT " CONDITION ";C$: GOTO 2670
    0x5aca95732300 ---------B T 02610  PRINT " QUADRANT ";Q1;",";Q2: GOTO 2670
    0x5aca957327d0 ---------B T 02620  PRINT " SECTOR ";S1;",";S2: GOTO 2670
    0x5aca95732b80 ---------B T 02630  PRINT " PHOTON TORPEDOES "; INT(P): GOTO 2670
    0x5aca95733050 ---------B T 02640  PRINT " TOTAL ENERGY "; INT(E+S): GOTO 2670
    0x5aca95733400 ---------B T 02650  PRINT " SHIELDS "; INT(S): GOTO 2670
    0x5aca95733740 ---------B T 02660  PRINT " KLINGONS REMAINING "; INT(K9)
    0x5aca95733a10 ---------B T 02670  NEXT I: PRINT O1$: RETURN 
    0x5aca95733f40 ---------- T 02680  IF D(8)<0 THEN PRINT "COMPUTER DISABLED": GOTO 590
    0x5aca95734600 ---------- T 02690  INPUT "COMPUTER ACTIVE AND AWAITING A COMAND";A: IF A<0 OR A>4 THEN 2710
    0x5aca95734f00 ----------   02700  H8=1: ON A+1 GOTO 2810,2930,3010,3270,3070
    0x5aca957350f0 ---------- T 02710  CLS : PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER."
    0x5aca95735270 ----------   02720  PRINT " 0=CUMULITIVE GALACTIVE RECORD"
    0x5aca957353e0 ----------   02730  PRINT " 1=STATUS REPORT"
    0x5aca95735560 ----------   02740  PRINT " 2=PHOTON TORPEDO DATA"
    0x5aca957356e0 ----------   02750  PRINT " 3=STARBASE NAV DATA"
    0x5aca95735850 ----------   02760  PRINT " 4=DIRECTION/DISTANCE CALCULATOR"
    0x5aca95735960 ----------   02770  PRINT : GOTO 2690
    0x5aca95736090 ----------   02780  H8=0:G5=1: CLS : PRINT TAB(24)"THE GALAXY": GOTO 2840
    0x5aca95736290 ---------- T 02810  PRINT : PRINT " ";
    0x5aca95736760 ----------   02820  CLS : PRINT "COMPUTER RECORD OF GALAXY FOR QUADRENT";Q1;",";Q2
    0x5aca957367f0 ----------   02830  PRINT 
    0x5aca95736980 ---------- T 02840  PRINT " 1 2 3 4 5 6 7 8"
    0x5aca95736c10 ----------   02850  O1$=" ----- ----- ------ ------ ------ ------ ----- ------"
    0x5aca957373e0 ----------   02860  PRINT O1$: FOR I=1 TO 8: PRINT 1;: IF H8=0 THEN 2900
    0x5aca95737e00 ----------   02870  FOR J=1 TO 8: PRINT " ";: IF Z(I,J)=0 THEN PRINT "***";: GOTO 2890
    0x5aca957384b0 ----------   02880  PRINT RIGHT$(STR$(Z(I,J)+1000),3);
    0x5aca957386a0 ---------- T 02890  NEXT J: GOTO 2920
    0x5aca95739480 ---------- T 02900  Z4=I:Z5=1: GOSUB 3490:J0= INT(15-.5* LEN(G2$)): PRINT TAB(J0);G2$;
    0x5aca9573a000 ----------   02910  Z5=5: GOSUB 3490:J0= INT(39-.5* LEN /(G2$)): PRINT TAB(J0);G2$;
    0x5aca9573a2a0 ---------- T 02920  PRINT : NEXT I: PRINT : GOTO 590
    0x5aca9573aab0 ---------- T 02930  CLS : PRINT " STSTAS REPORT:":X$="": IF K9>1 THEN X$="S"
    0x5aca9573af50 ----------   02940  PRINT "KLINGON";X$;" LEFT: ";K9
    0x5aca9573b840 ----------   02950  PRINT "MISSION MUST BE COMPLEATED IN";.1* INT((T0+T9-T)*10),"STARDATES"
    0x5aca9573c140 ----------   02960  X$="S": IF B9<2 THEN X$="": IF B9<1 THEN 2990
    0x5aca9573c6c0 ----------   02970  PRINT "THE FEDERATION IS MAINTAINING";B9;"STARBASE";X$;" IN THE GALAXY"
    0x5aca9573cac0 ----------   02975  FOR IX=1 TO 1500: NEXT IX
    0x5aca9573cb80 ----------   02980  GOTO 2070
    0x5aca9573cf20 ---------- T 02990  PRINT "CAPTAIN "NA$"! YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN"
    0x5aca9573d0b0 ----------   03000  PRINT "IN THE GALAXY--YOU HAVE NO STARBASES LEFT!"
    0x5aca9573d450 ----------   03005  FOR I=1 TO 2000: NEXT : GOTO 2070
    0x5aca9573d6b0 ---------- T 03010  IF K3<=0 THEN 1510
    0x5aca9573dd50 ----------   03020  X$="": IF K3>1 THEN X$="S"
    0x5aca9573dfe0 ----------   03030  PRINT "FROM ENTERPRISE TO KLINGON";X$
    0x5aca9573e8a0 ----------   03040  H8=0: FOR I=1 TO 3: IF K(I,3)<=0 THEN 3260
    0x5aca9573f040 ----------   03050  W1=K(I,1):X=K(I,2)
    0x5aca9573f4f0 ---------- T 03060  C1=S1:A=S2: GOTO 3110
    0x5aca9573f6d0 ---------- T 03070  CLS : PRINT "DIRECTION/DISTANCE CALCULATER:"
    0x5aca9573ff40 ----------   03080  PRINT "YOU ARE AT QUADRENT ";Q1;",";Q2;" SECTOR ";S1;",";S2
    0x5aca957404f0 ----------   03090  PRINT "PLEASE ENTER":C1=Q1:A=Q2
    0x5aca95740760 ----------   03100  INPUT " DESTINATION COORDINATES(X,Y)";W1,X
    0x5aca95741020 ---------- T 03110  X=X-A:A=C1-W1: IF X<0 THEN 3190
    0x5aca95741280 ----------   03120  IF A<0 THEN 3210
    0x5aca957414f0 ----------   03130  IF X>0 THEN 3150
    0x5aca957419a0 ----------   03140  IF A=0 THEN C1=5: GOTO 3160
    0x5aca95741bc0 ---------- T 03150  C1=1
    0x5aca95742030 ---------- T 03160  IF ABS(A)<= ABS(X) THEN 3180
    0x5aca95742c00 ----------   03170  PRINT "DIRECTION=";C1+((( ABS(A)- ABS(X))+ ABS(A))/ ABS(A));: GOTO 3250
    0x5aca95743460 ---------- T 03180  PRINT "DIRECTION=";C1+( ABS(A)/( ABS(X)+.001));: GOTO 3250
    0x5aca95743910 ---------- T 03190  IF A>0 THEN C1=3: GOTO 3220
    0x5aca95743db0 ----------   03200  IF X<>0 THEN C1=5: GOTO 3160
    0x5aca95743fd0 ---------- T 03210  C1=7
    0x5aca95744440 ---------- T 03220  IF ABS(A)>= ABS(X) THEN 3240
    0x5aca95745000 ----------   03230  PRINT "DIRECTION=";C1+((( ABS(X)- ABS(A))+ ABS(X))/ ABS(X));: GOTO 3250
    0x5aca957456c0 ---------- T 03240  PRINT "DIRECTION=";C1+( ABS(X)/ ABS(A));
    0x5aca95745860 ---------- T 03250  PRINT "DISTANCE=";
    0x5aca95746190 ----------   03252  IF W1=B4 THEN PRINT SQR(X^2+A^2)/10: GOTO 3254
    0x5aca957466e0 ----------   03253  PRINT SQR(X^2+A^2)
    0x5aca95746940 ---------- T 03254  IF H8=1 THEN 590
    0x5aca95746b30 ---------- T 03260  NEXT I: GOTO 590
    0x5aca95747380 ---------- T 03270  IF B3<>0 THEN PRINT "FROM ENTERPRISE TO STAREBASE:":W1=B4:X=B5: GOTO 3060
    0x5aca95747520 ----------   03280  PRINT "MR SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS";
    0x5aca95747720 ----------   03290  PRINT " QUADRANT '": GOTO 590
    0x5aca95748590 ---------C B 03300  R1= RND(8):R2= RND(8):A$=" ":Z1=R1:Z2=R2: GOSUB 3460: IF Z3=0 THEN 3300
    0x5aca957485f0 ---------C   03310  RETURN 
    0x5aca95749040 ---------D G 03320  S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
    0x5aca957494f0 ---------D   03330  IF LEN(A$)<>3 THEN PRINT "ERROR": STOP 
    0x5aca95749c80 ----------   03340  IF S8=1 THEN Q$=A$+ RIGHT$ (Q$,189): RETURN 
    0x5aca9574a410 ----------   03350  IF S8=190 THEN Q$= LEFT$ (Q$,189)+A$: RETURN 
    0x5aca9574ae70 ----------   03360  Q$= LEFT$ (Q$,S8-1)+A$+ RIGHT$ (Q$,190-S8): RETURN 
    0x5aca9574b610 ---------E G 03370  ON R1 GOTO 3380,3390,3400,3410,3420,3430,3440,3450
    0x5aca9574b880 ---------E T 03380  G2$="WARP ENGINES": RETURN 
    0x5aca9574bb10 ---------E T 03390  G2$="SHORT RANGE SCANNERS": RETURN 
    0x5aca9574bda0 ---------E T 03400  G2$="LONG RANGE SCANNERS": RETURN 
    0x5aca9574c020 ---------E T 03410  G2$="PHASER CONTROL": RETURN 
    0x5aca9574c2a0 ---------E T 03420  G2$="PHOTON TUBES": RETURN 
    0x5aca9574c520 ---------E T 03430  G2$="DAMMAGE CONTROL": RETURN 
    0x5aca9574c7a0 ---------E T 03440  G2$="SHIELD CONTROL": RETURN 
    0x5aca9574ca20 ---------E T 03450  G2$="LIBRARY-COMPUTER": RETURN 
    0x5aca9574dd10 ---------F G 03460  Z1= INT(Z1+.5):Z2= INT(Z2+.5):S8=(Z2-1)*3+(Z1-1)*24+1:Z3=0
    0x5aca9574e240 ---------F   03470  IF MID$(Q$,S8,3)<>A$ THEN RETURN 
    0x5aca9574e490 ---------F   03480  Z3=1: RETURN 
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
   A) 0x5aca956bbdd0 (00001)   0x5aca956bbdd0 (00001)   0x5aca9574e490 (03480)   0x5aca95728340 (02420)   
   B) 0x5aca9572a570 (02460)   0x5aca9572a570 (02460)   0x5aca9572ee80 (02555)   0x5aca95733a10 (02670)   
   C) 0x5aca95748590 (03300)   0x5aca95748590 (03300)   0x5aca957485f0 (03310)   0x5aca957485f0 (03310)   
   D) 0x5aca95749040 (03320)   0x5aca95749040 (03320)   0x000000000000 (00000)   0x5aca957494f0 (03330)   
   E) 0x5aca9574b610 (03370)   0x5aca9574b610 (03370)   0x5aca9574b880 (03380)   0x5aca9574ca20 (03450)   
   F) 0x5aca9574dd10 (03460)   0x5aca9574dd10 (03460)   0x5aca9574e490 (03480)   0x5aca9574e490 (03480)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/startrek1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5aca956bbdd0 ---------A   00001  REM NOTE
    0x5aca956baba0 ---------A   00002  REM trs2 - TRS-80 Level II BASIC tokenized file
    0x5aca956bbf50 ---------A T 00010  CLS 
    0x5aca956b96d0 ---------A   00020  PRINT @210,"S U P E R S T A R T R E K"
    0x5aca956b9670 ----------   00030  PRINT 
    0x5aca956ba2d0 ---------A        a PRINT 
    0x5aca956bc010 ---------A   00100  CLEAR 600
    0x5aca956bc0d0 ---------A   00110  Z$=" "
    0x5aca956c1d40 ----------   00120  DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8)
    0x5aca956c1df0 ---------A        a RANDOM 
    0x5aca956c2520 ----------   00130  T= INT( RND(0)*20+20)*100
    0x5aca956c27f0 ----------        a T0=T
    0x5aca956c2e60 ----------        b T9=25+ INT( RND(0)*10)
    0x5aca956c3110 ----------        c D0=0
    0x5aca956c33c0 ----------        d E=3000
    0x5aca956c36d0 ---------A        e E0=E
    0x5aca956bbe90 ----------   00140  P=10
    0x5aca956c3c00 ----------        a PO=P
    0x5aca956c3eb0 ----------        b S9=200
    0x5aca956c4160 ----------        c S=0
    0x5aca956c4410 ----------        d B9=0
    0x5aca956c46c0 ----------        e K9=0
    0x5aca956c4990 ----------        f X$=""
    0x5aca956c4ca0 ---------A        g X0$=" IS "
    0x5aca956c5030 ----------   00170  Q1= RND(8)
    0x5aca956c53c0 ----------        a Q2= RND(8)
    0x5aca956c5750 ----------        b S1= RND(8)
    0x5aca956c5b20 ---------A        c S2= RND(8)
    0x5aca956c5e90 ----------   00180  FOR I=1 TO 9
    0x5aca956c6230 ----------        a C(I,1)=0
    0x5aca956c65c0 ----------        b C(I,2)=0
    0x5aca956c66f0 ---------A        c NEXT I
    0x5aca956c6ab0 ----------   00190  C(3,1)=-1
    0x5aca956c6e20 ----------        a C(2,1)=-1
    0x5aca956c7190 ----------        b C(4,1)=-1
    0x5aca956c7500 ----------        c C(4,2)=-1
    0x5aca956c7870 ----------        d C(5,2)=-1
    0x5aca956c7c30 ---------A        e C(6,2)=-1
    0x5aca956c7fa0 ----------   00200  C(1,2)=1
    0x5aca956c8310 ----------        a C(2,2)=1
    0x5aca956c8680 ----------        b C(6,1)=1
    0x5aca956c89f0 ----------        c C(7,1)=1
    0x5aca956c8d60 ----------        d C(8,1)=1
    0x5aca956c90d0 ----------        e C(8,2)=1
    0x5aca956c9440 ---------A        f C(9,2)=1
    0x5aca956c96f0 ----------   00210  FOR I=1 TO 8
    0x5aca956c99d0 ----------        a D(I)=0
    0x5aca956c9b00 ---------A        b NEXT I
    0x5aca956c9e00 ---------A   00220  A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    0x5aca956ca0b0 ----------   00230  FOR I=1 TO 8
    0x5aca956ca430 ----------        a FOR J=1 TO 8
    0x5aca956ca6f0 ----------        b K3=0
    0x5aca956caaa0 ----------        c Z(I,J)=0
    0x5aca956cae70 ---------A        d R1= RND(0)
    0x5aca956cb290 ----------   00240  IF R1>.98 THEN K3=3
    0x5aca956cb5b0 ----------        a K9=K9+3
    0x5aca956cb640 ---------A        b GOTO 270
    0x5aca956cba60 ----------   00250  IF R1>.95 THEN K3=2
    0x5aca956cbd80 ----------        a K9=K9+2
    0x5aca956cbdd0 ----------        b GOTO 270
    0x5aca956cc1f0 ----------   00260  IF R1>.8 THEN K3=1
    0x5aca956cc550 ----------        a K9=K9+1
    0x5aca956cc800 ---------- T 00270  B3=0
    0x5aca956ccce0 ---------- T      a IF RND(0)>.96 THEN B3=1
    0x5aca956cd050 ---------A T      b B9=B9+1
    0x5aca956cd920 ----------   00280  G(I,J)=K3*100+B3*10+ RND(8)
    0x5aca956cda50 ----------        a NEXT J
    0x5aca956cdb80 ----------        b NEXT I
    0x5aca956ce100 ---------A        c IF K9>T9 THEN T9=K9+1
    0x5aca956ce380 ---------A   00290  IF B9<>0 THEN 320
    0x5aca956cee10 ----------   00300  IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100
    0x5aca956cf170 ---------A        a K9=K9+1
    0x5aca956cf360 ----------   00310  B9=1
    0x5aca956cf9f0 ----------        a G(Q1,Q2)=G(Q1,Q2)+10
    0x5aca956cfcc0 ----------        b Q1= RND(8)
    0x5aca956cffd0 ---------A        c Q2= RND(8)
    0x5aca956d02a0 ---------- T 00320  K7=K9
    0x5aca956d06e0 ---------- T      a IF B9<>1 THEN X$="S"
    0x5aca956d0940 ---------A T      b X0$=" ARE "
    0x5aca956d0aa0 ---------A   00330  PRINT "YOUR ORDERS ARE AS FOLLOWES:"
    0x5aca956d0e10 ---------A   00340  PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
    0x5aca956d0fd0 ---------A   00350  PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x5aca956d1790 ---------A   00360  PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
    0x5aca956d1d40 ---------A   00370  PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
    0x5aca956d1da0 ----------   00380  PRINT 
    0x5aca956d2020 ---------A        a INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
    0x5aca956d2300 ---------- T 00400  Z4=Q1
    0x5aca956d25d0 ---------- T      a Z5=Q2
    0x5aca956d27c0 ---------- T      b K3=0
    0x5aca956d29b0 ---------- T      c B3=0
    0x5aca956d2c60 ---------- T      d S3=0
    0x5aca956d2f10 ---------- T      e G5=0
    0x5aca956d33a0 ---------- T      f D4=.5* RND(0)
    0x5aca956d3970 ---------A T      g Z(Q1,Q2)=G(Q1,Q2)
    0x5aca956d4430 ---------A   00410  IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 510
    0x5aca956d44b0 ---------A   00450  REM 
    0x5aca956d4aa0 ----------   00460  K3= INT(G(Q1,Q2)*.01)
    0x5aca956d52b0 ---------A        a B3= INT(G(Q1,Q2)*.1)-10*K3
    0x5aca956d5ac0 ----------   00470  S3=G(Q1,Q2)-100*K3-10*B3
    0x5aca956d5d40 ---------A        a IF K3=0 THEN 500
    0x5aca956d5da0 ----------   00480  CLS 
    0x5aca956d5ee0 ----------        a PRINT @396,"COMBAT AREA CONDITION RED"
    0x5aca956d6160 ---------A        b IF S>200 THEN 500
    0x5aca956d62f0 ---------A   00490  PRINT @463,"SHIELDS DANGEROUSLY LOW"
    0x5aca956d65b0 ---------- T 00500  FOR I=1 TO 3
    0x5aca956d6950 ---------- T      a K(I,1)=0
    0x5aca956d6ce0 ---------- T      b K(I,2)=0
    0x5aca956d6e10 ---------A T      c NEXT I
    0x5aca956d7120 ---------- T 00510  FOR I=1 TO 3
    0x5aca956d74c0 ---------- T      a K(I,3)=0
    0x5aca956d75f0 ---------- T      b NEXT I
    0x5aca956d8280 ---------A T      c Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
    0x5aca956d8550 ----------   00520  A$="<*>"
    0x5aca956d8820 ----------        a Z1=S1
    0x5aca956d8af0 ----------        b Z2=S2
    0x5aca956d8b40 ----------        c GOSUB 3320
    0x5aca956d8db0 ---------A        d IF K3<1 THEN 550
    0x5aca956d9090 ----------   00530  FOR I=1 TO K3
    0x5aca956d90f0 ----------        a GOSUB 3300
    0x5aca956d9300 ----------        b A$="+K+"
    0x5aca956d9510 ----------        c Z1=R1
    0x5aca956d9830 ---------A        d Z2=R2
    0x5aca956d9880 ----------   00540  GOSUB 3320
    0x5aca956d9c30 ----------        a K(I,1)=R1
    0x5aca956d9fe0 ----------        b K(I,1)=R2
    0x5aca956da6b0 ----------        c K(I,3)=S9*(.5+ RND(0))
    0x5aca956da7e0 ---------A        d NEXT I
    0x5aca956daa80 ---------A T 00550  IF B3<1 THEN 570
    0x5aca956daae0 ----------   00560  GOSUB 3300
    0x5aca956dacf0 ----------        a A$=">!<"
    0x5aca956daf00 ----------        b Z1=R1
    0x5aca956db1d0 ----------        c B4=R1
    0x5aca956db3e0 ----------        d Z2=R2
    0x5aca956db6b0 ----------        e B5=R2
    0x5aca956db750 ---------A        f GOSUB 3320
    0x5aca956dba20 ---------- T 00570  FOR I=1 TO S3
    0x5aca956dba80 ---------- T      a GOSUB 3300
    0x5aca956dbc90 ---------- T      b A$=" * "
    0x5aca956dbea0 ---------- T      c Z1=R1
    0x5aca956dc0b0 ---------- T      d Z2=R2
    0x5aca956dc100 ---------- T      e GOSUB 3320
    0x5aca956dc230 ---------A T      f NEXT I
    0x5aca956dc2e0 ---------A T 00580  GOSUB 2460
    0x5aca956dcbb0 ---------A T 00590  IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
    0x5aca956dcc10 ----------   00600  CLS 
    0x5aca956dcfa0 ---------A        a PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
    0x5aca956dd180 ---------A   00610  PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
    0x5aca956dd2c0 ----------   00620  PRINT " AND SHIELD CONTROL."
    0x5aca956dd470 ---------A        a PRINT "IS PRESENTLY INCAPABLE OF CROSS";
    0x5aca956dd5c0 ----------   00630  PRINT "-CIRUITING TO ENGINE ROOM!!"
    0x5aca956dd660 ---------A        a GOTO 2330
    0x5aca956dd8b0 ----------   00640  PRINT "YOUR ORDERS, CAPTAIN ";NA$;
    0x5aca956dda40 ----------        a INPUT A$
    0x5aca956ddd00 ----------   00650  FOR I=1 TO 9
    0x5aca956de5d0 ----------        a IF LEFT$ (A$,3)<> MID$ (A1$,3*I-2,3) THEN 670
    0x5aca956dee10 ----------   00660  ON I GOTO 770,580,1410,1490,1680,1990,2070,2680,2360
    0x5aca956def50 ---------- T 00670  NEXT I
    0x5aca956defa0 ---------- T      a CLS 
    0x5aca956df110 ---------- T      b PRINT "ENTER ONE OF THE FOLOWING:"
    0x5aca956df290 ----------   00680  PRINT " NAV(TO SET COURSE)"
    0x5aca956df420 ----------   00690  PRINT " SRS(FOR SHORT RANGE SENSOR SCAN)"
    0x5aca956df5a0 ----------   00700  PRINT " LRS(FOR LONG RANGE SENSOR SCAN)"
    0x5aca956df720 ----------   00710  PRINT " PHA(TO FIRE PHASERS)"
    0x5aca956df8b0 ----------   00720  PRINT " TOR(TO FIRE PHOTON TORPEDOES)"
    0x5aca956dfa40 ----------   00730  PRINT " SHE(TO RAISE OR LOWER SHIELDS)"
    0x5aca956dfbd0 ----------   00740  PRINT " DAM(FOR DAMAGE CONTROAL REPORTS)"
    0x5aca956dfd70 ----------   00750  PRINT " COM(TO CALL ON LIBRARY-COMPUTER)"
    0x5aca956e02d0 ----------   00760  PRINT " XXX(TO RESIGN YOUR COMAND)"
    0x5aca956e0330 ----------        a PRINT 
    0x5aca956e03d0 ----------        b GOTO 590
    0x5aca956e05e0 ---------- T 00770  INPUT "COURSE(0-9)";C1
    0x5aca956e0a40 ---------- T      a IF C1=9 THEN C1=1
    0x5aca956e0ef0 ----------   00780  IF C1>=1 AND C1<9 THEN 800
    0x5aca956e1050 ----------   00790  PRINT " LT. SULU REPORTS, 'INCORECT COURSE DATA, SIR!'"
    0x5aca956e10e0 ----------        a GOTO 590
    0x5aca956e12f0 ---------- T 00800  X$="8"
    0x5aca956e1850 ---------- T      a IF D(1)<0 THEN X$="0.2"
    0x5aca956e1bb0 ----------   00810  PRINT "WARP FACTOR(0-";X$;")";
    0x5aca956e1db0 ----------        a INPUT W1
    0x5aca956e2300 ----------        b IF D(1)<0 AND W1>.2 THEN 860
    0x5aca956e2780 ----------   00820  IF W1>0 AND W1<=8 THEN 870
    0x5aca956e2a20 ----------   00830  IF W1=0 THEN 590
    0x5aca956e2d90 ----------   00840  PRINT " CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T TAKEWARP";W1;"!"
    0x5aca956e2e50 ----------        a GOTO 590
    0x5aca956e2fa0 ---------- T 00860  PRINT "WARP ENGINES ARE DAMMAGED. MAXIMUM SPEED=WARP 0.2"
    0x5aca956e3040 ---------- T      a GOTO 590
    0x5aca956e3530 ---------- T 00870  N= INT(W1*8+.5)
    0x5aca956e38d0 ---------- T      a IF E-N>=0 THEN 940
    0x5aca956e3a70 ----------   00880  PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x5aca956e3f30 ----------   00890  PRINT TAB(23)"FOR MANUVERING AT WARP";W1;"!"
    0x5aca956e45e0 ----------   00900  IF S<N-E OR D(7)<0 THEN 590
    0x5aca956e4970 ----------   00910  PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEDGES";S;"UNITS OF ENERGY"
    0x5aca956e4c20 ----------   00920  PRINT TAB(23)"PRESENTLY DEPLOYED TO SHIELDS."
    0x5aca956e4cc0 ----------   00930  GOTO 590
    0x5aca956e4f90 ---------- T 00940  FOR I=1 TO K3
    0x5aca956e53b0 ---------- T      a IF K(I,3)=0 THEN 970
    0x5aca956e55d0 ----------   00950  A$=" "
    0x5aca956e5980 ----------        a Z1=K(I,1)
    0x5aca956e5d30 ----------        b Z2=K(I,2)
    0x5aca956e5d80 ----------        c GOSUB 3320
    0x5aca956e5e10 ----------        d GOSUB 3300
    0x5aca956e61c0 ----------   00960  K(I,1)=Z1
    0x5aca956e6570 ----------        a K(I,2)=Z2
    0x5aca956e6780 ----------        b A$="+K+"
    0x5aca956e6810 ----------        c GOSUB 3320
    0x5aca956e6940 ---------- T 00970  NEXT I
    0x5aca956e6990 ---------- T      a GOSUB 2220
    0x5aca956e6c40 ---------- T      b D1=0
    0x5aca956e6f10 ---------- T      c D6=W1
    0x5aca956e7360 ---------- T      d IF W1>=1 THEN D6=1
    0x5aca956e7620 ----------   00980  FOR I=1 TO 8
    0x5aca956e7990 ----------        a IF D(I)>=0 THEN 1030
    0x5aca956e7e90 ----------   00990  D(I)=D(I)+D6
    0x5aca956e8770 ----------        a IF D(I)>-.1 AND D(I)<0 THEN D(I)=-.1
    0x5aca956e8800 ----------        b GOTO 1030
    0x5aca956e8b50 ----------   01000  IF D(I)<0 THEN 1030
    0x5aca956e8f80 ----------   01010  IF D1<>1 THEN D1=1
    0x5aca956e9110 ----------        a PRINT "DAMAGE CONTROL REPORT"
    0x5aca956e92b0 ----------   01020  PRINT TAB(8);
    0x5aca956e94d0 ----------        a R1=I
    0x5aca956e9520 ----------        b GOSUB 3370
    0x5aca956e9840 ----------        c PRINT G2$;" REPAIR COMPLEATED"
    0x5aca956e9980 ---------- T 01030  NEXT I
    0x5aca956e9cb0 ---------- T      a IF RND(0)>.2 THEN 1090
    0x5aca956e9f90 ----------   01040  R1= RND(8)
    0x5aca956ea2d0 ----------        a IF RND(0)>=6 THEN 1070
    0x5aca956eab90 ----------   01050  Q(R1)=D(R1)-( RND(0)*5+1)
    0x5aca956ead40 ----------        a PRINT "DAMAGE CONTROL REPORT:";
    0x5aca956eada0 ----------   01060  GOSUB 3370
    0x5aca956eafd0 ----------        a PRINT G2$;" DAMAGED"
    0x5aca956eb030 ----------        b PRINT 
    0x5aca956eb0e0 ----------        c GOTO 1090
    0x5aca956eb890 ---------- T 01070  D(R1)=D(R1)+ RND(0)*3+1
    0x5aca956eba20 ---------- T      a PRINT "DAMAGE CONTROL REPORT:"
    0x5aca956eba80 ----------   01080  GOSUB 3370
    0x5aca956ebcc0 ----------        a PRINT G2$;" STATE OF REPAIR IMPROVED"
    0x5aca956ebd60 ----------        b PRINT 
    0x5aca956ebf80 ---------- T 01090  A$=" "
    0x5aca956ec270 ---------- T      a Z1= INT(S1)
    0x5aca956ec560 ---------- T      b Z2= INT(S2)
    0x5aca956ec600 ---------- T      c GOSUB 3320
    0x5aca956ed490 ----------   01100  X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1))
    0x5aca956ed760 ----------        a X=S1
    0x5aca956eda80 ----------        b Y=S2
    0x5aca956ee910 ----------   01110  X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1))
    0x5aca956eebe0 ----------        a Q4=Q1
    0x5aca956eef10 ----------        b Q5=Q2
    0x5aca956ef1e0 ----------   01120  FOR I=1 TO N
    0x5aca956ef520 ----------        a S1=S1+X1
    0x5aca956ef850 ----------        b S2=S2+X2
    0x5aca956f0130 ----------        c IF S1<1 OR S1>=9 OR S2<1 OR S2>=9 THEN 1210
    0x5aca956f09f0 ----------   01130  S8= INT(S1)*24+ INT(S2)*3-26
    0x5aca956f0f20 ----------        a IF MID$ (Q$,S8,2)=" " THEN 1160
    0x5aca956f1340 ----------   01140  S1= INT(S1-X1)
    0x5aca956f1750 ----------        a S2= INT(S2-X2)
    0x5aca956f1900 ----------        b PRINT "WARP ENGINES SHUT DOWN AT ";
    0x5aca956f1e50 ----------   01150  PRINT "SECTOR";S1;",";S2;"DUE TO BAD NAVIGATION."
    0x5aca956f1ee0 ----------        a GOTO 1170
    0x5aca956f2010 ---------- T 01160  NEXT I
    0x5aca956f2300 ---------- T      a S1= INT(S1)
    0x5aca956f2640 ---------- T      b S2= INT(S2)
    0x5aca956f2850 ---------- T 01170  A$="<*>"
    0x5aca956f2b40 ---------- T      a Z1= INT(S1)
    0x5aca956f2e30 ---------- T      b Z2= INT(S2)
    0x5aca956f2e80 ---------- T      c GOSUB 3320
    0x5aca956f2ed0 ---------- T      d GOSUB 1370
    0x5aca956f31b0 ---------- T      e T8=1
    0x5aca956f3900 ----------   01180  IF W1<1 THEN T8=.1* INT(10*W1)
    0x5aca956f3c40 ----------   01190  T=T+T8
    0x5aca956f3fd0 ----------        a IF T>T0+T9 THEN 2330
    0x5aca956f4090 ----------   01200  GOTO 580
    0x5aca956f4700 ---------- T 01210  X=8*Q1+X+N*X1
    0x5aca956f4d70 ---------- T      a Y=8*Q2+Y+N*X2
    0x5aca956f5160 ---------- T      b Q1= INT(X/8)
    0x5aca956f5550 ---------- T      c Q2= INT(Y/8)
    0x5aca956f5aa0 ---------- T      d S1= INT(X-Q1*8)
    0x5aca956f5fb0 ----------   01220  S2= INT(Y-Q2*8)
    0x5aca956f64f0 ----------        a IF S1=0 THEN Q1=Q1-1
    0x5aca956f6720 ----------        b S1=8
    0x5aca956f6c60 ----------   01230  IF S2=0 THEN Q2=Q2-1
    0x5aca956f6e90 ----------        a S2=8
    0x5aca956f7140 ----------   01240  X5=0
    0x5aca956f7560 ----------        a IF Q1<1 THEN X5=1
    0x5aca956f7760 ----------        b Q1=1
    0x5aca956f7980 ----------        c S1=1
    0x5aca956f7da0 ----------   01250  IF Q1>8 THEN X5=1
    0x5aca956f7fa0 ----------        a Q1=8
    0x5aca956f81c0 ----------        b S1=8
    0x5aca956f85e0 ----------   01260  IF Q2<1 THEN X5=1
    0x5aca956f87e0 ----------        a Q2=1
    0x5aca956f8a00 ----------        b S2=1
    0x5aca956f8e20 ----------   01270  IF Q2>8 THEN X5=1
    0x5aca956f9020 ----------        a Q2=8
    0x5aca956f9230 ----------        b S2=8
    0x5aca956f94b0 ----------   01280  IF X5=0 THEN 1350
    0x5aca956f9660 ----------   01290  PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMAND:"
    0x5aca956f9820 ----------   01300  PRINT " 'PREMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMITER"
    0x5aca956f99d0 ----------   01310  PRINT " IS HEREBY *DENIED*. SHUT DOWN YOUR ENGINES.'"
    0x5aca956f9b80 ----------   01320  PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x5aca956fa4f0 ----------   01330  PRINT "AT SECTOR";S1;",";S2;"OF QUADRENT";Q1;",";Q2;"'"
    0x5aca956fa8a0 ----------   01340  IF T>T0+T9 THEN 2330
    0x5aca956faf70 ---------- T 01350  IF 8*Q1+Q2=8*Q4+Q5 THEN 1170
    0x5aca956fb290 ----------   01360  T=T+1
    0x5aca956fb2e0 ----------        a GOSUB 1370
    0x5aca956fb360 ----------        b GOTO 400
    0x5aca956fb790 ----------   01370  E=E-N-10
    0x5aca956fba50 ----------        a IF E>=0 THEN RETURN 
    0x5aca956fbbe0 ----------   01380  PRINT "SHIELD CONTROL SUPPLIES ENERGY TO COMPLEAT MANUVER."
    0x5aca956fbf20 ----------   01390  S=S+E
    0x5aca956fc110 ----------        a E=0
    0x5aca956fc550 ----------        b IF S<=0 THEN S=0
    0x5aca956fc5b0 ----------   01400  RETURN 
    0x5aca956fd250 ---------- T 01410  IF D(3)<0 THEN PRINT "LONG RANG SENSORES ARE INOPERABLE"
    0x5aca956fd300 ---------- T      a GOTO 590
    0x5aca956fd350 ----------   01420  CLS 
    0x5aca956fd7d0 ----------        a PRINT "LONG RANGE SCAN FOR QUADRANT";Q1;",";Q2
    0x5aca956fdab0 ----------   01430  O1$="--------------------"
    0x5aca956fdc30 ----------        a PRINT O1$
    0x5aca956fe130 ----------   01440  FOR I=Q1-1 TO Q1+1
    0x5aca956fe3f0 ----------        a N(1)=-1
    0x5aca956fe6a0 ----------        b N(2)=-1
    0x5aca956fe950 ----------        c N(3)=-3
    0x5aca956feea0 ----------        d FOR J=Q2-1 TO Q2+1
    0x5aca956ffe10 ----------   01450  IF I>0 AND I<9 AND J>0 AND J<9 THEN N(J-Q2+2)=G(I,J)
    0x5aca95700410 ----------        a Z(I,J)=G(I,J)
    0x5aca95700540 ----------   01460  NEXT J
    0x5aca957008b0 ----------        a FOR L=1 TO 3
    0x5aca95700a10 ----------        b PRINT ": ";
    0x5aca95700e90 ----------        c IF N(L)<0 THEN PRINT "*** ";
    0x5aca95700f30 ----------        d GOTO 1480
    0x5aca95701620 ----------   01470  PRINT RIGHT$(STR$(N(L)+1000),3);" ";
    0x5aca95701760 ---------- T 01480  NEXT L
    0x5aca95701890 ---------- T      a PRINT ":"
    0x5aca957019d0 ---------- T      b PRINT O1$
    0x5aca95701b10 ---------- T      c NEXT I
    0x5aca95701bc0 ---------- T      d GOTO 590
    0x5aca95701c10 ---------- T 01490  CLS 
    0x5aca95701c60 ---------- T      a PRINT 
    0x5aca957020a0 ---------- T      b IF D(4)<0 THEN PRINT "PHASERS INOPERATIVE."
    0x5aca95702120 ---------- T      c GOTO 590
    0x5aca957023b0 ----------   01500  IF K3>0 THEN 1530
    0x5aca95702560 ---------- T 01510  PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSORES SHOW NO ENEMY SHIPS"
    0x5aca957027e0 ----------   01520  PRINT TAB(32)"IN THIS QUADRENT'"
    0x5aca95702890 ----------        a GOTO 590
    0x5aca95702d10 ---------- T 01530  IF D(8)<0 THEN PRINT "COMPUTER FAILER HAMPERS ACCURACY"
    0x5aca95702ec0 ----------   01540  PRINT "PHASERS LOCKED ON TARGET; ";
    0x5aca95703260 ---------- T 01550  PRINT "ENERGY AVAILABLE=";E;"UNITS"
    0x5aca957033e0 ----------   01560  INPUT "NUMBER OF UNITS TO DIVERT TO PHASER BANKS";X
    0x5aca95703650 ----------        a IF X<=0 THEN 590
    0x5aca957039e0 ----------   01570  IF E-X<=0 THEN 1550
    0x5aca95703d20 ----------   01580  E=E-X
    0x5aca95704450 ----------        a IF D(7)<0 THEN X=X* RND(0)
    0x5aca95704930 ----------   01590  H1= INT(X/K3)
    0x5aca95704be0 ----------        a FOR I=1 TO 3
    0x5aca95705000 ----------        b IF K(I,3)<=0 THEN 1670
    0x5aca95705d30 ----------   01600  JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5aca95706560 ----------   01604  H= INT((H1/JH)*( RND(0)+2))
    0x5aca95706ab0 ----------        a IF H>.15*K(I,3) THEN 1620
    0x5aca95707240 ----------   01610  PRINT "SENSORS SHOW NO DAMAGE TO ENEMY AT ";K(I,1);",";K(I,2)
    0x5aca95707300 ----------        a GOTO 1670
    0x5aca95707970 ---------- T 01620  K(I,3)=K(I,3)-H
    0x5aca95707ac0 ---------- T      a PRINT H;
    0x5aca95708030 ---------- T      b PRINT "UNITS HIT ON KLINGON AT SECTOR";K(I,1);",";
    0x5aca95708310 ----------   01630  PRINT K(I,2)
    0x5aca95708840 ----------        a IF K(I,3)<=0 THEN PRINT "*** KLINGON DESTROYED ***"
    0x5aca957088f0 ----------        b GOTO 1650
    0x5aca95708dc0 ----------   01640  PRINT " (SENSORS SHOW";K(I,3);"UNITS REMAINING)"
    0x5aca95708e70 ----------        a GOTO 1670
    0x5aca95709180 ---------- T 01650  K3=K3-1
    0x5aca95709490 ---------- T      a K9=K9-1
    0x5aca95709840 ---------- T      b Z1=K(I,1)
    0x5aca95709bf0 ---------- T      c Z2=K(I,2)
    0x5aca95709e00 ---------- T      d A$=" "
    0x5aca95709eb0 ---------- T      e GOSUB 3320
    0x5aca9570a240 ----------   01660  K(I,3)=0
    0x5aca9570a8d0 ----------        a G(Q1,Q2)=G(Q1,Q2)-100
    0x5aca9570ae60 ----------        b Z(Q1,Q2)=G(Q1,Q2)
    0x5aca9570b0c0 ----------        c IF K9<=0 THEN 2430
    0x5aca9570b200 ---------- T 01670  NEXT I
    0x5aca9570b250 ---------- T      a GOSUB 2220
    0x5aca9570b2c0 ---------- T      b GOTO 590
    0x5aca9570b330 ---------A T 01680  REM 
    0x5aca9570b700 ----------   01685  IF P<0 THEN PRINT "ALL PHOTON TORPEDOES EXPENDED."
    0x5aca9570b7b0 ----------        a GOTO 590
    0x5aca9570bbf0 ----------   01690  IF D(5)<0 THEN PRINT "PHOTON TUBES ARE NOT OPERATIONAL"
    0x5aca9570bca0 ----------        a GOTO 590
    0x5aca9570be00 ---------- T 01700  INPUT "PHOTON TORPEDO COURSE(1-9)";C1
    0x5aca9570c260 ---------- T      a IF C1=9 THEN C1=1
    0x5aca9570c710 ----------   01710  IF C1>=1 AND C1<9 THEN 1740
    0x5aca9570c890 ----------   01720  PRINT "ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5aca9570c940 ----------   01730  GOTO 590
    0x5aca9570d710 ---------- T 01740  X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1))
    0x5aca9570da20 ---------- T      a E=E-2
    0x5aca9570dd80 ---------- T      b P=P-1
    0x5aca9570eb50 ----------   01750  X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1))
    0x5aca9570ed60 ----------        a X=S1
    0x5aca9570efb0 ----------        b Y=S2
    0x5aca9570f2e0 ---------- T 01770  X=X+X1
    0x5aca9570f610 ---------- T      a Y=Y+X2
    0x5aca9570fac0 ---------- T      b X3= INT(X+.5)
    0x5aca9570ffb0 ---------- T      c Y3= INT(Y+.5)
    0x5aca95710870 ----------   01780  IF X3<1 OR X3>8 OR Y3<1 OR Y3>8 THEN 1980
    0x5aca95710bb0 ----------   01785  PRINT @832, STRING$(63," ")
    0x5aca95711010 ----------   01790  PRINT @832,"TRACKING TORPEDO:";X3;",";Y3;
    0x5aca95711230 ----------        a A$=" "
    0x5aca95711440 ----------        b Z1=X
    0x5aca95711650 ----------        c Z2=Y
    0x5aca957116d0 ----------        d GOSUB 3460
    0x5aca957119e0 ----------   01800  IF Z3<>0 THEN 1770
    0x5aca95711a80 ----------   01805  PRINT 
    0x5aca95711ca0 ----------   01810  A$="+K+"
    0x5aca95711eb0 ----------        a Z1=X
    0x5aca957120c0 ----------        b Z2=Y
    0x5aca95712110 ----------        c GOSUB 3460
    0x5aca957123a0 ----------        d IF Z3=0 THEN 1860
    0x5aca957124f0 ----------   01820  PRINT "*** KLINGON DESTROYED ***"
    0x5aca95712810 ----------        a K3=K3-1
    0x5aca95712b20 ----------        b K9=K9-1
    0x5aca95712da0 ----------        c IF K9<=0 THEN 2430
    0x5aca95713060 ----------   01830  FOR I=1 TO 3
    0x5aca95713860 ----------        a IF X3=K(I,1) AND Y3=K(I,2) THEN 1850
    0x5aca957139a0 ----------   01840  NEXT I
    0x5aca95713bc0 ----------        a I=3
    0x5aca95713f50 ---------- T 01850  K(I,3)=0
    0x5aca95713fe0 ---------- T      a GOTO 1960
    0x5aca957141f0 ---------- T 01860  A$=" * "
    0x5aca95714400 ---------- T      a Z1=X
    0x5aca95714610 ---------- T      b Z2=Y
    0x5aca95714660 ---------- T      c GOSUB 3460
    0x5aca957148f0 ---------- T      d IF Z3=0 THEN 1880
    0x5aca95714e40 ----------   01870  PRINT "STAR AT";X3;",";Y3;"ABSORBED TORPEDO ENERGY."
    0x5aca95714ea0 ----------        a GOSUB 2220
    0x5aca95714f30 ----------        b GOTO 590
    0x5aca95715140 ---------- T 01880  A$=">!<"
    0x5aca95715350 ---------- T      a Z1=X
    0x5aca95715560 ---------- T      b Z2=Y
    0x5aca957155b0 ---------- T      c GOSUB 3460
    0x5aca95715830 ---------- T      d IF Z3=0 THEN 1700
    0x5aca95715980 ----------   01890  PRINT "*** STARBASE DESTROYED ***"
    0x5aca95715ca0 ----------        a B3=B3-1
    0x5aca95715fe0 ----------        b B9=B9-1
    0x5aca95716690 ----------   01900  IF B9>0 OR K9>T-10-T9 THEN 1940
    0x5aca95716900 ----------   01909  NA$="WALDO"
    0x5aca95716ca0 ----------   01910  PRINT "CAPTAIN ";NA$;" YOU ARE HEREBY RELIEVED OF COMMAND"
    0x5aca95716e40 ----------   01920  PRINT "AND SENTENCED TO 99 STARDATES OF HARD LABOR ON CYGNUS 12!!"
    0x5aca957171c0 ----------   01925  FOR II=1 TO 2500
    0x5aca95717240 ----------        a NEXT 
    0x5aca957172e0 ----------   01930  GOTO 2360
    0x5aca95717460 ---------- T 01940  PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x5aca957175a0 ----------   01950  PRINT "COURT MARTIAL!"
    0x5aca957177d0 ----------        a D=0
    0x5aca957179e0 ---------- T 01960  Z1=X
    0x5aca95717bf0 ---------- T      a Z2=Y
    0x5aca95717e00 ---------- T      b A$=" "
    0x5aca95717ea0 ---------- T      c GOSUB 3320
    0x5aca957186b0 ----------   01970  G(Q1,Q2)=K3*100+B3*10+S3
    0x5aca95718c40 ----------        a Z(Q1,Q2)=G(Q1,Q2)
    0x5aca95718c90 ----------        b GOSUB 2220
    0x5aca95718d30 ----------        c GOTO 590
    0x5aca95718d80 ---------- T 01980  PRINT 
    0x5aca95718ec0 ---------- T      a PRINT "TORPEDO MISSED."
    0x5aca95718f20 ---------- T      b GOSUB 2220
    0x5aca95718fc0 ---------- T      c GOTO 590
    0x5aca95719400 ---------- T 01990  IF D(7)<0 THEN PRINT "SHIELD CONTROL INOPERABLE."
    0x5aca957194c0 ---------- T      a GOTO 590
    0x5aca95719830 ----------   02000  PRINT "ENERGY ADVAILABLE=";E+S;
    0x5aca957199f0 ----------        a INPUT "NUMBER OF UNITS TO SHIELDS";X
    0x5aca95719fc0 ----------   02010  IF X<0 OR S=X THEN PRINT "<SHIELDS REMAIN UNCHANGED>"
    0x5aca9571a050 ----------        a GOTO 590
    0x5aca9571a410 ----------   02020  IF X<=E+S THEN 2050
    0x5aca9571a7b0 ----------   02030  PRINT "CAPTAIN "NA$"! THIS IS NOT THE FEDERATION TREASURY."
    0x5aca9571a8f0 ----------   02040  PRINT "<SHIELDS UNCHANGED>"
    0x5aca9571a9a0 ----------        a GOTO 590
    0x5aca9571adf0 ---------- T 02050  E=E+S-X
    0x5aca9571b000 ---------- T      a S=X
    0x5aca9571b190 ---------- T      b PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x5aca9571b610 ----------   02060  PRINT " 'SHIELDS NOW AT"; INT(S);"UNITS PER UOUR COMAND.'"
    0x5aca9571b8d0 ----------   02065  FOR II=1 TO 1500
    0x5aca9571b930 ----------        a NEXT 
    0x5aca9571b980 ----------        b CLS 
    0x5aca9571b9d0 ----------        c GOSUB 2460
    0x5aca9571ba50 ----------        d GOTO 590
    0x5aca9571bd90 ---------- T 02070  IF D(6)>=0 THEN 2180
    0x5aca9571bee0 ----------   02080  PRINT "DAMMAGE CONTROL REPORT NOT AVAILABLE"
    0x5aca9571c160 ----------        a IF D=0 THEN 590
    0x5aca9571c420 ---------- T 02090  D3=0
    0x5aca9571c790 ---------- T      a FOR TI=1 TO 8
    0x5aca9571cdf0 ---------- T      b IF D(I)<0 THEN D3=D3+.1
    0x5aca9571cf30 ----------   02100  NEXT I
    0x5aca9571d1a0 ----------        a IF D3=0 THEN 590
    0x5aca9571d200 ----------   02110  PRINT 
    0x5aca9571d540 ----------        a D3=D3+D4
    0x5aca9571d9b0 ----------        b IF D3>=1 THEN D3=.9
    0x5aca9571db70 ----------   02120  PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP"
    0x5aca9571e1f0 ----------   02130  PRINT "ESTIMATED TIME TO REPAIR:";.01* INT(100*D3);"STARDATES"
    0x5aca9571e390 ----------   02140  INPUT "WILL YOU AUTHORIZE THE REPAIR ORDER(Y/N)";A$
    0x5aca9571e630 ----------   02150  IF A$<>Y THEN 590
    0x5aca9571e8f0 ----------   02160  FOR I=1 TO 8
    0x5aca9571efc0 ----------        a IF HD(I)<0 THEN D(I)=0
    0x5aca9571f100 ----------   02170  NEXT I
    0x5aca9571f580 ----------        a T=T+D3+.1
    0x5aca9571f5d0 ---------- T 02180  CLS 
    0x5aca9571f620 ---------- T      a PRINT 
    0x5aca9571f770 ---------- T      b PRINT "DEVICE STATE OF REPAIR"
    0x5aca9571fa80 ---------- T      c FOR R1=1 TO 8
    0x5aca9571fae0 ----------   02190  GOSUB 3370
    0x5aca957205b0 ----------        a PRINT G2$; LEFT$(Z$,25-LEN(G2$)); INT(D(R1)*100)*.01
    0x5aca957206f0 ----------   02200  NEXT R1
    0x5aca95720740 ----------        a PRINT 
    0x5aca957209a0 ----------        b IF D0<>0 THEN 2090
    0x5aca95720a30 ----------   02210  GOTO 590
    0x5aca95720d00 ----------   02220  IF K3<=0 THEN RETURN 
    0x5aca957210a0 ----------   02230  IF D0<>0 THEN PRINT "STARBASE SHIELDS PROTECT THE ENTERPRISE"
    0x5aca95721100 ----------        a RETURN 
    0x5aca957213e0 ----------   02240  FOR I=1 TO 3
    0x5aca95721800 ----------        a IF K(I,3)<=0 THEN 2320
    0x5aca95722470 ----------   02245  JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5aca95722d80 ----------   02250  H= INT((K(I,3)/JH)*(2+ RND(0)))
    0x5aca957230b0 ----------        a S=S-H
    0x5aca95723970 ----------        b K(I,3)=K(I,3)/(3+ RND(0))
    0x5aca95724210 ----------   02260  PRINT H;"UNITS HIT ON ENTERPRISE FROM SECTOR";K(I,1);",";K(I,2)
    0x5aca957244a0 ----------   02270  IF S<=0 THEN 2340
    0x5aca957247e0 ----------   02280  PRINT " <SHIELDS DOWN TO";S;"UNITS>"
    0x5aca95724a60 ----------        a IF H<20 THEN 2320
    0x5aca957250e0 ----------   02290  IF RND(0)>.6 OR H/S<=.02 THEN 2320
    0x5aca957253c0 ----------   02300  R1= RND(8)
    0x5aca95725cb0 ----------        a D(R1)=D(R1)-H/S-.5* RND(0)
    0x5aca95725d50 ----------        b GOSUB 3370
    0x5aca957260b0 ----------   02310  PRINT "DAMAGE CONTROL REPORTS '";G2$;" DAMAGED BY THE HIT'"
    0x5aca957261f0 ---------- T 02320  NEXT I
    0x5aca95726240 ---------- T      a RETURN 
    0x5aca957264b0 ---------- T 02330  PRINT "IT IS STARDATE";T
    0x5aca95726770 ---------- T      a FOR I=1 TO 1500
    0x5aca957268b0 ---------- T      b NEXT I
    0x5aca95726980 ---------A T      c GOTO 2360
    0x5aca95726c30 ---------- T 02340  FOR I=1 TO 500
    0x5aca95726d70 ---------- T      a NEXT I
    0x5aca95726dc0 ---------- T      b CLS 
    0x5aca95726e10 ---------- T      c PRINT 
    0x5aca95726f60 ---------- T      d PRINT "THE ENTERPRISE HAS BEEN DESTROYED."
    0x5aca95727100 ---------- T      e PRINT "THE FEDERATION";
    0x5aca95727240 ----------   02350  PRINT " WILL BE CONQUERED"
    0x5aca957272f0 ----------        a GOTO 2330
    0x5aca95727340 ---------- T 02360  CLS 
    0x5aca957276b0 ---------A T      a PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
    0x5aca95727830 ---------A   02370  PRINT "THE END OF YOUR MISSION."
    0x5aca95727890 ---------- T 02380  PRINT 
    0x5aca957278f0 ---------- T      a PRINT 
    0x5aca95727b80 ---------A T      b IF B9=0 THEN 2420
    0x5aca95727d30 ---------A   02390  PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x5aca95727ef0 ---------A   02400  PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x5aca95728060 ----------   02410  INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$
    0x5aca957282e0 ---------A        a IF A$="AYE" THEN 10
    0x5aca95728340 ---------A T 02420  END 
    0x5aca95728540 ----------   02425  T=100
    0x5aca95728760 ----------        a B9=1
    0x5aca95728a10 ---------- T 02430  FOR II=1 TO 1500
    0x5aca95728a70 ---------- T      a NEXT 
    0x5aca95728b20 ---------- T      b CLS 
    0x5aca95728ed0 ----------   02435  PRINT @192,"CONGRATIONS, MON CAPITAN "NA$"! THE LAST KLINGON BATTLE"
    0x5aca95729170 ----------   02440  PRINT TAB(5)"CRUISER MENACING THE FEDERATION HAS BEEN DESTROYED!"
    0x5aca95729230 ----------        a PRINT 
    0x5aca95729a80 ----------   02450  PRINT TAB(10)"YOUR EFFICIENCY RATING IS";1000*(K7/(T-T0))^2
    0x5aca95729b20 ----------        a GOTO 2380
    0x5aca9572a010 ---------- G 02460  FOR I=S1-1 TO S1+1
    0x5aca9572a570 ---------B G      a FOR J=S2-1 TO S2+1
    0x5aca9572b5d0 ---------B   02470  IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 2490
    0x5aca9572b7f0 ----------   02480  A$=">!<"
    0x5aca9572ba00 ----------        a Z1=I
    0x5aca9572bc10 ----------        b Z2=J
    0x5aca9572bc60 ----------        c GOSUB 3460
    0x5aca9572bec0 ---------B        d IF Z3=1 THEN 2500
    0x5aca9572c000 ---------- T 02490  NEXT J
    0x5aca9572c130 ---------- T      a NEXT I
    0x5aca9572c320 ---------- T      b D0=0
    0x5aca9572c3a0 ---------B T      c GOTO 2520
    0x5aca9572c590 ---------- T 02500  D0=1
    0x5aca9572c860 ---------- T      a C$="DOCKED"
    0x5aca9572ca70 ---------- T      b E=E0
    0x5aca9572cd40 ---------B T      c P=P0
    0x5aca9572ce80 ----------   02510  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x5aca9572d200 ----------        a FOR IX=1 TO 1500
    0x5aca9572d340 ----------        b NEXT IX
    0x5aca9572d530 ----------        c S=0
    0x5aca9572d5c0 ---------B        d GOTO 2540
    0x5aca9572da00 ---------- T 02520  IF K3>0 THEN C$="*RED*"
    0x5aca9572daa0 ---------B T      a GOTO 2540
    0x5aca9572dcb0 ----------   02530  C$="GREEN"
    0x5aca9572e240 ----------        a IF E<E0*.1 THEN C$="YELLOW"
    0x5aca9572e590 ---------B T 02540  IF D(2)>=0 THEN 2560
    0x5aca9572ebc0 ----------   02550  IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS 
    0x5aca9572ec70 ---------B        a PRINT 
    0x5aca9572edc0 ----------   02555  PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x5aca9572ee20 ----------        a PRINT 
    0x5aca9572ee80 ---------B        b RETURN 
    0x5aca9572ef20 ---------- T 02560  CLS 
    0x5aca9572f140 ---------- T      a O1$="---------------------------------"
    0x5aca9572f270 ---------- T      b PRINT O1$
    0x5aca9572f590 ---------B T      c FOR I=1 TO 8
    0x5aca9572ffd0 ----------   02570  FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3
    0x5aca957304b0 ----------        a PRINT " "; MID$(Q$,J,3);
    0x5aca957305f0 ---------B        b NEXT J
    0x5aca95730da0 ---------B   02580  ON I GOTO 2590,2600,2610,2620,2630,2640,2650,2660
    0x5aca956fcb10 ---------- T 02590  PRINT " STARDATE "; INT(T*10)*.1
    0x5aca956fcba0 ---------B T      a GOTO 2670
    0x5aca956fcdd0 ---------- T 02600  PRINT " CONDITION ";C$
    0x5aca95731e50 ---------B T      a GOTO 2670
    0x5aca95732260 ---------- T 02610  PRINT " QUADRANT ";Q1;",";Q2
    0x5aca95732300 ---------B T      a GOTO 2670
    0x5aca95732730 ---------- T 02620  PRINT " SECTOR ";S1;",";S2
    0x5aca957327d0 ---------B T      a GOTO 2670
    0x5aca95732ae0 ---------- T 02630  PRINT " PHOTON TORPEDOES "; INT(P)
    0x5aca95732b80 ---------B T      a GOTO 2670
    0x5aca95732fb0 ---------- T 02640  PRINT " TOTAL ENERGY "; INT(E+S)
    0x5aca95733050 ---------B T      a GOTO 2670
    0x5aca95733360 ---------- T 02650  PRINT " SHIELDS "; INT(S)
    0x5aca95733400 ---------B T      a GOTO 2670
    0x5aca95733740 ---------B T 02660  PRINT " KLINGONS REMAINING "; INT(K9)
    0x5aca95733880 ---------- T 02670  NEXT I
    0x5aca957339b0 ---------- T      a PRINT O1$
    0x5aca95733a10 ---------B T      b RETURN 
    0x5aca95733e80 ---------- T 02680  IF D(8)<0 THEN PRINT "COMPUTER DISABLED"
    0x5aca95733f40 ---------- T      a GOTO 590
    0x5aca95734160 ---------- T 02690  INPUT "COMPUTER ACTIVE AND AWAITING A COMAND";A
    0x5aca95734600 ---------- T      a IF A<0 OR A>4 THEN 2710
    0x5aca957348c0 ----------   02700  H8=1
    0x5aca95734f00 ----------        a ON A+1 GOTO 2810,2930,3010,3270,3070
    0x5aca95734f60 ---------- T 02710  CLS 
    0x5aca957350f0 ---------- T      a PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER."
    0x5aca95735270 ----------   02720  PRINT " 0=CUMULITIVE GALACTIVE RECORD"
    0x5aca957353e0 ----------   02730  PRINT " 1=STATUS REPORT"
    0x5aca95735560 ----------   02740  PRINT " 2=PHOTON TORPEDO DATA"
    0x5aca957356e0 ----------   02750  PRINT " 3=STARBASE NAV DATA"
    0x5aca95735850 ----------   02760  PRINT " 4=DIRECTION/DISTANCE CALCULATOR"
    0x5aca957358b0 ----------   02770  PRINT 
    0x5aca95735960 ----------        a GOTO 2690
    0x5aca95735b50 ----------   02780  H8=0
    0x5aca95735d40 ----------        a G5=1
    0x5aca95735d90 ----------        b CLS 
    0x5aca95736000 ----------        c PRINT TAB(24)"THE GALAXY"
    0x5aca95736090 ----------        d GOTO 2840
    0x5aca957360e0 ---------- T 02810  PRINT 
    0x5aca95736290 ---------- T      a PRINT " ";
    0x5aca957362f0 ----------   02820  CLS 
    0x5aca95736760 ----------        a PRINT "COMPUTER RECORD OF GALAXY FOR QUADRENT";Q1;",";Q2
    0x5aca957367f0 ----------   02830  PRINT 
    0x5aca95736980 ---------- T 02840  PRINT " 1 2 3 4 5 6 7 8"
    0x5aca95736c10 ----------   02850  O1$=" ----- ----- ------ ------ ------ ------ ----- ------"
    0x5aca95736d40 ----------   02860  PRINT O1$
    0x5aca95737000 ----------        a FOR I=1 TO 8
    0x5aca95737140 ----------        b PRINT 1;
    0x5aca957373e0 ----------        c IF H8=0 THEN 2900
    0x5aca957376a0 ----------   02870  FOR J=1 TO 8
    0x5aca95737800 ----------        a PRINT " ";
    0x5aca95737d60 ----------        b IF Z(I,J)=0 THEN PRINT "***";
    0x5aca95737e00 ----------        c GOTO 2890
    0x5aca957384b0 ----------   02880  PRINT RIGHT$(STR$(Z(I,J)+1000),3);
    0x5aca957385f0 ---------- T 02890  NEXT J
    0x5aca957386a0 ---------- T      a GOTO 2920
    0x5aca957388b0 ---------- T 02900  Z4=I
    0x5aca95738aa0 ---------- T      a Z5=1
    0x5aca95738af0 ---------- T      b GOSUB 3490
    0x5aca95739180 ---------- T      c J0= INT(15-.5* LEN(G2$))
    0x5aca95739480 ---------- T      d PRINT TAB(J0);G2$;
    0x5aca95739680 ----------   02910  Z5=5
    0x5aca957396d0 ----------        a GOSUB 3490
    0x5aca95739d20 ----------        b J0= INT(39-.5* LEN /(G2$))
    0x5aca9573a000 ----------        c PRINT TAB(J0);G2$;
    0x5aca9573a060 ---------- T 02920  PRINT 
    0x5aca9573a1a0 ---------- T      a NEXT I
    0x5aca9573a1f0 ---------- T      b PRINT 
    0x5aca9573a2a0 ---------- T      c GOTO 590
    0x5aca9573a2f0 ---------- T 02930  CLS 
    0x5aca9573a420 ---------- T      a PRINT " STSTAS REPORT:"
    0x5aca9573a640 ---------- T      b X$=""
    0x5aca9573aab0 ---------- T      c IF K9>1 THEN X$="S"
    0x5aca9573af50 ----------   02940  PRINT "KLINGON";X$;" LEFT: ";K9
    0x5aca9573b840 ----------   02950  PRINT "MISSION MUST BE COMPLEATED IN";.1* INT((T0+T9-T)*10),"STARDATES"
    0x5aca9573ba60 ----------   02960  X$="S"
    0x5aca9573bea0 ----------        a IF B9<2 THEN X$=""
    0x5aca9573c140 ----------        b IF B9<1 THEN 2990
    0x5aca9573c6c0 ----------   02970  PRINT "THE FEDERATION IS MAINTAINING";B9;"STARBASE";X$;" IN THE GALAXY"
    0x5aca9573c980 ----------   02975  FOR IX=1 TO 1500
    0x5aca9573cac0 ----------        a NEXT IX
    0x5aca9573cb80 ----------   02980  GOTO 2070
    0x5aca9573cf20 ---------- T 02990  PRINT "CAPTAIN "NA$"! YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN"
    0x5aca9573d0b0 ----------   03000  PRINT "IN THE GALAXY--YOU HAVE NO STARBASES LEFT!"
    0x5aca9573d370 ----------   03005  FOR I=1 TO 2000
    0x5aca9573d3d0 ----------        a NEXT 
    0x5aca9573d450 ----------        b GOTO 2070
    0x5aca9573d6b0 ---------- T 03010  IF K3<=0 THEN 1510
    0x5aca9573d8d0 ----------   03020  X$=""
    0x5aca9573dd50 ----------        a IF K3>1 THEN X$="S"
    0x5aca9573dfe0 ----------   03030  PRINT "FROM ENTERPRISE TO KLINGON";X$
    0x5aca9573e1e0 ----------   03040  H8=0
    0x5aca9573e490 ----------        a FOR I=1 TO 3
    0x5aca9573e8a0 ----------        b IF K(I,3)<=0 THEN 3260
    0x5aca9573ec60 ----------   03050  W1=K(I,1)
    0x5aca9573f040 ----------        a X=K(I,2)
    0x5aca9573f250 ---------- T 03060  C1=S1
    0x5aca9573f460 ---------- T      a A=S2
    0x5aca9573f4f0 ---------- T      b GOTO 3110
    0x5aca9573f540 ---------- T 03070  CLS 
    0x5aca9573f6d0 ---------- T      a PRINT "DIRECTION/DISTANCE CALCULATER:"
    0x5aca9573ff40 ----------   03080  PRINT "YOU ARE AT QUADRENT ";Q1;",";Q2;" SECTOR ";S1;",";S2
    0x5aca95740080 ----------   03090  PRINT "PLEASE ENTER"
    0x5aca957402a0 ----------        a C1=Q1
    0x5aca957404f0 ----------        b A=Q2
    0x5aca95740760 ----------   03100  INPUT " DESTINATION COORDINATES(X,Y)";W1,X
    0x5aca95740aa0 ---------- T 03110  X=X-A
    0x5aca95740dd0 ---------- T      a A=C1-W1
    0x5aca95741020 ---------- T      b IF X<0 THEN 3190
    0x5aca95741280 ----------   03120  IF A<0 THEN 3210
    0x5aca957414f0 ----------   03130  IF X>0 THEN 3150
    0x5aca95741920 ----------   03140  IF A=0 THEN C1=5
    0x5aca957419a0 ----------        a GOTO 3160
    0x5aca95741bc0 ---------- T 03150  C1=1
    0x5aca95742030 ---------- T 03160  IF ABS(A)<= ABS(X) THEN 3180
    0x5aca95742b50 ----------   03170  PRINT "DIRECTION=";C1+((( ABS(A)- ABS(X))+ ABS(A))/ ABS(A));
    0x5aca95742c00 ----------        a GOTO 3250
    0x5aca957433d0 ---------- T 03180  PRINT "DIRECTION=";C1+( ABS(A)/( ABS(X)+.001));
    0x5aca95743460 ---------- T      a GOTO 3250
    0x5aca95743880 ---------- T 03190  IF A>0 THEN C1=3
    0x5aca95743910 ---------- T      a GOTO 3220
    0x5aca95743d30 ----------   03200  IF X<>0 THEN C1=5
    0x5aca95743db0 ----------        a GOTO 3160
    0x5aca95743fd0 ---------- T 03210  C1=7
    0x5aca95744440 ---------- T 03220  IF ABS(A)>= ABS(X) THEN 3240
    0x5aca95744f60 ----------   03230  PRINT "DIRECTION=";C1+((( ABS(X)- ABS(A))+ ABS(X))/ ABS(X));
    0x5aca95745000 ----------        a GOTO 3250
    0x5aca957456c0 ---------- T 03240  PRINT "DIRECTION=";C1+( ABS(X)/ ABS(A));
    0x5aca95745860 ---------- T 03250  PRINT "DISTANCE=";
    0x5aca95746100 ----------   03252  IF W1=B4 THEN PRINT SQR(X^2+A^2)/10
    0x5aca95746190 ----------        a GOTO 3254
    0x5aca957466e0 ----------   03253  PRINT SQR(X^2+A^2)
    0x5aca95746940 ---------- T 03254  IF H8=1 THEN 590
    0x5aca95746a80 ---------- T 03260  NEXT I
    0x5aca95746b30 ---------- T      a GOTO 590
    0x5aca95746eb0 ---------- T 03270  IF B3<>0 THEN PRINT "FROM ENTERPRISE TO STAREBASE:"
    0x5aca957470d0 ---------- T      a W1=B4
    0x5aca957472e0 ---------- T      b X=B5
    0x5aca95747380 ---------- T      c GOTO 3060
    0x5aca95747520 ----------   03280  PRINT "MR SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS";
    0x5aca95747660 ----------   03290  PRINT " QUADRANT '"
    0x5aca95747720 ----------        a GOTO 590
    0x5aca957479f0 ---------- B 03300  R1= RND(8)
    0x5aca95747cc0 ---------- B      a R2= RND(8)
    0x5aca95747ed0 ---------- B      b A$=" "
    0x5aca957480e0 ---------- B      c Z1=R1
    0x5aca957482f0 ---------- B      d Z2=R2
    0x5aca95748340 ---------- B      e GOSUB 3460
    0x5aca95748590 ---------C B      f IF Z3=0 THEN 3300
    0x5aca957485f0 ---------C   03310  RETURN 
    0x5aca95749040 ---------D G 03320  S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
    0x5aca95749490 ----------   03330  IF LEN(A$)<>3 THEN PRINT "ERROR"
    0x5aca957494f0 ---------D        a STOP 
    0x5aca95749c20 ----------   03340  IF S8=1 THEN Q$=A$+ RIGHT$ (Q$,189)
    0x5aca95749c80 ----------        a RETURN 
    0x5aca9574a3b0 ----------   03350  IF S8=190 THEN Q$= LEFT$ (Q$,189)+A$
    0x5aca9574a410 ----------        a RETURN 
    0x5aca9574ae20 ----------   03360  Q$= LEFT$ (Q$,S8-1)+A$+ RIGHT$ (Q$,190-S8)
    0x5aca9574ae70 ----------        a RETURN 
    0x5aca9574b610 ---------E G 03370  ON R1 GOTO 3380,3390,3400,3410,3420,3430,3440,3450
    0x5aca9574b830 ---------- T 03380  G2$="WARP ENGINES"
    0x5aca9574b880 ---------E T      a RETURN 
    0x5aca9574bac0 ---------- T 03390  G2$="SHORT RANGE SCANNERS"
    0x5aca9574bb10 ---------E T      a RETURN 
    0x5aca9574bd50 ---------- T 03400  G2$="LONG RANGE SCANNERS"
    0x5aca9574bda0 ---------E T      a RETURN 
    0x5aca9574bfd0 ---------- T 03410  G2$="PHASER CONTROL"
    0x5aca9574c020 ---------E T      a RETURN 
    0x5aca9574c250 ---------- T 03420  G2$="PHOTON TUBES"
    0x5aca9574c2a0 ---------E T      a RETURN 
    0x5aca9574c4d0 ---------- T 03430  G2$="DAMMAGE CONTROL"
    0x5aca9574c520 ---------E T      a RETURN 
    0x5aca9574c750 ---------- T 03440  G2$="SHIELD CONTROL"
    0x5aca9574c7a0 ---------E T      a RETURN 
    0x5aca9574c9d0 ---------- T 03450  G2$="LIBRARY-COMPUTER"
    0x5aca9574ca20 ---------E T      a RETURN 
    0x5aca9574ce50 ---------- G 03460  Z1= INT(Z1+.5)
    0x5aca9574d240 ---------- G      a Z2= INT(Z2+.5)
    0x5aca9574daf0 ---------- G      b S8=(Z2-1)*3+(Z1-1)*24+1
    0x5aca9574dd10 ---------F G      c Z3=0
    0x5aca9574e240 ---------F   03470  IF MID$(Q$,S8,3)<>A$ THEN RETURN 
    0x5aca9574e440 ----------   03480  Z3=1
    0x5aca9574e490 ---------F        a RETURN 
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/startrek1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5aca956bbdd0 ---------A   01000  REM NOTE
    0x5aca956baba0 ---------A   01010  REM trs2 - TRS-80 Level II BASIC tokenized file
    0x5aca956bbf50 ---------A   01020  CLS 
    0x5aca956b96d0 ---------A T 01030  PRINT @210,"S U P E R S T A R T R E K"
    0x5aca956b9670 ----------   01040  PRINT 
    0x5aca956ba2d0 ---------A   01050  PRINT 
    0x5aca956bc010 ---------A   01060  CLEAR 600
    0x5aca956bc0d0 ---------A T 01070  Z$=" "
    0x5aca956c1d40 ----------   01080  DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8)
    0x5aca956c1df0 ---------A T 01090  RANDOM 
    0x5aca956c2520 ----------   01100  T= INT( RND(0)*20+20)*100
    0x5aca956c27f0 ----------   01110  T0=T
    0x5aca956c2e60 ----------   01120  T9=25+ INT( RND(0)*10)
    0x5aca956c3110 ----------   01130  D0=0
    0x5aca956c33c0 ----------   01140  E=3000
    0x5aca956c36d0 ---------A   01150  E0=E
    0x5aca956bbe90 ---------- T 01160  P=10
    0x5aca956c3c00 ---------- T 01170  PO=P
    0x5aca956c3eb0 ----------   01180  S9=200
    0x5aca956c4160 ----------   01190  S=0
    0x5aca956c4410 ----------   01200  B9=0
    0x5aca956c46c0 ---------- T 01210  K9=0
    0x5aca956c4990 ----------   01220  X$=""
    0x5aca956c4ca0 ---------A   01230  X0$=" IS "
    0x5aca956c5030 ----------   01240  Q1= RND(8)
    0x5aca956c53c0 ----------   01250  Q2= RND(8)
    0x5aca956c5750 ----------   01260  S1= RND(8)
    0x5aca956c5b20 ---------A   01270  S2= RND(8)
    0x5aca956c5e90 ----------   01280  FOR I=1 TO 9
    0x5aca956c6230 ----------   01290  C(I,1)=0
    0x5aca956c65c0 ----------   01300  C(I,2)=0
    0x5aca956c66f0 ---------A   01310  NEXT I
    0x5aca956c6ab0 ----------   01320  C(3,1)=-1
    0x5aca956c6e20 ----------   01330  C(2,1)=-1
    0x5aca956c7190 ----------   01340  C(4,1)=-1
    0x5aca956c7500 ---------- T 01350  C(4,2)=-1
    0x5aca956c7870 ----------   01360  C(5,2)=-1
    0x5aca956c7c30 ---------A   01370  C(6,2)=-1
    0x5aca956c7fa0 ----------   01380  C(1,2)=1
    0x5aca956c8310 ----------   01390  C(2,2)=1
    0x5aca956c8680 ----------   01400  C(6,1)=1
    0x5aca956c89f0 ---------- T 01410  C(7,1)=1
    0x5aca956c8d60 ----------   01420  C(8,1)=1
    0x5aca956c90d0 ----------   01430  C(8,2)=1
    0x5aca956c9440 ---------A   01440  C(9,2)=1
    0x5aca956c96f0 ----------   01450  FOR I=1 TO 8
    0x5aca956c99d0 ----------   01460  D(I)=0
    0x5aca956c9b00 ---------A   01470  NEXT I
    0x5aca956c9e00 ---------A T 01480  A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    0x5aca956ca0b0 ---------- T 01490  FOR I=1 TO 8
    0x5aca956ca430 ----------   01500  FOR J=1 TO 8
    0x5aca956ca6f0 ---------- T 01510  K3=0
    0x5aca956caaa0 ----------   01520  Z(I,J)=0
    0x5aca956cae70 ---------A T 01530  R1= RND(0)
    0x5aca956cb290 ----------   01540  IF R1>.98 THEN K3=3
    0x5aca956cb5b0 ---------- T 01550  K9=K9+3
    0x5aca956cb640 ---------A   01560  GOTO 1640
    0x5aca956cba60 ----------   01570  IF R1>.95 THEN K3=2
    0x5aca956cbd80 ----------   01580  K9=K9+2
    0x5aca956cbdd0 ----------   01590  GOTO 1640
    0x5aca956cc1f0 ----------   01600  IF R1>.8 THEN K3=1
    0x5aca956cc550 ----------   01610  K9=K9+1
    0x5aca956cc800 ---------- T 01620  B3=0
    0x5aca956ccce0 ----------   01630  IF RND(0)>.96 THEN B3=1
    0x5aca956cd050 ---------A   01640  B9=B9+1
    0x5aca956cd920 ---------- T 01650  G(I,J)=K3*100+B3*10+ RND(8)
    0x5aca956cda50 ----------   01660  NEXT J
    0x5aca956cdb80 ---------- T 01670  NEXT I
    0x5aca956ce100 ---------A T 01680  IF K9>T9 THEN T9=K9+1
    0x5aca956ce380 ---------A   01690  IF B9<>0 THEN 1780
    0x5aca956cee10 ---------- T 01700  IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100
    0x5aca956cf170 ---------A   01710  K9=K9+1
    0x5aca956cf360 ----------   01720  B9=1
    0x5aca956cf9f0 ----------   01730  G(Q1,Q2)=G(Q1,Q2)+10
    0x5aca956cfcc0 ---------- T 01740  Q1= RND(8)
    0x5aca956cffd0 ---------A   01750  Q2= RND(8)
    0x5aca956d02a0 ----------   01760  K7=K9
    0x5aca956d06e0 ---------- T 01770  IF B9<>1 THEN X$="S"
    0x5aca956d0940 ---------A   01780  X0$=" ARE "
    0x5aca956d0aa0 ---------A   01790  PRINT "YOUR ORDERS ARE AS FOLLOWES:"
    0x5aca956d0e10 ---------A   01800  PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
    0x5aca956d0fd0 ---------A   01810  PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x5aca956d1790 ---------A   01820  PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
    0x5aca956d1d40 ---------A   01830  PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
    0x5aca956d1da0 ----------   01840  PRINT 
    0x5aca956d2020 ---------A T 01850  INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
    0x5aca956d2300 ---------- T 01860  Z4=Q1
    0x5aca956d25d0 ----------   01870  Z5=Q2
    0x5aca956d27c0 ---------- T 01880  K3=0
    0x5aca956d29b0 ----------   01890  B3=0
    0x5aca956d2c60 ----------   01900  S3=0
    0x5aca956d2f10 ----------   01910  G5=0
    0x5aca956d33a0 ----------   01920  D4=.5* RND(0)
    0x5aca956d3970 ---------A   01930  Z(Q1,Q2)=G(Q1,Q2)
    0x5aca956d4430 ---------A T 01940  IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 2110
    0x5aca956d44b0 ---------A   01950  REM 
    0x5aca956d4aa0 ---------- T 01960  K3= INT(G(Q1,Q2)*.01)
    0x5aca956d52b0 ---------A   01970  B3= INT(G(Q1,Q2)*.1)-10*K3
    0x5aca956d5ac0 ---------- T 01980  S3=G(Q1,Q2)-100*K3-10*B3
    0x5aca956d5d40 ---------A T 01990  IF K3=0 THEN 2070
    0x5aca956d5da0 ----------   02000  CLS 
    0x5aca956d5ee0 ----------   02010  PRINT @396,"COMBAT AREA CONDITION RED"
    0x5aca956d6160 ---------A   02020  IF S>200 THEN 2070
    0x5aca956d62f0 ---------A   02030  PRINT @463,"SHIELDS DANGEROUSLY LOW"
    0x5aca956d65b0 ----------   02040  FOR I=1 TO 3
    0x5aca956d6950 ---------- T 02050  K(I,1)=0
    0x5aca956d6ce0 ----------   02060  K(I,2)=0
    0x5aca956d6e10 ---------A T 02070  NEXT I
    0x5aca956d7120 ----------   02080  FOR I=1 TO 3
    0x5aca956d74c0 ---------- T 02090  K(I,3)=0
    0x5aca956d75f0 ----------   02100  NEXT I
    0x5aca956d8280 ---------A   02110  Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
    0x5aca956d8550 ----------   02120  A$="<*>"
    0x5aca956d8820 ----------   02130  Z1=S1
    0x5aca956d8af0 ----------   02140  Z2=S2
    0x5aca956d8b40 ----------   02150  GOSUB 8530
    0x5aca956d8db0 ---------A   02160  IF K3<1 THEN 2270
    0x5aca956d9090 ----------   02170  FOR I=1 TO K3
    0x5aca956d90f0 ---------- T 02180  GOSUB 8510
    0x5aca956d9300 ----------   02190  A$="+K+"
    0x5aca956d9510 ----------   02200  Z1=R1
    0x5aca956d9830 ---------A   02210  Z2=R2
    0x5aca956d9880 ----------   02220  GOSUB 8530
    0x5aca956d9c30 ----------   02230  K(I,1)=R1
    0x5aca956d9fe0 ----------   02240  K(I,1)=R2
    0x5aca956da6b0 ----------   02250  K(I,3)=S9*(.5+ RND(0))
    0x5aca956da7e0 ---------A   02260  NEXT I
    0x5aca956daa80 ---------A   02270  IF B3<1 THEN 2410
    0x5aca956daae0 ----------   02280  GOSUB 8510
    0x5aca956dacf0 ----------   02290  A$=">!<"
    0x5aca956daf00 ----------   02300  Z1=R1
    0x5aca956db1d0 ----------   02310  B4=R1
    0x5aca956db3e0 ---------- T 02320  Z2=R2
    0x5aca956db6b0 ---------- T 02330  B5=R2
    0x5aca956db750 ---------A T 02340  GOSUB 8530
    0x5aca956dba20 ----------   02350  FOR I=1 TO S3
    0x5aca956dba80 ---------- T 02360  GOSUB 8510
    0x5aca956dbc90 ----------   02370  A$=" * "
    0x5aca956dbea0 ---------- T 02380  Z1=R1
    0x5aca956dc0b0 ----------   02390  Z2=R2
    0x5aca956dc100 ----------   02400  GOSUB 8530
    0x5aca956dc230 ---------A   02410  NEXT I
    0x5aca956dc2e0 ---------A T 02420  GOSUB 6650
    0x5aca956dcbb0 ---------A T 02430  IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
    0x5aca956dcc10 ----------   02440  CLS 
    0x5aca956dcfa0 ---------A   02450  PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
    0x5aca956dd180 ---------A G 02460  PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
    0x5aca956dd2c0 ----------   02470  PRINT " AND SHIELD CONTROL."
    0x5aca956dd470 ---------A   02480  PRINT "IS PRESENTLY INCAPABLE OF CROSS";
    0x5aca956dd5c0 ---------- T 02490  PRINT "-CIRUITING TO ENGINE ROOM!!"
    0x5aca956dd660 ---------A T 02500  GOTO 6340
    0x5aca956dd8b0 ----------   02510  PRINT "YOUR ORDERS, CAPTAIN ";NA$;
    0x5aca956dda40 ---------- T 02520  INPUT A$
    0x5aca956ddd00 ----------   02530  FOR I=1 TO 9
    0x5aca956de5d0 ---------- T 02540  IF LEFT$ (A$,3)<> MID$ (A1$,3*I-2,3) THEN 2580
    0x5aca956dee10 ----------   02550  ON I GOTO 2710,2420,4130,4390,4810,5640,5820,7220,6440
    0x5aca956def50 ---------- T 02560  NEXT I
    0x5aca956defa0 ----------   02570  CLS 
    0x5aca956df110 ----------   02580  PRINT "ENTER ONE OF THE FOLOWING:"
    0x5aca956df290 ---------- T 02590  PRINT " NAV(TO SET COURSE)"
    0x5aca956df420 ---------- T 02600  PRINT " SRS(FOR SHORT RANGE SENSOR SCAN)"
    0x5aca956df5a0 ---------- T 02610  PRINT " LRS(FOR LONG RANGE SENSOR SCAN)"
    0x5aca956df720 ---------- T 02620  PRINT " PHA(TO FIRE PHASERS)"
    0x5aca956df8b0 ---------- T 02630  PRINT " TOR(TO FIRE PHOTON TORPEDOES)"
    0x5aca956dfa40 ---------- T 02640  PRINT " SHE(TO RAISE OR LOWER SHIELDS)"
    0x5aca956dfbd0 ---------- T 02650  PRINT " DAM(FOR DAMAGE CONTROAL REPORTS)"
    0x5aca956dfd70 ---------- T 02660  PRINT " COM(TO CALL ON LIBRARY-COMPUTER)"
    0x5aca956e02d0 ---------- T 02670  PRINT " XXX(TO RESIGN YOUR COMAND)"
    0x5aca956e0330 ---------- T 02680  PRINT 
    0x5aca956e03d0 ---------- T 02690  GOTO 2430
    0x5aca956e05e0 ----------   02700  INPUT "COURSE(0-9)";C1
    0x5aca956e0a40 ---------- T 02710  IF C1=9 THEN C1=1
    0x5aca956e0ef0 ----------   02720  IF C1>=1 AND C1<9 THEN 2760
    0x5aca956e1050 ----------   02730  PRINT " LT. SULU REPORTS, 'INCORECT COURSE DATA, SIR!'"
    0x5aca956e10e0 ----------   02740  GOTO 2430
    0x5aca956e12f0 ----------   02750  X$="8"
    0x5aca956e1850 ----------   02760  IF D(1)<0 THEN X$="0.2"
    0x5aca956e1bb0 ----------   02770  PRINT "WARP FACTOR(0-";X$;")";
    0x5aca956e1db0 ----------   02780  INPUT W1
    0x5aca956e2300 ----------   02790  IF D(1)<0 AND W1>.2 THEN 2850
    0x5aca956e2780 ----------   02800  IF W1>0 AND W1<=8 THEN 2870
    0x5aca956e2a20 ---------- T 02810  IF W1=0 THEN 2430
    0x5aca956e2d90 ----------   02820  PRINT " CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T TAKEWARP";W1;"!"
    0x5aca956e2e50 ----------   02830  GOTO 2430
    0x5aca956e2fa0 ---------- T 02840  PRINT "WARP ENGINES ARE DAMMAGED. MAXIMUM SPEED=WARP 0.2"
    0x5aca956e3040 ----------   02850  GOTO 2430
    0x5aca956e3530 ----------   02860  N= INT(W1*8+.5)
    0x5aca956e38d0 ----------   02870  IF E-N>=0 THEN 2950
    0x5aca956e3a70 ----------   02880  PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x5aca956e3f30 ---------- T 02890  PRINT TAB(23)"FOR MANUVERING AT WARP";W1;"!"
    0x5aca956e45e0 ---------- T 02900  IF S<N-E OR D(7)<0 THEN 2430
    0x5aca956e4970 ----------   02910  PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEDGES";S;"UNITS OF ENERGY"
    0x5aca956e4c20 ---------- T 02920  PRINT TAB(23)"PRESENTLY DEPLOYED TO SHIELDS."
    0x5aca956e4cc0 ---------- T 02930  GOTO 2430
    0x5aca956e4f90 ----------   02940  FOR I=1 TO K3
    0x5aca956e53b0 ----------   02950  IF K(I,3)=0 THEN 3090
    0x5aca956e55d0 ----------   02960  A$=" "
    0x5aca956e5980 ----------   02970  Z1=K(I,1)
    0x5aca956e5d30 ----------   02980  Z2=K(I,2)
    0x5aca956e5d80 ---------- T 02990  GOSUB 8530
    0x5aca956e5e10 ----------   03000  GOSUB 8510
    0x5aca956e61c0 ---------- T 03010  K(I,1)=Z1
    0x5aca956e6570 ----------   03020  K(I,2)=Z2
    0x5aca956e6780 ----------   03030  A$="+K+"
    0x5aca956e6810 ----------   03040  GOSUB 8530
    0x5aca956e6940 ----------   03050  NEXT I
    0x5aca956e6990 ---------- T 03060  GOSUB 6110
    0x5aca956e6c40 ---------- T 03070  D1=0
    0x5aca956e6f10 ----------   03080  D6=W1
    0x5aca956e7360 ----------   03090  IF W1>=1 THEN D6=1
    0x5aca956e7620 ----------   03100  FOR I=1 TO 8
    0x5aca956e7990 ---------- T 03110  IF D(I)>=0 THEN 3230
    0x5aca956e7e90 ----------   03120  D(I)=D(I)+D6
    0x5aca956e8770 ----------   03130  IF D(I)>-.1 AND D(I)<0 THEN D(I)=-.1
    0x5aca956e8800 ----------   03140  GOTO 3230
    0x5aca956e8b50 ---------- T 03150  IF D(I)<0 THEN 3230
    0x5aca956e8f80 ---------- T 03160  IF D1<>1 THEN D1=1
    0x5aca956e9110 ----------   03170  PRINT "DAMAGE CONTROL REPORT"
    0x5aca956e92b0 ---------- T 03180  PRINT TAB(8);
    0x5aca956e94d0 ---------- T 03190  R1=I
    0x5aca956e9520 ----------   03200  GOSUB 8620
    0x5aca956e9840 ---------- T 03210  PRINT G2$;" REPAIR COMPLEATED"
    0x5aca956e9980 ---------- T 03220  NEXT I
    0x5aca956e9cb0 ----------   03230  IF RND(0)>.2 THEN 3400
    0x5aca956e9f90 ---------- T 03240  R1= RND(8)
    0x5aca956ea2d0 ---------- T 03250  IF RND(0)>=6 THEN 3330
    0x5aca956eab90 ---------- T 03260  Q(R1)=D(R1)-( RND(0)*5+1)
    0x5aca956ead40 ---------- T 03270  PRINT "DAMAGE CONTROL REPORT:";
    0x5aca956eada0 ----------   03280  GOSUB 8620
    0x5aca956eafd0 ----------   03290  PRINT G2$;" DAMAGED"
    0x5aca956eb030 ---------- B 03300  PRINT 
    0x5aca956eb0e0 ----------   03310  GOTO 3400
    0x5aca956eb890 ---------- G 03320  D(R1)=D(R1)+ RND(0)*3+1
    0x5aca956eba20 ----------   03330  PRINT "DAMAGE CONTROL REPORT:"
    0x5aca956eba80 ----------   03340  GOSUB 8620
    0x5aca956ebcc0 ----------   03350  PRINT G2$;" STATE OF REPAIR IMPROVED"
    0x5aca956ebd60 ----------   03360  PRINT 
    0x5aca956ebf80 ---------- G 03370  A$=" "
    0x5aca956ec270 ---------- T 03380  Z1= INT(S1)
    0x5aca956ec560 ---------- T 03390  Z2= INT(S2)
    0x5aca956ec600 ---------- T 03400  GOSUB 8530
    0x5aca956ed490 ---------- T 03410  X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1))
    0x5aca956ed760 ---------- T 03420  X=S1
    0x5aca956eda80 ---------- T 03430  Y=S2
    0x5aca956ee910 ---------- T 03440  X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1))
    0x5aca956eebe0 ---------- T 03450  Q4=Q1
    0x5aca956eef10 ---------- G 03460  Q5=Q2
    0x5aca956ef1e0 ----------   03470  FOR I=1 TO N
    0x5aca956ef520 ----------   03480  S1=S1+X1
    0x5aca956ef850 ----------   03490  S2=S2+X2
    0x5aca956f0130 ----------   03500  IF S1<1 OR S1>=9 OR S2<1 OR S2>=9 THEN 3750
    0x5aca956f09f0 ----------   03510  S8= INT(S1)*24+ INT(S2)*3-26
    0x5aca956f0f20 ----------   03520  IF MID$ (Q$,S8,2)=" " THEN 3600
    0x5aca956f1340 ----------   03530  S1= INT(S1-X1)
    0x5aca956f1750 ----------   03540  S2= INT(S2-X2)
    0x5aca956f1900 ----------   03550  PRINT "WARP ENGINES SHUT DOWN AT ";
    0x5aca956f1e50 ----------   03560  PRINT "SECTOR";S1;",";S2;"DUE TO BAD NAVIGATION."
    0x5aca956f1ee0 ----------   03570  GOTO 3660
    0x5aca956f2010 ----------   03580  NEXT I
    0x5aca956f2300 ----------   03590  S1= INT(S1)
    0x5aca956f2640 ----------   03600  S2= INT(S2)
    0x5aca956f2850 ----------   03610  A$="<*>"
    0x5aca956f2b40 ----------   03620  Z1= INT(S1)
    0x5aca956f2e30 ----------   03630  Z2= INT(S2)
    0x5aca956f2e80 ----------   03640  GOSUB 8530
    0x5aca956f2ed0 ----------   03650  GOSUB 4060
    0x5aca956f31b0 ----------   03660  T8=1
    0x5aca956f3900 ----------   03670  IF W1<1 THEN T8=.1* INT(10*W1)
    0x5aca956f3c40 ----------   03680  T=T+T8
    0x5aca956f3fd0 ----------   03690  IF T>T0+T9 THEN 6340
    0x5aca956f4090 ----------   03700  GOTO 2420
    0x5aca956f4700 ----------   03710  X=8*Q1+X+N*X1
    0x5aca956f4d70 ----------   03720  Y=8*Q2+Y+N*X2
    0x5aca956f5160 ----------   03730  Q1= INT(X/8)
    0x5aca956f5550 ----------   03740  Q2= INT(Y/8)
    0x5aca956f5aa0 ----------   03750  S1= INT(X-Q1*8)
    0x5aca956f5fb0 ----------   03760  S2= INT(Y-Q2*8)
    0x5aca956f64f0 ----------   03770  IF S1=0 THEN Q1=Q1-1
    0x5aca956f6720 ----------   03780  S1=8
    0x5aca956f6c60 ----------   03790  IF S2=0 THEN Q2=Q2-1
    0x5aca956f6e90 ----------   03800  S2=8
    0x5aca956f7140 ----------   03810  X5=0
    0x5aca956f7560 ----------   03820  IF Q1<1 THEN X5=1
    0x5aca956f7760 ----------   03830  Q1=1
    0x5aca956f7980 ----------   03840  S1=1
    0x5aca956f7da0 ----------   03850  IF Q1>8 THEN X5=1
    0x5aca956f7fa0 ----------   03860  Q1=8
    0x5aca956f81c0 ----------   03870  S1=8
    0x5aca956f85e0 ----------   03880  IF Q2<1 THEN X5=1
    0x5aca956f87e0 ----------   03890  Q2=1
    0x5aca956f8a00 ----------   03900  S2=1
    0x5aca956f8e20 ----------   03910  IF Q2>8 THEN X5=1
    0x5aca956f9020 ----------   03920  Q2=8
    0x5aca956f9230 ----------   03930  S2=8
    0x5aca956f94b0 ----------   03940  IF X5=0 THEN 4010
    0x5aca956f9660 ----------   03950  PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMAND:"
    0x5aca956f9820 ----------   03960  PRINT " 'PREMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMITER"
    0x5aca956f99d0 ----------   03970  PRINT " IS HEREBY *DENIED*. SHUT DOWN YOUR ENGINES.'"
    0x5aca956f9b80 ----------   03980  PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x5aca956fa4f0 ----------   03990  PRINT "AT SECTOR";S1;",";S2;"OF QUADRENT";Q1;",";Q2;"'"
    0x5aca956fa8a0 ----------   04000  IF T>T0+T9 THEN 6340
    0x5aca956faf70 ----------   04010  IF 8*Q1+Q2=8*Q4+Q5 THEN 3660
    0x5aca956fb290 ----------   04020  T=T+1
    0x5aca956fb2e0 ----------   04030  GOSUB 4060
    0x5aca956fb360 ----------   04040  GOTO 1930
    0x5aca956fb790 ----------   04050  E=E-N-10
    0x5aca956fba50 ----------   04060  IF E>=0 THEN RETURN 
    0x5aca956fbbe0 ----------   04070  PRINT "SHIELD CONTROL SUPPLIES ENERGY TO COMPLEAT MANUVER."
    0x5aca956fbf20 ----------   04080  S=S+E
    0x5aca956fc110 ----------   04090  E=0
    0x5aca956fc550 ----------   04100  IF S<=0 THEN S=0
    0x5aca956fc5b0 ----------   04110  RETURN 
    0x5aca956fd250 ----------   04120  IF D(3)<0 THEN PRINT "LONG RANG SENSORES ARE INOPERABLE"
    0x5aca956fd300 ----------   04130  GOTO 2430
    0x5aca956fd350 ----------   04140  CLS 
    0x5aca956fd7d0 ----------   04150  PRINT "LONG RANGE SCAN FOR QUADRANT";Q1;",";Q2
    0x5aca956fdab0 ----------   04160  O1$="--------------------"
    0x5aca956fdc30 ----------   04170  PRINT O1$
    0x5aca956fe130 ----------   04180  FOR I=Q1-1 TO Q1+1
    0x5aca956fe3f0 ----------   04190  N(1)=-1
    0x5aca956fe6a0 ----------   04200  N(2)=-1
    0x5aca956fe950 ----------   04210  N(3)=-3
    0x5aca956feea0 ----------   04220  FOR J=Q2-1 TO Q2+1
    0x5aca956ffe10 ----------   04230  IF I>0 AND I<9 AND J>0 AND J<9 THEN N(J-Q2+2)=G(I,J)
    0x5aca95700410 ----------   04240  Z(I,J)=G(I,J)
    0x5aca95700540 ----------   04250  NEXT J
    0x5aca957008b0 ----------   04260  FOR L=1 TO 3
    0x5aca95700a10 ----------   04270  PRINT ": ";
    0x5aca95700e90 ----------   04280  IF N(L)<0 THEN PRINT "*** ";
    0x5aca95700f30 ----------   04290  GOTO 4350
    0x5aca95701620 ----------   04300  PRINT RIGHT$(STR$(N(L)+1000),3);" ";
    0x5aca95701760 ----------   04310  NEXT L
    0x5aca95701890 ----------   04320  PRINT ":"
    0x5aca957019d0 ----------   04330  PRINT O1$
    0x5aca95701b10 ----------   04340  NEXT I
    0x5aca95701bc0 ----------   04350  GOTO 2430
    0x5aca95701c10 ----------   04360  CLS 
    0x5aca95701c60 ----------   04370  PRINT 
    0x5aca957020a0 ----------   04380  IF D(4)<0 THEN PRINT "PHASERS INOPERATIVE."
    0x5aca95702120 ----------   04390  GOTO 2430
    0x5aca957023b0 ----------   04400  IF K3>0 THEN 4440
    0x5aca95702560 ----------   04410  PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSORES SHOW NO ENEMY SHIPS"
    0x5aca957027e0 ----------   04420  PRINT TAB(32)"IN THIS QUADRENT'"
    0x5aca95702890 ----------   04430  GOTO 2430
    0x5aca95702d10 ----------   04440  IF D(8)<0 THEN PRINT "COMPUTER FAILER HAMPERS ACCURACY"
    0x5aca95702ec0 ----------   04450  PRINT "PHASERS LOCKED ON TARGET; ";
    0x5aca95703260 ----------   04460  PRINT "ENERGY AVAILABLE=";E;"UNITS"
    0x5aca957033e0 ----------   04470  INPUT "NUMBER OF UNITS TO DIVERT TO PHASER BANKS";X
    0x5aca95703650 ----------   04480  IF X<=0 THEN 2430
    0x5aca957039e0 ----------   04490  IF E-X<=0 THEN 4460
    0x5aca95703d20 ----------   04500  E=E-X
    0x5aca95704450 ----------   04510  IF D(7)<0 THEN X=X* RND(0)
    0x5aca95704930 ----------   04520  H1= INT(X/K3)
    0x5aca95704be0 ----------   04530  FOR I=1 TO 3
    0x5aca95705000 ----------   04540  IF K(I,3)<=0 THEN 4800
    0x5aca95705d30 ----------   04550  JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5aca95706560 ----------   04560  H= INT((H1/JH)*( RND(0)+2))
    0x5aca95706ab0 ----------   04570  IF H>.15*K(I,3) THEN 4620
    0x5aca95707240 ----------   04580  PRINT "SENSORS SHOW NO DAMAGE TO ENEMY AT ";K(I,1);",";K(I,2)
    0x5aca95707300 ----------   04590  GOTO 4800
    0x5aca95707970 ----------   04600  K(I,3)=K(I,3)-H
    0x5aca95707ac0 ----------   04610  PRINT H;
    0x5aca95708030 ----------   04620  PRINT "UNITS HIT ON KLINGON AT SECTOR";K(I,1);",";
    0x5aca95708310 ----------   04630  PRINT K(I,2)
    0x5aca95708840 ----------   04640  IF K(I,3)<=0 THEN PRINT "*** KLINGON DESTROYED ***"
    0x5aca957088f0 ----------   04650  GOTO 4730
    0x5aca95708dc0 ----------   04660  PRINT " (SENSORS SHOW";K(I,3);"UNITS REMAINING)"
    0x5aca95708e70 ----------   04670  GOTO 4800
    0x5aca95709180 ----------   04680  K3=K3-1
    0x5aca95709490 ----------   04690  K9=K9-1
    0x5aca95709840 ----------   04700  Z1=K(I,1)
    0x5aca95709bf0 ----------   04710  Z2=K(I,2)
    0x5aca95709e00 ----------   04720  A$=" "
    0x5aca95709eb0 ----------   04730  GOSUB 8530
    0x5aca9570a240 ----------   04740  K(I,3)=0
    0x5aca9570a8d0 ----------   04750  G(Q1,Q2)=G(Q1,Q2)-100
    0x5aca9570ae60 ----------   04760  Z(Q1,Q2)=G(Q1,Q2)
    0x5aca9570b0c0 ----------   04770  IF K9<=0 THEN 6580
    0x5aca9570b200 ----------   04780  NEXT I
    0x5aca9570b250 ----------   04790  GOSUB 6110
    0x5aca9570b2c0 ----------   04800  GOTO 2430
    0x5aca9570b330 ---------A   04810  REM 
    0x5aca9570b700 ----------   04820  IF P<0 THEN PRINT "ALL PHOTON TORPEDOES EXPENDED."
    0x5aca9570b7b0 ----------   04830  GOTO 2430
    0x5aca9570bbf0 ----------   04840  IF D(5)<0 THEN PRINT "PHOTON TUBES ARE NOT OPERATIONAL"
    0x5aca9570bca0 ----------   04850  GOTO 2430
    0x5aca9570be00 ----------   04860  INPUT "PHOTON TORPEDO COURSE(1-9)";C1
    0x5aca9570c260 ----------   04870  IF C1=9 THEN C1=1
    0x5aca9570c710 ----------   04880  IF C1>=1 AND C1<9 THEN 4930
    0x5aca9570c890 ----------   04890  PRINT "ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5aca9570c940 ----------   04900  GOTO 2430
    0x5aca9570d710 ----------   04910  X1=C(C1,1)+(C(C1+1,1)-C(C1,1))*(C1- INT(C1))
    0x5aca9570da20 ----------   04920  E=E-2
    0x5aca9570dd80 ----------   04930  P=P-1
    0x5aca9570eb50 ----------   04940  X2=C(C1,2)+(C(C1+1,2)-C(C1,2))*(C1- INT(C1))
    0x5aca9570ed60 ----------   04950  X=S1
    0x5aca9570efb0 ----------   04960  Y=S2
    0x5aca9570f2e0 ----------   04970  X=X+X1
    0x5aca9570f610 ----------   04980  Y=Y+X2
    0x5aca9570fac0 ----------   04990  X3= INT(X+.5)
    0x5aca9570ffb0 ----------   05000  Y3= INT(Y+.5)
    0x5aca95710870 ----------   05010  IF X3<1 OR X3>8 OR Y3<1 OR Y3>8 THEN 5620
    0x5aca95710bb0 ----------   05020  PRINT @832, STRING$(63," ")
    0x5aca95711010 ----------   05030  PRINT @832,"TRACKING TORPEDO:";X3;",";Y3;
    0x5aca95711230 ----------   05040  A$=" "
    0x5aca95711440 ----------   05050  Z1=X
    0x5aca95711650 ----------   05060  Z2=Y
    0x5aca957116d0 ----------   05070  GOSUB 8820
    0x5aca957119e0 ----------   05080  IF Z3<>0 THEN 5000
    0x5aca95711a80 ----------   05090  PRINT 
    0x5aca95711ca0 ----------   05100  A$="+K+"
    0x5aca95711eb0 ----------   05110  Z1=X
    0x5aca957120c0 ----------   05120  Z2=Y
    0x5aca95712110 ----------   05130  GOSUB 8820
    0x5aca957123a0 ----------   05140  IF Z3=0 THEN 5290
    0x5aca957124f0 ----------   05150  PRINT "*** KLINGON DESTROYED ***"
    0x5aca95712810 ----------   05160  K3=K3-1
    0x5aca95712b20 ----------   05170  K9=K9-1
    0x5aca95712da0 ----------   05180  IF K9<=0 THEN 6580
    0x5aca95713060 ----------   05190  FOR I=1 TO 3
    0x5aca95713860 ----------   05200  IF X3=K(I,1) AND Y3=K(I,2) THEN 5240
    0x5aca957139a0 ----------   05210  NEXT I
    0x5aca95713bc0 ----------   05220  I=3
    0x5aca95713f50 ----------   05230  K(I,3)=0
    0x5aca95713fe0 ----------   05240  GOTO 5540
    0x5aca957141f0 ----------   05250  A$=" * "
    0x5aca95714400 ----------   05260  Z1=X
    0x5aca95714610 ----------   05270  Z2=Y
    0x5aca95714660 ----------   05280  GOSUB 8820
    0x5aca957148f0 ----------   05290  IF Z3=0 THEN 5370
    0x5aca95714e40 ----------   05300  PRINT "STAR AT";X3;",";Y3;"ABSORBED TORPEDO ENERGY."
    0x5aca95714ea0 ----------   05310  GOSUB 6110
    0x5aca95714f30 ----------   05320  GOTO 2430
    0x5aca95715140 ----------   05330  A$=">!<"
    0x5aca95715350 ----------   05340  Z1=X
    0x5aca95715560 ----------   05350  Z2=Y
    0x5aca957155b0 ----------   05360  GOSUB 8820
    0x5aca95715830 ----------   05370  IF Z3=0 THEN 4870
    0x5aca95715980 ----------   05380  PRINT "*** STARBASE DESTROYED ***"
    0x5aca95715ca0 ----------   05390  B3=B3-1
    0x5aca95715fe0 ----------   05400  B9=B9-1
    0x5aca95716690 ----------   05410  IF B9>0 OR K9>T-10-T9 THEN 5480
    0x5aca95716900 ----------   05420  NA$="WALDO"
    0x5aca95716ca0 ----------   05430  PRINT "CAPTAIN ";NA$;" YOU ARE HEREBY RELIEVED OF COMMAND"
    0x5aca95716e40 ----------   05440  PRINT "AND SENTENCED TO 99 STARDATES OF HARD LABOR ON CYGNUS 12!!"
    0x5aca957171c0 ----------   05450  FOR II=1 TO 2500
    0x5aca95717240 ----------   05460  NEXT 
    0x5aca957172e0 ----------   05470  GOTO 6440
    0x5aca95717460 ----------   05480  PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x5aca957175a0 ----------   05490  PRINT "COURT MARTIAL!"
    0x5aca957177d0 ----------   05500  D=0
    0x5aca957179e0 ----------   05510  Z1=X
    0x5aca95717bf0 ----------   05520  Z2=Y
    0x5aca95717e00 ----------   05530  A$=" "
    0x5aca95717ea0 ----------   05540  GOSUB 8530
    0x5aca957186b0 ----------   05550  G(Q1,Q2)=K3*100+B3*10+S3
    0x5aca95718c40 ----------   05560  Z(Q1,Q2)=G(Q1,Q2)
    0x5aca95718c90 ----------   05570  GOSUB 6110
    0x5aca95718d30 ----------   05580  GOTO 2430
    0x5aca95718d80 ----------   05590  PRINT 
    0x5aca95718ec0 ----------   05600  PRINT "TORPEDO MISSED."
    0x5aca95718f20 ----------   05610  GOSUB 6110
    0x5aca95718fc0 ----------   05620  GOTO 2430
    0x5aca95719400 ----------   05630  IF D(7)<0 THEN PRINT "SHIELD CONTROL INOPERABLE."
    0x5aca957194c0 ----------   05640  GOTO 2430
    0x5aca95719830 ----------   05650  PRINT "ENERGY ADVAILABLE=";E+S;
    0x5aca957199f0 ----------   05660  INPUT "NUMBER OF UNITS TO SHIELDS";X
    0x5aca95719fc0 ----------   05670  IF X<0 OR S=X THEN PRINT "<SHIELDS REMAIN UNCHANGED>"
    0x5aca9571a050 ----------   05680  GOTO 2430
    0x5aca9571a410 ----------   05690  IF X<=E+S THEN 5750
    0x5aca9571a7b0 ----------   05700  PRINT "CAPTAIN "NA$"! THIS IS NOT THE FEDERATION TREASURY."
    0x5aca9571a8f0 ----------   05710  PRINT "<SHIELDS UNCHANGED>"
    0x5aca9571a9a0 ----------   05720  GOTO 2430
    0x5aca9571adf0 ----------   05730  E=E+S-X
    0x5aca9571b000 ----------   05740  S=X
    0x5aca9571b190 ----------   05750  PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x5aca9571b610 ----------   05760  PRINT " 'SHIELDS NOW AT"; INT(S);"UNITS PER UOUR COMAND.'"
    0x5aca9571b8d0 ----------   05770  FOR II=1 TO 1500
    0x5aca9571b930 ----------   05780  NEXT 
    0x5aca9571b980 ----------   05790  CLS 
    0x5aca9571b9d0 ----------   05800  GOSUB 6650
    0x5aca9571ba50 ----------   05810  GOTO 2430
    0x5aca9571bd90 ----------   05820  IF D(6)>=0 THEN 6040
    0x5aca9571bee0 ----------   05830  PRINT "DAMMAGE CONTROL REPORT NOT AVAILABLE"
    0x5aca9571c160 ----------   05840  IF D=0 THEN 2430
    0x5aca9571c420 ----------   05850  D3=0
    0x5aca9571c790 ----------   05860  FOR TI=1 TO 8
    0x5aca9571cdf0 ----------   05870  IF D(I)<0 THEN D3=D3+.1
    0x5aca9571cf30 ----------   05880  NEXT I
    0x5aca9571d1a0 ----------   05890  IF D3=0 THEN 2430
    0x5aca9571d200 ----------   05900  PRINT 
    0x5aca9571d540 ----------   05910  D3=D3+D4
    0x5aca9571d9b0 ----------   05920  IF D3>=1 THEN D3=.9
    0x5aca9571db70 ----------   05930  PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP"
    0x5aca9571e1f0 ----------   05940  PRINT "ESTIMATED TIME TO REPAIR:";.01* INT(100*D3);"STARDATES"
    0x5aca9571e390 ----------   05950  INPUT "WILL YOU AUTHORIZE THE REPAIR ORDER(Y/N)";A$
    0x5aca9571e630 ----------   05960  IF A$<>Y THEN 2430
    0x5aca9571e8f0 ----------   05970  FOR I=1 TO 8
    0x5aca9571efc0 ----------   05980  IF HD(I)<0 THEN D(I)=0
    0x5aca9571f100 ----------   05990  NEXT I
    0x5aca9571f580 ----------   06000  T=T+D3+.1
    0x5aca9571f5d0 ----------   06010  CLS 
    0x5aca9571f620 ----------   06020  PRINT 
    0x5aca9571f770 ----------   06030  PRINT "DEVICE STATE OF REPAIR"
    0x5aca9571fa80 ----------   06040  FOR R1=1 TO 8
    0x5aca9571fae0 ----------   06050  GOSUB 8620
    0x5aca957205b0 ----------   06060  PRINT G2$; LEFT$(Z$,25-LEN(G2$)); INT(D(R1)*100)*.01
    0x5aca957206f0 ----------   06070  NEXT R1
    0x5aca95720740 ----------   06080  PRINT 
    0x5aca957209a0 ----------   06090  IF D0<>0 THEN 5870
    0x5aca95720a30 ----------   06100  GOTO 2430
    0x5aca95720d00 ----------   06110  IF K3<=0 THEN RETURN 
    0x5aca957210a0 ----------   06120  IF D0<>0 THEN PRINT "STARBASE SHIELDS PROTECT THE ENTERPRISE"
    0x5aca95721100 ----------   06130  RETURN 
    0x5aca957213e0 ----------   06140  FOR I=1 TO 3
    0x5aca95721800 ----------   06150  IF K(I,3)<=0 THEN 6300
    0x5aca95722470 ----------   06160  JH= SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5aca95722d80 ----------   06170  H= INT((K(I,3)/JH)*(2+ RND(0)))
    0x5aca957230b0 ----------   06180  S=S-H
    0x5aca95723970 ----------   06190  K(I,3)=K(I,3)/(3+ RND(0))
    0x5aca95724210 ----------   06200  PRINT H;"UNITS HIT ON ENTERPRISE FROM SECTOR";K(I,1);",";K(I,2)
    0x5aca957244a0 ----------   06210  IF S<=0 THEN 6400
    0x5aca957247e0 ----------   06220  PRINT " <SHIELDS DOWN TO";S;"UNITS>"
    0x5aca95724a60 ----------   06230  IF H<20 THEN 6300
    0x5aca957250e0 ----------   06240  IF RND(0)>.6 OR H/S<=.02 THEN 6300
    0x5aca957253c0 ----------   06250  R1= RND(8)
    0x5aca95725cb0 ----------   06260  D(R1)=D(R1)-H/S-.5* RND(0)
    0x5aca95725d50 ----------   06270  GOSUB 8620
    0x5aca957260b0 ----------   06280  PRINT "DAMAGE CONTROL REPORTS '";G2$;" DAMAGED BY THE HIT'"
    0x5aca957261f0 ----------   06290  NEXT I
    0x5aca95726240 ----------   06300  RETURN 
    0x5aca957264b0 ----------   06310  PRINT "IT IS STARDATE";T
    0x5aca95726770 ----------   06320  FOR I=1 TO 1500
    0x5aca957268b0 ----------   06330  NEXT I
    0x5aca95726980 ---------A   06340  GOTO 6440
    0x5aca95726c30 ----------   06350  FOR I=1 TO 500
    0x5aca95726d70 ----------   06360  NEXT I
    0x5aca95726dc0 ----------   06370  CLS 
    0x5aca95726e10 ----------   06380  PRINT 
    0x5aca95726f60 ----------   06390  PRINT "THE ENTERPRISE HAS BEEN DESTROYED."
    0x5aca95727100 ----------   06400  PRINT "THE FEDERATION";
    0x5aca95727240 ----------   06410  PRINT " WILL BE CONQUERED"
    0x5aca957272f0 ----------   06420  GOTO 6340
    0x5aca95727340 ----------   06430  CLS 
    0x5aca957276b0 ---------A   06440  PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
    0x5aca95727830 ---------A   06450  PRINT "THE END OF YOUR MISSION."
    0x5aca95727890 ----------   06460  PRINT 
    0x5aca957278f0 ----------   06470  PRINT 
    0x5aca95727b80 ---------A   06480  IF B9=0 THEN 6530
    0x5aca95727d30 ---------A   06490  PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x5aca95727ef0 ---------A   06500  PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x5aca95728060 ----------   06510  INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$
    0x5aca957282e0 ---------A   06520  IF A$="AYE" THEN 1020
    0x5aca95728340 ---------A   06530  END 
    0x5aca95728540 ----------   06540  T=100
    0x5aca95728760 ----------   06550  B9=1
    0x5aca95728a10 ----------   06560  FOR II=1 TO 1500
    0x5aca95728a70 ----------   06570  NEXT 
    0x5aca95728b20 ----------   06580  CLS 
    0x5aca95728ed0 ----------   06590  PRINT @192,"CONGRATIONS, MON CAPITAN "NA$"! THE LAST KLINGON BATTLE"
    0x5aca95729170 ----------   06600  PRINT TAB(5)"CRUISER MENACING THE FEDERATION HAS BEEN DESTROYED!"
    0x5aca95729230 ----------   06610  PRINT 
    0x5aca95729a80 ----------   06620  PRINT TAB(10)"YOUR EFFICIENCY RATING IS";1000*(K7/(T-T0))^2
    0x5aca95729b20 ----------   06630  GOTO 6480
    0x5aca9572a010 ----------   06640  FOR I=S1-1 TO S1+1
    0x5aca9572a570 ---------B   06650  FOR J=S2-1 TO S2+1
    0x5aca9572b5d0 ---------B   06660  IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 6750
    0x5aca9572b7f0 ----------   06670  A$=">!<"
    0x5aca9572ba00 ----------   06680  Z1=I
    0x5aca9572bc10 ----------   06690  Z2=J
    0x5aca9572bc60 ----------   06700  GOSUB 8820
    0x5aca9572bec0 ---------B   06710  IF Z3=1 THEN 6790
    0x5aca9572c000 ----------   06720  NEXT J
    0x5aca9572c130 ----------   06730  NEXT I
    0x5aca9572c320 ----------   06740  D0=0
    0x5aca9572c3a0 ---------B   06750  GOTO 6860
    0x5aca9572c590 ----------   06760  D0=1
    0x5aca9572c860 ----------   06770  C$="DOCKED"
    0x5aca9572ca70 ----------   06780  E=E0
    0x5aca9572cd40 ---------B   06790  P=P0
    0x5aca9572ce80 ----------   06800  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x5aca9572d200 ----------   06810  FOR IX=1 TO 1500
    0x5aca9572d340 ----------   06820  NEXT IX
    0x5aca9572d530 ----------   06830  S=0
    0x5aca9572d5c0 ---------B   06840  GOTO 6890
    0x5aca9572da00 ----------   06850  IF K3>0 THEN C$="*RED*"
    0x5aca9572daa0 ---------B   06860  GOTO 6890
    0x5aca9572dcb0 ----------   06870  C$="GREEN"
    0x5aca9572e240 ----------   06880  IF E<E0*.1 THEN C$="YELLOW"
    0x5aca9572e590 ---------B   06890  IF D(2)>=0 THEN 6980
    0x5aca9572ebc0 ----------   06900  IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS 
    0x5aca9572ec70 ---------B   06910  PRINT 
    0x5aca9572edc0 ----------   06920  PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x5aca9572ee20 ----------   06930  PRINT 
    0x5aca9572ee80 ---------B   06940  RETURN 
    0x5aca9572ef20 ----------   06950  CLS 
    0x5aca9572f140 ----------   06960  O1$="---------------------------------"
    0x5aca9572f270 ----------   06970  PRINT O1$
    0x5aca9572f590 ---------B   06980  FOR I=1 TO 8
    0x5aca9572ffd0 ----------   06990  FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3
    0x5aca957304b0 ----------   07000  PRINT " "; MID$(Q$,J,3);
    0x5aca957305f0 ---------B   07010  NEXT J
    0x5aca95730da0 ---------B   07020  ON I GOTO 7040,7060,7080,7100,7120,7140,7160,7170
    0x5aca956fcb10 ----------   07030  PRINT " STARDATE "; INT(T*10)*.1
    0x5aca956fcba0 ---------B   07040  GOTO 7200
    0x5aca956fcdd0 ----------   07050  PRINT " CONDITION ";C$
    0x5aca95731e50 ---------B   07060  GOTO 7200
    0x5aca95732260 ----------   07070  PRINT " QUADRANT ";Q1;",";Q2
    0x5aca95732300 ---------B   07080  GOTO 7200
    0x5aca95732730 ----------   07090  PRINT " SECTOR ";S1;",";S2
    0x5aca957327d0 ---------B   07100  GOTO 7200
    0x5aca95732ae0 ----------   07110  PRINT " PHOTON TORPEDOES "; INT(P)
    0x5aca95732b80 ---------B   07120  GOTO 7200
    0x5aca95732fb0 ----------   07130  PRINT " TOTAL ENERGY "; INT(E+S)
    0x5aca95733050 ---------B   07140  GOTO 7200
    0x5aca95733360 ----------   07150  PRINT " SHIELDS "; INT(S)
    0x5aca95733400 ---------B   07160  GOTO 7200
    0x5aca95733740 ---------B   07170  PRINT " KLINGONS REMAINING "; INT(K9)
    0x5aca95733880 ----------   07180  NEXT I
    0x5aca957339b0 ----------   07190  PRINT O1$
    0x5aca95733a10 ---------B   07200  RETURN 
    0x5aca95733e80 ----------   07210  IF D(8)<0 THEN PRINT "COMPUTER DISABLED"
    0x5aca95733f40 ----------   07220  GOTO 2430
    0x5aca95734160 ----------   07230  INPUT "COMPUTER ACTIVE AND AWAITING A COMAND";A
    0x5aca95734600 ----------   07240  IF A<0 OR A>4 THEN 7280
    0x5aca957348c0 ----------   07250  H8=1
    0x5aca95734f00 ----------   07260  ON A+1 GOTO 7420,7750,7900,8410,8030
    0x5aca95734f60 ----------   07270  CLS 
    0x5aca957350f0 ----------   07280  PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER."
    0x5aca95735270 ----------   07290  PRINT " 0=CUMULITIVE GALACTIVE RECORD"
    0x5aca957353e0 ----------   07300  PRINT " 1=STATUS REPORT"
    0x5aca95735560 ----------   07310  PRINT " 2=PHOTON TORPEDO DATA"
    0x5aca957356e0 ----------   07320  PRINT " 3=STARBASE NAV DATA"
    0x5aca95735850 ----------   07330  PRINT " 4=DIRECTION/DISTANCE CALCULATOR"
    0x5aca957358b0 ----------   07340  PRINT 
    0x5aca95735960 ----------   07350  GOTO 7240
    0x5aca95735b50 ----------   07360  H8=0
    0x5aca95735d40 ----------   07370  G5=1
    0x5aca95735d90 ----------   07380  CLS 
    0x5aca95736000 ----------   07390  PRINT TAB(24)"THE GALAXY"
    0x5aca95736090 ----------   07400  GOTO 7460
    0x5aca957360e0 ----------   07410  PRINT 
    0x5aca95736290 ----------   07420  PRINT " ";
    0x5aca957362f0 ----------   07430  CLS 
    0x5aca95736760 ----------   07440  PRINT "COMPUTER RECORD OF GALAXY FOR QUADRENT";Q1;",";Q2
    0x5aca957367f0 ----------   07450  PRINT 
    0x5aca95736980 ----------   07460  PRINT " 1 2 3 4 5 6 7 8"
    0x5aca95736c10 ----------   07470  O1$=" ----- ----- ------ ------ ------ ------ ----- ------"
    0x5aca95736d40 ----------   07480  PRINT O1$
    0x5aca95737000 ----------   07490  FOR I=1 TO 8
    0x5aca95737140 ----------   07500  PRINT 1;
    0x5aca957373e0 ----------   07510  IF H8=0 THEN 7630
    0x5aca957376a0 ----------   07520  FOR J=1 TO 8
    0x5aca95737800 ----------   07530  PRINT " ";
    0x5aca95737d60 ----------   07540  IF Z(I,J)=0 THEN PRINT "***";
    0x5aca95737e00 ----------   07550  GOTO 7580
    0x5aca957384b0 ----------   07560  PRINT RIGHT$(STR$(Z(I,J)+1000),3);
    0x5aca957385f0 ----------   07570  NEXT J
    0x5aca957386a0 ----------   07580  GOTO 7710
    0x5aca957388b0 ----------   07590  Z4=I
    0x5aca95738aa0 ----------   07600  Z5=1
    0x5aca95738af0 ----------   07610  GOSUB 3490
    0x5aca95739180 ----------   07620  J0= INT(15-.5* LEN(G2$))
    0x5aca95739480 ----------   07630  PRINT TAB(J0);G2$;
    0x5aca95739680 ----------   07640  Z5=5
    0x5aca957396d0 ----------   07650  GOSUB 3490
    0x5aca95739d20 ----------   07660  J0= INT(39-.5* LEN /(G2$))
    0x5aca9573a000 ----------   07670  PRINT TAB(J0);G2$;
    0x5aca9573a060 ----------   07680  PRINT 
    0x5aca9573a1a0 ----------   07690  NEXT I
    0x5aca9573a1f0 ----------   07700  PRINT 
    0x5aca9573a2a0 ----------   07710  GOTO 2430
    0x5aca9573a2f0 ----------   07720  CLS 
    0x5aca9573a420 ----------   07730  PRINT " STSTAS REPORT:"
    0x5aca9573a640 ----------   07740  X$=""
    0x5aca9573aab0 ----------   07750  IF K9>1 THEN X$="S"
    0x5aca9573af50 ----------   07760  PRINT "KLINGON";X$;" LEFT: ";K9
    0x5aca9573b840 ----------   07770  PRINT "MISSION MUST BE COMPLEATED IN";.1* INT((T0+T9-T)*10),"STARDATES"
    0x5aca9573ba60 ----------   07780  X$="S"
    0x5aca9573bea0 ----------   07790  IF B9<2 THEN X$=""
    0x5aca9573c140 ----------   07800  IF B9<1 THEN 7850
    0x5aca9573c6c0 ----------   07810  PRINT "THE FEDERATION IS MAINTAINING";B9;"STARBASE";X$;" IN THE GALAXY"
    0x5aca9573c980 ----------   07820  FOR IX=1 TO 1500
    0x5aca9573cac0 ----------   07830  NEXT IX
    0x5aca9573cb80 ----------   07840  GOTO 5820
    0x5aca9573cf20 ----------   07850  PRINT "CAPTAIN "NA$"! YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN"
    0x5aca9573d0b0 ----------   07860  PRINT "IN THE GALAXY--YOU HAVE NO STARBASES LEFT!"
    0x5aca9573d370 ----------   07870  FOR I=1 TO 2000
    0x5aca9573d3d0 ----------   07880  NEXT 
    0x5aca9573d450 ----------   07890  GOTO 5820
    0x5aca9573d6b0 ----------   07900  IF K3<=0 THEN 4410
    0x5aca9573d8d0 ----------   07910  X$=""
    0x5aca9573dd50 ----------   07920  IF K3>1 THEN X$="S"
    0x5aca9573dfe0 ----------   07930  PRINT "FROM ENTERPRISE TO KLINGON";X$
    0x5aca9573e1e0 ----------   07940  H8=0
    0x5aca9573e490 ----------   07950  FOR I=1 TO 3
    0x5aca9573e8a0 ----------   07960  IF K(I,3)<=0 THEN 8370
    0x5aca9573ec60 ----------   07970  W1=K(I,1)
    0x5aca9573f040 ----------   07980  X=K(I,2)
    0x5aca9573f250 ----------   07990  C1=S1
    0x5aca9573f460 ----------   08000  A=S2
    0x5aca9573f4f0 ----------   08010  GOTO 8110
    0x5aca9573f540 ----------   08020  CLS 
    0x5aca9573f6d0 ----------   08030  PRINT "DIRECTION/DISTANCE CALCULATER:"
    0x5aca9573ff40 ----------   08040  PRINT "YOU ARE AT QUADRENT ";Q1;",";Q2;" SECTOR ";S1;",";S2
    0x5aca95740080 ----------   08050  PRINT "PLEASE ENTER"
    0x5aca957402a0 ----------   08060  C1=Q1
    0x5aca957404f0 ----------   08070  A=Q2
    0x5aca95740760 ----------   08080  INPUT " DESTINATION COORDINATES(X,Y)";W1,X
    0x5aca95740aa0 ----------   08090  X=X-A
    0x5aca95740dd0 ----------   08100  A=C1-W1
    0x5aca95741020 ----------   08110  IF X<0 THEN 8230
    0x5aca95741280 ----------   08120  IF A<0 THEN 8260
    0x5aca957414f0 ----------   08130  IF X>0 THEN 8160
    0x5aca95741920 ----------   08140  IF A=0 THEN C1=5
    0x5aca957419a0 ----------   08150  GOTO 8170
    0x5aca95741bc0 ----------   08160  C1=1
    0x5aca95742030 ----------   08170  IF ABS(A)<= ABS(X) THEN 8210
    0x5aca95742b50 ----------   08180  PRINT "DIRECTION=";C1+((( ABS(A)- ABS(X))+ ABS(A))/ ABS(A));
    0x5aca95742c00 ----------   08190  GOTO 8310
    0x5aca957433d0 ----------   08200  PRINT "DIRECTION=";C1+( ABS(A)/( ABS(X)+.001));
    0x5aca95743460 ----------   08210  GOTO 8310
    0x5aca95743880 ----------   08220  IF A>0 THEN C1=3
    0x5aca95743910 ----------   08230  GOTO 8270
    0x5aca95743d30 ----------   08240  IF X<>0 THEN C1=5
    0x5aca95743db0 ----------   08250  GOTO 8170
    0x5aca95743fd0 ----------   08260  C1=7
    0x5aca95744440 ----------   08270  IF ABS(A)>= ABS(X) THEN 8300
    0x5aca95744f60 ----------   08280  PRINT "DIRECTION=";C1+((( ABS(X)- ABS(A))+ ABS(X))/ ABS(X));
    0x5aca95745000 ----------   08290  GOTO 8310
    0x5aca957456c0 ----------   08300  PRINT "DIRECTION=";C1+( ABS(X)/ ABS(A));
    0x5aca95745860 ----------   08310  PRINT "DISTANCE=";
    0x5aca95746100 ----------   08320  IF W1=B4 THEN PRINT SQR(X^2+A^2)/10
    0x5aca95746190 ----------   08330  GOTO 8350
    0x5aca957466e0 ----------   08340  PRINT SQR(X^2+A^2)
    0x5aca95746940 ----------   08350  IF H8=1 THEN 2430
    0x5aca95746a80 ----------   08360  NEXT I
    0x5aca95746b30 ----------   08370  GOTO 2430
    0x5aca95746eb0 ----------   08380  IF B3<>0 THEN PRINT "FROM ENTERPRISE TO STAREBASE:"
    0x5aca957470d0 ----------   08390  W1=B4
    0x5aca957472e0 ----------   08400  X=B5
    0x5aca95747380 ----------   08410  GOTO 8010
    0x5aca95747520 ----------   08420  PRINT "MR SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS";
    0x5aca95747660 ----------   08430  PRINT " QUADRANT '"
    0x5aca95747720 ----------   08440  GOTO 2430
    0x5aca957479f0 ----------   08450  R1= RND(8)
    0x5aca95747cc0 ----------   08460  R2= RND(8)
    0x5aca95747ed0 ----------   08470  A$=" "
    0x5aca957480e0 ----------   08480  Z1=R1
    0x5aca957482f0 ----------   08490  Z2=R2
    0x5aca95748340 ----------   08500  GOSUB 8820
    0x5aca95748590 ---------C   08510  IF Z3=0 THEN 8510
    0x5aca957485f0 ---------C   08520  RETURN 
    0x5aca95749040 ---------D   08530  S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
    0x5aca95749490 ----------   08540  IF LEN(A$)<>3 THEN PRINT "ERROR"
    0x5aca957494f0 ---------D   08550  STOP 
    0x5aca95749c20 ----------   08560  IF S8=1 THEN Q$=A$+ RIGHT$ (Q$,189)
    0x5aca95749c80 ----------   08570  RETURN 
    0x5aca9574a3b0 ----------   08580  IF S8=190 THEN Q$= LEFT$ (Q$,189)+A$
    0x5aca9574a410 ----------   08590  RETURN 
    0x5aca9574ae20 ----------   08600  Q$= LEFT$ (Q$,S8-1)+A$+ RIGHT$ (Q$,190-S8)
    0x5aca9574ae70 ----------   08610  RETURN 
    0x5aca9574b610 ---------E   08620  ON R1 GOTO 8640,8660,8680,8700,8720,8740,8760,8780
    0x5aca9574b830 ----------   08630  G2$="WARP ENGINES"
    0x5aca9574b880 ---------E   08640  RETURN 
    0x5aca9574bac0 ----------   08650  G2$="SHORT RANGE SCANNERS"
    0x5aca9574bb10 ---------E   08660  RETURN 
    0x5aca9574bd50 ----------   08670  G2$="LONG RANGE SCANNERS"
    0x5aca9574bda0 ---------E   08680  RETURN 
    0x5aca9574bfd0 ----------   08690  G2$="PHASER CONTROL"
    0x5aca9574c020 ---------E   08700  RETURN 
    0x5aca9574c250 ----------   08710  G2$="PHOTON TUBES"
    0x5aca9574c2a0 ---------E   08720  RETURN 
    0x5aca9574c4d0 ----------   08730  G2$="DAMMAGE CONTROL"
    0x5aca9574c520 ---------E   08740  RETURN 
    0x5aca9574c750 ----------   08750  G2$="SHIELD CONTROL"
    0x5aca9574c7a0 ---------E   08760  RETURN 
    0x5aca9574c9d0 ----------   08770  G2$="LIBRARY-COMPUTER"
    0x5aca9574ca20 ---------E   08780  RETURN 
    0x5aca9574ce50 ----------   08790  Z1= INT(Z1+.5)
    0x5aca9574d240 ----------   08800  Z2= INT(Z2+.5)
    0x5aca9574daf0 ----------   08810  S8=(Z2-1)*3+(Z1-1)*24+1
    0x5aca9574dd10 ---------F   08820  Z3=0
    0x5aca9574e240 ---------F   08830  IF MID$(Q$,S8,3)<>A$ THEN RETURN 
    0x5aca9574e440 ----------   08840  Z3=1
    0x5aca9574e490 ---------F   08850  RETURN 
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     05360 - 10000    4650 

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
    0x5aca956bbdd0 ---------A   01000  REM NOTE
    0x5aca956baba0 ---------A   01010  REM trs2 - TRS-80 Level II BASIC tokenized file
    0x5aca95773f00 ---------A   01020  CLS 
    0x5aca95775f70 ---------A   01030  PRINT @210,"S U P E R S T A R T R E K"
    0x5aca95775fd0 ---------A   01040  PRINT 
    0x5aca95776030 ---------A   01050  PRINT 
    0x5aca95773eb0 ---------A   01060  CLEAR 600
    0x5aca95773e60 ---------A   01070  Z$=" "
    0x5aca95773e10 ---------A   01080  DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8)
    0x5aca95773dc0 ---------A   01090  RANDOM 
    0x5aca95773d70 ---------A   01100  T= INT( RND(0)*20+20)*100
    0x5aca95773d20 ---------A   01110  T0=T
    0x5aca95773f50 ---------A   01120  T9=25+ INT( RND(0)*10)
    0x5aca95774180 ---------A   01130  D0=0
    0x5aca95774130 ---------A   01140  E=3000
    0x5aca957740e0 ---------A   01150  E0=E
    0x5aca95774090 ---------A   01160  P=10
    0x5aca95774040 ---------A   01170  PO=P
    0x5aca95773ff0 ---------A   01180  S9=200
    0x5aca95773fa0 ---------A   01190  S=0
    0x5aca957741d0 ---------A   01200  B9=0
    0x5aca95774400 ---------A   01210  K9=0
    0x5aca957743b0 ---------A   01220  X$=""
    0x5aca95774360 ---------A   01230  X0$=" IS "
    0x5aca95774310 ---------A   01240  Q1= RND(8)
    0x5aca957742c0 ---------A   01250  Q2= RND(8)
    0x5aca95774270 ---------A   01260  S1= RND(8)
    0x5aca95774220 ---------A   01270  S2= RND(8)
    0x5aca95776090 ---------A   01280  FOR I=1 TO 9
    0x5aca95774450 ---------A   01290  C(I,1)=0
    0x5aca95774680 ---------A   01300  C(I,2)=0
    0x5aca95774630 ---------A   01310  NEXT I
    0x5aca957745e0 ---------A   01320  C(3,1)=-1
    0x5aca95774590 ---------A   01330  C(2,1)=-1
    0x5aca95774540 ---------A   01340  C(4,1)=-1
    0x5aca957744f0 ---------A   01350  C(4,2)=-1
    0x5aca957744a0 ---------A   01360  C(5,2)=-1
    0x5aca957746d0 ---------A   01370  C(6,2)=-1
    0x5aca95774900 ---------A   01380  C(1,2)=1
    0x5aca957748b0 ---------A   01390  C(2,2)=1
    0x5aca95774860 ---------A   01400  C(6,1)=1
    0x5aca95774810 ---------A   01410  C(7,1)=1
    0x5aca957747c0 ---------A   01420  C(8,1)=1
    0x5aca95774770 ---------A   01430  C(8,2)=1
    0x5aca95774720 ---------A   01440  C(9,2)=1
    0x5aca957760f0 ---------A   01450  FOR I=1 TO 8
    0x5aca95774950 ---------A   01460  D(I)=0
    0x5aca95774b80 ---------A   01470  NEXT I
    0x5aca95774b30 ---------A   01480  A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    0x5aca95776150 ---------A   01490  FOR I=1 TO 8
    0x5aca957761b0 ---------A   01500  FOR J=1 TO 8
    0x5aca95774ae0 ---------A   01510  K3=0
    0x5aca95774a90 ---------A   01520  Z(I,J)=0
    0x5aca95774a40 ---------A   01530  R1= RND(0)
    0x5aca95776210 ---------A   01540  IF R1>.98 THEN K3=3
    0x5aca957749f0 ---------A   01550  K9=K9+3
    0x5aca957749a0 ---------A   01560  GOTO 3110
    0x5aca95774bd0 ----------   01570  B9=B9+1
    0x5aca95774e00 ----------   01580  G(I,J)=K3*100+B3*10+ RND(8)
    0x5aca95774db0 ----------   01590  NEXT J
    0x5aca95774d60 ----------   01600  NEXT I
    0x5aca95776270 ----------   01610  IF K9>T9 THEN T9=K9+1
    0x5aca957762d0 ----------   01620  IF B9<>0 THEN 3250
    0x5aca95776330 ----------   01630  IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100
    0x5aca95774d10 ----------   01640  K9=K9+1
    0x5aca95774cc0 ----------   01650  B9=1
    0x5aca95774c70 ----------   01660  G(Q1,Q2)=G(Q1,Q2)+10
    0x5aca95774c20 ----------   01670  Q1= RND(8)
    0x5aca95774e50 ----------   01680  Q2= RND(8)
    0x5aca95775080 ----------   01690  K7=K9
    0x5aca95776390 ----------   01700  IF B9<>1 THEN X$="S"
    0x5aca95775030 ----------   01710  X0$=" ARE "
    0x5aca957763f0 ----------   01720  PRINT "YOUR ORDERS ARE AS FOLLOWES:"
    0x5aca95776450 ----------   01730  PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
    0x5aca957764b0 ----------   01740  PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x5aca95776510 ----------   01750  PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
    0x5aca95776570 ----------   01760  PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
    0x5aca957765d0 ----------   01770  PRINT 
    0x5aca95776630 ----------   01780  INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
    0x5aca95774fe0 ----------   01790  Z4=Q1
    0x5aca95774f90 ----------   01800  Z5=Q2
    0x5aca95774f40 ----------   01810  K3=0
    0x5aca95774ef0 ----------   01820  B3=0
    0x5aca95774ea0 ----------   01830  S3=0
    0x5aca957750d0 ----------   01840  G5=0
    0x5aca95775300 ----------   01850  D4=.5* RND(0)
    0x5aca957752b0 ----------   01860  Z(Q1,Q2)=G(Q1,Q2)
    0x5aca95776690 ----------   01870  IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 3580
    0x5aca95775260 ---------A   01880  REM 
    0x5aca95775210 ----------   01890  K3= INT(G(Q1,Q2)*.01)
    0x5aca957751c0 ----------   01900  B3= INT(G(Q1,Q2)*.1)-10*K3
    0x5aca95775170 ----------   01910  S3=G(Q1,Q2)-100*K3-10*B3
    0x5aca957766f0 ----------   01920  IF K3=0 THEN 3540
    0x5aca95775120 ----------   01930  CLS 
    0x5aca95776750 ----------   01940  PRINT @396,"COMBAT AREA CONDITION RED"
    0x5aca957767b0 ----------   01950  IF S>200 THEN 3540
    0x5aca95776810 ----------   01960  PRINT @463,"SHIELDS DANGEROUSLY LOW"
    0x5aca95776870 ----------   01970  FOR I=1 TO 3
    0x5aca95775350 ----------   01980  K(I,1)=0
    0x5aca95775580 ----------   01990  K(I,2)=0
    0x5aca95775530 ----------   02000  NEXT I
    0x5aca957768d0 ----------   02010  FOR I=1 TO 3
    0x5aca957754e0 ----------   02020  K(I,3)=0
    0x5aca95775490 ----------   02030  NEXT I
    0x5aca95775440 ----------   02040  Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
    0x5aca957753f0 ----------   02050  A$="<*>"
    0x5aca957753a0 ----------   02060  Z1=S1
    0x5aca957755d0 ----------   02070  Z2=S2
    0x5aca95775800 ----------   02080  GOSUB 5280
    0x5aca95776930 ----------   02090  IF K3<1 THEN 3740
    0x5aca95776990 ----------   02100  FOR I=1 TO K3
    0x5aca957757b0 ----------   02110  GOSUB 5250
    0x5aca95775760 ----------   02120  A$="+K+"
    0x5aca95775710 ----------   02130  Z1=R1
    0x5aca957756c0 ----------   02140  Z2=R2
    0x5aca95775670 ----------   02150  GOSUB 5280
    0x5aca95775620 ----------   02160  K(I,1)=R1
    0x5aca95775850 ----------   02170  K(I,1)=R2
    0x5aca95775a80 ----------   02180  K(I,3)=S9*(.5+ RND(0))
    0x5aca95775a30 ----------   02190  NEXT I
    0x5aca957769f0 ----------   02200  IF B3<1 THEN 3880
    0x5aca957759e0 ----------   02210  GOSUB 5250
    0x5aca95775990 ----------   02220  A$=">!<"
    0x5aca95775940 ----------   02230  Z1=R1
    0x5aca957758f0 ----------   02240  B4=R1
    0x5aca957758a0 ----------   02250  Z2=R2
    0x5aca95775ad0 ----------   02260  B5=R2
    0x5aca95775c60 ----------   02270  GOSUB 5280
    0x5aca95776a50 ----------   02280  FOR I=1 TO S3
    0x5aca95775c10 ----------   02290  GOSUB 5250
    0x5aca95775bc0 ----------   02300  A$=" * "
    0x5aca95775b70 ----------   02310  Z1=R1
    0x5aca95775b20 ----------   02320  Z2=R2
    0x5aca95776ab0 ----------   02330  GOSUB 5280
    0x5aca95776b00 ----------   02340  NEXT I
    0x5aca95776b50 ----------   02350  GOSUB 4830
    0x5aca95776ba0 ----------   02360  IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
    0x5aca95776c00 ----------   02370  CLS 
    0x5aca95776c50 ----------   02380  PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
    0x5aca95776cb0 ----------   02390  PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
    0x5aca95776d10 ----------   02400  PRINT " AND SHIELD CONTROL."
    0x5aca95776d70 ----------   02410  PRINT "IS PRESENTLY INCAPABLE OF CROSS";
    0x5aca95776dd0 ----------   02420  PRINT "-CIRUITING TO ENGINE ROOM!!"
    0x5aca95776e30 ----------   02430  GOTO 4480
    0x5aca9570b330 ---------A   02440  REM 
    0x5aca95776e80 ----------   02450  GOTO 4490
    0x5aca95776ed0 ----------   02460  PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
    0x5aca95776f30 ----------   02470  PRINT "THE END OF YOUR MISSION."
    0x5aca95776f90 ----------   02480  PRINT 
    0x5aca95776ff0 ----------   02490  PRINT 
    0x5aca95777050 ----------   02500  IF B9=0 THEN 4580
    0x5aca957770b0 ----------   02510  PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x5aca95777110 ----------   02520  PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x5aca95777170 ----------   02530  INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$
    0x5aca957771d0 ----------   02540  IF A$="AYE" THEN 2560
    0x5aca95757110 ---------A   02550  END 
    0x5aca956bbf50 ---------A T 02560  CLS 
    0x5aca956b96d0 ---------A   02570  PRINT @210,"S U P E R S T A R T R E K"
    0x5aca956b9670 ---------A   02580  PRINT 
    0x5aca956ba2d0 ---------A   02590  PRINT 
    0x5aca956bc010 ---------A   02600  CLEAR 600
    0x5aca956bc0d0 ---------A   02610  Z$=" "
    0x5aca956c1d40 ---------A   02620  DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8)
    0x5aca956c1df0 ---------A   02630  RANDOM 
    0x5aca956c2520 ---------A   02640  T= INT( RND(0)*20+20)*100
    0x5aca956c27f0 ---------A   02650  T0=T
    0x5aca956c2e60 ---------A   02660  T9=25+ INT( RND(0)*10)
    0x5aca956c3110 ---------A   02670  D0=0
    0x5aca956c33c0 ---------A   02680  E=3000
    0x5aca956c36d0 ---------A   02690  E0=E
    0x5aca956bbe90 ---------A   02700  P=10
    0x5aca956c3c00 ---------A   02710  PO=P
    0x5aca956c3eb0 ---------A   02720  S9=200
    0x5aca956c4160 ---------A   02730  S=0
    0x5aca956c4410 ---------A   02740  B9=0
    0x5aca956c46c0 ---------A   02750  K9=0
    0x5aca956c4990 ---------A   02760  X$=""
    0x5aca956c4ca0 ---------A   02770  X0$=" IS "
    0x5aca956c5030 ---------A   02780  Q1= RND(8)
    0x5aca956c53c0 ---------A   02790  Q2= RND(8)
    0x5aca956c5750 ---------A   02800  S1= RND(8)
    0x5aca956c5b20 ---------A   02810  S2= RND(8)
    0x5aca956c5e90 ---------A   02820  FOR I=1 TO 9
    0x5aca956c6230 ---------A   02830  C(I,1)=0
    0x5aca956c65c0 ---------A   02840  C(I,2)=0
    0x5aca956c66f0 ---------A   02850  NEXT I
    0x5aca956c6ab0 ---------A   02860  C(3,1)=-1
    0x5aca956c6e20 ---------A   02870  C(2,1)=-1
    0x5aca956c7190 ---------A   02880  C(4,1)=-1
    0x5aca956c7500 ---------A   02890  C(4,2)=-1
    0x5aca956c7870 ---------A   02900  C(5,2)=-1
    0x5aca956c7c30 ---------A   02910  C(6,2)=-1
    0x5aca956c7fa0 ---------A   02920  C(1,2)=1
    0x5aca956c8310 ---------A   02930  C(2,2)=1
    0x5aca956c8680 ---------A   02940  C(6,1)=1
    0x5aca956c89f0 ---------A   02950  C(7,1)=1
    0x5aca956c8d60 ---------A   02960  C(8,1)=1
    0x5aca956c90d0 ---------A   02970  C(8,2)=1
    0x5aca956c9440 ---------A   02980  C(9,2)=1
    0x5aca956c96f0 ---------A   02990  FOR I=1 TO 8
    0x5aca956c99d0 ---------A   03000  D(I)=0
    0x5aca956c9b00 ---------A   03010  NEXT I
    0x5aca956c9e00 ---------A   03020  A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    0x5aca956ca0b0 ---------A   03030  FOR I=1 TO 8
    0x5aca956ca430 ---------A   03040  FOR J=1 TO 8
    0x5aca956ca6f0 ---------A   03050  K3=0
    0x5aca956caaa0 ---------A   03060  Z(I,J)=0
    0x5aca956cae70 ---------A   03070  R1= RND(0)
    0x5aca956cb290 ---------A   03080  IF R1>.98 THEN K3=3
    0x5aca956cb5b0 ---------A   03090  K9=K9+3
    0x5aca956cb640 ---------A   03100  GOTO 3110
    0x5aca956cd050 ---------A T 03110  B9=B9+1
    0x5aca956cd920 ---------A   03120  G(I,J)=K3*100+B3*10+ RND(8)
    0x5aca956cda50 ---------A   03130  NEXT J
    0x5aca956cdb80 ---------A   03140  NEXT I
    0x5aca956ce100 ---------A   03150  IF K9>T9 THEN T9=K9+1
    0x5aca956ce380 ---------A   03160  IF B9<>0 THEN 3250
    0x5aca956cee10 ---------A   03170  IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100
    0x5aca956cf170 ---------A   03180  K9=K9+1
    0x5aca956cf360 ---------A   03190  B9=1
    0x5aca956cf9f0 ---------A   03200  G(Q1,Q2)=G(Q1,Q2)+10
    0x5aca956cfcc0 ---------A   03210  Q1= RND(8)
    0x5aca956cffd0 ---------A   03220  Q2= RND(8)
    0x5aca956d02a0 ---------A   03230  K7=K9
    0x5aca956d06e0 ---------A   03240  IF B9<>1 THEN X$="S"
    0x5aca956d0940 ---------A T 03250  X0$=" ARE "
    0x5aca956d0aa0 ---------A   03260  PRINT "YOUR ORDERS ARE AS FOLLOWES:"
    0x5aca956d0e10 ---------A   03270  PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
    0x5aca956d0fd0 ---------A   03280  PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x5aca956d1790 ---------A   03290  PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
    0x5aca956d1d40 ---------A   03300  PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
    0x5aca956d1da0 ---------A   03310  PRINT 
    0x5aca956d2020 ---------A   03320  INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
    0x5aca956d2300 ---------A   03330  Z4=Q1
    0x5aca956d25d0 ---------A   03340  Z5=Q2
    0x5aca956d27c0 ---------A   03350  K3=0
    0x5aca956d29b0 ---------A   03360  B3=0
    0x5aca956d2c60 ---------A   03370  S3=0
    0x5aca956d2f10 ---------A   03380  G5=0
    0x5aca956d33a0 ---------A   03390  D4=.5* RND(0)
    0x5aca956d3970 ---------A T 03400  Z(Q1,Q2)=G(Q1,Q2)
    0x5aca956d4430 ---------A   03410  IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 3580
    0x5aca956d44b0 ---------A   03420  REM 
    0x5aca956d4aa0 ---------A   03430  K3= INT(G(Q1,Q2)*.01)
    0x5aca956d52b0 ---------A   03440  B3= INT(G(Q1,Q2)*.1)-10*K3
    0x5aca956d5ac0 ---------A   03450  S3=G(Q1,Q2)-100*K3-10*B3
    0x5aca956d5d40 ---------A   03460  IF K3=0 THEN 3540
    0x5aca956d5da0 ---------A   03470  CLS 
    0x5aca956d5ee0 ---------A   03480  PRINT @396,"COMBAT AREA CONDITION RED"
    0x5aca956d6160 ---------A   03490  IF S>200 THEN 3540
    0x5aca956d62f0 ---------A   03500  PRINT @463,"SHIELDS DANGEROUSLY LOW"
    0x5aca956d65b0 ---------A   03510  FOR I=1 TO 3
    0x5aca956d6950 ---------A   03520  K(I,1)=0
    0x5aca956d6ce0 ---------A   03530  K(I,2)=0
    0x5aca956d6e10 ---------A T 03540  NEXT I
    0x5aca956d7120 ---------A   03550  FOR I=1 TO 3
    0x5aca956d74c0 ---------A   03560  K(I,3)=0
    0x5aca956d75f0 ---------A   03570  NEXT I
    0x5aca956d8280 ---------A T 03580  Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
    0x5aca956d8550 ---------A   03590  A$="<*>"
    0x5aca956d8820 ---------A   03600  Z1=S1
    0x5aca956d8af0 ---------A   03610  Z2=S2
    0x5aca956d8b40 ---------A   03620  GOSUB 5280
    0x5aca956d8db0 ---------A   03630  IF K3<1 THEN 3740
    0x5aca956d9090 ---------A   03640  FOR I=1 TO K3
    0x5aca956d90f0 ---------A   03650  GOSUB 5250
    0x5aca956d9300 ---------A   03660  A$="+K+"
    0x5aca956d9510 ---------A   03670  Z1=R1
    0x5aca956d9830 ---------A   03680  Z2=R2
    0x5aca956d9880 ---------A   03690  GOSUB 5280
    0x5aca956d9c30 ---------A   03700  K(I,1)=R1
    0x5aca956d9fe0 ---------A   03710  K(I,1)=R2
    0x5aca956da6b0 ---------A   03720  K(I,3)=S9*(.5+ RND(0))
    0x5aca956da7e0 ---------A   03730  NEXT I
    0x5aca956daa80 ---------A T 03740  IF B3<1 THEN 3880
    0x5aca956daae0 ---------A   03750  GOSUB 5250
    0x5aca956dacf0 ---------A   03760  A$=">!<"
    0x5aca956daf00 ---------A   03770  Z1=R1
    0x5aca956db1d0 ---------A   03780  B4=R1
    0x5aca956db3e0 ---------A   03790  Z2=R2
    0x5aca956db6b0 ---------A   03800  B5=R2
    0x5aca956db750 ---------A   03810  GOSUB 5280
    0x5aca956dba20 ---------A   03820  FOR I=1 TO S3
    0x5aca956dba80 ---------A   03830  GOSUB 5250
    0x5aca956dbc90 ---------A   03840  A$=" * "
    0x5aca956dbea0 ---------A   03850  Z1=R1
    0x5aca956dc0b0 ---------A   03860  Z2=R2
    0x5aca956dc100 ---------A   03870  GOSUB 5280
    0x5aca956dc230 ---------A T 03880  NEXT I
    0x5aca956dc2e0 ---------A T 03890  GOSUB 4830
    0x5aca956dcbb0 ---------A   03900  IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
    0x5aca956dcc10 ---------A   03910  CLS 
    0x5aca956dcfa0 ---------A   03920  PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
    0x5aca956dd180 ---------A   03930  PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
    0x5aca956dd2c0 ---------A   03940  PRINT " AND SHIELD CONTROL."
    0x5aca956dd470 ---------A   03950  PRINT "IS PRESENTLY INCAPABLE OF CROSS";
    0x5aca956dd5c0 ---------A   03960  PRINT "-CIRUITING TO ENGINE ROOM!!"
    0x5aca956dd660 ---------A   03970  GOTO 4480
    0x5aca956ef850 ----------   03980  S2=S2+X2
    0x5aca956f0130 ----------   03990  IF S1<1 OR S1>=9 OR S2<1 OR S2>=9 THEN 4180
    0x5aca956f09f0 ----------   04000  S8= INT(S1)*24+ INT(S2)*3-26
    0x5aca956f0f20 ----------   04010  IF MID$ (Q$,S8,2)=" " THEN 4070
    0x5aca956f1340 ----------   04020  S1= INT(S1-X1)
    0x5aca956f1750 ----------   04030  S2= INT(S2-X2)
    0x5aca956f1900 ----------   04040  PRINT "WARP ENGINES SHUT DOWN AT ";
    0x5aca956f1e50 ----------   04050  PRINT "SECTOR";S1;",";S2;"DUE TO BAD NAVIGATION."
    0x5aca956f1ee0 ----------   04060  GOTO 4130
    0x5aca956f2640 ---------- T 04070  S2= INT(S2)
    0x5aca956f2850 ----------   04080  A$="<*>"
    0x5aca956f2b40 ----------   04090  Z1= INT(S1)
    0x5aca956f2e30 ----------   04100  Z2= INT(S2)
    0x5aca956f2e80 ----------   04110  GOSUB 5280
    0x5aca956f2ed0 ----------   04120  GOSUB 4760
    0x5aca956f31b0 ---------- T 04130  T8=1
    0x5aca956f3900 ----------   04140  IF W1<1 THEN T8=.1* INT(10*W1)
    0x5aca956f3c40 ----------   04150  T=T+T8
    0x5aca956f3fd0 ----------   04160  IF T>T0+T9 THEN 4480
    0x5aca956f4090 ----------   04170  GOTO 3890
    0x5aca956f5aa0 ---------- T 04180  S1= INT(X-Q1*8)
    0x5aca956f5fb0 ----------   04190  S2= INT(Y-Q2*8)
    0x5aca956f64f0 ----------   04200  IF S1=0 THEN Q1=Q1-1
    0x5aca956f6720 ----------   04210  S1=8
    0x5aca956f6c60 ----------   04220  IF S2=0 THEN Q2=Q2-1
    0x5aca956f6e90 ----------   04230  S2=8
    0x5aca956f7140 ----------   04240  X5=0
    0x5aca956f7560 ----------   04250  IF Q1<1 THEN X5=1
    0x5aca956f7760 ----------   04260  Q1=1
    0x5aca956f7980 ----------   04270  S1=1
    0x5aca956f7da0 ----------   04280  IF Q1>8 THEN X5=1
    0x5aca956f7fa0 ----------   04290  Q1=8
    0x5aca956f81c0 ----------   04300  S1=8
    0x5aca956f85e0 ----------   04310  IF Q2<1 THEN X5=1
    0x5aca956f87e0 ----------   04320  Q2=1
    0x5aca956f8a00 ----------   04330  S2=1
    0x5aca956f8e20 ----------   04340  IF Q2>8 THEN X5=1
    0x5aca956f9020 ----------   04350  Q2=8
    0x5aca956f9230 ----------   04360  S2=8
    0x5aca956f94b0 ----------   04370  IF X5=0 THEN 4440
    0x5aca956f9660 ----------   04380  PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMAND:"
    0x5aca956f9820 ----------   04390  PRINT " 'PREMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMITER"
    0x5aca956f99d0 ----------   04400  PRINT " IS HEREBY *DENIED*. SHUT DOWN YOUR ENGINES.'"
    0x5aca956f9b80 ----------   04410  PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x5aca956fa4f0 ----------   04420  PRINT "AT SECTOR";S1;",";S2;"OF QUADRENT";Q1;",";Q2;"'"
    0x5aca956fa8a0 ----------   04430  IF T>T0+T9 THEN 4480
    0x5aca956faf70 ---------- T 04440  IF 8*Q1+Q2=8*Q4+Q5 THEN 4130
    0x5aca956fb290 ----------   04450  T=T+1
    0x5aca956fb2e0 ----------   04460  GOSUB 4760
    0x5aca956fb360 ----------   04470  GOTO 3400
    0x5aca95726980 ---------A T 04480  GOTO 4490
    0x5aca957276b0 ---------A T 04490  PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
    0x5aca95727830 ---------A   04500  PRINT "THE END OF YOUR MISSION."
    0x5aca95727890 ---------A   04510  PRINT 
    0x5aca957278f0 ---------A   04520  PRINT 
    0x5aca95727b80 ---------A   04530  IF B9=0 THEN 4580
    0x5aca95727d30 ---------A   04540  PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x5aca95727ef0 ---------A   04550  PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x5aca95728060 ---------A   04560  INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$
    0x5aca957282e0 ---------A   04570  IF A$="AYE" THEN 2560
    0x5aca95728340 ---------A T 04580  END 
    0x5aca95777230 ----------   04590  RETURN
    0x5aca95720d00 ----------   04600  IF K3<=0 THEN RETURN 
    0x5aca957210a0 ----------   04610  IF D0<>0 THEN PRINT "STARBASE SHIELDS PROTECT THE ENTERPRISE"
    0x5aca95777300 ----------   04620  GOTO 04630
    0x5aca95777350 ---------- T 04630  RETURN
    0x5aca957775c0 ----------   04640  RETURN
    0x5aca9574b610 ----------   04650  ON R1 GOTO 4670,4680,4690,4700,4710,4720,4730,4740
    0x5aca9574b830 ----------   04660  G2$="WARP ENGINES"
    0x5aca95777620 ---------- T 04670  GOTO 04750
    0x5aca95777690 ---------- T 04680  GOTO 04750
    0x5aca95777700 ---------- T 04690  GOTO 04750
    0x5aca95777770 ---------- T 04700  GOTO 04750
    0x5aca957777e0 ---------- T 04710  GOTO 04750
    0x5aca95777850 ---------- T 04720  GOTO 04750
    0x5aca957778c0 ---------- T 04730  GOTO 04750
    0x5aca95777930 ---------- T 04740  GOTO 04750
    0x5aca957779a0 ---------- T 04750  RETURN
    0x5aca956fba50 ---------B G 04760  IF E>=0 THEN RETURN 
    0x5aca956fbbe0 ---------B   04770  PRINT "SHIELD CONTROL SUPPLIES ENERGY TO COMPLEAT MANUVER."
    0x5aca956fbf20 ---------B   04780  S=S+E
    0x5aca956fc110 ---------B   04790  E=0
    0x5aca956fc550 ---------B   04800  IF S<=0 THEN S=0
    0x5aca95777270 ---------B   04810  GOTO 04820
    0x5aca957772c0 ---------B T 04820  RETURN
    0x5aca9572a570 ---------C G 04830  FOR J=S2-1 TO S2+1
    0x5aca9572b5d0 ---------C   04840  IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 4930
    0x5aca9572b7f0 ---------C   04850  A$=">!<"
    0x5aca9572ba00 ---------C   04860  Z1=I
    0x5aca9572bc10 ---------C   04870  Z2=J
    0x5aca9572bc60 ---------C   04880  GOSUB 5310
    0x5aca9572bec0 ---------C   04890  IF Z3=1 THEN 4940
    0x5aca9572c000 ---------C   04900  NEXT J
    0x5aca9572c130 ---------C   04910  NEXT I
    0x5aca9572c320 ---------C   04920  D0=0
    0x5aca9572c3a0 ---------C T 04930  GOTO 5000
    0x5aca9572cd40 ---------C T 04940  P=P0
    0x5aca9572ce80 ---------C   04950  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x5aca9572d200 ---------C   04960  FOR IX=1 TO 1500
    0x5aca9572d340 ---------C   04970  NEXT IX
    0x5aca9572d530 ---------C   04980  S=0
    0x5aca9572d5c0 ---------C   04990  GOTO 5010
    0x5aca9572daa0 ---------C T 05000  GOTO 5010
    0x5aca9572e590 ---------C T 05010  IF D(2)>=0 THEN 5070
    0x5aca9572ebc0 ---------C   05020  IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS 
    0x5aca9572ec70 ---------C   05030  PRINT 
    0x5aca9572edc0 ---------C   05040  PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x5aca9572ee20 ---------C   05050  PRINT 
    0x5aca957773b0 ---------C   05060  GOTO 05240
    0x5aca9572f590 ---------C T 05070  FOR I=1 TO 8
    0x5aca9572ffd0 ---------C   05080  FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3
    0x5aca957304b0 ---------C   05090  PRINT " "; MID$(Q$,J,3);
    0x5aca957305f0 ---------C   05100  NEXT J
    0x5aca95730da0 ---------C   05110  ON I GOTO 5130,5140,5150,5160,5170,5180,5190,5200
    0x5aca956fcb10 ---------C   05120  PRINT " STARDATE "; INT(T*10)*.1
    0x5aca956fcba0 ---------C T 05130  GOTO 5230
    0x5aca95731e50 ---------C T 05140  GOTO 5230
    0x5aca95732300 ---------C T 05150  GOTO 5230
    0x5aca957327d0 ---------C T 05160  GOTO 5230
    0x5aca95732b80 ---------C T 05170  GOTO 5230
    0x5aca95733050 ---------C T 05180  GOTO 5230
    0x5aca95733400 ---------C T 05190  GOTO 5230
    0x5aca95733740 ---------C T 05200  PRINT " KLINGONS REMAINING "; INT(K9)
    0x5aca95733880 ---------C   05210  NEXT I
    0x5aca957339b0 ---------C   05220  PRINT O1$
    0x5aca95777420 ---------C T 05230  GOTO 05240
    0x5aca95777490 ---------C T 05240  RETURN
    0x5aca95748590 ---------D B 05250  IF Z3=0 THEN 5250
    0x5aca957774f0 ---------D   05260  GOTO 05270
    0x5aca95777560 ---------D T 05270  RETURN
    0x5aca95749040 ---------E G 05280  S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
    0x5aca95749490 ---------E   05290  IF LEN(A$)<>3 THEN PRINT "ERROR"
    0x5aca957494f0 ---------E   05300  STOP 
    0x5aca9574dd10 ---------F G 05310  Z3=0
    0x5aca9574e240 ---------F   05320  IF MID$(Q$,S8,3)<>A$ THEN RETURN 
    0x5aca9574e440 ---------F   05330  Z3=1
    0x5aca95777a00 ---------F   05340  GOTO 05350
    0x5aca95777a70 ---------F T 05350  RETURN
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
void Routine_04760();
void Routine_04830();
void Routine_05250();
void Routine_05280();
void Routine_05310();

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

void Routine_04760(){
    // 04760 IF E>=0 THEN RETURN 
    if(E_int>=0) {
    }
    // 04770 PRINT "SHIELD CONTROL SUPPLIES ENERGY TO COMPLEAT MANUVER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHIELD CONTROL SUPPLIES ENERGY TO COMPLEAT MANUVER.");strcat(buf,"\n");fputs(buf,fh); };
    // 04780 S=S+E
    S_int = S_int+E_int;
    // 04790 E=0
    E_int = 0;
    // 04800 IF S<=0 THEN S=0
    if(S_int<=0) {
    }
    // 04810 GOTO 04820
    goto Lbl_04820;

  Lbl_04820:
    // 04820 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_04830(){
    // 04830 FOR J=S2-1 TO S2+1
    for(J_int=S2_int-1;J_int<=S2_int+1;J_int++){
        // 04840 IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 4930
        if(INT(I_int+0.5)<1||INT(I_int+0.5)>8||INT(J_int+0.5)<1||INT(J_int+0.5)>8)goto Lbl_04930;
        // 04850 A$=">!<"
        GLBpStr=">!<";
        A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 04860 Z1=I
        Z1_int = I_int;
        // 04870 Z2=J
        Z2_int = J_int;
        // 04880 GOSUB 5310
        Routine_05310();
        // 04890 IF Z3=1 THEN 4940
        if(Z3_int==1)goto Lbl_04940;
        // 04900 NEXT J
        int dummy_4900=0; // Ignore this line.
    }; // End-For(J_int)
    // 04910 NEXT I
    int dummy_4910=0; // Ignore this line.
}; // End-For(I_int)
// 04920 D0=0
D0_int = 0;

  Lbl_04930:
// 04930 GOTO 5000
goto Lbl_05000;

  Lbl_04940:
// 04940 P=P0
P_int = P0_int;
// 04950 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHIELDS DROPPED FOR DOCKING PURPOSES");strcat(buf,"\n");fputs(buf,fh); };
// 04960 FOR IX=1 TO 1500
for(IX_int=1;IX_int<=1500;IX_int++){
    // 04970 NEXT IX
    int dummy_4970=0; // Ignore this line.
}; // End-For(IX_int)
// 04980 S=0
S_int = 0;
// 04990 GOTO 5010
goto Lbl_05010;

  Lbl_05000:
// 05000 GOTO 5010
goto Lbl_05010;

  Lbl_05010:
// 05010 IF D(2)>=0 THEN 5070
if(D_int_arr[2]>=0)goto Lbl_05070;
// 05020 IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS 
if(PEEK(16000)!=32||PEEK(16064)!=32) {
}
// 05030 PRINT 
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 05040 PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*** SHORT RANGE SENSORS ARE OUT ***");strcat(buf,"\n");fputs(buf,fh); };
// 05050 PRINT 
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 05060 GOTO 05240
goto Lbl_05240;

  Lbl_05070:
// 05070 FOR I=1 TO 8
for(I_int=1;I_int<=8;I_int++){
    // 05080 FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3
    for(J_int=(I_int-1)*24+1;J_int<=(I_int-1)*24+22;J_int+=3){
        // 05090 PRINT " "; MID$(Q$,J,3);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcpy(buf,MID$(Q_str,J_int,3));fputs(buf,fh); };
        // 05100 NEXT J
        int dummy_5100=0; // Ignore this line.
    }; // End-For(J_int)
    // 05110 ON I GOTO 5130,5140,5150,5160,5170,5180,5190,5200
    switch((int)(I_int)){
        case 1: goto Lbl_05130;
        case 2: goto Lbl_05140;
        case 3: goto Lbl_05150;
        case 4: goto Lbl_05160;
        case 5: goto Lbl_05170;
        case 6: goto Lbl_05180;
        case 7: goto Lbl_05190;
        case 8: goto Lbl_05200;
        default: break; 
    };
    // 05120 PRINT " STARDATE "; INT(T*10)*.1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," STARDATE "); b2c_FLT(buf,INT(T_int*10)*0.1);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_05130:
    // 05130 GOTO 5230
    goto Lbl_05230;

  Lbl_05140:
    // 05140 GOTO 5230
    goto Lbl_05230;

  Lbl_05150:
    // 05150 GOTO 5230
    goto Lbl_05230;

  Lbl_05160:
    // 05160 GOTO 5230
    goto Lbl_05230;

  Lbl_05170:
    // 05170 GOTO 5230
    goto Lbl_05230;

  Lbl_05180:
    // 05180 GOTO 5230
    goto Lbl_05230;

  Lbl_05190:
    // 05190 GOTO 5230
    goto Lbl_05230;

  Lbl_05200:
    // 05200 PRINT " KLINGONS REMAINING "; INT(K9)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," KLINGONS REMAINING ");b2c_INT(buf,INT(K9_int));strcat(buf,"\n");fputs(buf,fh); };
    // 05210 NEXT I
    int dummy_5210=0; // Ignore this line.
}; // End-For(I_int)
// 05220 PRINT O1$
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O1_str);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_05230:
// 05230 GOTO 05240
goto Lbl_05240;

  Lbl_05240:
// 05240 RETURN
return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_05250(){

  Lbl_05250:
// 05250 IF Z3=0 THEN 5250
if(Z3_int==0)goto Lbl_05250;
// 05260 GOTO 05270
goto Lbl_05270;

  Lbl_05270:
// 05270 RETURN
return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

void Routine_05280(){
// 05280 S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
S8_int = INT(Z2_int-0.5)*3+INT(Z1_int-0.5)*24+1;
// 05290 IF LEN(A$)<>3 THEN PRINT "ERROR"
if(LEN(A_str)!=3) {
}
// 05300 STOP 
exit(1);


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------

void Routine_05310(){
// 05310 Z3=0
Z3_int = 0;
// 05320 IF MID$(Q$,S8,3)<>A$ THEN RETURN 
if(MID$(Q_str,S8_int,3)==A_str) {
}
// 05330 Z3=1
Z3_int = 1;
// 05340 GOTO 05350
goto Lbl_05350;

  Lbl_05350:
// 05350 RETURN
return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM NOTE
    // 01010 REM trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS 
    ClearScreen(0);
    // 01030 PRINT @210,"S U P E R S T A R T R E K"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"S U P E R S T A R T R E K");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 CLEAR 600
    ClearMemory(600,4294967295);
    // 01070 Z$=" "
    GLBpStr=" ";
    Z_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01080 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8)
    // 01090 RANDOM 
    RANDOMIZE();
    // 01100 T= INT( RND(0)*20+20)*100
    T_int = INT(RND(0)*20+20)*100;
    // 01110 T0=T
    T0_int = T_int;
    // 01120 T9=25+ INT( RND(0)*10)
    T9_int = 25+INT(RND(0)*10);
    // 01130 D0=0
    D0_int = 0;
    // 01140 E=3000
    E_int = 3000;
    // 01150 E0=E
    E0_int = E_int;
    // 01160 P=10
    P_int = 10;
    // 01170 PO=P
    PO_int = P_int;
    // 01180 S9=200
    S9_int = 200;
    // 01190 S=0
    S_int = 0;
    // 01200 B9=0
    B9_int = 0;
    // 01210 K9=0
    K9_int = 0;
    // 01220 X$=""
    GLBpStr="";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01230 X0$=" IS "
    GLBpStr=" IS ";
    X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01240 Q1= RND(8)
    Q1_int = RND(8);
    // 01250 Q2= RND(8)
    Q2_int = RND(8);
    // 01260 S1= RND(8)
    S1_int = RND(8);
    // 01270 S2= RND(8)
    S2_int = RND(8);
    // 01280 FOR I=1 TO 9
    for(I_int=1;I_int<=9;I_int++){
        // 01290 C(I,1)=0
        C_int_arr[I_int][1] = 0;
        // 01300 C(I,2)=0
        C_int_arr[I_int][2] = 0;
        // 01310 NEXT I
        int dummy_1310=0; // Ignore this line.
    }; // End-For(I_int)
    // 01320 C(3,1)=-1
    C_int_arr[3][1] = -1;
    // 01330 C(2,1)=-1
    C_int_arr[2][1] = -1;
    // 01340 C(4,1)=-1
    C_int_arr[4][1] = -1;
    // 01350 C(4,2)=-1
    C_int_arr[4][2] = -1;
    // 01360 C(5,2)=-1
    C_int_arr[5][2] = -1;
    // 01370 C(6,2)=-1
    C_int_arr[6][2] = -1;
    // 01380 C(1,2)=1
    C_int_arr[1][2] = 1;
    // 01390 C(2,2)=1
    C_int_arr[2][2] = 1;
    // 01400 C(6,1)=1
    C_int_arr[6][1] = 1;
    // 01410 C(7,1)=1
    C_int_arr[7][1] = 1;
    // 01420 C(8,1)=1
    C_int_arr[8][1] = 1;
    // 01430 C(8,2)=1
    C_int_arr[8][2] = 1;
    // 01440 C(9,2)=1
    C_int_arr[9][2] = 1;
    // 01450 FOR I=1 TO 8
    for(I_int=1;I_int<=8;I_int++){
        // 01460 D(I)=0
        D_int_arr[I_int] = 0;
        // 01470 NEXT I
        int dummy_1470=0; // Ignore this line.
    }; // End-For(I_int)
    // 01480 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
    GLBpStr="NAVSRSLRSPHATORSHEDAMCOMXXX";
    A1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01490 FOR I=1 TO 8
    for(I_int=1;I_int<=8;I_int++){
        // 01500 FOR J=1 TO 8
        for(J_int=1;J_int<=8;J_int++){
            // 01510 K3=0
            K3_int = 0;
            // 01520 Z(I,J)=0
            Z_int_arr[I_int][J_int] = 0;
            // 01530 R1= RND(0)
            R1_int = RND(0);
            // 01540 IF R1>.98 THEN K3=3
            if(R1_int>0.98) {
            }
            // 01550 K9=K9+3
            K9_int = K9_int+3;
            // 01560 GOTO 3110
            goto Lbl_03110;
            // 01880 REM 
            // 02440 REM 
            // 02550 END 

  Lbl_02560:
            // 02560 CLS 
            ClearScreen(0);
            // 02570 PRINT @210,"S U P E R S T A R T R E K"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"S U P E R S T A R T R E K");strcat(buf,"\n");fputs(buf,fh); };
            // 02580 PRINT 
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 02590 PRINT 
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 02600 CLEAR 600
            ClearMemory(600,4294967295);
            // 02610 Z$=" "
            GLBpStr=" ";
            Z_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 02620 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8)
            // 02630 RANDOM 
            RANDOMIZE();
            // 02640 T= INT( RND(0)*20+20)*100
            T_int = INT(RND(0)*20+20)*100;
            // 02650 T0=T
            T0_int = T_int;
            // 02660 T9=25+ INT( RND(0)*10)
            T9_int = 25+INT(RND(0)*10);
            // 02670 D0=0
            D0_int = 0;
            // 02680 E=3000
            E_int = 3000;
            // 02690 E0=E
            E0_int = E_int;
            // 02700 P=10
            P_int = 10;
            // 02710 PO=P
            PO_int = P_int;
            // 02720 S9=200
            S9_int = 200;
            // 02730 S=0
            S_int = 0;
            // 02740 B9=0
            B9_int = 0;
            // 02750 K9=0
            K9_int = 0;
            // 02760 X$=""
            GLBpStr="";
            X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 02770 X0$=" IS "
            GLBpStr=" IS ";
            X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 02780 Q1= RND(8)
            Q1_int = RND(8);
            // 02790 Q2= RND(8)
            Q2_int = RND(8);
            // 02800 S1= RND(8)
            S1_int = RND(8);
            // 02810 S2= RND(8)
            S2_int = RND(8);
            // 02820 FOR I=1 TO 9
            for(I_int=1;I_int<=9;I_int++){
                // 02830 C(I,1)=0
                C_int_arr[I_int][1] = 0;
                // 02840 C(I,2)=0
                C_int_arr[I_int][2] = 0;
                // 02850 NEXT I
                int dummy_2850=0; // Ignore this line.
            }; // End-For(I_int)
            // 02860 C(3,1)=-1
            C_int_arr[3][1] = -1;
            // 02870 C(2,1)=-1
            C_int_arr[2][1] = -1;
            // 02880 C(4,1)=-1
            C_int_arr[4][1] = -1;
            // 02890 C(4,2)=-1
            C_int_arr[4][2] = -1;
            // 02900 C(5,2)=-1
            C_int_arr[5][2] = -1;
            // 02910 C(6,2)=-1
            C_int_arr[6][2] = -1;
            // 02920 C(1,2)=1
            C_int_arr[1][2] = 1;
            // 02930 C(2,2)=1
            C_int_arr[2][2] = 1;
            // 02940 C(6,1)=1
            C_int_arr[6][1] = 1;
            // 02950 C(7,1)=1
            C_int_arr[7][1] = 1;
            // 02960 C(8,1)=1
            C_int_arr[8][1] = 1;
            // 02970 C(8,2)=1
            C_int_arr[8][2] = 1;
            // 02980 C(9,2)=1
            C_int_arr[9][2] = 1;
            // 02990 FOR I=1 TO 8
            for(I_int=1;I_int<=8;I_int++){
                // 03000 D(I)=0
                D_int_arr[I_int] = 0;
                // 03010 NEXT I
                int dummy_3010=0; // Ignore this line.
            }; // End-For(I_int)
            // 03020 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
            GLBpStr="NAVSRSLRSPHATORSHEDAMCOMXXX";
            A1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 03030 FOR I=1 TO 8
            for(I_int=1;I_int<=8;I_int++){
                // 03040 FOR J=1 TO 8
                for(J_int=1;J_int<=8;J_int++){
                    // 03050 K3=0
                    K3_int = 0;
                    // 03060 Z(I,J)=0
                    Z_int_arr[I_int][J_int] = 0;
                    // 03070 R1= RND(0)
                    R1_int = RND(0);
                    // 03080 IF R1>.98 THEN K3=3
                    if(R1_int>0.98) {
                    }
                    // 03090 K9=K9+3
                    K9_int = K9_int+3;
                    // 03100 GOTO 3110
                    goto Lbl_03110;

  Lbl_03110:
                    // 03110 B9=B9+1
                    B9_int = B9_int+1;
                    // 03120 G(I,J)=K3*100+B3*10+ RND(8)
                    G_int_arr[I_int][J_int] = K3_int*100+B3_int*10+RND(8);
                    // 03130 NEXT J
                    int dummy_3130=0; // Ignore this line.
                }; // End-For(J_int)
                // 03140 NEXT I
                int dummy_3140=0; // Ignore this line.
            }; // End-For(I_int)
            // 03150 IF K9>T9 THEN T9=K9+1
            if(K9_int>T9_int) {
            }
            // 03160 IF B9<>0 THEN 3250
            if(B9_int!=0)goto Lbl_03250;
            // 03170 IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100
            if(G_int_arr[Q1_int][Q2_int]<200) {
            }
            // 03180 K9=K9+1
            K9_int = K9_int+1;
            // 03190 B9=1
            B9_int = 1;
            // 03200 G(Q1,Q2)=G(Q1,Q2)+10
            G_int_arr[Q1_int][Q2_int] = G_int_arr[Q1_int][Q2_int]+10;
            // 03210 Q1= RND(8)
            Q1_int = RND(8);
            // 03220 Q2= RND(8)
            Q2_int = RND(8);
            // 03230 K7=K9
            K7_int = K9_int;
            // 03240 IF B9<>1 THEN X$="S"
            if(B9_int!=1) {
            }

  Lbl_03250:
            // 03250 X0$=" ARE "
            GLBpStr=" ARE ";
            X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 03260 PRINT "YOUR ORDERS ARE AS FOLLOWES:"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR ORDERS ARE AS FOLLOWES:");strcat(buf,"\n");fputs(buf,fh); };
            // 03270 PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," DESTROY THE"); b2c_INT(buf,K9_int);strcat(buf,"KLINGON WARSHIPS WHICH HAVE INVADED");strcat(buf,"\n");fputs(buf,fh); };
            // 03280 PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS");strcat(buf,"\n");fputs(buf,fh); };
            // 03290 PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ON STARDATE"); b2c_INT(buf,T0_int+T9_int);strcat(buf," THIS GIVES YOU"); b2c_INT(buf,T9_int);strcat(buf,"DAYS. THERE"); strcat(buf,X0_str);strcat(buf,"\n");fputs(buf,fh); };
            // 03300 PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," "); b2c_INT(buf,B9_int);strcat(buf,"STARBASE"); strcat(buf,X_str);strcat(buf," IN THE GALAXY FOR RESUPLYING YOUR SHIP.");strcat(buf,"\n");fputs(buf,fh); };
            // 03310 PRINT 
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 03320 INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
            // Start of Basic INPUT statement 03320
            {
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
            }; // End of Basic INPUT statement 03320
            // 03330 Z4=Q1
            Z4_int = Q1_int;
            // 03340 Z5=Q2
            Z5_int = Q2_int;
            // 03350 K3=0
            K3_int = 0;
            // 03360 B3=0
            B3_int = 0;
            // 03370 S3=0
            S3_int = 0;
            // 03380 G5=0
            G5_int = 0;
            // 03390 D4=.5* RND(0)
            D4_int = 0.5*RND(0);

  Lbl_03400:
            // 03400 Z(Q1,Q2)=G(Q1,Q2)
            Z_int_arr[Q1_int][Q2_int] = G_int_arr[Q1_int][Q2_int];
            // 03410 IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 3580
            if(Q1_int<1||Q1_int>8||Q2_int<1||Q2_int>8)goto Lbl_03580;
            // 03420 REM 
            // 03430 K3= INT(G(Q1,Q2)*.01)
            K3_int = INT(G_int_arr[Q1_int][Q2_int]*0.01);
            // 03440 B3= INT(G(Q1,Q2)*.1)-10*K3
            B3_int = INT(G_int_arr[Q1_int][Q2_int]*0.1)-10*K3_int;
            // 03450 S3=G(Q1,Q2)-100*K3-10*B3
            S3_int = G_int_arr[Q1_int][Q2_int]-100*K3_int-10*B3_int;
            // 03460 IF K3=0 THEN 3540
            if(K3_int==0)goto Lbl_03540;
            // 03470 CLS 
            ClearScreen(0);
            // 03480 PRINT @396,"COMBAT AREA CONDITION RED"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMBAT AREA CONDITION RED");strcat(buf,"\n");fputs(buf,fh); };
            // 03490 IF S>200 THEN 3540
            if(S_int>200)goto Lbl_03540;
            // 03500 PRINT @463,"SHIELDS DANGEROUSLY LOW"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHIELDS DANGEROUSLY LOW");strcat(buf,"\n");fputs(buf,fh); };
            // 03510 FOR I=1 TO 3
            for(I_int=1;I_int<=3;I_int++){
                // 03520 K(I,1)=0
                K_int_arr[I_int][1] = 0;
                // 03530 K(I,2)=0
                K_int_arr[I_int][2] = 0;

  Lbl_03540:
                // 03540 NEXT I
                int dummy_3540=0; // Ignore this line.
            }; // End-For(I_int)
            // 03550 FOR I=1 TO 3
            for(I_int=1;I_int<=3;I_int++){
                // 03560 K(I,3)=0
                K_int_arr[I_int][3] = 0;
                // 03570 NEXT I
                int dummy_3570=0; // Ignore this line.
            }; // End-For(I_int)

  Lbl_03580:
            // 03580 Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
            GLBpStr=StringCat(StringCat(StringCat(StringCat(StringCat(StringCat(StringCat(Z_str,Z_str),Z_str),Z_str),Z_str),Z_str),Z_str),LEFT$(Z_str,17));
            Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 03590 A$="<*>"
            GLBpStr="<*>";
            A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 03600 Z1=S1
            Z1_int = S1_int;
            // 03610 Z2=S2
            Z2_int = S2_int;
            // 03620 GOSUB 5280
            Routine_05280();
            // 03630 IF K3<1 THEN 3740
            if(K3_int<1)goto Lbl_03740;
            // 03640 FOR I=1 TO K3
            for(I_int=1;I_int<=K3_int;I_int++){
                // 03650 GOSUB 5250
                Routine_05250();
                // 03660 A$="+K+"
                GLBpStr="+K+";
                A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
                // 03670 Z1=R1
                Z1_int = R1_int;
                // 03680 Z2=R2
                Z2_int = R2_int;
                // 03690 GOSUB 5280
                Routine_05280();
                // 03700 K(I,1)=R1
                K_int_arr[I_int][1] = R1_int;
                // 03710 K(I,1)=R2
                K_int_arr[I_int][1] = R2_int;
                // 03720 K(I,3)=S9*(.5+ RND(0))
                K_int_arr[I_int][3] = S9_int*(0.5+RND(0));
                // 03730 NEXT I
                int dummy_3730=0; // Ignore this line.
            }; // End-For(I_int)

  Lbl_03740:
            // 03740 IF B3<1 THEN 3880
            if(B3_int<1)goto Lbl_03880;
            // 03750 GOSUB 5250
            Routine_05250();
            // 03760 A$=">!<"
            GLBpStr=">!<";
            A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 03770 Z1=R1
            Z1_int = R1_int;
            // 03780 B4=R1
            B4_int = R1_int;
            // 03790 Z2=R2
            Z2_int = R2_int;
            // 03800 B5=R2
            B5_int = R2_int;
            // 03810 GOSUB 5280
            Routine_05280();
            // 03820 FOR I=1 TO S3
            for(I_int=1;I_int<=S3_int;I_int++){
                // 03830 GOSUB 5250
                Routine_05250();
                // 03840 A$=" * "
                GLBpStr=" * ";
                A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
                // 03850 Z1=R1
                Z1_int = R1_int;
                // 03860 Z2=R2
                Z2_int = R2_int;
                // 03870 GOSUB 5280
                Routine_05280();

  Lbl_03880:
                // 03880 NEXT I
                int dummy_3880=0; // Ignore this line.
            }; // End-For(I_int)

  Lbl_03890:
            // 03890 GOSUB 4830
            Routine_04830();
            // 03900 IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
            if(S_int+E_int>10) {
            }
            // 03910 CLS 
            ClearScreen(0);
            // 03920 PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CAPTAIN "); strcat(buf,NA_str);strcat(buf,"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!");strcat(buf,"\n");fputs(buf,fh); };
            // 03930 PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE INSUFFICIENT MANUVERING ENERGY,");fputs(buf,fh); };
            // 03940 PRINT " AND SHIELD CONTROL."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," AND SHIELD CONTROL.");strcat(buf,"\n");fputs(buf,fh); };
            // 03950 PRINT "IS PRESENTLY INCAPABLE OF CROSS";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IS PRESENTLY INCAPABLE OF CROSS");fputs(buf,fh); };
            // 03960 PRINT "-CIRUITING TO ENGINE ROOM!!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"-CIRUITING TO ENGINE ROOM!!");strcat(buf,"\n");fputs(buf,fh); };
            // 03970 GOTO 4480
            goto Lbl_04480;

  Lbl_04480:
            // 04480 GOTO 4490
            goto Lbl_04490;

  Lbl_04490:
            // 04490 PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THERE WERE"); b2c_INT(buf,K9_int);strcat(buf,"KLINGON BATTLE CRUISERS LEFT AT");strcat(buf,"\n");fputs(buf,fh); };
            // 04500 PRINT "THE END OF YOUR MISSION."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE END OF YOUR MISSION.");strcat(buf,"\n");fputs(buf,fh); };
            // 04510 PRINT 
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04520 PRINT 
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04530 IF B9=0 THEN 4580
            if(B9_int==0)goto Lbl_04580;
            // 04540 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER");strcat(buf,"\n");fputs(buf,fh); };
            // 04550 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,");strcat(buf,"\n");fputs(buf,fh); };
            // 04560 INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$
            // Start of Basic INPUT statement 04560
            {
                int numargs=1;
                char *args[numargs+1];
                bool echoeol=true;
                while(true){
                    fprintf(stdout,"LET HIM STEP FORWARD AND ENTER 'AYE'");
                    int err=input(args,numargs,echoeol);
                    if(err==0x03) break;
                    if(err || 
                        (err += b2c_strtos(&A_str,args,0)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 04560
            // 04570 IF A$="AYE" THEN 2560
            if(strcmp(A_str,"AYE")==0)goto Lbl_02560;

  Lbl_04580:
            // 04580 END 
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
