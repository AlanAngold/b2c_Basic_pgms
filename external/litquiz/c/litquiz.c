/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/litquiz.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57efffc886d0 ---------A   00001  PRINT TAB(25);"LITERATURE QUIZ"
    0x57efffc88670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57efffc887f0 ---------A   00003  PRINT:PRINT:PRINT
    0x57efffc8af30 ---------A   00005  R=0
    0x57efffc89480 ---------A   00010  PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x57efffc88be0 ---------A   00012  PRINT: PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x57efffc8b180 ---------A   00013  PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x57efffc897e0 ---------A   00015  PRINT: PRINT "GOOD LUCK!": PRINT: PRINT
    0x57efffc90920 ---------A   00040  PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x57efffc90a80 ---------A   00042  PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x57efffc90ea0 ---------A   00043  INPUT A: IF A=3 THEN 46
    0x57efffc8ae70 ---------A   00044  PRINT "SORRY...FIGARO WAS HIS NAME.": GOTO 50
    0x57efffc910e0 ---------A T 00046  PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x57efffc8b0b0 ---------A   00047  R=R+1
    0x57efffc91470 ---------A T 00050  PRINT: PRINT
    0x57efffc91620 ---------A   00051  PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x57efffc91790 ---------A   00052  PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x57efffc91b20 ---------A   00053  INPUT A: IF A=2 THEN 56
    0x57efffc91ca0 ---------A   00054  PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN.": GOTO 60
    0x57efffc91db0 ---------A T 00056  PRINT "PRETTY GOOD!"
    0x57efffc920f0 ---------A   00057  R=R+1
    0x57efffc921e0 ---------A T 00060  PRINT: PRINT
    0x57efffc92380 ---------A   00061  PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x57efffc924f0 ---------A   00062  PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x57efffc928c0 ---------A   00063  INPUT A: IF A=4 THEN 66
    0x57efffc92ac0 ---------A   00064  PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME.": GOTO 70
    0x57efffc92c20 ---------A T 00066  PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x57efffc92f60 ---------A   00067  R=R+1
    0x57efffc93060 ---------A T 00070  PRINT:PRINT
    0x57efffc93210 ---------A   00071  PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x57efffc933d0 ---------A   00072  PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x57efffc93790 ---------A   00073  INPUT A: IF A=3 THEN 76
    0x57efffc93900 ---------A   00074  PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x57efffc93b90 ---------A   00075  GOTO 80
    0x57efffc93ce0 ---------A T 00076  PRINT "GOOD MEMORY!"
    0x57efffc94020 ---------A   00077  R=R+1
    0x57efffc940f0 ---------A T 00080  PRINT:PRINT
    0x57efffc94350 ---------A   00085  IF R=4 THEN 100
    0x57efffc945e0 ---------A   00090  IF R<2 THEN 200
    0x57efffc94770 ---------A   00092  PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x57efffc948e0 ---------A   00094  PRINT "READING THE NURSERY GREATS."
    0x57efffc94940 ---------A   00096  STOP
    0x57efffc94b20 ---------A T 00100  PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x57efffc94cb0 ---------A   00110  PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x57efffc94e20 ---------A   00120  PRINT "LITERATURE (HA, HA, HA)"
    0x57efffc94e80 ---------A   00130  STOP
    0x57efffc95050 ---------A T 00200  PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x57efffc951c0 ---------A   00205  PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x57efffc95220 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00046      00043T
     00050      00044T
     00056      00053T
     00060      00054T
     00066      00063T
     00070      00064T
     00076      00073T
     00080      00075T
     00100      00085T
     00200      00090T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x57efffc886d0 (00001)   0x57efffc886d0 (00001)   0x57efffc95220 (00999)   0x57efffc95220 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/litquiz.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57efffc886d0 ---------A   00001  PRINT TAB(25);"LITERATURE QUIZ"
    0x57efffc88670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57efffc792b0 ----------   00003  PRINT
    0x57efffc889e0 ----------        a PRINT
    0x57efffc887f0 ---------A        b PRINT
    0x57efffc8af30 ---------A   00005  R=0
    0x57efffc89480 ---------A   00010  PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x57efffc894e0 ----------   00012  PRINT
    0x57efffc88be0 ---------A        a PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x57efffc8b180 ---------A   00013  PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x57efffc8b1e0 ----------   00015  PRINT
    0x57efffc896e0 ----------        a PRINT "GOOD LUCK!"
    0x57efffc89740 ----------        b PRINT
    0x57efffc897e0 ---------A        c PRINT
    0x57efffc90920 ---------A   00040  PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x57efffc90a80 ---------A   00042  PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x57efffc90c40 ----------   00043  INPUT A
    0x57efffc90ea0 ---------A        a IF A=3 THEN 46
    0x57efffc90fc0 ----------   00044  PRINT "SORRY...FIGARO WAS HIS NAME."
    0x57efffc8ae70 ---------A        a GOTO 50
    0x57efffc910e0 ---------A T 00046  PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x57efffc8b0b0 ---------A   00047  R=R+1
    0x57efffc913c0 ---------- T 00050  PRINT
    0x57efffc91470 ---------A T      a PRINT
    0x57efffc91620 ---------A   00051  PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x57efffc91790 ---------A   00052  PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x57efffc918b0 ----------   00053  INPUT A
    0x57efffc91b20 ---------A        a IF A=2 THEN 56
    0x57efffc91c40 ----------   00054  PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN."
    0x57efffc91ca0 ---------A        a GOTO 60
    0x57efffc91db0 ---------A T 00056  PRINT "PRETTY GOOD!"
    0x57efffc920f0 ---------A   00057  R=R+1
    0x57efffc92140 ---------- T 00060  PRINT
    0x57efffc921e0 ---------A T      a PRINT
    0x57efffc92380 ---------A   00061  PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x57efffc924f0 ---------A   00062  PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x57efffc92630 ----------   00063  INPUT A
    0x57efffc928c0 ---------A        a IF A=4 THEN 66
    0x57efffc92a20 ----------   00064  PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME."
    0x57efffc92ac0 ---------A        a GOTO 70
    0x57efffc92c20 ---------A T 00066  PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x57efffc92f60 ---------A   00067  R=R+1
    0x57efffc92fb0 ---------- T 00070  PRINT
    0x57efffc93060 ---------A T      a PRINT
    0x57efffc93210 ---------A   00071  PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x57efffc933d0 ---------A   00072  PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x57efffc93510 ----------   00073  INPUT A
    0x57efffc93790 ---------A        a IF A=3 THEN 76
    0x57efffc93900 ---------A   00074  PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x57efffc93b90 ---------A   00075  GOTO 80
    0x57efffc93ce0 ---------A T 00076  PRINT "GOOD MEMORY!"
    0x57efffc94020 ---------A   00077  R=R+1
    0x57efffc94070 ---------- T 00080  PRINT
    0x57efffc940f0 ---------A T      a PRINT
    0x57efffc94350 ---------A   00085  IF R=4 THEN 100
    0x57efffc945e0 ---------A   00090  IF R<2 THEN 200
    0x57efffc94770 ---------A   00092  PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x57efffc948e0 ---------A   00094  PRINT "READING THE NURSERY GREATS."
    0x57efffc94940 ---------A   00096  STOP
    0x57efffc94b20 ---------A T 00100  PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x57efffc94cb0 ---------A   00110  PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x57efffc94e20 ---------A   00120  PRINT "LITERATURE (HA, HA, HA)"
    0x57efffc94e80 ---------A   00130  STOP
    0x57efffc95050 ---------A T 00200  PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x57efffc951c0 ---------A   00205  PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x57efffc95220 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/litquiz.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57efffc886d0 ---------A   01000  PRINT TAB(25);"LITERATURE QUIZ"
    0x57efffc88670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57efffc792b0 ----------   01020  PRINT
    0x57efffc889e0 ----------   01030  PRINT
    0x57efffc887f0 ---------A   01040  PRINT
    0x57efffc8af30 ---------A   01050  R=0
    0x57efffc89480 ---------A   01060  PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x57efffc894e0 ----------   01070  PRINT
    0x57efffc88be0 ---------A   01080  PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x57efffc8b180 ---------A   01090  PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x57efffc8b1e0 ----------   01100  PRINT
    0x57efffc896e0 ----------   01110  PRINT "GOOD LUCK!"
    0x57efffc89740 ----------   01120  PRINT
    0x57efffc897e0 ---------A   01130  PRINT
    0x57efffc90920 ---------A   01140  PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x57efffc90a80 ---------A   01150  PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x57efffc90c40 ----------   01160  INPUT A
    0x57efffc90ea0 ---------A   01170  IF A=3 THEN 1200
    0x57efffc90fc0 ----------   01180  PRINT "SORRY...FIGARO WAS HIS NAME."
    0x57efffc8ae70 ---------A   01190  GOTO 1230
    0x57efffc910e0 ---------A   01200  PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x57efffc8b0b0 ---------A   01210  R=R+1
    0x57efffc913c0 ----------   01220  PRINT
    0x57efffc91470 ---------A   01230  PRINT
    0x57efffc91620 ---------A   01240  PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x57efffc91790 ---------A   01250  PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x57efffc918b0 ----------   01260  INPUT A
    0x57efffc91b20 ---------A   01270  IF A=2 THEN 1300
    0x57efffc91c40 ----------   01280  PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN."
    0x57efffc91ca0 ---------A   01290  GOTO 1330
    0x57efffc91db0 ---------A   01300  PRINT "PRETTY GOOD!"
    0x57efffc920f0 ---------A   01310  R=R+1
    0x57efffc92140 ----------   01320  PRINT
    0x57efffc921e0 ---------A   01330  PRINT
    0x57efffc92380 ---------A   01340  PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x57efffc924f0 ---------A   01350  PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x57efffc92630 ----------   01360  INPUT A
    0x57efffc928c0 ---------A   01370  IF A=4 THEN 1400
    0x57efffc92a20 ----------   01380  PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME."
    0x57efffc92ac0 ---------A   01390  GOTO 1430
    0x57efffc92c20 ---------A   01400  PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x57efffc92f60 ---------A   01410  R=R+1
    0x57efffc92fb0 ----------   01420  PRINT
    0x57efffc93060 ---------A   01430  PRINT
    0x57efffc93210 ---------A   01440  PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x57efffc933d0 ---------A   01450  PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x57efffc93510 ----------   01460  INPUT A
    0x57efffc93790 ---------A   01470  IF A=3 THEN 1500
    0x57efffc93900 ---------A   01480  PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x57efffc93b90 ---------A   01490  GOTO 1530
    0x57efffc93ce0 ---------A   01500  PRINT "GOOD MEMORY!"
    0x57efffc94020 ---------A   01510  R=R+1
    0x57efffc94070 ----------   01520  PRINT
    0x57efffc940f0 ---------A   01530  PRINT
    0x57efffc94350 ---------A   01540  IF R=4 THEN 1590
    0x57efffc945e0 ---------A   01550  IF R<2 THEN 1630
    0x57efffc94770 ---------A   01560  PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x57efffc948e0 ---------A   01570  PRINT "READING THE NURSERY GREATS."
    0x57efffc94940 ---------A   01580  STOP
    0x57efffc94b20 ---------A   01590  PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x57efffc94cb0 ---------A   01600  PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x57efffc94e20 ---------A   01610  PRINT "LITERATURE (HA, HA, HA)"
    0x57efffc94e80 ---------A   01620  STOP
    0x57efffc95050 ---------A   01630  PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x57efffc951c0 ---------A   01640  PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x57efffc95220 ---------A   01650  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01660 - 10000    8350 

 */



