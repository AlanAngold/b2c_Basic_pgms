/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/digits.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5746825526d0 ---------A   00010  PRINT TAB(33);"DIGITS"
    0x574682552670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5746825527f0 ---------A   00030  PRINT:PRINT:PRINT
    0x574682553040 ---------A   00210  PRINT "THIS IS A GAME OF GUESSING."
    0x574682552e40 ---------A   00220  PRINT "FOR INSTRUCTIONS, TYPE '1', ELSE TYPE '0'";
    0x5746825546a0 ---------A   00230  INPUT E
    0x574682555140 ---------A   00240  IF E=0 THEN 360
    0x5746825551e0 ---------A   00250  PRINT
    0x5746825536e0 ---------A   00260  PRINT "PLEASE TAKE A PIECE OF PAPER AND WRITE DOWN"
    0x574682553840 ---------A   00270  PRINT "THE DIGITS '0', '1', OR '2' THIRTY TIMES AT RANDOM."
    0x57468255a9a0 ---------A   00280  PRINT "ARRANGE THEM IN THREE LINES OF TEN DIGITS EACH."
    0x57468255aac0 ---------A   00290  PRINT "I WILL ASK FOR THEN TEN AT A TIME."
    0x57468255ac20 ---------A   00300  PRINT "I WILL ALWAYS GUESS THEM FIRST AND THEN LOOK AT YOUR"
    0x57468255ad80 ---------A   00310  PRINT "NEXT NUMBER TO SEE IF I WAS RIGHT. BY PURE LUCK,"
    0x57468255aef0 ---------A   00320  PRINT "I OUGHT TO BE RIGHT TEN TIMES. BUT I HOPE TO DO BETTER"
    0x57468255b010 ---------A   00330  PRINT "THAN THAT *****"
    0x57468255b0d0 ---------A   00340  PRINT:PRINT
    0x57468255b550 ---------A T 00360  READ A,B,C
    0x57468255b840 ---------A   00370  DATA 0,1,3
    0x57468255c240 ---------A   00380  DIM M(26,2),K(2,2),L(8,2)
    0x57468255cf50 ---------A T 00400  FOR I=0 TO 26: FOR J=0 TO 2: M(I,J)=1: NEXT J: NEXT I
    0x57468255db30 ---------A   00410  FOR I=0 TO 2: FOR J=0 TO 2: K(I,J)=9: NEXT J: NEXT I
    0x57468255e710 ---------A   00420  FOR I=0 TO 8: FOR J=0 TO 2: L(I,J)=3: NEXT J: NEXT I
    0x57468255f180 ---------A   00450  L(0,0)=2: L(4,1)=2: L(8,2)=2
    0x57468255f9b0 ---------A   00480  Z=26: Z1=8: Z2=2
    0x57468255fc80 ---------A   00510  X=0
    0x574682560010 ---------A   00520  FOR T=1 TO 3
    0x574682560070 ---------A T 00530  PRINT
    0x574682560220 ---------A   00540  PRINT "TEN NUMBERS, PLEASE";
    0x5746825613a0 ---------A   00550  INPUT N(1),N(2),N(3),N(4),N(5),N(6),N(7),N(8),N(9),N(10)
    0x574682561680 ---------A   00560  FOR I=1 TO 10
    0x574682561b40 ---------A   00570  W=N(I)-1
    0x574682561eb0 ---------A   00580  IF W=SGN(W) THEN 620
    0x574682562240 ---------A   00590  PRINT "ONLY USE THE DIGITS '0', '1', OR '2'."
    0x574682562400 ---------A   00600  PRINT "LET'S TRY AGAIN.":GOTO 530
    0x574682562530 ---------A T 00620  NEXT I
    0x574682562a90 ---------A   00630  PRINT: PRINT "MY GUESS","YOUR NO.","RESULT","NO. RIGHT":PRINT
    0x574682562e30 ---------A   00660  FOR U=1 TO 10
    0x574682563400 ---------A   00670  N=N(U): S=0
    0x5746825636e0 ---------A   00690  FOR J=0 TO 2
    0x5746825644c0 ---------A   00700  S1=A*K(Z2,J)+B*L(Z1,J)+C*M(Z,J)
    0x574682564730 ---------A   00710  IF S>S1 THEN 760
    0x5746825649c0 ---------A   00720  IF S<S1 THEN 740
    0x574682564ce0 ---------A   00730  IF RND(1)<.5 THEN 760
    0x5746825651f0 ---------A T 00740  S=S1: G=J
    0x574682565320 ---------A T 00760  NEXT J
    0x5746825658a0 ---------A   00770  PRINT "  ";G,"   ";N(U),
    0x574682565c00 ---------A   00780  IF G=N(U) THEN 810
    0x574682565e60 ---------A   00790  PRINT " WRONG",X
    0x574682565ee0 ---------A   00800  GOTO 880
    0x574682566210 ---------A T 00810  X=X+1
    0x574682566460 ---------A   00820  PRINT " RIGHT",X
    0x574682566b20 ---------A   00830  M(Z,N)=M(Z,N)+1
    0x5746825671d0 ---------A   00840  L(Z1,N)=L(Z1,N)+1
    0x574682567880 ---------A   00850  K(Z2,N)=K(Z2,N)+1
    0x574682567eb0 ---------A   00860  Z=Z-INT(Z/9)*9
    0x5746825683e0 ---------A   00870  Z=3*Z+N(U)
    0x574682568a10 ---------A T 00880  Z1=Z-INT(Z/9)*9
    0x574682568d20 ---------A   00890  Z2=N(U)
    0x574682568e50 ---------A   00900  NEXT U
    0x574682568fa0 ---------A   00910  NEXT T
    0x574682569030 ---------A   00920  PRINT
    0x574682569290 ---------A   00930  IF X>10 THEN 980
    0x574682569510 ---------A   00940  IF X<10 THEN 1010
    0x5746825696a0 ---------A   00950  PRINT "I GUESSED EXACTLY 1/3 OF YOUR NUMBERS."
    0x574682569c10 ---------A   00960  PRINT "IT'S A TIE GAME."
    0x574682569cb0 ---------A   00970  GOTO 1030
    0x574682569e50 ---------A T 00980  PRINT "I GUESSED MORE THAN 1/3 OF YOUR NUMBERS."
    0x57468256a670 ---------A   00990  PRINT "I WIN.": FOR Q=1 TO 10: PRINT CHR$(7);: NEXT Q
    0x57468256a720 ---------A   01000  GOTO 1030
    0x57468256a8b0 ---------A T 01010  PRINT "I GUESSED LESS THAN 1/3 OF YOUR NUMBERS."
    0x57468256aa20 ---------A   01020  PRINT "YOU BEAT ME.  CONGRATULATIONS *****"
    0x57468256aad0 ---------A T 01030  PRINT
    0x57468256ac70 ---------A   01040  PRINT "DO YOU WANT TO TRY AGAIN (1 FOR YES, 0 FOR NO)";
    0x57468256add0 ---------A   01060  INPUT X
    0x57468256b040 ---------A   01070  IF X=1 THEN 400
    0x57468256b200 ---------A   01080  PRINT:PRINT "THANKS FOR THE GAME."
    0x57468256b260 ---------A   01090  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00360      00240T
     00400      01070T
     00530      00600T
     00620      00580T
     00740      00720T
     00760      00710T, 00730T
     00810      00780T
     00880      00800T
     00980      00930T
     01010      00940T
     01030      00970T, 01000T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5746825526d0 (00010)   0x5746825526d0 (00010)   0x57468256b260 (01090)   0x57468256b260 (01090)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/digits.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5746825526d0 ---------A   00010  PRINT TAB(33);"DIGITS"
    0x574682552670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5746825432b0 ----------   00030  PRINT
    0x5746825529e0 ----------        a PRINT
    0x5746825527f0 ---------A        b PRINT
    0x574682553040 ---------A   00210  PRINT "THIS IS A GAME OF GUESSING."
    0x574682552e40 ---------A   00220  PRINT "FOR INSTRUCTIONS, TYPE '1', ELSE TYPE '0'";
    0x5746825546a0 ---------A   00230  INPUT E
    0x574682555140 ---------A   00240  IF E=0 THEN 360
    0x5746825551e0 ---------A   00250  PRINT
    0x5746825536e0 ---------A   00260  PRINT "PLEASE TAKE A PIECE OF PAPER AND WRITE DOWN"
    0x574682553840 ---------A   00270  PRINT "THE DIGITS '0', '1', OR '2' THIRTY TIMES AT RANDOM."
    0x57468255a9a0 ---------A   00280  PRINT "ARRANGE THEM IN THREE LINES OF TEN DIGITS EACH."
    0x57468255aac0 ---------A   00290  PRINT "I WILL ASK FOR THEN TEN AT A TIME."
    0x57468255ac20 ---------A   00300  PRINT "I WILL ALWAYS GUESS THEM FIRST AND THEN LOOK AT YOUR"
    0x57468255ad80 ---------A   00310  PRINT "NEXT NUMBER TO SEE IF I WAS RIGHT. BY PURE LUCK,"
    0x57468255aef0 ---------A   00320  PRINT "I OUGHT TO BE RIGHT TEN TIMES. BUT I HOPE TO DO BETTER"
    0x57468255b010 ---------A   00330  PRINT "THAN THAT *****"
    0x57468255b070 ----------   00340  PRINT
    0x57468255b0d0 ---------A        a PRINT
    0x57468255b550 ---------A T 00360  READ A,B,C
    0x57468255b840 ---------A   00370  DATA 0,1,3
    0x57468255c240 ---------A   00380  DIM M(26,2),K(2,2),L(8,2)
    0x57468255c5b0 ---------- T 00400  FOR I=0 TO 26
    0x57468255c930 ---------- T      a FOR J=0 TO 2
    0x57468255ccf0 ---------- T      b M(I,J)=1
    0x57468255ce20 ---------- T      c NEXT J
    0x57468255cf50 ---------A T      d NEXT I
    0x57468255d250 ----------   00410  FOR I=0 TO 2
    0x57468255d510 ----------        a FOR J=0 TO 2
    0x57468255d8d0 ----------        b K(I,J)=9
    0x57468255da00 ----------        c NEXT J
    0x57468255db30 ---------A        d NEXT I
    0x57468255de30 ----------   00420  FOR I=0 TO 8
    0x57468255e0f0 ----------        a FOR J=0 TO 2
    0x57468255e4b0 ----------        b L(I,J)=3
    0x57468255e5e0 ----------        c NEXT J
    0x57468255e710 ---------A        d NEXT I
    0x57468255ea80 ----------   00450  L(0,0)=2
    0x57468255edf0 ----------        a L(4,1)=2
    0x57468255f180 ---------A        b L(8,2)=2
    0x57468255f430 ----------   00480  Z=26
    0x57468255f6e0 ----------        a Z1=8
    0x57468255f9b0 ---------A        b Z2=2
    0x57468255fc80 ---------A   00510  X=0
    0x574682560010 ---------A   00520  FOR T=1 TO 3
    0x574682560070 ---------A T 00530  PRINT
    0x574682560220 ---------A   00540  PRINT "TEN NUMBERS, PLEASE";
    0x5746825613a0 ---------A   00550  INPUT N(1),N(2),N(3),N(4),N(5),N(6),N(7),N(8),N(9),N(10)
    0x574682561680 ---------A   00560  FOR I=1 TO 10
    0x574682561b40 ---------A   00570  W=N(I)-1
    0x574682561eb0 ---------A   00580  IF W=SGN(W) THEN 620
    0x574682562240 ---------A   00590  PRINT "ONLY USE THE DIGITS '0', '1', OR '2'."
    0x574682562380 ----------   00600  PRINT "LET'S TRY AGAIN."
    0x574682562400 ---------A        a GOTO 530
    0x574682562530 ---------A T 00620  NEXT I
    0x5746825625d0 ----------   00630  PRINT
    0x574682562a10 ----------        a PRINT "MY GUESS","YOUR NO.","RESULT","NO. RIGHT"
    0x574682562a90 ---------A        b PRINT
    0x574682562e30 ---------A   00660  FOR U=1 TO 10
    0x574682563130 ----------   00670  N=N(U)
    0x574682563400 ---------A        a S=0
    0x5746825636e0 ---------A   00690  FOR J=0 TO 2
    0x5746825644c0 ---------A   00700  S1=A*K(Z2,J)+B*L(Z1,J)+C*M(Z,J)
    0x574682564730 ---------A   00710  IF S>S1 THEN 760
    0x5746825649c0 ---------A   00720  IF S<S1 THEN 740
    0x574682564ce0 ---------A   00730  IF RND(1)<.5 THEN 760
    0x574682564f00 ---------- T 00740  S=S1
    0x5746825651f0 ---------A T      a G=J
    0x574682565320 ---------A T 00760  NEXT J
    0x5746825658a0 ---------A   00770  PRINT "  ";G,"   ";N(U),
    0x574682565c00 ---------A   00780  IF G=N(U) THEN 810
    0x574682565e60 ---------A   00790  PRINT " WRONG",X
    0x574682565ee0 ---------A   00800  GOTO 880
    0x574682566210 ---------A T 00810  X=X+1
    0x574682566460 ---------A   00820  PRINT " RIGHT",X
    0x574682566b20 ---------A   00830  M(Z,N)=M(Z,N)+1
    0x5746825671d0 ---------A   00840  L(Z1,N)=L(Z1,N)+1
    0x574682567880 ---------A   00850  K(Z2,N)=K(Z2,N)+1
    0x574682567eb0 ---------A   00860  Z=Z-INT(Z/9)*9
    0x5746825683e0 ---------A   00870  Z=3*Z+N(U)
    0x574682568a10 ---------A T 00880  Z1=Z-INT(Z/9)*9
    0x574682568d20 ---------A   00890  Z2=N(U)
    0x574682568e50 ---------A   00900  NEXT U
    0x574682568fa0 ---------A   00910  NEXT T
    0x574682569030 ---------A   00920  PRINT
    0x574682569290 ---------A   00930  IF X>10 THEN 980
    0x574682569510 ---------A   00940  IF X<10 THEN 1010
    0x5746825696a0 ---------A   00950  PRINT "I GUESSED EXACTLY 1/3 OF YOUR NUMBERS."
    0x574682569c10 ---------A   00960  PRINT "IT'S A TIE GAME."
    0x574682569cb0 ---------A   00970  GOTO 1030
    0x574682569e50 ---------A T 00980  PRINT "I GUESSED MORE THAN 1/3 OF YOUR NUMBERS."
    0x574682569f90 ----------   00990  PRINT "I WIN."
    0x57468256a310 ----------        a FOR Q=1 TO 10
    0x57468256a530 ----------        b PRINT CHR$(7);
    0x57468256a670 ---------A        c NEXT Q
    0x57468256a720 ---------A   01000  GOTO 1030
    0x57468256a8b0 ---------A T 01010  PRINT "I GUESSED LESS THAN 1/3 OF YOUR NUMBERS."
    0x57468256aa20 ---------A   01020  PRINT "YOU BEAT ME.  CONGRATULATIONS *****"
    0x57468256aad0 ---------A T 01030  PRINT
    0x57468256ac70 ---------A   01040  PRINT "DO YOU WANT TO TRY AGAIN (1 FOR YES, 0 FOR NO)";
    0x57468256add0 ---------A   01060  INPUT X
    0x57468256b040 ---------A   01070  IF X=1 THEN 400
    0x57468256b0a0 ----------   01080  PRINT
    0x57468256b200 ---------A        a PRINT "THANKS FOR THE GAME."
    0x57468256b260 ---------A   01090  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/digits.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5746825526d0 ---------A   01000  PRINT TAB(33);"DIGITS"
    0x574682552670 ---------A T 01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5746825432b0 ----------   01020  PRINT
    0x5746825529e0 ---------- T 01030  PRINT
    0x5746825527f0 ---------A   01040  PRINT
    0x574682553040 ---------A   01050  PRINT "THIS IS A GAME OF GUESSING."
    0x574682552e40 ---------A   01060  PRINT "FOR INSTRUCTIONS, TYPE '1', ELSE TYPE '0'";
    0x5746825546a0 ---------A   01070  INPUT E
    0x574682555140 ---------A   01080  IF E=0 THEN 1200
    0x5746825551e0 ---------A   01090  PRINT
    0x5746825536e0 ---------A   01100  PRINT "PLEASE TAKE A PIECE OF PAPER AND WRITE DOWN"
    0x574682553840 ---------A   01110  PRINT "THE DIGITS '0', '1', OR '2' THIRTY TIMES AT RANDOM."
    0x57468255a9a0 ---------A   01120  PRINT "ARRANGE THEM IN THREE LINES OF TEN DIGITS EACH."
    0x57468255aac0 ---------A   01130  PRINT "I WILL ASK FOR THEN TEN AT A TIME."
    0x57468255ac20 ---------A   01140  PRINT "I WILL ALWAYS GUESS THEM FIRST AND THEN LOOK AT YOUR"
    0x57468255ad80 ---------A   01150  PRINT "NEXT NUMBER TO SEE IF I WAS RIGHT. BY PURE LUCK,"
    0x57468255aef0 ---------A   01160  PRINT "I OUGHT TO BE RIGHT TEN TIMES. BUT I HOPE TO DO BETTER"
    0x57468255b010 ---------A   01170  PRINT "THAN THAT *****"
    0x57468255b070 ----------   01180  PRINT
    0x57468255b0d0 ---------A   01190  PRINT
    0x57468255b550 ---------A   01200  READ A,B,C
    0x57468255b840 ---------A   01210  DATA 0,1,3
    0x57468255c240 ---------A   01220  DIM M(26,2),K(2,2),L(8,2)
    0x57468255c5b0 ----------   01230  FOR I=0 TO 26
    0x57468255c930 ----------   01240  FOR J=0 TO 2
    0x57468255ccf0 ----------   01250  M(I,J)=1
    0x57468255ce20 ----------   01260  NEXT J
    0x57468255cf50 ---------A   01270  NEXT I
    0x57468255d250 ----------   01280  FOR I=0 TO 2
    0x57468255d510 ----------   01290  FOR J=0 TO 2
    0x57468255d8d0 ----------   01300  K(I,J)=9
    0x57468255da00 ----------   01310  NEXT J
    0x57468255db30 ---------A   01320  NEXT I
    0x57468255de30 ----------   01330  FOR I=0 TO 8
    0x57468255e0f0 ----------   01340  FOR J=0 TO 2
    0x57468255e4b0 ----------   01350  L(I,J)=3
    0x57468255e5e0 ----------   01360  NEXT J
    0x57468255e710 ---------A   01370  NEXT I
    0x57468255ea80 ----------   01380  L(0,0)=2
    0x57468255edf0 ----------   01390  L(4,1)=2
    0x57468255f180 ---------A   01400  L(8,2)=2
    0x57468255f430 ----------   01410  Z=26
    0x57468255f6e0 ----------   01420  Z1=8
    0x57468255f9b0 ---------A   01430  Z2=2
    0x57468255fc80 ---------A   01440  X=0
    0x574682560010 ---------A   01450  FOR T=1 TO 3
    0x574682560070 ---------A   01460  PRINT
    0x574682560220 ---------A   01470  PRINT "TEN NUMBERS, PLEASE";
    0x5746825613a0 ---------A   01480  INPUT N(1),N(2),N(3),N(4),N(5),N(6),N(7),N(8),N(9),N(10)
    0x574682561680 ---------A   01490  FOR I=1 TO 10
    0x574682561b40 ---------A   01500  W=N(I)-1
    0x574682561eb0 ---------A   01510  IF W=SGN(W) THEN 1550
    0x574682562240 ---------A   01520  PRINT "ONLY USE THE DIGITS '0', '1', OR '2'."
    0x574682562380 ----------   01530  PRINT "LET'S TRY AGAIN."
    0x574682562400 ---------A   01540  GOTO 1460
    0x574682562530 ---------A   01550  NEXT I
    0x5746825625d0 ----------   01560  PRINT
    0x574682562a10 ----------   01570  PRINT "MY GUESS","YOUR NO.","RESULT","NO. RIGHT"
    0x574682562a90 ---------A   01580  PRINT
    0x574682562e30 ---------A   01590  FOR U=1 TO 10
    0x574682563130 ----------   01600  N=N(U)
    0x574682563400 ---------A   01610  S=0
    0x5746825636e0 ---------A   01620  FOR J=0 TO 2
    0x5746825644c0 ---------A   01630  S1=A*K(Z2,J)+B*L(Z1,J)+C*M(Z,J)
    0x574682564730 ---------A   01640  IF S>S1 THEN 1690
    0x5746825649c0 ---------A   01650  IF S<S1 THEN 1680
    0x574682564ce0 ---------A   01660  IF RND(1)<.5 THEN 1690
    0x574682564f00 ----------   01670  S=S1
    0x5746825651f0 ---------A   01680  G=J
    0x574682565320 ---------A   01690  NEXT J
    0x5746825658a0 ---------A   01700  PRINT "  ";G,"   ";N(U),
    0x574682565c00 ---------A   01710  IF G=N(U) THEN 1740
    0x574682565e60 ---------A   01720  PRINT " WRONG",X
    0x574682565ee0 ---------A   01730  GOTO 1810
    0x574682566210 ---------A   01740  X=X+1
    0x574682566460 ---------A   01750  PRINT " RIGHT",X
    0x574682566b20 ---------A   01760  M(Z,N)=M(Z,N)+1
    0x5746825671d0 ---------A   01770  L(Z1,N)=L(Z1,N)+1
    0x574682567880 ---------A   01780  K(Z2,N)=K(Z2,N)+1
    0x574682567eb0 ---------A   01790  Z=Z-INT(Z/9)*9
    0x5746825683e0 ---------A   01800  Z=3*Z+N(U)
    0x574682568a10 ---------A   01810  Z1=Z-INT(Z/9)*9
    0x574682568d20 ---------A   01820  Z2=N(U)
    0x574682568e50 ---------A   01830  NEXT U
    0x574682568fa0 ---------A   01840  NEXT T
    0x574682569030 ---------A   01850  PRINT
    0x574682569290 ---------A   01860  IF X>10 THEN 1910
    0x574682569510 ---------A   01870  IF X<10 THEN 1970
    0x5746825696a0 ---------A   01880  PRINT "I GUESSED EXACTLY 1/3 OF YOUR NUMBERS."
    0x574682569c10 ---------A   01890  PRINT "IT'S A TIE GAME."
    0x574682569cb0 ---------A   01900  GOTO 1990
    0x574682569e50 ---------A   01910  PRINT "I GUESSED MORE THAN 1/3 OF YOUR NUMBERS."
    0x574682569f90 ----------   01920  PRINT "I WIN."
    0x57468256a310 ----------   01930  FOR Q=1 TO 10
    0x57468256a530 ----------   01940  PRINT CHR$(7);
    0x57468256a670 ---------A   01950  NEXT Q
    0x57468256a720 ---------A   01960  GOTO 1990
    0x57468256a8b0 ---------A   01970  PRINT "I GUESSED LESS THAN 1/3 OF YOUR NUMBERS."
    0x57468256aa20 ---------A   01980  PRINT "YOU BEAT ME.  CONGRATULATIONS *****"
    0x57468256aad0 ---------A   01990  PRINT
    0x57468256ac70 ---------A   02000  PRINT "DO YOU WANT TO TRY AGAIN (1 FOR YES, 0 FOR NO)";
    0x57468256add0 ---------A   02010  INPUT X
    0x57468256b040 ---------A   02020  IF X=1 THEN 1270
    0x57468256b0a0 ----------   02030  PRINT
    0x57468256b200 ---------A   02040  PRINT "THANKS FOR THE GAME."
    0x57468256b260 ---------A   02050  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02060 - 10000    7950 

 */



