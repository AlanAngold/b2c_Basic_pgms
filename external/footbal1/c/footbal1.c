/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/footbal1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x570f43660ac0 ---------A   00010 PRINT TAB(33);"FTBALL"
    0x570f43661e70 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x570f43661ff0 ---------A   00030 PRINT:PRINT
    0x570f436619e0 ---------A   00220 PRINT "THIS IS DARTMOUTH CHAMPIONSHIP FOOTBALL.":PRINT
    0x570f4365ffd0 ---------A   00230 PRINT "YOU WILL QUARTERBACK DARTMOUTH. CALL PLAYS AS FOLLOWS:"
    0x570f43660410 ---------A   00240 PRINT "1= SIMPLE RUN; 2= TRICKY RUN; 3= SHORT PASS;"
    0x570f4365fb20 ---------A   00250 PRINT "4= LONG PASS; 5= PUNT; 6= QUICK KICK; 7= PLACE KICK."
    0x570f4365fb70 ---------A   00260 PRINT
    0x570f436620a0 ---------A   00270 PRINT "CHOOSE YOUR OPPONENT";
    0x570f4365f610 ---------A   00280 INPUT O$(1)
    0x570f4365fd80 ---------A   00290 O$(0)="DARTMOUTH"
    0x570f43667920 ---------A   00300 PRINT
    0x570f43667ee0 ---------A   00310 LET S(0)=0: LET S(1)=0
    0x570f43667f30 ---------A   00320 REM
    0x570f43668190 ---------A   00330 DIM L$(20)
    0x570f436687d0 ---------A   00340 FOR I=1 TO 20: READ L$(I): NEXT I
    0x570f43668d10 ---------A   00350 DATA "KICK","RECEIVE"," YARD ","RUN BACK FOR ","BALL ON "
    0x570f43669130 ---------A   00360 DATA "YARD LINE"," SIMPLE RUN"," TRICKY RUN"," SHORT PASS"
    0x570f43669630 ---------A   00370 DATA " LONG PASS","PUNT"," QUICK KICK "," PLACE KICK"," LOSS "
    0x570f43669b00 ---------A   00380 DATA " NO GAIN","GAIN "," TOUCHDOWN "," TOUCHBACK ","SAFETY***"
    0x570f43669c50 ---------A   00385 DATA "JUNK"
    0x570f4366a1c0 ---------A   00390 LET P=INT(RND(1)*2)
    0x570f4366a4f0 ---------A   00400 PRINT O$(P);" WON THE TOSS"
    0x570f4366ab60 ---------A   00410 DEF FNF(X)=1-2*P
    0x570f4366b810 ---------A   00420 DEF FNG(Z)=P*(X1-X)+(1-P)*(X-X1)
    0x570f4366ba40 ---------A   00430 IF P=0 THEN 470
    0x570f4366bd60 ---------A   00440 PRINT O$(1);" ELECTS TO RECEIVE."
    0x570f4366bdd0 ---------A   00450 PRINT
    0x570f4366be60 ---------A   00460 GOTO 580
    0x570f4366bfa0 ---------A T 00470 PRINT "DO YOU ELECT TO KICK OR RECEIVE";
    0x570f4366c1b0 ---------A T 00480 INPUT A$
    0x570f4366c230 ---------A   00490 PRINT
    0x570f4366c5a0 ---------A   00500 FOR E=1 TO 2
    0x570f4366cb10 ---------A   00510 IF A$=L$(E) THEN 550
    0x570f4366cc50 ---------A   00520 NEXT E
    0x570f4366ce20 ---------A   00530 PRINT "INCORRECT ANSWER.  PLEASE TYPE 'KICK' OR 'RECIEVE'";
    0x570f4366ce90 ---------A   00540 GOTO 480
    0x570f4366d0d0 ---------A T 00550 IF E=2 THEN 580
    0x570f4366d2f0 ---------A   00560 LET P=1
    0x570f4366d870 ---------A T 00580 LET X=40+(1-P)*20
    0x570f4366e150 ---------A T 00590 LET Y=INT(200*(RND(1)-.5)^3+55)
    0x570f4366e560 ---------A   00600 PRINT Y;L$(3);" KICKOFF"
    0x570f4366eaa0 ---------A   00610 LET X=X-FNF(1)*Y
    0x570f4366eef0 ---------A   00620 IF ABS(X-50)>=50 THEN 700
    0x570f4366fbf0 ---------A T 00630 LET Y=INT(50*RND(1)^2)+(1-P)*INT(50*RND(1)^4)
    0x570f43670130 ---------A   00640 LET X=X+FNF(1)*Y
    0x570f43670570 ---------A   00650 IF ABS(X-50)>=50 THEN 655
    0x570f43670990 ---------A   00651 PRINT Y;L$(3);" RUNBACK"
    0x570f43670a00 ---------A   00652 GOTO 720
    0x570f43670c20 ---------A T 00655 PRINT L$(4);
    0x570f43670ca0 ---------A   00660 GOTO 2600
    0x570f436710c0 ---------A T 00700 PRINT "TOUCHBACK FOR ";O$(P);"."
    0x570f436714f0 ---------A   00710 LET X=20+P*60
    0x570f43671560 ---------A T 00720 REM FIRST DOWN
    0x570f436715e0 ---------A   00730 GOSUB 800
    0x570f43671800 ---------A T 00740 LET X1=X
    0x570f43671af0 ---------A   00750 LET D=1
    0x570f43671f70 ---------A   00760 PRINT:PRINT "FIRST DOWN ";O$(P);"***"
    0x570f43671fe0 ---------A   00770 PRINT
    0x570f43672050 ---------A   00780 PRINT
    0x570f436720c0 ---------A   00790 GOTO 860
    0x570f43672120 ---------B G 00800 REM PRINT POSITION
    0x570f43672390 ---------B   00810 IF X>50 THEN 840
    0x570f43672a30 ---------B   00820 PRINT L$(5);O$(0);X;L$(6)
    0x570f43672ab0 ---------B   00830 GOTO 850
    0x570f43673640 ---------B T 00840 PRINT L$(5);O$(1);100-X;L$(6)
    0x570f43673690 ---------B T 00850 RETURN
    0x570f43673710 ---------A T 00860 REM NEW PLAY
    0x570f43673b10 ---------A   00870 LET T=T+1
    0x570f43673d60 ---------A   00880 IF T=30 THEN 1060
    0x570f43673fd0 ---------A   00890 IF T<50 THEN 940
    0x570f43674300 ---------A   00900 IF RND(1)>.2 THEN 940
    0x570f43674490 ---------A   00910 PRINT "END OF GAME  ***"
    0x570f43674fe0 ---------A   00920 PRINT "FINAL SCORE:  ";O$(0);": ";S(0);"  ";O$(1);": ";S(1)
    0x570f43675030 ---------A   00930 STOP
    0x570f43675290 ---------A T 00940 IF P=1 THEN 1870
    0x570f43675410 ---------A   00950 PRINT "NEXT PLAY";
    0x570f43675570 ---------A T 00960 INPUT Z
    0x570f436758e0 ---------A   00970 IF Z<>INT(Z) THEN 990
    0x570f43675d40 ---------A   00980 IF ABS(Z-4)<=3 THEN 1010
    0x570f43675ed0 ---------A T 00990 PRINT "ILLEGAL PLAY NUMBER, RETYPE";
    0x570f43675f40 ---------A   01000 GOTO 960
    0x570f43676210 ---------A T 01010 LET F=0
    0x570f43676670 ---------A   01020 PRINT L$(Z+6);".  ";
    0x570f43676e40 ---------A   01030 LET R=RND(1)*(.98+FNF(1)*.02)
    0x570f43677210 ---------A   01040 LET R1=RND(1)
    0x570f436778b0 ---------A   01050 ON Z GOTO 1110,1150,1260,1480,1570,1570,1680
    0x570f43677920 ---------A T 01060 REM  JEAN'S SPECIAL
    0x570f43677d70 ---------A   01070 IF RND(1)> 1/3 THEN 940
    0x570f43677ee0 ---------A   01080 PRINT "GAME DELAYED.  DOG ON FIELD."
    0x570f43677f50 ---------A   01090 PRINT
    0x570f43677fc0 ---------A   01100 GOTO 940
    0x570f43678020 ---------A T 01110 REM  SIMPLE RUN
    0x570f436787a0 ---------A   01120 LET Y=INT(24*(R-.5)^3+3)
    0x570f43678ab0 ---------A   01130 IF RND(1)<.05 THEN 1180
    0x570f43678b30 ---------A   01140 GOTO 2190
    0x570f43678b90 ---------A T 01150 REM  TRICKY RUN
    0x570f436790c0 ---------A   01160 LET Y=INT(20*R-5)
    0x570f436793d0 ---------A   01170 IF RND(1)>.1 THEN 2190
    0x570f436795f0 ---------A T 01180 LET F=-1
    0x570f436798e0 ---------A   01190 LET X3=X
    0x570f43679e20 ---------A   01200 LET X=X+FNF(1)*Y
    0x570f4367a260 ---------A   01210 IF ABS(X-50)>=50 THEN 1240
    0x570f4367a3e0 ---------A   01220 PRINT "***  FUMBLE AFTER ";
    0x570f4367a460 ---------A   01230 GOTO 2230
    0x570f4367a5a0 ---------A T 01240 PRINT "***  FUMBLE."
    0x570f4367a610 ---------A   01250 GOTO 2450
    0x570f4367a670 ---------A T 01260 REM  SHORT PASS
    0x570f4367ade0 ---------A   01270 LET Y=INT(60*(R1-.5)^3+10)
    0x570f4367b030 ---------A   01280 IF R<.05 THEN 1330
    0x570f4367b290 ---------A   01290 IF R<.15 THEN 1390
    0x570f4367b500 ---------A   01300 IF R<.55 THEN 1420
    0x570f4367b680 ---------A T 01310 PRINT "COMPLETE.  ";
    0x570f4367b6f0 ---------A   01320 GOTO 2190
    0x570f4367b940 ---------A T 01330 IF D=4 THEN 1420
    0x570f4367baa0 ---------A   01340 PRINT "INTERCEPTED."
    0x570f4367bcb0 ---------A T 01350 LET F=-1
    0x570f4367c1f0 ---------A   01360 LET X=X+FNF(1)*Y
    0x570f4367c620 ---------A   01370 IF ABS(X-50)>=50 THEN 2450
    0x570f4367c6b0 ---------A   01380 GOTO 2300
    0x570f4367c810 ---------A T 01390 PRINT "PASSER TACKLED.  ";
    0x570f4367cc20 ---------A   01400 LET Y=-INT(10*R1)
    0x570f4367cc90 ---------A   01410 GOTO 2190
    0x570f4367cea0 ---------A T 01420 LET Y=0
    0x570f4367d1c0 ---------A   01430 IF RND(1)<.3 THEN 1460
    0x570f4367d340 ---------A   01440 PRINT "INCOMPLETE.  ";
    0x570f4367d3c0 ---------A   01450 GOTO 2190
    0x570f4367d520 ---------A T 01460 PRINT "BATTED DOWN.  ";
    0x570f4367d590 ---------A   01470 GOTO 2190
    0x570f4367de00 ---------A T 01480 REM  LONG PASS
    0x570f4367e570 ---------A   01490 LET Y=INT(160*(R1-.5)^3+30)
    0x570f4367e7c0 ---------A   01500 IF R<.1 THEN 1330
    0x570f4367ea20 ---------A   01510 IF R<.3 THEN 1540
    0x570f4367ec80 ---------A   01520 IF R<.75 THEN 1420
    0x570f4367ed10 ---------A   01530 GOTO 1310
    0x570f4367ee80 ---------A T 01540 PRINT "PASSER TACKLED.  ";
    0x570f4367f390 ---------A   01550 LET Y=-INT(15*R1+3)
    0x570f4367f400 ---------A   01560 GOTO 2190
    0x570f4367f460 ---------A T 01570 REM  PUNT OR KICK
    0x570f4367fbd0 ---------A   01580 LET Y=INT(100*(R-.5)^3+35)
    0x570f4367fe20 ---------A   01590 IF D=4 THEN 1610
    0x570f43680250 ---------A   01600 LET Y=INT(Y*1.3)
    0x570f43680680 ---------A T 01610 PRINT Y;L$(3);" PUNT"
    0x570f43680db0 ---------A   01620 IF ABS(X+Y*FNF(1)-50)>=50 THEN 1670
    0x570f43681020 ---------A   01630 IF D<4 THEN 1670
    0x570f43681610 ---------A   01640 LET Y1=INT(R1^2*20)
    0x570f43681a20 ---------A   01650 PRINT Y1;L$(3);" RUN BACK"
    0x570f43681d70 ---------A   01660 LET Y=Y-Y1
    0x570f43681de0 ---------A T 01670 GOTO 1350
    0x570f43681e40 ---------A T 01680 REM  PLACE KICK
    0x570f436825c0 ---------A   01690 LET Y=INT(100*(R-.5)^3+35)
    0x570f43682820 ---------A   01700 IF R1>.15 THEN 1740
    0x570f43682980 ---------A   01710 PRINT "KICK IS BLOCKED  ***"
    0x570f43682e90 ---------A   01720 LET X=X-5*FNF(1)
    0x570f436831c0 ---------A   01730 LET P=1-P
    0x570f43683230 ---------A T 01740 GOTO 720
    0x570f43683760 ----------   01750 LET X=X+FNF(1)*Y
    0x570f43683ba0 ----------   01760 IF ABS(X-50)>=60 THEN 1810
    0x570f43683d10 ----------   01770 PRINT "KICK IS SHORT."
    0x570f43684140 ----------   01780 IF ABS(X-50)>=50 THEN 2710
    0x570f43684480 ----------   01790 P=1-P
    0x570f436844f0 ----------   01800 GOTO 630
    0x570f43684740 ---------- T 01810 IF R1>.5 THEN 1840
    0x570f436848b0 ----------   01820 PRINT "KICK IS OFF TO THE SIDE."
    0x570f43684930 ----------   01830 GOTO 2710
    0x570f43684a70 ---------- T 01840 PRINT "FIELD GOAL ***"
    0x570f43684f60 ----------   01850 LET S(P)=S(P)+3
    0x570f43684fe0 ----------   01860 GOTO 2640
    0x570f43685040 ---------A T 01870 REM  OPPONENT'S PLAY
    0x570f436852b0 ---------A   01880 IF D>1 THEN 1940
    0x570f436856d0 ---------A T 01890 IF RND(1)>1/3 THEN 1920
    0x570f436858f0 ---------A   01900 LET Z=3
    0x570f43685960 ---------A   01910 GOTO 1010
    0x570f43685b60 ---------A T 01920 LET Z=1
    0x570f43685bd0 ---------A   01930 GOTO 1010
    0x570f43685e20 ---------A T 01940 IF D=4 THEN 2090
    0x570f436862a0 ---------A   01950 IF 10+X-X1<5 THEN 1890
    0x570f43686500 ---------A   01960 IF X<5 THEN 1890
    0x570f43686760 ---------A   01970 IF X<=10 THEN 2160
    0x570f436869f0 ---------A   01980 IF X>X1 THEN 2020
    0x570f43686f90 ---------A T 01990 LET A=INT(2*RND(1))
    0x570f436873c0 ---------A   02000 LET Z=2+A*2
    0x570f43687430 ---------A   02010 GOTO 1010
    0x570f43687670 ---------A T 02020 IF D<3 THEN 1990
    0x570f436878e0 ---------A   02030 IF X<45 THEN 1990
    0x570f43687d00 ---------A   02040 IF RND(1)>1/4 THEN 2070
    0x570f43687f20 ---------A   02050 LET Z=6
    0x570f43687f90 ---------A   02060 GOTO 1010
    0x570f43688190 ---------A T 02070 LET Z=4
    0x570f43688200 ---------A   02080 GOTO 1010
    0x570f43688450 ---------A T 02090 IF X>30 THEN 2140
    0x570f436888d0 ---------A   02100 IF 10+X-X1<3 THEN 1890
    0x570f43688b30 ---------A   02110 IF X<3 THEN 1890
    0x570f43688d50 ---------A   02120 LET Z=7
    0x570f43688dc0 ---------A   02130 GOTO 1010
    0x570f43688fc0 ---------A T 02140 LET Z=5
    0x570f43689040 ---------A   02150 GOTO 1010
    0x570f43689500 ---------A T 02160 LET A=INT(2*RND(1))
    0x570f43689830 ---------A   02170 LET Z=2+A
    0x570f436898a0 ---------A   02180 GOTO 1010
    0x570f43689900 ---------A T 02190 REM GAIN OR LOSS
    0x570f43689b40 ---------A   02200 LET X3=X
    0x570f4368a080 ---------A   02210 LET X=X+FNF(1)*Y
    0x570f4368a4b0 ---------A   02220 IF ABS(X-50)>=50 THEN 2450
    0x570f4368a720 ---------A T 02230 IF Y=0 THEN 2250
    0x570f4368ab50 ---------A   02240 PRINT ABS(Y);L$(3);
    0x570f4368af70 ---------A T 02250 PRINT L$(15+SGN(Y))
    0x570f4368b3b0 ---------A   02280 IF ABS(X3-50)>40 THEN 2300
    0x570f4368b6d0 ---------A   02290 IF RND(1)<.1 THEN 2860
    0x570f4368b750 ---------A T 02300 GOSUB 800
    0x570f4368b990 ---------A   02310 IF F=0 THEN 2340
    0x570f4368bcd0 ---------A T 02320 LET P=1-P
    0x570f4368bd50 ---------A   02330 GOTO 740
    0x570f4368c050 ---------A T 02340 IF FNG(1)>=10 THEN 740
    0x570f4368c2b0 ---------A   02350 IF D=4 THEN 2320
    0x570f4368c600 ---------A   02360 LET D=D+1
    0x570f4368c980 ---------A   02370 PRINT "DOWN: ";D;"     ";
    0x570f4368cef0 ---------A   02380 IF (X1-50)*FNF(1)<40 THEN 2410
    0x570f4368d050 ---------A   02390 PRINT "GOAL TO GO"
    0x570f4368d0d0 ---------A   02400 GOTO 2420
    0x570f4368d4d0 ---------A T 02410 PRINT "YARDS TO GO: ";10-FNG(1)
    0x570f4368d540 ---------A T 02420 PRINT
    0x570f4368d5b0 ---------A   02430 PRINT
    0x570f4368d630 ---------A   02440 GOTO 860
    0x570f4368d690 ---------A T 02450 REM BALL IN END-ZONE
    0x570f4368d900 ---------A   02460 IF X>=100 THEN 2490
    0x570f4368db20 ---------A   02470 LET E=0
    0x570f4368db90 ---------A   02480 GOTO 2500
    0x570f4368ddc0 ---------A T 02490 LET E=1
    0x570f4368ea50 ---------A T 02500 ON 1+E-F*2+P*4 GOTO 2510,2590,2760,2710,2590,2510,2710,2760
    0x570f4368eac0 ---------A T 02510 REM SAFETY
    0x570f4368f1d0 ---------A   02520 LET S(1-P)=S(1-P)+2
    0x570f4368f3e0 ---------A   02530 PRINT L$(19)
    0x570f4368f470 ---------A   02540 GOSUB 2800
    0x570f4368f7a0 ---------A   02550 PRINT O$(P);" KICKS OFF FROM ITS 20 YARD LINE."
    0x570f4368fbd0 ---------A   02560 LET X=20+P*60
    0x570f4368ff00 ---------A   02570 LET P=1-P
    0x570f4368ff70 ---------A   02580 GOTO 590
    0x570f4368ffd0 ---------A T 02590 REM OFFENSIVE TD
    0x570f43690300 ---------A T 02600 PRINT L$(17);"***"
    0x570f43690610 ---------A   02610 IF RND(1)>.8 THEN 2680
    0x570f43690b20 ---------A   02620 LET S(P)=S(P)+7
    0x570f43690c70 ---------A   02630 PRINT "KICK IS GOOD."
    0x570f43690cf0 ---------A T 02640 GOSUB 2800
    0x570f43691010 ---------A   02650 PRINT O$(P);" KICKS OFF"
    0x570f43691340 ---------A   02660 LET P=1-P
    0x570f436913c0 ---------A   02670 GOTO 580
    0x570f43691510 ---------A T 02680 PRINT "KICK IS OFF TO THE SIDE"
    0x570f43691a00 ---------A   02690 LET S(P)=S(P)+6
    0x570f43691a70 ---------A   02700 GOTO 2640
    0x570f43691ad0 ---------A T 02710 REM TOUCHBACK
    0x570f43691cf0 ---------A   02720 PRINT L$(18)
    0x570f43692020 ---------A   02730 LET P=1-P
    0x570f43692450 ---------A   02740 LET X=20+P*60
    0x570f436924c0 ---------A   02750 GOTO 720
    0x570f43692520 ---------A T 02760 REM DEFENSIVE TD
    0x570f43692c30 ---------A   02770 PRINT L$(17);"FOR ";O$(1-P);"***"
    0x570f4367d8b0 ---------A   02780 LET P=1-P
    0x570f4367d920 ---------A   02790 GOTO 2600
    0x570f4367d980 ---------C G 02800 REM SCORE
    0x570f4367da10 ---------C   02810 PRINT
    0x570f43693e90 ---------C   02820 PRINT "SCORE:  ";S(0);" TO ";S(1)
    0x570f43693f00 ---------C   02830 PRINT
    0x570f43693f70 ---------C   02840 PRINT
    0x570f43693fc0 ---------C   02850 RETURN
    0x570f43694040 ---------A T 02860 REM PENALTY
    0x570f43694610 ---------A   02870 LET P3=INT(2*RND(1))
    0x570f43694950 ---------A   02880 PRINT O$(P3);" OFFSIDES -- PENALTY OF 5 YARDS."
    0x570f436949c0 ---------A   02890 PRINT
    0x570f43694a30 ---------A   02900 PRINT
    0x570f43694c90 ---------A   02910 IF P3=0 THEN 2980
    0x570f43694e20 ---------A   02920 PRINT "DO YOU ACCEPT THE PENALTY";
    0x570f43694f80 ---------A T 02930 INPUT A$
    0x570f43695210 ---------A   02940 IF A$="NO" THEN 2300
    0x570f436954a0 ---------A   02950 IF A$="YES" THEN 3110
    0x570f43695620 ---------A   02960 PRINT "TYPE 'YES' OR 'NO'";
    0x570f436956a0 ---------A   02970 GOTO 2930
    0x570f43695710 ---------A T 02980 REM OPPONENT'S STRATEGY ON PENALTY
    0x570f43695970 ---------A   02990 IF P=1 THEN 3040
    0x570f43695bd0 ---------A   03000 IF Y<=0 THEN 3080
    0x570f43695e40 ---------A   03010 IF F<0 THEN 3080
    0x570f43696380 ---------A   03020 IF FNG(1)<3*D-2 THEN 3080
    0x570f43696400 ---------A   03030 GOTO 3100
    0x570f43696640 ---------A T 03040 IF Y<=5 THEN 3100
    0x570f436968a0 ---------A   03050 IF F<0 THEN 3100
    0x570f43696b10 ---------A   03060 IF D<4 THEN 3080
    0x570f43696e40 ---------A   03070 IF FNG(1)<10 THEN 3100
    0x570f43696fa0 ---------A T 03080 PRINT "PENALTY REFUSED."
    0x570f43697020 ---------A   03090 GOTO 2300
    0x570f43697160 ---------A T 03100 PRINT "PENALTY ACCEPTED."
    0x570f43697370 ---------A T 03110 LET F=0
    0x570f436976a0 ---------A   03120 LET D=D-1
    0x570f43697910 ---------A   03130 IF P<>P3 THEN 3160
    0x570f43697e30 ---------A   03140 LET X=X3-FNF(1)*5
    0x570f43697ea0 ---------A   03150 GOTO 2300
    0x570f436983a0 ---------A T 03160 LET X=X3+FNF(1)*5
    0x570f43698410 ---------A   03170 GOTO 2300
    0x570f43698450 ---------A   03180 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00470      00430T
     00480      00540T
     00550      00510T
     00580      00460T, 00550T, 02670T
     00590      02580T
     00630      01800T
     00655      00650T
     00700      00620T
     00720      00652T, 01740T, 02750T
     00740      02330T, 02340T
     00800      00730G, 02300G
     00840      00810T
     00850      00830T
     00860      00790T, 02440T
     00940      00890T, 00900T, 01070T, 01100T
     00960      01000T
     00990      00970T
     01010      00980T, 01910T, 01930T, 02010T, 02060T, 02080T, 02130T, 02150T, 
                02180T
     01060      00880T
     01110      01050T
     01150      01050T
     01180      01130T
     01240      01210T
     01260      01050T
     01310      01530T
     01330      01280T, 01500T
     01350      01670T
     01390      01290T
     01420      01300T, 01330T, 01520T
     01460      01430T
     01480      01050T
     01540      01510T
     01570      01050T, 01050T
     01610      01590T
     01670      01620T, 01630T
     01680      01050T
     01740      01700T
     01810      01760T
     01840      01810T
     01870      00940T
     01890      01950T, 01960T, 02100T, 02110T
     01920      01890T
     01940      01880T
     01990      02020T, 02030T
     02020      01980T
     02070      02040T
     02090      01940T
     02140      02090T
     02160      01970T
     02190      01140T, 01170T, 01320T, 01410T, 01450T, 01470T, 01560T
     02230      01230T
     02250      02230T
     02300      01380T, 02280T, 02940T, 03090T, 03150T, 03170T
     02320      02350T
     02340      02310T
     02410      02380T
     02420      02400T
     02450      01250T, 01370T, 02220T
     02490      02460T
     02500      02480T
     02510      02500T, 02500T
     02590      02500T, 02500T
     02600      00660T, 02790T
     02640      01860T, 02700T
     02680      02610T
     02710      01780T, 01830T, 02500T, 02500T
     02760      02500T, 02500T
     02800      02540G, 02640G
     02860      02290T
     02930      02970T
     02980      02910T
     03040      02990T
     03080      03000T, 03010T, 03020T, 03060T
     03100      03030T, 03040T, 03050T, 03070T
     03110      02950T
     03160      03130T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x570f43660ac0 (00010)   0x000000000000 (00000)   0x570f43698450 (03180)   0x570f43698450 (03180)   
   B) 0x570f43672120 (00800)   0x570f43672120 (00800)   0x570f43673690 (00850)   0x570f43673690 (00850)   
   C) 0x570f4367d980 (02800)   0x570f4367d980 (02800)   0x570f43693fc0 (02850)   0x570f43693fc0 (02850)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03880 - 10000    6130 

 */



