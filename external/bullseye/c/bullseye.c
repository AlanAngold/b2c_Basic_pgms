/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bullseye.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58145822d6d0 ---------A   00005  PRINT TAB(32);"BULLSEYE"
    0x58145822d670 ---------A   00010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58145822d7f0 ---------A   00020  PRINT:PRINT:PRINT
    0x58145822fae0 ---------A   00030  PRINT "IN THIS GAME, UP TO 20 PLAYERS THROW DARTS AT A TARGET"
    0x58145822e080 ---------A   00040  PRINT "WITH 10, 20, 30, AND 40 POINT ZONES.  THE OBJECTIVE IS"
    0x58145822e4d0 ---------A   00050  PRINT "TO GET 200 POINTS.": PRINT
    0x58145822e810 ---------A   00060  PRINT "THROW",TAB(20);"DESCRIPTION";TAB(45);"PROBABLE SCORE"
    0x581458235cf0 ---------A   00070  PRINT" 1";TAB(20);"FAST OVERARM";TAB(45);"BULLSEYE OR COMPLETE MISS"
    0x581458236240 ---------A   00080  PRINT" 2";TAB(20);"CONTROLLED OVERARM";TAB(45);"10, 20 OR 30 POINTS"
    0x581458236860 ---------A   00090  PRINT" 3";TAB(20);"UNDERARM";TAB(45);"ANYTHING":PRINT
    0x581458237cc0 ---------A   00100  DIM A$(20),S(20),W(10): M=0: R=0: FOR I=1 TO 20: S(I)=0: NEXT I
    0x581458237f50 ---------A   00110  INPUT "HOW MANY PLAYERS";N: PRINT
    0x581458238270 ---------A   00120  FOR I=1 TO N
    0x581458238710 ---------A   00130  PRINT "NAME OF PLAYER #";I;:INPUT A$(I)
    0x581458238850 ---------A   00140  NEXT I
    0x581458238f90 ---------A T 00150  R=R+1: PRINT: PRINT "ROUND";R:PRINT "---------"
    0x5814582392b0 ---------A   00160  FOR I=1 TO N
    0x5814582398a0 ---------A T 00170  PRINT: PRINT A$(I)"'S THROW";: INPUT T
    0x581458239ea0 ---------A   00180  IF T<0 OR T>3 THEN PRINT "INPUT 1, 2, OR 3!": GOTO 170
    0x58145823a250 ----------   00190  ON T GOTO 200, 210, 200
    0x58145823adb0 ---------- T 00200  P1=.65: P2=.55: P3=.5: P4=.5: GOTO 230
    0x58145823b5c0 ---------- T 00210  P1=.99: P2=.77: P3=.43: P4=.01: GOTO 230
    0x58145823bda0 ----------   00220  P1=.95: P2=.75: P3=.45: P4=.05
    0x58145823c180 ---------- T 00230  U=RND(1)
    0x58145823c840 ----------   00240  IF U>=P1 THEN PRINT "BULLSEYE!!  40 POINTS!":B=40: GOTO 290
    0x58145823ce60 ----------   00250  IF U>=P2 THEN PRINT "30-POINT ZONE!":B=30: GOTO 290
    0x58145823d490 ----------   00260  IF U>=P3 THEN PRINT "20-POINT ZONE":B=20: GOTO 290
    0x58145823dab0 ----------   00270  IF U>=P4 THEN PRINT "WHEW!  10 POINTS.":B=10: GOTO 290
    0x58145823de00 ----------   00280  PRINT "MISSED THE TARGET!  TOO BAD.": B=0
    0x58145823e740 ---------- T 00290  S(I)=S(I)+B: PRINT "TOTAL SCORE =";S(I): NEXT I
    0x58145823ea30 ----------   00300  FOR I=1 TO N
    0x58145823f380 ----------   00310  IF S(I)>=200 THEN M=M+1: W(M)=I
    0x58145823f4b0 ----------   00320  NEXT I
    0x58145823f950 ----------   00330  IF M=0 THEN 150
    0x58145823fba0 ----------   00340  PRINT: PRINT "WE HAVE A WINNER!!": PRINT
    0x581458240780 ----------   00350  FOR I=1 TO M: PRINT A$(W(I));" SCORED";S(W(I));"POINTS.": NEXT I
    0x5814582409b0 ---------A   00360  PRINT: PRINT "THANKS FOR THE GAME.": END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00150      00330T
     00170      00180T
     00200      00190T, 00190T
     00210      00190T
     00230      00200T, 00210T
     00290      00240T, 00250T, 00260T, 00270T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x58145822d6d0 (00005)   0x58145822d6d0 (00005)   0x5814582409b0 (00360)   0x5814582409b0 (00360)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/bullseye.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58145822d6d0 ---------A   00005  PRINT TAB(32);"BULLSEYE"
    0x58145822d670 ---------A   00010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58145821e2b0 ----------   00020  PRINT
    0x58145822d9e0 ----------        a PRINT
    0x58145822d7f0 ---------A        b PRINT
    0x58145822fae0 ---------A   00030  PRINT "IN THIS GAME, UP TO 20 PLAYERS THROW DARTS AT A TARGET"
    0x58145822e080 ---------A   00040  PRINT "WITH 10, 20, 30, AND 40 POINT ZONES.  THE OBJECTIVE IS"
    0x58145822de80 ----------   00050  PRINT "TO GET 200 POINTS."
    0x58145822e4d0 ---------A        a PRINT
    0x58145822e810 ---------A   00060  PRINT "THROW",TAB(20);"DESCRIPTION";TAB(45);"PROBABLE SCORE"
    0x581458235cf0 ---------A   00070  PRINT" 1";TAB(20);"FAST OVERARM";TAB(45);"BULLSEYE OR COMPLETE MISS"
    0x581458236240 ---------A   00080  PRINT" 2";TAB(20);"CONTROLLED OVERARM";TAB(45);"10, 20 OR 30 POINTS"
    0x581458236800 ----------   00090  PRINT" 3";TAB(20);"UNDERARM";TAB(45);"ANYTHING"
    0x581458236860 ---------A        a PRINT
    0x581458236fe0 ----------   00100  DIM A$(20),S(20),W(10)
    0x581458237290 ----------        a M=0
    0x581458237540 ----------        b R=0
    0x5814582378b0 ----------        c FOR I=1 TO 20
    0x581458237b90 ----------        d S(I)=0
    0x581458237cc0 ---------A        e NEXT I
    0x581458237ed0 ----------   00110  INPUT "HOW MANY PLAYERS";N
    0x581458237f50 ---------A        a PRINT
    0x581458238270 ---------A   00120  FOR I=1 TO N
    0x5814582384d0 ----------   00130  PRINT "NAME OF PLAYER #";I;
    0x581458238710 ---------A        a INPUT A$(I)
    0x581458238850 ---------A   00140  NEXT I
    0x581458238ba0 ---------- T 00150  R=R+1
    0x581458238bf0 ---------- T      a PRINT
    0x581458238e30 ---------- T      b PRINT "ROUND";R
    0x581458238f90 ---------A T      c PRINT "---------"
    0x5814582392b0 ---------A   00160  FOR I=1 TO N
    0x581458239310 ---------- T 00170  PRINT
    0x581458239650 ---------- T      a PRINT A$(I)"'S THROW";
    0x5814582398a0 ---------A T      b INPUT T
    0x581458239e40 ----------   00180  IF T<0 OR T>3 THEN PRINT "INPUT 1, 2, OR 3!"
    0x581458239ea0 ---------A        a GOTO 170
    0x58145823a250 ----------   00190  ON T GOTO 200, 210, 200
    0x58145823a510 ---------- T 00200  P1=.65
    0x58145823a7c0 ---------- T      a P2=.55
    0x58145823aa70 ---------- T      b P3=.5
    0x58145823ad20 ---------- T      c P4=.5
    0x58145823adb0 ---------- T      d GOTO 230
    0x58145823afa0 ---------- T 00210  P1=.99
    0x58145823b190 ---------- T      a P2=.77
    0x58145823b380 ---------- T      b P3=.43
    0x58145823b570 ---------- T      c P4=.01
    0x58145823b5c0 ---------- T      d GOTO 230
    0x58145823b7b0 ----------   00220  P1=.95
    0x58145823b9a0 ----------        a P2=.75
    0x58145823bb90 ----------        b P3=.45
    0x58145823bda0 ----------        c P4=.05
    0x58145823c180 ---------- T 00230  U=RND(1)
    0x58145823c4f0 ----------   00240  IF U>=P1 THEN PRINT "BULLSEYE!!  40 POINTS!"
    0x58145823c7b0 ----------        a B=40
    0x58145823c840 ----------        b GOTO 290
    0x58145823cbd0 ----------   00250  IF U>=P2 THEN PRINT "30-POINT ZONE!"
    0x58145823cdd0 ----------        a B=30
    0x58145823ce60 ----------        b GOTO 290
    0x58145823d1f0 ----------   00260  IF U>=P3 THEN PRINT "20-POINT ZONE"
    0x58145823d3f0 ----------        a B=20
    0x58145823d490 ----------        b GOTO 290
    0x58145823d820 ----------   00270  IF U>=P4 THEN PRINT "WHEW!  10 POINTS."
    0x58145823da20 ----------        a B=10
    0x58145823dab0 ----------        b GOTO 290
    0x58145823dbc0 ----------   00280  PRINT "MISSED THE TARGET!  TOO BAD."
    0x58145823de00 ----------        a B=0
    0x58145823e2f0 ---------- T 00290  S(I)=S(I)+B
    0x58145823e600 ---------- T      a PRINT "TOTAL SCORE =";S(I)
    0x58145823e740 ---------- T      b NEXT I
    0x58145823ea30 ----------   00300  FOR I=1 TO N
    0x58145823f060 ----------   00310  IF S(I)>=200 THEN M=M+1
    0x58145823f380 ----------        a W(M)=I
    0x58145823f4b0 ----------   00320  NEXT I
    0x58145823f950 ----------   00330  IF M=0 THEN 150
    0x58145823f9b0 ----------   00340  PRINT
    0x58145823faf0 ----------        a PRINT "WE HAVE A WINNER!!"
    0x58145823fba0 ----------        b PRINT
    0x58145823fe80 ----------   00350  FOR I=1 TO M
    0x581458240640 ----------        a PRINT A$(W(I));" SCORED";S(W(I));"POINTS."
    0x581458240780 ----------        b NEXT I
    0x581458240810 ----------   00360  PRINT
    0x581458240950 ----------        a PRINT "THANKS FOR THE GAME."
    0x5814582409b0 ---------A        b END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/bullseye.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58145822d6d0 ---------A   01000  PRINT TAB(32);"BULLSEYE"
    0x58145822d670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58145821e2b0 ----------   01020  PRINT
    0x58145822d9e0 ----------   01030  PRINT
    0x58145822d7f0 ---------A   01040  PRINT
    0x58145822fae0 ---------A   01050  PRINT "IN THIS GAME, UP TO 20 PLAYERS THROW DARTS AT A TARGET"
    0x58145822e080 ---------A   01060  PRINT "WITH 10, 20, 30, AND 1060 POINT ZONES.  THE OBJECTIVE IS"
    0x58145822de80 ----------   01070  PRINT "TO GET 200 POINTS."
    0x58145822e4d0 ---------A   01080  PRINT
    0x58145822e810 ---------A   01090  PRINT "THROW",TAB(20);"DESCRIPTION";TAB(45);"PROBABLE SCORE"
    0x581458235cf0 ---------A   01100  PRINT" 1";TAB(20);"FAST OVERARM";TAB(45);"BULLSEYE OR COMPLETE MISS"
    0x581458236240 ---------A   01110  PRINT" 2";TAB(20);"CONTROLLED OVERARM";TAB(45);"10, 20 OR 30 POINTS"
    0x581458236800 ----------   01120  PRINT" 3";TAB(20);"UNDERARM";TAB(45);"ANYTHING"
    0x581458236860 ---------A   01130  PRINT
    0x581458236fe0 ----------   01140  DIM A$(20),S(20),W(10)
    0x581458237290 ----------   01150  M=0
    0x581458237540 ----------   01160  R=0
    0x5814582378b0 ----------   01170  FOR I=1 TO 20
    0x581458237b90 ----------   01180  S(I)=0
    0x581458237cc0 ---------A   01190  NEXT I
    0x581458237ed0 ----------   01200  INPUT "HOW MANY PLAYERS";N
    0x581458237f50 ---------A   01210  PRINT
    0x581458238270 ---------A   01220  FOR I=1 TO N
    0x5814582384d0 ----------   01230  PRINT "NAME OF PLAYER #";I;
    0x581458238710 ---------A   01240  INPUT A$(I)
    0x581458238850 ---------A   01250  NEXT I
    0x581458238ba0 ----------   01260  R=R+1
    0x581458238bf0 ----------   01270  PRINT
    0x581458238e30 ----------   01280  PRINT "ROUND";R
    0x581458238f90 ---------A   01290  PRINT "---------"
    0x5814582392b0 ---------A   01300  FOR I=1 TO N
    0x581458239310 ----------   01310  PRINT
    0x581458239650 ----------   01320  PRINT A$(I)"'S THROW";
    0x5814582398a0 ---------A   01330  INPUT T
    0x581458239e40 ----------   01340  IF T<0 OR T>3 THEN PRINT "INPUT 1, 2, OR 3!"
    0x581458239ea0 ---------A   01350  GOTO 1330
    0x58145823a250 ----------   01360  ON T GOTO 1410, 1460, 1410
    0x58145823a510 ----------   01370  P1=.65
    0x58145823a7c0 ----------   01380  P2=.55
    0x58145823aa70 ----------   01390  P3=.5
    0x58145823ad20 ----------   01400  P4=.5
    0x58145823adb0 ----------   01410  GOTO 1510
    0x58145823afa0 ----------   01420  P1=.99
    0x58145823b190 ----------   01430  P2=.77
    0x58145823b380 ----------   01440  P3=.43
    0x58145823b570 ----------   01450  P4=.01
    0x58145823b5c0 ----------   01460  GOTO 1510
    0x58145823b7b0 ----------   01470  P1=.95
    0x58145823b9a0 ----------   01480  P2=.75
    0x58145823bb90 ----------   01490  P3=.45
    0x58145823bda0 ----------   01500  P4=.05
    0x58145823c180 ----------   01510  U=RND(1)
    0x58145823c4f0 ----------   01520  IF U>=P1 THEN PRINT "BULLSEYE!!  40 POINTS!"
    0x58145823c7b0 ----------   01530  B=40
    0x58145823c840 ----------   01540  GOTO 1680
    0x58145823cbd0 ----------   01550  IF U>=P2 THEN PRINT "30-POINT ZONE!"
    0x58145823cdd0 ----------   01560  B=30
    0x58145823ce60 ----------   01570  GOTO 1680
    0x58145823d1f0 ----------   01580  IF U>=P3 THEN PRINT "20-POINT ZONE"
    0x58145823d3f0 ----------   01590  B=20
    0x58145823d490 ----------   01600  GOTO 1680
    0x58145823d820 ----------   01610  IF U>=P4 THEN PRINT "WHEW!  10 POINTS."
    0x58145823da20 ----------   01620  B=10
    0x58145823dab0 ----------   01630  GOTO 1680
    0x58145823dbc0 ----------   01640  PRINT "MISSED THE TARGET!  TOO BAD."
    0x58145823de00 ----------   01650  B=0
    0x58145823e2f0 ----------   01660  S(I)=S(I)+B
    0x58145823e600 ----------   01670  PRINT "TOTAL SCORE =";S(I)
    0x58145823e740 ----------   01680  NEXT I
    0x58145823ea30 ----------   01690  FOR I=1 TO N
    0x58145823f060 ----------   01700  IF S(I)>=200 THEN M=M+1
    0x58145823f380 ----------   01710  W(M)=I
    0x58145823f4b0 ----------   01720  NEXT I
    0x58145823f950 ----------   01730  IF M=0 THEN 1290
    0x58145823f9b0 ----------   01740  PRINT
    0x58145823faf0 ----------   01750  PRINT "WE HAVE A WINNER!!"
    0x58145823fba0 ----------   01760  PRINT
    0x58145823fe80 ----------   01770  FOR I=1 TO M
    0x581458240640 ----------   01780  PRINT A$(W(I));" SCORED";S(W(I));"POINTS."
    0x581458240780 ----------   01790  NEXT I
    0x581458240810 ----------   01800  PRINT
    0x581458240950 ----------   01810  PRINT "THANKS FOR THE GAME."
    0x5814582409b0 ---------A   01820  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01370 - 10000    8640 

 */



