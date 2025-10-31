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
    0x58bd4d6446d0 ---------A   00005  PRINT CHR$(26)
    0x58bd4d644670 ---------A   00007  PRINT TAB(25);"YAHTZEE"
    0x58bd4d6465e0 ---------A   00008  PRINT TAB(20);"CREATIVE COMPUTING"
    0x58bd4d645040 ---------A   00009  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x58bd4d645500 ---------A   00010  PRINT:PRINT "MODIFIED FOR THE OSBORNE-1 WITH PRINTER"
    0x58bd4d644c20 ---------A   00011  PRINT "BY PETER FLEMING, SFOG, 2/9/82"
    0x58bd4d646f30 ---------A   00015  DIM C(5),K(14,7),F(4),H2(6),L2(6),B5(7),B8(7),A$(7)
    0x58bd4d64dc40 ---------A   00020  PRINT CHR$(7):PRINT CHR$(7):PRINT CHR$(7)
    0x58bd4d64ddc0 ---------A T 00025  PRINT "THIS IS THE GAME OF YAHTZEE. DO YOU WANT COMMENTS";
    0x58bd4d64e3c0 ---------A   00030  INPUT B$:IF LEFT$(B$,1)="N" THEN 45
    0x58bd4d64e7e0 ---------A   00033  IF LEFT$(B$,1)="Y" THEN 40
    0x58bd4d646ff0 ---------A   00035  GOSUB 935: GOTO 25
    0x58bd4d6470b0 ---------A T 00040  GOSUB 995
    0x58bd4d64ec20 ---------A T 00045  PRINT:PRINT "HOW MANY PLAYERS";:INPUT N
    0x58bd4d64ee80 ---------A   00050  IF N<1 THEN 45
    0x58bd4d64f100 ---------A   00053  IF N<=7 THEN 75
    0x58bd4d64f240 ---------A   00055  PRINT "THE MAXIMUM NUMBER OF PLAYERS IS 7."
    0x58bd4d64f2c0 ---------A   00070  GOTO 45
    0x58bd4d64f690 ---------A T 00075  FOR A0=1 TO N
    0x58bd4d64fc50 ---------A   00080  PRINT "NAME OF PLAYER #";A0;:INPUT A$(A0):NEXT A0
    0x58bd4d64ffd0 ---------A T 00085  PRINT:PRINT "WOULD YOU LIKE A PRINTED SCORECARD";:INPUT B$
    0x58bd4d650400 ---------A   00090  IF LEFT$(B$,1)="N" THEN 100
    0x58bd4d650820 ---------A   00093  IF LEFT$(B$,1)="Y" THEN 945
    0x58bd4d650900 ---------A   00095  GOSUB 935:GOTO 85
    0x58bd4d651350 ---------A T 00100  H=0:PRINT:A=A+1:IF A<>N+1 THEN 105
    0x58bd4d651590 ---------A   00104  A=1
    0x58bd4d652160 ---------A T 00105  FOR B=1 TO 5:C(B)=INT(6*RND(1))+1:NEXT B:PRINT
    0x58bd4d652860 ---------A T 00110  PRINT:PRINT A$(A);"'S NUMBERS:  ";:H=H+1
    0x58bd4d6533d0 ---------A   00115  PRINT C(1);C(2);C(3);C(4);C(5):IF H=3 THEN 210
    0x58bd4d653760 ---------A T 00120  PRINT "HOW MANY DICE TO CHANGE";:INPUT E
    0x58bd4d6539c0 ---------A   00125  IF E<>25 THEN 130
    0x58bd4d653a90 ---------A   00127  GOSUB 1020:GOTO 120
    0x58bd4d653ce0 ---------A T 00130  IF E>5 THEN 120
    0x58bd4d654160 ---------A   00135  IF E<0 THEN 120
    0x58bd4d6544c0 ---------A   00137  IF INT(E)<>E THEN 120
    0x58bd4d654720 ---------A   00140  IF E=0 THEN 210
    0x58bd4d654990 ---------A   00143  IF E=5 THEN 105
    0x58bd4d655120 ---------A   00145  FOR F3=1 TO 4:F(F3)=0:NEXT F3
    0x58bd4d6552d0 ---------A T 00150  PRINT "WHICH DICE TO CHANGE";
    0x58bd4d655730 ---------A   00155  ON E GOTO 160,165,170,175
    0x58bd4d6559c0 ---------A T 00160  INPUT F(1):GOTO 180
    0x58bd4d655de0 ---------A T 00165  INPUT F(1),F(2):GOTO 180
    0x58bd4d6563a0 ---------A T 00170  INPUT F(1),F(2),F(3):GOTO 180
    0x58bd4d656ab0 ---------A T 00175  INPUT F(1),F(2),F(3),F(4)
    0x58bd4d657620 ---------A T 00180  FOR F1=1 TO 4:F(F1)=INT(F(F1)):IF F(F1)>5 THEN 150
    0x58bd4d657960 ---------A   00185  IF F(F1)<0 THEN 150
    0x58bd4d657aa0 ---------A   00187  NEXT F1
    0x58bd4d658190 ---------A   00190  FOR F2=1 TO 4:IF F(F2)=0 THEN 200
    0x58bd4d658930 ---------A   00195  C(F(F2))=INT(6*RND(1))+1
    0x58bd4d658a60 ---------A T 00200  NEXT F2
    0x58bd4d658b10 ---------A   00205  GOTO 110
    0x58bd4d658e60 ---------A T 00210  PRINT A$(A);" -- SCOREBOARD NUMBER";
    0x58bd4d659080 ---------A   00215  INPUT I
    0x58bd4d6592e0 ---------A   00220  IF I<>25 THEN 225 
    0x58bd4d6593b0 ---------A   00223  GOSUB 1020:GOTO 210
    0x58bd4d659610 ---------A T 00225  IF I<1 THEN 210
    0x58bd4d659b70 ---------A   00227  I=INT(I):IF I<14 THEN 245
    0x58bd4d659e40 ---------A T 00230  PRINT "CONFIRM";:INPUT B$
    0x58bd4d65a270 ---------A   00235  IF LEFT$(B$,1)="N" THEN 210
    0x58bd4d65a690 ---------A   00237  IF LEFT$(B$,1)="Y" THEN 735
    0x58bd4d65a770 ---------A   00240  GOSUB 935:GOTO 230
    0x58bd4d65aba0 ---------A T 00245  IF K(I,A)=0 THEN 260
    0x58bd4d65b030 ---------A   00250  PRINT A$(A);", YOU HAVE ALREADY USED ROW #";I;
    0x58bd4d65b6b0 ---------A   00255  PRINT "YOU HAVE"K(I,A);"POINTS IN ROW #";I:GOTO 210
    0x58bd4d65b910 ---------A T 00260  IF I>6 THEN 305
    0x58bd4d65bdb0 ---------A   00265  REM***CATEGORIES ONE THOUGH SIX
    0x58bd4d65bff0 ---------A   00270  K=0
    0x58bd4d65c6c0 ---------A   00275  FOR G=1 TO 5:IF C(G)<>I THEN 280
    0x58bd4d65ca30 ---------A   00277  K=K+I
    0x58bd4d65cdb0 ---------A T 00280  NEXT G:IF K=0 THEN 295
    0x58bd4d65d030 ---------A   00283  IF K<>1 THEN 300
    0x58bd4d65d380 ---------A   00285  PRINT A$(A);", YOU HAVE 1 POINT IN ROW # 1 (ACES)"
    0x58bd4d65d790 ---------A   00290  K(1,A)=1:GOTO 720
    0x58bd4d65dbb0 ---------A T 00295  K(I,A)=.4:GOTO 620
    0x58bd4d65e010 ---------A T 00300  K(I,A)=K:GOTO 620
    0x58bd4d65e7c0 ---------A T 00305  ON I-6 GOTO 315,320,400,485,485,325,605
    0x58bd4d65e860 ---------A   00310  REM ***3 OF A KIND, 4 OF A KIND, YAHTZEE
    0x58bd4d65f6f0 ---------A T 00315  R=3:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 330
    0x58bd4d6603a0 ---------A T 00320  R=4:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 330
    0x58bd4d6607b0 ---------A T 00325  R=5:T=50
    0x58bd4d660f30 ---------A T 00330  FOR H3=1 TO 6:H2(H3)=0:NEXT H3
    0x58bd4d6615c0 ---------A   00335  FOR H=1 TO 6:FOR H1=1 TO 5
    0x58bd4d661920 ---------A   00340  IF C(H1)<>H THEN 350
    0x58bd4d661e20 ---------A   00345  H2(H)=H2(H)+1
    0x58bd4d662080 ---------A T 00350  NEXT H1:NEXT H
    0x58bd4d662440 ---------A   00355  FOR H4=1 TO 6
    0x58bd4d6627b0 ---------A   00360  IF H2(H4)>=R THEN 370
    0x58bd4d662d20 ---------A   00365  NEXT H4:K(I,A)=.4:GOTO 620
    0x58bd4d663140 ---------A T 00370  IF K(I,A)=50 THEN 380
    0x58bd4d6637a0 ---------A   00375  K(I,A)=T:IF I<>12 THEN 395
    0x58bd4d664280 ---------A T 00380  PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x58bd4d664740 ---------A   00385  PRINT "CONGRATULATIONS, ";A$(A);", YOU HAVE A YAHTZEE!!!"
    0x58bd4d665160 ---------A   00390  PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x58bd4d6651f0 ---------A T 00395  GOTO 620
    0x58bd4d665260 ---------A T 00400  REM ***FULL HOUSE
    0x58bd4d665f80 ---------A   00405  L4=0:L5=0:FOR L=1 TO 6:L2(L)=0:NEXT L
    0x58bd4d666610 ---------A   00410  FOR L=1 TO 6:FOR L1=1 TO 5
    0x58bd4d666970 ---------A   00415  IF C(L1)<>L THEN 425
    0x58bd4d666e70 ---------A   00420  L2(L)=L2(L)+1
    0x58bd4d6670d0 ---------A T 00425  NEXT L1:NEXT L
    0x58bd4d667480 ---------A   00430  FOR L3=1 TO 6
    0x58bd4d6676f0 ---------A   00435  IF L5=1 THEN 450
    0x58bd4d667a30 ---------A   00440  IF L2(L3)<>2 THEN 450
    0x58bd4d667dd0 ---------A   00445  L5=L5+1:GOTO 455
    0x58bd4d668100 ---------A T 00450  IF L2(L3)<>3 THEN 460
    0x58bd4d668440 ---------A T 00455  L4=L4+1
    0x58bd4d668570 ---------A T 00460  NEXT L3
    0x58bd4d6687e0 ---------A   00465  IF L4=2 THEN 475
    0x58bd4d668bf0 ---------A   00470  K(9,A)=.4:GOTO 620
    0x58bd4d668ff0 ---------A T 00475  K(9,A)=25:GOTO 620
    0x58bd4d669080 ----------   00480  GOTO 620
    0x58bd4d669100 ---------A T 00485  REM ***PUT NUMBERS IN ORDER, STRAIGHTS
    0x58bd4d669850 ---------A   00490  FOR M2=1 TO 4:FOR M1=1 TO 4
    0x58bd4d669da0 ---------A   00495  IF C(M1+1)>=C(M1) THEN 507
    0x58bd4d66aa40 ---------A   00500  Z=C(M1):C(M1)=C(M1+1):C(M1+1)=Z
    0x58bd4d66aca0 ---------A T 00507  NEXT M1:NEXT M2
    0x58bd4d66af90 ---------A   00510  G1=1
    0x58bd4d66b320 ---------A   00515  FOR X=2 TO 5
    0x58bd4d66b7d0 ---------A   00517  K(13,A)=Y1
    0x58bd4d66be00 ---------A   00525  IF C(X-1)+1<>C(X) THEN 540
    0x58bd4d66c140 ---------A   00530  G1=G1+1
    0x58bd4d66c270 ---------A T 00540  NEXT X
    0x58bd4d66c4e0 ---------A   00545  IF I=11 THEN 560
    0x58bd4d66c740 ---------A   00550  IF G1<4 THEN 570
    0x58bd4d66cb70 ---------A   00555  K(I,A)=30:GOTO 620
    0x58bd4d66cdc0 ---------A T 00560  IF G1<>5 THEN 570
    0x58bd4d66d1f0 ---------A   00565  K(I,A)=40:GOTO 620
    0x58bd4d66d610 ---------A T 00570  K(I,A)=.4:GOTO 620
    0x58bd4d66d680 ---------A T 00605  REM ***CHANCE
    0x58bd4d66e0e0 ---------A   00610  Y1=0
    0x58bd4d66eda0 ---------A   00615  FOR Y=1 TO 5:Y1=C(Y)+Y1:NEXT Y:K(13,A)=Y1
    0x58bd4d66f790 ---------A T 00620  PRINT A$(A);", YOU NOW HAVE";INT(K(I,A));"POINTS IN ROW #";I;", ";
    0x58bd4d66f910 ---------A   00625  PRINT "(";
    0x58bd4d66fb80 ---------A T 00630  IF I>6 THEN 640
    0x58bd4d670180 ---------A   00635  ON I GOTO 645,650,655,660,665,670
    0x58bd4d670930 ---------A T 00640  ON I-6 GOTO 675,680,685,690,695,700,705
    0x58bd4d670b20 ---------A T 00645  PRINT "(1)ACES";:GOTO 710
    0x58bd4d670d00 ---------A T 00650  PRINT "(2)TWOS";:GOTO 710
    0x58bd4d670ee0 ---------A T 00655  PRINT "(3)THREES";:GOTO 710
    0x58bd4d6710c0 ---------A T 00660  PRINT "(4)FOURS";:GOTO 710
    0x58bd4d6712a0 ---------A T 00665  PRINT "(5)FIVES";:GOTO 710
    0x58bd4d671480 ---------A T 00670  PRINT "(6)SIXES";:GOTO 710
    0x58bd4d671660 ---------A T 00675  PRINT "(7)3 OF A KIND";:GOTO 710
    0x58bd4d671840 ---------A T 00680  PRINT "(8)4 OF A KIND";:GOTO 710
    0x58bd4d671a30 ---------A T 00685  PRINT "(9)FULL HOUSE";:GOTO 710
    0x58bd4d671c70 ---------A T 00690  PRINT "(10)SMALL STRAIGHT";:RESTORE:GOTO 710
    0x58bd4d671e50 ---------A T 00695  PRINT "(11)LARGE STRAIGHT";:GOTO 710
    0x58bd4d672020 ---------A T 00700  PRINT "(12)YAHTZEE";:GOTO 710
    0x58bd4d672190 ---------A T 00705  PRINT "(13)CHANCE";
    0x58bd4d6723f0 ---------A T 00710  IF E=25 THEN 1030
    0x58bd4d672710 ---------A   00713  IF I0=25 THEN 1030
    0x58bd4d672880 ---------A   00715  PRINT ")"
    0x58bd4d672f10 ---------A T 00720  FOR B=1 TO N:FOR B1=1 TO 13
    0x58bd4d673330 ---------A   00725  IF K(B1,B)=0 THEN 100
    0x58bd4d6735a0 ---------A   00730  NEXT B1:NEXT B
    0x58bd4d674050 ---------A T 00735  FOR B3=1 TO N:B5(B3)=0:B8(B3)=0:NEXT B3
    0x58bd4d6740f0 ---------A   00740  PRINT
    0x58bd4d674780 ---------A   00745  FOR B3=1 TO N:FOR B4=1 TO 6
    0x58bd4d674f40 ---------A   00750  B5(B3)=B5(B3)+INT(K(B4,B3))
    0x58bd4d6751a0 ---------A   00755  NEXT B4:NEXT B3
    0x58bd4d675910 ---------A   00760  FOR B6=1 TO N:FOR B7=7 TO 13
    0x58bd4d6760d0 ---------A   00765  B8(B6)=B8(B6)+INT(K(B7,B6))
    0x58bd4d676330 ---------A   00770  NEXT B7:NEXT B6
    0x58bd4d676650 ---------A   00775  FOR B3=1 TO N
    0x58bd4d676990 ---------A   00780  IF B5(B3)<63 THEN 790
    0x58bd4d676d50 ---------A   00785  K(14,B3)=35
    0x58bd4d676e80 ---------A T 00790  NEXT B3
    0x58bd4d677180 ---------A   00795  LINE INPUT "ENTER 'RETURN' WHEN PRINTER IS READY. ";XX$:GOSUB 940
    0x58bd4d677560 ---------A   00800  FOR A9=1 TO N
    0x58bd4d677c60 ---------A   00810  LPRINT TAB(19);A$(A9);"'S TOTALS":LPRINT TAB(19);"***************"
    0x58bd4d677d00 ---------A   00815  LPRINT
    0x58bd4d678200 ---------A   00820  LPRINT "ACES-----------";INT(K(1,A9))
    0x58bd4d678700 ---------A   00825  LPRINT "TWOS-----------";INT(K(2,A9))
    0x58bd4d678c00 ---------A   00830  LPRINT "THREES---------";INT(K(3,A9))
    0x58bd4d679100 ---------A   00835  LPRINT "FOURS----------";INT(K(4,A9))
    0x58bd4d679600 ---------A   00840  LPRINT "FIVES----------";INT(K(5,A9))
    0x58bd4d679b00 ---------A   00845  LPRINT "SIXES----------";INT(K(6,A9))
    0x58bd4d67a000 ---------A   00850  LPRINT "3 OF A KIND----";INT(K(7,A9))
    0x58bd4d67a500 ---------A   00855  LPRINT "4 OF A KIND----";INT(K(8,A9))
    0x58bd4d67aa00 ---------A   00860  LPRINT "FULL HOUSE-----";INT(K(9,A9))
    0x58bd4d67af00 ---------A   00865  LPRINT "SM. STRAIGHT---";INT(K(10,A9))
    0x58bd4d67b400 ---------A   00870  LPRINT "LG. STRAIGHT---";INT(K(11,A9))
    0x58bd4d67b900 ---------A   00875  LPRINT "YAHTZEE--------";INT(K(12,A9))
    0x58bd4d67be00 ---------A   00880  LPRINT "CHANCE---------";INT(K(13,A9))
    0x58bd4d67c1d0 ---------A   00885  LPRINT:LPRINT "TOTAL OF UPPER HALF------";B5(A9)
    0x58bd4d67c660 ---------A   00890  LPRINT:LPRINT "BONUS--------------------";K(14,A9)
    0x58bd4d67ca10 ---------A   00895  LPRINT:LPRINT "TOTAL OF LOWER HALF------";B8(A9)
    0x58bd4d67caa0 ---------A   00900  LPRINT
    0x58bd4d67d370 ---------A   00905  B9=B5(A9)+B8(A9)+K(14,A9)
    0x58bd4d67d7c0 ---------A   00910  LPRINT A$(A9);"'S GRAND TOTAL--------------------------";B9
    0x58bd4d67d840 ---------A   00915  GOSUB 940
    0x58bd4d67d970 ---------A   00920  NEXT A9
    0x58bd4d67dbe0 ---------A   00925  IF I>13 THEN 210
    0x58bd4d67dc80 ---------A   00930  GOTO 1040
    0x58bd4d67de10 ----------   00935  PRINT "ANSWER WITH YES OR NO":RETURN
    0x58bd4d67e440 ---------B G 00940  FOR E=1 TO 72:LPRINT "-";:NEXT E:LPRINT:RETURN
    0x58bd4d67e4f0 ---------A T 00945  GOSUB 940
    0x58bd4d67e860 ---------A   00950  LPRINT "1**ACES":GOSUB 940:LPRINT "2**TWOS":GOSUB 940
    0x58bd4d67ebd0 ---------A   00955  LPRINT "3**THREES":GOSUB 940:LPRINT "4**FOURS":GOSUB 940
    0x58bd4d67ef40 ---------A   00960  LPRINT "5**FIVES":GOSUB 940:LPRINT "6**SIXES":GOSUB 940
    0x58bd4d67f2c0 ---------A   00965  LPRINT "7**3 OF A KIND":GOSUB 940:LPRINT "8**4 OF A KIND":GOSUB 940
    0x58bd4d67f630 ---------A   00970  LPRINT "9**FULL HOUSE":GOSUB 940:LPRINT "10**SM. STRAIGHT":GOSUB 940
    0x58bd4d67f980 ---------A   00975  LPRINT "11**LG. STRAIGHT":GOSUB 940:LPRINT "12**YAHTZEE":GOSUB 940
    0x58bd4d67fb70 ---------A   00980  LPRINT "13**CHANCE":GOSUB 940
    0x58bd4d6803f0 ---------A   00985  FOR E1=1 TO 8:LPRINT:NEXT E1:PRINT CHR$(26):PRINT "TEAR OFF SCORECARD"
    0x58bd4d6807d0 ---------A   00990  PRINT "AND HIT 'RETURN'!":INPUT Q:GOTO 100
    0x58bd4d680970 ---------C G 00995  PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    0x58bd4d680b20 ---------C   01000  PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    0x58bd4d680cd0 ---------C   01005  PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    0x58bd4d680e50 ---------C   01010  PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    0x58bd4d680eb0 ---------C   01015  RETURN
    0x58bd4d6812d0 ----------   01020  PRINT:PRINT A$(A);", YOU HAVE THE FOLLOWING SCOREBOARD OPTIONS LEFT:"
    0x58bd4d681ba0 ----------   01025  I0=25:FOR I=1 TO 13:IF K(I,A)=0 THEN 630
    0x58bd4d681c20 ----------   01027  GOTO 1035
    0x58bd4d681da0 ---------A T 01030  PRINT "  ";
    0x58bd4d682130 ---------A T 01035  IF POS(0) > 50 THEN PRINT
    0x58bd4d682570 ---------A   01036  NEXT I:PRINT:PRINT:I0=0:RETURN
    0x58bd4d682820 ---------A T 01040  PRINT CHR$(26):PRINT
    0x58bd4d682bf0 ---------A T 01041  PRINT:PRINT "ANOTHER GAME?===> ":INPUT YN$
    0x58bd4d683020 ---------A   01045  IF LEFT$(YN$,1)="Y" THEN 45
    0x58bd4d683450 ---------A   01050  IF LEFT$(YN$,1)="N" THEN 1060
    0x58bd4d683520 ---------A   01055  GOSUB 935:GOTO 1041
    0x58bd4d683570 ---------A T 01060  END
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
   A) 0x58bd4d6446d0 (00005)   0x58bd4d6446d0 (00005)   0x58bd4d683570 (01060)   0x58bd4d683570 (01060)   
   B) 0x58bd4d67e440 (00940)   0x58bd4d67e440 (00940)   0x58bd4d67e440 (00940)   0x58bd4d67e440 (00940)   
   C) 0x58bd4d680970 (00995)   0x58bd4d680970 (00995)   0x58bd4d680eb0 (01015)   0x58bd4d680eb0 (01015)   

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
    0x58bd4d6446d0 ---------A   00005  PRINT CHR$(26)
    0x58bd4d644670 ---------A   00007  PRINT TAB(25);"YAHTZEE"
    0x58bd4d6465e0 ---------A   00008  PRINT TAB(20);"CREATIVE COMPUTING"
    0x58bd4d645040 ---------A   00009  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x58bd4d6450a0 ----------   00010  PRINT
    0x58bd4d645500 ---------A        a PRINT "MODIFIED FOR THE OSBORNE-1 WITH PRINTER"
    0x58bd4d644c20 ---------A   00011  PRINT "BY PETER FLEMING, SFOG, 2/9/82"
    0x58bd4d646f30 ---------A   00015  DIM C(5),K(14,7),F(4),H2(6),L2(6),B5(7),B8(7),A$(7)
    0x58bd4d64d840 ----------   00020  PRINT CHR$(7)
    0x58bd4d64da40 ----------        a PRINT CHR$(7)
    0x58bd4d64dc40 ---------A        b PRINT CHR$(7)
    0x58bd4d64ddc0 ---------A T 00025  PRINT "THIS IS THE GAME OF YAHTZEE. DO YOU WANT COMMENTS";
    0x58bd4d64dfc0 ----------   00030  INPUT B$
    0x58bd4d64e3c0 ---------A        a IF LEFT$(B$,1)="N" THEN 45
    0x58bd4d64e7e0 ---------A   00033  IF LEFT$(B$,1)="Y" THEN 40
    0x58bd4d645b80 ----------   00035  GOSUB 935
    0x58bd4d646ff0 ---------A        a GOTO 25
    0x58bd4d6470b0 ---------A T 00040  GOSUB 995
    0x58bd4d64e8a0 ---------- T 00045  PRINT
    0x58bd4d64ea00 ---------- T      a PRINT "HOW MANY PLAYERS";
    0x58bd4d64ec20 ---------A T      b INPUT N
    0x58bd4d64ee80 ---------A   00050  IF N<1 THEN 45
    0x58bd4d64f100 ---------A   00053  IF N<=7 THEN 75
    0x58bd4d64f240 ---------A   00055  PRINT "THE MAXIMUM NUMBER OF PLAYERS IS 7."
    0x58bd4d64f2c0 ---------A   00070  GOTO 45
    0x58bd4d64f690 ---------A T 00075  FOR A0=1 TO N
    0x58bd4d64f8f0 ----------   00080  PRINT "NAME OF PLAYER #";A0;
    0x58bd4d64fb10 ----------        a INPUT A$(A0)
    0x58bd4d64fc50 ---------A        b NEXT A0
    0x58bd4d64fcf0 ---------- T 00085  PRINT
    0x58bd4d64fe60 ---------- T      a PRINT "WOULD YOU LIKE A PRINTED SCORECARD";
    0x58bd4d64ffd0 ---------A T      b INPUT B$
    0x58bd4d650400 ---------A   00090  IF LEFT$(B$,1)="N" THEN 100
    0x58bd4d650820 ---------A   00093  IF LEFT$(B$,1)="Y" THEN 945
    0x58bd4d650880 ----------   00095  GOSUB 935
    0x58bd4d650900 ---------A        a GOTO 85
    0x58bd4d650bb0 ---------- T 00100  H=0
    0x58bd4d650c00 ---------- T      a PRINT
    0x58bd4d650fe0 ---------- T      b A=A+1
    0x58bd4d651350 ---------A T      c IF A<>N+1 THEN 105
    0x58bd4d651590 ---------A   00104  A=1
    0x58bd4d651900 ---------- T 00105  FOR B=1 TO 5
    0x58bd4d651fa0 ---------- T      a C(B)=INT(6*RND(1))+1
    0x58bd4d6520d0 ---------- T      b NEXT B
    0x58bd4d652160 ---------A T      c PRINT
    0x58bd4d6521c0 ---------- T 00110  PRINT
    0x58bd4d652500 ---------- T      a PRINT A$(A);"'S NUMBERS:  ";
    0x58bd4d652860 ---------A T      b H=H+1
    0x58bd4d653150 ----------   00115  PRINT C(1);C(2);C(3);C(4);C(5)
    0x58bd4d6533d0 ---------A        a IF H=3 THEN 210
    0x58bd4d653540 ---------- T 00120  PRINT "HOW MANY DICE TO CHANGE";
    0x58bd4d653760 ---------A T      a INPUT E
    0x58bd4d6539c0 ---------A   00125  IF E<>25 THEN 130
    0x58bd4d653a20 ----------   00127  GOSUB 1020
    0x58bd4d653a90 ---------A        a GOTO 120
    0x58bd4d653ce0 ---------A T 00130  IF E>5 THEN 120
    0x58bd4d654160 ---------A   00135  IF E<0 THEN 120
    0x58bd4d6544c0 ---------A   00137  IF INT(E)<>E THEN 120
    0x58bd4d654720 ---------A   00140  IF E=0 THEN 210
    0x58bd4d654990 ---------A   00143  IF E=5 THEN 105
    0x58bd4d654d10 ----------   00145  FOR F3=1 TO 4
    0x58bd4d654ff0 ----------        a F(F3)=0
    0x58bd4d655120 ---------A        b NEXT F3
    0x58bd4d6552d0 ---------A T 00150  PRINT "WHICH DICE TO CHANGE";
    0x58bd4d655730 ---------A   00155  ON E GOTO 160,165,170,175
    0x58bd4d655930 ---------- T 00160  INPUT F(1)
    0x58bd4d6559c0 ---------A T      a GOTO 180
    0x58bd4d655d50 ---------- T 00165  INPUT F(1),F(2)
    0x58bd4d655de0 ---------A T      a GOTO 180
    0x58bd4d656310 ---------- T 00170  INPUT F(1),F(2),F(3)
    0x58bd4d6563a0 ---------A T      a GOTO 180
    0x58bd4d656ab0 ---------A T 00175  INPUT F(1),F(2),F(3),F(4)
    0x58bd4d656e30 ---------- T 00180  FOR F1=1 TO 4
    0x58bd4d6572f0 ---------- T      a F(F1)=INT(F(F1))
    0x58bd4d657620 ---------A T      b IF F(F1)>5 THEN 150
    0x58bd4d657960 ---------A   00185  IF F(F1)<0 THEN 150
    0x58bd4d657aa0 ---------A   00187  NEXT F1
    0x58bd4d657e40 ----------   00190  FOR F2=1 TO 4
    0x58bd4d658190 ---------A        a IF F(F2)=0 THEN 200
    0x58bd4d658930 ---------A   00195  C(F(F2))=INT(6*RND(1))+1
    0x58bd4d658a60 ---------A T 00200  NEXT F2
    0x58bd4d658b10 ---------A   00205  GOTO 110
    0x58bd4d658e60 ---------A T 00210  PRINT A$(A);" -- SCOREBOARD NUMBER";
    0x58bd4d659080 ---------A   00215  INPUT I
    0x58bd4d6592e0 ---------A   00220  IF I<>25 THEN 225 
    0x58bd4d659340 ----------   00223  GOSUB 1020
    0x58bd4d6593b0 ---------A        a GOTO 210
    0x58bd4d659610 ---------A T 00225  IF I<1 THEN 210
    0x58bd4d659910 ----------   00227  I=INT(I)
    0x58bd4d659b70 ---------A        a IF I<14 THEN 245
    0x58bd4d659cd0 ---------- T 00230  PRINT "CONFIRM";
    0x58bd4d659e40 ---------A T      a INPUT B$
    0x58bd4d65a270 ---------A   00235  IF LEFT$(B$,1)="N" THEN 210
    0x58bd4d65a690 ---------A   00237  IF LEFT$(B$,1)="Y" THEN 735
    0x58bd4d65a6f0 ----------   00240  GOSUB 935
    0x58bd4d65a770 ---------A        a GOTO 230
    0x58bd4d65aba0 ---------A T 00245  IF K(I,A)=0 THEN 260
    0x58bd4d65b030 ---------A   00250  PRINT A$(A);", YOU HAVE ALREADY USED ROW #";I;
    0x58bd4d65b630 ----------   00255  PRINT "YOU HAVE"K(I,A);"POINTS IN ROW #";I
    0x58bd4d65b6b0 ---------A        a GOTO 210
    0x58bd4d65b910 ---------A T 00260  IF I>6 THEN 305
    0x58bd4d65bdb0 ---------A   00265  REM***CATEGORIES ONE THOUGH SIX
    0x58bd4d65bff0 ---------A   00270  K=0
    0x58bd4d65c360 ----------   00275  FOR G=1 TO 5
    0x58bd4d65c6c0 ---------A        a IF C(G)<>I THEN 280
    0x58bd4d65ca30 ---------A   00277  K=K+I
    0x58bd4d65cb60 ---------- T 00280  NEXT G
    0x58bd4d65cdb0 ---------A T      a IF K=0 THEN 295
    0x58bd4d65d030 ---------A   00283  IF K<>1 THEN 300
    0x58bd4d65d380 ---------A   00285  PRINT A$(A);", YOU HAVE 1 POINT IN ROW # 1 (ACES)"
    0x58bd4d65d720 ----------   00290  K(1,A)=1
    0x58bd4d65d790 ---------A        a GOTO 720
    0x58bd4d65db40 ---------- T 00295  K(I,A)=.4
    0x58bd4d65dbb0 ---------A T      a GOTO 620
    0x58bd4d65df80 ---------- T 00300  K(I,A)=K
    0x58bd4d65e010 ---------A T      a GOTO 620
    0x58bd4d65e7c0 ---------A T 00305  ON I-6 GOTO 315,320,400,485,485,325,605
    0x58bd4d65e860 ---------A   00310  REM ***3 OF A KIND, 4 OF A KIND, YAHTZEE
    0x58bd4d65eb50 ---------- T 00315  R=3
    0x58bd4d65f660 ---------- T      a T=C(1)+C(2)+C(3)+C(4)+C(5)
    0x58bd4d65f6f0 ---------A T      b GOTO 330
    0x58bd4d65f8e0 ---------- T 00320  R=4
    0x58bd4d660330 ---------- T      a T=C(1)+C(2)+C(3)+C(4)+C(5)
    0x58bd4d6603a0 ---------A T      b GOTO 330
    0x58bd4d660590 ---------- T 00325  R=5
    0x58bd4d6607b0 ---------A T      a T=50
    0x58bd4d660b20 ---------- T 00330  FOR H3=1 TO 6
    0x58bd4d660e00 ---------- T      a H2(H3)=0
    0x58bd4d660f30 ---------A T      b NEXT H3
    0x58bd4d661210 ----------   00335  FOR H=1 TO 6
    0x58bd4d6615c0 ---------A        a FOR H1=1 TO 5
    0x58bd4d661920 ---------A   00340  IF C(H1)<>H THEN 350
    0x58bd4d661e20 ---------A   00345  H2(H)=H2(H)+1
    0x58bd4d661f50 ---------- T 00350  NEXT H1
    0x58bd4d662080 ---------A T      a NEXT H
    0x58bd4d662440 ---------A   00355  FOR H4=1 TO 6
    0x58bd4d6627b0 ---------A   00360  IF H2(H4)>=R THEN 370
    0x58bd4d6628f0 ----------   00365  NEXT H4
    0x58bd4d662ca0 ----------        a K(I,A)=.4
    0x58bd4d662d20 ---------A        b GOTO 620
    0x58bd4d663140 ---------A T 00370  IF K(I,A)=50 THEN 380
    0x58bd4d663520 ----------   00375  K(I,A)=T
    0x58bd4d6637a0 ---------A        a IF I<>12 THEN 395
    0x58bd4d6639a0 ---------- T 00380  PRINT CHR$(7)
    0x58bd4d663ba0 ---------- T      a PRINT CHR$(7)
    0x58bd4d663f20 ---------- T      b FOR V4=1 TO 7
    0x58bd4d664140 ---------- T      c PRINT CHR$(7);
    0x58bd4d664280 ---------A T      d NEXT V4
    0x58bd4d664740 ---------A   00385  PRINT "CONGRATULATIONS, ";A$(A);", YOU HAVE A YAHTZEE!!!"
    0x58bd4d664940 ----------   00390  PRINT CHR$(7)
    0x58bd4d664b40 ----------        a PRINT CHR$(7)
    0x58bd4d664e00 ----------        b FOR V4=1 TO 7
    0x58bd4d665020 ----------        c PRINT CHR$(7);
    0x58bd4d665160 ---------A        d NEXT V4
    0x58bd4d6651f0 ---------A T 00395  GOTO 620
    0x58bd4d665260 ---------A T 00400  REM ***FULL HOUSE
    0x58bd4d665550 ----------   00405  L4=0
    0x58bd4d665800 ----------        a L5=0
    0x58bd4d665b70 ----------        b FOR L=1 TO 6
    0x58bd4d665e50 ----------        c L2(L)=0
    0x58bd4d665f80 ---------A        d NEXT L
    0x58bd4d666260 ----------   00410  FOR L=1 TO 6
    0x58bd4d666610 ---------A        a FOR L1=1 TO 5
    0x58bd4d666970 ---------A   00415  IF C(L1)<>L THEN 425
    0x58bd4d666e70 ---------A   00420  L2(L)=L2(L)+1
    0x58bd4d666fa0 ---------- T 00425  NEXT L1
    0x58bd4d6670d0 ---------A T      a NEXT L
    0x58bd4d667480 ---------A   00430  FOR L3=1 TO 6
    0x58bd4d6676f0 ---------A   00435  IF L5=1 THEN 450
    0x58bd4d667a30 ---------A   00440  IF L2(L3)<>2 THEN 450
    0x58bd4d667d50 ----------   00445  L5=L5+1
    0x58bd4d667dd0 ---------A        a GOTO 455
    0x58bd4d668100 ---------A T 00450  IF L2(L3)<>3 THEN 460
    0x58bd4d668440 ---------A T 00455  L4=L4+1
    0x58bd4d668570 ---------A T 00460  NEXT L3
    0x58bd4d6687e0 ---------A   00465  IF L4=2 THEN 475
    0x58bd4d668b80 ----------   00470  K(9,A)=.4
    0x58bd4d668bf0 ---------A        a GOTO 620
    0x58bd4d668f80 ---------- T 00475  K(9,A)=25
    0x58bd4d668ff0 ---------A T      a GOTO 620
    0x58bd4d669080 ----------   00480  GOTO 620
    0x58bd4d669100 ---------A T 00485  REM ***PUT NUMBERS IN ORDER, STRAIGHTS
    0x58bd4d6694a0 ----------   00490  FOR M2=1 TO 4
    0x58bd4d669850 ---------A        a FOR M1=1 TO 4
    0x58bd4d669da0 ---------A   00495  IF C(M1+1)>=C(M1) THEN 507
    0x58bd4d66a160 ----------   00500  Z=C(M1)
    0x58bd4d66a630 ----------        a C(M1)=C(M1+1)
    0x58bd4d66aa40 ---------A        b C(M1+1)=Z
    0x58bd4d66ab70 ---------- T 00507  NEXT M1
    0x58bd4d66aca0 ---------A T      a NEXT M2
    0x58bd4d66af90 ---------A   00510  G1=1
    0x58bd4d66b320 ---------A   00515  FOR X=2 TO 5
    0x58bd4d66b7d0 ---------A   00517  K(13,A)=Y1
    0x58bd4d66be00 ---------A   00525  IF C(X-1)+1<>C(X) THEN 540
    0x58bd4d66c140 ---------A   00530  G1=G1+1
    0x58bd4d66c270 ---------A T 00540  NEXT X
    0x58bd4d66c4e0 ---------A   00545  IF I=11 THEN 560
    0x58bd4d66c740 ---------A   00550  IF G1<4 THEN 570
    0x58bd4d66cb00 ----------   00555  K(I,A)=30
    0x58bd4d66cb70 ---------A        a GOTO 620
    0x58bd4d66cdc0 ---------A T 00560  IF G1<>5 THEN 570
    0x58bd4d66d180 ----------   00565  K(I,A)=40
    0x58bd4d66d1f0 ---------A        a GOTO 620
    0x58bd4d66d5a0 ---------- T 00570  K(I,A)=.4
    0x58bd4d66d610 ---------A T      a GOTO 620
    0x58bd4d66d680 ---------A T 00605  REM ***CHANCE
    0x58bd4d66e0e0 ---------A   00610  Y1=0
    0x58bd4d66e450 ----------   00615  FOR Y=1 TO 5
    0x58bd4d66e870 ----------        a Y1=C(Y)+Y1
    0x58bd4d66e9a0 ----------        b NEXT Y
    0x58bd4d66eda0 ---------A        c K(13,A)=Y1
    0x58bd4d66f790 ---------A T 00620  PRINT A$(A);", YOU NOW HAVE";INT(K(I,A));"POINTS IN ROW #";I;", ";
    0x58bd4d66f910 ---------A   00625  PRINT "(";
    0x58bd4d66fb80 ---------A T 00630  IF I>6 THEN 640
    0x58bd4d670180 ---------A   00635  ON I GOTO 645,650,655,660,665,670
    0x58bd4d670930 ---------A T 00640  ON I-6 GOTO 675,680,685,690,695,700,705
    0x58bd4d670a90 ---------- T 00645  PRINT "(1)ACES";
    0x58bd4d670b20 ---------A T      a GOTO 710
    0x58bd4d670c70 ---------- T 00650  PRINT "(2)TWOS";
    0x58bd4d670d00 ---------A T      a GOTO 710
    0x58bd4d670e50 ---------- T 00655  PRINT "(3)THREES";
    0x58bd4d670ee0 ---------A T      a GOTO 710
    0x58bd4d671030 ---------- T 00660  PRINT "(4)FOURS";
    0x58bd4d6710c0 ---------A T      a GOTO 710
    0x58bd4d671210 ---------- T 00665  PRINT "(5)FIVES";
    0x58bd4d6712a0 ---------A T      a GOTO 710
    0x58bd4d6713f0 ---------- T 00670  PRINT "(6)SIXES";
    0x58bd4d671480 ---------A T      a GOTO 710
    0x58bd4d6715d0 ---------- T 00675  PRINT "(7)3 OF A KIND";
    0x58bd4d671660 ---------A T      a GOTO 710
    0x58bd4d6717b0 ---------- T 00680  PRINT "(8)4 OF A KIND";
    0x58bd4d671840 ---------A T      a GOTO 710
    0x58bd4d671990 ---------- T 00685  PRINT "(9)FULL HOUSE";
    0x58bd4d671a30 ---------A T      a GOTO 710
    0x58bd4d671b80 ---------- T 00690  PRINT "(10)SMALL STRAIGHT";
    0x58bd4d671be0 ---------- T      a RESTORE
    0x58bd4d671c70 ---------A T      b GOTO 710
    0x58bd4d671dc0 ---------- T 00695  PRINT "(11)LARGE STRAIGHT";
    0x58bd4d671e50 ---------A T      a GOTO 710
    0x58bd4d671fa0 ---------- T 00700  PRINT "(12)YAHTZEE";
    0x58bd4d672020 ---------A T      a GOTO 710
    0x58bd4d672190 ---------A T 00705  PRINT "(13)CHANCE";
    0x58bd4d6723f0 ---------A T 00710  IF E=25 THEN 1030
    0x58bd4d672710 ---------A   00713  IF I0=25 THEN 1030
    0x58bd4d672880 ---------A   00715  PRINT ")"
    0x58bd4d672b60 ---------- T 00720  FOR B=1 TO N
    0x58bd4d672f10 ---------A T      a FOR B1=1 TO 13
    0x58bd4d673330 ---------A   00725  IF K(B1,B)=0 THEN 100
    0x58bd4d673470 ----------   00730  NEXT B1
    0x58bd4d6735a0 ---------A        a NEXT B
    0x58bd4d673970 ---------- T 00735  FOR B3=1 TO N
    0x58bd4d673c50 ---------- T      a B5(B3)=0
    0x58bd4d673f20 ---------- T      b B8(B3)=0
    0x58bd4d674050 ---------A T      c NEXT B3
    0x58bd4d6740f0 ---------A   00740  PRINT
    0x58bd4d6743d0 ----------   00745  FOR B3=1 TO N
    0x58bd4d674780 ---------A        a FOR B4=1 TO 6
    0x58bd4d674f40 ---------A   00750  B5(B3)=B5(B3)+INT(K(B4,B3))
    0x58bd4d675070 ----------   00755  NEXT B4
    0x58bd4d6751a0 ---------A        a NEXT B3
    0x58bd4d675560 ----------   00760  FOR B6=1 TO N
    0x58bd4d675910 ---------A        a FOR B7=7 TO 13
    0x58bd4d6760d0 ---------A   00765  B8(B6)=B8(B6)+INT(K(B7,B6))
    0x58bd4d676200 ----------   00770  NEXT B7
    0x58bd4d676330 ---------A        a NEXT B6
    0x58bd4d676650 ---------A   00775  FOR B3=1 TO N
    0x58bd4d676990 ---------A   00780  IF B5(B3)<63 THEN 790
    0x58bd4d676d50 ---------A   00785  K(14,B3)=35
    0x58bd4d676e80 ---------A T 00790  NEXT B3
    0x58bd4d677100 ----------   00795  LINE INPUT "ENTER 'RETURN' WHEN PRINTER IS READY. ";XX$
    0x58bd4d677180 ---------A        a GOSUB 940
    0x58bd4d677560 ---------A   00800  FOR A9=1 TO N
    0x58bd4d6779c0 ----------   00810  LPRINT TAB(19);A$(A9);"'S TOTALS"
    0x58bd4d677c60 ---------A        a LPRINT TAB(19);"***************"
    0x58bd4d677d00 ---------A   00815  LPRINT
    0x58bd4d678200 ---------A   00820  LPRINT "ACES-----------";INT(K(1,A9))
    0x58bd4d678700 ---------A   00825  LPRINT "TWOS-----------";INT(K(2,A9))
    0x58bd4d678c00 ---------A   00830  LPRINT "THREES---------";INT(K(3,A9))
    0x58bd4d679100 ---------A   00835  LPRINT "FOURS----------";INT(K(4,A9))
    0x58bd4d679600 ---------A   00840  LPRINT "FIVES----------";INT(K(5,A9))
    0x58bd4d679b00 ---------A   00845  LPRINT "SIXES----------";INT(K(6,A9))
    0x58bd4d67a000 ---------A   00850  LPRINT "3 OF A KIND----";INT(K(7,A9))
    0x58bd4d67a500 ---------A   00855  LPRINT "4 OF A KIND----";INT(K(8,A9))
    0x58bd4d67aa00 ---------A   00860  LPRINT "FULL HOUSE-----";INT(K(9,A9))
    0x58bd4d67af00 ---------A   00865  LPRINT "SM. STRAIGHT---";INT(K(10,A9))
    0x58bd4d67b400 ---------A   00870  LPRINT "LG. STRAIGHT---";INT(K(11,A9))
    0x58bd4d67b900 ---------A   00875  LPRINT "YAHTZEE--------";INT(K(12,A9))
    0x58bd4d67be00 ---------A   00880  LPRINT "CHANCE---------";INT(K(13,A9))
    0x58bd4d67be60 ----------   00885  LPRINT
    0x58bd4d67c1d0 ---------A        a LPRINT "TOTAL OF UPPER HALF------";B5(A9)
    0x58bd4d67c230 ----------   00890  LPRINT
    0x58bd4d67c660 ---------A        a LPRINT "BONUS--------------------";K(14,A9)
    0x58bd4d67c6c0 ----------   00895  LPRINT
    0x58bd4d67ca10 ---------A        a LPRINT "TOTAL OF LOWER HALF------";B8(A9)
    0x58bd4d67caa0 ---------A   00900  LPRINT
    0x58bd4d67d370 ---------A   00905  B9=B5(A9)+B8(A9)+K(14,A9)
    0x58bd4d67d7c0 ---------A   00910  LPRINT A$(A9);"'S GRAND TOTAL--------------------------";B9
    0x58bd4d67d840 ---------A   00915  GOSUB 940
    0x58bd4d67d970 ---------A   00920  NEXT A9
    0x58bd4d67dbe0 ---------A   00925  IF I>13 THEN 210
    0x58bd4d67dc80 ---------A   00930  GOTO 1040
    0x58bd4d67ddb0 ----------   00935  PRINT "ANSWER WITH YES OR NO"
    0x58bd4d67de10 ----------        a RETURN
    0x58bd4d67e0f0 ---------- G 00940  FOR E=1 TO 72
    0x58bd4d67e250 ---------- G      a LPRINT "-";
    0x58bd4d67e390 ---------- G      b NEXT E
    0x58bd4d67e3e0 ---------- G      c LPRINT
    0x58bd4d67e440 ---------B G      d RETURN
    0x58bd4d67e4f0 ---------A T 00945  GOSUB 940
    0x58bd4d67e620 ----------   00950  LPRINT "1**ACES"
    0x58bd4d67e680 ----------        a GOSUB 940
    0x58bd4d67e7b0 ----------        b LPRINT "2**TWOS"
    0x58bd4d67e860 ---------A        c GOSUB 940
    0x58bd4d67e990 ----------   00955  LPRINT "3**THREES"
    0x58bd4d67e9f0 ----------        a GOSUB 940
    0x58bd4d67eb20 ----------        b LPRINT "4**FOURS"
    0x58bd4d67ebd0 ---------A        c GOSUB 940
    0x58bd4d67ed00 ----------   00960  LPRINT "5**FIVES"
    0x58bd4d67ed60 ----------        a GOSUB 940
    0x58bd4d67ee90 ----------        b LPRINT "6**SIXES"
    0x58bd4d67ef40 ---------A        c GOSUB 940
    0x58bd4d67f070 ----------   00965  LPRINT "7**3 OF A KIND"
    0x58bd4d67f0d0 ----------        a GOSUB 940
    0x58bd4d67f200 ----------        b LPRINT "8**4 OF A KIND"
    0x58bd4d67f2c0 ---------A        c GOSUB 940
    0x58bd4d67f3f0 ----------   00970  LPRINT "9**FULL HOUSE"
    0x58bd4d67f450 ----------        a GOSUB 940
    0x58bd4d67f580 ----------        b LPRINT "10**SM. STRAIGHT"
    0x58bd4d67f630 ---------A        c GOSUB 940
    0x58bd4d67f760 ----------   00975  LPRINT "11**LG. STRAIGHT"
    0x58bd4d67f7c0 ----------        a GOSUB 940
    0x58bd4d67f8f0 ----------        b LPRINT "12**YAHTZEE"
    0x58bd4d67f980 ---------A        c GOSUB 940
    0x58bd4d67fab0 ----------   00980  LPRINT "13**CHANCE"
    0x58bd4d67fb70 ---------A        a GOSUB 940
    0x58bd4d67fee0 ----------   00985  FOR E1=1 TO 8
    0x58bd4d67ff40 ----------        a LPRINT
    0x58bd4d680080 ----------        b NEXT E1
    0x58bd4d680270 ----------        c PRINT CHR$(26)
    0x58bd4d6803f0 ---------A        d PRINT "TEAR OFF SCORECARD"
    0x58bd4d680530 ----------   00990  PRINT "AND HIT 'RETURN'!"
    0x58bd4d680730 ----------        a INPUT Q
    0x58bd4d6807d0 ---------A        b GOTO 100
    0x58bd4d680970 ---------C G 00995  PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    0x58bd4d680b20 ---------C   01000  PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    0x58bd4d680cd0 ---------C   01005  PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    0x58bd4d680e50 ---------C   01010  PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    0x58bd4d680eb0 ---------C   01015  RETURN
    0x58bd4d680f50 ----------   01020  PRINT
    0x58bd4d6812d0 ----------        a PRINT A$(A);", YOU HAVE THE FOLLOWING SCOREBOARD OPTIONS LEFT:"
    0x58bd4d6814d0 ----------   01025  I0=25
    0x58bd4d681780 ----------        a FOR I=1 TO 13
    0x58bd4d681ba0 ----------        b IF K(I,A)=0 THEN 630
    0x58bd4d681c20 ----------   01027  GOTO 1035
    0x58bd4d681da0 ---------A T 01030  PRINT "  ";
    0x58bd4d682130 ---------A T 01035  IF POS(0) > 50 THEN PRINT
    0x58bd4d682270 ----------   01036  NEXT I
    0x58bd4d6822c0 ----------        a PRINT
    0x58bd4d682320 ----------        b PRINT
    0x58bd4d682520 ----------        c I0=0
    0x58bd4d682570 ---------A        d RETURN
    0x58bd4d682780 ---------- T 01040  PRINT CHR$(26)
    0x58bd4d682820 ---------A T      a PRINT
    0x58bd4d682880 ---------- T 01041  PRINT
    0x58bd4d6829c0 ---------- T      a PRINT "ANOTHER GAME?===> "
    0x58bd4d682bf0 ---------A T      b INPUT YN$
    0x58bd4d683020 ---------A   01045  IF LEFT$(YN$,1)="Y" THEN 45
    0x58bd4d683450 ---------A   01050  IF LEFT$(YN$,1)="N" THEN 1060
    0x58bd4d6834b0 ----------   01055  GOSUB 935
    0x58bd4d683520 ---------A        a GOTO 1041
    0x58bd4d683570 ---------A T 01060  END
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
    0x58bd4d6446d0 ---------A   01000  PRINT CHR$(26)
    0x58bd4d644670 ---------A   01010  PRINT TAB(25);"YAHTZEE"
    0x58bd4d6465e0 ---------A   01020  PRINT TAB(20);"CREATIVE COMPUTING"
    0x58bd4d645040 ---------A T 01030  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x58bd4d6450a0 ---------- T 01040  PRINT
    0x58bd4d645500 ---------A   01050  PRINT "MODIFIED FOR THE OSBORNE-1 WITH PRINTER"
    0x58bd4d644c20 ---------A T 01060  PRINT "BY PETER FLEMING, SFOG, 2/9/82"
    0x58bd4d646f30 ---------A   01070  DIM C(5),K(14,7),F(4),H2(6),L2(6),B5(7),B8(7),A$(7)
    0x58bd4d64d840 ----------   01080  PRINT CHR$(7)
    0x58bd4d64da40 ----------   01090  PRINT CHR$(7)
    0x58bd4d64dc40 ---------A   01100  PRINT CHR$(7)
    0x58bd4d64ddc0 ---------A   01110  PRINT "THIS IS THE GAME OF YAHTZEE. DO YOU WANT COMMENTS";
    0x58bd4d64dfc0 ----------   01120  INPUT B$
    0x58bd4d64e3c0 ---------A   01130  IF LEFT$(B$,1)="N" THEN 1200
    0x58bd4d64e7e0 ---------A   01140  IF LEFT$(B$,1)="Y" THEN 1170
    0x58bd4d645b80 ----------   01150  GOSUB 91150
    0x58bd4d646ff0 ---------A   01160  GOTO 1110
    0x58bd4d6470b0 ---------A   01170  GOSUB 4430
    0x58bd4d64e8a0 ----------   01180  PRINT
    0x58bd4d64ea00 ----------   01190  PRINT "HOW MANY PLAYERS";
    0x58bd4d64ec20 ---------A   01200  INPUT N
    0x58bd4d64ee80 ---------A   01210  IF N<1 THEN 1200
    0x58bd4d64f100 ---------A   01220  IF N<=7 THEN 1250
    0x58bd4d64f240 ---------A   01230  PRINT "THE MAXIMUM NUMBER OF PLAYERS IS 7."
    0x58bd4d64f2c0 ---------A   01240  GOTO 1200
    0x58bd4d64f690 ---------A   01250  FOR A0=1 TO N
    0x58bd4d64f8f0 ----------   01260  PRINT "NAME OF PLAYER #";A0;
    0x58bd4d64fb10 ----------   01270  INPUT A$(A0)
    0x58bd4d64fc50 ---------A   01280  NEXT A0
    0x58bd4d64fcf0 ----------   01290  PRINT
    0x58bd4d64fe60 ----------   01300  PRINT "WOULD YOU LIKE A PRINTED SCORECARD";
    0x58bd4d64ffd0 ---------A   01310  INPUT B$
    0x58bd4d650400 ---------A   01320  IF LEFT$(B$,1)="N" THEN 1390
    0x58bd4d650820 ---------A   01330  IF LEFT$(B$,1)="Y" THEN 4080
    0x58bd4d650880 ----------   01340  GOSUB 4020
    0x58bd4d650900 ---------A   01350  GOTO 1310
    0x58bd4d650bb0 ----------   01360  H=0
    0x58bd4d650c00 ----------   01370  PRINT
    0x58bd4d650fe0 ----------   01380  A=A+1
    0x58bd4d651350 ---------A   01390  IF A<>N+1 THEN 1440
    0x58bd4d651590 ---------A   01400  A=1
    0x58bd4d651900 ----------   01410  FOR B=1 TO 5
    0x58bd4d651fa0 ----------   01420  C(B)=INT(6*RND(1))+1
    0x58bd4d6520d0 ----------   01430  NEXT B
    0x58bd4d652160 ---------A   01440  PRINT
    0x58bd4d6521c0 ----------   01450  PRINT
    0x58bd4d652500 ----------   01460  PRINT A$(A);"'S NUMBERS:  ";
    0x58bd4d652860 ---------A   01470  H=H+1
    0x58bd4d653150 ----------   01480  PRINT C(1);C(2);C(3);C(4);C(5)
    0x58bd4d6533d0 ---------A   01490  IF H=3 THEN 1820
    0x58bd4d653540 ----------   01500  PRINT "HOW MANY DICE TO CHANGE";
    0x58bd4d653760 ---------A   01510  INPUT E
    0x58bd4d6539c0 ---------A   01520  IF E<>25 THEN 1550
    0x58bd4d653a20 ----------   01530  GOSUB 4490
    0x58bd4d653a90 ---------A   01540  GOTO 1510
    0x58bd4d653ce0 ---------A   01550  IF E>5 THEN 1510
    0x58bd4d654160 ---------A   01560  IF E<0 THEN 1510
    0x58bd4d6544c0 ---------A   01570  IF INT(E)<>E THEN 1510
    0x58bd4d654720 ---------A   01580  IF E=0 THEN 1820
    0x58bd4d654990 ---------A   01590  IF E=5 THEN 1440
    0x58bd4d654d10 ----------   01600  FOR F3=1 TO 4
    0x58bd4d654ff0 ----------   01610  F(F3)=0
    0x58bd4d655120 ---------A   01620  NEXT F3
    0x58bd4d6552d0 ---------A   01630  PRINT "WHICH DICE TO CHANGE";
    0x58bd4d655730 ---------A   01640  ON E GOTO 1660,1680,1700,1710
    0x58bd4d655930 ----------   01650  INPUT F(1)
    0x58bd4d6559c0 ---------A   01660  GOTO 1740
    0x58bd4d655d50 ----------   01670  INPUT F(1),F(2)
    0x58bd4d655de0 ---------A   01680  GOTO 1740
    0x58bd4d656310 ----------   01690  INPUT F(1),F(2),F(3)
    0x58bd4d6563a0 ---------A   01700  GOTO 1740
    0x58bd4d656ab0 ---------A   01710  INPUT F(1),F(2),F(3),F(4)
    0x58bd4d656e30 ----------   01720  FOR F1=1 TO 4
    0x58bd4d6572f0 ----------   01730  F(F1)=INT(F(F1))
    0x58bd4d657620 ---------A   01740  IF F(F1)>5 THEN 1630
    0x58bd4d657960 ---------A   01750  IF F(F1)<0 THEN 1630
    0x58bd4d657aa0 ---------A   01760  NEXT F1
    0x58bd4d657e40 ----------   01770  FOR F2=1 TO 4
    0x58bd4d658190 ---------A   01780  IF F(F2)=0 THEN 1800
    0x58bd4d658930 ---------A   01790  C(F(F2))=INT(6*RND(1))+1
    0x58bd4d658a60 ---------A   01800  NEXT F2
    0x58bd4d658b10 ---------A   01810  GOTO 1470
    0x58bd4d658e60 ---------A   01820  PRINT A$(A);" -- SCOREBOARD NUMBER";
    0x58bd4d659080 ---------A   01830  INPUT I
    0x58bd4d6592e0 ---------A   01840  IF I<>25 THEN 1870 
    0x58bd4d659340 ----------   01850  GOSUB 4490
    0x58bd4d6593b0 ---------A   01860  GOTO 1820
    0x58bd4d659610 ---------A   01870  IF I<1 THEN 1820
    0x58bd4d659910 ----------   01880  I=INT(I)
    0x58bd4d659b70 ---------A   01890  IF I<14 THEN 1960
    0x58bd4d659cd0 ----------   01900  PRINT "CONFIRM";
    0x58bd4d659e40 ---------A   01910  INPUT B$
    0x58bd4d65a270 ---------A   01920  IF LEFT$(B$,1)="N" THEN 1820
    0x58bd4d65a690 ---------A   01930  IF LEFT$(B$,1)="Y" THEN 3530
    0x58bd4d65a6f0 ----------   01940  GOSUB 4020
    0x58bd4d65a770 ---------A   01950  GOTO 1910
    0x58bd4d65aba0 ---------A   01960  IF K(I,A)=0 THEN 2000
    0x58bd4d65b030 ---------A   01970  PRINT A$(A);", YOU HAVE ALREADY USED ROW #";I;
    0x58bd4d65b630 ----------   01980  PRINT "YOU HAVE"K(I,A);"POINTS IN ROW #";I
    0x58bd4d65b6b0 ---------A   01990  GOTO 1820
    0x58bd4d65b910 ---------A   02000  IF I>6 THEN 2160
    0x58bd4d65bdb0 ---------A   02010  REM***CATEGORIES ONE THOUGH SIX
    0x58bd4d65bff0 ---------A   02020  K=0
    0x58bd4d65c360 ----------   02030  FOR G=1 TO 5
    0x58bd4d65c6c0 ---------A   02040  IF C(G)<>I THEN 2070
    0x58bd4d65ca30 ---------A   02050  K=K+I
    0x58bd4d65cb60 ----------   02060  NEXT G
    0x58bd4d65cdb0 ---------A   02070  IF K=0 THEN 2130
    0x58bd4d65d030 ---------A   02080  IF K<>1 THEN 2150
    0x58bd4d65d380 ---------A   02090  PRINT A$(A);", YOU HAVE 1 POINT IN ROW # 1 (ACES)"
    0x58bd4d65d720 ----------   02100  K(1,A)=1
    0x58bd4d65d790 ---------A   02110  GOTO 3460
    0x58bd4d65db40 ----------   02120  K(I,A)=.4
    0x58bd4d65dbb0 ---------A   02130  GOTO 3110
    0x58bd4d65df80 ----------   02140  K(I,A)=K
    0x58bd4d65e010 ---------A   02150  GOTO 3110
    0x58bd4d65e7c0 ---------A   02160  ON I-6 GOTO 2200,2230,2550,2810,2810,2250,3050
    0x58bd4d65e860 ---------A   02170  REM ***3 OF A KIND, 4 OF A KIND, YAHTZEE
    0x58bd4d65eb50 ----------   02180  R=3
    0x58bd4d65f660 ----------   02190  T=C(1)+C(2)+C(3)+C(4)+C(5)
    0x58bd4d65f6f0 ---------A   02200  GOTO 2280
    0x58bd4d65f8e0 ----------   02210  R=4
    0x58bd4d660330 ----------   02220  T=C(1)+C(2)+C(3)+C(4)+C(5)
    0x58bd4d6603a0 ---------A   02230  GOTO 2280
    0x58bd4d660590 ----------   02240  R=5
    0x58bd4d6607b0 ---------A   02250  T=50
    0x58bd4d660b20 ----------   02260  FOR H3=1 TO 6
    0x58bd4d660e00 ----------   02270  H2(H3)=0
    0x58bd4d660f30 ---------A   02280  NEXT H3
    0x58bd4d661210 ----------   02290  FOR H=1 TO 6
    0x58bd4d6615c0 ---------A   02300  FOR H1=1 TO 5
    0x58bd4d661920 ---------A   02310  IF C(H1)<>H THEN 2340
    0x58bd4d661e20 ---------A   02320  H2(H)=H2(H)+1
    0x58bd4d661f50 ----------   02330  NEXT H1
    0x58bd4d662080 ---------A   02340  NEXT H
    0x58bd4d662440 ---------A   02350  FOR H4=1 TO 6
    0x58bd4d6627b0 ---------A   02360  IF H2(H4)>=R THEN 2400
    0x58bd4d6628f0 ----------   02370  NEXT H4
    0x58bd4d662ca0 ----------   02380  K(I,A)=.4
    0x58bd4d662d20 ---------A   02390  GOTO 3110
    0x58bd4d663140 ---------A   02400  IF K(I,A)=50 THEN 2470
    0x58bd4d663520 ----------   02410  K(I,A)=T
    0x58bd4d6637a0 ---------A   02420  IF I<>12 THEN 2540
    0x58bd4d6639a0 ----------   02430  PRINT CHR$(7)
    0x58bd4d663ba0 ----------   02440  PRINT CHR$(7)
    0x58bd4d663f20 ----------   02450  FOR V4=1 TO 7
    0x58bd4d664140 ----------   02460  PRINT CHR$(7);
    0x58bd4d664280 ---------A   02470  NEXT V4
    0x58bd4d664740 ---------A   02480  PRINT "CONGRATULATIONS, ";A$(A);", YOU HAVE A YAHTZEE!!!"
    0x58bd4d664940 ----------   02490  PRINT CHR$(7)
    0x58bd4d664b40 ----------   02500  PRINT CHR$(7)
    0x58bd4d664e00 ----------   02510  FOR V4=1 TO 7
    0x58bd4d665020 ----------   02520  PRINT CHR$(7);
    0x58bd4d665160 ---------A   02530  NEXT V4
    0x58bd4d6651f0 ---------A   02540  GOTO 3110
    0x58bd4d665260 ---------A   02550  REM ***FULL HOUSE
    0x58bd4d665550 ----------   02560  L4=0
    0x58bd4d665800 ----------   02570  L5=0
    0x58bd4d665b70 ----------   02580  FOR L=1 TO 6
    0x58bd4d665e50 ----------   02590  L2(L)=0
    0x58bd4d665f80 ---------A   02600  NEXT L
    0x58bd4d666260 ----------   02610  FOR L=1 TO 6
    0x58bd4d666610 ---------A   02620  FOR L1=1 TO 5
    0x58bd4d666970 ---------A   02630  IF C(L1)<>L THEN 2660
    0x58bd4d666e70 ---------A   02640  L2(L)=L2(L)+1
    0x58bd4d666fa0 ----------   02650  NEXT L1
    0x58bd4d6670d0 ---------A   02660  NEXT L
    0x58bd4d667480 ---------A   02670  FOR L3=1 TO 6
    0x58bd4d6676f0 ---------A   02680  IF L5=1 THEN 2720
    0x58bd4d667a30 ---------A   02690  IF L2(L3)<>2 THEN 2720
    0x58bd4d667d50 ----------   02700  L5=L5+1
    0x58bd4d667dd0 ---------A   02710  GOTO 2730
    0x58bd4d668100 ---------A   02720  IF L2(L3)<>3 THEN 2740
    0x58bd4d668440 ---------A   02730  L4=L4+1
    0x58bd4d668570 ---------A   02740  NEXT L3
    0x58bd4d6687e0 ---------A   02750  IF L4=2 THEN 2790
    0x58bd4d668b80 ----------   02760  K(9,A)=.4
    0x58bd4d668bf0 ---------A   02770  GOTO 3110
    0x58bd4d668f80 ----------   02780  K(9,A)=25
    0x58bd4d668ff0 ---------A   02790  GOTO 3110
    0x58bd4d669080 ----------   02800  GOTO 3110
    0x58bd4d669100 ---------A   02810  REM ***PUT NUMBERS IN ORDER, STRAIGHTS
    0x58bd4d6694a0 ----------   02820  FOR M2=1 TO 4
    0x58bd4d669850 ---------A   02830  FOR M1=1 TO 4
    0x58bd4d669da0 ---------A   02840  IF C(M1+1)>=C(M1) THEN 2890
    0x58bd4d66a160 ----------   02850  Z=C(M1)
    0x58bd4d66a630 ----------   02860  C(M1)=C(M1+1)
    0x58bd4d66aa40 ---------A   02870  C(M1+1)=Z
    0x58bd4d66ab70 ----------   02880  NEXT M1
    0x58bd4d66aca0 ---------A   02890  NEXT M2
    0x58bd4d66af90 ---------A   02900  G1=1
    0x58bd4d66b320 ---------A   02910  FOR X=2 TO 5
    0x58bd4d66b7d0 ---------A   02920  K(13,A)=Y1
    0x58bd4d66be00 ---------A   02930  IF C(X-1)+1<>C(X) THEN 2950
    0x58bd4d66c140 ---------A   02940  G1=G1+1
    0x58bd4d66c270 ---------A   02950  NEXT X
    0x58bd4d66c4e0 ---------A   02960  IF I=11 THEN 3000
    0x58bd4d66c740 ---------A   02970  IF G1<4 THEN 3040
    0x58bd4d66cb00 ----------   02980  K(I,A)=30
    0x58bd4d66cb70 ---------A   02990  GOTO 3110
    0x58bd4d66cdc0 ---------A   03000  IF G1<>5 THEN 3040
    0x58bd4d66d180 ----------   03010  K(I,A)=40
    0x58bd4d66d1f0 ---------A   03020  GOTO 3110
    0x58bd4d66d5a0 ----------   03030  K(I,A)=.4
    0x58bd4d66d610 ---------A   03040  GOTO 3110
    0x58bd4d66d680 ---------A   03050  REM ***CHANCE
    0x58bd4d66e0e0 ---------A   03060  Y1=0
    0x58bd4d66e450 ----------   03070  FOR Y=1 TO 5
    0x58bd4d66e870 ----------   03080  Y1=C(Y)+Y1
    0x58bd4d66e9a0 ----------   03090  NEXT Y
    0x58bd4d66eda0 ---------A   03100  K(13,A)=Y1
    0x58bd4d66f790 ---------A   03110  PRINT A$(A);", YOU NOW HAVE";INT(K(I,A));"POINTS IN ROW #";I;", ";
    0x58bd4d66f910 ---------A   03120  PRINT "(";
    0x58bd4d66fb80 ---------A   03130  IF I>6 THEN 3150
    0x58bd4d670180 ---------A   03140  ON I GOTO 3170,3190,3210,3230,3250,3270
    0x58bd4d670930 ---------A   03150  ON I-6 GOTO 3290,3310,3330,3360,3380,3400,3410
    0x58bd4d670a90 ----------   03160  PRINT "(1)ACES";
    0x58bd4d670b20 ---------A   03170  GOTO 3420
    0x58bd4d670c70 ----------   03180  PRINT "(2)TWOS";
    0x58bd4d670d00 ---------A   03190  GOTO 3420
    0x58bd4d670e50 ----------   03200  PRINT "(3)THREES";
    0x58bd4d670ee0 ---------A   03210  GOTO 3420
    0x58bd4d671030 ----------   03220  PRINT "(4)FOURS";
    0x58bd4d6710c0 ---------A   03230  GOTO 3420
    0x58bd4d671210 ----------   03240  PRINT "(5)FIVES";
    0x58bd4d6712a0 ---------A   03250  GOTO 3420
    0x58bd4d6713f0 ----------   03260  PRINT "(6)SIXES";
    0x58bd4d671480 ---------A   03270  GOTO 3420
    0x58bd4d6715d0 ----------   03280  PRINT "(7)3 OF A KIND";
    0x58bd4d671660 ---------A   03290  GOTO 3420
    0x58bd4d6717b0 ----------   03300  PRINT "(8)4 OF A KIND";
    0x58bd4d671840 ---------A   03310  GOTO 3420
    0x58bd4d671990 ----------   03320  PRINT "(9)FULL HOUSE";
    0x58bd4d671a30 ---------A   03330  GOTO 3420
    0x58bd4d671b80 ----------   03340  PRINT "(10)SMALL STRAIGHT";
    0x58bd4d671be0 ----------   03350  RESTORE
    0x58bd4d671c70 ---------A   03360  GOTO 3420
    0x58bd4d671dc0 ----------   03370  PRINT "(11)LARGE STRAIGHT";
    0x58bd4d671e50 ---------A   03380  GOTO 3420
    0x58bd4d671fa0 ----------   03390  PRINT "(12)YAHTZEE";
    0x58bd4d672020 ---------A   03400  GOTO 3420
    0x58bd4d672190 ---------A   03410  PRINT "(13)CHANCE";
    0x58bd4d6723f0 ---------A   03420  IF E=25 THEN 4540
    0x58bd4d672710 ---------A   03430  IF I0=25 THEN 4540
    0x58bd4d672880 ---------A   03440  PRINT ")"
    0x58bd4d672b60 ----------   03450  FOR B=1 TO N
    0x58bd4d672f10 ---------A   03460  FOR B1=1 TO 13
    0x58bd4d673330 ---------A   03470  IF K(B1,B)=0 THEN 1390
    0x58bd4d673470 ----------   03480  NEXT B1
    0x58bd4d6735a0 ---------A   03490  NEXT B
    0x58bd4d673970 ----------   03500  FOR B3=1 TO N
    0x58bd4d673c50 ----------   03510  B5(B3)=0
    0x58bd4d673f20 ----------   03520  B8(B3)=0
    0x58bd4d674050 ---------A   03530  NEXT B3
    0x58bd4d6740f0 ---------A   03540  PRINT
    0x58bd4d6743d0 ----------   03550  FOR B3=1 TO N
    0x58bd4d674780 ---------A   03560  FOR B4=1 TO 6
    0x58bd4d674f40 ---------A   03570  B5(B3)=B5(B3)+INT(K(B4,B3))
    0x58bd4d675070 ----------   03580  NEXT B4
    0x58bd4d6751a0 ---------A   03590  NEXT B3
    0x58bd4d675560 ----------   03600  FOR B6=1 TO N
    0x58bd4d675910 ---------A   03610  FOR B7=7 TO 13
    0x58bd4d6760d0 ---------A   03620  B8(B6)=B8(B6)+INT(K(B7,B6))
    0x58bd4d676200 ----------   03630  NEXT B7
    0x58bd4d676330 ---------A   03640  NEXT B6
    0x58bd4d676650 ---------A   03650  FOR B3=1 TO N
    0x58bd4d676990 ---------A   03660  IF B5(B3)<63 THEN 3680
    0x58bd4d676d50 ---------A   03670  K(14,B3)=35
    0x58bd4d676e80 ---------A   03680  NEXT B3
    0x58bd4d677100 ----------   03690  LINE INPUT "ENTER 'RETURN' WHEN PRINTER IS READY. ";XX$
    0x58bd4d677180 ---------A   03700  GOSUB 4070
    0x58bd4d677560 ---------A   03710  FOR A9=1 TO N
    0x58bd4d6779c0 ----------   03720  LPRINT TAB(19);A$(A9);"'S TOTALS"
    0x58bd4d677c60 ---------A   03730  LPRINT TAB(19);"***************"
    0x58bd4d677d00 ---------A   03740  LPRINT
    0x58bd4d678200 ---------A   03750  LPRINT "ACES-----------";INT(K(1,A9))
    0x58bd4d678700 ---------A   03760  LPRINT "TWOS-----------";INT(K(2,A9))
    0x58bd4d678c00 ---------A   03770  LPRINT "THREES---------";INT(K(3,A9))
    0x58bd4d679100 ---------A   03780  LPRINT "FOURS----------";INT(K(4,A9))
    0x58bd4d679600 ---------A   03790  LPRINT "FIVES----------";INT(K(5,A9))
    0x58bd4d679b00 ---------A   03800  LPRINT "SIXES----------";INT(K(6,A9))
    0x58bd4d67a000 ---------A   03810  LPRINT "3 OF A KIND----";INT(K(7,A9))
    0x58bd4d67a500 ---------A   03820  LPRINT "4 OF A KIND----";INT(K(8,A9))
    0x58bd4d67aa00 ---------A   03830  LPRINT "FULL HOUSE-----";INT(K(9,A9))
    0x58bd4d67af00 ---------A   03840  LPRINT "SM. STRAIGHT---";INT(K(10,A9))
    0x58bd4d67b400 ---------A   03850  LPRINT "LG. STRAIGHT---";INT(K(11,A9))
    0x58bd4d67b900 ---------A   03860  LPRINT "YAHTZEE--------";INT(K(12,A9))
    0x58bd4d67be00 ---------A   03870  LPRINT "CHANCE---------";INT(K(13,A9))
    0x58bd4d67be60 ----------   03880  LPRINT
    0x58bd4d67c1d0 ---------A   03890  LPRINT "TOTAL OF UPPER HALF------";B5(A9)
    0x58bd4d67c230 ----------   03900  LPRINT
    0x58bd4d67c660 ---------A   03910  LPRINT "BONUS--------------------";K(14,A9)
    0x58bd4d67c6c0 ----------   03920  LPRINT
    0x58bd4d67ca10 ---------A   03930  LPRINT "TOTAL OF LOWER HALF------";B8(A9)
    0x58bd4d67caa0 ---------A   03940  LPRINT
    0x58bd4d67d370 ---------A   03950  B9=B5(A9)+B8(A9)+K(14,A9)
    0x58bd4d67d7c0 ---------A   03960  LPRINT A$(A9);"'S GRAND TOTAL--------------------------";B9
    0x58bd4d67d840 ---------A   03970  GOSUB 4070
    0x58bd4d67d970 ---------A   03980  NEXT A9
    0x58bd4d67dbe0 ---------A   03990  IF I>13 THEN 1820
    0x58bd4d67dc80 ---------A   04000  GOTO 4620
    0x58bd4d67ddb0 ----------   04010  PRINT "ANSWER WITH YES OR NO"
    0x58bd4d67de10 ----------   04020  RETURN
    0x58bd4d67e0f0 ----------   04030  FOR E=1 TO 72
    0x58bd4d67e250 ----------   04040  LPRINT "-";
    0x58bd4d67e390 ----------   04050  NEXT E
    0x58bd4d67e3e0 ----------   04060  LPRINT
    0x58bd4d67e440 ---------B   04070  RETURN
    0x58bd4d67e4f0 ---------A   04080  GOSUB 4070
    0x58bd4d67e620 ----------   04090  LPRINT "1**ACES"
    0x58bd4d67e680 ----------   04100  GOSUB 4070
    0x58bd4d67e7b0 ----------   04110  LPRINT "2**TWOS"
    0x58bd4d67e860 ---------A   04120  GOSUB 4070
    0x58bd4d67e990 ----------   04130  LPRINT "3**THREES"
    0x58bd4d67e9f0 ----------   04140  GOSUB 4070
    0x58bd4d67eb20 ----------   04150  LPRINT "4**FOURS"
    0x58bd4d67ebd0 ---------A   04160  GOSUB 4070
    0x58bd4d67ed00 ----------   04170  LPRINT "5**FIVES"
    0x58bd4d67ed60 ----------   04180  GOSUB 4070
    0x58bd4d67ee90 ----------   04190  LPRINT "6**SIXES"
    0x58bd4d67ef40 ---------A   04200  GOSUB 4070
    0x58bd4d67f070 ----------   04210  LPRINT "7**3 OF A KIND"
    0x58bd4d67f0d0 ----------   04220  GOSUB 4070
    0x58bd4d67f200 ----------   04230  LPRINT "8**4 OF A KIND"
    0x58bd4d67f2c0 ---------A   04240  GOSUB 4070
    0x58bd4d67f3f0 ----------   04250  LPRINT "9**FULL HOUSE"
    0x58bd4d67f450 ----------   04260  GOSUB 4070
    0x58bd4d67f580 ----------   04270  LPRINT "10**SM. STRAIGHT"
    0x58bd4d67f630 ---------A   04280  GOSUB 4070
    0x58bd4d67f760 ----------   04290  LPRINT "11**LG. STRAIGHT"
    0x58bd4d67f7c0 ----------   04300  GOSUB 4070
    0x58bd4d67f8f0 ----------   04310  LPRINT "12**YAHTZEE"
    0x58bd4d67f980 ---------A   04320  GOSUB 4070
    0x58bd4d67fab0 ----------   04330  LPRINT "13**CHANCE"
    0x58bd4d67fb70 ---------A   04340  GOSUB 4070
    0x58bd4d67fee0 ----------   04350  FOR E1=1 TO 8
    0x58bd4d67ff40 ----------   04360  LPRINT
    0x58bd4d680080 ----------   04370  NEXT E1
    0x58bd4d680270 ----------   04380  PRINT CHR$(26)
    0x58bd4d6803f0 ---------A   04390  PRINT "TEAR OFF SCORECARD"
    0x58bd4d680530 ----------   04400  PRINT "AND HIT 'RETURN'!"
    0x58bd4d680730 ----------   04410  INPUT Q
    0x58bd4d6807d0 ---------A   04420  GOTO 1390
    0x58bd4d680970 ---------C   04430  PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    0x58bd4d680b20 ---------C   04440  PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    0x58bd4d680cd0 ---------C   04450  PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    0x58bd4d680e50 ---------C   04460  PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    0x58bd4d680eb0 ---------C   04470  RETURN
    0x58bd4d680f50 ----------   04480  PRINT
    0x58bd4d6812d0 ----------   04490  PRINT A$(A);", YOU HAVE THE FOLLOWING SCOREBOARD OPTIONS LEFT:"
    0x58bd4d6814d0 ----------   04500  I0=25
    0x58bd4d681780 ----------   04510  FOR I=1 TO 13
    0x58bd4d681ba0 ----------   04520  IF K(I,A)=0 THEN 3130
    0x58bd4d681c20 ----------   04530  GOTO 4550
    0x58bd4d681da0 ---------A   04540  PRINT "  ";
    0x58bd4d682130 ---------A   04550  IF POS(0) > 50 THEN PRINT
    0x58bd4d682270 ----------   04560  NEXT I
    0x58bd4d6822c0 ----------   04570  PRINT
    0x58bd4d682320 ----------   04580  PRINT
    0x58bd4d682520 ----------   04590  I0=0
    0x58bd4d682570 ---------A   04600  RETURN
    0x58bd4d682780 ----------   04610  PRINT CHR$(26)
    0x58bd4d682820 ---------A   04620  PRINT
    0x58bd4d682880 ----------   04630  PRINT
    0x58bd4d6829c0 ----------   04640  PRINT "ANOTHER GAME?===> "
    0x58bd4d682bf0 ---------A   04650  INPUT YN$
    0x58bd4d683020 ---------A   04660  IF LEFT$(YN$,1)="Y" THEN 1200
    0x58bd4d683450 ---------A   04670  IF LEFT$(YN$,1)="N" THEN 4700
    0x58bd4d6834b0 ----------   04680  GOSUB 4020
    0x58bd4d683520 ---------A   04690  GOTO 4650
    0x58bd4d683570 ---------A   04700  END
 */

