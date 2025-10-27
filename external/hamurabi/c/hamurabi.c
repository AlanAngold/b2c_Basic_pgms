/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/hamurabi.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60538dfa1b80 ---------A   00010 PRINT TAB(32);"HAMURABI"
    0x60538dfa2f30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60538dfa30b0 ---------A   00030 PRINT:PRINT:PRINT
    0x60538dfa07f0 ---------A   00080 PRINT "TRY YOUR HAND AT GOVERNING ANCIENT SUMERIA"
    0x60538dfa2af0 ---------A   00090 PRINT "FOR A TEN-YEAR TERM OF OFFICE.":PRINT
    0x60538dfa3180 ---------A   00095 D1=0: P1=0
    0x60538dfa9270 ---------A   00100 Z=0: P=95:S=2800: H=3000: E=H-S
    0x60538dfa9e90 ---------A   00110 Y=3: A=H/Y: I=5: Q=1
    0x60538dfaa190 ---------A T 00210 D=0
    0x60538dfaa650 ---------A T 00215 PRINT:PRINT:PRINT "HAMURABI:  I BEG TO REPORT TO YOU,": Z=Z+1
    0x60538dfaada0 ---------A   00217 PRINT "IN YEAR";Z;",";D;"PEOPLE STARVED,";I;"CAME TO THE CITY,"
    0x60538dfab0f0 ---------A   00218 P=P+I
    0x60538dfa06d0 ---------A   00227 IF Q>0 THEN 230
    0x60538dfab730 ---------A   00228 P=INT(P/2)
    0x60538dfab880 ---------A   00229 PRINT "A HORRIBLE PLAGUE STRUCK!  HALF THE PEOPLE DIED."
    0x60538dfabaf0 ---------A T 00230 PRINT "POPULATION IS NOW";P
    0x60538dfabe60 ---------A   00232 PRINT "THE CITY NOW OWNS ";A;"ACRES."
    0x60538dfac190 ---------A   00235 PRINT "YOU HARVESTED";Y;"BUSHELS PER ACRE."
    0x60538dfac500 ---------A   00250 PRINT "THE RATS ATE";E;"BUSHELS."
    0x60538dfac8a0 ---------A   00260 PRINT "YOU NOW HAVE ";S;"BUSHELS IN STORE.": PRINT
    0x60538dfa0670 ---------A   00270 IF Z=11 THEN 860
    0x60538dfad340 ---------A   00310 C=INT(10*RND(1)): Y=C+17
    0x60538dfad6b0 ---------A   00312 PRINT "LAND IS TRADING AT";Y;"BUSHELS PER ACRE."
    0x60538dfad810 ---------A T 00320 PRINT "HOW MANY ACRES DO YOU WISH TO BUY";
    0x60538dfadba0 ---------A   00321 INPUT Q: IF Q<0 THEN 850
    0x60538dfadf40 ---------A   00322 IF Y*Q<=S THEN 330
    0x60538dfadfc0 ---------A   00323 GOSUB 710
    0x60538dfae020 ---------A   00324 GOTO 320
    0x60538dfae260 ---------A T 00330 IF Q=0 THEN 340
    0x60538dfaec00 ---------A   00331 A=A+Q: S=S-Y*Q: C=0
    0x60538dfaec90 ---------A   00334 GOTO 400
    0x60538dfaee10 ---------A T 00340 PRINT "HOW MANY ACRES DO YOU WISH TO SELL";
    0x60538dfaf1a0 ---------A   00341 INPUT Q: IF Q<0 THEN 850
    0x60538dfaf630 ---------A   00342 IF Q<A THEN 350
    0x60538dfaf6b0 ---------A   00343 GOSUB 720
    0x60538dfaf710 ---------A   00344 GOTO 340
    0x60538dfb0090 ---------A T 00350 A=A-Q: S=S+Y*Q: C=0
    0x60538dfb0130 ---------A T 00400 PRINT
    0x60538dfb02c0 ---------A T 00410 PRINT "HOW MANY BUSHELS DO YOU WISH TO FEED YOUR PEOPLE";
    0x60538dfb0410 ---------A   00411 INPUT Q
    0x60538dfb0690 ---------A   00412 IF Q<0 THEN 850
    0x60538dfb0730 ---------A   00418 REM *** TRYING TO USE MORE GRAIN THAN IS IN SILOS?
    0x60538dfb09b0 ---------A   00420 IF Q<=S THEN 430
    0x60538dfb0a30 ---------A   00421 GOSUB 710
    0x60538dfb0a90 ---------A   00422 GOTO 410
    0x60538dfb1040 ---------A T 00430 S=S-Q: C=1: PRINT
    0x60538dfb11e0 ---------A T 00440 PRINT "HOW MANY ACRES DO YOU WISH TO PLANT WITH SEED";
    0x60538dfb1570 ---------A   00441 INPUT D: IF D=0 THEN 511
    0x60538dfb17f0 ---------A   00442 IF D<0 THEN 850
    0x60538dfb1890 ---------A   00444 REM *** TRYING TO PLANT MORE ACRES THAN YOU OWN?
    0x60538dfb1b10 ---------A   00445 IF D<=A THEN 450
    0x60538dfb1b90 ---------A   00446 GOSUB 720
    0x60538dfb1c00 ---------A   00447 GOTO 440
    0x60538dfb1c70 ---------A   00449 REM *** ENOUGH GRAIN FOR SEED?
    0x60538dfb20e0 ---------A T 00450 IF INT(D/2)<=S THEN 455
    0x60538dfb2160 ---------A   00452 GOSUB 710
    0x60538dfb21e0 ---------A   00453 GOTO 440
    0x60538dfb2260 ---------A   00454 REM *** ENOUGH PEOPLE TO TEND THE CROPS?
    0x60538dfb2610 ---------A T 00455 IF D<10*P THEN 510
    0x60538dfb2980 ---------A   00460 PRINT "BUT YOU HAVE ONLY";P;"PEOPLE TO TEND THE FIELDS!  NOW THEN,"
    0x60538dfb29f0 ---------A   00470 GOTO 440
    0x60538dfb2f10 ---------A T 00510 S=S-INT(D/2)
    0x60538dfb2f90 ---------A T 00511 GOSUB 800
    0x60538dfb3000 ---------A   00512 REM *** A BOUNTIFUL HARVEST!
    0x60538dfb3760 ---------A   00515 Y=C: H=D*Y: E=0
    0x60538dfb3bf0 ---------A   00521 GOSUB 800
    0x60538dfb4140 ---------A   00522 IF INT(C/2)<>C/2 THEN 530
    0x60538dfb41d0 ---------A   00523 REM *** RATS ARE RUNNING WILD!!
    0x60538dfb4610 ---------A   00525 E=INT(S/C)
    0x60538dfb4a80 ---------A T 00530 S=S-E+H
    0x60538dfb4b00 ---------A   00531 GOSUB 800
    0x60538dfb4b70 ---------A   00532 REM *** LET'S HAVE SOME BABIES
    0x60538dfb5560 ---------A   00533 I=INT(C*(20*A+S)/P/100+1)
    0x60538dfb55f0 ---------A   00539 REM *** HOW MANY PEOPLE HAD FULL TUMMIES?
    0x60538dfb5a30 ---------A   00540 C=INT(Q/20)
    0x60538dfb5ab0 ---------A   00541 REM *** HORROS, A 15% CHANCE OF PLAGUE
    0x60538dfb61e0 ---------A   00542 Q=INT(10*(2*RND(1)-.3))
    0x60538dfb6470 ---------A   00550 IF P<C THEN 210
    0x60538dfb6500 ---------A   00551 REM *** STARVE ENOUGH FOR IMPEACHMENT?
    0x60538dfb6bd0 ---------A   00552 D=P-C: IF D>.45*P THEN 560
    0x60538dfb7520 ---------A   00553 P1=((Z-1)*P1+D*100/P)/Z
    0x60538dfb7b00 ---------A   00555 P=C: D1=D1+D: GOTO 215
    0x60538dfb7ec0 ---------A T 00560 PRINT: PRINT "YOU STARVED";D;"PEOPLE IN ONE YEAR!!!"
    0x60538dfb8060 ---------A T 00565 PRINT "DUE TO THIS EXTREME MISMANAGEMENT YOU HAVE NOT ONLY"
    0x60538dfb8200 ---------A   00566 PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE BUT YOU HAVE"
    0x60538dfb83d0 ---------A   00567 PRINT "ALSO BEEN DECLARED NATIONAL FINK!!!!": GOTO 990
    0x60538dfb8550 ---------B G 00710 PRINT "HAMURABI:  THINK AGAIN.  YOU HAVE ONLY"
    0x60538dfb87b0 ---------B   00711 PRINT S;"BUSHELS OF GRAIN.  NOW THEN,"
    0x60538dfb8800 ---------B   00712 RETURN
    0x60538dfb8ba0 ---------C G 00720 PRINT "HAMURABI:  THINK AGAIN.  YOU OWN ONLY";A;"ACRES.  NOW THEN,"
    0x60538dfb8bf0 ---------C   00730 RETURN
    0x60538dfb91d0 ---------D G 00800 C=INT(RND(1)*5)+1
    0x60538dfb9220 ---------D   00801 RETURN
    0x60538dfb9430 ---------A T 00850 PRINT: PRINT "HAMURABI:  I CANNOT DO WHAT YOU WISH."
    0x60538dfb9590 ---------A   00855 PRINT "GET YOURSELF ANOTHER STEWARD!!!!!"
    0x60538dfb9630 ---------A   00857 GOTO 990
    0x60538dfb99b0 ---------A T 00860 PRINT "IN YOUR 10-YEAR TERM OF OFFICE,";P1;"PERCENT OF THE"
    0x60538dfb9b40 ---------A   00862 PRINT "POPULATION STARVED PER YEAR ON THE AVERAGE, I.E. A TOTAL OF"
    0x60538dfba1b0 ---------A   00865 PRINT D1;"PEOPLE DIED!!": L=A/P
    0x60538dfba330 ---------A   00870 PRINT "YOU STARTED WITH 10 ACRES PER PERSON AND ENDED WITH"
    0x60538dfba5d0 ---------A   00875 PRINT L;"ACRES PER PERSON.": PRINT
    0x60538dfba820 ---------A   00880 IF P1>33 THEN 565
    0x60538dfbaa80 ---------A   00885 IF L<7 THEN 565
    0x60538dfbace0 ---------A   00890 IF P1>10 THEN 940
    0x60538dfbaf40 ---------A   00892 IF L<9 THEN 940
    0x60538dfbb1a0 ---------A   00895 IF P1>3 THEN 960
    0x60538dfbb430 ---------A   00896 IF L<10 THEN 960
    0x60538dfbb5f0 ---------A   00900 PRINT "A FANTASTIC PERFORMANCE!!!  CHARLEMANGE, DISRAELI, AND"
    0x60538dfbb7e0 ---------A   00905 PRINT "JEFFERSON COMBINED COULD NOT HAVE DONE BETTER!":GOTO 990
    0x60538dfbb980 ---------A T 00940 PRINT "YOUR HEAVY-HANDED PERFORMANCE SMACKS OF NERO AND IVAN IV."
    0x60538dfbbb20 ---------A   00945 PRINT "THE PEOPLE (REMIANING) FIND YOU AN UNPLEASANT RULER, AND,"
    0x60538dfbbd00 ---------A   00950 PRINT "FRANKLY, HATE YOUR GUTS!!":GOTO 990
    0x60538dfbbe90 ---------A T 00960 PRINT "YOUR PERFORMANCE COULD HAVE BEEN SOMEWHAT BETTER, BUT"
    0x60538dfbc5f0 ---------A   00965 PRINT "REALLY WASN'T TOO BAD AT ALL. ";INT(P*.8*RND(1));"PEOPLE"
    0x60538dfbc780 ---------A   00970 PRINT "WOULD DEARLY LIKE TO SEE YOU ASSASSINATED BUT WE ALL HAVE OUR"
    0x60538dfbc8f0 ---------A   00975 PRINT "TRIVIAL PROBLEMS."
    0x60538dfbd000 ---------A T 00990 PRINT: FOR N=1 TO 10: PRINT CHR$(7);: NEXT N
    0x60538dfbd1c0 ---------A   00995 PRINT "SO LONG FOR NOW.": PRINT
    0x60538dfbd210 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00210      00550T
     00215      00555T
     00230      00227T
     00320      00324T
     00330      00322T
     00340      00330T, 00344T
     00350      00342T
     00400      00334T
     00410      00422T
     00430      00420T
     00440      00447T, 00453T, 00470T
     00450      00445T
     00455      00450T
     00510      00455T
     00511      00441T
     00530      00522T
     00560      00552T
     00565      00880T, 00885T
     00710      00323G, 00421G, 00452G
     00720      00343G, 00446G
     00800      00511G, 00521G, 00531G
     00850      00321T, 00341T, 00412T, 00442T
     00860      00270T
     00940      00890T, 00892T
     00960      00895T, 00896T
     00990      00567T, 00857T, 00905T, 00950T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x60538dfa1b80 (00010)   0x60538dfa1b80 (00010)   0x60538dfbd210 (00999)   0x60538dfbd210 (00999)   
   B) 0x60538dfb8550 (00710)   0x60538dfb8550 (00710)   0x60538dfb8800 (00712)   0x60538dfb8800 (00712)   
   C) 0x60538dfb8ba0 (00720)   0x60538dfb8ba0 (00720)   0x60538dfb8bf0 (00730)   0x60538dfb8bf0 (00730)   
   D) 0x60538dfb91d0 (00800)   0x60538dfb91d0 (00800)   0x60538dfb9220 (00801)   0x60538dfb9220 (00801)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02220 - 10000    7790 

 */



