/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/animal.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ae39421e6d0 ---------A   00010  PRINT TAB(32);"ANIMAL"
    0x5ae39421e670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ae39421e7f0 ---------A   00030  PRINT: PRINT: PRINT
    0x5ae394220ae0 ---------A   00040  PRINT "PLAY 'GUESS THE ANIMAL'"
    0x5ae39421f040 ---------A   00045  PRINT
    0x5ae39421ee40 ---------A   00050  PRINT "THINK OF AN ANIMAL AND THE COMPUTER WILL TRY TO GUESS IT."
    0x5ae39421eea0 ---------A   00060  PRINT
    0x5ae394220ff0 ---------A   00070  DIM A$(200)
    0x5ae39421f700 ---------A   00080  FOR I=0 TO 3
    0x5ae394220f30 ---------A   00090  READ A$(I)
    0x5ae3942210b0 ---------A   00100  NEXT I
    0x5ae394226d00 ---------A   00110  N=VAL(A$(0))
    0x5ae394226d50 ---------A T 00120  REM          MAIN CONTROL SECTION
    0x5ae394226ea0 ---------A   00130  INPUT "ARE YOU THINKING OF AN ANIMAL";A$
    0x5ae3942270e0 ---------A   00140  IF A$="LIST" THEN 600
    0x5ae394227500 ---------A   00150  IF LEFT$(A$,1)<>"Y" THEN 120
    0x5ae3942277e0 ---------A   00160  K=1
    0x5ae394227830 ---------A T 00170  GOSUB 390
    0x5ae394227c50 ---------A   00180  IF LEN(A$(K))=0 THEN 999
    0x5ae394228170 ---------A   00190  IF LEFT$(A$(K),2)="\Q" THEN 170
    0x5ae394228950 ---------A   00200  PRINT "IS IT A ";RIGHT$(A$(K),LEN(A$(K))-2);
    0x5ae394228ab0 ---------A   00210  INPUT A$
    0x5ae394228ed0 ---------A   00220  A$=LEFT$(A$,1)
    0x5ae3942294b0 ---------A   00230  IF LEFT$(A$,1)="Y" THEN PRINT "WHY NOT TRY ANOTHER ANIMAL?": GOTO 120
    0x5ae394229730 ----------   00240  INPUT "THE ANIMAL YOU WERE THINKING OF WAS A ";V$
    0x5ae3942298d0 ----------   00250  PRINT "PLEASE TYPE IN A QUESTION THAT WOULD DISTINGUISH A"
    0x5ae39422a190 ----------   00260  PRINT V$;" FROM A ";RIGHT$(A$(K),LEN(A$(K))-2)
    0x5ae39422a3d0 ----------   00270  INPUT X$
    0x5ae39422a750 ---------- T 00280  PRINT "FOR A ";V$;" THE ANSWER WOULD BE ";
    0x5ae39422a8d0 ----------   00290  INPUT A$
    0x5ae39422b150 ----------   00300  A$=LEFT$(A$,1): IF A$<>"Y" AND A$<>"N" THEN 280
    0x5ae39422b6b0 ----------   00310  IF A$="Y" THEN B$="N"
    0x5ae39422bb40 ----------   00320  IF A$="N" THEN B$="Y"
    0x5ae39422c1f0 ----------   00330  Z1=VAL(A$(0))
    0x5ae39422c6c0 ----------   00340  A$(0)=STR$(Z1+2)
    0x5ae39422cab0 ----------   00350  A$(Z1)=A$(K)
    0x5ae39422d000 ----------   00360  A$(Z1+1)="\A"+V$
    0x5ae39422ded0 ----------   00370  A$(K)="\Q"+X$+"\"+A$+STR$(Z1+1)+"\"+B$+STR$(Z1)+"\"
    0x5ae39422df60 ----------   00380  GOTO 120
    0x5ae39422dfe0 ---------B G 00390  REM     SUBROUTINE TO PRINT QUESTIONS
    0x5ae39422e3d0 ---------B   00400  Q$=A$(K)
    0x5ae39422e880 ---------B T 00410  FOR Z=3 TO LEN(Q$)
    0x5ae39422f160 ---------B   00415  IF MID$(Q$,Z,1)<>"\" THEN PRINT MID$(Q$,Z,1);
    0x5ae39422f2a0 ---------B   00417  NEXT Z
    0x5ae39422f4d0 ---------B   00420  INPUT C$
    0x5ae39422f8c0 ---------B   00430  C$=LEFT$(C$,1)
    0x5ae39422fd70 ---------B   00440  IF C$<>"Y" AND C$<>"N" THEN 410
    0x5ae3942301a0 ---------B   00450  T$="\"+C$
    0x5ae394230740 ---------B   00455  FOR X=3 TO LEN(Q$)-1
    0x5ae394230c40 ---------B   00460  IF MID$(Q$,X,2)=T$ THEN 480
    0x5ae394230d80 ---------B   00470  NEXT X
    0x5ae394230df0 ---------B   00475  STOP
    0x5ae3942313d0 ---------B T 00480  FOR Y=X+1 TO LEN(Q$)
    0x5ae3942318d0 ---------B   00490  IF MID$(Q$,Y,1)="\" THEN 510
    0x5ae394231a10 ---------B   00500  NEXT Y
    0x5ae394231a80 ---------B   00505  STOP
    0x5ae394232370 ---------B T 00510  K=VAL(MID$(Q$,X+2,Y-X-2))
    0x5ae3942323c0 ---------B   00520  RETURN
    0x5ae394232800 ---------A   00530  DATA "4","\QDOES IT SWIM\Y2\N3\","\AFISH","\ABIRD"
    0x5ae3942329c0 ---------A T 00600  PRINT:PRINT "ANIMALS I ALREADY KNOW ARE:"
    0x5ae394232be0 ---------A   00605  X=0
    0x5ae394232ec0 ---------A   00610  FOR I=1 TO 200
    0x5ae3942333c0 ---------A   00620  IF LEFT$(A$(I),2)<>"\A" THEN 650
    0x5ae3942336b0 ---------A   00624  PRINT TAB(15*X);
    0x5ae394233b90 ---------A   00630  FOR Z=3 TO LEN(A$(I))
    0x5ae394234a40 ---------A   00640  IF MID$(A$(I),Z,1)<>"\" THEN PRINT MID$(A$(I),Z,1);
    0x5ae394234b80 ---------A   00642  NEXT Z
    0x5ae394235360 ---------A   00645  X=X+1: IF X=4 THEN X=0: PRINT
    0x5ae3942354a0 ---------A T 00650  NEXT I
    0x5ae394235530 ---------A   00660  PRINT
    0x5ae3942355b0 ---------A   00670  PRINT
    0x5ae394235630 ---------A   00680  GOTO 120
    0x5ae394235680 ---------A T 00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00120      00150T, 00230T, 00380T, 00680T
     00170      00190T
     00280      00300T
     00390      00170G
     00410      00440T
     00480      00460T
     00510      00490T
     00600      00140T
     00650      00620T
     00999      00180T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5ae39421e6d0 (00010)   0x5ae39421e6d0 (00010)   0x5ae394235680 (00999)   0x5ae394235680 (00999)   
   B) 0x5ae39422dfe0 (00390)   0x5ae39422dfe0 (00390)   0x5ae3942323c0 (00520)   0x5ae3942323c0 (00520)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/animal.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ae39421e6d0 ---------A   00010  PRINT TAB(32);"ANIMAL"
    0x5ae39421e670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ae39420f2b0 ----------   00030  PRINT
    0x5ae39421e9e0 ----------        a PRINT
    0x5ae39421e7f0 ---------A        b PRINT
    0x5ae394220ae0 ---------A   00040  PRINT "PLAY 'GUESS THE ANIMAL'"
    0x5ae39421f040 ---------A   00045  PRINT
    0x5ae39421ee40 ---------A   00050  PRINT "THINK OF AN ANIMAL AND THE COMPUTER WILL TRY TO GUESS IT."
    0x5ae39421eea0 ---------A   00060  PRINT
    0x5ae394220ff0 ---------A   00070  DIM A$(200)
    0x5ae39421f700 ---------A   00080  FOR I=0 TO 3
    0x5ae394220f30 ---------A   00090  READ A$(I)
    0x5ae3942210b0 ---------A   00100  NEXT I
    0x5ae394226d00 ---------A   00110  N=VAL(A$(0))
    0x5ae394226d50 ---------A T 00120  REM          MAIN CONTROL SECTION
    0x5ae394226ea0 ---------A   00130  INPUT "ARE YOU THINKING OF AN ANIMAL";A$
    0x5ae3942270e0 ---------A   00140  IF A$="LIST" THEN 600
    0x5ae394227500 ---------A   00150  IF LEFT$(A$,1)<>"Y" THEN 120
    0x5ae3942277e0 ---------A   00160  K=1
    0x5ae394227830 ---------A T 00170  GOSUB 390
    0x5ae394227c50 ---------A   00180  IF LEN(A$(K))=0 THEN 999
    0x5ae394228170 ---------A   00190  IF LEFT$(A$(K),2)="\Q" THEN 170
    0x5ae394228950 ---------A   00200  PRINT "IS IT A ";RIGHT$(A$(K),LEN(A$(K))-2);
    0x5ae394228ab0 ---------A   00210  INPUT A$
    0x5ae394228ed0 ---------A   00220  A$=LEFT$(A$,1)
    0x5ae394229410 ----------   00230  IF LEFT$(A$,1)="Y" THEN PRINT "WHY NOT TRY ANOTHER ANIMAL?"
    0x5ae3942294b0 ---------A        a GOTO 120
    0x5ae394229730 ----------   00240  INPUT "THE ANIMAL YOU WERE THINKING OF WAS A ";V$
    0x5ae3942298d0 ----------   00250  PRINT "PLEASE TYPE IN A QUESTION THAT WOULD DISTINGUISH A"
    0x5ae39422a190 ----------   00260  PRINT V$;" FROM A ";RIGHT$(A$(K),LEN(A$(K))-2)
    0x5ae39422a3d0 ----------   00270  INPUT X$
    0x5ae39422a750 ---------- T 00280  PRINT "FOR A ";V$;" THE ANSWER WOULD BE ";
    0x5ae39422a8d0 ----------   00290  INPUT A$
    0x5ae39422ac90 ----------   00300  A$=LEFT$(A$,1)
    0x5ae39422b150 ----------        a IF A$<>"Y" AND A$<>"N" THEN 280
    0x5ae39422b6b0 ----------   00310  IF A$="Y" THEN B$="N"
    0x5ae39422bb40 ----------   00320  IF A$="N" THEN B$="Y"
    0x5ae39422c1f0 ----------   00330  Z1=VAL(A$(0))
    0x5ae39422c6c0 ----------   00340  A$(0)=STR$(Z1+2)
    0x5ae39422cab0 ----------   00350  A$(Z1)=A$(K)
    0x5ae39422d000 ----------   00360  A$(Z1+1)="\A"+V$
    0x5ae39422ded0 ----------   00370  A$(K)="\Q"+X$+"\"+A$+STR$(Z1+1)+"\"+B$+STR$(Z1)+"\"
    0x5ae39422df60 ----------   00380  GOTO 120
    0x5ae39422dfe0 ---------B G 00390  REM     SUBROUTINE TO PRINT QUESTIONS
    0x5ae39422e3d0 ---------B   00400  Q$=A$(K)
    0x5ae39422e880 ---------B T 00410  FOR Z=3 TO LEN(Q$)
    0x5ae39422f160 ---------B   00415  IF MID$(Q$,Z,1)<>"\" THEN PRINT MID$(Q$,Z,1);
    0x5ae39422f2a0 ---------B   00417  NEXT Z
    0x5ae39422f4d0 ---------B   00420  INPUT C$
    0x5ae39422f8c0 ---------B   00430  C$=LEFT$(C$,1)
    0x5ae39422fd70 ---------B   00440  IF C$<>"Y" AND C$<>"N" THEN 410
    0x5ae3942301a0 ---------B   00450  T$="\"+C$
    0x5ae394230740 ---------B   00455  FOR X=3 TO LEN(Q$)-1
    0x5ae394230c40 ---------B   00460  IF MID$(Q$,X,2)=T$ THEN 480
    0x5ae394230d80 ---------B   00470  NEXT X
    0x5ae394230df0 ---------B   00475  STOP
    0x5ae3942313d0 ---------B T 00480  FOR Y=X+1 TO LEN(Q$)
    0x5ae3942318d0 ---------B   00490  IF MID$(Q$,Y,1)="\" THEN 510
    0x5ae394231a10 ---------B   00500  NEXT Y
    0x5ae394231a80 ---------B   00505  STOP
    0x5ae394232370 ---------B T 00510  K=VAL(MID$(Q$,X+2,Y-X-2))
    0x5ae3942323c0 ---------B   00520  RETURN
    0x5ae394232800 ---------A   00530  DATA "4","\QDOES IT SWIM\Y2\N3\","\AFISH","\ABIRD"
    0x5ae394232850 ---------- T 00600  PRINT
    0x5ae3942329c0 ---------A T      a PRINT "ANIMALS I ALREADY KNOW ARE:"
    0x5ae394232be0 ---------A   00605  X=0
    0x5ae394232ec0 ---------A   00610  FOR I=1 TO 200
    0x5ae3942333c0 ---------A   00620  IF LEFT$(A$(I),2)<>"\A" THEN 650
    0x5ae3942336b0 ---------A   00624  PRINT TAB(15*X);
    0x5ae394233b90 ---------A   00630  FOR Z=3 TO LEN(A$(I))
    0x5ae394234a40 ---------A   00640  IF MID$(A$(I),Z,1)<>"\" THEN PRINT MID$(A$(I),Z,1);
    0x5ae394234b80 ---------A   00642  NEXT Z
    0x5ae394234ec0 ----------   00645  X=X+1
    0x5ae3942352e0 ----------        a IF X=4 THEN X=0
    0x5ae394235360 ---------A        b PRINT
    0x5ae3942354a0 ---------A T 00650  NEXT I
    0x5ae394235530 ---------A   00660  PRINT
    0x5ae3942355b0 ---------A   00670  PRINT
    0x5ae394235630 ---------A   00680  GOTO 120
    0x5ae394235680 ---------A T 00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/animal.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ae39421e6d0 ---------A   01000  PRINT TAB(32);"ANIMAL"
    0x5ae39421e670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ae39420f2b0 ----------   01020  PRINT
    0x5ae39421e9e0 ----------   01030  PRINT
    0x5ae39421e7f0 ---------A   01040  PRINT
    0x5ae394220ae0 ---------A   01050  PRINT "PLAY 'GUESS THE ANIMAL'"
    0x5ae39421f040 ---------A   01060  PRINT
    0x5ae39421ee40 ---------A   01070  PRINT "THINK OF AN ANIMAL AND THE COMPUTER WILL TRY TO GUESS IT."
    0x5ae39421eea0 ---------A   01080  PRINT
    0x5ae394220ff0 ---------A   01090  DIM A$(200)
    0x5ae39421f700 ---------A   01100  FOR I=0 TO 3
    0x5ae394220f30 ---------A   01110  READ A$(I)
    0x5ae3942210b0 ---------A   01120  NEXT I
    0x5ae394226d00 ---------A   01130  N=VAL(A$(0))
    0x5ae394226d50 ---------A   01140  REM          MAIN CONTROL SECTION
    0x5ae394226ea0 ---------A   01150  INPUT "ARE YOU THINKING OF AN ANIMAL";A$
    0x5ae3942270e0 ---------A   01160  IF A$="LIST" THEN 1640
    0x5ae394227500 ---------A   01170  IF LEFT$(A$,1)<>"Y" THEN 1140
    0x5ae3942277e0 ---------A   01180  K=1
    0x5ae394227830 ---------A   01190  GOSUB 1430
    0x5ae394227c50 ---------A   01200  IF LEN(A$(K))=0 THEN 1790
    0x5ae394228170 ---------A   01210  IF LEFT$(A$(K),2)="\Q" THEN 1190
    0x5ae394228950 ---------A   01220  PRINT "IS IT A ";RIGHT$(A$(K),LEN(A$(K))-2);
    0x5ae394228ab0 ---------A   01230  INPUT A$
    0x5ae394228ed0 ---------A   01240  A$=LEFT$(A$,1)
    0x5ae394229410 ----------   01250  IF LEFT$(A$,1)="Y" THEN PRINT "WHY NOT TRY ANOTHER ANIMAL?"
    0x5ae3942294b0 ---------A   01260  GOTO 1140
    0x5ae394229730 ----------   01270  INPUT "THE ANIMAL YOU WERE THINKING OF WAS A ";V$
    0x5ae3942298d0 ----------   01280  PRINT "PLEASE TYPE IN A QUESTION THAT WOULD DISTINGUISH A"
    0x5ae39422a190 ----------   01290  PRINT V$;" FROM A ";RIGHT$(A$(K),LEN(A$(K))-2)
    0x5ae39422a3d0 ----------   01300  INPUT X$
    0x5ae39422a750 ----------   01310  PRINT "FOR A ";V$;" THE ANSWER WOULD BE ";
    0x5ae39422a8d0 ----------   01320  INPUT A$
    0x5ae39422ac90 ----------   01330  A$=LEFT$(A$,1)
    0x5ae39422b150 ----------   01340  IF A$<>"Y" AND A$<>"N" THEN 1310
    0x5ae39422b6b0 ----------   01350  IF A$="Y" THEN B$="N"
    0x5ae39422bb40 ----------   01360  IF A$="N" THEN B$="Y"
    0x5ae39422c1f0 ----------   01370  Z1=VAL(A$(0))
    0x5ae39422c6c0 ----------   01380  A$(0)=STR$(Z1+2)
    0x5ae39422cab0 ----------   01390  A$(Z1)=A$(K)
    0x5ae39422d000 ----------   01400  A$(Z1+1)="\A"+V$
    0x5ae39422ded0 ----------   01410  A$(K)="\Q"+X$+"\"+A$+STR$(Z1+1)+"\"+B$+STR$(Z1)+"\"
    0x5ae39422df60 ----------   01420  GOTO 1140
    0x5ae39422dfe0 ---------B   01430  REM     SUBROUTINE TO PRINT QUESTIONS
    0x5ae39422e3d0 ---------B   01440  Q$=A$(K)
    0x5ae39422e880 ---------B   01450  FOR Z=3 TO LEN(Q$)
    0x5ae39422f160 ---------B   01460  IF MID$(Q$,Z,1)<>"\" THEN PRINT MID$(Q$,Z,1);
    0x5ae39422f2a0 ---------B   01470  NEXT Z
    0x5ae39422f4d0 ---------B   01480  INPUT C$
    0x5ae39422f8c0 ---------B   01490  C$=LEFT$(C$,1)
    0x5ae39422fd70 ---------B   01500  IF C$<>"Y" AND C$<>"N" THEN 1450
    0x5ae3942301a0 ---------B   01510  T$="\"+C$
    0x5ae394230740 ---------B   01520  FOR X=3 TO LEN(Q$)-1
    0x5ae394230c40 ---------B   01530  IF MID$(Q$,X,2)=T$ THEN 1560
    0x5ae394230d80 ---------B   01540  NEXT X
    0x5ae394230df0 ---------B   01550  STOP
    0x5ae3942313d0 ---------B   01560  FOR Y=X+1 TO LEN(Q$)
    0x5ae3942318d0 ---------B   01570  IF MID$(Q$,Y,1)="\" THEN 1600
    0x5ae394231a10 ---------B   01580  NEXT Y
    0x5ae394231a80 ---------B   01590  STOP
    0x5ae394232370 ---------B   01600  K=VAL(MID$(Q$,X+2,Y-X-2))
    0x5ae3942323c0 ---------B   01610  RETURN
    0x5ae394232800 ---------A   01620  DATA "4","\QDOES IT SWIM\Y2\N3\","\AFISH","\ABIRD"
    0x5ae394232850 ----------   01630  PRINT
    0x5ae3942329c0 ---------A   01640  PRINT "ANIMALS I ALREADY KNOW ARE:"
    0x5ae394232be0 ---------A   01650  X=0
    0x5ae394232ec0 ---------A   01660  FOR I=1 TO 200
    0x5ae3942333c0 ---------A   01670  IF LEFT$(A$(I),2)<>"\A" THEN 1750
    0x5ae3942336b0 ---------A   01680  PRINT TAB(15*X);
    0x5ae394233b90 ---------A   01690  FOR Z=3 TO LEN(A$(I))
    0x5ae394234a40 ---------A   01700  IF MID$(A$(I),Z,1)<>"\" THEN PRINT MID$(A$(I),Z,1);
    0x5ae394234b80 ---------A   01710  NEXT Z
    0x5ae394234ec0 ----------   01720  X=X+1
    0x5ae3942352e0 ----------   01730  IF X=4 THEN X=0
    0x5ae394235360 ---------A   01740  PRINT
    0x5ae3942354a0 ---------A   01750  NEXT I
    0x5ae394235530 ---------A   01760  PRINT
    0x5ae3942355b0 ---------A   01770  PRINT
    0x5ae394235630 ---------A   01780  GOTO 1140
    0x5ae394235680 ---------A   01790  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01640 - 10000    8370 

 */



