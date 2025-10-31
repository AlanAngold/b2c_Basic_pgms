/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/23-match.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64a1912026d0 ---------A   00020  PRINT TAB(31);"23 MATCHES"
    0x64a191202670 ---------A   00030  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64a191204aa0 ---------A   00040  PRINT:PRINT:PRINT
    0x64a191204b00 ---------A   00080  PRINT " THIS IS A GAME CALLED '23 MATCHES'."
    0x64a191203040 ---------A   00090  PRINT
    0x64a191202e80 ---------A   00100  PRINT "WHEN IT IS YOUR TURN, YOU MAY TAKE ONE, TWO, OR THREE"
    0x64a1912034c0 ---------A   00110  PRINT "MATCHES. THE OBJECT OF THE GAME IS NOT TO HAVE TO TAKE"
    0x64a191204720 ---------A   00120  PRINT "THE LAST MATCH."
    0x64a191202c20 ---------A   00130  PRINT
    0x64a1912051c0 ---------A   00140  PRINT "LET'S FLIP A COIN TO SEE WHO GOES FIRST."
    0x64a191203700 ---------A   00150  PRINT "IF IT COMES UP HEADS, I WILL WIN THE TOSS."
    0x64a191203780 ---------A   00155  PRINT
    0x64a191204f30 ---------A   00160  REM
    0x64a1912050b0 ---------A   00165  N = 23
    0x64a19120aee0 ---------A   00170  Q = INT(2*RND(5))
    0x64a19120b0f0 ---------A   00180  IF Q = 1 THEN 210
    0x64a19120b210 ---------A   00190  PRINT "TAILS! YOU GO FIRST. "
    0x64a19120b270 ---------A   00195  PRINT
    0x64a19120b2d0 ---------A   00200  GOTO 300
    0x64a19120b420 ---------A T 00210  PRINT "HEADS! I WIN! HA! HA!"
    0x64a19120b560 ---------A   00220  PRINT "PREPARE TO LOSE, MEATBALL-NOSE!!"
    0x64a19120b5c0 ---------A   00230  PRINT
    0x64a19120b720 ---------A   00250  PRINT "I TAKE 2 MATCHES"
    0x64a19120ba80 ---------A   00260  N = N -2
    0x64a19120bcb0 ---------A T 00270  PRINT "THE NUMBER OF MATCHES IS NOW" N
    0x64a19120bd60 ---------A   00280  PRINT
    0x64a19120bf00 ---------A   00290  PRINT "YOUR TURN -- YOU MAY TAKE 1, 2 OR 3 MATCHES."
    0x64a19120c060 ---------A T 00300  PRINT "HOW MANY DO YOU WISH TO REMOVE",
    0x64a19120c280 ---------A T 00310  INPUT K
    0x64a19120c4e0 ---------A   00320  IF K > 3 THEN 430
    0x64a19120c740 ---------A   00330  IF K <= 0 THEN 430
    0x64a19120cac0 ---------A   00340  N = N - K
    0x64a19120ce10 ---------A   00350  PRINT "THERE ARE NOW";N;"MATCHES REMAINING."
    0x64a19120d280 ---------A   00351  IF N = 4 THEN 381
    0x64a19120d4e0 ---------A   00352  IF N = 3 THEN 383
    0x64a19120d740 ---------A   00353  IF N = 2 THEN 385
    0x64a19120d9a0 ---------A   00360  IF N <= 1 THEN  530
    0x64a19120dda0 ---------A   00370  Z = 4 - K
    0x64a19120de10 ---------A   00372  GOTO 390
    0x64a19120de80 ----------   00380  PRINT
    0x64a19120e0a0 ---------A T 00381  Z = 3
    0x64a19120e110 ---------A   00382  GOTO 390
    0x64a19120e320 ---------A T 00383  Z = 2
    0x64a19120e390 ---------A   00384  GOTO 390
    0x64a19120e5c0 ---------A T 00385  Z = 1
    0x64a19120e910 ---------A T 00390  PRINT "MY TURN ! I REMOVE" Z "MATCHES"
    0x64a19120ec70 ---------A   00400  N = N - Z
    0x64a19120eec0 ---------A   00410  IF N < = 1 THEN 470
    0x64a19120ef50 ---------A   00420  GOTO 270
    0x64a19120f0c0 ---------A T 00430  PRINT "VERY FUNNY! DUMMY!"
    0x64a19120f250 ---------A   00440  PRINT "DO YOU WANT TO PLAY OR GOOF AROUND?"
    0x64a19120f3e0 ---------A   00450  PRINT "NOW, HOW MANY MATCHES DO YOU WANT",
    0x64a19120f460 ---------A   00460  GOTO 310
    0x64a19120f500 ---------A T 00470  PRINT
    0x64a19120f690 ---------A   00480  PRINT"YOU POOR BOOB! YOU TOOK THE LAST MATCH! I GOTCHA!!"
    0x64a19120f800 ---------A   00490  PRINT "HA ! HA ! I BEAT YOU !!!"
    0x64a19120f890 ---------A   00500  PRINT
    0x64a19120f9f0 ---------A   00510  PRINT "GOOD BYE LOSER!"
    0x64a19120fa80 ---------A   00520  GOTO 560
    0x64a19120fbf0 ---------A T 00530  PRINT "YOU WON, FLOPPY EARS !"
    0x64a19120fd90 ---------A   00540  PRINT "THINK YOU'RE PRETTY SMART !"
    0x64a19120ff10 ---------A   00550  PRINT "LETS PLAY AGAIN AND I'LL BLOW YOUR SHOES OFF !!"
    0x64a19120ff70 ---------A T 00560  STOP
    0x64a19120ffd0 ---------A   00570  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00210      00180T
     00270      00420T
     00300      00200T
     00310      00460T
     00381      00351T
     00383      00352T
     00385      00353T
     00390      00372T, 00382T, 00384T
     00430      00320T, 00330T
     00470      00410T
     00530      00360T
     00560      00520T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x64a1912026d0 (00020)   0x64a1912026d0 (00020)   0x64a19120ffd0 (00570)   0x64a19120ffd0 (00570)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/23-match.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64a1912026d0 ---------A   00020  PRINT TAB(31);"23 MATCHES"
    0x64a191202670 ---------A   00030  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64a1911f32b0 ----------   00040  PRINT
    0x64a1912029e0 ----------        a PRINT
    0x64a191204aa0 ---------A        b PRINT
    0x64a191204b00 ---------A   00080  PRINT " THIS IS A GAME CALLED '23 MATCHES'."
    0x64a191203040 ---------A   00090  PRINT
    0x64a191202e80 ---------A   00100  PRINT "WHEN IT IS YOUR TURN, YOU MAY TAKE ONE, TWO, OR THREE"
    0x64a1912034c0 ---------A   00110  PRINT "MATCHES. THE OBJECT OF THE GAME IS NOT TO HAVE TO TAKE"
    0x64a191204720 ---------A   00120  PRINT "THE LAST MATCH."
    0x64a191202c20 ---------A   00130  PRINT
    0x64a1912051c0 ---------A   00140  PRINT "LET'S FLIP A COIN TO SEE WHO GOES FIRST."
    0x64a191203700 ---------A   00150  PRINT "IF IT COMES UP HEADS, I WILL WIN THE TOSS."
    0x64a191203780 ---------A   00155  PRINT
    0x64a191204f30 ---------A   00160  REM
    0x64a1912050b0 ---------A   00165  N = 23
    0x64a19120aee0 ---------A   00170  Q = INT(2*RND(5))
    0x64a19120b0f0 ---------A   00180  IF Q = 1 THEN 210
    0x64a19120b210 ---------A   00190  PRINT "TAILS! YOU GO FIRST. "
    0x64a19120b270 ---------A   00195  PRINT
    0x64a19120b2d0 ---------A   00200  GOTO 300
    0x64a19120b420 ---------A T 00210  PRINT "HEADS! I WIN! HA! HA!"
    0x64a19120b560 ---------A   00220  PRINT "PREPARE TO LOSE, MEATBALL-NOSE!!"
    0x64a19120b5c0 ---------A   00230  PRINT
    0x64a19120b720 ---------A   00250  PRINT "I TAKE 2 MATCHES"
    0x64a19120ba80 ---------A   00260  N = N -2
    0x64a19120bcb0 ---------A T 00270  PRINT "THE NUMBER OF MATCHES IS NOW" N
    0x64a19120bd60 ---------A   00280  PRINT
    0x64a19120bf00 ---------A   00290  PRINT "YOUR TURN -- YOU MAY TAKE 1, 2 OR 3 MATCHES."
    0x64a19120c060 ---------A T 00300  PRINT "HOW MANY DO YOU WISH TO REMOVE",
    0x64a19120c280 ---------A T 00310  INPUT K
    0x64a19120c4e0 ---------A   00320  IF K > 3 THEN 430
    0x64a19120c740 ---------A   00330  IF K <= 0 THEN 430
    0x64a19120cac0 ---------A   00340  N = N - K
    0x64a19120ce10 ---------A   00350  PRINT "THERE ARE NOW";N;"MATCHES REMAINING."
    0x64a19120d280 ---------A   00351  IF N = 4 THEN 381
    0x64a19120d4e0 ---------A   00352  IF N = 3 THEN 383
    0x64a19120d740 ---------A   00353  IF N = 2 THEN 385
    0x64a19120d9a0 ---------A   00360  IF N <= 1 THEN  530
    0x64a19120dda0 ---------A   00370  Z = 4 - K
    0x64a19120de10 ---------A   00372  GOTO 390
    0x64a19120de80 ----------   00380  PRINT
    0x64a19120e0a0 ---------A T 00381  Z = 3
    0x64a19120e110 ---------A   00382  GOTO 390
    0x64a19120e320 ---------A T 00383  Z = 2
    0x64a19120e390 ---------A   00384  GOTO 390
    0x64a19120e5c0 ---------A T 00385  Z = 1
    0x64a19120e910 ---------A T 00390  PRINT "MY TURN ! I REMOVE" Z "MATCHES"
    0x64a19120ec70 ---------A   00400  N = N - Z
    0x64a19120eec0 ---------A   00410  IF N < = 1 THEN 470
    0x64a19120ef50 ---------A   00420  GOTO 270
    0x64a19120f0c0 ---------A T 00430  PRINT "VERY FUNNY! DUMMY!"
    0x64a19120f250 ---------A   00440  PRINT "DO YOU WANT TO PLAY OR GOOF AROUND?"
    0x64a19120f3e0 ---------A   00450  PRINT "NOW, HOW MANY MATCHES DO YOU WANT",
    0x64a19120f460 ---------A   00460  GOTO 310
    0x64a19120f500 ---------A T 00470  PRINT
    0x64a19120f690 ---------A   00480  PRINT"YOU POOR BOOB! YOU TOOK THE LAST MATCH! I GOTCHA!!"
    0x64a19120f800 ---------A   00490  PRINT "HA ! HA ! I BEAT YOU !!!"
    0x64a19120f890 ---------A   00500  PRINT
    0x64a19120f9f0 ---------A   00510  PRINT "GOOD BYE LOSER!"
    0x64a19120fa80 ---------A   00520  GOTO 560
    0x64a19120fbf0 ---------A T 00530  PRINT "YOU WON, FLOPPY EARS !"
    0x64a19120fd90 ---------A   00540  PRINT "THINK YOU'RE PRETTY SMART !"
    0x64a19120ff10 ---------A   00550  PRINT "LETS PLAY AGAIN AND I'LL BLOW YOUR SHOES OFF !!"
    0x64a19120ff70 ---------A T 00560  STOP
    0x64a19120ffd0 ---------A   00570  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/23-match.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64a1912026d0 ---------A   01000  PRINT TAB(31);"23 MATCHES"
    0x64a191202670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64a1911f32b0 ----------   01020  PRINT
    0x64a1912029e0 ----------   01030  PRINT
    0x64a191204aa0 ---------A   01040  PRINT
    0x64a191204b00 ---------A   01050  PRINT " THIS IS A GAME CALLED '23 MATCHES'."
    0x64a191203040 ---------A   01060  PRINT
    0x64a191202e80 ---------A   01070  PRINT "WHEN IT IS YOUR TURN, YOU MAY TAKE ONE, TWO, OR THREE"
    0x64a1912034c0 ---------A   01080  PRINT "MATCHES. THE OBJECT OF THE GAME IS NOT TO HAVE TO TAKE"
    0x64a191204720 ---------A   01090  PRINT "THE LAST MATCH."
    0x64a191202c20 ---------A   01100  PRINT
    0x64a1912051c0 ---------A   01110  PRINT "LET'S FLIP A COIN TO SEE WHO GOES FIRST."
    0x64a191203700 ---------A   01120  PRINT "IF IT COMES UP HEADS, I WILL WIN THE TOSS."
    0x64a191203780 ---------A   01130  PRINT
    0x64a191204f30 ---------A   01140  REM
    0x64a1912050b0 ---------A   01150  N = 23
    0x64a19120aee0 ---------A   01160  Q = INT(2*RND(5))
    0x64a19120b0f0 ---------A   01170  IF Q = 1 THEN 1210
    0x64a19120b210 ---------A   01180  PRINT "TAILS! YOU GO FIRST. "
    0x64a19120b270 ---------A   01190  PRINT
    0x64a19120b2d0 ---------A   01200  GOTO 1290
    0x64a19120b420 ---------A   01210  PRINT "HEADS! I WIN! HA! HA!"
    0x64a19120b560 ---------A   01220  PRINT "PREPARE TO LOSE, MEATBALL-NOSE!!"
    0x64a19120b5c0 ---------A   01230  PRINT
    0x64a19120b720 ---------A   01240  PRINT "I TAKE 2 MATCHES"
    0x64a19120ba80 ---------A   01250  N = N -2
    0x64a19120bcb0 ---------A   01260  PRINT "THE NUMBER OF MATCHES IS NOW" N
    0x64a19120bd60 ---------A   01270  PRINT
    0x64a19120bf00 ---------A   01280  PRINT "YOUR TURN -- YOU MAY TAKE 1, 2 OR 3 MATCHES."
    0x64a19120c060 ---------A   01290  PRINT "HOW MANY DO YOU WISH TO REMOVE",
    0x64a19120c280 ---------A   01300  INPUT K
    0x64a19120c4e0 ---------A   01310  IF K > 3 THEN 1510
    0x64a19120c740 ---------A   01320  IF K <= 0 THEN 1510
    0x64a19120cac0 ---------A   01330  N = N - K
    0x64a19120ce10 ---------A   01340  PRINT "THERE ARE NOW";N;"MATCHES REMAINING."
    0x64a19120d280 ---------A   01350  IF N = 4 THEN 1420
    0x64a19120d4e0 ---------A   01360  IF N = 3 THEN 1440
    0x64a19120d740 ---------A   01370  IF N = 2 THEN 1460
    0x64a19120d9a0 ---------A   01380  IF N <= 1 THEN  1610
    0x64a19120dda0 ---------A   01390  Z = 4 - K
    0x64a19120de10 ---------A   01400  GOTO 1470
    0x64a19120de80 ----------   01410  PRINT
    0x64a19120e0a0 ---------A   01420  Z = 3
    0x64a19120e110 ---------A   01430  GOTO 1470
    0x64a19120e320 ---------A   01440  Z = 2
    0x64a19120e390 ---------A   01450  GOTO 1470
    0x64a19120e5c0 ---------A   01460  Z = 1
    0x64a19120e910 ---------A   01470  PRINT "MY TURN ! I REMOVE" Z "MATCHES"
    0x64a19120ec70 ---------A   01480  N = N - Z
    0x64a19120eec0 ---------A   01490  IF N < = 1 THEN 1550
    0x64a19120ef50 ---------A   01500  GOTO 1260
    0x64a19120f0c0 ---------A   01510  PRINT "VERY FUNNY! DUMMY!"
    0x64a19120f250 ---------A   01520  PRINT "DO YOU WANT TO PLAY OR GOOF AROUND?"
    0x64a19120f3e0 ---------A   01530  PRINT "NOW, HOW MANY MATCHES DO YOU WANT",
    0x64a19120f460 ---------A   01540  GOTO 1300
    0x64a19120f500 ---------A   01550  PRINT
    0x64a19120f690 ---------A   01560  PRINT"YOU POOR BOOB! YOU TOOK THE LAST MATCH! I GOTCHA!!"
    0x64a19120f800 ---------A   01570  PRINT "HA ! HA ! I BEAT YOU !!!"
    0x64a19120f890 ---------A   01580  PRINT
    0x64a19120f9f0 ---------A   01590  PRINT "GOOD BYE LOSER!"
    0x64a19120fa80 ---------A   01600  GOTO 1640
    0x64a19120fbf0 ---------A   01610  PRINT "YOU WON, FLOPPY EARS !"
    0x64a19120fd90 ---------A   01620  PRINT "THINK YOU'RE PRETTY SMART !"
    0x64a19120ff10 ---------A   01630  PRINT "LETS PLAY AGAIN AND I'LL BLOW YOUR SHOES OFF !!"
    0x64a19120ff70 ---------A   01640  STOP
    0x64a19120ffd0 ---------A   01650  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01650 - 10000    8360 

 */



