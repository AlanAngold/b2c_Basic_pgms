/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/joust.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e09fc686d50 ---------A   01000  RANDOMIZE
    0x5e09fc6846d0 ---------A   01010  PRINT TAB(26);"JOUST"
    0x5e09fc684670 ---------A   01020  PRINT TAB(20);"CREATIVE COMPUTING"
    0x5e09fc686580 ---------A   01030  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5e09fc6861b0 ---------A   01040  PRINT
    0x5e09fc686a40 ---------A   01050  PRINT
    0x5e09fc686aa0 ---------A   01060  PRINT
    0x5e09fc684e40 ---------A   01070  PRINT"WHAT IS YOUR NAME, PLEASE";
    0x5e09fc684be0 ---------A   01080  INPUT A$
    0x5e09fc684ca0 ---------A   01085  PRINT
    0x5e09fc6856e0 ---------A   01090  PRINT"SIR ";A$;" YOU ARE A MEDIEVAL KNIGHT IN A JOUSTING TOURNAMENT."
    0x5e09fc685840 ---------A   01100  PRINT"THE PRIZE TO THE WINNER IS THE PRINCESS' HAND IN MARRIAGE."
    0x5e09fc68c900 ---------A   01110  PRINT"TO WIN, YOU MUST BEAT FOUR OTHER KNIGHTS."
    0x5e09fc68cac0 ---------A   01120  PRINT"TO JOUST, YOU PICK AN AIMING POINT FOR THE LANCE,"
    0x5e09fc68cbe0 ---------A   01130  PRINT"AND THEN ONE OF FROM 3 TO 6 DIFFERENT POSSIBLE DEFENCE POSITIONS."
    0x5e09fc68cd00 ---------A   01140  PRINT"THE AIMING POINTS ARE:"
    0x5e09fc68ce20 ---------A   01150  PRINT"1 - HELM"
    0x5e09fc68cfa0 ---------A   01160  PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x5e09fc68d110 ---------A   01170  PRINT"3 - UPPER MIDDLE"
    0x5e09fc68d280 ---------A   01180  PRINT"4 - UPPER RIGHT"
    0x5e09fc68d3f0 ---------A   01190  PRINT"5 - LOWER LEFT"
    0x5e09fc68d560 ---------A   01200  PRINT"6 - LOWER MIDDLE"
    0x5e09fc68d6d0 ---------A   01210  PRINT"7 - LOWER RIGHT"
    0x5e09fc68d830 ---------A   01220  PRINT"8 - BASE OF SHIELD"
    0x5e09fc68d8f0 ---------A   01230  PRINT
    0x5e09fc68da40 ---------A   01240  PRINT"IF YOU BREAK A LANCE OR LOSE A HELM, YOU WILL BE GIVEN ANOTHER."
    0x5e09fc68dba0 ---------A   01250  PRINT"GOOD LUCK, SIR!"
    0x5e09fc68dc20 ---------A T 01260  PRINT
    0x5e09fc68dfd0 ---------A   01270  FOR A = 1 TO 4
    0x5e09fc68e440 ---------A   01280  ON A GOTO 1310,1330,1350,1370
    0x5e09fc68e4d0 ---------A   01290  REM OFF YOU GO TO THE FOUR JOUSTS
    0x5e09fc68e5b0 ---------A   01300  REM ------------------------------------------------
    0x5e09fc68e790 ---------A T 01310  PRINT"THIS IS YOUR FIRST JOUST. YOU ARE UP AGAINST THE GOLD KNIGHT."
    0x5e09fc68ea60 ---------A   01320  GOTO 1390
    0x5e09fc68ebe0 ---------A T 01330  PRINT"THIS IS YOUR SECOND JOUST. YOUR OPPONENT IS THE SILVER KNIGHT."
    0x5e09fc68eca0 ---------A   01340  GOTO 1390
    0x5e09fc68ee20 ---------A T 01350  PRINT"YOU ARE DOING WELL! YOUR THIRD JOUST IS AGAINST THE RED KNIGHT."
    0x5e09fc68eed0 ---------A   01360  GOTO 1390
    0x5e09fc68f090 ---------A T 01370  PRINT"THIS IS YOUR FINAL TEST!! IF YOU WIN THIS ONE, THE PRINCESS"
    0x5e09fc68f250 ---------A   01380  PRINT"IS YOURS!!! THIS FIGHT IS AGAINST THE FIERCE BLACK KNIGHT!!!!"
    0x5e09fc68f3f0 ---------A T 01390  PRINT "YOUR AIMING POINT(1-8) OR 0 {ZERO} FOR HELP";
    0x5e09fc68f610 ---------A   01400  INPUT B
    0x5e09fc68f870 ---------A   01405  IF B = 0 THEN 2530
    0x5e09fc68fad0 ---------A   01410  IF B < 1 THEN 1390
    0x5e09fc68fd50 ---------A   01420  IF B > 8 THEN 1390
    0x5e09fc68fee0 ---------A   01430  PRINT"YOU MAY USE ONE OF THESE DEFENCES:"
    0x5e09fc690670 ---------A   01440  ON B  GOTO 1450,1470,1490,1520,1450,1490,1450,1540
    0x5e09fc6907f0 ---------A T 01450  PRINT" 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc6908b0 ---------A   01460  GOTO 1550
    0x5e09fc690a30 ---------A T 01470  PRINT" 3 -LEFT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc690af0 ---------A   01480  GOTO 1550
    0x5e09fc690c90 ---------A T 01490  PRINT"1 - LOWER HELM, 2 - RIGHT LEAN, 3 - LEFT LEAN, 4 - STEADY SEAT,"
    0x5e09fc690e00 ---------A   01500  PRINT" 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc690ec0 ---------A   01510  GOTO 1550
    0x5e09fc691040 ---------A T 01520  PRINT"2 - RIGHT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc691100 ---------A   01530  GOTO 1550
    0x5e09fc691290 ---------A T 01540  PRINT"1 - LOWER HELM, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc691410 ---------A T 01550  PRINT"WHAT IS YOUR CHOICE";
    0x5e09fc691630 ---------A   01560  INPUT C
    0x5e09fc691cf0 ---------A   01570  D=INT(RND(1)*8)+1
    0x5e09fc692460 ---------A   01580  ON D GOTO 1590,1600,1610,1620,1630,1640,1650,1660
    0x5e09fc692a60 ---------A T 01590  ON C GOTO 1670,1670,1670,1730,1790,1670
    0x5e09fc693060 ---------A T 01600  ON C GOTO 1790,1760,1670,1760,1760,1670
    0x5e09fc693660 ---------A T 01610  ON C GOTO 1820,1790,1700,1760,1880,1850
    0x5e09fc693c60 ---------A T 01620  ON C GOTO 1700,1670,1760,1700,1700,1790
    0x5e09fc694670 ---------A T 01630  ON C GOTO 1760,1880,1670,1760,1670,1760
    0x5e09fc694c70 ---------A T 01640  ON C GOTO 1880,1700,1760,1880,1820,1760
    0x5e09fc695270 ---------A T 01650  ON C GOTO 1700,1670,1880,1700,1700,1700
    0x5e09fc695860 ---------A T 01660  ON C GOTO 1760,1700,1820,1760,1820,1760
    0x5e09fc6959c0 ---------A T 01670  PRINT"HE MISSED YOU!"
    0x5e09fc695ca0 ---------A   01680  S=0
    0x5e09fc695d30 ---------A   01690  GOTO 1900
    0x5e09fc695e90 ---------A T 01700  PRINT"HE HIT YOUR SHIELD BUT IT GLANCED OFF"
    0x5e09fc6960b0 ---------A   01710  S=0
    0x5e09fc696130 ---------A   01720  GOTO 1900
    0x5e09fc696290 ---------A T 01730  PRINT"HE KNOCKED OFF YOUR HELM"
    0x5e09fc6964b0 ---------A   01740  S=0
    0x5e09fc696530 ---------A   01750  GOTO 1900
    0x5e09fc696680 ---------A T 01760  PRINT"HE BROKE HIS LANCE."
    0x5e09fc6968a0 ---------A   01770  S=0
    0x5e09fc696920 ---------A   01780  GOTO 1900
    0x5e09fc696a80 ---------A T 01790  PRINT"HE HAS UNSEATED YOU(THUD!)"
    0x5e09fc696ca0 ---------A   01800  S=5
    0x5e09fc696d40 ---------A   01810  GOTO 1900
    0x5e09fc696ec0 ---------A T 01820  PRINT"HE HAS BROKEN HIS LANCE, INJURED AND UNSEATED YOU (OUCH!)"
    0x5e09fc6970e0 ---------A   01830  S=5
    0x5e09fc697170 ---------A   01840  GOTO 1900
    0x5e09fc6972e0 ---------A T 01850  PRINT"HE HAS INJURED AND UNSEATED YOU (CRASH!)"
    0x5e09fc697500 ---------A   01860  S=5
    0x5e09fc6975a0 ---------A   01870  GOTO 1900
    0x5e09fc697710 ---------A T 01880  PRINT"HE HAS BROKEN HIS LANCE AND UNSEATED YOU (CLANG!)"
    0x5e09fc697930 ---------A   01890  S=5
    0x5e09fc697fe0 ---------A T 01900  E=INT(RND(1)*6)+1
    0x5e09fc698730 ---------A   01910  ON D GOTO 1920,1940,1960,1970,1920,1960,1920,2000
    0x5e09fc698990 ---------A T 01920  IF E<4 THEN 1900
    0x5e09fc698a10 ---------A   01930  GOTO 2020
    0x5e09fc698c60 ---------A T 01940  IF E<3 THEN 1900
    0x5e09fc698ce0 ---------A   01950  GOTO 2020
    0x5e09fc698d50 ---------A T 01960  GOTO 2020
    0x5e09fc698fa0 ---------A T 01970  IF E=1 THEN 1900
    0x5e09fc699200 ---------A   01980  IF E=3 THEN 1900
    0x5e09fc699280 ---------A   01990  GOTO 2020
    0x5e09fc6994d0 ---------A T 02000  IF E=2 THEN 1900
    0x5e09fc699750 ---------A   02010  IF E=3 THEN 1900
    0x5e09fc699d50 ---------A T 02020  ON E GOTO 2030,2040,2050,2060,2070,2080
    0x5e09fc69a4d0 ---------A T 02030  ON B GOTO 2090,2210,2240,2120,2180,2300,2120,2180
    0x5e09fc69ac50 ---------A T 02040  ON B GOTO 2090,2180,2210,2090,2300,2120,2090,2120
    0x5e09fc69b3d0 ---------A T 02050  ON B GOTO 2090,2090,2120,2180,2090,2180,2300,2210
    0x5e09fc69bb50 ---------A T 02060  ON B GOTO 2150,2180,2180,2120,2180,2300,2120,2180
    0x5e09fc69c2d0 ---------A T 02070  ON B GOTO 2210,2180,2300,2120,2090,2240,2120,2240
    0x5e09fc69ca40 ---------A T 02080  ON B GOTO 2090,2090,2270,2210,2180,2180,2120,2180
    0x5e09fc69cbb0 ---------A T 02090  PRINT"YOU MISSED HIM (HISS!)"
    0x5e09fc69ce90 ---------A   02100  T=0
    0x5e09fc69cf20 ---------A   02110  GOTO 2330
    0x5e09fc69d080 ---------A T 02120  PRINT"YOU HIT HIS SHIELD BUT GLANCED OFF."
    0x5e09fc69d2a0 ---------A   02130  T=0
    0x5e09fc69d330 ---------A   02140  GOTO 2330
    0x5e09fc69d490 ---------A T 02150  PRINT"YOU KNOCKED OFF HIS HELM (CHEERS!)"
    0x5e09fc69d6b0 ---------A   02160  T=0
    0x5e09fc69d740 ---------A   02170  GOTO 2330
    0x5e09fc69d8a0 ---------A T 02180  PRINT"YOU BROKE YOUR LANCE (CRACK...!)"
    0x5e09fc69dac0 ---------A   02190  T=0
    0x5e09fc69db50 ---------A   02200  GOTO 2330
    0x5e09fc69dcc0 ---------A T 02210  PRINT"YOU UNSEATED HIM(LOUD CHEERS AND MUZZAMS!!)"
    0x5e09fc69dee0 ---------A   02220  T=5
    0x5e09fc69df80 ---------A   02230  GOTO 2330
    0x5e09fc69e100 ---------A T 02240  PRINT"YOU BROKE YOUR LANCE, BUT UNSEATED AND INJURED YOUR FOE."
    0x5e09fc69e320 ---------A   02250  T=5
    0x5e09fc69e3b0 ---------A   02260  GOTO 2330
    0x5e09fc69ed30 ---------A T 02270  PRINT"YOU INJURED AND UNSEATED YOUR OPPONENT."
    0x5e09fc69ef50 ---------A   02280  T=5
    0x5e09fc69eff0 ---------A   02290  GOTO 2330
    0x5e09fc69f160 ---------A T 02300  PRINT"YOU BROKE YOUR LANCE BUT UNSEATED YOUR OPPONENT."
    0x5e09fc69f380 ---------A   02310  T=5
    0x5e09fc69f3f0 ---------A   02320  GOTO 2330
    0x5e09fc69f660 ---------A T 02330  IF S = T THEN 2350
    0x5e09fc69f6e0 ---------A   02340  GOTO 2360
    0x5e09fc69f930 ---------A T 02350  IF S = 0 THEN 2480
    0x5e09fc69fb90 ---------A T 02360  IF S = T GOTO 2460
    0x5e09fc69fe10 ---------A   02370  IF S < T GOTO 2390
    0x5e09fc6a00c0 ---------A   02380  IF S > T THEN 2440
    0x5e09fc6a0230 ---------A T 02390  PRINT"YOU HAVE WON THIS JOUST."
    0x5e09fc6a02b0 ---------A   02400  PRINT
    0x5e09fc6a0330 ---------A   02410  GOTO 2420
    0x5e09fc6a0460 ---------A T 02420  NEXT A
    0x5e09fc6a0520 ---------A   02430  GOTO 2520
    0x5e09fc6a0690 ---------A T 02440  PRINT"TOO BAD, YOU LOST. HOPE YOUR INSURANCE WAS PAID UP."
    0x5e09fc6a0740 ---------A   02450  GOTO 2500
    0x5e09fc6a08c0 ---------A T 02460  PRINT"TOO BAD, YOU BOTH LOST. AT LEAST YOUR HONOUR IS INTACT."
    0x5e09fc6a0950 ---------A   02470  GOTO 2500
    0x5e09fc6a0ab0 ---------A T 02480  PRINT"YOU ARE READY TO TRY AGAIN."
    0x5e09fc6a0b50 ---------A   02490  GOTO 1390
    0x5e09fc6a0cd0 ---------A T 02500  PRINT"SORRY, BETTER LUCK NEXT JOUST."
    0x5e09fc6a0e70 ---------A   02501  PRINT"DO YOU WISH TO JOUST AGAIN ('Y' OR 'N')";
    0x5e09fc6a10a0 ---------A   02502  INPUT B$
    0x5e09fc6a1330 ---------A   02503  IF B$ = "Y" THEN 1260
    0x5e09fc6a15b0 ---------A   02504  IF B$ = "N" THEN 9990
    0x5e09fc6a1660 ---------A   02510  GOTO 9999
    0x5e09fc6a17d0 ---------A T 02520  PRINT"HOORAY! YOU ARE THE WINNER, HERE COMES THE BRIDE!"
    0x5e09fc6a1860 ---------A   02525  GOTO 9999
    0x5e09fc6a19c0 ---------A T 02530  PRINT"THE AIMING POINTS ARE:"
    0x5e09fc6a1b30 ---------A   02540  PRINT"1 - HELM"
    0x5e09fc6a1cb0 ---------A   02550  PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x5e09fc6a1e20 ---------A   02560  PRINT"3 - UPPER MIDDLE"
    0x5e09fc6a1f90 ---------A   02570  PRINT"4 - UPPER RIGHT"
    0x5e09fc6a2100 ---------A   02580  PRINT"5 - LOWER LEFT"
    0x5e09fc6a2270 ---------A   02590  PRINT"6 - LOWER MIDDLE"
    0x5e09fc6a23e0 ---------A   02600  PRINT"7 - LOWER RIGHT"
    0x5e09fc6a2540 ---------A   02610  PRINT"8 - BASE OF SHIELD"
    0x5e09fc6a25c0 ---------A   02620  PRINT
    0x5e09fc6a2640 ---------A   02630  GOTO 1390
    0x5e09fc6a26e0 ---------A T 09990  PRINT 
    0x5e09fc6a2860 ---------A   09991  PRINT"***************************************************"
    0x5e09fc6a2900 ---------A   09992  PRINT
    0x5e09fc6a2a80 ---------A   09993  PRINT"TOO BAD, THE PRINCESS WAS A VIRGIN!!!!"
    0x5e09fc6a2b30 ---------A   09994  PRINT
    0x5e09fc6a2cb0 ---------A   09995  PRINT"***************************************************"
    0x5e09fc6a2d10 ---------A T 09999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01260      02503T
     01310      01280T
     01330      01280T
     01350      01280T
     01370      01280T
     01390      01320T, 01340T, 01360T, 01410T, 01420T, 02490T, 02630T
     01450      01440T, 01440T, 01440T
     01470      01440T
     01490      01440T, 01440T
     01520      01440T
     01540      01440T
     01550      01460T, 01480T, 01510T, 01530T
     01590      01580T
     01600      01580T
     01610      01580T
     01620      01580T
     01630      01580T
     01640      01580T
     01650      01580T
     01660      01580T
     01670      01590T, 01590T, 01590T, 01590T, 01600T, 01600T, 01620T, 01630T, 
                01630T, 01650T
     01700      01610T, 01620T, 01620T, 01620T, 01640T, 01650T, 01650T, 01650T, 
                01650T, 01660T
     01730      01590T
     01760      01600T, 01600T, 01600T, 01610T, 01620T, 01630T, 01630T, 01630T, 
                01640T, 01640T, 01660T, 01660T, 01660T
     01790      01590T, 01600T, 01610T, 01620T
     01820      01610T, 01640T, 01660T, 01660T
     01850      01610T
     01880      01610T, 01630T, 01640T, 01640T, 01650T
     01900      01690T, 01720T, 01750T, 01780T, 01810T, 01840T, 01870T, 01920T, 
                01940T, 01970T, 01980T, 02000T, 02010T
     01920      01910T, 01910T, 01910T
     01940      01910T
     01960      01910T, 01910T
     01970      01910T
     02000      01910T
     02020      01930T, 01950T, 01960T, 01990T
     02030      02020T
     02040      02020T
     02050      02020T
     02060      02020T
     02070      02020T
     02080      02020T
     02090      02030T, 02040T, 02040T, 02040T, 02050T, 02050T, 02050T, 02070T, 
                02080T, 02080T
     02120      02030T, 02030T, 02040T, 02040T, 02050T, 02060T, 02060T, 02070T, 
                02070T, 02080T
     02150      02060T
     02180      02030T, 02030T, 02040T, 02050T, 02050T, 02060T, 02060T, 02060T, 
                02060T, 02070T, 02080T, 02080T, 02080T
     02210      02030T, 02040T, 02050T, 02070T, 02080T
     02240      02030T, 02070T, 02070T
     02270      02080T
     02300      02030T, 02040T, 02050T, 02060T, 02070T
     02330      02110T, 02140T, 02170T, 02200T, 02230T, 02260T, 02290T, 02320T
     02350      02330T
     02360      02340T
     02390      02370T
     02420      02410T
     02440      02380T
     02460      02360T
     02480      02350T
     02500      02450T, 02470T
     02520      02430T
     02530      01405T
     09990      02504T
     09999      02510T, 02525T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5e09fc686d50 (01000)   0x5e09fc686d50 (01000)   0x5e09fc6a2d10 (09999)   0x5e09fc6a2d10 (09999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/joust.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e09fc686d50 ---------A   01000  RANDOMIZE
    0x5e09fc6846d0 ---------A   01010  PRINT TAB(26);"JOUST"
    0x5e09fc684670 ---------A   01020  PRINT TAB(20);"CREATIVE COMPUTING"
    0x5e09fc686580 ---------A   01030  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5e09fc6861b0 ---------A   01040  PRINT
    0x5e09fc686a40 ---------A   01050  PRINT
    0x5e09fc686aa0 ---------A   01060  PRINT
    0x5e09fc684e40 ---------A   01070  PRINT"WHAT IS YOUR NAME, PLEASE";
    0x5e09fc684be0 ---------A   01080  INPUT A$
    0x5e09fc684ca0 ---------A   01085  PRINT
    0x5e09fc6856e0 ---------A   01090  PRINT"SIR ";A$;" YOU ARE A MEDIEVAL KNIGHT IN A JOUSTING TOURNAMENT."
    0x5e09fc685840 ---------A   01100  PRINT"THE PRIZE TO THE WINNER IS THE PRINCESS' HAND IN MARRIAGE."
    0x5e09fc68c900 ---------A   01110  PRINT"TO WIN, YOU MUST BEAT FOUR OTHER KNIGHTS."
    0x5e09fc68cac0 ---------A   01120  PRINT"TO JOUST, YOU PICK AN AIMING POINT FOR THE LANCE,"
    0x5e09fc68cbe0 ---------A   01130  PRINT"AND THEN ONE OF FROM 3 TO 6 DIFFERENT POSSIBLE DEFENCE POSITIONS."
    0x5e09fc68cd00 ---------A   01140  PRINT"THE AIMING POINTS ARE:"
    0x5e09fc68ce20 ---------A   01150  PRINT"1 - HELM"
    0x5e09fc68cfa0 ---------A   01160  PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x5e09fc68d110 ---------A   01170  PRINT"3 - UPPER MIDDLE"
    0x5e09fc68d280 ---------A   01180  PRINT"4 - UPPER RIGHT"
    0x5e09fc68d3f0 ---------A   01190  PRINT"5 - LOWER LEFT"
    0x5e09fc68d560 ---------A   01200  PRINT"6 - LOWER MIDDLE"
    0x5e09fc68d6d0 ---------A   01210  PRINT"7 - LOWER RIGHT"
    0x5e09fc68d830 ---------A   01220  PRINT"8 - BASE OF SHIELD"
    0x5e09fc68d8f0 ---------A   01230  PRINT
    0x5e09fc68da40 ---------A   01240  PRINT"IF YOU BREAK A LANCE OR LOSE A HELM, YOU WILL BE GIVEN ANOTHER."
    0x5e09fc68dba0 ---------A   01250  PRINT"GOOD LUCK, SIR!"
    0x5e09fc68dc20 ---------A T 01260  PRINT
    0x5e09fc68dfd0 ---------A   01270  FOR A = 1 TO 4
    0x5e09fc68e440 ---------A   01280  ON A GOTO 1310,1330,1350,1370
    0x5e09fc68e4d0 ---------A   01290  REM OFF YOU GO TO THE FOUR JOUSTS
    0x5e09fc68e5b0 ---------A   01300  REM ------------------------------------------------
    0x5e09fc68e790 ---------A T 01310  PRINT"THIS IS YOUR FIRST JOUST. YOU ARE UP AGAINST THE GOLD KNIGHT."
    0x5e09fc68ea60 ---------A   01320  GOTO 1390
    0x5e09fc68ebe0 ---------A T 01330  PRINT"THIS IS YOUR SECOND JOUST. YOUR OPPONENT IS THE SILVER KNIGHT."
    0x5e09fc68eca0 ---------A   01340  GOTO 1390
    0x5e09fc68ee20 ---------A T 01350  PRINT"YOU ARE DOING WELL! YOUR THIRD JOUST IS AGAINST THE RED KNIGHT."
    0x5e09fc68eed0 ---------A   01360  GOTO 1390
    0x5e09fc68f090 ---------A T 01370  PRINT"THIS IS YOUR FINAL TEST!! IF YOU WIN THIS ONE, THE PRINCESS"
    0x5e09fc68f250 ---------A   01380  PRINT"IS YOURS!!! THIS FIGHT IS AGAINST THE FIERCE BLACK KNIGHT!!!!"
    0x5e09fc68f3f0 ---------A T 01390  PRINT "YOUR AIMING POINT(1-8) OR 0 {ZERO} FOR HELP";
    0x5e09fc68f610 ---------A   01400  INPUT B
    0x5e09fc68f870 ---------A   01405  IF B = 0 THEN 2530
    0x5e09fc68fad0 ---------A   01410  IF B < 1 THEN 1390
    0x5e09fc68fd50 ---------A   01420  IF B > 8 THEN 1390
    0x5e09fc68fee0 ---------A   01430  PRINT"YOU MAY USE ONE OF THESE DEFENCES:"
    0x5e09fc690670 ---------A   01440  ON B  GOTO 1450,1470,1490,1520,1450,1490,1450,1540
    0x5e09fc6907f0 ---------A T 01450  PRINT" 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc6908b0 ---------A   01460  GOTO 1550
    0x5e09fc690a30 ---------A T 01470  PRINT" 3 -LEFT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc690af0 ---------A   01480  GOTO 1550
    0x5e09fc690c90 ---------A T 01490  PRINT"1 - LOWER HELM, 2 - RIGHT LEAN, 3 - LEFT LEAN, 4 - STEADY SEAT,"
    0x5e09fc690e00 ---------A   01500  PRINT" 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc690ec0 ---------A   01510  GOTO 1550
    0x5e09fc691040 ---------A T 01520  PRINT"2 - RIGHT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc691100 ---------A   01530  GOTO 1550
    0x5e09fc691290 ---------A T 01540  PRINT"1 - LOWER HELM, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc691410 ---------A T 01550  PRINT"WHAT IS YOUR CHOICE";
    0x5e09fc691630 ---------A   01560  INPUT C
    0x5e09fc691cf0 ---------A   01570  D=INT(RND(1)*8)+1
    0x5e09fc692460 ---------A   01580  ON D GOTO 1590,1600,1610,1620,1630,1640,1650,1660
    0x5e09fc692a60 ---------A T 01590  ON C GOTO 1670,1670,1670,1730,1790,1670
    0x5e09fc693060 ---------A T 01600  ON C GOTO 1790,1760,1670,1760,1760,1670
    0x5e09fc693660 ---------A T 01610  ON C GOTO 1820,1790,1700,1760,1880,1850
    0x5e09fc693c60 ---------A T 01620  ON C GOTO 1700,1670,1760,1700,1700,1790
    0x5e09fc694670 ---------A T 01630  ON C GOTO 1760,1880,1670,1760,1670,1760
    0x5e09fc694c70 ---------A T 01640  ON C GOTO 1880,1700,1760,1880,1820,1760
    0x5e09fc695270 ---------A T 01650  ON C GOTO 1700,1670,1880,1700,1700,1700
    0x5e09fc695860 ---------A T 01660  ON C GOTO 1760,1700,1820,1760,1820,1760
    0x5e09fc6959c0 ---------A T 01670  PRINT"HE MISSED YOU!"
    0x5e09fc695ca0 ---------A   01680  S=0
    0x5e09fc695d30 ---------A   01690  GOTO 1900
    0x5e09fc695e90 ---------A T 01700  PRINT"HE HIT YOUR SHIELD BUT IT GLANCED OFF"
    0x5e09fc6960b0 ---------A   01710  S=0
    0x5e09fc696130 ---------A   01720  GOTO 1900
    0x5e09fc696290 ---------A T 01730  PRINT"HE KNOCKED OFF YOUR HELM"
    0x5e09fc6964b0 ---------A   01740  S=0
    0x5e09fc696530 ---------A   01750  GOTO 1900
    0x5e09fc696680 ---------A T 01760  PRINT"HE BROKE HIS LANCE."
    0x5e09fc6968a0 ---------A   01770  S=0
    0x5e09fc696920 ---------A   01780  GOTO 1900
    0x5e09fc696a80 ---------A T 01790  PRINT"HE HAS UNSEATED YOU(THUD!)"
    0x5e09fc696ca0 ---------A   01800  S=5
    0x5e09fc696d40 ---------A   01810  GOTO 1900
    0x5e09fc696ec0 ---------A T 01820  PRINT"HE HAS BROKEN HIS LANCE, INJURED AND UNSEATED YOU (OUCH!)"
    0x5e09fc6970e0 ---------A   01830  S=5
    0x5e09fc697170 ---------A   01840  GOTO 1900
    0x5e09fc6972e0 ---------A T 01850  PRINT"HE HAS INJURED AND UNSEATED YOU (CRASH!)"
    0x5e09fc697500 ---------A   01860  S=5
    0x5e09fc6975a0 ---------A   01870  GOTO 1900
    0x5e09fc697710 ---------A T 01880  PRINT"HE HAS BROKEN HIS LANCE AND UNSEATED YOU (CLANG!)"
    0x5e09fc697930 ---------A   01890  S=5
    0x5e09fc697fe0 ---------A T 01900  E=INT(RND(1)*6)+1
    0x5e09fc698730 ---------A   01910  ON D GOTO 1920,1940,1960,1970,1920,1960,1920,2000
    0x5e09fc698990 ---------A T 01920  IF E<4 THEN 1900
    0x5e09fc698a10 ---------A   01930  GOTO 2020
    0x5e09fc698c60 ---------A T 01940  IF E<3 THEN 1900
    0x5e09fc698ce0 ---------A   01950  GOTO 2020
    0x5e09fc698d50 ---------A T 01960  GOTO 2020
    0x5e09fc698fa0 ---------A T 01970  IF E=1 THEN 1900
    0x5e09fc699200 ---------A   01980  IF E=3 THEN 1900
    0x5e09fc699280 ---------A   01990  GOTO 2020
    0x5e09fc6994d0 ---------A T 02000  IF E=2 THEN 1900
    0x5e09fc699750 ---------A   02010  IF E=3 THEN 1900
    0x5e09fc699d50 ---------A T 02020  ON E GOTO 2030,2040,2050,2060,2070,2080
    0x5e09fc69a4d0 ---------A T 02030  ON B GOTO 2090,2210,2240,2120,2180,2300,2120,2180
    0x5e09fc69ac50 ---------A T 02040  ON B GOTO 2090,2180,2210,2090,2300,2120,2090,2120
    0x5e09fc69b3d0 ---------A T 02050  ON B GOTO 2090,2090,2120,2180,2090,2180,2300,2210
    0x5e09fc69bb50 ---------A T 02060  ON B GOTO 2150,2180,2180,2120,2180,2300,2120,2180
    0x5e09fc69c2d0 ---------A T 02070  ON B GOTO 2210,2180,2300,2120,2090,2240,2120,2240
    0x5e09fc69ca40 ---------A T 02080  ON B GOTO 2090,2090,2270,2210,2180,2180,2120,2180
    0x5e09fc69cbb0 ---------A T 02090  PRINT"YOU MISSED HIM (HISS!)"
    0x5e09fc69ce90 ---------A   02100  T=0
    0x5e09fc69cf20 ---------A   02110  GOTO 2330
    0x5e09fc69d080 ---------A T 02120  PRINT"YOU HIT HIS SHIELD BUT GLANCED OFF."
    0x5e09fc69d2a0 ---------A   02130  T=0
    0x5e09fc69d330 ---------A   02140  GOTO 2330
    0x5e09fc69d490 ---------A T 02150  PRINT"YOU KNOCKED OFF HIS HELM (CHEERS!)"
    0x5e09fc69d6b0 ---------A   02160  T=0
    0x5e09fc69d740 ---------A   02170  GOTO 2330
    0x5e09fc69d8a0 ---------A T 02180  PRINT"YOU BROKE YOUR LANCE (CRACK...!)"
    0x5e09fc69dac0 ---------A   02190  T=0
    0x5e09fc69db50 ---------A   02200  GOTO 2330
    0x5e09fc69dcc0 ---------A T 02210  PRINT"YOU UNSEATED HIM(LOUD CHEERS AND MUZZAMS!!)"
    0x5e09fc69dee0 ---------A   02220  T=5
    0x5e09fc69df80 ---------A   02230  GOTO 2330
    0x5e09fc69e100 ---------A T 02240  PRINT"YOU BROKE YOUR LANCE, BUT UNSEATED AND INJURED YOUR FOE."
    0x5e09fc69e320 ---------A   02250  T=5
    0x5e09fc69e3b0 ---------A   02260  GOTO 2330
    0x5e09fc69ed30 ---------A T 02270  PRINT"YOU INJURED AND UNSEATED YOUR OPPONENT."
    0x5e09fc69ef50 ---------A   02280  T=5
    0x5e09fc69eff0 ---------A   02290  GOTO 2330
    0x5e09fc69f160 ---------A T 02300  PRINT"YOU BROKE YOUR LANCE BUT UNSEATED YOUR OPPONENT."
    0x5e09fc69f380 ---------A   02310  T=5
    0x5e09fc69f3f0 ---------A   02320  GOTO 2330
    0x5e09fc69f660 ---------A T 02330  IF S = T THEN 2350
    0x5e09fc69f6e0 ---------A   02340  GOTO 2360
    0x5e09fc69f930 ---------A T 02350  IF S = 0 THEN 2480
    0x5e09fc69fb90 ---------A T 02360  IF S = T GOTO 2460
    0x5e09fc69fe10 ---------A   02370  IF S < T GOTO 2390
    0x5e09fc6a00c0 ---------A   02380  IF S > T THEN 2440
    0x5e09fc6a0230 ---------A T 02390  PRINT"YOU HAVE WON THIS JOUST."
    0x5e09fc6a02b0 ---------A   02400  PRINT
    0x5e09fc6a0330 ---------A   02410  GOTO 2420
    0x5e09fc6a0460 ---------A T 02420  NEXT A
    0x5e09fc6a0520 ---------A   02430  GOTO 2520
    0x5e09fc6a0690 ---------A T 02440  PRINT"TOO BAD, YOU LOST. HOPE YOUR INSURANCE WAS PAID UP."
    0x5e09fc6a0740 ---------A   02450  GOTO 2500
    0x5e09fc6a08c0 ---------A T 02460  PRINT"TOO BAD, YOU BOTH LOST. AT LEAST YOUR HONOUR IS INTACT."
    0x5e09fc6a0950 ---------A   02470  GOTO 2500
    0x5e09fc6a0ab0 ---------A T 02480  PRINT"YOU ARE READY TO TRY AGAIN."
    0x5e09fc6a0b50 ---------A   02490  GOTO 1390
    0x5e09fc6a0cd0 ---------A T 02500  PRINT"SORRY, BETTER LUCK NEXT JOUST."
    0x5e09fc6a0e70 ---------A   02501  PRINT"DO YOU WISH TO JOUST AGAIN ('Y' OR 'N')";
    0x5e09fc6a10a0 ---------A   02502  INPUT B$
    0x5e09fc6a1330 ---------A   02503  IF B$ = "Y" THEN 1260
    0x5e09fc6a15b0 ---------A   02504  IF B$ = "N" THEN 9990
    0x5e09fc6a1660 ---------A   02510  GOTO 9999
    0x5e09fc6a17d0 ---------A T 02520  PRINT"HOORAY! YOU ARE THE WINNER, HERE COMES THE BRIDE!"
    0x5e09fc6a1860 ---------A   02525  GOTO 9999
    0x5e09fc6a19c0 ---------A T 02530  PRINT"THE AIMING POINTS ARE:"
    0x5e09fc6a1b30 ---------A   02540  PRINT"1 - HELM"
    0x5e09fc6a1cb0 ---------A   02550  PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x5e09fc6a1e20 ---------A   02560  PRINT"3 - UPPER MIDDLE"
    0x5e09fc6a1f90 ---------A   02570  PRINT"4 - UPPER RIGHT"
    0x5e09fc6a2100 ---------A   02580  PRINT"5 - LOWER LEFT"
    0x5e09fc6a2270 ---------A   02590  PRINT"6 - LOWER MIDDLE"
    0x5e09fc6a23e0 ---------A   02600  PRINT"7 - LOWER RIGHT"
    0x5e09fc6a2540 ---------A   02610  PRINT"8 - BASE OF SHIELD"
    0x5e09fc6a25c0 ---------A   02620  PRINT
    0x5e09fc6a2640 ---------A   02630  GOTO 1390
    0x5e09fc6a26e0 ---------A T 09990  PRINT 
    0x5e09fc6a2860 ---------A   09991  PRINT"***************************************************"
    0x5e09fc6a2900 ---------A   09992  PRINT
    0x5e09fc6a2a80 ---------A   09993  PRINT"TOO BAD, THE PRINCESS WAS A VIRGIN!!!!"
    0x5e09fc6a2b30 ---------A   09994  PRINT
    0x5e09fc6a2cb0 ---------A   09995  PRINT"***************************************************"
    0x5e09fc6a2d10 ---------A T 09999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/joust.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e09fc686d50 ---------A   01000  RANDOMIZE
    0x5e09fc6846d0 ---------A   01010  PRINT TAB(26);"JOUST"
    0x5e09fc684670 ---------A   01020  PRINT TAB(20);"CREATIVE COMPUTING"
    0x5e09fc686580 ---------A   01030  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5e09fc6861b0 ---------A   01040  PRINT
    0x5e09fc686a40 ---------A   01050  PRINT
    0x5e09fc686aa0 ---------A   01060  PRINT
    0x5e09fc684e40 ---------A   01070  PRINT"WHAT IS YOUR NAME, PLEASE";
    0x5e09fc684be0 ---------A   01080  INPUT A$
    0x5e09fc684ca0 ---------A   01090  PRINT
    0x5e09fc6856e0 ---------A   01100  PRINT"SIR ";A$;" YOU ARE A MEDIEVAL KNIGHT IN A JOUSTING TOURNAMENT."
    0x5e09fc685840 ---------A   01110  PRINT"THE PRIZE TO THE WINNER IS THE PRINCESS' HAND IN MARRIAGE."
    0x5e09fc68c900 ---------A   01120  PRINT"TO WIN, YOU MUST BEAT FOUR OTHER KNIGHTS."
    0x5e09fc68cac0 ---------A   01130  PRINT"TO JOUST, YOU PICK AN AIMING POINT FOR THE LANCE,"
    0x5e09fc68cbe0 ---------A   01140  PRINT"AND THEN ONE OF FROM 3 TO 6 DIFFERENT POSSIBLE DEFENCE POSITIONS."
    0x5e09fc68cd00 ---------A   01150  PRINT"THE AIMING POINTS ARE:"
    0x5e09fc68ce20 ---------A   01160  PRINT"1 - HELM"
    0x5e09fc68cfa0 ---------A   01170  PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x5e09fc68d110 ---------A   01180  PRINT"3 - UPPER MIDDLE"
    0x5e09fc68d280 ---------A   01190  PRINT"4 - UPPER RIGHT"
    0x5e09fc68d3f0 ---------A   01200  PRINT"5 - LOWER LEFT"
    0x5e09fc68d560 ---------A   01210  PRINT"6 - LOWER MIDDLE"
    0x5e09fc68d6d0 ---------A   01220  PRINT"7 - LOWER RIGHT"
    0x5e09fc68d830 ---------A   01230  PRINT"8 - BASE OF SHIELD"
    0x5e09fc68d8f0 ---------A   01240  PRINT
    0x5e09fc68da40 ---------A   01250  PRINT"IF YOU BREAK A LANCE OR LOSE A HELM, YOU WILL BE GIVEN ANOTHER."
    0x5e09fc68dba0 ---------A T 01260  PRINT"GOOD LUCK, SIR!"
    0x5e09fc68dc20 ---------A   01270  PRINT
    0x5e09fc68dfd0 ---------A   01280  FOR A = 1 TO 4
    0x5e09fc68e440 ---------A   01290  ON A GOTO 1320,1340,1360,1380
    0x5e09fc68e4d0 ---------A   01300  REM OFF YOU GO TO THE FOUR JOUSTS
    0x5e09fc68e5b0 ---------A T 01310  REM ------------------------------------------------
    0x5e09fc68e790 ---------A   01320  PRINT"THIS IS YOUR FIRST JOUST. YOU ARE UP AGAINST THE GOLD KNIGHT."
    0x5e09fc68ea60 ---------A T 01330  GOTO 1400
    0x5e09fc68ebe0 ---------A   01340  PRINT"THIS IS YOUR SECOND JOUST. YOUR OPPONENT IS THE SILVER KNIGHT."
    0x5e09fc68eca0 ---------A T 01350  GOTO 1400
    0x5e09fc68ee20 ---------A   01360  PRINT"YOU ARE DOING WELL! YOUR THIRD JOUST IS AGAINST THE RED KNIGHT."
    0x5e09fc68eed0 ---------A T 01370  GOTO 1400
    0x5e09fc68f090 ---------A   01380  PRINT"THIS IS YOUR FINAL TEST!! IF YOU WIN THIS ONE, THE PRINCESS"
    0x5e09fc68f250 ---------A T 01390  PRINT"IS YOURS!!! THIS FIGHT IS AGAINST THE FIERCE BLACK KNIGHT!!!!"
    0x5e09fc68f3f0 ---------A   01400  PRINT "YOUR AIMING POINT(1-8) OR 0 {ZERO} FOR HELP";
    0x5e09fc68f610 ---------A   01410  INPUT B
    0x5e09fc68f870 ---------A   01420  IF B = 0 THEN 2600
    0x5e09fc68fad0 ---------A   01430  IF B < 1 THEN 1400
    0x5e09fc68fd50 ---------A   01440  IF B > 8 THEN 1400
    0x5e09fc68fee0 ---------A T 01450  PRINT"YOU MAY USE ONE OF THESE DEFENCES:"
    0x5e09fc690670 ---------A   01460  ON B  GOTO 1510,1470,1510,1560,1470,1490,1470,1540
    0x5e09fc6907f0 ---------A T 01470  PRINT" 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc6908b0 ---------A   01480  GOTO 1570
    0x5e09fc690a30 ---------A T 01490  PRINT" 3 -LEFT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc690af0 ---------A   01500  GOTO 1570
    0x5e09fc690c90 ---------A   01510  PRINT"1 - LOWER HELM, 2 - RIGHT LEAN, 3 - LEFT LEAN, 4 - STEADY SEAT,"
    0x5e09fc690e00 ---------A T 01520  PRINT" 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc690ec0 ---------A   01530  GOTO 1570
    0x5e09fc691040 ---------A T 01540  PRINT"2 - RIGHT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc691100 ---------A T 01550  GOTO 1570
    0x5e09fc691290 ---------A   01560  PRINT"1 - LOWER HELM, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc691410 ---------A   01570  PRINT"WHAT IS YOUR CHOICE";
    0x5e09fc691630 ---------A   01580  INPUT C
    0x5e09fc691cf0 ---------A T 01590  D=INT(RND(1)*8)+1
    0x5e09fc692460 ---------A T 01600  ON D GOTO 1670,1680,1610,1620,1630,1640,1650,1660
    0x5e09fc692a60 ---------A T 01610  ON C GOTO 1690,1690,1690,1750,1810,1690
    0x5e09fc693060 ---------A T 01620  ON C GOTO 1810,1780,1690,1780,1780,1690
    0x5e09fc693660 ---------A T 01630  ON C GOTO 1840,1810,1720,1780,1900,1870
    0x5e09fc693c60 ---------A T 01640  ON C GOTO 1720,1690,1780,1720,1720,1810
    0x5e09fc694670 ---------A T 01650  ON C GOTO 1780,1900,1690,1780,1690,1780
    0x5e09fc694c70 ---------A T 01660  ON C GOTO 1900,1720,1780,1900,1840,1780
    0x5e09fc695270 ---------A T 01670  ON C GOTO 1720,1690,1900,1720,1720,1720
    0x5e09fc695860 ---------A   01680  ON C GOTO 1780,1720,1840,1780,1840,1780
    0x5e09fc6959c0 ---------A   01690  PRINT"HE MISSED YOU!"
    0x5e09fc695ca0 ---------A T 01700  S=0
    0x5e09fc695d30 ---------A   01710  GOTO 1920
    0x5e09fc695e90 ---------A   01720  PRINT"HE HIT YOUR SHIELD BUT IT GLANCED OFF"
    0x5e09fc6960b0 ---------A T 01730  S=0
    0x5e09fc696130 ---------A   01740  GOTO 1920
    0x5e09fc696290 ---------A   01750  PRINT"HE KNOCKED OFF YOUR HELM"
    0x5e09fc6964b0 ---------A T 01760  S=0
    0x5e09fc696530 ---------A   01770  GOTO 1920
    0x5e09fc696680 ---------A   01780  PRINT"HE BROKE HIS LANCE."
    0x5e09fc6968a0 ---------A T 01790  S=0
    0x5e09fc696920 ---------A   01800  GOTO 1920
    0x5e09fc696a80 ---------A   01810  PRINT"HE HAS UNSEATED YOU(THUD!)"
    0x5e09fc696ca0 ---------A T 01820  S=5
    0x5e09fc696d40 ---------A   01830  GOTO 1920
    0x5e09fc696ec0 ---------A   01840  PRINT"HE HAS BROKEN HIS LANCE, INJURED AND UNSEATED YOU (OUCH!)"
    0x5e09fc6970e0 ---------A T 01850  S=5
    0x5e09fc697170 ---------A   01860  GOTO 1920
    0x5e09fc6972e0 ---------A   01870  PRINT"HE HAS INJURED AND UNSEATED YOU (CRASH!)"
    0x5e09fc697500 ---------A T 01880  S=5
    0x5e09fc6975a0 ---------A   01890  GOTO 1920
    0x5e09fc697710 ---------A T 01900  PRINT"HE HAS BROKEN HIS LANCE AND UNSEATED YOU (CLANG!)"
    0x5e09fc697930 ---------A   01910  S=5
    0x5e09fc697fe0 ---------A T 01920  E=INT(RND(1)*6)+1
    0x5e09fc698730 ---------A   01930  ON D GOTO 1980,1940,1980,1990,1940,1960,1940,2020
    0x5e09fc698990 ---------A T 01940  IF E<4 THEN 1920
    0x5e09fc698a10 ---------A   01950  GOTO 2040
    0x5e09fc698c60 ---------A T 01960  IF E<3 THEN 1920
    0x5e09fc698ce0 ---------A T 01970  GOTO 2040
    0x5e09fc698d50 ---------A   01980  GOTO 2040
    0x5e09fc698fa0 ---------A   01990  IF E=1 THEN 1920
    0x5e09fc699200 ---------A T 02000  IF E=3 THEN 1920
    0x5e09fc699280 ---------A   02010  GOTO 2040
    0x5e09fc6994d0 ---------A T 02020  IF E=2 THEN 1920
    0x5e09fc699750 ---------A T 02030  IF E=3 THEN 1920
    0x5e09fc699d50 ---------A T 02040  ON E GOTO 2090,2100,2050,2060,2070,2080
    0x5e09fc69a4d0 ---------A T 02050  ON B GOTO 2110,2230,2260,2140,2200,2320,2140,2200
    0x5e09fc69ac50 ---------A T 02060  ON B GOTO 2110,2200,2230,2110,2320,2140,2110,2140
    0x5e09fc69b3d0 ---------A T 02070  ON B GOTO 2110,2110,2140,2200,2110,2200,2320,2230
    0x5e09fc69bb50 ---------A T 02080  ON B GOTO 2170,2200,2200,2140,2200,2320,2140,2200
    0x5e09fc69c2d0 ---------A T 02090  ON B GOTO 2230,2200,2320,2140,2110,2260,2140,2260
    0x5e09fc69ca40 ---------A   02100  ON B GOTO 2110,2110,2290,2230,2200,2200,2140,2200
    0x5e09fc69cbb0 ---------A   02110  PRINT"YOU MISSED HIM (HISS!)"
    0x5e09fc69ce90 ---------A T 02120  T=0
    0x5e09fc69cf20 ---------A   02130  GOTO 2350
    0x5e09fc69d080 ---------A   02140  PRINT"YOU HIT HIS SHIELD BUT GLANCED OFF."
    0x5e09fc69d2a0 ---------A T 02150  T=0
    0x5e09fc69d330 ---------A   02160  GOTO 2350
    0x5e09fc69d490 ---------A   02170  PRINT"YOU KNOCKED OFF HIS HELM (CHEERS!)"
    0x5e09fc69d6b0 ---------A T 02180  T=0
    0x5e09fc69d740 ---------A   02190  GOTO 2350
    0x5e09fc69d8a0 ---------A   02200  PRINT"YOU BROKE YOUR LANCE (CRACK...!)"
    0x5e09fc69dac0 ---------A T 02210  T=0
    0x5e09fc69db50 ---------A   02220  GOTO 2350
    0x5e09fc69dcc0 ---------A   02230  PRINT"YOU UNSEATED HIM(LOUD CHEERS AND MUZZAMS!!)"
    0x5e09fc69dee0 ---------A T 02240  T=5
    0x5e09fc69df80 ---------A   02250  GOTO 2350
    0x5e09fc69e100 ---------A   02260  PRINT"YOU BROKE YOUR LANCE, BUT UNSEATED AND INJURED YOUR FOE."
    0x5e09fc69e320 ---------A T 02270  T=5
    0x5e09fc69e3b0 ---------A   02280  GOTO 2350
    0x5e09fc69ed30 ---------A   02290  PRINT"YOU INJURED AND UNSEATED YOUR OPPONENT."
    0x5e09fc69ef50 ---------A T 02300  T=5
    0x5e09fc69eff0 ---------A   02310  GOTO 2350
    0x5e09fc69f160 ---------A   02320  PRINT"YOU BROKE YOUR LANCE BUT UNSEATED YOUR OPPONENT."
    0x5e09fc69f380 ---------A T 02330  T=5
    0x5e09fc69f3f0 ---------A   02340  GOTO 2350
    0x5e09fc69f660 ---------A T 02350  IF S = T THEN 2370
    0x5e09fc69f6e0 ---------A T 02360  GOTO 2380
    0x5e09fc69f930 ---------A   02370  IF S = 0 THEN 2500
    0x5e09fc69fb90 ---------A   02380  IF S = T GOTO 2480
    0x5e09fc69fe10 ---------A T 02390  IF S < T GOTO 2410
    0x5e09fc6a00c0 ---------A   02400  IF S > T THEN 2460
    0x5e09fc6a0230 ---------A   02410  PRINT"YOU HAVE WON THIS JOUST."
    0x5e09fc6a02b0 ---------A T 02420  PRINT
    0x5e09fc6a0330 ---------A   02430  GOTO 2440
    0x5e09fc6a0460 ---------A T 02440  NEXT A
    0x5e09fc6a0520 ---------A   02450  GOTO 2580
    0x5e09fc6a0690 ---------A T 02460  PRINT"TOO BAD, YOU LOST. HOPE YOUR INSURANCE WAS PAID UP."
    0x5e09fc6a0740 ---------A   02470  GOTO 2520
    0x5e09fc6a08c0 ---------A T 02480  PRINT"TOO BAD, YOU BOTH LOST. AT LEAST YOUR HONOUR IS INTACT."
    0x5e09fc6a0950 ---------A   02490  GOTO 2520
    0x5e09fc6a0ab0 ---------A T 02500  PRINT"YOU ARE READY TO TRY AGAIN."
    0x5e09fc6a0b50 ---------A   02510  GOTO 1400
    0x5e09fc6a0cd0 ---------A T 02520  PRINT"SORRY, BETTER LUCK NEXT JOUST."
    0x5e09fc6a0e70 ---------A T 02530  PRINT"DO YOU WISH TO JOUST AGAIN ('Y' OR 'N')";
    0x5e09fc6a10a0 ---------A   02540  INPUT B$
    0x5e09fc6a1330 ---------A   02550  IF B$ = "Y" THEN 1270
    0x5e09fc6a15b0 ---------A   02560  IF B$ = "N" THEN 2710
    0x5e09fc6a1660 ---------A   02570  GOTO 2770
    0x5e09fc6a17d0 ---------A   02580  PRINT"HOORAY! YOU ARE THE WINNER, HERE COMES THE BRIDE!"
    0x5e09fc6a1860 ---------A   02590  GOTO 2770
    0x5e09fc6a19c0 ---------A   02600  PRINT"THE AIMING POINTS ARE:"
    0x5e09fc6a1b30 ---------A   02610  PRINT"1 - HELM"
    0x5e09fc6a1cb0 ---------A   02620  PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x5e09fc6a1e20 ---------A   02630  PRINT"3 - UPPER MIDDLE"
    0x5e09fc6a1f90 ---------A   02640  PRINT"4 - UPPER RIGHT"
    0x5e09fc6a2100 ---------A   02650  PRINT"5 - LOWER LEFT"
    0x5e09fc6a2270 ---------A   02660  PRINT"6 - LOWER MIDDLE"
    0x5e09fc6a23e0 ---------A   02670  PRINT"7 - LOWER RIGHT"
    0x5e09fc6a2540 ---------A   02680  PRINT"8 - BASE OF SHIELD"
    0x5e09fc6a25c0 ---------A   02690  PRINT
    0x5e09fc6a2640 ---------A   02700  GOTO 1400
    0x5e09fc6a26e0 ---------A   02710  PRINT 
    0x5e09fc6a2860 ---------A   02720  PRINT"***************************************************"
    0x5e09fc6a2900 ---------A   02730  PRINT
    0x5e09fc6a2a80 ---------A   02740  PRINT"TOO BAD, THE PRINCESS WAS A VIRGIN!!!!"
    0x5e09fc6a2b30 ---------A   02750  PRINT
    0x5e09fc6a2cb0 ---------A   02760  PRINT"***************************************************"
    0x5e09fc6a2d10 ---------A   02770  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02780 - 10000    7230 

 */



/*
 *  Symbol Table Listing for 'basic/joust.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
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
    S                        Integer     
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/joust.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e09fc686d50 ---------A   01000  RANDOMIZE
    0x5e09fc6846d0 ---------A   01010  PRINT TAB(26);"JOUST"
    0x5e09fc684670 ---------A   01020  PRINT TAB(20);"CREATIVE COMPUTING"
    0x5e09fc686580 ---------A   01030  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5e09fc6861b0 ---------A   01040  PRINT
    0x5e09fc686a40 ---------A   01050  PRINT
    0x5e09fc686aa0 ---------A   01060  PRINT
    0x5e09fc684e40 ---------A   01070  PRINT"WHAT IS YOUR NAME, PLEASE";
    0x5e09fc684be0 ---------A   01080  INPUT A$
    0x5e09fc684ca0 ---------A   01090  PRINT
    0x5e09fc6856e0 ---------A   01100  PRINT"SIR ";A$;" YOU ARE A MEDIEVAL KNIGHT IN A JOUSTING TOURNAMENT."
    0x5e09fc685840 ---------A   01110  PRINT"THE PRIZE TO THE WINNER IS THE PRINCESS' HAND IN MARRIAGE."
    0x5e09fc68c900 ---------A   01120  PRINT"TO WIN, YOU MUST BEAT FOUR OTHER KNIGHTS."
    0x5e09fc68cac0 ---------A   01130  PRINT"TO JOUST, YOU PICK AN AIMING POINT FOR THE LANCE,"
    0x5e09fc68cbe0 ---------A   01140  PRINT"AND THEN ONE OF FROM 3 TO 6 DIFFERENT POSSIBLE DEFENCE POSITIONS."
    0x5e09fc68cd00 ---------A   01150  PRINT"THE AIMING POINTS ARE:"
    0x5e09fc68ce20 ---------A   01160  PRINT"1 - HELM"
    0x5e09fc68cfa0 ---------A   01170  PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x5e09fc68d110 ---------A   01180  PRINT"3 - UPPER MIDDLE"
    0x5e09fc68d280 ---------A   01190  PRINT"4 - UPPER RIGHT"
    0x5e09fc68d3f0 ---------A   01200  PRINT"5 - LOWER LEFT"
    0x5e09fc68d560 ---------A   01210  PRINT"6 - LOWER MIDDLE"
    0x5e09fc68d6d0 ---------A   01220  PRINT"7 - LOWER RIGHT"
    0x5e09fc68d830 ---------A   01230  PRINT"8 - BASE OF SHIELD"
    0x5e09fc68d8f0 ---------A   01240  PRINT
    0x5e09fc68da40 ---------A   01250  PRINT"IF YOU BREAK A LANCE OR LOSE A HELM, YOU WILL BE GIVEN ANOTHER."
    0x5e09fc68dba0 ---------A   01260  PRINT"GOOD LUCK, SIR!"
    0x5e09fc68dc20 ---------A T 01270  PRINT
    0x5e09fc68dfd0 ---------A   01280  FOR A = 1 TO 4
    0x5e09fc68e440 ---------A   01290  ON A GOTO 1320,1340,1360,1380
    0x5e09fc68e4d0 ---------A   01300  REM OFF YOU GO TO THE FOUR JOUSTS
    0x5e09fc68e5b0 ---------A   01310  REM ------------------------------------------------
    0x5e09fc68e790 ---------A T 01320  PRINT"THIS IS YOUR FIRST JOUST. YOU ARE UP AGAINST THE GOLD KNIGHT."
    0x5e09fc68ea60 ---------A   01330  GOTO 1400
    0x5e09fc68ebe0 ---------A T 01340  PRINT"THIS IS YOUR SECOND JOUST. YOUR OPPONENT IS THE SILVER KNIGHT."
    0x5e09fc68eca0 ---------A   01350  GOTO 1400
    0x5e09fc68ee20 ---------A T 01360  PRINT"YOU ARE DOING WELL! YOUR THIRD JOUST IS AGAINST THE RED KNIGHT."
    0x5e09fc68eed0 ---------A   01370  GOTO 1400
    0x5e09fc68f090 ---------A T 01380  PRINT"THIS IS YOUR FINAL TEST!! IF YOU WIN THIS ONE, THE PRINCESS"
    0x5e09fc68f250 ---------A   01390  PRINT"IS YOURS!!! THIS FIGHT IS AGAINST THE FIERCE BLACK KNIGHT!!!!"
    0x5e09fc68f3f0 ---------A T 01400  PRINT "YOUR AIMING POINT(1-8) OR 0 {ZERO} FOR HELP";
    0x5e09fc68f610 ---------A   01410  INPUT B
    0x5e09fc68f870 ---------A   01420  IF B = 0 THEN 2600
    0x5e09fc68fad0 ---------A   01430  IF B < 1 THEN 1400
    0x5e09fc68fd50 ---------A   01440  IF B > 8 THEN 1400
    0x5e09fc68fee0 ---------A   01450  PRINT"YOU MAY USE ONE OF THESE DEFENCES:"
    0x5e09fc690670 ---------A   01460  ON B  GOTO 1510,1470,1510,1560,1470,1490,1470,1540
    0x5e09fc6907f0 ---------A T 01470  PRINT" 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc6908b0 ---------A   01480  GOTO 1570
    0x5e09fc690a30 ---------A T 01490  PRINT" 3 -LEFT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc690af0 ---------A   01500  GOTO 1570
    0x5e09fc690c90 ---------A T 01510  PRINT"1 - LOWER HELM, 2 - RIGHT LEAN, 3 - LEFT LEAN, 4 - STEADY SEAT,"
    0x5e09fc690e00 ---------A   01520  PRINT" 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc690ec0 ---------A   01530  GOTO 1570
    0x5e09fc691040 ---------A T 01540  PRINT"2 - RIGHT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc691100 ---------A   01550  GOTO 1570
    0x5e09fc691290 ---------A T 01560  PRINT"1 - LOWER HELM, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
    0x5e09fc691410 ---------A T 01570  PRINT"WHAT IS YOUR CHOICE";
    0x5e09fc691630 ---------A   01580  INPUT C
    0x5e09fc691cf0 ---------A   01590  D=INT(RND(1)*8)+1
    0x5e09fc692460 ---------A   01600  ON D GOTO 1670,1680,1610,1620,1630,1640,1650,1660
    0x5e09fc692a60 ---------A T 01610  ON C GOTO 1690,1690,1690,1750,1810,1690
    0x5e09fc693060 ---------A T 01620  ON C GOTO 1810,1780,1690,1780,1780,1690
    0x5e09fc693660 ---------A T 01630  ON C GOTO 1840,1810,1720,1780,1900,1870
    0x5e09fc693c60 ---------A T 01640  ON C GOTO 1720,1690,1780,1720,1720,1810
    0x5e09fc694670 ---------A T 01650  ON C GOTO 1780,1900,1690,1780,1690,1780
    0x5e09fc694c70 ---------A T 01660  ON C GOTO 1900,1720,1780,1900,1840,1780
    0x5e09fc695270 ---------A T 01670  ON C GOTO 1720,1690,1900,1720,1720,1720
    0x5e09fc695860 ---------A T 01680  ON C GOTO 1780,1720,1840,1780,1840,1780
    0x5e09fc6959c0 ---------A T 01690  PRINT"HE MISSED YOU!"
    0x5e09fc695ca0 ---------A   01700  S=0
    0x5e09fc695d30 ---------A   01710  GOTO 1920
    0x5e09fc695e90 ---------A T 01720  PRINT"HE HIT YOUR SHIELD BUT IT GLANCED OFF"
    0x5e09fc6960b0 ---------A   01730  S=0
    0x5e09fc696130 ---------A   01740  GOTO 1920
    0x5e09fc696290 ---------A T 01750  PRINT"HE KNOCKED OFF YOUR HELM"
    0x5e09fc6964b0 ---------A   01760  S=0
    0x5e09fc696530 ---------A   01770  GOTO 1920
    0x5e09fc696680 ---------A T 01780  PRINT"HE BROKE HIS LANCE."
    0x5e09fc6968a0 ---------A   01790  S=0
    0x5e09fc696920 ---------A   01800  GOTO 1920
    0x5e09fc696a80 ---------A T 01810  PRINT"HE HAS UNSEATED YOU(THUD!)"
    0x5e09fc696ca0 ---------A   01820  S=5
    0x5e09fc696d40 ---------A   01830  GOTO 1920
    0x5e09fc696ec0 ---------A T 01840  PRINT"HE HAS BROKEN HIS LANCE, INJURED AND UNSEATED YOU (OUCH!)"
    0x5e09fc6970e0 ---------A   01850  S=5
    0x5e09fc697170 ---------A   01860  GOTO 1920
    0x5e09fc6972e0 ---------A T 01870  PRINT"HE HAS INJURED AND UNSEATED YOU (CRASH!)"
    0x5e09fc697500 ---------A   01880  S=5
    0x5e09fc6975a0 ---------A   01890  GOTO 1920
    0x5e09fc697710 ---------A T 01900  PRINT"HE HAS BROKEN HIS LANCE AND UNSEATED YOU (CLANG!)"
    0x5e09fc697930 ---------A   01910  S=5
    0x5e09fc697fe0 ---------A T 01920  E=INT(RND(1)*6)+1
    0x5e09fc698730 ---------A   01930  ON D GOTO 1980,1940,1980,1990,1940,1960,1940,2020
    0x5e09fc698990 ---------A T 01940  IF E<4 THEN 1920
    0x5e09fc698a10 ---------A   01950  GOTO 2040
    0x5e09fc698c60 ---------A T 01960  IF E<3 THEN 1920
    0x5e09fc698ce0 ---------A   01970  GOTO 2040
    0x5e09fc698d50 ---------A T 01980  GOTO 2040
    0x5e09fc698fa0 ---------A T 01990  IF E=1 THEN 1920
    0x5e09fc699200 ---------A   02000  IF E=3 THEN 1920
    0x5e09fc699280 ---------A   02010  GOTO 2040
    0x5e09fc6994d0 ---------A T 02020  IF E=2 THEN 1920
    0x5e09fc699750 ---------A   02030  IF E=3 THEN 1920
    0x5e09fc699d50 ---------A T 02040  ON E GOTO 2090,2100,2050,2060,2070,2080
    0x5e09fc69a4d0 ---------A T 02050  ON B GOTO 2110,2230,2260,2140,2200,2320,2140,2200
    0x5e09fc69ac50 ---------A T 02060  ON B GOTO 2110,2200,2230,2110,2320,2140,2110,2140
    0x5e09fc69b3d0 ---------A T 02070  ON B GOTO 2110,2110,2140,2200,2110,2200,2320,2230
    0x5e09fc69bb50 ---------A T 02080  ON B GOTO 2170,2200,2200,2140,2200,2320,2140,2200
    0x5e09fc69c2d0 ---------A T 02090  ON B GOTO 2230,2200,2320,2140,2110,2260,2140,2260
    0x5e09fc69ca40 ---------A T 02100  ON B GOTO 2110,2110,2290,2230,2200,2200,2140,2200
    0x5e09fc69cbb0 ---------A T 02110  PRINT"YOU MISSED HIM (HISS!)"
    0x5e09fc69ce90 ---------A   02120  T=0
    0x5e09fc69cf20 ---------A   02130  GOTO 2350
    0x5e09fc69d080 ---------A T 02140  PRINT"YOU HIT HIS SHIELD BUT GLANCED OFF."
    0x5e09fc69d2a0 ---------A   02150  T=0
    0x5e09fc69d330 ---------A   02160  GOTO 2350
    0x5e09fc69d490 ---------A T 02170  PRINT"YOU KNOCKED OFF HIS HELM (CHEERS!)"
    0x5e09fc69d6b0 ---------A   02180  T=0
    0x5e09fc69d740 ---------A   02190  GOTO 2350
    0x5e09fc69d8a0 ---------A T 02200  PRINT"YOU BROKE YOUR LANCE (CRACK...!)"
    0x5e09fc69dac0 ---------A   02210  T=0
    0x5e09fc69db50 ---------A   02220  GOTO 2350
    0x5e09fc69dcc0 ---------A T 02230  PRINT"YOU UNSEATED HIM(LOUD CHEERS AND MUZZAMS!!)"
    0x5e09fc69dee0 ---------A   02240  T=5
    0x5e09fc69df80 ---------A   02250  GOTO 2350
    0x5e09fc69e100 ---------A T 02260  PRINT"YOU BROKE YOUR LANCE, BUT UNSEATED AND INJURED YOUR FOE."
    0x5e09fc69e320 ---------A   02270  T=5
    0x5e09fc69e3b0 ---------A   02280  GOTO 2350
    0x5e09fc69ed30 ---------A T 02290  PRINT"YOU INJURED AND UNSEATED YOUR OPPONENT."
    0x5e09fc69ef50 ---------A   02300  T=5
    0x5e09fc69eff0 ---------A   02310  GOTO 2350
    0x5e09fc69f160 ---------A T 02320  PRINT"YOU BROKE YOUR LANCE BUT UNSEATED YOUR OPPONENT."
    0x5e09fc69f380 ---------A   02330  T=5
    0x5e09fc69f3f0 ---------A   02340  GOTO 2350
    0x5e09fc69f660 ---------A T 02350  IF S = T THEN 2370
    0x5e09fc69f6e0 ---------A   02360  GOTO 2380
    0x5e09fc69f930 ---------A T 02370  IF S = 0 THEN 2500
    0x5e09fc69fb90 ---------A T 02380  IF S = T GOTO 2480
    0x5e09fc69fe10 ---------A   02390  IF S < T GOTO 2410
    0x5e09fc6a00c0 ---------A   02400  IF S > T THEN 2460
    0x5e09fc6a0230 ---------A T 02410  PRINT"YOU HAVE WON THIS JOUST."
    0x5e09fc6a02b0 ---------A   02420  PRINT
    0x5e09fc6a0330 ---------A   02430  GOTO 2440
    0x5e09fc6a0460 ---------A T 02440  NEXT A
    0x5e09fc6a0520 ---------A   02450  GOTO 2580
    0x5e09fc6a0690 ---------A T 02460  PRINT"TOO BAD, YOU LOST. HOPE YOUR INSURANCE WAS PAID UP."
    0x5e09fc6a0740 ---------A   02470  GOTO 2520
    0x5e09fc6a08c0 ---------A T 02480  PRINT"TOO BAD, YOU BOTH LOST. AT LEAST YOUR HONOUR IS INTACT."
    0x5e09fc6a0950 ---------A   02490  GOTO 2520
    0x5e09fc6a0ab0 ---------A T 02500  PRINT"YOU ARE READY TO TRY AGAIN."
    0x5e09fc6a0b50 ---------A   02510  GOTO 1400
    0x5e09fc6a0cd0 ---------A T 02520  PRINT"SORRY, BETTER LUCK NEXT JOUST."
    0x5e09fc6a0e70 ---------A   02530  PRINT"DO YOU WISH TO JOUST AGAIN ('Y' OR 'N')";
    0x5e09fc6a10a0 ---------A   02540  INPUT B$
    0x5e09fc6a1330 ---------A   02550  IF B$ = "Y" THEN 1270
    0x5e09fc6a15b0 ---------A   02560  IF B$ = "N" THEN 2710
    0x5e09fc6a1660 ---------A   02570  GOTO 2770
    0x5e09fc6a17d0 ---------A T 02580  PRINT"HOORAY! YOU ARE THE WINNER, HERE COMES THE BRIDE!"
    0x5e09fc6a1860 ---------A   02590  GOTO 2770
    0x5e09fc6a19c0 ---------A T 02600  PRINT"THE AIMING POINTS ARE:"
    0x5e09fc6a1b30 ---------A   02610  PRINT"1 - HELM"
    0x5e09fc6a1cb0 ---------A   02620  PRINT"2 - UPPER LEFT (OF SHIELD)"
    0x5e09fc6a1e20 ---------A   02630  PRINT"3 - UPPER MIDDLE"
    0x5e09fc6a1f90 ---------A   02640  PRINT"4 - UPPER RIGHT"
    0x5e09fc6a2100 ---------A   02650  PRINT"5 - LOWER LEFT"
    0x5e09fc6a2270 ---------A   02660  PRINT"6 - LOWER MIDDLE"
    0x5e09fc6a23e0 ---------A   02670  PRINT"7 - LOWER RIGHT"
    0x5e09fc6a2540 ---------A   02680  PRINT"8 - BASE OF SHIELD"
    0x5e09fc6a25c0 ---------A   02690  PRINT
    0x5e09fc6a2640 ---------A   02700  GOTO 1400
    0x5e09fc6a26e0 ---------A T 02710  PRINT 
    0x5e09fc6a2860 ---------A   02720  PRINT"***************************************************"
    0x5e09fc6a2900 ---------A   02730  PRINT
    0x5e09fc6a2a80 ---------A   02740  PRINT"TOO BAD, THE PRINCESS WAS A VIRGIN!!!!"
    0x5e09fc6a2b30 ---------A   02750  PRINT
    0x5e09fc6a2cb0 ---------A   02760  PRINT"***************************************************"
    0x5e09fc6a2d10 ---------A T 02770  END
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
char*  A_str;                                     // Basic: A$ 
int    B_int;                                     // Basic: B 
char*  B_str;                                     // Basic: B$ 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
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
    // 01000 RANDOMIZE
    RANDOMIZE();
    // 01010 PRINT TAB(26);"JOUST"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,26);strcat(buf,"JOUST");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT TAB(20);"CREATIVE COMPUTING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,20);strcat(buf,"CREATIVE COMPUTING");strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,18);strcat(buf,"MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT"WHAT IS YOUR NAME, PLEASE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR NAME, PLEASE");fputs(buf,fh); };
    // 01080 INPUT A$
    // Start of Basic INPUT statement 01080
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
    }; // End of Basic INPUT statement 01080
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT"SIR ";A$;" YOU ARE A MEDIEVAL KNIGHT IN A JOUSTING TOURNAMENT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SIR "); strcat(buf,A_str);strcat(buf," YOU ARE A MEDIEVAL KNIGHT IN A JOUSTING TOURNAMENT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT"THE PRIZE TO THE WINNER IS THE PRINCESS' HAND IN MARRIAGE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE PRIZE TO THE WINNER IS THE PRINCESS' HAND IN MARRIAGE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT"TO WIN, YOU MUST BEAT FOUR OTHER KNIGHTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO WIN, YOU MUST BEAT FOUR OTHER KNIGHTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT"TO JOUST, YOU PICK AN AIMING POINT FOR THE LANCE,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO JOUST, YOU PICK AN AIMING POINT FOR THE LANCE,");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT"AND THEN ONE OF FROM 3 TO 6 DIFFERENT POSSIBLE DEFENCE POSITIONS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND THEN ONE OF FROM 3 TO 6 DIFFERENT POSSIBLE DEFENCE POSITIONS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT"THE AIMING POINTS ARE:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE AIMING POINTS ARE:");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT"1 - HELM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1 - HELM");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT"2 - UPPER LEFT (OF SHIELD)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2 - UPPER LEFT (OF SHIELD)");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT"3 - UPPER MIDDLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"3 - UPPER MIDDLE");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT"4 - UPPER RIGHT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"4 - UPPER RIGHT");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT"5 - LOWER LEFT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"5 - LOWER LEFT");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT"6 - LOWER MIDDLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"6 - LOWER MIDDLE");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT"7 - LOWER RIGHT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"7 - LOWER RIGHT");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT"8 - BASE OF SHIELD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"8 - BASE OF SHIELD");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT"IF YOU BREAK A LANCE OR LOSE A HELM, YOU WILL BE GIVEN ANOTHER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF YOU BREAK A LANCE OR LOSE A HELM, YOU WILL BE GIVEN ANOTHER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT"GOOD LUCK, SIR!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK, SIR!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01270:
    // 01270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01280 FOR A = 1 TO 4
    for(A_int=1;A_int<=4;A_int++){
        // 01290 ON A GOTO 1320,1340,1360,1380
        switch((int)(A_int)){
            case 1: goto Lbl_01320;
            case 2: goto Lbl_01340;
            case 3: goto Lbl_01360;
            case 4: goto Lbl_01380;
            default: break; 
        };
        // 01300 REM OFF YOU GO TO THE FOUR JOUSTS
        // 01310 REM ------------------------------------------------

  Lbl_01320:
        // 01320 PRINT"THIS IS YOUR FIRST JOUST. YOU ARE UP AGAINST THE GOLD KNIGHT."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS YOUR FIRST JOUST. YOU ARE UP AGAINST THE GOLD KNIGHT.");strcat(buf,"\n");fputs(buf,fh); };
        // 01330 GOTO 1400
        goto Lbl_01400;

  Lbl_01340:
        // 01340 PRINT"THIS IS YOUR SECOND JOUST. YOUR OPPONENT IS THE SILVER KNIGHT."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS YOUR SECOND JOUST. YOUR OPPONENT IS THE SILVER KNIGHT.");strcat(buf,"\n");fputs(buf,fh); };
        // 01350 GOTO 1400
        goto Lbl_01400;

  Lbl_01360:
        // 01360 PRINT"YOU ARE DOING WELL! YOUR THIRD JOUST IS AGAINST THE RED KNIGHT."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE DOING WELL! YOUR THIRD JOUST IS AGAINST THE RED KNIGHT.");strcat(buf,"\n");fputs(buf,fh); };
        // 01370 GOTO 1400
        goto Lbl_01400;

  Lbl_01380:
        // 01380 PRINT"THIS IS YOUR FINAL TEST!! IF YOU WIN THIS ONE, THE PRINCESS"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS YOUR FINAL TEST!! IF YOU WIN THIS ONE, THE PRINCESS");strcat(buf,"\n");fputs(buf,fh); };
        // 01390 PRINT"IS YOURS!!! THIS FIGHT IS AGAINST THE FIERCE BLACK KNIGHT!!!!"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IS YOURS!!! THIS FIGHT IS AGAINST THE FIERCE BLACK KNIGHT!!!!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01400:
        // 01400 PRINT "YOUR AIMING POINT(1-8) OR 0 {ZERO} FOR HELP";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR AIMING POINT(1-8) OR 0 {ZERO} FOR HELP");fputs(buf,fh); };
        // 01410 INPUT B
        // Start of Basic INPUT statement 01410
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&B_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01410
        // 01420 IF B = 0 THEN 2600
        if(B_int==0)goto Lbl_02600;
        // 01430 IF B < 1 THEN 1400
        if(B_int<1)goto Lbl_01400;
        // 01440 IF B > 8 THEN 1400
        if(B_int>8)goto Lbl_01400;
        // 01450 PRINT"YOU MAY USE ONE OF THESE DEFENCES:"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU MAY USE ONE OF THESE DEFENCES:");strcat(buf,"\n");fputs(buf,fh); };
        // 01460 ON B  GOTO 1510,1470,1510,1560,1470,1490,1470,1540
        switch((int)(B_int)){
            case 1: goto Lbl_01470;
            case 2: goto Lbl_01490;
            case 3: goto Lbl_01510;
            case 4: goto Lbl_01540;
            case 5: goto Lbl_01470;
            case 6: goto Lbl_01510;
            case 7: goto Lbl_01470;
            case 8: goto Lbl_01560;
            default: break; 
        };

  Lbl_01470:
        // 01470 PRINT" 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW.");strcat(buf,"\n");fputs(buf,fh); };
        // 01480 GOTO 1570
        goto Lbl_01570;

  Lbl_01490:
        // 01490 PRINT" 3 -LEFT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 3 -LEFT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW.");strcat(buf,"\n");fputs(buf,fh); };
        // 01500 GOTO 1570
        goto Lbl_01570;

  Lbl_01510:
        // 01510 PRINT"1 - LOWER HELM, 2 - RIGHT LEAN, 3 - LEFT LEAN, 4 - STEADY SEAT,"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1 - LOWER HELM, 2 - RIGHT LEAN, 3 - LEFT LEAN, 4 - STEADY SEAT,");strcat(buf,"\n");fputs(buf,fh); };
        // 01520 PRINT" 5 - SHIELD HIGH, 6 - SHIELD LOW."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 5 - SHIELD HIGH, 6 - SHIELD LOW.");strcat(buf,"\n");fputs(buf,fh); };
        // 01530 GOTO 1570
        goto Lbl_01570;

  Lbl_01540:
        // 01540 PRINT"2 - RIGHT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2 - RIGHT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW.");strcat(buf,"\n");fputs(buf,fh); };
        // 01550 GOTO 1570
        goto Lbl_01570;

  Lbl_01560:
        // 01560 PRINT"1 - LOWER HELM, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1 - LOWER HELM, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01570:
        // 01570 PRINT"WHAT IS YOUR CHOICE";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR CHOICE");fputs(buf,fh); };
        // 01580 INPUT C
        // Start of Basic INPUT statement 01580
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&C_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01580
        // 01590 D=INT(RND(1)*8)+1
        D_int = INT(RND(1)*8)+1;
        // 01600 ON D GOTO 1670,1680,1610,1620,1630,1640,1650,1660
        switch((int)(D_int)){
            case 1: goto Lbl_01610;
            case 2: goto Lbl_01620;
            case 3: goto Lbl_01630;
            case 4: goto Lbl_01640;
            case 5: goto Lbl_01650;
            case 6: goto Lbl_01660;
            case 7: goto Lbl_01670;
            case 8: goto Lbl_01680;
            default: break; 
        };

  Lbl_01610:
        // 01610 ON C GOTO 1690,1690,1690,1750,1810,1690
        switch((int)(C_int)){
            case 1: goto Lbl_01690;
            case 2: goto Lbl_01690;
            case 3: goto Lbl_01690;
            case 4: goto Lbl_01750;
            case 5: goto Lbl_01810;
            case 6: goto Lbl_01690;
            default: break; 
        };

  Lbl_01620:
        // 01620 ON C GOTO 1810,1780,1690,1780,1780,1690
        switch((int)(C_int)){
            case 1: goto Lbl_01810;
            case 2: goto Lbl_01780;
            case 3: goto Lbl_01690;
            case 4: goto Lbl_01780;
            case 5: goto Lbl_01780;
            case 6: goto Lbl_01690;
            default: break; 
        };

  Lbl_01630:
        // 01630 ON C GOTO 1840,1810,1720,1780,1900,1870
        switch((int)(C_int)){
            case 1: goto Lbl_01840;
            case 2: goto Lbl_01810;
            case 3: goto Lbl_01720;
            case 4: goto Lbl_01780;
            case 5: goto Lbl_01900;
            case 6: goto Lbl_01870;
            default: break; 
        };

  Lbl_01640:
        // 01640 ON C GOTO 1720,1690,1780,1720,1720,1810
        switch((int)(C_int)){
            case 1: goto Lbl_01720;
            case 2: goto Lbl_01690;
            case 3: goto Lbl_01780;
            case 4: goto Lbl_01720;
            case 5: goto Lbl_01720;
            case 6: goto Lbl_01810;
            default: break; 
        };

  Lbl_01650:
        // 01650 ON C GOTO 1780,1900,1690,1780,1690,1780
        switch((int)(C_int)){
            case 1: goto Lbl_01780;
            case 2: goto Lbl_01900;
            case 3: goto Lbl_01690;
            case 4: goto Lbl_01780;
            case 5: goto Lbl_01690;
            case 6: goto Lbl_01780;
            default: break; 
        };

  Lbl_01660:
        // 01660 ON C GOTO 1900,1720,1780,1900,1840,1780
        switch((int)(C_int)){
            case 1: goto Lbl_01900;
            case 2: goto Lbl_01720;
            case 3: goto Lbl_01780;
            case 4: goto Lbl_01900;
            case 5: goto Lbl_01840;
            case 6: goto Lbl_01780;
            default: break; 
        };

  Lbl_01670:
        // 01670 ON C GOTO 1720,1690,1900,1720,1720,1720
        switch((int)(C_int)){
            case 1: goto Lbl_01720;
            case 2: goto Lbl_01690;
            case 3: goto Lbl_01900;
            case 4: goto Lbl_01720;
            case 5: goto Lbl_01720;
            case 6: goto Lbl_01720;
            default: break; 
        };

  Lbl_01680:
        // 01680 ON C GOTO 1780,1720,1840,1780,1840,1780
        switch((int)(C_int)){
            case 1: goto Lbl_01780;
            case 2: goto Lbl_01720;
            case 3: goto Lbl_01840;
            case 4: goto Lbl_01780;
            case 5: goto Lbl_01840;
            case 6: goto Lbl_01780;
            default: break; 
        };

  Lbl_01690:
        // 01690 PRINT"HE MISSED YOU!"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HE MISSED YOU!");strcat(buf,"\n");fputs(buf,fh); };
        // 01700 S=0
        S_int = 0;
        // 01710 GOTO 1920
        goto Lbl_01920;

  Lbl_01720:
        // 01720 PRINT"HE HIT YOUR SHIELD BUT IT GLANCED OFF"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HE HIT YOUR SHIELD BUT IT GLANCED OFF");strcat(buf,"\n");fputs(buf,fh); };
        // 01730 S=0
        S_int = 0;
        // 01740 GOTO 1920
        goto Lbl_01920;

  Lbl_01750:
        // 01750 PRINT"HE KNOCKED OFF YOUR HELM"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HE KNOCKED OFF YOUR HELM");strcat(buf,"\n");fputs(buf,fh); };
        // 01760 S=0
        S_int = 0;
        // 01770 GOTO 1920
        goto Lbl_01920;

  Lbl_01780:
        // 01780 PRINT"HE BROKE HIS LANCE."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HE BROKE HIS LANCE.");strcat(buf,"\n");fputs(buf,fh); };
        // 01790 S=0
        S_int = 0;
        // 01800 GOTO 1920
        goto Lbl_01920;

  Lbl_01810:
        // 01810 PRINT"HE HAS UNSEATED YOU(THUD!)"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HE HAS UNSEATED YOU(THUD!)");strcat(buf,"\n");fputs(buf,fh); };
        // 01820 S=5
        S_int = 5;
        // 01830 GOTO 1920
        goto Lbl_01920;

  Lbl_01840:
        // 01840 PRINT"HE HAS BROKEN HIS LANCE, INJURED AND UNSEATED YOU (OUCH!)"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HE HAS BROKEN HIS LANCE, INJURED AND UNSEATED YOU (OUCH!)");strcat(buf,"\n");fputs(buf,fh); };
        // 01850 S=5
        S_int = 5;
        // 01860 GOTO 1920
        goto Lbl_01920;

  Lbl_01870:
        // 01870 PRINT"HE HAS INJURED AND UNSEATED YOU (CRASH!)"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HE HAS INJURED AND UNSEATED YOU (CRASH!)");strcat(buf,"\n");fputs(buf,fh); };
        // 01880 S=5
        S_int = 5;
        // 01890 GOTO 1920
        goto Lbl_01920;

  Lbl_01900:
        // 01900 PRINT"HE HAS BROKEN HIS LANCE AND UNSEATED YOU (CLANG!)"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HE HAS BROKEN HIS LANCE AND UNSEATED YOU (CLANG!)");strcat(buf,"\n");fputs(buf,fh); };
        // 01910 S=5
        S_int = 5;

  Lbl_01920:
        // 01920 E=INT(RND(1)*6)+1
        E_int = INT(RND(1)*6)+1;
        // 01930 ON D GOTO 1980,1940,1980,1990,1940,1960,1940,2020
        switch((int)(D_int)){
            case 1: goto Lbl_01940;
            case 2: goto Lbl_01960;
            case 3: goto Lbl_01980;
            case 4: goto Lbl_01990;
            case 5: goto Lbl_01940;
            case 6: goto Lbl_01980;
            case 7: goto Lbl_01940;
            case 8: goto Lbl_02020;
            default: break; 
        };

  Lbl_01940:
        // 01940 IF E<4 THEN 1920
        if(E_int<4)goto Lbl_01920;
        // 01950 GOTO 2040
        goto Lbl_02040;

  Lbl_01960:
        // 01960 IF E<3 THEN 1920
        if(E_int<3)goto Lbl_01920;
        // 01970 GOTO 2040
        goto Lbl_02040;

  Lbl_01980:
        // 01980 GOTO 2040
        goto Lbl_02040;

  Lbl_01990:
        // 01990 IF E=1 THEN 1920
        if(E_int==1)goto Lbl_01920;
        // 02000 IF E=3 THEN 1920
        if(E_int==3)goto Lbl_01920;
        // 02010 GOTO 2040
        goto Lbl_02040;

  Lbl_02020:
        // 02020 IF E=2 THEN 1920
        if(E_int==2)goto Lbl_01920;
        // 02030 IF E=3 THEN 1920
        if(E_int==3)goto Lbl_01920;

  Lbl_02040:
        // 02040 ON E GOTO 2090,2100,2050,2060,2070,2080
        switch((int)(E_int)){
            case 1: goto Lbl_02050;
            case 2: goto Lbl_02060;
            case 3: goto Lbl_02070;
            case 4: goto Lbl_02080;
            case 5: goto Lbl_02090;
            case 6: goto Lbl_02100;
            default: break; 
        };

  Lbl_02050:
        // 02050 ON B GOTO 2110,2230,2260,2140,2200,2320,2140,2200
        switch((int)(B_int)){
            case 1: goto Lbl_02110;
            case 2: goto Lbl_02230;
            case 3: goto Lbl_02260;
            case 4: goto Lbl_02140;
            case 5: goto Lbl_02200;
            case 6: goto Lbl_02320;
            case 7: goto Lbl_02140;
            case 8: goto Lbl_02200;
            default: break; 
        };

  Lbl_02060:
        // 02060 ON B GOTO 2110,2200,2230,2110,2320,2140,2110,2140
        switch((int)(B_int)){
            case 1: goto Lbl_02110;
            case 2: goto Lbl_02200;
            case 3: goto Lbl_02230;
            case 4: goto Lbl_02110;
            case 5: goto Lbl_02320;
            case 6: goto Lbl_02140;
            case 7: goto Lbl_02110;
            case 8: goto Lbl_02140;
            default: break; 
        };

  Lbl_02070:
        // 02070 ON B GOTO 2110,2110,2140,2200,2110,2200,2320,2230
        switch((int)(B_int)){
            case 1: goto Lbl_02110;
            case 2: goto Lbl_02110;
            case 3: goto Lbl_02140;
            case 4: goto Lbl_02200;
            case 5: goto Lbl_02110;
            case 6: goto Lbl_02200;
            case 7: goto Lbl_02320;
            case 8: goto Lbl_02230;
            default: break; 
        };

  Lbl_02080:
        // 02080 ON B GOTO 2170,2200,2200,2140,2200,2320,2140,2200
        switch((int)(B_int)){
            case 1: goto Lbl_02170;
            case 2: goto Lbl_02200;
            case 3: goto Lbl_02200;
            case 4: goto Lbl_02140;
            case 5: goto Lbl_02200;
            case 6: goto Lbl_02320;
            case 7: goto Lbl_02140;
            case 8: goto Lbl_02200;
            default: break; 
        };

  Lbl_02090:
        // 02090 ON B GOTO 2230,2200,2320,2140,2110,2260,2140,2260
        switch((int)(B_int)){
            case 1: goto Lbl_02230;
            case 2: goto Lbl_02200;
            case 3: goto Lbl_02320;
            case 4: goto Lbl_02140;
            case 5: goto Lbl_02110;
            case 6: goto Lbl_02260;
            case 7: goto Lbl_02140;
            case 8: goto Lbl_02260;
            default: break; 
        };

  Lbl_02100:
        // 02100 ON B GOTO 2110,2110,2290,2230,2200,2200,2140,2200
        switch((int)(B_int)){
            case 1: goto Lbl_02110;
            case 2: goto Lbl_02110;
            case 3: goto Lbl_02290;
            case 4: goto Lbl_02230;
            case 5: goto Lbl_02200;
            case 6: goto Lbl_02200;
            case 7: goto Lbl_02140;
            case 8: goto Lbl_02200;
            default: break; 
        };

  Lbl_02110:
        // 02110 PRINT"YOU MISSED HIM (HISS!)"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU MISSED HIM (HISS!)");strcat(buf,"\n");fputs(buf,fh); };
        // 02120 T=0
        T_int = 0;
        // 02130 GOTO 2350
        goto Lbl_02350;

  Lbl_02140:
        // 02140 PRINT"YOU HIT HIS SHIELD BUT GLANCED OFF."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HIT HIS SHIELD BUT GLANCED OFF.");strcat(buf,"\n");fputs(buf,fh); };
        // 02150 T=0
        T_int = 0;
        // 02160 GOTO 2350
        goto Lbl_02350;

  Lbl_02170:
        // 02170 PRINT"YOU KNOCKED OFF HIS HELM (CHEERS!)"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU KNOCKED OFF HIS HELM (CHEERS!)");strcat(buf,"\n");fputs(buf,fh); };
        // 02180 T=0
        T_int = 0;
        // 02190 GOTO 2350
        goto Lbl_02350;

  Lbl_02200:
        // 02200 PRINT"YOU BROKE YOUR LANCE (CRACK...!)"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU BROKE YOUR LANCE (CRACK...!)");strcat(buf,"\n");fputs(buf,fh); };
        // 02210 T=0
        T_int = 0;
        // 02220 GOTO 2350
        goto Lbl_02350;

  Lbl_02230:
        // 02230 PRINT"YOU UNSEATED HIM(LOUD CHEERS AND MUZZAMS!!)"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU UNSEATED HIM(LOUD CHEERS AND MUZZAMS!!)");strcat(buf,"\n");fputs(buf,fh); };
        // 02240 T=5
        T_int = 5;
        // 02250 GOTO 2350
        goto Lbl_02350;

  Lbl_02260:
        // 02260 PRINT"YOU BROKE YOUR LANCE, BUT UNSEATED AND INJURED YOUR FOE."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU BROKE YOUR LANCE, BUT UNSEATED AND INJURED YOUR FOE.");strcat(buf,"\n");fputs(buf,fh); };
        // 02270 T=5
        T_int = 5;
        // 02280 GOTO 2350
        goto Lbl_02350;

  Lbl_02290:
        // 02290 PRINT"YOU INJURED AND UNSEATED YOUR OPPONENT."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU INJURED AND UNSEATED YOUR OPPONENT.");strcat(buf,"\n");fputs(buf,fh); };
        // 02300 T=5
        T_int = 5;
        // 02310 GOTO 2350
        goto Lbl_02350;

  Lbl_02320:
        // 02320 PRINT"YOU BROKE YOUR LANCE BUT UNSEATED YOUR OPPONENT."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU BROKE YOUR LANCE BUT UNSEATED YOUR OPPONENT.");strcat(buf,"\n");fputs(buf,fh); };
        // 02330 T=5
        T_int = 5;
        // 02340 GOTO 2350
        goto Lbl_02350;

  Lbl_02350:
        // 02350 IF S = T THEN 2370
        if(S_int==T_int)goto Lbl_02370;
        // 02360 GOTO 2380
        goto Lbl_02380;

  Lbl_02370:
        // 02370 IF S = 0 THEN 2500
        if(S_int==0)goto Lbl_02500;

  Lbl_02380:
        // 02380 IF S = T GOTO 2480
        if(S_int==T_int)goto Lbl_02480;
        // 02390 IF S < T GOTO 2410
        if(S_int<T_int)goto Lbl_02410;
        // 02400 IF S > T THEN 2460
        if(S_int>T_int)goto Lbl_02460;

  Lbl_02410:
        // 02410 PRINT"YOU HAVE WON THIS JOUST."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE WON THIS JOUST.");strcat(buf,"\n");fputs(buf,fh); };
        // 02420 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 02430 GOTO 2440
        goto Lbl_02440;

  Lbl_02440:
        // 02440 NEXT A
        int dummy_2440=0; // Ignore this line.
    }; // End-For(A_int)
    // 02450 GOTO 2580
    goto Lbl_02580;

  Lbl_02460:
    // 02460 PRINT"TOO BAD, YOU LOST. HOPE YOUR INSURANCE WAS PAID UP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO BAD, YOU LOST. HOPE YOUR INSURANCE WAS PAID UP.");strcat(buf,"\n");fputs(buf,fh); };
    // 02470 GOTO 2520
    goto Lbl_02520;

  Lbl_02480:
    // 02480 PRINT"TOO BAD, YOU BOTH LOST. AT LEAST YOUR HONOUR IS INTACT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO BAD, YOU BOTH LOST. AT LEAST YOUR HONOUR IS INTACT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02490 GOTO 2520
    goto Lbl_02520;

  Lbl_02500:
    // 02500 PRINT"YOU ARE READY TO TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE READY TO TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 02510 GOTO 1400
    goto Lbl_01400;

  Lbl_02520:
    // 02520 PRINT"SORRY, BETTER LUCK NEXT JOUST."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, BETTER LUCK NEXT JOUST.");strcat(buf,"\n");fputs(buf,fh); };
    // 02530 PRINT"DO YOU WISH TO JOUST AGAIN ('Y' OR 'N')";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WISH TO JOUST AGAIN ('Y' OR 'N')");fputs(buf,fh); };
    // 02540 INPUT B$
    // Start of Basic INPUT statement 02540
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&B_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02540
    // 02550 IF B$ = "Y" THEN 1270
    if(strcmp(B_str,"Y")==0)goto Lbl_01270;
    // 02560 IF B$ = "N" THEN 2710
    if(strcmp(B_str,"N")==0)goto Lbl_02710;
    // 02570 GOTO 2770
    goto Lbl_02770;

  Lbl_02580:
    // 02580 PRINT"HOORAY! YOU ARE THE WINNER, HERE COMES THE BRIDE!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOORAY! YOU ARE THE WINNER, HERE COMES THE BRIDE!");strcat(buf,"\n");fputs(buf,fh); };
    // 02590 GOTO 2770
    goto Lbl_02770;

  Lbl_02600:
    // 02600 PRINT"THE AIMING POINTS ARE:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE AIMING POINTS ARE:");strcat(buf,"\n");fputs(buf,fh); };
    // 02610 PRINT"1 - HELM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1 - HELM");strcat(buf,"\n");fputs(buf,fh); };
    // 02620 PRINT"2 - UPPER LEFT (OF SHIELD)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2 - UPPER LEFT (OF SHIELD)");strcat(buf,"\n");fputs(buf,fh); };
    // 02630 PRINT"3 - UPPER MIDDLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"3 - UPPER MIDDLE");strcat(buf,"\n");fputs(buf,fh); };
    // 02640 PRINT"4 - UPPER RIGHT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"4 - UPPER RIGHT");strcat(buf,"\n");fputs(buf,fh); };
    // 02650 PRINT"5 - LOWER LEFT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"5 - LOWER LEFT");strcat(buf,"\n");fputs(buf,fh); };
    // 02660 PRINT"6 - LOWER MIDDLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"6 - LOWER MIDDLE");strcat(buf,"\n");fputs(buf,fh); };
    // 02670 PRINT"7 - LOWER RIGHT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"7 - LOWER RIGHT");strcat(buf,"\n");fputs(buf,fh); };
    // 02680 PRINT"8 - BASE OF SHIELD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"8 - BASE OF SHIELD");strcat(buf,"\n");fputs(buf,fh); };
    // 02690 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02700 GOTO 1400
    goto Lbl_01400;

  Lbl_02710:
    // 02710 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02720 PRINT"***************************************************"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"***************************************************");strcat(buf,"\n");fputs(buf,fh); };
    // 02730 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02740 PRINT"TOO BAD, THE PRINCESS WAS A VIRGIN!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO BAD, THE PRINCESS WAS A VIRGIN!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02750 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02760 PRINT"***************************************************"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"***************************************************");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02770:
    // 02770 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
