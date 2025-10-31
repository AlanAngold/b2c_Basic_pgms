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
    0x608c7ddf16d0 ---------A   00001  PRINT TAB(34);"GOLF"
    0x608c7ddf1670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x608c7dde22b0 ---------A   00003  PRINT:PRINT:PRINT
    0x608c7ddf31b0 ---------A   00004  PRINT "WELCOME TO THE CREATIVE COMPUTING COUNTRY CLUB,"
    0x608c7ddf2040 ---------A   00005  PRINT "AN EIGHTEEN HOLE CHAMPIONSHIP LAYOUT LOCATED A SHORT"
    0x608c7ddf1e40 ---------A   00006  PRINT "DISTANCE FROM SCENIC DOWNTOWN MORRISTOWN.  THE"
    0x608c7ddf3680 ---------A   00007  PRINT "COMMENTATOR WILL EXPLAIN THE GAME AS YOU PLAY."
    0x608c7ddf1ca0 ---------A   00008  PRINT "ENJOY YOUR GAME; SEE YOU AT THE 19TH HOLE..."
    0x608c7ddf2780 ---------A   00009  PRINT:PRINT: DIM L(10)
    0x608c7ddf3f90 ---------A   00010  G1=18
    0x608c7ddf9ba0 ---------A   00020  G2=0
    0x608c7ddf9e70 ---------A   00030  G3=0
    0x608c7ddfa140 ---------A   00040  A=0
    0x608c7ddfa410 ---------A   00050  N=.8
    0x608c7ddfa6e0 ---------A   00060  S2=0
    0x608c7ddfa990 ---------A   00070  F=1
    0x608c7ddfab00 ---------A T 00080  PRINT "WHAT IS YOUR HANDICAP";
    0x608c7ddfad80 ---------A   00090  INPUT H:PRINT
    0x608c7ddfafe0 ---------A   00100  IF H>30 THEN 470
    0x608c7ddfb260 ---------A   00110  IF H<0 THEN 470
    0x608c7ddfb3d0 ---------A T 00120  PRINT "DIFFICULTIES AT GOLF INCLUDE:"
    0x608c7ddfb580 ---------A   00130  PRINT "0=HOOK, 1=SLICE, 2=POOR DISTANCE, 4=TRAP SHOTS, 5=PUTTING"
    0x608c7ddfb6e0 ---------A   00140  PRINT "WHICH ONE (ONLY ONE) IS YOUR WORST";
    0x608c7ddfb960 ---------A   00150  INPUT T:PRINT
    0x608c7ddfbbc0 ---------A   00160  IF T>5 THEN 120
    0x608c7ddfbea0 ---------A   00170  S1=0
    0x608c7ddfbf10 ---------A   00210  REM
    0x608c7ddfc200 ---------A T 00230  L(0)=0
    0x608c7ddfc4d0 ---------A   00240  J=0
    0x608c7ddfc7a0 ---------A   00245  Q=0
    0x608c7ddfcad0 ---------A   00250  S2=S2+1
    0x608c7ddfcda0 ---------A   00260  K=0
    0x608c7ddfd010 ---------A   00270  IF F=1 THEN 310
    0x608c7ddfd780 ---------A   00290  PRINT "YOUR SCORE ON HOLE";F-1;"WAS";S1
    0x608c7ddfd800 ---------A   00291  GOTO 1750
    0x608c7ddfdc30 ---------A T 00292  IF S1>P+2 THEN 297
    0x608c7ddfdeb0 ---------A   00293  IF S1=P THEN 299
    0x608c7ddfe230 ---------A   00294  IF S1=P-1 THEN 301
    0x608c7ddfe5b0 ---------A   00295  IF S1=P-2 THEN 303
    0x608c7ddfe610 ---------A   00296  GOTO 310
    0x608c7ddfe760 ---------A T 00297  PRINT "KEEP YOUR HEAD DOWN."
    0x608c7ddfe7c0 ---------A   00298  GOTO 310
    0x608c7ddfe910 ---------A T 00299  PRINT "A PAR.  NICE GOING."
    0x608c7ddfe990 ---------A   00300  GOTO 310
    0x608c7ddfeae0 ---------A T 00301  PRINT "A BIRDIE."
    0x608c7ddfeb60 ---------A   00302  GOTO 310
    0x608c7ddfed90 ---------A T 00303  IF P=3 THEN 306
    0x608c7ddfeef0 ---------A   00304  PRINT "A GREAT BIG EAGLE."
    0x608c7ddfef80 ---------A   00305  GOTO 310
    0x608c7ddff0d0 ---------A T 00306  PRINT "A HOLE IN ONE."
    0x608c7ddff330 ---------A T 00310  IF F=19 THEN 1710
    0x608c7ddff550 ---------A   00315  S1=0
    0x608c7ddff5c0 ---------A   00316  PRINT
    0x608c7ddff820 ---------A T 00320  IF S1=0 THEN 1590
    0x608c7ddffb40 ---------A   00330  IF L(0)<1 THEN 1150
    0x608c7ddffe20 ---------A   00340  X=0
    0x608c7de00160 ---------A   00350  IF L(0)>5 THEN 1190
    0x608c7de00860 ---------A   00360  PRINT "SHOT WENT";D1;"YARDS.  IT'S";D2;"YARDS FROM THE CUP."
    0x608c7de00d80 ---------A   00362  PRINT "BALL IS";INT(O);"YARDS OFF LINE... IN ";
    0x608c7de00e00 ---------A   00380  GOSUB 400
    0x608c7de00e70 ---------A   00390  GOTO 620
    0x608c7de011a0 ---------B G 00400  IF L(X)=1 THEN 480
    0x608c7de014e0 ---------B   00410  IF L(X)=2 THEN 500
    0x608c7de01820 ---------B   00420  IF L(X)=3 THEN 520
    0x608c7de01b60 ---------B   00430  IF L(X)=4 THEN 540
    0x608c7de022b0 ---------B   00440  IF L(X)=5 THEN 560
    0x608c7de02600 ---------B   00450  IF L(X)=6 THEN 580
    0x608c7de02760 ---------B   00460  PRINT "OUT OF BOUNDS."
    0x608c7de02800 ---------B   00465  GOTO 1690
    0x608c7de02960 ---------A T 00470  PRINT "PGA HANDICAPS RANGE FROM 0 TO 30."
    0x608c7de029e0 ---------A   00472  GOTO 80
    0x608c7de02b30 ---------B T 00480  PRINT "FAIRWAY."
    0x608c7de02bb0 ---------B   00490  GOTO 1690
    0x608c7de02d00 ---------B T 00500  PRINT "ROUGH."
    0x608c7de02d80 ---------B   00510  GOTO 1690
    0x608c7de02ed0 ---------B T 00520  PRINT "TREES."
    0x608c7de02f60 ---------B   00530  GOTO 1690
    0x608c7de030b0 ---------B T 00540  PRINT "ADJACENT FAIRWAY."
    0x608c7de03130 ---------B   00550  GOTO 1690
    0x608c7de03280 ---------B T 00560  PRINT "TRAP."
    0x608c7de03300 ---------B   00570  GOTO 1690
    0x608c7de03450 ---------B T 00580  PRINT "WATER."
    0x608c7de034d0 ---------B   00590  GOTO 1690
    0x608c7de03730 ---------A T 00620  IF A=1 THEN 629
    0x608c7de038c0 ---------A   00621  PRINT "SELECTION OF CLUBS"
    0x608c7de03a70 ---------A   00622  PRINT "YARDAGE DESIRED                       SUGGESTED CLUBS"
    0x608c7de03c20 ---------A   00623  PRINT "200 TO 280 YARDS                           1 TO 4"
    0x608c7de03dd0 ---------A   00624  PRINT "100 TO 200 YARDS                          19 TO 13"
    0x608c7de03f50 ---------A   00625  PRINT "  0 TO 100 YARDS                          29 TO 23"
    0x608c7de04180 ---------A   00626  A=1
    0x608c7de04300 ---------A T 00629  PRINT "WHAT CLUB DO YOU CHOOSE";
    0x608c7de04520 ---------A   00630  INPUT C
    0x608c7de045a0 ---------A   00632  PRINT
    0x608c7de04800 ---------A   00635  IF C<1 THEN 690
    0x608c7de04a60 ---------A   00637  IF C>29 THEN 690
    0x608c7de04cc0 ---------A   00640  IF C>4 THEN 710
    0x608c7de04fe0 ---------A T 00650  IF L(0)<=5 THEN 740
    0x608c7de05240 ---------A   00660  IF C=14 THEN 740
    0x608c7de054a0 ---------A   00665  IF C=23 THEN 740
    0x608c7de05520 ---------A   00670  GOTO 690
    0x608c7de05870 ---------A T 00680  S1=S1-1
    0x608c7de059d0 ---------A T 00690  PRINT "THAT CLUB IS NOT IN THE BAG."
    0x608c7de05a50 ---------A   00693  PRINT
    0x608c7de05ad0 ---------A   00700  GOTO 620
    0x608c7de05d20 ---------A T 00710  IF C<12 THEN 690
    0x608c7de06060 ---------A   00720  C=C-6
    0x608c7de060d0 ---------A   00730  GOTO 650
    0x608c7de06400 ---------A T 00740  S1=S1+1
    0x608c7de066d0 ---------A   00741  W=1
    0x608c7de06930 ---------A   00742  IF C>13 THEN 960
    0x608c7de06e90 ---------A   00746  IF INT(F/3)=F/3 THEN 952
    0x608c7de070f0 ---------A T 00752  IF C<4 THEN 756
    0x608c7de07170 ---------A   00754  GOTO 760
    0x608c7de07480 ---------A T 00756  IF L(0)=2 THEN 862
    0x608c7de07710 ---------A T 00760  IF S1>7 THEN 867
    0x608c7de08750 ---------A T 00770  D1=INT(((30-H)*2.5+187-((30-H)*.25+15)*C/2)+25*RND(1))
    0x608c7de08b80 ---------A   00780  D1=INT(D1*W)
    0x608c7de08df0 ---------A   00800  IF T=2 THEN 1170
    0x608c7de09980 ---------A T 00830  O=(RND(1)/.8)*(2*H+16)*ABS(TAN(D1*.0035))
    0x608c7de0a350 ---------A   00840  D2=INT(SQR(O^2+ABS(D-D1)^2))
    0x608c7de0a6c0 ---------A   00850  IF D-D1<0 THEN 870
    0x608c7de0a750 ---------A   00860  GOTO 890
    0x608c7de0a8a0 ---------A T 00862  PRINT "YOU DUBBED IT."
    0x608c7de0aac0 ---------A   00864  D1=35
    0x608c7de0ab30 ---------A   00866  GOTO 830
    0x608c7de0ad80 ---------A T 00867  IF D<200 THEN 1300
    0x608c7de0ae00 ---------A   00868  GOTO 770
    0x608c7de0b070 ---------A T 00870  IF D2<20 THEN 890
    0x608c7de0b1e0 ---------A   00880  PRINT "TOO MUCH CLUB. YOU'RE PAST THE HOLE."
    0x608c7de0bcf0 ---------A T 00890  B=D
    0x608c7de0bf20 ---------A   00900  D=D2
    0x608c7de0c170 ---------A   00910  IF D2>27 THEN 1020
    0x608c7de0c3d0 ---------A   00920  IF D2>20 THEN 1100
    0x608c7de0c630 ---------A   00930  IF D2>.5 THEN 1120
    0x608c7de0c910 ---------A   00940  L(0)=9
    0x608c7de0c9b0 ---------A   00950  GOTO 1470
    0x608c7de0d900 ---------A T 00952  IF S2+Q+(10*(F-1)/18)<(F-1)*(72+((H+1)/.85))/18 THEN 956
    0x608c7de0d980 ---------A   00954  GOTO 752
    0x608c7de0dcc0 ---------A T 00956  Q=Q+1
    0x608c7de0e210 ---------A   00957  IF S1/2<>INT(S1/2) THEN 1011
    0x608c7de0e2c0 ---------A   00958  GOTO 862
    0x608c7de0e440 ---------A T 00960  PRINT "NOW GAUGE YOUR DISTANCE BY A PERCENTAGE (1 TO 100)"
    0x608c7de0e5c0 ---------A   00961  PRINT "OF A FULL SWING";
    0x608c7de0ea40 ---------A   00970  INPUT W: W=W/100
    0x608c7de0eab0 ---------A   00972  PRINT
    0x608c7de0ed10 ---------A   00980  IF W>1 THEN 680
    0x608c7de0f030 ---------A   00985  IF L(0)=5 THEN 1280
    0x608c7de0f290 ---------A   00990  IF C=14 THEN 760
    0x608c7de0f5d0 ---------A   01000  C=C-10
    0x608c7de0f640 ---------A   01010  GOTO 760
    0x608c7de0f8c0 ---------A T 01011  IF D<95 THEN 862
    0x608c7de0fd30 ---------A   01012  PRINT "BALL HIT TREE - BOUNCED INTO ROUGH";D-75;"YARDS FROM HOLE."
    0x608c7de10070 ---------A   01014  D=D-75
    0x608c7de100e0 ---------A   01018  GOTO 620
    0x608c7de10330 ---------A T 01020  IF O<30 THEN 1150
    0x608c7de10590 ---------A   01022  IF J>0 THEN 1150
    0x608c7de107f0 ---------A   01030  IF T>0 THEN 1070
    0x608c7de10d40 ---------A   01035  S9=(S2+1)/15
    0x608c7de110a0 ---------A   01036  IF INT(S9)=S9 THEN 1075
    0x608c7de11220 ---------A T 01040  PRINT "YOU HOOKED- ";
    0x608c7de115e0 ---------A   01050  L(0)=L(2)
    0x608c7de11830 ---------A T 01055  IF O>45 THEN 1092
    0x608c7de118b0 ---------A   01060  GOTO 320
    0x608c7de11d30 ---------A T 01070  S9=(S2+1)/15
    0x608c7de12090 ---------A   01071  IF INT(S9)=S9 THEN 1040
    0x608c7de12210 ---------A T 01075  PRINT "YOU SLICED- ";
    0x608c7de125d0 ---------A   01080  L(0)=L(1)
    0x608c7de12640 ---------A   01090  GOTO 1055
    0x608c7de12790 ---------A T 01092  PRINT "BADLY."
    0x608c7de12810 ---------A   01094  GOTO 320
    0x608c7de12ae0 ---------A T 01100  L(0)=5
    0x608c7de12b50 ---------A   01110  GOTO 320
    0x608c7de12e20 ---------A T 01120  L(0)=8
    0x608c7de13230 ---------A   01130  D2=INT(D2*3)
    0x608c7de132a0 ---------A   01140  GOTO 1380
    0x608c7de13570 ---------A T 01150  L(0)=1
    0x608c7de135e0 ---------A   01160  GOTO 320
    0x608c7de139f0 ---------A T 01170  D1=INT(.85*D1)
    0x608c7de13a70 ---------A   01180  GOTO 830
    0x608c7de13da0 ---------A T 01190  IF L(0)>6 THEN 1260
    0x608c7de13f10 ---------A   01200  PRINT "YOUR SHOT WENT INTO THE WATER."
    0x608c7de14280 ---------A T 01210  S1=S1+1
    0x608c7de143f0 ---------A   01220  PRINT "PENALTY STROKE ASSESSED.  HIT FROM PREVIOUS LOCATION."
    0x608c7de14730 ---------A   01230  J=J+1
    0x608c7de14a00 ---------A   01240  L(0)=1
    0x608c7de14c30 ---------A   01242  D=B
    0x608c7de14cc0 ---------A   01250  GOTO 620
    0x608c7de14e20 ---------A T 01260  PRINT "YOUR SHOT WENT OUT OF BOUNDS."
    0x608c7de14ea0 ---------A   01270  GOTO 1210
    0x608c7de15100 ---------A T 01280  IF T=3 THEN 1320
    0x608c7de15ac0 ---------A T 01300  D2=1+(3*INT((80/(40-H))*RND(1)))
    0x608c7de15b40 ---------A   01310  GOTO 1380
    0x608c7de15e70 ---------A T 01320  IF RND(1)>N THEN 1360
    0x608c7de161d0 ---------A   01330  N=N*.2
    0x608c7de16330 ---------A   01340  PRINT "SHOT DUBBED, STILL IN TRAP."
    0x608c7de163b0 ---------A   01350  GOTO 620
    0x608c7de165c0 ---------A T 01360  N=.8
    0x608c7de16650 ---------A   01370  GOTO 1300
    0x608c7de169c0 ---------A T 01380  PRINT "ON GREEN,";D2;"FEET FROM THE PIN."
    0x608c7de16b50 ---------A   01381  PRINT "CHOOSE YOUR PUTT POTENCY (1 TO 13):";
    0x608c7de16d70 ---------A   01400  INPUT I
    0x608c7de170c0 ---------A   01410  S1=S1+1
    0x608c7de17790 ---------A   01420  IF S1+1-P>(H*.072)+2 THEN 1470
    0x608c7de179f0 ---------A   01425  IF K>2 THEN 1470
    0x608c7de17d30 ---------A   01428  K=K+1
    0x608c7de17f90 ---------A   01430  IF T=4 THEN 1530
    0x608c7de18810 ---------A   01440  D2=D2-I*(4+2*RND(1))+1.5
    0x608c7de18a60 ---------A T 01450  IF D2<-2 THEN 1560
    0x608c7de18cd0 ---------A   01460  IF D2>2 THEN 1500
    0x608c7de18e30 ---------A T 01470  PRINT "YOU HOLED IT."
    0x608c7de18eb0 ---------A   01472  PRINT
    0x608c7de191f0 ---------A   01480  F=F+1
    0x608c7de19270 ---------A   01490  GOTO 230
    0x608c7de193c0 ---------A T 01500  PRINT "PUTT SHORT."
    0x608c7de196e0 ---------A T 01505  D2=INT(D2)
    0x608c7de19760 ---------A   01510  GOTO 1380
    0x608c7de19fd0 ---------A T 01530  D2=D2-I*(4+1*RND(1))+1
    0x608c7de1a050 ---------A   01550  GOTO 1450
    0x608c7de1a1a0 ---------A T 01560  PRINT "PASSED BY CUP."
    0x608c7de1a3e0 ---------A   01570  D2=-D2
    0x608c7de1a450 ---------A   01580  GOTO 1505
    0x608c7de1a9c0 ---------A T 01590  READ D,P,L(1),L(2)
    0x608c7de1aa60 ---------A   01595  PRINT
    0x608c7de1b0d0 ---------A   01600  PRINT "YOU ARE AT THE TEE OFF HOLE";F;"DISTANCE";D;"YARDS, PAR";P
    0x608c7de1b440 ---------A   01605  G3=G3+P
    0x608c7de1b5b0 ---------A   01620  PRINT "ON YOUR RIGHT IS ";
    0x608c7de1b7d0 ---------A   01630  X=1
    0x608c7de1b850 ---------A   01640  GOSUB 400
    0x608c7de1b9c0 ---------A   01650  PRINT "ON YOUR LEFT IS ";
    0x608c7de1bbe0 ---------A   01660  X=2
    0x608c7de1bc50 ---------A   01670  GOSUB 400
    0x608c7de1bcc0 ---------A   01680  GOTO 620
    0x608c7de1bd10 ---------B T 01690  RETURN
    0x608c7de1cbd0 ---------A   01700  DATA 361,4,4,2,389,4,3,3,206,3,4,2,500,5,7,2
    0x608c7de1da60 ---------A   01702  DATA 408,4,2,4,359,4,6,4,424,4,4,2,388,4,4,4
    0x608c7de1e8f0 ---------A   01704  DATA 196,3,7,2,400,4,7,2,560,5,7,2,132,3,2,2
    0x608c7de1f770 ---------A   01706  DATA 357,4,4,4,294,4,2,4,475,5,2,3,375,4,4,2
    0x608c7de1fee0 ---------A   01708  DATA 180,3,6,2,550,5,6,6
    0x608c7de1ff50 ---------A T 01710  PRINT
    0x608c7de202e0 ---------A T 01750  G2=G2+S1
    0x608c7de20a40 ---------A   01760  PRINT "TOTAL PAR FOR";F-1;"HOLES IS";G3;"  YOUR TOTAL IS";G2
    0x608c7de20dc0 ---------A   01761  IF G1=F-1 THEN 1770
    0x608c7de20e40 ---------A   01765  GOTO 292
    0x608c7de20e90 ---------A T 01770  END
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
   A) 0x608c7ddf16d0 (00001)   0x608c7ddf16d0 (00001)   0x608c7de20e90 (01770)   0x608c7de20e90 (01770)   
   B) 0x608c7de011a0 (00400)   0x608c7de011a0 (00400)   0x608c7de1bd10 (01690)   0x608c7de1bd10 (01690)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/golf.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x608c7ddf16d0 ---------A   00001  PRINT TAB(34);"GOLF"
    0x608c7ddf1670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x608c7ddf22d0 ----------   00003  PRINT
    0x608c7ddf2910 ----------        a PRINT
    0x608c7dde22b0 ---------A        b PRINT
    0x608c7ddf31b0 ---------A   00004  PRINT "WELCOME TO THE CREATIVE COMPUTING COUNTRY CLUB,"
    0x608c7ddf2040 ---------A   00005  PRINT "AN EIGHTEEN HOLE CHAMPIONSHIP LAYOUT LOCATED A SHORT"
    0x608c7ddf1e40 ---------A   00006  PRINT "DISTANCE FROM SCENIC DOWNTOWN MORRISTOWN.  THE"
    0x608c7ddf3680 ---------A   00007  PRINT "COMMENTATOR WILL EXPLAIN THE GAME AS YOU PLAY."
    0x608c7ddf1ca0 ---------A   00008  PRINT "ENJOY YOUR GAME; SEE YOU AT THE 19TH HOLE..."
    0x608c7ddf40a0 ----------   00009  PRINT
    0x608c7ddf4100 ----------        a PRINT
    0x608c7ddf2780 ---------A        b DIM L(10)
    0x608c7ddf3f90 ---------A   00010  G1=18
    0x608c7ddf9ba0 ---------A   00020  G2=0
    0x608c7ddf9e70 ---------A   00030  G3=0
    0x608c7ddfa140 ---------A   00040  A=0
    0x608c7ddfa410 ---------A   00050  N=.8
    0x608c7ddfa6e0 ---------A   00060  S2=0
    0x608c7ddfa990 ---------A   00070  F=1
    0x608c7ddfab00 ---------A T 00080  PRINT "WHAT IS YOUR HANDICAP";
    0x608c7ddfad00 ----------   00090  INPUT H
    0x608c7ddfad80 ---------A        a PRINT
    0x608c7ddfafe0 ---------A   00100  IF H>30 THEN 470
    0x608c7ddfb260 ---------A   00110  IF H<0 THEN 470
    0x608c7ddfb3d0 ---------A T 00120  PRINT "DIFFICULTIES AT GOLF INCLUDE:"
    0x608c7ddfb580 ---------A   00130  PRINT "0=HOOK, 1=SLICE, 2=POOR DISTANCE, 4=TRAP SHOTS, 5=PUTTING"
    0x608c7ddfb6e0 ---------A   00140  PRINT "WHICH ONE (ONLY ONE) IS YOUR WORST";
    0x608c7ddfb8e0 ----------   00150  INPUT T
    0x608c7ddfb960 ---------A        a PRINT
    0x608c7ddfbbc0 ---------A   00160  IF T>5 THEN 120
    0x608c7ddfbea0 ---------A   00170  S1=0
    0x608c7ddfbf10 ---------A   00210  REM
    0x608c7ddfc200 ---------A T 00230  L(0)=0
    0x608c7ddfc4d0 ---------A   00240  J=0
    0x608c7ddfc7a0 ---------A   00245  Q=0
    0x608c7ddfcad0 ---------A   00250  S2=S2+1
    0x608c7ddfcda0 ---------A   00260  K=0
    0x608c7ddfd010 ---------A   00270  IF F=1 THEN 310
    0x608c7ddfd780 ---------A   00290  PRINT "YOUR SCORE ON HOLE";F-1;"WAS";S1
    0x608c7ddfd800 ---------A   00291  GOTO 1750
    0x608c7ddfdc30 ---------A T 00292  IF S1>P+2 THEN 297
    0x608c7ddfdeb0 ---------A   00293  IF S1=P THEN 299
    0x608c7ddfe230 ---------A   00294  IF S1=P-1 THEN 301
    0x608c7ddfe5b0 ---------A   00295  IF S1=P-2 THEN 303
    0x608c7ddfe610 ---------A   00296  GOTO 310
    0x608c7ddfe760 ---------A T 00297  PRINT "KEEP YOUR HEAD DOWN."
    0x608c7ddfe7c0 ---------A   00298  GOTO 310
    0x608c7ddfe910 ---------A T 00299  PRINT "A PAR.  NICE GOING."
    0x608c7ddfe990 ---------A   00300  GOTO 310
    0x608c7ddfeae0 ---------A T 00301  PRINT "A BIRDIE."
    0x608c7ddfeb60 ---------A   00302  GOTO 310
    0x608c7ddfed90 ---------A T 00303  IF P=3 THEN 306
    0x608c7ddfeef0 ---------A   00304  PRINT "A GREAT BIG EAGLE."
    0x608c7ddfef80 ---------A   00305  GOTO 310
    0x608c7ddff0d0 ---------A T 00306  PRINT "A HOLE IN ONE."
    0x608c7ddff330 ---------A T 00310  IF F=19 THEN 1710
    0x608c7ddff550 ---------A   00315  S1=0
    0x608c7ddff5c0 ---------A   00316  PRINT
    0x608c7ddff820 ---------A T 00320  IF S1=0 THEN 1590
    0x608c7ddffb40 ---------A   00330  IF L(0)<1 THEN 1150
    0x608c7ddffe20 ---------A   00340  X=0
    0x608c7de00160 ---------A   00350  IF L(0)>5 THEN 1190
    0x608c7de00860 ---------A   00360  PRINT "SHOT WENT";D1;"YARDS.  IT'S";D2;"YARDS FROM THE CUP."
    0x608c7de00d80 ---------A   00362  PRINT "BALL IS";INT(O);"YARDS OFF LINE... IN ";
    0x608c7de00e00 ---------A   00380  GOSUB 400
    0x608c7de00e70 ---------A   00390  GOTO 620
    0x608c7de011a0 ---------B G 00400  IF L(X)=1 THEN 480
    0x608c7de014e0 ---------B   00410  IF L(X)=2 THEN 500
    0x608c7de01820 ---------B   00420  IF L(X)=3 THEN 520
    0x608c7de01b60 ---------B   00430  IF L(X)=4 THEN 540
    0x608c7de022b0 ---------B   00440  IF L(X)=5 THEN 560
    0x608c7de02600 ---------B   00450  IF L(X)=6 THEN 580
    0x608c7de02760 ---------B   00460  PRINT "OUT OF BOUNDS."
    0x608c7de02800 ---------B   00465  GOTO 1690
    0x608c7de02960 ---------A T 00470  PRINT "PGA HANDICAPS RANGE FROM 0 TO 30."
    0x608c7de029e0 ---------A   00472  GOTO 80
    0x608c7de02b30 ---------B T 00480  PRINT "FAIRWAY."
    0x608c7de02bb0 ---------B   00490  GOTO 1690
    0x608c7de02d00 ---------B T 00500  PRINT "ROUGH."
    0x608c7de02d80 ---------B   00510  GOTO 1690
    0x608c7de02ed0 ---------B T 00520  PRINT "TREES."
    0x608c7de02f60 ---------B   00530  GOTO 1690
    0x608c7de030b0 ---------B T 00540  PRINT "ADJACENT FAIRWAY."
    0x608c7de03130 ---------B   00550  GOTO 1690
    0x608c7de03280 ---------B T 00560  PRINT "TRAP."
    0x608c7de03300 ---------B   00570  GOTO 1690
    0x608c7de03450 ---------B T 00580  PRINT "WATER."
    0x608c7de034d0 ---------B   00590  GOTO 1690
    0x608c7de03730 ---------A T 00620  IF A=1 THEN 629
    0x608c7de038c0 ---------A   00621  PRINT "SELECTION OF CLUBS"
    0x608c7de03a70 ---------A   00622  PRINT "YARDAGE DESIRED                       SUGGESTED CLUBS"
    0x608c7de03c20 ---------A   00623  PRINT "200 TO 280 YARDS                           1 TO 4"
    0x608c7de03dd0 ---------A   00624  PRINT "100 TO 200 YARDS                          19 TO 13"
    0x608c7de03f50 ---------A   00625  PRINT "  0 TO 100 YARDS                          29 TO 23"
    0x608c7de04180 ---------A   00626  A=1
    0x608c7de04300 ---------A T 00629  PRINT "WHAT CLUB DO YOU CHOOSE";
    0x608c7de04520 ---------A   00630  INPUT C
    0x608c7de045a0 ---------A   00632  PRINT
    0x608c7de04800 ---------A   00635  IF C<1 THEN 690
    0x608c7de04a60 ---------A   00637  IF C>29 THEN 690
    0x608c7de04cc0 ---------A   00640  IF C>4 THEN 710
    0x608c7de04fe0 ---------A T 00650  IF L(0)<=5 THEN 740
    0x608c7de05240 ---------A   00660  IF C=14 THEN 740
    0x608c7de054a0 ---------A   00665  IF C=23 THEN 740
    0x608c7de05520 ---------A   00670  GOTO 690
    0x608c7de05870 ---------A T 00680  S1=S1-1
    0x608c7de059d0 ---------A T 00690  PRINT "THAT CLUB IS NOT IN THE BAG."
    0x608c7de05a50 ---------A   00693  PRINT
    0x608c7de05ad0 ---------A   00700  GOTO 620
    0x608c7de05d20 ---------A T 00710  IF C<12 THEN 690
    0x608c7de06060 ---------A   00720  C=C-6
    0x608c7de060d0 ---------A   00730  GOTO 650
    0x608c7de06400 ---------A T 00740  S1=S1+1
    0x608c7de066d0 ---------A   00741  W=1
    0x608c7de06930 ---------A   00742  IF C>13 THEN 960
    0x608c7de06e90 ---------A   00746  IF INT(F/3)=F/3 THEN 952
    0x608c7de070f0 ---------A T 00752  IF C<4 THEN 756
    0x608c7de07170 ---------A   00754  GOTO 760
    0x608c7de07480 ---------A T 00756  IF L(0)=2 THEN 862
    0x608c7de07710 ---------A T 00760  IF S1>7 THEN 867
    0x608c7de08750 ---------A T 00770  D1=INT(((30-H)*2.5+187-((30-H)*.25+15)*C/2)+25*RND(1))
    0x608c7de08b80 ---------A   00780  D1=INT(D1*W)
    0x608c7de08df0 ---------A   00800  IF T=2 THEN 1170
    0x608c7de09980 ---------A T 00830  O=(RND(1)/.8)*(2*H+16)*ABS(TAN(D1*.0035))
    0x608c7de0a350 ---------A   00840  D2=INT(SQR(O^2+ABS(D-D1)^2))
    0x608c7de0a6c0 ---------A   00850  IF D-D1<0 THEN 870
    0x608c7de0a750 ---------A   00860  GOTO 890
    0x608c7de0a8a0 ---------A T 00862  PRINT "YOU DUBBED IT."
    0x608c7de0aac0 ---------A   00864  D1=35
    0x608c7de0ab30 ---------A   00866  GOTO 830
    0x608c7de0ad80 ---------A T 00867  IF D<200 THEN 1300
    0x608c7de0ae00 ---------A   00868  GOTO 770
    0x608c7de0b070 ---------A T 00870  IF D2<20 THEN 890
    0x608c7de0b1e0 ---------A   00880  PRINT "TOO MUCH CLUB. YOU'RE PAST THE HOLE."
    0x608c7de0bcf0 ---------A T 00890  B=D
    0x608c7de0bf20 ---------A   00900  D=D2
    0x608c7de0c170 ---------A   00910  IF D2>27 THEN 1020
    0x608c7de0c3d0 ---------A   00920  IF D2>20 THEN 1100
    0x608c7de0c630 ---------A   00930  IF D2>.5 THEN 1120
    0x608c7de0c910 ---------A   00940  L(0)=9
    0x608c7de0c9b0 ---------A   00950  GOTO 1470
    0x608c7de0d900 ---------A T 00952  IF S2+Q+(10*(F-1)/18)<(F-1)*(72+((H+1)/.85))/18 THEN 956
    0x608c7de0d980 ---------A   00954  GOTO 752
    0x608c7de0dcc0 ---------A T 00956  Q=Q+1
    0x608c7de0e210 ---------A   00957  IF S1/2<>INT(S1/2) THEN 1011
    0x608c7de0e2c0 ---------A   00958  GOTO 862
    0x608c7de0e440 ---------A T 00960  PRINT "NOW GAUGE YOUR DISTANCE BY A PERCENTAGE (1 TO 100)"
    0x608c7de0e5c0 ---------A   00961  PRINT "OF A FULL SWING";
    0x608c7de0e700 ----------   00970  INPUT W
    0x608c7de0ea40 ---------A        a W=W/100
    0x608c7de0eab0 ---------A   00972  PRINT
    0x608c7de0ed10 ---------A   00980  IF W>1 THEN 680
    0x608c7de0f030 ---------A   00985  IF L(0)=5 THEN 1280
    0x608c7de0f290 ---------A   00990  IF C=14 THEN 760
    0x608c7de0f5d0 ---------A   01000  C=C-10
    0x608c7de0f640 ---------A   01010  GOTO 760
    0x608c7de0f8c0 ---------A T 01011  IF D<95 THEN 862
    0x608c7de0fd30 ---------A   01012  PRINT "BALL HIT TREE - BOUNCED INTO ROUGH";D-75;"YARDS FROM HOLE."
    0x608c7de10070 ---------A   01014  D=D-75
    0x608c7de100e0 ---------A   01018  GOTO 620
    0x608c7de10330 ---------A T 01020  IF O<30 THEN 1150
    0x608c7de10590 ---------A   01022  IF J>0 THEN 1150
    0x608c7de107f0 ---------A   01030  IF T>0 THEN 1070
    0x608c7de10d40 ---------A   01035  S9=(S2+1)/15
    0x608c7de110a0 ---------A   01036  IF INT(S9)=S9 THEN 1075
    0x608c7de11220 ---------A T 01040  PRINT "YOU HOOKED- ";
    0x608c7de115e0 ---------A   01050  L(0)=L(2)
    0x608c7de11830 ---------A T 01055  IF O>45 THEN 1092
    0x608c7de118b0 ---------A   01060  GOTO 320
    0x608c7de11d30 ---------A T 01070  S9=(S2+1)/15
    0x608c7de12090 ---------A   01071  IF INT(S9)=S9 THEN 1040
    0x608c7de12210 ---------A T 01075  PRINT "YOU SLICED- ";
    0x608c7de125d0 ---------A   01080  L(0)=L(1)
    0x608c7de12640 ---------A   01090  GOTO 1055
    0x608c7de12790 ---------A T 01092  PRINT "BADLY."
    0x608c7de12810 ---------A   01094  GOTO 320
    0x608c7de12ae0 ---------A T 01100  L(0)=5
    0x608c7de12b50 ---------A   01110  GOTO 320
    0x608c7de12e20 ---------A T 01120  L(0)=8
    0x608c7de13230 ---------A   01130  D2=INT(D2*3)
    0x608c7de132a0 ---------A   01140  GOTO 1380
    0x608c7de13570 ---------A T 01150  L(0)=1
    0x608c7de135e0 ---------A   01160  GOTO 320
    0x608c7de139f0 ---------A T 01170  D1=INT(.85*D1)
    0x608c7de13a70 ---------A   01180  GOTO 830
    0x608c7de13da0 ---------A T 01190  IF L(0)>6 THEN 1260
    0x608c7de13f10 ---------A   01200  PRINT "YOUR SHOT WENT INTO THE WATER."
    0x608c7de14280 ---------A T 01210  S1=S1+1
    0x608c7de143f0 ---------A   01220  PRINT "PENALTY STROKE ASSESSED.  HIT FROM PREVIOUS LOCATION."
    0x608c7de14730 ---------A   01230  J=J+1
    0x608c7de14a00 ---------A   01240  L(0)=1
    0x608c7de14c30 ---------A   01242  D=B
    0x608c7de14cc0 ---------A   01250  GOTO 620
    0x608c7de14e20 ---------A T 01260  PRINT "YOUR SHOT WENT OUT OF BOUNDS."
    0x608c7de14ea0 ---------A   01270  GOTO 1210
    0x608c7de15100 ---------A T 01280  IF T=3 THEN 1320
    0x608c7de15ac0 ---------A T 01300  D2=1+(3*INT((80/(40-H))*RND(1)))
    0x608c7de15b40 ---------A   01310  GOTO 1380
    0x608c7de15e70 ---------A T 01320  IF RND(1)>N THEN 1360
    0x608c7de161d0 ---------A   01330  N=N*.2
    0x608c7de16330 ---------A   01340  PRINT "SHOT DUBBED, STILL IN TRAP."
    0x608c7de163b0 ---------A   01350  GOTO 620
    0x608c7de165c0 ---------A T 01360  N=.8
    0x608c7de16650 ---------A   01370  GOTO 1300
    0x608c7de169c0 ---------A T 01380  PRINT "ON GREEN,";D2;"FEET FROM THE PIN."
    0x608c7de16b50 ---------A   01381  PRINT "CHOOSE YOUR PUTT POTENCY (1 TO 13):";
    0x608c7de16d70 ---------A   01400  INPUT I
    0x608c7de170c0 ---------A   01410  S1=S1+1
    0x608c7de17790 ---------A   01420  IF S1+1-P>(H*.072)+2 THEN 1470
    0x608c7de179f0 ---------A   01425  IF K>2 THEN 1470
    0x608c7de17d30 ---------A   01428  K=K+1
    0x608c7de17f90 ---------A   01430  IF T=4 THEN 1530
    0x608c7de18810 ---------A   01440  D2=D2-I*(4+2*RND(1))+1.5
    0x608c7de18a60 ---------A T 01450  IF D2<-2 THEN 1560
    0x608c7de18cd0 ---------A   01460  IF D2>2 THEN 1500
    0x608c7de18e30 ---------A T 01470  PRINT "YOU HOLED IT."
    0x608c7de18eb0 ---------A   01472  PRINT
    0x608c7de191f0 ---------A   01480  F=F+1
    0x608c7de19270 ---------A   01490  GOTO 230
    0x608c7de193c0 ---------A T 01500  PRINT "PUTT SHORT."
    0x608c7de196e0 ---------A T 01505  D2=INT(D2)
    0x608c7de19760 ---------A   01510  GOTO 1380
    0x608c7de19fd0 ---------A T 01530  D2=D2-I*(4+1*RND(1))+1
    0x608c7de1a050 ---------A   01550  GOTO 1450
    0x608c7de1a1a0 ---------A T 01560  PRINT "PASSED BY CUP."
    0x608c7de1a3e0 ---------A   01570  D2=-D2
    0x608c7de1a450 ---------A   01580  GOTO 1505
    0x608c7de1a9c0 ---------A T 01590  READ D,P,L(1),L(2)
    0x608c7de1aa60 ---------A   01595  PRINT
    0x608c7de1b0d0 ---------A   01600  PRINT "YOU ARE AT THE TEE OFF HOLE";F;"DISTANCE";D;"YARDS, PAR";P
    0x608c7de1b440 ---------A   01605  G3=G3+P
    0x608c7de1b5b0 ---------A   01620  PRINT "ON YOUR RIGHT IS ";
    0x608c7de1b7d0 ---------A   01630  X=1
    0x608c7de1b850 ---------A   01640  GOSUB 400
    0x608c7de1b9c0 ---------A   01650  PRINT "ON YOUR LEFT IS ";
    0x608c7de1bbe0 ---------A   01660  X=2
    0x608c7de1bc50 ---------A   01670  GOSUB 400
    0x608c7de1bcc0 ---------A   01680  GOTO 620
    0x608c7de1bd10 ---------B T 01690  RETURN
    0x608c7de1cbd0 ---------A   01700  DATA 361,4,4,2,389,4,3,3,206,3,4,2,500,5,7,2
    0x608c7de1da60 ---------A   01702  DATA 408,4,2,4,359,4,6,4,424,4,4,2,388,4,4,4
    0x608c7de1e8f0 ---------A   01704  DATA 196,3,7,2,400,4,7,2,560,5,7,2,132,3,2,2
    0x608c7de1f770 ---------A   01706  DATA 357,4,4,4,294,4,2,4,475,5,2,3,375,4,4,2
    0x608c7de1fee0 ---------A   01708  DATA 180,3,6,2,550,5,6,6
    0x608c7de1ff50 ---------A T 01710  PRINT
    0x608c7de202e0 ---------A T 01750  G2=G2+S1
    0x608c7de20a40 ---------A   01760  PRINT "TOTAL PAR FOR";F-1;"HOLES IS";G3;"  YOUR TOTAL IS";G2
    0x608c7de20dc0 ---------A   01761  IF G1=F-1 THEN 1770
    0x608c7de20e40 ---------A   01765  GOTO 292
    0x608c7de20e90 ---------A T 01770  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/golf.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x608c7ddf16d0 ---------A   01000  PRINT TAB(34);"GOLF"
    0x608c7ddf1670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x608c7ddf22d0 ---------- T 01020  PRINT
    0x608c7ddf2910 ----------   01030  PRINT
    0x608c7dde22b0 ---------A T 01040  PRINT
    0x608c7ddf31b0 ---------A   01050  PRINT "WELCOME TO THE CREATIVE COMPUTING COUNTRY CLUB,"
    0x608c7ddf2040 ---------A   01060  PRINT "AN EIGHTEEN HOLE CHAMPIONSHIP LAYOUT LOCATED A SHORT"
    0x608c7ddf1e40 ---------A T 01070  PRINT "DISTANCE FROM SCENIC DOWNTOWN MORRISTOWN.  THE"
    0x608c7ddf3680 ---------A   01080  PRINT "COMMENTATOR WILL EXPLAIN THE GAME AS YOU PLAY."
    0x608c7ddf1ca0 ---------A   01090  PRINT "ENJOY YOUR GAME; SEE YOU AT THE 19TH HOLE..."
    0x608c7ddf40a0 ---------- T 01100  PRINT
    0x608c7ddf4100 ----------   01110  PRINT
    0x608c7ddf2780 ---------A T 01120  DIM L(10)
    0x608c7ddf3f90 ---------A   01130  G1=18
    0x608c7ddf9ba0 ---------A   01140  G2=0
    0x608c7ddf9e70 ---------A T 01150  G3=0
    0x608c7ddfa140 ---------A   01160  A=0
    0x608c7ddfa410 ---------A T 01170  N=.8
    0x608c7ddfa6e0 ---------A   01180  S2=0
    0x608c7ddfa990 ---------A T 01190  F=1
    0x608c7ddfab00 ---------A   01200  PRINT "WHAT IS YOUR HANDICAP";
    0x608c7ddfad00 ---------- T 01210  INPUT H
    0x608c7ddfad80 ---------A   01220  PRINT
    0x608c7ddfafe0 ---------A   01230  IF H>30 THEN 1750
    0x608c7ddfb260 ---------A   01240  IF H<0 THEN 1750
    0x608c7ddfb3d0 ---------A   01250  PRINT "DIFFICULTIES AT GOLF INCLUDE:"
    0x608c7ddfb580 ---------A T 01260  PRINT "0=HOOK, 1=SLICE, 2=POOR DISTANCE, 4=TRAP SHOTS, 5=PUTTING"
    0x608c7ddfb6e0 ---------A   01270  PRINT "WHICH ONE (ONLY ONE) IS YOUR WORST";
    0x608c7ddfb8e0 ---------- T 01280  INPUT T
    0x608c7ddfb960 ---------A   01290  PRINT
    0x608c7ddfbbc0 ---------A T 01300  IF T>5 THEN 1250
    0x608c7ddfbea0 ---------A   01310  S1=0
    0x608c7ddfbf10 ---------A T 01320  REM
    0x608c7ddfc200 ---------A   01330  L(0)=0
    0x608c7ddfc4d0 ---------A   01340  J=0
    0x608c7ddfc7a0 ---------A   01350  Q=0
    0x608c7ddfcad0 ---------A T 01360  S2=S2+1
    0x608c7ddfcda0 ---------A   01370  K=0
    0x608c7ddfd010 ---------A T 01380  IF F=1 THEN 1560
    0x608c7ddfd780 ---------A   01390  PRINT "YOUR SCORE ON HOLE";F-1;"WAS";S1
    0x608c7ddfd800 ---------A   01400  GOTO 3460
    0x608c7ddfdc30 ---------A   01410  IF S1>P+2 THEN 1460
    0x608c7ddfdeb0 ---------A   01420  IF S1=P THEN 1480
    0x608c7ddfe230 ---------A   01430  IF S1=P-1 THEN 1500
    0x608c7ddfe5b0 ---------A   01440  IF S1=P-2 THEN 1520
    0x608c7ddfe610 ---------A T 01450  GOTO 1560
    0x608c7ddfe760 ---------A   01460  PRINT "KEEP YOUR HEAD DOWN."
    0x608c7ddfe7c0 ---------A T 01470  GOTO 1560
    0x608c7ddfe910 ---------A   01480  PRINT "A PAR.  NICE GOING."
    0x608c7ddfe990 ---------A   01490  GOTO 1560
    0x608c7ddfeae0 ---------A T 01500  PRINT "A BIRDIE."
    0x608c7ddfeb60 ---------A   01510  GOTO 1560
    0x608c7ddfed90 ---------A   01520  IF P=3 THEN 1550
    0x608c7ddfeef0 ---------A T 01530  PRINT "A GREAT BIG EAGLE."
    0x608c7ddfef80 ---------A   01540  GOTO 1560
    0x608c7ddff0d0 ---------A   01550  PRINT "A HOLE IN ONE."
    0x608c7ddff330 ---------A T 01560  IF F=19 THEN 3450
    0x608c7ddff550 ---------A   01570  S1=0
    0x608c7ddff5c0 ---------A   01580  PRINT
    0x608c7ddff820 ---------A T 01590  IF S1=0 THEN 3280
    0x608c7ddffb40 ---------A   01600  IF L(0)<1 THEN 2820
    0x608c7ddffe20 ---------A   01610  X=0
    0x608c7de00160 ---------A   01620  IF L(0)>5 THEN 2860
    0x608c7de00860 ---------A   01630  PRINT "SHOT WENT";D1;"YARDS.  IT'S";D2;"YARDS FROM THE CUP."
    0x608c7de00d80 ---------A   01640  PRINT "BALL IS";INT(O);"YARDS OFF LINE... IN ";
    0x608c7de00e00 ---------A   01650  GOSUB 1670
    0x608c7de00e70 ---------A   01660  GOTO 1890
    0x608c7de011a0 ---------B   01670  IF L(X)=1 THEN 1770
    0x608c7de014e0 ---------B   01680  IF L(X)=2 THEN 1790
    0x608c7de01820 ---------B T 01690  IF L(X)=3 THEN 1810
    0x608c7de01b60 ---------B   01700  IF L(X)=4 THEN 1830
    0x608c7de022b0 ---------B T 01710  IF L(X)=5 THEN 1850
    0x608c7de02600 ---------B   01720  IF L(X)=6 THEN 1870
    0x608c7de02760 ---------B   01730  PRINT "OUT OF BOUNDS."
    0x608c7de02800 ---------B   01740  GOTO 3390
    0x608c7de02960 ---------A T 01750  PRINT "PGA HANDICAPS RANGE FROM 0 TO 30."
    0x608c7de029e0 ---------A   01760  GOTO 1200
    0x608c7de02b30 ---------B T 01770  PRINT "FAIRWAY."
    0x608c7de02bb0 ---------B   01780  GOTO 3390
    0x608c7de02d00 ---------B   01790  PRINT "ROUGH."
    0x608c7de02d80 ---------B   01800  GOTO 3390
    0x608c7de02ed0 ---------B   01810  PRINT "TREES."
    0x608c7de02f60 ---------B   01820  GOTO 3390
    0x608c7de030b0 ---------B   01830  PRINT "ADJACENT FAIRWAY."
    0x608c7de03130 ---------B   01840  GOTO 3390
    0x608c7de03280 ---------B   01850  PRINT "TRAP."
    0x608c7de03300 ---------B   01860  GOTO 3390
    0x608c7de03450 ---------B   01870  PRINT "WATER."
    0x608c7de034d0 ---------B   01880  GOTO 3390
    0x608c7de03730 ---------A   01890  IF A=1 THEN 1960
    0x608c7de038c0 ---------A   01900  PRINT "SELECTION OF CLUBS"
    0x608c7de03a70 ---------A   01910  PRINT "YARDAGE DESIRED                       SUGGESTED CLUBS"
    0x608c7de03c20 ---------A   01920  PRINT "200 TO 280 YARDS                           1 TO 4"
    0x608c7de03dd0 ---------A   01930  PRINT "100 TO 200 YARDS                          19 TO 13"
    0x608c7de03f50 ---------A   01940  PRINT "  0 TO 100 YARDS                          29 TO 23"
    0x608c7de04180 ---------A   01950  A=1
    0x608c7de04300 ---------A   01960  PRINT "WHAT CLUB DO YOU CHOOSE";
    0x608c7de04520 ---------A   01970  INPUT C
    0x608c7de045a0 ---------A   01980  PRINT
    0x608c7de04800 ---------A   01990  IF C<1 THEN 2070
    0x608c7de04a60 ---------A   02000  IF C>29 THEN 2070
    0x608c7de04cc0 ---------A   02010  IF C>4 THEN 2100
    0x608c7de04fe0 ---------A   02020  IF L(0)<=5 THEN 2130
    0x608c7de05240 ---------A   02030  IF C=14 THEN 2130
    0x608c7de054a0 ---------A   02040  IF C=23 THEN 2130
    0x608c7de05520 ---------A   02050  GOTO 2070
    0x608c7de05870 ---------A   02060  S1=S1-1
    0x608c7de059d0 ---------A   02070  PRINT "THAT CLUB IS NOT IN THE BAG."
    0x608c7de05a50 ---------A   02080  PRINT
    0x608c7de05ad0 ---------A   02090  GOTO 1890
    0x608c7de05d20 ---------A   02100  IF C<12 THEN 2070
    0x608c7de06060 ---------A   02110  C=C-6
    0x608c7de060d0 ---------A   02120  GOTO 2020
    0x608c7de06400 ---------A   02130  S1=S1+1
    0x608c7de066d0 ---------A   02140  W=1
    0x608c7de06930 ---------A   02150  IF C>13 THEN 2470
    0x608c7de06e90 ---------A   02160  IF INT(F/3)=F/3 THEN 2420
    0x608c7de070f0 ---------A   02170  IF C<4 THEN 2190
    0x608c7de07170 ---------A   02180  GOTO 2200
    0x608c7de07480 ---------A   02190  IF L(0)=2 THEN 2280
    0x608c7de07710 ---------A   02200  IF S1>7 THEN 2310
    0x608c7de08750 ---------A   02210  D1=INT(((30-H)*2.5+187-((30-H)*.25+15)*C/2)+25*RND(1))
    0x608c7de08b80 ---------A   02220  D1=INT(D1*W)
    0x608c7de08df0 ---------A   02230  IF T=2 THEN 2840
    0x608c7de09980 ---------A   02240  O=(RND(1)/.8)*(2*H+16)*ABS(TAN(D1*.0035))
    0x608c7de0a350 ---------A   02250  D2=INT(SQR(O^2+ABS(D-D1)^2))
    0x608c7de0a6c0 ---------A   02260  IF D-D1<0 THEN 2330
    0x608c7de0a750 ---------A   02270  GOTO 2350
    0x608c7de0a8a0 ---------A   02280  PRINT "YOU DUBBED IT."
    0x608c7de0aac0 ---------A   02290  D1=35
    0x608c7de0ab30 ---------A   02300  GOTO 2240
    0x608c7de0ad80 ---------A   02310  IF D<200 THEN 2970
    0x608c7de0ae00 ---------A   02320  GOTO 2210
    0x608c7de0b070 ---------A   02330  IF D2<20 THEN 2350
    0x608c7de0b1e0 ---------A   02340  PRINT "TOO MUCH CLUB. YOU'RE PAST THE HOLE."
    0x608c7de0bcf0 ---------A   02350  B=D
    0x608c7de0bf20 ---------A   02360  D=D2
    0x608c7de0c170 ---------A   02370  IF D2>27 THEN 2610
    0x608c7de0c3d0 ---------A   02380  IF D2>20 THEN 2770
    0x608c7de0c630 ---------A   02390  IF D2>.5 THEN 2790
    0x608c7de0c910 ---------A   02400  L(0)=9
    0x608c7de0c9b0 ---------A   02410  GOTO 3160
    0x608c7de0d900 ---------A   02420  IF S2+Q+(10*(F-1)/18)<(F-1)*(72+((H+1)/.85))/18 THEN 2440
    0x608c7de0d980 ---------A   02430  GOTO 2170
    0x608c7de0dcc0 ---------A   02440  Q=Q+1
    0x608c7de0e210 ---------A   02450  IF S1/2<>INT(S1/2) THEN 2570
    0x608c7de0e2c0 ---------A   02460  GOTO 2280
    0x608c7de0e440 ---------A   02470  PRINT "NOW GAUGE YOUR DISTANCE BY A PERCENTAGE (1 TO 100)"
    0x608c7de0e5c0 ---------A   02480  PRINT "OF A FULL SWING";
    0x608c7de0e700 ----------   02490  INPUT W
    0x608c7de0ea40 ---------A   02500  W=W/100
    0x608c7de0eab0 ---------A   02510  PRINT
    0x608c7de0ed10 ---------A   02520  IF W>1 THEN 2060
    0x608c7de0f030 ---------A   02530  IF L(0)=5 THEN 2960
    0x608c7de0f290 ---------A   02540  IF C=14 THEN 2200
    0x608c7de0f5d0 ---------A   02550  C=C-10
    0x608c7de0f640 ---------A   02560  GOTO 2200
    0x608c7de0f8c0 ---------A   02570  IF D<95 THEN 2280
    0x608c7de0fd30 ---------A   02580  PRINT "BALL HIT TREE - BOUNCED INTO ROUGH";D-75;"YARDS FROM HOLE."
    0x608c7de10070 ---------A   02590  D=D-75
    0x608c7de100e0 ---------A   02600  GOTO 1890
    0x608c7de10330 ---------A   02610  IF O<30 THEN 2820
    0x608c7de10590 ---------A   02620  IF J>0 THEN 2820
    0x608c7de107f0 ---------A   02630  IF T>0 THEN 2700
    0x608c7de10d40 ---------A   02640  S9=(S2+1)/15
    0x608c7de110a0 ---------A   02650  IF INT(S9)=S9 THEN 2720
    0x608c7de11220 ---------A   02660  PRINT "YOU HOOKED- ";
    0x608c7de115e0 ---------A   02670  L(0)=L(2)
    0x608c7de11830 ---------A   02680  IF O>45 THEN 2750
    0x608c7de118b0 ---------A   02690  GOTO 1590
    0x608c7de11d30 ---------A   02700  S9=(S2+1)/15
    0x608c7de12090 ---------A   02710  IF INT(S9)=S9 THEN 2660
    0x608c7de12210 ---------A   02720  PRINT "YOU SLICED- ";
    0x608c7de125d0 ---------A   02730  L(0)=L(1)
    0x608c7de12640 ---------A   02740  GOTO 2680
    0x608c7de12790 ---------A   02750  PRINT "BADLY."
    0x608c7de12810 ---------A   02760  GOTO 1590
    0x608c7de12ae0 ---------A   02770  L(0)=5
    0x608c7de12b50 ---------A   02780  GOTO 1590
    0x608c7de12e20 ---------A   02790  L(0)=8
    0x608c7de13230 ---------A   02800  D2=INT(D2*3)
    0x608c7de132a0 ---------A   02810  GOTO 3050
    0x608c7de13570 ---------A   02820  L(0)=1
    0x608c7de135e0 ---------A   02830  GOTO 1590
    0x608c7de139f0 ---------A   02840  D1=INT(.85*D1)
    0x608c7de13a70 ---------A   02850  GOTO 2240
    0x608c7de13da0 ---------A   02860  IF L(0)>6 THEN 2940
    0x608c7de13f10 ---------A   02870  PRINT "YOUR SHOT WENT INTO THE WATER."
    0x608c7de14280 ---------A   02880  S1=S1+1
    0x608c7de143f0 ---------A   02890  PRINT "PENALTY STROKE ASSESSED.  HIT FROM PREVIOUS LOCATION."
    0x608c7de14730 ---------A   02900  J=J+1
    0x608c7de14a00 ---------A   02910  L(0)=1
    0x608c7de14c30 ---------A   02920  D=B
    0x608c7de14cc0 ---------A   02930  GOTO 1890
    0x608c7de14e20 ---------A   02940  PRINT "YOUR SHOT WENT OUT OF BOUNDS."
    0x608c7de14ea0 ---------A   02950  GOTO 2880
    0x608c7de15100 ---------A   02960  IF T=3 THEN 2990
    0x608c7de15ac0 ---------A   02970  D2=1+(3*INT((80/(40-H))*RND(1)))
    0x608c7de15b40 ---------A   02980  GOTO 3050
    0x608c7de15e70 ---------A   02990  IF RND(1)>N THEN 3030
    0x608c7de161d0 ---------A   03000  N=N*.2
    0x608c7de16330 ---------A   03010  PRINT "SHOT DUBBED, STILL IN TRAP."
    0x608c7de163b0 ---------A   03020  GOTO 1890
    0x608c7de165c0 ---------A   03030  N=.8
    0x608c7de16650 ---------A   03040  GOTO 2970
    0x608c7de169c0 ---------A   03050  PRINT "ON GREEN,";D2;"FEET FROM THE PIN."
    0x608c7de16b50 ---------A   03060  PRINT "CHOOSE YOUR PUTT POTENCY (1 TO 13):";
    0x608c7de16d70 ---------A   03070  INPUT I
    0x608c7de170c0 ---------A   03080  S1=S1+1
    0x608c7de17790 ---------A   03090  IF S1+1-P>(H*.072)+2 THEN 3160
    0x608c7de179f0 ---------A   03100  IF K>2 THEN 3160
    0x608c7de17d30 ---------A   03110  K=K+1
    0x608c7de17f90 ---------A   03120  IF T=4 THEN 3230
    0x608c7de18810 ---------A   03130  D2=D2-I*(4+2*RND(1))+1.5
    0x608c7de18a60 ---------A   03140  IF D2<-2 THEN 3250
    0x608c7de18cd0 ---------A   03150  IF D2>2 THEN 3200
    0x608c7de18e30 ---------A   03160  PRINT "YOU HOLED IT."
    0x608c7de18eb0 ---------A   03170  PRINT
    0x608c7de191f0 ---------A   03180  F=F+1
    0x608c7de19270 ---------A   03190  GOTO 1330
    0x608c7de193c0 ---------A   03200  PRINT "PUTT SHORT."
    0x608c7de196e0 ---------A   03210  D2=INT(D2)
    0x608c7de19760 ---------A   03220  GOTO 3050
    0x608c7de19fd0 ---------A   03230  D2=D2-I*(4+1*RND(1))+1
    0x608c7de1a050 ---------A   03240  GOTO 3140
    0x608c7de1a1a0 ---------A   03250  PRINT "PASSED BY CUP."
    0x608c7de1a3e0 ---------A   03260  D2=-D2
    0x608c7de1a450 ---------A   03270  GOTO 3210
    0x608c7de1a9c0 ---------A   03280  READ D,P,L(1),L(2)
    0x608c7de1aa60 ---------A   03290  PRINT
    0x608c7de1b0d0 ---------A   03300  PRINT "YOU ARE AT THE TEE OFF HOLE";F;"DISTANCE";D;"YARDS, PAR";P
    0x608c7de1b440 ---------A   03310  G3=G3+P
    0x608c7de1b5b0 ---------A   03320  PRINT "ON YOUR RIGHT IS ";
    0x608c7de1b7d0 ---------A   03330  X=1
    0x608c7de1b850 ---------A   03340  GOSUB 1670
    0x608c7de1b9c0 ---------A   03350  PRINT "ON YOUR LEFT IS ";
    0x608c7de1bbe0 ---------A   03360  X=2
    0x608c7de1bc50 ---------A   03370  GOSUB 1670
    0x608c7de1bcc0 ---------A   03380  GOTO 1890
    0x608c7de1bd10 ---------B   03390  RETURN
    0x608c7de1cbd0 ---------A   03400  DATA 361,4,4,2,389,4,3,3,206,3,4,2,500,5,7,2
    0x608c7de1da60 ---------A   03410  DATA 408,4,2,4,359,4,6,4,424,4,4,2,388,4,4,4
    0x608c7de1e8f0 ---------A   03420  DATA 196,3,7,2,400,4,7,2,560,5,7,2,132,3,2,2
    0x608c7de1f770 ---------A   03430  DATA 357,4,4,4,294,4,2,4,475,5,2,3,375,4,4,2
    0x608c7de1fee0 ---------A   03440  DATA 180,3,6,2,550,5,6,6
    0x608c7de1ff50 ---------A   03450  PRINT
    0x608c7de202e0 ---------A   03460  G2=G2+S1
    0x608c7de20a40 ---------A   03470  PRINT "TOTAL PAR FOR";F-1;"HOLES IS";G3;"  YOUR TOTAL IS";G2
    0x608c7de20dc0 ---------A   03480  IF G1=F-1 THEN 3500
    0x608c7de20e40 ---------A   03490  GOTO 1410
    0x608c7de20e90 ---------A   03500  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03520 - 10000    6490 

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
    0x608c7ddf16d0 ---------A   01000  PRINT TAB(34);"GOLF"
    0x608c7ddf1670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x608c7ddf22d0 ---------A   01020  PRINT
    0x608c7ddf2910 ---------A   01030  PRINT
    0x608c7dde22b0 ---------A   01040  PRINT
    0x608c7ddf31b0 ---------A   01050  PRINT "WELCOME TO THE CREATIVE COMPUTING COUNTRY CLUB,"
    0x608c7ddf2040 ---------A   01060  PRINT "AN EIGHTEEN HOLE CHAMPIONSHIP LAYOUT LOCATED A SHORT"
    0x608c7ddf1e40 ---------A   01070  PRINT "DISTANCE FROM SCENIC DOWNTOWN MORRISTOWN.  THE"
    0x608c7ddf3680 ---------A   01080  PRINT "COMMENTATOR WILL EXPLAIN THE GAME AS YOU PLAY."
    0x608c7ddf1ca0 ---------A   01090  PRINT "ENJOY YOUR GAME; SEE YOU AT THE 19TH HOLE..."
    0x608c7ddf40a0 ---------A   01100  PRINT
    0x608c7ddf4100 ---------A   01110  PRINT
    0x608c7ddf2780 ---------A   01120  DIM L(10)
    0x608c7ddf3f90 ---------A   01130  G1=18
    0x608c7ddf9ba0 ---------A   01140  G2=0
    0x608c7ddf9e70 ---------A   01150  G3=0
    0x608c7ddfa140 ---------A   01160  A=0
    0x608c7ddfa410 ---------A   01170  N=.8
    0x608c7ddfa6e0 ---------A   01180  S2=0
    0x608c7ddfa990 ---------A   01190  F=1
    0x608c7ddfab00 ---------A T 01200  PRINT "WHAT IS YOUR HANDICAP";
    0x608c7ddfad00 ---------A   01210  INPUT H
    0x608c7ddfad80 ---------A   01220  PRINT
    0x608c7ddfafe0 ---------A   01230  IF H>30 THEN 1670
    0x608c7ddfb260 ---------A   01240  IF H<0 THEN 1670
    0x608c7ddfb3d0 ---------A T 01250  PRINT "DIFFICULTIES AT GOLF INCLUDE:"
    0x608c7ddfb580 ---------A   01260  PRINT "0=HOOK, 1=SLICE, 2=POOR DISTANCE, 4=TRAP SHOTS, 5=PUTTING"
    0x608c7ddfb6e0 ---------A   01270  PRINT "WHICH ONE (ONLY ONE) IS YOUR WORST";
    0x608c7ddfb8e0 ---------A   01280  INPUT T
    0x608c7ddfb960 ---------A   01290  PRINT
    0x608c7ddfbbc0 ---------A   01300  IF T>5 THEN 1250
    0x608c7ddfbea0 ---------A   01310  S1=0
    0x608c7ddfbf10 ---------A   01320  REM
    0x608c7ddfc200 ---------A T 01330  L(0)=0
    0x608c7ddfc4d0 ---------A   01340  J=0
    0x608c7ddfc7a0 ---------A   01350  Q=0
    0x608c7ddfcad0 ---------A   01360  S2=S2+1
    0x608c7ddfcda0 ---------A   01370  K=0
    0x608c7ddfd010 ---------A   01380  IF F=1 THEN 1560
    0x608c7ddfd780 ---------A   01390  PRINT "YOUR SCORE ON HOLE";F-1;"WAS";S1
    0x608c7ddfd800 ---------A   01400  GOTO 3250
    0x608c7ddfdc30 ---------A T 01410  IF S1>P+2 THEN 1460
    0x608c7ddfdeb0 ---------A   01420  IF S1=P THEN 1480
    0x608c7ddfe230 ---------A   01430  IF S1=P-1 THEN 1500
    0x608c7ddfe5b0 ---------A   01440  IF S1=P-2 THEN 1520
    0x608c7ddfe610 ---------A   01450  GOTO 1560
    0x608c7ddfe760 ---------A T 01460  PRINT "KEEP YOUR HEAD DOWN."
    0x608c7ddfe7c0 ---------A   01470  GOTO 1560
    0x608c7ddfe910 ---------A T 01480  PRINT "A PAR.  NICE GOING."
    0x608c7ddfe990 ---------A   01490  GOTO 1560
    0x608c7ddfeae0 ---------A T 01500  PRINT "A BIRDIE."
    0x608c7ddfeb60 ---------A   01510  GOTO 1560
    0x608c7ddfed90 ---------A T 01520  IF P=3 THEN 1550
    0x608c7ddfeef0 ---------A   01530  PRINT "A GREAT BIG EAGLE."
    0x608c7ddfef80 ---------A   01540  GOTO 1560
    0x608c7ddff0d0 ---------A T 01550  PRINT "A HOLE IN ONE."
    0x608c7ddff330 ---------A T 01560  IF F=19 THEN 3240
    0x608c7ddff550 ---------A   01570  S1=0
    0x608c7ddff5c0 ---------A   01580  PRINT
    0x608c7ddff820 ---------A T 01590  IF S1=0 THEN 3080
    0x608c7ddffb40 ---------A   01600  IF L(0)<1 THEN 2620
    0x608c7ddffe20 ---------A   01610  X=0
    0x608c7de00160 ---------A   01620  IF L(0)>5 THEN 2660
    0x608c7de00860 ---------A   01630  PRINT "SHOT WENT";D1;"YARDS.  IT'S";D2;"YARDS FROM THE CUP."
    0x608c7de00d80 ---------A   01640  PRINT "BALL IS";INT(O);"YARDS OFF LINE... IN ";
    0x608c7de00e00 ---------A   01650  GOSUB 3300
    0x608c7de00e70 ---------A   01660  GOTO 1690
    0x608c7de02960 ---------A T 01670  PRINT "PGA HANDICAPS RANGE FROM 0 TO 30."
    0x608c7de029e0 ---------A   01680  GOTO 1200
    0x608c7de03730 ---------A T 01690  IF A=1 THEN 1760
    0x608c7de038c0 ---------A   01700  PRINT "SELECTION OF CLUBS"
    0x608c7de03a70 ---------A   01710  PRINT "YARDAGE DESIRED                       SUGGESTED CLUBS"
    0x608c7de03c20 ---------A   01720  PRINT "200 TO 280 YARDS                           1 TO 4"
    0x608c7de03dd0 ---------A   01730  PRINT "100 TO 200 YARDS                          19 TO 13"
    0x608c7de03f50 ---------A   01740  PRINT "  0 TO 100 YARDS                          29 TO 23"
    0x608c7de04180 ---------A   01750  A=1
    0x608c7de04300 ---------A T 01760  PRINT "WHAT CLUB DO YOU CHOOSE";
    0x608c7de04520 ---------A   01770  INPUT C
    0x608c7de045a0 ---------A   01780  PRINT
    0x608c7de04800 ---------A   01790  IF C<1 THEN 1870
    0x608c7de04a60 ---------A   01800  IF C>29 THEN 1870
    0x608c7de04cc0 ---------A   01810  IF C>4 THEN 1900
    0x608c7de04fe0 ---------A T 01820  IF L(0)<=5 THEN 1930
    0x608c7de05240 ---------A   01830  IF C=14 THEN 1930
    0x608c7de054a0 ---------A   01840  IF C=23 THEN 1930
    0x608c7de05520 ---------A   01850  GOTO 1870
    0x608c7de05870 ---------A T 01860  S1=S1-1
    0x608c7de059d0 ---------A T 01870  PRINT "THAT CLUB IS NOT IN THE BAG."
    0x608c7de05a50 ---------A   01880  PRINT
    0x608c7de05ad0 ---------A   01890  GOTO 1690
    0x608c7de05d20 ---------A T 01900  IF C<12 THEN 1870
    0x608c7de06060 ---------A   01910  C=C-6
    0x608c7de060d0 ---------A   01920  GOTO 1820
    0x608c7de06400 ---------A T 01930  S1=S1+1
    0x608c7de066d0 ---------A   01940  W=1
    0x608c7de06930 ---------A   01950  IF C>13 THEN 2270
    0x608c7de06e90 ---------A   01960  IF INT(F/3)=F/3 THEN 2220
    0x608c7de070f0 ---------A T 01970  IF C<4 THEN 1990
    0x608c7de07170 ---------A   01980  GOTO 2000
    0x608c7de07480 ---------A T 01990  IF L(0)=2 THEN 2080
    0x608c7de07710 ---------A T 02000  IF S1>7 THEN 2110
    0x608c7de08750 ---------A T 02010  D1=INT(((30-H)*2.5+187-((30-H)*.25+15)*C/2)+25*RND(1))
    0x608c7de08b80 ---------A   02020  D1=INT(D1*W)
    0x608c7de08df0 ---------A   02030  IF T=2 THEN 2640
    0x608c7de09980 ---------A T 02040  O=(RND(1)/.8)*(2*H+16)*ABS(TAN(D1*.0035))
    0x608c7de0a350 ---------A   02050  D2=INT(SQR(O^2+ABS(D-D1)^2))
    0x608c7de0a6c0 ---------A   02060  IF D-D1<0 THEN 2130
    0x608c7de0a750 ---------A   02070  GOTO 2150
    0x608c7de0a8a0 ---------A T 02080  PRINT "YOU DUBBED IT."
    0x608c7de0aac0 ---------A   02090  D1=35
    0x608c7de0ab30 ---------A   02100  GOTO 2040
    0x608c7de0ad80 ---------A T 02110  IF D<200 THEN 2770
    0x608c7de0ae00 ---------A   02120  GOTO 2010
    0x608c7de0b070 ---------A T 02130  IF D2<20 THEN 2150
    0x608c7de0b1e0 ---------A   02140  PRINT "TOO MUCH CLUB. YOU'RE PAST THE HOLE."
    0x608c7de0bcf0 ---------A T 02150  B=D
    0x608c7de0bf20 ---------A   02160  D=D2
    0x608c7de0c170 ---------A   02170  IF D2>27 THEN 2410
    0x608c7de0c3d0 ---------A   02180  IF D2>20 THEN 2570
    0x608c7de0c630 ---------A   02190  IF D2>.5 THEN 2590
    0x608c7de0c910 ---------A   02200  L(0)=9
    0x608c7de0c9b0 ---------A   02210  GOTO 2960
    0x608c7de0d900 ---------A T 02220  IF S2+Q+(10*(F-1)/18)<(F-1)*(72+((H+1)/.85))/18 THEN 2240
    0x608c7de0d980 ---------A   02230  GOTO 1970
    0x608c7de0dcc0 ---------A T 02240  Q=Q+1
    0x608c7de0e210 ---------A   02250  IF S1/2<>INT(S1/2) THEN 2370
    0x608c7de0e2c0 ---------A   02260  GOTO 2080
    0x608c7de0e440 ---------A T 02270  PRINT "NOW GAUGE YOUR DISTANCE BY A PERCENTAGE (1 TO 100)"
    0x608c7de0e5c0 ---------A   02280  PRINT "OF A FULL SWING";
    0x608c7de0e700 ---------A   02290  INPUT W
    0x608c7de0ea40 ---------A   02300  W=W/100
    0x608c7de0eab0 ---------A   02310  PRINT
    0x608c7de0ed10 ---------A   02320  IF W>1 THEN 1860
    0x608c7de0f030 ---------A   02330  IF L(0)=5 THEN 2760
    0x608c7de0f290 ---------A   02340  IF C=14 THEN 2000
    0x608c7de0f5d0 ---------A   02350  C=C-10
    0x608c7de0f640 ---------A   02360  GOTO 2000
    0x608c7de0f8c0 ---------A T 02370  IF D<95 THEN 2080
    0x608c7de0fd30 ---------A   02380  PRINT "BALL HIT TREE - BOUNCED INTO ROUGH";D-75;"YARDS FROM HOLE."
    0x608c7de10070 ---------A   02390  D=D-75
    0x608c7de100e0 ---------A   02400  GOTO 1690
    0x608c7de10330 ---------A T 02410  IF O<30 THEN 2620
    0x608c7de10590 ---------A   02420  IF J>0 THEN 2620
    0x608c7de107f0 ---------A   02430  IF T>0 THEN 2500
    0x608c7de10d40 ---------A   02440  S9=(S2+1)/15
    0x608c7de110a0 ---------A   02450  IF INT(S9)=S9 THEN 2520
    0x608c7de11220 ---------A T 02460  PRINT "YOU HOOKED- ";
    0x608c7de115e0 ---------A   02470  L(0)=L(2)
    0x608c7de11830 ---------A T 02480  IF O>45 THEN 2550
    0x608c7de118b0 ---------A   02490  GOTO 1590
    0x608c7de11d30 ---------A T 02500  S9=(S2+1)/15
    0x608c7de12090 ---------A   02510  IF INT(S9)=S9 THEN 2460
    0x608c7de12210 ---------A T 02520  PRINT "YOU SLICED- ";
    0x608c7de125d0 ---------A   02530  L(0)=L(1)
    0x608c7de12640 ---------A   02540  GOTO 2480
    0x608c7de12790 ---------A T 02550  PRINT "BADLY."
    0x608c7de12810 ---------A   02560  GOTO 1590
    0x608c7de12ae0 ---------A T 02570  L(0)=5
    0x608c7de12b50 ---------A   02580  GOTO 1590
    0x608c7de12e20 ---------A T 02590  L(0)=8
    0x608c7de13230 ---------A   02600  D2=INT(D2*3)
    0x608c7de132a0 ---------A   02610  GOTO 2850
    0x608c7de13570 ---------A T 02620  L(0)=1
    0x608c7de135e0 ---------A   02630  GOTO 1590
    0x608c7de139f0 ---------A T 02640  D1=INT(.85*D1)
    0x608c7de13a70 ---------A   02650  GOTO 2040
    0x608c7de13da0 ---------A T 02660  IF L(0)>6 THEN 2740
    0x608c7de13f10 ---------A   02670  PRINT "YOUR SHOT WENT INTO THE WATER."
    0x608c7de14280 ---------A T 02680  S1=S1+1
    0x608c7de143f0 ---------A   02690  PRINT "PENALTY STROKE ASSESSED.  HIT FROM PREVIOUS LOCATION."
    0x608c7de14730 ---------A   02700  J=J+1
    0x608c7de14a00 ---------A   02710  L(0)=1
    0x608c7de14c30 ---------A   02720  D=B
    0x608c7de14cc0 ---------A   02730  GOTO 1690
    0x608c7de14e20 ---------A T 02740  PRINT "YOUR SHOT WENT OUT OF BOUNDS."
    0x608c7de14ea0 ---------A   02750  GOTO 2680
    0x608c7de15100 ---------A T 02760  IF T=3 THEN 2790
    0x608c7de15ac0 ---------A T 02770  D2=1+(3*INT((80/(40-H))*RND(1)))
    0x608c7de15b40 ---------A   02780  GOTO 2850
    0x608c7de15e70 ---------A T 02790  IF RND(1)>N THEN 2830
    0x608c7de161d0 ---------A   02800  N=N*.2
    0x608c7de16330 ---------A   02810  PRINT "SHOT DUBBED, STILL IN TRAP."
    0x608c7de163b0 ---------A   02820  GOTO 1690
    0x608c7de165c0 ---------A T 02830  N=.8
    0x608c7de16650 ---------A   02840  GOTO 2770
    0x608c7de169c0 ---------A T 02850  PRINT "ON GREEN,";D2;"FEET FROM THE PIN."
    0x608c7de16b50 ---------A   02860  PRINT "CHOOSE YOUR PUTT POTENCY (1 TO 13):";
    0x608c7de16d70 ---------A   02870  INPUT I
    0x608c7de170c0 ---------A   02880  S1=S1+1
    0x608c7de17790 ---------A   02890  IF S1+1-P>(H*.072)+2 THEN 2960
    0x608c7de179f0 ---------A   02900  IF K>2 THEN 2960
    0x608c7de17d30 ---------A   02910  K=K+1
    0x608c7de17f90 ---------A   02920  IF T=4 THEN 3030
    0x608c7de18810 ---------A   02930  D2=D2-I*(4+2*RND(1))+1.5
    0x608c7de18a60 ---------A T 02940  IF D2<-2 THEN 3050
    0x608c7de18cd0 ---------A   02950  IF D2>2 THEN 3000
    0x608c7de18e30 ---------A T 02960  PRINT "YOU HOLED IT."
    0x608c7de18eb0 ---------A   02970  PRINT
    0x608c7de191f0 ---------A   02980  F=F+1
    0x608c7de19270 ---------A   02990  GOTO 1330
    0x608c7de193c0 ---------A T 03000  PRINT "PUTT SHORT."
    0x608c7de196e0 ---------A T 03010  D2=INT(D2)
    0x608c7de19760 ---------A   03020  GOTO 2850
    0x608c7de19fd0 ---------A T 03030  D2=D2-I*(4+1*RND(1))+1
    0x608c7de1a050 ---------A   03040  GOTO 2940
    0x608c7de1a1a0 ---------A T 03050  PRINT "PASSED BY CUP."
    0x608c7de1a3e0 ---------A   03060  D2=-D2
    0x608c7de1a450 ---------A   03070  GOTO 3010
    0x608c7de1a9c0 ---------A T 03080  READ D,P,L(1),L(2)
    0x608c7de1aa60 ---------A   03090  PRINT
    0x608c7de1b0d0 ---------A   03100  PRINT "YOU ARE AT THE TEE OFF HOLE";F;"DISTANCE";D;"YARDS, PAR";P
    0x608c7de1b440 ---------A   03110  G3=G3+P
    0x608c7de1b5b0 ---------A   03120  PRINT "ON YOUR RIGHT IS ";
    0x608c7de1b7d0 ---------A   03130  X=1
    0x608c7de1b850 ---------A   03140  GOSUB 3300
    0x608c7de1b9c0 ---------A   03150  PRINT "ON YOUR LEFT IS ";
    0x608c7de1bbe0 ---------A   03160  X=2
    0x608c7de1bc50 ---------A   03170  GOSUB 3300
    0x608c7de1bcc0 ---------A   03180  GOTO 1690
    0x608c7de1cbd0 ---------A   03190  DATA 361,4,4,2,389,4,3,3,206,3,4,2,500,5,7,2
    0x608c7de1da60 ---------A   03200  DATA 408,4,2,4,359,4,6,4,424,4,4,2,388,4,4,4
    0x608c7de1e8f0 ---------A   03210  DATA 196,3,7,2,400,4,7,2,560,5,7,2,132,3,2,2
    0x608c7de1f770 ---------A   03220  DATA 357,4,4,4,294,4,2,4,475,5,2,3,375,4,4,2
    0x608c7de1fee0 ---------A   03230  DATA 180,3,6,2,550,5,6,6
    0x608c7de1ff50 ---------A T 03240  PRINT
    0x608c7de202e0 ---------A T 03250  G2=G2+S1
    0x608c7de20a40 ---------A   03260  PRINT "TOTAL PAR FOR";F-1;"HOLES IS";G3;"  YOUR TOTAL IS";G2
    0x608c7de20dc0 ---------A   03270  IF G1=F-1 THEN 3290
    0x608c7de20e40 ---------A   03280  GOTO 1410
    0x608c7de20e90 ---------A T 03290  END
    0x608c7de011a0 ---------B G 03300  IF L(X)=1 THEN 3380
    0x608c7de014e0 ---------B   03310  IF L(X)=2 THEN 3400
    0x608c7de01820 ---------B   03320  IF L(X)=3 THEN 3420
    0x608c7de01b60 ---------B   03330  IF L(X)=4 THEN 3440
    0x608c7de022b0 ---------B   03340  IF L(X)=5 THEN 3460
    0x608c7de02600 ---------B   03350  IF L(X)=6 THEN 3480
    0x608c7de02760 ---------B   03360  PRINT "OUT OF BOUNDS."
    0x608c7de02800 ---------B   03370  GOTO 3500
    0x608c7de02b30 ---------B T 03380  PRINT "FAIRWAY."
    0x608c7de02bb0 ---------B   03390  GOTO 3500
    0x608c7de02d00 ---------B T 03400  PRINT "ROUGH."
    0x608c7de02d80 ---------B   03410  GOTO 3500
    0x608c7de02ed0 ---------B T 03420  PRINT "TREES."
    0x608c7de02f60 ---------B   03430  GOTO 3500
    0x608c7de030b0 ---------B T 03440  PRINT "ADJACENT FAIRWAY."
    0x608c7de03130 ---------B   03450  GOTO 3500
    0x608c7de03280 ---------B T 03460  PRINT "TRAP."
    0x608c7de03300 ---------B   03470  GOTO 3500
    0x608c7de03450 ---------B T 03480  PRINT "WATER."
    0x608c7de034d0 ---------B   03490  GOTO 3500
    0x608c7de26230 ---------B T 03500  GOTO 03510
    0x608c7de2cd90 ---------B T 03510  RETURN
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
char* data_03190s[]={"361","4","4","2","389","4","3","3","206","3","4","2","500","5","7","2"};
char* data_03200s[]={"408","4","2","4","359","4","6","4","424","4","4","2","388","4","4","4"};
char* data_03210s[]={"196","3","7","2","400","4","7","2","560","5","7","2","132","3","2","2"};
char* data_03220s[]={"357","4","4","4","294","4","2","4","475","5","2","3","375","4","4","2"};
char* data_03230s[]={"180","3","6","2","550","5","6","6"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3190, 16,data_03190s},
    { 3200, 16,data_03200s},
    { 3210, 16,data_03210s},
    { 3220, 16,data_03220s},
    { 3230,  8,data_03230s},
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
void Routine_03300();

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

