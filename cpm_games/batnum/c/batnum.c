/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/batnum.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x565819bec6d0 ---------A   00005  PRINT CHR$(26)
    0x565819bedfc0 ---------A   00010  PRINT TAB(33);"BATNUM":PRINT
    0x565819bee5e0 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x565819beeb00 ---------A   00030  PRINT:PRINT:PRINT
    0x565819bed080 ---------A   00110  PRINT "   This program is a 'Battle of Numbers' game, where the"
    0x565819bed480 ---------A   00120  PRINT "computer is your opponent."
    0x565819bed4e0 ---------A   00130  PRINT 
    0x565819becc30 ---------A   00140  PRINT "   The game starts with an assumed pile of objects. You"
    0x565819bef210 ---------A   00150  PRINT "and your opponent alternately remove objects from the pile."
    0x565819bed730 ---------A   00160  PRINT "Winning is defined in advance as taking the last object or"
    0x565819bf48f0 ---------A   00170  PRINT "not. You can also specify some other beginning conditions."
    0x565819bf4ac0 ---------A   00180  PRINT "Don't use zero, however, in playing the game.":PRINT
    0x565819bf4c30 ---------A   00190  PRINT "Enter a negative number for new pile size to stop playing."
    0x565819bf4cf0 ---------A   00200  PRINT:PRINT
    0x565819bf4d50 ---------A   00210  GOTO 330
    0x565819bf5080 ---------A T 00220  FOR I=1 TO 10
    0x565819bf50e0 ---------A   00230  PRINT
    0x565819bf5200 ---------A   00240  NEXT I
    0x565819bf53b0 ---------A T 00330  INPUT "ENTER PILE SIZE";N
    0x565819bf55d0 ---------A   00350  IF N>=1 THEN 370
    0x565819bf5770 ---------A   00360  PRINT:PRINT:PRINT:RUN "MENU"
    0x565819bf5ac0 ---------A T 00370  IF N<>INT(N) THEN 220
    0x565819bf5d50 ---------A   00380  IF N<1 THEN 220
    0x565819bf5fb0 ---------A T 00390  INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x565819bf6210 ---------A   00410  IF M=1 THEN 430
    0x565819bf6450 ---------A   00420  IF M<>2 THEN 390
    0x565819bf6830 ---------A T 00430  INPUT "ENTER MIN AND MAX ";A,B
    0x565819bf6ab0 ---------A   00450  IF A>B THEN 430
    0x565819bf6d20 ---------A   00460  IF A<1 THEN 430
    0x565819bf7090 ---------A   00470  IF A<>INT(A) THEN 430
    0x565819bf7420 ---------A   00480  IF B<>INT(B) THEN 430
    0x565819bf7680 ---------A T 00490  INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x565819bf7760 ---------A   00500  PRINT:PRINT
    0x565819bf7bd0 ---------A   00510  IF S=1 THEN 530
    0x565819bf7e30 ---------A   00520  IF S<>2 THEN 490
    0x565819bf8250 ---------A T 00530  C=A+B
    0x565819bf84a0 ---------A   00540  IF S=2 THEN 570
    0x565819bf8520 ---------A T 00550  GOSUB 600
    0x565819bf8830 ---------A   00560  IF W=1 THEN 220
    0x565819bf88b0 ---------A T 00570  GOSUB 810
    0x565819bf8b00 ---------A   00580  IF W=1 THEN 220
    0x565819bf8b80 ---------A   00590  GOTO 550
    0x565819bf8e70 ---------B G 00600  Q=N
    0x565819bf90c0 ---------B   00610  IF M=1 THEN 630
    0x565819bf9400 ---------B   00620  Q=Q-1
    0x565819bf9650 ---------B T 00630  IF M=1 THEN 680
    0x565819bf98d0 ---------B   00640  IF N>A THEN 720
    0x565819bf9b10 ---------B   00650  W=1
    0x565819bf9ec0 ---------B   00660  PRINT:PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x565819bf9f20 ---------B   00670  RETURN
    0x565819bfa1a0 ---------B T 00680  IF N>B THEN 720
    0x565819bfa3e0 ---------B   00690  W=1
    0x565819bfa790 ---------B   00700  PRINT:PRINT "COMPUTER TAKES";N;"AND WINS."
    0x565819bfa7f0 ---------B   00710  RETURN
    0x565819bfaf30 ---------B T 00720  P=Q-C*INT(Q/C)
    0x565819bfb1a0 ---------B   00730  IF P>=A THEN 750
    0x565819bfb3e0 ---------B   00740  P=A
    0x565819bfb650 ---------B T 00750  IF P<=B THEN 770
    0x565819bfb890 ---------B   00760  P=B
    0x565819bfbc00 ---------B T 00770  N=N-P
    0x565819bfc0b0 ---------B   00780  PRINT:PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x565819bfc2d0 ---------B   00790  W=0
    0x565819bfc320 ---------B   00800  RETURN
    0x565819bfc510 ---------C G 00810  PRINT:PRINT "YOUR MOVE ";
    0x565819bfc670 ---------C T 00820  INPUT P
    0x565819bfcd20 ---------C   00830  IF P<>0 THEN 870
    0x565819bfcf60 ---------C   00840  PRINT:PRINT:PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x565819bfd180 ---------C   00850  W=1
    0x565819bfd1d0 ---------C   00860  RETURN
    0x565819bfd540 ---------C T 00870  IF P<>INT(P) THEN 920
    0x565819bfd7c0 ---------C   00880  IF P>=A THEN 910
    0x565819bfda40 ---------C   00890  IF P=N THEN 960
    0x565819bfdac0 ---------C   00900  GOTO 920
    0x565819bfdd40 ---------C T 00910  IF P<=B THEN 940
    0x565819bfded0 ---------C T 00920  PRINT "ILLEGAL MOVE, REENTER IT ";
    0x565819bfdf50 ---------C   00930  GOTO 820
    0x565819bfe2a0 ---------C T 00940  N=N-P
    0x565819bfe4f0 ---------C   00950  IF N<>0 THEN 1030
    0x565819bfe760 ---------C T 00960  IF M=1 THEN 1000
    0x565819bfe920 ---------C   00970  PRINT:PRINT "TOUGH LUCK, YOU LOSE."
    0x565819bfeb40 ---------C   00980  W=1
    0x565819bfeb90 ---------C   00990  RETURN
    0x565819bfede0 ---------C T 01000  PRINT:PRINT:PRINT "CONGRATULATIONS, YOU WIN."
    0x565819bff000 ---------C   01010  W=1
    0x565819bff050 ---------C   01020  RETURN
    0x565819bff2b0 ---------C T 01030  IF N>=0 THEN 1060
    0x565819bff610 ---------C   01040  N=N+P
    0x565819bff680 ---------C   01050  GOTO 920
    0x565819bff890 ---------C T 01060  W=0
    0x565819bff8e0 ---------C   01070  RETURN
    0x565819bff960 ----------   01080  RUN "MENU"
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00220      00370T, 00380T, 00560T, 00580T
     00330      00210T
     00370      00350T
     00390      00420T
     00430      00410T, 00450T, 00460T, 00470T, 00480T
     00490      00520T
     00530      00510T
     00550      00590T
     00570      00540T
     00600      00550G
     00630      00610T
     00680      00630T
     00720      00640T, 00680T
     00750      00730T
     00770      00750T
     00810      00570G
     00820      00930T
     00870      00830T
     00910      00880T
     00920      00870T, 00900T, 01050T
     00940      00910T
     00960      00890T
     01000      00960T
     01030      00950T
     01060      01030T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x565819bec6d0 (00005)   0x565819bec6d0 (00005)   0x565819bff960 (01080)   0x565819bf8b80 (00590)   
   B) 0x565819bf8e70 (00600)   0x565819bf8e70 (00600)   0x565819bf9f20 (00670)   0x565819bfc320 (00800)   
   C) 0x565819bfc510 (00810)   0x565819bfc510 (00810)   0x565819bfd1d0 (00860)   0x565819bff8e0 (01070)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/batnum.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x565819bec6d0 ---------A   00005  PRINT CHR$(26)
    0x565819bec670 ----------   00010  PRINT TAB(33);"BATNUM"
    0x565819bedfc0 ---------A        a PRINT
    0x565819bee5e0 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x565819bec9e0 ----------   00030  PRINT
    0x565819beeaa0 ----------        a PRINT
    0x565819beeb00 ---------A        b PRINT
    0x565819bed080 ---------A   00110  PRINT "   This program is a 'Battle of Numbers' game, where the"
    0x565819bed480 ---------A   00120  PRINT "computer is your opponent."
    0x565819bed4e0 ---------A   00130  PRINT 
    0x565819becc30 ---------A   00140  PRINT "   The game starts with an assumed pile of objects. You"
    0x565819bef210 ---------A   00150  PRINT "and your opponent alternately remove objects from the pile."
    0x565819bed730 ---------A   00160  PRINT "Winning is defined in advance as taking the last object or"
    0x565819bf48f0 ---------A   00170  PRINT "not. You can also specify some other beginning conditions."
    0x565819bf4a10 ----------   00180  PRINT "Don't use zero, however, in playing the game."
    0x565819bf4ac0 ---------A        a PRINT
    0x565819bf4c30 ---------A   00190  PRINT "Enter a negative number for new pile size to stop playing."
    0x565819bf4c90 ----------   00200  PRINT
    0x565819bf4cf0 ---------A        a PRINT
    0x565819bf4d50 ---------A   00210  GOTO 330
    0x565819bf5080 ---------A T 00220  FOR I=1 TO 10
    0x565819bf50e0 ---------A   00230  PRINT
    0x565819bf5200 ---------A   00240  NEXT I
    0x565819bf53b0 ---------A T 00330  INPUT "ENTER PILE SIZE";N
    0x565819bf55d0 ---------A   00350  IF N>=1 THEN 370
    0x565819bf5630 ----------   00360  PRINT
    0x565819bf5690 ----------        a PRINT
    0x565819bf56f0 ----------        b PRINT
    0x565819bf5770 ---------A        c RUN "MENU"
    0x565819bf5ac0 ---------A T 00370  IF N<>INT(N) THEN 220
    0x565819bf5d50 ---------A   00380  IF N<1 THEN 220
    0x565819bf5fb0 ---------A T 00390  INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x565819bf6210 ---------A   00410  IF M=1 THEN 430
    0x565819bf6450 ---------A   00420  IF M<>2 THEN 390
    0x565819bf6830 ---------A T 00430  INPUT "ENTER MIN AND MAX ";A,B
    0x565819bf6ab0 ---------A   00450  IF A>B THEN 430
    0x565819bf6d20 ---------A   00460  IF A<1 THEN 430
    0x565819bf7090 ---------A   00470  IF A<>INT(A) THEN 430
    0x565819bf7420 ---------A   00480  IF B<>INT(B) THEN 430
    0x565819bf7680 ---------A T 00490  INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x565819bf76e0 ----------   00500  PRINT
    0x565819bf7760 ---------A        a PRINT
    0x565819bf7bd0 ---------A   00510  IF S=1 THEN 530
    0x565819bf7e30 ---------A   00520  IF S<>2 THEN 490
    0x565819bf8250 ---------A T 00530  C=A+B
    0x565819bf84a0 ---------A   00540  IF S=2 THEN 570
    0x565819bf8520 ---------A T 00550  GOSUB 600
    0x565819bf8830 ---------A   00560  IF W=1 THEN 220
    0x565819bf88b0 ---------A T 00570  GOSUB 810
    0x565819bf8b00 ---------A   00580  IF W=1 THEN 220
    0x565819bf8b80 ---------A   00590  GOTO 550
    0x565819bf8e70 ---------B G 00600  Q=N
    0x565819bf90c0 ---------B   00610  IF M=1 THEN 630
    0x565819bf9400 ---------B   00620  Q=Q-1
    0x565819bf9650 ---------B T 00630  IF M=1 THEN 680
    0x565819bf98d0 ---------B   00640  IF N>A THEN 720
    0x565819bf9b10 ---------B   00650  W=1
    0x565819bf9b60 ----------   00660  PRINT
    0x565819bf9ec0 ---------B        a PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x565819bf9f20 ---------B   00670  RETURN
    0x565819bfa1a0 ---------B T 00680  IF N>B THEN 720
    0x565819bfa3e0 ---------B   00690  W=1
    0x565819bfa430 ----------   00700  PRINT
    0x565819bfa790 ---------B        a PRINT "COMPUTER TAKES";N;"AND WINS."
    0x565819bfa7f0 ---------B   00710  RETURN
    0x565819bfaf30 ---------B T 00720  P=Q-C*INT(Q/C)
    0x565819bfb1a0 ---------B   00730  IF P>=A THEN 750
    0x565819bfb3e0 ---------B   00740  P=A
    0x565819bfb650 ---------B T 00750  IF P<=B THEN 770
    0x565819bfb890 ---------B   00760  P=B
    0x565819bfbc00 ---------B T 00770  N=N-P
    0x565819bfbc50 ----------   00780  PRINT
    0x565819bfc0b0 ---------B        a PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x565819bfc2d0 ---------B   00790  W=0
    0x565819bfc320 ---------B   00800  RETURN
    0x565819bfc390 ---------- G 00810  PRINT
    0x565819bfc510 ---------C G      a PRINT "YOUR MOVE ";
    0x565819bfc670 ---------C T 00820  INPUT P
    0x565819bfcd20 ---------C   00830  IF P<>0 THEN 870
    0x565819bfcd80 ----------   00840  PRINT
    0x565819bfcde0 ----------        a PRINT
    0x565819bfcf60 ---------C        b PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x565819bfd180 ---------C   00850  W=1
    0x565819bfd1d0 ---------C   00860  RETURN
    0x565819bfd540 ---------C T 00870  IF P<>INT(P) THEN 920
    0x565819bfd7c0 ---------C   00880  IF P>=A THEN 910
    0x565819bfda40 ---------C   00890  IF P=N THEN 960
    0x565819bfdac0 ---------C   00900  GOTO 920
    0x565819bfdd40 ---------C T 00910  IF P<=B THEN 940
    0x565819bfded0 ---------C T 00920  PRINT "ILLEGAL MOVE, REENTER IT ";
    0x565819bfdf50 ---------C   00930  GOTO 820
    0x565819bfe2a0 ---------C T 00940  N=N-P
    0x565819bfe4f0 ---------C   00950  IF N<>0 THEN 1030
    0x565819bfe760 ---------C T 00960  IF M=1 THEN 1000
    0x565819bfe7c0 ----------   00970  PRINT
    0x565819bfe920 ---------C        a PRINT "TOUGH LUCK, YOU LOSE."
    0x565819bfeb40 ---------C   00980  W=1
    0x565819bfeb90 ---------C   00990  RETURN
    0x565819bfec10 ---------- T 01000  PRINT
    0x565819bfec70 ---------- T      a PRINT
    0x565819bfede0 ---------C T      b PRINT "CONGRATULATIONS, YOU WIN."
    0x565819bff000 ---------C   01010  W=1
    0x565819bff050 ---------C   01020  RETURN
    0x565819bff2b0 ---------C T 01030  IF N>=0 THEN 1060
    0x565819bff610 ---------C   01040  N=N+P
    0x565819bff680 ---------C   01050  GOTO 920
    0x565819bff890 ---------C T 01060  W=0
    0x565819bff8e0 ---------C   01070  RETURN
    0x565819bff960 ----------   01080  RUN "MENU"
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/batnum.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x565819bec6d0 ---------A T 01000  PRINT CHR$(26)
    0x565819bec670 ----------   01010  PRINT TAB(33);"BATNUM"
    0x565819bedfc0 ---------A   01020  PRINT
    0x565819bee5e0 ---------A T 01030  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x565819bec9e0 ----------   01040  PRINT
    0x565819beeaa0 ----------   01050  PRINT
    0x565819beeb00 ---------A T 01060  PRINT
    0x565819bed080 ---------A   01070  PRINT "   This program is a 'Battle of Numbers' game, where the"
    0x565819bed480 ---------A   01080  PRINT "computer is your opponent."
    0x565819bed4e0 ---------A   01090  PRINT 
    0x565819becc30 ---------A   01100  PRINT "   The game starts with an assumed pile of objects. You"
    0x565819bef210 ---------A   01110  PRINT "and your opponent alternately remove objects from the pile."
    0x565819bed730 ---------A   01120  PRINT "Winning is defined in advance as taking the last object or"
    0x565819bf48f0 ---------A   01130  PRINT "not. You can also specify some other beginning conditions."
    0x565819bf4a10 ----------   01140  PRINT "Don't use zero, however, in playing the game."
    0x565819bf4ac0 ---------A   01150  PRINT
    0x565819bf4c30 ---------A   01160  PRINT "Enter a negative number for new pile size to stop playing."
    0x565819bf4c90 ----------   01170  PRINT
    0x565819bf4cf0 ---------A   01180  PRINT
    0x565819bf4d50 ---------A   01190  GOTO 1230
    0x565819bf5080 ---------A   01200  FOR I=1 TO 10
    0x565819bf50e0 ---------A   01210  PRINT
    0x565819bf5200 ---------A   01220  NEXT I
    0x565819bf53b0 ---------A   01230  INPUT "ENTER PILE SIZE";N
    0x565819bf55d0 ---------A   01240  IF N>=1 THEN 1290
    0x565819bf5630 ----------   01250  PRINT
    0x565819bf5690 ----------   01260  PRINT
    0x565819bf56f0 ----------   01270  PRINT
    0x565819bf5770 ---------A   01280  RUN "MENU"
    0x565819bf5ac0 ---------A   01290  IF N<>INT(N) THEN 1200
    0x565819bf5d50 ---------A   01300  IF N<1 THEN 1200
    0x565819bf5fb0 ---------A   01310  INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x565819bf6210 ---------A   01320  IF M=1 THEN 1340
    0x565819bf6450 ---------A   01330  IF M<>2 THEN 1310
    0x565819bf6830 ---------A   01340  INPUT "ENTER MIN AND MAX ";A,B
    0x565819bf6ab0 ---------A   01350  IF A>B THEN 1340
    0x565819bf6d20 ---------A   01360  IF A<1 THEN 1340
    0x565819bf7090 ---------A   01370  IF A<>INT(A) THEN 1340
    0x565819bf7420 ---------A   01380  IF B<>INT(B) THEN 1340
    0x565819bf7680 ---------A   01390  INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x565819bf76e0 ----------   01400  PRINT
    0x565819bf7760 ---------A   01410  PRINT
    0x565819bf7bd0 ---------A   01420  IF S=1 THEN 1440
    0x565819bf7e30 ---------A   01430  IF S<>2 THEN 1390
    0x565819bf8250 ---------A   01440  C=A+B
    0x565819bf84a0 ---------A   01450  IF S=2 THEN 1480
    0x565819bf8520 ---------A   01460  GOSUB 1510
    0x565819bf8830 ---------A   01470  IF W=1 THEN 1200
    0x565819bf88b0 ---------A   01480  GOSUB 1760
    0x565819bf8b00 ---------A   01490  IF W=1 THEN 1200
    0x565819bf8b80 ---------A   01500  GOTO 1460
    0x565819bf8e70 ---------B   01510  Q=N
    0x565819bf90c0 ---------B   01520  IF M=1 THEN 1540
    0x565819bf9400 ---------B   01530  Q=Q-1
    0x565819bf9650 ---------B   01540  IF M=1 THEN 1600
    0x565819bf98d0 ---------B   01550  IF N>A THEN 1650
    0x565819bf9b10 ---------B   01560  W=1
    0x565819bf9b60 ----------   01570  PRINT
    0x565819bf9ec0 ---------B   01580  PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x565819bf9f20 ---------B   01590  RETURN
    0x565819bfa1a0 ---------B   01600  IF N>B THEN 1650
    0x565819bfa3e0 ---------B   01610  W=1
    0x565819bfa430 ----------   01620  PRINT
    0x565819bfa790 ---------B   01630  PRINT "COMPUTER TAKES";N;"AND WINS."
    0x565819bfa7f0 ---------B   01640  RETURN
    0x565819bfaf30 ---------B   01650  P=Q-C*INT(Q/C)
    0x565819bfb1a0 ---------B   01660  IF P>=A THEN 1680
    0x565819bfb3e0 ---------B   01670  P=A
    0x565819bfb650 ---------B   01680  IF P<=B THEN 1700
    0x565819bfb890 ---------B   01690  P=B
    0x565819bfbc00 ---------B   01700  N=N-P
    0x565819bfbc50 ----------   01710  PRINT
    0x565819bfc0b0 ---------B   01720  PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x565819bfc2d0 ---------B   01730  W=0
    0x565819bfc320 ---------B   01740  RETURN
    0x565819bfc390 ----------   01750  PRINT
    0x565819bfc510 ---------C   01760  PRINT "YOUR MOVE ";
    0x565819bfc670 ---------C   01770  INPUT P
    0x565819bfcd20 ---------C   01780  IF P<>0 THEN 1840
    0x565819bfcd80 ----------   01790  PRINT
    0x565819bfcde0 ----------   01800  PRINT
    0x565819bfcf60 ---------C   01810  PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x565819bfd180 ---------C   01820  W=1
    0x565819bfd1d0 ---------C   01830  RETURN
    0x565819bfd540 ---------C   01840  IF P<>INT(P) THEN 1890
    0x565819bfd7c0 ---------C   01850  IF P>=A THEN 1880
    0x565819bfda40 ---------C   01860  IF P=N THEN 1930
    0x565819bfdac0 ---------C   01870  GOTO 1890
    0x565819bfdd40 ---------C   01880  IF P<=B THEN 1910
    0x565819bfded0 ---------C   01890  PRINT "ILLEGAL MOVE, REENTER IT ";
    0x565819bfdf50 ---------C   01900  GOTO 1770
    0x565819bfe2a0 ---------C   01910  N=N-P
    0x565819bfe4f0 ---------C   01920  IF N<>0 THEN 2030
    0x565819bfe760 ---------C   01930  IF M=1 THEN 2000
    0x565819bfe7c0 ----------   01940  PRINT
    0x565819bfe920 ---------C   01950  PRINT "TOUGH LUCK, YOU LOSE."
    0x565819bfeb40 ---------C   01960  W=1
    0x565819bfeb90 ---------C   01970  RETURN
    0x565819bfec10 ----------   01980  PRINT
    0x565819bfec70 ----------   01990  PRINT
    0x565819bfede0 ---------C   02000  PRINT "CONGRATULATIONS, YOU WIN."
    0x565819bff000 ---------C   02010  W=1
    0x565819bff050 ---------C   02020  RETURN
    0x565819bff2b0 ---------C   02030  IF N>=0 THEN 2060
    0x565819bff610 ---------C   02040  N=N+P
    0x565819bff680 ---------C   02050  GOTO 1890
    0x565819bff890 ---------C   02060  W=0
    0x565819bff8e0 ---------C   02070  RETURN
    0x565819bff960 ----------   02080  RUN "MENU"
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02070 - 10000    7940 

 */



