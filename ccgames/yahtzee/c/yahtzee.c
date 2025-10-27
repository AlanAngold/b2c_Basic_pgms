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
    0x5c274cccfdb0 ---------A   00005 PRINT CHR$(26)
    0x5c274ccceb80 ---------A   00007 PRINT TAB(25);"YAHTZEE"
    0x5c274cccff30 ---------A   00008 PRINT TAB(20);"CREATIVE COMPUTING"
    0x5c274cccfff0 ---------A   00009 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5c274cccde40 ---------A   00010 PRINT:PRINT "MODIFIED FOR THE OSBORNE-1 WITH PRINTER"
    0x5c274cccf6e0 ---------A   00011 PRINT "BY PETER FLEMING, SFOG, 2/9/82"
    0x5c274ccd65a0 ---------A   00015 DIM C(5),K(14,7),F(4),H2(6),L2(6),B5(7),B8(7),A$(7)
    0x5c274ccd6bb0 ---------A   00020 PRINT CHR$(7):PRINT CHR$(7):PRINT CHR$(7)
    0x5c274ccd6d20 ---------A T 00025 PRINT "THIS IS THE GAME OF YAHTZEE. DO YOU WANT COMMENTS";
    0x5c274cccd670 ---------A   00030 INPUT B$:IF LEFT$(B$,1)="N" THEN 45
    0x5c274ccd7670 ---------A   00033 IF LEFT$(B$,1)="Y" THEN 40
    0x5c274ccd7730 ---------A   00035 GOSUB 935: GOTO 25
    0x5c274ccd77b0 ---------A T 00040 GOSUB 995
    0x5c274ccd7b00 ---------A T 00045 PRINT:PRINT "HOW MANY PLAYERS";:INPUT N
    0x5c274ccd7d60 ---------A   00050 IF N<1 THEN 45
    0x5c274ccd7fe0 ---------A   00053 IF N<=7 THEN 75
    0x5c274ccd8120 ---------A   00055 PRINT "THE MAXIMUM NUMBER OF PLAYERS IS 7."
    0x5c274ccd8190 ---------A   00070 GOTO 45
    0x5c274ccd8550 ---------A T 00075 FOR A0=1 TO N
    0x5c274ccd8b00 ---------A   00080 PRINT "NAME OF PLAYER #";A0;:INPUT A$(A0):NEXT A0
    0x5c274ccd8e50 ---------A T 00085 PRINT:PRINT "WOULD YOU LIKE A PRINTED SCORECARD";:INPUT B$
    0x5c274ccd9280 ---------A   00090 IF LEFT$(B$,1)="N" THEN 100
    0x5c274ccd96a0 ---------A   00093 IF LEFT$(B$,1)="Y" THEN 945
    0x5c274ccd9770 ---------A   00095 GOSUB 935:GOTO 85
    0x5c274ccda1a0 ---------A T 00100 H=0:PRINT:A=A+1:IF A<>N+1 THEN 105
    0x5c274ccda3e0 ---------A   00104 A=1
    0x5c274ccdafa0 ---------A T 00105 FOR B=1 TO 5:C(B)=INT(6*RND(1))+1:NEXT B:PRINT
    0x5c274ccdb670 ---------A T 00110 PRINT:PRINT A$(A);"'S NUMBERS:  ";:H=H+1
    0x5c274ccdc1d0 ---------A   00115 PRINT C(1);C(2);C(3);C(4);C(5):IF H=3 THEN 210
    0x5c274ccdc550 ---------A T 00120 PRINT "HOW MANY DICE TO CHANGE";:INPUT E
    0x5c274ccdc7b0 ---------A   00125 IF E<>25 THEN 130
    0x5c274ccdc870 ---------A   00127 GOSUB 1020:GOTO 120
    0x5c274ccdcab0 ---------A T 00130 IF E>5 THEN 120
    0x5c274ccdcf30 ---------A   00135 IF E<0 THEN 120
    0x5c274ccdd290 ---------A   00137 IF INT(E)<>E THEN 120
    0x5c274ccdd4f0 ---------A   00140 IF E=0 THEN 210
    0x5c274ccdd760 ---------A   00143 IF E=5 THEN 105
    0x5c274ccddef0 ---------A   00145 FOR F3=1 TO 4:F(F3)=0:NEXT F3
    0x5c274ccde090 ---------A T 00150 PRINT "WHICH DICE TO CHANGE";
    0x5c274ccde4e0 ---------A   00155 ON E GOTO 160,165,170,175
    0x5c274ccde760 ---------A T 00160 INPUT F(1):GOTO 180
    0x5c274ccdeb70 ---------A T 00165 INPUT F(1),F(2):GOTO 180
    0x5c274ccdf120 ---------A T 00170 INPUT F(1),F(2),F(3):GOTO 180
    0x5c274ccdf820 ---------A T 00175 INPUT F(1),F(2),F(3),F(4)
    0x5c274cce0390 ---------A T 00180 FOR F1=1 TO 4:F(F1)=INT(F(F1)):IF F(F1)>5 THEN 150
    0x5c274cce06d0 ---------A   00185 IF F(F1)<0 THEN 150
    0x5c274cce0810 ---------A   00187 NEXT F1
    0x5c274cce0ef0 ---------A   00190 FOR F2=1 TO 4:IF F(F2)=0 THEN 200
    0x5c274cce1690 ---------A   00195 C(F(F2))=INT(6*RND(1))+1
    0x5c274cce17c0 ---------A T 00200 NEXT F2
    0x5c274cce1860 ---------A   00205 GOTO 110
    0x5c274cce1ba0 ---------A T 00210 PRINT A$(A);" -- SCOREBOARD NUMBER";
    0x5c274cce1db0 ---------A   00215 INPUT I
    0x5c274cce2010 ---------A   00220 IF I<>25 THEN 225 
    0x5c274cce20d0 ---------A   00223 GOSUB 1020:GOTO 210
    0x5c274cce2320 ---------A T 00225 IF I<1 THEN 210
    0x5c274cce2880 ---------A   00227 I=INT(I):IF I<14 THEN 245
    0x5c274cce2b40 ---------A T 00230 PRINT "CONFIRM";:INPUT B$
    0x5c274cce2f70 ---------A   00235 IF LEFT$(B$,1)="N" THEN 210
    0x5c274cce3390 ---------A   00237 IF LEFT$(B$,1)="Y" THEN 735
    0x5c274cce3460 ---------A   00240 GOSUB 935:GOTO 230
    0x5c274cce3880 ---------A T 00245 IF K(I,A)=0 THEN 260
    0x5c274cce3d10 ---------A   00250 PRINT A$(A);", YOU HAVE ALREADY USED ROW #";I;
    0x5c274cce4370 ---------A   00255 PRINT "YOU HAVE"K(I,A);"POINTS IN ROW #";I:GOTO 210
    0x5c274cce45c0 ---------A T 00260 IF I>6 THEN 305
    0x5c274cce4a60 ---------A   00265 REM***CATEGORIES ONE THOUGH SIX
    0x5c274cce4c90 ---------A   00270 K=0
    0x5c274cce5360 ---------A   00275 FOR G=1 TO 5:IF C(G)<>I THEN 280
    0x5c274cce56d0 ---------A   00277 K=K+I
    0x5c274cce5a40 ---------A T 00280 NEXT G:IF K=0 THEN 295
    0x5c274cce5cc0 ---------A   00283 IF K<>1 THEN 300
    0x5c274cce6010 ---------A   00285 PRINT A$(A);", YOU HAVE 1 POINT IN ROW # 1 (ACES)"
    0x5c274cce6410 ---------A   00290 K(1,A)=1:GOTO 720
    0x5c274cce6820 ---------A T 00295 K(I,A)=.4:GOTO 620
    0x5c274cce6c70 ---------A T 00300 K(I,A)=K:GOTO 620
    0x5c274cce7410 ---------A T 00305 ON I-6 GOTO 315,320,400,485,485,325,605
    0x5c274cce74a0 ---------A   00310 REM ***3 OF A KIND, 4 OF A KIND, YAHTZEE
    0x5c274cce8320 ---------A T 00315 R=3:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 330
    0x5c274cce8fc0 ---------A T 00320 R=4:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 330
    0x5c274cce93c0 ---------A T 00325 R=5:T=50
    0x5c274cce9b40 ---------A T 00330 FOR H3=1 TO 6:H2(H3)=0:NEXT H3
    0x5c274ccea1c0 ---------A   00335 FOR H=1 TO 6:FOR H1=1 TO 5
    0x5c274ccea520 ---------A   00340 IF C(H1)<>H THEN 350
    0x5c274cceaa20 ---------A   00345 H2(H)=H2(H)+1
    0x5c274cceac70 ---------A T 00350 NEXT H1:NEXT H
    0x5c274cceb020 ---------A   00355 FOR H4=1 TO 6
    0x5c274cceb390 ---------A   00360 IF H2(H4)>=R THEN 370
    0x5c274cceb8f0 ---------A   00365 NEXT H4:K(I,A)=.4:GOTO 620
    0x5c274ccebd00 ---------A T 00370 IF K(I,A)=50 THEN 380
    0x5c274ccec360 ---------A   00375 K(I,A)=T:IF I<>12 THEN 395
    0x5c274ccece10 ---------A T 00380 PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x5c274cced2c0 ---------A   00385 PRINT "CONGRATULATIONS, ";A$(A);", YOU HAVE A YAHTZEE!!!"
    0x5c274ccedca0 ---------A   00390 PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x5c274ccedd20 ---------A T 00395 GOTO 620
    0x5c274ccedd80 ---------A T 00400 REM ***FULL HOUSE
    0x5c274cceea90 ---------A   00405 L4=0:L5=0:FOR L=1 TO 6:L2(L)=0:NEXT L
    0x5c274ccef110 ---------A   00410 FOR L=1 TO 6:FOR L1=1 TO 5
    0x5c274ccef470 ---------A   00415 IF C(L1)<>L THEN 425
    0x5c274ccef970 ---------A   00420 L2(L)=L2(L)+1
    0x5c274ccefbc0 ---------A T 00425 NEXT L1:NEXT L
    0x5c274cceff60 ---------A   00430 FOR L3=1 TO 6
    0x5c274ccf01d0 ---------A   00435 IF L5=1 THEN 450
    0x5c274ccf0510 ---------A   00440 IF L2(L3)<>2 THEN 450
    0x5c274ccf08b0 ---------A   00445 L5=L5+1:GOTO 455
    0x5c274ccf0bd0 ---------A T 00450 IF L2(L3)<>3 THEN 460
    0x5c274ccf0f10 ---------A T 00455 L4=L4+1
    0x5c274ccf1040 ---------A T 00460 NEXT L3
    0x5c274ccf12a0 ---------A   00465 IF L4=2 THEN 475
    0x5c274ccf16b0 ---------A   00470 K(9,A)=.4:GOTO 620
    0x5c274ccf1aa0 ---------A T 00475 K(9,A)=25:GOTO 620
    0x5c274ccf1b20 ----------   00480 GOTO 620
    0x5c274ccf1b90 ---------A T 00485 REM ***PUT NUMBERS IN ORDER, STRAIGHTS
    0x5c274ccf22d0 ---------A   00490 FOR M2=1 TO 4:FOR M1=1 TO 4
    0x5c274ccf2820 ---------A   00495 IF C(M1+1)>=C(M1) THEN 507
    0x5c274ccf34c0 ---------A   00500 Z=C(M1):C(M1)=C(M1+1):C(M1+1)=Z
    0x5c274ccf3710 ---------A T 00507 NEXT M1:NEXT M2
    0x5c274ccf39f0 ---------A   00510 G1=1
    0x5c274ccf3d80 ---------A   00515 FOR X=2 TO 5
    0x5c274ccf4230 ---------A   00517 K(13,A)=Y1
    0x5c274ccf4860 ---------A   00525 IF C(X-1)+1<>C(X) THEN 540
    0x5c274ccf4ba0 ---------A   00530 G1=G1+1
    0x5c274ccf4cd0 ---------A T 00540 NEXT X
    0x5c274ccf4f30 ---------A   00545 IF I=11 THEN 560
    0x5c274ccf5190 ---------A   00550 IF G1<4 THEN 570
    0x5c274ccf55c0 ---------A   00555 K(I,A)=30:GOTO 620
    0x5c274ccf5800 ---------A T 00560 IF G1<>5 THEN 570
    0x5c274ccf5c30 ---------A   00565 K(I,A)=40:GOTO 620
    0x5c274ccf6040 ---------A T 00570 K(I,A)=.4:GOTO 620
    0x5c274ccf60a0 ---------A T 00605 REM ***CHANCE
    0x5c274ccf6af0 ---------A   00610 Y1=0
    0x5c274ccf77a0 ---------A   00615 FOR Y=1 TO 5:Y1=C(Y)+Y1:NEXT Y:K(13,A)=Y1
    0x5c274ccf8190 ---------A T 00620 PRINT A$(A);", YOU NOW HAVE";INT(K(I,A));"POINTS IN ROW #";I;", ";
    0x5c274ccf8300 ---------A   00625 PRINT "(";
    0x5c274ccf8560 ---------A T 00630 IF I>6 THEN 640
    0x5c274ccf8b60 ---------A   00635 ON I GOTO 645,650,655,660,665,670
    0x5c274ccf9300 ---------A T 00640 ON I-6 GOTO 675,680,685,690,695,700,705
    0x5c274ccf94d0 ---------A T 00645 PRINT "(1)ACES";:GOTO 710
    0x5c274ccf9690 ---------A T 00650 PRINT "(2)TWOS";:GOTO 710
    0x5c274ccf9850 ---------A T 00655 PRINT "(3)THREES";:GOTO 710
    0x5c274ccf9a10 ---------A T 00660 PRINT "(4)FOURS";:GOTO 710
    0x5c274ccf9bd0 ---------A T 00665 PRINT "(5)FIVES";:GOTO 710
    0x5c274ccf9d90 ---------A T 00670 PRINT "(6)SIXES";:GOTO 710
    0x5c274ccf9f50 ---------A T 00675 PRINT "(7)3 OF A KIND";:GOTO 710
    0x5c274ccfa110 ---------A T 00680 PRINT "(8)4 OF A KIND";:GOTO 710
    0x5c274ccfa2e0 ---------A T 00685 PRINT "(9)FULL HOUSE";:GOTO 710
    0x5c274ccfa4f0 ---------A T 00690 PRINT "(10)SMALL STRAIGHT";:RESTORE:GOTO 710
    0x5c274ccfa6b0 ---------A T 00695 PRINT "(11)LARGE STRAIGHT";:GOTO 710
    0x5c274ccfa860 ---------A T 00700 PRINT "(12)YAHTZEE";:GOTO 710
    0x5c274ccfa9c0 ---------A T 00705 PRINT "(13)CHANCE";
    0x5c274ccfac10 ---------A T 00710 IF E=25 THEN 1030
    0x5c274ccfaf30 ---------A   00713 IF I0=25 THEN 1030
    0x5c274ccfb0a0 ---------A   00715 PRINT ")"
    0x5c274ccfb720 ---------A T 00720 FOR B=1 TO N:FOR B1=1 TO 13
    0x5c274ccfbb40 ---------A   00725 IF K(B1,B)=0 THEN 100
    0x5c274ccfbda0 ---------A   00730 NEXT B1:NEXT B
    0x5c274ccfc840 ---------A T 00735 FOR B3=1 TO N:B5(B3)=0:B8(B3)=0:NEXT B3
    0x5c274ccfc8d0 ---------A   00740 PRINT
    0x5c274ccfcf50 ---------A   00745 FOR B3=1 TO N:FOR B4=1 TO 6
    0x5c274ccfd710 ---------A   00750 B5(B3)=B5(B3)+INT(K(B4,B3))
    0x5c274ccfd960 ---------A   00755 NEXT B4:NEXT B3
    0x5c274ccfe0c0 ---------A   00760 FOR B6=1 TO N:FOR B7=7 TO 13
    0x5c274ccfe880 ---------A   00765 B8(B6)=B8(B6)+INT(K(B7,B6))
    0x5c274ccfead0 ---------A   00770 NEXT B7:NEXT B6
    0x5c274ccfede0 ---------A   00775 FOR B3=1 TO N
    0x5c274ccff120 ---------A   00780 IF B5(B3)<63 THEN 790
    0x5c274ccff4e0 ---------A   00785 K(14,B3)=35
    0x5c274ccff610 ---------A T 00790 NEXT B3
    0x5c274ccff900 ---------A   00795 LINE INPUT "ENTER 'RETURN' WHEN PRINTER IS READY. ";XX$:GOSUB 940
    0x5c274ccffcd0 ---------A   00800 FOR A9=1 TO N
    0x5c274cd003c0 ---------A   00810 LPRINT TAB(19);A$(A9);"'S TOTALS":LPRINT TAB(19);"***************"
    0x5c274cd00450 ---------A   00815 LPRINT
    0x5c274cd00940 ---------A   00820 LPRINT "ACES-----------";INT(K(1,A9))
    0x5c274cd00e30 ---------A   00825 LPRINT "TWOS-----------";INT(K(2,A9))
    0x5c274cd01320 ---------A   00830 LPRINT "THREES---------";INT(K(3,A9))
    0x5c274cd01810 ---------A   00835 LPRINT "FOURS----------";INT(K(4,A9))
    0x5c274cd01d00 ---------A   00840 LPRINT "FIVES----------";INT(K(5,A9))
    0x5c274cd021f0 ---------A   00845 LPRINT "SIXES----------";INT(K(6,A9))
    0x5c274cd026e0 ---------A   00850 LPRINT "3 OF A KIND----";INT(K(7,A9))
    0x5c274cd02bd0 ---------A   00855 LPRINT "4 OF A KIND----";INT(K(8,A9))
    0x5c274cd030c0 ---------A   00860 LPRINT "FULL HOUSE-----";INT(K(9,A9))
    0x5c274cd035b0 ---------A   00865 LPRINT "SM. STRAIGHT---";INT(K(10,A9))
    0x5c274cd03aa0 ---------A   00870 LPRINT "LG. STRAIGHT---";INT(K(11,A9))
    0x5c274cd03f90 ---------A   00875 LPRINT "YAHTZEE--------";INT(K(12,A9))
    0x5c274cd04480 ---------A   00880 LPRINT "CHANCE---------";INT(K(13,A9))
    0x5c274cd04830 ---------A   00885 LPRINT:LPRINT "TOTAL OF UPPER HALF------";B5(A9)
    0x5c274cd04ca0 ---------A   00890 LPRINT:LPRINT "BONUS--------------------";K(14,A9)
    0x5c274cd05030 ---------A   00895 LPRINT:LPRINT "TOTAL OF LOWER HALF------";B8(A9)
    0x5c274cd050b0 ---------A   00900 LPRINT
    0x5c274cd05970 ---------A   00905 B9=B5(A9)+B8(A9)+K(14,A9)
    0x5c274cd05dc0 ---------A   00910 LPRINT A$(A9);"'S GRAND TOTAL--------------------------";B9
    0x5c274cd05e30 ---------A   00915 GOSUB 940
    0x5c274cd05f50 ---------A   00920 NEXT A9
    0x5c274cd061b0 ---------A   00925 IF I>13 THEN 210
    0x5c274cd06250 ---------A   00930 GOTO 1040
    0x5c274cd063c0 ----------   00935 PRINT "ANSWER WITH YES OR NO":RETURN
    0x5c274cd069c0 ---------B G 00940 FOR E=1 TO 72:LPRINT "-";:NEXT E:LPRINT:RETURN
    0x5c274cd06a70 ---------A T 00945 GOSUB 940
    0x5c274cd06da0 ---------A   00950 LPRINT "1**ACES":GOSUB 940:LPRINT "2**TWOS":GOSUB 940
    0x5c274cd070d0 ---------A   00955 LPRINT "3**THREES":GOSUB 940:LPRINT "4**FOURS":GOSUB 940
    0x5c274cd07400 ---------A   00960 LPRINT "5**FIVES":GOSUB 940:LPRINT "6**SIXES":GOSUB 940
    0x5c274cd07740 ---------A   00965 LPRINT "7**3 OF A KIND":GOSUB 940:LPRINT "8**4 OF A KIND":GOSUB 940
    0x5c274cd07a70 ---------A   00970 LPRINT "9**FULL HOUSE":GOSUB 940:LPRINT "10**SM. STRAIGHT":GOSUB 940
    0x5c274cd07d80 ---------A   00975 LPRINT "11**LG. STRAIGHT":GOSUB 940:LPRINT "12**YAHTZEE":GOSUB 940
    0x5c274cd07f50 ---------A   00980 LPRINT "13**CHANCE":GOSUB 940
    0x5c274cd08790 ---------A   00985 FOR E1=1 TO 8:LPRINT:NEXT E1:PRINT CHR$(26):PRINT "TEAR OFF SCORECARD"
    0x5c274cd08b50 ---------A   00990 PRINT "AND HIT 'RETURN'!":INPUT Q:GOTO 100
    0x5c274cd08ce0 ---------C G 00995 PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    0x5c274cd08e80 ---------C   01000 PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    0x5c274cd09020 ---------C   01005 PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    0x5c274cd09190 ---------C   01010 PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    0x5c274cd091e0 ---------C   01015 RETURN
    0x5c274cd095f0 ----------   01020 PRINT:PRINT A$(A);", YOU HAVE THE FOLLOWING SCOREBOARD OPTIONS LEFT:"
    0x5c274cd09eb0 ----------   01025 I0=25:FOR I=1 TO 13:IF K(I,A)=0 THEN 630
    0x5c274cd09f30 ----------   01027 GOTO 1035
    0x5c274cd0a0a0 ---------A T 01030 PRINT "  ";
    0x5c274cd0a410 ---------A T 01035 IF POS(0) > 50 THEN PRINT
    0x5c274cd0a820 ---------A   01036 NEXT I:PRINT:PRINT:I0=0:RETURN
    0x5c274cd0aac0 ---------A T 01040 PRINT CHR$(26):PRINT
    0x5c274cd0ae60 ---------A T 01041 PRINT:PRINT "ANOTHER GAME?===> ":INPUT YN$
    0x5c274cd0b290 ---------A   01045 IF LEFT$(YN$,1)="Y" THEN 45
    0x5c274cd0b6c0 ---------A   01050 IF LEFT$(YN$,1)="N" THEN 1060
    0x5c274cd0b780 ---------A   01055 GOSUB 935:GOTO 1041
    0x5c274cd0b7c0 ---------A T 01060 END
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
   A) 0x5c274cccfdb0 (00005)   0x5c274cccfdb0 (00005)   0x5c274cd0b7c0 (01060)   0x5c274cd0b7c0 (01060)   
   B) 0x5c274cd069c0 (00940)   0x5c274cd069c0 (00940)   0x5c274cd069c0 (00940)   0x5c274cd069c0 (00940)   
   C) 0x5c274cd08ce0 (00995)   0x5c274cd08ce0 (00995)   0x5c274cd091e0 (01015)   0x5c274cd091e0 (01015)   

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
    A                        Integer     
    A$              Array    String          {0,6} 
    A0                       Integer     
    A9                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B$                       String      
    B1                       Integer     
    B3                       Integer     
    B4                       Integer     
    B5              Array    Integer         {0,6} 
    B6                       Integer     
    B7                       Integer     
    B8              Array    Integer         {0,6} 
    B9                       Integer     
    C               Array    Integer         {0,4} 
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    E                        Integer     
    E1                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F               Array    Integer         {0,3} 
    F1                       Integer     
    F2                       Integer     
    F3                       Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    G1                       Integer     
    H                        Integer     
    H1                       Integer     
    H2              Array    Integer         {0,5} 
    H3                       Integer     
    H4                       Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    I0                       Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K               Array    Integer         {0,13} {0,6} 
    L                        Integer     
    L1                       Integer     
    L2              Array    Integer         {0,5} 
    L3                       Integer     
    L4                       Integer     
    L5                       Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M1                       Integer     
    M2                       Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    OCT$            Function String          args=1, float  
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
    V4                       Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    XX$                      String      
    Y                        Integer     
    Y1                       Integer     
    YN$                      String      
    Z                        Integer     

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
    0x5c274cccfdb0 ---------A   01000 PRINT CHR$(26)
    0x5c274ccceb80 ---------A   01010 PRINT TAB(25);"YAHTZEE"
    0x5c274cccff30 ---------A   01020 PRINT TAB(20);"CREATIVE COMPUTING"
    0x5c274cccfff0 ---------A   01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5c274cccde40 ---------A   01040 PRINT:PRINT "MODIFIED FOR THE OSBORNE-1 WITH PRINTER"
    0x5c274cccf6e0 ---------A   01050 PRINT "BY PETER FLEMING, SFOG, 2/9/82"
    0x5c274ccd65a0 ---------A   01060 DIM C(5),K(14,7),F(4),H2(6),L2(6),B5(7),B8(7),A$(7)
    0x5c274ccd6bb0 ---------A   01070 PRINT CHR$(7):PRINT CHR$(7):PRINT CHR$(7)
    0x5c274ccd6d20 ---------A T 01080 PRINT "THIS IS THE GAME OF YAHTZEE. DO YOU WANT COMMENTS";
    0x5c274cccd670 ---------A   01090 INPUT B$:IF LEFT$(B$,1)="N" THEN 1130
    0x5c274ccd7670 ---------A   01100 IF LEFT$(B$,1)="Y" THEN 1120
    0x5c274ccd7730 ---------A   01110 GOSUB 91110: GOTO 1080
    0x5c274ccd77b0 ---------A T 01120 GOSUB 3140
    0x5c274ccd7b00 ---------A T 01130 PRINT:PRINT "HOW MANY PLAYERS";:INPUT N
    0x5c274ccd7d60 ---------A   01140 IF N<1 THEN 1130
    0x5c274ccd7fe0 ---------A   01150 IF N<=7 THEN 1180
    0x5c274ccd8120 ---------A   01160 PRINT "THE MAXIMUM NUMBER OF PLAYERS IS 7."
    0x5c274ccd8190 ---------A   01170 GOTO 1130
    0x5c274ccd8550 ---------A T 01180 FOR A0=1 TO N
    0x5c274ccd8b00 ---------A   01190 PRINT "NAME OF PLAYER #";A0;:INPUT A$(A0):NEXT A0
    0x5c274ccd8e50 ---------A T 01200 PRINT:PRINT "WOULD YOU LIKE A PRINTED SCORECARD";:INPUT B$
    0x5c274ccd9280 ---------A   01210 IF LEFT$(B$,1)="N" THEN 1240
    0x5c274ccd96a0 ---------A   01220 IF LEFT$(B$,1)="Y" THEN 2930
    0x5c274ccd9770 ---------A   01230 GOSUB 935:GOTO 1200
    0x5c274ccda1a0 ---------A T 01240 H=0:PRINT:A=A+1:IF A<>N+1 THEN 1260
    0x5c274ccda3e0 ---------A   01250 A=1
    0x5c274ccdafa0 ---------A T 01260 FOR B=1 TO 5:C(B)=INT(6*RND(1))+1:NEXT B:PRINT
    0x5c274ccdb670 ---------A T 01270 PRINT:PRINT A$(A);"'S NUMBERS:  ";:H=H+1
    0x5c274ccdc1d0 ---------A   01280 PRINT C(1);C(2);C(3);C(4);C(5):IF H=3 THEN 1510
    0x5c274ccdc550 ---------A T 01290 PRINT "HOW MANY DICE TO CHANGE";:INPUT E
    0x5c274ccdc7b0 ---------A   01300 IF E<>25 THEN 1320
    0x5c274ccdc870 ---------A   01310 GOSUB 1020:GOTO 1290
    0x5c274ccdcab0 ---------A T 01320 IF E>5 THEN 1290
    0x5c274ccdcf30 ---------A   01330 IF E<0 THEN 1290
    0x5c274ccdd290 ---------A   01340 IF INT(E)<>E THEN 1290
    0x5c274ccdd4f0 ---------A   01350 IF E=0 THEN 1510
    0x5c274ccdd760 ---------A   01360 IF E=5 THEN 1260
    0x5c274ccddef0 ---------A   01370 FOR F3=1 TO 4:F(F3)=0:NEXT F3
    0x5c274ccde090 ---------A T 01380 PRINT "WHICH DICE TO CHANGE";
    0x5c274ccde4e0 ---------A   01390 ON E GOTO 1400,1410,1420,1430
    0x5c274ccde760 ---------A T 01400 INPUT F(1):GOTO 1440
    0x5c274ccdeb70 ---------A T 01410 INPUT F(1),F(2):GOTO 1440
    0x5c274ccdf120 ---------A T 01420 INPUT F(1),F(2),F(3):GOTO 1440
    0x5c274ccdf820 ---------A T 01430 INPUT F(1),F(2),F(3),F(4)
    0x5c274cce0390 ---------A T 01440 FOR F1=1 TO 4:F(F1)=INT(F(F1)):IF F(F1)>5 THEN 1380
    0x5c274cce06d0 ---------A   01450 IF F(F1)<0 THEN 1380
    0x5c274cce0810 ---------A   01460 NEXT F1
    0x5c274cce0ef0 ---------A   01470 FOR F2=1 TO 4:IF F(F2)=0 THEN 1490
    0x5c274cce1690 ---------A   01480 C(F(F2))=INT(6*RND(1))+1
    0x5c274cce17c0 ---------A T 01490 NEXT F2
    0x5c274cce1860 ---------A   01500 GOTO 1270
    0x5c274cce1ba0 ---------A T 01510 PRINT A$(A);" -- SCOREBOARD NUMBER";
    0x5c274cce1db0 ---------A   01520 INPUT I
    0x5c274cce2010 ---------A   01530 IF I<>25 THEN 1550 
    0x5c274cce20d0 ---------A   01540 GOSUB 1020:GOTO 1510
    0x5c274cce2320 ---------A T 01550 IF I<1 THEN 1510
    0x5c274cce2880 ---------A   01560 I=INT(I):IF I<14 THEN 1610
    0x5c274cce2b40 ---------A T 01570 PRINT "CONFIRM";:INPUT B$
    0x5c274cce2f70 ---------A   01580 IF LEFT$(B$,1)="N" THEN 1510
    0x5c274cce3390 ---------A   01590 IF LEFT$(B$,1)="Y" THEN 2540
    0x5c274cce3460 ---------A   01600 GOSUB 935:GOTO 1570
    0x5c274cce3880 ---------A T 01610 IF K(I,A)=0 THEN 1640
    0x5c274cce3d10 ---------A   01620 PRINT A$(A);", YOU HAVE ALREADY USED ROW #";I;
    0x5c274cce4370 ---------A   01630 PRINT "YOU HAVE"K(I,A);"POINTS IN ROW #";I:GOTO 1510
    0x5c274cce45c0 ---------A T 01640 IF I>6 THEN 1750
    0x5c274cce4a60 ---------A   01650 REM***CATEGORIES ONE THOUGH SIX
    0x5c274cce4c90 ---------A   01660 K=0
    0x5c274cce5360 ---------A   01670 FOR G=1 TO 5:IF C(G)<>I THEN 1690
    0x5c274cce56d0 ---------A   01680 K=K+I
    0x5c274cce5a40 ---------A T 01690 NEXT G:IF K=0 THEN 1730
    0x5c274cce5cc0 ---------A   01700 IF K<>1 THEN 1740
    0x5c274cce6010 ---------A   01710 PRINT A$(A);", YOU HAVE 1 POINT IN ROW # 1 (ACES)"
    0x5c274cce6410 ---------A   01720 K(1,A)=1:GOTO 2510
    0x5c274cce6820 ---------A T 01730 K(I,A)=.4:GOTO 2300
    0x5c274cce6c70 ---------A T 01740 K(I,A)=K:GOTO 2300
    0x5c274cce7410 ---------A T 01750 ON I-6 GOTO 1770,1780,1950,2110,485,1790,2280
    0x5c274cce74a0 ---------A   01760 REM ***3 OF A KIND, 4 OF A KIND, YAHTZEE
    0x5c274cce8320 ---------A T 01770 R=3:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 1800
    0x5c274cce8fc0 ---------A T 01780 R=4:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 1800
    0x5c274cce93c0 ---------A T 01790 R=5:T=50
    0x5c274cce9b40 ---------A T 01800 FOR H3=1 TO 6:H2(H3)=0:NEXT H3
    0x5c274ccea1c0 ---------A   01810 FOR H=1 TO 6:FOR H1=1 TO 5
    0x5c274ccea520 ---------A   01820 IF C(H1)<>H THEN 1840
    0x5c274cceaa20 ---------A   01830 H2(H)=H2(H)+1
    0x5c274cceac70 ---------A T 01840 NEXT H1:NEXT H
    0x5c274cceb020 ---------A   01850 FOR H4=1 TO 6
    0x5c274cceb390 ---------A   01860 IF H2(H4)>=R THEN 1880
    0x5c274cceb8f0 ---------A   01870 NEXT H4:K(I,A)=.4:GOTO 2300
    0x5c274ccebd00 ---------A T 01880 IF K(I,A)=50 THEN 1900
    0x5c274ccec360 ---------A   01890 K(I,A)=T:IF I<>12 THEN 1930
    0x5c274ccece10 ---------A T 01900 PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x5c274cced2c0 ---------A   01910 PRINT "CONGRATULATIONS, ";A$(A);", YOU HAVE A YAHTZEE!!!"
    0x5c274ccedca0 ---------A   01920 PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
    0x5c274ccedd20 ---------A T 01930 GOTO 2300
    0x5c274ccedd80 ---------A   01940 REM ***FULL HOUSE
    0x5c274cceea90 ---------A T 01950 L4=0:L5=0:FOR L=1 TO 6:L2(L)=0:NEXT L
    0x5c274ccef110 ---------A   01960 FOR L=1 TO 6:FOR L1=1 TO 5
    0x5c274ccef470 ---------A   01970 IF C(L1)<>L THEN 1990
    0x5c274ccef970 ---------A   01980 L2(L)=L2(L)+1
    0x5c274ccefbc0 ---------A T 01990 NEXT L1:NEXT L
    0x5c274cceff60 ---------A   02000 FOR L3=1 TO 6
    0x5c274ccf01d0 ---------A   02010 IF L5=1 THEN 2040
    0x5c274ccf0510 ---------A   02020 IF L2(L3)<>2 THEN 2040
    0x5c274ccf08b0 ---------A   02030 L5=L5+1:GOTO 2050
    0x5c274ccf0bd0 ---------A T 02040 IF L2(L3)<>3 THEN 2060
    0x5c274ccf0f10 ---------A T 02050 L4=L4+1
    0x5c274ccf1040 ---------A T 02060 NEXT L3
    0x5c274ccf12a0 ---------A   02070 IF L4=2 THEN 2090
    0x5c274ccf16b0 ---------A   02080 K(9,A)=.4:GOTO 2300
    0x5c274ccf1aa0 ---------A T 02090 K(9,A)=25:GOTO 2300
    0x5c274ccf1b90 ---------A   02100 REM ***PUT NUMBERS IN ORDER, STRAIGHTS
    0x5c274ccf22d0 ---------A T 02110 FOR M2=1 TO 4:FOR M1=1 TO 4
    0x5c274ccf2820 ---------A   02120 IF C(M1+1)>=C(M1) THEN 2140
    0x5c274ccf34c0 ---------A   02130 Z=C(M1):C(M1)=C(M1+1):C(M1+1)=Z
    0x5c274ccf3710 ---------A T 02140 NEXT M1:NEXT M2
    0x5c274ccf39f0 ---------A   02150 G1=1
    0x5c274ccf3d80 ---------A   02160 FOR X=2 TO 5
    0x5c274ccf4230 ---------A   02170 K(13,A)=Y1
    0x5c274ccf4860 ---------A   02180 IF C(X-1)+1<>C(X) THEN 2200
    0x5c274ccf4ba0 ---------A   02190 G1=G1+1
    0x5c274ccf4cd0 ---------A T 02200 NEXT X
    0x5c274ccf4f30 ---------A   02210 IF I=11 THEN 2240
    0x5c274ccf5190 ---------A   02220 IF G1<4 THEN 2260
    0x5c274ccf55c0 ---------A   02230 K(I,A)=30:GOTO 2300
    0x5c274ccf5800 ---------A T 02240 IF G1<>5 THEN 2260
    0x5c274ccf5c30 ---------A   02250 K(I,A)=40:GOTO 2300
    0x5c274ccf6040 ---------A T 02260 K(I,A)=.4:GOTO 2300
    0x5c274ccf60a0 ---------A   02270 REM ***CHANCE
    0x5c274ccf6af0 ---------A T 02280 Y1=0
    0x5c274ccf77a0 ---------A   02290 FOR Y=1 TO 5:Y1=C(Y)+Y1:NEXT Y:K(13,A)=Y1
    0x5c274ccf8190 ---------A T 02300 PRINT A$(A);", YOU NOW HAVE";INT(K(I,A));"POINTS IN ROW #";I;", ";
    0x5c274ccf8300 ---------A   02310 PRINT "(";
    0x5c274ccf8560 ---------A   02320 IF I>6 THEN 2340
    0x5c274ccf8b60 ---------A   02330 ON I GOTO 2350,2360,2370,2380,2390,2400
    0x5c274ccf9300 ---------A T 02340 ON I-6 GOTO 2410,2420,2430,2440,2450,2460,2470
    0x5c274ccf94d0 ---------A T 02350 PRINT "(1)ACES";:GOTO 2480
    0x5c274ccf9690 ---------A T 02360 PRINT "(2)TWOS";:GOTO 2480
    0x5c274ccf9850 ---------A T 02370 PRINT "(3)THREES";:GOTO 2480
    0x5c274ccf9a10 ---------A T 02380 PRINT "(4)FOURS";:GOTO 2480
    0x5c274ccf9bd0 ---------A T 02390 PRINT "(5)FIVES";:GOTO 2480
    0x5c274ccf9d90 ---------A T 02400 PRINT "(6)SIXES";:GOTO 2480
    0x5c274ccf9f50 ---------A T 02410 PRINT "(7)3 OF A KIND";:GOTO 2480
    0x5c274ccfa110 ---------A T 02420 PRINT "(8)4 OF A KIND";:GOTO 2480
    0x5c274ccfa2e0 ---------A T 02430 PRINT "(9)FULL HOUSE";:GOTO 2480
    0x5c274ccfa4f0 ---------A T 02440 PRINT "(10)SMALL STRAIGHT";:RESTORE:GOTO 2480
    0x5c274ccfa6b0 ---------A T 02450 PRINT "(11)LARGE STRAIGHT";:GOTO 2480
    0x5c274ccfa860 ---------A T 02460 PRINT "(12)YAHTZEE";:GOTO 2480
    0x5c274ccfa9c0 ---------A T 02470 PRINT "(13)CHANCE";
    0x5c274ccfac10 ---------A T 02480 IF E=25 THEN 3030
    0x5c274ccfaf30 ---------A   02490 IF I0=25 THEN 3030
    0x5c274ccfb0a0 ---------A   02500 PRINT ")"
    0x5c274ccfb720 ---------A T 02510 FOR B=1 TO N:FOR B1=1 TO 13
    0x5c274ccfbb40 ---------A   02520 IF K(B1,B)=0 THEN 1240
    0x5c274ccfbda0 ---------A   02530 NEXT B1:NEXT B
    0x5c274ccfc840 ---------A T 02540 FOR B3=1 TO N:B5(B3)=0:B8(B3)=0:NEXT B3
    0x5c274ccfc8d0 ---------A   02550 PRINT
    0x5c274ccfcf50 ---------A   02560 FOR B3=1 TO N:FOR B4=1 TO 6
    0x5c274ccfd710 ---------A   02570 B5(B3)=B5(B3)+INT(K(B4,B3))
    0x5c274ccfd960 ---------A   02580 NEXT B4:NEXT B3
    0x5c274ccfe0c0 ---------A   02590 FOR B6=1 TO N:FOR B7=7 TO 13
    0x5c274ccfe880 ---------A   02600 B8(B6)=B8(B6)+INT(K(B7,B6))
    0x5c274ccfead0 ---------A   02610 NEXT B7:NEXT B6
    0x5c274ccfede0 ---------A   02620 FOR B3=1 TO N
    0x5c274ccff120 ---------A   02630 IF B5(B3)<63 THEN 2650
    0x5c274ccff4e0 ---------A   02640 K(14,B3)=35
    0x5c274ccff610 ---------A T 02650 NEXT B3
    0x5c274ccff900 ---------A   02660 LINE INPUT "ENTER 'RETURN' WHEN PRINTER IS READY. ";XX$:GOSUB 3120
    0x5c274ccffcd0 ---------A   02670 FOR A9=1 TO N
    0x5c274cd003c0 ---------A   02680 LPRINT TAB(19);A$(A9);"'S TOTALS":LPRINT TAB(19);"***************"
    0x5c274cd00450 ---------A   02690 LPRINT
    0x5c274cd00940 ---------A   02700 LPRINT "ACES-----------";INT(K(1,A9))
    0x5c274cd00e30 ---------A   02710 LPRINT "TWOS-----------";INT(K(2,A9))
    0x5c274cd01320 ---------A   02720 LPRINT "THREES---------";INT(K(3,A9))
    0x5c274cd01810 ---------A   02730 LPRINT "FOURS----------";INT(K(4,A9))
    0x5c274cd01d00 ---------A   02740 LPRINT "FIVES----------";INT(K(5,A9))
    0x5c274cd021f0 ---------A   02750 LPRINT "SIXES----------";INT(K(6,A9))
    0x5c274cd026e0 ---------A   02760 LPRINT "3 OF A KIND----";INT(K(7,A9))
    0x5c274cd02bd0 ---------A   02770 LPRINT "4 OF A KIND----";INT(K(8,A9))
    0x5c274cd030c0 ---------A   02780 LPRINT "FULL HOUSE-----";INT(K(9,A9))
    0x5c274cd035b0 ---------A   02790 LPRINT "SM. STRAIGHT---";INT(K(10,A9))
    0x5c274cd03aa0 ---------A   02800 LPRINT "LG. STRAIGHT---";INT(K(11,A9))
    0x5c274cd03f90 ---------A   02810 LPRINT "YAHTZEE--------";INT(K(12,A9))
    0x5c274cd04480 ---------A   02820 LPRINT "CHANCE---------";INT(K(13,A9))
    0x5c274cd04830 ---------A   02830 LPRINT:LPRINT "TOTAL OF UPPER HALF------";B5(A9)
    0x5c274cd04ca0 ---------A   02840 LPRINT:LPRINT "BONUS--------------------";K(14,A9)
    0x5c274cd05030 ---------A   02850 LPRINT:LPRINT "TOTAL OF LOWER HALF------";B8(A9)
    0x5c274cd050b0 ---------A   02860 LPRINT
    0x5c274cd05970 ---------A   02870 B9=B5(A9)+B8(A9)+K(14,A9)
    0x5c274cd05dc0 ---------A   02880 LPRINT A$(A9);"'S GRAND TOTAL--------------------------";B9
    0x5c274cd05e30 ---------A   02890 GOSUB 3120
    0x5c274cd05f50 ---------A   02900 NEXT A9
    0x5c274cd061b0 ---------A   02910 IF I>13 THEN 1510
    0x5c274cd06250 ---------A   02920 GOTO 3060
    0x5c274cd06a70 ---------A T 02930 GOSUB 3120
    0x5c274cd06da0 ---------A   02940 LPRINT "1**ACES":GOSUB 3120:LPRINT "2**TWOS":GOSUB 940
    0x5c274cd070d0 ---------A   02950 LPRINT "3**THREES":GOSUB 3120:LPRINT "4**FOURS":GOSUB 940
    0x5c274cd07400 ---------A   02960 LPRINT "5**FIVES":GOSUB 3120:LPRINT "6**SIXES":GOSUB 940
    0x5c274cd07740 ---------A   02970 LPRINT "7**3 OF A KIND":GOSUB 3120:LPRINT "8**4 OF A KIND":GOSUB 940
    0x5c274cd07a70 ---------A   02980 LPRINT "9**FULL HOUSE":GOSUB 3120:LPRINT "10**SM. STRAIGHT":GOSUB 940
    0x5c274cd07d80 ---------A   02990 LPRINT "11**LG. STRAIGHT":GOSUB 3120:LPRINT "12**YAHTZEE":GOSUB 940
    0x5c274cd07f50 ---------A   03000 LPRINT "13**CHANCE":GOSUB 3120
    0x5c274cd08790 ---------A   03010 FOR E1=1 TO 8:LPRINT:NEXT E1:PRINT CHR$(26):PRINT "TEAR OFF SCORECARD"
    0x5c274cd08b50 ---------A   03020 PRINT "AND HIT 'RETURN'!":INPUT Q:GOTO 1240
    0x5c274cd0a0a0 ---------A T 03030 PRINT "  ";
    0x5c274cd0a410 ---------A   03040 IF POS(0) > 50 THEN PRINT
    0x5c274cd12190 ---------A   03050 GOTO 09900
    0x5c274cd0aac0 ---------A T 03060 PRINT CHR$(26):PRINT
    0x5c274cd0ae60 ---------A T 03070 PRINT:PRINT "ANOTHER GAME?===> ":INPUT YN$
    0x5c274cd0b290 ---------A   03080 IF LEFT$(YN$,1)="Y" THEN 1130
    0x5c274cd0b6c0 ---------A   03090 IF LEFT$(YN$,1)="N" THEN 3110
    0x5c274cd0b780 ---------A   03100 GOSUB 935:GOTO 3070
    0x5c274cd0b7c0 ---------A T 03110 END
    0x5c274cd121d0 ---------B G 03120 GOTO 03130
    0x5c274cd12210 ---------B T 03130 RETURN
    0x5c274cd08ce0 ---------C G 03140 PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    0x5c274cd08e80 ---------C   03150 PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    0x5c274cd09020 ---------C   03160 PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    0x5c274cd09190 ---------C   03170 PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    0x5c274cd12270 ---------C   03180 GOTO 03190
    0x5c274cd122d0 ---------C T 03190 RETURN
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
char*  A_str_arr[7];                              // Basic: A$ 
int    A0_int;                                    // Basic: A0 
int    A9_int;                                    // Basic: A9 
int    B_int;                                     // Basic: B 
char*  B_str;                                     // Basic: B$ 
int    B1_int;                                    // Basic: B1 
int    B3_int;                                    // Basic: B3 
int    B4_int;                                    // Basic: B4 
int    B5_int_arr[7];                             // Basic: B5 
int    B6_int;                                    // Basic: B6 
int    B7_int;                                    // Basic: B7 
int    B8_int_arr[7];                             // Basic: B8 
int    B9_int;                                    // Basic: B9 
int    C_int_arr[5];                              // Basic: C 
int    E_int;                                     // Basic: E 
int    E1_int;                                    // Basic: E1 
int    F_int_arr[4];                              // Basic: F 
int    F1_int;                                    // Basic: F1 
int    F2_int;                                    // Basic: F2 
int    F3_int;                                    // Basic: F3 
int    G_int;                                     // Basic: G 
int    G1_int;                                    // Basic: G1 
int    H_int;                                     // Basic: H 
int    H1_int;                                    // Basic: H1 
int    H2_int_arr[6];                             // Basic: H2 
int    H3_int;                                    // Basic: H3 
int    H4_int;                                    // Basic: H4 
int    I_int;                                     // Basic: I 
int    I0_int;                                    // Basic: I0 
int    K_int_arr[14][7];                          // Basic: K 
int    L_int;                                     // Basic: L 
int    L1_int;                                    // Basic: L1 
int    L2_int_arr[6];                             // Basic: L2 
int    L3_int;                                    // Basic: L3 
int    L4_int;                                    // Basic: L4 
int    L5_int;                                    // Basic: L5 
int    M1_int;                                    // Basic: M1 
int    M2_int;                                    // Basic: M2 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    V4_int;                                    // Basic: V4 
int    X_int;                                     // Basic: X 
char*  XX_str;                                    // Basic: XX$ 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
char*  YN_str;                                    // Basic: YN$ 
int    Z_int;                                     // Basic: Z 
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTALS WILL BE DISPLAYED IF YOU RESPOND TO ");strcat(buf,"\n");fputs(buf,fh); };
    // 03150 PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13.");strcat(buf,"\n");fputs(buf,fh); };
    // 03160 PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,");strcat(buf,"\n");fputs(buf,fh); };
    // 03170 PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25.");strcat(buf,"\n");fputs(buf,fh); };
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
