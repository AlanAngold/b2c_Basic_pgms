/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/tictac1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6302324236d0 ---------A   00010  PRINT TAB(30);"TIC TAC TOE"
    0x630232423670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6302324237f0 ---------A   00030  PRINT:PRINT:PRINT
    0x630232424b80 ---------A   00050  REM
    0x630232425f30 ---------A   00100  REM   THIS PROGRAM PLAYS TIC TAC TOE
    0x630232425ff0 ---------A   00110  REM   THE MACHINE GOES FIRST
    0x630232423e40 ---------A   00120  PRINT "THE GAME BOARD IS NUMBERED:": PRINT
    0x630232425720 ---------A   00130  PRINT "1  2  3": PRINT "8  9  4": PRINT "7  6  5"
    0x630232423c80 ---------A   00140  PRINT
    0x630232425e70 ---------A   00150  REM
    0x6302324260b0 ---------A   00160  REM
    0x630232426100 ---------A   00170  REM
    0x63023242bda0 ---------A   00180  DEF FNM(X)=X-8*INT((X-1)/8)
    0x63023242bdf0 ---------A   00190  REM
    0x63023242be80 ---------A   00200  REM  MAIN PROGRAM
    0x63023242bf10 ---------A T 00210  PRINT
    0x63023242bf90 ---------A   00220  PRINT
    0x63023242c270 ---------A   00230  A=9
    0x63023242c560 ---------A   00240  M=A
    0x63023242c5d0 ---------A   00250  GOSUB 650
    0x63023242c8c0 ---------A   00260  P=M
    0x63023242cd90 ---------A   00270  B=FNM(P+1)
    0x63023242cfc0 ---------A   00280  M=B
    0x63023242d030 ---------A   00290  GOSUB 650
    0x63023242d300 ---------A   00300  Q=M
    0x63023242d750 ---------A   00310  IF Q=FNM(B+4) THEN 360
    0x63023242dc30 ---------A   00320  C=FNM(B+4)
    0x63023242de60 ---------A   00330  M=C
    0x63023242ded0 ---------A   00340  GOSUB 700
    0x63023242df40 ---------A   00350  GOTO 730
    0x63023242e350 ---------A T 00360  C=FNM(B+2)
    0x63023242e580 ---------A   00370  M=C
    0x63023242e5f0 ---------A   00380  GOSUB 650
    0x63023242ead0 ---------A   00390  R=M
    0x63023242ef20 ---------A   00400  IF R=FNM(C+4) THEN 450
    0x63023242f400 ---------A   00410  D=FNM(C+4)
    0x63023242f630 ---------A   00420  M=D
    0x63023242f6a0 ---------A   00430  GOSUB 700
    0x63023242f6f0 ---------A   00440  GOTO 730
    0x63023242fc40 ---------A T 00450  IF P/2<>INT(P/2) THEN 500
    0x630232430060 ---------A   00460  D=FNM(C+7)
    0x630232430290 ---------A   00470  M=D
    0x630232430300 ---------A   00480  GOSUB 700
    0x630232430370 ---------A   00490  GOTO 730
    0x630232430780 ---------A T 00500  D=FNM(C+3)
    0x6302324309b0 ---------A   00510  M=D
    0x630232430a20 ---------A   00520  GOSUB 650
    0x630232430d20 ---------A   00530  S=M
    0x630232431170 ---------A   00540  IF S=FNM(D+4) THEN 590
    0x630232431650 ---------A   00550  E=FNM(D+4)
    0x630232431880 ---------A   00560  M=E
    0x6302324318f0 ---------A   00570  GOSUB 700
    0x630232431960 ---------A   00580  REM
    0x630232431d90 ---------A T 00590  E=FNM(D+6)
    0x630232431fc0 ---------A   00600  M=E
    0x630232432040 ---------A   00610  GOSUB 700
    0x630232432190 ---------A   00620  PRINT "THE GAME IS A DRAW."
    0x630232432210 ---------A   00630  GOTO 210
    0x630232432280 ---------B   00640  REM
    0x630232432310 ---------B G 00650  GOSUB 700
    0x630232432480 ---------B   00660  PRINT "YOUR MOVE";
    0x6302324325e0 ---------B   00670  INPUT M
    0x630232432640 ---------B   00680  RETURN
    0x6302324328b0 ---------C G 00700  PRINT "COMPUTER MOVES";M
    0x630232432910 ---------C   00710  RETURN
    0x630232432da0 ---------A   00720  REM
    0x630232432f20 ---------A T 00730  PRINT "AND WINS ********"
    0x630232432fa0 ---------A   00740  GOTO 210
    0x630232432ff0 ---------A   00750  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00210      00630T, 00740T
     00360      00310T
     00450      00400T
     00500      00450T
     00590      00540T
     00650      00250G, 00290G, 00380G, 00520G
     00700      00340G, 00430G, 00480G, 00570G, 00610G, 00650G
     00730      00350T, 00440T, 00490T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x6302324236d0 (00010)   0x6302324236d0 (00010)   0x630232432ff0 (00750)   0x630232432ff0 (00750)   
   B) 0x630232432280 (00640)   0x630232432310 (00650)   0x630232432640 (00680)   0x630232432640 (00680)   
   C) 0x6302324328b0 (00700)   0x6302324328b0 (00700)   0x630232432910 (00710)   0x630232432910 (00710)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/tictac1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6302324236d0 ---------A   00010  PRINT TAB(30);"TIC TAC TOE"
    0x630232423670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6302324142b0 ----------   00030  PRINT
    0x6302324239e0 ----------        a PRINT
    0x6302324237f0 ---------A        b PRINT
    0x630232424b80 ---------A   00050  REM
    0x630232425f30 ---------A   00100  REM   THIS PROGRAM PLAYS TIC TAC TOE
    0x630232425ff0 ---------A   00110  REM   THE MACHINE GOES FIRST
    0x630232424040 ----------   00120  PRINT "THE GAME BOARD IS NUMBERED:"
    0x630232423e40 ---------A        a PRINT
    0x630232424480 ----------   00130  PRINT "1  2  3"
    0x6302324256a0 ----------        a PRINT "8  9  4"
    0x630232425720 ---------A        b PRINT "7  6  5"
    0x630232423c80 ---------A   00140  PRINT
    0x630232425e70 ---------A   00150  REM
    0x6302324260b0 ---------A   00160  REM
    0x630232426100 ---------A   00170  REM
    0x63023242bda0 ---------A   00180  DEF FNM(X)=X-8*INT((X-1)/8)
    0x63023242bdf0 ---------A   00190  REM
    0x63023242be80 ---------A   00200  REM  MAIN PROGRAM
    0x63023242bf10 ---------A T 00210  PRINT
    0x63023242bf90 ---------A   00220  PRINT
    0x63023242c270 ---------A   00230  A=9
    0x63023242c560 ---------A   00240  M=A
    0x63023242c5d0 ---------A   00250  GOSUB 650
    0x63023242c8c0 ---------A   00260  P=M
    0x63023242cd90 ---------A   00270  B=FNM(P+1)
    0x63023242cfc0 ---------A   00280  M=B
    0x63023242d030 ---------A   00290  GOSUB 650
    0x63023242d300 ---------A   00300  Q=M
    0x63023242d750 ---------A   00310  IF Q=FNM(B+4) THEN 360
    0x63023242dc30 ---------A   00320  C=FNM(B+4)
    0x63023242de60 ---------A   00330  M=C
    0x63023242ded0 ---------A   00340  GOSUB 700
    0x63023242df40 ---------A   00350  GOTO 730
    0x63023242e350 ---------A T 00360  C=FNM(B+2)
    0x63023242e580 ---------A   00370  M=C
    0x63023242e5f0 ---------A   00380  GOSUB 650
    0x63023242ead0 ---------A   00390  R=M
    0x63023242ef20 ---------A   00400  IF R=FNM(C+4) THEN 450
    0x63023242f400 ---------A   00410  D=FNM(C+4)
    0x63023242f630 ---------A   00420  M=D
    0x63023242f6a0 ---------A   00430  GOSUB 700
    0x63023242f6f0 ---------A   00440  GOTO 730
    0x63023242fc40 ---------A T 00450  IF P/2<>INT(P/2) THEN 500
    0x630232430060 ---------A   00460  D=FNM(C+7)
    0x630232430290 ---------A   00470  M=D
    0x630232430300 ---------A   00480  GOSUB 700
    0x630232430370 ---------A   00490  GOTO 730
    0x630232430780 ---------A T 00500  D=FNM(C+3)
    0x6302324309b0 ---------A   00510  M=D
    0x630232430a20 ---------A   00520  GOSUB 650
    0x630232430d20 ---------A   00530  S=M
    0x630232431170 ---------A   00540  IF S=FNM(D+4) THEN 590
    0x630232431650 ---------A   00550  E=FNM(D+4)
    0x630232431880 ---------A   00560  M=E
    0x6302324318f0 ---------A   00570  GOSUB 700
    0x630232431960 ---------A   00580  REM
    0x630232431d90 ---------A T 00590  E=FNM(D+6)
    0x630232431fc0 ---------A   00600  M=E
    0x630232432040 ---------A   00610  GOSUB 700
    0x630232432190 ---------A   00620  PRINT "THE GAME IS A DRAW."
    0x630232432210 ---------A   00630  GOTO 210
    0x630232432280 ---------B   00640  REM
    0x630232432310 ---------B G 00650  GOSUB 700
    0x630232432480 ---------B   00660  PRINT "YOUR MOVE";
    0x6302324325e0 ---------B   00670  INPUT M
    0x630232432640 ---------B   00680  RETURN
    0x6302324328b0 ---------C G 00700  PRINT "COMPUTER MOVES";M
    0x630232432910 ---------C   00710  RETURN
    0x630232432da0 ---------A   00720  REM
    0x630232432f20 ---------A T 00730  PRINT "AND WINS ********"
    0x630232432fa0 ---------A   00740  GOTO 210
    0x630232432ff0 ---------A   00750  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/tictac1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6302324236d0 ---------A   01000  PRINT TAB(30);"TIC TAC TOE"
    0x630232423670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6302324142b0 ----------   01020  PRINT
    0x6302324239e0 ----------   01030  PRINT
    0x6302324237f0 ---------A   01040  PRINT
    0x630232424b80 ---------A   01050  REM
    0x630232425f30 ---------A   01060  REM   THIS PROGRAM PLAYS TIC TAC TOE
    0x630232425ff0 ---------A   01070  REM   THE MACHINE GOES FIRST
    0x630232424040 ----------   01080  PRINT "THE GAME BOARD IS NUMBERED:"
    0x630232423e40 ---------A   01090  PRINT
    0x630232424480 ----------   01100  PRINT "1  2  3"
    0x6302324256a0 ----------   01110  PRINT "8  9  4"
    0x630232425720 ---------A   01120  PRINT "7  6  5"
    0x630232423c80 ---------A   01130  PRINT
    0x630232425e70 ---------A   01140  REM
    0x6302324260b0 ---------A   01150  REM
    0x630232426100 ---------A   01160  REM
    0x63023242bda0 ---------A   01170  DEF FNM(X)=X-8*INT((X-1)/8)
    0x63023242bdf0 ---------A   01180  REM
    0x63023242be80 ---------A   01190  REM  MAIN PROGRAM
    0x63023242bf10 ---------A   01200  PRINT
    0x63023242bf90 ---------A   01210  PRINT
    0x63023242c270 ---------A   01220  A=9
    0x63023242c560 ---------A   01230  M=A
    0x63023242c5d0 ---------A   01240  GOSUB 1640
    0x63023242c8c0 ---------A   01250  P=M
    0x63023242cd90 ---------A   01260  B=FNM(P+1)
    0x63023242cfc0 ---------A   01270  M=B
    0x63023242d030 ---------A   01280  GOSUB 1640
    0x63023242d300 ---------A   01290  Q=M
    0x63023242d750 ---------A   01300  IF Q=FNM(B+4) THEN 1350
    0x63023242dc30 ---------A   01310  C=FNM(B+4)
    0x63023242de60 ---------A   01320  M=C
    0x63023242ded0 ---------A   01330  GOSUB 1680
    0x63023242df40 ---------A   01340  GOTO 1710
    0x63023242e350 ---------A   01350  C=FNM(B+2)
    0x63023242e580 ---------A   01360  M=C
    0x63023242e5f0 ---------A   01370  GOSUB 1640
    0x63023242ead0 ---------A   01380  R=M
    0x63023242ef20 ---------A   01390  IF R=FNM(C+4) THEN 1440
    0x63023242f400 ---------A   01400  D=FNM(C+4)
    0x63023242f630 ---------A   01410  M=D
    0x63023242f6a0 ---------A   01420  GOSUB 1680
    0x63023242f6f0 ---------A   01430  GOTO 1710
    0x63023242fc40 ---------A   01440  IF P/2<>INT(P/2) THEN 1490
    0x630232430060 ---------A   01450  D=FNM(C+7)
    0x630232430290 ---------A   01460  M=D
    0x630232430300 ---------A   01470  GOSUB 1680
    0x630232430370 ---------A   01480  GOTO 1710
    0x630232430780 ---------A   01490  D=FNM(C+3)
    0x6302324309b0 ---------A   01500  M=D
    0x630232430a20 ---------A   01510  GOSUB 1640
    0x630232430d20 ---------A   01520  S=M
    0x630232431170 ---------A   01530  IF S=FNM(D+4) THEN 1580
    0x630232431650 ---------A   01540  E=FNM(D+4)
    0x630232431880 ---------A   01550  M=E
    0x6302324318f0 ---------A   01560  GOSUB 1680
    0x630232431960 ---------A   01570  REM
    0x630232431d90 ---------A   01580  E=FNM(D+6)
    0x630232431fc0 ---------A   01590  M=E
    0x630232432040 ---------A   01600  GOSUB 1680
    0x630232432190 ---------A   01610  PRINT "THE GAME IS A DRAW."
    0x630232432210 ---------A   01620  GOTO 1200
    0x630232432280 ---------B   01630  REM
    0x630232432310 ---------B   01640  GOSUB 1680
    0x630232432480 ---------B   01650  PRINT "YOUR MOVE";
    0x6302324325e0 ---------B   01660  INPUT M
    0x630232432640 ---------B   01670  RETURN
    0x6302324328b0 ---------C   01680  PRINT "COMPUTER MOVES";M
    0x630232432910 ---------C   01690  RETURN
    0x630232432da0 ---------A   01700  REM
    0x630232432f20 ---------A   01710  PRINT "AND WINS ********"
    0x630232432fa0 ---------A   01720  GOTO 1200
    0x630232432ff0 ---------A   01730  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01760 - 10000    8250 

 */



