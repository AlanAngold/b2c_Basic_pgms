/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/clewso.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57d11f218d00 ---------A   01000    DIM P(5, 9), S$(5), R$(6), X(10)
    0x57d11f216cf0 ---------A   01010    RANDOMIZE TIMER
    0x57d11f218d40 ---------A   01015    CLS
    0x57d11f218d80 ---------A   01020    REM*****************************************************
    0x57d11f218dc0 ---------A   01030    REM*                                                   *
    0x57d11f218ea0 ---------A   01040    REM*     INSPECTOR CLEWSO                              *
    0x57d11f218f80 ---------A   01050    REM*     BY:RON CARLSON                                *
    0x57d11f219060 ---------A   01060    REM*     FEB. 1979                                     *
    0x57d11f219140 ---------A   01070    REM*                                                   *
    0x57d11f2191d0 ---------A   01080    REM*****************************************************
    0x57d11f214610 ---------A   01090    FOR I = 1 TO 5
    0x57d11f2196d0 ---------A   01100        READ S$(I)
    0x57d11f21e550 ---------A   01110    NEXT I
    0x57d11f21ea30 ---------A   01120    DATA "BILL","MARY","PAUL","SUZY","JOHN"
    0x57d11f2145b0 ---------A   01130    FOR I = 1 TO 6
    0x57d11f21eee0 ---------A   01140        READ R$(I)
    0x57d11f21f000 ---------A   01150    NEXT I
    0x57d11f21f630 ---------A   01160    DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"
    0x57d11f21f7e0 ---------A T 01170    PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    0x57d11f21f990 ---------A   01180    PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    0x57d11f21fb50 ---------A   01190    PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    0x57d11f21fd10 ---------A   01200    PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    0x57d11f21fe70 ---------A   01210    PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    0x57d11f220000 ---------A   01220    PRINT "SOME OF THE TIME."
    0x57d11f2201c0 ---------A   01230    PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    0x57d11f220360 ---------A   01240    PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    0x57d11f2204c0 ---------A   01250    PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    0x57d11f220530 ---------A   01260    PRINT
    0x57d11f220800 ---------A   01270    H = 0
    0x57d11f220ad0 ---------A   01280    C = 0
    0x57d11f220dc0 ---------A   01290    C1 = 0
    0x57d11f220f40 ---------A   01300    PRINT "   !-----------------------------!"
    0x57d11f2210c0 ---------A   01310    PRINT "   !         !         O GARAGE  !"
    0x57d11f221450 ---------A   01320    PRINT "   !         O TROPHY  !         !"
    0x57d11f2215e0 ---------A   01330    PRINT "   ! DINING  !---!--  -!  --     !"
    0x57d11f221770 ---------A   01340    PRINT "   !                       !-----! NO WINDOWS"
    0x57d11f2218f0 ---------A   01350    PRINT "   !--O----------!        -!     !"
    0x57d11f221a70 ---------A   01360    PRINT "   !                             !---"
    0x57d11f221bf0 ---------A   01370    PRINT "   !             !--  -------       !"
    0x57d11f221d70 ---------A   01380    PRINT "   ! LIVING   ---!         !        !"
    0x57d11f221ef0 ---------A   01390    PRINT "   !--        !            O LOUNGE !"
    0x57d11f222070 ---------A   01400    PRINT "     !        0  ATRIUM    !    ----!"
    0x57d11f2221d0 ---------A   01410    PRINT "     !--------!------------!----!"
    0x57d11f222570 ---------A   01420    FOR K = 1 TO 5
    0x57d11f222d10 ---------A   01430    P(K, 1) = INT(6 * RND(K)) + 1
    0x57d11f222e40 ---------A   01440    NEXT K
    0x57d11f2231e0 ---------A   01450    FOR L = 2 TO 9
    0x57d11f2234d0 ---------A   01460    FOR K = 1 TO 5
    0x57d11f223ba0 ---------A T 01470    A = INT(6 * RND(K)) + 1
    0x57d11f2240d0 ---------A   01480    IF A = P(K, L - 1) THEN 1470
    0x57d11f2244d0 ---------A   01490    P(K, L) = A
    0x57d11f224600 ---------A   01500    NEXT K
    0x57d11f224740 ---------A   01510    NEXT L
    0x57d11f2247f0 ---------A   01520    REM ESTABLISHED SUSPECT'S MOVEMENTS
    0x57d11f2248b0 ---------A   01530    REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    0x57d11f224f70 ---------A   01540    M = INT(5 * RND(1)) + 1
    0x57d11f225600 ---------A   01550    T = INT(9 * RND(2)) + 1
    0x57d11f225b00 ---------A   01560    R = P(M, T)
    0x57d11f225d90 ---------A T 01570    INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    0x57d11f2261b0 ---------A   01585    IF LEFT$(S1$, 1) = "Q" THEN 2980
    0x57d11f226560 ---------A   01590    FOR S = 1 TO 5
    0x57d11f2268c0 ---------A   01600        IF S1$ = S$(S) THEN 1630
    0x57d11f226a00 ---------A   01610    NEXT S
    0x57d11f226c30 ---------A   01620    S = 0
    0x57d11f226e80 ---------A T 01630    IF S = 0 THEN 1570
    0x57d11f227340 ---------A   01640    PRINT
    0x57d11f2276d0 ---------A T 01650    PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    0x57d11f227880 ---------A   01660    PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    0x57d11f227a10 ---------A   01670    PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    0x57d11f227b90 ---------A   01680    PRINT "   3   - THE CRIME IS SOLVED ---";
    0x57d11f227da0 ---------A   01690    INPUT A1$
    0x57d11f2280d0 ---------A   01700    A = VAL(A1$)
    0x57d11f228140 ---------A   01710    REM A = x(1) - 48
    0x57d11f2283c0 ---------A   01720    IF A < 1 THEN 1650
    0x57d11f228620 ---------A   01730    IF A > 3 THEN 1650
    0x57d11f228970 ---------A   01740    C = C + 1
    0x57d11f228d00 ---------A   01750    ON A GOTO 1760, 2120, 2380
    0x57d11f228e80 ---------A T 01760    PRINT S1$;
    0x57d11f228ef0 ---------A   01770    REM TIME SECTION
    0x57d11f2290a0 ---------A   01780    PRINT " WHERE WERE YOU AT (1-9) ";
    0x57d11f2292b0 ---------A   01790    INPUT T1$
    0x57d11f2296a0 ---------A   01800    T1 = VAL(T1$)
    0x57d11f229710 ---------A   01810    REM T1 = X(1) - 48
    0x57d11f229990 ---------A   01820    IF T1 < 1 THEN 1760
    0x57d11f229bf0 ---------A   01830    IF T1 > 9 THEN 1760
    0x57d11f22a0c0 ---------A   01840    R1 = P(S, T1)
    0x57d11f22a340 ---------A   01850    IF S <> M THEN 1940
    0x57d11f22a3c0 ---------A   01860    REM LIAR SECTION
    0x57d11f22a700 ---------A   01870    IF RND(2) < .5 THEN 2020
    0x57d11f22acf0 ---------A   01880    R1 = INT(6 * RND(3)) + 1
    0x57d11f22b020 ---------A   01890    IF RND(4) < .5 THEN 1920
    0x57d11f22b190 ---------A   01900    PRINT "THE HOST WAS ALREADY DEAD."
    0x57d11f22b220 ---------A   01910    GOTO 2020
    0x57d11f22b370 ---------A T 01920    PRINT "OUR HOST WAS STILL ALIVE."
    0x57d11f22b3f0 ---------A   01930    GOTO 2020
    0x57d11f22b650 ---------A T 01940    IF R1 = R THEN 1960
    0x57d11f22b6e0 ---------A   01950    GOTO 2020
    0x57d11f22b9f0 ---------A T 01960    IF RND(5) < .5 THEN 2020
    0x57d11f22bc90 ---------A   01970    IF T1 >= T THEN 2000
    0x57d11f22be00 ---------A   01980    PRINT " THE HOST WAS STILL ALIVE."
    0x57d11f22be80 ---------A   01990    GOTO 2020
    0x57d11f22c100 ---------A T 02000    IF T1 <= T THEN 2020
    0x57d11f22c290 ---------A   02010    PRINT " THE HOST WAS ALREADY DEAD."
    0x57d11f22c6c0 ---------A T 02020    PRINT "I WAS IN THE "; R$(R1); " ROOM."
    0x57d11f22c9a0 ---------A   02030    FOR K = 1 TO 5
    0x57d11f22cc30 ---------A   02040    IF K = S THEN 2090
    0x57d11f22d080 ---------A   02050    IF P(K, T1) <> R1 THEN 2070
    0x57d11f22d3e0 ---------A   02060    PRINT "I WAS WITH "; S$(K)
    0x57d11f22da00 ---------A T 02070    IF ABS(R1 - P(K, T1)) <> 1 THEN 2090
    0x57d11f22dd40 ---------A   02080    PRINT "I SAW "; S$(K)
    0x57d11f22de70 ---------A T 02090    NEXT K
    0x57d11f22df00 ---------A   02100    GOTO 1570
    0x57d11f22df60 ---------A   02110    REM ROOM QUESTIONING
    0x57d11f22e100 ---------A T 02120    PRINT S1$;
    0x57d11f22e280 ---------A   02130    PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    0x57d11f22e490 ---------A   02140    INPUT R1$
    0x57d11f22e780 ---------A   02150    FOR T1 = 1 TO 6
    0x57d11f22eae0 ---------A   02160        IF R1$ = R$(T1) THEN 2190
    0x57d11f22ec20 ---------A   02170    NEXT T1
    0x57d11f22ecb0 ---------A   02180    GOTO 2120
    0x57d11f22ef20 ---------A T 02190    IF S <> M THEN 2280
    0x57d11f22f250 ---------A   02200    IF RND(5) < .5 THEN 2230
    0x57d11f22f830 ---------A   02210    T1 = INT(RND(5) * 9) + 1
    0x57d11f22f8b0 ---------A   02220    GOTO 2260
    0x57d11f22fb20 ---------A T 02230    IF T1 <> T THEN 2260
    0x57d11f22fc90 ---------A   02240    PRINT "I WAS NOT IN THAT ROOM."
    0x57d11f22fd20 ---------A   02250    GOTO 1570
    0x57d11f22ff70 ---------A T 02260    PRINT "I WAS IN THAT ROOM AT "; T1
    0x57d11f22ffe0 ---------A   02270    GOTO 1570
    0x57d11f2309f0 ---------A T 02280    K = 0
    0x57d11f230d90 ---------A   02290    FOR B = 1 TO 9
    0x57d11f2311f0 ---------A   02300    IF P(S, B) <> T1 THEN 2330
    0x57d11f231460 ---------A   02310    PRINT "I WAS IN THAT ROOM AT "; B
    0x57d11f231670 ---------A   02320    K = 1
    0x57d11f2317a0 ---------A T 02330    NEXT B
    0x57d11f231a20 ---------A   02340    IF K = 1 THEN 1570
    0x57d11f231b90 ---------A   02350    PRINT "I WAS NOT IN THAT ROOM."
    0x57d11f231c10 ---------A   02360    GOTO 1570
    0x57d11f231c80 ---------A   02370    REM COMFRONTATION SECTION
    0x57d11f231fd0 ---------A T 02380    C1 = C1 + 1
    0x57d11f232140 ---------A T 02390    PRINT "INSPECTOR DO YOU KNOW :"
    0x57d11f2322a0 ---------A   02400    PRINT "  1   KILLER"
    0x57d11f232400 ---------A   02410    PRINT "  2   ROOM"
    0x57d11f232570 ---------A   02420    PRINT "  3   TIME"
    0x57d11f2326f0 ---------A   02430    PRINT "  4   TOTALLY BAFFLED ---";
    0x57d11f232840 ---------A   02440    INPUT A1$
    0x57d11f232b70 ---------A   02450    A = VAL(A1$)
    0x57d11f232da0 ---------A   02470    IF A <= 0 GOTO 2390
    0x57d11f233010 ---------A   02480    IF A > 4 GOTO 2390
    0x57d11f2334c0 ---------A   02490    ON A GOTO 2500, 2730, 2620, 2900
    0x57d11f233630 ---------A T 02500    PRINT " THE KILLER IS  ";
    0x57d11f233780 ---------A   02510    INPUT S1$
    0x57d11f233a70 ---------A   02520    FOR X = 1 TO 5
    0x57d11f233dd0 ---------A   02530        IF S1$ = S$(X) THEN 2560
    0x57d11f233f10 ---------A   02540    NEXT X
    0x57d11f234140 ---------A   02550    X = 0
    0x57d11f2343a0 ---------A T 02560    IF X = 0 THEN 2390
    0x57d11f234720 ---------A   02570    IF S1$ <> S$(M) THEN 2880
    0x57d11f2348a0 ---------A   02580    PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    0x57d11f234be0 ---------A   02590    H = H + 1
    0x57d11f234e30 ---------A   02600    IF H = 3 THEN 2850
    0x57d11f234ec0 ---------A   02610    GOTO 1570
    0x57d11f235020 ---------A T 02620    PRINT "TIME OF THE MURDER ";
    0x57d11f235170 ---------A   02630    INPUT T1$
    0x57d11f2354a0 ---------A   02640    T1 = VAL(T1$)
    0x57d11f235700 ---------A   02660    IF T1 < 1 THEN 2620
    0x57d11f235970 ---------A   02670    IF T1 > 9 THEN 2620
    0x57d11f235c10 ---------A   02680    IF T1 <> T THEN 2880
    0x57d11f235d80 ---------A   02690    PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    0x57d11f2360c0 ---------A   02700    H = H + 1
    0x57d11f236310 ---------A   02710    IF H = 3 THEN 2850
    0x57d11f2363a0 ---------A   02720    GOTO 1570
    0x57d11f236500 ---------A T 02730    PRINT "ROOM OF THE MURDER ";
    0x57d11f236650 ---------A   02740    INPUT R1$
    0x57d11f236940 ---------A   02750    FOR X = 1 TO 6
    0x57d11f236ca0 ---------A   02760        IF R1$ = R$(X) THEN 2790
    0x57d11f236de0 ---------A   02770    NEXT X
    0x57d11f237010 ---------A   02780    X = 0
    0x57d11f237270 ---------A T 02790    IF X = 0 THEN 2730
    0x57d11f2375f0 ---------A   02800    IF R1$ <> R$(R) THEN 2880
    0x57d11f237760 ---------A   02810    PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    0x57d11f237aa0 ---------A   02820    H = H + 1
    0x57d11f237d00 ---------A   02830    IF H <> 3 THEN 1570
    0x57d11f237d80 ---------A   02840    REM CONFIRMATIONS
    0x57d11f237f50 ---------A T 02850    PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    0x57d11f2384a0 ---------A   02860    PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    0x57d11f238540 ---------A   02870    GOTO 2940
    0x57d11f2386a0 ---------A T 02880    PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    0x57d11f238730 ---------A   02890    GOTO 1570
    0x57d11f238890 ---------A T 02900    PRINT "TOO BAD INSPECTOR CLEW-SO"
    0x57d11f238a10 ---------A   02910    PRINT " THE FACTS ARE:"
    0x57d11f238f70 ---------A   02920    PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    0x57d11f2392c0 ---------A   02930    PRINT R$(R); " (ROOM)"
    0x57d11f239440 ---------A T 02940    PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    0x57d11f239660 ---------A   02950    INPUT A$
    0x57d11f2398f0 ---------A   02960    IF A$ = "YES" THEN 1170
    0x57d11f239b70 ---------A   02970    IF A$ = "Y" THEN 1170
    0x57d11f239bd0 ---------A T 02980    END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01170      02960T, 02970T
     01470      01480T
     01570      01630T, 02100T, 02250T, 02270T, 02340T, 02360T, 02610T, 02720T, 
                02830T, 02890T
     01630      01600T
     01650      01720T, 01730T
     01760      01750T, 01820T, 01830T
     01920      01890T
     01940      01850T
     01960      01940T
     02000      01970T
     02020      01870T, 01910T, 01930T, 01950T, 01960T, 01990T, 02000T
     02070      02050T
     02090      02040T, 02070T
     02120      01750T, 02180T
     02190      02160T
     02230      02200T
     02260      02220T, 02230T
     02280      02190T
     02330      02300T
     02380      01750T
     02390      02470T, 02480T, 02560T
     02500      02490T
     02560      02530T
     02620      02490T, 02660T, 02670T
     02730      02490T, 02790T
     02790      02760T
     02850      02600T, 02710T
     02880      02570T, 02680T, 02800T
     02900      02490T
     02940      02870T
     02980      01585T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x57d11f218d00 (01000)   0x000000000000 (00000)   0x57d11f239bd0 (02980)   0x57d11f239bd0 (02980)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02980 - 10000    7030 

 */



