/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/gomoko.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b7e4a7256d0 ---------A   00002  PRINT TAB(33);"GOMOKO"
    0x5b7e4a725670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b7e4a7257f0 ---------A   00006  PRINT:PRINT:PRINT
    0x5b7e4a726b80 ---------A   00008  DIM A(19,19)
    0x5b7e4a726500 ---------A   00010  PRINT "WELCOME TO THE ORIENTAL GAME OF GOMOKO."
    0x5b7e4a725ca0 ---------A   00020  PRINT: PRINT "THE GAME IS PLAYED ON AN N BY N GRID OF A SIZE"
    0x5b7e4a7281c0 ---------A   00030  PRINT "THAT YOU SPECIFY.  DURING YOUR PLAY, YOU MAY COVER ONE GRID"
    0x5b7e4a726730 ---------A   00040  PRINT "INTERSECTION WITH A MARKER. THE OBJECT OF THE GAME IS TO GET"
    0x5b7e4a72d8f0 ---------A   00050  PRINT "5 ADJACENT MARKERS IN A ROW -- HORIZONTALLY, VERTICALLY, OR"
    0x5b7e4a72da20 ---------A   00060  PRINT "DIAGONALLY.  ON THE BOARD DIAGRAM, YOUR MOVES ARE MARKED"
    0x5b7e4a72dbd0 ---------A   00070  PRINT "WITH A '1' AND THE COMPUTER MOVES WITH A '2'."
    0x5b7e4a72dde0 ---------A   00080  PRINT: PRINT "THE COMPUTER DOES NOT KEEP TRACK OF WHO HAS WON."
    0x5b7e4a72dff0 ---------A   00090  PRINT "TO END THE GAME, TYPE -1,-1 FOR YOUR MOVE.": PRINT
    0x5b7e4a72e310 ---------A T 00110  PRINT "WHAT IS YOUR BOARD SIZE (MIN 7/ MAX 19)";: INPUT N
    0x5b7e4a72e530 ---------A   00115  IF N>6 THEN 117
    0x5b7e4a72e590 ---------A   00116  GOTO 120
    0x5b7e4a72e7f0 ---------A T 00117  IF N<20 THEN 210
    0x5b7e4a72e9f0 ---------A T 00120  PRINT "I SAID, THE MINIMUM IS 7, THE MAXIMUM IS 19.": GOTO 110
    0x5b7e4a72f6e0 ---------A T 00210  FOR I=1 TO N:FOR J=1 TO N: A(I,J)=0: NEXT J: NEXT I
    0x5b7e4a72f900 ---------A   00300  PRINT: PRINT "WE ALTERNATE MOVES.  YOU GO FIRST...": PRINT
    0x5b7e4a72fca0 ---------A T 00310  PRINT "YOUR PLAY (I,J)";: INPUT I,J
    0x5b7e4a72fd20 ---------A   00315  PRINT
    0x5b7e4a72ffa0 ---------A   00320  IF I=-1 THEN 980
    0x5b7e4a7308d0 ---------A   00330  X=I: Y=J: GOSUB 910: IF L=1 THEN 410
    0x5b7e4a730a50 ---------A   00340  PRINT "ILLEGAL MOVE.  TRY AGAIN...": GOTO 310
    0x5b7e4a730e80 ---------A T 00410  IF A(I,J)=0 THEN 440
    0x5b7e4a731020 ---------A   00420  PRINT "SQUARE OCCUPIED.  TRY AGAIN...": GOTO 310
    0x5b7e4a731410 ---------A T 00440  A(I,J)=1
    0x5b7e4a7314a0 ---------A   00500  REM *** COMPUTER TRIES AN INTELLIGENT MOVE ***
    0x5b7e4a732170 ---------A   00510  FOR E=-1 TO 1: FOR F=-1 TO 1: IF E+F-E*F=0 THEN 590
    0x5b7e4a732850 ---------A   00540  X=I+F: Y=J+F: GOSUB 910
    0x5b7e4a732a80 ---------A   00570  IF L=0 THEN 590
    0x5b7e4a732ea0 ---------A   00580  IF A(X,Y)=1 THEN 710
    0x5b7e4a733320 ---------A T 00590  NEXT F: NEXT E
    0x5b7e4a7333f0 ---------A   00600  REM *** COMPUTER TRIES A RANDOM MOVE ***
    0x5b7e4a734260 ---------A T 00610  X=INT(N*RND(1)+1): Y=INT(N*RND(1)+1): GOSUB 910: IF L=0 THEN 610
    0x5b7e4a734690 ---------A T 00650  IF A(X,Y)<>0 THEN 610
    0x5b7e4a734b20 ---------A   00660  A(X,Y)=2: GOSUB 810: GOTO 310
    0x5b7e4a7351f0 ---------A T 00710  X=I-E: Y=J-F: GOSUB 910
    0x5b7e4a735440 ---------A   00750  IF L=0 THEN 610
    0x5b7e4a7354d0 ---------A   00760  GOTO 650
    0x5b7e4a735550 ---------A   00800  REM *** PRINT THE BOARD ***
    0x5b7e4a735ea0 ----------   00810  FOR I=1 TO N: FOR J=1 TO N: PRINT A(I,J);
    0x5b7e4a736220 ----------   00840  NEXT J: PRINT: NEXT I: PRINT: RETURN
    0x5b7e4a736680 ---------B G 00910  L=1: IF X<1 THEN 970
    0x5b7e4a736900 ---------B   00920  IF X>N THEN 970
    0x5b7e4a736b60 ---------B   00930  IF Y<1 THEN 970
    0x5b7e4a736de0 ---------B   00940  IF Y>N THEN 970
    0x5b7e4a736e40 ---------B   00950  RETURN
    0x5b7e4a737090 ---------B T 00970  L=0: RETURN
    0x5b7e4a737290 ---------A T 00980  PRINT: PRINT "THANKS FOR THE GAME!!"
    0x5b7e4a737620 ---------A   00985  PRINT "PLAY AGAIN (1 FOR YES, 0 FOR NO)";: INPUT Q
    0x5b7e4a737880 ---------A   00990  IF Q=1 THEN 110
    0x5b7e4a7378e0 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00110      00120T, 00990T
     00117      00115T
     00120      00116T
     00210      00117T
     00310      00340T, 00420T, 00660T
     00410      00330T
     00440      00410T
     00590      00510T, 00570T
     00610      00610T, 00650T, 00750T
     00650      00760T
     00710      00580T
     00910      00540G, 00710G
     00970      00910T, 00920T, 00930T, 00940T
     00980      00320T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5b7e4a7256d0 (00002)   0x5b7e4a7256d0 (00002)   0x5b7e4a7378e0 (00999)   0x5b7e4a7378e0 (00999)   
   B) 0x5b7e4a736680 (00910)   0x5b7e4a736680 (00910)   0x5b7e4a736e40 (00950)   0x5b7e4a737090 (00970)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/gomoko.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b7e4a7256d0 ---------A   00002  PRINT TAB(33);"GOMOKO"
    0x5b7e4a725670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b7e4a7162b0 ----------   00006  PRINT
    0x5b7e4a7259e0 ----------        a PRINT
    0x5b7e4a7257f0 ---------A        b PRINT
    0x5b7e4a726b80 ---------A   00008  DIM A(19,19)
    0x5b7e4a726500 ---------A   00010  PRINT "WELCOME TO THE ORIENTAL GAME OF GOMOKO."
    0x5b7e4a7276a0 ----------   00020  PRINT
    0x5b7e4a725ca0 ---------A        a PRINT "THE GAME IS PLAYED ON AN N BY N GRID OF A SIZE"
    0x5b7e4a7281c0 ---------A   00030  PRINT "THAT YOU SPECIFY.  DURING YOUR PLAY, YOU MAY COVER ONE GRID"
    0x5b7e4a726730 ---------A   00040  PRINT "INTERSECTION WITH A MARKER. THE OBJECT OF THE GAME IS TO GET"
    0x5b7e4a72d8f0 ---------A   00050  PRINT "5 ADJACENT MARKERS IN A ROW -- HORIZONTALLY, VERTICALLY, OR"
    0x5b7e4a72da20 ---------A   00060  PRINT "DIAGONALLY.  ON THE BOARD DIAGRAM, YOUR MOVES ARE MARKED"
    0x5b7e4a72dbd0 ---------A   00070  PRINT "WITH A '1' AND THE COMPUTER MOVES WITH A '2'."
    0x5b7e4a72dc30 ----------   00080  PRINT
    0x5b7e4a72dde0 ---------A        a PRINT "THE COMPUTER DOES NOT KEEP TRACK OF WHO HAS WON."
    0x5b7e4a72df40 ----------   00090  PRINT "TO END THE GAME, TYPE -1,-1 FOR YOUR MOVE."
    0x5b7e4a72dff0 ---------A        a PRINT
    0x5b7e4a72e150 ---------- T 00110  PRINT "WHAT IS YOUR BOARD SIZE (MIN 7/ MAX 19)";
    0x5b7e4a72e310 ---------A T      a INPUT N
    0x5b7e4a72e530 ---------A   00115  IF N>6 THEN 117
    0x5b7e4a72e590 ---------A   00116  GOTO 120
    0x5b7e4a72e7f0 ---------A T 00117  IF N<20 THEN 210
    0x5b7e4a72e950 ---------- T 00120  PRINT "I SAID, THE MINIMUM IS 7, THE MAXIMUM IS 19."
    0x5b7e4a72e9f0 ---------A T      a GOTO 110
    0x5b7e4a72ed20 ---------- T 00210  FOR I=1 TO N
    0x5b7e4a72f0c0 ---------- T      a FOR J=1 TO N
    0x5b7e4a72f480 ---------- T      b A(I,J)=0
    0x5b7e4a72f5b0 ---------- T      c NEXT J
    0x5b7e4a72f6e0 ---------A T      d NEXT I
    0x5b7e4a72f780 ----------   00300  PRINT
    0x5b7e4a72f8a0 ----------        a PRINT "WE ALTERNATE MOVES.  YOU GO FIRST..."
    0x5b7e4a72f900 ---------A        b PRINT
    0x5b7e4a72fa60 ---------- T 00310  PRINT "YOUR PLAY (I,J)";
    0x5b7e4a72fca0 ---------A T      a INPUT I,J
    0x5b7e4a72fd20 ---------A   00315  PRINT
    0x5b7e4a72ffa0 ---------A   00320  IF I=-1 THEN 980
    0x5b7e4a730280 ----------   00330  X=I
    0x5b7e4a730550 ----------        a Y=J
    0x5b7e4a7305a0 ----------        b GOSUB 910
    0x5b7e4a7308d0 ---------A        c IF L=1 THEN 410
    0x5b7e4a7309f0 ----------   00340  PRINT "ILLEGAL MOVE.  TRY AGAIN..."
    0x5b7e4a730a50 ---------A        a GOTO 310
    0x5b7e4a730e80 ---------A T 00410  IF A(I,J)=0 THEN 440
    0x5b7e4a730fa0 ----------   00420  PRINT "SQUARE OCCUPIED.  TRY AGAIN..."
    0x5b7e4a731020 ---------A        a GOTO 310
    0x5b7e4a731410 ---------A T 00440  A(I,J)=1
    0x5b7e4a7314a0 ---------A   00500  REM *** COMPUTER TRIES AN INTELLIGENT MOVE ***
    0x5b7e4a731850 ----------   00510  FOR E=-1 TO 1
    0x5b7e4a731bd0 ----------        a FOR F=-1 TO 1
    0x5b7e4a732170 ---------A        b IF E+F-E*F=0 THEN 590
    0x5b7e4a7324b0 ----------   00540  X=I+F
    0x5b7e4a7327e0 ----------        a Y=J+F
    0x5b7e4a732850 ---------A        b GOSUB 910
    0x5b7e4a732a80 ---------A   00570  IF L=0 THEN 590
    0x5b7e4a732ea0 ---------A   00580  IF A(X,Y)=1 THEN 710
    0x5b7e4a7331f0 ---------- T 00590  NEXT F
    0x5b7e4a733320 ---------A T      a NEXT E
    0x5b7e4a7333f0 ---------A   00600  REM *** COMPUTER TRIES A RANDOM MOVE ***
    0x5b7e4a733a10 ---------- T 00610  X=INT(N*RND(1)+1)
    0x5b7e4a733fe0 ---------- T      a Y=INT(N*RND(1)+1)
    0x5b7e4a734030 ---------- T      b GOSUB 910
    0x5b7e4a734260 ---------A T      c IF L=0 THEN 610
    0x5b7e4a734690 ---------A T 00650  IF A(X,Y)<>0 THEN 610
    0x5b7e4a734a50 ----------   00660  A(X,Y)=2
    0x5b7e4a734aa0 ----------        a GOSUB 810
    0x5b7e4a734b20 ---------A        b GOTO 310
    0x5b7e4a734e50 ---------- T 00710  X=I-E
    0x5b7e4a735180 ---------- T      a Y=J-F
    0x5b7e4a7351f0 ---------A T      b GOSUB 910
    0x5b7e4a735440 ---------A   00750  IF L=0 THEN 610
    0x5b7e4a7354d0 ---------A   00760  GOTO 650
    0x5b7e4a735550 ---------A   00800  REM *** PRINT THE BOARD ***
    0x5b7e4a735860 ----------   00810  FOR I=1 TO N
    0x5b7e4a735b40 ----------        a FOR J=1 TO N
    0x5b7e4a735ea0 ----------        b PRINT A(I,J);
    0x5b7e4a735fe0 ----------   00840  NEXT J
    0x5b7e4a736030 ----------        a PRINT
    0x5b7e4a736170 ----------        b NEXT I
    0x5b7e4a7361c0 ----------        c PRINT
    0x5b7e4a736220 ----------        d RETURN
    0x5b7e4a736430 ---------- G 00910  L=1
    0x5b7e4a736680 ---------B G      a IF X<1 THEN 970
    0x5b7e4a736900 ---------B   00920  IF X>N THEN 970
    0x5b7e4a736b60 ---------B   00930  IF Y<1 THEN 970
    0x5b7e4a736de0 ---------B   00940  IF Y>N THEN 970
    0x5b7e4a736e40 ---------B   00950  RETURN
    0x5b7e4a737040 ---------- T 00970  L=0
    0x5b7e4a737090 ---------B T      a RETURN
    0x5b7e4a737110 ---------- T 00980  PRINT
    0x5b7e4a737290 ---------A T      a PRINT "THANKS FOR THE GAME!!"
    0x5b7e4a737400 ----------   00985  PRINT "PLAY AGAIN (1 FOR YES, 0 FOR NO)";
    0x5b7e4a737620 ---------A        a INPUT Q
    0x5b7e4a737880 ---------A   00990  IF Q=1 THEN 110
    0x5b7e4a7378e0 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/gomoko.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b7e4a7256d0 ---------A   01000  PRINT TAB(33);"GOMOKO"
    0x5b7e4a725670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b7e4a7162b0 ----------   01020  PRINT
    0x5b7e4a7259e0 ----------   01030  PRINT
    0x5b7e4a7257f0 ---------A   01040  PRINT
    0x5b7e4a726b80 ---------A   01050  DIM A(19,19)
    0x5b7e4a726500 ---------A   01060  PRINT "WELCOME TO THE ORIENTAL GAME OF GOMOKO."
    0x5b7e4a7276a0 ----------   01070  PRINT
    0x5b7e4a725ca0 ---------A   01080  PRINT "THE GAME IS PLAYED ON AN N BY N GRID OF A SIZE"
    0x5b7e4a7281c0 ---------A   01090  PRINT "THAT YOU SPECIFY.  DURING YOUR PLAY, YOU MAY COVER ONE GRID"
    0x5b7e4a726730 ---------A   01100  PRINT "INTERSECTION WITH A MARKER. THE OBJECT OF THE GAME IS TO GET"
    0x5b7e4a72d8f0 ---------A   01110  PRINT "5 ADJACENT MARKERS IN A ROW -- HORIZONTALLY, VERTICALLY, OR"
    0x5b7e4a72da20 ---------A   01120  PRINT "DIAGONALLY.  ON THE BOARD DIAGRAM, YOUR MOVES ARE MARKED"
    0x5b7e4a72dbd0 ---------A   01130  PRINT "WITH A '1' AND THE COMPUTER MOVES WITH A '2'."
    0x5b7e4a72dc30 ----------   01140  PRINT
    0x5b7e4a72dde0 ---------A   01150  PRINT "THE COMPUTER DOES NOT KEEP TRACK OF WHO HAS WON."
    0x5b7e4a72df40 ----------   01160  PRINT "TO END THE GAME, TYPE -1,-1 FOR YOUR MOVE."
    0x5b7e4a72dff0 ---------A   01170  PRINT
    0x5b7e4a72e150 ----------   01180  PRINT "WHAT IS YOUR BOARD SIZE (MIN 7/ MAX 19)";
    0x5b7e4a72e310 ---------A   01190  INPUT N
    0x5b7e4a72e530 ---------A   01200  IF N>6 THEN 1220
    0x5b7e4a72e590 ---------A   01210  GOTO 1240
    0x5b7e4a72e7f0 ---------A   01220  IF N<20 THEN 1290
    0x5b7e4a72e950 ----------   01230  PRINT "I SAID, THE MINIMUM IS 7, THE MAXIMUM IS 19."
    0x5b7e4a72e9f0 ---------A   01240  GOTO 1190
    0x5b7e4a72ed20 ----------   01250  FOR I=1 TO N
    0x5b7e4a72f0c0 ----------   01260  FOR J=1 TO N
    0x5b7e4a72f480 ----------   01270  A(I,J)=0
    0x5b7e4a72f5b0 ----------   01280  NEXT J
    0x5b7e4a72f6e0 ---------A   01290  NEXT I
    0x5b7e4a72f780 ----------   01300  PRINT
    0x5b7e4a72f8a0 ----------   01310  PRINT "WE ALTERNATE MOVES.  YOU GO FIRST..."
    0x5b7e4a72f900 ---------A   01320  PRINT
    0x5b7e4a72fa60 ----------   01330  PRINT "YOUR PLAY (I,J)";
    0x5b7e4a72fca0 ---------A   01340  INPUT I,J
    0x5b7e4a72fd20 ---------A   01350  PRINT
    0x5b7e4a72ffa0 ---------A   01360  IF I=-1 THEN 1900
    0x5b7e4a730280 ----------   01370  X=I
    0x5b7e4a730550 ----------   01380  Y=J
    0x5b7e4a7305a0 ----------   01390  GOSUB 1820
    0x5b7e4a7308d0 ---------A   01400  IF L=1 THEN 1430
    0x5b7e4a7309f0 ----------   01410  PRINT "ILLEGAL MOVE.  TRY AGAIN..."
    0x5b7e4a730a50 ---------A   01420  GOTO 1340
    0x5b7e4a730e80 ---------A   01430  IF A(I,J)=0 THEN 1460
    0x5b7e4a730fa0 ----------   01440  PRINT "SQUARE OCCUPIED.  TRY AGAIN..."
    0x5b7e4a731020 ---------A   01450  GOTO 1340
    0x5b7e4a731410 ---------A   01460  A(I,J)=1
    0x5b7e4a7314a0 ---------A   01470  REM *** COMPUTER TRIES AN INTELLIGENT MOVE ***
    0x5b7e4a731850 ----------   01480  FOR E=-1 TO 1
    0x5b7e4a731bd0 ----------   01490  FOR F=-1 TO 1
    0x5b7e4a732170 ---------A   01500  IF E+F-E*F=0 THEN 1570
    0x5b7e4a7324b0 ----------   01510  X=I+F
    0x5b7e4a7327e0 ----------   01520  Y=J+F
    0x5b7e4a732850 ---------A   01530  GOSUB 1820
    0x5b7e4a732a80 ---------A   01540  IF L=0 THEN 1570
    0x5b7e4a732ea0 ---------A   01550  IF A(X,Y)=1 THEN 1690
    0x5b7e4a7331f0 ----------   01560  NEXT F
    0x5b7e4a733320 ---------A   01570  NEXT E
    0x5b7e4a7333f0 ---------A   01580  REM *** COMPUTER TRIES A RANDOM MOVE ***
    0x5b7e4a733a10 ----------   01590  X=INT(N*RND(1)+1)
    0x5b7e4a733fe0 ----------   01600  Y=INT(N*RND(1)+1)
    0x5b7e4a734030 ----------   01610  GOSUB 1820
    0x5b7e4a734260 ---------A   01620  IF L=0 THEN 1620
    0x5b7e4a734690 ---------A   01630  IF A(X,Y)<>0 THEN 1620
    0x5b7e4a734a50 ----------   01640  A(X,Y)=2
    0x5b7e4a734aa0 ----------   01650  GOSUB 1750
    0x5b7e4a734b20 ---------A   01660  GOTO 1340
    0x5b7e4a734e50 ----------   01670  X=I-E
    0x5b7e4a735180 ----------   01680  Y=J-F
    0x5b7e4a7351f0 ---------A   01690  GOSUB 1820
    0x5b7e4a735440 ---------A   01700  IF L=0 THEN 1620
    0x5b7e4a7354d0 ---------A   01710  GOTO 1630
    0x5b7e4a735550 ---------A   01720  REM *** PRINT THE BOARD ***
    0x5b7e4a735860 ----------   01730  FOR I=1 TO N
    0x5b7e4a735b40 ----------   01740  FOR J=1 TO N
    0x5b7e4a735ea0 ----------   01750  PRINT A(I,J);
    0x5b7e4a735fe0 ----------   01760  NEXT J
    0x5b7e4a736030 ----------   01770  PRINT
    0x5b7e4a736170 ----------   01780  NEXT I
    0x5b7e4a7361c0 ----------   01790  PRINT
    0x5b7e4a736220 ----------   01800  RETURN
    0x5b7e4a736430 ----------   01810  L=1
    0x5b7e4a736680 ---------B   01820  IF X<1 THEN 1880
    0x5b7e4a736900 ---------B   01830  IF X>N THEN 1880
    0x5b7e4a736b60 ---------B   01840  IF Y<1 THEN 1880
    0x5b7e4a736de0 ---------B   01850  IF Y>N THEN 1880
    0x5b7e4a736e40 ---------B   01860  RETURN
    0x5b7e4a737040 ----------   01870  L=0
    0x5b7e4a737090 ---------B   01880  RETURN
    0x5b7e4a737110 ----------   01890  PRINT
    0x5b7e4a737290 ---------A   01900  PRINT "THANKS FOR THE GAME!!"
    0x5b7e4a737400 ----------   01910  PRINT "PLAY AGAIN (1 FOR YES, 0 FOR NO)";
    0x5b7e4a737620 ---------A   01920  INPUT Q
    0x5b7e4a737880 ---------A   01930  IF Q=1 THEN 1190
    0x5b7e4a7378e0 ---------A   01940  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01860 - 10000    8150 

 */



