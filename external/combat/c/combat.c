/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/combat.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6313c3878ac0 ---------A   00001 PRINT TAB(33);"COMBAT"
    0x6313c3879e70 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6313c38682b0 ---------A   00003 PRINT: PRINT: PRINT
    0x6313c3877730 ---------A   00004 PRINT "I AM AT WAR WITH YOU.": PRINT "WE HAVE 72000 SOLDIERS APIECE."
    0x6313c3879a50 ---------A T 00005 PRINT:PRINT "DISTRIBUTE YOUR FORCES."
    0x6313c3878440 ---------A   00006 PRINT ,"ME","  YOU"
    0x6313c387a040 ---------A   00007 PRINT "ARMY",30000,
    0x6313c3877610 ---------A   00008 INPUT A
    0x6313c387a170 ---------A   00009 PRINT "NAVY",20000,
    0x6313c38775b0 ---------A   00010 INPUT B
    0x6313c3877f80 ---------A   00011 PRINT "A. F.",22000,
    0x6313c387fce0 ---------A   00012 INPUT C
    0x6313c3880180 ---------A   00013 IF A+B+C>72000 THEN 5
    0x6313c3880460 ---------A   00014 D=30000
    0x6313c3880730 ---------A   00015 E=20000
    0x6313c3880a30 ---------A   00016 F=22000
    0x6313c3880b80 ---------A   00017 PRINT "YOU ATTACK FIRST. TYPE (1) FOR ARMY; (2) FOR NAVY;"
    0x6313c3880cb0 ---------A   00018 PRINT "AND (3) FOR AIR FORCE."
    0x6313c3880ec0 ---------A   00019 INPUT Y
    0x6313c3881020 ---------A T 00020 PRINT "HOW MANY MEN"
    0x6313c3881230 ---------A   00021 INPUT X
    0x6313c3881470 ---------A   00022 IF X<0 THEN 20
    0x6313c3881810 ---------A   00023 ON Y GOTO 100,200,300
    0x6313c3881a80 ---------A T 00100 IF X>A THEN 20
    0x6313c3881e00 ---------A   00105 IF X<A/3 THEN 120
    0x6313c3882280 ---------A   00110 IF X<2*A/3 THEN 150
    0x6313c3882320 ---------A   00115 GOTO 270
    0x6313c3882660 ---------A T 00120 PRINT "YOU LOST";X;"MEN FROM YOUR ARMY."
    0x6313c3882a90 ---------A   00125 A=INT(A-X)
    0x6313c3882b30 ---------A   00130 GOTO 500
    0x6313c3883430 ---------A T 00150 PRINT "YOU LOST";INT(X/3);"MEN, BUT I LOST ";INT(2*D/3)
    0x6313c3883960 ---------A   00155 A=INT(A-X/3)
    0x6313c3883b70 ---------A   00160 D=0
    0x6313c3883df0 ---------A   00165 GOTO 500 
    0x6313c3884050 ---------A T 00200 IF X>B THEN 20
    0x6313c38843d0 ---------A   00210 IF X<E/3 THEN 230
    0x6313c3884850 ---------A   00215 IF X<2*E/3 THEN 250
    0x6313c38848b0 ---------A   00220 GOTO 270
    0x6313c3884a00 ---------A T 00230 PRINT "YOUR ATTACK WAS STOPPED!"
    0x6313c3884e30 ---------A   00232 B=INT(B-X)
    0x6313c3884ec0 ---------A   00235 GOTO 500
    0x6313c38854e0 ---------A T 00250 PRINT "YOU DESTROYED";INT(2*E/3);"OF MY ARMY."
    0x6313c38858f0 ---------A   00255 E=INT(E/3)
    0x6313c3885990 ---------A   00260 GOTO 500
    0x6313c3885b10 ---------A T 00270 PRINT "YOU SUNK ONE OF MY PATROL BOATS, BUT I WIPED OUT TWO"
    0x6313c3885c80 ---------A   00275 PRINT "OF YOUR AIR FORCE BASES AND 3 ARMY BASES."
    0x6313c3886090 ---------A   00280 A=INT(A/3)
    0x6313c38864a0 ---------A   00285 C=INT(C/3)
    0x6313c38869b0 ---------A   00290 E=INT(2*E/3)
    0x6313c3886a20 ---------A   00293 GOTO 500
    0x6313c3886c80 ---------A T 00300 IF X>C THEN 20
    0x6313c3887000 ---------A   00310 IF X<C/3 THEN 350
    0x6313c3887480 ---------A   00320 IF X<2*C/3 THEN 370
    0x6313c3887510 ---------A   00330 GOTO 380
    0x6313c3887660 ---------A T 00350 PRINT "YOUR ATTACK WAS WIPED OUT."
    0x6313c3887a90 ---------A   00355 C=INT(C-X)
    0x6313c3887b30 ---------A   00360 GOTO 500
    0x6313c3887ca0 ---------A T 00370 PRINT "WE HAD A DOGFIGHT. YOU WON - AND FINISHED YOUR MISSION."
    0x6313c38881b0 ---------A   00375 D=INT(2*D/3)
    0x6313c38885c0 ---------A   00377 E=INT(E/3)
    0x6313c38889d0 ---------A   00378 F=INT(F/3)
    0x6313c3888a70 ---------A   00379 GOTO 500
    0x6313c3888bf0 ---------A T 00380 PRINT "YOU WIPED OUT ONE OF MY ARMY PATROLS, BUT I DESTROYED"
    0x6313c3888d60 ---------A   00381 PRINT "TWO NAVY BASES AND BOMBED THREE ARMY BASES."
    0x6313c3889170 ---------A   00385 A=INT(A/4)
    0x6313c3889990 ---------A   00387 B=INT(B/3)
    0x6313c3889ea0 ---------A   00390 D=INT(2*D/3)
    0x6313c3889f10 ---------A T 00500 PRINT
    0x6313c388a180 ---------A   00501 PRINT,"YOU","ME"
    0x6313c388a4d0 ---------A   00510 PRINT "ARMY",A,D
    0x6313c388a820 ---------A   00520 PRINT "NAVY",B,E
    0x6313c388ab80 ---------A   00530 PRINT "A. F.",C,F
    0x6313c388ad00 ---------A   01000 PRINT "WHAT IS YOUR NEXT MOVE?"
    0x6313c388ae60 ---------A   01010 PRINT "ARMY=1  NAVY=2  AIR FORCE=3"
    0x6313c388b080 ---------A   01020 INPUT G
    0x6313c388b1e0 ---------A T 01030 PRINT "HOW MANY MEN"
    0x6313c388b3f0 ---------A   01040 INPUT T
    0x6313c388b660 ---------A   01045 IF T<0 THEN 1030
    0x6313c388ba00 ---------A   01050 ON G GOTO 1600,1700,1800
    0x6313c388bc70 ---------A T 01600 IF T>A THEN 1030
    0x6313c388c000 ---------A   01610 IF T<D/2 THEN 1630
    0x6313c388c170 ---------A   01615 PRINT "YOU DESTROYED MY ARMY!"
    0x6313c388c380 ---------A   01616 D=0
    0x6313c388c400 ---------A   01617 GOTO 2000
    0x6313c388c550 ---------A T 01630 PRINT "I WIPED OUT YOUR ATTACK!"
    0x6313c388c8a0 ---------A   01635 A=A-T
    0x6313c388c910 ---------A   01640 GOTO 2000
    0x6313c388cb70 ---------A T 01700 IF T>B THEN 1030 
    0x6313c388cef0 ---------A   01710 IF T<E/2 THEN 1750
    0x6313c388cfa0 ---------A   01720 GOTO 1770
    0x6313c388d120 ---------A T 01750 PRINT "I SUNK TWO OF YOUR BATTLESHIPS, AND MY AIR FORCE"
    0x6313c388d280 ---------A   01751 PRINT "WIPED OUT YOUR UNGAURDED CAPITOL."
    0x6313c388d5b0 ---------A   01755 A=A/4
    0x6313c388d8e0 ---------A   01760 B=B/2
    0x6313c388d980 ---------A   01765 GOTO 2000
    0x6313c388db00 ---------A T 01770 PRINT "YOUR NAVY SHOT DOWN THREE OF MY XIII PLANES,"
    0x6313c388dc60 ---------A   01771 PRINT "AND SUNK THREE BATTLESHIPS."
    0x6313c388e090 ---------A   01775 F=2*F/3
    0x6313c388e400 ---------A   01780 E=(E/2)
    0x6313c388e470 ---------A   01790 GOTO 2000
    0x6313c388e6e0 ---------A T 01800 IF T>C THEN 1030 
    0x6313c388ea60 ---------A   01810 IF T>F/2 THEN 1830 
    0x6313c388eb10 ---------A   01820 GOTO 1850
    0x6313c388ec80 ---------A T 01830 PRINT "MY NAVY AND AIR FORCE IN A COMBINED ATTACK LEFT"
    0x6313c388ede0 ---------A   01831 PRINT "YOUR COUNTRY IN SHAMBLES."
    0x6313c388f110 ---------A   01835 A=A/3
    0x6313c388f440 ---------A   01837 B=B/3
    0x6313c388f770 ---------A   01840 C=C/3
    0x6313c388f810 ---------A   01845 GOTO 2000
    0x6313c388f980 ---------A T 01850 PRINT "ONE OF YOUR PLANES CRASHED INTO MY HOUSE. I AM DEAD."
    0x6313c388fae0 ---------A   01851 PRINT "MY COUNTRY FELL APART."
    0x6313c388fb50 ---------A   01860 GOTO 2010
    0x6313c388fbd0 ---------A T 02000 PRINT
    0x6313c388fd50 ---------A   02001 PRINT "FROM THE RESULTS OF BOTH OF YOUR ATTACKS,"
    0x6313c3890690 ---------A   02002 IF A+B+C>3/2*(D+E+F) THEN 2010
    0x6313c3891000 ---------A   02005 IF A+B+C<2/3*(D+E+F) THEN 2015
    0x6313c38911a0 ---------A   02006 PRINT "THE TREATY OF PARIS CONCLUDED THAT WE TAKE OUR"
    0x6313c3891310 ---------A   02007 PRINT "RESPECTIVE COUNTRIES AND LIVE IN PEACE."
    0x6313c3891390 ---------A   02008 GOTO 2020
    0x6313c38914e0 ---------A T 02010 PRINT "YOU WON, OH! SHUCKS!!!!"
    0x6313c3891580 ---------A   02012 GOTO 2020
    0x6313c3891700 ---------A T 02015 PRINT "YOU LOST-I CONQUERED YOUR COUNTRY.  IT SERVES YOU"
    0x6313c3891860 ---------A   02016 PRINT "RIGHT FOR PLAYING THIS STUPID GAME!!!"
    0x6313c38918b0 ---------A T 02020 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00005      00013T
     00020      00022T, 00100T, 00200T, 00300T
     00100      00023T
     00120      00105T
     00150      00110T
     00200      00023T
     00230      00210T
     00250      00215T
     00270      00115T, 00220T
     00300      00023T
     00350      00310T
     00370      00320T
     00380      00330T
     00500      00130T, 00165T, 00235T, 00260T, 00293T, 00360T, 00379T
     01030      01045T, 01600T, 01700T, 01800T
     01600      01050T
     01630      01610T
     01700      01050T
     01750      01710T
     01770      01720T
     01800      01050T
     01830      01810T
     01850      01820T
     02000      01617T, 01640T, 01765T, 01790T, 01845T
     02010      01860T, 02002T
     02015      02005T
     02020      02008T, 02012T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x6313c3878ac0 (00001)   0x000000000000 (00000)   0x6313c38918b0 (02020)   0x6313c38918b0 (02020)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02240 - 10000    7770 

 */



