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
    0x589110cdbdb0 ---------A   01000     DIM P(5, 9), S$(5), R$(6), X(10)
    0x589110cdab80 ---------A   01010     RANDOMIZE TIMER
    0x589110cdbe70 ---------A   01015     CLS
    0x589110cdc0b0 ---------A   01020     REM*****************************************************
    0x589110cdde60 ---------A   01030     REM*                                                   *
    0x589110cddfa0 ---------A   01040     REM*     INSPECTOR CLEWSO                              *
    0x589110cde090 ---------A   01050     REM*     BY:RON CARLSON                                *
    0x589110cde180 ---------A   01060     REM*     FEB. 1979                                     *
    0x589110cde270 ---------A   01070     REM*                                                   *
    0x589110cde310 ---------A   01080     REM*****************************************************
    0x589110cd96d0 ---------A   01090     FOR I = 1 TO 5
    0x589110cde820 ---------A   01100         READ S$(I)
    0x589110ce3690 ---------A   01110     NEXT I
    0x589110ce3ba0 ---------A   01120     DATA "BILL","MARY","PAUL","SUZY","JOHN"
    0x589110cd9670 ---------A   01130     FOR I = 1 TO 6
    0x589110ce4050 ---------A   01140         READ R$(I)
    0x589110ce4180 ---------A   01150     NEXT I
    0x589110ce47c0 ---------A   01160     DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"
    0x589110ce4970 ---------A T 01170     PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    0x589110ce4b30 ---------A   01180     PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    0x589110ce4d00 ---------A   01190     PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    0x589110ce4ed0 ---------A   01200     PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    0x589110ce5040 ---------A   01210     PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    0x589110ce51e0 ---------A   01220     PRINT "SOME OF THE TIME."
    0x589110ce53b0 ---------A   01230     PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    0x589110ce5560 ---------A   01240     PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    0x589110ce56d0 ---------A   01250     PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    0x589110ce5750 ---------A   01260     PRINT
    0x589110ce5a30 ---------A   01270     H = 0
    0x589110ce5d00 ---------A   01280     C = 0
    0x589110ce5ff0 ---------A   01290     C1 = 0
    0x589110ce6170 ---------A   01300     PRINT "   !-----------------------------!"
    0x589110ce6300 ---------A   01310     PRINT "   !         !         O GARAGE  !"
    0x589110ce66a0 ---------A   01320     PRINT "   !         O TROPHY  !         !"
    0x589110ce6840 ---------A   01330     PRINT "   ! DINING  !---!--  -!  --     !"
    0x589110ce69e0 ---------A   01340     PRINT "   !                       !-----! NO WINDOWS"
    0x589110ce6b70 ---------A   01350     PRINT "   !--O----------!        -!     !"
    0x589110ce6d00 ---------A   01360     PRINT "   !                             !---"
    0x589110ce6e90 ---------A   01370     PRINT "   !             !--  -------       !"
    0x589110ce7020 ---------A   01380     PRINT "   ! LIVING   ---!         !        !"
    0x589110ce71b0 ---------A   01390     PRINT "   !--        !            O LOUNGE !"
    0x589110ce7340 ---------A   01400     PRINT "     !        0  ATRIUM    !    ----!"
    0x589110ce74b0 ---------A   01410     PRINT "     !--------!------------!----!"
    0x589110ce7860 ---------A   01420     FOR K = 1 TO 5
    0x589110ce8000 ---------A   01430     P(K, 1) = INT(6 * RND(K)) + 1
    0x589110ce8130 ---------A   01440     NEXT K
    0x589110ce84e0 ---------A   01450     FOR L = 2 TO 9
    0x589110ce87d0 ---------A   01460     FOR K = 1 TO 5
    0x589110ce8ea0 ---------A T 01470     A = INT(6 * RND(K)) + 1
    0x589110ce93d0 ---------A   01480     IF A = P(K, L - 1) THEN 1470
    0x589110ce97d0 ---------A   01490     P(K, L) = A
    0x589110ce9900 ---------A   01500     NEXT K
    0x589110ce9a50 ---------A   01510     NEXT L
    0x589110ce9b10 ---------A   01520     REM ESTABLISHED SUSPECT'S MOVEMENTS
    0x589110ce9be0 ---------A   01530     REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    0x589110cea2b0 ---------A   01540     M = INT(5 * RND(1)) + 1
    0x589110cea940 ---------A   01550     T = INT(9 * RND(2)) + 1
    0x589110ceae40 ---------A   01560     R = P(M, T)
    0x589110ceb0d0 ---------A T 01570     INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    0x589110ceb4f0 ---------A   01585     IF LEFT$(S1$, 1) = "Q" THEN 2980
    0x589110ceb8a0 ---------A   01590     FOR S = 1 TO 5
    0x589110cebc00 ---------A   01600         IF S1$ = S$(S) THEN 1630
    0x589110cebd40 ---------A   01610     NEXT S
    0x589110cebf80 ---------A   01620     S = 0
    0x589110cec1d0 ---------A T 01630     IF S = 0 THEN 1570
    0x589110cec690 ---------A   01640     PRINT
    0x589110ceca30 ---------A T 01650     PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    0x589110cecbf0 ---------A   01660     PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    0x589110cecd90 ---------A   01670     PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    0x589110cecf20 ---------A   01680     PRINT "   3   - THE CRIME IS SOLVED ---";
    0x589110ced140 ---------A   01690     INPUT A1$
    0x589110ced470 ---------A   01700     A = VAL(A1$)
    0x589110ced4e0 ---------A   01710     REM A = x(1) - 48
    0x589110ced770 ---------A   01720     IF A < 1 THEN 1650
    0x589110ced9d0 ---------A   01730     IF A > 3 THEN 1650
    0x589110cedd20 ---------A   01740     C = C + 1
    0x589110cee0b0 ---------A   01750     ON A GOTO 1760, 2120, 2380
    0x589110cee240 ---------A T 01760     PRINT S1$;
    0x589110cee2c0 ---------A   01770     REM TIME SECTION
    0x589110cee480 ---------A   01780     PRINT " WHERE WERE YOU AT (1-9) ";
    0x589110cee6a0 ---------A   01790     INPUT T1$
    0x589110ceea90 ---------A   01800     T1 = VAL(T1$)
    0x589110ceeb00 ---------A   01810     REM T1 = X(1) - 48
    0x589110ceed90 ---------A   01820     IF T1 < 1 THEN 1760
    0x589110ceeff0 ---------A   01830     IF T1 > 9 THEN 1760
    0x589110cef4c0 ---------A   01840     R1 = P(S, T1)
    0x589110cef740 ---------A   01850     IF S <> M THEN 1940
    0x589110cef7c0 ---------A   01860     REM LIAR SECTION
    0x589110cefb10 ---------A   01870     IF RND(2) < .5 THEN 2020
    0x589110cf0100 ---------A   01880     R1 = INT(6 * RND(3)) + 1
    0x589110cf0430 ---------A   01890     IF RND(4) < .5 THEN 1920
    0x589110cf05a0 ---------A   01900     PRINT "THE HOST WAS ALREADY DEAD."
    0x589110cf0640 ---------A   01910     GOTO 2020
    0x589110cf07a0 ---------A T 01920     PRINT "OUR HOST WAS STILL ALIVE."
    0x589110cf0830 ---------A   01930     GOTO 2020
    0x589110cf0aa0 ---------A T 01940     IF R1 = R THEN 1960
    0x589110cf0b30 ---------A   01950     GOTO 2020
    0x589110cf0e50 ---------A T 01960     IF RND(5) < .5 THEN 2020
    0x589110cf10f0 ---------A   01970     IF T1 >= T THEN 2000
    0x589110cf1260 ---------A   01980     PRINT " THE HOST WAS STILL ALIVE."
    0x589110cf12f0 ---------A   01990     GOTO 2020
    0x589110cf1580 ---------A T 02000     IF T1 <= T THEN 2020
    0x589110cf1710 ---------A   02010     PRINT " THE HOST WAS ALREADY DEAD."
    0x589110cf1b50 ---------A T 02020     PRINT "I WAS IN THE "; R$(R1); " ROOM."
    0x589110cf1e40 ---------A   02030     FOR K = 1 TO 5
    0x589110cf20d0 ---------A   02040     IF K = S THEN 2090
    0x589110cf2520 ---------A   02050     IF P(K, T1) <> R1 THEN 2070
    0x589110cf2880 ---------A   02060     PRINT "I WAS WITH "; S$(K)
    0x589110cf2eb0 ---------A T 02070     IF ABS(R1 - P(K, T1)) <> 1 THEN 2090
    0x589110cf31f0 ---------A   02080     PRINT "I SAW "; S$(K)
    0x589110cf3330 ---------A T 02090     NEXT K
    0x589110cf33d0 ---------A   02100     GOTO 1570
    0x589110cf3440 ---------A   02110     REM ROOM QUESTIONING
    0x589110cf35f0 ---------A T 02120     PRINT S1$;
    0x589110cf3780 ---------A   02130     PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    0x589110cf39a0 ---------A   02140     INPUT R1$
    0x589110cf3c90 ---------A   02150     FOR T1 = 1 TO 6
    0x589110cf3ff0 ---------A   02160         IF R1$ = R$(T1) THEN 2190
    0x589110cf4130 ---------A   02170     NEXT T1
    0x589110cf41d0 ---------A   02180     GOTO 2120
    0x589110cf4450 ---------A T 02190     IF S <> M THEN 2280
    0x589110cf4780 ---------A   02200     IF RND(5) < .5 THEN 2230
    0x589110cf4d60 ---------A   02210     T1 = INT(RND(5) * 9) + 1
    0x589110cf4de0 ---------A   02220     GOTO 2260
    0x589110cf5060 ---------A T 02230     IF T1 <> T THEN 2260
    0x589110cf51d0 ---------A   02240     PRINT "I WAS NOT IN THAT ROOM."
    0x589110cf5270 ---------A   02250     GOTO 1570
    0x589110cf54d0 ---------A T 02260     PRINT "I WAS IN THAT ROOM AT "; T1
    0x589110cf5550 ---------A   02270     GOTO 1570
    0x589110cf5f70 ---------A T 02280     K = 0
    0x589110cf6310 ---------A   02290     FOR B = 1 TO 9
    0x589110cf6770 ---------A   02300     IF P(S, B) <> T1 THEN 2330
    0x589110cf69e0 ---------A   02310     PRINT "I WAS IN THAT ROOM AT "; B
    0x589110cf6c00 ---------A   02320     K = 1
    0x589110cf6d30 ---------A T 02330     NEXT B
    0x589110cf6fc0 ---------A   02340     IF K = 1 THEN 1570
    0x589110cf7130 ---------A   02350     PRINT "I WAS NOT IN THAT ROOM."
    0x589110cf71c0 ---------A   02360     GOTO 1570
    0x589110cf7240 ---------A   02370     REM COMFRONTATION SECTION
    0x589110cf75a0 ---------A T 02380     C1 = C1 + 1
    0x589110cf7710 ---------A T 02390     PRINT "INSPECTOR DO YOU KNOW :"
    0x589110cf7880 ---------A   02400     PRINT "  1   KILLER"
    0x589110cf79f0 ---------A   02410     PRINT "  2   ROOM"
    0x589110cf7b70 ---------A   02420     PRINT "  3   TIME"
    0x589110cf7d00 ---------A   02430     PRINT "  4   TOTALLY BAFFLED ---";
    0x589110cf7e60 ---------A   02440     INPUT A1$
    0x589110cf8190 ---------A   02450     A = VAL(A1$)
    0x589110cf83c0 ---------A   02470     IF A <= 0 GOTO 2390
    0x589110cf8630 ---------A   02480     IF A > 4 GOTO 2390
    0x589110cf8ae0 ---------A   02490     ON A GOTO 2500, 2730, 2620, 2900
    0x589110cf8c60 ---------A T 02500     PRINT " THE KILLER IS  ";
    0x589110cf8dc0 ---------A   02510     INPUT S1$
    0x589110cf90b0 ---------A   02520     FOR X = 1 TO 5
    0x589110cf9410 ---------A   02530         IF S1$ = S$(X) THEN 2560
    0x589110cf9550 ---------A   02540     NEXT X
    0x589110cf9790 ---------A   02550     X = 0
    0x589110cf99f0 ---------A T 02560     IF X = 0 THEN 2390
    0x589110cf9d70 ---------A   02570     IF S1$ <> S$(M) THEN 2880
    0x589110cf9ef0 ---------A   02580     PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    0x589110cfa240 ---------A   02590     H = H + 1
    0x589110cfa490 ---------A   02600     IF H = 3 THEN 2850
    0x589110cfa520 ---------A   02610     GOTO 1570
    0x589110cfa690 ---------A T 02620     PRINT "TIME OF THE MURDER ";
    0x589110cfa7f0 ---------A   02630     INPUT T1$
    0x589110cfab20 ---------A   02640     T1 = VAL(T1$)
    0x589110cfad80 ---------A   02660     IF T1 < 1 THEN 2620
    0x589110cfaff0 ---------A   02670     IF T1 > 9 THEN 2620
    0x589110cfb290 ---------A   02680     IF T1 <> T THEN 2880
    0x589110cfb400 ---------A   02690     PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    0x589110cfb750 ---------A   02700     H = H + 1
    0x589110cfb9a0 ---------A   02710     IF H = 3 THEN 2850
    0x589110cfba30 ---------A   02720     GOTO 1570
    0x589110cfbba0 ---------A T 02730     PRINT "ROOM OF THE MURDER ";
    0x589110cfbd00 ---------A   02740     INPUT R1$
    0x589110cfbff0 ---------A   02750     FOR X = 1 TO 6
    0x589110cfc350 ---------A   02760         IF R1$ = R$(X) THEN 2790
    0x589110cfc490 ---------A   02770     NEXT X
    0x589110cfc6d0 ---------A   02780     X = 0
    0x589110cfc930 ---------A T 02790     IF X = 0 THEN 2730
    0x589110cfccb0 ---------A   02800     IF R1$ <> R$(R) THEN 2880
    0x589110cfce20 ---------A   02810     PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    0x589110cfd170 ---------A   02820     H = H + 1
    0x589110cfd3d0 ---------A   02830     IF H <> 3 THEN 1570
    0x589110cfd450 ---------A   02840     REM CONFIRMATIONS
    0x589110cfd630 ---------A T 02850     PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    0x589110cfdb90 ---------A   02860     PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    0x589110cfdc40 ---------A   02870     GOTO 2940
    0x589110cfddb0 ---------A T 02880     PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    0x589110cfde50 ---------A   02890     GOTO 1570
    0x589110cfdfc0 ---------A T 02900     PRINT "TOO BAD INSPECTOR CLEW-SO"
    0x589110cfe150 ---------A   02910     PRINT " THE FACTS ARE:"
    0x589110cfe6c0 ---------A   02920     PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    0x589110cfea20 ---------A   02930     PRINT R$(R); " (ROOM)"
    0x589110cfebb0 ---------A T 02940     PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    0x589110cfede0 ---------A   02950     INPUT A$
    0x589110cff070 ---------A   02960     IF A$ = "YES" THEN 1170
    0x589110cff2f0 ---------A   02970     IF A$ = "Y" THEN 1170
    0x589110cff350 ---------A T 02980     END
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
   A) 0x589110cdbdb0 (01000)   0x589110cdbdb0 (01000)   0x589110cff350 (02980)   0x589110cff350 (02980)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/clewso.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x589110cdbdb0 ---------A   01000  DIM P(5, 9), S$(5), R$(6), X(10)
    0x589110cdab80 ---------A   01010  RANDOMIZE TIMER
    0x589110cdbe70 ---------A   01015  CLS
    0x589110cdc0b0 ---------A   01020  REM*****************************************************
    0x589110cdde60 ---------A   01030  REM*                                                   *
    0x589110cddfa0 ---------A   01040  REM*     INSPECTOR CLEWSO                              *
    0x589110cde090 ---------A   01050  REM*     BY
    0x589110cde180 ---------A   01060  REM*     FEB. 1979                                     *
    0x589110cde270 ---------A   01070  REM*                                                   *
    0x589110cde310 ---------A   01080  REM*****************************************************
    0x589110cd96d0 ---------A   01090  FOR I = 1 TO 5
    0x589110cde820 ---------A   01100  READ S$(I)
    0x589110ce3690 ---------A   01110  NEXT I
    0x589110ce3ba0 ---------A   01120  DATA "BILL","MARY","PAUL","SUZY","JOHN"
    0x589110cd9670 ---------A   01130  FOR I = 1 TO 6
    0x589110ce4050 ---------A   01140  READ R$(I)
    0x589110ce4180 ---------A   01150  NEXT I
    0x589110ce47c0 ---------A   01160  DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"
    0x589110ce4970 ---------A T 01170  PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    0x589110ce4b30 ---------A   01180  PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    0x589110ce4d00 ---------A   01190  PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    0x589110ce4ed0 ---------A   01200  PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    0x589110ce5040 ---------A   01210  PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    0x589110ce51e0 ---------A   01220  PRINT "SOME OF THE TIME."
    0x589110ce53b0 ---------A   01230  PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    0x589110ce5560 ---------A   01240  PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    0x589110ce56d0 ---------A   01250  PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    0x589110ce5750 ---------A   01260  PRINT
    0x589110ce5a30 ---------A   01270  H = 0
    0x589110ce5d00 ---------A   01280  C = 0
    0x589110ce5ff0 ---------A   01290  C1 = 0
    0x589110ce6170 ---------A   01300  PRINT "   !-----------------------------!"
    0x589110ce6300 ---------A   01310  PRINT "   !         !         O GARAGE  !"
    0x589110ce66a0 ---------A   01320  PRINT "   !         O TROPHY  !         !"
    0x589110ce6840 ---------A   01330  PRINT "   ! DINING  !---!--  -!  --     !"
    0x589110ce69e0 ---------A   01340  PRINT "   !                       !-----! NO WINDOWS"
    0x589110ce6b70 ---------A   01350  PRINT "   !--O----------!        -!     !"
    0x589110ce6d00 ---------A   01360  PRINT "   !                             !---"
    0x589110ce6e90 ---------A   01370  PRINT "   !             !--  -------       !"
    0x589110ce7020 ---------A   01380  PRINT "   ! LIVING   ---!         !        !"
    0x589110ce71b0 ---------A   01390  PRINT "   !--        !            O LOUNGE !"
    0x589110ce7340 ---------A   01400  PRINT "     !        0  ATRIUM    !    ----!"
    0x589110ce74b0 ---------A   01410  PRINT "     !--------!------------!----!"
    0x589110ce7860 ---------A   01420  FOR K = 1 TO 5
    0x589110ce8000 ---------A   01430  P(K, 1) = INT(6 * RND(K)) + 1
    0x589110ce8130 ---------A   01440  NEXT K
    0x589110ce84e0 ---------A   01450  FOR L = 2 TO 9
    0x589110ce87d0 ---------A   01460  FOR K = 1 TO 5
    0x589110ce8ea0 ---------A T 01470  A = INT(6 * RND(K)) + 1
    0x589110ce93d0 ---------A   01480  IF A = P(K, L - 1) THEN 1470
    0x589110ce97d0 ---------A   01490  P(K, L) = A
    0x589110ce9900 ---------A   01500  NEXT K
    0x589110ce9a50 ---------A   01510  NEXT L
    0x589110ce9b10 ---------A   01520  REM ESTABLISHED SUSPECT'S MOVEMENTS
    0x589110ce9be0 ---------A   01530  REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    0x589110cea2b0 ---------A   01540  M = INT(5 * RND(1)) + 1
    0x589110cea940 ---------A   01550  T = INT(9 * RND(2)) + 1
    0x589110ceae40 ---------A   01560  R = P(M, T)
    0x589110ceb0d0 ---------A T 01570  INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    0x589110ceb4f0 ---------A   01585  IF LEFT$(S1$, 1) = "Q" THEN 2980
    0x589110ceb8a0 ---------A   01590  FOR S = 1 TO 5
    0x589110cebc00 ---------A   01600  IF S1$ = S$(S) THEN 1630
    0x589110cebd40 ---------A   01610  NEXT S
    0x589110cebf80 ---------A   01620  S = 0
    0x589110cec1d0 ---------A T 01630  IF S = 0 THEN 1570
    0x589110cec690 ---------A   01640  PRINT
    0x589110ceca30 ---------A T 01650  PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    0x589110cecbf0 ---------A   01660  PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    0x589110cecd90 ---------A   01670  PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    0x589110cecf20 ---------A   01680  PRINT "   3   - THE CRIME IS SOLVED ---";
    0x589110ced140 ---------A   01690  INPUT A1$
    0x589110ced470 ---------A   01700  A = VAL(A1$)
    0x589110ced4e0 ---------A   01710  REM A = x(1) - 48
    0x589110ced770 ---------A   01720  IF A < 1 THEN 1650
    0x589110ced9d0 ---------A   01730  IF A > 3 THEN 1650
    0x589110cedd20 ---------A   01740  C = C + 1
    0x589110cee0b0 ---------A   01750  ON A GOTO 1760, 2120, 2380
    0x589110cee240 ---------A T 01760  PRINT S1$;
    0x589110cee2c0 ---------A   01770  REM TIME SECTION
    0x589110cee480 ---------A   01780  PRINT " WHERE WERE YOU AT (1-9) ";
    0x589110cee6a0 ---------A   01790  INPUT T1$
    0x589110ceea90 ---------A   01800  T1 = VAL(T1$)
    0x589110ceeb00 ---------A   01810  REM T1 = X(1) - 48
    0x589110ceed90 ---------A   01820  IF T1 < 1 THEN 1760
    0x589110ceeff0 ---------A   01830  IF T1 > 9 THEN 1760
    0x589110cef4c0 ---------A   01840  R1 = P(S, T1)
    0x589110cef740 ---------A   01850  IF S <> M THEN 1940
    0x589110cef7c0 ---------A   01860  REM LIAR SECTION
    0x589110cefb10 ---------A   01870  IF RND(2) < .5 THEN 2020
    0x589110cf0100 ---------A   01880  R1 = INT(6 * RND(3)) + 1
    0x589110cf0430 ---------A   01890  IF RND(4) < .5 THEN 1920
    0x589110cf05a0 ---------A   01900  PRINT "THE HOST WAS ALREADY DEAD."
    0x589110cf0640 ---------A   01910  GOTO 2020
    0x589110cf07a0 ---------A T 01920  PRINT "OUR HOST WAS STILL ALIVE."
    0x589110cf0830 ---------A   01930  GOTO 2020
    0x589110cf0aa0 ---------A T 01940  IF R1 = R THEN 1960
    0x589110cf0b30 ---------A   01950  GOTO 2020
    0x589110cf0e50 ---------A T 01960  IF RND(5) < .5 THEN 2020
    0x589110cf10f0 ---------A   01970  IF T1 >= T THEN 2000
    0x589110cf1260 ---------A   01980  PRINT " THE HOST WAS STILL ALIVE."
    0x589110cf12f0 ---------A   01990  GOTO 2020
    0x589110cf1580 ---------A T 02000  IF T1 <= T THEN 2020
    0x589110cf1710 ---------A   02010  PRINT " THE HOST WAS ALREADY DEAD."
    0x589110cf1b50 ---------A T 02020  PRINT "I WAS IN THE "; R$(R1); " ROOM."
    0x589110cf1e40 ---------A   02030  FOR K = 1 TO 5
    0x589110cf20d0 ---------A   02040  IF K = S THEN 2090
    0x589110cf2520 ---------A   02050  IF P(K, T1) <> R1 THEN 2070
    0x589110cf2880 ---------A   02060  PRINT "I WAS WITH "; S$(K)
    0x589110cf2eb0 ---------A T 02070  IF ABS(R1 - P(K, T1)) <> 1 THEN 2090
    0x589110cf31f0 ---------A   02080  PRINT "I SAW "; S$(K)
    0x589110cf3330 ---------A T 02090  NEXT K
    0x589110cf33d0 ---------A   02100  GOTO 1570
    0x589110cf3440 ---------A   02110  REM ROOM QUESTIONING
    0x589110cf35f0 ---------A T 02120  PRINT S1$;
    0x589110cf3780 ---------A   02130  PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    0x589110cf39a0 ---------A   02140  INPUT R1$
    0x589110cf3c90 ---------A   02150  FOR T1 = 1 TO 6
    0x589110cf3ff0 ---------A   02160  IF R1$ = R$(T1) THEN 2190
    0x589110cf4130 ---------A   02170  NEXT T1
    0x589110cf41d0 ---------A   02180  GOTO 2120
    0x589110cf4450 ---------A T 02190  IF S <> M THEN 2280
    0x589110cf4780 ---------A   02200  IF RND(5) < .5 THEN 2230
    0x589110cf4d60 ---------A   02210  T1 = INT(RND(5) * 9) + 1
    0x589110cf4de0 ---------A   02220  GOTO 2260
    0x589110cf5060 ---------A T 02230  IF T1 <> T THEN 2260
    0x589110cf51d0 ---------A   02240  PRINT "I WAS NOT IN THAT ROOM."
    0x589110cf5270 ---------A   02250  GOTO 1570
    0x589110cf54d0 ---------A T 02260  PRINT "I WAS IN THAT ROOM AT "; T1
    0x589110cf5550 ---------A   02270  GOTO 1570
    0x589110cf5f70 ---------A T 02280  K = 0
    0x589110cf6310 ---------A   02290  FOR B = 1 TO 9
    0x589110cf6770 ---------A   02300  IF P(S, B) <> T1 THEN 2330
    0x589110cf69e0 ---------A   02310  PRINT "I WAS IN THAT ROOM AT "; B
    0x589110cf6c00 ---------A   02320  K = 1
    0x589110cf6d30 ---------A T 02330  NEXT B
    0x589110cf6fc0 ---------A   02340  IF K = 1 THEN 1570
    0x589110cf7130 ---------A   02350  PRINT "I WAS NOT IN THAT ROOM."
    0x589110cf71c0 ---------A   02360  GOTO 1570
    0x589110cf7240 ---------A   02370  REM COMFRONTATION SECTION
    0x589110cf75a0 ---------A T 02380  C1 = C1 + 1
    0x589110cf7710 ---------A T 02390  PRINT "INSPECTOR DO YOU KNOW :"
    0x589110cf7880 ---------A   02400  PRINT "  1   KILLER"
    0x589110cf79f0 ---------A   02410  PRINT "  2   ROOM"
    0x589110cf7b70 ---------A   02420  PRINT "  3   TIME"
    0x589110cf7d00 ---------A   02430  PRINT "  4   TOTALLY BAFFLED ---";
    0x589110cf7e60 ---------A   02440  INPUT A1$
    0x589110cf8190 ---------A   02450  A = VAL(A1$)
    0x589110cf83c0 ---------A   02470  IF A <= 0 GOTO 2390
    0x589110cf8630 ---------A   02480  IF A > 4 GOTO 2390
    0x589110cf8ae0 ---------A   02490  ON A GOTO 2500, 2730, 2620, 2900
    0x589110cf8c60 ---------A T 02500  PRINT " THE KILLER IS  ";
    0x589110cf8dc0 ---------A   02510  INPUT S1$
    0x589110cf90b0 ---------A   02520  FOR X = 1 TO 5
    0x589110cf9410 ---------A   02530  IF S1$ = S$(X) THEN 2560
    0x589110cf9550 ---------A   02540  NEXT X
    0x589110cf9790 ---------A   02550  X = 0
    0x589110cf99f0 ---------A T 02560  IF X = 0 THEN 2390
    0x589110cf9d70 ---------A   02570  IF S1$ <> S$(M) THEN 2880
    0x589110cf9ef0 ---------A   02580  PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    0x589110cfa240 ---------A   02590  H = H + 1
    0x589110cfa490 ---------A   02600  IF H = 3 THEN 2850
    0x589110cfa520 ---------A   02610  GOTO 1570
    0x589110cfa690 ---------A T 02620  PRINT "TIME OF THE MURDER ";
    0x589110cfa7f0 ---------A   02630  INPUT T1$
    0x589110cfab20 ---------A   02640  T1 = VAL(T1$)
    0x589110cfad80 ---------A   02660  IF T1 < 1 THEN 2620
    0x589110cfaff0 ---------A   02670  IF T1 > 9 THEN 2620
    0x589110cfb290 ---------A   02680  IF T1 <> T THEN 2880
    0x589110cfb400 ---------A   02690  PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    0x589110cfb750 ---------A   02700  H = H + 1
    0x589110cfb9a0 ---------A   02710  IF H = 3 THEN 2850
    0x589110cfba30 ---------A   02720  GOTO 1570
    0x589110cfbba0 ---------A T 02730  PRINT "ROOM OF THE MURDER ";
    0x589110cfbd00 ---------A   02740  INPUT R1$
    0x589110cfbff0 ---------A   02750  FOR X = 1 TO 6
    0x589110cfc350 ---------A   02760  IF R1$ = R$(X) THEN 2790
    0x589110cfc490 ---------A   02770  NEXT X
    0x589110cfc6d0 ---------A   02780  X = 0
    0x589110cfc930 ---------A T 02790  IF X = 0 THEN 2730
    0x589110cfccb0 ---------A   02800  IF R1$ <> R$(R) THEN 2880
    0x589110cfce20 ---------A   02810  PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    0x589110cfd170 ---------A   02820  H = H + 1
    0x589110cfd3d0 ---------A   02830  IF H <> 3 THEN 1570
    0x589110cfd450 ---------A   02840  REM CONFIRMATIONS
    0x589110cfd630 ---------A T 02850  PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    0x589110cfdb90 ---------A   02860  PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    0x589110cfdc40 ---------A   02870  GOTO 2940
    0x589110cfddb0 ---------A T 02880  PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    0x589110cfde50 ---------A   02890  GOTO 1570
    0x589110cfdfc0 ---------A T 02900  PRINT "TOO BAD INSPECTOR CLEW-SO"
    0x589110cfe150 ---------A   02910  PRINT " THE FACTS ARE:"
    0x589110cfe6c0 ---------A   02920  PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    0x589110cfea20 ---------A   02930  PRINT R$(R); " (ROOM)"
    0x589110cfebb0 ---------A T 02940  PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    0x589110cfede0 ---------A   02950  INPUT A$
    0x589110cff070 ---------A   02960  IF A$ = "YES" THEN 1170
    0x589110cff2f0 ---------A   02970  IF A$ = "Y" THEN 1170
    0x589110cff350 ---------A T 02980  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/clewso.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x589110cdbdb0 ---------A   01000  DIM P(5, 9), S$(5), R$(6), X(10)
    0x589110cdab80 ---------A   01010  RANDOMIZE TIMER
    0x589110cdbe70 ---------A   01020  CLS
    0x589110cdc0b0 ---------A   01030  REM*****************************************************
    0x589110cdde60 ---------A   01040  REM*                                                   *
    0x589110cddfa0 ---------A   01050  REM*     INSPECTOR CLEWSO                              *
    0x589110cde090 ---------A   01060  REM*     BY
    0x589110cde180 ---------A   01070  REM*     FEB. 1979                                     *
    0x589110cde270 ---------A   01080  REM*                                                   *
    0x589110cde310 ---------A   01090  REM*****************************************************
    0x589110cd96d0 ---------A   01100  FOR I = 1 TO 5
    0x589110cde820 ---------A   01110  READ S$(I)
    0x589110ce3690 ---------A   01120  NEXT I
    0x589110ce3ba0 ---------A   01130  DATA "BILL","MARY","PAUL","SUZY","JOHN"
    0x589110cd9670 ---------A   01140  FOR I = 1 TO 6
    0x589110ce4050 ---------A   01150  READ R$(I)
    0x589110ce4180 ---------A   01160  NEXT I
    0x589110ce47c0 ---------A T 01170  DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"
    0x589110ce4970 ---------A   01180  PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    0x589110ce4b30 ---------A   01190  PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    0x589110ce4d00 ---------A   01200  PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    0x589110ce4ed0 ---------A   01210  PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    0x589110ce5040 ---------A   01220  PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    0x589110ce51e0 ---------A   01230  PRINT "SOME OF THE TIME."
    0x589110ce53b0 ---------A   01240  PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    0x589110ce5560 ---------A   01250  PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    0x589110ce56d0 ---------A   01260  PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    0x589110ce5750 ---------A   01270  PRINT
    0x589110ce5a30 ---------A   01280  H = 0
    0x589110ce5d00 ---------A   01290  C = 0
    0x589110ce5ff0 ---------A   01300  C1 = 0
    0x589110ce6170 ---------A   01310  PRINT "   !-----------------------------!"
    0x589110ce6300 ---------A   01320  PRINT "   !         !         O GARAGE  !"
    0x589110ce66a0 ---------A   01330  PRINT "   !         O TROPHY  !         !"
    0x589110ce6840 ---------A   01340  PRINT "   ! DINING  !---!--  -!  --     !"
    0x589110ce69e0 ---------A   01350  PRINT "   !                       !-----! NO WINDOWS"
    0x589110ce6b70 ---------A   01360  PRINT "   !--O----------!        -!     !"
    0x589110ce6d00 ---------A   01370  PRINT "   !                             !---"
    0x589110ce6e90 ---------A   01380  PRINT "   !             !--  -------       !"
    0x589110ce7020 ---------A   01390  PRINT "   ! LIVING   ---!         !        !"
    0x589110ce71b0 ---------A   01400  PRINT "   !--        !            O LOUNGE !"
    0x589110ce7340 ---------A   01410  PRINT "     !        0  ATRIUM    !    ----!"
    0x589110ce74b0 ---------A   01420  PRINT "     !--------!------------!----!"
    0x589110ce7860 ---------A   01430  FOR K = 1 TO 5
    0x589110ce8000 ---------A   01440  P(K, 1) = INT(6 * RND(K)) + 1
    0x589110ce8130 ---------A   01450  NEXT K
    0x589110ce84e0 ---------A   01460  FOR L = 2 TO 9
    0x589110ce87d0 ---------A T 01470  FOR K = 1 TO 5
    0x589110ce8ea0 ---------A   01480  A = INT(6 * RND(K)) + 1
    0x589110ce93d0 ---------A   01490  IF A = P(K, L - 1) THEN 1480
    0x589110ce97d0 ---------A   01500  P(K, L) = A
    0x589110ce9900 ---------A   01510  NEXT K
    0x589110ce9a50 ---------A   01520  NEXT L
    0x589110ce9b10 ---------A   01530  REM ESTABLISHED SUSPECT'S MOVEMENTS
    0x589110ce9be0 ---------A   01540  REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    0x589110cea2b0 ---------A   01550  M = INT(5 * RND(1)) + 1
    0x589110cea940 ---------A   01560  T = INT(9 * RND(2)) + 1
    0x589110ceae40 ---------A T 01570  R = P(M, T)
    0x589110ceb0d0 ---------A   01580  INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    0x589110ceb4f0 ---------A   01590  IF LEFT$(S1$, 1) = "Q" THEN 2970
    0x589110ceb8a0 ---------A   01600  FOR S = 1 TO 5
    0x589110cebc00 ---------A   01610  IF S1$ = S$(S) THEN 1640
    0x589110cebd40 ---------A   01620  NEXT S
    0x589110cebf80 ---------A T 01630  S = 0
    0x589110cec1d0 ---------A   01640  IF S = 0 THEN 1580
    0x589110cec690 ---------A T 01650  PRINT
    0x589110ceca30 ---------A   01660  PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    0x589110cecbf0 ---------A   01670  PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    0x589110cecd90 ---------A   01680  PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    0x589110cecf20 ---------A   01690  PRINT "   3   - THE CRIME IS SOLVED ---";
    0x589110ced140 ---------A   01700  INPUT A1$
    0x589110ced470 ---------A   01710  A = VAL(A1$)
    0x589110ced4e0 ---------A   01720  REM A = x(1) - 48
    0x589110ced770 ---------A   01730  IF A < 1 THEN 1660
    0x589110ced9d0 ---------A   01740  IF A > 3 THEN 1660
    0x589110cedd20 ---------A   01750  C = C + 1
    0x589110cee0b0 ---------A T 01760  ON A GOTO 1770, 2130, 2390
    0x589110cee240 ---------A   01770  PRINT S1$;
    0x589110cee2c0 ---------A   01780  REM TIME SECTION
    0x589110cee480 ---------A   01790  PRINT " WHERE WERE YOU AT (1-9) ";
    0x589110cee6a0 ---------A   01800  INPUT T1$
    0x589110ceea90 ---------A   01810  T1 = VAL(T1$)
    0x589110ceeb00 ---------A   01820  REM T1 = X(1) - 48
    0x589110ceed90 ---------A   01830  IF T1 < 1 THEN 1770
    0x589110ceeff0 ---------A   01840  IF T1 > 9 THEN 1770
    0x589110cef4c0 ---------A   01850  R1 = P(S, T1)
    0x589110cef740 ---------A   01860  IF S <> M THEN 1950
    0x589110cef7c0 ---------A   01870  REM LIAR SECTION
    0x589110cefb10 ---------A   01880  IF RND(2) < .5 THEN 2030
    0x589110cf0100 ---------A   01890  R1 = INT(6 * RND(3)) + 1
    0x589110cf0430 ---------A   01900  IF RND(4) < .5 THEN 1930
    0x589110cf05a0 ---------A   01910  PRINT "THE HOST WAS ALREADY DEAD."
    0x589110cf0640 ---------A T 01920  GOTO 2030
    0x589110cf07a0 ---------A   01930  PRINT "OUR HOST WAS STILL ALIVE."
    0x589110cf0830 ---------A T 01940  GOTO 2030
    0x589110cf0aa0 ---------A   01950  IF R1 = R THEN 1970
    0x589110cf0b30 ---------A T 01960  GOTO 2030
    0x589110cf0e50 ---------A   01970  IF RND(5) < .5 THEN 2030
    0x589110cf10f0 ---------A   01980  IF T1 >= T THEN 2010
    0x589110cf1260 ---------A   01990  PRINT " THE HOST WAS STILL ALIVE."
    0x589110cf12f0 ---------A T 02000  GOTO 2030
    0x589110cf1580 ---------A   02010  IF T1 <= T THEN 2030
    0x589110cf1710 ---------A T 02020  PRINT " THE HOST WAS ALREADY DEAD."
    0x589110cf1b50 ---------A   02030  PRINT "I WAS IN THE "; R$(R1); " ROOM."
    0x589110cf1e40 ---------A   02040  FOR K = 1 TO 5
    0x589110cf20d0 ---------A   02050  IF K = S THEN 2100
    0x589110cf2520 ---------A   02060  IF P(K, T1) <> R1 THEN 2080
    0x589110cf2880 ---------A T 02070  PRINT "I WAS WITH "; S$(K)
    0x589110cf2eb0 ---------A   02080  IF ABS(R1 - P(K, T1)) <> 1 THEN 2100
    0x589110cf31f0 ---------A T 02090  PRINT "I SAW "; S$(K)
    0x589110cf3330 ---------A   02100  NEXT K
    0x589110cf33d0 ---------A   02110  GOTO 1580
    0x589110cf3440 ---------A T 02120  REM ROOM QUESTIONING
    0x589110cf35f0 ---------A   02130  PRINT S1$;
    0x589110cf3780 ---------A   02140  PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    0x589110cf39a0 ---------A   02150  INPUT R1$
    0x589110cf3c90 ---------A   02160  FOR T1 = 1 TO 6
    0x589110cf3ff0 ---------A   02170  IF R1$ = R$(T1) THEN 2200
    0x589110cf4130 ---------A   02180  NEXT T1
    0x589110cf41d0 ---------A T 02190  GOTO 2130
    0x589110cf4450 ---------A   02200  IF S <> M THEN 2290
    0x589110cf4780 ---------A   02210  IF RND(5) < .5 THEN 2240
    0x589110cf4d60 ---------A   02220  T1 = INT(RND(5) * 9) + 1
    0x589110cf4de0 ---------A T 02230  GOTO 2270
    0x589110cf5060 ---------A   02240  IF T1 <> T THEN 2270
    0x589110cf51d0 ---------A   02250  PRINT "I WAS NOT IN THAT ROOM."
    0x589110cf5270 ---------A T 02260  GOTO 1580
    0x589110cf54d0 ---------A   02270  PRINT "I WAS IN THAT ROOM AT "; T1
    0x589110cf5550 ---------A T 02280  GOTO 1580
    0x589110cf5f70 ---------A   02290  K = 0
    0x589110cf6310 ---------A   02300  FOR B = 1 TO 9
    0x589110cf6770 ---------A   02310  IF P(S, B) <> T1 THEN 2340
    0x589110cf69e0 ---------A   02320  PRINT "I WAS IN THAT ROOM AT "; B
    0x589110cf6c00 ---------A T 02330  K = 1
    0x589110cf6d30 ---------A   02340  NEXT B
    0x589110cf6fc0 ---------A   02350  IF K = 1 THEN 1580
    0x589110cf7130 ---------A   02360  PRINT "I WAS NOT IN THAT ROOM."
    0x589110cf71c0 ---------A   02370  GOTO 1580
    0x589110cf7240 ---------A T 02380  REM COMFRONTATION SECTION
    0x589110cf75a0 ---------A T 02390  C1 = C1 + 1
    0x589110cf7710 ---------A   02400  PRINT "INSPECTOR DO YOU KNOW :"
    0x589110cf7880 ---------A   02410  PRINT "  1   KILLER"
    0x589110cf79f0 ---------A   02420  PRINT "  2   ROOM"
    0x589110cf7b70 ---------A   02430  PRINT "  3   TIME"
    0x589110cf7d00 ---------A   02440  PRINT "  4   TOTALLY BAFFLED ---";
    0x589110cf7e60 ---------A   02450  INPUT A1$
    0x589110cf8190 ---------A   02460  A = VAL(A1$)
    0x589110cf83c0 ---------A   02470  IF A <= 0 GOTO 2400
    0x589110cf8630 ---------A   02480  IF A > 4 GOTO 2400
    0x589110cf8ae0 ---------A   02490  ON A GOTO 2500, 2720, 2620, 2890
    0x589110cf8c60 ---------A T 02500  PRINT " THE KILLER IS  ";
    0x589110cf8dc0 ---------A   02510  INPUT S1$
    0x589110cf90b0 ---------A   02520  FOR X = 1 TO 5
    0x589110cf9410 ---------A   02530  IF S1$ = S$(X) THEN 2560
    0x589110cf9550 ---------A   02540  NEXT X
    0x589110cf9790 ---------A   02550  X = 0
    0x589110cf99f0 ---------A T 02560  IF X = 0 THEN 2400
    0x589110cf9d70 ---------A   02570  IF S1$ <> S$(M) THEN 2870
    0x589110cf9ef0 ---------A   02580  PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    0x589110cfa240 ---------A   02590  H = H + 1
    0x589110cfa490 ---------A   02600  IF H = 3 THEN 2840
    0x589110cfa520 ---------A   02610  GOTO 1580
    0x589110cfa690 ---------A T 02620  PRINT "TIME OF THE MURDER ";
    0x589110cfa7f0 ---------A   02630  INPUT T1$
    0x589110cfab20 ---------A   02640  T1 = VAL(T1$)
    0x589110cfad80 ---------A   02650  IF T1 < 1 THEN 2620
    0x589110cfaff0 ---------A   02660  IF T1 > 9 THEN 2620
    0x589110cfb290 ---------A   02670  IF T1 <> T THEN 2870
    0x589110cfb400 ---------A   02680  PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    0x589110cfb750 ---------A   02690  H = H + 1
    0x589110cfb9a0 ---------A   02700  IF H = 3 THEN 2840
    0x589110cfba30 ---------A   02710  GOTO 1580
    0x589110cfbba0 ---------A   02720  PRINT "ROOM OF THE MURDER ";
    0x589110cfbd00 ---------A T 02730  INPUT R1$
    0x589110cfbff0 ---------A   02740  FOR X = 1 TO 6
    0x589110cfc350 ---------A   02750  IF R1$ = R$(X) THEN 2780
    0x589110cfc490 ---------A   02760  NEXT X
    0x589110cfc6d0 ---------A   02770  X = 0
    0x589110cfc930 ---------A   02780  IF X = 0 THEN 2720
    0x589110cfccb0 ---------A T 02790  IF R1$ <> R$(R) THEN 2870
    0x589110cfce20 ---------A   02800  PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    0x589110cfd170 ---------A   02810  H = H + 1
    0x589110cfd3d0 ---------A   02820  IF H <> 3 THEN 1580
    0x589110cfd450 ---------A   02830  REM CONFIRMATIONS
    0x589110cfd630 ---------A   02840  PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    0x589110cfdb90 ---------A T 02850  PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    0x589110cfdc40 ---------A   02860  GOTO 2930
    0x589110cfddb0 ---------A   02870  PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    0x589110cfde50 ---------A T 02880  GOTO 1580
    0x589110cfdfc0 ---------A   02890  PRINT "TOO BAD INSPECTOR CLEW-SO"
    0x589110cfe150 ---------A T 02900  PRINT " THE FACTS ARE:"
    0x589110cfe6c0 ---------A   02910  PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    0x589110cfea20 ---------A   02920  PRINT R$(R); " (ROOM)"
    0x589110cfebb0 ---------A   02930  PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    0x589110cfede0 ---------A T 02940  INPUT A$
    0x589110cff070 ---------A   02950  IF A$ = "YES" THEN 1180
    0x589110cff2f0 ---------A   02960  IF A$ = "Y" THEN 1180
    0x589110cff350 ---------A   02970  END
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
    A                        Integer     
    A$                       String      
    A1$                      String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    C                        Integer     
    C1                       Integer     
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
    H                        Integer     
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
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    OCT$            Function String          args=1, float  
    P               Array    Integer         {0,4} {0,8} 
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
    R$              Array    String          {0,5} 
    R1                       Integer     
    R1$                      String      
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
    S$              Array    String          {0,4} 
    S1$                      String      
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    T1                       Integer     
    T1$                      String      
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X               Array    Integer         {0,9} 

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
    0x589110cdbdb0 ---------A   01000  DIM P(5, 9), S$(5), R$(6), X(10)
    0x589110cdab80 ---------A   01010  RANDOMIZE TIMER
    0x589110cdbe70 ---------A   01020  CLS
    0x589110cdc0b0 ---------A   01030  REM*****************************************************
    0x589110cdde60 ---------A   01040  REM*                                                   *
    0x589110cddfa0 ---------A   01050  REM*     INSPECTOR CLEWSO                              *
    0x589110cde090 ---------A   01060  REM*     BY
    0x589110cde180 ---------A   01070  REM*     FEB. 1979                                     *
    0x589110cde270 ---------A   01080  REM*                                                   *
    0x589110cde310 ---------A   01090  REM*****************************************************
    0x589110cd96d0 ---------A   01100  FOR I = 1 TO 5
    0x589110cde820 ---------A   01110  READ S$(I)
    0x589110ce3690 ---------A   01120  NEXT I
    0x589110ce3ba0 ---------A   01130  DATA "BILL","MARY","PAUL","SUZY","JOHN"
    0x589110cd9670 ---------A   01140  FOR I = 1 TO 6
    0x589110ce4050 ---------A   01150  READ R$(I)
    0x589110ce4180 ---------A   01160  NEXT I
    0x589110ce47c0 ---------A   01170  DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"
    0x589110ce4970 ---------A T 01180  PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    0x589110ce4b30 ---------A   01190  PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    0x589110ce4d00 ---------A   01200  PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    0x589110ce4ed0 ---------A   01210  PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    0x589110ce5040 ---------A   01220  PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    0x589110ce51e0 ---------A   01230  PRINT "SOME OF THE TIME."
    0x589110ce53b0 ---------A   01240  PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    0x589110ce5560 ---------A   01250  PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    0x589110ce56d0 ---------A   01260  PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    0x589110ce5750 ---------A   01270  PRINT
    0x589110ce5a30 ---------A   01280  H = 0
    0x589110ce5d00 ---------A   01290  C = 0
    0x589110ce5ff0 ---------A   01300  C1 = 0
    0x589110ce6170 ---------A   01310  PRINT "   !-----------------------------!"
    0x589110ce6300 ---------A   01320  PRINT "   !         !         O GARAGE  !"
    0x589110ce66a0 ---------A   01330  PRINT "   !         O TROPHY  !         !"
    0x589110ce6840 ---------A   01340  PRINT "   ! DINING  !---!--  -!  --     !"
    0x589110ce69e0 ---------A   01350  PRINT "   !                       !-----! NO WINDOWS"
    0x589110ce6b70 ---------A   01360  PRINT "   !--O----------!        -!     !"
    0x589110ce6d00 ---------A   01370  PRINT "   !                             !---"
    0x589110ce6e90 ---------A   01380  PRINT "   !             !--  -------       !"
    0x589110ce7020 ---------A   01390  PRINT "   ! LIVING   ---!         !        !"
    0x589110ce71b0 ---------A   01400  PRINT "   !--        !            O LOUNGE !"
    0x589110ce7340 ---------A   01410  PRINT "     !        0  ATRIUM    !    ----!"
    0x589110ce74b0 ---------A   01420  PRINT "     !--------!------------!----!"
    0x589110ce7860 ---------A   01430  FOR K = 1 TO 5
    0x589110ce8000 ---------A   01440  P(K, 1) = INT(6 * RND(K)) + 1
    0x589110ce8130 ---------A   01450  NEXT K
    0x589110ce84e0 ---------A   01460  FOR L = 2 TO 9
    0x589110ce87d0 ---------A   01470  FOR K = 1 TO 5
    0x589110ce8ea0 ---------A T 01480  A = INT(6 * RND(K)) + 1
    0x589110ce93d0 ---------A   01490  IF A = P(K, L - 1) THEN 1480
    0x589110ce97d0 ---------A   01500  P(K, L) = A
    0x589110ce9900 ---------A   01510  NEXT K
    0x589110ce9a50 ---------A   01520  NEXT L
    0x589110ce9b10 ---------A   01530  REM ESTABLISHED SUSPECT'S MOVEMENTS
    0x589110ce9be0 ---------A   01540  REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    0x589110cea2b0 ---------A   01550  M = INT(5 * RND(1)) + 1
    0x589110cea940 ---------A   01560  T = INT(9 * RND(2)) + 1
    0x589110ceae40 ---------A   01570  R = P(M, T)
    0x589110ceb0d0 ---------A T 01580  INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    0x589110ceb4f0 ---------A   01590  IF LEFT$(S1$, 1) = "Q" THEN 2970
    0x589110ceb8a0 ---------A   01600  FOR S = 1 TO 5
    0x589110cebc00 ---------A   01610  IF S1$ = S$(S) THEN 1640
    0x589110cebd40 ---------A   01620  NEXT S
    0x589110cebf80 ---------A   01630  S = 0
    0x589110cec1d0 ---------A T 01640  IF S = 0 THEN 1580
    0x589110cec690 ---------A   01650  PRINT
    0x589110ceca30 ---------A T 01660  PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    0x589110cecbf0 ---------A   01670  PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    0x589110cecd90 ---------A   01680  PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    0x589110cecf20 ---------A   01690  PRINT "   3   - THE CRIME IS SOLVED ---";
    0x589110ced140 ---------A   01700  INPUT A1$
    0x589110ced470 ---------A   01710  A = VAL(A1$)
    0x589110ced4e0 ---------A   01720  REM A = x(1) - 48
    0x589110ced770 ---------A   01730  IF A < 1 THEN 1660
    0x589110ced9d0 ---------A   01740  IF A > 3 THEN 1660
    0x589110cedd20 ---------A   01750  C = C + 1
    0x589110cee0b0 ---------A   01760  ON A GOTO 1770, 2130, 2390
    0x589110cee240 ---------A T 01770  PRINT S1$;
    0x589110cee2c0 ---------A   01780  REM TIME SECTION
    0x589110cee480 ---------A   01790  PRINT " WHERE WERE YOU AT (1-9) ";
    0x589110cee6a0 ---------A   01800  INPUT T1$
    0x589110ceea90 ---------A   01810  T1 = VAL(T1$)
    0x589110ceeb00 ---------A   01820  REM T1 = X(1) - 48
    0x589110ceed90 ---------A   01830  IF T1 < 1 THEN 1770
    0x589110ceeff0 ---------A   01840  IF T1 > 9 THEN 1770
    0x589110cef4c0 ---------A   01850  R1 = P(S, T1)
    0x589110cef740 ---------A   01860  IF S <> M THEN 1950
    0x589110cef7c0 ---------A   01870  REM LIAR SECTION
    0x589110cefb10 ---------A   01880  IF RND(2) < .5 THEN 2030
    0x589110cf0100 ---------A   01890  R1 = INT(6 * RND(3)) + 1
    0x589110cf0430 ---------A   01900  IF RND(4) < .5 THEN 1930
    0x589110cf05a0 ---------A   01910  PRINT "THE HOST WAS ALREADY DEAD."
    0x589110cf0640 ---------A   01920  GOTO 2030
    0x589110cf07a0 ---------A T 01930  PRINT "OUR HOST WAS STILL ALIVE."
    0x589110cf0830 ---------A   01940  GOTO 2030
    0x589110cf0aa0 ---------A T 01950  IF R1 = R THEN 1970
    0x589110cf0b30 ---------A   01960  GOTO 2030
    0x589110cf0e50 ---------A T 01970  IF RND(5) < .5 THEN 2030
    0x589110cf10f0 ---------A   01980  IF T1 >= T THEN 2010
    0x589110cf1260 ---------A   01990  PRINT " THE HOST WAS STILL ALIVE."
    0x589110cf12f0 ---------A   02000  GOTO 2030
    0x589110cf1580 ---------A T 02010  IF T1 <= T THEN 2030
    0x589110cf1710 ---------A   02020  PRINT " THE HOST WAS ALREADY DEAD."
    0x589110cf1b50 ---------A T 02030  PRINT "I WAS IN THE "; R$(R1); " ROOM."
    0x589110cf1e40 ---------A   02040  FOR K = 1 TO 5
    0x589110cf20d0 ---------A   02050  IF K = S THEN 2100
    0x589110cf2520 ---------A   02060  IF P(K, T1) <> R1 THEN 2080
    0x589110cf2880 ---------A   02070  PRINT "I WAS WITH "; S$(K)
    0x589110cf2eb0 ---------A T 02080  IF ABS(R1 - P(K, T1)) <> 1 THEN 2100
    0x589110cf31f0 ---------A   02090  PRINT "I SAW "; S$(K)
    0x589110cf3330 ---------A T 02100  NEXT K
    0x589110cf33d0 ---------A   02110  GOTO 1580
    0x589110cf3440 ---------A   02120  REM ROOM QUESTIONING
    0x589110cf35f0 ---------A T 02130  PRINT S1$;
    0x589110cf3780 ---------A   02140  PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    0x589110cf39a0 ---------A   02150  INPUT R1$
    0x589110cf3c90 ---------A   02160  FOR T1 = 1 TO 6
    0x589110cf3ff0 ---------A   02170  IF R1$ = R$(T1) THEN 2200
    0x589110cf4130 ---------A   02180  NEXT T1
    0x589110cf41d0 ---------A   02190  GOTO 2130
    0x589110cf4450 ---------A T 02200  IF S <> M THEN 2290
    0x589110cf4780 ---------A   02210  IF RND(5) < .5 THEN 2240
    0x589110cf4d60 ---------A   02220  T1 = INT(RND(5) * 9) + 1
    0x589110cf4de0 ---------A   02230  GOTO 2270
    0x589110cf5060 ---------A T 02240  IF T1 <> T THEN 2270
    0x589110cf51d0 ---------A   02250  PRINT "I WAS NOT IN THAT ROOM."
    0x589110cf5270 ---------A   02260  GOTO 1580
    0x589110cf54d0 ---------A T 02270  PRINT "I WAS IN THAT ROOM AT "; T1
    0x589110cf5550 ---------A   02280  GOTO 1580
    0x589110cf5f70 ---------A T 02290  K = 0
    0x589110cf6310 ---------A   02300  FOR B = 1 TO 9
    0x589110cf6770 ---------A   02310  IF P(S, B) <> T1 THEN 2340
    0x589110cf69e0 ---------A   02320  PRINT "I WAS IN THAT ROOM AT "; B
    0x589110cf6c00 ---------A   02330  K = 1
    0x589110cf6d30 ---------A T 02340  NEXT B
    0x589110cf6fc0 ---------A   02350  IF K = 1 THEN 1580
    0x589110cf7130 ---------A   02360  PRINT "I WAS NOT IN THAT ROOM."
    0x589110cf71c0 ---------A   02370  GOTO 1580
    0x589110cf7240 ---------A   02380  REM COMFRONTATION SECTION
    0x589110cf75a0 ---------A T 02390  C1 = C1 + 1
    0x589110cf7710 ---------A T 02400  PRINT "INSPECTOR DO YOU KNOW :"
    0x589110cf7880 ---------A   02410  PRINT "  1   KILLER"
    0x589110cf79f0 ---------A   02420  PRINT "  2   ROOM"
    0x589110cf7b70 ---------A   02430  PRINT "  3   TIME"
    0x589110cf7d00 ---------A   02440  PRINT "  4   TOTALLY BAFFLED ---";
    0x589110cf7e60 ---------A   02450  INPUT A1$
    0x589110cf8190 ---------A   02460  A = VAL(A1$)
    0x589110cf83c0 ---------A   02470  IF A <= 0 GOTO 2400
    0x589110cf8630 ---------A   02480  IF A > 4 GOTO 2400
    0x589110cf8ae0 ---------A   02490  ON A GOTO 2500, 2720, 2620, 2890
    0x589110cf8c60 ---------A T 02500  PRINT " THE KILLER IS  ";
    0x589110cf8dc0 ---------A   02510  INPUT S1$
    0x589110cf90b0 ---------A   02520  FOR X = 1 TO 5
    0x589110cf9410 ---------A   02530  IF S1$ = S$(X) THEN 2560
    0x589110cf9550 ---------A   02540  NEXT X
    0x589110cf9790 ---------A   02550  X = 0
    0x589110cf99f0 ---------A T 02560  IF X = 0 THEN 2400
    0x589110cf9d70 ---------A   02570  IF S1$ <> S$(M) THEN 2870
    0x589110cf9ef0 ---------A   02580  PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    0x589110cfa240 ---------A   02590  H = H + 1
    0x589110cfa490 ---------A   02600  IF H = 3 THEN 2840
    0x589110cfa520 ---------A   02610  GOTO 1580
    0x589110cfa690 ---------A T 02620  PRINT "TIME OF THE MURDER ";
    0x589110cfa7f0 ---------A   02630  INPUT T1$
    0x589110cfab20 ---------A   02640  T1 = VAL(T1$)
    0x589110cfad80 ---------A   02650  IF T1 < 1 THEN 2620
    0x589110cfaff0 ---------A   02660  IF T1 > 9 THEN 2620
    0x589110cfb290 ---------A   02670  IF T1 <> T THEN 2870
    0x589110cfb400 ---------A   02680  PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    0x589110cfb750 ---------A   02690  H = H + 1
    0x589110cfb9a0 ---------A   02700  IF H = 3 THEN 2840
    0x589110cfba30 ---------A   02710  GOTO 1580
    0x589110cfbba0 ---------A T 02720  PRINT "ROOM OF THE MURDER ";
    0x589110cfbd00 ---------A   02730  INPUT R1$
    0x589110cfbff0 ---------A   02740  FOR X = 1 TO 6
    0x589110cfc350 ---------A   02750  IF R1$ = R$(X) THEN 2780
    0x589110cfc490 ---------A   02760  NEXT X
    0x589110cfc6d0 ---------A   02770  X = 0
    0x589110cfc930 ---------A T 02780  IF X = 0 THEN 2720
    0x589110cfccb0 ---------A   02790  IF R1$ <> R$(R) THEN 2870
    0x589110cfce20 ---------A   02800  PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    0x589110cfd170 ---------A   02810  H = H + 1
    0x589110cfd3d0 ---------A   02820  IF H <> 3 THEN 1580
    0x589110cfd450 ---------A   02830  REM CONFIRMATIONS
    0x589110cfd630 ---------A T 02840  PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    0x589110cfdb90 ---------A   02850  PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    0x589110cfdc40 ---------A   02860  GOTO 2930
    0x589110cfddb0 ---------A T 02870  PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    0x589110cfde50 ---------A   02880  GOTO 1580
    0x589110cfdfc0 ---------A T 02890  PRINT "TOO BAD INSPECTOR CLEW-SO"
    0x589110cfe150 ---------A   02900  PRINT " THE FACTS ARE:"
    0x589110cfe6c0 ---------A   02910  PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    0x589110cfea20 ---------A   02920  PRINT R$(R); " (ROOM)"
    0x589110cfebb0 ---------A T 02930  PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    0x589110cfede0 ---------A   02940  INPUT A$
    0x589110cff070 ---------A   02950  IF A$ = "YES" THEN 1180
    0x589110cff2f0 ---------A   02960  IF A$ = "Y" THEN 1180
    0x589110cff350 ---------A T 02970  END
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
int    iAnswer;                                   // Basic: A 
char*  s1Answer;                                  // Basic: A$ 
char*  s2Answer;                                  // Basic: A1$ 
int    B_int;                                     // Basic: B 
int    ClewsoQuestionCnt;                         // Basic: C 
int    ClewsoConfrontCnt;                         // Basic: C1 
int    TallyInfoCorrect;                          // Basic: H 
int    idx1;                                      // Basic: I 
int    Person;                                    // Basic: K 
int    Time;                                      // Basic: L 
int    Killer;                                    // Basic: M 
int    SuspectMovement[5][9];                     // Basic: P 
int    RoomOfMurder;                              // Basic: R 
char*  RoomNames[6];                              // Basic: R$ 
int    SuspectLocationAtHour;                     // Basic: R1 
char*  RoomName;                                  // Basic: R1$ 
int    Suspect;                                   // Basic: S 
char*  NPCNames[5];                               // Basic: S$ 
char*  SuspectName;                               // Basic: S1$ 
int    TimeOfMurder;                              // Basic: T 
int    idx2;                                      // Basic: T1 
char*  TimeAnswer;                                // Basic: T1$ 
int    X_int_arr[10];                             // Basic: X 
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
    // 01000 DIM P(5, 9), S$(5), R$(6), X(10)
    // 01010 RANDOMIZE TIMER
    RANDOMIZE(false);
    // 01020 CLS
    ClearScreen(0);
    // 01030 REM*****************************************************
    // 01040 REM*                                                   *
    // 01050 REM*     INSPECTOR CLEWSO                              *
    // 01060 REM*     BY
    // 01070 REM*     FEB. 1979                                     *
    // 01080 REM*                                                   *
    // 01090 REM*****************************************************
    // 01100 FOR I = 1 TO 5
    for(idx1=1;idx1<=5;idx1++){
        // 01110 READ S$(I)
        NPCNames[idx1] = Get_Data_String();
        // 01120 NEXT I
        int dummy_1120=0; // Ignore this line.
    }; // End-For(idx1)
    // 01130 DATA "BILL","MARY","PAUL","SUZY","JOHN"
    // 01140 FOR I = 1 TO 6
    for(idx1=1;idx1<=6;idx1++){
        // 01150 READ R$(I)
        RoomNames[idx1] = Get_Data_String();
        // 01160 NEXT I
        int dummy_1160=0; // Ignore this line.
    }; // End-For(idx1)
    // 01170 DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"

  StartGame:
    // 01180 PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST ");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM.");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "SOME OF THE TIME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SOME OF THE TIME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE ");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ROOM WHERE THE MURDER TOOK PLACE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01280 H = 0
    TallyInfoCorrect = 0;
    // 01290 C = 0
    ClewsoQuestionCnt = 0;
    // 01300 C1 = 0
    ClewsoConfrontCnt = 0;
    // 01310 PRINT "   !-----------------------------!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   !-----------------------------!");strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT "   !         !         O GARAGE  !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   !         !         O GARAGE  !");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT "   !         O TROPHY  !         !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   !         O TROPHY  !         !");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT "   ! DINING  !---!--  -!  --     !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   ! DINING  !---!--  -!  --     !");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT "   !                       !-----! NO WINDOWS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   !                       !-----! NO WINDOWS");strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT "   !--O----------!        -!     !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   !--O----------!        -!     !");strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT "   !                             !---"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   !                             !---");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT "   !             !--  -------       !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   !             !--  -------       !");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 PRINT "   ! LIVING   ---!         !        !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   ! LIVING   ---!         !        !");strcat(buf,"\n");fputs(buf,fh); };
    // 01400 PRINT "   !--        !            O LOUNGE !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   !--        !            O LOUNGE !");strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT "     !        0  ATRIUM    !    ----!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     !        0  ATRIUM    !    ----!");strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT "     !--------!------------!----!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     !--------!------------!----!");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 FOR K = 1 TO 5
    for(Person=1;Person<=5;Person++){
        // 01440 P(K, 1) = INT(6 * RND(K)) + 1
        SuspectMovement[Person][1] = INT(6*RND(Person))+1;
        // 01450 NEXT K
        int dummy_1450=0; // Ignore this line.
    }; // End-For(Person)
    // 01460 FOR L = 2 TO 9
    for(Time=2;Time<=9;Time++){
        // 01470 FOR K = 1 TO 5
        for(Person=1;Person<=5;Person++){

  NotPreviousRoom:
            // 01480 A = INT(6 * RND(K)) + 1
            iAnswer = INT(6*RND(Person))+1;
            // 01490 IF A = P(K, L - 1) THEN 1480
            if(iAnswer==SuspectMovement[Person][Time-1])goto NotPreviousRoom;
            // 01500 P(K, L) = A
            SuspectMovement[Person][Time] = iAnswer;
            // 01510 NEXT K
            int dummy_1510=0; // Ignore this line.
        }; // End-For(Person)
        // 01520 NEXT L
        int dummy_1520=0; // Ignore this line.
    }; // End-For(Time)
    // 01530 REM ESTABLISHED SUSPECT'S MOVEMENTS
    // 01540 REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    // 01550 M = INT(5 * RND(1)) + 1
    Killer = INT(5*RND(1))+1;
    // 01560 T = INT(9 * RND(2)) + 1
    TimeOfMurder = INT(9*RND(2))+1;
    // 01570 R = P(M, T)
    RoomOfMurder = SuspectMovement[Killer][TimeOfMurder];

  QClewsoSuspect:
    // 01580 INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    // Start of Basic INPUT statement 01580
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) ");
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
    // 01590 IF LEFT$(S1$, 1) = "Q" THEN 2970
    if(LEFT$(SuspectName,1)=='Q')goto QuitGame;
    // 01600 FOR S = 1 TO 5
    for(Suspect=1;Suspect<=5;Suspect++){
        // 01610 IF S1$ = S$(S) THEN 1640
        if(strcmp(SuspectName,NPCNames[Suspect])==0)goto CheckRecognizeName;
        // 01620 NEXT S
        int dummy_1620=0; // Ignore this line.
    }; // End-For(Suspect)
    // 01630 S = 0
    Suspect = 0;

  CheckRecognizeName:
    // 01640 IF S = 0 THEN 1580
    if(Suspect==0)goto QClewsoSuspect;
    // 01650 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  QSuspectWhereabouts:
    // 01660 PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WISH TO QUESTION "); strcat(buf,SuspectName);strcat(buf," ABOUT :");strcat(buf,"\n");fputs(buf,fh); };
    // 01670 PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME");strcat(buf,"\n");fputs(buf,fh); };
    // 01680 PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM");strcat(buf,"\n");fputs(buf,fh); };
    // 01690 PRINT "   3   - THE CRIME IS SOLVED ---";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   3   - THE CRIME IS SOLVED ---");fputs(buf,fh); };
    // 01700 INPUT A1$
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
    // 01710 A = VAL(A1$)
    iAnswer = VAL(s2Answer);
    // 01720 REM A = x(1) - 48
    // 01730 IF A < 1 THEN 1660
    if(iAnswer<1)goto QSuspectWhereabouts;
    // 01740 IF A > 3 THEN 1660
    if(iAnswer>3)goto QSuspectWhereabouts;
    // 01750 C = C + 1
    ClewsoQuestionCnt = ClewsoQuestionCnt+1;
    // 01760 ON A GOTO 1770, 2130, 2390
    switch((int)(iAnswer)){
        case 1: goto QSuspectLocationAtTime;
        case 2: goto QSuspectTimeInRoom;
        case 3: goto ClewsoConfrontsSuspect;
        default: break; 
    };

  QSuspectLocationAtTime:
    // 01770 PRINT S1$;
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,SuspectName);fputs(buf,fh); };
    // 01780 REM TIME SECTION
    // 01790 PRINT " WHERE WERE YOU AT (1-9) ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," WHERE WERE YOU AT (1-9) ");fputs(buf,fh); };
    // 01800 INPUT T1$
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
    // 01810 T1 = VAL(T1$)
    idx2 = VAL(TimeAnswer);
    // 01820 REM T1 = X(1) - 48
    // 01830 IF T1 < 1 THEN 1770
    if(idx2<1)goto QSuspectLocationAtTime;
    // 01840 IF T1 > 9 THEN 1770
    if(idx2>9)goto QSuspectLocationAtTime;
    // 01850 R1 = P(S, T1)
    SuspectLocationAtHour = SuspectMovement[Suspect][idx2];
    // 01860 IF S <> M THEN 1950
    if(Suspect!=Killer)goto ChkSuspectInMurderRoom;
    // 01870 REM LIAR SECTION
    // 01880 IF RND(2) < .5 THEN 2030
    if(RND(2)<0.5)goto SuspectLocationAtTime;
    // 01890 R1 = INT(6 * RND(3)) + 1
    SuspectLocationAtHour = INT(6*RND(3))+1;
    // 01900 IF RND(4) < .5 THEN 1930
    if(RND(4)<0.5)goto SuspectLiesAboutTime;
    // 01910 PRINT "THE HOST WAS ALREADY DEAD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE HOST WAS ALREADY DEAD.");strcat(buf,"\n");fputs(buf,fh); };
    // 01920 GOTO 2030
    goto SuspectLocationAtTime;

  SuspectLiesAboutTime:
    // 01930 PRINT "OUR HOST WAS STILL ALIVE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OUR HOST WAS STILL ALIVE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01940 GOTO 2030
    goto SuspectLocationAtTime;

  ChkSuspectInMurderRoom:
    // 01950 IF R1 = R THEN 1970
    if(SuspectLocationAtHour==RoomOfMurder)goto SuspectInRoomAtTimeOfMurder;
    // 01960 GOTO 2030
    goto SuspectLocationAtTime;

  SuspectInRoomAtTimeOfMurder:
    // 01970 IF RND(5) < .5 THEN 2030
    if(RND(5)<0.5)goto SuspectLocationAtTime;
    // 01980 IF T1 >= T THEN 2010
    if(idx2>=TimeOfMurder)goto SuspectReportHostDead;
    // 01990 PRINT " THE HOST WAS STILL ALIVE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THE HOST WAS STILL ALIVE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02000 GOTO 2030
    goto SuspectLocationAtTime;

  SuspectReportHostDead:
    // 02010 IF T1 <= T THEN 2030
    if(idx2<=TimeOfMurder)goto SuspectLocationAtTime;
    // 02020 PRINT " THE HOST WAS ALREADY DEAD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THE HOST WAS ALREADY DEAD.");strcat(buf,"\n");fputs(buf,fh); };

  SuspectLocationAtTime:
    // 02030 PRINT "I WAS IN THE "; R$(R1); " ROOM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WAS IN THE "); strcat(buf,RoomNames[SuspectLocationAtHour]);strcat(buf," ROOM.");strcat(buf,"\n");fputs(buf,fh); };
    // 02040 FOR K = 1 TO 5
    for(Person=1;Person<=5;Person++){
        // 02050 IF K = S THEN 2100
        if(Person==Suspect)goto WithHimself;
        // 02060 IF P(K, T1) <> R1 THEN 2080
        if(SuspectMovement[Person][idx2]!=SuspectLocationAtHour)goto CheckSawWho;
        // 02070 PRINT "I WAS WITH "; S$(K)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WAS WITH "); strcat(buf,NPCNames[Person]);strcat(buf,"\n");fputs(buf,fh); };

  CheckSawWho:
        // 02080 IF ABS(R1 - P(K, T1)) <> 1 THEN 2100
        if(ABS(SuspectLocationAtHour-SuspectMovement[Person][idx2])!=1)goto WithHimself;
        // 02090 PRINT "I SAW "; S$(K)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I SAW "); strcat(buf,NPCNames[Person]);strcat(buf,"\n");fputs(buf,fh); };

  WithHimself:
        // 02100 NEXT K
        int dummy_2100=0; // Ignore this line.
    }; // End-For(Person)
    // 02110 GOTO 1580
    goto QClewsoSuspect;
    // 02120 REM ROOM QUESTIONING

  QSuspectTimeInRoom:
    // 02130 PRINT S1$;
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,SuspectName);fputs(buf,fh); };
    // 02140 PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," WHAT TIME WERE YOU IN [ROOM] ");fputs(buf,fh); };
    // 02150 INPUT R1$
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
    // 02160 FOR T1 = 1 TO 6
    for(idx2=1;idx2<=6;idx2++){
        // 02170 IF R1$ = R$(T1) THEN 2200
        if(strcmp(RoomName,RoomNames[idx2])==0)goto GotRoomIndex;
        // 02180 NEXT T1
        int dummy_2180=0; // Ignore this line.
    }; // End-For(idx2)
    // 02190 GOTO 2130
    goto QSuspectTimeInRoom;

  GotRoomIndex:
    // 02200 IF S <> M THEN 2290
    if(Suspect!=Killer)goto SuspectReportsTimeInRoom;
    // 02210 IF RND(5) < .5 THEN 2240
    if(RND(5)<0.5)goto KillerLiesNotInRoom;
    // 02220 T1 = INT(RND(5) * 9) + 1
    idx2 = INT(RND(5)*9)+1;
    // 02230 GOTO 2270
    goto KillerReportsTimeInRoom;

  KillerLiesNotInRoom:
    // 02240 IF T1 <> T THEN 2270
    if(idx2!=TimeOfMurder)goto KillerReportsTimeInRoom;
    // 02250 PRINT "I WAS NOT IN THAT ROOM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WAS NOT IN THAT ROOM.");strcat(buf,"\n");fputs(buf,fh); };
    // 02260 GOTO 1580
    goto QClewsoSuspect;

  KillerReportsTimeInRoom:
    // 02270 PRINT "I WAS IN THAT ROOM AT "; T1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WAS IN THAT ROOM AT "); b2c_INT(buf,idx2);strcat(buf,"\n");fputs(buf,fh); };
    // 02280 GOTO 1580
    goto QClewsoSuspect;

  SuspectReportsTimeInRoom:
    // 02290 K = 0
    Person = 0;
    // 02300 FOR B = 1 TO 9
    for(B_int=1;B_int<=9;B_int++){
        // 02310 IF P(S, B) <> T1 THEN 2340
        if(SuspectMovement[Suspect][B_int]!=idx2)goto NotInRoomNow;
        // 02320 PRINT "I WAS IN THAT ROOM AT "; B
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WAS IN THAT ROOM AT "); b2c_INT(buf,B_int);strcat(buf,"\n");fputs(buf,fh); };
        // 02330 K = 1
        Person = 1;

  NotInRoomNow:
        // 02340 NEXT B
        int dummy_2340=0; // Ignore this line.
    }; // End-For(B_int)
    // 02350 IF K = 1 THEN 1580
    if(Person==1)goto QClewsoSuspect;
    // 02360 PRINT "I WAS NOT IN THAT ROOM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WAS NOT IN THAT ROOM.");strcat(buf,"\n");fputs(buf,fh); };
    // 02370 GOTO 1580
    goto QClewsoSuspect;
    // 02380 REM COMFRONTATION SECTION

  ClewsoConfrontsSuspect:
    // 02390 C1 = C1 + 1
    ClewsoConfrontCnt = ClewsoConfrontCnt+1;

  QWhichInfo:
    // 02400 PRINT "INSPECTOR DO YOU KNOW :"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INSPECTOR DO YOU KNOW :");strcat(buf,"\n");fputs(buf,fh); };
    // 02410 PRINT "  1   KILLER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  1   KILLER");strcat(buf,"\n");fputs(buf,fh); };
    // 02420 PRINT "  2   ROOM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  2   ROOM");strcat(buf,"\n");fputs(buf,fh); };
    // 02430 PRINT "  3   TIME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  3   TIME");strcat(buf,"\n");fputs(buf,fh); };
    // 02440 PRINT "  4   TOTALLY BAFFLED ---";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  4   TOTALLY BAFFLED ---");fputs(buf,fh); };
    // 02450 INPUT A1$
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
    // 02460 A = VAL(A1$)
    iAnswer = VAL(s2Answer);
    // 02470 IF A <= 0 GOTO 2400
    if(iAnswer<=0)goto QWhichInfo;
    // 02480 IF A > 4 GOTO 2400
    if(iAnswer>4)goto QWhichInfo;
    // 02490 ON A GOTO 2500, 2720, 2620, 2890
    switch((int)(iAnswer)){
        case 1: goto QSuspectName;
        case 2: goto QRoomOfMurder;
        case 3: goto QTimeOfMurder;
        case 4: goto ClewsoGivesUp;
        default: break; 
    };

  QSuspectName:
    // 02500 PRINT " THE KILLER IS  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THE KILLER IS  ");fputs(buf,fh); };
    // 02510 INPUT S1$
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
    // 02520 FOR X = 1 TO 5
    for(X_int_arr[0]=1;X_int_arr[0]<=5;X_int_arr[0]++){
        // 02530 IF S1$ = S$(X) THEN 2560
        if(strcmp(SuspectName,NPCNames[X_int_arr[0]])==0)goto GotSuspectIdx;
        // 02540 NEXT X
        int dummy_2540=0; // Ignore this line.
    }; // End-For(X_int_arr[0])
    // 02550 X = 0
    X_int_arr[0] = 0;

  GotSuspectIdx:
    // 02560 IF X = 0 THEN 2400
    if(X_int_arr[0]==0)goto QWhichInfo;
    // 02570 IF S1$ <> S$(M) THEN 2870
    if(strcmp(SuspectName,NPCNames[Killer])!=0)goto ClewsoGotItWrong;
    // 02580 PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE THE KILLER, INSPECTOR CLEW-SO.");strcat(buf,"\n");fputs(buf,fh); };
    // 02590 H = H + 1
    TallyInfoCorrect = TallyInfoCorrect+1;
    // 02600 IF H = 3 THEN 2840
    if(TallyInfoCorrect==3)goto GotSolution;
    // 02610 GOTO 1580
    goto QClewsoSuspect;

  QTimeOfMurder:
    // 02620 PRINT "TIME OF THE MURDER ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TIME OF THE MURDER ");fputs(buf,fh); };
    // 02630 INPUT T1$
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
    // 02640 T1 = VAL(T1$)
    idx2 = VAL(TimeAnswer);
    // 02650 IF T1 < 1 THEN 2620
    if(idx2<1)goto QTimeOfMurder;
    // 02660 IF T1 > 9 THEN 2620
    if(idx2>9)goto QTimeOfMurder;
    // 02670 IF T1 <> T THEN 2870
    if(idx2!=TimeOfMurder)goto ClewsoGotItWrong;
    // 02680 PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INSPECTOR YOU HAVE THE RIGHT TIME.");strcat(buf,"\n");fputs(buf,fh); };
    // 02690 H = H + 1
    TallyInfoCorrect = TallyInfoCorrect+1;
    // 02700 IF H = 3 THEN 2840
    if(TallyInfoCorrect==3)goto GotSolution;
    // 02710 GOTO 1580
    goto QClewsoSuspect;

  QRoomOfMurder:
    // 02720 PRINT "ROOM OF THE MURDER ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ROOM OF THE MURDER ");fputs(buf,fh); };
    // 02730 INPUT R1$
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
    // 02740 FOR X = 1 TO 6
    for(X_int_arr[0]=1;X_int_arr[0]<=6;X_int_arr[0]++){
        // 02750 IF R1$ = R$(X) THEN 2780
        if(strcmp(RoomName,RoomNames[X_int_arr[0]])==0)goto CheckRightRoom;
        // 02760 NEXT X
        int dummy_2760=0; // Ignore this line.
    }; // End-For(X_int_arr[0])
    // 02770 X = 0
    X_int_arr[0] = 0;

  CheckRightRoom:
    // 02780 IF X = 0 THEN 2720
    if(X_int_arr[0]==0)goto QRoomOfMurder;
    // 02790 IF R1$ <> R$(R) THEN 2870
    if(strcmp(RoomName,RoomNames[RoomOfMurder])!=0)goto ClewsoGotItWrong;
    // 02800 PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INSPECTOR , YOU NOW HAVE THE ROOM.");strcat(buf,"\n");fputs(buf,fh); };
    // 02810 H = H + 1
    TallyInfoCorrect = TallyInfoCorrect+1;
    // 02820 IF H <> 3 THEN 1580
    if(TallyInfoCorrect!=3)goto QClewsoSuspect;
    // 02830 REM CONFIRMATIONS

  GotSolution:
    // 02840 PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE BRILLIANT INSPECTOR CLEW-SO.");strcat(buf,"\n");fputs(buf,fh); };
    // 02850 PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT TOOK YOU "); b2c_INT(buf,ClewsoQuestionCnt);strcat(buf," QUESTIONS AND "); b2c_INT(buf,ClewsoConfrontCnt);strcat(buf,"CONFRONTATIONS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02860 GOTO 2930
    goto QNewGame;

  ClewsoGotItWrong:
    // 02870 PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN");strcat(buf,"\n");fputs(buf,fh); };
    // 02880 GOTO 1580
    goto QClewsoSuspect;

  ClewsoGivesUp:
    // 02890 PRINT "TOO BAD INSPECTOR CLEW-SO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO BAD INSPECTOR CLEW-SO");strcat(buf,"\n");fputs(buf,fh); };
    // 02900 PRINT " THE FACTS ARE:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THE FACTS ARE:");strcat(buf,"\n");fputs(buf,fh); };
    // 02910 PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,NPCNames[Killer]);strcat(buf," KILLED THE HOST AT "); b2c_INT(buf,TimeOfMurder);strcat(buf," O'CLOCK IN THE ");fputs(buf,fh); };
    // 02920 PRINT R$(R); " (ROOM)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,RoomNames[RoomOfMurder]);strcat(buf," (ROOM)");strcat(buf,"\n");fputs(buf,fh); };

  QNewGame:
    // 02930 PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT A NEW CASE INSPECTOR  ");fputs(buf,fh); };
    // 02940 INPUT A$
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
    // 02950 IF A$ = "YES" THEN 1180
    if(strcmp(s1Answer,"YES")==0)goto StartGame;
    // 02960 IF A$ = "Y" THEN 1180
    if(strcmp(s1Answer,"Y")==0)goto StartGame;

  QuitGame:
    // 02970 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