/*
 *  Symbol Table Listing for 'basic/digits.bas'
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
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K               Array    Integer         {0,1} {0,1} 
    L               Array    Integer         {0,7} {0,1} 
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M               Array    Integer         {0,25} {0,1} 
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N               Array    Integer         {0,9} 
    OCT$            Function String          args=1, float  
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
    S1                       Integer     
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
    U                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X                        Integer     
    Z                        Integer     
    Z1                       Integer     
    Z2                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/digits.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5746825526d0 ---------A   01000  PRINT TAB(33);"DIGITS"
    0x574682552670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5746825432b0 ---------A   01020  PRINT
    0x5746825529e0 ---------A   01030  PRINT
    0x5746825527f0 ---------A   01040  PRINT
    0x574682553040 ---------A   01050  PRINT "THIS IS A GAME OF GUESSING."
    0x574682552e40 ---------A   01060  PRINT "FOR INSTRUCTIONS, TYPE '1', ELSE TYPE '0'";
    0x5746825546a0 ---------A   01070  INPUT E
    0x574682555140 ---------A   01080  IF E=0 THEN 1200
    0x5746825551e0 ---------A   01090  PRINT
    0x5746825536e0 ---------A   01100  PRINT "PLEASE TAKE A PIECE OF PAPER AND WRITE DOWN"
    0x574682553840 ---------A   01110  PRINT "THE DIGITS '0', '1', OR '2' THIRTY TIMES AT RANDOM."
    0x57468255a9a0 ---------A   01120  PRINT "ARRANGE THEM IN THREE LINES OF TEN DIGITS EACH."
    0x57468255aac0 ---------A   01130  PRINT "I WILL ASK FOR THEN TEN AT A TIME."
    0x57468255ac20 ---------A   01140  PRINT "I WILL ALWAYS GUESS THEM FIRST AND THEN LOOK AT YOUR"
    0x57468255ad80 ---------A   01150  PRINT "NEXT NUMBER TO SEE IF I WAS RIGHT. BY PURE LUCK,"
    0x57468255aef0 ---------A   01160  PRINT "I OUGHT TO BE RIGHT TEN TIMES. BUT I HOPE TO DO BETTER"
    0x57468255b010 ---------A   01170  PRINT "THAN THAT *****"
    0x57468255b070 ---------A   01180  PRINT
    0x57468255b0d0 ---------A   01190  PRINT
    0x57468255b550 ---------A T 01200  READ A,B,C
    0x57468255b840 ---------A   01210  DATA 0,1,3
    0x57468255c240 ---------A   01220  DIM M(26,2),K(2,2),L(8,2)
    0x57468255c5b0 ---------A   01230  FOR I=0 TO 26
    0x57468255c930 ---------A   01240  FOR J=0 TO 2
    0x57468255ccf0 ---------A   01250  M(I,J)=1
    0x57468255ce20 ---------A   01260  NEXT J
    0x57468255cf50 ---------A T 01270  NEXT I
    0x57468255d250 ---------A   01280  FOR I=0 TO 2
    0x57468255d510 ---------A   01290  FOR J=0 TO 2
    0x57468255d8d0 ---------A   01300  K(I,J)=9
    0x57468255da00 ---------A   01310  NEXT J
    0x57468255db30 ---------A   01320  NEXT I
    0x57468255de30 ---------A   01330  FOR I=0 TO 8
    0x57468255e0f0 ---------A   01340  FOR J=0 TO 2
    0x57468255e4b0 ---------A   01350  L(I,J)=3
    0x57468255e5e0 ---------A   01360  NEXT J
    0x57468255e710 ---------A   01370  NEXT I
    0x57468255ea80 ---------A   01380  L(0,0)=2
    0x57468255edf0 ---------A   01390  L(4,1)=2
    0x57468255f180 ---------A   01400  L(8,2)=2
    0x57468255f430 ---------A   01410  Z=26
    0x57468255f6e0 ---------A   01420  Z1=8
    0x57468255f9b0 ---------A   01430  Z2=2
    0x57468255fc80 ---------A   01440  X=0
    0x574682560010 ---------A   01450  FOR T=1 TO 3
    0x574682560070 ---------A T 01460  PRINT
    0x574682560220 ---------A   01470  PRINT "TEN NUMBERS, PLEASE";
    0x5746825613a0 ---------A   01480  INPUT N(1),N(2),N(3),N(4),N(5),N(6),N(7),N(8),N(9),N(10)
    0x574682561680 ---------A   01490  FOR I=1 TO 10
    0x574682561b40 ---------A   01500  W=N(I)-1
    0x574682561eb0 ---------A   01510  IF W=SGN(W) THEN 1550
    0x574682562240 ---------A   01520  PRINT "ONLY USE THE DIGITS '0', '1', OR '2'."
    0x574682562380 ---------A   01530  PRINT "LET'S TRY AGAIN."
    0x574682562400 ---------A   01540  GOTO 1460
    0x574682562530 ---------A T 01550  NEXT I
    0x5746825625d0 ---------A   01560  PRINT
    0x574682562a10 ---------A   01570  PRINT "MY GUESS","YOUR NO.","RESULT","NO. RIGHT"
    0x574682562a90 ---------A   01580  PRINT
    0x574682562e30 ---------A   01590  FOR U=1 TO 10
    0x574682563130 ---------A   01600  N=N(U)
    0x574682563400 ---------A   01610  S=0
    0x5746825636e0 ---------A   01620  FOR J=0 TO 2
    0x5746825644c0 ---------A   01630  S1=A*K(Z2,J)+B*L(Z1,J)+C*M(Z,J)
    0x574682564730 ---------A   01640  IF S>S1 THEN 1690
    0x5746825649c0 ---------A   01650  IF S<S1 THEN 1680
    0x574682564ce0 ---------A   01660  IF RND(1)<.5 THEN 1690
    0x574682564f00 ---------A   01670  S=S1
    0x5746825651f0 ---------A T 01680  G=J
    0x574682565320 ---------A T 01690  NEXT J
    0x5746825658a0 ---------A   01700  PRINT "  ";G,"   ";N(U),
    0x574682565c00 ---------A   01710  IF G=N(U) THEN 1740
    0x574682565e60 ---------A   01720  PRINT " WRONG",X
    0x574682565ee0 ---------A   01730  GOTO 1810
    0x574682566210 ---------A T 01740  X=X+1
    0x574682566460 ---------A   01750  PRINT " RIGHT",X
    0x574682566b20 ---------A   01760  M(Z,N)=M(Z,N)+1
    0x5746825671d0 ---------A   01770  L(Z1,N)=L(Z1,N)+1
    0x574682567880 ---------A   01780  K(Z2,N)=K(Z2,N)+1
    0x574682567eb0 ---------A   01790  Z=Z-INT(Z/9)*9
    0x5746825683e0 ---------A   01800  Z=3*Z+N(U)
    0x574682568a10 ---------A T 01810  Z1=Z-INT(Z/9)*9
    0x574682568d20 ---------A   01820  Z2=N(U)
    0x574682568e50 ---------A   01830  NEXT U
    0x574682568fa0 ---------A   01840  NEXT T
    0x574682569030 ---------A   01850  PRINT
    0x574682569290 ---------A   01860  IF X>10 THEN 1910
    0x574682569510 ---------A   01870  IF X<10 THEN 1970
    0x5746825696a0 ---------A   01880  PRINT "I GUESSED EXACTLY 1/3 OF YOUR NUMBERS."
    0x574682569c10 ---------A   01890  PRINT "IT'S A TIE GAME."
    0x574682569cb0 ---------A   01900  GOTO 1990
    0x574682569e50 ---------A T 01910  PRINT "I GUESSED MORE THAN 1/3 OF YOUR NUMBERS."
    0x574682569f90 ---------A   01920  PRINT "I WIN."
    0x57468256a310 ---------A   01930  FOR Q=1 TO 10
    0x57468256a530 ---------A   01940  PRINT CHR$(7);
    0x57468256a670 ---------A   01950  NEXT Q
    0x57468256a720 ---------A   01960  GOTO 1990
    0x57468256a8b0 ---------A T 01970  PRINT "I GUESSED LESS THAN 1/3 OF YOUR NUMBERS."
    0x57468256aa20 ---------A   01980  PRINT "YOU BEAT ME.  CONGRATULATIONS *****"
    0x57468256aad0 ---------A T 01990  PRINT
    0x57468256ac70 ---------A   02000  PRINT "DO YOU WANT TO TRY AGAIN (1 FOR YES, 0 FOR NO)";
    0x57468256add0 ---------A   02010  INPUT X
    0x57468256b040 ---------A   02020  IF X=1 THEN 1270
    0x57468256b0a0 ---------A   02030  PRINT
    0x57468256b200 ---------A   02040  PRINT "THANKS FOR THE GAME."
    0x57468256b260 ---------A   02050  END
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
char* data_01210s[]={"0","1","3"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1210,  3,data_01210s},
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
int    E_int;                                     // Basic: E 
int    G_int;                                     // Basic: G 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int_arr[2][2];                           // Basic: K 
int    L_int_arr[8][2];                           // Basic: L 
int    M_int_arr[26][2];                          // Basic: M 
int    N_int_arr[10];                             // Basic: N 
int    Q_int;                                     // Basic: Q 
int    S_int;                                     // Basic: S 
int    S1_int;                                    // Basic: S1 
int    T_int;                                     // Basic: T 
int    U_int;                                     // Basic: U 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
int    Z2_int;                                    // Basic: Z2 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------

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
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"DIGITS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"DIGITS");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "THIS IS A GAME OF GUESSING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS A GAME OF GUESSING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "FOR INSTRUCTIONS, TYPE '1', ELSE TYPE '0'";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOR INSTRUCTIONS, TYPE '1', ELSE TYPE '0'");fputs(buf,fh); };
    // 01070 INPUT E
    // Start of Basic INPUT statement 01070
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&E_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01070
    // 01080 IF E=0 THEN 1200
    if(E_int==0)goto Lbl_01200;
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "PLEASE TAKE A PIECE OF PAPER AND WRITE DOWN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE TAKE A PIECE OF PAPER AND WRITE DOWN");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "THE DIGITS '0', '1', OR '2' THIRTY TIMES AT RANDOM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE DIGITS '0', '1', OR '2' THIRTY TIMES AT RANDOM.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "ARRANGE THEM IN THREE LINES OF TEN DIGITS EACH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ARRANGE THEM IN THREE LINES OF TEN DIGITS EACH.");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "I WILL ASK FOR THEN TEN AT A TIME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WILL ASK FOR THEN TEN AT A TIME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "I WILL ALWAYS GUESS THEM FIRST AND THEN LOOK AT YOUR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WILL ALWAYS GUESS THEM FIRST AND THEN LOOK AT YOUR");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "NEXT NUMBER TO SEE IF I WAS RIGHT. BY PURE LUCK,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NEXT NUMBER TO SEE IF I WAS RIGHT. BY PURE LUCK,");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "I OUGHT TO BE RIGHT TEN TIMES. BUT I HOPE TO DO BETTER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I OUGHT TO BE RIGHT TEN TIMES. BUT I HOPE TO DO BETTER");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "THAN THAT *****"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAN THAT *****");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01200:
    // 01200 READ A,B,C
    A_int = Get_Data_Int();
    B_int = Get_Data_Int();
    C_int = Get_Data_Int();
    // 01210 DATA 0,1,3
    // 01220 DIM M(26,2),K(2,2),L(8,2)
    // 01230 FOR I=0 TO 26
    for(I_int=0;I_int<=26;I_int++){
        // 01240 FOR J=0 TO 2
        for(J_int=0;J_int<=2;J_int++){
            // 01250 M(I,J)=1
            M_int_arr[I_int][J_int] = 1;
            // 01260 NEXT J
            int dummy_1260=0; // Ignore this line.
        }; // End-For(J_int)

  Lbl_01270:
        // 01270 NEXT I
        int dummy_1270=0; // Ignore this line.
    }; // End-For(I_int)
    // 01280 FOR I=0 TO 2
    for(I_int=0;I_int<=2;I_int++){
        // 01290 FOR J=0 TO 2
        for(J_int=0;J_int<=2;J_int++){
            // 01300 K(I,J)=9
            K_int_arr[I_int][J_int] = 9;
            // 01310 NEXT J
            int dummy_1310=0; // Ignore this line.
        }; // End-For(J_int)
        // 01320 NEXT I
        int dummy_1320=0; // Ignore this line.
    }; // End-For(I_int)
    // 01330 FOR I=0 TO 8
    for(I_int=0;I_int<=8;I_int++){
        // 01340 FOR J=0 TO 2
        for(J_int=0;J_int<=2;J_int++){
            // 01350 L(I,J)=3
            L_int_arr[I_int][J_int] = 3;
            // 01360 NEXT J
            int dummy_1360=0; // Ignore this line.
        }; // End-For(J_int)
        // 01370 NEXT I
        int dummy_1370=0; // Ignore this line.
    }; // End-For(I_int)
    // 01380 L(0,0)=2
    L_int_arr[0][0] = 2;
    // 01390 L(4,1)=2
    L_int_arr[4][1] = 2;
    // 01400 L(8,2)=2
    L_int_arr[8][2] = 2;
    // 01410 Z=26
    Z_int = 26;
    // 01420 Z1=8
    Z1_int = 8;
    // 01430 Z2=2
    Z2_int = 2;
    // 01440 X=0
    X_int = 0;
    // 01450 FOR T=1 TO 3
    for(T_int=1;T_int<=3;T_int++){

  Lbl_01460:
        // 01460 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01470 PRINT "TEN NUMBERS, PLEASE";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEN NUMBERS, PLEASE");fputs(buf,fh); };
        // 01480 INPUT N(1),N(2),N(3),N(4),N(5),N(6),N(7),N(8),N(9),N(10)
        // Start of Basic INPUT statement 01480
        {
            int numargs=10;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&N_int_arr[1],args,0)) ||
                    (err += b2c_strtoi(&N_int_arr[2],args,1)) ||
                    (err += b2c_strtoi(&N_int_arr[3],args,2)) ||
                    (err += b2c_strtoi(&N_int_arr[4],args,3)) ||
                    (err += b2c_strtoi(&N_int_arr[5],args,4)) ||
                    (err += b2c_strtoi(&N_int_arr[6],args,5)) ||
                    (err += b2c_strtoi(&N_int_arr[7],args,6)) ||
                    (err += b2c_strtoi(&N_int_arr[8],args,7)) ||
                    (err += b2c_strtoi(&N_int_arr[9],args,8)) ||
                    (err += b2c_strtoi(&N_int_arr[10],args,9)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01480
        // 01490 FOR I=1 TO 10
        for(I_int=1;I_int<=10;I_int++){
            // 01500 W=N(I)-1
            W_int = N_int_arr[I_int]-1;
            // 01510 IF W=SGN(W) THEN 1550
            if(W_int==SGN(W_int))goto Lbl_01550;
            // 01520 PRINT "ONLY USE THE DIGITS '0', '1', OR '2'."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONLY USE THE DIGITS '0', '1', OR '2'.");strcat(buf,"\n");fputs(buf,fh); };
            // 01530 PRINT "LET'S TRY AGAIN."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LET'S TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
            // 01540 GOTO 1460
            goto Lbl_01460;

  Lbl_01550:
            // 01550 NEXT I
            int dummy_1550=0; // Ignore this line.
        }; // End-For(I_int)
        // 01560 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01570 PRINT "MY GUESS","YOUR NO.","RESULT","NO. RIGHT"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MY GUESS");strcat(buf,"YOUR NO.");strcat(buf,"RESULT");strcat(buf,"NO. RIGHT");strcat(buf,"\n");fputs(buf,fh); };
        // 01580 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01590 FOR U=1 TO 10
        for(U_int=1;U_int<=10;U_int++){
            // 01600 N=N(U)
            N_int_arr[0] = N_int_arr[U_int];
            // 01610 S=0
            S_int = 0;
            // 01620 FOR J=0 TO 2
            for(J_int=0;J_int<=2;J_int++){
                // 01630 S1=A*K(Z2,J)+B*L(Z1,J)+C*M(Z,J)
                S1_int = A_int*K_int_arr[Z2_int][J_int]+B_int*L_int_arr[Z1_int][J_int]+C_int*M_int_arr[Z_int][J_int];
                // 01640 IF S>S1 THEN 1690
                if(S_int>S1_int)goto Lbl_01690;
                // 01650 IF S<S1 THEN 1680
                if(S_int<S1_int)goto Lbl_01680;
                // 01660 IF RND(1)<.5 THEN 1690
                if(RND(1)<0.5)goto Lbl_01690;
                // 01670 S=S1
                S_int = S1_int;

  Lbl_01680:
                // 01680 G=J
                G_int = J_int;

  Lbl_01690:
                // 01690 NEXT J
                int dummy_1690=0; // Ignore this line.
            }; // End-For(J_int)
            // 01700 PRINT "  ";G,"   ";N(U),
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  "); b2c_INT(buf,G_int);strcat(buf,"   "); b2c_INT(buf,N_int_arr[U_int]);fputs(buf,fh); };
            // 01710 IF G=N(U) THEN 1740
            if(G_int==N_int_arr[U_int])goto Lbl_01740;
            // 01720 PRINT " WRONG",X
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," WRONG"); b2c_INT(buf,X_int);strcat(buf,"\n");fputs(buf,fh); };
            // 01730 GOTO 1810
            goto Lbl_01810;

  Lbl_01740:
            // 01740 X=X+1
            X_int = X_int+1;
            // 01750 PRINT " RIGHT",X
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," RIGHT"); b2c_INT(buf,X_int);strcat(buf,"\n");fputs(buf,fh); };
            // 01760 M(Z,N)=M(Z,N)+1
            M_int_arr[Z_int][N_int_arr[0]] = M_int_arr[Z_int][N_int_arr[0]]+1;
            // 01770 L(Z1,N)=L(Z1,N)+1
            L_int_arr[Z1_int][N_int_arr[0]] = L_int_arr[Z1_int][N_int_arr[0]]+1;
            // 01780 K(Z2,N)=K(Z2,N)+1
            K_int_arr[Z2_int][N_int_arr[0]] = K_int_arr[Z2_int][N_int_arr[0]]+1;
            // 01790 Z=Z-INT(Z/9)*9
            Z_int = Z_int-INT(Z_int/9)*9;
            // 01800 Z=3*Z+N(U)
            Z_int = 3*Z_int+N_int_arr[U_int];

  Lbl_01810:
            // 01810 Z1=Z-INT(Z/9)*9
            Z1_int = Z_int-INT(Z_int/9)*9;
            // 01820 Z2=N(U)
            Z2_int = N_int_arr[U_int];
            // 01830 NEXT U
            int dummy_1830=0; // Ignore this line.
        }; // End-For(U_int)
        // 01840 NEXT T
        int dummy_1840=0; // Ignore this line.
    }; // End-For(T_int)
    // 01850 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01860 IF X>10 THEN 1910
    if(X_int>10)goto Lbl_01910;
    // 01870 IF X<10 THEN 1970
    if(X_int<10)goto Lbl_01970;
    // 01880 PRINT "I GUESSED EXACTLY 1/3 OF YOUR NUMBERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I GUESSED EXACTLY 1/3 OF YOUR NUMBERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01890 PRINT "IT'S A TIE GAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT'S A TIE GAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01900 GOTO 1990
    goto Lbl_01990;

  Lbl_01910:
    // 01910 PRINT "I GUESSED MORE THAN 1/3 OF YOUR NUMBERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I GUESSED MORE THAN 1/3 OF YOUR NUMBERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01920 PRINT "I WIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01930 FOR Q=1 TO 10
    for(Q_int=1;Q_int<=10;Q_int++){
        // 01940 PRINT CHR$(7);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(7));fputs(buf,fh); };
        // 01950 NEXT Q
        int dummy_1950=0; // Ignore this line.
    }; // End-For(Q_int)
    // 01960 GOTO 1990
    goto Lbl_01990;

  Lbl_01970:
    // 01970 PRINT "I GUESSED LESS THAN 1/3 OF YOUR NUMBERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I GUESSED LESS THAN 1/3 OF YOUR NUMBERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01980 PRINT "YOU BEAT ME.  CONGRATULATIONS *****"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU BEAT ME.  CONGRATULATIONS *****");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01990:
    // 01990 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02000 PRINT "DO YOU WANT TO TRY AGAIN (1 FOR YES, 0 FOR NO)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO TRY AGAIN (1 FOR YES, 0 FOR NO)");fputs(buf,fh); };
    // 02010 INPUT X
    // Start of Basic INPUT statement 02010
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02010
    // 02020 IF X=1 THEN 1270
    if(X_int==1)goto Lbl_01270;
    // 02030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02040 PRINT "THANKS FOR THE GAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THANKS FOR THE GAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 02050 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