/*
 *  Symbol Table Listing for 'basic/bullseye.bas'
 *
    A$              Array    String          {0,19} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
    P1                       Integer     
    P2                       Integer     
    P3                       Integer     
    P4                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,19} 
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
    W               Array    Integer         {0,9} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bullseye.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58145822d6d0 ---------A   01000  PRINT TAB(32);"BULLSEYE"
    0x58145822d670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58145821e2b0 ---------A   01020  PRINT
    0x58145822d9e0 ---------A   01030  PRINT
    0x58145822d7f0 ---------A   01040  PRINT
    0x58145822fae0 ---------A   01050  PRINT "IN THIS GAME, UP TO 20 PLAYERS THROW DARTS AT A TARGET"
    0x58145822e080 ---------A   01060  PRINT "WITH 10, 20, 30, AND 1060 POINT ZONES.  THE OBJECTIVE IS"
    0x58145822de80 ---------A   01070  PRINT "TO GET 200 POINTS."
    0x58145822e4d0 ---------A   01080  PRINT
    0x58145822e810 ---------A   01090  PRINT "THROW",TAB(20);"DESCRIPTION";TAB(45);"PROBABLE SCORE"
    0x581458235cf0 ---------A   01100  PRINT" 1";TAB(20);"FAST OVERARM";TAB(45);"BULLSEYE OR COMPLETE MISS"
    0x581458236240 ---------A   01110  PRINT" 2";TAB(20);"CONTROLLED OVERARM";TAB(45);"10, 20 OR 30 POINTS"
    0x581458236800 ---------A   01120  PRINT" 3";TAB(20);"UNDERARM";TAB(45);"ANYTHING"
    0x581458236860 ---------A   01130  PRINT
    0x581458236fe0 ---------A   01140  DIM A$(20),S(20),W(10)
    0x581458237290 ---------A   01150  M=0
    0x581458237540 ---------A   01160  R=0
    0x5814582378b0 ---------A   01170  FOR I=1 TO 20
    0x581458237b90 ---------A   01180  S(I)=0
    0x581458237cc0 ---------A   01190  NEXT I
    0x581458237ed0 ---------A   01200  INPUT "HOW MANY PLAYERS";N
    0x581458237f50 ---------A   01210  PRINT
    0x581458238270 ---------A   01220  FOR I=1 TO N
    0x5814582384d0 ---------A   01230  PRINT "NAME OF PLAYER #";I;
    0x581458238710 ---------A   01240  INPUT A$(I)
    0x581458238850 ---------A   01250  NEXT I
    0x581458238ba0 ---------A   01260  R=R+1
    0x581458238bf0 ---------A   01270  PRINT
    0x581458238e30 ---------A   01280  PRINT "ROUND";R
    0x581458238f90 ---------A   01290  PRINT "---------"
    0x5814582392b0 ---------A   01300  FOR I=1 TO N
    0x581458239310 ---------A   01310  PRINT
    0x581458239650 ---------A   01320  PRINT A$(I)"'S THROW";
    0x5814582398a0 ---------A T 01330  INPUT T
    0x581458239e40 ---------A   01340  IF T<0 OR T>3 THEN PRINT "INPUT 1, 2, OR 3!"
    0x581458239ea0 ---------A   01350  GOTO 1330
    0x5814582409b0 ---------A   01360  END
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
int    B_int;                                     // Basic: B 
int    I_int;                                     // Basic: I 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P1_int;                                    // Basic: P1 
int    P2_int;                                    // Basic: P2 
int    P3_int;                                    // Basic: P3 
int    P4_int;                                    // Basic: P4 
int    R_int;                                     // Basic: R 
int    S_int_arr[20];                             // Basic: S 
int    T_int;                                     // Basic: T 
int    U_int;                                     // Basic: U 
int    W_int_arr[10];                             // Basic: W 
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
    // 01000 PRINT TAB(32);"BULLSEYE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,32);strcat(buf,"BULLSEYE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "IN THIS GAME, UP TO 20 PLAYERS THROW DARTS AT A TARGET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN THIS GAME, UP TO 20 PLAYERS THROW DARTS AT A TARGET");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "WITH 10, 20, 30, AND 1060 POINT ZONES.  THE OBJECTIVE IS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WITH 10, 20, 30, AND 40 POINT ZONES.  THE OBJECTIVE IS");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "TO GET 200 POINTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO GET 200 POINTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "THROW",TAB(20);"DESCRIPTION";TAB(45);"PROBABLE SCORE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THROW");b2c_TAB(buf,20);strcat(buf,"DESCRIPTION");b2c_TAB(buf,45);strcat(buf,"PROBABLE SCORE");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT" 1";TAB(20);"FAST OVERARM";TAB(45);"BULLSEYE OR COMPLETE MISS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 1");b2c_TAB(buf,20);strcat(buf,"FAST OVERARM");b2c_TAB(buf,45);strcat(buf,"BULLSEYE OR COMPLETE MISS");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT" 2";TAB(20);"CONTROLLED OVERARM";TAB(45);"10, 20 OR 30 POINTS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 2");b2c_TAB(buf,20);strcat(buf,"CONTROLLED OVERARM");b2c_TAB(buf,45);strcat(buf,"10, 20 OR 30 POINTS");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT" 3";TAB(20);"UNDERARM";TAB(45);"ANYTHING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 3");b2c_TAB(buf,20);strcat(buf,"UNDERARM");b2c_TAB(buf,45);strcat(buf,"ANYTHING");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 DIM A$(20),S(20),W(10)
    // 01150 M=0
    M_int = 0;
    // 01160 R=0
    R_int = 0;
    // 01170 FOR I=1 TO 20
    for(I_int=1;I_int<=20;I_int++){
        // 01180 S(I)=0
        S_int_arr[I_int] = 0;
        // 01190 NEXT I
        int dummy_1190=0; // Ignore this line.
    }; // End-For(I_int)
    // 01200 INPUT "HOW MANY PLAYERS";N
    // Start of Basic INPUT statement 01200
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"HOW MANY PLAYERS");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&N_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01200
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 01230 PRINT "NAME OF PLAYER #";I;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NAME OF PLAYER #"); b2c_INT(buf,I_int);fputs(buf,fh); };
        // 01240 INPUT A$(I)
        // Start of Basic INPUT statement 01240
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtos(&A_str_arr[I_int],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01240
        // 01250 NEXT I
        int dummy_1250=0; // Ignore this line.
    }; // End-For(I_int)
    // 01260 R=R+1
    R_int = R_int+1;
    // 01270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT "ROUND";R
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ROUND"); b2c_INT(buf,R_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT "---------"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"---------");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 01310 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01320 PRINT A$(I)"'S THROW";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[I_int]);strcat(buf,"'S THROW");fputs(buf,fh); };

  Lbl_01330:
        // 01330 INPUT T
        // Start of Basic INPUT statement 01330
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&T_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01330
        // 01340 IF T<0 OR T>3 THEN PRINT "INPUT 1, 2, OR 3!"
        if(T_int<0||T_int>3) {
        }
        // 01350 GOTO 1330
        goto Lbl_01330;
        // 01360 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