/*
 *  Symbol Table Listing for 'basic/clewso.bas'
 *
    A                        Float       
    A$                       String      
    A1$                      String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
    C                        Float       
    C1                       Float       
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
    H                        Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Float       
    L                        Float       
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
    P               Array    Float           {0,4} {0,8} 
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Float       
    R$              Array    String          {0,5} 
    R1                       Float       
    R1$                      String      
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Float       
    S$              Array    String          {0,4} 
    S1$                      String      
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Float       
    T1                       Float       
    T1$                      String      
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X               Array    Float           {0,9} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/clewso.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57d11f218d00 ---------A   01000    DIM P(5, 9), S$(5), R$(6), X(10)
    0x57d11f216cf0 ---------A   01010    RANDOMIZE TIMER
    0x57d11f218d40 ---------A   01020    CLS
    0x57d11f218d80 ---------A   01030    REM*****************************************************
    0x57d11f218dc0 ---------A   01040    REM*                                                   *
    0x57d11f218ea0 ---------A   01050    REM*     INSPECTOR CLEWSO                              *
    0x57d11f218f80 ---------A   01060    REM*     BY:RON CARLSON                                *
    0x57d11f219060 ---------A   01070    REM*     FEB. 1979                                     *
    0x57d11f219140 ---------A   01080    REM*                                                   *
    0x57d11f2191d0 ---------A   01090    REM*****************************************************
    0x57d11f214610 ---------A   01100    FOR I = 1 TO 5
    0x57d11f2196d0 ---------A   01110        READ S$(I)
    0x57d11f21e550 ---------A   01120    NEXT I
    0x57d11f21ea30 ---------A   01130    DATA "BILL","MARY","PAUL","SUZY","JOHN"
    0x57d11f2145b0 ---------A   01140    FOR I = 1 TO 6
    0x57d11f21eee0 ---------A   01150        READ R$(I)
    0x57d11f21f000 ---------A   01160    NEXT I
    0x57d11f21f630 ---------A   01170    DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"
    0x57d11f21f7e0 ---------A T 01180    PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    0x57d11f21f990 ---------A   01190    PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    0x57d11f21fb50 ---------A   01200    PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    0x57d11f21fd10 ---------A   01210    PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    0x57d11f21fe70 ---------A   01220    PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    0x57d11f220000 ---------A   01230    PRINT "SOME OF THE TIME."
    0x57d11f2201c0 ---------A   01240    PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    0x57d11f220360 ---------A   01250    PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    0x57d11f2204c0 ---------A   01260    PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    0x57d11f220530 ---------A   01270    PRINT
    0x57d11f220800 ---------A   01280    H = 0
    0x57d11f220ad0 ---------A   01290    C = 0
    0x57d11f220dc0 ---------A   01300    C1 = 0
    0x57d11f220f40 ---------A   01310    PRINT "   !-----------------------------!"
    0x57d11f2210c0 ---------A   01320    PRINT "   !         !         O GARAGE  !"
    0x57d11f221450 ---------A   01330    PRINT "   !         O TROPHY  !         !"
    0x57d11f2215e0 ---------A   01340    PRINT "   ! DINING  !---!--  -!  --     !"
    0x57d11f221770 ---------A   01350    PRINT "   !                       !-----! NO WINDOWS"
    0x57d11f2218f0 ---------A   01360    PRINT "   !--O----------!        -!     !"
    0x57d11f221a70 ---------A   01370    PRINT "   !                             !---"
    0x57d11f221bf0 ---------A   01380    PRINT "   !             !--  -------       !"
    0x57d11f221d70 ---------A   01390    PRINT "   ! LIVING   ---!         !        !"
    0x57d11f221ef0 ---------A   01400    PRINT "   !--        !            O LOUNGE !"
    0x57d11f222070 ---------A   01410    PRINT "     !        0  ATRIUM    !    ----!"
    0x57d11f2221d0 ---------A   01420    PRINT "     !--------!------------!----!"
    0x57d11f222570 ---------A   01430    FOR K = 1 TO 5
    0x57d11f222d10 ---------A   01440    P(K, 1) = INT(6 * RND(K)) + 1
    0x57d11f222e40 ---------A   01450    NEXT K
    0x57d11f2231e0 ---------A   01460    FOR L = 2 TO 9
    0x57d11f2234d0 ---------A   01470    FOR K = 1 TO 5
    0x57d11f223ba0 ---------A T 01480    A = INT(6 * RND(K)) + 1
    0x57d11f2240d0 ---------A   01490    IF A = P(K, L - 1) THEN 1480
    0x57d11f2244d0 ---------A   01500    P(K, L) = A
    0x57d11f224600 ---------A   01510    NEXT K
    0x57d11f224740 ---------A   01520    NEXT L
    0x57d11f2247f0 ---------A   01530    REM ESTABLISHED SUSPECT'S MOVEMENTS
    0x57d11f2248b0 ---------A   01540    REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    0x57d11f224f70 ---------A   01550    M = INT(5 * RND(1)) + 1
    0x57d11f225600 ---------A   01560    T = INT(9 * RND(2)) + 1
    0x57d11f225b00 ---------A   01570    R = P(M, T)
    0x57d11f225d90 ---------A T 01580    INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    0x57d11f2261b0 ---------A   01590    IF LEFT$(S1$, 1) = "Q" THEN 2970
    0x57d11f226560 ---------A   01600    FOR S = 1 TO 5
    0x57d11f2268c0 ---------A   01610        IF S1$ = S$(S) THEN 1640
    0x57d11f226a00 ---------A   01620    NEXT S
    0x57d11f226c30 ---------A   01630    S = 0
    0x57d11f226e80 ---------A T 01640    IF S = 0 THEN 1580
    0x57d11f227340 ---------A   01650    PRINT
    0x57d11f2276d0 ---------A T 01660    PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    0x57d11f227880 ---------A   01670    PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    0x57d11f227a10 ---------A   01680    PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    0x57d11f227b90 ---------A   01690    PRINT "   3   - THE CRIME IS SOLVED ---";
    0x57d11f227da0 ---------A   01700    INPUT A1$
    0x57d11f2280d0 ---------A   01710    A = VAL(A1$)
    0x57d11f228140 ---------A   01720    REM A = x(1) - 48
    0x57d11f2283c0 ---------A   01730    IF A < 1 THEN 1660
    0x57d11f228620 ---------A   01740    IF A > 3 THEN 1660
    0x57d11f228970 ---------A   01750    C = C + 1
    0x57d11f228d00 ---------A   01760    ON A GOTO 1770, 2130, 2390
    0x57d11f228e80 ---------A T 01770    PRINT S1$;
    0x57d11f228ef0 ---------A   01780    REM TIME SECTION
    0x57d11f2290a0 ---------A   01790    PRINT " WHERE WERE YOU AT (1-9) ";
    0x57d11f2292b0 ---------A   01800    INPUT T1$
    0x57d11f2296a0 ---------A   01810    T1 = VAL(T1$)
    0x57d11f229710 ---------A   01820    REM T1 = X(1) - 48
    0x57d11f229990 ---------A   01830    IF T1 < 1 THEN 1770
    0x57d11f229bf0 ---------A   01840    IF T1 > 9 THEN 1770
    0x57d11f22a0c0 ---------A   01850    R1 = P(S, T1)
    0x57d11f22a340 ---------A   01860    IF S <> M THEN 1950
    0x57d11f22a3c0 ---------A   01870    REM LIAR SECTION
    0x57d11f22a700 ---------A   01880    IF RND(2) < .5 THEN 2030
    0x57d11f22acf0 ---------A   01890    R1 = INT(6 * RND(3)) + 1
    0x57d11f22b020 ---------A   01900    IF RND(4) < .5 THEN 1930
    0x57d11f22b190 ---------A   01910    PRINT "THE HOST WAS ALREADY DEAD."
    0x57d11f22b220 ---------A   01920    GOTO 2030
    0x57d11f22b370 ---------A T 01930    PRINT "OUR HOST WAS STILL ALIVE."
    0x57d11f22b3f0 ---------A   01940    GOTO 2030
    0x57d11f22b650 ---------A T 01950    IF R1 = R THEN 1970
    0x57d11f22b6e0 ---------A   01960    GOTO 2030
    0x57d11f22b9f0 ---------A T 01970    IF RND(5) < .5 THEN 2030
    0x57d11f22bc90 ---------A   01980    IF T1 >= T THEN 2010
    0x57d11f22be00 ---------A   01990    PRINT " THE HOST WAS STILL ALIVE."
    0x57d11f22be80 ---------A   02000    GOTO 2030
    0x57d11f22c100 ---------A T 02010    IF T1 <= T THEN 2030
    0x57d11f22c290 ---------A   02020    PRINT " THE HOST WAS ALREADY DEAD."
    0x57d11f22c6c0 ---------A T 02030    PRINT "I WAS IN THE "; R$(R1); " ROOM."
    0x57d11f22c9a0 ---------A   02040    FOR K = 1 TO 5
    0x57d11f22cc30 ---------A   02050    IF K = S THEN 2100
    0x57d11f22d080 ---------A   02060    IF P(K, T1) <> R1 THEN 2080
    0x57d11f22d3e0 ---------A   02070    PRINT "I WAS WITH "; S$(K)
    0x57d11f22da00 ---------A T 02080    IF ABS(R1 - P(K, T1)) <> 1 THEN 2100
    0x57d11f22dd40 ---------A   02090    PRINT "I SAW "; S$(K)
    0x57d11f22de70 ---------A T 02100    NEXT K
    0x57d11f22df00 ---------A   02110    GOTO 1580
    0x57d11f22df60 ---------A   02120    REM ROOM QUESTIONING
    0x57d11f22e100 ---------A T 02130    PRINT S1$;
    0x57d11f22e280 ---------A   02140    PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    0x57d11f22e490 ---------A   02150    INPUT R1$
    0x57d11f22e780 ---------A   02160    FOR T1 = 1 TO 6
    0x57d11f22eae0 ---------A   02170        IF R1$ = R$(T1) THEN 2200
    0x57d11f22ec20 ---------A   02180    NEXT T1
    0x57d11f22ecb0 ---------A   02190    GOTO 2130
    0x57d11f22ef20 ---------A T 02200    IF S <> M THEN 2290
    0x57d11f22f250 ---------A   02210    IF RND(5) < .5 THEN 2240
    0x57d11f22f830 ---------A   02220    T1 = INT(RND(5) * 9) + 1
    0x57d11f22f8b0 ---------A   02230    GOTO 2270
    0x57d11f22fb20 ---------A T 02240    IF T1 <> T THEN 2270
    0x57d11f22fc90 ---------A   02250    PRINT "I WAS NOT IN THAT ROOM."
    0x57d11f22fd20 ---------A   02260    GOTO 1580
    0x57d11f22ff70 ---------A T 02270    PRINT "I WAS IN THAT ROOM AT "; T1
    0x57d11f22ffe0 ---------A   02280    GOTO 1580
    0x57d11f2309f0 ---------A T 02290    K = 0
    0x57d11f230d90 ---------A   02300    FOR B = 1 TO 9
    0x57d11f2311f0 ---------A   02310    IF P(S, B) <> T1 THEN 2340
    0x57d11f231460 ---------A   02320    PRINT "I WAS IN THAT ROOM AT "; B
    0x57d11f231670 ---------A   02330    K = 1
    0x57d11f2317a0 ---------A T 02340    NEXT B
    0x57d11f231a20 ---------A   02350    IF K = 1 THEN 1580
    0x57d11f231b90 ---------A   02360    PRINT "I WAS NOT IN THAT ROOM."
    0x57d11f231c10 ---------A   02370    GOTO 1580
    0x57d11f231c80 ---------A   02380    REM COMFRONTATION SECTION
    0x57d11f231fd0 ---------A T 02390    C1 = C1 + 1
    0x57d11f232140 ---------A T 02400    PRINT "INSPECTOR DO YOU KNOW :"
    0x57d11f2322a0 ---------A   02410    PRINT "  1   KILLER"
    0x57d11f232400 ---------A   02420    PRINT "  2   ROOM"
    0x57d11f232570 ---------A   02430    PRINT "  3   TIME"
    0x57d11f2326f0 ---------A   02440    PRINT "  4   TOTALLY BAFFLED ---";
    0x57d11f232840 ---------A   02450    INPUT A1$
    0x57d11f232b70 ---------A   02460    A = VAL(A1$)
    0x57d11f232da0 ---------A   02470    IF A <= 0 GOTO 2400
    0x57d11f233010 ---------A   02480    IF A > 4 GOTO 2400
    0x57d11f2334c0 ---------A   02490    ON A GOTO 2500, 2720, 2620, 2890
    0x57d11f233630 ---------A T 02500    PRINT " THE KILLER IS  ";
    0x57d11f233780 ---------A   02510    INPUT S1$
    0x57d11f233a70 ---------A   02520    FOR X = 1 TO 5
    0x57d11f233dd0 ---------A   02530        IF S1$ = S$(X) THEN 2560
    0x57d11f233f10 ---------A   02540    NEXT X
    0x57d11f234140 ---------A   02550    X = 0
    0x57d11f2343a0 ---------A T 02560    IF X = 0 THEN 2400
    0x57d11f234720 ---------A   02570    IF S1$ <> S$(M) THEN 2870
    0x57d11f2348a0 ---------A   02580    PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    0x57d11f234be0 ---------A   02590    H = H + 1
    0x57d11f234e30 ---------A   02600    IF H = 3 THEN 2840
    0x57d11f234ec0 ---------A   02610    GOTO 1580
    0x57d11f235020 ---------A T 02620    PRINT "TIME OF THE MURDER ";
    0x57d11f235170 ---------A   02630    INPUT T1$
    0x57d11f2354a0 ---------A   02640    T1 = VAL(T1$)
    0x57d11f235700 ---------A   02650    IF T1 < 1 THEN 2620
    0x57d11f235970 ---------A   02660    IF T1 > 9 THEN 2620
    0x57d11f235c10 ---------A   02670    IF T1 <> T THEN 2870
    0x57d11f235d80 ---------A   02680    PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    0x57d11f2360c0 ---------A   02690    H = H + 1
    0x57d11f236310 ---------A   02700    IF H = 3 THEN 2840
    0x57d11f2363a0 ---------A   02710    GOTO 1580
    0x57d11f236500 ---------A T 02720    PRINT "ROOM OF THE MURDER ";
    0x57d11f236650 ---------A   02730    INPUT R1$
    0x57d11f236940 ---------A   02740    FOR X = 1 TO 6
    0x57d11f236ca0 ---------A   02750        IF R1$ = R$(X) THEN 2780
    0x57d11f236de0 ---------A   02760    NEXT X
    0x57d11f237010 ---------A   02770    X = 0
    0x57d11f237270 ---------A T 02780    IF X = 0 THEN 2720
    0x57d11f2375f0 ---------A   02790    IF R1$ <> R$(R) THEN 2870
    0x57d11f237760 ---------A   02800    PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    0x57d11f237aa0 ---------A   02810    H = H + 1
    0x57d11f237d00 ---------A   02820    IF H <> 3 THEN 1580
    0x57d11f237d80 ---------A   02830    REM CONFIRMATIONS
    0x57d11f237f50 ---------A T 02840    PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    0x57d11f2384a0 ---------A   02850    PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    0x57d11f238540 ---------A   02860    GOTO 2930
    0x57d11f2386a0 ---------A T 02870    PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    0x57d11f238730 ---------A   02880    GOTO 1580
    0x57d11f238890 ---------A T 02890    PRINT "TOO BAD INSPECTOR CLEW-SO"
    0x57d11f238a10 ---------A   02900    PRINT " THE FACTS ARE:"
    0x57d11f238f70 ---------A   02910    PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    0x57d11f2392c0 ---------A   02920    PRINT R$(R); " (ROOM)"
    0x57d11f239440 ---------A T 02930    PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    0x57d11f239660 ---------A   02940    INPUT A$
    0x57d11f2398f0 ---------A   02950    IF A$ = "YES" THEN 1180
    0x57d11f239b70 ---------A   02960    IF A$ = "Y" THEN 1180
    0x57d11f239bd0 ---------A T 02970    END
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
char* data_01130s[]={"BILL","MARY","PAUL","SUZY","JOHN"};
char* data_01170s[]={"LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1130,  5,data_01130s},
    { 1170,  6,data_01170s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
float  A_flt;                                     // Basic: A 
char*  s1Answer;                                  // Basic: A$ 
char*  s2Answer;                                  // Basic: A1$ 
float  B_flt;                                     // Basic: B 
float  C_flt;                                     // Basic: C 
float  C1_flt;                                    // Basic: C1 
float  H_flt;                                     // Basic: H 
float  I_flt;                                     // Basic: I 
float  K_flt;                                     // Basic: K 
float  L_flt;                                     // Basic: L 
float  M_flt;                                     // Basic: M 
float  P_flt_arr[5][9];                           // Basic: P 
float  R_flt;                                     // Basic: R 
char*  RoomNames[6];                              // Basic: R$ 
float  R1_flt;                                    // Basic: R1 
char*  RoomName;                                  // Basic: R1$ 
float  S_flt;                                     // Basic: S 
char*  NPCNames[5];                               // Basic: S$ 
char*  SuspectName;                               // Basic: S1$ 
float  T_flt;                                     // Basic: T 
float  T1_flt;                                    // Basic: T1 
char*  TimeAnswer;                                // Basic: T1$ 
float  X_flt_arr[10];                             // Basic: X 
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
    // 01000    DIM P(5, 9), S$(5), R$(6), X(10)
    // 01010    RANDOMIZE TIMER
    RANDOMIZE(false);
    // 01020    CLS
    ClearScreen(0);
    // 01030    REM*****************************************************
    // 01040    REM*                                                   *
    // 01050    REM*     INSPECTOR CLEWSO                              *
    // 01060    REM*     BY:RON CARLSON                                *
    // 01070    REM*     FEB. 1979                                     *
    // 01080    REM*                                                   *
    // 01090    REM*****************************************************
    // 01100    FOR I = 1 TO 5
    for(I_flt=1;I_flt<=5;I_flt++){
        // 01110        READ S$(I)
        NPCNames[(int)I_flt] = Get_Data_String();
        // 01120    NEXT I
        int dummy_1120=0; // Ignore this line.
    }; // End-For(I_flt)
    // 01130    DATA "BILL","MARY","PAUL","SUZY","JOHN"
    // 01140    FOR I = 1 TO 6
    for(I_flt=1;I_flt<=6;I_flt++){
        // 01150        READ R$(I)
        RoomNames[(int)I_flt] = Get_Data_String();
        // 01160    NEXT I
        int dummy_1160=0; // Ignore this line.
    }; // End-For(I_flt)
    // 01170    DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"

  StartGame:
    // 01180    PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    b2c_printf("Bill, mary, john, suzy and paul are house guests.  Their host \n");
    // 01190    PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    b2c_printf("Was murdered by one of them between 1 pm. And 9 pm.\n");
    // 01200    PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    b2c_printf("Your job as inspector clewso, is to find the killer, time and\n");
    // 01210    PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    b2c_printf("Room.  You will be given a house diagram and a set of questions\n");
    // 01220    PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    b2c_printf("For the suspects, but the guilty person may try to mislead you,\n");
    // 01230    PRINT "SOME OF THE TIME."
    b2c_printf("Some of the time.\n");
    // 01240    PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    b2c_printf("If one of the suspects claim that the host was already dead,\n");
    // 01250    PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    b2c_printf("Or that the host was still alive, then you have found the \n");
    // 01260    PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    b2c_printf("Room where the murder took place.\n");
    // 01270    PRINT
    b2c_printf("\n");
    // 01280    H = 0
    H_flt = 0;
    // 01290    C = 0
    C_flt = 0;
    // 01300    C1 = 0
    C1_flt = 0;
    // 01310    PRINT "   !-----------------------------!"
    b2c_printf("   !-----------------------------!\n");
    // 01320    PRINT "   !         !         O GARAGE  !"
    b2c_printf("   !         !         O garage  !\n");
    // 01330    PRINT "   !         O TROPHY  !         !"
    b2c_printf("   !         O trophy  !         !\n");
    // 01340    PRINT "   ! DINING  !---!--  -!  --     !"
    b2c_printf("   ! Dining  !---!--  -!  --     !\n");
    // 01350    PRINT "   !                       !-----! NO WINDOWS"
    b2c_printf("   !                       !-----! No windows\n");
    // 01360    PRINT "   !--O----------!        -!     !"
    b2c_printf("   !--O----------!        -!     !\n");
    // 01370    PRINT "   !                             !---"
    b2c_printf("   !                             !---\n");
    // 01380    PRINT "   !             !--  -------       !"
    b2c_printf("   !             !--  -------       !\n");
    // 01390    PRINT "   ! LIVING   ---!         !        !"
    b2c_printf("   ! Living   ---!         !        !\n");
    // 01400    PRINT "   !--        !            O LOUNGE !"
    b2c_printf("   !--        !            O lounge !\n");
    // 01410    PRINT "     !        0  ATRIUM    !    ----!"
    b2c_printf("     !        0  Atrium    !    ----!\n");
    // 01420    PRINT "     !--------!------------!----!"
    b2c_printf("     !--------!------------!----!\n");
    // 01430    FOR K = 1 TO 5
    for(K_flt=1;K_flt<=5;K_flt++){
        // 01440    P(K, 1) = INT(6 * RND(K)) + 1
        P_flt_arr[(int)K_flt][1] = INT(6*RND(K_flt))+1;
        // 01450    NEXT K
        int dummy_1450=0; // Ignore this line.
    }; // End-For(K_flt)
    // 01460    FOR L = 2 TO 9
    for(L_flt=2;L_flt<=9;L_flt++){
        // 01470    FOR K = 1 TO 5
        for(K_flt=1;K_flt<=5;K_flt++){

  NotPreviousRoom:
            // 01480    A = INT(6 * RND(K)) + 1
            A_flt = INT(6*RND(K_flt))+1;
            // 01490    IF A = P(K, L - 1) THEN 1480
            if(A_flt==P_flt_arr[(int)K_flt][(int)L_flt-1])goto NotPreviousRoom;
            // 01500    P(K, L) = A
            P_flt_arr[(int)K_flt][(int)L_flt] = A_flt;
            // 01510    NEXT K
            int dummy_1510=0; // Ignore this line.
        }; // End-For(K_flt)
        // 01520    NEXT L
        int dummy_1520=0; // Ignore this line.
    }; // End-For(L_flt)
    // 01530    REM ESTABLISHED SUSPECT'S MOVEMENTS
    // 01540    REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    // 01550    M = INT(5 * RND(1)) + 1
    M_flt = INT(5*RND(1))+1;
    // 01560    T = INT(9 * RND(2)) + 1
    T_flt = INT(9*RND(2))+1;
    // 01570    R = P(M, T)
    R_flt = P_flt_arr[(int)M_flt][(int)T_flt];

  QClewsoSuspect:
    // 01580    INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    // Start of Basic INPUT statement 01580
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&SuspectName,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01580
    // 01590    IF LEFT$(S1$, 1) = "Q" THEN 2970
    if(LEFT$(SuspectName,1)=='Q')goto QuitGame;
    // 01600    FOR S = 1 TO 5
    for(S_flt=1;S_flt<=5;S_flt++){
        // 01610        IF S1$ = S$(S) THEN 1640
        if(strcmp(SuspectName,NPCNames[(int)S_flt])==0)goto CheckRecognizeName;
        // 01620    NEXT S
        int dummy_1620=0; // Ignore this line.
    }; // End-For(S_flt)
    // 01630    S = 0
    S_flt = 0;

  CheckRecognizeName:
    // 01640    IF S = 0 THEN 1580
    if(S_flt==0)goto QClewsoSuspect;
    // 01650    PRINT
    b2c_printf("");

  QSuspectWhereabouts:
    // 01660    PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    b2c_printf("Do you wish to question %sDo you wish to question  about :\n",SuspectName);
    // 01670    PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    b2c_printf("   1   - the suspects whereabouts at a particular time\n");
    // 01680    PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    b2c_printf("   2   - what time the suspect was in a certain room\n");
    // 01690    PRINT "   3   - THE CRIME IS SOLVED ---";
    b2c_printf("   3   - the crime is solved ---");
    // 01700    INPUT A1$
    // Start of Basic INPUT statement 01700
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&s2Answer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01700
    // 01710    A = VAL(A1$)
    A_flt = VAL(s2Answer);
    // 01720    REM A = x(1) - 48
    // 01730    IF A < 1 THEN 1660
    if(A_flt<1)goto QSuspectWhereabouts;
    // 01740    IF A > 3 THEN 1660
    if(A_flt>3)goto QSuspectWhereabouts;
    // 01750    C = C + 1
    C_flt = C_flt+1;
    // 01760    ON A GOTO 1770, 2130, 2390
    switch((int)(A_flt)){
        case 1: goto QSuspectLocationAtTime;
        case 2: goto QSuspectTimeInRoom;
        case 3: goto ClewsoConfrontsSuspect;
        default: break; 
    };

  QSuspectLocationAtTime:
    // 01770    PRINT S1$;
    b2c_printf("%s\n",SuspectName);
    // 01780    REM TIME SECTION
    // 01790    PRINT " WHERE WERE YOU AT (1-9) ";
    b2c_printf(" where were you at (1-9) ");
    // 01800    INPUT T1$
    // Start of Basic INPUT statement 01800
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&TimeAnswer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01800
    // 01810    T1 = VAL(T1$)
    T1_flt = VAL(TimeAnswer);
    // 01820    REM T1 = X(1) - 48
    // 01830    IF T1 < 1 THEN 1770
    if(T1_flt<1)goto QSuspectLocationAtTime;
    // 01840    IF T1 > 9 THEN 1770
    if(T1_flt>9)goto QSuspectLocationAtTime;
    // 01850    R1 = P(S, T1)
    R1_flt = P_flt_arr[(int)S_flt][(int)T1_flt];
    // 01860    IF S <> M THEN 1950
    if(S_flt!=M_flt)goto ChkSuspectInMurderRoom;
    // 01870    REM LIAR SECTION
    // 01880    IF RND(2) < .5 THEN 2030
    if(RND(2)<0.5)goto SuspectLocationAtTime;
    // 01890    R1 = INT(6 * RND(3)) + 1
    R1_flt = INT(6*RND(3))+1;
    // 01900    IF RND(4) < .5 THEN 1930
    if(RND(4)<0.5)goto SuspectLiesAboutTime;
    // 01910    PRINT "THE HOST WAS ALREADY DEAD."
    b2c_printf("The host was already dead.\n");
    // 01920    GOTO 2030
    goto SuspectLocationAtTime;

  SuspectLiesAboutTime:
    // 01930    PRINT "OUR HOST WAS STILL ALIVE."
    b2c_printf("Our host was still alive.\n");
    // 01940    GOTO 2030
    goto SuspectLocationAtTime;

  ChkSuspectInMurderRoom:
    // 01950    IF R1 = R THEN 1970
    if(R1_flt==R_flt)goto SuspectInRoomAtTimeOfMurder;
    // 01960    GOTO 2030
    goto SuspectLocationAtTime;

  SuspectInRoomAtTimeOfMurder:
    // 01970    IF RND(5) < .5 THEN 2030
    if(RND(5)<0.5)goto SuspectLocationAtTime;
    // 01980    IF T1 >= T THEN 2010
    if(T1_flt>=T_flt)goto SuspectReportHostDead;
    // 01990    PRINT " THE HOST WAS STILL ALIVE."
    b2c_printf(" the host was still alive.\n");
    // 02000    GOTO 2030
    goto SuspectLocationAtTime;

  SuspectReportHostDead:
    // 02010    IF T1 <= T THEN 2030
    if(T1_flt<=T_flt)goto SuspectLocationAtTime;
    // 02020    PRINT " THE HOST WAS ALREADY DEAD."
    b2c_printf(" the host was already dead.\n");

  SuspectLocationAtTime:
    // 02030    PRINT "I WAS IN THE "; R$(R1); " ROOM."
    b2c_printf("I was in the %sI was in the  room.\n",RoomNames[(int)R1_flt]);
    // 02040    FOR K = 1 TO 5
    for(K_flt=1;K_flt<=5;K_flt++){
        // 02050    IF K = S THEN 2100
        if(K_flt==S_flt)goto WithHimself;
        // 02060    IF P(K, T1) <> R1 THEN 2080
        if(P_flt_arr[(int)K_flt][(int)T1_flt]!=R1_flt)goto CheckSawWho;
        // 02070    PRINT "I WAS WITH "; S$(K)
        b2c_printf("I was with %s\n",NPCNames[(int)K_flt]);

  CheckSawWho:
        // 02080    IF ABS(R1 - P(K, T1)) <> 1 THEN 2100
        if(ABS(R1_flt-P_flt_arr[(int)K_flt][(int)T1_flt])!=1)goto WithHimself;
        // 02090    PRINT "I SAW "; S$(K)
        b2c_printf("I saw %s\n",NPCNames[(int)K_flt]);

  WithHimself:
        // 02100    NEXT K
        int dummy_2100=0; // Ignore this line.
    }; // End-For(K_flt)
    // 02110    GOTO 1580
    goto QClewsoSuspect;
    // 02120    REM ROOM QUESTIONING

  QSuspectTimeInRoom:
    // 02130    PRINT S1$;
    b2c_printf("%s\n",SuspectName);
    // 02140    PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    b2c_printf(" what time were you in [room] ");
    // 02150    INPUT R1$
    // Start of Basic INPUT statement 02150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&RoomName,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02150
    // 02160    FOR T1 = 1 TO 6
    for(T1_flt=1;T1_flt<=6;T1_flt++){
        // 02170        IF R1$ = R$(T1) THEN 2200
        if(strcmp(RoomName,RoomNames[(int)T1_flt])==0)goto GotRoomIndex;
        // 02180    NEXT T1
        int dummy_2180=0; // Ignore this line.
    }; // End-For(T1_flt)
    // 02190    GOTO 2130
    goto QSuspectTimeInRoom;

  GotRoomIndex:
    // 02200    IF S <> M THEN 2290
    if(S_flt!=M_flt)goto SuspectReportsTimeInRoom;
    // 02210    IF RND(5) < .5 THEN 2240
    if(RND(5)<0.5)goto KillerLiesNotInRoom;
    // 02220    T1 = INT(RND(5) * 9) + 1
    T1_flt = INT(RND(5)*9)+1;
    // 02230    GOTO 2270
    goto KillerReportsTimeInRoom;

  KillerLiesNotInRoom:
    // 02240    IF T1 <> T THEN 2270
    if(T1_flt!=T_flt)goto KillerReportsTimeInRoom;
    // 02250    PRINT "I WAS NOT IN THAT ROOM."
    b2c_printf("I was not in that room.\n");
    // 02260    GOTO 1580
    goto QClewsoSuspect;

  KillerReportsTimeInRoom:
    // 02270    PRINT "I WAS IN THAT ROOM AT "; T1
    b2c_printf("I was in that room at  %.2f \n",T1_flt);
    // 02280    GOTO 1580
    goto QClewsoSuspect;

  SuspectReportsTimeInRoom:
    // 02290    K = 0
    K_flt = 0;
    // 02300    FOR B = 1 TO 9
    for(B_flt=1;B_flt<=9;B_flt++){
        // 02310    IF P(S, B) <> T1 THEN 2340
        if(P_flt_arr[(int)S_flt][(int)B_flt]!=T1_flt)goto NotInRoomNow;
        // 02320    PRINT "I WAS IN THAT ROOM AT "; B
        b2c_printf("I was in that room at  %.2f \n",B_flt);
        // 02330    K = 1
        K_flt = 1;

  NotInRoomNow:
        // 02340    NEXT B
        int dummy_2340=0; // Ignore this line.
    }; // End-For(B_flt)
    // 02350    IF K = 1 THEN 1580
    if(K_flt==1)goto QClewsoSuspect;
    // 02360    PRINT "I WAS NOT IN THAT ROOM."
    b2c_printf("I was not in that room.\n");
    // 02370    GOTO 1580
    goto QClewsoSuspect;
    // 02380    REM COMFRONTATION SECTION

  ClewsoConfrontsSuspect:
    // 02390    C1 = C1 + 1
    C1_flt = C1_flt+1;

  QWhichInfo:
    // 02400    PRINT "INSPECTOR DO YOU KNOW :"
    b2c_printf("Inspector do you know :\n");
    // 02410    PRINT "  1   KILLER"
    b2c_printf("  1   killer\n");
    // 02420    PRINT "  2   ROOM"
    b2c_printf("  2   room\n");
    // 02430    PRINT "  3   TIME"
    b2c_printf("  3   time\n");
    // 02440    PRINT "  4   TOTALLY BAFFLED ---";
    b2c_printf("  4   totally baffled ---");
    // 02450    INPUT A1$
    // Start of Basic INPUT statement 02450
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&s2Answer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02450
    // 02460    A = VAL(A1$)
    A_flt = VAL(s2Answer);
    // 02470    IF A <= 0 GOTO 2400
    if(A_flt<=0)goto QWhichInfo;
    // 02480    IF A > 4 GOTO 2400
    if(A_flt>4)goto QWhichInfo;
    // 02490    ON A GOTO 2500, 2720, 2620, 2890
    switch((int)(A_flt)){
        case 1: goto QSuspectName;
        case 2: goto QRoomOfMurder;
        case 3: goto QTimeOfMurder;
        case 4: goto ClewsoGivesUp;
        default: break; 
    };

  QSuspectName:
    // 02500    PRINT " THE KILLER IS  ";
    b2c_printf(" the killer is  ");
    // 02510    INPUT S1$
    // Start of Basic INPUT statement 02510
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&SuspectName,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02510
    // 02520    FOR X = 1 TO 5
    for(X_flt_arr[0]=1;X_flt_arr[0]<=5;X_flt_arr[0]++){
        // 02530        IF S1$ = S$(X) THEN 2560
        if(strcmp(SuspectName,NPCNames[(int)X_flt_arr[0]])==0)goto GotSuspectIdx;
        // 02540    NEXT X
        int dummy_2540=0; // Ignore this line.
    }; // End-For(X_flt_arr[0])
    // 02550    X = 0
    X_flt_arr[0] = 0;

  GotSuspectIdx:
    // 02560    IF X = 0 THEN 2400
    if(X_flt_arr[0]==0)goto QWhichInfo;
    // 02570    IF S1$ <> S$(M) THEN 2870
    if(strcmp(SuspectName,NPCNames[(int)M_flt])!=0)goto ClewsoGotItWrong;
    // 02580    PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    b2c_printf("You have the killer, inspector clew-so.\n");
    // 02590    H = H + 1
    H_flt = H_flt+1;
    // 02600    IF H = 3 THEN 2840
    if(H_flt==3)goto GotSolution;
    // 02610    GOTO 1580
    goto QClewsoSuspect;

  QTimeOfMurder:
    // 02620    PRINT "TIME OF THE MURDER ";
    b2c_printf("Time of the murder ");
    // 02630    INPUT T1$
    // Start of Basic INPUT statement 02630
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&TimeAnswer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02630
    // 02640    T1 = VAL(T1$)
    T1_flt = VAL(TimeAnswer);
    // 02650    IF T1 < 1 THEN 2620
    if(T1_flt<1)goto QTimeOfMurder;
    // 02660    IF T1 > 9 THEN 2620
    if(T1_flt>9)goto QTimeOfMurder;
    // 02670    IF T1 <> T THEN 2870
    if(T1_flt!=T_flt)goto ClewsoGotItWrong;
    // 02680    PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    b2c_printf("Inspector you have the right time.\n");
    // 02690    H = H + 1
    H_flt = H_flt+1;
    // 02700    IF H = 3 THEN 2840
    if(H_flt==3)goto GotSolution;
    // 02710    GOTO 1580
    goto QClewsoSuspect;

  QRoomOfMurder:
    // 02720    PRINT "ROOM OF THE MURDER ";
    b2c_printf("Room of the murder ");
    // 02730    INPUT R1$
    // Start of Basic INPUT statement 02730
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&RoomName,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02730
    // 02740    FOR X = 1 TO 6
    for(X_flt_arr[0]=1;X_flt_arr[0]<=6;X_flt_arr[0]++){
        // 02750        IF R1$ = R$(X) THEN 2780
        if(strcmp(RoomName,RoomNames[(int)X_flt_arr[0]])==0)goto CheckRightRoom;
        // 02760    NEXT X
        int dummy_2760=0; // Ignore this line.
    }; // End-For(X_flt_arr[0])
    // 02770    X = 0
    X_flt_arr[0] = 0;

  CheckRightRoom:
    // 02780    IF X = 0 THEN 2720
    if(X_flt_arr[0]==0)goto QRoomOfMurder;
    // 02790    IF R1$ <> R$(R) THEN 2870
    if(strcmp(RoomName,RoomNames[(int)R_flt])!=0)goto ClewsoGotItWrong;
    // 02800    PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    b2c_printf("Inspector , you now have the room.\n");
    // 02810    H = H + 1
    H_flt = H_flt+1;
    // 02820    IF H <> 3 THEN 1580
    if(H_flt!=3)goto QClewsoSuspect;
    // 02830    REM CONFIRMATIONS

  GotSolution:
    // 02840    PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    b2c_printf("You are brilliant inspector clew-so.\n");
    // 02850    PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    b2c_printf("It took you  %.2f It took you  questions and  questions and  %.2f  questions and Confrontations.\n",C_flt,C1_flt);
    // 02860    GOTO 2930
    goto QNewGame;

  ClewsoGotItWrong:
    // 02870    PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    b2c_printf("Inspector clew-so you are a bumbling idiot.Try again\n");
    // 02880    GOTO 1580
    goto QClewsoSuspect;

  ClewsoGivesUp:
    // 02890    PRINT "TOO BAD INSPECTOR CLEW-SO"
    b2c_printf("Too bad inspector clew-so\n");
    // 02900    PRINT " THE FACTS ARE:"
    b2c_printf(" the facts are:\n");
    // 02910    PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    b2c_printf("%s¨#ÑW killed the host at  killed the host at  %.2f  killed the host at  o'clock in the  o'clock in the \n",NPCNames[(int)M_flt],T_flt);
    // 02920    PRINT R$(R); " (ROOM)"
    b2c_printf("%s¼#ÑW (room)\n",RoomNames[(int)R_flt]);

  QNewGame:
    // 02930    PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    b2c_printf("Do you want a new case inspector  ");
    // 02940    INPUT A$
    // Start of Basic INPUT statement 02940
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&s1Answer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02940
    // 02950    IF A$ = "YES" THEN 1180
    if(strcmp(s1Answer,"Yes")==0)goto StartGame;
    // 02960    IF A$ = "Y" THEN 1180
    if(strcmp(s1Answer,"Y")==0)goto StartGame;

  QuitGame:
    // 02970    END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
