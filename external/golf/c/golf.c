/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/golf.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5747c2e5eb80 ---------A   00001 PRINT TAB(34);"GOLF"
    0x5747c2e5fed0 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5747c2e5e2d0 ---------A   00003 PRINT:PRINT:PRINT
    0x5747c2e5f580 ---------A   00004 PRINT "WELCOME TO THE CREATIVE COMPUTING COUNTRY CLUB,"
    0x5747c2e5fa40 ---------A   00005 PRINT "AN EIGHTEEN HOLE CHAMPIONSHIP LAYOUT LOCATED A SHORT"
    0x5747c2e5de90 ---------A   00006 PRINT "DISTANCE FROM SCENIC DOWNTOWN MORRISTOWN.  THE"
    0x5747c2e5f680 ---------A   00007 PRINT "COMMENTATOR WILL EXPLAIN THE GAME AS YOU PLAY."
    0x5747c2e5dca0 ---------A   00008 PRINT "ENJOY YOUR GAME; SEE YOU AT THE 19TH HOLE..."
    0x5747c2e5e780 ---------A   00009 PRINT:PRINT: DIM L(10)
    0x5747c2e5fa90 ---------A   00010 G1=18
    0x5747c2e65b80 ---------A   00020 G2=0
    0x5747c2e65e10 ---------A   00030 G3=0
    0x5747c2e660e0 ---------A   00040 A=0
    0x5747c2e663b0 ---------A   00050 N=.8
    0x5747c2e66680 ---------A   00060 S2=0
    0x5747c2e66930 ---------A   00070 F=1
    0x5747c2e66aa0 ---------A T 00080 PRINT "WHAT IS YOUR HANDICAP";
    0x5747c2e66cb0 ---------A   00090 INPUT H:PRINT
    0x5747c2e5d670 ---------A   00100 IF H>30 THEN 470
    0x5747c2e67120 ---------A   00110 IF H<0 THEN 470
    0x5747c2e67290 ---------A T 00120 PRINT "DIFFICULTIES AT GOLF INCLUDE:"
    0x5747c2e67430 ---------A   00130 PRINT "0=HOOK, 1=SLICE, 2=POOR DISTANCE, 4=TRAP SHOTS, 5=PUTTING"
    0x5747c2e67580 ---------A   00140 PRINT "WHICH ONE (ONLY ONE) IS YOUR WORST";
    0x5747c2e677f0 ---------A   00150 INPUT T:PRINT
    0x5747c2e67a40 ---------A   00160 IF T>5 THEN 120
    0x5747c2e67d20 ---------A   00170 S1=0
    0x5747c2e67d90 ---------A   00210 REM
    0x5747c2e68070 ---------A T 00230 L(0)=0
    0x5747c2e68340 ---------A   00240 J=0
    0x5747c2e68610 ---------A   00245 Q=0
    0x5747c2e68940 ---------A   00250 S2=S2+1
    0x5747c2e68c10 ---------A   00260 K=0
    0x5747c2e68e80 ---------A   00270 IF F=1 THEN 310
    0x5747c2e695f0 ---------A   00290 PRINT "YOUR SCORE ON HOLE";F-1;"WAS";S1
    0x5747c2e69660 ---------A   00291 GOTO 1750
    0x5747c2e69a80 ---------A T 00292 IF S1>P+2 THEN 297
    0x5747c2e69d00 ---------A   00293 IF S1=P THEN 299
    0x5747c2e6a080 ---------A   00294 IF S1=P-1 THEN 301
    0x5747c2e6a400 ---------A   00295 IF S1=P-2 THEN 303
    0x5747c2e6a460 ---------A   00296 GOTO 310
    0x5747c2e6a5a0 ---------A T 00297 PRINT "KEEP YOUR HEAD DOWN."
    0x5747c2e6a5f0 ---------A   00298 GOTO 310
    0x5747c2e6a730 ---------A T 00299 PRINT "A PAR.  NICE GOING."
    0x5747c2e6a7a0 ---------A   00300 GOTO 310
    0x5747c2e6a8e0 ---------A T 00301 PRINT "A BIRDIE."
    0x5747c2e6a950 ---------A   00302 GOTO 310
    0x5747c2e6ab70 ---------A T 00303 IF P=3 THEN 306
    0x5747c2e6acd0 ---------A   00304 PRINT "A GREAT BIG EAGLE."
    0x5747c2e6ad50 ---------A   00305 GOTO 310
    0x5747c2e6ae90 ---------A T 00306 PRINT "A HOLE IN ONE."
    0x5747c2e6b0e0 ---------A T 00310 IF F=19 THEN 1710
    0x5747c2e6b300 ---------A   00315 S1=0
    0x5747c2e6b370 ---------A   00316 PRINT
    0x5747c2e6b5c0 ---------A T 00320 IF S1=0 THEN 1590
    0x5747c2e6b8e0 ---------A   00330 IF L(0)<1 THEN 1150
    0x5747c2e6bbc0 ---------A   00340 X=0
    0x5747c2e6bf00 ---------A   00350 IF L(0)>5 THEN 1190
    0x5747c2e6c600 ---------A   00360 PRINT "SHOT WENT";D1;"YARDS.  IT'S";D2;"YARDS FROM THE CUP."
    0x5747c2e6cb10 ---------A   00362 PRINT "BALL IS";INT(O);"YARDS OFF LINE... IN ";
    0x5747c2e6cb80 ---------A   00380 GOSUB 400
    0x5747c2e6cbe0 ---------A   00390 GOTO 620
    0x5747c2e6cf00 ---------B G 00400 IF L(X)=1 THEN 480
    0x5747c2e6d240 ---------B   00410 IF L(X)=2 THEN 500
    0x5747c2e6d580 ---------B   00420 IF L(X)=3 THEN 520
    0x5747c2e6d8c0 ---------B   00430 IF L(X)=4 THEN 540
    0x5747c2e6e010 ---------B   00440 IF L(X)=5 THEN 560
    0x5747c2e6e360 ---------B   00450 IF L(X)=6 THEN 580
    0x5747c2e6e4c0 ---------B   00460 PRINT "OUT OF BOUNDS."
    0x5747c2e6e550 ---------B   00465 GOTO 1690
    0x5747c2e6e6a0 ---------A T 00470 PRINT "PGA HANDICAPS RANGE FROM 0 TO 30."
    0x5747c2e6e710 ---------A   00472 GOTO 80
    0x5747c2e6e850 ---------B T 00480 PRINT "FAIRWAY."
    0x5747c2e6e8c0 ---------B   00490 GOTO 1690
    0x5747c2e6ea00 ---------B T 00500 PRINT "ROUGH."
    0x5747c2e6ea70 ---------B   00510 GOTO 1690
    0x5747c2e6ebb0 ---------B T 00520 PRINT "TREES."
    0x5747c2e6ec30 ---------B   00530 GOTO 1690
    0x5747c2e6ed70 ---------B T 00540 PRINT "ADJACENT FAIRWAY."
    0x5747c2e6ede0 ---------B   00550 GOTO 1690
    0x5747c2e6ef20 ---------B T 00560 PRINT "TRAP."
    0x5747c2e6ef90 ---------B   00570 GOTO 1690
    0x5747c2e6f0d0 ---------B T 00580 PRINT "WATER."
    0x5747c2e6f140 ---------B   00590 GOTO 1690
    0x5747c2e6f390 ---------A T 00620 IF A=1 THEN 629
    0x5747c2e6f520 ---------A   00621 PRINT "SELECTION OF CLUBS"
    0x5747c2e6f6c0 ---------A   00622 PRINT "YARDAGE DESIRED                       SUGGESTED CLUBS"
    0x5747c2e6f860 ---------A   00623 PRINT "200 TO 280 YARDS                           1 TO 4"
    0x5747c2e6fa00 ---------A   00624 PRINT "100 TO 200 YARDS                          19 TO 13"
    0x5747c2e6fb70 ---------A   00625 PRINT "  0 TO 100 YARDS                          29 TO 23"
    0x5747c2e6fd90 ---------A   00626 A=1
    0x5747c2e6ff10 ---------A T 00629 PRINT "WHAT CLUB DO YOU CHOOSE";
    0x5747c2e70120 ---------A   00630 INPUT C
    0x5747c2e701a0 ---------A   00632 PRINT
    0x5747c2e703f0 ---------A   00635 IF C<1 THEN 690
    0x5747c2e70650 ---------A   00637 IF C>29 THEN 690
    0x5747c2e708b0 ---------A   00640 IF C>4 THEN 710
    0x5747c2e70bd0 ---------A T 00650 IF L(0)<=5 THEN 740
    0x5747c2e70e30 ---------A   00660 IF C=14 THEN 740
    0x5747c2e71090 ---------A   00665 IF C=23 THEN 740
    0x5747c2e71110 ---------A   00670 GOTO 690
    0x5747c2e71450 ---------A T 00680 S1=S1-1
    0x5747c2e715b0 ---------A T 00690 PRINT "THAT CLUB IS NOT IN THE BAG."
    0x5747c2e71620 ---------A   00693 PRINT
    0x5747c2e71690 ---------A   00700 GOTO 620
    0x5747c2e718d0 ---------A T 00710 IF C<12 THEN 690
    0x5747c2e71c10 ---------A   00720 C=C-6
    0x5747c2e71c80 ---------A   00730 GOTO 650
    0x5747c2e71fa0 ---------A T 00740 S1=S1+1
    0x5747c2e72270 ---------A   00741 W=1
    0x5747c2e724d0 ---------A   00742 IF C>13 THEN 960
    0x5747c2e72a30 ---------A   00746 IF INT(F/3)=F/3 THEN 952
    0x5747c2e72c90 ---------A T 00752 IF C<4 THEN 756
    0x5747c2e72d10 ---------A   00754 GOTO 760
    0x5747c2e73010 ---------A T 00756 IF L(0)=2 THEN 862
    0x5747c2e732a0 ---------A T 00760 IF S1>7 THEN 867
    0x5747c2e742e0 ---------A T 00770 D1=INT(((30-H)*2.5+187-((30-H)*.25+15)*C/2)+25*RND(1))
    0x5747c2e74710 ---------A   00780 D1=INT(D1*W)
    0x5747c2e74980 ---------A   00800 IF T=2 THEN 1170
    0x5747c2e75510 ---------A T 00830 O=(RND(1)/.8)*(2*H+16)*ABS(TAN(D1*.0035))
    0x5747c2e75ee0 ---------A   00840 D2=INT(SQR(O^2+ABS(D-D1)^2))
    0x5747c2e76250 ---------A   00850 IF D-D1<0 THEN 870
    0x5747c2e762e0 ---------A   00860 GOTO 890
    0x5747c2e76420 ---------A T 00862 PRINT "YOU DUBBED IT."
    0x5747c2e76630 ---------A   00864 D1=35
    0x5747c2e766a0 ---------A   00866 GOTO 830
    0x5747c2e768e0 ---------A T 00867 IF D<200 THEN 1300
    0x5747c2e76960 ---------A   00868 GOTO 770
    0x5747c2e76bc0 ---------A T 00870 IF D2<20 THEN 890
    0x5747c2e76d30 ---------A   00880 PRINT "TOO MUCH CLUB. YOU'RE PAST THE HOLE."
    0x5747c2e77830 ---------A T 00890 B=D
    0x5747c2e77a60 ---------A   00900 D=D2
    0x5747c2e77cb0 ---------A   00910 IF D2>27 THEN 1020
    0x5747c2e77f10 ---------A   00920 IF D2>20 THEN 1100
    0x5747c2e78170 ---------A   00930 IF D2>.5 THEN 1120
    0x5747c2e78450 ---------A   00940 L(0)=9
    0x5747c2e784f0 ---------A   00950 GOTO 1470
    0x5747c2e79430 ---------A T 00952 IF S2+Q+(10*(F-1)/18)<(F-1)*(72+((H+1)/.85))/18 THEN 956
    0x5747c2e794b0 ---------A   00954 GOTO 752
    0x5747c2e797e0 ---------A T 00956 Q=Q+1
    0x5747c2e79d30 ---------A   00957 IF S1/2<>INT(S1/2) THEN 1011
    0x5747c2e79de0 ---------A   00958 GOTO 862
    0x5747c2e79f50 ---------A T 00960 PRINT "NOW GAUGE YOUR DISTANCE BY A PERCENTAGE (1 TO 100)"
    0x5747c2e7a0c0 ---------A   00961 PRINT "OF A FULL SWING";
    0x5747c2e7a530 ---------A   00970 INPUT W: W=W/100
    0x5747c2e7a5a0 ---------A   00972 PRINT
    0x5747c2e7a7f0 ---------A   00980 IF W>1 THEN 680
    0x5747c2e7ab10 ---------A   00985 IF L(0)=5 THEN 1280
    0x5747c2e7ad70 ---------A   00990 IF C=14 THEN 760
    0x5747c2e7b0b0 ---------A   01000 C=C-10
    0x5747c2e7b120 ---------A   01010 GOTO 760
    0x5747c2e7b390 ---------A T 01011 IF D<95 THEN 862
    0x5747c2e7b800 ---------A   01012 PRINT "BALL HIT TREE - BOUNCED INTO ROUGH";D-75;"YARDS FROM HOLE."
    0x5747c2e7bb30 ---------A   01014 D=D-75
    0x5747c2e7bba0 ---------A   01018 GOTO 620
    0x5747c2e7bde0 ---------A T 01020 IF O<30 THEN 1150
    0x5747c2e7c040 ---------A   01022 IF J>0 THEN 1150
    0x5747c2e7c2a0 ---------A   01030 IF T>0 THEN 1070
    0x5747c2e7c7f0 ---------A   01035 S9=(S2+1)/15
    0x5747c2e7cb50 ---------A   01036 IF INT(S9)=S9 THEN 1075
    0x5747c2e7ccd0 ---------A T 01040 PRINT "YOU HOOKED- ";
    0x5747c2e7d080 ---------A   01050 L(0)=L(2)
    0x5747c2e7d2d0 ---------A T 01055 IF O>45 THEN 1092
    0x5747c2e7d350 ---------A   01060 GOTO 320
    0x5747c2e7d7c0 ---------A T 01070 S9=(S2+1)/15
    0x5747c2e7db20 ---------A   01071 IF INT(S9)=S9 THEN 1040
    0x5747c2e7dca0 ---------A T 01075 PRINT "YOU SLICED- ";
    0x5747c2e7e050 ---------A   01080 L(0)=L(1)
    0x5747c2e7e0c0 ---------A   01090 GOTO 1055
    0x5747c2e7e200 ---------A T 01092 PRINT "BADLY."
    0x5747c2e7e270 ---------A   01094 GOTO 320
    0x5747c2e7e530 ---------A T 01100 L(0)=5
    0x5747c2e7e5a0 ---------A   01110 GOTO 320
    0x5747c2e7e860 ---------A T 01120 L(0)=8
    0x5747c2e7ec70 ---------A   01130 D2=INT(D2*3)
    0x5747c2e7ece0 ---------A   01140 GOTO 1380
    0x5747c2e7efa0 ---------A T 01150 L(0)=1
    0x5747c2e7f010 ---------A   01160 GOTO 320
    0x5747c2e7f410 ---------A T 01170 D1=INT(.85*D1)
    0x5747c2e7f490 ---------A   01180 GOTO 830
    0x5747c2e7f7b0 ---------A T 01190 IF L(0)>6 THEN 1260
    0x5747c2e7f920 ---------A   01200 PRINT "YOUR SHOT WENT INTO THE WATER."
    0x5747c2e7fc80 ---------A T 01210 S1=S1+1
    0x5747c2e7fdf0 ---------A   01220 PRINT "PENALTY STROKE ASSESSED.  HIT FROM PREVIOUS LOCATION."
    0x5747c2e80120 ---------A   01230 J=J+1
    0x5747c2e803f0 ---------A   01240 L(0)=1
    0x5747c2e80620 ---------A   01242 D=B
    0x5747c2e806b0 ---------A   01250 GOTO 620
    0x5747c2e80800 ---------A T 01260 PRINT "YOUR SHOT WENT OUT OF BOUNDS."
    0x5747c2e80870 ---------A   01270 GOTO 1210
    0x5747c2e80ac0 ---------A T 01280 IF T=3 THEN 1320
    0x5747c2e81480 ---------A T 01300 D2=1+(3*INT((80/(40-H))*RND(1)))
    0x5747c2e81500 ---------A   01310 GOTO 1380
    0x5747c2e81820 ---------A T 01320 IF RND(1)>N THEN 1360
    0x5747c2e81b80 ---------A   01330 N=N*.2
    0x5747c2e81ce0 ---------A   01340 PRINT "SHOT DUBBED, STILL IN TRAP."
    0x5747c2e81d50 ---------A   01350 GOTO 620
    0x5747c2e81f50 ---------A T 01360 N=.8
    0x5747c2e81fe0 ---------A   01370 GOTO 1300
    0x5747c2e82340 ---------A T 01380 PRINT "ON GREEN,";D2;"FEET FROM THE PIN."
    0x5747c2e824c0 ---------A   01381 PRINT "CHOOSE YOUR PUTT POTENCY (1 TO 13):";
    0x5747c2e826d0 ---------A   01400 INPUT I
    0x5747c2e82a20 ---------A   01410 S1=S1+1
    0x5747c2e830f0 ---------A   01420 IF S1+1-P>(H*.072)+2 THEN 1470
    0x5747c2e83350 ---------A   01425 IF K>2 THEN 1470
    0x5747c2e83690 ---------A   01428 K=K+1
    0x5747c2e838f0 ---------A   01430 IF T=4 THEN 1530
    0x5747c2e84170 ---------A   01440 D2=D2-I*(4+2*RND(1))+1.5
    0x5747c2e843c0 ---------A T 01450 IF D2<-2 THEN 1560
    0x5747c2e84630 ---------A   01460 IF D2>2 THEN 1500
    0x5747c2e84790 ---------A T 01470 PRINT "YOU HOLED IT."
    0x5747c2e84800 ---------A   01472 PRINT
    0x5747c2e84b30 ---------A   01480 F=F+1
    0x5747c2e84bb0 ---------A   01490 GOTO 230
    0x5747c2e84cf0 ---------A T 01500 PRINT "PUTT SHORT."
    0x5747c2e85000 ---------A T 01505 D2=INT(D2)
    0x5747c2e85080 ---------A   01510 GOTO 1380
    0x5747c2e858e0 ---------A T 01530 D2=D2-I*(4+1*RND(1))+1
    0x5747c2e85960 ---------A   01550 GOTO 1450
    0x5747c2e85aa0 ---------A T 01560 PRINT "PASSED BY CUP."
    0x5747c2e85cd0 ---------A   01570 D2=-D2
    0x5747c2e85d40 ---------A   01580 GOTO 1505
    0x5747c2e862a0 ---------A T 01590 READ D,P,L(1),L(2)
    0x5747c2e86330 ---------A   01595 PRINT
    0x5747c2e86990 ---------A   01600 PRINT "YOU ARE AT THE TEE OFF HOLE";F;"DISTANCE";D;"YARDS, PAR";P
    0x5747c2e86cf0 ---------A   01605 G3=G3+P
    0x5747c2e86e60 ---------A   01620 PRINT "ON YOUR RIGHT IS ";
    0x5747c2e87070 ---------A   01630 X=1
    0x5747c2e870f0 ---------A   01640 GOSUB 400
    0x5747c2e87250 ---------A   01650 PRINT "ON YOUR LEFT IS ";
    0x5747c2e87460 ---------A   01660 X=2
    0x5747c2e874d0 ---------A   01670 GOSUB 400
    0x5747c2e87530 ---------A   01680 GOTO 620
    0x5747c2e87570 ---------B T 01690 RETURN
    0x5747c2e88430 ---------A   01700 DATA 361,4,4,2,389,4,3,3,206,3,4,2,500,5,7,2
    0x5747c2e892c0 ---------A   01702 DATA 408,4,2,4,359,4,6,4,424,4,4,2,388,4,4,4
    0x5747c2e8a150 ---------A   01704 DATA 196,3,7,2,400,4,7,2,560,5,7,2,132,3,2,2
    0x5747c2e8afd0 ---------A   01706 DATA 357,4,4,4,294,4,2,4,475,5,2,3,375,4,4,2
    0x5747c2e8b740 ---------A   01708 DATA 180,3,6,2,550,5,6,6
    0x5747c2e8b7b0 ---------A T 01710 PRINT
    0x5747c2e8bb30 ---------A T 01750 G2=G2+S1
    0x5747c2e8c290 ---------A   01760 PRINT "TOTAL PAR FOR";F-1;"HOLES IS";G3;"  YOUR TOTAL IS";G2
    0x5747c2e8c600 ---------A   01761 IF G1=F-1 THEN 1770
    0x5747c2e8c680 ---------A   01765 GOTO 292
    0x5747c2e8c6c0 ---------A T 01770 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00080      00472T
     00120      00160T
     00230      01490T
     00292      01765T
     00297      00292T
     00299      00293T
     00301      00294T
     00303      00295T
     00306      00303T
     00310      00270T, 00296T, 00298T, 00300T, 00302T, 00305T
     00320      01060T, 01094T, 01110T, 01160T
     00400      00380G, 01640G, 01670G
     00470      00100T, 00110T
     00480      00400T
     00500      00410T
     00520      00420T
     00540      00430T
     00560      00440T
     00580      00450T
     00620      00390T, 00700T, 01018T, 01250T, 01350T, 01680T
     00629      00620T
     00650      00730T
     00680      00980T
     00690      00635T, 00637T, 00670T, 00710T
     00710      00640T
     00740      00650T, 00660T, 00665T
     00752      00954T
     00756      00752T
     00760      00754T, 00990T, 01010T
     00770      00868T
     00830      00866T, 01180T
     00862      00756T, 00958T, 01011T
     00867      00760T
     00870      00850T
     00890      00860T, 00870T
     00952      00746T
     00956      00952T
     00960      00742T
     01011      00957T
     01020      00910T
     01040      01071T
     01055      01090T
     01070      01030T
     01075      01036T
     01092      01055T
     01100      00920T
     01120      00930T
     01150      00330T, 01020T, 01022T
     01170      00800T
     01190      00350T
     01210      01270T
     01260      01190T
     01280      00985T
     01300      00867T, 01370T
     01320      01280T
     01360      01320T
     01380      01140T, 01310T, 01510T
     01450      01550T
     01470      00950T, 01420T, 01425T
     01500      01460T
     01505      01580T
     01530      01430T
     01560      01450T
     01590      00320T
     01690      00465T, 00490T, 00510T, 00530T, 00550T, 00570T, 00590T
     01710      00310T
     01750      00291T
     01770      01761T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5747c2e5eb80 (00001)   0x5747c2e5eb80 (00001)   0x5747c2e8c6c0 (01770)   0x5747c2e8c6c0 (01770)   
   B) 0x5747c2e6cf00 (00400)   0x5747c2e6cf00 (00400)   0x5747c2e87570 (01690)   0x5747c2e87570 (01690)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03450 - 10000    6560 

 */