/*
 *  Symbol Table Listing for 'basic/23-match.bas'
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
    Q                        Integer     
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
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/23-match.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64a1912026d0 ---------A   01000  PRINT TAB(31);"23 MATCHES"
    0x64a191202670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64a1911f32b0 ---------A   01020  PRINT
    0x64a1912029e0 ---------A   01030  PRINT
    0x64a191204aa0 ---------A   01040  PRINT
    0x64a191204b00 ---------A   01050  PRINT " THIS IS A GAME CALLED '23 MATCHES'."
    0x64a191203040 ---------A   01060  PRINT
    0x64a191202e80 ---------A   01070  PRINT "WHEN IT IS YOUR TURN, YOU MAY TAKE ONE, TWO, OR THREE"
    0x64a1912034c0 ---------A   01080  PRINT "MATCHES. THE OBJECT OF THE GAME IS NOT TO HAVE TO TAKE"
    0x64a191204720 ---------A   01090  PRINT "THE LAST MATCH."
    0x64a191202c20 ---------A   01100  PRINT
    0x64a1912051c0 ---------A   01110  PRINT "LET'S FLIP A COIN TO SEE WHO GOES FIRST."
    0x64a191203700 ---------A   01120  PRINT "IF IT COMES UP HEADS, I WILL WIN THE TOSS."
    0x64a191203780 ---------A   01130  PRINT
    0x64a191204f30 ---------A   01140  REM
    0x64a1912050b0 ---------A   01150  N = 23
    0x64a19120aee0 ---------A   01160  Q = INT(2*RND(5))
    0x64a19120b0f0 ---------A   01170  IF Q = 1 THEN 1210
    0x64a19120b210 ---------A   01180  PRINT "TAILS! YOU GO FIRST. "
    0x64a19120b270 ---------A   01190  PRINT
    0x64a19120b2d0 ---------A   01200  GOTO 1290
    0x64a19120b420 ---------A T 01210  PRINT "HEADS! I WIN! HA! HA!"
    0x64a19120b560 ---------A   01220  PRINT "PREPARE TO LOSE, MEATBALL-NOSE!!"
    0x64a19120b5c0 ---------A   01230  PRINT
    0x64a19120b720 ---------A   01240  PRINT "I TAKE 2 MATCHES"
    0x64a19120ba80 ---------A   01250  N = N -2
    0x64a19120bcb0 ---------A T 01260  PRINT "THE NUMBER OF MATCHES IS NOW" N
    0x64a19120bd60 ---------A   01270  PRINT
    0x64a19120bf00 ---------A   01280  PRINT "YOUR TURN -- YOU MAY TAKE 1, 2 OR 3 MATCHES."
    0x64a19120c060 ---------A T 01290  PRINT "HOW MANY DO YOU WISH TO REMOVE",
    0x64a19120c280 ---------A T 01300  INPUT K
    0x64a19120c4e0 ---------A   01310  IF K > 3 THEN 1500
    0x64a19120c740 ---------A   01320  IF K <= 0 THEN 1500
    0x64a19120cac0 ---------A   01330  N = N - K
    0x64a19120ce10 ---------A   01340  PRINT "THERE ARE NOW";N;"MATCHES REMAINING."
    0x64a19120d280 ---------A   01350  IF N = 4 THEN 1410
    0x64a19120d4e0 ---------A   01360  IF N = 3 THEN 1430
    0x64a19120d740 ---------A   01370  IF N = 2 THEN 1450
    0x64a19120d9a0 ---------A   01380  IF N <= 1 THEN  1600
    0x64a19120dda0 ---------A   01390  Z = 4 - K
    0x64a19120de10 ---------A   01400  GOTO 1460
    0x64a19120e0a0 ---------A T 01410  Z = 3
    0x64a19120e110 ---------A   01420  GOTO 1460
    0x64a19120e320 ---------A T 01430  Z = 2
    0x64a19120e390 ---------A   01440  GOTO 1460
    0x64a19120e5c0 ---------A T 01450  Z = 1
    0x64a19120e910 ---------A T 01460  PRINT "MY TURN ! I REMOVE" Z "MATCHES"
    0x64a19120ec70 ---------A   01470  N = N - Z
    0x64a19120eec0 ---------A   01480  IF N < = 1 THEN 1540
    0x64a19120ef50 ---------A   01490  GOTO 1260
    0x64a19120f0c0 ---------A T 01500  PRINT "VERY FUNNY! DUMMY!"
    0x64a19120f250 ---------A   01510  PRINT "DO YOU WANT TO PLAY OR GOOF AROUND?"
    0x64a19120f3e0 ---------A   01520  PRINT "NOW, HOW MANY MATCHES DO YOU WANT",
    0x64a19120f460 ---------A   01530  GOTO 1300
    0x64a19120f500 ---------A T 01540  PRINT
    0x64a19120f690 ---------A   01550  PRINT"YOU POOR BOOB! YOU TOOK THE LAST MATCH! I GOTCHA!!"
    0x64a19120f800 ---------A   01560  PRINT "HA ! HA ! I BEAT YOU !!!"
    0x64a19120f890 ---------A   01570  PRINT
    0x64a19120f9f0 ---------A   01580  PRINT "GOOD BYE LOSER!"
    0x64a19120fa80 ---------A   01590  GOTO 1630
    0x64a19120fbf0 ---------A T 01600  PRINT "YOU WON, FLOPPY EARS !"
    0x64a19120fd90 ---------A   01610  PRINT "THINK YOU'RE PRETTY SMART !"
    0x64a19120ff10 ---------A   01620  PRINT "LETS PLAY AGAIN AND I'LL BLOW YOUR SHOES OFF !!"
    0x64a19120ff70 ---------A T 01630  STOP
    0x64a19120ffd0 ---------A   01640  END
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
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
int    Z_int;                                     // Basic: Z 
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
    // 01000 PRINT TAB(31);"23 MATCHES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,31);strcat(buf,"23 MATCHES");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT " THIS IS A GAME CALLED '23 MATCHES'."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THIS IS A GAME CALLED '23 MATCHES'.");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "WHEN IT IS YOUR TURN, YOU MAY TAKE ONE, TWO, OR THREE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHEN IT IS YOUR TURN, YOU MAY TAKE ONE, TWO, OR THREE");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "MATCHES. THE OBJECT OF THE GAME IS NOT TO HAVE TO TAKE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MATCHES. THE OBJECT OF THE GAME IS NOT TO HAVE TO TAKE");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "THE LAST MATCH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE LAST MATCH.");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "LET'S FLIP A COIN TO SEE WHO GOES FIRST."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LET'S FLIP A COIN TO SEE WHO GOES FIRST.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "IF IT COMES UP HEADS, I WILL WIN THE TOSS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF IT COMES UP HEADS, I WILL WIN THE TOSS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 REM
    // 01150 N = 23
    N_int = 23;
    // 01160 Q = INT(2*RND(5))
    Q_int = INT(2*RND(5));
    // 01170 IF Q = 1 THEN 1210
    if(Q_int==1)goto Lbl_01210;
    // 01180 PRINT "TAILS! YOU GO FIRST. "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TAILS! YOU GO FIRST. ");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01200 GOTO 1290
    goto Lbl_01290;

  Lbl_01210:
    // 01210 PRINT "HEADS! I WIN! HA! HA!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HEADS! I WIN! HA! HA!");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "PREPARE TO LOSE, MEATBALL-NOSE!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PREPARE TO LOSE, MEATBALL-NOSE!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "I TAKE 2 MATCHES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I TAKE 2 MATCHES");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 N = N -2
    N_int = N_int-2;

  Lbl_01260:
    // 01260 PRINT "THE NUMBER OF MATCHES IS NOW" N
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE NUMBER OF MATCHES IS NOW"); b2c_INT(buf,N_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT "YOUR TURN -- YOU MAY TAKE 1, 2 OR 3 MATCHES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR TURN -- YOU MAY TAKE 1, 2 OR 3 MATCHES.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01290:
    // 01290 PRINT "HOW MANY DO YOU WISH TO REMOVE",
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY DO YOU WISH TO REMOVE");fputs(buf,fh); };

  Lbl_01300:
    // 01300 INPUT K
    // Start of Basic INPUT statement 01300
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
    }; // End of Basic INPUT statement 01300
    // 01310 IF K > 3 THEN 1500
    if(K_int>3)goto Lbl_01500;
    // 01320 IF K <= 0 THEN 1500
    if(K_int<=0)goto Lbl_01500;
    // 01330 N = N - K
    N_int = N_int-K_int;
    // 01340 PRINT "THERE ARE NOW";N;"MATCHES REMAINING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THERE ARE NOW"); b2c_INT(buf,N_int);strcat(buf,"MATCHES REMAINING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 IF N = 4 THEN 1410
    if(N_int==4)goto Lbl_01410;
    // 01360 IF N = 3 THEN 1430
    if(N_int==3)goto Lbl_01430;
    // 01370 IF N = 2 THEN 1450
    if(N_int==2)goto Lbl_01450;
    // 01380 IF N <= 1 THEN  1600
    if(N_int<=1)goto Lbl_01600;
    // 01390 Z = 4 - K
    Z_int = 4-K_int;
    // 01400 GOTO 1460
    goto Lbl_01460;

  Lbl_01410:
    // 01410 Z = 3
    Z_int = 3;
    // 01420 GOTO 1460
    goto Lbl_01460;

  Lbl_01430:
    // 01430 Z = 2
    Z_int = 2;
    // 01440 GOTO 1460
    goto Lbl_01460;

  Lbl_01450:
    // 01450 Z = 1
    Z_int = 1;

  Lbl_01460:
    // 01460 PRINT "MY TURN ! I REMOVE" Z "MATCHES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MY TURN ! I REMOVE"); b2c_INT(buf,Z_int);strcat(buf,"MATCHES");strcat(buf,"\n");fputs(buf,fh); };
    // 01470 N = N - Z
    N_int = N_int-Z_int;
    // 01480 IF N < = 1 THEN 1540
    if(N_int<=1)goto Lbl_01540;
    // 01490 GOTO 1260
    goto Lbl_01260;

  Lbl_01500:
    // 01500 PRINT "VERY FUNNY! DUMMY!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VERY FUNNY! DUMMY!");strcat(buf,"\n");fputs(buf,fh); };
    // 01510 PRINT "DO YOU WANT TO PLAY OR GOOF AROUND?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO PLAY OR GOOF AROUND?");strcat(buf,"\n");fputs(buf,fh); };
    // 01520 PRINT "NOW, HOW MANY MATCHES DO YOU WANT",
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOW, HOW MANY MATCHES DO YOU WANT");fputs(buf,fh); };
    // 01530 GOTO 1300
    goto Lbl_01300;

  Lbl_01540:
    // 01540 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT"YOU POOR BOOB! YOU TOOK THE LAST MATCH! I GOTCHA!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU POOR BOOB! YOU TOOK THE LAST MATCH! I GOTCHA!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01560 PRINT "HA ! HA ! I BEAT YOU !!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HA ! HA ! I BEAT YOU !!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01580 PRINT "GOOD BYE LOSER!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD BYE LOSER!");strcat(buf,"\n");fputs(buf,fh); };
    // 01590 GOTO 1630
    goto Lbl_01630;

  Lbl_01600:
    // 01600 PRINT "YOU WON, FLOPPY EARS !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WON, FLOPPY EARS !");strcat(buf,"\n");fputs(buf,fh); };
    // 01610 PRINT "THINK YOU'RE PRETTY SMART !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THINK YOU'RE PRETTY SMART !");strcat(buf,"\n");fputs(buf,fh); };
    // 01620 PRINT "LETS PLAY AGAIN AND I'LL BLOW YOUR SHOES OFF !!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LETS PLAY AGAIN AND I'LL BLOW YOUR SHOES OFF !!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01630:
    // 01630 STOP
    exit(1);
    // 01640 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
