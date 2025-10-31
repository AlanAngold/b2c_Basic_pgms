/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/synonym.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f287ddb06d0 ---------A   00002  PRINT TAB(33);"SYNONYM"
    0x5f287ddb0670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f287ddb07f0 ---------A   00006  PRINT: PRINT: PRINT
    0x5f287ddb2f30 ---------A   00010  DIM R$(5),W$(10),L(30),R(30)
    0x5f287ddb9020 ---------A   00020  R$(1)="RIGHT": R$(2)="CORRECT": R$(3)="FINE": R$(4)="GOOD!"
    0x5f287ddb9320 ---------A   00030  R$(5)="CHECK"
    0x5f287ddb9620 ---------A   00070  C=0
    0x5f287ddb97c0 ---------A   00090  PRINT "A SYNONYM OF A WORD MEANS ANOTHER WORD IN THE ENGLISH"
    0x5f287ddb9960 ---------A   00100  PRINT "LANGUAGE WHICH HAS THE SAME OR VERY NEARLY THE SAME";
    0x5f287ddb9ae0 ---------A   00110  PRINT " MEANING."
    0x5f287ddb9c40 ---------A   00130  PRINT "I CHOOSE A WORD -- YOU TYPE A SYNONYM."
    0x5f287ddb9de0 ---------A   00140  PRINT "IF YOU CAN'T THINK OF A SYNONYM, TYPE THE WORD 'HELP'"
    0x5f287ddb9f60 ---------A   00145  PRINT "AND I WILL TELL YOU A SYNONYM.": PRINT
    0x5f287ddba4e0 ---------A T 00150  RESTORE: C=C+1: READ N
    0x5f287ddba750 ---------A   00160  IF C>N THEN 420
    0x5f287ddbae10 ---------A T 00170  N1=INT(RND(1)*N+1)
    0x5f287ddbb140 ---------A   00174  IF R(N1)=1 THEN 170
    0x5f287ddbb440 ---------A   00176  R(N1)=1
    0x5f287ddbb7f0 ---------A   00180  FOR I=1 TO N1
    0x5f287ddbba10 ---------A   00190  READ N2
    0x5f287ddbbdc0 ---------A   00200  FOR J=1 TO N2
    0x5f287ddbc000 ---------A   00210  READ W$(J)
    0x5f287ddbc130 ---------A   00220  NEXT J
    0x5f287ddbc280 ---------A   00230  NEXT I
    0x5f287ddbc980 ---------A   00232  FOR J=1 TO N2: L(J)=J: NEXT J
    0x5f287ddbcf70 ---------A   00235  L(0)=N2: G=1: PRINT
    0x5f287ddbd870 ---------A   00237  L(G)=L(L(0)): L(0)=N2-1: PRINT
    0x5f287ddbdd90 ---------A T 00240  PRINT "     WHAT IS A SYNONYM OF ";W$(G);: INPUT A$
    0x5f287ddbe010 ---------A   00250  IF A$="HELP" THEN 340
    0x5f287ddbe3d0 ---------A   00260  FOR K=1 TO N2
    0x5f287ddbe630 ---------A   00270  IF G=K THEN 290
    0x5f287ddbe990 ---------A   00280  IF A$=W$(K) THEN 320
    0x5f287ddbead0 ---------A T 00290  NEXT K
    0x5f287ddbeed0 ---------A   00300  PRINT "     TRY AGAIN.": GOTO 240
    0x5f287ddbf510 ---------A T 00320  PRINT R$(INT(RND(1)*5+1)): GOTO 150
    0x5f287ddbfcb0 ---------A T 00340  G1=INT(RND(1)*L(0)+1)
    0x5f287ddc0520 ---------A   00360  PRINT "**** A SYNONYM OF ";W$(G);" IS ";W$(L(G1));".": PRINT
    0x5f287ddc0ee0 ---------A   00370  L(G1)=L(L(0)): L(0)=L(0)-1: GOTO 240
    0x5f287ddc1100 ---------A T 00420  PRINT: PRINT "SYNONYM DRILL COMPLETED.": GOTO 999
    0x5f287ddc1280 ---------A   00500  DATA 10
    0x5f287ddc1850 ---------A   00510  DATA 5,"FIRST","START","BEGINNING","ONSET","INITIAL"
    0x5f287ddc1e30 ---------A   00520  DATA 5,"SIMILAR","ALIKE","SAME","LIKE","RESEMBLING"
    0x5f287ddc2410 ---------A   00530  DATA 5,"MODEL","PATTERN","PROTOTYPE","STANDARD","CRITERION"
    0x5f287ddc29f0 ---------A   00540  DATA 5,"SMALL","INSIGNIFICANT","LITTLE","TINY","MINUTE"
    0x5f287ddc30b0 ---------A   00550  DATA 6,"STOP","HALT","STAY","ARREST","CHECK","STANDSTILL"
    0x5f287ddc3660 ---------A   00560  DATA 6,"HOUSE","DWELLING","RESIDENCE","DOMICILE","LODGING"
    0x5f287ddc37e0 ---------A   00565  DATA "HABITATION"
    0x5f287ddc3f80 ---------A   00570  DATA 7,"PIT","HOLE","HOLLOW","WELL","GULF","CHASM","ABYSS"
    0x5f287ddc4720 ---------A   00580  DATA 7,"PUSH","SHOVE","THRUST","PROD","POKE","BUTT","PRESS"
    0x5f287ddc4de0 ---------A   00590  DATA 6,"RED","ROUGE","SCARLET","CRIMSON","FLAME","RUBY"
    0x5f287ddc5470 ---------A   00600  DATA 7,"PAIN","SUFFERING","HURT","MISERY","DISTRESS","ACHE"
    0x5f287ddc55c0 ---------A   00605  DATA "DISCOMFORT"
    0x5f287ddc5610 ---------A T 00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00150      00320T
     00170      00174T
     00240      00300T, 00370T
     00290      00270T
     00320      00280T
     00340      00250T
     00420      00160T
     00999      00420T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5f287ddb06d0 (00002)   0x5f287ddb06d0 (00002)   0x5f287ddc5610 (00999)   0x5f287ddc5610 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/synonym.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f287ddb06d0 ---------A   00002  PRINT TAB(33);"SYNONYM"
    0x5f287ddb0670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f287dda12b0 ----------   00006  PRINT
    0x5f287ddb09e0 ----------        a PRINT
    0x5f287ddb07f0 ---------A        b PRINT
    0x5f287ddb2f30 ---------A   00010  DIM R$(5),W$(10),L(30),R(30)
    0x5f287ddb2e70 ----------   00020  R$(1)="RIGHT"
    0x5f287ddb2ff0 ----------        a R$(2)="CORRECT"
    0x5f287ddb30b0 ----------        b R$(3)="FINE"
    0x5f287ddb9020 ---------A        c R$(4)="GOOD!"
    0x5f287ddb9320 ---------A   00030  R$(5)="CHECK"
    0x5f287ddb9620 ---------A   00070  C=0
    0x5f287ddb97c0 ---------A   00090  PRINT "A SYNONYM OF A WORD MEANS ANOTHER WORD IN THE ENGLISH"
    0x5f287ddb9960 ---------A   00100  PRINT "LANGUAGE WHICH HAS THE SAME OR VERY NEARLY THE SAME";
    0x5f287ddb9ae0 ---------A   00110  PRINT " MEANING."
    0x5f287ddb9c40 ---------A   00130  PRINT "I CHOOSE A WORD -- YOU TYPE A SYNONYM."
    0x5f287ddb9de0 ---------A   00140  PRINT "IF YOU CAN'T THINK OF A SYNONYM, TYPE THE WORD 'HELP'"
    0x5f287ddb9f00 ----------   00145  PRINT "AND I WILL TELL YOU A SYNONYM."
    0x5f287ddb9f60 ---------A        a PRINT
    0x5f287ddb9fc0 ---------- T 00150  RESTORE
    0x5f287ddba2d0 ---------- T      a C=C+1
    0x5f287ddba4e0 ---------A T      b READ N
    0x5f287ddba750 ---------A   00160  IF C>N THEN 420
    0x5f287ddbae10 ---------A T 00170  N1=INT(RND(1)*N+1)
    0x5f287ddbb140 ---------A   00174  IF R(N1)=1 THEN 170
    0x5f287ddbb440 ---------A   00176  R(N1)=1
    0x5f287ddbb7f0 ---------A   00180  FOR I=1 TO N1
    0x5f287ddbba10 ---------A   00190  READ N2
    0x5f287ddbbdc0 ---------A   00200  FOR J=1 TO N2
    0x5f287ddbc000 ---------A   00210  READ W$(J)
    0x5f287ddbc130 ---------A   00220  NEXT J
    0x5f287ddbc280 ---------A   00230  NEXT I
    0x5f287ddbc550 ----------   00232  FOR J=1 TO N2
    0x5f287ddbc850 ----------        a L(J)=J
    0x5f287ddbc980 ---------A        b NEXT J
    0x5f287ddbcc70 ----------   00235  L(0)=N2
    0x5f287ddbcf20 ----------        a G=1
    0x5f287ddbcf70 ---------A        b PRINT
    0x5f287ddbd410 ----------   00237  L(G)=L(L(0))
    0x5f287ddbd7e0 ----------        a L(0)=N2-1
    0x5f287ddbd870 ---------A        b PRINT
    0x5f287ddbdb90 ---------- T 00240  PRINT "     WHAT IS A SYNONYM OF ";W$(G);
    0x5f287ddbdd90 ---------A T      a INPUT A$
    0x5f287ddbe010 ---------A   00250  IF A$="HELP" THEN 340
    0x5f287ddbe3d0 ---------A   00260  FOR K=1 TO N2
    0x5f287ddbe630 ---------A   00270  IF G=K THEN 290
    0x5f287ddbe990 ---------A   00280  IF A$=W$(K) THEN 320
    0x5f287ddbead0 ---------A T 00290  NEXT K
    0x5f287ddbee40 ----------   00300  PRINT "     TRY AGAIN."
    0x5f287ddbeed0 ---------A        a GOTO 240
    0x5f287ddbf480 ---------- T 00320  PRINT R$(INT(RND(1)*5+1))
    0x5f287ddbf510 ---------A T      a GOTO 150
    0x5f287ddbfcb0 ---------A T 00340  G1=INT(RND(1)*L(0)+1)
    0x5f287ddc0480 ----------   00360  PRINT "**** A SYNONYM OF ";W$(G);" IS ";W$(L(G1));"."
    0x5f287ddc0520 ---------A        a PRINT
    0x5f287ddc09c0 ----------   00370  L(G1)=L(L(0))
    0x5f287ddc0e50 ----------        a L(0)=L(0)-1
    0x5f287ddc0ee0 ---------A        b GOTO 240
    0x5f287ddc0f30 ---------- T 00420  PRINT
    0x5f287ddc1080 ---------- T      a PRINT "SYNONYM DRILL COMPLETED."
    0x5f287ddc1100 ---------A T      b GOTO 999
    0x5f287ddc1280 ---------A   00500  DATA 10
    0x5f287ddc1850 ---------A   00510  DATA 5,"FIRST","START","BEGINNING","ONSET","INITIAL"
    0x5f287ddc1e30 ---------A   00520  DATA 5,"SIMILAR","ALIKE","SAME","LIKE","RESEMBLING"
    0x5f287ddc2410 ---------A   00530  DATA 5,"MODEL","PATTERN","PROTOTYPE","STANDARD","CRITERION"
    0x5f287ddc29f0 ---------A   00540  DATA 5,"SMALL","INSIGNIFICANT","LITTLE","TINY","MINUTE"
    0x5f287ddc30b0 ---------A   00550  DATA 6,"STOP","HALT","STAY","ARREST","CHECK","STANDSTILL"
    0x5f287ddc3660 ---------A   00560  DATA 6,"HOUSE","DWELLING","RESIDENCE","DOMICILE","LODGING"
    0x5f287ddc37e0 ---------A   00565  DATA "HABITATION"
    0x5f287ddc3f80 ---------A   00570  DATA 7,"PIT","HOLE","HOLLOW","WELL","GULF","CHASM","ABYSS"
    0x5f287ddc4720 ---------A   00580  DATA 7,"PUSH","SHOVE","THRUST","PROD","POKE","BUTT","PRESS"
    0x5f287ddc4de0 ---------A   00590  DATA 6,"RED","ROUGE","SCARLET","CRIMSON","FLAME","RUBY"
    0x5f287ddc5470 ---------A   00600  DATA 7,"PAIN","SUFFERING","HURT","MISERY","DISTRESS","ACHE"
    0x5f287ddc55c0 ---------A   00605  DATA "DISCOMFORT"
    0x5f287ddc5610 ---------A T 00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/synonym.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f287ddb06d0 ---------A   01000  PRINT TAB(33);"SYNONYM"
    0x5f287ddb0670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f287dda12b0 ----------   01020  PRINT
    0x5f287ddb09e0 ----------   01030  PRINT
    0x5f287ddb07f0 ---------A   01040  PRINT
    0x5f287ddb2f30 ---------A   01050  DIM R$(5),W$(1050),L(30),R(30)
    0x5f287ddb2e70 ----------   01060  R$(1)="RIGHT"
    0x5f287ddb2ff0 ----------   01070  R$(2)="CORRECT"
    0x5f287ddb30b0 ----------   01080  R$(3)="FINE"
    0x5f287ddb9020 ---------A   01090  R$(4)="GOOD!"
    0x5f287ddb9320 ---------A   01100  R$(5)="CHECK"
    0x5f287ddb9620 ---------A   01110  C=0
    0x5f287ddb97c0 ---------A   01120  PRINT "A SYNONYM OF A WORD MEANS ANOTHER WORD IN THE ENGLISH"
    0x5f287ddb9960 ---------A   01130  PRINT "LANGUAGE WHICH HAS THE SAME OR VERY NEARLY THE SAME";
    0x5f287ddb9ae0 ---------A   01140  PRINT " MEANING."
    0x5f287ddb9c40 ---------A   01150  PRINT "I CHOOSE A WORD -- YOU TYPE A SYNONYM."
    0x5f287ddb9de0 ---------A   01160  PRINT "IF YOU CAN'T THINK OF A SYNONYM, TYPE THE WORD 'HELP'"
    0x5f287ddb9f00 ----------   01170  PRINT "AND I WILL TELL YOU A SYNONYM."
    0x5f287ddb9f60 ---------A   01180  PRINT
    0x5f287ddb9fc0 ----------   01190  RESTORE
    0x5f287ddba2d0 ----------   01200  C=C+1
    0x5f287ddba4e0 ---------A   01210  READ N
    0x5f287ddba750 ---------A   01220  IF C>N THEN 1600
    0x5f287ddbae10 ---------A   01230  N1=INT(RND(1)*N+1)
    0x5f287ddbb140 ---------A   01240  IF R(N1)=1 THEN 1230
    0x5f287ddbb440 ---------A   01250  R(N1)=1
    0x5f287ddbb7f0 ---------A   01260  FOR I=1 TO N1
    0x5f287ddbba10 ---------A   01270  READ N2
    0x5f287ddbbdc0 ---------A   01280  FOR J=1 TO N2
    0x5f287ddbc000 ---------A   01290  READ W$(J)
    0x5f287ddbc130 ---------A   01300  NEXT J
    0x5f287ddbc280 ---------A   01310  NEXT I
    0x5f287ddbc550 ----------   01320  FOR J=1 TO N2
    0x5f287ddbc850 ----------   01330  L(J)=J
    0x5f287ddbc980 ---------A   01340  NEXT J
    0x5f287ddbcc70 ----------   01350  L(0)=N2
    0x5f287ddbcf20 ----------   01360  G=1
    0x5f287ddbcf70 ---------A   01370  PRINT
    0x5f287ddbd410 ----------   01380  L(G)=L(L(0))
    0x5f287ddbd7e0 ----------   01390  L(0)=N2-1
    0x5f287ddbd870 ---------A   01400  PRINT
    0x5f287ddbdb90 ----------   01410  PRINT "     WHAT IS A SYNONYM OF ";W$(G);
    0x5f287ddbdd90 ---------A   01420  INPUT A$
    0x5f287ddbe010 ---------A   01430  IF A$="HELP" THEN 1520
    0x5f287ddbe3d0 ---------A   01440  FOR K=1 TO N2
    0x5f287ddbe630 ---------A   01450  IF G=K THEN 1470
    0x5f287ddbe990 ---------A   01460  IF A$=W$(K) THEN 1510
    0x5f287ddbead0 ---------A   01470  NEXT K
    0x5f287ddbee40 ----------   01480  PRINT "     TRY AGAIN."
    0x5f287ddbeed0 ---------A   01490  GOTO 1420
    0x5f287ddbf480 ----------   01500  PRINT R$(INT(RND(1)*5+1))
    0x5f287ddbf510 ---------A   01510  GOTO 1210
    0x5f287ddbfcb0 ---------A   01520  G1=INT(RND(1)*L(0)+1)
    0x5f287ddc0480 ----------   01530  PRINT "**** A SYNONYM OF ";W$(G);" IS ";W$(L(G1));"."
    0x5f287ddc0520 ---------A   01540  PRINT
    0x5f287ddc09c0 ----------   01550  L(G1)=L(L(0))
    0x5f287ddc0e50 ----------   01560  L(0)=L(0)-1
    0x5f287ddc0ee0 ---------A   01570  GOTO 1420
    0x5f287ddc0f30 ----------   01580  PRINT
    0x5f287ddc1080 ----------   01590  PRINT "SYNONYM DRILL COMPLETED."
    0x5f287ddc1100 ---------A   01600  GOTO 1740
    0x5f287ddc1280 ---------A   01610  DATA 10
    0x5f287ddc1850 ---------A   01620  DATA 5,"FIRST","START","BEGINNING","ONSET","INITIAL"
    0x5f287ddc1e30 ---------A   01630  DATA 5,"SIMILAR","ALIKE","SAME","LIKE","RESEMBLING"
    0x5f287ddc2410 ---------A   01640  DATA 5,"MODEL","PATTERN","PROTOTYPE","STANDARD","CRITERION"
    0x5f287ddc29f0 ---------A   01650  DATA 5,"SMALL","INSIGNIFICANT","LITTLE","TINY","MINUTE"
    0x5f287ddc30b0 ---------A   01660  DATA 6,"STOP","HALT","STAY","ARREST","CHECK","STANDSTILL"
    0x5f287ddc3660 ---------A   01670  DATA 6,"HOUSE","DWELLING","RESIDENCE","DOMICILE","LODGING"
    0x5f287ddc37e0 ---------A   01680  DATA "HABITATION"
    0x5f287ddc3f80 ---------A   01690  DATA 7,"PIT","HOLE","HOLLOW","WELL","GULF","CHASM","ABYSS"
    0x5f287ddc4720 ---------A   01700  DATA 7,"PUSH","SHOVE","THRUST","PROD","POKE","BUTT","PRESS"
    0x5f287ddc4de0 ---------A   01710  DATA 6,"RED","ROUGE","SCARLET","CRIMSON","FLAME","RUBY"
    0x5f287ddc5470 ---------A   01720  DATA 7,"PAIN","SUFFERING","HURT","MISERY","DISTRESS","ACHE"
    0x5f287ddc55c0 ---------A   01730  DATA "DISCOMFORT"
    0x5f287ddc5610 ---------A   01740  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01720 - 10000    8290 

 */



