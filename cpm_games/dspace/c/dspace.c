/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/dspace.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56741f2526d0 ---------A   00100  PRINT CHR$(26);TAB(24);"DEEPSPACE"
    0x56741f252670 ---------A   00110  PRINT TAB(20);"CREATIVE COMPUTING"
    0x56741f254b00 ---------A   00120  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x56741f2530a0 ---------A   00130  PRINT:PRINT
    0x56741f253480 ---------A   00150  PRINT "THIS IS DEEPSPACE, A TACTICAL SIMULATION OF SHIP TO SHIP"
    0x56741f253500 ---------A   00160  PRINT "COMBAT IN DEEP SPACE."
    0x56741f252c20 ---------A   00165  PRINT
    0x56741f253720 ---------A   00170  PRINT "DO YOU WISH INSTRUCTIONS";:INPUT I$
    0x56741f25aae0 ---------A   00180  IF LEFT$(I$,1)="N" THEN 610
    0x56741f25acc0 ---------A   00190  PRINT CHR$(26)
    0x56741f25ade0 ---------A   00200  PRINT "YOU ARE ONE OF A GROUP OF CAPTAINS ASSIGNED TO PATROL A"
    0x56741f25af40 ---------A   00210  PRINT "SECTION OF YOUR STAR EMPIRE'S BORDER AGAINST HOSTILE"
    0x56741f25b100 ---------A   00220  PRINT "ALIENS. ALL YOUR ENCOUNTERS HERE WILL BE AGAINST HOSTILE"
    0x56741f25b2c0 ---------A   00230  PRINT "VESSELS. YOU WILL FIRST BE REQUIRED TO SELECT A VESSEL"
    0x56741f25b480 ---------A   00240  PRINT "FROM ONE OF THREE TYPES, EACH WITH ITS OWN CHARACTERISTICS:"
    0x56741f25b8f0 ---------A   00260  PRINT:PRINT "    TYPE","SPEED","CARGO SPACE","PROTECTION"
    0x56741f25bd70 ---------A   00265  PRINT "   ------","-----","-----------","----------"
    0x56741f25c1f0 ---------A   00270  PRINT "1- SCOUT"," 10X","     16","    1"
    0x56741f25c670 ---------A   00280  PRINT "2- CRUISER","  4X","     24","    2"
    0x56741f25cb00 ---------A   00290  PRINT "3- BATTLESHIP","  2X","     30","    5"
    0x56741f25cd10 ---------A   00310  PRINT:PRINT "SPEED IS GIVEN RELATIVE TO THE OTHER SHIPS."
    0x56741f25ce80 ---------A   00320  PRINT "CARGO SPACE IS IN UNITS OF SPACE ABOARD SHIP WHICH CAN BE"
    0x56741f25d010 ---------A   00330  PRINT "FILLED WITH WEAPONS."
    0x56741f25d180 ---------A   00340  PRINT "PROTECTION IS THE RELATIVE STRENGTH OF THE SHIP'S ARMOR"
    0x56741f25d2e0 ---------A   00350  PRINT "AND FORCE FIELDS."
    0x56741f25d3a0 ---------A   00360  GOSUB 10000
    0x56741f25d5a0 ---------A   00370  PRINT:PRINT "ONCE A SHIP HAS BEEN SELECTED, YOU WILL BE INSTRUCTED TO ARM"
    0x56741f25d720 ---------A   00380  PRINT "IT WITH WEAPONRY FROM THE FOLLOWING LIST:"
    0x56741f25d7d0 ---------A   00390  PRINT
    0x56741f25d990 ---------A   00400  PRINT "     TYPE                    CARGO SPACE    REL. STRENGTH"
    0x56741f25db50 ---------A   00405  PRINT "    ------                   -----------    -------------"
    0x56741f25dd00 ---------A   00410  PRINT "1- PHASER BANKS                   12                4"
    0x56741f25deb0 ---------A   00420  PRINT "2- ANTI-MATTER MISSILE             4               20"
    0x56741f25e270 ---------A   00430  PRINT "3- HYPERSPACE LANCE                4               16"
    0x56741f25e420 ---------A   00440  PRINT "4- PHOTON TORPEDO                  2               10"
    0x56741f25e5e0 ---------A   00450  PRINT "5- HYPERON NEUTRALIZATION FIELD   20                6"
    0x56741f25e7f0 ---------A   00470  PRINT:PRINT "WEAPONS #1 & #5 CAN BE FIRED 100 TIMES EACH; ALL OTHERS CAN"
    0x56741f25e930 ---------A   00480  PRINT "BE FIRED ONCE FOR EACH ON BOARD."
    0x56741f25e9e0 ---------A   00485  PRINT
    0x56741f25eb80 ---------A   00490  PRINT "A TYPICAL LOAD FOR A CRUISER MIGHT CONSIST OF:"
    0x56741f25ed20 ---------A   00500  PRINT "          1-#1 PHASER BANK          = 12"
    0x56741f25eec0 ---------A   00510  PRINT "          2-#3 HYPERSPACE LANCES    =  8"
    0x56741f25f060 ---------A   00520  PRINT "          2-#4 PHOTON TORPEDOES     =  4"
    0x56741f25f210 ---------A   00530  PRINT "                                  ---------"
    0x56741f25f390 ---------A   00540  PRINT "                              24 UNITS OF CARGO"
    0x56741f25f450 ---------A   00545  GOSUB 10000
    0x56741f25f600 ---------A   00550  PRINT " A WORD OF CAUTION: FIRING HIGH YIELD WEAPONS AT CLOSE (<100)"
    0x56741f25f7c0 ---------A   00560  PRINT "RANGE CAN BE DANGEROUS TO YOUR SHIP AND MINIMAL DAMAGE CAN"
    0x56741f25f970 ---------A   00570  PRINT "OCCUR AS FAR OUT AS 200 IN SOME CIRCUMSTANCES."
    0x56741f25fb50 ---------A   00590  PRINT:PRINT "RANGE IS GIVEN IN THOUSANDS OF KILOMETERS."
    0x56741f25fbf0 ---------A   00600  GOTO 640
    0x56741f25ff80 ---------A T 00610  PRINT "DO YOU WISH A MANEUVER CHART";:INPUT M$
    0x56741f2603a0 ---------A   00620  IF LEFT$(M$,1)="N" THEN 770
    0x56741f260450 ---------A T 00640  PRINT
    0x56741f260700 ---------A   00650  PRINT "     MANEUVER CHART":PRINT "     --------------"
    0x56741f260880 ---------A   00670  PRINT " 1      FIRE PHASERS"
    0x56741f260a10 ---------A   00680  PRINT " 2      FIRE ANTI-MATTER MISSILE"
    0x56741f260b90 ---------A   00690  PRINT " 3      FIRE HYPERSPACE LANCE"
    0x56741f260d20 ---------A   00700  PRINT " 4      FIRE PHOTON TORPEDO"
    0x56741f260eb0 ---------A   00710  PRINT " 5      ACTIVE HYPERON NEUTRALIZATION FIELD"
    0x56741f261020 ---------A   00720  PRINT " 6      SELF-DESTRUCT"
    0x56741f2611a0 ---------A   00730  PRINT " 7      CHANGE VELOCITY"
    0x56741f261310 ---------A   00740  PRINT " 8      DISENGAGE"
    0x56741f2614a0 ---------A   00750  PRINT " 9      PROCEED"
    0x56741f261680 ---------A T 00770  PRINT:PRINT "YOU HAVE A CHOICE OF THREE SYSTEMS TO PATROL."
    0x56741f261bf0 ---------A   00780  PRINT "1 - ORION"
    0x56741f261d60 ---------A   00790  PRINT "2 - DENEB"
    0x56741f261ee0 ---------A   00800  PRINT "3 - ARCTURUS"
    0x56741f262260 ---------A T 00810  PRINT "SELECT A SYSTEM (1-3)";:INPUT S9
    0x56741f2624c0 ---------A   00820  IF S9=1 THEN 2380
    0x56741f262720 ---------A   00830  IF S9=2 THEN 2430
    0x56741f2627a0 ---------A   00840  GOTO 2480
    0x56741f262a70 ---------A T 00850  D0=0
    0x56741f262d40 ---------A   00860  D1=0
    0x56741f263010 ---------A   00870  N1=0
    0x56741f2632e0 ---------A   00880  N2=0
    0x56741f2635b0 ---------A   00890  N3=0
    0x56741f263880 ---------A   00900  N4=0
    0x56741f263b80 ---------A   00910  D=0
    0x56741f263f10 ---------A T 00920  PRINT "WHICH SPACECRAFT WOULD YOU LIKE (1-3)";:INPUT S
    0x56741f2642b0 ---------A   00930  ON S GOTO 1790,1830,1870
    0x56741f264330 ---------A   00960  GOTO 920
    0x56741f264710 ---------A T 00970  C=C0
    0x56741f264ab0 ---------A T 00980  PRINT "YOU HAVE";C;"UNITS OF CARGO SPACE TO FILL WITH WEAPONRY."
    0x56741f265000 ---------A   00990  PRINT "CHOOSE A WEAPON AND THE AMOUNT YOU WISH";:INPUT W,N
    0x56741f265520 ---------A   01000  ON W GOTO 1910,2010,2100,2190,2280
    0x56741f2655b0 ---------A   01050  GOTO 980
    0x56741f265a00 ---------A T 01060  IF N*C1>C THEN 2530
    0x56741f265e90 ---------A   01070  C=C-N*C1
    0x56741f2662e0 ---------A   01080  ON W GOTO 1990,2080,2170,2260
    0x56741f266360 ---------A   01120  GOTO 2360
    0x56741f2665b0 ---------A T 01130  IF C>1 THEN 980
    0x56741f266630 ---------A   01140  REM
    0x56741f266be0 ---------A   01150  S1=S0*RND(0)
    0x56741f2672e0 ---------A   01160  R=(3*RND(0)+5)*100
    0x56741f2675a0 ---------A T 01180  PRINT:PRINT "RANGE TO TARGET:";R
    0x56741f267810 ---------A   01190  PRINT "RELATIVE VELOCITY:";S1
    0x56741f267bb0 ---------A T 01200  PRINT "ACTION";:INPUT M
    0x56741f268310 ---------A   01210  ON M GOTO 1940,2030,2120,2210,2310,1660,1390,2760
    0x56741f268570 ---------A T 01290  IF R<500 THEN 1500
    0x56741f2687d0 ---------A T 01300  IF S1>0 THEN 1330
    0x56741f268d70 ---------A   01310  R=R+(S1*8.3)^1.25
    0x56741f268de0 ---------A   01320  GOTO 1340
    0x56741f269380 ---------A T 01330  R=R-(S1*8.3)^1.25
    0x56741f2695d0 ---------A T 01340  IF R>1500 THEN 2590
    0x56741f269830 ---------A   01350  IF R>0 THEN 1370
    0x56741f269a70 ---------A   01360  R=-R
    0x56741f269ae0 ---------A T 01370  PRINT
    0x56741f269b80 ---------A   01380  GOTO 1180
    0x56741f269f00 ---------A T 01390  PRINT "CHANGE TO BE EFFECTED";:INPUT S2
    0x56741f26a2e0 ---------A   01400  IF (S1+S2)>S0 THEN 2550
    0x56741f26a640 ---------A   01410  S1=S1+S2
    0x56741f26a6b0 ---------A   01420  GOTO 1180
    0x56741f26aea0 ---------A T 01430  F0=P1*(Z/R)^1.5
    0x56741f26af10 ---------A   01440  REM
    0x56741f26b7b0 ---------A   01450  D0=(2*F0+3*F0*RND(0))/5
    0x56741f26bb20 ---------A   01460  D=D+D0
    0x56741f26bd80 ---------A   01470  PRINT "SCANNERS REPORT ENEMY DAMAGE NOW:";D
    0x56741f26bfe0 ---------A   01480  IF D>99 THEN 2720
    0x56741f26c060 ---------A   01490  GOTO 1510
    0x56741f26c270 ---------A T 01500  D0=0
    0x56741f26c2e0 ---------A T 01510  REM
    0x56741f26ca70 ---------A   01520  K=E1+E2*RND(0)
    0x56741f26cae0 ---------A   01530  REM
    0x56741f26d740 ---------A   01540  E=E3+E4*RND(0)+5/P0*RND(0)
    0x56741f26d7b0 ---------A   01550  REM
    0x56741f26de50 ---------A   01560  F3=E*(K/R)^1.85
    0x56741f26e780 ---------A   01570  D2=(3*F3+3*F3*RND(0))/5.5
    0x56741f26eae0 ---------A   01580  D1=D1+D2
    0x56741f26f900 ---------A   01590  IF (Z*D0)/(R*500)>2.2 THEN 1620
    0x56741f270080 ---------A   01600  D3=D0*2/(R^2*P0)
    0x56741f270400 ---------A   01610  D1=D1+D3
    0x56741f270670 ---------A T 01620  PRINT "DAMAGE CONTROL REPORTS YOUR VESSEL DAMAGE AT:";D1
    0x56741f2708d0 ---------A   01630  IF D1>99 THEN 2740
    0x56741f270b30 ---------A   01640  IF D>99 THEN 2760
    0x56741f270bd0 ---------A   01650  GOTO 1300
    0x56741f270d60 ---------A T 01660  PRINT "SELF DESTRUCT FAILSAFE ACTIVATED!!"
    0x56741f2710f0 ---------A   01670  PRINT "INPUT 1 TO RELEASE FAILSAFE";:INPUT U
    0x56741f271350 ---------A   01680  IF U=1 THEN 1700
    0x56741f2713f0 ---------A   01690  GOTO 1290
    0x56741f271550 ---------A T 01700  PRINT "SELF DESTRUCT ACCOMPLISHED."
    0x56741f2717d0 ---------A   01710  IF R>60 THEN 1740
    0x56741f271940 ---------A T 01720  PRINT "ENEMY VESSEL ALSO DESTROYED."
    0x56741f2719c0 ---------A   01730  GOTO 2760
    0x56741f271db0 ---------A T 01740  D4=3200/R
    0x56741f272100 ---------A   01750  D=D+D4
    0x56741f272370 ---------A   01760  IF D>99 THEN 1720
    0x56741f2726e0 ---------A   01770  PRINT "ENEMY VESSEL SURVIVES WITH";D;"DAMAGE."
    0x56741f272760 ---------A   01780  GOTO 2760
    0x56741f272970 ---------A T 01790  S0=10
    0x56741f272b80 ---------A   01800  C0=16
    0x56741f272d90 ---------A   01810  P0=1
    0x56741f272e00 ---------A   01820  GOTO 970
    0x56741f273010 ---------A T 01830  S0=4
    0x56741f273220 ---------A   01840  C0=24
    0x56741f273430 ---------A   01850  P0=2
    0x56741f2734a0 ---------A   01860  GOTO 970
    0x56741f2736b0 ---------A T 01870  S0=2
    0x56741f2738c0 ---------A   01880  C0=30
    0x56741f273ad0 ---------A   01890  P0=5
    0x56741f273b40 ---------A   01900  GOTO 970
    0x56741f273d50 ---------A T 01910  C1=12
    0x56741f273dc0 ---------A   01930  GOTO 1060
    0x56741f273fd0 ---------A T 01940  P1=4
    0x56741f274220 ---------A   01950  IF N1=0 THEN 2160
    0x56741f274560 ---------A   01960  N1=N1-1
    0x56741f274770 ---------A   01970  Z=200
    0x56741f2747e0 ---------A   01980  GOTO 1430
    0x56741f274b30 ---------A T 01990  N1=N1+N
    0x56741f274ba0 ---------A   02000  GOTO 1130
    0x56741f274db0 ---------A T 02010  C1=4
    0x56741f274e20 ---------A   02020  GOTO 1060
    0x56741f275030 ---------A T 02030  P1=20
    0x56741f275280 ---------A   02040  IF N2=0 THEN 2640
    0x56741f2755c0 ---------A   02050  N2=N2-1
    0x56741f2757d0 ---------A   02060  Z=500
    0x56741f275840 ---------A   02070  GOTO 1430
    0x56741f275b90 ---------A T 02080  N2=N2+N
    0x56741f275c00 ---------A   02090  GOTO 1130
    0x56741f275e10 ---------A T 02100  C1=4
    0x56741f275e80 ---------A   02110  GOTO 1060
    0x56741f276090 ---------A T 02120  P1=16
    0x56741f2762e0 ---------A   02130  IF N3=0 THEN 2660
    0x56741f276620 ---------A   02140  N3=N3-1
    0x56741f276830 ---------A   02150  Z=550
    0x56741f2768a0 ---------A T 02160  GOTO 1430
    0x56741f276bf0 ---------A T 02170  N3=N3+N
    0x56741f276c60 ---------A   02180  GOTO 1130
    0x56741f276e70 ---------A T 02190  C1=2
    0x56741f276ee0 ---------A   02200  GOTO 1060
    0x56741f2770f0 ---------A T 02210  P1=10
    0x56741f277420 ---------A   02220  IF N4=O THEN 2680
    0x56741f277760 ---------A   02230  N4=N4-1
    0x56741f277970 ---------A   02240  Z=400
    0x56741f2779e0 ---------A   02250  GOTO 1430
    0x56741f277d30 ---------A T 02260  N4=N4+N
    0x56741f277da0 ---------A   02270  GOTO 1130
    0x56741f277fb0 ---------A T 02280  C1=.2
    0x56741f2781c0 ---------A   02290  N=100
    0x56741f278230 ---------A   02300  GOTO 1060
    0x56741f278440 ---------A T 02310  P1=6
    0x56741f278750 ---------A   02320  IF N5=0 THEN 2700
    0x56741f278a90 ---------A   02330  N5=N5-1
    0x56741f278ca0 ---------A   02340  Z=250
    0x56741f278d10 ---------A   02350  GOTO 1430
    0x56741f279060 ---------A T 02360  N5=N5+N
    0x56741f2790d0 ---------A   02370  GOTO 1130
    0x56741f2792e0 ---------A T 02380  E1=150
    0x56741f2794f0 ---------A   02390  E2=500
    0x56741f279700 ---------A   02400  E3=3
    0x56741f279910 ---------A   02410  E4=4
    0x56741f279980 ---------A   02420  GOTO 850
    0x56741f279b90 ---------A T 02430  E1=200
    0x56741f279da0 ---------A   02440  E2=350
    0x56741f279fb0 ---------A   02450  E3=4
    0x56741f27a1c0 ---------A   02460  E4=3
    0x56741f27a230 ---------A   02470  GOTO 850
    0x56741f27a440 ---------A T 02480  E1=150
    0x56741f27a650 ---------A   02490  E2=400
    0x56741f27a860 ---------A   02500  E3=5
    0x56741f27aa70 ---------A   02510  E4=2
    0x56741f27ab00 ---------A   02520  GOTO 850
    0x56741f27ac60 ---------A T 02530  PRINT "NOT ENOUGH SPACE. RESELECT."
    0x56741f27ad00 ---------A   02540  GOTO 980
    0x56741f27ae70 ---------A T 02550  PRINT "CHANGE BEYOND MAXIMUM POSSIBLE."
    0x56741f27afe0 ---------A   02560  PRINT "INCREASING TO MAXIMUM."
    0x56741f27b220 ---------A   02570  S1=S0
    0x56741f27b2b0 ---------A   02580  GOTO 1300
    0x56741f27b420 ---------A T 02590  PRINT "OUT OF SENSOR RANGE. AUTOMATIC DISENGAGE."
    0x56741f27b4b0 ---------A   02600  GOTO 2760
    0x56741f27b620 ----------   02610  PRINT "PHASER BANKS DRAINED."
    0x56741f27b790 ---------A T 02620  PRINT "SELECT ANOTHER COURSE OF ACTION."
    0x56741f27b830 ---------A   02630  GOTO 1200
    0x56741f27b990 ---------A T 02640  PRINT " ALL ANTI-MATTER MISSLES EXPENDED."
    0x56741f27ba30 ---------A   02650  GOTO 2620
    0x56741f27bb90 ---------A T 02660  PRINT "ALL HYPERSPACE LANCES EXPENDED."
    0x56741f27bc30 ---------A   02670  GOTO 2620
    0x56741f27bd90 ---------A T 02680  PRINT "ALL PHOTON TORPEDO TUBES EMPTY."
    0x56741f27be30 ---------A   02690  GOTO 2620
    0x56741f27bf90 ---------A T 02700  PRINT "HYPERON NEUTRALIZATION FIELD DRAINED."
    0x56741f27c020 ---------A   02710  GOTO 2620
    0x56741f27c180 ---------A T 02720  PRINT "ENEMY VESSEL DESTROYED!"
    0x56741f27c220 ---------A   02730  GOTO 1510
    0x56741f27c390 ---------A T 02740  PRINT "YOUR VESSEL HAS BEEN DESTROYED!"
    0x56741f27c720 ---------A T 02760  PRINT "ANOTHER BATTLE";:INPUT R$
    0x56741f27cb60 ---------A   02770  IF LEFT$(R$,1)="Y" THEN 810
    0x56741f27cd80 ---------A   02780  PRINT:PRINT "TRY AGAIN LATER!":PRINT
    0x56741f27ce30 ---------A   02790  GOTO 65000
    0x56741f27d0b0 ---------B G 10000  PRINT:LINE INPUT "ENTER 'RETURN' TO CONTINUE. ";XX$
    0x56741f27d2f0 ---------B   10010  PRINT CHR$(26)
    0x56741f27d350 ---------B   10020  RETURN
    0x56741f27d3b0 ---------A T 65000  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00610      00180T
     00640      00600T
     00770      00620T
     00810      02770T
     00850      02420T, 02470T, 02520T
     00920      00960T
     00970      01820T, 01860T, 01900T
     00980      01050T, 01130T, 02540T
     01060      01930T, 02020T, 02110T, 02200T, 02300T
     01130      02000T, 02090T, 02180T, 02270T, 02370T
     01180      01380T, 01420T
     01200      02630T
     01290      01690T
     01300      01650T, 02580T
     01330      01300T
     01340      01320T
     01370      01350T
     01390      01210T
     01430      01980T, 02070T, 02160T, 02250T, 02350T
     01500      01290T
     01510      01490T, 02730T
     01620      01590T
     01660      01210T
     01700      01680T
     01720      01760T
     01740      01710T
     01790      00930T
     01830      00930T
     01870      00930T
     01910      01000T
     01940      01210T
     01990      01080T
     02010      01000T
     02030      01210T
     02080      01080T
     02100      01000T
     02120      01210T
     02160      01950T
     02170      01080T
     02190      01000T
     02210      01210T
     02260      01080T
     02280      01000T
     02310      01210T
     02360      01120T
     02380      00820T
     02430      00830T
     02480      00840T
     02530      01060T
     02550      01400T
     02590      01340T
     02620      02650T, 02670T, 02690T, 02710T
     02640      02040T
     02660      02130T
     02680      02220T
     02700      02320T
     02720      01480T
     02740      01630T
     02760      01210T, 01640T, 01730T, 01780T, 02600T
     10000      00360G, 00545G
     65000      02790T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x56741f2526d0 (00100)   0x56741f2526d0 (00100)   0x56741f27d3b0 (65000)   0x56741f27d3b0 (65000)   
   B) 0x56741f27d0b0 (10000)   0x56741f27d0b0 (10000)   0x56741f27d350 (10020)   0x56741f27d350 (10020)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/dspace.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56741f2526d0 ---------A   00100  PRINT CHR$(26);TAB(24);"DEEPSPACE"
    0x56741f252670 ---------A   00110  PRINT TAB(20);"CREATIVE COMPUTING"
    0x56741f254b00 ---------A   00120  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x56741f253040 ----------   00130  PRINT
    0x56741f2530a0 ---------A        a PRINT
    0x56741f253480 ---------A   00150  PRINT "THIS IS DEEPSPACE, A TACTICAL SIMULATION OF SHIP TO SHIP"
    0x56741f253500 ---------A   00160  PRINT "COMBAT IN DEEP SPACE."
    0x56741f252c20 ---------A   00165  PRINT
    0x56741f255160 ----------   00170  PRINT "DO YOU WISH INSTRUCTIONS";
    0x56741f253720 ---------A        a INPUT I$
    0x56741f25aae0 ---------A   00180  IF LEFT$(I$,1)="N" THEN 610
    0x56741f25acc0 ---------A   00190  PRINT CHR$(26)
    0x56741f25ade0 ---------A   00200  PRINT "YOU ARE ONE OF A GROUP OF CAPTAINS ASSIGNED TO PATROL A"
    0x56741f25af40 ---------A   00210  PRINT "SECTION OF YOUR STAR EMPIRE'S BORDER AGAINST HOSTILE"
    0x56741f25b100 ---------A   00220  PRINT "ALIENS. ALL YOUR ENCOUNTERS HERE WILL BE AGAINST HOSTILE"
    0x56741f25b2c0 ---------A   00230  PRINT "VESSELS. YOU WILL FIRST BE REQUIRED TO SELECT A VESSEL"
    0x56741f25b480 ---------A   00240  PRINT "FROM ONE OF THREE TYPES, EACH WITH ITS OWN CHARACTERISTICS:"
    0x56741f25b4e0 ----------   00260  PRINT
    0x56741f25b8f0 ---------A        a PRINT "    TYPE","SPEED","CARGO SPACE","PROTECTION"
    0x56741f25bd70 ---------A   00265  PRINT "   ------","-----","-----------","----------"
    0x56741f25c1f0 ---------A   00270  PRINT "1- SCOUT"," 10X","     16","    1"
    0x56741f25c670 ---------A   00280  PRINT "2- CRUISER","  4X","     24","    2"
    0x56741f25cb00 ---------A   00290  PRINT "3- BATTLESHIP","  2X","     30","    5"
    0x56741f25cb60 ----------   00310  PRINT
    0x56741f25cd10 ---------A        a PRINT "SPEED IS GIVEN RELATIVE TO THE OTHER SHIPS."
    0x56741f25ce80 ---------A   00320  PRINT "CARGO SPACE IS IN UNITS OF SPACE ABOARD SHIP WHICH CAN BE"
    0x56741f25d010 ---------A   00330  PRINT "FILLED WITH WEAPONS."
    0x56741f25d180 ---------A   00340  PRINT "PROTECTION IS THE RELATIVE STRENGTH OF THE SHIP'S ARMOR"
    0x56741f25d2e0 ---------A   00350  PRINT "AND FORCE FIELDS."
    0x56741f25d3a0 ---------A   00360  GOSUB 10000
    0x56741f25d3f0 ----------   00370  PRINT
    0x56741f25d5a0 ---------A        a PRINT "ONCE A SHIP HAS BEEN SELECTED, YOU WILL BE INSTRUCTED TO ARM"
    0x56741f25d720 ---------A   00380  PRINT "IT WITH WEAPONRY FROM THE FOLLOWING LIST:"
    0x56741f25d7d0 ---------A   00390  PRINT
    0x56741f25d990 ---------A   00400  PRINT "     TYPE                    CARGO SPACE    REL. STRENGTH"
    0x56741f25db50 ---------A   00405  PRINT "    ------                   -----------    -------------"
    0x56741f25dd00 ---------A   00410  PRINT "1- PHASER BANKS                   12                4"
    0x56741f25deb0 ---------A   00420  PRINT "2- ANTI-MATTER MISSILE             4               20"
    0x56741f25e270 ---------A   00430  PRINT "3- HYPERSPACE LANCE                4               16"
    0x56741f25e420 ---------A   00440  PRINT "4- PHOTON TORPEDO                  2               10"
    0x56741f25e5e0 ---------A   00450  PRINT "5- HYPERON NEUTRALIZATION FIELD   20                6"
    0x56741f25e640 ----------   00470  PRINT
    0x56741f25e7f0 ---------A        a PRINT "WEAPONS #1 & #5 CAN BE FIRED 100 TIMES EACH; ALL OTHERS CAN"
    0x56741f25e930 ---------A   00480  PRINT "BE FIRED ONCE FOR EACH ON BOARD."
    0x56741f25e9e0 ---------A   00485  PRINT
    0x56741f25eb80 ---------A   00490  PRINT "A TYPICAL LOAD FOR A CRUISER MIGHT CONSIST OF:"
    0x56741f25ed20 ---------A   00500  PRINT "          1-#1 PHASER BANK          = 12"
    0x56741f25eec0 ---------A   00510  PRINT "          2-#3 HYPERSPACE LANCES    =  8"
    0x56741f25f060 ---------A   00520  PRINT "          2-#4 PHOTON TORPEDOES     =  4"
    0x56741f25f210 ---------A   00530  PRINT "                                  ---------"
    0x56741f25f390 ---------A   00540  PRINT "                              24 UNITS OF CARGO"
    0x56741f25f450 ---------A   00545  GOSUB 10000
    0x56741f25f600 ---------A   00550  PRINT " A WORD OF CAUTION: FIRING HIGH YIELD WEAPONS AT CLOSE (<100)"
    0x56741f25f7c0 ---------A   00560  PRINT "RANGE CAN BE DANGEROUS TO YOUR SHIP AND MINIMAL DAMAGE CAN"
    0x56741f25f970 ---------A   00570  PRINT "OCCUR AS FAR OUT AS 200 IN SOME CIRCUMSTANCES."
    0x56741f25f9d0 ----------   00590  PRINT
    0x56741f25fb50 ---------A        a PRINT "RANGE IS GIVEN IN THOUSANDS OF KILOMETERS."
    0x56741f25fbf0 ---------A   00600  GOTO 640
    0x56741f25fd50 ---------- T 00610  PRINT "DO YOU WISH A MANEUVER CHART";
    0x56741f25ff80 ---------A T      a INPUT M$
    0x56741f2603a0 ---------A   00620  IF LEFT$(M$,1)="N" THEN 770
    0x56741f260450 ---------A T 00640  PRINT
    0x56741f260590 ----------   00650  PRINT "     MANEUVER CHART"
    0x56741f260700 ---------A        a PRINT "     --------------"
    0x56741f260880 ---------A   00670  PRINT " 1      FIRE PHASERS"
    0x56741f260a10 ---------A   00680  PRINT " 2      FIRE ANTI-MATTER MISSILE"
    0x56741f260b90 ---------A   00690  PRINT " 3      FIRE HYPERSPACE LANCE"
    0x56741f260d20 ---------A   00700  PRINT " 4      FIRE PHOTON TORPEDO"
    0x56741f260eb0 ---------A   00710  PRINT " 5      ACTIVE HYPERON NEUTRALIZATION FIELD"
    0x56741f261020 ---------A   00720  PRINT " 6      SELF-DESTRUCT"
    0x56741f2611a0 ---------A   00730  PRINT " 7      CHANGE VELOCITY"
    0x56741f261310 ---------A   00740  PRINT " 8      DISENGAGE"
    0x56741f2614a0 ---------A   00750  PRINT " 9      PROCEED"
    0x56741f261500 ---------- T 00770  PRINT
    0x56741f261680 ---------A T      a PRINT "YOU HAVE A CHOICE OF THREE SYSTEMS TO PATROL."
    0x56741f261bf0 ---------A   00780  PRINT "1 - ORION"
    0x56741f261d60 ---------A   00790  PRINT "2 - DENEB"
    0x56741f261ee0 ---------A   00800  PRINT "3 - ARCTURUS"
    0x56741f262040 ---------- T 00810  PRINT "SELECT A SYSTEM (1-3)";
    0x56741f262260 ---------A T      a INPUT S9
    0x56741f2624c0 ---------A   00820  IF S9=1 THEN 2380
    0x56741f262720 ---------A   00830  IF S9=2 THEN 2430
    0x56741f2627a0 ---------A   00840  GOTO 2480
    0x56741f262a70 ---------A T 00850  D0=0
    0x56741f262d40 ---------A   00860  D1=0
    0x56741f263010 ---------A   00870  N1=0
    0x56741f2632e0 ---------A   00880  N2=0
    0x56741f2635b0 ---------A   00890  N3=0
    0x56741f263880 ---------A   00900  N4=0
    0x56741f263b80 ---------A   00910  D=0
    0x56741f263ce0 ---------- T 00920  PRINT "WHICH SPACECRAFT WOULD YOU LIKE (1-3)";
    0x56741f263f10 ---------A T      a INPUT S
    0x56741f2642b0 ---------A   00930  ON S GOTO 1790,1830,1870
    0x56741f264330 ---------A   00960  GOTO 920
    0x56741f264710 ---------A T 00970  C=C0
    0x56741f264ab0 ---------A T 00980  PRINT "YOU HAVE";C;"UNITS OF CARGO SPACE TO FILL WITH WEAPONRY."
    0x56741f264c30 ----------   00990  PRINT "CHOOSE A WEAPON AND THE AMOUNT YOU WISH";
    0x56741f265000 ---------A        a INPUT W,N
    0x56741f265520 ---------A   01000  ON W GOTO 1910,2010,2100,2190,2280
    0x56741f2655b0 ---------A   01050  GOTO 980
    0x56741f265a00 ---------A T 01060  IF N*C1>C THEN 2530
    0x56741f265e90 ---------A   01070  C=C-N*C1
    0x56741f2662e0 ---------A   01080  ON W GOTO 1990,2080,2170,2260
    0x56741f266360 ---------A   01120  GOTO 2360
    0x56741f2665b0 ---------A T 01130  IF C>1 THEN 980
    0x56741f266630 ---------A   01140  REM
    0x56741f266be0 ---------A   01150  S1=S0*RND(0)
    0x56741f2672e0 ---------A   01160  R=(3*RND(0)+5)*100
    0x56741f267330 ---------- T 01180  PRINT
    0x56741f2675a0 ---------A T      a PRINT "RANGE TO TARGET:";R
    0x56741f267810 ---------A   01190  PRINT "RELATIVE VELOCITY:";S1
    0x56741f267970 ---------- T 01200  PRINT "ACTION";
    0x56741f267bb0 ---------A T      a INPUT M
    0x56741f268310 ---------A   01210  ON M GOTO 1940,2030,2120,2210,2310,1660,1390,2760
    0x56741f268570 ---------A T 01290  IF R<500 THEN 1500
    0x56741f2687d0 ---------A T 01300  IF S1>0 THEN 1330
    0x56741f268d70 ---------A   01310  R=R+(S1*8.3)^1.25
    0x56741f268de0 ---------A   01320  GOTO 1340
    0x56741f269380 ---------A T 01330  R=R-(S1*8.3)^1.25
    0x56741f2695d0 ---------A T 01340  IF R>1500 THEN 2590
    0x56741f269830 ---------A   01350  IF R>0 THEN 1370
    0x56741f269a70 ---------A   01360  R=-R
    0x56741f269ae0 ---------A T 01370  PRINT
    0x56741f269b80 ---------A   01380  GOTO 1180
    0x56741f269cd0 ---------- T 01390  PRINT "CHANGE TO BE EFFECTED";
    0x56741f269f00 ---------A T      a INPUT S2
    0x56741f26a2e0 ---------A   01400  IF (S1+S2)>S0 THEN 2550
    0x56741f26a640 ---------A   01410  S1=S1+S2
    0x56741f26a6b0 ---------A   01420  GOTO 1180
    0x56741f26aea0 ---------A T 01430  F0=P1*(Z/R)^1.5
    0x56741f26af10 ---------A   01440  REM
    0x56741f26b7b0 ---------A   01450  D0=(2*F0+3*F0*RND(0))/5
    0x56741f26bb20 ---------A   01460  D=D+D0
    0x56741f26bd80 ---------A   01470  PRINT "SCANNERS REPORT ENEMY DAMAGE NOW:";D
    0x56741f26bfe0 ---------A   01480  IF D>99 THEN 2720
    0x56741f26c060 ---------A   01490  GOTO 1510
    0x56741f26c270 ---------A T 01500  D0=0
    0x56741f26c2e0 ---------A T 01510  REM
    0x56741f26ca70 ---------A   01520  K=E1+E2*RND(0)
    0x56741f26cae0 ---------A   01530  REM
    0x56741f26d740 ---------A   01540  E=E3+E4*RND(0)+5/P0*RND(0)
    0x56741f26d7b0 ---------A   01550  REM
    0x56741f26de50 ---------A   01560  F3=E*(K/R)^1.85
    0x56741f26e780 ---------A   01570  D2=(3*F3+3*F3*RND(0))/5.5
    0x56741f26eae0 ---------A   01580  D1=D1+D2
    0x56741f26f900 ---------A   01590  IF (Z*D0)/(R*500)>2.2 THEN 1620
    0x56741f270080 ---------A   01600  D3=D0*2/(R^2*P0)
    0x56741f270400 ---------A   01610  D1=D1+D3
    0x56741f270670 ---------A T 01620  PRINT "DAMAGE CONTROL REPORTS YOUR VESSEL DAMAGE AT:";D1
    0x56741f2708d0 ---------A   01630  IF D1>99 THEN 2740
    0x56741f270b30 ---------A   01640  IF D>99 THEN 2760
    0x56741f270bd0 ---------A   01650  GOTO 1300
    0x56741f270d60 ---------A T 01660  PRINT "SELF DESTRUCT FAILSAFE ACTIVATED!!"
    0x56741f270ed0 ----------   01670  PRINT "INPUT 1 TO RELEASE FAILSAFE";
    0x56741f2710f0 ---------A        a INPUT U
    0x56741f271350 ---------A   01680  IF U=1 THEN 1700
    0x56741f2713f0 ---------A   01690  GOTO 1290
    0x56741f271550 ---------A T 01700  PRINT "SELF DESTRUCT ACCOMPLISHED."
    0x56741f2717d0 ---------A   01710  IF R>60 THEN 1740
    0x56741f271940 ---------A T 01720  PRINT "ENEMY VESSEL ALSO DESTROYED."
    0x56741f2719c0 ---------A   01730  GOTO 2760
    0x56741f271db0 ---------A T 01740  D4=3200/R
    0x56741f272100 ---------A   01750  D=D+D4
    0x56741f272370 ---------A   01760  IF D>99 THEN 1720
    0x56741f2726e0 ---------A   01770  PRINT "ENEMY VESSEL SURVIVES WITH";D;"DAMAGE."
    0x56741f272760 ---------A   01780  GOTO 2760
    0x56741f272970 ---------A T 01790  S0=10
    0x56741f272b80 ---------A   01800  C0=16
    0x56741f272d90 ---------A   01810  P0=1
    0x56741f272e00 ---------A   01820  GOTO 970
    0x56741f273010 ---------A T 01830  S0=4
    0x56741f273220 ---------A   01840  C0=24
    0x56741f273430 ---------A   01850  P0=2
    0x56741f2734a0 ---------A   01860  GOTO 970
    0x56741f2736b0 ---------A T 01870  S0=2
    0x56741f2738c0 ---------A   01880  C0=30
    0x56741f273ad0 ---------A   01890  P0=5
    0x56741f273b40 ---------A   01900  GOTO 970
    0x56741f273d50 ---------A T 01910  C1=12
    0x56741f273dc0 ---------A   01930  GOTO 1060
    0x56741f273fd0 ---------A T 01940  P1=4
    0x56741f274220 ---------A   01950  IF N1=0 THEN 2160
    0x56741f274560 ---------A   01960  N1=N1-1
    0x56741f274770 ---------A   01970  Z=200
    0x56741f2747e0 ---------A   01980  GOTO 1430
    0x56741f274b30 ---------A T 01990  N1=N1+N
    0x56741f274ba0 ---------A   02000  GOTO 1130
    0x56741f274db0 ---------A T 02010  C1=4
    0x56741f274e20 ---------A   02020  GOTO 1060
    0x56741f275030 ---------A T 02030  P1=20
    0x56741f275280 ---------A   02040  IF N2=0 THEN 2640
    0x56741f2755c0 ---------A   02050  N2=N2-1
    0x56741f2757d0 ---------A   02060  Z=500
    0x56741f275840 ---------A   02070  GOTO 1430
    0x56741f275b90 ---------A T 02080  N2=N2+N
    0x56741f275c00 ---------A   02090  GOTO 1130
    0x56741f275e10 ---------A T 02100  C1=4
    0x56741f275e80 ---------A   02110  GOTO 1060
    0x56741f276090 ---------A T 02120  P1=16
    0x56741f2762e0 ---------A   02130  IF N3=0 THEN 2660
    0x56741f276620 ---------A   02140  N3=N3-1
    0x56741f276830 ---------A   02150  Z=550
    0x56741f2768a0 ---------A T 02160  GOTO 1430
    0x56741f276bf0 ---------A T 02170  N3=N3+N
    0x56741f276c60 ---------A   02180  GOTO 1130
    0x56741f276e70 ---------A T 02190  C1=2
    0x56741f276ee0 ---------A   02200  GOTO 1060
    0x56741f2770f0 ---------A T 02210  P1=10
    0x56741f277420 ---------A   02220  IF N4=O THEN 2680
    0x56741f277760 ---------A   02230  N4=N4-1
    0x56741f277970 ---------A   02240  Z=400
    0x56741f2779e0 ---------A   02250  GOTO 1430
    0x56741f277d30 ---------A T 02260  N4=N4+N
    0x56741f277da0 ---------A   02270  GOTO 1130
    0x56741f277fb0 ---------A T 02280  C1=.2
    0x56741f2781c0 ---------A   02290  N=100
    0x56741f278230 ---------A   02300  GOTO 1060
    0x56741f278440 ---------A T 02310  P1=6
    0x56741f278750 ---------A   02320  IF N5=0 THEN 2700
    0x56741f278a90 ---------A   02330  N5=N5-1
    0x56741f278ca0 ---------A   02340  Z=250
    0x56741f278d10 ---------A   02350  GOTO 1430
    0x56741f279060 ---------A T 02360  N5=N5+N
    0x56741f2790d0 ---------A   02370  GOTO 1130
    0x56741f2792e0 ---------A T 02380  E1=150
    0x56741f2794f0 ---------A   02390  E2=500
    0x56741f279700 ---------A   02400  E3=3
    0x56741f279910 ---------A   02410  E4=4
    0x56741f279980 ---------A   02420  GOTO 850
    0x56741f279b90 ---------A T 02430  E1=200
    0x56741f279da0 ---------A   02440  E2=350
    0x56741f279fb0 ---------A   02450  E3=4
    0x56741f27a1c0 ---------A   02460  E4=3
    0x56741f27a230 ---------A   02470  GOTO 850
    0x56741f27a440 ---------A T 02480  E1=150
    0x56741f27a650 ---------A   02490  E2=400
    0x56741f27a860 ---------A   02500  E3=5
    0x56741f27aa70 ---------A   02510  E4=2
    0x56741f27ab00 ---------A   02520  GOTO 850
    0x56741f27ac60 ---------A T 02530  PRINT "NOT ENOUGH SPACE. RESELECT."
    0x56741f27ad00 ---------A   02540  GOTO 980
    0x56741f27ae70 ---------A T 02550  PRINT "CHANGE BEYOND MAXIMUM POSSIBLE."
    0x56741f27afe0 ---------A   02560  PRINT "INCREASING TO MAXIMUM."
    0x56741f27b220 ---------A   02570  S1=S0
    0x56741f27b2b0 ---------A   02580  GOTO 1300
    0x56741f27b420 ---------A T 02590  PRINT "OUT OF SENSOR RANGE. AUTOMATIC DISENGAGE."
    0x56741f27b4b0 ---------A   02600  GOTO 2760
    0x56741f27b620 ----------   02610  PRINT "PHASER BANKS DRAINED."
    0x56741f27b790 ---------A T 02620  PRINT "SELECT ANOTHER COURSE OF ACTION."
    0x56741f27b830 ---------A   02630  GOTO 1200
    0x56741f27b990 ---------A T 02640  PRINT " ALL ANTI-MATTER MISSLES EXPENDED."
    0x56741f27ba30 ---------A   02650  GOTO 2620
    0x56741f27bb90 ---------A T 02660  PRINT "ALL HYPERSPACE LANCES EXPENDED."
    0x56741f27bc30 ---------A   02670  GOTO 2620
    0x56741f27bd90 ---------A T 02680  PRINT "ALL PHOTON TORPEDO TUBES EMPTY."
    0x56741f27be30 ---------A   02690  GOTO 2620
    0x56741f27bf90 ---------A T 02700  PRINT "HYPERON NEUTRALIZATION FIELD DRAINED."
    0x56741f27c020 ---------A   02710  GOTO 2620
    0x56741f27c180 ---------A T 02720  PRINT "ENEMY VESSEL DESTROYED!"
    0x56741f27c220 ---------A   02730  GOTO 1510
    0x56741f27c390 ---------A T 02740  PRINT "YOUR VESSEL HAS BEEN DESTROYED!"
    0x56741f27c4f0 ---------- T 02760  PRINT "ANOTHER BATTLE";
    0x56741f27c720 ---------A T      a INPUT R$
    0x56741f27cb60 ---------A   02770  IF LEFT$(R$,1)="Y" THEN 810
    0x56741f27cbc0 ----------   02780  PRINT
    0x56741f27cd00 ----------        a PRINT "TRY AGAIN LATER!"
    0x56741f27cd80 ---------A        b PRINT
    0x56741f27ce30 ---------A   02790  GOTO 65000
    0x56741f27ce80 ---------- G 10000  PRINT
    0x56741f27d0b0 ---------B G      a LINE INPUT "ENTER 'RETURN' TO CONTINUE. ";XX$
    0x56741f27d2f0 ---------B   10010  PRINT CHR$(26)
    0x56741f27d350 ---------B   10020  RETURN
    0x56741f27d3b0 ---------A T 65000  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/dspace.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56741f2526d0 ---------A   01000  PRINT CHR$(26);TAB(24);"DEEPSPACE"
    0x56741f252670 ---------A   01010  PRINT TAB(20);"CREATIVE COMPUTING"
    0x56741f254b00 ---------A   01020  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x56741f253040 ----------   01030  PRINT
    0x56741f2530a0 ---------A   01040  PRINT
    0x56741f253480 ---------A   01050  PRINT "THIS IS DEEPSPACE, A TACTICAL SIMULATION OF SHIP TO SHIP"
    0x56741f253500 ---------A T 01060  PRINT "COMBAT IN DEEP SPACE."
    0x56741f252c20 ---------A   01070  PRINT
    0x56741f255160 ----------   01080  PRINT "DO YOU WISH INSTRUCTIONS";
    0x56741f253720 ---------A   01090  INPUT I$
    0x56741f25aae0 ---------A   01100  IF LEFT$(I$,1)="N" THEN 1590
    0x56741f25acc0 ---------A   01110  PRINT CHR$(26)
    0x56741f25ade0 ---------A   01120  PRINT "YOU ARE ONE OF A GROUP OF CAPTAINS ASSIGNED TO PATROL A"
    0x56741f25af40 ---------A T 01130  PRINT "SECTION OF YOUR STAR EMPIRE'S BORDER AGAINST HOSTILE"
    0x56741f25b100 ---------A   01140  PRINT "ALIENS. ALL YOUR ENCOUNTERS HERE WILL BE AGAINST HOSTILE"
    0x56741f25b2c0 ---------A   01150  PRINT "VESSELS. YOU WILL FIRST BE REQUIRED TO SELECT A VESSEL"
    0x56741f25b480 ---------A   01160  PRINT "FROM ONE OF THREE TYPES, EACH WITH ITS OWN CHARACTERISTICS:"
    0x56741f25b4e0 ----------   01170  PRINT
    0x56741f25b8f0 ---------A T 01180  PRINT "    TYPE","SPEED","CARGO SPACE","PROTECTION"
    0x56741f25bd70 ---------A   01190  PRINT "   ------","-----","-----------","----------"
    0x56741f25c1f0 ---------A T 01200  PRINT "1- SCOUT"," 10X","     16","    1"
    0x56741f25c670 ---------A   01210  PRINT "2- CRUISER","  4X","     24","    2"
    0x56741f25cb00 ---------A   01220  PRINT "3- BATTLESHIP","  2X","     30","    5"
    0x56741f25cb60 ----------   01230  PRINT
    0x56741f25cd10 ---------A   01240  PRINT "SPEED IS GIVEN RELATIVE TO THE OTHER SHIPS."
    0x56741f25ce80 ---------A   01250  PRINT "CARGO SPACE IS IN UNITS OF SPACE ABOARD SHIP WHICH CAN BE"
    0x56741f25d010 ---------A   01260  PRINT "FILLED WITH WEAPONS."
    0x56741f25d180 ---------A   01270  PRINT "PROTECTION IS THE RELATIVE STRENGTH OF THE SHIP'S ARMOR"
    0x56741f25d2e0 ---------A   01280  PRINT "AND FORCE FIELDS."
    0x56741f25d3a0 ---------A T 01290  GOSUB 3690
    0x56741f25d3f0 ---------- T 01300  PRINT
    0x56741f25d5a0 ---------A   01310  PRINT "ONCE A SHIP HAS BEEN SELECTED, YOU WILL BE INSTRUCTED TO ARM"
    0x56741f25d720 ---------A   01320  PRINT "IT WITH WEAPONRY FROM THE FOLLOWING LIST:"
    0x56741f25d7d0 ---------A T 01330  PRINT
    0x56741f25d990 ---------A T 01340  PRINT "     TYPE                    CARGO SPACE    REL. STRENGTH"
    0x56741f25db50 ---------A   01350  PRINT "    ------                   -----------    -------------"
    0x56741f25dd00 ---------A   01360  PRINT "1- PHASER BANKS                   12                4"
    0x56741f25deb0 ---------A T 01370  PRINT "2- ANTI-MATTER MISSILE             4               20"
    0x56741f25e270 ---------A   01380  PRINT "3- HYPERSPACE LANCE                4               16"
    0x56741f25e420 ---------A T 01390  PRINT "4- PHOTON TORPEDO                  2               10"
    0x56741f25e5e0 ---------A   01400  PRINT "5- HYPERON NEUTRALIZATION FIELD   20                6"
    0x56741f25e640 ----------   01410  PRINT
    0x56741f25e7f0 ---------A   01420  PRINT "WEAPONS #1 & #5 CAN BE FIRED 100 TIMES EACH; ALL OTHERS CAN"
    0x56741f25e930 ---------A T 01430  PRINT "BE FIRED ONCE FOR EACH ON BOARD."
    0x56741f25e9e0 ---------A   01440  PRINT
    0x56741f25eb80 ---------A   01450  PRINT "A TYPICAL LOAD FOR A CRUISER MIGHT CONSIST OF:"
    0x56741f25ed20 ---------A   01460  PRINT "          1-#1 PHASER BANK          = 12"
    0x56741f25eec0 ---------A   01470  PRINT "          2-#3 HYPERSPACE LANCES    =  8"
    0x56741f25f060 ---------A   01480  PRINT "          2-#4 PHOTON TORPEDOES     =  4"
    0x56741f25f210 ---------A   01490  PRINT "                                  ---------"
    0x56741f25f390 ---------A T 01500  PRINT "                              24 UNITS OF CARGO"
    0x56741f25f450 ---------A T 01510  GOSUB 3690
    0x56741f25f600 ---------A   01520  PRINT " A WORD OF CAUTION: FIRING HIGH YIELD WEAPONS AT CLOSE (<100)"
    0x56741f25f7c0 ---------A   01530  PRINT "RANGE CAN BE DANGEROUS TO YOUR SHIP AND MINIMAL DAMAGE CAN"
    0x56741f25f970 ---------A   01540  PRINT "OCCUR AS FAR OUT AS 200 IN SOME CIRCUMSTANCES."
    0x56741f25f9d0 ----------   01550  PRINT
    0x56741f25fb50 ---------A   01560  PRINT "RANGE IS GIVEN IN THOUSANDS OF KILOMETERS."
    0x56741f25fbf0 ---------A   01570  GOTO 1610
    0x56741f25fd50 ----------   01580  PRINT "DO YOU WISH A MANEUVER CHART";
    0x56741f25ff80 ---------A   01590  INPUT M$
    0x56741f2603a0 ---------A   01600  IF LEFT$(M$,1)="N" THEN 1740
    0x56741f260450 ---------A   01610  PRINT
    0x56741f260590 ---------- T 01620  PRINT "     MANEUVER CHART"
    0x56741f260700 ---------A   01630  PRINT "     --------------"
    0x56741f260880 ---------A   01640  PRINT " 1      FIRE PHASERS"
    0x56741f260a10 ---------A   01650  PRINT " 2      FIRE ANTI-MATTER MISSILE"
    0x56741f260b90 ---------A T 01660  PRINT " 3      FIRE HYPERSPACE LANCE"
    0x56741f260d20 ---------A   01670  PRINT " 4      FIRE PHOTON TORPEDO"
    0x56741f260eb0 ---------A   01680  PRINT " 5      ACTIVE HYPERON NEUTRALIZATION FIELD"
    0x56741f261020 ---------A   01690  PRINT " 6      SELF-DESTRUCT"
    0x56741f2611a0 ---------A T 01700  PRINT " 7      CHANGE VELOCITY"
    0x56741f261310 ---------A   01710  PRINT " 8      DISENGAGE"
    0x56741f2614a0 ---------A T 01720  PRINT " 9      PROCEED"
    0x56741f261500 ----------   01730  PRINT
    0x56741f261680 ---------A T 01740  PRINT "YOU HAVE A CHOICE OF THREE SYSTEMS TO PATROL."
    0x56741f261bf0 ---------A   01750  PRINT "1 - ORION"
    0x56741f261d60 ---------A   01760  PRINT "2 - DENEB"
    0x56741f261ee0 ---------A   01770  PRINT "3 - ARCTURUS"
    0x56741f262040 ----------   01780  PRINT "SELECT A SYSTEM (1-3)";
    0x56741f262260 ---------A T 01790  INPUT S9
    0x56741f2624c0 ---------A   01800  IF S9=1 THEN 3240
    0x56741f262720 ---------A   01810  IF S9=2 THEN 3290
    0x56741f2627a0 ---------A   01820  GOTO 3340
    0x56741f262a70 ---------A T 01830  D0=0
    0x56741f262d40 ---------A   01840  D1=0
    0x56741f263010 ---------A   01850  N1=0
    0x56741f2632e0 ---------A   01860  N2=0
    0x56741f2635b0 ---------A T 01870  N3=0
    0x56741f263880 ---------A   01880  N4=0
    0x56741f263b80 ---------A   01890  D=0
    0x56741f263ce0 ----------   01900  PRINT "WHICH SPACECRAFT WOULD YOU LIKE (1-3)";
    0x56741f263f10 ---------A T 01910  INPUT S
    0x56741f2642b0 ---------A   01920  ON S GOTO 2660,2700,2740
    0x56741f264330 ---------A   01930  GOTO 1910
    0x56741f264710 ---------A T 01940  C=C0
    0x56741f264ab0 ---------A   01950  PRINT "YOU HAVE";C;"UNITS OF CARGO SPACE TO FILL WITH WEAPONRY."
    0x56741f264c30 ----------   01960  PRINT "CHOOSE A WEAPON AND THE AMOUNT YOU WISH";
    0x56741f265000 ---------A   01970  INPUT W,N
    0x56741f265520 ---------A   01980  ON W GOTO 2780,2870,2960,3050,3140
    0x56741f2655b0 ---------A T 01990  GOTO 1950
    0x56741f265a00 ---------A   02000  IF N*C1>C THEN 3390
    0x56741f265e90 ---------A T 02010  C=C-N*C1
    0x56741f2662e0 ---------A   02020  ON W GOTO 2850,2940,3030,3120
    0x56741f266360 ---------A T 02030  GOTO 3220
    0x56741f2665b0 ---------A   02040  IF C>1 THEN 1950
    0x56741f266630 ---------A   02050  REM
    0x56741f266be0 ---------A   02060  S1=S0*RND(0)
    0x56741f2672e0 ---------A   02070  R=(3*RND(0)+5)*100
    0x56741f267330 ---------- T 02080  PRINT
    0x56741f2675a0 ---------A   02090  PRINT "RANGE TO TARGET:";R
    0x56741f267810 ---------A T 02100  PRINT "RELATIVE VELOCITY:";S1
    0x56741f267970 ----------   02110  PRINT "ACTION";
    0x56741f267bb0 ---------A T 02120  INPUT M
    0x56741f268310 ---------A   02130  ON M GOTO 2800,2890,2980,3070,3170,2520,2250,3620
    0x56741f268570 ---------A   02140  IF R<500 THEN 2360
    0x56741f2687d0 ---------A   02150  IF S1>0 THEN 2180
    0x56741f268d70 ---------A T 02160  R=R+(S1*8.3)^1.25
    0x56741f268de0 ---------A T 02170  GOTO 2190
    0x56741f269380 ---------A   02180  R=R-(S1*8.3)^1.25
    0x56741f2695d0 ---------A T 02190  IF R>1500 THEN 3450
    0x56741f269830 ---------A   02200  IF R>0 THEN 2220
    0x56741f269a70 ---------A T 02210  R=-R
    0x56741f269ae0 ---------A   02220  PRINT
    0x56741f269b80 ---------A   02230  GOTO 2090
    0x56741f269cd0 ----------   02240  PRINT "CHANGE TO BE EFFECTED";
    0x56741f269f00 ---------A   02250  INPUT S2
    0x56741f26a2e0 ---------A T 02260  IF (S1+S2)>S0 THEN 3410
    0x56741f26a640 ---------A   02270  S1=S1+S2
    0x56741f26a6b0 ---------A T 02280  GOTO 2090
    0x56741f26aea0 ---------A   02290  F0=P1*(Z/R)^1.5
    0x56741f26af10 ---------A   02300  REM
    0x56741f26b7b0 ---------A T 02310  D0=(2*F0+3*F0*RND(0))/5
    0x56741f26bb20 ---------A   02320  D=D+D0
    0x56741f26bd80 ---------A   02330  PRINT "SCANNERS REPORT ENEMY DAMAGE NOW:";D
    0x56741f26bfe0 ---------A   02340  IF D>99 THEN 3580
    0x56741f26c060 ---------A   02350  GOTO 2370
    0x56741f26c270 ---------A T 02360  D0=0
    0x56741f26c2e0 ---------A   02370  REM
    0x56741f26ca70 ---------A T 02380  K=E1+E2*RND(0)
    0x56741f26cae0 ---------A   02390  REM
    0x56741f26d740 ---------A   02400  E=E3+E4*RND(0)+5/P0*RND(0)
    0x56741f26d7b0 ---------A   02410  REM
    0x56741f26de50 ---------A   02420  F3=E*(K/R)^1.85
    0x56741f26e780 ---------A T 02430  D2=(3*F3+3*F3*RND(0))/5.5
    0x56741f26eae0 ---------A   02440  D1=D1+D2
    0x56741f26f900 ---------A   02450  IF (Z*D0)/(R*500)>2.2 THEN 2480
    0x56741f270080 ---------A   02460  D3=D0*2/(R^2*P0)
    0x56741f270400 ---------A   02470  D1=D1+D3
    0x56741f270670 ---------A T 02480  PRINT "DAMAGE CONTROL REPORTS YOUR VESSEL DAMAGE AT:";D1
    0x56741f2708d0 ---------A   02490  IF D1>99 THEN 3600
    0x56741f270b30 ---------A   02500  IF D>99 THEN 3620
    0x56741f270bd0 ---------A   02510  GOTO 2150
    0x56741f270d60 ---------A   02520  PRINT "SELF DESTRUCT FAILSAFE ACTIVATED!!"
    0x56741f270ed0 ---------- T 02530  PRINT "INPUT 1 TO RELEASE FAILSAFE";
    0x56741f2710f0 ---------A   02540  INPUT U
    0x56741f271350 ---------A T 02550  IF U=1 THEN 2570
    0x56741f2713f0 ---------A   02560  GOTO 2140
    0x56741f271550 ---------A   02570  PRINT "SELF DESTRUCT ACCOMPLISHED."
    0x56741f2717d0 ---------A   02580  IF R>60 THEN 2610
    0x56741f271940 ---------A T 02590  PRINT "ENEMY VESSEL ALSO DESTROYED."
    0x56741f2719c0 ---------A   02600  GOTO 3620
    0x56741f271db0 ---------A   02610  D4=3200/R
    0x56741f272100 ---------A T 02620  D=D+D4
    0x56741f272370 ---------A   02630  IF D>99 THEN 2590
    0x56741f2726e0 ---------A T 02640  PRINT "ENEMY VESSEL SURVIVES WITH";D;"DAMAGE."
    0x56741f272760 ---------A   02650  GOTO 3620
    0x56741f272970 ---------A T 02660  S0=10
    0x56741f272b80 ---------A   02670  C0=16
    0x56741f272d90 ---------A T 02680  P0=1
    0x56741f272e00 ---------A   02690  GOTO 1940
    0x56741f273010 ---------A T 02700  S0=4
    0x56741f273220 ---------A   02710  C0=24
    0x56741f273430 ---------A T 02720  P0=2
    0x56741f2734a0 ---------A   02730  GOTO 1940
    0x56741f2736b0 ---------A T 02740  S0=2
    0x56741f2738c0 ---------A   02750  C0=30
    0x56741f273ad0 ---------A T 02760  P0=5
    0x56741f273b40 ---------A   02770  GOTO 1940
    0x56741f273d50 ---------A   02780  C1=12
    0x56741f273dc0 ---------A   02790  GOTO 2000
    0x56741f273fd0 ---------A   02800  P1=4
    0x56741f274220 ---------A   02810  IF N1=0 THEN 3020
    0x56741f274560 ---------A   02820  N1=N1-1
    0x56741f274770 ---------A   02830  Z=200
    0x56741f2747e0 ---------A   02840  GOTO 2290
    0x56741f274b30 ---------A   02850  N1=N1+N
    0x56741f274ba0 ---------A   02860  GOTO 2040
    0x56741f274db0 ---------A   02870  C1=4
    0x56741f274e20 ---------A   02880  GOTO 2000
    0x56741f275030 ---------A   02890  P1=20
    0x56741f275280 ---------A   02900  IF N2=0 THEN 3500
    0x56741f2755c0 ---------A   02910  N2=N2-1
    0x56741f2757d0 ---------A   02920  Z=500
    0x56741f275840 ---------A   02930  GOTO 2290
    0x56741f275b90 ---------A   02940  N2=N2+N
    0x56741f275c00 ---------A   02950  GOTO 2040
    0x56741f275e10 ---------A   02960  C1=4
    0x56741f275e80 ---------A   02970  GOTO 2000
    0x56741f276090 ---------A   02980  P1=16
    0x56741f2762e0 ---------A   02990  IF N3=0 THEN 3520
    0x56741f276620 ---------A   03000  N3=N3-1
    0x56741f276830 ---------A   03010  Z=550
    0x56741f2768a0 ---------A   03020  GOTO 2290
    0x56741f276bf0 ---------A   03030  N3=N3+N
    0x56741f276c60 ---------A   03040  GOTO 2040
    0x56741f276e70 ---------A   03050  C1=2
    0x56741f276ee0 ---------A   03060  GOTO 2000
    0x56741f2770f0 ---------A   03070  P1=10
    0x56741f277420 ---------A   03080  IF N4=O THEN 3540
    0x56741f277760 ---------A   03090  N4=N4-1
    0x56741f277970 ---------A   03100  Z=400
    0x56741f2779e0 ---------A   03110  GOTO 2290
    0x56741f277d30 ---------A   03120  N4=N4+N
    0x56741f277da0 ---------A   03130  GOTO 2040
    0x56741f277fb0 ---------A   03140  C1=.2
    0x56741f2781c0 ---------A   03150  N=100
    0x56741f278230 ---------A   03160  GOTO 2000
    0x56741f278440 ---------A   03170  P1=6
    0x56741f278750 ---------A   03180  IF N5=0 THEN 3560
    0x56741f278a90 ---------A   03190  N5=N5-1
    0x56741f278ca0 ---------A   03200  Z=250
    0x56741f278d10 ---------A   03210  GOTO 2290
    0x56741f279060 ---------A   03220  N5=N5+N
    0x56741f2790d0 ---------A   03230  GOTO 2040
    0x56741f2792e0 ---------A   03240  E1=150
    0x56741f2794f0 ---------A   03250  E2=500
    0x56741f279700 ---------A   03260  E3=3
    0x56741f279910 ---------A   03270  E4=4
    0x56741f279980 ---------A   03280  GOTO 1830
    0x56741f279b90 ---------A   03290  E1=200
    0x56741f279da0 ---------A   03300  E2=350
    0x56741f279fb0 ---------A   03310  E3=4
    0x56741f27a1c0 ---------A   03320  E4=3
    0x56741f27a230 ---------A   03330  GOTO 1830
    0x56741f27a440 ---------A   03340  E1=150
    0x56741f27a650 ---------A   03350  E2=400
    0x56741f27a860 ---------A   03360  E3=5
    0x56741f27aa70 ---------A   03370  E4=2
    0x56741f27ab00 ---------A   03380  GOTO 1830
    0x56741f27ac60 ---------A   03390  PRINT "NOT ENOUGH SPACE. RESELECT."
    0x56741f27ad00 ---------A   03400  GOTO 1950
    0x56741f27ae70 ---------A   03410  PRINT "CHANGE BEYOND MAXIMUM POSSIBLE."
    0x56741f27afe0 ---------A   03420  PRINT "INCREASING TO MAXIMUM."
    0x56741f27b220 ---------A   03430  S1=S0
    0x56741f27b2b0 ---------A   03440  GOTO 2150
    0x56741f27b420 ---------A   03450  PRINT "OUT OF SENSOR RANGE. AUTOMATIC DISENGAGE."
    0x56741f27b4b0 ---------A   03460  GOTO 3620
    0x56741f27b620 ----------   03470  PRINT "PHASER BANKS DRAINED."
    0x56741f27b790 ---------A   03480  PRINT "SELECT ANOTHER COURSE OF ACTION."
    0x56741f27b830 ---------A   03490  GOTO 2120
    0x56741f27b990 ---------A   03500  PRINT " ALL ANTI-MATTER MISSLES EXPENDED."
    0x56741f27ba30 ---------A   03510  GOTO 3480
    0x56741f27bb90 ---------A   03520  PRINT "ALL HYPERSPACE LANCES EXPENDED."
    0x56741f27bc30 ---------A   03530  GOTO 3480
    0x56741f27bd90 ---------A   03540  PRINT "ALL PHOTON TORPEDO TUBES EMPTY."
    0x56741f27be30 ---------A   03550  GOTO 3480
    0x56741f27bf90 ---------A   03560  PRINT "HYPERON NEUTRALIZATION FIELD DRAINED."
    0x56741f27c020 ---------A   03570  GOTO 3480
    0x56741f27c180 ---------A   03580  PRINT "ENEMY VESSEL DESTROYED!"
    0x56741f27c220 ---------A   03590  GOTO 2370
    0x56741f27c390 ---------A   03600  PRINT "YOUR VESSEL HAS BEEN DESTROYED!"
    0x56741f27c4f0 ----------   03610  PRINT "ANOTHER BATTLE";
    0x56741f27c720 ---------A   03620  INPUT R$
    0x56741f27cb60 ---------A   03630  IF LEFT$(R$,1)="Y" THEN 1790
    0x56741f27cbc0 ----------   03640  PRINT
    0x56741f27cd00 ----------   03650  PRINT "TRY AGAIN LATER!"
    0x56741f27cd80 ---------A   03660  PRINT
    0x56741f27ce30 ---------A   03670  GOTO 3720
    0x56741f27ce80 ----------   03680  PRINT
    0x56741f27d0b0 ---------B   03690  LINE INPUT "ENTER 'RETURN' TO CONTINUE. ";XX$
    0x56741f27d2f0 ---------B   03700  PRINT CHR$(26)
    0x56741f27d350 ---------B   03710  RETURN
    0x56741f27d3b0 ---------A   03720  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03700 - 10000    6310 

 */