/*
 *  Symbol Table Listing for 'basic/hamurabi.bas'
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
    D1                       Integer     
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    L                        Integer     
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
    P                        Integer     
    P1                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
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
    Y                        Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/hamurabi.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60538dfa1b80 ---------A   01000 PRINT TAB(32);"HAMURABI"
    0x60538dfa2f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60538dfa30b0 ---------A   01020 PRINT:PRINT:PRINT
    0x60538dfa07f0 ---------A   01030 PRINT "TRY YOUR HAND AT GOVERNING ANCIENT SUMERIA"
    0x60538dfa2af0 ---------A   01040 PRINT "FOR A TEN-YEAR TERM OF OFFICE.":PRINT
    0x60538dfa3180 ---------A   01050 D1=0: P1=0
    0x60538dfa9270 ---------A   01060 Z=0: P=95:S=2800: H=3000: E=H-S
    0x60538dfa9e90 ---------A   01070 Y=3: A=H/Y: I=5: Q=1
    0x60538dfaa190 ---------A T 01080 D=0
    0x60538dfaa650 ---------A T 01090 PRINT:PRINT:PRINT "HAMURABI:  I BEG TO REPORT TO YOU,": Z=Z+1
    0x60538dfaada0 ---------A   01100 PRINT "IN YEAR";Z;",";D;"PEOPLE STARVED,";I;"CAME TO THE CITY,"
    0x60538dfab0f0 ---------A   01110 P=P+I
    0x60538dfa06d0 ---------A   01120 IF Q>0 THEN 1150
    0x60538dfab730 ---------A   01130 P=INT(P/2)
    0x60538dfab880 ---------A   01140 PRINT "A HORRIBLE PLAGUE STRUCK!  HALF THE PEOPLE DIED."
    0x60538dfabaf0 ---------A T 01150 PRINT "POPULATION IS NOW";P
    0x60538dfabe60 ---------A   01160 PRINT "THE CITY NOW OWNS ";A;"ACRES."
    0x60538dfac190 ---------A   01170 PRINT "YOU HARVESTED";Y;"BUSHELS PER ACRE."
    0x60538dfac500 ---------A   01180 PRINT "THE RATS ATE";E;"BUSHELS."
    0x60538dfac8a0 ---------A   01190 PRINT "YOU NOW HAVE ";S;"BUSHELS IN STORE.": PRINT
    0x60538dfa0670 ---------A   01200 IF Z=11 THEN 1890
    0x60538dfad340 ---------A   01210 C=INT(10*RND(1)): Y=C+17
    0x60538dfad6b0 ---------A   01220 PRINT "LAND IS TRADING AT";Y;"BUSHELS PER ACRE."
    0x60538dfad810 ---------A T 01230 PRINT "HOW MANY ACRES DO YOU WISH TO BUY";
    0x60538dfadba0 ---------A   01240 INPUT Q: IF Q<0 THEN 1860
    0x60538dfadf40 ---------A   01250 IF Y*Q<=S THEN 1280
    0x60538dfadfc0 ---------A   01260 GOSUB 2120
    0x60538dfae020 ---------A   01270 GOTO 1230
    0x60538dfae260 ---------A T 01280 IF Q=0 THEN 1310
    0x60538dfaec00 ---------A   01290 A=A+Q: S=S-Y*Q: C=0
    0x60538dfaec90 ---------A   01300 GOTO 1370
    0x60538dfaee10 ---------A T 01310 PRINT "HOW MANY ACRES DO YOU WISH TO SELL";
    0x60538dfaf1a0 ---------A   01320 INPUT Q: IF Q<0 THEN 1860
    0x60538dfaf630 ---------A   01330 IF Q<A THEN 1360
    0x60538dfaf6b0 ---------A   01340 GOSUB 2160
    0x60538dfaf710 ---------A   01350 GOTO 1310
    0x60538dfb0090 ---------A T 01360 A=A-Q: S=S+Y*Q: C=0
    0x60538dfb0130 ---------A T 01370 PRINT
    0x60538dfb02c0 ---------A T 01380 PRINT "HOW MANY BUSHELS DO YOU WISH TO FEED YOUR PEOPLE";
    0x60538dfb0410 ---------A   01390 INPUT Q
    0x60538dfb0690 ---------A   01400 IF Q<0 THEN 1860
    0x60538dfb0730 ---------A   01410 REM *** TRYING TO USE MORE GRAIN THAN IS IN SILOS?
    0x60538dfb09b0 ---------A   01420 IF Q<=S THEN 1450
    0x60538dfb0a30 ---------A   01430 GOSUB 2120
    0x60538dfb0a90 ---------A   01440 GOTO 1380
    0x60538dfb1040 ---------A T 01450 S=S-Q: C=1: PRINT
    0x60538dfb11e0 ---------A T 01460 PRINT "HOW MANY ACRES DO YOU WISH TO PLANT WITH SEED";
    0x60538dfb1570 ---------A   01470 INPUT D: IF D=0 THEN 1620
    0x60538dfb17f0 ---------A   01480 IF D<0 THEN 1860
    0x60538dfb1890 ---------A   01490 REM *** TRYING TO PLANT MORE ACRES THAN YOU OWN?
    0x60538dfb1b10 ---------A   01500 IF D<=A THEN 1540
    0x60538dfb1b90 ---------A   01510 GOSUB 2160
    0x60538dfb1c00 ---------A   01520 GOTO 1460
    0x60538dfb1c70 ---------A   01530 REM *** ENOUGH GRAIN FOR SEED?
    0x60538dfb20e0 ---------A T 01540 IF INT(D/2)<=S THEN 1580
    0x60538dfb2160 ---------A   01550 GOSUB 2120
    0x60538dfb21e0 ---------A   01560 GOTO 1460
    0x60538dfb2260 ---------A   01570 REM *** ENOUGH PEOPLE TO TEND THE CROPS?
    0x60538dfb2610 ---------A T 01580 IF D<10*P THEN 1610
    0x60538dfb2980 ---------A   01590 PRINT "BUT YOU HAVE ONLY";P;"PEOPLE TO TEND THE FIELDS!  NOW THEN,"
    0x60538dfb29f0 ---------A   01600 GOTO 1460
    0x60538dfb2f10 ---------A T 01610 S=S-INT(D/2)
    0x60538dfb2f90 ---------A T 01620 GOSUB 2190
    0x60538dfb3000 ---------A   01630 REM *** A BOUNTIFUL HARVEST!
    0x60538dfb3760 ---------A   01640 Y=C: H=D*Y: E=0
    0x60538dfb3bf0 ---------A   01650 GOSUB 2190
    0x60538dfb4140 ---------A   01660 IF INT(C/2)<>C/2 THEN 1690
    0x60538dfb41d0 ---------A   01670 REM *** RATS ARE RUNNING WILD!!
    0x60538dfb4610 ---------A   01680 E=INT(S/C)
    0x60538dfb4a80 ---------A T 01690 S=S-E+H
    0x60538dfb4b00 ---------A   01700 GOSUB 2190
    0x60538dfb4b70 ---------A   01710 REM *** LET'S HAVE SOME BABIES
    0x60538dfb5560 ---------A   01720 I=INT(C*(20*A+S)/P/100+1)
    0x60538dfb55f0 ---------A   01730 REM *** HOW MANY PEOPLE HAD FULL TUMMIES?
    0x60538dfb5a30 ---------A   01740 C=INT(Q/20)
    0x60538dfb5ab0 ---------A   01750 REM *** HORROS, A 15% CHANCE OF PLAGUE
    0x60538dfb61e0 ---------A   01760 Q=INT(10*(2*RND(1)-.3))
    0x60538dfb6470 ---------A   01770 IF P<C THEN 1080
    0x60538dfb6500 ---------A   01780 REM *** STARVE ENOUGH FOR IMPEACHMENT?
    0x60538dfb6bd0 ---------A   01790 D=P-C: IF D>.45*P THEN 1820
    0x60538dfb7520 ---------A   01800 P1=((Z-1)*P1+D*100/P)/Z
    0x60538dfb7b00 ---------A   01810 P=C: D1=D1+D: GOTO 1090
    0x60538dfb7ec0 ---------A T 01820 PRINT: PRINT "YOU STARVED";D;"PEOPLE IN ONE YEAR!!!"
    0x60538dfb8060 ---------A T 01830 PRINT "DUE TO THIS EXTREME MISMANAGEMENT YOU HAVE NOT ONLY"
    0x60538dfb8200 ---------A   01840 PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE BUT YOU HAVE"
    0x60538dfb83d0 ---------A   01850 PRINT "ALSO BEEN DECLARED NATIONAL FINK!!!!": GOTO 2090
    0x60538dfb9430 ---------A T 01860 PRINT: PRINT "HAMURABI:  I CANNOT DO WHAT YOU WISH."
    0x60538dfb9590 ---------A   01870 PRINT "GET YOURSELF ANOTHER STEWARD!!!!!"
    0x60538dfb9630 ---------A   01880 GOTO 2090
    0x60538dfb99b0 ---------A T 01890 PRINT "IN YOUR 10-YEAR TERM OF OFFICE,";P1;"PERCENT OF THE"
    0x60538dfb9b40 ---------A   01900 PRINT "POPULATION STARVED PER YEAR ON THE AVERAGE, I.E. A TOTAL OF"
    0x60538dfba1b0 ---------A   01910 PRINT D1;"PEOPLE DIED!!": L=A/P
    0x60538dfba330 ---------A   01920 PRINT "YOU STARTED WITH 10 ACRES PER PERSON AND ENDED WITH"
    0x60538dfba5d0 ---------A   01930 PRINT L;"ACRES PER PERSON.": PRINT
    0x60538dfba820 ---------A   01940 IF P1>33 THEN 1830
    0x60538dfbaa80 ---------A   01950 IF L<7 THEN 1830
    0x60538dfbace0 ---------A   01960 IF P1>10 THEN 2020
    0x60538dfbaf40 ---------A   01970 IF L<9 THEN 2020
    0x60538dfbb1a0 ---------A   01980 IF P1>3 THEN 2050
    0x60538dfbb430 ---------A   01990 IF L<10 THEN 2050
    0x60538dfbb5f0 ---------A   02000 PRINT "A FANTASTIC PERFORMANCE!!!  CHARLEMANGE, DISRAELI, AND"
    0x60538dfbb7e0 ---------A   02010 PRINT "JEFFERSON COMBINED COULD NOT HAVE DONE BETTER!":GOTO 2090
    0x60538dfbb980 ---------A T 02020 PRINT "YOUR HEAVY-HANDED PERFORMANCE SMACKS OF NERO AND IVAN IV."
    0x60538dfbbb20 ---------A   02030 PRINT "THE PEOPLE (REMIANING) FIND YOU AN UNPLEASANT RULER, AND,"
    0x60538dfbbd00 ---------A   02040 PRINT "FRANKLY, HATE YOUR GUTS!!":GOTO 2090
    0x60538dfbbe90 ---------A T 02050 PRINT "YOUR PERFORMANCE COULD HAVE BEEN SOMEWHAT BETTER, BUT"
    0x60538dfbc5f0 ---------A   02060 PRINT "REALLY WASN'T TOO BAD AT ALL. ";INT(P*.8*RND(1));"PEOPLE"
    0x60538dfbc780 ---------A   02070 PRINT "WOULD DEARLY LIKE TO SEE YOU ASSASSINATED BUT WE ALL HAVE OUR"
    0x60538dfbc8f0 ---------A   02080 PRINT "TRIVIAL PROBLEMS."
    0x60538dfbd000 ---------A T 02090 PRINT: FOR N=1 TO 10: PRINT CHR$(7);: NEXT N
    0x60538dfbd1c0 ---------A   02100 PRINT "SO LONG FOR NOW.": PRINT
    0x60538dfbd210 ---------A   02110 END
    0x60538dfb8550 ---------B G 02120 PRINT "HAMURABI:  THINK AGAIN.  YOU HAVE ONLY"
    0x60538dfb87b0 ---------B   02130 PRINT S;"BUSHELS OF GRAIN.  NOW THEN,"
    0x60538dfc0ff0 ---------B   02140 GOTO 02150
    0x60538dfc1030 ---------B T 02150 RETURN
    0x60538dfb8ba0 ---------C G 02160 PRINT "HAMURABI:  THINK AGAIN.  YOU OWN ONLY";A;"ACRES.  NOW THEN,"
    0x60538dfc1070 ---------C   02170 GOTO 02180
    0x60538dfc10d0 ---------C T 02180 RETURN
    0x60538dfb91d0 ---------D G 02190 C=INT(RND(1)*5)+1
    0x60538dfc1130 ---------D   02200 GOTO 02210
    0x60538dfc1190 ---------D T 02210 RETURN
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
int    D1_int;                                    // Basic: D1 
int    E_int;                                     // Basic: E 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
int    P1_int;                                    // Basic: P1 
int    Q_int;                                     // Basic: Q 
int    S_int;                                     // Basic: S 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02120();
void Routine_02160();
void Routine_02190();

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

void Routine_02120(){
    // 02120 PRINT "HAMURABI:  THINK AGAIN.  YOU HAVE ONLY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAMURABI:  THINK AGAIN.  YOU HAVE ONLY");strcat(buf,"\n");fputs(buf,fh); };
    // 02130 PRINT S;"BUSHELS OF GRAIN.  NOW THEN,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,S_int);strcat(buf,"BUSHELS OF GRAIN.  NOW THEN,");strcat(buf,"\n");fputs(buf,fh); };
    // 02140 GOTO 02150
    goto Lbl_02150;

  Lbl_02150:
    // 02150 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02160(){
    // 02160 PRINT "HAMURABI:  THINK AGAIN.  YOU OWN ONLY";A;"ACRES.  NOW THEN,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAMURABI:  THINK AGAIN.  YOU OWN ONLY"); b2c_INT(buf,A_int);strcat(buf,"ACRES.  NOW THEN,");strcat(buf,"\n");fputs(buf,fh); };
    // 02170 GOTO 02180
    goto Lbl_02180;

  Lbl_02180:
    // 02180 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_02190(){
    // 02190 C=INT(RND(1)*5)+1
    C_int = INT(RND(1)*5)+1;
    // 02200 GOTO 02210
    goto Lbl_02210;

  Lbl_02210:
    // 02210 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