/*
 *  Symbol Table Listing for 'basic/synonym.bas'
 *
    A$                       String      
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
    G                        Integer     
    G1                       Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K                        Integer     
    L               Array    Integer         {0,29} 
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
    N1                       Integer     
    N2                       Integer     
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R               Array    Integer         {0,29} 
    R$              Array    String          {0,4} 
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
    W$              Array    String          {0,9} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/synonym.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f287ddb06d0 ---------A   01000  PRINT TAB(33);"SYNONYM"
    0x5f287ddb0670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f287dda12b0 ---------A   01020  PRINT
    0x5f287ddb09e0 ---------A   01030  PRINT
    0x5f287ddb07f0 ---------A   01040  PRINT
    0x5f287ddb2f30 ---------A   01050  DIM R$(5),W$(1050),L(30),R(30)
    0x5f287ddb2e70 ---------A   01060  R$(1)="RIGHT"
    0x5f287ddb2ff0 ---------A   01070  R$(2)="CORRECT"
    0x5f287ddb30b0 ---------A   01080  R$(3)="FINE"
    0x5f287ddb9020 ---------A   01090  R$(4)="GOOD!"
    0x5f287ddb9320 ---------A   01100  R$(5)="CHECK"
    0x5f287ddb9620 ---------A   01110  C=0
    0x5f287ddb97c0 ---------A   01120  PRINT "A SYNONYM OF A WORD MEANS ANOTHER WORD IN THE ENGLISH"
    0x5f287ddb9960 ---------A   01130  PRINT "LANGUAGE WHICH HAS THE SAME OR VERY NEARLY THE SAME";
    0x5f287ddb9ae0 ---------A   01140  PRINT " MEANING."
    0x5f287ddb9c40 ---------A   01150  PRINT "I CHOOSE A WORD -- YOU TYPE A SYNONYM."
    0x5f287ddb9de0 ---------A   01160  PRINT "IF YOU CAN'T THINK OF A SYNONYM, TYPE THE WORD 'HELP'"
    0x5f287ddb9f00 ---------A   01170  PRINT "AND I WILL TELL YOU A SYNONYM."
    0x5f287ddb9f60 ---------A   01180  PRINT
    0x5f287ddb9fc0 ---------A   01190  RESTORE
    0x5f287ddba2d0 ---------A   01200  C=C+1
    0x5f287ddba4e0 ---------A T 01210  READ N
    0x5f287ddba750 ---------A   01220  IF C>N THEN 1570
    0x5f287ddbae10 ---------A T 01230  N1=INT(RND(1)*N+1)
    0x5f287ddbb140 ---------A   01240  IF R(N1)=1 THEN 1230
    0x5f287ddbb440 ---------A   01250  R(N1)=1
    0x5f287ddbb7f0 ---------A   01260  FOR I=1 TO N1
    0x5f287ddbba10 ---------A   01270  READ N2
    0x5f287ddbbdc0 ---------A   01280  FOR J=1 TO N2
    0x5f287ddbc000 ---------A   01290  READ W$(J)
    0x5f287ddbc130 ---------A   01300  NEXT J
    0x5f287ddbc280 ---------A   01310  NEXT I
    0x5f287ddbc550 ---------A   01320  FOR J=1 TO N2
    0x5f287ddbc850 ---------A   01330  L(J)=J
    0x5f287ddbc980 ---------A   01340  NEXT J
    0x5f287ddbcc70 ---------A   01350  L(0)=N2
    0x5f287ddbcf20 ---------A   01360  G=1
    0x5f287ddbcf70 ---------A   01370  PRINT
    0x5f287ddbd410 ---------A   01380  L(G)=L(L(0))
    0x5f287ddbd7e0 ---------A   01390  L(0)=N2-1
    0x5f287ddbd870 ---------A   01400  PRINT
    0x5f287ddbdb90 ---------A   01410  PRINT "     WHAT IS A SYNONYM OF ";W$(G);
    0x5f287ddbdd90 ---------A T 01420  INPUT A$
    0x5f287ddbe010 ---------A   01430  IF A$="HELP" THEN 1510
    0x5f287ddbe3d0 ---------A   01440  FOR K=1 TO N2
    0x5f287ddbe630 ---------A   01450  IF G=K THEN 1470
    0x5f287ddbe990 ---------A   01460  IF A$=W$(K) THEN 1500
    0x5f287ddbead0 ---------A T 01470  NEXT K
    0x5f287ddbee40 ---------A   01480  PRINT "     TRY AGAIN."
    0x5f287ddbeed0 ---------A   01490  GOTO 1420
    0x5f287ddbf510 ---------A T 01500  GOTO 1210
    0x5f287ddbfcb0 ---------A T 01510  G1=INT(RND(1)*L(0)+1)
    0x5f287ddc0480 ---------A   01520  PRINT "**** A SYNONYM OF ";W$(G);" IS ";W$(L(G1));"."
    0x5f287ddc0520 ---------A   01530  PRINT
    0x5f287ddc09c0 ---------A   01540  L(G1)=L(L(0))
    0x5f287ddc0e50 ---------A   01550  L(0)=L(0)-1
    0x5f287ddc0ee0 ---------A   01560  GOTO 1420
    0x5f287ddc1100 ---------A T 01570  GOTO 1710
    0x5f287ddc1280 ---------A   01580  DATA 10
    0x5f287ddc1850 ---------A   01590  DATA 5,"FIRST","START","BEGINNING","ONSET","INITIAL"
    0x5f287ddc1e30 ---------A   01600  DATA 5,"SIMILAR","ALIKE","SAME","LIKE","RESEMBLING"
    0x5f287ddc2410 ---------A   01610  DATA 5,"MODEL","PATTERN","PROTOTYPE","STANDARD","CRITERION"
    0x5f287ddc29f0 ---------A   01620  DATA 5,"SMALL","INSIGNIFICANT","LITTLE","TINY","MINUTE"
    0x5f287ddc30b0 ---------A   01630  DATA 6,"STOP","HALT","STAY","ARREST","CHECK","STANDSTILL"
    0x5f287ddc3660 ---------A   01640  DATA 6,"HOUSE","DWELLING","RESIDENCE","DOMICILE","LODGING"
    0x5f287ddc37e0 ---------A   01650  DATA "HABITATION"
    0x5f287ddc3f80 ---------A   01660  DATA 7,"PIT","HOLE","HOLLOW","WELL","GULF","CHASM","ABYSS"
    0x5f287ddc4720 ---------A   01670  DATA 7,"PUSH","SHOVE","THRUST","PROD","POKE","BUTT","PRESS"
    0x5f287ddc4de0 ---------A   01680  DATA 6,"RED","ROUGE","SCARLET","CRIMSON","FLAME","RUBY"
    0x5f287ddc5470 ---------A   01690  DATA 7,"PAIN","SUFFERING","HURT","MISERY","DISTRESS","ACHE"
    0x5f287ddc55c0 ---------A   01700  DATA "DISCOMFORT"
    0x5f287ddc5610 ---------A T 01710  END
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
char* data_01580s[]={"10"};
char* data_01590s[]={"5","FIRST","START","BEGINNING","ONSET","INITIAL"};
char* data_01600s[]={"5","SIMILAR","ALIKE","SAME","LIKE","RESEMBLING"};
char* data_01610s[]={"5","MODEL","PATTERN","PROTOTYPE","STANDARD","CRITERION"};
char* data_01620s[]={"5","SMALL","INSIGNIFICANT","LITTLE","TINY","MINUTE"};
char* data_01630s[]={"6","STOP","HALT","STAY","ARREST","CHECK","STANDSTILL"};
char* data_01640s[]={"6","HOUSE","DWELLING","RESIDENCE","DOMICILE","LODGING"};
char* data_01650s[]={"HABITATION"};
char* data_01660s[]={"7","PIT","HOLE","HOLLOW","WELL","GULF","CHASM","ABYSS"};
char* data_01670s[]={"7","PUSH","SHOVE","THRUST","PROD","POKE","BUTT","PRESS"};
char* data_01680s[]={"6","RED","ROUGE","SCARLET","CRIMSON","FLAME","RUBY"};
char* data_01690s[]={"7","PAIN","SUFFERING","HURT","MISERY","DISTRESS","ACHE"};
char* data_01700s[]={"DISCOMFORT"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1580,  1,data_01580s},
    { 1590,  6,data_01590s},
    { 1600,  6,data_01600s},
    { 1610,  6,data_01610s},
    { 1620,  6,data_01620s},
    { 1630,  7,data_01630s},
    { 1640,  6,data_01640s},
    { 1650,  1,data_01650s},
    { 1660,  8,data_01660s},
    { 1670,  8,data_01670s},
    { 1680,  7,data_01680s},
    { 1690,  7,data_01690s},
    { 1700,  1,data_01700s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str;                                     // Basic: A$ 
int    C_int;                                     // Basic: C 
int    G_int;                                     // Basic: G 
int    G1_int;                                    // Basic: G1 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int_arr[30];                             // Basic: L 
int    N_int;                                     // Basic: N 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    R_int_arr[30];                             // Basic: R 
char*  R_str_arr[5];                              // Basic: R$ 
char*  W_str_arr[10];                             // Basic: W$ 
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
    // 01000 PRINT TAB(33);"SYNONYM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"SYNONYM");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 DIM R$(5),W$(1050),L(30),R(30)
    // 01060 R$(1)="RIGHT"
    GLBpStr="RIGHT";
    R_str_arr[1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01070 R$(2)="CORRECT"
    GLBpStr="CORRECT";
    R_str_arr[2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01080 R$(3)="FINE"
    GLBpStr="FINE";
    R_str_arr[3] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01090 R$(4)="GOOD!"
    GLBpStr="GOOD!";
    R_str_arr[4] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01100 R$(5)="CHECK"
    GLBpStr="CHECK";
    R_str_arr[5] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01110 C=0
    C_int = 0;
    // 01120 PRINT "A SYNONYM OF A WORD MEANS ANOTHER WORD IN THE ENGLISH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A SYNONYM OF A WORD MEANS ANOTHER WORD IN THE ENGLISH");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "LANGUAGE WHICH HAS THE SAME OR VERY NEARLY THE SAME";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LANGUAGE WHICH HAS THE SAME OR VERY NEARLY THE SAME");fputs(buf,fh); };
    // 01140 PRINT " MEANING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," MEANING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "I CHOOSE A WORD -- YOU TYPE A SYNONYM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I CHOOSE A WORD -- YOU TYPE A SYNONYM.");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "IF YOU CAN'T THINK OF A SYNONYM, TYPE THE WORD 'HELP'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF YOU CAN'T THINK OF A SYNONYM, TYPE THE WORD 'HELP'");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "AND I WILL TELL YOU A SYNONYM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND I WILL TELL YOU A SYNONYM.");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01190 RESTORE
    Data_Index=0;
    RestoreData(0);
    // 01200 C=C+1
    C_int = C_int+1;

  Lbl_01210:
    // 01210 READ N
    N_int = Get_Data_Int();
    // 01220 IF C>N THEN 1570
    if(C_int>N_int)goto Lbl_01570;

  Lbl_01230:
    // 01230 N1=INT(RND(1)*N+1)
    N1_int = INT(RND(1)*N_int+1);
    // 01240 IF R(N1)=1 THEN 1230
    if(R_int_arr[N1_int]==1)goto Lbl_01230;
    // 01250 R(N1)=1
    R_int_arr[N1_int] = 1;
    // 01260 FOR I=1 TO N1
    for(I_int=1;I_int<=N1_int;I_int++){
        // 01270 READ N2
        N2_int = Get_Data_Int();
        // 01280 FOR J=1 TO N2
        for(J_int=1;J_int<=N2_int;J_int++){
            // 01290 READ W$(J)
            W_str_arr[J_int] = Get_Data_String();
            // 01300 NEXT J
            int dummy_1300=0; // Ignore this line.
        }; // End-For(J_int)
        // 01310 NEXT I
        int dummy_1310=0; // Ignore this line.
    }; // End-For(I_int)
    // 01320 FOR J=1 TO N2
    for(J_int=1;J_int<=N2_int;J_int++){
        // 01330 L(J)=J
        L_int_arr[J_int] = J_int;
        // 01340 NEXT J
        int dummy_1340=0; // Ignore this line.
    }; // End-For(J_int)
    // 01350 L(0)=N2
    L_int_arr[0] = N2_int;
    // 01360 G=1
    G_int = 1;
    // 01370 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01380 L(G)=L(L(0))
    L_int_arr[G_int] = L_int_arr[L_int_arr[0]];
    // 01390 L(0)=N2-1
    L_int_arr[0] = N2_int-1;
    // 01400 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT "     WHAT IS A SYNONYM OF ";W$(G);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     WHAT IS A SYNONYM OF "); strcat(buf,W_str_arr[G_int]);fputs(buf,fh); };

  Lbl_01420:
    // 01420 INPUT A$
    // Start of Basic INPUT statement 01420
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01420
    // 01430 IF A$="HELP" THEN 1510
    if(strcmp(A_str,"HELP")==0)goto Lbl_01510;
    // 01440 FOR K=1 TO N2
    for(K_int=1;K_int<=N2_int;K_int++){
        // 01450 IF G=K THEN 1470
        if(G_int==K_int)goto Lbl_01470;
        // 01460 IF A$=W$(K) THEN 1500
        if(strcmp(A_str,W_str_arr[K_int])==0)goto Lbl_01500;

  Lbl_01470:
        // 01470 NEXT K
        int dummy_1470=0; // Ignore this line.
    }; // End-For(K_int)
    // 01480 PRINT "     TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 GOTO 1420
    goto Lbl_01420;

  Lbl_01500:
    // 01500 GOTO 1210
    goto Lbl_01210;

  Lbl_01510:
    // 01510 G1=INT(RND(1)*L(0)+1)
    G1_int = INT(RND(1)*L_int_arr[0]+1);
    // 01520 PRINT "**** A SYNONYM OF ";W$(G);" IS ";W$(L(G1));"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"**** A SYNONYM OF "); strcat(buf,W_str_arr[G_int]);strcat(buf," IS "); strcat(buf,W_str_arr[L_int_arr[G1_int]]);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01530 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01540 L(G1)=L(L(0))
    L_int_arr[G1_int] = L_int_arr[L_int_arr[0]];
    // 01550 L(0)=L(0)-1
    L_int_arr[0] = L_int_arr[0]-1;
    // 01560 GOTO 1420
    goto Lbl_01420;

  Lbl_01570:
    // 01570 GOTO 1710
    goto Lbl_01710;
    // 01580 DATA 10
    // 01590 DATA 5,"FIRST","START","BEGINNING","ONSET","INITIAL"
    // 01600 DATA 5,"SIMILAR","ALIKE","SAME","LIKE","RESEMBLING"
    // 01610 DATA 5,"MODEL","PATTERN","PROTOTYPE","STANDARD","CRITERION"
    // 01620 DATA 5,"SMALL","INSIGNIFICANT","LITTLE","TINY","MINUTE"
    // 01630 DATA 6,"STOP","HALT","STAY","ARREST","CHECK","STANDSTILL"
    // 01640 DATA 6,"HOUSE","DWELLING","RESIDENCE","DOMICILE","LODGING"
    // 01650 DATA "HABITATION"
    // 01660 DATA 7,"PIT","HOLE","HOLLOW","WELL","GULF","CHASM","ABYSS"
    // 01670 DATA 7,"PUSH","SHOVE","THRUST","PROD","POKE","BUTT","PRESS"
    // 01680 DATA 6,"RED","ROUGE","SCARLET","CRIMSON","FLAME","RUBY"
    // 01690 DATA 7,"PAIN","SUFFERING","HURT","MISERY","DISTRESS","ACHE"
    // 01700 DATA "DISCOMFORT"

  Lbl_01710:
    // 01710 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
