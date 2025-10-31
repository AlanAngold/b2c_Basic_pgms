/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/chief.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64d525e096d0 ---------A   00002  PRINT TAB(30) "CHIEF"
    0x64d525e09670 ---------A   00004  PRINT TAB(15) "CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64d525dfa2b0 ---------A   00006  PRINT:PRINT:PRINT
    0x64d525e0b1b0 ---------A   00010  PRINT "I AM CHIEF NUMBERS FREEK, THE GREAT INDIAN MATH GOD."
    0x64d525e0a040 ---------A   00020  PRINT "ARE YOU READY TO TAKE THE TEST YOU CALLED ME OUT FOR";
    0x64d525e0a480 ---------A   00030  INPUT A$
    0x64d525e09c60 ---------A   00040  IF A$="YES" THEN 60
    0x64d525e0c120 ---------A   00050  PRINT "SHUT UP, PALE FACE WITH WISE TONGUE."
    0x64d525e0a6e0 ---------A T 00060  PRINT " TAKE A NUMBER AND ADD 3. DIVIDE THIS NUMBER BY 5 AND"
    0x64d525e0a800 ---------A   00070  PRINT "MULTIPLY BY 8. DIVIDE BY 5 AND ADD THE SAME. SUBTRACT 1."
    0x64d525e0c1c0 ---------A   00080  PRINT "  WHAT DO YOU HAVE";
    0x64d525e11a60 ---------A   00090  INPUT B
    0x64d525e123c0 ---------A   00100  LET C = (B+1-5)*5/8*5-3
    0x64d525e12730 ---------A   00110  PRINT "I BET YOUR NUMBER WAS" C". AM I RIGHT";
    0x64d525e12930 ---------A   00120  INPUT D$
    0x64d525e12bd0 ---------A   00130  IF D$="YES" THEN 500
    0x64d525e12d30 ---------A   00140  PRINT "WHAT WAS YOUR ORIGINAL NUMBER";
    0x64d525e12f50 ---------A   00150  INPUT K
    0x64d525e13350 ---------A   00155  LET F=K+3
    0x64d525e13740 ---------A   00160  LET G=F/5
    0x64d525e13b30 ---------A   00170  LET H=G*8
    0x64d525e14020 ---------A   00180  LET I=H/5+5
    0x64d525e14430 ---------A   00190  LET J=I-1
    0x64d525e14560 ---------A   00200  PRINT "SO YOU THINK YOU'RE SO SMART, EH?"
    0x64d525e146f0 ---------A   00210  PRINT "NOW WATCH."
    0x64d525e14d60 ---------A   00230  PRINT K"PLUS 3 EQUALS"F". THIS DIVIDED BY 5 EQUALS"G";"
    0x64d525e150f0 ---------A   00240  PRINT "THIS TIMES 8 EQUALS"H". IF WE DIVIDE BY 5 AND ADD 5,"
    0x64d525e15670 ---------A   00250  PRINT "WE GET"I", WHICH, MINUS 1, EQUALS"J"."
    0x64d525e157f0 ---------A   00260  PRINT "NOW DO YOU BELIEVE ME";
    0x64d525e15a20 ---------A   00270  INPUT Z$
    0x64d525e15cb0 ---------A   00290  IF Z$="YES" THEN 500
    0x64d525e15e40 ---------A   00295  PRINT "YOU HAVE MADE ME MAD!!!"
    0x64d525e15fb0 ---------A   00300  PRINT "THERE MUST BE A GREAT LIGHTNING BOLT!"
    0x64d525e162b0 ---------A   00310  PRINT:PRINT
    0x64d525e16710 ---------A   00330  FOR X=30 TO 22 STEP -1
    0x64d525e169d0 ---------A   00340  PRINT TAB(X) "X X"
    0x64d525e16b10 ---------A   00350  NEXT X
    0x64d525e16de0 ---------A   00360  PRINT TAB(21) "X XXX"
    0x64d525e17090 ---------A   00370  PRINT TAB(20) "X   X"
    0x64d525e17340 ---------A   00380  PRINT TAB(19) "XX X"
    0x64d525e177a0 ---------A   00390  FOR Y=20 TO 13 STEP -1
    0x64d525e17a60 ---------A   00400  PRINT TAB(Y) "X X"
    0x64d525e17ba0 ---------A   00410  NEXT Y
    0x64d525e17e50 ---------A   00420  PRINT TAB(12) "XX"
    0x64d525e180f0 ---------A   00430  PRINT TAB(11) "X"
    0x64d525e183b0 ---------A   00440  PRINT TAB(10) "*"
    0x64d525e18600 ---------A   00450  PRINT:PRINT"#########################":PRINT
    0x64d525e18780 ---------A   00470  PRINT "I HOPE YOU BELIEVE ME NOW, FOR YOUR SAKE!!"
    0x64d525e18800 ---------A   00480  GOTO 520
    0x64d525e18950 ----------   00510  PRINT "BYE!!!"
    0x64d525e189b0 ---------A T 00520  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00060      00040T
     00500      00130T, 00290T
     00520      00480T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x64d525e096d0 (00002)   0x64d525e096d0 (00002)   0x64d525e189b0 (00520)   0x64d525e189b0 (00520)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/chief.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64d525e096d0 ---------A   00002  PRINT TAB(30) "CHIEF"
    0x64d525e09670 ---------A   00004  PRINT TAB(15) "CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64d525e0a2d0 ----------   00006  PRINT
    0x64d525e0a910 ----------        a PRINT
    0x64d525dfa2b0 ---------A        b PRINT
    0x64d525e0b1b0 ---------A   00010  PRINT "I AM CHIEF NUMBERS FREEK, THE GREAT INDIAN MATH GOD."
    0x64d525e0a040 ---------A   00020  PRINT "ARE YOU READY TO TAKE THE TEST YOU CALLED ME OUT FOR";
    0x64d525e0a480 ---------A   00030  INPUT A$
    0x64d525e09c60 ---------A   00040  IF A$="YES" THEN 60
    0x64d525e0c120 ---------A   00050  PRINT "SHUT UP, PALE FACE WITH WISE TONGUE."
    0x64d525e0a6e0 ---------A T 00060  PRINT " TAKE A NUMBER AND ADD 3. DIVIDE THIS NUMBER BY 5 AND"
    0x64d525e0a800 ---------A   00070  PRINT "MULTIPLY BY 8. DIVIDE BY 5 AND ADD THE SAME. SUBTRACT 1."
    0x64d525e0c1c0 ---------A   00080  PRINT "  WHAT DO YOU HAVE";
    0x64d525e11a60 ---------A   00090  INPUT B
    0x64d525e123c0 ---------A   00100  LET C = (B+1-5)*5/8*5-3
    0x64d525e12730 ---------A   00110  PRINT "I BET YOUR NUMBER WAS" C". AM I RIGHT";
    0x64d525e12930 ---------A   00120  INPUT D$
    0x64d525e12bd0 ---------A   00130  IF D$="YES" THEN 500
    0x64d525e12d30 ---------A   00140  PRINT "WHAT WAS YOUR ORIGINAL NUMBER";
    0x64d525e12f50 ---------A   00150  INPUT K
    0x64d525e13350 ---------A   00155  LET F=K+3
    0x64d525e13740 ---------A   00160  LET G=F/5
    0x64d525e13b30 ---------A   00170  LET H=G*8
    0x64d525e14020 ---------A   00180  LET I=H/5+5
    0x64d525e14430 ---------A   00190  LET J=I-1
    0x64d525e14560 ---------A   00200  PRINT "SO YOU THINK YOU'RE SO SMART, EH?"
    0x64d525e146f0 ---------A   00210  PRINT "NOW WATCH."
    0x64d525e14d60 ---------A   00230  PRINT K"PLUS 3 EQUALS"F". THIS DIVIDED BY 5 EQUALS"G";"
    0x64d525e150f0 ---------A   00240  PRINT "THIS TIMES 8 EQUALS"H". IF WE DIVIDE BY 5 AND ADD 5,"
    0x64d525e15670 ---------A   00250  PRINT "WE GET"I", WHICH, MINUS 1, EQUALS"J"."
    0x64d525e157f0 ---------A   00260  PRINT "NOW DO YOU BELIEVE ME";
    0x64d525e15a20 ---------A   00270  INPUT Z$
    0x64d525e15cb0 ---------A   00290  IF Z$="YES" THEN 500
    0x64d525e15e40 ---------A   00295  PRINT "YOU HAVE MADE ME MAD!!!"
    0x64d525e15fb0 ---------A   00300  PRINT "THERE MUST BE A GREAT LIGHTNING BOLT!"
    0x64d525e16220 ----------   00310  PRINT
    0x64d525e162b0 ---------A        a PRINT
    0x64d525e16710 ---------A   00330  FOR X=30 TO 22 STEP -1
    0x64d525e169d0 ---------A   00340  PRINT TAB(X) "X X"
    0x64d525e16b10 ---------A   00350  NEXT X
    0x64d525e16de0 ---------A   00360  PRINT TAB(21) "X XXX"
    0x64d525e17090 ---------A   00370  PRINT TAB(20) "X   X"
    0x64d525e17340 ---------A   00380  PRINT TAB(19) "XX X"
    0x64d525e177a0 ---------A   00390  FOR Y=20 TO 13 STEP -1
    0x64d525e17a60 ---------A   00400  PRINT TAB(Y) "X X"
    0x64d525e17ba0 ---------A   00410  NEXT Y
    0x64d525e17e50 ---------A   00420  PRINT TAB(12) "XX"
    0x64d525e180f0 ---------A   00430  PRINT TAB(11) "X"
    0x64d525e183b0 ---------A   00440  PRINT TAB(10) "*"
    0x64d525e18410 ----------   00450  PRINT
    0x64d525e18560 ----------        a PRINT"#########################"
    0x64d525e18600 ---------A        b PRINT
    0x64d525e18780 ---------A   00470  PRINT "I HOPE YOU BELIEVE ME NOW, FOR YOUR SAKE!!"
    0x64d525e18800 ---------A   00480  GOTO 520
    0x64d525e18950 ----------   00510  PRINT "BYE!!!"
    0x64d525e189b0 ---------A T 00520  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/chief.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64d525e096d0 ---------A   01000  PRINT TAB(30) "CHIEF"
    0x64d525e09670 ---------A   01010  PRINT TAB(15) "CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64d525e0a2d0 ----------   01020  PRINT
    0x64d525e0a910 ----------   01030  PRINT
    0x64d525dfa2b0 ---------A   01040  PRINT
    0x64d525e0b1b0 ---------A   01050  PRINT "I AM CHIEF NUMBERS FREEK, THE GREAT INDIAN MATH GOD."
    0x64d525e0a040 ---------A   01060  PRINT "ARE YOU READY TO TAKE THE TEST YOU CALLED ME OUT FOR";
    0x64d525e0a480 ---------A   01070  INPUT A$
    0x64d525e09c60 ---------A   01080  IF A$="YES" THEN 1100
    0x64d525e0c120 ---------A   01090  PRINT "SHUT UP, PALE FACE WITH WISE TONGUE."
    0x64d525e0a6e0 ---------A   01100  PRINT " TAKE A NUMBER AND ADD 3. DIVIDE THIS NUMBER BY 5 AND"
    0x64d525e0a800 ---------A   01110  PRINT "MULTIPLY BY 8. DIVIDE BY 5 AND ADD THE SAME. SUBTRACT 1."
    0x64d525e0c1c0 ---------A   01120  PRINT "  WHAT DO YOU HAVE";
    0x64d525e11a60 ---------A   01130  INPUT B
    0x64d525e123c0 ---------A   01140  LET C = (B+1-5)*5/8*5-3
    0x64d525e12730 ---------A   01150  PRINT "I BET YOUR NUMBER WAS" C". AM I RIGHT";
    0x64d525e12930 ---------A   01160  INPUT D$
    0x64d525e12bd0 ---------A   01170  IF D$="YES" THEN 500
    0x64d525e12d30 ---------A   01180  PRINT "WHAT WAS YOUR ORIGINAL NUMBER";
    0x64d525e12f50 ---------A   01190  INPUT K
    0x64d525e13350 ---------A   01200  LET F=K+3
    0x64d525e13740 ---------A   01210  LET G=F/5
    0x64d525e13b30 ---------A   01220  LET H=G*8
    0x64d525e14020 ---------A   01230  LET I=H/5+5
    0x64d525e14430 ---------A   01240  LET J=I-1
    0x64d525e14560 ---------A   01250  PRINT "SO YOU THINK YOU'RE SO SMART, EH?"
    0x64d525e146f0 ---------A   01260  PRINT "NOW WATCH."
    0x64d525e14d60 ---------A   01270  PRINT K"PLUS 3 EQUALS"F". THIS DIVIDED BY 5 EQUALS"G";"
    0x64d525e150f0 ---------A   01280  PRINT "THIS TIMES 8 EQUALS"H". IF WE DIVIDE BY 5 AND ADD 5,"
    0x64d525e15670 ---------A   01290  PRINT "WE GET"I", WHICH, MINUS 1, EQUALS"J"."
    0x64d525e157f0 ---------A   01300  PRINT "NOW DO YOU BELIEVE ME";
    0x64d525e15a20 ---------A   01310  INPUT Z$
    0x64d525e15cb0 ---------A   01320  IF Z$="YES" THEN 500
    0x64d525e15e40 ---------A   01330  PRINT "YOU HAVE MADE ME MAD!!!"
    0x64d525e15fb0 ---------A   01340  PRINT "THERE MUST BE A GREAT LIGHTNING BOLT!"
    0x64d525e16220 ----------   01350  PRINT
    0x64d525e162b0 ---------A   01360  PRINT
    0x64d525e16710 ---------A   01370  FOR X=30 TO 22 STEP -1
    0x64d525e169d0 ---------A   01380  PRINT TAB(X) "X X"
    0x64d525e16b10 ---------A   01390  NEXT X
    0x64d525e16de0 ---------A   01400  PRINT TAB(21) "X XXX"
    0x64d525e17090 ---------A   01410  PRINT TAB(20) "X   X"
    0x64d525e17340 ---------A   01420  PRINT TAB(19) "XX X"
    0x64d525e177a0 ---------A   01430  FOR Y=20 TO 13 STEP -1
    0x64d525e17a60 ---------A   01440  PRINT TAB(Y) "X X"
    0x64d525e17ba0 ---------A   01450  NEXT Y
    0x64d525e17e50 ---------A   01460  PRINT TAB(12) "XX"
    0x64d525e180f0 ---------A   01470  PRINT TAB(11) "X"
    0x64d525e183b0 ---------A   01480  PRINT TAB(10) "*"
    0x64d525e18410 ----------   01490  PRINT
    0x64d525e18560 ----------   01500  PRINT"#########################"
    0x64d525e18600 ---------A   01510  PRINT
    0x64d525e18780 ---------A   01520  PRINT "I HOPE YOU BELIEVE ME NOW, FOR YOUR SAKE!!"
    0x64d525e18800 ---------A   01530  GOTO 1550
    0x64d525e18950 ----------   01540  PRINT "BYE!!!"
    0x64d525e189b0 ---------A   01550  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01550 - 10000    8460 

 */



