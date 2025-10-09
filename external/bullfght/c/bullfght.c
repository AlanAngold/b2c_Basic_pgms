/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bullfght.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5df615374ac0 ---------A   00010 PRINT TAB(34);"BULL"
    0x5df615375e70 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5df615375db0 ---------A   00030 DEF FNA(K)=INT(RND(1)*2+1)
    0x5df615373b60 ---------A   00200 PRINT:PRINT:PRINT
    0x5df615374620 ---------A   00202 L=1
    0x5df6153747c0 ---------A   00205 PRINT "DO YOU WANT INSTRUCTIONS";
    0x5df615373610 ---------A   00206 INPUT Z$
    0x5df6153735b0 ---------A   00207 IF Z$="NO" THEN 400
    0x5df61537bc40 ---------A   00210 PRINT "HELLO, ALL YOU BLOODLOVERS AND AFICIONADOS."
    0x5df615374670 ---------A   00220 PRINT "HERE IS YOUR BIG CHANCE TO KILL A BULL."
    0x5df61537bdd0 ---------A   00230 PRINT
    0x5df61537bf30 ---------A   00240 PRINT "ON EACH PASS OF THE BULL, YOU MAY TRY"
    0x5df61537c0c0 ---------A   00250 PRINT "0 - VERONICA (DANGEROUS INSIDE MOVE OF THE CAPE)"
    0x5df61537c250 ---------A   00260 PRINT "1 - LESS DANGEROUS OUTSIDE MOVE OF THE CAPE"
    0x5df61537c360 ---------A   00270 PRINT "2 - ORDINARY SWIRL OF THE CAPE."
    0x5df61537c400 ---------A   00280 PRINT
    0x5df61537c5a0 ---------A   00290 PRINT "INSTEAD OF THE ABOVE, YOU MAY TRY TO KILL THE BULL"
    0x5df61537c6f0 ---------A   00300 PRINT "ON ANY TURN: 4 (OVER THE HORNS), 5 (IN THE CHEST)."
    0x5df61537c860 ---------A   00310 PRINT "BUT IF I WERE YOU,"
    0x5df61537c9d0 ---------A   00320 PRINT "I WOULDN'T TRY IT BEFORE THE SEVENTH PASS."
    0x5df61537ca70 ---------A   00330 PRINT
    0x5df61537cc00 ---------A   00340 PRINT "THE CROWD WILL DETERMINE WHAT AWARD YOU DESERVE"
    0x5df61537cd60 ---------A   00350 PRINT "(POSTHUMOUSLY IF NECESSARY)."
    0x5df61537ced0 ---------A   00360 PRINT "THE BRAVER YOU ARE, THE BETTER THE AWARD YOU RECIEVE."
    0x5df61537cf70 ---------A   00370 PRINT
    0x5df61537d100 ---------A   00380 PRINT "THE BETTER THE JOB THE PICADORES AND TOREADORES DO,"
    0x5df61537d260 ---------A   00390 PRINT "THE BETTER YOUR CHANCES ARE."
    0x5df61537d2d0 ---------A T 00400 PRINT
    0x5df61537d340 ---------A   00410 PRINT
    0x5df61537d6d0 ---------A   00420 D(5)=1
    0x5df61537d9a0 ---------A   00430 D(4)=1
    0x5df61537dc70 ---------A   00450 DIM L$(5)
    0x5df61537e2f0 ---------A   00455 A=INT(RND(1)*5+1)
    0x5df61537e890 ---------A   00460 FOR I=1 TO 5
    0x5df61537ead0 ---------A   00463 READ L$(I)
    0x5df61537ebf0 ---------A   00467 NEXT I
    0x5df61537f110 ---------A   00470 DATA "SUPERB","GOOD","FAIR","POOR","AWFUL"
    0x5df61537f540 ---------A   00490 PRINT "YOU HAVE DRAWN A ";L$(A);" BULL."
    0x5df61537f790 ---------A   00500 IF A>4 THEN 530
    0x5df61537f9f0 ---------A   00510 IF A<2 THEN 550
    0x5df61537fa80 ---------A   00520 GOTO 570
    0x5df61537fbc0 ---------A T 00530 PRINT "YOU'RE LUCKY."
    0x5df61537fc40 ---------A   00540 GOTO 570
    0x5df61537fd90 ---------A T 00550 PRINT "GOOD LUCK.  YOU'LL NEED IT."
    0x5df61537fe00 ---------A   00560 PRINT
    0x5df61537fe70 ---------A T 00570 PRINT
    0x5df615380160 ---------A   00590 A$="PICADO"
    0x5df615380450 ---------A   00595 B$="RES"
    0x5df6153804c0 ---------A   00600 GOSUB 1610
    0x5df615380860 ---------A   00610 D(1)=C
    0x5df615380a90 ---------A   00630 A$="TOREAD"
    0x5df615380cc0 ---------A   00635 B$="ORES"
    0x5df615380d30 ---------A   00640 GOSUB 1610
    0x5df615381010 ---------A   00650 D(2)=C
    0x5df615381080 ---------A T 00660 PRINT
    0x5df6153810f0 ---------A   00670 PRINT
    0x5df615381400 ---------A   00680 IF Z=1 THEN 1310
    0x5df6153818d0 ---------A   00690 D(3)=D(3)+1
    0x5df615381be0 ---------A   00700 PRINT "PASS NUMBER";D(3)
    0x5df615381f10 ---------A   00710 IF D(3)<3 THEN 760
    0x5df6153820a0 ---------A   00720 PRINT "HERE COMES THE BULL.  TRY FOR A KILL";
    0x5df615382110 ---------A   00730 GOSUB 1930
    0x5df615382410 ---------A   00735 IF Z1=1 THEN 1130
    0x5df615382590 ---------A   00740 PRINT "CAPE MOVE";
    0x5df615382630 ---------A   00750 GOTO 800
    0x5df615382bc0 ---------A T 00760 PRINT "THE BULL IS CHARGING AT YOU!  YOU ARE THE MATADOR--"
    0x5df615382d40 ---------A   00770 PRINT "DO YOU WANT TO KILL THE BULL";
    0x5df615382db0 ---------A   00780 GOSUB 1930
    0x5df615383010 ---------A   00785 IF Z1=1 THEN 1130
    0x5df6153831a0 ---------A   00790 PRINT "WHAT MOVE DO YOU MAKE WITH THE CAPE";
    0x5df6153833c0 ---------A T 00800 INPUT E
    0x5df615383800 ---------A   00810 IF E<>INT(ABS(E)) THEN 830
    0x5df615383a90 ---------A   00820 IF E<3 THEN 850
    0x5df615383c10 ---------A T 00830 PRINT "DON'T PANIC, YOU IDIOT!  PUT DOWN A CORRECT NUMBER"
    0x5df615383c80 ---------A   00840 GOTO 800
    0x5df615383ce0 ---------A T 00850 REM
    0x5df615383f40 ---------A   00860 IF E=0 THEN 920
    0x5df6153841a0 ---------A   00870 IF E=1 THEN 900
    0x5df615384480 ---------A   00880 M=.5
    0x5df6153844f0 ---------A   00890 GOTO 930
    0x5df6153846f0 ---------A T 00900 M=2
    0x5df615384760 ---------A   00910 GOTO 930
    0x5df615384960 ---------A T 00920 M=3
    0x5df615384cd0 ---------A T 00930 L=L+M
    0x5df615385d20 ---------A   00940 F=(6-A+M/10)*RND(1)/((D(1)+D(2)+D(3)/10)*5)
    0x5df615385f80 ---------A   00950 IF F<.51 THEN 660
    0x5df615386100 ---------A T 00960 PRINT "THE BULL HAS GORED YOU!"
    0x5df6153864a0 ---------A T 00970 ON FNA(0) GOTO 980,1010
    0x5df6153865f0 ---------A T 00980 PRINT "YOU ARE DEAD."
    0x5df6153868c0 ---------A   00990 D(4)=1.5
    0x5df615386940 ---------A   01000 GOTO 1310
    0x5df615386ae0 ---------A T 01010 PRINT "YOU ARE STILL ALIVE.":PRINT
    0x5df615386c60 ---------A   01020 PRINT "DO YOU RUN FROM THE RING";
    0x5df615386cd0 ---------A   01030 GOSUB 1930
    0x5df615386f10 ---------A   01035 IF Z1=2 THEN 1070
    0x5df615387070 ---------A   01040 PRINT "COWARD"
    0x5df615387340 ---------A   01050 D(4)=0
    0x5df6153873d0 ---------A   01060 GOTO 1310
    0x5df615387530 ---------A T 01070 PRINT "YOU ARE BRAVE.  STUPID, BUT BRAVE."
    0x5df6153878c0 ---------A   01080 ON FNA(0) GOTO 1090,1110
    0x5df615387b90 ---------A T 01090 D(4)=2
    0x5df615387c10 ---------A   01100 GOTO 660
    0x5df615387d50 ---------A T 01110 PRINT "YOU ARE GORED AGAIN!"
    0x5df615387dc0 ---------A   01120 GOTO 970
    0x5df615387e20 ---------A T 01130 REM
    0x5df615388060 ---------A   01140 Z=1
    0x5df615388280 ---------A   01150 PRINT:PRINT "IT IS THE MOMENT OF TRUTH.":PRINT
    0x5df615388400 ---------A   01155 PRINT "HOW DO YOU TRY TO KILL THE BULL";
    0x5df615388610 ---------A   01160 INPUT H
    0x5df615388870 ---------A   01170 IF H=4 THEN 1230
    0x5df615388af0 ---------A   01180 IF H=5 THEN 1230
    0x5df615388c60 ---------A   01190 PRINT "YOU PANICKED.  THE BULL GORED YOU."
    0x5df615388cf0 ---------A   01220 GOTO 970
    0x5df615389a50 ---------A T 01230 K=(6-A)*10*RND(1)/((D(1)+D(2))*5*D(3))
    0x5df615389d60 ---------A   01240 IF J=4 THEN 1290
    0x5df615389fd0 ---------A   01250 IF K>.2 THEN 960
    0x5df61538a130 ---------A T 01260 PRINT "YOU KILLED THE BULL!"
    0x5df61538a400 ---------A   01270 D(5)=2
    0x5df61538a470 ---------A   01280 GOTO 1320
    0x5df61538a6b0 ---------A T 01290 IF K>.8 THEN 960
    0x5df61538a730 ---------A   01300 GOTO 1260
    0x5df61538a790 ---------A T 01310 PRINT
    0x5df61538a800 ---------A T 01320 PRINT
    0x5df61538a880 ---------A   01330 PRINT
    0x5df61538abc0 ---------A   01340 IF D(4)<>0 THEN 1390
    0x5df61538ad80 ---------A   01350 PRINT "THE CROWD BOOS FOR TEN MINUTES.  IF YOU EVER DARE TO SHOW"
    0x5df61538af10 ---------A   01360 PRINT "YOUR FACE IN A RING AGAIN, THEY SWEAR THEY WILL KILL YOU--"
    0x5df61538b070 ---------A   01370 PRINT "UNLES THE BULL DOES FIRST."
    0x5df61538b110 ---------A   01380 GOTO 1580
    0x5df61538cfb0 ---------A T 01390 DEF FND(Q)=(4.5+L/6-(D(1)+D(2))*2.5+4*D(4)+2*D(5)-D(3)^2/120-A)
    0x5df61538d650 ---------A   01395 DEF FNC(Q)=FND(Q)*RND(1)
    0x5df61538d970 ---------A   01400 IF D(4)<>2 THEN 1430
    0x5df61538dae0 ---------A   01410 PRINT "THE CROWD CHEERS WILDLY!"
    0x5df61538db60 ---------A   01420 GOTO 1450
    0x5df61538de70 ---------A T 01430 IF D(5)<>2 THEN 1450
    0x5df61538e030 ---------A   01440 PRINT "THE CROWD CHEERS!":PRINT
    0x5df61538e190 ---------A T 01450 PRINT "THE CROWD AWARDS YOU"
    0x5df61538e4d0 ---------A   01460 IF FNC(Q)<2.4 THEN 1570
    0x5df61538e820 ---------A   01470 IF FNC(Q)<4.9 THEN 1550
    0x5df61538eb80 ---------A   01480 IF FNC(Q)<7.4 THEN 1520
    0x5df61538ed00 ---------A   01500 PRINT "OLE!  YOU ARE 'MUY HOMBRE'!! OLE!  OLE!"
    0x5df61538ed80 ---------A   01510 GOTO 1580
    0x5df61538eed0 ---------A T 01520 PRINT "BOTH EARS OF THE BULL!"
    0x5df61538f020 ---------A   01530 PRINT "OLE!"
    0x5df61538f0a0 ---------A   01540 GOTO 1580
    0x5df61538f1e0 ---------A T 01550 PRINT "ONE EAR OF THE BULL."
    0x5df61538f260 ---------A   01560 GOTO 1580
    0x5df61538f3a0 ---------A T 01570 PRINT "NOTHING AT ALL."
    0x5df61538f420 ---------A T 01580 PRINT
    0x5df61538f660 ---------A   01590 PRINT "ADIOS":PRINT:PRINT:PRINT
    0x5df61538f6d0 ---------A   01600 GOTO 2030
    0x5df61538fc90 ---------B G 01610 B=3/A*RND(1)
    0x5df61538fee0 ---------B   01620 IF B<.37 THEN 1740
    0x5df615390140 ---------B   01630 IF B<.5 THEN 1720
    0x5df6153903a0 ---------B   01640 IF B<.63 THEN 1700
    0x5df615390600 ---------B   01650 IF B<.87 THEN 1680
    0x5df615390820 ---------B   01660 C=.1
    0x5df615390890 ---------B   01670 GOTO 1750
    0x5df615390a90 ---------B T 01680 C=.2
    0x5df615390b00 ---------B   01690 GOTO 1750
    0x5df615390d00 ---------B T 01700 C=.3
    0x5df615390d70 ---------B   01710 GOTO 1750
    0x5df615390f70 ---------B T 01720 C=.4
    0x5df615390fe0 ---------B   01730 GOTO 1750
    0x5df6153911e0 ---------B T 01740 C=.5
    0x5df6153917d0 ---------B T 01750 T=INT(10*C+.2)
    0x5df615391f00 ---------B   01760 PRINT "THE ";A$;B$;" DID A ";L$(T);" JOB."
    0x5df615392150 ---------B   01770 IF 4>T THEN 1900
    0x5df6153923c0 ---------B   01780 IF 5=T THEN 1870
    0x5df615392790 ---------B   01790 ON FNA(K) GOTO 1830,1850
    0x5df615392a30 ---------B   01800 IF A$="TOREAD" THEN 1820
    0x5df615392eb0 ---------B   01810 PRINT "ONE OF THE HORSES OF THE ";A$;B$;" WAS KILLED."
    0x5df615393280 ---------B T 01820 ON FNA(K) GOTO 1830,1850
    0x5df6153936d0 ---------B T 01830 PRINT "ONE OF THE ";A$;B$;" WAS KILLED."
    0x5df615393750 ---------B   01840 GOTO 1900
    0x5df615393b90 ---------B T 01850 PRINT "NO ";A$;B$;" WERE KILLED."
    0x5df615393c10 ---------B   01860 GOTO 1900
    0x5df615393ea0 ---------B T 01870 IF A$="TOREAD" THEN 1890
    0x5df615394500 ---------B   01880 PRINT FNA(K);"OF THE HORSES OF THE ";A$;B$;" KILLED."
    0x5df615394b30 ---------B T 01890 PRINT FNA(K);"OF THE ";A$;B$;" KILLED."
    0x5df615394ba0 ---------B T 01900 PRINT
    0x5df615394bf0 ---------B   01910 RETURN
    0x5df615394c70 ---------C   01920 REM
    0x5df615394de0 ---------C B 01930 INPUT A$
    0x5df615395070 ---------C   01940 IF A$="YES" THEN 1990
    0x5df615395320 ---------C   01950 IF A$="NO" THEN 2010
    0x5df6153954a0 ---------C   01970 PRINT "INCORRECT ANSWER - - PLEASE TYPE 'YES' OR 'NO'."
    0x5df615395510 ---------C   01980 GOTO 1930
    0x5df615395710 ---------C T 01990 Z1=1
    0x5df615395780 ---------C   02000 GOTO 2020
    0x5df615395980 ---------C T 02010 Z1=2
    0x5df6153959d0 ---------C T 02020 RETURN
    0x5df615395a30 ---------A T 02030 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00400      00207T
     00530      00500T
     00550      00510T
     00570      00520T, 00540T
     00660      00950T, 01100T
     00760      00710T
     00800      00750T, 00840T
     00830      00810T
     00850      00820T
     00900      00870T
     00920      00860T
     00930      00890T, 00910T
     00960      01250T, 01290T
     00970      01120T, 01220T
     00980      00970T
     01010      00970T
     01070      01035T
     01090      01080T
     01110      01080T
     01130      00735T, 00785T
     01230      01170T, 01180T
     01260      01300T
     01290      01240T
     01310      00680T, 01000T, 01060T
     01320      01280T
     01390      01340T
     01430      01400T
     01450      01420T, 01430T
     01520      01480T
     01550      01470T
     01570      01460T
     01580      01380T, 01510T, 01540T, 01560T
     01610      00600G, 00640G
     01680      01650T
     01700      01640T
     01720      01630T
     01740      01620T
     01750      01670T, 01690T, 01710T, 01730T
     01820      01800T
     01830      01790T, 01820T
     01850      01790T, 01820T
     01870      01780T
     01890      01870T
     01900      01770T, 01840T, 01860T
     01930      00730G, 00780G, 01030G, 01980T
     01990      01940T
     02010      01950T
     02020      02000T
     02030      01600T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5df615374ac0 (00010)   0x000000000000 (00000)   0x5df615395a30 (02030)   0x5df615395a30 (02030)   
   B) 0x5df61538fc90 (01610)   0x5df61538fc90 (01610)   0x5df615394bf0 (01910)   0x5df615394bf0 (01910)   
   C) 0x5df615394c70 (01920)   0x5df615394de0 (01930)   0x5df6153959d0 (02020)   0x5df6153959d0 (02020)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02950 - 10000    7060 

 */



