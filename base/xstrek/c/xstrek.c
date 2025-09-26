/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/xstrek/basic/xstrek.bas: 
 *
                   +-------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |       | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |       | |
        Address    v       v v Original BASIC statement
    -------------- --------- - ------------------------------------------------------------------------------
    0x557e08040d00 ---------A   01000   REM (VERSION "STREK7", 1/12/75 RCL)
    0x557e08040da0 ---------A   01010   REM
    0x557e08040e20 ---------A   01020   REM
    0x557e08040f10 ---------A   01030   REM ***         *** STAR TREK ***       ***
    0x557e08040ff0 ---------A   01040   REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    0x557e08041100 ---------A   01050   REM *** AS SEEN ON THE STAR TREK TV SHOW.
    0x557e080411e0 ---------A   01060   REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    0x557e080412c0 ---------A   01070   REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    0x557e080413a0 ---------A   01080   REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY
    0x557e08041500 ---------A   01090   REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974,
    0x557e080415c0 ---------A   01100   REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    0x557e08041650 ---------A   01110   REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    0x557e080416d0 ---------A   01120   REM *** ADDRESS TO:   R.C.LEEDOM
    0x557e080417b0 ---------A   01130   REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    0x557e08041880 ---------A   01140   REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    0x557e08041900 ---------A   01150   RANDOMIZE
    0x557e08041bd0 ---------A   01160   PRINT TAB(15); "* * * STAR TREK * * *"
    0x557e08045fc0 ---------A   01170   PRINT
    0x557e08046120 ---------A   01180   PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    0x557e08046280 ---------A   01190   INPUT A$
    0x557e08046440 ---------A   01200   IF A$ <> "YES" GOTO 1280
    0x557e080465e0 ---------A   01210   PRINT "PLEASE WAIT  . . .";
    0x557e08046670 ---------A   01220   CHAIN "DSK:STINST.BAS"
    0x557e080466f0 ---------A   01230   PRINT
    0x557e08046760 --------CA   01240   REM
    0x557e08046850 --------CA   01250   REM ===============================================================
    0x557e080468d0 --------CA   01260   REM
    0x557e08046970 --------CA T 01270   REM  PROGRAM BEGINS HERE .....
    0x557e08046b70 --------CA T 01280   DIM Q$(8)
    0x557e08046e00 --------CA   01290   FOR I = 1 TO 8
    0x557e080470c0 --------CA   01300       Q$(I) = SPACE$(24)
    0x557e08047170 --------CA   01310   NEXT I
    0x557e08047c30 --------CA   01320   DIM G(8, 8), C(9, 2), K(3, 3), N(3), Z(8, 8)
    0x557e08048490 --------CA   01330   LET T = INT(RND(1) * 20 + 20) * 100
    0x557e08048760 --------CA   01340   LET P1 = 3.14159 / 4
    0x557e08048910 --------CA   01350   LET T0 = T
    0x557e08048b00 --------CA   01360   LET T9 = 30
    0x557e08048cf0 --------CA   01370   LET D0 = 0
    0x557e08048ee0 --------CA   01380   LET E0 = 3000
    0x557e08049090 --------CA   01390   LET E = E0
    0x557e08049280 --------CA   01400   LET P = 10
    0x557e08049430 --------CA   01410   LET P0 = P
    0x557e08049620 --------CA   01420   LET S9 = 200
    0x557e08049840 --------CA   01430   LET S = 0
    0x557e0804a2d0 --------CA   01440   DEF FND (D) = SQR((K(I, 1) - S1) ^ 2 + (K(I, 2) - S2) ^ 2)
    0x557e0804a360 --------CA   01450   REM
    0x557e0804a450 --------CA   01460   REM ===============================================================
    0x557e0804a4d0 --------CA   01470   REM
    0x557e0804a580 --------CA   01480   REM INITIALIZE INTERPRISE'S POSITION
    0x557e0804aa20 --------CA   01490   LET Q1 = INT(RND(1) * 8 + 1)
    0x557e0804aea0 --------CA   01500   LET Q2 = INT(RND(1) * 8 + 1)
    0x557e0804b2a0 --------CA   01510   LET S1 = INT(RND(1) * 8 + 1)
    0x557e0804b690 --------CA   01520   LET S2 = INT(RND(1) * 8 + 1)
    0x557e0804b7c0 --------CA   01530   MAT C = ZER
    0x557e0804bb80 --------CA   01540   LET C(4, 1) = -1
    0x557e0804be40 --------CA   01550   LET C(3, 1) = -1
    0x557e0804c100 --------CA   01560   LET C(2, 1) = -1
    0x557e0804c3c0 --------CA   01570   LET C(4, 2) = -1
    0x557e0804c680 --------CA   01580   LET C(5, 2) = -1
    0x557e0804c930 --------CA   01590   LET C(6, 2) = -1
    0x557e0804cbe0 --------CA   01600   LET C(1, 2) = 1
    0x557e0804ce90 --------CA   01610   LET C(2, 2) = 1
    0x557e0804d140 --------CA   01620   LET C(6, 1) = 1
    0x557e0804d3f0 --------CA   01630   LET C(7, 1) = 1
    0x557e0804d6a0 --------CA   01640   LET C(8, 1) = 1
    0x557e0804dd60 --------CA   01650   LET C(8, 2) = 1
    0x557e0804e010 --------CA   01660   LET C(9, 2) = 1
    0x557e0804e200 --------CA   01670   DIM D(8)
    0x557e0804e410 --------CA   01680   FOR I = 1 TO 8
    0x557e0804e5f0 --------CA   01690       LET D(I) = 0
    0x557e0804e6a0 --------CA   01700   NEXT I
    0x557e0804e8a0 --------CA   01710   DIM D$(8)
    0x557e0804e930 --------CA   01720   RESTORE
    0x557e0804f1d0 --------CA   01730   READ D$(1), D$(2), D$(3), D$(4), D$(5), D$(6), D$(7), D$(8)
    0x557e0804f570 --------CA   01740   DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    0x557e0804f8e0 --------CA   01750   DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    0x557e0804faf0 --------CA   01760   LET G4$ = "III"
    0x557e0804fce0 --------CA   01770   DIM G1$(16)
    0x557e0804fee0 --------CA   01780   FOR I = 1 TO 16
    0x557e08050020 --------CA   01790       READ G1$(I)
    0x557e080500c0 --------CA   01800   NEXT I
    0x557e080506f0 --------CA   01810   DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    0x557e08050b40 --------CA   01820   DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    0x557e08050eb0 --------CA   01830   DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    0x557e080510a0 --------CA   01840   LET B9 = 0
    0x557e080512a0 --------CA   01850   LET K9 = 0
    0x557e080514b0 --------CA   01860   LET A1$ = "NSLPTSDCX"
    0x557e08051520 --------CA   01870   REM
    0x557e08051610 --------CA   01880   REM ===============================================================
    0x557e08051690 --------CA   01890   REM
    0x557e08051740 --------CA   01900   REM  SET UP WHAT EXISTS IN GALAXY ...
    0x557e08051970 --------CA   01910   FOR I = 1 TO 8
    0x557e08051c20 --------CA   01920       FOR J = 1 TO 8
    0x557e08051e90 --------CA   01930       LET R1 = RND(1)
    0x557e08052020 --------CA   01940       IF R1 > .98 GOTO 1990
    0x557e080521f0 --------CA   01950       IF R1 > .95 GOTO 2020
    0x557e080523c0 --------CA   01960       IF R1 > .8 GOTO 2050
    0x557e080525e0 --------CA   01970       LET K3 = 0
    0x557e08052650 --------CA   01980       GOTO 2070
    0x557e080527c0 --------CA T 01990       LET K3 = 3
    0x557e080529d0 --------CA   02000       LET K9 = K9 + 3
    0x557e08052a40 --------CA   02010       GOTO 2070
    0x557e08052bb0 --------CA T 02020       LET K3 = 2
    0x557e08052dc0 --------CA   02030       LET K9 = K9 + 2
    0x557e08052e30 --------CA   02040       GOTO 2070
    0x557e08052fa0 --------CA T 02050       LET K3 = 1
    0x557e080531c0 --------CA   02060       LET K9 = K9 + 1
    0x557e080533a0 --------CA T 02070       LET R1 = RND(1)
    0x557e08053530 --------CA   02080       IF R1 > .96 GOTO 2110
    0x557e08053750 --------CA   02090       LET B3 = 0
    0x557e080537c0 --------CA   02100       GOTO 2130
    0x557e08053930 --------CA T 02110       LET B3 = 1
    0x557e08053b60 --------CA   02120       LET B9 = B9 + 1
    0x557e08053ff0 --------CA T 02130       LET S3 = INT(RND(1) * 8 + 1)
    0x557e08054500 --------CA   02140       LET G(I, J) = K3 * 100 + B3 * 10 + S3
    0x557e08054590 --------CA   02150       REM K3=#KLINGONS B3=#STARBASES S3=#STARS
    0x557e080547e0 --------CA   02160       LET Z(I, J) = 0
    0x557e08054890 --------CA   02170       NEXT J
    0x557e08054950 --------CA   02180   NEXT I
    0x557e08054b10 --------CA   02190   LET K7 = K9
    0x557e08054d30 --------CA   02200   LET X$ = ""
    0x557e08054f50 --------CA   02210   LET X0$ = " IS "
    0x557e080550e0 --------CA   02220   IF B9 <> 0 GOTO 2280
    0x557e08055290 --------CA   02230   LET B9 = 1
    0x557e08055560 --------CA   02240   IF G(6, 3) >= 200 GOTO 2270
    0x557e08055a30 --------CA   02250   LET G(6, 3) = G(6, 3) + 100
    0x557e08055c50 --------CA   02260   LET K9 = K9 + 1
    0x557e080560f0 --------CA T 02270   LET G(6, 3) = G(6, 3) + 10
    0x557e08056280 --------CA T 02280   IF B9 = 1 GOTO 2330
    0x557e08056c60 --------CA   02290   LET X$ = "S"
    0x557e08056df0 --------CA   02300   LET X0$ = " ARE "
    0x557e08056f20 --------CA   02310   PRINT " "
    0x557e08057070 --------CA   02320   PRINT " "
    0x557e080571b0 --------CA T 02330   PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    0x557e08057320 --------CA   02340   PRINT " "
    0x557e08057600 --------CA   02350   PRINT "    DESTROY THE "; K9; " KLINGON WARSHIPS WHICH HAVE INVADED"
    0x557e080577a0 --------CA   02360   PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x557e08057cf0 --------CA   02370   PRINT "  ON STARDATE"; T0 + T9; "; THIS GIVES YOU"; T9; " DAYS.  THERE"; X0$
    0x557e08058100 --------CA   02380   PRINT " "; B9; "STARBASE"; X$; " IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    0x557e08058260 --------CA   02390   PRINT " "
    0x557e080583d0 --------CA   02400   PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    0x557e080584a0 --------CA   02410   INPUT A$
    0x557e08058520 --------CA   02420   REM
    0x557e08058610 --------CA   02430   REM ===============================================================
    0x557e08058690 --------CA   02440   REM
    0x557e08058750 --------CA   02450   REM *** HERE ANY TIME ENTER NEW QUADRANT ...
    0x557e08058910 --------CA T 02460   LET Z4 = Q1
    0x557e08058ac0 --------CA   02470   LET Z5 = Q2
    0x557e08058c30 --------CA   02480   LET K3 = 0
    0x557e08058da0 --------CA   02490   LET B3 = 0
    0x557e08058f10 --------CA   02500   LET S3 = 0
    0x557e08059110 --------CA   02510   LET G5 = 0
    0x557e08059440 --------CA   02520   LET D4 = .5 * RND(1)
    0x557e080596e0 --------CA   02530   FOR I7 = 1 TO 8
    0x557e08059920 --------CA   02540       Q$(I7) = SPACE$(24)
    0x557e080599d0 --------CA   02550   NEXT I7
    0x557e08059b80 --------CA   02560   IF Q1 < 1 GOTO 2770
    0x557e08059d50 --------CA   02570   IF Q1 > 8 GOTO 2770
    0x557e08059f20 --------CA   02580   IF Q2 < 1 GOTO 2770
    0x557e0805a0f0 --------CA   02590   IF Q2 > 8 GOTO 2770
    0x557e0805a190 --------CA   02600   GOSUB 10960
    0x557e0805a2c0 --------CA   02610   PRINT " "
    0x557e0805a410 --------CA   02620   IF T <> T0 GOTO 2660
    0x557e0805a5e0 --------CA   02630   PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    0x557e0805a900 --------CA   02640   PRINT "IN THE GALACTIC QUADRANT, '"; G2$; "'."
    0x557e0805a990 --------CA   02650   GOTO 2670
    0x557e0805ac10 --------CA T 02660   PRINT "NOW ENTERING "; G2$; " QUADRANT ..."
    0x557e0805ad50 --------CA T 02670   PRINT " "
    0x557e0805b0a0 --------CA   02680   LET X = G(Q1, Q2) * .01
    0x557e0805b240 --------CA   02690   LET K3 = INT(X)
    0x557e0805b5b0 --------CA   02700   LET B3 = INT((X - K3) * 10)
    0x557e0805bb30 --------CA   02710   LET S3 = G(Q1, Q2) - INT(G(Q1, Q2) * .1) * 10
    0x557e0805bcc0 --------CA   02720   IF K3 = 0 GOTO 2760
    0x557e0805be60 --------CA   02730   PRINT "COMBAT AREA      CONDITION RED"
    0x557e0805bff0 --------CA   02740   IF S > 200 GOTO 2760
    0x557e0805c180 --------CA   02750   PRINT "   SHIELDS DANGEROUSLY LOW"
    0x557e0805c2b0 --------CA T 02760   MAT K = ZER
    0x557e0805c5c0 --------CA T 02770   FOR I = 1 TO 3
    0x557e0805c840 --------CA   02780       LET K(I, 3) = 0
    0x557e0805c8f0 --------CA   02790   NEXT I
    0x557e0805c970 --------CA   02800   REM
    0x557e0805ca60 --------CA   02810   REM ===============================================================
    0x557e0805cae0 --------CA   02820   REM
    0x557e0805cbc0 --------CA   02830   REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS,
    0x557e0805cc80 --------CA   02840   REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    0x557e0805ce20 --------CA   02850   LET A$ = "<*>"
    0x557e0805cfd0 --------CA   02860   LET Z1 = S1
    0x557e0805d180 --------CA   02870   LET Z2 = S2
    0x557e0805d1f0 --------CA   02880   GOSUB 10550
    0x557e0805d3b0 --------CA   02890   FOR I = 1 TO K3
    0x557e0805d440 --------CA   02900       GOSUB 10440
    0x557e0805d5c0 --------CA   02910       LET A$ = "+++"
    0x557e0805d6f0 --------CA   02920       LET Z1 = R1
    0x557e0805d8a0 --------CA   02930       LET Z2 = R2
    0x557e0805d920 --------CA   02940       GOSUB 10550
    0x557e0805db50 --------CA   02950       LET K(I, 1) = R1
    0x557e0805dd90 --------CA   02960       LET K(I, 2) = R2
    0x557e0805e000 --------CA   02970       LET K(I, 3) = 200
    0x557e0805e0b0 --------CA   02980   NEXT I
    0x557e0805e290 --------CA   02990   FOR I = 1 TO B3
    0x557e0805e320 --------CA   03000       GOSUB 10440
    0x557e0805e4a0 --------CA   03010       LET A$ = ">!<"
    0x557e0805e5d0 --------CA   03020       LET Z1 = R1
    0x557e0805e700 --------CA   03030       LET Z2 = R2
    0x557e0805e770 --------CA   03040       GOSUB 10550
    0x557e0805e910 --------CA   03050       LET B4 = Z1
    0x557e0805eac0 --------CA   03060       LET B5 = Z2
    0x557e0805eb70 --------CA   03070   NEXT I
    0x557e0805ed50 --------CA   03080   FOR I = 1 TO S3
    0x557e0805ede0 --------CA   03090       GOSUB 10440
    0x557e0805ef60 --------CA   03100       LET A$ = " * "
    0x557e0805f090 --------CA   03110       LET Z1 = R1
    0x557e0805f1c0 --------CA   03120       LET Z2 = R2
    0x557e0805f230 --------CA   03130       GOSUB 10550
    0x557e0805f2d0 --------CA   03140   NEXT I
    0x557e0805f360 --------CA T 03150   GOSUB 8070
    0x557e0805f580 --------CA T 03160   IF S + E <= 10 GOTO 3190
    0x557e0805f750 --------CA   03170   IF E > 10 GOTO 3230
    0x557e0805f9c0 --------CA   03180   IF D(7) >= 0 GOTO 3230
    0x557e0805ff70 --------CA T 03190   PRINT CHR$(7); "** FATAL ERROR **"; CHR$(7); "   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    0x557e08060110 --------CA   03200   PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    0x557e08060270 --------CA   03210   PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    0x557e080602f0 --------CA   03220   GOTO 7870
    0x557e08060430 --------CA T 03230   PRINT "COMMAND";
    0x557e08060500 --------CA   03240   INPUT A$
    0x557e08060750 --------CA   03250   FOR I = 1 TO 9
    0x557e08060c30 --------CA   03260       IF MID$(A$, 1, 1) <> MID$(A1$, I, 1) GOTO 3320
    0x557e08060e00 --------CA   03270       IF I <> 2 GOTO 3310
    0x557e080610b0 --------CA   03280       IF LEN(A$) < 2 GOTO 3310
    0x557e08061450 --------CA   03290       IF MID$(A$, 2, 1) = "R" GOTO 3310
    0x557e08061630 --------CA   03300       LET I = 6
    0x557e08061ca0 --------CA T 03310       ON I GOTO 3490, 3150, 5380, 5670, 6140, 7080, 7270, 8950, 7880
    0x557e08061d50 --------CA T 03320   NEXT I
    0x557e08061ed0 --------CA   03330   PRINT "ENTER ONE OF THE FOLLOWING:"
    0x557e08062020 --------CA   03340   PRINT "  NAV (TO SET COURSE)"
    0x557e08062180 --------CA   03350   PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    0x557e080622d0 --------CA   03360   PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    0x557e08062430 --------CA   03370   PRINT "  PHA (TO FIRE PHASERS)"
    0x557e08062590 --------CA   03380   PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    0x557e080626f0 --------CA   03390   PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    0x557e08062850 --------CA   03400   PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    0x557e080629b0 --------CA   03410   PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    0x557e08062af0 --------CA   03420   PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    0x557e08062c20 --------CA   03430   PRINT " "
    0x557e08062c90 --------CA   03440   GOTO 3160
    0x557e08062cf0 --------CA   03450   REM
    0x557e08062de0 --------CA   03460   REM ===============================================================
    0x557e08062e60 --------CA   03470   REM
    0x557e08062f00 --------CA   03480   REM  COURSE CONTROL BEGINS HERE
    0x557e08063070 --------CA T 03490   PRINT "COURSE(1-9)";
    0x557e080631d0 --------CA   03500   INPUT C1
    0x557e08063370 --------CA   03510   IF C1 >= 1 GOTO 3540
    0x557e08063520 --------CA T 03520   PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x557e080635a0 --------CA   03530   GOTO 3160
    0x557e08063720 --------CA T 03540   IF C1 < 9 GOTO 3570
    0x557e080638f0 --------CA   03550   IF C1 > 9 GOTO 3520
    0x557e080639a0 --------CA   03560   GOTO 3520
    0x557e08056400 --------CA T 03570   PRINT "WARP FACTOR (0-8)";
    0x557e08056560 --------CA   03580   INPUT W1
    0x557e08056700 --------CA   03590   IF W1 > 0 GOTO 3630
    0x557e080568d0 --------CA   03600   PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    0x557e08064a50 --------CA   03610   PRINT "          SET WARP "; W1; " !"
    0x557e08064ad0 --------CA   03620   GOTO 3160
    0x557e08064c50 --------CA T 03630   IF W1 <= 8 GOTO 3670
    0x557e08064e20 --------CA   03640   PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    0x557e080650b0 --------CA   03650   PRINT "         TAKE WARP "; W1; "!/"
    0x557e08065130 --------CA   03660   GOTO 3160
    0x557e08065350 --------CA T 03670   IF D(1) >= 0 GOTO 3710
    0x557e08065520 --------CA   03680   IF W1 <= .2 GOTO 3710
    0x557e080656d0 --------CA   03690   PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    0x557e08065750 --------CA   03700   GOTO 3490
    0x557e08065b20 --------CA T 03710   LET N = INT(W1 * 8 + .5)
    0x557e08065d50 --------CA   03720   IF E - N >= 0 GOTO 3840
    0x557e08065f20 --------CA   03730   PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x557e080661d0 --------CA   03740   PRINT "   FOR MANEUVERING AT WARP"; W1; "!'"
    0x557e080663c0 --------CA   03750   IF S < N - E GOTO 3160
    0x557e08066630 --------CA   03760   IF D(7) < 0 GOTO 3160
    0x557e08066960 --------CA   03770   PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"; S; " UNITS"
    0x557e08066ab0 --------CA   03780   PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    0x557e08066b20 --------CA   03790   GOTO 7080
    0x557e08066b80 --------CA   03800   REM
    0x557e08066c70 --------CA   03810   REM ===============================================================
    0x557e08066cf0 --------CA   03820   REM
    0x557e08066db0 --------CA   03830   REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...
    0x557e08066fa0 --------CA T 03840   FOR I = 1 TO K3
    0x557e08067280 --------CA   03850       IF K(1, 3) <= 0 GOTO 3950
    0x557e08067460 --------CA   03860       LET A$ = "   "
    0x557e080676a0 --------CA   03870       LET Z1 = K(I, 1)
    0x557e080678d0 --------CA   03880       LET Z2 = K(I, 2)
    0x557e08067940 --------CA   03890       GOSUB 10550
    0x557e080679b0 --------CA   03900       GOSUB 10440
    0x557e08067be0 --------CA   03910       LET K(I, 1) = Z1
    0x557e08067e20 --------CA   03920       LET K(I, 2) = Z2
    0x557e08067fb0 --------CA   03930       LET A$ = "+++"
    0x557e08068020 --------CA   03940       GOSUB 10550
    0x557e080680c0 --------CA T 03950   NEXT I
    0x557e08068140 --------CA   03960   GOSUB 7610
    0x557e08068320 --------CA   03970   LET D1 = 0
    0x557e080684e0 --------CA   03980   LET D6 = W1
    0x557e08068670 --------CA   03990   IF W1 < 1 GOTO 4050
    0x557e08068810 --------CA   04000   LET D6 = 1
    0x557e08068880 --------CA   04010   REM
    0x557e08068970 --------CA   04020   REM ===============================================================
    0x557e080689f0 --------CA   04030   REM
    0x557e08068a90 --------CA   04040   REM MAKE REPAIRS TO SHIP
    0x557e08068cc0 --------CA T 04050   FOR I = 1 TO 8
    0x557e08068ec0 --------CA   04060       IF D(I) >= 0 GOTO 4160
    0x557e080691e0 --------CA   04070       LET D(I) = D(I) + 6
    0x557e080693d0 --------CA   04080       IF D(I) < 0 GOTO 4160
    0x557e080695a0 --------CA   04090       IF D1 = 1 GOTO 4120
    0x557e08069760 --------CA   04100       LET D1 = 1
    0x557e080698b0 --------CA   04110       PRINT "DAMAGE CONTROL REPORT:"
    0x557e08069a40 --------CA T 04120       PRINT TAB(8);
    0x557e08069b70 --------CA   04130       LET R1 = I
    0x557e08069bf0 --------CA   04140       GOSUB 10780
    0x557e08069d10 --------CA   04150       PRINT " REPAIR COMPLETED"
    0x557e08069dc0 --------CA T 04160   NEXT I
    0x557e08069e40 --------CA   04170   REM
    0x557e08069f30 --------CA   04180   REM ===============================================================
    0x557e08069fb0 --------CA   04190   REM
    0x557e0806a060 --------CA   04200   REM DAMAGE/IMPROVEMENT DURING SOME VES
    0x557e0806a2b0 --------CA   04210   IF RND(1) > .2 GOTO 4410
    0x557e0806a6f0 --------CA   04220   LET R1 = INT(RND(1) * 8 + 1)
    0x557e0806a920 --------CA   04230   IF RND(1) >= .6 GOTO 4310
    0x557e0806aea0 --------CA   04240   LET D(R1) = D(R1) - (RND(1) * 5 + 1)
    0x557e0806afe0 --------CA   04250   PRINT " "
    0x557e0806b140 --------CA   04260   PRINT "DAMAGE CONTROL REPORT:";
    0x557e0806b1c0 --------CA   04270   GOSUB 10780
    0x557e0806b2e0 --------CA   04280   PRINT " DAMAGED"
    0x557e0806b410 --------CA   04290   PRINT " "
    0x557e0806b4a0 --------CA   04300   GOTO 4410
    0x557e0806b9c0 --------CA T 04310   LET D(R1) = D(R1) + (RND(1) * 3 + 1)
    0x557e0806bb00 --------CA   04320   PRINT " "
    0x557e0806bc60 --------CA   04330   PRINT "DAMAGE CONTROL REPORT:";
    0x557e0806bcf0 --------CA   04340   GOSUB 10780
    0x557e0806be20 --------CA   04350   PRINT " STATE OF REPAIR IMPROVED"
    0x557e0806bf50 --------CA   04360   PRINT " "
    0x557e0806bfc0 --------CA   04370   REM
    0x557e0806c0b0 --------CA   04380   REM ===============================================================
    0x557e0806c130 --------CA   04390   REM
    0x557e0806c1d0 --------CA   04400   REM BEGIN MOVING STARSHIP **
    0x557e0806c380 --------CA T 04410   LET A$ = "   "
    0x557e0806c520 --------CA   04420   LET Z1 = INT(S1)
    0x557e0806c6b0 --------CA   04430   LET Z2 = INT(S2)
    0x557e0806c730 --------CA   04440   GOSUB 10550
    0x557e0806cb70 --------CA   04450   LET X1 = -SIN((C1 - 1) * P1)
    0x557e0806cca0 --------CA   04460   LET X = S1
    0x557e0806ce60 --------CA   04470   LET Y = S2
    0x557e0806d2b0 --------CA   04480   LET X2 = COS((C1 - 1) * P1)
    0x557e0806d460 --------CA   04490   LET Q4 = Q1
    0x557e0806d610 --------CA   04500   LET Q5 = Q2
    0x557e0806d7f0 --------CA   04510   FOR I = 1 TO N
    0x557e0806d9e0 --------CA   04520       LET S1 = S1 + X1
    0x557e0806dbc0 --------CA   04530       LET S2 = S2 + X2
    0x557e0806dd50 --------CA   04540       IF S1 < .5 GOTO 4800
    0x557e0806df20 --------CA   04550       IF S1 >= 8.5 GOTO 4800
    0x557e0806e0f0 --------CA   04560       IF S2 < .5 GOTO 4800
    0x557e0806e2c0 --------CA   04570       IF S2 >= 8.5 GOTO 4800
    0x557e0806eb20 --------CA   04580       IF MID$(Q$(INT(S1 + .5)), (3 * INT(S2 + .5) - 2), 3) = "   " GOTO 4640
    0x557e0806ed40 --------CA   04590       LET S1 = S1 - X1
    0x557e0806ef40 --------CA   04600       LET S2 = S2 - X2
    0x557e0806f290 --------CA   04610       PRINT "WARP ENGINES SHUT DOWN AT SECTOR "; INT(S1 + .5);
    0x557e0806f670 --------CA   04620       PRINT ","; INT(S2 + .5); " DUE TO BAD NAVIGATION"
    0x557e0806f6e0 --------CA   04630       GOTO 4650
    0x557e0806f780 --------CA T 04640   NEXT I
    0x557e0806f930 --------CA T 04650   LET A$ = "<*>"
    0x557e0806fbb0 --------CA   04660   S1 = INT(S1 + .5)
    0x557e0806fe30 --------CA   04670   S2 = INT(S2 + .5)
    0x557e0806ffd0 --------CA   04680   LET Z1 = INT(S1)
    0x557e08070160 --------CA   04690   LET Z2 = INT(S2)
    0x557e080701d0 --------CA   04700   GOSUB 10550
    0x557e08070230 --------CA   04710   GOSUB 5260
    0x557e08070420 --------CA   04720   LET T8 = 1
    0x557e080705b0 --------CA   04730   IF W1 >= 1 GOTO 4750
    0x557e08070940 --------CA   04740   LET T8 = .1 * INT(10 * W1)
    0x557e08070b20 --------CA T 04750   LET T = T + T8
    0x557e08070d10 --------CA   04760   IF T > T0 + T9 GOTO 7830
    0x557e08070de0 --------CA   04770   REM SEE IF DOCKED, THEN GET COMMAND
    0x557e08070e70 --------CA   04780   GOTO 3150
    0x557e08070ee0 --------CA   04790   REM EXCEEDED QUADRANT LIMITS
    0x557e08071300 --------CA T 04800   LET X = 8 * Q1 + X + N * X1
    0x557e08071700 --------CA   04810   LET Y = 8 * Q2 + Y + N * X2
    0x557e08071980 --------CA   04820   LET Q1 = INT(X / 8)
    0x557e08071c00 --------CA   04830   LET Q2 = INT(Y / 8)
    0x557e08071f20 --------CA   04840   LET S1 = INT(X - Q1 * 8)
    0x557e08072230 --------CA   04850   LET S2 = INT(Y - Q2 * 8)
    0x557e08072430 --------CA   04860   LET X5 = 0
    0x557e080725c0 --------CA   04870   IF S1 <> 0 GOTO 4910
    0x557e08072800 --------CA   04880   LET Q1 = Q1 - 1
    0x557e08072970 --------CA   04890   LET S1 = 8
    0x557e08072af0 --------CA   04900   LET X5 = 0
    0x557e08072c80 --------CA T 04910   IF S2 <> 0 GOTO 4950
    0x557e08072ec0 --------CA   04920   LET Q2 = Q2 - 1
    0x557e08073030 --------CA   04930   LET S2 = 8
    0x557e080731b0 --------CA   04940   LET X5 = 0
    0x557e08073340 --------CA T 04950   IF Q1 >= 1 GOTO 4990
    0x557e080734e0 --------CA   04960   LET X5 = 1
    0x557e08073650 --------CA   04970   LET Q1 = 1
    0x557e080737d0 --------CA   04980   LET S1 = 1
    0x557e08073960 --------CA T 04990   IF Q1 <= 8 GOTO 5030
    0x557e08073b00 --------CA   05000   LET X5 = 1
    0x557e08073c70 --------CA   05010   LET Q1 = 8
    0x557e08073df0 --------CA   05020   LET S1 = 8
    0x557e08073f80 --------CA T 05030   IF Q2 >= 1 GOTO 5070
    0x557e08074120 --------CA   05040   LET X5 = 1
    0x557e08074290 --------CA   05050   LET Q2 = 1
    0x557e08074410 --------CA   05060   LET S2 = 1
    0x557e080745a0 --------CA T 05070   IF Q2 <= 8 GOTO 5110
    0x557e08074740 --------CA   05080   LET X5 = 1
    0x557e080748b0 --------CA   05090   LET Q2 = 8
    0x557e08074a30 --------CA   05100   LET S2 = 8
    0x557e08074bc0 --------CA T 05110   IF X5 = 0 GOTO 5180
    0x557e08074da0 --------CA   05120   PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    0x557e08074f30 --------CA   05130   PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    0x557e080750b0 --------CA   05140   PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    0x557e08075240 --------CA   05150   PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x557e08075900 --------CA   05160   PRINT "   AT SECTOR "; S1; ","; S2; " OF QUADRANT "; Q1; ","; Q2; ".'"
    0x557e08075af0 --------CA   05170   IF T > T0 + T9 GOTO 7830
    0x557e08075f90 --------CA T 05180   IF 8 * Q1 + Q2 = 8 * Q4 + Q5 GOTO 4650
    0x557e080761d0 --------CA   05190   LET T = T + 1
    0x557e08076240 --------CA   05200   GOSUB 5260
    0x557e080762a0 --------CA   05210   GOTO 2460
    0x557e08076300 ---------B   05220   REM
    0x557e080763f0 ---------B   05230   REM ===============================================================
    0x557e08076470 ---------B   05240   REM
    0x557e08076510 ---------B   05250   REM MANEUVER ENERGY S/R ***
    0x557e080767f0 ---------B G 05260   LET E = E - N - 10
    0x557e08076980 ---------B   05270   IF E >= 0 GOTO 5330
    0x557e08076b50 ---------B   05280   PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    0x557e08076d20 ---------B   05290   LET S = S + E
    0x557e08076ea0 ---------B   05300   LET E = 0
    0x557e08077030 ---------B   05310   IF S > 0 GOTO 5330
    0x557e080771d0 ---------B   05320   LET S = 0
    0x557e08077220 ---------B T 05330   RETURN
    0x557e080772a0 --------CA   05340   REM
    0x557e08077390 --------CA   05350   REM ===============================================================
    0x557e08077410 --------CA   05360   REM
    0x557e080774b0 --------CA   05370   REM L.R. SENSOR SCAN CODE ***
    0x557e08077700 --------CA T 05380   IF D(3) >= 0 GOTO 5410
    0x557e08077890 --------CA   05390   PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x557e08077930 --------CA   05400   GOTO 3160
    0x557e08077c50 --------CA T 05410   PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"; Q1; ","; Q2
    0x557e08077e60 --------CA   05420   LET O1$ = "..................."
    0x557e08077f40 --------CA   05430   PRINT O1$
    0x557e080782a0 --------CA   05440   FOR I = Q1 - 1 TO Q1 + 1
    0x557e08078320 --------CA   05450       REM    DIM N(3)
    0x557e080785e0 --------CA   05460       FOR I1 = 1 TO 3
    0x557e080787c0 --------CA   05470       LET N(I1) = 0
    0x557e08078870 --------CA   05480       NEXT I1
    0x557e08078bf0 --------CA   05490       FOR J = Q2 - 1 TO Q2 + 1
    0x557e08078d90 --------CA   05500       IF I < 1 GOTO 5580
    0x557e08078f60 --------CA   05510       IF I > 8 GOTO 5580
    0x557e08079130 --------CA   05520       IF J < 1 GOTO 5560
    0x557e08079300 --------CA   05530       IF J > 8 GOTO 5560
    0x557e08079720 --------CA   05540       LET N(J - Q2 + 2) = G(I, J)
    0x557e080799d0 --------CA   05550       LET Z(I, J) = G(I, J)
    0x557e08079a80 --------CA T 05560       NEXTJ
    0x557e08079b10 --------CA   05570       REM   DIM P1$(20)
    0x557e08079d70 --------CA T 05580       LET P1$ = ": ### : ### : ### :"
    0x557e0807a180 --------CA   05590       PRINT USING P1$; N(1); N(2); N(3)
    0x557e0807a250 --------CA   05600       PRINT O1$
    0x557e0807a300 --------CA   05610   NEXT I
    0x557e0807a380 --------CA   05620   GOTO 3160
    0x557e0807a3e0 --------CA   05630   REM
    0x557e0807a4d0 --------CA   05640   REM ===============================================================
    0x557e0807a550 --------CA   05650   REM
    0x557e0807a600 --------CA   05660   REM *** PHASER CONTROL CODE BEGINS HERE
    0x557e0807a7b0 --------CA T 05670   IF K3 > 0 GOTO 5710
    0x557e0807a980 --------CA   05680   PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    0x557e0807aac0 --------CA   05690   PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    0x557e0807ab40 --------CA   05700   GOTO 3160
    0x557e0807ad60 --------CA T 05710   IF D(4) >= 0 GOTO 5740
    0x557e0807aed0 --------CA   05720   PRINT "PHASERS INOPERATIVE"
    0x557e0807af50 --------CA   05730   GOTO 3160
    0x557e0807b170 --------CA T 05740   IF D(8) >= 0 GOTO 5760
    0x557e0807b320 --------CA   05750   PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    0x557e0807b470 --------CA T 05760   PRINT "PHASERS LOCKED ON TARGET;  "
    0x557e0807b640 --------CA T 05770   PRINT "ENERGY AVAILABLE ="; E
    0x557e0807b7a0 --------CA   05780   PRINT "NUMBER OF UNITS TO FIRE:";
    0x557e0807b880 --------CA   05790   INPUT X
    0x557e0807ba20 --------CA   05800   IF X <= 0 GOTO 3160
    0x557e0807bc90 --------CA   05810   IF E - X < 0 GOTO 5770
    0x557e0807be90 --------CA   05820   LET E = E - X
    0x557e0807bf10 --------CA   05830   GOSUB 7610
    0x557e0807c130 --------CA   05840   IF D(7) >= 0 GOTO 5860
    0x557e0807c3f0 --------CA   05850   LET X = X * RND(1)
    0x557e0807c6a0 --------CA T 05860   LET H1 = INT(X / K3)
    0x557e0807c8c0 --------CA   05870   FOR I = 1 TO 3
    0x557e0807cb60 --------CA   05880       IF K(I, 3) <= 0 GOTO 6080
    0x557e0807d1c0 --------CA   05890       LET H = INT((H1 / FND(0)) * (RND(1) * 2))
    0x557e0807d4f0 --------CA   05900       IF H > .15 * K(I, 3) GOTO 5940
    0x557e0807d6b0 --------CA   05910       PRINT "SENSORS SHOW NO DAMAGE"
    0x557e0807dbc0 --------CA   05920       PRINT "    TO ENEMY AT "; K(I, 1); ","; K(I, 2)
    0x557e0807dc40 --------CA   05930       GOTO 6080
    0x557e0807e040 --------CA T 05940       LET K(I, 3) = K(I, 3) - H
    0x557e0807e5f0 --------CA   05950       PRINT H; " UNIT HIT ON KLINGON AT SECTOR "; K(I, 1); ","; K(I, 2)
    0x557e0807e880 --------CA   05960       IF K(I, 3) <= 0 GOTO 5990
    0x557e0807ec70 --------CA   05970       PRINT "   (SENSORS SHOW"; K(I, 3); " UNITS REMAINING)"
    0x557e0807ed00 --------CA   05980       GOTO 6080
    0x557e0807ee40 --------CA T 05990       PRINT " *** KLINGON DESTROYED ***"
    0x557e0807f060 --------CA   06000       LET K3 = K3 - 1
    0x557e0807f270 --------CA   06010       LET K9 = K9 - 1
    0x557e0807f410 --------CA   06020       A$ = "   "
    0x557e0807f650 --------CA   06030       LET Z1 = K(I, 1)
    0x557e0807f880 --------CA   06040       LET Z2 = K(I, 2)
    0x557e0807f910 --------CA   06050       GOSUB 10550
    0x557e0807fe00 --------CA   06060       LET G(Q1, Q2) = K3 * 100 + B3 * 10 + S3
    0x557e0807ff90 --------CA   06070       IF K9 <= 0 GOTO 7980
    0x557e08080070 --------CA T 06080   NEXT I
    0x557e080800f0 --------CA   06090   GOTO 3160
    0x557e08080150 --------CA   06100   REM
    0x557e08080240 --------CA   06110   REM ===============================================================
    0x557e080802c0 --------CA   06120   REM
    0x557e08063a10 --------CA   06130   REM PHOTON TORPEDO CODE BEGINS ***
    0x557e08063c60 --------CA T 06140   IF D(5) >= 0 GOTO 6170
    0x557e08063df0 --------CA   06150   PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    0x557e08063e70 --------CA   06160   GOTO 3160
    0x557e08063ff0 --------CA T 06170   IF P > 0 GOTO 6200
    0x557e08064180 --------CA   06180   PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x557e08064200 --------CA   06190   GOTO 3160
    0x557e08064340 --------CA T 06200   PRINT "TORPEDO COURSE (1-9)";
    0x557e08064420 --------CA   06210   INPUT C1
    0x557e080645c0 --------CA   06220   IF C1 >= 1 GOTO 6250
    0x557e08064770 --------CA T 06230   PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x557e080647f0 --------CA   06240   GOTO 3160
    0x557e08064970 --------CA T 06250   IF C1 > 9 GOTO 6230
    0x557e080824a0 --------CA   06260   IF C1 < 9 GOTO 6290
    0x557e08082670 --------CA   06270   IF C1 >= 9 GOTO 6200
    0x557e08082820 --------CA   06280   LET C1 = 1
    0x557e08082b80 --------CA T 06290   LET X1 = -SIN((C1 - 1) * P1)
    0x557e08082ee0 --------CA   06300   LET X2 = COS((C1 - 1) * P1)
    0x557e080831a0 --------CA   06310   IF ABS(X1) < ABS(X2) THEN 6360
    0x557e080834a0 --------CA   06320   M9 = ABS(1 / X1)
    0x557e080836b0 --------CA   06330   X1 = SGN(X1)
    0x557e08083880 --------CA   06340   X2 = X2 * M9
    0x557e08083900 --------CA   06350   GOTO 6390
    0x557e08083b60 --------CA T 06360   M9 = ABS(1 / X2)
    0x557e08083cf0 --------CA   06370   X2 = SGN(X2)
    0x557e08083ec0 --------CA   06380   X1 = X1 * M9
    0x557e080840d0 --------CA T 06390   LET E = E - 2
    0x557e08084200 --------CA   06400   LET X = S1
    0x557e08084330 --------CA   06410   LET Y = S2
    0x557e08084550 --------CA   06420   LET P = P - 1
    0x557e08084680 --------CA   06430   PRINT "TORPEDO TRACK:"
    0x557e08084850 --------CA T 06440   LET X = X + X1
    0x557e08084a30 --------CA   06450   LET Y = Y + X2
    0x557e08084d30 --------CA   06460   LET X9 = INT(X + .5)
    0x557e08085030 --------CA   06470   LET Y9 = INT(Y + .5)
    0x557e080851c0 --------CA   06480   IF X9 < 1 GOTO 7010
    0x557e08085390 --------CA   06490   IF X9 >= 9 GOTO 7010
    0x557e08085560 --------CA   06500   IF Y9 < 1 GOTO 7010
    0x557e08085730 --------CA   06510   IF Y9 >= 9 GOTO 7010
    0x557e08085a90 --------CA   06520   PRINT "               "; X9; ","; Y9
    0x557e08085c20 --------CA   06530   LET A$ = "   "
    0x557e08085d50 --------CA   06540   LET Z1 = X9
    0x557e08085e80 --------CA   06550   LET Z2 = Y9
    0x557e08085f00 --------CA   06560   GOSUB 10840
    0x557e08086100 --------CA   06570   IF Z3 <> 0 GOTO 6440
    0x557e080862c0 --------CA   06580   LET A$ = "+++"
    0x557e080863f0 --------CA   06590   LET Z1 = X9
    0x557e08086520 --------CA   06600   LET Z2 = Y9
    0x557e080865a0 --------CA   06610   GOSUB 10840
    0x557e08086720 --------CA   06620   IF Z3 = 0 GOTO 6730
    0x557e080868b0 --------CA   06630   PRINT "*** KLINGON DESTROYED ***"
    0x557e08086ac0 --------CA   06640   LET K3 = K3 - 1
    0x557e08086ce0 --------CA   06650   LET K9 = K9 - 1
    0x557e08086e70 --------CA   06660   IF K9 <= 0 GOTO 7980
    0x557e080870c0 --------CA   06670   FOR I = 1 TO 3
    0x557e08087320 --------CA   06680       IF X9 <> K(I, 1) GOTO 6700
    0x557e080875b0 --------CA   06690       IF Y9 = K(I, 2) GOTO 6710
    0x557e08087690 --------CA T 06700   NEXT I
    0x557e08087910 --------CA T 06710   LET K(I, 3) = 0
    0x557e08087980 --------CA   06720   GOTO 6950
    0x557e08087b00 --------CA T 06730   LET A$ = " * "
    0x557e08087c30 --------CA   06740   LET Z1 = X9
    0x557e08087d60 --------CA   06750   LET Z2 = Y9
    0x557e08087de0 --------CA   06760   GOSUB 10840
    0x557e08087f60 --------CA   06770   IF Z3 = 0 GOTO 6800
    0x557e080883c0 --------CA   06780   PRINT "STAR AT"; X9; ","; Y9; " ABSORBED TORPEDO ENERGY."
    0x557e08088430 --------CA   06790   GOTO 7020
    0x557e080885b0 --------CA T 06800   LET A$ = ">!<"
    0x557e080886e0 --------CA   06810   LET Z1 = X9
    0x557e08088810 --------CA   06820   LET Z2 = Y9
    0x557e08088890 --------CA   06830   GOSUB 10840
    0x557e08088a10 --------CA   06840   IF Z3 = 0 GOTO 6200
    0x557e08088ba0 --------CA   06850   PRINT "*** STARBASE DESTROYED ***"
    0x557e08088db0 --------CA   06860   LET B3 = B3 - 1
    0x557e08088fd0 --------CA   06870   LET B9 = B9 - 1
    0x557e08089160 --------CA   06880   IF B9 > 0 GOTO 6920
    0x557e08089370 --------CA   06890   PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    0x557e080894d0 --------CA   06900   PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    0x557e08089570 --------CA   06910   GOTO 7880
    0x557e080896c0 --------CA T 06920   PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x557e080897f0 --------CA   06930   PRINT "   COURT MARTIAL!"
    0x557e08089960 --------CA   06940   LET D0 = 0
    0x557e08089af0 --------CA T 06950   LET A$ = "   "
    0x557e08089c20 --------CA   06960   LET Z1 = X9
    0x557e08089d50 --------CA   06970   LET Z2 = Y9
    0x557e08089de0 --------CA   06980   GOSUB 10550
    0x557e0808a2c0 --------CA   06990   LET G(Q1, Q2) = K3 * 100 + B3 * 10 + S3
    0x557e0808a340 --------CA   07000   GOTO 7020
    0x557e0808a460 --------CA T 07010   PRINT "TORPEDO MISSED"
    0x557e0808a4d0 --------CA T 07020   GOSUB 7610
    0x557e0808a530 --------CA   07030   GOTO 3160
    0x557e0808a590 --------CA   07040   REM
    0x557e0808a680 --------CA   07050   REM ===============================================================
    0x557e0808a700 --------CA   07060   REM
    0x557e0808a7b0 --------CA   07070   REM *** SHIELD CONTROL STARTS HERE
    0x557e0808aa00 --------CA T 07080   IF D(7) >= 0 GOTO 7110
    0x557e0808ab90 --------CA   07090   PRINT "SHIELD CONTROL INOPERABLE"
    0x557e0808ac40 --------CA   07100   GOTO 3160
    0x557e0808afd0 --------CA T 07110   PRINT "ENERGY AVAILABLE ="; E + 5; ". NUMBER OF UNITS TO SHIELDS:";
    0x557e0808b0b0 --------CA   07120   INPUT X
    0x557e0808b250 --------CA   07130   IF X >= 0 GOTO 7170
    0x557e0808b3e0 --------CA   07140   IF S <> X GOTO 7170
    0x557e0808b550 --------CA   07150   PRINT "(SHIELDS UNCHANGED)"
    0x557e0808b5d0 --------CA   07160   GOTO 3160
    0x557e0808b890 --------CA T 07170   IF E + S - X < 0 GOTO 7110
    0x557e0808bb40 --------CA   07180   LET E = E + S - X
    0x557e0808bc90 --------CA   07190   LET S = X
    0x557e0808be00 --------CA   07200   PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x557e0808c090 --------CA   07210   PRINT "  'SHIELDS NOW AT "; S; " PER YOUR COMMAND'"
    0x557e0808c100 --------CA   07220   GOTO 3160
    0x557e0808c160 --------CA   07230   REM
    0x557e0808c250 --------CA   07240   REM ===============================================================
    0x557e0808c2d0 --------CA   07250   REM
    0x557e0808c380 --------CA   07260   REM *** DAMAGE CONTROL STARTS HERE
    0x557e0808c5d0 --------CA T 07270   IF D(6) >= 0 GOTO 7490
    0x557e0808c770 --------CA   07280   PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    0x557e0808c900 --------CA T 07290   IF D0 = 0 GOTO 3160
    0x557e0808cb20 --------CA   07300   LET D3 = 0
    0x557e0808cd40 --------CA   07310   FOR I = 1 TO 8
    0x557e0808cf40 --------CA   07320       IF D(I) >= 0 GOTO 7340
    0x557e0808d190 --------CA   07330       LET D3 = D3 + .1
    0x557e0808d240 --------CA T 07340   NEXT I
    0x557e0808d3f0 --------CA   07350   IF D3 = 0 GOTO 3160
    0x557e0808d610 --------CA   07360   LET D3 = D3 + D4
    0x557e0808d7a0 --------CA   07370   IF D3 < 1 GOTO 7390
    0x557e0808d970 --------CA   07380   LET D3 = .9
    0x557e0808daf0 --------CA T 07390   PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    0x557e0808dc60 --------CA   07400   PRINT "ESTIMATED TIME TO REPAIR: ";
    0x557e0808de40 --------CA   07410   PRINT USING ".# STARDATES"; D3
    0x557e0808dfb0 --------CA   07420   PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    0x557e0808e090 --------CA   07430   INPUT A$
    0x557e0808e250 --------CA   07440   IF A$ <> "YES" GOTO 3160
    0x557e0808e4a0 --------CA   07450   FOR I = 1 TO 8
    0x557e0808e680 --------CA   07460       LET D(I) = 0
    0x557e0808e730 --------CA   07470   NEXT I
    0x557e0808ea00 --------CA   07480   LET T = T + D3 + .1
    0x557e0808eb50 --------CA T 07490   PRINT " "
    0x557e0808ec90 --------CA   07500   PRINT "DEVICE        STATE OF REPAIR"
    0x557e0808eea0 --------CA   07510   FOR R1 = 1 TO 8
    0x557e0808ef40 --------CA   07520       GOSUB 10780
    0x557e0808f140 --------CA   07530       PRINT USING "  -##.##";D(R1)
    0x557e0808f1f0 --------CA   07540   NEXT R1
    0x557e0808f330 --------CA   07550   PRINT " "
    0x557e0808f3a0 --------CA   07560   GOTO 7290
    0x557e0808f400 ---------C   07570   REM
    0x557e0808f4f0 ---------C   07580   REM ===============================================================
    0x557e0808f570 ---------C   07590   REM
    0x557e0808f620 ---------C   07600   REM "KLINGONS SHOOTING" CODE BEGINS ***
    0x557e0808f7d0 ---------C G 07610   IF K3 <= 0 GOTO 7820
    0x557e0808f9a0 ---------C   07620   IF D0 = 0 GOTO 7650
    0x557e0808fb50 ---------C   07630   PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x557e0808fbc0 ---------C   07640   GOTO 7820
    0x557e0808fdd0 ---------C T 07650   FOR I = 1 TO 3
    0x557e08090070 ---------C   07660       IF K(I, 3) <= 0 GOTO 7810
    0x557e08090750 ---------C   07670       LET H = INT((K(I, 3) / FND(0)) * (2 + RND(1)))
    0x557e08090960 ---------C   07680       LET S = S - H
    0x557e08090f10 ---------C   07690       PRINT H; " UNIT HIT ON ENTERPRISE FROM SECTOR"; K(I, 1); ","; K(I, 2)
    0x557e080910a0 ---------C   07700       IF S < 0 GOTO 7850
    0x557e080913b0 ---------C   07710       PRINT "      (SHIELDS DOWN TO"; S; " UNITS.)"
    0x557e08091540 ---------C   07720       IF H < 20 GOTO 7810
    0x557e080917b0 ---------C   07730       IF RND(1) > .6 GOTO 7810
    0x557e08091a20 ---------C   07740       IF H / S <= .02 GOTO 7810
    0x557e08091f00 ---------C   07750       LET D2 = H / S + .5 * RND(1)
    0x557e08092300 ---------C   07760       LET R1 = INT(RND(1) * 8 + 1)
    0x557e080925b0 ---------C   07770       LET D(R1) = D(R1) - D2
    0x557e08092710 ---------C   07780       PRINT "DAMAGE CONTROL REPORTS '";
    0x557e080927a0 ---------C   07790       GOSUB 10780
    0x557e080928c0 ---------C   07800       PRINT "DAMAGED BY THE HIT!'"
    0x557e08092970 ---------C T 07810   NEXT I
    0x557e080929d0 ---------C T 07820   RETURN
    0x557e08092ba0 --------CA T 07830   PRINT "ITS IS STARDATE "; T
    0x557e08092c10 --------CA   07840   GOTO 7880
    0x557e08092d70 ---------C T 07850   PRINT " "
    0x557e08092ee0 ---------C   07860   PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    0x557e080931a0 --------CA T 07870   PRINT "IT IS STARDATE "; T; "."
    0x557e08093460 --------CA T 07880   PRINT "THERE WERE "; K9; " KLINGON BATTLE CRUISERS LEFT AT "
    0x557e080935a0 --------CA   07890   PRINT "THE END OF YOUR MISSION."
    0x557e080936d0 --------CA T 07900   PRINT " "
    0x557e08093830 --------CA   07910   PRINT " "
    0x557e080939b0 --------CA   07920   PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x557e08093b20 --------CA   07930   PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x557e08093c60 --------CA   07940   PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    0x557e08093d40 --------CA   07950   INPUT A$
    0x557e08093f00 --------CA   07960   IF A$ = "AYE" GOTO 1270
    0x557e08093fe0 --------CA   07970   GOTO 11100
    0x557e08094160 --------CA T 07980   PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    0x557e080942b0 --------CA   07990   PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    0x557e08094420 --------CA   08000   PRINT " "
    0x557e080949a0 --------CA   08010   PRINT "YOUR EFFICIENCY RATING IS "; ((K / (T - T0)) * 1000); "."
    0x557e08094a10 --------CA   08020   GOTO 7900
    0x557e08094a70 ---------D   08030   REM
    0x557e08094b60 ---------D   08040   REM ===============================================================
    0x557e08094be0 ---------D   08050   REM
    0x557e08094ca0 ---------D   08060   REM S.R. SENSOR SCAN & STARTUP SUBR. ***
    0x557e08095020 ---------D G 08070   FOR I = S1 - 1 TO S1 + 1
    0x557e080953a0 ---------D   08080       FOR J = S2 - 1 TO S2 + 1
    0x557e08095680 ---------D   08090       IF INT(I + .5) < 1 GOTO 8180
    0x557e080959a0 ---------D   08100       IF INT(I + .5) > 8 GOTO 8180
    0x557e08095cc0 ---------D   08110       IF INT(J + .5) < 1 GOTO 8180
    0x557e08095fe0 ---------D   08120       IF INT(J + .5) > 8 GOTO 8180
    0x557e080961b0 ---------D   08130       LET A$ = ">!<"
    0x557e080962e0 ---------D   08140       LET Z1 = I
    0x557e08096410 ---------D   08150       LET Z2 = J
    0x557e08096490 ---------D   08160       GOSUB 10840
    0x557e08096610 ---------D   08170       IF Z3 = 1 GOTO 8220
    0x557e080966f0 ---------D T 08180       NEXT J
    0x557e080967b0 ---------D   08190   NEXT I
    0x557e08096930 ---------D   08200   LET D0 = 0
    0x557e080969a0 ---------D   08210   GOTO 8290
    0x557e08096b10 ---------D T 08220   LET D0 = 1
    0x557e08096d20 ---------D   08230   LET C$ = "DOCKED"
    0x557e08096e90 ---------D   08240   LET E = 3000
    0x557e08097020 ---------D   08250   LET P = 10
    0x557e08097160 ---------D   08260   PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x557e080972d0 ---------D   08270   LET S = 0
    0x557e08097350 ---------D   08280   GOTO 8360
    0x557e080974d0 ---------D T 08290   IF K3 > 0 GOTO 8330
    0x557e08097740 ---------D   08300   IF E < E0 * .1 GOTO 8350
    0x557e08097910 ---------D   08310   LET C$ = " GREEN"
    0x557e080979a0 ---------D   08320   GOTO 8360
    0x557e08097ea0 ---------D T 08330   C$ = " " + CHR$(7) + "*RED*" + CHR$(7)
    0x557e08097f20 ---------D   08340   GOTO 8360
    0x557e080980b0 ---------D T 08350   LET C$ = "YELLOW"
    0x557e080982e0 ---------D T 08360   IF D(2) >= 0 GOTO 8410
    0x557e08098460 ---------D   08370   PRINT " "
    0x557e080985a0 ---------D   08380   PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x557e080986d0 ---------D   08390   PRINT " "
    0x557e08098760 ---------D   08400   GOTO 8900
    0x557e080988f0 ---------D T 08410   LET O1$ = "--------------------------------"
    0x557e080989d0 ---------D   08420   PRINT O1$
    0x557e08098be0 ---------D   08430   LET N5$ = "####"
    0x557e08098d40 ---------D   08440   PRINT " ";
    0x557e08099010 ---------D   08450   FOR I = 1 TO 22 STEP 3
    0x557e080993f0 ---------D   08460       PRINT MID$(Q$(1), I, 3); " ";
    0x557e080994a0 ---------D   08470   NEXT I
    0x557e080995e0 ---------D   08480   PRINT " "
    0x557e08099740 ---------D   08490   PRINT " ";
    0x557e08099a10 ---------D   08500   FOR I = 1 TO 22 STEP 3
    0x557e08099df0 ---------D   08510       PRINT MID$(Q$(2), I, 3); " ";
    0x557e08099ea0 ---------D   08520   NEXT I
    0x557e0809a040 ---------D   08530   PRINT "        STARDATE         ";
    0x557e0809a1f0 ---------D   08540   PRINT USING "####.#";T
    0x557e0809a350 ---------D   08550   PRINT " ";
    0x557e0809a620 ---------D   08560   FOR I = 1 TO 22 STEP 3
    0x557e0809aa00 ---------D   08570       PRINT MID$(Q$(3), I, 3); " ";
    0x557e0809aab0 ---------D   08580   NEXT I
    0x557e0809ac40 ---------D   08590   PRINT "        CONDITION        ";
    0x557e0809ad10 ---------D   08600   PRINT C$
    0x557e0809ae70 ---------D   08610   PRINT " ";
    0x557e0809b140 ---------D   08620   FOR I = 1 TO 22 STEP 3
    0x557e0809b520 ---------D   08630       PRINT MID$(Q$(4), I, 3); " ";
    0x557e0809b5d0 ---------D   08640   NEXT I
    0x557e0809b920 ---------D   08650   PRINT "        QUADRANT         "; Q1; ","; Q2
    0x557e0809ba80 ---------D   08660   PRINT " ";
    0x557e0809bd50 ---------D   08670   FOR I = 1 TO 22 STEP 3
    0x557e0809c130 ---------D   08680       PRINT MID$(Q$(5), I, 3); " ";
    0x557e0809c1e0 ---------D   08690   NEXT I
    0x557e0809c530 ---------D   08700   PRINT "        SECTOR           "; S1; ","; S2
    0x557e0809c690 ---------D   08710   PRINT " ";
    0x557e0809c960 ---------D   08720   FOR I = 1 TO 22 STEP 3
    0x557e0809cd40 ---------D   08730       PRINT MID$(Q$(6), I, 3); " ";
    0x557e0809cdf0 ---------D   08740   NEXT I
    0x557e0809cf90 ---------D   08750   PRINT "        TOTAL ENERGY     ";
    0x557e0809d160 ---------D   08760   PRINT USING N5$;E+S
    0x557e0809d2c0 ---------D   08770   PRINT " ";
    0x557e0809d590 ---------D   08780   FOR I = 1 TO 22 STEP 3
    0x557e0809d970 ---------D   08790       PRINT MID$(Q$(7), I, 3); " ";
    0x557e0809da20 ---------D   08800   NEXT I
    0x557e0809dbc0 ---------D   08810   PRINT "        PHOTON TORPEDOES ";
    0x557e0809dcf0 ---------D   08820   PRINT USING N5$;P
    0x557e0809de50 ---------D   08830   PRINT " ";
    0x557e0809e120 ---------D   08840   FOR I = 1 TO 22 STEP 3
    0x557e0809e500 ---------D   08850       PRINT MID$(Q$(8), I, 3); " ";
    0x557e0809e5b0 ---------D   08860   NEXT I
    0x557e0809e750 ---------D   08870   PRINT "        SHIELDS          ";
    0x557e0809e880 ---------D   08880   PRINT USING N5$;S
    0x557e0809e950 ---------D   08890   PRINT O1$
    0x557e0809e9a0 ---------D T 08900   RETURN
    0x557e0809ea20 --------CA   08910   REM
    0x557e0809eb10 --------CA   08920   REM ===============================================================
    0x557e0809eb90 --------CA   08930   REM
    0x557e0809ec50 --------CA   08940   REM *** LIBARY COMPUTER CODE BEGINS HERE
    0x557e0809eea0 --------CA T 08950   IF D(8) >= 0 GOTO 8980
    0x557e0809f010 --------CA   08960   PRINT "COMPUTER DISABLED"
    0x557e0809f0a0 --------CA   08970   GOTO 3160
    0x557e0809f1f0 --------CA T 08980   PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    0x557e0809f350 --------CA   08990   INPUT A
    0x557e0809f4f0 --------CA   09000   IF A < 0 GOTO 3160
    0x557e0809f590 --------CA   09010   PRINT
    0x557e0809f790 --------CA   09020   LET H8 = 1
    0x557e0809f920 --------CA   09030   IF A = 0 GOTO 9270
    0x557e0809faf0 --------CA   09040   IF A > 5 GOTO 9150
    0x557e0809fb90 --------CA   09050   REM
    0x557e0809fc80 --------CA   09060   REM ===============================================================
    0x557e0809fd00 --------CA   09070   REM
    0x557e080a0120 --------CA   09080   ON A GOTO 9690, 9890, 10320, 9970, 9100
    0x557e080a0190 --------CA   09090   REM  GOTO 9150
    0x557e080a0260 --------CA T 09100   REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
    0x557e080a03e0 --------CA   09110   LET H8 = 0
    0x557e080a0570 --------CA   09120   LET G5 = 1
    0x557e080a06b0 --------CA   09130   PRINT "                      THE GALAXY"
    0x557e080a0750 --------CA   09140   GOTO 9280
    0x557e080a08b0 --------CA T 09150   PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    0x557e080a0a00 --------CA   09160   PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x557e080a0b50 --------CA   09170   PRINT "   1 = STATUS REPORT"
    0x557e080a0cb0 --------CA   09180   PRINT "   2 = PHOTON TORPEDO DATA"
    0x557e080a0e10 --------CA   09190   PRINT "   3 = STARBASE NAVIGATION DATA"
    0x557e080a0f70 --------CA   09200   PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    0x557e080a10b0 --------CA   09210   PRINT "   5 = GALAXY 'REGION NAME' MAP"
    0x557e080a1120 --------CA   09220   GOTO 8980
    0x557e080a1180 --------CA   09230   REM
    0x557e080a1270 --------CA   09240   REM ===============================================================
    0x557e080a12f0 --------CA   09250   REM
    0x557e080a13b0 --------CA   09260   REM *** CUM GALACTIC RECORD CODE BEGINS ***
    0x557e080a1840 --------CA T 09270   PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "; Q1; ","; Q2; ":"
    0x557e080a19c0 --------CA T 09280   PRINT "      1     2     3     4     5     6     7     8"
    0x557e080a1bf0 --------CA   09290   LET O3$ = "    ----- ----- ----- ----- ----- ----- ----- -----"
    0x557e080a1cd0 --------CA   09300   PRINT O3$
    0x557e080a1d50 --------CA   09310   REM   DIM N1$(2),N2$(8),N$(5)
    0x557e080a1f80 --------CA   09320   FOR I = 1 TO 8
    0x557e080a21b0 --------CA   09330       LET N1$ = "##"
    0x557e080a2310 --------CA   09340       PRINT USING N1$;I;
    0x557e080a2590 --------CA   09350       PRINT TAB(3); "|";
    0x557e080a2720 --------CA   09360       IF H8 = 0 GOTO 9480
    0x557e080a2980 --------CA   09370       FOR J = 1 TO 8
    0x557e080a2ba0 --------CA   09380       LET N2$ = " ### |"
    0x557e080a2dc0 --------CA   09390       LET N$ = ""
    0x557e080a2f10 --------CA   09400       IF I <> Q1 GOTO 9440
    0x557e080a30a0 --------CA   09410       IF J <> Q2 GOTO 9440
    0x557e080a32b0 --------CA   09420       LET N$ = CHR$(7)
    0x557e080a33b0 --------CA   09430       PRINT N$;
    0x557e080a35c0 --------CA T 09440       PRINT USING N2$;Z(I,J);
    0x557e080a36b0 --------CA   09450       PRINT N$;
    0x557e080a3760 --------CA   09460       NEXT J
    0x557e080a37e0 --------CA   09470       GOTO 9610
    0x557e080a3900 --------CA T 09480       LET Z4 = I
    0x557e080a3a70 --------CA   09490       LET Z5 = 1
    0x557e080a3b00 --------CA   09500       GOSUB 10960
    0x557e080a3f30 --------CA   09510       LET J0 = INT(15 - .5 * LEN(G2$))
    0x557e080a4080 --------CA   09520       PRINT TAB(J0);
    0x557e080a4180 --------CA   09530       PRINT G2$;
    0x557e080a43f0 --------CA   09540       PRINT TAB(27); "|";
    0x557e080a4560 --------CA   09550       LET Z5 = 5
    0x557e080a45f0 --------CA   09560       GOSUB 10960
    0x557e080a49a0 --------CA   09570       LET J0 = INT(39 - .5 * LEN(G2$))
    0x557e080a4af0 --------CA   09580       PRINT TAB(J0);
    0x557e080a4bf0 --------CA   09590       PRINT G2$;
    0x557e080a4e60 --------CA   09600       PRINT TAB(51); "|";
    0x557e080a4ed0 --------CA T 09610       PRINT
    0x557e080a4fa0 --------CA   09620       PRINT O3$
    0x557e080a5050 --------CA   09630   NEXT I
    0x557e080a50d0 --------CA   09640   GOTO 3160
    0x557e080a5130 --------CA   09650   REM
    0x557e080a5220 --------CA   09660   REM ===============================================================
    0x557e080a52a0 --------CA   09670   REM
    0x557e080a5360 --------CA   09680   REM *** STATUS REPORT CODE BEGINS HERE ***
    0x557e080a54b0 --------CA T 09690   PRINT "   STATUS REPORT:"
    0x557e080a5650 --------CA   09700   LET X$ = ""
    0x557e080a57e0 --------CA   09710   IF K9 = 1 GOTO 9730
    0x557e080a59c0 --------CA   09720   LET X$ = "S"
    0x557e080a5ce0 --------CA T 09730   PRINT K9; " KLINGON"; X$; " LEFT"
    0x557e080a6040 --------CA   09740   LET V5 = (T0 + T9) - T
    0x557e080a6210 --------CA   09750   PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES";V5
    0x557e080a63b0 --------CA   09760   LET X$ = ""
    0x557e080a6540 --------CA   09770   IF B9 = 1 GOTO 9830
    0x557e080a6710 --------CA   09780   LET X$ = "S"
    0x557e080a68a0 --------CA   09790   IF B9 <> 0 GOTO 9830
    0x557e080a6a80 --------CA   09800   PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    0x557e080a6bd0 --------CA   09810   PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    0x557e080a6c80 --------CA   09820   GOTO 7270
    0x557e080a7070 --------CA T 09830   PRINT "THE FEDERATION IS MAINTAINING"; B9; " STARBASE"; X$; " IN THE GALAXY"
    0x557e080a70e0 --------CA   09840   GOTO 7270
    0x557e080a7140 --------CA   09850   REM
    0x557e080a7230 --------CA   09860   REM ===============================================================
    0x557e080a72b0 --------CA   09870   REM
    0x557e080a7380 --------CA   09880   REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***
    0x557e080a7500 --------CA T 09890   LET H8 = 0
    0x557e080a7720 --------CA   09900   FOR I = 1 TO 3
    0x557e080a79c0 --------CA   09910       IF K(I, 3) <= 0 GOTO 10300
    0x557e080a7c40 --------CA   09920       LET W1 = K(I, 1)
    0x557e080a7e70 --------CA   09930       LET X = K(I, 2)
    0x557e080a7fa0 --------CA T 09940       LET C1 = S1
    0x557e080a80d0 --------CA   09950       LET A = S2
    0x557e080a8160 --------CA   09960       GOTO10040
    0x557e080a82d0 --------CA T 09970       PRINT "DIRECTION/DISTANCE CALCULAJTOR:"
    0x557e080a8990 --------CA   09980       PRINT "YOU ARE AT QUADRANT ("; Q1; ","; Q2; ") SECTOR ("; S1; ","; S2; ")"
    0x557e080a8ae0 --------CA   09990       PRINT "PLEASE ENTER --"
    0x557e080a8c40 --------CA   10000       PRINT "  INITIAL COORDINATES (X,Y)";
    0x557e080a8d90 --------CA   10010       INPUT C1, A
    0x557e080a8f00 --------CA   10020       PRINT "  FINAL COORDINATES (X,Y)";
    0x557e080a9040 --------CA   10030       INPUT W1, X
    0x557e080a9230 --------CA T 10040       LET X = X - A
    0x557e080a9410 --------CA   10050       LET A = C1 - W1
    0x557e080a95a0 --------CA   10060       IF X < 0 GOTO 10170
    0x557e080a9770 --------CA   10070       IF A < 0 GOTO 10230
    0x557e080a9940 --------CA   10080       IF X > 0 GOTO 10100
    0x557e080a9b10 --------CA   10090       IF A = 0 GOTO 10190
    0x557e080a9cd0 --------CA T 10100       LET C1 = 1
    0x557e080a9ee0 --------CA T 10110       IF ABS(A) <= ABS(X) GOTO 10150
    0x557e080aa540 --------CA   10120       LET V5 = C1 + (((ABS(A) - ABS(X)) + ABS(A)) / ABS(A))
    0x557e080aa6f0 --------CA   10130       PRINT "DIRECTION ="; V5
    0x557e080aa780 --------CA   10140       GOTO 10280
    0x557e080aab60 --------CA T 10150       PRINT "DIRECTION ="; C1 + (ABS(A) / ABS(X))
    0x557e080aabe0 --------CA   10160       GOTO 10280
    0x557e080aad60 --------CA T 10170       IF A > 0 GOTO 10210
    0x557e080aaf30 --------CA   10180       IF X = 0 GOTO 10230
    0x557e080ab0d0 --------CA T 10190       LET C1 = 5
    0x557e080ab140 --------CA   10200       GOTO 10110
    0x557e080ab2a0 --------CA T 10210       LET C1 = 3
    0x557e080ab310 --------CA   10220       GOTO 10240
    0x557e080ab490 --------CA T 10230       LET C1 = 7
    0x557e080ab6a0 --------CA T 10240       IF ABS(A) >= ABS(X) GOTO 10270
    0x557e080abd80 --------CA   10250       PRINT "DIRECTION ="; C1 + (((ABS(X) - ABS(A)) + ABS(X)) / ABS(X))
    0x557e080abe10 --------CA   10260       GOTO 10280
    0x557e080ac210 --------CA T 10270       PRINT "DIRECTION ="; C1 + (ABS(X) / ABS(A))
    0x557e080ac690 --------CA T 10280       PRINT "DISTANCE ="; SQR(X ^ 2 + A ^ 2)
    0x557e080ac820 --------CA   10290       IF H8 = 1 GOTO 3160
    0x557e080ac900 --------CA T 10300   NEXT I
    0x557e080ac990 --------CA   10310   GOTO 3160
    0x557e080acb10 --------CA T 10320   IF B3 <> 0 GOTO 10350
    0x557e080acce0 --------CA   10330   PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    0x557e080acd70 --------CA   10340   GOTO 3160
    0x557e080acea0 --------CA T 10350   PRINT "FROM ENTERPRISE TO STARBASE:"
    0x557e080acfd0 --------CA   10360   LET W1 = B4
    0x557e080ad100 --------CA   10370   LET X = B5
    0x557e080ad190 --------CA   10380   GOTO 9940
    0x557e080ad200 ---------E   10390   REM *** END OF LIBRARY-COMPUTER CODE
    0x557e080ad280 ---------E   10400   REM
    0x557e080ad370 ---------E   10410   REM ===============================================================
    0x557e080ad3f0 ---------E   10420   REM
    0x557e080ad4a0 ---------E   10430   REM S/R FINDS RANDOM HOLE IN QUADRANT
    0x557e080ad8c0 ---------E B 10440   LET R1 = INT(RND(1) * 8 + 1)
    0x557e080adcb0 ---------E   10450   LET R2 = INT(RND(1) * 8 + 1)
    0x557e080ade40 ---------E   10460   LET A$ = "   "
    0x557e080adf70 ---------E   10470   LET Z1 = R1
    0x557e080ae0a0 ---------E   10480   LET Z2 = R2
    0x557e080ae120 ---------E   10490   GOSUB 10840
    0x557e080ae2a0 ---------E   10500   IF Z3 = 0 GOTO 10440
    0x557e080ae320 ---------E   10510   RETURN
    0x557e080ae3a0 ---------F   10520   REM
    0x557e080ae490 ---------F   10530   REM ===============================================================
    0x557e080ae510 ---------F   10540   REM
    0x557e080ae5e0 ---------F G 10550   REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
    0x557e080ae880 ---------F   10560   Z1 = INT(Z1 + .5)
    0x557e080aeb00 ---------F   10570   Z2 = INT(Z2 + .5)
    0x557e080aec90 ---------F   10580   IF Z1 < 1 GOTO 10700
    0x557e080aee60 ---------F   10590   IF Z1 > 8 GOTO 10700
    0x557e080af030 ---------F   10600   IF Z2 < 1 GOTO 10700
    0x557e080af200 ---------F   10610   IF Z2 > 8 GOTO 10700
    0x557e080af5c0 ---------F   10620   DIM Q9(24), A9(3)
    0x557e080af7a0 ---------F   10630   CHANGE Q$(Z1) TO Q9
    0x557e080af950 ---------F   10640   CHANGE A$ TO A9
    0x557e080afc20 ---------F   10650   FOR I8 = 1 TO 3
    0x557e080b00c0 ---------F   10660       Q9(3 * (Z2 - 1) + I8) = A9(I8)
    0x557e080b0170 ---------F   10670   NEXT I8
    0x557e080b0300 ---------F   10680   CHANGE Q9 TO Q$(Z1)
    0x557e080b0390 ---------F   10690   GOTO 10740
    0x557e080b0420 ---------F T 10700   PRINT
    0x557e080b0840 ---------F   10710   PRINT "ERROR IN COORDINATES (Z1,Z2): ("; Z1; ","; Z2; ")"
    0x557e080b0980 ---------F   10720   PRINT "     1 <=  Z1,Z2  <=8    "
    0x557e080b09f0 ---------F   10730   PRINT
    0x557e080b0a40 ---------F T 10740   RETURN
    0x557e080b0ac0 ---------G   10750   REM
    0x557e080b0bb0 ---------G   10760   REM ===============================================================
    0x557e080b0c30 ---------G   10770   REM
    0x557e080b0cf0 ---------G G 10780   REM *** PRINTS DEVICE NAME FROM ARRAY ***
    0x557e080b0e50 ---------G   10790   PRINT D$(R1);
    0x557e080b0ea0 ---------G   10800   RETURN
    0x557e080b0f20 ---------H   10810   REM
    0x557e080b1010 ---------H   10820   REM ===============================================================
    0x557e080b1090 ---------H   10830   REM
    0x557e080b1150 ---------H G 10840   REM *** STRING COMPARISON IN QUADRANT ARRAY ***
    0x557e080b13f0 ---------H   10850   LET Z1 = INT(Z1 + .5)
    0x557e080b1660 ---------H   10860   LET Z2 = INT(Z2 + .5)
    0x557e080b1800 ---------H   10870   LET Z3 = 0
    0x557e080b1d10 ---------H   10880   IF MID$(Q$(Z1), (3 * Z2 - 2), 3) <> A$ GOTO 10900
    0x557e080b1eb0 ---------H   10890   Z3 = 1
    0x557e080b1f00 ---------H T 10900   RETURN
    0x557e080b1f80 ---------I   10910   REM
    0x557e080b2070 ---------I   10920   REM ===============================================================
    0x557e080b20f0 ---------I   10930   REM
    0x557e080b21d0 ---------I   10940   REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    0x557e080b2290 ---------I   10950   REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)
    0x557e080b24a0 ---------I G 10960   LET L2 = 2
    0x557e080b2630 ---------I   10970   IF Z5 >= 5 GOTO 10990
    0x557e080b27e0 ---------I   10980   LET L2 = 1
    0x557e080b2c40 ---------I T 10990   LET L3 = 2 * (Z4 - 1) + L2
    0x557e080b2de0 ---------I   11000   LET G2$ = G1$(L3)
    0x557e080b2f70 ---------I   11010   IF G5 = 1 GOTO 11090
    0x557e080b30e0 ---------I   11020   LET L3 = Z5
    0x557e080b3270 ---------I   11030   IF Z5 <= 4 GOTO 11050
    0x557e080b34b0 ---------I   11040   LET L3 = Z5 - 4
    0x557e080b36d0 ---------I T 11050   LET G3$ = "IV"
    0x557e080b3860 ---------I   11060   IF L3 = 4 GOTO 11080
    0x557e080b3b40 ---------I   11070   LET G3$ = MID$(G4$, 1, L3)
    0x557e080b3e10 ---------I T 11080   G2$ = G2$ + " " + G3$
    0x557e080b3e60 ---------I T 11090   RETURN
    0x557e080b3ec0 --------CA T 11100   STOP
    0x557e080b3f20 ---------A   11110   END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01270      07960T
     01280      01200T
     01990      01940T
     02020      01950T
     02050      01960T
     02070      01980T, 02010T, 02040T
     02110      02080T
     02130      02100T
     02270      02240T
     02280      02220T
     02330      02280T
     02460      05210T
     02660      02620T
     02670      02650T
     02760      02720T, 02740T
     02770      02560T, 02570T, 02580T, 02590T
     03150      03310T, 04780T
     03160      03440T, 03530T, 03620T, 03660T, 03750T, 03760T, 05400T, 05620T, 
                05700T, 05730T, 05800T, 06090T, 06160T, 06190T, 06240T, 07030T, 
                07100T, 07160T, 07220T, 07290T, 07350T, 07440T, 08970T, 09000T, 
                09640T, 10290T, 10310T, 10340T
     03190      03160T
     03230      03170T, 03180T
     03310      03270T, 03280T, 03290T
     03320      03260T
     03490      03310T, 03700T
     03520      03550T, 03560T
     03540      03510T
     03570      03540T
     03630      03590T
     03670      03630T
     03710      03670T, 03680T
     03840      03720T
     03950      03850T
     04050      03990T
     04120      04090T
     04160      04060T, 04080T
     04310      04230T
     04410      04210T, 04300T
     04640      04580T
     04650      04630T, 05180T
     04750      04730T
     04800      04540T, 04550T, 04560T, 04570T
     04910      04870T
     04950      04910T
     04990      04950T
     05030      04990T
     05070      05030T
     05110      05070T
     05180      05110T
     05260      04710G, 05200G
     05330      05270T, 05310T
     05380      03310T
     05410      05380T
     05560      05520T, 05530T
     05580      05500T, 05510T
     05670      03310T
     05710      05670T
     05740      05710T
     05760      05740T
     05770      05810T
     05860      05840T
     05940      05900T
     05990      05960T
     06080      05880T, 05930T, 05980T
     06140      03310T
     06170      06140T
     06200      06170T, 06270T, 06840T
     06230      06250T
     06250      06220T
     06290      06260T
     06360      06310T
     06390      06350T
     06440      06570T
     06700      06680T
     06710      06690T
     06730      06620T
     06800      06770T
     06920      06880T
     06950      06720T
     07010      06480T, 06490T, 06500T, 06510T
     07020      06790T, 07000T
     07080      03310T, 03790T
     07110      07080T, 07170T
     07170      07130T, 07140T
     07270      03310T, 09820T, 09840T
     07290      07560T
     07340      07320T
     07390      07370T
     07490      07270T
     07610      03960G, 05830G, 07020G
     07650      07620T
     07810      07660T, 07720T, 07730T, 07740T
     07820      07610T, 07640T
     07830      04760T, 05170T
     07850      07700T
     07870      03220T
     07880      03310T, 06910T, 07840T
     07900      08020T
     07980      06070T, 06660T
     08070      03150G
     08180      08090T, 08100T, 08110T, 08120T
     08220      08170T
     08290      08210T
     08330      08290T
     08350      08300T
     08360      08280T, 08320T, 08340T
     08410      08360T
     08900      08400T
     08950      03310T
     08980      08950T, 09220T
     09100      09080T
     09150      09040T
     09270      09030T
     09280      09140T
     09440      09400T, 09410T
     09480      09360T
     09610      09470T
     09690      09080T
     09730      09710T
     09830      09770T, 09790T
     09890      09080T
     09940      10380T
     09970      09080T
     10040      09960T
     10100      10080T
     10110      10200T
     10150      10110T
     10170      10060T
     10190      10090T
     10210      10170T
     10230      10070T, 10180T
     10240      10220T
     10270      10240T
     10280      10140T, 10160T, 10260T
     10300      09910T
     10320      09080T
     10350      10320T
     10440      02900G, 03000G, 03090G, 03900G, 10500T
     10550      02880G, 02940G, 03040G, 03130G, 03890G, 03940G, 04440G, 04700G, 
                06050G, 06980G
     10700      10580T, 10590T, 10600T, 10610T
     10740      10690T
     10780      04140G, 04270G, 04340G, 07520G, 07790G
     10840      06560G, 06610G, 06760G, 06830G, 08160G, 10490G
     10900      10880T
     10960      02600G, 09500G, 09560G
     10990      10970T
     11050      11030T
     11080      11060T
     11090      11010T
     11100      07970T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x557e08040d00   0x557e08040d00   0x557e080b3f20   0x557e080b3f20 
   B) 0x557e08076300   0x557e080767f0   0x557e08077220   0x557e08077220 
   C) 0x557e08046760   0x557e0808f7d0   0x557e080929d0   0x557e080b3ec0 
   D) 0x557e08094a70   0x557e08095020   0x557e0809e9a0   0x557e0809e9a0 
   E) 0x557e080ad200   0x557e080ad8c0   0x557e080ae320   0x557e080ae320 
   F) 0x557e080ae3a0   0x557e080ae5e0   0x557e080b0a40   0x557e080b0a40 
   G) 0x557e080b0ac0   0x557e080b0cf0   0x557e080b0ea0   0x557e080b0ea0 
   H) 0x557e080b0f20   0x557e080b1150   0x557e080b1f00   0x557e080b1f00 
   I) 0x557e080b1f80   0x557e080b24a0   0x557e080b3e60   0x557e080b3e60 

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!
    NOTE: Routine G overlaps, or is tangled with, routine A!
    NOTE: Routine H overlaps, or is tangled with, routine A!
    NOTE: Routine I overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine C!
    NOTE: Routine E overlaps, or is tangled with, routine C!
    NOTE: Routine F overlaps, or is tangled with, routine C!
    NOTE: Routine G overlaps, or is tangled with, routine C!
    NOTE: Routine H overlaps, or is tangled with, routine C!
    NOTE: Routine I overlaps, or is tangled with, routine C!

 */

