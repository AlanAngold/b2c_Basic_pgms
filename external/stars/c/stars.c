/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/stars.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x608c4f9aa6d0 ---------A   00010  PRINT TAB(34);"STARS"
    0x608c4f9aa670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x608c4f9ab910 ---------A   00030  PRINT:PRINT:PRINT
    0x608c4f9ace10 ---------A   00100  REM *** STARS - PEOPLE'S COMPUTER CENTER, MENLO PARK, CA
    0x608c4f9ad050 ---------A   00140  REM *** A IS LIMIT ON NUMBER, M IS NUMBER OF GUESSES
    0x608c4f9aaea0 ---------A   00150  A=100:M=7
    0x608c4f9ad140 ---------A   00170  INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x608c4f9b2840 ---------A   00190  IF LEFT$(A$,1)="N" THEN 280
    0x608c4f9b28a0 ---------A   00200  REM *** INSTRUCTIONS ON HOW TO PLAY
    0x608c4f9b2b30 ---------A   00210  PRINT "I AM THINKING OF A WHOLE NUMBER FROM 1 TO";A
    0x608c4f9b2cd0 ---------A   00220  PRINT "TRY TO GUESS MY NUMBER.  AFTER YOU GUESS, I"
    0x608c4f9b2e30 ---------A   00230  PRINT "WILL TYPE ONE OR MORE STARS (*).  THE MORE"
    0x608c4f9b2fe0 ---------A   00240  PRINT "STARS I TYPE, THE CLOSER YOU ARE TO MY NUMBER."
    0x608c4f9b3180 ---------A   00250  PRINT "ONE STAR (*) MEANS FAR AWAY, SEVEN STARS (*******)"
    0x608c4f9b3440 ---------A   00260  PRINT "MEANS REALLY CLOSE!  YOU GET";M;"GUESSES."
    0x608c4f9b34d0 ---------A   00270  REM *** COMPUTER THINKS OF A NUMBER
    0x608c4f9b3560 ---------A T 00280  PRINT
    0x608c4f9b35e0 ---------A   00290  PRINT
    0x608c4f9b3cd0 ---------A   00300  X=INT(A*RND(1)+1)
    0x608c4f9b3e60 ---------A   00310  PRINT "OK, I AM THINKING OF A NUMBER, START GUESSING."
    0x608c4f9b3f00 ---------A   00320  REM *** GUESSING BEGINS, HUMAN GETS M GUESSES
    0x608c4f9b42d0 ---------A   00330  FOR K=1 TO M
    0x608c4f9b4350 ---------A   00340  PRINT
    0x608c4f9b44d0 ---------A   00350  PRINT "YOUR GUESS";
    0x608c4f9b46f0 ---------A   00360  INPUT G
    0x608c4f9b4970 ---------A   00370  IF G=X THEN 600
    0x608c4f9b4e70 ---------A   00380  D=ABS(G-X)
    0x608c4f9b50c0 ---------A   00390  IF D>=64 THEN 510
    0x608c4f9b5320 ---------A   00400  IF D>=32 THEN 500
    0x608c4f9b5580 ---------A   00410  IF D>=16 THEN 490
    0x608c4f9b57e0 ---------A   00420  IF D>=8 THEN 480
    0x608c4f9b5a40 ---------A   00430  IF D>=4 THEN 470
    0x608c4f9b5ca0 ---------A   00440  IF D>=2 THEN 460
    0x608c4f9b6030 ---------A   00450  PRINT "*";
    0x608c4f9b61b0 ---------A T 00460  PRINT "*";
    0x608c4f9b6330 ---------A T 00470  PRINT "*";
    0x608c4f9b64b0 ---------A T 00480  PRINT "*";
    0x608c4f9b6630 ---------A T 00490  PRINT "*";
    0x608c4f9b67b0 ---------A T 00500  PRINT "*";
    0x608c4f9b6930 ---------A T 00510  PRINT "*";
    0x608c4f9b69b0 ---------A   00520  PRINT
    0x608c4f9b6af0 ---------A   00530  NEXT K
    0x608c4f9b6ba0 ---------A   00540  REM *** DID NOT GUESS IN M GUESSES
    0x608c4f9b6c50 ---------A   00550  PRINT 
    0x608c4f9b70c0 ---------A   00560  PRINT "SORRY, THAT'S";M;"GUESSES. THE NUMBER WAS";X
    0x608c4f9b7150 ---------A   00580  GOTO 650
    0x608c4f9b71d0 ---------A   00590  REM *** WE HAVE A WINNER
    0x608c4f9b75e0 ---------A T 00600  PRINT:FOR N=1 TO 79
    0x608c4f9b7760 ---------A   00610  PRINT "*";
    0x608c4f9b78a0 ---------A   00620  NEXT N
    0x608c4f9b79c0 ---------A   00630  PRINT:PRINT
    0x608c4f9b7d30 ---------A   00640  PRINT "YOU GOT IT IN";K;"GUESSES!!!  LET'S PLAY AGAIN..."
    0x608c4f9b7db0 ---------A T 00650  GOTO 280
    0x608c4f9b7e00 ---------A   00660  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00280      00190T, 00650T
     00460      00440T
     00470      00430T
     00480      00420T
     00490      00410T
     00500      00400T
     00510      00390T
     00600      00370T
     00650      00580T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x608c4f9aa6d0 (00010)   0x608c4f9aa6d0 (00010)   0x608c4f9b7e00 (00660)   0x608c4f9b7e00 (00660)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/stars.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x608c4f9aa6d0 ---------A   00010  PRINT TAB(34);"STARS"
    0x608c4f9aa670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x608c4f9abfc0 ----------   00030  PRINT
    0x608c4f9ab2d0 ----------        a PRINT
    0x608c4f9ab910 ---------A        b PRINT
    0x608c4f9ace10 ---------A   00100  REM *** STARS - PEOPLE'S COMPUTER CENTER, MENLO PARK, CA
    0x608c4f9ad050 ---------A   00140  REM *** A IS LIMIT ON NUMBER, M IS NUMBER OF GUESSES
    0x608c4f9ab080 ----------   00150  A=100
    0x608c4f9aaea0 ---------A        a M=7
    0x608c4f9ad140 ---------A   00170  INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x608c4f9b2840 ---------A   00190  IF LEFT$(A$,1)="N" THEN 280
    0x608c4f9b28a0 ---------A   00200  REM *** INSTRUCTIONS ON HOW TO PLAY
    0x608c4f9b2b30 ---------A   00210  PRINT "I AM THINKING OF A WHOLE NUMBER FROM 1 TO";A
    0x608c4f9b2cd0 ---------A   00220  PRINT "TRY TO GUESS MY NUMBER.  AFTER YOU GUESS, I"
    0x608c4f9b2e30 ---------A   00230  PRINT "WILL TYPE ONE OR MORE STARS (*).  THE MORE"
    0x608c4f9b2fe0 ---------A   00240  PRINT "STARS I TYPE, THE CLOSER YOU ARE TO MY NUMBER."
    0x608c4f9b3180 ---------A   00250  PRINT "ONE STAR (*) MEANS FAR AWAY, SEVEN STARS (*******)"
    0x608c4f9b3440 ---------A   00260  PRINT "MEANS REALLY CLOSE!  YOU GET";M;"GUESSES."
    0x608c4f9b34d0 ---------A   00270  REM *** COMPUTER THINKS OF A NUMBER
    0x608c4f9b3560 ---------A T 00280  PRINT
    0x608c4f9b35e0 ---------A   00290  PRINT
    0x608c4f9b3cd0 ---------A   00300  X=INT(A*RND(1)+1)
    0x608c4f9b3e60 ---------A   00310  PRINT "OK, I AM THINKING OF A NUMBER, START GUESSING."
    0x608c4f9b3f00 ---------A   00320  REM *** GUESSING BEGINS, HUMAN GETS M GUESSES
    0x608c4f9b42d0 ---------A   00330  FOR K=1 TO M
    0x608c4f9b4350 ---------A   00340  PRINT
    0x608c4f9b44d0 ---------A   00350  PRINT "YOUR GUESS";
    0x608c4f9b46f0 ---------A   00360  INPUT G
    0x608c4f9b4970 ---------A   00370  IF G=X THEN 600
    0x608c4f9b4e70 ---------A   00380  D=ABS(G-X)
    0x608c4f9b50c0 ---------A   00390  IF D>=64 THEN 510
    0x608c4f9b5320 ---------A   00400  IF D>=32 THEN 500
    0x608c4f9b5580 ---------A   00410  IF D>=16 THEN 490
    0x608c4f9b57e0 ---------A   00420  IF D>=8 THEN 480
    0x608c4f9b5a40 ---------A   00430  IF D>=4 THEN 470
    0x608c4f9b5ca0 ---------A   00440  IF D>=2 THEN 460
    0x608c4f9b6030 ---------A   00450  PRINT "*";
    0x608c4f9b61b0 ---------A T 00460  PRINT "*";
    0x608c4f9b6330 ---------A T 00470  PRINT "*";
    0x608c4f9b64b0 ---------A T 00480  PRINT "*";
    0x608c4f9b6630 ---------A T 00490  PRINT "*";
    0x608c4f9b67b0 ---------A T 00500  PRINT "*";
    0x608c4f9b6930 ---------A T 00510  PRINT "*";
    0x608c4f9b69b0 ---------A   00520  PRINT
    0x608c4f9b6af0 ---------A   00530  NEXT K
    0x608c4f9b6ba0 ---------A   00540  REM *** DID NOT GUESS IN M GUESSES
    0x608c4f9b6c50 ---------A   00550  PRINT 
    0x608c4f9b70c0 ---------A   00560  PRINT "SORRY, THAT'S";M;"GUESSES. THE NUMBER WAS";X
    0x608c4f9b7150 ---------A   00580  GOTO 650
    0x608c4f9b71d0 ---------A   00590  REM *** WE HAVE A WINNER
    0x608c4f9b7240 ---------- T 00600  PRINT
    0x608c4f9b75e0 ---------A T      a FOR N=1 TO 79
    0x608c4f9b7760 ---------A   00610  PRINT "*";
    0x608c4f9b78a0 ---------A   00620  NEXT N
    0x608c4f9b7910 ----------   00630  PRINT
    0x608c4f9b79c0 ---------A        a PRINT
    0x608c4f9b7d30 ---------A   00640  PRINT "YOU GOT IT IN";K;"GUESSES!!!  LET'S PLAY AGAIN..."
    0x608c4f9b7db0 ---------A T 00650  GOTO 280
    0x608c4f9b7e00 ---------A   00660  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/stars.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x608c4f9aa6d0 ---------A   01000  PRINT TAB(34);"STARS"
    0x608c4f9aa670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x608c4f9abfc0 ----------   01020  PRINT
    0x608c4f9ab2d0 ----------   01030  PRINT
    0x608c4f9ab910 ---------A   01040  PRINT
    0x608c4f9ace10 ---------A   01050  REM *** STARS - PEOPLE'S COMPUTER CENTER, MENLO PARK, CA
    0x608c4f9ad050 ---------A   01060  REM *** A IS LIMIT ON NUMBER, M IS NUMBER OF GUESSES
    0x608c4f9ab080 ----------   01070  A=100
    0x608c4f9aaea0 ---------A   01080  M=7
    0x608c4f9ad140 ---------A   01090  INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x608c4f9b2840 ---------A   01100  IF LEFT$(A$,1)="N" THEN 1190
    0x608c4f9b28a0 ---------A   01110  REM *** INSTRUCTIONS ON HOW TO PLAY
    0x608c4f9b2b30 ---------A   01120  PRINT "I AM THINKING OF A WHOLE NUMBER FROM 1 TO";A
    0x608c4f9b2cd0 ---------A   01130  PRINT "TRY TO GUESS MY NUMBER.  AFTER YOU GUESS, I"
    0x608c4f9b2e30 ---------A   01140  PRINT "WILL TYPE ONE OR MORE STARS (*).  THE MORE"
    0x608c4f9b2fe0 ---------A   01150  PRINT "STARS I TYPE, THE CLOSER YOU ARE TO MY NUMBER."
    0x608c4f9b3180 ---------A   01160  PRINT "ONE STAR (*) MEANS FAR AWAY, SEVEN STARS (*******)"
    0x608c4f9b3440 ---------A   01170  PRINT "MEANS REALLY CLOSE!  YOU GET";M;"GUESSES."
    0x608c4f9b34d0 ---------A   01180  REM *** COMPUTER THINKS OF A NUMBER
    0x608c4f9b3560 ---------A   01190  PRINT
    0x608c4f9b35e0 ---------A   01200  PRINT
    0x608c4f9b3cd0 ---------A   01210  X=INT(A*RND(1)+1)
    0x608c4f9b3e60 ---------A   01220  PRINT "OK, I AM THINKING OF A NUMBER, START GUESSING."
    0x608c4f9b3f00 ---------A   01230  REM *** GUESSING BEGINS, HUMAN GETS M GUESSES
    0x608c4f9b42d0 ---------A   01240  FOR K=1 TO M
    0x608c4f9b4350 ---------A   01250  PRINT
    0x608c4f9b44d0 ---------A   01260  PRINT "YOUR GUESS";
    0x608c4f9b46f0 ---------A   01270  INPUT G
    0x608c4f9b4970 ---------A   01280  IF G=X THEN 1510
    0x608c4f9b4e70 ---------A   01290  D=ABS(G-X)
    0x608c4f9b50c0 ---------A   01300  IF D>=64 THEN 1420
    0x608c4f9b5320 ---------A   01310  IF D>=32 THEN 1410
    0x608c4f9b5580 ---------A   01320  IF D>=16 THEN 1400
    0x608c4f9b57e0 ---------A   01330  IF D>=8 THEN 1390
    0x608c4f9b5a40 ---------A   01340  IF D>=4 THEN 1380
    0x608c4f9b5ca0 ---------A   01350  IF D>=2 THEN 1370
    0x608c4f9b6030 ---------A   01360  PRINT "*";
    0x608c4f9b61b0 ---------A   01370  PRINT "*";
    0x608c4f9b6330 ---------A   01380  PRINT "*";
    0x608c4f9b64b0 ---------A   01390  PRINT "*";
    0x608c4f9b6630 ---------A   01400  PRINT "*";
    0x608c4f9b67b0 ---------A   01410  PRINT "*";
    0x608c4f9b6930 ---------A   01420  PRINT "*";
    0x608c4f9b69b0 ---------A   01430  PRINT
    0x608c4f9b6af0 ---------A   01440  NEXT K
    0x608c4f9b6ba0 ---------A   01450  REM *** DID NOT GUESS IN M GUESSES
    0x608c4f9b6c50 ---------A   01460  PRINT 
    0x608c4f9b70c0 ---------A   01470  PRINT "SORRY, THAT'S";M;"GUESSES. THE NUMBER WAS";X
    0x608c4f9b7150 ---------A   01480  GOTO 1570
    0x608c4f9b71d0 ---------A   01490  REM *** WE HAVE A WINNER
    0x608c4f9b7240 ----------   01500  PRINT
    0x608c4f9b75e0 ---------A   01510  FOR N=1 TO 79
    0x608c4f9b7760 ---------A   01520  PRINT "*";
    0x608c4f9b78a0 ---------A   01530  NEXT N
    0x608c4f9b7910 ----------   01540  PRINT
    0x608c4f9b79c0 ---------A   01550  PRINT
    0x608c4f9b7d30 ---------A   01560  PRINT "YOU GOT IT IN";K;"GUESSES!!!  LET'S PLAY AGAIN..."
    0x608c4f9b7db0 ---------A   01570  GOTO 1190
    0x608c4f9b7e00 ---------A   01580  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01580 - 10000    8430 

 */



