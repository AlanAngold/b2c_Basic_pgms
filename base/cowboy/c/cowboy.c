/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/cowboy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b27fa362db0 ---------A   01000 RANDOMIZE
    0x5b27fa361b80 ---------A   01010 PRINT TAB(26);"CORRAL"
    0x5b27fa362f30 ---------A   01020 PRINT TAB(20);"CREATIVE COMPUTING"
    0x5b27fa362e70 ---------A   01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5b27fa362ff0 ---------A   01040 PRINT
    0x5b27fa3625e0 ---------A   01050 PRINT
    0x5b27fa3609e0 ---------A   01060 PRINT
    0x5b27fa362b20 ---------A   01070 DIM A(21)
    0x5b27fa360ca0 ---------A   01080 DIM S(2,9)
    0x5b27fa3606d0 ---------A   01090 FOR I=1 TO 2
    0x5b27fa360670 ---------A   01100     FOR J=0 TO 9
    0x5b27fa368d40 ---------A   01110         READ S(I,J)
    0x5b27fa368e60 ---------A   01120     NEXT J
    0x5b27fa368fa0 ---------A   01130 NEXT I
    0x5b27fa3630b0 ---------A   01140 DATA 0,1,2,3,3,2,2,1,0,-1
    0x5b27fa36a1b0 ---------A   01150 DATA 1,2,3,4,5,4,3,2,1,0
    0x5b27fa36a350 ---------A   01160 PRINT "  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"
    0x5b27fa36a4a0 ---------A   01170 PRINT "DO YOU WANT FULL INSTRUCTIONS";
    0x5b27fa36a6c0 ---------A   01180 INPUT F$
    0x5b27fa36ab10 ---------A   01190 IF LEFT$(F$,1)="N" THEN 1260
    0x5b27fa36acc0 ---------A   01200 PRINT "YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."
    0x5b27fa36ae60 ---------A   01210 PRINT "IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"
    0x5b27fa36b000 ---------A   01220 PRINT "HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"
    0x5b27fa36b1b0 ---------A   01230 PRINT "WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"
    0x5b27fa36b330 ---------A   01240 PRINT "IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"
    0x5b27fa36b3d0 ---------A   01250 PRINT
    0x5b27fa36b550 ---------A T 01260 PRINT "AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"
    0x5b27fa36b820 ---------A T 01270 C=1
    0x5b27fa36baf0 ---------A   01280 L=1
    0x5b27fa36bdc0 ---------A   01290 K=0
    0x5b27fa36c090 ---------A   01300 M=0
    0x5b27fa36c360 ---------A   01310 N=0
    0x5b27fa36c840 ---------A   01320 D9=RND(1)+1.5
    0x5b27fa36d0d0 ---------A   01330 PRINT "LEVEL OF DIFFICULTY (0-10) :"10-INT((D9-1.5)*10)
    0x5b27fa36d140 ---------A   01340 GOSUB 2120
    0x5b27fa36d440 ---------A   01350 IF R<=5 THEN 1370
    0x5b27fa36d740 ---------A   01360 Q=-Q
    0x5b27fa36db30 ---------A T 01370 H=13+Q
    0x5b27fa36dba0 ---------A   01380 GOSUB 2170
    0x5b27fa36e040 ---------A   01390 T=2+P
    0x5b27fa36e0b0 ---------A   01400 PRINT
    0x5b27fa36e3a0 ---------A T 01410 B$="            "
    0x5b27fa36e670 ---------A T 01420 FOR J=1 TO 21
    0x5b27fa36e970 ---------A   01430     A(J)=32
    0x5b27fa36eaa0 ---------A   01440 NEXTJ
    0x5b27fa36eda0 ---------A   01450 A(C)=67
    0x5b27fa36f090 ---------A   01460 A(H)=72
    0x5b27fa36f300 ---------A   01470 PRINT N,"I";
    0x5b27fa36f5e0 ---------A   01480 FOR J=1 TO 21
    0x5b27fa36f920 ---------A   01490     PRINT CHR$(A(J));
    0x5b27fa36fa50 ---------A   01500 NEXT J
    0x5b27fa36fcd0 ---------A   01510 PRINT "I",B$;
    0x5b27fa3701c0 ---------A   01520 X=ABS(H-C)
    0x5b27fa3705f0 ---------A   01530 L=SGN(H-C)
    0x5b27fa370920 ---------A   01540 N=N+1
    0x5b27fa370b50 ---------A   01550 IF K>0 GOTO 2030
    0x5b27fa370db0 ---------A T 01560 IF N>100 GOTO 2410
    0x5b27fa370ff0 ---------A   01570 INPUT D$
    0x5b27fa3712d0 ---------A   01580 CHANGE D$ TO Z
    0x5b27fa371500 ---------A   01590 DIM Z(10)
    0x5b27fa3719a0 ---------A   01600 D=Z(1)-48
    0x5b27fa371bf0 ---------A   01610 IF D>0 THEN 1630
    0x5b27fa371c70 ---------A   01620 GOTO1640
    0x5b27fa371e90 ---------A T 01630 IF D<6 GOTO 1670
    0x5b27fa372120 ---------A T 01640 IF D=0 THEN 2370
    0x5b27fa3726c0 ---------A   01650 PRINT "ILLEGAL MOVE .TRY AGAIN",
    0x5b27fa372730 ---------A   01660 GOTO 1560
    0x5b27fa372c50 ---------A T 01670 E=C+L*D
    0x5b27fa372ea0 ---------A   01680 IF E<1 THEN 1640
    0x5b27fa373100 ---------A   01690 IF E>21 THEN 1640
    0x5b27fa373340 ---------A   01700 C=E
    0x5b27fa3733b0 ---------A   01710 GOSUB 2120
    0x5b27fa373690 ---------A   01720 G=P
    0x5b27fa373b00 ---------A   01730 H=H+L*G
    0x5b27fa373b70 ---------A   01740 GOSUB 2170
    0x5b27fa373ed0 ---------A   01750 IF X<2*D THEN 1770
    0x5b27fa373f50 ---------A   01760 GOTO 1780
    0x5b27fa374170 ---------A T 01770 IF D>1 GOTO 1840
    0x5b27fa3743f0 ---------A T 01780 IF H>1 THEN 1800
    0x5b27fa374470 ---------A   01790 GOTO 1810
    0x5b27fa3746b0 ---------A T 01800 IF H<20 THEN 1930
    0x5b27fa374730 ---------A T 01810 GOSUB 2120
    0x5b27fa374950 ---------A   01820 IF R>2 GOTO 1930
    0x5b27fa374bb0 ---------A   01830 IF X>7 GOTO 1410
    0x5b27fa375010 ---------A T 01840 G=9+2*G
    0x5b27fa375480 ---------A   01850 H=H-L*G
    0x5b27fa3756b0 ---------A   01860 L=-L
    0x5b27fa375730 ---------A   01870 GOSUB 2170
    0x5b27fa375b70 ---------A   01880 IF ABS(H-C)>1 THEN 1910
    0x5b27fa375fd0 ---------A   01890 H=H-3*L
    0x5b27fa376040 ---------A   01900 GOSUB 2170
    0x5b27fa376260 ---------A T 01910 B$="BOLTED      "
    0x5b27fa3762e0 ---------A   01920 GOTO 1420
    0x5b27fa376700 ---------A T 01930 IF ABS(H-C)>2 GOTO 1410
    0x5b27fa3767a0 ---------A   01940 GOSUB 2120
    0x5b27fa376aa0 ---------A   01950 IF R1>D9 GOTO 2100
    0x5b27fa376b40 ---------A   01960 GOSUB 2120
    0x5b27fa376e60 ---------A   01970 K=P+2
    0x5b27fa377190 ---------A   01980 M=M+1
    0x5b27fa3775e0 ---------A   01990 H=H-5*L
    0x5b27fa377650 ---------A   02000 GOSUB 2170
    0x5b27fa377870 ---------A   02010 B$="KICKED"
    0x5b27fa3778e0 ---------A   02020 GOTO 1420
    0x5b27fa377b20 ---------A T 02030 IF M>T GOTO 2220
    0x5b27fa377e80 ---------A   02040 K=K-1
    0x5b27fa377ef0 ---------A   02050 PRINT
    0x5b27fa377f60 ---------A   02060 GOSUB 2120
    0x5b27fa378500 ---------A   02070 H=H+L*(P+1)
    0x5b27fa378570 ---------A   02080 GOSUB 2170
    0x5b27fa3785d0 ---------A   02090 GOTO1410
    0x5b27fa378830 ---------A T 02100 IF H=C THEN 2260
    0x5b27fa3788b0 ---------A   02110 GOTO 1410
    0x5b27fa378dd0 ---------B G 02120 R1=(8*RND(1)+1)
    0x5b27fa3790e0 ---------B   02130 R=INT(R1)
    0x5b27fa3794b0 ---------B   02140 P=S(1,R)
    0x5b27fa379880 ---------B   02150 Q=S(2,R)
    0x5b27fa3798d0 ---------B   02160 RETURN
    0x5b27fa379b30 ---------C G 02170 IF H>=1 THEN 2190
    0x5b27fa379d50 ---------C   02180 H=1
    0x5b27fa379fa0 ---------C T 02190 IF H<=21 THEN 2210
    0x5b27fa37a1c0 ---------C   02200 H=21
    0x5b27fa37a210 ---------C T 02210 RETURN
    0x5b27fa37a2b0 ---------A T 02220 PRINT 
    0x5b27fa37a430 ---------A   02230 PRINT "THOSE KICKS LANDED YOU IN THE HOSPITAL!"
    0x5b27fa37a580 ---------A   02240 PRINT " GET WELL SOON!!"
    0x5b27fa37a5f0 ---------A   02250 GOTO 2370
    0x5b27fa37a8b0 ---------A T 02260 FOR J=1 TO 21
    0x5b27fa37abb0 ---------A   02270     A(J)=32
    0x5b27fa37ace0 ---------A   02280 NEXT J
    0x5b27fa37b7f0 ---------A   02290 A(C)=35
    0x5b27fa37b960 ---------A   02300 PRINT "I";
    0x5b27fa37bc40 ---------A   02310 FOR J=1 TO 21
    0x5b27fa37bf80 ---------A   02320     PRINT CHR$(A(J));
    0x5b27fa37c0b0 ---------A   02330 NEXT J
    0x5b27fa37c210 ---------A   02340 PRINT "I"
    0x5b27fa37c2b0 ---------A   02350 PRINT
    0x5b27fa37c430 ---------A   02360 PRINT "YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"
    0x5b27fa37c5a0 ---------A T 02370 PRINT "ANOTHER ROUNDUP";
    0x5b27fa37c700 ---------A   02380 INPUT F$
    0x5b27fa37cb20 ---------A   02390 IF LEFT$(F$,1)="Y" THEN 1270
    0x5b27fa37cba0 ---------A   02400 GOTO 2440
    0x5b27fa37cc20 ---------A T 02410 PRINT 
    0x5b27fa37cd90 ---------A   02420 PRINT "ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"
    0x5b27fa37ce00 ---------A   02430 GOTO 2370
    0x5b27fa37ce40 ---------A T 02440 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01260      01190T
     01270      02390T
     01370      01350T
     01410      01830T, 01930T, 02090T, 02110T
     01420      01920T, 02020T
     01560      01660T
     01630      01610T
     01640      01620T, 01680T, 01690T
     01670      01630T
     01770      01750T
     01780      01760T
     01800      01780T
     01810      01790T
     01840      01770T
     01910      01880T
     01930      01800T, 01820T
     02030      01550T
     02100      01950T
     02120      01340G, 01710G, 01810G, 01940G, 01960G, 02060G
     02170      01380G, 01740G, 01870G, 01900G, 02000G, 02080G
     02190      02170T
     02210      02190T
     02220      02030T
     02260      02100T
     02370      01640T, 02250T, 02430T
     02410      01560T
     02440      02400T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5b27fa362db0 (01000)   0x5b27fa362db0 (01000)   0x5b27fa37ce40 (02440)   0x5b27fa37ce40 (02440)   
   B) 0x5b27fa378dd0 (02120)   0x5b27fa378dd0 (02120)   0x5b27fa3798d0 (02160)   0x5b27fa3798d0 (02160)   
   C) 0x5b27fa379b30 (02170)   0x5b27fa379b30 (02170)   0x5b27fa37a210 (02210)   0x5b27fa37a210 (02210)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02470 - 10000    7540 

 */



