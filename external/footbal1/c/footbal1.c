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
    0x57ee2614b6d0 ---------A   00010  PRINT TAB(33);"FTBALL"
    0x57ee2614b670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57ee2614b9e0 ---------A   00030  PRINT:PRINT
    0x57ee2614db00 ---------A   00220  PRINT "THIS IS DARTMOUTH CHAMPIONSHIP FOOTBALL.":PRINT
    0x57ee2614c080 ---------A   00230  PRINT "YOU WILL QUARTERBACK DARTMOUTH. CALL PLAYS AS FOLLOWS:"
    0x57ee2614c4d0 ---------A   00240  PRINT "1= SIMPLE RUN; 2= TRICKY RUN; 3= SHORT PASS;"
    0x57ee2614bbe0 ---------A   00250  PRINT "4= LONG PASS; 5= PUNT; 6= QUICK KICK; 7= PLACE KICK."
    0x57ee2614bc40 ---------A   00260  PRINT
    0x57ee2614bca0 ---------A   00270  PRINT "CHOOSE YOUR OPPONENT";
    0x57ee2614c880 ---------A   00280  INPUT O$(1)
    0x57ee2614e0b0 ---------A   00290  O$(0)="DARTMOUTH"
    0x57ee26153aa0 ---------A   00300  PRINT
    0x57ee26154070 ---------A   00310  LET S(0)=0: LET S(1)=0
    0x57ee261540c0 ---------A   00320  REM
    0x57ee26154330 ---------A   00330  DIM L$(20)
    0x57ee261549b0 ---------A   00340  FOR I=1 TO 20: READ L$(I): NEXT I
    0x57ee26154f00 ---------A   00350  DATA "KICK","RECEIVE"," YARD ","RUN BACK FOR ","BALL ON "
    0x57ee26155320 ---------A   00360  DATA "YARD LINE"," SIMPLE RUN"," TRICKY RUN"," SHORT PASS"
    0x57ee26155820 ---------A   00370  DATA " LONG PASS","PUNT"," QUICK KICK "," PLACE KICK"," LOSS "
    0x57ee26155cf0 ---------A   00380  DATA " NO GAIN","GAIN "," TOUCHDOWN "," TOUCHBACK ","SAFETY***"
    0x57ee26155e40 ---------A   00385  DATA "JUNK"
    0x57ee261563b0 ---------A   00390  LET P=INT(RND(1)*2)
    0x57ee261566e0 ---------A   00400  PRINT O$(P);" WON THE TOSS"
    0x57ee26156d60 ---------A   00410  DEF FNF(X)=1-2*P
    0x57ee26157a10 ---------A   00420  DEF FNG(Z)=P*(X1-X)+(1-P)*(X-X1)
    0x57ee26157c40 ---------A   00430  IF P=0 THEN 470
    0x57ee26157f60 ---------A   00440  PRINT O$(1);" ELECTS TO RECEIVE."
    0x57ee26157fe0 ---------A   00450  PRINT
    0x57ee26158080 ---------A   00460  GOTO 580
    0x57ee261581d0 ---------A T 00470  PRINT "DO YOU ELECT TO KICK OR RECEIVE";
    0x57ee261583f0 ---------A T 00480  INPUT A$
    0x57ee26158470 ---------A   00490  PRINT
    0x57ee261587f0 ---------A   00500  FOR E=1 TO 2
    0x57ee26158d60 ---------A   00510  IF A$=L$(E) THEN 550
    0x57ee26158ea0 ---------A   00520  NEXT E
    0x57ee26159080 ---------A   00530  PRINT "INCORRECT ANSWER.  PLEASE TYPE 'KICK' OR 'RECIEVE'";
    0x57ee26159100 ---------A   00540  GOTO 480
    0x57ee26159350 ---------A T 00550  IF E=2 THEN 580
    0x57ee26159570 ---------A   00560  LET P=1
    0x57ee26159af0 ---------A T 00580  LET X=40+(1-P)*20
    0x57ee2615a3d0 ---------A T 00590  LET Y=INT(200*(RND(1)-.5)^3+55)
    0x57ee2615a7e0 ---------A   00600  PRINT Y;L$(3);" KICKOFF"
    0x57ee2615ad30 ---------A   00610  LET X=X-FNF(1)*Y
    0x57ee2615b180 ---------A   00620  IF ABS(X-50)>=50 THEN 700
    0x57ee2615be80 ---------A T 00630  LET Y=INT(50*RND(1)^2)+(1-P)*INT(50*RND(1)^4)
    0x57ee2615c3c0 ---------A   00640  LET X=X+FNF(1)*Y
    0x57ee2615c800 ---------A   00650  IF ABS(X-50)>=50 THEN 655
    0x57ee2615cc20 ---------A   00651  PRINT Y;L$(3);" RUNBACK"
    0x57ee2615cca0 ---------A   00652  GOTO 720
    0x57ee2615ced0 ---------A T 00655  PRINT L$(4);
    0x57ee2615cf60 ---------A   00660  GOTO 2600
    0x57ee2615d390 ---------A T 00700  PRINT "TOUCHBACK FOR ";O$(P);"."
    0x57ee2615d7d0 ---------A   00710  LET X=20+P*60
    0x57ee2615d840 ---------A T 00720  REM FIRST DOWN
    0x57ee2615d8d0 ---------A   00730  GOSUB 800
    0x57ee2615db00 ---------A T 00740  LET X1=X
    0x57ee2615ddf0 ---------A   00750  LET D=1
    0x57ee2615e280 ---------A   00760  PRINT:PRINT "FIRST DOWN ";O$(P);"***"
    0x57ee2615e300 ---------A   00770  PRINT
    0x57ee2615e380 ---------A   00780  PRINT
    0x57ee2615e400 ---------A   00790  GOTO 860
    0x57ee2615e470 ---------B G 00800  REM PRINT POSITION
    0x57ee2615e6f0 ---------B   00810  IF X>50 THEN 840
    0x57ee2615ed90 ---------B   00820  PRINT L$(5);O$(0);X;L$(6)
    0x57ee2615ee20 ---------B   00830  GOTO 850
    0x57ee2615f9c0 ---------B T 00840  PRINT L$(5);O$(1);100-X;L$(6)
    0x57ee2615fa20 ---------B T 00850  RETURN
    0x57ee2615faa0 ---------A T 00860  REM NEW PLAY
    0x57ee2615feb0 ---------A   00870  LET T=T+1
    0x57ee26160100 ---------A   00880  IF T=30 THEN 1060
    0x57ee26160370 ---------A   00890  IF T<50 THEN 940
    0x57ee261606a0 ---------A   00900  IF RND(1)>.2 THEN 940
    0x57ee26160830 ---------A   00910  PRINT "END OF GAME  ***"
    0x57ee26161390 ---------A   00920  PRINT "FINAL SCORE:  ";O$(0);": ";S(0);"  ";O$(1);": ";S(1)
    0x57ee261613f0 ---------A   00930  STOP
    0x57ee26161650 ---------A T 00940  IF P=1 THEN 1870
    0x57ee261617d0 ---------A   00950  PRINT "NEXT PLAY";
    0x57ee26161940 ---------A T 00960  INPUT Z
    0x57ee26161cb0 ---------A   00970  IF Z<>INT(Z) THEN 990
    0x57ee26162110 ---------A   00980  IF ABS(Z-4)<=3 THEN 1010
    0x57ee261622a0 ---------A T 00990  PRINT "ILLEGAL PLAY NUMBER, RETYPE";
    0x57ee26162320 ---------A   01000  GOTO 960
    0x57ee26162600 ---------A T 01010  LET F=0
    0x57ee26162a60 ---------A   01020  PRINT L$(Z+6);".  ";
    0x57ee26163240 ---------A   01030  LET R=RND(1)*(.98+FNF(1)*.02)
    0x57ee26163610 ---------A   01040  LET R1=RND(1)
    0x57ee26163cb0 ---------A   01050  ON Z GOTO 1110,1150,1260,1480,1570,1570,1680
    0x57ee26163d30 ---------A T 01060  REM  JEAN'S SPECIAL
    0x57ee26164190 ---------A   01070  IF RND(1)> 1/3 THEN 940
    0x57ee26164300 ---------A   01080  PRINT "GAME DELAYED.  DOG ON FIELD."
    0x57ee26164380 ---------A   01090  PRINT
    0x57ee26164400 ---------A   01100  GOTO 940
    0x57ee26164470 ---------A T 01110  REM  SIMPLE RUN
    0x57ee26164c00 ---------A   01120  LET Y=INT(24*(R-.5)^3+3)
    0x57ee26164f10 ---------A   01130  IF RND(1)<.05 THEN 1180
    0x57ee26164f90 ---------A   01140  GOTO 2190
    0x57ee26165000 ---------A T 01150  REM  TRICKY RUN
    0x57ee26165540 ---------A   01160  LET Y=INT(20*R-5)
    0x57ee26165850 ---------A   01170  IF RND(1)>.1 THEN 2190
    0x57ee26165a70 ---------A T 01180  LET F=-1
    0x57ee26165d60 ---------A   01190  LET X3=X
    0x57ee261662a0 ---------A   01200  LET X=X+FNF(1)*Y
    0x57ee261666e0 ---------A   01210  IF ABS(X-50)>=50 THEN 1240
    0x57ee26166860 ---------A   01220  PRINT "***  FUMBLE AFTER ";
    0x57ee261668f0 ---------A   01230  GOTO 2230
    0x57ee26166a40 ---------A T 01240  PRINT "***  FUMBLE."
    0x57ee26166ac0 ---------A   01250  GOTO 2450
    0x57ee26166b30 ---------A T 01260  REM  SHORT PASS
    0x57ee261672b0 ---------A   01270  LET Y=INT(60*(R1-.5)^3+10)
    0x57ee26167500 ---------A   01280  IF R<.05 THEN 1330
    0x57ee26167760 ---------A   01290  IF R<.15 THEN 1390
    0x57ee261679d0 ---------A   01300  IF R<.55 THEN 1420
    0x57ee26167b50 ---------A T 01310  PRINT "COMPLETE.  ";
    0x57ee26167bd0 ---------A   01320  GOTO 2190
    0x57ee26167e30 ---------A T 01330  IF D=4 THEN 1420
    0x57ee26167f90 ---------A   01340  PRINT "INTERCEPTED."
    0x57ee261681b0 ---------A T 01350  LET F=-1
    0x57ee261686f0 ---------A   01360  LET X=X+FNF(1)*Y
    0x57ee26168b20 ---------A   01370  IF ABS(X-50)>=50 THEN 2450
    0x57ee26168bb0 ---------A   01380  GOTO 2300
    0x57ee26168d20 ---------A T 01390  PRINT "PASSER TACKLED.  ";
    0x57ee26169140 ---------A   01400  LET Y=-INT(10*R1)
    0x57ee261691b0 ---------A   01410  GOTO 2190
    0x57ee261693d0 ---------A T 01420  LET Y=0
    0x57ee261696f0 ---------A   01430  IF RND(1)<.3 THEN 1460
    0x57ee26169870 ---------A   01440  PRINT "INCOMPLETE.  ";
    0x57ee26169900 ---------A   01450  GOTO 2190
    0x57ee26169a70 ---------A T 01460  PRINT "BATTED DOWN.  ";
    0x57ee26169af0 ---------A   01470  GOTO 2190
    0x57ee2616a370 ---------A T 01480  REM  LONG PASS
    0x57ee2616aaf0 ---------A   01490  LET Y=INT(160*(R1-.5)^3+30)
    0x57ee2616ad40 ---------A   01500  IF R<.1 THEN 1330
    0x57ee2616afa0 ---------A   01510  IF R<.3 THEN 1540
    0x57ee2616b200 ---------A   01520  IF R<.75 THEN 1420
    0x57ee2616b290 ---------A   01530  GOTO 1310
    0x57ee2616b410 ---------A T 01540  PRINT "PASSER TACKLED.  ";
    0x57ee2616b930 ---------A   01550  LET Y=-INT(15*R1+3)
    0x57ee2616b9a0 ---------A   01560  GOTO 2190
    0x57ee2616ba10 ---------A T 01570  REM  PUNT OR KICK
    0x57ee2616c190 ---------A   01580  LET Y=INT(100*(R-.5)^3+35)
    0x57ee2616c3e0 ---------A   01590  IF D=4 THEN 1610
    0x57ee2616c810 ---------A   01600  LET Y=INT(Y*1.3)
    0x57ee2616cc40 ---------A T 01610  PRINT Y;L$(3);" PUNT"
    0x57ee2616d380 ---------A   01620  IF ABS(X+Y*FNF(1)-50)>=50 THEN 1670
    0x57ee2616d5f0 ---------A   01630  IF D<4 THEN 1670
    0x57ee2616dbe0 ---------A   01640  LET Y1=INT(R1^2*20)
    0x57ee2616dff0 ---------A   01650  PRINT Y1;L$(3);" RUN BACK"
    0x57ee2616e350 ---------A   01660  LET Y=Y-Y1
    0x57ee2616e3c0 ---------A T 01670  GOTO 1350
    0x57ee2616e430 ---------A T 01680  REM  PLACE KICK
    0x57ee2616ebc0 ---------A   01690  LET Y=INT(100*(R-.5)^3+35)
    0x57ee2616ee20 ---------A   01700  IF R1>.15 THEN 1740
    0x57ee2616ef80 ---------A   01710  PRINT "KICK IS BLOCKED  ***"
    0x57ee2616f4a0 ---------A   01720  LET X=X-5*FNF(1)
    0x57ee2616f7d0 ---------A   01730  LET P=1-P
    0x57ee2616f840 ---------A T 01740  GOTO 720
    0x57ee2616fd80 ----------   01750  LET X=X+FNF(1)*Y
    0x57ee261701c0 ----------   01760  IF ABS(X-50)>=60 THEN 1810
    0x57ee26170330 ----------   01770  PRINT "KICK IS SHORT."
    0x57ee26170770 ----------   01780  IF ABS(X-50)>=50 THEN 2710
    0x57ee26170ab0 ----------   01790  P=1-P
    0x57ee26170b20 ----------   01800  GOTO 630
    0x57ee26170d80 ---------- T 01810  IF R1>.5 THEN 1840
    0x57ee26170ef0 ----------   01820  PRINT "KICK IS OFF TO THE SIDE."
    0x57ee26170f80 ----------   01830  GOTO 2710
    0x57ee261710d0 ---------- T 01840  PRINT "FIELD GOAL ***"
    0x57ee261715d0 ----------   01850  LET S(P)=S(P)+3
    0x57ee26171650 ----------   01860  GOTO 2640
    0x57ee261716c0 ---------A T 01870  REM  OPPONENT'S PLAY
    0x57ee26171940 ---------A   01880  IF D>1 THEN 1940
    0x57ee26171d60 ---------A T 01890  IF RND(1)>1/3 THEN 1920
    0x57ee26171f80 ---------A   01900  LET Z=3
    0x57ee26171ff0 ---------A   01910  GOTO 1010
    0x57ee26172200 ---------A T 01920  LET Z=1
    0x57ee26172270 ---------A   01930  GOTO 1010
    0x57ee261724d0 ---------A T 01940  IF D=4 THEN 2090
    0x57ee26172950 ---------A   01950  IF 10+X-X1<5 THEN 1890
    0x57ee26172bb0 ---------A   01960  IF X<5 THEN 1890
    0x57ee26172e10 ---------A   01970  IF X<=10 THEN 2160
    0x57ee261730a0 ---------A   01980  IF X>X1 THEN 2020
    0x57ee26173640 ---------A T 01990  LET A=INT(2*RND(1))
    0x57ee26173a70 ---------A   02000  LET Z=2+A*2
    0x57ee26173ae0 ---------A   02010  GOTO 1010
    0x57ee26173d30 ---------A T 02020  IF D<3 THEN 1990
    0x57ee26173fa0 ---------A   02030  IF X<45 THEN 1990
    0x57ee261743c0 ---------A   02040  IF RND(1)>1/4 THEN 2070
    0x57ee261745e0 ---------A   02050  LET Z=6
    0x57ee26174650 ---------A   02060  GOTO 1010
    0x57ee26174860 ---------A T 02070  LET Z=4
    0x57ee261748d0 ---------A   02080  GOTO 1010
    0x57ee26174b30 ---------A T 02090  IF X>30 THEN 2140
    0x57ee26174fb0 ---------A   02100  IF 10+X-X1<3 THEN 1890
    0x57ee26175210 ---------A   02110  IF X<3 THEN 1890
    0x57ee26175430 ---------A   02120  LET Z=7
    0x57ee261754a0 ---------A   02130  GOTO 1010
    0x57ee261756b0 ---------A T 02140  LET Z=5
    0x57ee26175730 ---------A   02150  GOTO 1010
    0x57ee26175c00 ---------A T 02160  LET A=INT(2*RND(1))
    0x57ee26175f30 ---------A   02170  LET Z=2+A
    0x57ee26175fa0 ---------A   02180  GOTO 1010
    0x57ee26176010 ---------A T 02190  REM GAIN OR LOSS
    0x57ee26176260 ---------A   02200  LET X3=X
    0x57ee261767a0 ---------A   02210  LET X=X+FNF(1)*Y
    0x57ee26176bd0 ---------A   02220  IF ABS(X-50)>=50 THEN 2450
    0x57ee26176e40 ---------A T 02230  IF Y=0 THEN 2250
    0x57ee26177270 ---------A   02240  PRINT ABS(Y);L$(3);
    0x57ee261776a0 ---------A T 02250  PRINT L$(15+SGN(Y))
    0x57ee26177af0 ---------A   02280  IF ABS(X3-50)>40 THEN 2300
    0x57ee26177e10 ---------A   02290  IF RND(1)<.1 THEN 2860
    0x57ee26177e90 ---------A T 02300  GOSUB 800
    0x57ee261780e0 ---------A   02310  IF F=0 THEN 2340
    0x57ee26178420 ---------A T 02320  LET P=1-P
    0x57ee261784a0 ---------A   02330  GOTO 740
    0x57ee261787b0 ---------A T 02340  IF FNG(1)>=10 THEN 740
    0x57ee26178a10 ---------A   02350  IF D=4 THEN 2320
    0x57ee26178d60 ---------A   02360  LET D=D+1
    0x57ee261790e0 ---------A   02370  PRINT "DOWN: ";D;"     ";
    0x57ee26179660 ---------A   02380  IF (X1-50)*FNF(1)<40 THEN 2410
    0x57ee261797c0 ---------A   02390  PRINT "GOAL TO GO"
    0x57ee26179850 ---------A   02400  GOTO 2420
    0x57ee26179c60 ---------A T 02410  PRINT "YARDS TO GO: ";10-FNG(1)
    0x57ee26179ce0 ---------A T 02420  PRINT
    0x57ee26179d60 ---------A   02430  PRINT
    0x57ee26179df0 ---------A   02440  GOTO 860
    0x57ee26179e60 ---------A T 02450  REM BALL IN END-ZONE
    0x57ee2617a0e0 ---------A   02460  IF X>=100 THEN 2490
    0x57ee2617a300 ---------A   02470  LET E=0
    0x57ee2617a370 ---------A   02480  GOTO 2500
    0x57ee2617a5b0 ---------A T 02490  LET E=1
    0x57ee2617b240 ---------A T 02500  ON 1+E-F*2+P*4 GOTO 2510,2590,2760,2710,2590,2510,2710,2760
    0x57ee2617b2c0 ---------A T 02510  REM SAFETY
    0x57ee2617b9e0 ---------A   02520  LET S(1-P)=S(1-P)+2
    0x57ee2617bbf0 ---------A   02530  PRINT L$(19)
    0x57ee2617bc90 ---------A   02540  GOSUB 2800
    0x57ee2617bfd0 ---------A   02550  PRINT O$(P);" KICKS OFF FROM ITS 20 YARD LINE."
    0x57ee2617c410 ---------A   02560  LET X=20+P*60
    0x57ee2617c740 ---------A   02570  LET P=1-P
    0x57ee2617c7b0 ---------A   02580  GOTO 590
    0x57ee2617c820 ---------A T 02590  REM OFFENSIVE TD
    0x57ee2617cb60 ---------A T 02600  PRINT L$(17);"***"
    0x57ee2617ce80 ---------A   02610  IF RND(1)>.8 THEN 2680
    0x57ee2617d390 ---------A   02620  LET S(P)=S(P)+7
    0x57ee2617d4e0 ---------A   02630  PRINT "KICK IS GOOD."
    0x57ee2617d570 ---------A T 02640  GOSUB 2800
    0x57ee2617d8a0 ---------A   02650  PRINT O$(P);" KICKS OFF"
    0x57ee2617dbe0 ---------A   02660  LET P=1-P
    0x57ee2617dc60 ---------A   02670  GOTO 580
    0x57ee2617ddc0 ---------A T 02680  PRINT "KICK IS OFF TO THE SIDE"
    0x57ee2617e2c0 ---------A   02690  LET S(P)=S(P)+6
    0x57ee2617e330 ---------A   02700  GOTO 2640
    0x57ee2617e3a0 ---------A T 02710  REM TOUCHBACK
    0x57ee2617e5d0 ---------A   02720  PRINT L$(18)
    0x57ee2617e910 ---------A   02730  LET P=1-P
    0x57ee2617ed40 ---------A   02740  LET X=20+P*60
    0x57ee2617edb0 ---------A   02750  GOTO 720
    0x57ee2617ee20 ---------A T 02760  REM DEFENSIVE TD
    0x57ee2617f540 ---------A   02770  PRINT L$(17);"FOR ";O$(1-P);"***"
    0x57ee26169e20 ---------A   02780  LET P=1-P
    0x57ee26169e90 ---------A   02790  GOTO 2600
    0x57ee26169f00 ---------C G 02800  REM SCORE
    0x57ee26169fa0 ---------C   02810  PRINT
    0x57ee261807f0 ---------C   02820  PRINT "SCORE:  ";S(0);" TO ";S(1)
    0x57ee26180870 ---------C   02830  PRINT
    0x57ee261808f0 ---------C   02840  PRINT
    0x57ee26180950 ---------C   02850  RETURN
    0x57ee261809d0 ---------A T 02860  REM PENALTY
    0x57ee26180fb0 ---------A   02870  LET P3=INT(2*RND(1))
    0x57ee261812f0 ---------A   02880  PRINT O$(P3);" OFFSIDES -- PENALTY OF 5 YARDS."
    0x57ee26181370 ---------A   02890  PRINT
    0x57ee261813f0 ---------A   02900  PRINT
    0x57ee26181660 ---------A   02910  IF P3=0 THEN 2980
    0x57ee261817f0 ---------A   02920  PRINT "DO YOU ACCEPT THE PENALTY";
    0x57ee26181960 ---------A T 02930  INPUT A$
    0x57ee26181bf0 ---------A   02940  IF A$="NO" THEN 2300
    0x57ee26181e80 ---------A   02950  IF A$="YES" THEN 3110
    0x57ee26182000 ---------A   02960  PRINT "TYPE 'YES' OR 'NO'";
    0x57ee26182090 ---------A   02970  GOTO 2930
    0x57ee26182110 ---------A T 02980  REM OPPONENT'S STRATEGY ON PENALTY
    0x57ee26182380 ---------A   02990  IF P=1 THEN 3040
    0x57ee261825e0 ---------A   03000  IF Y<=0 THEN 3080
    0x57ee26182850 ---------A   03010  IF F<0 THEN 3080
    0x57ee26182d90 ---------A   03020  IF FNG(1)<3*D-2 THEN 3080
    0x57ee26182e10 ---------A   03030  GOTO 3100
    0x57ee26183060 ---------A T 03040  IF Y<=5 THEN 3100
    0x57ee261832c0 ---------A   03050  IF F<0 THEN 3100
    0x57ee26183530 ---------A   03060  IF D<4 THEN 3080
    0x57ee26183860 ---------A   03070  IF FNG(1)<10 THEN 3100
    0x57ee261839c0 ---------A T 03080  PRINT "PENALTY REFUSED."
    0x57ee26183a50 ---------A   03090  GOTO 2300
    0x57ee26183ba0 ---------A T 03100  PRINT "PENALTY ACCEPTED."
    0x57ee26183dc0 ---------A T 03110  LET F=0
    0x57ee261840f0 ---------A   03120  LET D=D-1
    0x57ee26184360 ---------A   03130  IF P<>P3 THEN 3160
    0x57ee26184880 ---------A   03140  LET X=X3-FNF(1)*5
    0x57ee261848f0 ---------A   03150  GOTO 2300
    0x57ee26184e00 ---------A T 03160  LET X=X3+FNF(1)*5
    0x57ee26184e70 ---------A   03170  GOTO 2300
    0x57ee26184ec0 ---------A   03180  END
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
   A) 0x57ee2614b6d0 (00010)   0x57ee2614b6d0 (00010)   0x57ee26184ec0 (03180)   0x57ee26184ec0 (03180)   
   B) 0x57ee2615e470 (00800)   0x57ee2615e470 (00800)   0x57ee2615fa20 (00850)   0x57ee2615fa20 (00850)   
   C) 0x57ee26169f00 (02800)   0x57ee26169f00 (02800)   0x57ee26180950 (02850)   0x57ee26180950 (02850)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/footbal1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57ee2614b6d0 ---------A   00010  PRINT TAB(33);"FTBALL"
    0x57ee2614b670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57ee2613c2b0 ----------   00030  PRINT
    0x57ee2614b9e0 ---------A        a PRINT
    0x57ee2614daa0 ----------   00220  PRINT "THIS IS DARTMOUTH CHAMPIONSHIP FOOTBALL."
    0x57ee2614db00 ---------A        a PRINT
    0x57ee2614c080 ---------A   00230  PRINT "YOU WILL QUARTERBACK DARTMOUTH. CALL PLAYS AS FOLLOWS:"
    0x57ee2614c4d0 ---------A   00240  PRINT "1= SIMPLE RUN; 2= TRICKY RUN; 3= SHORT PASS;"
    0x57ee2614bbe0 ---------A   00250  PRINT "4= LONG PASS; 5= PUNT; 6= QUICK KICK; 7= PLACE KICK."
    0x57ee2614bc40 ---------A   00260  PRINT
    0x57ee2614bca0 ---------A   00270  PRINT "CHOOSE YOUR OPPONENT";
    0x57ee2614c880 ---------A   00280  INPUT O$(1)
    0x57ee2614e0b0 ---------A   00290  O$(0)="DARTMOUTH"
    0x57ee26153aa0 ---------A   00300  PRINT
    0x57ee26153de0 ----------   00310  LET S(0)=0
    0x57ee26154070 ---------A        a LET S(1)=0
    0x57ee261540c0 ---------A   00320  REM
    0x57ee26154330 ---------A   00330  DIM L$(20)
    0x57ee26154660 ----------   00340  FOR I=1 TO 20
    0x57ee26154880 ----------        a READ L$(I)
    0x57ee261549b0 ---------A        b NEXT I
    0x57ee26154f00 ---------A   00350  DATA "KICK","RECEIVE"," YARD ","RUN BACK FOR ","BALL ON "
    0x57ee26155320 ---------A   00360  DATA "YARD LINE"," SIMPLE RUN"," TRICKY RUN"," SHORT PASS"
    0x57ee26155820 ---------A   00370  DATA " LONG PASS","PUNT"," QUICK KICK "," PLACE KICK"," LOSS "
    0x57ee26155cf0 ---------A   00380  DATA " NO GAIN","GAIN "," TOUCHDOWN "," TOUCHBACK ","SAFETY***"
    0x57ee26155e40 ---------A   00385  DATA "JUNK"
    0x57ee261563b0 ---------A   00390  LET P=INT(RND(1)*2)
    0x57ee261566e0 ---------A   00400  PRINT O$(P);" WON THE TOSS"
    0x57ee26156d60 ---------A   00410  DEF FNF(X)=1-2*P
    0x57ee26157a10 ---------A   00420  DEF FNG(Z)=P*(X1-X)+(1-P)*(X-X1)
    0x57ee26157c40 ---------A   00430  IF P=0 THEN 470
    0x57ee26157f60 ---------A   00440  PRINT O$(1);" ELECTS TO RECEIVE."
    0x57ee26157fe0 ---------A   00450  PRINT
    0x57ee26158080 ---------A   00460  GOTO 580
    0x57ee261581d0 ---------A T 00470  PRINT "DO YOU ELECT TO KICK OR RECEIVE";
    0x57ee261583f0 ---------A T 00480  INPUT A$
    0x57ee26158470 ---------A   00490  PRINT
    0x57ee261587f0 ---------A   00500  FOR E=1 TO 2
    0x57ee26158d60 ---------A   00510  IF A$=L$(E) THEN 550
    0x57ee26158ea0 ---------A   00520  NEXT E
    0x57ee26159080 ---------A   00530  PRINT "INCORRECT ANSWER.  PLEASE TYPE 'KICK' OR 'RECIEVE'";
    0x57ee26159100 ---------A   00540  GOTO 480
    0x57ee26159350 ---------A T 00550  IF E=2 THEN 580
    0x57ee26159570 ---------A   00560  LET P=1
    0x57ee26159af0 ---------A T 00580  LET X=40+(1-P)*20
    0x57ee2615a3d0 ---------A T 00590  LET Y=INT(200*(RND(1)-.5)^3+55)
    0x57ee2615a7e0 ---------A   00600  PRINT Y;L$(3);" KICKOFF"
    0x57ee2615ad30 ---------A   00610  LET X=X-FNF(1)*Y
    0x57ee2615b180 ---------A   00620  IF ABS(X-50)>=50 THEN 700
    0x57ee2615be80 ---------A T 00630  LET Y=INT(50*RND(1)^2)+(1-P)*INT(50*RND(1)^4)
    0x57ee2615c3c0 ---------A   00640  LET X=X+FNF(1)*Y
    0x57ee2615c800 ---------A   00650  IF ABS(X-50)>=50 THEN 655
    0x57ee2615cc20 ---------A   00651  PRINT Y;L$(3);" RUNBACK"
    0x57ee2615cca0 ---------A   00652  GOTO 720
    0x57ee2615ced0 ---------A T 00655  PRINT L$(4);
    0x57ee2615cf60 ---------A   00660  GOTO 2600
    0x57ee2615d390 ---------A T 00700  PRINT "TOUCHBACK FOR ";O$(P);"."
    0x57ee2615d7d0 ---------A   00710  LET X=20+P*60
    0x57ee2615d840 ---------A T 00720  REM FIRST DOWN
    0x57ee2615d8d0 ---------A   00730  GOSUB 800
    0x57ee2615db00 ---------A T 00740  LET X1=X
    0x57ee2615ddf0 ---------A   00750  LET D=1
    0x57ee2615de40 ----------   00760  PRINT
    0x57ee2615e280 ---------A        a PRINT "FIRST DOWN ";O$(P);"***"
    0x57ee2615e300 ---------A   00770  PRINT
    0x57ee2615e380 ---------A   00780  PRINT
    0x57ee2615e400 ---------A   00790  GOTO 860
    0x57ee2615e470 ---------B G 00800  REM PRINT POSITION
    0x57ee2615e6f0 ---------B   00810  IF X>50 THEN 840
    0x57ee2615ed90 ---------B   00820  PRINT L$(5);O$(0);X;L$(6)
    0x57ee2615ee20 ---------B   00830  GOTO 850
    0x57ee2615f9c0 ---------B T 00840  PRINT L$(5);O$(1);100-X;L$(6)
    0x57ee2615fa20 ---------B T 00850  RETURN
    0x57ee2615faa0 ---------A T 00860  REM NEW PLAY
    0x57ee2615feb0 ---------A   00870  LET T=T+1
    0x57ee26160100 ---------A   00880  IF T=30 THEN 1060
    0x57ee26160370 ---------A   00890  IF T<50 THEN 940
    0x57ee261606a0 ---------A   00900  IF RND(1)>.2 THEN 940
    0x57ee26160830 ---------A   00910  PRINT "END OF GAME  ***"
    0x57ee26161390 ---------A   00920  PRINT "FINAL SCORE:  ";O$(0);": ";S(0);"  ";O$(1);": ";S(1)
    0x57ee261613f0 ---------A   00930  STOP
    0x57ee26161650 ---------A T 00940  IF P=1 THEN 1870
    0x57ee261617d0 ---------A   00950  PRINT "NEXT PLAY";
    0x57ee26161940 ---------A T 00960  INPUT Z
    0x57ee26161cb0 ---------A   00970  IF Z<>INT(Z) THEN 990
    0x57ee26162110 ---------A   00980  IF ABS(Z-4)<=3 THEN 1010
    0x57ee261622a0 ---------A T 00990  PRINT "ILLEGAL PLAY NUMBER, RETYPE";
    0x57ee26162320 ---------A   01000  GOTO 960
    0x57ee26162600 ---------A T 01010  LET F=0
    0x57ee26162a60 ---------A   01020  PRINT L$(Z+6);".  ";
    0x57ee26163240 ---------A   01030  LET R=RND(1)*(.98+FNF(1)*.02)
    0x57ee26163610 ---------A   01040  LET R1=RND(1)
    0x57ee26163cb0 ---------A   01050  ON Z GOTO 1110,1150,1260,1480,1570,1570,1680
    0x57ee26163d30 ---------A T 01060  REM  JEAN'S SPECIAL
    0x57ee26164190 ---------A   01070  IF RND(1)> 1/3 THEN 940
    0x57ee26164300 ---------A   01080  PRINT "GAME DELAYED.  DOG ON FIELD."
    0x57ee26164380 ---------A   01090  PRINT
    0x57ee26164400 ---------A   01100  GOTO 940
    0x57ee26164470 ---------A T 01110  REM  SIMPLE RUN
    0x57ee26164c00 ---------A   01120  LET Y=INT(24*(R-.5)^3+3)
    0x57ee26164f10 ---------A   01130  IF RND(1)<.05 THEN 1180
    0x57ee26164f90 ---------A   01140  GOTO 2190
    0x57ee26165000 ---------A T 01150  REM  TRICKY RUN
    0x57ee26165540 ---------A   01160  LET Y=INT(20*R-5)
    0x57ee26165850 ---------A   01170  IF RND(1)>.1 THEN 2190
    0x57ee26165a70 ---------A T 01180  LET F=-1
    0x57ee26165d60 ---------A   01190  LET X3=X
    0x57ee261662a0 ---------A   01200  LET X=X+FNF(1)*Y
    0x57ee261666e0 ---------A   01210  IF ABS(X-50)>=50 THEN 1240
    0x57ee26166860 ---------A   01220  PRINT "***  FUMBLE AFTER ";
    0x57ee261668f0 ---------A   01230  GOTO 2230
    0x57ee26166a40 ---------A T 01240  PRINT "***  FUMBLE."
    0x57ee26166ac0 ---------A   01250  GOTO 2450
    0x57ee26166b30 ---------A T 01260  REM  SHORT PASS
    0x57ee261672b0 ---------A   01270  LET Y=INT(60*(R1-.5)^3+10)
    0x57ee26167500 ---------A   01280  IF R<.05 THEN 1330
    0x57ee26167760 ---------A   01290  IF R<.15 THEN 1390
    0x57ee261679d0 ---------A   01300  IF R<.55 THEN 1420
    0x57ee26167b50 ---------A T 01310  PRINT "COMPLETE.  ";
    0x57ee26167bd0 ---------A   01320  GOTO 2190
    0x57ee26167e30 ---------A T 01330  IF D=4 THEN 1420
    0x57ee26167f90 ---------A   01340  PRINT "INTERCEPTED."
    0x57ee261681b0 ---------A T 01350  LET F=-1
    0x57ee261686f0 ---------A   01360  LET X=X+FNF(1)*Y
    0x57ee26168b20 ---------A   01370  IF ABS(X-50)>=50 THEN 2450
    0x57ee26168bb0 ---------A   01380  GOTO 2300
    0x57ee26168d20 ---------A T 01390  PRINT "PASSER TACKLED.  ";
    0x57ee26169140 ---------A   01400  LET Y=-INT(10*R1)
    0x57ee261691b0 ---------A   01410  GOTO 2190
    0x57ee261693d0 ---------A T 01420  LET Y=0
    0x57ee261696f0 ---------A   01430  IF RND(1)<.3 THEN 1460
    0x57ee26169870 ---------A   01440  PRINT "INCOMPLETE.  ";
    0x57ee26169900 ---------A   01450  GOTO 2190
    0x57ee26169a70 ---------A T 01460  PRINT "BATTED DOWN.  ";
    0x57ee26169af0 ---------A   01470  GOTO 2190
    0x57ee2616a370 ---------A T 01480  REM  LONG PASS
    0x57ee2616aaf0 ---------A   01490  LET Y=INT(160*(R1-.5)^3+30)
    0x57ee2616ad40 ---------A   01500  IF R<.1 THEN 1330
    0x57ee2616afa0 ---------A   01510  IF R<.3 THEN 1540
    0x57ee2616b200 ---------A   01520  IF R<.75 THEN 1420
    0x57ee2616b290 ---------A   01530  GOTO 1310
    0x57ee2616b410 ---------A T 01540  PRINT "PASSER TACKLED.  ";
    0x57ee2616b930 ---------A   01550  LET Y=-INT(15*R1+3)
    0x57ee2616b9a0 ---------A   01560  GOTO 2190
    0x57ee2616ba10 ---------A T 01570  REM  PUNT OR KICK
    0x57ee2616c190 ---------A   01580  LET Y=INT(100*(R-.5)^3+35)
    0x57ee2616c3e0 ---------A   01590  IF D=4 THEN 1610
    0x57ee2616c810 ---------A   01600  LET Y=INT(Y*1.3)
    0x57ee2616cc40 ---------A T 01610  PRINT Y;L$(3);" PUNT"
    0x57ee2616d380 ---------A   01620  IF ABS(X+Y*FNF(1)-50)>=50 THEN 1670
    0x57ee2616d5f0 ---------A   01630  IF D<4 THEN 1670
    0x57ee2616dbe0 ---------A   01640  LET Y1=INT(R1^2*20)
    0x57ee2616dff0 ---------A   01650  PRINT Y1;L$(3);" RUN BACK"
    0x57ee2616e350 ---------A   01660  LET Y=Y-Y1
    0x57ee2616e3c0 ---------A T 01670  GOTO 1350
    0x57ee2616e430 ---------A T 01680  REM  PLACE KICK
    0x57ee2616ebc0 ---------A   01690  LET Y=INT(100*(R-.5)^3+35)
    0x57ee2616ee20 ---------A   01700  IF R1>.15 THEN 1740
    0x57ee2616ef80 ---------A   01710  PRINT "KICK IS BLOCKED  ***"
    0x57ee2616f4a0 ---------A   01720  LET X=X-5*FNF(1)
    0x57ee2616f7d0 ---------A   01730  LET P=1-P
    0x57ee2616f840 ---------A T 01740  GOTO 720
    0x57ee2616fd80 ----------   01750  LET X=X+FNF(1)*Y
    0x57ee261701c0 ----------   01760  IF ABS(X-50)>=60 THEN 1810
    0x57ee26170330 ----------   01770  PRINT "KICK IS SHORT."
    0x57ee26170770 ----------   01780  IF ABS(X-50)>=50 THEN 2710
    0x57ee26170ab0 ----------   01790  P=1-P
    0x57ee26170b20 ----------   01800  GOTO 630
    0x57ee26170d80 ---------- T 01810  IF R1>.5 THEN 1840
    0x57ee26170ef0 ----------   01820  PRINT "KICK IS OFF TO THE SIDE."
    0x57ee26170f80 ----------   01830  GOTO 2710
    0x57ee261710d0 ---------- T 01840  PRINT "FIELD GOAL ***"
    0x57ee261715d0 ----------   01850  LET S(P)=S(P)+3
    0x57ee26171650 ----------   01860  GOTO 2640
    0x57ee261716c0 ---------A T 01870  REM  OPPONENT'S PLAY
    0x57ee26171940 ---------A   01880  IF D>1 THEN 1940
    0x57ee26171d60 ---------A T 01890  IF RND(1)>1/3 THEN 1920
    0x57ee26171f80 ---------A   01900  LET Z=3
    0x57ee26171ff0 ---------A   01910  GOTO 1010
    0x57ee26172200 ---------A T 01920  LET Z=1
    0x57ee26172270 ---------A   01930  GOTO 1010
    0x57ee261724d0 ---------A T 01940  IF D=4 THEN 2090
    0x57ee26172950 ---------A   01950  IF 10+X-X1<5 THEN 1890
    0x57ee26172bb0 ---------A   01960  IF X<5 THEN 1890
    0x57ee26172e10 ---------A   01970  IF X<=10 THEN 2160
    0x57ee261730a0 ---------A   01980  IF X>X1 THEN 2020
    0x57ee26173640 ---------A T 01990  LET A=INT(2*RND(1))
    0x57ee26173a70 ---------A   02000  LET Z=2+A*2
    0x57ee26173ae0 ---------A   02010  GOTO 1010
    0x57ee26173d30 ---------A T 02020  IF D<3 THEN 1990
    0x57ee26173fa0 ---------A   02030  IF X<45 THEN 1990
    0x57ee261743c0 ---------A   02040  IF RND(1)>1/4 THEN 2070
    0x57ee261745e0 ---------A   02050  LET Z=6
    0x57ee26174650 ---------A   02060  GOTO 1010
    0x57ee26174860 ---------A T 02070  LET Z=4
    0x57ee261748d0 ---------A   02080  GOTO 1010
    0x57ee26174b30 ---------A T 02090  IF X>30 THEN 2140
    0x57ee26174fb0 ---------A   02100  IF 10+X-X1<3 THEN 1890
    0x57ee26175210 ---------A   02110  IF X<3 THEN 1890
    0x57ee26175430 ---------A   02120  LET Z=7
    0x57ee261754a0 ---------A   02130  GOTO 1010
    0x57ee261756b0 ---------A T 02140  LET Z=5
    0x57ee26175730 ---------A   02150  GOTO 1010
    0x57ee26175c00 ---------A T 02160  LET A=INT(2*RND(1))
    0x57ee26175f30 ---------A   02170  LET Z=2+A
    0x57ee26175fa0 ---------A   02180  GOTO 1010
    0x57ee26176010 ---------A T 02190  REM GAIN OR LOSS
    0x57ee26176260 ---------A   02200  LET X3=X
    0x57ee261767a0 ---------A   02210  LET X=X+FNF(1)*Y
    0x57ee26176bd0 ---------A   02220  IF ABS(X-50)>=50 THEN 2450
    0x57ee26176e40 ---------A T 02230  IF Y=0 THEN 2250
    0x57ee26177270 ---------A   02240  PRINT ABS(Y);L$(3);
    0x57ee261776a0 ---------A T 02250  PRINT L$(15+SGN(Y))
    0x57ee26177af0 ---------A   02280  IF ABS(X3-50)>40 THEN 2300
    0x57ee26177e10 ---------A   02290  IF RND(1)<.1 THEN 2860
    0x57ee26177e90 ---------A T 02300  GOSUB 800
    0x57ee261780e0 ---------A   02310  IF F=0 THEN 2340
    0x57ee26178420 ---------A T 02320  LET P=1-P
    0x57ee261784a0 ---------A   02330  GOTO 740
    0x57ee261787b0 ---------A T 02340  IF FNG(1)>=10 THEN 740
    0x57ee26178a10 ---------A   02350  IF D=4 THEN 2320
    0x57ee26178d60 ---------A   02360  LET D=D+1
    0x57ee261790e0 ---------A   02370  PRINT "DOWN: ";D;"     ";
    0x57ee26179660 ---------A   02380  IF (X1-50)*FNF(1)<40 THEN 2410
    0x57ee261797c0 ---------A   02390  PRINT "GOAL TO GO"
    0x57ee26179850 ---------A   02400  GOTO 2420
    0x57ee26179c60 ---------A T 02410  PRINT "YARDS TO GO: ";10-FNG(1)
    0x57ee26179ce0 ---------A T 02420  PRINT
    0x57ee26179d60 ---------A   02430  PRINT
    0x57ee26179df0 ---------A   02440  GOTO 860
    0x57ee26179e60 ---------A T 02450  REM BALL IN END-ZONE
    0x57ee2617a0e0 ---------A   02460  IF X>=100 THEN 2490
    0x57ee2617a300 ---------A   02470  LET E=0
    0x57ee2617a370 ---------A   02480  GOTO 2500
    0x57ee2617a5b0 ---------A T 02490  LET E=1
    0x57ee2617b240 ---------A T 02500  ON 1+E-F*2+P*4 GOTO 2510,2590,2760,2710,2590,2510,2710,2760
    0x57ee2617b2c0 ---------A T 02510  REM SAFETY
    0x57ee2617b9e0 ---------A   02520  LET S(1-P)=S(1-P)+2
    0x57ee2617bbf0 ---------A   02530  PRINT L$(19)
    0x57ee2617bc90 ---------A   02540  GOSUB 2800
    0x57ee2617bfd0 ---------A   02550  PRINT O$(P);" KICKS OFF FROM ITS 20 YARD LINE."
    0x57ee2617c410 ---------A   02560  LET X=20+P*60
    0x57ee2617c740 ---------A   02570  LET P=1-P
    0x57ee2617c7b0 ---------A   02580  GOTO 590
    0x57ee2617c820 ---------A T 02590  REM OFFENSIVE TD
    0x57ee2617cb60 ---------A T 02600  PRINT L$(17);"***"
    0x57ee2617ce80 ---------A   02610  IF RND(1)>.8 THEN 2680
    0x57ee2617d390 ---------A   02620  LET S(P)=S(P)+7
    0x57ee2617d4e0 ---------A   02630  PRINT "KICK IS GOOD."
    0x57ee2617d570 ---------A T 02640  GOSUB 2800
    0x57ee2617d8a0 ---------A   02650  PRINT O$(P);" KICKS OFF"
    0x57ee2617dbe0 ---------A   02660  LET P=1-P
    0x57ee2617dc60 ---------A   02670  GOTO 580
    0x57ee2617ddc0 ---------A T 02680  PRINT "KICK IS OFF TO THE SIDE"
    0x57ee2617e2c0 ---------A   02690  LET S(P)=S(P)+6
    0x57ee2617e330 ---------A   02700  GOTO 2640
    0x57ee2617e3a0 ---------A T 02710  REM TOUCHBACK
    0x57ee2617e5d0 ---------A   02720  PRINT L$(18)
    0x57ee2617e910 ---------A   02730  LET P=1-P
    0x57ee2617ed40 ---------A   02740  LET X=20+P*60
    0x57ee2617edb0 ---------A   02750  GOTO 720
    0x57ee2617ee20 ---------A T 02760  REM DEFENSIVE TD
    0x57ee2617f540 ---------A   02770  PRINT L$(17);"FOR ";O$(1-P);"***"
    0x57ee26169e20 ---------A   02780  LET P=1-P
    0x57ee26169e90 ---------A   02790  GOTO 2600
    0x57ee26169f00 ---------C G 02800  REM SCORE
    0x57ee26169fa0 ---------C   02810  PRINT
    0x57ee261807f0 ---------C   02820  PRINT "SCORE:  ";S(0);" TO ";S(1)
    0x57ee26180870 ---------C   02830  PRINT
    0x57ee261808f0 ---------C   02840  PRINT
    0x57ee26180950 ---------C   02850  RETURN
    0x57ee261809d0 ---------A T 02860  REM PENALTY
    0x57ee26180fb0 ---------A   02870  LET P3=INT(2*RND(1))
    0x57ee261812f0 ---------A   02880  PRINT O$(P3);" OFFSIDES -- PENALTY OF 5 YARDS."
    0x57ee26181370 ---------A   02890  PRINT
    0x57ee261813f0 ---------A   02900  PRINT
    0x57ee26181660 ---------A   02910  IF P3=0 THEN 2980
    0x57ee261817f0 ---------A   02920  PRINT "DO YOU ACCEPT THE PENALTY";
    0x57ee26181960 ---------A T 02930  INPUT A$
    0x57ee26181bf0 ---------A   02940  IF A$="NO" THEN 2300
    0x57ee26181e80 ---------A   02950  IF A$="YES" THEN 3110
    0x57ee26182000 ---------A   02960  PRINT "TYPE 'YES' OR 'NO'";
    0x57ee26182090 ---------A   02970  GOTO 2930
    0x57ee26182110 ---------A T 02980  REM OPPONENT'S STRATEGY ON PENALTY
    0x57ee26182380 ---------A   02990  IF P=1 THEN 3040
    0x57ee261825e0 ---------A   03000  IF Y<=0 THEN 3080
    0x57ee26182850 ---------A   03010  IF F<0 THEN 3080
    0x57ee26182d90 ---------A   03020  IF FNG(1)<3*D-2 THEN 3080
    0x57ee26182e10 ---------A   03030  GOTO 3100
    0x57ee26183060 ---------A T 03040  IF Y<=5 THEN 3100
    0x57ee261832c0 ---------A   03050  IF F<0 THEN 3100
    0x57ee26183530 ---------A   03060  IF D<4 THEN 3080
    0x57ee26183860 ---------A   03070  IF FNG(1)<10 THEN 3100
    0x57ee261839c0 ---------A T 03080  PRINT "PENALTY REFUSED."
    0x57ee26183a50 ---------A   03090  GOTO 2300
    0x57ee26183ba0 ---------A T 03100  PRINT "PENALTY ACCEPTED."
    0x57ee26183dc0 ---------A T 03110  LET F=0
    0x57ee261840f0 ---------A   03120  LET D=D-1
    0x57ee26184360 ---------A   03130  IF P<>P3 THEN 3160
    0x57ee26184880 ---------A   03140  LET X=X3-FNF(1)*5
    0x57ee261848f0 ---------A   03150  GOTO 2300
    0x57ee26184e00 ---------A T 03160  LET X=X3+FNF(1)*5
    0x57ee26184e70 ---------A   03170  GOTO 2300
    0x57ee26184ec0 ---------A   03180  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/footbal1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57ee2614b6d0 ---------A   01000  PRINT TAB(33);"FTBALL"
    0x57ee2614b670 ---------A T 01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57ee2613c2b0 ----------   01020  PRINT
    0x57ee2614b9e0 ---------A   01030  PRINT
    0x57ee2614daa0 ----------   01040  PRINT "THIS IS DARTMOUTH CHAMPIONSHIP FOOTBALL."
    0x57ee2614db00 ---------A   01050  PRINT
    0x57ee2614c080 ---------A T 01060  PRINT "YOU WILL QUARTERBACK DARTMOUTH. CALL PLAYS AS FOLLOWS:"
    0x57ee2614c4d0 ---------A   01070  PRINT "1= SIMPLE RUN; 2= TRICKY RUN; 3= SHORT PASS;"
    0x57ee2614bbe0 ---------A   01080  PRINT "4= LONG PASS; 5= PUNT; 6= QUICK KICK; 7= PLACE KICK."
    0x57ee2614bc40 ---------A   01090  PRINT
    0x57ee2614bca0 ---------A   01100  PRINT "CHOOSE YOUR OPPONENT";
    0x57ee2614c880 ---------A T 01110  INPUT O$(1)
    0x57ee2614e0b0 ---------A   01120  O$(0)="DARTMOUTH"
    0x57ee26153aa0 ---------A   01130  PRINT
    0x57ee26153de0 ----------   01140  LET S(0)=0
    0x57ee26154070 ---------A T 01150  LET S(1)=0
    0x57ee261540c0 ---------A   01160  REM
    0x57ee26154330 ---------A   01170  DIM L$(20)
    0x57ee26154660 ---------- T 01180  FOR I=1 TO 20
    0x57ee26154880 ----------   01190  READ L$(I)
    0x57ee261549b0 ---------A   01200  NEXT I
    0x57ee26154f00 ---------A   01210  DATA "KICK","RECEIVE"," YARD ","RUN BACK FOR ","BALL ON "
    0x57ee26155320 ---------A   01220  DATA "YARD LINE"," SIMPLE RUN"," TRICKY RUN"," SHORT PASS"
    0x57ee26155820 ---------A   01230  DATA " LONG PASS","PUNT"," QUICK KICK "," PLACE KICK"," LOSS "
    0x57ee26155cf0 ---------A T 01240  DATA " NO GAIN","GAIN "," TOUCHDOWN "," TOUCHBACK ","SAFETY***"
    0x57ee26155e40 ---------A   01250  DATA "JUNK"
    0x57ee261563b0 ---------A T 01260  LET P=INT(RND(1)*2)
    0x57ee261566e0 ---------A   01270  PRINT O$(P);" WON THE TOSS"
    0x57ee26156d60 ---------A   01280  DEF FNF(X)=1-2*P
    0x57ee26157a10 ---------A   01290  DEF FNG(Z)=P*(X1-X)+(1-P)*(X-X1)
    0x57ee26157c40 ---------A   01300  IF P=0 THEN 1340
    0x57ee26157f60 ---------A T 01310  PRINT O$(1);" ELECTS TO RECEIVE."
    0x57ee26157fe0 ---------A   01320  PRINT
    0x57ee26158080 ---------A T 01330  GOTO 1440
    0x57ee261581d0 ---------A   01340  PRINT "DO YOU ELECT TO KICK OR RECEIVE";
    0x57ee261583f0 ---------A T 01350  INPUT A$
    0x57ee26158470 ---------A   01360  PRINT
    0x57ee261587f0 ---------A   01370  FOR E=1 TO 2
    0x57ee26158d60 ---------A   01380  IF A$=L$(E) THEN 1420
    0x57ee26158ea0 ---------A T 01390  NEXT E
    0x57ee26159080 ---------A   01400  PRINT "INCORRECT ANSWER.  PLEASE TYPE 'KICK' OR 'RECIEVE'";
    0x57ee26159100 ---------A   01410  GOTO 1350
    0x57ee26159350 ---------A T 01420  IF E=2 THEN 1440
    0x57ee26159570 ---------A   01430  LET P=1
    0x57ee26159af0 ---------A   01440  LET X=40+(1-P)*20
    0x57ee2615a3d0 ---------A   01450  LET Y=INT(200*(RND(1)-.5)^3+55)
    0x57ee2615a7e0 ---------A T 01460  PRINT Y;L$(3);" KICKOFF"
    0x57ee2615ad30 ---------A   01470  LET X=X-FNF(1)*Y
    0x57ee2615b180 ---------A T 01480  IF ABS(X-50)>=50 THEN 1560
    0x57ee2615be80 ---------A   01490  LET Y=INT(50*RND(1)^2)+(1-P)*INT(50*RND(1)^4)
    0x57ee2615c3c0 ---------A   01500  LET X=X+FNF(1)*Y
    0x57ee2615c800 ---------A   01510  IF ABS(X-50)>=50 THEN 1540
    0x57ee2615cc20 ---------A   01520  PRINT Y;L$(3);" RUNBACK"
    0x57ee2615cca0 ---------A   01530  GOTO 1580
    0x57ee2615ced0 ---------A T 01540  PRINT L$(4);
    0x57ee2615cf60 ---------A   01550  GOTO 3450
    0x57ee2615d390 ---------A   01560  PRINT "TOUCHBACK FOR ";O$(P);"."
    0x57ee2615d7d0 ---------A T 01570  LET X=20+P*60
    0x57ee2615d840 ---------A   01580  REM FIRST DOWN
    0x57ee2615d8d0 ---------A   01590  GOSUB 1670
    0x57ee2615db00 ---------A   01600  LET X1=X
    0x57ee2615ddf0 ---------A T 01610  LET D=1
    0x57ee2615de40 ----------   01620  PRINT
    0x57ee2615e280 ---------A   01630  PRINT "FIRST DOWN ";O$(P);"***"
    0x57ee2615e300 ---------A   01640  PRINT
    0x57ee2615e380 ---------A   01650  PRINT
    0x57ee2615e400 ---------A   01660  GOTO 1730
    0x57ee2615e470 ---------B T 01670  REM PRINT POSITION
    0x57ee2615e6f0 ---------B T 01680  IF X>50 THEN 1710
    0x57ee2615ed90 ---------B   01690  PRINT L$(5);O$(0);X;L$(6)
    0x57ee2615ee20 ---------B   01700  GOTO 1720
    0x57ee2615f9c0 ---------B   01710  PRINT L$(5);O$(1);100-X;L$(6)
    0x57ee2615fa20 ---------B   01720  RETURN
    0x57ee2615faa0 ---------A   01730  REM NEW PLAY
    0x57ee2615feb0 ---------A T 01740  LET T=T+1
    0x57ee26160100 ---------A   01750  IF T=30 THEN 1930
    0x57ee26160370 ---------A   01760  IF T<50 THEN 1810
    0x57ee261606a0 ---------A   01770  IF RND(1)>.2 THEN 1810
    0x57ee26160830 ---------A   01780  PRINT "END OF GAME  ***"
    0x57ee26161390 ---------A   01790  PRINT "FINAL SCORE:  ";O$(0);": ";S(0);"  ";O$(1);": ";S(1)
    0x57ee261613f0 ---------A   01800  STOP
    0x57ee26161650 ---------A T 01810  IF P=1 THEN 2740
    0x57ee261617d0 ---------A   01820  PRINT "NEXT PLAY";
    0x57ee26161940 ---------A   01830  INPUT Z
    0x57ee26161cb0 ---------A T 01840  IF Z<>INT(Z) THEN 1860
    0x57ee26162110 ---------A   01850  IF ABS(Z-4)<=3 THEN 1880
    0x57ee261622a0 ---------A   01860  PRINT "ILLEGAL PLAY NUMBER, RETYPE";
    0x57ee26162320 ---------A T 01870  GOTO 1830
    0x57ee26162600 ---------A   01880  LET F=0
    0x57ee26162a60 ---------A T 01890  PRINT L$(Z+6);".  ";
    0x57ee26163240 ---------A   01900  LET R=RND(1)*(.98+FNF(1)*.02)
    0x57ee26163610 ---------A   01910  LET R1=RND(1)
    0x57ee26163cb0 ---------A T 01920  ON Z GOTO 1980,2020,2130,2350,2440,2440,2550
    0x57ee26163d30 ---------A   01930  REM  JEAN'S SPECIAL
    0x57ee26164190 ---------A T 01940  IF RND(1)> 1/3 THEN 1810
    0x57ee26164300 ---------A   01950  PRINT "GAME DELAYED.  DOG ON FIELD."
    0x57ee26164380 ---------A   01960  PRINT
    0x57ee26164400 ---------A   01970  GOTO 1810
    0x57ee26164470 ---------A   01980  REM  SIMPLE RUN
    0x57ee26164c00 ---------A T 01990  LET Y=INT(24*(R-.5)^3+3)
    0x57ee26164f10 ---------A   02000  IF RND(1)<.05 THEN 2050
    0x57ee26164f90 ---------A   02010  GOTO 3060
    0x57ee26165000 ---------A T 02020  REM  TRICKY RUN
    0x57ee26165540 ---------A   02030  LET Y=INT(20*R-5)
    0x57ee26165850 ---------A   02040  IF RND(1)>.1 THEN 3060
    0x57ee26165a70 ---------A   02050  LET F=-1
    0x57ee26165d60 ---------A   02060  LET X3=X
    0x57ee261662a0 ---------A T 02070  LET X=X+FNF(1)*Y
    0x57ee261666e0 ---------A   02080  IF ABS(X-50)>=50 THEN 2110
    0x57ee26166860 ---------A T 02090  PRINT "***  FUMBLE AFTER ";
    0x57ee261668f0 ---------A   02100  GOTO 3100
    0x57ee26166a40 ---------A   02110  PRINT "***  FUMBLE."
    0x57ee26166ac0 ---------A   02120  GOTO 3300
    0x57ee26166b30 ---------A   02130  REM  SHORT PASS
    0x57ee261672b0 ---------A T 02140  LET Y=INT(60*(R1-.5)^3+10)
    0x57ee26167500 ---------A   02150  IF R<.05 THEN 2200
    0x57ee26167760 ---------A T 02160  IF R<.15 THEN 2260
    0x57ee261679d0 ---------A   02170  IF R<.55 THEN 2290
    0x57ee26167b50 ---------A   02180  PRINT "COMPLETE.  ";
    0x57ee26167bd0 ---------A T 02190  GOTO 3060
    0x57ee26167e30 ---------A   02200  IF D=4 THEN 2290
    0x57ee26167f90 ---------A   02210  PRINT "INTERCEPTED."
    0x57ee261681b0 ---------A   02220  LET F=-1
    0x57ee261686f0 ---------A T 02230  LET X=X+FNF(1)*Y
    0x57ee26168b20 ---------A   02240  IF ABS(X-50)>=50 THEN 3300
    0x57ee26168bb0 ---------A T 02250  GOTO 3150
    0x57ee26168d20 ---------A   02260  PRINT "PASSER TACKLED.  ";
    0x57ee26169140 ---------A   02270  LET Y=-INT(10*R1)
    0x57ee261691b0 ---------A   02280  GOTO 3060
    0x57ee261693d0 ---------A   02290  LET Y=0
    0x57ee261696f0 ---------A T 02300  IF RND(1)<.3 THEN 2330
    0x57ee26169870 ---------A   02310  PRINT "INCOMPLETE.  ";
    0x57ee26169900 ---------A T 02320  GOTO 3060
    0x57ee26169a70 ---------A   02330  PRINT "BATTED DOWN.  ";
    0x57ee26169af0 ---------A T 02340  GOTO 3060
    0x57ee2616a370 ---------A   02350  REM  LONG PASS
    0x57ee2616aaf0 ---------A   02360  LET Y=INT(160*(R1-.5)^3+30)
    0x57ee2616ad40 ---------A   02370  IF R<.1 THEN 2200
    0x57ee2616afa0 ---------A   02380  IF R<.3 THEN 2410
    0x57ee2616b200 ---------A   02390  IF R<.75 THEN 2290
    0x57ee2616b290 ---------A   02400  GOTO 2180
    0x57ee2616b410 ---------A T 02410  PRINT "PASSER TACKLED.  ";
    0x57ee2616b930 ---------A T 02420  LET Y=-INT(15*R1+3)
    0x57ee2616b9a0 ---------A   02430  GOTO 3060
    0x57ee2616ba10 ---------A   02440  REM  PUNT OR KICK
    0x57ee2616c190 ---------A T 02450  LET Y=INT(100*(R-.5)^3+35)
    0x57ee2616c3e0 ---------A   02460  IF D=4 THEN 2480
    0x57ee2616c810 ---------A   02470  LET Y=INT(Y*1.3)
    0x57ee2616cc40 ---------A   02480  PRINT Y;L$(3);" PUNT"
    0x57ee2616d380 ---------A T 02490  IF ABS(X+Y*FNF(1)-50)>=50 THEN 2540
    0x57ee2616d5f0 ---------A T 02500  IF D<4 THEN 2540
    0x57ee2616dbe0 ---------A T 02510  LET Y1=INT(R1^2*20)
    0x57ee2616dff0 ---------A   02520  PRINT Y1;L$(3);" RUN BACK"
    0x57ee2616e350 ---------A   02530  LET Y=Y-Y1
    0x57ee2616e3c0 ---------A   02540  GOTO 2220
    0x57ee2616e430 ---------A   02550  REM  PLACE KICK
    0x57ee2616ebc0 ---------A   02560  LET Y=INT(100*(R-.5)^3+35)
    0x57ee2616ee20 ---------A   02570  IF R1>.15 THEN 2610
    0x57ee2616ef80 ---------A   02580  PRINT "KICK IS BLOCKED  ***"
    0x57ee2616f4a0 ---------A T 02590  LET X=X-5*FNF(1)
    0x57ee2616f7d0 ---------A T 02600  LET P=1-P
    0x57ee2616f840 ---------A   02610  GOTO 1580
    0x57ee2616fd80 ----------   02620  LET X=X+FNF(1)*Y
    0x57ee261701c0 ----------   02630  IF ABS(X-50)>=60 THEN 2680
    0x57ee26170330 ---------- T 02640  PRINT "KICK IS SHORT."
    0x57ee26170770 ----------   02650  IF ABS(X-50)>=50 THEN 3560
    0x57ee26170ab0 ----------   02660  P=1-P
    0x57ee26170b20 ----------   02670  GOTO 1490
    0x57ee26170d80 ---------- T 02680  IF R1>.5 THEN 2710
    0x57ee26170ef0 ----------   02690  PRINT "KICK IS OFF TO THE SIDE."
    0x57ee26170f80 ----------   02700  GOTO 3560
    0x57ee261710d0 ---------- T 02710  PRINT "FIELD GOAL ***"
    0x57ee261715d0 ----------   02720  LET S(P)=S(P)+3
    0x57ee26171650 ----------   02730  GOTO 3490
    0x57ee261716c0 ---------A   02740  REM  OPPONENT'S PLAY
    0x57ee26171940 ---------A   02750  IF D>1 THEN 2810
    0x57ee26171d60 ---------A T 02760  IF RND(1)>1/3 THEN 2790
    0x57ee26171f80 ---------A   02770  LET Z=3
    0x57ee26171ff0 ---------A   02780  GOTO 1880
    0x57ee26172200 ---------A   02790  LET Z=1
    0x57ee26172270 ---------A G 02800  GOTO 1880
    0x57ee261724d0 ---------A   02810  IF D=4 THEN 2960
    0x57ee26172950 ---------A   02820  IF 10+X-X1<5 THEN 2760
    0x57ee26172bb0 ---------A   02830  IF X<5 THEN 2760
    0x57ee26172e10 ---------A   02840  IF X<=10 THEN 3030
    0x57ee261730a0 ---------A   02850  IF X>X1 THEN 2890
    0x57ee26173640 ---------A T 02860  LET A=INT(2*RND(1))
    0x57ee26173a70 ---------A   02870  LET Z=2+A*2
    0x57ee26173ae0 ---------A   02880  GOTO 1880
    0x57ee26173d30 ---------A   02890  IF D<3 THEN 2860
    0x57ee26173fa0 ---------A   02900  IF X<45 THEN 2860
    0x57ee261743c0 ---------A   02910  IF RND(1)>1/4 THEN 2940
    0x57ee261745e0 ---------A   02920  LET Z=6
    0x57ee26174650 ---------A T 02930  GOTO 1880
    0x57ee26174860 ---------A   02940  LET Z=4
    0x57ee261748d0 ---------A   02950  GOTO 1880
    0x57ee26174b30 ---------A   02960  IF X>30 THEN 3010
    0x57ee26174fb0 ---------A   02970  IF 10+X-X1<3 THEN 2760
    0x57ee26175210 ---------A T 02980  IF X<3 THEN 2760
    0x57ee26175430 ---------A   02990  LET Z=7
    0x57ee261754a0 ---------A   03000  GOTO 1880
    0x57ee261756b0 ---------A   03010  LET Z=5
    0x57ee26175730 ---------A   03020  GOTO 1880
    0x57ee26175c00 ---------A   03030  LET A=INT(2*RND(1))
    0x57ee26175f30 ---------A T 03040  LET Z=2+A
    0x57ee26175fa0 ---------A   03050  GOTO 1880
    0x57ee26176010 ---------A   03060  REM GAIN OR LOSS
    0x57ee26176260 ---------A   03070  LET X3=X
    0x57ee261767a0 ---------A T 03080  LET X=X+FNF(1)*Y
    0x57ee26176bd0 ---------A   03090  IF ABS(X-50)>=50 THEN 3300
    0x57ee26176e40 ---------A T 03100  IF Y=0 THEN 3120
    0x57ee26177270 ---------A T 03110  PRINT ABS(Y);L$(3);
    0x57ee261776a0 ---------A   03120  PRINT L$(15+SGN(Y))
    0x57ee26177af0 ---------A   03130  IF ABS(X3-50)>40 THEN 3150
    0x57ee26177e10 ---------A   03140  IF RND(1)<.1 THEN 3710
    0x57ee26177e90 ---------A   03150  GOSUB 1670
    0x57ee261780e0 ---------A T 03160  IF F=0 THEN 3190
    0x57ee26178420 ---------A   03170  LET P=1-P
    0x57ee261784a0 ---------A   03180  GOTO 1600
    0x57ee261787b0 ---------A   03190  IF FNG(1)>=10 THEN 1600
    0x57ee26178a10 ---------A   03200  IF D=4 THEN 3170
    0x57ee26178d60 ---------A   03210  LET D=D+1
    0x57ee261790e0 ---------A   03220  PRINT "DOWN: ";D;"     ";
    0x57ee26179660 ---------A   03230  IF (X1-50)*FNF(1)<40 THEN 3260
    0x57ee261797c0 ---------A   03240  PRINT "GOAL TO GO"
    0x57ee26179850 ---------A   03250  GOTO 3270
    0x57ee26179c60 ---------A   03260  PRINT "YARDS TO GO: ";10-FNG(1)
    0x57ee26179ce0 ---------A   03270  PRINT
    0x57ee26179d60 ---------A   03280  PRINT
    0x57ee26179df0 ---------A   03290  GOTO 1730
    0x57ee26179e60 ---------A   03300  REM BALL IN END-ZONE
    0x57ee2617a0e0 ---------A   03310  IF X>=100 THEN 3340
    0x57ee2617a300 ---------A   03320  LET E=0
    0x57ee2617a370 ---------A   03330  GOTO 3350
    0x57ee2617a5b0 ---------A   03340  LET E=1
    0x57ee2617b240 ---------A   03350  ON 1+E-F*2+P*4 GOTO 3360,3440,3610,3560,3440,3360,3560,3610
    0x57ee2617b2c0 ---------A   03360  REM SAFETY
    0x57ee2617b9e0 ---------A   03370  LET S(1-P)=S(1-P)+2
    0x57ee2617bbf0 ---------A   03380  PRINT L$(19)
    0x57ee2617bc90 ---------A   03390  GOSUB 3650
    0x57ee2617bfd0 ---------A   03400  PRINT O$(P);" KICKS OFF FROM ITS 20 YARD LINE."
    0x57ee2617c410 ---------A   03410  LET X=20+P*60
    0x57ee2617c740 ---------A   03420  LET P=1-P
    0x57ee2617c7b0 ---------A   03430  GOTO 1450
    0x57ee2617c820 ---------A   03440  REM OFFENSIVE TD
    0x57ee2617cb60 ---------A   03450  PRINT L$(17);"***"
    0x57ee2617ce80 ---------A   03460  IF RND(1)>.8 THEN 3530
    0x57ee2617d390 ---------A   03470  LET S(P)=S(P)+7
    0x57ee2617d4e0 ---------A   03480  PRINT "KICK IS GOOD."
    0x57ee2617d570 ---------A   03490  GOSUB 3650
    0x57ee2617d8a0 ---------A   03500  PRINT O$(P);" KICKS OFF"
    0x57ee2617dbe0 ---------A   03510  LET P=1-P
    0x57ee2617dc60 ---------A   03520  GOTO 1440
    0x57ee2617ddc0 ---------A   03530  PRINT "KICK IS OFF TO THE SIDE"
    0x57ee2617e2c0 ---------A   03540  LET S(P)=S(P)+6
    0x57ee2617e330 ---------A   03550  GOTO 3490
    0x57ee2617e3a0 ---------A   03560  REM TOUCHBACK
    0x57ee2617e5d0 ---------A   03570  PRINT L$(18)
    0x57ee2617e910 ---------A   03580  LET P=1-P
    0x57ee2617ed40 ---------A   03590  LET X=20+P*60
    0x57ee2617edb0 ---------A   03600  GOTO 1580
    0x57ee2617ee20 ---------A   03610  REM DEFENSIVE TD
    0x57ee2617f540 ---------A   03620  PRINT L$(17);"FOR ";O$(1-P);"***"
    0x57ee26169e20 ---------A   03630  LET P=1-P
    0x57ee26169e90 ---------A   03640  GOTO 3450
    0x57ee26169f00 ---------C   03650  REM SCORE
    0x57ee26169fa0 ---------C   03660  PRINT
    0x57ee261807f0 ---------C   03670  PRINT "SCORE:  ";S(0);" TO ";S(1)
    0x57ee26180870 ---------C   03680  PRINT
    0x57ee261808f0 ---------C   03690  PRINT
    0x57ee26180950 ---------C   03700  RETURN
    0x57ee261809d0 ---------A   03710  REM PENALTY
    0x57ee26180fb0 ---------A   03720  LET P3=INT(2*RND(1))
    0x57ee261812f0 ---------A   03730  PRINT O$(P3);" OFFSIDES -- PENALTY OF 5 YARDS."
    0x57ee26181370 ---------A   03740  PRINT
    0x57ee261813f0 ---------A   03750  PRINT
    0x57ee26181660 ---------A   03760  IF P3=0 THEN 3830
    0x57ee261817f0 ---------A   03770  PRINT "DO YOU ACCEPT THE PENALTY";
    0x57ee26181960 ---------A   03780  INPUT A$
    0x57ee26181bf0 ---------A   03790  IF A$="NO" THEN 3150
    0x57ee26181e80 ---------A   03800  IF A$="YES" THEN 3960
    0x57ee26182000 ---------A   03810  PRINT "TYPE 'YES' OR 'NO'";
    0x57ee26182090 ---------A   03820  GOTO 3780
    0x57ee26182110 ---------A   03830  REM OPPONENT'S STRATEGY ON PENALTY
    0x57ee26182380 ---------A   03840  IF P=1 THEN 3890
    0x57ee261825e0 ---------A   03850  IF Y<=0 THEN 3930
    0x57ee26182850 ---------A   03860  IF F<0 THEN 3930
    0x57ee26182d90 ---------A   03870  IF FNG(1)<3*D-2 THEN 3930
    0x57ee26182e10 ---------A   03880  GOTO 3950
    0x57ee26183060 ---------A   03890  IF Y<=5 THEN 3950
    0x57ee261832c0 ---------A   03900  IF F<0 THEN 3950
    0x57ee26183530 ---------A   03910  IF D<4 THEN 3930
    0x57ee26183860 ---------A   03920  IF FNG(1)<10 THEN 3950
    0x57ee261839c0 ---------A   03930  PRINT "PENALTY REFUSED."
    0x57ee26183a50 ---------A   03940  GOTO 3150
    0x57ee26183ba0 ---------A   03950  PRINT "PENALTY ACCEPTED."
    0x57ee26183dc0 ---------A   03960  LET F=0
    0x57ee261840f0 ---------A   03970  LET D=D-1
    0x57ee26184360 ---------A   03980  IF P<>P3 THEN 4010
    0x57ee26184880 ---------A   03990  LET X=X3-FNF(1)*5
    0x57ee261848f0 ---------A   04000  GOTO 3150
    0x57ee26184e00 ---------A   04010  LET X=X3+FNF(1)*5
    0x57ee26184e70 ---------A   04020  GOTO 3150
    0x57ee26184ec0 ---------A   04030  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03940 - 10000    6070 

 */



