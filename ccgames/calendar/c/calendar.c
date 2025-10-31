/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/calendar.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5bf0db7c26d0 ---------A   00010  PRINT TAB(32);"CALENDAR"
    0x5bf0db7c2670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5bf0db7c27f0 ---------A   00030  PRINT:PRINT:PRINT
    0x5bf0db7c3b80 ---------A   00100  REM     VALUES FOR 1979 - SEE NOTES
    0x5bf0db7c4f30 ---------A   00110  DIM M(12)
    0x5bf0db7c4ff0 ---------A   00120  FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x5bf0db7ca9b0 ---------A   00130  D=1: REM 1979 STARTS ON MONDAY (0=SUN, -1=MON, -2=TUES...)
    0x5bf0db7cac20 ---------A   00140  S=0
    0x5bf0db7cac70 ---------A   00150  REM     READ DAYS OF EACH MONTH
    0x5bf0db7cb240 ---------A   00160  FOR N=0 TO 12: READ M(N): NEXT N
    0x5bf0db7cb290 ---------A   00170  REM
    0x5bf0db7cb560 ---------A   00180  FOR N=1 TO 12
    0x5bf0db7cbb40 ---------A   00190  PRINT: PRINT: S=S+M(N-1)
    0x5bf0db7cbed0 ---------A   00200  PRINT "**";S;TAB(7);
    0x5bf0db7cc430 ---------A   00210  FOR I=1 TO 18: PRINT "*";: NEXT I
    0x5bf0db7ccee0 ---------A   00220  ON N GOTO 230,240,250,260,270,280,290,300,310,320,330,340
    0x5bf0db7cd0d0 ---------A T 00230  PRINT " JANUARY ";: GOTO 350
    0x5bf0db7cd2b0 ---------A T 00240  PRINT " FEBRUARY";: GOTO 350
    0x5bf0db7cd490 ---------A T 00250  PRINT "  MARCH  ";: GOTO 350
    0x5bf0db7cd670 ---------A T 00260  PRINT "  APRIL  ";: GOTO 350
    0x5bf0db7cd850 ---------A T 00270  PRINT "   MAY   ";: GOTO 350
    0x5bf0db7cda30 ---------A T 00280  PRINT "   JUNE  ";: GOTO 350
    0x5bf0db7cdc10 ---------A T 00290  PRINT "   JULY  ";: GOTO 350
    0x5bf0db7cddf0 ---------A T 00300  PRINT "  AUGUST ";: GOTO 350
    0x5bf0db7cdfd0 ---------A T 00310  PRINT "SEPTEMBER";: GOTO 350
    0x5bf0db7ce1b0 ---------A T 00320  PRINT " OCTOBER ";: GOTO 350
    0x5bf0db7ce380 ---------A T 00330  PRINT " NOVEMBER";: GOTO 350
    0x5bf0db7ce500 ---------A T 00340  PRINT " DECEMBER";
    0x5bf0db7cea60 ---------A T 00350  FOR I=1 TO 18: PRINT "*";: NEXT I
    0x5bf0db7cee00 ---------A   00360  PRINT 365-S;"**";
    0x5bf0db7cee90 ---------A   00370  REM   366-S;     ON LEAP YEARS
    0x5bf0db7cf270 ---------A   00380  PRINT CHR$(10): PRINT "     S       M       T       W";
    0x5bf0db7cf3e0 ---------A   00390  PRINT "       T       F       S"
    0x5bf0db7cf680 ---------A   00400  PRINT
    0x5bf0db7cfbe0 ---------A   00410  FOR I=1 TO 59: PRINT "*";: NEXT I
    0x5bf0db7cfc70 ---------A   00420  REM
    0x5bf0db7d0020 ---------A   00430  FOR W=1 TO 6
    0x5bf0db7d0240 ---------A   00440  PRINT CHR$(10)
    0x5bf0db7d03e0 ---------A   00450  PRINT TAB(4)
    0x5bf0db7d0460 ---------A   00460  REM
    0x5bf0db7d0810 ---------A   00470  FOR G=1 TO 7
    0x5bf0db7d0b50 ---------A   00480  D=D+1
    0x5bf0db7d0f60 ---------A   00490  D2=D-S
    0x5bf0db7d12c0 ---------A   00500  IF D2>M(N) THEN 580
    0x5bf0db7d1680 ---------A   00510  IF D2>0 THEN PRINT D2;
    0x5bf0db7d1a60 ---------A   00520  PRINT TAB(4+8*G);
    0x5bf0db7d1ba0 ---------A   00530  NEXT G
    0x5bf0db7d1c30 ---------A   00540  REM
    0x5bf0db7d1fa0 ---------A   00550  IF D2=M(N) THEN 590
    0x5bf0db7d20e0 ---------A   00560  NEXT W
    0x5bf0db7d2170 ---------A   00570  REM
    0x5bf0db7d24e0 ---------A T 00580  D=D-G
    0x5bf0db7d2610 ---------A T 00590  NEXT N
    0x5bf0db7d26a0 ---------A   00600  REM
    0x5bf0db7d2cf0 ---------A   00610  FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x5bf0db7d3910 ---------A   00620  DATA 0,31,28,31,30,31,30,31,31,30,31,30,31
    0x5bf0db7d3990 ---------A   00630  REM  0,31,29,  ..., ON LEAP YEARS
    0x5bf0db7d3a20 ---------A   00640  RUN "MENU"
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00230      00220T
     00240      00220T
     00250      00220T
     00260      00220T
     00270      00220T
     00280      00220T
     00290      00220T
     00300      00220T
     00310      00220T
     00320      00220T
     00330      00220T
     00340      00220T
     00350      00230T, 00240T, 00250T, 00260T, 00270T, 00280T, 00290T, 00300T, 
                00310T, 00320T, 00330T
     00580      00500T
     00590      00550T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5bf0db7c26d0 (00010)   0x5bf0db7c26d0 (00010)   0x5bf0db7d3a20 (00640)   0x5bf0db7d3a20 (00640)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/calendar.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5bf0db7c26d0 ---------A   00010  PRINT TAB(32);"CALENDAR"
    0x5bf0db7c2670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5bf0db7b32b0 ----------   00030  PRINT
    0x5bf0db7c29e0 ----------        a PRINT
    0x5bf0db7c27f0 ---------A        b PRINT
    0x5bf0db7c3b80 ---------A   00100  REM     VALUES FOR 1979 - SEE NOTES
    0x5bf0db7c4f30 ---------A   00110  DIM M(12)
    0x5bf0db7c2ea0 ----------   00120  FOR I=1 TO 6
    0x5bf0db7c4720 ----------        a PRINT CHR$(10);
    0x5bf0db7c4ff0 ---------A        b NEXT I
    0x5bf0db7ca920 ----------   00130  D=1
    0x5bf0db7ca9b0 ---------A        a REM 1979 STARTS ON MONDAY (0=SUN, -1=MON, -2=TUES...)
    0x5bf0db7cac20 ---------A   00140  S=0
    0x5bf0db7cac70 ---------A   00150  REM     READ DAYS OF EACH MONTH
    0x5bf0db7cafa0 ----------   00160  FOR N=0 TO 12
    0x5bf0db7c4e70 ----------        a READ M(N)
    0x5bf0db7cb240 ---------A        b NEXT N
    0x5bf0db7cb290 ---------A   00170  REM
    0x5bf0db7cb560 ---------A   00180  FOR N=1 TO 12
    0x5bf0db7cb5c0 ----------   00190  PRINT
    0x5bf0db7cb620 ----------        a PRINT
    0x5bf0db7cbb40 ---------A        b S=S+M(N-1)
    0x5bf0db7cbed0 ---------A   00200  PRINT "**";S;TAB(7);
    0x5bf0db7cc190 ----------   00210  FOR I=1 TO 18
    0x5bf0db7cc2f0 ----------        a PRINT "*";
    0x5bf0db7cc430 ---------A        b NEXT I
    0x5bf0db7ccee0 ---------A   00220  ON N GOTO 230,240,250,260,270,280,290,300,310,320,330,340
    0x5bf0db7cd040 ---------- T 00230  PRINT " JANUARY ";
    0x5bf0db7cd0d0 ---------A T      a GOTO 350
    0x5bf0db7cd220 ---------- T 00240  PRINT " FEBRUARY";
    0x5bf0db7cd2b0 ---------A T      a GOTO 350
    0x5bf0db7cd400 ---------- T 00250  PRINT "  MARCH  ";
    0x5bf0db7cd490 ---------A T      a GOTO 350
    0x5bf0db7cd5e0 ---------- T 00260  PRINT "  APRIL  ";
    0x5bf0db7cd670 ---------A T      a GOTO 350
    0x5bf0db7cd7c0 ---------- T 00270  PRINT "   MAY   ";
    0x5bf0db7cd850 ---------A T      a GOTO 350
    0x5bf0db7cd9a0 ---------- T 00280  PRINT "   JUNE  ";
    0x5bf0db7cda30 ---------A T      a GOTO 350
    0x5bf0db7cdb80 ---------- T 00290  PRINT "   JULY  ";
    0x5bf0db7cdc10 ---------A T      a GOTO 350
    0x5bf0db7cdd60 ---------- T 00300  PRINT "  AUGUST ";
    0x5bf0db7cddf0 ---------A T      a GOTO 350
    0x5bf0db7cdf40 ---------- T 00310  PRINT "SEPTEMBER";
    0x5bf0db7cdfd0 ---------A T      a GOTO 350
    0x5bf0db7ce120 ---------- T 00320  PRINT " OCTOBER ";
    0x5bf0db7ce1b0 ---------A T      a GOTO 350
    0x5bf0db7ce300 ---------- T 00330  PRINT " NOVEMBER";
    0x5bf0db7ce380 ---------A T      a GOTO 350
    0x5bf0db7ce500 ---------A T 00340  PRINT " DECEMBER";
    0x5bf0db7ce7c0 ---------- T 00350  FOR I=1 TO 18
    0x5bf0db7ce920 ---------- T      a PRINT "*";
    0x5bf0db7cea60 ---------A T      b NEXT I
    0x5bf0db7cee00 ---------A   00360  PRINT 365-S;"**";
    0x5bf0db7cee90 ---------A   00370  REM   366-S;     ON LEAP YEARS
    0x5bf0db7cf0d0 ----------   00380  PRINT CHR$(10)
    0x5bf0db7cf270 ---------A        a PRINT "     S       M       T       W";
    0x5bf0db7cf3e0 ---------A   00390  PRINT "       T       F       S"
    0x5bf0db7cf680 ---------A   00400  PRINT
    0x5bf0db7cf940 ----------   00410  FOR I=1 TO 59
    0x5bf0db7cfaa0 ----------        a PRINT "*";
    0x5bf0db7cfbe0 ---------A        b NEXT I
    0x5bf0db7cfc70 ---------A   00420  REM
    0x5bf0db7d0020 ---------A   00430  FOR W=1 TO 6
    0x5bf0db7d0240 ---------A   00440  PRINT CHR$(10)
    0x5bf0db7d03e0 ---------A   00450  PRINT TAB(4)
    0x5bf0db7d0460 ---------A   00460  REM
    0x5bf0db7d0810 ---------A   00470  FOR G=1 TO 7
    0x5bf0db7d0b50 ---------A   00480  D=D+1
    0x5bf0db7d0f60 ---------A   00490  D2=D-S
    0x5bf0db7d12c0 ---------A   00500  IF D2>M(N) THEN 580
    0x5bf0db7d1680 ---------A   00510  IF D2>0 THEN PRINT D2;
    0x5bf0db7d1a60 ---------A   00520  PRINT TAB(4+8*G);
    0x5bf0db7d1ba0 ---------A   00530  NEXT G
    0x5bf0db7d1c30 ---------A   00540  REM
    0x5bf0db7d1fa0 ---------A   00550  IF D2=M(N) THEN 590
    0x5bf0db7d20e0 ---------A   00560  NEXT W
    0x5bf0db7d2170 ---------A   00570  REM
    0x5bf0db7d24e0 ---------A T 00580  D=D-G
    0x5bf0db7d2610 ---------A T 00590  NEXT N
    0x5bf0db7d26a0 ---------A   00600  REM
    0x5bf0db7d2990 ----------   00610  FOR I=1 TO 6
    0x5bf0db7d2bb0 ----------        a PRINT CHR$(10);
    0x5bf0db7d2cf0 ---------A        b NEXT I
    0x5bf0db7d3910 ---------A   00620  DATA 0,31,28,31,30,31,30,31,31,30,31,30,31
    0x5bf0db7d3990 ---------A   00630  REM  0,31,29,  ..., ON LEAP YEARS
    0x5bf0db7d3a20 ---------A   00640  RUN "MENU"
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/calendar.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5bf0db7c26d0 ---------A   01000  PRINT TAB(32);"CALENDAR"
    0x5bf0db7c2670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5bf0db7b32b0 ----------   01020  PRINT
    0x5bf0db7c29e0 ----------   01030  PRINT
    0x5bf0db7c27f0 ---------A   01040  PRINT
    0x5bf0db7c3b80 ---------A   01050  REM     VALUES FOR 1979 - SEE NOTES
    0x5bf0db7c4f30 ---------A   01060  DIM M(12)
    0x5bf0db7c2ea0 ----------   01070  FOR I=1 TO 6
    0x5bf0db7c4720 ----------   01080  PRINT CHR$(10);
    0x5bf0db7c4ff0 ---------A   01090  NEXT I
    0x5bf0db7ca920 ----------   01100  D=1
    0x5bf0db7ca9b0 ---------A   01110  REM 1979 STARTS ON MONDAY (0=SUN, -1=MON, -2=TUES...)
    0x5bf0db7cac20 ---------A   01120  S=0
    0x5bf0db7cac70 ---------A   01130  REM     READ DAYS OF EACH MONTH
    0x5bf0db7cafa0 ----------   01140  FOR N=0 TO 12
    0x5bf0db7c4e70 ----------   01150  READ M(N)
    0x5bf0db7cb240 ---------A   01160  NEXT N
    0x5bf0db7cb290 ---------A   01170  REM
    0x5bf0db7cb560 ---------A   01180  FOR N=1 TO 12
    0x5bf0db7cb5c0 ----------   01190  PRINT
    0x5bf0db7cb620 ----------   01200  PRINT
    0x5bf0db7cbb40 ---------A   01210  S=S+M(N-1)
    0x5bf0db7cbed0 ---------A   01220  PRINT "**";S;TAB(7);
    0x5bf0db7cc190 ----------   01230  FOR I=1 TO 18
    0x5bf0db7cc2f0 ----------   01240  PRINT "*";
    0x5bf0db7cc430 ---------A   01250  NEXT I
    0x5bf0db7ccee0 ---------A   01260  ON N GOTO 11380,11420,11460,11490,1360,280,1400,300,1440,320,1480,340
    0x5bf0db7cd040 ----------   01270  PRINT " JANUARY ";
    0x5bf0db7cd0d0 ---------A   01280  GOTO 1520
    0x5bf0db7cd220 ----------   01290  PRINT " FEBRUARY";
    0x5bf0db7cd2b0 ---------A   01300  GOTO 1520
    0x5bf0db7cd400 ----------   01310  PRINT "  MARCH  ";
    0x5bf0db7cd490 ---------A   01320  GOTO 1520
    0x5bf0db7cd5e0 ----------   01330  PRINT "  APRIL  ";
    0x5bf0db7cd670 ---------A   01340  GOTO 1520
    0x5bf0db7cd7c0 ----------   01350  PRINT "   MAY   ";
    0x5bf0db7cd850 ---------A   01360  GOTO 1520
    0x5bf0db7cd9a0 ----------   01370  PRINT "   JUNE  ";
    0x5bf0db7cda30 ---------A   01380  GOTO 1520
    0x5bf0db7cdb80 ----------   01390  PRINT "   JULY  ";
    0x5bf0db7cdc10 ---------A   01400  GOTO 1520
    0x5bf0db7cdd60 ----------   01410  PRINT "  AUGUST ";
    0x5bf0db7cddf0 ---------A   01420  GOTO 1520
    0x5bf0db7cdf40 ----------   01430  PRINT "SEPTEMBER";
    0x5bf0db7cdfd0 ---------A   01440  GOTO 1520
    0x5bf0db7ce120 ----------   01450  PRINT " OCTOBER ";
    0x5bf0db7ce1b0 ---------A   01460  GOTO 1520
    0x5bf0db7ce300 ----------   01470  PRINT " NOVEMBER";
    0x5bf0db7ce380 ---------A   01480  GOTO 1520
    0x5bf0db7ce500 ---------A   01490  PRINT " DECEMBER";
    0x5bf0db7ce7c0 ----------   01500  FOR I=1 TO 18
    0x5bf0db7ce920 ----------   01510  PRINT "*";
    0x5bf0db7cea60 ---------A   01520  NEXT I
    0x5bf0db7cee00 ---------A   01530  PRINT 365-S;"**";
    0x5bf0db7cee90 ---------A   01540  REM   366-S;     ON LEAP YEARS
    0x5bf0db7cf0d0 ----------   01550  PRINT CHR$(10)
    0x5bf0db7cf270 ---------A   01560  PRINT "     S       M       T       W";
    0x5bf0db7cf3e0 ---------A   01570  PRINT "       T       F       S"
    0x5bf0db7cf680 ---------A   01580  PRINT
    0x5bf0db7cf940 ----------   01590  FOR I=1 TO 59
    0x5bf0db7cfaa0 ----------   01600  PRINT "*";
    0x5bf0db7cfbe0 ---------A   01610  NEXT I
    0x5bf0db7cfc70 ---------A   01620  REM
    0x5bf0db7d0020 ---------A   01630  FOR W=1 TO 6
    0x5bf0db7d0240 ---------A   01640  PRINT CHR$(10)
    0x5bf0db7d03e0 ---------A   01650  PRINT TAB(4)
    0x5bf0db7d0460 ---------A   01660  REM
    0x5bf0db7d0810 ---------A   01670  FOR G=1 TO 7
    0x5bf0db7d0b50 ---------A   01680  D=D+1
    0x5bf0db7d0f60 ---------A   01690  D2=D-S
    0x5bf0db7d12c0 ---------A   01700  IF D2>M(N) THEN 1780
    0x5bf0db7d1680 ---------A   01710  IF D2>0 THEN PRINT D2;
    0x5bf0db7d1a60 ---------A   01720  PRINT TAB(4+8*G);
    0x5bf0db7d1ba0 ---------A   01730  NEXT G
    0x5bf0db7d1c30 ---------A   01740  REM
    0x5bf0db7d1fa0 ---------A   01750  IF D2=M(N) THEN 1790
    0x5bf0db7d20e0 ---------A   01760  NEXT W
    0x5bf0db7d2170 ---------A   01770  REM
    0x5bf0db7d24e0 ---------A   01780  D=D-G
    0x5bf0db7d2610 ---------A   01790  NEXT N
    0x5bf0db7d26a0 ---------A   01800  REM
    0x5bf0db7d2990 ----------   01810  FOR I=1 TO 6
    0x5bf0db7d2bb0 ----------   01820  PRINT CHR$(10);
    0x5bf0db7d2cf0 ---------A   01830  NEXT I
    0x5bf0db7d3910 ---------A   01840  DATA 0,31,28,31,30,31,30,31,31,30,31,30,31
    0x5bf0db7d3990 ---------A   01850  REM  0,31,29,  ..., ON LEAP YEARS
    0x5bf0db7d3a20 ---------A   01860  RUN "MENU"
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01770 - 10000    8240 

 */



