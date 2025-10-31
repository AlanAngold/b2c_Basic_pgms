/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/onecheck.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55d1df3b96d0 ---------A   00002  PRINT TAB(30);"ONE CHECK"
    0x55d1df3b9670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x55d1df3b97f0 ---------A   00006  PRINT: PRINT: PRINT
    0x55d1df3bab80 ---------A   00008  DIM A(64)
    0x55d1df3b9e80 ---------A   00010  PRINT "SOLITAIRE CHECKER PUZZLE BY DAVID AHL"
    0x55d1df3ba480 ---------A   00015  PRINT
    0x55d1df3bb720 ---------A   00020  PRINT "48 CHECKERS ARE PLACED ON THE 2 OUTSIDE SPACES OF A"
    0x55d1df3bc100 ---------A   00025  PRINT "STANDARD 64-SQUARE CHECKERBOARD.  THE OBJECT IS TO"
    0x55d1df3ba670 ---------A   00030  PRINT "REMOVE AS MANY CHECKERS AS POSSIBLE BY DIAGONAL JUMPS"
    0x55d1df3ba7d0 ---------A   00035  PRINT "(AS IN STANDARD CHECKERS).  USE THE NUMBERED BOARD TO"
    0x55d1df3c1970 ---------A   00040  PRINT "INDICATE THE SQUARE YOU WISH TO JUMP FROM AND TO.  ON"
    0x55d1df3c1b20 ---------A   00045  PRINT "THE BOARD PRINTED OUT ON EACH TURN '1' INDICATES A"
    0x55d1df3c1cd0 ---------A   00050  PRINT "CHECKER AND '0' AN EMPTY SQUARE.  WHEN YOU HAVE NO"
    0x55d1df3c1e30 ---------A   00055  PRINT "POSSIBLE JUMPS REMAINING, INPUT A '0' IN RESPONSE TO"
    0x55d1df3c1f50 ---------A   00060  PRINT "QUESTION 'JUMP FROM ?'"
    0x55d1df3c1fb0 ---------A   00062  PRINT
    0x55d1df3c20d0 ---------A   00063  PRINT "HERE IS THE NUMERICAL BOARD:"
    0x55d1df3c2130 ---------A   00066  PRINT
    0x55d1df3c2580 ---------A T 00070  FOR J=1 TO 57 STEP 8
    0x55d1df3c3620 ---------A   00074  PRINT J;TAB(4);J+1;TAB(8);J+2;TAB(12);J+3;TAB(16);J+4;TAB(20);J+5;
    0x55d1df3c3d00 ---------A   00075  PRINT TAB(24);J+6;TAB(28);J+7
    0x55d1df3c3e40 ---------A   00076  NEXT J
    0x55d1df3c3f00 ---------A   00077  PRINT
    0x55d1df3c4080 ---------A   00078  PRINT "AND HERE IS THE OPENING POSITION OF THE CHECKERS."
    0x55d1df3c4100 ---------A   00079  PRINT
    0x55d1df3c43e0 ---------A   00080  FOR J=1 TO 64
    0x55d1df3c46e0 ---------A   00082  A(J)=1
    0x55d1df3c4810 ---------A   00084  NEXT J
    0x55d1df3c4ba0 ---------A   00086  FOR J=19 TO 43 STEP 8
    0x55d1df3c5080 ---------A   00088  FOR I=J TO J+3
    0x55d1df3c5380 ---------A   00090  A(I)=0
    0x55d1df3c54b0 ---------A   00092  NEXT I
    0x55d1df3c5600 ---------A   00094  NEXT J
    0x55d1df3c5b00 ---------A   00096  M=0
    0x55d1df3c5b70 ---------A   00098  GOTO 340
    0x55d1df3c5da0 ---------A T 00100  INPUT "JUMP FROM";F
    0x55d1df3c6000 ---------A   00105  IF F=0 THEN 500
    0x55d1df3c6240 ---------A   00110  INPUT "TO";T
    0x55d1df3c62a0 ---------A   00112  PRINT
    0x55d1df3c6330 ---------A   00118  REM *** CHECK LEGALITY OF MOVE
    0x55d1df3c6960 ---------A   00120  F1=INT((F-1)/8)
    0x55d1df3c6e70 ---------A   00130  F2=F-8*F1
    0x55d1df3c7480 ---------A   00140  T1=INT((T-1)/8)
    0x55d1df3c7990 ---------A   00150  T2=T-8*T1
    0x55d1df3c7be0 ---------A   00160  IF F1>7 THEN 230
    0x55d1df3c7e40 ---------A   00170  IF T1>7 THEN 230
    0x55d1df3c80a0 ---------A   00180  IF F2>8 THEN 230
    0x55d1df3c8310 ---------A   00190  IF T2>8 THEN 230
    0x55d1df3c8780 ---------A   00200  IF ABS(F1-T1)<>2 THEN 230
    0x55d1df3c8bf0 ---------A   00210  IF ABS(F2-T2)<>2 THEN 230
    0x55d1df3c9190 ---------A   00212  IF A((T+F)/2)=0 THEN 230
    0x55d1df3c94d0 ---------A   00215  IF A(F)=0 THEN 230
    0x55d1df3c9810 ---------A   00220  IF A(T)=1 THEN 230
    0x55d1df3c98a0 ---------A   00225  GOTO 250
    0x55d1df3c9a00 ---------A T 00230  PRINT "ILLEGAL MOVE.  TRY AGAIN..."
    0x55d1df3c9a90 ---------A   00240  GOTO 100
    0x55d1df3c9b00 ---------A   00245  REM *** UPDATE BOARD
    0x55d1df3c9e10 ---------A T 00250  A(T)=1
    0x55d1df3ca100 ---------A   00260  A(F)=0
    0x55d1df3ca650 ---------A   00270  A((T+F)/2)=0
    0x55d1df3ca980 ---------A   00290  M=M+1
    0x55d1df3ca9f0 ---------A   00310  REM *** PRINT BOARD
    0x55d1df3cadb0 ---------A T 00340  FOR J=1 TO 57 STEP 8
    0x55d1df3cb1d0 ---------A   00350  FOR I=J TO J+7
    0x55d1df3cb430 ---------A   00360  PRINT A(I);
    0x55d1df3cb980 ---------A   00370  NEXT I
    0x55d1df3cba10 ---------A   00380  PRINT
    0x55d1df3cbb50 ---------A   00390  NEXT J
    0x55d1df3cbbe0 ---------A   00400  PRINT
    0x55d1df3cbc70 ---------A   00410  GOTO 100
    0x55d1df3cbcf0 ---------A   00490  REM *** END GAME SUMMARY
    0x55d1df3cbfe0 ---------A T 00500  S=0
    0x55d1df3cc2b0 ---------A   00510  FOR I=1 TO 64
    0x55d1df3cc6f0 ---------A   00520  S=S+A(I)
    0x55d1df3cc820 ---------A   00530  NEXT I
    0x55d1df3cce20 ---------A   00540  PRINT:PRINT "YOU MADE";M;"JUMPS AND HAD";S;"PIECES"
    0x55d1df3ccf90 ---------A   00550  PRINT "REMAINING ON THE BOARD."
    0x55d1df3cd020 ---------A   00560  PRINT
    0x55d1df3cd260 ---------A T 00562  INPUT "TRY AGAIN";A$
    0x55d1df3cd4e0 ---------A   00570  IF A$="YES" THEN 70
    0x55d1df3cd780 ---------A   00575  IF A$="NO" THEN 600
    0x55d1df3cd8f0 ---------A   00580  PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x55d1df3cd970 ---------A   00590  GOTO 562
    0x55d1df3cd9f0 ---------A T 00600  PRINT
    0x55d1df3cdb60 ---------A   00610  PRINT "O.K.  HOPE YOU HAD FUN!!"
    0x55d1df3cdbc0 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00070      00570T
     00100      00240T, 00410T
     00230      00160T, 00170T, 00180T, 00190T, 00200T, 00210T, 00212T, 00215T, 
                00220T
     00250      00225T
     00340      00098T
     00500      00105T
     00562      00590T
     00600      00575T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x55d1df3b96d0 (00002)   0x55d1df3b96d0 (00002)   0x55d1df3cdbc0 (00999)   0x55d1df3cdbc0 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/onecheck.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55d1df3b96d0 ---------A   00002  PRINT TAB(30);"ONE CHECK"
    0x55d1df3b9670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x55d1df3aa2b0 ----------   00006  PRINT
    0x55d1df3b99e0 ----------        a PRINT
    0x55d1df3b97f0 ---------A        b PRINT
    0x55d1df3bab80 ---------A   00008  DIM A(64)
    0x55d1df3b9e80 ---------A   00010  PRINT "SOLITAIRE CHECKER PUZZLE BY DAVID AHL"
    0x55d1df3ba480 ---------A   00015  PRINT
    0x55d1df3bb720 ---------A   00020  PRINT "48 CHECKERS ARE PLACED ON THE 2 OUTSIDE SPACES OF A"
    0x55d1df3bc100 ---------A   00025  PRINT "STANDARD 64-SQUARE CHECKERBOARD.  THE OBJECT IS TO"
    0x55d1df3ba670 ---------A   00030  PRINT "REMOVE AS MANY CHECKERS AS POSSIBLE BY DIAGONAL JUMPS"
    0x55d1df3ba7d0 ---------A   00035  PRINT "(AS IN STANDARD CHECKERS).  USE THE NUMBERED BOARD TO"
    0x55d1df3c1970 ---------A   00040  PRINT "INDICATE THE SQUARE YOU WISH TO JUMP FROM AND TO.  ON"
    0x55d1df3c1b20 ---------A   00045  PRINT "THE BOARD PRINTED OUT ON EACH TURN '1' INDICATES A"
    0x55d1df3c1cd0 ---------A   00050  PRINT "CHECKER AND '0' AN EMPTY SQUARE.  WHEN YOU HAVE NO"
    0x55d1df3c1e30 ---------A   00055  PRINT "POSSIBLE JUMPS REMAINING, INPUT A '0' IN RESPONSE TO"
    0x55d1df3c1f50 ---------A   00060  PRINT "QUESTION 'JUMP FROM ?'"
    0x55d1df3c1fb0 ---------A   00062  PRINT
    0x55d1df3c20d0 ---------A   00063  PRINT "HERE IS THE NUMERICAL BOARD:"
    0x55d1df3c2130 ---------A   00066  PRINT
    0x55d1df3c2580 ---------A T 00070  FOR J=1 TO 57 STEP 8
    0x55d1df3c3620 ---------A   00074  PRINT J;TAB(4);J+1;TAB(8);J+2;TAB(12);J+3;TAB(16);J+4;TAB(20);J+5;
    0x55d1df3c3d00 ---------A   00075  PRINT TAB(24);J+6;TAB(28);J+7
    0x55d1df3c3e40 ---------A   00076  NEXT J
    0x55d1df3c3f00 ---------A   00077  PRINT
    0x55d1df3c4080 ---------A   00078  PRINT "AND HERE IS THE OPENING POSITION OF THE CHECKERS."
    0x55d1df3c4100 ---------A   00079  PRINT
    0x55d1df3c43e0 ---------A   00080  FOR J=1 TO 64
    0x55d1df3c46e0 ---------A   00082  A(J)=1
    0x55d1df3c4810 ---------A   00084  NEXT J
    0x55d1df3c4ba0 ---------A   00086  FOR J=19 TO 43 STEP 8
    0x55d1df3c5080 ---------A   00088  FOR I=J TO J+3
    0x55d1df3c5380 ---------A   00090  A(I)=0
    0x55d1df3c54b0 ---------A   00092  NEXT I
    0x55d1df3c5600 ---------A   00094  NEXT J
    0x55d1df3c5b00 ---------A   00096  M=0
    0x55d1df3c5b70 ---------A   00098  GOTO 340
    0x55d1df3c5da0 ---------A T 00100  INPUT "JUMP FROM";F
    0x55d1df3c6000 ---------A   00105  IF F=0 THEN 500
    0x55d1df3c6240 ---------A   00110  INPUT "TO";T
    0x55d1df3c62a0 ---------A   00112  PRINT
    0x55d1df3c6330 ---------A   00118  REM *** CHECK LEGALITY OF MOVE
    0x55d1df3c6960 ---------A   00120  F1=INT((F-1)/8)
    0x55d1df3c6e70 ---------A   00130  F2=F-8*F1
    0x55d1df3c7480 ---------A   00140  T1=INT((T-1)/8)
    0x55d1df3c7990 ---------A   00150  T2=T-8*T1
    0x55d1df3c7be0 ---------A   00160  IF F1>7 THEN 230
    0x55d1df3c7e40 ---------A   00170  IF T1>7 THEN 230
    0x55d1df3c80a0 ---------A   00180  IF F2>8 THEN 230
    0x55d1df3c8310 ---------A   00190  IF T2>8 THEN 230
    0x55d1df3c8780 ---------A   00200  IF ABS(F1-T1)<>2 THEN 230
    0x55d1df3c8bf0 ---------A   00210  IF ABS(F2-T2)<>2 THEN 230
    0x55d1df3c9190 ---------A   00212  IF A((T+F)/2)=0 THEN 230
    0x55d1df3c94d0 ---------A   00215  IF A(F)=0 THEN 230
    0x55d1df3c9810 ---------A   00220  IF A(T)=1 THEN 230
    0x55d1df3c98a0 ---------A   00225  GOTO 250
    0x55d1df3c9a00 ---------A T 00230  PRINT "ILLEGAL MOVE.  TRY AGAIN..."
    0x55d1df3c9a90 ---------A   00240  GOTO 100
    0x55d1df3c9b00 ---------A   00245  REM *** UPDATE BOARD
    0x55d1df3c9e10 ---------A T 00250  A(T)=1
    0x55d1df3ca100 ---------A   00260  A(F)=0
    0x55d1df3ca650 ---------A   00270  A((T+F)/2)=0
    0x55d1df3ca980 ---------A   00290  M=M+1
    0x55d1df3ca9f0 ---------A   00310  REM *** PRINT BOARD
    0x55d1df3cadb0 ---------A T 00340  FOR J=1 TO 57 STEP 8
    0x55d1df3cb1d0 ---------A   00350  FOR I=J TO J+7
    0x55d1df3cb430 ---------A   00360  PRINT A(I);
    0x55d1df3cb980 ---------A   00370  NEXT I
    0x55d1df3cba10 ---------A   00380  PRINT
    0x55d1df3cbb50 ---------A   00390  NEXT J
    0x55d1df3cbbe0 ---------A   00400  PRINT
    0x55d1df3cbc70 ---------A   00410  GOTO 100
    0x55d1df3cbcf0 ---------A   00490  REM *** END GAME SUMMARY
    0x55d1df3cbfe0 ---------A T 00500  S=0
    0x55d1df3cc2b0 ---------A   00510  FOR I=1 TO 64
    0x55d1df3cc6f0 ---------A   00520  S=S+A(I)
    0x55d1df3cc820 ---------A   00530  NEXT I
    0x55d1df3cc8b0 ----------   00540  PRINT
    0x55d1df3cce20 ---------A        a PRINT "YOU MADE";M;"JUMPS AND HAD";S;"PIECES"
    0x55d1df3ccf90 ---------A   00550  PRINT "REMAINING ON THE BOARD."
    0x55d1df3cd020 ---------A   00560  PRINT
    0x55d1df3cd260 ---------A T 00562  INPUT "TRY AGAIN";A$
    0x55d1df3cd4e0 ---------A   00570  IF A$="YES" THEN 70
    0x55d1df3cd780 ---------A   00575  IF A$="NO" THEN 600
    0x55d1df3cd8f0 ---------A   00580  PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x55d1df3cd970 ---------A   00590  GOTO 562
    0x55d1df3cd9f0 ---------A T 00600  PRINT
    0x55d1df3cdb60 ---------A   00610  PRINT "O.K.  HOPE YOU HAD FUN!!"
    0x55d1df3cdbc0 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/onecheck.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55d1df3b96d0 ---------A   01000  PRINT TAB(30);"ONE CHECK"
    0x55d1df3b9670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x55d1df3aa2b0 ----------   01020  PRINT
    0x55d1df3b99e0 ----------   01030  PRINT
    0x55d1df3b97f0 ---------A   01040  PRINT
    0x55d1df3bab80 ---------A   01050  DIM A(64)
    0x55d1df3b9e80 ---------A   01060  PRINT "SOLITAIRE CHECKER PUZZLE BY DAVID AHL"
    0x55d1df3ba480 ---------A   01070  PRINT
    0x55d1df3bb720 ---------A   01080  PRINT "48 CHECKERS ARE PLACED ON THE 2 OUTSIDE SPACES OF A"
    0x55d1df3bc100 ---------A   01090  PRINT "STANDARD 64-SQUARE CHECKERBOARD.  THE OBJECT IS TO"
    0x55d1df3ba670 ---------A   01100  PRINT "REMOVE AS MANY CHECKERS AS POSSIBLE BY DIAGONAL JUMPS"
    0x55d1df3ba7d0 ---------A   01110  PRINT "(AS IN STANDARD CHECKERS).  USE THE NUMBERED BOARD TO"
    0x55d1df3c1970 ---------A   01120  PRINT "INDICATE THE SQUARE YOU WISH TO JUMP FROM AND TO.  ON"
    0x55d1df3c1b20 ---------A   01130  PRINT "THE BOARD PRINTED OUT ON EACH TURN '1' INDICATES A"
    0x55d1df3c1cd0 ---------A   01140  PRINT "CHECKER AND '0' AN EMPTY SQUARE.  WHEN YOU HAVE NO"
    0x55d1df3c1e30 ---------A   01150  PRINT "POSSIBLE JUMPS REMAINING, INPUT A '0' IN RESPONSE TO"
    0x55d1df3c1f50 ---------A   01160  PRINT "QUESTION 'JUMP FROM ?'"
    0x55d1df3c1fb0 ---------A   01170  PRINT
    0x55d1df3c20d0 ---------A   01180  PRINT "HERE IS THE NUMERICAL BOARD:"
    0x55d1df3c2130 ---------A   01190  PRINT
    0x55d1df3c2580 ---------A   01200  FOR J=1 TO 57 STEP 8
    0x55d1df3c3620 ---------A   01210  PRINT J;TAB(4);J+1;TAB(8);J+2;TAB(12);J+3;TAB(16);J+4;TAB(20);J+5;
    0x55d1df3c3d00 ---------A   01220  PRINT TAB(24);J+6;TAB(28);J+7
    0x55d1df3c3e40 ---------A   01230  NEXT J
    0x55d1df3c3f00 ---------A   01240  PRINT
    0x55d1df3c4080 ---------A   01250  PRINT "AND HERE IS THE OPENING POSITION OF THE CHECKERS."
    0x55d1df3c4100 ---------A   01260  PRINT
    0x55d1df3c43e0 ---------A   01270  FOR J=1 TO 64
    0x55d1df3c46e0 ---------A   01280  A(J)=1
    0x55d1df3c4810 ---------A   01290  NEXT J
    0x55d1df3c4ba0 ---------A   01300  FOR J=19 TO 43 STEP 8
    0x55d1df3c5080 ---------A   01310  FOR I=J TO J+3
    0x55d1df3c5380 ---------A   01320  A(I)=0
    0x55d1df3c54b0 ---------A   01330  NEXT I
    0x55d1df3c5600 ---------A   01340  NEXT J
    0x55d1df3c5b00 ---------A   01350  M=0
    0x55d1df3c5b70 ---------A   01360  GOTO 1640
    0x55d1df3c5da0 ---------A   01370  INPUT "JUMP FROM";F
    0x55d1df3c6000 ---------A   01380  IF F=0 THEN 1730
    0x55d1df3c6240 ---------A   01390  INPUT "TO";T
    0x55d1df3c62a0 ---------A   01400  PRINT
    0x55d1df3c6330 ---------A   01410  REM *** CHECK LEGALITY OF MOVE
    0x55d1df3c6960 ---------A   01420  F1=INT((F-1)/8)
    0x55d1df3c6e70 ---------A   01430  F2=F-8*F1
    0x55d1df3c7480 ---------A   01440  T1=INT((T-1)/8)
    0x55d1df3c7990 ---------A   01450  T2=T-8*T1
    0x55d1df3c7be0 ---------A   01460  IF F1>7 THEN 1560
    0x55d1df3c7e40 ---------A   01470  IF T1>7 THEN 1560
    0x55d1df3c80a0 ---------A   01480  IF F2>8 THEN 1560
    0x55d1df3c8310 ---------A   01490  IF T2>8 THEN 1560
    0x55d1df3c8780 ---------A   01500  IF ABS(F1-T1)<>2 THEN 1560
    0x55d1df3c8bf0 ---------A   01510  IF ABS(F2-T2)<>2 THEN 1560
    0x55d1df3c9190 ---------A   01520  IF A((T+F)/2)=0 THEN 1560
    0x55d1df3c94d0 ---------A   01530  IF A(F)=0 THEN 1560
    0x55d1df3c9810 ---------A   01540  IF A(T)=1 THEN 1560
    0x55d1df3c98a0 ---------A   01550  GOTO 1590
    0x55d1df3c9a00 ---------A   01560  PRINT "ILLEGAL MOVE.  TRY AGAIN..."
    0x55d1df3c9a90 ---------A   01570  GOTO 1370
    0x55d1df3c9b00 ---------A   01580  REM *** UPDATE BOARD
    0x55d1df3c9e10 ---------A   01590  A(T)=1
    0x55d1df3ca100 ---------A   01600  A(F)=0
    0x55d1df3ca650 ---------A   01610  A((T+F)/2)=0
    0x55d1df3ca980 ---------A   01620  M=M+1
    0x55d1df3ca9f0 ---------A   01630  REM *** PRINT BOARD
    0x55d1df3cadb0 ---------A   01640  FOR J=1 TO 57 STEP 8
    0x55d1df3cb1d0 ---------A   01650  FOR I=J TO J+7
    0x55d1df3cb430 ---------A   01660  PRINT A(I);
    0x55d1df3cb980 ---------A   01670  NEXT I
    0x55d1df3cba10 ---------A   01680  PRINT
    0x55d1df3cbb50 ---------A   01690  NEXT J
    0x55d1df3cbbe0 ---------A   01700  PRINT
    0x55d1df3cbc70 ---------A   01710  GOTO 1370
    0x55d1df3cbcf0 ---------A   01720  REM *** END GAME SUMMARY
    0x55d1df3cbfe0 ---------A   01730  S=0
    0x55d1df3cc2b0 ---------A   01740  FOR I=1 TO 64
    0x55d1df3cc6f0 ---------A   01750  S=S+A(I)
    0x55d1df3cc820 ---------A   01760  NEXT I
    0x55d1df3cc8b0 ----------   01770  PRINT
    0x55d1df3cce20 ---------A   01780  PRINT "YOU MADE";M;"JUMPS AND HAD";S;"PIECES"
    0x55d1df3ccf90 ---------A   01790  PRINT "REMAINING ON THE BOARD."
    0x55d1df3cd020 ---------A   01800  PRINT
    0x55d1df3cd260 ---------A   01810  INPUT "TRY AGAIN";A$
    0x55d1df3cd4e0 ---------A   01820  IF A$="YES" THEN 1200
    0x55d1df3cd780 ---------A   01830  IF A$="NO" THEN 1860
    0x55d1df3cd8f0 ---------A   01840  PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x55d1df3cd970 ---------A   01850  GOTO 1810
    0x55d1df3cd9f0 ---------A   01860  PRINT
    0x55d1df3cdb60 ---------A   01870  PRINT "O.K.  HOPE YOU HAD FUN!!"
    0x55d1df3cdbc0 ---------A   01880  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01890 - 10000    8120 

 */



