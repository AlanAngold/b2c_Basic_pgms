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
    0x585646a276d0 ---------A   00010  PRINT TAB(33);"BATNUM"
    0x585646a27670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x585646a277f0 ---------A   00030  PRINT:PRINT:PRINT
    0x585646a28040 ---------A   00110  PRINT "THIS PROGRAM IS A 'BATTLE OF NUMBERS' GAME, WHERE THE"
    0x585646a280a0 ---------A   00120  PRINT "COMPUTER IS YOUR OPPONENT."
    0x585646a27e40 ---------A   00130  PRINT 
    0x585646a284c0 ---------A   00140  PRINT "THE GAME STARTS WITH AN ASSUMED PILE OF OBJECTS. YOU"
    0x585646a27be0 ---------A   00150  PRINT "AND YOUR OPPONENT ALTERNATELY REMOVE OBJECTS FROM THE PILE."
    0x585646a27c90 ---------A   00160  PRINT "WINNING IS DEFINED IN ADVANCE AS TAKING THE LAST OBJECT OR"
    0x585646a286b0 ---------A   00170  PRINT "NOT. YOU CAN ALSO SPECIFY SOME OTHER BEGINNING CONDITIONS."
    0x585646a28860 ---------A   00180  PRINT "DON'T USE ZERO, HOWEVER, IN PLAYING THE GAME."
    0x585646a2f9b0 ---------A   00190  PRINT "ENTER A NEGATIVE NUMBER FOR NEW PILE SIZE TO STOP PLAYING."
    0x585646a2fa10 ---------A   00200  PRINT
    0x585646a2fa70 ---------A   00210  GOTO 330
    0x585646a2fda0 ---------A T 00220  FOR I=1 TO 10
    0x585646a2fe00 ---------A   00230  PRINT
    0x585646a2ff20 ---------A   00240  NEXT I
    0x585646a300d0 ---------A T 00330  INPUT "ENTER PILE SIZE";N
    0x585646a302f0 ---------A   00350  IF N>=1 THEN 370
    0x585646a30350 ---------A   00360  GOTO 330
    0x585646a306a0 ---------A T 00370  IF N<>INT(N) THEN 220
    0x585646a30930 ---------A   00380  IF N<1 THEN 220
    0x585646a30b90 ---------A T 00390  INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x585646a30df0 ---------A   00410  IF M=1 THEN 430
    0x585646a31030 ---------A   00420  IF M<>2 THEN 390
    0x585646a31410 ---------A T 00430  INPUT "ENTER MIN AND MAX ";A,B
    0x585646a31690 ---------A   00450  IF A>B THEN 430
    0x585646a318d0 ---------A   00460  IF A<1 THEN 430
    0x585646a31c10 ---------A   00470  IF A<>INT(A) THEN 430
    0x585646a31fa0 ---------A   00480  IF B<>INT(B) THEN 430
    0x585646a32200 ---------A T 00490  INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x585646a322e0 ---------A   00500  PRINT:PRINT
    0x585646a32540 ---------A   00510  IF S=1 THEN 530
    0x585646a329b0 ---------A   00520  IF S<>2 THEN 490
    0x585646a32dd0 ---------A T 00530  C=A+B
    0x585646a33020 ---------A   00540  IF S=2 THEN 570
    0x585646a330a0 ---------A T 00550  GOSUB 600
    0x585646a333b0 ---------A   00560  IF W=1 THEN 220
    0x585646a33430 ---------A T 00570  GOSUB 810
    0x585646a33680 ---------A   00580  IF W=1 THEN 220
    0x585646a33700 ---------A   00590  GOTO 550
    0x585646a339f0 ---------B G 00600  Q=N
    0x585646a33c40 ---------B   00610  IF M=1 THEN 630
    0x585646a33f80 ---------B   00620  Q=Q-1
    0x585646a341d0 ---------B T 00630  IF M=1 THEN 680
    0x585646a34450 ---------B   00640  IF N>A THEN 720
    0x585646a34690 ---------B   00650  W=1
    0x585646a349e0 ---------B   00660  PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x585646a34a40 ---------B   00670  RETURN
    0x585646a34cc0 ---------B T 00680  IF N>B THEN 720
    0x585646a34f00 ---------B   00690  W=1
    0x585646a35250 ---------B   00700  PRINT "COMPUTER TAKES";N;"AND WINS."
    0x585646a352b0 ---------B   00710  RETURN
    0x585646a359f0 ---------B T 00720  P=Q-C*INT(Q/C)
    0x585646a35c60 ---------B   00730  IF P>=A THEN 750
    0x585646a35ea0 ---------B   00740  P=A
    0x585646a36110 ---------B T 00750  IF P<=B THEN 770
    0x585646a36350 ---------B   00760  P=B
    0x585646a366c0 ---------B T 00770  N=N-P
    0x585646a36b10 ---------B   00780  PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x585646a36d30 ---------B   00790  W=0
    0x585646a36d80 ---------B   00800  RETURN
    0x585646a36f40 ---------C G 00810  PRINT:PRINT "YOUR MOVE ";
    0x585646a370a0 ---------C T 00820  INPUT P
    0x585646a37330 ---------C   00830  IF P<>0 THEN 870
    0x585646a378c0 ---------C   00840  PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x585646a37ae0 ---------C   00850  W=1
    0x585646a37b30 ---------C   00860  RETURN
    0x585646a37ea0 ---------C T 00870  IF P<>INT(P) THEN 920
    0x585646a38120 ---------C   00880  IF P>=A THEN 910
    0x585646a383a0 ---------C   00890  IF P=N THEN 960
    0x585646a38420 ---------C   00900  GOTO 920
    0x585646a386a0 ---------C T 00910  IF P<=B THEN 940
    0x585646a38830 ---------C T 00920  PRINT "ILLEGAL MOVE, REENTER IT ";
    0x585646a388b0 ---------C   00930  GOTO 820
    0x585646a38c00 ---------C T 00940  N=N-P
    0x585646a38e50 ---------C   00950  IF N<>0 THEN 1030
    0x585646a390c0 ---------C T 00960  IF M=1 THEN 1000
    0x585646a39220 ---------C   00970  PRINT "TOUGH LUCK, YOU LOSE."
    0x585646a39440 ---------C   00980  W=1
    0x585646a39490 ---------C   00990  RETURN
    0x585646a39610 ---------C T 01000  PRINT "CONGRATULATIONS, YOU WIN."
    0x585646a39830 ---------C   01010  W=1
    0x585646a39880 ---------C   01020  RETURN
    0x585646a39ae0 ---------C T 01030  IF N>=0 THEN 1060
    0x585646a39e40 ---------C   01040  N=N+P
    0x585646a39eb0 ---------C   01050  GOTO 920
    0x585646a3a0c0 ---------C T 01060  W=0
    0x585646a3a110 ---------C   01070  RETURN
    0x585646a3a170 ---------A   01080  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00220      00370T, 00380T, 00560T, 00580T
     00330      00210T, 00360T
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
   A) 0x585646a276d0 (00010)   0x585646a276d0 (00010)   0x585646a3a170 (01080)   0x585646a3a170 (01080)   
   B) 0x585646a339f0 (00600)   0x585646a339f0 (00600)   0x585646a34a40 (00670)   0x585646a36d80 (00800)   
   C) 0x585646a36f40 (00810)   0x585646a36f40 (00810)   0x585646a37b30 (00860)   0x585646a3a110 (01070)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

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
    0x585646a276d0 ---------A   00010  PRINT TAB(33);"BATNUM"
    0x585646a27670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x585646a182b0 ----------   00030  PRINT
    0x585646a279e0 ----------        a PRINT
    0x585646a277f0 ---------A        b PRINT
    0x585646a28040 ---------A   00110  PRINT "THIS PROGRAM IS A 'BATTLE OF NUMBERS' GAME, WHERE THE"
    0x585646a280a0 ---------A   00120  PRINT "COMPUTER IS YOUR OPPONENT."
    0x585646a27e40 ---------A   00130  PRINT 
    0x585646a284c0 ---------A   00140  PRINT "THE GAME STARTS WITH AN ASSUMED PILE OF OBJECTS. YOU"
    0x585646a27be0 ---------A   00150  PRINT "AND YOUR OPPONENT ALTERNATELY REMOVE OBJECTS FROM THE PILE."
    0x585646a27c90 ---------A   00160  PRINT "WINNING IS DEFINED IN ADVANCE AS TAKING THE LAST OBJECT OR"
    0x585646a286b0 ---------A   00170  PRINT "NOT. YOU CAN ALSO SPECIFY SOME OTHER BEGINNING CONDITIONS."
    0x585646a28860 ---------A   00180  PRINT "DON'T USE ZERO, HOWEVER, IN PLAYING THE GAME."
    0x585646a2f9b0 ---------A   00190  PRINT "ENTER A NEGATIVE NUMBER FOR NEW PILE SIZE TO STOP PLAYING."
    0x585646a2fa10 ---------A   00200  PRINT
    0x585646a2fa70 ---------A   00210  GOTO 330
    0x585646a2fda0 ---------A T 00220  FOR I=1 TO 10
    0x585646a2fe00 ---------A   00230  PRINT
    0x585646a2ff20 ---------A   00240  NEXT I
    0x585646a300d0 ---------A T 00330  INPUT "ENTER PILE SIZE";N
    0x585646a302f0 ---------A   00350  IF N>=1 THEN 370
    0x585646a30350 ---------A   00360  GOTO 330
    0x585646a306a0 ---------A T 00370  IF N<>INT(N) THEN 220
    0x585646a30930 ---------A   00380  IF N<1 THEN 220
    0x585646a30b90 ---------A T 00390  INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x585646a30df0 ---------A   00410  IF M=1 THEN 430
    0x585646a31030 ---------A   00420  IF M<>2 THEN 390
    0x585646a31410 ---------A T 00430  INPUT "ENTER MIN AND MAX ";A,B
    0x585646a31690 ---------A   00450  IF A>B THEN 430
    0x585646a318d0 ---------A   00460  IF A<1 THEN 430
    0x585646a31c10 ---------A   00470  IF A<>INT(A) THEN 430
    0x585646a31fa0 ---------A   00480  IF B<>INT(B) THEN 430
    0x585646a32200 ---------A T 00490  INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x585646a32260 ----------   00500  PRINT
    0x585646a322e0 ---------A        a PRINT
    0x585646a32540 ---------A   00510  IF S=1 THEN 530
    0x585646a329b0 ---------A   00520  IF S<>2 THEN 490
    0x585646a32dd0 ---------A T 00530  C=A+B
    0x585646a33020 ---------A   00540  IF S=2 THEN 570
    0x585646a330a0 ---------A T 00550  GOSUB 600
    0x585646a333b0 ---------A   00560  IF W=1 THEN 220
    0x585646a33430 ---------A T 00570  GOSUB 810
    0x585646a33680 ---------A   00580  IF W=1 THEN 220
    0x585646a33700 ---------A   00590  GOTO 550
    0x585646a339f0 ---------B G 00600  Q=N
    0x585646a33c40 ---------B   00610  IF M=1 THEN 630
    0x585646a33f80 ---------B   00620  Q=Q-1
    0x585646a341d0 ---------B T 00630  IF M=1 THEN 680
    0x585646a34450 ---------B   00640  IF N>A THEN 720
    0x585646a34690 ---------B   00650  W=1
    0x585646a349e0 ---------B   00660  PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x585646a34a40 ---------B   00670  RETURN
    0x585646a34cc0 ---------B T 00680  IF N>B THEN 720
    0x585646a34f00 ---------B   00690  W=1
    0x585646a35250 ---------B   00700  PRINT "COMPUTER TAKES";N;"AND WINS."
    0x585646a352b0 ---------B   00710  RETURN
    0x585646a359f0 ---------B T 00720  P=Q-C*INT(Q/C)
    0x585646a35c60 ---------B   00730  IF P>=A THEN 750
    0x585646a35ea0 ---------B   00740  P=A
    0x585646a36110 ---------B T 00750  IF P<=B THEN 770
    0x585646a36350 ---------B   00760  P=B
    0x585646a366c0 ---------B T 00770  N=N-P
    0x585646a36b10 ---------B   00780  PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x585646a36d30 ---------B   00790  W=0
    0x585646a36d80 ---------B   00800  RETURN
    0x585646a36dc0 ---------- G 00810  PRINT
    0x585646a36f40 ---------C G      a PRINT "YOUR MOVE ";
    0x585646a370a0 ---------C T 00820  INPUT P
    0x585646a37330 ---------C   00830  IF P<>0 THEN 870
    0x585646a378c0 ---------C   00840  PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x585646a37ae0 ---------C   00850  W=1
    0x585646a37b30 ---------C   00860  RETURN
    0x585646a37ea0 ---------C T 00870  IF P<>INT(P) THEN 920
    0x585646a38120 ---------C   00880  IF P>=A THEN 910
    0x585646a383a0 ---------C   00890  IF P=N THEN 960
    0x585646a38420 ---------C   00900  GOTO 920
    0x585646a386a0 ---------C T 00910  IF P<=B THEN 940
    0x585646a38830 ---------C T 00920  PRINT "ILLEGAL MOVE, REENTER IT ";
    0x585646a388b0 ---------C   00930  GOTO 820
    0x585646a38c00 ---------C T 00940  N=N-P
    0x585646a38e50 ---------C   00950  IF N<>0 THEN 1030
    0x585646a390c0 ---------C T 00960  IF M=1 THEN 1000
    0x585646a39220 ---------C   00970  PRINT "TOUGH LUCK, YOU LOSE."
    0x585646a39440 ---------C   00980  W=1
    0x585646a39490 ---------C   00990  RETURN
    0x585646a39610 ---------C T 01000  PRINT "CONGRATULATIONS, YOU WIN."
    0x585646a39830 ---------C   01010  W=1
    0x585646a39880 ---------C   01020  RETURN
    0x585646a39ae0 ---------C T 01030  IF N>=0 THEN 1060
    0x585646a39e40 ---------C   01040  N=N+P
    0x585646a39eb0 ---------C   01050  GOTO 920
    0x585646a3a0c0 ---------C T 01060  W=0
    0x585646a3a110 ---------C   01070  RETURN
    0x585646a3a170 ---------A   01080  END
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
    0x585646a276d0 ---------A T 01000  PRINT TAB(33);"BATNUM"
    0x585646a27670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x585646a182b0 ----------   01020  PRINT
    0x585646a279e0 ---------- T 01030  PRINT
    0x585646a277f0 ---------A   01040  PRINT
    0x585646a28040 ---------A   01050  PRINT "THIS PROGRAM IS A 'BATTLE OF NUMBERS' GAME, WHERE THE"
    0x585646a280a0 ---------A T 01060  PRINT "COMPUTER IS YOUR OPPONENT."
    0x585646a27e40 ---------A   01070  PRINT 
    0x585646a284c0 ---------A   01080  PRINT "THE GAME STARTS WITH AN ASSUMED PILE OF OBJECTS. YOU"
    0x585646a27be0 ---------A   01090  PRINT "AND YOUR OPPONENT ALTERNATELY REMOVE OBJECTS FROM THE PILE."
    0x585646a27c90 ---------A   01100  PRINT "WINNING IS DEFINED IN ADVANCE AS TAKING THE LAST OBJECT OR"
    0x585646a286b0 ---------A   01110  PRINT "NOT. YOU CAN ALSO SPECIFY SOME OTHER BEGINNING CONDITIONS."
    0x585646a28860 ---------A   01120  PRINT "DON'T USE ZERO, HOWEVER, IN PLAYING THE GAME."
    0x585646a2f9b0 ---------A   01130  PRINT "ENTER A NEGATIVE NUMBER FOR NEW PILE SIZE TO STOP PLAYING."
    0x585646a2fa10 ---------A   01140  PRINT
    0x585646a2fa70 ---------A   01150  GOTO 1190
    0x585646a2fda0 ---------A   01160  FOR I=1 TO 10
    0x585646a2fe00 ---------A   01170  PRINT
    0x585646a2ff20 ---------A   01180  NEXT I
    0x585646a300d0 ---------A   01190  INPUT "ENTER PILE SIZE";N
    0x585646a302f0 ---------A   01200  IF N>=1 THEN 1220
    0x585646a30350 ---------A   01210  GOTO 1190
    0x585646a306a0 ---------A   01220  IF N<>INT(N) THEN 1160
    0x585646a30930 ---------A   01230  IF N<1 THEN 1160
    0x585646a30b90 ---------A   01240  INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x585646a30df0 ---------A   01250  IF M=1 THEN 1270
    0x585646a31030 ---------A   01260  IF M<>2 THEN 1240
    0x585646a31410 ---------A   01270  INPUT "ENTER MIN AND MAX ";A,B
    0x585646a31690 ---------A   01280  IF A>B THEN 1270
    0x585646a318d0 ---------A   01290  IF A<1 THEN 1270
    0x585646a31c10 ---------A   01300  IF A<>INT(A) THEN 1270
    0x585646a31fa0 ---------A   01310  IF B<>INT(B) THEN 1270
    0x585646a32200 ---------A   01320  INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x585646a32260 ----------   01330  PRINT
    0x585646a322e0 ---------A   01340  PRINT
    0x585646a32540 ---------A   01350  IF S=1 THEN 1370
    0x585646a329b0 ---------A   01360  IF S<>2 THEN 1320
    0x585646a32dd0 ---------A   01370  C=A+B
    0x585646a33020 ---------A   01380  IF S=2 THEN 1410
    0x585646a330a0 ---------A   01390  GOSUB 1440
    0x585646a333b0 ---------A   01400  IF W=1 THEN 1160
    0x585646a33430 ---------A   01410  GOSUB 1660
    0x585646a33680 ---------A   01420  IF W=1 THEN 1160
    0x585646a33700 ---------A   01430  GOTO 1390
    0x585646a339f0 ---------B   01440  Q=N
    0x585646a33c40 ---------B   01450  IF M=1 THEN 1470
    0x585646a33f80 ---------B   01460  Q=Q-1
    0x585646a341d0 ---------B   01470  IF M=1 THEN 1520
    0x585646a34450 ---------B   01480  IF N>A THEN 1560
    0x585646a34690 ---------B   01490  W=1
    0x585646a349e0 ---------B   01500  PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x585646a34a40 ---------B   01510  RETURN
    0x585646a34cc0 ---------B   01520  IF N>B THEN 1560
    0x585646a34f00 ---------B   01530  W=1
    0x585646a35250 ---------B   01540  PRINT "COMPUTER TAKES";N;"AND WINS."
    0x585646a352b0 ---------B   01550  RETURN
    0x585646a359f0 ---------B   01560  P=Q-C*INT(Q/C)
    0x585646a35c60 ---------B   01570  IF P>=A THEN 1590
    0x585646a35ea0 ---------B   01580  P=A
    0x585646a36110 ---------B   01590  IF P<=B THEN 1610
    0x585646a36350 ---------B   01600  P=B
    0x585646a366c0 ---------B   01610  N=N-P
    0x585646a36b10 ---------B   01620  PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x585646a36d30 ---------B   01630  W=0
    0x585646a36d80 ---------B   01640  RETURN
    0x585646a36dc0 ----------   01650  PRINT
    0x585646a36f40 ---------C   01660  PRINT "YOUR MOVE ";
    0x585646a370a0 ---------C   01670  INPUT P
    0x585646a37330 ---------C   01680  IF P<>0 THEN 1720
    0x585646a378c0 ---------C   01690  PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x585646a37ae0 ---------C   01700  W=1
    0x585646a37b30 ---------C   01710  RETURN
    0x585646a37ea0 ---------C   01720  IF P<>INT(P) THEN 1770
    0x585646a38120 ---------C   01730  IF P>=A THEN 1760
    0x585646a383a0 ---------C   01740  IF P=N THEN 1810
    0x585646a38420 ---------C   01750  GOTO 1770
    0x585646a386a0 ---------C   01760  IF P<=B THEN 1790
    0x585646a38830 ---------C   01770  PRINT "ILLEGAL MOVE, REENTER IT ";
    0x585646a388b0 ---------C   01780  GOTO 1670
    0x585646a38c00 ---------C   01790  N=N-P
    0x585646a38e50 ---------C   01800  IF N<>0 THEN 1880
    0x585646a390c0 ---------C   01810  IF M=1 THEN 1850
    0x585646a39220 ---------C   01820  PRINT "TOUGH LUCK, YOU LOSE."
    0x585646a39440 ---------C   01830  W=1
    0x585646a39490 ---------C   01840  RETURN
    0x585646a39610 ---------C   01850  PRINT "CONGRATULATIONS, YOU WIN."
    0x585646a39830 ---------C   01860  W=1
    0x585646a39880 ---------C   01870  RETURN
    0x585646a39ae0 ---------C   01880  IF N>=0 THEN 1910
    0x585646a39e40 ---------C   01890  N=N+P
    0x585646a39eb0 ---------C   01900  GOTO 1770
    0x585646a3a0c0 ---------C   01910  W=0
    0x585646a3a110 ---------C   01920  RETURN
    0x585646a3a170 ---------A   01930  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01950 - 10000    8060 

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
    0x585646a276d0 ---------A   01000  PRINT TAB(33);"BATNUM"
    0x585646a27670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x585646a182b0 ---------A   01020  PRINT
    0x585646a279e0 ---------A   01030  PRINT
    0x585646a277f0 ---------A   01040  PRINT
    0x585646a28040 ---------A   01050  PRINT "THIS PROGRAM IS A 'BATTLE OF NUMBERS' GAME, WHERE THE"
    0x585646a280a0 ---------A   01060  PRINT "COMPUTER IS YOUR OPPONENT."
    0x585646a27e40 ---------A   01070  PRINT 
    0x585646a284c0 ---------A   01080  PRINT "THE GAME STARTS WITH AN ASSUMED PILE OF OBJECTS. YOU"
    0x585646a27be0 ---------A   01090  PRINT "AND YOUR OPPONENT ALTERNATELY REMOVE OBJECTS FROM THE PILE."
    0x585646a27c90 ---------A   01100  PRINT "WINNING IS DEFINED IN ADVANCE AS TAKING THE LAST OBJECT OR"
    0x585646a286b0 ---------A   01110  PRINT "NOT. YOU CAN ALSO SPECIFY SOME OTHER BEGINNING CONDITIONS."
    0x585646a28860 ---------A   01120  PRINT "DON'T USE ZERO, HOWEVER, IN PLAYING THE GAME."
    0x585646a2f9b0 ---------A   01130  PRINT "ENTER A NEGATIVE NUMBER FOR NEW PILE SIZE TO STOP PLAYING."
    0x585646a2fa10 ---------A   01140  PRINT
    0x585646a2fa70 ---------A   01150  GOTO 1190
    0x585646a2fda0 ---------A T 01160  FOR I=1 TO 10
    0x585646a2fe00 ---------A   01170  PRINT
    0x585646a2ff20 ---------A   01180  NEXT I
    0x585646a300d0 ---------A T 01190  INPUT "ENTER PILE SIZE";N
    0x585646a302f0 ---------A   01200  IF N>=1 THEN 1220
    0x585646a30350 ---------A   01210  GOTO 1190
    0x585646a306a0 ---------A T 01220  IF N<>INT(N) THEN 1160
    0x585646a30930 ---------A   01230  IF N<1 THEN 1160
    0x585646a30b90 ---------A T 01240  INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x585646a30df0 ---------A   01250  IF M=1 THEN 1270
    0x585646a31030 ---------A   01260  IF M<>2 THEN 1240
    0x585646a31410 ---------A T 01270  INPUT "ENTER MIN AND MAX ";A,B
    0x585646a31690 ---------A   01280  IF A>B THEN 1270
    0x585646a318d0 ---------A   01290  IF A<1 THEN 1270
    0x585646a31c10 ---------A   01300  IF A<>INT(A) THEN 1270
    0x585646a31fa0 ---------A   01310  IF B<>INT(B) THEN 1270
    0x585646a32200 ---------A T 01320  INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x585646a32260 ---------A   01330  PRINT
    0x585646a322e0 ---------A   01340  PRINT
    0x585646a32540 ---------A   01350  IF S=1 THEN 1370
    0x585646a329b0 ---------A   01360  IF S<>2 THEN 1320
    0x585646a32dd0 ---------A T 01370  C=A+B
    0x585646a33020 ---------A   01380  IF S=2 THEN 1410
    0x585646a330a0 ---------A T 01390  GOSUB 1450
    0x585646a333b0 ---------A   01400  IF W=1 THEN 1160
    0x585646a33430 ---------A T 01410  GOSUB 1670
    0x585646a33680 ---------A   01420  IF W=1 THEN 1160
    0x585646a33700 ---------A   01430  GOTO 1390
    0x585646a3a170 ---------A   01440  END
    0x585646a339f0 ---------B G 01450  Q=N
    0x585646a33c40 ---------B   01460  IF M=1 THEN 1480
    0x585646a33f80 ---------B   01470  Q=Q-1
    0x585646a341d0 ---------B T 01480  IF M=1 THEN 1530
    0x585646a34450 ---------B   01490  IF N>A THEN 1570
    0x585646a34690 ---------B   01500  W=1
    0x585646a349e0 ---------B   01510  PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x585646a3ab20 ---------B   01520  GOTO 01660
    0x585646a34cc0 ---------B T 01530  IF N>B THEN 1570
    0x585646a34f00 ---------B   01540  W=1
    0x585646a35250 ---------B   01550  PRINT "COMPUTER TAKES";N;"AND WINS."
    0x585646a40540 ---------B   01560  GOTO 01660
    0x585646a359f0 ---------B T 01570  P=Q-C*INT(Q/C)
    0x585646a35c60 ---------B   01580  IF P>=A THEN 1600
    0x585646a35ea0 ---------B   01590  P=A
    0x585646a36110 ---------B T 01600  IF P<=B THEN 1620
    0x585646a36350 ---------B   01610  P=B
    0x585646a366c0 ---------B T 01620  N=N-P
    0x585646a36b10 ---------B   01630  PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x585646a36d30 ---------B   01640  W=0
    0x585646a404f0 ---------B   01650  GOTO 01660
    0x585646a41ef0 ---------B T 01660  RETURN
    0x585646a36f40 ---------C G 01670  PRINT "YOUR MOVE ";
    0x585646a370a0 ---------C T 01680  INPUT P
    0x585646a37330 ---------C   01690  IF P<>0 THEN 1730
    0x585646a378c0 ---------C   01700  PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x585646a37ae0 ---------C   01710  W=1
    0x585646a404a0 ---------C   01720  GOTO 01940
    0x585646a37ea0 ---------C T 01730  IF P<>INT(P) THEN 1780
    0x585646a38120 ---------C   01740  IF P>=A THEN 1770
    0x585646a383a0 ---------C   01750  IF P=N THEN 1820
    0x585646a38420 ---------C   01760  GOTO 1780
    0x585646a386a0 ---------C T 01770  IF P<=B THEN 1800
    0x585646a38830 ---------C T 01780  PRINT "ILLEGAL MOVE, REENTER IT ";
    0x585646a388b0 ---------C   01790  GOTO 1680
    0x585646a38c00 ---------C T 01800  N=N-P
    0x585646a38e50 ---------C   01810  IF N<>0 THEN 1890
    0x585646a390c0 ---------C T 01820  IF M=1 THEN 1860
    0x585646a39220 ---------C   01830  PRINT "TOUGH LUCK, YOU LOSE."
    0x585646a39440 ---------C   01840  W=1
    0x585646a40450 ---------C   01850  GOTO 01940
    0x585646a39610 ---------C T 01860  PRINT "CONGRATULATIONS, YOU WIN."
    0x585646a39830 ---------C   01870  W=1
    0x585646a40400 ---------C   01880  GOTO 01940
    0x585646a39ae0 ---------C T 01890  IF N>=0 THEN 1920
    0x585646a39e40 ---------C   01900  N=N+P
    0x585646a39eb0 ---------C   01910  GOTO 1780
    0x585646a3a0c0 ---------C T 01920  W=0
    0x585646a3c110 ---------C   01930  GOTO 01940
    0x585646a41fd0 ---------C T 01940  RETURN
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
void Routine_01450();
void Routine_01670();

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

