/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/reverse.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5831bb5fb6d0 ---------A   00010  PRINT TAB(32);"REVERSE"
    0x5831bb5fb670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5831bb5fdaa0 ---------A   00030  PRINT:PRINT:PRINT
    0x5831bb5fc040 ---------A   00100  PRINT "REVERSE -- A GAME OF SKILL": PRINT
    0x5831bb5fcb80 ---------A   00130  DIM A(20)
    0x5831bb5fde70 ---------A   00140  REM *** N=NUMBER OF NUMBERS
    0x5831bb5fdff0 ---------A   00150  N=9
    0x5831bb5fbea0 ---------A   00160  PRINT "DO YOU WANT THE RULES";
    0x5831bb5fc7a0 ---------A   00170  INPUT A$
    0x5831bb603960 ---------A   00180  IF A$="NO" THEN 210
    0x5831bb5fdf30 ---------A   00190  GOSUB 710
    0x5831bb5fe0b0 ---------A   00200  REM *** MAKE A RANDOM LIST A(1) TO A(N)
    0x5831bb604100 ---------A T 00210  A(1)=INT((N-1)*RND(1)+2)
    0x5831bb604490 ---------A   00220  FOR K=2 TO N
    0x5831bb604b70 ---------A T 00230  A(K)=INT(N*RND(1)+1)
    0x5831bb605000 ---------A   00240  FOR J=1 TO K-1
    0x5831bb605440 ---------A   00250  IF A(K)=A(J) THEN 230
    0x5831bb6056b0 ---------A   00260  NEXT J:NEXT K
    0x5831bb605780 ---------A   00280  REM *** PRINT ORIGINAL LIST AND START GAME
    0x5831bb605980 ---------A   00290  PRINT: PRINT "HERE WE GO ... THE LIST IS:"
    0x5831bb605c60 ---------A   00310  T=0
    0x5831bb605ce0 ---------A   00320  GOSUB 610
    0x5831bb605e60 ---------A T 00330  PRINT "HOW MANY SHALL I REVERSE";
    0x5831bb606080 ---------A   00340  INPUT R
    0x5831bb6062e0 ---------A   00350  IF R=0 THEN 520
    0x5831bb606590 ---------A   00360  IF R<=N THEN 390
    0x5831bb606860 ---------A   00370  PRINT "OOPS! TOO MANY! I CAN REVERSE AT MOST";N:GOTO 330
    0x5831bb606bb0 ---------A T 00390  T=T+1
    0x5831bb606c40 ---------A   00400  REM *** REVERSE R NUMBERS AND PRINT NEW LIST
    0x5831bb607130 ---------A   00410  FOR K=1 TO INT(R/2)
    0x5831bb607510 ---------A   00420  Z=A(K)
    0x5831bb607b20 ---------A   00430  A(K)=A(R-K+1)
    0x5831bb608050 ---------A   00440  A(R-K+1)=Z
    0x5831bb608390 ---------A   00450  NEXT K
    0x5831bb608430 ---------A   00460  GOSUB 610
    0x5831bb6084a0 ---------A   00470  REM *** CHECK FOR A WIN
    0x5831bb6087b0 ---------A   00480  FOR K=1 TO N
    0x5831bb608b10 ---------A   00490  IF A(K)<>K THEN 330
    0x5831bb608c50 ---------A   00500  NEXT K
    0x5831bb609040 ---------A   00510  PRINT "YOU WON IT IN";T;"MOVES!!!":PRINT
    0x5831bb6090d0 ---------A T 00520  PRINT
    0x5831bb609250 ---------A   00530  PRINT "TRY AGAIN (YES OR NO)";
    0x5831bb6093c0 ---------A   00540  INPUT A$
    0x5831bb609660 ---------A   00550  IF A$="YES" THEN 210
    0x5831bb6098a0 ---------A   00560  PRINT: PRINT "O.K. HOPE YOU HAD FUN!!":GOTO 999
    0x5831bb609920 ---------B   00600  REM *** SUBROUTINE TO PRINT LIST
    0x5831bb60a010 ---------B G 00610  PRINT:FOR K=1 TO N:PRINT A(K);:NEXT K
    0x5831bb60a140 ---------B   00650  PRINT:PRINT:RETURN
    0x5831bb60a1f0 ---------C   00700  REM *** SUBROUTINE TO PRINT THE RULES
    0x5831bb60a440 ---------C G 00710  PRINT:PRINT "THIS IS THE GAME OF 'REVERSE'.  TO WIN, ALL YOU HAVE"
    0x5831bb60a7f0 ---------C   00720  PRINT "TO DO IS ARRANGE A LIST OF NUMBERS (1 THROUGH";N;")"
    0x5831bb60a9a0 ---------C   00730  PRINT "IN NUMERICAL ORDER FROM LEFT TO RIGHT.  TO MOVE, YOU"
    0x5831bb60ab50 ---------C   00740  PRINT "TELL ME HOW MANY NUMBERS (COUNTING FROM THE LEFT) TO"
    0x5831bb60ace0 ---------C   00750  PRINT "REVERSE.  FOR EXAMPLE, IF THE CURRENT LIST IS:"
    0x5831bb60aed0 ---------C   00760  PRINT:PRINT "2 3 4 5 1 6 7 8 9"
    0x5831bb60b0c0 ---------C   00770  PRINT:PRINT "AND YOU REVERSE 4, THE RESULT WILL BE:"
    0x5831bb60b2a0 ---------C   00780  PRINT:PRINT "5 4 3 2 1 6 7 8 9"
    0x5831bb60b490 ---------C   00790  PRINT:PRINT "NOW IF YOU REVERSE 5, YOU WIN!"
    0x5831bb60b6d0 ---------C   00800  PRINT:PRINT "1 2 3 4 5 6 7 8 9":PRINT
    0x5831bb60b870 ---------C   00810  PRINT "NO DOUBT YOU WILL LIKE THIS GAME, BUT"
    0x5831bb60ba90 ---------C   00820  PRINT "IF YOU WANT TO QUIT, REVERSE 0 (ZERO).":PRINT: RETURN
    0x5831bb60baf0 ---------A T 00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00210      00180T, 00550T
     00230      00250T
     00330      00370T, 00490T
     00390      00360T
     00520      00350T
     00610      00320G, 00460G
     00710      00190G
     00999      00560T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5831bb5fb6d0 (00010)   0x5831bb5fb6d0 (00010)   0x5831bb60baf0 (00999)   0x5831bb60baf0 (00999)   
   B) 0x5831bb609920 (00600)   0x5831bb60a010 (00610)   0x5831bb60a140 (00650)   0x5831bb60a140 (00650)   
   C) 0x5831bb60a1f0 (00700)   0x5831bb60a440 (00710)   0x5831bb60ba90 (00820)   0x5831bb60ba90 (00820)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/reverse.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5831bb5fb6d0 ---------A   00010  PRINT TAB(32);"REVERSE"
    0x5831bb5fb670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5831bb5ec2b0 ----------   00030  PRINT
    0x5831bb5fb9e0 ----------        a PRINT
    0x5831bb5fdaa0 ---------A        b PRINT
    0x5831bb5fdb00 ----------   00100  PRINT "REVERSE -- A GAME OF SKILL"
    0x5831bb5fc040 ---------A        a PRINT
    0x5831bb5fcb80 ---------A   00130  DIM A(20)
    0x5831bb5fde70 ---------A   00140  REM *** N=NUMBER OF NUMBERS
    0x5831bb5fdff0 ---------A   00150  N=9
    0x5831bb5fbea0 ---------A   00160  PRINT "DO YOU WANT THE RULES";
    0x5831bb5fc7a0 ---------A   00170  INPUT A$
    0x5831bb603960 ---------A   00180  IF A$="NO" THEN 210
    0x5831bb5fdf30 ---------A   00190  GOSUB 710
    0x5831bb5fe0b0 ---------A   00200  REM *** MAKE A RANDOM LIST A(1) TO A(N)
    0x5831bb604100 ---------A T 00210  A(1)=INT((N-1)*RND(1)+2)
    0x5831bb604490 ---------A   00220  FOR K=2 TO N
    0x5831bb604b70 ---------A T 00230  A(K)=INT(N*RND(1)+1)
    0x5831bb605000 ---------A   00240  FOR J=1 TO K-1
    0x5831bb605440 ---------A   00250  IF A(K)=A(J) THEN 230
    0x5831bb605580 ----------   00260  NEXT J
    0x5831bb6056b0 ---------A        a NEXT K
    0x5831bb605780 ---------A   00280  REM *** PRINT ORIGINAL LIST AND START GAME
    0x5831bb605810 ----------   00290  PRINT
    0x5831bb605980 ---------A        a PRINT "HERE WE GO ... THE LIST IS:"
    0x5831bb605c60 ---------A   00310  T=0
    0x5831bb605ce0 ---------A   00320  GOSUB 610
    0x5831bb605e60 ---------A T 00330  PRINT "HOW MANY SHALL I REVERSE";
    0x5831bb606080 ---------A   00340  INPUT R
    0x5831bb6062e0 ---------A   00350  IF R=0 THEN 520
    0x5831bb606590 ---------A   00360  IF R<=N THEN 390
    0x5831bb6067e0 ----------   00370  PRINT "OOPS! TOO MANY! I CAN REVERSE AT MOST";N
    0x5831bb606860 ---------A        a GOTO 330
    0x5831bb606bb0 ---------A T 00390  T=T+1
    0x5831bb606c40 ---------A   00400  REM *** REVERSE R NUMBERS AND PRINT NEW LIST
    0x5831bb607130 ---------A   00410  FOR K=1 TO INT(R/2)
    0x5831bb607510 ---------A   00420  Z=A(K)
    0x5831bb607b20 ---------A   00430  A(K)=A(R-K+1)
    0x5831bb608050 ---------A   00440  A(R-K+1)=Z
    0x5831bb608390 ---------A   00450  NEXT K
    0x5831bb608430 ---------A   00460  GOSUB 610
    0x5831bb6084a0 ---------A   00470  REM *** CHECK FOR A WIN
    0x5831bb6087b0 ---------A   00480  FOR K=1 TO N
    0x5831bb608b10 ---------A   00490  IF A(K)<>K THEN 330
    0x5831bb608c50 ---------A   00500  NEXT K
    0x5831bb608fc0 ----------   00510  PRINT "YOU WON IT IN";T;"MOVES!!!"
    0x5831bb609040 ---------A        a PRINT
    0x5831bb6090d0 ---------A T 00520  PRINT
    0x5831bb609250 ---------A   00530  PRINT "TRY AGAIN (YES OR NO)";
    0x5831bb6093c0 ---------A   00540  INPUT A$
    0x5831bb609660 ---------A   00550  IF A$="YES" THEN 210
    0x5831bb6096c0 ----------   00560  PRINT
    0x5831bb609810 ----------        a PRINT "O.K. HOPE YOU HAD FUN!!"
    0x5831bb6098a0 ---------A        b GOTO 999
    0x5831bb609920 ---------B   00600  REM *** SUBROUTINE TO PRINT LIST
    0x5831bb6099b0 ---------- G 00610  PRINT
    0x5831bb609c90 ---------- G      a FOR K=1 TO N
    0x5831bb609ed0 ---------- G      b PRINT A(K);
    0x5831bb60a010 ---------B G      c NEXT K
    0x5831bb60a080 ----------   00650  PRINT
    0x5831bb60a0e0 ----------        a PRINT
    0x5831bb60a140 ---------B        b RETURN
    0x5831bb60a1f0 ---------C   00700  REM *** SUBROUTINE TO PRINT THE RULES
    0x5831bb60a290 ---------- G 00710  PRINT
    0x5831bb60a440 ---------C G      a PRINT "THIS IS THE GAME OF 'REVERSE'.  TO WIN, ALL YOU HAVE"
    0x5831bb60a7f0 ---------C   00720  PRINT "TO DO IS ARRANGE A LIST OF NUMBERS (1 THROUGH";N;")"
    0x5831bb60a9a0 ---------C   00730  PRINT "IN NUMERICAL ORDER FROM LEFT TO RIGHT.  TO MOVE, YOU"
    0x5831bb60ab50 ---------C   00740  PRINT "TELL ME HOW MANY NUMBERS (COUNTING FROM THE LEFT) TO"
    0x5831bb60ace0 ---------C   00750  PRINT "REVERSE.  FOR EXAMPLE, IF THE CURRENT LIST IS:"
    0x5831bb60ad40 ----------   00760  PRINT
    0x5831bb60aed0 ---------C        a PRINT "2 3 4 5 1 6 7 8 9"
    0x5831bb60af30 ----------   00770  PRINT
    0x5831bb60b0c0 ---------C        a PRINT "AND YOU REVERSE 4, THE RESULT WILL BE:"
    0x5831bb60b120 ----------   00780  PRINT
    0x5831bb60b2a0 ---------C        a PRINT "5 4 3 2 1 6 7 8 9"
    0x5831bb60b300 ----------   00790  PRINT
    0x5831bb60b490 ---------C        a PRINT "NOW IF YOU REVERSE 5, YOU WIN!"
    0x5831bb60b4f0 ----------   00800  PRINT
    0x5831bb60b630 ----------        a PRINT "1 2 3 4 5 6 7 8 9"
    0x5831bb60b6d0 ---------C        b PRINT
    0x5831bb60b870 ---------C   00810  PRINT "NO DOUBT YOU WILL LIKE THIS GAME, BUT"
    0x5831bb60b9d0 ----------   00820  PRINT "IF YOU WANT TO QUIT, REVERSE 0 (ZERO)."
    0x5831bb60ba30 ----------        a PRINT
    0x5831bb60ba90 ---------C        b RETURN
    0x5831bb60baf0 ---------A T 00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/reverse.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5831bb5fb6d0 ---------A   01000  PRINT TAB(32);"REVERSE"
    0x5831bb5fb670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5831bb5ec2b0 ----------   01020  PRINT
    0x5831bb5fb9e0 ----------   01030  PRINT
    0x5831bb5fdaa0 ---------A   01040  PRINT
    0x5831bb5fdb00 ----------   01050  PRINT "REVERSE -- A GAME OF SKILL"
    0x5831bb5fc040 ---------A   01060  PRINT
    0x5831bb5fcb80 ---------A   01070  DIM A(20)
    0x5831bb5fde70 ---------A   01080  REM *** N=NUMBER OF NUMBERS
    0x5831bb5fdff0 ---------A   01090  N=9
    0x5831bb5fbea0 ---------A   01100  PRINT "DO YOU WANT THE RULES";
    0x5831bb5fc7a0 ---------A   01110  INPUT A$
    0x5831bb603960 ---------A   01120  IF A$="NO" THEN 1150
    0x5831bb5fdf30 ---------A   01130  GOSUB 1640
    0x5831bb5fe0b0 ---------A   01140  REM *** MAKE A RANDOM LIST A(1) TO A(N)
    0x5831bb604100 ---------A   01150  A(1)=INT((N-1)*RND(1)+2)
    0x5831bb604490 ---------A   01160  FOR K=2 TO N
    0x5831bb604b70 ---------A   01170  A(K)=INT(N*RND(1)+1)
    0x5831bb605000 ---------A   01180  FOR J=1 TO K-1
    0x5831bb605440 ---------A   01190  IF A(K)=A(J) THEN 1170
    0x5831bb605580 ----------   01200  NEXT J
    0x5831bb6056b0 ---------A   01210  NEXT K
    0x5831bb605780 ---------A   01220  REM *** PRINT ORIGINAL LIST AND START GAME
    0x5831bb605810 ----------   01230  PRINT
    0x5831bb605980 ---------A   01240  PRINT "HERE WE GO ... THE LIST IS:"
    0x5831bb605c60 ---------A   01250  T=0
    0x5831bb605ce0 ---------A   01260  GOSUB 1580
    0x5831bb605e60 ---------A   01270  PRINT "HOW MANY SHALL I REVERSE";
    0x5831bb606080 ---------A   01280  INPUT R
    0x5831bb6062e0 ---------A   01290  IF R=0 THEN 1470
    0x5831bb606590 ---------A   01300  IF R<=N THEN 1330
    0x5831bb6067e0 ----------   01310  PRINT "OOPS! TOO MANY! I CAN REVERSE AT MOST";N
    0x5831bb606860 ---------A   01320  GOTO 1270
    0x5831bb606bb0 ---------A   01330  T=T+1
    0x5831bb606c40 ---------A   01340  REM *** REVERSE R NUMBERS AND PRINT NEW LIST
    0x5831bb607130 ---------A   01350  FOR K=1 TO INT(R/2)
    0x5831bb607510 ---------A   01360  Z=A(K)
    0x5831bb607b20 ---------A   01370  A(K)=A(R-K+1)
    0x5831bb608050 ---------A   01380  A(R-K+1)=Z
    0x5831bb608390 ---------A   01390  NEXT K
    0x5831bb608430 ---------A   01400  GOSUB 1580
    0x5831bb6084a0 ---------A   01410  REM *** CHECK FOR A WIN
    0x5831bb6087b0 ---------A   01420  FOR K=1 TO N
    0x5831bb608b10 ---------A   01430  IF A(K)<>K THEN 1270
    0x5831bb608c50 ---------A   01440  NEXT K
    0x5831bb608fc0 ----------   01450  PRINT "YOU WON IT IN";T;"MOVES!!!"
    0x5831bb609040 ---------A   01460  PRINT
    0x5831bb6090d0 ---------A   01470  PRINT
    0x5831bb609250 ---------A   01480  PRINT "TRY AGAIN (YES OR NO)";
    0x5831bb6093c0 ---------A   01490  INPUT A$
    0x5831bb609660 ---------A   01500  IF A$="YES" THEN 1150
    0x5831bb6096c0 ----------   01510  PRINT
    0x5831bb609810 ----------   01520  PRINT "O.K. HOPE YOU HAD FUN!!"
    0x5831bb6098a0 ---------A   01530  GOTO 1840
    0x5831bb609920 ---------B   01540  REM *** SUBROUTINE TO PRINT LIST
    0x5831bb6099b0 ----------   01550  PRINT
    0x5831bb609c90 ----------   01560  FOR K=1 TO N
    0x5831bb609ed0 ----------   01570  PRINT A(K);
    0x5831bb60a010 ---------B   01580  NEXT K
    0x5831bb60a080 ----------   01590  PRINT
    0x5831bb60a0e0 ----------   01600  PRINT
    0x5831bb60a140 ---------B   01610  RETURN
    0x5831bb60a1f0 ---------C   01620  REM *** SUBROUTINE TO PRINT THE RULES
    0x5831bb60a290 ----------   01630  PRINT
    0x5831bb60a440 ---------C   01640  PRINT "THIS IS THE GAME OF 'REVERSE'.  TO WIN, ALL YOU HAVE"
    0x5831bb60a7f0 ---------C   01650  PRINT "TO DO IS ARRANGE A LIST OF NUMBERS (1 THROUGH";N;")"
    0x5831bb60a9a0 ---------C   01660  PRINT "IN NUMERICAL ORDER FROM LEFT TO RIGHT.  TO MOVE, YOU"
    0x5831bb60ab50 ---------C   01670  PRINT "TELL ME HOW MANY NUMBERS (COUNTING FROM THE LEFT) TO"
    0x5831bb60ace0 ---------C   01680  PRINT "REVERSE.  FOR EXAMPLE, IF THE CURRENT LIST IS:"
    0x5831bb60ad40 ----------   01690  PRINT
    0x5831bb60aed0 ---------C   01700  PRINT "2 3 4 5 1 6 7 8 9"
    0x5831bb60af30 ----------   01710  PRINT
    0x5831bb60b0c0 ---------C   01720  PRINT "AND YOU REVERSE 4, THE RESULT WILL BE:"
    0x5831bb60b120 ----------   01730  PRINT
    0x5831bb60b2a0 ---------C   01740  PRINT "5 4 3 2 1 6 7 8 9"
    0x5831bb60b300 ----------   01750  PRINT
    0x5831bb60b490 ---------C   01760  PRINT "NOW IF YOU REVERSE 5, YOU WIN!"
    0x5831bb60b4f0 ----------   01770  PRINT
    0x5831bb60b630 ----------   01780  PRINT "1 2 3 4 5 6 7 8 9"
    0x5831bb60b6d0 ---------C   01790  PRINT
    0x5831bb60b870 ---------C   01800  PRINT "NO DOUBT YOU WILL LIKE THIS GAME, BUT"
    0x5831bb60b9d0 ----------   01810  PRINT "IF YOU WANT TO QUIT, REVERSE 0 (ZERO)."
    0x5831bb60ba30 ----------   01820  PRINT
    0x5831bb60ba90 ---------C   01830  RETURN
    0x5831bb60baf0 ---------A   01840  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01830 - 10000    8180 

 */



