/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/nim.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e4a60fcb6d0 ---------A   00100  PRINT TAB(33);"NIM"
    0x5e4a60fcb670 ---------A   00110  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e4a60fbc2b0 ---------A   00120  PRINT:PRINT:PRINT
    0x5e4a60fccb60 ---------A   00210  DIM A(100),B(100,10),D(2)
    0x5e4a60fce160 ---------A   00220  PRINT "THIS IS THE GAME OF NIM."
    0x5e4a60fcc720 ---------A   00230  PRINT "DO YOU WANT INSTRUCTIONS";
    0x5e4a60fd38a0 ---------A T 00240  INPUT Z$
    0x5e4a60fd3a60 ---------A   00250  IF Z$="NO" THEN 440
    0x5e4a60fd3cc0 ---------A   00260  IF Z$="no" THEN 440
    0x5e4a60fd3f20 ---------A   00270  IF Z$="YES" THEN 310
    0x5e4a60fd41b0 ---------A   00280  IF Z$="yes" THEN 310
    0x5e4a60fd4320 ---------A   00290  PRINT "PLEASE ANSWER YES OR NO"
    0x5e4a60fcddb0 ---------A   00300  GOTO 240
    0x5e4a60fd4480 ---------A T 00310  PRINT "THE GAME IS PLAYED WITH A NUMBER OF PILES OF OBJECTS."
    0x5e4a60fd45f0 ---------A   00320  PRINT "ANY NUMBER OF OBJECTS ARE REMOVED FROM ONE PILE BY YOU AND"
    0x5e4a60fd47a0 ---------A   00330  PRINT "THE MACHINE ALTERNATELY.  ON YOUR TURN, YOU MAY TAKE"
    0x5e4a60fd4950 ---------A   00340  PRINT "ALL THE OBJECTS THAT REMAIN IN ANY PILE, BUT YOU MUST"
    0x5e4a60fd4b10 ---------A   00350  PRINT "TAKE AT LEAST ONE OBJECT, AND YOU MAY TAKE OBJECTS FROM"
    0x5e4a60fd4cd0 ---------A   00360  PRINT "ONLY ONE PILE ON A SINGLE TURN.  YOU MUST SPECIFY WHETHER"
    0x5e4a60fd4e90 ---------A   00370  PRINT "WINNING IS DEFINED AS TAKING OR NOT TAKING THE LAST OBJECT,"
    0x5e4a60fd5050 ---------A   00380  PRINT "THE NUMBER OF PILES IN THE GAME, AND HOW MANY OBJECTS ARE"
    0x5e4a60fd51f0 ---------A   00390  PRINT "ORIGINALLY IN EACH PILE.  EACH PILE MAY CONTAIN A"
    0x5e4a60fd5390 ---------A   00400  PRINT "DIFFERENT NUMBER OF OBJECTS."
    0x5e4a60fd5550 ---------A   00410  PRINT "THE MACHINE WILL SHOW ITS MOVE BY LISTING EACH PILE AND THE"
    0x5e4a60fd56e0 ---------A   00420  PRINT "NUMBER OF OBJECTS REMAINING IN THE PILES AFTER  EACH OF ITS"
    0x5e4a60fd5840 ---------A   00430  PRINT "MOVES."
    0x5e4a60fd58f0 ---------A T 00440  PRINT
    0x5e4a60fd5a90 ---------A T 00450  PRINT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST";
    0x5e4a60fd5cb0 ---------A   00460  INPUT W
    0x5e4a60fd5f10 ---------A   00470  IF W=1 THEN 490
    0x5e4a60fd6180 ---------A   00480  IF W<>2 THEN 450
    0x5e4a60fd6300 ---------A T 00490  PRINT "ENTER NUMBER OF PILES";
    0x5e4a60fd6520 ---------A   00500  INPUT N
    0x5e4a60fd6990 ---------A   00510  IF N>100 THEN 490
    0x5e4a60fd6c00 ---------A   00520  IF N<1 THEN 490
    0x5e4a60fd6f70 ---------A   00530  IF N<>INT(N) THEN 490
    0x5e4a60fd70d0 ---------A   00540  PRINT "ENTER PILE SIZES"
    0x5e4a60fd7490 ---------A   00550  FOR I=1 TO N
    0x5e4a60fd7610 ---------A T 00560  PRINT I;
    0x5e4a60fd7860 ---------A   00570  INPUT A(I)
    0x5e4a60fd7ba0 ---------A   00580  IF A(I)>2000 THEN 560
    0x5e4a60fd7ef0 ---------A   00590  IF A(I)<1 THEN 560
    0x5e4a60fd8410 ---------A   00600  IF A(I)<>INT(A(I)) THEN 560
    0x5e4a60fd8550 ---------A   00610  NEXT I
    0x5e4a60fd8700 ---------A   00620  PRINT "DO YOU WANT TO MOVE FIRST";
    0x5e4a60fd8930 ---------A T 00630  INPUT Q9$
    0x5e4a60fd8bc0 ---------A   00640  IF Q9$="YES" THEN 1450
    0x5e4a60fd8e50 ---------A   00650  IF Q9$="yes" THEN 1450
    0x5e4a60fd90e0 ---------A   00660  IF Q9$="NO" THEN 700
    0x5e4a60fd9370 ---------A   00670  IF Q9$="no" THEN 700
    0x5e4a60fd94e0 ---------A   00680  PRINT "PLEASE ANSWER YES OR NO."
    0x5e4a60fd9560 ---------A   00690  GOTO 630
    0x5e4a60fd97b0 ---------A T 00700  IF W=1 THEN 940
    0x5e4a60fd9a90 ---------A   00710  LET C=0
    0x5e4a60fd9d80 ---------A   00720  FOR I=1 TO N
    0x5e4a60fda0c0 ---------A   00730  IF A(I)=0 THEN 770
    0x5e4a60fda400 ---------A   00740  LET C=C+1
    0x5e4a60fda650 ---------A   00750  IF C=3 THEN 840
    0x5e4a60fda970 ---------A   00760  LET D(C)=I
    0x5e4a60fdaaa0 ---------A T 00770  NEXT I
    0x5e4a60fdad20 ---------A   00780  IF C=2 THEN 920
    0x5e4a60fdb130 ---------A   00790  IF A(D(1))>1 THEN 820
    0x5e4a60fdb290 ---------A T 00800  PRINT "MACHINE LOSES"
    0x5e4a60fdb320 ---------A   00810  GOTO 1640
    0x5e4a60fdb470 ---------A T 00820  PRINT "MACHINE WINS"
    0x5e4a60fdb900 ---------A   00830  GOTO 1640
    0x5e4a60fdbb10 ---------A T 00840  LET C=0
    0x5e4a60fdbe00 ---------A   00850  FOR I=1 TO N
    0x5e4a60fdc140 ---------A   00860  IF A(I)>1 THEN 940
    0x5e4a60fdc480 ---------A   00870  IF A(I)=0 THEN 890
    0x5e4a60fdc7c0 ---------A   00880  LET C=C+1
    0x5e4a60fdc8f0 ---------A T 00890  NEXT I
    0x5e4a60fdce70 ---------A   00900  IF C/2<>INT(C/2) THEN 800
    0x5e4a60fdcf00 ---------A   00910  GOTO 940
    0x5e4a60fdd300 ---------A T 00920  IF A(D(1))=1 THEN 820
    0x5e4a60fdd700 ---------A   00930  IF A(D(2))=1 THEN 820
    0x5e4a60fdda00 ---------A T 00940  FOR I=1 TO N
    0x5e4a60fddde0 ---------A   00950  LET E=A(I)
    0x5e4a60fde170 ---------A   00960  FOR J=0 TO 10
    0x5e4a60fde580 ---------A   00970  LET F=E/2
    0x5e4a60fdecb0 ---------A   00980  LET B(I,J)=2*(F-INT(F))
    0x5e4a60fdefc0 ---------A   00990  LET E=INT(F)
    0x5e4a60fdf0f0 ---------A   01000  NEXT J
    0x5e4a60fdf240 ---------A   01010  NEXT I
    0x5e4a60fdf600 ---------A   01020  FOR J=10 TO 0 STEP -1
    0x5e4a60fdf820 ---------A   01030  LET C=0
    0x5e4a60fdfaf0 ---------A   01040  LET H=0
    0x5e4a60fdfdf0 ---------A   01050  FOR I=1 TO N
    0x5e4a60fe0210 ---------A   01060  IF B(I,J)=0 THEN 1110
    0x5e4a60fe0560 ---------A   01070  LET C=C+1
    0x5e4a60fe08b0 ---------A   01080  IF A(I)<=H THEN 1110
    0x5e4a60fe0bd0 ---------A   01090  LET H=A(I)
    0x5e4a60fe0ec0 ---------A   01100  LET G=I
    0x5e4a60fe0ff0 ---------A T 01110  NEXT I
    0x5e4a60fe1570 ---------A   01120  IF C/2<>INT(C/2) THEN 1190
    0x5e4a60fe16b0 ---------A   01130  NEXT J
    0x5e4a60fe1ce0 ---------A T 01140  LET E=INT(N*RND(1)+1)
    0x5e4a60fe2020 ---------A   01150  IF A(E)=0 THEN 1140
    0x5e4a60fe2700 ---------A   01160  LET F=INT(A(E)*RND(1)+1)
    0x5e4a60fe2c10 ---------A   01170  LET A(E)=A(E)-F
    0x5e4a60fe2c80 ---------A   01180  GOTO 1380
    0x5e4a60fe2f70 ---------A T 01190  LET A(G)=0
    0x5e4a60fe3240 ---------A   01200  FOR J=0 TO 10
    0x5e4a60fe3620 ---------A   01210  LET B(G,J)=0
    0x5e4a60fe3830 ---------A   01220  LET C=0
    0x5e4a60fe3b30 ---------A   01230  FOR I=1 TO N
    0x5e4a60fe3f50 ---------A   01240  IF B(I,J)=0 THEN 1260
    0x5e4a60fe4290 ---------A   01250  LET C=C+1
    0x5e4a60fe43c0 ---------A T 01260  NEXT I
    0x5e4a60fe5060 ---------A   01270  LET A(G)=A(G)+2*(C/2-INT(C/2))*2^J
    0x5e4a60fe5190 ---------A   01280  NEXT J
    0x5e4a60fe5400 ---------A   01290  IF W=1 THEN 1380
    0x5e4a60fe5620 ---------A   01300  LET C=0
    0x5e4a60fe5920 ---------A   01310  FOR I=1 TO N
    0x5e4a60fe5c70 ---------A   01320  IF A(I)>1 THEN 1380
    0x5e4a60fe5fb0 ---------A   01330  IF A(I)=0 THEN 1350
    0x5e4a60fe62f0 ---------A   01340  LET C=C+1
    0x5e4a60fe6420 ---------A T 01350  NEXT I
    0x5e4a60fe69a0 ---------A   01360  IF C/2<>INT(C/2) THEN 1380
    0x5e4a60fe6ea0 ---------A   01370  LET A(G)=1-A(G)
    0x5e4a60fe6ff0 ---------A T 01380  PRINT "PILE  SIZE"
    0x5e4a60fe72f0 ---------A   01390  FOR I=1 TO N
    0x5e4a60fe7630 ---------A   01400  PRINT I;A(I)
    0x5e4a60fe7770 ---------A   01410  NEXT I
    0x5e4a60fe79e0 ---------A   01420  IF W=2 THEN 1450
    0x5e4a60fe7a60 ---------A   01430  GOSUB 1570
    0x5e4a60fe7d90 ---------A   01440  IF Z=1 THEN 820
    0x5e4a60fe7f30 ---------A T 01450  PRINT "YOUR MOVE - PILE, NUMBER TO BE REMOVED";
    0x5e4a60fe82f0 ---------A   01460  INPUT X,Y
    0x5e4a60fe8d80 ---------A   01470  IF X>N THEN 1450
    0x5e4a60fe8ff0 ---------A   01480  IF X<1 THEN 1450
    0x5e4a60fe9360 ---------A   01490  IF X<>INT(X) THEN 1450
    0x5e4a60fe96c0 ---------A   01500  IF Y>A(X) THEN 1450
    0x5e4a60fe9930 ---------A   01510  IF Y<1 THEN 1450
    0x5e4a60fe9c90 ---------A   01520  IF Y<>INT(Y) THEN 1450
    0x5e4a60fea1b0 ---------A   01530  LET A(X)=A(X)-Y
    0x5e4a60fea220 ---------A   01540  GOSUB 1570
    0x5e4a60fea470 ---------A   01550  IF Z=1 THEN 800
    0x5e4a60fea4f0 ---------A   01560  GOTO 700
    0x5e4a60fea700 ---------B G 01570  LET Z=0
    0x5e4a60feaa00 ---------B   01580  FOR I=1 TO N
    0x5e4a60fead40 ---------B   01590  IF A(I)=0 THEN 1610
    0x5e4a60feada0 ---------B   01600  RETURN
    0x5e4a60feaee0 ---------B T 01610  NEXT I
    0x5e4a60feb110 ---------B   01620  LET Z=1
    0x5e4a60feb160 ---------B   01630  RETURN
    0x5e4a60feb310 ---------A T 01640  PRINT "do you want to play another game";
    0x5e4a60feb480 ---------A T 01650  INPUT Q9$
    0x5e4a60feb6e0 ---------A   01660  IF Q9$="YES" GOTO 1720
    0x5e4a60feb970 ---------A   01670  IF Q9$="yes" GOTO 1720
    0x5e4a60febc00 ---------A   01680  IF Q9$="NO" GOTO 1730
    0x5e4a60febe90 ---------A   01690  IF Q9$="no" GOTO 1730
    0x5e4a60fec020 ---------A   01700  PRINT "PLEASE.  YES OR NO."
    0x5e4a60fec0a0 ---------A   01710  GOTO 1650 
    0x5e4a60fec110 ---------A T 01720  GOTO 440
    0x5e4a60fec160 ---------A T 01730  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00240      00300T
     00310      00270T, 00280T
     00440      00250T, 00260T, 01720T
     00450      00480T
     00490      00470T, 00510T, 00520T, 00530T
     00560      00580T, 00590T, 00600T
     00630      00690T
     00700      00660T, 00670T, 01560T
     00770      00730T
     00800      00900T, 01550T
     00820      00790T, 00920T, 00930T, 01440T
     00840      00750T
     00890      00870T
     00920      00780T
     00940      00700T, 00860T, 00910T
     01110      01060T, 01080T
     01140      01150T
     01190      01120T
     01260      01240T
     01350      01330T
     01380      01180T, 01290T, 01320T, 01360T
     01450      00640T, 00650T, 01420T, 01470T, 01480T, 01490T, 01500T, 01510T, 
                01520T
     01570      01430G, 01540G
     01610      01590T
     01640      00810T, 00830T
     01650      01710T
     01720      01660T, 01670T
     01730      01680T, 01690T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5e4a60fcb6d0 (00100)   0x5e4a60fcb6d0 (00100)   0x5e4a60fec160 (01730)   0x5e4a60fec160 (01730)   
   B) 0x5e4a60fea700 (01570)   0x5e4a60fea700 (01570)   0x5e4a60feada0 (01600)   0x5e4a60feb160 (01630)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/nim.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e4a60fcb6d0 ---------A   00100  PRINT TAB(33);"NIM"
    0x5e4a60fcb670 ---------A   00110  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e4a60fcc2d0 ----------   00120  PRINT
    0x5e4a60fcc910 ----------        a PRINT
    0x5e4a60fbc2b0 ---------A        b PRINT
    0x5e4a60fccb60 ---------A   00210  DIM A(100),B(100,10),D(2)
    0x5e4a60fce160 ---------A   00220  PRINT "THIS IS THE GAME OF NIM."
    0x5e4a60fcc720 ---------A   00230  PRINT "DO YOU WANT INSTRUCTIONS";
    0x5e4a60fd38a0 ---------A T 00240  INPUT Z$
    0x5e4a60fd3a60 ---------A   00250  IF Z$="NO" THEN 440
    0x5e4a60fd3cc0 ---------A   00260  IF Z$="no" THEN 440
    0x5e4a60fd3f20 ---------A   00270  IF Z$="YES" THEN 310
    0x5e4a60fd41b0 ---------A   00280  IF Z$="yes" THEN 310
    0x5e4a60fd4320 ---------A   00290  PRINT "PLEASE ANSWER YES OR NO"
    0x5e4a60fcddb0 ---------A   00300  GOTO 240
    0x5e4a60fd4480 ---------A T 00310  PRINT "THE GAME IS PLAYED WITH A NUMBER OF PILES OF OBJECTS."
    0x5e4a60fd45f0 ---------A   00320  PRINT "ANY NUMBER OF OBJECTS ARE REMOVED FROM ONE PILE BY YOU AND"
    0x5e4a60fd47a0 ---------A   00330  PRINT "THE MACHINE ALTERNATELY.  ON YOUR TURN, YOU MAY TAKE"
    0x5e4a60fd4950 ---------A   00340  PRINT "ALL THE OBJECTS THAT REMAIN IN ANY PILE, BUT YOU MUST"
    0x5e4a60fd4b10 ---------A   00350  PRINT "TAKE AT LEAST ONE OBJECT, AND YOU MAY TAKE OBJECTS FROM"
    0x5e4a60fd4cd0 ---------A   00360  PRINT "ONLY ONE PILE ON A SINGLE TURN.  YOU MUST SPECIFY WHETHER"
    0x5e4a60fd4e90 ---------A   00370  PRINT "WINNING IS DEFINED AS TAKING OR NOT TAKING THE LAST OBJECT,"
    0x5e4a60fd5050 ---------A   00380  PRINT "THE NUMBER OF PILES IN THE GAME, AND HOW MANY OBJECTS ARE"
    0x5e4a60fd51f0 ---------A   00390  PRINT "ORIGINALLY IN EACH PILE.  EACH PILE MAY CONTAIN A"
    0x5e4a60fd5390 ---------A   00400  PRINT "DIFFERENT NUMBER OF OBJECTS."
    0x5e4a60fd5550 ---------A   00410  PRINT "THE MACHINE WILL SHOW ITS MOVE BY LISTING EACH PILE AND THE"
    0x5e4a60fd56e0 ---------A   00420  PRINT "NUMBER OF OBJECTS REMAINING IN THE PILES AFTER  EACH OF ITS"
    0x5e4a60fd5840 ---------A   00430  PRINT "MOVES."
    0x5e4a60fd58f0 ---------A T 00440  PRINT
    0x5e4a60fd5a90 ---------A T 00450  PRINT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST";
    0x5e4a60fd5cb0 ---------A   00460  INPUT W
    0x5e4a60fd5f10 ---------A   00470  IF W=1 THEN 490
    0x5e4a60fd6180 ---------A   00480  IF W<>2 THEN 450
    0x5e4a60fd6300 ---------A T 00490  PRINT "ENTER NUMBER OF PILES";
    0x5e4a60fd6520 ---------A   00500  INPUT N
    0x5e4a60fd6990 ---------A   00510  IF N>100 THEN 490
    0x5e4a60fd6c00 ---------A   00520  IF N<1 THEN 490
    0x5e4a60fd6f70 ---------A   00530  IF N<>INT(N) THEN 490
    0x5e4a60fd70d0 ---------A   00540  PRINT "ENTER PILE SIZES"
    0x5e4a60fd7490 ---------A   00550  FOR I=1 TO N
    0x5e4a60fd7610 ---------A T 00560  PRINT I;
    0x5e4a60fd7860 ---------A   00570  INPUT A(I)
    0x5e4a60fd7ba0 ---------A   00580  IF A(I)>2000 THEN 560
    0x5e4a60fd7ef0 ---------A   00590  IF A(I)<1 THEN 560
    0x5e4a60fd8410 ---------A   00600  IF A(I)<>INT(A(I)) THEN 560
    0x5e4a60fd8550 ---------A   00610  NEXT I
    0x5e4a60fd8700 ---------A   00620  PRINT "DO YOU WANT TO MOVE FIRST";
    0x5e4a60fd8930 ---------A T 00630  INPUT Q9$
    0x5e4a60fd8bc0 ---------A   00640  IF Q9$="YES" THEN 1450
    0x5e4a60fd8e50 ---------A   00650  IF Q9$="yes" THEN 1450
    0x5e4a60fd90e0 ---------A   00660  IF Q9$="NO" THEN 700
    0x5e4a60fd9370 ---------A   00670  IF Q9$="no" THEN 700
    0x5e4a60fd94e0 ---------A   00680  PRINT "PLEASE ANSWER YES OR NO."
    0x5e4a60fd9560 ---------A   00690  GOTO 630
    0x5e4a60fd97b0 ---------A T 00700  IF W=1 THEN 940
    0x5e4a60fd9a90 ---------A   00710  LET C=0
    0x5e4a60fd9d80 ---------A   00720  FOR I=1 TO N
    0x5e4a60fda0c0 ---------A   00730  IF A(I)=0 THEN 770
    0x5e4a60fda400 ---------A   00740  LET C=C+1
    0x5e4a60fda650 ---------A   00750  IF C=3 THEN 840
    0x5e4a60fda970 ---------A   00760  LET D(C)=I
    0x5e4a60fdaaa0 ---------A T 00770  NEXT I
    0x5e4a60fdad20 ---------A   00780  IF C=2 THEN 920
    0x5e4a60fdb130 ---------A   00790  IF A(D(1))>1 THEN 820
    0x5e4a60fdb290 ---------A T 00800  PRINT "MACHINE LOSES"
    0x5e4a60fdb320 ---------A   00810  GOTO 1640
    0x5e4a60fdb470 ---------A T 00820  PRINT "MACHINE WINS"
    0x5e4a60fdb900 ---------A   00830  GOTO 1640
    0x5e4a60fdbb10 ---------A T 00840  LET C=0
    0x5e4a60fdbe00 ---------A   00850  FOR I=1 TO N
    0x5e4a60fdc140 ---------A   00860  IF A(I)>1 THEN 940
    0x5e4a60fdc480 ---------A   00870  IF A(I)=0 THEN 890
    0x5e4a60fdc7c0 ---------A   00880  LET C=C+1
    0x5e4a60fdc8f0 ---------A T 00890  NEXT I
    0x5e4a60fdce70 ---------A   00900  IF C/2<>INT(C/2) THEN 800
    0x5e4a60fdcf00 ---------A   00910  GOTO 940
    0x5e4a60fdd300 ---------A T 00920  IF A(D(1))=1 THEN 820
    0x5e4a60fdd700 ---------A   00930  IF A(D(2))=1 THEN 820
    0x5e4a60fdda00 ---------A T 00940  FOR I=1 TO N
    0x5e4a60fddde0 ---------A   00950  LET E=A(I)
    0x5e4a60fde170 ---------A   00960  FOR J=0 TO 10
    0x5e4a60fde580 ---------A   00970  LET F=E/2
    0x5e4a60fdecb0 ---------A   00980  LET B(I,J)=2*(F-INT(F))
    0x5e4a60fdefc0 ---------A   00990  LET E=INT(F)
    0x5e4a60fdf0f0 ---------A   01000  NEXT J
    0x5e4a60fdf240 ---------A   01010  NEXT I
    0x5e4a60fdf600 ---------A   01020  FOR J=10 TO 0 STEP -1
    0x5e4a60fdf820 ---------A   01030  LET C=0
    0x5e4a60fdfaf0 ---------A   01040  LET H=0
    0x5e4a60fdfdf0 ---------A   01050  FOR I=1 TO N
    0x5e4a60fe0210 ---------A   01060  IF B(I,J)=0 THEN 1110
    0x5e4a60fe0560 ---------A   01070  LET C=C+1
    0x5e4a60fe08b0 ---------A   01080  IF A(I)<=H THEN 1110
    0x5e4a60fe0bd0 ---------A   01090  LET H=A(I)
    0x5e4a60fe0ec0 ---------A   01100  LET G=I
    0x5e4a60fe0ff0 ---------A T 01110  NEXT I
    0x5e4a60fe1570 ---------A   01120  IF C/2<>INT(C/2) THEN 1190
    0x5e4a60fe16b0 ---------A   01130  NEXT J
    0x5e4a60fe1ce0 ---------A T 01140  LET E=INT(N*RND(1)+1)
    0x5e4a60fe2020 ---------A   01150  IF A(E)=0 THEN 1140
    0x5e4a60fe2700 ---------A   01160  LET F=INT(A(E)*RND(1)+1)
    0x5e4a60fe2c10 ---------A   01170  LET A(E)=A(E)-F
    0x5e4a60fe2c80 ---------A   01180  GOTO 1380
    0x5e4a60fe2f70 ---------A T 01190  LET A(G)=0
    0x5e4a60fe3240 ---------A   01200  FOR J=0 TO 10
    0x5e4a60fe3620 ---------A   01210  LET B(G,J)=0
    0x5e4a60fe3830 ---------A   01220  LET C=0
    0x5e4a60fe3b30 ---------A   01230  FOR I=1 TO N
    0x5e4a60fe3f50 ---------A   01240  IF B(I,J)=0 THEN 1260
    0x5e4a60fe4290 ---------A   01250  LET C=C+1
    0x5e4a60fe43c0 ---------A T 01260  NEXT I
    0x5e4a60fe5060 ---------A   01270  LET A(G)=A(G)+2*(C/2-INT(C/2))*2^J
    0x5e4a60fe5190 ---------A   01280  NEXT J
    0x5e4a60fe5400 ---------A   01290  IF W=1 THEN 1380
    0x5e4a60fe5620 ---------A   01300  LET C=0
    0x5e4a60fe5920 ---------A   01310  FOR I=1 TO N
    0x5e4a60fe5c70 ---------A   01320  IF A(I)>1 THEN 1380
    0x5e4a60fe5fb0 ---------A   01330  IF A(I)=0 THEN 1350
    0x5e4a60fe62f0 ---------A   01340  LET C=C+1
    0x5e4a60fe6420 ---------A T 01350  NEXT I
    0x5e4a60fe69a0 ---------A   01360  IF C/2<>INT(C/2) THEN 1380
    0x5e4a60fe6ea0 ---------A   01370  LET A(G)=1-A(G)
    0x5e4a60fe6ff0 ---------A T 01380  PRINT "PILE  SIZE"
    0x5e4a60fe72f0 ---------A   01390  FOR I=1 TO N
    0x5e4a60fe7630 ---------A   01400  PRINT I;A(I)
    0x5e4a60fe7770 ---------A   01410  NEXT I
    0x5e4a60fe79e0 ---------A   01420  IF W=2 THEN 1450
    0x5e4a60fe7a60 ---------A   01430  GOSUB 1570
    0x5e4a60fe7d90 ---------A   01440  IF Z=1 THEN 820
    0x5e4a60fe7f30 ---------A T 01450  PRINT "YOUR MOVE - PILE, NUMBER TO BE REMOVED";
    0x5e4a60fe82f0 ---------A   01460  INPUT X,Y
    0x5e4a60fe8d80 ---------A   01470  IF X>N THEN 1450
    0x5e4a60fe8ff0 ---------A   01480  IF X<1 THEN 1450
    0x5e4a60fe9360 ---------A   01490  IF X<>INT(X) THEN 1450
    0x5e4a60fe96c0 ---------A   01500  IF Y>A(X) THEN 1450
    0x5e4a60fe9930 ---------A   01510  IF Y<1 THEN 1450
    0x5e4a60fe9c90 ---------A   01520  IF Y<>INT(Y) THEN 1450
    0x5e4a60fea1b0 ---------A   01530  LET A(X)=A(X)-Y
    0x5e4a60fea220 ---------A   01540  GOSUB 1570
    0x5e4a60fea470 ---------A   01550  IF Z=1 THEN 800
    0x5e4a60fea4f0 ---------A   01560  GOTO 700
    0x5e4a60fea700 ---------B G 01570  LET Z=0
    0x5e4a60feaa00 ---------B   01580  FOR I=1 TO N
    0x5e4a60fead40 ---------B   01590  IF A(I)=0 THEN 1610
    0x5e4a60feada0 ---------B   01600  RETURN
    0x5e4a60feaee0 ---------B T 01610  NEXT I
    0x5e4a60feb110 ---------B   01620  LET Z=1
    0x5e4a60feb160 ---------B   01630  RETURN
    0x5e4a60feb310 ---------A T 01640  PRINT "do you want to play another game";
    0x5e4a60feb480 ---------A T 01650  INPUT Q9$
    0x5e4a60feb6e0 ---------A   01660  IF Q9$="YES" GOTO 1720
    0x5e4a60feb970 ---------A   01670  IF Q9$="yes" GOTO 1720
    0x5e4a60febc00 ---------A   01680  IF Q9$="NO" GOTO 1730
    0x5e4a60febe90 ---------A   01690  IF Q9$="no" GOTO 1730
    0x5e4a60fec020 ---------A   01700  PRINT "PLEASE.  YES OR NO."
    0x5e4a60fec0a0 ---------A   01710  GOTO 1650 
    0x5e4a60fec110 ---------A T 01720  GOTO 440
    0x5e4a60fec160 ---------A T 01730  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/nim.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e4a60fcb6d0 ---------A   01000  PRINT TAB(33);"NIM"
    0x5e4a60fcb670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e4a60fcc2d0 ----------   01020  PRINT
    0x5e4a60fcc910 ----------   01030  PRINT
    0x5e4a60fbc2b0 ---------A   01040  PRINT
    0x5e4a60fccb60 ---------A   01050  DIM A(100),B(100,10),D(2)
    0x5e4a60fce160 ---------A   01060  PRINT "THIS IS THE GAME OF NIM."
    0x5e4a60fcc720 ---------A   01070  PRINT "DO YOU WANT INSTRUCTIONS";
    0x5e4a60fd38a0 ---------A   01080  INPUT Z$
    0x5e4a60fd3a60 ---------A   01090  IF Z$="NO" THEN 1280
    0x5e4a60fd3cc0 ---------A   01100  IF Z$="no" THEN 1280
    0x5e4a60fd3f20 ---------A T 01110  IF Z$="YES" THEN 1150
    0x5e4a60fd41b0 ---------A   01120  IF Z$="yes" THEN 1150
    0x5e4a60fd4320 ---------A   01130  PRINT "PLEASE ANSWER YES OR NO"
    0x5e4a60fcddb0 ---------A T 01140  GOTO 1080
    0x5e4a60fd4480 ---------A   01150  PRINT "THE GAME IS PLAYED WITH A NUMBER OF PILES OF OBJECTS."
    0x5e4a60fd45f0 ---------A   01160  PRINT "ANY NUMBER OF OBJECTS ARE REMOVED FROM ONE PILE BY YOU AND"
    0x5e4a60fd47a0 ---------A   01170  PRINT "THE MACHINE ALTERNATELY.  ON YOUR TURN, YOU MAY TAKE"
    0x5e4a60fd4950 ---------A   01180  PRINT "ALL THE OBJECTS THAT REMAIN IN ANY PILE, BUT YOU MUST"
    0x5e4a60fd4b10 ---------A T 01190  PRINT "TAKE AT LEAST ONE OBJECT, AND YOU MAY TAKE OBJECTS FROM"
    0x5e4a60fd4cd0 ---------A   01200  PRINT "ONLY ONE PILE ON A SINGLE TURN.  YOU MUST SPECIFY WHETHER"
    0x5e4a60fd4e90 ---------A   01210  PRINT "WINNING IS DEFINED AS TAKING OR NOT TAKING THE LAST OBJECT,"
    0x5e4a60fd5050 ---------A   01220  PRINT "THE NUMBER OF PILES IN THE GAME, AND HOW MANY OBJECTS ARE"
    0x5e4a60fd51f0 ---------A   01230  PRINT "ORIGINALLY IN EACH PILE.  EACH PILE MAY CONTAIN A"
    0x5e4a60fd5390 ---------A   01240  PRINT "DIFFERENT NUMBER OF OBJECTS."
    0x5e4a60fd5550 ---------A   01250  PRINT "THE MACHINE WILL SHOW ITS MOVE BY LISTING EACH PILE AND THE"
    0x5e4a60fd56e0 ---------A T 01260  PRINT "NUMBER OF OBJECTS REMAINING IN THE PILES AFTER  EACH OF ITS"
    0x5e4a60fd5840 ---------A   01270  PRINT "MOVES."
    0x5e4a60fd58f0 ---------A   01280  PRINT
    0x5e4a60fd5a90 ---------A   01290  PRINT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST";
    0x5e4a60fd5cb0 ---------A   01300  INPUT W
    0x5e4a60fd5f10 ---------A   01310  IF W=1 THEN 1330
    0x5e4a60fd6180 ---------A   01320  IF W<>2 THEN 1290
    0x5e4a60fd6300 ---------A   01330  PRINT "ENTER NUMBER OF PILES";
    0x5e4a60fd6520 ---------A   01340  INPUT N
    0x5e4a60fd6990 ---------A T 01350  IF N>100 THEN 1330
    0x5e4a60fd6c00 ---------A   01360  IF N<1 THEN 1330
    0x5e4a60fd6f70 ---------A   01370  IF N<>INT(N) THEN 1330
    0x5e4a60fd70d0 ---------A T 01380  PRINT "ENTER PILE SIZES"
    0x5e4a60fd7490 ---------A   01390  FOR I=1 TO N
    0x5e4a60fd7610 ---------A   01400  PRINT I;
    0x5e4a60fd7860 ---------A   01410  INPUT A(I)
    0x5e4a60fd7ba0 ---------A   01420  IF A(I)>2000 THEN 1400
    0x5e4a60fd7ef0 ---------A   01430  IF A(I)<1 THEN 1400
    0x5e4a60fd8410 ---------A   01440  IF A(I)<>INT(A(I)) THEN 1400
    0x5e4a60fd8550 ---------A T 01450  NEXT I
    0x5e4a60fd8700 ---------A   01460  PRINT "DO YOU WANT TO MOVE FIRST";
    0x5e4a60fd8930 ---------A   01470  INPUT Q9$
    0x5e4a60fd8bc0 ---------A   01480  IF Q9$="YES" THEN 2290
    0x5e4a60fd8e50 ---------A   01490  IF Q9$="yes" THEN 2290
    0x5e4a60fd90e0 ---------A   01500  IF Q9$="NO" THEN 1540
    0x5e4a60fd9370 ---------A   01510  IF Q9$="no" THEN 1540
    0x5e4a60fd94e0 ---------A   01520  PRINT "PLEASE ANSWER YES OR NO."
    0x5e4a60fd9560 ---------A   01530  GOTO 1470
    0x5e4a60fd97b0 ---------A   01540  IF W=1 THEN 1780
    0x5e4a60fd9a90 ---------A   01550  LET C=0
    0x5e4a60fd9d80 ---------A   01560  FOR I=1 TO N
    0x5e4a60fda0c0 ---------A G 01570  IF A(I)=0 THEN 1610
    0x5e4a60fda400 ---------A   01580  LET C=C+1
    0x5e4a60fda650 ---------A   01590  IF C=3 THEN 1680
    0x5e4a60fda970 ---------A   01600  LET D(C)=I
    0x5e4a60fdaaa0 ---------A T 01610  NEXT I
    0x5e4a60fdad20 ---------A   01620  IF C=2 THEN 1760
    0x5e4a60fdb130 ---------A   01630  IF A(D(1))>1 THEN 1660
    0x5e4a60fdb290 ---------A T 01640  PRINT "MACHINE LOSES"
    0x5e4a60fdb320 ---------A T 01650  GOTO 2480
    0x5e4a60fdb470 ---------A   01660  PRINT "MACHINE WINS"
    0x5e4a60fdb900 ---------A   01670  GOTO 2480
    0x5e4a60fdbb10 ---------A   01680  LET C=0
    0x5e4a60fdbe00 ---------A   01690  FOR I=1 TO N
    0x5e4a60fdc140 ---------A   01700  IF A(I)>1 THEN 1780
    0x5e4a60fdc480 ---------A   01710  IF A(I)=0 THEN 1730
    0x5e4a60fdc7c0 ---------A T 01720  LET C=C+1
    0x5e4a60fdc8f0 ---------A T 01730  NEXT I
    0x5e4a60fdce70 ---------A   01740  IF C/2<>INT(C/2) THEN 1640
    0x5e4a60fdcf00 ---------A   01750  GOTO 1780
    0x5e4a60fdd300 ---------A   01760  IF A(D(1))=1 THEN 1660
    0x5e4a60fdd700 ---------A   01770  IF A(D(2))=1 THEN 1660
    0x5e4a60fdda00 ---------A   01780  FOR I=1 TO N
    0x5e4a60fddde0 ---------A   01790  LET E=A(I)
    0x5e4a60fde170 ---------A   01800  FOR J=0 TO 10
    0x5e4a60fde580 ---------A   01810  LET F=E/2
    0x5e4a60fdecb0 ---------A   01820  LET B(I,J)=2*(F-INT(F))
    0x5e4a60fdefc0 ---------A   01830  LET E=INT(F)
    0x5e4a60fdf0f0 ---------A   01840  NEXT J
    0x5e4a60fdf240 ---------A   01850  NEXT I
    0x5e4a60fdf600 ---------A   01860  FOR J=10 TO 0 STEP -1
    0x5e4a60fdf820 ---------A   01870  LET C=0
    0x5e4a60fdfaf0 ---------A   01880  LET H=0
    0x5e4a60fdfdf0 ---------A   01890  FOR I=1 TO N
    0x5e4a60fe0210 ---------A   01900  IF B(I,J)=0 THEN 1950
    0x5e4a60fe0560 ---------A   01910  LET C=C+1
    0x5e4a60fe08b0 ---------A   01920  IF A(I)<=H THEN 1950
    0x5e4a60fe0bd0 ---------A   01930  LET H=A(I)
    0x5e4a60fe0ec0 ---------A   01940  LET G=I
    0x5e4a60fe0ff0 ---------A   01950  NEXT I
    0x5e4a60fe1570 ---------A   01960  IF C/2<>INT(C/2) THEN 2030
    0x5e4a60fe16b0 ---------A   01970  NEXT J
    0x5e4a60fe1ce0 ---------A   01980  LET E=INT(N*RND(1)+1)
    0x5e4a60fe2020 ---------A   01990  IF A(E)=0 THEN 1980
    0x5e4a60fe2700 ---------A   02000  LET F=INT(A(E)*RND(1)+1)
    0x5e4a60fe2c10 ---------A   02010  LET A(E)=A(E)-F
    0x5e4a60fe2c80 ---------A   02020  GOTO 2220
    0x5e4a60fe2f70 ---------A   02030  LET A(G)=0
    0x5e4a60fe3240 ---------A   02040  FOR J=0 TO 10
    0x5e4a60fe3620 ---------A   02050  LET B(G,J)=0
    0x5e4a60fe3830 ---------A   02060  LET C=0
    0x5e4a60fe3b30 ---------A   02070  FOR I=1 TO N
    0x5e4a60fe3f50 ---------A   02080  IF B(I,J)=0 THEN 2100
    0x5e4a60fe4290 ---------A   02090  LET C=C+1
    0x5e4a60fe43c0 ---------A   02100  NEXT I
    0x5e4a60fe5060 ---------A   02110  LET A(G)=A(G)+2*(C/2-INT(C/2))*2^J
    0x5e4a60fe5190 ---------A   02120  NEXT J
    0x5e4a60fe5400 ---------A   02130  IF W=1 THEN 2220
    0x5e4a60fe5620 ---------A   02140  LET C=0
    0x5e4a60fe5920 ---------A   02150  FOR I=1 TO N
    0x5e4a60fe5c70 ---------A   02160  IF A(I)>1 THEN 2220
    0x5e4a60fe5fb0 ---------A   02170  IF A(I)=0 THEN 2190
    0x5e4a60fe62f0 ---------A   02180  LET C=C+1
    0x5e4a60fe6420 ---------A   02190  NEXT I
    0x5e4a60fe69a0 ---------A   02200  IF C/2<>INT(C/2) THEN 2220
    0x5e4a60fe6ea0 ---------A   02210  LET A(G)=1-A(G)
    0x5e4a60fe6ff0 ---------A   02220  PRINT "PILE  SIZE"
    0x5e4a60fe72f0 ---------A   02230  FOR I=1 TO N
    0x5e4a60fe7630 ---------A   02240  PRINT I;A(I)
    0x5e4a60fe7770 ---------A   02250  NEXT I
    0x5e4a60fe79e0 ---------A   02260  IF W=2 THEN 2290
    0x5e4a60fe7a60 ---------A   02270  GOSUB 2410
    0x5e4a60fe7d90 ---------A   02280  IF Z=1 THEN 1660
    0x5e4a60fe7f30 ---------A   02290  PRINT "YOUR MOVE - PILE, NUMBER TO BE REMOVED";
    0x5e4a60fe82f0 ---------A   02300  INPUT X,Y
    0x5e4a60fe8d80 ---------A   02310  IF X>N THEN 2290
    0x5e4a60fe8ff0 ---------A   02320  IF X<1 THEN 2290
    0x5e4a60fe9360 ---------A   02330  IF X<>INT(X) THEN 2290
    0x5e4a60fe96c0 ---------A   02340  IF Y>A(X) THEN 2290
    0x5e4a60fe9930 ---------A   02350  IF Y<1 THEN 2290
    0x5e4a60fe9c90 ---------A   02360  IF Y<>INT(Y) THEN 2290
    0x5e4a60fea1b0 ---------A   02370  LET A(X)=A(X)-Y
    0x5e4a60fea220 ---------A   02380  GOSUB 2410
    0x5e4a60fea470 ---------A   02390  IF Z=1 THEN 1640
    0x5e4a60fea4f0 ---------A   02400  GOTO 1540
    0x5e4a60fea700 ---------B   02410  LET Z=0
    0x5e4a60feaa00 ---------B   02420  FOR I=1 TO N
    0x5e4a60fead40 ---------B   02430  IF A(I)=0 THEN 2450
    0x5e4a60feada0 ---------B   02440  RETURN
    0x5e4a60feaee0 ---------B   02450  NEXT I
    0x5e4a60feb110 ---------B   02460  LET Z=1
    0x5e4a60feb160 ---------B   02470  RETURN
    0x5e4a60feb310 ---------A   02480  PRINT "do you want to play another game";
    0x5e4a60feb480 ---------A   02490  INPUT Q9$
    0x5e4a60feb6e0 ---------A   02500  IF Q9$="YES" GOTO 2560
    0x5e4a60feb970 ---------A   02510  IF Q9$="yes" GOTO 2560
    0x5e4a60febc00 ---------A   02520  IF Q9$="NO" GOTO 2570
    0x5e4a60febe90 ---------A   02530  IF Q9$="no" GOTO 2570
    0x5e4a60fec020 ---------A   02540  PRINT "PLEASE.  YES OR NO."
    0x5e4a60fec0a0 ---------A   02550  GOTO 2490 
    0x5e4a60fec110 ---------A   02560  GOTO 1280
    0x5e4a60fec160 ---------A   02570  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02590 - 10000    7420 

 */



