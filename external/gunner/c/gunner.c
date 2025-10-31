/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/gunner.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x633ebc1c36d0 ---------A   00010  PRINT TAB(30);"GUNNER"
    0x633ebc1c3670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x633ebc1c37f0 ---------A   00030  PRINT:PRINT:PRINT
    0x633ebc1c4040 ---------A   00130  PRINT "YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO A GUN"
    0x633ebc1c40a0 ---------A   00140  PRINT "CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x633ebc1c44c0 ---------A   00150  PRINT "WILL PLACE A PROJECTILE ON TARGET.  A HIT WITHIN 100 YARDS"
    0x633ebc1c3be0 ---------A   00160  PRINT "OF THE TARGET WILL DESTROY IT." : PRINT
    0x633ebc1cba20 ---------A T 00170  R=INT(40000*RND(1)+20000)
    0x633ebc1cbcb0 ---------A   00180  PRINT "MAXIMUM RANGE OF YOUR GUN IS";R;" YARDS."
    0x633ebc1c60b0 ---------A   00185  Z=0
    0x633ebc1cbf30 ---------A   00190  PRINT
    0x633ebc1cc1b0 ---------A   00195  S1=0
    0x633ebc1cc960 ---------A T 00200  T=INT(R*(.1+.8*RND(1)))
    0x633ebc1ccc30 ---------A   00210  S=0
    0x633ebc1cccc0 ---------A   00220  GOTO 370
    0x633ebc1ccdf0 ---------A T 00230  PRINT "MINIMUM ELEVATION IS ONE DEGREE."
    0x633ebc1cce90 ---------A   00240  GOTO 390
    0x633ebc1ccfc0 ---------A T 00250  PRINT "MAXIMUM ELEVATION IS 89 DEGREES."
    0x633ebc1cd060 ---------A   00260  GOTO 390
    0x633ebc1cd550 ---------A T 00270  PRINT "OVER TARGET BY ";ABS(E);"YARDS."
    0x633ebc1cd5f0 ---------A   00280  GOTO 390
    0x633ebc1cda20 ---------A T 00290  PRINT "SHORT OF TARGET BY "ABS(E);"YARDS."
    0x633ebc1cdae0 ---------A   00300  GOTO 390
    0x633ebc1cddf0 ---------A T 00320  PRINT "*** TARGET DESTROYED ***  ";S;"ROUNDS OF AMMUNITION EXPENDED."
    0x633ebc1ce150 ---------A   00325  S1=S1+S
    0x633ebc1ce3a0 ---------A   00330  IF Z=4 THEN 490
    0x633ebc1ce6e0 ---------A   00340  Z=Z+1
    0x633ebc1ce780 ---------A   00345  PRINT
    0x633ebc1ce910 ---------A   00350  PRINT "THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY..."
    0x633ebc1ce9b0 ---------A   00360  GOTO 200
    0x633ebc1ced10 ---------A T 00370  PRINT "DISTANCE TO THE TARGET IS "T;" YARDS."
    0x633ebc1ced90 ---------A   00380  PRINT
    0x633ebc1cee10 ---------A T 00390  PRINT
    0x633ebc1cf260 ---------A   00400  INPUT "ELEVATION";B
    0x633ebc1cf4c0 ---------A   00420  IF B>89 THEN 250
    0x633ebc1cf720 ---------A   00430  IF B<1 THEN 230
    0x633ebc1cfa60 ---------A   00440  S=S+1
    0x633ebc1cfce0 ---------A   00442  IF S<6 THEN 450
    0x633ebc1cff10 ---------A   00444  PRINT:PRINT "BOOM !!!!   YOU HAVE JUST BEEN DESTROYED ";
    0x633ebc1d0230 ---------A   00446  PRINT "BY THE ENEMY." : PRINT : PRINT : PRINT : GOTO 495
    0x633ebc1d12e0 ---------A T 00450  B2=2*B/57.3 : I=R*SIN(B2) : X=T-I : E=INT(X)
    0x633ebc1d1610 ---------A   00460  IF ABS(E)<100 THEN 320
    0x633ebc1d1870 ---------A   00470  IF E>100 THEN 290
    0x633ebc1d1920 ---------A   00480  GOTO 270
    0x633ebc1d1c40 ---------A T 00490  PRINT : PRINT : PRINT "TOTAL ROUNDS EXPENDED WERE:";S1
    0x633ebc1d1eb0 ---------A   00492  IF S1>18 THEN 495
    0x633ebc1d20c0 ---------A   00493  PRINT "NICE SHOOTING !!" : GOTO 500
    0x633ebc1d2250 ---------A T 00495  PRINT "BETTER GO BACK TO FORT SILL FOR REFRESHER TRAINING!"
    0x633ebc1d24f0 ---------A T 00500  PRINT : INPUT "TRY AGAIN (Y OR N)";Z$
    0x633ebc1d2790 ---------A   00510  IF Z$="Y" THEN 170
    0x633ebc1d2960 ---------A   00520  PRINT:PRINT "OK.  RETURN TO BASE CAMP."
    0x633ebc1d29c0 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00170      00510T
     00200      00360T
     00230      00430T
     00250      00420T
     00270      00480T
     00290      00470T
     00320      00460T
     00370      00220T
     00390      00240T, 00260T, 00280T, 00300T
     00450      00442T
     00490      00330T
     00495      00446T, 00492T
     00500      00493T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x633ebc1c36d0 (00010)   0x633ebc1c36d0 (00010)   0x633ebc1d29c0 (00999)   0x633ebc1d29c0 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/gunner.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x633ebc1c36d0 ---------A   00010  PRINT TAB(30);"GUNNER"
    0x633ebc1c3670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x633ebc1b42b0 ----------   00030  PRINT
    0x633ebc1c39e0 ----------        a PRINT
    0x633ebc1c37f0 ---------A        b PRINT
    0x633ebc1c4040 ---------A   00130  PRINT "YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO A GUN"
    0x633ebc1c40a0 ---------A   00140  PRINT "CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x633ebc1c44c0 ---------A   00150  PRINT "WILL PLACE A PROJECTILE ON TARGET.  A HIT WITHIN 100 YARDS"
    0x633ebc1c5720 ----------   00160  PRINT "OF THE TARGET WILL DESTROY IT." 
    0x633ebc1c3be0 ---------A        a PRINT
    0x633ebc1cba20 ---------A T 00170  R=INT(40000*RND(1)+20000)
    0x633ebc1cbcb0 ---------A   00180  PRINT "MAXIMUM RANGE OF YOUR GUN IS";R;" YARDS."
    0x633ebc1c60b0 ---------A   00185  Z=0
    0x633ebc1cbf30 ---------A   00190  PRINT
    0x633ebc1cc1b0 ---------A   00195  S1=0
    0x633ebc1cc960 ---------A T 00200  T=INT(R*(.1+.8*RND(1)))
    0x633ebc1ccc30 ---------A   00210  S=0
    0x633ebc1cccc0 ---------A   00220  GOTO 370
    0x633ebc1ccdf0 ---------A T 00230  PRINT "MINIMUM ELEVATION IS ONE DEGREE."
    0x633ebc1cce90 ---------A   00240  GOTO 390
    0x633ebc1ccfc0 ---------A T 00250  PRINT "MAXIMUM ELEVATION IS 89 DEGREES."
    0x633ebc1cd060 ---------A   00260  GOTO 390
    0x633ebc1cd550 ---------A T 00270  PRINT "OVER TARGET BY ";ABS(E);"YARDS."
    0x633ebc1cd5f0 ---------A   00280  GOTO 390
    0x633ebc1cda20 ---------A T 00290  PRINT "SHORT OF TARGET BY "ABS(E);"YARDS."
    0x633ebc1cdae0 ---------A   00300  GOTO 390
    0x633ebc1cddf0 ---------A T 00320  PRINT "*** TARGET DESTROYED ***  ";S;"ROUNDS OF AMMUNITION EXPENDED."
    0x633ebc1ce150 ---------A   00325  S1=S1+S
    0x633ebc1ce3a0 ---------A   00330  IF Z=4 THEN 490
    0x633ebc1ce6e0 ---------A   00340  Z=Z+1
    0x633ebc1ce780 ---------A   00345  PRINT
    0x633ebc1ce910 ---------A   00350  PRINT "THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY..."
    0x633ebc1ce9b0 ---------A   00360  GOTO 200
    0x633ebc1ced10 ---------A T 00370  PRINT "DISTANCE TO THE TARGET IS "T;" YARDS."
    0x633ebc1ced90 ---------A   00380  PRINT
    0x633ebc1cee10 ---------A T 00390  PRINT
    0x633ebc1cf260 ---------A   00400  INPUT "ELEVATION";B
    0x633ebc1cf4c0 ---------A   00420  IF B>89 THEN 250
    0x633ebc1cf720 ---------A   00430  IF B<1 THEN 230
    0x633ebc1cfa60 ---------A   00440  S=S+1
    0x633ebc1cfce0 ---------A   00442  IF S<6 THEN 450
    0x633ebc1cfd40 ----------   00444  PRINT
    0x633ebc1cff10 ---------A        a PRINT "BOOM !!!!   YOU HAVE JUST BEEN DESTROYED ";
    0x633ebc1d0070 ----------   00446  PRINT "BY THE ENEMY." 
    0x633ebc1d00d0 ----------        a PRINT 
    0x633ebc1d0130 ----------        b PRINT 
    0x633ebc1d0190 ----------        c PRINT 
    0x633ebc1d0230 ---------A        d GOTO 495
    0x633ebc1d0700 ---------- T 00450  B2=2*B/57.3 
    0x633ebc1d0bd0 ---------- T      a I=R*SIN(B2) 
    0x633ebc1d0fc0 ---------- T      b X=T-I 
    0x633ebc1d12e0 ---------A T      c E=INT(X)
    0x633ebc1d1610 ---------A   00460  IF ABS(E)<100 THEN 320
    0x633ebc1d1870 ---------A   00470  IF E>100 THEN 290
    0x633ebc1d1920 ---------A   00480  GOTO 270
    0x633ebc1d1970 ---------- T 00490  PRINT 
    0x633ebc1d19d0 ---------- T      a PRINT 
    0x633ebc1d1c40 ---------A T      b PRINT "TOTAL ROUNDS EXPENDED WERE:";S1
    0x633ebc1d1eb0 ---------A   00492  IF S1>18 THEN 495
    0x633ebc1d2010 ----------   00493  PRINT "NICE SHOOTING !!" 
    0x633ebc1d20c0 ---------A        a GOTO 500
    0x633ebc1d2250 ---------A T 00495  PRINT "BETTER GO BACK TO FORT SILL FOR REFRESHER TRAINING!"
    0x633ebc1d22b0 ---------- T 00500  PRINT 
    0x633ebc1d24f0 ---------A T      a INPUT "TRY AGAIN (Y OR N)";Z$
    0x633ebc1d2790 ---------A   00510  IF Z$="Y" THEN 170
    0x633ebc1d27f0 ----------   00520  PRINT
    0x633ebc1d2960 ---------A        a PRINT "OK.  RETURN TO BASE CAMP."
    0x633ebc1d29c0 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/gunner.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x633ebc1c36d0 ---------A   01000  PRINT TAB(30);"GUNNER"
    0x633ebc1c3670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x633ebc1b42b0 ----------   01020  PRINT
    0x633ebc1c39e0 ----------   01030  PRINT
    0x633ebc1c37f0 ---------A   01040  PRINT
    0x633ebc1c4040 ---------A   01050  PRINT "YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO A GUN"
    0x633ebc1c40a0 ---------A   01060  PRINT "CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x633ebc1c44c0 ---------A   01070  PRINT "WILL PLACE A PROJECTILE ON TARGET.  A HIT WITHIN 100 YARDS"
    0x633ebc1c5720 ----------   01080  PRINT "OF THE TARGET WILL DESTROY IT." 
    0x633ebc1c3be0 ---------A   01090  PRINT
    0x633ebc1cba20 ---------A   01100  R=INT(40000*RND(1)+20000)
    0x633ebc1cbcb0 ---------A   01110  PRINT "MAXIMUM RANGE OF YOUR GUN IS";R;" YARDS."
    0x633ebc1c60b0 ---------A   01120  Z=0
    0x633ebc1cbf30 ---------A   01130  PRINT
    0x633ebc1cc1b0 ---------A   01140  S1=0
    0x633ebc1cc960 ---------A   01150  T=INT(R*(.1+.8*RND(1)))
    0x633ebc1ccc30 ---------A   01160  S=0
    0x633ebc1cccc0 ---------A   01170  GOTO 1330
    0x633ebc1ccdf0 ---------A   01180  PRINT "MINIMUM ELEVATION IS ONE DEGREE."
    0x633ebc1cce90 ---------A   01190  GOTO 1350
    0x633ebc1ccfc0 ---------A   01200  PRINT "MAXIMUM ELEVATION IS 89 DEGREES."
    0x633ebc1cd060 ---------A   01210  GOTO 1350
    0x633ebc1cd550 ---------A   01220  PRINT "OVER TARGET BY ";ABS(E);"YARDS."
    0x633ebc1cd5f0 ---------A   01230  GOTO 1350
    0x633ebc1cda20 ---------A   01240  PRINT "SHORT OF TARGET BY "ABS(E);"YARDS."
    0x633ebc1cdae0 ---------A   01250  GOTO 1350
    0x633ebc1cddf0 ---------A   01260  PRINT "*** TARGET DESTROYED ***  ";S;"ROUNDS OF AMMUNITION EXPENDED."
    0x633ebc1ce150 ---------A   01270  S1=S1+S
    0x633ebc1ce3a0 ---------A   01280  IF Z=4 THEN 1570
    0x633ebc1ce6e0 ---------A   01290  Z=Z+1
    0x633ebc1ce780 ---------A   01300  PRINT
    0x633ebc1ce910 ---------A   01310  PRINT "THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY..."
    0x633ebc1ce9b0 ---------A   01320  GOTO 1150
    0x633ebc1ced10 ---------A   01330  PRINT "DISTANCE TO THE TARGET IS "T;" YARDS."
    0x633ebc1ced90 ---------A   01340  PRINT
    0x633ebc1cee10 ---------A   01350  PRINT
    0x633ebc1cf260 ---------A   01360  INPUT "ELEVATION";B
    0x633ebc1cf4c0 ---------A   01370  IF B>89 THEN 1200
    0x633ebc1cf720 ---------A   01380  IF B<1 THEN 1180
    0x633ebc1cfa60 ---------A   01390  S=S+1
    0x633ebc1cfce0 ---------A   01400  IF S<6 THEN 1510
    0x633ebc1cfd40 ----------   01410  PRINT
    0x633ebc1cff10 ---------A   01420  PRINT "BOOM !!!!   YOU HAVE JUST BEEN DESTROYED ";
    0x633ebc1d0070 ----------   01430  PRINT "BY THE ENEMY." 
    0x633ebc1d00d0 ----------   01440  PRINT 
    0x633ebc1d0130 ----------   01450  PRINT 
    0x633ebc1d0190 ----------   01460  PRINT 
    0x633ebc1d0230 ---------A   01470  GOTO 1610
    0x633ebc1d0700 ----------   01480  B2=2*B/57.3 
    0x633ebc1d0bd0 ----------   01490  I=R*SIN(B2) 
    0x633ebc1d0fc0 ----------   01500  X=T-I 
    0x633ebc1d12e0 ---------A   01510  E=INT(X)
    0x633ebc1d1610 ---------A   01520  IF ABS(E)<100 THEN 1260
    0x633ebc1d1870 ---------A   01530  IF E>100 THEN 1240
    0x633ebc1d1920 ---------A   01540  GOTO 1220
    0x633ebc1d1970 ----------   01550  PRINT 
    0x633ebc1d19d0 ----------   01560  PRINT 
    0x633ebc1d1c40 ---------A   01570  PRINT "TOTAL ROUNDS EXPENDED WERE:";S1
    0x633ebc1d1eb0 ---------A   01580  IF S1>18 THEN 1610
    0x633ebc1d2010 ----------   01590  PRINT "NICE SHOOTING !!" 
    0x633ebc1d20c0 ---------A   01600  GOTO 1630
    0x633ebc1d2250 ---------A   01610  PRINT "BETTER GO BACK TO FORT SILL FOR REFRESHER TRAINING!"
    0x633ebc1d22b0 ----------   01620  PRINT 
    0x633ebc1d24f0 ---------A   01630  INPUT "TRY AGAIN (Y OR N)";Z$
    0x633ebc1d2790 ---------A   01640  IF Z$="Y" THEN 1100
    0x633ebc1d27f0 ----------   01650  PRINT
    0x633ebc1d2960 ---------A   01660  PRINT "OK.  RETURN TO BASE CAMP."
    0x633ebc1d29c0 ---------A   01670  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01630 - 10000    8380 

 */



