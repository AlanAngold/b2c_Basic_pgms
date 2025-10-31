/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/depth.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62804f3cf6d0 ---------A   01000  PRINT "DEPTH CHARGE GAME" 
    0x62804f3cf670 ---------A T 01010  PRINT
    0x62804f3d11b0 ---------A   01020  PRINT "DIMENSION OF SEARCH AREA"; 
    0x62804f3d0fc0 ---------A   01030  INPUT G
    0x62804f3d38d0 ---------A   01040  PRINT
    0x62804f3d0b80 ---------A   01050  N=INT(LOG(G)/LOG(2))+1 
    0x62804f3d1ed0 ---------A   01060  RANDOMIZE
    0x62804f3d3ed0 ---------A   01070  PRINT "YOU ARE CAPTAIN OF THE DESTROYER USS DIGITAL AND AN ENEMY SUB HAS"
    0x62804f3d4050 ---------A   01080  PRINT "BEEN CAUSING  YOU  TROUBLE,  YOUR MISSION  IS TO DESTROY IT.  YOU"
    0x62804f3d43d0 ---------A   01090  PRINT "HAVE "N" SHOTS.  SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A TRIO "
    0x62804f3d4510 ---------A   01100  PRINT "OF NUMBERS (DISTANCE NORTH, DISTANCE EAST, DEPTH FROM SURFACE)."
    0x62804f3d4570 ---------A   01110  PRINT 
    0x62804f3d46d0 ---------A   01120  PRINT "GOOD LUCK !" 
    0x62804f3d4750 ---------A   01130  PRINT
    0x62804f3d8c40 ---------A   01140  A=INT(G*RND) 
    0x62804f3d9130 ---------A   01150  B=INT(G*RND) 
    0x62804f3d9620 ---------A   01160  C=INT(G*RND)
    0x62804f3d99d0 ---------A   01170  FOR D=1 TO N 
    0x62804f3d9a60 ---------A   01180  PRINT 
    0x62804f3d9ce0 ---------A   01190  PRINT "TRIAL NUMBER ";D 
    0x62804f3d9e70 ---------A   01200  PRINT "ENTER COORDINATES (N,E,D) : ";
    0x62804f3da3f0 ---------A   01210  INPUT Y,X,Z
    0x62804f3dae90 ---------A   01220  IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1300
    0x62804f3daf10 ---------A   01230  GOSUB 1390
    0x62804f3daf80 ---------A   01240  PRINT 
    0x62804f3db0c0 ---------A   01250  NEXT D
    0x62804f3db170 ---------A   01260  PRINT 
    0x62804f3db310 ---------A   01270  PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x62804f3db970 ---------A   01280  PRINT "THE SUBMARINE WAS AT ";B,",";A,",";C
    0x62804f3db9f0 ---------A   01290  GOTO 1340
    0x62804f3dba80 ---------A T 01300  PRINT 
    0x62804f3dbdf0 ---------A   01310  PRINT "B O O M ! !  YOU FOUND IT IN ";D;"TRIES!"
    0x62804f3dbe70 ---------A   01320  PRINT 
    0x62804f3dc110 ---------A   01330  PRINT 
    0x62804f3dc290 ---------A T 01340  PRINT "ANOTHER GAME (Y OR N)";
    0x62804f3dc4c0 ---------A   01350  INPUT A$
    0x62804f3dc760 ---------A   01360  IF A$="Y" THEN 1010
    0x62804f3dc8d0 ---------A   01370  PRINT "OK.  HOPE YOU ENJOYED YOURSELF " 
    0x62804f3dc960 ---------A   01380  GOTO 1650
    0x62804f3dcae0 ---------B G 01390  PRINT "SONAR REPORTS SHOT WAS ";
    0x62804f3dcd60 ---------B   01400  IF Y>B THEN 1470
    0x62804f3dcfe0 ---------B   01410  IF Y<B THEN 1490
    0x62804f3dd260 ---------B T 01420  IF X>A THEN 1510
    0x62804f3dd4e0 ---------B   01430  IF X<A THEN 1530
    0x62804f3dd760 ---------B T 01440  IF Y<>B THEN 1550
    0x62804f3dd9e0 ---------B   01450  IF X<>A THEN 1550
    0x62804f3dda60 ---------B   01460  GOTO 1560
    0x62804f3ddbd0 ---------B T 01470  PRINT "NORTH";
    0x62804f3ddc50 ---------B   01480  GOTO 1420
    0x62804f3dddc0 ---------B T 01490  PRINT "SOUTH";
    0x62804f3dde40 ---------B   01500  GOTO 1420
    0x62804f3ddfb0 ---------B T 01510  PRINT "EAST";
    0x62804f3de030 ---------B   01520  GOTO 1440
    0x62804f3de1a0 ---------B T 01530  PRINT "WEST";
    0x62804f3de220 ---------B   01540  GOTO 1440
    0x62804f3de390 ---------B T 01550  PRINT " AND ";
    0x62804f3de610 ---------B T 01560  IF Z>C THEN 1590
    0x62804f3de890 ---------B   01570  IF Z<C THEN 1610
    0x62804f3deb10 ---------B   01580  IF Z=C THEN 1630
    0x62804f3dec70 ---------B T 01590  PRINT "TOO LOW"
    0x62804f3decf0 ---------B   01600  GOTO 1640
    0x62804f3dee40 ---------B T 01610  PRINT "TOO HIGH"
    0x62804f3deec0 ---------B   01620  GOTO 1640
    0x62804f3df010 ---------B T 01630  PRINT "DEPTH OK"
    0x62804f3df070 ---------B T 01640  RETURN
    0x62804f3df4e0 ---------A T 01650  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01010      01360T
     01300      01220T
     01340      01290T
     01390      01230G
     01420      01480T, 01500T
     01440      01520T, 01540T
     01470      01400T
     01490      01410T
     01510      01420T
     01530      01430T
     01550      01440T, 01450T
     01560      01460T
     01590      01560T
     01610      01570T
     01630      01580T
     01640      01600T, 01620T
     01650      01380T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x62804f3cf6d0 (01000)   0x62804f3cf6d0 (01000)   0x62804f3df4e0 (01650)   0x62804f3df4e0 (01650)   
   B) 0x62804f3dcae0 (01390)   0x62804f3dcae0 (01390)   0x62804f3df070 (01640)   0x62804f3df070 (01640)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/depth.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62804f3cf6d0 ---------A   01000  PRINT "DEPTH CHARGE GAME" 
    0x62804f3cf670 ---------A T 01010  PRINT
    0x62804f3d11b0 ---------A   01020  PRINT "DIMENSION OF SEARCH AREA"; 
    0x62804f3d0fc0 ---------A   01030  INPUT G
    0x62804f3d38d0 ---------A   01040  PRINT
    0x62804f3d0b80 ---------A   01050  N=INT(LOG(G)/LOG(2))+1 
    0x62804f3d1ed0 ---------A   01060  RANDOMIZE
    0x62804f3d3ed0 ---------A   01070  PRINT "YOU ARE CAPTAIN OF THE DESTROYER USS DIGITAL AND AN ENEMY SUB HAS"
    0x62804f3d4050 ---------A   01080  PRINT "BEEN CAUSING  YOU  TROUBLE,  YOUR MISSION  IS TO DESTROY IT.  YOU"
    0x62804f3d43d0 ---------A   01090  PRINT "HAVE "N" SHOTS.  SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A TRIO "
    0x62804f3d4510 ---------A   01100  PRINT "OF NUMBERS (DISTANCE NORTH, DISTANCE EAST, DEPTH FROM SURFACE)."
    0x62804f3d4570 ---------A   01110  PRINT 
    0x62804f3d46d0 ---------A   01120  PRINT "GOOD LUCK !" 
    0x62804f3d4750 ---------A   01130  PRINT
    0x62804f3d8c40 ---------A   01140  A=INT(G*RND) 
    0x62804f3d9130 ---------A   01150  B=INT(G*RND) 
    0x62804f3d9620 ---------A   01160  C=INT(G*RND)
    0x62804f3d99d0 ---------A   01170  FOR D=1 TO N 
    0x62804f3d9a60 ---------A   01180  PRINT 
    0x62804f3d9ce0 ---------A   01190  PRINT "TRIAL NUMBER ";D 
    0x62804f3d9e70 ---------A   01200  PRINT "ENTER COORDINATES (N,E,D) : ";
    0x62804f3da3f0 ---------A   01210  INPUT Y,X,Z
    0x62804f3dae90 ---------A   01220  IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1300
    0x62804f3daf10 ---------A   01230  GOSUB 1390
    0x62804f3daf80 ---------A   01240  PRINT 
    0x62804f3db0c0 ---------A   01250  NEXT D
    0x62804f3db170 ---------A   01260  PRINT 
    0x62804f3db310 ---------A   01270  PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x62804f3db970 ---------A   01280  PRINT "THE SUBMARINE WAS AT ";B,",";A,",";C
    0x62804f3db9f0 ---------A   01290  GOTO 1340
    0x62804f3dba80 ---------A T 01300  PRINT 
    0x62804f3dbdf0 ---------A   01310  PRINT "B O O M ! !  YOU FOUND IT IN ";D;"TRIES!"
    0x62804f3dbe70 ---------A   01320  PRINT 
    0x62804f3dc110 ---------A   01330  PRINT 
    0x62804f3dc290 ---------A T 01340  PRINT "ANOTHER GAME (Y OR N)";
    0x62804f3dc4c0 ---------A   01350  INPUT A$
    0x62804f3dc760 ---------A   01360  IF A$="Y" THEN 1010
    0x62804f3dc8d0 ---------A   01370  PRINT "OK.  HOPE YOU ENJOYED YOURSELF " 
    0x62804f3dc960 ---------A   01380  GOTO 1650
    0x62804f3dcae0 ---------B G 01390  PRINT "SONAR REPORTS SHOT WAS ";
    0x62804f3dcd60 ---------B   01400  IF Y>B THEN 1470
    0x62804f3dcfe0 ---------B   01410  IF Y<B THEN 1490
    0x62804f3dd260 ---------B T 01420  IF X>A THEN 1510
    0x62804f3dd4e0 ---------B   01430  IF X<A THEN 1530
    0x62804f3dd760 ---------B T 01440  IF Y<>B THEN 1550
    0x62804f3dd9e0 ---------B   01450  IF X<>A THEN 1550
    0x62804f3dda60 ---------B   01460  GOTO 1560
    0x62804f3ddbd0 ---------B T 01470  PRINT "NORTH";
    0x62804f3ddc50 ---------B   01480  GOTO 1420
    0x62804f3dddc0 ---------B T 01490  PRINT "SOUTH";
    0x62804f3dde40 ---------B   01500  GOTO 1420
    0x62804f3ddfb0 ---------B T 01510  PRINT "EAST";
    0x62804f3de030 ---------B   01520  GOTO 1440
    0x62804f3de1a0 ---------B T 01530  PRINT "WEST";
    0x62804f3de220 ---------B   01540  GOTO 1440
    0x62804f3de390 ---------B T 01550  PRINT " AND ";
    0x62804f3de610 ---------B T 01560  IF Z>C THEN 1590
    0x62804f3de890 ---------B   01570  IF Z<C THEN 1610
    0x62804f3deb10 ---------B   01580  IF Z=C THEN 1630
    0x62804f3dec70 ---------B T 01590  PRINT "TOO LOW"
    0x62804f3decf0 ---------B   01600  GOTO 1640
    0x62804f3dee40 ---------B T 01610  PRINT "TOO HIGH"
    0x62804f3deec0 ---------B   01620  GOTO 1640
    0x62804f3df010 ---------B T 01630  PRINT "DEPTH OK"
    0x62804f3df070 ---------B T 01640  RETURN
    0x62804f3df4e0 ---------A T 01650  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/depth.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62804f3cf6d0 ---------A   01000  PRINT "DEPTH CHARGE GAME" 
    0x62804f3cf670 ---------A T 01010  PRINT
    0x62804f3d11b0 ---------A   01020  PRINT "DIMENSION OF SEARCH AREA"; 
    0x62804f3d0fc0 ---------A   01030  INPUT G
    0x62804f3d38d0 ---------A   01040  PRINT
    0x62804f3d0b80 ---------A   01050  N=INT(LOG(G)/LOG(2))+1 
    0x62804f3d1ed0 ---------A   01060  RANDOMIZE
    0x62804f3d3ed0 ---------A   01070  PRINT "YOU ARE CAPTAIN OF THE DESTROYER USS DIGITAL AND AN ENEMY SUB HAS"
    0x62804f3d4050 ---------A   01080  PRINT "BEEN CAUSING  YOU  TROUBLE,  YOUR MISSION  IS TO DESTROY IT.  YOU"
    0x62804f3d43d0 ---------A   01090  PRINT "HAVE "N" SHOTS.  SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A TRIO "
    0x62804f3d4510 ---------A   01100  PRINT "OF NUMBERS (DISTANCE NORTH, DISTANCE EAST, DEPTH FROM SURFACE)."
    0x62804f3d4570 ---------A   01110  PRINT 
    0x62804f3d46d0 ---------A   01120  PRINT "GOOD LUCK !" 
    0x62804f3d4750 ---------A   01130  PRINT
    0x62804f3d8c40 ---------A   01140  A=INT(G*RND) 
    0x62804f3d9130 ---------A   01150  B=INT(G*RND) 
    0x62804f3d9620 ---------A   01160  C=INT(G*RND)
    0x62804f3d99d0 ---------A   01170  FOR D=1 TO N 
    0x62804f3d9a60 ---------A   01180  PRINT 
    0x62804f3d9ce0 ---------A   01190  PRINT "TRIAL NUMBER ";D 
    0x62804f3d9e70 ---------A   01200  PRINT "ENTER COORDINATES (N,E,D) : ";
    0x62804f3da3f0 ---------A   01210  INPUT Y,X,Z
    0x62804f3dae90 ---------A   01220  IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1300
    0x62804f3daf10 ---------A   01230  GOSUB 1390
    0x62804f3daf80 ---------A   01240  PRINT 
    0x62804f3db0c0 ---------A   01250  NEXT D
    0x62804f3db170 ---------A   01260  PRINT 
    0x62804f3db310 ---------A   01270  PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x62804f3db970 ---------A   01280  PRINT "THE SUBMARINE WAS AT ";B,",";A,",";C
    0x62804f3db9f0 ---------A   01290  GOTO 1340
    0x62804f3dba80 ---------A T 01300  PRINT 
    0x62804f3dbdf0 ---------A   01310  PRINT "B O O M ! !  YOU FOUND IT IN ";D;"TRIES!"
    0x62804f3dbe70 ---------A   01320  PRINT 
    0x62804f3dc110 ---------A   01330  PRINT 
    0x62804f3dc290 ---------A T 01340  PRINT "ANOTHER GAME (Y OR N)";
    0x62804f3dc4c0 ---------A   01350  INPUT A$
    0x62804f3dc760 ---------A   01360  IF A$="Y" THEN 1010
    0x62804f3dc8d0 ---------A   01370  PRINT "OK.  HOPE YOU ENJOYED YOURSELF " 
    0x62804f3dc960 ---------A   01380  GOTO 1650
    0x62804f3dcae0 ---------B G 01390  PRINT "SONAR REPORTS SHOT WAS ";
    0x62804f3dcd60 ---------B   01400  IF Y>B THEN 1470
    0x62804f3dcfe0 ---------B   01410  IF Y<B THEN 1490
    0x62804f3dd260 ---------B T 01420  IF X>A THEN 1510
    0x62804f3dd4e0 ---------B   01430  IF X<A THEN 1530
    0x62804f3dd760 ---------B T 01440  IF Y<>B THEN 1550
    0x62804f3dd9e0 ---------B   01450  IF X<>A THEN 1550
    0x62804f3dda60 ---------B   01460  GOTO 1560
    0x62804f3ddbd0 ---------B T 01470  PRINT "NORTH";
    0x62804f3ddc50 ---------B   01480  GOTO 1420
    0x62804f3dddc0 ---------B T 01490  PRINT "SOUTH";
    0x62804f3dde40 ---------B   01500  GOTO 1420
    0x62804f3ddfb0 ---------B T 01510  PRINT "EAST";
    0x62804f3de030 ---------B   01520  GOTO 1440
    0x62804f3de1a0 ---------B T 01530  PRINT "WEST";
    0x62804f3de220 ---------B   01540  GOTO 1440
    0x62804f3de390 ---------B T 01550  PRINT " AND ";
    0x62804f3de610 ---------B T 01560  IF Z>C THEN 1590
    0x62804f3de890 ---------B   01570  IF Z<C THEN 1610
    0x62804f3deb10 ---------B   01580  IF Z=C THEN 1630
    0x62804f3dec70 ---------B T 01590  PRINT "TOO LOW"
    0x62804f3decf0 ---------B   01600  GOTO 1640
    0x62804f3dee40 ---------B T 01610  PRINT "TOO HIGH"
    0x62804f3deec0 ---------B   01620  GOTO 1640
    0x62804f3df010 ---------B T 01630  PRINT "DEPTH OK"
    0x62804f3df070 ---------B T 01640  RETURN
    0x62804f3df4e0 ---------A T 01650  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01670 - 10000    8340 

 */



