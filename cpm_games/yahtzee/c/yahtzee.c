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
    0x606f2451a6d0 ---------A   00005  PRINT CHR$(26)
    0x606f2451a670 ---------A   00007  PRINT TAB(25);"YAHTZEE"
    0x606f2451c5e0 ---------A   00008  PRINT TAB(20);"CREATIVE COMPUTING"
    0x606f2451b040 ---------A   00009  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x606f2451b500 ---------A   00010  PRINT:PRINT "MODIFIED FOR THE OSBORNE-1 WITH PRINTER"
    0x606f2451ac20 ---------A   00011  PRINT "BY PETER FLEMING, SFOG, 2/9/82"
    0x606f2451cf30 ---------A   00015  DIM C(5),K(14,7),F(4),H2(6),L2(6),B5(7),B8(7),A$(7)
    0x606f24523c40 ---------A   00020  PRINT CHR$(7):PRINT CHR$(7):PRINT CHR$(7)
    0x606f24523dc0 ---------A T 00025  PRINT "THIS IS THE GAME OF YAHTZEE. DO YOU WANT COMMENTS";
    0x606f245243c0 ---------A   00030  INPUT B$:IF LEFT$(B$,1)="N" THEN 45
    0x606f245247e0 ---------A   00033  IF LEFT$(B$,1)="Y" THEN 40
    0x606f2451cff0 ---------A   00035  GOSUB 935: GOTO 25
    0x606f2451d0b0 ---------A T 00040  GOSUB 995
    0x606f24524c20 ---------A T 00045  PRINT:PRINT "HOW MANY PLAYERS";:INPUT N
    0x606f24524e80 ---------A   00050  IF N<1 THEN 45
    0x606f24525100 ---------A   00053  IF N<=7 THEN 75
    0x606f24525240 ---------A   00055  PRINT "THE MAXIMUM NUMBER OF PLAYERS IS 7."
    0x606f245252c0 ---------A   00070  GOTO 45
    0x606f24525690 ---------A T 00075  FOR A0=1 TO N
    0x606f24525c50 ---------A   00080  PRINT "NAME OF PLAYER #";A0;:INPUT A$(A0):NEXT A0
    0x606f24525fd0 ---------A T 00085  PRINT:PRINT "WOULD YOU LIKE A PRINTED SCORECARD";:INPUT B$
    0x606f24526400 ---------A   00090  IF LEFT$(B$,1)="N" THEN 100
    0x606f24526820 ---------A   00093  IF LEFT$(B$,1)="Y" THEN 945
    0x606f24526900 ---------A   00095  GOSUB 935:GOTO 85
    0x606f24527350 ---------A T 00100  H=0:PRINT:A=A+1:IF A<>N+1 THEN 105
    0x606f24527590 ---------A   00104  A=1
    0x606f24528160 ---------A T 00105  FOR B=1 TO 5:C(B)=INT(6*RND(1))+1:NEXT B:PRINT
    0x606f24528860 ---------A T 00110  PRINT:PRINT A$(A);"'S NUMBERS:  ";:H=H+1
    0x606f245293d0 ---------A   00115  PRINT C(1);C(2);C(3);C(4);C(5):IF H=3 THEN 210
    0x606f24529760 ---------A T 00120  PRINT "HOW MANY DICE TO CHANGE";:INPUT E
    0x606f245299c0 ---------A   00125  IF E<>25 THEN 130
    0x606f24529a90 ---------A   00127  GOSUB 1020:GOTO 120
    0x606f24529ce0 ---------A T 00130  IF E>5 THEN 120
    0x606f2452a160 ---------A   00135  IF E<0 THEN 120
    0x606f2452a4c0 ---------A   00137  IF INT(E)<>E THEN 120
    0x606f2452a720 ---------A   00140  IF E=0 THEN 210
    0x606f2452a990 ---------A   00143  IF E=5 THEN 105
    0x606f2452b120 ---------A   00145  FOR F3=1 TO 4:F(F3)=0:NEXT F3
    0x606f2452b2d0 ---------A T 00150  PRINT "WHICH DICE TO CHANGE";
    0x606f2452b730 ---------A   00155  ON E GOTO 160,165,170,175
    0x606f2452b9c0 ---------A T 00160  INPUT F(1):GOTO 180
    0x606f2452bde0 ---------A T 00165  INPUT F(1),F(2):GOTO 180
    0x606f2452c3a0 ---------A T 00170  INPUT F(1),F(2),F(3):GOTO 180
    0x606f2452cab0 ---------A T 00175  INPUT F(1),F(2),F(3),F(4)
    0x606f2452d620 ---------A T 00180  FOR F1=1 TO 4:F(F1)=INT(F(F1)):IF F(F1)>5 THEN 150
    0x606f2452d960 ---------A   00185  IF F(F1)<0 THEN 150
    0x606f2452daa0 ---------A   00187  NEXT F1
    0x606f2452e190 ---------A   00190  FOR F2=1 TO 4:IF F(F2)=0 THEN 200
    0x606f2452e930 ---------A   00195  C(F(F2))=INT(6*RND(1))+1
    0x606f2452ea60 ---------A T 00200  NEXT F2
    0x606f2452eb10 ---------A   00205  GOTO 110
    0x606f2452ee60 ---------A T 00210  PRINT A$(A);" -- SCOREBOARD NUMBER";
    0x606f2452f080 ---------A   00215  INPUT I
    0x606f2452f2e0 ---------A   00220  IF I<>25 THEN 225 
    0x606f2452f3b0 ---------A   00223  GOSUB 1020:GOTO 210
    0x606f2452f610 ---------A T 00225  IF I<1 THEN 210
    0x606f2452fb70 ---------A   00227  I=INT(I):IF I<14 THEN 245
    0x606f2452fe40 ---------A T 00230  PRINT "CONFIRM";:INPUT B$
    0x606f24530270 ---------A   00235  IF LEFT$(B$,1)="N" THEN 210
    0x606f24530690 ---------A   00237  IF LEFT$(B$,1)="Y" THEN 735
    0x606f24530770 ---------A   00240  GOSUB 935:GOTO 230
    0x606f24530ba0 ---------A T 00245  IF K(I,A)=0 THEN 260
    0x606f24531030 ---------A   00250  PRINT A$(A);", YOU HAVE ALREADY USED ROW #";I;
    0x606f245316b0 ---------A   00255  PRINT "YOU HAVE"K(I,A);"POINTS IN ROW #";I:GOTO 210
    0x606f24531910 ---------A T 00260  IF I>6 THEN 305
    0x606f24531db0 ---------A   00265  REM***CATEGORIES ONE THOUGH SIX
    0x606f24531ff0 ---------A   00270  K=0
    0x606f245326c0 ---------A   00275  FOR G=1 TO 5:IF C(G)<>I THEN 280
    0x606f24532a30 ---------A   00277  K=K+I
    0x606f24532db0 ---------A T 00280  NEXT G:IF K=0 THEN 295
    0x606f24533030 ---------A   00283  IF K<>1 THEN 300
    0x606f24533380 ---------A   00285  PRINT A$(A);", YOU HAVE 1 POINT IN ROW # 1 (ACES)"
    0x606f24533790 ---------A   00290  K(1,A)=1:GOTO 720
    0x606f24533bb0 ---------A T 00295  K(I,A)=.4:GOTO 620
    0x606f24534010 ---------A T 00300  K(I,A)=K:GOTO 620
    0x606f245347c0 ---------A T 00305  ON I-6 GOTO 315,320,400,485,485,325,605
    0x606f24534860 ---------A   00310  REM ***3 OF A KIND, 4 OF A KIND, YAHTZEE
    0x606f245356f0 ---------A T 00315  R=3:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 330
    0x606f245363a0 ---------A T 00320  R=4:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 330
    0x606f245367b0 ---------A T 00325  R=5:T=50
    0x606f24536f30 ---------A T 00330  FOR H3=1 TO 6:H2(H3)=0:NEXT H3
    0x606f245375c0 ---------A   00335  FOR H=1 TO 6:FOR H1=1 TO 5
    0x606f24537920 ---------A   00340  IF C(H1)<>H THEN 350
    0x606f24537e20 ---------A   00345  H2(H)=H2(H)+1
    0x606f24538080 ---------A T 00350  NEXT H1:NEXT H
    0x606f24538440 ---------A   00355  FOR H4=1 TO 6
    0x606f245387b0 ---------A   00360  IF H2(H4)>=R THEN 370
    0x606f24538d20 ---------A   00365  NEXT H4:K(I,A)=.4:GOTO 620
    0x606f24539140 ---------A T 00370  IF K(I,A)=50 THEN 380
    0x606f245397a0 ---------A   00375  K(I,A)=T:IF I<>12 THEN 395
    0x606f2453a280 ---------A T 00380  PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x606f2453a740 ---------A   00385  PRINT "CONGRATULATIONS, ";A$(A);", YOU HAVE A YAHTZEE!!!"
    0x606f2453b160 ---------A   00390  PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x606f2453b1f0 ---------A T 00395  GOTO 620
    0x606f2453b260 ---------A T 00400  REM ***FULL HOUSE
    0x606f2453bf80 ---------A   00405  L4=0:L5=0:FOR L=1 TO 6:L2(L)=0:NEXT L
    0x606f2453c610 ---------A   00410  FOR L=1 TO 6:FOR L1=1 TO 5
    0x606f2453c970 ---------A   00415  IF C(L1)<>L THEN 425
    0x606f2453ce70 ---------A   00420  L2(L)=L2(L)+1
    0x606f2453d0d0 ---------A T 00425  NEXT L1:NEXT L
    0x606f2453d480 ---------A   00430  FOR L3=1 TO 6
    0x606f2453d6f0 ---------A   00435  IF L5=1 THEN 450
    0x606f2453da30 ---------A   00440  IF L2(L3)<>2 THEN 450
    0x606f2453ddd0 ---------A   00445  L5=L5+1:GOTO 455
    0x606f2453e100 ---------A T 00450  IF L2(L3)<>3 THEN 460
    0x606f2453e440 ---------A T 00455  L4=L4+1
    0x606f2453e570 ---------A T 00460  NEXT L3
    0x606f2453e7e0 ---------A   00465  IF L4=2 THEN 475
    0x606f2453ebf0 ---------A   00470  K(9,A)=.4:GOTO 620
    0x606f2453eff0 ---------A T 00475  K(9,A)=25:GOTO 620
    0x606f2453f080 ----------   00480  GOTO 620
    0x606f2453f100 ---------A T 00485  REM ***PUT NUMBERS IN ORDER, STRAIGHTS
    0x606f2453f850 ---------A   00490  FOR M2=1 TO 4:FOR M1=1 TO 4
    0x606f2453fda0 ---------A   00495  IF C(M1+1)>=C(M1) THEN 507
    0x606f24540a40 ---------A   00500  Z=C(M1):C(M1)=C(M1+1):C(M1+1)=Z
    0x606f24540ca0 ---------A T 00507  NEXT M1:NEXT M2
    0x606f24540f90 ---------A   00510  G1=1
    0x606f24541320 ---------A   00515  FOR X=2 TO 5
    0x606f245417d0 ---------A   00517  K(13,A)=Y1
    0x606f24541e00 ---------A   00525  IF C(X-1)+1<>C(X) THEN 540
    0x606f24542140 ---------A   00530  G1=G1+1
    0x606f24542270 ---------A T 00540  NEXT X
    0x606f245424e0 ---------A   00545  IF I=11 THEN 560
    0x606f24542740 ---------A   00550  IF G1<4 THEN 570
    0x606f24542b70 ---------A   00555  K(I,A)=30:GOTO 620
    0x606f24542dc0 ---------A T 00560  IF G1<>5 THEN 570
    0x606f245431f0 ---------A   00565  K(I,A)=40:GOTO 620
    0x606f24543610 ---------A T 00570  K(I,A)=.4:GOTO 620
    0x606f24543680 ---------A T 00605  REM ***CHANCE
    0x606f245440e0 ---------A   00610  Y1=0
    0x606f24544da0 ---------A   00615  FOR Y=1 TO 5:Y1=C(Y)+Y1:NEXT Y:K(13,A)=Y1
    0x606f24545790 ---------A T 00620  PRINT A$(A);", YOU NOW HAVE";INT(K(I,A));"POINTS IN ROW #";I;", ";
    0x606f24545910 ---------A   00625  PRINT "(";
    0x606f24545b80 ---------A T 00630  IF I>6 THEN 640
    0x606f24546180 ---------A   00635  ON I GOTO 645,650,655,660,665,670
    0x606f24546930 ---------A T 00640  ON I-6 GOTO 675,680,685,690,695,700,705
    0x606f24546b20 ---------A T 00645  PRINT "(1)ACES";:GOTO 710
    0x606f24546d00 ---------A T 00650  PRINT "(2)TWOS";:GOTO 710
    0x606f24546ee0 ---------A T 00655  PRINT "(3)THREES";:GOTO 710
    0x606f245470c0 ---------A T 00660  PRINT "(4)FOURS";:GOTO 710
    0x606f245472a0 ---------A T 00665  PRINT "(5)FIVES";:GOTO 710
    0x606f24547480 ---------A T 00670  PRINT "(6)SIXES";:GOTO 710
    0x606f24547660 ---------A T 00675  PRINT "(7)3 OF A KIND";:GOTO 710
    0x606f24547840 ---------A T 00680  PRINT "(8)4 OF A KIND";:GOTO 710
    0x606f24547a30 ---------A T 00685  PRINT "(9)FULL HOUSE";:GOTO 710
    0x606f24547c70 ---------A T 00690  PRINT "(10)SMALL STRAIGHT";:RESTORE:GOTO 710
    0x606f24547e50 ---------A T 00695  PRINT "(11)LARGE STRAIGHT";:GOTO 710
    0x606f24548020 ---------A T 00700  PRINT "(12)YAHTZEE";:GOTO 710
    0x606f24548190 ---------A T 00705  PRINT "(13)CHANCE";
    0x606f245483f0 ---------A T 00710  IF E=25 THEN 1030
    0x606f24548710 ---------A   00713  IF I0=25 THEN 1030
    0x606f24548880 ---------A   00715  PRINT ")"
    0x606f24548f10 ---------A T 00720  FOR B=1 TO N:FOR B1=1 TO 13
    0x606f24549330 ---------A   00725  IF K(B1,B)=0 THEN 100
    0x606f245495a0 ---------A   00730  NEXT B1:NEXT B
    0x606f2454a050 ---------A T 00735  FOR B3=1 TO N:B5(B3)=0:B8(B3)=0:NEXT B3
    0x606f2454a0f0 ---------A   00740  PRINT
    0x606f2454a780 ---------A   00745  FOR B3=1 TO N:FOR B4=1 TO 6
    0x606f2454af40 ---------A   00750  B5(B3)=B5(B3)+INT(K(B4,B3))
    0x606f2454b1a0 ---------A   00755  NEXT B4:NEXT B3
    0x606f2454b910 ---------A   00760  FOR B6=1 TO N:FOR B7=7 TO 13
    0x606f2454c0d0 ---------A   00765  B8(B6)=B8(B6)+INT(K(B7,B6))
    0x606f2454c330 ---------A   00770  NEXT B7:NEXT B6
    0x606f2454c650 ---------A   00775  FOR B3=1 TO N
    0x606f2454c990 ---------A   00780  IF B5(B3)<63 THEN 790
    0x606f2454cd50 ---------A   00785  K(14,B3)=35
    0x606f2454ce80 ---------A T 00790  NEXT B3
    0x606f2454d180 ---------A   00795  LINE INPUT "ENTER 'RETURN' WHEN PRINTER IS READY. ";XX$:GOSUB 940
    0x606f2454d560 ---------A   00800  FOR A9=1 TO N
    0x606f2454dc60 ---------A   00810  LPRINT TAB(19);A$(A9);"'S TOTALS":LPRINT TAB(19);"***************"
    0x606f2454dd00 ---------A   00815  LPRINT
    0x606f2454e200 ---------A   00820  LPRINT "ACES-----------";INT(K(1,A9))
    0x606f2454e700 ---------A   00825  LPRINT "TWOS-----------";INT(K(2,A9))
    0x606f2454ec00 ---------A   00830  LPRINT "THREES---------";INT(K(3,A9))
    0x606f2454f100 ---------A   00835  LPRINT "FOURS----------";INT(K(4,A9))
    0x606f2454f600 ---------A   00840  LPRINT "FIVES----------";INT(K(5,A9))
    0x606f2454fb00 ---------A   00845  LPRINT "SIXES----------";INT(K(6,A9))
    0x606f24550000 ---------A   00850  LPRINT "3 OF A KIND----";INT(K(7,A9))
    0x606f24550500 ---------A   00855  LPRINT "4 OF A KIND----";INT(K(8,A9))
    0x606f24550a00 ---------A   00860  LPRINT "FULL HOUSE-----";INT(K(9,A9))
    0x606f24550f00 ---------A   00865  LPRINT "SM. STRAIGHT---";INT(K(10,A9))
    0x606f24551400 ---------A   00870  LPRINT "LG. STRAIGHT---";INT(K(11,A9))
    0x606f24551900 ---------A   00875  LPRINT "YAHTZEE--------";INT(K(12,A9))
    0x606f24551e00 ---------A   00880  LPRINT "CHANCE---------";INT(K(13,A9))
    0x606f245521d0 ---------A   00885  LPRINT:LPRINT "TOTAL OF UPPER HALF------";B5(A9)
    0x606f24552660 ---------A   00890  LPRINT:LPRINT "BONUS--------------------";K(14,A9)
    0x606f24552a10 ---------A   00895  LPRINT:LPRINT "TOTAL OF LOWER HALF------";B8(A9)
    0x606f24552aa0 ---------A   00900  LPRINT
    0x606f24553370 ---------A   00905  B9=B5(A9)+B8(A9)+K(14,A9)
    0x606f245537c0 ---------A   00910  LPRINT A$(A9);"'S GRAND TOTAL--------------------------";B9
    0x606f24553840 ---------A   00915  GOSUB 940
    0x606f24553970 ---------A   00920  NEXT A9
    0x606f24553be0 ---------A   00925  IF I>13 THEN 210
    0x606f24553c80 ---------A   00930  GOTO 1040
    0x606f24553e10 ----------   00935  PRINT "ANSWER WITH YES OR NO":RETURN
    0x606f24554440 ---------B G 00940  FOR E=1 TO 72:LPRINT "-";:NEXT E:LPRINT:RETURN
    0x606f245544f0 ---------A T 00945  GOSUB 940
    0x606f24554860 ---------A   00950  LPRINT "1**ACES":GOSUB 940:LPRINT "2**TWOS":GOSUB 940
    0x606f24554bd0 ---------A   00955  LPRINT "3**THREES":GOSUB 940:LPRINT "4**FOURS":GOSUB 940
    0x606f24554f40 ---------A   00960  LPRINT "5**FIVES":GOSUB 940:LPRINT "6**SIXES":GOSUB 940
    0x606f245552c0 ---------A   00965  LPRINT "7**3 OF A KIND":GOSUB 940:LPRINT "8**4 OF A KIND":GOSUB 940
    0x606f24555630 ---------A   00970  LPRINT "9**FULL HOUSE":GOSUB 940:LPRINT "10**SM. STRAIGHT":GOSUB 940
    0x606f24555980 ---------A   00975  LPRINT "11**LG. STRAIGHT":GOSUB 940:LPRINT "12**YAHTZEE":GOSUB 940
    0x606f24555b70 ---------A   00980  LPRINT "13**CHANCE":GOSUB 940
    0x606f245563f0 ---------A   00985  FOR E1=1 TO 8:LPRINT:NEXT E1:PRINT CHR$(26):PRINT "TEAR OFF SCORECARD"
    0x606f245567d0 ---------A   00990  PRINT "AND HIT 'RETURN'!":INPUT Q:GOTO 100
    0x606f24556970 ---------C G 00995  PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    0x606f24556b20 ---------C   01000  PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    0x606f24556cd0 ---------C   01005  PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    0x606f24556e50 ---------C   01010  PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    0x606f24556eb0 ---------C   01015  RETURN
    0x606f245572d0 ----------   01020  PRINT:PRINT A$(A);", YOU HAVE THE FOLLOWING SCOREBOARD OPTIONS LEFT:"
    0x606f24557ba0 ----------   01025  I0=25:FOR I=1 TO 13:IF K(I,A)=0 THEN 630
    0x606f24557c20 ----------   01027  GOTO 1035
    0x606f24557da0 ---------A T 01030  PRINT "  ";
    0x606f24558130 ---------A T 01035  IF POS(0) > 50 THEN PRINT
    0x606f24558570 ---------A   01036  NEXT I:PRINT:PRINT:I0=0:RETURN
    0x606f24558820 ---------A T 01040  PRINT CHR$(26):PRINT
    0x606f24558bf0 ---------A T 01041  PRINT:PRINT "ANOTHER GAME?===> ":INPUT YN$
    0x606f24559020 ---------A   01045  IF LEFT$(YN$,1)="Y" THEN 45
    0x606f24559450 ---------A   01050  IF LEFT$(YN$,1)="N" THEN 1060
    0x606f24559520 ---------A   01055  GOSUB 935:GOTO 1041
    0x606f24559570 ---------A T 01060  END
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
   A) 0x606f2451a6d0 (00005)   0x606f2451a6d0 (00005)   0x606f24559570 (01060)   0x606f24559570 (01060)   
   B) 0x606f24554440 (00940)   0x606f24554440 (00940)   0x606f24554440 (00940)   0x606f24554440 (00940)   
   C) 0x606f24556970 (00995)   0x606f24556970 (00995)   0x606f24556eb0 (01015)   0x606f24556eb0 (01015)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/yahtzee.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x606f2451a6d0 ---------A   00005  PRINT CHR$(26)
    0x606f2451a670 ---------A   00007  PRINT TAB(25);"YAHTZEE"
    0x606f2451c5e0 ---------A   00008  PRINT TAB(20);"CREATIVE COMPUTING"
    0x606f2451b040 ---------A   00009  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x606f2451b0a0 ----------   00010  PRINT
    0x606f2451b500 ---------A        a PRINT "MODIFIED FOR THE OSBORNE-1 WITH PRINTER"
    0x606f2451ac20 ---------A   00011  PRINT "BY PETER FLEMING, SFOG, 2/9/82"
    0x606f2451cf30 ---------A   00015  DIM C(5),K(14,7),F(4),H2(6),L2(6),B5(7),B8(7),A$(7)
    0x606f24523840 ----------   00020  PRINT CHR$(7)
    0x606f24523a40 ----------        a PRINT CHR$(7)
    0x606f24523c40 ---------A        b PRINT CHR$(7)
    0x606f24523dc0 ---------A T 00025  PRINT "THIS IS THE GAME OF YAHTZEE. DO YOU WANT COMMENTS";
    0x606f24523fc0 ----------   00030  INPUT B$
    0x606f245243c0 ---------A        a IF LEFT$(B$,1)="N" THEN 45
    0x606f245247e0 ---------A   00033  IF LEFT$(B$,1)="Y" THEN 40
    0x606f2451bb80 ----------   00035  GOSUB 935
    0x606f2451cff0 ---------A        a GOTO 25
    0x606f2451d0b0 ---------A T 00040  GOSUB 995
    0x606f245248a0 ---------- T 00045  PRINT
    0x606f24524a00 ---------- T      a PRINT "HOW MANY PLAYERS";
    0x606f24524c20 ---------A T      b INPUT N
    0x606f24524e80 ---------A   00050  IF N<1 THEN 45
    0x606f24525100 ---------A   00053  IF N<=7 THEN 75
    0x606f24525240 ---------A   00055  PRINT "THE MAXIMUM NUMBER OF PLAYERS IS 7."
    0x606f245252c0 ---------A   00070  GOTO 45
    0x606f24525690 ---------A T 00075  FOR A0=1 TO N
    0x606f245258f0 ----------   00080  PRINT "NAME OF PLAYER #";A0;
    0x606f24525b10 ----------        a INPUT A$(A0)
    0x606f24525c50 ---------A        b NEXT A0
    0x606f24525cf0 ---------- T 00085  PRINT
    0x606f24525e60 ---------- T      a PRINT "WOULD YOU LIKE A PRINTED SCORECARD";
    0x606f24525fd0 ---------A T      b INPUT B$
    0x606f24526400 ---------A   00090  IF LEFT$(B$,1)="N" THEN 100
    0x606f24526820 ---------A   00093  IF LEFT$(B$,1)="Y" THEN 945
    0x606f24526880 ----------   00095  GOSUB 935
    0x606f24526900 ---------A        a GOTO 85
    0x606f24526bb0 ---------- T 00100  H=0
    0x606f24526c00 ---------- T      a PRINT
    0x606f24526fe0 ---------- T      b A=A+1
    0x606f24527350 ---------A T      c IF A<>N+1 THEN 105
    0x606f24527590 ---------A   00104  A=1
    0x606f24527900 ---------- T 00105  FOR B=1 TO 5
    0x606f24527fa0 ---------- T      a C(B)=INT(6*RND(1))+1
    0x606f245280d0 ---------- T      b NEXT B
    0x606f24528160 ---------A T      c PRINT
    0x606f245281c0 ---------- T 00110  PRINT
    0x606f24528500 ---------- T      a PRINT A$(A);"'S NUMBERS:  ";
    0x606f24528860 ---------A T      b H=H+1
    0x606f24529150 ----------   00115  PRINT C(1);C(2);C(3);C(4);C(5)
    0x606f245293d0 ---------A        a IF H=3 THEN 210
    0x606f24529540 ---------- T 00120  PRINT "HOW MANY DICE TO CHANGE";
    0x606f24529760 ---------A T      a INPUT E
    0x606f245299c0 ---------A   00125  IF E<>25 THEN 130
    0x606f24529a20 ----------   00127  GOSUB 1020
    0x606f24529a90 ---------A        a GOTO 120
    0x606f24529ce0 ---------A T 00130  IF E>5 THEN 120
    0x606f2452a160 ---------A   00135  IF E<0 THEN 120
    0x606f2452a4c0 ---------A   00137  IF INT(E)<>E THEN 120
    0x606f2452a720 ---------A   00140  IF E=0 THEN 210
    0x606f2452a990 ---------A   00143  IF E=5 THEN 105
    0x606f2452ad10 ----------   00145  FOR F3=1 TO 4
    0x606f2452aff0 ----------        a F(F3)=0
    0x606f2452b120 ---------A        b NEXT F3
    0x606f2452b2d0 ---------A T 00150  PRINT "WHICH DICE TO CHANGE";
    0x606f2452b730 ---------A   00155  ON E GOTO 160,165,170,175
    0x606f2452b930 ---------- T 00160  INPUT F(1)
    0x606f2452b9c0 ---------A T      a GOTO 180
    0x606f2452bd50 ---------- T 00165  INPUT F(1),F(2)
    0x606f2452bde0 ---------A T      a GOTO 180
    0x606f2452c310 ---------- T 00170  INPUT F(1),F(2),F(3)
    0x606f2452c3a0 ---------A T      a GOTO 180
    0x606f2452cab0 ---------A T 00175  INPUT F(1),F(2),F(3),F(4)
    0x606f2452ce30 ---------- T 00180  FOR F1=1 TO 4
    0x606f2452d2f0 ---------- T      a F(F1)=INT(F(F1))
    0x606f2452d620 ---------A T      b IF F(F1)>5 THEN 150
    0x606f2452d960 ---------A   00185  IF F(F1)<0 THEN 150
    0x606f2452daa0 ---------A   00187  NEXT F1
    0x606f2452de40 ----------   00190  FOR F2=1 TO 4
    0x606f2452e190 ---------A        a IF F(F2)=0 THEN 200
    0x606f2452e930 ---------A   00195  C(F(F2))=INT(6*RND(1))+1
    0x606f2452ea60 ---------A T 00200  NEXT F2
    0x606f2452eb10 ---------A   00205  GOTO 110
    0x606f2452ee60 ---------A T 00210  PRINT A$(A);" -- SCOREBOARD NUMBER";
    0x606f2452f080 ---------A   00215  INPUT I
    0x606f2452f2e0 ---------A   00220  IF I<>25 THEN 225 
    0x606f2452f340 ----------   00223  GOSUB 1020
    0x606f2452f3b0 ---------A        a GOTO 210
    0x606f2452f610 ---------A T 00225  IF I<1 THEN 210
    0x606f2452f910 ----------   00227  I=INT(I)
    0x606f2452fb70 ---------A        a IF I<14 THEN 245
    0x606f2452fcd0 ---------- T 00230  PRINT "CONFIRM";
    0x606f2452fe40 ---------A T      a INPUT B$
    0x606f24530270 ---------A   00235  IF LEFT$(B$,1)="N" THEN 210
    0x606f24530690 ---------A   00237  IF LEFT$(B$,1)="Y" THEN 735
    0x606f245306f0 ----------   00240  GOSUB 935
    0x606f24530770 ---------A        a GOTO 230
    0x606f24530ba0 ---------A T 00245  IF K(I,A)=0 THEN 260
    0x606f24531030 ---------A   00250  PRINT A$(A);", YOU HAVE ALREADY USED ROW #";I;
    0x606f24531630 ----------   00255  PRINT "YOU HAVE"K(I,A);"POINTS IN ROW #";I
    0x606f245316b0 ---------A        a GOTO 210
    0x606f24531910 ---------A T 00260  IF I>6 THEN 305
    0x606f24531db0 ---------A   00265  REM***CATEGORIES ONE THOUGH SIX
    0x606f24531ff0 ---------A   00270  K=0
    0x606f24532360 ----------   00275  FOR G=1 TO 5
    0x606f245326c0 ---------A        a IF C(G)<>I THEN 280
    0x606f24532a30 ---------A   00277  K=K+I
    0x606f24532b60 ---------- T 00280  NEXT G
    0x606f24532db0 ---------A T      a IF K=0 THEN 295
    0x606f24533030 ---------A   00283  IF K<>1 THEN 300
    0x606f24533380 ---------A   00285  PRINT A$(A);", YOU HAVE 1 POINT IN ROW # 1 (ACES)"
    0x606f24533720 ----------   00290  K(1,A)=1
    0x606f24533790 ---------A        a GOTO 720
    0x606f24533b40 ---------- T 00295  K(I,A)=.4
    0x606f24533bb0 ---------A T      a GOTO 620
    0x606f24533f80 ---------- T 00300  K(I,A)=K
    0x606f24534010 ---------A T      a GOTO 620
    0x606f245347c0 ---------A T 00305  ON I-6 GOTO 315,320,400,485,485,325,605
    0x606f24534860 ---------A   00310  REM ***3 OF A KIND, 4 OF A KIND, YAHTZEE
    0x606f24534b50 ---------- T 00315  R=3
    0x606f24535660 ---------- T      a T=C(1)+C(2)+C(3)+C(4)+C(5)
    0x606f245356f0 ---------A T      b GOTO 330
    0x606f245358e0 ---------- T 00320  R=4
    0x606f24536330 ---------- T      a T=C(1)+C(2)+C(3)+C(4)+C(5)
    0x606f245363a0 ---------A T      b GOTO 330
    0x606f24536590 ---------- T 00325  R=5
    0x606f245367b0 ---------A T      a T=50
    0x606f24536b20 ---------- T 00330  FOR H3=1 TO 6
    0x606f24536e00 ---------- T      a H2(H3)=0
    0x606f24536f30 ---------A T      b NEXT H3
    0x606f24537210 ----------   00335  FOR H=1 TO 6
    0x606f245375c0 ---------A        a FOR H1=1 TO 5
    0x606f24537920 ---------A   00340  IF C(H1)<>H THEN 350
    0x606f24537e20 ---------A   00345  H2(H)=H2(H)+1
    0x606f24537f50 ---------- T 00350  NEXT H1
    0x606f24538080 ---------A T      a NEXT H
    0x606f24538440 ---------A   00355  FOR H4=1 TO 6
    0x606f245387b0 ---------A   00360  IF H2(H4)>=R THEN 370
    0x606f245388f0 ----------   00365  NEXT H4
    0x606f24538ca0 ----------        a K(I,A)=.4
    0x606f24538d20 ---------A        b GOTO 620
    0x606f24539140 ---------A T 00370  IF K(I,A)=50 THEN 380
    0x606f24539520 ----------   00375  K(I,A)=T
    0x606f245397a0 ---------A        a IF I<>12 THEN 395
    0x606f245399a0 ---------- T 00380  PRINT CHR$(7)
    0x606f24539ba0 ---------- T      a PRINT CHR$(7)
    0x606f24539f20 ---------- T      b FOR V4=1 TO 7
    0x606f2453a140 ---------- T      c PRINT CHR$(7);
    0x606f2453a280 ---------A T      d NEXT V4
    0x606f2453a740 ---------A   00385  PRINT "CONGRATULATIONS, ";A$(A);", YOU HAVE A YAHTZEE!!!"
    0x606f2453a940 ----------   00390  PRINT CHR$(7)
    0x606f2453ab40 ----------        a PRINT CHR$(7)
    0x606f2453ae00 ----------        b FOR V4=1 TO 7
    0x606f2453b020 ----------        c PRINT CHR$(7);
    0x606f2453b160 ---------A        d NEXT V4
    0x606f2453b1f0 ---------A T 00395  GOTO 620
    0x606f2453b260 ---------A T 00400  REM ***FULL HOUSE
    0x606f2453b550 ----------   00405  L4=0
    0x606f2453b800 ----------        a L5=0
    0x606f2453bb70 ----------        b FOR L=1 TO 6
    0x606f2453be50 ----------        c L2(L)=0
    0x606f2453bf80 ---------A        d NEXT L
    0x606f2453c260 ----------   00410  FOR L=1 TO 6
    0x606f2453c610 ---------A        a FOR L1=1 TO 5
    0x606f2453c970 ---------A   00415  IF C(L1)<>L THEN 425
    0x606f2453ce70 ---------A   00420  L2(L)=L2(L)+1
    0x606f2453cfa0 ---------- T 00425  NEXT L1
    0x606f2453d0d0 ---------A T      a NEXT L
    0x606f2453d480 ---------A   00430  FOR L3=1 TO 6
    0x606f2453d6f0 ---------A   00435  IF L5=1 THEN 450
    0x606f2453da30 ---------A   00440  IF L2(L3)<>2 THEN 450
    0x606f2453dd50 ----------   00445  L5=L5+1
    0x606f2453ddd0 ---------A        a GOTO 455
    0x606f2453e100 ---------A T 00450  IF L2(L3)<>3 THEN 460
    0x606f2453e440 ---------A T 00455  L4=L4+1
    0x606f2453e570 ---------A T 00460  NEXT L3
    0x606f2453e7e0 ---------A   00465  IF L4=2 THEN 475
    0x606f2453eb80 ----------   00470  K(9,A)=.4
    0x606f2453ebf0 ---------A        a GOTO 620
    0x606f2453ef80 ---------- T 00475  K(9,A)=25
    0x606f2453eff0 ---------A T      a GOTO 620
    0x606f2453f080 ----------   00480  GOTO 620
    0x606f2453f100 ---------A T 00485  REM ***PUT NUMBERS IN ORDER, STRAIGHTS
    0x606f2453f4a0 ----------   00490  FOR M2=1 TO 4
    0x606f2453f850 ---------A        a FOR M1=1 TO 4
    0x606f2453fda0 ---------A   00495  IF C(M1+1)>=C(M1) THEN 507
    0x606f24540160 ----------   00500  Z=C(M1)
    0x606f24540630 ----------        a C(M1)=C(M1+1)
    0x606f24540a40 ---------A        b C(M1+1)=Z
    0x606f24540b70 ---------- T 00507  NEXT M1
    0x606f24540ca0 ---------A T      a NEXT M2
    0x606f24540f90 ---------A   00510  G1=1
    0x606f24541320 ---------A   00515  FOR X=2 TO 5
    0x606f245417d0 ---------A   00517  K(13,A)=Y1
    0x606f24541e00 ---------A   00525  IF C(X-1)+1<>C(X) THEN 540
    0x606f24542140 ---------A   00530  G1=G1+1
    0x606f24542270 ---------A T 00540  NEXT X
    0x606f245424e0 ---------A   00545  IF I=11 THEN 560
    0x606f24542740 ---------A   00550  IF G1<4 THEN 570
    0x606f24542b00 ----------   00555  K(I,A)=30
    0x606f24542b70 ---------A        a GOTO 620
    0x606f24542dc0 ---------A T 00560  IF G1<>5 THEN 570
    0x606f24543180 ----------   00565  K(I,A)=40
    0x606f245431f0 ---------A        a GOTO 620
    0x606f245435a0 ---------- T 00570  K(I,A)=.4
    0x606f24543610 ---------A T      a GOTO 620
    0x606f24543680 ---------A T 00605  REM ***CHANCE
    0x606f245440e0 ---------A   00610  Y1=0
    0x606f24544450 ----------   00615  FOR Y=1 TO 5
    0x606f24544870 ----------        a Y1=C(Y)+Y1
    0x606f245449a0 ----------        b NEXT Y
    0x606f24544da0 ---------A        c K(13,A)=Y1
    0x606f24545790 ---------A T 00620  PRINT A$(A);", YOU NOW HAVE";INT(K(I,A));"POINTS IN ROW #";I;", ";
    0x606f24545910 ---------A   00625  PRINT "(";
    0x606f24545b80 ---------A T 00630  IF I>6 THEN 640
    0x606f24546180 ---------A   00635  ON I GOTO 645,650,655,660,665,670
    0x606f24546930 ---------A T 00640  ON I-6 GOTO 675,680,685,690,695,700,705
    0x606f24546a90 ---------- T 00645  PRINT "(1)ACES";
    0x606f24546b20 ---------A T      a GOTO 710
    0x606f24546c70 ---------- T 00650  PRINT "(2)TWOS";
    0x606f24546d00 ---------A T      a GOTO 710
    0x606f24546e50 ---------- T 00655  PRINT "(3)THREES";
    0x606f24546ee0 ---------A T      a GOTO 710
    0x606f24547030 ---------- T 00660  PRINT "(4)FOURS";
    0x606f245470c0 ---------A T      a GOTO 710
    0x606f24547210 ---------- T 00665  PRINT "(5)FIVES";
    0x606f245472a0 ---------A T      a GOTO 710
    0x606f245473f0 ---------- T 00670  PRINT "(6)SIXES";
    0x606f24547480 ---------A T      a GOTO 710
    0x606f245475d0 ---------- T 00675  PRINT "(7)3 OF A KIND";
    0x606f24547660 ---------A T      a GOTO 710
    0x606f245477b0 ---------- T 00680  PRINT "(8)4 OF A KIND";
    0x606f24547840 ---------A T      a GOTO 710
    0x606f24547990 ---------- T 00685  PRINT "(9)FULL HOUSE";
    0x606f24547a30 ---------A T      a GOTO 710
    0x606f24547b80 ---------- T 00690  PRINT "(10)SMALL STRAIGHT";
    0x606f24547be0 ---------- T      a RESTORE
    0x606f24547c70 ---------A T      b GOTO 710
    0x606f24547dc0 ---------- T 00695  PRINT "(11)LARGE STRAIGHT";
    0x606f24547e50 ---------A T      a GOTO 710
    0x606f24547fa0 ---------- T 00700  PRINT "(12)YAHTZEE";
    0x606f24548020 ---------A T      a GOTO 710
    0x606f24548190 ---------A T 00705  PRINT "(13)CHANCE";
    0x606f245483f0 ---------A T 00710  IF E=25 THEN 1030
    0x606f24548710 ---------A   00713  IF I0=25 THEN 1030
    0x606f24548880 ---------A   00715  PRINT ")"
    0x606f24548b60 ---------- T 00720  FOR B=1 TO N
    0x606f24548f10 ---------A T      a FOR B1=1 TO 13
    0x606f24549330 ---------A   00725  IF K(B1,B)=0 THEN 100
    0x606f24549470 ----------   00730  NEXT B1
    0x606f245495a0 ---------A        a NEXT B
    0x606f24549970 ---------- T 00735  FOR B3=1 TO N
    0x606f24549c50 ---------- T      a B5(B3)=0
    0x606f24549f20 ---------- T      b B8(B3)=0
    0x606f2454a050 ---------A T      c NEXT B3
    0x606f2454a0f0 ---------A   00740  PRINT
    0x606f2454a3d0 ----------   00745  FOR B3=1 TO N
    0x606f2454a780 ---------A        a FOR B4=1 TO 6
    0x606f2454af40 ---------A   00750  B5(B3)=B5(B3)+INT(K(B4,B3))
    0x606f2454b070 ----------   00755  NEXT B4
    0x606f2454b1a0 ---------A        a NEXT B3
    0x606f2454b560 ----------   00760  FOR B6=1 TO N
    0x606f2454b910 ---------A        a FOR B7=7 TO 13
    0x606f2454c0d0 ---------A   00765  B8(B6)=B8(B6)+INT(K(B7,B6))
    0x606f2454c200 ----------   00770  NEXT B7
    0x606f2454c330 ---------A        a NEXT B6
    0x606f2454c650 ---------A   00775  FOR B3=1 TO N
    0x606f2454c990 ---------A   00780  IF B5(B3)<63 THEN 790
    0x606f2454cd50 ---------A   00785  K(14,B3)=35
    0x606f2454ce80 ---------A T 00790  NEXT B3
    0x606f2454d100 ----------   00795  LINE INPUT "ENTER 'RETURN' WHEN PRINTER IS READY. ";XX$
    0x606f2454d180 ---------A        a GOSUB 940
    0x606f2454d560 ---------A   00800  FOR A9=1 TO N
    0x606f2454d9c0 ----------   00810  LPRINT TAB(19);A$(A9);"'S TOTALS"
    0x606f2454dc60 ---------A        a LPRINT TAB(19);"***************"
    0x606f2454dd00 ---------A   00815  LPRINT
    0x606f2454e200 ---------A   00820  LPRINT "ACES-----------";INT(K(1,A9))
    0x606f2454e700 ---------A   00825  LPRINT "TWOS-----------";INT(K(2,A9))
    0x606f2454ec00 ---------A   00830  LPRINT "THREES---------";INT(K(3,A9))
    0x606f2454f100 ---------A   00835  LPRINT "FOURS----------";INT(K(4,A9))
    0x606f2454f600 ---------A   00840  LPRINT "FIVES----------";INT(K(5,A9))
    0x606f2454fb00 ---------A   00845  LPRINT "SIXES----------";INT(K(6,A9))
    0x606f24550000 ---------A   00850  LPRINT "3 OF A KIND----";INT(K(7,A9))
    0x606f24550500 ---------A   00855  LPRINT "4 OF A KIND----";INT(K(8,A9))
    0x606f24550a00 ---------A   00860  LPRINT "FULL HOUSE-----";INT(K(9,A9))
    0x606f24550f00 ---------A   00865  LPRINT "SM. STRAIGHT---";INT(K(10,A9))
    0x606f24551400 ---------A   00870  LPRINT "LG. STRAIGHT---";INT(K(11,A9))
    0x606f24551900 ---------A   00875  LPRINT "YAHTZEE--------";INT(K(12,A9))
    0x606f24551e00 ---------A   00880  LPRINT "CHANCE---------";INT(K(13,A9))
    0x606f24551e60 ----------   00885  LPRINT
    0x606f245521d0 ---------A        a LPRINT "TOTAL OF UPPER HALF------";B5(A9)
    0x606f24552230 ----------   00890  LPRINT
    0x606f24552660 ---------A        a LPRINT "BONUS--------------------";K(14,A9)
    0x606f245526c0 ----------   00895  LPRINT
    0x606f24552a10 ---------A        a LPRINT "TOTAL OF LOWER HALF------";B8(A9)
    0x606f24552aa0 ---------A   00900  LPRINT
    0x606f24553370 ---------A   00905  B9=B5(A9)+B8(A9)+K(14,A9)
    0x606f245537c0 ---------A   00910  LPRINT A$(A9);"'S GRAND TOTAL--------------------------";B9
    0x606f24553840 ---------A   00915  GOSUB 940
    0x606f24553970 ---------A   00920  NEXT A9
    0x606f24553be0 ---------A   00925  IF I>13 THEN 210
    0x606f24553c80 ---------A   00930  GOTO 1040
    0x606f24553db0 ----------   00935  PRINT "ANSWER WITH YES OR NO"
    0x606f24553e10 ----------        a RETURN
    0x606f245540f0 ---------- G 00940  FOR E=1 TO 72
    0x606f24554250 ---------- G      a LPRINT "-";
    0x606f24554390 ---------- G      b NEXT E
    0x606f245543e0 ---------- G      c LPRINT
    0x606f24554440 ---------B G      d RETURN
    0x606f245544f0 ---------A T 00945  GOSUB 940
    0x606f24554620 ----------   00950  LPRINT "1**ACES"
    0x606f24554680 ----------        a GOSUB 940
    0x606f245547b0 ----------        b LPRINT "2**TWOS"
    0x606f24554860 ---------A        c GOSUB 940
    0x606f24554990 ----------   00955  LPRINT "3**THREES"
    0x606f245549f0 ----------        a GOSUB 940
    0x606f24554b20 ----------        b LPRINT "4**FOURS"
    0x606f24554bd0 ---------A        c GOSUB 940
    0x606f24554d00 ----------   00960  LPRINT "5**FIVES"
    0x606f24554d60 ----------        a GOSUB 940
    0x606f24554e90 ----------        b LPRINT "6**SIXES"
    0x606f24554f40 ---------A        c GOSUB 940
    0x606f24555070 ----------   00965  LPRINT "7**3 OF A KIND"
    0x606f245550d0 ----------        a GOSUB 940
    0x606f24555200 ----------        b LPRINT "8**4 OF A KIND"
    0x606f245552c0 ---------A        c GOSUB 940
    0x606f245553f0 ----------   00970  LPRINT "9**FULL HOUSE"
    0x606f24555450 ----------        a GOSUB 940
    0x606f24555580 ----------        b LPRINT "10**SM. STRAIGHT"
    0x606f24555630 ---------A        c GOSUB 940
    0x606f24555760 ----------   00975  LPRINT "11**LG. STRAIGHT"
    0x606f245557c0 ----------        a GOSUB 940
    0x606f245558f0 ----------        b LPRINT "12**YAHTZEE"
    0x606f24555980 ---------A        c GOSUB 940
    0x606f24555ab0 ----------   00980  LPRINT "13**CHANCE"
    0x606f24555b70 ---------A        a GOSUB 940
    0x606f24555ee0 ----------   00985  FOR E1=1 TO 8
    0x606f24555f40 ----------        a LPRINT
    0x606f24556080 ----------        b NEXT E1
    0x606f24556270 ----------        c PRINT CHR$(26)
    0x606f245563f0 ---------A        d PRINT "TEAR OFF SCORECARD"
    0x606f24556530 ----------   00990  PRINT "AND HIT 'RETURN'!"
    0x606f24556730 ----------        a INPUT Q
    0x606f245567d0 ---------A        b GOTO 100
    0x606f24556970 ---------C G 00995  PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    0x606f24556b20 ---------C   01000  PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    0x606f24556cd0 ---------C   01005  PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    0x606f24556e50 ---------C   01010  PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    0x606f24556eb0 ---------C   01015  RETURN
    0x606f24556f50 ----------   01020  PRINT
    0x606f245572d0 ----------        a PRINT A$(A);", YOU HAVE THE FOLLOWING SCOREBOARD OPTIONS LEFT:"
    0x606f245574d0 ----------   01025  I0=25
    0x606f24557780 ----------        a FOR I=1 TO 13
    0x606f24557ba0 ----------        b IF K(I,A)=0 THEN 630
    0x606f24557c20 ----------   01027  GOTO 1035
    0x606f24557da0 ---------A T 01030  PRINT "  ";
    0x606f24558130 ---------A T 01035  IF POS(0) > 50 THEN PRINT
    0x606f24558270 ----------   01036  NEXT I
    0x606f245582c0 ----------        a PRINT
    0x606f24558320 ----------        b PRINT
    0x606f24558520 ----------        c I0=0
    0x606f24558570 ---------A        d RETURN
    0x606f24558780 ---------- T 01040  PRINT CHR$(26)
    0x606f24558820 ---------A T      a PRINT
    0x606f24558880 ---------- T 01041  PRINT
    0x606f245589c0 ---------- T      a PRINT "ANOTHER GAME?===> "
    0x606f24558bf0 ---------A T      b INPUT YN$
    0x606f24559020 ---------A   01045  IF LEFT$(YN$,1)="Y" THEN 45
    0x606f24559450 ---------A   01050  IF LEFT$(YN$,1)="N" THEN 1060
    0x606f245594b0 ----------   01055  GOSUB 935
    0x606f24559520 ---------A        a GOTO 1041
    0x606f24559570 ---------A T 01060  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/yahtzee.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x606f2451a6d0 ---------A   01000  PRINT CHR$(26)
    0x606f2451a670 ---------A   01010  PRINT TAB(25);"YAHTZEE"
    0x606f2451c5e0 ---------A   01020  PRINT TAB(20);"CREATIVE COMPUTING"
    0x606f2451b040 ---------A T 01030  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x606f2451b0a0 ---------- T 01040  PRINT
    0x606f2451b500 ---------A   01050  PRINT "MODIFIED FOR THE OSBORNE-1 WITH PRINTER"
    0x606f2451ac20 ---------A T 01060  PRINT "BY PETER FLEMING, SFOG, 2/9/82"
    0x606f2451cf30 ---------A   01070  DIM C(5),K(14,7),F(4),H2(6),L2(6),B5(7),B8(7),A$(7)
    0x606f24523840 ----------   01080  PRINT CHR$(7)
    0x606f24523a40 ----------   01090  PRINT CHR$(7)
    0x606f24523c40 ---------A   01100  PRINT CHR$(7)
    0x606f24523dc0 ---------A   01110  PRINT "THIS IS THE GAME OF YAHTZEE. DO YOU WANT COMMENTS";
    0x606f24523fc0 ----------   01120  INPUT B$
    0x606f245243c0 ---------A   01130  IF LEFT$(B$,1)="N" THEN 1200
    0x606f245247e0 ---------A   01140  IF LEFT$(B$,1)="Y" THEN 1170
    0x606f2451bb80 ----------   01150  GOSUB 91150
    0x606f2451cff0 ---------A   01160  GOTO 1110
    0x606f2451d0b0 ---------A   01170  GOSUB 4430
    0x606f245248a0 ----------   01180  PRINT
    0x606f24524a00 ----------   01190  PRINT "HOW MANY PLAYERS";
    0x606f24524c20 ---------A   01200  INPUT N
    0x606f24524e80 ---------A   01210  IF N<1 THEN 1200
    0x606f24525100 ---------A   01220  IF N<=7 THEN 1250
    0x606f24525240 ---------A   01230  PRINT "THE MAXIMUM NUMBER OF PLAYERS IS 7."
    0x606f245252c0 ---------A   01240  GOTO 1200
    0x606f24525690 ---------A   01250  FOR A0=1 TO N
    0x606f245258f0 ----------   01260  PRINT "NAME OF PLAYER #";A0;
    0x606f24525b10 ----------   01270  INPUT A$(A0)
    0x606f24525c50 ---------A   01280  NEXT A0
    0x606f24525cf0 ----------   01290  PRINT
    0x606f24525e60 ----------   01300  PRINT "WOULD YOU LIKE A PRINTED SCORECARD";
    0x606f24525fd0 ---------A   01310  INPUT B$
    0x606f24526400 ---------A   01320  IF LEFT$(B$,1)="N" THEN 1390
    0x606f24526820 ---------A   01330  IF LEFT$(B$,1)="Y" THEN 4080
    0x606f24526880 ----------   01340  GOSUB 4020
    0x606f24526900 ---------A   01350  GOTO 1310
    0x606f24526bb0 ----------   01360  H=0
    0x606f24526c00 ----------   01370  PRINT
    0x606f24526fe0 ----------   01380  A=A+1
    0x606f24527350 ---------A   01390  IF A<>N+1 THEN 1440
    0x606f24527590 ---------A   01400  A=1
    0x606f24527900 ----------   01410  FOR B=1 TO 5
    0x606f24527fa0 ----------   01420  C(B)=INT(6*RND(1))+1
    0x606f245280d0 ----------   01430  NEXT B
    0x606f24528160 ---------A   01440  PRINT
    0x606f245281c0 ----------   01450  PRINT
    0x606f24528500 ----------   01460  PRINT A$(A);"'S NUMBERS:  ";
    0x606f24528860 ---------A   01470  H=H+1
    0x606f24529150 ----------   01480  PRINT C(1);C(2);C(3);C(4);C(5)
    0x606f245293d0 ---------A   01490  IF H=3 THEN 1820
    0x606f24529540 ----------   01500  PRINT "HOW MANY DICE TO CHANGE";
    0x606f24529760 ---------A   01510  INPUT E
    0x606f245299c0 ---------A   01520  IF E<>25 THEN 1550
    0x606f24529a20 ----------   01530  GOSUB 4490
    0x606f24529a90 ---------A   01540  GOTO 1510
    0x606f24529ce0 ---------A   01550  IF E>5 THEN 1510
    0x606f2452a160 ---------A   01560  IF E<0 THEN 1510
    0x606f2452a4c0 ---------A   01570  IF INT(E)<>E THEN 1510
    0x606f2452a720 ---------A   01580  IF E=0 THEN 1820
    0x606f2452a990 ---------A   01590  IF E=5 THEN 1440
    0x606f2452ad10 ----------   01600  FOR F3=1 TO 4
    0x606f2452aff0 ----------   01610  F(F3)=0
    0x606f2452b120 ---------A   01620  NEXT F3
    0x606f2452b2d0 ---------A   01630  PRINT "WHICH DICE TO CHANGE";
    0x606f2452b730 ---------A   01640  ON E GOTO 1660,1680,1700,1710
    0x606f2452b930 ----------   01650  INPUT F(1)
    0x606f2452b9c0 ---------A   01660  GOTO 1740
    0x606f2452bd50 ----------   01670  INPUT F(1),F(2)
    0x606f2452bde0 ---------A   01680  GOTO 1740
    0x606f2452c310 ----------   01690  INPUT F(1),F(2),F(3)
    0x606f2452c3a0 ---------A   01700  GOTO 1740
    0x606f2452cab0 ---------A   01710  INPUT F(1),F(2),F(3),F(4)
    0x606f2452ce30 ----------   01720  FOR F1=1 TO 4
    0x606f2452d2f0 ----------   01730  F(F1)=INT(F(F1))
    0x606f2452d620 ---------A   01740  IF F(F1)>5 THEN 1630
    0x606f2452d960 ---------A   01750  IF F(F1)<0 THEN 1630
    0x606f2452daa0 ---------A   01760  NEXT F1
    0x606f2452de40 ----------   01770  FOR F2=1 TO 4
    0x606f2452e190 ---------A   01780  IF F(F2)=0 THEN 1800
    0x606f2452e930 ---------A   01790  C(F(F2))=INT(6*RND(1))+1
    0x606f2452ea60 ---------A   01800  NEXT F2
    0x606f2452eb10 ---------A   01810  GOTO 1470
    0x606f2452ee60 ---------A   01820  PRINT A$(A);" -- SCOREBOARD NUMBER";
    0x606f2452f080 ---------A   01830  INPUT I
    0x606f2452f2e0 ---------A   01840  IF I<>25 THEN 1870 
    0x606f2452f340 ----------   01850  GOSUB 4490
    0x606f2452f3b0 ---------A   01860  GOTO 1820
    0x606f2452f610 ---------A   01870  IF I<1 THEN 1820
    0x606f2452f910 ----------   01880  I=INT(I)
    0x606f2452fb70 ---------A   01890  IF I<14 THEN 1960
    0x606f2452fcd0 ----------   01900  PRINT "CONFIRM";
    0x606f2452fe40 ---------A   01910  INPUT B$
    0x606f24530270 ---------A   01920  IF LEFT$(B$,1)="N" THEN 1820
    0x606f24530690 ---------A   01930  IF LEFT$(B$,1)="Y" THEN 3530
    0x606f245306f0 ----------   01940  GOSUB 4020
    0x606f24530770 ---------A   01950  GOTO 1910
    0x606f24530ba0 ---------A   01960  IF K(I,A)=0 THEN 2000
    0x606f24531030 ---------A   01970  PRINT A$(A);", YOU HAVE ALREADY USED ROW #";I;
    0x606f24531630 ----------   01980  PRINT "YOU HAVE"K(I,A);"POINTS IN ROW #";I
    0x606f245316b0 ---------A   01990  GOTO 1820
    0x606f24531910 ---------A   02000  IF I>6 THEN 2160
    0x606f24531db0 ---------A   02010  REM***CATEGORIES ONE THOUGH SIX
    0x606f24531ff0 ---------A   02020  K=0
    0x606f24532360 ----------   02030  FOR G=1 TO 5
    0x606f245326c0 ---------A   02040  IF C(G)<>I THEN 2070
    0x606f24532a30 ---------A   02050  K=K+I
    0x606f24532b60 ----------   02060  NEXT G
    0x606f24532db0 ---------A   02070  IF K=0 THEN 2130
    0x606f24533030 ---------A   02080  IF K<>1 THEN 2150
    0x606f24533380 ---------A   02090  PRINT A$(A);", YOU HAVE 1 POINT IN ROW # 1 (ACES)"
    0x606f24533720 ----------   02100  K(1,A)=1
    0x606f24533790 ---------A   02110  GOTO 3460
    0x606f24533b40 ----------   02120  K(I,A)=.4
    0x606f24533bb0 ---------A   02130  GOTO 3110
    0x606f24533f80 ----------   02140  K(I,A)=K
    0x606f24534010 ---------A   02150  GOTO 3110
    0x606f245347c0 ---------A   02160  ON I-6 GOTO 2200,2230,2550,2810,2810,2250,3050
    0x606f24534860 ---------A   02170  REM ***3 OF A KIND, 4 OF A KIND, YAHTZEE
    0x606f24534b50 ----------   02180  R=3
    0x606f24535660 ----------   02190  T=C(1)+C(2)+C(3)+C(4)+C(5)
    0x606f245356f0 ---------A   02200  GOTO 2280
    0x606f245358e0 ----------   02210  R=4
    0x606f24536330 ----------   02220  T=C(1)+C(2)+C(3)+C(4)+C(5)
    0x606f245363a0 ---------A   02230  GOTO 2280
    0x606f24536590 ----------   02240  R=5
    0x606f245367b0 ---------A   02250  T=50
    0x606f24536b20 ----------   02260  FOR H3=1 TO 6
    0x606f24536e00 ----------   02270  H2(H3)=0
    0x606f24536f30 ---------A   02280  NEXT H3
    0x606f24537210 ----------   02290  FOR H=1 TO 6
    0x606f245375c0 ---------A   02300  FOR H1=1 TO 5
    0x606f24537920 ---------A   02310  IF C(H1)<>H THEN 2340
    0x606f24537e20 ---------A   02320  H2(H)=H2(H)+1
    0x606f24537f50 ----------   02330  NEXT H1
    0x606f24538080 ---------A   02340  NEXT H
    0x606f24538440 ---------A   02350  FOR H4=1 TO 6
    0x606f245387b0 ---------A   02360  IF H2(H4)>=R THEN 2400
    0x606f245388f0 ----------   02370  NEXT H4
    0x606f24538ca0 ----------   02380  K(I,A)=.4
    0x606f24538d20 ---------A   02390  GOTO 3110
    0x606f24539140 ---------A   02400  IF K(I,A)=50 THEN 2470
    0x606f24539520 ----------   02410  K(I,A)=T
    0x606f245397a0 ---------A   02420  IF I<>12 THEN 2540
    0x606f245399a0 ----------   02430  PRINT CHR$(7)
    0x606f24539ba0 ----------   02440  PRINT CHR$(7)
    0x606f24539f20 ----------   02450  FOR V4=1 TO 7
    0x606f2453a140 ----------   02460  PRINT CHR$(7);
    0x606f2453a280 ---------A   02470  NEXT V4
    0x606f2453a740 ---------A   02480  PRINT "CONGRATULATIONS, ";A$(A);", YOU HAVE A YAHTZEE!!!"
    0x606f2453a940 ----------   02490  PRINT CHR$(7)
    0x606f2453ab40 ----------   02500  PRINT CHR$(7)
    0x606f2453ae00 ----------   02510  FOR V4=1 TO 7
    0x606f2453b020 ----------   02520  PRINT CHR$(7);
    0x606f2453b160 ---------A   02530  NEXT V4
    0x606f2453b1f0 ---------A   02540  GOTO 3110
    0x606f2453b260 ---------A   02550  REM ***FULL HOUSE
    0x606f2453b550 ----------   02560  L4=0
    0x606f2453b800 ----------   02570  L5=0
    0x606f2453bb70 ----------   02580  FOR L=1 TO 6
    0x606f2453be50 ----------   02590  L2(L)=0
    0x606f2453bf80 ---------A   02600  NEXT L
    0x606f2453c260 ----------   02610  FOR L=1 TO 6
    0x606f2453c610 ---------A   02620  FOR L1=1 TO 5
    0x606f2453c970 ---------A   02630  IF C(L1)<>L THEN 2660
    0x606f2453ce70 ---------A   02640  L2(L)=L2(L)+1
    0x606f2453cfa0 ----------   02650  NEXT L1
    0x606f2453d0d0 ---------A   02660  NEXT L
    0x606f2453d480 ---------A   02670  FOR L3=1 TO 6
    0x606f2453d6f0 ---------A   02680  IF L5=1 THEN 2720
    0x606f2453da30 ---------A   02690  IF L2(L3)<>2 THEN 2720
    0x606f2453dd50 ----------   02700  L5=L5+1
    0x606f2453ddd0 ---------A   02710  GOTO 2730
    0x606f2453e100 ---------A   02720  IF L2(L3)<>3 THEN 2740
    0x606f2453e440 ---------A   02730  L4=L4+1
    0x606f2453e570 ---------A   02740  NEXT L3
    0x606f2453e7e0 ---------A   02750  IF L4=2 THEN 2790
    0x606f2453eb80 ----------   02760  K(9,A)=.4
    0x606f2453ebf0 ---------A   02770  GOTO 3110
    0x606f2453ef80 ----------   02780  K(9,A)=25
    0x606f2453eff0 ---------A   02790  GOTO 3110
    0x606f2453f080 ----------   02800  GOTO 3110
    0x606f2453f100 ---------A   02810  REM ***PUT NUMBERS IN ORDER, STRAIGHTS
    0x606f2453f4a0 ----------   02820  FOR M2=1 TO 4
    0x606f2453f850 ---------A   02830  FOR M1=1 TO 4
    0x606f2453fda0 ---------A   02840  IF C(M1+1)>=C(M1) THEN 2890
    0x606f24540160 ----------   02850  Z=C(M1)
    0x606f24540630 ----------   02860  C(M1)=C(M1+1)
    0x606f24540a40 ---------A   02870  C(M1+1)=Z
    0x606f24540b70 ----------   02880  NEXT M1
    0x606f24540ca0 ---------A   02890  NEXT M2
    0x606f24540f90 ---------A   02900  G1=1
    0x606f24541320 ---------A   02910  FOR X=2 TO 5
    0x606f245417d0 ---------A   02920  K(13,A)=Y1
    0x606f24541e00 ---------A   02930  IF C(X-1)+1<>C(X) THEN 2950
    0x606f24542140 ---------A   02940  G1=G1+1
    0x606f24542270 ---------A   02950  NEXT X
    0x606f245424e0 ---------A   02960  IF I=11 THEN 3000
    0x606f24542740 ---------A   02970  IF G1<4 THEN 3040
    0x606f24542b00 ----------   02980  K(I,A)=30
    0x606f24542b70 ---------A   02990  GOTO 3110
    0x606f24542dc0 ---------A   03000  IF G1<>5 THEN 3040
    0x606f24543180 ----------   03010  K(I,A)=40
    0x606f245431f0 ---------A   03020  GOTO 3110
    0x606f245435a0 ----------   03030  K(I,A)=.4
    0x606f24543610 ---------A   03040  GOTO 3110
    0x606f24543680 ---------A   03050  REM ***CHANCE
    0x606f245440e0 ---------A   03060  Y1=0
    0x606f24544450 ----------   03070  FOR Y=1 TO 5
    0x606f24544870 ----------   03080  Y1=C(Y)+Y1
    0x606f245449a0 ----------   03090  NEXT Y
    0x606f24544da0 ---------A   03100  K(13,A)=Y1
    0x606f24545790 ---------A   03110  PRINT A$(A);", YOU NOW HAVE";INT(K(I,A));"POINTS IN ROW #";I;", ";
    0x606f24545910 ---------A   03120  PRINT "(";
    0x606f24545b80 ---------A   03130  IF I>6 THEN 3150
    0x606f24546180 ---------A   03140  ON I GOTO 3170,3190,3210,3230,3250,3270
    0x606f24546930 ---------A   03150  ON I-6 GOTO 3290,3310,3330,3360,3380,3400,3410
    0x606f24546a90 ----------   03160  PRINT "(1)ACES";
    0x606f24546b20 ---------A   03170  GOTO 3420
    0x606f24546c70 ----------   03180  PRINT "(2)TWOS";
    0x606f24546d00 ---------A   03190  GOTO 3420
    0x606f24546e50 ----------   03200  PRINT "(3)THREES";
    0x606f24546ee0 ---------A   03210  GOTO 3420
    0x606f24547030 ----------   03220  PRINT "(4)FOURS";
    0x606f245470c0 ---------A   03230  GOTO 3420
    0x606f24547210 ----------   03240  PRINT "(5)FIVES";
    0x606f245472a0 ---------A   03250  GOTO 3420
    0x606f245473f0 ----------   03260  PRINT "(6)SIXES";
    0x606f24547480 ---------A   03270  GOTO 3420
    0x606f245475d0 ----------   03280  PRINT "(7)3 OF A KIND";
    0x606f24547660 ---------A   03290  GOTO 3420
    0x606f245477b0 ----------   03300  PRINT "(8)4 OF A KIND";
    0x606f24547840 ---------A   03310  GOTO 3420
    0x606f24547990 ----------   03320  PRINT "(9)FULL HOUSE";
    0x606f24547a30 ---------A   03330  GOTO 3420
    0x606f24547b80 ----------   03340  PRINT "(10)SMALL STRAIGHT";
    0x606f24547be0 ----------   03350  RESTORE
    0x606f24547c70 ---------A   03360  GOTO 3420
    0x606f24547dc0 ----------   03370  PRINT "(11)LARGE STRAIGHT";
    0x606f24547e50 ---------A   03380  GOTO 3420
    0x606f24547fa0 ----------   03390  PRINT "(12)YAHTZEE";
    0x606f24548020 ---------A   03400  GOTO 3420
    0x606f24548190 ---------A   03410  PRINT "(13)CHANCE";
    0x606f245483f0 ---------A   03420  IF E=25 THEN 4540
    0x606f24548710 ---------A   03430  IF I0=25 THEN 4540
    0x606f24548880 ---------A   03440  PRINT ")"
    0x606f24548b60 ----------   03450  FOR B=1 TO N
    0x606f24548f10 ---------A   03460  FOR B1=1 TO 13
    0x606f24549330 ---------A   03470  IF K(B1,B)=0 THEN 1390
    0x606f24549470 ----------   03480  NEXT B1
    0x606f245495a0 ---------A   03490  NEXT B
    0x606f24549970 ----------   03500  FOR B3=1 TO N
    0x606f24549c50 ----------   03510  B5(B3)=0
    0x606f24549f20 ----------   03520  B8(B3)=0
    0x606f2454a050 ---------A   03530  NEXT B3
    0x606f2454a0f0 ---------A   03540  PRINT
    0x606f2454a3d0 ----------   03550  FOR B3=1 TO N
    0x606f2454a780 ---------A   03560  FOR B4=1 TO 6
    0x606f2454af40 ---------A   03570  B5(B3)=B5(B3)+INT(K(B4,B3))
    0x606f2454b070 ----------   03580  NEXT B4
    0x606f2454b1a0 ---------A   03590  NEXT B3
    0x606f2454b560 ----------   03600  FOR B6=1 TO N
    0x606f2454b910 ---------A   03610  FOR B7=7 TO 13
    0x606f2454c0d0 ---------A   03620  B8(B6)=B8(B6)+INT(K(B7,B6))
    0x606f2454c200 ----------   03630  NEXT B7
    0x606f2454c330 ---------A   03640  NEXT B6
    0x606f2454c650 ---------A   03650  FOR B3=1 TO N
    0x606f2454c990 ---------A   03660  IF B5(B3)<63 THEN 3680
    0x606f2454cd50 ---------A   03670  K(14,B3)=35
    0x606f2454ce80 ---------A   03680  NEXT B3
    0x606f2454d100 ----------   03690  LINE INPUT "ENTER 'RETURN' WHEN PRINTER IS READY. ";XX$
    0x606f2454d180 ---------A   03700  GOSUB 4070
    0x606f2454d560 ---------A   03710  FOR A9=1 TO N
    0x606f2454d9c0 ----------   03720  LPRINT TAB(19);A$(A9);"'S TOTALS"
    0x606f2454dc60 ---------A   03730  LPRINT TAB(19);"***************"
    0x606f2454dd00 ---------A   03740  LPRINT
    0x606f2454e200 ---------A   03750  LPRINT "ACES-----------";INT(K(1,A9))
    0x606f2454e700 ---------A   03760  LPRINT "TWOS-----------";INT(K(2,A9))
    0x606f2454ec00 ---------A   03770  LPRINT "THREES---------";INT(K(3,A9))
    0x606f2454f100 ---------A   03780  LPRINT "FOURS----------";INT(K(4,A9))
    0x606f2454f600 ---------A   03790  LPRINT "FIVES----------";INT(K(5,A9))
    0x606f2454fb00 ---------A   03800  LPRINT "SIXES----------";INT(K(6,A9))
    0x606f24550000 ---------A   03810  LPRINT "3 OF A KIND----";INT(K(7,A9))
    0x606f24550500 ---------A   03820  LPRINT "4 OF A KIND----";INT(K(8,A9))
    0x606f24550a00 ---------A   03830  LPRINT "FULL HOUSE-----";INT(K(9,A9))
    0x606f24550f00 ---------A   03840  LPRINT "SM. STRAIGHT---";INT(K(10,A9))
    0x606f24551400 ---------A   03850  LPRINT "LG. STRAIGHT---";INT(K(11,A9))
    0x606f24551900 ---------A   03860  LPRINT "YAHTZEE--------";INT(K(12,A9))
    0x606f24551e00 ---------A   03870  LPRINT "CHANCE---------";INT(K(13,A9))
    0x606f24551e60 ----------   03880  LPRINT
    0x606f245521d0 ---------A   03890  LPRINT "TOTAL OF UPPER HALF------";B5(A9)
    0x606f24552230 ----------   03900  LPRINT
    0x606f24552660 ---------A   03910  LPRINT "BONUS--------------------";K(14,A9)
    0x606f245526c0 ----------   03920  LPRINT
    0x606f24552a10 ---------A   03930  LPRINT "TOTAL OF LOWER HALF------";B8(A9)
    0x606f24552aa0 ---------A   03940  LPRINT
    0x606f24553370 ---------A   03950  B9=B5(A9)+B8(A9)+K(14,A9)
    0x606f245537c0 ---------A   03960  LPRINT A$(A9);"'S GRAND TOTAL--------------------------";B9
    0x606f24553840 ---------A   03970  GOSUB 4070
    0x606f24553970 ---------A   03980  NEXT A9
    0x606f24553be0 ---------A   03990  IF I>13 THEN 1820
    0x606f24553c80 ---------A   04000  GOTO 4620
    0x606f24553db0 ----------   04010  PRINT "ANSWER WITH YES OR NO"
    0x606f24553e10 ----------   04020  RETURN
    0x606f245540f0 ----------   04030  FOR E=1 TO 72
    0x606f24554250 ----------   04040  LPRINT "-";
    0x606f24554390 ----------   04050  NEXT E
    0x606f245543e0 ----------   04060  LPRINT
    0x606f24554440 ---------B   04070  RETURN
    0x606f245544f0 ---------A   04080  GOSUB 4070
    0x606f24554620 ----------   04090  LPRINT "1**ACES"
    0x606f24554680 ----------   04100  GOSUB 4070
    0x606f245547b0 ----------   04110  LPRINT "2**TWOS"
    0x606f24554860 ---------A   04120  GOSUB 4070
    0x606f24554990 ----------   04130  LPRINT "3**THREES"
    0x606f245549f0 ----------   04140  GOSUB 4070
    0x606f24554b20 ----------   04150  LPRINT "4**FOURS"
    0x606f24554bd0 ---------A   04160  GOSUB 4070
    0x606f24554d00 ----------   04170  LPRINT "5**FIVES"
    0x606f24554d60 ----------   04180  GOSUB 4070
    0x606f24554e90 ----------   04190  LPRINT "6**SIXES"
    0x606f24554f40 ---------A   04200  GOSUB 4070
    0x606f24555070 ----------   04210  LPRINT "7**3 OF A KIND"
    0x606f245550d0 ----------   04220  GOSUB 4070
    0x606f24555200 ----------   04230  LPRINT "8**4 OF A KIND"
    0x606f245552c0 ---------A   04240  GOSUB 4070
    0x606f245553f0 ----------   04250  LPRINT "9**FULL HOUSE"
    0x606f24555450 ----------   04260  GOSUB 4070
    0x606f24555580 ----------   04270  LPRINT "10**SM. STRAIGHT"
    0x606f24555630 ---------A   04280  GOSUB 4070
    0x606f24555760 ----------   04290  LPRINT "11**LG. STRAIGHT"
    0x606f245557c0 ----------   04300  GOSUB 4070
    0x606f245558f0 ----------   04310  LPRINT "12**YAHTZEE"
    0x606f24555980 ---------A   04320  GOSUB 4070
    0x606f24555ab0 ----------   04330  LPRINT "13**CHANCE"
    0x606f24555b70 ---------A   04340  GOSUB 4070
    0x606f24555ee0 ----------   04350  FOR E1=1 TO 8
    0x606f24555f40 ----------   04360  LPRINT
    0x606f24556080 ----------   04370  NEXT E1
    0x606f24556270 ----------   04380  PRINT CHR$(26)
    0x606f245563f0 ---------A   04390  PRINT "TEAR OFF SCORECARD"
    0x606f24556530 ----------   04400  PRINT "AND HIT 'RETURN'!"
    0x606f24556730 ----------   04410  INPUT Q
    0x606f245567d0 ---------A   04420  GOTO 1390
    0x606f24556970 ---------C   04430  PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    0x606f24556b20 ---------C   04440  PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    0x606f24556cd0 ---------C   04450  PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    0x606f24556e50 ---------C   04460  PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    0x606f24556eb0 ---------C   04470  RETURN
    0x606f24556f50 ----------   04480  PRINT
    0x606f245572d0 ----------   04490  PRINT A$(A);", YOU HAVE THE FOLLOWING SCOREBOARD OPTIONS LEFT:"
    0x606f245574d0 ----------   04500  I0=25
    0x606f24557780 ----------   04510  FOR I=1 TO 13
    0x606f24557ba0 ----------   04520  IF K(I,A)=0 THEN 3130
    0x606f24557c20 ----------   04530  GOTO 4550
    0x606f24557da0 ---------A   04540  PRINT "  ";
    0x606f24558130 ---------A   04550  IF POS(0) > 50 THEN PRINT
    0x606f24558270 ----------   04560  NEXT I
    0x606f245582c0 ----------   04570  PRINT
    0x606f24558320 ----------   04580  PRINT
    0x606f24558520 ----------   04590  I0=0
    0x606f24558570 ---------A   04600  RETURN
    0x606f24558780 ----------   04610  PRINT CHR$(26)
    0x606f24558820 ---------A   04620  PRINT
    0x606f24558880 ----------   04630  PRINT
    0x606f245589c0 ----------   04640  PRINT "ANOTHER GAME?===> "
    0x606f24558bf0 ---------A   04650  INPUT YN$
    0x606f24559020 ---------A   04660  IF LEFT$(YN$,1)="Y" THEN 1200
    0x606f24559450 ---------A   04670  IF LEFT$(YN$,1)="N" THEN 4700
    0x606f245594b0 ----------   04680  GOSUB 4020
    0x606f24559520 ---------A   04690  GOTO 4650
    0x606f24559570 ---------A   04700  END
 */