void Routine_03300(){
    // 03300 IF L(X)=1 THEN 3380
    if(L_int_arr[X_int]==1)goto Lbl_03380;
    // 03310 IF L(X)=2 THEN 3400
    if(L_int_arr[X_int]==2)goto Lbl_03400;
    // 03320 IF L(X)=3 THEN 3420
    if(L_int_arr[X_int]==3)goto Lbl_03420;
    // 03330 IF L(X)=4 THEN 3440
    if(L_int_arr[X_int]==4)goto Lbl_03440;
    // 03340 IF L(X)=5 THEN 3460
    if(L_int_arr[X_int]==5)goto Lbl_03460;
    // 03350 IF L(X)=6 THEN 3480
    if(L_int_arr[X_int]==6)goto Lbl_03480;
    // 03360 PRINT "OUT OF BOUNDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OUT OF BOUNDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 03370 GOTO 3500
    goto Lbl_03500;

  Lbl_03380:
    // 03380 PRINT "FAIRWAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FAIRWAY.");strcat(buf,"\n");fputs(buf,fh); };
    // 03390 GOTO 3500
    goto Lbl_03500;

  Lbl_03400:
    // 03400 PRINT "ROUGH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ROUGH.");strcat(buf,"\n");fputs(buf,fh); };
    // 03410 GOTO 3500
    goto Lbl_03500;

  Lbl_03420:
    // 03420 PRINT "TREES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TREES.");strcat(buf,"\n");fputs(buf,fh); };
    // 03430 GOTO 3500
    goto Lbl_03500;

  Lbl_03440:
    // 03440 PRINT "ADJACENT FAIRWAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ADJACENT FAIRWAY.");strcat(buf,"\n");fputs(buf,fh); };
    // 03450 GOTO 3500
    goto Lbl_03500;

  Lbl_03460:
    // 03460 PRINT "TRAP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRAP.");strcat(buf,"\n");fputs(buf,fh); };
    // 03470 GOTO 3500
    goto Lbl_03500;

  Lbl_03480:
    // 03480 PRINT "WATER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WATER.");strcat(buf,"\n");fputs(buf,fh); };
    // 03490 GOTO 3500
    goto Lbl_03500;

  Lbl_03500:
    // 03500 GOTO 03510
    goto Lbl_03510;

  Lbl_03510:
    // 03510 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(34);"GOLF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,34);strcat(buf,"GOLF");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "WELCOME TO THE CREATIVE COMPUTING COUNTRY CLUB,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WELCOME TO THE CREATIVE COMPUTING COUNTRY CLUB,");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "AN EIGHTEEN HOLE CHAMPIONSHIP LAYOUT LOCATED A SHORT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AN EIGHTEEN HOLE CHAMPIONSHIP LAYOUT LOCATED A SHORT");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "DISTANCE FROM SCENIC DOWNTOWN MORRISTOWN.  THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DISTANCE FROM SCENIC DOWNTOWN MORRISTOWN.  THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "COMMENTATOR WILL EXPLAIN THE GAME AS YOU PLAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMMENTATOR WILL EXPLAIN THE GAME AS YOU PLAY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "ENJOY YOUR GAME; SEE YOU AT THE 19TH HOLE..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENJOY YOUR GAME; SEE YOU AT THE 19TH HOLE...");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01120 DIM L(10)
    // 01130 G1=18
    G1_int = 18;
    // 01140 G2=0
    G2_int = 0;
    // 01150 G3=0
    G3_int = 0;
    // 01160 A=0
    A_int = 0;
    // 01170 N=.8
    N_int = 0.8;
    // 01180 S2=0
    S2_int = 0;
    // 01190 F=1
    F_int = 1;

  Lbl_01200:
    // 01200 PRINT "WHAT IS YOUR HANDICAP";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR HANDICAP");fputs(buf,fh); };
    // 01210 INPUT H
    // Start of Basic INPUT statement 01210
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&H_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01210
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 IF H>30 THEN 1670
    if(H_int>30)goto Lbl_01670;
    // 01240 IF H<0 THEN 1670
    if(H_int<0)goto Lbl_01670;

  Lbl_01250:
    // 01250 PRINT "DIFFICULTIES AT GOLF INCLUDE:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIFFICULTIES AT GOLF INCLUDE:");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "0=HOOK, 1=SLICE, 2=POOR DISTANCE, 4=TRAP SHOTS, 5=PUTTING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"0=HOOK, 1=SLICE, 2=POOR DISTANCE, 4=TRAP SHOTS, 5=PUTTING");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "WHICH ONE (ONLY ONE) IS YOUR WORST";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHICH ONE (ONLY ONE) IS YOUR WORST");fputs(buf,fh); };
    // 01280 INPUT T
    // Start of Basic INPUT statement 01280
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&T_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01280
    // 01290 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01300 IF T>5 THEN 1250
    if(T_int>5)goto Lbl_01250;
    // 01310 S1=0
    S1_int = 0;
    // 01320 REM

  Lbl_01330:
    // 01330 L(0)=0
    L_int_arr[0] = 0;
    // 01340 J=0
    J_int = 0;
    // 01350 Q=0
    Q_int = 0;
    // 01360 S2=S2+1
    S2_int = S2_int+1;
    // 01370 K=0
    K_int = 0;
    // 01380 IF F=1 THEN 1560
    if(F_int==1)goto Lbl_01560;
    // 01390 PRINT "YOUR SCORE ON HOLE";F-1;"WAS";S1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR SCORE ON HOLE"); b2c_INT(buf,F_int-1);strcat(buf,"WAS"); b2c_INT(buf,S1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01400 GOTO 3250
    goto Lbl_03250;

  Lbl_01410:
    // 01410 IF S1>P+2 THEN 1460
    if(S1_int>P_int+2)goto Lbl_01460;
    // 01420 IF S1=P THEN 1480
    if(S1_int==P_int)goto Lbl_01480;
    // 01430 IF S1=P-1 THEN 1500
    if(S1_int==P_int-1)goto Lbl_01500;
    // 01440 IF S1=P-2 THEN 1520
    if(S1_int==P_int-2)goto Lbl_01520;
    // 01450 GOTO 1560
    goto Lbl_01560;

  Lbl_01460:
    // 01460 PRINT "KEEP YOUR HEAD DOWN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"KEEP YOUR HEAD DOWN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01470 GOTO 1560
    goto Lbl_01560;

  Lbl_01480:
    // 01480 PRINT "A PAR.  NICE GOING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A PAR.  NICE GOING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 GOTO 1560
    goto Lbl_01560;

  Lbl_01500:
    // 01500 PRINT "A BIRDIE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A BIRDIE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01510 GOTO 1560
    goto Lbl_01560;

  Lbl_01520:
    // 01520 IF P=3 THEN 1550
    if(P_int==3)goto Lbl_01550;
    // 01530 PRINT "A GREAT BIG EAGLE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A GREAT BIG EAGLE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01540 GOTO 1560
    goto Lbl_01560;

  Lbl_01550:
    // 01550 PRINT "A HOLE IN ONE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A HOLE IN ONE.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01560:
    // 01560 IF F=19 THEN 3240
    if(F_int==19)goto Lbl_03240;
    // 01570 S1=0
    S1_int = 0;
    // 01580 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01590:
    // 01590 IF S1=0 THEN 3080
    if(S1_int==0)goto Lbl_03080;
    // 01600 IF L(0)<1 THEN 2620
    if(L_int_arr[0]<1)goto Lbl_02620;
    // 01610 X=0
    X_int = 0;
    // 01620 IF L(0)>5 THEN 2660
    if(L_int_arr[0]>5)goto Lbl_02660;
    // 01630 PRINT "SHOT WENT";D1;"YARDS.  IT'S";D2;"YARDS FROM THE CUP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT WENT"); b2c_INT(buf,D1_int);strcat(buf,"YARDS.  IT'S"); b2c_INT(buf,D2_int);strcat(buf,"YARDS FROM THE CUP.");strcat(buf,"\n");fputs(buf,fh); };
    // 01640 PRINT "BALL IS";INT(O);"YARDS OFF LINE... IN ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BALL IS");b2c_INT(buf,INT(O_int));strcat(buf,"YARDS OFF LINE... IN ");fputs(buf,fh); };
    // 01650 GOSUB 3300
    Routine_03300();
    // 01660 GOTO 1690
    goto Lbl_01690;

  Lbl_01670:
    // 01670 PRINT "PGA HANDICAPS RANGE FROM 0 TO 30."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PGA HANDICAPS RANGE FROM 0 TO 30.");strcat(buf,"\n");fputs(buf,fh); };
    // 01680 GOTO 1200
    goto Lbl_01200;

  Lbl_01690:
    // 01690 IF A=1 THEN 1760
    if(A_int==1)goto Lbl_01760;
    // 01700 PRINT "SELECTION OF CLUBS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SELECTION OF CLUBS");strcat(buf,"\n");fputs(buf,fh); };
    // 01710 PRINT "YARDAGE DESIRED                       SUGGESTED CLUBS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YARDAGE DESIRED                       SUGGESTED CLUBS");strcat(buf,"\n");fputs(buf,fh); };
    // 01720 PRINT "200 TO 280 YARDS                           1 TO 4"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"200 TO 280 YARDS                           1 TO 4");strcat(buf,"\n");fputs(buf,fh); };
    // 01730 PRINT "100 TO 200 YARDS                          19 TO 13"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"100 TO 200 YARDS                          19 TO 13");strcat(buf,"\n");fputs(buf,fh); };
    // 01740 PRINT "  0 TO 100 YARDS                          29 TO 23"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  0 TO 100 YARDS                          29 TO 23");strcat(buf,"\n");fputs(buf,fh); };
    // 01750 A=1
    A_int = 1;

  Lbl_01760:
    // 01760 PRINT "WHAT CLUB DO YOU CHOOSE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT CLUB DO YOU CHOOSE");fputs(buf,fh); };
    // 01770 INPUT C
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
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01770
    // 01780 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01790 IF C<1 THEN 1870
    if(C_int<1)goto Lbl_01870;
    // 01800 IF C>29 THEN 1870
    if(C_int>29)goto Lbl_01870;
    // 01810 IF C>4 THEN 1900
    if(C_int>4)goto Lbl_01900;

  Lbl_01820:
    // 01820 IF L(0)<=5 THEN 1930
    if(L_int_arr[0]<=5)goto Lbl_01930;
    // 01830 IF C=14 THEN 1930
    if(C_int==14)goto Lbl_01930;
    // 01840 IF C=23 THEN 1930
    if(C_int==23)goto Lbl_01930;
    // 01850 GOTO 1870
    goto Lbl_01870;

  Lbl_01860:
    // 01860 S1=S1-1
    S1_int = S1_int-1;

  Lbl_01870:
    // 01870 PRINT "THAT CLUB IS NOT IN THE BAG."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT CLUB IS NOT IN THE BAG.");strcat(buf,"\n");fputs(buf,fh); };
    // 01880 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01890 GOTO 1690
    goto Lbl_01690;

  Lbl_01900:
    // 01900 IF C<12 THEN 1870
    if(C_int<12)goto Lbl_01870;
    // 01910 C=C-6
    C_int = C_int-6;
    // 01920 GOTO 1820
    goto Lbl_01820;

  Lbl_01930:
    // 01930 S1=S1+1
    S1_int = S1_int+1;
    // 01940 W=1
    W_int = 1;
    // 01950 IF C>13 THEN 2270
    if(C_int>13)goto Lbl_02270;
    // 01960 IF INT(F/3)=F/3 THEN 2220
    if(INT(F_int/3)==F_int/3)goto Lbl_02220;

  Lbl_01970:
    // 01970 IF C<4 THEN 1990
    if(C_int<4)goto Lbl_01990;
    // 01980 GOTO 2000
    goto Lbl_02000;

  Lbl_01990:
    // 01990 IF L(0)=2 THEN 2080
    if(L_int_arr[0]==2)goto Lbl_02080;

  Lbl_02000:
    // 02000 IF S1>7 THEN 2110
    if(S1_int>7)goto Lbl_02110;

  Lbl_02010:
    // 02010 D1=INT(((30-H)*2.5+187-((30-H)*.25+15)*C/2)+25*RND(1))
    D1_int = INT(((30-H_int)*2.5+187-((30-H_int)*0.25+15)*C_int/2)+25*RND(1));
    // 02020 D1=INT(D1*W)
    D1_int = INT(D1_int*W_int);
    // 02030 IF T=2 THEN 2640
    if(T_int==2)goto Lbl_02640;

  Lbl_02040:
    // 02040 O=(RND(1)/.8)*(2*H+16)*ABS(TAN(D1*.0035))
    O_int = (RND(1)/0.8)*(2*H_int+16)*ABS(TAN(D1_int*0.));
    // 02050 D2=INT(SQR(O^2+ABS(D-D1)^2))
    D2_int = INT(SQR(IPower(O_int,2)+IPower(ABS(D_int-D1_int),2)));
    // 02060 IF D-D1<0 THEN 2130
    if(D_int-D1_int<0)goto Lbl_02130;
    // 02070 GOTO 2150
    goto Lbl_02150;

  Lbl_02080:
    // 02080 PRINT "YOU DUBBED IT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU DUBBED IT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02090 D1=35
    D1_int = 35;
    // 02100 GOTO 2040
    goto Lbl_02040;

  Lbl_02110:
    // 02110 IF D<200 THEN 2770
    if(D_int<200)goto Lbl_02770;
    // 02120 GOTO 2010
    goto Lbl_02010;

  Lbl_02130:
    // 02130 IF D2<20 THEN 2150
    if(D2_int<20)goto Lbl_02150;
    // 02140 PRINT "TOO MUCH CLUB. YOU'RE PAST THE HOLE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO MUCH CLUB. YOU'RE PAST THE HOLE.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02150:
    // 02150 B=D
    B_int = D_int;
    // 02160 D=D2
    D_int = D2_int;
    // 02170 IF D2>27 THEN 2410
    if(D2_int>27)goto Lbl_02410;
    // 02180 IF D2>20 THEN 2570
    if(D2_int>20)goto Lbl_02570;
    // 02190 IF D2>.5 THEN 2590
    if(D2_int>0.5)goto Lbl_02590;
    // 02200 L(0)=9
    L_int_arr[0] = 9;
    // 02210 GOTO 2960
    goto Lbl_02960;

  Lbl_02220:
    // 02220 IF S2+Q+(10*(F-1)/18)<(F-1)*(72+((H+1)/.85))/18 THEN 2240
    if(S2_int+Q_int+(10*(F_int-1)/18)<(F_int-1)*(72+((H_int+1)/0.85))/18)goto Lbl_02240;
    // 02230 GOTO 1970
    goto Lbl_01970;

  Lbl_02240:
    // 02240 Q=Q+1
    Q_int = Q_int+1;
    // 02250 IF S1/2<>INT(S1/2) THEN 2370
    if(S1_int/2!=INT(S1_int/2))goto Lbl_02370;
    // 02260 GOTO 2080
    goto Lbl_02080;

  Lbl_02270:
    // 02270 PRINT "NOW GAUGE YOUR DISTANCE BY A PERCENTAGE (1 TO 100)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOW GAUGE YOUR DISTANCE BY A PERCENTAGE (1 TO 100)");strcat(buf,"\n");fputs(buf,fh); };
    // 02280 PRINT "OF A FULL SWING";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF A FULL SWING");fputs(buf,fh); };
    // 02290 INPUT W
    // Start of Basic INPUT statement 02290
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&W_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02290
    // 02300 W=W/100
    W_int = W_int/100;
    // 02310 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02320 IF W>1 THEN 1860
    if(W_int>1)goto Lbl_01860;
    // 02330 IF L(0)=5 THEN 2760
    if(L_int_arr[0]==5)goto Lbl_02760;
    // 02340 IF C=14 THEN 2000
    if(C_int==14)goto Lbl_02000;
    // 02350 C=C-10
    C_int = C_int-10;
    // 02360 GOTO 2000
    goto Lbl_02000;

  Lbl_02370:
    // 02370 IF D<95 THEN 2080
    if(D_int<95)goto Lbl_02080;
    // 02380 PRINT "BALL HIT TREE - BOUNCED INTO ROUGH";D-75;"YARDS FROM HOLE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BALL HIT TREE - BOUNCED INTO ROUGH"); b2c_INT(buf,D_int-75);strcat(buf,"YARDS FROM HOLE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02390 D=D-75
    D_int = D_int-75;
    // 02400 GOTO 1690
    goto Lbl_01690;

  Lbl_02410:
    // 02410 IF O<30 THEN 2620
    if(O_int<30)goto Lbl_02620;
    // 02420 IF J>0 THEN 2620
    if(J_int>0)goto Lbl_02620;
    // 02430 IF T>0 THEN 2500
    if(T_int>0)goto Lbl_02500;
    // 02440 S9=(S2+1)/15
    S9_int = (S2_int+1)/15;
    // 02450 IF INT(S9)=S9 THEN 2520
    if(INT(S9_int)==S9_int)goto Lbl_02520;

  Lbl_02460:
    // 02460 PRINT "YOU HOOKED- ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HOOKED- ");fputs(buf,fh); };
    // 02470 L(0)=L(2)
    L_int_arr[0] = L_int_arr[2];

  Lbl_02480:
    // 02480 IF O>45 THEN 2550
    if(O_int>45)goto Lbl_02550;
    // 02490 GOTO 1590
    goto Lbl_01590;

  Lbl_02500:
    // 02500 S9=(S2+1)/15
    S9_int = (S2_int+1)/15;
    // 02510 IF INT(S9)=S9 THEN 2460
    if(INT(S9_int)==S9_int)goto Lbl_02460;

  Lbl_02520:
    // 02520 PRINT "YOU SLICED- ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU SLICED- ");fputs(buf,fh); };
    // 02530 L(0)=L(1)
    L_int_arr[0] = L_int_arr[1];
    // 02540 GOTO 2480
    goto Lbl_02480;

  Lbl_02550:
    // 02550 PRINT "BADLY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BADLY.");strcat(buf,"\n");fputs(buf,fh); };
    // 02560 GOTO 1590
    goto Lbl_01590;

  Lbl_02570:
    // 02570 L(0)=5
    L_int_arr[0] = 5;
    // 02580 GOTO 1590
    goto Lbl_01590;

  Lbl_02590:
    // 02590 L(0)=8
    L_int_arr[0] = 8;
    // 02600 D2=INT(D2*3)
    D2_int = INT(D2_int*3);
    // 02610 GOTO 2850
    goto Lbl_02850;

  Lbl_02620:
    // 02620 L(0)=1
    L_int_arr[0] = 1;
    // 02630 GOTO 1590
    goto Lbl_01590;

  Lbl_02640:
    // 02640 D1=INT(.85*D1)
    D1_int = INT(0.85*D1_int);
    // 02650 GOTO 2040
    goto Lbl_02040;

  Lbl_02660:
    // 02660 IF L(0)>6 THEN 2740
    if(L_int_arr[0]>6)goto Lbl_02740;
    // 02670 PRINT "YOUR SHOT WENT INTO THE WATER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR SHOT WENT INTO THE WATER.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02680:
    // 02680 S1=S1+1
    S1_int = S1_int+1;
    // 02690 PRINT "PENALTY STROKE ASSESSED.  HIT FROM PREVIOUS LOCATION."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PENALTY STROKE ASSESSED.  HIT FROM PREVIOUS LOCATION.");strcat(buf,"\n");fputs(buf,fh); };
    // 02700 J=J+1
    J_int = J_int+1;
    // 02710 L(0)=1
    L_int_arr[0] = 1;
    // 02720 D=B
    D_int = B_int;
    // 02730 GOTO 1690
    goto Lbl_01690;

  Lbl_02740:
    // 02740 PRINT "YOUR SHOT WENT OUT OF BOUNDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR SHOT WENT OUT OF BOUNDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02750 GOTO 2680
    goto Lbl_02680;

  Lbl_02760:
    // 02760 IF T=3 THEN 2790
    if(T_int==3)goto Lbl_02790;

  Lbl_02770:
    // 02770 D2=1+(3*INT((80/(40-H))*RND(1)))
    D2_int = 1+(3*INT((80/(40-H_int))*RND(1)));
    // 02780 GOTO 2850
    goto Lbl_02850;

  Lbl_02790:
    // 02790 IF RND(1)>N THEN 2830
    if(RND(1)>N_int)goto Lbl_02830;
    // 02800 N=N*.2
    N_int = N_int*0.2;
    // 02810 PRINT "SHOT DUBBED, STILL IN TRAP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT DUBBED, STILL IN TRAP.");strcat(buf,"\n");fputs(buf,fh); };
    // 02820 GOTO 1690
    goto Lbl_01690;

  Lbl_02830:
    // 02830 N=.8
    N_int = 0.8;
    // 02840 GOTO 2770
    goto Lbl_02770;

  Lbl_02850:
    // 02850 PRINT "ON GREEN,";D2;"FEET FROM THE PIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ON GREEN,"); b2c_INT(buf,D2_int);strcat(buf,"FEET FROM THE PIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 02860 PRINT "CHOOSE YOUR PUTT POTENCY (1 TO 13):";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHOOSE YOUR PUTT POTENCY (1 TO 13):");fputs(buf,fh); };
    // 02870 INPUT I
    // Start of Basic INPUT statement 02870
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&I_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02870
    // 02880 S1=S1+1
    S1_int = S1_int+1;
    // 02890 IF S1+1-P>(H*.072)+2 THEN 2960
    if(S1_int+1-P_int>(H_int*0.07)+2)goto Lbl_02960;
    // 02900 IF K>2 THEN 2960
    if(K_int>2)goto Lbl_02960;
    // 02910 K=K+1
    K_int = K_int+1;
    // 02920 IF T=4 THEN 3030
    if(T_int==4)goto Lbl_03030;
    // 02930 D2=D2-I*(4+2*RND(1))+1.5
    D2_int = D2_int-I_int*(4+2*RND(1))+1.5;

  Lbl_02940:
    // 02940 IF D2<-2 THEN 3050
    if(D2_int<-2)goto Lbl_03050;
    // 02950 IF D2>2 THEN 3000
    if(D2_int>2)goto Lbl_03000;

  Lbl_02960:
    // 02960 PRINT "YOU HOLED IT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HOLED IT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02970 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02980 F=F+1
    F_int = F_int+1;
    // 02990 GOTO 1330
    goto Lbl_01330;

  Lbl_03000:
    // 03000 PRINT "PUTT SHORT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PUTT SHORT.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03010:
    // 03010 D2=INT(D2)
    D2_int = INT(D2_int);
    // 03020 GOTO 2850
    goto Lbl_02850;

  Lbl_03030:
    // 03030 D2=D2-I*(4+1*RND(1))+1
    D2_int = D2_int-I_int*(4+1*RND(1))+1;
    // 03040 GOTO 2940
    goto Lbl_02940;

  Lbl_03050:
    // 03050 PRINT "PASSED BY CUP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PASSED BY CUP.");strcat(buf,"\n");fputs(buf,fh); };
    // 03060 D2=-D2
    D2_int = D2_int;
    // 03070 GOTO 3010
    goto Lbl_03010;

  Lbl_03080:
    // 03080 READ D,P,L(1),L(2)
    D_int = Get_Data_Int();
    P_int = Get_Data_Int();
    L_int_arr[1] = Get_Data_Int();
    L_int_arr[2] = Get_Data_Int();
    // 03090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03100 PRINT "YOU ARE AT THE TEE OFF HOLE";F;"DISTANCE";D;"YARDS, PAR";P
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE AT THE TEE OFF HOLE"); b2c_INT(buf,F_int);strcat(buf,"DISTANCE"); b2c_INT(buf,D_int);strcat(buf,"YARDS, PAR"); b2c_INT(buf,P_int);strcat(buf,"\n");fputs(buf,fh); };
    // 03110 G3=G3+P
    G3_int = G3_int+P_int;
    // 03120 PRINT "ON YOUR RIGHT IS ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ON YOUR RIGHT IS ");fputs(buf,fh); };
    // 03130 X=1
    X_int = 1;
    // 03140 GOSUB 3300
    Routine_03300();
    // 03150 PRINT "ON YOUR LEFT IS ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ON YOUR LEFT IS ");fputs(buf,fh); };
    // 03160 X=2
    X_int = 2;
    // 03170 GOSUB 3300
    Routine_03300();
    // 03180 GOTO 1690
    goto Lbl_01690;
    // 03190 DATA 361,4,4,2,389,4,3,3,206,3,4,2,500,5,7,2
    // 03200 DATA 408,4,2,4,359,4,6,4,424,4,4,2,388,4,4,4
    // 03210 DATA 196,3,7,2,400,4,7,2,560,5,7,2,132,3,2,2
    // 03220 DATA 357,4,4,4,294,4,2,4,475,5,2,3,375,4,4,2
    // 03230 DATA 180,3,6,2,550,5,6,6

  Lbl_03240:
    // 03240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03250:
    // 03250 G2=G2+S1
    G2_int = G2_int+S1_int;
    // 03260 PRINT "TOTAL PAR FOR";F-1;"HOLES IS";G3;"  YOUR TOTAL IS";G2
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL PAR FOR"); b2c_INT(buf,F_int-1);strcat(buf,"HOLES IS"); b2c_INT(buf,G3_int);strcat(buf,"  YOUR TOTAL IS"); b2c_INT(buf,G2_int);strcat(buf,"\n");fputs(buf,fh); };
    // 03270 IF G1=F-1 THEN 3290
    if(G1_int==F_int-1)goto Lbl_03290;
    // 03280 GOTO 1410
    goto Lbl_01410;

  Lbl_03290:
    // 03290 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
