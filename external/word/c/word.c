/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/word.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63b4fef736d0 ---------A   00002  PRINT TAB(33);"WORD"
    0x63b4fef73670 ---------A   00003  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x63b4fef642b0 ---------A   00004  PRINT: PRINT: PRINT
    0x63b4fef75ed0 ---------A   00005  DIM S(7),A(7),L(7),D(7),P(7)
    0x63b4fef73ca0 ---------A   00010  PRINT "I AM THINKING OF A WORD -- YOU GUESS IT.  I WILL GIVE YOU"
    0x63b4fef7bac0 ---------A   00015  PRINT "CLUES TO HELP YOU GET IT.  GOOD LUCK!!": PRINT: PRINT
    0x63b4fef7bb40 ---------A   00020  REM
    0x63b4fef7bd70 ---------A T 00030  PRINT: PRINT: PRINT "YOU ARE STARTING A NEW GAME..."
    0x63b4fef7bdf0 ---------A   00035  RESTORE
    0x63b4fef76050 ---------A   00040  READ N
    0x63b4fef7c660 ---------A   00050  C=INT(RND(1)*N+1)
    0x63b4fef7ca10 ---------A   00060  FOR I=1 TO C
    0x63b4fef7cc30 ---------A   00070  READ S$
    0x63b4fef7cd60 ---------A   00080  NEXT I
    0x63b4fef7d050 ---------A   00090  G=0
    0x63b4fef7d440 ---------A   00095  S(0)=LEN(S$)
    0x63b4fef7df80 ---------A   00100  FOR I=1 TO LEN(S$): S(I)=ASC(MID$(S$,I,1)): NEXT I
    0x63b4fef7e270 ---------A   00110  FOR I=1 TO 5
    0x63b4fef7e570 ---------A   00120  A(I)=45
    0x63b4fef7e6a0 ---------A   00130  NEXT I
    0x63b4fef7ea50 ---------A   00140  FOR J=1 TO 5
    0x63b4fef7ed50 ---------A   00144  P(J)=0
    0x63b4fef7ee80 ---------A   00146  NEXT J
    0x63b4fef7efd0 ---------A T 00150  PRINT "GUESS A FIVE LETTER WORD";
    0x63b4fef7f1f0 ---------A   00160  INPUT L$
    0x63b4fef7f530 ---------A   00170  G=G+1
    0x63b4fef7f840 ---------A   00172  IF S$=G$ THEN 500
    0x63b4fef7ff10 ---------A   00173  FOR I=1 TO 7: P(I)=0: NEXT I
    0x63b4fef80320 ---------A   00175  L(0)=LEN(L$)
    0x63b4fef80e60 ---------A   00180  FOR I=1 TO LEN(L$): L(I)=ASC(MID$(L$,I,1)): NEXT I
    0x63b4fef81190 ---------A   00190  IF L(1)=63 THEN 300
    0x63b4fef814b0 ---------A   00200  IF L(0)<>5 THEN 400
    0x63b4fef81a40 ---------A   00205  M=0: Q=1
    0x63b4fef81f20 ---------A   00210  FOR I=1 TO 5
    0x63b4fef821e0 ---------A   00220  FOR J=1 TO 5
    0x63b4fef82620 ---------A   00230  IF S(I)<>L(J) THEN 260
    0x63b4fef82a20 ---------A   00231  P(Q)=L(J)
    0x63b4fef82d50 ---------A   00232  Q=Q+1
    0x63b4fef82fc0 ---------A   00233  IF I<>J THEN 250
    0x63b4fef833c0 ---------A   00240  A(J)=L(J)
    0x63b4fef836f0 ---------A T 00250  M=M+1
    0x63b4fef83820 ---------A T 00260  NEXT J
    0x63b4fef83970 ---------A   00265  NEXT I
    0x63b4fef83c60 ---------A   00270  A(0)=5
    0x63b4fef83f70 ---------A   00272  P(0)=M
    0x63b4fef84c00 ---------A   00275  A$="": FOR I=1 TO A(0): A$=A$+CHR$(A(I)): NEXT I
    0x63b4fef858d0 ---------A   00277  P$="": FOR I=1 TO P(0): P$=P$+CHR$(P(I)): NEXT I
    0x63b4fef85dc0 ---------A   00280  PRINT "THERE WERE";M;"MATCHES AND THE COMMON LETTERS WERE...";P$
    0x63b4fef86050 ---------A   00285  PRINT "FROM THE EXACT LETTER MATCHES, YOU KNOW................";A$
    0x63b4fef862d0 ---------A   00286  IF A$=S$ THEN 500
    0x63b4fef86560 ---------A   00287  IF M>1 THEN 289
    0x63b4fef86740 ---------A   00288  PRINT: PRINT "IF YOU GIVE UP, TYPE '?' FOR YOUR NEXT GUESS."
    0x63b4fef867c0 ---------A T 00289  PRINT
    0x63b4fef86860 ---------A   00290  GOTO 150
    0x63b4fef87350 ---------A T 00300  S$="": FOR I=1 TO 7: S$=S$+CHR$(S(I)): NEXT I
    0x63b4fef87640 ---------A   00310  PRINT "THE SECRET WORD IS ";S$: PRINT
    0x63b4fef876f0 ---------A   00320  GOTO 30
    0x63b4fef87840 ---------A T 00400  PRINT "YOU MUST GUESS A 5 LETTER WORD.  START AGAIN."
    0x63b4fef87c60 ---------A   00410  PRINT: G=G-1: GOTO 150
    0x63b4fef88030 ---------A T 00500  PRINT "YOU HAVE GUESSED THE WORD.  IT TOOK";G;"GUESSES!": PRINT
    0x63b4fef88270 ---------A   00510  INPUT "WANT TO PLAY AGAIN";Q$
    0x63b4fef88520 ---------A   00520  IF Q$="YES" THEN 30
    0x63b4fef88cc0 ---------A   00530  DATA 12,"DINKY","SMOKE","WATER","GRASS","TRAIN","MIGHT","FIRST"
    0x63b4fef89190 ---------A   00540  DATA "CANDY","CHAMP","WOULD","CLUMP","DOPEY"
    0x63b4fef891e0 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00030      00320T, 00520T
     00150      00290T, 00410T
     00250      00233T
     00260      00230T
     00289      00287T
     00300      00190T
     00400      00200T
     00500      00172T, 00286T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x63b4fef736d0 (00002)   0x63b4fef736d0 (00002)   0x63b4fef891e0 (00999)   0x63b4fef891e0 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/word.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63b4fef736d0 ---------A   00002  PRINT TAB(33);"WORD"
    0x63b4fef73670 ---------A   00003  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x63b4fef742d0 ----------   00004  PRINT
    0x63b4fef74910 ----------        a PRINT
    0x63b4fef642b0 ---------A        b PRINT
    0x63b4fef75ed0 ---------A   00005  DIM S(7),A(7),L(7),D(7),P(7)
    0x63b4fef73ca0 ---------A   00010  PRINT "I AM THINKING OF A WORD -- YOU GUESS IT.  I WILL GIVE YOU"
    0x63b4fef74880 ----------   00015  PRINT "CLUES TO HELP YOU GET IT.  GOOD LUCK!!"
    0x63b4fef7ba60 ----------        a PRINT
    0x63b4fef7bac0 ---------A        b PRINT
    0x63b4fef7bb40 ---------A   00020  REM
    0x63b4fef7bbd0 ---------- T 00030  PRINT
    0x63b4fef7bc30 ---------- T      a PRINT
    0x63b4fef7bd70 ---------A T      b PRINT "YOU ARE STARTING A NEW GAME..."
    0x63b4fef7bdf0 ---------A   00035  RESTORE
    0x63b4fef76050 ---------A   00040  READ N
    0x63b4fef7c660 ---------A   00050  C=INT(RND(1)*N+1)
    0x63b4fef7ca10 ---------A   00060  FOR I=1 TO C
    0x63b4fef7cc30 ---------A   00070  READ S$
    0x63b4fef7cd60 ---------A   00080  NEXT I
    0x63b4fef7d050 ---------A   00090  G=0
    0x63b4fef7d440 ---------A   00095  S(0)=LEN(S$)
    0x63b4fef7d7f0 ----------   00100  FOR I=1 TO LEN(S$)
    0x63b4fef7de50 ----------        a S(I)=ASC(MID$(S$,I,1))
    0x63b4fef7df80 ---------A        b NEXT I
    0x63b4fef7e270 ---------A   00110  FOR I=1 TO 5
    0x63b4fef7e570 ---------A   00120  A(I)=45
    0x63b4fef7e6a0 ---------A   00130  NEXT I
    0x63b4fef7ea50 ---------A   00140  FOR J=1 TO 5
    0x63b4fef7ed50 ---------A   00144  P(J)=0
    0x63b4fef7ee80 ---------A   00146  NEXT J
    0x63b4fef7efd0 ---------A T 00150  PRINT "GUESS A FIVE LETTER WORD";
    0x63b4fef7f1f0 ---------A   00160  INPUT L$
    0x63b4fef7f530 ---------A   00170  G=G+1
    0x63b4fef7f840 ---------A   00172  IF S$=G$ THEN 500
    0x63b4fef7fb00 ----------   00173  FOR I=1 TO 7
    0x63b4fef7fde0 ----------        a P(I)=0
    0x63b4fef7ff10 ---------A        b NEXT I
    0x63b4fef80320 ---------A   00175  L(0)=LEN(L$)
    0x63b4fef806d0 ----------   00180  FOR I=1 TO LEN(L$)
    0x63b4fef80d30 ----------        a L(I)=ASC(MID$(L$,I,1))
    0x63b4fef80e60 ---------A        b NEXT I
    0x63b4fef81190 ---------A   00190  IF L(1)=63 THEN 300
    0x63b4fef814b0 ---------A   00200  IF L(0)<>5 THEN 400
    0x63b4fef81770 ----------   00205  M=0
    0x63b4fef81a40 ---------A        a Q=1
    0x63b4fef81f20 ---------A   00210  FOR I=1 TO 5
    0x63b4fef821e0 ---------A   00220  FOR J=1 TO 5
    0x63b4fef82620 ---------A   00230  IF S(I)<>L(J) THEN 260
    0x63b4fef82a20 ---------A   00231  P(Q)=L(J)
    0x63b4fef82d50 ---------A   00232  Q=Q+1
    0x63b4fef82fc0 ---------A   00233  IF I<>J THEN 250
    0x63b4fef833c0 ---------A   00240  A(J)=L(J)
    0x63b4fef836f0 ---------A T 00250  M=M+1
    0x63b4fef83820 ---------A T 00260  NEXT J
    0x63b4fef83970 ---------A   00265  NEXT I
    0x63b4fef83c60 ---------A   00270  A(0)=5
    0x63b4fef83f70 ---------A   00272  P(0)=M
    0x63b4fef84240 ----------   00275  A$=""
    0x63b4fef845d0 ----------        a FOR I=1 TO A(0)
    0x63b4fef84ad0 ----------        b A$=A$+CHR$(A(I))
    0x63b4fef84c00 ---------A        c NEXT I
    0x63b4fef84f10 ----------   00277  P$=""
    0x63b4fef852a0 ----------        a FOR I=1 TO P(0)
    0x63b4fef857a0 ----------        b P$=P$+CHR$(P(I))
    0x63b4fef858d0 ---------A        c NEXT I
    0x63b4fef85dc0 ---------A   00280  PRINT "THERE WERE";M;"MATCHES AND THE COMMON LETTERS WERE...";P$
    0x63b4fef86050 ---------A   00285  PRINT "FROM THE EXACT LETTER MATCHES, YOU KNOW................";A$
    0x63b4fef862d0 ---------A   00286  IF A$=S$ THEN 500
    0x63b4fef86560 ---------A   00287  IF M>1 THEN 289
    0x63b4fef865c0 ----------   00288  PRINT
    0x63b4fef86740 ---------A        a PRINT "IF YOU GIVE UP, TYPE '?' FOR YOUR NEXT GUESS."
    0x63b4fef867c0 ---------A T 00289  PRINT
    0x63b4fef86860 ---------A   00290  GOTO 150
    0x63b4fef86a70 ---------- T 00300  S$=""
    0x63b4fef86d20 ---------- T      a FOR I=1 TO 7
    0x63b4fef87220 ---------- T      b S$=S$+CHR$(S(I))
    0x63b4fef87350 ---------A T      c NEXT I
    0x63b4fef875c0 ----------   00310  PRINT "THE SECRET WORD IS ";S$
    0x63b4fef87640 ---------A        a PRINT
    0x63b4fef876f0 ---------A   00320  GOTO 30
    0x63b4fef87840 ---------A T 00400  PRINT "YOU MUST GUESS A 5 LETTER WORD.  START AGAIN."
    0x63b4fef878a0 ----------   00410  PRINT
    0x63b4fef87bc0 ----------        a G=G-1
    0x63b4fef87c60 ---------A        b GOTO 150
    0x63b4fef87fa0 ---------- T 00500  PRINT "YOU HAVE GUESSED THE WORD.  IT TOOK";G;"GUESSES!"
    0x63b4fef88030 ---------A T      a PRINT
    0x63b4fef88270 ---------A   00510  INPUT "WANT TO PLAY AGAIN";Q$
    0x63b4fef88520 ---------A   00520  IF Q$="YES" THEN 30
    0x63b4fef88cc0 ---------A   00530  DATA 12,"DINKY","SMOKE","WATER","GRASS","TRAIN","MIGHT","FIRST"
    0x63b4fef89190 ---------A   00540  DATA "CANDY","CHAMP","WOULD","CLUMP","DOPEY"
    0x63b4fef891e0 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/word.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63b4fef736d0 ---------A   01000  PRINT TAB(33);"WORD"
    0x63b4fef73670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x63b4fef742d0 ----------   01020  PRINT
    0x63b4fef74910 ----------   01030  PRINT
    0x63b4fef642b0 ---------A   01040  PRINT
    0x63b4fef75ed0 ---------A   01050  DIM S(7),A(7),L(7),D(7),P(7)
    0x63b4fef73ca0 ---------A   01060  PRINT "I AM THINKING OF A WORD -- YOU GUESS IT.  I WILL GIVE YOU"
    0x63b4fef74880 ----------   01070  PRINT "CLUES TO HELP YOU GET IT.  GOOD LUCK!!"
    0x63b4fef7ba60 ----------   01080  PRINT
    0x63b4fef7bac0 ---------A   01090  PRINT
    0x63b4fef7bb40 ---------A   01100  REM
    0x63b4fef7bbd0 ----------   01110  PRINT
    0x63b4fef7bc30 ----------   01120  PRINT
    0x63b4fef7bd70 ---------A   01130  PRINT "YOU ARE STARTING A NEW GAME..."
    0x63b4fef7bdf0 ---------A   01140  RESTORE
    0x63b4fef76050 ---------A   01150  READ N
    0x63b4fef7c660 ---------A   01160  C=INT(RND(1)*N+1)
    0x63b4fef7ca10 ---------A   01170  FOR I=1 TO C
    0x63b4fef7cc30 ---------A   01180  READ S$
    0x63b4fef7cd60 ---------A   01190  NEXT I
    0x63b4fef7d050 ---------A   01200  G=0
    0x63b4fef7d440 ---------A   01210  S(0)=LEN(S$)
    0x63b4fef7d7f0 ----------   01220  FOR I=1 TO LEN(S$)
    0x63b4fef7de50 ----------   01230  S(I)=ASC(MID$(S$,I,1))
    0x63b4fef7df80 ---------A   01240  NEXT I
    0x63b4fef7e270 ---------A   01250  FOR I=1 TO 5
    0x63b4fef7e570 ---------A   01260  A(I)=45
    0x63b4fef7e6a0 ---------A   01270  NEXT I
    0x63b4fef7ea50 ---------A   01280  FOR J=1 TO 5
    0x63b4fef7ed50 ---------A   01290  P(J)=0
    0x63b4fef7ee80 ---------A   01300  NEXT J
    0x63b4fef7efd0 ---------A   01310  PRINT "GUESS A FIVE LETTER WORD";
    0x63b4fef7f1f0 ---------A   01320  INPUT L$
    0x63b4fef7f530 ---------A   01330  G=G+1
    0x63b4fef7f840 ---------A   01340  IF S$=G$ THEN 1860
    0x63b4fef7fb00 ----------   01350  FOR I=1 TO 7
    0x63b4fef7fde0 ----------   01360  P(I)=0
    0x63b4fef7ff10 ---------A   01370  NEXT I
    0x63b4fef80320 ---------A   01380  L(0)=LEN(L$)
    0x63b4fef806d0 ----------   01390  FOR I=1 TO LEN(L$)
    0x63b4fef80d30 ----------   01400  L(I)=ASC(MID$(L$,I,1))
    0x63b4fef80e60 ---------A   01410  NEXT I
    0x63b4fef81190 ---------A   01420  IF L(1)=63 THEN 1770
    0x63b4fef814b0 ---------A   01430  IF L(0)<>5 THEN 1810
    0x63b4fef81770 ----------   01440  M=0
    0x63b4fef81a40 ---------A   01450  Q=1
    0x63b4fef81f20 ---------A   01460  FOR I=1 TO 5
    0x63b4fef821e0 ---------A   01470  FOR J=1 TO 5
    0x63b4fef82620 ---------A   01480  IF S(I)<>L(J) THEN 1540
    0x63b4fef82a20 ---------A   01490  P(Q)=L(J)
    0x63b4fef82d50 ---------A   01500  Q=Q+1
    0x63b4fef82fc0 ---------A   01510  IF I<>J THEN 1530
    0x63b4fef833c0 ---------A   01520  A(J)=L(J)
    0x63b4fef836f0 ---------A   01530  M=M+1
    0x63b4fef83820 ---------A   01540  NEXT J
    0x63b4fef83970 ---------A   01550  NEXT I
    0x63b4fef83c60 ---------A   01560  A(0)=5
    0x63b4fef83f70 ---------A   01570  P(0)=M
    0x63b4fef84240 ----------   01580  A$=""
    0x63b4fef845d0 ----------   01590  FOR I=1 TO A(0)
    0x63b4fef84ad0 ----------   01600  A$=A$+CHR$(A(I))
    0x63b4fef84c00 ---------A   01610  NEXT I
    0x63b4fef84f10 ----------   01620  P$=""
    0x63b4fef852a0 ----------   01630  FOR I=1 TO P(0)
    0x63b4fef857a0 ----------   01640  P$=P$+CHR$(P(I))
    0x63b4fef858d0 ---------A   01650  NEXT I
    0x63b4fef85dc0 ---------A   01660  PRINT "THERE WERE";M;"MATCHES AND THE COMMON LETTERS WERE...";P$
    0x63b4fef86050 ---------A   01670  PRINT "FROM THE EXACT LETTER MATCHES, YOU KNOW................";A$
    0x63b4fef862d0 ---------A   01680  IF A$=S$ THEN 1860
    0x63b4fef86560 ---------A   01690  IF M>1 THEN 1720
    0x63b4fef865c0 ----------   01700  PRINT
    0x63b4fef86740 ---------A   01710  PRINT "IF YOU GIVE UP, TYPE '?' FOR YOUR NEXT GUESS."
    0x63b4fef867c0 ---------A   01720  PRINT
    0x63b4fef86860 ---------A   01730  GOTO 1310
    0x63b4fef86a70 ----------   01740  S$=""
    0x63b4fef86d20 ----------   01750  FOR I=1 TO 7
    0x63b4fef87220 ----------   01760  S$=S$+CHR$(S(I))
    0x63b4fef87350 ---------A   01770  NEXT I
    0x63b4fef875c0 ----------   01780  PRINT "THE SECRET WORD IS ";S$
    0x63b4fef87640 ---------A   01790  PRINT
    0x63b4fef876f0 ---------A   01800  GOTO 1130
    0x63b4fef87840 ---------A   01810  PRINT "YOU MUST GUESS A 5 LETTER WORD.  START AGAIN."
    0x63b4fef878a0 ----------   01820  PRINT
    0x63b4fef87bc0 ----------   01830  G=G-1
    0x63b4fef87c60 ---------A   01840  GOTO 1310
    0x63b4fef87fa0 ----------   01850  PRINT "YOU HAVE GUESSED THE WORD.  IT TOOK";G;"GUESSES!"
    0x63b4fef88030 ---------A   01860  PRINT
    0x63b4fef88270 ---------A   01870  INPUT "WANT TO PLAY AGAIN";Q$
    0x63b4fef88520 ---------A   01880  IF Q$="YES" THEN 1130
    0x63b4fef88cc0 ---------A   01890  DATA 12,"DINKY","SMOKE","WATER","GRASS","TRAIN","MIGHT","FIRST"
    0x63b4fef89190 ---------A   01900  DATA "CANDY","CHAMP","WOULD","CLUMP","DOPEY"
    0x63b4fef891e0 ---------A   01910  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01880 - 10000    8130 

 */