/*
 *  Symbol Table Listing for 'basic/stars.bas'
 *
    A                        Integer     
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
    D                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Integer     
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/stars.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x608c4f9aa6d0 ---------A   01000  PRINT TAB(34);"STARS"
    0x608c4f9aa670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x608c4f9abfc0 ---------A   01020  PRINT
    0x608c4f9ab2d0 ---------A   01030  PRINT
    0x608c4f9ab910 ---------A   01040  PRINT
    0x608c4f9ace10 ---------A   01050  REM *** STARS - PEOPLE'S COMPUTER CENTER, MENLO PARK, CA
    0x608c4f9ad050 ---------A   01060  REM *** A IS LIMIT ON NUMBER, M IS NUMBER OF GUESSES
    0x608c4f9ab080 ---------A   01070  A=100
    0x608c4f9aaea0 ---------A   01080  M=7
    0x608c4f9ad140 ---------A   01090  INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x608c4f9b2840 ---------A   01100  IF LEFT$(A$,1)="N" THEN 1190
    0x608c4f9b28a0 ---------A   01110  REM *** INSTRUCTIONS ON HOW TO PLAY
    0x608c4f9b2b30 ---------A   01120  PRINT "I AM THINKING OF A WHOLE NUMBER FROM 1 TO";A
    0x608c4f9b2cd0 ---------A   01130  PRINT "TRY TO GUESS MY NUMBER.  AFTER YOU GUESS, I"
    0x608c4f9b2e30 ---------A   01140  PRINT "WILL TYPE ONE OR MORE STARS (*).  THE MORE"
    0x608c4f9b2fe0 ---------A   01150  PRINT "STARS I TYPE, THE CLOSER YOU ARE TO MY NUMBER."
    0x608c4f9b3180 ---------A   01160  PRINT "ONE STAR (*) MEANS FAR AWAY, SEVEN STARS (*******)"
    0x608c4f9b3440 ---------A   01170  PRINT "MEANS REALLY CLOSE!  YOU GET";M;"GUESSES."
    0x608c4f9b34d0 ---------A   01180  REM *** COMPUTER THINKS OF A NUMBER
    0x608c4f9b3560 ---------A T 01190  PRINT
    0x608c4f9b35e0 ---------A   01200  PRINT
    0x608c4f9b3cd0 ---------A   01210  X=INT(A*RND(1)+1)
    0x608c4f9b3e60 ---------A   01220  PRINT "OK, I AM THINKING OF A NUMBER, START GUESSING."
    0x608c4f9b3f00 ---------A   01230  REM *** GUESSING BEGINS, HUMAN GETS M GUESSES
    0x608c4f9b42d0 ---------A   01240  FOR K=1 TO M
    0x608c4f9b4350 ---------A   01250  PRINT
    0x608c4f9b44d0 ---------A   01260  PRINT "YOUR GUESS";
    0x608c4f9b46f0 ---------A   01270  INPUT G
    0x608c4f9b4970 ---------A   01280  IF G=X THEN 1500
    0x608c4f9b4e70 ---------A   01290  D=ABS(G-X)
    0x608c4f9b50c0 ---------A   01300  IF D>=64 THEN 1420
    0x608c4f9b5320 ---------A   01310  IF D>=32 THEN 1410
    0x608c4f9b5580 ---------A   01320  IF D>=16 THEN 1400
    0x608c4f9b57e0 ---------A   01330  IF D>=8 THEN 1390
    0x608c4f9b5a40 ---------A   01340  IF D>=4 THEN 1380
    0x608c4f9b5ca0 ---------A   01350  IF D>=2 THEN 1370
    0x608c4f9b6030 ---------A   01360  PRINT "*";
    0x608c4f9b61b0 ---------A T 01370  PRINT "*";
    0x608c4f9b6330 ---------A T 01380  PRINT "*";
    0x608c4f9b64b0 ---------A T 01390  PRINT "*";
    0x608c4f9b6630 ---------A T 01400  PRINT "*";
    0x608c4f9b67b0 ---------A T 01410  PRINT "*";
    0x608c4f9b6930 ---------A T 01420  PRINT "*";
    0x608c4f9b69b0 ---------A   01430  PRINT
    0x608c4f9b6af0 ---------A   01440  NEXT K
    0x608c4f9b6ba0 ---------A   01450  REM *** DID NOT GUESS IN M GUESSES
    0x608c4f9b6c50 ---------A   01460  PRINT 
    0x608c4f9b70c0 ---------A   01470  PRINT "SORRY, THAT'S";M;"GUESSES. THE NUMBER WAS";X
    0x608c4f9b7150 ---------A   01480  GOTO 1560
    0x608c4f9b71d0 ---------A   01490  REM *** WE HAVE A WINNER
    0x608c4f9b75e0 ---------A T 01500  FOR N=1 TO 79
    0x608c4f9b7760 ---------A   01510  PRINT "*";
    0x608c4f9b78a0 ---------A   01520  NEXT N
    0x608c4f9b7910 ---------A   01530  PRINT
    0x608c4f9b79c0 ---------A   01540  PRINT
    0x608c4f9b7d30 ---------A   01550  PRINT "YOU GOT IT IN";K;"GUESSES!!!  LET'S PLAY AGAIN..."
    0x608c4f9b7db0 ---------A T 01560  GOTO 1190
    0x608c4f9b7e00 ---------A   01570  END
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
char*  A_str;                                     // Basic: A$ 
int    D_int;                                     // Basic: D 
int    G_int;                                     // Basic: G 
int    K_int;                                     // Basic: K 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    X_int;                                     // Basic: X 
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
    // 01000 PRINT TAB(34);"STARS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,34);strcat(buf,"STARS");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 REM *** STARS - PEOPLE'S COMPUTER CENTER, MENLO PARK, CA
    // 01060 REM *** A IS LIMIT ON NUMBER, M IS NUMBER OF GUESSES
    // 01070 A=100
    A_int = 100;
    // 01080 M=7
    M_int = 7;
    // 01090 INPUT "DO YOU WANT INSTRUCTIONS";A$
    // Start of Basic INPUT statement 01090
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"DO YOU WANT INSTRUCTIONS");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01090
    // 01100 IF LEFT$(A$,1)="N" THEN 1190
    if(LEFT$(A_str,1)=='N')goto Lbl_01190;
    // 01110 REM *** INSTRUCTIONS ON HOW TO PLAY
    // 01120 PRINT "I AM THINKING OF A WHOLE NUMBER FROM 1 TO";A
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I AM THINKING OF A WHOLE NUMBER FROM 1 TO"); b2c_INT(buf,A_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "TRY TO GUESS MY NUMBER.  AFTER YOU GUESS, I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY TO GUESS MY NUMBER.  AFTER YOU GUESS, I");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "WILL TYPE ONE OR MORE STARS (*).  THE MORE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WILL TYPE ONE OR MORE STARS (*).  THE MORE");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "STARS I TYPE, THE CLOSER YOU ARE TO MY NUMBER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"STARS I TYPE, THE CLOSER YOU ARE TO MY NUMBER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "ONE STAR (*) MEANS FAR AWAY, SEVEN STARS (*******)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONE STAR (*) MEANS FAR AWAY, SEVEN STARS (*******)");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "MEANS REALLY CLOSE!  YOU GET";M;"GUESSES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MEANS REALLY CLOSE!  YOU GET"); b2c_INT(buf,M_int);strcat(buf,"GUESSES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 REM *** COMPUTER THINKS OF A NUMBER

  Lbl_01190:
    // 01190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01210 X=INT(A*RND(1)+1)
    X_int = INT(A_int*RND(1)+1);
    // 01220 PRINT "OK, I AM THINKING OF A NUMBER, START GUESSING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OK, I AM THINKING OF A NUMBER, START GUESSING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 REM *** GUESSING BEGINS, HUMAN GETS M GUESSES
    // 01240 FOR K=1 TO M
    for(K_int=1;K_int<=M_int;K_int++){
        // 01250 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01260 PRINT "YOUR GUESS";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR GUESS");fputs(buf,fh); };
        // 01270 INPUT G
        // Start of Basic INPUT statement 01270
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&G_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01270
        // 01280 IF G=X THEN 1500
        if(G_int==X_int)goto Lbl_01500;
        // 01290 D=ABS(G-X)
        D_int = ABS(G_int-X_int);
        // 01300 IF D>=64 THEN 1420
        if(D_int>=64)goto Lbl_01420;
        // 01310 IF D>=32 THEN 1410
        if(D_int>=32)goto Lbl_01410;
        // 01320 IF D>=16 THEN 1400
        if(D_int>=16)goto Lbl_01400;
        // 01330 IF D>=8 THEN 1390
        if(D_int>=8)goto Lbl_01390;
        // 01340 IF D>=4 THEN 1380
        if(D_int>=4)goto Lbl_01380;
        // 01350 IF D>=2 THEN 1370
        if(D_int>=2)goto Lbl_01370;
        // 01360 PRINT "*";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*");fputs(buf,fh); };

  Lbl_01370:
        // 01370 PRINT "*";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*");fputs(buf,fh); };

  Lbl_01380:
        // 01380 PRINT "*";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*");fputs(buf,fh); };

  Lbl_01390:
        // 01390 PRINT "*";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*");fputs(buf,fh); };

  Lbl_01400:
        // 01400 PRINT "*";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*");fputs(buf,fh); };

  Lbl_01410:
        // 01410 PRINT "*";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*");fputs(buf,fh); };

  Lbl_01420:
        // 01420 PRINT "*";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*");fputs(buf,fh); };
        // 01430 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01440 NEXT K
        int dummy_1440=0; // Ignore this line.
    }; // End-For(K_int)
    // 01450 REM *** DID NOT GUESS IN M GUESSES
    // 01460 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01470 PRINT "SORRY, THAT'S";M;"GUESSES. THE NUMBER WAS";X
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, THAT'S"); b2c_INT(buf,M_int);strcat(buf,"GUESSES. THE NUMBER WAS"); b2c_INT(buf,X_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01480 GOTO 1560
    goto Lbl_01560;
    // 01490 REM *** WE HAVE A WINNER

  Lbl_01500:
    // 01500 FOR N=1 TO 79
    for(N_int=1;N_int<=79;N_int++){
        // 01510 PRINT "*";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*");fputs(buf,fh); };
        // 01520 NEXT N
        int dummy_1520=0; // Ignore this line.
    }; // End-For(N_int)
    // 01530 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01540 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT "YOU GOT IT IN";K;"GUESSES!!!  LET'S PLAY AGAIN..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU GOT IT IN"); b2c_INT(buf,K_int);strcat(buf,"GUESSES!!!  LET'S PLAY AGAIN...");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01560:
    // 01560 GOTO 1190
    goto Lbl_01190;
    // 01570 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
