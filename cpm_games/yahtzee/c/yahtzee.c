/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/yahtzee.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58ae8c44fcf0 ---------A   00005 PRINT CHR$(26)
    0x58ae8c44eac0 ---------A   00007 PRINT TAB(25);"YAHTZEE"
    0x58ae8c44fe70 ---------A   00008 PRINT TAB(20);"CREATIVE COMPUTING"
    0x58ae8c44ff30 ---------A   00009 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x58ae8c44dd80 ---------A   00010 PRINT:PRINT "MODIFIED FOR THE OSBORNE-1 WITH PRINTER"
    0x58ae8c44f620 ---------A   00011 PRINT "BY PETER FLEMING, SFOG, 2/9/82"
    0x58ae8c4564e0 ---------A   00015 DIM C(5),K(14,7),F(4),H2(6),L2(6),B5(7),B8(7),A$(7)
    0x58ae8c456af0 ---------A   00020 PRINT CHR$(7):PRINT CHR$(7):PRINT CHR$(7)
    0x58ae8c456c60 ---------A T 00025 PRINT "THIS IS THE GAME OF YAHTZEE. DO YOU WANT COMMENTS";
    0x58ae8c44d5b0 ---------A   00030 INPUT B$:IF LEFT$(B$,1)="N" THEN 45
    0x58ae8c4575b0 ---------A   00033 IF LEFT$(B$,1)="Y" THEN 40
    0x58ae8c457670 ---------A   00035 GOSUB 935: GOTO 25
    0x58ae8c4576f0 ---------A T 00040 GOSUB 995
    0x58ae8c457a40 ---------A T 00045 PRINT:PRINT "HOW MANY PLAYERS";:INPUT N
    0x58ae8c457ca0 ---------A   00050 IF N<1 THEN 45
    0x58ae8c457f20 ---------A   00053 IF N<=7 THEN 75
    0x58ae8c458060 ---------A   00055 PRINT "THE MAXIMUM NUMBER OF PLAYERS IS 7."
    0x58ae8c4580d0 ---------A   00070 GOTO 45
    0x58ae8c458490 ---------A T 00075 FOR A0=1 TO N
    0x58ae8c458a40 ---------A   00080 PRINT "NAME OF PLAYER #";A0;:INPUT A$(A0):NEXT A0
    0x58ae8c458d90 ---------A T 00085 PRINT:PRINT "WOULD YOU LIKE A PRINTED SCORECARD";:INPUT B$
    0x58ae8c4591c0 ---------A   00090 IF LEFT$(B$,1)="N" THEN 100
    0x58ae8c4595e0 ---------A   00093 IF LEFT$(B$,1)="Y" THEN 945
    0x58ae8c4596b0 ---------A   00095 GOSUB 935:GOTO 85
    0x58ae8c45a0e0 ---------A T 00100 H=0:PRINT:A=A+1:IF A<>N+1 THEN 105
    0x58ae8c45a320 ---------A   00104 A=1
    0x58ae8c45aee0 ---------A T 00105 FOR B=1 TO 5:C(B)=INT(6*RND(1))+1:NEXT B:PRINT
    0x58ae8c45b5b0 ---------A T 00110 PRINT:PRINT A$(A);"'S NUMBERS:  ";:H=H+1
    0x58ae8c45c110 ---------A   00115 PRINT C(1);C(2);C(3);C(4);C(5):IF H=3 THEN 210
    0x58ae8c45c490 ---------A T 00120 PRINT "HOW MANY DICE TO CHANGE";:INPUT E
    0x58ae8c45c6f0 ---------A   00125 IF E<>25 THEN 130
    0x58ae8c45c7b0 ---------A   00127 GOSUB 1020:GOTO 120
    0x58ae8c45c9f0 ---------A T 00130 IF E>5 THEN 120
    0x58ae8c45ce70 ---------A   00135 IF E<0 THEN 120
    0x58ae8c45d1d0 ---------A   00137 IF INT(E)<>E THEN 120
    0x58ae8c45d430 ---------A   00140 IF E=0 THEN 210
    0x58ae8c45d6a0 ---------A   00143 IF E=5 THEN 105
    0x58ae8c45de30 ---------A   00145 FOR F3=1 TO 4:F(F3)=0:NEXT F3
    0x58ae8c45dfd0 ---------A T 00150 PRINT "WHICH DICE TO CHANGE";
    0x58ae8c45e420 ---------A   00155 ON E GOTO 160,165,170,175
    0x58ae8c45e6a0 ---------A T 00160 INPUT F(1):GOTO 180
    0x58ae8c45eab0 ---------A T 00165 INPUT F(1),F(2):GOTO 180
    0x58ae8c45f060 ---------A T 00170 INPUT F(1),F(2),F(3):GOTO 180
    0x58ae8c45f760 ---------A T 00175 INPUT F(1),F(2),F(3),F(4)
    0x58ae8c4602d0 ---------A T 00180 FOR F1=1 TO 4:F(F1)=INT(F(F1)):IF F(F1)>5 THEN 150
    0x58ae8c460610 ---------A   00185 IF F(F1)<0 THEN 150
    0x58ae8c460750 ---------A   00187 NEXT F1
    0x58ae8c460e30 ---------A   00190 FOR F2=1 TO 4:IF F(F2)=0 THEN 200
    0x58ae8c4615d0 ---------A   00195 C(F(F2))=INT(6*RND(1))+1
    0x58ae8c461700 ---------A T 00200 NEXT F2
    0x58ae8c4617a0 ---------A   00205 GOTO 110
    0x58ae8c461ae0 ---------A T 00210 PRINT A$(A);" -- SCOREBOARD NUMBER";
    0x58ae8c461cf0 ---------A   00215 INPUT I
    0x58ae8c461f50 ---------A   00220 IF I<>25 THEN 225 
    0x58ae8c462010 ---------A   00223 GOSUB 1020:GOTO 210
    0x58ae8c462260 ---------A T 00225 IF I<1 THEN 210
    0x58ae8c4627c0 ---------A   00227 I=INT(I):IF I<14 THEN 245
    0x58ae8c462a80 ---------A T 00230 PRINT "CONFIRM";:INPUT B$
    0x58ae8c462eb0 ---------A   00235 IF LEFT$(B$,1)="N" THEN 210
    0x58ae8c4632d0 ---------A   00237 IF LEFT$(B$,1)="Y" THEN 735
    0x58ae8c4633a0 ---------A   00240 GOSUB 935:GOTO 230
    0x58ae8c4637c0 ---------A T 00245 IF K(I,A)=0 THEN 260
    0x58ae8c463c50 ---------A   00250 PRINT A$(A);", YOU HAVE ALREADY USED ROW #";I;
    0x58ae8c4642b0 ---------A   00255 PRINT "YOU HAVE"K(I,A);"POINTS IN ROW #";I:GOTO 210
    0x58ae8c464500 ---------A T 00260 IF I>6 THEN 305
    0x58ae8c4649a0 ---------A   00265 REM***CATEGORIES ONE THOUGH SIX
    0x58ae8c464bd0 ---------A   00270 K=0
    0x58ae8c4652a0 ---------A   00275 FOR G=1 TO 5:IF C(G)<>I THEN 280
    0x58ae8c465610 ---------A   00277 K=K+I
    0x58ae8c465980 ---------A T 00280 NEXT G:IF K=0 THEN 295
    0x58ae8c465c00 ---------A   00283 IF K<>1 THEN 300
    0x58ae8c465f50 ---------A   00285 PRINT A$(A);", YOU HAVE 1 POINT IN ROW # 1 (ACES)"
    0x58ae8c466350 ---------A   00290 K(1,A)=1:GOTO 720
    0x58ae8c466760 ---------A T 00295 K(I,A)=.4:GOTO 620
    0x58ae8c466bb0 ---------A T 00300 K(I,A)=K:GOTO 620
    0x58ae8c467350 ---------A T 00305 ON I-6 GOTO 315,320,400,485,485,325,605
    0x58ae8c4673e0 ---------A   00310 REM ***3 OF A KIND, 4 OF A KIND, YAHTZEE
    0x58ae8c468260 ---------A T 00315 R=3:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 330
    0x58ae8c468f00 ---------A T 00320 R=4:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 330
    0x58ae8c469300 ---------A T 00325 R=5:T=50
    0x58ae8c469a80 ---------A T 00330 FOR H3=1 TO 6:H2(H3)=0:NEXT H3
    0x58ae8c46a100 ---------A   00335 FOR H=1 TO 6:FOR H1=1 TO 5
    0x58ae8c46a460 ---------A   00340 IF C(H1)<>H THEN 350
    0x58ae8c46a960 ---------A   00345 H2(H)=H2(H)+1
    0x58ae8c46abb0 ---------A T 00350 NEXT H1:NEXT H
    0x58ae8c46af60 ---------A   00355 FOR H4=1 TO 6
    0x58ae8c46b2d0 ---------A   00360 IF H2(H4)>=R THEN 370
    0x58ae8c46b830 ---------A   00365 NEXT H4:K(I,A)=.4:GOTO 620
    0x58ae8c46bc40 ---------A T 00370 IF K(I,A)=50 THEN 380
    0x58ae8c46c2a0 ---------A   00375 K(I,A)=T:IF I<>12 THEN 395
    0x58ae8c46cd50 ---------A T 00380 PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x58ae8c46d200 ---------A   00385 PRINT "CONGRATULATIONS, ";A$(A);", YOU HAVE A YAHTZEE!!!"
    0x58ae8c46dbe0 ---------A   00390 PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x58ae8c46dc60 ---------A T 00395 GOTO 620
    0x58ae8c46dcc0 ---------A T 00400 REM ***FULL HOUSE
    0x58ae8c46e9d0 ---------A   00405 L4=0:L5=0:FOR L=1 TO 6:L2(L)=0:NEXT L
    0x58ae8c46f050 ---------A   00410 FOR L=1 TO 6:FOR L1=1 TO 5
    0x58ae8c46f3b0 ---------A   00415 IF C(L1)<>L THEN 425
    0x58ae8c46f8b0 ---------A   00420 L2(L)=L2(L)+1
    0x58ae8c46fb00 ---------A T 00425 NEXT L1:NEXT L
    0x58ae8c46fea0 ---------A   00430 FOR L3=1 TO 6
    0x58ae8c470110 ---------A   00435 IF L5=1 THEN 450
    0x58ae8c470450 ---------A   00440 IF L2(L3)<>2 THEN 450
    0x58ae8c4707f0 ---------A   00445 L5=L5+1:GOTO 455
    0x58ae8c470b10 ---------A T 00450 IF L2(L3)<>3 THEN 460
    0x58ae8c470e50 ---------A T 00455 L4=L4+1
    0x58ae8c470f80 ---------A T 00460 NEXT L3
    0x58ae8c4711e0 ---------A   00465 IF L4=2 THEN 475
    0x58ae8c4715f0 ---------A   00470 K(9,A)=.4:GOTO 620
    0x58ae8c4719e0 ---------A T 00475 K(9,A)=25:GOTO 620
    0x58ae8c471a60 ----------   00480 GOTO 620
    0x58ae8c471ad0 ---------A T 00485 REM ***PUT NUMBERS IN ORDER, STRAIGHTS
    0x58ae8c472210 ---------A   00490 FOR M2=1 TO 4:FOR M1=1 TO 4
    0x58ae8c472760 ---------A   00495 IF C(M1+1)>=C(M1) THEN 507
    0x58ae8c473400 ---------A   00500 Z=C(M1):C(M1)=C(M1+1):C(M1+1)=Z
    0x58ae8c473650 ---------A T 00507 NEXT M1:NEXT M2
    0x58ae8c473930 ---------A   00510 G1=1
    0x58ae8c473cc0 ---------A   00515 FOR X=2 TO 5
    0x58ae8c474170 ---------A   00517 K(13,A)=Y1
    0x58ae8c4747a0 ---------A   00525 IF C(X-1)+1<>C(X) THEN 540
    0x58ae8c474ae0 ---------A   00530 G1=G1+1
    0x58ae8c474c10 ---------A T 00540 NEXT X
    0x58ae8c474e70 ---------A   00545 IF I=11 THEN 560
    0x58ae8c4750d0 ---------A   00550 IF G1<4 THEN 570
    0x58ae8c475500 ---------A   00555 K(I,A)=30:GOTO 620
    0x58ae8c475740 ---------A T 00560 IF G1<>5 THEN 570
    0x58ae8c475b70 ---------A   00565 K(I,A)=40:GOTO 620
    0x58ae8c475f80 ---------A T 00570 K(I,A)=.4:GOTO 620
    0x58ae8c475fe0 ---------A T 00605 REM ***CHANCE
    0x58ae8c476a30 ---------A   00610 Y1=0
    0x58ae8c4776e0 ---------A   00615 FOR Y=1 TO 5:Y1=C(Y)+Y1:NEXT Y:K(13,A)=Y1
    0x58ae8c4780d0 ---------A T 00620 PRINT A$(A);", YOU NOW HAVE";INT(K(I,A));"POINTS IN ROW #";I;", ";
    0x58ae8c478240 ---------A   00625 PRINT "(";
    0x58ae8c4784a0 ---------A T 00630 IF I>6 THEN 640
    0x58ae8c478aa0 ---------A   00635 ON I GOTO 645,650,655,660,665,670
    0x58ae8c479240 ---------A T 00640 ON I-6 GOTO 675,680,685,690,695,700,705
    0x58ae8c479410 ---------A T 00645 PRINT "(1)ACES";:GOTO 710
    0x58ae8c4795d0 ---------A T 00650 PRINT "(2)TWOS";:GOTO 710
    0x58ae8c479790 ---------A T 00655 PRINT "(3)THREES";:GOTO 710
    0x58ae8c479950 ---------A T 00660 PRINT "(4)FOURS";:GOTO 710
    0x58ae8c479b10 ---------A T 00665 PRINT "(5)FIVES";:GOTO 710
    0x58ae8c479cd0 ---------A T 00670 PRINT "(6)SIXES";:GOTO 710
    0x58ae8c479e90 ---------A T 00675 PRINT "(7)3 OF A KIND";:GOTO 710
    0x58ae8c47a050 ---------A T 00680 PRINT "(8)4 OF A KIND";:GOTO 710
    0x58ae8c47a220 ---------A T 00685 PRINT "(9)FULL HOUSE";:GOTO 710
    0x58ae8c47a430 ---------A T 00690 PRINT "(10)SMALL STRAIGHT";:RESTORE:GOTO 710
    0x58ae8c47a5f0 ---------A T 00695 PRINT "(11)LARGE STRAIGHT";:GOTO 710
    0x58ae8c47a7a0 ---------A T 00700 PRINT "(12)YAHTZEE";:GOTO 710
    0x58ae8c47a900 ---------A T 00705 PRINT "(13)CHANCE";
    0x58ae8c47ab50 ---------A T 00710 IF E=25 THEN 1030
    0x58ae8c47ae70 ---------A   00713 IF I0=25 THEN 1030
    0x58ae8c47afe0 ---------A   00715 PRINT ")"
    0x58ae8c47b660 ---------A T 00720 FOR B=1 TO N:FOR B1=1 TO 13
    0x58ae8c47ba80 ---------A   00725 IF K(B1,B)=0 THEN 100
    0x58ae8c47bce0 ---------A   00730 NEXT B1:NEXT B
    0x58ae8c47c780 ---------A T 00735 FOR B3=1 TO N:B5(B3)=0:B8(B3)=0:NEXT B3
    0x58ae8c47c810 ---------A   00740 PRINT
    0x58ae8c47ce90 ---------A   00745 FOR B3=1 TO N:FOR B4=1 TO 6
    0x58ae8c47d650 ---------A   00750 B5(B3)=B5(B3)+INT(K(B4,B3))
    0x58ae8c47d8a0 ---------A   00755 NEXT B4:NEXT B3
    0x58ae8c47e000 ---------A   00760 FOR B6=1 TO N:FOR B7=7 TO 13
    0x58ae8c47e7c0 ---------A   00765 B8(B6)=B8(B6)+INT(K(B7,B6))
    0x58ae8c47ea10 ---------A   00770 NEXT B7:NEXT B6
    0x58ae8c47ed20 ---------A   00775 FOR B3=1 TO N
    0x58ae8c47f060 ---------A   00780 IF B5(B3)<63 THEN 790
    0x58ae8c47f420 ---------A   00785 K(14,B3)=35
    0x58ae8c47f550 ---------A T 00790 NEXT B3
    0x58ae8c47f840 ---------A   00795 LINE INPUT "ENTER 'RETURN' WHEN PRINTER IS READY. ";XX$:GOSUB 940
    0x58ae8c47fc10 ---------A   00800 FOR A9=1 TO N
    0x58ae8c480300 ---------A   00810 LPRINT TAB(19);A$(A9);"'S TOTALS":LPRINT TAB(19);"***************"
    0x58ae8c480390 ---------A   00815 LPRINT
    0x58ae8c480880 ---------A   00820 LPRINT "ACES-----------";INT(K(1,A9))
    0x58ae8c480d70 ---------A   00825 LPRINT "TWOS-----------";INT(K(2,A9))
    0x58ae8c481260 ---------A   00830 LPRINT "THREES---------";INT(K(3,A9))
    0x58ae8c481750 ---------A   00835 LPRINT "FOURS----------";INT(K(4,A9))
    0x58ae8c481c40 ---------A   00840 LPRINT "FIVES----------";INT(K(5,A9))
    0x58ae8c482130 ---------A   00845 LPRINT "SIXES----------";INT(K(6,A9))
    0x58ae8c482620 ---------A   00850 LPRINT "3 OF A KIND----";INT(K(7,A9))
    0x58ae8c482b10 ---------A   00855 LPRINT "4 OF A KIND----";INT(K(8,A9))
    0x58ae8c483000 ---------A   00860 LPRINT "FULL HOUSE-----";INT(K(9,A9))
    0x58ae8c4834f0 ---------A   00865 LPRINT "SM. STRAIGHT---";INT(K(10,A9))
    0x58ae8c4839e0 ---------A   00870 LPRINT "LG. STRAIGHT---";INT(K(11,A9))
    0x58ae8c483ed0 ---------A   00875 LPRINT "YAHTZEE--------";INT(K(12,A9))
    0x58ae8c4843c0 ---------A   00880 LPRINT "CHANCE---------";INT(K(13,A9))
    0x58ae8c484770 ---------A   00885 LPRINT:LPRINT "TOTAL OF UPPER HALF------";B5(A9)
    0x58ae8c484be0 ---------A   00890 LPRINT:LPRINT "BONUS--------------------";K(14,A9)
    0x58ae8c484f70 ---------A   00895 LPRINT:LPRINT "TOTAL OF LOWER HALF------";B8(A9)
    0x58ae8c484ff0 ---------A   00900 LPRINT
    0x58ae8c4858b0 ---------A   00905 B9=B5(A9)+B8(A9)+K(14,A9)
    0x58ae8c485d00 ---------A   00910 LPRINT A$(A9);"'S GRAND TOTAL--------------------------";B9
    0x58ae8c485d70 ---------A   00915 GOSUB 940
    0x58ae8c485e90 ---------A   00920 NEXT A9
    0x58ae8c4860f0 ---------A   00925 IF I>13 THEN 210
    0x58ae8c486190 ---------A   00930 GOTO 1040
    0x58ae8c486300 ----------   00935 PRINT "ANSWER WITH YES OR NO":RETURN
    0x58ae8c486900 ---------B G 00940 FOR E=1 TO 72:LPRINT "-";:NEXT E:LPRINT:RETURN
    0x58ae8c4869b0 ---------A T 00945 GOSUB 940
    0x58ae8c486ce0 ---------A   00950 LPRINT "1**ACES":GOSUB 940:LPRINT "2**TWOS":GOSUB 940
    0x58ae8c487010 ---------A   00955 LPRINT "3**THREES":GOSUB 940:LPRINT "4**FOURS":GOSUB 940
    0x58ae8c487340 ---------A   00960 LPRINT "5**FIVES":GOSUB 940:LPRINT "6**SIXES":GOSUB 940
    0x58ae8c487680 ---------A   00965 LPRINT "7**3 OF A KIND":GOSUB 940:LPRINT "8**4 OF A KIND":GOSUB 940
    0x58ae8c4879b0 ---------A   00970 LPRINT "9**FULL HOUSE":GOSUB 940:LPRINT "10**SM. STRAIGHT":GOSUB 940
    0x58ae8c487cc0 ---------A   00975 LPRINT "11**LG. STRAIGHT":GOSUB 940:LPRINT "12**YAHTZEE":GOSUB 940
    0x58ae8c487e90 ---------A   00980 LPRINT "13**CHANCE":GOSUB 940
    0x58ae8c4886d0 ---------A   00985 FOR E1=1 TO 8:LPRINT:NEXT E1:PRINT CHR$(26):PRINT "TEAR OFF SCORECARD"
    0x58ae8c488a90 ---------A   00990 PRINT "AND HIT 'RETURN'!":INPUT Q:GOTO 100
    0x58ae8c488c20 ---------C G 00995 PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    0x58ae8c488dc0 ---------C   01000 PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    0x58ae8c488f60 ---------C   01005 PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    0x58ae8c4890d0 ---------C   01010 PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    0x58ae8c489120 ---------C   01015 RETURN
    0x58ae8c489530 ----------   01020 PRINT:PRINT A$(A);", YOU HAVE THE FOLLOWING SCOREBOARD OPTIONS LEFT:"
    0x58ae8c489df0 ----------   01025 I0=25:FOR I=1 TO 13:IF K(I,A)=0 THEN 630
    0x58ae8c489e70 ----------   01027 GOTO 1035
    0x58ae8c489fe0 ---------A T 01030 PRINT "  ";
    0x58ae8c48a350 ---------A T 01035 IF POS(0) > 50 THEN PRINT
    0x58ae8c48a760 ---------A   01036 NEXT I:PRINT:PRINT:I0=0:RETURN
    0x58ae8c48aa00 ---------A T 01040 PRINT CHR$(26):PRINT
    0x58ae8c48ada0 ---------A T 01041 PRINT:PRINT "ANOTHER GAME?===> ":INPUT YN$
    0x58ae8c48b1d0 ---------A   01045 IF LEFT$(YN$,1)="Y" THEN 45
    0x58ae8c48b600 ---------A   01050 IF LEFT$(YN$,1)="N" THEN 1060
    0x58ae8c48b6c0 ---------A   01055 GOSUB 935:GOTO 1041
    0x58ae8c48b700 ---------A T 01060 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00025      00035T
     00040      00033T
     00045      00030T, 00050T, 00070T, 01045T
     00075      00053T
     00085      00095T
     00100      00090T, 00725T, 00990T
     00105      00100T, 00143T
     00110      00205T
     00120      00127T, 00130T, 00135T, 00137T
     00130      00125T
     00150      00180T, 00185T
     00160      00155T
     00165      00155T
     00170      00155T
     00175      00155T
     00180      00160T, 00165T, 00170T
     00200      00190T
     00210      00115T, 00140T, 00223T, 00225T, 00235T, 00255T, 00925T
     00225      00220T
     00230      00240T
     00245      00227T
     00260      00245T
     00280      00275T
     00295      00280T
     00300      00283T
     00305      00260T
     00315      00305T
     00320      00305T
     00325      00305T
     00330      00315T, 00320T
     00350      00340T
     00370      00360T
     00380      00370T
     00395      00375T
     00400      00305T
     00425      00415T
     00450      00435T, 00440T
     00455      00445T
     00460      00450T
     00475      00465T
     00485      00305T, 00305T
     00507      00495T
     00540      00525T
     00560      00545T
     00570      00550T, 00560T
     00605      00305T
     00620      00295T, 00300T, 00365T, 00395T, 00470T, 00475T, 00480T, 00555T, 
                00565T, 00570T
     00630      01025T
     00640      00630T
     00645      00635T
     00650      00635T
     00655      00635T
     00660      00635T
     00665      00635T
     00670      00635T
     00675      00640T
     00680      00640T
     00685      00640T
     00690      00640T
     00695      00640T
     00700      00640T
     00705      00640T
     00710      00645T, 00650T, 00655T, 00660T, 00665T, 00670T, 00675T, 00680T, 
                00685T, 00690T, 00695T, 00700T
     00720      00290T
     00735      00237T
     00790      00780T
     00940      00795G, 00915G, 00945G, 00950G, 00955G, 00960G, 00965G, 00970G, 
                00975G, 00980G
     00945      00093T
     00995      00040G
     01030      00710T, 00713T
     01035      01027T
     01040      00930T
     01041      01055T
     01060      01050T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x58ae8c44fcf0 (00005)   0x000000000000 (00000)   0x58ae8c48b700 (01060)   0x58ae8c48b700 (01060)   
   B) 0x58ae8c486900 (00940)   0x58ae8c486900 (00940)   0x58ae8c486900 (00940)   0x58ae8c486900 (00940)   
   C) 0x58ae8c488c20 (00995)   0x58ae8c488c20 (00995)   0x58ae8c489120 (01015)   0x58ae8c489120 (01015)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03200 - 10000    6810 

 */



