/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/war.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57b5ca587670 ---------A   01010  PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    0x57b5ca589cf0 ---------A   01020  REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    0x57b5ca588b60 ---------A   01030  REM
    0x57b5ca588910 ---------A   01040  PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x57b5ca5782b0 ---------A   01050  PRINT "AS S-7 FOR SPADE 7.  "
    0x57b5ca5899e0 ---------A T 01060  PRINT "DO YOU WANT DIRECTIONS"
    0x57b5ca589a40 ---------A   01070  INPUT B$
    0x57b5ca588480 ---------A   01080  IF B$="N" THEN 1150
    0x57b5ca58a080 ---------A   01090  IF B$="Y" THEN 1120
    0x57b5ca589520 ---------A   01100  PRINT "Y OR N, PLEASE.  ";
    0x57b5ca589f30 ---------A   01110  GO TO 1060
    0x57b5ca588620 ---------A T 01120  PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    0x57b5ca588790 ---------A   01130  PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    0x57b5ca58f840 ---------A   01140  PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x57b5ca58f8a0 ---------A T 01150  PRINT
    0x57b5ca58f920 ---------A   01160  PRINT
    0x57b5ca58fe60 ---------A   01170  DIM A$(52), L(54)
    0x57b5ca5901f0 ---------A   01180  FOR I=1 TO 52
    0x57b5ca590430 ---------A   01190  READ A$(I)
    0x57b5ca590560 ---------A   01200  NEXT I
    0x57b5ca5905f0 ---------A   01210  RANDOM
    0x57b5ca590990 ---------A   01220  FOR J=1 TO 52
    0x57b5ca590f90 ---------A   01230  LET L(J)=INT(52*RND+1)
    0x57b5ca591450 ---------A   01240  FOR K=1 TO J-1
    0x57b5ca591890 ---------A   01250  IF L(K)<>L(J) THEN 1280
    0x57b5ca591bd0 ---------A   01260  LET J=J-1
    0x57b5ca591c40 ---------A   01270  GO TO 1290
    0x57b5ca591d70 ---------A T 01280  NEXT K
    0x57b5ca591ec0 ---------A T 01290  NEXT J
    0x57b5ca5922d0 ---------A T 01300  LET P=P+1
    0x57b5ca5926a0 ---------A   01310  LET M1=L(P)
    0x57b5ca5929d0 ---------A   01320  LET P=P+1
    0x57b5ca592da0 ---------A   01330  LET M2=L(P)
    0x57b5ca593020 ---------A   01340  PRINT
    0x57b5ca5930c0 ---------A   01350  PRINT
    0x57b5ca593710 ---------A   01360  PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    0x57b5ca593d40 ---------A   01370  LET N1=INT((M1-.5)/4)
    0x57b5ca594360 ---------A   01380  LET N2=INT((M2-.5)/4)
    0x57b5ca5945d0 ---------A   01390  IF N1>=N2 THEN 1430
    0x57b5ca5949f0 ---------A   01400  LET A1=A1+1
    0x57b5ca594f00 ---------A   01410  PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57b5ca594f80 ---------A   01420  GO TO 1480
    0x57b5ca5951f0 ---------A T 01430  IF N1=N2 THEN 1470
    0x57b5ca595550 ---------A   01440  LET B1=B1+1
    0x57b5ca5959a0 ---------A   01450  PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57b5ca595a30 ---------A   01460  GO TO 1480
    0x57b5ca595b90 ---------A T 01470  PRINT "TIE. N SCORE CHANGE."
    0x57b5ca595fe0 ---------A T 01480  IF L(P+1)= 0 THEN 1550
    0x57b5ca596170 ---------A   01490  PRINT "DO YOU WANT TO CONTINUE";
    0x57b5ca5963a0 ---------A T 01500  INPUT V$
    0x57b5ca596630 ---------A   01510  IF V$="Y" THEN 1300
    0x57b5ca5968c0 ---------A   01520  IF V$="NO" THEN 1590
    0x57b5ca596a40 ---------A   01530  PRINT"Y OR NO, PLEASE.  ";
    0x57b5ca596ac0 ---------A   01540  GO TO 1500
    0x57b5ca596b30 ---------A T 01550  PRINT
    0x57b5ca596cc0 ---------A   01560  PRINT" "
    0x57b5ca596f50 ---------A   01570  PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    0x57b5ca597310 ---------A   01580  PRINTTAB(40);"PDP-10--";A1
    0x57b5ca5974b0 ---------A T 01590  PRINT"THANKS FOR PLAYING. IT WAS FUN."
    0x57b5ca598280 ---------A   01600  DATA S-2,H-2,C-2,D-2,S-3,H-3,C-3,D-3,S-4,H-4,C-4,D-4,S-5,H-5,C-5
    0x57b5ca599040 ---------A   01610  DATA D-5,S-6,H-6,C-6,D-6,S-7,H-7,C-7,D-7,S-8,H-8,C-8,D-8,S-9,H-9
    0x57b5ca599d10 ---------A   01620  DATA C-9,D-9,S10,H-10,C-10,D-10,S-J,H-J,C-J,D-J,S-Q,H-Q,C-Q,D-Q
    0x57b5ca59a480 ---------A   01630  DATA S-K,H-K,C-K,D-K,S-A,H-A,C-A,D-A
    0x57b5ca59a4d0 ---------A   01640  STOP
    0x57b5ca59a530 ---------A   01650  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01060      01110T
     01120      01090T
     01150      01080T
     01280      01250T
     01290      01270T
     01300      01510T
     01430      01390T
     01470      01430T
     01480      01420T, 01460T
     01500      01540T
     01550      01480T
     01590      01520T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x57b5ca587670 (01010)   0x57b5ca587670 (01010)   0x57b5ca59a530 (01650)   0x57b5ca59a530 (01650)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/war.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57b5ca587670 ---------A   01010  PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    0x57b5ca589cf0 ---------A   01020  REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    0x57b5ca588b60 ---------A   01030  REM
    0x57b5ca588910 ---------A   01040  PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x57b5ca5782b0 ---------A   01050  PRINT "AS S-7 FOR SPADE 7.  "
    0x57b5ca5899e0 ---------A T 01060  PRINT "DO YOU WANT DIRECTIONS"
    0x57b5ca589a40 ---------A   01070  INPUT B$
    0x57b5ca588480 ---------A   01080  IF B$="N" THEN 1150
    0x57b5ca58a080 ---------A   01090  IF B$="Y" THEN 1120
    0x57b5ca589520 ---------A   01100  PRINT "Y OR N, PLEASE.  ";
    0x57b5ca589f30 ---------A   01110  GO TO 1060
    0x57b5ca588620 ---------A T 01120  PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    0x57b5ca588790 ---------A   01130  PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    0x57b5ca58f840 ---------A   01140  PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x57b5ca58f8a0 ---------A T 01150  PRINT
    0x57b5ca58f920 ---------A   01160  PRINT
    0x57b5ca58fe60 ---------A   01170  DIM A$(52), L(54)
    0x57b5ca5901f0 ---------A   01180  FOR I=1 TO 52
    0x57b5ca590430 ---------A   01190  READ A$(I)
    0x57b5ca590560 ---------A   01200  NEXT I
    0x57b5ca5905f0 ---------A   01210  RANDOM
    0x57b5ca590990 ---------A   01220  FOR J=1 TO 52
    0x57b5ca590f90 ---------A   01230  LET L(J)=INT(52*RND+1)
    0x57b5ca591450 ---------A   01240  FOR K=1 TO J-1
    0x57b5ca591890 ---------A   01250  IF L(K)<>L(J) THEN 1280
    0x57b5ca591bd0 ---------A   01260  LET J=J-1
    0x57b5ca591c40 ---------A   01270  GO TO 1290
    0x57b5ca591d70 ---------A T 01280  NEXT K
    0x57b5ca591ec0 ---------A T 01290  NEXT J
    0x57b5ca5922d0 ---------A T 01300  LET P=P+1
    0x57b5ca5926a0 ---------A   01310  LET M1=L(P)
    0x57b5ca5929d0 ---------A   01320  LET P=P+1
    0x57b5ca592da0 ---------A   01330  LET M2=L(P)
    0x57b5ca593020 ---------A   01340  PRINT
    0x57b5ca5930c0 ---------A   01350  PRINT
    0x57b5ca593710 ---------A   01360  PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    0x57b5ca593d40 ---------A   01370  LET N1=INT((M1-.5)/4)
    0x57b5ca594360 ---------A   01380  LET N2=INT((M2-.5)/4)
    0x57b5ca5945d0 ---------A   01390  IF N1>=N2 THEN 1430
    0x57b5ca5949f0 ---------A   01400  LET A1=A1+1
    0x57b5ca594f00 ---------A   01410  PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57b5ca594f80 ---------A   01420  GO TO 1480
    0x57b5ca5951f0 ---------A T 01430  IF N1=N2 THEN 1470
    0x57b5ca595550 ---------A   01440  LET B1=B1+1
    0x57b5ca5959a0 ---------A   01450  PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57b5ca595a30 ---------A   01460  GO TO 1480
    0x57b5ca595b90 ---------A T 01470  PRINT "TIE. N SCORE CHANGE."
    0x57b5ca595fe0 ---------A T 01480  IF L(P+1)= 0 THEN 1550
    0x57b5ca596170 ---------A   01490  PRINT "DO YOU WANT TO CONTINUE";
    0x57b5ca5963a0 ---------A T 01500  INPUT V$
    0x57b5ca596630 ---------A   01510  IF V$="Y" THEN 1300
    0x57b5ca5968c0 ---------A   01520  IF V$="NO" THEN 1590
    0x57b5ca596a40 ---------A   01530  PRINT"Y OR NO, PLEASE.  ";
    0x57b5ca596ac0 ---------A   01540  GO TO 1500
    0x57b5ca596b30 ---------A T 01550  PRINT
    0x57b5ca596cc0 ---------A   01560  PRINT" "
    0x57b5ca596f50 ---------A   01570  PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    0x57b5ca597310 ---------A   01580  PRINTTAB(40);"PDP-10--";A1
    0x57b5ca5974b0 ---------A T 01590  PRINT"THANKS FOR PLAYING. IT WAS FUN."
    0x57b5ca598280 ---------A   01600  DATA S-2,H-2,C-2,D-2,S-3,H-3,C-3,D-3,S-4,H-4,C-4,D-4,S-5,H-5,C-5
    0x57b5ca599040 ---------A   01610  DATA D-5,S-6,H-6,C-6,D-6,S-7,H-7,C-7,D-7,S-8,H-8,C-8,D-8,S-9,H-9
    0x57b5ca599d10 ---------A   01620  DATA C-9,D-9,S10,H-10,C-10,D-10,S-J,H-J,C-J,D-J,S-Q,H-Q,C-Q,D-Q
    0x57b5ca59a480 ---------A   01630  DATA S-K,H-K,C-K,D-K,S-A,H-A,C-A,D-A
    0x57b5ca59a4d0 ---------A   01640  STOP
    0x57b5ca59a530 ---------A   01650  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/war.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57b5ca587670 ---------A   01000  PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    0x57b5ca589cf0 ---------A   01010  REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    0x57b5ca588b60 ---------A   01020  REM
    0x57b5ca588910 ---------A   01030  PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x57b5ca5782b0 ---------A   01040  PRINT "AS S-7 FOR SPADE 7.  "
    0x57b5ca5899e0 ---------A   01050  PRINT "DO YOU WANT DIRECTIONS"
    0x57b5ca589a40 ---------A T 01060  INPUT B$
    0x57b5ca588480 ---------A   01070  IF B$="N" THEN 1140
    0x57b5ca58a080 ---------A   01080  IF B$="Y" THEN 1110
    0x57b5ca589520 ---------A   01090  PRINT "Y OR N, PLEASE.  ";
    0x57b5ca589f30 ---------A   01100  GO TO 1050
    0x57b5ca588620 ---------A   01110  PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    0x57b5ca588790 ---------A T 01120  PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    0x57b5ca58f840 ---------A   01130  PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x57b5ca58f8a0 ---------A   01140  PRINT
    0x57b5ca58f920 ---------A T 01150  PRINT
    0x57b5ca58fe60 ---------A   01160  DIM A$(52), L(54)
    0x57b5ca5901f0 ---------A   01170  FOR I=1 TO 52
    0x57b5ca590430 ---------A   01180  READ A$(I)
    0x57b5ca590560 ---------A   01190  NEXT I
    0x57b5ca5905f0 ---------A   01200  RANDOM
    0x57b5ca590990 ---------A   01210  FOR J=1 TO 52
    0x57b5ca590f90 ---------A   01220  LET L(J)=INT(52*RND+1)
    0x57b5ca591450 ---------A   01230  FOR K=1 TO J-1
    0x57b5ca591890 ---------A   01240  IF L(K)<>L(J) THEN 1270
    0x57b5ca591bd0 ---------A   01250  LET J=J-1
    0x57b5ca591c40 ---------A   01260  GO TO 1280
    0x57b5ca591d70 ---------A   01270  NEXT K
    0x57b5ca591ec0 ---------A T 01280  NEXT J
    0x57b5ca5922d0 ---------A T 01290  LET P=P+1
    0x57b5ca5926a0 ---------A T 01300  LET M1=L(P)
    0x57b5ca5929d0 ---------A   01310  LET P=P+1
    0x57b5ca592da0 ---------A   01320  LET M2=L(P)
    0x57b5ca593020 ---------A   01330  PRINT
    0x57b5ca5930c0 ---------A   01340  PRINT
    0x57b5ca593710 ---------A   01350  PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    0x57b5ca593d40 ---------A   01360  LET N1=INT((M1-.5)/4)
    0x57b5ca594360 ---------A   01370  LET N2=INT((M2-.5)/4)
    0x57b5ca5945d0 ---------A   01380  IF N1>=N2 THEN 1420
    0x57b5ca5949f0 ---------A   01390  LET A1=A1+1
    0x57b5ca594f00 ---------A   01400  PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57b5ca594f80 ---------A   01410  GO TO 1470
    0x57b5ca5951f0 ---------A   01420  IF N1=N2 THEN 1460
    0x57b5ca595550 ---------A T 01430  LET B1=B1+1
    0x57b5ca5959a0 ---------A   01440  PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57b5ca595a30 ---------A   01450  GO TO 1470
    0x57b5ca595b90 ---------A   01460  PRINT "TIE. N SCORE CHANGE."
    0x57b5ca595fe0 ---------A T 01470  IF L(P+1)= 0 THEN 1540
    0x57b5ca596170 ---------A T 01480  PRINT "DO YOU WANT TO CONTINUE";
    0x57b5ca5963a0 ---------A   01490  INPUT V$
    0x57b5ca596630 ---------A T 01500  IF V$="Y" THEN 1290
    0x57b5ca5968c0 ---------A   01510  IF V$="NO" THEN 1580
    0x57b5ca596a40 ---------A   01520  PRINT"Y OR NO, PLEASE.  ";
    0x57b5ca596ac0 ---------A   01530  GO TO 1490
    0x57b5ca596b30 ---------A   01540  PRINT
    0x57b5ca596cc0 ---------A T 01550  PRINT" "
    0x57b5ca596f50 ---------A   01560  PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    0x57b5ca597310 ---------A   01570  PRINTTAB(40);"PDP-10--";A1
    0x57b5ca5974b0 ---------A   01580  PRINT"THANKS FOR PLAYING. IT WAS FUN."
    0x57b5ca598280 ---------A T 01590  DATA S-2,H-2,C-2,D-2,S-3,H-3,C-3,D-3,S-4,H-4,C-4,D-4,S-5,H-5,C-5
    0x57b5ca599040 ---------A   01600  DATA D-5,S-6,H-6,C-6,D-6,S-7,H-7,C-7,D-7,S-8,H-8,C-8,D-8,S-9,H-9
    0x57b5ca599d10 ---------A   01610  DATA C-9,D-9,S10,H-10,C-10,D-10,S-J,H-J,C-J,D-J,S-Q,H-Q,C-Q,D-Q
    0x57b5ca59a480 ---------A   01620  DATA S-K,H-K,C-K,D-K,S-A,H-A,C-A,D-A
    0x57b5ca59a4d0 ---------A   01630  STOP
    0x57b5ca59a530 ---------A   01640  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01650 - 10000    8360 

 */