/*
 *  Symbol Table Listing for 'basic/onecheck.bas'
 *
    A               Array    Integer         {0,63} 
    A$                       String      
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
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    F1                       Integer     
    F2                       Integer     
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
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
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
    T                        Integer     
    T1                       Integer     
    T2                       Integer     
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
 *  Listing of basic/onecheck.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55d1df3b96d0 ---------A   01000  PRINT TAB(30);"ONE CHECK"
    0x55d1df3b9670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x55d1df3aa2b0 ---------A   01020  PRINT
    0x55d1df3b99e0 ---------A   01030  PRINT
    0x55d1df3b97f0 ---------A   01040  PRINT
    0x55d1df3bab80 ---------A   01050  DIM A(64)
    0x55d1df3b9e80 ---------A   01060  PRINT "SOLITAIRE CHECKER PUZZLE BY DAVID AHL"
    0x55d1df3ba480 ---------A   01070  PRINT
    0x55d1df3bb720 ---------A   01080  PRINT "48 CHECKERS ARE PLACED ON THE 2 OUTSIDE SPACES OF A"
    0x55d1df3bc100 ---------A   01090  PRINT "STANDARD 64-SQUARE CHECKERBOARD.  THE OBJECT IS TO"
    0x55d1df3ba670 ---------A   01100  PRINT "REMOVE AS MANY CHECKERS AS POSSIBLE BY DIAGONAL JUMPS"
    0x55d1df3ba7d0 ---------A   01110  PRINT "(AS IN STANDARD CHECKERS).  USE THE NUMBERED BOARD TO"
    0x55d1df3c1970 ---------A   01120  PRINT "INDICATE THE SQUARE YOU WISH TO JUMP FROM AND TO.  ON"
    0x55d1df3c1b20 ---------A   01130  PRINT "THE BOARD PRINTED OUT ON EACH TURN '1' INDICATES A"
    0x55d1df3c1cd0 ---------A   01140  PRINT "CHECKER AND '0' AN EMPTY SQUARE.  WHEN YOU HAVE NO"
    0x55d1df3c1e30 ---------A   01150  PRINT "POSSIBLE JUMPS REMAINING, INPUT A '0' IN RESPONSE TO"
    0x55d1df3c1f50 ---------A   01160  PRINT "QUESTION 'JUMP FROM ?'"
    0x55d1df3c1fb0 ---------A   01170  PRINT
    0x55d1df3c20d0 ---------A   01180  PRINT "HERE IS THE NUMERICAL BOARD:"
    0x55d1df3c2130 ---------A   01190  PRINT
    0x55d1df3c2580 ---------A T 01200  FOR J=1 TO 57 STEP 8
    0x55d1df3c3620 ---------A   01210  PRINT J;TAB(4);J+1;TAB(8);J+2;TAB(12);J+3;TAB(16);J+4;TAB(20);J+5;
    0x55d1df3c3d00 ---------A   01220  PRINT TAB(24);J+6;TAB(28);J+7
    0x55d1df3c3e40 ---------A   01230  NEXT J
    0x55d1df3c3f00 ---------A   01240  PRINT
    0x55d1df3c4080 ---------A   01250  PRINT "AND HERE IS THE OPENING POSITION OF THE CHECKERS."
    0x55d1df3c4100 ---------A   01260  PRINT
    0x55d1df3c43e0 ---------A   01270  FOR J=1 TO 64
    0x55d1df3c46e0 ---------A   01280  A(J)=1
    0x55d1df3c4810 ---------A   01290  NEXT J
    0x55d1df3c4ba0 ---------A   01300  FOR J=19 TO 43 STEP 8
    0x55d1df3c5080 ---------A   01310  FOR I=J TO J+3
    0x55d1df3c5380 ---------A   01320  A(I)=0
    0x55d1df3c54b0 ---------A   01330  NEXT I
    0x55d1df3c5600 ---------A   01340  NEXT J
    0x55d1df3c5b00 ---------A   01350  M=0
    0x55d1df3c5b70 ---------A   01360  GOTO 1640
    0x55d1df3c5da0 ---------A T 01370  INPUT "JUMP FROM";F
    0x55d1df3c6000 ---------A   01380  IF F=0 THEN 1730
    0x55d1df3c6240 ---------A   01390  INPUT "TO";T
    0x55d1df3c62a0 ---------A   01400  PRINT
    0x55d1df3c6330 ---------A   01410  REM *** CHECK LEGALITY OF MOVE
    0x55d1df3c6960 ---------A   01420  F1=INT((F-1)/8)
    0x55d1df3c6e70 ---------A   01430  F2=F-8*F1
    0x55d1df3c7480 ---------A   01440  T1=INT((T-1)/8)
    0x55d1df3c7990 ---------A   01450  T2=T-8*T1
    0x55d1df3c7be0 ---------A   01460  IF F1>7 THEN 1560
    0x55d1df3c7e40 ---------A   01470  IF T1>7 THEN 1560
    0x55d1df3c80a0 ---------A   01480  IF F2>8 THEN 1560
    0x55d1df3c8310 ---------A   01490  IF T2>8 THEN 1560
    0x55d1df3c8780 ---------A   01500  IF ABS(F1-T1)<>2 THEN 1560
    0x55d1df3c8bf0 ---------A   01510  IF ABS(F2-T2)<>2 THEN 1560
    0x55d1df3c9190 ---------A   01520  IF A((T+F)/2)=0 THEN 1560
    0x55d1df3c94d0 ---------A   01530  IF A(F)=0 THEN 1560
    0x55d1df3c9810 ---------A   01540  IF A(T)=1 THEN 1560
    0x55d1df3c98a0 ---------A   01550  GOTO 1590
    0x55d1df3c9a00 ---------A T 01560  PRINT "ILLEGAL MOVE.  TRY AGAIN..."
    0x55d1df3c9a90 ---------A   01570  GOTO 1370
    0x55d1df3c9b00 ---------A   01580  REM *** UPDATE BOARD
    0x55d1df3c9e10 ---------A T 01590  A(T)=1
    0x55d1df3ca100 ---------A   01600  A(F)=0
    0x55d1df3ca650 ---------A   01610  A((T+F)/2)=0
    0x55d1df3ca980 ---------A   01620  M=M+1
    0x55d1df3ca9f0 ---------A   01630  REM *** PRINT BOARD
    0x55d1df3cadb0 ---------A T 01640  FOR J=1 TO 57 STEP 8
    0x55d1df3cb1d0 ---------A   01650  FOR I=J TO J+7
    0x55d1df3cb430 ---------A   01660  PRINT A(I);
    0x55d1df3cb980 ---------A   01670  NEXT I
    0x55d1df3cba10 ---------A   01680  PRINT
    0x55d1df3cbb50 ---------A   01690  NEXT J
    0x55d1df3cbbe0 ---------A   01700  PRINT
    0x55d1df3cbc70 ---------A   01710  GOTO 1370
    0x55d1df3cbcf0 ---------A   01720  REM *** END GAME SUMMARY
    0x55d1df3cbfe0 ---------A T 01730  S=0
    0x55d1df3cc2b0 ---------A   01740  FOR I=1 TO 64
    0x55d1df3cc6f0 ---------A   01750  S=S+A(I)
    0x55d1df3cc820 ---------A   01760  NEXT I
    0x55d1df3cc8b0 ---------A   01770  PRINT
    0x55d1df3cce20 ---------A   01780  PRINT "YOU MADE";M;"JUMPS AND HAD";S;"PIECES"
    0x55d1df3ccf90 ---------A   01790  PRINT "REMAINING ON THE BOARD."
    0x55d1df3cd020 ---------A   01800  PRINT
    0x55d1df3cd260 ---------A T 01810  INPUT "TRY AGAIN";A$
    0x55d1df3cd4e0 ---------A   01820  IF A$="YES" THEN 1200
    0x55d1df3cd780 ---------A   01830  IF A$="NO" THEN 1860
    0x55d1df3cd8f0 ---------A   01840  PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x55d1df3cd970 ---------A   01850  GOTO 1810
    0x55d1df3cd9f0 ---------A T 01860  PRINT
    0x55d1df3cdb60 ---------A   01870  PRINT "O.K.  HOPE YOU HAD FUN!!"
    0x55d1df3cdbc0 ---------A   01880  END
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
int    A_int_arr[64];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    F_int;                                     // Basic: F 
int    F1_int;                                    // Basic: F1 
int    F2_int;                                    // Basic: F2 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    M_int;                                     // Basic: M 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
int    T1_int;                                    // Basic: T1 
int    T2_int;                                    // Basic: T2 
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
    // 01000 PRINT TAB(30);"ONE CHECK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,30);strcat(buf,"ONE CHECK");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 DIM A(64)
    // 01060 PRINT "SOLITAIRE CHECKER PUZZLE BY DAVID AHL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SOLITAIRE CHECKER PUZZLE BY DAVID AHL");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "48 CHECKERS ARE PLACED ON THE 2 OUTSIDE SPACES OF A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"48 CHECKERS ARE PLACED ON THE 2 OUTSIDE SPACES OF A");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "STANDARD 64-SQUARE CHECKERBOARD.  THE OBJECT IS TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"STANDARD 64-SQUARE CHECKERBOARD.  THE OBJECT IS TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "REMOVE AS MANY CHECKERS AS POSSIBLE BY DIAGONAL JUMPS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"REMOVE AS MANY CHECKERS AS POSSIBLE BY DIAGONAL JUMPS");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "(AS IN STANDARD CHECKERS).  USE THE NUMBERED BOARD TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(AS IN STANDARD CHECKERS).  USE THE NUMBERED BOARD TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "INDICATE THE SQUARE YOU WISH TO JUMP FROM AND TO.  ON"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INDICATE THE SQUARE YOU WISH TO JUMP FROM AND TO.  ON");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "THE BOARD PRINTED OUT ON EACH TURN '1' INDICATES A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE BOARD PRINTED OUT ON EACH TURN '1' INDICATES A");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "CHECKER AND '0' AN EMPTY SQUARE.  WHEN YOU HAVE NO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHECKER AND '0' AN EMPTY SQUARE.  WHEN YOU HAVE NO");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "POSSIBLE JUMPS REMAINING, INPUT A '0' IN RESPONSE TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"POSSIBLE JUMPS REMAINING, INPUT A '0' IN RESPONSE TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "QUESTION 'JUMP FROM ?'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"QUESTION 'JUMP FROM ?'");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT "HERE IS THE NUMERICAL BOARD:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE IS THE NUMERICAL BOARD:");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01200:
    // 01200 FOR J=1 TO 57 STEP 8
    for(J_int=1;J_int<=57;J_int+=8){
        // 01210 PRINT J;TAB(4);J+1;TAB(8);J+2;TAB(12);J+3;TAB(16);J+4;TAB(20);J+5;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,J_int);b2c_TAB(buf,4); b2c_INT(buf,J_int+1);b2c_TAB(buf,8); b2c_INT(buf,J_int+2);b2c_TAB(buf,12); b2c_INT(buf,J_int+3);b2c_TAB(buf,16); b2c_INT(buf,J_int+4);b2c_TAB(buf,20); b2c_INT(buf,J_int+5);fputs(buf,fh); };
        // 01220 PRINT TAB(24);J+6;TAB(28);J+7
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,24); b2c_INT(buf,J_int+6);b2c_TAB(buf,28); b2c_INT(buf,J_int+7);strcat(buf,"\n");fputs(buf,fh); };
        // 01230 NEXT J
        int dummy_1230=0; // Ignore this line.
    }; // End-For(J_int)
    // 01240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "AND HERE IS THE OPENING POSITION OF THE CHECKERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND HERE IS THE OPENING POSITION OF THE CHECKERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01270 FOR J=1 TO 64
    for(J_int=1;J_int<=64;J_int++){
        // 01280 A(J)=1
        A_int_arr[J_int] = 1;
        // 01290 NEXT J
        int dummy_1290=0; // Ignore this line.
    }; // End-For(J_int)
    // 01300 FOR J=19 TO 43 STEP 8
    for(J_int=19;J_int<=43;J_int+=8){
        // 01310 FOR I=J TO J+3
        for(I_int=J_int;I_int<=J_int+3;I_int++){
            // 01320 A(I)=0
            A_int_arr[I_int] = 0;
            // 01330 NEXT I
            int dummy_1330=0; // Ignore this line.
        }; // End-For(I_int)
        // 01340 NEXT J
        int dummy_1340=0; // Ignore this line.
    }; // End-For(J_int)
    // 01350 M=0
    M_int = 0;
    // 01360 GOTO 1640
    goto Lbl_01640;

  Lbl_01370:
    // 01370 INPUT "JUMP FROM";F
    // Start of Basic INPUT statement 01370
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"JUMP FROM");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&F_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01370
    // 01380 IF F=0 THEN 1730
    if(F_int==0)goto Lbl_01730;
    // 01390 INPUT "TO";T
    // Start of Basic INPUT statement 01390
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"TO");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&T_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01390
    // 01400 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01410 REM *** CHECK LEGALITY OF MOVE
    // 01420 F1=INT((F-1)/8)
    F1_int = INT((F_int-1)/8);
    // 01430 F2=F-8*F1
    F2_int = F_int-8*F1_int;
    // 01440 T1=INT((T-1)/8)
    T1_int = INT((T_int-1)/8);
    // 01450 T2=T-8*T1
    T2_int = T_int-8*T1_int;
    // 01460 IF F1>7 THEN 1560
    if(F1_int>7)goto Lbl_01560;
    // 01470 IF T1>7 THEN 1560
    if(T1_int>7)goto Lbl_01560;
    // 01480 IF F2>8 THEN 1560
    if(F2_int>8)goto Lbl_01560;
    // 01490 IF T2>8 THEN 1560
    if(T2_int>8)goto Lbl_01560;
    // 01500 IF ABS(F1-T1)<>2 THEN 1560
    if(ABS(F1_int-T1_int)!=2)goto Lbl_01560;
    // 01510 IF ABS(F2-T2)<>2 THEN 1560
    if(ABS(F2_int-T2_int)!=2)goto Lbl_01560;
    // 01520 IF A((T+F)/2)=0 THEN 1560
    if(A_int_arr[(T_int+F_int)/2]==0)goto Lbl_01560;
    // 01530 IF A(F)=0 THEN 1560
    if(A_int_arr[F_int]==0)goto Lbl_01560;
    // 01540 IF A(T)=1 THEN 1560
    if(A_int_arr[T_int]==1)goto Lbl_01560;
    // 01550 GOTO 1590
    goto Lbl_01590;

  Lbl_01560:
    // 01560 PRINT "ILLEGAL MOVE.  TRY AGAIN..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL MOVE.  TRY AGAIN...");strcat(buf,"\n");fputs(buf,fh); };
    // 01570 GOTO 1370
    goto Lbl_01370;
    // 01580 REM *** UPDATE BOARD

  Lbl_01590:
    // 01590 A(T)=1
    A_int_arr[T_int] = 1;
    // 01600 A(F)=0
    A_int_arr[F_int] = 0;
    // 01610 A((T+F)/2)=0
    A_int_arr[(T_int+F_int)/2] = 0;
    // 01620 M=M+1
    M_int = M_int+1;
    // 01630 REM *** PRINT BOARD

  Lbl_01640:
    // 01640 FOR J=1 TO 57 STEP 8
    for(J_int=1;J_int<=57;J_int+=8){
        // 01650 FOR I=J TO J+7
        for(I_int=J_int;I_int<=J_int+7;I_int++){
            // 01660 PRINT A(I);
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,A_int_arr[I_int]);fputs(buf,fh); };
            // 01670 NEXT I
            int dummy_1670=0; // Ignore this line.
        }; // End-For(I_int)
        // 01680 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01690 NEXT J
        int dummy_1690=0; // Ignore this line.
    }; // End-For(J_int)
    // 01700 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01710 GOTO 1370
    goto Lbl_01370;
    // 01720 REM *** END GAME SUMMARY

  Lbl_01730:
    // 01730 S=0
    S_int = 0;
    // 01740 FOR I=1 TO 64
    for(I_int=1;I_int<=64;I_int++){
        // 01750 S=S+A(I)
        S_int = S_int+A_int_arr[I_int];
        // 01760 NEXT I
        int dummy_1760=0; // Ignore this line.
    }; // End-For(I_int)
    // 01770 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01780 PRINT "YOU MADE";M;"JUMPS AND HAD";S;"PIECES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU MADE"); b2c_INT(buf,M_int);strcat(buf,"JUMPS AND HAD"); b2c_INT(buf,S_int);strcat(buf,"PIECES");strcat(buf,"\n");fputs(buf,fh); };
    // 01790 PRINT "REMAINING ON THE BOARD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"REMAINING ON THE BOARD.");strcat(buf,"\n");fputs(buf,fh); };
    // 01800 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01810:
    // 01810 INPUT "TRY AGAIN";A$
    // Start of Basic INPUT statement 01810
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"TRY AGAIN");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01810
    // 01820 IF A$="YES" THEN 1200
    if(strcmp(A_str,"YES")==0)goto Lbl_01200;
    // 01830 IF A$="NO" THEN 1860
    if(strcmp(A_str,"NO")==0)goto Lbl_01860;
    // 01840 PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE ANSWER 'YES' OR 'NO'.");strcat(buf,"\n");fputs(buf,fh); };
    // 01850 GOTO 1810
    goto Lbl_01810;

  Lbl_01860:
    // 01860 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01870 PRINT "O.K.  HOPE YOU HAD FUN!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"O.K.  HOPE YOU HAD FUN!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01880 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