/*
 *  Symbol Table Listing for 'basic/litquiz.bas'
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
 *  Listing of basic/litquiz.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57efffc886d0 ---------A   01000  PRINT TAB(25);"LITERATURE QUIZ"
    0x57efffc88670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57efffc792b0 ---------A   01020  PRINT
    0x57efffc889e0 ---------A   01030  PRINT
    0x57efffc887f0 ---------A   01040  PRINT
    0x57efffc8af30 ---------A   01050  R=0
    0x57efffc89480 ---------A   01060  PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x57efffc894e0 ---------A   01070  PRINT
    0x57efffc88be0 ---------A   01080  PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x57efffc8b180 ---------A   01090  PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x57efffc8b1e0 ---------A   01100  PRINT
    0x57efffc896e0 ---------A   01110  PRINT "GOOD LUCK!"
    0x57efffc89740 ---------A   01120  PRINT
    0x57efffc897e0 ---------A   01130  PRINT
    0x57efffc90920 ---------A   01140  PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x57efffc90a80 ---------A   01150  PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x57efffc90c40 ---------A   01160  INPUT A
    0x57efffc90ea0 ---------A   01170  IF A=3 THEN 1200
    0x57efffc90fc0 ---------A   01180  PRINT "SORRY...FIGARO WAS HIS NAME."
    0x57efffc8ae70 ---------A   01190  GOTO 1230
    0x57efffc910e0 ---------A T 01200  PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x57efffc8b0b0 ---------A   01210  R=R+1
    0x57efffc913c0 ---------A   01220  PRINT
    0x57efffc91470 ---------A T 01230  PRINT
    0x57efffc91620 ---------A   01240  PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x57efffc91790 ---------A   01250  PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x57efffc918b0 ---------A   01260  INPUT A
    0x57efffc91b20 ---------A   01270  IF A=2 THEN 1300
    0x57efffc91c40 ---------A   01280  PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN."
    0x57efffc91ca0 ---------A   01290  GOTO 1330
    0x57efffc91db0 ---------A T 01300  PRINT "PRETTY GOOD!"
    0x57efffc920f0 ---------A   01310  R=R+1
    0x57efffc92140 ---------A   01320  PRINT
    0x57efffc921e0 ---------A T 01330  PRINT
    0x57efffc92380 ---------A   01340  PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x57efffc924f0 ---------A   01350  PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x57efffc92630 ---------A   01360  INPUT A
    0x57efffc928c0 ---------A   01370  IF A=4 THEN 1400
    0x57efffc92a20 ---------A   01380  PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME."
    0x57efffc92ac0 ---------A   01390  GOTO 1430
    0x57efffc92c20 ---------A T 01400  PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x57efffc92f60 ---------A   01410  R=R+1
    0x57efffc92fb0 ---------A   01420  PRINT
    0x57efffc93060 ---------A T 01430  PRINT
    0x57efffc93210 ---------A   01440  PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x57efffc933d0 ---------A   01450  PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x57efffc93510 ---------A   01460  INPUT A
    0x57efffc93790 ---------A   01470  IF A=3 THEN 1500
    0x57efffc93900 ---------A   01480  PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x57efffc93b90 ---------A   01490  GOTO 1530
    0x57efffc93ce0 ---------A T 01500  PRINT "GOOD MEMORY!"
    0x57efffc94020 ---------A   01510  R=R+1
    0x57efffc94070 ---------A   01520  PRINT
    0x57efffc940f0 ---------A T 01530  PRINT
    0x57efffc94350 ---------A   01540  IF R=4 THEN 1590
    0x57efffc945e0 ---------A   01550  IF R<2 THEN 1630
    0x57efffc94770 ---------A   01560  PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x57efffc948e0 ---------A   01570  PRINT "READING THE NURSERY GREATS."
    0x57efffc94940 ---------A   01580  STOP
    0x57efffc94b20 ---------A T 01590  PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x57efffc94cb0 ---------A   01600  PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x57efffc94e20 ---------A   01610  PRINT "LITERATURE (HA, HA, HA)"
    0x57efffc94e80 ---------A   01620  STOP
    0x57efffc95050 ---------A T 01630  PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x57efffc951c0 ---------A   01640  PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x57efffc95220 ---------A   01650  END
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
int    R_int;                                     // Basic: R 
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
    // 01000 PRINT TAB(25);"LITERATURE QUIZ"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,25);strcat(buf,"LITERATURE QUIZ");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 R=0
    R_int = 0;
    // 01060 PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS A MULTIPLE-CHOICE QUIZ.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK.");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "GOOD LUCK!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK!");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO");fputs(buf,fh); };
    // 01160 INPUT A
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
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01160
    // 01170 IF A=3 THEN 1200
    if(A_int==3)goto Lbl_01200;
    // 01180 PRINT "SORRY...FIGARO WAS HIS NAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY...FIGARO WAS HIS NAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 GOTO 1230
    goto Lbl_01230;

  Lbl_01200:
    // 01200 PRINT "VERY GOOD!  HERE'S ANOTHER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VERY GOOD!  HERE'S ANOTHER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 R=R+1
    R_int = R_int+1;
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01230:
    // 01230 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S");fputs(buf,fh); };
    // 01260 INPUT A
    // Start of Basic INPUT statement 01260
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
    }; // End of Basic INPUT statement 01260
    // 01270 IF A=2 THEN 1300
    if(A_int==2)goto Lbl_01300;
    // 01280 PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO BAD...IT WAS ELMER FUDD'S GARDEN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 GOTO 1330
    goto Lbl_01330;

  Lbl_01300:
    // 01300 PRINT "PRETTY GOOD!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PRETTY GOOD!");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 R=R+1
    R_int = R_int+1;
    // 01320 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01330:
    // 01330 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO");fputs(buf,fh); };
    // 01360 INPUT A
    // Start of Basic INPUT statement 01360
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
    }; // End of Basic INPUT statement 01360
    // 01370 IF A=4 THEN 1400
    if(A_int==4)goto Lbl_01400;
    // 01380 PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BACK TO THE BOOKS,...TOTO WAS HIS NAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 GOTO 1430
    goto Lbl_01430;

  Lbl_01400:
    // 01400 PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YEA!  YOU'RE A REAL LITERATURE GIANT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01410 R=R+1
    R_int = R_int+1;
    // 01420 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01430:
    // 01430 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01440 PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE");strcat(buf,"\n");fputs(buf,fh); };
    // 01450 PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY");fputs(buf,fh); };
    // 01460 INPUT A
    // Start of Basic INPUT statement 01460
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
    }; // End of Basic INPUT statement 01460
    // 01470 IF A=3 THEN 1500
    if(A_int==3)goto Lbl_01500;
    // 01480 PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OH, COME ON NOW...IT WAS SNOW WHITE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 GOTO 1530
    goto Lbl_01530;

  Lbl_01500:
    // 01500 PRINT "GOOD MEMORY!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD MEMORY!");strcat(buf,"\n");fputs(buf,fh); };
    // 01510 R=R+1
    R_int = R_int+1;
    // 01520 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01530:
    // 01530 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01540 IF R=4 THEN 1590
    if(R_int==4)goto Lbl_01590;
    // 01550 IF R<2 THEN 1630
    if(R_int<2)goto Lbl_01630;
    // 01560 PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME");strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT "READING THE NURSERY GREATS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"READING THE NURSERY GREATS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01580 STOP
    exit(1);

  Lbl_01590:
    // 01590 PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY");strcat(buf,"\n");fputs(buf,fh); };
    // 01600 PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE");strcat(buf,"\n");fputs(buf,fh); };
    // 01610 PRINT "LITERATURE (HA, HA, HA)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LITERATURE (HA, HA, HA)");strcat(buf,"\n");fputs(buf,fh); };
    // 01620 STOP
    exit(1);

  Lbl_01630:
    // 01630 PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01640 PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NURSERY SCHOOL FOR YOU, MY FRIEND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01650 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