/*
 *  Symbol Table Listing for 'basic/footbal1.bas'
 *
    A                        Integer     
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
    D                        Integer     
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FNF             Array    Integer         {0,9} 
    FNG             Array    Integer         {0,9} 
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
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
    P                        Integer     
    P3                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
    R1                       Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,9} 
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    X1                       Integer     
    X3                       Integer     
    Y                        Integer     
    Y1                       Integer     
    Z                        Integer     

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
    0x57ee2614b6d0 ---------A   01000  PRINT TAB(33);"FTBALL"
    0x57ee2614b670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57ee2613c2b0 ---------A   01020  PRINT
    0x57ee2614b9e0 ---------A   01030  PRINT
    0x57ee2614daa0 ---------A   01040  PRINT "THIS IS DARTMOUTH CHAMPIONSHIP FOOTBALL."
    0x57ee2614db00 ---------A   01050  PRINT
    0x57ee2614c080 ---------A   01060  PRINT "YOU WILL QUARTERBACK DARTMOUTH. CALL PLAYS AS FOLLOWS:"
    0x57ee2614c4d0 ---------A   01070  PRINT "1= SIMPLE RUN; 2= TRICKY RUN; 3= SHORT PASS;"
    0x57ee2614bbe0 ---------A   01080  PRINT "4= LONG PASS; 5= PUNT; 6= QUICK KICK; 7= PLACE KICK."
    0x57ee2614bc40 ---------A   01090  PRINT
    0x57ee2614bca0 ---------A   01100  PRINT "CHOOSE YOUR OPPONENT";
    0x57ee2614c880 ---------A   01110  INPUT O$(1)
    0x57ee2614e0b0 ---------A   01120  O$(0)="DARTMOUTH"
    0x57ee26153aa0 ---------A   01130  PRINT
    0x57ee26153de0 ---------A   01140  LET S(0)=0
    0x57ee26154070 ---------A   01150  LET S(1)=0
    0x57ee261540c0 ---------A   01160  REM
    0x57ee26154330 ---------A   01170  DIM L$(20)
    0x57ee26154660 ---------A   01180  FOR I=1 TO 20
    0x57ee26154880 ---------A   01190  READ L$(I)
    0x57ee261549b0 ---------A   01200  NEXT I
    0x57ee26154f00 ---------A   01210  DATA "KICK","RECEIVE"," YARD ","RUN BACK FOR ","BALL ON "
    0x57ee26155320 ---------A   01220  DATA "YARD LINE"," SIMPLE RUN"," TRICKY RUN"," SHORT PASS"
    0x57ee26155820 ---------A   01230  DATA " LONG PASS","PUNT"," QUICK KICK "," PLACE KICK"," LOSS "
    0x57ee26155cf0 ---------A   01240  DATA " NO GAIN","GAIN "," TOUCHDOWN "," TOUCHBACK ","SAFETY***"
    0x57ee26155e40 ---------A   01250  DATA "JUNK"
    0x57ee261563b0 ---------A   01260  LET P=INT(RND(1)*2)
    0x57ee261566e0 ---------A   01270  PRINT O$(P);" WON THE TOSS"
    0x57ee26156d60 ---------A   01280  DEF FNF(X)=1-2*P
    0x57ee26157a10 ---------A   01290  DEF FNG(Z)=P*(X1-X)+(1-P)*(X-X1)
    0x57ee26157c40 ---------A   01300  IF P=0 THEN 1340
    0x57ee26157f60 ---------A   01310  PRINT O$(1);" ELECTS TO RECEIVE."
    0x57ee26157fe0 ---------A   01320  PRINT
    0x57ee26158080 ---------A   01330  GOTO 1440
    0x57ee261581d0 ---------A T 01340  PRINT "DO YOU ELECT TO KICK OR RECEIVE";
    0x57ee261583f0 ---------A T 01350  INPUT A$
    0x57ee26158470 ---------A   01360  PRINT
    0x57ee261587f0 ---------A   01370  FOR E=1 TO 2
    0x57ee26158d60 ---------A   01380  IF A$=L$(E) THEN 1420
    0x57ee26158ea0 ---------A   01390  NEXT E
    0x57ee26159080 ---------A   01400  PRINT "INCORRECT ANSWER.  PLEASE TYPE 'KICK' OR 'RECIEVE'";
    0x57ee26159100 ---------A   01410  GOTO 1350
    0x57ee26159350 ---------A T 01420  IF E=2 THEN 1440
    0x57ee26159570 ---------A   01430  LET P=1
    0x57ee26159af0 ---------A T 01440  LET X=40+(1-P)*20
    0x57ee2615a3d0 ---------A T 01450  LET Y=INT(200*(RND(1)-.5)^3+55)
    0x57ee2615a7e0 ---------A   01460  PRINT Y;L$(3);" KICKOFF"
    0x57ee2615ad30 ---------A   01470  LET X=X-FNF(1)*Y
    0x57ee2615b180 ---------A   01480  IF ABS(X-50)>=50 THEN 1560
    0x57ee2615be80 ---------A   01490  LET Y=INT(50*RND(1)^2)+(1-P)*INT(50*RND(1)^4)
    0x57ee2615c3c0 ---------A   01500  LET X=X+FNF(1)*Y
    0x57ee2615c800 ---------A   01510  IF ABS(X-50)>=50 THEN 1540
    0x57ee2615cc20 ---------A   01520  PRINT Y;L$(3);" RUNBACK"
    0x57ee2615cca0 ---------A   01530  GOTO 1580
    0x57ee2615ced0 ---------A T 01540  PRINT L$(4);
    0x57ee2615cf60 ---------A   01550  GOTO 3270
    0x57ee2615d390 ---------A T 01560  PRINT "TOUCHBACK FOR ";O$(P);"."
    0x57ee2615d7d0 ---------A   01570  LET X=20+P*60
    0x57ee2615d840 ---------A T 01580  REM FIRST DOWN
    0x57ee2615d8d0 ---------A   01590  GOSUB 3810
    0x57ee2615db00 ---------A T 01600  LET X1=X
    0x57ee2615ddf0 ---------A   01610  LET D=1
    0x57ee2615de40 ---------A   01620  PRINT
    0x57ee2615e280 ---------A   01630  PRINT "FIRST DOWN ";O$(P);"***"
    0x57ee2615e300 ---------A   01640  PRINT
    0x57ee2615e380 ---------A   01650  PRINT
    0x57ee2615e400 ---------A   01660  GOTO 1670
    0x57ee2615faa0 ---------A T 01670  REM NEW PLAY
    0x57ee2615feb0 ---------A   01680  LET T=T+1
    0x57ee26160100 ---------A   01690  IF T=30 THEN 1870
    0x57ee26160370 ---------A   01700  IF T<50 THEN 1750
    0x57ee261606a0 ---------A   01710  IF RND(1)>.2 THEN 1750
    0x57ee26160830 ---------A   01720  PRINT "END OF GAME  ***"
    0x57ee26161390 ---------A   01730  PRINT "FINAL SCORE:  ";O$(0);": ";S(0);"  ";O$(1);": ";S(1)
    0x57ee261613f0 ---------A   01740  STOP
    0x57ee26161650 ---------A T 01750  IF P=1 THEN 2560
    0x57ee261617d0 ---------A   01760  PRINT "NEXT PLAY";
    0x57ee26161940 ---------A T 01770  INPUT Z
    0x57ee26161cb0 ---------A   01780  IF Z<>INT(Z) THEN 1800
    0x57ee26162110 ---------A   01790  IF ABS(Z-4)<=3 THEN 1820
    0x57ee261622a0 ---------A T 01800  PRINT "ILLEGAL PLAY NUMBER, RETYPE";
    0x57ee26162320 ---------A   01810  GOTO 1770
    0x57ee26162600 ---------A T 01820  LET F=0
    0x57ee26162a60 ---------A   01830  PRINT L$(Z+6);".  ";
    0x57ee26163240 ---------A   01840  LET R=RND(1)*(.98+FNF(1)*.02)
    0x57ee26163610 ---------A   01850  LET R1=RND(1)
    0x57ee26163cb0 ---------A   01860  ON Z GOTO 1920,1970,2070,2290,2380,2380,2490
    0x57ee26163d30 ---------A T 01870  REM  JEAN'S SPECIAL
    0x57ee26164190 ---------A   01880  IF RND(1)> 1/3 THEN 1750
    0x57ee26164300 ---------A   01890  PRINT "GAME DELAYED.  DOG ON FIELD."
    0x57ee26164380 ---------A   01900  PRINT
    0x57ee26164400 ---------A   01910  GOTO 1750
    0x57ee26164470 ---------A T 01920  REM  SIMPLE RUN
    0x57ee26164c00 ---------A   01930  LET Y=INT(24*(R-.5)^3+3)
    0x57ee26164f10 ---------A   01940  IF RND(1)<.05 THEN 1990
    0x57ee26164f90 ---------A   01950  GOTO 2880
    0x57ee26165000 ---------A   01960  REM  TRICKY RUN
    0x57ee26165540 ---------A T 01970  LET Y=INT(20*R-5)
    0x57ee26165850 ---------A   01980  IF RND(1)>.1 THEN 2880
    0x57ee26165a70 ---------A T 01990  LET F=-1
    0x57ee26165d60 ---------A   02000  LET X3=X
    0x57ee261662a0 ---------A   02010  LET X=X+FNF(1)*Y
    0x57ee261666e0 ---------A   02020  IF ABS(X-50)>=50 THEN 2050
    0x57ee26166860 ---------A   02030  PRINT "***  FUMBLE AFTER ";
    0x57ee261668f0 ---------A   02040  GOTO 2920
    0x57ee26166a40 ---------A T 02050  PRINT "***  FUMBLE."
    0x57ee26166ac0 ---------A   02060  GOTO 3120
    0x57ee26166b30 ---------A T 02070  REM  SHORT PASS
    0x57ee261672b0 ---------A   02080  LET Y=INT(60*(R1-.5)^3+10)
    0x57ee26167500 ---------A   02090  IF R<.05 THEN 2140
    0x57ee26167760 ---------A   02100  IF R<.15 THEN 2200
    0x57ee261679d0 ---------A   02110  IF R<.55 THEN 2230
    0x57ee26167b50 ---------A T 02120  PRINT "COMPLETE.  ";
    0x57ee26167bd0 ---------A   02130  GOTO 2880
    0x57ee26167e30 ---------A T 02140  IF D=4 THEN 2230
    0x57ee26167f90 ---------A   02150  PRINT "INTERCEPTED."
    0x57ee261681b0 ---------A T 02160  LET F=-1
    0x57ee261686f0 ---------A   02170  LET X=X+FNF(1)*Y
    0x57ee26168b20 ---------A   02180  IF ABS(X-50)>=50 THEN 3120
    0x57ee26168bb0 ---------A   02190  GOTO 2970
    0x57ee26168d20 ---------A T 02200  PRINT "PASSER TACKLED.  ";
    0x57ee26169140 ---------A   02210  LET Y=-INT(10*R1)
    0x57ee261691b0 ---------A   02220  GOTO 2880
    0x57ee261693d0 ---------A T 02230  LET Y=0
    0x57ee261696f0 ---------A   02240  IF RND(1)<.3 THEN 2270
    0x57ee26169870 ---------A   02250  PRINT "INCOMPLETE.  ";
    0x57ee26169900 ---------A   02260  GOTO 2880
    0x57ee26169a70 ---------A T 02270  PRINT "BATTED DOWN.  ";
    0x57ee26169af0 ---------A   02280  GOTO 2880
    0x57ee2616a370 ---------A T 02290  REM  LONG PASS
    0x57ee2616aaf0 ---------A   02300  LET Y=INT(160*(R1-.5)^3+30)
    0x57ee2616ad40 ---------A   02310  IF R<.1 THEN 2140
    0x57ee2616afa0 ---------A   02320  IF R<.3 THEN 2350
    0x57ee2616b200 ---------A   02330  IF R<.75 THEN 2230
    0x57ee2616b290 ---------A   02340  GOTO 2120
    0x57ee2616b410 ---------A T 02350  PRINT "PASSER TACKLED.  ";
    0x57ee2616b930 ---------A   02360  LET Y=-INT(15*R1+3)
    0x57ee2616b9a0 ---------A   02370  GOTO 2880
    0x57ee2616ba10 ---------A T 02380  REM  PUNT OR KICK
    0x57ee2616c190 ---------A   02390  LET Y=INT(100*(R-.5)^3+35)
    0x57ee2616c3e0 ---------A   02400  IF D=4 THEN 2420
    0x57ee2616c810 ---------A   02410  LET Y=INT(Y*1.3)
    0x57ee2616cc40 ---------A T 02420  PRINT Y;L$(3);" PUNT"
    0x57ee2616d380 ---------A   02430  IF ABS(X+Y*FNF(1)-50)>=50 THEN 2480
    0x57ee2616d5f0 ---------A   02440  IF D<4 THEN 2480
    0x57ee2616dbe0 ---------A   02450  LET Y1=INT(R1^2*20)
    0x57ee2616dff0 ---------A   02460  PRINT Y1;L$(3);" RUN BACK"
    0x57ee2616e350 ---------A   02470  LET Y=Y-Y1
    0x57ee2616e3c0 ---------A T 02480  GOTO 2160
    0x57ee2616e430 ---------A T 02490  REM  PLACE KICK
    0x57ee2616ebc0 ---------A   02500  LET Y=INT(100*(R-.5)^3+35)
    0x57ee2616ee20 ---------A   02510  IF R1>.15 THEN 2550
    0x57ee2616ef80 ---------A   02520  PRINT "KICK IS BLOCKED  ***"
    0x57ee2616f4a0 ---------A   02530  LET X=X-5*FNF(1)
    0x57ee2616f7d0 ---------A   02540  LET P=1-P
    0x57ee2616f840 ---------A T 02550  GOTO 1580
    0x57ee261716c0 ---------A T 02560  REM  OPPONENT'S PLAY
    0x57ee26171940 ---------A   02570  IF D>1 THEN 2630
    0x57ee26171d60 ---------A T 02580  IF RND(1)>1/3 THEN 2610
    0x57ee26171f80 ---------A   02590  LET Z=3
    0x57ee26171ff0 ---------A   02600  GOTO 1820
    0x57ee26172200 ---------A T 02610  LET Z=1
    0x57ee26172270 ---------A   02620  GOTO 1820
    0x57ee261724d0 ---------A T 02630  IF D=4 THEN 2780
    0x57ee26172950 ---------A   02640  IF 10+X-X1<5 THEN 2580
    0x57ee26172bb0 ---------A   02650  IF X<5 THEN 2580
    0x57ee26172e10 ---------A   02660  IF X<=10 THEN 2850
    0x57ee261730a0 ---------A   02670  IF X>X1 THEN 2710
    0x57ee26173640 ---------A T 02680  LET A=INT(2*RND(1))
    0x57ee26173a70 ---------A   02690  LET Z=2+A*2
    0x57ee26173ae0 ---------A   02700  GOTO 1820
    0x57ee26173d30 ---------A T 02710  IF D<3 THEN 2680
    0x57ee26173fa0 ---------A   02720  IF X<45 THEN 2680
    0x57ee261743c0 ---------A   02730  IF RND(1)>1/4 THEN 2760
    0x57ee261745e0 ---------A   02740  LET Z=6
    0x57ee26174650 ---------A   02750  GOTO 1820
    0x57ee26174860 ---------A T 02760  LET Z=4
    0x57ee261748d0 ---------A   02770  GOTO 1820
    0x57ee26174b30 ---------A T 02780  IF X>30 THEN 2830
    0x57ee26174fb0 ---------A   02790  IF 10+X-X1<3 THEN 2580
    0x57ee26175210 ---------A   02800  IF X<3 THEN 2580
    0x57ee26175430 ---------A   02810  LET Z=7
    0x57ee261754a0 ---------A   02820  GOTO 1820
    0x57ee261756b0 ---------A T 02830  LET Z=5
    0x57ee26175730 ---------A   02840  GOTO 1820
    0x57ee26175c00 ---------A T 02850  LET A=INT(2*RND(1))
    0x57ee26175f30 ---------A   02860  LET Z=2+A
    0x57ee26175fa0 ---------A   02870  GOTO 1820
    0x57ee26176010 ---------A T 02880  REM GAIN OR LOSS
    0x57ee26176260 ---------A   02890  LET X3=X
    0x57ee261767a0 ---------A   02900  LET X=X+FNF(1)*Y
    0x57ee26176bd0 ---------A   02910  IF ABS(X-50)>=50 THEN 3120
    0x57ee26176e40 ---------A T 02920  IF Y=0 THEN 2940
    0x57ee26177270 ---------A   02930  PRINT ABS(Y);L$(3);
    0x57ee261776a0 ---------A T 02940  PRINT L$(15+SGN(Y))
    0x57ee26177af0 ---------A   02950  IF ABS(X3-50)>40 THEN 2970
    0x57ee26177e10 ---------A   02960  IF RND(1)<.1 THEN 3470
    0x57ee26177e90 ---------A T 02970  GOSUB 3810
    0x57ee261780e0 ---------A   02980  IF F=0 THEN 3010
    0x57ee26178420 ---------A T 02990  LET P=1-P
    0x57ee261784a0 ---------A   03000  GOTO 1600
    0x57ee261787b0 ---------A T 03010  IF FNG(1)>=10 THEN 1600
    0x57ee26178a10 ---------A   03020  IF D=4 THEN 2990
    0x57ee26178d60 ---------A   03030  LET D=D+1
    0x57ee261790e0 ---------A   03040  PRINT "DOWN: ";D;"     ";
    0x57ee26179660 ---------A   03050  IF (X1-50)*FNF(1)<40 THEN 3080
    0x57ee261797c0 ---------A   03060  PRINT "GOAL TO GO"
    0x57ee26179850 ---------A   03070  GOTO 3090
    0x57ee26179c60 ---------A T 03080  PRINT "YARDS TO GO: ";10-FNG(1)
    0x57ee26179ce0 ---------A T 03090  PRINT
    0x57ee26179d60 ---------A   03100  PRINT
    0x57ee26179df0 ---------A   03110  GOTO 1670
    0x57ee26179e60 ---------A T 03120  REM BALL IN END-ZONE
    0x57ee2617a0e0 ---------A   03130  IF X>=100 THEN 3160
    0x57ee2617a300 ---------A   03140  LET E=0
    0x57ee2617a370 ---------A   03150  GOTO 3170
    0x57ee2617a5b0 ---------A T 03160  LET E=1
    0x57ee2617b240 ---------A T 03170  ON 1+E-F*2+P*4 GOTO 3180,3260,3430,3380,3260,3180,3380,3430
    0x57ee2617b2c0 ---------A T 03180  REM SAFETY
    0x57ee2617b9e0 ---------A   03190  LET S(1-P)=S(1-P)+2
    0x57ee2617bbf0 ---------A   03200  PRINT L$(19)
    0x57ee2617bc90 ---------A   03210  GOSUB 3870
    0x57ee2617bfd0 ---------A   03220  PRINT O$(P);" KICKS OFF FROM ITS 20 YARD LINE."
    0x57ee2617c410 ---------A   03230  LET X=20+P*60
    0x57ee2617c740 ---------A   03240  LET P=1-P
    0x57ee2617c7b0 ---------A   03250  GOTO 1450
    0x57ee2617c820 ---------A T 03260  REM OFFENSIVE TD
    0x57ee2617cb60 ---------A T 03270  PRINT L$(17);"***"
    0x57ee2617ce80 ---------A   03280  IF RND(1)>.8 THEN 3350
    0x57ee2617d390 ---------A   03290  LET S(P)=S(P)+7
    0x57ee2617d4e0 ---------A   03300  PRINT "KICK IS GOOD."
    0x57ee2617d570 ---------A T 03310  GOSUB 3870
    0x57ee2617d8a0 ---------A   03320  PRINT O$(P);" KICKS OFF"
    0x57ee2617dbe0 ---------A   03330  LET P=1-P
    0x57ee2617dc60 ---------A   03340  GOTO 1440
    0x57ee2617ddc0 ---------A T 03350  PRINT "KICK IS OFF TO THE SIDE"
    0x57ee2617e2c0 ---------A   03360  LET S(P)=S(P)+6
    0x57ee2617e330 ---------A   03370  GOTO 3310
    0x57ee2617e3a0 ---------A T 03380  REM TOUCHBACK
    0x57ee2617e5d0 ---------A   03390  PRINT L$(18)
    0x57ee2617e910 ---------A   03400  LET P=1-P
    0x57ee2617ed40 ---------A   03410  LET X=20+P*60
    0x57ee2617edb0 ---------A   03420  GOTO 1580
    0x57ee2617ee20 ---------A T 03430  REM DEFENSIVE TD
    0x57ee2617f540 ---------A   03440  PRINT L$(17);"FOR ";O$(1-P);"***"
    0x57ee26169e20 ---------A   03450  LET P=1-P
    0x57ee26169e90 ---------A   03460  GOTO 3270
    0x57ee261809d0 ---------A T 03470  REM PENALTY
    0x57ee26180fb0 ---------A   03480  LET P3=INT(2*RND(1))
    0x57ee261812f0 ---------A   03490  PRINT O$(P3);" OFFSIDES -- PENALTY OF 5 YARDS."
    0x57ee26181370 ---------A   03500  PRINT
    0x57ee261813f0 ---------A   03510  PRINT
    0x57ee26181660 ---------A   03520  IF P3=0 THEN 3590
    0x57ee261817f0 ---------A   03530  PRINT "DO YOU ACCEPT THE PENALTY";
    0x57ee26181960 ---------A T 03540  INPUT A$
    0x57ee26181bf0 ---------A   03550  IF A$="NO" THEN 2970
    0x57ee26181e80 ---------A   03560  IF A$="YES" THEN 3720
    0x57ee26182000 ---------A   03570  PRINT "TYPE 'YES' OR 'NO'";
    0x57ee26182090 ---------A   03580  GOTO 3540
    0x57ee26182110 ---------A T 03590  REM OPPONENT'S STRATEGY ON PENALTY
    0x57ee26182380 ---------A   03600  IF P=1 THEN 3650
    0x57ee261825e0 ---------A   03610  IF Y<=0 THEN 3690
    0x57ee26182850 ---------A   03620  IF F<0 THEN 3690
    0x57ee26182d90 ---------A   03630  IF FNG(1)<3*D-2 THEN 3690
    0x57ee26182e10 ---------A   03640  GOTO 3710
    0x57ee26183060 ---------A T 03650  IF Y<=5 THEN 3710
    0x57ee261832c0 ---------A   03660  IF F<0 THEN 3710
    0x57ee26183530 ---------A   03670  IF D<4 THEN 3690
    0x57ee26183860 ---------A   03680  IF FNG(1)<10 THEN 3710
    0x57ee261839c0 ---------A T 03690  PRINT "PENALTY REFUSED."
    0x57ee26183a50 ---------A   03700  GOTO 2970
    0x57ee26183ba0 ---------A T 03710  PRINT "PENALTY ACCEPTED."
    0x57ee26183dc0 ---------A T 03720  LET F=0
    0x57ee261840f0 ---------A   03730  LET D=D-1
    0x57ee26184360 ---------A   03740  IF P<>P3 THEN 3770
    0x57ee26184880 ---------A   03750  LET X=X3-FNF(1)*5
    0x57ee261848f0 ---------A   03760  GOTO 2970
    0x57ee26184e00 ---------A T 03770  LET X=X3+FNF(1)*5
    0x57ee26184e70 ---------A   03780  GOTO 2970
    0x57ee26184ec0 ---------A   03790  END
    0x57ee2615e470 ---------B   03800  REM PRINT POSITION
    0x57ee2615e6f0 ---------B G 03810  IF X>50 THEN 3840
    0x57ee2615ed90 ---------B   03820  PRINT L$(5);O$(0);X;L$(6)
    0x57ee2615ee20 ---------B   03830  GOTO 3850
    0x57ee2615f9c0 ---------B T 03840  PRINT L$(5);O$(1);100-X;L$(6)
    0x57ee261862b0 ---------B T 03850  GOTO 03860
    0x57ee26198800 ---------B T 03860  RETURN
    0x57ee26169f00 ---------C G 03870  REM SCORE
    0x57ee26169fa0 ---------C   03880  PRINT
    0x57ee261807f0 ---------C   03890  PRINT "SCORE:  ";S(0);" TO ";S(1)
    0x57ee26180870 ---------C   03900  PRINT
    0x57ee261808f0 ---------C   03910  PRINT
    0x57ee2618b5d0 ---------C   03920  GOTO 03930
    0x57ee26198880 ---------C T 03930  RETURN
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
char* data_01210s[]={"KICK","RECEIVE"," YARD ","RUN BACK FOR ","BALL ON "};
char* data_01220s[]={"YARD LINE"," SIMPLE RUN"," TRICKY RUN"," SHORT PASS"};
char* data_01230s[]={" LONG PASS","PUNT"," QUICK KICK "," PLACE KICK"," LOSS "};
char* data_01240s[]={" NO GAIN","GAIN "," TOUCHDOWN "," TOUCHBACK ","SAFETY***"};
char* data_01250s[]={"JUNK"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1210,  5,data_01210s},
    { 1220,  4,data_01220s},
    { 1230,  5,data_01230s},
    { 1240,  5,data_01240s},
    { 1250,  1,data_01250s},
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
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    FNF_int_arr[10];                           // Basic: FNF 
int    FNG_int_arr[10];                           // Basic: FNG 
int    I_int;                                     // Basic: I 
char*  L_str_arr[20];                             // Basic: L$ 
char*  O_str_arr[10];                             // Basic: O$ 
int    P_int;                                     // Basic: P 
int    P3_int;                                    // Basic: P3 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    S_int_arr[10];                             // Basic: S 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    X1_int;                                    // Basic: X1 
int    X3_int;                                    // Basic: X3 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03810();
void Routine_03870();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused X
int FNF(int X){
    int rtn=1-2*P_int;
    return(rtn);
}

#pragma argsused Z
int FNG(int Z){
    int rtn=P_int*(X1_int-X_int)+(1-P_int)*(X_int-X1_int);
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
    // 03800 REM PRINT POSITION

void Routine_03810(){
    // 03810 IF X>50 THEN 3840
    if(X_int>50)goto Lbl_03840;
    // 03820 PRINT L$(5);O$(0);X;L$(6)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str_arr[5]); strcat(buf,O_str_arr[0]); b2c_INT(buf,X_int); strcat(buf,L_str_arr[6]);strcat(buf,"\n");fputs(buf,fh); };
    // 03830 GOTO 3850
    goto Lbl_03850;

  Lbl_03840:
    // 03840 PRINT L$(5);O$(1);100-X;L$(6)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str_arr[5]); strcat(buf,O_str_arr[1]); b2c_INT(buf,100-X_int); strcat(buf,L_str_arr[6]);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03850:
    // 03850 GOTO 03860
    goto Lbl_03860;

  Lbl_03860:
    // 03860 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_03870(){
    // 03870 REM SCORE
    // 03880 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03890 PRINT "SCORE:  ";S(0);" TO ";S(1)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SCORE:  "); b2c_INT(buf,S_int_arr[0]);strcat(buf," TO "); b2c_INT(buf,S_int_arr[1]);strcat(buf,"\n");fputs(buf,fh); };
    // 03900 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03910 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03920 GOTO 03930
    goto Lbl_03930;

  Lbl_03930:
    // 03930 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"FTBALL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"FTBALL");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT "THIS IS DARTMOUTH CHAMPIONSHIP FOOTBALL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS DARTMOUTH CHAMPIONSHIP FOOTBALL.");strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "YOU WILL QUARTERBACK DARTMOUTH. CALL PLAYS AS FOLLOWS:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WILL QUARTERBACK DARTMOUTH. CALL PLAYS AS FOLLOWS:");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "1= SIMPLE RUN; 2= TRICKY RUN; 3= SHORT PASS;"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1= SIMPLE RUN; 2= TRICKY RUN; 3= SHORT PASS;");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "4= LONG PASS; 5= PUNT; 6= QUICK KICK; 7= PLACE KICK."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"4= LONG PASS; 5= PUNT; 6= QUICK KICK; 7= PLACE KICK.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "CHOOSE YOUR OPPONENT";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHOOSE YOUR OPPONENT");fputs(buf,fh); };
    // 01110 INPUT O$(1)
    // Start of Basic INPUT statement 01110
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&O_str_arr[1],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01110
    // 01120 O$(0)="DARTMOUTH"
    GLBpStr="DARTMOUTH";
    O_str_arr[0] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 LET S(0)=0
    S_int_arr[0] = 0;
    // 01150 LET S(1)=0
    S_int_arr[1] = 0;
    // 01160 REM
    // 01170 DIM L$(20)
    // 01180 FOR I=1 TO 20
    for(I_int=1;I_int<=20;I_int++){
        // 01190 READ L$(I)
        L_str_arr[I_int] = Get_Data_String();
        // 01200 NEXT I
        int dummy_1200=0; // Ignore this line.
    }; // End-For(I_int)
    // 01210 DATA "KICK","RECEIVE"," YARD ","RUN BACK FOR ","BALL ON "
    // 01220 DATA "YARD LINE"," SIMPLE RUN"," TRICKY RUN"," SHORT PASS"
    // 01230 DATA " LONG PASS","PUNT"," QUICK KICK "," PLACE KICK"," LOSS "
    // 01240 DATA " NO GAIN","GAIN "," TOUCHDOWN "," TOUCHBACK ","SAFETY***"
    // 01250 DATA "JUNK"
    // 01260 LET P=INT(RND(1)*2)
    P_int = INT(RND(1)*2);
    // 01270 PRINT O$(P);" WON THE TOSS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O_str_arr[P_int]);strcat(buf," WON THE TOSS");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 DEF FNF(X)=1-2*P
    // 01290 DEF FNG(Z)=P*(X1-X)+(1-P)*(X-X1)
    // 01300 IF P=0 THEN 1340
    if(P_int==0)goto Lbl_01340;
    // 01310 PRINT O$(1);" ELECTS TO RECEIVE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O_str_arr[1]);strcat(buf," ELECTS TO RECEIVE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01330 GOTO 1440
    goto Lbl_01440;

  Lbl_01340:
    // 01340 PRINT "DO YOU ELECT TO KICK OR RECEIVE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU ELECT TO KICK OR RECEIVE");fputs(buf,fh); };

  Lbl_01350:
    // 01350 INPUT A$
    // Start of Basic INPUT statement 01350
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
    }; // End of Basic INPUT statement 01350
    // 01360 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01370 FOR E=1 TO 2
    for(E_int=1;E_int<=2;E_int++){
        // 01380 IF A$=L$(E) THEN 1420
        if(strcmp(A_str,L_str_arr[E_int])==0)goto Lbl_01420;
        // 01390 NEXT E
        int dummy_1390=0; // Ignore this line.
    }; // End-For(E_int)
    // 01400 PRINT "INCORRECT ANSWER.  PLEASE TYPE 'KICK' OR 'RECIEVE'";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INCORRECT ANSWER.  PLEASE TYPE 'KICK' OR 'RECIEVE'");fputs(buf,fh); };
    // 01410 GOTO 1350
    goto Lbl_01350;

  Lbl_01420:
    // 01420 IF E=2 THEN 1440
    if(E_int==2)goto Lbl_01440;
    // 01430 LET P=1
    P_int = 1;

  Lbl_01440:
    // 01440 LET X=40+(1-P)*20
    X_int = 40+(1-P_int)*20;

  Lbl_01450:
    // 01450 LET Y=INT(200*(RND(1)-.5)^3+55)
    Y_int = INT(200*FPower((RND(1)-0.5),3)+55);
    // 01460 PRINT Y;L$(3);" KICKOFF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,Y_int); strcat(buf,L_str_arr[3]);strcat(buf," KICKOFF");strcat(buf,"\n");fputs(buf,fh); };
    // 01470 LET X=X-FNF(1)*Y
    X_int = X_int-FNF_int_arr[1]*Y_int;
    // 01480 IF ABS(X-50)>=50 THEN 1560
    if(ABS(X_int-50)>=50)goto Lbl_01560;
    // 01490 LET Y=INT(50*RND(1)^2)+(1-P)*INT(50*RND(1)^4)
    Y_int = INT(50*IPower(RND(1),2))+(1-P_int)*INT(50*IPower(RND(1),4));
    // 01500 LET X=X+FNF(1)*Y
    X_int = X_int+FNF_int_arr[1]*Y_int;
    // 01510 IF ABS(X-50)>=50 THEN 1540
    if(ABS(X_int-50)>=50)goto Lbl_01540;
    // 01520 PRINT Y;L$(3);" RUNBACK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,Y_int); strcat(buf,L_str_arr[3]);strcat(buf," RUNBACK");strcat(buf,"\n");fputs(buf,fh); };
    // 01530 GOTO 1580
    goto Lbl_01580;

  Lbl_01540:
    // 01540 PRINT L$(4);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str_arr[4]);fputs(buf,fh); };
    // 01550 GOTO 3270
    goto Lbl_03270;

  Lbl_01560:
    // 01560 PRINT "TOUCHBACK FOR ";O$(P);"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOUCHBACK FOR "); strcat(buf,O_str_arr[P_int]);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01570 LET X=20+P*60
    X_int = 20+P_int*60;

  Lbl_01580:
    // 01580 REM FIRST DOWN
    // 01590 GOSUB 3810
    Routine_03810();

  Lbl_01600:
    // 01600 LET X1=X
    X1_int = X_int;
    // 01610 LET D=1
    D_int = 1;
    // 01620 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01630 PRINT "FIRST DOWN ";O$(P);"***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FIRST DOWN "); strcat(buf,O_str_arr[P_int]);strcat(buf,"***");strcat(buf,"\n");fputs(buf,fh); };
    // 01640 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01650 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01660 GOTO 1670
    goto Lbl_01670;

  Lbl_01670:
    // 01670 REM NEW PLAY
    // 01680 LET T=T+1
    T_int = T_int+1;
    // 01690 IF T=30 THEN 1870
    if(T_int==30)goto Lbl_01870;
    // 01700 IF T<50 THEN 1750
    if(T_int<50)goto Lbl_01750;
    // 01710 IF RND(1)>.2 THEN 1750
    if(RND(1)>0.2)goto Lbl_01750;
    // 01720 PRINT "END OF GAME  ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"END OF GAME  ***");strcat(buf,"\n");fputs(buf,fh); };
    // 01730 PRINT "FINAL SCORE:  ";O$(0);": ";S(0);"  ";O$(1);": ";S(1)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FINAL SCORE:  "); strcat(buf,O_str_arr[0]);strcat(buf,": "); b2c_INT(buf,S_int_arr[0]);strcat(buf,"  "); strcat(buf,O_str_arr[1]);strcat(buf,": "); b2c_INT(buf,S_int_arr[1]);strcat(buf,"\n");fputs(buf,fh); };
    // 01740 STOP
    exit(1);

  Lbl_01750:
    // 01750 IF P=1 THEN 2560
    if(P_int==1)goto Lbl_02560;
    // 01760 PRINT "NEXT PLAY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NEXT PLAY");fputs(buf,fh); };

  Lbl_01770:
    // 01770 INPUT Z
    // Start of Basic INPUT statement 01770
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01770
    // 01780 IF Z<>INT(Z) THEN 1800
    if(Z_int!=INT(Z_int))goto Lbl_01800;
    // 01790 IF ABS(Z-4)<=3 THEN 1820
    if(ABS(Z_int-4)<=3)goto Lbl_01820;

  Lbl_01800:
    // 01800 PRINT "ILLEGAL PLAY NUMBER, RETYPE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL PLAY NUMBER, RETYPE");fputs(buf,fh); };
    // 01810 GOTO 1770
    goto Lbl_01770;

  Lbl_01820:
    // 01820 LET F=0
    F_int = 0;
    // 01830 PRINT L$(Z+6);".  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str_arr[Z_int+6]);strcat(buf,".  ");fputs(buf,fh); };
    // 01840 LET R=RND(1)*(.98+FNF(1)*.02)
    R_int = RND(1)*(0.98+FNF_int_arr[1]*0.02);
    // 01850 LET R1=RND(1)
    R1_int = RND(1);
    // 01860 ON Z GOTO 1920,1970,2070,2290,2380,2380,2490
    switch((int)(Z_int)){
        case 1: goto Lbl_01920;
        case 2: goto Lbl_01970;
        case 3: goto Lbl_02070;
        case 4: goto Lbl_02290;
        case 5: goto Lbl_02380;
        case 6: goto Lbl_02380;
        case 7: goto Lbl_02490;
        default: break; 
    };

  Lbl_01870:
    // 01870 REM  JEAN'S SPECIAL
    // 01880 IF RND(1)> 1/3 THEN 1750
    if(RND(1)>1/3)goto Lbl_01750;
    // 01890 PRINT "GAME DELAYED.  DOG ON FIELD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GAME DELAYED.  DOG ON FIELD.");strcat(buf,"\n");fputs(buf,fh); };
    // 01900 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01910 GOTO 1750
    goto Lbl_01750;

  Lbl_01920:
    // 01920 REM  SIMPLE RUN
    // 01930 LET Y=INT(24*(R-.5)^3+3)
    Y_int = INT(24*FPower((R_int-0.5),3)+3);
    // 01940 IF RND(1)<.05 THEN 1990
    if(RND(1)<0.05)goto Lbl_01990;
    // 01950 GOTO 2880
    goto Lbl_02880;
    // 01960 REM  TRICKY RUN

  Lbl_01970:
    // 01970 LET Y=INT(20*R-5)
    Y_int = INT(20*R_int-5);
    // 01980 IF RND(1)>.1 THEN 2880
    if(RND(1)>0.1)goto Lbl_02880;

  Lbl_01990:
    // 01990 LET F=-1
    F_int = -1;
    // 02000 LET X3=X
    X3_int = X_int;
    // 02010 LET X=X+FNF(1)*Y
    X_int = X_int+FNF_int_arr[1]*Y_int;
    // 02020 IF ABS(X-50)>=50 THEN 2050
    if(ABS(X_int-50)>=50)goto Lbl_02050;
    // 02030 PRINT "***  FUMBLE AFTER ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"***  FUMBLE AFTER ");fputs(buf,fh); };
    // 02040 GOTO 2920
    goto Lbl_02920;

  Lbl_02050:
    // 02050 PRINT "***  FUMBLE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"***  FUMBLE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02060 GOTO 3120
    goto Lbl_03120;

  Lbl_02070:
    // 02070 REM  SHORT PASS
    // 02080 LET Y=INT(60*(R1-.5)^3+10)
    Y_int = INT(60*FPower((R1_int-0.5),3)+10);
    // 02090 IF R<.05 THEN 2140
    if(R_int<0.05)goto Lbl_02140;
    // 02100 IF R<.15 THEN 2200
    if(R_int<0.15)goto Lbl_02200;
    // 02110 IF R<.55 THEN 2230
    if(R_int<0.55)goto Lbl_02230;

  Lbl_02120:
    // 02120 PRINT "COMPLETE.  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPLETE.  ");fputs(buf,fh); };
    // 02130 GOTO 2880
    goto Lbl_02880;

  Lbl_02140:
    // 02140 IF D=4 THEN 2230
    if(D_int==4)goto Lbl_02230;
    // 02150 PRINT "INTERCEPTED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INTERCEPTED.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02160:
    // 02160 LET F=-1
    F_int = -1;
    // 02170 LET X=X+FNF(1)*Y
    X_int = X_int+FNF_int_arr[1]*Y_int;
    // 02180 IF ABS(X-50)>=50 THEN 3120
    if(ABS(X_int-50)>=50)goto Lbl_03120;
    // 02190 GOTO 2970
    goto Lbl_02970;

  Lbl_02200:
    // 02200 PRINT "PASSER TACKLED.  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PASSER TACKLED.  ");fputs(buf,fh); };
    // 02210 LET Y=-INT(10*R1)
    Y_int = -INT(10*R1_int);
    // 02220 GOTO 2880
    goto Lbl_02880;

  Lbl_02230:
    // 02230 LET Y=0
    Y_int = 0;
    // 02240 IF RND(1)<.3 THEN 2270
    if(RND(1)<0.3)goto Lbl_02270;
    // 02250 PRINT "INCOMPLETE.  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INCOMPLETE.  ");fputs(buf,fh); };
    // 02260 GOTO 2880
    goto Lbl_02880;

  Lbl_02270:
    // 02270 PRINT "BATTED DOWN.  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BATTED DOWN.  ");fputs(buf,fh); };
    // 02280 GOTO 2880
    goto Lbl_02880;

  Lbl_02290:
    // 02290 REM  LONG PASS
    // 02300 LET Y=INT(160*(R1-.5)^3+30)
    Y_int = INT(160*FPower((R1_int-0.5),3)+30);
    // 02310 IF R<.1 THEN 2140
    if(R_int<0.1)goto Lbl_02140;
    // 02320 IF R<.3 THEN 2350
    if(R_int<0.3)goto Lbl_02350;
    // 02330 IF R<.75 THEN 2230
    if(R_int<0.75)goto Lbl_02230;
    // 02340 GOTO 2120
    goto Lbl_02120;

  Lbl_02350:
    // 02350 PRINT "PASSER TACKLED.  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PASSER TACKLED.  ");fputs(buf,fh); };
    // 02360 LET Y=-INT(15*R1+3)
    Y_int = -INT(15*R1_int+3);
    // 02370 GOTO 2880
    goto Lbl_02880;

  Lbl_02380:
    // 02380 REM  PUNT OR KICK
    // 02390 LET Y=INT(100*(R-.5)^3+35)
    Y_int = INT(100*FPower((R_int-0.5),3)+35);
    // 02400 IF D=4 THEN 2420
    if(D_int==4)goto Lbl_02420;
    // 02410 LET Y=INT(Y*1.3)
    Y_int = INT(Y_int*1.3);

  Lbl_02420:
    // 02420 PRINT Y;L$(3);" PUNT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,Y_int); strcat(buf,L_str_arr[3]);strcat(buf," PUNT");strcat(buf,"\n");fputs(buf,fh); };
    // 02430 IF ABS(X+Y*FNF(1)-50)>=50 THEN 2480
    if(ABS(X_int+Y_int*FNF_int_arr[1]-50)>=50)goto Lbl_02480;
    // 02440 IF D<4 THEN 2480
    if(D_int<4)goto Lbl_02480;
    // 02450 LET Y1=INT(R1^2*20)
    Y1_int = INT(IPower(R1_int,2)*20);
    // 02460 PRINT Y1;L$(3);" RUN BACK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,Y1_int); strcat(buf,L_str_arr[3]);strcat(buf," RUN BACK");strcat(buf,"\n");fputs(buf,fh); };
    // 02470 LET Y=Y-Y1
    Y_int = Y_int-Y1_int;

  Lbl_02480:
    // 02480 GOTO 2160
    goto Lbl_02160;

  Lbl_02490:
    // 02490 REM  PLACE KICK
    // 02500 LET Y=INT(100*(R-.5)^3+35)
    Y_int = INT(100*FPower((R_int-0.5),3)+35);
    // 02510 IF R1>.15 THEN 2550
    if(R1_int>0.15)goto Lbl_02550;
    // 02520 PRINT "KICK IS BLOCKED  ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"KICK IS BLOCKED  ***");strcat(buf,"\n");fputs(buf,fh); };
    // 02530 LET X=X-5*FNF(1)
    X_int = X_int-5*FNF_int_arr[1];
    // 02540 LET P=1-P
    P_int = 1-P_int;

  Lbl_02550:
    // 02550 GOTO 1580
    goto Lbl_01580;

  Lbl_02560:
    // 02560 REM  OPPONENT'S PLAY
    // 02570 IF D>1 THEN 2630
    if(D_int>1)goto Lbl_02630;

  Lbl_02580:
    // 02580 IF RND(1)>1/3 THEN 2610
    if(RND(1)>1/3)goto Lbl_02610;
    // 02590 LET Z=3
    Z_int = 3;
    // 02600 GOTO 1820
    goto Lbl_01820;

  Lbl_02610:
    // 02610 LET Z=1
    Z_int = 1;
    // 02620 GOTO 1820
    goto Lbl_01820;

  Lbl_02630:
    // 02630 IF D=4 THEN 2780
    if(D_int==4)goto Lbl_02780;
    // 02640 IF 10+X-X1<5 THEN 2580
    if(10+X_int-X1_int<5)goto Lbl_02580;
    // 02650 IF X<5 THEN 2580
    if(X_int<5)goto Lbl_02580;
    // 02660 IF X<=10 THEN 2850
    if(X_int<=10)goto Lbl_02850;
    // 02670 IF X>X1 THEN 2710
    if(X_int>X1_int)goto Lbl_02710;

  Lbl_02680:
    // 02680 LET A=INT(2*RND(1))
    A_int = INT(2*RND(1));
    // 02690 LET Z=2+A*2
    Z_int = 2+A_int*2;
    // 02700 GOTO 1820
    goto Lbl_01820;

  Lbl_02710:
    // 02710 IF D<3 THEN 2680
    if(D_int<3)goto Lbl_02680;
    // 02720 IF X<45 THEN 2680
    if(X_int<45)goto Lbl_02680;
    // 02730 IF RND(1)>1/4 THEN 2760
    if(RND(1)>1/4)goto Lbl_02760;
    // 02740 LET Z=6
    Z_int = 6;
    // 02750 GOTO 1820
    goto Lbl_01820;

  Lbl_02760:
    // 02760 LET Z=4
    Z_int = 4;
    // 02770 GOTO 1820
    goto Lbl_01820;

  Lbl_02780:
    // 02780 IF X>30 THEN 2830
    if(X_int>30)goto Lbl_02830;
    // 02790 IF 10+X-X1<3 THEN 2580
    if(10+X_int-X1_int<3)goto Lbl_02580;
    // 02800 IF X<3 THEN 2580
    if(X_int<3)goto Lbl_02580;
    // 02810 LET Z=7
    Z_int = 7;
    // 02820 GOTO 1820
    goto Lbl_01820;

  Lbl_02830:
    // 02830 LET Z=5
    Z_int = 5;
    // 02840 GOTO 1820
    goto Lbl_01820;

  Lbl_02850:
    // 02850 LET A=INT(2*RND(1))
    A_int = INT(2*RND(1));
    // 02860 LET Z=2+A
    Z_int = 2+A_int;
    // 02870 GOTO 1820
    goto Lbl_01820;

  Lbl_02880:
    // 02880 REM GAIN OR LOSS
    // 02890 LET X3=X
    X3_int = X_int;
    // 02900 LET X=X+FNF(1)*Y
    X_int = X_int+FNF_int_arr[1]*Y_int;
    // 02910 IF ABS(X-50)>=50 THEN 3120
    if(ABS(X_int-50)>=50)goto Lbl_03120;

  Lbl_02920:
    // 02920 IF Y=0 THEN 2940
    if(Y_int==0)goto Lbl_02940;
    // 02930 PRINT ABS(Y);L$(3);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_INT(buf,ABS(Y_int)); strcat(buf,L_str_arr[3]);fputs(buf,fh); };

  Lbl_02940:
    // 02940 PRINT L$(15+SGN(Y))
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str_arr[15+SGN(Y_int)]);strcat(buf,"\n");fputs(buf,fh); };
    // 02950 IF ABS(X3-50)>40 THEN 2970
    if(ABS(X3_int-50)>40)goto Lbl_02970;
    // 02960 IF RND(1)<.1 THEN 3470
    if(RND(1)<0.1)goto Lbl_03470;

  Lbl_02970:
    // 02970 GOSUB 3810
    Routine_03810();
    // 02980 IF F=0 THEN 3010
    if(F_int==0)goto Lbl_03010;

  Lbl_02990:
    // 02990 LET P=1-P
    P_int = 1-P_int;
    // 03000 GOTO 1600
    goto Lbl_01600;

  Lbl_03010:
    // 03010 IF FNG(1)>=10 THEN 1600
    if(FNG_int_arr[1]>=10)goto Lbl_01600;
    // 03020 IF D=4 THEN 2990
    if(D_int==4)goto Lbl_02990;
    // 03030 LET D=D+1
    D_int = D_int+1;
    // 03040 PRINT "DOWN: ";D;"     ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DOWN: "); b2c_INT(buf,D_int);strcat(buf,"     ");fputs(buf,fh); };
    // 03050 IF (X1-50)*FNF(1)<40 THEN 3080
    if((X1_int-50)*FNF_int_arr[1]<40)goto Lbl_03080;
    // 03060 PRINT "GOAL TO GO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOAL TO GO");strcat(buf,"\n");fputs(buf,fh); };
    // 03070 GOTO 3090
    goto Lbl_03090;

  Lbl_03080:
    // 03080 PRINT "YARDS TO GO: ";10-FNG(1)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YARDS TO GO: "); b2c_INT(buf,10-FNG_int_arr[1]);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03090:
    // 03090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03110 GOTO 1670
    goto Lbl_01670;

  Lbl_03120:
    // 03120 REM BALL IN END-ZONE
    // 03130 IF X>=100 THEN 3160
    if(X_int>=100)goto Lbl_03160;
    // 03140 LET E=0
    E_int = 0;
    // 03150 GOTO 3170
    goto Lbl_03170;

  Lbl_03160:
    // 03160 LET E=1
    E_int = 1;

  Lbl_03170:
    // 03170 ON 1+E-F*2+P*4 GOTO 3180,3260,3430,3380,3260,3180,3380,3430
    switch((int)(1+E_int-F_int*2+P_int*4)){
        case 1: goto Lbl_03180;
        case 2: goto Lbl_03260;
        case 3: goto Lbl_03430;
        case 4: goto Lbl_03380;
        case 5: goto Lbl_03260;
        case 6: goto Lbl_03180;
        case 7: goto Lbl_03380;
        case 8: goto Lbl_03430;
        default: break; 
    };

  Lbl_03180:
    // 03180 REM SAFETY
    // 03190 LET S(1-P)=S(1-P)+2
    S_int_arr[1-P_int] = S_int_arr[1-P_int]+2;
    // 03200 PRINT L$(19)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str_arr[19]);strcat(buf,"\n");fputs(buf,fh); };
    // 03210 GOSUB 3870
    Routine_03870();
    // 03220 PRINT O$(P);" KICKS OFF FROM ITS 20 YARD LINE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O_str_arr[P_int]);strcat(buf," KICKS OFF FROM ITS 20 YARD LINE.");strcat(buf,"\n");fputs(buf,fh); };
    // 03230 LET X=20+P*60
    X_int = 20+P_int*60;
    // 03240 LET P=1-P
    P_int = 1-P_int;
    // 03250 GOTO 1450
    goto Lbl_01450;

  Lbl_03260:
    // 03260 REM OFFENSIVE TD

  Lbl_03270:
    // 03270 PRINT L$(17);"***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str_arr[17]);strcat(buf,"***");strcat(buf,"\n");fputs(buf,fh); };
    // 03280 IF RND(1)>.8 THEN 3350
    if(RND(1)>0.8)goto Lbl_03350;
    // 03290 LET S(P)=S(P)+7
    S_int_arr[P_int] = S_int_arr[P_int]+7;
    // 03300 PRINT "KICK IS GOOD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"KICK IS GOOD.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03310:
    // 03310 GOSUB 3870
    Routine_03870();
    // 03320 PRINT O$(P);" KICKS OFF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O_str_arr[P_int]);strcat(buf," KICKS OFF");strcat(buf,"\n");fputs(buf,fh); };
    // 03330 LET P=1-P
    P_int = 1-P_int;
    // 03340 GOTO 1440
    goto Lbl_01440;

  Lbl_03350:
    // 03350 PRINT "KICK IS OFF TO THE SIDE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"KICK IS OFF TO THE SIDE");strcat(buf,"\n");fputs(buf,fh); };
    // 03360 LET S(P)=S(P)+6
    S_int_arr[P_int] = S_int_arr[P_int]+6;
    // 03370 GOTO 3310
    goto Lbl_03310;

  Lbl_03380:
    // 03380 REM TOUCHBACK
    // 03390 PRINT L$(18)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str_arr[18]);strcat(buf,"\n");fputs(buf,fh); };
    // 03400 LET P=1-P
    P_int = 1-P_int;
    // 03410 LET X=20+P*60
    X_int = 20+P_int*60;
    // 03420 GOTO 1580
    goto Lbl_01580;

  Lbl_03430:
    // 03430 REM DEFENSIVE TD
    // 03440 PRINT L$(17);"FOR ";O$(1-P);"***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str_arr[17]);strcat(buf,"FOR "); strcat(buf,O_str_arr[1-P_int]);strcat(buf,"***");strcat(buf,"\n");fputs(buf,fh); };
    // 03450 LET P=1-P
    P_int = 1-P_int;
    // 03460 GOTO 3270
    goto Lbl_03270;

  Lbl_03470:
    // 03470 REM PENALTY
    // 03480 LET P3=INT(2*RND(1))
    P3_int = INT(2*RND(1));
    // 03490 PRINT O$(P3);" OFFSIDES -- PENALTY OF 5 YARDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O_str_arr[P3_int]);strcat(buf," OFFSIDES -- PENALTY OF 5 YARDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 03500 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03510 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03520 IF P3=0 THEN 3590
    if(P3_int==0)goto Lbl_03590;
    // 03530 PRINT "DO YOU ACCEPT THE PENALTY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU ACCEPT THE PENALTY");fputs(buf,fh); };

  Lbl_03540:
    // 03540 INPUT A$
    // Start of Basic INPUT statement 03540
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
    }; // End of Basic INPUT statement 03540
    // 03550 IF A$="NO" THEN 2970
    if(strcmp(A_str,"NO")==0)goto Lbl_02970;
    // 03560 IF A$="YES" THEN 3720
    if(strcmp(A_str,"YES")==0)goto Lbl_03720;
    // 03570 PRINT "TYPE 'YES' OR 'NO'";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TYPE 'YES' OR 'NO'");fputs(buf,fh); };
    // 03580 GOTO 3540
    goto Lbl_03540;

  Lbl_03590:
    // 03590 REM OPPONENT'S STRATEGY ON PENALTY
    // 03600 IF P=1 THEN 3650
    if(P_int==1)goto Lbl_03650;
    // 03610 IF Y<=0 THEN 3690
    if(Y_int<=0)goto Lbl_03690;
    // 03620 IF F<0 THEN 3690
    if(F_int<0)goto Lbl_03690;
    // 03630 IF FNG(1)<3*D-2 THEN 3690
    if(FNG_int_arr[1]<3*D_int-2)goto Lbl_03690;
    // 03640 GOTO 3710
    goto Lbl_03710;

  Lbl_03650:
    // 03650 IF Y<=5 THEN 3710
    if(Y_int<=5)goto Lbl_03710;
    // 03660 IF F<0 THEN 3710
    if(F_int<0)goto Lbl_03710;
    // 03670 IF D<4 THEN 3690
    if(D_int<4)goto Lbl_03690;
    // 03680 IF FNG(1)<10 THEN 3710
    if(FNG_int_arr[1]<10)goto Lbl_03710;

  Lbl_03690:
    // 03690 PRINT "PENALTY REFUSED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PENALTY REFUSED.");strcat(buf,"\n");fputs(buf,fh); };
    // 03700 GOTO 2970
    goto Lbl_02970;

  Lbl_03710:
    // 03710 PRINT "PENALTY ACCEPTED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PENALTY ACCEPTED.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03720:
    // 03720 LET F=0
    F_int = 0;
    // 03730 LET D=D-1
    D_int = D_int-1;
    // 03740 IF P<>P3 THEN 3770
    if(P_int!=P3_int)goto Lbl_03770;
    // 03750 LET X=X3-FNF(1)*5
    X_int = X3_int-FNF_int_arr[1]*5;
    // 03760 GOTO 2970
    goto Lbl_02970;

  Lbl_03770:
    // 03770 LET X=X3+FNF(1)*5
    X_int = X3_int+FNF_int_arr[1]*5;
    // 03780 GOTO 2970
    goto Lbl_02970;
    // 03790 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
