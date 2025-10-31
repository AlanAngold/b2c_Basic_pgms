/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/chomp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5dd649c006d0 ---------A   00010  PRINT TAB(33);"CHOMP"
    0x5dd649c00670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5dd649c01910 ---------A   00030  PRINT:PRINT:PRINT
    0x5dd649c02ed0 ---------A   00040  DIM A(10,10)
    0x5dd649c02e10 ---------A   00100  REM *** THE GAME OF CHOMP *** COPYRIGHT PCC 1973 ***
    0x5dd649c01080 ---------A   00110  PRINT 
    0x5dd649c02640 ---------A   00120  PRINT "THIS IS THE GAME OF CHOMP (SCIENTIFIC AMERICAN, JAN 1973)"
    0x5dd649c00c20 ---------A   00130  PRINT "DO YOU WANT THE RULES (1=YES, 0=NO!)";
    0x5dd649c01620 ---------A   00140  INPUT R
    0x5dd649c01880 ---------A   00150  IF R=0 THEN 340
    0x5dd649c02f90 ---------A   00160  F=1
    0x5dd649c08bc0 ---------A   00170  R=5
    0x5dd649c08ec0 ---------A   00180  C=7
    0x5dd649c09030 ---------A   00190  PRINT "CHOMP IS FOR 1 OR MORE PLAYERS (HUMANS ONLY)."
    0x5dd649c090e0 ---------A   00200  PRINT
    0x5dd649c09260 ---------A   00210  PRINT "HERE'S HOW A BOARD LOOKS (THIS ONE IS 5 BY 7):"
    0x5dd649c092e0 ---------A   00220  GOSUB 540
    0x5dd649c09380 ---------A   00230  PRINT
    0x5dd649c09530 ---------A   00240  PRINT "THE BOARD IS A BIG COOKIE - R ROWS HIGH AND C COLUMNS"
    0x5dd649c096f0 ---------A   00250  PRINT "WIDE. YOU INPUT R AND C AT THE START. IN THE UPPER LEFT"
    0x5dd649c098b0 ---------A   00260  PRINT "CORNER OF THE COOKIE IS A POISON SQUARE (P). THE ONE WHO"
    0x5dd649c09a70 ---------A   00270  PRINT "CHOMPS THE POISON SQUARE LOSES. TO TAKE A CHOMP, TYPE THE"
    0x5dd649c09c20 ---------A   00280  PRINT "ROW AND COLUMN OF ONE OF THE SQUARES ON THE COOKIE."
    0x5dd649c09de0 ---------A   00290  PRINT "ALL OF THE SQUARES BELOW AND TO THE RIGHT OF THAT SQUARE"
    0x5dd649c09f90 ---------A   00300  PRINT "(INCLUDING THAT SQUARE, TOO) DISAPPEAR -- CHOMP!!"
    0x5dd649c0a150 ---------A   00310  PRINT "NO FAIR CHOMPING SQUARES THAT HAVE ALREADY BEEN CHOMPED,"
    0x5dd649c0a2e0 ---------A   00320  PRINT "OR THAT ARE OUTSIDE THE ORIGINAL DIMENSIONS OF THE COOKIE."
    0x5dd649c0a340 ---------A   00330  PRINT 
    0x5dd649c0a4a0 ---------A T 00340  PRINT "HERE WE GO..."
    0x5dd649c0a520 ---------A   00350  REM 
    0x5dd649c0a750 ---------A   00360  F=0
    0x5dd649c0aae0 ---------A   00370  FOR I=1 TO 10
    0x5dd649c0ae80 ---------A   00372  FOR J=1 TO 10
    0x5dd649c0b470 ---------A   00375  A(I,J)=0
    0x5dd649c0b5a0 ---------A   00377  NEXT J
    0x5dd649c0b6f0 ---------A   00379  NEXT I
    0x5dd649c0b760 ---------A   00380  PRINT 
    0x5dd649c0b8e0 ---------A   00390  PRINT "HOW MANY PLAYERS";
    0x5dd649c0bb00 ---------A   00400  INPUT P
    0x5dd649c0bdc0 ---------A   00410  I1=0
    0x5dd649c0bf30 ---------A T 00420  PRINT "HOW MANY ROWS";
    0x5dd649c0c090 ---------A   00430  INPUT R
    0x5dd649c0c310 ---------A   00440  IF R <= 9 THEN 470
    0x5dd649c0c470 ---------A   00450  PRINT "TOO MANY ROWS (9 IS MAXIMUM). NOW, ";
    0x5dd649c0c4d0 ---------A   00460  GOTO 420
    0x5dd649c0c640 ---------A T 00470  PRINT "HOW MANY COLUMNS";
    0x5dd649c0c7a0 ---------A   00480  INPUT C
    0x5dd649c0ca20 ---------A   00490  IF C <= 9 THEN 530
    0x5dd649c0cbc0 ---------A   00500  PRINT "TOO MANY COLUMNS (9 IS MAXIMUM). NOW, ";
    0x5dd649c0cc40 ---------A   00510  GOTO 470
    0x5dd649c0ccb0 ---------A T 00530  PRINT 
    0x5dd649c0cfb0 ---------A G 00540  FOR I=1 TO R
    0x5dd649c0d2b0 ---------A   00550  FOR J=1 TO C
    0x5dd649c0d690 ---------A   00560  A(I,J)=1
    0x5dd649c0d7c0 ---------A   00570  NEXT J
    0x5dd649c0d910 ---------A   00580  NEXT I
    0x5dd649c0dcc0 ---------A   00590  A(1,1)=-1
    0x5dd649c0dd30 ---------A   00600  REM PRINT THE BOARD
    0x5dd649c0dda0 ---------A T 00610  PRINT 
    0x5dd649c0e040 ---------A   00620  PRINT TAB(7);"1 2 3 4 5 6 7 8 9"
    0x5dd649c0e340 ---------A   00630  FOR I=1 TO R
    0x5dd649c0e600 ---------A   00640  PRINT I;TAB(7);
    0x5dd649c0e910 ---------A   00650  FOR J=1 TO C
    0x5dd649c0ed40 ---------A   00660  IF A(I,J)=-1 THEN 700
    0x5dd649c0f160 ---------A   00670  IF A(I,J)=0 THEN 720
    0x5dd649c0f6f0 ---------A   00680  PRINT "* ";
    0x5dd649c0f770 ---------A   00690  GOTO 710
    0x5dd649c0f8e0 ---------A T 00700  PRINT "P ";
    0x5dd649c0fa20 ---------A T 00710  NEXT J
    0x5dd649c0fab0 ---------A T 00720  PRINT 
    0x5dd649c0fbf0 ---------A   00730  NEXT I
    0x5dd649c0fc80 ---------A   00740  PRINT 
    0x5dd649c0fee0 ---------A   00750  IF F=0 THEN 770
    0x5dd649c0ff40 ---------A   00760  RETURN 
    0x5dd649c0fff0 ---------A T 00770  REM GET CHOMPS FOR EACH PLAYER IN TURN
    0x5dd649c10350 ---------A   00780  LET I1=I1+1
    0x5dd649c10a80 ---------A   00790  LET P1=I1-INT(I1/P)*P
    0x5dd649c10cd0 ---------A   00800  IF P1 <> 0 THEN 820
    0x5dd649c10f10 ---------A   00810  P1=P
    0x5dd649c11180 ---------A T 00820  PRINT "PLAYER";P1
    0x5dd649c11310 ---------A   00830  PRINT "COORDINATES OF CHOMP (ROW,COLUMN)";
    0x5dd649c116d0 ---------A   00840  INPUT R1,C1
    0x5dd649c11930 ---------A   00850  IF R1<1 THEN 920
    0x5dd649c11bb0 ---------A   00860  IF R1>R THEN 920
    0x5dd649c11e10 ---------A   00870  IF C1<1 THEN 920
    0x5dd649c120a0 ---------A   00880  IF C1>C THEN 920
    0x5dd649c124d0 ---------A   00890  IF A(R1,C1)=0 THEN 920
    0x5dd649c128f0 ---------A   00900  IF A(R1,C1)=-1 THEN 1010
    0x5dd649c129a0 ---------A   00910  GOTO 940
    0x5dd649c12b10 ---------A T 00920  PRINT "NO FAIR. YOU'RE TRYING TO CHOMP ON EMPTY SPACE!"
    0x5dd649c12b90 ---------A   00930  GOTO 820
    0x5dd649c12ea0 ---------A T 00940  FOR I=R1 TO R
    0x5dd649c131c0 ---------A   00950  FOR J=C1 TO C
    0x5dd649c135a0 ---------A   00960  A(I,J)=0
    0x5dd649c136d0 ---------A   00970  NEXT J
    0x5dd649c13820 ---------A   00980  NEXT I
    0x5dd649c138d0 ---------A   00990  GOTO 610
    0x5dd649c13950 ---------A   01000  REM END OF GAME DETECTED IN LINE 900
    0x5dd649c13bd0 ---------A T 01010  PRINT "YOU LOSE, PLAYER";P1
    0x5dd649c13c60 ---------A   01020  PRINT 
    0x5dd649c13de0 ---------A   01030  PRINT "AGAIN (1=YES, 0=NO!)";
    0x5dd649c14000 ---------A   01040  INPUT R$
    0x5dd649c14260 ---------A   01050  IF R=1 THEN 340
    0x5dd649c142c0 ---------A   01060  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00340      00150T, 01050T
     00420      00460T
     00470      00440T, 00510T
     00530      00490T
     00540      00220G
     00610      00990T
     00700      00660T
     00710      00690T
     00720      00670T
     00770      00750T
     00820      00800T, 00930T
     00920      00850T, 00860T, 00870T, 00880T, 00890T
     00940      00910T
     01010      00900T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5dd649c006d0 (00010)   0x5dd649c006d0 (00010)   0x5dd649c142c0 (01060)   0x5dd649c142c0 (01060)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/chomp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5dd649c006d0 ---------A   00010  PRINT TAB(33);"CHOMP"
    0x5dd649c00670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5dd649c01fc0 ----------   00030  PRINT
    0x5dd649c012d0 ----------        a PRINT
    0x5dd649c01910 ---------A        b PRINT
    0x5dd649c02ed0 ---------A   00040  DIM A(10,10)
    0x5dd649c02e10 ---------A   00100  REM *** THE GAME OF CHOMP *** COPYRIGHT PCC 1973 ***
    0x5dd649c01080 ---------A   00110  PRINT 
    0x5dd649c02640 ---------A   00120  PRINT "THIS IS THE GAME OF CHOMP (SCIENTIFIC AMERICAN, JAN 1973)"
    0x5dd649c00c20 ---------A   00130  PRINT "DO YOU WANT THE RULES (1=YES, 0=NO!)";
    0x5dd649c01620 ---------A   00140  INPUT R
    0x5dd649c01880 ---------A   00150  IF R=0 THEN 340
    0x5dd649c02f90 ---------A   00160  F=1
    0x5dd649c08bc0 ---------A   00170  R=5
    0x5dd649c08ec0 ---------A   00180  C=7
    0x5dd649c09030 ---------A   00190  PRINT "CHOMP IS FOR 1 OR MORE PLAYERS (HUMANS ONLY)."
    0x5dd649c090e0 ---------A   00200  PRINT
    0x5dd649c09260 ---------A   00210  PRINT "HERE'S HOW A BOARD LOOKS (THIS ONE IS 5 BY 7):"
    0x5dd649c092e0 ---------A   00220  GOSUB 540
    0x5dd649c09380 ---------A   00230  PRINT
    0x5dd649c09530 ---------A   00240  PRINT "THE BOARD IS A BIG COOKIE - R ROWS HIGH AND C COLUMNS"
    0x5dd649c096f0 ---------A   00250  PRINT "WIDE. YOU INPUT R AND C AT THE START. IN THE UPPER LEFT"
    0x5dd649c098b0 ---------A   00260  PRINT "CORNER OF THE COOKIE IS A POISON SQUARE (P). THE ONE WHO"
    0x5dd649c09a70 ---------A   00270  PRINT "CHOMPS THE POISON SQUARE LOSES. TO TAKE A CHOMP, TYPE THE"
    0x5dd649c09c20 ---------A   00280  PRINT "ROW AND COLUMN OF ONE OF THE SQUARES ON THE COOKIE."
    0x5dd649c09de0 ---------A   00290  PRINT "ALL OF THE SQUARES BELOW AND TO THE RIGHT OF THAT SQUARE"
    0x5dd649c09f90 ---------A   00300  PRINT "(INCLUDING THAT SQUARE, TOO) DISAPPEAR -- CHOMP!!"
    0x5dd649c0a150 ---------A   00310  PRINT "NO FAIR CHOMPING SQUARES THAT HAVE ALREADY BEEN CHOMPED,"
    0x5dd649c0a2e0 ---------A   00320  PRINT "OR THAT ARE OUTSIDE THE ORIGINAL DIMENSIONS OF THE COOKIE."
    0x5dd649c0a340 ---------A   00330  PRINT 
    0x5dd649c0a4a0 ---------A T 00340  PRINT "HERE WE GO..."
    0x5dd649c0a520 ---------A   00350  REM 
    0x5dd649c0a750 ---------A   00360  F=0
    0x5dd649c0aae0 ---------A   00370  FOR I=1 TO 10
    0x5dd649c0ae80 ---------A   00372  FOR J=1 TO 10
    0x5dd649c0b470 ---------A   00375  A(I,J)=0
    0x5dd649c0b5a0 ---------A   00377  NEXT J
    0x5dd649c0b6f0 ---------A   00379  NEXT I
    0x5dd649c0b760 ---------A   00380  PRINT 
    0x5dd649c0b8e0 ---------A   00390  PRINT "HOW MANY PLAYERS";
    0x5dd649c0bb00 ---------A   00400  INPUT P
    0x5dd649c0bdc0 ---------A   00410  I1=0
    0x5dd649c0bf30 ---------A T 00420  PRINT "HOW MANY ROWS";
    0x5dd649c0c090 ---------A   00430  INPUT R
    0x5dd649c0c310 ---------A   00440  IF R <= 9 THEN 470
    0x5dd649c0c470 ---------A   00450  PRINT "TOO MANY ROWS (9 IS MAXIMUM). NOW, ";
    0x5dd649c0c4d0 ---------A   00460  GOTO 420
    0x5dd649c0c640 ---------A T 00470  PRINT "HOW MANY COLUMNS";
    0x5dd649c0c7a0 ---------A   00480  INPUT C
    0x5dd649c0ca20 ---------A   00490  IF C <= 9 THEN 530
    0x5dd649c0cbc0 ---------A   00500  PRINT "TOO MANY COLUMNS (9 IS MAXIMUM). NOW, ";
    0x5dd649c0cc40 ---------A   00510  GOTO 470
    0x5dd649c0ccb0 ---------A T 00530  PRINT 
    0x5dd649c0cfb0 ---------A G 00540  FOR I=1 TO R
    0x5dd649c0d2b0 ---------A   00550  FOR J=1 TO C
    0x5dd649c0d690 ---------A   00560  A(I,J)=1
    0x5dd649c0d7c0 ---------A   00570  NEXT J
    0x5dd649c0d910 ---------A   00580  NEXT I
    0x5dd649c0dcc0 ---------A   00590  A(1,1)=-1
    0x5dd649c0dd30 ---------A   00600  REM PRINT THE BOARD
    0x5dd649c0dda0 ---------A T 00610  PRINT 
    0x5dd649c0e040 ---------A   00620  PRINT TAB(7);"1 2 3 4 5 6 7 8 9"
    0x5dd649c0e340 ---------A   00630  FOR I=1 TO R
    0x5dd649c0e600 ---------A   00640  PRINT I;TAB(7);
    0x5dd649c0e910 ---------A   00650  FOR J=1 TO C
    0x5dd649c0ed40 ---------A   00660  IF A(I,J)=-1 THEN 700
    0x5dd649c0f160 ---------A   00670  IF A(I,J)=0 THEN 720
    0x5dd649c0f6f0 ---------A   00680  PRINT "* ";
    0x5dd649c0f770 ---------A   00690  GOTO 710
    0x5dd649c0f8e0 ---------A T 00700  PRINT "P ";
    0x5dd649c0fa20 ---------A T 00710  NEXT J
    0x5dd649c0fab0 ---------A T 00720  PRINT 
    0x5dd649c0fbf0 ---------A   00730  NEXT I
    0x5dd649c0fc80 ---------A   00740  PRINT 
    0x5dd649c0fee0 ---------A   00750  IF F=0 THEN 770
    0x5dd649c0ff40 ---------A   00760  RETURN 
    0x5dd649c0fff0 ---------A T 00770  REM GET CHOMPS FOR EACH PLAYER IN TURN
    0x5dd649c10350 ---------A   00780  LET I1=I1+1
    0x5dd649c10a80 ---------A   00790  LET P1=I1-INT(I1/P)*P
    0x5dd649c10cd0 ---------A   00800  IF P1 <> 0 THEN 820
    0x5dd649c10f10 ---------A   00810  P1=P
    0x5dd649c11180 ---------A T 00820  PRINT "PLAYER";P1
    0x5dd649c11310 ---------A   00830  PRINT "COORDINATES OF CHOMP (ROW,COLUMN)";
    0x5dd649c116d0 ---------A   00840  INPUT R1,C1
    0x5dd649c11930 ---------A   00850  IF R1<1 THEN 920
    0x5dd649c11bb0 ---------A   00860  IF R1>R THEN 920
    0x5dd649c11e10 ---------A   00870  IF C1<1 THEN 920
    0x5dd649c120a0 ---------A   00880  IF C1>C THEN 920
    0x5dd649c124d0 ---------A   00890  IF A(R1,C1)=0 THEN 920
    0x5dd649c128f0 ---------A   00900  IF A(R1,C1)=-1 THEN 1010
    0x5dd649c129a0 ---------A   00910  GOTO 940
    0x5dd649c12b10 ---------A T 00920  PRINT "NO FAIR. YOU'RE TRYING TO CHOMP ON EMPTY SPACE!"
    0x5dd649c12b90 ---------A   00930  GOTO 820
    0x5dd649c12ea0 ---------A T 00940  FOR I=R1 TO R
    0x5dd649c131c0 ---------A   00950  FOR J=C1 TO C
    0x5dd649c135a0 ---------A   00960  A(I,J)=0
    0x5dd649c136d0 ---------A   00970  NEXT J
    0x5dd649c13820 ---------A   00980  NEXT I
    0x5dd649c138d0 ---------A   00990  GOTO 610
    0x5dd649c13950 ---------A   01000  REM END OF GAME DETECTED IN LINE 900
    0x5dd649c13bd0 ---------A T 01010  PRINT "YOU LOSE, PLAYER";P1
    0x5dd649c13c60 ---------A   01020  PRINT 
    0x5dd649c13de0 ---------A   01030  PRINT "AGAIN (1=YES, 0=NO!)";
    0x5dd649c14000 ---------A   01040  INPUT R$
    0x5dd649c14260 ---------A   01050  IF R=1 THEN 340
    0x5dd649c142c0 ---------A   01060  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/chomp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5dd649c006d0 ---------A   01000  PRINT TAB(33);"CHOMP"
    0x5dd649c00670 ---------A T 01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5dd649c01fc0 ----------   01020  PRINT
    0x5dd649c012d0 ----------   01030  PRINT
    0x5dd649c01910 ---------A   01040  PRINT
    0x5dd649c02ed0 ---------A   01050  DIM A(10,10)
    0x5dd649c02e10 ---------A   01060  REM *** THE GAME OF CHOMP *** COPYRIGHT PCC 1973 ***
    0x5dd649c01080 ---------A   01070  PRINT 
    0x5dd649c02640 ---------A   01080  PRINT "THIS IS THE GAME OF CHOMP (SCIENTIFIC AMERICAN, JAN 1973)"
    0x5dd649c00c20 ---------A   01090  PRINT "DO YOU WANT THE RULES (1=YES, 0=NO!)";
    0x5dd649c01620 ---------A   01100  INPUT R
    0x5dd649c01880 ---------A   01110  IF R=0 THEN 1300
    0x5dd649c02f90 ---------A   01120  F=1
    0x5dd649c08bc0 ---------A   01130  R=5
    0x5dd649c08ec0 ---------A   01140  C=7
    0x5dd649c09030 ---------A   01150  PRINT "CHOMP IS FOR 1 OR MORE PLAYERS (HUMANS ONLY)."
    0x5dd649c090e0 ---------A   01160  PRINT
    0x5dd649c09260 ---------A   01170  PRINT "HERE'S HOW A BOARD LOOKS (THIS ONE IS 5 BY 7):"
    0x5dd649c092e0 ---------A   01180  GOSUB 1530
    0x5dd649c09380 ---------A   01190  PRINT
    0x5dd649c09530 ---------A   01200  PRINT "THE BOARD IS A BIG COOKIE - R ROWS HIGH AND C COLUMNS"
    0x5dd649c096f0 ---------A   01210  PRINT "WIDE. YOU INPUT R AND C AT THE START. IN THE UPPER LEFT"
    0x5dd649c098b0 ---------A   01220  PRINT "CORNER OF THE COOKIE IS A POISON SQUARE (P). THE ONE WHO"
    0x5dd649c09a70 ---------A   01230  PRINT "CHOMPS THE POISON SQUARE LOSES. TO TAKE A CHOMP, TYPE THE"
    0x5dd649c09c20 ---------A   01240  PRINT "ROW AND COLUMN OF ONE OF THE SQUARES ON THE COOKIE."
    0x5dd649c09de0 ---------A   01250  PRINT "ALL OF THE SQUARES BELOW AND TO THE RIGHT OF THAT SQUARE"
    0x5dd649c09f90 ---------A   01260  PRINT "(INCLUDING THAT SQUARE, TOO) DISAPPEAR -- CHOMP!!"
    0x5dd649c0a150 ---------A   01270  PRINT "NO FAIR CHOMPING SQUARES THAT HAVE ALREADY BEEN CHOMPED,"
    0x5dd649c0a2e0 ---------A   01280  PRINT "OR THAT ARE OUTSIDE THE ORIGINAL DIMENSIONS OF THE COOKIE."
    0x5dd649c0a340 ---------A   01290  PRINT 
    0x5dd649c0a4a0 ---------A   01300  PRINT "HERE WE GO..."
    0x5dd649c0a520 ---------A   01310  REM 
    0x5dd649c0a750 ---------A   01320  F=0
    0x5dd649c0aae0 ---------A   01330  FOR I=1 TO 10
    0x5dd649c0ae80 ---------A   01340  FOR J=1 TO 10
    0x5dd649c0b470 ---------A   01350  A(I,J)=0
    0x5dd649c0b5a0 ---------A   01360  NEXT J
    0x5dd649c0b6f0 ---------A   01370  NEXT I
    0x5dd649c0b760 ---------A   01380  PRINT 
    0x5dd649c0b8e0 ---------A   01390  PRINT "HOW MANY PLAYERS";
    0x5dd649c0bb00 ---------A   01400  INPUT P
    0x5dd649c0bdc0 ---------A   01410  I1=0
    0x5dd649c0bf30 ---------A   01420  PRINT "HOW MANY ROWS";
    0x5dd649c0c090 ---------A   01430  INPUT R
    0x5dd649c0c310 ---------A   01440  IF R <= 9 THEN 1470
    0x5dd649c0c470 ---------A   01450  PRINT "TOO MANY ROWS (9 IS MAXIMUM). NOW, ";
    0x5dd649c0c4d0 ---------A   01460  GOTO 1420
    0x5dd649c0c640 ---------A   01470  PRINT "HOW MANY COLUMNS";
    0x5dd649c0c7a0 ---------A   01480  INPUT C
    0x5dd649c0ca20 ---------A   01490  IF C <= 9 THEN 1520
    0x5dd649c0cbc0 ---------A   01500  PRINT "TOO MANY COLUMNS (9 IS MAXIMUM). NOW, ";
    0x5dd649c0cc40 ---------A   01510  GOTO 1470
    0x5dd649c0ccb0 ---------A   01520  PRINT 
    0x5dd649c0cfb0 ---------A   01530  FOR I=1 TO R
    0x5dd649c0d2b0 ---------A   01540  FOR J=1 TO C
    0x5dd649c0d690 ---------A   01550  A(I,J)=1
    0x5dd649c0d7c0 ---------A   01560  NEXT J
    0x5dd649c0d910 ---------A   01570  NEXT I
    0x5dd649c0dcc0 ---------A   01580  A(1,1)=-1
    0x5dd649c0dd30 ---------A   01590  REM PRINT THE BOARD
    0x5dd649c0dda0 ---------A   01600  PRINT 
    0x5dd649c0e040 ---------A   01610  PRINT TAB(7);"1 2 3 4 5 6 7 8 9"
    0x5dd649c0e340 ---------A   01620  FOR I=1 TO R
    0x5dd649c0e600 ---------A   01630  PRINT I;TAB(7);
    0x5dd649c0e910 ---------A   01640  FOR J=1 TO C
    0x5dd649c0ed40 ---------A   01650  IF A(I,J)=-1 THEN 1690
    0x5dd649c0f160 ---------A   01660  IF A(I,J)=0 THEN 1710
    0x5dd649c0f6f0 ---------A   01670  PRINT "* ";
    0x5dd649c0f770 ---------A   01680  GOTO 1700
    0x5dd649c0f8e0 ---------A   01690  PRINT "P ";
    0x5dd649c0fa20 ---------A   01700  NEXT J
    0x5dd649c0fab0 ---------A   01710  PRINT 
    0x5dd649c0fbf0 ---------A   01720  NEXT I
    0x5dd649c0fc80 ---------A   01730  PRINT 
    0x5dd649c0fee0 ---------A   01740  IF F=0 THEN 1760
    0x5dd649c0ff40 ---------A   01750  RETURN 
    0x5dd649c0fff0 ---------A   01760  REM GET CHOMPS FOR EACH PLAYER IN TURN
    0x5dd649c10350 ---------A   01770  LET I1=I1+1
    0x5dd649c10a80 ---------A   01780  LET P1=I1-INT(I1/P)*P
    0x5dd649c10cd0 ---------A   01790  IF P1 <> 0 THEN 1810
    0x5dd649c10f10 ---------A   01800  P1=P
    0x5dd649c11180 ---------A   01810  PRINT "PLAYER";P1
    0x5dd649c11310 ---------A   01820  PRINT "COORDINATES OF CHOMP (ROW,COLUMN)";
    0x5dd649c116d0 ---------A   01830  INPUT R1,C1
    0x5dd649c11930 ---------A   01840  IF R1<1 THEN 1910
    0x5dd649c11bb0 ---------A   01850  IF R1>R THEN 1910
    0x5dd649c11e10 ---------A   01860  IF C1<1 THEN 1910
    0x5dd649c120a0 ---------A   01870  IF C1>C THEN 1910
    0x5dd649c124d0 ---------A   01880  IF A(R1,C1)=0 THEN 1910
    0x5dd649c128f0 ---------A   01890  IF A(R1,C1)=-1 THEN 2000
    0x5dd649c129a0 ---------A   01900  GOTO 1930
    0x5dd649c12b10 ---------A   01910  PRINT "NO FAIR. YOU'RE TRYING TO CHOMP ON EMPTY SPACE!"
    0x5dd649c12b90 ---------A   01920  GOTO 1810
    0x5dd649c12ea0 ---------A   01930  FOR I=R1 TO R
    0x5dd649c131c0 ---------A   01940  FOR J=C1 TO C
    0x5dd649c135a0 ---------A   01950  A(I,J)=0
    0x5dd649c136d0 ---------A   01960  NEXT J
    0x5dd649c13820 ---------A   01970  NEXT I
    0x5dd649c138d0 ---------A   01980  GOTO 1600
    0x5dd649c13950 ---------A   01990  REM END OF GAME DETECTED IN LINE 900
    0x5dd649c13bd0 ---------A   02000  PRINT "YOU LOSE, PLAYER";P1
    0x5dd649c13c60 ---------A   02010  PRINT 
    0x5dd649c13de0 ---------A   02020  PRINT "AGAIN (1=YES, 0=NO!)";
    0x5dd649c14000 ---------A   02030  INPUT R$
    0x5dd649c14260 ---------A   02040  IF R=1 THEN 1300
    0x5dd649c142c0 ---------A   02050  END
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
 *  Symbol Table Listing for 'basic/chomp.bas'
 *
    A               Array    Integer         {0,9} {0,9} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Integer     
    C1                       Integer     
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
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
    I1                       Integer     
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
    OCT$            Function String          args=1, float  
    P                        Integer     
    P1                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
    R$                       String      
    R1                       Integer     
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/chomp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5dd649c006d0 ---------A   01000  PRINT TAB(33);"CHOMP"
    0x5dd649c00670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5dd649c01fc0 ---------A   01020  PRINT
    0x5dd649c012d0 ---------A   01030  PRINT
    0x5dd649c01910 ---------A   01040  PRINT
    0x5dd649c02ed0 ---------A   01050  DIM A(10,10)
    0x5dd649c02e10 ---------A   01060  REM *** THE GAME OF CHOMP *** COPYRIGHT PCC 1973 ***
    0x5dd649c01080 ---------A   01070  PRINT 
    0x5dd649c02640 ---------A   01080  PRINT "THIS IS THE GAME OF CHOMP (SCIENTIFIC AMERICAN, JAN 1973)"
    0x5dd649c00c20 ---------A   01090  PRINT "DO YOU WANT THE RULES (1=YES, 0=NO!)";
    0x5dd649c01620 ---------A   01100  INPUT R
    0x5dd649c01880 ---------A   01110  IF R=0 THEN 1300
    0x5dd649c02f90 ---------A   01120  F=1
    0x5dd649c08bc0 ---------A   01130  R=5
    0x5dd649c08ec0 ---------A   01140  C=7
    0x5dd649c09030 ---------A   01150  PRINT "CHOMP IS FOR 1 OR MORE PLAYERS (HUMANS ONLY)."
    0x5dd649c090e0 ---------A   01160  PRINT
    0x5dd649c09260 ---------A   01170  PRINT "HERE'S HOW A BOARD LOOKS (THIS ONE IS 5 BY 7):"
    0x5dd649c092e0 ---------A   01180  GOSUB 1530
    0x5dd649c09380 ---------A   01190  PRINT
    0x5dd649c09530 ---------A   01200  PRINT "THE BOARD IS A BIG COOKIE - R ROWS HIGH AND C COLUMNS"
    0x5dd649c096f0 ---------A   01210  PRINT "WIDE. YOU INPUT R AND C AT THE START. IN THE UPPER LEFT"
    0x5dd649c098b0 ---------A   01220  PRINT "CORNER OF THE COOKIE IS A POISON SQUARE (P). THE ONE WHO"
    0x5dd649c09a70 ---------A   01230  PRINT "CHOMPS THE POISON SQUARE LOSES. TO TAKE A CHOMP, TYPE THE"
    0x5dd649c09c20 ---------A   01240  PRINT "ROW AND COLUMN OF ONE OF THE SQUARES ON THE COOKIE."
    0x5dd649c09de0 ---------A   01250  PRINT "ALL OF THE SQUARES BELOW AND TO THE RIGHT OF THAT SQUARE"
    0x5dd649c09f90 ---------A   01260  PRINT "(INCLUDING THAT SQUARE, TOO) DISAPPEAR -- CHOMP!!"
    0x5dd649c0a150 ---------A   01270  PRINT "NO FAIR CHOMPING SQUARES THAT HAVE ALREADY BEEN CHOMPED,"
    0x5dd649c0a2e0 ---------A   01280  PRINT "OR THAT ARE OUTSIDE THE ORIGINAL DIMENSIONS OF THE COOKIE."
    0x5dd649c0a340 ---------A   01290  PRINT 
    0x5dd649c0a4a0 ---------A T 01300  PRINT "HERE WE GO..."
    0x5dd649c0a520 ---------A   01310  REM 
    0x5dd649c0a750 ---------A   01320  F=0
    0x5dd649c0aae0 ---------A   01330  FOR I=1 TO 10
    0x5dd649c0ae80 ---------A   01340  FOR J=1 TO 10
    0x5dd649c0b470 ---------A   01350  A(I,J)=0
    0x5dd649c0b5a0 ---------A   01360  NEXT J
    0x5dd649c0b6f0 ---------A   01370  NEXT I
    0x5dd649c0b760 ---------A   01380  PRINT 
    0x5dd649c0b8e0 ---------A   01390  PRINT "HOW MANY PLAYERS";
    0x5dd649c0bb00 ---------A   01400  INPUT P
    0x5dd649c0bdc0 ---------A   01410  I1=0
    0x5dd649c0bf30 ---------A T 01420  PRINT "HOW MANY ROWS";
    0x5dd649c0c090 ---------A   01430  INPUT R
    0x5dd649c0c310 ---------A   01440  IF R <= 9 THEN 1470
    0x5dd649c0c470 ---------A   01450  PRINT "TOO MANY ROWS (9 IS MAXIMUM). NOW, ";
    0x5dd649c0c4d0 ---------A   01460  GOTO 1420
    0x5dd649c0c640 ---------A T 01470  PRINT "HOW MANY COLUMNS";
    0x5dd649c0c7a0 ---------A   01480  INPUT C
    0x5dd649c0ca20 ---------A   01490  IF C <= 9 THEN 1520
    0x5dd649c0cbc0 ---------A   01500  PRINT "TOO MANY COLUMNS (9 IS MAXIMUM). NOW, ";
    0x5dd649c0cc40 ---------A   01510  GOTO 1470
    0x5dd649c0ccb0 ---------A T 01520  PRINT 
    0x5dd649c0cfb0 ---------A G 01530  FOR I=1 TO R
    0x5dd649c0d2b0 ---------A   01540  FOR J=1 TO C
    0x5dd649c0d690 ---------A   01550  A(I,J)=1
    0x5dd649c0d7c0 ---------A   01560  NEXT J
    0x5dd649c0d910 ---------A   01570  NEXT I
    0x5dd649c0dcc0 ---------A   01580  A(1,1)=-1
    0x5dd649c0dd30 ---------A   01590  REM PRINT THE BOARD
    0x5dd649c0dda0 ---------A T 01600  PRINT 
    0x5dd649c0e040 ---------A   01610  PRINT TAB(7);"1 2 3 4 5 6 7 8 9"
    0x5dd649c0e340 ---------A   01620  FOR I=1 TO R
    0x5dd649c0e600 ---------A   01630  PRINT I;TAB(7);
    0x5dd649c0e910 ---------A   01640  FOR J=1 TO C
    0x5dd649c0ed40 ---------A   01650  IF A(I,J)=-1 THEN 1690
    0x5dd649c0f160 ---------A   01660  IF A(I,J)=0 THEN 1710
    0x5dd649c0f6f0 ---------A   01670  PRINT "* ";
    0x5dd649c0f770 ---------A   01680  GOTO 1700
    0x5dd649c0f8e0 ---------A T 01690  PRINT "P ";
    0x5dd649c0fa20 ---------A T 01700  NEXT J
    0x5dd649c0fab0 ---------A T 01710  PRINT 
    0x5dd649c0fbf0 ---------A   01720  NEXT I
    0x5dd649c0fc80 ---------A   01730  PRINT 
    0x5dd649c0fee0 ---------A   01740  IF F=0 THEN 1760
    0x5dd649c16430 ---------A   01750  GOTO 09900
    0x5dd649c0fff0 ---------A T 01760  REM GET CHOMPS FOR EACH PLAYER IN TURN
    0x5dd649c10350 ---------A   01770  LET I1=I1+1
    0x5dd649c10a80 ---------A   01780  LET P1=I1-INT(I1/P)*P
    0x5dd649c10cd0 ---------A   01790  IF P1 <> 0 THEN 1810
    0x5dd649c10f10 ---------A   01800  P1=P
    0x5dd649c11180 ---------A T 01810  PRINT "PLAYER";P1
    0x5dd649c11310 ---------A   01820  PRINT "COORDINATES OF CHOMP (ROW,COLUMN)";
    0x5dd649c116d0 ---------A   01830  INPUT R1,C1
    0x5dd649c11930 ---------A   01840  IF R1<1 THEN 1910
    0x5dd649c11bb0 ---------A   01850  IF R1>R THEN 1910
    0x5dd649c11e10 ---------A   01860  IF C1<1 THEN 1910
    0x5dd649c120a0 ---------A   01870  IF C1>C THEN 1910
    0x5dd649c124d0 ---------A   01880  IF A(R1,C1)=0 THEN 1910
    0x5dd649c128f0 ---------A   01890  IF A(R1,C1)=-1 THEN 2000
    0x5dd649c129a0 ---------A   01900  GOTO 1930
    0x5dd649c12b10 ---------A T 01910  PRINT "NO FAIR. YOU'RE TRYING TO CHOMP ON EMPTY SPACE!"
    0x5dd649c12b90 ---------A   01920  GOTO 1810
    0x5dd649c12ea0 ---------A T 01930  FOR I=R1 TO R
    0x5dd649c131c0 ---------A   01940  FOR J=C1 TO C
    0x5dd649c135a0 ---------A   01950  A(I,J)=0
    0x5dd649c136d0 ---------A   01960  NEXT J
    0x5dd649c13820 ---------A   01970  NEXT I
    0x5dd649c138d0 ---------A   01980  GOTO 1600
    0x5dd649c13950 ---------A   01990  REM END OF GAME DETECTED IN LINE 900
    0x5dd649c13bd0 ---------A T 02000  PRINT "YOU LOSE, PLAYER";P1
    0x5dd649c13c60 ---------A   02010  PRINT 
    0x5dd649c13de0 ---------A   02020  PRINT "AGAIN (1=YES, 0=NO!)";
    0x5dd649c14000 ---------A   02030  INPUT R$
    0x5dd649c14260 ---------A   02040  IF R=1 THEN 1300
    0x5dd649c142c0 ---------A   02050  END
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
int    A_int_arr[10][10];                         // Basic: A 
int    C_int;                                     // Basic: C 
int    C1_int;                                    // Basic: C1 
int    F_int;                                     // Basic: F 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    J_int;                                     // Basic: J 
int    P_int;                                     // Basic: P 
int    P1_int;                                    // Basic: P1 
int    R_int;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
int    R1_int;                                    // Basic: R1 
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
    // 01000 PRINT TAB(33);"CHOMP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"CHOMP");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 DIM A(10,10)
    // 01060 REM *** THE GAME OF CHOMP *** COPYRIGHT PCC 1973 ***
    // 01070 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "THIS IS THE GAME OF CHOMP (SCIENTIFIC AMERICAN, JAN 1973)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS THE GAME OF CHOMP (SCIENTIFIC AMERICAN, JAN 1973)");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "DO YOU WANT THE RULES (1=YES, 0=NO!)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT THE RULES (1=YES, 0=NO!)");fputs(buf,fh); };
    // 01100 INPUT R
    // Start of Basic INPUT statement 01100
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01100
    // 01110 IF R=0 THEN 1300
    if(R_int==0)goto Lbl_01300;
    // 01120 F=1
    F_int = 1;
    // 01130 R=5
    R_int = 5;
    // 01140 C=7
    C_int = 7;
    // 01150 PRINT "CHOMP IS FOR 1 OR MORE PLAYERS (HUMANS ONLY)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHOMP IS FOR 1 OR MORE PLAYERS (HUMANS ONLY).");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "HERE'S HOW A BOARD LOOKS (THIS ONE IS 5 BY 7):"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE'S HOW A BOARD LOOKS (THIS ONE IS 5 BY 7):");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 GOSUB 1530
    Routine_01530();
    // 01190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "THE BOARD IS A BIG COOKIE - R ROWS HIGH AND C COLUMNS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE BOARD IS A BIG COOKIE - R ROWS HIGH AND C COLUMNS");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "WIDE. YOU INPUT R AND C AT THE START. IN THE UPPER LEFT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WIDE. YOU INPUT R AND C AT THE START. IN THE UPPER LEFT");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "CORNER OF THE COOKIE IS A POISON SQUARE (P). THE ONE WHO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CORNER OF THE COOKIE IS A POISON SQUARE (P). THE ONE WHO");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "CHOMPS THE POISON SQUARE LOSES. TO TAKE A CHOMP, TYPE THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHOMPS THE POISON SQUARE LOSES. TO TAKE A CHOMP, TYPE THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "ROW AND COLUMN OF ONE OF THE SQUARES ON THE COOKIE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ROW AND COLUMN OF ONE OF THE SQUARES ON THE COOKIE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "ALL OF THE SQUARES BELOW AND TO THE RIGHT OF THAT SQUARE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ALL OF THE SQUARES BELOW AND TO THE RIGHT OF THAT SQUARE");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "(INCLUDING THAT SQUARE, TOO) DISAPPEAR -- CHOMP!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(INCLUDING THAT SQUARE, TOO) DISAPPEAR -- CHOMP!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "NO FAIR CHOMPING SQUARES THAT HAVE ALREADY BEEN CHOMPED,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NO FAIR CHOMPING SQUARES THAT HAVE ALREADY BEEN CHOMPED,");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT "OR THAT ARE OUTSIDE THE ORIGINAL DIMENSIONS OF THE COOKIE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OR THAT ARE OUTSIDE THE ORIGINAL DIMENSIONS OF THE COOKIE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01300:
    // 01300 PRINT "HERE WE GO..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE WE GO...");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 REM 
    // 01320 F=0
    F_int = 0;
    // 01330 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 01340 FOR J=1 TO 10
        for(J_int=1;J_int<=10;J_int++){
            // 01350 A(I,J)=0
            A_int_arr[I_int][J_int] = 0;
            // 01360 NEXT J
            int dummy_1360=0; // Ignore this line.
        }; // End-For(J_int)
        // 01370 NEXT I
        int dummy_1370=0; // Ignore this line.
    }; // End-For(I_int)
    // 01380 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01390 PRINT "HOW MANY PLAYERS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY PLAYERS");fputs(buf,fh); };
    // 01400 INPUT P
    // Start of Basic INPUT statement 01400
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
    }; // End of Basic INPUT statement 01400
    // 01410 I1=0
    I1_int = 0;

  Lbl_01420:
    // 01420 PRINT "HOW MANY ROWS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY ROWS");fputs(buf,fh); };
    // 01430 INPUT R
    // Start of Basic INPUT statement 01430
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01430
    // 01440 IF R <= 9 THEN 1470
    if(R_int<=9)goto Lbl_01470;
    // 01450 PRINT "TOO MANY ROWS (9 IS MAXIMUM). NOW, ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO MANY ROWS (9 IS MAXIMUM). NOW, ");fputs(buf,fh); };
    // 01460 GOTO 1420
    goto Lbl_01420;

  Lbl_01470:
    // 01470 PRINT "HOW MANY COLUMNS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY COLUMNS");fputs(buf,fh); };
    // 01480 INPUT C
    // Start of Basic INPUT statement 01480
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01480
    // 01490 IF C <= 9 THEN 1520
    if(C_int<=9)goto Lbl_01520;
    // 01500 PRINT "TOO MANY COLUMNS (9 IS MAXIMUM). NOW, ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO MANY COLUMNS (9 IS MAXIMUM). NOW, ");fputs(buf,fh); };
    // 01510 GOTO 1470
    goto Lbl_01470;

  Lbl_01520:
    // 01520 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