/*
 *  Symbol Table Listing for 'basic/reverse.bas'
 *
    A               Array    Integer         {0,19} 
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
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K                        Integer     
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
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
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
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/reverse.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5831bb5fb6d0 ---------A   01000  PRINT TAB(32);"REVERSE"
    0x5831bb5fb670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5831bb5ec2b0 ---------A   01020  PRINT
    0x5831bb5fb9e0 ---------A   01030  PRINT
    0x5831bb5fdaa0 ---------A   01040  PRINT
    0x5831bb5fdb00 ---------A   01050  PRINT "REVERSE -- A GAME OF SKILL"
    0x5831bb5fc040 ---------A   01060  PRINT
    0x5831bb5fcb80 ---------A   01070  DIM A(20)
    0x5831bb5fde70 ---------A   01080  REM *** N=NUMBER OF NUMBERS
    0x5831bb5fdff0 ---------A   01090  N=9
    0x5831bb5fbea0 ---------A   01100  PRINT "DO YOU WANT THE RULES";
    0x5831bb5fc7a0 ---------A   01110  INPUT A$
    0x5831bb603960 ---------A   01120  IF A$="NO" THEN 1150
    0x5831bb5fdf30 ---------A   01130  GOSUB 1620
    0x5831bb5fe0b0 ---------A   01140  REM *** MAKE A RANDOM LIST A(1) TO A(N)
    0x5831bb604100 ---------A T 01150  A(1)=INT((N-1)*RND(1)+2)
    0x5831bb604490 ---------A   01160  FOR K=2 TO N
    0x5831bb604b70 ---------A T 01170  A(K)=INT(N*RND(1)+1)
    0x5831bb605000 ---------A   01180  FOR J=1 TO K-1
    0x5831bb605440 ---------A   01190  IF A(K)=A(J) THEN 1170
    0x5831bb605580 ---------A   01200  NEXT J
    0x5831bb6056b0 ---------A   01210  NEXT K
    0x5831bb605780 ---------A   01220  REM *** PRINT ORIGINAL LIST AND START GAME
    0x5831bb605810 ---------A   01230  PRINT
    0x5831bb605980 ---------A   01240  PRINT "HERE WE GO ... THE LIST IS:"
    0x5831bb605c60 ---------A   01250  T=0
    0x5831bb605ce0 ---------A   01260  GOSUB 1570
    0x5831bb605e60 ---------A T 01270  PRINT "HOW MANY SHALL I REVERSE";
    0x5831bb606080 ---------A   01280  INPUT R
    0x5831bb6062e0 ---------A   01290  IF R=0 THEN 1470
    0x5831bb606590 ---------A   01300  IF R<=N THEN 1330
    0x5831bb6067e0 ---------A   01310  PRINT "OOPS! TOO MANY! I CAN REVERSE AT MOST";N
    0x5831bb606860 ---------A   01320  GOTO 1270
    0x5831bb606bb0 ---------A T 01330  T=T+1
    0x5831bb606c40 ---------A   01340  REM *** REVERSE R NUMBERS AND PRINT NEW LIST
    0x5831bb607130 ---------A   01350  FOR K=1 TO INT(R/2)
    0x5831bb607510 ---------A   01360  Z=A(K)
    0x5831bb607b20 ---------A   01370  A(K)=A(R-K+1)
    0x5831bb608050 ---------A   01380  A(R-K+1)=Z
    0x5831bb608390 ---------A   01390  NEXT K
    0x5831bb608430 ---------A   01400  GOSUB 1570
    0x5831bb6084a0 ---------A   01410  REM *** CHECK FOR A WIN
    0x5831bb6087b0 ---------A   01420  FOR K=1 TO N
    0x5831bb608b10 ---------A   01430  IF A(K)<>K THEN 1270
    0x5831bb608c50 ---------A   01440  NEXT K
    0x5831bb608fc0 ---------A   01450  PRINT "YOU WON IT IN";T;"MOVES!!!"
    0x5831bb609040 ---------A   01460  PRINT
    0x5831bb6090d0 ---------A T 01470  PRINT
    0x5831bb609250 ---------A   01480  PRINT "TRY AGAIN (YES OR NO)";
    0x5831bb6093c0 ---------A   01490  INPUT A$
    0x5831bb609660 ---------A   01500  IF A$="YES" THEN 1150
    0x5831bb6096c0 ---------A   01510  PRINT
    0x5831bb609810 ---------A   01520  PRINT "O.K. HOPE YOU HAD FUN!!"
    0x5831bb6098a0 ---------A   01530  GOTO 1560
    0x5831bb609920 ---------A   01540  REM *** SUBROUTINE TO PRINT LIST
    0x5831bb60a1f0 ---------A   01550  REM *** SUBROUTINE TO PRINT THE RULES
    0x5831bb60baf0 ---------A T 01560  END
    0x5831bb60a010 ---------B G 01570  NEXT K
    0x5831bb60a080 ---------B   01580  PRINT
    0x5831bb60a0e0 ---------B   01590  PRINT
    0x5831bb6111f0 ---------B   01600  GOTO 01610
    0x5831bb6128e0 ---------B T 01610  RETURN
    0x5831bb60a440 ---------C G 01620  PRINT "THIS IS THE GAME OF 'REVERSE'.  TO WIN, ALL YOU HAVE"
    0x5831bb60a7f0 ---------C   01630  PRINT "TO DO IS ARRANGE A LIST OF NUMBERS (1 THROUGH";N;")"
    0x5831bb60a9a0 ---------C   01640  PRINT "IN NUMERICAL ORDER FROM LEFT TO RIGHT.  TO MOVE, YOU"
    0x5831bb60ab50 ---------C   01650  PRINT "TELL ME HOW MANY NUMBERS (COUNTING FROM THE LEFT) TO"
    0x5831bb60ace0 ---------C   01660  PRINT "REVERSE.  FOR EXAMPLE, IF THE CURRENT LIST IS:"
    0x5831bb60ad40 ---------C   01670  PRINT
    0x5831bb60aed0 ---------C   01680  PRINT "2 3 4 5 1 6 7 8 9"
    0x5831bb60af30 ---------C   01690  PRINT
    0x5831bb60b0c0 ---------C   01700  PRINT "AND YOU REVERSE 4, THE RESULT WILL BE:"
    0x5831bb60b120 ---------C   01710  PRINT
    0x5831bb60b2a0 ---------C   01720  PRINT "5 4 3 2 1 6 7 8 9"
    0x5831bb60b300 ---------C   01730  PRINT
    0x5831bb60b490 ---------C   01740  PRINT "NOW IF YOU REVERSE 5, YOU WIN!"
    0x5831bb60b4f0 ---------C   01750  PRINT
    0x5831bb60b630 ---------C   01760  PRINT "1 2 3 4 5 6 7 8 9"
    0x5831bb60b6d0 ---------C   01770  PRINT
    0x5831bb60b870 ---------C   01780  PRINT "NO DOUBT YOU WILL LIKE THIS GAME, BUT"
    0x5831bb60b9d0 ---------C   01790  PRINT "IF YOU WANT TO QUIT, REVERSE 0 (ZERO)."
    0x5831bb60ba30 ---------C   01800  PRINT
    0x5831bb6111a0 ---------C   01810  GOTO 01820
    0x5831bb612960 ---------C T 01820  RETURN
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
int    A_int_arr[20];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01570();
void Routine_01620();

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
// Routine B
//---------------------------------------------------------------------------

void Routine_01570(){
    // 01570 NEXT K
    int dummy_1570=0; // Ignore this line.
}; // End-For(K_int)
// 01580 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01590 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01600 GOTO 01610
goto Lbl_01610;

  Lbl_01610:
// 01610 RETURN
return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01620(){
// 01620 PRINT "THIS IS THE GAME OF 'REVERSE'.  TO WIN, ALL YOU HAVE"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS THE GAME OF 'REVERSE'.  TO WIN, ALL YOU HAVE");strcat(buf,"\n");fputs(buf,fh); };
// 01630 PRINT "TO DO IS ARRANGE A LIST OF NUMBERS (1 THROUGH";N;")"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO DO IS ARRANGE A LIST OF NUMBERS (1 THROUGH"); b2c_INT(buf,N_int);strcat(buf,")");strcat(buf,"\n");fputs(buf,fh); };
// 01640 PRINT "IN NUMERICAL ORDER FROM LEFT TO RIGHT.  TO MOVE, YOU"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN NUMERICAL ORDER FROM LEFT TO RIGHT.  TO MOVE, YOU");strcat(buf,"\n");fputs(buf,fh); };
// 01650 PRINT "TELL ME HOW MANY NUMBERS (COUNTING FROM THE LEFT) TO"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TELL ME HOW MANY NUMBERS (COUNTING FROM THE LEFT) TO");strcat(buf,"\n");fputs(buf,fh); };
// 01660 PRINT "REVERSE.  FOR EXAMPLE, IF THE CURRENT LIST IS:"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"REVERSE.  FOR EXAMPLE, IF THE CURRENT LIST IS:");strcat(buf,"\n");fputs(buf,fh); };
// 01670 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01680 PRINT "2 3 4 5 1 6 7 8 9"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2 3 4 5 1 6 7 8 9");strcat(buf,"\n");fputs(buf,fh); };
// 01690 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01700 PRINT "AND YOU REVERSE 4, THE RESULT WILL BE:"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND YOU REVERSE 4, THE RESULT WILL BE:");strcat(buf,"\n");fputs(buf,fh); };
// 01710 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01720 PRINT "5 4 3 2 1 6 7 8 9"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"5 4 3 2 1 6 7 8 9");strcat(buf,"\n");fputs(buf,fh); };
// 01730 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01740 PRINT "NOW IF YOU REVERSE 5, YOU WIN!"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOW IF YOU REVERSE 5, YOU WIN!");strcat(buf,"\n");fputs(buf,fh); };
// 01750 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01760 PRINT "1 2 3 4 5 6 7 8 9"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1 2 3 4 5 6 7 8 9");strcat(buf,"\n");fputs(buf,fh); };
// 01770 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01780 PRINT "NO DOUBT YOU WILL LIKE THIS GAME, BUT"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NO DOUBT YOU WILL LIKE THIS GAME, BUT");strcat(buf,"\n");fputs(buf,fh); };
// 01790 PRINT "IF YOU WANT TO QUIT, REVERSE 0 (ZERO)."
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF YOU WANT TO QUIT, REVERSE 0 (ZERO).");strcat(buf,"\n");fputs(buf,fh); };
// 01800 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01810 GOTO 01820
goto Lbl_01820;

  Lbl_01820:
// 01820 RETURN
return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(32);"REVERSE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,32);strcat(buf,"REVERSE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "REVERSE -- A GAME OF SKILL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"REVERSE -- A GAME OF SKILL");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 DIM A(20)
    // 01080 REM *** N=NUMBER OF NUMBERS
    // 01090 N=9
    N_int = 9;
    // 01100 PRINT "DO YOU WANT THE RULES";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT THE RULES");fputs(buf,fh); };
    // 01110 INPUT A$
    // Start of Basic INPUT statement 01110
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
    }; // End of Basic INPUT statement 01110
    // 01120 IF A$="NO" THEN 1150
    if(strcmp(A_str,"NO")==0)goto Lbl_01150;
    // 01130 GOSUB 1620
    Routine_01620();
    // 01140 REM *** MAKE A RANDOM LIST A(1) TO A(N)

  Lbl_01150:
    // 01150 A(1)=INT((N-1)*RND(1)+2)
    A_int_arr[1] = INT((N_int-1)*RND(1)+2);
    // 01160 FOR K=2 TO N
    for(K_int=2;K_int<=N_int;K_int++){

  Lbl_01170:
        // 01170 A(K)=INT(N*RND(1)+1)
        A_int_arr[K_int] = INT(N_int*RND(1)+1);
        // 01180 FOR J=1 TO K-1
        for(J_int=1;J_int<=K_int-1;J_int++){
            // 01190 IF A(K)=A(J) THEN 1170
            if(A_int_arr[K_int]==A_int_arr[J_int])goto Lbl_01170;
            // 01200 NEXT J
            int dummy_1200=0; // Ignore this line.
        }; // End-For(J_int)
        // 01210 NEXT K
        int dummy_1210=0; // Ignore this line.
    }; // End-For(K_int)
    // 01220 REM *** PRINT ORIGINAL LIST AND START GAME
    // 01230 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "HERE WE GO ... THE LIST IS:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE WE GO ... THE LIST IS:");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 T=0
    T_int = 0;
    // 01260 GOSUB 1570
    Routine_01570();

  Lbl_01270:
    // 01270 PRINT "HOW MANY SHALL I REVERSE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY SHALL I REVERSE");fputs(buf,fh); };
    // 01280 INPUT R
    // Start of Basic INPUT statement 01280
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
    }; // End of Basic INPUT statement 01280
    // 01290 IF R=0 THEN 1470
    if(R_int==0)goto Lbl_01470;
    // 01300 IF R<=N THEN 1330
    if(R_int<=N_int)goto Lbl_01330;
    // 01310 PRINT "OOPS! TOO MANY! I CAN REVERSE AT MOST";N
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OOPS! TOO MANY! I CAN REVERSE AT MOST"); b2c_INT(buf,N_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01320 GOTO 1270
    goto Lbl_01270;

  Lbl_01330:
    // 01330 T=T+1
    T_int = T_int+1;
    // 01340 REM *** REVERSE R NUMBERS AND PRINT NEW LIST
    // 01350 FOR K=1 TO INT(R/2)
    for(K_int=1;K_int<=INT(R_int/2);K_int++){
        // 01360 Z=A(K)
        Z_int = A_int_arr[K_int];
        // 01370 A(K)=A(R-K+1)
        A_int_arr[K_int] = A_int_arr[R_int-K_int+1];
        // 01380 A(R-K+1)=Z
        A_int_arr[R_int-K_int+1] = Z_int;
        // 01390 NEXT K
        int dummy_1390=0; // Ignore this line.
    }; // End-For(K_int)
    // 01400 GOSUB 1570
    Routine_01570();
    // 01410 REM *** CHECK FOR A WIN
    // 01420 FOR K=1 TO N
    for(K_int=1;K_int<=N_int;K_int++){
        // 01430 IF A(K)<>K THEN 1270
        if(A_int_arr[K_int]!=K_int)goto Lbl_01270;
        // 01440 NEXT K
        int dummy_1440=0; // Ignore this line.
    }; // End-For(K_int)
    // 01450 PRINT "YOU WON IT IN";T;"MOVES!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WON IT IN"); b2c_INT(buf,T_int);strcat(buf,"MOVES!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01460 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01470:
    // 01470 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01480 PRINT "TRY AGAIN (YES OR NO)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY AGAIN (YES OR NO)");fputs(buf,fh); };
    // 01490 INPUT A$
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
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01490
    // 01500 IF A$="YES" THEN 1150
    if(strcmp(A_str,"YES")==0)goto Lbl_01150;
    // 01510 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01520 PRINT "O.K. HOPE YOU HAD FUN!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"O.K. HOPE YOU HAD FUN!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01530 GOTO 1560
    goto Lbl_01560;
    // 01540 REM *** SUBROUTINE TO PRINT LIST
    // 01550 REM *** SUBROUTINE TO PRINT THE RULES

  Lbl_01560:
    // 01560 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
