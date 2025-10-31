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
    0x61f68a86d910 ---------A   00001  PRINT CHR$(26):PRINT TAB(25);"LITERATURE QUIZ":PRINT
    0x61f68a86c9e0 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x61f68a86eb00 ---------A   00003  PRINT:PRINT:PRINT
    0x61f68a86ef30 ---------A   00005  R=0
    0x61f68a86cc20 ---------A   00010  PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x61f68a86f1c0 ---------A   00012  PRINT: PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x61f68a86d720 ---------A   00013  PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x61f68a874960 ---------A   00015  PRINT: PRINT "GOOD LUCK!": PRINT: PRINT
    0x61f68a874b00 ---------A   00040  PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x61f68a874c60 ---------A   00042  PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x61f68a875080 ---------A   00043  INPUT A: IF A=3 THEN 46
    0x61f68a86ee70 ---------A   00044  PRINT "SORRY...FIGARO WAS HIS NAME.": GOTO 50
    0x61f68a8752c0 ---------A T 00046  PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x61f68a86f0b0 ---------A   00047  R=R+1
    0x61f68a875650 ---------A T 00050  PRINT: PRINT
    0x61f68a875800 ---------A   00051  PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x61f68a875970 ---------A   00052  PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x61f68a875d20 ---------A   00053  INPUT A: IF A=2 THEN 56
    0x61f68a875ec0 ---------A   00054  PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN.": GOTO 60
    0x61f68a876010 ---------A T 00056  PRINT "PRETTY GOOD!"
    0x61f68a876350 ---------A   00057  R=R+1
    0x61f68a876440 ---------A T 00060  PRINT: PRINT
    0x61f68a8765e0 ---------A   00061  PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x61f68a876750 ---------A   00062  PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x61f68a876b20 ---------A   00063  INPUT A: IF A=4 THEN 66
    0x61f68a876d20 ---------A   00064  PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME.": GOTO 70
    0x61f68a876e80 ---------A T 00066  PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x61f68a8771c0 ---------A   00067  R=R+1
    0x61f68a8772c0 ---------A T 00070  PRINT:PRINT
    0x61f68a877470 ---------A   00071  PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x61f68a877630 ---------A   00072  PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x61f68a8779f0 ---------A   00073  INPUT A: IF A=3 THEN 76
    0x61f68a877b60 ---------A   00074  PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x61f68a877df0 ---------A   00075  GOTO 80
    0x61f68a877f40 ---------A T 00076  PRINT "GOOD MEMORY!"
    0x61f68a878280 ---------A   00077  R=R+1
    0x61f68a878350 ---------A T 00080  PRINT:PRINT
    0x61f68a8785b0 ---------A   00085  IF R=4 THEN 100
    0x61f68a878840 ---------A   00090  IF R<2 THEN 200
    0x61f68a8789d0 ---------A   00092  PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x61f68a878b50 ---------A   00094  PRINT "READING THE NURSERY GREATS."
    0x61f68a878fa0 ---------A   00096  FOR XX=1 TO 2000:NEXT:RUN "MENU"
    0x61f68a879190 ---------A T 00100  PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x61f68a879320 ---------A   00110  PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x61f68a8794a0 ---------A   00120  PRINT "LITERATURE (HA, HA, HA)"
    0x61f68a879830 ---------A   00130  FOR XX=1 TO 2000:NEXT:RUN "MENU"
    0x61f68a879a10 ---------A T 00200  PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x61f68a879b90 ---------A   00205  PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x61f68a879f20 ---------A   00999  FOR XX=1 TO 2000:NEXT:RUN "MENU"
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
   A) 0x61f68a86d910 (00001)   0x61f68a86d910 (00001)   0x61f68a879f20 (00999)   0x61f68a879f20 (00999)   


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
    0x61f68a86c6d0 ----------   00001  PRINT CHR$(26)
    0x61f68a86c670 ----------        a PRINT TAB(25);"LITERATURE QUIZ"
    0x61f68a86d910 ---------A        b PRINT
    0x61f68a86c9e0 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x61f68a86c7f0 ----------   00003  PRINT
    0x61f68a86eaa0 ----------        a PRINT
    0x61f68a86eb00 ---------A        b PRINT
    0x61f68a86ef30 ---------A   00005  R=0
    0x61f68a86cc20 ---------A   00010  PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x61f68a86cc80 ----------   00012  PRINT
    0x61f68a86f1c0 ---------A        a PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x61f68a86d720 ---------A   00013  PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x61f68a86d780 ----------   00015  PRINT
    0x61f68a8748a0 ----------        a PRINT "GOOD LUCK!"
    0x61f68a874900 ----------        b PRINT
    0x61f68a874960 ---------A        c PRINT
    0x61f68a874b00 ---------A   00040  PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x61f68a874c60 ---------A   00042  PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x61f68a874e20 ----------   00043  INPUT A
    0x61f68a875080 ---------A        a IF A=3 THEN 46
    0x61f68a8751a0 ----------   00044  PRINT "SORRY...FIGARO WAS HIS NAME."
    0x61f68a86ee70 ---------A        a GOTO 50
    0x61f68a8752c0 ---------A T 00046  PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x61f68a86f0b0 ---------A   00047  R=R+1
    0x61f68a8755a0 ---------- T 00050  PRINT
    0x61f68a875650 ---------A T      a PRINT
    0x61f68a875800 ---------A   00051  PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x61f68a875970 ---------A   00052  PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x61f68a875a90 ----------   00053  INPUT A
    0x61f68a875d20 ---------A        a IF A=2 THEN 56
    0x61f68a875e40 ----------   00054  PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN."
    0x61f68a875ec0 ---------A        a GOTO 60
    0x61f68a876010 ---------A T 00056  PRINT "PRETTY GOOD!"
    0x61f68a876350 ---------A   00057  R=R+1
    0x61f68a8763a0 ---------- T 00060  PRINT
    0x61f68a876440 ---------A T      a PRINT
    0x61f68a8765e0 ---------A   00061  PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x61f68a876750 ---------A   00062  PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x61f68a876890 ----------   00063  INPUT A
    0x61f68a876b20 ---------A        a IF A=4 THEN 66
    0x61f68a876c80 ----------   00064  PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME."
    0x61f68a876d20 ---------A        a GOTO 70
    0x61f68a876e80 ---------A T 00066  PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x61f68a8771c0 ---------A   00067  R=R+1
    0x61f68a877210 ---------- T 00070  PRINT
    0x61f68a8772c0 ---------A T      a PRINT
    0x61f68a877470 ---------A   00071  PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x61f68a877630 ---------A   00072  PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x61f68a877770 ----------   00073  INPUT A
    0x61f68a8779f0 ---------A        a IF A=3 THEN 76
    0x61f68a877b60 ---------A   00074  PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x61f68a877df0 ---------A   00075  GOTO 80
    0x61f68a877f40 ---------A T 00076  PRINT "GOOD MEMORY!"
    0x61f68a878280 ---------A   00077  R=R+1
    0x61f68a8782d0 ---------- T 00080  PRINT
    0x61f68a878350 ---------A T      a PRINT
    0x61f68a8785b0 ---------A   00085  IF R=4 THEN 100
    0x61f68a878840 ---------A   00090  IF R<2 THEN 200
    0x61f68a8789d0 ---------A   00092  PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x61f68a878b50 ---------A   00094  PRINT "READING THE NURSERY GREATS."
    0x61f68a878ed0 ----------   00096  FOR XX=1 TO 2000
    0x61f68a878f30 ----------        a NEXT
    0x61f68a878fa0 ---------A        b RUN "MENU"
    0x61f68a879190 ---------A T 00100  PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x61f68a879320 ---------A   00110  PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x61f68a8794a0 ---------A   00120  PRINT "LITERATURE (HA, HA, HA)"
    0x61f68a879760 ----------   00130  FOR XX=1 TO 2000
    0x61f68a8797c0 ----------        a NEXT
    0x61f68a879830 ---------A        b RUN "MENU"
    0x61f68a879a10 ---------A T 00200  PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x61f68a879b90 ---------A   00205  PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x61f68a879e50 ----------   00999  FOR XX=1 TO 2000
    0x61f68a879eb0 ----------        a NEXT
    0x61f68a879f20 ---------A        b RUN "MENU"
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
    0x61f68a86c6d0 ----------   01000  PRINT CHR$(26)
    0x61f68a86c670 ----------   01010  PRINT TAB(25);"LITERATURE QUIZ"
    0x61f68a86d910 ---------A   01020  PRINT
    0x61f68a86c9e0 ---------A   01030  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x61f68a86c7f0 ----------   01040  PRINT
    0x61f68a86eaa0 ----------   01050  PRINT
    0x61f68a86eb00 ---------A   01060  PRINT
    0x61f68a86ef30 ---------A   01070  R=0
    0x61f68a86cc20 ---------A   01080  PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x61f68a86cc80 ----------   01090  PRINT
    0x61f68a86f1c0 ---------A   01100  PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x61f68a86d720 ---------A   01110  PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x61f68a86d780 ----------   01120  PRINT
    0x61f68a8748a0 ----------   01130  PRINT "GOOD LUCK!"
    0x61f68a874900 ----------   01140  PRINT
    0x61f68a874960 ---------A   01150  PRINT
    0x61f68a874b00 ---------A   01160  PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x61f68a874c60 ---------A   01170  PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x61f68a874e20 ----------   01180  INPUT A
    0x61f68a875080 ---------A   01190  IF A=3 THEN 1220
    0x61f68a8751a0 ----------   01200  PRINT "SORRY...FIGARO WAS HIS NAME."
    0x61f68a86ee70 ---------A   01210  GOTO 1250
    0x61f68a8752c0 ---------A   01220  PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x61f68a86f0b0 ---------A   01230  R=R+1
    0x61f68a8755a0 ----------   01240  PRINT
    0x61f68a875650 ---------A   01250  PRINT
    0x61f68a875800 ---------A   01260  PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x61f68a875970 ---------A   01270  PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x61f68a875a90 ----------   01280  INPUT A
    0x61f68a875d20 ---------A   01290  IF A=2 THEN 1320
    0x61f68a875e40 ----------   01300  PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN."
    0x61f68a875ec0 ---------A   01310  GOTO 1350
    0x61f68a876010 ---------A   01320  PRINT "PRETTY GOOD!"
    0x61f68a876350 ---------A   01330  R=R+1
    0x61f68a8763a0 ----------   01340  PRINT
    0x61f68a876440 ---------A   01350  PRINT
    0x61f68a8765e0 ---------A   01360  PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x61f68a876750 ---------A   01370  PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x61f68a876890 ----------   01380  INPUT A
    0x61f68a876b20 ---------A   01390  IF A=4 THEN 1420
    0x61f68a876c80 ----------   01400  PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME."
    0x61f68a876d20 ---------A   01410  GOTO 1450
    0x61f68a876e80 ---------A   01420  PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x61f68a8771c0 ---------A   01430  R=R+1
    0x61f68a877210 ----------   01440  PRINT
    0x61f68a8772c0 ---------A   01450  PRINT
    0x61f68a877470 ---------A   01460  PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x61f68a877630 ---------A   01470  PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x61f68a877770 ----------   01480  INPUT A
    0x61f68a8779f0 ---------A   01490  IF A=3 THEN 1520
    0x61f68a877b60 ---------A   01500  PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x61f68a877df0 ---------A   01510  GOTO 1550
    0x61f68a877f40 ---------A   01520  PRINT "GOOD MEMORY!"
    0x61f68a878280 ---------A   01530  R=R+1
    0x61f68a8782d0 ----------   01540  PRINT
    0x61f68a878350 ---------A   01550  PRINT
    0x61f68a8785b0 ---------A   01560  IF R=4 THEN 1630
    0x61f68a878840 ---------A   01570  IF R<2 THEN 1690
    0x61f68a8789d0 ---------A   01580  PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x61f68a878b50 ---------A   01590  PRINT "READING THE NURSERY GREATS."
    0x61f68a878ed0 ----------   01600  FOR XX=1 TO 2000
    0x61f68a878f30 ----------   01610  NEXT
    0x61f68a878fa0 ---------A   01620  RUN "MENU"
    0x61f68a879190 ---------A   01630  PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x61f68a879320 ---------A   01640  PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x61f68a8794a0 ---------A   01650  PRINT "LITERATURE (HA, HA, HA)"
    0x61f68a879760 ----------   01660  FOR XX=1 TO 2000
    0x61f68a8797c0 ----------   01670  NEXT
    0x61f68a879830 ---------A   01680  RUN "MENU"
    0x61f68a879a10 ---------A   01690  PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x61f68a879b90 ---------A   01700  PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x61f68a879e50 ----------   01710  FOR XX=1 TO 2000
    0x61f68a879eb0 ----------   01720  NEXT
    0x61f68a879f20 ---------A   01730  RUN "MENU"
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01740 - 10000    8270 

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
    XX                       Integer     

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
    0x61f68a86c6d0 ---------A   01000  PRINT CHR$(26)
    0x61f68a86c670 ---------A   01010  PRINT TAB(25);"LITERATURE QUIZ"
    0x61f68a86d910 ---------A   01020  PRINT
    0x61f68a86c9e0 ---------A   01030  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x61f68a86c7f0 ---------A   01040  PRINT
    0x61f68a86eaa0 ---------A   01050  PRINT
    0x61f68a86eb00 ---------A   01060  PRINT
    0x61f68a86ef30 ---------A   01070  R=0
    0x61f68a86cc20 ---------A   01080  PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x61f68a86cc80 ---------A   01090  PRINT
    0x61f68a86f1c0 ---------A   01100  PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x61f68a86d720 ---------A   01110  PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x61f68a86d780 ---------A   01120  PRINT
    0x61f68a8748a0 ---------A   01130  PRINT "GOOD LUCK!"
    0x61f68a874900 ---------A   01140  PRINT
    0x61f68a874960 ---------A   01150  PRINT
    0x61f68a874b00 ---------A   01160  PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x61f68a874c60 ---------A   01170  PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x61f68a874e20 ---------A   01180  INPUT A
    0x61f68a875080 ---------A   01190  IF A=3 THEN 1220
    0x61f68a8751a0 ---------A   01200  PRINT "SORRY...FIGARO WAS HIS NAME."
    0x61f68a86ee70 ---------A   01210  GOTO 1250
    0x61f68a8752c0 ---------A T 01220  PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x61f68a86f0b0 ---------A   01230  R=R+1
    0x61f68a8755a0 ---------A   01240  PRINT
    0x61f68a875650 ---------A T 01250  PRINT
    0x61f68a875800 ---------A   01260  PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x61f68a875970 ---------A   01270  PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x61f68a875a90 ---------A   01280  INPUT A
    0x61f68a875d20 ---------A   01290  IF A=2 THEN 1320
    0x61f68a875e40 ---------A   01300  PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN."
    0x61f68a875ec0 ---------A   01310  GOTO 1350
    0x61f68a876010 ---------A T 01320  PRINT "PRETTY GOOD!"
    0x61f68a876350 ---------A   01330  R=R+1
    0x61f68a8763a0 ---------A   01340  PRINT
    0x61f68a876440 ---------A T 01350  PRINT
    0x61f68a8765e0 ---------A   01360  PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x61f68a876750 ---------A   01370  PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x61f68a876890 ---------A   01380  INPUT A
    0x61f68a876b20 ---------A   01390  IF A=4 THEN 1420
    0x61f68a876c80 ---------A   01400  PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME."
    0x61f68a876d20 ---------A   01410  GOTO 1450
    0x61f68a876e80 ---------A T 01420  PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x61f68a8771c0 ---------A   01430  R=R+1
    0x61f68a877210 ---------A   01440  PRINT
    0x61f68a8772c0 ---------A T 01450  PRINT
    0x61f68a877470 ---------A   01460  PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x61f68a877630 ---------A   01470  PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x61f68a877770 ---------A   01480  INPUT A
    0x61f68a8779f0 ---------A   01490  IF A=3 THEN 1520
    0x61f68a877b60 ---------A   01500  PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x61f68a877df0 ---------A   01510  GOTO 1550
    0x61f68a877f40 ---------A T 01520  PRINT "GOOD MEMORY!"
    0x61f68a878280 ---------A   01530  R=R+1
    0x61f68a8782d0 ---------A   01540  PRINT
    0x61f68a878350 ---------A T 01550  PRINT
    0x61f68a8785b0 ---------A   01560  IF R=4 THEN 1630
    0x61f68a878840 ---------A   01570  IF R<2 THEN 1690
    0x61f68a8789d0 ---------A   01580  PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x61f68a878b50 ---------A   01590  PRINT "READING THE NURSERY GREATS."
    0x61f68a878ed0 ---------A   01600  FOR XX=1 TO 2000
    0x61f68a878f30 ---------A   01610  NEXT
    0x61f68a878fa0 ---------A   01620  RUN "MENU"
    0x61f68a879190 ---------A T 01630  PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x61f68a879320 ---------A   01640  PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x61f68a8794a0 ---------A   01650  PRINT "LITERATURE (HA, HA, HA)"
    0x61f68a879760 ---------A   01660  FOR XX=1 TO 2000
    0x61f68a8797c0 ---------A   01670  NEXT
    0x61f68a879830 ---------A   01680  RUN "MENU"
    0x61f68a879a10 ---------A T 01690  PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x61f68a879b90 ---------A   01700  PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x61f68a879e50 ---------A   01710  FOR XX=1 TO 2000
    0x61f68a879eb0 ---------A   01720  NEXT
    0x61f68a879f20 ---------A   01730  RUN "MENU"
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
int    XX_int;                                    // Basic: XX 
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
    // 01000 PRINT CHR$(26)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(26));strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(25);"LITERATURE QUIZ"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,25);strcat(buf,"LITERATURE QUIZ");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 R=0
    R_int = 0;
    // 01080 PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS A MULTIPLE-CHOICE QUIZ.");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "GOOD LUCK!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK!");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO");fputs(buf,fh); };
    // 01180 INPUT A
    // Start of Basic INPUT statement 01180
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
    }; // End of Basic INPUT statement 01180
    // 01190 IF A=3 THEN 1220
    if(A_int==3)goto Lbl_01220;
    // 01200 PRINT "SORRY...FIGARO WAS HIS NAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY...FIGARO WAS HIS NAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 GOTO 1250
    goto Lbl_01250;

  Lbl_01220:
    // 01220 PRINT "VERY GOOD!  HERE'S ANOTHER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VERY GOOD!  HERE'S ANOTHER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 R=R+1
    R_int = R_int+1;
    // 01240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01250:
    // 01250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S");fputs(buf,fh); };
    // 01280 INPUT A
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
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01280
    // 01290 IF A=2 THEN 1320
    if(A_int==2)goto Lbl_01320;
    // 01300 PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO BAD...IT WAS ELMER FUDD'S GARDEN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 GOTO 1350
    goto Lbl_01350;

  Lbl_01320:
    // 01320 PRINT "PRETTY GOOD!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PRETTY GOOD!");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 R=R+1
    R_int = R_int+1;
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01350:
    // 01350 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED");strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO");fputs(buf,fh); };
    // 01380 INPUT A
    // Start of Basic INPUT statement 01380
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
    }; // End of Basic INPUT statement 01380
    // 01390 IF A=4 THEN 1420
    if(A_int==4)goto Lbl_01420;
    // 01400 PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BACK TO THE BOOKS,...TOTO WAS HIS NAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01410 GOTO 1450
    goto Lbl_01450;

  Lbl_01420:
    // 01420 PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YEA!  YOU'RE A REAL LITERATURE GIANT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 R=R+1
    R_int = R_int+1;
    // 01440 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01450:
    // 01450 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01460 PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE");strcat(buf,"\n");fputs(buf,fh); };
    // 01470 PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY");fputs(buf,fh); };
    // 01480 INPUT A
    // Start of Basic INPUT statement 01480
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
    }; // End of Basic INPUT statement 01480
    // 01490 IF A=3 THEN 1520
    if(A_int==3)goto Lbl_01520;
    // 01500 PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OH, COME ON NOW...IT WAS SNOW WHITE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01510 GOTO 1550
    goto Lbl_01550;

  Lbl_01520:
    // 01520 PRINT "GOOD MEMORY!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD MEMORY!");strcat(buf,"\n");fputs(buf,fh); };
    // 01530 R=R+1
    R_int = R_int+1;
    // 01540 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01550:
    // 01550 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01560 IF R=4 THEN 1630
    if(R_int==4)goto Lbl_01630;
    // 01570 IF R<2 THEN 1690
    if(R_int<2)goto Lbl_01690;
    // 01580 PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME");strcat(buf,"\n");fputs(buf,fh); };
    // 01590 PRINT "READING THE NURSERY GREATS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"READING THE NURSERY GREATS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01600 FOR XX=1 TO 2000
    for(XX_int=1;XX_int<=2000;XX_int++){
        // 01610 NEXT
        int dummy_1610=0; // Ignore this line.
    };
    // 01620 RUN "MENU"
    system("MENU");

  Lbl_01630:
    // 01630 PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY");strcat(buf,"\n");fputs(buf,fh); };
    // 01640 PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE");strcat(buf,"\n");fputs(buf,fh); };
    // 01650 PRINT "LITERATURE (HA, HA, HA)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LITERATURE (HA, HA, HA)");strcat(buf,"\n");fputs(buf,fh); };
    // 01660 FOR XX=1 TO 2000
    for(XX_int=1;XX_int<=2000;XX_int++){
        // 01670 NEXT
        int dummy_1670=0; // Ignore this line.
    };
    // 01680 RUN "MENU"
    system("MENU");

  Lbl_01690:
    // 01690 PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01700 PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NURSERY SCHOOL FOR YOU, MY FRIEND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01710 FOR XX=1 TO 2000
    for(XX_int=1;XX_int<=2000;XX_int++){
        // 01720 NEXT
        int dummy_1720=0; // Ignore this line.
    };
    // 01730 RUN "MENU"
    system("MENU");
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