/*
 *  Symbol Table Listing for 'basic/nim.bas'
 *
    A               Array    Integer         {0,99} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B               Array    Integer         {0,99} {0,9} 
    C                        Integer     
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
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
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
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q9$                      String      
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
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X                        Integer     
    Y                        Integer     
    Z                        Integer     
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/nim.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e4a60fcb6d0 ---------A   01000  PRINT TAB(33);"NIM"
    0x5e4a60fcb670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e4a60fcc2d0 ---------A   01020  PRINT
    0x5e4a60fcc910 ---------A   01030  PRINT
    0x5e4a60fbc2b0 ---------A   01040  PRINT
    0x5e4a60fccb60 ---------A   01050  DIM A(100),B(100,10),D(2)
    0x5e4a60fce160 ---------A   01060  PRINT "THIS IS THE GAME OF NIM."
    0x5e4a60fcc720 ---------A   01070  PRINT "DO YOU WANT INSTRUCTIONS";
    0x5e4a60fd38a0 ---------A T 01080  INPUT Z$
    0x5e4a60fd3a60 ---------A   01090  IF Z$="NO" THEN 1280
    0x5e4a60fd3cc0 ---------A   01100  IF Z$="no" THEN 1280
    0x5e4a60fd3f20 ---------A   01110  IF Z$="YES" THEN 1150
    0x5e4a60fd41b0 ---------A   01120  IF Z$="yes" THEN 1150
    0x5e4a60fd4320 ---------A   01130  PRINT "PLEASE ANSWER YES OR NO"
    0x5e4a60fcddb0 ---------A   01140  GOTO 1080
    0x5e4a60fd4480 ---------A T 01150  PRINT "THE GAME IS PLAYED WITH A NUMBER OF PILES OF OBJECTS."
    0x5e4a60fd45f0 ---------A   01160  PRINT "ANY NUMBER OF OBJECTS ARE REMOVED FROM ONE PILE BY YOU AND"
    0x5e4a60fd47a0 ---------A   01170  PRINT "THE MACHINE ALTERNATELY.  ON YOUR TURN, YOU MAY TAKE"
    0x5e4a60fd4950 ---------A   01180  PRINT "ALL THE OBJECTS THAT REMAIN IN ANY PILE, BUT YOU MUST"
    0x5e4a60fd4b10 ---------A   01190  PRINT "TAKE AT LEAST ONE OBJECT, AND YOU MAY TAKE OBJECTS FROM"
    0x5e4a60fd4cd0 ---------A   01200  PRINT "ONLY ONE PILE ON A SINGLE TURN.  YOU MUST SPECIFY WHETHER"
    0x5e4a60fd4e90 ---------A   01210  PRINT "WINNING IS DEFINED AS TAKING OR NOT TAKING THE LAST OBJECT,"
    0x5e4a60fd5050 ---------A   01220  PRINT "THE NUMBER OF PILES IN THE GAME, AND HOW MANY OBJECTS ARE"
    0x5e4a60fd51f0 ---------A   01230  PRINT "ORIGINALLY IN EACH PILE.  EACH PILE MAY CONTAIN A"
    0x5e4a60fd5390 ---------A   01240  PRINT "DIFFERENT NUMBER OF OBJECTS."
    0x5e4a60fd5550 ---------A   01250  PRINT "THE MACHINE WILL SHOW ITS MOVE BY LISTING EACH PILE AND THE"
    0x5e4a60fd56e0 ---------A   01260  PRINT "NUMBER OF OBJECTS REMAINING IN THE PILES AFTER  EACH OF ITS"
    0x5e4a60fd5840 ---------A   01270  PRINT "MOVES."
    0x5e4a60fd58f0 ---------A T 01280  PRINT
    0x5e4a60fd5a90 ---------A T 01290  PRINT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST";
    0x5e4a60fd5cb0 ---------A   01300  INPUT W
    0x5e4a60fd5f10 ---------A   01310  IF W=1 THEN 1330
    0x5e4a60fd6180 ---------A   01320  IF W<>2 THEN 1290
    0x5e4a60fd6300 ---------A T 01330  PRINT "ENTER NUMBER OF PILES";
    0x5e4a60fd6520 ---------A   01340  INPUT N
    0x5e4a60fd6990 ---------A   01350  IF N>100 THEN 1330
    0x5e4a60fd6c00 ---------A   01360  IF N<1 THEN 1330
    0x5e4a60fd6f70 ---------A   01370  IF N<>INT(N) THEN 1330
    0x5e4a60fd70d0 ---------A   01380  PRINT "ENTER PILE SIZES"
    0x5e4a60fd7490 ---------A   01390  FOR I=1 TO N
    0x5e4a60fd7610 ---------A T 01400  PRINT I;
    0x5e4a60fd7860 ---------A   01410  INPUT A(I)
    0x5e4a60fd7ba0 ---------A   01420  IF A(I)>2000 THEN 1400
    0x5e4a60fd7ef0 ---------A   01430  IF A(I)<1 THEN 1400
    0x5e4a60fd8410 ---------A   01440  IF A(I)<>INT(A(I)) THEN 1400
    0x5e4a60fd8550 ---------A   01450  NEXT I
    0x5e4a60fd8700 ---------A   01460  PRINT "DO YOU WANT TO MOVE FIRST";
    0x5e4a60fd8930 ---------A T 01470  INPUT Q9$
    0x5e4a60fd8bc0 ---------A   01480  IF Q9$="YES" THEN 2290
    0x5e4a60fd8e50 ---------A   01490  IF Q9$="yes" THEN 2290
    0x5e4a60fd90e0 ---------A   01500  IF Q9$="NO" THEN 1540
    0x5e4a60fd9370 ---------A   01510  IF Q9$="no" THEN 1540
    0x5e4a60fd94e0 ---------A   01520  PRINT "PLEASE ANSWER YES OR NO."
    0x5e4a60fd9560 ---------A   01530  GOTO 1470
    0x5e4a60fd97b0 ---------A T 01540  IF W=1 THEN 1780
    0x5e4a60fd9a90 ---------A   01550  LET C=0
    0x5e4a60fd9d80 ---------A   01560  FOR I=1 TO N
    0x5e4a60fda0c0 ---------A   01570  IF A(I)=0 THEN 1610
    0x5e4a60fda400 ---------A   01580  LET C=C+1
    0x5e4a60fda650 ---------A   01590  IF C=3 THEN 1680
    0x5e4a60fda970 ---------A   01600  LET D(C)=I
    0x5e4a60fdaaa0 ---------A T 01610  NEXT I
    0x5e4a60fdad20 ---------A   01620  IF C=2 THEN 1760
    0x5e4a60fdb130 ---------A   01630  IF A(D(1))>1 THEN 1660
    0x5e4a60fdb290 ---------A T 01640  PRINT "MACHINE LOSES"
    0x5e4a60fdb320 ---------A   01650  GOTO 2410
    0x5e4a60fdb470 ---------A T 01660  PRINT "MACHINE WINS"
    0x5e4a60fdb900 ---------A   01670  GOTO 2410
    0x5e4a60fdbb10 ---------A T 01680  LET C=0
    0x5e4a60fdbe00 ---------A   01690  FOR I=1 TO N
    0x5e4a60fdc140 ---------A   01700  IF A(I)>1 THEN 1780
    0x5e4a60fdc480 ---------A   01710  IF A(I)=0 THEN 1730
    0x5e4a60fdc7c0 ---------A   01720  LET C=C+1
    0x5e4a60fdc8f0 ---------A T 01730  NEXT I
    0x5e4a60fdce70 ---------A   01740  IF C/2<>INT(C/2) THEN 1640
    0x5e4a60fdcf00 ---------A   01750  GOTO 1780
    0x5e4a60fdd300 ---------A T 01760  IF A(D(1))=1 THEN 1660
    0x5e4a60fdd700 ---------A   01770  IF A(D(2))=1 THEN 1660
    0x5e4a60fdda00 ---------A T 01780  FOR I=1 TO N
    0x5e4a60fddde0 ---------A   01790  LET E=A(I)
    0x5e4a60fde170 ---------A   01800  FOR J=0 TO 10
    0x5e4a60fde580 ---------A   01810  LET F=E/2
    0x5e4a60fdecb0 ---------A   01820  LET B(I,J)=2*(F-INT(F))
    0x5e4a60fdefc0 ---------A   01830  LET E=INT(F)
    0x5e4a60fdf0f0 ---------A   01840  NEXT J
    0x5e4a60fdf240 ---------A   01850  NEXT I
    0x5e4a60fdf600 ---------A   01860  FOR J=10 TO 0 STEP -1
    0x5e4a60fdf820 ---------A   01870  LET C=0
    0x5e4a60fdfaf0 ---------A   01880  LET H=0
    0x5e4a60fdfdf0 ---------A   01890  FOR I=1 TO N
    0x5e4a60fe0210 ---------A   01900  IF B(I,J)=0 THEN 1950
    0x5e4a60fe0560 ---------A   01910  LET C=C+1
    0x5e4a60fe08b0 ---------A   01920  IF A(I)<=H THEN 1950
    0x5e4a60fe0bd0 ---------A   01930  LET H=A(I)
    0x5e4a60fe0ec0 ---------A   01940  LET G=I
    0x5e4a60fe0ff0 ---------A T 01950  NEXT I
    0x5e4a60fe1570 ---------A   01960  IF C/2<>INT(C/2) THEN 2030
    0x5e4a60fe16b0 ---------A   01970  NEXT J
    0x5e4a60fe1ce0 ---------A T 01980  LET E=INT(N*RND(1)+1)
    0x5e4a60fe2020 ---------A   01990  IF A(E)=0 THEN 1980
    0x5e4a60fe2700 ---------A   02000  LET F=INT(A(E)*RND(1)+1)
    0x5e4a60fe2c10 ---------A   02010  LET A(E)=A(E)-F
    0x5e4a60fe2c80 ---------A   02020  GOTO 2220
    0x5e4a60fe2f70 ---------A T 02030  LET A(G)=0
    0x5e4a60fe3240 ---------A   02040  FOR J=0 TO 10
    0x5e4a60fe3620 ---------A   02050  LET B(G,J)=0
    0x5e4a60fe3830 ---------A   02060  LET C=0
    0x5e4a60fe3b30 ---------A   02070  FOR I=1 TO N
    0x5e4a60fe3f50 ---------A   02080  IF B(I,J)=0 THEN 2100
    0x5e4a60fe4290 ---------A   02090  LET C=C+1
    0x5e4a60fe43c0 ---------A T 02100  NEXT I
    0x5e4a60fe5060 ---------A   02110  LET A(G)=A(G)+2*(C/2-INT(C/2))*2^J
    0x5e4a60fe5190 ---------A   02120  NEXT J
    0x5e4a60fe5400 ---------A   02130  IF W=1 THEN 2220
    0x5e4a60fe5620 ---------A   02140  LET C=0
    0x5e4a60fe5920 ---------A   02150  FOR I=1 TO N
    0x5e4a60fe5c70 ---------A   02160  IF A(I)>1 THEN 2220
    0x5e4a60fe5fb0 ---------A   02170  IF A(I)=0 THEN 2190
    0x5e4a60fe62f0 ---------A   02180  LET C=C+1
    0x5e4a60fe6420 ---------A T 02190  NEXT I
    0x5e4a60fe69a0 ---------A   02200  IF C/2<>INT(C/2) THEN 2220
    0x5e4a60fe6ea0 ---------A   02210  LET A(G)=1-A(G)
    0x5e4a60fe6ff0 ---------A T 02220  PRINT "PILE  SIZE"
    0x5e4a60fe72f0 ---------A   02230  FOR I=1 TO N
    0x5e4a60fe7630 ---------A   02240  PRINT I;A(I)
    0x5e4a60fe7770 ---------A   02250  NEXT I
    0x5e4a60fe79e0 ---------A   02260  IF W=2 THEN 2290
    0x5e4a60fe7a60 ---------A   02270  GOSUB 2510
    0x5e4a60fe7d90 ---------A   02280  IF Z=1 THEN 1660
    0x5e4a60fe7f30 ---------A T 02290  PRINT "YOUR MOVE - PILE, NUMBER TO BE REMOVED";
    0x5e4a60fe82f0 ---------A   02300  INPUT X,Y
    0x5e4a60fe8d80 ---------A   02310  IF X>N THEN 2290
    0x5e4a60fe8ff0 ---------A   02320  IF X<1 THEN 2290
    0x5e4a60fe9360 ---------A   02330  IF X<>INT(X) THEN 2290
    0x5e4a60fe96c0 ---------A   02340  IF Y>A(X) THEN 2290
    0x5e4a60fe9930 ---------A   02350  IF Y<1 THEN 2290
    0x5e4a60fe9c90 ---------A   02360  IF Y<>INT(Y) THEN 2290
    0x5e4a60fea1b0 ---------A   02370  LET A(X)=A(X)-Y
    0x5e4a60fea220 ---------A   02380  GOSUB 2510
    0x5e4a60fea470 ---------A   02390  IF Z=1 THEN 1640
    0x5e4a60fea4f0 ---------A   02400  GOTO 1540
    0x5e4a60feb310 ---------A T 02410  PRINT "do you want to play another game";
    0x5e4a60feb480 ---------A T 02420  INPUT Q9$
    0x5e4a60feb6e0 ---------A   02430  IF Q9$="YES" GOTO 2490
    0x5e4a60feb970 ---------A   02440  IF Q9$="yes" GOTO 2490
    0x5e4a60febc00 ---------A   02450  IF Q9$="NO" GOTO 2500
    0x5e4a60febe90 ---------A   02460  IF Q9$="no" GOTO 2500
    0x5e4a60fec020 ---------A   02470  PRINT "PLEASE.  YES OR NO."
    0x5e4a60fec0a0 ---------A   02480  GOTO 2420 
    0x5e4a60fec110 ---------A T 02490  GOTO 1280
    0x5e4a60fec160 ---------A T 02500  END
    0x5e4a60fea700 ---------B G 02510  LET Z=0
    0x5e4a60feaa00 ---------B   02520  FOR I=1 TO N
    0x5e4a60fead40 ---------B   02530  IF A(I)=0 THEN 2550
    0x5e4a60fef420 ---------B   02540  GOTO 02580
    0x5e4a60feaee0 ---------B T 02550  NEXT I
    0x5e4a60feb110 ---------B   02560  LET Z=1
    0x5e4a60fef5b0 ---------B   02570  GOTO 02580
    0x5e4a60ff7a10 ---------B T 02580  RETURN
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
int    A_int_arr[100];                            // Basic: A 
int    B_int_arr[100][10];                        // Basic: B 
int    C_int;                                     // Basic: C 
int    D_int_arr[2];                              // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    N_int;                                     // Basic: N 
char*  Q9_str;                                    // Basic: Q9$ 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
char*  Z_str;                                     // Basic: Z$ 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02510();

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

void Routine_02510(){
    // 02510 LET Z=0
    Z_int = 0;
    // 02520 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 02530 IF A(I)=0 THEN 2550
        if(A_int_arr[I_int]==0)goto Lbl_02550;
        // 02540 GOTO 02580
        goto Lbl_02580;

  Lbl_02550:
        // 02550 NEXT I
        int dummy_2550=0; // Ignore this line.
    }; // End-For(I_int)
    // 02560 LET Z=1
    Z_int = 1;
    // 02570 GOTO 02580
    goto Lbl_02580;

  Lbl_02580:
    // 02580 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"NIM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"NIM");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 DIM A(100),B(100,10),D(2)
    // 01060 PRINT "THIS IS THE GAME OF NIM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS THE GAME OF NIM.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "DO YOU WANT INSTRUCTIONS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT INSTRUCTIONS");fputs(buf,fh); };

  Lbl_01080:
    // 01080 INPUT Z$
    // Start of Basic INPUT statement 01080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 IF Z$="NO" THEN 1280
    if(strcmp(Z_str,"NO")==0)goto Lbl_01280;
    // 01100 IF Z$="no" THEN 1280
    if(strcmp(Z_str,"NO")==0)goto Lbl_01280;
    // 01110 IF Z$="YES" THEN 1150
    if(strcmp(Z_str,"YES")==0)goto Lbl_01150;
    // 01120 IF Z$="yes" THEN 1150
    if(strcmp(Z_str,"YES")==0)goto Lbl_01150;
    // 01130 PRINT "PLEASE ANSWER YES OR NO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE ANSWER YES OR NO");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 GOTO 1080
    goto Lbl_01080;

  Lbl_01150:
    // 01150 PRINT "THE GAME IS PLAYED WITH A NUMBER OF PILES OF OBJECTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE GAME IS PLAYED WITH A NUMBER OF PILES OF OBJECTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "ANY NUMBER OF OBJECTS ARE REMOVED FROM ONE PILE BY YOU AND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ANY NUMBER OF OBJECTS ARE REMOVED FROM ONE PILE BY YOU AND");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "THE MACHINE ALTERNATELY.  ON YOUR TURN, YOU MAY TAKE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE MACHINE ALTERNATELY.  ON YOUR TURN, YOU MAY TAKE");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT "ALL THE OBJECTS THAT REMAIN IN ANY PILE, BUT YOU MUST"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ALL THE OBJECTS THAT REMAIN IN ANY PILE, BUT YOU MUST");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT "TAKE AT LEAST ONE OBJECT, AND YOU MAY TAKE OBJECTS FROM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TAKE AT LEAST ONE OBJECT, AND YOU MAY TAKE OBJECTS FROM");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "ONLY ONE PILE ON A SINGLE TURN.  YOU MUST SPECIFY WHETHER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONLY ONE PILE ON A SINGLE TURN.  YOU MUST SPECIFY WHETHER");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "WINNING IS DEFINED AS TAKING OR NOT TAKING THE LAST OBJECT,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WINNING IS DEFINED AS TAKING OR NOT TAKING THE LAST OBJECT,");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "THE NUMBER OF PILES IN THE GAME, AND HOW MANY OBJECTS ARE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE NUMBER OF PILES IN THE GAME, AND HOW MANY OBJECTS ARE");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "ORIGINALLY IN EACH PILE.  EACH PILE MAY CONTAIN A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ORIGINALLY IN EACH PILE.  EACH PILE MAY CONTAIN A");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "DIFFERENT NUMBER OF OBJECTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIFFERENT NUMBER OF OBJECTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "THE MACHINE WILL SHOW ITS MOVE BY LISTING EACH PILE AND THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE MACHINE WILL SHOW ITS MOVE BY LISTING EACH PILE AND THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "NUMBER OF OBJECTS REMAINING IN THE PILES AFTER  EACH OF ITS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NUMBER OF OBJECTS REMAINING IN THE PILES AFTER  EACH OF ITS");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "MOVES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MOVES.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01280:
    // 01280 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01290:
    // 01290 PRINT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST");fputs(buf,fh); };
    // 01300 INPUT W
    // Start of Basic INPUT statement 01300
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
    }; // End of Basic INPUT statement 01300
    // 01310 IF W=1 THEN 1330
    if(W_int==1)goto Lbl_01330;
    // 01320 IF W<>2 THEN 1290
    if(W_int!=2)goto Lbl_01290;

  Lbl_01330:
    // 01330 PRINT "ENTER NUMBER OF PILES";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER NUMBER OF PILES");fputs(buf,fh); };
    // 01340 INPUT N
    // Start of Basic INPUT statement 01340
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&N_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01340
    // 01350 IF N>100 THEN 1330
    if(N_int>100)goto Lbl_01330;
    // 01360 IF N<1 THEN 1330
    if(N_int<1)goto Lbl_01330;
    // 01370 IF N<>INT(N) THEN 1330
    if(N_int!=INT(N_int))goto Lbl_01330;
    // 01380 PRINT "ENTER PILE SIZES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER PILE SIZES");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){

  Lbl_01400:
        // 01400 PRINT I;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,I_int);fputs(buf,fh); };
        // 01410 INPUT A(I)
        // Start of Basic INPUT statement 01410
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&A_int_arr[I_int],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01410
        // 01420 IF A(I)>2000 THEN 1400
        if(A_int_arr[I_int]>2000)goto Lbl_01400;
        // 01430 IF A(I)<1 THEN 1400
        if(A_int_arr[I_int]<1)goto Lbl_01400;
        // 01440 IF A(I)<>INT(A(I)) THEN 1400
        if(A_int_arr[I_int]!=INT(A_int_arr[I_int]))goto Lbl_01400;
        // 01450 NEXT I
        int dummy_1450=0; // Ignore this line.
    }; // End-For(I_int)
    // 01460 PRINT "DO YOU WANT TO MOVE FIRST";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO MOVE FIRST");fputs(buf,fh); };

  Lbl_01470:
    // 01470 INPUT Q9$
    // Start of Basic INPUT statement 01470
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Q9_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01470
    // 01480 IF Q9$="YES" THEN 2290
    if(strcmp(Q9_str,"YES")==0)goto Lbl_02290;
    // 01490 IF Q9$="yes" THEN 2290
    if(strcmp(Q9_str,"YES")==0)goto Lbl_02290;
    // 01500 IF Q9$="NO" THEN 1540
    if(strcmp(Q9_str,"NO")==0)goto Lbl_01540;
    // 01510 IF Q9$="no" THEN 1540
    if(strcmp(Q9_str,"NO")==0)goto Lbl_01540;
    // 01520 PRINT "PLEASE ANSWER YES OR NO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE ANSWER YES OR NO.");strcat(buf,"\n");fputs(buf,fh); };
    // 01530 GOTO 1470
    goto Lbl_01470;

  Lbl_01540:
    // 01540 IF W=1 THEN 1780
    if(W_int==1)goto Lbl_01780;
    // 01550 LET C=0
    C_int = 0;
    // 01560 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 01570 IF A(I)=0 THEN 1610
        if(A_int_arr[I_int]==0)goto Lbl_01610;
        // 01580 LET C=C+1
        C_int = C_int+1;
        // 01590 IF C=3 THEN 1680
        if(C_int==3)goto Lbl_01680;
        // 01600 LET D(C)=I
        D_int_arr[C_int] = I_int;

  Lbl_01610:
        // 01610 NEXT I
        int dummy_1610=0; // Ignore this line.
    }; // End-For(I_int)
    // 01620 IF C=2 THEN 1760
    if(C_int==2)goto Lbl_01760;
    // 01630 IF A(D(1))>1 THEN 1660
    if(A_int_arr[D_int_arr[1]]>1)goto Lbl_01660;

  Lbl_01640:
    // 01640 PRINT "MACHINE LOSES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MACHINE LOSES");strcat(buf,"\n");fputs(buf,fh); };
    // 01650 GOTO 2410
    goto Lbl_02410;

  Lbl_01660:
    // 01660 PRINT "MACHINE WINS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MACHINE WINS");strcat(buf,"\n");fputs(buf,fh); };
    // 01670 GOTO 2410
    goto Lbl_02410;

  Lbl_01680:
    // 01680 LET C=0
    C_int = 0;
    // 01690 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 01700 IF A(I)>1 THEN 1780
        if(A_int_arr[I_int]>1)goto Lbl_01780;
        // 01710 IF A(I)=0 THEN 1730
        if(A_int_arr[I_int]==0)goto Lbl_01730;
        // 01720 LET C=C+1
        C_int = C_int+1;

  Lbl_01730:
        // 01730 NEXT I
        int dummy_1730=0; // Ignore this line.
    }; // End-For(I_int)
    // 01740 IF C/2<>INT(C/2) THEN 1640
    if(C_int/2!=INT(C_int/2))goto Lbl_01640;
    // 01750 GOTO 1780
    goto Lbl_01780;

  Lbl_01760:
    // 01760 IF A(D(1))=1 THEN 1660
    if(A_int_arr[D_int_arr[1]]==1)goto Lbl_01660;
    // 01770 IF A(D(2))=1 THEN 1660
    if(A_int_arr[D_int_arr[2]]==1)goto Lbl_01660;

  Lbl_01780:
    // 01780 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 01790 LET E=A(I)
        E_int = A_int_arr[I_int];
        // 01800 FOR J=0 TO 10
        for(J_int=0;J_int<=10;J_int++){
            // 01810 LET F=E/2
            F_int = E_int/2;
            // 01820 LET B(I,J)=2*(F-INT(F))
            B_int_arr[I_int][J_int] = 2*(F_int-INT(F_int));
            // 01830 LET E=INT(F)
            E_int = INT(F_int);
            // 01840 NEXT J
            int dummy_1840=0; // Ignore this line.
        }; // End-For(J_int)
        // 01850 NEXT I
        int dummy_1850=0; // Ignore this line.
    }; // End-For(I_int)
    // 01860 FOR J=10 TO 0 STEP -1
    for(J_int=10;J_int>=0;J_int+=-1){
        // 01870 LET C=0
        C_int = 0;
        // 01880 LET H=0
        H_int = 0;
        // 01890 FOR I=1 TO N
        for(I_int=1;I_int<=N_int;I_int++){
            // 01900 IF B(I,J)=0 THEN 1950
            if(B_int_arr[I_int][J_int]==0)goto Lbl_01950;
            // 01910 LET C=C+1
            C_int = C_int+1;
            // 01920 IF A(I)<=H THEN 1950
            if(A_int_arr[I_int]<=H_int)goto Lbl_01950;
            // 01930 LET H=A(I)
            H_int = A_int_arr[I_int];
            // 01940 LET G=I
            G_int = I_int;

  Lbl_01950:
            // 01950 NEXT I
            int dummy_1950=0; // Ignore this line.
        }; // End-For(I_int)
        // 01960 IF C/2<>INT(C/2) THEN 2030
        if(C_int/2!=INT(C_int/2))goto Lbl_02030;
        // 01970 NEXT J
        int dummy_1970=0; // Ignore this line.
    }; // End-For(J_int)

  Lbl_01980:
    // 01980 LET E=INT(N*RND(1)+1)
    E_int = INT(N_int*RND(1)+1);
    // 01990 IF A(E)=0 THEN 1980
    if(A_int_arr[E_int]==0)goto Lbl_01980;
    // 02000 LET F=INT(A(E)*RND(1)+1)
    F_int = INT(A_int_arr[E_int]*RND(1)+1);
    // 02010 LET A(E)=A(E)-F
    A_int_arr[E_int] = A_int_arr[E_int]-F_int;
    // 02020 GOTO 2220
    goto Lbl_02220;

  Lbl_02030:
    // 02030 LET A(G)=0
    A_int_arr[G_int] = 0;
    // 02040 FOR J=0 TO 10
    for(J_int=0;J_int<=10;J_int++){
        // 02050 LET B(G,J)=0
        B_int_arr[G_int][J_int] = 0;
        // 02060 LET C=0
        C_int = 0;
        // 02070 FOR I=1 TO N
        for(I_int=1;I_int<=N_int;I_int++){
            // 02080 IF B(I,J)=0 THEN 2100
            if(B_int_arr[I_int][J_int]==0)goto Lbl_02100;
            // 02090 LET C=C+1
            C_int = C_int+1;

  Lbl_02100:
            // 02100 NEXT I
            int dummy_2100=0; // Ignore this line.
        }; // End-For(I_int)
        // 02110 LET A(G)=A(G)+2*(C/2-INT(C/2))*2^J
        A_int_arr[G_int] = A_int_arr[G_int]+2*(C_int/2-INT(C_int/2))*IPower(2,J_int);
        // 02120 NEXT J
        int dummy_2120=0; // Ignore this line.
    }; // End-For(J_int)
    // 02130 IF W=1 THEN 2220
    if(W_int==1)goto Lbl_02220;
    // 02140 LET C=0
    C_int = 0;
    // 02150 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 02160 IF A(I)>1 THEN 2220
        if(A_int_arr[I_int]>1)goto Lbl_02220;
        // 02170 IF A(I)=0 THEN 2190
        if(A_int_arr[I_int]==0)goto Lbl_02190;
        // 02180 LET C=C+1
        C_int = C_int+1;

  Lbl_02190:
        // 02190 NEXT I
        int dummy_2190=0; // Ignore this line.
    }; // End-For(I_int)
    // 02200 IF C/2<>INT(C/2) THEN 2220
    if(C_int/2!=INT(C_int/2))goto Lbl_02220;
    // 02210 LET A(G)=1-A(G)
    A_int_arr[G_int] = 1-A_int_arr[G_int];

  Lbl_02220:
    // 02220 PRINT "PILE  SIZE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PILE  SIZE");strcat(buf,"\n");fputs(buf,fh); };
    // 02230 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 02240 PRINT I;A(I)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,I_int); b2c_INT(buf,A_int_arr[I_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 02250 NEXT I
        int dummy_2250=0; // Ignore this line.
    }; // End-For(I_int)
    // 02260 IF W=2 THEN 2290
    if(W_int==2)goto Lbl_02290;
    // 02270 GOSUB 2510
    Routine_02510();
    // 02280 IF Z=1 THEN 1660
    if(Z_int==1)goto Lbl_01660;

  Lbl_02290:
    // 02290 PRINT "YOUR MOVE - PILE, NUMBER TO BE REMOVED";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR MOVE - PILE, NUMBER TO BE REMOVED");fputs(buf,fh); };
    // 02300 INPUT X,Y
    // Start of Basic INPUT statement 02300
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ||
                (err += b2c_strtoi(&Y_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02300
    // 02310 IF X>N THEN 2290
    if(X_int>N_int)goto Lbl_02290;
    // 02320 IF X<1 THEN 2290
    if(X_int<1)goto Lbl_02290;
    // 02330 IF X<>INT(X) THEN 2290
    if(X_int!=INT(X_int))goto Lbl_02290;
    // 02340 IF Y>A(X) THEN 2290
    if(Y_int>A_int_arr[X_int])goto Lbl_02290;
    // 02350 IF Y<1 THEN 2290
    if(Y_int<1)goto Lbl_02290;
    // 02360 IF Y<>INT(Y) THEN 2290
    if(Y_int!=INT(Y_int))goto Lbl_02290;
    // 02370 LET A(X)=A(X)-Y
    A_int_arr[X_int] = A_int_arr[X_int]-Y_int;
    // 02380 GOSUB 2510
    Routine_02510();
    // 02390 IF Z=1 THEN 1640
    if(Z_int==1)goto Lbl_01640;
    // 02400 GOTO 1540
    goto Lbl_01540;

  Lbl_02410:
    // 02410 PRINT "do you want to play another game";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"do you want to play another game");fputs(buf,fh); };

  Lbl_02420:
    // 02420 INPUT Q9$
    // Start of Basic INPUT statement 02420
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Q9_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02420
    // 02430 IF Q9$="YES" GOTO 2490
    if(strcmp(Q9_str,"YES")==0)goto Lbl_02490;
    // 02440 IF Q9$="yes" GOTO 2490
    if(strcmp(Q9_str,"YES")==0)goto Lbl_02490;
    // 02450 IF Q9$="NO" GOTO 2500
    if(strcmp(Q9_str,"NO")==0)goto Lbl_02500;
    // 02460 IF Q9$="no" GOTO 2500
    if(strcmp(Q9_str,"NO")==0)goto Lbl_02500;
    // 02470 PRINT "PLEASE.  YES OR NO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE.  YES OR NO.");strcat(buf,"\n");fputs(buf,fh); };
    // 02480 GOTO 2420 
    goto Lbl_02420;

  Lbl_02490:
    // 02490 GOTO 1280
    goto Lbl_01280;

  Lbl_02500:
    // 02500 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