/*
 *  Symbol Table Listing for 'basic/yahtzee.bas'
 *
    A                        Float       
    A$              Array    String          {0,6} 
    A0                       Float       
    A9                       Float       
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
    B$                       String      
    B1                       Float       
    B3                       Float       
    B4                       Float       
    B5              Array    Float           {0,6} 
    B6                       Float       
    B7                       Float       
    B8              Array    Float           {0,6} 
    B9                       Float       
    C               Array    Float           {0,4} 
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    E                        Float       
    E1                       Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F               Array    Float           {0,3} 
    F1                       Float       
    F2                       Float       
    F3                       Float       
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Float       
    G1                       Float       
    H                        Float       
    H1                       Float       
    H2              Array    Float           {0,5} 
    H3                       Float       
    H4                       Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    I0                       Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K               Array    Float           {0,13} {0,6} 
    L                        Float       
    L1                       Float       
    L2              Array    Float           {0,5} 
    L3                       Float       
    L4                       Float       
    L5                       Float       
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M1                       Float       
    M2                       Float       
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Float       
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Float       
    R                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
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
    V4                       Float       
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    XX$                      String      
    Y                        Float       
    Y1                       Float       
    YN$                      String      
    Z                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/yahtzee.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58ae8c44fcf0 ---------A   01000 PRINT CHR$(26)
    0x58ae8c44eac0 ---------A   01010 PRINT TAB(25);"YAHTZEE"
    0x58ae8c44fe70 ---------A   01020 PRINT TAB(20);"CREATIVE COMPUTING"
    0x58ae8c44ff30 ---------A   01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x58ae8c44dd80 ---------A   01040 PRINT:PRINT "MODIFIED FOR THE OSBORNE-1 WITH PRINTER"
    0x58ae8c44f620 ---------A   01050 PRINT "BY PETER FLEMING, SFOG, 2/9/82"
    0x58ae8c4564e0 ---------A   01060 DIM C(5),K(14,7),F(4),H2(6),L2(6),B5(7),B8(7),A$(7)
    0x58ae8c456af0 ---------A   01070 PRINT CHR$(7):PRINT CHR$(7):PRINT CHR$(7)
    0x58ae8c456c60 ---------A T 01080 PRINT "THIS IS THE GAME OF YAHTZEE. DO YOU WANT COMMENTS";
    0x58ae8c44d5b0 ---------A   01090 INPUT B$:IF LEFT$(B$,1)="N" THEN 1130
    0x58ae8c4575b0 ---------A   01100 IF LEFT$(B$,1)="Y" THEN 1120
    0x58ae8c457670 ---------A   01110 GOSUB 91110: GOTO 1080
    0x58ae8c4576f0 ---------A T 01120 GOSUB 3140
    0x58ae8c457a40 ---------A T 01130 PRINT:PRINT "HOW MANY PLAYERS";:INPUT N
    0x58ae8c457ca0 ---------A   01140 IF N<1 THEN 1130
    0x58ae8c457f20 ---------A   01150 IF N<=7 THEN 1180
    0x58ae8c458060 ---------A   01160 PRINT "THE MAXIMUM NUMBER OF PLAYERS IS 7."
    0x58ae8c4580d0 ---------A   01170 GOTO 1130
    0x58ae8c458490 ---------A T 01180 FOR A0=1 TO N
    0x58ae8c458a40 ---------A   01190 PRINT "NAME OF PLAYER #";A0;:INPUT A$(A0):NEXT A0
    0x58ae8c458d90 ---------A T 01200 PRINT:PRINT "WOULD YOU LIKE A PRINTED SCORECARD";:INPUT B$
    0x58ae8c4591c0 ---------A   01210 IF LEFT$(B$,1)="N" THEN 1240
    0x58ae8c4595e0 ---------A   01220 IF LEFT$(B$,1)="Y" THEN 2930
    0x58ae8c4596b0 ---------A   01230 GOSUB 935:GOTO 1200
    0x58ae8c45a0e0 ---------A T 01240 H=0:PRINT:A=A+1:IF A<>N+1 THEN 1260
    0x58ae8c45a320 ---------A   01250 A=1
    0x58ae8c45aee0 ---------A T 01260 FOR B=1 TO 5:C(B)=INT(6*RND(1))+1:NEXT B:PRINT
    0x58ae8c45b5b0 ---------A T 01270 PRINT:PRINT A$(A);"'S NUMBERS:  ";:H=H+1
    0x58ae8c45c110 ---------A   01280 PRINT C(1);C(2);C(3);C(4);C(5):IF H=3 THEN 1510
    0x58ae8c45c490 ---------A T 01290 PRINT "HOW MANY DICE TO CHANGE";:INPUT E
    0x58ae8c45c6f0 ---------A   01300 IF E<>25 THEN 1320
    0x58ae8c45c7b0 ---------A   01310 GOSUB 1020:GOTO 1290
    0x58ae8c45c9f0 ---------A T 01320 IF E>5 THEN 1290
    0x58ae8c45ce70 ---------A   01330 IF E<0 THEN 1290
    0x58ae8c45d1d0 ---------A   01340 IF INT(E)<>E THEN 1290
    0x58ae8c45d430 ---------A   01350 IF E=0 THEN 1510
    0x58ae8c45d6a0 ---------A   01360 IF E=5 THEN 1260
    0x58ae8c45de30 ---------A   01370 FOR F3=1 TO 4:F(F3)=0:NEXT F3
    0x58ae8c45dfd0 ---------A T 01380 PRINT "WHICH DICE TO CHANGE";
    0x58ae8c45e420 ---------A   01390 ON E GOTO 1400,1410,1420,1430
    0x58ae8c45e6a0 ---------A T 01400 INPUT F(1):GOTO 1440
    0x58ae8c45eab0 ---------A T 01410 INPUT F(1),F(2):GOTO 1440
    0x58ae8c45f060 ---------A T 01420 INPUT F(1),F(2),F(3):GOTO 1440
    0x58ae8c45f760 ---------A T 01430 INPUT F(1),F(2),F(3),F(4)
    0x58ae8c4602d0 ---------A T 01440 FOR F1=1 TO 4:F(F1)=INT(F(F1)):IF F(F1)>5 THEN 1380
    0x58ae8c460610 ---------A   01450 IF F(F1)<0 THEN 1380
    0x58ae8c460750 ---------A   01460 NEXT F1
    0x58ae8c460e30 ---------A   01470 FOR F2=1 TO 4:IF F(F2)=0 THEN 1490
    0x58ae8c4615d0 ---------A   01480 C(F(F2))=INT(6*RND(1))+1
    0x58ae8c461700 ---------A T 01490 NEXT F2
    0x58ae8c4617a0 ---------A   01500 GOTO 1270
    0x58ae8c461ae0 ---------A T 01510 PRINT A$(A);" -- SCOREBOARD NUMBER";
    0x58ae8c461cf0 ---------A   01520 INPUT I
    0x58ae8c461f50 ---------A   01530 IF I<>25 THEN 1550 
    0x58ae8c462010 ---------A   01540 GOSUB 1020:GOTO 1510
    0x58ae8c462260 ---------A T 01550 IF I<1 THEN 1510
    0x58ae8c4627c0 ---------A   01560 I=INT(I):IF I<14 THEN 1610
    0x58ae8c462a80 ---------A T 01570 PRINT "CONFIRM";:INPUT B$
    0x58ae8c462eb0 ---------A   01580 IF LEFT$(B$,1)="N" THEN 1510
    0x58ae8c4632d0 ---------A   01590 IF LEFT$(B$,1)="Y" THEN 2540
    0x58ae8c4633a0 ---------A   01600 GOSUB 935:GOTO 1570
    0x58ae8c4637c0 ---------A T 01610 IF K(I,A)=0 THEN 1640
    0x58ae8c463c50 ---------A   01620 PRINT A$(A);", YOU HAVE ALREADY USED ROW #";I;
    0x58ae8c4642b0 ---------A   01630 PRINT "YOU HAVE"K(I,A);"POINTS IN ROW #";I:GOTO 1510
    0x58ae8c464500 ---------A T 01640 IF I>6 THEN 1750
    0x58ae8c4649a0 ---------A   01650 REM***CATEGORIES ONE THOUGH SIX
    0x58ae8c464bd0 ---------A   01660 K=0
    0x58ae8c4652a0 ---------A   01670 FOR G=1 TO 5:IF C(G)<>I THEN 1690
    0x58ae8c465610 ---------A   01680 K=K+I
    0x58ae8c465980 ---------A T 01690 NEXT G:IF K=0 THEN 1730
    0x58ae8c465c00 ---------A   01700 IF K<>1 THEN 1740
    0x58ae8c465f50 ---------A   01710 PRINT A$(A);", YOU HAVE 1 POINT IN ROW # 1 (ACES)"
    0x58ae8c466350 ---------A   01720 K(1,A)=1:GOTO 2510
    0x58ae8c466760 ---------A T 01730 K(I,A)=.4:GOTO 2300
    0x58ae8c466bb0 ---------A T 01740 K(I,A)=K:GOTO 2300
    0x58ae8c467350 ---------A T 01750 ON I-6 GOTO 1770,1780,1950,2110,485,1790,2280
    0x58ae8c4673e0 ---------A   01760 REM ***3 OF A KIND, 4 OF A KIND, YAHTZEE
    0x58ae8c468260 ---------A T 01770 R=3:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 1800
    0x58ae8c468f00 ---------A T 01780 R=4:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 1800
    0x58ae8c469300 ---------A T 01790 R=5:T=50
    0x58ae8c469a80 ---------A T 01800 FOR H3=1 TO 6:H2(H3)=0:NEXT H3
    0x58ae8c46a100 ---------A   01810 FOR H=1 TO 6:FOR H1=1 TO 5
    0x58ae8c46a460 ---------A   01820 IF C(H1)<>H THEN 1840
    0x58ae8c46a960 ---------A   01830 H2(H)=H2(H)+1
    0x58ae8c46abb0 ---------A T 01840 NEXT H1:NEXT H
    0x58ae8c46af60 ---------A   01850 FOR H4=1 TO 6
    0x58ae8c46b2d0 ---------A   01860 IF H2(H4)>=R THEN 1880
    0x58ae8c46b830 ---------A   01870 NEXT H4:K(I,A)=.4:GOTO 2300
    0x58ae8c46bc40 ---------A T 01880 IF K(I,A)=50 THEN 1900
    0x58ae8c46c2a0 ---------A   01890 K(I,A)=T:IF I<>12 THEN 1930
    0x58ae8c46cd50 ---------A T 01900 PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x58ae8c46d200 ---------A   01910 PRINT "CONGRATULATIONS, ";A$(A);", YOU HAVE A YAHTZEE!!!"
    0x58ae8c46dbe0 ---------A   01920 PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x58ae8c46dc60 ---------A T 01930 GOTO 2300
    0x58ae8c46dcc0 ---------A   01940 REM ***FULL HOUSE
    0x58ae8c46e9d0 ---------A T 01950 L4=0:L5=0:FOR L=1 TO 6:L2(L)=0:NEXT L
    0x58ae8c46f050 ---------A   01960 FOR L=1 TO 6:FOR L1=1 TO 5
    0x58ae8c46f3b0 ---------A   01970 IF C(L1)<>L THEN 1990
    0x58ae8c46f8b0 ---------A   01980 L2(L)=L2(L)+1
    0x58ae8c46fb00 ---------A T 01990 NEXT L1:NEXT L
    0x58ae8c46fea0 ---------A   02000 FOR L3=1 TO 6
    0x58ae8c470110 ---------A   02010 IF L5=1 THEN 2040
    0x58ae8c470450 ---------A   02020 IF L2(L3)<>2 THEN 2040
    0x58ae8c4707f0 ---------A   02030 L5=L5+1:GOTO 2050
    0x58ae8c470b10 ---------A T 02040 IF L2(L3)<>3 THEN 2060
    0x58ae8c470e50 ---------A T 02050 L4=L4+1
    0x58ae8c470f80 ---------A T 02060 NEXT L3
    0x58ae8c4711e0 ---------A   02070 IF L4=2 THEN 2090
    0x58ae8c4715f0 ---------A   02080 K(9,A)=.4:GOTO 2300
    0x58ae8c4719e0 ---------A T 02090 K(9,A)=25:GOTO 2300
    0x58ae8c471ad0 ---------A   02100 REM ***PUT NUMBERS IN ORDER, STRAIGHTS
    0x58ae8c472210 ---------A T 02110 FOR M2=1 TO 4:FOR M1=1 TO 4
    0x58ae8c472760 ---------A   02120 IF C(M1+1)>=C(M1) THEN 2140
    0x58ae8c473400 ---------A   02130 Z=C(M1):C(M1)=C(M1+1):C(M1+1)=Z
    0x58ae8c473650 ---------A T 02140 NEXT M1:NEXT M2
    0x58ae8c473930 ---------A   02150 G1=1
    0x58ae8c473cc0 ---------A   02160 FOR X=2 TO 5
    0x58ae8c474170 ---------A   02170 K(13,A)=Y1
    0x58ae8c4747a0 ---------A   02180 IF C(X-1)+1<>C(X) THEN 2200
    0x58ae8c474ae0 ---------A   02190 G1=G1+1
    0x58ae8c474c10 ---------A T 02200 NEXT X
    0x58ae8c474e70 ---------A   02210 IF I=11 THEN 2240
    0x58ae8c4750d0 ---------A   02220 IF G1<4 THEN 2260
    0x58ae8c475500 ---------A   02230 K(I,A)=30:GOTO 2300
    0x58ae8c475740 ---------A T 02240 IF G1<>5 THEN 2260
    0x58ae8c475b70 ---------A   02250 K(I,A)=40:GOTO 2300
    0x58ae8c475f80 ---------A T 02260 K(I,A)=.4:GOTO 2300
    0x58ae8c475fe0 ---------A   02270 REM ***CHANCE
    0x58ae8c476a30 ---------A T 02280 Y1=0
    0x58ae8c4776e0 ---------A   02290 FOR Y=1 TO 5:Y1=C(Y)+Y1:NEXT Y:K(13,A)=Y1
    0x58ae8c4780d0 ---------A T 02300 PRINT A$(A);", YOU NOW HAVE";INT(K(I,A));"POINTS IN ROW #";I;", ";
    0x58ae8c478240 ---------A   02310 PRINT "(";
    0x58ae8c4784a0 ---------A   02320 IF I>6 THEN 2340
    0x58ae8c478aa0 ---------A   02330 ON I GOTO 2350,2360,2370,2380,2390,2400
    0x58ae8c479240 ---------A T 02340 ON I-6 GOTO 2410,2420,2430,2440,2450,2460,2470
    0x58ae8c479410 ---------A T 02350 PRINT "(1)ACES";:GOTO 2480
    0x58ae8c4795d0 ---------A T 02360 PRINT "(2)TWOS";:GOTO 2480
    0x58ae8c479790 ---------A T 02370 PRINT "(3)THREES";:GOTO 2480
    0x58ae8c479950 ---------A T 02380 PRINT "(4)FOURS";:GOTO 2480
    0x58ae8c479b10 ---------A T 02390 PRINT "(5)FIVES";:GOTO 2480
    0x58ae8c479cd0 ---------A T 02400 PRINT "(6)SIXES";:GOTO 2480
    0x58ae8c479e90 ---------A T 02410 PRINT "(7)3 OF A KIND";:GOTO 2480
    0x58ae8c47a050 ---------A T 02420 PRINT "(8)4 OF A KIND";:GOTO 2480
    0x58ae8c47a220 ---------A T 02430 PRINT "(9)FULL HOUSE";:GOTO 2480
    0x58ae8c47a430 ---------A T 02440 PRINT "(10)SMALL STRAIGHT";:RESTORE:GOTO 2480
    0x58ae8c47a5f0 ---------A T 02450 PRINT "(11)LARGE STRAIGHT";:GOTO 2480
    0x58ae8c47a7a0 ---------A T 02460 PRINT "(12)YAHTZEE";:GOTO 2480
    0x58ae8c47a900 ---------A T 02470 PRINT "(13)CHANCE";
    0x58ae8c47ab50 ---------A T 02480 IF E=25 THEN 3030
    0x58ae8c47ae70 ---------A   02490 IF I0=25 THEN 3030
    0x58ae8c47afe0 ---------A   02500 PRINT ")"
    0x58ae8c47b660 ---------A T 02510 FOR B=1 TO N:FOR B1=1 TO 13
    0x58ae8c47ba80 ---------A   02520 IF K(B1,B)=0 THEN 1240
    0x58ae8c47bce0 ---------A   02530 NEXT B1:NEXT B
    0x58ae8c47c780 ---------A T 02540 FOR B3=1 TO N:B5(B3)=0:B8(B3)=0:NEXT B3
    0x58ae8c47c810 ---------A   02550 PRINT
    0x58ae8c47ce90 ---------A   02560 FOR B3=1 TO N:FOR B4=1 TO 6
    0x58ae8c47d650 ---------A   02570 B5(B3)=B5(B3)+INT(K(B4,B3))
    0x58ae8c47d8a0 ---------A   02580 NEXT B4:NEXT B3
    0x58ae8c47e000 ---------A   02590 FOR B6=1 TO N:FOR B7=7 TO 13
    0x58ae8c47e7c0 ---------A   02600 B8(B6)=B8(B6)+INT(K(B7,B6))
    0x58ae8c47ea10 ---------A   02610 NEXT B7:NEXT B6
    0x58ae8c47ed20 ---------A   02620 FOR B3=1 TO N
    0x58ae8c47f060 ---------A   02630 IF B5(B3)<63 THEN 2650
    0x58ae8c47f420 ---------A   02640 K(14,B3)=35
    0x58ae8c47f550 ---------A T 02650 NEXT B3
    0x58ae8c47f840 ---------A   02660 LINE INPUT "ENTER 'RETURN' WHEN PRINTER IS READY. ";XX$:GOSUB 3120
    0x58ae8c47fc10 ---------A   02670 FOR A9=1 TO N
    0x58ae8c480300 ---------A   02680 LPRINT TAB(19);A$(A9);"'S TOTALS":LPRINT TAB(19);"***************"
    0x58ae8c480390 ---------A   02690 LPRINT
    0x58ae8c480880 ---------A   02700 LPRINT "ACES-----------";INT(K(1,A9))
    0x58ae8c480d70 ---------A   02710 LPRINT "TWOS-----------";INT(K(2,A9))
    0x58ae8c481260 ---------A   02720 LPRINT "THREES---------";INT(K(3,A9))
    0x58ae8c481750 ---------A   02730 LPRINT "FOURS----------";INT(K(4,A9))
    0x58ae8c481c40 ---------A   02740 LPRINT "FIVES----------";INT(K(5,A9))
    0x58ae8c482130 ---------A   02750 LPRINT "SIXES----------";INT(K(6,A9))
    0x58ae8c482620 ---------A   02760 LPRINT "3 OF A KIND----";INT(K(7,A9))
    0x58ae8c482b10 ---------A   02770 LPRINT "4 OF A KIND----";INT(K(8,A9))
    0x58ae8c483000 ---------A   02780 LPRINT "FULL HOUSE-----";INT(K(9,A9))
    0x58ae8c4834f0 ---------A   02790 LPRINT "SM. STRAIGHT---";INT(K(10,A9))
    0x58ae8c4839e0 ---------A   02800 LPRINT "LG. STRAIGHT---";INT(K(11,A9))
    0x58ae8c483ed0 ---------A   02810 LPRINT "YAHTZEE--------";INT(K(12,A9))
    0x58ae8c4843c0 ---------A   02820 LPRINT "CHANCE---------";INT(K(13,A9))
    0x58ae8c484770 ---------A   02830 LPRINT:LPRINT "TOTAL OF UPPER HALF------";B5(A9)
    0x58ae8c484be0 ---------A   02840 LPRINT:LPRINT "BONUS--------------------";K(14,A9)
    0x58ae8c484f70 ---------A   02850 LPRINT:LPRINT "TOTAL OF LOWER HALF------";B8(A9)
    0x58ae8c484ff0 ---------A   02860 LPRINT
    0x58ae8c4858b0 ---------A   02870 B9=B5(A9)+B8(A9)+K(14,A9)
    0x58ae8c485d00 ---------A   02880 LPRINT A$(A9);"'S GRAND TOTAL--------------------------";B9
    0x58ae8c485d70 ---------A   02890 GOSUB 3120
    0x58ae8c485e90 ---------A   02900 NEXT A9
    0x58ae8c4860f0 ---------A   02910 IF I>13 THEN 1510
    0x58ae8c486190 ---------A   02920 GOTO 3060
    0x58ae8c4869b0 ---------A T 02930 GOSUB 3120
    0x58ae8c486ce0 ---------A   02940 LPRINT "1**ACES":GOSUB 3120:LPRINT "2**TWOS":GOSUB 940
    0x58ae8c487010 ---------A   02950 LPRINT "3**THREES":GOSUB 3120:LPRINT "4**FOURS":GOSUB 940
    0x58ae8c487340 ---------A   02960 LPRINT "5**FIVES":GOSUB 3120:LPRINT "6**SIXES":GOSUB 940
    0x58ae8c487680 ---------A   02970 LPRINT "7**3 OF A KIND":GOSUB 3120:LPRINT "8**4 OF A KIND":GOSUB 940
    0x58ae8c4879b0 ---------A   02980 LPRINT "9**FULL HOUSE":GOSUB 3120:LPRINT "10**SM. STRAIGHT":GOSUB 940
    0x58ae8c487cc0 ---------A   02990 LPRINT "11**LG. STRAIGHT":GOSUB 3120:LPRINT "12**YAHTZEE":GOSUB 940
    0x58ae8c487e90 ---------A   03000 LPRINT "13**CHANCE":GOSUB 3120
    0x58ae8c4886d0 ---------A   03010 FOR E1=1 TO 8:LPRINT:NEXT E1:PRINT CHR$(26):PRINT "TEAR OFF SCORECARD"
    0x58ae8c488a90 ---------A   03020 PRINT "AND HIT 'RETURN'!":INPUT Q:GOTO 1240
    0x58ae8c489fe0 ---------A T 03030 PRINT "  ";
    0x58ae8c48a350 ---------A   03040 IF POS(0) > 50 THEN PRINT
    0x58ae8c4920d0 ---------A   03050 GOTO 09900
    0x58ae8c48aa00 ---------A T 03060 PRINT CHR$(26):PRINT
    0x58ae8c48ada0 ---------A T 03070 PRINT:PRINT "ANOTHER GAME?===> ":INPUT YN$
    0x58ae8c48b1d0 ---------A   03080 IF LEFT$(YN$,1)="Y" THEN 1130
    0x58ae8c48b600 ---------A   03090 IF LEFT$(YN$,1)="N" THEN 3110
    0x58ae8c48b6c0 ---------A   03100 GOSUB 935:GOTO 3070
    0x58ae8c48b700 ---------A T 03110 END
    0x58ae8c492110 ---------B G 03120 GOTO 03130
    0x58ae8c492150 ---------B T 03130 RETURN
    0x58ae8c488c20 ---------C G 03140 PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    0x58ae8c488dc0 ---------C   03150 PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    0x58ae8c488f60 ---------C   03160 PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    0x58ae8c4890d0 ---------C   03170 PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    0x58ae8c4921b0 ---------C   03180 GOTO 03190
    0x58ae8c492210 ---------C T 03190 RETURN
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
char*  A_str_arr[7];                              // Basic: A$ 
float  A0_flt;                                    // Basic: A0 
float  A9_flt;                                    // Basic: A9 
float  B_flt;                                     // Basic: B 
char*  B_str;                                     // Basic: B$ 
float  B1_flt;                                    // Basic: B1 
float  B3_flt;                                    // Basic: B3 
float  B4_flt;                                    // Basic: B4 
float  B5_flt_arr[7];                             // Basic: B5 
float  B6_flt;                                    // Basic: B6 
float  B7_flt;                                    // Basic: B7 
float  B8_flt_arr[7];                             // Basic: B8 
float  B9_flt;                                    // Basic: B9 
float  C_flt_arr[5];                              // Basic: C 
float  E_flt;                                     // Basic: E 
float  E1_flt;                                    // Basic: E1 
float  F_flt_arr[4];                              // Basic: F 
float  F1_flt;                                    // Basic: F1 
float  F2_flt;                                    // Basic: F2 
float  F3_flt;                                    // Basic: F3 
float  G_flt;                                     // Basic: G 
float  G1_flt;                                    // Basic: G1 
float  H_flt;                                     // Basic: H 
float  H1_flt;                                    // Basic: H1 
float  H2_flt_arr[6];                             // Basic: H2 
float  H3_flt;                                    // Basic: H3 
float  H4_flt;                                    // Basic: H4 
float  I_flt;                                     // Basic: I 
float  I0_flt;                                    // Basic: I0 
float  K_flt_arr[14][7];                          // Basic: K 
float  L_flt;                                     // Basic: L 
float  L1_flt;                                    // Basic: L1 
float  L2_flt_arr[6];                             // Basic: L2 
float  L3_flt;                                    // Basic: L3 
float  L4_flt;                                    // Basic: L4 
float  L5_flt;                                    // Basic: L5 
float  M1_flt;                                    // Basic: M1 
float  M2_flt;                                    // Basic: M2 
float  N_flt;                                     // Basic: N 
float  Q_flt;                                     // Basic: Q 
float  R_flt;                                     // Basic: R 
float  T_flt;                                     // Basic: T 
float  V4_flt;                                    // Basic: V4 
float  X_flt;                                     // Basic: X 
char*  XX_str;                                    // Basic: XX$ 
float  Y_flt;                                     // Basic: Y 
float  Y1_flt;                                    // Basic: Y1 
char*  YN_str;                                    // Basic: YN$ 
float  Z_flt;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03120();
void Routine_03140();

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

void Routine_03120(){
    // 03120 GOTO 03130
    goto Lbl_03130;

  Lbl_03130:
    // 03130 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_03140(){
    // 03140 PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    b2c_printf("Totals will be displayed if you respond to \n");
    // 03150 PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    b2c_printf("'scoreboard number?' With a number greater than 13.\n");
    // 03160 PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    b2c_printf("To see what scoreboard options you have not used,\n");
    // 03170 PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    b2c_printf("Respond to 'how many' or 'scoreboard number' with 25.\n");
    // 03180 GOTO 03190
    goto Lbl_03190;

  Lbl_03190:
    // 03190 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT CHR$(26)
    b2c_printf("");
