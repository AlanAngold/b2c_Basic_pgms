/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/footbal2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x598e2254ab80 ---------A   00001 PRINT TAB(32);"FOOTBALL"
    0x598e2254bf30 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x598e2254c0b0 ---------A   00003 PRINT:PRINT:PRINT
    0x598e2253a2b0 ---------A   00100 REM
    0x598e22552140 ---------A   00120 DIM A(20),B(20),C(40),H(2),T(2),W(2),X(2),Y(2),Z(2)
    0x598e22552940 ---------A   00130 DIM M$(2),D(2),P$(20)
    0x598e22552aa0 ---------A   00140 PRINT "PRESENTING N.F.U. FOOTBALL (NO FORTRAN USED)"
    0x598e22552b40 ---------A   00145 PRINT:PRINT
    0x598e225496d0 ---------A T 00150 INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x598e22549670 ---------A   00160 IF A$="NO" THEN 290
    0x598e22553150 ---------A   00165 IF A$<>"YES" THEN 150
    0x598e22553310 ---------A   00170 PRINT "THIS IS A FOOTBALL GAME FOR TWO TEAMS IN WHICH PLAYERS MUST"
    0x598e225534c0 ---------A   00180 PRINT "PREPARE A TAPE WITH A DATA STATEMENT (1770 FOR TEAM 1,"
    0x598e22553670 ---------A   00190 PRINT "1780 FOR TEAM 2) IN WHICH EACH TEAM SCRAMBLES NOS. 1-20"
    0x598e22553820 ---------A   00195 PRINT "THESE NUMBERS ARE THEN ASSIGNED TO TWENTY GIVEN PLAYS."
    0x598e225539c0 ---------A   00200 PRINT"A LIST OF NOS. AND THEIR PLAYS IS PROVIDED WITH"
    0x598e22553b70 ---------A   00210 PRINT "BOTH TEAMS HAVING THE SAME PLAYS. THE MORE SIMILAR THE"
    0x598e22553d10 ---------A   00220 PRINT "PLAYS THE LESS YARDAGE GAINED.  SCORES ARE GIVEN"
    0x598e22553eb0 ---------A   00223 PRINT "WHENEVER SCORES ARE MADE. SCORES MAY ALSO BE OBTAINED"
    0x598e22554050 ---------A   00225 PRINT "BY INPUTTING 99,99 FOR PLAY NOS. TO PUNT OR ATTEMPT A"
    0x598e22554200 ---------A   00227 PRINT "FIELD GOAL, INPUT 77,77 FOR PLAY NUMBERS. QUESTIONS WILL BE"
    0x598e225543b0 ---------A   00230 PRINT "ASKED THEN. ON 4TH DOWN, YOU WILL ALSO BE ASKED WHETHER"
    0x598e22554560 ---------A   00240 PRINT "YOU WANT TO PUNT OR ATTEMPT A FIELD GOAL. IF THE ANSWER TO"
    0x598e22554700 ---------A   00250 PRINT "BOTH QUESTIONS IS NO IT WILL BE ASSUMED YOU WANT TO"
    0x598e225548a0 ---------A   00260 PRINT "TRY AND GAIN YARDAGE. ANSWER ALL QUESTIONS YES OR NO."
    0x598e22554a40 ---------A   00270 PRINT "THE GAME IS PLAYED UNTIL PLAYERS TERMINATE (CONTROL-C)."
    0x598e22554ba0 ---------A   00280 PRINT "PLEASE PREPARE A TAPE AND RUN.": STOP
    0x598e22554f90 ---------A T 00290 PRINT:PRINT "PLEASE INPUT SCORE LIMIT ON GAME";:INPUT E
    0x598e22555750 ---------A   00300 FOR I=1 TO 40: READ N: IF I>20 THEN 350
    0x598e22555ac0 ---------A   00330 A(N)=I: GOTO 360
    0x598e22555ec0 ---------A T 00350 B(N)=I-20
    0x598e225562e0 ---------A T 00360 C(I)=N: NEXT I
    0x598e225568c0 ---------A   00370 FOR I=1 TO 20: READ P$(I): NEXT I
    0x598e22556f80 ---------A   00380 L=0: T=1
    0x598e225572e0 ---------A T 00410 PRINT "TEAM";T;"PLAY CHART"
    0x598e22557430 ---------A   00420 PRINT "NO.      PLAY"
    0x598e22557700 ---------A   00430 FOR I=1 TO 20
    0x598e22557780 ---------A   00440 REM
    0x598e22557e10 ---------A   00450 PRINT C(I+L);TAB(6);P$(I)
    0x598e22557f40 ---------A   00460 NEXT I
    0x598e22558470 ---------A   00630 L=L+20:T=2
    0x598e22558510 ---------A   00640 PRINT
    0x598e225586a0 ---------A   00650 PRINT "TEAR OFF HERE----------------------------------------------"
    0x598e22558ae0 ---------A   00660 FOR X=1 TO 11: PRINT: NEXT X
    0x598e22558ef0 ---------A   00670 FOR Z=1 TO 3000: NEXT Z
    0x598e22559170 ---------A   00680 IF L=20 THEN 410
    0x598e22559cb0 ---------A   00690 D(1)=0: D(2)=3: M$(1)="--->": M$(2)="<---"
    0x598e2255a7a0 ---------A   00700 H(1)=0: H(2)=0: T(1)=2: T(2)=1
    0x598e2255b290 ---------A   00710 W(1)=-1: W(2)=1: X(1)=100: X(2)=0
    0x598e2255bd70 ---------A   00720 Y(1)=1: Y(2)=-1: Z(1)=0: Z(2)=100
    0x598e2255be10 ---------A   00725 GOSUB 1910
    0x598e2255bf80 ---------A   00730 PRINT "TEAM 1 DEFENDS 0 YD GOAL -- TEAM 2 DEFENDS 100 YD GOAL."
    0x598e2255c560 ---------A   00740 T=INT(2*RND(1)+1)
    0x598e2255c700 ---------A   00760 PRINT: PRINT "THE COIN IS FLIPPED"
    0x598e2255ce00 ---------A T 00765 P=X(T)-Y(T)*40
    0x598e2255d1e0 ---------A   00770 GOSUB 1860: PRINT : PRINT "TEAM";T;"RECEIVES KICK-OFF"
    0x598e2255d870 ---------A   00780 K=INT(26*RND(1)+40)
    0x598e2255ddd0 ---------A T 00790 P=P-Y(T)*K
    0x598e2255e450 ---------A T 00794 IF W(T)*P<Z(T)+10 THEN 810
    0x598e2255e620 ---------A   00795 PRINT: PRINT "BALL WENT OUT OF ENDZONE --AUTOMATIC TOUCHBACK--"
    0x598e2255e6b0 ---------A   00796 GOTO 870 
    0x598e2255eb60 ---------A T 00810 PRINT "BALL WENT";K;"YARDS.  NOW ON";P:GOSUB 1900
    0x598e2255f010 ---------A T 00830 PRINT "TEAM";T;"DO YOU WANT TO RUNBACK";:INPUT A$
    0x598e2255f2a0 ---------A   00840 IF A$="YES" THEN 1430
    0x598e2255f530 ---------A   00845 IF A$<>"NO" THEN 830
    0x598e2255fea0 ---------A   00850 IF W(T)*P<Z(T) THEN 880
    0x598e225604c0 ---------A T 00870 P=Z(T)-W(T)*20
    0x598e225609b0 ---------A T 00880 D=1: S=P
    0x598e22560ef0 ---------A T 00885 FOR I=1 TO 72: PRINT "=";: NEXT I
    0x598e225615c0 ---------A   00890 PRINT: PRINT "TEAM";T;"DOWN";D;"ON";P
    0x598e22561820 ---------A   00893 IF D<>1 THEN 900
    0x598e225620c0 ---------A   00895 IF Y(T)*(P+Y(T)*10)>=X(T) THEN 898
    0x598e22562330 ---------A   00897 C=4: GOTO 900
    0x598e22562530 ---------A T 00898 C=8
    0x598e225627b0 ---------A T 00900 IF C=8 THEN 904
    0x598e225631b0 ---------A   00901 PRINT TAB(27);10-(Y(T)*P-Y(T)*S);"YARDS TO 1ST DOWN"
    0x598e22563230 ---------A   00902 GOTO 910
    0x598e225639c0 ---------A T 00904 PRINT TAB(27);X(T)-Y(T)*P;"YARDS"
    0x598e22563c50 ---------A T 00910 GOSUB 1900: IF D=4 THEN 1180
    0x598e22563cd0 ---------A T 00920 REM
    0x598e225643f0 ---------A   00930 U=INT(3*RND(0)-1): GOTO 940
    0x598e22564560 ---------A T 00936 PRINT "ILLEGAL PLAY NUMBER, CHECK AND"
    0x598e225646e0 ---------A T 00940 PRINT "INPUT OFFENSIVE PLAY, DEFENSIVE PLAY";
    0x598e22564940 ---------A   00950 IF T=2 THEN 970
    0x598e22564d60 ---------A   00960 INPUT P1,P2: GOTO 975
    0x598e22564f80 ---------A T 00970 INPUT P2,P1
    0x598e225651e0 ---------A T 00975 IF P1=77 THEN 1180
    0x598e22565440 ---------A   00980 IF P1>20 THEN 1800
    0x598e225656a0 ---------A   00985 IF P1<1 THEN 1800
    0x598e22565900 ---------A   00990 IF P2>20 THEN 1800
    0x598e22565b70 ---------A   00992 IF P2<1 THEN 1800
    0x598e225661b0 ---------A   00995 P1=INT(P1): P2=INT(P2)
    0x598e22567310 ---------A   01000 Y=INT(ABS(A(P1)-B(P2))/19*((X(T)-Y(T)*P+25)*RND(1)-15))
    0x598e225675c0 ---------A   01005 PRINT: IF T=2 THEN 1015
    0x598e22567900 ---------A   01010 IF A(P1)<11 THEN 1048
    0x598e22567990 ---------A   01012 GOTO 1020
    0x598e22567cb0 ---------A T 01015 IF B(P2)<11 THEN 1048
    0x598e22567f20 ---------A T 01020 IF U<>0 THEN 1035
    0x598e22568180 ---------A   01025 PRINT "PASS INCOMPLETE TEAM";T
    0x598e225683f0 ---------A   01030 Y=0: GOTO 1050
    0x598e225689c0 ---------A T 01035 G=RND(1): IF G>.025 THEN 1040
    0x598e22568c40 ---------A   01037 IF Y>2 THEN 1045
    0x598e22568e00 ---------A T 01040 PRINT "QUARTERBACK SCRAMBLED": GOTO 1050
    0x598e22568fa0 ---------A T 01045 PRINT "PASS COMPLETED": GOTO 1050
    0x598e225690e0 ---------A T 01048 PRINT "THE BALL WAS RUN"
    0x598e22569650 ---------A T 01050 P=P-W(T)*Y
    0x598e22569b10 ---------A   01060 PRINT: PRINT "NET YARDS GAINED ON DOWN";D;"ARE ";Y
    0x598e2256a060 ---------A   01070 G=RND(1): IF G>.025 THEN 1110
    0x598e2256a620 ---------A T 01080 PRINT: PRINT "** LOSS OF POSSESSION FROM TEAM";T;"TO TEAM";T(T)
    0x598e2256aa20 ---------A   01100 GOSUB 1850: PRINT: T=T(T): GOTO 830
    0x598e2256af70 ---------A T 01110 IF Y(T)*P>=X(T) THEN 1320
    0x598e2256b4e0 ---------A   01120 IF W(T)*P>=Z(T) THEN 1230
    0x598e2256bc70 ---------A   01130 IF Y(T)*P-Y(T)*S>=10 THEN 880
    0x598e2256c210 ---------A   01140 D=D+1: IF D<>5 THEN 885
    0x598e2256c7d0 ---------A   01160 PRINT: PRINT "CONVERSION UNSUCCESSFUL TEAM";T:T=T(T)
    0x598e2256c8a0 ---------A   01170 GOSUB 1850: GOTO 880
    0x598e2256cd40 ---------A T 01180 PRINT "DOES TEAM";T;"WANT TO PUNT";: INPUT A$
    0x598e2256cfd0 ---------A   01185 IF A$="NO" THEN 1200
    0x598e2256d280 ---------A   01187 IF A$<>"YES" THEN 1180
    0x598e2256db50 ---------A T 01190 PRINT:PRINT "TEAM";T;"WILL PUNT": G=RND(1): IF G<.025 THEN 1080
    0x598e2256e4e0 ---------A   01195 GOSUB 1850: K=INT(25*RND(1)+35): T=T(T): GOTO 790
    0x598e2256e990 ---------A T 01200 PRINT "DOES TEAM";T;"WANT TO ATTEMPT A FIELD GOAL";: INPUT A$
    0x598e2256ec20 ---------A   01210 IF A$="YES" THEN 1640
    0x598e2256eea0 ---------A   01215 IF A$<>"NO" THEN 1200
    0x598e2256ef50 ---------A   01217 GOTO 920
    0x598e2256f300 ---------A T 01230 PRINT: PRINT "SAFETY AGAINST TEAM";T;"**********************OH-OH"
    0x598e2256fa30 ---------A   01240 H(T(T))=H(T(T))+2: GOSUB 1810
    0x598e2256ff00 ---------A   01280 PRINT"TEAM";T;"DO YOU WANT TO PUNT INSTEAD OF A KICKOFF";:INPUT A$
    0x598e225707a0 ---------A   01290 P=Z(T)-W(T)*20: IF A$="YES" THEN 1190
    0x598e22571380 ---------A T 01320 PRINT: PRINT "TOUCHDOWN BY TEAM";T;"*********************YEA TEAM"
    0x598e22571b70 ---------A   01340 Q=7: G=RND(1): IF G>.1 THEN 1380
    0x598e22571f20 ---------A   01360 Q=6: PRINT "EXTRA POINT NO GOOD": GOTO 1390
    0x598e22572070 ---------A T 01380 PRINT "EXTRA POINT GOOD"
    0x598e225725d0 ---------A T 01390 H(T)=H(T)+Q: GOSUB 1810
    0x598e22572920 ---------A   01420 T=T(T): GOTO 765
    0x598e22572f00 ---------A T 01430 K=INT(9*RND(0)+1)
    0x598e22573c50 ---------A   01440 R=INT(((X(T)-Y(T)*P+25)*RND(1)-15)/K)
    0x598e225741c0 ---------A   01460 P=P-W(T)*R
    0x598e22574670 ---------A   01480 PRINT:PRINT "RUNBACK TEAM";T;R;"YARDS"
    0x598e22574ba0 ---------A   01485 G=RND(1): IF G<.025 THEN 1080
    0x598e22575110 ---------A   01490 IF Y(T)*P>=X(T) THEN 1320
    0x598e22575670 ---------A   01500 IF W(T)*P>=Z(T) THEN 1230
    0x598e22575710 ---------A   01510 GOTO 880
    0x598e22575ac0 ---------A T 01640 PRINT: PRINT "TEAM";T;"WILL ATTEMPT A FIELD GOAL"
    0x598e22575ff0 ---------A   01645 G=RND(1): IF G<.025 THEN 1080
    0x598e225766b0 ---------A   01650 F=INT(35*RND(1)+20)
    0x598e22576a60 ---------A   01660 PRINT: PRINT "KICK IS";F;"YARDS LONG"
    0x598e22577280 ---------A   01680 P=P-W(T)*F: G=RND(1)
    0x598e225774e0 ---------A   01690 IF G<.35 THEN 1735
    0x598e22577a70 ---------A   01700 IF Y(T)*P<X(T) THEN 1740
    0x598e22577df0 ---------A   01710 PRINT "FIELD GOAL GOOD FOR TEAM";T;"*********************YEA"
    0x598e22578060 ---------A   01720 Q=3: GOTO 1390
    0x598e225781d0 ---------A T 01735 PRINT "BALL WENT WIDE"
    0x598e22578560 ---------A T 01740 PRINT "FIELD GOAL UNSUCCESFUL TEAM";T;"-----------------TOO BAD"
    0x598e22578bf0 ---------A   01742 GOSUB 1850: IF Y(T)*P<X(T)+10 THEN 1745
    0x598e22578f70 ---------A   01744 T=T(T): GOTO 794
    0x598e22579210 ---------A T 01745 PRINT: PRINT "BALL NOW ON";P
    0x598e225795e0 ---------A   01750 T=T(T): GOSUB 1900: GOTO 830
    0x598e2257a7f0 ---------A   01770 DATA 17,8,4,14,19,3,10,1,7,11,15,9,5,20,13,18,16,2,12,6
    0x598e2257ba10 ---------A   01780 DATA 20,2,17,5,8,18,12,11,1,4,19,14,10,7,9,15,6,13,16,3
    0x598e2257bf10 ---------A   01790 DATA "PITCHOUT","TRIPLE REVERSE","DRAW","QB SNEAK","END AROUND"
    0x598e2257c320 ---------A   01792 DATA "DOUBLE REVERSE","LEFT SWEEP","RIGHT SWEEP","OFF TACKLE"
    0x598e2257c660 ---------A   01794 DATA "WISHBONE OPTION","FLARE PASS","SCREEN PASS"
    0x598e2257ca80 ---------A   01796 DATA "ROLL OUT OPTION","RIGHT CURL","LEFT CURL","WISHBONE OPTION"
    0x598e2257ce70 ---------A   01798 DATA "SIDELINE PASS","HALF-BACK OPTION","RAZZLE-DAZZLE","BOMB!!!!"
    0x598e2257d0e0 ---------A T 01800 IF P1<>99 THEN 936
    0x598e2257d470 ---------A G 01810 PRINT: PRINT "TEAM 1 SCORE IS";H(1)
    0x598e2257d7e0 ---------A   01820 PRINT "TEAM 2 SCORE IS";H(2): PRINT
    0x598e2257db60 ---------A   01825 IF H(T)<E THEN 1830
    0x598e2257df20 ---------A   01827 PRINT "TEAM";T;"WINS*******************": GOTO 2000
    0x598e2257e160 ---------A T 01830 IF P1=99 THEN 940
    0x598e2257e1c0 ---------A   01835 RETURN
    0x598e2257e260 ----------   01850 PRINT
    0x598e2257e800 ----------   01860 FOR X=1 TO 72: PRINT "+";: NEXT X: PRINT
    0x598e2257e850 ----------   01870 RETURN
    0x598e2257f030 ---------B G 01900 PRINT TAB(D(T)+5+P/2);M$(T)
    0x598e2257f1e0 ---------B G 01910 PRINT "TEAM 1 [0   10   20   30   40   50   60   70   80   90";
    0x598e2257f330 ---------B   01915 PRINT "   100] TEAM 2"
    0x598e2257f3a0 ---------B   01920 PRINT
    0x598e2257f3f0 ---------B   01930 RETURN
    0x598e2257f450 ---------A T 02000 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00150      00165T
     00290      00160T
     00350      00300T
     00360      00330T
     00410      00680T
     00765      01420T
     00790      01195T
     00794      01744T
     00810      00794T
     00830      00845T, 01100T, 01750T
     00870      00796T
     00880      00850T, 01130T, 01170T, 01510T
     00885      01140T
     00898      00895T
     00900      00893T, 00897T
     00904      00900T
     00910      00902T
     00920      01217T
     00936      01800T
     00940      00930T, 01830T
     00970      00950T
     00975      00960T
     01015      01005T
     01020      01012T
     01035      01020T
     01040      01035T
     01045      01037T
     01048      01010T, 01015T
     01050      01030T, 01040T, 01045T
     01080      01190T, 01485T, 01645T
     01110      01070T
     01180      00910T, 00975T, 01187T
     01190      01290T
     01200      01185T, 01215T
     01230      01120T, 01500T
     01320      01110T, 01490T
     01380      01340T
     01390      01360T, 01720T
     01430      00840T
     01640      01210T
     01735      01690T
     01740      01700T
     01745      01742T
     01800      00980T, 00985T, 00990T, 00992T
     01810      01240G, 01390G
     01830      01825T
     01900      00810G
     01910      00725G
     02000      01827T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x598e2254ab80 (00001)   0x598e2254ab80 (00001)   0x598e2257f450 (02000)   0x598e2257f450 (02000)   
   B) 0x598e2257f030 (01900)   0x598e2257f030 (01900)   0x598e2257f3f0 (01930)   0x598e2257f3f0 (01930)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02790 - 10000    7220 

 */



