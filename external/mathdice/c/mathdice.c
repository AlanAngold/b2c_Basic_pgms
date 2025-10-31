/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/mathdice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x587beccc16d0 ---------A   00010  PRINT TAB(31);"MATH DICE"
    0x587beccc1670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x587beccc17f0 ---------A   00030  PRINT:PRINT:PRINT
    0x587beccc3ae0 ---------A   00040  PRINT "THIS PROGRAM GENERATES SUCCESIVE PICTURES OF TWO DICE."
    0x587beccc2080 ---------A   00050  PRINT "WHEN TWO DICE AND AN EQUAL SIGN FOLLOWED BY A QUESTION"
    0x587beccc36a0 ---------A   00060  PRINT "MARK HAVE BEEN PRINTED, TYPE YOUR ANSWER AND THE RETURN KEY."
    0x587beccc1c20 ---------A   00070  PRINT "TO CONCLUDE THE LESSON, TYPE CONTROL-C AS YOUR ANSWER."
    0x587beccc1c80 ---------A   00080  PRINT
    0x587beccc4100 ---------A   00090  PRINT
    0x587beccc1e40 ---------A T 00100  N=N+1
    0x587beccc9e00 ---------A   00110  D=INT(6*RND(1)+1)
    0x587beccc9f10 ---------A   00120  PRINT" ----- "
    0x587beccca130 ---------A   00130  IF D=1 THEN 200
    0x587beccca350 ---------A   00140  IF D=2 THEN 180
    0x587beccca570 ---------A   00150  IF D=3 THEN 180
    0x587beccca6d0 ---------A   00160  PRINT "I * * I"
    0x587beccca750 ---------A   00170  GOTO 210
    0x587beccca8a0 ---------A T 00180  PRINT "I *   I"
    0x587beccca920 ---------A   00190  GOTO 210
    0x587becccaa70 ---------A T 00200  PRINT "I     I"
    0x587becccacd0 ---------A T 00210  IF D=2 THEN 260
    0x587becccaf30 ---------A   00220  IF D=4 THEN 260
    0x587becccb190 ---------A   00230  IF D=6 THEN 270
    0x587becccb2f0 ---------A   00240  PRINT "I  *  I"
    0x587becccb370 ---------A   00250  GOTO 280
    0x587becccb4c0 ---------A T 00260  PRINT "I     I"
    0x587becccb540 ---------A   00265  GOTO 280
    0x587becccb690 ---------A T 00270  PRINT "I * * I"
    0x587becccb8f0 ---------A T 00280  IF D=1 THEN 350
    0x587becccbb50 ---------A   00290  IF D=2 THEN 330
    0x587becccbdb0 ---------A   00300  IF D=3 THEN 330
    0x587becccbf10 ---------A   00310  PRINT "I * * I"
    0x587becccbf90 ---------A   00320  GOTO 360
    0x587becccc2f0 ---------A T 00330  PRINT "I   * I"
    0x587becccc370 ---------A   00340  GOTO 360
    0x587becccc4c0 ---------A T 00350  PRINT "I     I"
    0x587becccc620 ---------A T 00360  PRINT " ----- "
    0x587becccc6a0 ---------A   00370  PRINT
    0x587becccc900 ---------A   00375  IF N=2 THEN 500
    0x587becccca60 ---------A   00380  PRINT "   +"
    0x587beccccae0 ---------A   00381  PRINT
    0x587beccccde0 ---------A   00400  A=D
    0x587becccce50 ---------A   00410  GOTO 100
    0x587becccd260 ---------A T 00500  T=D+A
    0x587becccd3d0 ---------A   00510  PRINT "      =";
    0x587becccd5f0 ---------A   00520  INPUT T1
    0x587becccd8a0 ---------A   00530  IF T1=T THEN 590
    0x587becccda20 ---------A   00540  PRINT "NO, COUNT THE SPOTS AND GIVE ANOTHER ANSWER."
    0x587becccdba0 ---------A   00541  PRINT "      =";
    0x587becccddc0 ---------A   00550  INPUT T2
    0x587beccce020 ---------A   00560  IF T2=T THEN 590
    0x587beccce280 ---------A   00570  PRINT "NO, THE ANSWER IS";T
    0x587beccce300 ---------A   00580  GOTO 600
    0x587beccce450 ---------A T 00590  PRINT "RIGHT!"
    0x587beccce4b0 ---------A T 00600  PRINT
    0x587beccce5f0 ---------A   00601  PRINT "THE DICE ROLL AGAIN..."
    0x587beccce670 ---------A   00610  PRINT
    0x587beccce890 ---------A   00615  N=0
    0x587beccce900 ---------A   00620  GOTO 100
    0x587beccce950 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00100      00410T, 00620T
     00180      00140T, 00150T
     00200      00130T
     00210      00170T, 00190T
     00260      00210T, 00220T
     00270      00230T
     00280      00250T, 00265T
     00330      00290T, 00300T
     00350      00280T
     00360      00320T, 00340T
     00500      00375T
     00590      00530T, 00560T
     00600      00580T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x587beccc16d0 (00010)   0x587beccc16d0 (00010)   0x587beccce950 (00999)   0x587beccce950 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/mathdice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x587beccc16d0 ---------A   00010  PRINT TAB(31);"MATH DICE"
    0x587beccc1670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x587beccb22b0 ----------   00030  PRINT
    0x587beccc19e0 ----------        a PRINT
    0x587beccc17f0 ---------A        b PRINT
    0x587beccc3ae0 ---------A   00040  PRINT "THIS PROGRAM GENERATES SUCCESIVE PICTURES OF TWO DICE."
    0x587beccc2080 ---------A   00050  PRINT "WHEN TWO DICE AND AN EQUAL SIGN FOLLOWED BY A QUESTION"
    0x587beccc36a0 ---------A   00060  PRINT "MARK HAVE BEEN PRINTED, TYPE YOUR ANSWER AND THE RETURN KEY."
    0x587beccc1c20 ---------A   00070  PRINT "TO CONCLUDE THE LESSON, TYPE CONTROL-C AS YOUR ANSWER."
    0x587beccc1c80 ---------A   00080  PRINT
    0x587beccc4100 ---------A   00090  PRINT
    0x587beccc1e40 ---------A T 00100  N=N+1
    0x587beccc9e00 ---------A   00110  D=INT(6*RND(1)+1)
    0x587beccc9f10 ---------A   00120  PRINT" ----- "
    0x587beccca130 ---------A   00130  IF D=1 THEN 200
    0x587beccca350 ---------A   00140  IF D=2 THEN 180
    0x587beccca570 ---------A   00150  IF D=3 THEN 180
    0x587beccca6d0 ---------A   00160  PRINT "I * * I"
    0x587beccca750 ---------A   00170  GOTO 210
    0x587beccca8a0 ---------A T 00180  PRINT "I *   I"
    0x587beccca920 ---------A   00190  GOTO 210
    0x587becccaa70 ---------A T 00200  PRINT "I     I"
    0x587becccacd0 ---------A T 00210  IF D=2 THEN 260
    0x587becccaf30 ---------A   00220  IF D=4 THEN 260
    0x587becccb190 ---------A   00230  IF D=6 THEN 270
    0x587becccb2f0 ---------A   00240  PRINT "I  *  I"
    0x587becccb370 ---------A   00250  GOTO 280
    0x587becccb4c0 ---------A T 00260  PRINT "I     I"
    0x587becccb540 ---------A   00265  GOTO 280
    0x587becccb690 ---------A T 00270  PRINT "I * * I"
    0x587becccb8f0 ---------A T 00280  IF D=1 THEN 350
    0x587becccbb50 ---------A   00290  IF D=2 THEN 330
    0x587becccbdb0 ---------A   00300  IF D=3 THEN 330
    0x587becccbf10 ---------A   00310  PRINT "I * * I"
    0x587becccbf90 ---------A   00320  GOTO 360
    0x587becccc2f0 ---------A T 00330  PRINT "I   * I"
    0x587becccc370 ---------A   00340  GOTO 360
    0x587becccc4c0 ---------A T 00350  PRINT "I     I"
    0x587becccc620 ---------A T 00360  PRINT " ----- "
    0x587becccc6a0 ---------A   00370  PRINT
    0x587becccc900 ---------A   00375  IF N=2 THEN 500
    0x587becccca60 ---------A   00380  PRINT "   +"
    0x587beccccae0 ---------A   00381  PRINT
    0x587beccccde0 ---------A   00400  A=D
    0x587becccce50 ---------A   00410  GOTO 100
    0x587becccd260 ---------A T 00500  T=D+A
    0x587becccd3d0 ---------A   00510  PRINT "      =";
    0x587becccd5f0 ---------A   00520  INPUT T1
    0x587becccd8a0 ---------A   00530  IF T1=T THEN 590
    0x587becccda20 ---------A   00540  PRINT "NO, COUNT THE SPOTS AND GIVE ANOTHER ANSWER."
    0x587becccdba0 ---------A   00541  PRINT "      =";
    0x587becccddc0 ---------A   00550  INPUT T2
    0x587beccce020 ---------A   00560  IF T2=T THEN 590
    0x587beccce280 ---------A   00570  PRINT "NO, THE ANSWER IS";T
    0x587beccce300 ---------A   00580  GOTO 600
    0x587beccce450 ---------A T 00590  PRINT "RIGHT!"
    0x587beccce4b0 ---------A T 00600  PRINT
    0x587beccce5f0 ---------A   00601  PRINT "THE DICE ROLL AGAIN..."
    0x587beccce670 ---------A   00610  PRINT
    0x587beccce890 ---------A   00615  N=0
    0x587beccce900 ---------A   00620  GOTO 100
    0x587beccce950 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/mathdice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x587beccc16d0 ---------A   01000  PRINT TAB(31);"MATH DICE"
    0x587beccc1670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x587beccb22b0 ----------   01020  PRINT
    0x587beccc19e0 ----------   01030  PRINT
    0x587beccc17f0 ---------A   01040  PRINT
    0x587beccc3ae0 ---------A   01050  PRINT "THIS PROGRAM GENERATES SUCCESIVE PICTURES OF TWO DICE."
    0x587beccc2080 ---------A   01060  PRINT "WHEN TWO DICE AND AN EQUAL SIGN FOLLOWED BY A QUESTION"
    0x587beccc36a0 ---------A   01070  PRINT "MARK HAVE BEEN PRINTED, TYPE YOUR ANSWER AND THE RETURN KEY."
    0x587beccc1c20 ---------A   01080  PRINT "TO CONCLUDE THE LESSON, TYPE CONTROL-C AS YOUR ANSWER."
    0x587beccc1c80 ---------A   01090  PRINT
    0x587beccc4100 ---------A   01100  PRINT
    0x587beccc1e40 ---------A   01110  N=N+1
    0x587beccc9e00 ---------A   01120  D=INT(6*RND(1)+1)
    0x587beccc9f10 ---------A   01130  PRINT" ----- "
    0x587beccca130 ---------A   01140  IF D=1 THEN 1210
    0x587beccca350 ---------A   01150  IF D=2 THEN 1190
    0x587beccca570 ---------A   01160  IF D=3 THEN 1190
    0x587beccca6d0 ---------A   01170  PRINT "I * * I"
    0x587beccca750 ---------A   01180  GOTO 1220
    0x587beccca8a0 ---------A   01190  PRINT "I *   I"
    0x587beccca920 ---------A   01200  GOTO 1220
    0x587becccaa70 ---------A   01210  PRINT "I     I"
    0x587becccacd0 ---------A   01220  IF D=2 THEN 1270
    0x587becccaf30 ---------A   01230  IF D=4 THEN 1270
    0x587becccb190 ---------A   01240  IF D=6 THEN 1290
    0x587becccb2f0 ---------A   01250  PRINT "I  *  I"
    0x587becccb370 ---------A   01260  GOTO 1300
    0x587becccb4c0 ---------A   01270  PRINT "I     I"
    0x587becccb540 ---------A   01280  GOTO 1300
    0x587becccb690 ---------A   01290  PRINT "I * * I"
    0x587becccb8f0 ---------A   01300  IF D=1 THEN 1370
    0x587becccbb50 ---------A   01310  IF D=2 THEN 1350
    0x587becccbdb0 ---------A   01320  IF D=3 THEN 1350
    0x587becccbf10 ---------A   01330  PRINT "I * * I"
    0x587becccbf90 ---------A   01340  GOTO 1380
    0x587becccc2f0 ---------A   01350  PRINT "I   * I"
    0x587becccc370 ---------A   01360  GOTO 1380
    0x587becccc4c0 ---------A   01370  PRINT "I     I"
    0x587becccc620 ---------A   01380  PRINT " ----- "
    0x587becccc6a0 ---------A   01390  PRINT
    0x587becccc900 ---------A   01400  IF N=2 THEN 1450
    0x587becccca60 ---------A   01410  PRINT "   +"
    0x587beccccae0 ---------A   01420  PRINT
    0x587beccccde0 ---------A   01430  A=D
    0x587becccce50 ---------A   01440  GOTO 1110
    0x587becccd260 ---------A   01450  T=D+A
    0x587becccd3d0 ---------A   01460  PRINT "      =";
    0x587becccd5f0 ---------A   01470  INPUT T1
    0x587becccd8a0 ---------A   01480  IF T1=T THEN 1550
    0x587becccda20 ---------A   01490  PRINT "NO, COUNT THE SPOTS AND GIVE ANOTHER ANSWER."
    0x587becccdba0 ---------A   01500  PRINT "      =";
    0x587becccddc0 ---------A   01510  INPUT T2
    0x587beccce020 ---------A   01520  IF T2=T THEN 1550
    0x587beccce280 ---------A   01530  PRINT "NO, THE ANSWER IS";T
    0x587beccce300 ---------A   01540  GOTO 1560
    0x587beccce450 ---------A   01550  PRINT "RIGHT!"
    0x587beccce4b0 ---------A   01560  PRINT
    0x587beccce5f0 ---------A   01570  PRINT "THE DICE ROLL AGAIN..."
    0x587beccce670 ---------A   01580  PRINT
    0x587beccce890 ---------A   01590  N=0
    0x587beccce900 ---------A   01600  GOTO 1110
    0x587beccce950 ---------A   01610  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01620 - 10000    8390 

 */