/*
 *  Symbol Table Listing for 'basic/golf.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    C                        Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    D1                       Integer     
    D2                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G1                       Integer     
    G2                       Integer     
    G3                       Integer     
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K                        Integer     
    L               Array    Integer         {0,9} 
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
    N                        Integer     
    O                        Integer     
    OCT$            Function String          args=1, float  
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S1                       Integer     
    S2                       Integer     
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
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/golf.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5747c2e5eb80 ---------A   01000 PRINT TAB(34);"GOLF"
    0x5747c2e5fed0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5747c2e5e2d0 ---------A   01020 PRINT:PRINT:PRINT
    0x5747c2e5f580 ---------A   01030 PRINT "WELCOME TO THE CREATIVE COMPUTING COUNTRY CLUB,"
    0x5747c2e5fa40 ---------A   01040 PRINT "AN EIGHTEEN HOLE CHAMPIONSHIP LAYOUT LOCATED A SHORT"
    0x5747c2e5de90 ---------A   01050 PRINT "DISTANCE FROM SCENIC DOWNTOWN MORRISTOWN.  THE"
    0x5747c2e5f680 ---------A   01060 PRINT "COMMENTATOR WILL EXPLAIN THE GAME AS YOU PLAY."
    0x5747c2e5dca0 ---------A   01070 PRINT "ENJOY YOUR GAME; SEE YOU AT THE 19TH HOLE..."
    0x5747c2e5e780 ---------A   01080 PRINT:PRINT: DIM L(10)
    0x5747c2e5fa90 ---------A   01090 G1=18
    0x5747c2e65b80 ---------A   01100 G2=0
    0x5747c2e65e10 ---------A   01110 G3=0
    0x5747c2e660e0 ---------A   01120 A=0
    0x5747c2e663b0 ---------A   01130 N=.8
    0x5747c2e66680 ---------A   01140 S2=0
    0x5747c2e66930 ---------A   01150 F=1
    0x5747c2e66aa0 ---------A T 01160 PRINT "WHAT IS YOUR HANDICAP";
    0x5747c2e66cb0 ---------A   01170 INPUT H:PRINT
    0x5747c2e5d670 ---------A   01180 IF H>30 THEN 1610
    0x5747c2e67120 ---------A   01190 IF H<0 THEN 1610
    0x5747c2e67290 ---------A T 01200 PRINT "DIFFICULTIES AT GOLF INCLUDE:"
    0x5747c2e67430 ---------A   01210 PRINT "0=HOOK, 1=SLICE, 2=POOR DISTANCE, 4=TRAP SHOTS, 5=PUTTING"
    0x5747c2e67580 ---------A   01220 PRINT "WHICH ONE (ONLY ONE) IS YOUR WORST";
    0x5747c2e677f0 ---------A   01230 INPUT T:PRINT
    0x5747c2e67a40 ---------A   01240 IF T>5 THEN 1200
    0x5747c2e67d20 ---------A   01250 S1=0
    0x5747c2e67d90 ---------A   01260 REM
    0x5747c2e68070 ---------A T 01270 L(0)=0
    0x5747c2e68340 ---------A   01280 J=0
    0x5747c2e68610 ---------A   01290 Q=0
    0x5747c2e68940 ---------A   01300 S2=S2+1
    0x5747c2e68c10 ---------A   01310 K=0
    0x5747c2e68e80 ---------A   01320 IF F=1 THEN 1500
    0x5747c2e695f0 ---------A   01330 PRINT "YOUR SCORE ON HOLE";F-1;"WAS";S1
    0x5747c2e69660 ---------A   01340 GOTO 3180
    0x5747c2e69a80 ---------A T 01350 IF S1>P+2 THEN 1400
    0x5747c2e69d00 ---------A   01360 IF S1=P THEN 1420
    0x5747c2e6a080 ---------A   01370 IF S1=P-1 THEN 1440
    0x5747c2e6a400 ---------A   01380 IF S1=P-2 THEN 1460
    0x5747c2e6a460 ---------A   01390 GOTO 1500
    0x5747c2e6a5a0 ---------A T 01400 PRINT "KEEP YOUR HEAD DOWN."
    0x5747c2e6a5f0 ---------A   01410 GOTO 1500
    0x5747c2e6a730 ---------A T 01420 PRINT "A PAR.  NICE GOING."
    0x5747c2e6a7a0 ---------A   01430 GOTO 1500
    0x5747c2e6a8e0 ---------A T 01440 PRINT "A BIRDIE."
    0x5747c2e6a950 ---------A   01450 GOTO 1500
    0x5747c2e6ab70 ---------A T 01460 IF P=3 THEN 1490
    0x5747c2e6acd0 ---------A   01470 PRINT "A GREAT BIG EAGLE."
    0x5747c2e6ad50 ---------A   01480 GOTO 1500
    0x5747c2e6ae90 ---------A T 01490 PRINT "A HOLE IN ONE."
    0x5747c2e6b0e0 ---------A T 01500 IF F=19 THEN 3170
    0x5747c2e6b300 ---------A   01510 S1=0
    0x5747c2e6b370 ---------A   01520 PRINT
    0x5747c2e6b5c0 ---------A T 01530 IF S1=0 THEN 3010
    0x5747c2e6b8e0 ---------A   01540 IF L(0)<1 THEN 2550
    0x5747c2e6bbc0 ---------A   01550 X=0
    0x5747c2e6bf00 ---------A   01560 IF L(0)>5 THEN 2590
    0x5747c2e6c600 ---------A   01570 PRINT "SHOT WENT";D1;"YARDS.  IT'S";D2;"YARDS FROM THE CUP."
    0x5747c2e6cb10 ---------A   01580 PRINT "BALL IS";INT(O);"YARDS OFF LINE... IN ";
    0x5747c2e6cb80 ---------A   01590 GOSUB 3230
    0x5747c2e6cbe0 ---------A   01600 GOTO 1630
    0x5747c2e6e6a0 ---------A T 01610 PRINT "PGA HANDICAPS RANGE FROM 0 TO 30."
    0x5747c2e6e710 ---------A   01620 GOTO 1160
    0x5747c2e6f390 ---------A T 01630 IF A=1 THEN 1700
    0x5747c2e6f520 ---------A   01640 PRINT "SELECTION OF CLUBS"
    0x5747c2e6f6c0 ---------A   01650 PRINT "YARDAGE DESIRED                       SUGGESTED CLUBS"
    0x5747c2e6f860 ---------A   01660 PRINT "200 TO 280 YARDS                           1 TO 4"
    0x5747c2e6fa00 ---------A   01670 PRINT "100 TO 200 YARDS                          19 TO 13"
    0x5747c2e6fb70 ---------A   01680 PRINT "  0 TO 100 YARDS                          29 TO 23"
    0x5747c2e6fd90 ---------A   01690 A=1
    0x5747c2e6ff10 ---------A T 01700 PRINT "WHAT CLUB DO YOU CHOOSE";
    0x5747c2e70120 ---------A   01710 INPUT C
    0x5747c2e701a0 ---------A   01720 PRINT
    0x5747c2e703f0 ---------A   01730 IF C<1 THEN 1810
    0x5747c2e70650 ---------A   01740 IF C>29 THEN 1810
    0x5747c2e708b0 ---------A   01750 IF C>4 THEN 1840
    0x5747c2e70bd0 ---------A T 01760 IF L(0)<=5 THEN 1870
    0x5747c2e70e30 ---------A   01770 IF C=14 THEN 1870
    0x5747c2e71090 ---------A   01780 IF C=23 THEN 1870
    0x5747c2e71110 ---------A   01790 GOTO 1810
    0x5747c2e71450 ---------A T 01800 S1=S1-1
    0x5747c2e715b0 ---------A T 01810 PRINT "THAT CLUB IS NOT IN THE BAG."
    0x5747c2e71620 ---------A   01820 PRINT
    0x5747c2e71690 ---------A   01830 GOTO 1630
    0x5747c2e718d0 ---------A T 01840 IF C<12 THEN 1810
    0x5747c2e71c10 ---------A   01850 C=C-6
    0x5747c2e71c80 ---------A   01860 GOTO 1760
    0x5747c2e71fa0 ---------A T 01870 S1=S1+1
    0x5747c2e72270 ---------A   01880 W=1
    0x5747c2e724d0 ---------A   01890 IF C>13 THEN 2210
    0x5747c2e72a30 ---------A   01900 IF INT(F/3)=F/3 THEN 2160
    0x5747c2e72c90 ---------A T 01910 IF C<4 THEN 1930
    0x5747c2e72d10 ---------A   01920 GOTO 1940
    0x5747c2e73010 ---------A T 01930 IF L(0)=2 THEN 2020
    0x5747c2e732a0 ---------A T 01940 IF S1>7 THEN 2050
    0x5747c2e742e0 ---------A T 01950 D1=INT(((30-H)*2.5+187-((30-H)*.25+15)*C/2)+25*RND(1))
    0x5747c2e74710 ---------A   01960 D1=INT(D1*W)
    0x5747c2e74980 ---------A   01970 IF T=2 THEN 2570
    0x5747c2e75510 ---------A T 01980 O=(RND(1)/.8)*(2*H+16)*ABS(TAN(D1*.0035))
    0x5747c2e75ee0 ---------A   01990 D2=INT(SQR(O^2+ABS(D-D1)^2))
    0x5747c2e76250 ---------A   02000 IF D-D1<0 THEN 2070
    0x5747c2e762e0 ---------A   02010 GOTO 2090
    0x5747c2e76420 ---------A T 02020 PRINT "YOU DUBBED IT."
    0x5747c2e76630 ---------A   02030 D1=35
    0x5747c2e766a0 ---------A   02040 GOTO 1980
    0x5747c2e768e0 ---------A T 02050 IF D<200 THEN 2700
    0x5747c2e76960 ---------A   02060 GOTO 1950
    0x5747c2e76bc0 ---------A T 02070 IF D2<20 THEN 2090
    0x5747c2e76d30 ---------A   02080 PRINT "TOO MUCH CLUB. YOU'RE PAST THE HOLE."
    0x5747c2e77830 ---------A T 02090 B=D
    0x5747c2e77a60 ---------A   02100 D=D2
    0x5747c2e77cb0 ---------A   02110 IF D2>27 THEN 2340
    0x5747c2e77f10 ---------A   02120 IF D2>20 THEN 2500
    0x5747c2e78170 ---------A   02130 IF D2>.5 THEN 2520
    0x5747c2e78450 ---------A   02140 L(0)=9
    0x5747c2e784f0 ---------A   02150 GOTO 2890
    0x5747c2e79430 ---------A T 02160 IF S2+Q+(10*(F-1)/18)<(F-1)*(72+((H+1)/.85))/18 THEN 2180
    0x5747c2e794b0 ---------A   02170 GOTO 1910
    0x5747c2e797e0 ---------A T 02180 Q=Q+1
    0x5747c2e79d30 ---------A   02190 IF S1/2<>INT(S1/2) THEN 2300
    0x5747c2e79de0 ---------A   02200 GOTO 2020
    0x5747c2e79f50 ---------A T 02210 PRINT "NOW GAUGE YOUR DISTANCE BY A PERCENTAGE (1 TO 100)"
    0x5747c2e7a0c0 ---------A   02220 PRINT "OF A FULL SWING";
    0x5747c2e7a530 ---------A   02230 INPUT W: W=W/100
    0x5747c2e7a5a0 ---------A   02240 PRINT
    0x5747c2e7a7f0 ---------A   02250 IF W>1 THEN 1800
    0x5747c2e7ab10 ---------A   02260 IF L(0)=5 THEN 2690
    0x5747c2e7ad70 ---------A   02270 IF C=14 THEN 1940
    0x5747c2e7b0b0 ---------A   02280 C=C-10
    0x5747c2e7b120 ---------A   02290 GOTO 1940
    0x5747c2e7b390 ---------A T 02300 IF D<95 THEN 2020
    0x5747c2e7b800 ---------A   02310 PRINT "BALL HIT TREE - BOUNCED INTO ROUGH";D-75;"YARDS FROM HOLE."
    0x5747c2e7bb30 ---------A   02320 D=D-75
    0x5747c2e7bba0 ---------A   02330 GOTO 1630
    0x5747c2e7bde0 ---------A T 02340 IF O<30 THEN 2550
    0x5747c2e7c040 ---------A   02350 IF J>0 THEN 2550
    0x5747c2e7c2a0 ---------A   02360 IF T>0 THEN 2430
    0x5747c2e7c7f0 ---------A   02370 S9=(S2+1)/15
    0x5747c2e7cb50 ---------A   02380 IF INT(S9)=S9 THEN 2450
    0x5747c2e7ccd0 ---------A T 02390 PRINT "YOU HOOKED- ";
    0x5747c2e7d080 ---------A   02400 L(0)=L(2)
    0x5747c2e7d2d0 ---------A T 02410 IF O>45 THEN 2480
    0x5747c2e7d350 ---------A   02420 GOTO 1530
    0x5747c2e7d7c0 ---------A T 02430 S9=(S2+1)/15
    0x5747c2e7db20 ---------A   02440 IF INT(S9)=S9 THEN 2390
    0x5747c2e7dca0 ---------A T 02450 PRINT "YOU SLICED- ";
    0x5747c2e7e050 ---------A   02460 L(0)=L(1)
    0x5747c2e7e0c0 ---------A   02470 GOTO 2410
    0x5747c2e7e200 ---------A T 02480 PRINT "BADLY."
    0x5747c2e7e270 ---------A   02490 GOTO 1530
    0x5747c2e7e530 ---------A T 02500 L(0)=5
    0x5747c2e7e5a0 ---------A   02510 GOTO 1530
    0x5747c2e7e860 ---------A T 02520 L(0)=8
    0x5747c2e7ec70 ---------A   02530 D2=INT(D2*3)
    0x5747c2e7ece0 ---------A   02540 GOTO 2780
    0x5747c2e7efa0 ---------A T 02550 L(0)=1
    0x5747c2e7f010 ---------A   02560 GOTO 1530
    0x5747c2e7f410 ---------A T 02570 D1=INT(.85*D1)
    0x5747c2e7f490 ---------A   02580 GOTO 1980
    0x5747c2e7f7b0 ---------A T 02590 IF L(0)>6 THEN 2670
    0x5747c2e7f920 ---------A   02600 PRINT "YOUR SHOT WENT INTO THE WATER."
    0x5747c2e7fc80 ---------A T 02610 S1=S1+1
    0x5747c2e7fdf0 ---------A   02620 PRINT "PENALTY STROKE ASSESSED.  HIT FROM PREVIOUS LOCATION."
    0x5747c2e80120 ---------A   02630 J=J+1
    0x5747c2e803f0 ---------A   02640 L(0)=1
    0x5747c2e80620 ---------A   02650 D=B
    0x5747c2e806b0 ---------A   02660 GOTO 1630
    0x5747c2e80800 ---------A T 02670 PRINT "YOUR SHOT WENT OUT OF BOUNDS."
    0x5747c2e80870 ---------A   02680 GOTO 2610
    0x5747c2e80ac0 ---------A T 02690 IF T=3 THEN 2720
    0x5747c2e81480 ---------A T 02700 D2=1+(3*INT((80/(40-H))*RND(1)))
    0x5747c2e81500 ---------A   02710 GOTO 2780
    0x5747c2e81820 ---------A T 02720 IF RND(1)>N THEN 2760
    0x5747c2e81b80 ---------A   02730 N=N*.2
    0x5747c2e81ce0 ---------A   02740 PRINT "SHOT DUBBED, STILL IN TRAP."
    0x5747c2e81d50 ---------A   02750 GOTO 1630
    0x5747c2e81f50 ---------A T 02760 N=.8
    0x5747c2e81fe0 ---------A   02770 GOTO 2700
    0x5747c2e82340 ---------A T 02780 PRINT "ON GREEN,";D2;"FEET FROM THE PIN."
    0x5747c2e824c0 ---------A   02790 PRINT "CHOOSE YOUR PUTT POTENCY (1 TO 13):";
    0x5747c2e826d0 ---------A   02800 INPUT I
    0x5747c2e82a20 ---------A   02810 S1=S1+1
    0x5747c2e830f0 ---------A   02820 IF S1+1-P>(H*.072)+2 THEN 2890
    0x5747c2e83350 ---------A   02830 IF K>2 THEN 2890
    0x5747c2e83690 ---------A   02840 K=K+1
    0x5747c2e838f0 ---------A   02850 IF T=4 THEN 2960
    0x5747c2e84170 ---------A   02860 D2=D2-I*(4+2*RND(1))+1.5
    0x5747c2e843c0 ---------A T 02870 IF D2<-2 THEN 2980
    0x5747c2e84630 ---------A   02880 IF D2>2 THEN 2930
    0x5747c2e84790 ---------A T 02890 PRINT "YOU HOLED IT."
    0x5747c2e84800 ---------A   02900 PRINT
    0x5747c2e84b30 ---------A   02910 F=F+1
    0x5747c2e84bb0 ---------A   02920 GOTO 1270
    0x5747c2e84cf0 ---------A T 02930 PRINT "PUTT SHORT."
    0x5747c2e85000 ---------A T 02940 D2=INT(D2)
    0x5747c2e85080 ---------A   02950 GOTO 2780
    0x5747c2e858e0 ---------A T 02960 D2=D2-I*(4+1*RND(1))+1
    0x5747c2e85960 ---------A   02970 GOTO 2870
    0x5747c2e85aa0 ---------A T 02980 PRINT "PASSED BY CUP."
    0x5747c2e85cd0 ---------A   02990 D2=-D2
    0x5747c2e85d40 ---------A   03000 GOTO 2940
    0x5747c2e862a0 ---------A T 03010 READ D,P,L(1),L(2)
    0x5747c2e86330 ---------A   03020 PRINT
    0x5747c2e86990 ---------A   03030 PRINT "YOU ARE AT THE TEE OFF HOLE";F;"DISTANCE";D;"YARDS, PAR";P
    0x5747c2e86cf0 ---------A   03040 G3=G3+P
    0x5747c2e86e60 ---------A   03050 PRINT "ON YOUR RIGHT IS ";
    0x5747c2e87070 ---------A   03060 X=1
    0x5747c2e870f0 ---------A   03070 GOSUB 3230
    0x5747c2e87250 ---------A   03080 PRINT "ON YOUR LEFT IS ";
    0x5747c2e87460 ---------A   03090 X=2
    0x5747c2e874d0 ---------A   03100 GOSUB 3230
    0x5747c2e87530 ---------A   03110 GOTO 1630
    0x5747c2e88430 ---------A   03120 DATA 361,4,4,2,389,4,3,3,206,3,4,2,500,5,7,2
    0x5747c2e892c0 ---------A   03130 DATA 408,4,2,4,359,4,6,4,424,4,4,2,388,4,4,4
    0x5747c2e8a150 ---------A   03140 DATA 196,3,7,2,400,4,7,2,560,5,7,2,132,3,2,2
    0x5747c2e8afd0 ---------A   03150 DATA 357,4,4,4,294,4,2,4,475,5,2,3,375,4,4,2
    0x5747c2e8b740 ---------A   03160 DATA 180,3,6,2,550,5,6,6
    0x5747c2e8b7b0 ---------A T 03170 PRINT
    0x5747c2e8bb30 ---------A T 03180 G2=G2+S1
    0x5747c2e8c290 ---------A   03190 PRINT "TOTAL PAR FOR";F-1;"HOLES IS";G3;"  YOUR TOTAL IS";G2
    0x5747c2e8c600 ---------A   03200 IF G1=F-1 THEN 3220
    0x5747c2e8c680 ---------A   03210 GOTO 1350
    0x5747c2e8c6c0 ---------A T 03220 END
    0x5747c2e6cf00 ---------B G 03230 IF L(X)=1 THEN 3310
    0x5747c2e6d240 ---------B   03240 IF L(X)=2 THEN 3330
    0x5747c2e6d580 ---------B   03250 IF L(X)=3 THEN 3350
    0x5747c2e6d8c0 ---------B   03260 IF L(X)=4 THEN 3370
    0x5747c2e6e010 ---------B   03270 IF L(X)=5 THEN 3390
    0x5747c2e6e360 ---------B   03280 IF L(X)=6 THEN 3410
    0x5747c2e6e4c0 ---------B   03290 PRINT "OUT OF BOUNDS."
    0x5747c2e6e550 ---------B   03300 GOTO 3430
    0x5747c2e6e850 ---------B T 03310 PRINT "FAIRWAY."
    0x5747c2e6e8c0 ---------B   03320 GOTO 3430
    0x5747c2e6ea00 ---------B T 03330 PRINT "ROUGH."
    0x5747c2e6ea70 ---------B   03340 GOTO 3430
    0x5747c2e6ebb0 ---------B T 03350 PRINT "TREES."
    0x5747c2e6ec30 ---------B   03360 GOTO 3430
    0x5747c2e6ed70 ---------B T 03370 PRINT "ADJACENT FAIRWAY."
    0x5747c2e6ede0 ---------B   03380 GOTO 3430
    0x5747c2e6ef20 ---------B T 03390 PRINT "TRAP."
    0x5747c2e6ef90 ---------B   03400 GOTO 3430
    0x5747c2e6f0d0 ---------B T 03410 PRINT "WATER."
    0x5747c2e6f140 ---------B   03420 GOTO 3430
    0x5747c2e935c0 ---------B T 03430 GOTO 03440
    0x5747c2e93600 ---------B T 03440 RETURN
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
char* data_03120s[]={"361","4","4","2","389","4","3","3","206","3","4","2","500","5","7","2"};
char* data_03130s[]={"408","4","2","4","359","4","6","4","424","4","4","2","388","4","4","4"};
char* data_03140s[]={"196","3","7","2","400","4","7","2","560","5","7","2","132","3","2","2"};
char* data_03150s[]={"357","4","4","4","294","4","2","4","475","5","2","3","375","4","4","2"};
char* data_03160s[]={"180","3","6","2","550","5","6","6"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3120, 16,data_03120s},
    { 3130, 16,data_03130s},
    { 3140, 16,data_03140s},
    { 3150, 16,data_03150s},
    { 3160,  8,data_03160s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
int    B_int;                                     // Basic: B 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    D1_int;                                    // Basic: D1 
int    D2_int;                                    // Basic: D2 
int    F_int;                                     // Basic: F 
int    G1_int;                                    // Basic: G1 
int    G2_int;                                    // Basic: G2 
int    G3_int;                                    // Basic: G3 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int_arr[10];                             // Basic: L 
int    N_int;                                     // Basic: N 
int    O_int;                                     // Basic: O 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    S9_int;                                    // Basic: S9 
int    T_int;                                     // Basic: T 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03230();

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

void Routine_03230(){
    // 03230 IF L(X)=1 THEN 3310
    if(L_int_arr[X_int]==1)goto Lbl_03310;
    // 03240 IF L(X)=2 THEN 3330
    if(L_int_arr[X_int]==2)goto Lbl_03330;
    // 03250 IF L(X)=3 THEN 3350
    if(L_int_arr[X_int]==3)goto Lbl_03350;
    // 03260 IF L(X)=4 THEN 3370
    if(L_int_arr[X_int]==4)goto Lbl_03370;
    // 03270 IF L(X)=5 THEN 3390
    if(L_int_arr[X_int]==5)goto Lbl_03390;
    // 03280 IF L(X)=6 THEN 3410
    if(L_int_arr[X_int]==6)goto Lbl_03410;
    // 03290 PRINT "OUT OF BOUNDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OUT OF BOUNDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 03300 GOTO 3430
    goto Lbl_03430;

  Lbl_03310:
    // 03310 PRINT "FAIRWAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FAIRWAY.");strcat(buf,"\n");fputs(buf,fh); };
    // 03320 GOTO 3430
    goto Lbl_03430;

  Lbl_03330:
    // 03330 PRINT "ROUGH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ROUGH.");strcat(buf,"\n");fputs(buf,fh); };
    // 03340 GOTO 3430
    goto Lbl_03430;

  Lbl_03350:
    // 03350 PRINT "TREES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TREES.");strcat(buf,"\n");fputs(buf,fh); };
    // 03360 GOTO 3430
    goto Lbl_03430;

  Lbl_03370:
    // 03370 PRINT "ADJACENT FAIRWAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ADJACENT FAIRWAY.");strcat(buf,"\n");fputs(buf,fh); };
    // 03380 GOTO 3430
    goto Lbl_03430;

  Lbl_03390:
    // 03390 PRINT "TRAP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRAP.");strcat(buf,"\n");fputs(buf,fh); };
    // 03400 GOTO 3430
    goto Lbl_03430;

  Lbl_03410:
    // 03410 PRINT "WATER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WATER.");strcat(buf,"\n");fputs(buf,fh); };
    // 03420 GOTO 3430
    goto Lbl_03430;

  Lbl_03430:
    // 03430 GOTO 03440
    goto Lbl_03440;

  Lbl_03440:
    // 03440 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
