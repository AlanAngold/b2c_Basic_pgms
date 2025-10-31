/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/hi-q.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x603f2e0ca6d0 ---------A   00001  PRINT TAB(33);"H-I-Q"
    0x603f2e0ca670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x603f2e0bb2b0 ---------A   00003  PRINT:PRINT:PRINT
    0x603f2e0cbb80 ---------A   00004  DIM B(70),T(9,9)
    0x603f2e0cac40 ---------A   00005  PRINT "HERE IS THE BOARD:": PRINT
    0x603f2e0caca0 ---------A   00006  PRINT "          !    !    !"
    0x603f2e0cb680 ---------A   00007  PRINT "         13   14   15": PRINT
    0x603f2e0cb7c0 ---------A   00008  PRINT "          !    !    !"
    0x603f2e0d2920 ---------A   00009  PRINT "         22   23   24": PRINT
    0x603f2e0d2a80 ---------A   00010  PRINT "!    !    !    !    !    !    !"
    0x603f2e0d2c40 ---------A   00011  PRINT "29   30   31   32   33   34   35": PRINT
    0x603f2e0d2da0 ---------A   00012  PRINT "!    !    !    !    !    !    !"
    0x603f2e0d2f60 ---------A   00013  PRINT "38   39   40   41   42   43   44": PRINT
    0x603f2e0d30f0 ---------A   00014  PRINT "!    !    !    !    !    !    !"
    0x603f2e0d32d0 ---------A   00015  PRINT "47   48   49   50   51   52   53": PRINT
    0x603f2e0d3420 ---------A   00016  PRINT "          !    !    !"
    0x603f2e0d35f0 ---------A   00017  PRINT "         58   59   60": PRINT
    0x603f2e0d3760 ---------A   00018  PRINT "          !    !    !"
    0x603f2e0d3900 ---------A   00019  PRINT "         67   68   69": PRINT
    0x603f2e0d3a20 ---------A   00020  PRINT "TO SAVE TYPING TIME, A COMPRESSED VERSION OF THE GAME BOARD"
    0x603f2e0d3b70 ---------A   00022  PRINT "WILL BE USED DURING PLAY.  REFER TO THE ABOVE ONE FOR PEG"
    0x603f2e0d3ce0 ---------A   00024  PRINT "NUMBERS.  OK, LET'S BEGIN."
    0x603f2e0d3d60 --------DA T 00028  REM *** SET UP BOARD
    0x603f2e0d4110 --------DA   00029  FOR R=1 TO 9
    0x603f2e0d44c0 --------DA   00030  FOR C=1 TO 9
    0x603f2e0d4d30 --------DA   00031  IF (R-4)*(R-5)*(R-6)=0 THEN 40
    0x603f2e0d5590 --------DA   00032  IF (C-4)*(C-5)*(C-6)=0 THEN 40
    0x603f2e0d5970 --------DA T 00035  T(R,C)=-5
    0x603f2e0d59f0 --------DA   00036  GOTO 50
    0x603f2e0d64a0 --------DA T 00040  IF (R-1)*(C-1)*(R-9)*(C-9)=0 THEN 35
    0x603f2e0d6880 --------DA   00042  T(R,C)=5
    0x603f2e0d69b0 --------DA T 00050  NEXT C
    0x603f2e0d6b00 --------DA   00060  NEXT R
    0x603f2e0d7130 --------DA   00065  T(5,5)=0: GOSUB 500
    0x603f2e0d71c0 --------DA   00070  REM *** INPUT MOVE AND CHECK ON LEGALITY
    0x603f2e0d7570 --------DA   00075  FOR W=1 TO 33
    0x603f2e0d77c0 --------DA   00077  READ M
    0x603f2e0d8730 --------DA   00079  DATA 13,14,15,22,23,24,29,30,31,32,33,34,35,38,39,40,41
    0x603f2e0d95a0 --------DA   00081  DATA 42,43,44,47,48,49,50,51,52,53,58,59,60,67,68,69
    0x603f2e0d99a0 --------DA   00083  B(M)=-7: NEXT W
    0x603f2e0d9ca0 --------DA   00086  B(41)=-3
    0x603f2e0d9ed0 -------DCA T 00100  INPUT "MOVE WHICH PIECE";Z
    0x603f2e0da230 -------DCA   00110  IF B(Z)=-7 THEN 140
    0x603f2e0da400 -------DCA T 00120  PRINT "ILLEGAL MOVE, TRY AGAIN...": GOTO 100
    0x603f2e0da630 -------DCA T 00140  INPUT "TO WHERE";P
    0x603f2e0da970 -------DCA   00150  IF B(P)=0 THEN 120
    0x603f2e0dacb0 -------DCA   00153  IF B(P)=-7 THEN 120
    0x603f2e0daf40 -------DCA   00156  IF Z=P THEN 100
    0x603f2e0db7a0 -------DCA   00160  IF ((Z+P)/2)=INT((Z+P)/2) THEN 180
    0x603f2e0db840 -------DCA   00170  GOTO 120
    0x603f2e0dc230 -------DCA T 00180  IF (ABS(Z-P)-2)*(ABS(Z-P)-18)<>0 THEN 120
    0x603f2e0dc2b0 -------DCA   00190  GOSUB 1000
    0x603f2e0dc320 -------DCA   00200  GOSUB 500
    0x603f2e0dc390 -------DCA   00210  GOSUB 1500
    0x603f2e0dc400 -------DCA   00220  GOTO 100
    0x603f2e0dc470 ---------B G 00500  REM *** PRINT BOARD
    0x603f2e0dc820 ---------B   00510  FOR X=1 TO 9
    0x603f2e0dcbe0 ---------B   00520  FOR Y=1 TO 9
    0x603f2e0dd6b0 ---------B   00525  IF (X-1)*(X-9)*(Y-1)*(Y-9)=0 THEN 550
    0x603f2e0ddf20 ---------B   00530  IF (X-4)*(X-5)*(X-6)=0 THEN 570
    0x603f2e0de780 ---------B   00540  IF (Y-4)*(Y-5)*(Y-6)=0 THEN 570
    0x603f2e0de800 ---------B T 00550  REM
    0x603f2e0de8a0 ---------B   00560  GOTO 610
    0x603f2e0decb0 ---------B T 00570  IF T(X,Y)<>5 THEN 600
    0x603f2e0df090 ---------B   00580  PRINT TAB(Y*2);"!";
    0x603f2e0df520 ---------B   00590  GOTO 610
    0x603f2e0df8f0 ---------B T 00600  PRINT TAB(Y*2);"O";
    0x603f2e0df970 ---------B T 00610  REM
    0x603f2e0dfac0 ---------B   00615  NEXT Y
    0x603f2e0dfb50 ---------B   00620  PRINT
    0x603f2e0dfc90 ---------B   00630  NEXT X
    0x603f2e0dfd00 ---------B   00640  RETURN
    0x603f2e0dfd90 ---------C G 01000  REM *** UPDATE BOARD
    0x603f2e0e0270 ---------C   01005  C=1: FOR X=1 TO 9
    0x603f2e0e0550 ---------C   01020  FOR Y=1 TO 9
    0x603f2e0e07e0 ---------C   01030  IF C<>Z THEN 1220
    0x603f2e0e0b70 ---------C   01040  IF C+2<>P THEN 1080
    0x603f2e0e1090 ---------C   01045  IF T(X,Y+1)=0 THEN 120
    0x603f2e0e1580 ---------C   01050  T(X,Y+2)=5
    0x603f2e0e1e20 ---------C   01060  T(X,Y+1)=0: B(C+1)=-3
    0x603f2e0e1ea0 ---------C   01070  GOTO 1200
    0x603f2e0e2220 ---------C T 01080  IF C+18<>P THEN 1130
    0x603f2e0e2750 ---------C   01085  IF T(X+1,Y)=0 THEN 120
    0x603f2e0e34b0 ---------C   01090  T(X+2,Y)=5: T(X+1,Y)=0: B(C+9)=-3
    0x603f2e0e3530 ---------C   01120  GOTO 1200
    0x603f2e0e38b0 ---------C T 01130  IF C-2<>P THEN 1170
    0x603f2e0e3de0 ---------C   01135  IF T(X,Y-1)=0 THEN 120
    0x603f2e0e4b40 ---------C   01140  T(X,Y-2)=5: T(X,Y-1)=0: B(C-1)=-3
    0x603f2e0e4bc0 ---------C   01160  GOTO 1200
    0x603f2e0e4f40 ---------C T 01170  IF C-18<>P THEN 1220
    0x603f2e0e5470 ---------C   01175  IF T(X-1,Y)=0 THEN 120
    0x603f2e0e61d0 ---------C   01180  T(X-2,Y)=5: T(X-1,Y)=0: B(C-9)=-3
    0x603f2e0e67a0 ---------C T 01200  B(Z)=-3: B(P)=-7
    0x603f2e0e6bc0 ---------C   01210  T(X,Y)=0: GOTO 1240
    0x603f2e0e6ef0 ---------C T 01220  C=C+1
    0x603f2e0e7020 ---------C   01225  NEXT Y
    0x603f2e0e7170 ---------C   01230  NEXT X
    0x603f2e0e71e0 ---------C T 01240  RETURN
    0x603f2e0e7280 ---------D G 01500  REM*** CHECK IF GAME IS OVER
    0x603f2e0e7570 ---------D   01505  F=0
    0x603f2e0e7840 ---------D   01510  FOR R=2 TO 8
    0x603f2e0e7b30 ---------D   01520  FOR C=2 TO 8
    0x603f2e0e7f50 ---------D   01530  IF T(R,C)<>5 THEN 1580
    0x603f2e0e8290 ---------D   01535  F=F+1
    0x603f2e0e8860 ---------D   01540  FOR A=R-1 TO R+1
    0x603f2e0e8a80 ---------D   01545  T=0
    0x603f2e0e8f90 ---------D   01550  FOR B=C-1 TO C+1
    0x603f2e0e94b0 ---------D   01560  T=T+T(A,B)
    0x603f2e0e95e0 ---------D   01561  NEXT B
    0x603f2e0e9860 ---------D   01564  IF T<>10 THEN 1567
    0x603f2e0e9c80 ---------D   01565  IF T(A,C)<>0 THEN 1630
    0x603f2e0e9dc0 ---------D T 01567  NEXT A
    0x603f2e0ea2f0 ---------D   01568  FOR X=C-1 TO C+1
    0x603f2e0ea510 ---------D   01569  T=0
    0x603f2e0eaa20 ---------D   01570  FOR Y=R-1 TO R+1
    0x603f2e0eaf40 ---------D   01571  T=T+T(Y,X)
    0x603f2e0eb070 ---------D   01572  NEXT Y
    0x603f2e0eb2f0 ---------D   01573  IF T<>10 THEN 1575
    0x603f2e0eb710 ---------D   01574  IF T(R,X)<>0 THEN 1630
    0x603f2e0eb850 ---------D T 01575  NEXT X
    0x603f2e0eb9a0 ---------D T 01580  NEXT C
    0x603f2e0ebaf0 ---------D   01590  NEXT R
    0x603f2e0ebb90 ---------D   01600  REM *** GAME IS OVER
    0x603f2e0ebd30 ---------D   01605  PRINT "THE GAME IS OVER."
    0x603f2e0ec090 ---------D   01610  PRINT "YOU HAD";F;"PIECES REMAINING."
    0x603f2e0ec310 ---------D   01611  IF F<>1 THEN 1615
    0x603f2e0ec4b0 ---------D   01612  PRINT "BRAVO!  YOU MADE A PERFECT SCORE!"
    0x603f2e0ec650 ---------D   01613  PRINT "SAVE THIS PAPER AS A RECORD OF YOUR ACCOMPLISHMENT!"
    0x603f2e0ec910 ---------D T 01615  PRINT: INPUT "PLAY AGAIN (YES OR NO)";A$
    0x603f2e0ed3a0 ---------D   01617  IF A$="NO" THEN 2000
    0x603f2e0ed470 ---------D   01618  RESTORE: GOTO 28
    0x603f2e0ed4c0 ----------   01620  STOP
    0x603f2e0ed520 ---------D T 01630  RETURN
    0x603f2e0ed760 ---------D T 02000  PRINT: PRINT "SO LONG FOR NOW.": PRINT
    0x603f2e0ed7c0 ---------D   02010  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00028      01618T
     00035      00040T
     00040      00031T, 00032T
     00050      00036T
     00100      00120T, 00156T, 00220T
     00120      00150T, 00153T, 00170T, 00180T, 01045T, 01085T, 01135T, 01175T
     00140      00110T
     00180      00160T
     00500      00065G, 00200G
     00550      00525T
     00570      00530T, 00540T
     00600      00570T
     00610      00560T, 00590T
     01000      00190G
     01080      01040T
     01130      01080T
     01170      01130T
     01200      01070T, 01120T, 01160T
     01220      01030T, 01170T
     01240      01210T
     01500      00210G
     01567      01564T
     01575      01573T
     01580      01530T
     01615      01611T
     01630      01565T, 01574T
     02000      01617T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x603f2e0ca6d0 (00001)   0x603f2e0ca6d0 (00001)   0x603f2e0ed7c0 (02010)   0x603f2e0dc400 (00220)   
   B) 0x603f2e0dc470 (00500)   0x603f2e0dc470 (00500)   0x603f2e0dfd00 (00640)   0x603f2e0dfd00 (00640)   
   C) 0x603f2e0d9ed0 (00100)   0x603f2e0dfd90 (01000)   0x603f2e0e71e0 (01240)   0x603f2e0e71e0 (01240)   
   D) 0x603f2e0d3d60 (00028)   0x603f2e0e7280 (01500)   0x603f2e0ed520 (01630)   0x603f2e0ed7c0 (02010)   

    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/hi-q.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x603f2e0ca6d0 ---------A   00001  PRINT TAB(33);"H-I-Q"
    0x603f2e0ca670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x603f2e0cb2d0 ----------   00003  PRINT
    0x603f2e0cb910 ----------        a PRINT
    0x603f2e0bb2b0 ---------A        b PRINT
    0x603f2e0cbb80 ---------A   00004  DIM B(70),T(9,9)
    0x603f2e0cabe0 ----------   00005  PRINT "HERE IS THE BOARD:"
    0x603f2e0cac40 ---------A        a PRINT
    0x603f2e0caca0 ---------A   00006  PRINT "          !    !    !"
    0x603f2e0cb620 ----------   00007  PRINT "         13   14   15"
    0x603f2e0cb680 ---------A        a PRINT
    0x603f2e0cb7c0 ---------A   00008  PRINT "          !    !    !"
    0x603f2e0d2880 ----------   00009  PRINT "         22   23   24"
    0x603f2e0d2920 ---------A        a PRINT
    0x603f2e0d2a80 ---------A   00010  PRINT "!    !    !    !    !    !    !"
    0x603f2e0d2ba0 ----------   00011  PRINT "29   30   31   32   33   34   35"
    0x603f2e0d2c40 ---------A        a PRINT
    0x603f2e0d2da0 ---------A   00012  PRINT "!    !    !    !    !    !    !"
    0x603f2e0d2ec0 ----------   00013  PRINT "38   39   40   41   42   43   44"
    0x603f2e0d2f60 ---------A        a PRINT
    0x603f2e0d30f0 ---------A   00014  PRINT "!    !    !    !    !    !    !"
    0x603f2e0d3240 ----------   00015  PRINT "47   48   49   50   51   52   53"
    0x603f2e0d32d0 ---------A        a PRINT
    0x603f2e0d3420 ---------A   00016  PRINT "          !    !    !"
    0x603f2e0d3560 ----------   00017  PRINT "         58   59   60"
    0x603f2e0d35f0 ---------A        a PRINT
    0x603f2e0d3760 ---------A   00018  PRINT "          !    !    !"
    0x603f2e0d38a0 ----------   00019  PRINT "         67   68   69"
    0x603f2e0d3900 ---------A        a PRINT
    0x603f2e0d3a20 ---------A   00020  PRINT "TO SAVE TYPING TIME, A COMPRESSED VERSION OF THE GAME BOARD"
    0x603f2e0d3b70 ---------A   00022  PRINT "WILL BE USED DURING PLAY.  REFER TO THE ABOVE ONE FOR PEG"
    0x603f2e0d3ce0 ---------A   00024  PRINT "NUMBERS.  OK, LET'S BEGIN."
    0x603f2e0d3d60 --------DA T 00028  REM *** SET UP BOARD
    0x603f2e0d4110 --------DA   00029  FOR R=1 TO 9
    0x603f2e0d44c0 --------DA   00030  FOR C=1 TO 9
    0x603f2e0d4d30 --------DA   00031  IF (R-4)*(R-5)*(R-6)=0 THEN 40
    0x603f2e0d5590 --------DA   00032  IF (C-4)*(C-5)*(C-6)=0 THEN 40
    0x603f2e0d5970 --------DA T 00035  T(R,C)=-5
    0x603f2e0d59f0 --------DA   00036  GOTO 50
    0x603f2e0d64a0 --------DA T 00040  IF (R-1)*(C-1)*(R-9)*(C-9)=0 THEN 35
    0x603f2e0d6880 --------DA   00042  T(R,C)=5
    0x603f2e0d69b0 --------DA T 00050  NEXT C
    0x603f2e0d6b00 --------DA   00060  NEXT R
    0x603f2e0d70a0 ----------   00065  T(5,5)=0
    0x603f2e0d7130 --------DA        a GOSUB 500
    0x603f2e0d71c0 --------DA   00070  REM *** INPUT MOVE AND CHECK ON LEGALITY
    0x603f2e0d7570 --------DA   00075  FOR W=1 TO 33
    0x603f2e0d77c0 --------DA   00077  READ M
    0x603f2e0d8730 --------DA   00079  DATA 13,14,15,22,23,24,29,30,31,32,33,34,35,38,39,40,41
    0x603f2e0d95a0 --------DA   00081  DATA 42,43,44,47,48,49,50,51,52,53,58,59,60,67,68,69
    0x603f2e0d9870 ----------   00083  B(M)=-7
    0x603f2e0d99a0 --------DA        a NEXT W
    0x603f2e0d9ca0 --------DA   00086  B(41)=-3
    0x603f2e0d9ed0 -------DCA T 00100  INPUT "MOVE WHICH PIECE";Z
    0x603f2e0da230 -------DCA   00110  IF B(Z)=-7 THEN 140
    0x603f2e0da380 ---------- T 00120  PRINT "ILLEGAL MOVE, TRY AGAIN..."
    0x603f2e0da400 -------DCA T      a GOTO 100
    0x603f2e0da630 -------DCA T 00140  INPUT "TO WHERE";P
    0x603f2e0da970 -------DCA   00150  IF B(P)=0 THEN 120
    0x603f2e0dacb0 -------DCA   00153  IF B(P)=-7 THEN 120
    0x603f2e0daf40 -------DCA   00156  IF Z=P THEN 100
    0x603f2e0db7a0 -------DCA   00160  IF ((Z+P)/2)=INT((Z+P)/2) THEN 180
    0x603f2e0db840 -------DCA   00170  GOTO 120
    0x603f2e0dc230 -------DCA T 00180  IF (ABS(Z-P)-2)*(ABS(Z-P)-18)<>0 THEN 120
    0x603f2e0dc2b0 -------DCA   00190  GOSUB 1000
    0x603f2e0dc320 -------DCA   00200  GOSUB 500
    0x603f2e0dc390 -------DCA   00210  GOSUB 1500
    0x603f2e0dc400 -------DCA   00220  GOTO 100
    0x603f2e0dc470 ---------B G 00500  REM *** PRINT BOARD
    0x603f2e0dc820 ---------B   00510  FOR X=1 TO 9
    0x603f2e0dcbe0 ---------B   00520  FOR Y=1 TO 9
    0x603f2e0dd6b0 ---------B   00525  IF (X-1)*(X-9)*(Y-1)*(Y-9)=0 THEN 550
    0x603f2e0ddf20 ---------B   00530  IF (X-4)*(X-5)*(X-6)=0 THEN 570
    0x603f2e0de780 ---------B   00540  IF (Y-4)*(Y-5)*(Y-6)=0 THEN 570
    0x603f2e0de800 ---------B T 00550  REM
    0x603f2e0de8a0 ---------B   00560  GOTO 610
    0x603f2e0decb0 ---------B T 00570  IF T(X,Y)<>5 THEN 600
    0x603f2e0df090 ---------B   00580  PRINT TAB(Y*2);"!";
    0x603f2e0df520 ---------B   00590  GOTO 610
    0x603f2e0df8f0 ---------B T 00600  PRINT TAB(Y*2);"O";
    0x603f2e0df970 ---------B T 00610  REM
    0x603f2e0dfac0 ---------B   00615  NEXT Y
    0x603f2e0dfb50 ---------B   00620  PRINT
    0x603f2e0dfc90 ---------B   00630  NEXT X
    0x603f2e0dfd00 ---------B   00640  RETURN
    0x603f2e0dfd90 ---------C G 01000  REM *** UPDATE BOARD
    0x603f2e0dffa0 ----------   01005  C=1
    0x603f2e0e0270 ---------C        a FOR X=1 TO 9
    0x603f2e0e0550 ---------C   01020  FOR Y=1 TO 9
    0x603f2e0e07e0 ---------C   01030  IF C<>Z THEN 1220
    0x603f2e0e0b70 ---------C   01040  IF C+2<>P THEN 1080
    0x603f2e0e1090 ---------C   01045  IF T(X,Y+1)=0 THEN 120
    0x603f2e0e1580 ---------C   01050  T(X,Y+2)=5
    0x603f2e0e1a30 ----------   01060  T(X,Y+1)=0
    0x603f2e0e1e20 ---------C        a B(C+1)=-3
    0x603f2e0e1ea0 ---------C   01070  GOTO 1200
    0x603f2e0e2220 ---------C T 01080  IF C+18<>P THEN 1130
    0x603f2e0e2750 ---------C   01085  IF T(X+1,Y)=0 THEN 120
    0x603f2e0e2c10 ----------   01090  T(X+2,Y)=5
    0x603f2e0e30c0 ----------        a T(X+1,Y)=0
    0x603f2e0e34b0 ---------C        b B(C+9)=-3
    0x603f2e0e3530 ---------C   01120  GOTO 1200
    0x603f2e0e38b0 ---------C T 01130  IF C-2<>P THEN 1170
    0x603f2e0e3de0 ---------C   01135  IF T(X,Y-1)=0 THEN 120
    0x603f2e0e42a0 ----------   01140  T(X,Y-2)=5
    0x603f2e0e4750 ----------        a T(X,Y-1)=0
    0x603f2e0e4b40 ---------C        b B(C-1)=-3
    0x603f2e0e4bc0 ---------C   01160  GOTO 1200
    0x603f2e0e4f40 ---------C T 01170  IF C-18<>P THEN 1220
    0x603f2e0e5470 ---------C   01175  IF T(X-1,Y)=0 THEN 120
    0x603f2e0e5930 ----------   01180  T(X-2,Y)=5
    0x603f2e0e5de0 ----------        a T(X-1,Y)=0
    0x603f2e0e61d0 ---------C        b B(C-9)=-3
    0x603f2e0e64a0 ---------- T 01200  B(Z)=-3
    0x603f2e0e67a0 ---------C T      a B(P)=-7
    0x603f2e0e6b50 ----------   01210  T(X,Y)=0
    0x603f2e0e6bc0 ---------C        a GOTO 1240
    0x603f2e0e6ef0 ---------C T 01220  C=C+1
    0x603f2e0e7020 ---------C   01225  NEXT Y
    0x603f2e0e7170 ---------C   01230  NEXT X
    0x603f2e0e71e0 ---------C T 01240  RETURN
    0x603f2e0e7280 ---------D G 01500  REM*** CHECK IF GAME IS OVER
    0x603f2e0e7570 ---------D   01505  F=0
    0x603f2e0e7840 ---------D   01510  FOR R=2 TO 8
    0x603f2e0e7b30 ---------D   01520  FOR C=2 TO 8
    0x603f2e0e7f50 ---------D   01530  IF T(R,C)<>5 THEN 1580
    0x603f2e0e8290 ---------D   01535  F=F+1
    0x603f2e0e8860 ---------D   01540  FOR A=R-1 TO R+1
    0x603f2e0e8a80 ---------D   01545  T=0
    0x603f2e0e8f90 ---------D   01550  FOR B=C-1 TO C+1
    0x603f2e0e94b0 ---------D   01560  T=T+T(A,B)
    0x603f2e0e95e0 ---------D   01561  NEXT B
    0x603f2e0e9860 ---------D   01564  IF T<>10 THEN 1567
    0x603f2e0e9c80 ---------D   01565  IF T(A,C)<>0 THEN 1630
    0x603f2e0e9dc0 ---------D T 01567  NEXT A
    0x603f2e0ea2f0 ---------D   01568  FOR X=C-1 TO C+1
    0x603f2e0ea510 ---------D   01569  T=0
    0x603f2e0eaa20 ---------D   01570  FOR Y=R-1 TO R+1
    0x603f2e0eaf40 ---------D   01571  T=T+T(Y,X)
    0x603f2e0eb070 ---------D   01572  NEXT Y
    0x603f2e0eb2f0 ---------D   01573  IF T<>10 THEN 1575
    0x603f2e0eb710 ---------D   01574  IF T(R,X)<>0 THEN 1630
    0x603f2e0eb850 ---------D T 01575  NEXT X
    0x603f2e0eb9a0 ---------D T 01580  NEXT C
    0x603f2e0ebaf0 ---------D   01590  NEXT R
    0x603f2e0ebb90 ---------D   01600  REM *** GAME IS OVER
    0x603f2e0ebd30 ---------D   01605  PRINT "THE GAME IS OVER."
    0x603f2e0ec090 ---------D   01610  PRINT "YOU HAD";F;"PIECES REMAINING."
    0x603f2e0ec310 ---------D   01611  IF F<>1 THEN 1615
    0x603f2e0ec4b0 ---------D   01612  PRINT "BRAVO!  YOU MADE A PERFECT SCORE!"
    0x603f2e0ec650 ---------D   01613  PRINT "SAVE THIS PAPER AS A RECORD OF YOUR ACCOMPLISHMENT!"
    0x603f2e0ec6b0 ---------- T 01615  PRINT
    0x603f2e0ec910 ---------D T      a INPUT "PLAY AGAIN (YES OR NO)";A$
    0x603f2e0ed3a0 ---------D   01617  IF A$="NO" THEN 2000
    0x603f2e0ed400 ----------   01618  RESTORE
    0x603f2e0ed470 ---------D        a GOTO 28
    0x603f2e0ed4c0 ----------   01620  STOP
    0x603f2e0ed520 ---------D T 01630  RETURN
    0x603f2e0ed5a0 ---------- T 02000  PRINT
    0x603f2e0ed6e0 ---------- T      a PRINT "SO LONG FOR NOW."
    0x603f2e0ed760 ---------D T      b PRINT
    0x603f2e0ed7c0 ---------D   02010  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/hi-q.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x603f2e0ca6d0 ---------A G 01000  PRINT TAB(33);"H-I-Q"
    0x603f2e0ca670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x603f2e0cb2d0 ----------   01020  PRINT
    0x603f2e0cb910 ----------   01030  PRINT
    0x603f2e0bb2b0 ---------A   01040  PRINT
    0x603f2e0cbb80 ---------A   01050  DIM B(70),T(9,9)
    0x603f2e0cabe0 ----------   01060  PRINT "HERE IS THE BOARD:"
    0x603f2e0cac40 ---------A   01070  PRINT
    0x603f2e0caca0 ---------A T 01080  PRINT "          !    !    !"
    0x603f2e0cb620 ----------   01090  PRINT "         13   14   15"
    0x603f2e0cb680 ---------A   01100  PRINT
    0x603f2e0cb7c0 ---------A   01110  PRINT "          !    !    !"
    0x603f2e0d2880 ----------   01120  PRINT "         22   23   24"
    0x603f2e0d2920 ---------A T 01130  PRINT
    0x603f2e0d2a80 ---------A   01140  PRINT "!    !    !    !    !    !    !"
    0x603f2e0d2ba0 ----------   01150  PRINT "29   30   31   32   33   34   35"
    0x603f2e0d2c40 ---------A   01160  PRINT
    0x603f2e0d2da0 ---------A T 01170  PRINT "!    !    !    !    !    !    !"
    0x603f2e0d2ec0 ----------   01180  PRINT "38   39   40   41   42   43   44"
    0x603f2e0d2f60 ---------A   01190  PRINT
    0x603f2e0d30f0 ---------A T 01200  PRINT "!    !    !    !    !    !    !"
    0x603f2e0d3240 ----------   01210  PRINT "47   48   49   50   51   52   53"
    0x603f2e0d32d0 ---------A T 01220  PRINT
    0x603f2e0d3420 ---------A   01230  PRINT "          !    !    !"
    0x603f2e0d3560 ---------- T 01240  PRINT "         58   59   60"
    0x603f2e0d35f0 ---------A   01250  PRINT
    0x603f2e0d3760 ---------A   01260  PRINT "          !    !    !"
    0x603f2e0d38a0 ----------   01270  PRINT "         67   68   69"
    0x603f2e0d3900 ---------A   01280  PRINT
    0x603f2e0d3a20 ---------A   01290  PRINT "TO SAVE TYPING TIME, A COMPRESSED VERSION OF THE GAME BOARD"
    0x603f2e0d3b70 ---------A   01300  PRINT "WILL BE USED DURING PLAY.  REFER TO THE ABOVE ONE FOR PEG"
    0x603f2e0d3ce0 ---------A   01310  PRINT "NUMBERS.  OK, LET'S BEGIN."
    0x603f2e0d3d60 --------DA   01320  REM *** SET UP BOARD
    0x603f2e0d4110 --------DA   01330  FOR R=1 TO 9
    0x603f2e0d44c0 --------DA   01340  FOR C=1 TO 9
    0x603f2e0d4d30 --------DA   01350  IF (R-4)*(R-5)*(R-6)=0 THEN 1390
    0x603f2e0d5590 --------DA   01360  IF (C-4)*(C-5)*(C-6)=0 THEN 1390
    0x603f2e0d5970 --------DA   01370  T(R,C)=-5
    0x603f2e0d59f0 --------DA   01380  GOTO 1410
    0x603f2e0d64a0 --------DA   01390  IF (R-1)*(C-1)*(R-9)*(C-9)=0 THEN 1370
    0x603f2e0d6880 --------DA   01400  T(R,C)=5
    0x603f2e0d69b0 --------DA   01410  NEXT C
    0x603f2e0d6b00 --------DA   01420  NEXT R
    0x603f2e0d70a0 ----------   01430  T(5,5)=0
    0x603f2e0d7130 --------DA   01440  GOSUB 1680
    0x603f2e0d71c0 --------DA   01450  REM *** INPUT MOVE AND CHECK ON LEGALITY
    0x603f2e0d7570 --------DA   01460  FOR W=1 TO 33
    0x603f2e0d77c0 --------DA   01470  READ M
    0x603f2e0d8730 --------DA   01480  DATA 13,14,15,22,23,24,29,30,31,32,33,34,35,38,39,40,41
    0x603f2e0d95a0 --------DA   01490  DATA 42,43,44,47,48,49,50,51,52,53,58,59,60,67,68,69
    0x603f2e0d9870 ---------- G 01500  B(M)=-7
    0x603f2e0d99a0 --------DA   01510  NEXT W
    0x603f2e0d9ca0 --------DA   01520  B(41)=-3
    0x603f2e0d9ed0 -------DCA   01530  INPUT "MOVE WHICH PIECE";Z
    0x603f2e0da230 -------DCA   01540  IF B(Z)=-7 THEN 1570
    0x603f2e0da380 ----------   01550  PRINT "ILLEGAL MOVE, TRY AGAIN..."
    0x603f2e0da400 -------DCA   01560  GOTO 1530
    0x603f2e0da630 -------DCA   01570  INPUT "TO WHERE";P
    0x603f2e0da970 -------DCA T 01580  IF B(P)=0 THEN 1560
    0x603f2e0dacb0 -------DCA   01590  IF B(P)=-7 THEN 1560
    0x603f2e0daf40 -------DCA   01600  IF Z=P THEN 1530
    0x603f2e0db7a0 -------DCA   01610  IF ((Z+P)/2)=INT((Z+P)/2) THEN 1630
    0x603f2e0db840 -------DCA   01620  GOTO 1560
    0x603f2e0dc230 -------DCA T 01630  IF (ABS(Z-P)-2)*(ABS(Z-P)-18)<>0 THEN 1560
    0x603f2e0dc2b0 -------DCA   01640  GOSUB 1850
    0x603f2e0dc320 -------DCA   01650  GOSUB 1680
    0x603f2e0dc390 -------DCA   01660  GOSUB 2210
    0x603f2e0dc400 -------DCA   01670  GOTO 1530
    0x603f2e0dc470 ---------B   01680  REM *** PRINT BOARD
    0x603f2e0dc820 ---------B   01690  FOR X=1 TO 9
    0x603f2e0dcbe0 ---------B   01700  FOR Y=1 TO 9
    0x603f2e0dd6b0 ---------B   01710  IF (X-1)*(X-9)*(Y-1)*(Y-9)=0 THEN 1740
    0x603f2e0ddf20 ---------B   01720  IF (X-4)*(X-5)*(X-6)=0 THEN 1760
    0x603f2e0de780 ---------B   01730  IF (Y-4)*(Y-5)*(Y-6)=0 THEN 1760
    0x603f2e0de800 ---------B   01740  REM
    0x603f2e0de8a0 ---------B   01750  GOTO 1800
    0x603f2e0decb0 ---------B   01760  IF T(X,Y)<>5 THEN 1790
    0x603f2e0df090 ---------B   01770  PRINT TAB(Y*2);"!";
    0x603f2e0df520 ---------B   01780  GOTO 1800
    0x603f2e0df8f0 ---------B   01790  PRINT TAB(Y*2);"O";
    0x603f2e0df970 ---------B   01800  REM
    0x603f2e0dfac0 ---------B   01810  NEXT Y
    0x603f2e0dfb50 ---------B   01820  PRINT
    0x603f2e0dfc90 ---------B   01830  NEXT X
    0x603f2e0dfd00 ---------B   01840  RETURN
    0x603f2e0dfd90 ---------C   01850  REM *** UPDATE BOARD
    0x603f2e0dffa0 ----------   01860  C=1
    0x603f2e0e0270 ---------C   01870  FOR X=1 TO 9
    0x603f2e0e0550 ---------C   01880  FOR Y=1 TO 9
    0x603f2e0e07e0 ---------C   01890  IF C<>Z THEN 2170
    0x603f2e0e0b70 ---------C   01900  IF C+2<>P THEN 1960
    0x603f2e0e1090 ---------C   01910  IF T(X,Y+1)=0 THEN 1560
    0x603f2e0e1580 ---------C   01920  T(X,Y+2)=5
    0x603f2e0e1a30 ----------   01930  T(X,Y+1)=0
    0x603f2e0e1e20 ---------C   01940  B(C+1)=-3
    0x603f2e0e1ea0 ---------C   01950  GOTO 2140
    0x603f2e0e2220 ---------C   01960  IF C+18<>P THEN 2020
    0x603f2e0e2750 ---------C   01970  IF T(X+1,Y)=0 THEN 1560
    0x603f2e0e2c10 ----------   01980  T(X+2,Y)=5
    0x603f2e0e30c0 ----------   01990  T(X+1,Y)=0
    0x603f2e0e34b0 ---------C T 02000  B(C+9)=-3
    0x603f2e0e3530 ---------C   02010  GOTO 2140
    0x603f2e0e38b0 ---------C   02020  IF C-2<>P THEN 2080
    0x603f2e0e3de0 ---------C   02030  IF T(X,Y-1)=0 THEN 1560
    0x603f2e0e42a0 ----------   02040  T(X,Y-2)=5
    0x603f2e0e4750 ----------   02050  T(X,Y-1)=0
    0x603f2e0e4b40 ---------C   02060  B(C-1)=-3
    0x603f2e0e4bc0 ---------C   02070  GOTO 2140
    0x603f2e0e4f40 ---------C   02080  IF C-18<>P THEN 2170
    0x603f2e0e5470 ---------C   02090  IF T(X-1,Y)=0 THEN 1560
    0x603f2e0e5930 ----------   02100  T(X-2,Y)=5
    0x603f2e0e5de0 ----------   02110  T(X-1,Y)=0
    0x603f2e0e61d0 ---------C   02120  B(C-9)=-3
    0x603f2e0e64a0 ----------   02130  B(Z)=-3
    0x603f2e0e67a0 ---------C   02140  B(P)=-7
    0x603f2e0e6b50 ----------   02150  T(X,Y)=0
    0x603f2e0e6bc0 ---------C   02160  GOTO 2200
    0x603f2e0e6ef0 ---------C   02170  C=C+1
    0x603f2e0e7020 ---------C   02180  NEXT Y
    0x603f2e0e7170 ---------C   02190  NEXT X
    0x603f2e0e71e0 ---------C   02200  RETURN
    0x603f2e0e7280 ---------D   02210  REM*** CHECK IF GAME IS OVER
    0x603f2e0e7570 ---------D   02220  F=0
    0x603f2e0e7840 ---------D   02230  FOR R=2 TO 8
    0x603f2e0e7b30 ---------D   02240  FOR C=2 TO 8
    0x603f2e0e7f50 ---------D   02250  IF T(R,C)<>5 THEN 2430
    0x603f2e0e8290 ---------D   02260  F=F+1
    0x603f2e0e8860 ---------D   02270  FOR A=R-1 TO R+1
    0x603f2e0e8a80 ---------D   02280  T=0
    0x603f2e0e8f90 ---------D   02290  FOR B=C-1 TO C+1
    0x603f2e0e94b0 ---------D   02300  T=T+T(A,B)
    0x603f2e0e95e0 ---------D   02310  NEXT B
    0x603f2e0e9860 ---------D   02320  IF T<>10 THEN 2340
    0x603f2e0e9c80 ---------D   02330  IF T(A,C)<>0 THEN 2570
    0x603f2e0e9dc0 ---------D   02340  NEXT A
    0x603f2e0ea2f0 ---------D   02350  FOR X=C-1 TO C+1
    0x603f2e0ea510 ---------D   02360  T=0
    0x603f2e0eaa20 ---------D   02370  FOR Y=R-1 TO R+1
    0x603f2e0eaf40 ---------D   02380  T=T+T(Y,X)
    0x603f2e0eb070 ---------D   02390  NEXT Y
    0x603f2e0eb2f0 ---------D   02400  IF T<>10 THEN 2420
    0x603f2e0eb710 ---------D   02410  IF T(R,X)<>0 THEN 2570
    0x603f2e0eb850 ---------D   02420  NEXT X
    0x603f2e0eb9a0 ---------D   02430  NEXT C
    0x603f2e0ebaf0 ---------D   02440  NEXT R
    0x603f2e0ebb90 ---------D   02450  REM *** GAME IS OVER
    0x603f2e0ebd30 ---------D   02460  PRINT "THE GAME IS OVER."
    0x603f2e0ec090 ---------D   02470  PRINT "YOU HAD";F;"PIECES REMAINING."
    0x603f2e0ec310 ---------D   02480  IF F<>1 THEN 2520
    0x603f2e0ec4b0 ---------D   02490  PRINT "BRAVO!  YOU MADE A PERFECT SCORE!"
    0x603f2e0ec650 ---------D   02500  PRINT "SAVE THIS PAPER AS A RECORD OF YOUR ACCOMPLISHMENT!"
    0x603f2e0ec6b0 ----------   02510  PRINT
    0x603f2e0ec910 ---------D   02520  INPUT "PLAY AGAIN (YES OR NO)";A$
    0x603f2e0ed3a0 ---------D   02530  IF A$="NO" THEN 2600
    0x603f2e0ed400 ----------   02540  RESTORE
    0x603f2e0ed470 ---------D   02550  GOTO 1320
    0x603f2e0ed4c0 ----------   02560  STOP
    0x603f2e0ed520 ---------D   02570  RETURN
    0x603f2e0ed5a0 ----------   02580  PRINT
    0x603f2e0ed6e0 ----------   02590  PRINT "SO LONG FOR NOW."
    0x603f2e0ed760 ---------D   02600  PRINT
    0x603f2e0ed7c0 ---------D   02610  END
 */

