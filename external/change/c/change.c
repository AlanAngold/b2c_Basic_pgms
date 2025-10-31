/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/change.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60546b6b16d0 ---------A   00002  PRINT TAB(33);"CHANGE"
    0x60546b6b1670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60546b6b17f0 ---------A   00005  PRINT:PRINT:PRINT
    0x60546b6b2040 ---------A   00006  PRINT "I, YOUR FRIENDLY MICROCOMPUTER, WILL DETERMINE"
    0x60546b6b1e40 ---------A   00008  PRINT "THE CORRECT CHANGE FOR ITEMS COSTING UP TO $100."
    0x60546b6b2480 ---------A   00009  PRINT:PRINT
    0x60546b6b27a0 ---------A T 00010  PRINT "COST OF ITEM";:INPUT A:PRINT "AMOUNT OF PAYMENT";:INPUT P
    0x60546b6b9f30 ---------A   00020  C=P-A:M=C:IF C<>0 THEN 90
    0x60546b6ba050 ---------A   00025  PRINT "CORRECT AMOUNT, THANK YOU."
    0x60546b6b3e70 ---------A   00030  GOTO 400
    0x60546b6ba2d0 ---------A T 00090  IF C>0 THEN 120
    0x60546b6ba630 ---------A   00095  PRINT "SORRY, YOU HAVE SHORT-CHANGED ME $";A-P
    0x60546b6ba690 ---------A   00100  GOTO 10
    0x60546b6ba8e0 ---------A T 00120  PRINT "YOUR CHANGE, $";C
    0x60546b6badc0 ---------A   00130  D=INT(C/10)
    0x60546b6baff0 ---------A   00140  IF D=0 THEN 155
    0x60546b6bb250 ---------A   00150  PRINT D;"TEN DOLLAR BILL(S)"
    0x60546b6bb6f0 ---------A T 00155  C=M-(D*10)
    0x60546b6bbbc0 ---------A   00160  E=INT(C/5)
    0x60546b6bbdf0 ---------A   00170  IF E=0 THEN 185
    0x60546b6bc050 ---------A   00180  PRINT E;"FIVE DOLLARS BILL(S)"
    0x60546b6bc710 ---------A T 00185  C=M-(D*10+E*5)
    0x60546b6bcae0 ---------A   00190  F=INT(C)
    0x60546b6bcd10 ---------A   00200  IF F=0 THEN 215
    0x60546b6bcf70 ---------A   00210  PRINT F;"ONE DOLLAR BILL(S)"
    0x60546b6bd750 ---------A T 00215  C=M-(D*10+E*5+F)
    0x60546b6bda80 ---------A   00220  C=C*100
    0x60546b6bdd70 ---------A   00225  N=C
    0x60546b6be240 ---------A   00230  G=INT(C/50)
    0x60546b6be4a0 ---------A   00240  IF G=0 THEN 255
    0x60546b6be700 ---------A   00250  PRINT G;"ONE HALF DOLLAR(S)"
    0x60546b6beba0 ---------A T 00255  C=N-(G*50)
    0x60546b6bf070 ---------A   00260  H=INT(C/25)
    0x60546b6bf4e0 ---------A   00270  IF H=0 THEN 285
    0x60546b6bf740 ---------A   00280  PRINT H;"QUARTER(S)"
    0x60546b6bfe00 ---------A T 00285  C=N-(G*50+H*25)
    0x60546b6c02d0 ---------A   00290  I=INT(C/10)
    0x60546b6c0520 ---------A   00300  IF I=0 THEN 315
    0x60546b6c0790 ---------A   00310  PRINT I;"DIME(S)"
    0x60546b6c1070 ---------A T 00315  C=N-(G*50+H*25+I*10)
    0x60546b6c1540 ---------A   00320  J=INT(C/5)
    0x60546b6c1790 ---------A   00330  IF J=0 THEN 345
    0x60546b6c1a00 ---------A   00340  PRINT J;"NICKEL(S)"
    0x60546b6c2500 ---------A T 00345  C=N-(G*50+H*25+I*10+J*5)
    0x60546b6c29d0 ---------A   00350  K=INT(C+.5)
    0x60546b6c2c20 ---------A   00360  IF K=0 THEN 380
    0x60546b6c2e90 ---------A   00370  PRINT K;"PENNY(S)"
    0x60546b6c3000 ---------A T 00380  PRINT "THANK YOU, COME AGAIN."
    0x60546b6c30e0 ---------A   00390  PRINT:PRINT
    0x60546b6c3160 ---------A T 00400  GOTO 10
    0x60546b6c31b0 ---------A   00410  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00010      00100T, 00400T
     00090      00020T
     00120      00090T
     00155      00140T
     00185      00170T
     00215      00200T
     00255      00240T
     00285      00270T
     00315      00300T
     00345      00330T
     00380      00360T
     00400      00030T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x60546b6b16d0 (00002)   0x60546b6b16d0 (00002)   0x60546b6c31b0 (00410)   0x60546b6c31b0 (00410)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/change.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60546b6b16d0 ---------A   00002  PRINT TAB(33);"CHANGE"
    0x60546b6b1670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60546b6a22b0 ----------   00005  PRINT
    0x60546b6b19e0 ----------        a PRINT
    0x60546b6b17f0 ---------A        b PRINT
    0x60546b6b2040 ---------A   00006  PRINT "I, YOUR FRIENDLY MICROCOMPUTER, WILL DETERMINE"
    0x60546b6b1e40 ---------A   00008  PRINT "THE CORRECT CHANGE FOR ITEMS COSTING UP TO $100."
    0x60546b6b1ea0 ----------   00009  PRINT
    0x60546b6b2480 ---------A        a PRINT
    0x60546b6b36a0 ---------- T 00010  PRINT "COST OF ITEM";
    0x60546b6b41a0 ---------- T      a INPUT A
    0x60546b6b3720 ---------- T      b PRINT "AMOUNT OF PAYMENT";
    0x60546b6b27a0 ---------A T      c INPUT P
    0x60546b6b40b0 ----------   00020  C=P-A
    0x60546b6b9d20 ----------        a M=C
    0x60546b6b9f30 ---------A        b IF C<>0 THEN 90
    0x60546b6ba050 ---------A   00025  PRINT "CORRECT AMOUNT, THANK YOU."
    0x60546b6b3e70 ---------A   00030  GOTO 400
    0x60546b6ba2d0 ---------A T 00090  IF C>0 THEN 120
    0x60546b6ba630 ---------A   00095  PRINT "SORRY, YOU HAVE SHORT-CHANGED ME $";A-P
    0x60546b6ba690 ---------A   00100  GOTO 10
    0x60546b6ba8e0 ---------A T 00120  PRINT "YOUR CHANGE, $";C
    0x60546b6badc0 ---------A   00130  D=INT(C/10)
    0x60546b6baff0 ---------A   00140  IF D=0 THEN 155
    0x60546b6bb250 ---------A   00150  PRINT D;"TEN DOLLAR BILL(S)"
    0x60546b6bb6f0 ---------A T 00155  C=M-(D*10)
    0x60546b6bbbc0 ---------A   00160  E=INT(C/5)
    0x60546b6bbdf0 ---------A   00170  IF E=0 THEN 185
    0x60546b6bc050 ---------A   00180  PRINT E;"FIVE DOLLARS BILL(S)"
    0x60546b6bc710 ---------A T 00185  C=M-(D*10+E*5)
    0x60546b6bcae0 ---------A   00190  F=INT(C)
    0x60546b6bcd10 ---------A   00200  IF F=0 THEN 215
    0x60546b6bcf70 ---------A   00210  PRINT F;"ONE DOLLAR BILL(S)"
    0x60546b6bd750 ---------A T 00215  C=M-(D*10+E*5+F)
    0x60546b6bda80 ---------A   00220  C=C*100
    0x60546b6bdd70 ---------A   00225  N=C
    0x60546b6be240 ---------A   00230  G=INT(C/50)
    0x60546b6be4a0 ---------A   00240  IF G=0 THEN 255
    0x60546b6be700 ---------A   00250  PRINT G;"ONE HALF DOLLAR(S)"
    0x60546b6beba0 ---------A T 00255  C=N-(G*50)
    0x60546b6bf070 ---------A   00260  H=INT(C/25)
    0x60546b6bf4e0 ---------A   00270  IF H=0 THEN 285
    0x60546b6bf740 ---------A   00280  PRINT H;"QUARTER(S)"
    0x60546b6bfe00 ---------A T 00285  C=N-(G*50+H*25)
    0x60546b6c02d0 ---------A   00290  I=INT(C/10)
    0x60546b6c0520 ---------A   00300  IF I=0 THEN 315
    0x60546b6c0790 ---------A   00310  PRINT I;"DIME(S)"
    0x60546b6c1070 ---------A T 00315  C=N-(G*50+H*25+I*10)
    0x60546b6c1540 ---------A   00320  J=INT(C/5)
    0x60546b6c1790 ---------A   00330  IF J=0 THEN 345
    0x60546b6c1a00 ---------A   00340  PRINT J;"NICKEL(S)"
    0x60546b6c2500 ---------A T 00345  C=N-(G*50+H*25+I*10+J*5)
    0x60546b6c29d0 ---------A   00350  K=INT(C+.5)
    0x60546b6c2c20 ---------A   00360  IF K=0 THEN 380
    0x60546b6c2e90 ---------A   00370  PRINT K;"PENNY(S)"
    0x60546b6c3000 ---------A T 00380  PRINT "THANK YOU, COME AGAIN."
    0x60546b6c3060 ----------   00390  PRINT
    0x60546b6c30e0 ---------A        a PRINT
    0x60546b6c3160 ---------A T 00400  GOTO 10
    0x60546b6c31b0 ---------A   00410  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/change.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60546b6b16d0 ---------A   01000  PRINT TAB(33);"CHANGE"
    0x60546b6b1670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60546b6a22b0 ----------   01020  PRINT
    0x60546b6b19e0 ----------   01030  PRINT
    0x60546b6b17f0 ---------A   01040  PRINT
    0x60546b6b2040 ---------A   01050  PRINT "I, YOUR FRIENDLY MICROCOMPUTER, WILL DETERMINE"
    0x60546b6b1e40 ---------A   01060  PRINT "THE CORRECT CHANGE FOR ITEMS COSTING UP TO $100."
    0x60546b6b1ea0 ----------   01070  PRINT
    0x60546b6b2480 ---------A   01080  PRINT
    0x60546b6b36a0 ----------   01090  PRINT "COST OF ITEM";
    0x60546b6b41a0 ----------   01100  INPUT A
    0x60546b6b3720 ----------   01110  PRINT "AMOUNT OF PAYMENT";
    0x60546b6b27a0 ---------A   01120  INPUT P
    0x60546b6b40b0 ----------   01130  C=P-A
    0x60546b6b9d20 ----------   01140  M=C
    0x60546b6b9f30 ---------A   01150  IF C<>0 THEN 1180
    0x60546b6ba050 ---------A   01160  PRINT "CORRECT AMOUNT, THANK YOU."
    0x60546b6b3e70 ---------A   01170  GOTO 1580
    0x60546b6ba2d0 ---------A   01180  IF C>0 THEN 1210
    0x60546b6ba630 ---------A   01190  PRINT "SORRY, YOU HAVE SHORT-CHANGED ME $";A-P
    0x60546b6ba690 ---------A   01200  GOTO 1120
    0x60546b6ba8e0 ---------A   01210  PRINT "YOUR CHANGE, $";C
    0x60546b6badc0 ---------A   01220  D=INT(C/10)
    0x60546b6baff0 ---------A   01230  IF D=0 THEN 1250
    0x60546b6bb250 ---------A   01240  PRINT D;"TEN DOLLAR BILL(S)"
    0x60546b6bb6f0 ---------A   01250  C=M-(D*10)
    0x60546b6bbbc0 ---------A   01260  E=INT(C/5)
    0x60546b6bbdf0 ---------A   01270  IF E=0 THEN 1290
    0x60546b6bc050 ---------A   01280  PRINT E;"FIVE DOLLARS BILL(S)"
    0x60546b6bc710 ---------A   01290  C=M-(D*10+E*5)
    0x60546b6bcae0 ---------A   01300  F=INT(C)
    0x60546b6bcd10 ---------A   01310  IF F=0 THEN 1330
    0x60546b6bcf70 ---------A   01320  PRINT F;"ONE DOLLAR BILL(S)"
    0x60546b6bd750 ---------A   01330  C=M-(D*10+E*5+F)
    0x60546b6bda80 ---------A   01340  C=C*100
    0x60546b6bdd70 ---------A   01350  N=C
    0x60546b6be240 ---------A   01360  G=INT(C/50)
    0x60546b6be4a0 ---------A   01370  IF G=0 THEN 1390
    0x60546b6be700 ---------A   01380  PRINT G;"ONE HALF DOLLAR(S)"
    0x60546b6beba0 ---------A   01390  C=N-(G*50)
    0x60546b6bf070 ---------A   01400  H=INT(C/25)
    0x60546b6bf4e0 ---------A   01410  IF H=0 THEN 1430
    0x60546b6bf740 ---------A   01420  PRINT H;"QUARTER(S)"
    0x60546b6bfe00 ---------A   01430  C=N-(G*50+H*25)
    0x60546b6c02d0 ---------A   01440  I=INT(C/10)
    0x60546b6c0520 ---------A   01450  IF I=0 THEN 1470
    0x60546b6c0790 ---------A   01460  PRINT I;"DIME(S)"
    0x60546b6c1070 ---------A   01470  C=N-(G*50+H*25+I*10)
    0x60546b6c1540 ---------A   01480  J=INT(C/5)
    0x60546b6c1790 ---------A   01490  IF J=0 THEN 1510
    0x60546b6c1a00 ---------A   01500  PRINT J;"NICKEL(S)"
    0x60546b6c2500 ---------A   01510  C=N-(G*50+H*25+I*10+J*5)
    0x60546b6c29d0 ---------A   01520  K=INT(C+.5)
    0x60546b6c2c20 ---------A   01530  IF K=0 THEN 1550
    0x60546b6c2e90 ---------A   01540  PRINT K;"PENNY(S)"
    0x60546b6c3000 ---------A   01550  PRINT "THANK YOU, COME AGAIN."
    0x60546b6c3060 ----------   01560  PRINT
    0x60546b6c30e0 ---------A   01570  PRINT
    0x60546b6c3160 ---------A   01580  GOTO 1120
    0x60546b6c31b0 ---------A   01590  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01600 - 10000    8410 

 */



