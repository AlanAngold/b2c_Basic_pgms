/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/flipflop.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x598fecd056d0 ---------A   00002  PRINT TAB(32);"FLIPFLOP"
    0x598fecd05670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x598feccf62b0 ---------A   00006  PRINT
    0x598fecd06b80 ---------A   00010  REM *** CREATED BY MICHAEL CASS
    0x598fecd07f30 ---------A   00015  DIM A$(20)
    0x598fecd06080 ---------A   00020  PRINT "THE OBJECT OF THIS PUZZLE IS TO CHANGE THIS:"
    0x598fecd05e40 ---------A   00030  PRINT
    0x598fecd06500 ---------A   00040  PRINT "X X X X X X X X X X"
    0x598fecd076a0 ---------A   00050  PRINT
    0x598fecd07720 ---------A   00060  PRINT "TO THIS:"
    0x598fecd08100 ---------A   00070  PRINT
    0x598fecd08220 ---------A   00080  PRINT "O O O O O O O O O O"
    0x598fecd06620 ---------A   00090  PRINT
    0x598fecd06740 ---------A   00100  PRINT "BY TYPING THE NUMBER CORRESPONDING TO THE POSITION OF THE"
    0x598fecd0d8f0 ---------A   00110  PRINT "LETTER ON SOME NUMBERS, ONE POSITION WILL CHANGE, ON"
    0x598fecd0da70 ---------A   00120  PRINT "OTHERS, TWO WILL CHANGE.  TO RESET LINE TO ALL X'S, TYPE 0"
    0x598fecd0dbe0 ---------A   00130  PRINT "(ZERO) AND TO START OVER IN THE MIDDLE OF A GAME, TYPE "
    0x598fecd0dd00 ---------A   00140  PRINT "11 (ELEVEN)."
    0x598fecd0dd60 ---------A   00170  PRINT
    0x598fecd0ddc0 ---------A T 00180  REM
    0x598fecd0e170 ---------A   00190  Q=RND(1)
    0x598fecd0e2a0 ---------A   00200  PRINT "HERE IS THE STARTING LINE OF X'S."
    0x598fecd0e320 ---------A   00210  PRINT
    0x598fecd0e5e0 ---------A   00220  C=0
    0x598fecd0e710 ---------A T 00230  PRINT "1 2 3 4 5 6 7 8 9 10"
    0x598fecd0e870 ---------A   00240  PRINT "X X X X X X X X X X"
    0x598fecd0e8f0 ---------A   00250  PRINT
    0x598fecd0e970 ---------A   00260  REM
    0x598fecd0ed20 ---------A   00270  FOR X=1 TO 10
    0x598fecd0f040 ---------A   00280  A$(X)="X"
    0x598fecd0f170 ---------A   00290  NEXT X
    0x598fecd0f210 ---------A   00300  GOTO 320
    0x598fecd0f380 ---------A T 00310  PRINT "ILLEGAL ENTRY--TRY AGAIN."
    0x598fecd0f710 ---------A T 00320  PRINT "INPUT THE NUMBER";
    0x598fecd0f940 ---------A   00330  INPUT N
    0x598fecd0fca0 ---------A   00340  IF N<>INT(N) THEN 310
    0x598fecd0ff00 ---------A   00350  IF N=11 THEN 180
    0x598fecd10160 ---------A   00360  IF N>11 THEN 310
    0x598fecd103c0 ---------A   00370  IF N=0 THEN 230
    0x598fecd10700 ---------A   00380  IF M=N THEN 510
    0x598fecd10950 ---------A   00390  M=N
    0x598fecd10ca0 ---------A   00400  IF A$(N)="O" THEN 480
    0x598fecd10fe0 ---------A   00410  A$(N)="O"
    0x598fecd11e30 ---------A T 00420  R=TAN(Q+N/Q-N)-SIN(Q/N)+336*SIN(8*N)
    0x598fecd12260 ---------A   00430  N=R-INT(R)
    0x598fecd12680 ---------A   00440  N=INT(10*N)
    0x598fecd129d0 ---------A   00450  IF A$(N)="O" THEN 480
    0x598fecd12cf0 ---------A   00460  A$(N)="O"
    0x598fecd12d60 ---------A   00470  GOTO 610
    0x598fecd13070 ---------A T 00480  A$(N)="X"
    0x598fecd132e0 ---------A   00490  IF M=N THEN 420
    0x598fecd13370 ---------A   00500  GOTO 610
    0x598fecd136c0 ---------A T 00510  IF A$(N)="O" THEN 590
    0x598fecd13a00 ---------A   00520  A$(N)="O"
    0x598fecd147b0 ---------A T 00530  R=.592*(1/TAN(Q/N+Q))/SIN(N*2+Q)-COS(N)
    0x598fecd14be0 ---------A   00540  N=R-INT(R)
    0x598fecd15000 ---------A   00550  N=INT(10*N)
    0x598fecd15350 ---------A   00560  IF A$(N)="O" THEN 590
    0x598fecd15670 ---------A   00570  A$(N)="O"
    0x598fecd156e0 ---------A   00580  GOTO 610
    0x598fecd159f0 ---------A T 00590  A$(N)="X"
    0x598fecd15c70 ---------A   00600  IF M=N THEN 530
    0x598fecd15df0 ---------A T 00610  PRINT "1 2 3 4 5 6 7 8 9 10"
    0x598fecd165f0 ---------A   00620  FOR Z=1 TO 10: PRINT A$(Z);" ";: NEXT Z
    0x598fecd16940 ---------A   00630  C=C+1
    0x598fecd16dc0 ---------A   00640  PRINT
    0x598fecd170b0 ---------A   00650  FOR Z=1 TO 10
    0x598fecd17410 ---------A   00660  IF A$(Z)<>"O" THEN 320
    0x598fecd17550 ---------A   00670  NEXT Z
    0x598fecd177f0 ---------A   00680  IF C>12 THEN 710
    0x598fecd17b60 ---------A   00690  PRINT "VERY GOOD.  YOU GUESSED IT IN ONLY";C;"GUESSES."
    0x598fecd17c10 ---------A   00700  GOTO 720
    0x598fecd17f90 ---------A T 00710  PRINT "TRY HARDER NEXT TIME.  IT TOOK YOU";C;"GUESSES."
    0x598fecd18120 ---------A T 00720  PRINT "DO YOU WANT TO TRY ANOTHER PUZZLE";
    0x598fecd18350 ---------A   00730  INPUT X$
    0x598fecd18770 ---------A   00740  IF LEFT$(X$,1)="N" THEN 780
    0x598fecd187f0 ---------A   00760  PRINT
    0x598fecd18870 ---------A   00770  GOTO 180
    0x598fecd188c0 ---------A T 00780  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00180      00350T, 00770T
     00230      00370T
     00310      00340T, 00360T
     00320      00300T, 00660T
     00420      00490T
     00480      00400T, 00450T
     00510      00380T
     00530      00600T
     00590      00510T, 00560T
     00610      00470T, 00500T, 00580T
     00710      00680T
     00720      00700T
     00780      00740T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x598fecd056d0 (00002)   0x598fecd056d0 (00002)   0x598fecd188c0 (00780)   0x598fecd188c0 (00780)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/flipflop.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x598fecd056d0 ---------A   00002  PRINT TAB(32);"FLIPFLOP"
    0x598fecd05670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x598feccf62b0 ---------A   00006  PRINT
    0x598fecd06b80 ---------A   00010  REM *** CREATED BY MICHAEL CASS
    0x598fecd07f30 ---------A   00015  DIM A$(20)
    0x598fecd06080 ---------A   00020  PRINT "THE OBJECT OF THIS PUZZLE IS TO CHANGE THIS:"
    0x598fecd05e40 ---------A   00030  PRINT
    0x598fecd06500 ---------A   00040  PRINT "X X X X X X X X X X"
    0x598fecd076a0 ---------A   00050  PRINT
    0x598fecd07720 ---------A   00060  PRINT "TO THIS:"
    0x598fecd08100 ---------A   00070  PRINT
    0x598fecd08220 ---------A   00080  PRINT "O O O O O O O O O O"
    0x598fecd06620 ---------A   00090  PRINT
    0x598fecd06740 ---------A   00100  PRINT "BY TYPING THE NUMBER CORRESPONDING TO THE POSITION OF THE"
    0x598fecd0d8f0 ---------A   00110  PRINT "LETTER ON SOME NUMBERS, ONE POSITION WILL CHANGE, ON"
    0x598fecd0da70 ---------A   00120  PRINT "OTHERS, TWO WILL CHANGE.  TO RESET LINE TO ALL X'S, TYPE 0"
    0x598fecd0dbe0 ---------A   00130  PRINT "(ZERO) AND TO START OVER IN THE MIDDLE OF A GAME, TYPE "
    0x598fecd0dd00 ---------A   00140  PRINT "11 (ELEVEN)."
    0x598fecd0dd60 ---------A   00170  PRINT
    0x598fecd0ddc0 ---------A T 00180  REM
    0x598fecd0e170 ---------A   00190  Q=RND(1)
    0x598fecd0e2a0 ---------A   00200  PRINT "HERE IS THE STARTING LINE OF X'S."
    0x598fecd0e320 ---------A   00210  PRINT
    0x598fecd0e5e0 ---------A   00220  C=0
    0x598fecd0e710 ---------A T 00230  PRINT "1 2 3 4 5 6 7 8 9 10"
    0x598fecd0e870 ---------A   00240  PRINT "X X X X X X X X X X"
    0x598fecd0e8f0 ---------A   00250  PRINT
    0x598fecd0e970 ---------A   00260  REM
    0x598fecd0ed20 ---------A   00270  FOR X=1 TO 10
    0x598fecd0f040 ---------A   00280  A$(X)="X"
    0x598fecd0f170 ---------A   00290  NEXT X
    0x598fecd0f210 ---------A   00300  GOTO 320
    0x598fecd0f380 ---------A T 00310  PRINT "ILLEGAL ENTRY--TRY AGAIN."
    0x598fecd0f710 ---------A T 00320  PRINT "INPUT THE NUMBER";
    0x598fecd0f940 ---------A   00330  INPUT N
    0x598fecd0fca0 ---------A   00340  IF N<>INT(N) THEN 310
    0x598fecd0ff00 ---------A   00350  IF N=11 THEN 180
    0x598fecd10160 ---------A   00360  IF N>11 THEN 310
    0x598fecd103c0 ---------A   00370  IF N=0 THEN 230
    0x598fecd10700 ---------A   00380  IF M=N THEN 510
    0x598fecd10950 ---------A   00390  M=N
    0x598fecd10ca0 ---------A   00400  IF A$(N)="O" THEN 480
    0x598fecd10fe0 ---------A   00410  A$(N)="O"
    0x598fecd11e30 ---------A T 00420  R=TAN(Q+N/Q-N)-SIN(Q/N)+336*SIN(8*N)
    0x598fecd12260 ---------A   00430  N=R-INT(R)
    0x598fecd12680 ---------A   00440  N=INT(10*N)
    0x598fecd129d0 ---------A   00450  IF A$(N)="O" THEN 480
    0x598fecd12cf0 ---------A   00460  A$(N)="O"
    0x598fecd12d60 ---------A   00470  GOTO 610
    0x598fecd13070 ---------A T 00480  A$(N)="X"
    0x598fecd132e0 ---------A   00490  IF M=N THEN 420
    0x598fecd13370 ---------A   00500  GOTO 610
    0x598fecd136c0 ---------A T 00510  IF A$(N)="O" THEN 590
    0x598fecd13a00 ---------A   00520  A$(N)="O"
    0x598fecd147b0 ---------A T 00530  R=.592*(1/TAN(Q/N+Q))/SIN(N*2+Q)-COS(N)
    0x598fecd14be0 ---------A   00540  N=R-INT(R)
    0x598fecd15000 ---------A   00550  N=INT(10*N)
    0x598fecd15350 ---------A   00560  IF A$(N)="O" THEN 590
    0x598fecd15670 ---------A   00570  A$(N)="O"
    0x598fecd156e0 ---------A   00580  GOTO 610
    0x598fecd159f0 ---------A T 00590  A$(N)="X"
    0x598fecd15c70 ---------A   00600  IF M=N THEN 530
    0x598fecd15df0 ---------A T 00610  PRINT "1 2 3 4 5 6 7 8 9 10"
    0x598fecd16170 ----------   00620  FOR Z=1 TO 10
    0x598fecd164b0 ----------        a PRINT A$(Z);" ";
    0x598fecd165f0 ---------A        b NEXT Z
    0x598fecd16940 ---------A   00630  C=C+1
    0x598fecd16dc0 ---------A   00640  PRINT
    0x598fecd170b0 ---------A   00650  FOR Z=1 TO 10
    0x598fecd17410 ---------A   00660  IF A$(Z)<>"O" THEN 320
    0x598fecd17550 ---------A   00670  NEXT Z
    0x598fecd177f0 ---------A   00680  IF C>12 THEN 710
    0x598fecd17b60 ---------A   00690  PRINT "VERY GOOD.  YOU GUESSED IT IN ONLY";C;"GUESSES."
    0x598fecd17c10 ---------A   00700  GOTO 720
    0x598fecd17f90 ---------A T 00710  PRINT "TRY HARDER NEXT TIME.  IT TOOK YOU";C;"GUESSES."
    0x598fecd18120 ---------A T 00720  PRINT "DO YOU WANT TO TRY ANOTHER PUZZLE";
    0x598fecd18350 ---------A   00730  INPUT X$
    0x598fecd18770 ---------A   00740  IF LEFT$(X$,1)="N" THEN 780
    0x598fecd187f0 ---------A   00760  PRINT
    0x598fecd18870 ---------A   00770  GOTO 180
    0x598fecd188c0 ---------A T 00780  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/flipflop.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x598fecd056d0 ---------A   01000  PRINT TAB(32);"FLIPFLOP"
    0x598fecd05670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x598feccf62b0 ---------A   01020  PRINT
    0x598fecd06b80 ---------A   01030  REM *** CREATED BY MICHAEL CASS
    0x598fecd07f30 ---------A   01040  DIM A$(20)
    0x598fecd06080 ---------A   01050  PRINT "THE OBJECT OF THIS PUZZLE IS TO CHANGE THIS:"
    0x598fecd05e40 ---------A   01060  PRINT
    0x598fecd06500 ---------A   01070  PRINT "X X X X X X X X X X"
    0x598fecd076a0 ---------A   01080  PRINT
    0x598fecd07720 ---------A   01090  PRINT "TO THIS:"
    0x598fecd08100 ---------A   01100  PRINT
    0x598fecd08220 ---------A   01110  PRINT "O O O O O O O O O O"
    0x598fecd06620 ---------A   01120  PRINT
    0x598fecd06740 ---------A   01130  PRINT "BY TYPING THE NUMBER CORRESPONDING TO THE POSITION OF THE"
    0x598fecd0d8f0 ---------A   01140  PRINT "LETTER ON SOME NUMBERS, ONE POSITION WILL CHANGE, ON"
    0x598fecd0da70 ---------A   01150  PRINT "OTHERS, TWO WILL CHANGE.  TO RESET LINE TO ALL X'S, TYPE 0"
    0x598fecd0dbe0 ---------A   01160  PRINT "(ZERO) AND TO START OVER IN THE MIDDLE OF A GAME, TYPE "
    0x598fecd0dd00 ---------A   01170  PRINT "11 (ELEVEN)."
    0x598fecd0dd60 ---------A   01180  PRINT
    0x598fecd0ddc0 ---------A   01190  REM
    0x598fecd0e170 ---------A   01200  Q=RND(1)
    0x598fecd0e2a0 ---------A   01210  PRINT "HERE IS THE STARTING LINE OF X'S."
    0x598fecd0e320 ---------A   01220  PRINT
    0x598fecd0e5e0 ---------A   01230  C=0
    0x598fecd0e710 ---------A   01240  PRINT "1 2 3 4 5 6 7 8 9 10"
    0x598fecd0e870 ---------A   01250  PRINT "X X X X X X X X X X"
    0x598fecd0e8f0 ---------A   01260  PRINT
    0x598fecd0e970 ---------A   01270  REM
    0x598fecd0ed20 ---------A   01280  FOR X=1 TO 10
    0x598fecd0f040 ---------A   01290  A$(X)="X"
    0x598fecd0f170 ---------A   01300  NEXT X
    0x598fecd0f210 ---------A   01310  GOTO 1330
    0x598fecd0f380 ---------A   01320  PRINT "ILLEGAL ENTRY--TRY AGAIN."
    0x598fecd0f710 ---------A   01330  PRINT "INPUT THE NUMBER";
    0x598fecd0f940 ---------A   01340  INPUT N
    0x598fecd0fca0 ---------A   01350  IF N<>INT(N) THEN 1320
    0x598fecd0ff00 ---------A   01360  IF N=11 THEN 1190
    0x598fecd10160 ---------A   01370  IF N>11 THEN 1320
    0x598fecd103c0 ---------A   01380  IF N=0 THEN 1240
    0x598fecd10700 ---------A   01390  IF M=N THEN 1520
    0x598fecd10950 ---------A   01400  M=N
    0x598fecd10ca0 ---------A   01410  IF A$(N)="O" THEN 1490
    0x598fecd10fe0 ---------A   01420  A$(N)="O"
    0x598fecd11e30 ---------A   01430  R=TAN(Q+N/Q-N)-SIN(Q/N)+336*SIN(8*N)
    0x598fecd12260 ---------A   01440  N=R-INT(R)
    0x598fecd12680 ---------A   01450  N=INT(10*N)
    0x598fecd129d0 ---------A   01460  IF A$(N)="O" THEN 1490
    0x598fecd12cf0 ---------A   01470  A$(N)="O"
    0x598fecd12d60 ---------A   01480  GOTO 1620
    0x598fecd13070 ---------A   01490  A$(N)="X"
    0x598fecd132e0 ---------A   01500  IF M=N THEN 1430
    0x598fecd13370 ---------A   01510  GOTO 1620
    0x598fecd136c0 ---------A   01520  IF A$(N)="O" THEN 1600
    0x598fecd13a00 ---------A   01530  A$(N)="O"
    0x598fecd147b0 ---------A   01540  R=.592*(1/TAN(Q/N+Q))/SIN(N*2+Q)-COS(N)
    0x598fecd14be0 ---------A   01550  N=R-INT(R)
    0x598fecd15000 ---------A   01560  N=INT(10*N)
    0x598fecd15350 ---------A   01570  IF A$(N)="O" THEN 1600
    0x598fecd15670 ---------A   01580  A$(N)="O"
    0x598fecd156e0 ---------A   01590  GOTO 1620
    0x598fecd159f0 ---------A   01600  A$(N)="X"
    0x598fecd15c70 ---------A   01610  IF M=N THEN 1540
    0x598fecd15df0 ---------A   01620  PRINT "1 2 3 4 5 6 7 8 9 10"
    0x598fecd16170 ----------   01630  FOR Z=1 TO 10
    0x598fecd164b0 ----------   01640  PRINT A$(Z);" ";
    0x598fecd165f0 ---------A   01650  NEXT Z
    0x598fecd16940 ---------A   01660  C=C+1
    0x598fecd16dc0 ---------A   01670  PRINT
    0x598fecd170b0 ---------A   01680  FOR Z=1 TO 10
    0x598fecd17410 ---------A   01690  IF A$(Z)<>"O" THEN 1330
    0x598fecd17550 ---------A   01700  NEXT Z
    0x598fecd177f0 ---------A   01710  IF C>12 THEN 1740
    0x598fecd17b60 ---------A   01720  PRINT "VERY GOOD.  YOU GUESSED IT IN ONLY";C;"GUESSES."
    0x598fecd17c10 ---------A   01730  GOTO 1750
    0x598fecd17f90 ---------A   01740  PRINT "TRY HARDER NEXT TIME.  IT TOOK YOU";C;"GUESSES."
    0x598fecd18120 ---------A   01750  PRINT "DO YOU WANT TO TRY ANOTHER PUZZLE";
    0x598fecd18350 ---------A   01760  INPUT X$
    0x598fecd18770 ---------A   01770  IF LEFT$(X$,1)="N" THEN 1800
    0x598fecd187f0 ---------A   01780  PRINT
    0x598fecd18870 ---------A   01790  GOTO 1190
    0x598fecd188c0 ---------A   01800  END
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
 *  Symbol Table Listing for 'basic/flipflop.bas'
 *
    A$              Array    String          {0,19} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
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
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    X$                       String      
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/flipflop.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x598fecd056d0 ---------A   01000  PRINT TAB(32);"FLIPFLOP"
    0x598fecd05670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x598feccf62b0 ---------A   01020  PRINT
    0x598fecd06b80 ---------A   01030  REM *** CREATED BY MICHAEL CASS
    0x598fecd07f30 ---------A   01040  DIM A$(20)
    0x598fecd06080 ---------A   01050  PRINT "THE OBJECT OF THIS PUZZLE IS TO CHANGE THIS:"
    0x598fecd05e40 ---------A   01060  PRINT
    0x598fecd06500 ---------A   01070  PRINT "X X X X X X X X X X"
    0x598fecd076a0 ---------A   01080  PRINT
    0x598fecd07720 ---------A   01090  PRINT "TO THIS:"
    0x598fecd08100 ---------A   01100  PRINT
    0x598fecd08220 ---------A   01110  PRINT "O O O O O O O O O O"
    0x598fecd06620 ---------A   01120  PRINT
    0x598fecd06740 ---------A   01130  PRINT "BY TYPING THE NUMBER CORRESPONDING TO THE POSITION OF THE"
    0x598fecd0d8f0 ---------A   01140  PRINT "LETTER ON SOME NUMBERS, ONE POSITION WILL CHANGE, ON"
    0x598fecd0da70 ---------A   01150  PRINT "OTHERS, TWO WILL CHANGE.  TO RESET LINE TO ALL X'S, TYPE 0"
    0x598fecd0dbe0 ---------A   01160  PRINT "(ZERO) AND TO START OVER IN THE MIDDLE OF A GAME, TYPE "
    0x598fecd0dd00 ---------A   01170  PRINT "11 (ELEVEN)."
    0x598fecd0dd60 ---------A   01180  PRINT
    0x598fecd0ddc0 ---------A T 01190  REM
    0x598fecd0e170 ---------A   01200  Q=RND(1)
    0x598fecd0e2a0 ---------A   01210  PRINT "HERE IS THE STARTING LINE OF X'S."
    0x598fecd0e320 ---------A   01220  PRINT
    0x598fecd0e5e0 ---------A   01230  C=0
    0x598fecd0e710 ---------A T 01240  PRINT "1 2 3 4 5 6 7 8 9 10"
    0x598fecd0e870 ---------A   01250  PRINT "X X X X X X X X X X"
    0x598fecd0e8f0 ---------A   01260  PRINT
    0x598fecd0e970 ---------A   01270  REM
    0x598fecd0ed20 ---------A   01280  FOR X=1 TO 10
    0x598fecd0f040 ---------A   01290  A$(X)="X"
    0x598fecd0f170 ---------A   01300  NEXT X
    0x598fecd0f210 ---------A   01310  GOTO 1330
    0x598fecd0f380 ---------A T 01320  PRINT "ILLEGAL ENTRY--TRY AGAIN."
    0x598fecd0f710 ---------A T 01330  PRINT "INPUT THE NUMBER";
    0x598fecd0f940 ---------A   01340  INPUT N
    0x598fecd0fca0 ---------A   01350  IF N<>INT(N) THEN 1320
    0x598fecd0ff00 ---------A   01360  IF N=11 THEN 1190
    0x598fecd10160 ---------A   01370  IF N>11 THEN 1320
    0x598fecd103c0 ---------A   01380  IF N=0 THEN 1240
    0x598fecd10700 ---------A   01390  IF M=N THEN 1520
    0x598fecd10950 ---------A   01400  M=N
    0x598fecd10ca0 ---------A   01410  IF A$(N)="O" THEN 1490
    0x598fecd10fe0 ---------A   01420  A$(N)="O"
    0x598fecd11e30 ---------A T 01430  R=TAN(Q+N/Q-N)-SIN(Q/N)+336*SIN(8*N)
    0x598fecd12260 ---------A   01440  N=R-INT(R)
    0x598fecd12680 ---------A   01450  N=INT(10*N)
    0x598fecd129d0 ---------A   01460  IF A$(N)="O" THEN 1490
    0x598fecd12cf0 ---------A   01470  A$(N)="O"
    0x598fecd12d60 ---------A   01480  GOTO 1620
    0x598fecd13070 ---------A T 01490  A$(N)="X"
    0x598fecd132e0 ---------A   01500  IF M=N THEN 1430
    0x598fecd13370 ---------A   01510  GOTO 1620
    0x598fecd136c0 ---------A T 01520  IF A$(N)="O" THEN 1600
    0x598fecd13a00 ---------A   01530  A$(N)="O"
    0x598fecd147b0 ---------A T 01540  R=.592*(1/TAN(Q/N+Q))/SIN(N*2+Q)-COS(N)
    0x598fecd14be0 ---------A   01550  N=R-INT(R)
    0x598fecd15000 ---------A   01560  N=INT(10*N)
    0x598fecd15350 ---------A   01570  IF A$(N)="O" THEN 1600
    0x598fecd15670 ---------A   01580  A$(N)="O"
    0x598fecd156e0 ---------A   01590  GOTO 1620
    0x598fecd159f0 ---------A T 01600  A$(N)="X"
    0x598fecd15c70 ---------A   01610  IF M=N THEN 1540
    0x598fecd15df0 ---------A T 01620  PRINT "1 2 3 4 5 6 7 8 9 10"
    0x598fecd16170 ---------A   01630  FOR Z=1 TO 10
    0x598fecd164b0 ---------A   01640  PRINT A$(Z);" ";
    0x598fecd165f0 ---------A   01650  NEXT Z
    0x598fecd16940 ---------A   01660  C=C+1
    0x598fecd16dc0 ---------A   01670  PRINT
    0x598fecd170b0 ---------A   01680  FOR Z=1 TO 10
    0x598fecd17410 ---------A   01690  IF A$(Z)<>"O" THEN 1330
    0x598fecd17550 ---------A   01700  NEXT Z
    0x598fecd177f0 ---------A   01710  IF C>12 THEN 1740
    0x598fecd17b60 ---------A   01720  PRINT "VERY GOOD.  YOU GUESSED IT IN ONLY";C;"GUESSES."
    0x598fecd17c10 ---------A   01730  GOTO 1750
    0x598fecd17f90 ---------A T 01740  PRINT "TRY HARDER NEXT TIME.  IT TOOK YOU";C;"GUESSES."
    0x598fecd18120 ---------A T 01750  PRINT "DO YOU WANT TO TRY ANOTHER PUZZLE";
    0x598fecd18350 ---------A   01760  INPUT X$
    0x598fecd18770 ---------A   01770  IF LEFT$(X$,1)="N" THEN 1800
    0x598fecd187f0 ---------A   01780  PRINT
    0x598fecd18870 ---------A   01790  GOTO 1190
    0x598fecd188c0 ---------A T 01800  END
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
char*  A_str_arr[20];                             // Basic: A$ 
int    C_int;                                     // Basic: C 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    X_int;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
int    Z_int;                                     // Basic: Z 
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
    // 01000 PRINT TAB(32);"FLIPFLOP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,32);strcat(buf,"FLIPFLOP");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 REM *** CREATED BY MICHAEL CASS
    // 01040 DIM A$(20)
    // 01050 PRINT "THE OBJECT OF THIS PUZZLE IS TO CHANGE THIS:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE OBJECT OF THIS PUZZLE IS TO CHANGE THIS:");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "X X X X X X X X X X"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"X X X X X X X X X X");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "TO THIS:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO THIS:");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "O O O O O O O O O O"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"O O O O O O O O O O");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "BY TYPING THE NUMBER CORRESPONDING TO THE POSITION OF THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BY TYPING THE NUMBER CORRESPONDING TO THE POSITION OF THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "LETTER ON SOME NUMBERS, ONE POSITION WILL CHANGE, ON"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LETTER ON SOME NUMBERS, ONE POSITION WILL CHANGE, ON");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "OTHERS, TWO WILL CHANGE.  TO RESET LINE TO ALL X'S, TYPE 0"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OTHERS, TWO WILL CHANGE.  TO RESET LINE TO ALL X'S, TYPE 0");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "(ZERO) AND TO START OVER IN THE MIDDLE OF A GAME, TYPE "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(ZERO) AND TO START OVER IN THE MIDDLE OF A GAME, TYPE ");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "11 (ELEVEN)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"11 (ELEVEN).");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01190:
    // 01190 REM
    // 01200 Q=RND(1)
    Q_int = RND(1);
    // 01210 PRINT "HERE IS THE STARTING LINE OF X'S."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE IS THE STARTING LINE OF X'S.");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 C=0
    C_int = 0;

  Lbl_01240:
    // 01240 PRINT "1 2 3 4 5 6 7 8 9 10"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1 2 3 4 5 6 7 8 9 10");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "X X X X X X X X X X"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"X X X X X X X X X X");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01270 REM
    // 01280 FOR X=1 TO 10
    for(X_int=1;X_int<=10;X_int++){
        // 01290 A$(X)="X"
        GLBpStr="X";
        A_str_arr[X_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01300 NEXT X
        int dummy_1300=0; // Ignore this line.
    }; // End-For(X_int)
    // 01310 GOTO 1330
    goto Lbl_01330;

  Lbl_01320:
    // 01320 PRINT "ILLEGAL ENTRY--TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL ENTRY--TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01330:
    // 01330 PRINT "INPUT THE NUMBER";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INPUT THE NUMBER");fputs(buf,fh); };
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
    // 01350 IF N<>INT(N) THEN 1320
    if(N_int!=INT(N_int))goto Lbl_01320;
    // 01360 IF N=11 THEN 1190
    if(N_int==11)goto Lbl_01190;
    // 01370 IF N>11 THEN 1320
    if(N_int>11)goto Lbl_01320;
    // 01380 IF N=0 THEN 1240
    if(N_int==0)goto Lbl_01240;
    // 01390 IF M=N THEN 1520
    if(M_int==N_int)goto Lbl_01520;
    // 01400 M=N
    M_int = N_int;
    // 01410 IF A$(N)="O" THEN 1490
    if(strcmp(A_str_arr[N_int],"O")==0)goto Lbl_01490;
    // 01420 A$(N)="O"
    GLBpStr="O";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01430:
    // 01430 R=TAN(Q+N/Q-N)-SIN(Q/N)+336*SIN(8*N)
    R_int = TAN(Q_int+N_int/Q_int-N_int)-SIN(Q_int/N_int)+336*SIN(8*N_int);
    // 01440 N=R-INT(R)
    N_int = R_int-INT(R_int);
    // 01450 N=INT(10*N)
    N_int = INT(10*N_int);
    // 01460 IF A$(N)="O" THEN 1490
    if(strcmp(A_str_arr[N_int],"O")==0)goto Lbl_01490;
    // 01470 A$(N)="O"
    GLBpStr="O";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01480 GOTO 1620
    goto Lbl_01620;

  Lbl_01490:
    // 01490 A$(N)="X"
    GLBpStr="X";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01500 IF M=N THEN 1430
    if(M_int==N_int)goto Lbl_01430;
    // 01510 GOTO 1620
    goto Lbl_01620;

  Lbl_01520:
    // 01520 IF A$(N)="O" THEN 1600
    if(strcmp(A_str_arr[N_int],"O")==0)goto Lbl_01600;
    // 01530 A$(N)="O"
    GLBpStr="O";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01540:
    // 01540 R=.592*(1/TAN(Q/N+Q))/SIN(N*2+Q)-COS(N)
    R_int = 0.59*(1/TAN(Q_int/N_int+Q_int))/SIN(N_int*2+Q_int)-COS(N_int);
    // 01550 N=R-INT(R)
    N_int = R_int-INT(R_int);
    // 01560 N=INT(10*N)
    N_int = INT(10*N_int);
    // 01570 IF A$(N)="O" THEN 1600
    if(strcmp(A_str_arr[N_int],"O")==0)goto Lbl_01600;
    // 01580 A$(N)="O"
    GLBpStr="O";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01590 GOTO 1620
    goto Lbl_01620;

  Lbl_01600:
    // 01600 A$(N)="X"
    GLBpStr="X";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01610 IF M=N THEN 1540
    if(M_int==N_int)goto Lbl_01540;

  Lbl_01620:
    // 01620 PRINT "1 2 3 4 5 6 7 8 9 10"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1 2 3 4 5 6 7 8 9 10");strcat(buf,"\n");fputs(buf,fh); };
    // 01630 FOR Z=1 TO 10
    for(Z_int=1;Z_int<=10;Z_int++){
        // 01640 PRINT A$(Z);" ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[Z_int]);strcat(buf," ");fputs(buf,fh); };
        // 01650 NEXT Z
        int dummy_1650=0; // Ignore this line.
    }; // End-For(Z_int)
    // 01660 C=C+1
    C_int = C_int+1;
    // 01670 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01680 FOR Z=1 TO 10
    for(Z_int=1;Z_int<=10;Z_int++){
        // 01690 IF A$(Z)<>"O" THEN 1330
        if(strcmp(A_str_arr[Z_int],"O")!=0)goto Lbl_01330;
        // 01700 NEXT Z
        int dummy_1700=0; // Ignore this line.
    }; // End-For(Z_int)
    // 01710 IF C>12 THEN 1740
    if(C_int>12)goto Lbl_01740;
    // 01720 PRINT "VERY GOOD.  YOU GUESSED IT IN ONLY";C;"GUESSES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VERY GOOD.  YOU GUESSED IT IN ONLY"); b2c_INT(buf,C_int);strcat(buf,"GUESSES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01730 GOTO 1750
    goto Lbl_01750;

  Lbl_01740:
    // 01740 PRINT "TRY HARDER NEXT TIME.  IT TOOK YOU";C;"GUESSES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY HARDER NEXT TIME.  IT TOOK YOU"); b2c_INT(buf,C_int);strcat(buf,"GUESSES.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01750:
    // 01750 PRINT "DO YOU WANT TO TRY ANOTHER PUZZLE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO TRY ANOTHER PUZZLE");fputs(buf,fh); };
    // 01760 INPUT X$
    // Start of Basic INPUT statement 01760
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01760
    // 01770 IF LEFT$(X$,1)="N" THEN 1800
    if(LEFT$(X_str,1)=='N')goto Lbl_01800;
    // 01780 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01790 GOTO 1190
    goto Lbl_01190;

  Lbl_01800:
    // 01800 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