/*
 *  Symbol Table Listing for 'basic/calendar.bas'
 *
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
    D2                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
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
    M               Array    Integer         {0,11} 
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
    W                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/calendar.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5bf0db7c26d0 ---------A   01000  PRINT TAB(32);"CALENDAR"
    0x5bf0db7c2670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5bf0db7b32b0 ---------A   01020  PRINT
    0x5bf0db7c29e0 ---------A   01030  PRINT
    0x5bf0db7c27f0 ---------A   01040  PRINT
    0x5bf0db7c3b80 ---------A   01050  REM     VALUES FOR 1979 - SEE NOTES
    0x5bf0db7c4f30 ---------A   01060  DIM M(12)
    0x5bf0db7c2ea0 ---------A   01070  FOR I=1 TO 6
    0x5bf0db7c4720 ---------A   01080  PRINT CHR$(10);
    0x5bf0db7c4ff0 ---------A   01090  NEXT I
    0x5bf0db7ca920 ---------A   01100  D=1
    0x5bf0db7ca9b0 ---------A   01110  REM 1979 STARTS ON MONDAY (0=SUN, -1=MON, -2=TUES...)
    0x5bf0db7cac20 ---------A   01120  S=0
    0x5bf0db7cac70 ---------A   01130  REM     READ DAYS OF EACH MONTH
    0x5bf0db7cafa0 ---------A   01140  FOR N=0 TO 12
    0x5bf0db7c4e70 ---------A   01150  READ M(N)
    0x5bf0db7cb240 ---------A   01160  NEXT N
    0x5bf0db7cb290 ---------A   01170  REM
    0x5bf0db7cb560 ---------A   01180  FOR N=1 TO 12
    0x5bf0db7cb5c0 ---------A   01190  PRINT
    0x5bf0db7cb620 ---------A   01200  PRINT
    0x5bf0db7cbb40 ---------A   01210  S=S+M(N-1)
    0x5bf0db7cbed0 ---------A   01220  PRINT "**";S;TAB(7);
    0x5bf0db7cc190 ---------A   01230  FOR I=1 TO 18
    0x5bf0db7cc2f0 ---------A   01240  PRINT "*";
    0x5bf0db7cc430 ---------A   01250  NEXT I
    0x5bf0db7ccee0 ---------A   01260  ON N GOTO 11330,11350,11370,11390,1320,280,1340,300,1360,320,1380,340
    0x5bf0db7cd040 ---------A   01270  PRINT " JANUARY ";
    0x5bf0db7cd0d0 ---------A T 01280  GOTO 1420
    0x5bf0db7cd2b0 ---------A T 01290  GOTO 1420
    0x5bf0db7cd490 ---------A T 01300  GOTO 1420
    0x5bf0db7cd670 ---------A T 01310  GOTO 1420
    0x5bf0db7cd850 ---------A T 01320  GOTO 1420
    0x5bf0db7cda30 ---------A T 01330  GOTO 1420
    0x5bf0db7cdc10 ---------A T 01340  GOTO 1420
    0x5bf0db7cddf0 ---------A T 01350  GOTO 1420
    0x5bf0db7cdfd0 ---------A T 01360  GOTO 1420
    0x5bf0db7ce1b0 ---------A T 01370  GOTO 1420
    0x5bf0db7ce380 ---------A T 01380  GOTO 1420
    0x5bf0db7ce500 ---------A T 01390  PRINT " DECEMBER";
    0x5bf0db7ce7c0 ---------A   01400  FOR I=1 TO 18
    0x5bf0db7ce920 ---------A   01410  PRINT "*";
    0x5bf0db7cea60 ---------A T 01420  NEXT I
    0x5bf0db7cee00 ---------A   01430  PRINT 365-S;"**";
    0x5bf0db7cee90 ---------A   01440  REM   366-S;     ON LEAP YEARS
    0x5bf0db7cf0d0 ---------A   01450  PRINT CHR$(10)
    0x5bf0db7cf270 ---------A   01460  PRINT "     S       M       T       W";
    0x5bf0db7cf3e0 ---------A   01470  PRINT "       T       F       S"
    0x5bf0db7cf680 ---------A   01480  PRINT
    0x5bf0db7cf940 ---------A   01490  FOR I=1 TO 59
    0x5bf0db7cfaa0 ---------A   01500  PRINT "*";
    0x5bf0db7cfbe0 ---------A   01510  NEXT I
    0x5bf0db7cfc70 ---------A   01520  REM
    0x5bf0db7d0020 ---------A   01530  FOR W=1 TO 6
    0x5bf0db7d0240 ---------A   01540  PRINT CHR$(10)
    0x5bf0db7d03e0 ---------A   01550  PRINT TAB(4)
    0x5bf0db7d0460 ---------A   01560  REM
    0x5bf0db7d0810 ---------A   01570  FOR G=1 TO 7
    0x5bf0db7d0b50 ---------A   01580  D=D+1
    0x5bf0db7d0f60 ---------A   01590  D2=D-S
    0x5bf0db7d12c0 ---------A   01600  IF D2>M(N) THEN 1680
    0x5bf0db7d1680 ---------A   01610  IF D2>0 THEN PRINT D2;
    0x5bf0db7d1a60 ---------A   01620  PRINT TAB(4+8*G);
    0x5bf0db7d1ba0 ---------A   01630  NEXT G
    0x5bf0db7d1c30 ---------A   01640  REM
    0x5bf0db7d1fa0 ---------A   01650  IF D2=M(N) THEN 1690
    0x5bf0db7d20e0 ---------A   01660  NEXT W
    0x5bf0db7d2170 ---------A   01670  REM
    0x5bf0db7d24e0 ---------A T 01680  D=D-G
    0x5bf0db7d2610 ---------A T 01690  NEXT N
    0x5bf0db7d26a0 ---------A   01700  REM
    0x5bf0db7d2990 ---------A   01710  FOR I=1 TO 6
    0x5bf0db7d2bb0 ---------A   01720  PRINT CHR$(10);
    0x5bf0db7d2cf0 ---------A   01730  NEXT I
    0x5bf0db7d3910 ---------A   01740  DATA 0,31,28,31,30,31,30,31,31,30,31,30,31
    0x5bf0db7d3990 ---------A   01750  REM  0,31,29,  ..., ON LEAP YEARS
    0x5bf0db7d3a20 ---------A   01760  RUN "MENU"
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
char* data_01740s[]={"0","31","28","31","30","31","30","31","31","30","31","30","31"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1740, 13,data_01740s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    D_int;                                     // Basic: D 
int    D2_int;                                    // Basic: D2 
int    G_int;                                     // Basic: G 
int    I_int;                                     // Basic: I 
int    M_int_arr[12];                             // Basic: M 
int    N_int;                                     // Basic: N 
int    S_int;                                     // Basic: S 
int    W_int;                                     // Basic: W 
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
    // 01000 PRINT TAB(32);"CALENDAR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,32);strcat(buf,"CALENDAR");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 REM     VALUES FOR 1979 - SEE NOTES
    // 01060 DIM M(12)
    // 01070 FOR I=1 TO 6
    for(I_int=1;I_int<=6;I_int++){
        // 01080 PRINT CHR$(10);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(10));fputs(buf,fh); };
        // 01090 NEXT I
        int dummy_1090=0; // Ignore this line.
    }; // End-For(I_int)
    // 01100 D=1
    D_int = 1;
    // 01110 REM 1979 STARTS ON MONDAY (0=SUN, -1=MON, -2=TUES...)
    // 01120 S=0
    S_int = 0;
    // 01130 REM     READ DAYS OF EACH MONTH
    // 01140 FOR N=0 TO 12
    for(N_int=0;N_int<=12;N_int++){
        // 01150 READ M(N)
        M_int_arr[N_int] = Get_Data_Int();
        // 01160 NEXT N
        int dummy_1160=0; // Ignore this line.
    }; // End-For(N_int)
    // 01170 REM
    // 01180 FOR N=1 TO 12
    for(N_int=1;N_int<=12;N_int++){
        // 01190 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01200 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01210 S=S+M(N-1)
        S_int = S_int+M_int_arr[N_int-1];
        // 01220 PRINT "**";S;TAB(7);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"**"); b2c_INT(buf,S_int);b2c_TAB(buf,7);fputs(buf,fh); };
        // 01230 FOR I=1 TO 18
        for(I_int=1;I_int<=18;I_int++){
            // 01240 PRINT "*";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*");fputs(buf,fh); };
            // 01250 NEXT I
            int dummy_1250=0; // Ignore this line.
        }; // End-For(I_int)
        // 01260 ON N GOTO 11330,11350,11370,11390,1320,280,1340,300,1360,320,1380,340
        switch((int)(N_int)){
            case 1: goto Lbl_01280;
            case 2: goto Lbl_01290;
            case 3: goto Lbl_01300;
            case 4: goto Lbl_01310;
            case 5: goto Lbl_01320;
            case 6: goto Lbl_01330;
            case 7: goto Lbl_01340;
            case 8: goto Lbl_01350;
            case 9: goto Lbl_01360;
            case 10: goto Lbl_01370;
            case 11: goto Lbl_01380;
            case 12: goto Lbl_01390;
            default: break; 
        };
        // 01270 PRINT " JANUARY ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," JANUARY ");fputs(buf,fh); };

  Lbl_01280:
        // 01280 GOTO 1420
        goto Lbl_01420;

  Lbl_01290:
        // 01290 GOTO 1420
        goto Lbl_01420;

  Lbl_01300:
        // 01300 GOTO 1420
        goto Lbl_01420;

  Lbl_01310:
        // 01310 GOTO 1420
        goto Lbl_01420;

  Lbl_01320:
        // 01320 GOTO 1420
        goto Lbl_01420;

  Lbl_01330:
        // 01330 GOTO 1420
        goto Lbl_01420;

  Lbl_01340:
        // 01340 GOTO 1420
        goto Lbl_01420;

  Lbl_01350:
        // 01350 GOTO 1420
        goto Lbl_01420;

  Lbl_01360:
        // 01360 GOTO 1420
        goto Lbl_01420;

  Lbl_01370:
        // 01370 GOTO 1420
        goto Lbl_01420;

  Lbl_01380:
        // 01380 GOTO 1420
        goto Lbl_01420;

  Lbl_01390:
        // 01390 PRINT " DECEMBER";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," DECEMBER");fputs(buf,fh); };
        // 01400 FOR I=1 TO 18
        for(I_int=1;I_int<=18;I_int++){
            // 01410 PRINT "*";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*");fputs(buf,fh); };

  Lbl_01420:
            // 01420 NEXT I
            int dummy_1420=0; // Ignore this line.
        }; // End-For(I_int)
        // 01430 PRINT 365-S;"**";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,365-S_int);strcat(buf,"**");fputs(buf,fh); };
        // 01440 REM   366-S;     ON LEAP YEARS
        // 01450 PRINT CHR$(10)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(10));strcat(buf,"\n");fputs(buf,fh); };
        // 01460 PRINT "     S       M       T       W";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     S       M       T       W");fputs(buf,fh); };
        // 01470 PRINT "       T       F       S"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"       T       F       S");strcat(buf,"\n");fputs(buf,fh); };
        // 01480 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01490 FOR I=1 TO 59
        for(I_int=1;I_int<=59;I_int++){
            // 01500 PRINT "*";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*");fputs(buf,fh); };
            // 01510 NEXT I
            int dummy_1510=0; // Ignore this line.
        }; // End-For(I_int)
        // 01520 REM
        // 01530 FOR W=1 TO 6
        for(W_int=1;W_int<=6;W_int++){
            // 01540 PRINT CHR$(10)
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(10));strcat(buf,"\n");fputs(buf,fh); };
            // 01550 PRINT TAB(4)
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,4);fputs(buf,fh); };
            // 01560 REM
            // 01570 FOR G=1 TO 7
            for(G_int=1;G_int<=7;G_int++){
                // 01580 D=D+1
                D_int = D_int+1;
                // 01590 D2=D-S
                D2_int = D_int-S_int;
                // 01600 IF D2>M(N) THEN 1680
                if(D2_int>M_int_arr[N_int])goto Lbl_01680;
                // 01610 IF D2>0 THEN PRINT D2;
                if(D2_int>0) {
                }
                // 01620 PRINT TAB(4+8*G);
                { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,4+8*G);fputs(buf,fh); };
                // 01630 NEXT G
                int dummy_1630=0; // Ignore this line.
            }; // End-For(G_int)
            // 01640 REM
            // 01650 IF D2=M(N) THEN 1690
            if(D2_int==M_int_arr[N_int])goto Lbl_01690;
            // 01660 NEXT W
            int dummy_1660=0; // Ignore this line.
        }; // End-For(W_int)
        // 01670 REM

  Lbl_01680:
        // 01680 D=D-G
        D_int = D_int-G_int;

  Lbl_01690:
        // 01690 NEXT N
        int dummy_1690=0; // Ignore this line.
    }; // End-For(N_int)
    // 01700 REM
    // 01710 FOR I=1 TO 6
    for(I_int=1;I_int<=6;I_int++){
        // 01720 PRINT CHR$(10);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(10));fputs(buf,fh); };
        // 01730 NEXT I
        int dummy_1730=0; // Ignore this line.
    }; // End-For(I_int)
    // 01740 DATA 0,31,28,31,30,31,30,31,31,30,31,30,31
    // 01750 REM  0,31,29,  ..., ON LEAP YEARS
    // 01760 RUN "MENU"
    system("MENU");
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