/*
 *  Symbol Table Listing for 'basic/tictac1.bas'
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
    D                        Integer     
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FNM             Array    Integer         {0,9} 
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
    OCT$            Function String          args=1, float  
    P                        Integer     
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
    S                        Integer     
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
 *  Listing of basic/tictac1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6302324236d0 ---------A   01000  PRINT TAB(30);"TIC TAC TOE"
    0x630232423670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6302324142b0 ---------A   01020  PRINT
    0x6302324239e0 ---------A   01030  PRINT
    0x6302324237f0 ---------A   01040  PRINT
    0x630232424b80 ---------A   01050  REM
    0x630232425f30 ---------A   01060  REM   THIS PROGRAM PLAYS TIC TAC TOE
    0x630232425ff0 ---------A   01070  REM   THE MACHINE GOES FIRST
    0x630232424040 ---------A   01080  PRINT "THE GAME BOARD IS NUMBERED:"
    0x630232423e40 ---------A   01090  PRINT
    0x630232424480 ---------A   01100  PRINT "1  2  3"
    0x6302324256a0 ---------A   01110  PRINT "8  9  4"
    0x630232425720 ---------A   01120  PRINT "7  6  5"
    0x630232423c80 ---------A   01130  PRINT
    0x630232425e70 ---------A   01140  REM
    0x6302324260b0 ---------A   01150  REM
    0x630232426100 ---------A   01160  REM
    0x63023242bda0 ---------A   01170  DEF FNM(X)=X-8*INT((X-1)/8)
    0x63023242bdf0 ---------A   01180  REM
    0x63023242be80 ---------A   01190  REM  MAIN PROGRAM
    0x63023242bf10 ---------A T 01200  PRINT
    0x63023242bf90 ---------A   01210  PRINT
    0x63023242c270 ---------A   01220  A=9
    0x63023242c560 ---------A   01230  M=A
    0x63023242c5d0 ---------A   01240  GOSUB 1680
    0x63023242c8c0 ---------A   01250  P=M
    0x63023242cd90 ---------A   01260  B=FNM(P+1)
    0x63023242cfc0 ---------A   01270  M=B
    0x63023242d030 ---------A   01280  GOSUB 1680
    0x63023242d300 ---------A   01290  Q=M
    0x63023242d750 ---------A   01300  IF Q=FNM(B+4) THEN 1350
    0x63023242dc30 ---------A   01310  C=FNM(B+4)
    0x63023242de60 ---------A   01320  M=C
    0x63023242ded0 ---------A   01330  GOSUB 1730
    0x63023242df40 ---------A   01340  GOTO 1640
    0x63023242e350 ---------A T 01350  C=FNM(B+2)
    0x63023242e580 ---------A   01360  M=C
    0x63023242e5f0 ---------A   01370  GOSUB 1680
    0x63023242ead0 ---------A   01380  R=M
    0x63023242ef20 ---------A   01390  IF R=FNM(C+4) THEN 1440
    0x63023242f400 ---------A   01400  D=FNM(C+4)
    0x63023242f630 ---------A   01410  M=D
    0x63023242f6a0 ---------A   01420  GOSUB 1730
    0x63023242f6f0 ---------A   01430  GOTO 1640
    0x63023242fc40 ---------A T 01440  IF P/2<>INT(P/2) THEN 1490
    0x630232430060 ---------A   01450  D=FNM(C+7)
    0x630232430290 ---------A   01460  M=D
    0x630232430300 ---------A   01470  GOSUB 1730
    0x630232430370 ---------A   01480  GOTO 1640
    0x630232430780 ---------A T 01490  D=FNM(C+3)
    0x6302324309b0 ---------A   01500  M=D
    0x630232430a20 ---------A   01510  GOSUB 1680
    0x630232430d20 ---------A   01520  S=M
    0x630232431170 ---------A   01530  IF S=FNM(D+4) THEN 1580
    0x630232431650 ---------A   01540  E=FNM(D+4)
    0x630232431880 ---------A   01550  M=E
    0x6302324318f0 ---------A   01560  GOSUB 1730
    0x630232431960 ---------A   01570  REM
    0x630232431d90 ---------A T 01580  E=FNM(D+6)
    0x630232431fc0 ---------A   01590  M=E
    0x630232432040 ---------A   01600  GOSUB 1730
    0x630232432190 ---------A   01610  PRINT "THE GAME IS A DRAW."
    0x630232432210 ---------A   01620  GOTO 1200
    0x630232432da0 ---------A   01630  REM
    0x630232432f20 ---------A T 01640  PRINT "AND WINS ********"
    0x630232432fa0 ---------A   01650  GOTO 1200
    0x630232432ff0 ---------A   01660  END
    0x630232432280 ---------B   01670  REM
    0x630232432310 ---------B G 01680  GOSUB 1730
    0x630232432480 ---------B   01690  PRINT "YOUR MOVE";
    0x6302324325e0 ---------B   01700  INPUT M
    0x6302324346c0 ---------B   01710  GOTO 01720
    0x630232439390 ---------B T 01720  RETURN
    0x6302324328b0 ---------C G 01730  PRINT "COMPUTER MOVES";M
    0x630232433050 ---------C   01740  GOTO 01750
    0x630232439410 ---------C T 01750  RETURN
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
int    B_int;                                     // Basic: B 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    FNM_int_arr[10];                           // Basic: FNM 
int    M_int;                                     // Basic: M 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    X_int;                                     // Basic: X 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01680();
void Routine_01730();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused X
int FNM(int X){
    int rtn=X_int-8*INT((X_int-1)/8);
    return(rtn);
}

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
    // 01670 REM

void Routine_01680(){
    // 01680 GOSUB 1730
    Routine_01730();
    // 01690 PRINT "YOUR MOVE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR MOVE");fputs(buf,fh); };
    // 01700 INPUT M
    // Start of Basic INPUT statement 01700
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01700
    // 01710 GOTO 01720
    goto Lbl_01720;

  Lbl_01720:
    // 01720 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01730(){
    // 01730 PRINT "COMPUTER MOVES";M
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER MOVES"); b2c_INT(buf,M_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01740 GOTO 01750
    goto Lbl_01750;

  Lbl_01750:
    // 01750 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(30);"TIC TAC TOE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,30);strcat(buf,"TIC TAC TOE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 REM
    // 01060 REM   THIS PROGRAM PLAYS TIC TAC TOE
    // 01070 REM   THE MACHINE GOES FIRST
    // 01080 PRINT "THE GAME BOARD IS NUMBERED:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE GAME BOARD IS NUMBERED:");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "1  2  3"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1  2  3");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "8  9  4"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"8  9  4");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "7  6  5"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"7  6  5");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 REM
    // 01150 REM
    // 01160 REM
    // 01170 DEF FNM(X)=X-8*INT((X-1)/8)
    // 01180 REM
    // 01190 REM  MAIN PROGRAM

  Lbl_01200:
    // 01200 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 A=9
    A_int = 9;
    // 01230 M=A
    M_int = A_int;
    // 01240 GOSUB 1680
    Routine_01680();
    // 01250 P=M
    P_int = M_int;
    // 01260 B=FNM(P+1)
    B_int = FNM_int_arr[P_int+1];
    // 01270 M=B
    M_int = B_int;
    // 01280 GOSUB 1680
    Routine_01680();
    // 01290 Q=M
    Q_int = M_int;
    // 01300 IF Q=FNM(B+4) THEN 1350
    if(Q_int==FNM_int_arr[B_int+4])goto Lbl_01350;
    // 01310 C=FNM(B+4)
    C_int = FNM_int_arr[B_int+4];
    // 01320 M=C
    M_int = C_int;
    // 01330 GOSUB 1730
    Routine_01730();
    // 01340 GOTO 1640
    goto Lbl_01640;

  Lbl_01350:
    // 01350 C=FNM(B+2)
    C_int = FNM_int_arr[B_int+2];
    // 01360 M=C
    M_int = C_int;
    // 01370 GOSUB 1680
    Routine_01680();
    // 01380 R=M
    R_int = M_int;
    // 01390 IF R=FNM(C+4) THEN 1440
    if(R_int==FNM_int_arr[C_int+4])goto Lbl_01440;
    // 01400 D=FNM(C+4)
    D_int = FNM_int_arr[C_int+4];
    // 01410 M=D
    M_int = D_int;
    // 01420 GOSUB 1730
    Routine_01730();
    // 01430 GOTO 1640
    goto Lbl_01640;

  Lbl_01440:
    // 01440 IF P/2<>INT(P/2) THEN 1490
    if(P_int/2!=INT(P_int/2))goto Lbl_01490;
    // 01450 D=FNM(C+7)
    D_int = FNM_int_arr[C_int+7];
    // 01460 M=D
    M_int = D_int;
    // 01470 GOSUB 1730
    Routine_01730();
    // 01480 GOTO 1640
    goto Lbl_01640;

  Lbl_01490:
    // 01490 D=FNM(C+3)
    D_int = FNM_int_arr[C_int+3];
    // 01500 M=D
    M_int = D_int;
    // 01510 GOSUB 1680
    Routine_01680();
    // 01520 S=M
    S_int = M_int;
    // 01530 IF S=FNM(D+4) THEN 1580
    if(S_int==FNM_int_arr[D_int+4])goto Lbl_01580;
    // 01540 E=FNM(D+4)
    E_int = FNM_int_arr[D_int+4];
    // 01550 M=E
    M_int = E_int;
    // 01560 GOSUB 1730
    Routine_01730();
    // 01570 REM

  Lbl_01580:
    // 01580 E=FNM(D+6)
    E_int = FNM_int_arr[D_int+6];
    // 01590 M=E
    M_int = E_int;
    // 01600 GOSUB 1730
    Routine_01730();
    // 01610 PRINT "THE GAME IS A DRAW."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE GAME IS A DRAW.");strcat(buf,"\n");fputs(buf,fh); };
    // 01620 GOTO 1200
    goto Lbl_01200;
    // 01630 REM

  Lbl_01640:
    // 01640 PRINT "AND WINS ********"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND WINS ********");strcat(buf,"\n");fputs(buf,fh); };
    // 01650 GOTO 1200
    goto Lbl_01200;
    // 01660 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
