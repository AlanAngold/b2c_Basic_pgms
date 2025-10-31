/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/lovepst1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c5a7aed4db0 ---------A   00001  REM NOTE: Basic language type forced to be:
    0x5c5a7aed4f30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5c5a7aed4ff0 ---------A   00010  CLS: CLEAR 1500
    0x5c5a7aed26d0 ---------A   00020  PRINT @ 285, "Love"
    0x5c5a7aed2670 ---------A   00030  PRINT @ 409, "Copyright By"
    0x5c5a7aec32b0 ---------A   00040  PRINT @ 534, "Creative Computing"
    0x5c5a7aed29e0 ---------A   00050  PRINT @ 657, "Morristown, New Jersey 07960"
    0x5c5a7aed30a0 ---------A   00060  FOR D= 1 TO 1500: NEXT D
    0x5c5a7aed34e0 ---------A   00070  CLS
    0x5c5a7aed2c40 ---------A   00080  PRINT @ 194, "A Tribute to The Great American Artist, Robert Indiana."
    0x5c5a7aed5220 ---------A   00090  PRINT @ 325, "His greatest work will be reproduced with a message of"
    0x5c5a7aed3780 ---------A   00100  PRINT @ 389, "Your choice up to 60 Characters.  If you can't think of"
    0x5c5a7aeda8f0 ---------A   00110  PRINT @ 460, "a message, simply enter the word `LOVE'"
    0x5c5a7aedaf10 ---------A   00120  PRINT @ 595,"";:INPUT "YOUR MESSAGE PLEASE..";A$: L = LEN(A$)
    0x5c5a7aedb1e0 ---------A   00130  DIM B$(120)
    0x5c5a7aedb2f0 ---------A   00140  PRINT @ 719, "HIT ANY KEY WHEN PRINTER IS READY"
    0x5c5a7aedb910 ---------A T 00150  D$=INKEY$: IF D$="" THEN 150
    0x5c5a7aedbeb0 ---------A   00160  FOR J=0 TO INT(60/L)
    0x5c5a7aedc280 ---------A   00170  FOR I=1 TO L
    0x5c5a7aedca60 ---------A   00180  B$(J*L+I)=MID$(A$,I,1)
    0x5c5a7aedccc0 ---------A   00190  NEXT I: NEXT J
    0x5c5a7aedcfd0 ---------A   00200  C=0
    0x5c5a7aedda70 ---------A T 00210  A1=1: P=1: C=C+1: IF C=37 GOTO 640
    0x5c5a7aeddc00 ---------A   00220  LPRINT" "
    0x5c5a7aede360 ---------A T 00230  READ A: A1=A1+A: IF P=1 GOTO 250
    0x5c5a7aedeba0 ---------A   00240  FOR I=1 TO A: LPRINT" ";: NEXT I: P=1: GOTO 260
    0x5c5a7aedf640 ---------A T 00250  FOR I=A1-A TO A1-1: LPRINT B$(I);: NEXT I: P=0
    0x5c5a7aedf870 ---------A T 00260  IF A1<61 GOTO 230
    0x5c5a7aedf910 ---------A   00270  GOTO 210
    0x5c5a7aedfa70 ---------A   00280  DATA 60
    0x5c5a7aedff50 ---------A   00290  DATA  1, 12, 26,  9, 12
    0x5c5a7aee0430 ---------A   00300  DATA  3,  8, 24, 17,  8
    0x5c5a7aee0910 ---------A   00310  DATA  4,  6, 23, 21,  6
    0x5c5a7aee11c0 ---------A   00320  DATA  4,  6, 22, 12,  5,  6,  5
    0x5c5a7aee1860 ---------A   00330  DATA  4,  6, 21, 11,  8,  6,  4
    0x5c5a7aee1f00 ---------A   00340  DATA  4,  6, 21, 10, 10,  5,  4
    0x5c5a7aee25a0 ---------A   00350  DATA  4,  6, 21,  9, 11,  5,  4
    0x5c5a7aee2c40 ---------A   00360  DATA  4,  6, 21,  8, 11,  6,  4
    0x5c5a7aee32e0 ---------A   00370  DATA  4,  6, 21,  7, 11,  7,  4
    0x5c5a7aee3990 ---------A   00380  DATA  4,  6, 21,  6, 11,  8,  4
    0x5c5a7aee4200 ---------A   00390  DATA  4,  6, 19,  1,  1,  5, 11,  9,  4
    0x5c5a7aee4a70 ---------A   00400  DATA  4,  6, 19,  1,  1,  5, 10, 10,  4
    0x5c5a7aee52e0 ---------A   00410  DATA  4,  6, 18,  2,  1,  6,  8, 11,  4
    0x5c5a7aee5b40 ---------A   00420  DATA  4,  6, 17,  3,  1,  7,  5, 13,  4
    0x5c5a7aee61e0 ---------A   00430  DATA  4,  6, 15,  5,  2, 23,  5
    0x5c5a7aee66c0 ---------A   00440  DATA  1, 29,  5, 17,  8
    0x5c5a7aee6ba0 ---------A   00450  DATA  1, 29,  9,  9, 12
    0x5c5a7aee7080 ---------A   00460  DATA  1, 13,  5, 40,  1
    0x5c5a7aee7570 ---------A   00470  DATA  1, 13,  5, 40,  1
    0x5c5a7aee7de0 ---------A   00480  DATA  4,  6, 13,  3, 10,  6, 12,  5,  1
    0x5c5a7aee8650 ---------A   00490  DATA  5,  6, 11,  3, 11,  6, 14,  3,  1
    0x5c5a7aee8ec0 ---------A   00500  DATA  5,  6, 11,  3, 11,  6, 15,  2,  1
    0x5c5a7aee9730 ---------A   00510  DATA  6,  6,  9,  3, 12,  6, 16,  1,  1
    0x5c5a7aee9fa0 ---------A   00520  DATA  6,  6,  9,  3, 12,  6,  7,  1, 10
    0x5c5a7aeea800 ---------A   00530  DATA  7,  6,  7,  3, 13,  6,  6,  2, 10
    0x5c5a7aeeaeb0 ---------A   00540  DATA  7,  6,  7,  3, 13, 14, 10
    0x5c5a7aeeb720 ---------A   00550  DATA  8,  6,  5,  3, 14,  6,  6,  2, 10
    0x5c5a7aeebf90 ---------A   00560  DATA  8,  6,  5,  3, 14,  6,  7,  1, 10
    0x5c5a7aeec800 ---------A   00570  DATA  9,  6,  3,  3, 15,  6, 16,  1,  1
    0x5c5a7aeed070 ---------A   00580  DATA  9,  6,  3,  3, 15,  6, 15,  2,  1
    0x5c5a7aeed8d0 ---------A   00590  DATA 10,  6,  1,  3, 16,  6, 14,  3,  1
    0x5c5a7aeedf70 ---------A   00600  DATA 10, 10, 16,  6, 12,  5,  1
    0x5c5a7aeee450 ---------A   00610  DATA 11,  8, 13, 27,  1
    0x5c5a7aeee920 ---------A   00620  DATA 11,  8, 13, 27,  1
    0x5c5a7aeeea80 ---------A   00630  DATA 60
    0x5c5a7aeef3c0 ---------A T 00640  FOR I=1 TO 9: LPRINT" ": NEXT I
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00150      00150T
     00210      00270T
     00230      00260T
     00250      00230T
     00260      00240T
     00640      00210T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5c5a7aed4db0 (00001)   0x5c5a7aed4db0 (00001)   0x5c5a7aeef3c0 (00640)   0x5c5a7aeef3c0 (00640)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/lovepst1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c5a7aed4db0 ---------A   00001  REM NOTE
    0x5c5a7aed4f30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5c5a7aed4e70 ----------   00010  CLS
    0x5c5a7aed4ff0 ---------A        a CLEAR 1500
    0x5c5a7aed26d0 ---------A   00020  PRINT @ 285, "Love"
    0x5c5a7aed2670 ---------A   00030  PRINT @ 409, "Copyright By"
    0x5c5a7aec32b0 ---------A   00040  PRINT @ 534, "Creative Computing"
    0x5c5a7aed29e0 ---------A   00050  PRINT @ 657, "Morristown, New Jersey 07960"
    0x5c5a7aed3040 ----------   00060  FOR D= 1 TO 1500
    0x5c5a7aed30a0 ---------A        a NEXT D
    0x5c5a7aed34e0 ---------A   00070  CLS
    0x5c5a7aed2c40 ---------A   00080  PRINT @ 194, "A Tribute to The Great American Artist, Robert Indiana."
    0x5c5a7aed5220 ---------A   00090  PRINT @ 325, "His greatest work will be reproduced with a message of"
    0x5c5a7aed3780 ---------A   00100  PRINT @ 389, "Your choice up to 60 Characters.  If you can't think of"
    0x5c5a7aeda8f0 ---------A   00110  PRINT @ 460, "a message, simply enter the word `LOVE'"
    0x5c5a7aedaa10 ----------   00120  PRINT @ 595,"";
    0x5c5a7aedabd0 ----------        a INPUT "YOUR MESSAGE PLEASE..";A$
    0x5c5a7aedaf10 ---------A        b L = LEN(A$)
    0x5c5a7aedb1e0 ---------A   00130  DIM B$(120)
    0x5c5a7aedb2f0 ---------A   00140  PRINT @ 719, "HIT ANY KEY WHEN PRINTER IS READY"
    0x5c5a7aedb690 ---------- T 00150  D$=INKEY$
    0x5c5a7aedb910 ---------A T      a IF D$="" THEN 150
    0x5c5a7aedbeb0 ---------A   00160  FOR J=0 TO INT(60/L)
    0x5c5a7aedc280 ---------A   00170  FOR I=1 TO L
    0x5c5a7aedca60 ---------A   00180  B$(J*L+I)=MID$(A$,I,1)
    0x5c5a7aedcb90 ----------   00190  NEXT I
    0x5c5a7aedccc0 ---------A        a NEXT J
    0x5c5a7aedcfd0 ---------A   00200  C=0
    0x5c5a7aedd280 ---------- T 00210  A1=1
    0x5c5a7aedd530 ---------- T      a P=1
    0x5c5a7aedd840 ---------- T      b C=C+1
    0x5c5a7aedda70 ---------A T      c IF C=37 GOTO 640
    0x5c5a7aeddc00 ---------A   00220  LPRINT" "
    0x5c5a7aedde00 ---------- T 00230  READ A
    0x5c5a7aede130 ---------- T      a A1=A1+A
    0x5c5a7aede360 ---------A T      b IF P=1 GOTO 250
    0x5c5a7aede680 ----------   00240  FOR I=1 TO A
    0x5c5a7aede7e0 ----------        a LPRINT" ";
    0x5c5a7aede920 ----------        b NEXT I
    0x5c5a7aedeb10 ----------        c P=1
    0x5c5a7aedeba0 ---------A        d GOTO 260
    0x5c5a7aedf0b0 ---------- T 00250  FOR I=A1-A TO A1-1
    0x5c5a7aedf2f0 ---------- T      a LPRINT B$(I);
    0x5c5a7aedf430 ---------- T      b NEXT I
    0x5c5a7aedf640 ---------A T      c P=0
    0x5c5a7aedf870 ---------A T 00260  IF A1<61 GOTO 230
    0x5c5a7aedf910 ---------A   00270  GOTO 210
    0x5c5a7aedfa70 ---------A   00280  DATA 60
    0x5c5a7aedff50 ---------A   00290  DATA  1, 12, 26,  9, 12
    0x5c5a7aee0430 ---------A   00300  DATA  3,  8, 24, 17,  8
    0x5c5a7aee0910 ---------A   00310  DATA  4,  6, 23, 21,  6
    0x5c5a7aee11c0 ---------A   00320  DATA  4,  6, 22, 12,  5,  6,  5
    0x5c5a7aee1860 ---------A   00330  DATA  4,  6, 21, 11,  8,  6,  4
    0x5c5a7aee1f00 ---------A   00340  DATA  4,  6, 21, 10, 10,  5,  4
    0x5c5a7aee25a0 ---------A   00350  DATA  4,  6, 21,  9, 11,  5,  4
    0x5c5a7aee2c40 ---------A   00360  DATA  4,  6, 21,  8, 11,  6,  4
    0x5c5a7aee32e0 ---------A   00370  DATA  4,  6, 21,  7, 11,  7,  4
    0x5c5a7aee3990 ---------A   00380  DATA  4,  6, 21,  6, 11,  8,  4
    0x5c5a7aee4200 ---------A   00390  DATA  4,  6, 19,  1,  1,  5, 11,  9,  4
    0x5c5a7aee4a70 ---------A   00400  DATA  4,  6, 19,  1,  1,  5, 10, 10,  4
    0x5c5a7aee52e0 ---------A   00410  DATA  4,  6, 18,  2,  1,  6,  8, 11,  4
    0x5c5a7aee5b40 ---------A   00420  DATA  4,  6, 17,  3,  1,  7,  5, 13,  4
    0x5c5a7aee61e0 ---------A   00430  DATA  4,  6, 15,  5,  2, 23,  5
    0x5c5a7aee66c0 ---------A   00440  DATA  1, 29,  5, 17,  8
    0x5c5a7aee6ba0 ---------A   00450  DATA  1, 29,  9,  9, 12
    0x5c5a7aee7080 ---------A   00460  DATA  1, 13,  5, 40,  1
    0x5c5a7aee7570 ---------A   00470  DATA  1, 13,  5, 40,  1
    0x5c5a7aee7de0 ---------A   00480  DATA  4,  6, 13,  3, 10,  6, 12,  5,  1
    0x5c5a7aee8650 ---------A   00490  DATA  5,  6, 11,  3, 11,  6, 14,  3,  1
    0x5c5a7aee8ec0 ---------A   00500  DATA  5,  6, 11,  3, 11,  6, 15,  2,  1
    0x5c5a7aee9730 ---------A   00510  DATA  6,  6,  9,  3, 12,  6, 16,  1,  1
    0x5c5a7aee9fa0 ---------A   00520  DATA  6,  6,  9,  3, 12,  6,  7,  1, 10
    0x5c5a7aeea800 ---------A   00530  DATA  7,  6,  7,  3, 13,  6,  6,  2, 10
    0x5c5a7aeeaeb0 ---------A   00540  DATA  7,  6,  7,  3, 13, 14, 10
    0x5c5a7aeeb720 ---------A   00550  DATA  8,  6,  5,  3, 14,  6,  6,  2, 10
    0x5c5a7aeebf90 ---------A   00560  DATA  8,  6,  5,  3, 14,  6,  7,  1, 10
    0x5c5a7aeec800 ---------A   00570  DATA  9,  6,  3,  3, 15,  6, 16,  1,  1
    0x5c5a7aeed070 ---------A   00580  DATA  9,  6,  3,  3, 15,  6, 15,  2,  1
    0x5c5a7aeed8d0 ---------A   00590  DATA 10,  6,  1,  3, 16,  6, 14,  3,  1
    0x5c5a7aeedf70 ---------A   00600  DATA 10, 10, 16,  6, 12,  5,  1
    0x5c5a7aeee450 ---------A   00610  DATA 11,  8, 13, 27,  1
    0x5c5a7aeee920 ---------A   00620  DATA 11,  8, 13, 27,  1
    0x5c5a7aeeea80 ---------A   00630  DATA 60
    0x5c5a7aeef140 ---------- T 00640  FOR I=1 TO 9
    0x5c5a7aeef280 ---------- T      a LPRINT" "
    0x5c5a7aeef3c0 ---------A T      b NEXT I
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/lovepst1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c5a7aed4db0 ---------A   01000  REM NOTE
    0x5c5a7aed4f30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5c5a7aed4e70 ----------   01020  CLS
    0x5c5a7aed4ff0 ---------A   01030  CLEAR 1500
    0x5c5a7aed26d0 ---------A   01040  PRINT @ 285, "Love"
    0x5c5a7aed2670 ---------A   01050  PRINT @ 409, "Copyright By"
    0x5c5a7aec32b0 ---------A   01060  PRINT @ 534, "Creative Computing"
    0x5c5a7aed29e0 ---------A   01070  PRINT @ 657, "Morristown, New Jersey 07960"
    0x5c5a7aed3040 ----------   01080  FOR D= 1 TO 1500
    0x5c5a7aed30a0 ---------A   01090  NEXT D
    0x5c5a7aed34e0 ---------A   01100  CLS
    0x5c5a7aed2c40 ---------A   01110  PRINT @ 194, "A Tribute to The Great American Artist, Robert Indiana."
    0x5c5a7aed5220 ---------A   01120  PRINT @ 325, "His greatest work will be reproduced with a message of"
    0x5c5a7aed3780 ---------A   01130  PRINT @ 389, "Your choice up to 60 Characters.  If you can't think of"
    0x5c5a7aeda8f0 ---------A   01140  PRINT @ 460, "a message, simply enter the word `LOVE'"
    0x5c5a7aedaa10 ----------   01150  PRINT @ 595,"";
    0x5c5a7aedabd0 ----------   01160  INPUT "YOUR MESSAGE PLEASE..";A$
    0x5c5a7aedaf10 ---------A   01170  L = LEN(A$)
    0x5c5a7aedb1e0 ---------A   01180  DIM B$(120)
    0x5c5a7aedb2f0 ---------A   01190  PRINT @ 719, "HIT ANY KEY WHEN PRINTER IS READY"
    0x5c5a7aedb690 ----------   01200  D$=INKEY$
    0x5c5a7aedb910 ---------A   01210  IF D$="" THEN 1210
    0x5c5a7aedbeb0 ---------A   01220  FOR J=0 TO INT(60/L)
    0x5c5a7aedc280 ---------A   01230  FOR I=1 TO L
    0x5c5a7aedca60 ---------A   01240  B$(J*L+I)=MID$(A$,I,1)
    0x5c5a7aedcb90 ----------   01250  NEXT I
    0x5c5a7aedccc0 ---------A   01260  NEXT J
    0x5c5a7aedcfd0 ---------A   01270  C=0
    0x5c5a7aedd280 ----------   01280  A1=1
    0x5c5a7aedd530 ----------   01290  P=1
    0x5c5a7aedd840 ----------   01300  C=C+1
    0x5c5a7aedda70 ---------A   01310  IF C=37 GOTO 1850
    0x5c5a7aeddc00 ---------A   01320  LPRINT" "
    0x5c5a7aedde00 ----------   01330  READ A
    0x5c5a7aede130 ----------   01340  A1=A1+A
    0x5c5a7aede360 ---------A   01350  IF P=1 GOTO 1440
    0x5c5a7aede680 ----------   01360  FOR I=1 TO A
    0x5c5a7aede7e0 ----------   01370  LPRINT" ";
    0x5c5a7aede920 ----------   01380  NEXT I
    0x5c5a7aedeb10 ----------   01390  P=1
    0x5c5a7aedeba0 ---------A   01400  GOTO 1450
    0x5c5a7aedf0b0 ----------   01410  FOR I=A1-A TO A1-1
    0x5c5a7aedf2f0 ----------   01420  LPRINT B$(I);
    0x5c5a7aedf430 ----------   01430  NEXT I
    0x5c5a7aedf640 ---------A   01440  P=0
    0x5c5a7aedf870 ---------A   01450  IF A1<61 GOTO 1350
    0x5c5a7aedf910 ---------A   01460  GOTO 1310
    0x5c5a7aedfa70 ---------A   01470  DATA 60
    0x5c5a7aedff50 ---------A   01480  DATA  1, 12, 26,  9, 12
    0x5c5a7aee0430 ---------A   01490  DATA  3,  8, 24, 17,  8
    0x5c5a7aee0910 ---------A   01500  DATA  4,  6, 23, 21,  6
    0x5c5a7aee11c0 ---------A   01510  DATA  4,  6, 22, 12,  5,  6,  5
    0x5c5a7aee1860 ---------A   01520  DATA  4,  6, 21, 11,  8,  6,  4
    0x5c5a7aee1f00 ---------A   01530  DATA  4,  6, 21, 10, 10,  5,  4
    0x5c5a7aee25a0 ---------A   01540  DATA  4,  6, 21,  9, 11,  5,  4
    0x5c5a7aee2c40 ---------A   01550  DATA  4,  6, 21,  8, 11,  6,  4
    0x5c5a7aee32e0 ---------A   01560  DATA  4,  6, 21,  7, 11,  7,  4
    0x5c5a7aee3990 ---------A   01570  DATA  4,  6, 21,  6, 11,  8,  4
    0x5c5a7aee4200 ---------A   01580  DATA  4,  6, 19,  1,  1,  5, 11,  9,  4
    0x5c5a7aee4a70 ---------A   01590  DATA  4,  6, 19,  1,  1,  5, 10, 10,  4
    0x5c5a7aee52e0 ---------A   01600  DATA  4,  6, 18,  2,  1,  6,  8, 11,  4
    0x5c5a7aee5b40 ---------A   01610  DATA  4,  6, 17,  3,  1,  7,  5, 13,  4
    0x5c5a7aee61e0 ---------A   01620  DATA  4,  6, 15,  5,  2, 23,  5
    0x5c5a7aee66c0 ---------A   01630  DATA  1, 29,  5, 17,  8
    0x5c5a7aee6ba0 ---------A   01640  DATA  1, 29,  9,  9, 12
    0x5c5a7aee7080 ---------A   01650  DATA  1, 13,  5, 40,  1
    0x5c5a7aee7570 ---------A   01660  DATA  1, 13,  5, 40,  1
    0x5c5a7aee7de0 ---------A   01670  DATA  4,  6, 13,  3, 10,  6, 12,  5,  1
    0x5c5a7aee8650 ---------A   01680  DATA  5,  6, 11,  3, 11,  6, 14,  3,  1
    0x5c5a7aee8ec0 ---------A   01690  DATA  5,  6, 11,  3, 11,  6, 15,  2,  1
    0x5c5a7aee9730 ---------A   01700  DATA  6,  6,  9,  3, 12,  6, 16,  1,  1
    0x5c5a7aee9fa0 ---------A   01710  DATA  6,  6,  9,  3, 12,  6,  7,  1, 10
    0x5c5a7aeea800 ---------A   01720  DATA  7,  6,  7,  3, 13,  6,  6,  2, 10
    0x5c5a7aeeaeb0 ---------A   01730  DATA  7,  6,  7,  3, 13, 14, 10
    0x5c5a7aeeb720 ---------A   01740  DATA  8,  6,  5,  3, 14,  6,  6,  2, 10
    0x5c5a7aeebf90 ---------A   01750  DATA  8,  6,  5,  3, 14,  6,  7,  1, 10
    0x5c5a7aeec800 ---------A   01760  DATA  9,  6,  3,  3, 15,  6, 16,  1,  1
    0x5c5a7aeed070 ---------A   01770  DATA  9,  6,  3,  3, 15,  6, 15,  2,  1
    0x5c5a7aeed8d0 ---------A   01780  DATA 10,  6,  1,  3, 16,  6, 14,  3,  1
    0x5c5a7aeedf70 ---------A   01790  DATA 10, 10, 16,  6, 12,  5,  1
    0x5c5a7aeee450 ---------A   01800  DATA 11,  8, 13, 27,  1
    0x5c5a7aeee920 ---------A   01810  DATA 11,  8, 13, 27,  1
    0x5c5a7aeeea80 ---------A   01820  DATA 60
    0x5c5a7aeef140 ----------   01830  FOR I=1 TO 9
    0x5c5a7aeef280 ----------   01840  LPRINT" "
    0x5c5a7aeef3c0 ---------A   01850  NEXT I
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01810 - 10000    8200 

 */