/*
 *  Symbol Table Listing for 'basic/gunner.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B2                       Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    E                        Integer     
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
    S                        Integer     
    S1                       Integer     
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
    X                        Integer     
    Z                        Integer     
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/gunner.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x633ebc1c36d0 ---------A   01000  PRINT TAB(30);"GUNNER"
    0x633ebc1c3670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x633ebc1b42b0 ---------A   01020  PRINT
    0x633ebc1c39e0 ---------A   01030  PRINT
    0x633ebc1c37f0 ---------A   01040  PRINT
    0x633ebc1c4040 ---------A   01050  PRINT "YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO A GUN"
    0x633ebc1c40a0 ---------A   01060  PRINT "CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x633ebc1c44c0 ---------A   01070  PRINT "WILL PLACE A PROJECTILE ON TARGET.  A HIT WITHIN 100 YARDS"
    0x633ebc1c5720 ---------A   01080  PRINT "OF THE TARGET WILL DESTROY IT." 
    0x633ebc1c3be0 ---------A   01090  PRINT
    0x633ebc1cba20 ---------A T 01100  R=INT(40000*RND(1)+20000)
    0x633ebc1cbcb0 ---------A   01110  PRINT "MAXIMUM RANGE OF YOUR GUN IS";R;" YARDS."
    0x633ebc1c60b0 ---------A   01120  Z=0
    0x633ebc1cbf30 ---------A   01130  PRINT
    0x633ebc1cc1b0 ---------A   01140  S1=0
    0x633ebc1cc960 ---------A T 01150  T=INT(R*(.1+.8*RND(1)))
    0x633ebc1ccc30 ---------A   01160  S=0
    0x633ebc1cccc0 ---------A   01170  GOTO 1330
    0x633ebc1ccdf0 ---------A T 01180  PRINT "MINIMUM ELEVATION IS ONE DEGREE."
    0x633ebc1cce90 ---------A   01190  GOTO 1350
    0x633ebc1ccfc0 ---------A T 01200  PRINT "MAXIMUM ELEVATION IS 89 DEGREES."
    0x633ebc1cd060 ---------A   01210  GOTO 1350
    0x633ebc1cd550 ---------A T 01220  PRINT "OVER TARGET BY ";ABS(E);"YARDS."
    0x633ebc1cd5f0 ---------A   01230  GOTO 1350
    0x633ebc1cda20 ---------A T 01240  PRINT "SHORT OF TARGET BY "ABS(E);"YARDS."
    0x633ebc1cdae0 ---------A   01250  GOTO 1350
    0x633ebc1cddf0 ---------A T 01260  PRINT "*** TARGET DESTROYED ***  ";S;"ROUNDS OF AMMUNITION EXPENDED."
    0x633ebc1ce150 ---------A   01270  S1=S1+S
    0x633ebc1ce3a0 ---------A   01280  IF Z=4 THEN 1520
    0x633ebc1ce6e0 ---------A   01290  Z=Z+1
    0x633ebc1ce780 ---------A   01300  PRINT
    0x633ebc1ce910 ---------A   01310  PRINT "THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY..."
    0x633ebc1ce9b0 ---------A   01320  GOTO 1150
    0x633ebc1ced10 ---------A T 01330  PRINT "DISTANCE TO THE TARGET IS "T;" YARDS."
    0x633ebc1ced90 ---------A   01340  PRINT
    0x633ebc1cee10 ---------A T 01350  PRINT
    0x633ebc1cf260 ---------A   01360  INPUT "ELEVATION";B
    0x633ebc1cf4c0 ---------A   01370  IF B>89 THEN 1200
    0x633ebc1cf720 ---------A   01380  IF B<1 THEN 1180
    0x633ebc1cfa60 ---------A   01390  S=S+1
    0x633ebc1cfce0 ---------A   01400  IF S<6 THEN 1480
    0x633ebc1cfd40 ---------A   01410  PRINT
    0x633ebc1cff10 ---------A   01420  PRINT "BOOM !!!!   YOU HAVE JUST BEEN DESTROYED ";
    0x633ebc1d0070 ---------A   01430  PRINT "BY THE ENEMY." 
    0x633ebc1d00d0 ---------A   01440  PRINT 
    0x633ebc1d0130 ---------A   01450  PRINT 
    0x633ebc1d0190 ---------A   01460  PRINT 
    0x633ebc1d0230 ---------A   01470  GOTO 1560
    0x633ebc1d12e0 ---------A T 01480  E=INT(X)
    0x633ebc1d1610 ---------A   01490  IF ABS(E)<100 THEN 1260
    0x633ebc1d1870 ---------A   01500  IF E>100 THEN 1240
    0x633ebc1d1920 ---------A   01510  GOTO 1220
    0x633ebc1d1c40 ---------A T 01520  PRINT "TOTAL ROUNDS EXPENDED WERE:";S1
    0x633ebc1d1eb0 ---------A   01530  IF S1>18 THEN 1560
    0x633ebc1d2010 ---------A   01540  PRINT "NICE SHOOTING !!" 
    0x633ebc1d20c0 ---------A   01550  GOTO 1580
    0x633ebc1d2250 ---------A T 01560  PRINT "BETTER GO BACK TO FORT SILL FOR REFRESHER TRAINING!"
    0x633ebc1d22b0 ---------A   01570  PRINT 
    0x633ebc1d24f0 ---------A T 01580  INPUT "TRY AGAIN (Y OR N)";Z$
    0x633ebc1d2790 ---------A   01590  IF Z$="Y" THEN 1100
    0x633ebc1d27f0 ---------A   01600  PRINT
    0x633ebc1d2960 ---------A   01610  PRINT "OK.  RETURN TO BASE CAMP."
    0x633ebc1d29c0 ---------A   01620  END
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
int    B_int;                                     // Basic: B 
int    B2_int;                                    // Basic: B2 
int    E_int;                                     // Basic: E 
int    I_int;                                     // Basic: I 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    S1_int;                                    // Basic: S1 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
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
    // 01000 PRINT TAB(30);"GUNNER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,30);strcat(buf,"GUNNER");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO A GUN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO A GUN");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "WILL PLACE A PROJECTILE ON TARGET.  A HIT WITHIN 100 YARDS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WILL PLACE A PROJECTILE ON TARGET.  A HIT WITHIN 100 YARDS");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "OF THE TARGET WILL DESTROY IT." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF THE TARGET WILL DESTROY IT.");fputs(buf,fh); };
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01100:
    // 01100 R=INT(40000*RND(1)+20000)
    R_int = INT(40000*RND(1)+20000);
    // 01110 PRINT "MAXIMUM RANGE OF YOUR GUN IS";R;" YARDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MAXIMUM RANGE OF YOUR GUN IS"); b2c_INT(buf,R_int);strcat(buf," YARDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 Z=0
    Z_int = 0;
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 S1=0
    S1_int = 0;

  Lbl_01150:
    // 01150 T=INT(R*(.1+.8*RND(1)))
    T_int = INT(R_int*(0.1+0.8*RND(1)));
    // 01160 S=0
    S_int = 0;
    // 01170 GOTO 1330
    goto Lbl_01330;

  Lbl_01180:
    // 01180 PRINT "MINIMUM ELEVATION IS ONE DEGREE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MINIMUM ELEVATION IS ONE DEGREE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 GOTO 1350
    goto Lbl_01350;

  Lbl_01200:
    // 01200 PRINT "MAXIMUM ELEVATION IS 89 DEGREES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MAXIMUM ELEVATION IS 89 DEGREES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 GOTO 1350
    goto Lbl_01350;

  Lbl_01220:
    // 01220 PRINT "OVER TARGET BY ";ABS(E);"YARDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OVER TARGET BY ");b2c_INT(buf,ABS(E_int));strcat(buf,"YARDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 GOTO 1350
    goto Lbl_01350;

  Lbl_01240:
    // 01240 PRINT "SHORT OF TARGET BY "ABS(E);"YARDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHORT OF TARGET BY ");b2c_INT(buf,ABS(E_int));strcat(buf,"YARDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 GOTO 1350
    goto Lbl_01350;

  Lbl_01260:
    // 01260 PRINT "*** TARGET DESTROYED ***  ";S;"ROUNDS OF AMMUNITION EXPENDED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*** TARGET DESTROYED ***  "); b2c_INT(buf,S_int);strcat(buf,"ROUNDS OF AMMUNITION EXPENDED.");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 S1=S1+S
    S1_int = S1_int+S_int;
    // 01280 IF Z=4 THEN 1520
    if(Z_int==4)goto Lbl_01520;
    // 01290 Z=Z+1
    Z_int = Z_int+1;
    // 01300 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01310 PRINT "THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY...");strcat(buf,"\n");fputs(buf,fh); };
    // 01320 GOTO 1150
    goto Lbl_01150;

  Lbl_01330:
    // 01330 PRINT "DISTANCE TO THE TARGET IS "T;" YARDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DISTANCE TO THE TARGET IS "); b2c_INT(buf,T_int);strcat(buf," YARDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01350:
    // 01350 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01360 INPUT "ELEVATION";B
    // Start of Basic INPUT statement 01360
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ELEVATION");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01360
    // 01370 IF B>89 THEN 1200
    if(B_int>89)goto Lbl_01200;
    // 01380 IF B<1 THEN 1180
    if(B_int<1)goto Lbl_01180;
    // 01390 S=S+1
    S_int = S_int+1;
    // 01400 IF S<6 THEN 1480
    if(S_int<6)goto Lbl_01480;
    // 01410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT "BOOM !!!!   YOU HAVE JUST BEEN DESTROYED ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BOOM !!!!   YOU HAVE JUST BEEN DESTROYED ");fputs(buf,fh); };
    // 01430 PRINT "BY THE ENEMY." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BY THE ENEMY.");fputs(buf,fh); };
    // 01440 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01450 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01460 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01470 GOTO 1560
    goto Lbl_01560;

  Lbl_01480:
    // 01480 E=INT(X)
    E_int = INT(X_int);
    // 01490 IF ABS(E)<100 THEN 1260
    if(ABS(E_int)<100)goto Lbl_01260;
    // 01500 IF E>100 THEN 1240
    if(E_int>100)goto Lbl_01240;
    // 01510 GOTO 1220
    goto Lbl_01220;

  Lbl_01520:
    // 01520 PRINT "TOTAL ROUNDS EXPENDED WERE:";S1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL ROUNDS EXPENDED WERE:"); b2c_INT(buf,S1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01530 IF S1>18 THEN 1560
    if(S1_int>18)goto Lbl_01560;
    // 01540 PRINT "NICE SHOOTING !!" 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NICE SHOOTING !!");fputs(buf,fh); };
    // 01550 GOTO 1580
    goto Lbl_01580;

  Lbl_01560:
    // 01560 PRINT "BETTER GO BACK TO FORT SILL FOR REFRESHER TRAINING!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BETTER GO BACK TO FORT SILL FOR REFRESHER TRAINING!");strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01580:
    // 01580 INPUT "TRY AGAIN (Y OR N)";Z$
    // Start of Basic INPUT statement 01580
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"TRY AGAIN (Y OR N)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01580
    // 01590 IF Z$="Y" THEN 1100
    if(strcmp(Z_str,"Y")==0)goto Lbl_01100;
    // 01600 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01610 PRINT "OK.  RETURN TO BASE CAMP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OK.  RETURN TO BASE CAMP.");strcat(buf,"\n");fputs(buf,fh); };
    // 01620 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
