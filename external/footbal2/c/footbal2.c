/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/footbal2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56d6c1d9a6d0 ---------A   00001  PRINT TAB(32);"FOOTBALL"
    0x56d6c1d9a670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56d6c1d9a7f0 ---------A   00003  PRINT:PRINT:PRINT
    0x56d6c1d9bb80 ---------A   00100  REM
    0x56d6c1d9cf30 ---------A   00120  DIM A(20),B(20),C(40),H(2),T(2),W(2),X(2),Y(2),Z(2)
    0x56d6c1d9d0b0 ---------A   00130  DIM M$(2),D(2),P$(20)
    0x56d6c1da3a60 ---------A   00140  PRINT "PRESENTING N.F.U. FOOTBALL (NO FORTRAN USED)"
    0x56d6c1da3b20 ---------A   00145  PRINT:PRINT
    0x56d6c1da3d40 ---------A T 00150  INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x56d6c1da3fa0 ---------A   00160  IF A$="NO" THEN 290
    0x56d6c1da4200 ---------A   00165  IF A$<>"YES" THEN 150
    0x56d6c1da43c0 ---------A   00170  PRINT "THIS IS A FOOTBALL GAME FOR TWO TEAMS IN WHICH PLAYERS MUST"
    0x56d6c1da4580 ---------A   00180  PRINT "PREPARE A TAPE WITH A DATA STATEMENT (1770 FOR TEAM 1,"
    0x56d6c1da4740 ---------A   00190  PRINT "1780 FOR TEAM 2) IN WHICH EACH TEAM SCRAMBLES NOS. 1-20"
    0x56d6c1da4900 ---------A   00195  PRINT "THESE NUMBERS ARE THEN ASSIGNED TO TWENTY GIVEN PLAYS."
    0x56d6c1da4ab0 ---------A   00200  PRINT"A LIST OF NOS. AND THEIR PLAYS IS PROVIDED WITH"
    0x56d6c1da4c70 ---------A   00210  PRINT "BOTH TEAMS HAVING THE SAME PLAYS. THE MORE SIMILAR THE"
    0x56d6c1da4e20 ---------A   00220  PRINT "PLAYS THE LESS YARDAGE GAINED.  SCORES ARE GIVEN"
    0x56d6c1da4fd0 ---------A   00223  PRINT "WHENEVER SCORES ARE MADE. SCORES MAY ALSO BE OBTAINED"
    0x56d6c1da5180 ---------A   00225  PRINT "BY INPUTTING 99,99 FOR PLAY NOS. TO PUNT OR ATTEMPT A"
    0x56d6c1da5340 ---------A   00227  PRINT "FIELD GOAL, INPUT 77,77 FOR PLAY NUMBERS. QUESTIONS WILL BE"
    0x56d6c1da5500 ---------A   00230  PRINT "ASKED THEN. ON 4TH DOWN, YOU WILL ALSO BE ASKED WHETHER"
    0x56d6c1da56c0 ---------A   00240  PRINT "YOU WANT TO PUNT OR ATTEMPT A FIELD GOAL. IF THE ANSWER TO"
    0x56d6c1da5870 ---------A   00250  PRINT "BOTH QUESTIONS IS NO IT WILL BE ASSUMED YOU WANT TO"
    0x56d6c1da5a20 ---------A   00260  PRINT "TRY AND GAIN YARDAGE. ANSWER ALL QUESTIONS YES OR NO."
    0x56d6c1da5bd0 ---------A   00270  PRINT "THE GAME IS PLAYED UNTIL PLAYERS TERMINATE (CONTROL-C)."
    0x56d6c1da5d50 ---------A   00280  PRINT "PLEASE PREPARE A TAPE AND RUN.": STOP
    0x56d6c1da6160 ---------A T 00290  PRINT:PRINT "PLEASE INPUT SCORE LIMIT ON GAME";:INPUT E
    0x56d6c1da6930 ---------A   00300  FOR I=1 TO 40: READ N: IF I>20 THEN 350
    0x56d6c1da6ca0 ---------A   00330  A(N)=I: GOTO 360
    0x56d6c1da70b0 ---------A T 00350  B(N)=I-20
    0x56d6c1da74d0 ---------A T 00360  C(I)=N: NEXT I
    0x56d6c1da7ad0 ---------A   00370  FOR I=1 TO 20: READ P$(I): NEXT I
    0x56d6c1da81a0 ---------A   00380  L=0: T=1
    0x56d6c1da8500 ---------A T 00410  PRINT "TEAM";T;"PLAY CHART"
    0x56d6c1da8660 ---------A   00420  PRINT "NO.      PLAY"
    0x56d6c1da8940 ---------A   00430  FOR I=1 TO 20
    0x56d6c1da89c0 ---------A   00440  REM
    0x56d6c1da9060 ---------A   00450  PRINT C(I+L);TAB(6);P$(I)
    0x56d6c1da91a0 ---------A   00460  NEXT I
    0x56d6c1da96e0 ---------A   00630  L=L+20:T=2
    0x56d6c1da9780 ---------A   00640  PRINT
    0x56d6c1da9920 ---------A   00650  PRINT "TEAR OFF HERE----------------------------------------------"
    0x56d6c1da9d80 ---------A   00660  FOR X=1 TO 11: PRINT: NEXT X
    0x56d6c1daa1a0 ---------A   00670  FOR Z=1 TO 3000: NEXT Z
    0x56d6c1daa430 ---------A   00680  IF L=20 THEN 410
    0x56d6c1daaf70 ---------A   00690  D(1)=0: D(2)=3: M$(1)="--->": M$(2)="<---"
    0x56d6c1daba60 ---------A   00700  H(1)=0: H(2)=0: T(1)=2: T(2)=1
    0x56d6c1dac550 ---------A   00710  W(1)=-1: W(2)=1: X(1)=100: X(2)=0
    0x56d6c1dad030 ---------A   00720  Y(1)=1: Y(2)=-1: Z(1)=0: Z(2)=100
    0x56d6c1dad0d0 ---------A   00725  GOSUB 1910
    0x56d6c1dad250 ---------A   00730  PRINT "TEAM 1 DEFENDS 0 YD GOAL -- TEAM 2 DEFENDS 100 YD GOAL."
    0x56d6c1dad840 ---------A   00740  T=INT(2*RND(1)+1)
    0x56d6c1dad9f0 ---------A   00760  PRINT: PRINT "THE COIN IS FLIPPED"
    0x56d6c1dae100 ---------A T 00765  P=X(T)-Y(T)*40
    0x56d6c1dae500 ---------A   00770  GOSUB 1860: PRINT : PRINT "TEAM";T;"RECEIVES KICK-OFF"
    0x56d6c1daeba0 ---------A   00780  K=INT(26*RND(1)+40)
    0x56d6c1daf100 ---------A T 00790  P=P-Y(T)*K
    0x56d6c1daf780 ---------A T 00794  IF W(T)*P<Z(T)+10 THEN 810
    0x56d6c1daf960 ---------A   00795  PRINT: PRINT "BALL WENT OUT OF ENDZONE --AUTOMATIC TOUCHBACK--"
    0x56d6c1dafa00 ---------A   00796  GOTO 870 
    0x56d6c1dafed0 ---------A T 00810  PRINT "BALL WENT";K;"YARDS.  NOW ON";P:GOSUB 1900
    0x56d6c1db03a0 ---------A T 00830  PRINT "TEAM";T;"DO YOU WANT TO RUNBACK";:INPUT A$
    0x56d6c1db0630 ---------A   00840  IF A$="YES" THEN 1430
    0x56d6c1db08c0 ---------A   00845  IF A$<>"NO" THEN 830
    0x56d6c1db1230 ---------A   00850  IF W(T)*P<Z(T) THEN 880
    0x56d6c1db1850 ---------A T 00870  P=Z(T)-W(T)*20
    0x56d6c1db1d40 ---------A T 00880  D=1: S=P
    0x56d6c1db2290 ---------A T 00885  FOR I=1 TO 72: PRINT "=";: NEXT I
    0x56d6c1db2980 ---------A   00890  PRINT: PRINT "TEAM";T;"DOWN";D;"ON";P
    0x56d6c1db2bf0 ---------A   00893  IF D<>1 THEN 900
    0x56d6c1db3490 ---------A   00895  IF Y(T)*(P+Y(T)*10)>=X(T) THEN 898
    0x56d6c1db3700 ---------A   00897  C=4: GOTO 900
    0x56d6c1db3910 ---------A T 00898  C=8
    0x56d6c1db3b90 ---------A T 00900  IF C=8 THEN 904
    0x56d6c1db4590 ---------A   00901  PRINT TAB(27);10-(Y(T)*P-Y(T)*S);"YARDS TO 1ST DOWN"
    0x56d6c1db4620 ---------A   00902  GOTO 910
    0x56d6c1db4dc0 ---------A T 00904  PRINT TAB(27);X(T)-Y(T)*P;"YARDS"
    0x56d6c1db5070 ---------A T 00910  GOSUB 1900: IF D=4 THEN 1180
    0x56d6c1db50f0 ---------A T 00920  REM
    0x56d6c1db5820 ---------A   00930  U=INT(3*RND(0)-1): GOTO 940
    0x56d6c1db59a0 ---------A T 00936  PRINT "ILLEGAL PLAY NUMBER, CHECK AND"
    0x56d6c1db5b30 ---------A T 00940  PRINT "INPUT OFFENSIVE PLAY, DEFENSIVE PLAY";
    0x56d6c1db5da0 ---------A   00950  IF T=2 THEN 970
    0x56d6c1db61c0 ---------A   00960  INPUT P1,P2: GOTO 975
    0x56d6c1db63f0 ---------A T 00970  INPUT P2,P1
    0x56d6c1db6650 ---------A T 00975  IF P1=77 THEN 1180
    0x56d6c1db68b0 ---------A   00980  IF P1>20 THEN 1800
    0x56d6c1db6b10 ---------A   00985  IF P1<1 THEN 1800
    0x56d6c1db6d70 ---------A   00990  IF P2>20 THEN 1800
    0x56d6c1db6fe0 ---------A   00992  IF P2<1 THEN 1800
    0x56d6c1db7620 ---------A   00995  P1=INT(P1): P2=INT(P2)
    0x56d6c1db8780 ---------A   01000  Y=INT(ABS(A(P1)-B(P2))/19*((X(T)-Y(T)*P+25)*RND(1)-15))
    0x56d6c1db8a40 ---------A   01005  PRINT: IF T=2 THEN 1015
    0x56d6c1db8d80 ---------A   01010  IF A(P1)<11 THEN 1048
    0x56d6c1db8e10 ---------A   01012  GOTO 1020
    0x56d6c1db9140 ---------A T 01015  IF B(P2)<11 THEN 1048
    0x56d6c1db93b0 ---------A T 01020  IF U<>0 THEN 1035
    0x56d6c1db9610 ---------A   01025  PRINT "PASS INCOMPLETE TEAM";T
    0x56d6c1db9890 ---------A   01030  Y=0: GOTO 1050
    0x56d6c1db9e70 ---------A T 01035  G=RND(1): IF G>.025 THEN 1040
    0x56d6c1dba0f0 ---------A   01037  IF Y>2 THEN 1045
    0x56d6c1dba2c0 ---------A T 01040  PRINT "QUARTERBACK SCRAMBLED": GOTO 1050
    0x56d6c1dba480 ---------A T 01045  PRINT "PASS COMPLETED": GOTO 1050
    0x56d6c1dba5d0 ---------A T 01048  PRINT "THE BALL WAS RUN"
    0x56d6c1dbab50 ---------A T 01050  P=P-W(T)*Y
    0x56d6c1dbb020 ---------A   01060  PRINT: PRINT "NET YARDS GAINED ON DOWN";D;"ARE ";Y
    0x56d6c1dbb580 ---------A   01070  G=RND(1): IF G>.025 THEN 1110
    0x56d6c1dbbb50 ---------A T 01080  PRINT: PRINT "** LOSS OF POSSESSION FROM TEAM";T;"TO TEAM";T(T)
    0x56d6c1dbbf80 ---------A   01100  GOSUB 1850: PRINT: T=T(T): GOTO 830
    0x56d6c1dbc4e0 ---------A T 01110  IF Y(T)*P>=X(T) THEN 1320
    0x56d6c1dbca50 ---------A   01120  IF W(T)*P>=Z(T) THEN 1230
    0x56d6c1dbd1e0 ---------A   01130  IF Y(T)*P-Y(T)*S>=10 THEN 880
    0x56d6c1dbd780 ---------A   01140  D=D+1: IF D<>5 THEN 885
    0x56d6c1dbdd60 ---------A   01160  PRINT: PRINT "CONVERSION UNSUCCESSFUL TEAM";T:T=T(T)
    0x56d6c1dbde40 ---------A   01170  GOSUB 1850: GOTO 880
    0x56d6c1dbe300 ---------A T 01180  PRINT "DOES TEAM";T;"WANT TO PUNT";: INPUT A$
    0x56d6c1dbe590 ---------A   01185  IF A$="NO" THEN 1200
    0x56d6c1dbe840 ---------A   01187  IF A$<>"YES" THEN 1180
    0x56d6c1dbf130 ---------A T 01190  PRINT:PRINT "TEAM";T;"WILL PUNT": G=RND(1): IF G<.025 THEN 1080
    0x56d6c1dbfad0 ---------A   01195  GOSUB 1850: K=INT(25*RND(1)+35): T=T(T): GOTO 790
    0x56d6c1dbffa0 ---------A T 01200  PRINT "DOES TEAM";T;"WANT TO ATTEMPT A FIELD GOAL";: INPUT A$
    0x56d6c1dc0230 ---------A   01210  IF A$="YES" THEN 1640
    0x56d6c1dc04b0 ---------A   01215  IF A$<>"NO" THEN 1200
    0x56d6c1dc0560 ---------A   01217  GOTO 920
    0x56d6c1dc0930 ---------A T 01230  PRINT: PRINT "SAFETY AGAINST TEAM";T;"**********************OH-OH"
    0x56d6c1dc1070 ---------A   01240  H(T(T))=H(T(T))+2: GOSUB 1810
    0x56d6c1dc1560 ---------A   01280  PRINT"TEAM";T;"DO YOU WANT TO PUNT INSTEAD OF A KICKOFF";:INPUT A$
    0x56d6c1dc1e00 ---------A   01290  P=Z(T)-W(T)*20: IF A$="YES" THEN 1190
    0x56d6c1dc29f0 ---------A T 01320  PRINT: PRINT "TOUCHDOWN BY TEAM";T;"*********************YEA TEAM"
    0x56d6c1dc31f0 ---------A   01340  Q=7: G=RND(1): IF G>.1 THEN 1380
    0x56d6c1dc35b0 ---------A   01360  Q=6: PRINT "EXTRA POINT NO GOOD": GOTO 1390
    0x56d6c1dc3710 ---------A T 01380  PRINT "EXTRA POINT GOOD"
    0x56d6c1dc3c80 ---------A T 01390  H(T)=H(T)+Q: GOSUB 1810
    0x56d6c1dc3fe0 ---------A   01420  T=T(T): GOTO 765
    0x56d6c1dc45d0 ---------A T 01430  K=INT(9*RND(0)+1)
    0x56d6c1dc5320 ---------A   01440  R=INT(((X(T)-Y(T)*P+25)*RND(1)-15)/K)
    0x56d6c1dc5890 ---------A   01460  P=P-W(T)*R
    0x56d6c1dc5d50 ---------A   01480  PRINT:PRINT "RUNBACK TEAM";T;R;"YARDS"
    0x56d6c1dc6290 ---------A   01485  G=RND(1): IF G<.025 THEN 1080
    0x56d6c1dc6800 ---------A   01490  IF Y(T)*P>=X(T) THEN 1320
    0x56d6c1dc6d60 ---------A   01500  IF W(T)*P>=Z(T) THEN 1230
    0x56d6c1dc6e00 ---------A   01510  GOTO 880
    0x56d6c1dc71d0 ---------A T 01640  PRINT: PRINT "TEAM";T;"WILL ATTEMPT A FIELD GOAL"
    0x56d6c1dc7710 ---------A   01645  G=RND(1): IF G<.025 THEN 1080
    0x56d6c1dc7dd0 ---------A   01650  F=INT(35*RND(1)+20)
    0x56d6c1dc8190 ---------A   01660  PRINT: PRINT "KICK IS";F;"YARDS LONG"
    0x56d6c1dc89c0 ---------A   01680  P=P-W(T)*F: G=RND(1)
    0x56d6c1dc8c20 ---------A   01690  IF G<.35 THEN 1735
    0x56d6c1dc91b0 ---------A   01700  IF Y(T)*P<X(T) THEN 1740
    0x56d6c1dc9530 ---------A   01710  PRINT "FIELD GOAL GOOD FOR TEAM";T;"*********************YEA"
    0x56d6c1dc97b0 ---------A   01720  Q=3: GOTO 1390
    0x56d6c1dc9930 ---------A T 01735  PRINT "BALL WENT WIDE"
    0x56d6c1dc9cd0 ---------A T 01740  PRINT "FIELD GOAL UNSUCCESFUL TEAM";T;"-----------------TOO BAD"
    0x56d6c1dca380 ---------A   01742  GOSUB 1850: IF Y(T)*P<X(T)+10 THEN 1745
    0x56d6c1dca700 ---------A   01744  T=T(T): GOTO 794
    0x56d6c1dca9c0 ---------A T 01745  PRINT: PRINT "BALL NOW ON";P
    0x56d6c1dcadb0 ---------A   01750  T=T(T): GOSUB 1900: GOTO 830
    0x56d6c1dcbfd0 ---------A   01770  DATA 17,8,4,14,19,3,10,1,7,11,15,9,5,20,13,18,16,2,12,6
    0x56d6c1dcd1f0 ---------A   01780  DATA 20,2,17,5,8,18,12,11,1,4,19,14,10,7,9,15,6,13,16,3
    0x56d6c1dcd6f0 ---------A   01790  DATA "PITCHOUT","TRIPLE REVERSE","DRAW","QB SNEAK","END AROUND"
    0x56d6c1dcdb00 ---------A   01792  DATA "DOUBLE REVERSE","LEFT SWEEP","RIGHT SWEEP","OFF TACKLE"
    0x56d6c1dcde40 ---------A   01794  DATA "WISHBONE OPTION","FLARE PASS","SCREEN PASS"
    0x56d6c1dce260 ---------A   01796  DATA "ROLL OUT OPTION","RIGHT CURL","LEFT CURL","WISHBONE OPTION"
    0x56d6c1dce650 ---------A   01798  DATA "SIDELINE PASS","HALF-BACK OPTION","RAZZLE-DAZZLE","BOMB!!!!"
    0x56d6c1dce8c0 ---------A T 01800  IF P1<>99 THEN 936
    0x56d6c1dcec60 ---------A G 01810  PRINT: PRINT "TEAM 1 SCORE IS";H(1)
    0x56d6c1dceff0 ---------A   01820  PRINT "TEAM 2 SCORE IS";H(2): PRINT
    0x56d6c1dcf380 ---------A   01825  IF H(T)<E THEN 1830
    0x56d6c1dcf750 ---------A   01827  PRINT "TEAM";T;"WINS*******************": GOTO 2000
    0x56d6c1dcf9a0 ---------A T 01830  IF P1=99 THEN 940
    0x56d6c1dcfa00 ---------A   01835  RETURN
    0x56d6c1dcfaa0 ----------   01850  PRINT
    0x56d6c1dd0070 ----------   01860  FOR X=1 TO 72: PRINT "+";: NEXT X: PRINT
    0x56d6c1dd00d0 ----------   01870  RETURN
    0x56d6c1dd08b0 ---------B G 01900  PRINT TAB(D(T)+5+P/2);M$(T)
    0x56d6c1dd0a70 ---------B G 01910  PRINT "TEAM 1 [0   10   20   30   40   50   60   70   80   90";
    0x56d6c1dd0bd0 ---------B   01915  PRINT "   100] TEAM 2"
    0x56d6c1dd0c50 ---------B   01920  PRINT
    0x56d6c1dd0cb0 ---------B   01930  RETURN
    0x56d6c1dd0d10 ---------A T 02000  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00150      00165T
     00290      00160T
     00350      00300T
     00360      00330T
     00410      00680T
     00765      01420T
     00790      01195T
     00794      01744T
     00810      00794T
     00830      00845T, 01100T, 01750T
     00870      00796T
     00880      00850T, 01130T, 01170T, 01510T
     00885      01140T
     00898      00895T
     00900      00893T, 00897T
     00904      00900T
     00910      00902T
     00920      01217T
     00936      01800T
     00940      00930T, 01830T
     00970      00950T
     00975      00960T
     01015      01005T
     01020      01012T
     01035      01020T
     01040      01035T
     01045      01037T
     01048      01010T, 01015T
     01050      01030T, 01040T, 01045T
     01080      01190T, 01485T, 01645T
     01110      01070T
     01180      00910T, 00975T, 01187T
     01190      01290T
     01200      01185T, 01215T
     01230      01120T, 01500T
     01320      01110T, 01490T
     01380      01340T
     01390      01360T, 01720T
     01430      00840T
     01640      01210T
     01735      01690T
     01740      01700T
     01745      01742T
     01800      00980T, 00985T, 00990T, 00992T
     01810      01240G, 01390G
     01830      01825T
     01900      00810G
     01910      00725G
     02000      01827T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x56d6c1d9a6d0 (00001)   0x56d6c1d9a6d0 (00001)   0x56d6c1dd0d10 (02000)   0x56d6c1dd0d10 (02000)   
   B) 0x56d6c1dd08b0 (01900)   0x56d6c1dd08b0 (01900)   0x56d6c1dd0cb0 (01930)   0x56d6c1dd0cb0 (01930)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/footbal2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56d6c1d9a6d0 ---------A   00001  PRINT TAB(32);"FOOTBALL"
    0x56d6c1d9a670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56d6c1d8b2b0 ----------   00003  PRINT
    0x56d6c1d9a9e0 ----------        a PRINT
    0x56d6c1d9a7f0 ---------A        b PRINT
    0x56d6c1d9bb80 ---------A   00100  REM
    0x56d6c1d9cf30 ---------A   00120  DIM A(20),B(20),C(40),H(2),T(2),W(2),X(2),Y(2),Z(2)
    0x56d6c1d9d0b0 ---------A   00130  DIM M$(2),D(2),P$(20)
    0x56d6c1da3a60 ---------A   00140  PRINT "PRESENTING N.F.U. FOOTBALL (NO FORTRAN USED)"
    0x56d6c1da3ac0 ----------   00145  PRINT
    0x56d6c1da3b20 ---------A        a PRINT
    0x56d6c1da3d40 ---------A T 00150  INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x56d6c1da3fa0 ---------A   00160  IF A$="NO" THEN 290
    0x56d6c1da4200 ---------A   00165  IF A$<>"YES" THEN 150
    0x56d6c1da43c0 ---------A   00170  PRINT "THIS IS A FOOTBALL GAME FOR TWO TEAMS IN WHICH PLAYERS MUST"
    0x56d6c1da4580 ---------A   00180  PRINT "PREPARE A TAPE WITH A DATA STATEMENT (1770 FOR TEAM 1,"
    0x56d6c1da4740 ---------A   00190  PRINT "1780 FOR TEAM 2) IN WHICH EACH TEAM SCRAMBLES NOS. 1-20"
    0x56d6c1da4900 ---------A   00195  PRINT "THESE NUMBERS ARE THEN ASSIGNED TO TWENTY GIVEN PLAYS."
    0x56d6c1da4ab0 ---------A   00200  PRINT"A LIST OF NOS. AND THEIR PLAYS IS PROVIDED WITH"
    0x56d6c1da4c70 ---------A   00210  PRINT "BOTH TEAMS HAVING THE SAME PLAYS. THE MORE SIMILAR THE"
    0x56d6c1da4e20 ---------A   00220  PRINT "PLAYS THE LESS YARDAGE GAINED.  SCORES ARE GIVEN"
    0x56d6c1da4fd0 ---------A   00223  PRINT "WHENEVER SCORES ARE MADE. SCORES MAY ALSO BE OBTAINED"
    0x56d6c1da5180 ---------A   00225  PRINT "BY INPUTTING 99,99 FOR PLAY NOS. TO PUNT OR ATTEMPT A"
    0x56d6c1da5340 ---------A   00227  PRINT "FIELD GOAL, INPUT 77,77 FOR PLAY NUMBERS. QUESTIONS WILL BE"
    0x56d6c1da5500 ---------A   00230  PRINT "ASKED THEN. ON 4TH DOWN, YOU WILL ALSO BE ASKED WHETHER"
    0x56d6c1da56c0 ---------A   00240  PRINT "YOU WANT TO PUNT OR ATTEMPT A FIELD GOAL. IF THE ANSWER TO"
    0x56d6c1da5870 ---------A   00250  PRINT "BOTH QUESTIONS IS NO IT WILL BE ASSUMED YOU WANT TO"
    0x56d6c1da5a20 ---------A   00260  PRINT "TRY AND GAIN YARDAGE. ANSWER ALL QUESTIONS YES OR NO."
    0x56d6c1da5bd0 ---------A   00270  PRINT "THE GAME IS PLAYED UNTIL PLAYERS TERMINATE (CONTROL-C)."
    0x56d6c1da5cf0 ----------   00280  PRINT "PLEASE PREPARE A TAPE AND RUN."
    0x56d6c1da5d50 ---------A        a STOP
    0x56d6c1da5de0 ---------- T 00290  PRINT
    0x56d6c1da5f20 ---------- T      a PRINT "PLEASE INPUT SCORE LIMIT ON GAME";
    0x56d6c1da6160 ---------A T      b INPUT E
    0x56d6c1da64e0 ----------   00300  FOR I=1 TO 40
    0x56d6c1da66e0 ----------        a READ N
    0x56d6c1da6930 ---------A        b IF I>20 THEN 350
    0x56d6c1da6c30 ----------   00330  A(N)=I
    0x56d6c1da6ca0 ---------A        a GOTO 360
    0x56d6c1da70b0 ---------A T 00350  B(N)=I-20
    0x56d6c1da73a0 ---------- T 00360  C(I)=N
    0x56d6c1da74d0 ---------A T      a NEXT I
    0x56d6c1da7780 ----------   00370  FOR I=1 TO 20
    0x56d6c1da79a0 ----------        a READ P$(I)
    0x56d6c1da7ad0 ---------A        b NEXT I
    0x56d6c1da7fb0 ----------   00380  L=0
    0x56d6c1da81a0 ---------A        a T=1
    0x56d6c1da8500 ---------A T 00410  PRINT "TEAM";T;"PLAY CHART"
    0x56d6c1da8660 ---------A   00420  PRINT "NO.      PLAY"
    0x56d6c1da8940 ---------A   00430  FOR I=1 TO 20
    0x56d6c1da89c0 ---------A   00440  REM
    0x56d6c1da9060 ---------A   00450  PRINT C(I+L);TAB(6);P$(I)
    0x56d6c1da91a0 ---------A   00460  NEXT I
    0x56d6c1da94d0 ----------   00630  L=L+20
    0x56d6c1da96e0 ---------A        a T=2
    0x56d6c1da9780 ---------A   00640  PRINT
    0x56d6c1da9920 ---------A   00650  PRINT "TEAR OFF HERE----------------------------------------------"
    0x56d6c1da9be0 ----------   00660  FOR X=1 TO 11
    0x56d6c1da9c40 ----------        a PRINT
    0x56d6c1da9d80 ---------A        b NEXT X
    0x56d6c1daa060 ----------   00670  FOR Z=1 TO 3000
    0x56d6c1daa1a0 ---------A        a NEXT Z
    0x56d6c1daa430 ---------A   00680  IF L=20 THEN 410
    0x56d6c1daa6f0 ----------   00690  D(1)=0
    0x56d6c1daa9a0 ----------        a D(2)=3
    0x56d6c1daac70 ----------        b M$(1)="--->"
    0x56d6c1daaf70 ---------A        c M$(2)="<---"
    0x56d6c1dab220 ----------   00700  H(1)=0
    0x56d6c1dab4d0 ----------        a H(2)=0
    0x56d6c1dab780 ----------        b T(1)=2
    0x56d6c1daba60 ---------A        c T(2)=1
    0x56d6c1dabd10 ----------   00710  W(1)=-1
    0x56d6c1dabfc0 ----------        a W(2)=1
    0x56d6c1dac270 ----------        b X(1)=100
    0x56d6c1dac550 ---------A        c X(2)=0
    0x56d6c1dac800 ----------   00720  Y(1)=1
    0x56d6c1dacab0 ----------        a Y(2)=-1
    0x56d6c1dacd60 ----------        b Z(1)=0
    0x56d6c1dad030 ---------A        c Z(2)=100
    0x56d6c1dad0d0 ---------A   00725  GOSUB 1910
    0x56d6c1dad250 ---------A   00730  PRINT "TEAM 1 DEFENDS 0 YD GOAL -- TEAM 2 DEFENDS 100 YD GOAL."
    0x56d6c1dad840 ---------A   00740  T=INT(2*RND(1)+1)
    0x56d6c1dad890 ----------   00760  PRINT
    0x56d6c1dad9f0 ---------A        a PRINT "THE COIN IS FLIPPED"
    0x56d6c1dae100 ---------A T 00765  P=X(T)-Y(T)*40
    0x56d6c1dae150 ----------   00770  GOSUB 1860
    0x56d6c1dae1a0 ----------        a PRINT 
    0x56d6c1dae500 ---------A        b PRINT "TEAM";T;"RECEIVES KICK-OFF"
    0x56d6c1daeba0 ---------A   00780  K=INT(26*RND(1)+40)
    0x56d6c1daf100 ---------A T 00790  P=P-Y(T)*K
    0x56d6c1daf780 ---------A T 00794  IF W(T)*P<Z(T)+10 THEN 810
    0x56d6c1daf7e0 ----------   00795  PRINT
    0x56d6c1daf960 ---------A        a PRINT "BALL WENT OUT OF ENDZONE --AUTOMATIC TOUCHBACK--"
    0x56d6c1dafa00 ---------A   00796  GOTO 870 
    0x56d6c1dafe30 ---------- T 00810  PRINT "BALL WENT";K;"YARDS.  NOW ON";P
    0x56d6c1dafed0 ---------A T      a GOSUB 1900
    0x56d6c1db0230 ---------- T 00830  PRINT "TEAM";T;"DO YOU WANT TO RUNBACK";
    0x56d6c1db03a0 ---------A T      a INPUT A$
    0x56d6c1db0630 ---------A   00840  IF A$="YES" THEN 1430
    0x56d6c1db08c0 ---------A   00845  IF A$<>"NO" THEN 830
    0x56d6c1db1230 ---------A   00850  IF W(T)*P<Z(T) THEN 880
    0x56d6c1db1850 ---------A T 00870  P=Z(T)-W(T)*20
    0x56d6c1db1a40 ---------- T 00880  D=1
    0x56d6c1db1d40 ---------A T      a S=P
    0x56d6c1db1ff0 ---------- T 00885  FOR I=1 TO 72
    0x56d6c1db2150 ---------- T      a PRINT "=";
    0x56d6c1db2290 ---------A T      b NEXT I
    0x56d6c1db2320 ----------   00890  PRINT
    0x56d6c1db2980 ---------A        a PRINT "TEAM";T;"DOWN";D;"ON";P
    0x56d6c1db2bf0 ---------A   00893  IF D<>1 THEN 900
    0x56d6c1db3490 ---------A   00895  IF Y(T)*(P+Y(T)*10)>=X(T) THEN 898
    0x56d6c1db3690 ----------   00897  C=4
    0x56d6c1db3700 ---------A        a GOTO 900
    0x56d6c1db3910 ---------A T 00898  C=8
    0x56d6c1db3b90 ---------A T 00900  IF C=8 THEN 904
    0x56d6c1db4590 ---------A   00901  PRINT TAB(27);10-(Y(T)*P-Y(T)*S);"YARDS TO 1ST DOWN"
    0x56d6c1db4620 ---------A   00902  GOTO 910
    0x56d6c1db4dc0 ---------A T 00904  PRINT TAB(27);X(T)-Y(T)*P;"YARDS"
    0x56d6c1db4e20 ---------- T 00910  GOSUB 1900
    0x56d6c1db5070 ---------A T      a IF D=4 THEN 1180
    0x56d6c1db50f0 ---------A T 00920  REM
    0x56d6c1db5790 ----------   00930  U=INT(3*RND(0)-1)
    0x56d6c1db5820 ---------A        a GOTO 940
    0x56d6c1db59a0 ---------A T 00936  PRINT "ILLEGAL PLAY NUMBER, CHECK AND"
    0x56d6c1db5b30 ---------A T 00940  PRINT "INPUT OFFENSIVE PLAY, DEFENSIVE PLAY";
    0x56d6c1db5da0 ---------A   00950  IF T=2 THEN 970
    0x56d6c1db6140 ----------   00960  INPUT P1,P2
    0x56d6c1db61c0 ---------A        a GOTO 975
    0x56d6c1db63f0 ---------A T 00970  INPUT P2,P1
    0x56d6c1db6650 ---------A T 00975  IF P1=77 THEN 1180
    0x56d6c1db68b0 ---------A   00980  IF P1>20 THEN 1800
    0x56d6c1db6b10 ---------A   00985  IF P1<1 THEN 1800
    0x56d6c1db6d70 ---------A   00990  IF P2>20 THEN 1800
    0x56d6c1db6fe0 ---------A   00992  IF P2<1 THEN 1800
    0x56d6c1db72e0 ----------   00995  P1=INT(P1)
    0x56d6c1db7620 ---------A        a P2=INT(P2)
    0x56d6c1db8780 ---------A   01000  Y=INT(ABS(A(P1)-B(P2))/19*((X(T)-Y(T)*P+25)*RND(1)-15))
    0x56d6c1db87d0 ----------   01005  PRINT
    0x56d6c1db8a40 ---------A        a IF T=2 THEN 1015
    0x56d6c1db8d80 ---------A   01010  IF A(P1)<11 THEN 1048
    0x56d6c1db8e10 ---------A   01012  GOTO 1020
    0x56d6c1db9140 ---------A T 01015  IF B(P2)<11 THEN 1048
    0x56d6c1db93b0 ---------A T 01020  IF U<>0 THEN 1035
    0x56d6c1db9610 ---------A   01025  PRINT "PASS INCOMPLETE TEAM";T
    0x56d6c1db9810 ----------   01030  Y=0
    0x56d6c1db9890 ---------A        a GOTO 1050
    0x56d6c1db9c20 ---------- T 01035  G=RND(1)
    0x56d6c1db9e70 ---------A T      a IF G>.025 THEN 1040
    0x56d6c1dba0f0 ---------A   01037  IF Y>2 THEN 1045
    0x56d6c1dba230 ---------- T 01040  PRINT "QUARTERBACK SCRAMBLED"
    0x56d6c1dba2c0 ---------A T      a GOTO 1050
    0x56d6c1dba3f0 ---------- T 01045  PRINT "PASS COMPLETED"
    0x56d6c1dba480 ---------A T      a GOTO 1050
    0x56d6c1dba5d0 ---------A T 01048  PRINT "THE BALL WAS RUN"
    0x56d6c1dbab50 ---------A T 01050  P=P-W(T)*Y
    0x56d6c1dbaba0 ----------   01060  PRINT
    0x56d6c1dbb020 ---------A        a PRINT "NET YARDS GAINED ON DOWN";D;"ARE ";Y
    0x56d6c1dbb300 ----------   01070  G=RND(1)
    0x56d6c1dbb580 ---------A        a IF G>.025 THEN 1110
    0x56d6c1dbb5e0 ---------- T 01080  PRINT
    0x56d6c1dbbb50 ---------A T      a PRINT "** LOSS OF POSSESSION FROM TEAM";T;"TO TEAM";T(T)
    0x56d6c1dbbbb0 ----------   01100  GOSUB 1850
    0x56d6c1dbbc00 ----------        a PRINT
    0x56d6c1dbbf00 ----------        b T=T(T)
    0x56d6c1dbbf80 ---------A        c GOTO 830
    0x56d6c1dbc4e0 ---------A T 01110  IF Y(T)*P>=X(T) THEN 1320
    0x56d6c1dbca50 ---------A   01120  IF W(T)*P>=Z(T) THEN 1230
    0x56d6c1dbd1e0 ---------A   01130  IF Y(T)*P-Y(T)*S>=10 THEN 880
    0x56d6c1dbd500 ----------   01140  D=D+1
    0x56d6c1dbd780 ---------A        a IF D<>5 THEN 885
    0x56d6c1dbd7e0 ----------   01160  PRINT
    0x56d6c1dbda30 ----------        a PRINT "CONVERSION UNSUCCESSFUL TEAM";T
    0x56d6c1dbdd60 ---------A        b T=T(T)
    0x56d6c1dbddb0 ----------   01170  GOSUB 1850
    0x56d6c1dbde40 ---------A        a GOTO 880
    0x56d6c1dbe190 ---------- T 01180  PRINT "DOES TEAM";T;"WANT TO PUNT";
    0x56d6c1dbe300 ---------A T      a INPUT A$
    0x56d6c1dbe590 ---------A   01185  IF A$="NO" THEN 1200
    0x56d6c1dbe840 ---------A   01187  IF A$<>"YES" THEN 1180
    0x56d6c1dbe8a0 ---------- T 01190  PRINT
    0x56d6c1dbebe0 ---------- T      a PRINT "TEAM";T;"WILL PUNT"
    0x56d6c1dbeec0 ---------- T      b G=RND(1)
    0x56d6c1dbf130 ---------A T      c IF G<.025 THEN 1080
    0x56d6c1dbf190 ----------   01195  GOSUB 1850
    0x56d6c1dbf740 ----------        a K=INT(25*RND(1)+35)
    0x56d6c1dbfa30 ----------        b T=T(T)
    0x56d6c1dbfad0 ---------A        c GOTO 790
    0x56d6c1dbfe30 ---------- T 01200  PRINT "DOES TEAM";T;"WANT TO ATTEMPT A FIELD GOAL";
    0x56d6c1dbffa0 ---------A T      a INPUT A$
    0x56d6c1dc0230 ---------A   01210  IF A$="YES" THEN 1640
    0x56d6c1dc04b0 ---------A   01215  IF A$<>"NO" THEN 1200
    0x56d6c1dc0560 ---------A   01217  GOTO 920
    0x56d6c1dc05b0 ---------- T 01230  PRINT
    0x56d6c1dc0930 ---------A T      a PRINT "SAFETY AGAINST TEAM";T;"**********************OH-OH"
    0x56d6c1dc0fd0 ----------   01240  H(T(T))=H(T(T))+2
    0x56d6c1dc1070 ---------A        a GOSUB 1810
    0x56d6c1dc13e0 ----------   01280  PRINT"TEAM";T;"DO YOU WANT TO PUNT INSTEAD OF A KICKOFF";
    0x56d6c1dc1560 ---------A        a INPUT A$
    0x56d6c1dc1b60 ----------   01290  P=Z(T)-W(T)*20
    0x56d6c1dc1e00 ---------A        a IF A$="YES" THEN 1190
    0x56d6c1dc2670 ---------- T 01320  PRINT
    0x56d6c1dc29f0 ---------A T      a PRINT "TOUCHDOWN BY TEAM";T;"*********************YEA TEAM"
    0x56d6c1dc2cb0 ----------   01340  Q=7
    0x56d6c1dc2f80 ----------        a G=RND(1)
    0x56d6c1dc31f0 ---------A        b IF G>.1 THEN 1380
    0x56d6c1dc33f0 ----------   01360  Q=6
    0x56d6c1dc3520 ----------        a PRINT "EXTRA POINT NO GOOD"
    0x56d6c1dc35b0 ---------A        b GOTO 1390
    0x56d6c1dc3710 ---------A T 01380  PRINT "EXTRA POINT GOOD"
    0x56d6c1dc3c10 ---------- T 01390  H(T)=H(T)+Q
    0x56d6c1dc3c80 ---------A T      a GOSUB 1810
    0x56d6c1dc3f70 ----------   01420  T=T(T)
    0x56d6c1dc3fe0 ---------A        a GOTO 765
    0x56d6c1dc45d0 ---------A T 01430  K=INT(9*RND(0)+1)
    0x56d6c1dc5320 ---------A   01440  R=INT(((X(T)-Y(T)*P+25)*RND(1)-15)/K)
    0x56d6c1dc5890 ---------A   01460  P=P-W(T)*R
    0x56d6c1dc58e0 ----------   01480  PRINT
    0x56d6c1dc5d50 ---------A        a PRINT "RUNBACK TEAM";T;R;"YARDS"
    0x56d6c1dc6030 ----------   01485  G=RND(1)
    0x56d6c1dc6290 ---------A        a IF G<.025 THEN 1080
    0x56d6c1dc6800 ---------A   01490  IF Y(T)*P>=X(T) THEN 1320
    0x56d6c1dc6d60 ---------A   01500  IF W(T)*P>=Z(T) THEN 1230
    0x56d6c1dc6e00 ---------A   01510  GOTO 880
    0x56d6c1dc6e50 ---------- T 01640  PRINT
    0x56d6c1dc71d0 ---------A T      a PRINT "TEAM";T;"WILL ATTEMPT A FIELD GOAL"
    0x56d6c1dc74b0 ----------   01645  G=RND(1)
    0x56d6c1dc7710 ---------A        a IF G<.025 THEN 1080
    0x56d6c1dc7dd0 ---------A   01650  F=INT(35*RND(1)+20)
    0x56d6c1dc7e20 ----------   01660  PRINT
    0x56d6c1dc8190 ---------A        a PRINT "KICK IS";F;"YARDS LONG"
    0x56d6c1dc86d0 ----------   01680  P=P-W(T)*F
    0x56d6c1dc89c0 ---------A        a G=RND(1)
    0x56d6c1dc8c20 ---------A   01690  IF G<.35 THEN 1735
    0x56d6c1dc91b0 ---------A   01700  IF Y(T)*P<X(T) THEN 1740
    0x56d6c1dc9530 ---------A   01710  PRINT "FIELD GOAL GOOD FOR TEAM";T;"*********************YEA"
    0x56d6c1dc9730 ----------   01720  Q=3
    0x56d6c1dc97b0 ---------A        a GOTO 1390
    0x56d6c1dc9930 ---------A T 01735  PRINT "BALL WENT WIDE"
    0x56d6c1dc9cd0 ---------A T 01740  PRINT "FIELD GOAL UNSUCCESFUL TEAM";T;"-----------------TOO BAD"
    0x56d6c1dc9d30 ----------   01742  GOSUB 1850
    0x56d6c1dca380 ---------A        a IF Y(T)*P<X(T)+10 THEN 1745
    0x56d6c1dca680 ----------   01744  T=T(T)
    0x56d6c1dca700 ---------A        a GOTO 794
    0x56d6c1dca750 ---------- T 01745  PRINT
    0x56d6c1dca9c0 ---------A T      a PRINT "BALL NOW ON";P
    0x56d6c1dcacc0 ----------   01750  T=T(T)
    0x56d6c1dcad10 ----------        a GOSUB 1900
    0x56d6c1dcadb0 ---------A        b GOTO 830
    0x56d6c1dcbfd0 ---------A   01770  DATA 17,8,4,14,19,3,10,1,7,11,15,9,5,20,13,18,16,2,12,6
    0x56d6c1dcd1f0 ---------A   01780  DATA 20,2,17,5,8,18,12,11,1,4,19,14,10,7,9,15,6,13,16,3
    0x56d6c1dcd6f0 ---------A   01790  DATA "PITCHOUT","TRIPLE REVERSE","DRAW","QB SNEAK","END AROUND"
    0x56d6c1dcdb00 ---------A   01792  DATA "DOUBLE REVERSE","LEFT SWEEP","RIGHT SWEEP","OFF TACKLE"
    0x56d6c1dcde40 ---------A   01794  DATA "WISHBONE OPTION","FLARE PASS","SCREEN PASS"
    0x56d6c1dce260 ---------A   01796  DATA "ROLL OUT OPTION","RIGHT CURL","LEFT CURL","WISHBONE OPTION"
    0x56d6c1dce650 ---------A   01798  DATA "SIDELINE PASS","HALF-BACK OPTION","RAZZLE-DAZZLE","BOMB!!!!"
    0x56d6c1dce8c0 ---------A T 01800  IF P1<>99 THEN 936
    0x56d6c1dce920 ---------- G 01810  PRINT
    0x56d6c1dcec60 ---------A G      a PRINT "TEAM 1 SCORE IS";H(1)
    0x56d6c1dcef60 ----------   01820  PRINT "TEAM 2 SCORE IS";H(2)
    0x56d6c1dceff0 ---------A        a PRINT
    0x56d6c1dcf380 ---------A   01825  IF H(T)<E THEN 1830
    0x56d6c1dcf6d0 ----------   01827  PRINT "TEAM";T;"WINS*******************"
    0x56d6c1dcf750 ---------A        a GOTO 2000
    0x56d6c1dcf9a0 ---------A T 01830  IF P1=99 THEN 940
    0x56d6c1dcfa00 ---------A   01835  RETURN
    0x56d6c1dcfaa0 ----------   01850  PRINT
    0x56d6c1dcfd60 ----------   01860  FOR X=1 TO 72
    0x56d6c1dcfec0 ----------        a PRINT "+";
    0x56d6c1dd0000 ----------        b NEXT X
    0x56d6c1dd0070 ----------        c PRINT
    0x56d6c1dd00d0 ----------   01870  RETURN
    0x56d6c1dd08b0 ---------B G 01900  PRINT TAB(D(T)+5+P/2);M$(T)
    0x56d6c1dd0a70 ---------B G 01910  PRINT "TEAM 1 [0   10   20   30   40   50   60   70   80   90";
    0x56d6c1dd0bd0 ---------B   01915  PRINT "   100] TEAM 2"
    0x56d6c1dd0c50 ---------B   01920  PRINT
    0x56d6c1dd0cb0 ---------B   01930  RETURN
    0x56d6c1dd0d10 ---------A T 02000  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/footbal2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56d6c1d9a6d0 ---------A   01000  PRINT TAB(32);"FOOTBALL"
    0x56d6c1d9a670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56d6c1d8b2b0 ---------- T 01020  PRINT
    0x56d6c1d9a9e0 ----------   01030  PRINT
    0x56d6c1d9a7f0 ---------A T 01040  PRINT
    0x56d6c1d9bb80 ---------A T 01050  REM
    0x56d6c1d9cf30 ---------A   01060  DIM A(20),B(20),C(40),H(2),T(2),W(2),X(2),Y(2),Z(2)
    0x56d6c1d9d0b0 ---------A   01070  DIM M$(2),D(2),P$(20)
    0x56d6c1da3a60 ---------A T 01080  PRINT "PRESENTING N.F.U. FOOTBALL (NO FORTRAN USED)"
    0x56d6c1da3ac0 ----------   01090  PRINT
    0x56d6c1da3b20 ---------A   01100  PRINT
    0x56d6c1da3d40 ---------A T 01110  INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x56d6c1da3fa0 ---------A   01120  IF A$="NO" THEN 1330
    0x56d6c1da4200 ---------A   01130  IF A$<>"YES" THEN 1110
    0x56d6c1da43c0 ---------A   01140  PRINT "THIS IS A FOOTBALL GAME FOR TWO TEAMS IN WHICH PLAYERS MUST"
    0x56d6c1da4580 ---------A   01150  PRINT "PREPARE A TAPE WITH A DATA STATEMENT (1770 FOR TEAM 1,"
    0x56d6c1da4740 ---------A   01160  PRINT "1780 FOR TEAM 2) IN WHICH EACH TEAM SCRAMBLES NOS. 1-20"
    0x56d6c1da4900 ---------A   01170  PRINT "THESE NUMBERS ARE THEN ASSIGNED TO TWENTY GIVEN PLAYS."
    0x56d6c1da4ab0 ---------A T 01180  PRINT"A LIST OF NOS. AND THEIR PLAYS IS PROVIDED WITH"
    0x56d6c1da4c70 ---------A T 01190  PRINT "BOTH TEAMS HAVING THE SAME PLAYS. THE MORE SIMILAR THE"
    0x56d6c1da4e20 ---------A T 01200  PRINT "PLAYS THE LESS YARDAGE GAINED.  SCORES ARE GIVEN"
    0x56d6c1da4fd0 ---------A   01210  PRINT "WHENEVER SCORES ARE MADE. SCORES MAY ALSO BE OBTAINED"
    0x56d6c1da5180 ---------A   01220  PRINT "BY INPUTTING 99,99 FOR PLAY NOS. TO PUNT OR ATTEMPT A"
    0x56d6c1da5340 ---------A T 01230  PRINT "FIELD GOAL, INPUT 77,77 FOR PLAY NUMBERS. QUESTIONS WILL BE"
    0x56d6c1da5500 ---------A   01240  PRINT "ASKED THEN. ON 4TH DOWN, YOU WILL ALSO BE ASKED WHETHER"
    0x56d6c1da56c0 ---------A   01250  PRINT "YOU WANT TO PUNT OR ATTEMPT A FIELD GOAL. IF THE ANSWER TO"
    0x56d6c1da5870 ---------A   01260  PRINT "BOTH QUESTIONS IS NO IT WILL BE ASSUMED YOU WANT TO"
    0x56d6c1da5a20 ---------A   01270  PRINT "TRY AND GAIN YARDAGE. ANSWER ALL QUESTIONS YES OR NO."
    0x56d6c1da5bd0 ---------A   01280  PRINT "THE GAME IS PLAYED UNTIL PLAYERS TERMINATE (CONTROL-C)."
    0x56d6c1da5cf0 ----------   01290  PRINT "PLEASE PREPARE A TAPE AND RUN."
    0x56d6c1da5d50 ---------A   01300  STOP
    0x56d6c1da5de0 ----------   01310  PRINT
    0x56d6c1da5f20 ---------- T 01320  PRINT "PLEASE INPUT SCORE LIMIT ON GAME";
    0x56d6c1da6160 ---------A   01330  INPUT E
    0x56d6c1da64e0 ----------   01340  FOR I=1 TO 40
    0x56d6c1da66e0 ----------   01350  READ N
    0x56d6c1da6930 ---------A   01360  IF I>20 THEN 1390
    0x56d6c1da6c30 ----------   01370  A(N)=I
    0x56d6c1da6ca0 ---------A T 01380  GOTO 1410
    0x56d6c1da70b0 ---------A T 01390  B(N)=I-20
    0x56d6c1da73a0 ----------   01400  C(I)=N
    0x56d6c1da74d0 ---------A   01410  NEXT I
    0x56d6c1da7780 ----------   01420  FOR I=1 TO 20
    0x56d6c1da79a0 ---------- T 01430  READ P$(I)
    0x56d6c1da7ad0 ---------A   01440  NEXT I
    0x56d6c1da7fb0 ----------   01450  L=0
    0x56d6c1da81a0 ---------A   01460  T=1
    0x56d6c1da8500 ---------A   01470  PRINT "TEAM";T;"PLAY CHART"
    0x56d6c1da8660 ---------A   01480  PRINT "NO.      PLAY"
    0x56d6c1da8940 ---------A   01490  FOR I=1 TO 20
    0x56d6c1da89c0 ---------A   01500  REM
    0x56d6c1da9060 ---------A   01510  PRINT C(I+L);TAB(6);P$(I)
    0x56d6c1da91a0 ---------A   01520  NEXT I
    0x56d6c1da94d0 ----------   01530  L=L+20
    0x56d6c1da96e0 ---------A   01540  T=2
    0x56d6c1da9780 ---------A   01550  PRINT
    0x56d6c1da9920 ---------A   01560  PRINT "TEAR OFF HERE----------------------------------------------"
    0x56d6c1da9be0 ----------   01570  FOR X=1 TO 11
    0x56d6c1da9c40 ----------   01580  PRINT
    0x56d6c1da9d80 ---------A   01590  NEXT X
    0x56d6c1daa060 ----------   01600  FOR Z=1 TO 3000
    0x56d6c1daa1a0 ---------A   01610  NEXT Z
    0x56d6c1daa430 ---------A   01620  IF L=20 THEN 1470
    0x56d6c1daa6f0 ----------   01630  D(1)=0
    0x56d6c1daa9a0 ---------- T 01640  D(2)=3
    0x56d6c1daac70 ----------   01650  M$(1)="--->"
    0x56d6c1daaf70 ---------A   01660  M$(2)="<---"
    0x56d6c1dab220 ----------   01670  H(1)=0
    0x56d6c1dab4d0 ----------   01680  H(2)=0
    0x56d6c1dab780 ----------   01690  T(1)=2
    0x56d6c1daba60 ---------A   01700  T(2)=1
    0x56d6c1dabd10 ----------   01710  W(1)=-1
    0x56d6c1dabfc0 ----------   01720  W(2)=1
    0x56d6c1dac270 ----------   01730  X(1)=100
    0x56d6c1dac550 ---------A T 01740  X(2)=0
    0x56d6c1dac800 ----------   01750  Y(1)=1
    0x56d6c1dacab0 ----------   01760  Y(2)=-1
    0x56d6c1dacd60 ----------   01770  Z(1)=0
    0x56d6c1dad030 ---------A   01780  Z(2)=100
    0x56d6c1dad0d0 ---------A   01790  GOSUB 3720
    0x56d6c1dad250 ---------A T 01800  PRINT "TEAM 1 DEFENDS 0 YD GOAL -- TEAM 2 DEFENDS 100 YD GOAL."
    0x56d6c1dad840 ---------A G 01810  T=INT(2*RND(1)+1)
    0x56d6c1dad890 ----------   01820  PRINT
    0x56d6c1dad9f0 ---------A T 01830  PRINT "THE COIN IS FLIPPED"
    0x56d6c1dae100 ---------A   01840  P=X(T)-Y(T)*40
    0x56d6c1dae150 ----------   01850  GOSUB 3690
    0x56d6c1dae1a0 ----------   01860  PRINT 
    0x56d6c1dae500 ---------A   01870  PRINT "TEAM";T;"RECEIVES KICK-OFF"
    0x56d6c1daeba0 ---------A   01880  K=INT(26*RND(1)+40)
    0x56d6c1daf100 ---------A   01890  P=P-Y(T)*K
    0x56d6c1daf780 ---------A G 01900  IF W(T)*P<Z(T)+10 THEN 1950
    0x56d6c1daf7e0 ---------- G 01910  PRINT
    0x56d6c1daf960 ---------A   01920  PRINT "BALL WENT OUT OF ENDZONE --AUTOMATIC TOUCHBACK--"
    0x56d6c1dafa00 ---------A   01930  GOTO 2010 
    0x56d6c1dafe30 ----------   01940  PRINT "BALL WENT";K;"YARDS.  NOW ON";P
    0x56d6c1dafed0 ---------A   01950  GOSUB 3710
    0x56d6c1db0230 ----------   01960  PRINT "TEAM";T;"DO YOU WANT TO RUNBACK";
    0x56d6c1db03a0 ---------A   01970  INPUT A$
    0x56d6c1db0630 ---------A   01980  IF A$="YES" THEN 3130
    0x56d6c1db08c0 ---------A   01990  IF A$<>"NO" THEN 1970
    0x56d6c1db1230 ---------A T 02000  IF W(T)*P<Z(T) THEN 2030
    0x56d6c1db1850 ---------A   02010  P=Z(T)-W(T)*20
    0x56d6c1db1a40 ----------   02020  D=1
    0x56d6c1db1d40 ---------A   02030  S=P
    0x56d6c1db1ff0 ----------   02040  FOR I=1 TO 72
    0x56d6c1db2150 ----------   02050  PRINT "=";
    0x56d6c1db2290 ---------A   02060  NEXT I
    0x56d6c1db2320 ----------   02070  PRINT
    0x56d6c1db2980 ---------A   02080  PRINT "TEAM";T;"DOWN";D;"ON";P
    0x56d6c1db2bf0 ---------A   02090  IF D<>1 THEN 2140
    0x56d6c1db3490 ---------A   02100  IF Y(T)*(P+Y(T)*10)>=X(T) THEN 2130
    0x56d6c1db3690 ----------   02110  C=4
    0x56d6c1db3700 ---------A   02120  GOTO 2140
    0x56d6c1db3910 ---------A   02130  C=8
    0x56d6c1db3b90 ---------A   02140  IF C=8 THEN 2170
    0x56d6c1db4590 ---------A   02150  PRINT TAB(27);10-(Y(T)*P-Y(T)*S);"YARDS TO 1ST DOWN"
    0x56d6c1db4620 ---------A   02160  GOTO 2190
    0x56d6c1db4dc0 ---------A   02170  PRINT TAB(27);X(T)-Y(T)*P;"YARDS"
    0x56d6c1db4e20 ----------   02180  GOSUB 3710
    0x56d6c1db5070 ---------A   02190  IF D=4 THEN 2760
    0x56d6c1db50f0 ---------A   02200  REM
    0x56d6c1db5790 ----------   02210  U=INT(3*RND(0)-1)
    0x56d6c1db5820 ---------A   02220  GOTO 2240
    0x56d6c1db59a0 ---------A   02230  PRINT "ILLEGAL PLAY NUMBER, CHECK AND"
    0x56d6c1db5b30 ---------A   02240  PRINT "INPUT OFFENSIVE PLAY, DEFENSIVE PLAY";
    0x56d6c1db5da0 ---------A   02250  IF T=2 THEN 2280
    0x56d6c1db6140 ----------   02260  INPUT P1,P2
    0x56d6c1db61c0 ---------A   02270  GOTO 2290
    0x56d6c1db63f0 ---------A   02280  INPUT P2,P1
    0x56d6c1db6650 ---------A   02290  IF P1=77 THEN 2760
    0x56d6c1db68b0 ---------A   02300  IF P1>20 THEN 3550
    0x56d6c1db6b10 ---------A   02310  IF P1<1 THEN 3550
    0x56d6c1db6d70 ---------A   02320  IF P2>20 THEN 3550
    0x56d6c1db6fe0 ---------A   02330  IF P2<1 THEN 3550
    0x56d6c1db72e0 ----------   02340  P1=INT(P1)
    0x56d6c1db7620 ---------A   02350  P2=INT(P2)
    0x56d6c1db8780 ---------A   02360  Y=INT(ABS(A(P1)-B(P2))/19*((X(T)-Y(T)*P+25)*RND(1)-15))
    0x56d6c1db87d0 ----------   02370  PRINT
    0x56d6c1db8a40 ---------A   02380  IF T=2 THEN 2410
    0x56d6c1db8d80 ---------A   02390  IF A(P1)<11 THEN 2530
    0x56d6c1db8e10 ---------A   02400  GOTO 2420
    0x56d6c1db9140 ---------A   02410  IF B(P2)<11 THEN 2530
    0x56d6c1db93b0 ---------A   02420  IF U<>0 THEN 2470
    0x56d6c1db9610 ---------A   02430  PRINT "PASS INCOMPLETE TEAM";T
    0x56d6c1db9810 ----------   02440  Y=0
    0x56d6c1db9890 ---------A   02450  GOTO 2540
    0x56d6c1db9c20 ----------   02460  G=RND(1)
    0x56d6c1db9e70 ---------A   02470  IF G>.025 THEN 2500
    0x56d6c1dba0f0 ---------A   02480  IF Y>2 THEN 2520
    0x56d6c1dba230 ----------   02490  PRINT "QUARTERBACK SCRAMBLED"
    0x56d6c1dba2c0 ---------A   02500  GOTO 2540
    0x56d6c1dba3f0 ----------   02510  PRINT "PASS COMPLETED"
    0x56d6c1dba480 ---------A   02520  GOTO 2540
    0x56d6c1dba5d0 ---------A   02530  PRINT "THE BALL WAS RUN"
    0x56d6c1dbab50 ---------A   02540  P=P-W(T)*Y
    0x56d6c1dbaba0 ----------   02550  PRINT
    0x56d6c1dbb020 ---------A   02560  PRINT "NET YARDS GAINED ON DOWN";D;"ARE ";Y
    0x56d6c1dbb300 ----------   02570  G=RND(1)
    0x56d6c1dbb580 ---------A   02580  IF G>.025 THEN 2650
    0x56d6c1dbb5e0 ----------   02590  PRINT
    0x56d6c1dbbb50 ---------A   02600  PRINT "** LOSS OF POSSESSION FROM TEAM";T;"TO TEAM";T(T)
    0x56d6c1dbbbb0 ----------   02610  GOSUB 3650
    0x56d6c1dbbc00 ----------   02620  PRINT
    0x56d6c1dbbf00 ----------   02630  T=T(T)
    0x56d6c1dbbf80 ---------A   02640  GOTO 1970
    0x56d6c1dbc4e0 ---------A   02650  IF Y(T)*P>=X(T) THEN 3010
    0x56d6c1dbca50 ---------A   02660  IF W(T)*P>=Z(T) THEN 2930
    0x56d6c1dbd1e0 ---------A   02670  IF Y(T)*P-Y(T)*S>=10 THEN 2030
    0x56d6c1dbd500 ----------   02680  D=D+1
    0x56d6c1dbd780 ---------A   02690  IF D<>5 THEN 2060
    0x56d6c1dbd7e0 ----------   02700  PRINT
    0x56d6c1dbda30 ----------   02710  PRINT "CONVERSION UNSUCCESSFUL TEAM";T
    0x56d6c1dbdd60 ---------A   02720  T=T(T)
    0x56d6c1dbddb0 ----------   02730  GOSUB 3650
    0x56d6c1dbde40 ---------A   02740  GOTO 2030
    0x56d6c1dbe190 ----------   02750  PRINT "DOES TEAM";T;"WANT TO PUNT";
    0x56d6c1dbe300 ---------A   02760  INPUT A$
    0x56d6c1dbe590 ---------A   02770  IF A$="NO" THEN 2880
    0x56d6c1dbe840 ---------A   02780  IF A$<>"YES" THEN 2760
    0x56d6c1dbe8a0 ----------   02790  PRINT
    0x56d6c1dbebe0 ----------   02800  PRINT "TEAM";T;"WILL PUNT"
    0x56d6c1dbeec0 ----------   02810  G=RND(1)
    0x56d6c1dbf130 ---------A   02820  IF G<.025 THEN 2600
    0x56d6c1dbf190 ----------   02830  GOSUB 3650
    0x56d6c1dbf740 ----------   02840  K=INT(25*RND(1)+35)
    0x56d6c1dbfa30 ----------   02850  T=T(T)
    0x56d6c1dbfad0 ---------A   02860  GOTO 1890
    0x56d6c1dbfe30 ----------   02870  PRINT "DOES TEAM";T;"WANT TO ATTEMPT A FIELD GOAL";
    0x56d6c1dbffa0 ---------A   02880  INPUT A$
    0x56d6c1dc0230 ---------A   02890  IF A$="YES" THEN 3240
    0x56d6c1dc04b0 ---------A   02900  IF A$<>"NO" THEN 2880
    0x56d6c1dc0560 ---------A   02910  GOTO 2200
    0x56d6c1dc05b0 ----------   02920  PRINT
    0x56d6c1dc0930 ---------A   02930  PRINT "SAFETY AGAINST TEAM";T;"**********************OH-OH"
    0x56d6c1dc0fd0 ----------   02940  H(T(T))=H(T(T))+2
    0x56d6c1dc1070 ---------A   02950  GOSUB 3570
    0x56d6c1dc13e0 ----------   02960  PRINT"TEAM";T;"DO YOU WANT TO PUNT INSTEAD OF A KICKOFF";
    0x56d6c1dc1560 ---------A   02970  INPUT A$
    0x56d6c1dc1b60 ----------   02980  P=Z(T)-W(T)*20
    0x56d6c1dc1e00 ---------A   02990  IF A$="YES" THEN 2820
    0x56d6c1dc2670 ----------   03000  PRINT
    0x56d6c1dc29f0 ---------A   03010  PRINT "TOUCHDOWN BY TEAM";T;"*********************YEA TEAM"
    0x56d6c1dc2cb0 ----------   03020  Q=7
    0x56d6c1dc2f80 ----------   03030  G=RND(1)
    0x56d6c1dc31f0 ---------A   03040  IF G>.1 THEN 3080
    0x56d6c1dc33f0 ----------   03050  Q=6
    0x56d6c1dc3520 ----------   03060  PRINT "EXTRA POINT NO GOOD"
    0x56d6c1dc35b0 ---------A   03070  GOTO 3100
    0x56d6c1dc3710 ---------A   03080  PRINT "EXTRA POINT GOOD"
    0x56d6c1dc3c10 ----------   03090  H(T)=H(T)+Q
    0x56d6c1dc3c80 ---------A   03100  GOSUB 3570
    0x56d6c1dc3f70 ----------   03110  T=T(T)
    0x56d6c1dc3fe0 ---------A   03120  GOTO 1840
    0x56d6c1dc45d0 ---------A   03130  K=INT(9*RND(0)+1)
    0x56d6c1dc5320 ---------A   03140  R=INT(((X(T)-Y(T)*P+25)*RND(1)-15)/K)
    0x56d6c1dc5890 ---------A   03150  P=P-W(T)*R
    0x56d6c1dc58e0 ----------   03160  PRINT
    0x56d6c1dc5d50 ---------A   03170  PRINT "RUNBACK TEAM";T;R;"YARDS"
    0x56d6c1dc6030 ----------   03180  G=RND(1)
    0x56d6c1dc6290 ---------A   03190  IF G<.025 THEN 2600
    0x56d6c1dc6800 ---------A   03200  IF Y(T)*P>=X(T) THEN 3010
    0x56d6c1dc6d60 ---------A   03210  IF W(T)*P>=Z(T) THEN 2930
    0x56d6c1dc6e00 ---------A   03220  GOTO 2030
    0x56d6c1dc6e50 ----------   03230  PRINT
    0x56d6c1dc71d0 ---------A   03240  PRINT "TEAM";T;"WILL ATTEMPT A FIELD GOAL"
    0x56d6c1dc74b0 ----------   03250  G=RND(1)
    0x56d6c1dc7710 ---------A   03260  IF G<.025 THEN 2600
    0x56d6c1dc7dd0 ---------A   03270  F=INT(35*RND(1)+20)
    0x56d6c1dc7e20 ----------   03280  PRINT
    0x56d6c1dc8190 ---------A   03290  PRINT "KICK IS";F;"YARDS LONG"
    0x56d6c1dc86d0 ----------   03300  P=P-W(T)*F
    0x56d6c1dc89c0 ---------A   03310  G=RND(1)
    0x56d6c1dc8c20 ---------A   03320  IF G<.35 THEN 3370
    0x56d6c1dc91b0 ---------A   03330  IF Y(T)*P<X(T) THEN 3380
    0x56d6c1dc9530 ---------A   03340  PRINT "FIELD GOAL GOOD FOR TEAM";T;"*********************YEA"
    0x56d6c1dc9730 ----------   03350  Q=3
    0x56d6c1dc97b0 ---------A   03360  GOTO 3100
    0x56d6c1dc9930 ---------A   03370  PRINT "BALL WENT WIDE"
    0x56d6c1dc9cd0 ---------A   03380  PRINT "FIELD GOAL UNSUCCESFUL TEAM";T;"-----------------TOO BAD"
    0x56d6c1dc9d30 ----------   03390  GOSUB 3650
    0x56d6c1dca380 ---------A   03400  IF Y(T)*P<X(T)+10 THEN 3440
    0x56d6c1dca680 ----------   03410  T=T(T)
    0x56d6c1dca700 ---------A   03420  GOTO 1900
    0x56d6c1dca750 ----------   03430  PRINT
    0x56d6c1dca9c0 ---------A   03440  PRINT "BALL NOW ON";P
    0x56d6c1dcacc0 ----------   03450  T=T(T)
    0x56d6c1dcad10 ----------   03460  GOSUB 3710
    0x56d6c1dcadb0 ---------A   03470  GOTO 1970
    0x56d6c1dcbfd0 ---------A   03480  DATA 17,8,4,14,19,3,10,1,7,11,15,9,5,20,13,18,16,2,12,6
    0x56d6c1dcd1f0 ---------A   03490  DATA 20,2,17,5,8,18,12,11,1,4,19,14,10,7,9,15,6,13,16,3
    0x56d6c1dcd6f0 ---------A   03500  DATA "PITCHOUT","TRIPLE REVERSE","DRAW","QB SNEAK","END AROUND"
    0x56d6c1dcdb00 ---------A   03510  DATA "DOUBLE REVERSE","LEFT SWEEP","RIGHT SWEEP","OFF TACKLE"
    0x56d6c1dcde40 ---------A   03520  DATA "WISHBONE OPTION","FLARE PASS","SCREEN PASS"
    0x56d6c1dce260 ---------A   03530  DATA "ROLL OUT OPTION","RIGHT CURL","LEFT CURL","WISHBONE OPTION"
    0x56d6c1dce650 ---------A   03540  DATA "SIDELINE PASS","HALF-BACK OPTION","RAZZLE-DAZZLE","BOMB!!!!"
    0x56d6c1dce8c0 ---------A   03550  IF P1<>99 THEN 2230
    0x56d6c1dce920 ----------   03560  PRINT
    0x56d6c1dcec60 ---------A   03570  PRINT "TEAM 1 SCORE IS";H(1)
    0x56d6c1dcef60 ----------   03580  PRINT "TEAM 2 SCORE IS";H(2)
    0x56d6c1dceff0 ---------A   03590  PRINT
    0x56d6c1dcf380 ---------A   03600  IF H(T)<E THEN 3630
    0x56d6c1dcf6d0 ----------   03610  PRINT "TEAM";T;"WINS*******************"
    0x56d6c1dcf750 ---------A   03620  GOTO 3760
    0x56d6c1dcf9a0 ---------A   03630  IF P1=99 THEN 2240
    0x56d6c1dcfa00 ---------A   03640  RETURN
    0x56d6c1dcfaa0 ----------   03650  PRINT
    0x56d6c1dcfd60 ----------   03660  FOR X=1 TO 72
    0x56d6c1dcfec0 ----------   03670  PRINT "+";
    0x56d6c1dd0000 ----------   03680  NEXT X
    0x56d6c1dd0070 ----------   03690  PRINT
    0x56d6c1dd00d0 ----------   03700  RETURN
    0x56d6c1dd08b0 ---------B   03710  PRINT TAB(D(T)+5+P/2);M$(T)
    0x56d6c1dd0a70 ---------B   03720  PRINT "TEAM 1 [0   10   20   30   40   50   60   70   80   90";
    0x56d6c1dd0bd0 ---------B   03730  PRINT "   100] TEAM 2"
    0x56d6c1dd0c50 ---------B   03740  PRINT
    0x56d6c1dd0cb0 ---------B   03750  RETURN
    0x56d6c1dd0d10 ---------A   03760  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03690 - 10000    6320 

 */



