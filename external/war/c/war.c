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
    0x5fc1dd8cf6d0 ---------A   00010  PRINT TAB(33);"WAR"
    0x5fc1dd8cf670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fc1dd8c02b0 ---------A   00030  PRINT: PRINT: PRINT
    0x5fc1dd8d1a20 ---------A   00100  PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x5fc1dd8d0080 ---------A   00110  PRINT "AS S-7 FOR SPADE 7.  ";
    0x5fc1dd8cfe80 ---------A T 00120  PRINT "DO YOU WANT DIRECTIONS";
    0x5fc1dd8cfc80 ---------A   00130  INPUT B$
    0x5fc1dd8d15a0 ---------A   00140  IF B$="NO" THEN 210
    0x5fc1dd8d0780 ---------A   00150  IF B$="YES" THEN 180
    0x5fc1dd8d7800 ---------A   00160  PRINT "YES OR NO, PLEASE.  ";
    0x5fc1dd8d1f30 ---------A   00170  GOTO 120
    0x5fc1dd8d7970 ---------A T 00180  PRINT "THE COMPUTER GIVES YOU AND IT A 'CARD'.  THE HIGHER CARD"
    0x5fc1dd8d7b30 ---------A   00190  PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NOT TO"
    0x5fc1dd8d7c90 ---------A   00200  PRINT "CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x5fc1dd8d7cf0 ---------A T 00210  PRINT
    0x5fc1dd8d7d50 ---------A   00220  PRINT
    0x5fc1dd8d8290 ---------A   00230  DIM A$(52),L(54)
    0x5fc1dd8d8620 ---------A   00240  FOR I=1 TO 52
    0x5fc1dd8d8860 ---------A   00250  READ A$(I)
    0x5fc1dd8d8990 ---------A   00260  NEXT I
    0x5fc1dd8d8a20 ---------A   00270  REM
    0x5fc1dd8d8db0 ---------A   00280  FOR J=1 TO 52
    0x5fc1dd8d9470 ---------A T 00290  LET L(J)=INT(52*RND(1))+1
    0x5fc1dd8d96c0 ---------A   00295  IF J=1 THEN 350
    0x5fc1dd8d9b60 ---------A   00300  FOR K=1 TO J-1
    0x5fc1dd8d9fa0 ---------A   00310  IF L(K)<>L(J) THEN 340
    0x5fc1dd8da020 ---------A   00320  REM
    0x5fc1dd8da0b0 ---------A   00330  GOTO 290
    0x5fc1dd8da1e0 ---------A T 00340  NEXT K
    0x5fc1dd8da330 ---------A T 00350  NEXT J
    0x5fc1dd8da740 ---------A T 00360  P=P+1
    0x5fc1dd8dab10 ---------A   00370  M1=L(P)
    0x5fc1dd8dae40 ---------A   00380  P=P+1
    0x5fc1dd8db420 ---------A   00390  M2=L(P)
    0x5fc1dd8db4b0 ---------A   00400  PRINT
    0x5fc1dd8dbad0 ---------A   00420  PRINT "YOU: ";A$(M1),"COMPUTER: ";A$(M2)
    0x5fc1dd8dc0f0 ---------A   00430  N1=INT((M1-.5)/4)
    0x5fc1dd8dc700 ---------A   00440  N2=INT((M2-.5)/4)
    0x5fc1dd8dc970 ---------A   00450  IF N1>=N2 THEN 490
    0x5fc1dd8dcda0 ---------A   00460  A1=A1+1
    0x5fc1dd8dd2c0 ---------A   00470  PRINT "THE COMPUTER WINS!!! YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x5fc1dd8dd340 ---------A   00480  GOTO 540
    0x5fc1dd8dd5b0 ---------A T 00490  IF N1=N2 THEN 530
    0x5fc1dd8dd920 ---------A   00500  B1=B1+1
    0x5fc1dd8ddd70 ---------A   00510  PRINT "YOU WIN. YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x5fc1dd8dde00 ---------A   00520  GOTO 540
    0x5fc1dd8ddf70 ---------A T 00530  PRINT "TIE.  NO SCORE CHANGE."
    0x5fc1dd8de3c0 ---------A T 00540  IF L(P+1)=0 THEN 610
    0x5fc1dd8de550 ---------A   00550  PRINT "DO YOU WANT TO CONTINUE";
    0x5fc1dd8de780 ---------A   00560  INPUT V$
    0x5fc1dd8dea00 ---------A   00570  IF V$="YES" THEN 360
    0x5fc1dd8dec90 ---------A   00580  IF V$="NO" THEN 650
    0x5fc1dd8dee10 ---------A   00590  PRINT "YES OR NO, PLEASE.  ";
    0x5fc1dd8dee90 ---------A   00600  GOTO 540
    0x5fc1dd8def00 ---------A T 00610  PRINT
    0x5fc1dd8defb0 ---------A   00620  PRINT
    0x5fc1dd8df260 ---------A   00630  PRINT "WE HAVE RUN OUT OF CARDS.  FINAL SCORE:  YOU: ";B1;
    0x5fc1dd8df540 ---------A   00640  PRINT "  THE COMPUTER: ";A1:PRINT
    0x5fc1dd8df6b0 ---------A T 00650  PRINT "THANKS FOR PLAYING.  IT WAS FUN."
    0x5fc1dd8df760 ---------A   00655  PRINT
    0x5fc1dd8dff10 ---------A   00660  DATA "S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3"
    0x5fc1dd8e06b0 ---------A   00670  DATA "S-4","H-4","C-4","D-4","S-5","H-5","C-5","D-5"
    0x5fc1dd8e0e50 ---------A   00680  DATA "S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7"
    0x5fc1dd8e15f0 ---------A   00690  DATA "S-8","H-8","C-8","D-8","S-9","H-9","C-9","D-9"
    0x5fc1dd8e1d90 ---------A   00700  DATA "S-10","H-10","C-10","D-10","S-J","H-J","C-J","D-J"
    0x5fc1dd8e2920 ---------A   00710  DATA "S-Q","H-Q","C-Q","D-Q","S-K","H-K","C-K","D-K"
    0x5fc1dd8e2d10 ---------A   00720  DATA "S-A","H-A","C-A","D-A"
    0x5fc1dd8e2d60 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00120      00170T
     00180      00150T
     00210      00140T
     00290      00330T
     00340      00310T
     00350      00295T
     00360      00570T
     00490      00450T
     00530      00490T
     00540      00480T, 00520T, 00600T
     00610      00540T
     00650      00580T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5fc1dd8cf6d0 (00010)   0x5fc1dd8cf6d0 (00010)   0x5fc1dd8e2d60 (00999)   0x5fc1dd8e2d60 (00999)   


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
    0x5fc1dd8cf6d0 ---------A   00010  PRINT TAB(33);"WAR"
    0x5fc1dd8cf670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fc1dd8d02d0 ----------   00030  PRINT
    0x5fc1dd8d0910 ----------        a PRINT
    0x5fc1dd8c02b0 ---------A        b PRINT
    0x5fc1dd8d1a20 ---------A   00100  PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x5fc1dd8d0080 ---------A   00110  PRINT "AS S-7 FOR SPADE 7.  ";
    0x5fc1dd8cfe80 ---------A T 00120  PRINT "DO YOU WANT DIRECTIONS";
    0x5fc1dd8cfc80 ---------A   00130  INPUT B$
    0x5fc1dd8d15a0 ---------A   00140  IF B$="NO" THEN 210
    0x5fc1dd8d0780 ---------A   00150  IF B$="YES" THEN 180
    0x5fc1dd8d7800 ---------A   00160  PRINT "YES OR NO, PLEASE.  ";
    0x5fc1dd8d1f30 ---------A   00170  GOTO 120
    0x5fc1dd8d7970 ---------A T 00180  PRINT "THE COMPUTER GIVES YOU AND IT A 'CARD'.  THE HIGHER CARD"
    0x5fc1dd8d7b30 ---------A   00190  PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NOT TO"
    0x5fc1dd8d7c90 ---------A   00200  PRINT "CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x5fc1dd8d7cf0 ---------A T 00210  PRINT
    0x5fc1dd8d7d50 ---------A   00220  PRINT
    0x5fc1dd8d8290 ---------A   00230  DIM A$(52),L(54)
    0x5fc1dd8d8620 ---------A   00240  FOR I=1 TO 52
    0x5fc1dd8d8860 ---------A   00250  READ A$(I)
    0x5fc1dd8d8990 ---------A   00260  NEXT I
    0x5fc1dd8d8a20 ---------A   00270  REM
    0x5fc1dd8d8db0 ---------A   00280  FOR J=1 TO 52
    0x5fc1dd8d9470 ---------A T 00290  LET L(J)=INT(52*RND(1))+1
    0x5fc1dd8d96c0 ---------A   00295  IF J=1 THEN 350
    0x5fc1dd8d9b60 ---------A   00300  FOR K=1 TO J-1
    0x5fc1dd8d9fa0 ---------A   00310  IF L(K)<>L(J) THEN 340
    0x5fc1dd8da020 ---------A   00320  REM
    0x5fc1dd8da0b0 ---------A   00330  GOTO 290
    0x5fc1dd8da1e0 ---------A T 00340  NEXT K
    0x5fc1dd8da330 ---------A T 00350  NEXT J
    0x5fc1dd8da740 ---------A T 00360  P=P+1
    0x5fc1dd8dab10 ---------A   00370  M1=L(P)
    0x5fc1dd8dae40 ---------A   00380  P=P+1
    0x5fc1dd8db420 ---------A   00390  M2=L(P)
    0x5fc1dd8db4b0 ---------A   00400  PRINT
    0x5fc1dd8dbad0 ---------A   00420  PRINT "YOU: ";A$(M1),"COMPUTER: ";A$(M2)
    0x5fc1dd8dc0f0 ---------A   00430  N1=INT((M1-.5)/4)
    0x5fc1dd8dc700 ---------A   00440  N2=INT((M2-.5)/4)
    0x5fc1dd8dc970 ---------A   00450  IF N1>=N2 THEN 490
    0x5fc1dd8dcda0 ---------A   00460  A1=A1+1
    0x5fc1dd8dd2c0 ---------A   00470  PRINT "THE COMPUTER WINS!!! YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x5fc1dd8dd340 ---------A   00480  GOTO 540
    0x5fc1dd8dd5b0 ---------A T 00490  IF N1=N2 THEN 530
    0x5fc1dd8dd920 ---------A   00500  B1=B1+1
    0x5fc1dd8ddd70 ---------A   00510  PRINT "YOU WIN. YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x5fc1dd8dde00 ---------A   00520  GOTO 540
    0x5fc1dd8ddf70 ---------A T 00530  PRINT "TIE.  NO SCORE CHANGE."
    0x5fc1dd8de3c0 ---------A T 00540  IF L(P+1)=0 THEN 610
    0x5fc1dd8de550 ---------A   00550  PRINT "DO YOU WANT TO CONTINUE";
    0x5fc1dd8de780 ---------A   00560  INPUT V$
    0x5fc1dd8dea00 ---------A   00570  IF V$="YES" THEN 360
    0x5fc1dd8dec90 ---------A   00580  IF V$="NO" THEN 650
    0x5fc1dd8dee10 ---------A   00590  PRINT "YES OR NO, PLEASE.  ";
    0x5fc1dd8dee90 ---------A   00600  GOTO 540
    0x5fc1dd8def00 ---------A T 00610  PRINT
    0x5fc1dd8defb0 ---------A   00620  PRINT
    0x5fc1dd8df260 ---------A   00630  PRINT "WE HAVE RUN OUT OF CARDS.  FINAL SCORE:  YOU: ";B1;
    0x5fc1dd8df4a0 ----------   00640  PRINT "  THE COMPUTER: ";A1
    0x5fc1dd8df540 ---------A        a PRINT
    0x5fc1dd8df6b0 ---------A T 00650  PRINT "THANKS FOR PLAYING.  IT WAS FUN."
    0x5fc1dd8df760 ---------A   00655  PRINT
    0x5fc1dd8dff10 ---------A   00660  DATA "S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3"
    0x5fc1dd8e06b0 ---------A   00670  DATA "S-4","H-4","C-4","D-4","S-5","H-5","C-5","D-5"
    0x5fc1dd8e0e50 ---------A   00680  DATA "S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7"
    0x5fc1dd8e15f0 ---------A   00690  DATA "S-8","H-8","C-8","D-8","S-9","H-9","C-9","D-9"
    0x5fc1dd8e1d90 ---------A   00700  DATA "S-10","H-10","C-10","D-10","S-J","H-J","C-J","D-J"
    0x5fc1dd8e2920 ---------A   00710  DATA "S-Q","H-Q","C-Q","D-Q","S-K","H-K","C-K","D-K"
    0x5fc1dd8e2d10 ---------A   00720  DATA "S-A","H-A","C-A","D-A"
    0x5fc1dd8e2d60 ---------A   00999  END
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
    0x5fc1dd8cf6d0 ---------A   01000  PRINT TAB(33);"WAR"
    0x5fc1dd8cf670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fc1dd8d02d0 ----------   01020  PRINT
    0x5fc1dd8d0910 ----------   01030  PRINT
    0x5fc1dd8c02b0 ---------A   01040  PRINT
    0x5fc1dd8d1a20 ---------A   01050  PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x5fc1dd8d0080 ---------A   01060  PRINT "AS S-7 FOR SPADE 7.  ";
    0x5fc1dd8cfe80 ---------A   01070  PRINT "DO YOU WANT DIRECTIONS";
    0x5fc1dd8cfc80 ---------A   01080  INPUT B$
    0x5fc1dd8d15a0 ---------A   01090  IF B$="NO" THEN 1160
    0x5fc1dd8d0780 ---------A   01100  IF B$="YES" THEN 1130
    0x5fc1dd8d7800 ---------A   01110  PRINT "YES OR NO, PLEASE.  ";
    0x5fc1dd8d1f30 ---------A   01120  GOTO 1070
    0x5fc1dd8d7970 ---------A   01130  PRINT "THE COMPUTER GIVES YOU AND IT A 'CARD'.  THE HIGHER CARD"
    0x5fc1dd8d7b30 ---------A   01140  PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NOT TO"
    0x5fc1dd8d7c90 ---------A   01150  PRINT "CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x5fc1dd8d7cf0 ---------A   01160  PRINT
    0x5fc1dd8d7d50 ---------A   01170  PRINT
    0x5fc1dd8d8290 ---------A   01180  DIM A$(52),L(54)
    0x5fc1dd8d8620 ---------A   01190  FOR I=1 TO 52
    0x5fc1dd8d8860 ---------A   01200  READ A$(I)
    0x5fc1dd8d8990 ---------A   01210  NEXT I
    0x5fc1dd8d8a20 ---------A   01220  REM
    0x5fc1dd8d8db0 ---------A   01230  FOR J=1 TO 52
    0x5fc1dd8d9470 ---------A   01240  LET L(J)=INT(52*RND(1))+1
    0x5fc1dd8d96c0 ---------A   01250  IF J=1 THEN 1310
    0x5fc1dd8d9b60 ---------A   01260  FOR K=1 TO J-1
    0x5fc1dd8d9fa0 ---------A   01270  IF L(K)<>L(J) THEN 1300
    0x5fc1dd8da020 ---------A   01280  REM
    0x5fc1dd8da0b0 ---------A   01290  GOTO 1240
    0x5fc1dd8da1e0 ---------A   01300  NEXT K
    0x5fc1dd8da330 ---------A   01310  NEXT J
    0x5fc1dd8da740 ---------A   01320  P=P+1
    0x5fc1dd8dab10 ---------A   01330  M1=L(P)
    0x5fc1dd8dae40 ---------A   01340  P=P+1
    0x5fc1dd8db420 ---------A   01350  M2=L(P)
    0x5fc1dd8db4b0 ---------A   01360  PRINT
    0x5fc1dd8dbad0 ---------A   01370  PRINT "YOU: ";A$(M1),"COMPUTER: ";A$(M2)
    0x5fc1dd8dc0f0 ---------A   01380  N1=INT((M1-.5)/4)
    0x5fc1dd8dc700 ---------A   01390  N2=INT((M2-.5)/4)
    0x5fc1dd8dc970 ---------A   01400  IF N1>=N2 THEN 1440
    0x5fc1dd8dcda0 ---------A   01410  A1=A1+1
    0x5fc1dd8dd2c0 ---------A   01420  PRINT "THE COMPUTER WINS!!! YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x5fc1dd8dd340 ---------A   01430  GOTO 1490
    0x5fc1dd8dd5b0 ---------A   01440  IF N1=N2 THEN 1480
    0x5fc1dd8dd920 ---------A   01450  B1=B1+1
    0x5fc1dd8ddd70 ---------A   01460  PRINT "YOU WIN. YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x5fc1dd8dde00 ---------A   01470  GOTO 1490
    0x5fc1dd8ddf70 ---------A   01480  PRINT "TIE.  NO SCORE CHANGE."
    0x5fc1dd8de3c0 ---------A   01490  IF L(P+1)=0 THEN 1560
    0x5fc1dd8de550 ---------A   01500  PRINT "DO YOU WANT TO CONTINUE";
    0x5fc1dd8de780 ---------A   01510  INPUT V$
    0x5fc1dd8dea00 ---------A   01520  IF V$="YES" THEN 1320
    0x5fc1dd8dec90 ---------A   01530  IF V$="NO" THEN 1610
    0x5fc1dd8dee10 ---------A   01540  PRINT "YES OR NO, PLEASE.  ";
    0x5fc1dd8dee90 ---------A   01550  GOTO 1490
    0x5fc1dd8def00 ---------A   01560  PRINT
    0x5fc1dd8defb0 ---------A   01570  PRINT
    0x5fc1dd8df260 ---------A   01580  PRINT "WE HAVE RUN OUT OF CARDS.  FINAL SCORE:  YOU: ";B1;
    0x5fc1dd8df4a0 ----------   01590  PRINT "  THE COMPUTER: ";A1
    0x5fc1dd8df540 ---------A   01600  PRINT
    0x5fc1dd8df6b0 ---------A   01610  PRINT "THANKS FOR PLAYING.  IT WAS FUN."
    0x5fc1dd8df760 ---------A   01620  PRINT
    0x5fc1dd8dff10 ---------A   01630  DATA "S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3"
    0x5fc1dd8e06b0 ---------A   01640  DATA "S-4","H-4","C-4","D-4","S-5","H-5","C-5","D-5"
    0x5fc1dd8e0e50 ---------A   01650  DATA "S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7"
    0x5fc1dd8e15f0 ---------A   01660  DATA "S-8","H-8","C-8","D-8","S-9","H-9","C-9","D-9"
    0x5fc1dd8e1d90 ---------A   01670  DATA "S-10","H-10","C-10","D-10","S-J","H-J","C-J","D-J"
    0x5fc1dd8e2920 ---------A   01680  DATA "S-Q","H-Q","C-Q","D-Q","S-K","H-K","C-K","D-K"
    0x5fc1dd8e2d10 ---------A   01690  DATA "S-A","H-A","C-A","D-A"
    0x5fc1dd8e2d60 ---------A   01700  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01710 - 10000    8300 

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
    0x5fc1dd8cf6d0 ---------A   01000  PRINT TAB(33);"WAR"
    0x5fc1dd8cf670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fc1dd8d02d0 ---------A   01020  PRINT
    0x5fc1dd8d0910 ---------A   01030  PRINT
    0x5fc1dd8c02b0 ---------A   01040  PRINT
    0x5fc1dd8d1a20 ---------A   01050  PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x5fc1dd8d0080 ---------A   01060  PRINT "AS S-7 FOR SPADE 7.  ";
    0x5fc1dd8cfe80 ---------A T 01070  PRINT "DO YOU WANT DIRECTIONS";
    0x5fc1dd8cfc80 ---------A   01080  INPUT B$
    0x5fc1dd8d15a0 ---------A   01090  IF B$="NO" THEN 1160
    0x5fc1dd8d0780 ---------A   01100  IF B$="YES" THEN 1130
    0x5fc1dd8d7800 ---------A   01110  PRINT "YES OR NO, PLEASE.  ";
    0x5fc1dd8d1f30 ---------A   01120  GOTO 1070
    0x5fc1dd8d7970 ---------A T 01130  PRINT "THE COMPUTER GIVES YOU AND IT A 'CARD'.  THE HIGHER CARD"
    0x5fc1dd8d7b30 ---------A   01140  PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NOT TO"
    0x5fc1dd8d7c90 ---------A   01150  PRINT "CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x5fc1dd8d7cf0 ---------A T 01160  PRINT
    0x5fc1dd8d7d50 ---------A   01170  PRINT
    0x5fc1dd8d8290 ---------A   01180  DIM A$(52),L(54)
    0x5fc1dd8d8620 ---------A   01190  FOR I=1 TO 52
    0x5fc1dd8d8860 ---------A   01200  READ A$(I)
    0x5fc1dd8d8990 ---------A   01210  NEXT I
    0x5fc1dd8d8a20 ---------A   01220  REM
    0x5fc1dd8d8db0 ---------A   01230  FOR J=1 TO 52
    0x5fc1dd8d9470 ---------A T 01240  LET L(J)=INT(52*RND(1))+1
    0x5fc1dd8d96c0 ---------A   01250  IF J=1 THEN 1310
    0x5fc1dd8d9b60 ---------A   01260  FOR K=1 TO J-1
    0x5fc1dd8d9fa0 ---------A   01270  IF L(K)<>L(J) THEN 1300
    0x5fc1dd8da020 ---------A   01280  REM
    0x5fc1dd8da0b0 ---------A   01290  GOTO 1240
    0x5fc1dd8da1e0 ---------A T 01300  NEXT K
    0x5fc1dd8da330 ---------A T 01310  NEXT J
    0x5fc1dd8da740 ---------A T 01320  P=P+1
    0x5fc1dd8dab10 ---------A   01330  M1=L(P)
    0x5fc1dd8dae40 ---------A   01340  P=P+1
    0x5fc1dd8db420 ---------A   01350  M2=L(P)
    0x5fc1dd8db4b0 ---------A   01360  PRINT
    0x5fc1dd8dbad0 ---------A   01370  PRINT "YOU: ";A$(M1),"COMPUTER: ";A$(M2)
    0x5fc1dd8dc0f0 ---------A   01380  N1=INT((M1-.5)/4)
    0x5fc1dd8dc700 ---------A   01390  N2=INT((M2-.5)/4)
    0x5fc1dd8dc970 ---------A   01400  IF N1>=N2 THEN 1440
    0x5fc1dd8dcda0 ---------A   01410  A1=A1+1
    0x5fc1dd8dd2c0 ---------A   01420  PRINT "THE COMPUTER WINS!!! YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x5fc1dd8dd340 ---------A   01430  GOTO 1490
    0x5fc1dd8dd5b0 ---------A T 01440  IF N1=N2 THEN 1480
    0x5fc1dd8dd920 ---------A   01450  B1=B1+1
    0x5fc1dd8ddd70 ---------A   01460  PRINT "YOU WIN. YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x5fc1dd8dde00 ---------A   01470  GOTO 1490
    0x5fc1dd8ddf70 ---------A T 01480  PRINT "TIE.  NO SCORE CHANGE."
    0x5fc1dd8de3c0 ---------A T 01490  IF L(P+1)=0 THEN 1560
    0x5fc1dd8de550 ---------A   01500  PRINT "DO YOU WANT TO CONTINUE";
    0x5fc1dd8de780 ---------A   01510  INPUT V$
    0x5fc1dd8dea00 ---------A   01520  IF V$="YES" THEN 1320
    0x5fc1dd8dec90 ---------A   01530  IF V$="NO" THEN 1610
    0x5fc1dd8dee10 ---------A   01540  PRINT "YES OR NO, PLEASE.  ";
    0x5fc1dd8dee90 ---------A   01550  GOTO 1490
    0x5fc1dd8def00 ---------A T 01560  PRINT
    0x5fc1dd8defb0 ---------A   01570  PRINT
    0x5fc1dd8df260 ---------A   01580  PRINT "WE HAVE RUN OUT OF CARDS.  FINAL SCORE:  YOU: ";B1;
    0x5fc1dd8df4a0 ---------A   01590  PRINT "  THE COMPUTER: ";A1
    0x5fc1dd8df540 ---------A   01600  PRINT
    0x5fc1dd8df6b0 ---------A T 01610  PRINT "THANKS FOR PLAYING.  IT WAS FUN."
    0x5fc1dd8df760 ---------A   01620  PRINT
    0x5fc1dd8dff10 ---------A   01630  DATA "S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3"
    0x5fc1dd8e06b0 ---------A   01640  DATA "S-4","H-4","C-4","D-4","S-5","H-5","C-5","D-5"
    0x5fc1dd8e0e50 ---------A   01650  DATA "S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7"
    0x5fc1dd8e15f0 ---------A   01660  DATA "S-8","H-8","C-8","D-8","S-9","H-9","C-9","D-9"
    0x5fc1dd8e1d90 ---------A   01670  DATA "S-10","H-10","C-10","D-10","S-J","H-J","C-J","D-J"
    0x5fc1dd8e2920 ---------A   01680  DATA "S-Q","H-Q","C-Q","D-Q","S-K","H-K","C-K","D-K"
    0x5fc1dd8e2d10 ---------A   01690  DATA "S-A","H-A","C-A","D-A"
    0x5fc1dd8e2d60 ---------A   01700  END
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
char* data_01630s[]={"S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3"};
char* data_01640s[]={"S-4","H-4","C-4","D-4","S-5","H-5","C-5","D-5"};
char* data_01650s[]={"S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7"};
char* data_01660s[]={"S-8","H-8","C-8","D-8","S-9","H-9","C-9","D-9"};
char* data_01670s[]={"S-10","H-10","C-10","D-10","S-J","H-J","C-J","D-J"};
char* data_01680s[]={"S-Q","H-Q","C-Q","D-Q","S-K","H-K","C-K","D-K"};
char* data_01690s[]={"S-A","H-A","C-A","D-A"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1630,  8,data_01630s},
    { 1640,  8,data_01640s},
    { 1650,  8,data_01650s},
    { 1660,  8,data_01660s},
    { 1670,  8,data_01670s},
    { 1680,  8,data_01680s},
    { 1690,  4,data_01690s},
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
    // 01000 PRINT TAB(33);"WAR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"WAR");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "AS S-7 FOR SPADE 7.  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AS S-7 FOR SPADE 7.  ");fputs(buf,fh); };

  Lbl_01070:
    // 01070 PRINT "DO YOU WANT DIRECTIONS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT DIRECTIONS");fputs(buf,fh); };
    // 01080 INPUT B$
    // Start of Basic INPUT statement 01080
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
    }; // End of Basic INPUT statement 01080
    // 01090 IF B$="NO" THEN 1160
    if(strcmp(B_str,"NO")==0)goto Lbl_01160;
    // 01100 IF B$="YES" THEN 1130
    if(strcmp(B_str,"YES")==0)goto Lbl_01130;
    // 01110 PRINT "YES OR NO, PLEASE.  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YES OR NO, PLEASE.  ");fputs(buf,fh); };
    // 01120 GOTO 1070
    goto Lbl_01070;

  Lbl_01130:
    // 01130 PRINT "THE COMPUTER GIVES YOU AND IT A 'CARD'.  THE HIGHER CARD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE COMPUTER GIVES YOU AND IT A 'CARD'.  THE HIGHER CARD");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NOT TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NOT TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONTINUE OR WHEN YOU HAVE FINISHED THE PACK.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01160:
    // 01160 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 DIM A$(52),L(54)
    // 01190 FOR I=1 TO 52
    for(I_int=1;I_int<=52;I_int++){
        // 01200 READ A$(I)
        A_str_arr[I_int] = Get_Data_String();
        // 01210 NEXT I
        int dummy_1210=0; // Ignore this line.
    }; // End-For(I_int)
    // 01220 REM
    // 01230 FOR J=1 TO 52
    for(J_int=1;J_int<=52;J_int++){

  Lbl_01240:
        // 01240 LET L(J)=INT(52*RND(1))+1
        L_int_arr[J_int] = INT(52*RND(1))+1;
        // 01250 IF J=1 THEN 1310
        if(J_int==1)goto Lbl_01310;
        // 01260 FOR K=1 TO J-1
        for(K_int=1;K_int<=J_int-1;K_int++){
            // 01270 IF L(K)<>L(J) THEN 1300
            if(L_int_arr[K_int]!=L_int_arr[J_int])goto Lbl_01300;
            // 01280 REM
            // 01290 GOTO 1240
            goto Lbl_01240;

  Lbl_01300:
            // 01300 NEXT K
            int dummy_1300=0; // Ignore this line.
        }; // End-For(K_int)

  Lbl_01310:
        // 01310 NEXT J
        int dummy_1310=0; // Ignore this line.
    }; // End-For(J_int)

  Lbl_01320:
    // 01320 P=P+1
    P_int = P_int+1;
    // 01330 M1=L(P)
    M1_int = L_int_arr[P_int];
    // 01340 P=P+1
    P_int = P_int+1;
    // 01350 M2=L(P)
    M2_int = L_int_arr[P_int];
    // 01360 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT "YOU: ";A$(M1),"COMPUTER: ";A$(M2)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU: "); strcat(buf,A_str_arr[M1_int]);strcat(buf,"COMPUTER: "); strcat(buf,A_str_arr[M2_int]);strcat(buf,"\n");fputs(buf,fh); };
    // 01380 N1=INT((M1-.5)/4)
    N1_int = INT((M1_int-0.5)/4);
    // 01390 N2=INT((M2-.5)/4)
    N2_int = INT((M2_int-0.5)/4);
    // 01400 IF N1>=N2 THEN 1440
    if(N1_int>=N2_int)goto Lbl_01440;
    // 01410 A1=A1+1
    A1_int = A1_int+1;
    // 01420 PRINT "THE COMPUTER WINS!!! YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE COMPUTER WINS!!! YOU HAVE"); b2c_INT(buf,B1_int);strcat(buf,"AND THE COMPUTER HAS"); b2c_INT(buf,A1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01430 GOTO 1490
    goto Lbl_01490;

  Lbl_01440:
    // 01440 IF N1=N2 THEN 1480
    if(N1_int==N2_int)goto Lbl_01480;
    // 01450 B1=B1+1
    B1_int = B1_int+1;
    // 01460 PRINT "YOU WIN. YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WIN. YOU HAVE"); b2c_INT(buf,B1_int);strcat(buf,"AND THE COMPUTER HAS"); b2c_INT(buf,A1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01470 GOTO 1490
    goto Lbl_01490;

  Lbl_01480:
    // 01480 PRINT "TIE.  NO SCORE CHANGE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TIE.  NO SCORE CHANGE.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01490:
    // 01490 IF L(P+1)=0 THEN 1560
    if(L_int_arr[P_int+1]==0)goto Lbl_01560;
    // 01500 PRINT "DO YOU WANT TO CONTINUE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO CONTINUE");fputs(buf,fh); };
    // 01510 INPUT V$
    // Start of Basic INPUT statement 01510
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
    }; // End of Basic INPUT statement 01510
    // 01520 IF V$="YES" THEN 1320
    if(strcmp(V_str,"YES")==0)goto Lbl_01320;
    // 01530 IF V$="NO" THEN 1610
    if(strcmp(V_str,"NO")==0)goto Lbl_01610;
    // 01540 PRINT "YES OR NO, PLEASE.  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YES OR NO, PLEASE.  ");fputs(buf,fh); };
    // 01550 GOTO 1490
    goto Lbl_01490;

  Lbl_01560:
    // 01560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01580 PRINT "WE HAVE RUN OUT OF CARDS.  FINAL SCORE:  YOU: ";B1;
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WE HAVE RUN OUT OF CARDS.  FINAL SCORE:  YOU: "); b2c_INT(buf,B1_int);fputs(buf,fh); };
    // 01590 PRINT "  THE COMPUTER: ";A1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  THE COMPUTER: "); b2c_INT(buf,A1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01600 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01610:
    // 01610 PRINT "THANKS FOR PLAYING.  IT WAS FUN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THANKS FOR PLAYING.  IT WAS FUN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01620 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01630 DATA "S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3"
    // 01640 DATA "S-4","H-4","C-4","D-4","S-5","H-5","C-5","D-5"
    // 01650 DATA "S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7"
    // 01660 DATA "S-8","H-8","C-8","D-8","S-9","H-9","C-9","D-9"
    // 01670 DATA "S-10","H-10","C-10","D-10","S-J","H-J","C-J","D-J"
    // 01680 DATA "S-Q","H-Q","C-Q","D-Q","S-K","H-K","C-K","D-K"
    // 01690 DATA "S-A","H-A","C-A","D-A"
    // 01700 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
