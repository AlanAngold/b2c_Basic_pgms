/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/target.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60147bed86d0 ---------A   00010  PRINT TAB(33);"TARGET"
    0x60147bed8670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60147bed87f0 ---------A   00030  PRINT: PRINT: PRINT
    0x60147bedaff0 ---------A   00100  R=1: R1=57.296: P=3.14159
    0x60147bed9620 ---------A   00110  PRINT "YOU ARE THE WEAPONS OFFICER ON THE STARSHIP ENTERPRISE"
    0x60147bed97e0 ---------A   00120  PRINT "AND THIS IS A TEST TO SEE HOW ACCURATE A SHOT YOU"
    0x60147bee0970 ---------A   00130  PRINT "ARE IN A THREE-DIMENSIONAL RANGE.  YOU WILL BE TOLD"
    0x60147bee0b20 ---------A   00140  PRINT "THE RADIAN OFFSET FOR THE X AND Z AXES, THE LOCATION"
    0x60147bee0ce0 ---------A   00150  PRINT "OF THE TARGET IN THREE DIMENSIONAL RECTANGULAR COORDINATES,"
    0x60147bee0e40 ---------A   00160  PRINT "THE APPROXIMATE NUMBER OF DEGREES FROM THE X AND Z"
    0x60147bee0ff0 ---------A   00170  PRINT "AXES, AND THE APPROXIMATE DISTANCE TO THE TARGET."
    0x60147bee11b0 ---------A   00180  PRINT "YOU WILL THEN PROCEEED TO SHOOT AT THE TARGET UNTIL IT IS"
    0x60147bee1560 ---------A   00190  PRINT "DESTROYED!": PRINT: PRINT "GOOD LUCK!!":PRINT: PRINT
    0x60147bee29a0 ---------A T 00220  A=RND(1)*2*P: B=RND(1)*2*P: Q=INT(A*R1): W=INT(B*R1)
    0x60147bee2e20 ---------A   00260  PRINT "RADIANS FROM X AXIS =";A;"   FROM Z AXIS =";B
    0x60147bee4260 ---------A   00280  P1=100000*RND(1)+RND(1): X=SIN(B)*COS(A)*P1: Y=SIN(B)*SIN(A)*P1
    0x60147bee4790 ---------A   00290  Z=COS(B)*P1
    0x60147bee4de0 ---------A   00340  PRINT "TARGET SIGHTED: APPROXIMATE COORDINATES:  X=";X;"  Y=";Y;"  Z=";Z
    0x60147bee5330 ---------A T 00345  R=R+1: IF R>5 THEN 390
    0x60147bee5830 ---------A   00350  ON R GOTO 355,360,365,370,375
    0x60147bee5e40 ---------A T 00355  P3=INT(P1*.05)*20: GOTO 390
    0x60147bee6380 ---------A T 00360  P3=INT(P1*.1)*10: GOTO 390
    0x60147bee68c0 ---------A T 00365  P3=INT(P1*.5)*2: GOTO 390
    0x60147bee6c20 ---------A T 00370  P3=INT(P1): GOTO 390
    0x60147bee6e30 ---------A T 00375  P3=P1
    0x60147bee70d0 ---------A T 00390  PRINT "     ESTIMATED DISTANCE:";P3
    0x60147bee72e0 ---------A   00400  PRINT:PRINT "INPUT ANGLE DEVIATION FROM X, DEVIATION FROM Z, DISTANCE";
    0x60147bee7870 ---------A   00405  INPUT A1,B1,P2
    0x60147bee7d10 ---------A   00410  PRINT: IF P2<20 THEN PRINT "YOU BLEW YOURSELF UP!!": GOTO 580
    0x60147bee86f0 ----------   00420  A1=A1/R1: B1=B1/R1: PRINT "RADIANS FROM X AXIS =";A1;"  ";
    0x60147bee8980 ----------   00425  PRINT "FROM Z AXIS =";B1
    0x60147bee9c40 ----------   00480  X1=P2*SIN(B1)*COS(A1): Y1=P2*SIN(B1)*SIN(A1): Z1=P2*COS(B1)
    0x60147beeab10 ----------   00510  D=((X1-X)^2+(Y1-Y)^2+(Z1-Z)^2)^(1/2)
    0x60147beeafa0 ----------   00520  IF D>20 THEN 670
    0x60147beeb210 ----------   00530  PRINT: PRINT " * * * HIT * * *   TARGET IS NON-FUNCTIONAL": PRINT
    0x60147beeb5a0 ----------   00550  PRINT "DISTANCE OF EXPLOSION FROM TARGET WAS";D;"KILOMETERS."
    0x60147beeb9a0 ----------   00570  PRINT: PRINT "MISSION ACCOMPLISHED IN ";R;" SHOTS."
    0x60147beec260 ---------A T 00580  R=0: FOR I=1 TO 5: PRINT: NEXT I: PRINT "NEXT TARGET...": PRINT
    0x60147beec300 ---------A   00590  GOTO 220
    0x60147beed150 ---------- T 00670  X2=X1-X: Y2=Y1-Y: Z2=Z1-Z: IF X2<0 THEN 730
    0x60147beed540 ----------   00710  PRINT "SHOT IN FRONT OF TARGET";X2;"KILOMETERS.": GOTO 740
    0x60147beed890 ---------- T 00730  PRINT "SHOT BEHIND TARGET";-X2;"KILOMETERS."
    0x60147beedb20 ---------- T 00740  IF Y2<0 THEN 770
    0x60147beedf10 ----------   00750  PRINT "SHOT TO LEFT OF TARGET";Y2;"KILOMETERS.": GOTO 780
    0x60147beee270 ---------- T 00770  PRINT "SHOT TO RIGHT OF TARGET";-Y2;"KILOMETERS."
    0x60147beee500 ---------- T 00780  IF Z2<0 THEN 810
    0x60147beee8e0 ----------   00790  PRINT "SHOT ABOVE TARGET";Z2;"KILOMETERS.": GOTO 820
    0x60147beeec60 ---------- T 00810  PRINT "SHOT BELOW TARGET";-Z2;"KILOMETERS."
    0x60147beef310 ---------- T 00820  PRINT "APPROX POSITION OF EXPLOSION:  X=";X1;"   Y=";Y1;"   Z=";Z1
    0x60147beef700 ----------   00830  PRINT "     DISTANCE FROM TARGET =";D: PRINT: PRINT: PRINT: GOTO 345
    0x60147beef750 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00220      00590T
     00345      00830T
     00355      00350T
     00360      00350T
     00365      00350T
     00370      00350T
     00375      00350T
     00390      00345T, 00355T, 00360T, 00365T, 00370T
     00580      00410T
     00670      00520T
     00730      00670T
     00740      00710T
     00770      00740T
     00780      00750T
     00810      00780T
     00820      00790T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x60147bed86d0 (00010)   0x60147bed86d0 (00010)   0x60147beef750 (00999)   0x60147beef750 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/target.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60147bed86d0 ---------A   00010  PRINT TAB(33);"TARGET"
    0x60147bed8670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60147bec92b0 ----------   00030  PRINT
    0x60147bed89e0 ----------        a PRINT
    0x60147bed87f0 ---------A        b PRINT
    0x60147bed9b80 ----------   00100  R=1
    0x60147bedaf30 ----------        a R1=57.296
    0x60147bedaff0 ---------A        b P=3.14159
    0x60147bed9620 ---------A   00110  PRINT "YOU ARE THE WEAPONS OFFICER ON THE STARSHIP ENTERPRISE"
    0x60147bed97e0 ---------A   00120  PRINT "AND THIS IS A TEST TO SEE HOW ACCURATE A SHOT YOU"
    0x60147bee0970 ---------A   00130  PRINT "ARE IN A THREE-DIMENSIONAL RANGE.  YOU WILL BE TOLD"
    0x60147bee0b20 ---------A   00140  PRINT "THE RADIAN OFFSET FOR THE X AND Z AXES, THE LOCATION"
    0x60147bee0ce0 ---------A   00150  PRINT "OF THE TARGET IN THREE DIMENSIONAL RECTANGULAR COORDINATES,"
    0x60147bee0e40 ---------A   00160  PRINT "THE APPROXIMATE NUMBER OF DEGREES FROM THE X AND Z"
    0x60147bee0ff0 ---------A   00170  PRINT "AXES, AND THE APPROXIMATE DISTANCE TO THE TARGET."
    0x60147bee11b0 ---------A   00180  PRINT "YOU WILL THEN PROCEEED TO SHOOT AT THE TARGET UNTIL IT IS"
    0x60147bee12d0 ----------   00190  PRINT "DESTROYED!"
    0x60147bee1330 ----------        a PRINT
    0x60147bee1450 ----------        b PRINT "GOOD LUCK!!"
    0x60147bee14b0 ----------        c PRINT
    0x60147bee1560 ---------A        d PRINT
    0x60147bee1aa0 ---------- T 00220  A=RND(1)*2*P
    0x60147bee1fd0 ---------- T      a B=RND(1)*2*P
    0x60147bee2480 ---------- T      b Q=INT(A*R1)
    0x60147bee29a0 ---------A T      c W=INT(B*R1)
    0x60147bee2e20 ---------A   00260  PRINT "RADIANS FROM X AXIS =";A;"   FROM Z AXIS =";B
    0x60147bee34a0 ----------   00280  P1=100000*RND(1)+RND(1)
    0x60147bee3b70 ----------        a X=SIN(B)*COS(A)*P1
    0x60147bee4260 ---------A        b Y=SIN(B)*SIN(A)*P1
    0x60147bee4790 ---------A   00290  Z=COS(B)*P1
    0x60147bee4de0 ---------A   00340  PRINT "TARGET SIGHTED: APPROXIMATE COORDINATES:  X=";X;"  Y=";Y;"  Z=";Z
    0x60147bee5100 ---------- T 00345  R=R+1
    0x60147bee5330 ---------A T      a IF R>5 THEN 390
    0x60147bee5830 ---------A   00350  ON R GOTO 355,360,365,370,375
    0x60147bee5df0 ---------- T 00355  P3=INT(P1*.05)*20
    0x60147bee5e40 ---------A T      a GOTO 390
    0x60147bee6330 ---------- T 00360  P3=INT(P1*.1)*10
    0x60147bee6380 ---------A T      a GOTO 390
    0x60147bee6870 ---------- T 00365  P3=INT(P1*.5)*2
    0x60147bee68c0 ---------A T      a GOTO 390
    0x60147bee6bb0 ---------- T 00370  P3=INT(P1)
    0x60147bee6c20 ---------A T      a GOTO 390
    0x60147bee6e30 ---------A T 00375  P3=P1
    0x60147bee70d0 ---------A T 00390  PRINT "     ESTIMATED DISTANCE:";P3
    0x60147bee7130 ----------   00400  PRINT
    0x60147bee72e0 ---------A        a PRINT "INPUT ANGLE DEVIATION FROM X, DEVIATION FROM Z, DISTANCE";
    0x60147bee7870 ---------A   00405  INPUT A1,B1,P2
    0x60147bee78d0 ----------   00410  PRINT
    0x60147bee7c60 ----------        a IF P2<20 THEN PRINT "YOU BLEW YOURSELF UP!!"
    0x60147bee7d10 ---------A        b GOTO 580
    0x60147bee8040 ----------   00420  A1=A1/R1
    0x60147bee8370 ----------        a B1=B1/R1
    0x60147bee86f0 ----------        b PRINT "RADIANS FROM X AXIS =";A1;"  ";
    0x60147bee8980 ----------   00425  PRINT "FROM Z AXIS =";B1
    0x60147bee9060 ----------   00480  X1=P2*SIN(B1)*COS(A1)
    0x60147bee9730 ----------        a Y1=P2*SIN(B1)*SIN(A1)
    0x60147bee9c40 ----------        b Z1=P2*COS(B1)
    0x60147beeab10 ----------   00510  D=((X1-X)^2+(Y1-Y)^2+(Z1-Z)^2)^(1/2)
    0x60147beeafa0 ----------   00520  IF D>20 THEN 670
    0x60147beeb000 ----------   00530  PRINT
    0x60147beeb160 ----------        a PRINT " * * * HIT * * *   TARGET IS NON-FUNCTIONAL"
    0x60147beeb210 ----------        b PRINT
    0x60147beeb5a0 ----------   00550  PRINT "DISTANCE OF EXPLOSION FROM TARGET WAS";D;"KILOMETERS."
    0x60147beeb600 ----------   00570  PRINT
    0x60147beeb9a0 ----------        a PRINT "MISSION ACCOMPLISHED IN ";R;" SHOTS."
    0x60147beebba0 ---------- T 00580  R=0
    0x60147beebf10 ---------- T      a FOR I=1 TO 5
    0x60147beebf70 ---------- T      b PRINT
    0x60147beec0b0 ---------- T      c NEXT I
    0x60147beec1e0 ---------- T      d PRINT "NEXT TARGET..."
    0x60147beec260 ---------A T      e PRINT
    0x60147beec300 ---------A   00590  GOTO 220
    0x60147beec6f0 ---------- T 00670  X2=X1-X
    0x60147beecae0 ---------- T      a Y2=Y1-Y
    0x60147beeced0 ---------- T      b Z2=Z1-Z
    0x60147beed150 ---------- T      c IF X2<0 THEN 730
    0x60147beed4a0 ----------   00710  PRINT "SHOT IN FRONT OF TARGET";X2;"KILOMETERS."
    0x60147beed540 ----------        a GOTO 740
    0x60147beed890 ---------- T 00730  PRINT "SHOT BEHIND TARGET";-X2;"KILOMETERS."
    0x60147beedb20 ---------- T 00740  IF Y2<0 THEN 770
    0x60147beede70 ----------   00750  PRINT "SHOT TO LEFT OF TARGET";Y2;"KILOMETERS."
    0x60147beedf10 ----------        a GOTO 780
    0x60147beee270 ---------- T 00770  PRINT "SHOT TO RIGHT OF TARGET";-Y2;"KILOMETERS."
    0x60147beee500 ---------- T 00780  IF Z2<0 THEN 810
    0x60147beee840 ----------   00790  PRINT "SHOT ABOVE TARGET";Z2;"KILOMETERS."
    0x60147beee8e0 ----------        a GOTO 820
    0x60147beeec60 ---------- T 00810  PRINT "SHOT BELOW TARGET";-Z2;"KILOMETERS."
    0x60147beef310 ---------- T 00820  PRINT "APPROX POSITION OF EXPLOSION:  X=";X1;"   Y=";Y1;"   Z=";Z1
    0x60147beef560 ----------   00830  PRINT "     DISTANCE FROM TARGET =";D
    0x60147beef5c0 ----------        a PRINT
    0x60147beef620 ----------        b PRINT
    0x60147beef680 ----------        c PRINT
    0x60147beef700 ----------        d GOTO 345
    0x60147beef750 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/target.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60147bed86d0 ---------A   01000  PRINT TAB(33);"TARGET"
    0x60147bed8670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60147bec92b0 ----------   01020  PRINT
    0x60147bed89e0 ----------   01030  PRINT
    0x60147bed87f0 ---------A   01040  PRINT
    0x60147bed9b80 ----------   01050  R=1
    0x60147bedaf30 ----------   01060  R1=57.296
    0x60147bedaff0 ---------A   01070  P=3.14159
    0x60147bed9620 ---------A   01080  PRINT "YOU ARE THE WEAPONS OFFICER ON THE STARSHIP ENTERPRISE"
    0x60147bed97e0 ---------A   01090  PRINT "AND THIS IS A TEST TO SEE HOW ACCURATE A SHOT YOU"
    0x60147bee0970 ---------A   01100  PRINT "ARE IN A THREE-DIMENSIONAL RANGE.  YOU WILL BE TOLD"
    0x60147bee0b20 ---------A   01110  PRINT "THE RADIAN OFFSET FOR THE X AND Z AXES, THE LOCATION"
    0x60147bee0ce0 ---------A   01120  PRINT "OF THE TARGET IN THREE DIMENSIONAL RECTANGULAR COORDINATES,"
    0x60147bee0e40 ---------A   01130  PRINT "THE APPROXIMATE NUMBER OF DEGREES FROM THE X AND Z"
    0x60147bee0ff0 ---------A   01140  PRINT "AXES, AND THE APPROXIMATE DISTANCE TO THE TARGET."
    0x60147bee11b0 ---------A   01150  PRINT "YOU WILL THEN PROCEEED TO SHOOT AT THE TARGET UNTIL IT IS"
    0x60147bee12d0 ----------   01160  PRINT "DESTROYED!"
    0x60147bee1330 ----------   01170  PRINT
    0x60147bee1450 ----------   01180  PRINT "GOOD LUCK!!"
    0x60147bee14b0 ----------   01190  PRINT
    0x60147bee1560 ---------A   01200  PRINT
    0x60147bee1aa0 ----------   01210  A=RND(1)*2*P
    0x60147bee1fd0 ----------   01220  B=RND(1)*2*P
    0x60147bee2480 ----------   01230  Q=INT(A*R1)
    0x60147bee29a0 ---------A   01240  W=INT(B*R1)
    0x60147bee2e20 ---------A   01250  PRINT "RADIANS FROM X AXIS =";A;"   FROM Z AXIS =";B
    0x60147bee34a0 ----------   01260  P1=100000*RND(1)+RND(1)
    0x60147bee3b70 ----------   01270  X=SIN(B)*COS(A)*P1
    0x60147bee4260 ---------A   01280  Y=SIN(B)*SIN(A)*P1
    0x60147bee4790 ---------A   01290  Z=COS(B)*P1
    0x60147bee4de0 ---------A   01300  PRINT "TARGET SIGHTED: APPROXIMATE COORDINATES:  X=";X;"  Y=";Y;"  Z=";Z
    0x60147bee5100 ----------   01310  R=R+1
    0x60147bee5330 ---------A   01320  IF R>5 THEN 1430
    0x60147bee5830 ---------A   01330  ON R GOTO 1350,11410,1390,370,1420
    0x60147bee5df0 ----------   01340  P3=INT(P1*.05)*20
    0x60147bee5e40 ---------A   01350  GOTO 1430
    0x60147bee6330 ----------   01360  P3=INT(P1*.1)*10
    0x60147bee6380 ---------A   01370  GOTO 1430
    0x60147bee6870 ----------   01380  P3=INT(P1*.5)*2
    0x60147bee68c0 ---------A   01390  GOTO 1430
    0x60147bee6bb0 ----------   01400  P3=INT(P1)
    0x60147bee6c20 ---------A   01410  GOTO 1430
    0x60147bee6e30 ---------A   01420  P3=P1
    0x60147bee70d0 ---------A   01430  PRINT "     ESTIMATED DISTANCE:";P3
    0x60147bee7130 ----------   01440  PRINT
    0x60147bee72e0 ---------A   01450  PRINT "INPUT ANGLE DEVIATION FROM X, DEVIATION FROM Z, DISTANCE";
    0x60147bee7870 ---------A   01460  INPUT A1,B1,P2
    0x60147bee78d0 ----------   01470  PRINT
    0x60147bee7c60 ----------   01480  IF P2<20 THEN PRINT "YOU BLEW YOURSELF UP!!"
    0x60147bee7d10 ---------A   01490  GOTO 1700
    0x60147bee8040 ----------   01500  A1=A1/R1
    0x60147bee8370 ----------   01510  B1=B1/R1
    0x60147bee86f0 ----------   01520  PRINT "RADIANS FROM X AXIS =";A1;"  ";
    0x60147bee8980 ----------   01530  PRINT "FROM Z AXIS =";B1
    0x60147bee9060 ----------   01540  X1=P2*SIN(B1)*COS(A1)
    0x60147bee9730 ----------   01550  Y1=P2*SIN(B1)*SIN(A1)
    0x60147bee9c40 ----------   01560  Z1=P2*COS(B1)
    0x60147beeab10 ----------   01570  D=((X1-X)^2+(Y1-Y)^2+(Z1-Z)^2)^(1/2)
    0x60147beeafa0 ----------   01580  IF D>20 THEN 1750
    0x60147beeb000 ----------   01590  PRINT
    0x60147beeb160 ----------   01600  PRINT " * * * HIT * * *   TARGET IS NON-FUNCTIONAL"
    0x60147beeb210 ----------   01610  PRINT
    0x60147beeb5a0 ----------   01620  PRINT "DISTANCE OF EXPLOSION FROM TARGET WAS";D;"KILOMETERS."
    0x60147beeb600 ----------   01630  PRINT
    0x60147beeb9a0 ----------   01640  PRINT "MISSION ACCOMPLISHED IN ";R;" SHOTS."
    0x60147beebba0 ----------   01650  R=0
    0x60147beebf10 ----------   01660  FOR I=1 TO 5
    0x60147beebf70 ----------   01670  PRINT
    0x60147beec0b0 ----------   01680  NEXT I
    0x60147beec1e0 ----------   01690  PRINT "NEXT TARGET..."
    0x60147beec260 ---------A   01700  PRINT
    0x60147beec300 ---------A   01710  GOTO 1240
    0x60147beec6f0 ----------   01720  X2=X1-X
    0x60147beecae0 ----------   01730  Y2=Y1-Y
    0x60147beeced0 ----------   01740  Z2=Z1-Z
    0x60147beed150 ----------   01750  IF X2<0 THEN 1780
    0x60147beed4a0 ----------   01760  PRINT "SHOT IN FRONT OF TARGET";X2;"KILOMETERS."
    0x60147beed540 ----------   01770  GOTO 1790
    0x60147beed890 ----------   01780  PRINT "SHOT BEHIND TARGET";-X2;"KILOMETERS."
    0x60147beedb20 ----------   01790  IF Y2<0 THEN 1820
    0x60147beede70 ----------   01800  PRINT "SHOT TO LEFT OF TARGET";Y2;"KILOMETERS."
    0x60147beedf10 ----------   01810  GOTO 1830
    0x60147beee270 ----------   01820  PRINT "SHOT TO RIGHT OF TARGET";-Y2;"KILOMETERS."
    0x60147beee500 ----------   01830  IF Z2<0 THEN 1860
    0x60147beee840 ----------   01840  PRINT "SHOT ABOVE TARGET";Z2;"KILOMETERS."
    0x60147beee8e0 ----------   01850  GOTO 1870
    0x60147beeec60 ----------   01860  PRINT "SHOT BELOW TARGET";-Z2;"KILOMETERS."
    0x60147beef310 ----------   01870  PRINT "APPROX POSITION OF EXPLOSION:  X=";X1;"   Y=";Y1;"   Z=";Z1
    0x60147beef560 ----------   01880  PRINT "     DISTANCE FROM TARGET =";D
    0x60147beef5c0 ----------   01890  PRINT
    0x60147beef620 ----------   01900  PRINT
    0x60147beef680 ----------   01910  PRINT
    0x60147beef700 ----------   01920  GOTO 1320
    0x60147beef750 ---------A   01930  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01500 - 10000    8510 

 */