/*
 *  Symbol Table Listing for 'basic/chief.bas'
 *
    A$                       String      
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
    D$                       String      
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
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
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/chief.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64d525e096d0 ---------A   01000  PRINT TAB(30) "CHIEF"
    0x64d525e09670 ---------A   01010  PRINT TAB(15) "CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64d525e0a2d0 ---------A   01020  PRINT
    0x64d525e0a910 ---------A   01030  PRINT
    0x64d525dfa2b0 ---------A   01040  PRINT
    0x64d525e0b1b0 ---------A   01050  PRINT "I AM CHIEF NUMBERS FREEK, THE GREAT INDIAN MATH GOD."
    0x64d525e0a040 ---------A   01060  PRINT "ARE YOU READY TO TAKE THE TEST YOU CALLED ME OUT FOR";
    0x64d525e0a480 ---------A   01070  INPUT A$
    0x64d525e09c60 ---------A   01080  IF A$="YES" THEN 1100
    0x64d525e0c120 ---------A   01090  PRINT "SHUT UP, PALE FACE WITH WISE TONGUE."
    0x64d525e0a6e0 ---------A T 01100  PRINT " TAKE A NUMBER AND ADD 3. DIVIDE THIS NUMBER BY 5 AND"
    0x64d525e0a800 ---------A   01110  PRINT "MULTIPLY BY 8. DIVIDE BY 5 AND ADD THE SAME. SUBTRACT 1."
    0x64d525e0c1c0 ---------A   01120  PRINT "  WHAT DO YOU HAVE";
    0x64d525e11a60 ---------A   01130  INPUT B
    0x64d525e123c0 ---------A   01140  LET C = (B+1-5)*5/8*5-3
    0x64d525e12730 ---------A   01150  PRINT "I BET YOUR NUMBER WAS" C". AM I RIGHT";
    0x64d525e12930 ---------A   01160  INPUT D$
    0x64d525e12bd0 ---------A   01170  IF D$="YES" THEN 500
    0x64d525e12d30 ---------A   01180  PRINT "WHAT WAS YOUR ORIGINAL NUMBER";
    0x64d525e12f50 ---------A   01190  INPUT K
    0x64d525e13350 ---------A   01200  LET F=K+3
    0x64d525e13740 ---------A   01210  LET G=F/5
    0x64d525e13b30 ---------A   01220  LET H=G*8
    0x64d525e14020 ---------A   01230  LET I=H/5+5
    0x64d525e14430 ---------A   01240  LET J=I-1
    0x64d525e14560 ---------A   01250  PRINT "SO YOU THINK YOU'RE SO SMART, EH?"
    0x64d525e146f0 ---------A   01260  PRINT "NOW WATCH."
    0x64d525e14d60 ---------A   01270  PRINT K"PLUS 3 EQUALS"F". THIS DIVIDED BY 5 EQUALS"G";"
    0x64d525e150f0 ---------A   01280  PRINT "THIS TIMES 8 EQUALS"H". IF WE DIVIDE BY 5 AND ADD 5,"
    0x64d525e15670 ---------A   01290  PRINT "WE GET"I", WHICH, MINUS 1, EQUALS"J"."
    0x64d525e157f0 ---------A   01300  PRINT "NOW DO YOU BELIEVE ME";
    0x64d525e15a20 ---------A   01310  INPUT Z$
    0x64d525e15cb0 ---------A   01320  IF Z$="YES" THEN 500
    0x64d525e15e40 ---------A   01330  PRINT "YOU HAVE MADE ME MAD!!!"
    0x64d525e15fb0 ---------A   01340  PRINT "THERE MUST BE A GREAT LIGHTNING BOLT!"
    0x64d525e16220 ---------A   01350  PRINT
    0x64d525e162b0 ---------A   01360  PRINT
    0x64d525e16710 ---------A   01370  FOR X=30 TO 22 STEP -1
    0x64d525e169d0 ---------A   01380  PRINT TAB(X) "X X"
    0x64d525e16b10 ---------A   01390  NEXT X
    0x64d525e16de0 ---------A   01400  PRINT TAB(21) "X XXX"
    0x64d525e17090 ---------A   01410  PRINT TAB(20) "X   X"
    0x64d525e17340 ---------A   01420  PRINT TAB(19) "XX X"
    0x64d525e177a0 ---------A   01430  FOR Y=20 TO 13 STEP -1
    0x64d525e17a60 ---------A   01440  PRINT TAB(Y) "X X"
    0x64d525e17ba0 ---------A   01450  NEXT Y
    0x64d525e17e50 ---------A   01460  PRINT TAB(12) "XX"
    0x64d525e180f0 ---------A   01470  PRINT TAB(11) "X"
    0x64d525e183b0 ---------A   01480  PRINT TAB(10) "*"
    0x64d525e18410 ---------A   01490  PRINT
    0x64d525e18560 ---------A   01500  PRINT"#########################"
    0x64d525e18600 ---------A   01510  PRINT
    0x64d525e18780 ---------A   01520  PRINT "I HOPE YOU BELIEVE ME NOW, FOR YOUR SAKE!!"
    0x64d525e18800 ---------A   01530  GOTO 1540
    0x64d525e189b0 ---------A T 01540  END
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
char*  A_str;                                     // Basic: A$ 
int    B_int;                                     // Basic: B 
int    C_int;                                     // Basic: C 
char*  D_str;                                     // Basic: D$ 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
char*  Z_str;                                     // Basic: Z$ 
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
    // 01000 PRINT TAB(30) "CHIEF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,30);strcat(buf,"CHIEF");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15) "CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "I AM CHIEF NUMBERS FREEK, THE GREAT INDIAN MATH GOD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I AM CHIEF NUMBERS FREEK, THE GREAT INDIAN MATH GOD.");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "ARE YOU READY TO TAKE THE TEST YOU CALLED ME OUT FOR";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ARE YOU READY TO TAKE THE TEST YOU CALLED ME OUT FOR");fputs(buf,fh); };
    // 01070 INPUT A$
    // Start of Basic INPUT statement 01070
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
    }; // End of Basic INPUT statement 01070
    // 01080 IF A$="YES" THEN 1100
    if(strcmp(A_str,"YES")==0)goto Lbl_01100;
    // 01090 PRINT "SHUT UP, PALE FACE WITH WISE TONGUE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHUT UP, PALE FACE WITH WISE TONGUE.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01100:
    // 01100 PRINT " TAKE A NUMBER AND ADD 3. DIVIDE THIS NUMBER BY 5 AND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," TAKE A NUMBER AND ADD 3. DIVIDE THIS NUMBER BY 5 AND");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "MULTIPLY BY 8. DIVIDE BY 5 AND ADD THE SAME. SUBTRACT 1."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MULTIPLY BY 8. DIVIDE BY 5 AND ADD THE SAME. SUBTRACT 1.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "  WHAT DO YOU HAVE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  WHAT DO YOU HAVE");fputs(buf,fh); };
    // 01130 INPUT B
    // Start of Basic INPUT statement 01130
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 LET C = (B+1-5)*5/8*5-3
    C_int = (B_int+1-5)*5/8*5-3;
    // 01150 PRINT "I BET YOUR NUMBER WAS" C". AM I RIGHT";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I BET YOUR NUMBER WAS"); b2c_INT(buf,C_int);strcat(buf,". AM I RIGHT");fputs(buf,fh); };
    // 01160 INPUT D$
    // Start of Basic INPUT statement 01160
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&D_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01160
    // 01170 IF D$="YES" THEN 500
    if(strcmp(D_str,"YES")==0)goto Lbl_00500;
    // 01180 PRINT "WHAT WAS YOUR ORIGINAL NUMBER";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT WAS YOUR ORIGINAL NUMBER");fputs(buf,fh); };
    // 01190 INPUT K
    // Start of Basic INPUT statement 01190
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&K_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01190
    // 01200 LET F=K+3
    F_int = K_int+3;
    // 01210 LET G=F/5
    G_int = F_int/5;
    // 01220 LET H=G*8
    H_int = G_int*8;
    // 01230 LET I=H/5+5
    I_int = H_int/5+5;
    // 01240 LET J=I-1
    J_int = I_int-1;
    // 01250 PRINT "SO YOU THINK YOU'RE SO SMART, EH?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SO YOU THINK YOU'RE SO SMART, EH?");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "NOW WATCH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOW WATCH.");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT K"PLUS 3 EQUALS"F". THIS DIVIDED BY 5 EQUALS"G";"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,K_int);strcat(buf,"PLUS 3 EQUALS"); b2c_INT(buf,F_int);strcat(buf,". THIS DIVIDED BY 5 EQUALS"); b2c_INT(buf,G_int);strcat(buf,";");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT "THIS TIMES 8 EQUALS"H". IF WE DIVIDE BY 5 AND ADD 5,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS TIMES 8 EQUALS"); b2c_INT(buf,H_int);strcat(buf,". IF WE DIVIDE BY 5 AND ADD 5,");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT "WE GET"I", WHICH, MINUS 1, EQUALS"J"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WE GET"); b2c_INT(buf,I_int);strcat(buf,", WHICH, MINUS 1, EQUALS"); b2c_INT(buf,J_int);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT "NOW DO YOU BELIEVE ME";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOW DO YOU BELIEVE ME");fputs(buf,fh); };
    // 01310 INPUT Z$
    // Start of Basic INPUT statement 01310
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01310
    // 01320 IF Z$="YES" THEN 500
    if(strcmp(Z_str,"YES")==0)goto Lbl_00500;
    // 01330 PRINT "YOU HAVE MADE ME MAD!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE MADE ME MAD!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT "THERE MUST BE A GREAT LIGHTNING BOLT!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THERE MUST BE A GREAT LIGHTNING BOLT!");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01370 FOR X=30 TO 22 STEP -1
    for(X_int=30;X_int>=22;X_int+=-1){
        // 01380 PRINT TAB(X) "X X"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,X_int;strcat(buf,"X X");strcat(buf,"\n");fputs(buf,fh); };
        // 01390 NEXT X
        int dummy_1390=0; // Ignore this line.
    }; // End-For(X_int)
    // 01400 PRINT TAB(21) "X XXX"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,21);strcat(buf,"X XXX");strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT TAB(20) "X   X"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,20);strcat(buf,"X   X");strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT TAB(19) "XX X"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,19);strcat(buf,"XX X");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 FOR Y=20 TO 13 STEP -1
    for(Y_int=20;Y_int>=13;Y_int+=-1){
        // 01440 PRINT TAB(Y) "X X"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,Y_int;strcat(buf,"X X");strcat(buf,"\n");fputs(buf,fh); };
        // 01450 NEXT Y
        int dummy_1450=0; // Ignore this line.
    }; // End-For(Y_int)
    // 01460 PRINT TAB(12) "XX"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,12);strcat(buf,"XX");strcat(buf,"\n");fputs(buf,fh); };
    // 01470 PRINT TAB(11) "X"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,11);strcat(buf,"X");strcat(buf,"\n");fputs(buf,fh); };
    // 01480 PRINT TAB(10) "*"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,10);strcat(buf,"*");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01500 PRINT"#########################"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"#########################");strcat(buf,"\n");fputs(buf,fh); };
    // 01510 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01520 PRINT "I HOPE YOU BELIEVE ME NOW, FOR YOUR SAKE!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HOPE YOU BELIEVE ME NOW, FOR YOUR SAKE!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01530 GOTO 1540
    goto Lbl_01540;

  Lbl_01540:
    // 01540 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
