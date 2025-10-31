/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/mugwump.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5d731f2776d0 ---------A   00001  PRINT TAB(33);"MUGWUMP"
    0x5d731f277670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d731f279aa0 ---------A   00003  PRINT:PRINT:PRINT
    0x5d731f278b80 ---------A   00004  REM     COURTESY PEOPLE'S COMPUTER COMPANY
    0x5d731f279e70 ---------A   00010  DIM P(4,2)
    0x5d731f2796a0 ---------A   00020  PRINT "THE OBJECT OF THIS GAME IS TO FIND FOUR MUGWUMPS"
    0x5d731f277ca0 ---------A   00030  PRINT "HIDDEN ON A 10 BY 10 GRID.  HOMEBASE IS POSITION 0,0."
    0x5d731f278620 ---------A   00040  PRINT "ANY GUESS YOU MAKE MUST BE TWO NUMBERS WITH EACH"
    0x5d731f278790 ---------A   00050  PRINT "NUMBER BETWEEN 0 AND 9, INCLUSIVE.  FIRST NUMBER"
    0x5d731f27f8e0 ---------A   00060  PRINT "IS DISTANCE TO RIGHT OF HOMEBASE AND SECOND NUMBER"
    0x5d731f27fa00 ---------A   00070  PRINT "IS DISTANCE ABOVE HOMEBASE."
    0x5d731f27fa60 ---------A   00080  PRINT
    0x5d731f27fc00 ---------A   00090  PRINT "YOU GET 10 TRIES.  AFTER EACH TRY, I WILL TELL"
    0x5d731f27fd60 ---------A   00100  PRINT "YOU HOW FAR YOU ARE FROM EACH MUGWUMP."
    0x5d731f27fdc0 ---------A   00110  PRINT
    0x5d731f27fe20 ---------A T 00240  GOSUB 1000
    0x5d731f280090 ---------A   00250  T=0
    0x5d731f280360 ---------A T 00260  T=T+1
    0x5d731f2803b0 ---------A   00270  PRINT
    0x5d731f280450 ---------A   00275  PRINT
    0x5d731f2807b0 ---------A   00290  PRINT "TURN NO.";T;"-- WHAT IS YOUR GUESS";
    0x5d731f280b70 ---------A   00300  INPUT M,N
    0x5d731f280ef0 ---------A   00310  FOR I=1 TO 4
    0x5d731f2812d0 ---------A   00320  IF P(I,1)=-1 THEN 400
    0x5d731f2816d0 ---------A   00330  IF P(I,1)<>M THEN 380
    0x5d731f281af0 ---------A   00340  IF P(I,2)<>N THEN 380
    0x5d731f281e90 ---------A   00350  P(I,1)=-1
    0x5d731f2820c0 ---------A   00360  PRINT "YOU HAVE FOUND MUGWUMP";I
    0x5d731f282120 ---------A   00370  GOTO 400
    0x5d731f282e40 ---------A T 00380  D=SQR((P(I,1)-M)^2+(P(I,2)-N)^2)
    0x5d731f2835b0 ---------A   00390  PRINT "YOU ARE";(INT(D*10))/10;"UNITS FROM MUGWUMP";I
    0x5d731f2836f0 ---------A T 00400  NEXT I
    0x5d731f283ab0 ---------A   00410  FOR J=1 TO 4
    0x5d731f2840c0 ---------A   00420  IF P(J,1)<>-1 THEN 470
    0x5d731f284200 ---------A   00430  NEXT J
    0x5d731f2842b0 ---------A   00440  PRINT
    0x5d731f284610 ---------A   00450  PRINT "YOU GOT THEM ALL IN";T;"TURNS!"
    0x5d731f284690 ---------A   00460  GOTO 580
    0x5d731f2848e0 ---------A T 00470  IF T<10 THEN 260
    0x5d731f284990 ---------A   00480  PRINT
    0x5d731f284b20 ---------A   00490  PRINT "SORRY, THAT'S 10 TRIES.  HERE IS WHERE THEY'RE HIDING:"
    0x5d731f284e10 ---------A   00540  FOR I=1 TO 4
    0x5d731f285230 ---------A   00550  IF P(I,1)=-1 THEN 570
    0x5d731f285cd0 ---------A   00560  PRINT "MUGWUMP";I;"IS AT (";P(I,1);",";P(I,2);")"
    0x5d731f285e10 ---------A T 00570  NEXT I
    0x5d731f285ec0 ---------A T 00580  PRINT
    0x5d731f286050 ---------A   00600  PRINT "THAT WAS FUN! LET'S PLAY AGAIN......."
    0x5d731f2861c0 ---------A   00610  PRINT "FOUR MORE MUGWUMPS ARE NOW IN HIDING."
    0x5d731f286240 ---------A   00630  GOTO 240
    0x5d731f286510 ---------B G 01000  FOR J=1 TO 2
    0x5d731f286800 ---------B   01010  FOR I=1 TO 4
    0x5d731f286ea0 ---------B   01020  P(I,J)=INT(10*RND(1))
    0x5d731f286fd0 ---------B   01030  NEXT I
    0x5d731f287120 ---------B   01040  NEXT J
    0x5d731f287190 ---------B   01050  RETURN
    0x5d731f2871f0 ---------A   01099  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00240      00630T
     00260      00470T
     00380      00330T, 00340T
     00400      00320T, 00370T
     00470      00420T
     00570      00550T
     00580      00460T
     01000      00240G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5d731f2776d0 (00001)   0x5d731f2776d0 (00001)   0x5d731f2871f0 (01099)   0x5d731f2871f0 (01099)   
   B) 0x5d731f286510 (01000)   0x5d731f286510 (01000)   0x5d731f287190 (01050)   0x5d731f287190 (01050)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/mugwump.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5d731f2776d0 ---------A   00001  PRINT TAB(33);"MUGWUMP"
    0x5d731f277670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d731f2682b0 ----------   00003  PRINT
    0x5d731f2779e0 ----------        a PRINT
    0x5d731f279aa0 ---------A        b PRINT
    0x5d731f278b80 ---------A   00004  REM     COURTESY PEOPLE'S COMPUTER COMPANY
    0x5d731f279e70 ---------A   00010  DIM P(4,2)
    0x5d731f2796a0 ---------A   00020  PRINT "THE OBJECT OF THIS GAME IS TO FIND FOUR MUGWUMPS"
    0x5d731f277ca0 ---------A   00030  PRINT "HIDDEN ON A 10 BY 10 GRID.  HOMEBASE IS POSITION 0,0."
    0x5d731f278620 ---------A   00040  PRINT "ANY GUESS YOU MAKE MUST BE TWO NUMBERS WITH EACH"
    0x5d731f278790 ---------A   00050  PRINT "NUMBER BETWEEN 0 AND 9, INCLUSIVE.  FIRST NUMBER"
    0x5d731f27f8e0 ---------A   00060  PRINT "IS DISTANCE TO RIGHT OF HOMEBASE AND SECOND NUMBER"
    0x5d731f27fa00 ---------A   00070  PRINT "IS DISTANCE ABOVE HOMEBASE."
    0x5d731f27fa60 ---------A   00080  PRINT
    0x5d731f27fc00 ---------A   00090  PRINT "YOU GET 10 TRIES.  AFTER EACH TRY, I WILL TELL"
    0x5d731f27fd60 ---------A   00100  PRINT "YOU HOW FAR YOU ARE FROM EACH MUGWUMP."
    0x5d731f27fdc0 ---------A   00110  PRINT
    0x5d731f27fe20 ---------A T 00240  GOSUB 1000
    0x5d731f280090 ---------A   00250  T=0
    0x5d731f280360 ---------A T 00260  T=T+1
    0x5d731f2803b0 ---------A   00270  PRINT
    0x5d731f280450 ---------A   00275  PRINT
    0x5d731f2807b0 ---------A   00290  PRINT "TURN NO.";T;"-- WHAT IS YOUR GUESS";
    0x5d731f280b70 ---------A   00300  INPUT M,N
    0x5d731f280ef0 ---------A   00310  FOR I=1 TO 4
    0x5d731f2812d0 ---------A   00320  IF P(I,1)=-1 THEN 400
    0x5d731f2816d0 ---------A   00330  IF P(I,1)<>M THEN 380
    0x5d731f281af0 ---------A   00340  IF P(I,2)<>N THEN 380
    0x5d731f281e90 ---------A   00350  P(I,1)=-1
    0x5d731f2820c0 ---------A   00360  PRINT "YOU HAVE FOUND MUGWUMP";I
    0x5d731f282120 ---------A   00370  GOTO 400
    0x5d731f282e40 ---------A T 00380  D=SQR((P(I,1)-M)^2+(P(I,2)-N)^2)
    0x5d731f2835b0 ---------A   00390  PRINT "YOU ARE";(INT(D*10))/10;"UNITS FROM MUGWUMP";I
    0x5d731f2836f0 ---------A T 00400  NEXT I
    0x5d731f283ab0 ---------A   00410  FOR J=1 TO 4
    0x5d731f2840c0 ---------A   00420  IF P(J,1)<>-1 THEN 470
    0x5d731f284200 ---------A   00430  NEXT J
    0x5d731f2842b0 ---------A   00440  PRINT
    0x5d731f284610 ---------A   00450  PRINT "YOU GOT THEM ALL IN";T;"TURNS!"
    0x5d731f284690 ---------A   00460  GOTO 580
    0x5d731f2848e0 ---------A T 00470  IF T<10 THEN 260
    0x5d731f284990 ---------A   00480  PRINT
    0x5d731f284b20 ---------A   00490  PRINT "SORRY, THAT'S 10 TRIES.  HERE IS WHERE THEY'RE HIDING:"
    0x5d731f284e10 ---------A   00540  FOR I=1 TO 4
    0x5d731f285230 ---------A   00550  IF P(I,1)=-1 THEN 570
    0x5d731f285cd0 ---------A   00560  PRINT "MUGWUMP";I;"IS AT (";P(I,1);",";P(I,2);")"
    0x5d731f285e10 ---------A T 00570  NEXT I
    0x5d731f285ec0 ---------A T 00580  PRINT
    0x5d731f286050 ---------A   00600  PRINT "THAT WAS FUN! LET'S PLAY AGAIN......."
    0x5d731f2861c0 ---------A   00610  PRINT "FOUR MORE MUGWUMPS ARE NOW IN HIDING."
    0x5d731f286240 ---------A   00630  GOTO 240
    0x5d731f286510 ---------B G 01000  FOR J=1 TO 2
    0x5d731f286800 ---------B   01010  FOR I=1 TO 4
    0x5d731f286ea0 ---------B   01020  P(I,J)=INT(10*RND(1))
    0x5d731f286fd0 ---------B   01030  NEXT I
    0x5d731f287120 ---------B   01040  NEXT J
    0x5d731f287190 ---------B   01050  RETURN
    0x5d731f2871f0 ---------A   01099  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/mugwump.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5d731f2776d0 ---------A G 01000  PRINT TAB(33);"MUGWUMP"
    0x5d731f277670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d731f2682b0 ----------   01020  PRINT
    0x5d731f2779e0 ----------   01030  PRINT
    0x5d731f279aa0 ---------A   01040  PRINT
    0x5d731f278b80 ---------A   01050  REM     COURTESY PEOPLE'S COMPUTER COMPANY
    0x5d731f279e70 ---------A   01060  DIM P(4,2)
    0x5d731f2796a0 ---------A   01070  PRINT "THE OBJECT OF THIS GAME IS TO FIND FOUR MUGWUMPS"
    0x5d731f277ca0 ---------A   01080  PRINT "HIDDEN ON A 10 BY 10 GRID.  HOMEBASE IS POSITION 0,0."
    0x5d731f278620 ---------A   01090  PRINT "ANY GUESS YOU MAKE MUST BE TWO NUMBERS WITH EACH"
    0x5d731f278790 ---------A   01100  PRINT "NUMBER BETWEEN 0 AND 9, INCLUSIVE.  FIRST NUMBER"
    0x5d731f27f8e0 ---------A   01110  PRINT "IS DISTANCE TO RIGHT OF HOMEBASE AND SECOND NUMBER"
    0x5d731f27fa00 ---------A   01120  PRINT "IS DISTANCE ABOVE HOMEBASE."
    0x5d731f27fa60 ---------A   01130  PRINT
    0x5d731f27fc00 ---------A   01140  PRINT "YOU GET 10 TRIES.  AFTER EACH TRY, I WILL TELL"
    0x5d731f27fd60 ---------A   01150  PRINT "YOU HOW FAR YOU ARE FROM EACH MUGWUMP."
    0x5d731f27fdc0 ---------A   01160  PRINT
    0x5d731f27fe20 ---------A   01170  GOSUB 1510
    0x5d731f280090 ---------A   01180  T=0
    0x5d731f280360 ---------A   01190  T=T+1
    0x5d731f2803b0 ---------A   01200  PRINT
    0x5d731f280450 ---------A   01210  PRINT
    0x5d731f2807b0 ---------A   01220  PRINT "TURN NO.";T;"-- WHAT IS YOUR GUESS";
    0x5d731f280b70 ---------A   01230  INPUT M,N
    0x5d731f280ef0 ---------A   01240  FOR I=1 TO 4
    0x5d731f2812d0 ---------A   01250  IF P(I,1)=-1 THEN 1330
    0x5d731f2816d0 ---------A   01260  IF P(I,1)<>M THEN 1310
    0x5d731f281af0 ---------A   01270  IF P(I,2)<>N THEN 1310
    0x5d731f281e90 ---------A   01280  P(I,1)=-1
    0x5d731f2820c0 ---------A   01290  PRINT "YOU HAVE FOUND MUGWUMP";I
    0x5d731f282120 ---------A   01300  GOTO 1330
    0x5d731f282e40 ---------A   01310  D=SQR((P(I,1)-M)^2+(P(I,2)-N)^2)
    0x5d731f2835b0 ---------A   01320  PRINT "YOU ARE";(INT(D*10))/10;"UNITS FROM MUGWUMP";I
    0x5d731f2836f0 ---------A   01330  NEXT I
    0x5d731f283ab0 ---------A   01340  FOR J=1 TO 4
    0x5d731f2840c0 ---------A   01350  IF P(J,1)<>-1 THEN 1400
    0x5d731f284200 ---------A   01360  NEXT J
    0x5d731f2842b0 ---------A   01370  PRINT
    0x5d731f284610 ---------A   01380  PRINT "YOU GOT THEM ALL IN";T;"TURNS!"
    0x5d731f284690 ---------A   01390  GOTO 1470
    0x5d731f2848e0 ---------A   01400  IF T<10 THEN 1190
    0x5d731f284990 ---------A   01410  PRINT
    0x5d731f284b20 ---------A   01420  PRINT "SORRY, THAT'S 10 TRIES.  HERE IS WHERE THEY'RE HIDING:"
    0x5d731f284e10 ---------A   01430  FOR I=1 TO 4
    0x5d731f285230 ---------A   01440  IF P(I,1)=-1 THEN 1460
    0x5d731f285cd0 ---------A   01450  PRINT "MUGWUMP";I;"IS AT (";P(I,1);",";P(I,2);")"
    0x5d731f285e10 ---------A   01460  NEXT I
    0x5d731f285ec0 ---------A   01470  PRINT
    0x5d731f286050 ---------A   01480  PRINT "THAT WAS FUN! LET'S PLAY AGAIN......."
    0x5d731f2861c0 ---------A   01490  PRINT "FOUR MORE MUGWUMPS ARE NOW IN HIDING."
    0x5d731f286240 ---------A   01500  GOTO 1170
    0x5d731f286510 ---------B   01510  FOR J=1 TO 2
    0x5d731f286800 ---------B   01520  FOR I=1 TO 4
    0x5d731f286ea0 ---------B   01530  P(I,J)=INT(10*RND(1))
    0x5d731f286fd0 ---------B   01540  NEXT I
    0x5d731f287120 ---------B   01550  NEXT J
    0x5d731f287190 ---------B   01560  RETURN
    0x5d731f2871f0 ---------A   01570  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01590 - 10000    8420 

 */