/*
 *  Symbol Table Listing for 'basic/depth.bas'
 *
    A                        Integer     
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
    D                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
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
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    Y                        Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/depth.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62804f3cf6d0 ---------A   01000  PRINT "DEPTH CHARGE GAME" 
    0x62804f3cf670 ---------A T 01010  PRINT
    0x62804f3d11b0 ---------A   01020  PRINT "DIMENSION OF SEARCH AREA"; 
    0x62804f3d0fc0 ---------A   01030  INPUT G
    0x62804f3d38d0 ---------A   01040  PRINT
    0x62804f3d0b80 ---------A   01050  N=INT(LOG(G)/LOG(2))+1 
    0x62804f3d1ed0 ---------A   01060  RANDOMIZE
    0x62804f3d3ed0 ---------A   01070  PRINT "YOU ARE CAPTAIN OF THE DESTROYER USS DIGITAL AND AN ENEMY SUB HAS"
    0x62804f3d4050 ---------A   01080  PRINT "BEEN CAUSING  YOU  TROUBLE,  YOUR MISSION  IS TO DESTROY IT.  YOU"
    0x62804f3d43d0 ---------A   01090  PRINT "HAVE "N" SHOTS.  SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A TRIO "
    0x62804f3d4510 ---------A   01100  PRINT "OF NUMBERS (DISTANCE NORTH, DISTANCE EAST, DEPTH FROM SURFACE)."
    0x62804f3d4570 ---------A   01110  PRINT 
    0x62804f3d46d0 ---------A   01120  PRINT "GOOD LUCK !" 
    0x62804f3d4750 ---------A   01130  PRINT
    0x62804f3d8c40 ---------A   01140  A=INT(G*RND) 
    0x62804f3d9130 ---------A   01150  B=INT(G*RND) 
    0x62804f3d9620 ---------A   01160  C=INT(G*RND)
    0x62804f3d99d0 ---------A   01170  FOR D=1 TO N 
    0x62804f3d9a60 ---------A   01180  PRINT 
    0x62804f3d9ce0 ---------A   01190  PRINT "TRIAL NUMBER ";D 
    0x62804f3d9e70 ---------A   01200  PRINT "ENTER COORDINATES (N,E,D) : ";
    0x62804f3da3f0 ---------A   01210  INPUT Y,X,Z
    0x62804f3dae90 ---------A   01220  IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1300
    0x62804f3daf10 ---------A   01230  GOSUB 1400
    0x62804f3daf80 ---------A   01240  PRINT 
    0x62804f3db0c0 ---------A   01250  NEXT D
    0x62804f3db170 ---------A   01260  PRINT 
    0x62804f3db310 ---------A   01270  PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x62804f3db970 ---------A   01280  PRINT "THE SUBMARINE WAS AT ";B,",";A,",";C
    0x62804f3db9f0 ---------A   01290  GOTO 1340
    0x62804f3dba80 ---------A T 01300  PRINT 
    0x62804f3dbdf0 ---------A   01310  PRINT "B O O M ! !  YOU FOUND IT IN ";D;"TRIES!"
    0x62804f3dbe70 ---------A   01320  PRINT 
    0x62804f3dc110 ---------A   01330  PRINT 
    0x62804f3dc290 ---------A T 01340  PRINT "ANOTHER GAME (Y OR N)";
    0x62804f3dc4c0 ---------A   01350  INPUT A$
    0x62804f3dc760 ---------A   01360  IF A$="Y" THEN 1010
    0x62804f3dc8d0 ---------A   01370  PRINT "OK.  HOPE YOU ENJOYED YOURSELF " 
    0x62804f3dc960 ---------A   01380  GOTO 1390
    0x62804f3df4e0 ---------A T 01390  END
    0x62804f3dcae0 ---------B G 01400  PRINT "SONAR REPORTS SHOT WAS ";
    0x62804f3dcd60 ---------B   01410  IF Y>B THEN 1480
    0x62804f3dcfe0 ---------B   01420  IF Y<B THEN 1500
    0x62804f3dd260 ---------B T 01430  IF X>A THEN 1520
    0x62804f3dd4e0 ---------B   01440  IF X<A THEN 1540
    0x62804f3dd760 ---------B T 01450  IF Y<>B THEN 1560
    0x62804f3dd9e0 ---------B   01460  IF X<>A THEN 1560
    0x62804f3dda60 ---------B   01470  GOTO 1570
    0x62804f3ddbd0 ---------B T 01480  PRINT "NORTH";
    0x62804f3ddc50 ---------B   01490  GOTO 1430
    0x62804f3dddc0 ---------B T 01500  PRINT "SOUTH";
    0x62804f3dde40 ---------B   01510  GOTO 1430
    0x62804f3ddfb0 ---------B T 01520  PRINT "EAST";
    0x62804f3de030 ---------B   01530  GOTO 1450
    0x62804f3de1a0 ---------B T 01540  PRINT "WEST";
    0x62804f3de220 ---------B   01550  GOTO 1450
    0x62804f3de390 ---------B T 01560  PRINT " AND ";
    0x62804f3de610 ---------B T 01570  IF Z>C THEN 1600
    0x62804f3de890 ---------B   01580  IF Z<C THEN 1620
    0x62804f3deb10 ---------B   01590  IF Z=C THEN 1640
    0x62804f3dec70 ---------B T 01600  PRINT "TOO LOW"
    0x62804f3decf0 ---------B   01610  GOTO 1650
    0x62804f3dee40 ---------B T 01620  PRINT "TOO HIGH"
    0x62804f3deec0 ---------B   01630  GOTO 1650
    0x62804f3df010 ---------B T 01640  PRINT "DEPTH OK"
    0x62804f3e0ac0 ---------B T 01650  GOTO 01660
    0x62804f3e41e0 ---------B T 01660  RETURN
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
int    Submarine_East;                            // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    Submarine_North;                           // Basic: B 
int    Submarine_Depth;                           // Basic: C 
int    Turn;                                      // Basic: D 
int    VolSide;                                   // Basic: G 
int    NumTurns;                                  // Basic: N 
int    Grid_East;                                 // Basic: X 
int    Grid_North;                                // Basic: Y 
int    Grid_Depth;                                // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void SonarReport();

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

void SonarReport(){
    // 01400 PRINT "SONAR REPORTS SHOT WAS ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SONAR REPORTS SHOT WAS ");fputs(buf,fh); };
    // 01410 IF Y>B THEN 1480
    if(Grid_North>Submarine_North)goto Err_North;
    // 01420 IF Y<B THEN 1500
    if(Grid_North<Submarine_North)goto Err_South;

  Sonar_Test_East:
    // 01430 IF X>A THEN 1520
    if(Grid_East>Submarine_East)goto Err_East;
    // 01440 IF X<A THEN 1540
    if(Grid_East<Submarine_East)goto Err_West;

  Test_For_Conjunction:
    // 01450 IF Y<>B THEN 1560
    if(Grid_North!=Submarine_North)goto Add_Conjunction;
    // 01460 IF X<>A THEN 1560
    if(Grid_East!=Submarine_East)goto Add_Conjunction;
    // 01470 GOTO 1570
    goto Sonar_Test_Depth;

  Err_North:
    // 01480 PRINT "NORTH";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NORTH");fputs(buf,fh); };
    // 01490 GOTO 1430
    goto Sonar_Test_East;

  Err_South:
    // 01500 PRINT "SOUTH";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SOUTH");fputs(buf,fh); };
    // 01510 GOTO 1430
    goto Sonar_Test_East;

  Err_East:
    // 01520 PRINT "EAST";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"EAST");fputs(buf,fh); };
    // 01530 GOTO 1450
    goto Test_For_Conjunction;

  Err_West:
    // 01540 PRINT "WEST";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WEST");fputs(buf,fh); };
    // 01550 GOTO 1450
    goto Test_For_Conjunction;

  Add_Conjunction:
    // 01560 PRINT " AND ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," AND ");fputs(buf,fh); };

  Sonar_Test_Depth:
    // 01570 IF Z>C THEN 1600
    if(Grid_Depth>Submarine_Depth)goto Err_Low;
    // 01580 IF Z<C THEN 1620
    if(Grid_Depth<Submarine_Depth)goto Err_High;
    // 01590 IF Z=C THEN 1640
    if(Grid_Depth==Submarine_Depth)goto Err_DepthOK;

  Err_Low:
    // 01600 PRINT "TOO LOW"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO LOW");strcat(buf,"\n");fputs(buf,fh); };
    // 01610 GOTO 1650
    goto Sonar_Report_Complete;

  Err_High:
    // 01620 PRINT "TOO HIGH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO HIGH");strcat(buf,"\n");fputs(buf,fh); };
    // 01630 GOTO 1650
    goto Sonar_Report_Complete;

  Err_DepthOK:
    // 01640 PRINT "DEPTH OK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DEPTH OK");strcat(buf,"\n");fputs(buf,fh); };

  Sonar_Report_Complete:
    // 01650 GOTO 01660
    goto Lbl_01660;

  Lbl_01660:
    // 01660 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT "DEPTH CHARGE GAME" 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DEPTH CHARGE GAME");strcat(buf,"\n");fputs(buf,fh); };

  StartGame:
    // 01010 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT "DIMENSION OF SEARCH AREA"; 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIMENSION OF SEARCH AREA");fputs(buf,fh); };
    // 01030 INPUT G
    // Start of Basic INPUT statement 01030
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&VolSide,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01030
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 N=INT(LOG(G)/LOG(2))+1 
    NumTurns = INT(LOG(VolSide)/LOG(2))+1;
    // 01060 RANDOMIZE
    RANDOMIZE();
    // 01070 PRINT "YOU ARE CAPTAIN OF THE DESTROYER USS DIGITAL AND AN ENEMY SUB HAS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE CAPTAIN OF THE DESTROYER USS DIGITAL AND AN ENEMY SUB HAS");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "BEEN CAUSING  YOU  TROUBLE,  YOUR MISSION  IS TO DESTROY IT.  YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BEEN CAUSING  YOU  TROUBLE,  YOUR MISSION  IS TO DESTROY IT.  YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "HAVE "N" SHOTS.  SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A TRIO "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAVE "); b2c_INT(buf,NumTurns);strcat(buf," SHOTS.  SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A TRIO ");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "OF NUMBERS (DISTANCE NORTH, DISTANCE EAST, DEPTH FROM SURFACE)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF NUMBERS (DISTANCE NORTH, DISTANCE EAST, DEPTH FROM SURFACE).");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "GOOD LUCK !" 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK !");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 A=INT(G*RND) 
    Submarine_East = INT(VolSide*RND());
    // 01150 B=INT(G*RND) 
    Submarine_North = INT(VolSide*RND());
    // 01160 C=INT(G*RND)
    Submarine_Depth = INT(VolSide*RND());
    // 01170 FOR D=1 TO N 
    for(Turn=1;Turn<=NumTurns;Turn++){
        // 01180 PRINT 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01190 PRINT "TRIAL NUMBER ";D 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRIAL NUMBER "); b2c_INT(buf,Turn);strcat(buf,"\n");fputs(buf,fh); };
        // 01200 PRINT "ENTER COORDINATES (N,E,D) : ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER COORDINATES (N,E,D) : ");fputs(buf,fh); };
        // 01210 INPUT Y,X,Z
        // Start of Basic INPUT statement 01210
        {
            int numargs=3;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&Grid_North,args,0)) ||
                    (err += b2c_strtoi(&Grid_East,args,1)) ||
                    (err += b2c_strtoi(&Grid_Depth,args,2)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01210
        // 01220 IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1300
        if(ABS(Grid_East-Submarine_East)+ABS(Grid_North-Submarine_North)+ABS(Grid_Depth-Submarine_Depth)==0)goto SubmarineHit;
        // 01230 GOSUB 1400
        SonarReport();
        // 01240 PRINT 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01250 NEXT D
        int dummy_1250=0; // Ignore this line.
    }; // End-For(Turn)
    // 01260 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT "THE SUBMARINE WAS AT ";B,",";A,",";C
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE SUBMARINE WAS AT "); b2c_INT(buf,Submarine_North);strcat(buf,","); b2c_INT(buf,Submarine_East);strcat(buf,","); b2c_INT(buf,Submarine_Depth);strcat(buf,"\n");fputs(buf,fh); };
    // 01290 GOTO 1340
    goto QAnotherGame;

  SubmarineHit:
    // 01300 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01310 PRINT "B O O M ! !  YOU FOUND IT IN ";D;"TRIES!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"B O O M ! !  YOU FOUND IT IN "); b2c_INT(buf,Turn);strcat(buf,"TRIES!");strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  QAnotherGame:
    // 01340 PRINT "ANOTHER GAME (Y OR N)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ANOTHER GAME (Y OR N)");fputs(buf,fh); };
    // 01350 INPUT A$
    // Start of Basic INPUT statement 01350
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
    }; // End of Basic INPUT statement 01350
    // 01360 IF A$="Y" THEN 1010
    if(strcmp(A_str,"Y")==0)goto StartGame;
    // 01370 PRINT "OK.  HOPE YOU ENJOYED YOURSELF " 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OK.  HOPE YOU ENJOYED YOURSELF ");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 GOTO 1390
    goto ExitGame;

  ExitGame:
    // 01390 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