void Routine_01530(){
    // 01530 FOR I=1 TO R
    for(I_int=1;I_int<=R_int;I_int++){
        // 01540 FOR J=1 TO C
        for(J_int=1;J_int<=C_int;J_int++){
            // 01550 A(I,J)=1
            A_int_arr[I_int][J_int] = 1;
            // 01560 NEXT J
            int dummy_1560=0; // Ignore this line.
        }; // End-For(J_int)
        // 01570 NEXT I
        int dummy_1570=0; // Ignore this line.
    }; // End-For(I_int)
    // 01580 A(1,1)=-1
    A_int_arr[1][1] = -1;
    // 01590 REM PRINT THE BOARD

  Lbl_01600:
    // 01600 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01610 PRINT TAB(7);"1 2 3 4 5 6 7 8 9"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,7);strcat(buf,"1 2 3 4 5 6 7 8 9");strcat(buf,"\n");fputs(buf,fh); };
    // 01620 FOR I=1 TO R
    for(I_int=1;I_int<=R_int;I_int++){
        // 01630 PRINT I;TAB(7);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,I_int);b2c_TAB(buf,7);fputs(buf,fh); };
        // 01640 FOR J=1 TO C
        for(J_int=1;J_int<=C_int;J_int++){
            // 01650 IF A(I,J)=-1 THEN 1690
            if(A_int_arr[I_int][J_int]==-1)goto Lbl_01690;
            // 01660 IF A(I,J)=0 THEN 1710
            if(A_int_arr[I_int][J_int]==0)goto Lbl_01710;
            // 01670 PRINT "* ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"* ");fputs(buf,fh); };
            // 01680 GOTO 1700
            goto Lbl_01700;

  Lbl_01690:
            // 01690 PRINT "P ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"P ");fputs(buf,fh); };

  Lbl_01700:
            // 01700 NEXT J
            int dummy_1700=0; // Ignore this line.
        }; // End-For(J_int)

  Lbl_01710:
        // 01710 PRINT 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01720 NEXT I
        int dummy_1720=0; // Ignore this line.
    }; // End-For(I_int)
    // 01730 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01740 IF F=0 THEN 1760
    if(F_int==0)goto Lbl_01760;
    // 01750 GOTO 09900
    goto Lbl_09900;

  Lbl_01760:
    // 01760 REM GET CHOMPS FOR EACH PLAYER IN TURN
    // 01770 LET I1=I1+1
    I1_int = I1_int+1;
    // 01780 LET P1=I1-INT(I1/P)*P
    P1_int = I1_int-INT(I1_int/P_int)*P_int;
    // 01790 IF P1 <> 0 THEN 1810
    if(P1_int!=0)goto Lbl_01810;
    // 01800 P1=P
    P1_int = P_int;

  Lbl_01810:
    // 01810 PRINT "PLAYER";P1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLAYER"); b2c_INT(buf,P1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01820 PRINT "COORDINATES OF CHOMP (ROW,COLUMN)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COORDINATES OF CHOMP (ROW,COLUMN)");fputs(buf,fh); };
    // 01830 INPUT R1,C1
    // Start of Basic INPUT statement 01830
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R1_int,args,0)) ||
                (err += b2c_strtoi(&C1_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01830
    // 01840 IF R1<1 THEN 1910
    if(R1_int<1)goto Lbl_01910;
    // 01850 IF R1>R THEN 1910
    if(R1_int>R_int)goto Lbl_01910;
    // 01860 IF C1<1 THEN 1910
    if(C1_int<1)goto Lbl_01910;
    // 01870 IF C1>C THEN 1910
    if(C1_int>C_int)goto Lbl_01910;
    // 01880 IF A(R1,C1)=0 THEN 1910
    if(A_int_arr[R1_int][C1_int]==0)goto Lbl_01910;
    // 01890 IF A(R1,C1)=-1 THEN 2000
    if(A_int_arr[R1_int][C1_int]==-1)goto Lbl_02000;
    // 01900 GOTO 1930
    goto Lbl_01930;

  Lbl_01910:
    // 01910 PRINT "NO FAIR. YOU'RE TRYING TO CHOMP ON EMPTY SPACE!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NO FAIR. YOU'RE TRYING TO CHOMP ON EMPTY SPACE!");strcat(buf,"\n");fputs(buf,fh); };
    // 01920 GOTO 1810
    goto Lbl_01810;

  Lbl_01930:
    // 01930 FOR I=R1 TO R
    for(I_int=R1_int;I_int<=R_int;I_int++){
        // 01940 FOR J=C1 TO C
        for(J_int=C1_int;J_int<=C_int;J_int++){
            // 01950 A(I,J)=0
            A_int_arr[I_int][J_int] = 0;
            // 01960 NEXT J
            int dummy_1960=0; // Ignore this line.
        }; // End-For(J_int)
        // 01970 NEXT I
        int dummy_1970=0; // Ignore this line.
    }; // End-For(I_int)
    // 01980 GOTO 1600
    goto Lbl_01600;
    // 01990 REM END OF GAME DETECTED IN LINE 900

  Lbl_02000:
    // 02000 PRINT "YOU LOSE, PLAYER";P1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU LOSE, PLAYER"); b2c_INT(buf,P1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 02010 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02020 PRINT "AGAIN (1=YES, 0=NO!)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AGAIN (1=YES, 0=NO!)");fputs(buf,fh); };
    // 02030 INPUT R$
    // Start of Basic INPUT statement 02030
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&R_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02030
    // 02040 IF R=1 THEN 1300
    if(R_int==1)goto Lbl_01300;
    // 02050 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