/*
 *  Symbol Table Listing for 'basic/lovepst1.bas'
 *
    A                        Integer     
    A$                       String      
    A1                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$              Array    String          {0,119} 
    C                        Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    D$                       String      
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
    INKEY$                   String      
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
    OCT$            Function String          args=1, float  
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
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
 *  Listing of basic/lovepst1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c5a7aed4db0 ---------A   01000  REM NOTE
    0x5c5a7aed4f30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5c5a7aed4e70 ---------A   01020  CLS
    0x5c5a7aed4ff0 ---------A   01030  CLEAR 1500
    0x5c5a7aed26d0 ---------A   01040  PRINT @ 285, "Love"
    0x5c5a7aed2670 ---------A   01050  PRINT @ 409, "Copyright By"
    0x5c5a7aec32b0 ---------A   01060  PRINT @ 534, "Creative Computing"
    0x5c5a7aed29e0 ---------A   01070  PRINT @ 657, "Morristown, New Jersey 07960"
    0x5c5a7aed3040 ---------A   01080  FOR D= 1 TO 1500
    0x5c5a7aed30a0 ---------A   01090  NEXT D
    0x5c5a7aed34e0 ---------A   01100  CLS
    0x5c5a7aed2c40 ---------A   01110  PRINT @ 194, "A Tribute to The Great American Artist, Robert Indiana."
    0x5c5a7aed5220 ---------A   01120  PRINT @ 325, "His greatest work will be reproduced with a message of"
    0x5c5a7aed3780 ---------A   01130  PRINT @ 389, "Your choice up to 60 Characters.  If you can't think of"
    0x5c5a7aeda8f0 ---------A   01140  PRINT @ 460, "a message, simply enter the word `LOVE'"
    0x5c5a7aedaa10 ---------A   01150  PRINT @ 595,"";
    0x5c5a7aedabd0 ---------A   01160  INPUT "YOUR MESSAGE PLEASE..";A$
    0x5c5a7aedaf10 ---------A   01170  L = LEN(A$)
    0x5c5a7aedb1e0 ---------A   01180  DIM B$(120)
    0x5c5a7aedb2f0 ---------A   01190  PRINT @ 719, "HIT ANY KEY WHEN PRINTER IS READY"
    0x5c5a7aedb690 ---------A   01200  D$=INKEY$
    0x5c5a7aedb910 ---------A T 01210  IF D$="" THEN 1210
    0x5c5a7aedbeb0 ---------A   01220  FOR J=0 TO INT(60/L)
    0x5c5a7aedc280 ---------A   01230  FOR I=1 TO L
    0x5c5a7aedca60 ---------A   01240  B$(J*L+I)=MID$(A$,I,1)
    0x5c5a7aedcb90 ---------A   01250  NEXT I
    0x5c5a7aedccc0 ---------A   01260  NEXT J
    0x5c5a7aedcfd0 ---------A   01270  C=0
    0x5c5a7aedd280 ---------A   01280  A1=1
    0x5c5a7aedd530 ---------A   01290  P=1
    0x5c5a7aedd840 ---------A   01300  C=C+1
    0x5c5a7aedda70 ---------A T 01310  IF C=37 GOTO 1800
    0x5c5a7aeddc00 ---------A   01320  LPRINT" "
    0x5c5a7aedde00 ---------A   01330  READ A
    0x5c5a7aede130 ---------A   01340  A1=A1+A
    0x5c5a7aede360 ---------A T 01350  IF P=1 GOTO 1410
    0x5c5a7aede680 ---------A   01360  FOR I=1 TO A
    0x5c5a7aede7e0 ---------A   01370  LPRINT" ";
    0x5c5a7aede920 ---------A   01380  NEXT I
    0x5c5a7aedeb10 ---------A   01390  P=1
    0x5c5a7aedeba0 ---------A   01400  GOTO 1420
    0x5c5a7aedf640 ---------A T 01410  P=0
    0x5c5a7aedf870 ---------A T 01420  IF A1<61 GOTO 1350
    0x5c5a7aedf910 ---------A   01430  GOTO 1310
    0x5c5a7aedfa70 ---------A   01440  DATA 60
    0x5c5a7aedff50 ---------A   01450  DATA  1, 12, 26,  9, 12
    0x5c5a7aee0430 ---------A   01460  DATA  3,  8, 24, 17,  8
    0x5c5a7aee0910 ---------A   01470  DATA  4,  6, 23, 21,  6
    0x5c5a7aee11c0 ---------A   01480  DATA  4,  6, 22, 12,  5,  6,  5
    0x5c5a7aee1860 ---------A   01490  DATA  4,  6, 21, 11,  8,  6,  4
    0x5c5a7aee1f00 ---------A   01500  DATA  4,  6, 21, 10, 10,  5,  4
    0x5c5a7aee25a0 ---------A   01510  DATA  4,  6, 21,  9, 11,  5,  4
    0x5c5a7aee2c40 ---------A   01520  DATA  4,  6, 21,  8, 11,  6,  4
    0x5c5a7aee32e0 ---------A   01530  DATA  4,  6, 21,  7, 11,  7,  4
    0x5c5a7aee3990 ---------A   01540  DATA  4,  6, 21,  6, 11,  8,  4
    0x5c5a7aee4200 ---------A   01550  DATA  4,  6, 19,  1,  1,  5, 11,  9,  4
    0x5c5a7aee4a70 ---------A   01560  DATA  4,  6, 19,  1,  1,  5, 10, 10,  4
    0x5c5a7aee52e0 ---------A   01570  DATA  4,  6, 18,  2,  1,  6,  8, 11,  4
    0x5c5a7aee5b40 ---------A   01580  DATA  4,  6, 17,  3,  1,  7,  5, 13,  4
    0x5c5a7aee61e0 ---------A   01590  DATA  4,  6, 15,  5,  2, 23,  5
    0x5c5a7aee66c0 ---------A   01600  DATA  1, 29,  5, 17,  8
    0x5c5a7aee6ba0 ---------A   01610  DATA  1, 29,  9,  9, 12
    0x5c5a7aee7080 ---------A   01620  DATA  1, 13,  5, 40,  1
    0x5c5a7aee7570 ---------A   01630  DATA  1, 13,  5, 40,  1
    0x5c5a7aee7de0 ---------A   01640  DATA  4,  6, 13,  3, 10,  6, 12,  5,  1
    0x5c5a7aee8650 ---------A   01650  DATA  5,  6, 11,  3, 11,  6, 14,  3,  1
    0x5c5a7aee8ec0 ---------A   01660  DATA  5,  6, 11,  3, 11,  6, 15,  2,  1
    0x5c5a7aee9730 ---------A   01670  DATA  6,  6,  9,  3, 12,  6, 16,  1,  1
    0x5c5a7aee9fa0 ---------A   01680  DATA  6,  6,  9,  3, 12,  6,  7,  1, 10
    0x5c5a7aeea800 ---------A   01690  DATA  7,  6,  7,  3, 13,  6,  6,  2, 10
    0x5c5a7aeeaeb0 ---------A   01700  DATA  7,  6,  7,  3, 13, 14, 10
    0x5c5a7aeeb720 ---------A   01710  DATA  8,  6,  5,  3, 14,  6,  6,  2, 10
    0x5c5a7aeebf90 ---------A   01720  DATA  8,  6,  5,  3, 14,  6,  7,  1, 10
    0x5c5a7aeec800 ---------A   01730  DATA  9,  6,  3,  3, 15,  6, 16,  1,  1
    0x5c5a7aeed070 ---------A   01740  DATA  9,  6,  3,  3, 15,  6, 15,  2,  1
    0x5c5a7aeed8d0 ---------A   01750  DATA 10,  6,  1,  3, 16,  6, 14,  3,  1
    0x5c5a7aeedf70 ---------A   01760  DATA 10, 10, 16,  6, 12,  5,  1
    0x5c5a7aeee450 ---------A   01770  DATA 11,  8, 13, 27,  1
    0x5c5a7aeee920 ---------A   01780  DATA 11,  8, 13, 27,  1
    0x5c5a7aeeea80 ---------A   01790  DATA 60
    0x5c5a7aeef3c0 ---------A T 01800  NEXT I
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
char* data_01440s[]={"60"};
char* data_01450s[]={"1","12","26","9","12"};
char* data_01460s[]={"3","8","24","17","8"};
char* data_01470s[]={"4","6","23","21","6"};
char* data_01480s[]={"4","6","22","12","5","6","5"};
char* data_01490s[]={"4","6","21","11","8","6","4"};
char* data_01500s[]={"4","6","21","10","10","5","4"};
char* data_01510s[]={"4","6","21","9","11","5","4"};
char* data_01520s[]={"4","6","21","8","11","6","4"};
char* data_01530s[]={"4","6","21","7","11","7","4"};
char* data_01540s[]={"4","6","21","6","11","8","4"};
char* data_01550s[]={"4","6","19","1","1","5","11","9","4"};
char* data_01560s[]={"4","6","19","1","1","5","10","10","4"};
char* data_01570s[]={"4","6","18","2","1","6","8","11","4"};
char* data_01580s[]={"4","6","17","3","1","7","5","13","4"};
char* data_01590s[]={"4","6","15","5","2","23","5"};
char* data_01600s[]={"1","29","5","17","8"};
char* data_01610s[]={"1","29","9","9","12"};
char* data_01620s[]={"1","13","5","40","1"};
char* data_01630s[]={"1","13","5","40","1"};
char* data_01640s[]={"4","6","13","3","10","6","12","5","1"};
char* data_01650s[]={"5","6","11","3","11","6","14","3","1"};
char* data_01660s[]={"5","6","11","3","11","6","15","2","1"};
char* data_01670s[]={"6","6","9","3","12","6","16","1","1"};
char* data_01680s[]={"6","6","9","3","12","6","7","1","10"};
char* data_01690s[]={"7","6","7","3","13","6","6","2","10"};
char* data_01700s[]={"7","6","7","3","13","14","10"};
char* data_01710s[]={"8","6","5","3","14","6","6","2","10"};
char* data_01720s[]={"8","6","5","3","14","6","7","1","10"};
char* data_01730s[]={"9","6","3","3","15","6","16","1","1"};
char* data_01740s[]={"9","6","3","3","15","6","15","2","1"};
char* data_01750s[]={"10","6","1","3","16","6","14","3","1"};
char* data_01760s[]={"10","10","16","6","12","5","1"};
char* data_01770s[]={"11","8","13","27","1"};
char* data_01780s[]={"11","8","13","27","1"};
char* data_01790s[]={"60"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1440,  1,data_01440s},
    { 1450,  5,data_01450s},
    { 1460,  5,data_01460s},
    { 1470,  5,data_01470s},
    { 1480,  7,data_01480s},
    { 1490,  7,data_01490s},
    { 1500,  7,data_01500s},
    { 1510,  7,data_01510s},
    { 1520,  7,data_01520s},
    { 1530,  7,data_01530s},
    { 1540,  7,data_01540s},
    { 1550,  9,data_01550s},
    { 1560,  9,data_01560s},
    { 1570,  9,data_01570s},
    { 1580,  9,data_01580s},
    { 1590,  7,data_01590s},
    { 1600,  5,data_01600s},
    { 1610,  5,data_01610s},
    { 1620,  5,data_01620s},
    { 1630,  5,data_01630s},
    { 1640,  9,data_01640s},
    { 1650,  9,data_01650s},
    { 1660,  9,data_01660s},
    { 1670,  9,data_01670s},
    { 1680,  9,data_01680s},
    { 1690,  9,data_01690s},
    { 1700,  7,data_01700s},
    { 1710,  9,data_01710s},
    { 1720,  9,data_01720s},
    { 1730,  9,data_01730s},
    { 1740,  9,data_01740s},
    { 1750,  9,data_01750s},
    { 1760,  7,data_01760s},
    { 1770,  5,data_01770s},
    { 1780,  5,data_01780s},
    { 1790,  1,data_01790s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    A1_int;                                    // Basic: A1 
char*  B_str_arr[120];                            // Basic: B$ 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
char*  D_str;                                     // Basic: D$ 
int    I_int;                                     // Basic: I 
char*  INKEY_str;                                 // Basic: INKEY$ 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
int    P_int;                                     // Basic: P 
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
    // 01000 REM NOTE
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS
    ClearScreen(0);
    // 01030 CLEAR 1500
    ClearMemory(1500,4294967295);
    // 01040 PRINT @ 285, "Love"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Love");strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT @ 409, "Copyright By"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Copyright By");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT @ 534, "Creative Computing"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Creative Computing");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT @ 657, "Morristown, New Jersey 07960"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Morristown, New Jersey 07960");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 FOR D= 1 TO 1500
    for(D_int=1;D_int<=1500;D_int++){
        // 01090 NEXT D
        int dummy_1090=0; // Ignore this line.
    }; // End-For(D_int)
    // 01100 CLS
    ClearScreen(0);
    // 01110 PRINT @ 194, "A Tribute to The Great American Artist, Robert Indiana."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A Tribute to The Great American Artist, Robert Indiana.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT @ 325, "His greatest work will be reproduced with a message of"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"His greatest work will be reproduced with a message of");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT @ 389, "Your choice up to 60 Characters.  If you can't think of"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Your choice up to 60 Characters.  If you can't think of");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT @ 460, "a message, simply enter the word `LOVE'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"a message, simply enter the word `LOVE'");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT @ 595,"";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"");fputs(buf,fh); };
    // 01160 INPUT "YOUR MESSAGE PLEASE..";A$
    // Start of Basic INPUT statement 01160
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"YOUR MESSAGE PLEASE..");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01160
    // 01170 L = LEN(A$)
    L_int = LEN(A_str);
    // 01180 DIM B$(120)
    // 01190 PRINT @ 719, "HIT ANY KEY WHEN PRINTER IS READY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HIT ANY KEY WHEN PRINTER IS READY");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 D$=INKEY$
    GLBpStr=INKEY_str;
    D_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01210:
    // 01210 IF D$="" THEN 1210
    if(strcmp(D_str,"")==0)goto Lbl_01210;
    // 01220 FOR J=0 TO INT(60/L)
    for(J_int=0;J_int<=INT(60/L_int);J_int++){
        // 01230 FOR I=1 TO L
        for(I_int=1;I_int<=L_int;I_int++){
            // 01240 B$(J*L+I)=MID$(A$,I,1)
            GLBpStr=MID$(A_str,I_int,1);
            B_str_arr[J_int*L_int+I_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 01250 NEXT I
            int dummy_1250=0; // Ignore this line.
        }; // End-For(I_int)
        // 01260 NEXT J
        int dummy_1260=0; // Ignore this line.
    }; // End-For(J_int)
    // 01270 C=0
    C_int = 0;
    // 01280 A1=1
    A1_int = 1;
    // 01290 P=1
    P_int = 1;
    // 01300 C=C+1
    C_int = C_int+1;

  Lbl_01310:
    // 01310 IF C=37 GOTO 1800
    if(C_int==37)goto Lbl_01800;
    // 01320 LPRINT" "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 READ A
    A_int = Get_Data_Int();
    // 01340 A1=A1+A
    A1_int = A1_int+A_int;

  Lbl_01350:
    // 01350 IF P=1 GOTO 1410
    if(P_int==1)goto Lbl_01410;
    // 01360 FOR I=1 TO A
    for(I_int=1;I_int<=A_int;I_int++){
        // 01370 LPRINT" ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
        // 01380 NEXT I
        int dummy_1380=0; // Ignore this line.
    }; // End-For(I_int)
    // 01390 P=1
    P_int = 1;
    // 01400 GOTO 1420
    goto Lbl_01420;

  Lbl_01410:
    // 01410 P=0
    P_int = 0;

  Lbl_01420:
    // 01420 IF A1<61 GOTO 1350
    if(A1_int<61)goto Lbl_01350;
    // 01430 GOTO 1310
    goto Lbl_01310;
    // 01440 DATA 60
    // 01450 DATA  1, 12, 26,  9, 12
    // 01460 DATA  3,  8, 24, 17,  8
    // 01470 DATA  4,  6, 23, 21,  6
    // 01480 DATA  4,  6, 22, 12,  5,  6,  5
    // 01490 DATA  4,  6, 21, 11,  8,  6,  4
    // 01500 DATA  4,  6, 21, 10, 10,  5,  4
    // 01510 DATA  4,  6, 21,  9, 11,  5,  4
    // 01520 DATA  4,  6, 21,  8, 11,  6,  4
    // 01530 DATA  4,  6, 21,  7, 11,  7,  4
    // 01540 DATA  4,  6, 21,  6, 11,  8,  4
    // 01550 DATA  4,  6, 19,  1,  1,  5, 11,  9,  4
    // 01560 DATA  4,  6, 19,  1,  1,  5, 10, 10,  4
    // 01570 DATA  4,  6, 18,  2,  1,  6,  8, 11,  4
    // 01580 DATA  4,  6, 17,  3,  1,  7,  5, 13,  4
    // 01590 DATA  4,  6, 15,  5,  2, 23,  5
    // 01600 DATA  1, 29,  5, 17,  8
    // 01610 DATA  1, 29,  9,  9, 12
    // 01620 DATA  1, 13,  5, 40,  1
    // 01630 DATA  1, 13,  5, 40,  1
    // 01640 DATA  4,  6, 13,  3, 10,  6, 12,  5,  1
    // 01650 DATA  5,  6, 11,  3, 11,  6, 14,  3,  1
    // 01660 DATA  5,  6, 11,  3, 11,  6, 15,  2,  1
    // 01670 DATA  6,  6,  9,  3, 12,  6, 16,  1,  1
    // 01680 DATA  6,  6,  9,  3, 12,  6,  7,  1, 10
    // 01690 DATA  7,  6,  7,  3, 13,  6,  6,  2, 10
    // 01700 DATA  7,  6,  7,  3, 13, 14, 10
    // 01710 DATA  8,  6,  5,  3, 14,  6,  6,  2, 10
    // 01720 DATA  8,  6,  5,  3, 14,  6,  7,  1, 10
    // 01730 DATA  9,  6,  3,  3, 15,  6, 16,  1,  1
    // 01740 DATA  9,  6,  3,  3, 15,  6, 15,  2,  1
    // 01750 DATA 10,  6,  1,  3, 16,  6, 14,  3,  1
    // 01760 DATA 10, 10, 16,  6, 12,  5,  1
    // 01770 DATA 11,  8, 13, 27,  1
    // 01780 DATA 11,  8, 13, 27,  1
    // 01790 DATA 60

  Lbl_01800:
    // 01800 NEXT I
    int dummy_1800=0; // Ignore this line.
}; // End-For(I_int)
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