/*
 *  Symbol Table Listing for 'basic/footbal2.bas'
 *
    A               Array    Integer         {0,19} 
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B               Array    Integer         {0,19} 
    C               Array    Integer         {0,39} 
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D               Array    Integer         {0,1} 
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    H               Array    Integer         {0,1} 
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Integer     
    L                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M$              Array    String          {0,1} 
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    OCT$            Function String          args=1, float  
    P                        Integer     
    P$              Array    String          {0,19} 
    P1                       Integer     
    P2                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    R                        Integer     
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
    T               Array    Integer         {0,1} 
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W               Array    Integer         {0,1} 
    X               Array    Integer         {0,1} 
    Y               Array    Integer         {0,1} 
    Z               Array    Integer         {0,1} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/footbal2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x598e2254ab80 ---------A   01000 PRINT TAB(32);"FOOTBALL"
    0x598e2254bf30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x598e2254c0b0 ---------A   01020 PRINT:PRINT:PRINT
    0x598e2253a2b0 ---------A   01030 REM
    0x598e22552140 ---------A   01040 DIM A(20),B(20),C(40),H(2),T(2),W(2),X(2),Y(2),Z(2)
    0x598e22552940 ---------A   01050 DIM M$(2),D(2),P$(20)
    0x598e22552aa0 ---------A   01060 PRINT "PRESENTING N.F.U. FOOTBALL (NO FORTRAN USED)"
    0x598e22552b40 ---------A   01070 PRINT:PRINT
    0x598e225496d0 ---------A T 01080 INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x598e22549670 ---------A   01090 IF A$="NO" THEN 1270
    0x598e22553150 ---------A   01100 IF A$<>"YES" THEN 1080
    0x598e22553310 ---------A   01110 PRINT "THIS IS A FOOTBALL GAME FOR TWO TEAMS IN WHICH PLAYERS MUST"
    0x598e225534c0 ---------A   01120 PRINT "PREPARE A TAPE WITH A DATA STATEMENT (1770 FOR TEAM 1,"
    0x598e22553670 ---------A   01130 PRINT "1780 FOR TEAM 2) IN WHICH EACH TEAM SCRAMBLES NOS. 1-20"
    0x598e22553820 ---------A   01140 PRINT "THESE NUMBERS ARE THEN ASSIGNED TO TWENTY GIVEN PLAYS."
    0x598e225539c0 ---------A   01150 PRINT"A LIST OF NOS. AND THEIR PLAYS IS PROVIDED WITH"
    0x598e22553b70 ---------A   01160 PRINT "BOTH TEAMS HAVING THE SAME PLAYS. THE MORE SIMILAR THE"
    0x598e22553d10 ---------A   01170 PRINT "PLAYS THE LESS YARDAGE GAINED.  SCORES ARE GIVEN"
    0x598e22553eb0 ---------A   01180 PRINT "WHENEVER SCORES ARE MADE. SCORES MAY ALSO BE OBTAINED"
    0x598e22554050 ---------A   01190 PRINT "BY INPUTTING 99,99 FOR PLAY NOS. TO PUNT OR ATTEMPT A"
    0x598e22554200 ---------A   01200 PRINT "FIELD GOAL, INPUT 77,77 FOR PLAY NUMBERS. QUESTIONS WILL BE"
    0x598e225543b0 ---------A   01210 PRINT "ASKED THEN. ON 4TH DOWN, YOU WILL ALSO BE ASKED WHETHER"
    0x598e22554560 ---------A   01220 PRINT "YOU WANT TO PUNT OR ATTEMPT A FIELD GOAL. IF THE ANSWER TO"
    0x598e22554700 ---------A   01230 PRINT "BOTH QUESTIONS IS NO IT WILL BE ASSUMED YOU WANT TO"
    0x598e225548a0 ---------A   01240 PRINT "TRY AND GAIN YARDAGE. ANSWER ALL QUESTIONS YES OR NO."
    0x598e22554a40 ---------A   01250 PRINT "THE GAME IS PLAYED UNTIL PLAYERS TERMINATE (CONTROL-C)."
    0x598e22554ba0 ---------A   01260 PRINT "PLEASE PREPARE A TAPE AND RUN.": STOP
    0x598e22554f90 ---------A T 01270 PRINT:PRINT "PLEASE INPUT SCORE LIMIT ON GAME";:INPUT E
    0x598e22555750 ---------A   01280 FOR I=1 TO 40: READ N: IF I>20 THEN 1300
    0x598e22555ac0 ---------A   01290 A(N)=I: GOTO 1310
    0x598e22555ec0 ---------A T 01300 B(N)=I-20
    0x598e225562e0 ---------A T 01310 C(I)=N: NEXT I
    0x598e225568c0 ---------A   01320 FOR I=1 TO 20: READ P$(I): NEXT I
    0x598e22556f80 ---------A   01330 L=0: T=1
    0x598e225572e0 ---------A T 01340 PRINT "TEAM";T;"PLAY CHART"
    0x598e22557430 ---------A   01350 PRINT "NO.      PLAY"
    0x598e22557700 ---------A   01360 FOR I=1 TO 20
    0x598e22557780 ---------A   01370 REM
    0x598e22557e10 ---------A   01380 PRINT C(I+L);TAB(6);P$(I)
    0x598e22557f40 ---------A   01390 NEXT I
    0x598e22558470 ---------A   01400 L=L+20:T=2
    0x598e22558510 ---------A   01410 PRINT
    0x598e225586a0 ---------A   01420 PRINT "TEAR OFF HERE----------------------------------------------"
    0x598e22558ae0 ---------A   01430 FOR X=1 TO 11: PRINT: NEXT X
    0x598e22558ef0 ---------A   01440 FOR Z=1 TO 3000: NEXT Z
    0x598e22559170 ---------A   01450 IF L=20 THEN 1340
    0x598e22559cb0 ---------A   01460 D(1)=0: D(2)=3: M$(1)="--->": M$(2)="<---"
    0x598e2255a7a0 ---------A   01470 H(1)=0: H(2)=0: T(1)=2: T(2)=1
    0x598e2255b290 ---------A   01480 W(1)=-1: W(2)=1: X(1)=100: X(2)=0
    0x598e2255bd70 ---------A   01490 Y(1)=1: Y(2)=-1: Z(1)=0: Z(2)=100
    0x598e2255be10 ---------A   01500 GOSUB 2740
    0x598e2255bf80 ---------A   01510 PRINT "TEAM 1 DEFENDS 0 YD GOAL -- TEAM 2 DEFENDS 100 YD GOAL."
    0x598e2255c560 ---------A   01520 T=INT(2*RND(1)+1)
    0x598e2255c700 ---------A   01530 PRINT: PRINT "THE COIN IS FLIPPED"
    0x598e2255ce00 ---------A T 01540 P=X(T)-Y(T)*40
    0x598e2255d1e0 ---------A   01550 GOSUB 1860: PRINT : PRINT "TEAM";T;"RECEIVES KICK-OFF"
    0x598e2255d870 ---------A   01560 K=INT(26*RND(1)+40)
    0x598e2255ddd0 ---------A T 01570 P=P-Y(T)*K
    0x598e2255e450 ---------A T 01580 IF W(T)*P<Z(T)+10 THEN 1610
    0x598e2255e620 ---------A   01590 PRINT: PRINT "BALL WENT OUT OF ENDZONE --AUTOMATIC TOUCHBACK--"
    0x598e2255e6b0 ---------A   01600 GOTO 1660 
    0x598e2255eb60 ---------A T 01610 PRINT "BALL WENT";K;"YARDS.  NOW ON";P:GOSUB 2730
    0x598e2255f010 ---------A T 01620 PRINT "TEAM";T;"DO YOU WANT TO RUNBACK";:INPUT A$
    0x598e2255f2a0 ---------A   01630 IF A$="YES" THEN 2350
    0x598e2255f530 ---------A   01640 IF A$<>"NO" THEN 1620
    0x598e2255fea0 ---------A   01650 IF W(T)*P<Z(T) THEN 1670
    0x598e225604c0 ---------A T 01660 P=Z(T)-W(T)*20
    0x598e225609b0 ---------A T 01670 D=1: S=P
    0x598e22560ef0 ---------A T 01680 FOR I=1 TO 72: PRINT "=";: NEXT I
    0x598e225615c0 ---------A   01690 PRINT: PRINT "TEAM";T;"DOWN";D;"ON";P
    0x598e22561820 ---------A   01700 IF D<>1 THEN 1740
    0x598e225620c0 ---------A   01710 IF Y(T)*(P+Y(T)*10)>=X(T) THEN 1730
    0x598e22562330 ---------A   01720 C=4: GOTO 1740
    0x598e22562530 ---------A T 01730 C=8
    0x598e225627b0 ---------A T 01740 IF C=8 THEN 1770
    0x598e225631b0 ---------A   01750 PRINT TAB(27);10-(Y(T)*P-Y(T)*S);"YARDS TO 1ST DOWN"
    0x598e22563230 ---------A   01760 GOTO 1780
    0x598e225639c0 ---------A T 01770 PRINT TAB(27);X(T)-Y(T)*P;"YARDS"
    0x598e22563c50 ---------A T 01780 GOSUB 1900: IF D=4 THEN 2160
    0x598e22563cd0 ---------A   01790 REM
    0x598e225643f0 ---------A T 01800 U=INT(3*RND(0)-1): GOTO 1820
    0x598e22564560 ---------A T 01810 PRINT "ILLEGAL PLAY NUMBER, CHECK AND"
    0x598e225646e0 ---------A T 01820 PRINT "INPUT OFFENSIVE PLAY, DEFENSIVE PLAY";
    0x598e22564940 ---------A   01830 IF T=2 THEN 1850
    0x598e22564d60 ---------A   01840 INPUT P1,P2: GOTO 1860
    0x598e22564f80 ---------A T 01850 INPUT P2,P1
    0x598e225651e0 ---------A T 01860 IF P1=77 THEN 2160
    0x598e22565440 ---------A   01870 IF P1>20 THEN 2650
    0x598e225656a0 ---------A   01880 IF P1<1 THEN 2650
    0x598e22565900 ---------A   01890 IF P2>20 THEN 2650
    0x598e22565b70 ---------A   01900 IF P2<1 THEN 2650
    0x598e225661b0 ---------A   01910 P1=INT(P1): P2=INT(P2)
    0x598e22567310 ---------A   01920 Y=INT(ABS(A(P1)-B(P2))/19*((X(T)-Y(T)*P+25)*RND(1)-15))
    0x598e225675c0 ---------A   01930 PRINT: IF T=2 THEN 1960
    0x598e22567900 ---------A   01940 IF A(P1)<11 THEN 2040
    0x598e22567990 ---------A   01950 GOTO 1970
    0x598e22567cb0 ---------A T 01960 IF B(P2)<11 THEN 2040
    0x598e22567f20 ---------A T 01970 IF U<>0 THEN 2000
    0x598e22568180 ---------A   01980 PRINT "PASS INCOMPLETE TEAM";T
    0x598e225683f0 ---------A   01990 Y=0: GOTO 2050
    0x598e225689c0 ---------A T 02000 G=RND(1): IF G>.025 THEN 2020
    0x598e22568c40 ---------A   02010 IF Y>2 THEN 2030
    0x598e22568e00 ---------A T 02020 PRINT "QUARTERBACK SCRAMBLED": GOTO 2050
    0x598e22568fa0 ---------A T 02030 PRINT "PASS COMPLETED": GOTO 2050
    0x598e225690e0 ---------A T 02040 PRINT "THE BALL WAS RUN"
    0x598e22569650 ---------A T 02050 P=P-W(T)*Y
    0x598e22569b10 ---------A   02060 PRINT: PRINT "NET YARDS GAINED ON DOWN";D;"ARE ";Y
    0x598e2256a060 ---------A   02070 G=RND(1): IF G>.025 THEN 2100
    0x598e2256a620 ---------A T 02080 PRINT: PRINT "** LOSS OF POSSESSION FROM TEAM";T;"TO TEAM";T(T)
    0x598e2256aa20 ---------A   02090 GOSUB 1850: PRINT: T=T(T): GOTO 1620
    0x598e2256af70 ---------A T 02100 IF Y(T)*P>=X(T) THEN 2290
    0x598e2256b4e0 ---------A   02110 IF W(T)*P>=Z(T) THEN 2250
    0x598e2256bc70 ---------A   02120 IF Y(T)*P-Y(T)*S>=10 THEN 1670
    0x598e2256c210 ---------A   02130 D=D+1: IF D<>5 THEN 1680
    0x598e2256c7d0 ---------A   02140 PRINT: PRINT "CONVERSION UNSUCCESSFUL TEAM";T:T=T(T)
    0x598e2256c8a0 ---------A   02150 GOSUB 1850: GOTO 1670
    0x598e2256cd40 ---------A T 02160 PRINT "DOES TEAM";T;"WANT TO PUNT";: INPUT A$
    0x598e2256cfd0 ---------A   02170 IF A$="NO" THEN 2210
    0x598e2256d280 ---------A   02180 IF A$<>"YES" THEN 2160
    0x598e2256db50 ---------A T 02190 PRINT:PRINT "TEAM";T;"WILL PUNT": G=RND(1): IF G<.025 THEN 2080
    0x598e2256e4e0 ---------A   02200 GOSUB 1850: K=INT(25*RND(1)+35): T=T(T): GOTO 1570
    0x598e2256e990 ---------A T 02210 PRINT "DOES TEAM";T;"WANT TO ATTEMPT A FIELD GOAL";: INPUT A$
    0x598e2256ec20 ---------A   02220 IF A$="YES" THEN 2430
    0x598e2256eea0 ---------A   02230 IF A$<>"NO" THEN 2210
    0x598e2256ef50 ---------A   02240 GOTO 1800
    0x598e2256f300 ---------A T 02250 PRINT: PRINT "SAFETY AGAINST TEAM";T;"**********************OH-OH"
    0x598e2256fa30 ---------A   02260 H(T(T))=H(T(T))+2: GOSUB 2660
    0x598e2256ff00 ---------A   02270 PRINT"TEAM";T;"DO YOU WANT TO PUNT INSTEAD OF A KICKOFF";:INPUT A$
    0x598e225707a0 ---------A   02280 P=Z(T)-W(T)*20: IF A$="YES" THEN 2190
    0x598e22571380 ---------A T 02290 PRINT: PRINT "TOUCHDOWN BY TEAM";T;"*********************YEA TEAM"
    0x598e22571b70 ---------A   02300 Q=7: G=RND(1): IF G>.1 THEN 2320
    0x598e22571f20 ---------A   02310 Q=6: PRINT "EXTRA POINT NO GOOD": GOTO 2330
    0x598e22572070 ---------A T 02320 PRINT "EXTRA POINT GOOD"
    0x598e225725d0 ---------A T 02330 H(T)=H(T)+Q: GOSUB 2660
    0x598e22572920 ---------A   02340 T=T(T): GOTO 1540
    0x598e22572f00 ---------A T 02350 K=INT(9*RND(0)+1)
    0x598e22573c50 ---------A   02360 R=INT(((X(T)-Y(T)*P+25)*RND(1)-15)/K)
    0x598e225741c0 ---------A   02370 P=P-W(T)*R
    0x598e22574670 ---------A   02380 PRINT:PRINT "RUNBACK TEAM";T;R;"YARDS"
    0x598e22574ba0 ---------A   02390 G=RND(1): IF G<.025 THEN 2080
    0x598e22575110 ---------A   02400 IF Y(T)*P>=X(T) THEN 2290
    0x598e22575670 ---------A   02410 IF W(T)*P>=Z(T) THEN 2250
    0x598e22575710 ---------A   02420 GOTO 1670
    0x598e22575ac0 ---------A T 02430 PRINT: PRINT "TEAM";T;"WILL ATTEMPT A FIELD GOAL"
    0x598e22575ff0 ---------A   02440 G=RND(1): IF G<.025 THEN 2080
    0x598e225766b0 ---------A   02450 F=INT(35*RND(1)+20)
    0x598e22576a60 ---------A   02460 PRINT: PRINT "KICK IS";F;"YARDS LONG"
    0x598e22577280 ---------A   02470 P=P-W(T)*F: G=RND(1)
    0x598e225774e0 ---------A   02480 IF G<.35 THEN 2520
    0x598e22577a70 ---------A   02490 IF Y(T)*P<X(T) THEN 2530
    0x598e22577df0 ---------A   02500 PRINT "FIELD GOAL GOOD FOR TEAM";T;"*********************YEA"
    0x598e22578060 ---------A   02510 Q=3: GOTO 2330
    0x598e225781d0 ---------A T 02520 PRINT "BALL WENT WIDE"
    0x598e22578560 ---------A T 02530 PRINT "FIELD GOAL UNSUCCESFUL TEAM";T;"-----------------TOO BAD"
    0x598e22578bf0 ---------A   02540 GOSUB 1850: IF Y(T)*P<X(T)+10 THEN 2560
    0x598e22578f70 ---------A   02550 T=T(T): GOTO 1580
    0x598e22579210 ---------A T 02560 PRINT: PRINT "BALL NOW ON";P
    0x598e225795e0 ---------A   02570 T=T(T): GOSUB 1900: GOTO 1620
    0x598e2257a7f0 ---------A   02580 DATA 17,8,4,14,19,3,10,1,7,11,15,9,5,20,13,18,16,2,12,6
    0x598e2257ba10 ---------A   02590 DATA 20,2,17,5,8,18,12,11,1,4,19,14,10,7,9,15,6,13,16,3
    0x598e2257bf10 ---------A   02600 DATA "PITCHOUT","TRIPLE REVERSE","DRAW","QB SNEAK","END AROUND"
    0x598e2257c320 ---------A   02610 DATA "DOUBLE REVERSE","LEFT SWEEP","RIGHT SWEEP","OFF TACKLE"
    0x598e2257c660 ---------A   02620 DATA "WISHBONE OPTION","FLARE PASS","SCREEN PASS"
    0x598e2257ca80 ---------A   02630 DATA "ROLL OUT OPTION","RIGHT CURL","LEFT CURL","WISHBONE OPTION"
    0x598e2257ce70 ---------A   02640 DATA "SIDELINE PASS","HALF-BACK OPTION","RAZZLE-DAZZLE","BOMB!!!!"
    0x598e2257d0e0 ---------A T 02650 IF P1<>99 THEN 1810
    0x598e2257d470 ---------A G 02660 PRINT: PRINT "TEAM 1 SCORE IS";H(1)
    0x598e2257d7e0 ---------A   02670 PRINT "TEAM 2 SCORE IS";H(2): PRINT
    0x598e2257db60 ---------A   02680 IF H(T)<E THEN 2700
    0x598e2257df20 ---------A   02690 PRINT "TEAM";T;"WINS*******************": GOTO 2720
    0x598e2257e160 ---------A T 02700 IF P1=99 THEN 1820
    0x598e22584c80 ---------A   02710 GOTO 09900
    0x598e2257f450 ---------A T 02720 END
    0x598e2257f030 ---------B G 02730 PRINT TAB(D(T)+5+P/2);M$(T)
    0x598e2257f1e0 ---------B G 02740 PRINT "TEAM 1 [0   10   20   30   40   50   60   70   80   90";
    0x598e2257f330 ---------B   02750 PRINT "   100] TEAM 2"
    0x598e2257f3a0 ---------B   02760 PRINT
    0x598e22584cc0 ---------B   02770 GOTO 02780
    0x598e22584d00 ---------B T 02780 RETURN
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
char* data_02580s[]={"17","8","4","14","19","3","10","1","7","11","15","9","5","20","13","18","16","2","12","6"};
char* data_02590s[]={"20","2","17","5","8","18","12","11","1","4","19","14","10","7","9","15","6","13","16","3"};
char* data_02600s[]={"PITCHOUT","TRIPLE REVERSE","DRAW","QB SNEAK","END AROUND"};
char* data_02610s[]={"DOUBLE REVERSE","LEFT SWEEP","RIGHT SWEEP","OFF TACKLE"};
char* data_02620s[]={"WISHBONE OPTION","FLARE PASS","SCREEN PASS"};
char* data_02630s[]={"ROLL OUT OPTION","RIGHT CURL","LEFT CURL","WISHBONE OPTION"};
char* data_02640s[]={"SIDELINE PASS","HALF-BACK OPTION","RAZZLE-DAZZLE","BOMB!!!!"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 2580, 20,data_02580s},
    { 2590, 20,data_02590s},
    { 2600,  5,data_02600s},
    { 2610,  4,data_02610s},
    { 2620,  3,data_02620s},
    { 2630,  4,data_02630s},
    { 2640,  4,data_02640s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[20];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    B_int_arr[20];                             // Basic: B 
int    C_int_arr[40];                             // Basic: C 
int    D_int_arr[2];                              // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int_arr[2];                              // Basic: H 
int    I_int;                                     // Basic: I 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
char*  M_str_arr[2];                              // Basic: M$ 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
char*  P_str_arr[20];                             // Basic: P$ 
int    P1_int;                                    // Basic: P1 
int    P2_int;                                    // Basic: P2 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    T_int_arr[2];                              // Basic: T 
int    U_int;                                     // Basic: U 
int    W_int_arr[2];                              // Basic: W 
int    X_int_arr[2];                              // Basic: X 
int    Y_int_arr[2];                              // Basic: Y 
int    Z_int_arr[2];                              // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02730();

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

void Routine_02730(){
    // 02730 PRINT TAB(D(T)+5+P/2);M$(T)
