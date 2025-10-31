/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bunny.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cc12acdd6d0 ---------A   00010  PRINT TAB(33);"BUNNY"
    0x5cc12acdd670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cc12acce2b0 ---------A   00030  PRINT: PRINT: PRINT
    0x5cc12acdeb80 ---------A   00100  REM  "BUNNY" FROM AHL'S 'BASIC COMPUTER GAMES'
    0x5cc12acdfed0 ---------A   00110  REM
    0x5cc12ace0050 ---------A   00120  FOR I=0 TO 4: READ B(I): NEXT I
    0x5cc12ace0100 ---------A   00130  GOSUB 260
    0x5cc12acde7d0 ---------A   00140  L=64: REM  ASCII LETTER CODE...
    0x5cc12acde860 ---------A   00150  REM
    0x5cc12ace5840 ---------A T 00160  PRINT
    0x5cc12ace5bc0 ---------A T 00170  READ X: IF X<0 THEN 160
    0x5cc12ace5de0 ---------A   00175  IF X>128 THEN 240
    0x5cc12ace61a0 ---------A   00180  PRINT TAB(X);: READ Y
    0x5cc12ace6b90 ---------A   00190  FOR I=X TO Y: J=I-5*INT(I/5)
    0x5cc12ace6fe0 ---------A   00200  PRINT CHR$(L+B(J));
    0x5cc12ace7120 ---------A   00210  NEXT I
    0x5cc12ace71b0 ---------A   00220  GOTO 170
    0x5cc12ace7220 ---------A   00230  REM
    0x5cc12ace7300 ---------A T 00240  GOSUB 260: GOTO 450
    0x5cc12ace7370 ---------B   00250  REM
    0x5cc12ace79c0 ---------B G 00260  FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x5cc12ace7a30 ---------B   00270  RETURN
    0x5cc12ace7ab0 ---------A   00280  REM
    0x5cc12ace7fc0 ---------A   00290  DATA 2,21,14,14,25
    0x5cc12ace9020 ---------A   00300  DATA 1,2,-1,0,2,45,50,-1,0,5,43,52,-1,0,7,41,52,-1
    0x5cc12acea240 ---------A   00310  DATA 1,9,37,50,-1,2,11,36,50,-1,3,13,34,49,-1,4,14,32,48,-1
    0x5cc12aceb460 ---------A   00320  DATA 5,15,31,47,-1,6,16,30,45,-1,7,17,29,44,-1,8,19,28,43,-1
    0x5cc12acec670 ---------A   00330  DATA 9,20,27,41,-1,10,21,26,40,-1,11,22,25,38,-1,12,22,24,36,-1
    0x5cc12aced420 ---------A   00340  DATA 13,34,-1,14,33,-1,15,31,-1,17,29,-1,18,27,-1
    0x5cc12acee1d0 ---------A   00350  DATA 19,26,-1,16,28,-1,13,30,-1,11,31,-1,10,32,-1
    0x5cc12acef060 ---------A   00360  DATA 8,33,-1,7,34,-1,6,13,16,34,-1,5,12,16,35,-1
    0x5cc12acefef0 ---------A   00370  DATA 4,12,16,35,-1,3,12,15,35,-1,2,35,-1,1,35,-1
    0x5cc12acf0e70 ---------A   00380  DATA 2,34,-1,3,34,-1,4,33,-1,6,33,-1,10,32,34,34,-1
    0x5cc12acf1f20 ---------A   00390  DATA 14,17,19,25,28,31,35,35,-1,15,19,23,30,36,36,-1
    0x5cc12acf2dc0 ---------A   00400  DATA 14,18,21,21,24,30,37,37,-1,13,18,23,29,33,38,-1
    0x5cc12acf3c50 ---------A   00410  DATA 12,29,31,33,-1,11,13,17,17,19,19,22,22,24,31,-1
    0x5cc12acf4680 ---------A   00420  DATA 10,11,17,18,22,22,24,24,29,29,-1
    0x5cc12acf5170 ---------A   00430  DATA 22,23,26,29,-1,27,29,-1,28,29,-1,4096
    0x5cc12acf51e0 ---------A   00440  REM
    0x5cc12acf5250 ---------A T 00450  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00160      00170T
     00170      00220T
     00240      00175T
     00260      00130G
     00450      00240T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5cc12acdd6d0 (00010)   0x5cc12acdd6d0 (00010)   0x5cc12acf5250 (00450)   0x5cc12acf5250 (00450)   
   B) 0x5cc12ace7370 (00250)   0x5cc12ace79c0 (00260)   0x5cc12ace7a30 (00270)   0x5cc12ace7a30 (00270)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/bunny.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cc12acdd6d0 ---------A   00010  PRINT TAB(33);"BUNNY"
    0x5cc12acdd670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cc12acdefc0 ----------   00030  PRINT
    0x5cc12acde2d0 ----------        a PRINT
    0x5cc12acce2b0 ---------A        b PRINT
    0x5cc12acdeb80 ---------A   00100  REM  "BUNNY" FROM AHL'S 'BASIC COMPUTER GAMES'
    0x5cc12acdfed0 ---------A   00110  REM
    0x5cc12acdde80 ----------   00120  FOR I=0 TO 4
    0x5cc12acdff90 ----------        a READ B(I)
    0x5cc12ace0050 ---------A        b NEXT I
    0x5cc12ace0100 ---------A   00130  GOSUB 260
    0x5cc12acde780 ----------   00140  L=64
    0x5cc12acde7d0 ---------A        a REM  ASCII LETTER CODE...
    0x5cc12acde860 ---------A   00150  REM
    0x5cc12ace5840 ---------A T 00160  PRINT
    0x5cc12acdfe10 ---------- T 00170  READ X
    0x5cc12ace5bc0 ---------A T      a IF X<0 THEN 160
    0x5cc12ace5de0 ---------A   00175  IF X>128 THEN 240
    0x5cc12ace5fa0 ----------   00180  PRINT TAB(X);
    0x5cc12ace61a0 ---------A        a READ Y
    0x5cc12ace6490 ----------   00190  FOR I=X TO Y
    0x5cc12ace6b90 ---------A        a J=I-5*INT(I/5)
    0x5cc12ace6fe0 ---------A   00200  PRINT CHR$(L+B(J));
    0x5cc12ace7120 ---------A   00210  NEXT I
    0x5cc12ace71b0 ---------A   00220  GOTO 170
    0x5cc12ace7220 ---------A   00230  REM
    0x5cc12ace7290 ---------- T 00240  GOSUB 260
    0x5cc12ace7300 ---------A T      a GOTO 450
    0x5cc12ace7370 ---------B   00250  REM
    0x5cc12ace7660 ---------- G 00260  FOR I=1 TO 6
    0x5cc12ace7880 ---------- G      a PRINT CHR$(10);
    0x5cc12ace79c0 ---------B G      b NEXT I
    0x5cc12ace7a30 ---------B   00270  RETURN
    0x5cc12ace7ab0 ---------A   00280  REM
    0x5cc12ace7fc0 ---------A   00290  DATA 2,21,14,14,25
    0x5cc12ace9020 ---------A   00300  DATA 1,2,-1,0,2,45,50,-1,0,5,43,52,-1,0,7,41,52,-1
    0x5cc12acea240 ---------A   00310  DATA 1,9,37,50,-1,2,11,36,50,-1,3,13,34,49,-1,4,14,32,48,-1
    0x5cc12aceb460 ---------A   00320  DATA 5,15,31,47,-1,6,16,30,45,-1,7,17,29,44,-1,8,19,28,43,-1
    0x5cc12acec670 ---------A   00330  DATA 9,20,27,41,-1,10,21,26,40,-1,11,22,25,38,-1,12,22,24,36,-1
    0x5cc12aced420 ---------A   00340  DATA 13,34,-1,14,33,-1,15,31,-1,17,29,-1,18,27,-1
    0x5cc12acee1d0 ---------A   00350  DATA 19,26,-1,16,28,-1,13,30,-1,11,31,-1,10,32,-1
    0x5cc12acef060 ---------A   00360  DATA 8,33,-1,7,34,-1,6,13,16,34,-1,5,12,16,35,-1
    0x5cc12acefef0 ---------A   00370  DATA 4,12,16,35,-1,3,12,15,35,-1,2,35,-1,1,35,-1
    0x5cc12acf0e70 ---------A   00380  DATA 2,34,-1,3,34,-1,4,33,-1,6,33,-1,10,32,34,34,-1
    0x5cc12acf1f20 ---------A   00390  DATA 14,17,19,25,28,31,35,35,-1,15,19,23,30,36,36,-1
    0x5cc12acf2dc0 ---------A   00400  DATA 14,18,21,21,24,30,37,37,-1,13,18,23,29,33,38,-1
    0x5cc12acf3c50 ---------A   00410  DATA 12,29,31,33,-1,11,13,17,17,19,19,22,22,24,31,-1
    0x5cc12acf4680 ---------A   00420  DATA 10,11,17,18,22,22,24,24,29,29,-1
    0x5cc12acf5170 ---------A   00430  DATA 22,23,26,29,-1,27,29,-1,28,29,-1,4096
    0x5cc12acf51e0 ---------A   00440  REM
    0x5cc12acf5250 ---------A T 00450  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/bunny.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cc12acdd6d0 ---------A   01000  PRINT TAB(33);"BUNNY"
    0x5cc12acdd670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cc12acdefc0 ----------   01020  PRINT
    0x5cc12acde2d0 ----------   01030  PRINT
    0x5cc12acce2b0 ---------A   01040  PRINT
    0x5cc12acdeb80 ---------A   01050  REM  "BUNNY" FROM AHL'S 'BASIC COMPUTER GAMES'
    0x5cc12acdfed0 ---------A   01060  REM
    0x5cc12acdde80 ----------   01070  FOR I=0 TO 4
    0x5cc12acdff90 ----------   01080  READ B(I)
    0x5cc12ace0050 ---------A   01090  NEXT I
    0x5cc12ace0100 ---------A   01100  GOSUB 1310
    0x5cc12acde780 ----------   01110  L=64
    0x5cc12acde7d0 ---------A   01120  REM  ASCII LETTER CODE...
    0x5cc12acde860 ---------A   01130  REM
    0x5cc12ace5840 ---------A   01140  PRINT
    0x5cc12acdfe10 ----------   01150  READ X
    0x5cc12ace5bc0 ---------A   01160  IF X<0 THEN 1140
    0x5cc12ace5de0 ---------A   01170  IF X>128 THEN 1270
    0x5cc12ace5fa0 ----------   01180  PRINT TAB(X);
    0x5cc12ace61a0 ---------A   01190  READ Y
    0x5cc12ace6490 ----------   01200  FOR I=X TO Y
    0x5cc12ace6b90 ---------A   01210  J=I-5*INT(I/5)
    0x5cc12ace6fe0 ---------A   01220  PRINT CHR$(L+B(J));
    0x5cc12ace7120 ---------A   01230  NEXT I
    0x5cc12ace71b0 ---------A   01240  GOTO 1160
    0x5cc12ace7220 ---------A   01250  REM
    0x5cc12ace7290 ----------   01260  GOSUB 1310
    0x5cc12ace7300 ---------A   01270  GOTO 1500
    0x5cc12ace7370 ---------B   01280  REM
    0x5cc12ace7660 ----------   01290  FOR I=1 TO 6
    0x5cc12ace7880 ----------   01300  PRINT CHR$(10);
    0x5cc12ace79c0 ---------B   01310  NEXT I
    0x5cc12ace7a30 ---------B   01320  RETURN
    0x5cc12ace7ab0 ---------A   01330  REM
    0x5cc12ace7fc0 ---------A   01340  DATA 2,21,14,14,25
    0x5cc12ace9020 ---------A   01350  DATA 1,2,-1,0,2,45,50,-1,0,5,43,52,-1,0,7,41,52,-1
    0x5cc12acea240 ---------A   01360  DATA 1,9,37,50,-1,2,11,36,50,-1,3,13,34,49,-1,4,14,32,48,-1
    0x5cc12aceb460 ---------A   01370  DATA 5,15,31,47,-1,6,16,30,45,-1,7,17,29,44,-1,8,19,28,43,-1
    0x5cc12acec670 ---------A   01380  DATA 9,20,27,41,-1,10,21,26,40,-1,11,22,25,38,-1,12,22,24,36,-1
    0x5cc12aced420 ---------A   01390  DATA 13,34,-1,14,33,-1,15,31,-1,17,29,-1,18,27,-1
    0x5cc12acee1d0 ---------A   01400  DATA 19,26,-1,16,28,-1,13,30,-1,11,31,-1,10,32,-1
    0x5cc12acef060 ---------A   01410  DATA 8,33,-1,7,34,-1,6,13,16,34,-1,5,12,16,35,-1
    0x5cc12acefef0 ---------A   01420  DATA 4,12,16,35,-1,3,12,15,35,-1,2,35,-1,1,35,-1
    0x5cc12acf0e70 ---------A   01430  DATA 2,34,-1,3,34,-1,4,33,-1,6,33,-1,10,32,34,34,-1
    0x5cc12acf1f20 ---------A   01440  DATA 14,17,19,25,28,31,35,35,-1,15,19,23,30,36,36,-1
    0x5cc12acf2dc0 ---------A   01450  DATA 14,18,21,21,24,30,37,37,-1,13,18,23,29,33,38,-1
    0x5cc12acf3c50 ---------A   01460  DATA 12,29,31,33,-1,11,13,17,17,19,19,22,22,24,31,-1
    0x5cc12acf4680 ---------A   01470  DATA 10,11,17,18,22,22,24,24,29,29,-1
    0x5cc12acf5170 ---------A   01480  DATA 22,23,26,29,-1,27,29,-1,28,29,-1,4096
    0x5cc12acf51e0 ---------A   01490  REM
    0x5cc12acf5250 ---------A   01500  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01490 - 10000    8520 

 */