/*
 *  Symbol Table Listing for 'basic/mathdice.bas'
 *
    A                        Integer     
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
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    T1                       Integer     
    T2                       Integer     
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
 *  Listing of basic/mathdice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x587beccc16d0 ---------A   01000  PRINT TAB(31);"MATH DICE"
    0x587beccc1670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x587beccb22b0 ---------A   01020  PRINT
    0x587beccc19e0 ---------A   01030  PRINT
    0x587beccc17f0 ---------A   01040  PRINT
    0x587beccc3ae0 ---------A   01050  PRINT "THIS PROGRAM GENERATES SUCCESIVE PICTURES OF TWO DICE."
    0x587beccc2080 ---------A   01060  PRINT "WHEN TWO DICE AND AN EQUAL SIGN FOLLOWED BY A QUESTION"
    0x587beccc36a0 ---------A   01070  PRINT "MARK HAVE BEEN PRINTED, TYPE YOUR ANSWER AND THE RETURN KEY."
    0x587beccc1c20 ---------A   01080  PRINT "TO CONCLUDE THE LESSON, TYPE CONTROL-C AS YOUR ANSWER."
    0x587beccc1c80 ---------A   01090  PRINT
    0x587beccc4100 ---------A   01100  PRINT
    0x587beccc1e40 ---------A T 01110  N=N+1
    0x587beccc9e00 ---------A   01120  D=INT(6*RND(1)+1)
    0x587beccc9f10 ---------A   01130  PRINT" ----- "
    0x587beccca130 ---------A   01140  IF D=1 THEN 1210
    0x587beccca350 ---------A   01150  IF D=2 THEN 1190
    0x587beccca570 ---------A   01160  IF D=3 THEN 1190
    0x587beccca6d0 ---------A   01170  PRINT "I * * I"
    0x587beccca750 ---------A   01180  GOTO 1220
    0x587beccca8a0 ---------A T 01190  PRINT "I *   I"
    0x587beccca920 ---------A   01200  GOTO 1220
    0x587becccaa70 ---------A T 01210  PRINT "I     I"
    0x587becccacd0 ---------A T 01220  IF D=2 THEN 1270
    0x587becccaf30 ---------A   01230  IF D=4 THEN 1270
    0x587becccb190 ---------A   01240  IF D=6 THEN 1290
    0x587becccb2f0 ---------A   01250  PRINT "I  *  I"
    0x587becccb370 ---------A   01260  GOTO 1300
    0x587becccb4c0 ---------A T 01270  PRINT "I     I"
    0x587becccb540 ---------A   01280  GOTO 1300
    0x587becccb690 ---------A T 01290  PRINT "I * * I"
    0x587becccb8f0 ---------A T 01300  IF D=1 THEN 1370
    0x587becccbb50 ---------A   01310  IF D=2 THEN 1350
    0x587becccbdb0 ---------A   01320  IF D=3 THEN 1350
    0x587becccbf10 ---------A   01330  PRINT "I * * I"
    0x587becccbf90 ---------A   01340  GOTO 1380
    0x587becccc2f0 ---------A T 01350  PRINT "I   * I"
    0x587becccc370 ---------A   01360  GOTO 1380
    0x587becccc4c0 ---------A T 01370  PRINT "I     I"
    0x587becccc620 ---------A T 01380  PRINT " ----- "
    0x587becccc6a0 ---------A   01390  PRINT
    0x587becccc900 ---------A   01400  IF N=2 THEN 1450
    0x587becccca60 ---------A   01410  PRINT "   +"
    0x587beccccae0 ---------A   01420  PRINT
    0x587beccccde0 ---------A   01430  A=D
    0x587becccce50 ---------A   01440  GOTO 1110
    0x587becccd260 ---------A T 01450  T=D+A
    0x587becccd3d0 ---------A   01460  PRINT "      =";
    0x587becccd5f0 ---------A   01470  INPUT T1
    0x587becccd8a0 ---------A   01480  IF T1=T THEN 1550
    0x587becccda20 ---------A   01490  PRINT "NO, COUNT THE SPOTS AND GIVE ANOTHER ANSWER."
    0x587becccdba0 ---------A   01500  PRINT "      =";
    0x587becccddc0 ---------A   01510  INPUT T2
    0x587beccce020 ---------A   01520  IF T2=T THEN 1550
    0x587beccce280 ---------A   01530  PRINT "NO, THE ANSWER IS";T
    0x587beccce300 ---------A   01540  GOTO 1560
    0x587beccce450 ---------A T 01550  PRINT "RIGHT!"
    0x587beccce4b0 ---------A T 01560  PRINT
    0x587beccce5f0 ---------A   01570  PRINT "THE DICE ROLL AGAIN..."
    0x587beccce670 ---------A   01580  PRINT
    0x587beccce890 ---------A   01590  N=0
    0x587beccce900 ---------A   01600  GOTO 1110
    0x587beccce950 ---------A   01610  END
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
int    D_int;                                     // Basic: D 
int    N_int;                                     // Basic: N 
int    T_int;                                     // Basic: T 
int    T1_int;                                    // Basic: T1 
int    T2_int;                                    // Basic: T2 
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
    // 01000 PRINT TAB(31);"MATH DICE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,31);strcat(buf,"MATH DICE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "THIS PROGRAM GENERATES SUCCESIVE PICTURES OF TWO DICE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS PROGRAM GENERATES SUCCESIVE PICTURES OF TWO DICE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "WHEN TWO DICE AND AN EQUAL SIGN FOLLOWED BY A QUESTION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHEN TWO DICE AND AN EQUAL SIGN FOLLOWED BY A QUESTION");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "MARK HAVE BEEN PRINTED, TYPE YOUR ANSWER AND THE RETURN KEY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MARK HAVE BEEN PRINTED, TYPE YOUR ANSWER AND THE RETURN KEY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "TO CONCLUDE THE LESSON, TYPE CONTROL-C AS YOUR ANSWER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO CONCLUDE THE LESSON, TYPE CONTROL-C AS YOUR ANSWER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01110:
    // 01110 N=N+1
    N_int = N_int+1;
    // 01120 D=INT(6*RND(1)+1)
    D_int = INT(6*RND(1)+1);
    // 01130 PRINT" ----- "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ----- ");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 IF D=1 THEN 1210
    if(D_int==1)goto Lbl_01210;
    // 01150 IF D=2 THEN 1190
    if(D_int==2)goto Lbl_01190;
    // 01160 IF D=3 THEN 1190
    if(D_int==3)goto Lbl_01190;
    // 01170 PRINT "I * * I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I * * I");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 GOTO 1220
    goto Lbl_01220;

  Lbl_01190:
    // 01190 PRINT "I *   I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I *   I");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 GOTO 1220
    goto Lbl_01220;

  Lbl_01210:
    // 01210 PRINT "I     I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I     I");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01220:
    // 01220 IF D=2 THEN 1270
    if(D_int==2)goto Lbl_01270;
    // 01230 IF D=4 THEN 1270
    if(D_int==4)goto Lbl_01270;
    // 01240 IF D=6 THEN 1290
    if(D_int==6)goto Lbl_01290;
    // 01250 PRINT "I  *  I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I  *  I");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 GOTO 1300
    goto Lbl_01300;

  Lbl_01270:
    // 01270 PRINT "I     I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I     I");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 GOTO 1300
    goto Lbl_01300;

  Lbl_01290:
    // 01290 PRINT "I * * I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I * * I");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01300:
    // 01300 IF D=1 THEN 1370
    if(D_int==1)goto Lbl_01370;
    // 01310 IF D=2 THEN 1350
    if(D_int==2)goto Lbl_01350;
    // 01320 IF D=3 THEN 1350
    if(D_int==3)goto Lbl_01350;
    // 01330 PRINT "I * * I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I * * I");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 GOTO 1380
    goto Lbl_01380;

  Lbl_01350:
    // 01350 PRINT "I   * I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I   * I");strcat(buf,"\n");fputs(buf,fh); };
    // 01360 GOTO 1380
    goto Lbl_01380;

  Lbl_01370:
    // 01370 PRINT "I     I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I     I");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01380:
    // 01380 PRINT " ----- "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ----- ");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01400 IF N=2 THEN 1450
    if(N_int==2)goto Lbl_01450;
    // 01410 PRINT "   +"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   +");strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01430 A=D
    A_int = D_int;
    // 01440 GOTO 1110
    goto Lbl_01110;

  Lbl_01450:
    // 01450 T=D+A
    T_int = D_int+A_int;
    // 01460 PRINT "      =";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      =");fputs(buf,fh); };
    // 01470 INPUT T1
    // Start of Basic INPUT statement 01470
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&T1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01470
    // 01480 IF T1=T THEN 1550
    if(T1_int==T_int)goto Lbl_01550;
    // 01490 PRINT "NO, COUNT THE SPOTS AND GIVE ANOTHER ANSWER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NO, COUNT THE SPOTS AND GIVE ANOTHER ANSWER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01500 PRINT "      =";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      =");fputs(buf,fh); };
    // 01510 INPUT T2
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
                (err += b2c_strtoi(&T2_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01510
    // 01520 IF T2=T THEN 1550
    if(T2_int==T_int)goto Lbl_01550;
    // 01530 PRINT "NO, THE ANSWER IS";T
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NO, THE ANSWER IS"); b2c_INT(buf,T_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01540 GOTO 1560
    goto Lbl_01560;

  Lbl_01550:
    // 01550 PRINT "RIGHT!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RIGHT!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01560:
    // 01560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT "THE DICE ROLL AGAIN..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE DICE ROLL AGAIN...");strcat(buf,"\n");fputs(buf,fh); };
    // 01580 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01590 N=0
    N_int = 0;
    // 01600 GOTO 1110
    goto Lbl_01110;
    // 01610 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