/*
 *  Symbol Table Listing for 'basic/mugwump.bas'
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
    P               Array    Integer         {0,3} {0,1} 
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
    T                        Integer     
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
 *  Listing of basic/mugwump.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5d731f2776d0 ---------A   01000  PRINT TAB(33);"MUGWUMP"
    0x5d731f277670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d731f2682b0 ---------A   01020  PRINT
    0x5d731f2779e0 ---------A   01030  PRINT
    0x5d731f279aa0 ---------A   01040  PRINT
    0x5d731f278b80 ---------A   01050  REM     COURTESY PEOPLE'S COMPUTER COMPANY
    0x5d731f279e70 ---------A   01060  DIM P(4,2)
    0x5d731f2796a0 ---------A   01070  PRINT "THE OBJECT OF THIS GAME IS TO FIND FOUR MUGWUMPS"
    0x5d731f277ca0 ---------A   01080  PRINT "HIDDEN ON A 10 BY 10 GRID.  HOMEBASE IS POSITION 0,0."
    0x5d731f278620 ---------A   01090  PRINT "ANY GUESS YOU MAKE MUST BE TWO NUMBERS WITH EACH"
    0x5d731f278790 ---------A   01100  PRINT "NUMBER BETWEEN 0 AND 9, INCLUSIVE.  FIRST NUMBER"
    0x5d731f27f8e0 ---------A   01110  PRINT "IS DISTANCE TO RIGHT OF HOMEBASE AND SECOND NUMBER"
    0x5d731f27fa00 ---------A   01120  PRINT "IS DISTANCE ABOVE HOMEBASE."
    0x5d731f27fa60 ---------A   01130  PRINT
    0x5d731f27fc00 ---------A   01140  PRINT "YOU GET 10 TRIES.  AFTER EACH TRY, I WILL TELL"
    0x5d731f27fd60 ---------A   01150  PRINT "YOU HOW FAR YOU ARE FROM EACH MUGWUMP."
    0x5d731f27fdc0 ---------A   01160  PRINT
    0x5d731f27fe20 ---------A T 01170  GOSUB 1520
    0x5d731f280090 ---------A   01180  T=0
    0x5d731f280360 ---------A T 01190  T=T+1
    0x5d731f2803b0 ---------A   01200  PRINT
    0x5d731f280450 ---------A   01210  PRINT
    0x5d731f2807b0 ---------A   01220  PRINT "TURN NO.";T;"-- WHAT IS YOUR GUESS";
    0x5d731f280b70 ---------A   01230  INPUT M,N
    0x5d731f280ef0 ---------A   01240  FOR I=1 TO 4
    0x5d731f2812d0 ---------A   01250  IF P(I,1)=-1 THEN 1330
    0x5d731f2816d0 ---------A   01260  IF P(I,1)<>M THEN 1310
    0x5d731f281af0 ---------A   01270  IF P(I,2)<>N THEN 1310
    0x5d731f281e90 ---------A   01280  P(I,1)=-1
    0x5d731f2820c0 ---------A   01290  PRINT "YOU HAVE FOUND MUGWUMP";I
    0x5d731f282120 ---------A   01300  GOTO 1330
    0x5d731f282e40 ---------A T 01310  D=SQR((P(I,1)-M)^2+(P(I,2)-N)^2)
    0x5d731f2835b0 ---------A   01320  PRINT "YOU ARE";(INT(D*10))/10;"UNITS FROM MUGWUMP";I
    0x5d731f2836f0 ---------A T 01330  NEXT I
    0x5d731f283ab0 ---------A   01340  FOR J=1 TO 4
    0x5d731f2840c0 ---------A   01350  IF P(J,1)<>-1 THEN 1400
    0x5d731f284200 ---------A   01360  NEXT J
    0x5d731f2842b0 ---------A   01370  PRINT
    0x5d731f284610 ---------A   01380  PRINT "YOU GOT THEM ALL IN";T;"TURNS!"
    0x5d731f284690 ---------A   01390  GOTO 1470
    0x5d731f2848e0 ---------A T 01400  IF T<10 THEN 1190
    0x5d731f284990 ---------A   01410  PRINT
    0x5d731f284b20 ---------A   01420  PRINT "SORRY, THAT'S 10 TRIES.  HERE IS WHERE THEY'RE HIDING:"
    0x5d731f284e10 ---------A   01430  FOR I=1 TO 4
    0x5d731f285230 ---------A   01440  IF P(I,1)=-1 THEN 1460
    0x5d731f285cd0 ---------A   01450  PRINT "MUGWUMP";I;"IS AT (";P(I,1);",";P(I,2);")"
    0x5d731f285e10 ---------A T 01460  NEXT I
    0x5d731f285ec0 ---------A T 01470  PRINT
    0x5d731f286050 ---------A   01480  PRINT "THAT WAS FUN! LET'S PLAY AGAIN......."
    0x5d731f2861c0 ---------A   01490  PRINT "FOUR MORE MUGWUMPS ARE NOW IN HIDING."
    0x5d731f286240 ---------A   01500  GOTO 1170
    0x5d731f2871f0 ---------A   01510  END
    0x5d731f286510 ---------B G 01520  FOR J=1 TO 2
    0x5d731f286800 ---------B   01530  FOR I=1 TO 4
    0x5d731f286ea0 ---------B   01540  P(I,J)=INT(10*RND(1))
    0x5d731f286fd0 ---------B   01550  NEXT I
    0x5d731f287120 ---------B   01560  NEXT J
    0x5d731f2883c0 ---------B   01570  GOTO 01580
    0x5d731f28c660 ---------B T 01580  RETURN
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
int    D_int;                                     // Basic: D 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int_arr[4][2];                           // Basic: P 
int    T_int;                                     // Basic: T 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01520();

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

void Routine_01520(){
    // 01520 FOR J=1 TO 2
    for(J_int=1;J_int<=2;J_int++){
        // 01530 FOR I=1 TO 4
        for(I_int=1;I_int<=4;I_int++){
            // 01540 P(I,J)=INT(10*RND(1))
            P_int_arr[I_int][J_int] = INT(10*RND(1));
            // 01550 NEXT I
            int dummy_1550=0; // Ignore this line.
        }; // End-For(I_int)
        // 01560 NEXT J
        int dummy_1560=0; // Ignore this line.
    }; // End-For(J_int)
    // 01570 GOTO 01580
    goto Lbl_01580;

  Lbl_01580:
    // 01580 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"MUGWUMP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"MUGWUMP");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 REM     COURTESY PEOPLE'S COMPUTER COMPANY
    // 01060 DIM P(4,2)
    // 01070 PRINT "THE OBJECT OF THIS GAME IS TO FIND FOUR MUGWUMPS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE OBJECT OF THIS GAME IS TO FIND FOUR MUGWUMPS");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "HIDDEN ON A 10 BY 10 GRID.  HOMEBASE IS POSITION 0,0."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HIDDEN ON A 10 BY 10 GRID.  HOMEBASE IS POSITION 0,0.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "ANY GUESS YOU MAKE MUST BE TWO NUMBERS WITH EACH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ANY GUESS YOU MAKE MUST BE TWO NUMBERS WITH EACH");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "NUMBER BETWEEN 0 AND 9, INCLUSIVE.  FIRST NUMBER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NUMBER BETWEEN 0 AND 9, INCLUSIVE.  FIRST NUMBER");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "IS DISTANCE TO RIGHT OF HOMEBASE AND SECOND NUMBER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IS DISTANCE TO RIGHT OF HOMEBASE AND SECOND NUMBER");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "IS DISTANCE ABOVE HOMEBASE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IS DISTANCE ABOVE HOMEBASE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "YOU GET 10 TRIES.  AFTER EACH TRY, I WILL TELL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU GET 10 TRIES.  AFTER EACH TRY, I WILL TELL");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "YOU HOW FAR YOU ARE FROM EACH MUGWUMP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HOW FAR YOU ARE FROM EACH MUGWUMP.");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01170:
    // 01170 GOSUB 1520
    Routine_01520();
    // 01180 T=0
    T_int = 0;

  Lbl_01190:
    // 01190 T=T+1
    T_int = T_int+1;
    // 01200 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "TURN NO.";T;"-- WHAT IS YOUR GUESS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TURN NO."); b2c_INT(buf,T_int);strcat(buf,"-- WHAT IS YOUR GUESS");fputs(buf,fh); };
    // 01230 INPUT M,N
    // Start of Basic INPUT statement 01230
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ||
                (err += b2c_strtoi(&N_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01230
    // 01240 FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 01250 IF P(I,1)=-1 THEN 1330
        if(P_int_arr[I_int][1]==-1)goto Lbl_01330;
        // 01260 IF P(I,1)<>M THEN 1310
        if(P_int_arr[I_int][1]!=M_int)goto Lbl_01310;
        // 01270 IF P(I,2)<>N THEN 1310
        if(P_int_arr[I_int][2]!=N_int)goto Lbl_01310;
        // 01280 P(I,1)=-1
        P_int_arr[I_int][1] = -1;
        // 01290 PRINT "YOU HAVE FOUND MUGWUMP";I
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE FOUND MUGWUMP"); b2c_INT(buf,I_int);strcat(buf,"\n");fputs(buf,fh); };
        // 01300 GOTO 1330
        goto Lbl_01330;

  Lbl_01310:
        // 01310 D=SQR((P(I,1)-M)^2+(P(I,2)-N)^2)
        D_int = SQR(IPower((P_int_arr[I_int][1]-M_int),2)+IPower((P_int_arr[I_int][2]-N_int),2));
        // 01320 PRINT "YOU ARE";(INT(D*10))/10;"UNITS FROM MUGWUMP";I
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE"); b2c_INT(buf,(INT(D_int*10))/10);strcat(buf,"UNITS FROM MUGWUMP"); b2c_INT(buf,I_int);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01330:
        // 01330 NEXT I
        int dummy_1330=0; // Ignore this line.
    }; // End-For(I_int)
    // 01340 FOR J=1 TO 4
    for(J_int=1;J_int<=4;J_int++){
        // 01350 IF P(J,1)<>-1 THEN 1400
        if(P_int_arr[J_int][1]!=-1)goto Lbl_01400;
        // 01360 NEXT J
        int dummy_1360=0; // Ignore this line.
    }; // End-For(J_int)
    // 01370 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT "YOU GOT THEM ALL IN";T;"TURNS!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU GOT THEM ALL IN"); b2c_INT(buf,T_int);strcat(buf,"TURNS!");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 GOTO 1470
    goto Lbl_01470;

  Lbl_01400:
    // 01400 IF T<10 THEN 1190
    if(T_int<10)goto Lbl_01190;
    // 01410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT "SORRY, THAT'S 10 TRIES.  HERE IS WHERE THEY'RE HIDING:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, THAT'S 10 TRIES.  HERE IS WHERE THEY'RE HIDING:");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 01440 IF P(I,1)=-1 THEN 1460
        if(P_int_arr[I_int][1]==-1)goto Lbl_01460;
        // 01450 PRINT "MUGWUMP";I;"IS AT (";P(I,1);",";P(I,2);")"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MUGWUMP"); b2c_INT(buf,I_int);strcat(buf,"IS AT ("); b2c_INT(buf,P_int_arr[I_int][1]);strcat(buf,","); b2c_INT(buf,P_int_arr[I_int][2]);strcat(buf,")");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01460:
        // 01460 NEXT I
        int dummy_1460=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_01470:
    // 01470 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01480 PRINT "THAT WAS FUN! LET'S PLAY AGAIN......."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT WAS FUN! LET'S PLAY AGAIN.......");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 PRINT "FOUR MORE MUGWUMPS ARE NOW IN HIDING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOUR MORE MUGWUMPS ARE NOW IN HIDING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01500 GOTO 1170
    goto Lbl_01170;
    // 01510 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