/*
 *  Symbol Table Listing for 'basic/batnum.bas'
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
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
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
    S                        Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/batnum.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x565819bec6d0 ---------A   01000  PRINT CHR$(26)
    0x565819bec670 ---------A   01010  PRINT TAB(33);"BATNUM"
    0x565819bedfc0 ---------A   01020  PRINT
    0x565819bee5e0 ---------A   01030  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x565819bec9e0 ---------A   01040  PRINT
    0x565819beeaa0 ---------A   01050  PRINT
    0x565819beeb00 ---------A   01060  PRINT
    0x565819bed080 ---------A   01070  PRINT "   This program is a 'Battle of Numbers' game, where the"
    0x565819bed480 ---------A   01080  PRINT "computer is your opponent."
    0x565819bed4e0 ---------A   01090  PRINT 
    0x565819becc30 ---------A   01100  PRINT "   The game starts with an assumed pile of objects. You"
    0x565819bef210 ---------A   01110  PRINT "and your opponent alternately remove objects from the pile."
    0x565819bed730 ---------A   01120  PRINT "Winning is defined in advance as taking the last object or"
    0x565819bf48f0 ---------A   01130  PRINT "not. You can also specify some other beginning conditions."
    0x565819bf4a10 ---------A   01140  PRINT "Don't use zero, however, in playing the game."
    0x565819bf4ac0 ---------A   01150  PRINT
    0x565819bf4c30 ---------A   01160  PRINT "Enter a negative number for new pile size to stop playing."
    0x565819bf4c90 ---------A   01170  PRINT
    0x565819bf4cf0 ---------A   01180  PRINT
    0x565819bf4d50 ---------A   01190  GOTO 1230
    0x565819bf5080 ---------A T 01200  FOR I=1 TO 10
    0x565819bf50e0 ---------A   01210  PRINT
    0x565819bf5200 ---------A   01220  NEXT I
    0x565819bf53b0 ---------A T 01230  INPUT "ENTER PILE SIZE";N
    0x565819bf55d0 ---------A   01240  IF N>=1 THEN 1290
    0x565819bf5630 ---------A   01250  PRINT
    0x565819bf5690 ---------A   01260  PRINT
    0x565819bf56f0 ---------A   01270  PRINT
    0x565819bf5770 ---------A   01280  RUN "MENU"
    0x565819bf5ac0 ---------A T 01290  IF N<>INT(N) THEN 1200
    0x565819bf5d50 ---------A   01300  IF N<1 THEN 1200
    0x565819bf5fb0 ---------A T 01310  INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x565819bf6210 ---------A   01320  IF M=1 THEN 1340
    0x565819bf6450 ---------A   01330  IF M<>2 THEN 1310
    0x565819bf6830 ---------A T 01340  INPUT "ENTER MIN AND MAX ";A,B
    0x565819bf6ab0 ---------A   01350  IF A>B THEN 1340
    0x565819bf6d20 ---------A   01360  IF A<1 THEN 1340
    0x565819bf7090 ---------A   01370  IF A<>INT(A) THEN 1340
    0x565819bf7420 ---------A   01380  IF B<>INT(B) THEN 1340
    0x565819bf7680 ---------A T 01390  INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x565819bf76e0 ---------A   01400  PRINT
    0x565819bf7760 ---------A   01410  PRINT
    0x565819bf7bd0 ---------A   01420  IF S=1 THEN 1440
    0x565819bf7e30 ---------A   01430  IF S<>2 THEN 1390
    0x565819bf8250 ---------A T 01440  C=A+B
    0x565819bf84a0 ---------A   01450  IF S=2 THEN 1480
    0x565819bf8520 ---------A T 01460  GOSUB 1510
    0x565819bf8830 ---------A   01470  IF W=1 THEN 1200
    0x565819bf88b0 ---------A T 01480  GOSUB 1760
    0x565819bf8b00 ---------A   01490  IF W=1 THEN 1200
    0x565819bf8b80 ---------A   01500  GOTO 1460
    0x565819bf8e70 ---------B G 01510  Q=N
    0x565819bf90c0 ---------B   01520  IF M=1 THEN 1540
    0x565819bf9400 ---------B   01530  Q=Q-1
    0x565819bf9650 ---------B T 01540  IF M=1 THEN 1600
    0x565819bf98d0 ---------B   01550  IF N>A THEN 1650
    0x565819bf9b10 ---------B   01560  W=1
    0x565819bf9b60 ---------B   01570  PRINT
    0x565819bf9ec0 ---------B   01580  PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x565819c06040 ---------B   01590  GOTO 01750
    0x565819bfa1a0 ---------B T 01600  IF N>B THEN 1650
    0x565819bfa3e0 ---------B   01610  W=1
    0x565819bfa430 ---------B   01620  PRINT
    0x565819bfa790 ---------B   01630  PRINT "COMPUTER TAKES";N;"AND WINS."
    0x565819c06270 ---------B   01640  GOTO 01750
    0x565819bfaf30 ---------B T 01650  P=Q-C*INT(Q/C)
    0x565819bfb1a0 ---------B   01660  IF P>=A THEN 1680
    0x565819bfb3e0 ---------B   01670  P=A
    0x565819bfb650 ---------B T 01680  IF P<=B THEN 1700
    0x565819bfb890 ---------B   01690  P=B
    0x565819bfbc00 ---------B T 01700  N=N-P
    0x565819bfbc50 ---------B   01710  PRINT
    0x565819bfc0b0 ---------B   01720  PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x565819bfc2d0 ---------B   01730  W=0
    0x565819c064a0 ---------B   01740  GOTO 01750
    0x565819c07e50 ---------B T 01750  RETURN
    0x565819bfc510 ---------C G 01760  PRINT "YOUR MOVE ";
    0x565819bfc670 ---------C T 01770  INPUT P
    0x565819bfcd20 ---------C   01780  IF P<>0 THEN 1840
    0x565819bfcd80 ---------C   01790  PRINT
    0x565819bfcde0 ---------C   01800  PRINT
    0x565819bfcf60 ---------C   01810  PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x565819bfd180 ---------C   01820  W=1
    0x565819c06450 ---------C   01830  GOTO 02060
    0x565819bfd540 ---------C T 01840  IF P<>INT(P) THEN 1890
    0x565819bfd7c0 ---------C   01850  IF P>=A THEN 1880
    0x565819bfda40 ---------C   01860  IF P=N THEN 1930
    0x565819bfdac0 ---------C   01870  GOTO 1890
    0x565819bfdd40 ---------C T 01880  IF P<=B THEN 1910
    0x565819bfded0 ---------C T 01890  PRINT "ILLEGAL MOVE, REENTER IT ";
    0x565819bfdf50 ---------C   01900  GOTO 1770
    0x565819bfe2a0 ---------C T 01910  N=N-P
    0x565819bfe4f0 ---------C   01920  IF N<>0 THEN 2010
    0x565819bfe760 ---------C T 01930  IF M=1 THEN 1980
    0x565819bfe7c0 ---------C   01940  PRINT
    0x565819bfe920 ---------C   01950  PRINT "TOUGH LUCK, YOU LOSE."
    0x565819bfeb40 ---------C   01960  W=1
    0x565819c06400 ---------C   01970  GOTO 02060
    0x565819bfede0 ---------C T 01980  PRINT "CONGRATULATIONS, YOU WIN."
    0x565819bff000 ---------C   01990  W=1
    0x565819c063b0 ---------C   02000  GOTO 02060
    0x565819bff2b0 ---------C T 02010  IF N>=0 THEN 2040
    0x565819bff610 ---------C   02020  N=N+P
    0x565819bff680 ---------C   02030  GOTO 1890
    0x565819bff890 ---------C T 02040  W=0
    0x565819c06360 ---------C   02050  GOTO 02060
    0x565819c07f30 ---------C T 02060  RETURN
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
int    B_int;                                     // Basic: B 
int    C_int;                                     // Basic: C 
int    I_int;                                     // Basic: I 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    S_int;                                     // Basic: S 
int    W_int;                                     // Basic: W 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01510();
void Routine_01760();

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

void Routine_01510(){
    // 01510 Q=N
    Q_int = N_int;
    // 01520 IF M=1 THEN 1540
    if(M_int==1)goto Lbl_01540;
    // 01530 Q=Q-1
    Q_int = Q_int-1;

  Lbl_01540:
    // 01540 IF M=1 THEN 1600
    if(M_int==1)goto Lbl_01600;
    // 01550 IF N>A THEN 1650
    if(N_int>A_int)goto Lbl_01650;
    // 01560 W=1
    W_int = 1;
    // 01570 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01580 PRINT "COMPUTER TAKES";N;"AND LOSES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER TAKES"); b2c_INT(buf,N_int);strcat(buf,"AND LOSES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01590 GOTO 01750
    goto Lbl_01750;

  Lbl_01600:
    // 01600 IF N>B THEN 1650
    if(N_int>B_int)goto Lbl_01650;
    // 01610 W=1
    W_int = 1;
    // 01620 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01630 PRINT "COMPUTER TAKES";N;"AND WINS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER TAKES"); b2c_INT(buf,N_int);strcat(buf,"AND WINS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01640 GOTO 01750
    goto Lbl_01750;

  Lbl_01650:
    // 01650 P=Q-C*INT(Q/C)
    P_int = Q_int-C_int*INT(Q_int/C_int);
    // 01660 IF P>=A THEN 1680
    if(P_int>=A_int)goto Lbl_01680;
    // 01670 P=A
    P_int = A_int;

  Lbl_01680:
    // 01680 IF P<=B THEN 1700
    if(P_int<=B_int)goto Lbl_01700;
    // 01690 P=B
    P_int = B_int;

  Lbl_01700:
    // 01700 N=N-P
    N_int = N_int-P_int;
    // 01710 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01720 PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER TAKES"); b2c_INT(buf,P_int);strcat(buf,"AND LEAVES"); b2c_INT(buf,N_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01730 W=0
    W_int = 0;
    // 01740 GOTO 01750
    goto Lbl_01750;

  Lbl_01750:
    // 01750 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01760(){
    // 01760 PRINT "YOUR MOVE ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR MOVE ");fputs(buf,fh); };

  Lbl_01770:
    // 01770 INPUT P
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
                (err += b2c_strtoi(&P_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01770
    // 01780 IF P<>0 THEN 1840
    if(P_int!=0)goto Lbl_01840;
    // 01790 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01800 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01810 PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01820 W=1
    W_int = 1;
    // 01830 GOTO 02060
    goto Lbl_02060;

  Lbl_01840:
    // 01840 IF P<>INT(P) THEN 1890
    if(P_int!=INT(P_int))goto Lbl_01890;
    // 01850 IF P>=A THEN 1880
    if(P_int>=A_int)goto Lbl_01880;
    // 01860 IF P=N THEN 1930
    if(P_int==N_int)goto Lbl_01930;
    // 01870 GOTO 1890
    goto Lbl_01890;

  Lbl_01880:
    // 01880 IF P<=B THEN 1910
    if(P_int<=B_int)goto Lbl_01910;

  Lbl_01890:
    // 01890 PRINT "ILLEGAL MOVE, REENTER IT ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL MOVE, REENTER IT ");fputs(buf,fh); };
    // 01900 GOTO 1770
    goto Lbl_01770;

  Lbl_01910:
    // 01910 N=N-P
    N_int = N_int-P_int;
    // 01920 IF N<>0 THEN 2010
    if(N_int!=0)goto Lbl_02010;

  Lbl_01930:
    // 01930 IF M=1 THEN 1980
    if(M_int==1)goto Lbl_01980;
    // 01940 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01950 PRINT "TOUGH LUCK, YOU LOSE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOUGH LUCK, YOU LOSE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01960 W=1
    W_int = 1;
    // 01970 GOTO 02060
    goto Lbl_02060;

  Lbl_01980:
    // 01980 PRINT "CONGRATULATIONS, YOU WIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS, YOU WIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01990 W=1
    W_int = 1;
    // 02000 GOTO 02060
    goto Lbl_02060;

  Lbl_02010:
    // 02010 IF N>=0 THEN 2040
    if(N_int>=0)goto Lbl_02040;
    // 02020 N=N+P
    N_int = N_int+P_int;
    // 02030 GOTO 1890
    goto Lbl_01890;

  Lbl_02040:
    // 02040 W=0
    W_int = 0;
    // 02050 GOTO 02060
    goto Lbl_02060;

  Lbl_02060:
    // 02060 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT CHR$(26)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(26));strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(33);"BATNUM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"BATNUM");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "   This program is a 'Battle of Numbers' game, where the"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   This program is a 'Battle of Numbers' game, where the");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "computer is your opponent."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"computer is your opponent.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "   The game starts with an assumed pile of objects. You"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   The game starts with an assumed pile of objects. You");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "and your opponent alternately remove objects from the pile."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"and your opponent alternately remove objects from the pile.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "Winning is defined in advance as taking the last object or"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Winning is defined in advance as taking the last object or");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "not. You can also specify some other beginning conditions."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"not. You can also specify some other beginning conditions.");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "Don't use zero, however, in playing the game."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Don't use zero, however, in playing the game.");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "Enter a negative number for new pile size to stop playing."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Enter a negative number for new pile size to stop playing.");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01190 GOTO 1230
    goto Lbl_01230;

  Lbl_01200:
    // 01200 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 01210 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01220 NEXT I
        int dummy_1220=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_01230:
    // 01230 INPUT "ENTER PILE SIZE";N
    // Start of Basic INPUT statement 01230
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ENTER PILE SIZE");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&N_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01230
    // 01240 IF N>=1 THEN 1290
    if(N_int>=1)goto Lbl_01290;
    // 01250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01280 RUN "MENU"
    system("MENU");

  Lbl_01290:
    // 01290 IF N<>INT(N) THEN 1200
    if(N_int!=INT(N_int))goto Lbl_01200;
    // 01300 IF N<1 THEN 1200
    if(N_int<1)goto Lbl_01200;

  Lbl_01310:
    // 01310 INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    // Start of Basic INPUT statement 01310
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01310
    // 01320 IF M=1 THEN 1340
    if(M_int==1)goto Lbl_01340;
    // 01330 IF M<>2 THEN 1310
    if(M_int!=2)goto Lbl_01310;

  Lbl_01340:
    // 01340 INPUT "ENTER MIN AND MAX ";A,B
    // Start of Basic INPUT statement 01340
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ENTER MIN AND MAX ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A_int,args,0)) ||
                (err += b2c_strtoi(&B_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01340
    // 01350 IF A>B THEN 1340
    if(A_int>B_int)goto Lbl_01340;
    // 01360 IF A<1 THEN 1340
    if(A_int<1)goto Lbl_01340;
    // 01370 IF A<>INT(A) THEN 1340
    if(A_int!=INT(A_int))goto Lbl_01340;
    // 01380 IF B<>INT(B) THEN 1340
    if(B_int!=INT(B_int))goto Lbl_01340;

  Lbl_01390:
    // 01390 INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    // Start of Basic INPUT statement 01390
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01390
    // 01400 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01420 IF S=1 THEN 1440
    if(S_int==1)goto Lbl_01440;
    // 01430 IF S<>2 THEN 1390
    if(S_int!=2)goto Lbl_01390;

  Lbl_01440:
    // 01440 C=A+B
    C_int = A_int+B_int;
    // 01450 IF S=2 THEN 1480
    if(S_int==2)goto Lbl_01480;

  Lbl_01460:
    // 01460 GOSUB 1510
    Routine_01510();
    // 01470 IF W=1 THEN 1200
    if(W_int==1)goto Lbl_01200;

  Lbl_01480:
    // 01480 GOSUB 1760
    Routine_01760();
    // 01490 IF W=1 THEN 1200
    if(W_int==1)goto Lbl_01200;
    // 01500 GOTO 1460
    goto Lbl_01460;
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