/*
 *  Symbol Table Listing for 'basic/word.bas'
 *
    A               Array    Integer         {0,6} 
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
    D               Array    Integer         {0,6} 
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    G$                       String      
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    L               Array    Integer         {0,6} 
    L$                       String      
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
    P               Array    Integer         {0,6} 
    P$                       String      
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    Q$                       String      
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,6} 
    S$                       String      
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
 *  Listing of basic/word.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63b4fef736d0 ---------A   01000  PRINT TAB(33);"WORD"
    0x63b4fef73670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x63b4fef742d0 ---------A   01020  PRINT
    0x63b4fef74910 ---------A   01030  PRINT
    0x63b4fef642b0 ---------A   01040  PRINT
    0x63b4fef75ed0 ---------A   01050  DIM S(7),A(7),L(7),D(7),P(7)
    0x63b4fef73ca0 ---------A   01060  PRINT "I AM THINKING OF A WORD -- YOU GUESS IT.  I WILL GIVE YOU"
    0x63b4fef74880 ---------A   01070  PRINT "CLUES TO HELP YOU GET IT.  GOOD LUCK!!"
    0x63b4fef7ba60 ---------A   01080  PRINT
    0x63b4fef7bac0 ---------A   01090  PRINT
    0x63b4fef7bb40 ---------A   01100  REM
    0x63b4fef7bbd0 ---------A   01110  PRINT
    0x63b4fef7bc30 ---------A   01120  PRINT
    0x63b4fef7bd70 ---------A T 01130  PRINT "YOU ARE STARTING A NEW GAME..."
    0x63b4fef7bdf0 ---------A   01140  RESTORE
    0x63b4fef76050 ---------A   01150  READ N
    0x63b4fef7c660 ---------A   01160  C=INT(RND(1)*N+1)
    0x63b4fef7ca10 ---------A   01170  FOR I=1 TO C
    0x63b4fef7cc30 ---------A   01180  READ S$
    0x63b4fef7cd60 ---------A   01190  NEXT I
    0x63b4fef7d050 ---------A   01200  G=0
    0x63b4fef7d440 ---------A   01210  S(0)=LEN(S$)
    0x63b4fef7d7f0 ---------A   01220  FOR I=1 TO LEN(S$)
    0x63b4fef7de50 ---------A   01230  S(I)=ASC(MID$(S$,I,1))
    0x63b4fef7df80 ---------A   01240  NEXT I
    0x63b4fef7e270 ---------A   01250  FOR I=1 TO 5
    0x63b4fef7e570 ---------A   01260  A(I)=45
    0x63b4fef7e6a0 ---------A   01270  NEXT I
    0x63b4fef7ea50 ---------A   01280  FOR J=1 TO 5
    0x63b4fef7ed50 ---------A   01290  P(J)=0
    0x63b4fef7ee80 ---------A   01300  NEXT J
    0x63b4fef7efd0 ---------A T 01310  PRINT "GUESS A FIVE LETTER WORD";
    0x63b4fef7f1f0 ---------A   01320  INPUT L$
    0x63b4fef7f530 ---------A   01330  G=G+1
    0x63b4fef7f840 ---------A   01340  IF S$=G$ THEN 1820
    0x63b4fef7fb00 ---------A   01350  FOR I=1 TO 7
    0x63b4fef7fde0 ---------A   01360  P(I)=0
    0x63b4fef7ff10 ---------A   01370  NEXT I
    0x63b4fef80320 ---------A   01380  L(0)=LEN(L$)
    0x63b4fef806d0 ---------A   01390  FOR I=1 TO LEN(L$)
    0x63b4fef80d30 ---------A   01400  L(I)=ASC(MID$(L$,I,1))
    0x63b4fef80e60 ---------A   01410  NEXT I
    0x63b4fef81190 ---------A   01420  IF L(1)=63 THEN 1740
    0x63b4fef814b0 ---------A   01430  IF L(0)<>5 THEN 1780
    0x63b4fef81770 ---------A   01440  M=0
    0x63b4fef81a40 ---------A   01450  Q=1
    0x63b4fef81f20 ---------A   01460  FOR I=1 TO 5
    0x63b4fef821e0 ---------A   01470  FOR J=1 TO 5
    0x63b4fef82620 ---------A   01480  IF S(I)<>L(J) THEN 1540
    0x63b4fef82a20 ---------A   01490  P(Q)=L(J)
    0x63b4fef82d50 ---------A   01500  Q=Q+1
    0x63b4fef82fc0 ---------A   01510  IF I<>J THEN 1530
    0x63b4fef833c0 ---------A   01520  A(J)=L(J)
    0x63b4fef836f0 ---------A T 01530  M=M+1
    0x63b4fef83820 ---------A T 01540  NEXT J
    0x63b4fef83970 ---------A   01550  NEXT I
    0x63b4fef83c60 ---------A   01560  A(0)=5
    0x63b4fef83f70 ---------A   01570  P(0)=M
    0x63b4fef84240 ---------A   01580  A$=""
    0x63b4fef845d0 ---------A   01590  FOR I=1 TO A(0)
    0x63b4fef84ad0 ---------A   01600  A$=A$+CHR$(A(I))
    0x63b4fef84c00 ---------A   01610  NEXT I
    0x63b4fef84f10 ---------A   01620  P$=""
    0x63b4fef852a0 ---------A   01630  FOR I=1 TO P(0)
    0x63b4fef857a0 ---------A   01640  P$=P$+CHR$(P(I))
    0x63b4fef858d0 ---------A   01650  NEXT I
    0x63b4fef85dc0 ---------A   01660  PRINT "THERE WERE";M;"MATCHES AND THE COMMON LETTERS WERE...";P$
    0x63b4fef86050 ---------A   01670  PRINT "FROM THE EXACT LETTER MATCHES, YOU KNOW................";A$
    0x63b4fef862d0 ---------A   01680  IF A$=S$ THEN 1820
    0x63b4fef86560 ---------A   01690  IF M>1 THEN 1720
    0x63b4fef865c0 ---------A   01700  PRINT
    0x63b4fef86740 ---------A   01710  PRINT "IF YOU GIVE UP, TYPE '?' FOR YOUR NEXT GUESS."
    0x63b4fef867c0 ---------A T 01720  PRINT
    0x63b4fef86860 ---------A   01730  GOTO 1310
    0x63b4fef87350 ---------A T 01740  NEXT I
    0x63b4fef875c0 ---------A   01750  PRINT "THE SECRET WORD IS ";S$
    0x63b4fef87640 ---------A   01760  PRINT
    0x63b4fef876f0 ---------A   01770  GOTO 1130
    0x63b4fef87840 ---------A T 01780  PRINT "YOU MUST GUESS A 5 LETTER WORD.  START AGAIN."
    0x63b4fef878a0 ---------A   01790  PRINT
    0x63b4fef87bc0 ---------A   01800  G=G-1
    0x63b4fef87c60 ---------A   01810  GOTO 1310
    0x63b4fef88030 ---------A T 01820  PRINT
    0x63b4fef88270 ---------A   01830  INPUT "WANT TO PLAY AGAIN";Q$
    0x63b4fef88520 ---------A   01840  IF Q$="YES" THEN 1130
    0x63b4fef88cc0 ---------A   01850  DATA 12,"DINKY","SMOKE","WATER","GRASS","TRAIN","MIGHT","FIRST"
    0x63b4fef89190 ---------A   01860  DATA "CANDY","CHAMP","WOULD","CLUMP","DOPEY"
    0x63b4fef891e0 ---------A   01870  END
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
char* data_01850s[]={"12","DINKY","SMOKE","WATER","GRASS","TRAIN","MIGHT","FIRST"};
char* data_01860s[]={"CANDY","CHAMP","WOULD","CLUMP","DOPEY"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1850,  8,data_01850s},
    { 1860,  5,data_01860s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[7];                              // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    C_int;                                     // Basic: C 
int    D_int_arr[7];                              // Basic: D 
int    G_int;                                     // Basic: G 
char*  G_str;                                     // Basic: G$ 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int_arr[7];                              // Basic: L 
char*  L_str;                                     // Basic: L$ 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int_arr[7];                              // Basic: P 
char*  P_str;                                     // Basic: P$ 
int    Q_int;                                     // Basic: Q 
char*  Q_str;                                     // Basic: Q$ 
int    S_int_arr[7];                              // Basic: S 
char*  S_str;                                     // Basic: S$ 
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
    // 01000 PRINT TAB(33);"WORD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"WORD");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 DIM S(7),A(7),L(7),D(7),P(7)
    // 01060 PRINT "I AM THINKING OF A WORD -- YOU GUESS IT.  I WILL GIVE YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I AM THINKING OF A WORD -- YOU GUESS IT.  I WILL GIVE YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "CLUES TO HELP YOU GET IT.  GOOD LUCK!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CLUES TO HELP YOU GET IT.  GOOD LUCK!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 REM
    // 01110 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01130:
    // 01130 PRINT "YOU ARE STARTING A NEW GAME..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE STARTING A NEW GAME...");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 RESTORE
    Data_Index=0;
    RestoreData(0);
    // 01150 READ N
    N_int = Get_Data_Int();
    // 01160 C=INT(RND(1)*N+1)
    C_int = INT(RND(1)*N_int+1);
    // 01170 FOR I=1 TO C
    for(I_int=1;I_int<=C_int;I_int++){
        // 01180 READ S$
        S_str = Get_Data_String();
        // 01190 NEXT I
        int dummy_1190=0; // Ignore this line.
    }; // End-For(I_int)
    // 01200 G=0
    G_int = 0;
    // 01210 S(0)=LEN(S$)
    S_int_arr[0] = LEN(S_str);
    // 01220 FOR I=1 TO LEN(S$)
    for(I_int=1;I_int<=LEN(S_str);I_int++){
        // 01230 S(I)=ASC(MID$(S$,I,1))
        S_int_arr[I_int] = ASC(MID$(S_str,I_int,1));
        // 01240 NEXT I
        int dummy_1240=0; // Ignore this line.
    }; // End-For(I_int)
    // 01250 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 01260 A(I)=45
        A_int_arr[I_int] = 45;
        // 01270 NEXT I
        int dummy_1270=0; // Ignore this line.
    }; // End-For(I_int)
    // 01280 FOR J=1 TO 5
    for(J_int=1;J_int<=5;J_int++){
        // 01290 P(J)=0
        P_int_arr[J_int] = 0;
        // 01300 NEXT J
        int dummy_1300=0; // Ignore this line.
    }; // End-For(J_int)

  Lbl_01310:
    // 01310 PRINT "GUESS A FIVE LETTER WORD";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GUESS A FIVE LETTER WORD");fputs(buf,fh); };
    // 01320 INPUT L$
    // Start of Basic INPUT statement 01320
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&L_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01320
    // 01330 G=G+1
    G_int = G_int+1;
    // 01340 IF S$=G$ THEN 1820
    if(strcmp(S_str,G_str)==0)goto Lbl_01820;
    // 01350 FOR I=1 TO 7
    for(I_int=1;I_int<=7;I_int++){
        // 01360 P(I)=0
        P_int_arr[I_int] = 0;
        // 01370 NEXT I
        int dummy_1370=0; // Ignore this line.
    }; // End-For(I_int)
    // 01380 L(0)=LEN(L$)
    L_int_arr[0] = LEN(L_str);
    // 01390 FOR I=1 TO LEN(L$)
    for(I_int=1;I_int<=LEN(L_str);I_int++){
        // 01400 L(I)=ASC(MID$(L$,I,1))
        L_int_arr[I_int] = ASC(MID$(L_str,I_int,1));
        // 01410 NEXT I
        int dummy_1410=0; // Ignore this line.
    }; // End-For(I_int)
    // 01420 IF L(1)=63 THEN 1740
    if(L_int_arr[1]==63)goto Lbl_01740;
    // 01430 IF L(0)<>5 THEN 1780
    if(L_int_arr[0]!=5)goto Lbl_01780;
    // 01440 M=0
    M_int = 0;
    // 01450 Q=1
    Q_int = 1;
    // 01460 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 01470 FOR J=1 TO 5
        for(J_int=1;J_int<=5;J_int++){
            // 01480 IF S(I)<>L(J) THEN 1540
            if(S_int_arr[I_int]!=L_int_arr[J_int])goto Lbl_01540;
            // 01490 P(Q)=L(J)
            P_int_arr[Q_int] = L_int_arr[J_int];
            // 01500 Q=Q+1
            Q_int = Q_int+1;
            // 01510 IF I<>J THEN 1530
            if(I_int!=J_int)goto Lbl_01530;
            // 01520 A(J)=L(J)
            A_int_arr[J_int] = L_int_arr[J_int];

  Lbl_01530:
            // 01530 M=M+1
            M_int = M_int+1;

  Lbl_01540:
            // 01540 NEXT J
            int dummy_1540=0; // Ignore this line.
        }; // End-For(J_int)
        // 01550 NEXT I
        int dummy_1550=0; // Ignore this line.
    }; // End-For(I_int)
    // 01560 A(0)=5
    A_int_arr[0] = 5;
    // 01570 P(0)=M
    P_int_arr[0] = M_int;
    // 01580 A$=""
    GLBpStr="";
    A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01590 FOR I=1 TO A(0)
    for(I_int=1;I_int<=A_int_arr[0];I_int++){
        // 01600 A$=A$+CHR$(A(I))
        GLBpStr=StringCat(A_str,CHR$(A_int_arr[I_int]));
        A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01610 NEXT I
        int dummy_1610=0; // Ignore this line.
    }; // End-For(I_int)
    // 01620 P$=""
    GLBpStr="";
    P_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01630 FOR I=1 TO P(0)
    for(I_int=1;I_int<=P_int_arr[0];I_int++){
        // 01640 P$=P$+CHR$(P(I))
        GLBpStr=StringCat(P_str,CHR$(P_int_arr[I_int]));
        P_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01650 NEXT I
        int dummy_1650=0; // Ignore this line.
    }; // End-For(I_int)
    // 01660 PRINT "THERE WERE";M;"MATCHES AND THE COMMON LETTERS WERE...";P$
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THERE WERE"); b2c_INT(buf,M_int);strcat(buf,"MATCHES AND THE COMMON LETTERS WERE..."); strcat(buf,P_str);strcat(buf,"\n");fputs(buf,fh); };
    // 01670 PRINT "FROM THE EXACT LETTER MATCHES, YOU KNOW................";A$
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FROM THE EXACT LETTER MATCHES, YOU KNOW................"); strcat(buf,A_str);strcat(buf,"\n");fputs(buf,fh); };
    // 01680 IF A$=S$ THEN 1820
    if(strcmp(A_str,S_str)==0)goto Lbl_01820;
    // 01690 IF M>1 THEN 1720
    if(M_int>1)goto Lbl_01720;
    // 01700 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01710 PRINT "IF YOU GIVE UP, TYPE '?' FOR YOUR NEXT GUESS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF YOU GIVE UP, TYPE '?' FOR YOUR NEXT GUESS.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01720:
    // 01720 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01730 GOTO 1310
    goto Lbl_01310;

  Lbl_01740:
    // 01740 NEXT I
    int dummy_1740=0; // Ignore this line.
}; // End-For(I_int)
// 01750 PRINT "THE SECRET WORD IS ";S$
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE SECRET WORD IS "); strcat(buf,S_str);strcat(buf,"\n");fputs(buf,fh); };
// 01760 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01770 GOTO 1130
goto Lbl_01130;

  Lbl_01780:
// 01780 PRINT "YOU MUST GUESS A 5 LETTER WORD.  START AGAIN."
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU MUST GUESS A 5 LETTER WORD.  START AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
// 01790 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01800 G=G-1
G_int = G_int-1;
// 01810 GOTO 1310
goto Lbl_01310;

  Lbl_01820:
// 01820 PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01830 INPUT "WANT TO PLAY AGAIN";Q$
// Start of Basic INPUT statement 01830
{
    int numargs=1;
    char *args[numargs+1];
    bool echoeol=true;
    while(true){
        fprintf(stdout,"WANT TO PLAY AGAIN");
        int err=input(args,numargs,echoeol);
        if(err==0x03) break;
        if(err || 
            (err += b2c_strtos(&Q_str,args,0)) ){
             printf("?Redo from start\n");
        }else{
            break;
        };
    };
}; // End of Basic INPUT statement 01830
// 01840 IF Q$="YES" THEN 1130
if(strcmp(Q_str,"YES")==0)goto Lbl_01130;
// 01850 DATA 12,"DINKY","SMOKE","WATER","GRASS","TRAIN","MIGHT","FIRST"
// 01860 DATA "CANDY","CHAMP","WOULD","CLUMP","DOPEY"
// 01870 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