/*
 *  Symbol Table Listing for 'basic/gomoko.bas'
 *
    A               Array    Integer         {0,18} {0,18} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
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
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    L                        Integer     
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
    Q                        Integer     
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
    X                        Integer     
    Y                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/gomoko.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b7e4a7256d0 ---------A   01000  PRINT TAB(33);"GOMOKO"
    0x5b7e4a725670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b7e4a7162b0 ---------A   01020  PRINT
    0x5b7e4a7259e0 ---------A   01030  PRINT
    0x5b7e4a7257f0 ---------A   01040  PRINT
    0x5b7e4a726b80 ---------A   01050  DIM A(19,19)
    0x5b7e4a726500 ---------A   01060  PRINT "WELCOME TO THE ORIENTAL GAME OF GOMOKO."
    0x5b7e4a7276a0 ---------A   01070  PRINT
    0x5b7e4a725ca0 ---------A   01080  PRINT "THE GAME IS PLAYED ON AN N BY N GRID OF A SIZE"
    0x5b7e4a7281c0 ---------A   01090  PRINT "THAT YOU SPECIFY.  DURING YOUR PLAY, YOU MAY COVER ONE GRID"
    0x5b7e4a726730 ---------A   01100  PRINT "INTERSECTION WITH A MARKER. THE OBJECT OF THE GAME IS TO GET"
    0x5b7e4a72d8f0 ---------A   01110  PRINT "5 ADJACENT MARKERS IN A ROW -- HORIZONTALLY, VERTICALLY, OR"
    0x5b7e4a72da20 ---------A   01120  PRINT "DIAGONALLY.  ON THE BOARD DIAGRAM, YOUR MOVES ARE MARKED"
    0x5b7e4a72dbd0 ---------A   01130  PRINT "WITH A '1' AND THE COMPUTER MOVES WITH A '2'."
    0x5b7e4a72dc30 ---------A   01140  PRINT
    0x5b7e4a72dde0 ---------A   01150  PRINT "THE COMPUTER DOES NOT KEEP TRACK OF WHO HAS WON."
    0x5b7e4a72df40 ---------A   01160  PRINT "TO END THE GAME, TYPE -1,-1 FOR YOUR MOVE."
    0x5b7e4a72dff0 ---------A   01170  PRINT
    0x5b7e4a72e150 ---------A   01180  PRINT "WHAT IS YOUR BOARD SIZE (MIN 7/ MAX 19)";
    0x5b7e4a72e310 ---------A T 01190  INPUT N
    0x5b7e4a72e530 ---------A   01200  IF N>6 THEN 1220
    0x5b7e4a72e590 ---------A   01210  GOTO 1240
    0x5b7e4a72e7f0 ---------A T 01220  IF N<20 THEN 1250
    0x5b7e4a72e950 ---------A   01230  PRINT "I SAID, THE MINIMUM IS 7, THE MAXIMUM IS 19."
    0x5b7e4a72e9f0 ---------A T 01240  GOTO 1190
    0x5b7e4a72f6e0 ---------A T 01250  NEXT I
    0x5b7e4a72f780 ---------A   01260  PRINT
    0x5b7e4a72f8a0 ---------A   01270  PRINT "WE ALTERNATE MOVES.  YOU GO FIRST..."
    0x5b7e4a72f900 ---------A   01280  PRINT
    0x5b7e4a72fa60 ---------A   01290  PRINT "YOUR PLAY (I,J)";
    0x5b7e4a72fca0 ---------A T 01300  INPUT I,J
    0x5b7e4a72fd20 ---------A   01310  PRINT
    0x5b7e4a72ffa0 ---------A   01320  IF I=-1 THEN 1670
    0x5b7e4a730280 ---------A   01330  X=I
    0x5b7e4a730550 ---------A   01340  Y=J
    0x5b7e4a7305a0 ---------A   01350  GOSUB 1790
    0x5b7e4a7308d0 ---------A   01360  IF L=1 THEN 1390
    0x5b7e4a7309f0 ---------A   01370  PRINT "ILLEGAL MOVE.  TRY AGAIN..."
    0x5b7e4a730a50 ---------A   01380  GOTO 1300
    0x5b7e4a730e80 ---------A T 01390  IF A(I,J)=0 THEN 1420
    0x5b7e4a730fa0 ---------A   01400  PRINT "SQUARE OCCUPIED.  TRY AGAIN..."
    0x5b7e4a731020 ---------A   01410  GOTO 1300
    0x5b7e4a731410 ---------A T 01420  A(I,J)=1
    0x5b7e4a7314a0 ---------A   01430  REM *** COMPUTER TRIES AN INTELLIGENT MOVE ***
    0x5b7e4a731850 ---------A   01440  FOR E=-1 TO 1
    0x5b7e4a731bd0 ---------A   01450  FOR F=-1 TO 1
    0x5b7e4a732170 ---------A   01460  IF E+F-E*F=0 THEN 1530
    0x5b7e4a7324b0 ---------A   01470  X=I+F
    0x5b7e4a7327e0 ---------A   01480  Y=J+F
    0x5b7e4a732850 ---------A   01490  GOSUB 1790
    0x5b7e4a732a80 ---------A   01500  IF L=0 THEN 1530
    0x5b7e4a732ea0 ---------A   01510  IF A(X,Y)=1 THEN 1630
    0x5b7e4a7331f0 ---------A   01520  NEXT F
    0x5b7e4a733320 ---------A T 01530  NEXT E
    0x5b7e4a7333f0 ---------A   01540  REM *** COMPUTER TRIES A RANDOM MOVE ***
    0x5b7e4a733a10 ---------A   01550  X=INT(N*RND(1)+1)
    0x5b7e4a733fe0 ---------A   01560  Y=INT(N*RND(1)+1)
    0x5b7e4a734030 ---------A   01570  GOSUB 1790
    0x5b7e4a734260 ---------A T 01580  IF L=0 THEN 1580
    0x5b7e4a734690 ---------A T 01590  IF A(X,Y)<>0 THEN 1580
    0x5b7e4a734a50 ---------A   01600  A(X,Y)=2
    0x5b7e4a734aa0 ---------A   01610  GOSUB 1720
    0x5b7e4a734b20 ---------A   01620  GOTO 1300
    0x5b7e4a7351f0 ---------A T 01630  GOSUB 1790
    0x5b7e4a735440 ---------A   01640  IF L=0 THEN 1580
    0x5b7e4a7354d0 ---------A   01650  GOTO 1590
    0x5b7e4a735550 ---------A   01660  REM *** PRINT THE BOARD ***
    0x5b7e4a737290 ---------A T 01670  PRINT "THANKS FOR THE GAME!!"
    0x5b7e4a737400 ---------A   01680  PRINT "PLAY AGAIN (1 FOR YES, 0 FOR NO)";
    0x5b7e4a737620 ---------A   01690  INPUT Q
    0x5b7e4a737880 ---------A   01700  IF Q=1 THEN 1190
    0x5b7e4a7378e0 ---------A   01710  END
    0x5b7e4a735ea0 ---------B G 01720  PRINT A(I,J);
    0x5b7e4a735fe0 ---------B   01730  NEXT J
    0x5b7e4a736030 ---------B   01740  PRINT
    0x5b7e4a736170 ---------B   01750  NEXT I
    0x5b7e4a7361c0 ---------B   01760  PRINT
    0x5b7e4a73d4a0 ---------B   01770  GOTO 01780
    0x5b7e4a73e7f0 ---------B T 01780  RETURN
    0x5b7e4a736680 ---------C G 01790  IF X<1 THEN 1840
    0x5b7e4a736900 ---------C   01800  IF X>N THEN 1840
    0x5b7e4a736b60 ---------C   01810  IF Y<1 THEN 1840
    0x5b7e4a736de0 ---------C   01820  IF Y>N THEN 1840
    0x5b7e4a73d6d0 ---------C   01830  GOTO 01850
    0x5b7e4a73d680 ---------C T 01840  GOTO 01850
    0x5b7e4a73e870 ---------C T 01850  RETURN
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
int    A_int_arr[19][19];                         // Basic: A 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01720();
void Routine_01790();

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

void Routine_01720(){
    // 01720 PRINT A(I,J);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,A_int_arr[I_int][J_int]);fputs(buf,fh); };
    // 01730 NEXT J
    int dummy_1730=0; // Ignore this line.
}; // End-For(J_int)
// 01740 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01750 NEXT I
int dummy_1750=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_int)
r* CName(const char*)// 01760 PRINT
r* CName(const char*){ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
r* CName(const char*)// 01770 GOTO 01780
r* CName(const char*)goto Lbl_01780;

  Lbl_01780:
r* CName(const char*)// 01780 RETURN
r* CName(const char*)return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01790(){
r* CName(const char*)// 01790 IF X<1 THEN 1840
r* CName(const char*)if(X_int<1)goto Lbl_01840;
r* CName(const char*)// 01800 IF X>N THEN 1840
r* CName(const char*)if(X_int>N_int)goto Lbl_01840;
r* CName(const char*)// 01810 IF Y<1 THEN 1840
r* CName(const char*)if(Y_int<1)goto Lbl_01840;
r* CName(const char*)// 01820 IF Y>N THEN 1840
r* CName(const char*)if(Y_int>N_int)goto Lbl_01840;
r* CName(const char*)// 01830 GOTO 01850
r* CName(const char*)goto Lbl_01850;

  Lbl_01840:
r* CName(const char*)// 01840 GOTO 01850
r* CName(const char*)goto Lbl_01850;

  Lbl_01850:
r* CName(const char*)// 01850 RETURN
r* CName(const char*)return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"GOMOKO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"GOMOKO");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 DIM A(19,19)
    // 01060 PRINT "WELCOME TO THE ORIENTAL GAME OF GOMOKO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WELCOME TO THE ORIENTAL GAME OF GOMOKO.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "THE GAME IS PLAYED ON AN N BY N GRID OF A SIZE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE GAME IS PLAYED ON AN N BY N GRID OF A SIZE");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "THAT YOU SPECIFY.  DURING YOUR PLAY, YOU MAY COVER ONE GRID"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT YOU SPECIFY.  DURING YOUR PLAY, YOU MAY COVER ONE GRID");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "INTERSECTION WITH A MARKER. THE OBJECT OF THE GAME IS TO GET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INTERSECTION WITH A MARKER. THE OBJECT OF THE GAME IS TO GET");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "5 ADJACENT MARKERS IN A ROW -- HORIZONTALLY, VERTICALLY, OR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"5 ADJACENT MARKERS IN A ROW -- HORIZONTALLY, VERTICALLY, OR");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "DIAGONALLY.  ON THE BOARD DIAGRAM, YOUR MOVES ARE MARKED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIAGONALLY.  ON THE BOARD DIAGRAM, YOUR MOVES ARE MARKED");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "WITH A '1' AND THE COMPUTER MOVES WITH A '2'."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WITH A '1' AND THE COMPUTER MOVES WITH A '2'.");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "THE COMPUTER DOES NOT KEEP TRACK OF WHO HAS WON."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE COMPUTER DOES NOT KEEP TRACK OF WHO HAS WON.");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "TO END THE GAME, TYPE -1,-1 FOR YOUR MOVE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO END THE GAME, TYPE -1,-1 FOR YOUR MOVE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT "WHAT IS YOUR BOARD SIZE (MIN 7/ MAX 19)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR BOARD SIZE (MIN 7/ MAX 19)");fputs(buf,fh); };

  Lbl_01190:
    // 01190 INPUT N
    // Start of Basic INPUT statement 01190
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
    }; // End of Basic INPUT statement 01190
    // 01200 IF N>6 THEN 1220
    if(N_int>6)goto Lbl_01220;
    // 01210 GOTO 1240
    goto Lbl_01240;

  Lbl_01220:
    // 01220 IF N<20 THEN 1250
    if(N_int<20)goto Lbl_01250;
    // 01230 PRINT "I SAID, THE MINIMUM IS 7, THE MAXIMUM IS 19."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I SAID, THE MINIMUM IS 7, THE MAXIMUM IS 19.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01240:
    // 01240 GOTO 1190
    goto Lbl_01190;

  Lbl_01250:
    // 01250 NEXT I
    int dummy_1250=0; // Ignore this line.
}; // End-For(I_int)
// 01260 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01270 PRINT "WE ALTERNATE MOVES.  YOU GO FIRST..."
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WE ALTERNATE MOVES.  YOU GO FIRST...");strcat(buf,"\n");fputs(buf,fh); };
// 01280 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01290 PRINT "YOUR PLAY (I,J)";
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR PLAY (I,J)");fputs(buf,fh); };

  Lbl_01300:
// 01300 INPUT I,J
// Start of Basic INPUT statement 01300
{
    int numargs=2;
    char *args[numargs+1];
    bool echoeol=true;
    while(true){
        fprintf(stdout," ? ");
        int err=input(args,numargs,echoeol);
        if(err==0x03) break;
        if(err || 
            (err += b2c_strtoi(&I_int,args,0)) ||
            (err += b2c_strtoi(&J_int,args,1)) ){
             printf("?Redo from start\n");
        }else{
            break;
        };
    };
}; // End of Basic INPUT statement 01300
// 01310 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01320 IF I=-1 THEN 1670
if(I_int==-1)goto Lbl_01670;
// 01330 X=I
X_int = I_int;
// 01340 Y=J
Y_int = J_int;
// 01350 GOSUB 1790
Routine_01790();
// 01360 IF L=1 THEN 1390
if(L_int==1)goto Lbl_01390;
// 01370 PRINT "ILLEGAL MOVE.  TRY AGAIN..."
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL MOVE.  TRY AGAIN...");strcat(buf,"\n");fputs(buf,fh); };
// 01380 GOTO 1300
goto Lbl_01300;

  Lbl_01390:
// 01390 IF A(I,J)=0 THEN 1420
if(A_int_arr[I_int][J_int]==0)goto Lbl_01420;
// 01400 PRINT "SQUARE OCCUPIED.  TRY AGAIN..."
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SQUARE OCCUPIED.  TRY AGAIN...");strcat(buf,"\n");fputs(buf,fh); };
// 01410 GOTO 1300
goto Lbl_01300;

  Lbl_01420:
// 01420 A(I,J)=1
A_int_arr[I_int][J_int] = 1;
// 01430 REM *** COMPUTER TRIES AN INTELLIGENT MOVE ***
// 01440 FOR E=-1 TO 1
for(E_int=-1;E_int<=1;E_int++){
    // 01450 FOR F=-1 TO 1
    for(F_int=-1;F_int<=1;F_int++){
        // 01460 IF E+F-E*F=0 THEN 1530
        if(E_int+F_int-E_int*F_int==0)goto Lbl_01530;
        // 01470 X=I+F
        X_int = I_int+F_int;
        // 01480 Y=J+F
        Y_int = J_int+F_int;
        // 01490 GOSUB 1790
        Routine_01790();
        // 01500 IF L=0 THEN 1530
        if(L_int==0)goto Lbl_01530;
        // 01510 IF A(X,Y)=1 THEN 1630
        if(A_int_arr[X_int][Y_int]==1)goto Lbl_01630;
        // 01520 NEXT F
        int dummy_1520=0; // Ignore this line.
    }; // End-For(F_int)

  Lbl_01530:
    // 01530 NEXT E
    int dummy_1530=0; // Ignore this line.
}; // End-For(E_int)
// 01540 REM *** COMPUTER TRIES A RANDOM MOVE ***
// 01550 X=INT(N*RND(1)+1)
X_int = INT(N_int*RND(1)+1);
// 01560 Y=INT(N*RND(1)+1)
Y_int = INT(N_int*RND(1)+1);
// 01570 GOSUB 1790
Routine_01790();

  Lbl_01580:
// 01580 IF L=0 THEN 1580
if(L_int==0)goto Lbl_01580;

  Lbl_01590:
// 01590 IF A(X,Y)<>0 THEN 1580
if(A_int_arr[X_int][Y_int]!=0)goto Lbl_01580;
// 01600 A(X,Y)=2
A_int_arr[X_int][Y_int] = 2;
// 01610 GOSUB 1720
Routine_01720();
// 01620 GOTO 1300
goto Lbl_01300;

  Lbl_01630:
// 01630 GOSUB 1790
Routine_01790();
// 01640 IF L=0 THEN 1580
if(L_int==0)goto Lbl_01580;
// 01650 GOTO 1590
goto Lbl_01590;
// 01660 REM *** PRINT THE BOARD ***

  Lbl_01670:
// 01670 PRINT "THANKS FOR THE GAME!!"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THANKS FOR THE GAME!!");strcat(buf,"\n");fputs(buf,fh); };
// 01680 PRINT "PLAY AGAIN (1 FOR YES, 0 FOR NO)";
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLAY AGAIN (1 FOR YES, 0 FOR NO)");fputs(buf,fh); };
// 01690 INPUT Q
// Start of Basic INPUT statement 01690
{
    int numargs=1;
    char *args[numargs+1];
    bool echoeol=true;
    while(true){
        fprintf(stdout," ? ");
        int err=input(args,numargs,echoeol);
        if(err==0x03) break;
        if(err || 
            (err += b2c_strtoi(&Q_int,args,0)) ){
             printf("?Redo from start\n");
        }else{
            break;
        };
    };
}; // End of Basic INPUT statement 01690
// 01700 IF Q=1 THEN 1190
if(Q_int==1)goto Lbl_01190;
// 01710 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