/*
 *  Symbol Table Listing for 'basic/cowboy.bas'
 *
    A               Array    Integer         {0,20} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$                       String      
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
    D$                       String      
    D9                       Integer     
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F$                       String      
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
    L                        Integer     
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
    Q                        Integer     
    R                        Integer     
    R1                       Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,1} {0,8} 
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/cowboy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b27fa362db0 ---------A   01000 RANDOMIZE
    0x5b27fa361b80 ---------A   01010 PRINT TAB(26);"CORRAL"
    0x5b27fa362f30 ---------A   01020 PRINT TAB(20);"CREATIVE COMPUTING"
    0x5b27fa362e70 ---------A   01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5b27fa362ff0 ---------A   01040 PRINT
    0x5b27fa3625e0 ---------A   01050 PRINT
    0x5b27fa3609e0 ---------A   01060 PRINT
    0x5b27fa362b20 ---------A   01070 DIM A(21)
    0x5b27fa360ca0 ---------A   01080 DIM S(2,9)
    0x5b27fa3606d0 ---------A   01090 FOR I=1 TO 2
    0x5b27fa360670 ---------A   01100     FOR J=0 TO 9
    0x5b27fa368d40 ---------A   01110         READ S(I,J)
    0x5b27fa368e60 ---------A   01120     NEXT J
    0x5b27fa368fa0 ---------A   01130 NEXT I
    0x5b27fa3630b0 ---------A   01140 DATA 0,1,2,3,3,2,2,1,0,-1
    0x5b27fa36a1b0 ---------A   01150 DATA 1,2,3,4,5,4,3,2,1,0
    0x5b27fa36a350 ---------A   01160 PRINT "  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"
    0x5b27fa36a4a0 ---------A   01170 PRINT "DO YOU WANT FULL INSTRUCTIONS";
    0x5b27fa36a6c0 ---------A   01180 INPUT F$
    0x5b27fa36ab10 ---------A   01190 IF LEFT$(F$,1)="N" THEN 1260
    0x5b27fa36acc0 ---------A   01200 PRINT "YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."
    0x5b27fa36ae60 ---------A   01210 PRINT "IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"
    0x5b27fa36b000 ---------A   01220 PRINT "HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"
    0x5b27fa36b1b0 ---------A   01230 PRINT "WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"
    0x5b27fa36b330 ---------A   01240 PRINT "IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"
    0x5b27fa36b3d0 ---------A   01250 PRINT
    0x5b27fa36b550 ---------A T 01260 PRINT "AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"
    0x5b27fa36b820 ---------A T 01270 C=1
    0x5b27fa36baf0 ---------A   01280 L=1
    0x5b27fa36bdc0 ---------A   01290 K=0
    0x5b27fa36c090 ---------A   01300 M=0
    0x5b27fa36c360 ---------A   01310 N=0
    0x5b27fa36c840 ---------A   01320 D9=RND(1)+1.5
    0x5b27fa36d0d0 ---------A   01330 PRINT "LEVEL OF DIFFICULTY (0-10) :"10-INT((D9-1.5)*10)
    0x5b27fa36d140 ---------A   01340 GOSUB 2350
    0x5b27fa36d440 ---------A   01350 IF R<=5 THEN 1370
    0x5b27fa36d740 ---------A   01360 Q=-Q
    0x5b27fa36db30 ---------A T 01370 H=13+Q
    0x5b27fa36dba0 ---------A   01380 GOSUB 2410
    0x5b27fa36e040 ---------A   01390 T=2+P
    0x5b27fa36e0b0 ---------A   01400 PRINT
    0x5b27fa36e3a0 ---------A T 01410 B$="            "
    0x5b27fa36e670 ---------A T 01420 FOR J=1 TO 21
    0x5b27fa36e970 ---------A   01430     A(J)=32
    0x5b27fa36eaa0 ---------A   01440 NEXTJ
    0x5b27fa36eda0 ---------A   01450 A(C)=67
    0x5b27fa36f090 ---------A   01460 A(H)=72
    0x5b27fa36f300 ---------A   01470 PRINT N,"I";
    0x5b27fa36f5e0 ---------A   01480 FOR J=1 TO 21
    0x5b27fa36f920 ---------A   01490     PRINT CHR$(A(J));
    0x5b27fa36fa50 ---------A   01500 NEXT J
    0x5b27fa36fcd0 ---------A   01510 PRINT "I",B$;
    0x5b27fa3701c0 ---------A   01520 X=ABS(H-C)
    0x5b27fa3705f0 ---------A   01530 L=SGN(H-C)
    0x5b27fa370920 ---------A   01540 N=N+1
    0x5b27fa370b50 ---------A   01550 IF K>0 GOTO 2030
    0x5b27fa370db0 ---------A T 01560 IF N>100 GOTO 2310
    0x5b27fa370ff0 ---------A   01570 INPUT D$
    0x5b27fa3712d0 ---------A   01580 CHANGE D$ TO Z
    0x5b27fa371500 ---------A   01590 DIM Z(10)
    0x5b27fa3719a0 ---------A   01600 D=Z(1)-48
    0x5b27fa371bf0 ---------A   01610 IF D>0 THEN 1630
    0x5b27fa371c70 ---------A   01620 GOTO1640
    0x5b27fa371e90 ---------A T 01630 IF D<6 GOTO 1670
    0x5b27fa372120 ---------A T 01640 IF D=0 THEN 2270
    0x5b27fa3726c0 ---------A   01650 PRINT "ILLEGAL MOVE .TRY AGAIN",
    0x5b27fa372730 ---------A   01660 GOTO 1560
    0x5b27fa372c50 ---------A T 01670 E=C+L*D
    0x5b27fa372ea0 ---------A   01680 IF E<1 THEN 1640
    0x5b27fa373100 ---------A   01690 IF E>21 THEN 1640
    0x5b27fa373340 ---------A   01700 C=E
    0x5b27fa3733b0 ---------A   01710 GOSUB 2350
    0x5b27fa373690 ---------A   01720 G=P
    0x5b27fa373b00 ---------A   01730 H=H+L*G
    0x5b27fa373b70 ---------A   01740 GOSUB 2410
    0x5b27fa373ed0 ---------A   01750 IF X<2*D THEN 1770
    0x5b27fa373f50 ---------A   01760 GOTO 1780
    0x5b27fa374170 ---------A T 01770 IF D>1 GOTO 1840
    0x5b27fa3743f0 ---------A T 01780 IF H>1 THEN 1800
    0x5b27fa374470 ---------A   01790 GOTO 1810
    0x5b27fa3746b0 ---------A T 01800 IF H<20 THEN 1930
    0x5b27fa374730 ---------A T 01810 GOSUB 2350
    0x5b27fa374950 ---------A   01820 IF R>2 GOTO 1930
    0x5b27fa374bb0 ---------A   01830 IF X>7 GOTO 1410
    0x5b27fa375010 ---------A T 01840 G=9+2*G
    0x5b27fa375480 ---------A   01850 H=H-L*G
    0x5b27fa3756b0 ---------A   01860 L=-L
    0x5b27fa375730 ---------A   01870 GOSUB 2410
    0x5b27fa375b70 ---------A   01880 IF ABS(H-C)>1 THEN 1910
    0x5b27fa375fd0 ---------A   01890 H=H-3*L
    0x5b27fa376040 ---------A   01900 GOSUB 2410
    0x5b27fa376260 ---------A T 01910 B$="BOLTED      "
    0x5b27fa3762e0 ---------A   01920 GOTO 1420
    0x5b27fa376700 ---------A T 01930 IF ABS(H-C)>2 GOTO 1410
    0x5b27fa3767a0 ---------A   01940 GOSUB 2350
    0x5b27fa376aa0 ---------A   01950 IF R1>D9 GOTO 2100
    0x5b27fa376b40 ---------A   01960 GOSUB 2350
    0x5b27fa376e60 ---------A   01970 K=P+2
    0x5b27fa377190 ---------A   01980 M=M+1
    0x5b27fa3775e0 ---------A   01990 H=H-5*L
    0x5b27fa377650 ---------A   02000 GOSUB 2410
    0x5b27fa377870 ---------A   02010 B$="KICKED"
    0x5b27fa3778e0 ---------A   02020 GOTO 1420
    0x5b27fa377b20 ---------A T 02030 IF M>T GOTO 2120
    0x5b27fa377e80 ---------A   02040 K=K-1
    0x5b27fa377ef0 ---------A   02050 PRINT
    0x5b27fa377f60 ---------A   02060 GOSUB 2350
    0x5b27fa378500 ---------A   02070 H=H+L*(P+1)
    0x5b27fa378570 ---------A   02080 GOSUB 2410
    0x5b27fa3785d0 ---------A   02090 GOTO1410
    0x5b27fa378830 ---------A T 02100 IF H=C THEN 2160
    0x5b27fa3788b0 ---------A   02110 GOTO 1410
    0x5b27fa37a2b0 ---------A T 02120 PRINT 
    0x5b27fa37a430 ---------A   02130 PRINT "THOSE KICKS LANDED YOU IN THE HOSPITAL!"
    0x5b27fa37a580 ---------A   02140 PRINT " GET WELL SOON!!"
    0x5b27fa37a5f0 ---------A   02150 GOTO 2270
    0x5b27fa37a8b0 ---------A T 02160 FOR J=1 TO 21
    0x5b27fa37abb0 ---------A   02170     A(J)=32
    0x5b27fa37ace0 ---------A   02180 NEXT J
    0x5b27fa37b7f0 ---------A   02190 A(C)=35
    0x5b27fa37b960 ---------A   02200 PRINT "I";
    0x5b27fa37bc40 ---------A   02210 FOR J=1 TO 21
    0x5b27fa37bf80 ---------A   02220     PRINT CHR$(A(J));
    0x5b27fa37c0b0 ---------A   02230 NEXT J
    0x5b27fa37c210 ---------A   02240 PRINT "I"
    0x5b27fa37c2b0 ---------A   02250 PRINT
    0x5b27fa37c430 ---------A   02260 PRINT "YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"
    0x5b27fa37c5a0 ---------A T 02270 PRINT "ANOTHER ROUNDUP";
    0x5b27fa37c700 ---------A   02280 INPUT F$
    0x5b27fa37cb20 ---------A   02290 IF LEFT$(F$,1)="Y" THEN 1270
    0x5b27fa37cba0 ---------A   02300 GOTO 2340
    0x5b27fa37cc20 ---------A T 02310 PRINT 
    0x5b27fa37cd90 ---------A   02320 PRINT "ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"
    0x5b27fa37ce00 ---------A   02330 GOTO 2270
    0x5b27fa37ce40 ---------A T 02340 END
    0x5b27fa378dd0 ---------B G 02350 R1=(8*RND(1)+1)
    0x5b27fa3790e0 ---------B   02360 R=INT(R1)
    0x5b27fa3794b0 ---------B   02370 P=S(1,R)
    0x5b27fa379880 ---------B   02380 Q=S(2,R)
    0x5b27fa3818a0 ---------B   02390 GOTO 02400
    0x5b27fa3818e0 ---------B T 02400 RETURN
    0x5b27fa379b30 ---------C G 02410 IF H>=1 THEN 2430
    0x5b27fa379d50 ---------C   02420 H=1
    0x5b27fa379fa0 ---------C T 02430 IF H<=21 THEN 2450
    0x5b27fa37a1c0 ---------C   02440 H=21
    0x5b27fa381920 ---------C T 02450 GOTO 02460
    0x5b27fa381980 ---------C T 02460 RETURN
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
char* data_01140s[]={"0","1","2","3","3","2","2","1","0","-1"};
char* data_01150s[]={"1","2","3","4","5","4","3","2","1","0"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1140, 10,data_01140s},
    { 1150, 10,data_01150s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[21];                             // Basic: A 
char*  B_str;                                     // Basic: B$ 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
char*  D_str;                                     // Basic: D$ 
int    D9_int;                                    // Basic: D9 
int    E_int;                                     // Basic: E 
char*  F_str;                                     // Basic: F$ 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    S_int_arr[2][9];                           // Basic: S 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02350();
void Routine_02410();

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

void Routine_02350(){
    // 02350 R1=(8*RND(1)+1)
    R1_int = (8*RND(1)+1);
    // 02360 R=INT(R1)
    R_int = INT(R1_int);
    // 02370 P=S(1,R)
    P_int = S_int_arr[1][R_int];
    // 02380 Q=S(2,R)
    Q_int = S_int_arr[2][R_int];
    // 02390 GOTO 02400
    goto Lbl_02400;

  Lbl_02400:
    // 02400 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02410(){
    // 02410 IF H>=1 THEN 2430
    if(H_int>=1)goto Lbl_02430;
    // 02420 H=1
    H_int = 1;

  Lbl_02430:
    // 02430 IF H<=21 THEN 2450
    if(H_int<=21)goto Lbl_02450;
    // 02440 H=21
    H_int = 21;

  Lbl_02450:
    // 02450 GOTO 02460
    goto Lbl_02460;

  Lbl_02460:
    // 02460 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 RANDOMIZE
    RANDOMIZE();