/*
 *  Symbol Table Listing for 'basic/footbal2.bas'
 *
    A               Array    Integer         {0,19} 
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B               Array    Integer         {0,19} 
    C               Array    Integer         {0,39} 
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D               Array    Integer         {0,1} 
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    H               Array    Integer         {0,1} 
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Integer     
    L                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M$              Array    String          {0,1} 
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    OCT$            Function String          args=1, float  
    P                        Integer     
    P$              Array    String          {0,19} 
    P1                       Integer     
    P2                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    R                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T               Array    Integer         {0,1} 
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W               Array    Integer         {0,1} 
    X               Array    Integer         {0,1} 
    Y               Array    Integer         {0,1} 
    Z               Array    Integer         {0,1} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/footbal2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56d6c1d9a6d0 ---------A   01000  PRINT TAB(32);"FOOTBALL"
    0x56d6c1d9a670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56d6c1d8b2b0 ---------A   01020  PRINT
    0x56d6c1d9a9e0 ---------A   01030  PRINT
    0x56d6c1d9a7f0 ---------A   01040  PRINT
    0x56d6c1d9bb80 ---------A   01050  REM
    0x56d6c1d9cf30 ---------A   01060  DIM A(20),B(20),C(40),H(2),T(2),W(2),X(2),Y(2),Z(2)
    0x56d6c1d9d0b0 ---------A   01070  DIM M$(2),D(2),P$(20)
    0x56d6c1da3a60 ---------A   01080  PRINT "PRESENTING N.F.U. FOOTBALL (NO FORTRAN USED)"
    0x56d6c1da3ac0 ---------A   01090  PRINT
    0x56d6c1da3b20 ---------A   01100  PRINT
    0x56d6c1da3d40 ---------A T 01110  INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x56d6c1da3fa0 ---------A   01120  IF A$="NO" THEN 1310
    0x56d6c1da4200 ---------A   01130  IF A$<>"YES" THEN 1110
    0x56d6c1da43c0 ---------A   01140  PRINT "THIS IS A FOOTBALL GAME FOR TWO TEAMS IN WHICH PLAYERS MUST"
    0x56d6c1da4580 ---------A   01150  PRINT "PREPARE A TAPE WITH A DATA STATEMENT (1770 FOR TEAM 1,"
    0x56d6c1da4740 ---------A   01160  PRINT "1780 FOR TEAM 2) IN WHICH EACH TEAM SCRAMBLES NOS. 1-20"
    0x56d6c1da4900 ---------A   01170  PRINT "THESE NUMBERS ARE THEN ASSIGNED TO TWENTY GIVEN PLAYS."
    0x56d6c1da4ab0 ---------A   01180  PRINT"A LIST OF NOS. AND THEIR PLAYS IS PROVIDED WITH"
    0x56d6c1da4c70 ---------A   01190  PRINT "BOTH TEAMS HAVING THE SAME PLAYS. THE MORE SIMILAR THE"
    0x56d6c1da4e20 ---------A   01200  PRINT "PLAYS THE LESS YARDAGE GAINED.  SCORES ARE GIVEN"
    0x56d6c1da4fd0 ---------A   01210  PRINT "WHENEVER SCORES ARE MADE. SCORES MAY ALSO BE OBTAINED"
    0x56d6c1da5180 ---------A   01220  PRINT "BY INPUTTING 99,99 FOR PLAY NOS. TO PUNT OR ATTEMPT A"
    0x56d6c1da5340 ---------A   01230  PRINT "FIELD GOAL, INPUT 77,77 FOR PLAY NUMBERS. QUESTIONS WILL BE"
    0x56d6c1da5500 ---------A   01240  PRINT "ASKED THEN. ON 4TH DOWN, YOU WILL ALSO BE ASKED WHETHER"
    0x56d6c1da56c0 ---------A   01250  PRINT "YOU WANT TO PUNT OR ATTEMPT A FIELD GOAL. IF THE ANSWER TO"
    0x56d6c1da5870 ---------A   01260  PRINT "BOTH QUESTIONS IS NO IT WILL BE ASSUMED YOU WANT TO"
    0x56d6c1da5a20 ---------A   01270  PRINT "TRY AND GAIN YARDAGE. ANSWER ALL QUESTIONS YES OR NO."
    0x56d6c1da5bd0 ---------A   01280  PRINT "THE GAME IS PLAYED UNTIL PLAYERS TERMINATE (CONTROL-C)."
    0x56d6c1da5cf0 ---------A   01290  PRINT "PLEASE PREPARE A TAPE AND RUN."
    0x56d6c1da5d50 ---------A   01300  STOP
    0x56d6c1da6160 ---------A T 01310  INPUT E
    0x56d6c1da64e0 ---------A   01320  FOR I=1 TO 40
    0x56d6c1da66e0 ---------A   01330  READ N
    0x56d6c1da6930 ---------A   01340  IF I>20 THEN 1370
    0x56d6c1da6c30 ---------A   01350  A(N)=I
    0x56d6c1da6ca0 ---------A   01360  GOTO 1390
    0x56d6c1da70b0 ---------A T 01370  B(N)=I-20
    0x56d6c1da73a0 ---------A   01380  C(I)=N
    0x56d6c1da74d0 ---------A T 01390  NEXT I
    0x56d6c1da7780 ---------A   01400  FOR I=1 TO 20
    0x56d6c1da79a0 ---------A   01410  READ P$(I)
    0x56d6c1da7ad0 ---------A   01420  NEXT I
    0x56d6c1da7fb0 ---------A   01430  L=0
    0x56d6c1da81a0 ---------A   01440  T=1
    0x56d6c1da8500 ---------A T 01450  PRINT "TEAM";T;"PLAY CHART"
    0x56d6c1da8660 ---------A   01460  PRINT "NO.      PLAY"
    0x56d6c1da8940 ---------A   01470  FOR I=1 TO 20
    0x56d6c1da89c0 ---------A   01480  REM
    0x56d6c1da9060 ---------A   01490  PRINT C(I+L);TAB(6);P$(I)
    0x56d6c1da91a0 ---------A   01500  NEXT I
    0x56d6c1da94d0 ---------A   01510  L=L+20
    0x56d6c1da96e0 ---------A   01520  T=2
    0x56d6c1da9780 ---------A   01530  PRINT
    0x56d6c1da9920 ---------A   01540  PRINT "TEAR OFF HERE----------------------------------------------"
    0x56d6c1da9be0 ---------A   01550  FOR X=1 TO 11
    0x56d6c1da9c40 ---------A   01560  PRINT
    0x56d6c1da9d80 ---------A   01570  NEXT X
    0x56d6c1daa060 ---------A   01580  FOR Z=1 TO 3000
    0x56d6c1daa1a0 ---------A   01590  NEXT Z
    0x56d6c1daa430 ---------A   01600  IF L=20 THEN 1450
    0x56d6c1daa6f0 ---------A   01610  D(1)=0
    0x56d6c1daa9a0 ---------A   01620  D(2)=3
    0x56d6c1daac70 ---------A   01630  M$(1)="--->"
    0x56d6c1daaf70 ---------A   01640  M$(2)="<---"
    0x56d6c1dab220 ---------A   01650  H(1)=0
    0x56d6c1dab4d0 ---------A   01660  H(2)=0
    0x56d6c1dab780 ---------A   01670  T(1)=2
    0x56d6c1daba60 ---------A   01680  T(2)=1
    0x56d6c1dabd10 ---------A   01690  W(1)=-1
    0x56d6c1dabfc0 ---------A   01700  W(2)=1
    0x56d6c1dac270 ---------A   01710  X(1)=100
    0x56d6c1dac550 ---------A   01720  X(2)=0
    0x56d6c1dac800 ---------A   01730  Y(1)=1
    0x56d6c1dacab0 ---------A   01740  Y(2)=-1
    0x56d6c1dacd60 ---------A   01750  Z(1)=0
    0x56d6c1dad030 ---------A   01760  Z(2)=100
    0x56d6c1dad0d0 ---------A   01770  GOSUB 3640
    0x56d6c1dad250 ---------A   01780  PRINT "TEAM 1 DEFENDS 0 YD GOAL -- TEAM 2 DEFENDS 100 YD GOAL."
    0x56d6c1dad840 ---------A   01790  T=INT(2*RND(1)+1)
    0x56d6c1dad890 ---------A   01800  PRINT
    0x56d6c1dad9f0 ---------A   01810  PRINT "THE COIN IS FLIPPED"
    0x56d6c1dae100 ---------A T 01820  P=X(T)-Y(T)*40
    0x56d6c1dae150 ---------A   01830  GOSUB 3600
    0x56d6c1dae1a0 ---------A   01840  PRINT 
    0x56d6c1dae500 ---------A   01850  PRINT "TEAM";T;"RECEIVES KICK-OFF"
    0x56d6c1daeba0 ---------A   01860  K=INT(26*RND(1)+40)
    0x56d6c1daf100 ---------A T 01870  P=P-Y(T)*K
    0x56d6c1daf780 ---------A T 01880  IF W(T)*P<Z(T)+10 THEN 1920
    0x56d6c1daf7e0 ---------A   01890  PRINT
    0x56d6c1daf960 ---------A   01900  PRINT "BALL WENT OUT OF ENDZONE --AUTOMATIC TOUCHBACK--"
    0x56d6c1dafa00 ---------A   01910  GOTO 1980 
    0x56d6c1dafed0 ---------A T 01920  GOSUB 3630
    0x56d6c1db0230 ---------A   01930  PRINT "TEAM";T;"DO YOU WANT TO RUNBACK";
    0x56d6c1db03a0 ---------A T 01940  INPUT A$
    0x56d6c1db0630 ---------A   01950  IF A$="YES" THEN 3050
    0x56d6c1db08c0 ---------A   01960  IF A$<>"NO" THEN 1940
    0x56d6c1db1230 ---------A   01970  IF W(T)*P<Z(T) THEN 2000
    0x56d6c1db1850 ---------A T 01980  P=Z(T)-W(T)*20
    0x56d6c1db1a40 ---------A   01990  D=1
    0x56d6c1db1d40 ---------A T 02000  S=P
    0x56d6c1db1ff0 ---------A   02010  FOR I=1 TO 72
    0x56d6c1db2150 ---------A   02020  PRINT "=";
    0x56d6c1db2290 ---------A T 02030  NEXT I
    0x56d6c1db2320 ---------A   02040  PRINT
    0x56d6c1db2980 ---------A   02050  PRINT "TEAM";T;"DOWN";D;"ON";P
    0x56d6c1db2bf0 ---------A   02060  IF D<>1 THEN 2110
    0x56d6c1db3490 ---------A   02070  IF Y(T)*(P+Y(T)*10)>=X(T) THEN 2100
    0x56d6c1db3690 ---------A   02080  C=4
    0x56d6c1db3700 ---------A   02090  GOTO 2110
    0x56d6c1db3910 ---------A T 02100  C=8
    0x56d6c1db3b90 ---------A T 02110  IF C=8 THEN 2140
    0x56d6c1db4590 ---------A   02120  PRINT TAB(27);10-(Y(T)*P-Y(T)*S);"YARDS TO 1ST DOWN"
    0x56d6c1db4620 ---------A   02130  GOTO 2160
    0x56d6c1db4dc0 ---------A T 02140  PRINT TAB(27);X(T)-Y(T)*P;"YARDS"
    0x56d6c1db4e20 ---------A   02150  GOSUB 3630
    0x56d6c1db5070 ---------A T 02160  IF D=4 THEN 2700
    0x56d6c1db50f0 ---------A T 02170  REM
    0x56d6c1db5790 ---------A   02180  U=INT(3*RND(0)-1)
    0x56d6c1db5820 ---------A   02190  GOTO 2210
    0x56d6c1db59a0 ---------A T 02200  PRINT "ILLEGAL PLAY NUMBER, CHECK AND"
    0x56d6c1db5b30 ---------A T 02210  PRINT "INPUT OFFENSIVE PLAY, DEFENSIVE PLAY";
    0x56d6c1db5da0 ---------A   02220  IF T=2 THEN 2250
    0x56d6c1db6140 ---------A   02230  INPUT P1,P2
    0x56d6c1db61c0 ---------A   02240  GOTO 2260
    0x56d6c1db63f0 ---------A T 02250  INPUT P2,P1
    0x56d6c1db6650 ---------A T 02260  IF P1=77 THEN 2700
    0x56d6c1db68b0 ---------A   02270  IF P1>20 THEN 3450
    0x56d6c1db6b10 ---------A   02280  IF P1<1 THEN 3450
    0x56d6c1db6d70 ---------A   02290  IF P2>20 THEN 3450
    0x56d6c1db6fe0 ---------A   02300  IF P2<1 THEN 3450
    0x56d6c1db72e0 ---------A   02310  P1=INT(P1)
    0x56d6c1db7620 ---------A   02320  P2=INT(P2)
    0x56d6c1db8780 ---------A   02330  Y=INT(ABS(A(P1)-B(P2))/19*((X(T)-Y(T)*P+25)*RND(1)-15))
    0x56d6c1db87d0 ---------A   02340  PRINT
    0x56d6c1db8a40 ---------A   02350  IF T=2 THEN 2380
    0x56d6c1db8d80 ---------A   02360  IF A(P1)<11 THEN 2480
    0x56d6c1db8e10 ---------A   02370  GOTO 2390
    0x56d6c1db9140 ---------A T 02380  IF B(P2)<11 THEN 2480
    0x56d6c1db93b0 ---------A T 02390  IF U<>0 THEN 2430
    0x56d6c1db9610 ---------A   02400  PRINT "PASS INCOMPLETE TEAM";T
    0x56d6c1db9810 ---------A   02410  Y=0
    0x56d6c1db9890 ---------A   02420  GOTO 2490
    0x56d6c1db9e70 ---------A T 02430  IF G>.025 THEN 2460
    0x56d6c1dba0f0 ---------A   02440  IF Y>2 THEN 2470
    0x56d6c1dba230 ---------A   02450  PRINT "QUARTERBACK SCRAMBLED"
    0x56d6c1dba2c0 ---------A T 02460  GOTO 2490
    0x56d6c1dba480 ---------A T 02470  GOTO 2490
    0x56d6c1dba5d0 ---------A T 02480  PRINT "THE BALL WAS RUN"
    0x56d6c1dbab50 ---------A T 02490  P=P-W(T)*Y
    0x56d6c1dbaba0 ---------A   02500  PRINT
    0x56d6c1dbb020 ---------A   02510  PRINT "NET YARDS GAINED ON DOWN";D;"ARE ";Y
    0x56d6c1dbb300 ---------A   02520  G=RND(1)
    0x56d6c1dbb580 ---------A   02530  IF G>.025 THEN 2600
    0x56d6c1dbb5e0 ---------A   02540  PRINT
    0x56d6c1dbbb50 ---------A T 02550  PRINT "** LOSS OF POSSESSION FROM TEAM";T;"TO TEAM";T(T)
    0x56d6c1dbbbb0 ---------A   02560  GOSUB 3560
    0x56d6c1dbbc00 ---------A   02570  PRINT
    0x56d6c1dbbf00 ---------A   02580  T=T(T)
    0x56d6c1dbbf80 ---------A   02590  GOTO 1940
    0x56d6c1dbc4e0 ---------A T 02600  IF Y(T)*P>=X(T) THEN 2930
    0x56d6c1dbca50 ---------A   02610  IF W(T)*P>=Z(T) THEN 2850
    0x56d6c1dbd1e0 ---------A   02620  IF Y(T)*P-Y(T)*S>=10 THEN 2000
    0x56d6c1dbd500 ---------A   02630  D=D+1
    0x56d6c1dbd780 ---------A   02640  IF D<>5 THEN 2030
    0x56d6c1dbd7e0 ---------A   02650  PRINT
    0x56d6c1dbda30 ---------A   02660  PRINT "CONVERSION UNSUCCESSFUL TEAM";T
    0x56d6c1dbdd60 ---------A   02670  T=T(T)
    0x56d6c1dbddb0 ---------A   02680  GOSUB 3560
    0x56d6c1dbde40 ---------A   02690  GOTO 2000
    0x56d6c1dbe300 ---------A T 02700  INPUT A$
    0x56d6c1dbe590 ---------A   02710  IF A$="NO" THEN 2810
    0x56d6c1dbe840 ---------A   02720  IF A$<>"YES" THEN 2700
    0x56d6c1dbe8a0 ---------A   02730  PRINT
    0x56d6c1dbebe0 ---------A   02740  PRINT "TEAM";T;"WILL PUNT"
    0x56d6c1dbeec0 ---------A   02750  G=RND(1)
    0x56d6c1dbf130 ---------A T 02760  IF G<.025 THEN 2550
    0x56d6c1dbf190 ---------A   02770  GOSUB 3560
    0x56d6c1dbf740 ---------A   02780  K=INT(25*RND(1)+35)
    0x56d6c1dbfa30 ---------A   02790  T=T(T)
    0x56d6c1dbfad0 ---------A   02800  GOTO 1870
    0x56d6c1dbffa0 ---------A T 02810  INPUT A$
    0x56d6c1dc0230 ---------A   02820  IF A$="YES" THEN 3150
    0x56d6c1dc04b0 ---------A   02830  IF A$<>"NO" THEN 2810
    0x56d6c1dc0560 ---------A   02840  GOTO 2170
    0x56d6c1dc0930 ---------A T 02850  PRINT "SAFETY AGAINST TEAM";T;"**********************OH-OH"
    0x56d6c1dc0fd0 ---------A   02860  H(T(T))=H(T(T))+2
    0x56d6c1dc1070 ---------A   02870  GOSUB 3470
    0x56d6c1dc13e0 ---------A   02880  PRINT"TEAM";T;"DO YOU WANT TO PUNT INSTEAD OF A KICKOFF";
    0x56d6c1dc1560 ---------A   02890  INPUT A$
    0x56d6c1dc1b60 ---------A   02900  P=Z(T)-W(T)*20
    0x56d6c1dc1e00 ---------A   02910  IF A$="YES" THEN 2760
    0x56d6c1dc2670 ---------A   02920  PRINT
    0x56d6c1dc29f0 ---------A T 02930  PRINT "TOUCHDOWN BY TEAM";T;"*********************YEA TEAM"
    0x56d6c1dc2cb0 ---------A   02940  Q=7
    0x56d6c1dc2f80 ---------A   02950  G=RND(1)
    0x56d6c1dc31f0 ---------A   02960  IF G>.1 THEN 3000
    0x56d6c1dc33f0 ---------A   02970  Q=6
    0x56d6c1dc3520 ---------A   02980  PRINT "EXTRA POINT NO GOOD"
    0x56d6c1dc35b0 ---------A   02990  GOTO 3020
    0x56d6c1dc3710 ---------A T 03000  PRINT "EXTRA POINT GOOD"
    0x56d6c1dc3c10 ---------A   03010  H(T)=H(T)+Q
    0x56d6c1dc3c80 ---------A T 03020  GOSUB 3470
    0x56d6c1dc3f70 ---------A   03030  T=T(T)
    0x56d6c1dc3fe0 ---------A   03040  GOTO 1820
    0x56d6c1dc45d0 ---------A T 03050  K=INT(9*RND(0)+1)
    0x56d6c1dc5320 ---------A   03060  R=INT(((X(T)-Y(T)*P+25)*RND(1)-15)/K)
    0x56d6c1dc5890 ---------A   03070  P=P-W(T)*R
    0x56d6c1dc58e0 ---------A   03080  PRINT
    0x56d6c1dc5d50 ---------A   03090  PRINT "RUNBACK TEAM";T;R;"YARDS"
    0x56d6c1dc6030 ---------A   03100  G=RND(1)
    0x56d6c1dc6290 ---------A   03110  IF G<.025 THEN 2550
    0x56d6c1dc6800 ---------A   03120  IF Y(T)*P>=X(T) THEN 2930
    0x56d6c1dc6d60 ---------A   03130  IF W(T)*P>=Z(T) THEN 2850
    0x56d6c1dc6e00 ---------A   03140  GOTO 2000
    0x56d6c1dc71d0 ---------A T 03150  PRINT "TEAM";T;"WILL ATTEMPT A FIELD GOAL"
    0x56d6c1dc74b0 ---------A   03160  G=RND(1)
    0x56d6c1dc7710 ---------A   03170  IF G<.025 THEN 2550
    0x56d6c1dc7dd0 ---------A   03180  F=INT(35*RND(1)+20)
    0x56d6c1dc7e20 ---------A   03190  PRINT
    0x56d6c1dc8190 ---------A   03200  PRINT "KICK IS";F;"YARDS LONG"
    0x56d6c1dc86d0 ---------A   03210  P=P-W(T)*F
    0x56d6c1dc89c0 ---------A   03220  G=RND(1)
    0x56d6c1dc8c20 ---------A   03230  IF G<.35 THEN 3280
    0x56d6c1dc91b0 ---------A   03240  IF Y(T)*P<X(T) THEN 3290
    0x56d6c1dc9530 ---------A   03250  PRINT "FIELD GOAL GOOD FOR TEAM";T;"*********************YEA"
    0x56d6c1dc9730 ---------A   03260  Q=3
    0x56d6c1dc97b0 ---------A   03270  GOTO 3020
    0x56d6c1dc9930 ---------A T 03280  PRINT "BALL WENT WIDE"
    0x56d6c1dc9cd0 ---------A T 03290  PRINT "FIELD GOAL UNSUCCESFUL TEAM";T;"-----------------TOO BAD"
    0x56d6c1dc9d30 ---------A   03300  GOSUB 3560
    0x56d6c1dca380 ---------A   03310  IF Y(T)*P<X(T)+10 THEN 3340
    0x56d6c1dca680 ---------A   03320  T=T(T)
    0x56d6c1dca700 ---------A   03330  GOTO 1880
    0x56d6c1dca9c0 ---------A T 03340  PRINT "BALL NOW ON";P
    0x56d6c1dcacc0 ---------A   03350  T=T(T)
    0x56d6c1dcad10 ---------A   03360  GOSUB 3630
    0x56d6c1dcadb0 ---------A   03370  GOTO 1940
    0x56d6c1dcbfd0 ---------A   03380  DATA 17,8,4,14,19,3,10,1,7,11,15,9,5,20,13,18,16,2,12,6
    0x56d6c1dcd1f0 ---------A   03390  DATA 20,2,17,5,8,18,12,11,1,4,19,14,10,7,9,15,6,13,16,3
    0x56d6c1dcd6f0 ---------A   03400  DATA "PITCHOUT","TRIPLE REVERSE","DRAW","QB SNEAK","END AROUND"
    0x56d6c1dcdb00 ---------A   03410  DATA "DOUBLE REVERSE","LEFT SWEEP","RIGHT SWEEP","OFF TACKLE"
    0x56d6c1dcde40 ---------A   03420  DATA "WISHBONE OPTION","FLARE PASS","SCREEN PASS"
    0x56d6c1dce260 ---------A   03430  DATA "ROLL OUT OPTION","RIGHT CURL","LEFT CURL","WISHBONE OPTION"
    0x56d6c1dce650 ---------A   03440  DATA "SIDELINE PASS","HALF-BACK OPTION","RAZZLE-DAZZLE","BOMB!!!!"
    0x56d6c1dce8c0 ---------A T 03450  IF P1<>99 THEN 2200
    0x56d6c1dce920 ---------A   03460  PRINT
    0x56d6c1dcec60 ---------A G 03470  PRINT "TEAM 1 SCORE IS";H(1)
    0x56d6c1dcef60 ---------A   03480  PRINT "TEAM 2 SCORE IS";H(2)
    0x56d6c1dceff0 ---------A   03490  PRINT
    0x56d6c1dcf380 ---------A   03500  IF H(T)<E THEN 3530
    0x56d6c1dcf6d0 ---------A   03510  PRINT "TEAM";T;"WINS*******************"
    0x56d6c1dcf750 ---------A   03520  GOTO 3550
    0x56d6c1dcf9a0 ---------A T 03530  IF P1=99 THEN 2210
    0x56d6c1ddfe80 ---------A   03540  GOTO 09900
    0x56d6c1dd0d10 ---------A T 03550  END
    0x56d6c1dcfaa0 ---------B G 03560  PRINT
    0x56d6c1dcfd60 ---------B   03570  FOR X=1 TO 72
    0x56d6c1dcfec0 ---------B   03580  PRINT "+";
    0x56d6c1dd0000 ---------B   03590  NEXT X
    0x56d6c1dd0070 ---------B G 03600  PRINT
    0x56d6c1ddfe30 ---------B   03610  GOTO 03620
    0x56d6c1de2720 ---------B T 03620  RETURN
    0x56d6c1dd08b0 ---------C G 03630  PRINT TAB(D(T)+5+P/2);M$(T)
    0x56d6c1dd0a70 ---------C G 03640  PRINT "TEAM 1 [0   10   20   30   40   50   60   70   80   90";
    0x56d6c1dd0bd0 ---------C   03650  PRINT "   100] TEAM 2"
    0x56d6c1dd0c50 ---------C   03660  PRINT
    0x56d6c1de0060 ---------C   03670  GOTO 03680
    0x56d6c1de27a0 ---------C T 03680  RETURN
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
char* data_03380s[]={"17","8","4","14","19","3","10","1","7","11","15","9","5","20","13","18","16","2","12","6"};
char* data_03390s[]={"20","2","17","5","8","18","12","11","1","4","19","14","10","7","9","15","6","13","16","3"};
char* data_03400s[]={"PITCHOUT","TRIPLE REVERSE","DRAW","QB SNEAK","END AROUND"};
char* data_03410s[]={"DOUBLE REVERSE","LEFT SWEEP","RIGHT SWEEP","OFF TACKLE"};
char* data_03420s[]={"WISHBONE OPTION","FLARE PASS","SCREEN PASS"};
char* data_03430s[]={"ROLL OUT OPTION","RIGHT CURL","LEFT CURL","WISHBONE OPTION"};
char* data_03440s[]={"SIDELINE PASS","HALF-BACK OPTION","RAZZLE-DAZZLE","BOMB!!!!"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3380, 20,data_03380s},
    { 3390, 20,data_03390s},
    { 3400,  5,data_03400s},
    { 3410,  4,data_03410s},
    { 3420,  3,data_03420s},
    { 3430,  4,data_03430s},
    { 3440,  4,data_03440s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[20];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    B_int_arr[20];                             // Basic: B 
int    C_int_arr[40];                             // Basic: C 
int    D_int_arr[2];                              // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int_arr[2];                              // Basic: H 
int    I_int;                                     // Basic: I 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
char*  M_str_arr[2];                              // Basic: M$ 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
char*  P_str_arr[20];                             // Basic: P$ 
int    P1_int;                                    // Basic: P1 
int    P2_int;                                    // Basic: P2 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    T_int_arr[2];                              // Basic: T 
int    U_int;                                     // Basic: U 
int    W_int_arr[2];                              // Basic: W 
int    X_int_arr[2];                              // Basic: X 
int    Y_int_arr[2];                              // Basic: Y 
int    Z_int_arr[2];                              // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03560();
void Routine_03630();

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

void Routine_03560(){
    // 03560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03570 FOR X=1 TO 72
    for(X_int_arr[0]=1;X_int_arr[0]<=72;X_int_arr[0]++){
        // 03580 PRINT "+";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"+");fputs(buf,fh); };
        // 03590 NEXT X
        int dummy_3590=0; // Ignore this line.
    }; // End-For(X_int_arr[0])

void Routine_03600(){
    // 03600 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03610 GOTO 03620
    goto Lbl_03620;

  Lbl_03620:
    // 03620 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_03630(){
    // 03630 PRINT TAB(D(T)+5+P/2);M$(T)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,D_int[T_int_arr[0]]+5+P_int/2); strcat(buf,M_str_arr[T_int_arr[0]]);strcat(buf,"\n");fputs(buf,fh); };

void Routine_03640(){
    // 03640 PRINT "TEAM 1 [0   10   20   30   40   50   60   70   80   90";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM 1 [0   10   20   30   40   50   60   70   80   90");fputs(buf,fh); };
    // 03650 PRINT "   100] TEAM 2"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   100] TEAM 2");strcat(buf,"\n");fputs(buf,fh); };
    // 03660 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03670 GOTO 03680
    goto Lbl_03680;

  Lbl_03680:
    // 03680 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(32);"FOOTBALL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,32);strcat(buf,"FOOTBALL");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 REM
    // 01060 DIM A(20),B(20),C(40),H(2),T(2),W(2),X(2),Y(2),Z(2)
    // 01070 DIM M$(2),D(2),P$(20)
    // 01080 PRINT "PRESENTING N.F.U. FOOTBALL (NO FORTRAN USED)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PRESENTING N.F.U. FOOTBALL (NO FORTRAN USED)");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01110:
    // 01110 INPUT "DO YOU WANT INSTRUCTIONS";A$
    // Start of Basic INPUT statement 01110
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"DO YOU WANT INSTRUCTIONS");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01110
    // 01120 IF A$="NO" THEN 1310
    if(strcmp(A_str,"NO")==0)goto Lbl_01310;
    // 01130 IF A$<>"YES" THEN 1110
    if(strcmp(A_str,"YES")!=0)goto Lbl_01110;
    // 01140 PRINT "THIS IS A FOOTBALL GAME FOR TWO TEAMS IN WHICH PLAYERS MUST"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS A FOOTBALL GAME FOR TWO TEAMS IN WHICH PLAYERS MUST");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "PREPARE A TAPE WITH A DATA STATEMENT (1770 FOR TEAM 1,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PREPARE A TAPE WITH A DATA STATEMENT (1770 FOR TEAM 1,");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "1780 FOR TEAM 2) IN WHICH EACH TEAM SCRAMBLES NOS. 1-20"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1780 FOR TEAM 2) IN WHICH EACH TEAM SCRAMBLES NOS. 1-20");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "THESE NUMBERS ARE THEN ASSIGNED TO TWENTY GIVEN PLAYS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THESE NUMBERS ARE THEN ASSIGNED TO TWENTY GIVEN PLAYS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT"A LIST OF NOS. AND THEIR PLAYS IS PROVIDED WITH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A LIST OF NOS. AND THEIR PLAYS IS PROVIDED WITH");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT "BOTH TEAMS HAVING THE SAME PLAYS. THE MORE SIMILAR THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BOTH TEAMS HAVING THE SAME PLAYS. THE MORE SIMILAR THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "PLAYS THE LESS YARDAGE GAINED.  SCORES ARE GIVEN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLAYS THE LESS YARDAGE GAINED.  SCORES ARE GIVEN");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "WHENEVER SCORES ARE MADE. SCORES MAY ALSO BE OBTAINED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHENEVER SCORES ARE MADE. SCORES MAY ALSO BE OBTAINED");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "BY INPUTTING 99,99 FOR PLAY NOS. TO PUNT OR ATTEMPT A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BY INPUTTING 99,99 FOR PLAY NOS. TO PUNT OR ATTEMPT A");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "FIELD GOAL, INPUT 77,77 FOR PLAY NUMBERS. QUESTIONS WILL BE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FIELD GOAL, INPUT 77,77 FOR PLAY NUMBERS. QUESTIONS WILL BE");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "ASKED THEN. ON 4TH DOWN, YOU WILL ALSO BE ASKED WHETHER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ASKED THEN. ON 4TH DOWN, YOU WILL ALSO BE ASKED WHETHER");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "YOU WANT TO PUNT OR ATTEMPT A FIELD GOAL. IF THE ANSWER TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WANT TO PUNT OR ATTEMPT A FIELD GOAL. IF THE ANSWER TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "BOTH QUESTIONS IS NO IT WILL BE ASSUMED YOU WANT TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BOTH QUESTIONS IS NO IT WILL BE ASSUMED YOU WANT TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "TRY AND GAIN YARDAGE. ANSWER ALL QUESTIONS YES OR NO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY AND GAIN YARDAGE. ANSWER ALL QUESTIONS YES OR NO.");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT "THE GAME IS PLAYED UNTIL PLAYERS TERMINATE (CONTROL-C)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE GAME IS PLAYED UNTIL PLAYERS TERMINATE (CONTROL-C).");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT "PLEASE PREPARE A TAPE AND RUN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE PREPARE A TAPE AND RUN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 STOP
    exit(1);

  Lbl_01310:
    // 01310 INPUT E
    // Start of Basic INPUT statement 01310
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&E_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01310
    // 01320 FOR I=1 TO 40
    for(I_int=1;I_int<=40;I_int++){
        // 01330 READ N
        N_int = Get_Data_Int();
        // 01340 IF I>20 THEN 1370
        if(I_int>20)goto Lbl_01370;
        // 01350 A(N)=I
        A_int_arr[N_int] = I_int;
        // 01360 GOTO 1390
        goto Lbl_01390;

  Lbl_01370:
        // 01370 B(N)=I-20
        B_int_arr[N_int] = I_int-20;
        // 01380 C(I)=N
        C_int_arr[I_int] = N_int;

  Lbl_01390:
        // 01390 NEXT I
        int dummy_1390=0; // Ignore this line.
    }; // End-For(I_int)
    // 01400 FOR I=1 TO 20
    for(I_int=1;I_int<=20;I_int++){
        // 01410 READ P$(I)
        P_str_arr[I_int] = Get_Data_String();
        // 01420 NEXT I
        int dummy_1420=0; // Ignore this line.
    }; // End-For(I_int)
    // 01430 L=0
    L_int = 0;
    // 01440 T=1
    T_int_arr[0] = 1;

  Lbl_01450:
    // 01450 PRINT "TEAM";T;"PLAY CHART"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"PLAY CHART");strcat(buf,"\n");fputs(buf,fh); };
    // 01460 PRINT "NO.      PLAY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NO.      PLAY");strcat(buf,"\n");fputs(buf,fh); };
    // 01470 FOR I=1 TO 20
    for(I_int=1;I_int<=20;I_int++){
        // 01480 REM
        // 01490 PRINT C(I+L);TAB(6);P$(I)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,C_int_arr[I_int+L_int]);b2c_TAB(buf,6); strcat(buf,P_str_arr[I_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 01500 NEXT I
        int dummy_1500=0; // Ignore this line.
    }; // End-For(I_int)
    // 01510 L=L+20
    L_int = L_int+20;
    // 01520 T=2
    T_int_arr[0] = 2;
    // 01530 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01540 PRINT "TEAR OFF HERE----------------------------------------------"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAR OFF HERE----------------------------------------------");strcat(buf,"\n");fputs(buf,fh); };
    // 01550 FOR X=1 TO 11
    for(X_int_arr[0]=1;X_int_arr[0]<=11;X_int_arr[0]++){
        // 01560 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01570 NEXT X
        int dummy_1570=0; // Ignore this line.
    }; // End-For(X_int_arr[0])
    // 01580 FOR Z=1 TO 3000
    for(Z_int_arr[0]=1;Z_int_arr[0]<=3000;Z_int_arr[0]++){
        // 01590 NEXT Z
        int dummy_1590=0; // Ignore this line.
    }; // End-For(Z_int_arr[0])
    // 01600 IF L=20 THEN 1450
    if(L_int==20)goto Lbl_01450;
    // 01610 D(1)=0
    D_int_arr[1] = 0;
    // 01620 D(2)=3
    D_int_arr[2] = 3;
    // 01630 M$(1)="--->"
    GLBpStr="--->";
    M_str_arr[1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01640 M$(2)="<---"
    GLBpStr="<---";
    M_str_arr[2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01650 H(1)=0
    H_int_arr[1] = 0;
    // 01660 H(2)=0
    H_int_arr[2] = 0;
    // 01670 T(1)=2
    T_int_arr[1] = 2;
    // 01680 T(2)=1
    T_int_arr[2] = 1;
    // 01690 W(1)=-1
    W_int_arr[1] = -1;
    // 01700 W(2)=1
    W_int_arr[2] = 1;
    // 01710 X(1)=100
    X_int_arr[1] = 100;
    // 01720 X(2)=0
    X_int_arr[2] = 0;
    // 01730 Y(1)=1
    Y_int_arr[1] = 1;
    // 01740 Y(2)=-1
    Y_int_arr[2] = -1;
    // 01750 Z(1)=0
    Z_int_arr[1] = 0;
    // 01760 Z(2)=100
    Z_int_arr[2] = 100;
    // 01770 GOSUB 3640
    Routine_03640();
    // 01780 PRINT "TEAM 1 DEFENDS 0 YD GOAL -- TEAM 2 DEFENDS 100 YD GOAL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM 1 DEFENDS 0 YD GOAL -- TEAM 2 DEFENDS 100 YD GOAL.");strcat(buf,"\n");fputs(buf,fh); };
    // 01790 T=INT(2*RND(1)+1)
    T_int_arr[0] = INT(2*RND(1)+1);
    // 01800 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01810 PRINT "THE COIN IS FLIPPED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE COIN IS FLIPPED");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01820:
    // 01820 P=X(T)-Y(T)*40
    P_int = X_int_arr[T_int_arr[0]]-Y_int_arr[T_int_arr[0]]*40;
    // 01830 GOSUB 3600
    Routine_03600();
    // 01840 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01850 PRINT "TEAM";T;"RECEIVES KICK-OFF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"RECEIVES KICK-OFF");strcat(buf,"\n");fputs(buf,fh); };
    // 01860 K=INT(26*RND(1)+40)
    K_int = INT(26*RND(1)+40);

  Lbl_01870:
    // 01870 P=P-Y(T)*K
    P_int = P_int-Y_int_arr[T_int_arr[0]]*K_int;

  Lbl_01880:
    // 01880 IF W(T)*P<Z(T)+10 THEN 1920
    if(W_int_arr[T_int_arr[0]]*P_int<Z_int_arr[T_int_arr[0]]+10)goto Lbl_01920;
    // 01890 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01900 PRINT "BALL WENT OUT OF ENDZONE --AUTOMATIC TOUCHBACK--"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BALL WENT OUT OF ENDZONE --AUTOMATIC TOUCHBACK--");strcat(buf,"\n");fputs(buf,fh); };
    // 01910 GOTO 1980 
    goto Lbl_01980;

  Lbl_01920:
    // 01920 GOSUB 3630
    Routine_03630();
    // 01930 PRINT "TEAM";T;"DO YOU WANT TO RUNBACK";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"DO YOU WANT TO RUNBACK");fputs(buf,fh); };

  Lbl_01940:
    // 01940 INPUT A$
    // Start of Basic INPUT statement 01940
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
    }; // End of Basic INPUT statement 01940
    // 01950 IF A$="YES" THEN 3050
    if(strcmp(A_str,"YES")==0)goto Lbl_03050;
    // 01960 IF A$<>"NO" THEN 1940
    if(strcmp(A_str,"NO")!=0)goto Lbl_01940;
    // 01970 IF W(T)*P<Z(T) THEN 2000
    if(W_int_arr[T_int_arr[0]]*P_int<Z_int_arr[T_int_arr[0]])goto Lbl_02000;

  Lbl_01980:
    // 01980 P=Z(T)-W(T)*20
    P_int = Z_int_arr[T_int_arr[0]]-W_int_arr[T_int_arr[0]]*20;
    // 01990 D=1
    D_int_arr[0] = 1;

  Lbl_02000:
    // 02000 S=P
    S_int = P_int;
    // 02010 FOR I=1 TO 72
    for(I_int=1;I_int<=72;I_int++){
        // 02020 PRINT "=";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"=");fputs(buf,fh); };

  Lbl_02030:
        // 02030 NEXT I
        int dummy_2030=0; // Ignore this line.
    }; // End-For(I_int)
    // 02040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02050 PRINT "TEAM";T;"DOWN";D;"ON";P
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"DOWN"); b2c_INT(buf,D_int_arr[0]);strcat(buf,"ON"); b2c_INT(buf,P_int);strcat(buf,"\n");fputs(buf,fh); };
    // 02060 IF D<>1 THEN 2110
    if(D_int_arr[0]!=1)goto Lbl_02110;
    // 02070 IF Y(T)*(P+Y(T)*10)>=X(T) THEN 2100
    if(Y_int_arr[T_int_arr[0]]*(P_int+Y_int_arr[T_int_arr[0]]*10)>=X_int_arr[T_int_arr[0]])goto Lbl_02100;
    // 02080 C=4
    C_int_arr[0] = 4;
    // 02090 GOTO 2110
    goto Lbl_02110;

  Lbl_02100:
    // 02100 C=8
    C_int_arr[0] = 8;

  Lbl_02110:
    // 02110 IF C=8 THEN 2140
    if(C_int_arr[0]==8)goto Lbl_02140;
    // 02120 PRINT TAB(27);10-(Y(T)*P-Y(T)*S);"YARDS TO 1ST DOWN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,27); b2c_INT(buf,10-(Y_int_arr[T_int_arr[0]]*P_int-Y_int_arr[T_int_arr[0]]*S_int));strcat(buf,"YARDS TO 1ST DOWN");strcat(buf,"\n");fputs(buf,fh); };
    // 02130 GOTO 2160
    goto Lbl_02160;

  Lbl_02140:
    // 02140 PRINT TAB(27);X(T)-Y(T)*P;"YARDS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,27); b2c_INT(buf,X_int_arr[T_int_arr[0]]-Y_int_arr[T_int_arr[0]]*P_int);strcat(buf,"YARDS");strcat(buf,"\n");fputs(buf,fh); };
    // 02150 GOSUB 3630
    Routine_03630();

  Lbl_02160:
    // 02160 IF D=4 THEN 2700
    if(D_int_arr[0]==4)goto Lbl_02700;

  Lbl_02170:
    // 02170 REM
    // 02180 U=INT(3*RND(0)-1)
    U_int = INT(3*RND(0)-1);
    // 02190 GOTO 2210
    goto Lbl_02210;

  Lbl_02200:
    // 02200 PRINT "ILLEGAL PLAY NUMBER, CHECK AND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL PLAY NUMBER, CHECK AND");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02210:
    // 02210 PRINT "INPUT OFFENSIVE PLAY, DEFENSIVE PLAY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INPUT OFFENSIVE PLAY, DEFENSIVE PLAY");fputs(buf,fh); };
    // 02220 IF T=2 THEN 2250
    if(T_int_arr[0]==2)goto Lbl_02250;
    // 02230 INPUT P1,P2
    // Start of Basic INPUT statement 02230
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P1_int,args,0)) ||
                (err += b2c_strtoi(&P2_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02230
    // 02240 GOTO 2260
    goto Lbl_02260;

  Lbl_02250:
    // 02250 INPUT P2,P1
    // Start of Basic INPUT statement 02250
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P2_int,args,0)) ||
                (err += b2c_strtoi(&P1_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02250

  Lbl_02260:
    // 02260 IF P1=77 THEN 2700
    if(P1_int==77)goto Lbl_02700;
    // 02270 IF P1>20 THEN 3450
    if(P1_int>20)goto Lbl_03450;
    // 02280 IF P1<1 THEN 3450
    if(P1_int<1)goto Lbl_03450;
    // 02290 IF P2>20 THEN 3450
    if(P2_int>20)goto Lbl_03450;
    // 02300 IF P2<1 THEN 3450
    if(P2_int<1)goto Lbl_03450;
    // 02310 P1=INT(P1)
    P1_int = INT(P1_int);
    // 02320 P2=INT(P2)
    P2_int = INT(P2_int);
    // 02330 Y=INT(ABS(A(P1)-B(P2))/19*((X(T)-Y(T)*P+25)*RND(1)-15))
    Y_int_arr[0] = INT(ABS(A_int_arr[P1_int]-B_int_arr[P2_int])/19*((X_int_arr[T_int_arr[0]]-Y_int_arr[T_int_arr[0]]*P_int+25)*RND(1)-15));
    // 02340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02350 IF T=2 THEN 2380
    if(T_int_arr[0]==2)goto Lbl_02380;
    // 02360 IF A(P1)<11 THEN 2480
    if(A_int_arr[P1_int]<11)goto Lbl_02480;
    // 02370 GOTO 2390
    goto Lbl_02390;

  Lbl_02380:
    // 02380 IF B(P2)<11 THEN 2480
    if(B_int_arr[P2_int]<11)goto Lbl_02480;

  Lbl_02390:
    // 02390 IF U<>0 THEN 2430
    if(U_int!=0)goto Lbl_02430;
    // 02400 PRINT "PASS INCOMPLETE TEAM";T
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PASS INCOMPLETE TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };
    // 02410 Y=0
    Y_int_arr[0] = 0;
    // 02420 GOTO 2490
    goto Lbl_02490;

  Lbl_02430:
    // 02430 IF G>.025 THEN 2460
    if(G_int>0.03)goto Lbl_02460;
    // 02440 IF Y>2 THEN 2470
    if(Y_int_arr[0]>2)goto Lbl_02470;
    // 02450 PRINT "QUARTERBACK SCRAMBLED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"QUARTERBACK SCRAMBLED");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02460:
    // 02460 GOTO 2490
    goto Lbl_02490;

  Lbl_02470:
    // 02470 GOTO 2490
    goto Lbl_02490;

  Lbl_02480:
    // 02480 PRINT "THE BALL WAS RUN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE BALL WAS RUN");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02490:
    // 02490 P=P-W(T)*Y
    P_int = P_int-W_int_arr[T_int_arr[0]]*Y_int_arr[0];
    // 02500 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02510 PRINT "NET YARDS GAINED ON DOWN";D;"ARE ";Y
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NET YARDS GAINED ON DOWN"); b2c_INT(buf,D_int_arr[0]);strcat(buf,"ARE "); b2c_INT(buf,Y_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };
    // 02520 G=RND(1)
    G_int = RND(1);
    // 02530 IF G>.025 THEN 2600
    if(G_int>0.03)goto Lbl_02600;
    // 02540 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02550:
    // 02550 PRINT "** LOSS OF POSSESSION FROM TEAM";T;"TO TEAM";T(T)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"** LOSS OF POSSESSION FROM TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"TO TEAM"); b2c_INT(buf,T_int_arr[T_int_arr[0]]);strcat(buf,"\n");fputs(buf,fh); };
    // 02560 GOSUB 3560
    Routine_03560();
    // 02570 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02580 T=T(T)
    T_int_arr[0] = T_int_arr[T_int_arr[0]];
    // 02590 GOTO 1940
    goto Lbl_01940;

  Lbl_02600:
    // 02600 IF Y(T)*P>=X(T) THEN 2930
    if(Y_int_arr[T_int_arr[0]]*P_int>=X_int_arr[T_int_arr[0]])goto Lbl_02930;
    // 02610 IF W(T)*P>=Z(T) THEN 2850
    if(W_int_arr[T_int_arr[0]]*P_int>=Z_int_arr[T_int_arr[0]])goto Lbl_02850;
    // 02620 IF Y(T)*P-Y(T)*S>=10 THEN 2000
    if(Y_int_arr[T_int_arr[0]]*P_int-Y_int_arr[T_int_arr[0]]*S_int>=10)goto Lbl_02000;
    // 02630 D=D+1
    D_int_arr[0] = D_int_arr[0]+1;
    // 02640 IF D<>5 THEN 2030
    if(D_int_arr[0]!=5)goto Lbl_02030;
    // 02650 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02660 PRINT "CONVERSION UNSUCCESSFUL TEAM";T
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONVERSION UNSUCCESSFUL TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };
    // 02670 T=T(T)
    T_int_arr[0] = T_int_arr[T_int_arr[0]];
    // 02680 GOSUB 3560
    Routine_03560();
    // 02690 GOTO 2000
    goto Lbl_02000;

  Lbl_02700:
    // 02700 INPUT A$
    // Start of Basic INPUT statement 02700
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
    }; // End of Basic INPUT statement 02700
    // 02710 IF A$="NO" THEN 2810
    if(strcmp(A_str,"NO")==0)goto Lbl_02810;
    // 02720 IF A$<>"YES" THEN 2700
    if(strcmp(A_str,"YES")!=0)goto Lbl_02700;
    // 02730 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02740 PRINT "TEAM";T;"WILL PUNT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"WILL PUNT");strcat(buf,"\n");fputs(buf,fh); };
    // 02750 G=RND(1)
    G_int = RND(1);

  Lbl_02760:
    // 02760 IF G<.025 THEN 2550
    if(G_int<0.03)goto Lbl_02550;
    // 02770 GOSUB 3560
    Routine_03560();
    // 02780 K=INT(25*RND(1)+35)
    K_int = INT(25*RND(1)+35);
    // 02790 T=T(T)
    T_int_arr[0] = T_int_arr[T_int_arr[0]];
    // 02800 GOTO 1870
    goto Lbl_01870;

  Lbl_02810:
    // 02810 INPUT A$
    // Start of Basic INPUT statement 02810
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
    }; // End of Basic INPUT statement 02810
    // 02820 IF A$="YES" THEN 3150
    if(strcmp(A_str,"YES")==0)goto Lbl_03150;
    // 02830 IF A$<>"NO" THEN 2810
    if(strcmp(A_str,"NO")!=0)goto Lbl_02810;
    // 02840 GOTO 2170
    goto Lbl_02170;

  Lbl_02850:
    // 02850 PRINT "SAFETY AGAINST TEAM";T;"**********************OH-OH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SAFETY AGAINST TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"**********************OH-OH");strcat(buf,"\n");fputs(buf,fh); };
    // 02860 H(T(T))=H(T(T))+2
    H_int_arr[T_int_arr[T_int_arr[0]]] = H_int_arr[T_int_arr[T_int_arr[0]]]+2;
    // 02870 GOSUB 3470
    Routine_03470();
    // 02880 PRINT"TEAM";T;"DO YOU WANT TO PUNT INSTEAD OF A KICKOFF";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"DO YOU WANT TO PUNT INSTEAD OF A KICKOFF");fputs(buf,fh); };
    // 02890 INPUT A$
    // Start of Basic INPUT statement 02890
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
    }; // End of Basic INPUT statement 02890
    // 02900 P=Z(T)-W(T)*20
    P_int = Z_int_arr[T_int_arr[0]]-W_int_arr[T_int_arr[0]]*20;
    // 02910 IF A$="YES" THEN 2760
    if(strcmp(A_str,"YES")==0)goto Lbl_02760;
    // 02920 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02930:
    // 02930 PRINT "TOUCHDOWN BY TEAM";T;"*********************YEA TEAM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOUCHDOWN BY TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"*********************YEA TEAM");strcat(buf,"\n");fputs(buf,fh); };
    // 02940 Q=7
    Q_int = 7;
    // 02950 G=RND(1)
    G_int = RND(1);
    // 02960 IF G>.1 THEN 3000
    if(G_int>0.1)goto Lbl_03000;
    // 02970 Q=6
    Q_int = 6;
    // 02980 PRINT "EXTRA POINT NO GOOD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"EXTRA POINT NO GOOD");strcat(buf,"\n");fputs(buf,fh); };
    // 02990 GOTO 3020
    goto Lbl_03020;

  Lbl_03000:
    // 03000 PRINT "EXTRA POINT GOOD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"EXTRA POINT GOOD");strcat(buf,"\n");fputs(buf,fh); };
    // 03010 H(T)=H(T)+Q
    H_int_arr[T_int_arr[0]] = H_int_arr[T_int_arr[0]]+Q_int;

  Lbl_03020:
    // 03020 GOSUB 3470
    Routine_03470();
    // 03030 T=T(T)
    T_int_arr[0] = T_int_arr[T_int_arr[0]];
    // 03040 GOTO 1820
    goto Lbl_01820;

  Lbl_03050:
    // 03050 K=INT(9*RND(0)+1)
    K_int = INT(9*RND(0)+1);
    // 03060 R=INT(((X(T)-Y(T)*P+25)*RND(1)-15)/K)
    R_int = INT(((X_int_arr[T_int_arr[0]]-Y_int_arr[T_int_arr[0]]*P_int+25)*RND(1)-15)/K_int);
    // 03070 P=P-W(T)*R
    P_int = P_int-W_int_arr[T_int_arr[0]]*R_int;
    // 03080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03090 PRINT "RUNBACK TEAM";T;R;"YARDS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RUNBACK TEAM"); b2c_INT(buf,T_int_arr[0]); b2c_INT(buf,R_int);strcat(buf,"YARDS");strcat(buf,"\n");fputs(buf,fh); };
    // 03100 G=RND(1)
    G_int = RND(1);
    // 03110 IF G<.025 THEN 2550
    if(G_int<0.03)goto Lbl_02550;
    // 03120 IF Y(T)*P>=X(T) THEN 2930
    if(Y_int_arr[T_int_arr[0]]*P_int>=X_int_arr[T_int_arr[0]])goto Lbl_02930;
    // 03130 IF W(T)*P>=Z(T) THEN 2850
    if(W_int_arr[T_int_arr[0]]*P_int>=Z_int_arr[T_int_arr[0]])goto Lbl_02850;
    // 03140 GOTO 2000
    goto Lbl_02000;

  Lbl_03150:
    // 03150 PRINT "TEAM";T;"WILL ATTEMPT A FIELD GOAL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"WILL ATTEMPT A FIELD GOAL");strcat(buf,"\n");fputs(buf,fh); };
    // 03160 G=RND(1)
    G_int = RND(1);
    // 03170 IF G<.025 THEN 2550
    if(G_int<0.03)goto Lbl_02550;
    // 03180 F=INT(35*RND(1)+20)
    F_int = INT(35*RND(1)+20);
    // 03190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03200 PRINT "KICK IS";F;"YARDS LONG"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"KICK IS"); b2c_INT(buf,F_int);strcat(buf,"YARDS LONG");strcat(buf,"\n");fputs(buf,fh); };
    // 03210 P=P-W(T)*F
    P_int = P_int-W_int_arr[T_int_arr[0]]*F_int;
    // 03220 G=RND(1)
    G_int = RND(1);
    // 03230 IF G<.35 THEN 3280
    if(G_int<0.35)goto Lbl_03280;
    // 03240 IF Y(T)*P<X(T) THEN 3290
    if(Y_int_arr[T_int_arr[0]]*P_int<X_int_arr[T_int_arr[0]])goto Lbl_03290;
    // 03250 PRINT "FIELD GOAL GOOD FOR TEAM";T;"*********************YEA"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FIELD GOAL GOOD FOR TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"*********************YEA");strcat(buf,"\n");fputs(buf,fh); };
    // 03260 Q=3
    Q_int = 3;
    // 03270 GOTO 3020
    goto Lbl_03020;

  Lbl_03280:
    // 03280 PRINT "BALL WENT WIDE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BALL WENT WIDE");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03290:
    // 03290 PRINT "FIELD GOAL UNSUCCESFUL TEAM";T;"-----------------TOO BAD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FIELD GOAL UNSUCCESFUL TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"-----------------TOO BAD");strcat(buf,"\n");fputs(buf,fh); };
    // 03300 GOSUB 3560
    Routine_03560();
    // 03310 IF Y(T)*P<X(T)+10 THEN 3340
    if(Y_int_arr[T_int_arr[0]]*P_int<X_int_arr[T_int_arr[0]]+10)goto Lbl_03340;
    // 03320 T=T(T)
    T_int_arr[0] = T_int_arr[T_int_arr[0]];
    // 03330 GOTO 1880
    goto Lbl_01880;

  Lbl_03340:
    // 03340 PRINT "BALL NOW ON";P
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BALL NOW ON"); b2c_INT(buf,P_int);strcat(buf,"\n");fputs(buf,fh); };
    // 03350 T=T(T)
    T_int_arr[0] = T_int_arr[T_int_arr[0]];
    // 03360 GOSUB 3630
    Routine_03630();
    // 03370 GOTO 1940
    goto Lbl_01940;
    // 03380 DATA 17,8,4,14,19,3,10,1,7,11,15,9,5,20,13,18,16,2,12,6
    // 03390 DATA 20,2,17,5,8,18,12,11,1,4,19,14,10,7,9,15,6,13,16,3
    // 03400 DATA "PITCHOUT","TRIPLE REVERSE","DRAW","QB SNEAK","END AROUND"
    // 03410 DATA "DOUBLE REVERSE","LEFT SWEEP","RIGHT SWEEP","OFF TACKLE"
    // 03420 DATA "WISHBONE OPTION","FLARE PASS","SCREEN PASS"
    // 03430 DATA "ROLL OUT OPTION","RIGHT CURL","LEFT CURL","WISHBONE OPTION"
    // 03440 DATA "SIDELINE PASS","HALF-BACK OPTION","RAZZLE-DAZZLE","BOMB!!!!"

  Lbl_03450:
    // 03450 IF P1<>99 THEN 2200
    if(P1_int!=99)goto Lbl_02200;
    // 03460 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

void Routine_03470(){
    // 03470 PRINT "TEAM 1 SCORE IS";H(1)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM 1 SCORE IS"); b2c_INT(buf,H_int_arr[1]);strcat(buf,"\n");fputs(buf,fh); };
    // 03480 PRINT "TEAM 2 SCORE IS";H(2)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM 2 SCORE IS"); b2c_INT(buf,H_int_arr[2]);strcat(buf,"\n");fputs(buf,fh); };
    // 03490 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03500 IF H(T)<E THEN 3530
    if(H_int_arr[T_int_arr[0]]<E_int)goto Lbl_03530;
    // 03510 PRINT "TEAM";T;"WINS*******************"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAM"); b2c_INT(buf,T_int_arr[0]);strcat(buf,"WINS*******************");strcat(buf,"\n");fputs(buf,fh); };
    // 03520 GOTO 3550
    goto Lbl_03550;

  Lbl_03530:
    // 03530 IF P1=99 THEN 2210
    if(P1_int==99)goto Lbl_02210;
    // 03540 GOTO 09900
    goto Lbl_09900;

  Lbl_03550:
    // 03550 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
