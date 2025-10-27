/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/weekday.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ecf79724b80 ---------A   00010 PRINT TAB(32);"WEEKDAY"
    0x5ecf79725f30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ecf797260b0 ---------A   00030 PRINT:PRINT:PRINT
    0x5ecf797237f0 ---------A   00100 PRINT "WEEKDAY IS A COMPUTER DEMONSTRATION THAT"
    0x5ecf79725ae0 ---------A   00110 PRINT"GIVES FACTS ABOUT A DATE OF INTEREST TO YOU."
    0x5ecf79723e40 ---------A   00120 PRINT
    0x5ecf797244e0 ---------A   00130 PRINT "ENTER TODAY'S DATE IN THE FORM: 3,24,1979  ";
    0x5ecf797236d0 ---------A   00140 INPUT M1,D1,Y1
    0x5ecf797247c0 ---------A   00150 REM THIS PROGRAM DETERMINES THE DAY OF THE WEEK
    0x5ecf79724800 ---------A   00160 REM  FOR A DATE AFTER 1582
    0x5ecf79724040 ---------A   00170 DEF FNA(A)=INT(A/4)
    0x5ecf7972bfc0 ---------A   00180 DIM T(12)
    0x5ecf7972c570 ---------A   00190 DEF FNB(A)=INT(A/7)
    0x5ecf7972c600 ---------A   00200 REM SPACE OUTPUT AND READ IN INITIAL VALUES FOR MONTHS.
    0x5ecf79723670 ---------A   00210 FOR I= 1 TO 12
    0x5ecf7972cb80 ---------A   00220 READ T(I)
    0x5ecf7972cca0 ---------A   00230 NEXT I
    0x5ecf7972ce70 ---------A   00240 PRINT"ENTER DAY OF BIRTH (OR OTHER DAY OF INTEREST)";
    0x5ecf7972d3c0 ---------A   00250 INPUT M,D,Y
    0x5ecf7972d420 ---------A   00260 PRINT
    0x5ecf7972da50 ---------A   00270 LET I1 = INT((Y-1500)/100)
    0x5ecf7972dae0 ---------A   00280 REM TEST FOR DATE BEFORE CURRENT CALENDAR.
    0x5ecf7972de00 ---------A   00290 IF Y-1582 <0 THEN 1300
    0x5ecf7972e480 ---------A   00300 LET A = I1*5+(I1+3)/4
    0x5ecf7972eb50 ---------A   00310 LET I2=INT(A-FNB(A)*7)
    0x5ecf7972f000 ---------A   00320 LET Y2=INT(Y/100)
    0x5ecf7972f5d0 ---------A   00330 LET Y3 =INT(Y-Y2*100)
    0x5ecf7972fe70 ---------A   00340 LET A =Y3/4+Y3+D+T(M)+I2
    0x5ecf79730640 ---------A   00350 LET B=INT(A-FNB(A)*7)+1
    0x5ecf79730890 ---------A   00360 IF M > 2 THEN 470
    0x5ecf79730b00 ---------A   00370 IF Y3 = 0 THEN 440
    0x5ecf797311e0 ---------A   00380 LET T1=INT(Y-FNA(Y)*4)
    0x5ecf79731430 ---------A   00390 IF T1 <> 0 THEN 470
    0x5ecf797318a0 ---------A T 00400 IF B<>0 THEN 420
    0x5ecf79731ac0 ---------A   00410 LET B=6
    0x5ecf79731df0 ---------A T 00420 LET B = B-1
    0x5ecf79731e60 ---------A   00430 GOTO 470
    0x5ecf79732190 ---------A T 00440 LET A = I1-1
    0x5ecf797327a0 ---------A   00450 LET T1=INT(A-FNA(A)*4)
    0x5ecf797329f0 ---------A   00460 IF T1 = 0 THEN 400
    0x5ecf79732c50 ---------A T 00470 IF B <>0 THEN 490
    0x5ecf79732e90 ---------A   00480 LET B = 7
    0x5ecf79733a20 ---------A T 00490 IF (Y1*12+M1)*31+D1<(Y*12+M)*31+D THEN 550
    0x5ecf797345b0 ---------A   00500 IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 530
    0x5ecf79734c30 ---------A   00510 PRINT M;"/";D;"/";Y;" WAS A ";
    0x5ecf79734cb0 ---------A   00520 GOTO 570
    0x5ecf79735310 ---------A T 00530 PRINT M;"/";D;"/";Y;" IS A ";
    0x5ecf79735390 ---------A   00540 GOTO 570
    0x5ecf79735a10 ---------A T 00550 PRINT M;"/";D;"/";Y;" WILL BE A ";
    0x5ecf79735aa0 ---------A   00560 REM PRINT THE DAY OF THE WEEK THE DATE FALLS ON.
    0x5ecf79735d00 ---------A T 00570 IF B <>1 THEN 590
    0x5ecf79735e60 ---------A   00580 PRINT "SUNDAY."
    0x5ecf797360b0 ---------A T 00590 IF B<>2 THEN 610
    0x5ecf79736210 ---------A   00600 PRINT "MONDAY."
    0x5ecf79736460 ---------A T 00610 IF B<>3 THEN 630
    0x5ecf797365c0 ---------A   00620 PRINT "TUESDAY."
    0x5ecf79736810 ---------A T 00630 IF B<>4 THEN 650
    0x5ecf79736970 ---------A   00640 PRINT "WEDNESDAY."
    0x5ecf79736bc0 ---------A T 00650 IF B<>5 THEN 670
    0x5ecf79736d20 ---------A   00660 PRINT "THURSDAY."
    0x5ecf79736f70 ---------A T 00670 IF B<>6 THEN 690
    0x5ecf79736ff0 ---------A   00680 GOTO 1250
    0x5ecf79737230 ---------A T 00690 IF B<>7 THEN 710
    0x5ecf797373b0 ---------A   00700 PRINT "SATURDAY."
    0x5ecf79737f20 ---------A T 00710 IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 1120
    0x5ecf79738750 ---------A   00720 LET I5=Y1-Y
    0x5ecf797387c0 ---------A   00730 PRINT
    0x5ecf79738bd0 ---------A   00740 LET I6=M1-M
    0x5ecf79738fe0 ---------A   00750 LET I7=D1-D
    0x5ecf79739230 ---------A   00760 IF I7>=0 THEN 790
    0x5ecf79739570 ---------A   00770 LET I6= I6-1
    0x5ecf797398a0 ---------A   00780 LET I7=I7+30
    0x5ecf79739af0 ---------A T 00790 IF I6>=0 THEN 820
    0x5ecf79739e30 ---------A   00800 LET I5=I5-1
    0x5ecf7973a160 ---------A   00810 LET I6=I6+12
    0x5ecf7973a3b0 ---------A T 00820 IF I5<0 THEN 1310
    0x5ecf7973a610 ---------A   00830 IF I7 <> 0 THEN 850
    0x5ecf7973a880 ---------A   00835 IF I6 <> 0 THEN 850
    0x5ecf7973aa00 ---------A   00840 PRINT"***HAPPY BIRTHDAY***"
    0x5ecf7973af70 ---------A T 00850 PRINT " "," ","YEARS","MONTHS","DAYS"
    0x5ecf7973b4e0 ---------A   00855 PRINT " "," ","-----","------","----"
    0x5ecf7973b960 ---------A   00860 PRINT "YOUR AGE (IF BIRTHDATE) ",I5,I6,I7
    0x5ecf7973c410 ---------A   00870 LET A8 = (I5*365)+(I6*30)+I7+INT(I6/2)
    0x5ecf7973c700 ---------A   00880 LET K5 = I5
    0x5ecf7973c9f0 ---------A   00890 LET K6 = I6
    0x5ecf7973ccf0 ---------A   00900 LET K7 = I7
    0x5ecf7973cd70 ---------A   00910 REM CALCULATE RETIREMENT DATE.
    0x5ecf7973d1a0 ---------A   00920 LET E = Y+65
    0x5ecf7973d230 ---------A   00930 REM CALCULATE TIME SPENT IN THE FOLLOWING FUNCTIONS.
    0x5ecf7973d520 ---------A   00940 LET F = .35
    0x5ecf7973d690 ---------A   00950 PRINT "YOU HAVE SLEPT ",
    0x5ecf7973d700 ---------A   00960 GOSUB 1370
    0x5ecf7973d910 ---------A   00970 LET F = .17
    0x5ecf7973da80 ---------A   00980 PRINT "YOU HAVE EATEN ",
    0x5ecf7973daf0 ---------A   00990 GOSUB 1370
    0x5ecf7973dd00 ---------A   01000 LET F = .23
    0x5ecf7973df60 ---------A   01010 IF K5 > 3 THEN 1040
    0x5ecf7973e0e0 ---------A   01020 PRINT "YOU HAVE PLAYED",
    0x5ecf7973e160 ---------A   01030 GOTO 1080
    0x5ecf7973e3b0 ---------A T 01040 IF K5 > 9 THEN 1070
    0x5ecf7973e540 ---------A   01050 PRINT "YOU HAVE PLAYED/STUDIED",
    0x5ecf7973e5c0 ---------A   01060 GOTO  1080
    0x5ecf7973e730 ---------A T 01070 PRINT "YOU HAVE WORKED/PLAYED",
    0x5ecf7973e7a0 ---------A T 01080 GOSUB 1370
    0x5ecf7973e810 ---------A   01085 GOTO 1530
    0x5ecf7973ec50 ---------A T 01090 PRINT "YOU HAVE RELAXED ",K5,K6,K7
    0x5ecf7973ece0 ---------A   01100 PRINT 
    0x5ecf7973f180 ---------A   01110 PRINT TAB(16);"***  YOU MAY RETIRE IN";E;" ***"
    0x5ecf7973f1f0 ---------A T 01120 PRINT
    0x5ecf7973f260 ---------A T 01140 PRINT
    0x5ecf7973f2d0 ---------A   01200 PRINT
    0x5ecf7973f340 ---------A   01210 PRINT
    0x5ecf7973f3b0 ---------A   01220 PRINT
    0x5ecf7973f420 ---------A   01230 PRINT
    0x5ecf7973f470 ---------A   01240 END
    0x5ecf7973f6d0 ---------A T 01250 IF D=13 THEN 1280
    0x5ecf7973f830 ---------A   01260 PRINT "FRIDAY."
    0x5ecf7973f8c0 ---------A   01270 GOTO 710
    0x5ecf7973fa10 ---------A T 01280 PRINT "FRIDAY THE THIRTEENTH---BEWARE!"
    0x5ecf7973fab0 ---------A   01290 GOTO 710
    0x5ecf7973fc10 ---------A T 01300 PRINT "NOT PREPARED TO GIVE DAY OF WEEK PRIOR TO MDLXXXII. "
    0x5ecf7973fcb0 ---------A T 01310 GOTO 1140
    0x5ecf7973fd40 ---------A   01320 REM TABLE OF VALUES FOR THE MONTHS TO BE USED IN CALCULATIONS.
    0x5ecf79740890 ---------A   01330 DATA 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5
    0x5ecf79740920 ---------B   01340 REM THIS IS THE CURRENT DATE USED IN THE CALCULATIONS.
    0x5ecf797409e0 ---------B   01350 REM THIS IS THE DATE TO BE CALCULATED ON.
    0x5ecf79740aa0 ---------B   01360 REM CALCULATE TIME IN YEARS, MONTHS, AND DAYS
    0x5ecf79740fb0 ---------B G 01370 LET K1=INT(F*A8)
    0x5ecf797413d0 ---------B   01380 LET I5 = INT(K1/365)
    0x5ecf79742080 ---------B   01390 LET K1 = K1- (I5*365)
    0x5ecf797424a0 ---------B   01400 LET I6 = INT(K1/30)
    0x5ecf79742930 ---------B   01410 LET I7 = K1 -(I6*30)
    0x5ecf79742c80 ---------B   01420 LET K5 = K5-I5
    0x5ecf79742fd0 ---------B   01430 LET K6 =K6-I6
    0x5ecf79743320 ---------B   01440 LET K7 = K7-I7
    0x5ecf79743570 ---------B   01450 IF K7>=0 THEN 1480
    0x5ecf797438b0 ---------B   01460 LET K7=K7+30
    0x5ecf79743be0 ---------B   01470 LET K6=K6-1
    0x5ecf79743e30 ---------B T 01480 IF K6>0 THEN 1510
    0x5ecf79744170 ---------B   01490 LET K6=K6+12
    0x5ecf797444a0 ---------B   01500 LET K5=K5-1
    0x5ecf797447f0 ---------B T 01510 PRINT I5,I6,I7
    0x5ecf79744840 ---------B   01520 RETURN
    0x5ecf79744aa0 ---------A T 01530 IF K6=12 THEN 1550
    0x5ecf79744b20 ---------A   01540 GOTO 1090
    0x5ecf79744e40 ---------A T 01550 LET K5=K5+1
    0x5ecf79745050 ---------A   01560 LET K6=0
    0x5ecf797450c0 ---------A   01570 GOTO 1090
    0x5ecf79745120 ---------A   01580 REM
    0x5ecf79745180 ---------A   01590 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00400      00460T
     00420      00400T
     00440      00370T
     00470      00360T, 00390T, 00430T
     00490      00470T
     00530      00500T
     00550      00490T
     00570      00520T, 00540T
     00590      00570T
     00610      00590T
     00630      00610T
     00650      00630T
     00670      00650T
     00690      00670T
     00710      00690T, 01270T, 01290T
     00790      00760T
     00820      00790T
     00850      00830T, 00835T
     01040      01010T
     01070      01040T
     01080      01030T, 01060T
     01090      01540T, 01570T
     01120      00710T
     01140      01310T
     01250      00680T
     01280      01250T
     01300      00290T
     01310      00820T
     01370      00960G, 00990G, 01080G
     01480      01450T
     01510      01480T
     01530      01085T
     01550      01530T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5ecf79724b80 (00010)   0x5ecf79724b80 (00010)   0x5ecf79745180 (01590)   0x5ecf79745180 (01590)   
   B) 0x5ecf79740920 (01340)   0x5ecf79740fb0 (01370)   0x5ecf79744840 (01520)   0x5ecf79744840 (01520)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02510 - 10000    7500 

 */