/*
 *  Symbol Table Listing for 'basic/animal.bas'
 *
    A$              Array    String          {0,199} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$                       String      
    C$                       String      
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
    Q$                       String      
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
    T$                       String      
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V$                       String      
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    X$                       String      
    Y                        Integer     
    Z                        Integer     
    Z1                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/animal.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ae39421e6d0 ---------A   01000  PRINT TAB(32);"ANIMAL"
    0x5ae39421e670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ae39420f2b0 ---------A   01020  PRINT
    0x5ae39421e9e0 ---------A   01030  PRINT
    0x5ae39421e7f0 ---------A   01040  PRINT
    0x5ae394220ae0 ---------A   01050  PRINT "PLAY 'GUESS THE ANIMAL'"
    0x5ae39421f040 ---------A   01060  PRINT
    0x5ae39421ee40 ---------A   01070  PRINT "THINK OF AN ANIMAL AND THE COMPUTER WILL TRY TO GUESS IT."
    0x5ae39421eea0 ---------A   01080  PRINT
    0x5ae394220ff0 ---------A   01090  DIM A$(200)
    0x5ae39421f700 ---------A   01100  FOR I=0 TO 3
    0x5ae394220f30 ---------A   01110  READ A$(I)
    0x5ae3942210b0 ---------A   01120  NEXT I
    0x5ae394226d00 ---------A   01130  N=VAL(A$(0))
    0x5ae394226d50 ---------A T 01140  REM          MAIN CONTROL SECTION
    0x5ae394226ea0 ---------A   01150  INPUT "ARE YOU THINKING OF AN ANIMAL";A$
    0x5ae3942270e0 ---------A   01160  IF A$="LIST" THEN 1280
    0x5ae394227500 ---------A   01170  IF LEFT$(A$,1)<>"Y" THEN 1140
    0x5ae3942277e0 ---------A   01180  K=1
    0x5ae394227830 ---------A T 01190  GOSUB 1440
    0x5ae394227c50 ---------A   01200  IF LEN(A$(K))=0 THEN 1430
    0x5ae394228170 ---------A   01210  IF LEFT$(A$(K),2)="\Q" THEN 1190
    0x5ae394228950 ---------A   01220  PRINT "IS IT A ";RIGHT$(A$(K),LEN(A$(K))-2);
    0x5ae394228ab0 ---------A   01230  INPUT A$
    0x5ae394228ed0 ---------A   01240  A$=LEFT$(A$,1)
    0x5ae394229410 ---------A   01250  IF LEFT$(A$,1)="Y" THEN PRINT "WHY NOT TRY ANOTHER ANIMAL?"
    0x5ae3942294b0 ---------A   01260  GOTO 1140
    0x5ae394232800 ---------A   01270  DATA "4","\QDOES IT SWIM\Y2\N3\","\AFISH","\ABIRD"
    0x5ae3942329c0 ---------A T 01280  PRINT "ANIMALS I ALREADY KNOW ARE:"
    0x5ae394232be0 ---------A   01290  X=0
    0x5ae394232ec0 ---------A   01300  FOR I=1 TO 200
    0x5ae3942333c0 ---------A   01310  IF LEFT$(A$(I),2)<>"\A" THEN 1390
    0x5ae3942336b0 ---------A   01320  PRINT TAB(15*X);
    0x5ae394233b90 ---------A   01330  FOR Z=3 TO LEN(A$(I))
    0x5ae394234a40 ---------A   01340  IF MID$(A$(I),Z,1)<>"\" THEN PRINT MID$(A$(I),Z,1);
    0x5ae394234b80 ---------A   01350  NEXT Z
    0x5ae394234ec0 ---------A   01360  X=X+1
    0x5ae3942352e0 ---------A   01370  IF X=4 THEN X=0
    0x5ae394235360 ---------A   01380  PRINT
    0x5ae3942354a0 ---------A T 01390  NEXT I
    0x5ae394235530 ---------A   01400  PRINT
    0x5ae3942355b0 ---------A   01410  PRINT
    0x5ae394235630 ---------A   01420  GOTO 1140
    0x5ae394235680 ---------A T 01430  END
    0x5ae39422dfe0 ---------B G 01440  REM     SUBROUTINE TO PRINT QUESTIONS
    0x5ae39422e3d0 ---------B   01450  Q$=A$(K)
    0x5ae39422e880 ---------B T 01460  FOR Z=3 TO LEN(Q$)
    0x5ae39422f160 ---------B   01470  IF MID$(Q$,Z,1)<>"\" THEN PRINT MID$(Q$,Z,1);
    0x5ae39422f2a0 ---------B   01480  NEXT Z
    0x5ae39422f4d0 ---------B   01490  INPUT C$
    0x5ae39422f8c0 ---------B   01500  C$=LEFT$(C$,1)
    0x5ae39422fd70 ---------B   01510  IF C$<>"Y" AND C$<>"N" THEN 1460
    0x5ae3942301a0 ---------B   01520  T$="\"+C$
    0x5ae394230740 ---------B   01530  FOR X=3 TO LEN(Q$)-1
    0x5ae394230c40 ---------B   01540  IF MID$(Q$,X,2)=T$ THEN 1570
    0x5ae394230d80 ---------B   01550  NEXT X
    0x5ae394230df0 ---------B   01560  STOP
    0x5ae3942313d0 ---------B T 01570  FOR Y=X+1 TO LEN(Q$)
    0x5ae3942318d0 ---------B   01580  IF MID$(Q$,Y,1)="\" THEN 1610
    0x5ae394231a10 ---------B   01590  NEXT Y
    0x5ae394231a80 ---------B   01600  STOP
    0x5ae394232370 ---------B T 01610  K=VAL(MID$(Q$,X+2,Y-X-2))
    0x5ae39423acd0 ---------B   01620  GOTO 01630
    0x5ae39423c410 ---------B T 01630  RETURN
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
char* data_01270s[]={"4","\QDOES IT SWIM\Y2\N3\","\AFISH","\ABIRD"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1270,  4,data_01270s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[200];                            // Basic: A$ 
char*  B_str;                                     // Basic: B$ 
char*  C_str;                                     // Basic: C$ 
int    I_int;                                     // Basic: I 
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
char*  Q_str;                                     // Basic: Q$ 
char*  T_str;                                     // Basic: T$ 
char*  V_str;                                     // Basic: V$ 
int    X_int;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01440();

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

void Routine_01440(){
    // 01440 REM     SUBROUTINE TO PRINT QUESTIONS
    // 01450 Q$=A$(K)
    GLBpStr=A_str_arr[K_int];
    Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01460:
    // 01460 FOR Z=3 TO LEN(Q$)
    for(Z_int=3;Z_int<=LEN(Q_str);Z_int++){
        // 01470 IF MID$(Q$,Z,1)<>"\" THEN PRINT MID$(Q$,Z,1);
        if(MID$(Q_str,Z_int,1)=='\') {
        }
        // 01480 NEXT Z
        int dummy_1480=0; // Ignore this line.
    }; // End-For(Z_int)
    // 01490 INPUT C$
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
                (err += b2c_strtos(&C_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01490
    // 01500 C$=LEFT$(C$,1)
    GLBpStr=LEFT$(C_str,1);
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01510 IF C$<>"Y" AND C$<>"N" THEN 1460
    if(strcmp(C_str,"Y")!=0&&strcmp(C_str,"N")!=0)goto Lbl_01460;
    // 01520 T$="\"+C$
    GLBpStr=StringCat("\",C_str);
    T_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01530 FOR X=3 TO LEN(Q$)-1
    for(X_int=3;X_int<=LEN(Q_str)-1;X_int++){
        // 01540 IF MID$(Q$,X,2)=T$ THEN 1570
        if(MID$(Q_str,X_int,2)==T_str)goto Lbl_01570;
        // 01550 NEXT X
        int dummy_1550=0; // Ignore this line.
    }; // End-For(X_int)
    // 01560 STOP
    exit(1);

  Lbl_01570:
    // 01570 FOR Y=X+1 TO LEN(Q$)
    for(Y_int=X_int+1;Y_int<=LEN(Q_str);Y_int++){
        // 01580 IF MID$(Q$,Y,1)="\" THEN 1610
        if(MID$(Q_str,Y_int,1)=='\')goto Lbl_01610;
        // 01590 NEXT Y
        int dummy_1590=0; // Ignore this line.
    }; // End-For(Y_int)
    // 01600 STOP
    exit(1);

  Lbl_01610:
    // 01610 K=VAL(MID$(Q$,X+2,Y-X-2))
    K_int = VAL(MID$(Q_str,X_int+2,Y_int-X_int-2));
    // 01620 GOTO 01630
    goto Lbl_01630;

  Lbl_01630:
    // 01630 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(32);"ANIMAL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,32);strcat(buf,"ANIMAL");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "PLAY 'GUESS THE ANIMAL'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLAY 'GUESS THE ANIMAL'");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "THINK OF AN ANIMAL AND THE COMPUTER WILL TRY TO GUESS IT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THINK OF AN ANIMAL AND THE COMPUTER WILL TRY TO GUESS IT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01090 DIM A$(200)
    // 01100 FOR I=0 TO 3
    for(I_int=0;I_int<=3;I_int++){
        // 01110 READ A$(I)
        A_str_arr[I_int] = Get_Data_String();
        // 01120 NEXT I
        int dummy_1120=0; // Ignore this line.
    }; // End-For(I_int)
    // 01130 N=VAL(A$(0))
    N_int = VAL(A_str_arr[0]);

  Lbl_01140:
    // 01140 REM          MAIN CONTROL SECTION
    // 01150 INPUT "ARE YOU THINKING OF AN ANIMAL";A$
    // Start of Basic INPUT statement 01150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ARE YOU THINKING OF AN ANIMAL");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160 IF A$="LIST" THEN 1280
    if(strcmp(A_str_arr[0],"LIST")==0)goto Lbl_01280;
    // 01170 IF LEFT$(A$,1)<>"Y" THEN 1140
    if(LEFT$(A_str_arr[0],1)=='Y')goto Lbl_01140;
    // 01180 K=1
    K_int = 1;

  Lbl_01190:
    // 01190 GOSUB 1440
    Routine_01440();
    // 01200 IF LEN(A$(K))=0 THEN 1430
    if(LEN(A_str_arr[K_int])==0)goto Lbl_01430;
    // 01210 IF LEFT$(A$(K),2)="\Q" THEN 1190
    if(LEFT$(A_str_arr[K_int],2)=='\Q')goto Lbl_01190;
    // 01220 PRINT "IS IT A ";RIGHT$(A$(K),LEN(A$(K))-2);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IS IT A ");strcpy(buf,RIGHT$(A_str_arr[K_int],LEN(A_str_arr[K_int])-2));fputs(buf,fh); };
    // 01230 INPUT A$
    // Start of Basic INPUT statement 01230
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01230
    // 01240 A$=LEFT$(A$,1)
    GLBpStr=LEFT$(A_str_arr[0],1);
    A_str_arr[0] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01250 IF LEFT$(A$,1)="Y" THEN PRINT "WHY NOT TRY ANOTHER ANIMAL?"
    if(LEFT$(A_str_arr[0],1)=='Y') {
    }
    // 01260 GOTO 1140
    goto Lbl_01140;
    // 01270 DATA "4","\QDOES IT SWIM\Y2\N3\","\AFISH","\ABIRD"

  Lbl_01280:
    // 01280 PRINT "ANIMALS I ALREADY KNOW ARE:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ANIMALS I ALREADY KNOW ARE:");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 X=0
    X_int = 0;
    // 01300 FOR I=1 TO 200
    for(I_int=1;I_int<=200;I_int++){
        // 01310 IF LEFT$(A$(I),2)<>"\A" THEN 1390
        if(LEFT$(A_str_arr[I_int],2)=='\A')goto Lbl_01390;
        // 01320 PRINT TAB(15*X);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15*X_;fputs(buf,fh); };
        // 01330 FOR Z=3 TO LEN(A$(I))
        for(Z_int=3;Z_int<=LEN(A_str_arr[I_int]);Z_int++){
            // 01340 IF MID$(A$(I),Z,1)<>"\" THEN PRINT MID$(A$(I),Z,1);
            if(MID$(A_str_arr[I_int],Z_int,1)=='\') {
            }
            // 01350 NEXT Z
            int dummy_1350=0; // Ignore this line.
        }; // End-For(Z_int)
        // 01360 X=X+1
        X_int = X_int+1;
        // 01370 IF X=4 THEN X=0
        if(X_int==4) {
        }
        // 01380 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01390:
        // 01390 NEXT I
        int dummy_1390=0; // Ignore this line.
    }; // End-For(I_int)
    // 01400 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01420 GOTO 1140
    goto Lbl_01140;

  Lbl_01430:
    // 01430 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
