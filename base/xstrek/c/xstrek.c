/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/xstrek.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6272a1724db0 ---------A   01000    REM (VERSION "STREK7", 1/12/75 RCL)
    0x6272a1723b80 ---------A   01010    REM
    0x6272a1724f30 ---------A   01020    REM
    0x6272a1724e70 ---------A   01030    REM ***         *** STAR TREK ***       ***
    0x6272a1723fc0 ---------A   01040    REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    0x6272a17132b0 ---------A   01050    REM *** AS SEEN ON THE STAR TREK TV SHOW.
    0x6272a17227f0 ---------A   01060    REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    0x6272a1723040 ---------A   01070    REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    0x6272a1722e90 ---------A   01080    REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY
    0x6272a17232d0 ---------A   01090    REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974,
    0x6272a17234d0 ---------A   01100    REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    0x6272a1724740 ---------A   01110    REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    0x6272a1722be0 ---------A   01120    REM *** ADDRESS TO:   R.C.LEEDOM
    0x6272a1725100 ---------A   01130    REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    0x6272a17251a0 ---------A   01140    REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    0x6272a1725230 ---------A   01150    RANDOMIZE
    0x6272a17226d0 ---------A   01160    PRINT TAB(15); "* * * STAR TREK * * *"
    0x6272a1722670 ---------A   01170    PRINT
    0x6272a1723780 ---------A   01180    PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    0x6272a1723860 ---------A   01190    INPUT A$
    0x6272a172aa00 ---------A   01200    IF A$ <> "YES" GOTO 1280
    0x6272a172aaa0 ---------A   01210    PRINT "PLEASE WAIT  . . .";
    0x6272a172ab00 ---------A   01220    CHAIN "DSK:STINST.BAS"
    0x6272a172ab60 ----------   01230    PRINT
    0x6272a172abc0 ---------A   01240    REM
    0x6272a172acc0 ---------A   01250    REM ===============================================================
    0x6272a172ad50 ---------A   01260    REM
    0x6272a172add0 --------CA T 01270    REM  PROGRAM BEGINS HERE .....
    0x6272a172b0c0 --------CA T 01280    DIM Q$(8)
    0x6272a172b460 --------CA   01290    FOR I = 1 TO 8
    0x6272a172b840 --------CA   01300        Q$(I) = SPACE$(24)
    0x6272a172b970 --------CA   01310    NEXT I
    0x6272a172c920 --------CA   01320    DIM G(8, 8), C(9, 2), K(3, 3), N(3), Z(8, 8)
    0x6272a172d2d0 --------CA   01330    LET T = INT(RND(1) * 20 + 20) * 100
    0x6272a172d6a0 --------CA   01340    LET P1 = 3.14159 / 4
    0x6272a172d990 --------CA   01350    LET T0 = T
    0x6272a172dc60 --------CA   01360    LET T9 = 30
    0x6272a172df30 --------CA   01370    LET D0 = 0
    0x6272a172e200 --------CA   01380    LET E0 = 3000
    0x6272a172e4f0 --------CA   01390    LET E = E0
    0x6272a172e7c0 --------CA   01400    LET P = 10
    0x6272a172eab0 --------CA   01410    LET P0 = P
    0x6272a172ed80 --------CA   01420    LET S9 = 200
    0x6272a172f080 --------CA   01430    LET S = 0
    0x6272a1730090 --------CA   01440    DEF FND (D) = SQR((K(I, 1) - S1) ^ 2 + (K(I, 2) - S2) ^ 2)
    0x6272a1730100 --------CA   01450    REM
    0x6272a1730200 --------CA   01460    REM ===============================================================
    0x6272a1730290 --------CA   01470    REM
    0x6272a1730350 --------CA   01480    REM INITIALIZE INTERPRISE'S POSITION
    0x6272a1730a20 --------CA   01490    LET Q1 = INT(RND(1) * 8 + 1)
    0x6272a17310c0 --------CA   01500    LET Q2 = INT(RND(1) * 8 + 1)
    0x6272a17316a0 --------CA   01510    LET S1 = INT(RND(1) * 8 + 1)
    0x6272a1731c70 --------CA   01520    LET S2 = INT(RND(1) * 8 + 1)
    0x6272a1731f50 --------CA   01530    MAT C = ZER
    0x6272a1732300 --------CA   01540    LET C(4, 1) = -1
    0x6272a17326a0 --------CA   01550    LET C(3, 1) = -1
    0x6272a1732a40 --------CA   01560    LET C(2, 1) = -1
    0x6272a1732de0 --------CA   01570    LET C(4, 2) = -1
    0x6272a1733180 --------CA   01580    LET C(5, 2) = -1
    0x6272a1733510 --------CA   01590    LET C(6, 2) = -1
    0x6272a17338a0 --------CA   01600    LET C(1, 2) = 1
    0x6272a1733c30 --------CA   01610    LET C(2, 2) = 1
    0x6272a1733fc0 --------CA   01620    LET C(6, 1) = 1
    0x6272a1734350 --------CA   01630    LET C(7, 1) = 1
    0x6272a17346e0 --------CA   01640    LET C(8, 1) = 1
    0x6272a1734e80 --------CA   01650    LET C(8, 2) = 1
    0x6272a1735210 --------CA   01660    LET C(9, 2) = 1
    0x6272a1735420 --------CA   01670    DIM D(8)
    0x6272a1735700 --------CA   01680    FOR I = 1 TO 8
    0x6272a1735a00 --------CA   01690        LET D(I) = 0
    0x6272a1735b30 --------CA   01700    NEXT I
    0x6272a1735e20 --------CA   01710    DIM D$(8)
    0x6272a1735ec0 --------CA   01720    RESTORE
    0x6272a1736c70 --------CA   01730    READ D$(1), D$(2), D$(3), D$(4), D$(5), D$(6), D$(7), D$(8)
    0x6272a17370a0 --------CA   01740    DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    0x6272a1737490 --------CA   01750    DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    0x6272a1737780 --------CA   01760    LET G4$ = "III"
    0x6272a1737a50 --------CA   01770    DIM G1$(16)
    0x6272a1737d20 --------CA   01780    FOR I = 1 TO 16
    0x6272a1737f60 --------CA   01790        READ G1$(I)
    0x6272a1738090 --------CA   01800    NEXT I
    0x6272a17387b0 --------CA   01810    DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    0x6272a1738ca0 --------CA   01820    DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    0x6272a1739090 --------CA   01830    DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    0x6272a1739360 --------CA   01840    LET B9 = 0
    0x6272a1739640 --------CA   01850    LET K9 = 0
    0x6272a1739930 --------CA   01860    LET A1$ = "NSLPTSDCX"
    0x6272a17399a0 --------CA   01870    REM
    0x6272a1739aa0 --------CA   01880    REM ===============================================================
    0x6272a1739b30 --------CA   01890    REM
    0x6272a1739bf0 --------CA   01900    REM  SET UP WHAT EXISTS IN GALAXY ...
    0x6272a1739ef0 --------CA   01910    FOR I = 1 TO 8
    0x6272a173a2a0 --------CA   01920        FOR J = 1 TO 8
    0x6272a173a670 --------CA   01930        LET R1 = RND(1)
    0x6272a173a8a0 --------CA   01940        IF R1 > .98 GOTO 1990
    0x6272a173ab10 --------CA   01950        IF R1 > .95 GOTO 2020
    0x6272a173ad80 --------CA   01960        IF R1 > .8 GOTO 2050
    0x6272a173b080 --------CA   01970        LET K3 = 0
    0x6272a173b0f0 --------CA   01980        GOTO 2070
    0x6272a173b310 --------CA T 01990        LET K3 = 3
    0x6272a173b640 --------CA   02000        LET K9 = K9 + 3
    0x6272a173b6b0 --------CA   02010        GOTO 2070
    0x6272a173b8d0 --------CA T 02020        LET K3 = 2
    0x6272a173bc00 --------CA   02030        LET K9 = K9 + 2
    0x6272a173bc70 --------CA   02040        GOTO 2070
    0x6272a173be90 --------CA T 02050        LET K3 = 1
    0x6272a173c1d0 --------CA   02060        LET K9 = K9 + 1
    0x6272a173c4d0 --------CA T 02070        LET R1 = RND(1)
    0x6272a173c700 --------CA   02080        IF R1 > .96 GOTO 2110
    0x6272a173ca00 --------CA   02090        LET B3 = 0
    0x6272a173ca70 --------CA   02100        GOTO 2130
    0x6272a173cc90 --------CA T 02110        LET B3 = 1
    0x6272a173cfe0 --------CA   02120        LET B9 = B9 + 1
    0x6272a173d690 --------CA T 02130        LET S3 = INT(RND(1) * 8 + 1)
    0x6272a173dee0 --------CA   02140        LET G(I, J) = K3 * 100 + B3 * 10 + S3
    0x6272a173df70 --------CA   02150        REM K3=#KLINGONS B3=#STARBASES S3=#STARS
    0x6272a173e370 --------CA   02160        LET Z(I, J) = 0
    0x6272a173e4a0 --------CA   02170        NEXT J
    0x6272a173e5f0 --------CA   02180    NEXT I
    0x6272a173e900 --------CA   02190    LET K7 = K9
    0x6272a173ec00 --------CA   02200    LET X$ = ""
    0x6272a173ef00 --------CA   02210    LET X0$ = " IS "
    0x6272a173f130 --------CA   02220    IF B9 <> 0 GOTO 2280
    0x6272a173f380 --------CA   02230    LET B9 = 1
    0x6272a173f730 --------CA   02240    IF G(6, 3) >= 200 GOTO 2270
    0x6272a173fda0 --------CA   02250    LET G(6, 3) = G(6, 3) + 100
    0x6272a17400e0 --------CA   02260    LET K9 = K9 + 1
    0x6272a1740720 --------CA T 02270    LET G(6, 3) = G(6, 3) + 10
    0x6272a1740950 --------CA T 02280    IF B9 = 1 GOTO 2330
    0x6272a17413d0 --------CA   02290    LET X$ = "S"
    0x6272a1741600 --------CA   02300    LET X0$ = " ARE "
    0x6272a1741750 --------CA   02310    PRINT " "
    0x6272a17418d0 --------CA   02320    PRINT " "
    0x6272a1741a40 --------CA T 02330    PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    0x6272a1741be0 --------CA   02340    PRINT " "
    0x6272a1741f90 --------CA   02350    PRINT "    DESTROY THE "; K9; " KLINGON WARSHIPS WHICH HAVE INVADED"
    0x6272a1742160 --------CA   02360    PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x6272a1742920 --------CA   02370    PRINT "  ON STARDATE"; T0 + T9; "; THIS GIVES YOU"; T9; " DAYS.  THERE"; X0$
    0x6272a1742ea0 --------CA   02380    PRINT " "; B9; "STARBASE"; X$; " IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    0x6272a1743030 --------CA   02390    PRINT " "
    0x6272a17431d0 --------CA   02400    PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    0x6272a1743330 --------CA   02410    INPUT A$
    0x6272a17433b0 --------CA   02420    REM
    0x6272a17434b0 --------CA   02430    REM ===============================================================
    0x6272a1743540 --------CA   02440    REM
    0x6272a1743610 --------CA   02450    REM *** HERE ANY TIME ENTER NEW QUADRANT ...
    0x6272a1743920 --------CA T 02460    LET Z4 = Q1
    0x6272a1743c10 --------CA   02470    LET Z5 = Q2
    0x6272a1743e20 --------CA   02480    LET K3 = 0
    0x6272a1744030 --------CA   02490    LET B3 = 0
    0x6272a1744240 --------CA   02500    LET S3 = 0
    0x6272a1744520 --------CA   02510    LET G5 = 0
    0x6272a17449d0 --------CA   02520    LET D4 = .5 * RND(1)
    0x6272a1744d70 --------CA   02530    FOR I7 = 1 TO 8
    0x6272a1745150 --------CA   02540        Q$(I7) = SPACE$(24)
    0x6272a1745280 --------CA   02550    NEXT I7
    0x6272a17454e0 --------CA   02560    IF Q1 < 1 GOTO 2770
    0x6272a1745750 --------CA   02570    IF Q1 > 8 GOTO 2770
    0x6272a17459c0 --------CA   02580    IF Q2 < 1 GOTO 2770
    0x6272a1745c30 --------CA   02590    IF Q2 > 8 GOTO 2770
    0x6272a1745cd0 --------CA   02600    GOSUB 10960
    0x6272a1745e30 --------CA   02610    PRINT " "
    0x6272a1746090 --------CA   02620    IF T <> T0 GOTO 2660
    0x6272a1746280 --------CA   02630    PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    0x6272a17466b0 --------CA   02640    PRINT "IN THE GALACTIC QUADRANT, '"; G2$; "'."
    0x6272a1746750 --------CA   02650    GOTO 2670
    0x6272a1746aa0 --------CA T 02660    PRINT "NOW ENTERING "; G2$; " QUADRANT ..."
    0x6272a1746c10 --------CA T 02670    PRINT " "
    0x6272a17471d0 --------CA   02680    LET X = G(Q1, Q2) * .01
    0x6272a17474f0 --------CA   02690    LET K3 = INT(X)
    0x6272a1747a80 --------CA   02700    LET B3 = INT((X - K3) * 10)
    0x6272a1748440 --------CA   02710    LET S3 = G(Q1, Q2) - INT(G(Q1, Q2) * .1) * 10
    0x6272a1748670 --------CA   02720    IF K3 = 0 GOTO 2760
    0x6272a1748830 --------CA   02730    PRINT "COMBAT AREA      CONDITION RED"
    0x6272a1748a70 --------CA   02740    IF S > 200 GOTO 2760
    0x6272a1748c20 --------CA   02750    PRINT "   SHIELDS DANGEROUSLY LOW"
    0x6272a1748e40 --------CA T 02760    MAT K = ZER
    0x6272a1749130 --------CA T 02770    FOR I = 1 TO 3
    0x6272a17494f0 --------CA   02780        LET K(I, 3) = 0
    0x6272a1749620 --------CA   02790    NEXT I
    0x6272a17496b0 --------CA   02800    REM
    0x6272a17497b0 --------CA   02810    REM ===============================================================
    0x6272a1749840 --------CA   02820    REM
    0x6272a1749930 --------CA   02830    REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS,
    0x6272a1749a00 --------CA   02840    REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    0x6272a1749c50 --------CA   02850    LET A$ = "<*>"
    0x6272a1749f40 --------CA   02860    LET Z1 = S1
    0x6272a174a230 --------CA   02870    LET Z2 = S2
    0x6272a174a2a0 --------CA   02880    GOSUB 10550
    0x6272a174a590 --------CA   02890    FOR I = 1 TO K3
    0x6272a174a620 --------CA   02900        GOSUB 10440
    0x6272a174a850 --------CA   02910        LET A$ = "+++"
    0x6272a174aa80 --------CA   02920        LET Z1 = R1
    0x6272a174ad70 --------CA   02930        LET Z2 = R2
    0x6272a174adf0 --------CA   02940        GOSUB 10550
    0x6272a174b1d0 --------CA   02950        LET K(I, 1) = R1
    0x6272a174b5b0 --------CA   02960        LET K(I, 2) = R2
    0x6272a174b960 --------CA   02970        LET K(I, 3) = 200
    0x6272a174ba90 --------CA   02980    NEXT I
    0x6272a174bda0 --------CA   02990    FOR I = 1 TO B3
    0x6272a174be30 --------CA   03000        GOSUB 10440
    0x6272a174c060 --------CA   03010        LET A$ = ">!<"
    0x6272a174c290 --------CA   03020        LET Z1 = R1
    0x6272a174c4c0 --------CA   03030        LET Z2 = R2
    0x6272a174c530 --------CA   03040        GOSUB 10550
    0x6272a174c820 --------CA   03050        LET B4 = Z1
    0x6272a174cb10 --------CA   03060        LET B5 = Z2
    0x6272a174cc40 --------CA   03070    NEXT I
    0x6272a174cf50 --------CA   03080    FOR I = 1 TO S3
    0x6272a174cfe0 --------CA   03090        GOSUB 10440
    0x6272a174d210 --------CA   03100        LET A$ = " * "
    0x6272a174d440 --------CA   03110        LET Z1 = R1
    0x6272a174d670 --------CA   03120        LET Z2 = R2
    0x6272a174d6e0 --------CA   03130        GOSUB 10550
    0x6272a174d810 --------CA   03140    NEXT I
    0x6272a174d8b0 --------CA T 03150    GOSUB 8070
    0x6272a174dc00 --------CA T 03160    IF S + E <= 10 GOTO 3190
    0x6272a174de70 --------CA   03170    IF E > 10 GOTO 3230
    0x6272a174e1a0 --------CA   03180    IF D(7) >= 0 GOTO 3230
    0x6272a174e7e0 --------CA T 03190    PRINT CHR$(7); "** FATAL ERROR **"; CHR$(7); "   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    0x6272a174e9b0 --------CA   03200    PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    0x6272a174eb40 --------CA   03210    PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    0x6272a174ebd0 --------CA   03220    GOTO 7870
    0x6272a174ed40 --------CA T 03230    PRINT "COMMAND";
    0x6272a174eea0 --------CA   03240    INPUT A$
    0x6272a174f1b0 --------CA   03250    FOR I = 1 TO 9
    0x6272a174f8f0 --------CA   03260        IF MID$(A$, 1, 1) <> MID$(A1$, I, 1) GOTO 3320
    0x6272a174fb60 --------CA   03270        IF I <> 2 GOTO 3310
    0x6272a174feb0 --------CA   03280        IF LEN(A$) < 2 GOTO 3310
    0x6272a17503b0 --------CA   03290        IF MID$(A$, 2, 1) = "R" GOTO 3310
    0x6272a1750630 --------CA   03300        LET I = 6
    0x6272a1750e40 --------CA T 03310        ON I GOTO 3490, 3150, 5380, 5670, 6140, 7080, 7270, 8950, 7880
    0x6272a1750f80 --------CA T 03320    NEXT I
    0x6272a1751130 --------CA   03330    PRINT "ENTER ONE OF THE FOLLOWING:"
    0x6272a17512b0 --------CA   03340    PRINT "  NAV (TO SET COURSE)"
    0x6272a1751440 --------CA   03350    PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    0x6272a17515c0 --------CA   03360    PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    0x6272a1751750 --------CA   03370    PRINT "  PHA (TO FIRE PHASERS)"
    0x6272a17518e0 --------CA   03380    PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    0x6272a1751a70 --------CA   03390    PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    0x6272a1751c00 --------CA   03400    PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    0x6272a1751d90 --------CA   03410    PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    0x6272a1751f00 --------CA   03420    PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    0x6272a1752060 --------CA   03430    PRINT " "
    0x6272a17520e0 --------CA   03440    GOTO 3160
    0x6272a1752150 ---------A   03450    REM
    0x6272a1752250 ---------A   03460    REM ===============================================================
    0x6272a17522e0 ---------A   03470    REM
    0x6272a1752390 ---------A   03480    REM  COURSE CONTROL BEGINS HERE
    0x6272a1752530 --------CA T 03490    PRINT "COURSE(1-9)";
    0x6272a1752760 --------CA   03500    INPUT C1
    0x6272a17529a0 --------CA   03510    IF C1 >= 1 GOTO 3540
    0x6272a1752b70 --------CA T 03520    PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x6272a1752c00 --------CA   03530    GOTO 3160
    0x6272a1752e30 --------CA T 03540    IF C1 < 9 GOTO 3570
    0x6272a17530a0 --------CA   03550    IF C1 > 9 GOTO 3520
    0x6272a1753150 --------CA   03560    GOTO 3520
    0x6272a1740af0 --------CA T 03570    PRINT "WARP FACTOR (0-8)";
    0x6272a1740d20 --------CA   03580    INPUT W1
    0x6272a1740f60 --------CA   03590    IF W1 > 0 GOTO 3630
    0x6272a1741150 --------CA   03600    PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    0x6272a1754490 --------CA   03610    PRINT "          SET WARP "; W1; " !"
    0x6272a1754520 --------CA   03620    GOTO 3160
    0x6272a1754750 --------CA T 03630    IF W1 <= 8 GOTO 3670
    0x6272a1754940 --------CA   03640    PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    0x6272a1754ca0 --------CA   03650    PRINT "         TAKE WARP "; W1; "!/"
    0x6272a1754d30 --------CA   03660    GOTO 3160
    0x6272a1755020 --------CA T 03670    IF D(1) >= 0 GOTO 3710
    0x6272a1755290 --------CA   03680    IF W1 <= .2 GOTO 3710
    0x6272a1755460 --------CA   03690    PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    0x6272a17554f0 --------CA   03700    GOTO 3490
    0x6272a1755a10 --------CA T 03710    LET N = INT(W1 * 8 + .5)
    0x6272a1755d60 --------CA   03720    IF E - N >= 0 GOTO 3840
    0x6272a1755f50 --------CA   03730    PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x6272a17562d0 --------CA   03740    PRINT "   FOR MANEUVERING AT WARP"; W1; "!'"
    0x6272a1756650 --------CA   03750    IF S < N - E GOTO 3160
    0x6272a1756980 --------CA   03760    IF D(7) < 0 GOTO 3160
    0x6272a1756d70 --------CA   03770    PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"; S; " UNITS"
    0x6272a1756ef0 --------CA   03780    PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    0x6272a1756f70 --------CA   03790    GOTO 7080
    0x6272a1756fe0 ---------A   03800    REM
    0x6272a17570e0 ---------A   03810    REM ===============================================================
    0x6272a1757170 ---------A   03820    REM
    0x6272a1757240 ---------A   03830    REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...
    0x6272a1757560 --------CA T 03840    FOR I = 1 TO K3
    0x6272a1757920 --------CA   03850        IF K(1, 3) <= 0 GOTO 3950
    0x6272a1757ba0 --------CA   03860        LET A$ = "   "
    0x6272a1757f80 --------CA   03870        LET Z1 = K(I, 1)
    0x6272a1758350 --------CA   03880        LET Z2 = K(I, 2)
    0x6272a17583c0 --------CA   03890        GOSUB 10550
    0x6272a1758440 --------CA   03900        GOSUB 10440
    0x6272a1758820 --------CA   03910        LET K(I, 1) = Z1
    0x6272a1758c00 --------CA   03920        LET K(I, 2) = Z2
    0x6272a1758e30 --------CA   03930        LET A$ = "+++"
    0x6272a1758ea0 --------CA   03940        GOSUB 10550
    0x6272a1758fd0 --------CA T 03950    NEXT I
    0x6272a1759060 --------CA   03960    GOSUB 7610
    0x6272a1759330 --------CA   03970    LET D1 = 0
    0x6272a1759630 --------CA   03980    LET D6 = W1
    0x6272a1759860 --------CA   03990    IF W1 < 1 GOTO 4050
    0x6272a1759aa0 --------CA   04000    LET D6 = 1
    0x6272a1759b10 --------CA   04010    REM
    0x6272a1759c10 --------CA   04020    REM ===============================================================
    0x6272a1759ca0 --------CA   04030    REM
    0x6272a1759d50 --------CA   04040    REM MAKE REPAIRS TO SHIP
    0x6272a175a050 --------CA T 04050    FOR I = 1 TO 8
    0x6272a175a370 --------CA   04060        IF D(I) >= 0 GOTO 4160
    0x6272a175a8b0 --------CA   04070        LET D(I) = D(I) + 6
    0x6272a175abc0 --------CA   04080        IF D(I) < 0 GOTO 4160
    0x6272a175ae30 --------CA   04090        IF D1 = 1 GOTO 4120
    0x6272a175b090 --------CA   04100        LET D1 = 1
    0x6272a175b200 --------CA   04110        PRINT "DAMAGE CONTROL REPORT:"
    0x6272a175b3c0 --------CA T 04120        PRINT TAB(8);
    0x6272a175b600 --------CA   04130        LET R1 = I
    0x6272a175b680 --------CA   04140        GOSUB 10780
    0x6272a175b7d0 --------CA   04150        PRINT " REPAIR COMPLETED"
    0x6272a175b910 --------CA T 04160    NEXT I
    0x6272a175b9a0 --------CA   04170    REM
    0x6272a175baa0 --------CA   04180    REM ===============================================================
    0x6272a175bb30 --------CA   04190    REM
    0x6272a175bbf0 --------CA   04200    REM DAMAGE/IMPROVEMENT DURING SOME VES
    0x6272a175bf10 --------CA   04210    IF RND(1) > .2 GOTO 4410
    0x6272a175c530 --------CA   04220    LET R1 = INT(RND(1) * 8 + 1)
    0x6272a175c820 --------CA   04230    IF RND(1) >= .6 GOTO 4310
    0x6272a175d080 --------CA   04240    LET D(R1) = D(R1) - (RND(1) * 5 + 1)
    0x6272a175d1e0 --------CA   04250    PRINT " "
    0x6272a175d370 --------CA   04260    PRINT "DAMAGE CONTROL REPORT:";
    0x6272a175d400 --------CA   04270    GOSUB 10780
    0x6272a175d550 --------CA   04280    PRINT " DAMAGED"
    0x6272a175d6b0 --------CA   04290    PRINT " "
    0x6272a175d750 --------CA   04300    GOTO 4410
    0x6272a175df60 --------CA T 04310    LET D(R1) = D(R1) + (RND(1) * 3 + 1)
    0x6272a175e0c0 --------CA   04320    PRINT " "
    0x6272a175e250 --------CA   04330    PRINT "DAMAGE CONTROL REPORT:";
    0x6272a175e2f0 --------CA   04340    GOSUB 10780
    0x6272a175e450 --------CA   04350    PRINT " STATE OF REPAIR IMPROVED"
    0x6272a175e5b0 --------CA   04360    PRINT " "
    0x6272a175e630 --------CA   04370    REM
    0x6272a175e730 --------CA   04380    REM ===============================================================
    0x6272a175e7c0 --------CA   04390    REM
    0x6272a175e870 --------CA   04400    REM BEGIN MOVING STARSHIP **
    0x6272a175ead0 --------CA T 04410    LET A$ = "   "
    0x6272a175edf0 --------CA   04420    LET Z1 = INT(S1)
    0x6272a175f100 --------CA   04430    LET Z2 = INT(S2)
    0x6272a175f180 --------CA   04440    GOSUB 10550
    0x6272a175f7b0 --------CA   04450    LET X1 = -SIN((C1 - 1) * P1)
    0x6272a175f9e0 --------CA   04460    LET X = S1
    0x6272a175fce0 --------CA   04470    LET Y = S2
    0x6272a1760310 --------CA   04480    LET X2 = COS((C1 - 1) * P1)
    0x6272a1760600 --------CA   04490    LET Q4 = Q1
    0x6272a17608f0 --------CA   04500    LET Q5 = Q2
    0x6272a1760bf0 --------CA   04510    FOR I = 1 TO N
    0x6272a1760f60 --------CA   04520        LET S1 = S1 + X1
    0x6272a17612c0 --------CA   04530        LET S2 = S2 + X2
    0x6272a17614f0 --------CA   04540        IF S1 < .5 GOTO 4800
    0x6272a1761760 --------CA   04550        IF S1 >= 8.5 GOTO 4800
    0x6272a17619d0 --------CA   04560        IF S2 < .5 GOTO 4800
    0x6272a1761c40 --------CA   04570        IF S2 >= 8.5 GOTO 4800
    0x6272a1762860 --------CA   04580        IF MID$(Q$(INT(S1 + .5)), (3 * INT(S2 + .5) - 2), 3) = "   " GOTO 4640
    0x6272a1762c00 --------CA   04590        LET S1 = S1 - X1
    0x6272a1762f80 --------CA   04600        LET S2 = S2 - X2
    0x6272a1763410 --------CA   04610        PRINT "WARP ENGINES SHUT DOWN AT SECTOR "; INT(S1 + .5);
    0x6272a1763960 --------CA   04620        PRINT ","; INT(S2 + .5); " DUE TO BAD NAVIGATION"
    0x6272a17639e0 --------CA   04630        GOTO 4650
    0x6272a1763b10 --------CA T 04640    NEXT I
    0x6272a1763d70 --------CA T 04650    LET A$ = "<*>"
    0x6272a1764190 --------CA   04660    S1 = INT(S1 + .5)
    0x6272a17645b0 --------CA   04670    S2 = INT(S2 + .5)
    0x6272a17648d0 --------CA   04680    LET Z1 = INT(S1)
    0x6272a1764be0 --------CA   04690    LET Z2 = INT(S2)
    0x6272a1764c50 --------CA   04700    GOSUB 10550
    0x6272a1764cc0 --------CA   04710    GOSUB 5260
    0x6272a1764fa0 --------CA   04720    LET T8 = 1
    0x6272a17651d0 --------CA   04730    IF W1 >= 1 GOTO 4750
    0x6272a1765720 --------CA   04740    LET T8 = .1 * INT(10 * W1)
    0x6272a1765a80 --------CA T 04750    LET T = T + T8
    0x6272a1765df0 --------CA   04760    IF T > T0 + T9 GOTO 7830
    0x6272a1765ec0 --------CA   04770    REM SEE IF DOCKED, THEN GET COMMAND
    0x6272a1765f60 --------CA   04780    GOTO 3150
    0x6272a1765fe0 ---------A   04790    REM EXCEEDED QUADRANT LIMITS
    0x6272a17666b0 --------CA T 04800    LET X = 8 * Q1 + X + N * X1
    0x6272a1766d50 --------CA   04810    LET Y = 8 * Q2 + Y + N * X2
    0x6272a1767170 --------CA   04820    LET Q1 = INT(X / 8)
    0x6272a1767590 --------CA   04830    LET Q2 = INT(Y / 8)
    0x6272a1767ad0 --------CA   04840    LET S1 = INT(X - Q1 * 8)
    0x6272a1768000 --------CA   04850    LET S2 = INT(Y - Q2 * 8)
    0x6272a17682e0 --------CA   04860    LET X5 = 0
    0x6272a1768510 --------CA   04870    IF S1 <> 0 GOTO 4910
    0x6272a1768870 --------CA   04880    LET Q1 = Q1 - 1
    0x6272a1768a80 --------CA   04890    LET S1 = 8
    0x6272a1768ca0 --------CA   04900    LET X5 = 0
    0x6272a1768ed0 --------CA T 04910    IF S2 <> 0 GOTO 4950
    0x6272a1769230 --------CA   04920    LET Q2 = Q2 - 1
    0x6272a1769440 --------CA   04930    LET S2 = 8
    0x6272a1769660 --------CA   04940    LET X5 = 0
    0x6272a1769890 --------CA T 04950    IF Q1 >= 1 GOTO 4990
    0x6272a1769ad0 --------CA   04960    LET X5 = 1
    0x6272a1769ce0 --------CA   04970    LET Q1 = 1
    0x6272a1769f00 --------CA   04980    LET S1 = 1
    0x6272a176a130 --------CA T 04990    IF Q1 <= 8 GOTO 5030
    0x6272a176a370 --------CA   05000    LET X5 = 1
    0x6272a176a580 --------CA   05010    LET Q1 = 8
    0x6272a176a7a0 --------CA   05020    LET S1 = 8
    0x6272a176a9d0 --------CA T 05030    IF Q2 >= 1 GOTO 5070
    0x6272a176ac10 --------CA   05040    LET X5 = 1
    0x6272a176ae20 --------CA   05050    LET Q2 = 1
    0x6272a176b040 --------CA   05060    LET S2 = 1
    0x6272a176b270 --------CA T 05070    IF Q2 <= 8 GOTO 5110
    0x6272a176b4b0 --------CA   05080    LET X5 = 1
    0x6272a176b6c0 --------CA   05090    LET Q2 = 8
    0x6272a176b8e0 --------CA   05100    LET S2 = 8
    0x6272a176bb10 --------CA T 05110    IF X5 = 0 GOTO 5180
    0x6272a176bd10 --------CA   05120    PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    0x6272a176bed0 --------CA   05130    PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    0x6272a176c080 --------CA   05140    PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    0x6272a176c240 --------CA   05150    PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x6272a176cbb0 --------CA   05160    PRINT "   AT SECTOR "; S1; ","; S2; " OF QUADRANT "; Q1; ","; Q2; ".'"
    0x6272a176cf30 --------CA   05170    IF T > T0 + T9 GOTO 7830
    0x6272a176d610 --------CA T 05180    IF 8 * Q1 + Q2 = 8 * Q4 + Q5 GOTO 4650
    0x6272a176d970 --------CA   05190    LET T = T + 1
    0x6272a176d9e0 --------CA   05200    GOSUB 5260
    0x6272a176da50 --------CA   05210    GOTO 2460
    0x6272a176dac0 ---------B   05220    REM
    0x6272a176dbc0 ---------B   05230    REM ===============================================================
    0x6272a176dc50 ---------B   05240    REM
    0x6272a176dd00 ---------B   05250    REM MANEUVER ENERGY S/R ***
    0x6272a176e190 ---------B G 05260    LET E = E - N - 10
    0x6272a176e3c0 ---------B   05270    IF E >= 0 GOTO 5330
    0x6272a176e5b0 ---------B   05280    PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    0x6272a176e910 ---------B   05290    LET S = S + E
    0x6272a176eb30 ---------B   05300    LET E = 0
    0x6272a176ed60 ---------B   05310    IF S > 0 GOTO 5330
    0x6272a176efa0 ---------B   05320    LET S = 0
    0x6272a176eff0 ---------B T 05330    RETURN
    0x6272a176f070 ---------A   05340    REM
    0x6272a176f170 ---------A   05350    REM ===============================================================
    0x6272a176f200 ---------A   05360    REM
    0x6272a176f2b0 ---------A   05370    REM L.R. SENSOR SCAN CODE ***
    0x6272a176f5d0 --------CA T 05380    IF D(3) >= 0 GOTO 5410
    0x6272a176f780 --------CA   05390    PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x6272a176f830 --------CA   05400    GOTO 3160
    0x6272a176fca0 --------CA T 05410    PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"; Q1; ","; Q2
    0x6272a176ffa0 --------CA   05420    LET O1$ = "..................."
    0x6272a1770100 --------CA   05430    PRINT O1$
    0x6272a1770630 --------CA   05440    FOR I = Q1 - 1 TO Q1 + 1
    0x6272a17706b0 --------CA   05450        REM    DIM N(3)
    0x6272a1770a80 --------CA   05460        FOR I1 = 1 TO 3
    0x6272a1770d80 --------CA   05470        LET N(I1) = 0
    0x6272a1770eb0 --------CA   05480        NEXT I1
    0x6272a1771400 --------CA   05490        FOR J = Q2 - 1 TO Q2 + 1
    0x6272a1771640 --------CA   05500        IF I < 1 GOTO 5580
    0x6272a17718b0 --------CA   05510        IF I > 8 GOTO 5580
    0x6272a1771b20 --------CA   05520        IF J < 1 GOTO 5560
    0x6272a1771d90 --------CA   05530        IF J > 8 GOTO 5560
    0x6272a17724d0 --------CA   05540        LET N(J - Q2 + 2) = G(I, J)
    0x6272a1772a80 --------CA   05550        LET Z(I, J) = G(I, J)
    0x6272a1772bb0 --------CA T 05560        NEXTJ
    0x6272a1772c50 --------CA   05570        REM   DIM P1$(20)
    0x6272a1772fa0 --------CA T 05580        LET P1$ = ": ### : ### : ### :"
    0x6272a1773610 --------CA   05590        PRINT USING P1$; N(1); N(2); N(3)
    0x6272a1773770 --------CA   05600        PRINT O1$
    0x6272a17738b0 --------CA   05610    NEXT I
    0x6272a1773940 --------CA   05620    GOTO 3160
    0x6272a17739b0 ---------A   05630    REM
    0x6272a1773ab0 ---------A   05640    REM ===============================================================
    0x6272a1773b40 ---------A   05650    REM
    0x6272a1773c00 ---------A   05660    REM *** PHASER CONTROL CODE BEGINS HERE
    0x6272a1773e60 --------CA T 05670    IF K3 > 0 GOTO 5710
    0x6272a1774050 --------CA   05680    PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    0x6272a17741c0 --------CA   05690    PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    0x6272a1774250 --------CA   05700    GOTO 3160
    0x6272a1774540 --------CA T 05710    IF D(4) >= 0 GOTO 5740
    0x6272a17746d0 --------CA   05720    PRINT "PHASERS INOPERATIVE"
    0x6272a1774760 --------CA   05730    GOTO 3160
    0x6272a1774a50 --------CA T 05740    IF D(8) >= 0 GOTO 5760
    0x6272a1774c20 --------CA   05750    PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    0x6272a1774da0 --------CA T 05760    PRINT "PHASERS LOCKED ON TARGET;  "
    0x6272a1775020 --------CA T 05770    PRINT "ENERGY AVAILABLE ="; E
    0x6272a17751b0 --------CA   05780    PRINT "NUMBER OF UNITS TO FIRE:";
    0x6272a1775320 --------CA   05790    INPUT X
    0x6272a1775560 --------CA   05800    IF X <= 0 GOTO 3160
    0x6272a17758f0 --------CA   05810    IF E - X < 0 GOTO 5770
    0x6272a1775c70 --------CA   05820    LET E = E - X
    0x6272a1775cf0 --------CA   05830    GOSUB 7610
    0x6272a1775fe0 --------CA   05840    IF D(7) >= 0 GOTO 5860
    0x6272a1776440 --------CA   05850    LET X = X * RND(1)
    0x6272a1776930 --------CA T 05860    LET H1 = INT(X / K3)
    0x6272a1776c10 --------CA   05870    FOR I = 1 TO 3
    0x6272a1776ff0 --------CA   05880        IF K(I, 3) <= 0 GOTO 6080
    0x6272a1777970 --------CA   05890        LET H = INT((H1 / FND(0)) * (RND(1) * 2))
    0x6272a1777e60 --------CA   05900        IF H > .15 * K(I, 3) GOTO 5940
    0x6272a1778040 --------CA   05910        PRINT "SENSORS SHOW NO DAMAGE"
    0x6272a17787e0 --------CA   05920        PRINT "    TO ENEMY AT "; K(I, 1); ","; K(I, 2)
    0x6272a1778870 --------CA   05930        GOTO 6080
    0x6272a1778f40 --------CA T 05940        LET K(I, 3) = K(I, 3) - H
    0x6272a17797f0 --------CA   05950        PRINT H; " UNIT HIT ON KLINGON AT SECTOR "; K(I, 1); ","; K(I, 2)
    0x6272a1779bd0 --------CA   05960        IF K(I, 3) <= 0 GOTO 5990
    0x6272a177a120 --------CA   05970        PRINT "   (SENSORS SHOW"; K(I, 3); " UNITS REMAINING)"
    0x6272a177a1c0 --------CA   05980        GOTO 6080
    0x6272a177a330 --------CA T 05990        PRINT " *** KLINGON DESTROYED ***"
    0x6272a177a680 --------CA   06000        LET K3 = K3 - 1
    0x6272a177a9b0 --------CA   06010        LET K9 = K9 - 1
    0x6272a177abf0 --------CA   06020        A$ = "   "
    0x6272a177afd0 --------CA   06030        LET Z1 = K(I, 1)
    0x6272a177b3a0 --------CA   06040        LET Z2 = K(I, 2)
    0x6272a177b430 --------CA   06050        GOSUB 10550
    0x6272a177bc70 --------CA   06060        LET G(Q1, Q2) = K3 * 100 + B3 * 10 + S3
    0x6272a177bea0 --------CA   06070        IF K9 <= 0 GOTO 7980
    0x6272a177c000 --------CA T 06080    NEXT I
    0x6272a177c090 --------CA   06090    GOTO 3160
    0x6272a177c100 ---------A   06100    REM
    0x6272a177c200 ---------A   06110    REM ===============================================================
    0x6272a177c290 ---------A   06120    REM
    0x6272a17531d0 ---------A   06130    REM PHOTON TORPEDO CODE BEGINS ***
    0x6272a17534f0 --------CA T 06140    IF D(5) >= 0 GOTO 6170
    0x6272a17536a0 --------CA   06150    PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    0x6272a1753730 --------CA   06160    GOTO 3160
    0x6272a1753960 --------CA T 06170    IF P > 0 GOTO 6200
    0x6272a1753b10 --------CA   06180    PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x6272a1753ba0 --------CA   06190    GOTO 3160
    0x6272a1753d10 --------CA T 06200    PRINT "TORPEDO COURSE (1-9)";
    0x6272a1753e80 --------CA   06210    INPUT C1
    0x6272a17540c0 --------CA   06220    IF C1 >= 1 GOTO 6250
    0x6272a177e410 --------CA T 06230    PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x6272a177e4a0 --------CA   06240    GOTO 3160
    0x6272a177e6d0 --------CA T 06250    IF C1 > 9 GOTO 6230
    0x6272a177e940 --------CA   06260    IF C1 < 9 GOTO 6290
    0x6272a177ebb0 --------CA   06270    IF C1 >= 9 GOTO 6200
    0x6272a177ee00 --------CA   06280    LET C1 = 1
    0x6272a177f380 --------CA T 06290    LET X1 = -SIN((C1 - 1) * P1)
    0x6272a177f900 --------CA   06300    LET X2 = COS((C1 - 1) * P1)
    0x6272a177fd40 --------CA   06310    IF ABS(X1) < ABS(X2) THEN 6360
    0x6272a1780220 --------CA   06320    M9 = ABS(1 / X1)
    0x6272a1780530 --------CA   06330    X1 = SGN(X1)
    0x6272a1780880 --------CA   06340    X2 = X2 * M9
    0x6272a1780900 --------CA   06350    GOTO 6390
    0x6272a1780d10 --------CA T 06360    M9 = ABS(1 / X2)
    0x6272a1781020 --------CA   06370    X2 = SGN(X2)
    0x6272a1781370 --------CA   06380    X1 = X1 * M9
    0x6272a17816a0 --------CA T 06390    LET E = E - 2
    0x6272a17818d0 --------CA   06400    LET X = S1
    0x6272a1781b00 --------CA   06410    LET Y = S2
    0x6272a1781e40 --------CA   06420    LET P = P - 1
    0x6272a1781f90 --------CA   06430    PRINT "TORPEDO TRACK:"
    0x6272a17822f0 --------CA T 06440    LET X = X + X1
    0x6272a1782650 --------CA   06450    LET Y = Y + X2
    0x6272a1782b30 --------CA   06460    LET X9 = INT(X + .5)
    0x6272a1783010 --------CA   06470    LET Y9 = INT(Y + .5)
    0x6272a1783240 --------CA   06480    IF X9 < 1 GOTO 7010
    0x6272a17834b0 --------CA   06490    IF X9 >= 9 GOTO 7010
    0x6272a1783720 --------CA   06500    IF Y9 < 1 GOTO 7010
    0x6272a1783990 --------CA   06510    IF Y9 >= 9 GOTO 7010
    0x6272a1783e30 --------CA   06520    PRINT "               "; X9; ","; Y9
    0x6272a1784070 --------CA   06530    LET A$ = "   "
    0x6272a17842a0 --------CA   06540    LET Z1 = X9
    0x6272a17844d0 --------CA   06550    LET Z2 = Y9
    0x6272a1784550 --------CA   06560    GOSUB 10840
    0x6272a1784840 --------CA   06570    IF Z3 <> 0 GOTO 6440
    0x6272a1784aa0 --------CA   06580    LET A$ = "+++"
    0x6272a1784cd0 --------CA   06590    LET Z1 = X9
    0x6272a1784f00 --------CA   06600    LET Z2 = Y9
    0x6272a1784f80 --------CA   06610    GOSUB 10840
    0x6272a17851b0 --------CA   06620    IF Z3 = 0 GOTO 6730
    0x6272a1785360 --------CA   06630    PRINT "*** KLINGON DESTROYED ***"
    0x6272a17856a0 --------CA   06640    LET K3 = K3 - 1
    0x6272a17859e0 --------CA   06650    LET K9 = K9 - 1
    0x6272a1785c10 --------CA   06660    IF K9 <= 0 GOTO 7980
    0x6272a1785f20 --------CA   06670    FOR I = 1 TO 3
    0x6272a1786320 --------CA   06680        IF X9 <> K(I, 1) GOTO 6700
    0x6272a1786750 --------CA   06690        IF Y9 = K(I, 2) GOTO 6710
    0x6272a17868b0 --------CA T 06700    NEXT I
    0x6272a1786c80 --------CA T 06710    LET K(I, 3) = 0
    0x6272a1786cf0 --------CA   06720    GOTO 6950
    0x6272a1786f20 --------CA T 06730    LET A$ = " * "
    0x6272a1787150 --------CA   06740    LET Z1 = X9
    0x6272a1787380 --------CA   06750    LET Z2 = Y9
    0x6272a1787400 --------CA   06760    GOSUB 10840
    0x6272a1787630 --------CA   06770    IF Z3 = 0 GOTO 6800
    0x6272a1787bf0 --------CA   06780    PRINT "STAR AT"; X9; ","; Y9; " ABSORBED TORPEDO ENERGY."
    0x6272a1787c70 --------CA   06790    GOTO 7020
    0x6272a1787ea0 --------CA T 06800    LET A$ = ">!<"
    0x6272a17880d0 --------CA   06810    LET Z1 = X9
    0x6272a1788300 --------CA   06820    LET Z2 = Y9
    0x6272a1788380 --------CA   06830    GOSUB 10840
    0x6272a17885b0 --------CA   06840    IF Z3 = 0 GOTO 6200
    0x6272a1788760 --------CA   06850    PRINT "*** STARBASE DESTROYED ***"
    0x6272a1788aa0 --------CA   06860    LET B3 = B3 - 1
    0x6272a1788de0 --------CA   06870    LET B9 = B9 - 1
    0x6272a1789010 --------CA   06880    IF B9 > 0 GOTO 6920
    0x6272a1789240 --------CA   06890    PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    0x6272a17893d0 --------CA   06900    PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    0x6272a1789480 --------CA   06910    GOTO 7880
    0x6272a1789600 --------CA T 06920    PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x6272a1789760 --------CA   06930    PRINT "   COURT MARTIAL!"
    0x6272a1789980 --------CA   06940    LET D0 = 0
    0x6272a1789bb0 --------CA T 06950    LET A$ = "   "
    0x6272a1789de0 --------CA   06960    LET Z1 = X9
    0x6272a178a010 --------CA   06970    LET Z2 = Y9
    0x6272a178a0a0 --------CA   06980    GOSUB 10550
    0x6272a178a8d0 --------CA   06990    LET G(Q1, Q2) = K3 * 100 + B3 * 10 + S3
    0x6272a178a950 --------CA   07000    GOTO 7020
    0x6272a178aaa0 --------CA T 07010    PRINT "TORPEDO MISSED"
    0x6272a178ab20 --------CA T 07020    GOSUB 7610
    0x6272a178ab90 --------CA   07030    GOTO 3160
    0x6272a178ac00 ---------A   07040    REM
    0x6272a178ad00 ---------A   07050    REM ===============================================================
    0x6272a178ad90 ---------A   07060    REM
    0x6272a178ae50 ---------A   07070    REM *** SHIELD CONTROL STARTS HERE
    0x6272a178b170 --------CA T 07080    IF D(7) >= 0 GOTO 7110
    0x6272a178b320 --------CA   07090    PRINT "SHIELD CONTROL INOPERABLE"
    0x6272a178b3e0 --------CA   07100    GOTO 3160
    0x6272a178b860 --------CA T 07110    PRINT "ENERGY AVAILABLE ="; E + 5; ". NUMBER OF UNITS TO SHIELDS:";
    0x6272a178b9d0 --------CA   07120    INPUT X
    0x6272a178bc10 --------CA   07130    IF X >= 0 GOTO 7170
    0x6272a178bea0 --------CA   07140    IF S <> X GOTO 7170
    0x6272a178c030 --------CA   07150    PRINT "(SHIELDS UNCHANGED)"
    0x6272a178c0c0 --------CA   07160    GOTO 3160
    0x6272a178c530 --------CA T 07170    IF E + S - X < 0 GOTO 7110
    0x6272a178c9e0 --------CA   07180    LET E = E + S - X
    0x6272a178cc30 --------CA   07190    LET S = X
    0x6272a178cdc0 --------CA   07200    PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x6272a178d120 --------CA   07210    PRINT "  'SHIELDS NOW AT "; S; " PER YOUR COMMAND'"
    0x6272a178d1a0 --------CA   07220    GOTO 3160
    0x6272a178d210 ---------A   07230    REM
    0x6272a178d310 ---------A   07240    REM ===============================================================
    0x6272a178d3a0 ---------A   07250    REM
    0x6272a178d460 ---------A   07260    REM *** DAMAGE CONTROL STARTS HERE
    0x6272a178d780 --------CA T 07270    IF D(6) >= 0 GOTO 7490
    0x6272a178d940 --------CA   07280    PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    0x6272a178db80 --------CA T 07290    IF D0 = 0 GOTO 3160
    0x6272a178de80 --------CA   07300    LET D3 = 0
    0x6272a178e160 --------CA   07310    FOR I = 1 TO 8
    0x6272a178e480 --------CA   07320        IF D(I) >= 0 GOTO 7340
    0x6272a178e7f0 --------CA   07330        LET D3 = D3 + .1
    0x6272a178e920 --------CA T 07340    NEXT I
    0x6272a178eb80 --------CA   07350    IF D3 = 0 GOTO 3160
    0x6272a178ef20 --------CA   07360    LET D3 = D3 + D4
    0x6272a178f150 --------CA   07370    IF D3 < 1 GOTO 7390
    0x6272a178f3c0 --------CA   07380    LET D3 = .9
    0x6272a178f560 --------CA T 07390    PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    0x6272a178f700 --------CA   07400    PRINT "ESTIMATED TIME TO REPAIR: ";
    0x6272a178f990 --------CA   07410    PRINT USING ".# STARDATES"; D3
    0x6272a178fb30 --------CA   07420    PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    0x6272a178fca0 --------CA   07430    INPUT A$
    0x6272a178ff00 --------CA   07440    IF A$ <> "YES" GOTO 3160
    0x6272a1790210 --------CA   07450    FOR I = 1 TO 8
    0x6272a1790510 --------CA   07460        LET D(I) = 0
    0x6272a1790640 --------CA   07470    NEXT I
    0x6272a1790ac0 --------CA   07480    LET T = T + D3 + .1
    0x6272a1790c30 --------CA T 07490    PRINT " "
    0x6272a1790da0 --------CA   07500    PRINT "DEVICE        STATE OF REPAIR"
    0x6272a1791080 --------CA   07510    FOR R1 = 1 TO 8
    0x6272a1791120 --------CA   07520        GOSUB 10780
    0x6272a1791450 --------CA   07530        PRINT USING "  -##.##";D(R1)
    0x6272a1791590 --------CA   07540    NEXT R1
    0x6272a1791700 --------CA   07550    PRINT " "
    0x6272a1791780 --------CA   07560    GOTO 7290
    0x6272a17917f0 ---------C   07570    REM
    0x6272a17918f0 ---------C   07580    REM ===============================================================
    0x6272a1791980 ---------C   07590    REM
    0x6272a1791a40 ---------C   07600    REM "KLINGONS SHOOTING" CODE BEGINS ***
    0x6272a1791ca0 ---------C G 07610    IF K3 <= 0 GOTO 7820
    0x6272a1791f10 ---------C   07620    IF D0 = 0 GOTO 7650
    0x6272a17920e0 ---------C   07630    PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x6272a1792160 ---------C   07640    GOTO 7820
    0x6272a1792440 ---------C T 07650    FOR I = 1 TO 3
    0x6272a1792820 ---------C   07660        IF K(I, 3) <= 0 GOTO 7810
    0x6272a1793280 ---------C   07670        LET H = INT((K(I, 3) / FND(0)) * (2 + RND(1)))
    0x6272a1793610 ---------C   07680        LET S = S - H
    0x6272a1793ec0 ---------C   07690        PRINT H; " UNIT HIT ON ENTERPRISE FROM SECTOR"; K(I, 1); ","; K(I, 2)
    0x6272a1794100 ---------C   07700        IF S < 0 GOTO 7850
    0x6272a17944d0 ---------C   07710        PRINT "      (SHIELDS DOWN TO"; S; " UNITS.)"
    0x6272a1794710 ---------C   07720        IF H < 20 GOTO 7810
    0x6272a1794a40 ---------C   07730        IF RND(1) > .6 GOTO 7810
    0x6272a1794dd0 ---------C   07740        IF H / S <= .02 GOTO 7810
    0x6272a1795530 ---------C   07750        LET D2 = H / S + .5 * RND(1)
    0x6272a1795b10 ---------C   07760        LET R1 = INT(RND(1) * 8 + 1)
    0x6272a1796040 ---------C   07770        LET D(R1) = D(R1) - D2
    0x6272a17961c0 ---------C   07780        PRINT "DAMAGE CONTROL REPORTS '";
    0x6272a1796260 ---------C   07790        GOSUB 10780
    0x6272a17963b0 ---------C   07800        PRINT "DAMAGED BY THE HIT!'"
    0x6272a17964f0 ---------C T 07810    NEXT I
    0x6272a1796560 ---------C T 07820    RETURN
    0x6272a17967d0 --------CA T 07830    PRINT "ITS IS STARDATE "; T
    0x6272a1796850 --------CA   07840    GOTO 7880
    0x6272a17969e0 ---------C T 07850    PRINT " "
    0x6272a1796b80 ---------C   07860    PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    0x6272a1796f10 --------CA T 07870    PRINT "IT IS STARDATE "; T; "."
    0x6272a17972a0 --------CA T 07880    PRINT "THERE WERE "; K9; " KLINGON BATTLE CRUISERS LEFT AT "
    0x6272a1797410 --------CA   07890    PRINT "THE END OF YOUR MISSION."
    0x6272a1797570 --------CA T 07900    PRINT " "
    0x6272a1797700 --------CA   07910    PRINT " "
    0x6272a17978b0 --------CA   07920    PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x6272a1797a50 --------CA   07930    PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x6272a1797bc0 --------CA   07940    PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    0x6272a1797d30 --------CA   07950    INPUT A$
    0x6272a1797f90 --------CA   07960    IF A$ = "AYE" GOTO 1270
    0x6272a1798070 --------CA   07970    GOTO 11100
    0x6272a1798220 --------CA T 07980    PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    0x6272a17983a0 --------CA   07990    PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    0x6272a1798540 --------CA   08000    PRINT " "
    0x6272a1798cb0 --------CA   08010    PRINT "YOUR EFFICIENCY RATING IS "; ((K / (T - T0)) * 1000); "."
    0x6272a1798d30 --------CA   08020    GOTO 7900
    0x6272a1798da0 ---------D   08030    REM
    0x6272a1798ea0 ---------D   08040    REM ===============================================================
    0x6272a1798f30 ---------D   08050    REM
    0x6272a1799000 ---------D   08060    REM S.R. SENSOR SCAN & STARTUP SUBR. ***
    0x6272a1799550 ---------D G 08070    FOR I = S1 - 1 TO S1 + 1
    0x6272a1799a90 ---------D   08080        FOR J = S2 - 1 TO S2 + 1
    0x6272a1799eb0 ---------D   08090        IF INT(I + .5) < 1 GOTO 8180
    0x6272a179a310 ---------D   08100        IF INT(I + .5) > 8 GOTO 8180
    0x6272a179a770 ---------D   08110        IF INT(J + .5) < 1 GOTO 8180
    0x6272a179abd0 ---------D   08120        IF INT(J + .5) > 8 GOTO 8180
    0x6272a179ae40 ---------D   08130        LET A$ = ">!<"
    0x6272a179b070 ---------D   08140        LET Z1 = I
    0x6272a179b2a0 ---------D   08150        LET Z2 = J
    0x6272a179b320 ---------D   08160        GOSUB 10840
    0x6272a179b550 ---------D   08170        IF Z3 = 1 GOTO 8220
    0x6272a179b6b0 ---------D T 08180        NEXT J
    0x6272a179b800 ---------D   08190    NEXT I
    0x6272a179ba30 ---------D   08200    LET D0 = 0
    0x6272a179baa0 ---------D   08210    GOTO 8290
    0x6272a179bcc0 ---------D T 08220    LET D0 = 1
    0x6272a179bfb0 ---------D   08230    LET C$ = "DOCKED"
    0x6272a179c1c0 ---------D   08240    LET E = 3000
    0x6272a179c3f0 ---------D   08250    LET P = 10
    0x6272a179c550 ---------D   08260    PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x6272a179c770 ---------D   08270    LET S = 0
    0x6272a179c7f0 ---------D   08280    GOTO 8360
    0x6272a179ca20 ---------D T 08290    IF K3 > 0 GOTO 8330
    0x6272a179cdb0 ---------D   08300    IF E < E0 * .1 GOTO 8350
    0x6272a179d020 ---------D   08310    LET C$ = " GREEN"
    0x6272a179d0b0 ---------D   08320    GOTO 8360
    0x6272a179d7c0 ---------D T 08330    C$ = " " + CHR$(7) + "*RED*" + CHR$(7)
    0x6272a179d840 ---------D   08340    GOTO 8360
    0x6272a179da80 ---------D T 08350    LET C$ = "YELLOW"
    0x6272a179dd70 ---------D T 08360    IF D(2) >= 0 GOTO 8410
    0x6272a179df10 ---------D   08370    PRINT " "
    0x6272a179e080 ---------D   08380    PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x6272a179e1e0 ---------D   08390    PRINT " "
    0x6272a179e280 ---------D   08400    GOTO 8900
    0x6272a179e4c0 ---------D T 08410    LET O1$ = "--------------------------------"
    0x6272a179e620 ---------D   08420    PRINT O1$
    0x6272a179e920 ---------D   08430    LET N5$ = "####"
    0x6272a179eaa0 ---------D   08440    PRINT " ";
    0x6272a179ee60 ---------D   08450    FOR I = 1 TO 22 STEP 3
    0x6272a179f420 ---------D   08460        PRINT MID$(Q$(1), I, 3); " ";
    0x6272a179f560 ---------D   08470    NEXT I
    0x6272a179f6d0 ---------D   08480    PRINT " "
    0x6272a179f860 ---------D   08490    PRINT " ";
    0x6272a179fc20 ---------D   08500    FOR I = 1 TO 22 STEP 3
    0x6272a17a01e0 ---------D   08510        PRINT MID$(Q$(2), I, 3); " ";
    0x6272a17a0320 ---------D   08520    NEXT I
    0x6272a17a04f0 ---------D   08530    PRINT "        STARDATE         ";
    0x6272a17a0750 ---------D   08540    PRINT USING "####.#";T
    0x6272a17a08e0 ---------D   08550    PRINT " ";
    0x6272a17a0ca0 ---------D   08560    FOR I = 1 TO 22 STEP 3
    0x6272a17a1260 ---------D   08570        PRINT MID$(Q$(3), I, 3); " ";
    0x6272a17a13a0 ---------D   08580    NEXT I
    0x6272a17a1560 ---------D   08590    PRINT "        CONDITION        ";
    0x6272a17a16c0 ---------D   08600    PRINT C$
    0x6272a17a1850 ---------D   08610    PRINT " ";
    0x6272a17a1c10 ---------D   08620    FOR I = 1 TO 22 STEP 3
    0x6272a17a21d0 ---------D   08630        PRINT MID$(Q$(4), I, 3); " ";
    0x6272a17a2310 ---------D   08640    NEXT I
    0x6272a17a27b0 ---------D   08650    PRINT "        QUADRANT         "; Q1; ","; Q2
    0x6272a17a2940 ---------D   08660    PRINT " ";
    0x6272a17a2d00 ---------D   08670    FOR I = 1 TO 22 STEP 3
    0x6272a17a32c0 ---------D   08680        PRINT MID$(Q$(5), I, 3); " ";
    0x6272a17a3400 ---------D   08690    NEXT I
    0x6272a17a38a0 ---------D   08700    PRINT "        SECTOR           "; S1; ","; S2
    0x6272a17a3a30 ---------D   08710    PRINT " ";
    0x6272a17a3df0 ---------D   08720    FOR I = 1 TO 22 STEP 3
    0x6272a17a43b0 ---------D   08730        PRINT MID$(Q$(6), I, 3); " ";
    0x6272a17a44f0 ---------D   08740    NEXT I
    0x6272a17a46c0 ---------D   08750    PRINT "        TOTAL ENERGY     ";
    0x6272a17a4a20 ---------D   08760    PRINT USING N5$;E+S
    0x6272a17a4bb0 ---------D   08770    PRINT " ";
    0x6272a17a4f70 ---------D   08780    FOR I = 1 TO 22 STEP 3
    0x6272a17a5530 ---------D   08790        PRINT MID$(Q$(7), I, 3); " ";
    0x6272a17a5670 ---------D   08800    NEXT I
    0x6272a17a5840 ---------D   08810    PRINT "        PHOTON TORPEDOES ";
    0x6272a17a5a80 ---------D   08820    PRINT USING N5$;P
    0x6272a17a5c10 ---------D   08830    PRINT " ";
    0x6272a17a5fd0 ---------D   08840    FOR I = 1 TO 22 STEP 3
    0x6272a17a6590 ---------D   08850        PRINT MID$(Q$(8), I, 3); " ";
    0x6272a17a66d0 ---------D   08860    NEXT I
    0x6272a17a68a0 ---------D   08870    PRINT "        SHIELDS          ";
    0x6272a17a6ae0 ---------D   08880    PRINT USING N5$;S
    0x6272a17a6c40 ---------D   08890    PRINT O1$
    0x6272a17a6ca0 ---------D T 08900    RETURN
    0x6272a17a6d20 ---------A   08910    REM
    0x6272a17a6e20 ---------A   08920    REM ===============================================================
    0x6272a17a6eb0 ---------A   08930    REM
    0x6272a17a6f80 ---------A   08940    REM *** LIBARY COMPUTER CODE BEGINS HERE
    0x6272a17a72a0 --------CA T 08950    IF D(8) >= 0 GOTO 8980
    0x6272a17a7430 --------CA   08960    PRINT "COMPUTER DISABLED"
    0x6272a17a74d0 --------CA   08970    GOTO 3160
    0x6272a17a7650 --------CA T 08980    PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    0x6272a17a7880 --------CA   08990    INPUT A
    0x6272a17a7ac0 --------CA   09000    IF A < 0 GOTO 3160
    0x6272a17a7b60 --------CA   09010    PRINT
    0x6272a17a7e50 --------CA   09020    LET H8 = 1
    0x6272a17a8080 --------CA   09030    IF A = 0 GOTO 9270
    0x6272a17a82f0 --------CA   09040    IF A > 5 GOTO 9150
    0x6272a17a8390 --------CA   09050    REM
    0x6272a17a8490 --------CA   09060    REM ===============================================================
    0x6272a17a8520 --------CA   09070    REM
    0x6272a17a8a70 --------CA   09080    ON A GOTO 9690, 9890, 10320, 9970, 9100
    0x6272a17a8af0 --------CA   09090    REM  GOTO 9150
    0x6272a17a8bd0 --------CA T 09100    REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
    0x6272a17a8e00 --------CA   09110    LET H8 = 0
    0x6272a17a9030 --------CA   09120    LET G5 = 1
    0x6272a17a9190 --------CA   09130    PRINT "                      THE GALAXY"
    0x6272a17a9240 --------CA   09140    GOTO 9280
    0x6272a17a93d0 --------CA T 09150    PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    0x6272a17a9550 --------CA   09160    PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x6272a17a96d0 --------CA   09170    PRINT "   1 = STATUS REPORT"
    0x6272a17a9860 --------CA   09180    PRINT "   2 = PHOTON TORPEDO DATA"
    0x6272a17a99f0 --------CA   09190    PRINT "   3 = STARBASE NAVIGATION DATA"
    0x6272a17a9b80 --------CA   09200    PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    0x6272a17a9cf0 --------CA   09210    PRINT "   5 = GALAXY 'REGION NAME' MAP"
    0x6272a17a9d70 --------CA   09220    GOTO 8980
    0x6272a17a9de0 ---------A   09230    REM
    0x6272a17a9ee0 ---------A   09240    REM ===============================================================
    0x6272a17a9f70 ---------A   09250    REM
    0x6272a17aa040 ---------A   09260    REM *** CUM GALACTIC RECORD CODE BEGINS ***
    0x6272a17aa640 --------CA T 09270    PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "; Q1; ","; Q2; ":"
    0x6272a17aa7f0 --------CA T 09280    PRINT "      1     2     3     4     5     6     7     8"
    0x6272a17aab10 --------CA   09290    LET O3$ = "    ----- ----- ----- ----- ----- ----- ----- -----"
    0x6272a17aac70 --------CA   09300    PRINT O3$
    0x6272a17aad00 --------CA   09310    REM   DIM N1$(2),N2$(8),N$(5)
    0x6272a17ab000 --------CA   09320    FOR I = 1 TO 8
    0x6272a17ab310 --------CA   09330        LET N1$ = "##"
    0x6272a17ab570 --------CA   09340        PRINT USING N1$;I;
    0x6272a17ab840 --------CA   09350        PRINT TAB(3); "|";
    0x6272a17aba80 --------CA   09360        IF H8 = 0 GOTO 9480
    0x6272a17abda0 --------CA   09370        FOR J = 1 TO 8
    0x6272a17ac0a0 --------CA   09380        LET N2$ = " ### |"
    0x6272a17ac3a0 --------CA   09390        LET N$ = ""
    0x6272a17ac5f0 --------CA   09400        IF I <> Q1 GOTO 9440
    0x6272a17ac880 --------CA   09410        IF J <> Q2 GOTO 9440
    0x6272a17acbb0 --------CA   09420        LET N$ = CHR$(7)
    0x6272a17acd30 --------CA   09430        PRINT N$;
    0x6272a17ad150 --------CA T 09440        PRINT USING N2$;Z(I,J);
    0x6272a17ad2d0 --------CA   09450        PRINT N$;
    0x6272a17ad410 --------CA   09460        NEXT J
    0x6272a17ad4a0 --------CA   09470        GOTO 9610
    0x6272a17ad6d0 --------CA T 09480        LET Z4 = I
    0x6272a17ad8e0 --------CA   09490        LET Z5 = 1
    0x6272a17ad970 --------CA   09500        GOSUB 10960
    0x6272a17ae030 --------CA   09510        LET J0 = INT(15 - .5 * LEN(G2$))
    0x6272a17ae200 --------CA   09520        PRINT TAB(J0);
    0x6272a17ae390 --------CA   09530        PRINT G2$;
    0x6272a17ae650 --------CA   09540        PRINT TAB(27); "|";
    0x6272a17ae870 --------CA   09550        LET Z5 = 5
    0x6272a17ae900 --------CA   09560        GOSUB 10960
    0x6272a17aef00 --------CA   09570        LET J0 = INT(39 - .5 * LEN(G2$))
    0x6272a17af0d0 --------CA   09580        PRINT TAB(J0);
    0x6272a17af260 --------CA   09590        PRINT G2$;
    0x6272a17af520 --------CA   09600        PRINT TAB(51); "|";
    0x6272a17af5a0 --------CA T 09610        PRINT
    0x6272a17af700 --------CA   09620        PRINT O3$
    0x6272a17af840 --------CA   09630    NEXT I
    0x6272a17af8d0 --------CA   09640    GOTO 3160
    0x6272a17af940 ---------A   09650    REM
    0x6272a17afa40 ---------A   09660    REM ===============================================================
    0x6272a17afad0 ---------A   09670    REM
    0x6272a17afba0 ---------A   09680    REM *** STATUS REPORT CODE BEGINS HERE ***
    0x6272a17afd20 --------CA T 09690    PRINT "   STATUS REPORT:"
    0x6272a17aff70 --------CA   09700    LET X$ = ""
    0x6272a17b01a0 --------CA   09710    IF K9 = 1 GOTO 9730
    0x6272a17b0420 --------CA   09720    LET X$ = "S"
    0x6272a17b0880 --------CA T 09730    PRINT K9; " KLINGON"; X$; " LEFT"
    0x6272a17b0e30 --------CA   09740    LET V5 = (T0 + T9) - T
    0x6272a17b10a0 --------CA   09750    PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES";V5
    0x6272a17b12f0 --------CA   09760    LET X$ = ""
    0x6272a17b1520 --------CA   09770    IF B9 = 1 GOTO 9830
    0x6272a17b1790 --------CA   09780    LET X$ = "S"
    0x6272a17b19c0 --------CA   09790    IF B9 <> 0 GOTO 9830
    0x6272a17b1bc0 --------CA   09800    PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    0x6272a17b1d40 --------CA   09810    PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    0x6272a17b1e00 --------CA   09820    GOTO 7270
    0x6272a17b2360 --------CA T 09830    PRINT "THE FEDERATION IS MAINTAINING"; B9; " STARBASE"; X$; " IN THE GALAXY"
    0x6272a17b23e0 --------CA   09840    GOTO 7270
    0x6272a17b2450 ---------A   09850    REM
    0x6272a17b2550 ---------A   09860    REM ===============================================================
    0x6272a17b25e0 ---------A   09870    REM
    0x6272a17b26c0 ---------A   09880    REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***
    0x6272a17b28f0 --------CA T 09890    LET H8 = 0
    0x6272a17b2bd0 --------CA   09900    FOR I = 1 TO 3
    0x6272a17b2fb0 --------CA   09910        IF K(I, 3) <= 0 GOTO 10300
    0x6272a17b33d0 --------CA   09920        LET W1 = K(I, 1)
    0x6272a17b37a0 --------CA   09930        LET X = K(I, 2)
    0x6272a17b39d0 --------CA T 09940        LET C1 = S1
    0x6272a17b3c00 --------CA   09950        LET A = S2
    0x6272a17b3c90 --------CA   09960        GOTO10040
    0x6272a17b3e30 --------CA T 09970        PRINT "DIRECTION/DISTANCE CALCULAJTOR:"
    0x6272a17b47a0 --------CA   09980        PRINT "YOU ARE AT QUADRANT ("; Q1; ","; Q2; ") SECTOR ("; S1; ","; S2; ")"
    0x6272a17b4920 --------CA   09990        PRINT "PLEASE ENTER --"
    0x6272a17b4ab0 --------CA   10000        PRINT "  INITIAL COORDINATES (X,Y)";
    0x6272a17b4d10 --------CA   10010        INPUT C1, A
    0x6272a17b4ea0 --------CA   10020        PRINT "  FINAL COORDINATES (X,Y)";
    0x6272a17b50f0 --------CA   10030        INPUT W1, X
    0x6272a17b5460 --------CA T 10040        LET X = X - A
    0x6272a17b57c0 --------CA   10050        LET A = C1 - W1
    0x6272a17b59f0 --------CA   10060        IF X < 0 GOTO 10170
    0x6272a17b5c60 --------CA   10070        IF A < 0 GOTO 10230
    0x6272a17b5ed0 --------CA   10080        IF X > 0 GOTO 10100
    0x6272a17b6140 --------CA   10090        IF A = 0 GOTO 10190
    0x6272a17b63a0 --------CA T 10100        LET C1 = 1
    0x6272a17b67b0 --------CA T 10110        IF ABS(A) <= ABS(X) GOTO 10150
    0x6272a17b7310 --------CA   10120        LET V5 = C1 + (((ABS(A) - ABS(X)) + ABS(A)) / ABS(A))
    0x6272a17b7560 --------CA   10130        PRINT "DIRECTION ="; V5
    0x6272a17b7600 --------CA   10140        GOTO 10280
    0x6272a17b7c90 --------CA T 10150        PRINT "DIRECTION ="; C1 + (ABS(A) / ABS(X))
    0x6272a17b7d20 --------CA   10160        GOTO 10280
    0x6272a17b7f50 --------CA T 10170        IF A > 0 GOTO 10210
    0x6272a17b81c0 --------CA   10180        IF X = 0 GOTO 10230
    0x6272a17b8400 --------CA T 10190        LET C1 = 5
    0x6272a17b8470 --------CA   10200        GOTO 10110
    0x6272a17b8680 --------CA T 10210        LET C1 = 3
    0x6272a17b86f0 --------CA   10220        GOTO 10240
    0x6272a17b8920 --------CA T 10230        LET C1 = 7
    0x6272a17b8d30 --------CA T 10240        IF ABS(A) >= ABS(X) GOTO 10270
    0x6272a17b98b0 --------CA   10250        PRINT "DIRECTION ="; C1 + (((ABS(X) - ABS(A)) + ABS(X)) / ABS(X))
    0x6272a17b9950 --------CA   10260        GOTO 10280
    0x6272a17ba000 --------CA T 10270        PRINT "DIRECTION ="; C1 + (ABS(X) / ABS(A))
    0x6272a17ba670 --------CA T 10280        PRINT "DISTANCE ="; SQR(X ^ 2 + A ^ 2)
    0x6272a17ba8b0 --------CA   10290        IF H8 = 1 GOTO 3160
    0x6272a17baa10 --------CA T 10300    NEXT I
    0x6272a17baab0 --------CA   10310    GOTO 3160
    0x6272a17bace0 --------CA T 10320    IF B3 <> 0 GOTO 10350
    0x6272a17baed0 --------CA   10330    PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    0x6272a17baf70 --------CA   10340    GOTO 3160
    0x6272a17bb0d0 --------CA T 10350    PRINT "FROM ENTERPRISE TO STARBASE:"
    0x6272a17bb310 --------CA   10360    LET W1 = B4
    0x6272a17bb540 --------CA   10370    LET X = B5
    0x6272a17bb5d0 --------CA   10380    GOTO 9940
    0x6272a17bb650 ---------E   10390    REM *** END OF LIBRARY-COMPUTER CODE
    0x6272a17bb6e0 ---------E   10400    REM
    0x6272a17bb7e0 ---------E   10410    REM ===============================================================
    0x6272a17bb870 ---------E   10420    REM
    0x6272a17bb930 ---------E   10430    REM S/R FINDS RANDOM HOLE IN QUADRANT
    0x6272a17bbf40 ---------E B 10440    LET R1 = INT(RND(1) * 8 + 1)
    0x6272a17bc510 ---------E   10450    LET R2 = INT(RND(1) * 8 + 1)
    0x6272a17bc740 ---------E   10460    LET A$ = "   "
    0x6272a17bc970 ---------E   10470    LET Z1 = R1
    0x6272a17bcba0 ---------E   10480    LET Z2 = R2
    0x6272a17bcc20 ---------E   10490    GOSUB 10840
    0x6272a17bce50 ---------E   10500    IF Z3 = 0 GOTO 10440
    0x6272a17bced0 ---------E   10510    RETURN
    0x6272a17bcf50 ---------F   10520    REM
    0x6272a17bd050 ---------F   10530    REM ===============================================================
    0x6272a17bd0e0 ---------F   10540    REM
    0x6272a17bd1c0 ---------F G 10550    REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
    0x6272a17bd610 ---------F   10560    Z1 = INT(Z1 + .5)
    0x6272a17bda30 ---------F   10570    Z2 = INT(Z2 + .5)
    0x6272a17bdc60 ---------F   10580    IF Z1 < 1 GOTO 10700
    0x6272a17bded0 ---------F   10590    IF Z1 > 8 GOTO 10700
    0x6272a17be140 ---------F   10600    IF Z2 < 1 GOTO 10700
    0x6272a17be3b0 ---------F   10610    IF Z2 > 8 GOTO 10700
    0x6272a17be930 ---------F   10620    DIM Q9(24), A9(3)
    0x6272a17bec20 ---------F   10630    CHANGE Q$(Z1) TO Q9
    0x6272a17bee60 ---------F   10640    CHANGE A$ TO A9
    0x6272a17bf240 ---------F   10650    FOR I8 = 1 TO 3
    0x6272a17bf9a0 ---------F   10660        Q9(3 * (Z2 - 1) + I8) = A9(I8)
    0x6272a17bfad0 ---------F   10670    NEXT I8
    0x6272a17bfdf0 ---------F   10680    CHANGE Q9 TO Q$(Z1)
    0x6272a17bfe90 ---------F   10690    GOTO 10740
    0x6272a17bff30 ---------F T 10700    PRINT
    0x6272a17c04c0 ---------F   10710    PRINT "ERROR IN COORDINATES (Z1,Z2): ("; Z1; ","; Z2; ")"
    0x6272a17c0630 ---------F   10720    PRINT "     1 <=  Z1,Z2  <=8    "
    0x6272a17c06b0 ---------F   10730    PRINT
    0x6272a17c0710 ---------F T 10740    RETURN
    0x6272a17c0790 ---------G   10750    REM
    0x6272a17c0890 ---------G   10760    REM ===============================================================
    0x6272a17c0920 ---------G   10770    REM
    0x6272a17c09f0 ---------G G 10780    REM *** PRINTS DEVICE NAME FROM ARRAY ***
    0x6272a17c0c60 ---------G   10790    PRINT D$(R1);
    0x6272a17c0cc0 ---------G   10800    RETURN
    0x6272a17c0d40 ---------H   10810    REM
    0x6272a17c0e40 ---------H   10820    REM ===============================================================
    0x6272a17c0ed0 ---------H   10830    REM
    0x6272a17c0fa0 ---------H G 10840    REM *** STRING COMPARISON IN QUADRANT ARRAY ***
    0x6272a17c13f0 ---------H   10850    LET Z1 = INT(Z1 + .5)
    0x6272a17c1800 ---------H   10860    LET Z2 = INT(Z2 + .5)
    0x6272a17c1a40 ---------H   10870    LET Z3 = 0
    0x6272a17c2230 ---------H   10880    IF MID$(Q$(Z1), (3 * Z2 - 2), 3) <> A$ GOTO 10900
    0x6272a17c2470 ---------H   10890    Z3 = 1
    0x6272a17c24c0 ---------H T 10900    RETURN
    0x6272a17c2540 ---------I   10910    REM
    0x6272a17c2640 ---------I   10920    REM ===============================================================
    0x6272a17c26d0 ---------I   10930    REM
    0x6272a17c27c0 ---------I   10940    REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    0x6272a17c2890 ---------I   10950    REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)
    0x6272a17c2b90 ---------I G 10960    LET L2 = 2
    0x6272a17c2dc0 ---------I   10970    IF Z5 >= 5 GOTO 10990
    0x6272a17c3010 ---------I   10980    LET L2 = 1
    0x6272a17c3670 ---------I T 10990    LET L3 = 2 * (Z4 - 1) + L2
    0x6272a17c3990 ---------I   11000    LET G2$ = G1$(L3)
    0x6272a17c3bc0 ---------I   11010    IF G5 = 1 GOTO 11090
    0x6272a17c3e30 ---------I   11020    LET L3 = Z5
    0x6272a17c4060 ---------I   11030    IF Z5 <= 4 GOTO 11050
    0x6272a17c43c0 ---------I   11040    LET L3 = Z5 - 4
    0x6272a17c46c0 ---------I T 11050    LET G3$ = "IV"
    0x6272a17c48f0 ---------I   11060    IF L3 = 4 GOTO 11080
    0x6272a17c4df0 ---------I   11070    LET G3$ = MID$(G4$, 1, L3)
    0x6272a17c5260 ---------I T 11080    G2$ = G2$ + " " + G3$
    0x6272a17c52b0 ---------I T 11090    RETURN
    0x6272a17c5310 --------CA T 11100    STOP
    0x6272a17c5370 ---------A   11110    END
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

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x6272a1724db0 (01000)   0x6272a1724db0 (01000)   0x6272a17c5370 (11110)   0x6272a17c5370 (11110)   
   B) 0x6272a176dac0 (05220)   0x6272a176e190 (05260)   0x6272a176eff0 (05330)   0x6272a176eff0 (05330)   
   C) 0x6272a172add0 (01270)   0x6272a1791ca0 (07610)   0x6272a1796560 (07820)   0x6272a17c5310 (11100)   
   D) 0x6272a1798da0 (08030)   0x6272a1799550 (08070)   0x6272a17a6ca0 (08900)   0x6272a17a6ca0 (08900)   
   E) 0x6272a17bb650 (10390)   0x6272a17bbf40 (10440)   0x6272a17bced0 (10510)   0x6272a17bced0 (10510)   
   F) 0x6272a17bcf50 (10520)   0x6272a17bd1c0 (10550)   0x6272a17c0710 (10740)   0x6272a17c0710 (10740)   
   G) 0x6272a17c0790 (10750)   0x6272a17c09f0 (10780)   0x6272a17c0cc0 (10800)   0x6272a17c0cc0 (10800)   
   H) 0x6272a17c0d40 (10810)   0x6272a17c0fa0 (10840)   0x6272a17c24c0 (10900)   0x6272a17c24c0 (10900)   
   I) 0x6272a17c2540 (10910)   0x6272a17c2b90 (10960)   0x6272a17c52b0 (11090)   0x6272a17c52b0 (11090)   

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

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/xstrek.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6272a1724db0 ---------A   01000  REM (VERSION "STREK7", 1/12/75 RCL)
    0x6272a1723b80 ---------A   01010  REM
    0x6272a1724f30 ---------A   01020  REM
    0x6272a1724e70 ---------A   01030  REM ***         *** STAR TREK ***       ***
    0x6272a1723fc0 ---------A   01040  REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    0x6272a17132b0 ---------A   01050  REM *** AS SEEN ON THE STAR TREK TV SHOW.
    0x6272a17227f0 ---------A   01060  REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    0x6272a1723040 ---------A   01070  REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    0x6272a1722e90 ---------A   01080  REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY
    0x6272a17232d0 ---------A   01090  REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974,
    0x6272a17234d0 ---------A   01100  REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    0x6272a1724740 ---------A   01110  REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    0x6272a1722be0 ---------A   01120  REM *** ADDRESS TO
    0x6272a1725100 ---------A   01130  REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    0x6272a17251a0 ---------A   01140  REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    0x6272a1725230 ---------A   01150  RANDOMIZE
    0x6272a17226d0 ---------A   01160  PRINT TAB(15); "* * * STAR TREK * * *"
    0x6272a1722670 ---------A   01170  PRINT
    0x6272a1723780 ---------A   01180  PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    0x6272a1723860 ---------A   01190  INPUT A$
    0x6272a172aa00 ---------A   01200  IF A$ <> "YES" GOTO 1280
    0x6272a172aaa0 ---------A   01210  PRINT "PLEASE WAIT  . . .";
    0x6272a172ab00 ---------A   01220  CHAIN "DSK:STINST.BAS"
    0x6272a172ab60 ----------   01230  PRINT
    0x6272a172abc0 ---------A   01240  REM
    0x6272a172acc0 ---------A   01250  REM ===============================================================
    0x6272a172ad50 ---------A   01260  REM
    0x6272a172add0 --------CA T 01270  REM  PROGRAM BEGINS HERE .....
    0x6272a172b0c0 --------CA T 01280  DIM Q$(8)
    0x6272a172b460 --------CA   01290  FOR I = 1 TO 8
    0x6272a172b840 --------CA   01300  Q$(I) = SPACE$(24)
    0x6272a172b970 --------CA   01310  NEXT I
    0x6272a172c920 --------CA   01320  DIM G(8, 8), C(9, 2), K(3, 3), N(3), Z(8, 8)
    0x6272a172d2d0 --------CA   01330  LET T = INT(RND(1) * 20 + 20) * 100
    0x6272a172d6a0 --------CA   01340  LET P1 = 3.14159 / 4
    0x6272a172d990 --------CA   01350  LET T0 = T
    0x6272a172dc60 --------CA   01360  LET T9 = 30
    0x6272a172df30 --------CA   01370  LET D0 = 0
    0x6272a172e200 --------CA   01380  LET E0 = 3000
    0x6272a172e4f0 --------CA   01390  LET E = E0
    0x6272a172e7c0 --------CA   01400  LET P = 10
    0x6272a172eab0 --------CA   01410  LET P0 = P
    0x6272a172ed80 --------CA   01420  LET S9 = 200
    0x6272a172f080 --------CA   01430  LET S = 0
    0x6272a1730090 --------CA   01440  DEF FND (D) = SQR((K(I, 1) - S1) ^ 2 + (K(I, 2) - S2) ^ 2)
    0x6272a1730100 --------CA   01450  REM
    0x6272a1730200 --------CA   01460  REM ===============================================================
    0x6272a1730290 --------CA   01470  REM
    0x6272a1730350 --------CA   01480  REM INITIALIZE INTERPRISE'S POSITION
    0x6272a1730a20 --------CA   01490  LET Q1 = INT(RND(1) * 8 + 1)
    0x6272a17310c0 --------CA   01500  LET Q2 = INT(RND(1) * 8 + 1)
    0x6272a17316a0 --------CA   01510  LET S1 = INT(RND(1) * 8 + 1)
    0x6272a1731c70 --------CA   01520  LET S2 = INT(RND(1) * 8 + 1)
    0x6272a1731f50 --------CA   01530  MAT C = ZER
    0x6272a1732300 --------CA   01540  LET C(4, 1) = -1
    0x6272a17326a0 --------CA   01550  LET C(3, 1) = -1
    0x6272a1732a40 --------CA   01560  LET C(2, 1) = -1
    0x6272a1732de0 --------CA   01570  LET C(4, 2) = -1
    0x6272a1733180 --------CA   01580  LET C(5, 2) = -1
    0x6272a1733510 --------CA   01590  LET C(6, 2) = -1
    0x6272a17338a0 --------CA   01600  LET C(1, 2) = 1
    0x6272a1733c30 --------CA   01610  LET C(2, 2) = 1
    0x6272a1733fc0 --------CA   01620  LET C(6, 1) = 1
    0x6272a1734350 --------CA   01630  LET C(7, 1) = 1
    0x6272a17346e0 --------CA   01640  LET C(8, 1) = 1
    0x6272a1734e80 --------CA   01650  LET C(8, 2) = 1
    0x6272a1735210 --------CA   01660  LET C(9, 2) = 1
    0x6272a1735420 --------CA   01670  DIM D(8)
    0x6272a1735700 --------CA   01680  FOR I = 1 TO 8
    0x6272a1735a00 --------CA   01690  LET D(I) = 0
    0x6272a1735b30 --------CA   01700  NEXT I
    0x6272a1735e20 --------CA   01710  DIM D$(8)
    0x6272a1735ec0 --------CA   01720  RESTORE
    0x6272a1736c70 --------CA   01730  READ D$(1), D$(2), D$(3), D$(4), D$(5), D$(6), D$(7), D$(8)
    0x6272a17370a0 --------CA   01740  DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    0x6272a1737490 --------CA   01750  DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    0x6272a1737780 --------CA   01760  LET G4$ = "III"
    0x6272a1737a50 --------CA   01770  DIM G1$(16)
    0x6272a1737d20 --------CA   01780  FOR I = 1 TO 16
    0x6272a1737f60 --------CA   01790  READ G1$(I)
    0x6272a1738090 --------CA   01800  NEXT I
    0x6272a17387b0 --------CA   01810  DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    0x6272a1738ca0 --------CA   01820  DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    0x6272a1739090 --------CA   01830  DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    0x6272a1739360 --------CA   01840  LET B9 = 0
    0x6272a1739640 --------CA   01850  LET K9 = 0
    0x6272a1739930 --------CA   01860  LET A1$ = "NSLPTSDCX"
    0x6272a17399a0 --------CA   01870  REM
    0x6272a1739aa0 --------CA   01880  REM ===============================================================
    0x6272a1739b30 --------CA   01890  REM
    0x6272a1739bf0 --------CA   01900  REM  SET UP WHAT EXISTS IN GALAXY ...
    0x6272a1739ef0 --------CA   01910  FOR I = 1 TO 8
    0x6272a173a2a0 --------CA   01920  FOR J = 1 TO 8
    0x6272a173a670 --------CA   01930  LET R1 = RND(1)
    0x6272a173a8a0 --------CA   01940  IF R1 > .98 GOTO 1990
    0x6272a173ab10 --------CA   01950  IF R1 > .95 GOTO 2020
    0x6272a173ad80 --------CA   01960  IF R1 > .8 GOTO 2050
    0x6272a173b080 --------CA   01970  LET K3 = 0
    0x6272a173b0f0 --------CA   01980  GOTO 2070
    0x6272a173b310 --------CA T 01990  LET K3 = 3
    0x6272a173b640 --------CA   02000  LET K9 = K9 + 3
    0x6272a173b6b0 --------CA   02010  GOTO 2070
    0x6272a173b8d0 --------CA T 02020  LET K3 = 2
    0x6272a173bc00 --------CA   02030  LET K9 = K9 + 2
    0x6272a173bc70 --------CA   02040  GOTO 2070
    0x6272a173be90 --------CA T 02050  LET K3 = 1
    0x6272a173c1d0 --------CA   02060  LET K9 = K9 + 1
    0x6272a173c4d0 --------CA T 02070  LET R1 = RND(1)
    0x6272a173c700 --------CA   02080  IF R1 > .96 GOTO 2110
    0x6272a173ca00 --------CA   02090  LET B3 = 0
    0x6272a173ca70 --------CA   02100  GOTO 2130
    0x6272a173cc90 --------CA T 02110  LET B3 = 1
    0x6272a173cfe0 --------CA   02120  LET B9 = B9 + 1
    0x6272a173d690 --------CA T 02130  LET S3 = INT(RND(1) * 8 + 1)
    0x6272a173dee0 --------CA   02140  LET G(I, J) = K3 * 100 + B3 * 10 + S3
    0x6272a173df70 --------CA   02150  REM K3=#KLINGONS B3=#STARBASES S3=#STARS
    0x6272a173e370 --------CA   02160  LET Z(I, J) = 0
    0x6272a173e4a0 --------CA   02170  NEXT J
    0x6272a173e5f0 --------CA   02180  NEXT I
    0x6272a173e900 --------CA   02190  LET K7 = K9
    0x6272a173ec00 --------CA   02200  LET X$ = ""
    0x6272a173ef00 --------CA   02210  LET X0$ = " IS "
    0x6272a173f130 --------CA   02220  IF B9 <> 0 GOTO 2280
    0x6272a173f380 --------CA   02230  LET B9 = 1
    0x6272a173f730 --------CA   02240  IF G(6, 3) >= 200 GOTO 2270
    0x6272a173fda0 --------CA   02250  LET G(6, 3) = G(6, 3) + 100
    0x6272a17400e0 --------CA   02260  LET K9 = K9 + 1
    0x6272a1740720 --------CA T 02270  LET G(6, 3) = G(6, 3) + 10
    0x6272a1740950 --------CA T 02280  IF B9 = 1 GOTO 2330
    0x6272a17413d0 --------CA   02290  LET X$ = "S"
    0x6272a1741600 --------CA   02300  LET X0$ = " ARE "
    0x6272a1741750 --------CA   02310  PRINT " "
    0x6272a17418d0 --------CA   02320  PRINT " "
    0x6272a1741a40 --------CA T 02330  PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    0x6272a1741be0 --------CA   02340  PRINT " "
    0x6272a1741f90 --------CA   02350  PRINT "    DESTROY THE "; K9; " KLINGON WARSHIPS WHICH HAVE INVADED"
    0x6272a1742160 --------CA   02360  PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x6272a1742920 --------CA   02370  PRINT "  ON STARDATE"; T0 + T9; "; THIS GIVES YOU"; T9; " DAYS.  THERE"; X0$
    0x6272a1742ea0 --------CA   02380  PRINT " "; B9; "STARBASE"; X$; " IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    0x6272a1743030 --------CA   02390  PRINT " "
    0x6272a17431d0 --------CA   02400  PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    0x6272a1743330 --------CA   02410  INPUT A$
    0x6272a17433b0 --------CA   02420  REM
    0x6272a17434b0 --------CA   02430  REM ===============================================================
    0x6272a1743540 --------CA   02440  REM
    0x6272a1743610 --------CA   02450  REM *** HERE ANY TIME ENTER NEW QUADRANT ...
    0x6272a1743920 --------CA T 02460  LET Z4 = Q1
    0x6272a1743c10 --------CA   02470  LET Z5 = Q2
    0x6272a1743e20 --------CA   02480  LET K3 = 0
    0x6272a1744030 --------CA   02490  LET B3 = 0
    0x6272a1744240 --------CA   02500  LET S3 = 0
    0x6272a1744520 --------CA   02510  LET G5 = 0
    0x6272a17449d0 --------CA   02520  LET D4 = .5 * RND(1)
    0x6272a1744d70 --------CA   02530  FOR I7 = 1 TO 8
    0x6272a1745150 --------CA   02540  Q$(I7) = SPACE$(24)
    0x6272a1745280 --------CA   02550  NEXT I7
    0x6272a17454e0 --------CA   02560  IF Q1 < 1 GOTO 2770
    0x6272a1745750 --------CA   02570  IF Q1 > 8 GOTO 2770
    0x6272a17459c0 --------CA   02580  IF Q2 < 1 GOTO 2770
    0x6272a1745c30 --------CA   02590  IF Q2 > 8 GOTO 2770
    0x6272a1745cd0 --------CA   02600  GOSUB 10960
    0x6272a1745e30 --------CA   02610  PRINT " "
    0x6272a1746090 --------CA   02620  IF T <> T0 GOTO 2660
    0x6272a1746280 --------CA   02630  PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    0x6272a17466b0 --------CA   02640  PRINT "IN THE GALACTIC QUADRANT, '"; G2$; "'."
    0x6272a1746750 --------CA   02650  GOTO 2670
    0x6272a1746aa0 --------CA T 02660  PRINT "NOW ENTERING "; G2$; " QUADRANT ..."
    0x6272a1746c10 --------CA T 02670  PRINT " "
    0x6272a17471d0 --------CA   02680  LET X = G(Q1, Q2) * .01
    0x6272a17474f0 --------CA   02690  LET K3 = INT(X)
    0x6272a1747a80 --------CA   02700  LET B3 = INT((X - K3) * 10)
    0x6272a1748440 --------CA   02710  LET S3 = G(Q1, Q2) - INT(G(Q1, Q2) * .1) * 10
    0x6272a1748670 --------CA   02720  IF K3 = 0 GOTO 2760
    0x6272a1748830 --------CA   02730  PRINT "COMBAT AREA      CONDITION RED"
    0x6272a1748a70 --------CA   02740  IF S > 200 GOTO 2760
    0x6272a1748c20 --------CA   02750  PRINT "   SHIELDS DANGEROUSLY LOW"
    0x6272a1748e40 --------CA T 02760  MAT K = ZER
    0x6272a1749130 --------CA T 02770  FOR I = 1 TO 3
    0x6272a17494f0 --------CA   02780  LET K(I, 3) = 0
    0x6272a1749620 --------CA   02790  NEXT I
    0x6272a17496b0 --------CA   02800  REM
    0x6272a17497b0 --------CA   02810  REM ===============================================================
    0x6272a1749840 --------CA   02820  REM
    0x6272a1749930 --------CA   02830  REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS,
    0x6272a1749a00 --------CA   02840  REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    0x6272a1749c50 --------CA   02850  LET A$ = "<*>"
    0x6272a1749f40 --------CA   02860  LET Z1 = S1
    0x6272a174a230 --------CA   02870  LET Z2 = S2
    0x6272a174a2a0 --------CA   02880  GOSUB 10550
    0x6272a174a590 --------CA   02890  FOR I = 1 TO K3
    0x6272a174a620 --------CA   02900  GOSUB 10440
    0x6272a174a850 --------CA   02910  LET A$ = "+++"
    0x6272a174aa80 --------CA   02920  LET Z1 = R1
    0x6272a174ad70 --------CA   02930  LET Z2 = R2
    0x6272a174adf0 --------CA   02940  GOSUB 10550
    0x6272a174b1d0 --------CA   02950  LET K(I, 1) = R1
    0x6272a174b5b0 --------CA   02960  LET K(I, 2) = R2
    0x6272a174b960 --------CA   02970  LET K(I, 3) = 200
    0x6272a174ba90 --------CA   02980  NEXT I
    0x6272a174bda0 --------CA   02990  FOR I = 1 TO B3
    0x6272a174be30 --------CA   03000  GOSUB 10440
    0x6272a174c060 --------CA   03010  LET A$ = ">!<"
    0x6272a174c290 --------CA   03020  LET Z1 = R1
    0x6272a174c4c0 --------CA   03030  LET Z2 = R2
    0x6272a174c530 --------CA   03040  GOSUB 10550
    0x6272a174c820 --------CA   03050  LET B4 = Z1
    0x6272a174cb10 --------CA   03060  LET B5 = Z2
    0x6272a174cc40 --------CA   03070  NEXT I
    0x6272a174cf50 --------CA   03080  FOR I = 1 TO S3
    0x6272a174cfe0 --------CA   03090  GOSUB 10440
    0x6272a174d210 --------CA   03100  LET A$ = " * "
    0x6272a174d440 --------CA   03110  LET Z1 = R1
    0x6272a174d670 --------CA   03120  LET Z2 = R2
    0x6272a174d6e0 --------CA   03130  GOSUB 10550
    0x6272a174d810 --------CA   03140  NEXT I
    0x6272a174d8b0 --------CA T 03150  GOSUB 8070
    0x6272a174dc00 --------CA T 03160  IF S + E <= 10 GOTO 3190
    0x6272a174de70 --------CA   03170  IF E > 10 GOTO 3230
    0x6272a174e1a0 --------CA   03180  IF D(7) >= 0 GOTO 3230
    0x6272a174e7e0 --------CA T 03190  PRINT CHR$(7); "** FATAL ERROR **"; CHR$(7); "   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    0x6272a174e9b0 --------CA   03200  PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    0x6272a174eb40 --------CA   03210  PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    0x6272a174ebd0 --------CA   03220  GOTO 7870
    0x6272a174ed40 --------CA T 03230  PRINT "COMMAND";
    0x6272a174eea0 --------CA   03240  INPUT A$
    0x6272a174f1b0 --------CA   03250  FOR I = 1 TO 9
    0x6272a174f8f0 --------CA   03260  IF MID$(A$, 1, 1) <> MID$(A1$, I, 1) GOTO 3320
    0x6272a174fb60 --------CA   03270  IF I <> 2 GOTO 3310
    0x6272a174feb0 --------CA   03280  IF LEN(A$) < 2 GOTO 3310
    0x6272a17503b0 --------CA   03290  IF MID$(A$, 2, 1) = "R" GOTO 3310
    0x6272a1750630 --------CA   03300  LET I = 6
    0x6272a1750e40 --------CA T 03310  ON I GOTO 3490, 3150, 5380, 5670, 6140, 7080, 7270, 8950, 7880
    0x6272a1750f80 --------CA T 03320  NEXT I
    0x6272a1751130 --------CA   03330  PRINT "ENTER ONE OF THE FOLLOWING:"
    0x6272a17512b0 --------CA   03340  PRINT "  NAV (TO SET COURSE)"
    0x6272a1751440 --------CA   03350  PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    0x6272a17515c0 --------CA   03360  PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    0x6272a1751750 --------CA   03370  PRINT "  PHA (TO FIRE PHASERS)"
    0x6272a17518e0 --------CA   03380  PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    0x6272a1751a70 --------CA   03390  PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    0x6272a1751c00 --------CA   03400  PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    0x6272a1751d90 --------CA   03410  PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    0x6272a1751f00 --------CA   03420  PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    0x6272a1752060 --------CA   03430  PRINT " "
    0x6272a17520e0 --------CA   03440  GOTO 3160
    0x6272a1752150 ---------A   03450  REM
    0x6272a1752250 ---------A   03460  REM ===============================================================
    0x6272a17522e0 ---------A   03470  REM
    0x6272a1752390 ---------A   03480  REM  COURSE CONTROL BEGINS HERE
    0x6272a1752530 --------CA T 03490  PRINT "COURSE(1-9)";
    0x6272a1752760 --------CA   03500  INPUT C1
    0x6272a17529a0 --------CA   03510  IF C1 >= 1 GOTO 3540
    0x6272a1752b70 --------CA T 03520  PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x6272a1752c00 --------CA   03530  GOTO 3160
    0x6272a1752e30 --------CA T 03540  IF C1 < 9 GOTO 3570
    0x6272a17530a0 --------CA   03550  IF C1 > 9 GOTO 3520
    0x6272a1753150 --------CA   03560  GOTO 3520
    0x6272a1740af0 --------CA T 03570  PRINT "WARP FACTOR (0-8)";
    0x6272a1740d20 --------CA   03580  INPUT W1
    0x6272a1740f60 --------CA   03590  IF W1 > 0 GOTO 3630
    0x6272a1741150 --------CA   03600  PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    0x6272a1754490 --------CA   03610  PRINT "          SET WARP "; W1; " !"
    0x6272a1754520 --------CA   03620  GOTO 3160
    0x6272a1754750 --------CA T 03630  IF W1 <= 8 GOTO 3670
    0x6272a1754940 --------CA   03640  PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    0x6272a1754ca0 --------CA   03650  PRINT "         TAKE WARP "; W1; "!/"
    0x6272a1754d30 --------CA   03660  GOTO 3160
    0x6272a1755020 --------CA T 03670  IF D(1) >= 0 GOTO 3710
    0x6272a1755290 --------CA   03680  IF W1 <= .2 GOTO 3710
    0x6272a1755460 --------CA   03690  PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    0x6272a17554f0 --------CA   03700  GOTO 3490
    0x6272a1755a10 --------CA T 03710  LET N = INT(W1 * 8 + .5)
    0x6272a1755d60 --------CA   03720  IF E - N >= 0 GOTO 3840
    0x6272a1755f50 --------CA   03730  PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x6272a17562d0 --------CA   03740  PRINT "   FOR MANEUVERING AT WARP"; W1; "!'"
    0x6272a1756650 --------CA   03750  IF S < N - E GOTO 3160
    0x6272a1756980 --------CA   03760  IF D(7) < 0 GOTO 3160
    0x6272a1756d70 --------CA   03770  PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"; S; " UNITS"
    0x6272a1756ef0 --------CA   03780  PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    0x6272a1756f70 --------CA   03790  GOTO 7080
    0x6272a1756fe0 ---------A   03800  REM
    0x6272a17570e0 ---------A   03810  REM ===============================================================
    0x6272a1757170 ---------A   03820  REM
    0x6272a1757240 ---------A   03830  REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...
    0x6272a1757560 --------CA T 03840  FOR I = 1 TO K3
    0x6272a1757920 --------CA   03850  IF K(1, 3) <= 0 GOTO 3950
    0x6272a1757ba0 --------CA   03860  LET A$ = "   "
    0x6272a1757f80 --------CA   03870  LET Z1 = K(I, 1)
    0x6272a1758350 --------CA   03880  LET Z2 = K(I, 2)
    0x6272a17583c0 --------CA   03890  GOSUB 10550
    0x6272a1758440 --------CA   03900  GOSUB 10440
    0x6272a1758820 --------CA   03910  LET K(I, 1) = Z1
    0x6272a1758c00 --------CA   03920  LET K(I, 2) = Z2
    0x6272a1758e30 --------CA   03930  LET A$ = "+++"
    0x6272a1758ea0 --------CA   03940  GOSUB 10550
    0x6272a1758fd0 --------CA T 03950  NEXT I
    0x6272a1759060 --------CA   03960  GOSUB 7610
    0x6272a1759330 --------CA   03970  LET D1 = 0
    0x6272a1759630 --------CA   03980  LET D6 = W1
    0x6272a1759860 --------CA   03990  IF W1 < 1 GOTO 4050
    0x6272a1759aa0 --------CA   04000  LET D6 = 1
    0x6272a1759b10 --------CA   04010  REM
    0x6272a1759c10 --------CA   04020  REM ===============================================================
    0x6272a1759ca0 --------CA   04030  REM
    0x6272a1759d50 --------CA   04040  REM MAKE REPAIRS TO SHIP
    0x6272a175a050 --------CA T 04050  FOR I = 1 TO 8
    0x6272a175a370 --------CA   04060  IF D(I) >= 0 GOTO 4160
    0x6272a175a8b0 --------CA   04070  LET D(I) = D(I) + 6
    0x6272a175abc0 --------CA   04080  IF D(I) < 0 GOTO 4160
    0x6272a175ae30 --------CA   04090  IF D1 = 1 GOTO 4120
    0x6272a175b090 --------CA   04100  LET D1 = 1
    0x6272a175b200 --------CA   04110  PRINT "DAMAGE CONTROL REPORT:"
    0x6272a175b3c0 --------CA T 04120  PRINT TAB(8);
    0x6272a175b600 --------CA   04130  LET R1 = I
    0x6272a175b680 --------CA   04140  GOSUB 10780
    0x6272a175b7d0 --------CA   04150  PRINT " REPAIR COMPLETED"
    0x6272a175b910 --------CA T 04160  NEXT I
    0x6272a175b9a0 --------CA   04170  REM
    0x6272a175baa0 --------CA   04180  REM ===============================================================
    0x6272a175bb30 --------CA   04190  REM
    0x6272a175bbf0 --------CA   04200  REM DAMAGE/IMPROVEMENT DURING SOME VES
    0x6272a175bf10 --------CA   04210  IF RND(1) > .2 GOTO 4410
    0x6272a175c530 --------CA   04220  LET R1 = INT(RND(1) * 8 + 1)
    0x6272a175c820 --------CA   04230  IF RND(1) >= .6 GOTO 4310
    0x6272a175d080 --------CA   04240  LET D(R1) = D(R1) - (RND(1) * 5 + 1)
    0x6272a175d1e0 --------CA   04250  PRINT " "
    0x6272a175d370 --------CA   04260  PRINT "DAMAGE CONTROL REPORT:";
    0x6272a175d400 --------CA   04270  GOSUB 10780
    0x6272a175d550 --------CA   04280  PRINT " DAMAGED"
    0x6272a175d6b0 --------CA   04290  PRINT " "
    0x6272a175d750 --------CA   04300  GOTO 4410
    0x6272a175df60 --------CA T 04310  LET D(R1) = D(R1) + (RND(1) * 3 + 1)
    0x6272a175e0c0 --------CA   04320  PRINT " "
    0x6272a175e250 --------CA   04330  PRINT "DAMAGE CONTROL REPORT:";
    0x6272a175e2f0 --------CA   04340  GOSUB 10780
    0x6272a175e450 --------CA   04350  PRINT " STATE OF REPAIR IMPROVED"
    0x6272a175e5b0 --------CA   04360  PRINT " "
    0x6272a175e630 --------CA   04370  REM
    0x6272a175e730 --------CA   04380  REM ===============================================================
    0x6272a175e7c0 --------CA   04390  REM
    0x6272a175e870 --------CA   04400  REM BEGIN MOVING STARSHIP **
    0x6272a175ead0 --------CA T 04410  LET A$ = "   "
    0x6272a175edf0 --------CA   04420  LET Z1 = INT(S1)
    0x6272a175f100 --------CA   04430  LET Z2 = INT(S2)
    0x6272a175f180 --------CA   04440  GOSUB 10550
    0x6272a175f7b0 --------CA   04450  LET X1 = -SIN((C1 - 1) * P1)
    0x6272a175f9e0 --------CA   04460  LET X = S1
    0x6272a175fce0 --------CA   04470  LET Y = S2
    0x6272a1760310 --------CA   04480  LET X2 = COS((C1 - 1) * P1)
    0x6272a1760600 --------CA   04490  LET Q4 = Q1
    0x6272a17608f0 --------CA   04500  LET Q5 = Q2
    0x6272a1760bf0 --------CA   04510  FOR I = 1 TO N
    0x6272a1760f60 --------CA   04520  LET S1 = S1 + X1
    0x6272a17612c0 --------CA   04530  LET S2 = S2 + X2
    0x6272a17614f0 --------CA   04540  IF S1 < .5 GOTO 4800
    0x6272a1761760 --------CA   04550  IF S1 >= 8.5 GOTO 4800
    0x6272a17619d0 --------CA   04560  IF S2 < .5 GOTO 4800
    0x6272a1761c40 --------CA   04570  IF S2 >= 8.5 GOTO 4800
    0x6272a1762860 --------CA   04580  IF MID$(Q$(INT(S1 + .5)), (3 * INT(S2 + .5) - 2), 3) = "   " GOTO 4640
    0x6272a1762c00 --------CA   04590  LET S1 = S1 - X1
    0x6272a1762f80 --------CA   04600  LET S2 = S2 - X2
    0x6272a1763410 --------CA   04610  PRINT "WARP ENGINES SHUT DOWN AT SECTOR "; INT(S1 + .5);
    0x6272a1763960 --------CA   04620  PRINT ","; INT(S2 + .5); " DUE TO BAD NAVIGATION"
    0x6272a17639e0 --------CA   04630  GOTO 4650
    0x6272a1763b10 --------CA T 04640  NEXT I
    0x6272a1763d70 --------CA T 04650  LET A$ = "<*>"
    0x6272a1764190 --------CA   04660  S1 = INT(S1 + .5)
    0x6272a17645b0 --------CA   04670  S2 = INT(S2 + .5)
    0x6272a17648d0 --------CA   04680  LET Z1 = INT(S1)
    0x6272a1764be0 --------CA   04690  LET Z2 = INT(S2)
    0x6272a1764c50 --------CA   04700  GOSUB 10550
    0x6272a1764cc0 --------CA   04710  GOSUB 5260
    0x6272a1764fa0 --------CA   04720  LET T8 = 1
    0x6272a17651d0 --------CA   04730  IF W1 >= 1 GOTO 4750
    0x6272a1765720 --------CA   04740  LET T8 = .1 * INT(10 * W1)
    0x6272a1765a80 --------CA T 04750  LET T = T + T8
    0x6272a1765df0 --------CA   04760  IF T > T0 + T9 GOTO 7830
    0x6272a1765ec0 --------CA   04770  REM SEE IF DOCKED, THEN GET COMMAND
    0x6272a1765f60 --------CA   04780  GOTO 3150
    0x6272a1765fe0 ---------A   04790  REM EXCEEDED QUADRANT LIMITS
    0x6272a17666b0 --------CA T 04800  LET X = 8 * Q1 + X + N * X1
    0x6272a1766d50 --------CA   04810  LET Y = 8 * Q2 + Y + N * X2
    0x6272a1767170 --------CA   04820  LET Q1 = INT(X / 8)
    0x6272a1767590 --------CA   04830  LET Q2 = INT(Y / 8)
    0x6272a1767ad0 --------CA   04840  LET S1 = INT(X - Q1 * 8)
    0x6272a1768000 --------CA   04850  LET S2 = INT(Y - Q2 * 8)
    0x6272a17682e0 --------CA   04860  LET X5 = 0
    0x6272a1768510 --------CA   04870  IF S1 <> 0 GOTO 4910
    0x6272a1768870 --------CA   04880  LET Q1 = Q1 - 1
    0x6272a1768a80 --------CA   04890  LET S1 = 8
    0x6272a1768ca0 --------CA   04900  LET X5 = 0
    0x6272a1768ed0 --------CA T 04910  IF S2 <> 0 GOTO 4950
    0x6272a1769230 --------CA   04920  LET Q2 = Q2 - 1
    0x6272a1769440 --------CA   04930  LET S2 = 8
    0x6272a1769660 --------CA   04940  LET X5 = 0
    0x6272a1769890 --------CA T 04950  IF Q1 >= 1 GOTO 4990
    0x6272a1769ad0 --------CA   04960  LET X5 = 1
    0x6272a1769ce0 --------CA   04970  LET Q1 = 1
    0x6272a1769f00 --------CA   04980  LET S1 = 1
    0x6272a176a130 --------CA T 04990  IF Q1 <= 8 GOTO 5030
    0x6272a176a370 --------CA   05000  LET X5 = 1
    0x6272a176a580 --------CA   05010  LET Q1 = 8
    0x6272a176a7a0 --------CA   05020  LET S1 = 8
    0x6272a176a9d0 --------CA T 05030  IF Q2 >= 1 GOTO 5070
    0x6272a176ac10 --------CA   05040  LET X5 = 1
    0x6272a176ae20 --------CA   05050  LET Q2 = 1
    0x6272a176b040 --------CA   05060  LET S2 = 1
    0x6272a176b270 --------CA T 05070  IF Q2 <= 8 GOTO 5110
    0x6272a176b4b0 --------CA   05080  LET X5 = 1
    0x6272a176b6c0 --------CA   05090  LET Q2 = 8
    0x6272a176b8e0 --------CA   05100  LET S2 = 8
    0x6272a176bb10 --------CA T 05110  IF X5 = 0 GOTO 5180
    0x6272a176bd10 --------CA   05120  PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    0x6272a176bed0 --------CA   05130  PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    0x6272a176c080 --------CA   05140  PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    0x6272a176c240 --------CA   05150  PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x6272a176cbb0 --------CA   05160  PRINT "   AT SECTOR "; S1; ","; S2; " OF QUADRANT "; Q1; ","; Q2; ".'"
    0x6272a176cf30 --------CA   05170  IF T > T0 + T9 GOTO 7830
    0x6272a176d610 --------CA T 05180  IF 8 * Q1 + Q2 = 8 * Q4 + Q5 GOTO 4650
    0x6272a176d970 --------CA   05190  LET T = T + 1
    0x6272a176d9e0 --------CA   05200  GOSUB 5260
    0x6272a176da50 --------CA   05210  GOTO 2460
    0x6272a176dac0 ---------B   05220  REM
    0x6272a176dbc0 ---------B   05230  REM ===============================================================
    0x6272a176dc50 ---------B   05240  REM
    0x6272a176dd00 ---------B   05250  REM MANEUVER ENERGY S/R ***
    0x6272a176e190 ---------B G 05260  LET E = E - N - 10
    0x6272a176e3c0 ---------B   05270  IF E >= 0 GOTO 5330
    0x6272a176e5b0 ---------B   05280  PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    0x6272a176e910 ---------B   05290  LET S = S + E
    0x6272a176eb30 ---------B   05300  LET E = 0
    0x6272a176ed60 ---------B   05310  IF S > 0 GOTO 5330
    0x6272a176efa0 ---------B   05320  LET S = 0
    0x6272a176eff0 ---------B T 05330  RETURN
    0x6272a176f070 ---------A   05340  REM
    0x6272a176f170 ---------A   05350  REM ===============================================================
    0x6272a176f200 ---------A   05360  REM
    0x6272a176f2b0 ---------A   05370  REM L.R. SENSOR SCAN CODE ***
    0x6272a176f5d0 --------CA T 05380  IF D(3) >= 0 GOTO 5410
    0x6272a176f780 --------CA   05390  PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x6272a176f830 --------CA   05400  GOTO 3160
    0x6272a176fca0 --------CA T 05410  PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"; Q1; ","; Q2
    0x6272a176ffa0 --------CA   05420  LET O1$ = "..................."
    0x6272a1770100 --------CA   05430  PRINT O1$
    0x6272a1770630 --------CA   05440  FOR I = Q1 - 1 TO Q1 + 1
    0x6272a17706b0 --------CA   05450  REM    DIM N(3)
    0x6272a1770a80 --------CA   05460  FOR I1 = 1 TO 3
    0x6272a1770d80 --------CA   05470  LET N(I1) = 0
    0x6272a1770eb0 --------CA   05480  NEXT I1
    0x6272a1771400 --------CA   05490  FOR J = Q2 - 1 TO Q2 + 1
    0x6272a1771640 --------CA   05500  IF I < 1 GOTO 5580
    0x6272a17718b0 --------CA   05510  IF I > 8 GOTO 5580
    0x6272a1771b20 --------CA   05520  IF J < 1 GOTO 5560
    0x6272a1771d90 --------CA   05530  IF J > 8 GOTO 5560
    0x6272a17724d0 --------CA   05540  LET N(J - Q2 + 2) = G(I, J)
    0x6272a1772a80 --------CA   05550  LET Z(I, J) = G(I, J)
    0x6272a1772bb0 --------CA T 05560  NEXTJ
    0x6272a1772c50 --------CA   05570  REM   DIM P1$(20)
    0x6272a1772fa0 --------CA T 05580  LET P1$ = ": ### : ### : ### :"
    0x6272a1773610 --------CA   05590  PRINT USING P1$; N(1); N(2); N(3)
    0x6272a1773770 --------CA   05600  PRINT O1$
    0x6272a17738b0 --------CA   05610  NEXT I
    0x6272a1773940 --------CA   05620  GOTO 3160
    0x6272a17739b0 ---------A   05630  REM
    0x6272a1773ab0 ---------A   05640  REM ===============================================================
    0x6272a1773b40 ---------A   05650  REM
    0x6272a1773c00 ---------A   05660  REM *** PHASER CONTROL CODE BEGINS HERE
    0x6272a1773e60 --------CA T 05670  IF K3 > 0 GOTO 5710
    0x6272a1774050 --------CA   05680  PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    0x6272a17741c0 --------CA   05690  PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    0x6272a1774250 --------CA   05700  GOTO 3160
    0x6272a1774540 --------CA T 05710  IF D(4) >= 0 GOTO 5740
    0x6272a17746d0 --------CA   05720  PRINT "PHASERS INOPERATIVE"
    0x6272a1774760 --------CA   05730  GOTO 3160
    0x6272a1774a50 --------CA T 05740  IF D(8) >= 0 GOTO 5760
    0x6272a1774c20 --------CA   05750  PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    0x6272a1774da0 --------CA T 05760  PRINT "PHASERS LOCKED ON TARGET;  "
    0x6272a1775020 --------CA T 05770  PRINT "ENERGY AVAILABLE ="; E
    0x6272a17751b0 --------CA   05780  PRINT "NUMBER OF UNITS TO FIRE:";
    0x6272a1775320 --------CA   05790  INPUT X
    0x6272a1775560 --------CA   05800  IF X <= 0 GOTO 3160
    0x6272a17758f0 --------CA   05810  IF E - X < 0 GOTO 5770
    0x6272a1775c70 --------CA   05820  LET E = E - X
    0x6272a1775cf0 --------CA   05830  GOSUB 7610
    0x6272a1775fe0 --------CA   05840  IF D(7) >= 0 GOTO 5860
    0x6272a1776440 --------CA   05850  LET X = X * RND(1)
    0x6272a1776930 --------CA T 05860  LET H1 = INT(X / K3)
    0x6272a1776c10 --------CA   05870  FOR I = 1 TO 3
    0x6272a1776ff0 --------CA   05880  IF K(I, 3) <= 0 GOTO 6080
    0x6272a1777970 --------CA   05890  LET H = INT((H1 / FND(0)) * (RND(1) * 2))
    0x6272a1777e60 --------CA   05900  IF H > .15 * K(I, 3) GOTO 5940
    0x6272a1778040 --------CA   05910  PRINT "SENSORS SHOW NO DAMAGE"
    0x6272a17787e0 --------CA   05920  PRINT "    TO ENEMY AT "; K(I, 1); ","; K(I, 2)
    0x6272a1778870 --------CA   05930  GOTO 6080
    0x6272a1778f40 --------CA T 05940  LET K(I, 3) = K(I, 3) - H
    0x6272a17797f0 --------CA   05950  PRINT H; " UNIT HIT ON KLINGON AT SECTOR "; K(I, 1); ","; K(I, 2)
    0x6272a1779bd0 --------CA   05960  IF K(I, 3) <= 0 GOTO 5990
    0x6272a177a120 --------CA   05970  PRINT "   (SENSORS SHOW"; K(I, 3); " UNITS REMAINING)"
    0x6272a177a1c0 --------CA   05980  GOTO 6080
    0x6272a177a330 --------CA T 05990  PRINT " *** KLINGON DESTROYED ***"
    0x6272a177a680 --------CA   06000  LET K3 = K3 - 1
    0x6272a177a9b0 --------CA   06010  LET K9 = K9 - 1
    0x6272a177abf0 --------CA   06020  A$ = "   "
    0x6272a177afd0 --------CA   06030  LET Z1 = K(I, 1)
    0x6272a177b3a0 --------CA   06040  LET Z2 = K(I, 2)
    0x6272a177b430 --------CA   06050  GOSUB 10550
    0x6272a177bc70 --------CA   06060  LET G(Q1, Q2) = K3 * 100 + B3 * 10 + S3
    0x6272a177bea0 --------CA   06070  IF K9 <= 0 GOTO 7980
    0x6272a177c000 --------CA T 06080  NEXT I
    0x6272a177c090 --------CA   06090  GOTO 3160
    0x6272a177c100 ---------A   06100  REM
    0x6272a177c200 ---------A   06110  REM ===============================================================
    0x6272a177c290 ---------A   06120  REM
    0x6272a17531d0 ---------A   06130  REM PHOTON TORPEDO CODE BEGINS ***
    0x6272a17534f0 --------CA T 06140  IF D(5) >= 0 GOTO 6170
    0x6272a17536a0 --------CA   06150  PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    0x6272a1753730 --------CA   06160  GOTO 3160
    0x6272a1753960 --------CA T 06170  IF P > 0 GOTO 6200
    0x6272a1753b10 --------CA   06180  PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x6272a1753ba0 --------CA   06190  GOTO 3160
    0x6272a1753d10 --------CA T 06200  PRINT "TORPEDO COURSE (1-9)";
    0x6272a1753e80 --------CA   06210  INPUT C1
    0x6272a17540c0 --------CA   06220  IF C1 >= 1 GOTO 6250
    0x6272a177e410 --------CA T 06230  PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x6272a177e4a0 --------CA   06240  GOTO 3160
    0x6272a177e6d0 --------CA T 06250  IF C1 > 9 GOTO 6230
    0x6272a177e940 --------CA   06260  IF C1 < 9 GOTO 6290
    0x6272a177ebb0 --------CA   06270  IF C1 >= 9 GOTO 6200
    0x6272a177ee00 --------CA   06280  LET C1 = 1
    0x6272a177f380 --------CA T 06290  LET X1 = -SIN((C1 - 1) * P1)
    0x6272a177f900 --------CA   06300  LET X2 = COS((C1 - 1) * P1)
    0x6272a177fd40 --------CA   06310  IF ABS(X1) < ABS(X2) THEN 6360
    0x6272a1780220 --------CA   06320  M9 = ABS(1 / X1)
    0x6272a1780530 --------CA   06330  X1 = SGN(X1)
    0x6272a1780880 --------CA   06340  X2 = X2 * M9
    0x6272a1780900 --------CA   06350  GOTO 6390
    0x6272a1780d10 --------CA T 06360  M9 = ABS(1 / X2)
    0x6272a1781020 --------CA   06370  X2 = SGN(X2)
    0x6272a1781370 --------CA   06380  X1 = X1 * M9
    0x6272a17816a0 --------CA T 06390  LET E = E - 2
    0x6272a17818d0 --------CA   06400  LET X = S1
    0x6272a1781b00 --------CA   06410  LET Y = S2
    0x6272a1781e40 --------CA   06420  LET P = P - 1
    0x6272a1781f90 --------CA   06430  PRINT "TORPEDO TRACK:"
    0x6272a17822f0 --------CA T 06440  LET X = X + X1
    0x6272a1782650 --------CA   06450  LET Y = Y + X2
    0x6272a1782b30 --------CA   06460  LET X9 = INT(X + .5)
    0x6272a1783010 --------CA   06470  LET Y9 = INT(Y + .5)
    0x6272a1783240 --------CA   06480  IF X9 < 1 GOTO 7010
    0x6272a17834b0 --------CA   06490  IF X9 >= 9 GOTO 7010
    0x6272a1783720 --------CA   06500  IF Y9 < 1 GOTO 7010
    0x6272a1783990 --------CA   06510  IF Y9 >= 9 GOTO 7010
    0x6272a1783e30 --------CA   06520  PRINT "               "; X9; ","; Y9
    0x6272a1784070 --------CA   06530  LET A$ = "   "
    0x6272a17842a0 --------CA   06540  LET Z1 = X9
    0x6272a17844d0 --------CA   06550  LET Z2 = Y9
    0x6272a1784550 --------CA   06560  GOSUB 10840
    0x6272a1784840 --------CA   06570  IF Z3 <> 0 GOTO 6440
    0x6272a1784aa0 --------CA   06580  LET A$ = "+++"
    0x6272a1784cd0 --------CA   06590  LET Z1 = X9
    0x6272a1784f00 --------CA   06600  LET Z2 = Y9
    0x6272a1784f80 --------CA   06610  GOSUB 10840
    0x6272a17851b0 --------CA   06620  IF Z3 = 0 GOTO 6730
    0x6272a1785360 --------CA   06630  PRINT "*** KLINGON DESTROYED ***"
    0x6272a17856a0 --------CA   06640  LET K3 = K3 - 1
    0x6272a17859e0 --------CA   06650  LET K9 = K9 - 1
    0x6272a1785c10 --------CA   06660  IF K9 <= 0 GOTO 7980
    0x6272a1785f20 --------CA   06670  FOR I = 1 TO 3
    0x6272a1786320 --------CA   06680  IF X9 <> K(I, 1) GOTO 6700
    0x6272a1786750 --------CA   06690  IF Y9 = K(I, 2) GOTO 6710
    0x6272a17868b0 --------CA T 06700  NEXT I
    0x6272a1786c80 --------CA T 06710  LET K(I, 3) = 0
    0x6272a1786cf0 --------CA   06720  GOTO 6950
    0x6272a1786f20 --------CA T 06730  LET A$ = " * "
    0x6272a1787150 --------CA   06740  LET Z1 = X9
    0x6272a1787380 --------CA   06750  LET Z2 = Y9
    0x6272a1787400 --------CA   06760  GOSUB 10840
    0x6272a1787630 --------CA   06770  IF Z3 = 0 GOTO 6800
    0x6272a1787bf0 --------CA   06780  PRINT "STAR AT"; X9; ","; Y9; " ABSORBED TORPEDO ENERGY."
    0x6272a1787c70 --------CA   06790  GOTO 7020
    0x6272a1787ea0 --------CA T 06800  LET A$ = ">!<"
    0x6272a17880d0 --------CA   06810  LET Z1 = X9
    0x6272a1788300 --------CA   06820  LET Z2 = Y9
    0x6272a1788380 --------CA   06830  GOSUB 10840
    0x6272a17885b0 --------CA   06840  IF Z3 = 0 GOTO 6200
    0x6272a1788760 --------CA   06850  PRINT "*** STARBASE DESTROYED ***"
    0x6272a1788aa0 --------CA   06860  LET B3 = B3 - 1
    0x6272a1788de0 --------CA   06870  LET B9 = B9 - 1
    0x6272a1789010 --------CA   06880  IF B9 > 0 GOTO 6920
    0x6272a1789240 --------CA   06890  PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    0x6272a17893d0 --------CA   06900  PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    0x6272a1789480 --------CA   06910  GOTO 7880
    0x6272a1789600 --------CA T 06920  PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x6272a1789760 --------CA   06930  PRINT "   COURT MARTIAL!"
    0x6272a1789980 --------CA   06940  LET D0 = 0
    0x6272a1789bb0 --------CA T 06950  LET A$ = "   "
    0x6272a1789de0 --------CA   06960  LET Z1 = X9
    0x6272a178a010 --------CA   06970  LET Z2 = Y9
    0x6272a178a0a0 --------CA   06980  GOSUB 10550
    0x6272a178a8d0 --------CA   06990  LET G(Q1, Q2) = K3 * 100 + B3 * 10 + S3
    0x6272a178a950 --------CA   07000  GOTO 7020
    0x6272a178aaa0 --------CA T 07010  PRINT "TORPEDO MISSED"
    0x6272a178ab20 --------CA T 07020  GOSUB 7610
    0x6272a178ab90 --------CA   07030  GOTO 3160
    0x6272a178ac00 ---------A   07040  REM
    0x6272a178ad00 ---------A   07050  REM ===============================================================
    0x6272a178ad90 ---------A   07060  REM
    0x6272a178ae50 ---------A   07070  REM *** SHIELD CONTROL STARTS HERE
    0x6272a178b170 --------CA T 07080  IF D(7) >= 0 GOTO 7110
    0x6272a178b320 --------CA   07090  PRINT "SHIELD CONTROL INOPERABLE"
    0x6272a178b3e0 --------CA   07100  GOTO 3160
    0x6272a178b860 --------CA T 07110  PRINT "ENERGY AVAILABLE ="; E + 5; ". NUMBER OF UNITS TO SHIELDS:";
    0x6272a178b9d0 --------CA   07120  INPUT X
    0x6272a178bc10 --------CA   07130  IF X >= 0 GOTO 7170
    0x6272a178bea0 --------CA   07140  IF S <> X GOTO 7170
    0x6272a178c030 --------CA   07150  PRINT "(SHIELDS UNCHANGED)"
    0x6272a178c0c0 --------CA   07160  GOTO 3160
    0x6272a178c530 --------CA T 07170  IF E + S - X < 0 GOTO 7110
    0x6272a178c9e0 --------CA   07180  LET E = E + S - X
    0x6272a178cc30 --------CA   07190  LET S = X
    0x6272a178cdc0 --------CA   07200  PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x6272a178d120 --------CA   07210  PRINT "  'SHIELDS NOW AT "; S; " PER YOUR COMMAND'"
    0x6272a178d1a0 --------CA   07220  GOTO 3160
    0x6272a178d210 ---------A   07230  REM
    0x6272a178d310 ---------A   07240  REM ===============================================================
    0x6272a178d3a0 ---------A   07250  REM
    0x6272a178d460 ---------A   07260  REM *** DAMAGE CONTROL STARTS HERE
    0x6272a178d780 --------CA T 07270  IF D(6) >= 0 GOTO 7490
    0x6272a178d940 --------CA   07280  PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    0x6272a178db80 --------CA T 07290  IF D0 = 0 GOTO 3160
    0x6272a178de80 --------CA   07300  LET D3 = 0
    0x6272a178e160 --------CA   07310  FOR I = 1 TO 8
    0x6272a178e480 --------CA   07320  IF D(I) >= 0 GOTO 7340
    0x6272a178e7f0 --------CA   07330  LET D3 = D3 + .1
    0x6272a178e920 --------CA T 07340  NEXT I
    0x6272a178eb80 --------CA   07350  IF D3 = 0 GOTO 3160
    0x6272a178ef20 --------CA   07360  LET D3 = D3 + D4
    0x6272a178f150 --------CA   07370  IF D3 < 1 GOTO 7390
    0x6272a178f3c0 --------CA   07380  LET D3 = .9
    0x6272a178f560 --------CA T 07390  PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    0x6272a178f700 --------CA   07400  PRINT "ESTIMATED TIME TO REPAIR: ";
    0x6272a178f990 --------CA   07410  PRINT USING ".# STARDATES"; D3
    0x6272a178fb30 --------CA   07420  PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    0x6272a178fca0 --------CA   07430  INPUT A$
    0x6272a178ff00 --------CA   07440  IF A$ <> "YES" GOTO 3160
    0x6272a1790210 --------CA   07450  FOR I = 1 TO 8
    0x6272a1790510 --------CA   07460  LET D(I) = 0
    0x6272a1790640 --------CA   07470  NEXT I
    0x6272a1790ac0 --------CA   07480  LET T = T + D3 + .1
    0x6272a1790c30 --------CA T 07490  PRINT " "
    0x6272a1790da0 --------CA   07500  PRINT "DEVICE        STATE OF REPAIR"
    0x6272a1791080 --------CA   07510  FOR R1 = 1 TO 8
    0x6272a1791120 --------CA   07520  GOSUB 10780
    0x6272a1791450 --------CA   07530  PRINT USING "  -##.##";D(R1)
    0x6272a1791590 --------CA   07540  NEXT R1
    0x6272a1791700 --------CA   07550  PRINT " "
    0x6272a1791780 --------CA   07560  GOTO 7290
    0x6272a17917f0 ---------C   07570  REM
    0x6272a17918f0 ---------C   07580  REM ===============================================================
    0x6272a1791980 ---------C   07590  REM
    0x6272a1791a40 ---------C   07600  REM "KLINGONS SHOOTING" CODE BEGINS ***
    0x6272a1791ca0 ---------C G 07610  IF K3 <= 0 GOTO 7820
    0x6272a1791f10 ---------C   07620  IF D0 = 0 GOTO 7650
    0x6272a17920e0 ---------C   07630  PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x6272a1792160 ---------C   07640  GOTO 7820
    0x6272a1792440 ---------C T 07650  FOR I = 1 TO 3
    0x6272a1792820 ---------C   07660  IF K(I, 3) <= 0 GOTO 7810
    0x6272a1793280 ---------C   07670  LET H = INT((K(I, 3) / FND(0)) * (2 + RND(1)))
    0x6272a1793610 ---------C   07680  LET S = S - H
    0x6272a1793ec0 ---------C   07690  PRINT H; " UNIT HIT ON ENTERPRISE FROM SECTOR"; K(I, 1); ","; K(I, 2)
    0x6272a1794100 ---------C   07700  IF S < 0 GOTO 7850
    0x6272a17944d0 ---------C   07710  PRINT "      (SHIELDS DOWN TO"; S; " UNITS.)"
    0x6272a1794710 ---------C   07720  IF H < 20 GOTO 7810
    0x6272a1794a40 ---------C   07730  IF RND(1) > .6 GOTO 7810
    0x6272a1794dd0 ---------C   07740  IF H / S <= .02 GOTO 7810
    0x6272a1795530 ---------C   07750  LET D2 = H / S + .5 * RND(1)
    0x6272a1795b10 ---------C   07760  LET R1 = INT(RND(1) * 8 + 1)
    0x6272a1796040 ---------C   07770  LET D(R1) = D(R1) - D2
    0x6272a17961c0 ---------C   07780  PRINT "DAMAGE CONTROL REPORTS '";
    0x6272a1796260 ---------C   07790  GOSUB 10780
    0x6272a17963b0 ---------C   07800  PRINT "DAMAGED BY THE HIT!'"
    0x6272a17964f0 ---------C T 07810  NEXT I
    0x6272a1796560 ---------C T 07820  RETURN
    0x6272a17967d0 --------CA T 07830  PRINT "ITS IS STARDATE "; T
    0x6272a1796850 --------CA   07840  GOTO 7880
    0x6272a17969e0 ---------C T 07850  PRINT " "
    0x6272a1796b80 ---------C   07860  PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    0x6272a1796f10 --------CA T 07870  PRINT "IT IS STARDATE "; T; "."
    0x6272a17972a0 --------CA T 07880  PRINT "THERE WERE "; K9; " KLINGON BATTLE CRUISERS LEFT AT "
    0x6272a1797410 --------CA   07890  PRINT "THE END OF YOUR MISSION."
    0x6272a1797570 --------CA T 07900  PRINT " "
    0x6272a1797700 --------CA   07910  PRINT " "
    0x6272a17978b0 --------CA   07920  PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x6272a1797a50 --------CA   07930  PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x6272a1797bc0 --------CA   07940  PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    0x6272a1797d30 --------CA   07950  INPUT A$
    0x6272a1797f90 --------CA   07960  IF A$ = "AYE" GOTO 1270
    0x6272a1798070 --------CA   07970  GOTO 11100
    0x6272a1798220 --------CA T 07980  PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    0x6272a17983a0 --------CA   07990  PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    0x6272a1798540 --------CA   08000  PRINT " "
    0x6272a1798cb0 --------CA   08010  PRINT "YOUR EFFICIENCY RATING IS "; ((K / (T - T0)) * 1000); "."
    0x6272a1798d30 --------CA   08020  GOTO 7900
    0x6272a1798da0 ---------D   08030  REM
    0x6272a1798ea0 ---------D   08040  REM ===============================================================
    0x6272a1798f30 ---------D   08050  REM
    0x6272a1799000 ---------D   08060  REM S.R. SENSOR SCAN & STARTUP SUBR. ***
    0x6272a1799550 ---------D G 08070  FOR I = S1 - 1 TO S1 + 1
    0x6272a1799a90 ---------D   08080  FOR J = S2 - 1 TO S2 + 1
    0x6272a1799eb0 ---------D   08090  IF INT(I + .5) < 1 GOTO 8180
    0x6272a179a310 ---------D   08100  IF INT(I + .5) > 8 GOTO 8180
    0x6272a179a770 ---------D   08110  IF INT(J + .5) < 1 GOTO 8180
    0x6272a179abd0 ---------D   08120  IF INT(J + .5) > 8 GOTO 8180
    0x6272a179ae40 ---------D   08130  LET A$ = ">!<"
    0x6272a179b070 ---------D   08140  LET Z1 = I
    0x6272a179b2a0 ---------D   08150  LET Z2 = J
    0x6272a179b320 ---------D   08160  GOSUB 10840
    0x6272a179b550 ---------D   08170  IF Z3 = 1 GOTO 8220
    0x6272a179b6b0 ---------D T 08180  NEXT J
    0x6272a179b800 ---------D   08190  NEXT I
    0x6272a179ba30 ---------D   08200  LET D0 = 0
    0x6272a179baa0 ---------D   08210  GOTO 8290
    0x6272a179bcc0 ---------D T 08220  LET D0 = 1
    0x6272a179bfb0 ---------D   08230  LET C$ = "DOCKED"
    0x6272a179c1c0 ---------D   08240  LET E = 3000
    0x6272a179c3f0 ---------D   08250  LET P = 10
    0x6272a179c550 ---------D   08260  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x6272a179c770 ---------D   08270  LET S = 0
    0x6272a179c7f0 ---------D   08280  GOTO 8360
    0x6272a179ca20 ---------D T 08290  IF K3 > 0 GOTO 8330
    0x6272a179cdb0 ---------D   08300  IF E < E0 * .1 GOTO 8350
    0x6272a179d020 ---------D   08310  LET C$ = " GREEN"
    0x6272a179d0b0 ---------D   08320  GOTO 8360
    0x6272a179d7c0 ---------D T 08330  C$ = " " + CHR$(7) + "*RED*" + CHR$(7)
    0x6272a179d840 ---------D   08340  GOTO 8360
    0x6272a179da80 ---------D T 08350  LET C$ = "YELLOW"
    0x6272a179dd70 ---------D T 08360  IF D(2) >= 0 GOTO 8410
    0x6272a179df10 ---------D   08370  PRINT " "
    0x6272a179e080 ---------D   08380  PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x6272a179e1e0 ---------D   08390  PRINT " "
    0x6272a179e280 ---------D   08400  GOTO 8900
    0x6272a179e4c0 ---------D T 08410  LET O1$ = "--------------------------------"
    0x6272a179e620 ---------D   08420  PRINT O1$
    0x6272a179e920 ---------D   08430  LET N5$ = "####"
    0x6272a179eaa0 ---------D   08440  PRINT " ";
    0x6272a179ee60 ---------D   08450  FOR I = 1 TO 22 STEP 3
    0x6272a179f420 ---------D   08460  PRINT MID$(Q$(1), I, 3); " ";
    0x6272a179f560 ---------D   08470  NEXT I
    0x6272a179f6d0 ---------D   08480  PRINT " "
    0x6272a179f860 ---------D   08490  PRINT " ";
    0x6272a179fc20 ---------D   08500  FOR I = 1 TO 22 STEP 3
    0x6272a17a01e0 ---------D   08510  PRINT MID$(Q$(2), I, 3); " ";
    0x6272a17a0320 ---------D   08520  NEXT I
    0x6272a17a04f0 ---------D   08530  PRINT "        STARDATE         ";
    0x6272a17a0750 ---------D   08540  PRINT USING "####.#";T
    0x6272a17a08e0 ---------D   08550  PRINT " ";
    0x6272a17a0ca0 ---------D   08560  FOR I = 1 TO 22 STEP 3
    0x6272a17a1260 ---------D   08570  PRINT MID$(Q$(3), I, 3); " ";
    0x6272a17a13a0 ---------D   08580  NEXT I
    0x6272a17a1560 ---------D   08590  PRINT "        CONDITION        ";
    0x6272a17a16c0 ---------D   08600  PRINT C$
    0x6272a17a1850 ---------D   08610  PRINT " ";
    0x6272a17a1c10 ---------D   08620  FOR I = 1 TO 22 STEP 3
    0x6272a17a21d0 ---------D   08630  PRINT MID$(Q$(4), I, 3); " ";
    0x6272a17a2310 ---------D   08640  NEXT I
    0x6272a17a27b0 ---------D   08650  PRINT "        QUADRANT         "; Q1; ","; Q2
    0x6272a17a2940 ---------D   08660  PRINT " ";
    0x6272a17a2d00 ---------D   08670  FOR I = 1 TO 22 STEP 3
    0x6272a17a32c0 ---------D   08680  PRINT MID$(Q$(5), I, 3); " ";
    0x6272a17a3400 ---------D   08690  NEXT I
    0x6272a17a38a0 ---------D   08700  PRINT "        SECTOR           "; S1; ","; S2
    0x6272a17a3a30 ---------D   08710  PRINT " ";
    0x6272a17a3df0 ---------D   08720  FOR I = 1 TO 22 STEP 3
    0x6272a17a43b0 ---------D   08730  PRINT MID$(Q$(6), I, 3); " ";
    0x6272a17a44f0 ---------D   08740  NEXT I
    0x6272a17a46c0 ---------D   08750  PRINT "        TOTAL ENERGY     ";
    0x6272a17a4a20 ---------D   08760  PRINT USING N5$;E+S
    0x6272a17a4bb0 ---------D   08770  PRINT " ";
    0x6272a17a4f70 ---------D   08780  FOR I = 1 TO 22 STEP 3
    0x6272a17a5530 ---------D   08790  PRINT MID$(Q$(7), I, 3); " ";
    0x6272a17a5670 ---------D   08800  NEXT I
    0x6272a17a5840 ---------D   08810  PRINT "        PHOTON TORPEDOES ";
    0x6272a17a5a80 ---------D   08820  PRINT USING N5$;P
    0x6272a17a5c10 ---------D   08830  PRINT " ";
    0x6272a17a5fd0 ---------D   08840  FOR I = 1 TO 22 STEP 3
    0x6272a17a6590 ---------D   08850  PRINT MID$(Q$(8), I, 3); " ";
    0x6272a17a66d0 ---------D   08860  NEXT I
    0x6272a17a68a0 ---------D   08870  PRINT "        SHIELDS          ";
    0x6272a17a6ae0 ---------D   08880  PRINT USING N5$;S
    0x6272a17a6c40 ---------D   08890  PRINT O1$
    0x6272a17a6ca0 ---------D T 08900  RETURN
    0x6272a17a6d20 ---------A   08910  REM
    0x6272a17a6e20 ---------A   08920  REM ===============================================================
    0x6272a17a6eb0 ---------A   08930  REM
    0x6272a17a6f80 ---------A   08940  REM *** LIBARY COMPUTER CODE BEGINS HERE
    0x6272a17a72a0 --------CA T 08950  IF D(8) >= 0 GOTO 8980
    0x6272a17a7430 --------CA   08960  PRINT "COMPUTER DISABLED"
    0x6272a17a74d0 --------CA   08970  GOTO 3160
    0x6272a17a7650 --------CA T 08980  PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    0x6272a17a7880 --------CA   08990  INPUT A
    0x6272a17a7ac0 --------CA   09000  IF A < 0 GOTO 3160
    0x6272a17a7b60 --------CA   09010  PRINT
    0x6272a17a7e50 --------CA   09020  LET H8 = 1
    0x6272a17a8080 --------CA   09030  IF A = 0 GOTO 9270
    0x6272a17a82f0 --------CA   09040  IF A > 5 GOTO 9150
    0x6272a17a8390 --------CA   09050  REM
    0x6272a17a8490 --------CA   09060  REM ===============================================================
    0x6272a17a8520 --------CA   09070  REM
    0x6272a17a8a70 --------CA   09080  ON A GOTO 9690, 9890, 10320, 9970, 9100
    0x6272a17a8af0 --------CA   09090  REM  GOTO 9150
    0x6272a17a8bd0 --------CA T 09100  REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
    0x6272a17a8e00 --------CA   09110  LET H8 = 0
    0x6272a17a9030 --------CA   09120  LET G5 = 1
    0x6272a17a9190 --------CA   09130  PRINT "                      THE GALAXY"
    0x6272a17a9240 --------CA   09140  GOTO 9280
    0x6272a17a93d0 --------CA T 09150  PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    0x6272a17a9550 --------CA   09160  PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x6272a17a96d0 --------CA   09170  PRINT "   1 = STATUS REPORT"
    0x6272a17a9860 --------CA   09180  PRINT "   2 = PHOTON TORPEDO DATA"
    0x6272a17a99f0 --------CA   09190  PRINT "   3 = STARBASE NAVIGATION DATA"
    0x6272a17a9b80 --------CA   09200  PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    0x6272a17a9cf0 --------CA   09210  PRINT "   5 = GALAXY 'REGION NAME' MAP"
    0x6272a17a9d70 --------CA   09220  GOTO 8980
    0x6272a17a9de0 ---------A   09230  REM
    0x6272a17a9ee0 ---------A   09240  REM ===============================================================
    0x6272a17a9f70 ---------A   09250  REM
    0x6272a17aa040 ---------A   09260  REM *** CUM GALACTIC RECORD CODE BEGINS ***
    0x6272a17aa640 --------CA T 09270  PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "; Q1; ","; Q2; ":"
    0x6272a17aa7f0 --------CA T 09280  PRINT "      1     2     3     4     5     6     7     8"
    0x6272a17aab10 --------CA   09290  LET O3$ = "    ----- ----- ----- ----- ----- ----- ----- -----"
    0x6272a17aac70 --------CA   09300  PRINT O3$
    0x6272a17aad00 --------CA   09310  REM   DIM N1$(2),N2$(8),N$(5)
    0x6272a17ab000 --------CA   09320  FOR I = 1 TO 8
    0x6272a17ab310 --------CA   09330  LET N1$ = "##"
    0x6272a17ab570 --------CA   09340  PRINT USING N1$;I;
    0x6272a17ab840 --------CA   09350  PRINT TAB(3); "|";
    0x6272a17aba80 --------CA   09360  IF H8 = 0 GOTO 9480
    0x6272a17abda0 --------CA   09370  FOR J = 1 TO 8
    0x6272a17ac0a0 --------CA   09380  LET N2$ = " ### |"
    0x6272a17ac3a0 --------CA   09390  LET N$ = ""
    0x6272a17ac5f0 --------CA   09400  IF I <> Q1 GOTO 9440
    0x6272a17ac880 --------CA   09410  IF J <> Q2 GOTO 9440
    0x6272a17acbb0 --------CA   09420  LET N$ = CHR$(7)
    0x6272a17acd30 --------CA   09430  PRINT N$;
    0x6272a17ad150 --------CA T 09440  PRINT USING N2$;Z(I,J);
    0x6272a17ad2d0 --------CA   09450  PRINT N$;
    0x6272a17ad410 --------CA   09460  NEXT J
    0x6272a17ad4a0 --------CA   09470  GOTO 9610
    0x6272a17ad6d0 --------CA T 09480  LET Z4 = I
    0x6272a17ad8e0 --------CA   09490  LET Z5 = 1
    0x6272a17ad970 --------CA   09500  GOSUB 10960
    0x6272a17ae030 --------CA   09510  LET J0 = INT(15 - .5 * LEN(G2$))
    0x6272a17ae200 --------CA   09520  PRINT TAB(J0);
    0x6272a17ae390 --------CA   09530  PRINT G2$;
    0x6272a17ae650 --------CA   09540  PRINT TAB(27); "|";
    0x6272a17ae870 --------CA   09550  LET Z5 = 5
    0x6272a17ae900 --------CA   09560  GOSUB 10960
    0x6272a17aef00 --------CA   09570  LET J0 = INT(39 - .5 * LEN(G2$))
    0x6272a17af0d0 --------CA   09580  PRINT TAB(J0);
    0x6272a17af260 --------CA   09590  PRINT G2$;
    0x6272a17af520 --------CA   09600  PRINT TAB(51); "|";
    0x6272a17af5a0 --------CA T 09610  PRINT
    0x6272a17af700 --------CA   09620  PRINT O3$
    0x6272a17af840 --------CA   09630  NEXT I
    0x6272a17af8d0 --------CA   09640  GOTO 3160
    0x6272a17af940 ---------A   09650  REM
    0x6272a17afa40 ---------A   09660  REM ===============================================================
    0x6272a17afad0 ---------A   09670  REM
    0x6272a17afba0 ---------A   09680  REM *** STATUS REPORT CODE BEGINS HERE ***
    0x6272a17afd20 --------CA T 09690  PRINT "   STATUS REPORT:"
    0x6272a17aff70 --------CA   09700  LET X$ = ""
    0x6272a17b01a0 --------CA   09710  IF K9 = 1 GOTO 9730
    0x6272a17b0420 --------CA   09720  LET X$ = "S"
    0x6272a17b0880 --------CA T 09730  PRINT K9; " KLINGON"; X$; " LEFT"
    0x6272a17b0e30 --------CA   09740  LET V5 = (T0 + T9) - T
    0x6272a17b10a0 --------CA   09750  PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES";V5
    0x6272a17b12f0 --------CA   09760  LET X$ = ""
    0x6272a17b1520 --------CA   09770  IF B9 = 1 GOTO 9830
    0x6272a17b1790 --------CA   09780  LET X$ = "S"
    0x6272a17b19c0 --------CA   09790  IF B9 <> 0 GOTO 9830
    0x6272a17b1bc0 --------CA   09800  PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    0x6272a17b1d40 --------CA   09810  PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    0x6272a17b1e00 --------CA   09820  GOTO 7270
    0x6272a17b2360 --------CA T 09830  PRINT "THE FEDERATION IS MAINTAINING"; B9; " STARBASE"; X$; " IN THE GALAXY"
    0x6272a17b23e0 --------CA   09840  GOTO 7270
    0x6272a17b2450 ---------A   09850  REM
    0x6272a17b2550 ---------A   09860  REM ===============================================================
    0x6272a17b25e0 ---------A   09870  REM
    0x6272a17b26c0 ---------A   09880  REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***
    0x6272a17b28f0 --------CA T 09890  LET H8 = 0
    0x6272a17b2bd0 --------CA   09900  FOR I = 1 TO 3
    0x6272a17b2fb0 --------CA   09910  IF K(I, 3) <= 0 GOTO 10300
    0x6272a17b33d0 --------CA   09920  LET W1 = K(I, 1)
    0x6272a17b37a0 --------CA   09930  LET X = K(I, 2)
    0x6272a17b39d0 --------CA T 09940  LET C1 = S1
    0x6272a17b3c00 --------CA   09950  LET A = S2
    0x6272a17b3c90 --------CA   09960  GOTO10040
    0x6272a17b3e30 --------CA T 09970  PRINT "DIRECTION/DISTANCE CALCULAJTOR:"
    0x6272a17b47a0 --------CA   09980  PRINT "YOU ARE AT QUADRANT ("; Q1; ","; Q2; ") SECTOR ("; S1; ","; S2; ")"
    0x6272a17b4920 --------CA   09990  PRINT "PLEASE ENTER --"
    0x6272a17b4ab0 --------CA   10000  PRINT "  INITIAL COORDINATES (X,Y)";
    0x6272a17b4d10 --------CA   10010  INPUT C1, A
    0x6272a17b4ea0 --------CA   10020  PRINT "  FINAL COORDINATES (X,Y)";
    0x6272a17b50f0 --------CA   10030  INPUT W1, X
    0x6272a17b5460 --------CA T 10040  LET X = X - A
    0x6272a17b57c0 --------CA   10050  LET A = C1 - W1
    0x6272a17b59f0 --------CA   10060  IF X < 0 GOTO 10170
    0x6272a17b5c60 --------CA   10070  IF A < 0 GOTO 10230
    0x6272a17b5ed0 --------CA   10080  IF X > 0 GOTO 10100
    0x6272a17b6140 --------CA   10090  IF A = 0 GOTO 10190
    0x6272a17b63a0 --------CA T 10100  LET C1 = 1
    0x6272a17b67b0 --------CA T 10110  IF ABS(A) <= ABS(X) GOTO 10150
    0x6272a17b7310 --------CA   10120  LET V5 = C1 + (((ABS(A) - ABS(X)) + ABS(A)) / ABS(A))
    0x6272a17b7560 --------CA   10130  PRINT "DIRECTION ="; V5
    0x6272a17b7600 --------CA   10140  GOTO 10280
    0x6272a17b7c90 --------CA T 10150  PRINT "DIRECTION ="; C1 + (ABS(A) / ABS(X))
    0x6272a17b7d20 --------CA   10160  GOTO 10280
    0x6272a17b7f50 --------CA T 10170  IF A > 0 GOTO 10210
    0x6272a17b81c0 --------CA   10180  IF X = 0 GOTO 10230
    0x6272a17b8400 --------CA T 10190  LET C1 = 5
    0x6272a17b8470 --------CA   10200  GOTO 10110
    0x6272a17b8680 --------CA T 10210  LET C1 = 3
    0x6272a17b86f0 --------CA   10220  GOTO 10240
    0x6272a17b8920 --------CA T 10230  LET C1 = 7
    0x6272a17b8d30 --------CA T 10240  IF ABS(A) >= ABS(X) GOTO 10270
    0x6272a17b98b0 --------CA   10250  PRINT "DIRECTION ="; C1 + (((ABS(X) - ABS(A)) + ABS(X)) / ABS(X))
    0x6272a17b9950 --------CA   10260  GOTO 10280
    0x6272a17ba000 --------CA T 10270  PRINT "DIRECTION ="; C1 + (ABS(X) / ABS(A))
    0x6272a17ba670 --------CA T 10280  PRINT "DISTANCE ="; SQR(X ^ 2 + A ^ 2)
    0x6272a17ba8b0 --------CA   10290  IF H8 = 1 GOTO 3160
    0x6272a17baa10 --------CA T 10300  NEXT I
    0x6272a17baab0 --------CA   10310  GOTO 3160
    0x6272a17bace0 --------CA T 10320  IF B3 <> 0 GOTO 10350
    0x6272a17baed0 --------CA   10330  PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    0x6272a17baf70 --------CA   10340  GOTO 3160
    0x6272a17bb0d0 --------CA T 10350  PRINT "FROM ENTERPRISE TO STARBASE:"
    0x6272a17bb310 --------CA   10360  LET W1 = B4
    0x6272a17bb540 --------CA   10370  LET X = B5
    0x6272a17bb5d0 --------CA   10380  GOTO 9940
    0x6272a17bb650 ---------E   10390  REM *** END OF LIBRARY-COMPUTER CODE
    0x6272a17bb6e0 ---------E   10400  REM
    0x6272a17bb7e0 ---------E   10410  REM ===============================================================
    0x6272a17bb870 ---------E   10420  REM
    0x6272a17bb930 ---------E   10430  REM S/R FINDS RANDOM HOLE IN QUADRANT
    0x6272a17bbf40 ---------E B 10440  LET R1 = INT(RND(1) * 8 + 1)
    0x6272a17bc510 ---------E   10450  LET R2 = INT(RND(1) * 8 + 1)
    0x6272a17bc740 ---------E   10460  LET A$ = "   "
    0x6272a17bc970 ---------E   10470  LET Z1 = R1
    0x6272a17bcba0 ---------E   10480  LET Z2 = R2
    0x6272a17bcc20 ---------E   10490  GOSUB 10840
    0x6272a17bce50 ---------E   10500  IF Z3 = 0 GOTO 10440
    0x6272a17bced0 ---------E   10510  RETURN
    0x6272a17bcf50 ---------F   10520  REM
    0x6272a17bd050 ---------F   10530  REM ===============================================================
    0x6272a17bd0e0 ---------F   10540  REM
    0x6272a17bd1c0 ---------F G 10550  REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
    0x6272a17bd610 ---------F   10560  Z1 = INT(Z1 + .5)
    0x6272a17bda30 ---------F   10570  Z2 = INT(Z2 + .5)
    0x6272a17bdc60 ---------F   10580  IF Z1 < 1 GOTO 10700
    0x6272a17bded0 ---------F   10590  IF Z1 > 8 GOTO 10700
    0x6272a17be140 ---------F   10600  IF Z2 < 1 GOTO 10700
    0x6272a17be3b0 ---------F   10610  IF Z2 > 8 GOTO 10700
    0x6272a17be930 ---------F   10620  DIM Q9(24), A9(3)
    0x6272a17bec20 ---------F   10630  CHANGE Q$(Z1) TO Q9
    0x6272a17bee60 ---------F   10640  CHANGE A$ TO A9
    0x6272a17bf240 ---------F   10650  FOR I8 = 1 TO 3
    0x6272a17bf9a0 ---------F   10660  Q9(3 * (Z2 - 1) + I8) = A9(I8)
    0x6272a17bfad0 ---------F   10670  NEXT I8
    0x6272a17bfdf0 ---------F   10680  CHANGE Q9 TO Q$(Z1)
    0x6272a17bfe90 ---------F   10690  GOTO 10740
    0x6272a17bff30 ---------F T 10700  PRINT
    0x6272a17c04c0 ---------F   10710  PRINT "ERROR IN COORDINATES (Z1,Z2): ("; Z1; ","; Z2; ")"
    0x6272a17c0630 ---------F   10720  PRINT "     1 <=  Z1,Z2  <=8    "
    0x6272a17c06b0 ---------F   10730  PRINT
    0x6272a17c0710 ---------F T 10740  RETURN
    0x6272a17c0790 ---------G   10750  REM
    0x6272a17c0890 ---------G   10760  REM ===============================================================
    0x6272a17c0920 ---------G   10770  REM
    0x6272a17c09f0 ---------G G 10780  REM *** PRINTS DEVICE NAME FROM ARRAY ***
    0x6272a17c0c60 ---------G   10790  PRINT D$(R1);
    0x6272a17c0cc0 ---------G   10800  RETURN
    0x6272a17c0d40 ---------H   10810  REM
    0x6272a17c0e40 ---------H   10820  REM ===============================================================
    0x6272a17c0ed0 ---------H   10830  REM
    0x6272a17c0fa0 ---------H G 10840  REM *** STRING COMPARISON IN QUADRANT ARRAY ***
    0x6272a17c13f0 ---------H   10850  LET Z1 = INT(Z1 + .5)
    0x6272a17c1800 ---------H   10860  LET Z2 = INT(Z2 + .5)
    0x6272a17c1a40 ---------H   10870  LET Z3 = 0
    0x6272a17c2230 ---------H   10880  IF MID$(Q$(Z1), (3 * Z2 - 2), 3) <> A$ GOTO 10900
    0x6272a17c2470 ---------H   10890  Z3 = 1
    0x6272a17c24c0 ---------H T 10900  RETURN
    0x6272a17c2540 ---------I   10910  REM
    0x6272a17c2640 ---------I   10920  REM ===============================================================
    0x6272a17c26d0 ---------I   10930  REM
    0x6272a17c27c0 ---------I   10940  REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    0x6272a17c2890 ---------I   10950  REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)
    0x6272a17c2b90 ---------I G 10960  LET L2 = 2
    0x6272a17c2dc0 ---------I   10970  IF Z5 >= 5 GOTO 10990
    0x6272a17c3010 ---------I   10980  LET L2 = 1
    0x6272a17c3670 ---------I T 10990  LET L3 = 2 * (Z4 - 1) + L2
    0x6272a17c3990 ---------I   11000  LET G2$ = G1$(L3)
    0x6272a17c3bc0 ---------I   11010  IF G5 = 1 GOTO 11090
    0x6272a17c3e30 ---------I   11020  LET L3 = Z5
    0x6272a17c4060 ---------I   11030  IF Z5 <= 4 GOTO 11050
    0x6272a17c43c0 ---------I   11040  LET L3 = Z5 - 4
    0x6272a17c46c0 ---------I T 11050  LET G3$ = "IV"
    0x6272a17c48f0 ---------I   11060  IF L3 = 4 GOTO 11080
    0x6272a17c4df0 ---------I   11070  LET G3$ = MID$(G4$, 1, L3)
    0x6272a17c5260 ---------I T 11080  G2$ = G2$ + " " + G3$
    0x6272a17c52b0 ---------I T 11090  RETURN
    0x6272a17c5310 --------CA T 11100  STOP
    0x6272a17c5370 ---------A   11110  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/xstrek.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6272a1724db0 ---------A   01000  REM (VERSION "STREK7", 1/12/75 RCL)
    0x6272a1723b80 ---------A   01010  REM
    0x6272a1724f30 ---------A   01020  REM
    0x6272a1724e70 ---------A   01030  REM ***         *** STAR TREK ***       ***
    0x6272a1723fc0 ---------A   01040  REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    0x6272a17132b0 ---------A   01050  REM *** AS SEEN ON THE STAR TREK TV SHOW.
    0x6272a17227f0 ---------A   01060  REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    0x6272a1723040 ---------A   01070  REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    0x6272a1722e90 ---------A   01080  REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY
    0x6272a17232d0 ---------A   01090  REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974,
    0x6272a17234d0 ---------A   01100  REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    0x6272a1724740 ---------A   01110  REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    0x6272a1722be0 ---------A   01120  REM *** ADDRESS TO
    0x6272a1725100 ---------A   01130  REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    0x6272a17251a0 ---------A   01140  REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    0x6272a1725230 ---------A   01150  RANDOMIZE
    0x6272a17226d0 ---------A   01160  PRINT TAB(15); "* * * STAR TREK * * *"
    0x6272a1722670 ---------A   01170  PRINT
    0x6272a1723780 ---------A   01180  PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    0x6272a1723860 ---------A   01190  INPUT A$
    0x6272a172aa00 ---------A   01200  IF A$ <> "YES" GOTO 1280
    0x6272a172aaa0 ---------A   01210  PRINT "PLEASE WAIT  . . .";
    0x6272a172ab00 ---------A   01220  CHAIN "DSK:STINST.BAS"
    0x6272a172ab60 ----------   01230  PRINT
    0x6272a172abc0 ---------A   01240  REM
    0x6272a172acc0 ---------A   01250  REM ===============================================================
    0x6272a172ad50 ---------A   01260  REM
    0x6272a172add0 --------CA T 01270  REM  PROGRAM BEGINS HERE .....
    0x6272a172b0c0 --------CA T 01280  DIM Q$(8)
    0x6272a172b460 --------CA   01290  FOR I = 1 TO 8
    0x6272a172b840 --------CA   01300  Q$(I) = SPACE$(24)
    0x6272a172b970 --------CA   01310  NEXT I
    0x6272a172c920 --------CA   01320  DIM G(8, 8), C(9, 2), K(3, 3), N(3), Z(8, 8)
    0x6272a172d2d0 --------CA   01330  LET T = INT(RND(1) * 20 + 20) * 100
    0x6272a172d6a0 --------CA   01340  LET P1 = 3.14159 / 4
    0x6272a172d990 --------CA   01350  LET T0 = T
    0x6272a172dc60 --------CA   01360  LET T9 = 30
    0x6272a172df30 --------CA   01370  LET D0 = 0
    0x6272a172e200 --------CA   01380  LET E0 = 3000
    0x6272a172e4f0 --------CA   01390  LET E = E0
    0x6272a172e7c0 --------CA   01400  LET P = 10
    0x6272a172eab0 --------CA   01410  LET P0 = P
    0x6272a172ed80 --------CA   01420  LET S9 = 200
    0x6272a172f080 --------CA   01430  LET S = 0
    0x6272a1730090 --------CA   01440  DEF FND (D) = SQR((K(I, 1) - S1) ^ 2 + (K(I, 2) - S2) ^ 2)
    0x6272a1730100 --------CA   01450  REM
    0x6272a1730200 --------CA   01460  REM ===============================================================
    0x6272a1730290 --------CA   01470  REM
    0x6272a1730350 --------CA   01480  REM INITIALIZE INTERPRISE'S POSITION
    0x6272a1730a20 --------CA   01490  LET Q1 = INT(RND(1) * 8 + 1)
    0x6272a17310c0 --------CA   01500  LET Q2 = INT(RND(1) * 8 + 1)
    0x6272a17316a0 --------CA   01510  LET S1 = INT(RND(1) * 8 + 1)
    0x6272a1731c70 --------CA   01520  LET S2 = INT(RND(1) * 8 + 1)
    0x6272a1731f50 --------CA   01530  MAT C = ZER
    0x6272a1732300 --------CA   01540  LET C(4, 1) = -1
    0x6272a17326a0 --------CA   01550  LET C(3, 1) = -1
    0x6272a1732a40 --------CA   01560  LET C(2, 1) = -1
    0x6272a1732de0 --------CA   01570  LET C(4, 2) = -1
    0x6272a1733180 --------CA   01580  LET C(5, 2) = -1
    0x6272a1733510 --------CA   01590  LET C(6, 2) = -1
    0x6272a17338a0 --------CA   01600  LET C(1, 2) = 1
    0x6272a1733c30 --------CA   01610  LET C(2, 2) = 1
    0x6272a1733fc0 --------CA   01620  LET C(6, 1) = 1
    0x6272a1734350 --------CA   01630  LET C(7, 1) = 1
    0x6272a17346e0 --------CA   01640  LET C(8, 1) = 1
    0x6272a1734e80 --------CA   01650  LET C(8, 2) = 1
    0x6272a1735210 --------CA   01660  LET C(9, 2) = 1
    0x6272a1735420 --------CA   01670  DIM D(8)
    0x6272a1735700 --------CA   01680  FOR I = 1 TO 8
    0x6272a1735a00 --------CA   01690  LET D(I) = 0
    0x6272a1735b30 --------CA   01700  NEXT I
    0x6272a1735e20 --------CA   01710  DIM D$(8)
    0x6272a1735ec0 --------CA   01720  RESTORE
    0x6272a1736c70 --------CA   01730  READ D$(1), D$(2), D$(3), D$(4), D$(5), D$(6), D$(7), D$(8)
    0x6272a17370a0 --------CA   01740  DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    0x6272a1737490 --------CA   01750  DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    0x6272a1737780 --------CA   01760  LET G4$ = "III"
    0x6272a1737a50 --------CA   01770  DIM G1$(16)
    0x6272a1737d20 --------CA   01780  FOR I = 1 TO 16
    0x6272a1737f60 --------CA   01790  READ G1$(I)
    0x6272a1738090 --------CA   01800  NEXT I
    0x6272a17387b0 --------CA   01810  DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    0x6272a1738ca0 --------CA   01820  DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    0x6272a1739090 --------CA   01830  DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    0x6272a1739360 --------CA   01840  LET B9 = 0
    0x6272a1739640 --------CA   01850  LET K9 = 0
    0x6272a1739930 --------CA   01860  LET A1$ = "NSLPTSDCX"
    0x6272a17399a0 --------CA   01870  REM
    0x6272a1739aa0 --------CA   01880  REM ===============================================================
    0x6272a1739b30 --------CA   01890  REM
    0x6272a1739bf0 --------CA   01900  REM  SET UP WHAT EXISTS IN GALAXY ...
    0x6272a1739ef0 --------CA   01910  FOR I = 1 TO 8
    0x6272a173a2a0 --------CA   01920  FOR J = 1 TO 8
    0x6272a173a670 --------CA   01930  LET R1 = RND(1)
    0x6272a173a8a0 --------CA   01940  IF R1 > .98 GOTO 1990
    0x6272a173ab10 --------CA   01950  IF R1 > .95 GOTO 2020
    0x6272a173ad80 --------CA   01960  IF R1 > .8 GOTO 2050
    0x6272a173b080 --------CA   01970  LET K3 = 0
    0x6272a173b0f0 --------CA   01980  GOTO 2070
    0x6272a173b310 --------CA T 01990  LET K3 = 3
    0x6272a173b640 --------CA   02000  LET K9 = K9 + 3
    0x6272a173b6b0 --------CA   02010  GOTO 2070
    0x6272a173b8d0 --------CA T 02020  LET K3 = 2
    0x6272a173bc00 --------CA   02030  LET K9 = K9 + 2
    0x6272a173bc70 --------CA   02040  GOTO 2070
    0x6272a173be90 --------CA T 02050  LET K3 = 1
    0x6272a173c1d0 --------CA   02060  LET K9 = K9 + 1
    0x6272a173c4d0 --------CA T 02070  LET R1 = RND(1)
    0x6272a173c700 --------CA   02080  IF R1 > .96 GOTO 2110
    0x6272a173ca00 --------CA   02090  LET B3 = 0
    0x6272a173ca70 --------CA   02100  GOTO 2130
    0x6272a173cc90 --------CA T 02110  LET B3 = 1
    0x6272a173cfe0 --------CA   02120  LET B9 = B9 + 1
    0x6272a173d690 --------CA T 02130  LET S3 = INT(RND(1) * 8 + 1)
    0x6272a173dee0 --------CA   02140  LET G(I, J) = K3 * 100 + B3 * 10 + S3
    0x6272a173df70 --------CA   02150  REM K3=#KLINGONS B3=#STARBASES S3=#STARS
    0x6272a173e370 --------CA   02160  LET Z(I, J) = 0
    0x6272a173e4a0 --------CA   02170  NEXT J
    0x6272a173e5f0 --------CA   02180  NEXT I
    0x6272a173e900 --------CA   02190  LET K7 = K9
    0x6272a173ec00 --------CA   02200  LET X$ = ""
    0x6272a173ef00 --------CA   02210  LET X0$ = " IS "
    0x6272a173f130 --------CA   02220  IF B9 <> 0 GOTO 2280
    0x6272a173f380 --------CA   02230  LET B9 = 1
    0x6272a173f730 --------CA   02240  IF G(6, 3) >= 200 GOTO 2270
    0x6272a173fda0 --------CA   02250  LET G(6, 3) = G(6, 3) + 100
    0x6272a17400e0 --------CA   02260  LET K9 = K9 + 1
    0x6272a1740720 --------CA T 02270  LET G(6, 3) = G(6, 3) + 10
    0x6272a1740950 --------CA T 02280  IF B9 = 1 GOTO 2330
    0x6272a17413d0 --------CA   02290  LET X$ = "S"
    0x6272a1741600 --------CA   02300  LET X0$ = " ARE "
    0x6272a1741750 --------CA   02310  PRINT " "
    0x6272a17418d0 --------CA   02320  PRINT " "
    0x6272a1741a40 --------CA T 02330  PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    0x6272a1741be0 --------CA   02340  PRINT " "
    0x6272a1741f90 --------CA   02350  PRINT "    DESTROY THE "; K9; " KLINGON WARSHIPS WHICH HAVE INVADED"
    0x6272a1742160 --------CA   02360  PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x6272a1742920 --------CA   02370  PRINT "  ON STARDATE"; T0 + T9; "; THIS GIVES YOU"; T9; " DAYS.  THERE"; X0$
    0x6272a1742ea0 --------CA   02380  PRINT " "; B9; "STARBASE"; X$; " IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    0x6272a1743030 --------CA   02390  PRINT " "
    0x6272a17431d0 --------CA   02400  PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    0x6272a1743330 --------CA   02410  INPUT A$
    0x6272a17433b0 --------CA   02420  REM
    0x6272a17434b0 --------CA   02430  REM ===============================================================
    0x6272a1743540 --------CA   02440  REM
    0x6272a1743610 --------CA   02450  REM *** HERE ANY TIME ENTER NEW QUADRANT ...
    0x6272a1743920 --------CA T 02460  LET Z4 = Q1
    0x6272a1743c10 --------CA   02470  LET Z5 = Q2
    0x6272a1743e20 --------CA   02480  LET K3 = 0
    0x6272a1744030 --------CA   02490  LET B3 = 0
    0x6272a1744240 --------CA   02500  LET S3 = 0
    0x6272a1744520 --------CA   02510  LET G5 = 0
    0x6272a17449d0 --------CA   02520  LET D4 = .5 * RND(1)
    0x6272a1744d70 --------CA   02530  FOR I7 = 1 TO 8
    0x6272a1745150 --------CA   02540  Q$(I7) = SPACE$(24)
    0x6272a1745280 --------CA   02550  NEXT I7
    0x6272a17454e0 --------CA   02560  IF Q1 < 1 GOTO 2770
    0x6272a1745750 --------CA   02570  IF Q1 > 8 GOTO 2770
    0x6272a17459c0 --------CA   02580  IF Q2 < 1 GOTO 2770
    0x6272a1745c30 --------CA   02590  IF Q2 > 8 GOTO 2770
    0x6272a1745cd0 --------CA   02600  GOSUB 10960
    0x6272a1745e30 --------CA   02610  PRINT " "
    0x6272a1746090 --------CA   02620  IF T <> T0 GOTO 2660
    0x6272a1746280 --------CA   02630  PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    0x6272a17466b0 --------CA   02640  PRINT "IN THE GALACTIC QUADRANT, '"; G2$; "'."
    0x6272a1746750 --------CA   02650  GOTO 2670
    0x6272a1746aa0 --------CA T 02660  PRINT "NOW ENTERING "; G2$; " QUADRANT ..."
    0x6272a1746c10 --------CA T 02670  PRINT " "
    0x6272a17471d0 --------CA   02680  LET X = G(Q1, Q2) * .01
    0x6272a17474f0 --------CA   02690  LET K3 = INT(X)
    0x6272a1747a80 --------CA   02700  LET B3 = INT((X - K3) * 10)
    0x6272a1748440 --------CA   02710  LET S3 = G(Q1, Q2) - INT(G(Q1, Q2) * .1) * 10
    0x6272a1748670 --------CA   02720  IF K3 = 0 GOTO 2760
    0x6272a1748830 --------CA   02730  PRINT "COMBAT AREA      CONDITION RED"
    0x6272a1748a70 --------CA   02740  IF S > 200 GOTO 2760
    0x6272a1748c20 --------CA   02750  PRINT "   SHIELDS DANGEROUSLY LOW"
    0x6272a1748e40 --------CA T 02760  MAT K = ZER
    0x6272a1749130 --------CA T 02770  FOR I = 1 TO 3
    0x6272a17494f0 --------CA   02780  LET K(I, 3) = 0
    0x6272a1749620 --------CA   02790  NEXT I
    0x6272a17496b0 --------CA   02800  REM
    0x6272a17497b0 --------CA   02810  REM ===============================================================
    0x6272a1749840 --------CA   02820  REM
    0x6272a1749930 --------CA   02830  REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS,
    0x6272a1749a00 --------CA   02840  REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    0x6272a1749c50 --------CA   02850  LET A$ = "<*>"
    0x6272a1749f40 --------CA   02860  LET Z1 = S1
    0x6272a174a230 --------CA   02870  LET Z2 = S2
    0x6272a174a2a0 --------CA   02880  GOSUB 10550
    0x6272a174a590 --------CA   02890  FOR I = 1 TO K3
    0x6272a174a620 --------CA   02900  GOSUB 10440
    0x6272a174a850 --------CA   02910  LET A$ = "+++"
    0x6272a174aa80 --------CA   02920  LET Z1 = R1
    0x6272a174ad70 --------CA   02930  LET Z2 = R2
    0x6272a174adf0 --------CA   02940  GOSUB 10550
    0x6272a174b1d0 --------CA   02950  LET K(I, 1) = R1
    0x6272a174b5b0 --------CA   02960  LET K(I, 2) = R2
    0x6272a174b960 --------CA   02970  LET K(I, 3) = 200
    0x6272a174ba90 --------CA   02980  NEXT I
    0x6272a174bda0 --------CA   02990  FOR I = 1 TO B3
    0x6272a174be30 --------CA   03000  GOSUB 10440
    0x6272a174c060 --------CA   03010  LET A$ = ">!<"
    0x6272a174c290 --------CA   03020  LET Z1 = R1
    0x6272a174c4c0 --------CA   03030  LET Z2 = R2
    0x6272a174c530 --------CA   03040  GOSUB 10550
    0x6272a174c820 --------CA   03050  LET B4 = Z1
    0x6272a174cb10 --------CA   03060  LET B5 = Z2
    0x6272a174cc40 --------CA   03070  NEXT I
    0x6272a174cf50 --------CA   03080  FOR I = 1 TO S3
    0x6272a174cfe0 --------CA   03090  GOSUB 10440
    0x6272a174d210 --------CA   03100  LET A$ = " * "
    0x6272a174d440 --------CA   03110  LET Z1 = R1
    0x6272a174d670 --------CA   03120  LET Z2 = R2
    0x6272a174d6e0 --------CA   03130  GOSUB 10550
    0x6272a174d810 --------CA   03140  NEXT I
    0x6272a174d8b0 --------CA T 03150  GOSUB 8070
    0x6272a174dc00 --------CA T 03160  IF S + E <= 10 GOTO 3190
    0x6272a174de70 --------CA   03170  IF E > 10 GOTO 3230
    0x6272a174e1a0 --------CA   03180  IF D(7) >= 0 GOTO 3230
    0x6272a174e7e0 --------CA T 03190  PRINT CHR$(7); "** FATAL ERROR **"; CHR$(7); "   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    0x6272a174e9b0 --------CA   03200  PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    0x6272a174eb40 --------CA   03210  PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    0x6272a174ebd0 --------CA   03220  GOTO 7870
    0x6272a174ed40 --------CA T 03230  PRINT "COMMAND";
    0x6272a174eea0 --------CA   03240  INPUT A$
    0x6272a174f1b0 --------CA   03250  FOR I = 1 TO 9
    0x6272a174f8f0 --------CA   03260  IF MID$(A$, 1, 1) <> MID$(A1$, I, 1) GOTO 3320
    0x6272a174fb60 --------CA   03270  IF I <> 2 GOTO 3310
    0x6272a174feb0 --------CA   03280  IF LEN(A$) < 2 GOTO 3310
    0x6272a17503b0 --------CA   03290  IF MID$(A$, 2, 1) = "R" GOTO 3310
    0x6272a1750630 --------CA   03300  LET I = 6
    0x6272a1750e40 --------CA T 03310  ON I GOTO 3490, 3150, 5380, 5670, 6140, 7080, 7270, 8950, 7880
    0x6272a1750f80 --------CA T 03320  NEXT I
    0x6272a1751130 --------CA   03330  PRINT "ENTER ONE OF THE FOLLOWING:"
    0x6272a17512b0 --------CA   03340  PRINT "  NAV (TO SET COURSE)"
    0x6272a1751440 --------CA   03350  PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    0x6272a17515c0 --------CA   03360  PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    0x6272a1751750 --------CA   03370  PRINT "  PHA (TO FIRE PHASERS)"
    0x6272a17518e0 --------CA   03380  PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    0x6272a1751a70 --------CA   03390  PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    0x6272a1751c00 --------CA   03400  PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    0x6272a1751d90 --------CA   03410  PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    0x6272a1751f00 --------CA   03420  PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    0x6272a1752060 --------CA   03430  PRINT " "
    0x6272a17520e0 --------CA   03440  GOTO 3160
    0x6272a1752150 ---------A   03450  REM
    0x6272a1752250 ---------A   03460  REM ===============================================================
    0x6272a17522e0 ---------A   03470  REM
    0x6272a1752390 ---------A   03480  REM  COURSE CONTROL BEGINS HERE
    0x6272a1752530 --------CA T 03490  PRINT "COURSE(1-9)";
    0x6272a1752760 --------CA   03500  INPUT C1
    0x6272a17529a0 --------CA   03510  IF C1 >= 1 GOTO 3540
    0x6272a1752b70 --------CA T 03520  PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x6272a1752c00 --------CA   03530  GOTO 3160
    0x6272a1752e30 --------CA T 03540  IF C1 < 9 GOTO 3570
    0x6272a17530a0 --------CA   03550  IF C1 > 9 GOTO 3520
    0x6272a1753150 --------CA   03560  GOTO 3520
    0x6272a1740af0 --------CA T 03570  PRINT "WARP FACTOR (0-8)";
    0x6272a1740d20 --------CA   03580  INPUT W1
    0x6272a1740f60 --------CA   03590  IF W1 > 0 GOTO 3630
    0x6272a1741150 --------CA   03600  PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    0x6272a1754490 --------CA   03610  PRINT "          SET WARP "; W1; " !"
    0x6272a1754520 --------CA   03620  GOTO 3160
    0x6272a1754750 --------CA T 03630  IF W1 <= 8 GOTO 3670
    0x6272a1754940 --------CA   03640  PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    0x6272a1754ca0 --------CA   03650  PRINT "         TAKE WARP "; W1; "!/"
    0x6272a1754d30 --------CA   03660  GOTO 3160
    0x6272a1755020 --------CA T 03670  IF D(1) >= 0 GOTO 3710
    0x6272a1755290 --------CA   03680  IF W1 <= .2 GOTO 3710
    0x6272a1755460 --------CA   03690  PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    0x6272a17554f0 --------CA   03700  GOTO 3490
    0x6272a1755a10 --------CA T 03710  LET N = INT(W1 * 8 + .5)
    0x6272a1755d60 --------CA   03720  IF E - N >= 0 GOTO 3840
    0x6272a1755f50 --------CA   03730  PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x6272a17562d0 --------CA   03740  PRINT "   FOR MANEUVERING AT WARP"; W1; "!'"
    0x6272a1756650 --------CA   03750  IF S < N - E GOTO 3160
    0x6272a1756980 --------CA   03760  IF D(7) < 0 GOTO 3160
    0x6272a1756d70 --------CA   03770  PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"; S; " UNITS"
    0x6272a1756ef0 --------CA   03780  PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    0x6272a1756f70 --------CA   03790  GOTO 7080
    0x6272a1756fe0 ---------A   03800  REM
    0x6272a17570e0 ---------A   03810  REM ===============================================================
    0x6272a1757170 ---------A   03820  REM
    0x6272a1757240 ---------A   03830  REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...
    0x6272a1757560 --------CA T 03840  FOR I = 1 TO K3
    0x6272a1757920 --------CA   03850  IF K(1, 3) <= 0 GOTO 3950
    0x6272a1757ba0 --------CA   03860  LET A$ = "   "
    0x6272a1757f80 --------CA   03870  LET Z1 = K(I, 1)
    0x6272a1758350 --------CA   03880  LET Z2 = K(I, 2)
    0x6272a17583c0 --------CA   03890  GOSUB 10550
    0x6272a1758440 --------CA   03900  GOSUB 10440
    0x6272a1758820 --------CA   03910  LET K(I, 1) = Z1
    0x6272a1758c00 --------CA   03920  LET K(I, 2) = Z2
    0x6272a1758e30 --------CA   03930  LET A$ = "+++"
    0x6272a1758ea0 --------CA   03940  GOSUB 10550
    0x6272a1758fd0 --------CA T 03950  NEXT I
    0x6272a1759060 --------CA   03960  GOSUB 7610
    0x6272a1759330 --------CA   03970  LET D1 = 0
    0x6272a1759630 --------CA   03980  LET D6 = W1
    0x6272a1759860 --------CA   03990  IF W1 < 1 GOTO 4050
    0x6272a1759aa0 --------CA   04000  LET D6 = 1
    0x6272a1759b10 --------CA   04010  REM
    0x6272a1759c10 --------CA   04020  REM ===============================================================
    0x6272a1759ca0 --------CA   04030  REM
    0x6272a1759d50 --------CA   04040  REM MAKE REPAIRS TO SHIP
    0x6272a175a050 --------CA T 04050  FOR I = 1 TO 8
    0x6272a175a370 --------CA   04060  IF D(I) >= 0 GOTO 4160
    0x6272a175a8b0 --------CA   04070  LET D(I) = D(I) + 6
    0x6272a175abc0 --------CA   04080  IF D(I) < 0 GOTO 4160
    0x6272a175ae30 --------CA   04090  IF D1 = 1 GOTO 4120
    0x6272a175b090 --------CA   04100  LET D1 = 1
    0x6272a175b200 --------CA   04110  PRINT "DAMAGE CONTROL REPORT:"
    0x6272a175b3c0 --------CA T 04120  PRINT TAB(8);
    0x6272a175b600 --------CA   04130  LET R1 = I
    0x6272a175b680 --------CA   04140  GOSUB 10780
    0x6272a175b7d0 --------CA   04150  PRINT " REPAIR COMPLETED"
    0x6272a175b910 --------CA T 04160  NEXT I
    0x6272a175b9a0 --------CA   04170  REM
    0x6272a175baa0 --------CA   04180  REM ===============================================================
    0x6272a175bb30 --------CA   04190  REM
    0x6272a175bbf0 --------CA   04200  REM DAMAGE/IMPROVEMENT DURING SOME VES
    0x6272a175bf10 --------CA   04210  IF RND(1) > .2 GOTO 4410
    0x6272a175c530 --------CA   04220  LET R1 = INT(RND(1) * 8 + 1)
    0x6272a175c820 --------CA   04230  IF RND(1) >= .6 GOTO 4310
    0x6272a175d080 --------CA   04240  LET D(R1) = D(R1) - (RND(1) * 5 + 1)
    0x6272a175d1e0 --------CA   04250  PRINT " "
    0x6272a175d370 --------CA   04260  PRINT "DAMAGE CONTROL REPORT:";
    0x6272a175d400 --------CA   04270  GOSUB 10780
    0x6272a175d550 --------CA   04280  PRINT " DAMAGED"
    0x6272a175d6b0 --------CA   04290  PRINT " "
    0x6272a175d750 --------CA   04300  GOTO 4410
    0x6272a175df60 --------CA T 04310  LET D(R1) = D(R1) + (RND(1) * 3 + 1)
    0x6272a175e0c0 --------CA   04320  PRINT " "
    0x6272a175e250 --------CA   04330  PRINT "DAMAGE CONTROL REPORT:";
    0x6272a175e2f0 --------CA   04340  GOSUB 10780
    0x6272a175e450 --------CA   04350  PRINT " STATE OF REPAIR IMPROVED"
    0x6272a175e5b0 --------CA   04360  PRINT " "
    0x6272a175e630 --------CA   04370  REM
    0x6272a175e730 --------CA   04380  REM ===============================================================
    0x6272a175e7c0 --------CA   04390  REM
    0x6272a175e870 --------CA   04400  REM BEGIN MOVING STARSHIP **
    0x6272a175ead0 --------CA T 04410  LET A$ = "   "
    0x6272a175edf0 --------CA   04420  LET Z1 = INT(S1)
    0x6272a175f100 --------CA   04430  LET Z2 = INT(S2)
    0x6272a175f180 --------CA   04440  GOSUB 10550
    0x6272a175f7b0 --------CA   04450  LET X1 = -SIN((C1 - 1) * P1)
    0x6272a175f9e0 --------CA   04460  LET X = S1
    0x6272a175fce0 --------CA   04470  LET Y = S2
    0x6272a1760310 --------CA   04480  LET X2 = COS((C1 - 1) * P1)
    0x6272a1760600 --------CA   04490  LET Q4 = Q1
    0x6272a17608f0 --------CA   04500  LET Q5 = Q2
    0x6272a1760bf0 --------CA   04510  FOR I = 1 TO N
    0x6272a1760f60 --------CA   04520  LET S1 = S1 + X1
    0x6272a17612c0 --------CA   04530  LET S2 = S2 + X2
    0x6272a17614f0 --------CA   04540  IF S1 < .5 GOTO 4800
    0x6272a1761760 --------CA   04550  IF S1 >= 8.5 GOTO 4800
    0x6272a17619d0 --------CA   04560  IF S2 < .5 GOTO 4800
    0x6272a1761c40 --------CA   04570  IF S2 >= 8.5 GOTO 4800
    0x6272a1762860 --------CA   04580  IF MID$(Q$(INT(S1 + .5)), (3 * INT(S2 + .5) - 2), 3) = "   " GOTO 4640
    0x6272a1762c00 --------CA   04590  LET S1 = S1 - X1
    0x6272a1762f80 --------CA   04600  LET S2 = S2 - X2
    0x6272a1763410 --------CA   04610  PRINT "WARP ENGINES SHUT DOWN AT SECTOR "; INT(S1 + .5);
    0x6272a1763960 --------CA   04620  PRINT ","; INT(S2 + .5); " DUE TO BAD NAVIGATION"
    0x6272a17639e0 --------CA   04630  GOTO 4650
    0x6272a1763b10 --------CA T 04640  NEXT I
    0x6272a1763d70 --------CA T 04650  LET A$ = "<*>"
    0x6272a1764190 --------CA   04660  S1 = INT(S1 + .5)
    0x6272a17645b0 --------CA   04670  S2 = INT(S2 + .5)
    0x6272a17648d0 --------CA   04680  LET Z1 = INT(S1)
    0x6272a1764be0 --------CA   04690  LET Z2 = INT(S2)
    0x6272a1764c50 --------CA   04700  GOSUB 10550
    0x6272a1764cc0 --------CA   04710  GOSUB 5260
    0x6272a1764fa0 --------CA   04720  LET T8 = 1
    0x6272a17651d0 --------CA   04730  IF W1 >= 1 GOTO 4750
    0x6272a1765720 --------CA   04740  LET T8 = .1 * INT(10 * W1)
    0x6272a1765a80 --------CA T 04750  LET T = T + T8
    0x6272a1765df0 --------CA   04760  IF T > T0 + T9 GOTO 7830
    0x6272a1765ec0 --------CA   04770  REM SEE IF DOCKED, THEN GET COMMAND
    0x6272a1765f60 --------CA   04780  GOTO 3150
    0x6272a1765fe0 ---------A   04790  REM EXCEEDED QUADRANT LIMITS
    0x6272a17666b0 --------CA T 04800  LET X = 8 * Q1 + X + N * X1
    0x6272a1766d50 --------CA   04810  LET Y = 8 * Q2 + Y + N * X2
    0x6272a1767170 --------CA   04820  LET Q1 = INT(X / 8)
    0x6272a1767590 --------CA   04830  LET Q2 = INT(Y / 8)
    0x6272a1767ad0 --------CA   04840  LET S1 = INT(X - Q1 * 8)
    0x6272a1768000 --------CA   04850  LET S2 = INT(Y - Q2 * 8)
    0x6272a17682e0 --------CA   04860  LET X5 = 0
    0x6272a1768510 --------CA   04870  IF S1 <> 0 GOTO 4910
    0x6272a1768870 --------CA   04880  LET Q1 = Q1 - 1
    0x6272a1768a80 --------CA   04890  LET S1 = 8
    0x6272a1768ca0 --------CA   04900  LET X5 = 0
    0x6272a1768ed0 --------CA T 04910  IF S2 <> 0 GOTO 4950
    0x6272a1769230 --------CA   04920  LET Q2 = Q2 - 1
    0x6272a1769440 --------CA   04930  LET S2 = 8
    0x6272a1769660 --------CA   04940  LET X5 = 0
    0x6272a1769890 --------CA T 04950  IF Q1 >= 1 GOTO 4990
    0x6272a1769ad0 --------CA   04960  LET X5 = 1
    0x6272a1769ce0 --------CA   04970  LET Q1 = 1
    0x6272a1769f00 --------CA   04980  LET S1 = 1
    0x6272a176a130 --------CA T 04990  IF Q1 <= 8 GOTO 5030
    0x6272a176a370 --------CA   05000  LET X5 = 1
    0x6272a176a580 --------CA   05010  LET Q1 = 8
    0x6272a176a7a0 --------CA   05020  LET S1 = 8
    0x6272a176a9d0 --------CA T 05030  IF Q2 >= 1 GOTO 5070
    0x6272a176ac10 --------CA   05040  LET X5 = 1
    0x6272a176ae20 --------CA   05050  LET Q2 = 1
    0x6272a176b040 --------CA   05060  LET S2 = 1
    0x6272a176b270 --------CA T 05070  IF Q2 <= 8 GOTO 5110
    0x6272a176b4b0 --------CA   05080  LET X5 = 1
    0x6272a176b6c0 --------CA   05090  LET Q2 = 8
    0x6272a176b8e0 --------CA   05100  LET S2 = 8
    0x6272a176bb10 --------CA T 05110  IF X5 = 0 GOTO 5180
    0x6272a176bd10 --------CA   05120  PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    0x6272a176bed0 --------CA   05130  PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    0x6272a176c080 --------CA   05140  PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    0x6272a176c240 --------CA   05150  PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x6272a176cbb0 --------CA   05160  PRINT "   AT SECTOR "; S1; ","; S2; " OF QUADRANT "; Q1; ","; Q2; ".'"
    0x6272a176cf30 --------CA   05170  IF T > T0 + T9 GOTO 7830
    0x6272a176d610 --------CA T 05180  IF 8 * Q1 + Q2 = 8 * Q4 + Q5 GOTO 4650
    0x6272a176d970 --------CA   05190  LET T = T + 1
    0x6272a176d9e0 --------CA   05200  GOSUB 5260
    0x6272a176da50 --------CA   05210  GOTO 2460
    0x6272a176dac0 ---------B   05220  REM
    0x6272a176dbc0 ---------B   05230  REM ===============================================================
    0x6272a176dc50 ---------B   05240  REM
    0x6272a176dd00 ---------B   05250  REM MANEUVER ENERGY S/R ***
    0x6272a176e190 ---------B G 05260  LET E = E - N - 10
    0x6272a176e3c0 ---------B   05270  IF E >= 0 GOTO 5330
    0x6272a176e5b0 ---------B   05280  PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    0x6272a176e910 ---------B   05290  LET S = S + E
    0x6272a176eb30 ---------B   05300  LET E = 0
    0x6272a176ed60 ---------B   05310  IF S > 0 GOTO 5330
    0x6272a176efa0 ---------B   05320  LET S = 0
    0x6272a176eff0 ---------B T 05330  RETURN
    0x6272a176f070 ---------A   05340  REM
    0x6272a176f170 ---------A   05350  REM ===============================================================
    0x6272a176f200 ---------A   05360  REM
    0x6272a176f2b0 ---------A   05370  REM L.R. SENSOR SCAN CODE ***
    0x6272a176f5d0 --------CA T 05380  IF D(3) >= 0 GOTO 5410
    0x6272a176f780 --------CA   05390  PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x6272a176f830 --------CA   05400  GOTO 3160
    0x6272a176fca0 --------CA T 05410  PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"; Q1; ","; Q2
    0x6272a176ffa0 --------CA   05420  LET O1$ = "..................."
    0x6272a1770100 --------CA   05430  PRINT O1$
    0x6272a1770630 --------CA   05440  FOR I = Q1 - 1 TO Q1 + 1
    0x6272a17706b0 --------CA   05450  REM    DIM N(3)
    0x6272a1770a80 --------CA   05460  FOR I1 = 1 TO 3
    0x6272a1770d80 --------CA   05470  LET N(I1) = 0
    0x6272a1770eb0 --------CA   05480  NEXT I1
    0x6272a1771400 --------CA   05490  FOR J = Q2 - 1 TO Q2 + 1
    0x6272a1771640 --------CA   05500  IF I < 1 GOTO 5580
    0x6272a17718b0 --------CA   05510  IF I > 8 GOTO 5580
    0x6272a1771b20 --------CA   05520  IF J < 1 GOTO 5560
    0x6272a1771d90 --------CA   05530  IF J > 8 GOTO 5560
    0x6272a17724d0 --------CA   05540  LET N(J - Q2 + 2) = G(I, J)
    0x6272a1772a80 --------CA   05550  LET Z(I, J) = G(I, J)
    0x6272a1772bb0 --------CA T 05560  NEXTJ
    0x6272a1772c50 --------CA   05570  REM   DIM P1$(20)
    0x6272a1772fa0 --------CA T 05580  LET P1$ = ": ### : ### : ### :"
    0x6272a1773610 --------CA   05590  PRINT USING P1$; N(1); N(2); N(3)
    0x6272a1773770 --------CA   05600  PRINT O1$
    0x6272a17738b0 --------CA   05610  NEXT I
    0x6272a1773940 --------CA   05620  GOTO 3160
    0x6272a17739b0 ---------A   05630  REM
    0x6272a1773ab0 ---------A   05640  REM ===============================================================
    0x6272a1773b40 ---------A   05650  REM
    0x6272a1773c00 ---------A   05660  REM *** PHASER CONTROL CODE BEGINS HERE
    0x6272a1773e60 --------CA T 05670  IF K3 > 0 GOTO 5710
    0x6272a1774050 --------CA   05680  PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    0x6272a17741c0 --------CA   05690  PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    0x6272a1774250 --------CA   05700  GOTO 3160
    0x6272a1774540 --------CA T 05710  IF D(4) >= 0 GOTO 5740
    0x6272a17746d0 --------CA   05720  PRINT "PHASERS INOPERATIVE"
    0x6272a1774760 --------CA   05730  GOTO 3160
    0x6272a1774a50 --------CA T 05740  IF D(8) >= 0 GOTO 5760
    0x6272a1774c20 --------CA   05750  PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    0x6272a1774da0 --------CA T 05760  PRINT "PHASERS LOCKED ON TARGET;  "
    0x6272a1775020 --------CA T 05770  PRINT "ENERGY AVAILABLE ="; E
    0x6272a17751b0 --------CA   05780  PRINT "NUMBER OF UNITS TO FIRE:";
    0x6272a1775320 --------CA   05790  INPUT X
    0x6272a1775560 --------CA   05800  IF X <= 0 GOTO 3160
    0x6272a17758f0 --------CA   05810  IF E - X < 0 GOTO 5770
    0x6272a1775c70 --------CA   05820  LET E = E - X
    0x6272a1775cf0 --------CA   05830  GOSUB 7610
    0x6272a1775fe0 --------CA   05840  IF D(7) >= 0 GOTO 5860
    0x6272a1776440 --------CA   05850  LET X = X * RND(1)
    0x6272a1776930 --------CA T 05860  LET H1 = INT(X / K3)
    0x6272a1776c10 --------CA   05870  FOR I = 1 TO 3
    0x6272a1776ff0 --------CA   05880  IF K(I, 3) <= 0 GOTO 6080
    0x6272a1777970 --------CA   05890  LET H = INT((H1 / FND(0)) * (RND(1) * 2))
    0x6272a1777e60 --------CA   05900  IF H > .15 * K(I, 3) GOTO 5940
    0x6272a1778040 --------CA   05910  PRINT "SENSORS SHOW NO DAMAGE"
    0x6272a17787e0 --------CA   05920  PRINT "    TO ENEMY AT "; K(I, 1); ","; K(I, 2)
    0x6272a1778870 --------CA   05930  GOTO 6080
    0x6272a1778f40 --------CA T 05940  LET K(I, 3) = K(I, 3) - H
    0x6272a17797f0 --------CA   05950  PRINT H; " UNIT HIT ON KLINGON AT SECTOR "; K(I, 1); ","; K(I, 2)
    0x6272a1779bd0 --------CA   05960  IF K(I, 3) <= 0 GOTO 5990
    0x6272a177a120 --------CA   05970  PRINT "   (SENSORS SHOW"; K(I, 3); " UNITS REMAINING)"
    0x6272a177a1c0 --------CA   05980  GOTO 6080
    0x6272a177a330 --------CA T 05990  PRINT " *** KLINGON DESTROYED ***"
    0x6272a177a680 --------CA   06000  LET K3 = K3 - 1
    0x6272a177a9b0 --------CA   06010  LET K9 = K9 - 1
    0x6272a177abf0 --------CA   06020  A$ = "   "
    0x6272a177afd0 --------CA   06030  LET Z1 = K(I, 1)
    0x6272a177b3a0 --------CA   06040  LET Z2 = K(I, 2)
    0x6272a177b430 --------CA   06050  GOSUB 10550
    0x6272a177bc70 --------CA   06060  LET G(Q1, Q2) = K3 * 100 + B3 * 10 + S3
    0x6272a177bea0 --------CA   06070  IF K9 <= 0 GOTO 7980
    0x6272a177c000 --------CA T 06080  NEXT I
    0x6272a177c090 --------CA   06090  GOTO 3160
    0x6272a177c100 ---------A   06100  REM
    0x6272a177c200 ---------A   06110  REM ===============================================================
    0x6272a177c290 ---------A   06120  REM
    0x6272a17531d0 ---------A   06130  REM PHOTON TORPEDO CODE BEGINS ***
    0x6272a17534f0 --------CA T 06140  IF D(5) >= 0 GOTO 6170
    0x6272a17536a0 --------CA   06150  PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    0x6272a1753730 --------CA   06160  GOTO 3160
    0x6272a1753960 --------CA T 06170  IF P > 0 GOTO 6200
    0x6272a1753b10 --------CA   06180  PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x6272a1753ba0 --------CA   06190  GOTO 3160
    0x6272a1753d10 --------CA T 06200  PRINT "TORPEDO COURSE (1-9)";
    0x6272a1753e80 --------CA   06210  INPUT C1
    0x6272a17540c0 --------CA   06220  IF C1 >= 1 GOTO 6250
    0x6272a177e410 --------CA T 06230  PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x6272a177e4a0 --------CA   06240  GOTO 3160
    0x6272a177e6d0 --------CA T 06250  IF C1 > 9 GOTO 6230
    0x6272a177e940 --------CA   06260  IF C1 < 9 GOTO 6290
    0x6272a177ebb0 --------CA   06270  IF C1 >= 9 GOTO 6200
    0x6272a177ee00 --------CA   06280  LET C1 = 1
    0x6272a177f380 --------CA T 06290  LET X1 = -SIN((C1 - 1) * P1)
    0x6272a177f900 --------CA   06300  LET X2 = COS((C1 - 1) * P1)
    0x6272a177fd40 --------CA   06310  IF ABS(X1) < ABS(X2) THEN 6360
    0x6272a1780220 --------CA   06320  M9 = ABS(1 / X1)
    0x6272a1780530 --------CA   06330  X1 = SGN(X1)
    0x6272a1780880 --------CA   06340  X2 = X2 * M9
    0x6272a1780900 --------CA   06350  GOTO 6390
    0x6272a1780d10 --------CA T 06360  M9 = ABS(1 / X2)
    0x6272a1781020 --------CA   06370  X2 = SGN(X2)
    0x6272a1781370 --------CA   06380  X1 = X1 * M9
    0x6272a17816a0 --------CA T 06390  LET E = E - 2
    0x6272a17818d0 --------CA   06400  LET X = S1
    0x6272a1781b00 --------CA   06410  LET Y = S2
    0x6272a1781e40 --------CA   06420  LET P = P - 1
    0x6272a1781f90 --------CA   06430  PRINT "TORPEDO TRACK:"
    0x6272a17822f0 --------CA T 06440  LET X = X + X1
    0x6272a1782650 --------CA   06450  LET Y = Y + X2
    0x6272a1782b30 --------CA   06460  LET X9 = INT(X + .5)
    0x6272a1783010 --------CA   06470  LET Y9 = INT(Y + .5)
    0x6272a1783240 --------CA   06480  IF X9 < 1 GOTO 7010
    0x6272a17834b0 --------CA   06490  IF X9 >= 9 GOTO 7010
    0x6272a1783720 --------CA   06500  IF Y9 < 1 GOTO 7010
    0x6272a1783990 --------CA   06510  IF Y9 >= 9 GOTO 7010
    0x6272a1783e30 --------CA   06520  PRINT "               "; X9; ","; Y9
    0x6272a1784070 --------CA   06530  LET A$ = "   "
    0x6272a17842a0 --------CA   06540  LET Z1 = X9
    0x6272a17844d0 --------CA   06550  LET Z2 = Y9
    0x6272a1784550 --------CA   06560  GOSUB 10840
    0x6272a1784840 --------CA   06570  IF Z3 <> 0 GOTO 6440
    0x6272a1784aa0 --------CA   06580  LET A$ = "+++"
    0x6272a1784cd0 --------CA   06590  LET Z1 = X9
    0x6272a1784f00 --------CA   06600  LET Z2 = Y9
    0x6272a1784f80 --------CA   06610  GOSUB 10840
    0x6272a17851b0 --------CA   06620  IF Z3 = 0 GOTO 6730
    0x6272a1785360 --------CA   06630  PRINT "*** KLINGON DESTROYED ***"
    0x6272a17856a0 --------CA   06640  LET K3 = K3 - 1
    0x6272a17859e0 --------CA   06650  LET K9 = K9 - 1
    0x6272a1785c10 --------CA   06660  IF K9 <= 0 GOTO 7980
    0x6272a1785f20 --------CA   06670  FOR I = 1 TO 3
    0x6272a1786320 --------CA   06680  IF X9 <> K(I, 1) GOTO 6700
    0x6272a1786750 --------CA   06690  IF Y9 = K(I, 2) GOTO 6710
    0x6272a17868b0 --------CA T 06700  NEXT I
    0x6272a1786c80 --------CA T 06710  LET K(I, 3) = 0
    0x6272a1786cf0 --------CA   06720  GOTO 6950
    0x6272a1786f20 --------CA T 06730  LET A$ = " * "
    0x6272a1787150 --------CA   06740  LET Z1 = X9
    0x6272a1787380 --------CA   06750  LET Z2 = Y9
    0x6272a1787400 --------CA   06760  GOSUB 10840
    0x6272a1787630 --------CA   06770  IF Z3 = 0 GOTO 6800
    0x6272a1787bf0 --------CA   06780  PRINT "STAR AT"; X9; ","; Y9; " ABSORBED TORPEDO ENERGY."
    0x6272a1787c70 --------CA   06790  GOTO 7020
    0x6272a1787ea0 --------CA T 06800  LET A$ = ">!<"
    0x6272a17880d0 --------CA   06810  LET Z1 = X9
    0x6272a1788300 --------CA   06820  LET Z2 = Y9
    0x6272a1788380 --------CA   06830  GOSUB 10840
    0x6272a17885b0 --------CA   06840  IF Z3 = 0 GOTO 6200
    0x6272a1788760 --------CA   06850  PRINT "*** STARBASE DESTROYED ***"
    0x6272a1788aa0 --------CA   06860  LET B3 = B3 - 1
    0x6272a1788de0 --------CA   06870  LET B9 = B9 - 1
    0x6272a1789010 --------CA   06880  IF B9 > 0 GOTO 6920
    0x6272a1789240 --------CA   06890  PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    0x6272a17893d0 --------CA   06900  PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    0x6272a1789480 --------CA   06910  GOTO 7880
    0x6272a1789600 --------CA T 06920  PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x6272a1789760 --------CA   06930  PRINT "   COURT MARTIAL!"
    0x6272a1789980 --------CA   06940  LET D0 = 0
    0x6272a1789bb0 --------CA T 06950  LET A$ = "   "
    0x6272a1789de0 --------CA   06960  LET Z1 = X9
    0x6272a178a010 --------CA   06970  LET Z2 = Y9
    0x6272a178a0a0 --------CA   06980  GOSUB 10550
    0x6272a178a8d0 --------CA   06990  LET G(Q1, Q2) = K3 * 100 + B3 * 10 + S3
    0x6272a178a950 --------CA   07000  GOTO 7020
    0x6272a178aaa0 --------CA T 07010  PRINT "TORPEDO MISSED"
    0x6272a178ab20 --------CA T 07020  GOSUB 7610
    0x6272a178ab90 --------CA   07030  GOTO 3160
    0x6272a178ac00 ---------A   07040  REM
    0x6272a178ad00 ---------A   07050  REM ===============================================================
    0x6272a178ad90 ---------A   07060  REM
    0x6272a178ae50 ---------A   07070  REM *** SHIELD CONTROL STARTS HERE
    0x6272a178b170 --------CA T 07080  IF D(7) >= 0 GOTO 7110
    0x6272a178b320 --------CA   07090  PRINT "SHIELD CONTROL INOPERABLE"
    0x6272a178b3e0 --------CA   07100  GOTO 3160
    0x6272a178b860 --------CA T 07110  PRINT "ENERGY AVAILABLE ="; E + 5; ". NUMBER OF UNITS TO SHIELDS:";
    0x6272a178b9d0 --------CA   07120  INPUT X
    0x6272a178bc10 --------CA   07130  IF X >= 0 GOTO 7170
    0x6272a178bea0 --------CA   07140  IF S <> X GOTO 7170
    0x6272a178c030 --------CA   07150  PRINT "(SHIELDS UNCHANGED)"
    0x6272a178c0c0 --------CA   07160  GOTO 3160
    0x6272a178c530 --------CA T 07170  IF E + S - X < 0 GOTO 7110
    0x6272a178c9e0 --------CA   07180  LET E = E + S - X
    0x6272a178cc30 --------CA   07190  LET S = X
    0x6272a178cdc0 --------CA   07200  PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x6272a178d120 --------CA   07210  PRINT "  'SHIELDS NOW AT "; S; " PER YOUR COMMAND'"
    0x6272a178d1a0 --------CA   07220  GOTO 3160
    0x6272a178d210 ---------A   07230  REM
    0x6272a178d310 ---------A   07240  REM ===============================================================
    0x6272a178d3a0 ---------A   07250  REM
    0x6272a178d460 ---------A   07260  REM *** DAMAGE CONTROL STARTS HERE
    0x6272a178d780 --------CA T 07270  IF D(6) >= 0 GOTO 7490
    0x6272a178d940 --------CA   07280  PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    0x6272a178db80 --------CA T 07290  IF D0 = 0 GOTO 3160
    0x6272a178de80 --------CA   07300  LET D3 = 0
    0x6272a178e160 --------CA   07310  FOR I = 1 TO 8
    0x6272a178e480 --------CA   07320  IF D(I) >= 0 GOTO 7340
    0x6272a178e7f0 --------CA   07330  LET D3 = D3 + .1
    0x6272a178e920 --------CA T 07340  NEXT I
    0x6272a178eb80 --------CA   07350  IF D3 = 0 GOTO 3160
    0x6272a178ef20 --------CA   07360  LET D3 = D3 + D4
    0x6272a178f150 --------CA   07370  IF D3 < 1 GOTO 7390
    0x6272a178f3c0 --------CA   07380  LET D3 = .9
    0x6272a178f560 --------CA T 07390  PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    0x6272a178f700 --------CA   07400  PRINT "ESTIMATED TIME TO REPAIR: ";
    0x6272a178f990 --------CA   07410  PRINT USING ".# STARDATES"; D3
    0x6272a178fb30 --------CA   07420  PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    0x6272a178fca0 --------CA   07430  INPUT A$
    0x6272a178ff00 --------CA   07440  IF A$ <> "YES" GOTO 3160
    0x6272a1790210 --------CA   07450  FOR I = 1 TO 8
    0x6272a1790510 --------CA   07460  LET D(I) = 0
    0x6272a1790640 --------CA   07470  NEXT I
    0x6272a1790ac0 --------CA   07480  LET T = T + D3 + .1
    0x6272a1790c30 --------CA T 07490  PRINT " "
    0x6272a1790da0 --------CA   07500  PRINT "DEVICE        STATE OF REPAIR"
    0x6272a1791080 --------CA   07510  FOR R1 = 1 TO 8
    0x6272a1791120 --------CA   07520  GOSUB 10780
    0x6272a1791450 --------CA   07530  PRINT USING "  -##.##";D(R1)
    0x6272a1791590 --------CA   07540  NEXT R1
    0x6272a1791700 --------CA   07550  PRINT " "
    0x6272a1791780 --------CA   07560  GOTO 7290
    0x6272a17917f0 ---------C   07570  REM
    0x6272a17918f0 ---------C   07580  REM ===============================================================
    0x6272a1791980 ---------C   07590  REM
    0x6272a1791a40 ---------C   07600  REM "KLINGONS SHOOTING" CODE BEGINS ***
    0x6272a1791ca0 ---------C G 07610  IF K3 <= 0 GOTO 7820
    0x6272a1791f10 ---------C   07620  IF D0 = 0 GOTO 7650
    0x6272a17920e0 ---------C   07630  PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x6272a1792160 ---------C   07640  GOTO 7820
    0x6272a1792440 ---------C T 07650  FOR I = 1 TO 3
    0x6272a1792820 ---------C   07660  IF K(I, 3) <= 0 GOTO 7810
    0x6272a1793280 ---------C   07670  LET H = INT((K(I, 3) / FND(0)) * (2 + RND(1)))
    0x6272a1793610 ---------C   07680  LET S = S - H
    0x6272a1793ec0 ---------C   07690  PRINT H; " UNIT HIT ON ENTERPRISE FROM SECTOR"; K(I, 1); ","; K(I, 2)
    0x6272a1794100 ---------C   07700  IF S < 0 GOTO 7850
    0x6272a17944d0 ---------C   07710  PRINT "      (SHIELDS DOWN TO"; S; " UNITS.)"
    0x6272a1794710 ---------C   07720  IF H < 20 GOTO 7810
    0x6272a1794a40 ---------C   07730  IF RND(1) > .6 GOTO 7810
    0x6272a1794dd0 ---------C   07740  IF H / S <= .02 GOTO 7810
    0x6272a1795530 ---------C   07750  LET D2 = H / S + .5 * RND(1)
    0x6272a1795b10 ---------C   07760  LET R1 = INT(RND(1) * 8 + 1)
    0x6272a1796040 ---------C   07770  LET D(R1) = D(R1) - D2
    0x6272a17961c0 ---------C   07780  PRINT "DAMAGE CONTROL REPORTS '";
    0x6272a1796260 ---------C   07790  GOSUB 10780
    0x6272a17963b0 ---------C   07800  PRINT "DAMAGED BY THE HIT!'"
    0x6272a17964f0 ---------C T 07810  NEXT I
    0x6272a1796560 ---------C T 07820  RETURN
    0x6272a17967d0 --------CA T 07830  PRINT "ITS IS STARDATE "; T
    0x6272a1796850 --------CA   07840  GOTO 7880
    0x6272a17969e0 ---------C T 07850  PRINT " "
    0x6272a1796b80 ---------C   07860  PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    0x6272a1796f10 --------CA T 07870  PRINT "IT IS STARDATE "; T; "."
    0x6272a17972a0 --------CA T 07880  PRINT "THERE WERE "; K9; " KLINGON BATTLE CRUISERS LEFT AT "
    0x6272a1797410 --------CA   07890  PRINT "THE END OF YOUR MISSION."
    0x6272a1797570 --------CA T 07900  PRINT " "
    0x6272a1797700 --------CA   07910  PRINT " "
    0x6272a17978b0 --------CA   07920  PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x6272a1797a50 --------CA   07930  PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x6272a1797bc0 --------CA   07940  PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    0x6272a1797d30 --------CA   07950  INPUT A$
    0x6272a1797f90 --------CA   07960  IF A$ = "AYE" GOTO 1270
    0x6272a1798070 --------CA   07970  GOTO 11100
    0x6272a1798220 --------CA T 07980  PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    0x6272a17983a0 --------CA   07990  PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    0x6272a1798540 --------CA   08000  PRINT " "
    0x6272a1798cb0 --------CA   08010  PRINT "YOUR EFFICIENCY RATING IS "; ((K / (T - T0)) * 1000); "."
    0x6272a1798d30 --------CA   08020  GOTO 7900
    0x6272a1798da0 ---------D   08030  REM
    0x6272a1798ea0 ---------D   08040  REM ===============================================================
    0x6272a1798f30 ---------D   08050  REM
    0x6272a1799000 ---------D   08060  REM S.R. SENSOR SCAN & STARTUP SUBR. ***
    0x6272a1799550 ---------D G 08070  FOR I = S1 - 1 TO S1 + 1
    0x6272a1799a90 ---------D   08080  FOR J = S2 - 1 TO S2 + 1
    0x6272a1799eb0 ---------D   08090  IF INT(I + .5) < 1 GOTO 8180
    0x6272a179a310 ---------D   08100  IF INT(I + .5) > 8 GOTO 8180
    0x6272a179a770 ---------D   08110  IF INT(J + .5) < 1 GOTO 8180
    0x6272a179abd0 ---------D   08120  IF INT(J + .5) > 8 GOTO 8180
    0x6272a179ae40 ---------D   08130  LET A$ = ">!<"
    0x6272a179b070 ---------D   08140  LET Z1 = I
    0x6272a179b2a0 ---------D   08150  LET Z2 = J
    0x6272a179b320 ---------D   08160  GOSUB 10840
    0x6272a179b550 ---------D   08170  IF Z3 = 1 GOTO 8220
    0x6272a179b6b0 ---------D T 08180  NEXT J
    0x6272a179b800 ---------D   08190  NEXT I
    0x6272a179ba30 ---------D   08200  LET D0 = 0
    0x6272a179baa0 ---------D   08210  GOTO 8290
    0x6272a179bcc0 ---------D T 08220  LET D0 = 1
    0x6272a179bfb0 ---------D   08230  LET C$ = "DOCKED"
    0x6272a179c1c0 ---------D   08240  LET E = 3000
    0x6272a179c3f0 ---------D   08250  LET P = 10
    0x6272a179c550 ---------D   08260  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x6272a179c770 ---------D   08270  LET S = 0
    0x6272a179c7f0 ---------D   08280  GOTO 8360
    0x6272a179ca20 ---------D T 08290  IF K3 > 0 GOTO 8330
    0x6272a179cdb0 ---------D   08300  IF E < E0 * .1 GOTO 8350
    0x6272a179d020 ---------D   08310  LET C$ = " GREEN"
    0x6272a179d0b0 ---------D   08320  GOTO 8360
    0x6272a179d7c0 ---------D T 08330  C$ = " " + CHR$(7) + "*RED*" + CHR$(7)
    0x6272a179d840 ---------D   08340  GOTO 8360
    0x6272a179da80 ---------D T 08350  LET C$ = "YELLOW"
    0x6272a179dd70 ---------D T 08360  IF D(2) >= 0 GOTO 8410
    0x6272a179df10 ---------D   08370  PRINT " "
    0x6272a179e080 ---------D   08380  PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x6272a179e1e0 ---------D   08390  PRINT " "
    0x6272a179e280 ---------D   08400  GOTO 8900
    0x6272a179e4c0 ---------D T 08410  LET O1$ = "--------------------------------"
    0x6272a179e620 ---------D   08420  PRINT O1$
    0x6272a179e920 ---------D   08430  LET N5$ = "####"
    0x6272a179eaa0 ---------D   08440  PRINT " ";
    0x6272a179ee60 ---------D   08450  FOR I = 1 TO 22 STEP 3
    0x6272a179f420 ---------D   08460  PRINT MID$(Q$(1), I, 3); " ";
    0x6272a179f560 ---------D   08470  NEXT I
    0x6272a179f6d0 ---------D   08480  PRINT " "
    0x6272a179f860 ---------D   08490  PRINT " ";
    0x6272a179fc20 ---------D   08500  FOR I = 1 TO 22 STEP 3
    0x6272a17a01e0 ---------D   08510  PRINT MID$(Q$(2), I, 3); " ";
    0x6272a17a0320 ---------D   08520  NEXT I
    0x6272a17a04f0 ---------D   08530  PRINT "        STARDATE         ";
    0x6272a17a0750 ---------D   08540  PRINT USING "####.#";T
    0x6272a17a08e0 ---------D   08550  PRINT " ";
    0x6272a17a0ca0 ---------D   08560  FOR I = 1 TO 22 STEP 3
    0x6272a17a1260 ---------D   08570  PRINT MID$(Q$(3), I, 3); " ";
    0x6272a17a13a0 ---------D   08580  NEXT I
    0x6272a17a1560 ---------D   08590  PRINT "        CONDITION        ";
    0x6272a17a16c0 ---------D   08600  PRINT C$
    0x6272a17a1850 ---------D   08610  PRINT " ";
    0x6272a17a1c10 ---------D   08620  FOR I = 1 TO 22 STEP 3
    0x6272a17a21d0 ---------D   08630  PRINT MID$(Q$(4), I, 3); " ";
    0x6272a17a2310 ---------D   08640  NEXT I
    0x6272a17a27b0 ---------D   08650  PRINT "        QUADRANT         "; Q1; ","; Q2
    0x6272a17a2940 ---------D   08660  PRINT " ";
    0x6272a17a2d00 ---------D   08670  FOR I = 1 TO 22 STEP 3
    0x6272a17a32c0 ---------D   08680  PRINT MID$(Q$(5), I, 3); " ";
    0x6272a17a3400 ---------D   08690  NEXT I
    0x6272a17a38a0 ---------D   08700  PRINT "        SECTOR           "; S1; ","; S2
    0x6272a17a3a30 ---------D   08710  PRINT " ";
    0x6272a17a3df0 ---------D   08720  FOR I = 1 TO 22 STEP 3
    0x6272a17a43b0 ---------D   08730  PRINT MID$(Q$(6), I, 3); " ";
    0x6272a17a44f0 ---------D   08740  NEXT I
    0x6272a17a46c0 ---------D   08750  PRINT "        TOTAL ENERGY     ";
    0x6272a17a4a20 ---------D   08760  PRINT USING N5$;E+S
    0x6272a17a4bb0 ---------D   08770  PRINT " ";
    0x6272a17a4f70 ---------D   08780  FOR I = 1 TO 22 STEP 3
    0x6272a17a5530 ---------D   08790  PRINT MID$(Q$(7), I, 3); " ";
    0x6272a17a5670 ---------D   08800  NEXT I
    0x6272a17a5840 ---------D   08810  PRINT "        PHOTON TORPEDOES ";
    0x6272a17a5a80 ---------D   08820  PRINT USING N5$;P
    0x6272a17a5c10 ---------D   08830  PRINT " ";
    0x6272a17a5fd0 ---------D   08840  FOR I = 1 TO 22 STEP 3
    0x6272a17a6590 ---------D   08850  PRINT MID$(Q$(8), I, 3); " ";
    0x6272a17a66d0 ---------D   08860  NEXT I
    0x6272a17a68a0 ---------D   08870  PRINT "        SHIELDS          ";
    0x6272a17a6ae0 ---------D   08880  PRINT USING N5$;S
    0x6272a17a6c40 ---------D   08890  PRINT O1$
    0x6272a17a6ca0 ---------D T 08900  RETURN
    0x6272a17a6d20 ---------A   08910  REM
    0x6272a17a6e20 ---------A   08920  REM ===============================================================
    0x6272a17a6eb0 ---------A   08930  REM
    0x6272a17a6f80 ---------A   08940  REM *** LIBARY COMPUTER CODE BEGINS HERE
    0x6272a17a72a0 --------CA T 08950  IF D(8) >= 0 GOTO 8980
    0x6272a17a7430 --------CA   08960  PRINT "COMPUTER DISABLED"
    0x6272a17a74d0 --------CA   08970  GOTO 3160
    0x6272a17a7650 --------CA T 08980  PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    0x6272a17a7880 --------CA   08990  INPUT A
    0x6272a17a7ac0 --------CA   09000  IF A < 0 GOTO 3160
    0x6272a17a7b60 --------CA   09010  PRINT
    0x6272a17a7e50 --------CA   09020  LET H8 = 1
    0x6272a17a8080 --------CA   09030  IF A = 0 GOTO 9270
    0x6272a17a82f0 --------CA   09040  IF A > 5 GOTO 9150
    0x6272a17a8390 --------CA   09050  REM
    0x6272a17a8490 --------CA   09060  REM ===============================================================
    0x6272a17a8520 --------CA   09070  REM
    0x6272a17a8a70 --------CA   09080  ON A GOTO 9690, 9890, 10320, 9970, 9100
    0x6272a17a8af0 --------CA   09090  REM  GOTO 9150
    0x6272a17a8bd0 --------CA T 09100  REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
    0x6272a17a8e00 --------CA   09110  LET H8 = 0
    0x6272a17a9030 --------CA   09120  LET G5 = 1
    0x6272a17a9190 --------CA   09130  PRINT "                      THE GALAXY"
    0x6272a17a9240 --------CA   09140  GOTO 9280
    0x6272a17a93d0 --------CA T 09150  PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    0x6272a17a9550 --------CA   09160  PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x6272a17a96d0 --------CA   09170  PRINT "   1 = STATUS REPORT"
    0x6272a17a9860 --------CA   09180  PRINT "   2 = PHOTON TORPEDO DATA"
    0x6272a17a99f0 --------CA   09190  PRINT "   3 = STARBASE NAVIGATION DATA"
    0x6272a17a9b80 --------CA   09200  PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    0x6272a17a9cf0 --------CA   09210  PRINT "   5 = GALAXY 'REGION NAME' MAP"
    0x6272a17a9d70 --------CA   09220  GOTO 8980
    0x6272a17a9de0 ---------A   09230  REM
    0x6272a17a9ee0 ---------A   09240  REM ===============================================================
    0x6272a17a9f70 ---------A   09250  REM
    0x6272a17aa040 ---------A   09260  REM *** CUM GALACTIC RECORD CODE BEGINS ***
    0x6272a17aa640 --------CA T 09270  PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "; Q1; ","; Q2; ":"
    0x6272a17aa7f0 --------CA T 09280  PRINT "      1     2     3     4     5     6     7     8"
    0x6272a17aab10 --------CA   09290  LET O3$ = "    ----- ----- ----- ----- ----- ----- ----- -----"
    0x6272a17aac70 --------CA   09300  PRINT O3$
    0x6272a17aad00 --------CA   09310  REM   DIM N1$(2),N2$(8),N$(5)
    0x6272a17ab000 --------CA   09320  FOR I = 1 TO 8
    0x6272a17ab310 --------CA   09330  LET N1$ = "##"
    0x6272a17ab570 --------CA   09340  PRINT USING N1$;I;
    0x6272a17ab840 --------CA   09350  PRINT TAB(3); "|";
    0x6272a17aba80 --------CA   09360  IF H8 = 0 GOTO 9480
    0x6272a17abda0 --------CA   09370  FOR J = 1 TO 8
    0x6272a17ac0a0 --------CA   09380  LET N2$ = " ### |"
    0x6272a17ac3a0 --------CA   09390  LET N$ = ""
    0x6272a17ac5f0 --------CA   09400  IF I <> Q1 GOTO 9440
    0x6272a17ac880 --------CA   09410  IF J <> Q2 GOTO 9440
    0x6272a17acbb0 --------CA   09420  LET N$ = CHR$(7)
    0x6272a17acd30 --------CA   09430  PRINT N$;
    0x6272a17ad150 --------CA T 09440  PRINT USING N2$;Z(I,J);
    0x6272a17ad2d0 --------CA   09450  PRINT N$;
    0x6272a17ad410 --------CA   09460  NEXT J
    0x6272a17ad4a0 --------CA   09470  GOTO 9610
    0x6272a17ad6d0 --------CA T 09480  LET Z4 = I
    0x6272a17ad8e0 --------CA   09490  LET Z5 = 1
    0x6272a17ad970 --------CA   09500  GOSUB 10960
    0x6272a17ae030 --------CA   09510  LET J0 = INT(15 - .5 * LEN(G2$))
    0x6272a17ae200 --------CA   09520  PRINT TAB(J0);
    0x6272a17ae390 --------CA   09530  PRINT G2$;
    0x6272a17ae650 --------CA   09540  PRINT TAB(27); "|";
    0x6272a17ae870 --------CA   09550  LET Z5 = 5
    0x6272a17ae900 --------CA   09560  GOSUB 10960
    0x6272a17aef00 --------CA   09570  LET J0 = INT(39 - .5 * LEN(G2$))
    0x6272a17af0d0 --------CA   09580  PRINT TAB(J0);
    0x6272a17af260 --------CA   09590  PRINT G2$;
    0x6272a17af520 --------CA   09600  PRINT TAB(51); "|";
    0x6272a17af5a0 --------CA T 09610  PRINT
    0x6272a17af700 --------CA   09620  PRINT O3$
    0x6272a17af840 --------CA   09630  NEXT I
    0x6272a17af8d0 --------CA   09640  GOTO 3160
    0x6272a17af940 ---------A   09650  REM
    0x6272a17afa40 ---------A   09660  REM ===============================================================
    0x6272a17afad0 ---------A   09670  REM
    0x6272a17afba0 ---------A   09680  REM *** STATUS REPORT CODE BEGINS HERE ***
    0x6272a17afd20 --------CA T 09690  PRINT "   STATUS REPORT:"
    0x6272a17aff70 --------CA   09700  LET X$ = ""
    0x6272a17b01a0 --------CA   09710  IF K9 = 1 GOTO 9730
    0x6272a17b0420 --------CA   09720  LET X$ = "S"
    0x6272a17b0880 --------CA T 09730  PRINT K9; " KLINGON"; X$; " LEFT"
    0x6272a17b0e30 --------CA   09740  LET V5 = (T0 + T9) - T
    0x6272a17b10a0 --------CA   09750  PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES";V5
    0x6272a17b12f0 --------CA   09760  LET X$ = ""
    0x6272a17b1520 --------CA   09770  IF B9 = 1 GOTO 9830
    0x6272a17b1790 --------CA   09780  LET X$ = "S"
    0x6272a17b19c0 --------CA   09790  IF B9 <> 0 GOTO 9830
    0x6272a17b1bc0 --------CA   09800  PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    0x6272a17b1d40 --------CA   09810  PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    0x6272a17b1e00 --------CA   09820  GOTO 7270
    0x6272a17b2360 --------CA T 09830  PRINT "THE FEDERATION IS MAINTAINING"; B9; " STARBASE"; X$; " IN THE GALAXY"
    0x6272a17b23e0 --------CA   09840  GOTO 7270
    0x6272a17b2450 ---------A   09850  REM
    0x6272a17b2550 ---------A   09860  REM ===============================================================
    0x6272a17b25e0 ---------A   09870  REM
    0x6272a17b26c0 ---------A   09880  REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***
    0x6272a17b28f0 --------CA T 09890  LET H8 = 0
    0x6272a17b2bd0 --------CA   09900  FOR I = 1 TO 3
    0x6272a17b2fb0 --------CA   09910  IF K(I, 3) <= 0 GOTO 10300
    0x6272a17b33d0 --------CA   09920  LET W1 = K(I, 1)
    0x6272a17b37a0 --------CA   09930  LET X = K(I, 2)
    0x6272a17b39d0 --------CA T 09940  LET C1 = S1
    0x6272a17b3c00 --------CA   09950  LET A = S2
    0x6272a17b3c90 --------CA   09960  GOTO10040
    0x6272a17b3e30 --------CA T 09970  PRINT "DIRECTION/DISTANCE CALCULAJTOR:"
    0x6272a17b47a0 --------CA   09980  PRINT "YOU ARE AT QUADRANT ("; Q1; ","; Q2; ") SECTOR ("; S1; ","; S2; ")"
    0x6272a17b4920 --------CA   09990  PRINT "PLEASE ENTER --"
    0x6272a17b4ab0 --------CA   10000  PRINT "  INITIAL COORDINATES (X,Y)";
    0x6272a17b4d10 --------CA   10010  INPUT C1, A
    0x6272a17b4ea0 --------CA   10020  PRINT "  FINAL COORDINATES (X,Y)";
    0x6272a17b50f0 --------CA   10030  INPUT W1, X
    0x6272a17b5460 --------CA T 10040  LET X = X - A
    0x6272a17b57c0 --------CA   10050  LET A = C1 - W1
    0x6272a17b59f0 --------CA   10060  IF X < 0 GOTO 10170
    0x6272a17b5c60 --------CA   10070  IF A < 0 GOTO 10230
    0x6272a17b5ed0 --------CA   10080  IF X > 0 GOTO 10100
    0x6272a17b6140 --------CA   10090  IF A = 0 GOTO 10190
    0x6272a17b63a0 --------CA T 10100  LET C1 = 1
    0x6272a17b67b0 --------CA T 10110  IF ABS(A) <= ABS(X) GOTO 10150
    0x6272a17b7310 --------CA   10120  LET V5 = C1 + (((ABS(A) - ABS(X)) + ABS(A)) / ABS(A))
    0x6272a17b7560 --------CA   10130  PRINT "DIRECTION ="; V5
    0x6272a17b7600 --------CA   10140  GOTO 10280
    0x6272a17b7c90 --------CA T 10150  PRINT "DIRECTION ="; C1 + (ABS(A) / ABS(X))
    0x6272a17b7d20 --------CA   10160  GOTO 10280
    0x6272a17b7f50 --------CA T 10170  IF A > 0 GOTO 10210
    0x6272a17b81c0 --------CA   10180  IF X = 0 GOTO 10230
    0x6272a17b8400 --------CA T 10190  LET C1 = 5
    0x6272a17b8470 --------CA   10200  GOTO 10110
    0x6272a17b8680 --------CA T 10210  LET C1 = 3
    0x6272a17b86f0 --------CA   10220  GOTO 10240
    0x6272a17b8920 --------CA T 10230  LET C1 = 7
    0x6272a17b8d30 --------CA T 10240  IF ABS(A) >= ABS(X) GOTO 10270
    0x6272a17b98b0 --------CA   10250  PRINT "DIRECTION ="; C1 + (((ABS(X) - ABS(A)) + ABS(X)) / ABS(X))
    0x6272a17b9950 --------CA   10260  GOTO 10280
    0x6272a17ba000 --------CA T 10270  PRINT "DIRECTION ="; C1 + (ABS(X) / ABS(A))
    0x6272a17ba670 --------CA T 10280  PRINT "DISTANCE ="; SQR(X ^ 2 + A ^ 2)
    0x6272a17ba8b0 --------CA   10290  IF H8 = 1 GOTO 3160
    0x6272a17baa10 --------CA T 10300  NEXT I
    0x6272a17baab0 --------CA   10310  GOTO 3160
    0x6272a17bace0 --------CA T 10320  IF B3 <> 0 GOTO 10350
    0x6272a17baed0 --------CA   10330  PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    0x6272a17baf70 --------CA   10340  GOTO 3160
    0x6272a17bb0d0 --------CA T 10350  PRINT "FROM ENTERPRISE TO STARBASE:"
    0x6272a17bb310 --------CA   10360  LET W1 = B4
    0x6272a17bb540 --------CA   10370  LET X = B5
    0x6272a17bb5d0 --------CA   10380  GOTO 9940
    0x6272a17bb650 ---------E   10390  REM *** END OF LIBRARY-COMPUTER CODE
    0x6272a17bb6e0 ---------E   10400  REM
    0x6272a17bb7e0 ---------E   10410  REM ===============================================================
    0x6272a17bb870 ---------E   10420  REM
    0x6272a17bb930 ---------E   10430  REM S/R FINDS RANDOM HOLE IN QUADRANT
    0x6272a17bbf40 ---------E B 10440  LET R1 = INT(RND(1) * 8 + 1)
    0x6272a17bc510 ---------E   10450  LET R2 = INT(RND(1) * 8 + 1)
    0x6272a17bc740 ---------E   10460  LET A$ = "   "
    0x6272a17bc970 ---------E   10470  LET Z1 = R1
    0x6272a17bcba0 ---------E   10480  LET Z2 = R2
    0x6272a17bcc20 ---------E   10490  GOSUB 10840
    0x6272a17bce50 ---------E   10500  IF Z3 = 0 GOTO 10440
    0x6272a17bced0 ---------E   10510  RETURN
    0x6272a17bcf50 ---------F   10520  REM
    0x6272a17bd050 ---------F   10530  REM ===============================================================
    0x6272a17bd0e0 ---------F   10540  REM
    0x6272a17bd1c0 ---------F G 10550  REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
    0x6272a17bd610 ---------F   10560  Z1 = INT(Z1 + .5)
    0x6272a17bda30 ---------F   10570  Z2 = INT(Z2 + .5)
    0x6272a17bdc60 ---------F   10580  IF Z1 < 1 GOTO 10700
    0x6272a17bded0 ---------F   10590  IF Z1 > 8 GOTO 10700
    0x6272a17be140 ---------F   10600  IF Z2 < 1 GOTO 10700
    0x6272a17be3b0 ---------F   10610  IF Z2 > 8 GOTO 10700
    0x6272a17be930 ---------F   10620  DIM Q9(24), A9(3)
    0x6272a17bec20 ---------F   10630  CHANGE Q$(Z1) TO Q9
    0x6272a17bee60 ---------F   10640  CHANGE A$ TO A9
    0x6272a17bf240 ---------F   10650  FOR I8 = 1 TO 3
    0x6272a17bf9a0 ---------F   10660  Q9(3 * (Z2 - 1) + I8) = A9(I8)
    0x6272a17bfad0 ---------F   10670  NEXT I8
    0x6272a17bfdf0 ---------F   10680  CHANGE Q9 TO Q$(Z1)
    0x6272a17bfe90 ---------F   10690  GOTO 10740
    0x6272a17bff30 ---------F T 10700  PRINT
    0x6272a17c04c0 ---------F   10710  PRINT "ERROR IN COORDINATES (Z1,Z2): ("; Z1; ","; Z2; ")"
    0x6272a17c0630 ---------F   10720  PRINT "     1 <=  Z1,Z2  <=8    "
    0x6272a17c06b0 ---------F   10730  PRINT
    0x6272a17c0710 ---------F T 10740  RETURN
    0x6272a17c0790 ---------G   10750  REM
    0x6272a17c0890 ---------G   10760  REM ===============================================================
    0x6272a17c0920 ---------G   10770  REM
    0x6272a17c09f0 ---------G G 10780  REM *** PRINTS DEVICE NAME FROM ARRAY ***
    0x6272a17c0c60 ---------G   10790  PRINT D$(R1);
    0x6272a17c0cc0 ---------G   10800  RETURN
    0x6272a17c0d40 ---------H   10810  REM
    0x6272a17c0e40 ---------H   10820  REM ===============================================================
    0x6272a17c0ed0 ---------H   10830  REM
    0x6272a17c0fa0 ---------H G 10840  REM *** STRING COMPARISON IN QUADRANT ARRAY ***
    0x6272a17c13f0 ---------H   10850  LET Z1 = INT(Z1 + .5)
    0x6272a17c1800 ---------H   10860  LET Z2 = INT(Z2 + .5)
    0x6272a17c1a40 ---------H   10870  LET Z3 = 0
    0x6272a17c2230 ---------H   10880  IF MID$(Q$(Z1), (3 * Z2 - 2), 3) <> A$ GOTO 10900
    0x6272a17c2470 ---------H   10890  Z3 = 1
    0x6272a17c24c0 ---------H T 10900  RETURN
    0x6272a17c2540 ---------I   10910  REM
    0x6272a17c2640 ---------I   10920  REM ===============================================================
    0x6272a17c26d0 ---------I   10930  REM
    0x6272a17c27c0 ---------I   10940  REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    0x6272a17c2890 ---------I   10950  REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)
    0x6272a17c2b90 ---------I G 10960  LET L2 = 2
    0x6272a17c2dc0 ---------I   10970  IF Z5 >= 5 GOTO 10990
    0x6272a17c3010 ---------I   10980  LET L2 = 1
    0x6272a17c3670 ---------I T 10990  LET L3 = 2 * (Z4 - 1) + L2
    0x6272a17c3990 ---------I   11000  LET G2$ = G1$(L3)
    0x6272a17c3bc0 ---------I   11010  IF G5 = 1 GOTO 11090
    0x6272a17c3e30 ---------I   11020  LET L3 = Z5
    0x6272a17c4060 ---------I   11030  IF Z5 <= 4 GOTO 11050
    0x6272a17c43c0 ---------I   11040  LET L3 = Z5 - 4
    0x6272a17c46c0 ---------I T 11050  LET G3$ = "IV"
    0x6272a17c48f0 ---------I   11060  IF L3 = 4 GOTO 11080
    0x6272a17c4df0 ---------I   11070  LET G3$ = MID$(G4$, 1, L3)
    0x6272a17c5260 ---------I T 11080  G2$ = G2$ + " " + G3$
    0x6272a17c52b0 ---------I T 11090  RETURN
    0x6272a17c5310 --------CA T 11100  STOP
    0x6272a17c5370 ---------A   11110  END
 */