/*
 *  Symbol Table Listing for 'basic/weekday.bas'
 *
    A                        Integer     
    A8                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FNA             Array    Integer         {0,9} 
    FNB             Array    Integer         {0,9} 
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
    I1                       Integer     
    I2                       Integer     
    I5                       Integer     
    I6                       Integer     
    I7                       Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K1                       Integer     
    K5                       Integer     
    K6                       Integer     
    K7                       Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
    M1                       Integer     
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
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T               Array    Integer         {0,11} 
    T1                       Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    Y                        Integer     
    Y1                       Integer     
    Y2                       Integer     
    Y3                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/weekday.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ecf79724b80 ---------A   01000 PRINT TAB(32);"WEEKDAY"
    0x5ecf79725f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ecf797260b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5ecf797237f0 ---------A   01030 PRINT "WEEKDAY IS A COMPUTER DEMONSTRATION THAT"
    0x5ecf79725ae0 ---------A   01040 PRINT"GIVES FACTS ABOUT A DATE OF INTEREST TO YOU."
    0x5ecf79723e40 ---------A   01050 PRINT
    0x5ecf797244e0 ---------A   01060 PRINT "ENTER TODAY'S DATE IN THE FORM: 3,24,1979  ";
    0x5ecf797236d0 ---------A   01070 INPUT M1,D1,Y1
    0x5ecf797247c0 ---------A   01080 REM THIS PROGRAM DETERMINES THE DAY OF THE WEEK
    0x5ecf79724800 ---------A   01090 REM  FOR A DATE AFTER 1582
    0x5ecf79724040 ---------A   01100 DEF FNA(A)=INT(A/4)
    0x5ecf7972bfc0 ---------A   01110 DIM T(12)
    0x5ecf7972c570 ---------A   01120 DEF FNB(A)=INT(A/7)
    0x5ecf7972c600 ---------A   01130 REM SPACE OUTPUT AND READ IN INITIAL VALUES FOR MONTHS.
    0x5ecf79723670 ---------A   01140 FOR I= 1 TO 12
    0x5ecf7972cb80 ---------A   01150 READ T(I)
    0x5ecf7972cca0 ---------A   01160 NEXT I
    0x5ecf7972ce70 ---------A   01170 PRINT"ENTER DAY OF BIRTH (OR OTHER DAY OF INTEREST)";
    0x5ecf7972d3c0 ---------A   01180 INPUT M,D,Y
    0x5ecf7972d420 ---------A   01190 PRINT
    0x5ecf7972da50 ---------A   01200 LET I1 = INT((Y-1500)/100)
    0x5ecf7972dae0 ---------A   01210 REM TEST FOR DATE BEFORE CURRENT CALENDAR.
    0x5ecf7972de00 ---------A   01220 IF Y-1582 <0 THEN 2200
    0x5ecf7972e480 ---------A   01230 LET A = I1*5+(I1+3)/4
    0x5ecf7972eb50 ---------A   01240 LET I2=INT(A-FNB(A)*7)
    0x5ecf7972f000 ---------A   01250 LET Y2=INT(Y/100)
    0x5ecf7972f5d0 ---------A   01260 LET Y3 =INT(Y-Y2*100)
    0x5ecf7972fe70 ---------A   01270 LET A =Y3/4+Y3+D+T(M)+I2
    0x5ecf79730640 ---------A   01280 LET B=INT(A-FNB(A)*7)+1
    0x5ecf79730890 ---------A   01290 IF M > 2 THEN 1400
    0x5ecf79730b00 ---------A   01300 IF Y3 = 0 THEN 1370
    0x5ecf797311e0 ---------A   01310 LET T1=INT(Y-FNA(Y)*4)
    0x5ecf79731430 ---------A   01320 IF T1 <> 0 THEN 1400
    0x5ecf797318a0 ---------A T 01330 IF B<>0 THEN 1350
    0x5ecf79731ac0 ---------A   01340 LET B=6
    0x5ecf79731df0 ---------A T 01350 LET B = B-1
    0x5ecf79731e60 ---------A   01360 GOTO 1400
    0x5ecf79732190 ---------A T 01370 LET A = I1-1
    0x5ecf797327a0 ---------A   01380 LET T1=INT(A-FNA(A)*4)
    0x5ecf797329f0 ---------A   01390 IF T1 = 0 THEN 1330
    0x5ecf79732c50 ---------A T 01400 IF B <>0 THEN 1420
    0x5ecf79732e90 ---------A   01410 LET B = 7
    0x5ecf79733a20 ---------A T 01420 IF (Y1*12+M1)*31+D1<(Y*12+M)*31+D THEN 1480
    0x5ecf797345b0 ---------A   01430 IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 1460
    0x5ecf79734c30 ---------A   01440 PRINT M;"/";D;"/";Y;" WAS A ";
    0x5ecf79734cb0 ---------A   01450 GOTO 1500
    0x5ecf79735310 ---------A T 01460 PRINT M;"/";D;"/";Y;" IS A ";
    0x5ecf79735390 ---------A   01470 GOTO 1500
    0x5ecf79735a10 ---------A T 01480 PRINT M;"/";D;"/";Y;" WILL BE A ";
    0x5ecf79735aa0 ---------A   01490 REM PRINT THE DAY OF THE WEEK THE DATE FALLS ON.
    0x5ecf79735d00 ---------A T 01500 IF B <>1 THEN 1520
    0x5ecf79735e60 ---------A   01510 PRINT "SUNDAY."
    0x5ecf797360b0 ---------A T 01520 IF B<>2 THEN 1540
    0x5ecf79736210 ---------A   01530 PRINT "MONDAY."
    0x5ecf79736460 ---------A T 01540 IF B<>3 THEN 1560
    0x5ecf797365c0 ---------A   01550 PRINT "TUESDAY."
    0x5ecf79736810 ---------A T 01560 IF B<>4 THEN 1580
    0x5ecf79736970 ---------A   01570 PRINT "WEDNESDAY."
    0x5ecf79736bc0 ---------A T 01580 IF B<>5 THEN 1600
    0x5ecf79736d20 ---------A   01590 PRINT "THURSDAY."
    0x5ecf79736f70 ---------A T 01600 IF B<>6 THEN 1620
    0x5ecf79736ff0 ---------A   01610 GOTO 2150
    0x5ecf79737230 ---------A T 01620 IF B<>7 THEN 1640
    0x5ecf797373b0 ---------A   01630 PRINT "SATURDAY."
    0x5ecf79737f20 ---------A T 01640 IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 2080
    0x5ecf79738750 ---------A   01650 LET I5=Y1-Y
    0x5ecf797387c0 ---------A   01660 PRINT
    0x5ecf79738bd0 ---------A   01670 LET I6=M1-M
    0x5ecf79738fe0 ---------A   01680 LET I7=D1-D
    0x5ecf79739230 ---------A   01690 IF I7>=0 THEN 1720
    0x5ecf79739570 ---------A   01700 LET I6= I6-1
    0x5ecf797398a0 ---------A   01710 LET I7=I7+30
    0x5ecf79739af0 ---------A T 01720 IF I6>=0 THEN 1750
    0x5ecf79739e30 ---------A   01730 LET I5=I5-1
    0x5ecf7973a160 ---------A   01740 LET I6=I6+12
    0x5ecf7973a3b0 ---------A T 01750 IF I5<0 THEN 2210
    0x5ecf7973a610 ---------A   01760 IF I7 <> 0 THEN 1790
    0x5ecf7973a880 ---------A   01770 IF I6 <> 0 THEN 1790
    0x5ecf7973aa00 ---------A   01780 PRINT"***HAPPY BIRTHDAY***"
    0x5ecf7973af70 ---------A T 01790 PRINT " "," ","YEARS","MONTHS","DAYS"
    0x5ecf7973b4e0 ---------A   01800 PRINT " "," ","-----","------","----"
    0x5ecf7973b960 ---------A   01810 PRINT "YOUR AGE (IF BIRTHDATE) ",I5,I6,I7
    0x5ecf7973c410 ---------A   01820 LET A8 = (I5*365)+(I6*30)+I7+INT(I6/2)
    0x5ecf7973c700 ---------A   01830 LET K5 = I5
    0x5ecf7973c9f0 ---------A   01840 LET K6 = I6
    0x5ecf7973ccf0 ---------A   01850 LET K7 = I7
    0x5ecf7973cd70 ---------A   01860 REM CALCULATE RETIREMENT DATE.
    0x5ecf7973d1a0 ---------A   01870 LET E = Y+65
    0x5ecf7973d230 ---------A   01880 REM CALCULATE TIME SPENT IN THE FOLLOWING FUNCTIONS.
    0x5ecf7973d520 ---------A   01890 LET F = .35
    0x5ecf7973d690 ---------A   01900 PRINT "YOU HAVE SLEPT ",
    0x5ecf7973d700 ---------A   01910 GOSUB 2340
    0x5ecf7973d910 ---------A   01920 LET F = .17
    0x5ecf7973da80 ---------A   01930 PRINT "YOU HAVE EATEN ",
    0x5ecf7973daf0 ---------A   01940 GOSUB 2340
    0x5ecf7973dd00 ---------A   01950 LET F = .23
    0x5ecf7973df60 ---------A   01960 IF K5 > 3 THEN 1990
    0x5ecf7973e0e0 ---------A   01970 PRINT "YOU HAVE PLAYED",
    0x5ecf7973e160 ---------A   01980 GOTO 2030
    0x5ecf7973e3b0 ---------A T 01990 IF K5 > 9 THEN 2020
    0x5ecf7973e540 ---------A   02000 PRINT "YOU HAVE PLAYED/STUDIED",
    0x5ecf7973e5c0 ---------A   02010 GOTO  2030
    0x5ecf7973e730 ---------A T 02020 PRINT "YOU HAVE WORKED/PLAYED",
    0x5ecf7973e7a0 ---------A T 02030 GOSUB 2340
    0x5ecf7973e810 ---------A   02040 GOTO 2240
    0x5ecf7973ec50 ---------A T 02050 PRINT "YOU HAVE RELAXED ",K5,K6,K7
    0x5ecf7973ece0 ---------A   02060 PRINT 
    0x5ecf7973f180 ---------A   02070 PRINT TAB(16);"***  YOU MAY RETIRE IN";E;" ***"
    0x5ecf7973f1f0 ---------A T 02080 PRINT
    0x5ecf7973f260 ---------A T 02090 PRINT
    0x5ecf7973f2d0 ---------A   02100 PRINT
    0x5ecf7973f340 ---------A   02110 PRINT
    0x5ecf7973f3b0 ---------A   02120 PRINT
    0x5ecf7973f420 ---------A   02130 PRINT
    0x5ecf7973f470 ---------A   02140 END
    0x5ecf7973f6d0 ---------A T 02150 IF D=13 THEN 2180
    0x5ecf7973f830 ---------A   02160 PRINT "FRIDAY."
    0x5ecf7973f8c0 ---------A   02170 GOTO 1640
    0x5ecf7973fa10 ---------A T 02180 PRINT "FRIDAY THE THIRTEENTH---BEWARE!"
    0x5ecf7973fab0 ---------A   02190 GOTO 1640
    0x5ecf7973fc10 ---------A T 02200 PRINT "NOT PREPARED TO GIVE DAY OF WEEK PRIOR TO MDLXXXII. "
    0x5ecf7973fcb0 ---------A T 02210 GOTO 2090
    0x5ecf7973fd40 ---------A   02220 REM TABLE OF VALUES FOR THE MONTHS TO BE USED IN CALCULATIONS.
    0x5ecf79740890 ---------A   02230 DATA 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5
    0x5ecf79744aa0 ---------A T 02240 IF K6=12 THEN 2260
    0x5ecf79744b20 ---------A   02250 GOTO 2050
    0x5ecf79744e40 ---------A T 02260 LET K5=K5+1
    0x5ecf79745050 ---------A   02270 LET K6=0
    0x5ecf797450c0 ---------A   02280 GOTO 2050
    0x5ecf79745120 ---------A   02290 REM
    0x5ecf79745180 ---------A   02300 END
    0x5ecf79740920 ---------B   02310 REM THIS IS THE CURRENT DATE USED IN THE CALCULATIONS.
    0x5ecf797409e0 ---------B   02320 REM THIS IS THE DATE TO BE CALCULATED ON.
    0x5ecf79740aa0 ---------B   02330 REM CALCULATE TIME IN YEARS, MONTHS, AND DAYS
    0x5ecf79740fb0 ---------B G 02340 LET K1=INT(F*A8)
    0x5ecf797413d0 ---------B   02350 LET I5 = INT(K1/365)
    0x5ecf79742080 ---------B   02360 LET K1 = K1- (I5*365)
    0x5ecf797424a0 ---------B   02370 LET I6 = INT(K1/30)
    0x5ecf79742930 ---------B   02380 LET I7 = K1 -(I6*30)
    0x5ecf79742c80 ---------B   02390 LET K5 = K5-I5
    0x5ecf79742fd0 ---------B   02400 LET K6 =K6-I6
    0x5ecf79743320 ---------B   02410 LET K7 = K7-I7
    0x5ecf79743570 ---------B   02420 IF K7>=0 THEN 2450
    0x5ecf797438b0 ---------B   02430 LET K7=K7+30
    0x5ecf79743be0 ---------B   02440 LET K6=K6-1
    0x5ecf79743e30 ---------B T 02450 IF K6>0 THEN 2480
    0x5ecf79744170 ---------B   02460 LET K6=K6+12
    0x5ecf797444a0 ---------B   02470 LET K5=K5-1
    0x5ecf797447f0 ---------B T 02480 PRINT I5,I6,I7
    0x5ecf79749dd0 ---------B   02490 GOTO 02500
    0x5ecf79749e10 ---------B T 02500 RETURN
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
char* data_02230s[]={"0","3","3","6","1","4","6","2","5","0","3","5"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 2230, 12,data_02230s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
int    A8_int;                                    // Basic: A8 
int    B_int;                                     // Basic: B 
int    D_int;                                     // Basic: D 
int    D1_int;                                    // Basic: D1 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    FNA_int_arr[10];                           // Basic: FNA 
int    FNB_int_arr[10];                           // Basic: FNB 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    I2_int;                                    // Basic: I2 
int    I5_int;                                    // Basic: I5 
int    I6_int;                                    // Basic: I6 
int    I7_int;                                    // Basic: I7 
int    K1_int;                                    // Basic: K1 
int    K5_int;                                    // Basic: K5 
int    K6_int;                                    // Basic: K6 
int    K7_int;                                    // Basic: K7 
int    M_int;                                     // Basic: M 
int    M1_int;                                    // Basic: M1 
int    T_int_arr[12];                             // Basic: T 
int    T1_int;                                    // Basic: T1 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Y2_int;                                    // Basic: Y2 
int    Y3_int;                                    // Basic: Y3 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02340();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused A
int FNA(int A){
    int rtn=INT(A_int/4);
    return(rtn);
}

#pragma argsused A
int FNB(int A){
    int rtn=INT(A_int/7);
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
    // 02310 REM THIS IS THE CURRENT DATE USED IN THE CALCULATIONS.
    // 02320 REM THIS IS THE DATE TO BE CALCULATED ON.
    // 02330 REM CALCULATE TIME IN YEARS, MONTHS, AND DAYS

void Routine_02340(){
    // 02340 LET K1=INT(F*A8)
    K1_int = INT(F_int*A8_int);
    // 02350 LET I5 = INT(K1/365)
    I5_int = INT(K1_int/365);
    // 02360 LET K1 = K1- (I5*365)
    K1_int = K1_int-(I5_int*365);
    // 02370 LET I6 = INT(K1/30)
    I6_int = INT(K1_int/30);
    // 02380 LET I7 = K1 -(I6*30)
    I7_int = K1_int-(I6_int*30);
    // 02390 LET K5 = K5-I5
    K5_int = K5_int-I5_int;
    // 02400 LET K6 =K6-I6
    K6_int = K6_int-I6_int;
    // 02410 LET K7 = K7-I7
    K7_int = K7_int-I7_int;
    // 02420 IF K7>=0 THEN 2450
    if(K7_int>=0)goto Lbl_02450;
    // 02430 LET K7=K7+30
    K7_int = K7_int+30;
    // 02440 LET K6=K6-1
    K6_int = K6_int-1;

  Lbl_02450:
    // 02450 IF K6>0 THEN 2480
    if(K6_int>0)goto Lbl_02480;
    // 02460 LET K6=K6+12
    K6_int = K6_int+12;
    // 02470 LET K5=K5-1
    K5_int = K5_int-1;

  Lbl_02480:
    // 02480 PRINT I5,I6,I7
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,I5_int); b2c_INT(buf,I6_int); b2c_INT(buf,I7_int);strcat(buf,"\n");fputs(buf,fh); };
    // 02490 GOTO 02500
    goto Lbl_02500;

  Lbl_02500:
    // 02500 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