/*
 *  Symbol Table Listing for 'basic/bullfght.bas'
 *
    A                        Float       
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
    B$                       String      
    C                        Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D               Array    Float           {0,9} 
    E                        Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Float       
    FIX             Function Integer         args=1, float  
    FNA             Array    Float           {0,9} 
    FNC             Array    Float           {0,9} 
    FND             Array    Float           {0,9} 
    FRE             Function Integer         args=1, char*  
    H                        Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    K                        Float       
    L                        Float       
    L$              Array    String          {0,4} 
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Float       
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
    Q                        Float       
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
    Z                        Float       
    Z$                       String      
    Z1                       Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bullfght.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5df615374ac0 ---------A   01000 PRINT TAB(34);"BULL"
    0x5df615375e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5df615375db0 ---------A   01020 DEF FNA(K)=INT(RND(1)*2+1)
    0x5df615373b60 ---------A   01030 PRINT:PRINT:PRINT
    0x5df615374620 ---------A   01040 L=1
    0x5df6153747c0 ---------A   01050 PRINT "DO YOU WANT INSTRUCTIONS";
    0x5df615373610 ---------A   01060 INPUT Z$
    0x5df6153735b0 ---------A   01070 IF Z$="NO" THEN 1270
    0x5df61537bc40 ---------A   01080 PRINT "HELLO, ALL YOU BLOODLOVERS AND AFICIONADOS."
    0x5df615374670 ---------A   01090 PRINT "HERE IS YOUR BIG CHANCE TO KILL A BULL."
    0x5df61537bdd0 ---------A   01100 PRINT
    0x5df61537bf30 ---------A   01110 PRINT "ON EACH PASS OF THE BULL, YOU MAY TRY"
    0x5df61537c0c0 ---------A   01120 PRINT "0 - VERONICA (DANGEROUS INSIDE MOVE OF THE CAPE)"
    0x5df61537c250 ---------A   01130 PRINT "1 - LESS DANGEROUS OUTSIDE MOVE OF THE CAPE"
    0x5df61537c360 ---------A   01140 PRINT "2 - ORDINARY SWIRL OF THE CAPE."
    0x5df61537c400 ---------A   01150 PRINT
    0x5df61537c5a0 ---------A   01160 PRINT "INSTEAD OF THE ABOVE, YOU MAY TRY TO KILL THE BULL"
    0x5df61537c6f0 ---------A   01170 PRINT "ON ANY TURN: 4 (OVER THE HORNS), 5 (IN THE CHEST)."
    0x5df61537c860 ---------A   01180 PRINT "BUT IF I WERE YOU,"
    0x5df61537c9d0 ---------A   01190 PRINT "I WOULDN'T TRY IT BEFORE THE SEVENTH PASS."
    0x5df61537ca70 ---------A   01200 PRINT
    0x5df61537cc00 ---------A   01210 PRINT "THE CROWD WILL DETERMINE WHAT AWARD YOU DESERVE"
    0x5df61537cd60 ---------A   01220 PRINT "(POSTHUMOUSLY IF NECESSARY)."
    0x5df61537ced0 ---------A   01230 PRINT "THE BRAVER YOU ARE, THE BETTER THE AWARD YOU RECIEVE."
    0x5df61537cf70 ---------A   01240 PRINT
    0x5df61537d100 ---------A   01250 PRINT "THE BETTER THE JOB THE PICADORES AND TOREADORES DO,"
    0x5df61537d260 ---------A   01260 PRINT "THE BETTER YOUR CHANCES ARE."
    0x5df61537d2d0 ---------A T 01270 PRINT
    0x5df61537d340 ---------A   01280 PRINT
    0x5df61537d6d0 ---------A   01290 D(5)=1
    0x5df61537d9a0 ---------A   01300 D(4)=1
    0x5df61537dc70 ---------A   01310 DIM L$(5)
    0x5df61537e2f0 ---------A   01320 A=INT(RND(1)*5+1)
    0x5df61537e890 ---------A   01330 FOR I=1 TO 5
    0x5df61537ead0 ---------A   01340 READ L$(I)
    0x5df61537ebf0 ---------A   01350 NEXT I
    0x5df61537f110 ---------A   01360 DATA "SUPERB","GOOD","FAIR","POOR","AWFUL"
    0x5df61537f540 ---------A   01370 PRINT "YOU HAVE DRAWN A ";L$(A);" BULL."
    0x5df61537f790 ---------A   01380 IF A>4 THEN 1410
    0x5df61537f9f0 ---------A   01390 IF A<2 THEN 1430
    0x5df61537fa80 ---------A   01400 GOTO 1450
    0x5df61537fbc0 ---------A T 01410 PRINT "YOU'RE LUCKY."
    0x5df61537fc40 ---------A   01420 GOTO 1450
    0x5df61537fd90 ---------A T 01430 PRINT "GOOD LUCK.  YOU'LL NEED IT."
    0x5df61537fe00 ---------A   01440 PRINT
    0x5df61537fe70 ---------A T 01450 PRINT
    0x5df615380160 ---------A   01460 A$="PICADO"
    0x5df615380450 ---------A   01470 B$="RES"
    0x5df6153804c0 ---------A   01480 GOSUB 2520
    0x5df615380860 ---------A   01490 D(1)=C
    0x5df615380a90 ---------A   01500 A$="TOREAD"
    0x5df615380cc0 ---------A   01510 B$="ORES"
    0x5df615380d30 ---------A   01520 GOSUB 2520
    0x5df615381010 ---------A   01530 D(2)=C
    0x5df615381080 ---------A T 01540 PRINT
    0x5df6153810f0 ---------A   01550 PRINT
    0x5df615381400 ---------A   01560 IF Z=1 THEN 2210
    0x5df6153818d0 ---------A   01570 D(3)=D(3)+1
    0x5df615381be0 ---------A   01580 PRINT "PASS NUMBER";D(3)
    0x5df615381f10 ---------A   01590 IF D(3)<3 THEN 1650
    0x5df6153820a0 ---------A   01600 PRINT "HERE COMES THE BULL.  TRY FOR A KILL";
    0x5df615382110 ---------A   01610 GOSUB 2850
    0x5df615382410 ---------A   01620 IF Z1=1 THEN 2050
    0x5df615382590 ---------A   01630 PRINT "CAPE MOVE";
    0x5df615382630 ---------A   01640 GOTO 1700
    0x5df615382bc0 ---------A T 01650 PRINT "THE BULL IS CHARGING AT YOU!  YOU ARE THE MATADOR--"
    0x5df615382d40 ---------A   01660 PRINT "DO YOU WANT TO KILL THE BULL";
    0x5df615382db0 ---------A   01670 GOSUB 2850
    0x5df615383010 ---------A   01680 IF Z1=1 THEN 2050
    0x5df6153831a0 ---------A   01690 PRINT "WHAT MOVE DO YOU MAKE WITH THE CAPE";
    0x5df6153833c0 ---------A T 01700 INPUT E
    0x5df615383800 ---------A   01710 IF E<>INT(ABS(E)) THEN 1730
    0x5df615383a90 ---------A   01720 IF E<3 THEN 1760
    0x5df615383c10 ---------A T 01730 PRINT "DON'T PANIC, YOU IDIOT!  PUT DOWN A CORRECT NUMBER"
    0x5df615383c80 ---------A   01740 GOTO 1700
    0x5df615383ce0 ---------A   01750 REM
    0x5df615383f40 ---------A T 01760 IF E=0 THEN 1820
    0x5df6153841a0 ---------A   01770 IF E=1 THEN 1800
    0x5df615384480 ---------A   01780 M=.5
    0x5df6153844f0 ---------A   01790 GOTO 1830
    0x5df6153846f0 ---------A T 01800 M=2
    0x5df615384760 ---------A   01810 GOTO 1830
    0x5df615384960 ---------A T 01820 M=3
    0x5df615384cd0 ---------A T 01830 L=L+M
    0x5df615385d20 ---------A   01840 F=(6-A+M/10)*RND(1)/((D(1)+D(2)+D(3)/10)*5)
    0x5df615385f80 ---------A   01850 IF F<.51 THEN 1540
    0x5df615386100 ---------A T 01860 PRINT "THE BULL HAS GORED YOU!"
    0x5df6153864a0 ---------A T 01870 ON FNA(0) GOTO 1880,1910
    0x5df6153865f0 ---------A T 01880 PRINT "YOU ARE DEAD."
    0x5df6153868c0 ---------A   01890 D(4)=1.5
    0x5df615386940 ---------A   01900 GOTO 2210
    0x5df615386ae0 ---------A T 01910 PRINT "YOU ARE STILL ALIVE.":PRINT
    0x5df615386c60 ---------A   01920 PRINT "DO YOU RUN FROM THE RING";
    0x5df615386cd0 ---------A   01930 GOSUB 2850
    0x5df615386f10 ---------A   01940 IF Z1=2 THEN 1980
    0x5df615387070 ---------A   01950 PRINT "COWARD"
    0x5df615387340 ---------A   01960 D(4)=0
    0x5df6153873d0 ---------A   01970 GOTO 2210
    0x5df615387530 ---------A T 01980 PRINT "YOU ARE BRAVE.  STUPID, BUT BRAVE."
    0x5df6153878c0 ---------A   01990 ON FNA(0) GOTO 2000,2020
    0x5df615387b90 ---------A T 02000 D(4)=2
    0x5df615387c10 ---------A   02010 GOTO 1540
    0x5df615387d50 ---------A T 02020 PRINT "YOU ARE GORED AGAIN!"
    0x5df615387dc0 ---------A   02030 GOTO 1870
    0x5df615387e20 ---------A   02040 REM
    0x5df615388060 ---------A T 02050 Z=1
    0x5df615388280 ---------A   02060 PRINT:PRINT "IT IS THE MOMENT OF TRUTH.":PRINT
    0x5df615388400 ---------A   02070 PRINT "HOW DO YOU TRY TO KILL THE BULL";
    0x5df615388610 ---------A   02080 INPUT H
    0x5df615388870 ---------A   02090 IF H=4 THEN 2130
    0x5df615388af0 ---------A   02100 IF H=5 THEN 2130
    0x5df615388c60 ---------A   02110 PRINT "YOU PANICKED.  THE BULL GORED YOU."
    0x5df615388cf0 ---------A   02120 GOTO 1870
    0x5df615389a50 ---------A T 02130 K=(6-A)*10*RND(1)/((D(1)+D(2))*5*D(3))
    0x5df615389d60 ---------A   02140 IF J=4 THEN 2190
    0x5df615389fd0 ---------A   02150 IF K>.2 THEN 1860
    0x5df61538a130 ---------A T 02160 PRINT "YOU KILLED THE BULL!"
    0x5df61538a400 ---------A   02170 D(5)=2
    0x5df61538a470 ---------A   02180 GOTO 2220
    0x5df61538a6b0 ---------A T 02190 IF K>.8 THEN 1860
    0x5df61538a730 ---------A   02200 GOTO 2160
    0x5df61538a790 ---------A T 02210 PRINT
    0x5df61538a800 ---------A T 02220 PRINT
    0x5df61538a880 ---------A   02230 PRINT
    0x5df61538abc0 ---------A   02240 IF D(4)<>0 THEN 2290
    0x5df61538ad80 ---------A   02250 PRINT "THE CROWD BOOS FOR TEN MINUTES.  IF YOU EVER DARE TO SHOW"
    0x5df61538af10 ---------A   02260 PRINT "YOUR FACE IN A RING AGAIN, THEY SWEAR THEY WILL KILL YOU--"
    0x5df61538b070 ---------A   02270 PRINT "UNLES THE BULL DOES FIRST."
    0x5df61538b110 ---------A   02280 GOTO 2480
    0x5df61538cfb0 ---------A T 02290 DEF FND(Q)=(4.5+L/6-(D(1)+D(2))*2.5+4*D(4)+2*D(5)-D(3)^2/120-A)
    0x5df61538d650 ---------A   02300 DEF FNC(Q)=FND(Q)*RND(1)
    0x5df61538d970 ---------A   02310 IF D(4)<>2 THEN 2340
    0x5df61538dae0 ---------A   02320 PRINT "THE CROWD CHEERS WILDLY!"
    0x5df61538db60 ---------A   02330 GOTO 2360
    0x5df61538de70 ---------A T 02340 IF D(5)<>2 THEN 2360
    0x5df61538e030 ---------A   02350 PRINT "THE CROWD CHEERS!":PRINT
    0x5df61538e190 ---------A T 02360 PRINT "THE CROWD AWARDS YOU"
    0x5df61538e4d0 ---------A   02370 IF FNC(Q)<2.4 THEN 2470
    0x5df61538e820 ---------A   02380 IF FNC(Q)<4.9 THEN 2450
    0x5df61538eb80 ---------A   02390 IF FNC(Q)<7.4 THEN 2420
    0x5df61538ed00 ---------A   02400 PRINT "OLE!  YOU ARE 'MUY HOMBRE'!! OLE!  OLE!"
    0x5df61538ed80 ---------A   02410 GOTO 2480
    0x5df61538eed0 ---------A T 02420 PRINT "BOTH EARS OF THE BULL!"
    0x5df61538f020 ---------A   02430 PRINT "OLE!"
    0x5df61538f0a0 ---------A   02440 GOTO 2480
    0x5df61538f1e0 ---------A T 02450 PRINT "ONE EAR OF THE BULL."
    0x5df61538f260 ---------A   02460 GOTO 2480
    0x5df61538f3a0 ---------A T 02470 PRINT "NOTHING AT ALL."
    0x5df61538f420 ---------A T 02480 PRINT
    0x5df61538f660 ---------A   02490 PRINT "ADIOS":PRINT:PRINT:PRINT
    0x5df61538f6d0 ---------A   02500 GOTO 2510
    0x5df615395a30 ---------A T 02510 END
    0x5df61538fc90 ---------B G 02520 B=3/A*RND(1)
    0x5df61538fee0 ---------B   02530 IF B<.37 THEN 2650
    0x5df615390140 ---------B   02540 IF B<.5 THEN 2630
    0x5df6153903a0 ---------B   02550 IF B<.63 THEN 2610
    0x5df615390600 ---------B   02560 IF B<.87 THEN 2590
    0x5df615390820 ---------B   02570 C=.1
    0x5df615390890 ---------B   02580 GOTO 2660
    0x5df615390a90 ---------B T 02590 C=.2
    0x5df615390b00 ---------B   02600 GOTO 2660
    0x5df615390d00 ---------B T 02610 C=.3
    0x5df615390d70 ---------B   02620 GOTO 2660
    0x5df615390f70 ---------B T 02630 C=.4
    0x5df615390fe0 ---------B   02640 GOTO 2660
    0x5df6153911e0 ---------B T 02650 C=.5
    0x5df6153917d0 ---------B T 02660 T=INT(10*C+.2)
    0x5df615391f00 ---------B   02670 PRINT "THE ";A$;B$;" DID A ";L$(T);" JOB."
    0x5df615392150 ---------B   02680 IF 4>T THEN 2810
    0x5df6153923c0 ---------B   02690 IF 5=T THEN 2780
    0x5df615392790 ---------B   02700 ON FNA(K) GOTO 2740,1860
    0x5df615392a30 ---------B   02710 IF A$="TOREAD" THEN 2730
    0x5df615392eb0 ---------B   02720 PRINT "ONE OF THE HORSES OF THE ";A$;B$;" WAS KILLED."
    0x5df615393280 ---------B T 02730 ON FNA(K) GOTO 2740,1860
    0x5df6153936d0 ---------B T 02740 PRINT "ONE OF THE ";A$;B$;" WAS KILLED."
    0x5df615393750 ---------B   02750 GOTO 2810
    0x5df615393b90 ---------B T 02760 PRINT "NO ";A$;B$;" WERE KILLED."
    0x5df615393c10 ---------B   02770 GOTO 2810
    0x5df615393ea0 ---------B T 02780 IF A$="TOREAD" THEN 2800
    0x5df615394500 ---------B   02790 PRINT FNA(K);"OF THE HORSES OF THE ";A$;B$;" KILLED."
    0x5df615394b30 ---------B T 02800 PRINT FNA(K);"OF THE ";A$;B$;" KILLED."
    0x5df615394ba0 ---------B T 02810 PRINT
    0x5df61539b610 ---------B   02820 GOTO 02830
    0x5df61539b650 ---------B T 02830 RETURN
    0x5df615394c70 ---------C   02840 REM
    0x5df615394de0 ---------C B 02850 INPUT A$
    0x5df615395070 ---------C   02860 IF A$="YES" THEN 2900
    0x5df615395320 ---------C   02870 IF A$="NO" THEN 2920
    0x5df6153954a0 ---------C   02880 PRINT "INCORRECT ANSWER - - PLEASE TYPE 'YES' OR 'NO'."
    0x5df615395510 ---------C   02890 GOTO 2850
    0x5df615395710 ---------C T 02900 Z1=1
    0x5df615395780 ---------C   02910 GOTO 2930
    0x5df615395980 ---------C T 02920 Z1=2
    0x5df61539b690 ---------C T 02930 GOTO 02940
    0x5df61539b6f0 ---------C T 02940 RETURN
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
char* data_01360s[]={"SUPERB","GOOD","FAIR","POOR","AWFUL"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1360,  5,data_01360s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
float  A_flt;                                     // Basic: A 
char*  A_str;                                     // Basic: A$ 
float  B_flt;                                     // Basic: B 
char*  B_str;                                     // Basic: B$ 
float  C_flt;                                     // Basic: C 
float  D_flt_arr[10];                             // Basic: D 
float  E_flt;                                     // Basic: E 
float  F_flt;                                     // Basic: F 
float  FNA_flt_arr[10];                           // Basic: FNA 
float  FNC_flt_arr[10];                           // Basic: FNC 
float  FND_flt_arr[10];                           // Basic: FND 
float  H_flt;                                     // Basic: H 
float  I_flt;                                     // Basic: I 
float  J_flt;                                     // Basic: J 
float  K_flt;                                     // Basic: K 
float  L_flt;                                     // Basic: L 
char*  L_str_arr[5];                              // Basic: L$ 
float  M_flt;                                     // Basic: M 
float  Q_flt;                                     // Basic: Q 
float  T_flt;                                     // Basic: T 
float  Z_flt;                                     // Basic: Z 
char*  Z_str;                                     // Basic: Z$ 
float  Z1_flt;                                    // Basic: Z1 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02520();
void Routine_02850();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused K
int FNA(float K){
    int rtn=INT(RND(1)*2+1);
    return(rtn);
}

#pragma argsused Q
int FND(float Q){
    int rtn=(4.5+L_flt/6-(D_flt_arr[1]+D_flt_arr[2])*2.5+4*D_flt_arr[4]+2*D_flt_arr[5]-FPower(D_flt_arr[3],2)/120-A_flt);
    return(rtn);
}

#pragma argsused Q
int FNC(float Q){
    int rtn=FND_flt_arr[(int)Q_flt]*RND(1);
    return(rtn);
}

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

void Routine_02520(){
    // 02520 B=3/A*RND(1)
    B_flt = 3/A_flt*RND(1);
    // 02530 IF B<.37 THEN 2650
    if(B_flt<0.37)goto Lbl_02650;
    // 02540 IF B<.5 THEN 2630
    if(B_flt<0.5)goto Lbl_02630;
    // 02550 IF B<.63 THEN 2610
    if(B_flt<0.63)goto Lbl_02610;
    // 02560 IF B<.87 THEN 2590
    if(B_flt<0.87)goto Lbl_02590;
    // 02570 C=.1
    C_flt = 0.1;
    // 02580 GOTO 2660
    goto Lbl_02660;

  Lbl_02590:
    // 02590 C=.2
    C_flt = 0.2;
    // 02600 GOTO 2660
    goto Lbl_02660;

  Lbl_02610:
    // 02610 C=.3
    C_flt = 0.3;
    // 02620 GOTO 2660
    goto Lbl_02660;

  Lbl_02630:
    // 02630 C=.4
    C_flt = 0.4;
    // 02640 GOTO 2660
    goto Lbl_02660;

  Lbl_02650:
    // 02650 C=.5
    C_flt = 0.5;

  Lbl_02660:
    // 02660 T=INT(10*C+.2)
    T_flt = INT(10*C_flt+0.2);
    // 02670 PRINT "THE ";A$;B$;" DID A ";L$(T);" JOB."
    b2c_printf("The %sThe %sThe  did a  did a %s did a  job.\n",A_str,B_str,L_str_arr[(int)T_flt]);
    // 02680 IF 4>T THEN 2810
    if(4>T_flt)goto Lbl_02810;
    // 02690 IF 5=T THEN 2780
    if(5==T_flt)goto Lbl_02780;
    // 02700 ON FNA(K) GOTO 2740,1860
    switch((int)(FNA_flt_arr[(int)K_flt])){
        case 1: goto Lbl_02740;
        case 2: goto Lbl_02760;
        default: break; 
    };
    // 02710 IF A$="TOREAD" THEN 2730
    if(strcmp(A_str,"Toread")==0)goto Lbl_02730;
    // 02720 PRINT "ONE OF THE HORSES OF THE ";A$;B$;" WAS KILLED."
    b2c_printf("One of the horses of the %sOne of the horses of the %sOne of the horses of the  was killed.\n",A_str,B_str);

  Lbl_02730:
    // 02730 ON FNA(K) GOTO 2740,1860
    switch((int)(FNA_flt_arr[(int)K_flt])){
        case 1: goto Lbl_02740;
        case 2: goto Lbl_02760;
        default: break; 
    };

  Lbl_02740:
    // 02740 PRINT "ONE OF THE ";A$;B$;" WAS KILLED."
    b2c_printf("One of the %sOne of the %sOne of the  was killed.\n",A_str,B_str);
    // 02750 GOTO 2810
    goto Lbl_02810;

  Lbl_02760:
    // 02760 PRINT "NO ";A$;B$;" WERE KILLED."
    b2c_printf("No %sNo %sNo  were killed.\n",A_str,B_str);
    // 02770 GOTO 2810
    goto Lbl_02810;

  Lbl_02780:
    // 02780 IF A$="TOREAD" THEN 2800
    if(strcmp(A_str,"Toread")==0)goto Lbl_02800;
    // 02790 PRINT FNA(K);"OF THE HORSES OF THE ";A$;B$;" KILLED."
    b2c_printf(" %.2f ‰9ö]Of the horses of the Of the horses of the %sOf the horses of the %sOf the horses of the  killed.\n",FNA_flt_arr[(int)K_flt],A_str,B_str);

  Lbl_02800:
    // 02800 PRINT FNA(K);"OF THE ";A$;B$;" KILLED."
    b2c_printf(" %.2f ‹rŸÿOf the Of the %sOf the %sOf the  killed.\n",FNA_flt_arr[(int)K_flt],A_str,B_str);

  Lbl_02810:
    // 02810 PRINT
    b2c_printf("\n");
    // 02820 GOTO 02830
    goto Lbl_02830;

  Lbl_02830:
    // 02830 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 02840 REM

void Routine_02850(){

  Lbl_02850:
    // 02850 INPUT A$
    // Start of Basic INPUT statement 02850
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
    }; // End of Basic INPUT statement 02850
    // 02860 IF A$="YES" THEN 2900
    if(strcmp(A_str,"Yes")==0)goto Lbl_02900;
    // 02870 IF A$="NO" THEN 2920
    if(strcmp(A_str,"No")==0)goto Lbl_02920;
    // 02880 PRINT "INCORRECT ANSWER - - PLEASE TYPE 'YES' OR 'NO'."
    b2c_printf("Incorrect answer - - please type 'yes' or 'no'.\n");
    // 02890 GOTO 2850
    goto Lbl_02850;

  Lbl_02900:
    // 02900 Z1=1
    Z1_flt = 1;
    // 02910 GOTO 2930
    goto Lbl_02930;

  Lbl_02920:
    // 02920 Z1=2
    Z1_flt = 2;

  Lbl_02930:
    // 02930 GOTO 02940
    goto Lbl_02940;

  Lbl_02940:
    // 02940 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