/*
 *  Symbol Table Listing for 'basic/combat.bas'
 *
    A                        Float       
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
    C                        Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Float       
    E                        Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Float       
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Float       
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
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    Y                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/combat.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6313c3878ac0 ---------A   01000 PRINT TAB(33);"COMBAT"
    0x6313c3879e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6313c38682b0 ---------A   01020 PRINT: PRINT: PRINT
    0x6313c3877730 ---------A   01030 PRINT "I AM AT WAR WITH YOU.": PRINT "WE HAVE 72000 SOLDIERS APIECE."
    0x6313c3879a50 ---------A T 01040 PRINT:PRINT "DISTRIBUTE YOUR FORCES."
    0x6313c3878440 ---------A   01050 PRINT ,"ME","  YOU"
    0x6313c387a040 ---------A   01060 PRINT "ARMY",30000,
    0x6313c3877610 ---------A   01070 INPUT A
    0x6313c387a170 ---------A   01080 PRINT "NAVY",20000,
    0x6313c38775b0 ---------A   01090 INPUT B
    0x6313c3877f80 ---------A   01100 PRINT "A. F.",22000,
    0x6313c387fce0 ---------A   01110 INPUT C
    0x6313c3880180 ---------A   01120 IF A+B+C>72000 THEN 1040
    0x6313c3880460 ---------A   01130 D=30000
    0x6313c3880730 ---------A   01140 E=20000
    0x6313c3880a30 ---------A   01150 F=22000
    0x6313c3880b80 ---------A   01160 PRINT "YOU ATTACK FIRST. TYPE (1) FOR ARMY; (2) FOR NAVY;"
    0x6313c3880cb0 ---------A   01170 PRINT "AND (3) FOR AIR FORCE."
    0x6313c3880ec0 ---------A   01180 INPUT Y
    0x6313c3881020 ---------A T 01190 PRINT "HOW MANY MEN"
    0x6313c3881230 ---------A   01200 INPUT X
    0x6313c3881470 ---------A   01210 IF X<0 THEN 1190
    0x6313c3881810 ---------A   01220 ON Y GOTO 1230,1340,1500
    0x6313c3881a80 ---------A T 01230 IF X>A THEN 1190
    0x6313c3881e00 ---------A   01240 IF X<A/3 THEN 1270
    0x6313c3882280 ---------A   01250 IF X<2*A/3 THEN 1300
    0x6313c3882320 ---------A   01260 GOTO 1440
    0x6313c3882660 ---------A T 01270 PRINT "YOU LOST";X;"MEN FROM YOUR ARMY."
    0x6313c3882a90 ---------A   01280 A=INT(A-X)
    0x6313c3882b30 ---------A   01290 GOTO 1670
    0x6313c3883430 ---------A T 01300 PRINT "YOU LOST";INT(X/3);"MEN, BUT I LOST ";INT(2*D/3)
    0x6313c3883960 ---------A   01310 A=INT(A-X/3)
    0x6313c3883b70 ---------A   01320 D=0
    0x6313c3883df0 ---------A   01330 GOTO 1670 
    0x6313c3884050 ---------A T 01340 IF X>B THEN 1190
    0x6313c38843d0 ---------A   01350 IF X<E/3 THEN 1380
    0x6313c3884850 ---------A   01360 IF X<2*E/3 THEN 1410
    0x6313c38848b0 ---------A   01370 GOTO 1440
    0x6313c3884a00 ---------A T 01380 PRINT "YOUR ATTACK WAS STOPPED!"
    0x6313c3884e30 ---------A   01390 B=INT(B-X)
    0x6313c3884ec0 ---------A   01400 GOTO 1670
    0x6313c38854e0 ---------A T 01410 PRINT "YOU DESTROYED";INT(2*E/3);"OF MY ARMY."
    0x6313c38858f0 ---------A   01420 E=INT(E/3)
    0x6313c3885990 ---------A   01430 GOTO 1670
    0x6313c3885b10 ---------A T 01440 PRINT "YOU SUNK ONE OF MY PATROL BOATS, BUT I WIPED OUT TWO"
    0x6313c3885c80 ---------A   01450 PRINT "OF YOUR AIR FORCE BASES AND 3 ARMY BASES."
    0x6313c3886090 ---------A   01460 A=INT(A/3)
    0x6313c38864a0 ---------A   01470 C=INT(C/3)
    0x6313c38869b0 ---------A   01480 E=INT(2*E/3)
    0x6313c3886a20 ---------A   01490 GOTO 1670
    0x6313c3886c80 ---------A T 01500 IF X>C THEN 1190
    0x6313c3887000 ---------A   01510 IF X<C/3 THEN 1540
    0x6313c3887480 ---------A   01520 IF X<2*C/3 THEN 1570
    0x6313c3887510 ---------A   01530 GOTO 1620
    0x6313c3887660 ---------A T 01540 PRINT "YOUR ATTACK WAS WIPED OUT."
    0x6313c3887a90 ---------A   01550 C=INT(C-X)
    0x6313c3887b30 ---------A   01560 GOTO 1670
    0x6313c3887ca0 ---------A T 01570 PRINT "WE HAD A DOGFIGHT. YOU WON - AND FINISHED YOUR MISSION."
    0x6313c38881b0 ---------A   01580 D=INT(2*D/3)
    0x6313c38885c0 ---------A   01590 E=INT(E/3)
    0x6313c38889d0 ---------A   01600 F=INT(F/3)
    0x6313c3888a70 ---------A   01610 GOTO 1670
    0x6313c3888bf0 ---------A T 01620 PRINT "YOU WIPED OUT ONE OF MY ARMY PATROLS, BUT I DESTROYED"
    0x6313c3888d60 ---------A   01630 PRINT "TWO NAVY BASES AND BOMBED THREE ARMY BASES."
    0x6313c3889170 ---------A   01640 A=INT(A/4)
    0x6313c3889990 ---------A   01650 B=INT(B/3)
    0x6313c3889ea0 ---------A   01660 D=INT(2*D/3)
    0x6313c3889f10 ---------A T 01670 PRINT
    0x6313c388a180 ---------A   01680 PRINT,"YOU","ME"
    0x6313c388a4d0 ---------A   01690 PRINT "ARMY",A,D
    0x6313c388a820 ---------A   01700 PRINT "NAVY",B,E
    0x6313c388ab80 ---------A   01710 PRINT "A. F.",C,F
    0x6313c388ad00 ---------A   01720 PRINT "WHAT IS YOUR NEXT MOVE?"
    0x6313c388ae60 ---------A   01730 PRINT "ARMY=1  NAVY=2  AIR FORCE=3"
    0x6313c388b080 ---------A   01740 INPUT G
    0x6313c388b1e0 ---------A T 01750 PRINT "HOW MANY MEN"
    0x6313c388b3f0 ---------A   01760 INPUT T
    0x6313c388b660 ---------A   01770 IF T<0 THEN 1750
    0x6313c388ba00 ---------A   01780 ON G GOTO 1790,1870,2000
    0x6313c388bc70 ---------A T 01790 IF T>A THEN 1750
    0x6313c388c000 ---------A   01800 IF T<D/2 THEN 1840
    0x6313c388c170 ---------A   01810 PRINT "YOU DESTROYED MY ARMY!"
    0x6313c388c380 ---------A   01820 D=0
    0x6313c388c400 ---------A   01830 GOTO 2120
    0x6313c388c550 ---------A T 01840 PRINT "I WIPED OUT YOUR ATTACK!"
    0x6313c388c8a0 ---------A   01850 A=A-T
    0x6313c388c910 ---------A   01860 GOTO 2120
    0x6313c388cb70 ---------A T 01870 IF T>B THEN 1750 
    0x6313c388cef0 ---------A   01880 IF T<E/2 THEN 1900
    0x6313c388cfa0 ---------A   01890 GOTO 1950
    0x6313c388d120 ---------A T 01900 PRINT "I SUNK TWO OF YOUR BATTLESHIPS, AND MY AIR FORCE"
    0x6313c388d280 ---------A   01910 PRINT "WIPED OUT YOUR UNGAURDED CAPITOL."
    0x6313c388d5b0 ---------A   01920 A=A/4
    0x6313c388d8e0 ---------A   01930 B=B/2
    0x6313c388d980 ---------A   01940 GOTO 2120
    0x6313c388db00 ---------A T 01950 PRINT "YOUR NAVY SHOT DOWN THREE OF MY XIII PLANES,"
    0x6313c388dc60 ---------A   01960 PRINT "AND SUNK THREE BATTLESHIPS."
    0x6313c388e090 ---------A   01970 F=2*F/3
    0x6313c388e400 ---------A   01980 E=(E/2)
    0x6313c388e470 ---------A   01990 GOTO 2120
    0x6313c388e6e0 ---------A T 02000 IF T>C THEN 1750 
    0x6313c388ea60 ---------A   02010 IF T>F/2 THEN 2030 
    0x6313c388eb10 ---------A   02020 GOTO 2090
    0x6313c388ec80 ---------A T 02030 PRINT "MY NAVY AND AIR FORCE IN A COMBINED ATTACK LEFT"
    0x6313c388ede0 ---------A   02040 PRINT "YOUR COUNTRY IN SHAMBLES."
    0x6313c388f110 ---------A   02050 A=A/3
    0x6313c388f440 ---------A   02060 B=B/3
    0x6313c388f770 ---------A   02070 C=C/3
    0x6313c388f810 ---------A   02080 GOTO 2120
    0x6313c388f980 ---------A T 02090 PRINT "ONE OF YOUR PLANES CRASHED INTO MY HOUSE. I AM DEAD."
    0x6313c388fae0 ---------A   02100 PRINT "MY COUNTRY FELL APART."
    0x6313c388fb50 ---------A   02110 GOTO 2190
    0x6313c388fbd0 ---------A T 02120 PRINT
    0x6313c388fd50 ---------A   02130 PRINT "FROM THE RESULTS OF BOTH OF YOUR ATTACKS,"
    0x6313c3890690 ---------A   02140 IF A+B+C>3/2*(D+E+F) THEN 2190
    0x6313c3891000 ---------A   02150 IF A+B+C<2/3*(D+E+F) THEN 2210
    0x6313c38911a0 ---------A   02160 PRINT "THE TREATY OF PARIS CONCLUDED THAT WE TAKE OUR"
    0x6313c3891310 ---------A   02170 PRINT "RESPECTIVE COUNTRIES AND LIVE IN PEACE."
    0x6313c3891390 ---------A   02180 GOTO 2230
    0x6313c38914e0 ---------A T 02190 PRINT "YOU WON, OH! SHUCKS!!!!"
    0x6313c3891580 ---------A   02200 GOTO 2230
    0x6313c3891700 ---------A T 02210 PRINT "YOU LOST-I CONQUERED YOUR COUNTRY.  IT SERVES YOU"
    0x6313c3891860 ---------A   02220 PRINT "RIGHT FOR PLAYING THIS STUPID GAME!!!"
    0x6313c38918b0 ---------A T 02230 END
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
float  A_flt;                                     // Basic: A 
float  B_flt;                                     // Basic: B 
float  C_flt;                                     // Basic: C 
float  D_flt;                                     // Basic: D 
float  E_flt;                                     // Basic: E 
float  F_flt;                                     // Basic: F 
float  G_flt;                                     // Basic: G 
float  T_flt;                                     // Basic: T 
float  X_flt;                                     // Basic: X 
float  Y_flt;                                     // Basic: Y 
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