void Routine_01450(){
    // 01450 Q=N
    Q_int = N_int;
    // 01460 IF M=1 THEN 1480
    if(M_int==1)goto Lbl_01480;
    // 01470 Q=Q-1
    Q_int = Q_int-1;

  Lbl_01480:
    // 01480 IF M=1 THEN 1530
    if(M_int==1)goto Lbl_01530;
    // 01490 IF N>A THEN 1570
    if(N_int>A_int)goto Lbl_01570;
    // 01500 W=1
    W_int = 1;
    // 01510 PRINT "COMPUTER TAKES";N;"AND LOSES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER TAKES"); b2c_INT(buf,N_int);strcat(buf,"AND LOSES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01520 GOTO 01660
    goto Lbl_01660;

  Lbl_01530:
    // 01530 IF N>B THEN 1570
    if(N_int>B_int)goto Lbl_01570;
    // 01540 W=1
    W_int = 1;
    // 01550 PRINT "COMPUTER TAKES";N;"AND WINS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER TAKES"); b2c_INT(buf,N_int);strcat(buf,"AND WINS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01560 GOTO 01660
    goto Lbl_01660;

  Lbl_01570:
    // 01570 P=Q-C*INT(Q/C)
    P_int = Q_int-C_int*INT(Q_int/C_int);
    // 01580 IF P>=A THEN 1600
    if(P_int>=A_int)goto Lbl_01600;
    // 01590 P=A
    P_int = A_int;

  Lbl_01600:
    // 01600 IF P<=B THEN 1620
    if(P_int<=B_int)goto Lbl_01620;
    // 01610 P=B
    P_int = B_int;

  Lbl_01620:
    // 01620 N=N-P
    N_int = N_int-P_int;
    // 01630 PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER TAKES"); b2c_INT(buf,P_int);strcat(buf,"AND LEAVES"); b2c_INT(buf,N_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01640 W=0
    W_int = 0;
    // 01650 GOTO 01660
    goto Lbl_01660;

  Lbl_01660:
    // 01660 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01670(){
    // 01670 PRINT "YOUR MOVE ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR MOVE ");fputs(buf,fh); };

  Lbl_01680:
    // 01680 INPUT P
    // Start of Basic INPUT statement 01680
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
    }; // End of Basic INPUT statement 01680
    // 01690 IF P<>0 THEN 1730
    if(P_int!=0)goto Lbl_01730;
    // 01700 PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01710 W=1
    W_int = 1;
    // 01720 GOTO 01940
    goto Lbl_01940;

  Lbl_01730:
    // 01730 IF P<>INT(P) THEN 1780
    if(P_int!=INT(P_int))goto Lbl_01780;
    // 01740 IF P>=A THEN 1770
    if(P_int>=A_int)goto Lbl_01770;
    // 01750 IF P=N THEN 1820
    if(P_int==N_int)goto Lbl_01820;
    // 01760 GOTO 1780
    goto Lbl_01780;

  Lbl_01770:
    // 01770 IF P<=B THEN 1800
    if(P_int<=B_int)goto Lbl_01800;

  Lbl_01780:
    // 01780 PRINT "ILLEGAL MOVE, REENTER IT ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL MOVE, REENTER IT ");fputs(buf,fh); };
    // 01790 GOTO 1680
    goto Lbl_01680;

  Lbl_01800:
    // 01800 N=N-P
    N_int = N_int-P_int;
    // 01810 IF N<>0 THEN 1890
    if(N_int!=0)goto Lbl_01890;

  Lbl_01820:
    // 01820 IF M=1 THEN 1860
    if(M_int==1)goto Lbl_01860;
    // 01830 PRINT "TOUGH LUCK, YOU LOSE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOUGH LUCK, YOU LOSE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01840 W=1
    W_int = 1;
    // 01850 GOTO 01940
    goto Lbl_01940;

  Lbl_01860:
    // 01860 PRINT "CONGRATULATIONS, YOU WIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS, YOU WIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01870 W=1
    W_int = 1;
    // 01880 GOTO 01940
    goto Lbl_01940;

  Lbl_01890:
    // 01890 IF N>=0 THEN 1920
    if(N_int>=0)goto Lbl_01920;
    // 01900 N=N+P
    N_int = N_int+P_int;
    // 01910 GOTO 1780
    goto Lbl_01780;

  Lbl_01920:
    // 01920 W=0
    W_int = 0;
    // 01930 GOTO 01940
    goto Lbl_01940;

  Lbl_01940:
    // 01940 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"BATNUM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"BATNUM");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "THIS PROGRAM IS A 'BATTLE OF NUMBERS' GAME, WHERE THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS PROGRAM IS A 'BATTLE OF NUMBERS' GAME, WHERE THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "COMPUTER IS YOUR OPPONENT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER IS YOUR OPPONENT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "THE GAME STARTS WITH AN ASSUMED PILE OF OBJECTS. YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE GAME STARTS WITH AN ASSUMED PILE OF OBJECTS. YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "AND YOUR OPPONENT ALTERNATELY REMOVE OBJECTS FROM THE PILE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND YOUR OPPONENT ALTERNATELY REMOVE OBJECTS FROM THE PILE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "WINNING IS DEFINED IN ADVANCE AS TAKING THE LAST OBJECT OR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WINNING IS DEFINED IN ADVANCE AS TAKING THE LAST OBJECT OR");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "NOT. YOU CAN ALSO SPECIFY SOME OTHER BEGINNING CONDITIONS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOT. YOU CAN ALSO SPECIFY SOME OTHER BEGINNING CONDITIONS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "DON'T USE ZERO, HOWEVER, IN PLAYING THE GAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DON'T USE ZERO, HOWEVER, IN PLAYING THE GAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "ENTER A NEGATIVE NUMBER FOR NEW PILE SIZE TO STOP PLAYING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER A NEGATIVE NUMBER FOR NEW PILE SIZE TO STOP PLAYING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 GOTO 1190
    goto Lbl_01190;

  Lbl_01160:
    // 01160 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 01170 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01180 NEXT I
        int dummy_1180=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_01190:
    // 01190 INPUT "ENTER PILE SIZE";N
    // Start of Basic INPUT statement 01190
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
    }; // End of Basic INPUT statement 01190
    // 01200 IF N>=1 THEN 1220
    if(N_int>=1)goto Lbl_01220;
    // 01210 GOTO 1190
    goto Lbl_01190;

  Lbl_01220:
    // 01220 IF N<>INT(N) THEN 1160
    if(N_int!=INT(N_int))goto Lbl_01160;
    // 01230 IF N<1 THEN 1160
    if(N_int<1)goto Lbl_01160;

  Lbl_01240:
    // 01240 INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    // Start of Basic INPUT statement 01240
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
    }; // End of Basic INPUT statement 01240
    // 01250 IF M=1 THEN 1270
    if(M_int==1)goto Lbl_01270;
    // 01260 IF M<>2 THEN 1240
    if(M_int!=2)goto Lbl_01240;

  Lbl_01270:
    // 01270 INPUT "ENTER MIN AND MAX ";A,B
    // Start of Basic INPUT statement 01270
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
    }; // End of Basic INPUT statement 01270
    // 01280 IF A>B THEN 1270
    if(A_int>B_int)goto Lbl_01270;
    // 01290 IF A<1 THEN 1270
    if(A_int<1)goto Lbl_01270;
    // 01300 IF A<>INT(A) THEN 1270
    if(A_int!=INT(A_int))goto Lbl_01270;
    // 01310 IF B<>INT(B) THEN 1270
    if(B_int!=INT(B_int))goto Lbl_01270;

  Lbl_01320:
    // 01320 INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    // Start of Basic INPUT statement 01320
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
    }; // End of Basic INPUT statement 01320
    // 01330 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01350 IF S=1 THEN 1370
    if(S_int==1)goto Lbl_01370;
    // 01360 IF S<>2 THEN 1320
    if(S_int!=2)goto Lbl_01320;

  Lbl_01370:
    // 01370 C=A+B
    C_int = A_int+B_int;
    // 01380 IF S=2 THEN 1410
    if(S_int==2)goto Lbl_01410;

  Lbl_01390:
    // 01390 GOSUB 1450
    Routine_01450();
    // 01400 IF W=1 THEN 1160
    if(W_int==1)goto Lbl_01160;

  Lbl_01410:
    // 01410 GOSUB 1670
    Routine_01670();
    // 01420 IF W=1 THEN 1160
    if(W_int==1)goto Lbl_01160;
    // 01430 GOTO 1390
    goto Lbl_01390;
    // 01440 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