/*
 *  Symbol Table Listing for 'basic/bunny.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B               Array    Integer         {0,9} 
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
    Y                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bunny.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cc12acdd6d0 ---------A   01000  PRINT TAB(33);"BUNNY"
    0x5cc12acdd670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cc12acdefc0 ---------A   01020  PRINT
    0x5cc12acde2d0 ---------A   01030  PRINT
    0x5cc12acce2b0 ---------A   01040  PRINT
    0x5cc12acdeb80 ---------A   01050  REM  "BUNNY" FROM AHL'S 'BASIC COMPUTER GAMES'
    0x5cc12acdfed0 ---------A   01060  REM
    0x5cc12acdde80 ---------A   01070  FOR I=0 TO 4
    0x5cc12acdff90 ---------A   01080  READ B(I)
    0x5cc12ace0050 ---------A   01090  NEXT I
    0x5cc12ace0100 ---------A   01100  GOSUB 1460
    0x5cc12acde780 ---------A   01110  L=64
    0x5cc12acde7d0 ---------A   01120  REM  ASCII LETTER CODE...
    0x5cc12acde860 ---------A   01130  REM
    0x5cc12ace5840 ---------A T 01140  PRINT
    0x5cc12acdfe10 ---------A   01150  READ X
    0x5cc12ace5bc0 ---------A T 01160  IF X<0 THEN 1140
    0x5cc12ace5de0 ---------A   01170  IF X>128 THEN 1260
    0x5cc12ace5fa0 ---------A   01180  PRINT TAB(X);
    0x5cc12ace61a0 ---------A   01190  READ Y
    0x5cc12ace6490 ---------A   01200  FOR I=X TO Y
    0x5cc12ace6b90 ---------A   01210  J=I-5*INT(I/5)
    0x5cc12ace6fe0 ---------A   01220  PRINT CHR$(L+B(J));
    0x5cc12ace7120 ---------A   01230  NEXT I
    0x5cc12ace71b0 ---------A   01240  GOTO 1160
    0x5cc12ace7220 ---------A   01250  REM
    0x5cc12ace7300 ---------A T 01260  GOTO 1450
    0x5cc12ace7370 ---------A   01270  REM
    0x5cc12ace7ab0 ---------A   01280  REM
    0x5cc12ace7fc0 ---------A   01290  DATA 2,21,14,14,25
    0x5cc12ace9020 ---------A   01300  DATA 1,2,-1,0,2,45,50,-1,0,5,43,52,-1,0,7,41,52,-1
    0x5cc12acea240 ---------A   01310  DATA 1,9,37,50,-1,2,11,36,50,-1,3,13,34,49,-1,4,14,32,48,-1
    0x5cc12aceb460 ---------A   01320  DATA 5,15,31,47,-1,6,16,30,45,-1,7,17,29,44,-1,8,19,28,43,-1
    0x5cc12acec670 ---------A   01330  DATA 9,20,27,41,-1,10,21,26,40,-1,11,22,25,38,-1,12,22,24,36,-1
    0x5cc12aced420 ---------A   01340  DATA 13,34,-1,14,33,-1,15,31,-1,17,29,-1,18,27,-1
    0x5cc12acee1d0 ---------A   01350  DATA 19,26,-1,16,28,-1,13,30,-1,11,31,-1,10,32,-1
    0x5cc12acef060 ---------A   01360  DATA 8,33,-1,7,34,-1,6,13,16,34,-1,5,12,16,35,-1
    0x5cc12acefef0 ---------A   01370  DATA 4,12,16,35,-1,3,12,15,35,-1,2,35,-1,1,35,-1
    0x5cc12acf0e70 ---------A   01380  DATA 2,34,-1,3,34,-1,4,33,-1,6,33,-1,10,32,34,34,-1
    0x5cc12acf1f20 ---------A   01390  DATA 14,17,19,25,28,31,35,35,-1,15,19,23,30,36,36,-1
    0x5cc12acf2dc0 ---------A   01400  DATA 14,18,21,21,24,30,37,37,-1,13,18,23,29,33,38,-1
    0x5cc12acf3c50 ---------A   01410  DATA 12,29,31,33,-1,11,13,17,17,19,19,22,22,24,31,-1
    0x5cc12acf4680 ---------A   01420  DATA 10,11,17,18,22,22,24,24,29,29,-1
    0x5cc12acf5170 ---------A   01430  DATA 22,23,26,29,-1,27,29,-1,28,29,-1,4096
    0x5cc12acf51e0 ---------A   01440  REM
    0x5cc12acf5250 ---------A T 01450  END
    0x5cc12ace79c0 ---------B G 01460  NEXT I
    0x5cc12acf8bb0 ---------B   01470  GOTO 01480
    0x5cc12acf9a60 ---------B T 01480  RETURN
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
char* data_01290s[]={"2","21","14","14","25"};
char* data_01300s[]={"1","2","-1","0","2","45","50","-1","0","5","43","52","-1","0","7","41","52","-1"};
char* data_01310s[]={"1","9","37","50","-1","2","11","36","50","-1","3","13","34","49","-1","4","14","32","48","-1"};
char* data_01320s[]={"5","15","31","47","-1","6","16","30","45","-1","7","17","29","44","-1","8","19","28","43","-1"};
char* data_01330s[]={"9","20","27","41","-1","10","21","26","40","-1","11","22","25","38","-1","12","22","24","36","-1"};
char* data_01340s[]={"13","34","-1","14","33","-1","15","31","-1","17","29","-1","18","27","-1"};
char* data_01350s[]={"19","26","-1","16","28","-1","13","30","-1","11","31","-1","10","32","-1"};
char* data_01360s[]={"8","33","-1","7","34","-1","6","13","16","34","-1","5","12","16","35","-1"};
char* data_01370s[]={"4","12","16","35","-1","3","12","15","35","-1","2","35","-1","1","35","-1"};
char* data_01380s[]={"2","34","-1","3","34","-1","4","33","-1","6","33","-1","10","32","34","34","-1"};
char* data_01390s[]={"14","17","19","25","28","31","35","35","-1","15","19","23","30","36","36","-1"};
char* data_01400s[]={"14","18","21","21","24","30","37","37","-1","13","18","23","29","33","38","-1"};
char* data_01410s[]={"12","29","31","33","-1","11","13","17","17","19","19","22","22","24","31","-1"};
char* data_01420s[]={"10","11","17","18","22","22","24","24","29","29","-1"};
char* data_01430s[]={"22","23","26","29","-1","27","29","-1","28","29","-1","4096"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1290,  5,data_01290s},
    { 1300, 18,data_01300s},
    { 1310, 20,data_01310s},
    { 1320, 20,data_01320s},
    { 1330, 20,data_01330s},
    { 1340, 15,data_01340s},
    { 1350, 15,data_01350s},
    { 1360, 16,data_01360s},
    { 1370, 16,data_01370s},
    { 1380, 17,data_01380s},
    { 1390, 16,data_01390s},
    { 1400, 16,data_01400s},
    { 1410, 16,data_01410s},
    { 1420, 11,data_01420s},
    { 1430, 12,data_01430s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    B_int_arr[10];                             // Basic: B 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01460();

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

void Routine_01460(){
    // 01460 NEXT I
    int dummy_1460=0; // Ignore this line.
}; // End-For(I_int)
// 01470 GOTO 01480
goto Lbl_01480;

  Lbl_01480:
// 01480 RETURN
return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"BUNNY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"BUNNY");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 REM  "BUNNY" FROM AHL'S 'BASIC COMPUTER GAMES'
    // 01060 REM
    // 01070 FOR I=0 TO 4
    for(I_int=0;I_int<=4;I_int++){
        // 01080 READ B(I)
        B_int_arr[I_int] = Get_Data_Int();
        // 01090 NEXT I
        int dummy_1090=0; // Ignore this line.
    }; // End-For(I_int)
    // 01100 GOSUB 1460
    Routine_01460();
    // 01110 L=64
    L_int = 64;
    // 01120 REM  ASCII LETTER CODE...
    // 01130 REM

  Lbl_01140:
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 READ X
    X_int = Get_Data_Int();

  Lbl_01160:
    // 01160 IF X<0 THEN 1140
    if(X_int<0)goto Lbl_01140;
    // 01170 IF X>128 THEN 1260
    if(X_int>128)goto Lbl_01260;
    // 01180 PRINT TAB(X);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,X_int;fputs(buf,fh); };
    // 01190 READ Y
    Y_int = Get_Data_Int();
    // 01200 FOR I=X TO Y
    for(I_int=X_int;I_int<=Y_int;I_int++){
        // 01210 J=I-5*INT(I/5)
        J_int = I_int-5*INT(I_int/5);
        // 01220 PRINT CHR$(L+B(J));
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(L_int+B_int_arr[J_int]));fputs(buf,fh); };
        // 01230 NEXT I
        int dummy_1230=0; // Ignore this line.
    }; // End-For(I_int)
    // 01240 GOTO 1160
    goto Lbl_01160;
    // 01250 REM

  Lbl_01260:
    // 01260 GOTO 1450
    goto Lbl_01450;
    // 01270 REM
    // 01280 REM
    // 01290 DATA 2,21,14,14,25
    // 01300 DATA 1,2,-1,0,2,45,50,-1,0,5,43,52,-1,0,7,41,52,-1
    // 01310 DATA 1,9,37,50,-1,2,11,36,50,-1,3,13,34,49,-1,4,14,32,48,-1
    // 01320 DATA 5,15,31,47,-1,6,16,30,45,-1,7,17,29,44,-1,8,19,28,43,-1
    // 01330 DATA 9,20,27,41,-1,10,21,26,40,-1,11,22,25,38,-1,12,22,24,36,-1
    // 01340 DATA 13,34,-1,14,33,-1,15,31,-1,17,29,-1,18,27,-1
    // 01350 DATA 19,26,-1,16,28,-1,13,30,-1,11,31,-1,10,32,-1
    // 01360 DATA 8,33,-1,7,34,-1,6,13,16,34,-1,5,12,16,35,-1
    // 01370 DATA 4,12,16,35,-1,3,12,15,35,-1,2,35,-1,1,35,-1
    // 01380 DATA 2,34,-1,3,34,-1,4,33,-1,6,33,-1,10,32,34,34,-1
    // 01390 DATA 14,17,19,25,28,31,35,35,-1,15,19,23,30,36,36,-1
    // 01400 DATA 14,18,21,21,24,30,37,37,-1,13,18,23,29,33,38,-1
    // 01410 DATA 12,29,31,33,-1,11,13,17,17,19,19,22,22,24,31,-1
    // 01420 DATA 10,11,17,18,22,22,24,24,29,29,-1
    // 01430 DATA 22,23,26,29,-1,27,29,-1,28,29,-1,4096
    // 01440 REM

  Lbl_01450:
    // 01450 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