/*
 *  Symbol Table Listing for 'basic/target.bas'
 *
    A                        Integer     
    A1                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B1                       Integer     
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
    P                        Integer     
    P1                       Integer     
    P2                       Integer     
    P3                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    R                        Integer     
    R1                       Integer     
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
    W                        Integer     
    X                        Integer     
    X1                       Integer     
    X2                       Integer     
    Y                        Integer     
    Y1                       Integer     
    Y2                       Integer     
    Z                        Integer     
    Z1                       Integer     
    Z2                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/target.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60147bed86d0 ---------A   01000  PRINT TAB(33);"TARGET"
    0x60147bed8670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60147bec92b0 ---------A   01020  PRINT
    0x60147bed89e0 ---------A   01030  PRINT
    0x60147bed87f0 ---------A   01040  PRINT
    0x60147bed9b80 ---------A   01050  R=1
    0x60147bedaf30 ---------A   01060  R1=57.296
    0x60147bedaff0 ---------A   01070  P=3.14159
    0x60147bed9620 ---------A   01080  PRINT "YOU ARE THE WEAPONS OFFICER ON THE STARSHIP ENTERPRISE"
    0x60147bed97e0 ---------A   01090  PRINT "AND THIS IS A TEST TO SEE HOW ACCURATE A SHOT YOU"
    0x60147bee0970 ---------A   01100  PRINT "ARE IN A THREE-DIMENSIONAL RANGE.  YOU WILL BE TOLD"
    0x60147bee0b20 ---------A   01110  PRINT "THE RADIAN OFFSET FOR THE X AND Z AXES, THE LOCATION"
    0x60147bee0ce0 ---------A   01120  PRINT "OF THE TARGET IN THREE DIMENSIONAL RECTANGULAR COORDINATES,"
    0x60147bee0e40 ---------A   01130  PRINT "THE APPROXIMATE NUMBER OF DEGREES FROM THE X AND Z"
    0x60147bee0ff0 ---------A   01140  PRINT "AXES, AND THE APPROXIMATE DISTANCE TO THE TARGET."
    0x60147bee11b0 ---------A   01150  PRINT "YOU WILL THEN PROCEEED TO SHOOT AT THE TARGET UNTIL IT IS"
    0x60147bee12d0 ---------A   01160  PRINT "DESTROYED!"
    0x60147bee1330 ---------A   01170  PRINT
    0x60147bee1450 ---------A   01180  PRINT "GOOD LUCK!!"
    0x60147bee14b0 ---------A   01190  PRINT
    0x60147bee1560 ---------A   01200  PRINT
    0x60147bee1aa0 ---------A   01210  A=RND(1)*2*P
    0x60147bee1fd0 ---------A   01220  B=RND(1)*2*P
    0x60147bee2480 ---------A   01230  Q=INT(A*R1)
    0x60147bee29a0 ---------A T 01240  W=INT(B*R1)
    0x60147bee2e20 ---------A   01250  PRINT "RADIANS FROM X AXIS =";A;"   FROM Z AXIS =";B
    0x60147bee34a0 ---------A   01260  P1=100000*RND(1)+RND(1)
    0x60147bee3b70 ---------A   01270  X=SIN(B)*COS(A)*P1
    0x60147bee4260 ---------A   01280  Y=SIN(B)*SIN(A)*P1
    0x60147bee4790 ---------A   01290  Z=COS(B)*P1
    0x60147bee4de0 ---------A   01300  PRINT "TARGET SIGHTED: APPROXIMATE COORDINATES:  X=";X;"  Y=";Y;"  Z=";Z
    0x60147bee5100 ---------A   01310  R=R+1
    0x60147bee5330 ---------A   01320  IF R>5 THEN 1400
    0x60147bee5830 ---------A   01330  ON R GOTO 1350,11380,1370,370,1390
    0x60147bee5df0 ---------A   01340  P3=INT(P1*.05)*20
    0x60147bee5e40 ---------A T 01350  GOTO 1400
    0x60147bee6380 ---------A T 01360  GOTO 1400
    0x60147bee68c0 ---------A T 01370  GOTO 1400
    0x60147bee6c20 ---------A T 01380  GOTO 1400
    0x60147bee6e30 ---------A T 01390  P3=P1
    0x60147bee70d0 ---------A T 01400  PRINT "     ESTIMATED DISTANCE:";P3
    0x60147bee7130 ---------A   01410  PRINT
    0x60147bee72e0 ---------A   01420  PRINT "INPUT ANGLE DEVIATION FROM X, DEVIATION FROM Z, DISTANCE";
    0x60147bee7870 ---------A   01430  INPUT A1,B1,P2
    0x60147bee78d0 ---------A   01440  PRINT
    0x60147bee7c60 ---------A   01450  IF P2<20 THEN PRINT "YOU BLEW YOURSELF UP!!"
    0x60147bee7d10 ---------A   01460  GOTO 1470
    0x60147beec260 ---------A T 01470  PRINT
    0x60147beec300 ---------A   01480  GOTO 1240
    0x60147beef750 ---------A   01490  END
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
int    A1_int;                                    // Basic: A1 
int    B_int;                                     // Basic: B 
int    B1_int;                                    // Basic: B1 
int    D_int;                                     // Basic: D 
int    I_int;                                     // Basic: I 
int    P_int;                                     // Basic: P 
int    P1_int;                                    // Basic: P1 
int    P2_int;                                    // Basic: P2 
int    P3_int;                                    // Basic: P3 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    X1_int;                                    // Basic: X1 
int    X2_int;                                    // Basic: X2 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Y2_int;                                    // Basic: Y2 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
int    Z2_int;                                    // Basic: Z2 
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
    // 01000 PRINT TAB(33);"TARGET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"TARGET");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 R=1
    R_int = 1;
    // 01060 R1=57.296
    R1_int = 57.3;
    // 01070 P=3.14159
    P_int = 3.14;
    // 01080 PRINT "YOU ARE THE WEAPONS OFFICER ON THE STARSHIP ENTERPRISE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE THE WEAPONS OFFICER ON THE STARSHIP ENTERPRISE");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "AND THIS IS A TEST TO SEE HOW ACCURATE A SHOT YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND THIS IS A TEST TO SEE HOW ACCURATE A SHOT YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "ARE IN A THREE-DIMENSIONAL RANGE.  YOU WILL BE TOLD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ARE IN A THREE-DIMENSIONAL RANGE.  YOU WILL BE TOLD");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "THE RADIAN OFFSET FOR THE X AND Z AXES, THE LOCATION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE RADIAN OFFSET FOR THE X AND Z AXES, THE LOCATION");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "OF THE TARGET IN THREE DIMENSIONAL RECTANGULAR COORDINATES,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF THE TARGET IN THREE DIMENSIONAL RECTANGULAR COORDINATES,");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "THE APPROXIMATE NUMBER OF DEGREES FROM THE X AND Z"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE APPROXIMATE NUMBER OF DEGREES FROM THE X AND Z");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "AXES, AND THE APPROXIMATE DISTANCE TO THE TARGET."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AXES, AND THE APPROXIMATE DISTANCE TO THE TARGET.");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "YOU WILL THEN PROCEEED TO SHOOT AT THE TARGET UNTIL IT IS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WILL THEN PROCEEED TO SHOOT AT THE TARGET UNTIL IT IS");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "DESTROYED!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DESTROYED!");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT "GOOD LUCK!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01210 A=RND(1)*2*P
    A_int = RND(1)*2*P_int;
    // 01220 B=RND(1)*2*P
    B_int = RND(1)*2*P_int;
    // 01230 Q=INT(A*R1)
    Q_int = INT(A_int*R1_int);

  Lbl_01240:
    // 01240 W=INT(B*R1)
    W_int = INT(B_int*R1_int);
    // 01250 PRINT "RADIANS FROM X AXIS =";A;"   FROM Z AXIS =";B
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RADIANS FROM X AXIS ="); b2c_INT(buf,A_int);strcat(buf,"   FROM Z AXIS ="); b2c_INT(buf,B_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01260 P1=100000*RND(1)+RND(1)
    P1_int = 100000*RND(1)+RND(1);
    // 01270 X=SIN(B)*COS(A)*P1
    X_int = SIN(B_int)*COS(A_int)*P1_int;
    // 01280 Y=SIN(B)*SIN(A)*P1
    Y_int = SIN(B_int)*SIN(A_int)*P1_int;
    // 01290 Z=COS(B)*P1
    Z_int = COS(B_int)*P1_int;
    // 01300 PRINT "TARGET SIGHTED: APPROXIMATE COORDINATES:  X=";X;"  Y=";Y;"  Z=";Z
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TARGET SIGHTED: APPROXIMATE COORDINATES:  X="); b2c_INT(buf,X_int);strcat(buf,"  Y="); b2c_INT(buf,Y_int);strcat(buf,"  Z="); b2c_INT(buf,Z_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01310 R=R+1
    R_int = R_int+1;
    // 01320 IF R>5 THEN 1400
    if(R_int>5)goto Lbl_01400;
    // 01330 ON R GOTO 1350,11380,1370,370,1390
    switch((int)(R_int)){
        case 1: goto Lbl_01350;
        case 2: goto Lbl_01360;
        case 3: goto Lbl_01370;
        case 4: goto Lbl_01380;
        case 5: goto Lbl_01390;
        default: break; 
    };
    // 01340 P3=INT(P1*.05)*20
    P3_int = INT(P1_int*0.05)*20;

  Lbl_01350:
    // 01350 GOTO 1400
    goto Lbl_01400;

  Lbl_01360:
    // 01360 GOTO 1400
    goto Lbl_01400;

  Lbl_01370:
    // 01370 GOTO 1400
    goto Lbl_01400;

  Lbl_01380:
    // 01380 GOTO 1400
    goto Lbl_01400;

  Lbl_01390:
    // 01390 P3=P1
    P3_int = P1_int;

  Lbl_01400:
    // 01400 PRINT "     ESTIMATED DISTANCE:";P3
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     ESTIMATED DISTANCE:"); b2c_INT(buf,P3_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT "INPUT ANGLE DEVIATION FROM X, DEVIATION FROM Z, DISTANCE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INPUT ANGLE DEVIATION FROM X, DEVIATION FROM Z, DISTANCE");fputs(buf,fh); };
    // 01430 INPUT A1,B1,P2
    // Start of Basic INPUT statement 01430
    {
        int numargs=3;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A1_int,args,0)) ||
                (err += b2c_strtoi(&B1_int,args,1)) ||
                (err += b2c_strtoi(&P2_int,args,2)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01430
    // 01440 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01450 IF P2<20 THEN PRINT "YOU BLEW YOURSELF UP!!"
    if(P2_int<20) {
    }
    // 01460 GOTO 1470
    goto Lbl_01470;

  Lbl_01470:
    // 01470 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01480 GOTO 1240
    goto Lbl_01240;
    // 01490 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