/*
 *  Symbol Table Listing for 'basic/dspace.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Integer     
    C0                       Integer     
    C1                       Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    D0                       Integer     
    D1                       Integer     
    D2                       Integer     
    D3                       Integer     
    D4                       Integer     
    E                        Integer     
    E1                       Integer     
    E2                       Integer     
    E3                       Integer     
    E4                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F0                       Integer     
    F3                       Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I$                       String      
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
    M$                       String      
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    N1                       Integer     
    N2                       Integer     
    N3                       Integer     
    N4                       Integer     
    N5                       Integer     
    O                        Integer     
    OCT$            Function String          args=1, float  
    P0                       Integer     
    P1                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
    R$                       String      
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
    S0                       Integer     
    S1                       Integer     
    S2                       Integer     
    S9                       Integer     
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
    U                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    XX$                      String      
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/dspace.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56741f2526d0 ---------A   01000  PRINT CHR$(26);TAB(24);"DEEPSPACE"
    0x56741f252670 ---------A   01010  PRINT TAB(20);"CREATIVE COMPUTING"
    0x56741f254b00 ---------A   01020  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x56741f253040 ---------A   01030  PRINT
    0x56741f2530a0 ---------A   01040  PRINT
    0x56741f253480 ---------A   01050  PRINT "THIS IS DEEPSPACE, A TACTICAL SIMULATION OF SHIP TO SHIP"
    0x56741f253500 ---------A   01060  PRINT "COMBAT IN DEEP SPACE."
    0x56741f252c20 ---------A   01070  PRINT
    0x56741f255160 ---------A   01080  PRINT "DO YOU WISH INSTRUCTIONS";
    0x56741f253720 ---------A   01090  INPUT I$
    0x56741f25aae0 ---------A   01100  IF LEFT$(I$,1)="N" THEN 1580
    0x56741f25acc0 ---------A   01110  PRINT CHR$(26)
    0x56741f25ade0 ---------A   01120  PRINT "YOU ARE ONE OF A GROUP OF CAPTAINS ASSIGNED TO PATROL A"
    0x56741f25af40 ---------A   01130  PRINT "SECTION OF YOUR STAR EMPIRE'S BORDER AGAINST HOSTILE"
    0x56741f25b100 ---------A   01140  PRINT "ALIENS. ALL YOUR ENCOUNTERS HERE WILL BE AGAINST HOSTILE"
    0x56741f25b2c0 ---------A   01150  PRINT "VESSELS. YOU WILL FIRST BE REQUIRED TO SELECT A VESSEL"
    0x56741f25b480 ---------A   01160  PRINT "FROM ONE OF THREE TYPES, EACH WITH ITS OWN CHARACTERISTICS:"
    0x56741f25b4e0 ---------A   01170  PRINT
    0x56741f25b8f0 ---------A   01180  PRINT "    TYPE","SPEED","CARGO SPACE","PROTECTION"
    0x56741f25bd70 ---------A   01190  PRINT "   ------","-----","-----------","----------"
    0x56741f25c1f0 ---------A   01200  PRINT "1- SCOUT"," 10X","     16","    1"
    0x56741f25c670 ---------A   01210  PRINT "2- CRUISER","  4X","     24","    2"
    0x56741f25cb00 ---------A   01220  PRINT "3- BATTLESHIP","  2X","     30","    5"
    0x56741f25cb60 ---------A   01230  PRINT
    0x56741f25cd10 ---------A   01240  PRINT "SPEED IS GIVEN RELATIVE TO THE OTHER SHIPS."
    0x56741f25ce80 ---------A   01250  PRINT "CARGO SPACE IS IN UNITS OF SPACE ABOARD SHIP WHICH CAN BE"
    0x56741f25d010 ---------A   01260  PRINT "FILLED WITH WEAPONS."
    0x56741f25d180 ---------A   01270  PRINT "PROTECTION IS THE RELATIVE STRENGTH OF THE SHIP'S ARMOR"
    0x56741f25d2e0 ---------A   01280  PRINT "AND FORCE FIELDS."
    0x56741f25d3a0 ---------A   01290  GOSUB 3660
    0x56741f25d3f0 ---------A   01300  PRINT
    0x56741f25d5a0 ---------A   01310  PRINT "ONCE A SHIP HAS BEEN SELECTED, YOU WILL BE INSTRUCTED TO ARM"
    0x56741f25d720 ---------A   01320  PRINT "IT WITH WEAPONRY FROM THE FOLLOWING LIST:"
    0x56741f25d7d0 ---------A   01330  PRINT
    0x56741f25d990 ---------A   01340  PRINT "     TYPE                    CARGO SPACE    REL. STRENGTH"
    0x56741f25db50 ---------A   01350  PRINT "    ------                   -----------    -------------"
    0x56741f25dd00 ---------A   01360  PRINT "1- PHASER BANKS                   12                4"
    0x56741f25deb0 ---------A   01370  PRINT "2- ANTI-MATTER MISSILE             4               20"
    0x56741f25e270 ---------A   01380  PRINT "3- HYPERSPACE LANCE                4               16"
    0x56741f25e420 ---------A   01390  PRINT "4- PHOTON TORPEDO                  2               10"
    0x56741f25e5e0 ---------A   01400  PRINT "5- HYPERON NEUTRALIZATION FIELD   20                6"
    0x56741f25e640 ---------A   01410  PRINT
    0x56741f25e7f0 ---------A   01420  PRINT "WEAPONS #1 & #5 CAN BE FIRED 100 TIMES EACH; ALL OTHERS CAN"
    0x56741f25e930 ---------A   01430  PRINT "BE FIRED ONCE FOR EACH ON BOARD."
    0x56741f25e9e0 ---------A   01440  PRINT
    0x56741f25eb80 ---------A   01450  PRINT "A TYPICAL LOAD FOR A CRUISER MIGHT CONSIST OF:"
    0x56741f25ed20 ---------A   01460  PRINT "          1-#1 PHASER BANK          = 12"
    0x56741f25eec0 ---------A   01470  PRINT "          2-#3 HYPERSPACE LANCES    =  8"
    0x56741f25f060 ---------A   01480  PRINT "          2-#4 PHOTON TORPEDOES     =  4"
    0x56741f25f210 ---------A   01490  PRINT "                                  ---------"
    0x56741f25f390 ---------A   01500  PRINT "                              24 UNITS OF CARGO"
    0x56741f25f450 ---------A   01510  GOSUB 3660
    0x56741f25f600 ---------A   01520  PRINT " A WORD OF CAUTION: FIRING HIGH YIELD WEAPONS AT CLOSE (<100)"
    0x56741f25f7c0 ---------A   01530  PRINT "RANGE CAN BE DANGEROUS TO YOUR SHIP AND MINIMAL DAMAGE CAN"
    0x56741f25f970 ---------A   01540  PRINT "OCCUR AS FAR OUT AS 200 IN SOME CIRCUMSTANCES."
    0x56741f25f9d0 ---------A   01550  PRINT
    0x56741f25fb50 ---------A   01560  PRINT "RANGE IS GIVEN IN THOUSANDS OF KILOMETERS."
    0x56741f25fbf0 ---------A   01570  GOTO 1600
    0x56741f25ff80 ---------A T 01580  INPUT M$
    0x56741f2603a0 ---------A   01590  IF LEFT$(M$,1)="N" THEN 1730
    0x56741f260450 ---------A T 01600  PRINT
    0x56741f260590 ---------A   01610  PRINT "     MANEUVER CHART"
    0x56741f260700 ---------A   01620  PRINT "     --------------"
    0x56741f260880 ---------A   01630  PRINT " 1      FIRE PHASERS"
    0x56741f260a10 ---------A   01640  PRINT " 2      FIRE ANTI-MATTER MISSILE"
    0x56741f260b90 ---------A   01650  PRINT " 3      FIRE HYPERSPACE LANCE"
    0x56741f260d20 ---------A   01660  PRINT " 4      FIRE PHOTON TORPEDO"
    0x56741f260eb0 ---------A   01670  PRINT " 5      ACTIVE HYPERON NEUTRALIZATION FIELD"
    0x56741f261020 ---------A   01680  PRINT " 6      SELF-DESTRUCT"
    0x56741f2611a0 ---------A   01690  PRINT " 7      CHANGE VELOCITY"
    0x56741f261310 ---------A   01700  PRINT " 8      DISENGAGE"
    0x56741f2614a0 ---------A   01710  PRINT " 9      PROCEED"
    0x56741f261500 ---------A   01720  PRINT
    0x56741f261680 ---------A T 01730  PRINT "YOU HAVE A CHOICE OF THREE SYSTEMS TO PATROL."
    0x56741f261bf0 ---------A   01740  PRINT "1 - ORION"
    0x56741f261d60 ---------A   01750  PRINT "2 - DENEB"
    0x56741f261ee0 ---------A   01760  PRINT "3 - ARCTURUS"
    0x56741f262040 ---------A   01770  PRINT "SELECT A SYSTEM (1-3)";
    0x56741f262260 ---------A T 01780  INPUT S9
    0x56741f2624c0 ---------A   01790  IF S9=1 THEN 3220
    0x56741f262720 ---------A   01800  IF S9=2 THEN 3270
    0x56741f2627a0 ---------A   01810  GOTO 3320
    0x56741f262a70 ---------A T 01820  D0=0
    0x56741f262d40 ---------A   01830  D1=0
    0x56741f263010 ---------A   01840  N1=0
    0x56741f2632e0 ---------A   01850  N2=0
    0x56741f2635b0 ---------A   01860  N3=0
    0x56741f263880 ---------A   01870  N4=0
    0x56741f263b80 ---------A   01880  D=0
    0x56741f263ce0 ---------A   01890  PRINT "WHICH SPACECRAFT WOULD YOU LIKE (1-3)";
    0x56741f263f10 ---------A T 01900  INPUT S
    0x56741f2642b0 ---------A   01910  ON S GOTO 2640,2680,2720
    0x56741f264330 ---------A   01920  GOTO 1900
    0x56741f264710 ---------A T 01930  C=C0
    0x56741f264ab0 ---------A T 01940  PRINT "YOU HAVE";C;"UNITS OF CARGO SPACE TO FILL WITH WEAPONRY."
    0x56741f264c30 ---------A   01950  PRINT "CHOOSE A WEAPON AND THE AMOUNT YOU WISH";
    0x56741f265000 ---------A   01960  INPUT W,N
    0x56741f265520 ---------A   01970  ON W GOTO 2760,2850,2940,3030,3120
    0x56741f2655b0 ---------A   01980  GOTO 1940
    0x56741f265a00 ---------A T 01990  IF N*C1>C THEN 3370
    0x56741f265e90 ---------A   02000  C=C-N*C1
    0x56741f2662e0 ---------A   02010  ON W GOTO 2830,2920,3010,3100
    0x56741f266360 ---------A   02020  GOTO 3200
    0x56741f2665b0 ---------A T 02030  IF C>1 THEN 1940
    0x56741f266630 ---------A   02040  REM
    0x56741f266be0 ---------A   02050  S1=S0*RND(0)
    0x56741f2672e0 ---------A   02060  R=(3*RND(0)+5)*100
    0x56741f267330 ---------A   02070  PRINT
    0x56741f2675a0 ---------A T 02080  PRINT "RANGE TO TARGET:";R
    0x56741f267810 ---------A   02090  PRINT "RELATIVE VELOCITY:";S1
    0x56741f267970 ---------A   02100  PRINT "ACTION";
    0x56741f267bb0 ---------A T 02110  INPUT M
    0x56741f268310 ---------A   02120  ON M GOTO 2780,2870,2960,3050,3150,2500,2230,3590
    0x56741f268570 ---------A T 02130  IF R<500 THEN 2340
    0x56741f2687d0 ---------A T 02140  IF S1>0 THEN 2170
    0x56741f268d70 ---------A   02150  R=R+(S1*8.3)^1.25
    0x56741f268de0 ---------A   02160  GOTO 2180
    0x56741f269380 ---------A T 02170  R=R-(S1*8.3)^1.25
    0x56741f2695d0 ---------A T 02180  IF R>1500 THEN 3430
    0x56741f269830 ---------A   02190  IF R>0 THEN 2210
    0x56741f269a70 ---------A   02200  R=-R
    0x56741f269ae0 ---------A T 02210  PRINT
    0x56741f269b80 ---------A   02220  GOTO 2080
    0x56741f269f00 ---------A T 02230  INPUT S2
    0x56741f26a2e0 ---------A   02240  IF (S1+S2)>S0 THEN 3390
    0x56741f26a640 ---------A   02250  S1=S1+S2
    0x56741f26a6b0 ---------A   02260  GOTO 2080
    0x56741f26aea0 ---------A T 02270  F0=P1*(Z/R)^1.5
    0x56741f26af10 ---------A   02280  REM
    0x56741f26b7b0 ---------A   02290  D0=(2*F0+3*F0*RND(0))/5
    0x56741f26bb20 ---------A   02300  D=D+D0
    0x56741f26bd80 ---------A   02310  PRINT "SCANNERS REPORT ENEMY DAMAGE NOW:";D
    0x56741f26bfe0 ---------A   02320  IF D>99 THEN 3550
    0x56741f26c060 ---------A   02330  GOTO 2350
    0x56741f26c270 ---------A T 02340  D0=0
    0x56741f26c2e0 ---------A T 02350  REM
    0x56741f26ca70 ---------A   02360  K=E1+E2*RND(0)
    0x56741f26cae0 ---------A   02370  REM
    0x56741f26d740 ---------A   02380  E=E3+E4*RND(0)+5/P0*RND(0)
    0x56741f26d7b0 ---------A   02390  REM
    0x56741f26de50 ---------A   02400  F3=E*(K/R)^1.85
    0x56741f26e780 ---------A   02410  D2=(3*F3+3*F3*RND(0))/5.5
    0x56741f26eae0 ---------A   02420  D1=D1+D2
    0x56741f26f900 ---------A   02430  IF (Z*D0)/(R*500)>2.2 THEN 2460
    0x56741f270080 ---------A   02440  D3=D0*2/(R^2*P0)
    0x56741f270400 ---------A   02450  D1=D1+D3
    0x56741f270670 ---------A T 02460  PRINT "DAMAGE CONTROL REPORTS YOUR VESSEL DAMAGE AT:";D1
    0x56741f2708d0 ---------A   02470  IF D1>99 THEN 3570
    0x56741f270b30 ---------A   02480  IF D>99 THEN 3590
    0x56741f270bd0 ---------A   02490  GOTO 2140
    0x56741f270d60 ---------A T 02500  PRINT "SELF DESTRUCT FAILSAFE ACTIVATED!!"
    0x56741f270ed0 ---------A   02510  PRINT "INPUT 1 TO RELEASE FAILSAFE";
    0x56741f2710f0 ---------A   02520  INPUT U
    0x56741f271350 ---------A   02530  IF U=1 THEN 2550
    0x56741f2713f0 ---------A   02540  GOTO 2130
    0x56741f271550 ---------A T 02550  PRINT "SELF DESTRUCT ACCOMPLISHED."
    0x56741f2717d0 ---------A   02560  IF R>60 THEN 2590
    0x56741f271940 ---------A T 02570  PRINT "ENEMY VESSEL ALSO DESTROYED."
    0x56741f2719c0 ---------A   02580  GOTO 3590
    0x56741f271db0 ---------A T 02590  D4=3200/R
    0x56741f272100 ---------A   02600  D=D+D4
    0x56741f272370 ---------A   02610  IF D>99 THEN 2570
    0x56741f2726e0 ---------A   02620  PRINT "ENEMY VESSEL SURVIVES WITH";D;"DAMAGE."
    0x56741f272760 ---------A   02630  GOTO 3590
    0x56741f272970 ---------A T 02640  S0=10
    0x56741f272b80 ---------A   02650  C0=16
    0x56741f272d90 ---------A   02660  P0=1
    0x56741f272e00 ---------A   02670  GOTO 1930
    0x56741f273010 ---------A T 02680  S0=4
    0x56741f273220 ---------A   02690  C0=24
    0x56741f273430 ---------A   02700  P0=2
    0x56741f2734a0 ---------A   02710  GOTO 1930
    0x56741f2736b0 ---------A T 02720  S0=2
    0x56741f2738c0 ---------A   02730  C0=30
    0x56741f273ad0 ---------A   02740  P0=5
    0x56741f273b40 ---------A   02750  GOTO 1930
    0x56741f273d50 ---------A T 02760  C1=12
    0x56741f273dc0 ---------A   02770  GOTO 1990
    0x56741f273fd0 ---------A T 02780  P1=4
    0x56741f274220 ---------A   02790  IF N1=0 THEN 3000
    0x56741f274560 ---------A   02800  N1=N1-1
    0x56741f274770 ---------A   02810  Z=200
    0x56741f2747e0 ---------A   02820  GOTO 2270
    0x56741f274b30 ---------A T 02830  N1=N1+N
    0x56741f274ba0 ---------A   02840  GOTO 2030
    0x56741f274db0 ---------A T 02850  C1=4
    0x56741f274e20 ---------A   02860  GOTO 1990
    0x56741f275030 ---------A T 02870  P1=20
    0x56741f275280 ---------A   02880  IF N2=0 THEN 3470
    0x56741f2755c0 ---------A   02890  N2=N2-1
    0x56741f2757d0 ---------A   02900  Z=500
    0x56741f275840 ---------A   02910  GOTO 2270
    0x56741f275b90 ---------A T 02920  N2=N2+N
    0x56741f275c00 ---------A   02930  GOTO 2030
    0x56741f275e10 ---------A T 02940  C1=4
    0x56741f275e80 ---------A   02950  GOTO 1990
    0x56741f276090 ---------A T 02960  P1=16
    0x56741f2762e0 ---------A   02970  IF N3=0 THEN 3490
    0x56741f276620 ---------A   02980  N3=N3-1
    0x56741f276830 ---------A   02990  Z=550
    0x56741f2768a0 ---------A T 03000  GOTO 2270
    0x56741f276bf0 ---------A T 03010  N3=N3+N
    0x56741f276c60 ---------A   03020  GOTO 2030
    0x56741f276e70 ---------A T 03030  C1=2
    0x56741f276ee0 ---------A   03040  GOTO 1990
    0x56741f2770f0 ---------A T 03050  P1=10
    0x56741f277420 ---------A   03060  IF N4=O THEN 3510
    0x56741f277760 ---------A   03070  N4=N4-1
    0x56741f277970 ---------A   03080  Z=400
    0x56741f2779e0 ---------A   03090  GOTO 2270
    0x56741f277d30 ---------A T 03100  N4=N4+N
    0x56741f277da0 ---------A   03110  GOTO 2030
    0x56741f277fb0 ---------A T 03120  C1=.2
    0x56741f2781c0 ---------A   03130  N=100
    0x56741f278230 ---------A   03140  GOTO 1990
    0x56741f278440 ---------A T 03150  P1=6
    0x56741f278750 ---------A   03160  IF N5=0 THEN 3530
    0x56741f278a90 ---------A   03170  N5=N5-1
    0x56741f278ca0 ---------A   03180  Z=250
    0x56741f278d10 ---------A   03190  GOTO 2270
    0x56741f279060 ---------A T 03200  N5=N5+N
    0x56741f2790d0 ---------A   03210  GOTO 2030
    0x56741f2792e0 ---------A T 03220  E1=150
    0x56741f2794f0 ---------A   03230  E2=500
    0x56741f279700 ---------A   03240  E3=3
    0x56741f279910 ---------A   03250  E4=4
    0x56741f279980 ---------A   03260  GOTO 1820
    0x56741f279b90 ---------A T 03270  E1=200
    0x56741f279da0 ---------A   03280  E2=350
    0x56741f279fb0 ---------A   03290  E3=4
    0x56741f27a1c0 ---------A   03300  E4=3
    0x56741f27a230 ---------A   03310  GOTO 1820
    0x56741f27a440 ---------A T 03320  E1=150
    0x56741f27a650 ---------A   03330  E2=400
    0x56741f27a860 ---------A   03340  E3=5
    0x56741f27aa70 ---------A   03350  E4=2
    0x56741f27ab00 ---------A   03360  GOTO 1820
    0x56741f27ac60 ---------A T 03370  PRINT "NOT ENOUGH SPACE. RESELECT."
    0x56741f27ad00 ---------A   03380  GOTO 1940
    0x56741f27ae70 ---------A T 03390  PRINT "CHANGE BEYOND MAXIMUM POSSIBLE."
    0x56741f27afe0 ---------A   03400  PRINT "INCREASING TO MAXIMUM."
    0x56741f27b220 ---------A   03410  S1=S0
    0x56741f27b2b0 ---------A   03420  GOTO 2140
    0x56741f27b420 ---------A T 03430  PRINT "OUT OF SENSOR RANGE. AUTOMATIC DISENGAGE."
    0x56741f27b4b0 ---------A   03440  GOTO 3590
    0x56741f27b790 ---------A T 03450  PRINT "SELECT ANOTHER COURSE OF ACTION."
    0x56741f27b830 ---------A   03460  GOTO 2110
    0x56741f27b990 ---------A T 03470  PRINT " ALL ANTI-MATTER MISSLES EXPENDED."
    0x56741f27ba30 ---------A   03480  GOTO 3450
    0x56741f27bb90 ---------A T 03490  PRINT "ALL HYPERSPACE LANCES EXPENDED."
    0x56741f27bc30 ---------A   03500  GOTO 3450
    0x56741f27bd90 ---------A T 03510  PRINT "ALL PHOTON TORPEDO TUBES EMPTY."
    0x56741f27be30 ---------A   03520  GOTO 3450
    0x56741f27bf90 ---------A T 03530  PRINT "HYPERON NEUTRALIZATION FIELD DRAINED."
    0x56741f27c020 ---------A   03540  GOTO 3450
    0x56741f27c180 ---------A T 03550  PRINT "ENEMY VESSEL DESTROYED!"
    0x56741f27c220 ---------A   03560  GOTO 2350
    0x56741f27c390 ---------A T 03570  PRINT "YOUR VESSEL HAS BEEN DESTROYED!"
    0x56741f27c4f0 ---------A   03580  PRINT "ANOTHER BATTLE";
    0x56741f27c720 ---------A T 03590  INPUT R$
    0x56741f27cb60 ---------A   03600  IF LEFT$(R$,1)="Y" THEN 1780
    0x56741f27cbc0 ---------A   03610  PRINT
    0x56741f27cd00 ---------A   03620  PRINT "TRY AGAIN LATER!"
    0x56741f27cd80 ---------A   03630  PRINT
    0x56741f27ce30 ---------A   03640  GOTO 3650
    0x56741f27d3b0 ---------A T 03650  END
    0x56741f27d0b0 ---------B G 03660  LINE INPUT "ENTER 'RETURN' TO CONTINUE. ";XX$
    0x56741f27d2f0 ---------B   03670  PRINT CHR$(26)
    0x56741f2829f0 ---------B   03680  GOTO 03690
    0x56741f287500 ---------B T 03690  RETURN
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
int    C_int;                                     // Basic: C 
int    C0_int;                                    // Basic: C0 
int    C1_int;                                    // Basic: C1 
int    D_int;                                     // Basic: D 
int    D0_int;                                    // Basic: D0 
int    D1_int;                                    // Basic: D1 
int    D2_int;                                    // Basic: D2 
int    D3_int;                                    // Basic: D3 
int    D4_int;                                    // Basic: D4 
int    E_int;                                     // Basic: E 
int    E1_int;                                    // Basic: E1 
int    E2_int;                                    // Basic: E2 
int    E3_int;                                    // Basic: E3 
int    E4_int;                                    // Basic: E4 
int    F0_int;                                    // Basic: F0 
int    F3_int;                                    // Basic: F3 
char*  I_str;                                     // Basic: I$ 
int    K_int;                                     // Basic: K 
int    M_int;                                     // Basic: M 
char*  M_str;                                     // Basic: M$ 
int    N_int;                                     // Basic: N 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    N3_int;                                    // Basic: N3 
int    N4_int;                                    // Basic: N4 
int    N5_int;                                    // Basic: N5 
int    O_int;                                     // Basic: O 
int    P0_int;                                    // Basic: P0 
int    P1_int;                                    // Basic: P1 
int    R_int;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
int    S_int;                                     // Basic: S 
int    S0_int;                                    // Basic: S0 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    S9_int;                                    // Basic: S9 
int    U_int;                                     // Basic: U 
int    W_int;                                     // Basic: W 
char*  XX_str;                                    // Basic: XX$ 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03660();

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

void Routine_03660(){
    // 03660 LINE INPUT "ENTER 'RETURN' TO CONTINUE. ";XX$
    // Start of Basic INPUT statement 03660
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ENTER 'RETURN' TO CONTINUE. ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&XX_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03660
    // 03670 PRINT CHR$(26)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(26));strcat(buf,"\n");fputs(buf,fh); };
    // 03680 GOTO 03690
    goto Lbl_03690;

  Lbl_03690:
    // 03690 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT CHR$(26);TAB(24);"DEEPSPACE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(26));b2c_TAB(buf,24);strcat(buf,"DEEPSPACE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(20);"CREATIVE COMPUTING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,20);strcat(buf,"CREATIVE COMPUTING");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,18);strcat(buf,"MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "THIS IS DEEPSPACE, A TACTICAL SIMULATION OF SHIP TO SHIP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS DEEPSPACE, A TACTICAL SIMULATION OF SHIP TO SHIP");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "COMBAT IN DEEP SPACE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMBAT IN DEEP SPACE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "DO YOU WISH INSTRUCTIONS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WISH INSTRUCTIONS");fputs(buf,fh); };
    // 01090 INPUT I$
    // Start of Basic INPUT statement 01090
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&I_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01090
    // 01100 IF LEFT$(I$,1)="N" THEN 1580
    if(LEFT$(I_str,1)=='N')goto Lbl_01580;
    // 01110 PRINT CHR$(26)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(26));strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "YOU ARE ONE OF A GROUP OF CAPTAINS ASSIGNED TO PATROL A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE ONE OF A GROUP OF CAPTAINS ASSIGNED TO PATROL A");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "SECTION OF YOUR STAR EMPIRE'S BORDER AGAINST HOSTILE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SECTION OF YOUR STAR EMPIRE'S BORDER AGAINST HOSTILE");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "ALIENS. ALL YOUR ENCOUNTERS HERE WILL BE AGAINST HOSTILE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ALIENS. ALL YOUR ENCOUNTERS HERE WILL BE AGAINST HOSTILE");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "VESSELS. YOU WILL FIRST BE REQUIRED TO SELECT A VESSEL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VESSELS. YOU WILL FIRST BE REQUIRED TO SELECT A VESSEL");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "FROM ONE OF THREE TYPES, EACH WITH ITS OWN CHARACTERISTICS:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FROM ONE OF THREE TYPES, EACH WITH ITS OWN CHARACTERISTICS:");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT "    TYPE","SPEED","CARGO SPACE","PROTECTION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TYPE");strcat(buf,"SPEED");strcat(buf,"CARGO SPACE");strcat(buf,"PROTECTION");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT "   ------","-----","-----------","----------"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   ------");strcat(buf,"-----");strcat(buf,"-----------");strcat(buf,"----------");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "1- SCOUT"," 10X","     16","    1"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1- SCOUT");strcat(buf," 10X");strcat(buf,"     16");strcat(buf,"    1");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "2- CRUISER","  4X","     24","    2"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2- CRUISER");strcat(buf,"  4X");strcat(buf,"     24");strcat(buf,"    2");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "3- BATTLESHIP","  2X","     30","    5"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"3- BATTLESHIP");strcat(buf,"  2X");strcat(buf,"     30");strcat(buf,"    5");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "SPEED IS GIVEN RELATIVE TO THE OTHER SHIPS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SPEED IS GIVEN RELATIVE TO THE OTHER SHIPS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "CARGO SPACE IS IN UNITS OF SPACE ABOARD SHIP WHICH CAN BE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CARGO SPACE IS IN UNITS OF SPACE ABOARD SHIP WHICH CAN BE");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "FILLED WITH WEAPONS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FILLED WITH WEAPONS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "PROTECTION IS THE RELATIVE STRENGTH OF THE SHIP'S ARMOR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PROTECTION IS THE RELATIVE STRENGTH OF THE SHIP'S ARMOR");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT "AND FORCE FIELDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND FORCE FIELDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 GOSUB 3660
    Routine_03660();
    // 01300 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01310 PRINT "ONCE A SHIP HAS BEEN SELECTED, YOU WILL BE INSTRUCTED TO ARM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONCE A SHIP HAS BEEN SELECTED, YOU WILL BE INSTRUCTED TO ARM");strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT "IT WITH WEAPONRY FROM THE FOLLOWING LIST:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT WITH WEAPONRY FROM THE FOLLOWING LIST:");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT "     TYPE                    CARGO SPACE    REL. STRENGTH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     TYPE                    CARGO SPACE    REL. STRENGTH");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT "    ------                   -----------    -------------"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    ------                   -----------    -------------");strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT "1- PHASER BANKS                   12                4"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1- PHASER BANKS                   12                4");strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT "2- ANTI-MATTER MISSILE             4               20"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2- ANTI-MATTER MISSILE             4               20");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT "3- HYPERSPACE LANCE                4               16"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"3- HYPERSPACE LANCE                4               16");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 PRINT "4- PHOTON TORPEDO                  2               10"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"4- PHOTON TORPEDO                  2               10");strcat(buf,"\n");fputs(buf,fh); };
    // 01400 PRINT "5- HYPERON NEUTRALIZATION FIELD   20                6"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"5- HYPERON NEUTRALIZATION FIELD   20                6");strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT "WEAPONS #1 & #5 CAN BE FIRED 100 TIMES EACH; ALL OTHERS CAN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WEAPONS #1 & #5 CAN BE FIRED 100 TIMES EACH; ALL OTHERS CAN");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT "BE FIRED ONCE FOR EACH ON BOARD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BE FIRED ONCE FOR EACH ON BOARD.");strcat(buf,"\n");fputs(buf,fh); };
    // 01440 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01450 PRINT "A TYPICAL LOAD FOR A CRUISER MIGHT CONSIST OF:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A TYPICAL LOAD FOR A CRUISER MIGHT CONSIST OF:");strcat(buf,"\n");fputs(buf,fh); };
    // 01460 PRINT "          1-#1 PHASER BANK          = 12"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"          1-#1 PHASER BANK          = 12");strcat(buf,"\n");fputs(buf,fh); };
    // 01470 PRINT "          2-#3 HYPERSPACE LANCES    =  8"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"          2-#3 HYPERSPACE LANCES    =  8");strcat(buf,"\n");fputs(buf,fh); };
    // 01480 PRINT "          2-#4 PHOTON TORPEDOES     =  4"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"          2-#4 PHOTON TORPEDOES     =  4");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 PRINT "                                  ---------"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                                  ---------");strcat(buf,"\n");fputs(buf,fh); };
    // 01500 PRINT "                              24 UNITS OF CARGO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                              24 UNITS OF CARGO");strcat(buf,"\n");fputs(buf,fh); };
    // 01510 GOSUB 3660
    Routine_03660();
    // 01520 PRINT " A WORD OF CAUTION: FIRING HIGH YIELD WEAPONS AT CLOSE (<100)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," A WORD OF CAUTION: FIRING HIGH YIELD WEAPONS AT CLOSE (<100)");strcat(buf,"\n");fputs(buf,fh); };
    // 01530 PRINT "RANGE CAN BE DANGEROUS TO YOUR SHIP AND MINIMAL DAMAGE CAN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RANGE CAN BE DANGEROUS TO YOUR SHIP AND MINIMAL DAMAGE CAN");strcat(buf,"\n");fputs(buf,fh); };
    // 01540 PRINT "OCCUR AS FAR OUT AS 200 IN SOME CIRCUMSTANCES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OCCUR AS FAR OUT AS 200 IN SOME CIRCUMSTANCES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01560 PRINT "RANGE IS GIVEN IN THOUSANDS OF KILOMETERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RANGE IS GIVEN IN THOUSANDS OF KILOMETERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01570 GOTO 1600
    goto Lbl_01600;

  Lbl_01580:
    // 01580 INPUT M$
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
                (err += b2c_strtos(&M_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01580
    // 01590 IF LEFT$(M$,1)="N" THEN 1730
    if(LEFT$(M_str,1)=='N')goto Lbl_01730;

  Lbl_01600:
    // 01600 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01610 PRINT "     MANEUVER CHART"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     MANEUVER CHART");strcat(buf,"\n");fputs(buf,fh); };
    // 01620 PRINT "     --------------"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     --------------");strcat(buf,"\n");fputs(buf,fh); };
    // 01630 PRINT " 1      FIRE PHASERS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 1      FIRE PHASERS");strcat(buf,"\n");fputs(buf,fh); };
    // 01640 PRINT " 2      FIRE ANTI-MATTER MISSILE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 2      FIRE ANTI-MATTER MISSILE");strcat(buf,"\n");fputs(buf,fh); };
    // 01650 PRINT " 3      FIRE HYPERSPACE LANCE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 3      FIRE HYPERSPACE LANCE");strcat(buf,"\n");fputs(buf,fh); };
    // 01660 PRINT " 4      FIRE PHOTON TORPEDO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 4      FIRE PHOTON TORPEDO");strcat(buf,"\n");fputs(buf,fh); };
    // 01670 PRINT " 5      ACTIVE HYPERON NEUTRALIZATION FIELD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 5      ACTIVE HYPERON NEUTRALIZATION FIELD");strcat(buf,"\n");fputs(buf,fh); };
    // 01680 PRINT " 6      SELF-DESTRUCT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 6      SELF-DESTRUCT");strcat(buf,"\n");fputs(buf,fh); };
    // 01690 PRINT " 7      CHANGE VELOCITY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 7      CHANGE VELOCITY");strcat(buf,"\n");fputs(buf,fh); };
    // 01700 PRINT " 8      DISENGAGE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 8      DISENGAGE");strcat(buf,"\n");fputs(buf,fh); };
    // 01710 PRINT " 9      PROCEED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 9      PROCEED");strcat(buf,"\n");fputs(buf,fh); };
    // 01720 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01730:
    // 01730 PRINT "YOU HAVE A CHOICE OF THREE SYSTEMS TO PATROL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE A CHOICE OF THREE SYSTEMS TO PATROL.");strcat(buf,"\n");fputs(buf,fh); };
    // 01740 PRINT "1 - ORION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1 - ORION");strcat(buf,"\n");fputs(buf,fh); };
    // 01750 PRINT "2 - DENEB"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2 - DENEB");strcat(buf,"\n");fputs(buf,fh); };
    // 01760 PRINT "3 - ARCTURUS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"3 - ARCTURUS");strcat(buf,"\n");fputs(buf,fh); };
    // 01770 PRINT "SELECT A SYSTEM (1-3)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SELECT A SYSTEM (1-3)");fputs(buf,fh); };

  Lbl_01780:
    // 01780 INPUT S9
    // Start of Basic INPUT statement 01780
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01780
    // 01790 IF S9=1 THEN 3220
    if(S9_int==1)goto Lbl_03220;
    // 01800 IF S9=2 THEN 3270
    if(S9_int==2)goto Lbl_03270;
    // 01810 GOTO 3320
    goto Lbl_03320;

  Lbl_01820:
    // 01820 D0=0
    D0_int = 0;
    // 01830 D1=0
    D1_int = 0;
    // 01840 N1=0
    N1_int = 0;
    // 01850 N2=0
    N2_int = 0;
    // 01860 N3=0
    N3_int = 0;
    // 01870 N4=0
    N4_int = 0;
    // 01880 D=0
    D_int = 0;
    // 01890 PRINT "WHICH SPACECRAFT WOULD YOU LIKE (1-3)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHICH SPACECRAFT WOULD YOU LIKE (1-3)");fputs(buf,fh); };

  Lbl_01900:
    // 01900 INPUT S
    // Start of Basic INPUT statement 01900
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01900
    // 01910 ON S GOTO 2640,2680,2720
    switch((int)(S_int)){
        case 1: goto Lbl_02640;
        case 2: goto Lbl_02680;
        case 3: goto Lbl_02720;
        default: break; 
    };
    // 01920 GOTO 1900
    goto Lbl_01900;

  Lbl_01930:
    // 01930 C=C0
    C_int = C0_int;

  Lbl_01940:
    // 01940 PRINT "YOU HAVE";C;"UNITS OF CARGO SPACE TO FILL WITH WEAPONRY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE"); b2c_INT(buf,C_int);strcat(buf,"UNITS OF CARGO SPACE TO FILL WITH WEAPONRY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01950 PRINT "CHOOSE A WEAPON AND THE AMOUNT YOU WISH";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHOOSE A WEAPON AND THE AMOUNT YOU WISH");fputs(buf,fh); };
    // 01960 INPUT W,N
    // Start of Basic INPUT statement 01960
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&W_int,args,0)) ||
                (err += b2c_strtoi(&N_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01960
    // 01970 ON W GOTO 2760,2850,2940,3030,3120
    switch((int)(W_int)){
        case 1: goto Lbl_02760;
        case 2: goto Lbl_02850;
        case 3: goto Lbl_02940;
        case 4: goto Lbl_03030;
        case 5: goto Lbl_03120;
        default: break; 
    };
    // 01980 GOTO 1940
    goto Lbl_01940;

  Lbl_01990:
    // 01990 IF N*C1>C THEN 3370
    if(N_int*C1_int>C_int)goto Lbl_03370;
    // 02000 C=C-N*C1
    C_int = C_int-N_int*C1_int;
    // 02010 ON W GOTO 2830,2920,3010,3100
    switch((int)(W_int)){
        case 1: goto Lbl_02830;
        case 2: goto Lbl_02920;
        case 3: goto Lbl_03010;
        case 4: goto Lbl_03100;
        default: break; 
    };
    // 02020 GOTO 3200
    goto Lbl_03200;

  Lbl_02030:
    // 02030 IF C>1 THEN 1940
    if(C_int>1)goto Lbl_01940;
    // 02040 REM
    // 02050 S1=S0*RND(0)
    S1_int = S0_int*RND(0);
    // 02060 R=(3*RND(0)+5)*100
    R_int = (3*RND(0)+5)*100;
    // 02070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02080:
    // 02080 PRINT "RANGE TO TARGET:";R
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RANGE TO TARGET:"); b2c_INT(buf,R_int);strcat(buf,"\n");fputs(buf,fh); };
    // 02090 PRINT "RELATIVE VELOCITY:";S1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RELATIVE VELOCITY:"); b2c_INT(buf,S1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 02100 PRINT "ACTION";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ACTION");fputs(buf,fh); };

  Lbl_02110:
    // 02110 INPUT M
    // Start of Basic INPUT statement 02110
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02110
    // 02120 ON M GOTO 2780,2870,2960,3050,3150,2500,2230,3590
    switch((int)(M_int)){
        case 1: goto Lbl_02780;
        case 2: goto Lbl_02870;
        case 3: goto Lbl_02960;
        case 4: goto Lbl_03050;
        case 5: goto Lbl_03150;
        case 6: goto Lbl_02500;
        case 7: goto Lbl_02230;
        case 8: goto Lbl_03590;
        default: break; 
    };

  Lbl_02130:
    // 02130 IF R<500 THEN 2340
    if(R_int<500)goto Lbl_02340;

  Lbl_02140:
    // 02140 IF S1>0 THEN 2170
    if(S1_int>0)goto Lbl_02170;
    // 02150 R=R+(S1*8.3)^1.25
    R_int = R_int+FPower((S1_int*8.3),1.25);
    // 02160 GOTO 2180
    goto Lbl_02180;

  Lbl_02170:
    // 02170 R=R-(S1*8.3)^1.25
    R_int = R_int-FPower((S1_int*8.3),1.25);

  Lbl_02180:
    // 02180 IF R>1500 THEN 3430
    if(R_int>1500)goto Lbl_03430;
    // 02190 IF R>0 THEN 2210
    if(R_int>0)goto Lbl_02210;
    // 02200 R=-R
    R_int = R_int;

  Lbl_02210:
    // 02210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02220 GOTO 2080
    goto Lbl_02080;

  Lbl_02230:
    // 02230 INPUT S2
    // Start of Basic INPUT statement 02230
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S2_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02230
    // 02240 IF (S1+S2)>S0 THEN 3390
    if((S1_int+S2_int)>S0_int)goto Lbl_03390;
    // 02250 S1=S1+S2
    S1_int = S1_int+S2_int;
    // 02260 GOTO 2080
    goto Lbl_02080;

  Lbl_02270:
    // 02270 F0=P1*(Z/R)^1.5
    F0_int = P1_int*FPower((Z_int/R_int),1.5);
    // 02280 REM
    // 02290 D0=(2*F0+3*F0*RND(0))/5
    D0_int = (2*F0_int+3*F0_int*RND(0))/5;
    // 02300 D=D+D0
    D_int = D_int+D0_int;
    // 02310 PRINT "SCANNERS REPORT ENEMY DAMAGE NOW:";D
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SCANNERS REPORT ENEMY DAMAGE NOW:"); b2c_INT(buf,D_int);strcat(buf,"\n");fputs(buf,fh); };
    // 02320 IF D>99 THEN 3550
    if(D_int>99)goto Lbl_03550;
    // 02330 GOTO 2350
    goto Lbl_02350;

  Lbl_02340:
    // 02340 D0=0
    D0_int = 0;

  Lbl_02350:
    // 02350 REM
    // 02360 K=E1+E2*RND(0)
    K_int = E1_int+E2_int*RND(0);
    // 02370 REM
    // 02380 E=E3+E4*RND(0)+5/P0*RND(0)
    E_int = E3_int+E4_int*RND(0)+5/P0_int*RND(0);
    // 02390 REM
    // 02400 F3=E*(K/R)^1.85
    F3_int = E_int*FPower((K_int/R_int),1.85);
    // 02410 D2=(3*F3+3*F3*RND(0))/5.5
    D2_int = (3*F3_int+3*F3_int*RND(0))/5.5;
    // 02420 D1=D1+D2
    D1_int = D1_int+D2_int;
    // 02430 IF (Z*D0)/(R*500)>2.2 THEN 2460
    if((Z_int*D0_int)/(R_int*500)>2.2)goto Lbl_02460;
    // 02440 D3=D0*2/(R^2*P0)
    D3_int = D0_int*2/(IPower(R_int,2)*P0_int);
    // 02450 D1=D1+D3
    D1_int = D1_int+D3_int;

  Lbl_02460:
    // 02460 PRINT "DAMAGE CONTROL REPORTS YOUR VESSEL DAMAGE AT:";D1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DAMAGE CONTROL REPORTS YOUR VESSEL DAMAGE AT:"); b2c_INT(buf,D1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 02470 IF D1>99 THEN 3570
    if(D1_int>99)goto Lbl_03570;
    // 02480 IF D>99 THEN 3590
    if(D_int>99)goto Lbl_03590;
    // 02490 GOTO 2140
    goto Lbl_02140;

  Lbl_02500:
    // 02500 PRINT "SELF DESTRUCT FAILSAFE ACTIVATED!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SELF DESTRUCT FAILSAFE ACTIVATED!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02510 PRINT "INPUT 1 TO RELEASE FAILSAFE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INPUT 1 TO RELEASE FAILSAFE");fputs(buf,fh); };
    // 02520 INPUT U
    // Start of Basic INPUT statement 02520
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&U_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02520
    // 02530 IF U=1 THEN 2550
    if(U_int==1)goto Lbl_02550;
    // 02540 GOTO 2130
    goto Lbl_02130;

  Lbl_02550:
    // 02550 PRINT "SELF DESTRUCT ACCOMPLISHED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SELF DESTRUCT ACCOMPLISHED.");strcat(buf,"\n");fputs(buf,fh); };
    // 02560 IF R>60 THEN 2590
    if(R_int>60)goto Lbl_02590;

  Lbl_02570:
    // 02570 PRINT "ENEMY VESSEL ALSO DESTROYED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENEMY VESSEL ALSO DESTROYED.");strcat(buf,"\n");fputs(buf,fh); };
    // 02580 GOTO 3590
    goto Lbl_03590;

  Lbl_02590:
    // 02590 D4=3200/R
    D4_int = 3200/R_int;
    // 02600 D=D+D4
    D_int = D_int+D4_int;
    // 02610 IF D>99 THEN 2570
    if(D_int>99)goto Lbl_02570;
    // 02620 PRINT "ENEMY VESSEL SURVIVES WITH";D;"DAMAGE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENEMY VESSEL SURVIVES WITH"); b2c_INT(buf,D_int);strcat(buf,"DAMAGE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02630 GOTO 3590
    goto Lbl_03590;

  Lbl_02640:
    // 02640 S0=10
    S0_int = 10;
    // 02650 C0=16
    C0_int = 16;
    // 02660 P0=1
    P0_int = 1;
    // 02670 GOTO 1930
    goto Lbl_01930;

  Lbl_02680:
    // 02680 S0=4
    S0_int = 4;
    // 02690 C0=24
    C0_int = 24;
    // 02700 P0=2
    P0_int = 2;
    // 02710 GOTO 1930
    goto Lbl_01930;

  Lbl_02720:
    // 02720 S0=2
    S0_int = 2;
    // 02730 C0=30
    C0_int = 30;
    // 02740 P0=5
    P0_int = 5;
    // 02750 GOTO 1930
    goto Lbl_01930;

  Lbl_02760:
    // 02760 C1=12
    C1_int = 12;
    // 02770 GOTO 1990
    goto Lbl_01990;

  Lbl_02780:
    // 02780 P1=4
    P1_int = 4;
    // 02790 IF N1=0 THEN 3000
    if(N1_int==0)goto Lbl_03000;
    // 02800 N1=N1-1
    N1_int = N1_int-1;
    // 02810 Z=200
    Z_int = 200;
    // 02820 GOTO 2270
    goto Lbl_02270;

  Lbl_02830:
    // 02830 N1=N1+N
    N1_int = N1_int+N_int;
    // 02840 GOTO 2030
    goto Lbl_02030;

  Lbl_02850:
    // 02850 C1=4
    C1_int = 4;
    // 02860 GOTO 1990
    goto Lbl_01990;

  Lbl_02870:
    // 02870 P1=20
    P1_int = 20;
    // 02880 IF N2=0 THEN 3470
    if(N2_int==0)goto Lbl_03470;
    // 02890 N2=N2-1
    N2_int = N2_int-1;
    // 02900 Z=500
    Z_int = 500;
    // 02910 GOTO 2270
    goto Lbl_02270;

  Lbl_02920:
    // 02920 N2=N2+N
    N2_int = N2_int+N_int;
    // 02930 GOTO 2030
    goto Lbl_02030;

  Lbl_02940:
    // 02940 C1=4
    C1_int = 4;
    // 02950 GOTO 1990
    goto Lbl_01990;

  Lbl_02960:
    // 02960 P1=16
    P1_int = 16;
    // 02970 IF N3=0 THEN 3490
    if(N3_int==0)goto Lbl_03490;
    // 02980 N3=N3-1
    N3_int = N3_int-1;
    // 02990 Z=550
    Z_int = 550;

  Lbl_03000:
    // 03000 GOTO 2270
    goto Lbl_02270;

  Lbl_03010:
    // 03010 N3=N3+N
    N3_int = N3_int+N_int;
    // 03020 GOTO 2030
    goto Lbl_02030;

  Lbl_03030:
    // 03030 C1=2
    C1_int = 2;
    // 03040 GOTO 1990
    goto Lbl_01990;

  Lbl_03050:
    // 03050 P1=10
    P1_int = 10;
    // 03060 IF N4=O THEN 3510
    if(N4_int==O_int)goto Lbl_03510;
    // 03070 N4=N4-1
    N4_int = N4_int-1;
    // 03080 Z=400
    Z_int = 400;
    // 03090 GOTO 2270
    goto Lbl_02270;

  Lbl_03100:
    // 03100 N4=N4+N
    N4_int = N4_int+N_int;
    // 03110 GOTO 2030
    goto Lbl_02030;

  Lbl_03120:
    // 03120 C1=.2
    C1_int = 0.2;
    // 03130 N=100
    N_int = 100;
    // 03140 GOTO 1990
    goto Lbl_01990;

  Lbl_03150:
    // 03150 P1=6
    P1_int = 6;
    // 03160 IF N5=0 THEN 3530
    if(N5_int==0)goto Lbl_03530;
    // 03170 N5=N5-1
    N5_int = N5_int-1;
    // 03180 Z=250
    Z_int = 250;
    // 03190 GOTO 2270
    goto Lbl_02270;

  Lbl_03200:
    // 03200 N5=N5+N
    N5_int = N5_int+N_int;
    // 03210 GOTO 2030
    goto Lbl_02030;

  Lbl_03220:
    // 03220 E1=150
    E1_int = 150;
    // 03230 E2=500
    E2_int = 500;
    // 03240 E3=3
    E3_int = 3;
    // 03250 E4=4
    E4_int = 4;
    // 03260 GOTO 1820
    goto Lbl_01820;

  Lbl_03270:
    // 03270 E1=200
    E1_int = 200;
    // 03280 E2=350
    E2_int = 350;
    // 03290 E3=4
    E3_int = 4;
    // 03300 E4=3
    E4_int = 3;
    // 03310 GOTO 1820
    goto Lbl_01820;

  Lbl_03320:
    // 03320 E1=150
    E1_int = 150;
    // 03330 E2=400
    E2_int = 400;
    // 03340 E3=5
    E3_int = 5;
    // 03350 E4=2
    E4_int = 2;
    // 03360 GOTO 1820
    goto Lbl_01820;

  Lbl_03370:
    // 03370 PRINT "NOT ENOUGH SPACE. RESELECT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOT ENOUGH SPACE. RESELECT.");strcat(buf,"\n");fputs(buf,fh); };
    // 03380 GOTO 1940
    goto Lbl_01940;

  Lbl_03390:
    // 03390 PRINT "CHANGE BEYOND MAXIMUM POSSIBLE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHANGE BEYOND MAXIMUM POSSIBLE.");strcat(buf,"\n");fputs(buf,fh); };
    // 03400 PRINT "INCREASING TO MAXIMUM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INCREASING TO MAXIMUM.");strcat(buf,"\n");fputs(buf,fh); };
    // 03410 S1=S0
    S1_int = S0_int;
    // 03420 GOTO 2140
    goto Lbl_02140;

  Lbl_03430:
    // 03430 PRINT "OUT OF SENSOR RANGE. AUTOMATIC DISENGAGE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OUT OF SENSOR RANGE. AUTOMATIC DISENGAGE.");strcat(buf,"\n");fputs(buf,fh); };
    // 03440 GOTO 3590
    goto Lbl_03590;

  Lbl_03450:
    // 03450 PRINT "SELECT ANOTHER COURSE OF ACTION."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SELECT ANOTHER COURSE OF ACTION.");strcat(buf,"\n");fputs(buf,fh); };
    // 03460 GOTO 2110
    goto Lbl_02110;

  Lbl_03470:
    // 03470 PRINT " ALL ANTI-MATTER MISSLES EXPENDED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ALL ANTI-MATTER MISSLES EXPENDED.");strcat(buf,"\n");fputs(buf,fh); };
    // 03480 GOTO 3450
    goto Lbl_03450;

  Lbl_03490:
    // 03490 PRINT "ALL HYPERSPACE LANCES EXPENDED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ALL HYPERSPACE LANCES EXPENDED.");strcat(buf,"\n");fputs(buf,fh); };
    // 03500 GOTO 3450
    goto Lbl_03450;

  Lbl_03510:
    // 03510 PRINT "ALL PHOTON TORPEDO TUBES EMPTY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ALL PHOTON TORPEDO TUBES EMPTY.");strcat(buf,"\n");fputs(buf,fh); };
    // 03520 GOTO 3450
    goto Lbl_03450;

  Lbl_03530:
    // 03530 PRINT "HYPERON NEUTRALIZATION FIELD DRAINED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HYPERON NEUTRALIZATION FIELD DRAINED.");strcat(buf,"\n");fputs(buf,fh); };
    // 03540 GOTO 3450
    goto Lbl_03450;

  Lbl_03550:
    // 03550 PRINT "ENEMY VESSEL DESTROYED!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENEMY VESSEL DESTROYED!");strcat(buf,"\n");fputs(buf,fh); };
    // 03560 GOTO 2350
    goto Lbl_02350;

  Lbl_03570:
    // 03570 PRINT "YOUR VESSEL HAS BEEN DESTROYED!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR VESSEL HAS BEEN DESTROYED!");strcat(buf,"\n");fputs(buf,fh); };
    // 03580 PRINT "ANOTHER BATTLE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ANOTHER BATTLE");fputs(buf,fh); };

  Lbl_03590:
    // 03590 INPUT R$
    // Start of Basic INPUT statement 03590
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&R_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03590
    // 03600 IF LEFT$(R$,1)="Y" THEN 1780
    if(LEFT$(R_str,1)=='Y')goto Lbl_01780;
    // 03610 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03620 PRINT "TRY AGAIN LATER!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY AGAIN LATER!");strcat(buf,"\n");fputs(buf,fh); };
    // 03630 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03640 GOTO 3650
    goto Lbl_03650;

  Lbl_03650:
    // 03650 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