/*
 *  Symbol Table Listing for 'basic/change.bas'
 *
    A                        Integer     
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
    D                        Integer     
    E                        Integer     
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
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
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
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/change.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60546b6b16d0 ---------A   01000  PRINT TAB(33);"CHANGE"
    0x60546b6b1670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60546b6a22b0 ---------A   01020  PRINT
    0x60546b6b19e0 ---------A   01030  PRINT
    0x60546b6b17f0 ---------A   01040  PRINT
    0x60546b6b2040 ---------A   01050  PRINT "I, YOUR FRIENDLY MICROCOMPUTER, WILL DETERMINE"
    0x60546b6b1e40 ---------A   01060  PRINT "THE CORRECT CHANGE FOR ITEMS COSTING UP TO $100."
    0x60546b6b1ea0 ---------A   01070  PRINT
    0x60546b6b2480 ---------A   01080  PRINT
    0x60546b6b36a0 ---------A   01090  PRINT "COST OF ITEM";
    0x60546b6b41a0 ---------A   01100  INPUT A
    0x60546b6b3720 ---------A   01110  PRINT "AMOUNT OF PAYMENT";
    0x60546b6b27a0 ---------A T 01120  INPUT P
    0x60546b6b40b0 ---------A   01130  C=P-A
    0x60546b6b9d20 ---------A   01140  M=C
    0x60546b6b9f30 ---------A   01150  IF C<>0 THEN 1180
    0x60546b6ba050 ---------A   01160  PRINT "CORRECT AMOUNT, THANK YOU."
    0x60546b6b3e70 ---------A   01170  GOTO 1580
    0x60546b6ba2d0 ---------A T 01180  IF C>0 THEN 1210
    0x60546b6ba630 ---------A   01190  PRINT "SORRY, YOU HAVE SHORT-CHANGED ME $";A-P
    0x60546b6ba690 ---------A   01200  GOTO 1120
    0x60546b6ba8e0 ---------A T 01210  PRINT "YOUR CHANGE, $";C
    0x60546b6badc0 ---------A   01220  D=INT(C/10)
    0x60546b6baff0 ---------A   01230  IF D=0 THEN 1250
    0x60546b6bb250 ---------A   01240  PRINT D;"TEN DOLLAR BILL(S)"
    0x60546b6bb6f0 ---------A T 01250  C=M-(D*10)
    0x60546b6bbbc0 ---------A   01260  E=INT(C/5)
    0x60546b6bbdf0 ---------A   01270  IF E=0 THEN 1290
    0x60546b6bc050 ---------A   01280  PRINT E;"FIVE DOLLARS BILL(S)"
    0x60546b6bc710 ---------A T 01290  C=M-(D*10+E*5)
    0x60546b6bcae0 ---------A   01300  F=INT(C)
    0x60546b6bcd10 ---------A   01310  IF F=0 THEN 1330
    0x60546b6bcf70 ---------A   01320  PRINT F;"ONE DOLLAR BILL(S)"
    0x60546b6bd750 ---------A T 01330  C=M-(D*10+E*5+F)
    0x60546b6bda80 ---------A   01340  C=C*100
    0x60546b6bdd70 ---------A   01350  N=C
    0x60546b6be240 ---------A   01360  G=INT(C/50)
    0x60546b6be4a0 ---------A   01370  IF G=0 THEN 1390
    0x60546b6be700 ---------A   01380  PRINT G;"ONE HALF DOLLAR(S)"
    0x60546b6beba0 ---------A T 01390  C=N-(G*50)
    0x60546b6bf070 ---------A   01400  H=INT(C/25)
    0x60546b6bf4e0 ---------A   01410  IF H=0 THEN 1430
    0x60546b6bf740 ---------A   01420  PRINT H;"QUARTER(S)"
    0x60546b6bfe00 ---------A T 01430  C=N-(G*50+H*25)
    0x60546b6c02d0 ---------A   01440  I=INT(C/10)
    0x60546b6c0520 ---------A   01450  IF I=0 THEN 1470
    0x60546b6c0790 ---------A   01460  PRINT I;"DIME(S)"
    0x60546b6c1070 ---------A T 01470  C=N-(G*50+H*25+I*10)
    0x60546b6c1540 ---------A   01480  J=INT(C/5)
    0x60546b6c1790 ---------A   01490  IF J=0 THEN 1510
    0x60546b6c1a00 ---------A   01500  PRINT J;"NICKEL(S)"
    0x60546b6c2500 ---------A T 01510  C=N-(G*50+H*25+I*10+J*5)
    0x60546b6c29d0 ---------A   01520  K=INT(C+.5)
    0x60546b6c2c20 ---------A   01530  IF K=0 THEN 1550
    0x60546b6c2e90 ---------A   01540  PRINT K;"PENNY(S)"
    0x60546b6c3000 ---------A T 01550  PRINT "THANK YOU, COME AGAIN."
    0x60546b6c3060 ---------A   01560  PRINT
    0x60546b6c30e0 ---------A   01570  PRINT
    0x60546b6c3160 ---------A T 01580  GOTO 1120
    0x60546b6c31b0 ---------A   01590  END
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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
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
    // 01000 PRINT TAB(33);"CHANGE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"CHANGE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "I, YOUR FRIENDLY MICROCOMPUTER, WILL DETERMINE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I, YOUR FRIENDLY MICROCOMPUTER, WILL DETERMINE");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "THE CORRECT CHANGE FOR ITEMS COSTING UP TO $100."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CORRECT CHANGE FOR ITEMS COSTING UP TO $100.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "COST OF ITEM";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COST OF ITEM");fputs(buf,fh); };
    // 01100 INPUT A
    // Start of Basic INPUT statement 01100
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01100
    // 01110 PRINT "AMOUNT OF PAYMENT";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AMOUNT OF PAYMENT");fputs(buf,fh); };

  Lbl_01120:
    // 01120 INPUT P
    // Start of Basic INPUT statement 01120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01120
    // 01130 C=P-A
    C_int = P_int-A_int;
    // 01140 M=C
    M_int = C_int;
    // 01150 IF C<>0 THEN 1180
    if(C_int!=0)goto Lbl_01180;
    // 01160 PRINT "CORRECT AMOUNT, THANK YOU."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CORRECT AMOUNT, THANK YOU.");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 GOTO 1580
    goto Lbl_01580;

  Lbl_01180:
    // 01180 IF C>0 THEN 1210
    if(C_int>0)goto Lbl_01210;
    // 01190 PRINT "SORRY, YOU HAVE SHORT-CHANGED ME $";A-P
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, YOU HAVE SHORT-CHANGED ME $"); b2c_INT(buf,A_int-P_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01200 GOTO 1120
    goto Lbl_01120;

  Lbl_01210:
    // 01210 PRINT "YOUR CHANGE, $";C
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR CHANGE, $"); b2c_INT(buf,C_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 D=INT(C/10)
    D_int = INT(C_int/10);
    // 01230 IF D=0 THEN 1250
    if(D_int==0)goto Lbl_01250;
    // 01240 PRINT D;"TEN DOLLAR BILL(S)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,D_int);strcat(buf,"TEN DOLLAR BILL(S)");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01250:
    // 01250 C=M-(D*10)
    C_int = M_int-(D_int*10);
    // 01260 E=INT(C/5)
    E_int = INT(C_int/5);
    // 01270 IF E=0 THEN 1290
    if(E_int==0)goto Lbl_01290;
    // 01280 PRINT E;"FIVE DOLLARS BILL(S)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,E_int);strcat(buf,"FIVE DOLLARS BILL(S)");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01290:
    // 01290 C=M-(D*10+E*5)
    C_int = M_int-(D_int*10+E_int*5);
    // 01300 F=INT(C)
    F_int = INT(C_int);
    // 01310 IF F=0 THEN 1330
    if(F_int==0)goto Lbl_01330;
    // 01320 PRINT F;"ONE DOLLAR BILL(S)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int);strcat(buf,"ONE DOLLAR BILL(S)");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01330:
    // 01330 C=M-(D*10+E*5+F)
    C_int = M_int-(D_int*10+E_int*5+F_int);
    // 01340 C=C*100
    C_int = C_int*100;
    // 01350 N=C
    N_int = C_int;
    // 01360 G=INT(C/50)
    G_int = INT(C_int/50);
    // 01370 IF G=0 THEN 1390
    if(G_int==0)goto Lbl_01390;
    // 01380 PRINT G;"ONE HALF DOLLAR(S)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,G_int);strcat(buf,"ONE HALF DOLLAR(S)");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01390:
    // 01390 C=N-(G*50)
    C_int = N_int-(G_int*50);
    // 01400 H=INT(C/25)
    H_int = INT(C_int/25);
    // 01410 IF H=0 THEN 1430
    if(H_int==0)goto Lbl_01430;
    // 01420 PRINT H;"QUARTER(S)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,H_int);strcat(buf,"QUARTER(S)");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01430:
    // 01430 C=N-(G*50+H*25)
    C_int = N_int-(G_int*50+H_int*25);
    // 01440 I=INT(C/10)
    I_int = INT(C_int/10);
    // 01450 IF I=0 THEN 1470
    if(I_int==0)goto Lbl_01470;
    // 01460 PRINT I;"DIME(S)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,I_int);strcat(buf,"DIME(S)");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01470:
    // 01470 C=N-(G*50+H*25+I*10)
    C_int = N_int-(G_int*50+H_int*25+I_int*10);
    // 01480 J=INT(C/5)
    J_int = INT(C_int/5);
    // 01490 IF J=0 THEN 1510
    if(J_int==0)goto Lbl_01510;
    // 01500 PRINT J;"NICKEL(S)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,J_int);strcat(buf,"NICKEL(S)");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01510:
    // 01510 C=N-(G*50+H*25+I*10+J*5)
    C_int = N_int-(G_int*50+H_int*25+I_int*10+J_int*5);
    // 01520 K=INT(C+.5)
    K_int = INT(C_int+0.5);
    // 01530 IF K=0 THEN 1550
    if(K_int==0)goto Lbl_01550;
    // 01540 PRINT K;"PENNY(S)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,K_int);strcat(buf,"PENNY(S)");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01550:
    // 01550 PRINT "THANK YOU, COME AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THANK YOU, COME AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01580:
    // 01580 GOTO 1120
    goto Lbl_01120;
    // 01590 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