/*
 *  Symbol Table Listing for 'basic/war.bas'
 *
    A$              Array    String          {0,51} 
    A1                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$                       String      
    B1                       Integer     
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
    J                        Integer     
    K                        Integer     
    L               Array    Integer         {0,53} 
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M1                       Integer     
    M2                       Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N1                       Integer     
    N2                       Integer     
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
    V$                       String      
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/war.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57b5ca587670 ---------A   01000  PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    0x57b5ca589cf0 ---------A   01010  REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    0x57b5ca588b60 ---------A   01020  REM
    0x57b5ca588910 ---------A   01030  PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x57b5ca5782b0 ---------A   01040  PRINT "AS S-7 FOR SPADE 7.  "
    0x57b5ca5899e0 ---------A T 01050  PRINT "DO YOU WANT DIRECTIONS"
    0x57b5ca589a40 ---------A   01060  INPUT B$
    0x57b5ca588480 ---------A   01070  IF B$="N" THEN 1140
    0x57b5ca58a080 ---------A   01080  IF B$="Y" THEN 1110
    0x57b5ca589520 ---------A   01090  PRINT "Y OR N, PLEASE.  ";
    0x57b5ca589f30 ---------A   01100  GO TO 1050
    0x57b5ca588620 ---------A T 01110  PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    0x57b5ca588790 ---------A   01120  PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    0x57b5ca58f840 ---------A   01130  PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x57b5ca58f8a0 ---------A T 01140  PRINT
    0x57b5ca58f920 ---------A   01150  PRINT
    0x57b5ca58fe60 ---------A   01160  DIM A$(52), L(54)
    0x57b5ca5901f0 ---------A   01170  FOR I=1 TO 52
    0x57b5ca590430 ---------A   01180  READ A$(I)
    0x57b5ca590560 ---------A   01190  NEXT I
    0x57b5ca5905f0 ---------A   01200  RANDOM
    0x57b5ca590990 ---------A   01210  FOR J=1 TO 52
    0x57b5ca590f90 ---------A   01220  LET L(J)=INT(52*RND+1)
    0x57b5ca591450 ---------A   01230  FOR K=1 TO J-1
    0x57b5ca591890 ---------A   01240  IF L(K)<>L(J) THEN 1270
    0x57b5ca591bd0 ---------A   01250  LET J=J-1
    0x57b5ca591c40 ---------A   01260  GO TO 1280
    0x57b5ca591d70 ---------A T 01270  NEXT K
    0x57b5ca591ec0 ---------A T 01280  NEXT J
    0x57b5ca5922d0 ---------A T 01290  LET P=P+1
    0x57b5ca5926a0 ---------A   01300  LET M1=L(P)
    0x57b5ca5929d0 ---------A   01310  LET P=P+1
    0x57b5ca592da0 ---------A   01320  LET M2=L(P)
    0x57b5ca593020 ---------A   01330  PRINT
    0x57b5ca5930c0 ---------A   01340  PRINT
    0x57b5ca593710 ---------A   01350  PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    0x57b5ca593d40 ---------A   01360  LET N1=INT((M1-.5)/4)
    0x57b5ca594360 ---------A   01370  LET N2=INT((M2-.5)/4)
    0x57b5ca5945d0 ---------A   01380  IF N1>=N2 THEN 1420
    0x57b5ca5949f0 ---------A   01390  LET A1=A1+1
    0x57b5ca594f00 ---------A   01400  PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57b5ca594f80 ---------A   01410  GO TO 1470
    0x57b5ca5951f0 ---------A T 01420  IF N1=N2 THEN 1460
    0x57b5ca595550 ---------A   01430  LET B1=B1+1
    0x57b5ca5959a0 ---------A   01440  PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57b5ca595a30 ---------A   01450  GO TO 1470
    0x57b5ca595b90 ---------A T 01460  PRINT "TIE. N SCORE CHANGE."
    0x57b5ca595fe0 ---------A T 01470  IF L(P+1)= 0 THEN 1540
    0x57b5ca596170 ---------A   01480  PRINT "DO YOU WANT TO CONTINUE";
    0x57b5ca5963a0 ---------A T 01490  INPUT V$
    0x57b5ca596630 ---------A   01500  IF V$="Y" THEN 1290
    0x57b5ca5968c0 ---------A   01510  IF V$="NO" THEN 1580
    0x57b5ca596a40 ---------A   01520  PRINT"Y OR NO, PLEASE.  ";
    0x57b5ca596ac0 ---------A   01530  GO TO 1490
    0x57b5ca596b30 ---------A T 01540  PRINT
    0x57b5ca596cc0 ---------A   01550  PRINT" "
    0x57b5ca596f50 ---------A   01560  PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    0x57b5ca597310 ---------A   01570  PRINTTAB(40);"PDP-10--";A1
    0x57b5ca5974b0 ---------A T 01580  PRINT"THANKS FOR PLAYING. IT WAS FUN."
    0x57b5ca598280 ---------A   01590  DATA S-2,H-2,C-2,D-2,S-3,H-3,C-3,D-3,S-4,H-4,C-4,D-4,S-5,H-5,C-5
    0x57b5ca599040 ---------A   01600  DATA D-5,S-6,H-6,C-6,D-6,S-7,H-7,C-7,D-7,S-8,H-8,C-8,D-8,S-9,H-9
    0x57b5ca599d10 ---------A   01610  DATA C-9,D-9,S10,H-10,C-10,D-10,S-J,H-J,C-J,D-J,S-Q,H-Q,C-Q,D-Q
    0x57b5ca59a480 ---------A   01620  DATA S-K,H-K,C-K,D-K,S-A,H-A,C-A,D-A
    0x57b5ca59a4d0 ---------A   01630  STOP
    0x57b5ca59a530 ---------A   01640  END
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
char* data_01590s[]={"S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3","S-4","H-4","C-4","D-4","S-5","H-5","C-5"};
char* data_01600s[]={"D-5","S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7","S-8","H-8","C-8","D-8","S-9","H-9"};
char* data_01610s[]={"C-9","D-9","S10","H-10","C-10","D-10","S-J","H-J","C-J","D-J","S-Q","H-Q","C-Q","D-Q"};
char* data_01620s[]={"S-K","H-K","C-K","D-K","S-A","H-A","C-A","D-A"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1590, 15,data_01590s},
    { 1600, 15,data_01600s},
    { 1610, 14,data_01610s},
    { 1620,  8,data_01620s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[52];                             // Basic: A$ 
int    A1_int;                                    // Basic: A1 
char*  B_str;                                     // Basic: B$ 
int    B1_int;                                    // Basic: B1 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int_arr[54];                             // Basic: L 
int    M1_int;                                    // Basic: M1 
int    M2_int;                                    // Basic: M2 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    P_int;                                     // Basic: P 
char*  V_str;                                     // Basic: V$ 
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
    // 01000 PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BASIC LIBRARY--'WAR'--18-JUL-70");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    // 01020 REM
    // 01030 PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT "AS S-7 FOR SPADE 7.  "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AS S-7 FOR SPADE 7.  ");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01050:
    // 01050 PRINT "DO YOU WANT DIRECTIONS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT DIRECTIONS");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 INPUT B$
    // Start of Basic INPUT statement 01060
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&B_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF B$="N" THEN 1140
    if(strcmp(B_str,"N")==0)goto Lbl_01140;
    // 01080 IF B$="Y" THEN 1110
    if(strcmp(B_str,"Y")==0)goto Lbl_01110;
    // 01090 PRINT "Y OR N, PLEASE.  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Y OR N, PLEASE.  ");fputs(buf,fh); };
    // 01100 GO TO 1050
    goto Lbl_01050;

  Lbl_01110:
    // 01110 PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' ");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01140:
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01160 DIM A$(52), L(54)
    // 01170 FOR I=1 TO 52
    for(I_int=1;I_int<=52;I_int++){
        // 01180 READ A$(I)
        A_str_arr[I_int] = Get_Data_String();
        // 01190 NEXT I
        int dummy_1190=0; // Ignore this line.
    }; // End-For(I_int)
    // 01200 RANDOM
    RANDOMIZE();
    // 01210 FOR J=1 TO 52
    for(J_int=1;J_int<=52;J_int++){
        // 01220 LET L(J)=INT(52*RND+1)
        L_int_arr[J_int] = INT(52*RND()+1);
        // 01230 FOR K=1 TO J-1
        for(K_int=1;K_int<=J_int-1;K_int++){
            // 01240 IF L(K)<>L(J) THEN 1270
            if(L_int_arr[K_int]!=L_int_arr[J_int])goto Lbl_01270;
            // 01250 LET J=J-1
            J_int = J_int-1;
            // 01260 GO TO 1280
            goto Lbl_01280;

  Lbl_01270:
            // 01270 NEXT K
            int dummy_1270=0; // Ignore this line.
        }; // End-For(K_int)

  Lbl_01280:
        // 01280 NEXT J
        int dummy_1280=0; // Ignore this line.
    }; // End-For(J_int)

  Lbl_01290:
    // 01290 LET P=P+1
    P_int = P_int+1;
    // 01300 LET M1=L(P)
    M1_int = L_int_arr[P_int];
    // 01310 LET P=P+1
    P_int = P_int+1;
    // 01320 LET M2=L(P)
    M2_int = L_int_arr[P_int];
    // 01330 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU: "); strcat(buf,A_str_arr[M1_int]);strcat(buf,"PDP-10: "); strcat(buf,A_str_arr[M2_int]);fputs(buf,fh); };
    // 01360 LET N1=INT((M1-.5)/4)
    N1_int = INT((M1_int-0.5)/4);
    // 01370 LET N2=INT((M2-.5)/4)
    N2_int = INT((M2_int-0.5)/4);
    // 01380 IF N1>=N2 THEN 1420
    if(N1_int>=N2_int)goto Lbl_01420;
    // 01390 LET A1=A1+1
    A1_int = A1_int+1;
    // 01400 PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PDP-10 WINS. YOU HAVE"); b2c_INT(buf,B1_int);strcat(buf,"; PDP-10 HAS"); b2c_INT(buf,A1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01410 GO TO 1470
    goto Lbl_01470;

  Lbl_01420:
    // 01420 IF N1=N2 THEN 1460
    if(N1_int==N2_int)goto Lbl_01460;
    // 01430 LET B1=B1+1
    B1_int = B1_int+1;
    // 01440 PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WIN.  YOU HAVE"); b2c_INT(buf,B1_int);strcat(buf,"; PDP-10 HAS"); b2c_INT(buf,A1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01450 GO TO 1470
    goto Lbl_01470;

  Lbl_01460:
    // 01460 PRINT "TIE. N SCORE CHANGE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TIE. N SCORE CHANGE.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01470:
    // 01470 IF L(P+1)= 0 THEN 1540
    if(L_int_arr[P_int+1]==0)goto Lbl_01540;
    // 01480 PRINT "DO YOU WANT TO CONTINUE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO CONTINUE");fputs(buf,fh); };

  Lbl_01490:
    // 01490 INPUT V$
    // Start of Basic INPUT statement 01490
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&V_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01490
    // 01500 IF V$="Y" THEN 1290
    if(strcmp(V_str,"Y")==0)goto Lbl_01290;
    // 01510 IF V$="NO" THEN 1580
    if(strcmp(V_str,"NO")==0)goto Lbl_01580;
    // 01520 PRINT"Y OR NO, PLEASE.  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Y OR NO, PLEASE.  ");fputs(buf,fh); };
    // 01530 GO TO 1490
    goto Lbl_01490;

  Lbl_01540:
    // 01540 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT" "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 01560 PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--"); b2c_INT(buf,B1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINTTAB(40);"PDP-10--";A1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,40);strcat(buf,"PDP-10--"); b2c_INT(buf,A1_int);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01580:
    // 01580 PRINT"THANKS FOR PLAYING. IT WAS FUN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THANKS FOR PLAYING. IT WAS FUN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01590 DATA S-2,H-2,C-2,D-2,S-3,H-3,C-3,D-3,S-4,H-4,C-4,D-4,S-5,H-5,C-5
    // 01600 DATA D-5,S-6,H-6,C-6,D-6,S-7,H-7,C-7,D-7,S-8,H-8,C-8,D-8,S-9,H-9
    // 01610 DATA C-9,D-9,S10,H-10,C-10,D-10,S-J,H-J,C-J,D-J,S-Q,H-Q,C-Q,D-Q
    // 01620 DATA S-K,H-K,C-K,D-K,S-A,H-A,C-A,D-A
    // 01630 STOP
    exit(1);
    // 01640 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