/*
 *  Symbol Table Listing for 'basic/footbal1.bas'
 *
    A                        Float       
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Float       
    E                        Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Float       
    FIX             Function Integer         args=1, float  
    FNF             Array    Float           {0,9} 
    FNG             Array    Float           {0,9} 
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    L$              Array    String          {0,19} 
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
    O$              Array    String          {0,9} 
    OCT$            Function String          args=1, float  
    P                        Float       
    P3                       Float       
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Float       
    R1                       Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Float           {0,9} 
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    X1                       Float       
    X3                       Float       
    Y                        Float       
    Y1                       Float       
    Z                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/footbal1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x570f43660ac0 ---------A   01000 PRINT TAB(33);"FTBALL"
    0x570f43661e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x570f43661ff0 ---------A   01020 PRINT:PRINT
    0x570f436619e0 ---------A   01030 PRINT "THIS IS DARTMOUTH CHAMPIONSHIP FOOTBALL.":PRINT
    0x570f4365ffd0 ---------A   01040 PRINT "YOU WILL QUARTERBACK DARTMOUTH. CALL PLAYS AS FOLLOWS:"
    0x570f43660410 ---------A   01050 PRINT "1= SIMPLE RUN; 2= TRICKY RUN; 3= SHORT PASS;"
    0x570f4365fb20 ---------A   01060 PRINT "4= LONG PASS; 5= PUNT; 6= QUICK KICK; 7= PLACE KICK."
    0x570f4365fb70 ---------A   01070 PRINT
    0x570f436620a0 ---------A   01080 PRINT "CHOOSE YOUR OPPONENT";
    0x570f4365f610 ---------A   01090 INPUT O$(1)
    0x570f4365fd80 ---------A   01100 O$(0)="DARTMOUTH"
    0x570f43667920 ---------A   01110 PRINT
    0x570f43667ee0 ---------A   01120 LET S(0)=0: LET S(1)=0
    0x570f43667f30 ---------A   01130 REM
    0x570f43668190 ---------A   01140 DIM L$(20)
    0x570f436687d0 ---------A   01150 FOR I=1 TO 20: READ L$(I): NEXT I
    0x570f43668d10 ---------A   01160 DATA "KICK","RECEIVE"," YARD ","RUN BACK FOR ","BALL ON "
    0x570f43669130 ---------A   01170 DATA "YARD LINE"," SIMPLE RUN"," TRICKY RUN"," SHORT PASS"
    0x570f43669630 ---------A   01180 DATA " LONG PASS","PUNT"," QUICK KICK "," PLACE KICK"," LOSS "
    0x570f43669b00 ---------A   01190 DATA " NO GAIN","GAIN "," TOUCHDOWN "," TOUCHBACK ","SAFETY***"
    0x570f43669c50 ---------A   01200 DATA "JUNK"
    0x570f4366a1c0 ---------A   01210 LET P=INT(RND(1)*2)
    0x570f4366a4f0 ---------A   01220 PRINT O$(P);" WON THE TOSS"
    0x570f4366ab60 ---------A   01230 DEF FNF(X)=1-2*P
    0x570f4366b810 ---------A   01240 DEF FNG(Z)=P*(X1-X)+(1-P)*(X-X1)
    0x570f4366ba40 ---------A   01250 IF P=0 THEN 1290
    0x570f4366bd60 ---------A   01260 PRINT O$(1);" ELECTS TO RECEIVE."
    0x570f4366bdd0 ---------A   01270 PRINT
    0x570f4366be60 ---------A   01280 GOTO 1390
    0x570f4366bfa0 ---------A T 01290 PRINT "DO YOU ELECT TO KICK OR RECEIVE";
    0x570f4366c1b0 ---------A T 01300 INPUT A$
    0x570f4366c230 ---------A   01310 PRINT
    0x570f4366c5a0 ---------A   01320 FOR E=1 TO 2
    0x570f4366cb10 ---------A   01330 IF A$=L$(E) THEN 1370
    0x570f4366cc50 ---------A   01340 NEXT E
    0x570f4366ce20 ---------A   01350 PRINT "INCORRECT ANSWER.  PLEASE TYPE 'KICK' OR 'RECIEVE'";
    0x570f4366ce90 ---------A   01360 GOTO 1300
    0x570f4366d0d0 ---------A T 01370 IF E=2 THEN 1390
    0x570f4366d2f0 ---------A   01380 LET P=1
    0x570f4366d870 ---------A T 01390 LET X=40+(1-P)*20
    0x570f4366e150 ---------A T 01400 LET Y=INT(200*(RND(1)-.5)^3+55)
    0x570f4366e560 ---------A   01410 PRINT Y;L$(3);" KICKOFF"
    0x570f4366eaa0 ---------A   01420 LET X=X-FNF(1)*Y
    0x570f4366eef0 ---------A   01430 IF ABS(X-50)>=50 THEN 1510
    0x570f4366fbf0 ---------A   01440 LET Y=INT(50*RND(1)^2)+(1-P)*INT(50*RND(1)^4)
    0x570f43670130 ---------A   01450 LET X=X+FNF(1)*Y
    0x570f43670570 ---------A   01460 IF ABS(X-50)>=50 THEN 1490
    0x570f43670990 ---------A   01470 PRINT Y;L$(3);" RUNBACK"
    0x570f43670a00 ---------A   01480 GOTO 1540
    0x570f43670c20 ---------A T 01490 PRINT L$(4);
    0x570f43670ca0 ---------A   01500 GOTO 3210
    0x570f436710c0 ---------A T 01510 PRINT "TOUCHBACK FOR ";O$(P);"."
    0x570f436714f0 ---------A   01520 LET X=20+P*60
    0x570f43671560 ---------A   01530 REM FIRST DOWN
    0x570f436715e0 ---------A T 01540 GOSUB 3750
    0x570f43671800 ---------A T 01550 LET X1=X
    0x570f43671af0 ---------A   01560 LET D=1
    0x570f43671f70 ---------A   01570 PRINT:PRINT "FIRST DOWN ";O$(P);"***"
    0x570f43671fe0 ---------A   01580 PRINT
    0x570f43672050 ---------A   01590 PRINT
    0x570f436720c0 ---------A   01600 GOTO 1620
    0x570f43673710 ---------A   01610 REM NEW PLAY
    0x570f43673b10 ---------A T 01620 LET T=T+1
    0x570f43673d60 ---------A   01630 IF T=30 THEN 1820
    0x570f43673fd0 ---------A   01640 IF T<50 THEN 1690
    0x570f43674300 ---------A   01650 IF RND(1)>.2 THEN 1690
    0x570f43674490 ---------A   01660 PRINT "END OF GAME  ***"
    0x570f43674fe0 ---------A   01670 PRINT "FINAL SCORE:  ";O$(0);": ";S(0);"  ";O$(1);": ";S(1)
    0x570f43675030 ---------A   01680 STOP
    0x570f43675290 ---------A T 01690 IF P=1 THEN 2510
    0x570f43675410 ---------A   01700 PRINT "NEXT PLAY";
    0x570f43675570 ---------A T 01710 INPUT Z
    0x570f436758e0 ---------A   01720 IF Z<>INT(Z) THEN 1740
    0x570f43675d40 ---------A   01730 IF ABS(Z-4)<=3 THEN 1760
    0x570f43675ed0 ---------A T 01740 PRINT "ILLEGAL PLAY NUMBER, RETYPE";
    0x570f43675f40 ---------A   01750 GOTO 1710
    0x570f43676210 ---------A T 01760 LET F=0
    0x570f43676670 ---------A   01770 PRINT L$(Z+6);".  ";
    0x570f43676e40 ---------A   01780 LET R=RND(1)*(.98+FNF(1)*.02)
    0x570f43677210 ---------A   01790 LET R1=RND(1)
    0x570f436778b0 ---------A   01800 ON Z GOTO 1870,1910,2020,2240,2330,1570,2440
    0x570f43677920 ---------A   01810 REM  JEAN'S SPECIAL
    0x570f43677d70 ---------A T 01820 IF RND(1)> 1/3 THEN 1690
    0x570f43677ee0 ---------A   01830 PRINT "GAME DELAYED.  DOG ON FIELD."
    0x570f43677f50 ---------A   01840 PRINT
    0x570f43677fc0 ---------A   01850 GOTO 1690
    0x570f43678020 ---------A   01860 REM  SIMPLE RUN
    0x570f436787a0 ---------A T 01870 LET Y=INT(24*(R-.5)^3+3)
    0x570f43678ab0 ---------A   01880 IF RND(1)<.05 THEN 1930
    0x570f43678b30 ---------A   01890 GOTO 2830
    0x570f43678b90 ---------A   01900 REM  TRICKY RUN
    0x570f436790c0 ---------A T 01910 LET Y=INT(20*R-5)
    0x570f436793d0 ---------A   01920 IF RND(1)>.1 THEN 2830
    0x570f436795f0 ---------A T 01930 LET F=-1
    0x570f436798e0 ---------A   01940 LET X3=X
    0x570f43679e20 ---------A   01950 LET X=X+FNF(1)*Y
    0x570f4367a260 ---------A   01960 IF ABS(X-50)>=50 THEN 1990
    0x570f4367a3e0 ---------A   01970 PRINT "***  FUMBLE AFTER ";
    0x570f4367a460 ---------A   01980 GOTO 2860
    0x570f4367a5a0 ---------A T 01990 PRINT "***  FUMBLE."
    0x570f4367a610 ---------A   02000 GOTO 3070
    0x570f4367a670 ---------A   02010 REM  SHORT PASS
    0x570f4367ade0 ---------A T 02020 LET Y=INT(60*(R1-.5)^3+10)
    0x570f4367b030 ---------A   02030 IF R<.05 THEN 2080
    0x570f4367b290 ---------A   02040 IF R<.15 THEN 2140
    0x570f4367b500 ---------A   02050 IF R<.55 THEN 2170
    0x570f4367b680 ---------A T 02060 PRINT "COMPLETE.  ";
    0x570f4367b6f0 ---------A   02070 GOTO 2830
    0x570f4367b940 ---------A T 02080 IF D=4 THEN 2170
    0x570f4367baa0 ---------A   02090 PRINT "INTERCEPTED."
    0x570f4367bcb0 ---------A T 02100 LET F=-1
    0x570f4367c1f0 ---------A   02110 LET X=X+FNF(1)*Y
    0x570f4367c620 ---------A   02120 IF ABS(X-50)>=50 THEN 3070
    0x570f4367c6b0 ---------A   02130 GOTO 2910
    0x570f4367c810 ---------A T 02140 PRINT "PASSER TACKLED.  ";
    0x570f4367cc20 ---------A   02150 LET Y=-INT(10*R1)
    0x570f4367cc90 ---------A   02160 GOTO 2830
    0x570f4367cea0 ---------A T 02170 LET Y=0
    0x570f4367d1c0 ---------A   02180 IF RND(1)<.3 THEN 2210
    0x570f4367d340 ---------A   02190 PRINT "INCOMPLETE.  ";
    0x570f4367d3c0 ---------A   02200 GOTO 2830
    0x570f4367d520 ---------A T 02210 PRINT "BATTED DOWN.  ";
    0x570f4367d590 ---------A   02220 GOTO 2830
    0x570f4367de00 ---------A   02230 REM  LONG PASS
    0x570f4367e570 ---------A T 02240 LET Y=INT(160*(R1-.5)^3+30)
    0x570f4367e7c0 ---------A   02250 IF R<.1 THEN 2080
    0x570f4367ea20 ---------A   02260 IF R<.3 THEN 2290
    0x570f4367ec80 ---------A   02270 IF R<.75 THEN 2170
    0x570f4367ed10 ---------A   02280 GOTO 2060
    0x570f4367ee80 ---------A T 02290 PRINT "PASSER TACKLED.  ";
    0x570f4367f390 ---------A   02300 LET Y=-INT(15*R1+3)
    0x570f4367f400 ---------A   02310 GOTO 2830
    0x570f4367f460 ---------A   02320 REM  PUNT OR KICK
    0x570f4367fbd0 ---------A T 02330 LET Y=INT(100*(R-.5)^3+35)
    0x570f4367fe20 ---------A   02340 IF D=4 THEN 2360
    0x570f43680250 ---------A   02350 LET Y=INT(Y*1.3)
    0x570f43680680 ---------A T 02360 PRINT Y;L$(3);" PUNT"
    0x570f43680db0 ---------A   02370 IF ABS(X+Y*FNF(1)-50)>=50 THEN 2420
    0x570f43681020 ---------A   02380 IF D<4 THEN 2420
    0x570f43681610 ---------A   02390 LET Y1=INT(R1^2*20)
    0x570f43681a20 ---------A   02400 PRINT Y1;L$(3);" RUN BACK"
    0x570f43681d70 ---------A   02410 LET Y=Y-Y1
    0x570f43681de0 ---------A T 02420 GOTO 2100
    0x570f43681e40 ---------A   02430 REM  PLACE KICK
    0x570f436825c0 ---------A T 02440 LET Y=INT(100*(R-.5)^3+35)
    0x570f43682820 ---------A   02450 IF R1>.15 THEN 2490
    0x570f43682980 ---------A   02460 PRINT "KICK IS BLOCKED  ***"
    0x570f43682e90 ---------A   02470 LET X=X-5*FNF(1)
    0x570f436831c0 ---------A   02480 LET P=1-P
    0x570f43683230 ---------A T 02490 GOTO 1540
    0x570f43685040 ---------A   02500 REM  OPPONENT'S PLAY
    0x570f436852b0 ---------A T 02510 IF D>1 THEN 2570
    0x570f436856d0 ---------A T 02520 IF RND(1)>1/3 THEN 2550
    0x570f436858f0 ---------A   02530 LET Z=3
    0x570f43685960 ---------A   02540 GOTO 1760
    0x570f43685b60 ---------A T 02550 LET Z=1
    0x570f43685bd0 ---------A   02560 GOTO 1760
    0x570f43685e20 ---------A T 02570 IF D=4 THEN 2720
    0x570f436862a0 ---------A   02580 IF 10+X-X1<5 THEN 2520
    0x570f43686500 ---------A   02590 IF X<5 THEN 2520
    0x570f43686760 ---------A   02600 IF X<=10 THEN 2790
    0x570f436869f0 ---------A   02610 IF X>X1 THEN 2650
    0x570f43686f90 ---------A T 02620 LET A=INT(2*RND(1))
    0x570f436873c0 ---------A   02630 LET Z=2+A*2
    0x570f43687430 ---------A   02640 GOTO 1760
    0x570f43687670 ---------A T 02650 IF D<3 THEN 2620
    0x570f436878e0 ---------A   02660 IF X<45 THEN 2620
    0x570f43687d00 ---------A   02670 IF RND(1)>1/4 THEN 2700
    0x570f43687f20 ---------A   02680 LET Z=6
    0x570f43687f90 ---------A   02690 GOTO 1760
    0x570f43688190 ---------A T 02700 LET Z=4
    0x570f43688200 ---------A   02710 GOTO 1760
    0x570f43688450 ---------A T 02720 IF X>30 THEN 2770
    0x570f436888d0 ---------A   02730 IF 10+X-X1<3 THEN 2520
    0x570f43688b30 ---------A   02740 IF X<3 THEN 2520
    0x570f43688d50 ---------A   02750 LET Z=7
    0x570f43688dc0 ---------A   02760 GOTO 1760
    0x570f43688fc0 ---------A T 02770 LET Z=5
    0x570f43689040 ---------A   02780 GOTO 1760
    0x570f43689500 ---------A T 02790 LET A=INT(2*RND(1))
    0x570f43689830 ---------A   02800 LET Z=2+A
    0x570f436898a0 ---------A   02810 GOTO 1760
    0x570f43689900 ---------A   02820 REM GAIN OR LOSS
    0x570f43689b40 ---------A T 02830 LET X3=X
    0x570f4368a080 ---------A   02840 LET X=X+FNF(1)*Y
    0x570f4368a4b0 ---------A   02850 IF ABS(X-50)>=50 THEN 3070
    0x570f4368a720 ---------A T 02860 IF Y=0 THEN 2880
    0x570f4368ab50 ---------A   02870 PRINT ABS(Y);L$(3);
    0x570f4368af70 ---------A T 02880 PRINT L$(15+SGN(Y))
    0x570f4368b3b0 ---------A   02890 IF ABS(X3-50)>40 THEN 2910
    0x570f4368b6d0 ---------A   02900 IF RND(1)<.1 THEN 3420
    0x570f4368b750 ---------A T 02910 GOSUB 3750
    0x570f4368b990 ---------A   02920 IF F=0 THEN 2950
    0x570f4368bcd0 ---------A T 02930 LET P=1-P
    0x570f4368bd50 ---------A   02940 GOTO 1550
    0x570f4368c050 ---------A T 02950 IF FNG(1)>=10 THEN 1550
    0x570f4368c2b0 ---------A   02960 IF D=4 THEN 2930
    0x570f4368c600 ---------A   02970 LET D=D+1
    0x570f4368c980 ---------A   02980 PRINT "DOWN: ";D;"     ";
    0x570f4368cef0 ---------A   02990 IF (X1-50)*FNF(1)<40 THEN 3020
    0x570f4368d050 ---------A   03000 PRINT "GOAL TO GO"
    0x570f4368d0d0 ---------A   03010 GOTO 3030
    0x570f4368d4d0 ---------A T 03020 PRINT "YARDS TO GO: ";10-FNG(1)
    0x570f4368d540 ---------A T 03030 PRINT
    0x570f4368d5b0 ---------A   03040 PRINT
    0x570f4368d630 ---------A   03050 GOTO 1620
    0x570f4368d690 ---------A   03060 REM BALL IN END-ZONE
    0x570f4368d900 ---------A T 03070 IF X>=100 THEN 3100
    0x570f4368db20 ---------A   03080 LET E=0
    0x570f4368db90 ---------A   03090 GOTO 3110
    0x570f4368ddc0 ---------A T 03100 LET E=1
    0x570f4368ea50 ---------A T 03110 ON 1+E-F*2+P*4 GOTO 3130,3210,3380,3330,2590,2510,2710,2760
    0x570f4368eac0 ---------A   03120 REM SAFETY
    0x570f4368f1d0 ---------A T 03130 LET S(1-P)=S(1-P)+2
    0x570f4368f3e0 ---------A   03140 PRINT L$(19)
    0x570f4368f470 ---------A   03150 GOSUB 3820
    0x570f4368f7a0 ---------A   03160 PRINT O$(P);" KICKS OFF FROM ITS 20 YARD LINE."
    0x570f4368fbd0 ---------A   03170 LET X=20+P*60
    0x570f4368ff00 ---------A   03180 LET P=1-P
    0x570f4368ff70 ---------A   03190 GOTO 1400
    0x570f4368ffd0 ---------A   03200 REM OFFENSIVE TD
    0x570f43690300 ---------A T 03210 PRINT L$(17);"***"
    0x570f43690610 ---------A   03220 IF RND(1)>.8 THEN 3290
    0x570f43690b20 ---------A   03230 LET S(P)=S(P)+7
    0x570f43690c70 ---------A   03240 PRINT "KICK IS GOOD."
    0x570f43690cf0 ---------A T 03250 GOSUB 3820
    0x570f43691010 ---------A   03260 PRINT O$(P);" KICKS OFF"
    0x570f43691340 ---------A   03270 LET P=1-P
    0x570f436913c0 ---------A   03280 GOTO 1390
    0x570f43691510 ---------A T 03290 PRINT "KICK IS OFF TO THE SIDE"
    0x570f43691a00 ---------A   03300 LET S(P)=S(P)+6
    0x570f43691a70 ---------A   03310 GOTO 3250
    0x570f43691ad0 ---------A   03320 REM TOUCHBACK
    0x570f43691cf0 ---------A T 03330 PRINT L$(18)
    0x570f43692020 ---------A   03340 LET P=1-P
    0x570f43692450 ---------A   03350 LET X=20+P*60
    0x570f436924c0 ---------A   03360 GOTO 1540
    0x570f43692520 ---------A   03370 REM DEFENSIVE TD
    0x570f43692c30 ---------A T 03380 PRINT L$(17);"FOR ";O$(1-P);"***"
    0x570f4367d8b0 ---------A   03390 LET P=1-P
    0x570f4367d920 ---------A   03400 GOTO 3210
    0x570f43694040 ---------A   03410 REM PENALTY
    0x570f43694610 ---------A T 03420 LET P3=INT(2*RND(1))
    0x570f43694950 ---------A   03430 PRINT O$(P3);" OFFSIDES -- PENALTY OF 5 YARDS."
    0x570f436949c0 ---------A   03440 PRINT
    0x570f43694a30 ---------A   03450 PRINT
    0x570f43694c90 ---------A   03460 IF P3=0 THEN 3540
    0x570f43694e20 ---------A   03470 PRINT "DO YOU ACCEPT THE PENALTY";
    0x570f43694f80 ---------A T 03480 INPUT A$
    0x570f43695210 ---------A   03490 IF A$="NO" THEN 2910
    0x570f436954a0 ---------A   03500 IF A$="YES" THEN 3660
    0x570f43695620 ---------A   03510 PRINT "TYPE 'YES' OR 'NO'";
    0x570f436956a0 ---------A   03520 GOTO 3480
    0x570f43695710 ---------A   03530 REM OPPONENT'S STRATEGY ON PENALTY
    0x570f43695970 ---------A T 03540 IF P=1 THEN 3590
    0x570f43695bd0 ---------A   03550 IF Y<=0 THEN 3630
    0x570f43695e40 ---------A   03560 IF F<0 THEN 3630
    0x570f43696380 ---------A   03570 IF FNG(1)<3*D-2 THEN 3630
    0x570f43696400 ---------A   03580 GOTO 3650
    0x570f43696640 ---------A T 03590 IF Y<=5 THEN 3650
    0x570f436968a0 ---------A   03600 IF F<0 THEN 3650
    0x570f43696b10 ---------A   03610 IF D<4 THEN 3630
    0x570f43696e40 ---------A   03620 IF FNG(1)<10 THEN 3650
    0x570f43696fa0 ---------A T 03630 PRINT "PENALTY REFUSED."
    0x570f43697020 ---------A   03640 GOTO 2910
    0x570f43697160 ---------A T 03650 PRINT "PENALTY ACCEPTED."
    0x570f43697370 ---------A T 03660 LET F=0
    0x570f436976a0 ---------A   03670 LET D=D-1
    0x570f43697910 ---------A   03680 IF P<>P3 THEN 3710
    0x570f43697e30 ---------A   03690 LET X=X3-FNF(1)*5
    0x570f43697ea0 ---------A   03700 GOTO 2910
    0x570f436983a0 ---------A T 03710 LET X=X3+FNF(1)*5
    0x570f43698410 ---------A   03720 GOTO 2910
    0x570f43698450 ---------A   03730 END
    0x570f43672120 ---------B   03740 REM PRINT POSITION
    0x570f43672390 ---------B G 03750 IF X>50 THEN 3780
    0x570f43672a30 ---------B   03760 PRINT L$(5);O$(0);X;L$(6)
    0x570f43672ab0 ---------B   03770 GOTO 3790
    0x570f43673640 ---------B T 03780 PRINT L$(5);O$(1);100-X;L$(6)
    0x570f4369fd70 ---------B T 03790 GOTO 03800
    0x570f4369fdb0 ---------B T 03800 RETURN
    0x570f4367d980 ---------C   03810 REM SCORE
    0x570f4367da10 ---------C G 03820 PRINT
    0x570f43693e90 ---------C   03830 PRINT "SCORE:  ";S(0);" TO ";S(1)
    0x570f43693f00 ---------C   03840 PRINT
    0x570f43693f70 ---------C   03850 PRINT
    0x570f4369fdf0 ---------C   03860 GOTO 03870
    0x570f4369fe30 ---------C T 03870 RETURN
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
char* data_01160s[]={"KICK","RECEIVE"," YARD ","RUN BACK FOR ","BALL ON "};
char* data_01170s[]={"YARD LINE"," SIMPLE RUN"," TRICKY RUN"," SHORT PASS"};
char* data_01180s[]={" LONG PASS","PUNT"," QUICK KICK "," PLACE KICK"," LOSS "};
char* data_01190s[]={" NO GAIN","GAIN "," TOUCHDOWN "," TOUCHBACK ","SAFETY***"};
char* data_01200s[]={"JUNK"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1160,  5,data_01160s},
    { 1170,  4,data_01170s},
    { 1180,  5,data_01180s},
    { 1190,  5,data_01190s},
    { 1200,  1,data_01200s},
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
float  D_flt;                                     // Basic: D 
float  E_flt;                                     // Basic: E 
float  F_flt;                                     // Basic: F 
float  FNF_flt_arr[10];                           // Basic: FNF 
float  FNG_flt_arr[10];                           // Basic: FNG 
float  I_flt;                                     // Basic: I 
char*  L_str_arr[20];                             // Basic: L$ 
char*  O_str_arr[10];                             // Basic: O$ 
float  P_flt;                                     // Basic: P 
float  P3_flt;                                    // Basic: P3 
float  R_flt;                                     // Basic: R 
float  R1_flt;                                    // Basic: R1 
float  S_flt_arr[10];                             // Basic: S 
float  T_flt;                                     // Basic: T 
float  X_flt;                                     // Basic: X 
float  X1_flt;                                    // Basic: X1 
float  X3_flt;                                    // Basic: X3 
float  Y_flt;                                     // Basic: Y 
float  Y1_flt;                                    // Basic: Y1 
float  Z_flt;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03750();
void Routine_03820();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused X
int FNF(float X){
    int rtn=1-2*P_flt;
    return(rtn);
}

#pragma argsused Z
int FNG(float Z){
    int rtn=P_flt*(X1_flt-X_flt)+(1-P_flt)*(X_flt-X1_flt);
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
    // 03740 REM PRINT POSITION

void Routine_03750(){
    // 03750 IF X>50 THEN 3780
    if(X_flt>50)goto Lbl_03780;
    // 03760 PRINT L$(5);O$(0);X;L$(6)
    b2c_printf("%süiCW%süiCW %.2f üiCW%s\n",L_str_arr[5],O_str_arr[0],X_flt,L_str_arr[6]);
    // 03770 GOTO 3790
    goto Lbl_03790;

  Lbl_03780:
    // 03780 PRINT L$(5);O$(1);100-X;L$(6)
    b2c_printf("%sM›ÿ%sM›ÿ00-X_flt00-X_flt%s\n",L_str_arr[5],O_str_arr[1],L_str_arr[6]);

  Lbl_03790:
    // 03790 GOTO 03800
    goto Lbl_03800;

  Lbl_03800:
    // 03800 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 03810 REM SCORE

void Routine_03820(){
    // 03820 PRINT
    b2c_printf("\n");
    // 03830 PRINT "SCORE:  ";S(0);" TO ";S(1)
    b2c_printf("Score:   %.2f Score:   to  to  %.2f \n",S_flt_arr[0],S_flt_arr[1]);
    // 03840 PRINT
    b2c_printf("\n");
    // 03850 PRINT
    b2c_printf("\n");
    // 03860 GOTO 03870
    goto Lbl_03870;

  Lbl_03870:
    // 03870 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
