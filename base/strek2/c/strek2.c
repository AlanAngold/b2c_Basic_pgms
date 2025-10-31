/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/strek2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5645d394fdb0 ---------A   01000  REM (VERSION "STREK7", 1/12/75 RCL)
    0x5645d394eb80 ---------A   01010  REM
    0x5645d394ff30 ---------A   01020  REM
    0x5645d394fe70 ---------A   01030  REM ***         *** STAR TREK ***       ***
    0x5645d39518f0 ---------A   01040  REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    0x5645d39519d0 ---------A   01050  REM *** AS SEEN ON THE STAR TREK TV SHOW.
    0x5645d3951ac0 ---------A   01060  REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    0x5645d3951bb0 ---------A   01070  REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    0x5645d3951ca0 ---------A   01080  REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY 
    0x5645d3951940 ---------A   01090  REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974
    0x5645d3951df0 ---------A   01100  REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    0x5645d3951ee0 ---------A   01110  REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    0x5645d3951f60 ---------A   01120  REM *** ADDRESS TO:   R.C.LEEDOM
    0x5645d3952050 ---------A   01130  REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    0x5645d3952130 ---------A   01140  REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    0x5645d39521c0 ---------A   01150  RANDOMIZE
    0x5645d394d6d0 ---------A   01160  PRINT  TAB(15);"* * * STAR TREK * * *"
    0x5645d394d670 ---------A   01170  PRINT
    0x5645d3952380 ---------A   01180  PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    0x5645d39524f0 ---------A   01190  INPUT A$
    0x5645d3952630 ---------A   01200  IF A$<>"YES" GOTO 1280
    0x5645d3952760 ---------A   01210  PRINT "PLEASE WAIT  . . .";
    0x5645d39527e0 ---------A   01220  GOSUB 11111
    0x5645d3952850 ---------A   01240  REM
    0x5645d395d0a0 ---------A   01250  REM ===============================================================
    0x5645d395d130 ---------A   01260  REM
    0x5645d395d1e0 ---------A   01270  REM  PROGRAM BEGINS HERE .....
    0x5645d395d4d0 ---------A T 01280  DIM Q$(8)
    0x5645d395d870 ---------A   01290  FOR I = 1 TO 8
    0x5645d395dc50 ---------A   01300      Q$(I) = SPACE$(24)
    0x5645d395dd80 ---------A   01310  NEXT I
    0x5645d395ed20 ---------A   01320  DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8)
    0x5645d395f4b0 ---------A   01330  LET T=INT(RND(1)*20+20)*100
    0x5645d395fa90 ---------A   01340  LET P1=3.14159/4
    0x5645d395fd80 ---------A   01350  LET T0=T
    0x5645d3960050 ---------A   01360  LET T9=30
    0x5645d3960320 ---------A   01370  LET D0=0
    0x5645d39605f0 ---------A   01380  LET E0=3000
    0x5645d39608e0 ---------A   01390  LET E=E0
    0x5645d3960bb0 ---------A   01400  LET P=10
    0x5645d3960ea0 ---------A   01410  LET P0=P
    0x5645d3961170 ---------A   01420  LET S9=200
    0x5645d3961460 ---------A   01430  LET S=0
    0x5645d3962470 ---------A   01440  DEF FND(D)=SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5645d39624e0 ---------A   01450  REM
    0x5645d39625e0 ---------A   01460  REM ===============================================================
    0x5645d3962670 ---------A   01470  REM
    0x5645d3962730 ---------A   01480  REM INITIALIZE INTERPRISE'S POSITION
    0x5645d3962e00 ---------A   01490  LET Q1=INT(RND(1)*8+1)
    0x5645d39634a0 ---------A   01500  LET Q2=INT(RND(1)*8+1)
    0x5645d3963a80 ---------A   01510  LET S1=INT(RND(1)*8+1)
    0x5645d3964050 ---------A   01520  LET S2=INT(RND(1)*8+1)
    0x5645d3964320 ---------A   01530  MAT C=ZER
    0x5645d39646c0 ---------A   01540  LET C(4,1)=-1
    0x5645d3964a50 ---------A   01550  LET C(3,1)=-1
    0x5645d3964de0 ---------A   01560  LET C(2,1)=-1
    0x5645d3965170 ---------A   01570  LET C(4,2)=-1
    0x5645d3965500 ---------A   01580  LET C(5,2)=-1
    0x5645d3965890 ---------A   01590  LET C(6,2)=-1
    0x5645d3965c20 ---------A   01600  LET C(1,2)=1
    0x5645d3965fb0 ---------A   01610  LET C(2,2)=1
    0x5645d3966340 ---------A   01620  LET C(6,1)=1
    0x5645d39666d0 ---------A   01630  LET C(7,1)=1
    0x5645d3966a60 ---------A   01640  LET C(8,1)=1
    0x5645d3966df0 ---------A   01650  LET C(8,2)=1
    0x5645d3967590 ---------A   01660  LET C(9,2)=1
    0x5645d39677a0 ---------A   01670  DIM D(8)
    0x5645d3967a70 ---------A   01680  FOR I=1 TO 8
    0x5645d3967d70 ---------A   01690      LET D(I)=0
    0x5645d3967ea0 ---------A   01700  NEXT I
    0x5645d3968190 ---------A   01710  DIM D$(8)
    0x5645d3968230 ---------A   01720  RESTORE
    0x5645d3968fd0 ---------A   01730  READ D$(1),D$(2),D$(3),D$(4),D$(5),D$(6),D$(7),D$(8)
    0x5645d39693f0 ---------A   01740  DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    0x5645d39697e0 ---------A   01750  DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    0x5645d3969ad0 ---------A   01760  LET G4$="III"
    0x5645d3969da0 ---------A   01770  DIM G1$(16)
    0x5645d396a070 ---------A   01780  FOR I=1 TO 16
    0x5645d396a2b0 ---------A   01790      READ G1$(I)
    0x5645d396a3e0 ---------A   01800  NEXT I
    0x5645d396ab00 ---------A   01810  DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    0x5645d396aff0 ---------A   01820  DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    0x5645d396b3e0 ---------A   01830  DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    0x5645d396b6b0 ---------A   01840  LET B9=0
    0x5645d396b990 ---------A   01850  LET K9=0
    0x5645d396bc80 ---------A   01860  LET A1$="NSLPTSDCX"
    0x5645d396bcf0 ---------A   01870  REM
    0x5645d396bdf0 ---------A   01880  REM ===============================================================
    0x5645d396be80 ---------A   01890  REM
    0x5645d396bf40 ---------A   01900  REM  SET UP WHAT EXISTS IN GALAXY ...
    0x5645d396c230 ---------A   01910  FOR I=1 TO 8
    0x5645d396c5d0 ---------A   01920      FOR J=1 TO 8
    0x5645d396c9a0 ---------A   01930  	LET R1=RND(1)
    0x5645d396cbd0 ---------A   01940  	IF R1>.98 GOTO 1990
    0x5645d396ce40 ---------A   01950  	IF R1>.95 GOTO 2020
    0x5645d396d0b0 ---------A   01960  	IF R1>.8  GOTO 2050
    0x5645d396d3b0 ---------A   01970  	LET K3=0
    0x5645d396d420 ---------A   01980  	GOTO 2070
    0x5645d396d630 ---------A T 01990  	LET K3=3
    0x5645d396d960 ---------A   02000  	LET K9=K9+3
    0x5645d396d9d0 ---------A   02010  	GOTO 2070
    0x5645d396dbe0 ---------A T 02020  	LET K3=2
    0x5645d396df10 ---------A   02030  	LET K9=K9+2
    0x5645d396df80 ---------A   02040  	GOTO 2070
    0x5645d396e190 ---------A T 02050  	LET K3=1
    0x5645d396e4c0 ---------A   02060  	LET K9=K9+1
    0x5645d396e7c0 ---------A T 02070  	LET R1=RND(1)
    0x5645d396e9f0 ---------A   02080  	IF R1>.96 GOTO 2110
    0x5645d396ecf0 ---------A   02090  	LET B3=0
    0x5645d396ed60 ---------A   02100  	GOTO 2130
    0x5645d396ef70 ---------A T 02110  	LET B3=1
    0x5645d396f2b0 ---------A   02120  	LET B9=B9+1
    0x5645d396f950 ---------A T 02130  	LET S3=INT(RND(1)*8+1)
    0x5645d39701a0 ---------A   02140  	LET G(I,J)=K3*100+B3*10+S3
    0x5645d3970230 ---------A   02150  	REM K3=#KLINGONS B3=#STARBASES S3=#STARS
    0x5645d3970620 ---------A   02160  	LET Z(I,J)=0
    0x5645d3970750 ---------A   02170      NEXT J
    0x5645d39708a0 ---------A   02180  NEXT I
    0x5645d3970bb0 ---------A   02190  LET K7=K9
    0x5645d3970ea0 ---------A   02200  LET X$=""
    0x5645d39711a0 ---------A   02210  LET X0$=" IS "
    0x5645d39713d0 ---------A   02220  IF B9<>0 GOTO 2280
    0x5645d3971620 ---------A   02230  LET B9=1
    0x5645d39719d0 ---------A   02240  IF G(6,3)>=200 GOTO 2270
    0x5645d3972040 ---------A   02250  LET G(6,3)=G(6,3)+100
    0x5645d3972380 ---------A   02260  LET K9=K9+1
    0x5645d39729b0 ---------A T 02270  LET G(6,3)=G(6,3)+10
    0x5645d3972be0 ---------A T 02280  IF B9=1 GOTO 2330
    0x5645d3972e40 ---------A   02290  LET X$="S"
    0x5645d3973880 ---------A   02300  LET X0$=" ARE "
    0x5645d39739d0 ---------A   02310  PRINT " "
    0x5645d3973b50 ---------A   02320  PRINT " "
    0x5645d3973cc0 ---------A T 02330  PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    0x5645d3973e50 ---------A   02340  PRINT " "
    0x5645d3974200 ---------A   02350  PRINT "    DESTROY THE "K9" KLINGON WARSHIPS WHICH HAVE INVADED"
    0x5645d39743c0 ---------A   02360  PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x5645d3974b80 ---------A   02370  PRINT "  ON STARDATE"T0+T9"; THIS GIVES YOU"T9" DAYS.  THERE"X0$
    0x5645d3975100 ---------A   02380  PRINT " "B9"STARBASE";X$" IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    0x5645d3975290 ---------A   02390  PRINT " "
    0x5645d3975430 ---------A   02400  PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    0x5645d3975590 ---------A   02410  INPUT A$
    0x5645d3975610 ---------A   02420  REM
    0x5645d3975710 ---------A   02430  REM ===============================================================
    0x5645d39757a0 ---------A   02440  REM
    0x5645d3975870 ---------A   02450  REM *** HERE ANY TIME ENTER NEW QUADRANT ...
    0x5645d3975b80 ---------A T 02460  LET Z4=Q1
    0x5645d3975e70 ---------A   02470  LET Z5=Q2
    0x5645d3976080 ---------A   02480  LET K3=0
    0x5645d3976290 ---------A   02490  LET B3=0
    0x5645d39764a0 ---------A   02500  LET S3=0
    0x5645d3976770 ---------A   02510  LET G5=0
    0x5645d3976c20 ---------A   02520  LET D4=.5*RND(1)
    0x5645d3976fc0 ---------A   02530  FOR I7 = 1 TO 8
    0x5645d39773a0 ---------A   02540      Q$(I7)=SPACE$(24)
    0x5645d39774d0 ---------A   02550  NEXT I7
    0x5645d3977720 ---------A   02560  IF Q1<1 GOTO 2770
    0x5645d3977980 ---------A   02570  IF Q1>8 GOTO 2770
    0x5645d3977be0 ---------A   02580  IF Q2<1 GOTO 2770
    0x5645d3977e40 ---------A   02590  IF Q2>8 GOTO 2770
    0x5645d3977ee0 ---------A   02600  GOSUB 10960
    0x5645d3978040 ---------A   02610  PRINT " "
    0x5645d39782a0 ---------A   02620  IF T<>T0 GOTO 2660
    0x5645d3978490 ---------A   02630  PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    0x5645d39788c0 ---------A   02640  PRINT "IN THE GALACTIC QUADRANT, '"G2$"'."
    0x5645d3978960 ---------A   02650  GOTO 2670
    0x5645d3978cb0 ---------A T 02660  PRINT "NOW ENTERING "G2$" QUADRANT ..."
    0x5645d3978e20 ---------A T 02670  PRINT " "
    0x5645d39793e0 ---------A   02680  LET X=G(Q1,Q2)*.01
    0x5645d3979700 ---------A   02690  LET K3=INT(X)
    0x5645d3979c90 ---------A   02700  LET B3=INT((X-K3)*10)
    0x5645d397a640 ---------A   02710  LET S3=G(Q1,Q2)-INT(G(Q1,Q2)*.1)*10
    0x5645d397a870 ---------A   02720  IF K3=0 GOTO 2760
    0x5645d397aa30 ---------A   02730  PRINT "COMBAT AREA      CONDITION RED"
    0x5645d397ac70 ---------A   02740  IF S>200 GOTO 2760
    0x5645d397ae20 ---------A   02750  PRINT "   SHIELDS DANGEROUSLY LOW"
    0x5645d397b040 ---------A T 02760  MAT K=ZER
    0x5645d397b320 ---------A T 02770  FOR I=1 TO 3
    0x5645d397b6e0 ---------A   02780      LET K(I,3)=0
    0x5645d397b810 ---------A   02790  NEXT I
    0x5645d397b8a0 ---------A   02800  REM
    0x5645d397b9a0 ---------A   02810  REM ===============================================================
    0x5645d397ba30 ---------A   02820  REM
    0x5645d397bb20 ---------A   02830  REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS
    0x5645d397bbf0 ---------A   02840  REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    0x5645d397be40 ---------A   02850  LET A$="<*>"
    0x5645d397c130 ---------A   02860  LET Z1=S1
    0x5645d397c420 ---------A   02870  LET Z2=S2
    0x5645d397c490 ---------A   02880  GOSUB 10550
    0x5645d397c780 ---------A   02890  FOR I=1 TO K3
    0x5645d397c800 ---------A   02900      GOSUB 10440
    0x5645d397ca30 ---------A   02910      LET A$="+++"
    0x5645d397cc60 ---------A   02920      LET Z1=R1
    0x5645d397cf50 ---------A   02930      LET Z2=R2
    0x5645d397cfc0 ---------A   02940      GOSUB 10550
    0x5645d397d390 ---------A   02950      LET K(I,1)=R1
    0x5645d397d770 ---------A   02960      LET K(I,2)=R2
    0x5645d397db20 ---------A   02970      LET K(I,3)=200
    0x5645d397dc50 ---------A   02980  NEXT I
    0x5645d397df60 ---------A   02990  FOR I=1 TO B3
    0x5645d397dfe0 ---------A   03000      GOSUB 10440
    0x5645d397e210 ---------A   03010      LET A$=">!<"
    0x5645d397e440 ---------A   03020      LET Z1=R1
    0x5645d397e670 ---------A   03030      LET Z2=R2
    0x5645d397e6e0 ---------A   03040      GOSUB 10550
    0x5645d397e9d0 ---------A   03050      LET B4=Z1
    0x5645d397ecc0 ---------A   03060      LET B5=Z2
    0x5645d397edf0 ---------A   03070  NEXT I
    0x5645d397f100 ---------A   03080  FOR I=1 TO S3
    0x5645d397f180 ---------A   03090      GOSUB 10440
    0x5645d397f3b0 ---------A   03100      LET A$=" * "
    0x5645d397f5e0 ---------A   03110      LET Z1=R1
    0x5645d397f810 ---------A   03120      LET Z2=R2
    0x5645d397f880 ---------A   03130      GOSUB 10550
    0x5645d397f9b0 ---------A   03140  NEXT I
    0x5645d397fa50 ---------A T 03150  GOSUB 8070
    0x5645d397fda0 ---------A T 03160  IF S+E<=10 GOTO 3190
    0x5645d3980000 ---------A   03170  IF E>10 GOTO 3230
    0x5645d3980330 ---------A   03180  IF D(7)>=0 GOTO 3230
    0x5645d39809e0 ---------A T 03190  PRINT CHR$(7)"** FATAL ERROR **"CHR$(7)"   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    0x5645d3980bb0 ---------A   03200  PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    0x5645d3980d40 ---------A   03210  PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    0x5645d3980dc0 ---------A   03220  GOTO 7850
    0x5645d3980f30 ---------A T 03230  PRINT "COMMAND";
    0x5645d3981090 ---------A   03240  INPUT A$
    0x5645d3981390 ---------A   03250  FOR I=1 TO 9
    0x5645d3981ad0 ---------A   03260      IF MID$(A$,1,1)<>MID$(A1$,I,1) GOTO 3320
    0x5645d3981d40 ---------A   03270      IF I<>2 GOTO 3310
    0x5645d3982090 ---------A   03280      IF LEN(A$)<2 GOTO 3310
    0x5645d3982580 ---------A   03290      IF MID$(A$,2,1)="R" GOTO 3310
    0x5645d3982800 ---------A   03300      LET I=6
    0x5645d3983010 ---------A T 03310      ON I GOTO 3490, 3150, 5380, 5670, 6140, 7080, 7270, 8950, 7880
    0x5645d3983150 ---------A T 03320  NEXT I
    0x5645d3983300 ---------A   03330  PRINT "ENTER ONE OF THE FOLLOWING:"
    0x5645d3983480 ---------A   03340  PRINT "  NAV (TO SET COURSE)"
    0x5645d3983610 ---------A   03350  PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    0x5645d3983790 ---------A   03360  PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    0x5645d3983920 ---------A   03370  PRINT "  PHA (TO FIRE PHASERS)"
    0x5645d3983ab0 ---------A   03380  PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    0x5645d3983c40 ---------A   03390  PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    0x5645d3983dd0 ---------A   03400  PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    0x5645d3983f60 ---------A   03410  PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    0x5645d39840d0 ---------A   03420  PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    0x5645d3984230 ---------A   03430  PRINT " "
    0x5645d39842b0 ---------A   03440  GOTO 3160
    0x5645d3984320 ---------A   03450  REM
    0x5645d3984420 ---------A   03460  REM ===============================================================
    0x5645d39844b0 ---------A   03470  REM
    0x5645d3984560 ---------A   03480  REM  COURSE CONTROL BEGINS HERE
    0x5645d3984700 ---------A T 03490  PRINT "COURSE(1-9)";
    0x5645d3984930 ---------A   03500  INPUT C1
    0x5645d3984b70 ---------A   03510  IF C1>=1 GOTO 3540
    0x5645d3984d40 ---------A T 03520  PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5645d3984dc0 ---------A   03530  GOTO 3160
    0x5645d3984ff0 ---------A T 03540  IF C1<9 GOTO 3570
    0x5645d3985250 ---------A   03550  IF C1>9 GOTO 3520
    0x5645d3985300 ---------A   03560  GOTO 3520
    0x5645d3985470 ---------A T 03570  PRINT "WARP FACTOR (0-8)";
    0x5645d3973060 ---------A   03580  INPUT W1
    0x5645d39732a0 ---------A   03590  IF W1 > 0 GOTO 3630
    0x5645d3973480 ---------A   03600  PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    0x5645d3986620 ---------A   03610  PRINT "          SET WARP "W1" !"
    0x5645d39866b0 ---------A   03620  GOTO 3160
    0x5645d39868e0 ---------A T 03630  IF W1<=8 GOTO 3670
    0x5645d3986ac0 ---------A   03640  PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    0x5645d3986e20 ---------A   03650  PRINT "         TAKE WARP "W1"!/"
    0x5645d3986eb0 ---------A   03660  GOTO 3160
    0x5645d39871a0 ---------A T 03670  IF D(1)>=0 GOTO 3710
    0x5645d3987410 ---------A   03680  IF W1<=0.2 GOTO 3710
    0x5645d39875e0 ---------A   03690  PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    0x5645d3987670 ---------A   03700  GOTO 3490
    0x5645d3987b90 ---------A T 03710  LET N=INT(W1*8+.5)
    0x5645d3987ee0 ---------A   03720  IF E-N>=0 GOTO 3840
    0x5645d39880d0 ---------A   03730  PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x5645d3988450 ---------A   03740  PRINT "   FOR MANEUVERING AT WARP"W1"!'"
    0x5645d39887d0 ---------A   03750  IF S<N-E GOTO 3160
    0x5645d3988b00 ---------A   03760  IF D(7)<0 GOTO 3160
    0x5645d3988ef0 ---------A   03770  PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"S" UNITS"
    0x5645d3989070 ---------A   03780  PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    0x5645d39890f0 ---------A   03790  GOTO 7080
    0x5645d3989160 ---------A   03800  REM
    0x5645d3989260 ---------A   03810  REM ===============================================================
    0x5645d39892f0 ---------A   03820  REM
    0x5645d39893c0 ---------A   03830  REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...
    0x5645d39896e0 ---------A T 03840  FOR I=1 TO K3
    0x5645d3989aa0 ---------A   03850      IF K(1,3)<=0 GOTO 3950
    0x5645d3989d00 ---------A   03860      LET A$="   "
    0x5645d398a0d0 ---------A   03870      LET Z1=K(I,1)
    0x5645d398a4a0 ---------A   03880      LET Z2=K(I,2)
    0x5645d398a510 ---------A   03890      GOSUB 10550
    0x5645d398a580 ---------A   03900      GOSUB 10440
    0x5645d398a950 ---------A   03910      LET K(I,1)=Z1
    0x5645d398ad20 ---------A   03920      LET K(I,2)=Z2
    0x5645d398af50 ---------A   03930      LET A$="+++"
    0x5645d398afc0 ---------A   03940      GOSUB 10550
    0x5645d398b0f0 ---------A T 03950  NEXT I
    0x5645d398b180 ---------A   03960  GOSUB 7610
    0x5645d398b450 ---------A   03970  LET D1=0
    0x5645d398b740 ---------A   03980  LET D6=W1
    0x5645d398b970 ---------A   03990  IF W1<1 GOTO 4050
    0x5645d398bbb0 ---------A   04000  LET D6=1
    0x5645d398bc20 ---------A   04010  REM
    0x5645d398bd20 ---------A   04020  REM ===============================================================
    0x5645d398bdb0 ---------A   04030  REM
    0x5645d398be60 ---------A   04040  REM MAKE REPAIRS TO SHIP
    0x5645d398c160 ---------A T 04050  FOR I=1 TO 8
    0x5645d398c480 ---------A   04060      IF D(I)>=0 GOTO 4160
    0x5645d398c9c0 ---------A   04070      LET D(I)=D(I)+6
    0x5645d398ccd0 ---------A   04080      IF D(I)<0 GOTO 4160
    0x5645d398cf40 ---------A   04090      IF D1=1 GOTO 4120
    0x5645d398d1a0 ---------A   04100      LET D1=1
    0x5645d398d300 ---------A   04110      PRINT "DAMAGE CONTROL REPORT:"
    0x5645d398d4c0 ---------A T 04120      PRINT TAB(8);
    0x5645d398d700 ---------A   04130      LET R1=I
    0x5645d398d780 ---------A   04140      GOSUB 10780
    0x5645d398d8d0 ---------A   04150      PRINT " REPAIR COMPLETED"
    0x5645d398da10 ---------A T 04160  NEXT I
    0x5645d398daa0 ---------A   04170  REM
    0x5645d398dba0 ---------A   04180  REM ===============================================================
    0x5645d398dc30 ---------A   04190  REM
    0x5645d398dcf0 ---------A   04200  REM DAMAGE/IMPROVEMENT DURING SOME VES
    0x5645d398e010 ---------A   04210  IF RND(1)>.2 GOTO 4410
    0x5645d398e630 ---------A   04220  LET R1=INT(RND(1)*8+1)
    0x5645d398e920 ---------A   04230  IF RND(1)>=.6 GOTO 4310
    0x5645d398f170 ---------A   04240  LET D(R1)=D(R1)-(RND(1)*5+1)
    0x5645d398f2d0 ---------A   04250  PRINT " "
    0x5645d398f460 ---------A   04260  PRINT "DAMAGE CONTROL REPORT:";
    0x5645d398f4e0 ---------A   04270  GOSUB 10780
    0x5645d398f630 ---------A   04280  PRINT " DAMAGED"
    0x5645d398f790 ---------A   04290  PRINT " "
    0x5645d398f820 ---------A   04300  GOTO 4410
    0x5645d3990030 ---------A T 04310  LET D(R1)=D(R1)+(RND(1)*3+1)
    0x5645d3990190 ---------A   04320  PRINT " "
    0x5645d3990320 ---------A   04330  PRINT "DAMAGE CONTROL REPORT:";
    0x5645d39903b0 ---------A   04340  GOSUB 10780
    0x5645d3990510 ---------A   04350  PRINT " STATE OF REPAIR IMPROVED"
    0x5645d3990670 ---------A   04360  PRINT " "
    0x5645d39906f0 ---------A   04370  REM
    0x5645d39907f0 ---------A   04380  REM ===============================================================
    0x5645d3990880 ---------A   04390  REM
    0x5645d3990930 ---------A   04400  REM BEGIN MOVING STARSHIP **
    0x5645d3990b80 ---------A T 04410  LET A$="   "
    0x5645d3990e90 ---------A   04420  LET Z1=INT(S1)
    0x5645d39911a0 ---------A   04430  LET Z2=INT(S2)
    0x5645d3991220 ---------A   04440  GOSUB 10550
    0x5645d3991850 ---------A   04450  LET X1=-SIN((C1-1)*P1)
    0x5645d3991a80 ---------A   04460  LET X=S1
    0x5645d3991d80 ---------A   04470  LET Y=S2
    0x5645d39923b0 ---------A   04480  LET X2= COS((C1-1)*P1)
    0x5645d39926a0 ---------A   04490  LET Q4=Q1
    0x5645d3992990 ---------A   04500  LET Q5=Q2
    0x5645d3992c80 ---------A   04510  FOR I=1 TO N
    0x5645d3992fe0 ---------A   04520      LET S1=S1+X1
    0x5645d3993340 ---------A   04530      LET S2=S2+X2
    0x5645d3993570 ---------A   04540      IF S1<0.5 GOTO 4800
    0x5645d39937e0 ---------A   04550      IF S1>=8.5 GOTO 4800
    0x5645d3993a50 ---------A   04560      IF S2<0.5 GOTO 4800
    0x5645d3993cc0 ---------A   04570      IF S2>=8.5 GOTO 4800
    0x5645d39948d0 ---------A   04580      IF MID$(Q$(INT(S1+.5)),(3*INT(S2+.5)-2),3) = "   " GOTO 4640
    0x5645d3994c50 ---------A   04590      LET S1=S1-X1
    0x5645d3994fd0 ---------A   04600      LET S2=S2-X2
    0x5645d3995450 ---------A   04610      PRINT "WARP ENGINES SHUT DOWN AT SECTOR "INT(S1+.5);
    0x5645d39959a0 ---------A   04620      PRINT ","INT(S2+.5)" DUE TO BAD NAVIGATION"
    0x5645d3995a20 ---------A   04630      GOTO 4650
    0x5645d3995b50 ---------A T 04640  NEXT I
    0x5645d3995da0 ---------A T 04650  LET A$="<*>"
    0x5645d39961b0 ---------A   04660  S1=INT(S1+0.5)
    0x5645d39965c0 ---------A   04670  S2=INT(S2+0.5)
    0x5645d39968d0 ---------A   04680  LET Z1=INT(S1)
    0x5645d3996be0 ---------A   04690  LET Z2=INT(S2)
    0x5645d3996c50 ---------A   04700  GOSUB 10550
    0x5645d3996cc0 ---------A   04710  GOSUB 5260
    0x5645d3996fa0 ---------A   04720  LET T8=1
    0x5645d39971d0 ---------A   04730  IF W1>=1 GOTO 4750
    0x5645d3997720 ---------A   04740  LET T8=.1*INT(10*W1)
    0x5645d3997a80 ---------A T 04750  LET T=T+T8
    0x5645d3997df0 ---------A   04760  IF T>T0+T9 GOTO 7830
    0x5645d3997ec0 ---------A   04770  REM SEE IF DOCKED, THEN GET COMMAND
    0x5645d3997f60 ---------A   04780  GOTO 3150
    0x5645d3997fe0 ---------A   04790  REM EXCEEDED QUADRANT LIMITS
    0x5645d3998690 ---------A T 04800  LET X=8*Q1+X+N*X1
    0x5645d3998d20 ---------A   04810  LET Y=8*Q2+Y+N*X2
    0x5645d3999130 ---------A   04820  LET Q1=INT(X/8)
    0x5645d3999550 ---------A   04830  LET Q2=INT(Y/8)
    0x5645d3999a90 ---------A   04840  LET S1=INT(X-Q1*8)
    0x5645d3999fc0 ---------A   04850  LET S2=INT(Y-Q2*8)
    0x5645d399a2a0 ---------A   04860  LET X5=0
    0x5645d399a4d0 ---------A   04870  IF S1<>0 GOTO 4910
    0x5645d399a830 ---------A   04880  LET Q1=Q1-1
    0x5645d399aa40 ---------A   04890  LET S1=8
    0x5645d399ac60 ---------A   04900  LET X5=0
    0x5645d399ae90 ---------A T 04910  IF S2<>0 GOTO 4950
    0x5645d399b1f0 ---------A   04920  LET Q2=Q2-1
    0x5645d399b400 ---------A   04930  LET S2=8
    0x5645d399b620 ---------A   04940  LET X5=0
    0x5645d399b850 ---------A T 04950  IF Q1>=1 GOTO 4990
    0x5645d399ba90 ---------A   04960  LET X5=1
    0x5645d399bca0 ---------A   04970  LET Q1=1
    0x5645d399bec0 ---------A   04980  LET S1=1
    0x5645d399c0f0 ---------A T 04990  IF Q1<=8 GOTO 5030
    0x5645d399c330 ---------A   05000  LET X5=1
    0x5645d399c540 ---------A   05010  LET Q1=8
    0x5645d399c760 ---------A   05020  LET S1=8
    0x5645d399c990 ---------A T 05030  IF Q2>=1 GOTO 5070
    0x5645d399cbd0 ---------A   05040  LET X5=1
    0x5645d399cde0 ---------A   05050  LET Q2=1
    0x5645d399d000 ---------A   05060  LET S2=1
    0x5645d399d230 ---------A T 05070  IF Q2<=8 GOTO 5110
    0x5645d399d470 ---------A   05080  LET X5=1
    0x5645d399d680 ---------A   05090  LET Q2=8
    0x5645d399d890 ---------A   05100  LET S2=8
    0x5645d399dac0 ---------A T 05110  IF X5=0 GOTO 5180
    0x5645d399dcc0 ---------A   05120  PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    0x5645d399de80 ---------A   05130  PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    0x5645d399e030 ---------A   05140  PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    0x5645d399e1e0 ---------A   05150  PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x5645d399eb50 ---------A   05160  PRINT "   AT SECTOR "S1","S2" OF QUADRANT "Q1","Q2".'"
    0x5645d399eed0 ---------A   05170  IF T>T0+T9 GOTO 7830
    0x5645d399f5a0 ---------A T 05180  IF 8*Q1+Q2=8*Q4+Q5 GOTO 4650
    0x5645d399f900 ---------A   05190  LET T=T+1
    0x5645d399f970 ---------A   05200  GOSUB 5260
    0x5645d399f9e0 ---------A   05210  GOTO 2460
    0x5645d399fa50 ---------B   05220  REM
    0x5645d399fb50 ---------B   05230  REM ===============================================================
    0x5645d399fbe0 ---------B   05240  REM
    0x5645d399fc90 ---------B   05250  REM MANEUVER ENERGY S/R ***
    0x5645d39a0100 ---------B G 05260  LET E=E-N-10
    0x5645d39a0330 ---------B   05270  IF E>=0 GOTO 5330
    0x5645d39a0510 ---------B   05280  PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    0x5645d39a0870 ---------B   05290  LET S=S+E
    0x5645d39a0a80 ---------B   05300  LET E=0
    0x5645d39a0cb0 ---------B   05310  IF S>0 GOTO 5330
    0x5645d39a0ef0 ---------B   05320  LET S=0
    0x5645d39a0f40 ---------B T 05330  RETURN
    0x5645d39a0fc0 ---------A   05340  REM
    0x5645d39a10c0 ---------A   05350  REM ===============================================================
    0x5645d39a1150 ---------A   05360  REM
    0x5645d39a1200 ---------A   05370  REM L.R. SENSOR SCAN CODE ***
    0x5645d39a1520 ---------A T 05380  IF D(3)>=0 GOTO 5410
    0x5645d39a16d0 ---------A   05390  PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x5645d39a1780 ---------A   05400  GOTO 3160
    0x5645d39a1bf0 ---------A T 05410  PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"Q1","Q2
    0x5645d39a1ef0 ---------A   05420  LET O1$="..................."
    0x5645d39a2050 ---------A   05430  PRINT O1$
    0x5645d39a2580 ---------A   05440  FOR I=Q1-1 TO Q1+1
    0x5645d39a2600 ---------A   05450      REM    DIM N(3)
    0x5645d39a29b0 ---------A   05460      FOR I1=1 TO 3
    0x5645d39a2cb0 ---------A   05470  	LET N(I1)=0
    0x5645d39a2de0 ---------A   05480      NEXT I1
    0x5645d39a3320 ---------A   05490      FOR J=Q2-1 TO Q2+1
    0x5645d39a3560 ---------A   05500  	IF I<1 GOTO 5580
    0x5645d39a37c0 ---------A   05510  	IF I>8 GOTO 5580
    0x5645d39a3a20 ---------A   05520  	IF J<1 GOTO 5560
    0x5645d39a3c80 ---------A   05530  	IF J>8 GOTO 5560
    0x5645d39a43c0 ---------A   05540  	LET N(J-Q2+2)=G(I,J)
    0x5645d39a4970 ---------A   05550  	LET Z(I,J)=G(I,J)
    0x5645d39a4aa0 ---------A T 05560      NEXTJ
    0x5645d39a4b40 ---------A   05570      REM   DIM P1$(20)
    0x5645d39a4e80 ---------A T 05580      LET P1$=": ### : ### : ### :"
    0x5645d39a54f0 ---------A   05590      PRINT USING P1$,N(1),N(2),N(3)
    0x5645d39a5650 ---------A   05600      PRINT O1$
    0x5645d39a5790 ---------A   05610  NEXT I
    0x5645d39a5820 ---------A   05620  GOTO 3160
    0x5645d39a5890 ---------A   05630  REM
    0x5645d39a5990 ---------A   05640  REM ===============================================================
    0x5645d39a5a20 ---------A   05650  REM
    0x5645d39a5ae0 ---------A   05660  REM *** PHASER CONTROL CODE BEGINS HERE
    0x5645d39a5d30 ---------A T 05670  IF K3>0 GOTO 5710
    0x5645d39a5f20 ---------A   05680  PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    0x5645d39a6090 ---------A   05690  PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    0x5645d39a6120 ---------A   05700  GOTO 3160
    0x5645d39a6410 ---------A T 05710  IF D(4)>=0 GOTO 5740
    0x5645d39a65a0 ---------A   05720  PRINT "PHASERS INOPERATIVE"
    0x5645d39a6630 ---------A   05730  GOTO 3160
    0x5645d39a6920 ---------A T 05740  IF D(8)>=0 GOTO 5760
    0x5645d39a6af0 ---------A   05750  PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    0x5645d39a6c70 ---------A T 05760  PRINT "PHASERS LOCKED ON TARGET;  "
    0x5645d39a6ee0 ---------A T 05770  PRINT "ENERGY AVAILABLE ="E
    0x5645d39a7070 ---------A   05780  PRINT "NUMBER OF UNITS TO FIRE:";
    0x5645d39a71d0 ---------A   05790  INPUT X
    0x5645d39a7410 ---------A   05800  IF X<=0 GOTO 3160
    0x5645d39a77a0 ---------A   05810  IF E-X<0 GOTO 5770
    0x5645d39a7b20 ---------A   05820  LET E=E-X
    0x5645d39a7ba0 ---------A   05830  GOSUB 7610
    0x5645d39a7e90 ---------A   05840  IF D(7)>=0 GOTO 5860
    0x5645d39a82d0 ---------A   05850  LET X=X*RND(1)
    0x5645d39a87c0 ---------A T 05860  LET H1=INT(X/K3)
    0x5645d39a8aa0 ---------A   05870  FOR I=1 TO 3
    0x5645d39a8e80 ---------A   05880      IF K(I,3)<=0 GOTO 6080
    0x5645d39a97f0 ---------A   05890      LET H=INT((H1/FND(0))*(RND(1)*2))
    0x5645d39a9ce0 ---------A   05900      IF H>.15*K(I,3) GOTO 5940
    0x5645d39a9eb0 ---------A   05910      PRINT "SENSORS SHOW NO DAMAGE"
    0x5645d39aa650 ---------A   05920      PRINT "    TO ENEMY AT "K(I,1)","K(I,2)
    0x5645d39aa6e0 ---------A   05930      GOTO 6080
    0x5645d39aada0 ---------A T 05940      LET K(I,3)=K(I,3)-H
    0x5645d39ab650 ---------A   05950      PRINT H" UNIT HIT ON KLINGON AT SECTOR "K(I,1)","K(I,2)
    0x5645d39aba30 ---------A   05960      IF K(I,3)<=0 GOTO 5990
    0x5645d39abf80 ---------A   05970      PRINT "   (SENSORS SHOW"K(I,3)" UNITS REMAINING)"
    0x5645d39ac020 ---------A   05980      GOTO 6080
    0x5645d39ac180 ---------A T 05990      PRINT " *** KLINGON DESTROYED ***"
    0x5645d39ac4c0 ---------A   06000      LET K3=K3-1
    0x5645d39ac7f0 ---------A   06010      LET K9=K9-1
    0x5645d39aca20 ---------A   06020      A$="   "
    0x5645d39acdf0 ---------A   06030      LET Z1=K(I,1)
    0x5645d39ad1c0 ---------A   06040      LET Z2=K(I,2)
    0x5645d39ad240 ---------A   06050      GOSUB 10550
    0x5645d39ada80 ---------A   06060      LET G(Q1,Q2)=K3*100+B3*10+S3
    0x5645d39adcb0 ---------A   06070      IF K9<=0 GOTO 7980
    0x5645d39ade10 ---------A T 06080  NEXT I
    0x5645d39adea0 ---------A   06090  GOTO 3160
    0x5645d39adf10 ---------A   06100  REM
    0x5645d39ae010 ---------A   06110  REM ===============================================================
    0x5645d39ae0a0 ---------A   06120  REM
    0x5645d39ae160 ---------A   06130  REM PHOTON TORPEDO CODE BEGINS ***
    0x5645d3985770 ---------A T 06140  IF D(5)>=0 GOTO 6170
    0x5645d3985920 ---------A   06150  PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    0x5645d39859a0 ---------A   06160  GOTO 3160
    0x5645d3985bd0 ---------A T 06170  IF P>0 GOTO 6200
    0x5645d3985d80 ---------A   06180  PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x5645d3985e10 ---------A   06190  GOTO 3160
    0x5645d3985f80 ---------A T 06200  PRINT "TORPEDO COURSE (1-9)";
    0x5645d39860f0 ---------A   06210  INPUT C1
    0x5645d3986330 ---------A   06220  IF C1>=1 GOTO 6250
    0x5645d39b0210 ---------A T 06230  PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5645d39b0290 ---------A   06240  GOTO 3160
    0x5645d39b04c0 ---------A T 06250  IF C1>9 GOTO 6230
    0x5645d39b0720 ---------A   06260  IF C1<9 GOTO 6290
    0x5645d39b0990 ---------A   06270  IF C1>=9 GOTO 6200
    0x5645d39b0be0 ---------A   06280  LET C1=1
    0x5645d39b1160 ---------A T 06290  LET X1=-SIN((C1-1)*P1)
    0x5645d39b16e0 ---------A   06300  LET X2= COS((C1-1)*P1)
    0x5645d39b1b10 ---------A   06310  IF ABS(X1)<ABS(X2) THEN 6360
    0x5645d39b1ff0 ---------A   06320  M9=ABS(1/X1)
    0x5645d39b2300 ---------A   06330  X1=SGN(X1)
    0x5645d39b2650 ---------A   06340  X2=X2*M9
    0x5645d39b26c0 ---------A   06350  GOTO 6390
    0x5645d39b2ad0 ---------A T 06360  M9=ABS(1/X2)
    0x5645d39b2de0 ---------A   06370  X2=SGN(X2)
    0x5645d39b3130 ---------A   06380  X1=X1*M9
    0x5645d39b3460 ---------A T 06390  LET E=E-2
    0x5645d39b3690 ---------A   06400  LET X=S1
    0x5645d39b38c0 ---------A   06410  LET Y=S2
    0x5645d39b3c00 ---------A   06420  LET P=P-1
    0x5645d39b3d50 ---------A   06430  PRINT "TORPEDO TRACK:"
    0x5645d39b40b0 ---------A T 06440  LET X=X+X1
    0x5645d39b4400 ---------A   06450  LET Y=Y+X2
    0x5645d39b48d0 ---------A   06460  LET X9=INT(X+.5)
    0x5645d39b4da0 ---------A   06470  LET Y9=INT(Y+.5)
    0x5645d39b4fd0 ---------A   06480  IF X9<1 GOTO 7010
    0x5645d39b5240 ---------A   06490  IF X9>=9 GOTO 7010
    0x5645d39b54a0 ---------A   06500  IF Y9<1 GOTO 7010
    0x5645d39b5710 ---------A   06510  IF Y9>=9 GOTO 7010
    0x5645d39b5ba0 ---------A   06520  PRINT "               "X9","Y9
    0x5645d39b5de0 ---------A   06530  LET A$="   "
    0x5645d39b6010 ---------A   06540  LET Z1=X9
    0x5645d39b6240 ---------A   06550  LET Z2=Y9
    0x5645d39b62c0 ---------A   06560  GOSUB 10840
    0x5645d39b65b0 ---------A   06570  IF Z3<>0 GOTO 6440
    0x5645d39b6810 ---------A   06580  LET A$="+++"
    0x5645d39b6a40 ---------A   06590  LET Z1=X9
    0x5645d39b6c70 ---------A   06600  LET Z2=Y9
    0x5645d39b6ce0 ---------A   06610  GOSUB 10840
    0x5645d39b6f10 ---------A   06620  IF Z3=0 GOTO 6730
    0x5645d39b70b0 ---------A   06630  PRINT "*** KLINGON DESTROYED ***"
    0x5645d39b73f0 ---------A   06640  LET K3=K3-1
    0x5645d39b7730 ---------A   06650  LET K9=K9-1
    0x5645d39b7960 ---------A   06660  IF K9<=0 GOTO 7980
    0x5645d39b7c70 ---------A   06670  FOR I=1 TO 3
    0x5645d39b8070 ---------A   06680      IF X9<>K(I,1) GOTO 6700
    0x5645d39b84a0 ---------A   06690      IF Y9=K(I,2) GOTO 6710
    0x5645d39b8600 ---------A T 06700  NEXT I
    0x5645d39b89d0 ---------A T 06710  LET K(I,3)=0
    0x5645d39b8a40 ---------A   06720  GOTO 6950
    0x5645d39b8c70 ---------A T 06730  LET A$=" * "
    0x5645d39b8ea0 ---------A   06740  LET Z1=X9
    0x5645d39b90d0 ---------A   06750  LET Z2=Y9
    0x5645d39b9140 ---------A   06760  GOSUB 10840
    0x5645d39b9370 ---------A   06770  IF Z3=0 GOTO 6800
    0x5645d39b9930 ---------A   06780  PRINT "STAR AT"X9;","Y9;" ABSORBED TORPEDO ENERGY."
    0x5645d39b99b0 ---------A   06790  GOTO 7020
    0x5645d39b9be0 ---------A T 06800  LET A$=">!<"
    0x5645d39b9e10 ---------A   06810  LET Z1=X9
    0x5645d39ba040 ---------A   06820  LET Z2=Y9
    0x5645d39ba0b0 ---------A   06830  GOSUB 10840
    0x5645d39ba2e0 ---------A   06840  IF Z3=0 GOTO 6200
    0x5645d39ba490 ---------A   06850  PRINT "*** STARBASE DESTROYED ***"
    0x5645d39ba7d0 ---------A   06860  LET B3=B3-1
    0x5645d39bab00 ---------A   06870  LET B9=B9-1
    0x5645d39bad30 ---------A   06880  IF B9>0 GOTO 6920
    0x5645d39baf60 ---------A   06890  PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    0x5645d39bb0f0 ---------A   06900  PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    0x5645d39bb1a0 ---------A   06910  GOTO 7880
    0x5645d39bb320 ---------A T 06920  PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x5645d39bb480 ---------A   06930  PRINT "   COURT MARTIAL!"
    0x5645d39bb6a0 ---------A   06940  LET D0=0
    0x5645d39bb8d0 ---------A T 06950  LET A$="   "
    0x5645d39bbb00 ---------A   06960  LET Z1=X9
    0x5645d39bbd30 ---------A   06970  LET Z2=Y9
    0x5645d39bbdb0 ---------A   06980  GOSUB 10550
    0x5645d39bc5e0 ---------A   06990  LET G(Q1,Q2)=K3*100+B3*10+S3
    0x5645d39bc660 ---------A   07000  GOTO 7020
    0x5645d39bc7b0 ---------A T 07010  PRINT "TORPEDO MISSED"
    0x5645d39bc830 ---------A T 07020  GOSUB 7610
    0x5645d39bc8a0 ---------A   07030  GOTO 3160
    0x5645d39bc910 ---------A   07040  REM
    0x5645d39bca10 ---------A   07050  REM ===============================================================
    0x5645d39bcaa0 ---------A   07060  REM
    0x5645d39bcb60 ---------A   07070  REM *** SHIELD CONTROL STARTS HERE
    0x5645d39bce80 ---------A T 07080  IF D(7)>=0 GOTO 7110
    0x5645d39bd020 ---------A   07090  PRINT "SHIELD CONTROL INOPERABLE"
    0x5645d39bd0d0 ---------A   07100  GOTO 3160
    0x5645d39bd550 ---------A T 07110  PRINT "ENERGY AVAILABLE ="E+5". NUMBER OF UNITS TO SHIELDS:";
    0x5645d39bd6b0 ---------A   07120  INPUT X
    0x5645d39bd8f0 ---------A   07130  IF X>=0 GOTO 7170
    0x5645d39bdb70 ---------A   07140  IF S<>X GOTO 7170
    0x5645d39bdd00 ---------A   07150  PRINT "(SHIELDS UNCHANGED)"
    0x5645d39bdd90 ---------A   07160  GOTO 3160
    0x5645d39be200 ---------A T 07170  IF E+S-X<0 GOTO 7110
    0x5645d39be6a0 ---------A   07180  LET E=E+S-X
    0x5645d39be8f0 ---------A   07190  LET S=X
    0x5645d39bea70 ---------A   07200  PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x5645d39bedd0 ---------A   07210  PRINT "  'SHIELDS NOW AT "S" PER YOUR COMMAND'"
    0x5645d39bee50 ---------A   07220  GOTO 3160
    0x5645d39beec0 ---------A   07230  REM
    0x5645d39befc0 ---------A   07240  REM ===============================================================
    0x5645d39bf050 ---------A   07250  REM
    0x5645d39bf110 ---------A   07260  REM *** DAMAGE CONTROL STARTS HERE
    0x5645d39bf430 ---------A T 07270  IF D(6)>=0 GOTO 7490
    0x5645d39bf5e0 ---------A   07280  PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    0x5645d39bf820 ---------A T 07290  IF D0=0 GOTO 3160
    0x5645d39bfb20 ---------A   07300  LET D3=0
    0x5645d39bfe00 ---------A   07310  FOR I=1 TO 8
    0x5645d39c0120 ---------A   07320      IF D(I)>=0 GOTO 7340
    0x5645d39c0480 ---------A   07330      LET D3=D3+.1
    0x5645d39c05b0 ---------A T 07340  NEXT I
    0x5645d39c0800 ---------A   07350  IF D3=0 GOTO 3160
    0x5645d39c0b80 ---------A   07360  LET D3=D3+D4
    0x5645d39c0db0 ---------A   07370  IF D3<1 GOTO 7390
    0x5645d39c1020 ---------A   07380  LET D3=.9
    0x5645d39c11c0 ---------A T 07390  PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    0x5645d39c1360 ---------A   07400  PRINT "ESTIMATED TIME TO REPAIR: ";
    0x5645d39c15f0 ---------A   07410  PRINT USING ".# STARDATES",D3
    0x5645d39c1790 ---------A   07420  PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    0x5645d39c1900 ---------A   07430  INPUT A$
    0x5645d39c1b60 ---------A   07440  IF A$<>"YES" GOTO 3160
    0x5645d39c1e60 ---------A   07450  FOR I=1 TO 8
    0x5645d39c2160 ---------A   07460      LET D(I)=0
    0x5645d39c2290 ---------A   07470  NEXT I
    0x5645d39c2700 ---------A   07480  LET T=T+D3+.1
    0x5645d39c2870 ---------A T 07490  PRINT " "
    0x5645d39c29e0 ---------A   07500  PRINT "DEVICE        STATE OF REPAIR"
    0x5645d39c2cc0 ---------A   07510  FOR R1=1 TO 8
    0x5645d39c2d50 ---------A   07520      GOSUB 10780
    0x5645d39c3080 ---------A   07530      PRINT USING "  -##.##",D(R1)
    0x5645d39c31c0 ---------A   07540  NEXT R1
    0x5645d39c3330 ---------A   07550  PRINT " "
    0x5645d39c33b0 ---------A   07560  GOTO 7290
    0x5645d39c3420 ---------C   07570  REM
    0x5645d39c3520 ---------C   07580  REM ===============================================================
    0x5645d39c35b0 ---------C   07590  REM
    0x5645d39c3670 ---------C   07600  REM "KLINGONS SHOOTING" CODE BEGINS ***
    0x5645d39c38d0 ---------C G 07610  IF K3<=0 GOTO 7820
    0x5645d39c3b30 ---------C   07620  IF D0=0 GOTO 7650
    0x5645d39c3cf0 ---------C   07630  PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x5645d39c3d70 ---------C   07640  GOTO 7820
    0x5645d39c4050 ---------C T 07650  FOR I=1 TO 3
    0x5645d39c4430 ---------C   07660      IF K(I,3)<=0 GOTO 7810
    0x5645d39c4e70 ---------C   07670      LET H=INT((K(I,3)/FND(0))*(2+RND(1)))
    0x5645d39c51f0 ---------C   07680      LET S=S-H
    0x5645d39c5aa0 ---------C   07690      PRINT H" UNIT HIT ON ENTERPRISE FROM SECTOR"K(I,1)","K(I,2)
    0x5645d39c5ce0 ---------C   07700      IF S<0 GOTO 7820
    0x5645d39c60a0 ---------C   07710      PRINT "      (SHIELDS DOWN TO"S" UNITS.)"
    0x5645d39c62e0 ---------C   07720      IF H<20 GOTO 7810
    0x5645d39c6610 ---------C   07730      IF RND(1)>.6 GOTO 7810
    0x5645d39c69a0 ---------C   07740      IF H/S<=.02 GOTO 7810
    0x5645d39c70e0 ---------C   07750      LET D2=H/S+.5*RND(1)
    0x5645d39c76c0 ---------C   07760      LET R1=INT(RND(1)*8+1)
    0x5645d39c7bf0 ---------C   07770      LET D(R1)=D(R1)-D2
    0x5645d39c7d70 ---------C   07780      PRINT "DAMAGE CONTROL REPORTS '";
    0x5645d39c7e00 ---------C   07790      GOSUB 10780
    0x5645d39c7f50 ---------C   07800      PRINT " DAMAGED BY THE HIT!'"
    0x5645d39c8090 ---------C T 07810  NEXT I
    0x5645d39c8100 ---------C T 07820  RETURN
    0x5645d39c8370 ---------A T 07830  PRINT "ITS IS STARDATE "T
    0x5645d39c83f0 ---------A   07840  GOTO 7880
    0x5645d39c8580 ---------A T 07850  PRINT " "
    0x5645d39c8720 ---------A   07860  PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    0x5645d39c8ab0 ---------A   07870  PRINT "IT IS STARDATE "T"."
    0x5645d39c8e30 ---------A T 07880  PRINT "THERE WERE "K9" KLINGON BATTLE CRUISERS LEFT AT "
    0x5645d39c8fa0 ---------A   07890  PRINT "THE END OF YOUR MISSION."
    0x5645d39c9100 ---------A T 07900  PRINT " "
    0x5645d39c9290 ---------A   07910  PRINT " "
    0x5645d39c9440 ---------A   07920  PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x5645d39c95e0 ---------A   07930  PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x5645d39c9750 ---------A   07940  PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    0x5645d39c98c0 ---------A   07950  INPUT A$
    0x5645d39c9b20 ---------A   07960  IF A$="AYE" GOTO 1280
    0x5645d39c9c00 ---------A   07970  GOTO 11100
    0x5645d39c9db0 ---------A T 07980  PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    0x5645d39c9f30 ---------A   07990  PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    0x5645d39ca0c0 ---------A   08000  PRINT " "
    0x5645d39ca830 ---------A   08010  PRINT "YOUR EFFICIENCY RATING IS "((K/(T-T0))*1000)"."
    0x5645d39ca8b0 ---------A   08020  GOTO 7900
    0x5645d39ca920 ---------D   08030  REM
    0x5645d39caa20 ---------D   08040  REM ===============================================================
    0x5645d39caab0 ---------D   08050  REM
    0x5645d39cab80 ---------D   08060  REM S.R. SENSOR SCAN & STARTUP SUBR. ***
    0x5645d39cb0d0 ---------D G 08070  FOR I=S1-1 TO S1+1
    0x5645d39cb600 ---------D   08080      FOR J=S2-1 TO S2+1
    0x5645d39cba20 ---------D   08090  	IF INT(I+.5)<1 GOTO 8180
    0x5645d39cbe70 ---------D   08100  	IF INT(I+.5)>8 GOTO 8180
    0x5645d39cc2c0 ---------D   08110  	IF INT(J+.5)<1 GOTO 8180
    0x5645d39cc710 ---------D   08120  	IF INT(J+.5)>8 GOTO 8180
    0x5645d39cc970 ---------D   08130  	LET A$=">!<"
    0x5645d39ccba0 ---------D   08140  	LET Z1=I
    0x5645d39ccdd0 ---------D   08150  	LET Z2=J
    0x5645d39cce50 ---------D   08160  	GOSUB 10840
    0x5645d39cd080 ---------D   08170  	IF Z3=1 GOTO 8220
    0x5645d39cd1e0 ---------D T 08180      NEXT J
    0x5645d39cd330 ---------D   08190  NEXT I
    0x5645d39cd560 ---------D   08200  LET D0=0
    0x5645d39cd5d0 ---------D   08210  GOTO 8290
    0x5645d39cd7e0 ---------D T 08220  LET D0=1
    0x5645d39cdad0 ---------D   08230  LET C$="DOCKED"
    0x5645d39cdce0 ---------D   08240  LET E=3000
    0x5645d39cdf10 ---------D   08250  LET P=10
    0x5645d39ce070 ---------D   08260  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x5645d39ce290 ---------D   08270  LET S=0
    0x5645d39ce300 ---------D   08280  GOTO 8360
    0x5645d39ce530 ---------D T 08290  IF K3>0 GOTO 8330
    0x5645d39ce8c0 ---------D   08300  IF E<E0*.1 GOTO 8350
    0x5645d39ceb20 ---------D   08310  LET C$=" GREEN"
    0x5645d39ceba0 ---------D   08320  GOTO 8360
    0x5645d39cf2b0 ---------D T 08330  C$=" "+CHR$(7)+"*RED*"+CHR$(7)
    0x5645d39cf320 ---------D   08340  GOTO 8360
    0x5645d39cf560 ---------D T 08350  LET C$="YELLOW"
    0x5645d39cf850 ---------D T 08360  IF D(2)>=0 GOTO 8410
    0x5645d39cf9f0 ---------D   08370  PRINT " "
    0x5645d39cfb60 ---------D   08380  PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x5645d39cfcc0 ---------D   08390  PRINT " "
    0x5645d39cfd60 ---------D   08400  GOTO 8900
    0x5645d39cffa0 ---------D T 08410  LET O1$="--------------------------------"
    0x5645d39d00f0 ---------D   08420  PRINT O1$
    0x5645d39d03f0 ---------D   08430  LET N5$="####"
    0x5645d39d0570 ---------D   08440  PRINT " ";
    0x5645d39d0920 ---------D   08450  FOR I=1 TO 22 STEP 3
    0x5645d39d0ee0 ---------D   08460      PRINT MID$(Q$(1),I,3)" ";
    0x5645d39d1020 ---------D   08470  NEXT I
    0x5645d39d1190 ---------D   08480  PRINT " "
    0x5645d39d1320 ---------D   08490  PRINT " ";
    0x5645d39d16d0 ---------D   08500  FOR I=1 TO 22 STEP 3
    0x5645d39d1c90 ---------D   08510      PRINT MID$(Q$(2),I,3)" ";
    0x5645d39d1dd0 ---------D   08520  NEXT I
    0x5645d39d1fa0 ---------D   08530  PRINT "        STARDATE         ";
    0x5645d39d2200 ---------D   08540  PRINT USING "####.#",T
    0x5645d39d2390 ---------D   08550  PRINT " ";
    0x5645d39d2740 ---------D   08560  FOR I=1 TO 22 STEP 3
    0x5645d39d2d00 ---------D   08570      PRINT MID$(Q$(3),I,3)" ";
    0x5645d39d2e40 ---------D   08580  NEXT I
    0x5645d39d3000 ---------D   08590  PRINT "        CONDITION        ";
    0x5645d39d3160 ---------D   08600  PRINT C$
    0x5645d39d32f0 ---------D   08610  PRINT " ";
    0x5645d39d36a0 ---------D   08620  FOR I=1 TO 22 STEP 3
    0x5645d39d3c60 ---------D   08630      PRINT MID$(Q$(4),I,3)" ";
    0x5645d39d3da0 ---------D   08640  NEXT I
    0x5645d39d4240 ---------D   08650  PRINT "        QUADRANT         "Q1","Q2
    0x5645d39d43d0 ---------D   08660  PRINT " ";
    0x5645d39d4780 ---------D   08670  FOR I=1 TO 22 STEP 3
    0x5645d39d4d40 ---------D   08680      PRINT MID$(Q$(5),I,3)" ";
    0x5645d39d4e80 ---------D   08690  NEXT I
    0x5645d39d5320 ---------D   08700  PRINT "        SECTOR           "S1","S2
    0x5645d39d54b0 ---------D   08710  PRINT " ";
    0x5645d39d5860 ---------D   08720  FOR I=1 TO 22 STEP 3
    0x5645d39d5e20 ---------D   08730      PRINT MID$(Q$(6),I,3)" ";
    0x5645d39d5f60 ---------D   08740  NEXT I
    0x5645d39d6130 ---------D   08750  PRINT "        TOTAL ENERGY     ";
    0x5645d39d6490 ---------D   08760  PRINT USING N5$,E+S
    0x5645d39d6620 ---------D   08770  PRINT " ";
    0x5645d39d69d0 ---------D   08780  FOR I=1 TO 22 STEP 3
    0x5645d39d6f90 ---------D   08790      PRINT MID$(Q$(7),I,3)" ";
    0x5645d39d70d0 ---------D   08800  NEXT I
    0x5645d39d7290 ---------D   08810  PRINT "        PHOTON TORPEDOES ";
    0x5645d39d74d0 ---------D   08820  PRINT USING N5$,P
    0x5645d39d7660 ---------D   08830  PRINT " ";
    0x5645d39d7a10 ---------D   08840  FOR I=1 TO 22 STEP 3
    0x5645d39d7fd0 ---------D   08850      PRINT MID$(Q$(8),I,3)" ";
    0x5645d39d8110 ---------D   08860  NEXT I
    0x5645d39d82d0 ---------D   08870  PRINT "        SHIELDS          ";
    0x5645d39d8510 ---------D   08880  PRINT USING N5$,S
    0x5645d39d8670 ---------D   08890  PRINT O1$
    0x5645d39d86d0 ---------D T 08900  RETURN
    0x5645d39d8750 ---------A   08910  REM
    0x5645d39d8850 ---------A   08920  REM ===============================================================
    0x5645d39d88e0 ---------A   08930  REM
    0x5645d39d89b0 ---------A   08940  REM *** LIBARY COMPUTER CODE BEGINS HERE
    0x5645d39d8cd0 ---------A T 08950  IF D(8)>=0 GOTO 8980
    0x5645d39d8e60 ---------A   08960  PRINT "COMPUTER DISABLED"
    0x5645d39d8f00 ---------A   08970  GOTO 3160
    0x5645d39d9080 ---------A T 08980  PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    0x5645d39d92a0 ---------A   08990  INPUT A
    0x5645d39d94e0 ---------A   09000  IF A<0 GOTO 3160
    0x5645d39d9580 ---------A   09010  PRINT
    0x5645d39d9860 ---------A   09020  LET H8=1
    0x5645d39d9a90 ---------A   09030  IF A=0 GOTO 9270
    0x5645d39d9cf0 ---------A   09040  IF A>5 GOTO 9150
    0x5645d39d9d90 ---------A   09050  REM
    0x5645d39d9e90 ---------A   09060  REM ===============================================================
    0x5645d39d9f20 ---------A   09070  REM
    0x5645d39da470 ---------A   09080  ON A GOTO 9690, 9890, 10320, 9970, 9100
    0x5645d39da4f0 ---------A   09090  REM  GOTO 9150
    0x5645d39da5c0 ---------A T 09100  REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
    0x5645d39da7f0 ---------A   09110  LET H8=0
    0x5645d39daa20 ---------A   09120  LET G5=1
    0x5645d39dab80 ---------A   09130  PRINT "                      THE GALAXY"
    0x5645d39dac20 ---------A   09140  GOTO 9280
    0x5645d39dadb0 ---------A T 09150  PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    0x5645d39daf30 ---------A   09160  PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x5645d39db0b0 ---------A   09170  PRINT "   1 = STATUS REPORT"
    0x5645d39db240 ---------A   09180  PRINT "   2 = PHOTON TORPEDO DATA"
    0x5645d39db3d0 ---------A   09190  PRINT "   3 = STARBASE NAVIGATION DATA"
    0x5645d39db560 ---------A   09200  PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    0x5645d39db6d0 ---------A   09210  PRINT "   5 = GALAXY 'REGION NAME' MAP"
    0x5645d39db750 ---------A   09220  GOTO 8980
    0x5645d39db7c0 ---------A   09230  REM
    0x5645d39db8c0 ---------A   09240  REM ===============================================================
    0x5645d39db950 ---------A   09250  REM
    0x5645d39dba20 ---------A   09260  REM *** CUM GALACTIC RECORD CODE BEGINS ***
    0x5645d39dc010 ---------A T 09270  PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "Q1","Q2":"
    0x5645d39dc1c0 ---------A T 09280  PRINT "      1     2     3     4     5     6     7     8"
    0x5645d39dc4e0 ---------A   09290  LET O3$="    ----- ----- ----- ----- ----- ----- ----- -----"
    0x5645d39dc640 ---------A   09300  PRINT O3$
    0x5645d39dc6d0 ---------A   09310  REM   DIM N1$(2),N2$(8),N$(5)
    0x5645d39dc9c0 ---------A   09320  FOR I=1 TO 8
    0x5645d39dccd0 ---------A   09330      LET N1$="##"
    0x5645d39dcf30 ---------A   09340      PRINT USING N1$,I;
    0x5645d39dd200 ---------A   09350      PRINT TAB(3);"|";
    0x5645d39dd440 ---------A   09360      IF H8=0 GOTO 9480
    0x5645d39dd750 ---------A   09370      FOR J=1 TO 8
    0x5645d39dda50 ---------A   09380  	    LET N2$=" ### |"
    0x5645d39ddd50 ---------A   09390  	    LET N$=""
    0x5645d39ddfa0 ---------A   09400  	    IF I<>Q1 GOTO 9440
    0x5645d39de230 ---------A   09410  	    IF J<>Q2 GOTO 9440
    0x5645d39de560 ---------A   09420  	    LET N$=CHR$(7)
    0x5645d39de6e0 ---------A   09430  	    PRINT N$;
    0x5645d39deb00 ---------A T 09440  	    PRINT USING N2$,Z(I,J);
    0x5645d39dec80 ---------A   09450  	    PRINT N$;
    0x5645d39dedc0 ---------A   09460      NEXT J
    0x5645d39dee50 ---------A   09470      GOTO 9610
    0x5645d39df080 ---------A T 09480      LET Z4=I
    0x5645d39df290 ---------A   09490      LET Z5=1
    0x5645d39df310 ---------A   09500      GOSUB 10960
    0x5645d39df9d0 ---------A   09510      LET J0=INT(15-.5*LEN(G2$))
    0x5645d39dfba0 ---------A   09520      PRINT  TAB(J0);
    0x5645d39dfd30 ---------A   09530      PRINT G2$;
    0x5645d39dfff0 ---------A   09540      PRINT TAB(27);"|";
    0x5645d39e0210 ---------A   09550      LET Z5=5
    0x5645d39e0290 ---------A   09560      GOSUB 10960
    0x5645d39e0890 ---------A   09570      LET J0=INT(39-.5*LEN(G2$))
    0x5645d39e0a60 ---------A   09580      PRINT  TAB(J0);
    0x5645d39e0bf0 ---------A   09590      PRINT G2$;
    0x5645d39e0eb0 ---------A   09600      PRINT TAB(51);"|";
    0x5645d39e0f30 ---------A T 09610      PRINT
    0x5645d39e1090 ---------A   09620      PRINT O3$
    0x5645d39e11d0 ---------A   09630  NEXT I
    0x5645d39e1260 ---------A   09640  GOTO 3160
    0x5645d39e12d0 ---------A   09650  REM
    0x5645d39e13d0 ---------A   09660  REM ===============================================================
    0x5645d39e1460 ---------A   09670  REM
    0x5645d39e1530 ---------A   09680  REM *** STATUS REPORT CODE BEGINS HERE ***
    0x5645d39e16b0 ---------A T 09690  PRINT "   STATUS REPORT:"
    0x5645d39e18f0 ---------A   09700  LET X$=""
    0x5645d39e1b20 ---------A   09710  IF K9=1 GOTO 9730
    0x5645d39e1d90 ---------A   09720  LET X$="S"
    0x5645d39e21e0 ---------A T 09730  PRINT K9" KLINGON"X$" LEFT"
    0x5645d39e2790 ---------A   09740  LET V5=(T0+T9)-T
    0x5645d39e2a00 ---------A   09750  PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES",V5
    0x5645d39e2c40 ---------A   09760  LET X$=""
    0x5645d39e2e70 ---------A   09770  IF B9=1 GOTO 9830
    0x5645d39e30e0 ---------A   09780  LET X$="S"
    0x5645d39e3310 ---------A   09790  IF B9<>0 GOTO 9830
    0x5645d39e3510 ---------A   09800  PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    0x5645d39e3690 ---------A   09810  PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    0x5645d39e3750 ---------A   09820  GOTO 7270
    0x5645d39e3cb0 ---------A T 09830  PRINT "THE FEDERATION IS MAINTAINING"B9" STARBASE"X$" IN THE GALAXY"
    0x5645d39e3d30 ---------A   09840  GOTO 7270
    0x5645d39e3da0 ---------A   09850  REM
    0x5645d39e3ea0 ---------A   09860  REM ===============================================================
    0x5645d39e3f30 ---------A   09870  REM
    0x5645d39e4010 ---------A   09880  REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***
    0x5645d39e4240 ---------A T 09890  LET H8=0
    0x5645d39e4520 ---------A   09900  FOR I=1 TO 3
    0x5645d39e4900 ---------A   09910      IF K(I,3)<=0 GOTO 10300
    0x5645d39e4d00 ---------A   09920      LET W1=K(I,1)
    0x5645d39e50d0 ---------A   09930      LET X=K(I,2)
    0x5645d39e5300 ---------A T 09940      LET C1=S1
    0x5645d39e5530 ---------A   09950      LET A=S2
    0x5645d39e55c0 ---------A   09960      GOTO10040
    0x5645d39e5750 ---------A T 09970      PRINT "DIRECTION/DISTANCE CALCULATOR:"
    0x5645d39e60c0 ---------A   09980      PRINT "YOU ARE AT QUADRANT ("Q1","Q2") SECTOR ("S1","S2")"
    0x5645d39e6240 ---------A   09990      PRINT "PLEASE ENTER --"
    0x5645d39e63d0 ---------A   10000      PRINT "  INITIAL COORDINATES (X,Y)";
    0x5645d39e6630 ---------A   10010      INPUT C1,A
    0x5645d39e67c0 ---------A   10020      PRINT "  FINAL COORDINATES (X,Y)";
    0x5645d39e6a00 ---------A   10030      INPUT W1,X
    0x5645d39e6d60 ---------A T 10040      LET X=X-A
    0x5645d39e70c0 ---------A   10050      LET A=C1-W1
    0x5645d39e72f0 ---------A   10060      IF X<0 GOTO 10170
    0x5645d39e7560 ---------A   10070      IF A<0 GOTO 10230
    0x5645d39e77d0 ---------A   10080      IF X>0 GOTO 10100
    0x5645d39e7a40 ---------A   10090      IF A=0 GOTO 10190
    0x5645d39e7c90 ---------A T 10100      LET C1=1
    0x5645d39e80a0 ---------A T 10110      IF ABS(A)<=ABS(X) GOTO 10150
    0x5645d39e8bf0 ---------A   10120      LET V5=C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
    0x5645d39e8e40 ---------A   10130      PRINT "DIRECTION ="V5
    0x5645d39e8ee0 ---------A   10140      GOTO 10280
    0x5645d39e9570 ---------A T 10150      PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
    0x5645d39e9600 ---------A   10160      GOTO 10280
    0x5645d39e9830 ---------A T 10170      IF A>0 GOTO 10210
    0x5645d39e9aa0 ---------A   10180      IF X=0 GOTO 10230
    0x5645d39e9ce0 ---------A T 10190      LET C1=5
    0x5645d39e9d50 ---------A   10200      GOTO 10110
    0x5645d39e9f60 ---------A T 10210      LET C1=3
    0x5645d39e9fd0 ---------A   10220      GOTO 10240
    0x5645d39ea1f0 ---------A T 10230      LET C1=7
    0x5645d39ea600 ---------A T 10240      IF ABS(A)>=ABS(X) GOTO 10270
    0x5645d39eb170 ---------A   10250      PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
    0x5645d39eb210 ---------A   10260      GOTO 10280
    0x5645d39eb8c0 ---------A T 10270      PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
    0x5645d39ebf30 ---------A T 10280      PRINT "DISTANCE ="SQR(X^2+A^2)
    0x5645d39ec170 ---------A   10290      IF H8=1 GOTO 3160
    0x5645d39ec2d0 ---------A T 10300  NEXT I
    0x5645d39ec370 ---------A   10310  GOTO 3160
    0x5645d39ec5a0 ---------A T 10320  IF B3<>0 GOTO 10350
    0x5645d39ec790 ---------A   10330  PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    0x5645d39ec830 ---------A   10340  GOTO 3160
    0x5645d39ec990 ---------A T 10350  PRINT "FROM ENTERPRISE TO STARBASE:"
    0x5645d39ecbd0 ---------A   10360  LET W1=B4
    0x5645d39ece00 ---------A   10370  LET X=B5
    0x5645d39ece90 ---------A   10380  GOTO 9940
    0x5645d39ecf10 ---------E   10390  REM *** END OF LIBRARY-COMPUTER CODE
    0x5645d39ecfa0 ---------E   10400  REM
    0x5645d39ed0a0 ---------E   10410  REM ===============================================================
    0x5645d39ed130 ---------E   10420  REM
    0x5645d39ed1f0 ---------E   10430  REM S/R FINDS RANDOM HOLE IN QUADRANT
    0x5645d39ed800 ---------E B 10440  LET R1=INT(RND(1)*8+1)
    0x5645d39eddd0 ---------E   10450  LET R2=INT(RND(1)*8+1)
    0x5645d39ee000 ---------E   10460  LET A$="   "
    0x5645d39ee230 ---------E   10470  LET Z1=R1
    0x5645d39ee460 ---------E   10480  LET Z2=R2
    0x5645d39ee4e0 ---------E   10490  GOSUB 10840
    0x5645d39ee710 ---------E   10500  IF Z3=0 GOTO 10440
    0x5645d39ee790 ---------E   10510  RETURN
    0x5645d39ee810 ---------F   10520  REM
    0x5645d39ee910 ---------F   10530  REM ===============================================================
    0x5645d39ee9a0 ---------F   10540  REM
    0x5645d39eea80 ---------F G 10550  REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
    0x5645d39eeeb0 ---------F   10560  Z1 = INT(Z1+.5)
    0x5645d39ef2d0 ---------F   10570  Z2 = INT(Z2+.5)
    0x5645d39ef500 ---------F   10580  IF Z1<1 GOTO 10700
    0x5645d39ef770 ---------F   10590  IF Z1>8 GOTO 10700
    0x5645d39ef9e0 ---------F   10600  IF Z2<1 GOTO 10700
    0x5645d39efc50 ---------F   10610  IF Z2>8 GOTO 10700
    0x5645d39f01c0 ---------F   10620  DIM Q9(24), A9(3)
    0x5645d39f04b0 ---------F   10630  CHANGE Q$(Z1) TO Q9
    0x5645d39f06f0 ---------F   10640  CHANGE A$ TO A9
    0x5645d39f0ac0 ---------F   10650  FOR I8 = 1 TO 3
    0x5645d39f1220 ---------F   10660      Q9(3*(Z2-1) + I8) = A9(I8)
    0x5645d39f1350 ---------F   10670  NEXT I8
    0x5645d39f1670 ---------F   10680  CHANGE Q9 TO Q$(Z1)
    0x5645d39f1710 ---------F   10690  GOTO 10740
    0x5645d39f17b0 ---------F T 10700  PRINT
    0x5645d39f1d30 ---------F   10710  PRINT "ERROR IN COORDINATES (Z1,Z2): (";Z1;",";Z2;")"
    0x5645d39f1ea0 ---------F   10720  PRINT "     1 <=  Z1,Z2  <=8    "
    0x5645d39f1f20 ---------F   10730  PRINT
    0x5645d39f1f80 ---------F T 10740  RETURN
    0x5645d39f2000 ---------G   10750  REM
    0x5645d39f2100 ---------G   10760  REM ===============================================================
    0x5645d39f2190 ---------G   10770  REM
    0x5645d39f2260 ---------G G 10780  REM *** PRINTS DEVICE NAME FROM ARRAY ***
    0x5645d39f24d0 ---------G   10790  PRINT D$(R1);
    0x5645d39f2530 ---------G   10800  RETURN
    0x5645d39f25b0 ---------H   10810  REM
    0x5645d39f26b0 ---------H   10820  REM ===============================================================
    0x5645d39f2740 ---------H   10830  REM
    0x5645d39f2810 ---------H G 10840  REM *** STRING COMPARISON IN QUADRANT ARRAY ***
    0x5645d39f2c40 ---------H   10850  LET Z1=INT(Z1+.5)
    0x5645d39f3050 ---------H   10860  LET Z2=INT(Z2+.5)
    0x5645d39f3280 ---------H   10870  LET Z3=0
    0x5645d39f3a70 ---------H   10880  IF MID$(Q$(Z1),(3*Z2-2),3) <> A$ GOTO 10900
    0x5645d39f3cb0 ---------H   10890  Z3 = 1
    0x5645d39f3d00 ---------H T 10900  RETURN
    0x5645d39f3d80 ---------I   10910  REM
    0x5645d39f3e80 ---------I   10920  REM ===============================================================
    0x5645d39f3f10 ---------I   10930  REM
    0x5645d39f4000 ---------I   10940  REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    0x5645d39f40d0 ---------I   10950  REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)
    0x5645d39f43d0 ---------I G 10960  LET L2=2
    0x5645d39f4600 ---------I   10970  IF Z5>=5 GOTO 10990
    0x5645d39f4850 ---------I   10980  LET L2=1
    0x5645d39f4ea0 ---------I T 10990  LET L3=2*(Z4-1)+L2
    0x5645d39f51c0 ---------I   11000  LET G2$=G1$(L3)
    0x5645d39f53f0 ---------I   11010  IF G5=1 GOTO 11090
    0x5645d39f5660 ---------I   11020  LET L3=Z5
    0x5645d39f5890 ---------I   11030  IF Z5<=4 GOTO 11050
    0x5645d39f5bf0 ---------I   11040  LET L3=Z5-4
    0x5645d39f5ef0 ---------I T 11050  LET G3$="IV"
    0x5645d39f6120 ---------I   11060  IF L3=4 GOTO 11080
    0x5645d39f6610 ---------I   11070  LET G3$=MID$(G4$,1,L3)
    0x5645d39f6a80 ---------I T 11080  G2$=G2$+" "+G3$
    0x5645d39f6ad0 ---------I T 11090  RETURN 
    0x5645d39f6b30 ---------A T 11100  STOP
    0x5645d39f6bb0 ---------J G 11111  REM Gosub target.
    0x5645d39f6cc0 ---------J   11112  REM This segment was originally from file STINST.BAS and was included with 
    0x5645d39f6d80 ---------J   11113  REM a CHAIN command./ASA Jul 27,2009
    0x5645d39f6e20 ---------J   11115  PRINT
    0x5645d39f6eb0 ---------J   11120  REM INSTRUCTIONS FOR "STREK" GAME
    0x5645d39f6f60 ---------J   11130  REM VERSION "STINST2" 12/8/74
    0x5645d39f7290 ---------J   11140  FOR I=1 TO 9
    0x5645d39f7ab0 ---------J   11150      ON I GOTO 11350, 11470, 11650, 11750, 11830, 11890, 11970, 12020, 12070
    0x5645d39f7b50 ---------J T 11160      PRINT
    0x5645d39f7ce0 ---------J   11170      PRINT "<TO CONTINUE, HIT 'RETURN'>";
    0x5645d39f7e40 ---------J   11180      INPUT A$
    0x5645d39f7ec0 ---------J   11190      PRINT
    0x5645d39f8000 ---------J   11200  NEXT I
    0x5645d39f8210 ---------J   11210  PRINT "1.  WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x5645d39f83e0 ---------J   11220  PRINT "      COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM, OR XXX)."
    0x5645d39ae340 ---------J   11230  PRINT "2.  IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x5645d39ae500 ---------J   11240  PRINT "      LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x5645d39ae6d0 ---------J   11250  PRINT "3.  SOME COMMANDS REQUIRE YOU TO ENTER DATA.  (FOR EXAMPLE, THE"
    0x5645d39ae8a0 ---------J   11260  PRINT "      'NAV' COMMAND COMES BACK WITH 'COURSE (1-9) ?'.)  IF YOU"
    0x5645d39aea40 ---------J   11270  PRINT "      TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x5645d39aebb0 ---------J   11280  PRINT "      WILL BE ABORTED."
    0x5645d39aec50 ---------J   11290  PRINT
    0x5645d39aede0 ---------J   11300  PRINT "HIT <CAR RET> TO CONTINUE ";
    0x5645d39aef40 ---------J   11310  INPUT A$
    0x5645d39aefa0 ---------J   11330  RETURN
    0x5645d39af030 ---------A   11340  REM *** EXIT HERE ***
    0x5645d39af0e0 ---------J T 11350  PRINT
    0x5645d39af250 ---------J   11360  PRINT "    INSTRUCTIONS FOR  ** STAR TREK **"
    0x5645d39af300 ---------J   11370  PRINT 
    0x5645d39af4c0 ---------J   11380  PRINT "THE GALAXY IS DIVIDED INTO AN 8 x 8 QUADRANT GRID,"
    0x5645d39af650 ---------J   11390  PRINT "AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID." 
    0x5645d39af710 ---------J   11400  PRINT
    0x5645d39af8e0 ---------J   11410  PRINT "   YOU WILL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE GALAXY"
    0x5645d39afab0 ---------J   11420  PRINT "TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP 'ENTERPRISE'"
    0x5645d39afc70 ---------J   11430  PRINT "YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF KLINGON WARSHIPS"
    0x5645d39afdf0 ---------J   11440  PRINT "WHICH ARE MENACING THE UNITED FEDERATION OF PLANETS."
    0x5645d39afe70 ---------J   11450  PRINT
    0x5645d39afef0 ---------J   11460  GOTO 11160
    0x5645d39aff90 ---------J T 11470  PRINT
    0x5645d39b0120 ---------J   11480  PRINT "YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x5645d39fc510 ---------J   11490  PRINT "CAPTAIN OF THE STARSHIP:"
    0x5645d39fc6c0 ---------J   11500  PRINT "'NAV' COMMAND = WARP ENGINE CONTROL --"
    0x5645d39fc870 ---------J   11510  PRINT "  COURSE IS IN A CIRCULAR NUMERICAL         4  3  2"
    0x5645d39fca20 ---------J   11520  PRINT "  VECTOR ARRANGEMENT AS SHOWN.               . . ."
    0x5645d39fcbd0 ---------J   11530  PRINT "  INTEGER AND REAL VALUES MAY BE              ..."
    0x5645d39fcd80 ---------J   11540  PRINT "  USED.  (THUS, COURSE 1.5 IS HALF-        5 ----- 1"
    0x5645d39fcf30 ---------J   11550  PRINT "  WAY BETWEEN 1 AND 2.)                       ..."
    0x5645d39fd0e0 ---------J   11560  PRINT "                                             . . ."
    0x5645d39fd280 ---------J   11570  PRINT "  VALUES MAY APPROACH 9.0, WHICH            6  7  8 "
    0x5645d39fd420 ---------J   11580  PRINT "  ITSELF IS EQUIVALENT TO 1.0."
    0x5645d39fd5c0 ---------J   11590  PRINT "                                            COURSE  "
    0x5645d39fd750 ---------J   11600  PRINT " ONE WARP FACTOR IS THE SIZE OF "
    0x5645d39fd8e0 ---------J   11610  PRINT " ONE QUADRANT.  THEREFORE, TO GET"
    0x5645d39fda70 ---------J   11620  PRINT " FROM QUADRANT 6,5 TO 5,5, YOU WOULD"
    0x5645d39fdbe0 ---------J   11630  PRINT " USE COURSE 3, WARP FACTOR 1."
    0x5645d39fdc80 ---------J   11640  GOTO 11160
    0x5645d39fde20 ---------J T 11650  PRINT "'SRS' COMMAND = SHORT RANGE SENSOR SCAN"
    0x5645d39fdfd0 ---------J   11660  PRINT "  SHOWS YOU A SCAN OF YOUR PRESENT QUADRANT."
    0x5645d39fe170 ---------J   11670  PRINT "  SYMBOLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x5645d39fe300 ---------J   11680  PRINT "		<*> = YOUR STARSHIP'S POSITION"
    0x5645d39fe4a0 ---------J   11690  PRINT "		+++ = KLINGON BATTLE CRUISER"
    0x5645d39fe640 ---------J   11700  PRINT "		>!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE!)"
    0x5645d39fe7d0 ---------J   11710  PRINT "		 *  = STAR"
    0x5645d39fe950 ---------J   11720  PRINT "  A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x5645d39fe9d0 ---------J   11730  PRINT
    0x5645d39fea70 ---------J   11740  GOTO 11160
    0x5645d39fec10 ---------J T 11750  PRINT "'LRS' COMMAND = LONG RANGE SENSOR SCAN"
    0x5645d39fedd0 ---------J   11760  PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x5645d39fefa0 ---------J   11770  PRINT "  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)"
    0x5645d39ff170 ---------J   11780  PRINT "  THE SCAN IS CODED IN THE FORM '###', WHERE THE UNITS DIGIT"
    0x5645d39ff330 ---------J   11790  PRINT "  IS THE NUMBER OF STARS, TENS DIGIT IS THE NUMBER OF STARBASES,"
    0x5645d39ff4e0 ---------J   11800  PRINT "  AND HUNDREDS DIGIT IS THE NUMBER OF KLINGONS. "
    0x5645d39ff670 ---------J   11810  PRINT "    EXAMPLE --   207 = 2 KLINGONS, ON STARBASES, 7 STARS."
    0x5645d39ff710 ---------J   11820  GOTO 11160
    0x5645d39ff8a0 ---------J T 11830  PRINT "'PHA' COMMAND = PHASER CONTROL"
    0x5645d39ffa60 ---------J   11840  PRINT "  ALLOWS YOU TO DESTROY THE KLINGON BATTLE CRUISERS BY"
    0x5645d39ffc10 ---------J   11850  PRINT "  ZAPPING THEM WITH SUITABLY LARGE UNITS OF ENERGY TO"
    0x5645d39ffdb0 ---------J   11860  PRINT "  DEPLETE THEIR SHIELD POWER.  (REMEMBER, KLINGONS HAVE"
    0x5645d39fff10 ---------J   11870  PRINT "  PHASERS, TOO!)"
    0x5645d39fffb0 ---------J   11880  GOTO 11160
    0x5645d3a00160 ---------J T 11890  PRINT "'TOR' COMMAND = PHOTON TORPEDO CONTROL"
    0x5645d3a00320 ---------J   11900  PRINT "  TORPEDO COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL."
    0x5645d3a004e0 ---------J   11910  PRINT "  IF YOU HIT THE KLINGON VESSEL, HE IS DESTROYED AND "
    0x5645d3a00680 ---------J   11920  PRINT "  CANNOT FIRE BACK AT YOU.  IF YOU MISS, YOU ARE SUBJECT TO"
    0x5645d3a00810 ---------J   11930  PRINT "  HIS PHASER FIRE."
    0x5645d3a009e0 ---------J   11940  PRINT "     NOTE: THE LIBRARY-COMPUTER ('COM' COMMAND) HAS AN"
    0x5645d3a00b70 ---------J   11950  PRINT "           OPTION TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
    0x5645d3a00c10 ---------J   11960  GOTO 11160
    0x5645d3a00db0 ---------J T 11970  PRINT "'SHE' COMMAND = SHIELD CONTROL"
    0x5645d3a00f80 ---------J   11980  PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS."
    0x5645d3a01130 ---------J   11990  PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.  NOTE THAT THE "
    0x5645d3a012b0 ---------J   12000  PRINT "  TOTAL ENERGY INCLUDES SHIELD ENERGY."
    0x5645d3a01350 ---------J   12010  GOTO 11160
    0x5645d3a014e0 ---------J T 12020  PRINT "'DAM' COMMAND = DAMAGE CONTROL REPORT"
    0x5645d3a016a0 ---------J   12030  PRINT "  GIVES STATE OF REPAIR OF ALL DEVICES, WHERE A NEGATIVE"
    0x5645d3a01840 ---------J   12040  PRINT "  'STATE OF REPAIR' SHOWS THAT THE DEVICE IS TEMPORARILY"
    0x5645d3a019a0 ---------J   12050  PRINT "  DAMAGED."
    0x5645d3a01a40 ---------J   12060  GOTO 11160
    0x5645d3a01bd0 ---------J T 12070  PRINT "'COM' COMMAND = LIBRARY-COMPUTER"
    0x5645d3a01d70 ---------J   12080  PRINT "  THE LIBRARY-COMPUTER CONTAINS SIX OPTIONS:"
    0x5645d3a01f30 ---------J   12090  PRINT "  OPTION 0 = CUMULATIVE GALACTIC RECORD"
    0x5645d3a020e0 ---------J   12100  PRINT "     WHICH SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
    0x5645d3a02270 ---------J   12110  PRINT "     LONG RANGE SENSOR SCANS."
    0x5645d3a02420 ---------J   12120  PRINT "  OPTION 1 = STATUS REPORT"
    0x5645d3a025d0 ---------J   12130  PRINT "     WHICH SHOWS THE NUMBER OF KLINGONS, STARDATES, AND STARBASES"
    0x5645d3a02760 ---------J   12140  PRINT "     REMAINING IN THE GAME."
    0x5645d3a02910 ---------J   12150  PRINT "  OPTION 2 = PHOTON TORPEDO DATA"
    0x5645d3a02ac0 ---------J   12160  PRINT "     WHICH GIVES DIRECTIONS AND DISTANCE FROM THE ENTERPRISE"
    0x5645d3a02c50 ---------J   12170  PRINT "     TO ALL KLINGONS IN YOUR QUADRANT"
    0x5645d3a02df0 ---------J   12180  PRINT "  OPTION 3 = STARBASE NAVIGATION DATA"
    0x5645d3a02f90 ---------J   12190  PRINT "     WHICH GIVES DIRECTION AND DISTANCE TO ANY STARBASE"
    0x5645d3a03130 ---------J   12200  PRINT "     WITHIN YOUR QUADRANT"
    0x5645d3a032e0 ---------J   12210  PRINT "  OPTION 4 = DIRECTION/DISTANCE CALCULATOR"
    0x5645d3a03480 ---------J   12220  PRINT "     WHICH ALLOWS YOU TO ENTER COORDINATES FOR"
    0x5645d3a03610 ---------J   12230  PRINT "     DIRECTION/DISTANCE CALCULATIONS."
    0x5645d3a037c0 ---------J   12240  PRINT "  OPTION 5 = GALACTIC 'REGION NAME' MAP"
    0x5645d3a03970 ---------J   12250  PRINT "     WHICH PRINTS THE NAMES OF THE SIXTEEN MAJOR GALACTIC"
    0x5645d3a03ae0 ---------J   12260  PRINT "     REGIONS REFERRED TO IN THE GAME."
    0x5645d3a03b60 ---------J   12270  GOTO 11160
    0x5645d3a03bb0 ---------A   12280  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01280      01200T, 07960T
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
     07820      07610T, 07640T, 07700T
     07830      04760T, 05170T
     07850      03220T
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
     11111      01220G
     11160      11460T, 11640T, 11740T, 11820T, 11880T, 11960T, 12010T, 12060T, 
                12270T
     11350      11150T
     11470      11150T
     11650      11150T
     11750      11150T
     11830      11150T
     11890      11150T
     11970      11150T
     12020      11150T
     12070      11150T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5645d394fdb0 (01000)   0x5645d394fdb0 (01000)   0x5645d3a03bb0 (12280)   0x5645d3a03bb0 (12280)   
   B) 0x5645d399fa50 (05220)   0x5645d39a0100 (05260)   0x5645d39a0f40 (05330)   0x5645d39a0f40 (05330)   
   C) 0x5645d39c3420 (07570)   0x5645d39c38d0 (07610)   0x5645d39c8100 (07820)   0x5645d39c8100 (07820)   
   D) 0x5645d39ca920 (08030)   0x5645d39cb0d0 (08070)   0x5645d39d86d0 (08900)   0x5645d39d86d0 (08900)   
   E) 0x5645d39ecf10 (10390)   0x5645d39ed800 (10440)   0x5645d39ee790 (10510)   0x5645d39ee790 (10510)   
   F) 0x5645d39ee810 (10520)   0x5645d39eea80 (10550)   0x5645d39f1f80 (10740)   0x5645d39f1f80 (10740)   
   G) 0x5645d39f2000 (10750)   0x5645d39f2260 (10780)   0x5645d39f2530 (10800)   0x5645d39f2530 (10800)   
   H) 0x5645d39f25b0 (10810)   0x5645d39f2810 (10840)   0x5645d39f3d00 (10900)   0x5645d39f3d00 (10900)   
   I) 0x5645d39f3d80 (10910)   0x5645d39f43d0 (10960)   0x5645d39f6ad0 (11090)   0x5645d39f6ad0 (11090)   
   J) 0x5645d39f6bb0 (11111)   0x5645d39f6bb0 (11111)   0x5645d39aefa0 (11330)   0x5645d3a03b60 (12270)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!
    NOTE: Routine G overlaps, or is tangled with, routine A!
    NOTE: Routine H overlaps, or is tangled with, routine A!
    NOTE: Routine I overlaps, or is tangled with, routine A!
    NOTE: Routine J overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/strek2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5645d394fdb0 ---------A   01000  REM (VERSION "STREK7", 1/12/75 RCL)
    0x5645d394eb80 ---------A   01010  REM
    0x5645d394ff30 ---------A   01020  REM
    0x5645d394fe70 ---------A   01030  REM ***         *** STAR TREK ***       ***
    0x5645d39518f0 ---------A   01040  REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    0x5645d39519d0 ---------A   01050  REM *** AS SEEN ON THE STAR TREK TV SHOW.
    0x5645d3951ac0 ---------A   01060  REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    0x5645d3951bb0 ---------A   01070  REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    0x5645d3951ca0 ---------A   01080  REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY 
    0x5645d3951940 ---------A   01090  REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974
    0x5645d3951df0 ---------A   01100  REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    0x5645d3951ee0 ---------A   01110  REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    0x5645d3951f60 ---------A   01120  REM *** ADDRESS TO
    0x5645d3952050 ---------A   01130  REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    0x5645d3952130 ---------A   01140  REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    0x5645d39521c0 ---------A   01150  RANDOMIZE
    0x5645d394d6d0 ---------A   01160  PRINT  TAB(15);"* * * STAR TREK * * *"
    0x5645d394d670 ---------A   01170  PRINT
    0x5645d3952380 ---------A   01180  PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    0x5645d39524f0 ---------A   01190  INPUT A$
    0x5645d3952630 ---------A   01200  IF A$<>"YES" GOTO 1280
    0x5645d3952760 ---------A   01210  PRINT "PLEASE WAIT  . . .";
    0x5645d39527e0 ---------A   01220  GOSUB 11111
    0x5645d3952850 ---------A   01240  REM
    0x5645d395d0a0 ---------A   01250  REM ===============================================================
    0x5645d395d130 ---------A   01260  REM
    0x5645d395d1e0 ---------A   01270  REM  PROGRAM BEGINS HERE .....
    0x5645d395d4d0 ---------A T 01280  DIM Q$(8)
    0x5645d395d870 ---------A   01290  FOR I = 1 TO 8
    0x5645d395dc50 ---------A   01300  Q$(I) = SPACE$(24)
    0x5645d395dd80 ---------A   01310  NEXT I
    0x5645d395ed20 ---------A   01320  DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8)
    0x5645d395f4b0 ---------A   01330  LET T=INT(RND(1)*20+20)*100
    0x5645d395fa90 ---------A   01340  LET P1=3.14159/4
    0x5645d395fd80 ---------A   01350  LET T0=T
    0x5645d3960050 ---------A   01360  LET T9=30
    0x5645d3960320 ---------A   01370  LET D0=0
    0x5645d39605f0 ---------A   01380  LET E0=3000
    0x5645d39608e0 ---------A   01390  LET E=E0
    0x5645d3960bb0 ---------A   01400  LET P=10
    0x5645d3960ea0 ---------A   01410  LET P0=P
    0x5645d3961170 ---------A   01420  LET S9=200
    0x5645d3961460 ---------A   01430  LET S=0
    0x5645d3962470 ---------A   01440  DEF FND(D)=SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5645d39624e0 ---------A   01450  REM
    0x5645d39625e0 ---------A   01460  REM ===============================================================
    0x5645d3962670 ---------A   01470  REM
    0x5645d3962730 ---------A   01480  REM INITIALIZE INTERPRISE'S POSITION
    0x5645d3962e00 ---------A   01490  LET Q1=INT(RND(1)*8+1)
    0x5645d39634a0 ---------A   01500  LET Q2=INT(RND(1)*8+1)
    0x5645d3963a80 ---------A   01510  LET S1=INT(RND(1)*8+1)
    0x5645d3964050 ---------A   01520  LET S2=INT(RND(1)*8+1)
    0x5645d3964320 ---------A   01530  MAT C=ZER
    0x5645d39646c0 ---------A   01540  LET C(4,1)=-1
    0x5645d3964a50 ---------A   01550  LET C(3,1)=-1
    0x5645d3964de0 ---------A   01560  LET C(2,1)=-1
    0x5645d3965170 ---------A   01570  LET C(4,2)=-1
    0x5645d3965500 ---------A   01580  LET C(5,2)=-1
    0x5645d3965890 ---------A   01590  LET C(6,2)=-1
    0x5645d3965c20 ---------A   01600  LET C(1,2)=1
    0x5645d3965fb0 ---------A   01610  LET C(2,2)=1
    0x5645d3966340 ---------A   01620  LET C(6,1)=1
    0x5645d39666d0 ---------A   01630  LET C(7,1)=1
    0x5645d3966a60 ---------A   01640  LET C(8,1)=1
    0x5645d3966df0 ---------A   01650  LET C(8,2)=1
    0x5645d3967590 ---------A   01660  LET C(9,2)=1
    0x5645d39677a0 ---------A   01670  DIM D(8)
    0x5645d3967a70 ---------A   01680  FOR I=1 TO 8
    0x5645d3967d70 ---------A   01690  LET D(I)=0
    0x5645d3967ea0 ---------A   01700  NEXT I
    0x5645d3968190 ---------A   01710  DIM D$(8)
    0x5645d3968230 ---------A   01720  RESTORE
    0x5645d3968fd0 ---------A   01730  READ D$(1),D$(2),D$(3),D$(4),D$(5),D$(6),D$(7),D$(8)
    0x5645d39693f0 ---------A   01740  DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    0x5645d39697e0 ---------A   01750  DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    0x5645d3969ad0 ---------A   01760  LET G4$="III"
    0x5645d3969da0 ---------A   01770  DIM G1$(16)
    0x5645d396a070 ---------A   01780  FOR I=1 TO 16
    0x5645d396a2b0 ---------A   01790  READ G1$(I)
    0x5645d396a3e0 ---------A   01800  NEXT I
    0x5645d396ab00 ---------A   01810  DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    0x5645d396aff0 ---------A   01820  DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    0x5645d396b3e0 ---------A   01830  DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    0x5645d396b6b0 ---------A   01840  LET B9=0
    0x5645d396b990 ---------A   01850  LET K9=0
    0x5645d396bc80 ---------A   01860  LET A1$="NSLPTSDCX"
    0x5645d396bcf0 ---------A   01870  REM
    0x5645d396bdf0 ---------A   01880  REM ===============================================================
    0x5645d396be80 ---------A   01890  REM
    0x5645d396bf40 ---------A   01900  REM  SET UP WHAT EXISTS IN GALAXY ...
    0x5645d396c230 ---------A   01910  FOR I=1 TO 8
    0x5645d396c5d0 ---------A   01920  FOR J=1 TO 8
    0x5645d396c9a0 ---------A   01930  LET R1=RND(1)
    0x5645d396cbd0 ---------A   01940  IF R1>.98 GOTO 1990
    0x5645d396ce40 ---------A   01950  IF R1>.95 GOTO 2020
    0x5645d396d0b0 ---------A   01960  IF R1>.8  GOTO 2050
    0x5645d396d3b0 ---------A   01970  LET K3=0
    0x5645d396d420 ---------A   01980  GOTO 2070
    0x5645d396d630 ---------A T 01990  LET K3=3
    0x5645d396d960 ---------A   02000  LET K9=K9+3
    0x5645d396d9d0 ---------A   02010  GOTO 2070
    0x5645d396dbe0 ---------A T 02020  LET K3=2
    0x5645d396df10 ---------A   02030  LET K9=K9+2
    0x5645d396df80 ---------A   02040  GOTO 2070
    0x5645d396e190 ---------A T 02050  LET K3=1
    0x5645d396e4c0 ---------A   02060  LET K9=K9+1
    0x5645d396e7c0 ---------A T 02070  LET R1=RND(1)
    0x5645d396e9f0 ---------A   02080  IF R1>.96 GOTO 2110
    0x5645d396ecf0 ---------A   02090  LET B3=0
    0x5645d396ed60 ---------A   02100  GOTO 2130
    0x5645d396ef70 ---------A T 02110  LET B3=1
    0x5645d396f2b0 ---------A   02120  LET B9=B9+1
    0x5645d396f950 ---------A T 02130  LET S3=INT(RND(1)*8+1)
    0x5645d39701a0 ---------A   02140  LET G(I,J)=K3*100+B3*10+S3
    0x5645d3970230 ---------A   02150  REM K3=#KLINGONS B3=#STARBASES S3=#STARS
    0x5645d3970620 ---------A   02160  LET Z(I,J)=0
    0x5645d3970750 ---------A   02170  NEXT J
    0x5645d39708a0 ---------A   02180  NEXT I
    0x5645d3970bb0 ---------A   02190  LET K7=K9
    0x5645d3970ea0 ---------A   02200  LET X$=""
    0x5645d39711a0 ---------A   02210  LET X0$=" IS "
    0x5645d39713d0 ---------A   02220  IF B9<>0 GOTO 2280
    0x5645d3971620 ---------A   02230  LET B9=1
    0x5645d39719d0 ---------A   02240  IF G(6,3)>=200 GOTO 2270
    0x5645d3972040 ---------A   02250  LET G(6,3)=G(6,3)+100
    0x5645d3972380 ---------A   02260  LET K9=K9+1
    0x5645d39729b0 ---------A T 02270  LET G(6,3)=G(6,3)+10
    0x5645d3972be0 ---------A T 02280  IF B9=1 GOTO 2330
    0x5645d3972e40 ---------A   02290  LET X$="S"
    0x5645d3973880 ---------A   02300  LET X0$=" ARE "
    0x5645d39739d0 ---------A   02310  PRINT " "
    0x5645d3973b50 ---------A   02320  PRINT " "
    0x5645d3973cc0 ---------A T 02330  PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    0x5645d3973e50 ---------A   02340  PRINT " "
    0x5645d3974200 ---------A   02350  PRINT "    DESTROY THE "K9" KLINGON WARSHIPS WHICH HAVE INVADED"
    0x5645d39743c0 ---------A   02360  PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x5645d3974b80 ---------A   02370  PRINT "  ON STARDATE"T0+T9"; THIS GIVES YOU"T9" DAYS.  THERE"X0$
    0x5645d3975100 ---------A   02380  PRINT " "B9"STARBASE";X$" IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    0x5645d3975290 ---------A   02390  PRINT " "
    0x5645d3975430 ---------A   02400  PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    0x5645d3975590 ---------A   02410  INPUT A$
    0x5645d3975610 ---------A   02420  REM
    0x5645d3975710 ---------A   02430  REM ===============================================================
    0x5645d39757a0 ---------A   02440  REM
    0x5645d3975870 ---------A   02450  REM *** HERE ANY TIME ENTER NEW QUADRANT ...
    0x5645d3975b80 ---------A T 02460  LET Z4=Q1
    0x5645d3975e70 ---------A   02470  LET Z5=Q2
    0x5645d3976080 ---------A   02480  LET K3=0
    0x5645d3976290 ---------A   02490  LET B3=0
    0x5645d39764a0 ---------A   02500  LET S3=0
    0x5645d3976770 ---------A   02510  LET G5=0
    0x5645d3976c20 ---------A   02520  LET D4=.5*RND(1)
    0x5645d3976fc0 ---------A   02530  FOR I7 = 1 TO 8
    0x5645d39773a0 ---------A   02540  Q$(I7)=SPACE$(24)
    0x5645d39774d0 ---------A   02550  NEXT I7
    0x5645d3977720 ---------A   02560  IF Q1<1 GOTO 2770
    0x5645d3977980 ---------A   02570  IF Q1>8 GOTO 2770
    0x5645d3977be0 ---------A   02580  IF Q2<1 GOTO 2770
    0x5645d3977e40 ---------A   02590  IF Q2>8 GOTO 2770
    0x5645d3977ee0 ---------A   02600  GOSUB 10960
    0x5645d3978040 ---------A   02610  PRINT " "
    0x5645d39782a0 ---------A   02620  IF T<>T0 GOTO 2660
    0x5645d3978490 ---------A   02630  PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    0x5645d39788c0 ---------A   02640  PRINT "IN THE GALACTIC QUADRANT, '"G2$"'."
    0x5645d3978960 ---------A   02650  GOTO 2670
    0x5645d3978cb0 ---------A T 02660  PRINT "NOW ENTERING "G2$" QUADRANT ..."
    0x5645d3978e20 ---------A T 02670  PRINT " "
    0x5645d39793e0 ---------A   02680  LET X=G(Q1,Q2)*.01
    0x5645d3979700 ---------A   02690  LET K3=INT(X)
    0x5645d3979c90 ---------A   02700  LET B3=INT((X-K3)*10)
    0x5645d397a640 ---------A   02710  LET S3=G(Q1,Q2)-INT(G(Q1,Q2)*.1)*10
    0x5645d397a870 ---------A   02720  IF K3=0 GOTO 2760
    0x5645d397aa30 ---------A   02730  PRINT "COMBAT AREA      CONDITION RED"
    0x5645d397ac70 ---------A   02740  IF S>200 GOTO 2760
    0x5645d397ae20 ---------A   02750  PRINT "   SHIELDS DANGEROUSLY LOW"
    0x5645d397b040 ---------A T 02760  MAT K=ZER
    0x5645d397b320 ---------A T 02770  FOR I=1 TO 3
    0x5645d397b6e0 ---------A   02780  LET K(I,3)=0
    0x5645d397b810 ---------A   02790  NEXT I
    0x5645d397b8a0 ---------A   02800  REM
    0x5645d397b9a0 ---------A   02810  REM ===============================================================
    0x5645d397ba30 ---------A   02820  REM
    0x5645d397bb20 ---------A   02830  REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS
    0x5645d397bbf0 ---------A   02840  REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    0x5645d397be40 ---------A   02850  LET A$="<*>"
    0x5645d397c130 ---------A   02860  LET Z1=S1
    0x5645d397c420 ---------A   02870  LET Z2=S2
    0x5645d397c490 ---------A   02880  GOSUB 10550
    0x5645d397c780 ---------A   02890  FOR I=1 TO K3
    0x5645d397c800 ---------A   02900  GOSUB 10440
    0x5645d397ca30 ---------A   02910  LET A$="+++"
    0x5645d397cc60 ---------A   02920  LET Z1=R1
    0x5645d397cf50 ---------A   02930  LET Z2=R2
    0x5645d397cfc0 ---------A   02940  GOSUB 10550
    0x5645d397d390 ---------A   02950  LET K(I,1)=R1
    0x5645d397d770 ---------A   02960  LET K(I,2)=R2
    0x5645d397db20 ---------A   02970  LET K(I,3)=200
    0x5645d397dc50 ---------A   02980  NEXT I
    0x5645d397df60 ---------A   02990  FOR I=1 TO B3
    0x5645d397dfe0 ---------A   03000  GOSUB 10440
    0x5645d397e210 ---------A   03010  LET A$=">!<"
    0x5645d397e440 ---------A   03020  LET Z1=R1
    0x5645d397e670 ---------A   03030  LET Z2=R2
    0x5645d397e6e0 ---------A   03040  GOSUB 10550
    0x5645d397e9d0 ---------A   03050  LET B4=Z1
    0x5645d397ecc0 ---------A   03060  LET B5=Z2
    0x5645d397edf0 ---------A   03070  NEXT I
    0x5645d397f100 ---------A   03080  FOR I=1 TO S3
    0x5645d397f180 ---------A   03090  GOSUB 10440
    0x5645d397f3b0 ---------A   03100  LET A$=" * "
    0x5645d397f5e0 ---------A   03110  LET Z1=R1
    0x5645d397f810 ---------A   03120  LET Z2=R2
    0x5645d397f880 ---------A   03130  GOSUB 10550
    0x5645d397f9b0 ---------A   03140  NEXT I
    0x5645d397fa50 ---------A T 03150  GOSUB 8070
    0x5645d397fda0 ---------A T 03160  IF S+E<=10 GOTO 3190
    0x5645d3980000 ---------A   03170  IF E>10 GOTO 3230
    0x5645d3980330 ---------A   03180  IF D(7)>=0 GOTO 3230
    0x5645d39809e0 ---------A T 03190  PRINT CHR$(7)"** FATAL ERROR **"CHR$(7)"   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    0x5645d3980bb0 ---------A   03200  PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    0x5645d3980d40 ---------A   03210  PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    0x5645d3980dc0 ---------A   03220  GOTO 7850
    0x5645d3980f30 ---------A T 03230  PRINT "COMMAND";
    0x5645d3981090 ---------A   03240  INPUT A$
    0x5645d3981390 ---------A   03250  FOR I=1 TO 9
    0x5645d3981ad0 ---------A   03260  IF MID$(A$,1,1)<>MID$(A1$,I,1) GOTO 3320
    0x5645d3981d40 ---------A   03270  IF I<>2 GOTO 3310
    0x5645d3982090 ---------A   03280  IF LEN(A$)<2 GOTO 3310
    0x5645d3982580 ---------A   03290  IF MID$(A$,2,1)="R" GOTO 3310
    0x5645d3982800 ---------A   03300  LET I=6
    0x5645d3983010 ---------A T 03310  ON I GOTO 3490, 3150, 5380, 5670, 6140, 7080, 7270, 8950, 7880
    0x5645d3983150 ---------A T 03320  NEXT I
    0x5645d3983300 ---------A   03330  PRINT "ENTER ONE OF THE FOLLOWING:"
    0x5645d3983480 ---------A   03340  PRINT "  NAV (TO SET COURSE)"
    0x5645d3983610 ---------A   03350  PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    0x5645d3983790 ---------A   03360  PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    0x5645d3983920 ---------A   03370  PRINT "  PHA (TO FIRE PHASERS)"
    0x5645d3983ab0 ---------A   03380  PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    0x5645d3983c40 ---------A   03390  PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    0x5645d3983dd0 ---------A   03400  PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    0x5645d3983f60 ---------A   03410  PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    0x5645d39840d0 ---------A   03420  PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    0x5645d3984230 ---------A   03430  PRINT " "
    0x5645d39842b0 ---------A   03440  GOTO 3160
    0x5645d3984320 ---------A   03450  REM
    0x5645d3984420 ---------A   03460  REM ===============================================================
    0x5645d39844b0 ---------A   03470  REM
    0x5645d3984560 ---------A   03480  REM  COURSE CONTROL BEGINS HERE
    0x5645d3984700 ---------A T 03490  PRINT "COURSE(1-9)";
    0x5645d3984930 ---------A   03500  INPUT C1
    0x5645d3984b70 ---------A   03510  IF C1>=1 GOTO 3540
    0x5645d3984d40 ---------A T 03520  PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5645d3984dc0 ---------A   03530  GOTO 3160
    0x5645d3984ff0 ---------A T 03540  IF C1<9 GOTO 3570
    0x5645d3985250 ---------A   03550  IF C1>9 GOTO 3520
    0x5645d3985300 ---------A   03560  GOTO 3520
    0x5645d3985470 ---------A T 03570  PRINT "WARP FACTOR (0-8)";
    0x5645d3973060 ---------A   03580  INPUT W1
    0x5645d39732a0 ---------A   03590  IF W1 > 0 GOTO 3630
    0x5645d3973480 ---------A   03600  PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    0x5645d3986620 ---------A   03610  PRINT "          SET WARP "W1" !"
    0x5645d39866b0 ---------A   03620  GOTO 3160
    0x5645d39868e0 ---------A T 03630  IF W1<=8 GOTO 3670
    0x5645d3986ac0 ---------A   03640  PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    0x5645d3986e20 ---------A   03650  PRINT "         TAKE WARP "W1"!/"
    0x5645d3986eb0 ---------A   03660  GOTO 3160
    0x5645d39871a0 ---------A T 03670  IF D(1)>=0 GOTO 3710
    0x5645d3987410 ---------A   03680  IF W1<=0.2 GOTO 3710
    0x5645d39875e0 ---------A   03690  PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    0x5645d3987670 ---------A   03700  GOTO 3490
    0x5645d3987b90 ---------A T 03710  LET N=INT(W1*8+.5)
    0x5645d3987ee0 ---------A   03720  IF E-N>=0 GOTO 3840
    0x5645d39880d0 ---------A   03730  PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x5645d3988450 ---------A   03740  PRINT "   FOR MANEUVERING AT WARP"W1"!'"
    0x5645d39887d0 ---------A   03750  IF S<N-E GOTO 3160
    0x5645d3988b00 ---------A   03760  IF D(7)<0 GOTO 3160
    0x5645d3988ef0 ---------A   03770  PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"S" UNITS"
    0x5645d3989070 ---------A   03780  PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    0x5645d39890f0 ---------A   03790  GOTO 7080
    0x5645d3989160 ---------A   03800  REM
    0x5645d3989260 ---------A   03810  REM ===============================================================
    0x5645d39892f0 ---------A   03820  REM
    0x5645d39893c0 ---------A   03830  REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...
    0x5645d39896e0 ---------A T 03840  FOR I=1 TO K3
    0x5645d3989aa0 ---------A   03850  IF K(1,3)<=0 GOTO 3950
    0x5645d3989d00 ---------A   03860  LET A$="   "
    0x5645d398a0d0 ---------A   03870  LET Z1=K(I,1)
    0x5645d398a4a0 ---------A   03880  LET Z2=K(I,2)
    0x5645d398a510 ---------A   03890  GOSUB 10550
    0x5645d398a580 ---------A   03900  GOSUB 10440
    0x5645d398a950 ---------A   03910  LET K(I,1)=Z1
    0x5645d398ad20 ---------A   03920  LET K(I,2)=Z2
    0x5645d398af50 ---------A   03930  LET A$="+++"
    0x5645d398afc0 ---------A   03940  GOSUB 10550
    0x5645d398b0f0 ---------A T 03950  NEXT I
    0x5645d398b180 ---------A   03960  GOSUB 7610
    0x5645d398b450 ---------A   03970  LET D1=0
    0x5645d398b740 ---------A   03980  LET D6=W1
    0x5645d398b970 ---------A   03990  IF W1<1 GOTO 4050
    0x5645d398bbb0 ---------A   04000  LET D6=1
    0x5645d398bc20 ---------A   04010  REM
    0x5645d398bd20 ---------A   04020  REM ===============================================================
    0x5645d398bdb0 ---------A   04030  REM
    0x5645d398be60 ---------A   04040  REM MAKE REPAIRS TO SHIP
    0x5645d398c160 ---------A T 04050  FOR I=1 TO 8
    0x5645d398c480 ---------A   04060  IF D(I)>=0 GOTO 4160
    0x5645d398c9c0 ---------A   04070  LET D(I)=D(I)+6
    0x5645d398ccd0 ---------A   04080  IF D(I)<0 GOTO 4160
    0x5645d398cf40 ---------A   04090  IF D1=1 GOTO 4120
    0x5645d398d1a0 ---------A   04100  LET D1=1
    0x5645d398d300 ---------A   04110  PRINT "DAMAGE CONTROL REPORT:"
    0x5645d398d4c0 ---------A T 04120  PRINT TAB(8);
    0x5645d398d700 ---------A   04130  LET R1=I
    0x5645d398d780 ---------A   04140  GOSUB 10780
    0x5645d398d8d0 ---------A   04150  PRINT " REPAIR COMPLETED"
    0x5645d398da10 ---------A T 04160  NEXT I
    0x5645d398daa0 ---------A   04170  REM
    0x5645d398dba0 ---------A   04180  REM ===============================================================
    0x5645d398dc30 ---------A   04190  REM
    0x5645d398dcf0 ---------A   04200  REM DAMAGE/IMPROVEMENT DURING SOME VES
    0x5645d398e010 ---------A   04210  IF RND(1)>.2 GOTO 4410
    0x5645d398e630 ---------A   04220  LET R1=INT(RND(1)*8+1)
    0x5645d398e920 ---------A   04230  IF RND(1)>=.6 GOTO 4310
    0x5645d398f170 ---------A   04240  LET D(R1)=D(R1)-(RND(1)*5+1)
    0x5645d398f2d0 ---------A   04250  PRINT " "
    0x5645d398f460 ---------A   04260  PRINT "DAMAGE CONTROL REPORT:";
    0x5645d398f4e0 ---------A   04270  GOSUB 10780
    0x5645d398f630 ---------A   04280  PRINT " DAMAGED"
    0x5645d398f790 ---------A   04290  PRINT " "
    0x5645d398f820 ---------A   04300  GOTO 4410
    0x5645d3990030 ---------A T 04310  LET D(R1)=D(R1)+(RND(1)*3+1)
    0x5645d3990190 ---------A   04320  PRINT " "
    0x5645d3990320 ---------A   04330  PRINT "DAMAGE CONTROL REPORT:";
    0x5645d39903b0 ---------A   04340  GOSUB 10780
    0x5645d3990510 ---------A   04350  PRINT " STATE OF REPAIR IMPROVED"
    0x5645d3990670 ---------A   04360  PRINT " "
    0x5645d39906f0 ---------A   04370  REM
    0x5645d39907f0 ---------A   04380  REM ===============================================================
    0x5645d3990880 ---------A   04390  REM
    0x5645d3990930 ---------A   04400  REM BEGIN MOVING STARSHIP **
    0x5645d3990b80 ---------A T 04410  LET A$="   "
    0x5645d3990e90 ---------A   04420  LET Z1=INT(S1)
    0x5645d39911a0 ---------A   04430  LET Z2=INT(S2)
    0x5645d3991220 ---------A   04440  GOSUB 10550
    0x5645d3991850 ---------A   04450  LET X1=-SIN((C1-1)*P1)
    0x5645d3991a80 ---------A   04460  LET X=S1
    0x5645d3991d80 ---------A   04470  LET Y=S2
    0x5645d39923b0 ---------A   04480  LET X2= COS((C1-1)*P1)
    0x5645d39926a0 ---------A   04490  LET Q4=Q1
    0x5645d3992990 ---------A   04500  LET Q5=Q2
    0x5645d3992c80 ---------A   04510  FOR I=1 TO N
    0x5645d3992fe0 ---------A   04520  LET S1=S1+X1
    0x5645d3993340 ---------A   04530  LET S2=S2+X2
    0x5645d3993570 ---------A   04540  IF S1<0.5 GOTO 4800
    0x5645d39937e0 ---------A   04550  IF S1>=8.5 GOTO 4800
    0x5645d3993a50 ---------A   04560  IF S2<0.5 GOTO 4800
    0x5645d3993cc0 ---------A   04570  IF S2>=8.5 GOTO 4800
    0x5645d39948d0 ---------A   04580  IF MID$(Q$(INT(S1+.5)),(3*INT(S2+.5)-2),3) = "   " GOTO 4640
    0x5645d3994c50 ---------A   04590  LET S1=S1-X1
    0x5645d3994fd0 ---------A   04600  LET S2=S2-X2
    0x5645d3995450 ---------A   04610  PRINT "WARP ENGINES SHUT DOWN AT SECTOR "INT(S1+.5);
    0x5645d39959a0 ---------A   04620  PRINT ","INT(S2+.5)" DUE TO BAD NAVIGATION"
    0x5645d3995a20 ---------A   04630  GOTO 4650
    0x5645d3995b50 ---------A T 04640  NEXT I
    0x5645d3995da0 ---------A T 04650  LET A$="<*>"
    0x5645d39961b0 ---------A   04660  S1=INT(S1+0.5)
    0x5645d39965c0 ---------A   04670  S2=INT(S2+0.5)
    0x5645d39968d0 ---------A   04680  LET Z1=INT(S1)
    0x5645d3996be0 ---------A   04690  LET Z2=INT(S2)
    0x5645d3996c50 ---------A   04700  GOSUB 10550
    0x5645d3996cc0 ---------A   04710  GOSUB 5260
    0x5645d3996fa0 ---------A   04720  LET T8=1
    0x5645d39971d0 ---------A   04730  IF W1>=1 GOTO 4750
    0x5645d3997720 ---------A   04740  LET T8=.1*INT(10*W1)
    0x5645d3997a80 ---------A T 04750  LET T=T+T8
    0x5645d3997df0 ---------A   04760  IF T>T0+T9 GOTO 7830
    0x5645d3997ec0 ---------A   04770  REM SEE IF DOCKED, THEN GET COMMAND
    0x5645d3997f60 ---------A   04780  GOTO 3150
    0x5645d3997fe0 ---------A   04790  REM EXCEEDED QUADRANT LIMITS
    0x5645d3998690 ---------A T 04800  LET X=8*Q1+X+N*X1
    0x5645d3998d20 ---------A   04810  LET Y=8*Q2+Y+N*X2
    0x5645d3999130 ---------A   04820  LET Q1=INT(X/8)
    0x5645d3999550 ---------A   04830  LET Q2=INT(Y/8)
    0x5645d3999a90 ---------A   04840  LET S1=INT(X-Q1*8)
    0x5645d3999fc0 ---------A   04850  LET S2=INT(Y-Q2*8)
    0x5645d399a2a0 ---------A   04860  LET X5=0
    0x5645d399a4d0 ---------A   04870  IF S1<>0 GOTO 4910
    0x5645d399a830 ---------A   04880  LET Q1=Q1-1
    0x5645d399aa40 ---------A   04890  LET S1=8
    0x5645d399ac60 ---------A   04900  LET X5=0
    0x5645d399ae90 ---------A T 04910  IF S2<>0 GOTO 4950
    0x5645d399b1f0 ---------A   04920  LET Q2=Q2-1
    0x5645d399b400 ---------A   04930  LET S2=8
    0x5645d399b620 ---------A   04940  LET X5=0
    0x5645d399b850 ---------A T 04950  IF Q1>=1 GOTO 4990
    0x5645d399ba90 ---------A   04960  LET X5=1
    0x5645d399bca0 ---------A   04970  LET Q1=1
    0x5645d399bec0 ---------A   04980  LET S1=1
    0x5645d399c0f0 ---------A T 04990  IF Q1<=8 GOTO 5030
    0x5645d399c330 ---------A   05000  LET X5=1
    0x5645d399c540 ---------A   05010  LET Q1=8
    0x5645d399c760 ---------A   05020  LET S1=8
    0x5645d399c990 ---------A T 05030  IF Q2>=1 GOTO 5070
    0x5645d399cbd0 ---------A   05040  LET X5=1
    0x5645d399cde0 ---------A   05050  LET Q2=1
    0x5645d399d000 ---------A   05060  LET S2=1
    0x5645d399d230 ---------A T 05070  IF Q2<=8 GOTO 5110
    0x5645d399d470 ---------A   05080  LET X5=1
    0x5645d399d680 ---------A   05090  LET Q2=8
    0x5645d399d890 ---------A   05100  LET S2=8
    0x5645d399dac0 ---------A T 05110  IF X5=0 GOTO 5180
    0x5645d399dcc0 ---------A   05120  PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    0x5645d399de80 ---------A   05130  PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    0x5645d399e030 ---------A   05140  PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    0x5645d399e1e0 ---------A   05150  PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x5645d399eb50 ---------A   05160  PRINT "   AT SECTOR "S1","S2" OF QUADRANT "Q1","Q2".'"
    0x5645d399eed0 ---------A   05170  IF T>T0+T9 GOTO 7830
    0x5645d399f5a0 ---------A T 05180  IF 8*Q1+Q2=8*Q4+Q5 GOTO 4650
    0x5645d399f900 ---------A   05190  LET T=T+1
    0x5645d399f970 ---------A   05200  GOSUB 5260
    0x5645d399f9e0 ---------A   05210  GOTO 2460
    0x5645d399fa50 ---------B   05220  REM
    0x5645d399fb50 ---------B   05230  REM ===============================================================
    0x5645d399fbe0 ---------B   05240  REM
    0x5645d399fc90 ---------B   05250  REM MANEUVER ENERGY S/R ***
    0x5645d39a0100 ---------B G 05260  LET E=E-N-10
    0x5645d39a0330 ---------B   05270  IF E>=0 GOTO 5330
    0x5645d39a0510 ---------B   05280  PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    0x5645d39a0870 ---------B   05290  LET S=S+E
    0x5645d39a0a80 ---------B   05300  LET E=0
    0x5645d39a0cb0 ---------B   05310  IF S>0 GOTO 5330
    0x5645d39a0ef0 ---------B   05320  LET S=0
    0x5645d39a0f40 ---------B T 05330  RETURN
    0x5645d39a0fc0 ---------A   05340  REM
    0x5645d39a10c0 ---------A   05350  REM ===============================================================
    0x5645d39a1150 ---------A   05360  REM
    0x5645d39a1200 ---------A   05370  REM L.R. SENSOR SCAN CODE ***
    0x5645d39a1520 ---------A T 05380  IF D(3)>=0 GOTO 5410
    0x5645d39a16d0 ---------A   05390  PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x5645d39a1780 ---------A   05400  GOTO 3160
    0x5645d39a1bf0 ---------A T 05410  PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"Q1","Q2
    0x5645d39a1ef0 ---------A   05420  LET O1$="..................."
    0x5645d39a2050 ---------A   05430  PRINT O1$
    0x5645d39a2580 ---------A   05440  FOR I=Q1-1 TO Q1+1
    0x5645d39a2600 ---------A   05450  REM    DIM N(3)
    0x5645d39a29b0 ---------A   05460  FOR I1=1 TO 3
    0x5645d39a2cb0 ---------A   05470  LET N(I1)=0
    0x5645d39a2de0 ---------A   05480  NEXT I1
    0x5645d39a3320 ---------A   05490  FOR J=Q2-1 TO Q2+1
    0x5645d39a3560 ---------A   05500  IF I<1 GOTO 5580
    0x5645d39a37c0 ---------A   05510  IF I>8 GOTO 5580
    0x5645d39a3a20 ---------A   05520  IF J<1 GOTO 5560
    0x5645d39a3c80 ---------A   05530  IF J>8 GOTO 5560
    0x5645d39a43c0 ---------A   05540  LET N(J-Q2+2)=G(I,J)
    0x5645d39a4970 ---------A   05550  LET Z(I,J)=G(I,J)
    0x5645d39a4aa0 ---------A T 05560  NEXTJ
    0x5645d39a4b40 ---------A   05570  REM   DIM P1$(20)
    0x5645d39a4e80 ---------A T 05580  LET P1$=": ### : ### : ### :"
    0x5645d39a54f0 ---------A   05590  PRINT USING P1$,N(1),N(2),N(3)
    0x5645d39a5650 ---------A   05600  PRINT O1$
    0x5645d39a5790 ---------A   05610  NEXT I
    0x5645d39a5820 ---------A   05620  GOTO 3160
    0x5645d39a5890 ---------A   05630  REM
    0x5645d39a5990 ---------A   05640  REM ===============================================================
    0x5645d39a5a20 ---------A   05650  REM
    0x5645d39a5ae0 ---------A   05660  REM *** PHASER CONTROL CODE BEGINS HERE
    0x5645d39a5d30 ---------A T 05670  IF K3>0 GOTO 5710
    0x5645d39a5f20 ---------A   05680  PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    0x5645d39a6090 ---------A   05690  PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    0x5645d39a6120 ---------A   05700  GOTO 3160
    0x5645d39a6410 ---------A T 05710  IF D(4)>=0 GOTO 5740
    0x5645d39a65a0 ---------A   05720  PRINT "PHASERS INOPERATIVE"
    0x5645d39a6630 ---------A   05730  GOTO 3160
    0x5645d39a6920 ---------A T 05740  IF D(8)>=0 GOTO 5760
    0x5645d39a6af0 ---------A   05750  PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    0x5645d39a6c70 ---------A T 05760  PRINT "PHASERS LOCKED ON TARGET;  "
    0x5645d39a6ee0 ---------A T 05770  PRINT "ENERGY AVAILABLE ="E
    0x5645d39a7070 ---------A   05780  PRINT "NUMBER OF UNITS TO FIRE:";
    0x5645d39a71d0 ---------A   05790  INPUT X
    0x5645d39a7410 ---------A   05800  IF X<=0 GOTO 3160
    0x5645d39a77a0 ---------A   05810  IF E-X<0 GOTO 5770
    0x5645d39a7b20 ---------A   05820  LET E=E-X
    0x5645d39a7ba0 ---------A   05830  GOSUB 7610
    0x5645d39a7e90 ---------A   05840  IF D(7)>=0 GOTO 5860
    0x5645d39a82d0 ---------A   05850  LET X=X*RND(1)
    0x5645d39a87c0 ---------A T 05860  LET H1=INT(X/K3)
    0x5645d39a8aa0 ---------A   05870  FOR I=1 TO 3
    0x5645d39a8e80 ---------A   05880  IF K(I,3)<=0 GOTO 6080
    0x5645d39a97f0 ---------A   05890  LET H=INT((H1/FND(0))*(RND(1)*2))
    0x5645d39a9ce0 ---------A   05900  IF H>.15*K(I,3) GOTO 5940
    0x5645d39a9eb0 ---------A   05910  PRINT "SENSORS SHOW NO DAMAGE"
    0x5645d39aa650 ---------A   05920  PRINT "    TO ENEMY AT "K(I,1)","K(I,2)
    0x5645d39aa6e0 ---------A   05930  GOTO 6080
    0x5645d39aada0 ---------A T 05940  LET K(I,3)=K(I,3)-H
    0x5645d39ab650 ---------A   05950  PRINT H" UNIT HIT ON KLINGON AT SECTOR "K(I,1)","K(I,2)
    0x5645d39aba30 ---------A   05960  IF K(I,3)<=0 GOTO 5990
    0x5645d39abf80 ---------A   05970  PRINT "   (SENSORS SHOW"K(I,3)" UNITS REMAINING)"
    0x5645d39ac020 ---------A   05980  GOTO 6080
    0x5645d39ac180 ---------A T 05990  PRINT " *** KLINGON DESTROYED ***"
    0x5645d39ac4c0 ---------A   06000  LET K3=K3-1
    0x5645d39ac7f0 ---------A   06010  LET K9=K9-1
    0x5645d39aca20 ---------A   06020  A$="   "
    0x5645d39acdf0 ---------A   06030  LET Z1=K(I,1)
    0x5645d39ad1c0 ---------A   06040  LET Z2=K(I,2)
    0x5645d39ad240 ---------A   06050  GOSUB 10550
    0x5645d39ada80 ---------A   06060  LET G(Q1,Q2)=K3*100+B3*10+S3
    0x5645d39adcb0 ---------A   06070  IF K9<=0 GOTO 7980
    0x5645d39ade10 ---------A T 06080  NEXT I
    0x5645d39adea0 ---------A   06090  GOTO 3160
    0x5645d39adf10 ---------A   06100  REM
    0x5645d39ae010 ---------A   06110  REM ===============================================================
    0x5645d39ae0a0 ---------A   06120  REM
    0x5645d39ae160 ---------A   06130  REM PHOTON TORPEDO CODE BEGINS ***
    0x5645d3985770 ---------A T 06140  IF D(5)>=0 GOTO 6170
    0x5645d3985920 ---------A   06150  PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    0x5645d39859a0 ---------A   06160  GOTO 3160
    0x5645d3985bd0 ---------A T 06170  IF P>0 GOTO 6200
    0x5645d3985d80 ---------A   06180  PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x5645d3985e10 ---------A   06190  GOTO 3160
    0x5645d3985f80 ---------A T 06200  PRINT "TORPEDO COURSE (1-9)";
    0x5645d39860f0 ---------A   06210  INPUT C1
    0x5645d3986330 ---------A   06220  IF C1>=1 GOTO 6250
    0x5645d39b0210 ---------A T 06230  PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5645d39b0290 ---------A   06240  GOTO 3160
    0x5645d39b04c0 ---------A T 06250  IF C1>9 GOTO 6230
    0x5645d39b0720 ---------A   06260  IF C1<9 GOTO 6290
    0x5645d39b0990 ---------A   06270  IF C1>=9 GOTO 6200
    0x5645d39b0be0 ---------A   06280  LET C1=1
    0x5645d39b1160 ---------A T 06290  LET X1=-SIN((C1-1)*P1)
    0x5645d39b16e0 ---------A   06300  LET X2= COS((C1-1)*P1)
    0x5645d39b1b10 ---------A   06310  IF ABS(X1)<ABS(X2) THEN 6360
    0x5645d39b1ff0 ---------A   06320  M9=ABS(1/X1)
    0x5645d39b2300 ---------A   06330  X1=SGN(X1)
    0x5645d39b2650 ---------A   06340  X2=X2*M9
    0x5645d39b26c0 ---------A   06350  GOTO 6390
    0x5645d39b2ad0 ---------A T 06360  M9=ABS(1/X2)
    0x5645d39b2de0 ---------A   06370  X2=SGN(X2)
    0x5645d39b3130 ---------A   06380  X1=X1*M9
    0x5645d39b3460 ---------A T 06390  LET E=E-2
    0x5645d39b3690 ---------A   06400  LET X=S1
    0x5645d39b38c0 ---------A   06410  LET Y=S2
    0x5645d39b3c00 ---------A   06420  LET P=P-1
    0x5645d39b3d50 ---------A   06430  PRINT "TORPEDO TRACK:"
    0x5645d39b40b0 ---------A T 06440  LET X=X+X1
    0x5645d39b4400 ---------A   06450  LET Y=Y+X2
    0x5645d39b48d0 ---------A   06460  LET X9=INT(X+.5)
    0x5645d39b4da0 ---------A   06470  LET Y9=INT(Y+.5)
    0x5645d39b4fd0 ---------A   06480  IF X9<1 GOTO 7010
    0x5645d39b5240 ---------A   06490  IF X9>=9 GOTO 7010
    0x5645d39b54a0 ---------A   06500  IF Y9<1 GOTO 7010
    0x5645d39b5710 ---------A   06510  IF Y9>=9 GOTO 7010
    0x5645d39b5ba0 ---------A   06520  PRINT "               "X9","Y9
    0x5645d39b5de0 ---------A   06530  LET A$="   "
    0x5645d39b6010 ---------A   06540  LET Z1=X9
    0x5645d39b6240 ---------A   06550  LET Z2=Y9
    0x5645d39b62c0 ---------A   06560  GOSUB 10840
    0x5645d39b65b0 ---------A   06570  IF Z3<>0 GOTO 6440
    0x5645d39b6810 ---------A   06580  LET A$="+++"
    0x5645d39b6a40 ---------A   06590  LET Z1=X9
    0x5645d39b6c70 ---------A   06600  LET Z2=Y9
    0x5645d39b6ce0 ---------A   06610  GOSUB 10840
    0x5645d39b6f10 ---------A   06620  IF Z3=0 GOTO 6730
    0x5645d39b70b0 ---------A   06630  PRINT "*** KLINGON DESTROYED ***"
    0x5645d39b73f0 ---------A   06640  LET K3=K3-1
    0x5645d39b7730 ---------A   06650  LET K9=K9-1
    0x5645d39b7960 ---------A   06660  IF K9<=0 GOTO 7980
    0x5645d39b7c70 ---------A   06670  FOR I=1 TO 3
    0x5645d39b8070 ---------A   06680  IF X9<>K(I,1) GOTO 6700
    0x5645d39b84a0 ---------A   06690  IF Y9=K(I,2) GOTO 6710
    0x5645d39b8600 ---------A T 06700  NEXT I
    0x5645d39b89d0 ---------A T 06710  LET K(I,3)=0
    0x5645d39b8a40 ---------A   06720  GOTO 6950
    0x5645d39b8c70 ---------A T 06730  LET A$=" * "
    0x5645d39b8ea0 ---------A   06740  LET Z1=X9
    0x5645d39b90d0 ---------A   06750  LET Z2=Y9
    0x5645d39b9140 ---------A   06760  GOSUB 10840
    0x5645d39b9370 ---------A   06770  IF Z3=0 GOTO 6800
    0x5645d39b9930 ---------A   06780  PRINT "STAR AT"X9;","Y9;" ABSORBED TORPEDO ENERGY."
    0x5645d39b99b0 ---------A   06790  GOTO 7020
    0x5645d39b9be0 ---------A T 06800  LET A$=">!<"
    0x5645d39b9e10 ---------A   06810  LET Z1=X9
    0x5645d39ba040 ---------A   06820  LET Z2=Y9
    0x5645d39ba0b0 ---------A   06830  GOSUB 10840
    0x5645d39ba2e0 ---------A   06840  IF Z3=0 GOTO 6200
    0x5645d39ba490 ---------A   06850  PRINT "*** STARBASE DESTROYED ***"
    0x5645d39ba7d0 ---------A   06860  LET B3=B3-1
    0x5645d39bab00 ---------A   06870  LET B9=B9-1
    0x5645d39bad30 ---------A   06880  IF B9>0 GOTO 6920
    0x5645d39baf60 ---------A   06890  PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    0x5645d39bb0f0 ---------A   06900  PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    0x5645d39bb1a0 ---------A   06910  GOTO 7880
    0x5645d39bb320 ---------A T 06920  PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x5645d39bb480 ---------A   06930  PRINT "   COURT MARTIAL!"
    0x5645d39bb6a0 ---------A   06940  LET D0=0
    0x5645d39bb8d0 ---------A T 06950  LET A$="   "
    0x5645d39bbb00 ---------A   06960  LET Z1=X9
    0x5645d39bbd30 ---------A   06970  LET Z2=Y9
    0x5645d39bbdb0 ---------A   06980  GOSUB 10550
    0x5645d39bc5e0 ---------A   06990  LET G(Q1,Q2)=K3*100+B3*10+S3
    0x5645d39bc660 ---------A   07000  GOTO 7020
    0x5645d39bc7b0 ---------A T 07010  PRINT "TORPEDO MISSED"
    0x5645d39bc830 ---------A T 07020  GOSUB 7610
    0x5645d39bc8a0 ---------A   07030  GOTO 3160
    0x5645d39bc910 ---------A   07040  REM
    0x5645d39bca10 ---------A   07050  REM ===============================================================
    0x5645d39bcaa0 ---------A   07060  REM
    0x5645d39bcb60 ---------A   07070  REM *** SHIELD CONTROL STARTS HERE
    0x5645d39bce80 ---------A T 07080  IF D(7)>=0 GOTO 7110
    0x5645d39bd020 ---------A   07090  PRINT "SHIELD CONTROL INOPERABLE"
    0x5645d39bd0d0 ---------A   07100  GOTO 3160
    0x5645d39bd550 ---------A T 07110  PRINT "ENERGY AVAILABLE ="E+5". NUMBER OF UNITS TO SHIELDS:";
    0x5645d39bd6b0 ---------A   07120  INPUT X
    0x5645d39bd8f0 ---------A   07130  IF X>=0 GOTO 7170
    0x5645d39bdb70 ---------A   07140  IF S<>X GOTO 7170
    0x5645d39bdd00 ---------A   07150  PRINT "(SHIELDS UNCHANGED)"
    0x5645d39bdd90 ---------A   07160  GOTO 3160
    0x5645d39be200 ---------A T 07170  IF E+S-X<0 GOTO 7110
    0x5645d39be6a0 ---------A   07180  LET E=E+S-X
    0x5645d39be8f0 ---------A   07190  LET S=X
    0x5645d39bea70 ---------A   07200  PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x5645d39bedd0 ---------A   07210  PRINT "  'SHIELDS NOW AT "S" PER YOUR COMMAND'"
    0x5645d39bee50 ---------A   07220  GOTO 3160
    0x5645d39beec0 ---------A   07230  REM
    0x5645d39befc0 ---------A   07240  REM ===============================================================
    0x5645d39bf050 ---------A   07250  REM
    0x5645d39bf110 ---------A   07260  REM *** DAMAGE CONTROL STARTS HERE
    0x5645d39bf430 ---------A T 07270  IF D(6)>=0 GOTO 7490
    0x5645d39bf5e0 ---------A   07280  PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    0x5645d39bf820 ---------A T 07290  IF D0=0 GOTO 3160
    0x5645d39bfb20 ---------A   07300  LET D3=0
    0x5645d39bfe00 ---------A   07310  FOR I=1 TO 8
    0x5645d39c0120 ---------A   07320  IF D(I)>=0 GOTO 7340
    0x5645d39c0480 ---------A   07330  LET D3=D3+.1
    0x5645d39c05b0 ---------A T 07340  NEXT I
    0x5645d39c0800 ---------A   07350  IF D3=0 GOTO 3160
    0x5645d39c0b80 ---------A   07360  LET D3=D3+D4
    0x5645d39c0db0 ---------A   07370  IF D3<1 GOTO 7390
    0x5645d39c1020 ---------A   07380  LET D3=.9
    0x5645d39c11c0 ---------A T 07390  PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    0x5645d39c1360 ---------A   07400  PRINT "ESTIMATED TIME TO REPAIR: ";
    0x5645d39c15f0 ---------A   07410  PRINT USING ".# STARDATES",D3
    0x5645d39c1790 ---------A   07420  PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    0x5645d39c1900 ---------A   07430  INPUT A$
    0x5645d39c1b60 ---------A   07440  IF A$<>"YES" GOTO 3160
    0x5645d39c1e60 ---------A   07450  FOR I=1 TO 8
    0x5645d39c2160 ---------A   07460  LET D(I)=0
    0x5645d39c2290 ---------A   07470  NEXT I
    0x5645d39c2700 ---------A   07480  LET T=T+D3+.1
    0x5645d39c2870 ---------A T 07490  PRINT " "
    0x5645d39c29e0 ---------A   07500  PRINT "DEVICE        STATE OF REPAIR"
    0x5645d39c2cc0 ---------A   07510  FOR R1=1 TO 8
    0x5645d39c2d50 ---------A   07520  GOSUB 10780
    0x5645d39c3080 ---------A   07530  PRINT USING "  -##.##",D(R1)
    0x5645d39c31c0 ---------A   07540  NEXT R1
    0x5645d39c3330 ---------A   07550  PRINT " "
    0x5645d39c33b0 ---------A   07560  GOTO 7290
    0x5645d39c3420 ---------C   07570  REM
    0x5645d39c3520 ---------C   07580  REM ===============================================================
    0x5645d39c35b0 ---------C   07590  REM
    0x5645d39c3670 ---------C   07600  REM "KLINGONS SHOOTING" CODE BEGINS ***
    0x5645d39c38d0 ---------C G 07610  IF K3<=0 GOTO 7820
    0x5645d39c3b30 ---------C   07620  IF D0=0 GOTO 7650
    0x5645d39c3cf0 ---------C   07630  PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x5645d39c3d70 ---------C   07640  GOTO 7820
    0x5645d39c4050 ---------C T 07650  FOR I=1 TO 3
    0x5645d39c4430 ---------C   07660  IF K(I,3)<=0 GOTO 7810
    0x5645d39c4e70 ---------C   07670  LET H=INT((K(I,3)/FND(0))*(2+RND(1)))
    0x5645d39c51f0 ---------C   07680  LET S=S-H
    0x5645d39c5aa0 ---------C   07690  PRINT H" UNIT HIT ON ENTERPRISE FROM SECTOR"K(I,1)","K(I,2)
    0x5645d39c5ce0 ---------C   07700  IF S<0 GOTO 7820
    0x5645d39c60a0 ---------C   07710  PRINT "      (SHIELDS DOWN TO"S" UNITS.)"
    0x5645d39c62e0 ---------C   07720  IF H<20 GOTO 7810
    0x5645d39c6610 ---------C   07730  IF RND(1)>.6 GOTO 7810
    0x5645d39c69a0 ---------C   07740  IF H/S<=.02 GOTO 7810
    0x5645d39c70e0 ---------C   07750  LET D2=H/S+.5*RND(1)
    0x5645d39c76c0 ---------C   07760  LET R1=INT(RND(1)*8+1)
    0x5645d39c7bf0 ---------C   07770  LET D(R1)=D(R1)-D2
    0x5645d39c7d70 ---------C   07780  PRINT "DAMAGE CONTROL REPORTS '";
    0x5645d39c7e00 ---------C   07790  GOSUB 10780
    0x5645d39c7f50 ---------C   07800  PRINT " DAMAGED BY THE HIT!'"
    0x5645d39c8090 ---------C T 07810  NEXT I
    0x5645d39c8100 ---------C T 07820  RETURN
    0x5645d39c8370 ---------A T 07830  PRINT "ITS IS STARDATE "T
    0x5645d39c83f0 ---------A   07840  GOTO 7880
    0x5645d39c8580 ---------A T 07850  PRINT " "
    0x5645d39c8720 ---------A   07860  PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    0x5645d39c8ab0 ---------A   07870  PRINT "IT IS STARDATE "T"."
    0x5645d39c8e30 ---------A T 07880  PRINT "THERE WERE "K9" KLINGON BATTLE CRUISERS LEFT AT "
    0x5645d39c8fa0 ---------A   07890  PRINT "THE END OF YOUR MISSION."
    0x5645d39c9100 ---------A T 07900  PRINT " "
    0x5645d39c9290 ---------A   07910  PRINT " "
    0x5645d39c9440 ---------A   07920  PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x5645d39c95e0 ---------A   07930  PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x5645d39c9750 ---------A   07940  PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    0x5645d39c98c0 ---------A   07950  INPUT A$
    0x5645d39c9b20 ---------A   07960  IF A$="AYE" GOTO 1280
    0x5645d39c9c00 ---------A   07970  GOTO 11100
    0x5645d39c9db0 ---------A T 07980  PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    0x5645d39c9f30 ---------A   07990  PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    0x5645d39ca0c0 ---------A   08000  PRINT " "
    0x5645d39ca830 ---------A   08010  PRINT "YOUR EFFICIENCY RATING IS "((K/(T-T0))*1000)"."
    0x5645d39ca8b0 ---------A   08020  GOTO 7900
    0x5645d39ca920 ---------D   08030  REM
    0x5645d39caa20 ---------D   08040  REM ===============================================================
    0x5645d39caab0 ---------D   08050  REM
    0x5645d39cab80 ---------D   08060  REM S.R. SENSOR SCAN & STARTUP SUBR. ***
    0x5645d39cb0d0 ---------D G 08070  FOR I=S1-1 TO S1+1
    0x5645d39cb600 ---------D   08080  FOR J=S2-1 TO S2+1
    0x5645d39cba20 ---------D   08090  IF INT(I+.5)<1 GOTO 8180
    0x5645d39cbe70 ---------D   08100  IF INT(I+.5)>8 GOTO 8180
    0x5645d39cc2c0 ---------D   08110  IF INT(J+.5)<1 GOTO 8180
    0x5645d39cc710 ---------D   08120  IF INT(J+.5)>8 GOTO 8180
    0x5645d39cc970 ---------D   08130  LET A$=">!<"
    0x5645d39ccba0 ---------D   08140  LET Z1=I
    0x5645d39ccdd0 ---------D   08150  LET Z2=J
    0x5645d39cce50 ---------D   08160  GOSUB 10840
    0x5645d39cd080 ---------D   08170  IF Z3=1 GOTO 8220
    0x5645d39cd1e0 ---------D T 08180  NEXT J
    0x5645d39cd330 ---------D   08190  NEXT I
    0x5645d39cd560 ---------D   08200  LET D0=0
    0x5645d39cd5d0 ---------D   08210  GOTO 8290
    0x5645d39cd7e0 ---------D T 08220  LET D0=1
    0x5645d39cdad0 ---------D   08230  LET C$="DOCKED"
    0x5645d39cdce0 ---------D   08240  LET E=3000
    0x5645d39cdf10 ---------D   08250  LET P=10
    0x5645d39ce070 ---------D   08260  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x5645d39ce290 ---------D   08270  LET S=0
    0x5645d39ce300 ---------D   08280  GOTO 8360
    0x5645d39ce530 ---------D T 08290  IF K3>0 GOTO 8330
    0x5645d39ce8c0 ---------D   08300  IF E<E0*.1 GOTO 8350
    0x5645d39ceb20 ---------D   08310  LET C$=" GREEN"
    0x5645d39ceba0 ---------D   08320  GOTO 8360
    0x5645d39cf2b0 ---------D T 08330  C$=" "+CHR$(7)+"*RED*"+CHR$(7)
    0x5645d39cf320 ---------D   08340  GOTO 8360
    0x5645d39cf560 ---------D T 08350  LET C$="YELLOW"
    0x5645d39cf850 ---------D T 08360  IF D(2)>=0 GOTO 8410
    0x5645d39cf9f0 ---------D   08370  PRINT " "
    0x5645d39cfb60 ---------D   08380  PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x5645d39cfcc0 ---------D   08390  PRINT " "
    0x5645d39cfd60 ---------D   08400  GOTO 8900
    0x5645d39cffa0 ---------D T 08410  LET O1$="--------------------------------"
    0x5645d39d00f0 ---------D   08420  PRINT O1$
    0x5645d39d03f0 ---------D   08430  LET N5$="####"
    0x5645d39d0570 ---------D   08440  PRINT " ";
    0x5645d39d0920 ---------D   08450  FOR I=1 TO 22 STEP 3
    0x5645d39d0ee0 ---------D   08460  PRINT MID$(Q$(1),I,3)" ";
    0x5645d39d1020 ---------D   08470  NEXT I
    0x5645d39d1190 ---------D   08480  PRINT " "
    0x5645d39d1320 ---------D   08490  PRINT " ";
    0x5645d39d16d0 ---------D   08500  FOR I=1 TO 22 STEP 3
    0x5645d39d1c90 ---------D   08510  PRINT MID$(Q$(2),I,3)" ";
    0x5645d39d1dd0 ---------D   08520  NEXT I
    0x5645d39d1fa0 ---------D   08530  PRINT "        STARDATE         ";
    0x5645d39d2200 ---------D   08540  PRINT USING "####.#",T
    0x5645d39d2390 ---------D   08550  PRINT " ";
    0x5645d39d2740 ---------D   08560  FOR I=1 TO 22 STEP 3
    0x5645d39d2d00 ---------D   08570  PRINT MID$(Q$(3),I,3)" ";
    0x5645d39d2e40 ---------D   08580  NEXT I
    0x5645d39d3000 ---------D   08590  PRINT "        CONDITION        ";
    0x5645d39d3160 ---------D   08600  PRINT C$
    0x5645d39d32f0 ---------D   08610  PRINT " ";
    0x5645d39d36a0 ---------D   08620  FOR I=1 TO 22 STEP 3
    0x5645d39d3c60 ---------D   08630  PRINT MID$(Q$(4),I,3)" ";
    0x5645d39d3da0 ---------D   08640  NEXT I
    0x5645d39d4240 ---------D   08650  PRINT "        QUADRANT         "Q1","Q2
    0x5645d39d43d0 ---------D   08660  PRINT " ";
    0x5645d39d4780 ---------D   08670  FOR I=1 TO 22 STEP 3
    0x5645d39d4d40 ---------D   08680  PRINT MID$(Q$(5),I,3)" ";
    0x5645d39d4e80 ---------D   08690  NEXT I
    0x5645d39d5320 ---------D   08700  PRINT "        SECTOR           "S1","S2
    0x5645d39d54b0 ---------D   08710  PRINT " ";
    0x5645d39d5860 ---------D   08720  FOR I=1 TO 22 STEP 3
    0x5645d39d5e20 ---------D   08730  PRINT MID$(Q$(6),I,3)" ";
    0x5645d39d5f60 ---------D   08740  NEXT I
    0x5645d39d6130 ---------D   08750  PRINT "        TOTAL ENERGY     ";
    0x5645d39d6490 ---------D   08760  PRINT USING N5$,E+S
    0x5645d39d6620 ---------D   08770  PRINT " ";
    0x5645d39d69d0 ---------D   08780  FOR I=1 TO 22 STEP 3
    0x5645d39d6f90 ---------D   08790  PRINT MID$(Q$(7),I,3)" ";
    0x5645d39d70d0 ---------D   08800  NEXT I
    0x5645d39d7290 ---------D   08810  PRINT "        PHOTON TORPEDOES ";
    0x5645d39d74d0 ---------D   08820  PRINT USING N5$,P
    0x5645d39d7660 ---------D   08830  PRINT " ";
    0x5645d39d7a10 ---------D   08840  FOR I=1 TO 22 STEP 3
    0x5645d39d7fd0 ---------D   08850  PRINT MID$(Q$(8),I,3)" ";
    0x5645d39d8110 ---------D   08860  NEXT I
    0x5645d39d82d0 ---------D   08870  PRINT "        SHIELDS          ";
    0x5645d39d8510 ---------D   08880  PRINT USING N5$,S
    0x5645d39d8670 ---------D   08890  PRINT O1$
    0x5645d39d86d0 ---------D T 08900  RETURN
    0x5645d39d8750 ---------A   08910  REM
    0x5645d39d8850 ---------A   08920  REM ===============================================================
    0x5645d39d88e0 ---------A   08930  REM
    0x5645d39d89b0 ---------A   08940  REM *** LIBARY COMPUTER CODE BEGINS HERE
    0x5645d39d8cd0 ---------A T 08950  IF D(8)>=0 GOTO 8980
    0x5645d39d8e60 ---------A   08960  PRINT "COMPUTER DISABLED"
    0x5645d39d8f00 ---------A   08970  GOTO 3160
    0x5645d39d9080 ---------A T 08980  PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    0x5645d39d92a0 ---------A   08990  INPUT A
    0x5645d39d94e0 ---------A   09000  IF A<0 GOTO 3160
    0x5645d39d9580 ---------A   09010  PRINT
    0x5645d39d9860 ---------A   09020  LET H8=1
    0x5645d39d9a90 ---------A   09030  IF A=0 GOTO 9270
    0x5645d39d9cf0 ---------A   09040  IF A>5 GOTO 9150
    0x5645d39d9d90 ---------A   09050  REM
    0x5645d39d9e90 ---------A   09060  REM ===============================================================
    0x5645d39d9f20 ---------A   09070  REM
    0x5645d39da470 ---------A   09080  ON A GOTO 9690, 9890, 10320, 9970, 9100
    0x5645d39da4f0 ---------A   09090  REM  GOTO 9150
    0x5645d39da5c0 ---------A T 09100  REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
    0x5645d39da7f0 ---------A   09110  LET H8=0
    0x5645d39daa20 ---------A   09120  LET G5=1
    0x5645d39dab80 ---------A   09130  PRINT "                      THE GALAXY"
    0x5645d39dac20 ---------A   09140  GOTO 9280
    0x5645d39dadb0 ---------A T 09150  PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    0x5645d39daf30 ---------A   09160  PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x5645d39db0b0 ---------A   09170  PRINT "   1 = STATUS REPORT"
    0x5645d39db240 ---------A   09180  PRINT "   2 = PHOTON TORPEDO DATA"
    0x5645d39db3d0 ---------A   09190  PRINT "   3 = STARBASE NAVIGATION DATA"
    0x5645d39db560 ---------A   09200  PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    0x5645d39db6d0 ---------A   09210  PRINT "   5 = GALAXY 'REGION NAME' MAP"
    0x5645d39db750 ---------A   09220  GOTO 8980
    0x5645d39db7c0 ---------A   09230  REM
    0x5645d39db8c0 ---------A   09240  REM ===============================================================
    0x5645d39db950 ---------A   09250  REM
    0x5645d39dba20 ---------A   09260  REM *** CUM GALACTIC RECORD CODE BEGINS ***
    0x5645d39dc010 ---------A T 09270  PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "Q1","Q2":"
    0x5645d39dc1c0 ---------A T 09280  PRINT "      1     2     3     4     5     6     7     8"
    0x5645d39dc4e0 ---------A   09290  LET O3$="    ----- ----- ----- ----- ----- ----- ----- -----"
    0x5645d39dc640 ---------A   09300  PRINT O3$
    0x5645d39dc6d0 ---------A   09310  REM   DIM N1$(2),N2$(8),N$(5)
    0x5645d39dc9c0 ---------A   09320  FOR I=1 TO 8
    0x5645d39dccd0 ---------A   09330  LET N1$="##"
    0x5645d39dcf30 ---------A   09340  PRINT USING N1$,I;
    0x5645d39dd200 ---------A   09350  PRINT TAB(3);"|";
    0x5645d39dd440 ---------A   09360  IF H8=0 GOTO 9480
    0x5645d39dd750 ---------A   09370  FOR J=1 TO 8
    0x5645d39dda50 ---------A   09380  LET N2$=" ### |"
    0x5645d39ddd50 ---------A   09390  LET N$=""
    0x5645d39ddfa0 ---------A   09400  IF I<>Q1 GOTO 9440
    0x5645d39de230 ---------A   09410  IF J<>Q2 GOTO 9440
    0x5645d39de560 ---------A   09420  LET N$=CHR$(7)
    0x5645d39de6e0 ---------A   09430  PRINT N$;
    0x5645d39deb00 ---------A T 09440  PRINT USING N2$,Z(I,J);
    0x5645d39dec80 ---------A   09450  PRINT N$;
    0x5645d39dedc0 ---------A   09460  NEXT J
    0x5645d39dee50 ---------A   09470  GOTO 9610
    0x5645d39df080 ---------A T 09480  LET Z4=I
    0x5645d39df290 ---------A   09490  LET Z5=1
    0x5645d39df310 ---------A   09500  GOSUB 10960
    0x5645d39df9d0 ---------A   09510  LET J0=INT(15-.5*LEN(G2$))
    0x5645d39dfba0 ---------A   09520  PRINT  TAB(J0);
    0x5645d39dfd30 ---------A   09530  PRINT G2$;
    0x5645d39dfff0 ---------A   09540  PRINT TAB(27);"|";
    0x5645d39e0210 ---------A   09550  LET Z5=5
    0x5645d39e0290 ---------A   09560  GOSUB 10960
    0x5645d39e0890 ---------A   09570  LET J0=INT(39-.5*LEN(G2$))
    0x5645d39e0a60 ---------A   09580  PRINT  TAB(J0);
    0x5645d39e0bf0 ---------A   09590  PRINT G2$;
    0x5645d39e0eb0 ---------A   09600  PRINT TAB(51);"|";
    0x5645d39e0f30 ---------A T 09610  PRINT
    0x5645d39e1090 ---------A   09620  PRINT O3$
    0x5645d39e11d0 ---------A   09630  NEXT I
    0x5645d39e1260 ---------A   09640  GOTO 3160
    0x5645d39e12d0 ---------A   09650  REM
    0x5645d39e13d0 ---------A   09660  REM ===============================================================
    0x5645d39e1460 ---------A   09670  REM
    0x5645d39e1530 ---------A   09680  REM *** STATUS REPORT CODE BEGINS HERE ***
    0x5645d39e16b0 ---------A T 09690  PRINT "   STATUS REPORT:"
    0x5645d39e18f0 ---------A   09700  LET X$=""
    0x5645d39e1b20 ---------A   09710  IF K9=1 GOTO 9730
    0x5645d39e1d90 ---------A   09720  LET X$="S"
    0x5645d39e21e0 ---------A T 09730  PRINT K9" KLINGON"X$" LEFT"
    0x5645d39e2790 ---------A   09740  LET V5=(T0+T9)-T
    0x5645d39e2a00 ---------A   09750  PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES",V5
    0x5645d39e2c40 ---------A   09760  LET X$=""
    0x5645d39e2e70 ---------A   09770  IF B9=1 GOTO 9830
    0x5645d39e30e0 ---------A   09780  LET X$="S"
    0x5645d39e3310 ---------A   09790  IF B9<>0 GOTO 9830
    0x5645d39e3510 ---------A   09800  PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    0x5645d39e3690 ---------A   09810  PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    0x5645d39e3750 ---------A   09820  GOTO 7270
    0x5645d39e3cb0 ---------A T 09830  PRINT "THE FEDERATION IS MAINTAINING"B9" STARBASE"X$" IN THE GALAXY"
    0x5645d39e3d30 ---------A   09840  GOTO 7270
    0x5645d39e3da0 ---------A   09850  REM
    0x5645d39e3ea0 ---------A   09860  REM ===============================================================
    0x5645d39e3f30 ---------A   09870  REM
    0x5645d39e4010 ---------A   09880  REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***
    0x5645d39e4240 ---------A T 09890  LET H8=0
    0x5645d39e4520 ---------A   09900  FOR I=1 TO 3
    0x5645d39e4900 ---------A   09910  IF K(I,3)<=0 GOTO 10300
    0x5645d39e4d00 ---------A   09920  LET W1=K(I,1)
    0x5645d39e50d0 ---------A   09930  LET X=K(I,2)
    0x5645d39e5300 ---------A T 09940  LET C1=S1
    0x5645d39e5530 ---------A   09950  LET A=S2
    0x5645d39e55c0 ---------A   09960  GOTO10040
    0x5645d39e5750 ---------A T 09970  PRINT "DIRECTION/DISTANCE CALCULATOR:"
    0x5645d39e60c0 ---------A   09980  PRINT "YOU ARE AT QUADRANT ("Q1","Q2") SECTOR ("S1","S2")"
    0x5645d39e6240 ---------A   09990  PRINT "PLEASE ENTER --"
    0x5645d39e63d0 ---------A   10000  PRINT "  INITIAL COORDINATES (X,Y)";
    0x5645d39e6630 ---------A   10010  INPUT C1,A
    0x5645d39e67c0 ---------A   10020  PRINT "  FINAL COORDINATES (X,Y)";
    0x5645d39e6a00 ---------A   10030  INPUT W1,X
    0x5645d39e6d60 ---------A T 10040  LET X=X-A
    0x5645d39e70c0 ---------A   10050  LET A=C1-W1
    0x5645d39e72f0 ---------A   10060  IF X<0 GOTO 10170
    0x5645d39e7560 ---------A   10070  IF A<0 GOTO 10230
    0x5645d39e77d0 ---------A   10080  IF X>0 GOTO 10100
    0x5645d39e7a40 ---------A   10090  IF A=0 GOTO 10190
    0x5645d39e7c90 ---------A T 10100  LET C1=1
    0x5645d39e80a0 ---------A T 10110  IF ABS(A)<=ABS(X) GOTO 10150
    0x5645d39e8bf0 ---------A   10120  LET V5=C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
    0x5645d39e8e40 ---------A   10130  PRINT "DIRECTION ="V5
    0x5645d39e8ee0 ---------A   10140  GOTO 10280
    0x5645d39e9570 ---------A T 10150  PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
    0x5645d39e9600 ---------A   10160  GOTO 10280
    0x5645d39e9830 ---------A T 10170  IF A>0 GOTO 10210
    0x5645d39e9aa0 ---------A   10180  IF X=0 GOTO 10230
    0x5645d39e9ce0 ---------A T 10190  LET C1=5
    0x5645d39e9d50 ---------A   10200  GOTO 10110
    0x5645d39e9f60 ---------A T 10210  LET C1=3
    0x5645d39e9fd0 ---------A   10220  GOTO 10240
    0x5645d39ea1f0 ---------A T 10230  LET C1=7
    0x5645d39ea600 ---------A T 10240  IF ABS(A)>=ABS(X) GOTO 10270
    0x5645d39eb170 ---------A   10250  PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
    0x5645d39eb210 ---------A   10260  GOTO 10280
    0x5645d39eb8c0 ---------A T 10270  PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
    0x5645d39ebf30 ---------A T 10280  PRINT "DISTANCE ="SQR(X^2+A^2)
    0x5645d39ec170 ---------A   10290  IF H8=1 GOTO 3160
    0x5645d39ec2d0 ---------A T 10300  NEXT I
    0x5645d39ec370 ---------A   10310  GOTO 3160
    0x5645d39ec5a0 ---------A T 10320  IF B3<>0 GOTO 10350
    0x5645d39ec790 ---------A   10330  PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    0x5645d39ec830 ---------A   10340  GOTO 3160
    0x5645d39ec990 ---------A T 10350  PRINT "FROM ENTERPRISE TO STARBASE:"
    0x5645d39ecbd0 ---------A   10360  LET W1=B4
    0x5645d39ece00 ---------A   10370  LET X=B5
    0x5645d39ece90 ---------A   10380  GOTO 9940
    0x5645d39ecf10 ---------E   10390  REM *** END OF LIBRARY-COMPUTER CODE
    0x5645d39ecfa0 ---------E   10400  REM
    0x5645d39ed0a0 ---------E   10410  REM ===============================================================
    0x5645d39ed130 ---------E   10420  REM
    0x5645d39ed1f0 ---------E   10430  REM S/R FINDS RANDOM HOLE IN QUADRANT
    0x5645d39ed800 ---------E B 10440  LET R1=INT(RND(1)*8+1)
    0x5645d39eddd0 ---------E   10450  LET R2=INT(RND(1)*8+1)
    0x5645d39ee000 ---------E   10460  LET A$="   "
    0x5645d39ee230 ---------E   10470  LET Z1=R1
    0x5645d39ee460 ---------E   10480  LET Z2=R2
    0x5645d39ee4e0 ---------E   10490  GOSUB 10840
    0x5645d39ee710 ---------E   10500  IF Z3=0 GOTO 10440
    0x5645d39ee790 ---------E   10510  RETURN
    0x5645d39ee810 ---------F   10520  REM
    0x5645d39ee910 ---------F   10530  REM ===============================================================
    0x5645d39ee9a0 ---------F   10540  REM
    0x5645d39eea80 ---------F G 10550  REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
    0x5645d39eeeb0 ---------F   10560  Z1 = INT(Z1+.5)
    0x5645d39ef2d0 ---------F   10570  Z2 = INT(Z2+.5)
    0x5645d39ef500 ---------F   10580  IF Z1<1 GOTO 10700
    0x5645d39ef770 ---------F   10590  IF Z1>8 GOTO 10700
    0x5645d39ef9e0 ---------F   10600  IF Z2<1 GOTO 10700
    0x5645d39efc50 ---------F   10610  IF Z2>8 GOTO 10700
    0x5645d39f01c0 ---------F   10620  DIM Q9(24), A9(3)
    0x5645d39f04b0 ---------F   10630  CHANGE Q$(Z1) TO Q9
    0x5645d39f06f0 ---------F   10640  CHANGE A$ TO A9
    0x5645d39f0ac0 ---------F   10650  FOR I8 = 1 TO 3
    0x5645d39f1220 ---------F   10660  Q9(3*(Z2-1) + I8) = A9(I8)
    0x5645d39f1350 ---------F   10670  NEXT I8
    0x5645d39f1670 ---------F   10680  CHANGE Q9 TO Q$(Z1)
    0x5645d39f1710 ---------F   10690  GOTO 10740
    0x5645d39f17b0 ---------F T 10700  PRINT
    0x5645d39f1d30 ---------F   10710  PRINT "ERROR IN COORDINATES (Z1,Z2): (";Z1;",";Z2;")"
    0x5645d39f1ea0 ---------F   10720  PRINT "     1 <=  Z1,Z2  <=8    "
    0x5645d39f1f20 ---------F   10730  PRINT
    0x5645d39f1f80 ---------F T 10740  RETURN
    0x5645d39f2000 ---------G   10750  REM
    0x5645d39f2100 ---------G   10760  REM ===============================================================
    0x5645d39f2190 ---------G   10770  REM
    0x5645d39f2260 ---------G G 10780  REM *** PRINTS DEVICE NAME FROM ARRAY ***
    0x5645d39f24d0 ---------G   10790  PRINT D$(R1);
    0x5645d39f2530 ---------G   10800  RETURN
    0x5645d39f25b0 ---------H   10810  REM
    0x5645d39f26b0 ---------H   10820  REM ===============================================================
    0x5645d39f2740 ---------H   10830  REM
    0x5645d39f2810 ---------H G 10840  REM *** STRING COMPARISON IN QUADRANT ARRAY ***
    0x5645d39f2c40 ---------H   10850  LET Z1=INT(Z1+.5)
    0x5645d39f3050 ---------H   10860  LET Z2=INT(Z2+.5)
    0x5645d39f3280 ---------H   10870  LET Z3=0
    0x5645d39f3a70 ---------H   10880  IF MID$(Q$(Z1),(3*Z2-2),3) <> A$ GOTO 10900
    0x5645d39f3cb0 ---------H   10890  Z3 = 1
    0x5645d39f3d00 ---------H T 10900  RETURN
    0x5645d39f3d80 ---------I   10910  REM
    0x5645d39f3e80 ---------I   10920  REM ===============================================================
    0x5645d39f3f10 ---------I   10930  REM
    0x5645d39f4000 ---------I   10940  REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    0x5645d39f40d0 ---------I   10950  REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)
    0x5645d39f43d0 ---------I G 10960  LET L2=2
    0x5645d39f4600 ---------I   10970  IF Z5>=5 GOTO 10990
    0x5645d39f4850 ---------I   10980  LET L2=1
    0x5645d39f4ea0 ---------I T 10990  LET L3=2*(Z4-1)+L2
    0x5645d39f51c0 ---------I   11000  LET G2$=G1$(L3)
    0x5645d39f53f0 ---------I   11010  IF G5=1 GOTO 11090
    0x5645d39f5660 ---------I   11020  LET L3=Z5
    0x5645d39f5890 ---------I   11030  IF Z5<=4 GOTO 11050
    0x5645d39f5bf0 ---------I   11040  LET L3=Z5-4
    0x5645d39f5ef0 ---------I T 11050  LET G3$="IV"
    0x5645d39f6120 ---------I   11060  IF L3=4 GOTO 11080
    0x5645d39f6610 ---------I   11070  LET G3$=MID$(G4$,1,L3)
    0x5645d39f6a80 ---------I T 11080  G2$=G2$+" "+G3$
    0x5645d39f6ad0 ---------I T 11090  RETURN 
    0x5645d39f6b30 ---------A T 11100  STOP
    0x5645d39f6bb0 ---------J G 11111  REM Gosub target.
    0x5645d39f6cc0 ---------J   11112  REM This segment was originally from file STINST.BAS and was included with 
    0x5645d39f6d80 ---------J   11113  REM a CHAIN command./ASA Jul 27,2009
    0x5645d39f6e20 ---------J   11115  PRINT
    0x5645d39f6eb0 ---------J   11120  REM INSTRUCTIONS FOR "STREK" GAME
    0x5645d39f6f60 ---------J   11130  REM VERSION "STINST2" 12/8/74
    0x5645d39f7290 ---------J   11140  FOR I=1 TO 9
    0x5645d39f7ab0 ---------J   11150  ON I GOTO 11350, 11470, 11650, 11750, 11830, 11890, 11970, 12020, 12070
    0x5645d39f7b50 ---------J T 11160  PRINT
    0x5645d39f7ce0 ---------J   11170  PRINT "<TO CONTINUE, HIT 'RETURN'>";
    0x5645d39f7e40 ---------J   11180  INPUT A$
    0x5645d39f7ec0 ---------J   11190  PRINT
    0x5645d39f8000 ---------J   11200  NEXT I
    0x5645d39f8210 ---------J   11210  PRINT "1.  WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x5645d39f83e0 ---------J   11220  PRINT "      COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM, OR XXX)."
    0x5645d39ae340 ---------J   11230  PRINT "2.  IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x5645d39ae500 ---------J   11240  PRINT "      LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x5645d39ae6d0 ---------J   11250  PRINT "3.  SOME COMMANDS REQUIRE YOU TO ENTER DATA.  (FOR EXAMPLE, THE"
    0x5645d39ae8a0 ---------J   11260  PRINT "      'NAV' COMMAND COMES BACK WITH 'COURSE (1-9) ?'.)  IF YOU"
    0x5645d39aea40 ---------J   11270  PRINT "      TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x5645d39aebb0 ---------J   11280  PRINT "      WILL BE ABORTED."
    0x5645d39aec50 ---------J   11290  PRINT
    0x5645d39aede0 ---------J   11300  PRINT "HIT <CAR RET> TO CONTINUE ";
    0x5645d39aef40 ---------J   11310  INPUT A$
    0x5645d39aefa0 ---------J   11330  RETURN
    0x5645d39af030 ---------A   11340  REM *** EXIT HERE ***
    0x5645d39af0e0 ---------J T 11350  PRINT
    0x5645d39af250 ---------J   11360  PRINT "    INSTRUCTIONS FOR  ** STAR TREK **"
    0x5645d39af300 ---------J   11370  PRINT 
    0x5645d39af4c0 ---------J   11380  PRINT "THE GALAXY IS DIVIDED INTO AN 8 x 8 QUADRANT GRID,"
    0x5645d39af650 ---------J   11390  PRINT "AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID." 
    0x5645d39af710 ---------J   11400  PRINT
    0x5645d39af8e0 ---------J   11410  PRINT "   YOU WILL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE GALAXY"
    0x5645d39afab0 ---------J   11420  PRINT "TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP 'ENTERPRISE'"
    0x5645d39afc70 ---------J   11430  PRINT "YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF KLINGON WARSHIPS"
    0x5645d39afdf0 ---------J   11440  PRINT "WHICH ARE MENACING THE UNITED FEDERATION OF PLANETS."
    0x5645d39afe70 ---------J   11450  PRINT
    0x5645d39afef0 ---------J   11460  GOTO 11160
    0x5645d39aff90 ---------J T 11470  PRINT
    0x5645d39b0120 ---------J   11480  PRINT "YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x5645d39fc510 ---------J   11490  PRINT "CAPTAIN OF THE STARSHIP:"
    0x5645d39fc6c0 ---------J   11500  PRINT "'NAV' COMMAND = WARP ENGINE CONTROL --"
    0x5645d39fc870 ---------J   11510  PRINT "  COURSE IS IN A CIRCULAR NUMERICAL         4  3  2"
    0x5645d39fca20 ---------J   11520  PRINT "  VECTOR ARRANGEMENT AS SHOWN.               . . ."
    0x5645d39fcbd0 ---------J   11530  PRINT "  INTEGER AND REAL VALUES MAY BE              ..."
    0x5645d39fcd80 ---------J   11540  PRINT "  USED.  (THUS, COURSE 1.5 IS HALF-        5 ----- 1"
    0x5645d39fcf30 ---------J   11550  PRINT "  WAY BETWEEN 1 AND 2.)                       ..."
    0x5645d39fd0e0 ---------J   11560  PRINT "                                             . . ."
    0x5645d39fd280 ---------J   11570  PRINT "  VALUES MAY APPROACH 9.0, WHICH            6  7  8 "
    0x5645d39fd420 ---------J   11580  PRINT "  ITSELF IS EQUIVALENT TO 1.0."
    0x5645d39fd5c0 ---------J   11590  PRINT "                                            COURSE  "
    0x5645d39fd750 ---------J   11600  PRINT " ONE WARP FACTOR IS THE SIZE OF "
    0x5645d39fd8e0 ---------J   11610  PRINT " ONE QUADRANT.  THEREFORE, TO GET"
    0x5645d39fda70 ---------J   11620  PRINT " FROM QUADRANT 6,5 TO 5,5, YOU WOULD"
    0x5645d39fdbe0 ---------J   11630  PRINT " USE COURSE 3, WARP FACTOR 1."
    0x5645d39fdc80 ---------J   11640  GOTO 11160
    0x5645d39fde20 ---------J T 11650  PRINT "'SRS' COMMAND = SHORT RANGE SENSOR SCAN"
    0x5645d39fdfd0 ---------J   11660  PRINT "  SHOWS YOU A SCAN OF YOUR PRESENT QUADRANT."
    0x5645d39fe170 ---------J   11670  PRINT "  SYMBOLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x5645d39fe300 ---------J   11680  PRINT "		<*> = YOUR STARSHIP'S POSITION"
    0x5645d39fe4a0 ---------J   11690  PRINT "		+++ = KLINGON BATTLE CRUISER"
    0x5645d39fe640 ---------J   11700  PRINT "		>!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE!)"
    0x5645d39fe7d0 ---------J   11710  PRINT "		 *  = STAR"
    0x5645d39fe950 ---------J   11720  PRINT "  A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x5645d39fe9d0 ---------J   11730  PRINT
    0x5645d39fea70 ---------J   11740  GOTO 11160
    0x5645d39fec10 ---------J T 11750  PRINT "'LRS' COMMAND = LONG RANGE SENSOR SCAN"
    0x5645d39fedd0 ---------J   11760  PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x5645d39fefa0 ---------J   11770  PRINT "  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)"
    0x5645d39ff170 ---------J   11780  PRINT "  THE SCAN IS CODED IN THE FORM '###', WHERE THE UNITS DIGIT"
    0x5645d39ff330 ---------J   11790  PRINT "  IS THE NUMBER OF STARS, TENS DIGIT IS THE NUMBER OF STARBASES,"
    0x5645d39ff4e0 ---------J   11800  PRINT "  AND HUNDREDS DIGIT IS THE NUMBER OF KLINGONS. "
    0x5645d39ff670 ---------J   11810  PRINT "    EXAMPLE --   207 = 2 KLINGONS, ON STARBASES, 7 STARS."
    0x5645d39ff710 ---------J   11820  GOTO 11160
    0x5645d39ff8a0 ---------J T 11830  PRINT "'PHA' COMMAND = PHASER CONTROL"
    0x5645d39ffa60 ---------J   11840  PRINT "  ALLOWS YOU TO DESTROY THE KLINGON BATTLE CRUISERS BY"
    0x5645d39ffc10 ---------J   11850  PRINT "  ZAPPING THEM WITH SUITABLY LARGE UNITS OF ENERGY TO"
    0x5645d39ffdb0 ---------J   11860  PRINT "  DEPLETE THEIR SHIELD POWER.  (REMEMBER, KLINGONS HAVE"
    0x5645d39fff10 ---------J   11870  PRINT "  PHASERS, TOO!)"
    0x5645d39fffb0 ---------J   11880  GOTO 11160
    0x5645d3a00160 ---------J T 11890  PRINT "'TOR' COMMAND = PHOTON TORPEDO CONTROL"
    0x5645d3a00320 ---------J   11900  PRINT "  TORPEDO COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL."
    0x5645d3a004e0 ---------J   11910  PRINT "  IF YOU HIT THE KLINGON VESSEL, HE IS DESTROYED AND "
    0x5645d3a00680 ---------J   11920  PRINT "  CANNOT FIRE BACK AT YOU.  IF YOU MISS, YOU ARE SUBJECT TO"
    0x5645d3a00810 ---------J   11930  PRINT "  HIS PHASER FIRE."
    0x5645d3a009e0 ---------J   11940  PRINT "     NOTE: THE LIBRARY-COMPUTER ('COM' COMMAND) HAS AN"
    0x5645d3a00b70 ---------J   11950  PRINT "           OPTION TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
    0x5645d3a00c10 ---------J   11960  GOTO 11160
    0x5645d3a00db0 ---------J T 11970  PRINT "'SHE' COMMAND = SHIELD CONTROL"
    0x5645d3a00f80 ---------J   11980  PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS."
    0x5645d3a01130 ---------J   11990  PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.  NOTE THAT THE "
    0x5645d3a012b0 ---------J   12000  PRINT "  TOTAL ENERGY INCLUDES SHIELD ENERGY."
    0x5645d3a01350 ---------J   12010  GOTO 11160
    0x5645d3a014e0 ---------J T 12020  PRINT "'DAM' COMMAND = DAMAGE CONTROL REPORT"
    0x5645d3a016a0 ---------J   12030  PRINT "  GIVES STATE OF REPAIR OF ALL DEVICES, WHERE A NEGATIVE"
    0x5645d3a01840 ---------J   12040  PRINT "  'STATE OF REPAIR' SHOWS THAT THE DEVICE IS TEMPORARILY"
    0x5645d3a019a0 ---------J   12050  PRINT "  DAMAGED."
    0x5645d3a01a40 ---------J   12060  GOTO 11160
    0x5645d3a01bd0 ---------J T 12070  PRINT "'COM' COMMAND = LIBRARY-COMPUTER"
    0x5645d3a01d70 ---------J   12080  PRINT "  THE LIBRARY-COMPUTER CONTAINS SIX OPTIONS:"
    0x5645d3a01f30 ---------J   12090  PRINT "  OPTION 0 = CUMULATIVE GALACTIC RECORD"
    0x5645d3a020e0 ---------J   12100  PRINT "     WHICH SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
    0x5645d3a02270 ---------J   12110  PRINT "     LONG RANGE SENSOR SCANS."
    0x5645d3a02420 ---------J   12120  PRINT "  OPTION 1 = STATUS REPORT"
    0x5645d3a025d0 ---------J   12130  PRINT "     WHICH SHOWS THE NUMBER OF KLINGONS, STARDATES, AND STARBASES"
    0x5645d3a02760 ---------J   12140  PRINT "     REMAINING IN THE GAME."
    0x5645d3a02910 ---------J   12150  PRINT "  OPTION 2 = PHOTON TORPEDO DATA"
    0x5645d3a02ac0 ---------J   12160  PRINT "     WHICH GIVES DIRECTIONS AND DISTANCE FROM THE ENTERPRISE"
    0x5645d3a02c50 ---------J   12170  PRINT "     TO ALL KLINGONS IN YOUR QUADRANT"
    0x5645d3a02df0 ---------J   12180  PRINT "  OPTION 3 = STARBASE NAVIGATION DATA"
    0x5645d3a02f90 ---------J   12190  PRINT "     WHICH GIVES DIRECTION AND DISTANCE TO ANY STARBASE"
    0x5645d3a03130 ---------J   12200  PRINT "     WITHIN YOUR QUADRANT"
    0x5645d3a032e0 ---------J   12210  PRINT "  OPTION 4 = DIRECTION/DISTANCE CALCULATOR"
    0x5645d3a03480 ---------J   12220  PRINT "     WHICH ALLOWS YOU TO ENTER COORDINATES FOR"
    0x5645d3a03610 ---------J   12230  PRINT "     DIRECTION/DISTANCE CALCULATIONS."
    0x5645d3a037c0 ---------J   12240  PRINT "  OPTION 5 = GALACTIC 'REGION NAME' MAP"
    0x5645d3a03970 ---------J   12250  PRINT "     WHICH PRINTS THE NAMES OF THE SIXTEEN MAJOR GALACTIC"
    0x5645d3a03ae0 ---------J   12260  PRINT "     REGIONS REFERRED TO IN THE GAME."
    0x5645d3a03b60 ---------J   12270  GOTO 11160
    0x5645d3a03bb0 ---------A   12280  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/strek2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5645d394fdb0 ---------A   01000  REM (VERSION "STREK7", 1/12/75 RCL)
    0x5645d394eb80 ---------A   01010  REM
    0x5645d394ff30 ---------A   01020  REM
    0x5645d394fe70 ---------A   01030  REM ***         *** STAR TREK ***       ***
    0x5645d39518f0 ---------A   01040  REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    0x5645d39519d0 ---------A   01050  REM *** AS SEEN ON THE STAR TREK TV SHOW.
    0x5645d3951ac0 ---------A   01060  REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    0x5645d3951bb0 ---------A   01070  REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    0x5645d3951ca0 ---------A   01080  REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY 
    0x5645d3951940 ---------A   01090  REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974
    0x5645d3951df0 ---------A   01100  REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    0x5645d3951ee0 ---------A   01110  REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    0x5645d3951f60 ---------A   01120  REM *** ADDRESS TO
    0x5645d3952050 ---------A   01130  REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    0x5645d3952130 ---------A   01140  REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    0x5645d39521c0 ---------A   01150  RANDOMIZE
    0x5645d394d6d0 ---------A   01160  PRINT  TAB(15);"* * * STAR TREK * * *"
    0x5645d394d670 ---------A   01170  PRINT
    0x5645d3952380 ---------A   01180  PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    0x5645d39524f0 ---------A   01190  INPUT A$
    0x5645d3952630 ---------A   01200  IF A$<>"YES" GOTO 1270
    0x5645d3952760 ---------A   01210  PRINT "PLEASE WAIT  . . .";
    0x5645d39527e0 ---------A   01220  GOSUB 11100
    0x5645d3952850 ---------A   01230  REM
    0x5645d395d0a0 ---------A   01240  REM ===============================================================
    0x5645d395d130 ---------A   01250  REM
    0x5645d395d1e0 ---------A   01260  REM  PROGRAM BEGINS HERE .....
    0x5645d395d4d0 ---------A   01270  DIM Q$(8)
    0x5645d395d870 ---------A T 01280  FOR I = 1 TO 8
    0x5645d395dc50 ---------A   01290  Q$(I) = SPACE$(24)
    0x5645d395dd80 ---------A   01300  NEXT I
    0x5645d395ed20 ---------A   01310  DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8)
    0x5645d395f4b0 ---------A   01320  LET T=INT(RND(1)*20+20)*100
    0x5645d395fa90 ---------A   01330  LET P1=3.14159/4
    0x5645d395fd80 ---------A   01340  LET T0=T
    0x5645d3960050 ---------A   01350  LET T9=30
    0x5645d3960320 ---------A   01360  LET D0=0
    0x5645d39605f0 ---------A   01370  LET E0=3000
    0x5645d39608e0 ---------A   01380  LET E=E0
    0x5645d3960bb0 ---------A   01390  LET P=10
    0x5645d3960ea0 ---------A   01400  LET P0=P
    0x5645d3961170 ---------A   01410  LET S9=200
    0x5645d3961460 ---------A   01420  LET S=0
    0x5645d3962470 ---------A   01430  DEF FND(D)=SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5645d39624e0 ---------A   01440  REM
    0x5645d39625e0 ---------A   01450  REM ===============================================================
    0x5645d3962670 ---------A   01460  REM
    0x5645d3962730 ---------A   01470  REM INITIALIZE INTERPRISE'S POSITION
    0x5645d3962e00 ---------A   01480  LET Q1=INT(RND(1)*8+1)
    0x5645d39634a0 ---------A   01490  LET Q2=INT(RND(1)*8+1)
    0x5645d3963a80 ---------A   01500  LET S1=INT(RND(1)*8+1)
    0x5645d3964050 ---------A   01510  LET S2=INT(RND(1)*8+1)
    0x5645d3964320 ---------A   01520  MAT C=ZER
    0x5645d39646c0 ---------A   01530  LET C(4,1)=-1
    0x5645d3964a50 ---------A   01540  LET C(3,1)=-1
    0x5645d3964de0 ---------A   01550  LET C(2,1)=-1
    0x5645d3965170 ---------A   01560  LET C(4,2)=-1
    0x5645d3965500 ---------A   01570  LET C(5,2)=-1
    0x5645d3965890 ---------A   01580  LET C(6,2)=-1
    0x5645d3965c20 ---------A   01590  LET C(1,2)=1
    0x5645d3965fb0 ---------A   01600  LET C(2,2)=1
    0x5645d3966340 ---------A   01610  LET C(6,1)=1
    0x5645d39666d0 ---------A   01620  LET C(7,1)=1
    0x5645d3966a60 ---------A   01630  LET C(8,1)=1
    0x5645d3966df0 ---------A   01640  LET C(8,2)=1
    0x5645d3967590 ---------A   01650  LET C(9,2)=1
    0x5645d39677a0 ---------A   01660  DIM D(8)
    0x5645d3967a70 ---------A   01670  FOR I=1 TO 8
    0x5645d3967d70 ---------A   01680  LET D(I)=0
    0x5645d3967ea0 ---------A   01690  NEXT I
    0x5645d3968190 ---------A   01700  DIM D$(8)
    0x5645d3968230 ---------A   01710  RESTORE
    0x5645d3968fd0 ---------A   01720  READ D$(1),D$(2),D$(3),D$(4),D$(5),D$(6),D$(7),D$(8)
    0x5645d39693f0 ---------A   01730  DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    0x5645d39697e0 ---------A   01740  DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    0x5645d3969ad0 ---------A   01750  LET G4$="III"
    0x5645d3969da0 ---------A   01760  DIM G1$(16)
    0x5645d396a070 ---------A   01770  FOR I=1 TO 16
    0x5645d396a2b0 ---------A   01780  READ G1$(I)
    0x5645d396a3e0 ---------A   01790  NEXT I
    0x5645d396ab00 ---------A   01800  DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    0x5645d396aff0 ---------A   01810  DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    0x5645d396b3e0 ---------A   01820  DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    0x5645d396b6b0 ---------A   01830  LET B9=0
    0x5645d396b990 ---------A   01840  LET K9=0
    0x5645d396bc80 ---------A   01850  LET A1$="NSLPTSDCX"
    0x5645d396bcf0 ---------A   01860  REM
    0x5645d396bdf0 ---------A   01870  REM ===============================================================
    0x5645d396be80 ---------A   01880  REM
    0x5645d396bf40 ---------A   01890  REM  SET UP WHAT EXISTS IN GALAXY ...
    0x5645d396c230 ---------A   01900  FOR I=1 TO 8
    0x5645d396c5d0 ---------A   01910  FOR J=1 TO 8
    0x5645d396c9a0 ---------A   01920  LET R1=RND(1)
    0x5645d396cbd0 ---------A   01930  IF R1>.98 GOTO 1980
    0x5645d396ce40 ---------A   01940  IF R1>.95 GOTO 2010
    0x5645d396d0b0 ---------A   01950  IF R1>.8  GOTO 2040
    0x5645d396d3b0 ---------A   01960  LET K3=0
    0x5645d396d420 ---------A   01970  GOTO 2060
    0x5645d396d630 ---------A   01980  LET K3=3
    0x5645d396d960 ---------A T 01990  LET K9=K9+3
    0x5645d396d9d0 ---------A   02000  GOTO 2060
    0x5645d396dbe0 ---------A   02010  LET K3=2
    0x5645d396df10 ---------A T 02020  LET K9=K9+2
    0x5645d396df80 ---------A   02030  GOTO 2060
    0x5645d396e190 ---------A   02040  LET K3=1
    0x5645d396e4c0 ---------A T 02050  LET K9=K9+1
    0x5645d396e7c0 ---------A   02060  LET R1=RND(1)
    0x5645d396e9f0 ---------A T 02070  IF R1>.96 GOTO 2100
    0x5645d396ecf0 ---------A   02080  LET B3=0
    0x5645d396ed60 ---------A   02090  GOTO 2120
    0x5645d396ef70 ---------A   02100  LET B3=1
    0x5645d396f2b0 ---------A T 02110  LET B9=B9+1
    0x5645d396f950 ---------A   02120  LET S3=INT(RND(1)*8+1)
    0x5645d39701a0 ---------A T 02130  LET G(I,J)=K3*100+B3*10+S3
    0x5645d3970230 ---------A   02140  REM K3=#KLINGONS B3=#STARBASES S3=#STARS
    0x5645d3970620 ---------A   02150  LET Z(I,J)=0
    0x5645d3970750 ---------A   02160  NEXT J
    0x5645d39708a0 ---------A   02170  NEXT I
    0x5645d3970bb0 ---------A   02180  LET K7=K9
    0x5645d3970ea0 ---------A   02190  LET X$=""
    0x5645d39711a0 ---------A   02200  LET X0$=" IS "
    0x5645d39713d0 ---------A   02210  IF B9<>0 GOTO 2270
    0x5645d3971620 ---------A   02220  LET B9=1
    0x5645d39719d0 ---------A   02230  IF G(6,3)>=200 GOTO 2260
    0x5645d3972040 ---------A   02240  LET G(6,3)=G(6,3)+100
    0x5645d3972380 ---------A   02250  LET K9=K9+1
    0x5645d39729b0 ---------A   02260  LET G(6,3)=G(6,3)+10
    0x5645d3972be0 ---------A T 02270  IF B9=1 GOTO 2320
    0x5645d3972e40 ---------A T 02280  LET X$="S"
    0x5645d3973880 ---------A   02290  LET X0$=" ARE "
    0x5645d39739d0 ---------A   02300  PRINT " "
    0x5645d3973b50 ---------A   02310  PRINT " "
    0x5645d3973cc0 ---------A   02320  PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    0x5645d3973e50 ---------A T 02330  PRINT " "
    0x5645d3974200 ---------A   02340  PRINT "    DESTROY THE "K9" KLINGON WARSHIPS WHICH HAVE INVADED"
    0x5645d39743c0 ---------A   02350  PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x5645d3974b80 ---------A   02360  PRINT "  ON STARDATE"T0+T9"; THIS GIVES YOU"T9" DAYS.  THERE"X0$
    0x5645d3975100 ---------A   02370  PRINT " "B9"STARBASE";X$" IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    0x5645d3975290 ---------A   02380  PRINT " "
    0x5645d3975430 ---------A   02390  PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    0x5645d3975590 ---------A   02400  INPUT A$
    0x5645d3975610 ---------A   02410  REM
    0x5645d3975710 ---------A   02420  REM ===============================================================
    0x5645d39757a0 ---------A   02430  REM
    0x5645d3975870 ---------A   02440  REM *** HERE ANY TIME ENTER NEW QUADRANT ...
    0x5645d3975b80 ---------A   02450  LET Z4=Q1
    0x5645d3975e70 ---------A T 02460  LET Z5=Q2
    0x5645d3976080 ---------A   02470  LET K3=0
    0x5645d3976290 ---------A   02480  LET B3=0
    0x5645d39764a0 ---------A   02490  LET S3=0
    0x5645d3976770 ---------A   02500  LET G5=0
    0x5645d3976c20 ---------A   02510  LET D4=.5*RND(1)
    0x5645d3976fc0 ---------A   02520  FOR I7 = 1 TO 8
    0x5645d39773a0 ---------A   02530  Q$(I7)=SPACE$(24)
    0x5645d39774d0 ---------A   02540  NEXT I7
    0x5645d3977720 ---------A   02550  IF Q1<1 GOTO 2760
    0x5645d3977980 ---------A   02560  IF Q1>8 GOTO 2760
    0x5645d3977be0 ---------A   02570  IF Q2<1 GOTO 2760
    0x5645d3977e40 ---------A   02580  IF Q2>8 GOTO 2760
    0x5645d3977ee0 ---------A   02590  GOSUB 10950
    0x5645d3978040 ---------A   02600  PRINT " "
    0x5645d39782a0 ---------A   02610  IF T<>T0 GOTO 2650
    0x5645d3978490 ---------A   02620  PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    0x5645d39788c0 ---------A   02630  PRINT "IN THE GALACTIC QUADRANT, '"G2$"'."
    0x5645d3978960 ---------A   02640  GOTO 2660
    0x5645d3978cb0 ---------A   02650  PRINT "NOW ENTERING "G2$" QUADRANT ..."
    0x5645d3978e20 ---------A T 02660  PRINT " "
    0x5645d39793e0 ---------A T 02670  LET X=G(Q1,Q2)*.01
    0x5645d3979700 ---------A   02680  LET K3=INT(X)
    0x5645d3979c90 ---------A   02690  LET B3=INT((X-K3)*10)
    0x5645d397a640 ---------A   02700  LET S3=G(Q1,Q2)-INT(G(Q1,Q2)*.1)*10
    0x5645d397a870 ---------A   02710  IF K3=0 GOTO 2750
    0x5645d397aa30 ---------A   02720  PRINT "COMBAT AREA      CONDITION RED"
    0x5645d397ac70 ---------A   02730  IF S>200 GOTO 2750
    0x5645d397ae20 ---------A   02740  PRINT "   SHIELDS DANGEROUSLY LOW"
    0x5645d397b040 ---------A   02750  MAT K=ZER
    0x5645d397b320 ---------A T 02760  FOR I=1 TO 3
    0x5645d397b6e0 ---------A T 02770  LET K(I,3)=0
    0x5645d397b810 ---------A   02780  NEXT I
    0x5645d397b8a0 ---------A   02790  REM
    0x5645d397b9a0 ---------A   02800  REM ===============================================================
    0x5645d397ba30 ---------A   02810  REM
    0x5645d397bb20 ---------A   02820  REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS
    0x5645d397bbf0 ---------A   02830  REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    0x5645d397be40 ---------A   02840  LET A$="<*>"
    0x5645d397c130 ---------A   02850  LET Z1=S1
    0x5645d397c420 ---------A   02860  LET Z2=S2
    0x5645d397c490 ---------A   02870  GOSUB 10540
    0x5645d397c780 ---------A   02880  FOR I=1 TO K3
    0x5645d397c800 ---------A   02890  GOSUB 10430
    0x5645d397ca30 ---------A   02900  LET A$="+++"
    0x5645d397cc60 ---------A   02910  LET Z1=R1
    0x5645d397cf50 ---------A   02920  LET Z2=R2
    0x5645d397cfc0 ---------A   02930  GOSUB 10540
    0x5645d397d390 ---------A   02940  LET K(I,1)=R1
    0x5645d397d770 ---------A   02950  LET K(I,2)=R2
    0x5645d397db20 ---------A   02960  LET K(I,3)=200
    0x5645d397dc50 ---------A   02970  NEXT I
    0x5645d397df60 ---------A   02980  FOR I=1 TO B3
    0x5645d397dfe0 ---------A   02990  GOSUB 10430
    0x5645d397e210 ---------A   03000  LET A$=">!<"
    0x5645d397e440 ---------A   03010  LET Z1=R1
    0x5645d397e670 ---------A   03020  LET Z2=R2
    0x5645d397e6e0 ---------A   03030  GOSUB 10540
    0x5645d397e9d0 ---------A   03040  LET B4=Z1
    0x5645d397ecc0 ---------A   03050  LET B5=Z2
    0x5645d397edf0 ---------A   03060  NEXT I
    0x5645d397f100 ---------A   03070  FOR I=1 TO S3
    0x5645d397f180 ---------A   03080  GOSUB 10430
    0x5645d397f3b0 ---------A   03090  LET A$=" * "
    0x5645d397f5e0 ---------A   03100  LET Z1=R1
    0x5645d397f810 ---------A   03110  LET Z2=R2
    0x5645d397f880 ---------A   03120  GOSUB 10540
    0x5645d397f9b0 ---------A   03130  NEXT I
    0x5645d397fa50 ---------A   03140  GOSUB 8060
    0x5645d397fda0 ---------A T 03150  IF S+E<=10 GOTO 3180
    0x5645d3980000 ---------A T 03160  IF E>10 GOTO 3220
    0x5645d3980330 ---------A   03170  IF D(7)>=0 GOTO 3220
    0x5645d39809e0 ---------A   03180  PRINT CHR$(7)"** FATAL ERROR **"CHR$(7)"   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    0x5645d3980bb0 ---------A T 03190  PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    0x5645d3980d40 ---------A   03200  PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    0x5645d3980dc0 ---------A   03210  GOTO 7840
    0x5645d3980f30 ---------A   03220  PRINT "COMMAND";
    0x5645d3981090 ---------A T 03230  INPUT A$
    0x5645d3981390 ---------A   03240  FOR I=1 TO 9
    0x5645d3981ad0 ---------A   03250  IF MID$(A$,1,1)<>MID$(A1$,I,1) GOTO 3310
    0x5645d3981d40 ---------A   03260  IF I<>2 GOTO 3300
    0x5645d3982090 ---------A   03270  IF LEN(A$)<2 GOTO 3300
    0x5645d3982580 ---------A   03280  IF MID$(A$,2,1)="R" GOTO 3300
    0x5645d3982800 ---------A   03290  LET I=6
    0x5645d3983010 ---------A   03300  ON I GOTO 3480, 3140, 5370, 5660, 6130, 7070, 7260, 8940, 7870
    0x5645d3983150 ---------A T 03310  NEXT I
    0x5645d3983300 ---------A T 03320  PRINT "ENTER ONE OF THE FOLLOWING:"
    0x5645d3983480 ---------A   03330  PRINT "  NAV (TO SET COURSE)"
    0x5645d3983610 ---------A   03340  PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    0x5645d3983790 ---------A   03350  PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    0x5645d3983920 ---------A   03360  PRINT "  PHA (TO FIRE PHASERS)"
    0x5645d3983ab0 ---------A   03370  PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    0x5645d3983c40 ---------A   03380  PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    0x5645d3983dd0 ---------A   03390  PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    0x5645d3983f60 ---------A   03400  PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    0x5645d39840d0 ---------A   03410  PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    0x5645d3984230 ---------A   03420  PRINT " "
    0x5645d39842b0 ---------A   03430  GOTO 3150
    0x5645d3984320 ---------A   03440  REM
    0x5645d3984420 ---------A   03450  REM ===============================================================
    0x5645d39844b0 ---------A   03460  REM
    0x5645d3984560 ---------A   03470  REM  COURSE CONTROL BEGINS HERE
    0x5645d3984700 ---------A   03480  PRINT "COURSE(1-9)";
    0x5645d3984930 ---------A T 03490  INPUT C1
    0x5645d3984b70 ---------A   03500  IF C1>=1 GOTO 3530
    0x5645d3984d40 ---------A   03510  PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5645d3984dc0 ---------A T 03520  GOTO 3150
    0x5645d3984ff0 ---------A   03530  IF C1<9 GOTO 3560
    0x5645d3985250 ---------A T 03540  IF C1>9 GOTO 3510
    0x5645d3985300 ---------A   03550  GOTO 3510
    0x5645d3985470 ---------A   03560  PRINT "WARP FACTOR (0-8)";
    0x5645d3973060 ---------A T 03570  INPUT W1
    0x5645d39732a0 ---------A   03580  IF W1 > 0 GOTO 3620
    0x5645d3973480 ---------A   03590  PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    0x5645d3986620 ---------A   03600  PRINT "          SET WARP "W1" !"
    0x5645d39866b0 ---------A   03610  GOTO 3150
    0x5645d39868e0 ---------A   03620  IF W1<=8 GOTO 3660
    0x5645d3986ac0 ---------A T 03630  PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    0x5645d3986e20 ---------A   03640  PRINT "         TAKE WARP "W1"!/"
    0x5645d3986eb0 ---------A   03650  GOTO 3150
    0x5645d39871a0 ---------A   03660  IF D(1)>=0 GOTO 3700
    0x5645d3987410 ---------A T 03670  IF W1<=0.2 GOTO 3700
    0x5645d39875e0 ---------A   03680  PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    0x5645d3987670 ---------A   03690  GOTO 3480
    0x5645d3987b90 ---------A   03700  LET N=INT(W1*8+.5)
    0x5645d3987ee0 ---------A T 03710  IF E-N>=0 GOTO 3830
    0x5645d39880d0 ---------A   03720  PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x5645d3988450 ---------A   03730  PRINT "   FOR MANEUVERING AT WARP"W1"!'"
    0x5645d39887d0 ---------A   03740  IF S<N-E GOTO 3150
    0x5645d3988b00 ---------A   03750  IF D(7)<0 GOTO 3150
    0x5645d3988ef0 ---------A   03760  PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"S" UNITS"
    0x5645d3989070 ---------A   03770  PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    0x5645d39890f0 ---------A   03780  GOTO 7070
    0x5645d3989160 ---------A   03790  REM
    0x5645d3989260 ---------A   03800  REM ===============================================================
    0x5645d39892f0 ---------A   03810  REM
    0x5645d39893c0 ---------A   03820  REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...
    0x5645d39896e0 ---------A   03830  FOR I=1 TO K3
    0x5645d3989aa0 ---------A T 03840  IF K(1,3)<=0 GOTO 3940
    0x5645d3989d00 ---------A   03850  LET A$="   "
    0x5645d398a0d0 ---------A   03860  LET Z1=K(I,1)
    0x5645d398a4a0 ---------A   03870  LET Z2=K(I,2)
    0x5645d398a510 ---------A   03880  GOSUB 10540
    0x5645d398a580 ---------A   03890  GOSUB 10430
    0x5645d398a950 ---------A   03900  LET K(I,1)=Z1
    0x5645d398ad20 ---------A   03910  LET K(I,2)=Z2
    0x5645d398af50 ---------A   03920  LET A$="+++"
    0x5645d398afc0 ---------A   03930  GOSUB 10540
    0x5645d398b0f0 ---------A   03940  NEXT I
    0x5645d398b180 ---------A T 03950  GOSUB 7600
    0x5645d398b450 ---------A   03960  LET D1=0
    0x5645d398b740 ---------A   03970  LET D6=W1
    0x5645d398b970 ---------A   03980  IF W1<1 GOTO 4040
    0x5645d398bbb0 ---------A   03990  LET D6=1
    0x5645d398bc20 ---------A   04000  REM
    0x5645d398bd20 ---------A   04010  REM ===============================================================
    0x5645d398bdb0 ---------A   04020  REM
    0x5645d398be60 ---------A   04030  REM MAKE REPAIRS TO SHIP
    0x5645d398c160 ---------A   04040  FOR I=1 TO 8
    0x5645d398c480 ---------A T 04050  IF D(I)>=0 GOTO 4150
    0x5645d398c9c0 ---------A   04060  LET D(I)=D(I)+6
    0x5645d398ccd0 ---------A   04070  IF D(I)<0 GOTO 4150
    0x5645d398cf40 ---------A   04080  IF D1=1 GOTO 4110
    0x5645d398d1a0 ---------A   04090  LET D1=1
    0x5645d398d300 ---------A   04100  PRINT "DAMAGE CONTROL REPORT:"
    0x5645d398d4c0 ---------A   04110  PRINT TAB(8);
    0x5645d398d700 ---------A T 04120  LET R1=I
    0x5645d398d780 ---------A   04130  GOSUB 10770
    0x5645d398d8d0 ---------A   04140  PRINT " REPAIR COMPLETED"
    0x5645d398da10 ---------A   04150  NEXT I
    0x5645d398daa0 ---------A T 04160  REM
    0x5645d398dba0 ---------A   04170  REM ===============================================================
    0x5645d398dc30 ---------A   04180  REM
    0x5645d398dcf0 ---------A   04190  REM DAMAGE/IMPROVEMENT DURING SOME VES
    0x5645d398e010 ---------A   04200  IF RND(1)>.2 GOTO 4400
    0x5645d398e630 ---------A   04210  LET R1=INT(RND(1)*8+1)
    0x5645d398e920 ---------A   04220  IF RND(1)>=.6 GOTO 4300
    0x5645d398f170 ---------A   04230  LET D(R1)=D(R1)-(RND(1)*5+1)
    0x5645d398f2d0 ---------A   04240  PRINT " "
    0x5645d398f460 ---------A   04250  PRINT "DAMAGE CONTROL REPORT:";
    0x5645d398f4e0 ---------A   04260  GOSUB 10770
    0x5645d398f630 ---------A   04270  PRINT " DAMAGED"
    0x5645d398f790 ---------A   04280  PRINT " "
    0x5645d398f820 ---------A   04290  GOTO 4400
    0x5645d3990030 ---------A   04300  LET D(R1)=D(R1)+(RND(1)*3+1)
    0x5645d3990190 ---------A T 04310  PRINT " "
    0x5645d3990320 ---------A   04320  PRINT "DAMAGE CONTROL REPORT:";
    0x5645d39903b0 ---------A   04330  GOSUB 10770
    0x5645d3990510 ---------A   04340  PRINT " STATE OF REPAIR IMPROVED"
    0x5645d3990670 ---------A   04350  PRINT " "
    0x5645d39906f0 ---------A   04360  REM
    0x5645d39907f0 ---------A   04370  REM ===============================================================
    0x5645d3990880 ---------A   04380  REM
    0x5645d3990930 ---------A   04390  REM BEGIN MOVING STARSHIP **
    0x5645d3990b80 ---------A   04400  LET A$="   "
    0x5645d3990e90 ---------A T 04410  LET Z1=INT(S1)
    0x5645d39911a0 ---------A   04420  LET Z2=INT(S2)
    0x5645d3991220 ---------A   04430  GOSUB 10540
    0x5645d3991850 ---------A   04440  LET X1=-SIN((C1-1)*P1)
    0x5645d3991a80 ---------A   04450  LET X=S1
    0x5645d3991d80 ---------A   04460  LET Y=S2
    0x5645d39923b0 ---------A   04470  LET X2= COS((C1-1)*P1)
    0x5645d39926a0 ---------A   04480  LET Q4=Q1
    0x5645d3992990 ---------A   04490  LET Q5=Q2
    0x5645d3992c80 ---------A   04500  FOR I=1 TO N
    0x5645d3992fe0 ---------A   04510  LET S1=S1+X1
    0x5645d3993340 ---------A   04520  LET S2=S2+X2
    0x5645d3993570 ---------A   04530  IF S1<0.5 GOTO 4790
    0x5645d39937e0 ---------A   04540  IF S1>=8.5 GOTO 4790
    0x5645d3993a50 ---------A   04550  IF S2<0.5 GOTO 4790
    0x5645d3993cc0 ---------A   04560  IF S2>=8.5 GOTO 4790
    0x5645d39948d0 ---------A   04570  IF MID$(Q$(INT(S1+.5)),(3*INT(S2+.5)-2),3) = "   " GOTO 4630
    0x5645d3994c50 ---------A   04580  LET S1=S1-X1
    0x5645d3994fd0 ---------A   04590  LET S2=S2-X2
    0x5645d3995450 ---------A   04600  PRINT "WARP ENGINES SHUT DOWN AT SECTOR "INT(S1+.5);
    0x5645d39959a0 ---------A   04610  PRINT ","INT(S2+.5)" DUE TO BAD NAVIGATION"
    0x5645d3995a20 ---------A   04620  GOTO 4640
    0x5645d3995b50 ---------A   04630  NEXT I
    0x5645d3995da0 ---------A T 04640  LET A$="<*>"
    0x5645d39961b0 ---------A T 04650  S1=INT(S1+0.5)
    0x5645d39965c0 ---------A   04660  S2=INT(S2+0.5)
    0x5645d39968d0 ---------A   04670  LET Z1=INT(S1)
    0x5645d3996be0 ---------A   04680  LET Z2=INT(S2)
    0x5645d3996c50 ---------A   04690  GOSUB 10540
    0x5645d3996cc0 ---------A   04700  GOSUB 5250
    0x5645d3996fa0 ---------A   04710  LET T8=1
    0x5645d39971d0 ---------A   04720  IF W1>=1 GOTO 4740
    0x5645d3997720 ---------A   04730  LET T8=.1*INT(10*W1)
    0x5645d3997a80 ---------A   04740  LET T=T+T8
    0x5645d3997df0 ---------A T 04750  IF T>T0+T9 GOTO 7820
    0x5645d3997ec0 ---------A   04760  REM SEE IF DOCKED, THEN GET COMMAND
    0x5645d3997f60 ---------A   04770  GOTO 3140
    0x5645d3997fe0 ---------A   04780  REM EXCEEDED QUADRANT LIMITS
    0x5645d3998690 ---------A   04790  LET X=8*Q1+X+N*X1
    0x5645d3998d20 ---------A T 04800  LET Y=8*Q2+Y+N*X2
    0x5645d3999130 ---------A   04810  LET Q1=INT(X/8)
    0x5645d3999550 ---------A   04820  LET Q2=INT(Y/8)
    0x5645d3999a90 ---------A   04830  LET S1=INT(X-Q1*8)
    0x5645d3999fc0 ---------A   04840  LET S2=INT(Y-Q2*8)
    0x5645d399a2a0 ---------A   04850  LET X5=0
    0x5645d399a4d0 ---------A   04860  IF S1<>0 GOTO 4900
    0x5645d399a830 ---------A   04870  LET Q1=Q1-1
    0x5645d399aa40 ---------A   04880  LET S1=8
    0x5645d399ac60 ---------A   04890  LET X5=0
    0x5645d399ae90 ---------A   04900  IF S2<>0 GOTO 4940
    0x5645d399b1f0 ---------A T 04910  LET Q2=Q2-1
    0x5645d399b400 ---------A   04920  LET S2=8
    0x5645d399b620 ---------A   04930  LET X5=0
    0x5645d399b850 ---------A   04940  IF Q1>=1 GOTO 4980
    0x5645d399ba90 ---------A T 04950  LET X5=1
    0x5645d399bca0 ---------A   04960  LET Q1=1
    0x5645d399bec0 ---------A   04970  LET S1=1
    0x5645d399c0f0 ---------A   04980  IF Q1<=8 GOTO 5020
    0x5645d399c330 ---------A T 04990  LET X5=1
    0x5645d399c540 ---------A   05000  LET Q1=8
    0x5645d399c760 ---------A   05010  LET S1=8
    0x5645d399c990 ---------A   05020  IF Q2>=1 GOTO 5060
    0x5645d399cbd0 ---------A T 05030  LET X5=1
    0x5645d399cde0 ---------A   05040  LET Q2=1
    0x5645d399d000 ---------A   05050  LET S2=1
    0x5645d399d230 ---------A   05060  IF Q2<=8 GOTO 5100
    0x5645d399d470 ---------A T 05070  LET X5=1
    0x5645d399d680 ---------A   05080  LET Q2=8
    0x5645d399d890 ---------A   05090  LET S2=8
    0x5645d399dac0 ---------A   05100  IF X5=0 GOTO 5170
    0x5645d399dcc0 ---------A T 05110  PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    0x5645d399de80 ---------A   05120  PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    0x5645d399e030 ---------A   05130  PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    0x5645d399e1e0 ---------A   05140  PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x5645d399eb50 ---------A   05150  PRINT "   AT SECTOR "S1","S2" OF QUADRANT "Q1","Q2".'"
    0x5645d399eed0 ---------A   05160  IF T>T0+T9 GOTO 7820
    0x5645d399f5a0 ---------A   05170  IF 8*Q1+Q2=8*Q4+Q5 GOTO 4640
    0x5645d399f900 ---------A T 05180  LET T=T+1
    0x5645d399f970 ---------A   05190  GOSUB 5250
    0x5645d399f9e0 ---------A   05200  GOTO 2450
    0x5645d399fa50 ---------B   05210  REM
    0x5645d399fb50 ---------B   05220  REM ===============================================================
    0x5645d399fbe0 ---------B   05230  REM
    0x5645d399fc90 ---------B   05240  REM MANEUVER ENERGY S/R ***
    0x5645d39a0100 ---------B   05250  LET E=E-N-10
    0x5645d39a0330 ---------B G 05260  IF E>=0 GOTO 5320
    0x5645d39a0510 ---------B   05270  PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    0x5645d39a0870 ---------B   05280  LET S=S+E
    0x5645d39a0a80 ---------B   05290  LET E=0
    0x5645d39a0cb0 ---------B   05300  IF S>0 GOTO 5320
    0x5645d39a0ef0 ---------B   05310  LET S=0
    0x5645d39a0f40 ---------B   05320  RETURN
    0x5645d39a0fc0 ---------A T 05330  REM
    0x5645d39a10c0 ---------A   05340  REM ===============================================================
    0x5645d39a1150 ---------A   05350  REM
    0x5645d39a1200 ---------A   05360  REM L.R. SENSOR SCAN CODE ***
    0x5645d39a1520 ---------A   05370  IF D(3)>=0 GOTO 5400
    0x5645d39a16d0 ---------A T 05380  PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x5645d39a1780 ---------A   05390  GOTO 3150
    0x5645d39a1bf0 ---------A   05400  PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"Q1","Q2
    0x5645d39a1ef0 ---------A T 05410  LET O1$="..................."
    0x5645d39a2050 ---------A   05420  PRINT O1$
    0x5645d39a2580 ---------A   05430  FOR I=Q1-1 TO Q1+1
    0x5645d39a2600 ---------A   05440  REM    DIM N(3)
    0x5645d39a29b0 ---------A   05450  FOR I1=1 TO 3
    0x5645d39a2cb0 ---------A   05460  LET N(I1)=0
    0x5645d39a2de0 ---------A   05470  NEXT I1
    0x5645d39a3320 ---------A   05480  FOR J=Q2-1 TO Q2+1
    0x5645d39a3560 ---------A   05490  IF I<1 GOTO 5570
    0x5645d39a37c0 ---------A   05500  IF I>8 GOTO 5570
    0x5645d39a3a20 ---------A   05510  IF J<1 GOTO 5550
    0x5645d39a3c80 ---------A   05520  IF J>8 GOTO 5550
    0x5645d39a43c0 ---------A   05530  LET N(J-Q2+2)=G(I,J)
    0x5645d39a4970 ---------A   05540  LET Z(I,J)=G(I,J)
    0x5645d39a4aa0 ---------A   05550  NEXTJ
    0x5645d39a4b40 ---------A T 05560  REM   DIM P1$(20)
    0x5645d39a4e80 ---------A   05570  LET P1$=": ### : ### : ### :"
    0x5645d39a54f0 ---------A T 05580  PRINT USING P1$,N(1),N(2),N(3)
    0x5645d39a5650 ---------A   05590  PRINT O1$
    0x5645d39a5790 ---------A   05600  NEXT I
    0x5645d39a5820 ---------A   05610  GOTO 3150
    0x5645d39a5890 ---------A   05620  REM
    0x5645d39a5990 ---------A   05630  REM ===============================================================
    0x5645d39a5a20 ---------A   05640  REM
    0x5645d39a5ae0 ---------A   05650  REM *** PHASER CONTROL CODE BEGINS HERE
    0x5645d39a5d30 ---------A   05660  IF K3>0 GOTO 5700
    0x5645d39a5f20 ---------A T 05670  PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    0x5645d39a6090 ---------A   05680  PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    0x5645d39a6120 ---------A   05690  GOTO 3150
    0x5645d39a6410 ---------A   05700  IF D(4)>=0 GOTO 5730
    0x5645d39a65a0 ---------A T 05710  PRINT "PHASERS INOPERATIVE"
    0x5645d39a6630 ---------A   05720  GOTO 3150
    0x5645d39a6920 ---------A   05730  IF D(8)>=0 GOTO 5750
    0x5645d39a6af0 ---------A T 05740  PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    0x5645d39a6c70 ---------A   05750  PRINT "PHASERS LOCKED ON TARGET;  "
    0x5645d39a6ee0 ---------A T 05760  PRINT "ENERGY AVAILABLE ="E
    0x5645d39a7070 ---------A T 05770  PRINT "NUMBER OF UNITS TO FIRE:";
    0x5645d39a71d0 ---------A   05780  INPUT X
    0x5645d39a7410 ---------A   05790  IF X<=0 GOTO 3150
    0x5645d39a77a0 ---------A   05800  IF E-X<0 GOTO 5760
    0x5645d39a7b20 ---------A   05810  LET E=E-X
    0x5645d39a7ba0 ---------A   05820  GOSUB 7600
    0x5645d39a7e90 ---------A   05830  IF D(7)>=0 GOTO 5850
    0x5645d39a82d0 ---------A   05840  LET X=X*RND(1)
    0x5645d39a87c0 ---------A   05850  LET H1=INT(X/K3)
    0x5645d39a8aa0 ---------A T 05860  FOR I=1 TO 3
    0x5645d39a8e80 ---------A   05870  IF K(I,3)<=0 GOTO 6070
    0x5645d39a97f0 ---------A   05880  LET H=INT((H1/FND(0))*(RND(1)*2))
    0x5645d39a9ce0 ---------A   05890  IF H>.15*K(I,3) GOTO 5930
    0x5645d39a9eb0 ---------A   05900  PRINT "SENSORS SHOW NO DAMAGE"
    0x5645d39aa650 ---------A   05910  PRINT "    TO ENEMY AT "K(I,1)","K(I,2)
    0x5645d39aa6e0 ---------A   05920  GOTO 6070
    0x5645d39aada0 ---------A   05930  LET K(I,3)=K(I,3)-H
    0x5645d39ab650 ---------A T 05940  PRINT H" UNIT HIT ON KLINGON AT SECTOR "K(I,1)","K(I,2)
    0x5645d39aba30 ---------A   05950  IF K(I,3)<=0 GOTO 5980
    0x5645d39abf80 ---------A   05960  PRINT "   (SENSORS SHOW"K(I,3)" UNITS REMAINING)"
    0x5645d39ac020 ---------A   05970  GOTO 6070
    0x5645d39ac180 ---------A   05980  PRINT " *** KLINGON DESTROYED ***"
    0x5645d39ac4c0 ---------A T 05990  LET K3=K3-1
    0x5645d39ac7f0 ---------A   06000  LET K9=K9-1
    0x5645d39aca20 ---------A   06010  A$="   "
    0x5645d39acdf0 ---------A   06020  LET Z1=K(I,1)
    0x5645d39ad1c0 ---------A   06030  LET Z2=K(I,2)
    0x5645d39ad240 ---------A   06040  GOSUB 10540
    0x5645d39ada80 ---------A   06050  LET G(Q1,Q2)=K3*100+B3*10+S3
    0x5645d39adcb0 ---------A   06060  IF K9<=0 GOTO 7970
    0x5645d39ade10 ---------A   06070  NEXT I
    0x5645d39adea0 ---------A T 06080  GOTO 3150
    0x5645d39adf10 ---------A   06090  REM
    0x5645d39ae010 ---------A   06100  REM ===============================================================
    0x5645d39ae0a0 ---------A   06110  REM
    0x5645d39ae160 ---------A   06120  REM PHOTON TORPEDO CODE BEGINS ***
    0x5645d3985770 ---------A   06130  IF D(5)>=0 GOTO 6160
    0x5645d3985920 ---------A T 06140  PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    0x5645d39859a0 ---------A   06150  GOTO 3150
    0x5645d3985bd0 ---------A   06160  IF P>0 GOTO 6190
    0x5645d3985d80 ---------A T 06170  PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x5645d3985e10 ---------A   06180  GOTO 3150
    0x5645d3985f80 ---------A   06190  PRINT "TORPEDO COURSE (1-9)";
    0x5645d39860f0 ---------A T 06200  INPUT C1
    0x5645d3986330 ---------A   06210  IF C1>=1 GOTO 6240
    0x5645d39b0210 ---------A   06220  PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5645d39b0290 ---------A T 06230  GOTO 3150
    0x5645d39b04c0 ---------A   06240  IF C1>9 GOTO 6220
    0x5645d39b0720 ---------A T 06250  IF C1<9 GOTO 6280
    0x5645d39b0990 ---------A   06260  IF C1>=9 GOTO 6190
    0x5645d39b0be0 ---------A   06270  LET C1=1
    0x5645d39b1160 ---------A   06280  LET X1=-SIN((C1-1)*P1)
    0x5645d39b16e0 ---------A T 06290  LET X2= COS((C1-1)*P1)
    0x5645d39b1b10 ---------A   06300  IF ABS(X1)<ABS(X2) THEN 6350
    0x5645d39b1ff0 ---------A   06310  M9=ABS(1/X1)
    0x5645d39b2300 ---------A   06320  X1=SGN(X1)
    0x5645d39b2650 ---------A   06330  X2=X2*M9
    0x5645d39b26c0 ---------A   06340  GOTO 6380
    0x5645d39b2ad0 ---------A   06350  M9=ABS(1/X2)
    0x5645d39b2de0 ---------A T 06360  X2=SGN(X2)
    0x5645d39b3130 ---------A   06370  X1=X1*M9
    0x5645d39b3460 ---------A   06380  LET E=E-2
    0x5645d39b3690 ---------A T 06390  LET X=S1
    0x5645d39b38c0 ---------A   06400  LET Y=S2
    0x5645d39b3c00 ---------A   06410  LET P=P-1
    0x5645d39b3d50 ---------A   06420  PRINT "TORPEDO TRACK:"
    0x5645d39b40b0 ---------A   06430  LET X=X+X1
    0x5645d39b4400 ---------A T 06440  LET Y=Y+X2
    0x5645d39b48d0 ---------A   06450  LET X9=INT(X+.5)
    0x5645d39b4da0 ---------A   06460  LET Y9=INT(Y+.5)
    0x5645d39b4fd0 ---------A   06470  IF X9<1 GOTO 7000
    0x5645d39b5240 ---------A   06480  IF X9>=9 GOTO 7000
    0x5645d39b54a0 ---------A   06490  IF Y9<1 GOTO 7000
    0x5645d39b5710 ---------A   06500  IF Y9>=9 GOTO 7000
    0x5645d39b5ba0 ---------A   06510  PRINT "               "X9","Y9
    0x5645d39b5de0 ---------A   06520  LET A$="   "
    0x5645d39b6010 ---------A   06530  LET Z1=X9
    0x5645d39b6240 ---------A   06540  LET Z2=Y9
    0x5645d39b62c0 ---------A   06550  GOSUB 10830
    0x5645d39b65b0 ---------A   06560  IF Z3<>0 GOTO 6430
    0x5645d39b6810 ---------A   06570  LET A$="+++"
    0x5645d39b6a40 ---------A   06580  LET Z1=X9
    0x5645d39b6c70 ---------A   06590  LET Z2=Y9
    0x5645d39b6ce0 ---------A   06600  GOSUB 10830
    0x5645d39b6f10 ---------A   06610  IF Z3=0 GOTO 6720
    0x5645d39b70b0 ---------A   06620  PRINT "*** KLINGON DESTROYED ***"
    0x5645d39b73f0 ---------A   06630  LET K3=K3-1
    0x5645d39b7730 ---------A   06640  LET K9=K9-1
    0x5645d39b7960 ---------A   06650  IF K9<=0 GOTO 7970
    0x5645d39b7c70 ---------A   06660  FOR I=1 TO 3
    0x5645d39b8070 ---------A   06670  IF X9<>K(I,1) GOTO 6690
    0x5645d39b84a0 ---------A   06680  IF Y9=K(I,2) GOTO 6700
    0x5645d39b8600 ---------A   06690  NEXT I
    0x5645d39b89d0 ---------A T 06700  LET K(I,3)=0
    0x5645d39b8a40 ---------A T 06710  GOTO 6940
    0x5645d39b8c70 ---------A   06720  LET A$=" * "
    0x5645d39b8ea0 ---------A T 06730  LET Z1=X9
    0x5645d39b90d0 ---------A   06740  LET Z2=Y9
    0x5645d39b9140 ---------A   06750  GOSUB 10830
    0x5645d39b9370 ---------A   06760  IF Z3=0 GOTO 6790
    0x5645d39b9930 ---------A   06770  PRINT "STAR AT"X9;","Y9;" ABSORBED TORPEDO ENERGY."
    0x5645d39b99b0 ---------A   06780  GOTO 7010
    0x5645d39b9be0 ---------A   06790  LET A$=">!<"
    0x5645d39b9e10 ---------A T 06800  LET Z1=X9
    0x5645d39ba040 ---------A   06810  LET Z2=Y9
    0x5645d39ba0b0 ---------A   06820  GOSUB 10830
    0x5645d39ba2e0 ---------A   06830  IF Z3=0 GOTO 6190
    0x5645d39ba490 ---------A   06840  PRINT "*** STARBASE DESTROYED ***"
    0x5645d39ba7d0 ---------A   06850  LET B3=B3-1
    0x5645d39bab00 ---------A   06860  LET B9=B9-1
    0x5645d39bad30 ---------A   06870  IF B9>0 GOTO 6910
    0x5645d39baf60 ---------A   06880  PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    0x5645d39bb0f0 ---------A   06890  PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    0x5645d39bb1a0 ---------A   06900  GOTO 7870
    0x5645d39bb320 ---------A   06910  PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x5645d39bb480 ---------A T 06920  PRINT "   COURT MARTIAL!"
    0x5645d39bb6a0 ---------A   06930  LET D0=0
    0x5645d39bb8d0 ---------A   06940  LET A$="   "
    0x5645d39bbb00 ---------A T 06950  LET Z1=X9
    0x5645d39bbd30 ---------A   06960  LET Z2=Y9
    0x5645d39bbdb0 ---------A   06970  GOSUB 10540
    0x5645d39bc5e0 ---------A   06980  LET G(Q1,Q2)=K3*100+B3*10+S3
    0x5645d39bc660 ---------A   06990  GOTO 7010
    0x5645d39bc7b0 ---------A   07000  PRINT "TORPEDO MISSED"
    0x5645d39bc830 ---------A T 07010  GOSUB 7600
    0x5645d39bc8a0 ---------A T 07020  GOTO 3150
    0x5645d39bc910 ---------A   07030  REM
    0x5645d39bca10 ---------A   07040  REM ===============================================================
    0x5645d39bcaa0 ---------A   07050  REM
    0x5645d39bcb60 ---------A   07060  REM *** SHIELD CONTROL STARTS HERE
    0x5645d39bce80 ---------A   07070  IF D(7)>=0 GOTO 7100
    0x5645d39bd020 ---------A T 07080  PRINT "SHIELD CONTROL INOPERABLE"
    0x5645d39bd0d0 ---------A   07090  GOTO 3150
    0x5645d39bd550 ---------A   07100  PRINT "ENERGY AVAILABLE ="E+5". NUMBER OF UNITS TO SHIELDS:";
    0x5645d39bd6b0 ---------A T 07110  INPUT X
    0x5645d39bd8f0 ---------A   07120  IF X>=0 GOTO 7160
    0x5645d39bdb70 ---------A   07130  IF S<>X GOTO 7160
    0x5645d39bdd00 ---------A   07140  PRINT "(SHIELDS UNCHANGED)"
    0x5645d39bdd90 ---------A   07150  GOTO 3150
    0x5645d39be200 ---------A   07160  IF E+S-X<0 GOTO 7100
    0x5645d39be6a0 ---------A T 07170  LET E=E+S-X
    0x5645d39be8f0 ---------A   07180  LET S=X
    0x5645d39bea70 ---------A   07190  PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x5645d39bedd0 ---------A   07200  PRINT "  'SHIELDS NOW AT "S" PER YOUR COMMAND'"
    0x5645d39bee50 ---------A   07210  GOTO 3150
    0x5645d39beec0 ---------A   07220  REM
    0x5645d39befc0 ---------A   07230  REM ===============================================================
    0x5645d39bf050 ---------A   07240  REM
    0x5645d39bf110 ---------A   07250  REM *** DAMAGE CONTROL STARTS HERE
    0x5645d39bf430 ---------A   07260  IF D(6)>=0 GOTO 7480
    0x5645d39bf5e0 ---------A T 07270  PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    0x5645d39bf820 ---------A   07280  IF D0=0 GOTO 3150
    0x5645d39bfb20 ---------A T 07290  LET D3=0
    0x5645d39bfe00 ---------A   07300  FOR I=1 TO 8
    0x5645d39c0120 ---------A   07310  IF D(I)>=0 GOTO 7330
    0x5645d39c0480 ---------A   07320  LET D3=D3+.1
    0x5645d39c05b0 ---------A   07330  NEXT I
    0x5645d39c0800 ---------A T 07340  IF D3=0 GOTO 3150
    0x5645d39c0b80 ---------A   07350  LET D3=D3+D4
    0x5645d39c0db0 ---------A   07360  IF D3<1 GOTO 7380
    0x5645d39c1020 ---------A   07370  LET D3=.9
    0x5645d39c11c0 ---------A   07380  PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    0x5645d39c1360 ---------A T 07390  PRINT "ESTIMATED TIME TO REPAIR: ";
    0x5645d39c15f0 ---------A   07400  PRINT USING ".# STARDATES",D3
    0x5645d39c1790 ---------A   07410  PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    0x5645d39c1900 ---------A   07420  INPUT A$
    0x5645d39c1b60 ---------A   07430  IF A$<>"YES" GOTO 3150
    0x5645d39c1e60 ---------A   07440  FOR I=1 TO 8
    0x5645d39c2160 ---------A   07450  LET D(I)=0
    0x5645d39c2290 ---------A   07460  NEXT I
    0x5645d39c2700 ---------A   07470  LET T=T+D3+.1
    0x5645d39c2870 ---------A   07480  PRINT " "
    0x5645d39c29e0 ---------A T 07490  PRINT "DEVICE        STATE OF REPAIR"
    0x5645d39c2cc0 ---------A   07500  FOR R1=1 TO 8
    0x5645d39c2d50 ---------A   07510  GOSUB 10770
    0x5645d39c3080 ---------A   07520  PRINT USING "  -##.##",D(R1)
    0x5645d39c31c0 ---------A   07530  NEXT R1
    0x5645d39c3330 ---------A   07540  PRINT " "
    0x5645d39c33b0 ---------A   07550  GOTO 7280
    0x5645d39c3420 ---------C   07560  REM
    0x5645d39c3520 ---------C   07570  REM ===============================================================
    0x5645d39c35b0 ---------C   07580  REM
    0x5645d39c3670 ---------C   07590  REM "KLINGONS SHOOTING" CODE BEGINS ***
    0x5645d39c38d0 ---------C   07600  IF K3<=0 GOTO 7810
    0x5645d39c3b30 ---------C G 07610  IF D0=0 GOTO 7640
    0x5645d39c3cf0 ---------C   07620  PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x5645d39c3d70 ---------C   07630  GOTO 7810
    0x5645d39c4050 ---------C   07640  FOR I=1 TO 3
    0x5645d39c4430 ---------C T 07650  IF K(I,3)<=0 GOTO 7800
    0x5645d39c4e70 ---------C   07660  LET H=INT((K(I,3)/FND(0))*(2+RND(1)))
    0x5645d39c51f0 ---------C   07670  LET S=S-H
    0x5645d39c5aa0 ---------C   07680  PRINT H" UNIT HIT ON ENTERPRISE FROM SECTOR"K(I,1)","K(I,2)
    0x5645d39c5ce0 ---------C   07690  IF S<0 GOTO 7810
    0x5645d39c60a0 ---------C   07700  PRINT "      (SHIELDS DOWN TO"S" UNITS.)"
    0x5645d39c62e0 ---------C   07710  IF H<20 GOTO 7800
    0x5645d39c6610 ---------C   07720  IF RND(1)>.6 GOTO 7800
    0x5645d39c69a0 ---------C   07730  IF H/S<=.02 GOTO 7800
    0x5645d39c70e0 ---------C   07740  LET D2=H/S+.5*RND(1)
    0x5645d39c76c0 ---------C   07750  LET R1=INT(RND(1)*8+1)
    0x5645d39c7bf0 ---------C   07760  LET D(R1)=D(R1)-D2
    0x5645d39c7d70 ---------C   07770  PRINT "DAMAGE CONTROL REPORTS '";
    0x5645d39c7e00 ---------C   07780  GOSUB 10770
    0x5645d39c7f50 ---------C   07790  PRINT " DAMAGED BY THE HIT!'"
    0x5645d39c8090 ---------C   07800  NEXT I
    0x5645d39c8100 ---------C T 07810  RETURN
    0x5645d39c8370 ---------A T 07820  PRINT "ITS IS STARDATE "T
    0x5645d39c83f0 ---------A T 07830  GOTO 7870
    0x5645d39c8580 ---------A   07840  PRINT " "
    0x5645d39c8720 ---------A T 07850  PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    0x5645d39c8ab0 ---------A   07860  PRINT "IT IS STARDATE "T"."
    0x5645d39c8e30 ---------A   07870  PRINT "THERE WERE "K9" KLINGON BATTLE CRUISERS LEFT AT "
    0x5645d39c8fa0 ---------A T 07880  PRINT "THE END OF YOUR MISSION."
    0x5645d39c9100 ---------A   07890  PRINT " "
    0x5645d39c9290 ---------A T 07900  PRINT " "
    0x5645d39c9440 ---------A   07910  PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x5645d39c95e0 ---------A   07920  PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x5645d39c9750 ---------A   07930  PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    0x5645d39c98c0 ---------A   07940  INPUT A$
    0x5645d39c9b20 ---------A   07950  IF A$="AYE" GOTO 1270
    0x5645d39c9c00 ---------A   07960  GOTO 11090
    0x5645d39c9db0 ---------A   07970  PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    0x5645d39c9f30 ---------A T 07980  PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    0x5645d39ca0c0 ---------A   07990  PRINT " "
    0x5645d39ca830 ---------A   08000  PRINT "YOUR EFFICIENCY RATING IS "((K/(T-T0))*1000)"."
    0x5645d39ca8b0 ---------A   08010  GOTO 7890
    0x5645d39ca920 ---------D   08020  REM
    0x5645d39caa20 ---------D   08030  REM ===============================================================
    0x5645d39caab0 ---------D   08040  REM
    0x5645d39cab80 ---------D   08050  REM S.R. SENSOR SCAN & STARTUP SUBR. ***
    0x5645d39cb0d0 ---------D   08060  FOR I=S1-1 TO S1+1
    0x5645d39cb600 ---------D G 08070  FOR J=S2-1 TO S2+1
    0x5645d39cba20 ---------D   08080  IF INT(I+.5)<1 GOTO 8170
    0x5645d39cbe70 ---------D   08090  IF INT(I+.5)>8 GOTO 8170
    0x5645d39cc2c0 ---------D   08100  IF INT(J+.5)<1 GOTO 8170
    0x5645d39cc710 ---------D   08110  IF INT(J+.5)>8 GOTO 8170
    0x5645d39cc970 ---------D   08120  LET A$=">!<"
    0x5645d39ccba0 ---------D   08130  LET Z1=I
    0x5645d39ccdd0 ---------D   08140  LET Z2=J
    0x5645d39cce50 ---------D   08150  GOSUB 10830
    0x5645d39cd080 ---------D   08160  IF Z3=1 GOTO 8210
    0x5645d39cd1e0 ---------D   08170  NEXT J
    0x5645d39cd330 ---------D T 08180  NEXT I
    0x5645d39cd560 ---------D   08190  LET D0=0
    0x5645d39cd5d0 ---------D   08200  GOTO 8280
    0x5645d39cd7e0 ---------D   08210  LET D0=1
    0x5645d39cdad0 ---------D T 08220  LET C$="DOCKED"
    0x5645d39cdce0 ---------D   08230  LET E=3000
    0x5645d39cdf10 ---------D   08240  LET P=10
    0x5645d39ce070 ---------D   08250  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x5645d39ce290 ---------D   08260  LET S=0
    0x5645d39ce300 ---------D   08270  GOTO 8350
    0x5645d39ce530 ---------D   08280  IF K3>0 GOTO 8320
    0x5645d39ce8c0 ---------D T 08290  IF E<E0*.1 GOTO 8340
    0x5645d39ceb20 ---------D   08300  LET C$=" GREEN"
    0x5645d39ceba0 ---------D   08310  GOTO 8350
    0x5645d39cf2b0 ---------D   08320  C$=" "+CHR$(7)+"*RED*"+CHR$(7)
    0x5645d39cf320 ---------D T 08330  GOTO 8350
    0x5645d39cf560 ---------D   08340  LET C$="YELLOW"
    0x5645d39cf850 ---------D T 08350  IF D(2)>=0 GOTO 8400
    0x5645d39cf9f0 ---------D T 08360  PRINT " "
    0x5645d39cfb60 ---------D   08370  PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x5645d39cfcc0 ---------D   08380  PRINT " "
    0x5645d39cfd60 ---------D   08390  GOTO 8890
    0x5645d39cffa0 ---------D   08400  LET O1$="--------------------------------"
    0x5645d39d00f0 ---------D T 08410  PRINT O1$
    0x5645d39d03f0 ---------D   08420  LET N5$="####"
    0x5645d39d0570 ---------D   08430  PRINT " ";
    0x5645d39d0920 ---------D   08440  FOR I=1 TO 22 STEP 3
    0x5645d39d0ee0 ---------D   08450  PRINT MID$(Q$(1),I,3)" ";
    0x5645d39d1020 ---------D   08460  NEXT I
    0x5645d39d1190 ---------D   08470  PRINT " "
    0x5645d39d1320 ---------D   08480  PRINT " ";
    0x5645d39d16d0 ---------D   08490  FOR I=1 TO 22 STEP 3
    0x5645d39d1c90 ---------D   08500  PRINT MID$(Q$(2),I,3)" ";
    0x5645d39d1dd0 ---------D   08510  NEXT I
    0x5645d39d1fa0 ---------D   08520  PRINT "        STARDATE         ";
    0x5645d39d2200 ---------D   08530  PRINT USING "####.#",T
    0x5645d39d2390 ---------D   08540  PRINT " ";
    0x5645d39d2740 ---------D   08550  FOR I=1 TO 22 STEP 3
    0x5645d39d2d00 ---------D   08560  PRINT MID$(Q$(3),I,3)" ";
    0x5645d39d2e40 ---------D   08570  NEXT I
    0x5645d39d3000 ---------D   08580  PRINT "        CONDITION        ";
    0x5645d39d3160 ---------D   08590  PRINT C$
    0x5645d39d32f0 ---------D   08600  PRINT " ";
    0x5645d39d36a0 ---------D   08610  FOR I=1 TO 22 STEP 3
    0x5645d39d3c60 ---------D   08620  PRINT MID$(Q$(4),I,3)" ";
    0x5645d39d3da0 ---------D   08630  NEXT I
    0x5645d39d4240 ---------D   08640  PRINT "        QUADRANT         "Q1","Q2
    0x5645d39d43d0 ---------D   08650  PRINT " ";
    0x5645d39d4780 ---------D   08660  FOR I=1 TO 22 STEP 3
    0x5645d39d4d40 ---------D   08670  PRINT MID$(Q$(5),I,3)" ";
    0x5645d39d4e80 ---------D   08680  NEXT I
    0x5645d39d5320 ---------D   08690  PRINT "        SECTOR           "S1","S2
    0x5645d39d54b0 ---------D   08700  PRINT " ";
    0x5645d39d5860 ---------D   08710  FOR I=1 TO 22 STEP 3
    0x5645d39d5e20 ---------D   08720  PRINT MID$(Q$(6),I,3)" ";
    0x5645d39d5f60 ---------D   08730  NEXT I
    0x5645d39d6130 ---------D   08740  PRINT "        TOTAL ENERGY     ";
    0x5645d39d6490 ---------D   08750  PRINT USING N5$,E+S
    0x5645d39d6620 ---------D   08760  PRINT " ";
    0x5645d39d69d0 ---------D   08770  FOR I=1 TO 22 STEP 3
    0x5645d39d6f90 ---------D   08780  PRINT MID$(Q$(7),I,3)" ";
    0x5645d39d70d0 ---------D   08790  NEXT I
    0x5645d39d7290 ---------D   08800  PRINT "        PHOTON TORPEDOES ";
    0x5645d39d74d0 ---------D   08810  PRINT USING N5$,P
    0x5645d39d7660 ---------D   08820  PRINT " ";
    0x5645d39d7a10 ---------D   08830  FOR I=1 TO 22 STEP 3
    0x5645d39d7fd0 ---------D   08840  PRINT MID$(Q$(8),I,3)" ";
    0x5645d39d8110 ---------D   08850  NEXT I
    0x5645d39d82d0 ---------D   08860  PRINT "        SHIELDS          ";
    0x5645d39d8510 ---------D   08870  PRINT USING N5$,S
    0x5645d39d8670 ---------D   08880  PRINT O1$
    0x5645d39d86d0 ---------D   08890  RETURN
    0x5645d39d8750 ---------A T 08900  REM
    0x5645d39d8850 ---------A   08910  REM ===============================================================
    0x5645d39d88e0 ---------A   08920  REM
    0x5645d39d89b0 ---------A   08930  REM *** LIBARY COMPUTER CODE BEGINS HERE
    0x5645d39d8cd0 ---------A   08940  IF D(8)>=0 GOTO 8970
    0x5645d39d8e60 ---------A T 08950  PRINT "COMPUTER DISABLED"
    0x5645d39d8f00 ---------A   08960  GOTO 3150
    0x5645d39d9080 ---------A   08970  PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    0x5645d39d92a0 ---------A T 08980  INPUT A
    0x5645d39d94e0 ---------A   08990  IF A<0 GOTO 3150
    0x5645d39d9580 ---------A   09000  PRINT
    0x5645d39d9860 ---------A   09010  LET H8=1
    0x5645d39d9a90 ---------A   09020  IF A=0 GOTO 9260
    0x5645d39d9cf0 ---------A   09030  IF A>5 GOTO 9140
    0x5645d39d9d90 ---------A   09040  REM
    0x5645d39d9e90 ---------A   09050  REM ===============================================================
    0x5645d39d9f20 ---------A   09060  REM
    0x5645d39da470 ---------A   09070  ON A GOTO 9680, 9880, 10310, 9960, 9090
    0x5645d39da4f0 ---------A   09080  REM  GOTO 9150
    0x5645d39da5c0 ---------A   09090  REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
    0x5645d39da7f0 ---------A T 09100  LET H8=0
    0x5645d39daa20 ---------A   09110  LET G5=1
    0x5645d39dab80 ---------A   09120  PRINT "                      THE GALAXY"
    0x5645d39dac20 ---------A   09130  GOTO 9270
    0x5645d39dadb0 ---------A   09140  PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    0x5645d39daf30 ---------A T 09150  PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x5645d39db0b0 ---------A   09160  PRINT "   1 = STATUS REPORT"
    0x5645d39db240 ---------A   09170  PRINT "   2 = PHOTON TORPEDO DATA"
    0x5645d39db3d0 ---------A   09180  PRINT "   3 = STARBASE NAVIGATION DATA"
    0x5645d39db560 ---------A   09190  PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    0x5645d39db6d0 ---------A   09200  PRINT "   5 = GALAXY 'REGION NAME' MAP"
    0x5645d39db750 ---------A   09210  GOTO 8970
    0x5645d39db7c0 ---------A   09220  REM
    0x5645d39db8c0 ---------A   09230  REM ===============================================================
    0x5645d39db950 ---------A   09240  REM
    0x5645d39dba20 ---------A   09250  REM *** CUM GALACTIC RECORD CODE BEGINS ***
    0x5645d39dc010 ---------A   09260  PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "Q1","Q2":"
    0x5645d39dc1c0 ---------A T 09270  PRINT "      1     2     3     4     5     6     7     8"
    0x5645d39dc4e0 ---------A T 09280  LET O3$="    ----- ----- ----- ----- ----- ----- ----- -----"
    0x5645d39dc640 ---------A   09290  PRINT O3$
    0x5645d39dc6d0 ---------A   09300  REM   DIM N1$(2),N2$(8),N$(5)
    0x5645d39dc9c0 ---------A   09310  FOR I=1 TO 8
    0x5645d39dccd0 ---------A   09320  LET N1$="##"
    0x5645d39dcf30 ---------A   09330  PRINT USING N1$,I;
    0x5645d39dd200 ---------A   09340  PRINT TAB(3);"|";
    0x5645d39dd440 ---------A   09350  IF H8=0 GOTO 9470
    0x5645d39dd750 ---------A   09360  FOR J=1 TO 8
    0x5645d39dda50 ---------A   09370  LET N2$=" ### |"
    0x5645d39ddd50 ---------A   09380  LET N$=""
    0x5645d39ddfa0 ---------A   09390  IF I<>Q1 GOTO 9430
    0x5645d39de230 ---------A   09400  IF J<>Q2 GOTO 9430
    0x5645d39de560 ---------A   09410  LET N$=CHR$(7)
    0x5645d39de6e0 ---------A   09420  PRINT N$;
    0x5645d39deb00 ---------A   09430  PRINT USING N2$,Z(I,J);
    0x5645d39dec80 ---------A T 09440  PRINT N$;
    0x5645d39dedc0 ---------A   09450  NEXT J
    0x5645d39dee50 ---------A   09460  GOTO 9600
    0x5645d39df080 ---------A   09470  LET Z4=I
    0x5645d39df290 ---------A T 09480  LET Z5=1
    0x5645d39df310 ---------A   09490  GOSUB 10950
    0x5645d39df9d0 ---------A   09500  LET J0=INT(15-.5*LEN(G2$))
    0x5645d39dfba0 ---------A   09510  PRINT  TAB(J0);
    0x5645d39dfd30 ---------A   09520  PRINT G2$;
    0x5645d39dfff0 ---------A   09530  PRINT TAB(27);"|";
    0x5645d39e0210 ---------A   09540  LET Z5=5
    0x5645d39e0290 ---------A   09550  GOSUB 10950
    0x5645d39e0890 ---------A   09560  LET J0=INT(39-.5*LEN(G2$))
    0x5645d39e0a60 ---------A   09570  PRINT  TAB(J0);
    0x5645d39e0bf0 ---------A   09580  PRINT G2$;
    0x5645d39e0eb0 ---------A   09590  PRINT TAB(51);"|";
    0x5645d39e0f30 ---------A   09600  PRINT
    0x5645d39e1090 ---------A T 09610  PRINT O3$
    0x5645d39e11d0 ---------A   09620  NEXT I
    0x5645d39e1260 ---------A   09630  GOTO 3150
    0x5645d39e12d0 ---------A   09640  REM
    0x5645d39e13d0 ---------A   09650  REM ===============================================================
    0x5645d39e1460 ---------A   09660  REM
    0x5645d39e1530 ---------A   09670  REM *** STATUS REPORT CODE BEGINS HERE ***
    0x5645d39e16b0 ---------A   09680  PRINT "   STATUS REPORT:"
    0x5645d39e18f0 ---------A T 09690  LET X$=""
    0x5645d39e1b20 ---------A   09700  IF K9=1 GOTO 9720
    0x5645d39e1d90 ---------A   09710  LET X$="S"
    0x5645d39e21e0 ---------A   09720  PRINT K9" KLINGON"X$" LEFT"
    0x5645d39e2790 ---------A T 09730  LET V5=(T0+T9)-T
    0x5645d39e2a00 ---------A   09740  PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES",V5
    0x5645d39e2c40 ---------A   09750  LET X$=""
    0x5645d39e2e70 ---------A   09760  IF B9=1 GOTO 9820
    0x5645d39e30e0 ---------A   09770  LET X$="S"
    0x5645d39e3310 ---------A   09780  IF B9<>0 GOTO 9820
    0x5645d39e3510 ---------A   09790  PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    0x5645d39e3690 ---------A   09800  PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    0x5645d39e3750 ---------A   09810  GOTO 7260
    0x5645d39e3cb0 ---------A   09820  PRINT "THE FEDERATION IS MAINTAINING"B9" STARBASE"X$" IN THE GALAXY"
    0x5645d39e3d30 ---------A T 09830  GOTO 7260
    0x5645d39e3da0 ---------A   09840  REM
    0x5645d39e3ea0 ---------A   09850  REM ===============================================================
    0x5645d39e3f30 ---------A   09860  REM
    0x5645d39e4010 ---------A   09870  REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***
    0x5645d39e4240 ---------A   09880  LET H8=0
    0x5645d39e4520 ---------A T 09890  FOR I=1 TO 3
    0x5645d39e4900 ---------A   09900  IF K(I,3)<=0 GOTO 10290
    0x5645d39e4d00 ---------A   09910  LET W1=K(I,1)
    0x5645d39e50d0 ---------A   09920  LET X=K(I,2)
    0x5645d39e5300 ---------A   09930  LET C1=S1
    0x5645d39e5530 ---------A T 09940  LET A=S2
    0x5645d39e55c0 ---------A   09950  GOTO10030
    0x5645d39e5750 ---------A   09960  PRINT "DIRECTION/DISTANCE CALCULATOR:"
    0x5645d39e60c0 ---------A T 09970  PRINT "YOU ARE AT QUADRANT ("Q1","Q2") SECTOR ("S1","S2")"
    0x5645d39e6240 ---------A   09980  PRINT "PLEASE ENTER --"
    0x5645d39e63d0 ---------A   09990  PRINT "  INITIAL COORDINATES (X,Y)";
    0x5645d39e6630 ---------A   10000  INPUT C1,A
    0x5645d39e67c0 ---------A   10010  PRINT "  FINAL COORDINATES (X,Y)";
    0x5645d39e6a00 ---------A   10020  INPUT W1,X
    0x5645d39e6d60 ---------A   10030  LET X=X-A
    0x5645d39e70c0 ---------A T 10040  LET A=C1-W1
    0x5645d39e72f0 ---------A   10050  IF X<0 GOTO 10160
    0x5645d39e7560 ---------A   10060  IF A<0 GOTO 10220
    0x5645d39e77d0 ---------A   10070  IF X>0 GOTO 10090
    0x5645d39e7a40 ---------A   10080  IF A=0 GOTO 10180
    0x5645d39e7c90 ---------A   10090  LET C1=1
    0x5645d39e80a0 ---------A T 10100  IF ABS(A)<=ABS(X) GOTO 10140
    0x5645d39e8bf0 ---------A T 10110  LET V5=C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
    0x5645d39e8e40 ---------A   10120  PRINT "DIRECTION ="V5
    0x5645d39e8ee0 ---------A   10130  GOTO 10270
    0x5645d39e9570 ---------A   10140  PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
    0x5645d39e9600 ---------A T 10150  GOTO 10270
    0x5645d39e9830 ---------A   10160  IF A>0 GOTO 10200
    0x5645d39e9aa0 ---------A T 10170  IF X=0 GOTO 10220
    0x5645d39e9ce0 ---------A   10180  LET C1=5
    0x5645d39e9d50 ---------A T 10190  GOTO 10100
    0x5645d39e9f60 ---------A   10200  LET C1=3
    0x5645d39e9fd0 ---------A T 10210  GOTO 10230
    0x5645d39ea1f0 ---------A   10220  LET C1=7
    0x5645d39ea600 ---------A T 10230  IF ABS(A)>=ABS(X) GOTO 10260
    0x5645d39eb170 ---------A T 10240  PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
    0x5645d39eb210 ---------A   10250  GOTO 10270
    0x5645d39eb8c0 ---------A   10260  PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
    0x5645d39ebf30 ---------A T 10270  PRINT "DISTANCE ="SQR(X^2+A^2)
    0x5645d39ec170 ---------A T 10280  IF H8=1 GOTO 3150
    0x5645d39ec2d0 ---------A   10290  NEXT I
    0x5645d39ec370 ---------A T 10300  GOTO 3150
    0x5645d39ec5a0 ---------A   10310  IF B3<>0 GOTO 10340
    0x5645d39ec790 ---------A T 10320  PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    0x5645d39ec830 ---------A   10330  GOTO 3150
    0x5645d39ec990 ---------A   10340  PRINT "FROM ENTERPRISE TO STARBASE:"
    0x5645d39ecbd0 ---------A T 10350  LET W1=B4
    0x5645d39ece00 ---------A   10360  LET X=B5
    0x5645d39ece90 ---------A   10370  GOTO 9930
    0x5645d39ecf10 ---------E   10380  REM *** END OF LIBRARY-COMPUTER CODE
    0x5645d39ecfa0 ---------E   10390  REM
    0x5645d39ed0a0 ---------E   10400  REM ===============================================================
    0x5645d39ed130 ---------E   10410  REM
    0x5645d39ed1f0 ---------E   10420  REM S/R FINDS RANDOM HOLE IN QUADRANT
    0x5645d39ed800 ---------E   10430  LET R1=INT(RND(1)*8+1)
    0x5645d39eddd0 ---------E B 10440  LET R2=INT(RND(1)*8+1)
    0x5645d39ee000 ---------E   10450  LET A$="   "
    0x5645d39ee230 ---------E   10460  LET Z1=R1
    0x5645d39ee460 ---------E   10470  LET Z2=R2
    0x5645d39ee4e0 ---------E   10480  GOSUB 10830
    0x5645d39ee710 ---------E   10490  IF Z3=0 GOTO 10430
    0x5645d39ee790 ---------E   10500  RETURN
    0x5645d39ee810 ---------F   10510  REM
    0x5645d39ee910 ---------F   10520  REM ===============================================================
    0x5645d39ee9a0 ---------F   10530  REM
    0x5645d39eea80 ---------F   10540  REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
    0x5645d39eeeb0 ---------F G 10550  Z1 = INT(Z1+.5)
    0x5645d39ef2d0 ---------F   10560  Z2 = INT(Z2+.5)
    0x5645d39ef500 ---------F   10570  IF Z1<1 GOTO 10690
    0x5645d39ef770 ---------F   10580  IF Z1>8 GOTO 10690
    0x5645d39ef9e0 ---------F   10590  IF Z2<1 GOTO 10690
    0x5645d39efc50 ---------F   10600  IF Z2>8 GOTO 10690
    0x5645d39f01c0 ---------F   10610  DIM Q9(24), A9(3)
    0x5645d39f04b0 ---------F   10620  CHANGE Q$(Z1) TO Q9
    0x5645d39f06f0 ---------F   10630  CHANGE A$ TO A9
    0x5645d39f0ac0 ---------F   10640  FOR I8 = 1 TO 3
    0x5645d39f1220 ---------F   10650  Q9(3*(Z2-1) + I8) = A9(I8)
    0x5645d39f1350 ---------F   10660  NEXT I8
    0x5645d39f1670 ---------F   10670  CHANGE Q9 TO Q$(Z1)
    0x5645d39f1710 ---------F   10680  GOTO 10730
    0x5645d39f17b0 ---------F   10690  PRINT
    0x5645d39f1d30 ---------F T 10700  PRINT "ERROR IN COORDINATES (Z1,Z2): (";Z1;",";Z2;")"
    0x5645d39f1ea0 ---------F   10710  PRINT "     1 <=  Z1,Z2  <=8    "
    0x5645d39f1f20 ---------F   10720  PRINT
    0x5645d39f1f80 ---------F   10730  RETURN
    0x5645d39f2000 ---------G T 10740  REM
    0x5645d39f2100 ---------G   10750  REM ===============================================================
    0x5645d39f2190 ---------G   10760  REM
    0x5645d39f2260 ---------G   10770  REM *** PRINTS DEVICE NAME FROM ARRAY ***
    0x5645d39f24d0 ---------G G 10780  PRINT D$(R1);
    0x5645d39f2530 ---------G   10790  RETURN
    0x5645d39f25b0 ---------H   10800  REM
    0x5645d39f26b0 ---------H   10810  REM ===============================================================
    0x5645d39f2740 ---------H   10820  REM
    0x5645d39f2810 ---------H   10830  REM *** STRING COMPARISON IN QUADRANT ARRAY ***
    0x5645d39f2c40 ---------H G 10840  LET Z1=INT(Z1+.5)
    0x5645d39f3050 ---------H   10850  LET Z2=INT(Z2+.5)
    0x5645d39f3280 ---------H   10860  LET Z3=0
    0x5645d39f3a70 ---------H   10870  IF MID$(Q$(Z1),(3*Z2-2),3) <> A$ GOTO 10890
    0x5645d39f3cb0 ---------H   10880  Z3 = 1
    0x5645d39f3d00 ---------H   10890  RETURN
    0x5645d39f3d80 ---------I T 10900  REM
    0x5645d39f3e80 ---------I   10910  REM ===============================================================
    0x5645d39f3f10 ---------I   10920  REM
    0x5645d39f4000 ---------I   10930  REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    0x5645d39f40d0 ---------I   10940  REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)
    0x5645d39f43d0 ---------I   10950  LET L2=2
    0x5645d39f4600 ---------I G 10960  IF Z5>=5 GOTO 10980
    0x5645d39f4850 ---------I   10970  LET L2=1
    0x5645d39f4ea0 ---------I   10980  LET L3=2*(Z4-1)+L2
    0x5645d39f51c0 ---------I T 10990  LET G2$=G1$(L3)
    0x5645d39f53f0 ---------I   11000  IF G5=1 GOTO 11080
    0x5645d39f5660 ---------I   11010  LET L3=Z5
    0x5645d39f5890 ---------I   11020  IF Z5<=4 GOTO 11040
    0x5645d39f5bf0 ---------I   11030  LET L3=Z5-4
    0x5645d39f5ef0 ---------I   11040  LET G3$="IV"
    0x5645d39f6120 ---------I T 11050  IF L3=4 GOTO 11070
    0x5645d39f6610 ---------I   11060  LET G3$=MID$(G4$,1,L3)
    0x5645d39f6a80 ---------I   11070  G2$=G2$+" "+G3$
    0x5645d39f6ad0 ---------I T 11080  RETURN 
    0x5645d39f6b30 ---------A T 11090  STOP
    0x5645d39f6bb0 ---------J T 11100  REM Gosub target.
    0x5645d39f6cc0 ---------J   11110  REM This segment was originally from file STINST.BAS and was included with 
    0x5645d39f6d80 ---------J   11120  REM a CHAIN command./ASA Jul 27,2009
    0x5645d39f6e20 ---------J   11130  PRINT
    0x5645d39f6eb0 ---------J   11140  REM INSTRUCTIONS FOR "STREK" GAME
    0x5645d39f6f60 ---------J   11150  REM VERSION "STINST2" 12/8/74
    0x5645d39f7290 ---------J T 11160  FOR I=1 TO 9
    0x5645d39f7ab0 ---------J   11170  ON I GOTO 11360, 11480, 11660, 11760, 11840, 11900, 11980, 12030, 12080
    0x5645d39f7b50 ---------J   11180  PRINT
    0x5645d39f7ce0 ---------J   11190  PRINT "<TO CONTINUE, HIT 'RETURN'>";
    0x5645d39f7e40 ---------J   11200  INPUT A$
    0x5645d39f7ec0 ---------J   11210  PRINT
    0x5645d39f8000 ---------J   11220  NEXT I
    0x5645d39f8210 ---------J   11230  PRINT "1.  WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x5645d39f83e0 ---------J   11240  PRINT "      COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM, OR XXX)."
    0x5645d39ae340 ---------J   11250  PRINT "2.  IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x5645d39ae500 ---------J   11260  PRINT "      LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x5645d39ae6d0 ---------J   11270  PRINT "3.  SOME COMMANDS REQUIRE YOU TO ENTER DATA.  (FOR EXAMPLE, THE"
    0x5645d39ae8a0 ---------J   11280  PRINT "      'NAV' COMMAND COMES BACK WITH 'COURSE (1-9) ?'.)  IF YOU"
    0x5645d39aea40 ---------J   11290  PRINT "      TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x5645d39aebb0 ---------J   11300  PRINT "      WILL BE ABORTED."
    0x5645d39aec50 ---------J   11310  PRINT
    0x5645d39aede0 ---------J   11320  PRINT "HIT <CAR RET> TO CONTINUE ";
    0x5645d39aef40 ---------J   11330  INPUT A$
    0x5645d39aefa0 ---------J   11340  RETURN
    0x5645d39af030 ---------A T 11350  REM *** EXIT HERE ***
    0x5645d39af0e0 ---------J   11360  PRINT
    0x5645d39af250 ---------J   11370  PRINT "    INSTRUCTIONS FOR  ** STAR TREK **"
    0x5645d39af300 ---------J   11380  PRINT 
    0x5645d39af4c0 ---------J   11390  PRINT "THE GALAXY IS DIVIDED INTO AN 8 x 8 QUADRANT GRID,"
    0x5645d39af650 ---------J   11400  PRINT "AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID." 
    0x5645d39af710 ---------J   11410  PRINT
    0x5645d39af8e0 ---------J   11420  PRINT "   YOU WILL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE GALAXY"
    0x5645d39afab0 ---------J   11430  PRINT "TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP 'ENTERPRISE'"
    0x5645d39afc70 ---------J   11440  PRINT "YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF KLINGON WARSHIPS"
    0x5645d39afdf0 ---------J   11450  PRINT "WHICH ARE MENACING THE UNITED FEDERATION OF PLANETS."
    0x5645d39afe70 ---------J   11460  PRINT
    0x5645d39afef0 ---------J T 11470  GOTO 11180
    0x5645d39aff90 ---------J   11480  PRINT
    0x5645d39b0120 ---------J   11490  PRINT "YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x5645d39fc510 ---------J   11500  PRINT "CAPTAIN OF THE STARSHIP:"
    0x5645d39fc6c0 ---------J   11510  PRINT "'NAV' COMMAND = WARP ENGINE CONTROL --"
    0x5645d39fc870 ---------J   11520  PRINT "  COURSE IS IN A CIRCULAR NUMERICAL         4  3  2"
    0x5645d39fca20 ---------J   11530  PRINT "  VECTOR ARRANGEMENT AS SHOWN.               . . ."
    0x5645d39fcbd0 ---------J   11540  PRINT "  INTEGER AND REAL VALUES MAY BE              ..."
    0x5645d39fcd80 ---------J   11550  PRINT "  USED.  (THUS, COURSE 1.5 IS HALF-        5 ----- 1"
    0x5645d39fcf30 ---------J   11560  PRINT "  WAY BETWEEN 1 AND 2.)                       ..."
    0x5645d39fd0e0 ---------J   11570  PRINT "                                             . . ."
    0x5645d39fd280 ---------J   11580  PRINT "  VALUES MAY APPROACH 9.0, WHICH            6  7  8 "
    0x5645d39fd420 ---------J   11590  PRINT "  ITSELF IS EQUIVALENT TO 1.0."
    0x5645d39fd5c0 ---------J   11600  PRINT "                                            COURSE  "
    0x5645d39fd750 ---------J   11610  PRINT " ONE WARP FACTOR IS THE SIZE OF "
    0x5645d39fd8e0 ---------J   11620  PRINT " ONE QUADRANT.  THEREFORE, TO GET"
    0x5645d39fda70 ---------J   11630  PRINT " FROM QUADRANT 6,5 TO 5,5, YOU WOULD"
    0x5645d39fdbe0 ---------J   11640  PRINT " USE COURSE 3, WARP FACTOR 1."
    0x5645d39fdc80 ---------J T 11650  GOTO 11180
    0x5645d39fde20 ---------J   11660  PRINT "'SRS' COMMAND = SHORT RANGE SENSOR SCAN"
    0x5645d39fdfd0 ---------J   11670  PRINT "  SHOWS YOU A SCAN OF YOUR PRESENT QUADRANT."
    0x5645d39fe170 ---------J   11680  PRINT "  SYMBOLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x5645d39fe300 ---------J   11690  PRINT "		<*> = YOUR STARSHIP'S POSITION"
    0x5645d39fe4a0 ---------J   11700  PRINT "		+++ = KLINGON BATTLE CRUISER"
    0x5645d39fe640 ---------J   11710  PRINT "		>!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE!)"
    0x5645d39fe7d0 ---------J   11720  PRINT "		 *  = STAR"
    0x5645d39fe950 ---------J   11730  PRINT "  A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x5645d39fe9d0 ---------J   11740  PRINT
    0x5645d39fea70 ---------J T 11750  GOTO 11180
    0x5645d39fec10 ---------J   11760  PRINT "'LRS' COMMAND = LONG RANGE SENSOR SCAN"
    0x5645d39fedd0 ---------J   11770  PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x5645d39fefa0 ---------J   11780  PRINT "  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)"
    0x5645d39ff170 ---------J   11790  PRINT "  THE SCAN IS CODED IN THE FORM '###', WHERE THE UNITS DIGIT"
    0x5645d39ff330 ---------J   11800  PRINT "  IS THE NUMBER OF STARS, TENS DIGIT IS THE NUMBER OF STARBASES,"
    0x5645d39ff4e0 ---------J   11810  PRINT "  AND HUNDREDS DIGIT IS THE NUMBER OF KLINGONS. "
    0x5645d39ff670 ---------J   11820  PRINT "    EXAMPLE --   207 = 2 KLINGONS, ON STARBASES, 7 STARS."
    0x5645d39ff710 ---------J T 11830  GOTO 11180
    0x5645d39ff8a0 ---------J   11840  PRINT "'PHA' COMMAND = PHASER CONTROL"
    0x5645d39ffa60 ---------J   11850  PRINT "  ALLOWS YOU TO DESTROY THE KLINGON BATTLE CRUISERS BY"
    0x5645d39ffc10 ---------J   11860  PRINT "  ZAPPING THEM WITH SUITABLY LARGE UNITS OF ENERGY TO"
    0x5645d39ffdb0 ---------J   11870  PRINT "  DEPLETE THEIR SHIELD POWER.  (REMEMBER, KLINGONS HAVE"
    0x5645d39fff10 ---------J   11880  PRINT "  PHASERS, TOO!)"
    0x5645d39fffb0 ---------J T 11890  GOTO 11180
    0x5645d3a00160 ---------J   11900  PRINT "'TOR' COMMAND = PHOTON TORPEDO CONTROL"
    0x5645d3a00320 ---------J   11910  PRINT "  TORPEDO COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL."
    0x5645d3a004e0 ---------J   11920  PRINT "  IF YOU HIT THE KLINGON VESSEL, HE IS DESTROYED AND "
    0x5645d3a00680 ---------J   11930  PRINT "  CANNOT FIRE BACK AT YOU.  IF YOU MISS, YOU ARE SUBJECT TO"
    0x5645d3a00810 ---------J   11940  PRINT "  HIS PHASER FIRE."
    0x5645d3a009e0 ---------J   11950  PRINT "     NOTE: THE LIBRARY-COMPUTER ('COM' COMMAND) HAS AN"
    0x5645d3a00b70 ---------J   11960  PRINT "           OPTION TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
    0x5645d3a00c10 ---------J T 11970  GOTO 11180
    0x5645d3a00db0 ---------J   11980  PRINT "'SHE' COMMAND = SHIELD CONTROL"
    0x5645d3a00f80 ---------J   11990  PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS."
    0x5645d3a01130 ---------J   12000  PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.  NOTE THAT THE "
    0x5645d3a012b0 ---------J   12010  PRINT "  TOTAL ENERGY INCLUDES SHIELD ENERGY."
    0x5645d3a01350 ---------J T 12020  GOTO 11180
    0x5645d3a014e0 ---------J   12030  PRINT "'DAM' COMMAND = DAMAGE CONTROL REPORT"
    0x5645d3a016a0 ---------J   12040  PRINT "  GIVES STATE OF REPAIR OF ALL DEVICES, WHERE A NEGATIVE"
    0x5645d3a01840 ---------J   12050  PRINT "  'STATE OF REPAIR' SHOWS THAT THE DEVICE IS TEMPORARILY"
    0x5645d3a019a0 ---------J   12060  PRINT "  DAMAGED."
    0x5645d3a01a40 ---------J T 12070  GOTO 11180
    0x5645d3a01bd0 ---------J   12080  PRINT "'COM' COMMAND = LIBRARY-COMPUTER"
    0x5645d3a01d70 ---------J   12090  PRINT "  THE LIBRARY-COMPUTER CONTAINS SIX OPTIONS:"
    0x5645d3a01f30 ---------J   12100  PRINT "  OPTION 0 = CUMULATIVE GALACTIC RECORD"
    0x5645d3a020e0 ---------J   12110  PRINT "     WHICH SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
    0x5645d3a02270 ---------J   12120  PRINT "     LONG RANGE SENSOR SCANS."
    0x5645d3a02420 ---------J   12130  PRINT "  OPTION 1 = STATUS REPORT"
    0x5645d3a025d0 ---------J   12140  PRINT "     WHICH SHOWS THE NUMBER OF KLINGONS, STARDATES, AND STARBASES"
    0x5645d3a02760 ---------J   12150  PRINT "     REMAINING IN THE GAME."
    0x5645d3a02910 ---------J   12160  PRINT "  OPTION 2 = PHOTON TORPEDO DATA"
    0x5645d3a02ac0 ---------J   12170  PRINT "     WHICH GIVES DIRECTIONS AND DISTANCE FROM THE ENTERPRISE"
    0x5645d3a02c50 ---------J   12180  PRINT "     TO ALL KLINGONS IN YOUR QUADRANT"
    0x5645d3a02df0 ---------J   12190  PRINT "  OPTION 3 = STARBASE NAVIGATION DATA"
    0x5645d3a02f90 ---------J   12200  PRINT "     WHICH GIVES DIRECTION AND DISTANCE TO ANY STARBASE"
    0x5645d3a03130 ---------J   12210  PRINT "     WITHIN YOUR QUADRANT"
    0x5645d3a032e0 ---------J   12220  PRINT "  OPTION 4 = DIRECTION/DISTANCE CALCULATOR"
    0x5645d3a03480 ---------J   12230  PRINT "     WHICH ALLOWS YOU TO ENTER COORDINATES FOR"
    0x5645d3a03610 ---------J   12240  PRINT "     DIRECTION/DISTANCE CALCULATIONS."
    0x5645d3a037c0 ---------J   12250  PRINT "  OPTION 5 = GALACTIC 'REGION NAME' MAP"
    0x5645d3a03970 ---------J   12260  PRINT "     WHICH PRINTS THE NAMES OF THE SIXTEEN MAJOR GALACTIC"
    0x5645d3a03ae0 ---------J   12270  PRINT "     REGIONS REFERRED TO IN THE GAME."
    0x5645d3a03b60 ---------J   12280  GOTO 11180
    0x5645d3a03bb0 ---------A   12290  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     12390 - 10000   -2380 

 */



/*
 *  Symbol Table Listing for 'basic/strek2.bas'
 *
    A                        Integer     
    A$                       String      
    A1$                      String      
    A9              Array    Integer         {0,2} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B3                       Integer     
    B4                       Integer     
    B5                       Integer     
    B9                       Integer     
    C               Array    Integer         {0,8} {0,1} 
    C$                       String      
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
    D$              Array    String          {0,7} 
    D0                       Integer     
    D1                       Integer     
    D2                       Integer     
    D3                       Integer     
    D4                       Integer     
    D6                       Integer     
    E                        Integer     
    E0                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FND             Array    Integer         {0,9} 
    FRE             Function Integer         args=1, char*  
    G               Array    Integer         {0,7} {0,7} 
    G1$             Array    String          {0,15} 
    G2$                      String      
    G3$                      String      
    G4$                      String      
    G5                       Integer     
    H                        Integer     
    H1                       Integer     
    H8                       Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    I1                       Integer     
    I7                       Integer     
    I8                       Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    J0                       Integer     
    K               Array    Integer         {0,2} {0,2} 
    K3                       Integer     
    K7                       Integer     
    K9                       Integer     
    L2                       Integer     
    L3                       Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M9                       Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N               Array    Integer         {0,2} 
    N$                       String      
    N1$                      String      
    N2$                      String      
    N5$                      String      
    O1$                      String      
    O3$                      String      
    OCT$            Function String          args=1, float  
    P                        Integer     
    P0                       Integer     
    P1                       Integer     
    P1$                      String      
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q$              Array    String          {0,7} 
    Q1                       Integer     
    Q2                       Integer     
    Q4                       Integer     
    Q5                       Integer     
    Q9              Array    Integer         {0,23} 
    R1                       Integer     
    R2                       Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
    S1                       Integer     
    S2                       Integer     
    S3                       Integer     
    S9                       Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    T0                       Integer     
    T8                       Integer     
    T9                       Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V5                       Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W1                       Integer     
    X                        Integer     
    X$                       String      
    X0$                      String      
    X1                       Integer     
    X2                       Integer     
    X5                       Integer     
    X9                       Integer     
    Y                        Integer     
    Y9                       Integer     
    Z               Array    Integer         {0,7} {0,7} 
    Z1                       Integer     
    Z2                       Integer     
    Z3                       Integer     
    Z4                       Integer     
    Z5                       Integer     
    ZER             Array    Integer         {0,9} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/strek2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5645d394fdb0 ---------A   01000  REM (VERSION "STREK7", 1/12/75 RCL)
    0x5645d394eb80 ---------A   01010  REM
    0x5645d394ff30 ---------A   01020  REM
    0x5645d394fe70 ---------A   01030  REM ***         *** STAR TREK ***       ***
    0x5645d39518f0 ---------A   01040  REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    0x5645d39519d0 ---------A   01050  REM *** AS SEEN ON THE STAR TREK TV SHOW.
    0x5645d3951ac0 ---------A   01060  REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    0x5645d3951bb0 ---------A   01070  REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    0x5645d3951ca0 ---------A   01080  REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY 
    0x5645d3951940 ---------A   01090  REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974
    0x5645d3951df0 ---------A   01100  REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    0x5645d3951ee0 ---------A   01110  REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    0x5645d3951f60 ---------A   01120  REM *** ADDRESS TO
    0x5645d3952050 ---------A   01130  REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    0x5645d3952130 ---------A   01140  REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    0x5645d39521c0 ---------A   01150  RANDOMIZE
    0x5645d394d6d0 ---------A   01160  PRINT  TAB(15);"* * * STAR TREK * * *"
    0x5645d394d670 ---------A   01170  PRINT
    0x5645d3952380 ---------A   01180  PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    0x5645d39524f0 ---------A   01190  INPUT A$
    0x5645d3952630 ---------A   01200  IF A$<>"YES" GOTO 1270
    0x5645d3952760 ---------A   01210  PRINT "PLEASE WAIT  . . .";
    0x5645d39527e0 ---------A   01220  GOSUB 11230
    0x5645d3952850 ---------A   01230  REM
    0x5645d395d0a0 ---------A   01240  REM ===============================================================
    0x5645d395d130 ---------A   01250  REM
    0x5645d395d1e0 ---------A   01260  REM  PROGRAM BEGINS HERE .....
    0x5645d395d4d0 ---------A T 01270  DIM Q$(8)
    0x5645d395d870 ---------A   01280  FOR I = 1 TO 8
    0x5645d395dc50 ---------A   01290  Q$(I) = SPACE$(24)
    0x5645d395dd80 ---------A   01300  NEXT I
    0x5645d395ed20 ---------A   01310  DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8)
    0x5645d395f4b0 ---------A   01320  LET T=INT(RND(1)*20+20)*100
    0x5645d395fa90 ---------A   01330  LET P1=3.14159/4
    0x5645d395fd80 ---------A   01340  LET T0=T
    0x5645d3960050 ---------A   01350  LET T9=30
    0x5645d3960320 ---------A   01360  LET D0=0
    0x5645d39605f0 ---------A   01370  LET E0=3000
    0x5645d39608e0 ---------A   01380  LET E=E0
    0x5645d3960bb0 ---------A   01390  LET P=10
    0x5645d3960ea0 ---------A   01400  LET P0=P
    0x5645d3961170 ---------A   01410  LET S9=200
    0x5645d3961460 ---------A   01420  LET S=0
    0x5645d3962470 ---------A   01430  DEF FND(D)=SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x5645d39624e0 ---------A   01440  REM
    0x5645d39625e0 ---------A   01450  REM ===============================================================
    0x5645d3962670 ---------A   01460  REM
    0x5645d3962730 ---------A   01470  REM INITIALIZE INTERPRISE'S POSITION
    0x5645d3962e00 ---------A   01480  LET Q1=INT(RND(1)*8+1)
    0x5645d39634a0 ---------A   01490  LET Q2=INT(RND(1)*8+1)
    0x5645d3963a80 ---------A   01500  LET S1=INT(RND(1)*8+1)
    0x5645d3964050 ---------A   01510  LET S2=INT(RND(1)*8+1)
    0x5645d3964320 ---------A   01520  MAT C=ZER
    0x5645d39646c0 ---------A   01530  LET C(4,1)=-1
    0x5645d3964a50 ---------A   01540  LET C(3,1)=-1
    0x5645d3964de0 ---------A   01550  LET C(2,1)=-1
    0x5645d3965170 ---------A   01560  LET C(4,2)=-1
    0x5645d3965500 ---------A   01570  LET C(5,2)=-1
    0x5645d3965890 ---------A   01580  LET C(6,2)=-1
    0x5645d3965c20 ---------A   01590  LET C(1,2)=1
    0x5645d3965fb0 ---------A   01600  LET C(2,2)=1
    0x5645d3966340 ---------A   01610  LET C(6,1)=1
    0x5645d39666d0 ---------A   01620  LET C(7,1)=1
    0x5645d3966a60 ---------A   01630  LET C(8,1)=1
    0x5645d3966df0 ---------A   01640  LET C(8,2)=1
    0x5645d3967590 ---------A   01650  LET C(9,2)=1
    0x5645d39677a0 ---------A   01660  DIM D(8)
    0x5645d3967a70 ---------A   01670  FOR I=1 TO 8
    0x5645d3967d70 ---------A   01680  LET D(I)=0
    0x5645d3967ea0 ---------A   01690  NEXT I
    0x5645d3968190 ---------A   01700  DIM D$(8)
    0x5645d3968230 ---------A   01710  RESTORE
    0x5645d3968fd0 ---------A   01720  READ D$(1),D$(2),D$(3),D$(4),D$(5),D$(6),D$(7),D$(8)
    0x5645d39693f0 ---------A   01730  DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    0x5645d39697e0 ---------A   01740  DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    0x5645d3969ad0 ---------A   01750  LET G4$="III"
    0x5645d3969da0 ---------A   01760  DIM G1$(16)
    0x5645d396a070 ---------A   01770  FOR I=1 TO 16
    0x5645d396a2b0 ---------A   01780  READ G1$(I)
    0x5645d396a3e0 ---------A   01790  NEXT I
    0x5645d396ab00 ---------A   01800  DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    0x5645d396aff0 ---------A   01810  DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    0x5645d396b3e0 ---------A   01820  DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    0x5645d396b6b0 ---------A   01830  LET B9=0
    0x5645d396b990 ---------A   01840  LET K9=0
    0x5645d396bc80 ---------A   01850  LET A1$="NSLPTSDCX"
    0x5645d396bcf0 ---------A   01860  REM
    0x5645d396bdf0 ---------A   01870  REM ===============================================================
    0x5645d396be80 ---------A   01880  REM
    0x5645d396bf40 ---------A   01890  REM  SET UP WHAT EXISTS IN GALAXY ...
    0x5645d396c230 ---------A   01900  FOR I=1 TO 8
    0x5645d396c5d0 ---------A   01910  FOR J=1 TO 8
    0x5645d396c9a0 ---------A   01920  LET R1=RND(1)
    0x5645d396cbd0 ---------A   01930  IF R1>.98 GOTO 1980
    0x5645d396ce40 ---------A   01940  IF R1>.95 GOTO 2010
    0x5645d396d0b0 ---------A   01950  IF R1>.8  GOTO 2040
    0x5645d396d3b0 ---------A   01960  LET K3=0
    0x5645d396d420 ---------A   01970  GOTO 2060
    0x5645d396d630 ---------A T 01980  LET K3=3
    0x5645d396d960 ---------A   01990  LET K9=K9+3
    0x5645d396d9d0 ---------A   02000  GOTO 2060
    0x5645d396dbe0 ---------A T 02010  LET K3=2
    0x5645d396df10 ---------A   02020  LET K9=K9+2
    0x5645d396df80 ---------A   02030  GOTO 2060
    0x5645d396e190 ---------A T 02040  LET K3=1
    0x5645d396e4c0 ---------A   02050  LET K9=K9+1
    0x5645d396e7c0 ---------A T 02060  LET R1=RND(1)
    0x5645d396e9f0 ---------A   02070  IF R1>.96 GOTO 2100
    0x5645d396ecf0 ---------A   02080  LET B3=0
    0x5645d396ed60 ---------A   02090  GOTO 2120
    0x5645d396ef70 ---------A T 02100  LET B3=1
    0x5645d396f2b0 ---------A   02110  LET B9=B9+1
    0x5645d396f950 ---------A T 02120  LET S3=INT(RND(1)*8+1)
    0x5645d39701a0 ---------A   02130  LET G(I,J)=K3*100+B3*10+S3
    0x5645d3970230 ---------A   02140  REM K3=#KLINGONS B3=#STARBASES S3=#STARS
    0x5645d3970620 ---------A   02150  LET Z(I,J)=0
    0x5645d3970750 ---------A   02160  NEXT J
    0x5645d39708a0 ---------A   02170  NEXT I
    0x5645d3970bb0 ---------A   02180  LET K7=K9
    0x5645d3970ea0 ---------A   02190  LET X$=""
    0x5645d39711a0 ---------A   02200  LET X0$=" IS "
    0x5645d39713d0 ---------A   02210  IF B9<>0 GOTO 2270
    0x5645d3971620 ---------A   02220  LET B9=1
    0x5645d39719d0 ---------A   02230  IF G(6,3)>=200 GOTO 2260
    0x5645d3972040 ---------A   02240  LET G(6,3)=G(6,3)+100
    0x5645d3972380 ---------A   02250  LET K9=K9+1
    0x5645d39729b0 ---------A T 02260  LET G(6,3)=G(6,3)+10
    0x5645d3972be0 ---------A T 02270  IF B9=1 GOTO 2320
    0x5645d3972e40 ---------A   02280  LET X$="S"
    0x5645d3973880 ---------A   02290  LET X0$=" ARE "
    0x5645d39739d0 ---------A   02300  PRINT " "
    0x5645d3973b50 ---------A   02310  PRINT " "
    0x5645d3973cc0 ---------A T 02320  PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    0x5645d3973e50 ---------A   02330  PRINT " "
    0x5645d3974200 ---------A   02340  PRINT "    DESTROY THE "K9" KLINGON WARSHIPS WHICH HAVE INVADED"
    0x5645d39743c0 ---------A   02350  PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x5645d3974b80 ---------A   02360  PRINT "  ON STARDATE"T0+T9"; THIS GIVES YOU"T9" DAYS.  THERE"X0$
    0x5645d3975100 ---------A   02370  PRINT " "B9"STARBASE";X$" IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    0x5645d3975290 ---------A   02380  PRINT " "
    0x5645d3975430 ---------A   02390  PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    0x5645d3975590 ---------A   02400  INPUT A$
    0x5645d3975610 ---------A   02410  REM
    0x5645d3975710 ---------A   02420  REM ===============================================================
    0x5645d39757a0 ---------A   02430  REM
    0x5645d3975870 ---------A   02440  REM *** HERE ANY TIME ENTER NEW QUADRANT ...
    0x5645d3975b80 ---------A T 02450  LET Z4=Q1
    0x5645d3975e70 ---------A   02460  LET Z5=Q2
    0x5645d3976080 ---------A   02470  LET K3=0
    0x5645d3976290 ---------A   02480  LET B3=0
    0x5645d39764a0 ---------A   02490  LET S3=0
    0x5645d3976770 ---------A   02500  LET G5=0
    0x5645d3976c20 ---------A   02510  LET D4=.5*RND(1)
    0x5645d3976fc0 ---------A   02520  FOR I7 = 1 TO 8
    0x5645d39773a0 ---------A   02530  Q$(I7)=SPACE$(24)
    0x5645d39774d0 ---------A   02540  NEXT I7
    0x5645d3977720 ---------A   02550  IF Q1<1 GOTO 2760
    0x5645d3977980 ---------A   02560  IF Q1>8 GOTO 2760
    0x5645d3977be0 ---------A   02570  IF Q2<1 GOTO 2760
    0x5645d3977e40 ---------A   02580  IF Q2>8 GOTO 2760
    0x5645d3977ee0 ---------A   02590  GOSUB 11050
    0x5645d3978040 ---------A   02600  PRINT " "
    0x5645d39782a0 ---------A   02610  IF T<>T0 GOTO 2650
    0x5645d3978490 ---------A   02620  PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    0x5645d39788c0 ---------A   02630  PRINT "IN THE GALACTIC QUADRANT, '"G2$"'."
    0x5645d3978960 ---------A   02640  GOTO 2660
    0x5645d3978cb0 ---------A T 02650  PRINT "NOW ENTERING "G2$" QUADRANT ..."
    0x5645d3978e20 ---------A T 02660  PRINT " "
    0x5645d39793e0 ---------A   02670  LET X=G(Q1,Q2)*.01
    0x5645d3979700 ---------A   02680  LET K3=INT(X)
    0x5645d3979c90 ---------A   02690  LET B3=INT((X-K3)*10)
    0x5645d397a640 ---------A   02700  LET S3=G(Q1,Q2)-INT(G(Q1,Q2)*.1)*10
    0x5645d397a870 ---------A   02710  IF K3=0 GOTO 2750
    0x5645d397aa30 ---------A   02720  PRINT "COMBAT AREA      CONDITION RED"
    0x5645d397ac70 ---------A   02730  IF S>200 GOTO 2750
    0x5645d397ae20 ---------A   02740  PRINT "   SHIELDS DANGEROUSLY LOW"
    0x5645d397b040 ---------A T 02750  MAT K=ZER
    0x5645d397b320 ---------A T 02760  FOR I=1 TO 3
    0x5645d397b6e0 ---------A   02770  LET K(I,3)=0
    0x5645d397b810 ---------A   02780  NEXT I
    0x5645d397b8a0 ---------A   02790  REM
    0x5645d397b9a0 ---------A   02800  REM ===============================================================
    0x5645d397ba30 ---------A   02810  REM
    0x5645d397bb20 ---------A   02820  REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS
    0x5645d397bbf0 ---------A   02830  REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    0x5645d397be40 ---------A   02840  LET A$="<*>"
    0x5645d397c130 ---------A   02850  LET Z1=S1
    0x5645d397c420 ---------A   02860  LET Z2=S2
    0x5645d397c490 ---------A   02870  GOSUB 10610
    0x5645d397c780 ---------A   02880  FOR I=1 TO K3
    0x5645d397c800 ---------A   02890  GOSUB 10490
    0x5645d397ca30 ---------A   02900  LET A$="+++"
    0x5645d397cc60 ---------A   02910  LET Z1=R1
    0x5645d397cf50 ---------A   02920  LET Z2=R2
    0x5645d397cfc0 ---------A   02930  GOSUB 10610
    0x5645d397d390 ---------A   02940  LET K(I,1)=R1
    0x5645d397d770 ---------A   02950  LET K(I,2)=R2
    0x5645d397db20 ---------A   02960  LET K(I,3)=200
    0x5645d397dc50 ---------A   02970  NEXT I
    0x5645d397df60 ---------A   02980  FOR I=1 TO B3
    0x5645d397dfe0 ---------A   02990  GOSUB 10490
    0x5645d397e210 ---------A   03000  LET A$=">!<"
    0x5645d397e440 ---------A   03010  LET Z1=R1
    0x5645d397e670 ---------A   03020  LET Z2=R2
    0x5645d397e6e0 ---------A   03030  GOSUB 10610
    0x5645d397e9d0 ---------A   03040  LET B4=Z1
    0x5645d397ecc0 ---------A   03050  LET B5=Z2
    0x5645d397edf0 ---------A   03060  NEXT I
    0x5645d397f100 ---------A   03070  FOR I=1 TO S3
    0x5645d397f180 ---------A   03080  GOSUB 10490
    0x5645d397f3b0 ---------A   03090  LET A$=" * "
    0x5645d397f5e0 ---------A   03100  LET Z1=R1
    0x5645d397f810 ---------A   03110  LET Z2=R2
    0x5645d397f880 ---------A   03120  GOSUB 10610
    0x5645d397f9b0 ---------A   03130  NEXT I
    0x5645d397fa50 ---------A T 03140  GOSUB 9590
    0x5645d397fda0 ---------A T 03150  IF S+E<=10 GOTO 3180
    0x5645d3980000 ---------A   03160  IF E>10 GOTO 3220
    0x5645d3980330 ---------A   03170  IF D(7)>=0 GOTO 3220
    0x5645d39809e0 ---------A T 03180  PRINT CHR$(7)"** FATAL ERROR **"CHR$(7)"   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    0x5645d3980bb0 ---------A   03190  PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    0x5645d3980d40 ---------A   03200  PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    0x5645d3980dc0 ---------A   03210  GOTO 7460
    0x5645d3980f30 ---------A T 03220  PRINT "COMMAND";
    0x5645d3981090 ---------A   03230  INPUT A$
    0x5645d3981390 ---------A   03240  FOR I=1 TO 9
    0x5645d3981ad0 ---------A   03250  IF MID$(A$,1,1)<>MID$(A1$,I,1) GOTO 3310
    0x5645d3981d40 ---------A   03260  IF I<>2 GOTO 3300
    0x5645d3982090 ---------A   03270  IF LEN(A$)<2 GOTO 3300
    0x5645d3982580 ---------A   03280  IF MID$(A$,2,1)="R" GOTO 3300
    0x5645d3982800 ---------A   03290  LET I=6
    0x5645d3983010 ---------A T 03300  ON I GOTO 3480, 3140, 5250, 5540, 6010, 6950, 7140, 7680, 7490
    0x5645d3983150 ---------A T 03310  NEXT I
    0x5645d3983300 ---------A   03320  PRINT "ENTER ONE OF THE FOLLOWING:"
    0x5645d3983480 ---------A   03330  PRINT "  NAV (TO SET COURSE)"
    0x5645d3983610 ---------A   03340  PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    0x5645d3983790 ---------A   03350  PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    0x5645d3983920 ---------A   03360  PRINT "  PHA (TO FIRE PHASERS)"
    0x5645d3983ab0 ---------A   03370  PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    0x5645d3983c40 ---------A   03380  PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    0x5645d3983dd0 ---------A   03390  PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    0x5645d3983f60 ---------A   03400  PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    0x5645d39840d0 ---------A   03410  PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    0x5645d3984230 ---------A   03420  PRINT " "
    0x5645d39842b0 ---------A   03430  GOTO 3150
    0x5645d3984320 ---------A   03440  REM
    0x5645d3984420 ---------A   03450  REM ===============================================================
    0x5645d39844b0 ---------A   03460  REM
    0x5645d3984560 ---------A   03470  REM  COURSE CONTROL BEGINS HERE
    0x5645d3984700 ---------A T 03480  PRINT "COURSE(1-9)";
    0x5645d3984930 ---------A   03490  INPUT C1
    0x5645d3984b70 ---------A   03500  IF C1>=1 GOTO 3530
    0x5645d3984d40 ---------A T 03510  PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5645d3984dc0 ---------A   03520  GOTO 3150
    0x5645d3984ff0 ---------A T 03530  IF C1<9 GOTO 3560
    0x5645d3985250 ---------A   03540  IF C1>9 GOTO 3510
    0x5645d3985300 ---------A   03550  GOTO 3510
    0x5645d3985470 ---------A T 03560  PRINT "WARP FACTOR (0-8)";
    0x5645d3973060 ---------A   03570  INPUT W1
    0x5645d39732a0 ---------A   03580  IF W1 > 0 GOTO 3620
    0x5645d3973480 ---------A   03590  PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    0x5645d3986620 ---------A   03600  PRINT "          SET WARP "W1" !"
    0x5645d39866b0 ---------A   03610  GOTO 3150
    0x5645d39868e0 ---------A T 03620  IF W1<=8 GOTO 3660
    0x5645d3986ac0 ---------A   03630  PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    0x5645d3986e20 ---------A   03640  PRINT "         TAKE WARP "W1"!/"
    0x5645d3986eb0 ---------A   03650  GOTO 3150
    0x5645d39871a0 ---------A T 03660  IF D(1)>=0 GOTO 3700
    0x5645d3987410 ---------A   03670  IF W1<=0.2 GOTO 3700
    0x5645d39875e0 ---------A   03680  PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    0x5645d3987670 ---------A   03690  GOTO 3480
    0x5645d3987b90 ---------A T 03700  LET N=INT(W1*8+.5)
    0x5645d3987ee0 ---------A   03710  IF E-N>=0 GOTO 3830
    0x5645d39880d0 ---------A   03720  PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x5645d3988450 ---------A   03730  PRINT "   FOR MANEUVERING AT WARP"W1"!'"
    0x5645d39887d0 ---------A   03740  IF S<N-E GOTO 3150
    0x5645d3988b00 ---------A   03750  IF D(7)<0 GOTO 3150
    0x5645d3988ef0 ---------A   03760  PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"S" UNITS"
    0x5645d3989070 ---------A   03770  PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    0x5645d39890f0 ---------A   03780  GOTO 6950
    0x5645d3989160 ---------A   03790  REM
    0x5645d3989260 ---------A   03800  REM ===============================================================
    0x5645d39892f0 ---------A   03810  REM
    0x5645d39893c0 ---------A   03820  REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...
    0x5645d39896e0 ---------A T 03830  FOR I=1 TO K3
    0x5645d3989aa0 ---------A   03840  IF K(1,3)<=0 GOTO 3940
    0x5645d3989d00 ---------A   03850  LET A$="   "
    0x5645d398a0d0 ---------A   03860  LET Z1=K(I,1)
    0x5645d398a4a0 ---------A   03870  LET Z2=K(I,2)
    0x5645d398a510 ---------A   03880  GOSUB 10610
    0x5645d398a580 ---------A   03890  GOSUB 10490
    0x5645d398a950 ---------A   03900  LET K(I,1)=Z1
    0x5645d398ad20 ---------A   03910  LET K(I,2)=Z2
    0x5645d398af50 ---------A   03920  LET A$="+++"
    0x5645d398afc0 ---------A   03930  GOSUB 10610
    0x5645d398b0f0 ---------A T 03940  NEXT I
    0x5645d398b180 ---------A   03950  GOSUB 9320
    0x5645d398b450 ---------A   03960  LET D1=0
    0x5645d398b740 ---------A   03970  LET D6=W1
    0x5645d398b970 ---------A   03980  IF W1<1 GOTO 4040
    0x5645d398bbb0 ---------A   03990  LET D6=1
    0x5645d398bc20 ---------A   04000  REM
    0x5645d398bd20 ---------A   04010  REM ===============================================================
    0x5645d398bdb0 ---------A   04020  REM
    0x5645d398be60 ---------A   04030  REM MAKE REPAIRS TO SHIP
    0x5645d398c160 ---------A T 04040  FOR I=1 TO 8
    0x5645d398c480 ---------A   04050  IF D(I)>=0 GOTO 4150
    0x5645d398c9c0 ---------A   04060  LET D(I)=D(I)+6
    0x5645d398ccd0 ---------A   04070  IF D(I)<0 GOTO 4150
    0x5645d398cf40 ---------A   04080  IF D1=1 GOTO 4110
    0x5645d398d1a0 ---------A   04090  LET D1=1
    0x5645d398d300 ---------A   04100  PRINT "DAMAGE CONTROL REPORT:"
    0x5645d398d4c0 ---------A T 04110  PRINT TAB(8);
    0x5645d398d700 ---------A   04120  LET R1=I
    0x5645d398d780 ---------A   04130  GOSUB 10850
    0x5645d398d8d0 ---------A   04140  PRINT " REPAIR COMPLETED"
    0x5645d398da10 ---------A T 04150  NEXT I
    0x5645d398daa0 ---------A   04160  REM
    0x5645d398dba0 ---------A   04170  REM ===============================================================
    0x5645d398dc30 ---------A   04180  REM
    0x5645d398dcf0 ---------A   04190  REM DAMAGE/IMPROVEMENT DURING SOME VES
    0x5645d398e010 ---------A   04200  IF RND(1)>.2 GOTO 4400
    0x5645d398e630 ---------A   04210  LET R1=INT(RND(1)*8+1)
    0x5645d398e920 ---------A   04220  IF RND(1)>=.6 GOTO 4300
    0x5645d398f170 ---------A   04230  LET D(R1)=D(R1)-(RND(1)*5+1)
    0x5645d398f2d0 ---------A   04240  PRINT " "
    0x5645d398f460 ---------A   04250  PRINT "DAMAGE CONTROL REPORT:";
    0x5645d398f4e0 ---------A   04260  GOSUB 10850
    0x5645d398f630 ---------A   04270  PRINT " DAMAGED"
    0x5645d398f790 ---------A   04280  PRINT " "
    0x5645d398f820 ---------A   04290  GOTO 4400
    0x5645d3990030 ---------A T 04300  LET D(R1)=D(R1)+(RND(1)*3+1)
    0x5645d3990190 ---------A   04310  PRINT " "
    0x5645d3990320 ---------A   04320  PRINT "DAMAGE CONTROL REPORT:";
    0x5645d39903b0 ---------A   04330  GOSUB 10850
    0x5645d3990510 ---------A   04340  PRINT " STATE OF REPAIR IMPROVED"
    0x5645d3990670 ---------A   04350  PRINT " "
    0x5645d39906f0 ---------A   04360  REM
    0x5645d39907f0 ---------A   04370  REM ===============================================================
    0x5645d3990880 ---------A   04380  REM
    0x5645d3990930 ---------A   04390  REM BEGIN MOVING STARSHIP **
    0x5645d3990b80 ---------A T 04400  LET A$="   "
    0x5645d3990e90 ---------A   04410  LET Z1=INT(S1)
    0x5645d39911a0 ---------A   04420  LET Z2=INT(S2)
    0x5645d3991220 ---------A   04430  GOSUB 10610
    0x5645d3991850 ---------A   04440  LET X1=-SIN((C1-1)*P1)
    0x5645d3991a80 ---------A   04450  LET X=S1
    0x5645d3991d80 ---------A   04460  LET Y=S2
    0x5645d39923b0 ---------A   04470  LET X2= COS((C1-1)*P1)
    0x5645d39926a0 ---------A   04480  LET Q4=Q1
    0x5645d3992990 ---------A   04490  LET Q5=Q2
    0x5645d3992c80 ---------A   04500  FOR I=1 TO N
    0x5645d3992fe0 ---------A   04510  LET S1=S1+X1
    0x5645d3993340 ---------A   04520  LET S2=S2+X2
    0x5645d3993570 ---------A   04530  IF S1<0.5 GOTO 4790
    0x5645d39937e0 ---------A   04540  IF S1>=8.5 GOTO 4790
    0x5645d3993a50 ---------A   04550  IF S2<0.5 GOTO 4790
    0x5645d3993cc0 ---------A   04560  IF S2>=8.5 GOTO 4790
    0x5645d39948d0 ---------A   04570  IF MID$(Q$(INT(S1+.5)),(3*INT(S2+.5)-2),3) = "   " GOTO 4630
    0x5645d3994c50 ---------A   04580  LET S1=S1-X1
    0x5645d3994fd0 ---------A   04590  LET S2=S2-X2
    0x5645d3995450 ---------A   04600  PRINT "WARP ENGINES SHUT DOWN AT SECTOR "INT(S1+.5);
    0x5645d39959a0 ---------A   04610  PRINT ","INT(S2+.5)" DUE TO BAD NAVIGATION"
    0x5645d3995a20 ---------A   04620  GOTO 4640
    0x5645d3995b50 ---------A T 04630  NEXT I
    0x5645d3995da0 ---------A T 04640  LET A$="<*>"
    0x5645d39961b0 ---------A   04650  S1=INT(S1+0.5)
    0x5645d39965c0 ---------A   04660  S2=INT(S2+0.5)
    0x5645d39968d0 ---------A   04670  LET Z1=INT(S1)
    0x5645d3996be0 ---------A   04680  LET Z2=INT(S2)
    0x5645d3996c50 ---------A   04690  GOSUB 10610
    0x5645d3996cc0 ---------A   04700  GOSUB 9190
    0x5645d3996fa0 ---------A   04710  LET T8=1
    0x5645d39971d0 ---------A   04720  IF W1>=1 GOTO 4740
    0x5645d3997720 ---------A   04730  LET T8=.1*INT(10*W1)
    0x5645d3997a80 ---------A T 04740  LET T=T+T8
    0x5645d3997df0 ---------A   04750  IF T>T0+T9 GOTO 7440
    0x5645d3997ec0 ---------A   04760  REM SEE IF DOCKED, THEN GET COMMAND
    0x5645d3997f60 ---------A   04770  GOTO 3140
    0x5645d3997fe0 ---------A   04780  REM EXCEEDED QUADRANT LIMITS
    0x5645d3998690 ---------A T 04790  LET X=8*Q1+X+N*X1
    0x5645d3998d20 ---------A   04800  LET Y=8*Q2+Y+N*X2
    0x5645d3999130 ---------A   04810  LET Q1=INT(X/8)
    0x5645d3999550 ---------A   04820  LET Q2=INT(Y/8)
    0x5645d3999a90 ---------A   04830  LET S1=INT(X-Q1*8)
    0x5645d3999fc0 ---------A   04840  LET S2=INT(Y-Q2*8)
    0x5645d399a2a0 ---------A   04850  LET X5=0
    0x5645d399a4d0 ---------A   04860  IF S1<>0 GOTO 4900
    0x5645d399a830 ---------A   04870  LET Q1=Q1-1
    0x5645d399aa40 ---------A   04880  LET S1=8
    0x5645d399ac60 ---------A   04890  LET X5=0
    0x5645d399ae90 ---------A T 04900  IF S2<>0 GOTO 4940
    0x5645d399b1f0 ---------A   04910  LET Q2=Q2-1
    0x5645d399b400 ---------A   04920  LET S2=8
    0x5645d399b620 ---------A   04930  LET X5=0
    0x5645d399b850 ---------A T 04940  IF Q1>=1 GOTO 4980
    0x5645d399ba90 ---------A   04950  LET X5=1
    0x5645d399bca0 ---------A   04960  LET Q1=1
    0x5645d399bec0 ---------A   04970  LET S1=1
    0x5645d399c0f0 ---------A T 04980  IF Q1<=8 GOTO 5020
    0x5645d399c330 ---------A   04990  LET X5=1
    0x5645d399c540 ---------A   05000  LET Q1=8
    0x5645d399c760 ---------A   05010  LET S1=8
    0x5645d399c990 ---------A T 05020  IF Q2>=1 GOTO 5060
    0x5645d399cbd0 ---------A   05030  LET X5=1
    0x5645d399cde0 ---------A   05040  LET Q2=1
    0x5645d399d000 ---------A   05050  LET S2=1
    0x5645d399d230 ---------A T 05060  IF Q2<=8 GOTO 5100
    0x5645d399d470 ---------A   05070  LET X5=1
    0x5645d399d680 ---------A   05080  LET Q2=8
    0x5645d399d890 ---------A   05090  LET S2=8
    0x5645d399dac0 ---------A T 05100  IF X5=0 GOTO 5170
    0x5645d399dcc0 ---------A   05110  PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    0x5645d399de80 ---------A   05120  PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    0x5645d399e030 ---------A   05130  PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    0x5645d399e1e0 ---------A   05140  PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x5645d399eb50 ---------A   05150  PRINT "   AT SECTOR "S1","S2" OF QUADRANT "Q1","Q2".'"
    0x5645d399eed0 ---------A   05160  IF T>T0+T9 GOTO 7440
    0x5645d399f5a0 ---------A T 05170  IF 8*Q1+Q2=8*Q4+Q5 GOTO 4640
    0x5645d399f900 ---------A   05180  LET T=T+1
    0x5645d399f970 ---------A   05190  GOSUB 9190
    0x5645d399f9e0 ---------A   05200  GOTO 2450
    0x5645d39a0fc0 ---------A   05210  REM
    0x5645d39a10c0 ---------A   05220  REM ===============================================================
    0x5645d39a1150 ---------A   05230  REM
    0x5645d39a1200 ---------A   05240  REM L.R. SENSOR SCAN CODE ***
    0x5645d39a1520 ---------A T 05250  IF D(3)>=0 GOTO 5280
    0x5645d39a16d0 ---------A   05260  PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x5645d39a1780 ---------A   05270  GOTO 3150
    0x5645d39a1bf0 ---------A T 05280  PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"Q1","Q2
    0x5645d39a1ef0 ---------A   05290  LET O1$="..................."
    0x5645d39a2050 ---------A   05300  PRINT O1$
    0x5645d39a2580 ---------A   05310  FOR I=Q1-1 TO Q1+1
    0x5645d39a2600 ---------A   05320  REM    DIM N(3)
    0x5645d39a29b0 ---------A   05330  FOR I1=1 TO 3
    0x5645d39a2cb0 ---------A   05340  LET N(I1)=0
    0x5645d39a2de0 ---------A   05350  NEXT I1
    0x5645d39a3320 ---------A   05360  FOR J=Q2-1 TO Q2+1
    0x5645d39a3560 ---------A   05370  IF I<1 GOTO 5450
    0x5645d39a37c0 ---------A   05380  IF I>8 GOTO 5450
    0x5645d39a3a20 ---------A   05390  IF J<1 GOTO 5430
    0x5645d39a3c80 ---------A   05400  IF J>8 GOTO 5430
    0x5645d39a43c0 ---------A   05410  LET N(J-Q2+2)=G(I,J)
    0x5645d39a4970 ---------A   05420  LET Z(I,J)=G(I,J)
    0x5645d39a4aa0 ---------A T 05430  NEXTJ
    0x5645d39a4b40 ---------A   05440  REM   DIM P1$(20)
    0x5645d39a4e80 ---------A T 05450  LET P1$=": ### : ### : ### :"
    0x5645d39a54f0 ---------A   05460  PRINT USING P1$,N(1),N(2),N(3)
    0x5645d39a5650 ---------A   05470  PRINT O1$
    0x5645d39a5790 ---------A   05480  NEXT I
    0x5645d39a5820 ---------A   05490  GOTO 3150
    0x5645d39a5890 ---------A   05500  REM
    0x5645d39a5990 ---------A   05510  REM ===============================================================
    0x5645d39a5a20 ---------A   05520  REM
    0x5645d39a5ae0 ---------A   05530  REM *** PHASER CONTROL CODE BEGINS HERE
    0x5645d39a5d30 ---------A T 05540  IF K3>0 GOTO 5580
    0x5645d39a5f20 ---------A   05550  PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    0x5645d39a6090 ---------A   05560  PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    0x5645d39a6120 ---------A   05570  GOTO 3150
    0x5645d39a6410 ---------A T 05580  IF D(4)>=0 GOTO 5610
    0x5645d39a65a0 ---------A   05590  PRINT "PHASERS INOPERATIVE"
    0x5645d39a6630 ---------A   05600  GOTO 3150
    0x5645d39a6920 ---------A T 05610  IF D(8)>=0 GOTO 5630
    0x5645d39a6af0 ---------A   05620  PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    0x5645d39a6c70 ---------A T 05630  PRINT "PHASERS LOCKED ON TARGET;  "
    0x5645d39a6ee0 ---------A T 05640  PRINT "ENERGY AVAILABLE ="E
    0x5645d39a7070 ---------A   05650  PRINT "NUMBER OF UNITS TO FIRE:";
    0x5645d39a71d0 ---------A   05660  INPUT X
    0x5645d39a7410 ---------A   05670  IF X<=0 GOTO 3150
    0x5645d39a77a0 ---------A   05680  IF E-X<0 GOTO 5640
    0x5645d39a7b20 ---------A   05690  LET E=E-X
    0x5645d39a7ba0 ---------A   05700  GOSUB 9320
    0x5645d39a7e90 ---------A   05710  IF D(7)>=0 GOTO 5730
    0x5645d39a82d0 ---------A   05720  LET X=X*RND(1)
    0x5645d39a87c0 ---------A T 05730  LET H1=INT(X/K3)
    0x5645d39a8aa0 ---------A   05740  FOR I=1 TO 3
    0x5645d39a8e80 ---------A   05750  IF K(I,3)<=0 GOTO 5950
    0x5645d39a97f0 ---------A   05760  LET H=INT((H1/FND(0))*(RND(1)*2))
    0x5645d39a9ce0 ---------A   05770  IF H>.15*K(I,3) GOTO 5810
    0x5645d39a9eb0 ---------A   05780  PRINT "SENSORS SHOW NO DAMAGE"
    0x5645d39aa650 ---------A   05790  PRINT "    TO ENEMY AT "K(I,1)","K(I,2)
    0x5645d39aa6e0 ---------A   05800  GOTO 5950
    0x5645d39aada0 ---------A T 05810  LET K(I,3)=K(I,3)-H
    0x5645d39ab650 ---------A   05820  PRINT H" UNIT HIT ON KLINGON AT SECTOR "K(I,1)","K(I,2)
    0x5645d39aba30 ---------A   05830  IF K(I,3)<=0 GOTO 5860
    0x5645d39abf80 ---------A   05840  PRINT "   (SENSORS SHOW"K(I,3)" UNITS REMAINING)"
    0x5645d39ac020 ---------A   05850  GOTO 5950
    0x5645d39ac180 ---------A T 05860  PRINT " *** KLINGON DESTROYED ***"
    0x5645d39ac4c0 ---------A   05870  LET K3=K3-1
    0x5645d39ac7f0 ---------A   05880  LET K9=K9-1
    0x5645d39aca20 ---------A   05890  A$="   "
    0x5645d39acdf0 ---------A   05900  LET Z1=K(I,1)
    0x5645d39ad1c0 ---------A   05910  LET Z2=K(I,2)
    0x5645d39ad240 ---------A   05920  GOSUB 10610
    0x5645d39ada80 ---------A   05930  LET G(Q1,Q2)=K3*100+B3*10+S3
    0x5645d39adcb0 ---------A   05940  IF K9<=0 GOTO 7590
    0x5645d39ade10 ---------A T 05950  NEXT I
    0x5645d39adea0 ---------A   05960  GOTO 3150
    0x5645d39adf10 ---------A   05970  REM
    0x5645d39ae010 ---------A   05980  REM ===============================================================
    0x5645d39ae0a0 ---------A   05990  REM
    0x5645d39ae160 ---------A   06000  REM PHOTON TORPEDO CODE BEGINS ***
    0x5645d3985770 ---------A T 06010  IF D(5)>=0 GOTO 6040
    0x5645d3985920 ---------A   06020  PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    0x5645d39859a0 ---------A   06030  GOTO 3150
    0x5645d3985bd0 ---------A T 06040  IF P>0 GOTO 6070
    0x5645d3985d80 ---------A   06050  PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x5645d3985e10 ---------A   06060  GOTO 3150
    0x5645d3985f80 ---------A T 06070  PRINT "TORPEDO COURSE (1-9)";
    0x5645d39860f0 ---------A   06080  INPUT C1
    0x5645d3986330 ---------A   06090  IF C1>=1 GOTO 6120
    0x5645d39b0210 ---------A T 06100  PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x5645d39b0290 ---------A   06110  GOTO 3150
    0x5645d39b04c0 ---------A T 06120  IF C1>9 GOTO 6100
    0x5645d39b0720 ---------A   06130  IF C1<9 GOTO 6160
    0x5645d39b0990 ---------A   06140  IF C1>=9 GOTO 6070
    0x5645d39b0be0 ---------A   06150  LET C1=1
    0x5645d39b1160 ---------A T 06160  LET X1=-SIN((C1-1)*P1)
    0x5645d39b16e0 ---------A   06170  LET X2= COS((C1-1)*P1)
    0x5645d39b1b10 ---------A   06180  IF ABS(X1)<ABS(X2) THEN 6230
    0x5645d39b1ff0 ---------A   06190  M9=ABS(1/X1)
    0x5645d39b2300 ---------A   06200  X1=SGN(X1)
    0x5645d39b2650 ---------A   06210  X2=X2*M9
    0x5645d39b26c0 ---------A   06220  GOTO 6260
    0x5645d39b2ad0 ---------A T 06230  M9=ABS(1/X2)
    0x5645d39b2de0 ---------A   06240  X2=SGN(X2)
    0x5645d39b3130 ---------A   06250  X1=X1*M9
    0x5645d39b3460 ---------A T 06260  LET E=E-2
    0x5645d39b3690 ---------A   06270  LET X=S1
    0x5645d39b38c0 ---------A   06280  LET Y=S2
    0x5645d39b3c00 ---------A   06290  LET P=P-1
    0x5645d39b3d50 ---------A   06300  PRINT "TORPEDO TRACK:"
    0x5645d39b40b0 ---------A T 06310  LET X=X+X1
    0x5645d39b4400 ---------A   06320  LET Y=Y+X2
    0x5645d39b48d0 ---------A   06330  LET X9=INT(X+.5)
    0x5645d39b4da0 ---------A   06340  LET Y9=INT(Y+.5)
    0x5645d39b4fd0 ---------A   06350  IF X9<1 GOTO 6880
    0x5645d39b5240 ---------A   06360  IF X9>=9 GOTO 6880
    0x5645d39b54a0 ---------A   06370  IF Y9<1 GOTO 6880
    0x5645d39b5710 ---------A   06380  IF Y9>=9 GOTO 6880
    0x5645d39b5ba0 ---------A   06390  PRINT "               "X9","Y9
    0x5645d39b5de0 ---------A   06400  LET A$="   "
    0x5645d39b6010 ---------A   06410  LET Z1=X9
    0x5645d39b6240 ---------A   06420  LET Z2=Y9
    0x5645d39b62c0 ---------A   06430  GOSUB 10920
    0x5645d39b65b0 ---------A   06440  IF Z3<>0 GOTO 6310
    0x5645d39b6810 ---------A   06450  LET A$="+++"
    0x5645d39b6a40 ---------A   06460  LET Z1=X9
    0x5645d39b6c70 ---------A   06470  LET Z2=Y9
    0x5645d39b6ce0 ---------A   06480  GOSUB 10920
    0x5645d39b6f10 ---------A   06490  IF Z3=0 GOTO 6600
    0x5645d39b70b0 ---------A   06500  PRINT "*** KLINGON DESTROYED ***"
    0x5645d39b73f0 ---------A   06510  LET K3=K3-1
    0x5645d39b7730 ---------A   06520  LET K9=K9-1
    0x5645d39b7960 ---------A   06530  IF K9<=0 GOTO 7590
    0x5645d39b7c70 ---------A   06540  FOR I=1 TO 3
    0x5645d39b8070 ---------A   06550  IF X9<>K(I,1) GOTO 6570
    0x5645d39b84a0 ---------A   06560  IF Y9=K(I,2) GOTO 6580
    0x5645d39b8600 ---------A T 06570  NEXT I
    0x5645d39b89d0 ---------A T 06580  LET K(I,3)=0
    0x5645d39b8a40 ---------A   06590  GOTO 6820
    0x5645d39b8c70 ---------A T 06600  LET A$=" * "
    0x5645d39b8ea0 ---------A   06610  LET Z1=X9
    0x5645d39b90d0 ---------A   06620  LET Z2=Y9
    0x5645d39b9140 ---------A   06630  GOSUB 10920
    0x5645d39b9370 ---------A   06640  IF Z3=0 GOTO 6670
    0x5645d39b9930 ---------A   06650  PRINT "STAR AT"X9;","Y9;" ABSORBED TORPEDO ENERGY."
    0x5645d39b99b0 ---------A   06660  GOTO 6890
    0x5645d39b9be0 ---------A T 06670  LET A$=">!<"
    0x5645d39b9e10 ---------A   06680  LET Z1=X9
    0x5645d39ba040 ---------A   06690  LET Z2=Y9
    0x5645d39ba0b0 ---------A   06700  GOSUB 10920
    0x5645d39ba2e0 ---------A   06710  IF Z3=0 GOTO 6070
    0x5645d39ba490 ---------A   06720  PRINT "*** STARBASE DESTROYED ***"
    0x5645d39ba7d0 ---------A   06730  LET B3=B3-1
    0x5645d39bab00 ---------A   06740  LET B9=B9-1
    0x5645d39bad30 ---------A   06750  IF B9>0 GOTO 6790
    0x5645d39baf60 ---------A   06760  PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    0x5645d39bb0f0 ---------A   06770  PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    0x5645d39bb1a0 ---------A   06780  GOTO 7490
    0x5645d39bb320 ---------A T 06790  PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x5645d39bb480 ---------A   06800  PRINT "   COURT MARTIAL!"
    0x5645d39bb6a0 ---------A   06810  LET D0=0
    0x5645d39bb8d0 ---------A T 06820  LET A$="   "
    0x5645d39bbb00 ---------A   06830  LET Z1=X9
    0x5645d39bbd30 ---------A   06840  LET Z2=Y9
    0x5645d39bbdb0 ---------A   06850  GOSUB 10610
    0x5645d39bc5e0 ---------A   06860  LET G(Q1,Q2)=K3*100+B3*10+S3
    0x5645d39bc660 ---------A   06870  GOTO 6890
    0x5645d39bc7b0 ---------A T 06880  PRINT "TORPEDO MISSED"
    0x5645d39bc830 ---------A T 06890  GOSUB 9320
    0x5645d39bc8a0 ---------A   06900  GOTO 3150
    0x5645d39bc910 ---------A   06910  REM
    0x5645d39bca10 ---------A   06920  REM ===============================================================
    0x5645d39bcaa0 ---------A   06930  REM
    0x5645d39bcb60 ---------A   06940  REM *** SHIELD CONTROL STARTS HERE
    0x5645d39bce80 ---------A T 06950  IF D(7)>=0 GOTO 6980
    0x5645d39bd020 ---------A   06960  PRINT "SHIELD CONTROL INOPERABLE"
    0x5645d39bd0d0 ---------A   06970  GOTO 3150
    0x5645d39bd550 ---------A T 06980  PRINT "ENERGY AVAILABLE ="E+5". NUMBER OF UNITS TO SHIELDS:";
    0x5645d39bd6b0 ---------A   06990  INPUT X
    0x5645d39bd8f0 ---------A   07000  IF X>=0 GOTO 7040
    0x5645d39bdb70 ---------A   07010  IF S<>X GOTO 7040
    0x5645d39bdd00 ---------A   07020  PRINT "(SHIELDS UNCHANGED)"
    0x5645d39bdd90 ---------A   07030  GOTO 3150
    0x5645d39be200 ---------A T 07040  IF E+S-X<0 GOTO 6980
    0x5645d39be6a0 ---------A   07050  LET E=E+S-X
    0x5645d39be8f0 ---------A   07060  LET S=X
    0x5645d39bea70 ---------A   07070  PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x5645d39bedd0 ---------A   07080  PRINT "  'SHIELDS NOW AT "S" PER YOUR COMMAND'"
    0x5645d39bee50 ---------A   07090  GOTO 3150
    0x5645d39beec0 ---------A   07100  REM
    0x5645d39befc0 ---------A   07110  REM ===============================================================
    0x5645d39bf050 ---------A   07120  REM
    0x5645d39bf110 ---------A   07130  REM *** DAMAGE CONTROL STARTS HERE
    0x5645d39bf430 ---------A T 07140  IF D(6)>=0 GOTO 7360
    0x5645d39bf5e0 ---------A   07150  PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    0x5645d39bf820 ---------A T 07160  IF D0=0 GOTO 3150
    0x5645d39bfb20 ---------A   07170  LET D3=0
    0x5645d39bfe00 ---------A   07180  FOR I=1 TO 8
    0x5645d39c0120 ---------A   07190  IF D(I)>=0 GOTO 7210
    0x5645d39c0480 ---------A   07200  LET D3=D3+.1
    0x5645d39c05b0 ---------A T 07210  NEXT I
    0x5645d39c0800 ---------A   07220  IF D3=0 GOTO 3150
    0x5645d39c0b80 ---------A   07230  LET D3=D3+D4
    0x5645d39c0db0 ---------A   07240  IF D3<1 GOTO 7260
    0x5645d39c1020 ---------A   07250  LET D3=.9
    0x5645d39c11c0 ---------A T 07260  PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    0x5645d39c1360 ---------A   07270  PRINT "ESTIMATED TIME TO REPAIR: ";
    0x5645d39c15f0 ---------A   07280  PRINT USING ".# STARDATES",D3
    0x5645d39c1790 ---------A   07290  PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    0x5645d39c1900 ---------A   07300  INPUT A$
    0x5645d39c1b60 ---------A   07310  IF A$<>"YES" GOTO 3150
    0x5645d39c1e60 ---------A   07320  FOR I=1 TO 8
    0x5645d39c2160 ---------A   07330  LET D(I)=0
    0x5645d39c2290 ---------A   07340  NEXT I
    0x5645d39c2700 ---------A   07350  LET T=T+D3+.1
    0x5645d39c2870 ---------A T 07360  PRINT " "
    0x5645d39c29e0 ---------A   07370  PRINT "DEVICE        STATE OF REPAIR"
    0x5645d39c2cc0 ---------A   07380  FOR R1=1 TO 8
    0x5645d39c2d50 ---------A   07390  GOSUB 10850
    0x5645d39c3080 ---------A   07400  PRINT USING "  -##.##",D(R1)
    0x5645d39c31c0 ---------A   07410  NEXT R1
    0x5645d39c3330 ---------A   07420  PRINT " "
    0x5645d39c33b0 ---------A   07430  GOTO 7160
    0x5645d39c8370 ---------A T 07440  PRINT "ITS IS STARDATE "T
    0x5645d39c83f0 ---------A   07450  GOTO 7490
    0x5645d39c8580 ---------A T 07460  PRINT " "
    0x5645d39c8720 ---------A   07470  PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    0x5645d39c8ab0 ---------A   07480  PRINT "IT IS STARDATE "T"."
    0x5645d39c8e30 ---------A T 07490  PRINT "THERE WERE "K9" KLINGON BATTLE CRUISERS LEFT AT "
    0x5645d39c8fa0 ---------A   07500  PRINT "THE END OF YOUR MISSION."
    0x5645d39c9100 ---------A T 07510  PRINT " "
    0x5645d39c9290 ---------A   07520  PRINT " "
    0x5645d39c9440 ---------A   07530  PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x5645d39c95e0 ---------A   07540  PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x5645d39c9750 ---------A   07550  PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    0x5645d39c98c0 ---------A   07560  INPUT A$
    0x5645d39c9b20 ---------A   07570  IF A$="AYE" GOTO 1270
    0x5645d39c9c00 ---------A   07580  GOTO 9120
    0x5645d39c9db0 ---------A T 07590  PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    0x5645d39c9f30 ---------A   07600  PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    0x5645d39ca0c0 ---------A   07610  PRINT " "
    0x5645d39ca830 ---------A   07620  PRINT "YOUR EFFICIENCY RATING IS "((K/(T-T0))*1000)"."
    0x5645d39ca8b0 ---------A   07630  GOTO 7510
    0x5645d39d8750 ---------A   07640  REM
    0x5645d39d8850 ---------A   07650  REM ===============================================================
    0x5645d39d88e0 ---------A   07660  REM
    0x5645d39d89b0 ---------A   07670  REM *** LIBARY COMPUTER CODE BEGINS HERE
    0x5645d39d8cd0 ---------A T 07680  IF D(8)>=0 GOTO 7710
    0x5645d39d8e60 ---------A   07690  PRINT "COMPUTER DISABLED"
    0x5645d39d8f00 ---------A   07700  GOTO 3150
    0x5645d39d9080 ---------A T 07710  PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    0x5645d39d92a0 ---------A   07720  INPUT A
    0x5645d39d94e0 ---------A   07730  IF A<0 GOTO 3150
    0x5645d39d9580 ---------A   07740  PRINT
    0x5645d39d9860 ---------A   07750  LET H8=1
    0x5645d39d9a90 ---------A   07760  IF A=0 GOTO 8000
    0x5645d39d9cf0 ---------A   07770  IF A>5 GOTO 7880
    0x5645d39d9d90 ---------A   07780  REM
    0x5645d39d9e90 ---------A   07790  REM ===============================================================
    0x5645d39d9f20 ---------A   07800  REM
    0x5645d39da470 ---------A   07810  ON A GOTO 8420, 8620, 9050, 8700, 7830
    0x5645d39da4f0 ---------A   07820  REM  GOTO 9150
    0x5645d39da5c0 ---------A T 07830  REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
    0x5645d39da7f0 ---------A   07840  LET H8=0
    0x5645d39daa20 ---------A   07850  LET G5=1
    0x5645d39dab80 ---------A   07860  PRINT "                      THE GALAXY"
    0x5645d39dac20 ---------A   07870  GOTO 8010
    0x5645d39dadb0 ---------A T 07880  PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    0x5645d39daf30 ---------A   07890  PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x5645d39db0b0 ---------A   07900  PRINT "   1 = STATUS REPORT"
    0x5645d39db240 ---------A   07910  PRINT "   2 = PHOTON TORPEDO DATA"
    0x5645d39db3d0 ---------A   07920  PRINT "   3 = STARBASE NAVIGATION DATA"
    0x5645d39db560 ---------A   07930  PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    0x5645d39db6d0 ---------A   07940  PRINT "   5 = GALAXY 'REGION NAME' MAP"
    0x5645d39db750 ---------A   07950  GOTO 7710
    0x5645d39db7c0 ---------A   07960  REM
    0x5645d39db8c0 ---------A   07970  REM ===============================================================
    0x5645d39db950 ---------A   07980  REM
    0x5645d39dba20 ---------A   07990  REM *** CUM GALACTIC RECORD CODE BEGINS ***
    0x5645d39dc010 ---------A T 08000  PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "Q1","Q2":"
    0x5645d39dc1c0 ---------A T 08010  PRINT "      1     2     3     4     5     6     7     8"
    0x5645d39dc4e0 ---------A   08020  LET O3$="    ----- ----- ----- ----- ----- ----- ----- -----"
    0x5645d39dc640 ---------A   08030  PRINT O3$
    0x5645d39dc6d0 ---------A   08040  REM   DIM N1$(2),N2$(8),N$(5)
    0x5645d39dc9c0 ---------A   08050  FOR I=1 TO 8
    0x5645d39dccd0 ---------A   08060  LET N1$="##"
    0x5645d39dcf30 ---------A   08070  PRINT USING N1$,I;
    0x5645d39dd200 ---------A   08080  PRINT TAB(3);"|";
    0x5645d39dd440 ---------A   08090  IF H8=0 GOTO 8210
    0x5645d39dd750 ---------A   08100  FOR J=1 TO 8
    0x5645d39dda50 ---------A   08110  LET N2$=" ### |"
    0x5645d39ddd50 ---------A   08120  LET N$=""
    0x5645d39ddfa0 ---------A   08130  IF I<>Q1 GOTO 8170
    0x5645d39de230 ---------A   08140  IF J<>Q2 GOTO 8170
    0x5645d39de560 ---------A   08150  LET N$=CHR$(7)
    0x5645d39de6e0 ---------A   08160  PRINT N$;
    0x5645d39deb00 ---------A T 08170  PRINT USING N2$,Z(I,J);
    0x5645d39dec80 ---------A   08180  PRINT N$;
    0x5645d39dedc0 ---------A   08190  NEXT J
    0x5645d39dee50 ---------A   08200  GOTO 8340
    0x5645d39df080 ---------A T 08210  LET Z4=I
    0x5645d39df290 ---------A   08220  LET Z5=1
    0x5645d39df310 ---------A   08230  GOSUB 11050
    0x5645d39df9d0 ---------A   08240  LET J0=INT(15-.5*LEN(G2$))
    0x5645d39dfba0 ---------A   08250  PRINT  TAB(J0);
    0x5645d39dfd30 ---------A   08260  PRINT G2$;
    0x5645d39dfff0 ---------A   08270  PRINT TAB(27);"|";
    0x5645d39e0210 ---------A   08280  LET Z5=5
    0x5645d39e0290 ---------A   08290  GOSUB 11050
    0x5645d39e0890 ---------A   08300  LET J0=INT(39-.5*LEN(G2$))
    0x5645d39e0a60 ---------A   08310  PRINT  TAB(J0);
    0x5645d39e0bf0 ---------A   08320  PRINT G2$;
    0x5645d39e0eb0 ---------A   08330  PRINT TAB(51);"|";
    0x5645d39e0f30 ---------A T 08340  PRINT
    0x5645d39e1090 ---------A   08350  PRINT O3$
    0x5645d39e11d0 ---------A   08360  NEXT I
    0x5645d39e1260 ---------A   08370  GOTO 3150
    0x5645d39e12d0 ---------A   08380  REM
    0x5645d39e13d0 ---------A   08390  REM ===============================================================
    0x5645d39e1460 ---------A   08400  REM
    0x5645d39e1530 ---------A   08410  REM *** STATUS REPORT CODE BEGINS HERE ***
    0x5645d39e16b0 ---------A T 08420  PRINT "   STATUS REPORT:"
    0x5645d39e18f0 ---------A   08430  LET X$=""
    0x5645d39e1b20 ---------A   08440  IF K9=1 GOTO 8460
    0x5645d39e1d90 ---------A   08450  LET X$="S"
    0x5645d39e21e0 ---------A T 08460  PRINT K9" KLINGON"X$" LEFT"
    0x5645d39e2790 ---------A   08470  LET V5=(T0+T9)-T
    0x5645d39e2a00 ---------A   08480  PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES",V5
    0x5645d39e2c40 ---------A   08490  LET X$=""
    0x5645d39e2e70 ---------A   08500  IF B9=1 GOTO 8560
    0x5645d39e30e0 ---------A   08510  LET X$="S"
    0x5645d39e3310 ---------A   08520  IF B9<>0 GOTO 8560
    0x5645d39e3510 ---------A   08530  PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    0x5645d39e3690 ---------A   08540  PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    0x5645d39e3750 ---------A   08550  GOTO 7140
    0x5645d39e3cb0 ---------A T 08560  PRINT "THE FEDERATION IS MAINTAINING"B9" STARBASE"X$" IN THE GALAXY"
    0x5645d39e3d30 ---------A   08570  GOTO 7140
    0x5645d39e3da0 ---------A   08580  REM
    0x5645d39e3ea0 ---------A   08590  REM ===============================================================
    0x5645d39e3f30 ---------A   08600  REM
    0x5645d39e4010 ---------A   08610  REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***
    0x5645d39e4240 ---------A T 08620  LET H8=0
    0x5645d39e4520 ---------A   08630  FOR I=1 TO 3
    0x5645d39e4900 ---------A   08640  IF K(I,3)<=0 GOTO 9030
    0x5645d39e4d00 ---------A   08650  LET W1=K(I,1)
    0x5645d39e50d0 ---------A   08660  LET X=K(I,2)
    0x5645d39e5300 ---------A T 08670  LET C1=S1
    0x5645d39e5530 ---------A   08680  LET A=S2
    0x5645d39e55c0 ---------A   08690  GOTO8770
    0x5645d39e5750 ---------A T 08700  PRINT "DIRECTION/DISTANCE CALCULATOR:"
    0x5645d39e60c0 ---------A   08710  PRINT "YOU ARE AT QUADRANT ("Q1","Q2") SECTOR ("S1","S2")"
    0x5645d39e6240 ---------A   08720  PRINT "PLEASE ENTER --"
    0x5645d39e63d0 ---------A   08730  PRINT "  INITIAL COORDINATES (X,Y)";
    0x5645d39e6630 ---------A   08740  INPUT C1,A
    0x5645d39e67c0 ---------A   08750  PRINT "  FINAL COORDINATES (X,Y)";
    0x5645d39e6a00 ---------A   08760  INPUT W1,X
    0x5645d39e6d60 ---------A T 08770  LET X=X-A
    0x5645d39e70c0 ---------A   08780  LET A=C1-W1
    0x5645d39e72f0 ---------A   08790  IF X<0 GOTO 8900
    0x5645d39e7560 ---------A   08800  IF A<0 GOTO 8960
    0x5645d39e77d0 ---------A   08810  IF X>0 GOTO 8830
    0x5645d39e7a40 ---------A   08820  IF A=0 GOTO 8920
    0x5645d39e7c90 ---------A T 08830  LET C1=1
    0x5645d39e80a0 ---------A T 08840  IF ABS(A)<=ABS(X) GOTO 8880
    0x5645d39e8bf0 ---------A   08850  LET V5=C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
    0x5645d39e8e40 ---------A   08860  PRINT "DIRECTION ="V5
    0x5645d39e8ee0 ---------A   08870  GOTO 9010
    0x5645d39e9570 ---------A T 08880  PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
    0x5645d39e9600 ---------A   08890  GOTO 9010
    0x5645d39e9830 ---------A T 08900  IF A>0 GOTO 8940
    0x5645d39e9aa0 ---------A   08910  IF X=0 GOTO 8960
    0x5645d39e9ce0 ---------A T 08920  LET C1=5
    0x5645d39e9d50 ---------A   08930  GOTO 8840
    0x5645d39e9f60 ---------A T 08940  LET C1=3
    0x5645d39e9fd0 ---------A   08950  GOTO 8970
    0x5645d39ea1f0 ---------A T 08960  LET C1=7
    0x5645d39ea600 ---------A T 08970  IF ABS(A)>=ABS(X) GOTO 9000
    0x5645d39eb170 ---------A   08980  PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
    0x5645d39eb210 ---------A   08990  GOTO 9010
    0x5645d39eb8c0 ---------A T 09000  PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
    0x5645d39ebf30 ---------A T 09010  PRINT "DISTANCE ="SQR(X^2+A^2)
    0x5645d39ec170 ---------A   09020  IF H8=1 GOTO 3150
    0x5645d39ec2d0 ---------A T 09030  NEXT I
    0x5645d39ec370 ---------A   09040  GOTO 3150
    0x5645d39ec5a0 ---------A T 09050  IF B3<>0 GOTO 9080
    0x5645d39ec790 ---------A   09060  PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    0x5645d39ec830 ---------A   09070  GOTO 3150
    0x5645d39ec990 ---------A T 09080  PRINT "FROM ENTERPRISE TO STARBASE:"
    0x5645d39ecbd0 ---------A   09090  LET W1=B4
    0x5645d39ece00 ---------A   09100  LET X=B5
    0x5645d39ece90 ---------A   09110  GOTO 8670
    0x5645d39f6b30 ---------A T 09120  STOP
    0x5645d39af030 ---------A   09130  REM *** EXIT HERE ***
    0x5645d3a03bb0 ---------A   09140  END
    0x5645d399fa50 ---------B   09150  REM
    0x5645d399fb50 ---------B   09160  REM ===============================================================
    0x5645d399fbe0 ---------B   09170  REM
    0x5645d399fc90 ---------B   09180  REM MANEUVER ENERGY S/R ***
    0x5645d39a0100 ---------B G 09190  LET E=E-N-10
    0x5645d39a0330 ---------B   09200  IF E>=0 GOTO 9260
    0x5645d39a0510 ---------B   09210  PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    0x5645d39a0870 ---------B   09220  LET S=S+E
    0x5645d39a0a80 ---------B   09230  LET E=0
    0x5645d39a0cb0 ---------B   09240  IF S>0 GOTO 9260
    0x5645d39a0ef0 ---------B   09250  LET S=0
    0x5645d3a1ae90 ---------B T 09260  GOTO 09270
    0x5645d3a47190 ---------B T 09270  RETURN
    0x5645d39c3420 ---------C   09280  REM
    0x5645d39c3520 ---------C   09290  REM ===============================================================
    0x5645d39c35b0 ---------C   09300  REM
    0x5645d39c3670 ---------C   09310  REM "KLINGONS SHOOTING" CODE BEGINS ***
    0x5645d39c38d0 ---------C G 09320  IF K3<=0 GOTO 9530
    0x5645d39c3b30 ---------C   09330  IF D0=0 GOTO 9360
    0x5645d39c3cf0 ---------C   09340  PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x5645d39c3d70 ---------C   09350  GOTO 9530
    0x5645d39c4050 ---------C T 09360  FOR I=1 TO 3
    0x5645d39c4430 ---------C   09370  IF K(I,3)<=0 GOTO 9520
    0x5645d39c4e70 ---------C   09380  LET H=INT((K(I,3)/FND(0))*(2+RND(1)))
    0x5645d39c51f0 ---------C   09390  LET S=S-H
    0x5645d39c5aa0 ---------C   09400  PRINT H" UNIT HIT ON ENTERPRISE FROM SECTOR"K(I,1)","K(I,2)
    0x5645d39c5ce0 ---------C   09410  IF S<0 GOTO 9530
    0x5645d39c60a0 ---------C   09420  PRINT "      (SHIELDS DOWN TO"S" UNITS.)"
    0x5645d39c62e0 ---------C   09430  IF H<20 GOTO 9520
    0x5645d39c6610 ---------C   09440  IF RND(1)>.6 GOTO 9520
    0x5645d39c69a0 ---------C   09450  IF H/S<=.02 GOTO 9520
    0x5645d39c70e0 ---------C   09460  LET D2=H/S+.5*RND(1)
    0x5645d39c76c0 ---------C   09470  LET R1=INT(RND(1)*8+1)
    0x5645d39c7bf0 ---------C   09480  LET D(R1)=D(R1)-D2
    0x5645d39c7d70 ---------C   09490  PRINT "DAMAGE CONTROL REPORTS '";
    0x5645d39c7e00 ---------C   09500  GOSUB 10850
    0x5645d39c7f50 ---------C   09510  PRINT " DAMAGED BY THE HIT!'"
    0x5645d39c8090 ---------C T 09520  NEXT I
    0x5645d3a1ae40 ---------C T 09530  GOTO 09540
    0x5645d3a471f0 ---------C T 09540  RETURN
    0x5645d39ca920 ---------D   09550  REM
    0x5645d39caa20 ---------D   09560  REM ===============================================================
    0x5645d39caab0 ---------D   09570  REM
    0x5645d39cab80 ---------D   09580  REM S.R. SENSOR SCAN & STARTUP SUBR. ***
    0x5645d39cb0d0 ---------D G 09590  FOR I=S1-1 TO S1+1
    0x5645d39cb600 ---------D   09600  FOR J=S2-1 TO S2+1
    0x5645d39cba20 ---------D   09610  IF INT(I+.5)<1 GOTO 9700
    0x5645d39cbe70 ---------D   09620  IF INT(I+.5)>8 GOTO 9700
    0x5645d39cc2c0 ---------D   09630  IF INT(J+.5)<1 GOTO 9700
    0x5645d39cc710 ---------D   09640  IF INT(J+.5)>8 GOTO 9700
    0x5645d39cc970 ---------D   09650  LET A$=">!<"
    0x5645d39ccba0 ---------D   09660  LET Z1=I
    0x5645d39ccdd0 ---------D   09670  LET Z2=J
    0x5645d39cce50 ---------D   09680  GOSUB 10920
    0x5645d39cd080 ---------D   09690  IF Z3=1 GOTO 9740
    0x5645d39cd1e0 ---------D T 09700  NEXT J
    0x5645d39cd330 ---------D   09710  NEXT I
    0x5645d39cd560 ---------D   09720  LET D0=0
    0x5645d39cd5d0 ---------D   09730  GOTO 9810
    0x5645d39cd7e0 ---------D T 09740  LET D0=1
    0x5645d39cdad0 ---------D   09750  LET C$="DOCKED"
    0x5645d39cdce0 ---------D   09760  LET E=3000
    0x5645d39cdf10 ---------D   09770  LET P=10
    0x5645d39ce070 ---------D   09780  PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x5645d39ce290 ---------D   09790  LET S=0
    0x5645d39ce300 ---------D   09800  GOTO 9880
    0x5645d39ce530 ---------D T 09810  IF K3>0 GOTO 9850
    0x5645d39ce8c0 ---------D   09820  IF E<E0*.1 GOTO 9870
    0x5645d39ceb20 ---------D   09830  LET C$=" GREEN"
    0x5645d39ceba0 ---------D   09840  GOTO 9880
    0x5645d39cf2b0 ---------D T 09850  C$=" "+CHR$(7)+"*RED*"+CHR$(7)
    0x5645d39cf320 ---------D   09860  GOTO 9880
    0x5645d39cf560 ---------D T 09870  LET C$="YELLOW"
    0x5645d39cf850 ---------D T 09880  IF D(2)>=0 GOTO 9930
    0x5645d39cf9f0 ---------D   09890  PRINT " "
    0x5645d39cfb60 ---------D   09900  PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x5645d39cfcc0 ---------D   09910  PRINT " "
    0x5645d39cfd60 ---------D   09920  GOTO 10420
    0x5645d39cffa0 ---------D T 09930  LET O1$="--------------------------------"
    0x5645d39d00f0 ---------D   09940  PRINT O1$
    0x5645d39d03f0 ---------D   09950  LET N5$="####"
    0x5645d39d0570 ---------D   09960  PRINT " ";
    0x5645d39d0920 ---------D   09970  FOR I=1 TO 22 STEP 3
    0x5645d39d0ee0 ---------D   09980  PRINT MID$(Q$(1),I,3)" ";
    0x5645d39d1020 ---------D   09990  NEXT I
    0x5645d39d1190 ---------D   10000  PRINT " "
    0x5645d39d1320 ---------D   10010  PRINT " ";
    0x5645d39d16d0 ---------D   10020  FOR I=1 TO 22 STEP 3
    0x5645d39d1c90 ---------D   10030  PRINT MID$(Q$(2),I,3)" ";
    0x5645d39d1dd0 ---------D   10040  NEXT I
    0x5645d39d1fa0 ---------D   10050  PRINT "        STARDATE         ";
    0x5645d39d2200 ---------D   10060  PRINT USING "####.#",T
    0x5645d39d2390 ---------D   10070  PRINT " ";
    0x5645d39d2740 ---------D   10080  FOR I=1 TO 22 STEP 3
    0x5645d39d2d00 ---------D   10090  PRINT MID$(Q$(3),I,3)" ";
    0x5645d39d2e40 ---------D   10100  NEXT I
    0x5645d39d3000 ---------D   10110  PRINT "        CONDITION        ";
    0x5645d39d3160 ---------D   10120  PRINT C$
    0x5645d39d32f0 ---------D   10130  PRINT " ";
    0x5645d39d36a0 ---------D   10140  FOR I=1 TO 22 STEP 3
    0x5645d39d3c60 ---------D   10150  PRINT MID$(Q$(4),I,3)" ";
    0x5645d39d3da0 ---------D   10160  NEXT I
    0x5645d39d4240 ---------D   10170  PRINT "        QUADRANT         "Q1","Q2
    0x5645d39d43d0 ---------D   10180  PRINT " ";
    0x5645d39d4780 ---------D   10190  FOR I=1 TO 22 STEP 3
    0x5645d39d4d40 ---------D   10200  PRINT MID$(Q$(5),I,3)" ";
    0x5645d39d4e80 ---------D   10210  NEXT I
    0x5645d39d5320 ---------D   10220  PRINT "        SECTOR           "S1","S2
    0x5645d39d54b0 ---------D   10230  PRINT " ";
    0x5645d39d5860 ---------D   10240  FOR I=1 TO 22 STEP 3
    0x5645d39d5e20 ---------D   10250  PRINT MID$(Q$(6),I,3)" ";
    0x5645d39d5f60 ---------D   10260  NEXT I
    0x5645d39d6130 ---------D   10270  PRINT "        TOTAL ENERGY     ";
    0x5645d39d6490 ---------D   10280  PRINT USING N5$,E+S
    0x5645d39d6620 ---------D   10290  PRINT " ";
    0x5645d39d69d0 ---------D   10300  FOR I=1 TO 22 STEP 3
    0x5645d39d6f90 ---------D   10310  PRINT MID$(Q$(7),I,3)" ";
    0x5645d39d70d0 ---------D   10320  NEXT I
    0x5645d39d7290 ---------D   10330  PRINT "        PHOTON TORPEDOES ";
    0x5645d39d74d0 ---------D   10340  PRINT USING N5$,P
    0x5645d39d7660 ---------D   10350  PRINT " ";
    0x5645d39d7a10 ---------D   10360  FOR I=1 TO 22 STEP 3
    0x5645d39d7fd0 ---------D   10370  PRINT MID$(Q$(8),I,3)" ";
    0x5645d39d8110 ---------D   10380  NEXT I
    0x5645d39d82d0 ---------D   10390  PRINT "        SHIELDS          ";
    0x5645d39d8510 ---------D   10400  PRINT USING N5$,S
    0x5645d39d8670 ---------D   10410  PRINT O1$
    0x5645d3a1b070 ---------D T 10420  GOTO 010430
    0x5645d3a47270 ---------D T 10430  RETURN
    0x5645d39ecf10 ---------E   10440  REM *** END OF LIBRARY-COMPUTER CODE
    0x5645d39ecfa0 ---------E   10450  REM
    0x5645d39ed0a0 ---------E   10460  REM ===============================================================
    0x5645d39ed130 ---------E   10470  REM
    0x5645d39ed1f0 ---------E   10480  REM S/R FINDS RANDOM HOLE IN QUADRANT
    0x5645d39ed800 ---------E B 10490  LET R1=INT(RND(1)*8+1)
    0x5645d39eddd0 ---------E   10500  LET R2=INT(RND(1)*8+1)
    0x5645d39ee000 ---------E   10510  LET A$="   "
    0x5645d39ee230 ---------E   10520  LET Z1=R1
    0x5645d39ee460 ---------E   10530  LET Z2=R2
    0x5645d39ee4e0 ---------E   10540  GOSUB 10920
    0x5645d39ee710 ---------E   10550  IF Z3=0 GOTO 10490
    0x5645d3a1b0c0 ---------E   10560  GOTO 010570
    0x5645d3a472f0 ---------E T 10570  RETURN
    0x5645d39ee810 ---------F   10580  REM
    0x5645d39ee910 ---------F   10590  REM ===============================================================
    0x5645d39ee9a0 ---------F   10600  REM
    0x5645d39eea80 ---------F G 10610  REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
    0x5645d39eeeb0 ---------F   10620  Z1 = INT(Z1+.5)
    0x5645d39ef2d0 ---------F   10630  Z2 = INT(Z2+.5)
    0x5645d39ef500 ---------F   10640  IF Z1<1 GOTO 10760
    0x5645d39ef770 ---------F   10650  IF Z1>8 GOTO 10760
    0x5645d39ef9e0 ---------F   10660  IF Z2<1 GOTO 10760
    0x5645d39efc50 ---------F   10670  IF Z2>8 GOTO 10760
    0x5645d39f01c0 ---------F   10680  DIM Q9(24), A9(3)
    0x5645d39f04b0 ---------F   10690  CHANGE Q$(Z1) TO Q9
    0x5645d39f06f0 ---------F   10700  CHANGE A$ TO A9
    0x5645d39f0ac0 ---------F   10710  FOR I8 = 1 TO 3
    0x5645d39f1220 ---------F   10720  Q9(3*(Z2-1) + I8) = A9(I8)
    0x5645d39f1350 ---------F   10730  NEXT I8
    0x5645d39f1670 ---------F   10740  CHANGE Q9 TO Q$(Z1)
    0x5645d39f1710 ---------F   10750  GOTO 10800
    0x5645d39f17b0 ---------F T 10760  PRINT
    0x5645d39f1d30 ---------F   10770  PRINT "ERROR IN COORDINATES (Z1,Z2): (";Z1;",";Z2;")"
    0x5645d39f1ea0 ---------F   10780  PRINT "     1 <=  Z1,Z2  <=8    "
    0x5645d39f1f20 ---------F   10790  PRINT
    0x5645d3a47350 ---------F T 10800  GOTO 010810
    0x5645d3a473c0 ---------F T 10810  RETURN
    0x5645d39f2000 ---------G   10820  REM
    0x5645d39f2100 ---------G   10830  REM ===============================================================
    0x5645d39f2190 ---------G   10840  REM
    0x5645d39f2260 ---------G G 10850  REM *** PRINTS DEVICE NAME FROM ARRAY ***
    0x5645d39f24d0 ---------G   10860  PRINT D$(R1);
    0x5645d3a47420 ---------G   10870  GOTO 010880
    0x5645d3a47490 ---------G T 10880  RETURN
    0x5645d39f25b0 ---------H   10890  REM
    0x5645d39f26b0 ---------H   10900  REM ===============================================================
    0x5645d39f2740 ---------H   10910  REM
    0x5645d39f2810 ---------H G 10920  REM *** STRING COMPARISON IN QUADRANT ARRAY ***
    0x5645d39f2c40 ---------H   10930  LET Z1=INT(Z1+.5)
    0x5645d39f3050 ---------H   10940  LET Z2=INT(Z2+.5)
    0x5645d39f3280 ---------H   10950  LET Z3=0
    0x5645d39f3a70 ---------H   10960  IF MID$(Q$(Z1),(3*Z2-2),3) <> A$ GOTO 10980
    0x5645d39f3cb0 ---------H   10970  Z3 = 1
    0x5645d3a474f0 ---------H T 10980  GOTO 010990
    0x5645d3a47560 ---------H T 10990  RETURN
    0x5645d39f3d80 ---------I   11000  REM
    0x5645d39f3e80 ---------I   11010  REM ===============================================================
    0x5645d39f3f10 ---------I   11020  REM
    0x5645d39f4000 ---------I   11030  REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    0x5645d39f40d0 ---------I   11040  REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)
    0x5645d39f43d0 ---------I G 11050  LET L2=2
    0x5645d39f4600 ---------I   11060  IF Z5>=5 GOTO 11080
    0x5645d39f4850 ---------I   11070  LET L2=1
    0x5645d39f4ea0 ---------I T 11080  LET L3=2*(Z4-1)+L2
    0x5645d39f51c0 ---------I   11090  LET G2$=G1$(L3)
    0x5645d39f53f0 ---------I   11100  IF G5=1 GOTO 11180
    0x5645d39f5660 ---------I   11110  LET L3=Z5
    0x5645d39f5890 ---------I   11120  IF Z5<=4 GOTO 11140
    0x5645d39f5bf0 ---------I   11130  LET L3=Z5-4
    0x5645d39f5ef0 ---------I T 11140  LET G3$="IV"
    0x5645d39f6120 ---------I   11150  IF L3=4 GOTO 11170
    0x5645d39f6610 ---------I   11160  LET G3$=MID$(G4$,1,L3)
    0x5645d39f6a80 ---------I T 11170  G2$=G2$+" "+G3$
    0x5645d3a475c0 ---------I T 11180  GOTO 011190
    0x5645d3a47630 ---------I T 11190  RETURN
    0x5645d39f6bb0 ---------J   11200  REM Gosub target.
    0x5645d39f6cc0 ---------J   11210  REM This segment was originally from file STINST.BAS and was included with 
    0x5645d39f6d80 ---------J   11220  REM a CHAIN command./ASA Jul 27,2009
    0x5645d39f6e20 ---------J G 11230  PRINT
    0x5645d39f6eb0 ---------J   11240  REM INSTRUCTIONS FOR "STREK" GAME
    0x5645d39f6f60 ---------J   11250  REM VERSION "STINST2" 12/8/74
    0x5645d39f7290 ---------J   11260  FOR I=1 TO 9
    0x5645d39f7ab0 ---------J   11270  ON I GOTO 11450, 11570, 11750, 11850, 11930, 11990, 12070, 12120, 12170
    0x5645d39f7b50 ---------J T 11280  PRINT
    0x5645d39f7ce0 ---------J   11290  PRINT "<TO CONTINUE, HIT 'RETURN'>";
    0x5645d39f7e40 ---------J   11300  INPUT A$
    0x5645d39f7ec0 ---------J   11310  PRINT
    0x5645d39f8000 ---------J   11320  NEXT I
    0x5645d39f8210 ---------J   11330  PRINT "1.  WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x5645d39f83e0 ---------J   11340  PRINT "      COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM, OR XXX)."
    0x5645d39ae340 ---------J   11350  PRINT "2.  IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x5645d39ae500 ---------J   11360  PRINT "      LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x5645d39ae6d0 ---------J   11370  PRINT "3.  SOME COMMANDS REQUIRE YOU TO ENTER DATA.  (FOR EXAMPLE, THE"
    0x5645d39ae8a0 ---------J   11380  PRINT "      'NAV' COMMAND COMES BACK WITH 'COURSE (1-9) ?'.)  IF YOU"
    0x5645d39aea40 ---------J   11390  PRINT "      TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x5645d39aebb0 ---------J   11400  PRINT "      WILL BE ABORTED."
    0x5645d39aec50 ---------J   11410  PRINT
    0x5645d39aede0 ---------J   11420  PRINT "HIT <CAR RET> TO CONTINUE ";
    0x5645d39aef40 ---------J   11430  INPUT A$
    0x5645d3a47690 ---------J   11440  GOTO 012380
    0x5645d39af0e0 ---------J T 11450  PRINT
    0x5645d39af250 ---------J   11460  PRINT "    INSTRUCTIONS FOR  ** STAR TREK **"
    0x5645d39af300 ---------J   11470  PRINT 
    0x5645d39af4c0 ---------J   11480  PRINT "THE GALAXY IS DIVIDED INTO AN 8 x 8 QUADRANT GRID,"
    0x5645d39af650 ---------J   11490  PRINT "AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID." 
    0x5645d39af710 ---------J   11500  PRINT
    0x5645d39af8e0 ---------J   11510  PRINT "   YOU WILL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE GALAXY"
    0x5645d39afab0 ---------J   11520  PRINT "TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP 'ENTERPRISE'"
    0x5645d39afc70 ---------J   11530  PRINT "YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF KLINGON WARSHIPS"
    0x5645d39afdf0 ---------J   11540  PRINT "WHICH ARE MENACING THE UNITED FEDERATION OF PLANETS."
    0x5645d39afe70 ---------J   11550  PRINT
    0x5645d39afef0 ---------J   11560  GOTO 11280
    0x5645d39aff90 ---------J T 11570  PRINT
    0x5645d39b0120 ---------J   11580  PRINT "YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x5645d39fc510 ---------J   11590  PRINT "CAPTAIN OF THE STARSHIP:"
    0x5645d39fc6c0 ---------J   11600  PRINT "'NAV' COMMAND = WARP ENGINE CONTROL --"
    0x5645d39fc870 ---------J   11610  PRINT "  COURSE IS IN A CIRCULAR NUMERICAL         4  3  2"
    0x5645d39fca20 ---------J   11620  PRINT "  VECTOR ARRANGEMENT AS SHOWN.               . . ."
    0x5645d39fcbd0 ---------J   11630  PRINT "  INTEGER AND REAL VALUES MAY BE              ..."
    0x5645d39fcd80 ---------J   11640  PRINT "  USED.  (THUS, COURSE 1.5 IS HALF-        5 ----- 1"
    0x5645d39fcf30 ---------J   11650  PRINT "  WAY BETWEEN 1 AND 2.)                       ..."
    0x5645d39fd0e0 ---------J   11660  PRINT "                                             . . ."
    0x5645d39fd280 ---------J   11670  PRINT "  VALUES MAY APPROACH 9.0, WHICH            6  7  8 "
    0x5645d39fd420 ---------J   11680  PRINT "  ITSELF IS EQUIVALENT TO 1.0."
    0x5645d39fd5c0 ---------J   11690  PRINT "                                            COURSE  "
    0x5645d39fd750 ---------J   11700  PRINT " ONE WARP FACTOR IS THE SIZE OF "
    0x5645d39fd8e0 ---------J   11710  PRINT " ONE QUADRANT.  THEREFORE, TO GET"
    0x5645d39fda70 ---------J   11720  PRINT " FROM QUADRANT 6,5 TO 5,5, YOU WOULD"
    0x5645d39fdbe0 ---------J   11730  PRINT " USE COURSE 3, WARP FACTOR 1."
    0x5645d39fdc80 ---------J   11740  GOTO 11280
    0x5645d39fde20 ---------J T 11750  PRINT "'SRS' COMMAND = SHORT RANGE SENSOR SCAN"
    0x5645d39fdfd0 ---------J   11760  PRINT "  SHOWS YOU A SCAN OF YOUR PRESENT QUADRANT."
    0x5645d39fe170 ---------J   11770  PRINT "  SYMBOLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x5645d39fe300 ---------J   11780  PRINT "		<*> = YOUR STARSHIP'S POSITION"
    0x5645d39fe4a0 ---------J   11790  PRINT "		+++ = KLINGON BATTLE CRUISER"
    0x5645d39fe640 ---------J   11800  PRINT "		>!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE!)"
    0x5645d39fe7d0 ---------J   11810  PRINT "		 *  = STAR"
    0x5645d39fe950 ---------J   11820  PRINT "  A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x5645d39fe9d0 ---------J   11830  PRINT
    0x5645d39fea70 ---------J   11840  GOTO 11280
    0x5645d39fec10 ---------J T 11850  PRINT "'LRS' COMMAND = LONG RANGE SENSOR SCAN"
    0x5645d39fedd0 ---------J   11860  PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x5645d39fefa0 ---------J   11870  PRINT "  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)"
    0x5645d39ff170 ---------J   11880  PRINT "  THE SCAN IS CODED IN THE FORM '###', WHERE THE UNITS DIGIT"
    0x5645d39ff330 ---------J   11890  PRINT "  IS THE NUMBER OF STARS, TENS DIGIT IS THE NUMBER OF STARBASES,"
    0x5645d39ff4e0 ---------J   11900  PRINT "  AND HUNDREDS DIGIT IS THE NUMBER OF KLINGONS. "
    0x5645d39ff670 ---------J   11910  PRINT "    EXAMPLE --   207 = 2 KLINGONS, ON STARBASES, 7 STARS."
    0x5645d39ff710 ---------J   11920  GOTO 11280
    0x5645d39ff8a0 ---------J T 11930  PRINT "'PHA' COMMAND = PHASER CONTROL"
    0x5645d39ffa60 ---------J   11940  PRINT "  ALLOWS YOU TO DESTROY THE KLINGON BATTLE CRUISERS BY"
    0x5645d39ffc10 ---------J   11950  PRINT "  ZAPPING THEM WITH SUITABLY LARGE UNITS OF ENERGY TO"
    0x5645d39ffdb0 ---------J   11960  PRINT "  DEPLETE THEIR SHIELD POWER.  (REMEMBER, KLINGONS HAVE"
    0x5645d39fff10 ---------J   11970  PRINT "  PHASERS, TOO!)"
    0x5645d39fffb0 ---------J   11980  GOTO 11280
    0x5645d3a00160 ---------J T 11990  PRINT "'TOR' COMMAND = PHOTON TORPEDO CONTROL"
    0x5645d3a00320 ---------J   12000  PRINT "  TORPEDO COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL."
    0x5645d3a004e0 ---------J   12010  PRINT "  IF YOU HIT THE KLINGON VESSEL, HE IS DESTROYED AND "
    0x5645d3a00680 ---------J   12020  PRINT "  CANNOT FIRE BACK AT YOU.  IF YOU MISS, YOU ARE SUBJECT TO"
    0x5645d3a00810 ---------J   12030  PRINT "  HIS PHASER FIRE."
    0x5645d3a009e0 ---------J   12040  PRINT "     NOTE: THE LIBRARY-COMPUTER ('COM' COMMAND) HAS AN"
    0x5645d3a00b70 ---------J   12050  PRINT "           OPTION TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
    0x5645d3a00c10 ---------J   12060  GOTO 11280
    0x5645d3a00db0 ---------J T 12070  PRINT "'SHE' COMMAND = SHIELD CONTROL"
    0x5645d3a00f80 ---------J   12080  PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS."
    0x5645d3a01130 ---------J   12090  PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.  NOTE THAT THE "
    0x5645d3a012b0 ---------J   12100  PRINT "  TOTAL ENERGY INCLUDES SHIELD ENERGY."
    0x5645d3a01350 ---------J   12110  GOTO 11280
    0x5645d3a014e0 ---------J T 12120  PRINT "'DAM' COMMAND = DAMAGE CONTROL REPORT"
    0x5645d3a016a0 ---------J   12130  PRINT "  GIVES STATE OF REPAIR OF ALL DEVICES, WHERE A NEGATIVE"
    0x5645d3a01840 ---------J   12140  PRINT "  'STATE OF REPAIR' SHOWS THAT THE DEVICE IS TEMPORARILY"
    0x5645d3a019a0 ---------J   12150  PRINT "  DAMAGED."
    0x5645d3a01a40 ---------J   12160  GOTO 11280
    0x5645d3a01bd0 ---------J T 12170  PRINT "'COM' COMMAND = LIBRARY-COMPUTER"
    0x5645d3a01d70 ---------J   12180  PRINT "  THE LIBRARY-COMPUTER CONTAINS SIX OPTIONS:"
    0x5645d3a01f30 ---------J   12190  PRINT "  OPTION 0 = CUMULATIVE GALACTIC RECORD"
    0x5645d3a020e0 ---------J   12200  PRINT "     WHICH SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
    0x5645d3a02270 ---------J   12210  PRINT "     LONG RANGE SENSOR SCANS."
    0x5645d3a02420 ---------J   12220  PRINT "  OPTION 1 = STATUS REPORT"
    0x5645d3a025d0 ---------J   12230  PRINT "     WHICH SHOWS THE NUMBER OF KLINGONS, STARDATES, AND STARBASES"
    0x5645d3a02760 ---------J   12240  PRINT "     REMAINING IN THE GAME."
    0x5645d3a02910 ---------J   12250  PRINT "  OPTION 2 = PHOTON TORPEDO DATA"
    0x5645d3a02ac0 ---------J   12260  PRINT "     WHICH GIVES DIRECTIONS AND DISTANCE FROM THE ENTERPRISE"
    0x5645d3a02c50 ---------J   12270  PRINT "     TO ALL KLINGONS IN YOUR QUADRANT"
    0x5645d3a02df0 ---------J   12280  PRINT "  OPTION 3 = STARBASE NAVIGATION DATA"
    0x5645d3a02f90 ---------J   12290  PRINT "     WHICH GIVES DIRECTION AND DISTANCE TO ANY STARBASE"
    0x5645d3a03130 ---------J   12300  PRINT "     WITHIN YOUR QUADRANT"
    0x5645d3a032e0 ---------J   12310  PRINT "  OPTION 4 = DIRECTION/DISTANCE CALCULATOR"
    0x5645d3a03480 ---------J   12320  PRINT "     WHICH ALLOWS YOU TO ENTER COORDINATES FOR"
    0x5645d3a03610 ---------J   12330  PRINT "     DIRECTION/DISTANCE CALCULATIONS."
    0x5645d3a037c0 ---------J   12340  PRINT "  OPTION 5 = GALACTIC 'REGION NAME' MAP"
    0x5645d3a03970 ---------J   12350  PRINT "     WHICH PRINTS THE NAMES OF THE SIXTEEN MAJOR GALACTIC"
    0x5645d3a03ae0 ---------J   12360  PRINT "     REGIONS REFERRED TO IN THE GAME."
    0x5645d3a03b60 ---------J   12370  GOTO 11280
    0x5645d3a47700 ---------J T 12380  RETURN
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
char* data_01730s[]={"WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"};
char* data_01740s[]={"PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "};
char* data_01800s[]={"ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"};
char* data_01810s[]={"BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"};
char* data_01820s[]={"SAGITTARIUS","ARCTURUS","POLLUX","SPICA"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1730,  4,data_01730s},
    { 1740,  4,data_01740s},
    { 1800,  7,data_01800s},
    { 1810,  5,data_01810s},
    { 1820,  4,data_01820s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
char*  tmpstr;                                    // Basic: A$ 
char*  CommandInitials;                           // Basic: A1$ 
int    ShipStrUnpacked[3];                        // Basic: A9 
int    StarbaseSector;                            // Basic: B3 
int    B4_int;                                    // Basic: B4 
int    B5_int;                                    // Basic: B5 
int    StarbaseTotal;                             // Basic: B9 
int    C_int_arr[9][2];                           // Basic: C 
char*  Condition;                                 // Basic: C$ 
int    C1_int;                                    // Basic: C1 
int    D_int;                                     // Basic: D 
char*  CommandNames[8];                           // Basic: D$ 
int    flgProtectedByStarbase;                    // Basic: D0 
int    D1_int;                                    // Basic: D1 
int    D2_int;                                    // Basic: D2 
int    D3_int;                                    // Basic: D3 
int    D4_int;                                    // Basic: D4 
int    D6_int;                                    // Basic: D6 
int    CurrentEnergy;                             // Basic: E 
int    InitialEnergy;                             // Basic: E0 
int    FND_int_arr[10];                           // Basic: FND 
int    SectorPopulation[8][8];                    // Basic: G 
char*  QuadrantName[16];                          // Basic: G1$ 
char*  QuadName;                                  // Basic: G2$ 
char*  G3_str;                                    // Basic: G3$ 
char*  QuadrantNameSuffix;                        // Basic: G4$ 
int    G5_int;                                    // Basic: G5 
int    KlingonHitDamage;                          // Basic: H 
int    H1_int;                                    // Basic: H1 
int    H8_int;                                    // Basic: H8 
int    idx_i;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    QuadIdx;                                   // Basic: I7 
int    idx;                                       // Basic: I8 
int    idx_j;                                     // Basic: J 
int    J0_int;                                    // Basic: J0 
int    KlingonInfoLocAndDamage[3][3];             // Basic: K 
int    KlingonsSector;                            // Basic: K3 
int    K7_int;                                    // Basic: K7 
int    KlingonsTotal;                             // Basic: K9 
int    L2_int;                                    // Basic: L2 
int    L3_int;                                    // Basic: L3 
int    M9_int;                                    // Basic: M9 
int    N_int_arr[3];                              // Basic: N 
char*  N_str;                                     // Basic: N$ 
char*  N1_str;                                    // Basic: N1$ 
char*  N2_str;                                    // Basic: N2$ 
char*  N5_str;                                    // Basic: N5$ 
char*  O1_str;                                    // Basic: O1$ 
char*  O3_str;                                    // Basic: O3$ 
int    PhotonTorpedoes;                           // Basic: P 
int    P0_int;                                    // Basic: P0 
int    P1_int;                                    // Basic: P1 
char*  P1_str;                                    // Basic: P1$ 
char*  QuadrantInfo[8];                           // Basic: Q$ 
int    EnterpriseQuadrantX;                       // Basic: Q1 
int    EnterpriseQuadrantY;                       // Basic: Q2 
int    Q4_int;                                    // Basic: Q4 
int    Q5_int;                                    // Basic: Q5 
int    QuadrantUnpacked[24];                      // Basic: Q9 
int    RandomNbr1;                                // Basic: R1 
int    RandomNbr2;                                // Basic: R2 
int    EnterpriseSheilds;                         // Basic: S 
int    EnterpriseSectorX;                         // Basic: S1 
int    EnterpriseSectorY;                         // Basic: S2 
int    SectorStars;                               // Basic: S3 
int    S9_int;                                    // Basic: S9 
int    T_int;                                     // Basic: T 
int    StartStarDate;                             // Basic: T0 
int    T8_int;                                    // Basic: T8 
int    CampaignLength;                            // Basic: T9 
int    V5_int;                                    // Basic: V5 
int    WarpFactor;                                // Basic: W1 
int    X_int;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
char*  X0_str;                                    // Basic: X0$ 
int    X1_int;                                    // Basic: X1 
int    X2_int;                                    // Basic: X2 
int    X5_int;                                    // Basic: X5 
int    X9_int;                                    // Basic: X9 
int    Y_int;                                     // Basic: Y 
int    Y9_int;                                    // Basic: Y9 
int    Z_int_arr[8][8];                           // Basic: Z 
int    QuadY;                                     // Basic: Z1 
int    QuadX;                                     // Basic: Z2 
int    rtn;                                       // Basic: Z3 
int    Z4_int;                                    // Basic: Z4 
int    Z5_int;                                    // Basic: Z5 
int    ZER_int_arr[10];                           // Basic: ZER 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_09190();
void Routine_09320();
void Routine_09590();
void Routine_10490();
void Routine_10610();
void Routine_10850();
void Routine_10920();
void Routine_11050();
void Routine_11230();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused D
int FND(int D){
    int rtn=SQR(IPower((KlingonInfoLocAndDamage[idx_i][1]-EnterpriseSectorX),2)+IPower((KlingonInfoLocAndDamage[idx_i][2]-EnterpriseSectorY),2));
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
    // 09150 REM
    // 09160 REM ===============================================================
    // 09170 REM
    // 09180 REM MANEUVER ENERGY S/R ***

void Routine_09190(){
    // 09190 LET E=E-N-10
    CurrentEnergy = CurrentEnergy-N_int_arr[0]-10;
    // 09200 IF E>=0 GOTO 9260
    if(CurrentEnergy>=0)goto ShieldsEnergized;
    // 09210 PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER.");strcat(buf,"\n");fputs(buf,fh); };
    // 09220 LET S=S+E
    EnterpriseSheilds = EnterpriseSheilds+CurrentEnergy;
    // 09230 LET E=0
    CurrentEnergy = 0;
    // 09240 IF S>0 GOTO 9260
    if(EnterpriseSheilds>0)goto ShieldsEnergized;
    // 09250 LET S=0
    EnterpriseSheilds = 0;

  ShieldsEnergized:
    // 09260 GOTO 09270
    goto Lbl_09270;

  Lbl_09270:
    // 09270 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 09280 REM
    // 09290 REM ===============================================================
    // 09300 REM
    // 09310 REM "KLINGONS SHOOTING" CODE BEGINS ***

void Routine_09320(){
    // 09320 IF K3<=0 GOTO 9530
    if(KlingonsSector<=0)goto NoKlingonAttack;
    // 09330 IF D0=0 GOTO 9360
    if(flgProtectedByStarbase==0)goto EachKlingonAttack;
    // 09340 PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"STAR BASE SHIELDS PROTECT THE ENTERPRISE");strcat(buf,"\n");fputs(buf,fh); };
    // 09350 GOTO 9530
    goto NoKlingonAttack;

  EachKlingonAttack:
    // 09360 FOR I=1 TO 3
    for(idx_i=1;idx_i<=3;idx_i++){
        // 09370 IF K(I,3)<=0 GOTO 9520
        if(KlingonInfoLocAndDamage[idx_i][3]<=0)goto NextKlingon;
        // 09380 LET H=INT((K(I,3)/FND(0))*(2+RND(1)))
        KlingonHitDamage = INT((KlingonInfoLocAndDamage[idx_i][3]/FND_int_arr[0])*(2+RND(1)));
        // 09390 LET S=S-H
        EnterpriseSheilds = EnterpriseSheilds-KlingonHitDamage;
        // 09400 PRINT H" UNIT HIT ON ENTERPRISE FROM SECTOR"K(I,1)","K(I,2)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,KlingonHitDamage);strcat(buf," UNIT HIT ON ENTERPRISE FROM SECTOR"); b2c_INT(buf,KlingonInfoLocAndDamage[idx_i][1]);strcat(buf,","); b2c_INT(buf,KlingonInfoLocAndDamage[idx_i][2]);strcat(buf,"\n");fputs(buf,fh); };
        // 09410 IF S<0 GOTO 9530
        if(EnterpriseSheilds<0)goto NoKlingonAttack;
        // 09420 PRINT "      (SHIELDS DOWN TO"S" UNITS.)"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      (SHIELDS DOWN TO"); b2c_INT(buf,EnterpriseSheilds);strcat(buf," UNITS.)");strcat(buf,"\n");fputs(buf,fh); };
        // 09430 IF H<20 GOTO 9520
        if(KlingonHitDamage<20)goto NextKlingon;
        // 09440 IF RND(1)>.6 GOTO 9520
        if(RND(1)>0.6)goto NextKlingon;
        // 09450 IF H/S<=.02 GOTO 9520
        if(KlingonHitDamage/EnterpriseSheilds<=0.02)goto NextKlingon;
        // 09460 LET D2=H/S+.5*RND(1)
        D2_int = KlingonHitDamage/EnterpriseSheilds+0.5*RND(1);
        // 09470 LET R1=INT(RND(1)*8+1)
        RandomNbr1 = INT(RND(1)*8+1);
        // 09480 LET D(R1)=D(R1)-D2
        D_int = D_int-D2_int;
        // 09490 PRINT "DAMAGE CONTROL REPORTS '";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DAMAGE CONTROL REPORTS '");fputs(buf,fh); };
        // 09500 GOSUB 10850
        Routine_10850();
        // 09510 PRINT " DAMAGED BY THE HIT!'"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," DAMAGED BY THE HIT!'");strcat(buf,"\n");fputs(buf,fh); };

  NextKlingon:
        // 09520 NEXT I
        int dummy_9520=0; // Ignore this line.
    }; // End-For(idx_i)

  NoKlingonAttack:
    // 09530 GOTO 09540
    goto Lbl_09540;

  Lbl_09540:
    // 09540 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------
    // 09550 REM
    // 09560 REM ===============================================================
    // 09570 REM
    // 09580 REM S.R. SENSOR SCAN & STARTUP SUBR. ***

void Routine_09590(){
    // 09590 FOR I=S1-1 TO S1+1
    for(idx_i=EnterpriseSectorX-1;idx_i<=EnterpriseSectorX+1;idx_i++){
        // 09600 FOR J=S2-1 TO S2+1
        for(idx_j=EnterpriseSectorY-1;idx_j<=EnterpriseSectorY+1;idx_j++){
            // 09610 IF INT(I+.5)<1 GOTO 9700
            if(INT(idx_i+0.5)<1)goto NextSectorSpot;
            // 09620 IF INT(I+.5)>8 GOTO 9700
            if(INT(idx_i+0.5)>8)goto NextSectorSpot;
            // 09630 IF INT(J+.5)<1 GOTO 9700
            if(INT(idx_j+0.5)<1)goto NextSectorSpot;
            // 09640 IF INT(J+.5)>8 GOTO 9700
            if(INT(idx_j+0.5)>8)goto NextSectorSpot;
            // 09650 LET A$=">!<"
            GLBpStr=">!<";
            tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 09660 LET Z1=I
            QuadY = idx_i;
            // 09670 LET Z2=J
            QuadX = idx_j;
            // 09680 GOSUB 10920
            Routine_10920();
            // 09690 IF Z3=1 GOTO 9740
            if(rtn==1)goto Docked;

  NextSectorSpot:
            // 09700 NEXT J
            int dummy_9700=0; // Ignore this line.
        }; // End-For(idx_j)
        // 09710 NEXT I
        int dummy_9710=0; // Ignore this line.
    }; // End-For(idx_i)
    // 09720 LET D0=0
    flgProtectedByStarbase = 0;
    // 09730 GOTO 9810
    goto ChkCondCode;

  Docked:
    // 09740 LET D0=1
    flgProtectedByStarbase = 1;
    // 09750 LET C$="DOCKED"
    GLBpStr="DOCKED";
    Condition = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 09760 LET E=3000
    CurrentEnergy = 3000;
    // 09770 LET P=10
    PhotonTorpedoes = 10;
    // 09780 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHIELDS DROPPED FOR DOCKING PURPOSES");strcat(buf,"\n");fputs(buf,fh); };
    // 09790 LET S=0
    EnterpriseSheilds = 0;
    // 09800 GOTO 9880
    goto CheckSRSstatus;

  ChkCondCode:
    // 09810 IF K3>0 GOTO 9850
    if(KlingonsSector>0)goto RedAlert;
    // 09820 IF E<E0*.1 GOTO 9870
    if(CurrentEnergy<InitialEnergy*0.1)goto YellowAlert;
    // 09830 LET C$=" GREEN"
    GLBpStr=" GREEN";
    Condition = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 09840 GOTO 9880
    goto CheckSRSstatus;

  RedAlert:
    // 09850 C$=" "+CHR$(7)+"*RED*"+CHR$(7)
    GLBpStr=StringCat(StringCat(StringCat(" ",CHR$(7)),"*RED*"),CHR$(7));
    Condition = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 09860 GOTO 9880
    goto CheckSRSstatus;

  YellowAlert:
    // 09870 LET C$="YELLOW"
    GLBpStr="YELLOW";
    Condition = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  CheckSRSstatus:
    // 09880 IF D(2)>=0 GOTO 9930
    if(D_int>=0)goto SRSWorking;
    // 09890 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 09900 PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*** SHORT RANGE SENSORS ARE OUT ***");strcat(buf,"\n");fputs(buf,fh); };
    // 09910 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 09920 GOTO 10420
    goto Lbl_10420;

  SRSWorking:
    // 09930 LET O1$="--------------------------------"
    GLBpStr="--------------------------------";
    O1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 09940 PRINT O1$
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O1_str);strcat(buf,"\n");fputs(buf,fh); };
    // 09950 LET N5$="####"
    GLBpStr="####";
    N5_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 09960 PRINT " ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
    // 09970 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 09980 PRINT MID$(Q$(1),I,3)" ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,MID$(QuadrantInfo[1],idx_i,3));strcat(buf," ");fputs(buf,fh); };
        // 09990 NEXT I
        int dummy_9990=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10000 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 10010 PRINT " ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
    // 10020 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10030 PRINT MID$(Q$(2),I,3)" ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,MID$(QuadrantInfo[2],idx_i,3));strcat(buf," ");fputs(buf,fh); };
        // 10040 NEXT I
        int dummy_10040=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10050 PRINT "        STARDATE         ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"        STARDATE         ");fputs(buf,fh); };
    // 10060 PRINT USING "####.#",T
    b2c_printf("%6.1f%s ",FT(T_int),"\n");
    // 10070 PRINT " ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
    // 10080 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10090 PRINT MID$(Q$(3),I,3)" ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,MID$(QuadrantInfo[3],idx_i,3));strcat(buf," ");fputs(buf,fh); };
        // 10100 NEXT I
        int dummy_10100=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10110 PRINT "        CONDITION        ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"        CONDITION        ");fputs(buf,fh); };
    // 10120 PRINT C$
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,Condition);strcat(buf,"\n");fputs(buf,fh); };
    // 10130 PRINT " ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
    // 10140 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10150 PRINT MID$(Q$(4),I,3)" ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,MID$(QuadrantInfo[4],idx_i,3));strcat(buf," ");fputs(buf,fh); };
        // 10160 NEXT I
        int dummy_10160=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10170 PRINT "        QUADRANT         "Q1","Q2
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"        QUADRANT         "); b2c_INT(buf,EnterpriseQuadrantX);strcat(buf,","); b2c_INT(buf,EnterpriseQuadrantY);strcat(buf,"\n");fputs(buf,fh); };
    // 10180 PRINT " ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
    // 10190 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10200 PRINT MID$(Q$(5),I,3)" ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,MID$(QuadrantInfo[5],idx_i,3));strcat(buf," ");fputs(buf,fh); };
        // 10210 NEXT I
        int dummy_10210=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10220 PRINT "        SECTOR           "S1","S2
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"        SECTOR           "); b2c_INT(buf,EnterpriseSectorX);strcat(buf,","); b2c_INT(buf,EnterpriseSectorY);strcat(buf,"\n");fputs(buf,fh); };
    // 10230 PRINT " ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
    // 10240 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10250 PRINT MID$(Q$(6),I,3)" ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,MID$(QuadrantInfo[6],idx_i,3));strcat(buf," ");fputs(buf,fh); };
        // 10260 NEXT I
        int dummy_10260=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10270 PRINT "        TOTAL ENERGY     ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"        TOTAL ENERGY     ");fputs(buf,fh); };
    // 10280 PRINT USING N5$,E+S
    b2c_printf(b2c_ConvertUsingFormatStr(N5_str),CurrentEnergy+EnterpriseSheilds,"\n");
    // 10290 PRINT " ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
    // 10300 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10310 PRINT MID$(Q$(7),I,3)" ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,MID$(QuadrantInfo[7],idx_i,3));strcat(buf," ");fputs(buf,fh); };
        // 10320 NEXT I
        int dummy_10320=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10330 PRINT "        PHOTON TORPEDOES ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"        PHOTON TORPEDOES ");fputs(buf,fh); };
    // 10340 PRINT USING N5$,P
    b2c_printf(b2c_ConvertUsingFormatStr(N5_str),PhotonTorpedoes,"\n");
    // 10350 PRINT " ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
    // 10360 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10370 PRINT MID$(Q$(8),I,3)" ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,MID$(QuadrantInfo[8],idx_i,3));strcat(buf," ");fputs(buf,fh); };
        // 10380 NEXT I
        int dummy_10380=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10390 PRINT "        SHIELDS          ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"        SHIELDS          ");fputs(buf,fh); };
    // 10400 PRINT USING N5$,S
    b2c_printf(b2c_ConvertUsingFormatStr(N5_str),EnterpriseSheilds,"\n");
    // 10410 PRINT O1$
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O1_str);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_10420:
    // 10420 GOTO 010430
    goto Lbl_10430;

  Lbl_10430:
    // 10430 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------
    // 10440 REM *** END OF LIBRARY-COMPUTER CODE
    // 10450 REM
    // 10460 REM ===============================================================
    // 10470 REM
    // 10480 REM S/R FINDS RANDOM HOLE IN QUADRANT

void Routine_10490(){

  FindQuadHole:
    // 10490 LET R1=INT(RND(1)*8+1)
    RandomNbr1 = INT(RND(1)*8+1);
    // 10500 LET R2=INT(RND(1)*8+1)
    RandomNbr2 = INT(RND(1)*8+1);
    // 10510 LET A$="   "
    GLBpStr="   ";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 10520 LET Z1=R1
    QuadY = RandomNbr1;
    // 10530 LET Z2=R2
    QuadX = RandomNbr2;
    // 10540 GOSUB 10920
    Routine_10920();
    // 10550 IF Z3=0 GOTO 10490
    if(rtn==0)goto FindQuadHole;
    // 10560 GOTO 010570
    goto Lbl_10570;

  Lbl_10570:
    // 10570 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------
    // 10580 REM
    // 10590 REM ===============================================================
    // 10600 REM

void Routine_10610(){
    // 10610 REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
    // 10620 Z1 = INT(Z1+.5)
    QuadY = INT(QuadY+0.5);
    // 10630 Z2 = INT(Z2+.5)
    QuadX = INT(QuadX+0.5);
    // 10640 IF Z1<1 GOTO 10760
    if(QuadY<1)goto BadQuadCoords;
    // 10650 IF Z1>8 GOTO 10760
    if(QuadY>8)goto BadQuadCoords;
    // 10660 IF Z2<1 GOTO 10760
    if(QuadX<1)goto BadQuadCoords;
    // 10670 IF Z2>8 GOTO 10760
    if(QuadX>8)goto BadQuadCoords;
    // 10680 DIM Q9(24), A9(3)
    // 10690 CHANGE Q$(Z1) TO Q9
    if(QuadrantInfo[QuadY]!=nullptr){
        for(int i=1;(i<=(int)strlen(QuadrantInfo[QuadY]))&&(i<=23);i++){
            QuadrantUnpacked[0][i]=(int)QuadrantInfo[QuadY][i-1];
        }
    }
    // 10700 CHANGE A$ TO A9
    if(tmpstr!=nullptr){
        for(int i=1;(i<=(int)strlen(tmpstr))&&(i<=2);i++){
            ShipStrUnpacked[0][i]=(int)tmpstr[i-1];
        }
    }
    // 10710 FOR I8 = 1 TO 3
    for(idx=1;idx<=3;idx++){
        // 10720 Q9(3*(Z2-1) + I8) = A9(I8)
        QuadrantUnpacked[3*(QuadX-1)+idx] = ShipStrUnpacked[idx];
        // 10730 NEXT I8
        int dummy_10730=0; // Ignore this line.
    }; // End-For(idx)
    // 10740 CHANGE Q9 TO Q$(Z1)
    if(QuadrantInfo[QuadY]!=nullptr){
        for(int i=1;(i<=(int)strlen(QuadrantInfo[QuadY]))&&(i<=-1);i++){
            QuadrantInfo[QuadY][i-1]=(int)QuadrantUnpacked[0][i];
        }
    }
    // 10750 GOTO 10800
    goto Finished;

  BadQuadCoords:
    // 10760 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 10770 PRINT "ERROR IN COORDINATES (Z1,Z2): (";Z1;",";Z2;")"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ERROR IN COORDINATES (Z1,Z2): ("); b2c_INT(buf,QuadY);strcat(buf,","); b2c_INT(buf,QuadX);strcat(buf,")");strcat(buf,"\n");fputs(buf,fh); };
    // 10780 PRINT "     1 <=  Z1,Z2  <=8    "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     1 <=  Z1,Z2  <=8    ");strcat(buf,"\n");fputs(buf,fh); };
    // 10790 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Finished:
    // 10800 GOTO 010810
    goto Lbl_10810;

  Lbl_10810:
    // 10810 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine G
//---------------------------------------------------------------------------
    // 10820 REM
    // 10830 REM ===============================================================
    // 10840 REM

void Routine_10850(){
    // 10850 REM *** PRINTS DEVICE NAME FROM ARRAY ***
    // 10860 PRINT D$(R1);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,CommandNames[RandomNbr1]);fputs(buf,fh); };
    // 10870 GOTO 010880
    goto Lbl_10880;

  Lbl_10880:
    // 10880 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine H
//---------------------------------------------------------------------------
    // 10890 REM
    // 10900 REM ===============================================================
    // 10910 REM

void Routine_10920(){
    // 10920 REM *** STRING COMPARISON IN QUADRANT ARRAY ***
    // 10930 LET Z1=INT(Z1+.5)
    QuadY = INT(QuadY+0.5);
    // 10940 LET Z2=INT(Z2+.5)
    QuadX = INT(QuadX+0.5);
    // 10950 LET Z3=0
    rtn = 0;
    // 10960 IF MID$(Q$(Z1),(3*Z2-2),3) <> A$ GOTO 10980
    if(MID$(QuadrantInfo[QuadY],(3*QuadX-2),3)==tmpstr)goto NotFound;
    // 10970 Z3 = 1
    rtn = 1;

  NotFound:
    // 10980 GOTO 010990
    goto Lbl_10990;

  Lbl_10990:
    // 10990 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine I
//---------------------------------------------------------------------------
    // 11000 REM
    // 11010 REM ===============================================================
    // 11020 REM
    // 11030 REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    // 11040 REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)

void Routine_11050(){
    // 11050 LET L2=2
    L2_int = 2;
    // 11060 IF Z5>=5 GOTO 11080
    if(Z5_int>=5)goto RightQuadColumn;
    // 11070 LET L2=1
    L2_int = 1;

  RightQuadColumn:
    // 11080 LET L3=2*(Z4-1)+L2
    L3_int = 2*(Z4_int-1)+L2_int;
    // 11090 LET G2$=G1$(L3)
    GLBpStr=QuadrantName[L3_int];
    QuadName = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 11100 IF G5=1 GOTO 11180
    if(G5_int==1)goto Lbl_11180;
    // 11110 LET L3=Z5
    L3_int = Z5_int;
    // 11120 IF Z5<=4 GOTO 11140
    if(Z5_int<=4)goto Lbl_11140;
    // 11130 LET L3=Z5-4
    L3_int = Z5_int-4;

  Lbl_11140:
    // 11140 LET G3$="IV"
    GLBpStr="IV";
    G3_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 11150 IF L3=4 GOTO 11170
    if(L3_int==4)goto AppQuadNameVers;
    // 11160 LET G3$=MID$(G4$,1,L3)
    GLBpStr=MID$(QuadrantNameSuffix,1,L3_int);
    G3_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  AppQuadNameVers:
    // 11170 G2$=G2$+" "+G3$
    GLBpStr=StringCat(StringCat(QuadName," "),G3_str);
    QuadName = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_11180:
    // 11180 GOTO 011190
    goto Lbl_11190;

  Lbl_11190:
    // 11190 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine J
//---------------------------------------------------------------------------
    // 11200 REM Gosub target.
    // 11210 REM This segment was originally from file STINST.BAS and was included with 
    // 11220 REM a CHAIN command./ASA Jul 27,2009

void Routine_11230(){
    // 11230 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 11240 REM INSTRUCTIONS FOR "STREK" GAME
    // 11250 REM VERSION "STINST2" 12/8/74
    // 11260 FOR I=1 TO 9
    for(idx_i=1;idx_i<=9;idx_i++){
        // 11270 ON I GOTO 11450, 11570, 11750, 11850, 11930, 11990, 12070, 12120, 12170
        switch((int)(idx_i)){
            case 1: goto Lbl_11450;
            case 2: goto Lbl_11570;
            case 3: goto Lbl_11750;
            case 4: goto Lbl_11850;
            case 5: goto Lbl_11930;
            case 6: goto Lbl_11990;
            case 7: goto Lbl_12070;
            case 8: goto Lbl_12120;
            case 9: goto Lbl_12170;
            default: break; 
        };

  DspHelpPage01:
        // 11280 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 11290 PRINT "<TO CONTINUE, HIT 'RETURN'>";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"<TO CONTINUE, HIT 'RETURN'>");fputs(buf,fh); };
        // 11300 INPUT A$
        // Start of Basic INPUT statement 11300
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtos(&tmpstr,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 11300
        // 11310 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 11320 NEXT I
        int dummy_11320=0; // Ignore this line.
    }; // End-For(idx_i)
    // 11330 PRINT "1.  WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1.  WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL");strcat(buf,"\n");fputs(buf,fh); };
    // 11340 PRINT "      COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM, OR XXX)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM, OR XXX).");strcat(buf,"\n");fputs(buf,fh); };
    // 11350 PRINT "2.  IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2.  IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT");strcat(buf,"\n");fputs(buf,fh); };
    // 11360 PRINT "      LIST OF THE LEGAL COMMANDS PRINTED OUT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      LIST OF THE LEGAL COMMANDS PRINTED OUT.");strcat(buf,"\n");fputs(buf,fh); };
    // 11370 PRINT "3.  SOME COMMANDS REQUIRE YOU TO ENTER DATA.  (FOR EXAMPLE, THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"3.  SOME COMMANDS REQUIRE YOU TO ENTER DATA.  (FOR EXAMPLE, THE");strcat(buf,"\n");fputs(buf,fh); };
    // 11380 PRINT "      'NAV' COMMAND COMES BACK WITH 'COURSE (1-9) ?'.)  IF YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      'NAV' COMMAND COMES BACK WITH 'COURSE (1-9) ?'.)  IF YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 11390 PRINT "      TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND");strcat(buf,"\n");fputs(buf,fh); };
    // 11400 PRINT "      WILL BE ABORTED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      WILL BE ABORTED.");strcat(buf,"\n");fputs(buf,fh); };
    // 11410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 11420 PRINT "HIT <CAR RET> TO CONTINUE ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HIT <CAR RET> TO CONTINUE ");fputs(buf,fh); };
    // 11430 INPUT A$
    // Start of Basic INPUT statement 11430
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&tmpstr,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 11430
    // 11440 GOTO 012380
    goto Lbl_12380;

  Lbl_11450:
    // 11450 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 11460 PRINT "    INSTRUCTIONS FOR  ** STAR TREK **"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    INSTRUCTIONS FOR  ** STAR TREK **");strcat(buf,"\n");fputs(buf,fh); };
    // 11470 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 11480 PRINT "THE GALAXY IS DIVIDED INTO AN 8 x 8 QUADRANT GRID,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE GALAXY IS DIVIDED INTO AN 8 x 8 QUADRANT GRID,");strcat(buf,"\n");fputs(buf,fh); };
    // 11490 PRINT "AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID.");strcat(buf,"\n");fputs(buf,fh); };
    // 11500 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 11510 PRINT "   YOU WILL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE GALAXY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   YOU WILL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE GALAXY");strcat(buf,"\n");fputs(buf,fh); };
    // 11520 PRINT "TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP 'ENTERPRISE'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP 'ENTERPRISE'");strcat(buf,"\n");fputs(buf,fh); };
    // 11530 PRINT "YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF KLINGON WARSHIPS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF KLINGON WARSHIPS");strcat(buf,"\n");fputs(buf,fh); };
    // 11540 PRINT "WHICH ARE MENACING THE UNITED FEDERATION OF PLANETS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHICH ARE MENACING THE UNITED FEDERATION OF PLANETS.");strcat(buf,"\n");fputs(buf,fh); };
    // 11550 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 11560 GOTO 11280
    goto DspHelpPage01;

  Lbl_11570:
    // 11570 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 11580 PRINT "YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS");strcat(buf,"\n");fputs(buf,fh); };
    // 11590 PRINT "CAPTAIN OF THE STARSHIP:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CAPTAIN OF THE STARSHIP:");strcat(buf,"\n");fputs(buf,fh); };
    // 11600 PRINT "'NAV' COMMAND = WARP ENGINE CONTROL --"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'NAV' COMMAND = WARP ENGINE CONTROL --");strcat(buf,"\n");fputs(buf,fh); };
    // 11610 PRINT "  COURSE IS IN A CIRCULAR NUMERICAL         4  3  2"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  COURSE IS IN A CIRCULAR NUMERICAL         4  3  2");strcat(buf,"\n");fputs(buf,fh); };
    // 11620 PRINT "  VECTOR ARRANGEMENT AS SHOWN.               . . ."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  VECTOR ARRANGEMENT AS SHOWN.               . . .");strcat(buf,"\n");fputs(buf,fh); };
    // 11630 PRINT "  INTEGER AND REAL VALUES MAY BE              ..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  INTEGER AND REAL VALUES MAY BE              ...");strcat(buf,"\n");fputs(buf,fh); };
    // 11640 PRINT "  USED.  (THUS, COURSE 1.5 IS HALF-        5 ----- 1"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  USED.  (THUS, COURSE 1.5 IS HALF-        5 ----- 1");strcat(buf,"\n");fputs(buf,fh); };
    // 11650 PRINT "  WAY BETWEEN 1 AND 2.)                       ..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  WAY BETWEEN 1 AND 2.)                       ...");strcat(buf,"\n");fputs(buf,fh); };
    // 11660 PRINT "                                             . . ."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                                             . . .");strcat(buf,"\n");fputs(buf,fh); };
    // 11670 PRINT "  VALUES MAY APPROACH 9.0, WHICH            6  7  8 "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  VALUES MAY APPROACH 9.0, WHICH            6  7  8 ");strcat(buf,"\n");fputs(buf,fh); };
    // 11680 PRINT "  ITSELF IS EQUIVALENT TO 1.0."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  ITSELF IS EQUIVALENT TO 1.0.");strcat(buf,"\n");fputs(buf,fh); };
    // 11690 PRINT "                                            COURSE  "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                                            COURSE  ");strcat(buf,"\n");fputs(buf,fh); };
    // 11700 PRINT " ONE WARP FACTOR IS THE SIZE OF "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ONE WARP FACTOR IS THE SIZE OF ");strcat(buf,"\n");fputs(buf,fh); };
    // 11710 PRINT " ONE QUADRANT.  THEREFORE, TO GET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ONE QUADRANT.  THEREFORE, TO GET");strcat(buf,"\n");fputs(buf,fh); };
    // 11720 PRINT " FROM QUADRANT 6,5 TO 5,5, YOU WOULD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," FROM QUADRANT 6,5 TO 5,5, YOU WOULD");strcat(buf,"\n");fputs(buf,fh); };
    // 11730 PRINT " USE COURSE 3, WARP FACTOR 1."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," USE COURSE 3, WARP FACTOR 1.");strcat(buf,"\n");fputs(buf,fh); };
    // 11740 GOTO 11280
    goto DspHelpPage01;

  Lbl_11750:
    // 11750 PRINT "'SRS' COMMAND = SHORT RANGE SENSOR SCAN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'SRS' COMMAND = SHORT RANGE SENSOR SCAN");strcat(buf,"\n");fputs(buf,fh); };
    // 11760 PRINT "  SHOWS YOU A SCAN OF YOUR PRESENT QUADRANT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  SHOWS YOU A SCAN OF YOUR PRESENT QUADRANT.");strcat(buf,"\n");fputs(buf,fh); };
    // 11770 PRINT "  SYMBOLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  SYMBOLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:");strcat(buf,"\n");fputs(buf,fh); };
    // 11780 PRINT "		<*> = YOUR STARSHIP'S POSITION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"		<*> = YOUR STARSHIP'S POSITION");strcat(buf,"\n");fputs(buf,fh); };
    // 11790 PRINT "		+++ = KLINGON BATTLE CRUISER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"		+++ = KLINGON BATTLE CRUISER");strcat(buf,"\n");fputs(buf,fh); };
    // 11800 PRINT "		>!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE!)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"		>!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE!)");strcat(buf,"\n");fputs(buf,fh); };
    // 11810 PRINT "		 *  = STAR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"		 *  = STAR");strcat(buf,"\n");fputs(buf,fh); };
    // 11820 PRINT "  A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED.");strcat(buf,"\n");fputs(buf,fh); };
    // 11830 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 11840 GOTO 11280
    goto DspHelpPage01;

  Lbl_11850:
    // 11850 PRINT "'LRS' COMMAND = LONG RANGE SENSOR SCAN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'LRS' COMMAND = LONG RANGE SENSOR SCAN");strcat(buf,"\n");fputs(buf,fh); };
    // 11860 PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE");strcat(buf,"\n");fputs(buf,fh); };
    // 11870 PRINT "  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)");strcat(buf,"\n");fputs(buf,fh); };
    // 11880 PRINT "  THE SCAN IS CODED IN THE FORM '###', WHERE THE UNITS DIGIT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  THE SCAN IS CODED IN THE FORM '###', WHERE THE UNITS DIGIT");strcat(buf,"\n");fputs(buf,fh); };
    // 11890 PRINT "  IS THE NUMBER OF STARS, TENS DIGIT IS THE NUMBER OF STARBASES,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  IS THE NUMBER OF STARS, TENS DIGIT IS THE NUMBER OF STARBASES,");strcat(buf,"\n");fputs(buf,fh); };
    // 11900 PRINT "  AND HUNDREDS DIGIT IS THE NUMBER OF KLINGONS. "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  AND HUNDREDS DIGIT IS THE NUMBER OF KLINGONS. ");strcat(buf,"\n");fputs(buf,fh); };
    // 11910 PRINT "    EXAMPLE --   207 = 2 KLINGONS, ON STARBASES, 7 STARS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    EXAMPLE --   207 = 2 KLINGONS, ON STARBASES, 7 STARS.");strcat(buf,"\n");fputs(buf,fh); };
    // 11920 GOTO 11280
    goto DspHelpPage01;

  Lbl_11930:
    // 11930 PRINT "'PHA' COMMAND = PHASER CONTROL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'PHA' COMMAND = PHASER CONTROL");strcat(buf,"\n");fputs(buf,fh); };
    // 11940 PRINT "  ALLOWS YOU TO DESTROY THE KLINGON BATTLE CRUISERS BY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  ALLOWS YOU TO DESTROY THE KLINGON BATTLE CRUISERS BY");strcat(buf,"\n");fputs(buf,fh); };
    // 11950 PRINT "  ZAPPING THEM WITH SUITABLY LARGE UNITS OF ENERGY TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  ZAPPING THEM WITH SUITABLY LARGE UNITS OF ENERGY TO");strcat(buf,"\n");fputs(buf,fh); };
    // 11960 PRINT "  DEPLETE THEIR SHIELD POWER.  (REMEMBER, KLINGONS HAVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  DEPLETE THEIR SHIELD POWER.  (REMEMBER, KLINGONS HAVE");strcat(buf,"\n");fputs(buf,fh); };
    // 11970 PRINT "  PHASERS, TOO!)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  PHASERS, TOO!)");strcat(buf,"\n");fputs(buf,fh); };
    // 11980 GOTO 11280
    goto DspHelpPage01;

  Lbl_11990:
    // 11990 PRINT "'TOR' COMMAND = PHOTON TORPEDO CONTROL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'TOR' COMMAND = PHOTON TORPEDO CONTROL");strcat(buf,"\n");fputs(buf,fh); };
    // 12000 PRINT "  TORPEDO COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  TORPEDO COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL.");strcat(buf,"\n");fputs(buf,fh); };
    // 12010 PRINT "  IF YOU HIT THE KLINGON VESSEL, HE IS DESTROYED AND "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  IF YOU HIT THE KLINGON VESSEL, HE IS DESTROYED AND ");strcat(buf,"\n");fputs(buf,fh); };
    // 12020 PRINT "  CANNOT FIRE BACK AT YOU.  IF YOU MISS, YOU ARE SUBJECT TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  CANNOT FIRE BACK AT YOU.  IF YOU MISS, YOU ARE SUBJECT TO");strcat(buf,"\n");fputs(buf,fh); };
    // 12030 PRINT "  HIS PHASER FIRE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  HIS PHASER FIRE.");strcat(buf,"\n");fputs(buf,fh); };
    // 12040 PRINT "     NOTE: THE LIBRARY-COMPUTER ('COM' COMMAND) HAS AN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     NOTE: THE LIBRARY-COMPUTER ('COM' COMMAND) HAS AN");strcat(buf,"\n");fputs(buf,fh); };
    // 12050 PRINT "           OPTION TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"           OPTION TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2).");strcat(buf,"\n");fputs(buf,fh); };
    // 12060 GOTO 11280
    goto DspHelpPage01;

  Lbl_12070:
    // 12070 PRINT "'SHE' COMMAND = SHIELD CONTROL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'SHE' COMMAND = SHIELD CONTROL");strcat(buf,"\n");fputs(buf,fh); };
    // 12080 PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 12090 PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.  NOTE THAT THE "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.  NOTE THAT THE ");strcat(buf,"\n");fputs(buf,fh); };
    // 12100 PRINT "  TOTAL ENERGY INCLUDES SHIELD ENERGY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  TOTAL ENERGY INCLUDES SHIELD ENERGY.");strcat(buf,"\n");fputs(buf,fh); };
    // 12110 GOTO 11280
    goto DspHelpPage01;

  Lbl_12120:
    // 12120 PRINT "'DAM' COMMAND = DAMAGE CONTROL REPORT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'DAM' COMMAND = DAMAGE CONTROL REPORT");strcat(buf,"\n");fputs(buf,fh); };
    // 12130 PRINT "  GIVES STATE OF REPAIR OF ALL DEVICES, WHERE A NEGATIVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  GIVES STATE OF REPAIR OF ALL DEVICES, WHERE A NEGATIVE");strcat(buf,"\n");fputs(buf,fh); };
    // 12140 PRINT "  'STATE OF REPAIR' SHOWS THAT THE DEVICE IS TEMPORARILY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  'STATE OF REPAIR' SHOWS THAT THE DEVICE IS TEMPORARILY");strcat(buf,"\n");fputs(buf,fh); };
    // 12150 PRINT "  DAMAGED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  DAMAGED.");strcat(buf,"\n");fputs(buf,fh); };
    // 12160 GOTO 11280
    goto DspHelpPage01;

  Lbl_12170:
    // 12170 PRINT "'COM' COMMAND = LIBRARY-COMPUTER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'COM' COMMAND = LIBRARY-COMPUTER");strcat(buf,"\n");fputs(buf,fh); };
    // 12180 PRINT "  THE LIBRARY-COMPUTER CONTAINS SIX OPTIONS:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  THE LIBRARY-COMPUTER CONTAINS SIX OPTIONS:");strcat(buf,"\n");fputs(buf,fh); };
    // 12190 PRINT "  OPTION 0 = CUMULATIVE GALACTIC RECORD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  OPTION 0 = CUMULATIVE GALACTIC RECORD");strcat(buf,"\n");fputs(buf,fh); };
    // 12200 PRINT "     WHICH SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     WHICH SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS");strcat(buf,"\n");fputs(buf,fh); };
    // 12210 PRINT "     LONG RANGE SENSOR SCANS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     LONG RANGE SENSOR SCANS.");strcat(buf,"\n");fputs(buf,fh); };
    // 12220 PRINT "  OPTION 1 = STATUS REPORT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  OPTION 1 = STATUS REPORT");strcat(buf,"\n");fputs(buf,fh); };
    // 12230 PRINT "     WHICH SHOWS THE NUMBER OF KLINGONS, STARDATES, AND STARBASES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     WHICH SHOWS THE NUMBER OF KLINGONS, STARDATES, AND STARBASES");strcat(buf,"\n");fputs(buf,fh); };
    // 12240 PRINT "     REMAINING IN THE GAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     REMAINING IN THE GAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 12250 PRINT "  OPTION 2 = PHOTON TORPEDO DATA"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  OPTION 2 = PHOTON TORPEDO DATA");strcat(buf,"\n");fputs(buf,fh); };
    // 12260 PRINT "     WHICH GIVES DIRECTIONS AND DISTANCE FROM THE ENTERPRISE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     WHICH GIVES DIRECTIONS AND DISTANCE FROM THE ENTERPRISE");strcat(buf,"\n");fputs(buf,fh); };
    // 12270 PRINT "     TO ALL KLINGONS IN YOUR QUADRANT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     TO ALL KLINGONS IN YOUR QUADRANT");strcat(buf,"\n");fputs(buf,fh); };
    // 12280 PRINT "  OPTION 3 = STARBASE NAVIGATION DATA"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  OPTION 3 = STARBASE NAVIGATION DATA");strcat(buf,"\n");fputs(buf,fh); };
    // 12290 PRINT "     WHICH GIVES DIRECTION AND DISTANCE TO ANY STARBASE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     WHICH GIVES DIRECTION AND DISTANCE TO ANY STARBASE");strcat(buf,"\n");fputs(buf,fh); };
    // 12300 PRINT "     WITHIN YOUR QUADRANT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     WITHIN YOUR QUADRANT");strcat(buf,"\n");fputs(buf,fh); };
    // 12310 PRINT "  OPTION 4 = DIRECTION/DISTANCE CALCULATOR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  OPTION 4 = DIRECTION/DISTANCE CALCULATOR");strcat(buf,"\n");fputs(buf,fh); };
    // 12320 PRINT "     WHICH ALLOWS YOU TO ENTER COORDINATES FOR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     WHICH ALLOWS YOU TO ENTER COORDINATES FOR");strcat(buf,"\n");fputs(buf,fh); };
    // 12330 PRINT "     DIRECTION/DISTANCE CALCULATIONS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     DIRECTION/DISTANCE CALCULATIONS.");strcat(buf,"\n");fputs(buf,fh); };
    // 12340 PRINT "  OPTION 5 = GALACTIC 'REGION NAME' MAP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  OPTION 5 = GALACTIC 'REGION NAME' MAP");strcat(buf,"\n");fputs(buf,fh); };
    // 12350 PRINT "     WHICH PRINTS THE NAMES OF THE SIXTEEN MAJOR GALACTIC"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     WHICH PRINTS THE NAMES OF THE SIXTEEN MAJOR GALACTIC");strcat(buf,"\n");fputs(buf,fh); };
    // 12360 PRINT "     REGIONS REFERRED TO IN THE GAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     REGIONS REFERRED TO IN THE GAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 12370 GOTO 11280
    goto DspHelpPage01;

  Lbl_12380:
    // 12380 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM (VERSION "STREK7", 1/12/75 RCL)
    // 01010 REM
    // 01020 REM
    // 01030 REM ***         *** STAR TREK ***       ***
    // 01040 REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    // 01050 REM *** AS SEEN ON THE STAR TREK TV SHOW.
    // 01060 REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    // 01070 REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    // 01080 REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY 
    // 01090 REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974
    // 01100 REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    // 01110 REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    // 01120 REM *** ADDRESS TO
    // 01130 REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    // 01140 REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    // 01150 RANDOMIZE
    RANDOMIZE();
    // 01160 PRINT  TAB(15);"* * * STAR TREK * * *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"* * * STAR TREK * * *");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU NEED INSTRUCTIONS (YES/NO)");fputs(buf,fh); };
    // 01190 INPUT A$
    // Start of Basic INPUT statement 01190
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&tmpstr,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01190
    // 01200 IF A$<>"YES" GOTO 1270
    if(strcmp(tmpstr,"YES")!=0)goto GameStart;
    // 01210 PRINT "PLEASE WAIT  . . .";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE WAIT  . . .");fputs(buf,fh); };
    // 01220 GOSUB 11230
    Routine_11230();
    // 01230 REM
    // 01240 REM ===============================================================
    // 01250 REM
    // 01260 REM  PROGRAM BEGINS HERE .....

  GameStart:
    // 01270 DIM Q$(8)
    // 01280 FOR I = 1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 01290 Q$(I) = SPACE$(24)
        GLBpStr=SPACE$(24);
        QuadrantInfo[idx_i] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01300 NEXT I
        int dummy_1300=0; // Ignore this line.
    }; // End-For(idx_i)
    // 01310 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8)
    // 01320 LET T=INT(RND(1)*20+20)*100
    T_int = INT(RND(1)*20+20)*100;
    // 01330 LET P1=3.14159/4
    P1_int = 3.14/4;
    // 01340 LET T0=T
    StartStarDate = T_int;
    // 01350 LET T9=30
    CampaignLength = 30;
    // 01360 LET D0=0
    flgProtectedByStarbase = 0;
    // 01370 LET E0=3000
    InitialEnergy = 3000;
    // 01380 LET E=E0
    CurrentEnergy = InitialEnergy;
    // 01390 LET P=10
    PhotonTorpedoes = 10;
    // 01400 LET P0=P
    P0_int = PhotonTorpedoes;
    // 01410 LET S9=200
    S9_int = 200;
    // 01420 LET S=0
    EnterpriseSheilds = 0;
    // 01430 DEF FND(D)=SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    // 01440 REM
    // 01450 REM ===============================================================
    // 01460 REM
    // 01470 REM INITIALIZE INTERPRISE'S POSITION
    // 01480 LET Q1=INT(RND(1)*8+1)
    EnterpriseQuadrantX = INT(RND(1)*8+1);
    // 01490 LET Q2=INT(RND(1)*8+1)
    EnterpriseQuadrantY = INT(RND(1)*8+1);
    // 01500 LET S1=INT(RND(1)*8+1)
    EnterpriseSectorX = INT(RND(1)*8+1);
    // 01510 LET S2=INT(RND(1)*8+1)
    EnterpriseSectorY = INT(RND(1)*8+1);
    // 01520 MAT C=ZER
    for(int d0=0;d0<8;d0++){
        for(int d1=0;d1<1;d1++){
            C_int_arr[0][d0][d1]=0;
        }
    }
    // 01530 LET C(4,1)=-1
    C_int_arr[4][1] = -1;
    // 01540 LET C(3,1)=-1
    C_int_arr[3][1] = -1;
    // 01550 LET C(2,1)=-1
    C_int_arr[2][1] = -1;
    // 01560 LET C(4,2)=-1
    C_int_arr[4][2] = -1;
    // 01570 LET C(5,2)=-1
    C_int_arr[5][2] = -1;
    // 01580 LET C(6,2)=-1
    C_int_arr[6][2] = -1;
    // 01590 LET C(1,2)=1
    C_int_arr[1][2] = 1;
    // 01600 LET C(2,2)=1
    C_int_arr[2][2] = 1;
    // 01610 LET C(6,1)=1
    C_int_arr[6][1] = 1;
    // 01620 LET C(7,1)=1
    C_int_arr[7][1] = 1;
    // 01630 LET C(8,1)=1
    C_int_arr[8][1] = 1;
    // 01640 LET C(8,2)=1
    C_int_arr[8][2] = 1;
    // 01650 LET C(9,2)=1
    C_int_arr[9][2] = 1;
    // 01660 DIM D(8)
    // 01670 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 01680 LET D(I)=0
        D_int = 0;
        // 01690 NEXT I
        int dummy_1690=0; // Ignore this line.
    }; // End-For(idx_i)
    // 01700 DIM D$(8)
    // 01710 RESTORE
    Data_Index=0;
    RestoreData(0);
    // 01720 READ D$(1),D$(2),D$(3),D$(4),D$(5),D$(6),D$(7),D$(8)
    CommandNames[1] = Get_Data_String();
    CommandNames[2] = Get_Data_String();
    CommandNames[3] = Get_Data_String();
    CommandNames[4] = Get_Data_String();
    CommandNames[5] = Get_Data_String();
    CommandNames[6] = Get_Data_String();
    CommandNames[7] = Get_Data_String();
    CommandNames[8] = Get_Data_String();
    // 01730 DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    // 01740 DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    // 01750 LET G4$="III"
    GLBpStr="III";
    QuadrantNameSuffix = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01760 DIM G1$(16)
    // 01770 FOR I=1 TO 16
    for(idx_i=1;idx_i<=16;idx_i++){
        // 01780 READ G1$(I)
        QuadrantName[idx_i] = Get_Data_String();
        // 01790 NEXT I
        int dummy_1790=0; // Ignore this line.
    }; // End-For(idx_i)
    // 01800 DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    // 01810 DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    // 01820 DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    // 01830 LET B9=0
    StarbaseTotal = 0;
    // 01840 LET K9=0
    KlingonsTotal = 0;
    // 01850 LET A1$="NSLPTSDCX"
    GLBpStr="NSLPTSDCX";
    CommandInitials = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01860 REM
    // 01870 REM ===============================================================
    // 01880 REM
    // 01890 REM  SET UP WHAT EXISTS IN GALAXY ...
    // 01900 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 01910 FOR J=1 TO 8
        for(idx_j=1;idx_j<=8;idx_j++){
            // 01920 LET R1=RND(1)
            RandomNbr1 = RND(1);
            // 01930 IF R1>.98 GOTO 1980
            if(RandomNbr1>0.98)goto SectorKlingons3;
            // 01940 IF R1>.95 GOTO 2010
            if(RandomNbr1>0.95)goto SectorKlingons2;
            // 01950 IF R1>.8  GOTO 2040
            if(RandomNbr1>0.8)goto SectorKlingons1;
            // 01960 LET K3=0
            KlingonsSector = 0;
            // 01970 GOTO 2060
            goto NoKlingonsInSector;

  SectorKlingons3:
            // 01980 LET K3=3
            KlingonsSector = 3;
            // 01990 LET K9=K9+3
            KlingonsTotal = KlingonsTotal+3;
            // 02000 GOTO 2060
            goto NoKlingonsInSector;

  SectorKlingons2:
            // 02010 LET K3=2
            KlingonsSector = 2;
            // 02020 LET K9=K9+2
            KlingonsTotal = KlingonsTotal+2;
            // 02030 GOTO 2060
            goto NoKlingonsInSector;

  SectorKlingons1:
            // 02040 LET K3=1
            KlingonsSector = 1;
            // 02050 LET K9=K9+1
            KlingonsTotal = KlingonsTotal+1;

  NoKlingonsInSector:
            // 02060 LET R1=RND(1)
            RandomNbr1 = RND(1);
            // 02070 IF R1>.96 GOTO 2100
            if(RandomNbr1>0.96)goto SectorStarbase;
            // 02080 LET B3=0
            StarbaseSector = 0;
            // 02090 GOTO 2120
            goto NoStarbases;

  SectorStarbase:
            // 02100 LET B3=1
            StarbaseSector = 1;
            // 02110 LET B9=B9+1
            StarbaseTotal = StarbaseTotal+1;

  NoStarbases:
            // 02120 LET S3=INT(RND(1)*8+1)
            SectorStars = INT(RND(1)*8+1);
            // 02130 LET G(I,J)=K3*100+B3*10+S3
            SectorPopulation[idx_i][idx_j] = KlingonsSector*100+StarbaseSector*10+SectorStars;
            // 02140 REM K3=#KLINGONS B3=#STARBASES S3=#STARS
            // 02150 LET Z(I,J)=0
            Z_int_arr[idx_i][idx_j] = 0;
            // 02160 NEXT J
            int dummy_2160=0; // Ignore this line.
        }; // End-For(idx_j)
        // 02170 NEXT I
        int dummy_2170=0; // Ignore this line.
    }; // End-For(idx_i)
    // 02180 LET K7=K9
    K7_int = KlingonsTotal;
    // 02190 LET X$=""
    GLBpStr="";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02200 LET X0$=" IS "
    GLBpStr=" IS ";
    X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02210 IF B9<>0 GOTO 2270
    if(StarbaseTotal!=0)goto GotNufStarbases;
    // 02220 LET B9=1
    StarbaseTotal = 1;
    // 02230 IF G(6,3)>=200 GOTO 2260
    if(SectorPopulation[6][3]>=200)goto AddQ63Starbase;
    // 02240 LET G(6,3)=G(6,3)+100
    SectorPopulation[6][3] = SectorPopulation[6][3]+100;
    // 02250 LET K9=K9+1
    KlingonsTotal = KlingonsTotal+1;

  AddQ63Starbase:
    // 02260 LET G(6,3)=G(6,3)+10
    SectorPopulation[6][3] = SectorPopulation[6][3]+10;

  GotNufStarbases:
    // 02270 IF B9=1 GOTO 2320
    if(StarbaseTotal==1)goto EnterpriseOrders;
    // 02280 LET X$="S"
    GLBpStr="S";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02290 LET X0$=" ARE "
    GLBpStr=" ARE ";
    X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02300 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 02310 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };

  EnterpriseOrders:
    // 02320 PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR ORDERS ARE AS FOLLOWS:");strcat(buf,"\n");fputs(buf,fh); };
    // 02330 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 02340 PRINT "    DESTROY THE "K9" KLINGON WARSHIPS WHICH HAVE INVADED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    DESTROY THE "); b2c_INT(buf,KlingonsTotal);strcat(buf," KLINGON WARSHIPS WHICH HAVE INVADED");strcat(buf,"\n");fputs(buf,fh); };
    // 02350 PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS");strcat(buf,"\n");fputs(buf,fh); };
    // 02360 PRINT "  ON STARDATE"T0+T9"; THIS GIVES YOU"T9" DAYS.  THERE"X0$
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  ON STARDATE"); b2c_INT(buf,StartStarDate+CampaignLength);strcat(buf,"; THIS GIVES YOU"); b2c_INT(buf,CampaignLength);strcat(buf," DAYS.  THERE"); strcat(buf,X0_str);strcat(buf,"\n");fputs(buf,fh); };
    // 02370 PRINT " "B9"STARBASE";X$" IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," "); b2c_INT(buf,StarbaseTotal);strcat(buf,"STARBASE"); strcat(buf,X_str);strcat(buf," IN THE GALAXY FOR RESUPPLYING YOUR SHIP.");strcat(buf,"\n");fputs(buf,fh); };
    // 02380 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 02390 PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---");fputs(buf,fh); };
    // 02400 INPUT A$
    // Start of Basic INPUT statement 02400
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&tmpstr,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02400
    // 02410 REM
    // 02420 REM ===============================================================
    // 02430 REM
    // 02440 REM *** HERE ANY TIME ENTER NEW QUADRANT ...

  EnterNewQuadrant:
    // 02450 LET Z4=Q1
    Z4_int = EnterpriseQuadrantX;
    // 02460 LET Z5=Q2
    Z5_int = EnterpriseQuadrantY;
    // 02470 LET K3=0
    KlingonsSector = 0;
    // 02480 LET B3=0
    StarbaseSector = 0;
    // 02490 LET S3=0
    SectorStars = 0;
    // 02500 LET G5=0
    G5_int = 0;
    // 02510 LET D4=.5*RND(1)
    D4_int = 0.5*RND(1);
    // 02520 FOR I7 = 1 TO 8
    for(QuadIdx=1;QuadIdx<=8;QuadIdx++){
        // 02530 Q$(I7)=SPACE$(24)
        GLBpStr=SPACE$(24);
        QuadrantInfo[QuadIdx] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 02540 NEXT I7
        int dummy_2540=0; // Ignore this line.
    }; // End-For(QuadIdx)
    // 02550 IF Q1<1 GOTO 2760
    if(EnterpriseQuadrantX<1)goto Lbl_02760;
    // 02560 IF Q1>8 GOTO 2760
    if(EnterpriseQuadrantX>8)goto Lbl_02760;
    // 02570 IF Q2<1 GOTO 2760
    if(EnterpriseQuadrantY<1)goto Lbl_02760;
    // 02580 IF Q2>8 GOTO 2760
    if(EnterpriseQuadrantY>8)goto Lbl_02760;
    // 02590 GOSUB 11050
    Routine_11050();
    // 02600 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 02610 IF T<>T0 GOTO 2650
    if(T_int!=StartStarDate)goto MiddleOfGame;
    // 02620 PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED");strcat(buf,"\n");fputs(buf,fh); };
    // 02630 PRINT "IN THE GALACTIC QUADRANT, '"G2$"'."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN THE GALACTIC QUADRANT, '"); strcat(buf,QuadName);strcat(buf,"'.");strcat(buf,"\n");fputs(buf,fh); };
    // 02640 GOTO 2660
    goto Lbl_02660;

  MiddleOfGame:
    // 02650 PRINT "NOW ENTERING "G2$" QUADRANT ..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOW ENTERING "); strcat(buf,QuadName);strcat(buf," QUADRANT ...");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02660:
    // 02660 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 02670 LET X=G(Q1,Q2)*.01
    X_int = SectorPopulation[EnterpriseQuadrantX][EnterpriseQuadrantY]*0.01;
    // 02680 LET K3=INT(X)
    KlingonsSector = INT(X_int);
    // 02690 LET B3=INT((X-K3)*10)
    StarbaseSector = INT((X_int-KlingonsSector)*10);
    // 02700 LET S3=G(Q1,Q2)-INT(G(Q1,Q2)*.1)*10
    SectorStars = SectorPopulation[EnterpriseQuadrantX][EnterpriseQuadrantY]-INT(SectorPopulation[EnterpriseQuadrantX][EnterpriseQuadrantY]*0.1)*10;
    // 02710 IF K3=0 GOTO 2750
    if(KlingonsSector==0)goto Lbl_02750;
    // 02720 PRINT "COMBAT AREA      CONDITION RED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMBAT AREA      CONDITION RED");strcat(buf,"\n");fputs(buf,fh); };
    // 02730 IF S>200 GOTO 2750
    if(EnterpriseSheilds>200)goto Lbl_02750;
    // 02740 PRINT "   SHIELDS DANGEROUSLY LOW"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   SHIELDS DANGEROUSLY LOW");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02750:
    // 02750 MAT K=ZER
    for(int d0=0;d0<2;d0++){
        for(int d1=0;d1<2;d1++){
            KlingonInfoLocAndDamage[0][d0][d1]=0;
        }
    }

  Lbl_02760:
    // 02760 FOR I=1 TO 3
    for(idx_i=1;idx_i<=3;idx_i++){
        // 02770 LET K(I,3)=0
        KlingonInfoLocAndDamage[idx_i][3] = 0;
        // 02780 NEXT I
        int dummy_2780=0; // Ignore this line.
    }; // End-For(idx_i)
    // 02790 REM
    // 02800 REM ===============================================================
    // 02810 REM
    // 02820 REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS
    // 02830 REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    // 02840 LET A$="<*>"
    GLBpStr="<*>";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02850 LET Z1=S1
    QuadY = EnterpriseSectorX;
    // 02860 LET Z2=S2
    QuadX = EnterpriseSectorY;
    // 02870 GOSUB 10610
    Routine_10610();
    // 02880 FOR I=1 TO K3
    for(idx_i=1;idx_i<=KlingonsSector;idx_i++){
        // 02890 GOSUB 10490
        Routine_10490();
        // 02900 LET A$="+++"
        GLBpStr="+++";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 02910 LET Z1=R1
        QuadY = RandomNbr1;
        // 02920 LET Z2=R2
        QuadX = RandomNbr2;
        // 02930 GOSUB 10610
        Routine_10610();
        // 02940 LET K(I,1)=R1
        KlingonInfoLocAndDamage[idx_i][1] = RandomNbr1;
        // 02950 LET K(I,2)=R2
        KlingonInfoLocAndDamage[idx_i][2] = RandomNbr2;
        // 02960 LET K(I,3)=200
        KlingonInfoLocAndDamage[idx_i][3] = 200;
        // 02970 NEXT I
        int dummy_2970=0; // Ignore this line.
    }; // End-For(idx_i)
    // 02980 FOR I=1 TO B3
    for(idx_i=1;idx_i<=StarbaseSector;idx_i++){
        // 02990 GOSUB 10490
        Routine_10490();
        // 03000 LET A$=">!<"
        GLBpStr=">!<";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 03010 LET Z1=R1
        QuadY = RandomNbr1;
        // 03020 LET Z2=R2
        QuadX = RandomNbr2;
        // 03030 GOSUB 10610
        Routine_10610();
        // 03040 LET B4=Z1
        B4_int = QuadY;
        // 03050 LET B5=Z2
        B5_int = QuadX;
        // 03060 NEXT I
        int dummy_3060=0; // Ignore this line.
    }; // End-For(idx_i)
    // 03070 FOR I=1 TO S3
    for(idx_i=1;idx_i<=SectorStars;idx_i++){
        // 03080 GOSUB 10490
        Routine_10490();
        // 03090 LET A$=" * "
        GLBpStr=" * ";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 03100 LET Z1=R1
        QuadY = RandomNbr1;
        // 03110 LET Z2=R2
        QuadX = RandomNbr2;
        // 03120 GOSUB 10610
        Routine_10610();
        // 03130 NEXT I
        int dummy_3130=0; // Ignore this line.
    }; // End-For(idx_i)

  Lbl_03140:
    // 03140 GOSUB 9590
    Routine_09590();

  Lbl_03150:
    // 03150 IF S+E<=10 GOTO 3180
    if(EnterpriseSheilds+CurrentEnergy<=10)goto Lbl_03180;
    // 03160 IF E>10 GOTO 3220
    if(CurrentEnergy>10)goto Lbl_03220;
    // 03170 IF D(7)>=0 GOTO 3220
    if(D_int>=0)goto Lbl_03220;

  Lbl_03180:
    // 03180 PRINT CHR$(7)"** FATAL ERROR **"CHR$(7)"   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(7));strcat(buf,"** FATAL ERROR **");strcpy(buf,CHR$(7));strcat(buf,"   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!");strcat(buf,"\n");fputs(buf,fh); };
    // 03190 PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL");strcat(buf,"\n");fputs(buf,fh); };
    // 03200 PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!");strcat(buf,"\n");fputs(buf,fh); };
    // 03210 GOTO 7460
    goto Lbl_07460;

  Lbl_03220:
    // 03220 PRINT "COMMAND";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMMAND");fputs(buf,fh); };
    // 03230 INPUT A$
    // Start of Basic INPUT statement 03230
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&tmpstr,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03230
    // 03240 FOR I=1 TO 9
    for(idx_i=1;idx_i<=9;idx_i++){
        // 03250 IF MID$(A$,1,1)<>MID$(A1$,I,1) GOTO 3310
        if(MID$(tmpstr,1,1)==MID$(CommandInitials,idx_i,1))goto NextCmdInitial;
        // 03260 IF I<>2 GOTO 3300
        if(idx_i!=2)goto GotCmdIndex;
        // 03270 IF LEN(A$)<2 GOTO 3300
        if(LEN(tmpstr)<2)goto GotCmdIndex;
        // 03280 IF MID$(A$,2,1)="R" GOTO 3300
        if(MID$(tmpstr,2,1)=='R')goto GotCmdIndex;
        // 03290 LET I=6
        idx_i = 6;

  GotCmdIndex:
        // 03300 ON I GOTO 3480, 3140, 5250, 5540, 6010, 6950, 7140, 7680, 7490
        switch((int)(idx_i)){
            case 1: goto Lbl_03480;
            case 2: goto Lbl_03140;
            case 3: goto Lbl_05250;
            case 4: goto Lbl_05540;
            case 5: goto Lbl_06010;
            case 6: goto Lbl_06950;
            case 7: goto Lbl_07140;
            case 8: goto Lbl_07680;
            case 9: goto Lbl_07490;
            default: break; 
        };

  NextCmdInitial:
        // 03310 NEXT I
        int dummy_3310=0; // Ignore this line.
    }; // End-For(idx_i)
    // 03320 PRINT "ENTER ONE OF THE FOLLOWING:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER ONE OF THE FOLLOWING:");strcat(buf,"\n");fputs(buf,fh); };
    // 03330 PRINT "  NAV (TO SET COURSE)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  NAV (TO SET COURSE)");strcat(buf,"\n");fputs(buf,fh); };
    // 03340 PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  SRS (FOR SHORT RANGE SENSOR SCAN)");strcat(buf,"\n");fputs(buf,fh); };
    // 03350 PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  LRS (FOR LONG RANGE SENSOR SCAN)");strcat(buf,"\n");fputs(buf,fh); };
    // 03360 PRINT "  PHA (TO FIRE PHASERS)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  PHA (TO FIRE PHASERS)");strcat(buf,"\n");fputs(buf,fh); };
    // 03370 PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  TOR (TO FIRE PHOTON TORPEDOES)");strcat(buf,"\n");fputs(buf,fh); };
    // 03380 PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  SHE (TO RAISE OR LOWER SHEILDS)");strcat(buf,"\n");fputs(buf,fh); };
    // 03390 PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  DAM (FOR DAMAGE CONTROL REPORT)");strcat(buf,"\n");fputs(buf,fh); };
    // 03400 PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  COM (TO CALL ON LIBRARY-COMPUTER)");strcat(buf,"\n");fputs(buf,fh); };
    // 03410 PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  XXX (TO RESIGN YOUR COMMAND)");strcat(buf,"\n");fputs(buf,fh); };
    // 03420 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 03430 GOTO 3150
    goto Lbl_03150;
    // 03440 REM
    // 03450 REM ===============================================================
    // 03460 REM
    // 03470 REM  COURSE CONTROL BEGINS HERE

  Lbl_03480:
    // 03480 PRINT "COURSE(1-9)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COURSE(1-9)");fputs(buf,fh); };
    // 03490 INPUT C1
    // Start of Basic INPUT statement 03490
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03490
    // 03500 IF C1>=1 GOTO 3530
    if(C1_int>=1)goto Lbl_03530;

  Lbl_03510:
    // 03510 PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'");strcat(buf,"\n");fputs(buf,fh); };
    // 03520 GOTO 3150
    goto Lbl_03150;

  Lbl_03530:
    // 03530 IF C1<9 GOTO 3560
    if(C1_int<9)goto Lbl_03560;
    // 03540 IF C1>9 GOTO 3510
    if(C1_int>9)goto Lbl_03510;
    // 03550 GOTO 3510
    goto Lbl_03510;

  Lbl_03560:
    // 03560 PRINT "WARP FACTOR (0-8)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WARP FACTOR (0-8)");fputs(buf,fh); };
    // 03570 INPUT W1
    // Start of Basic INPUT statement 03570
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&WarpFactor,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03570
    // 03580 IF W1 > 0 GOTO 3620
    if(WarpFactor>0)goto Lbl_03620;
    // 03590 PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO ");strcat(buf,"\n");fputs(buf,fh); };
    // 03600 PRINT "          SET WARP "W1" !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"          SET WARP "); b2c_INT(buf,WarpFactor);strcat(buf," !");strcat(buf,"\n");fputs(buf,fh); };
    // 03610 GOTO 3150
    goto Lbl_03150;

  Lbl_03620:
    // 03620 IF W1<=8 GOTO 3660
    if(WarpFactor<=8)goto Lbl_03660;
    // 03630 PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T");strcat(buf,"\n");fputs(buf,fh); };
    // 03640 PRINT "         TAKE WARP "W1"!/"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"         TAKE WARP "); b2c_INT(buf,WarpFactor);strcat(buf,"!/");strcat(buf,"\n");fputs(buf,fh); };
    // 03650 GOTO 3150
    goto Lbl_03150;

  Lbl_03660:
    // 03660 IF D(1)>=0 GOTO 3700
    if(D_int>=0)goto Lbl_03700;
    // 03670 IF W1<=0.2 GOTO 3700
    if(WarpFactor<=0.2)goto Lbl_03700;
    // 03680 PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2");strcat(buf,"\n");fputs(buf,fh); };
    // 03690 GOTO 3480
    goto Lbl_03480;

  Lbl_03700:
    // 03700 LET N=INT(W1*8+.5)
    N_int_arr[0] = INT(WarpFactor*8+0.5);
    // 03710 IF E-N>=0 GOTO 3830
    if(CurrentEnergy-N_int_arr[0]>=0)goto Lbl_03830;
    // 03720 PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE");strcat(buf,"\n");fputs(buf,fh); };
    // 03730 PRINT "   FOR MANEUVERING AT WARP"W1"!'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   FOR MANEUVERING AT WARP"); b2c_INT(buf,WarpFactor);strcat(buf,"!'");strcat(buf,"\n");fputs(buf,fh); };
    // 03740 IF S<N-E GOTO 3150
    if(EnterpriseSheilds<N_int_arr[0]-CurrentEnergy)goto Lbl_03150;
    // 03750 IF D(7)<0 GOTO 3150
    if(D_int<0)goto Lbl_03150;
    // 03760 PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"S" UNITS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DEFLECTOR CONTROL ROOM ACKNOWLEGES"); b2c_INT(buf,EnterpriseSheilds);strcat(buf," UNITS");strcat(buf,"\n");fputs(buf,fh); };
    // 03770 PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 03780 GOTO 6950
    goto Lbl_06950;
    // 03790 REM
    // 03800 REM ===============================================================
    // 03810 REM
    // 03820 REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...

  Lbl_03830:
    // 03830 FOR I=1 TO K3
    for(idx_i=1;idx_i<=KlingonsSector;idx_i++){
        // 03840 IF K(1,3)<=0 GOTO 3940
        if(KlingonInfoLocAndDamage[1][3]<=0)goto Lbl_03940;
        // 03850 LET A$="   "
        GLBpStr="   ";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 03860 LET Z1=K(I,1)
        QuadY = KlingonInfoLocAndDamage[idx_i][1];
        // 03870 LET Z2=K(I,2)
        QuadX = KlingonInfoLocAndDamage[idx_i][2];
        // 03880 GOSUB 10610
        Routine_10610();
        // 03890 GOSUB 10490
        Routine_10490();
        // 03900 LET K(I,1)=Z1
        KlingonInfoLocAndDamage[idx_i][1] = QuadY;
        // 03910 LET K(I,2)=Z2
        KlingonInfoLocAndDamage[idx_i][2] = QuadX;
        // 03920 LET A$="+++"
        GLBpStr="+++";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 03930 GOSUB 10610
        Routine_10610();

  Lbl_03940:
        // 03940 NEXT I
        int dummy_3940=0; // Ignore this line.
    }; // End-For(idx_i)
    // 03950 GOSUB 9320
    Routine_09320();
    // 03960 LET D1=0
    D1_int = 0;
    // 03970 LET D6=W1
    D6_int = WarpFactor;
    // 03980 IF W1<1 GOTO 4040
    if(WarpFactor<1)goto Lbl_04040;
    // 03990 LET D6=1
    D6_int = 1;
    // 04000 REM
    // 04010 REM ===============================================================
    // 04020 REM
    // 04030 REM MAKE REPAIRS TO SHIP

  Lbl_04040:
    // 04040 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 04050 IF D(I)>=0 GOTO 4150
        if(D_int>=0)goto Lbl_04150;
        // 04060 LET D(I)=D(I)+6
        D_int = D_int+6;
        // 04070 IF D(I)<0 GOTO 4150
        if(D_int<0)goto Lbl_04150;
        // 04080 IF D1=1 GOTO 4110
        if(D1_int==1)goto Lbl_04110;
        // 04090 LET D1=1
        D1_int = 1;
        // 04100 PRINT "DAMAGE CONTROL REPORT:"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DAMAGE CONTROL REPORT:");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_04110:
        // 04110 PRINT TAB(8);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,8);fputs(buf,fh); };
        // 04120 LET R1=I
        RandomNbr1 = idx_i;
        // 04130 GOSUB 10850
        Routine_10850();
        // 04140 PRINT " REPAIR COMPLETED"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," REPAIR COMPLETED");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_04150:
        // 04150 NEXT I
        int dummy_4150=0; // Ignore this line.
    }; // End-For(idx_i)
    // 04160 REM
    // 04170 REM ===============================================================
    // 04180 REM
    // 04190 REM DAMAGE/IMPROVEMENT DURING SOME VES
    // 04200 IF RND(1)>.2 GOTO 4400
    if(RND(1)>0.2)goto Lbl_04400;
    // 04210 LET R1=INT(RND(1)*8+1)
    RandomNbr1 = INT(RND(1)*8+1);
    // 04220 IF RND(1)>=.6 GOTO 4300
    if(RND(1)>=0.6)goto Lbl_04300;
    // 04230 LET D(R1)=D(R1)-(RND(1)*5+1)
    D_int = D_int-(RND(1)*5+1);
    // 04240 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 04250 PRINT "DAMAGE CONTROL REPORT:";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DAMAGE CONTROL REPORT:");fputs(buf,fh); };
    // 04260 GOSUB 10850
    Routine_10850();
    // 04270 PRINT " DAMAGED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," DAMAGED");strcat(buf,"\n");fputs(buf,fh); };
    // 04280 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 04290 GOTO 4400
    goto Lbl_04400;

  Lbl_04300:
    // 04300 LET D(R1)=D(R1)+(RND(1)*3+1)
    D_int = D_int+(RND(1)*3+1);
    // 04310 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 04320 PRINT "DAMAGE CONTROL REPORT:";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DAMAGE CONTROL REPORT:");fputs(buf,fh); };
    // 04330 GOSUB 10850
    Routine_10850();
    // 04340 PRINT " STATE OF REPAIR IMPROVED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," STATE OF REPAIR IMPROVED");strcat(buf,"\n");fputs(buf,fh); };
    // 04350 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 04360 REM
    // 04370 REM ===============================================================
    // 04380 REM
    // 04390 REM BEGIN MOVING STARSHIP **

  Lbl_04400:
    // 04400 LET A$="   "
    GLBpStr="   ";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 04410 LET Z1=INT(S1)
    QuadY = INT(EnterpriseSectorX);
    // 04420 LET Z2=INT(S2)
    QuadX = INT(EnterpriseSectorY);
    // 04430 GOSUB 10610
    Routine_10610();
    // 04440 LET X1=-SIN((C1-1)*P1)
    X1_int = -SIN((C1_int-1)*P1_int);
    // 04450 LET X=S1
    X_int = EnterpriseSectorX;
    // 04460 LET Y=S2
    Y_int = EnterpriseSectorY;
    // 04470 LET X2= COS((C1-1)*P1)
    X2_int = COS((C1_int-1)*P1_int);
    // 04480 LET Q4=Q1
    Q4_int = EnterpriseQuadrantX;
    // 04490 LET Q5=Q2
    Q5_int = EnterpriseQuadrantY;
    // 04500 FOR I=1 TO N
    for(idx_i=1;idx_i<=N_int_arr[0];idx_i++){
        // 04510 LET S1=S1+X1
        EnterpriseSectorX = EnterpriseSectorX+X1_int;
        // 04520 LET S2=S2+X2
        EnterpriseSectorY = EnterpriseSectorY+X2_int;
        // 04530 IF S1<0.5 GOTO 4790
        if(EnterpriseSectorX<0.5)goto Lbl_04790;
        // 04540 IF S1>=8.5 GOTO 4790
        if(EnterpriseSectorX>=8.5)goto Lbl_04790;
        // 04550 IF S2<0.5 GOTO 4790
        if(EnterpriseSectorY<0.5)goto Lbl_04790;
        // 04560 IF S2>=8.5 GOTO 4790
        if(EnterpriseSectorY>=8.5)goto Lbl_04790;
        // 04570 IF MID$(Q$(INT(S1+.5)),(3*INT(S2+.5)-2),3) = "   " GOTO 4630
        if(MID$(QuadrantInfo[INT(EnterpriseSectorX+0.5)],(3*INT(EnterpriseSectorY+0.5)-2),3)=='   ')goto Lbl_04630;
        // 04580 LET S1=S1-X1
        EnterpriseSectorX = EnterpriseSectorX-X1_int;
        // 04590 LET S2=S2-X2
        EnterpriseSectorY = EnterpriseSectorY-X2_int;
        // 04600 PRINT "WARP ENGINES SHUT DOWN AT SECTOR "INT(S1+.5);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WARP ENGINES SHUT DOWN AT SECTOR ");b2c_INT(buf,INT(EnterpriseSectorX+0.5));fputs(buf,fh); };
        // 04610 PRINT ","INT(S2+.5)" DUE TO BAD NAVIGATION"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,",");b2c_INT(buf,INT(EnterpriseSectorY+0.5));strcat(buf," DUE TO BAD NAVIGATION");strcat(buf,"\n");fputs(buf,fh); };
        // 04620 GOTO 4640
        goto Lbl_04640;

  Lbl_04630:
        // 04630 NEXT I
        int dummy_4630=0; // Ignore this line.
    }; // End-For(idx_i)

  Lbl_04640:
    // 04640 LET A$="<*>"
    GLBpStr="<*>";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 04650 S1=INT(S1+0.5)
    EnterpriseSectorX = INT(EnterpriseSectorX+0.5);
    // 04660 S2=INT(S2+0.5)
    EnterpriseSectorY = INT(EnterpriseSectorY+0.5);
    // 04670 LET Z1=INT(S1)
    QuadY = INT(EnterpriseSectorX);
    // 04680 LET Z2=INT(S2)
    QuadX = INT(EnterpriseSectorY);
    // 04690 GOSUB 10610
    Routine_10610();
    // 04700 GOSUB 9190
    Routine_09190();
    // 04710 LET T8=1
    T8_int = 1;
    // 04720 IF W1>=1 GOTO 4740
    if(WarpFactor>=1)goto Lbl_04740;
    // 04730 LET T8=.1*INT(10*W1)
    T8_int = 0.1*INT(10*WarpFactor);

  Lbl_04740:
    // 04740 LET T=T+T8
    T_int = T_int+T8_int;
    // 04750 IF T>T0+T9 GOTO 7440
    if(T_int>StartStarDate+CampaignLength)goto Lbl_07440;
    // 04760 REM SEE IF DOCKED, THEN GET COMMAND
    // 04770 GOTO 3140
    goto Lbl_03140;
    // 04780 REM EXCEEDED QUADRANT LIMITS

  Lbl_04790:
    // 04790 LET X=8*Q1+X+N*X1
    X_int = 8*EnterpriseQuadrantX+X_int+N_int_arr[0]*X1_int;
    // 04800 LET Y=8*Q2+Y+N*X2
    Y_int = 8*EnterpriseQuadrantY+Y_int+N_int_arr[0]*X2_int;
    // 04810 LET Q1=INT(X/8)
    EnterpriseQuadrantX = INT(X_int/8);
    // 04820 LET Q2=INT(Y/8)
    EnterpriseQuadrantY = INT(Y_int/8);
    // 04830 LET S1=INT(X-Q1*8)
    EnterpriseSectorX = INT(X_int-EnterpriseQuadrantX*8);
    // 04840 LET S2=INT(Y-Q2*8)
    EnterpriseSectorY = INT(Y_int-EnterpriseQuadrantY*8);
    // 04850 LET X5=0
    X5_int = 0;
    // 04860 IF S1<>0 GOTO 4900
    if(EnterpriseSectorX!=0)goto Lbl_04900;
    // 04870 LET Q1=Q1-1
    EnterpriseQuadrantX = EnterpriseQuadrantX-1;
    // 04880 LET S1=8
    EnterpriseSectorX = 8;
    // 04890 LET X5=0
    X5_int = 0;

  Lbl_04900:
    // 04900 IF S2<>0 GOTO 4940
    if(EnterpriseSectorY!=0)goto Lbl_04940;
    // 04910 LET Q2=Q2-1
    EnterpriseQuadrantY = EnterpriseQuadrantY-1;
    // 04920 LET S2=8
    EnterpriseSectorY = 8;
    // 04930 LET X5=0
    X5_int = 0;

  Lbl_04940:
    // 04940 IF Q1>=1 GOTO 4980
    if(EnterpriseQuadrantX>=1)goto Lbl_04980;
    // 04950 LET X5=1
    X5_int = 1;
    // 04960 LET Q1=1
    EnterpriseQuadrantX = 1;
    // 04970 LET S1=1
    EnterpriseSectorX = 1;

  Lbl_04980:
    // 04980 IF Q1<=8 GOTO 5020
    if(EnterpriseQuadrantX<=8)goto Lbl_05020;
    // 04990 LET X5=1
    X5_int = 1;
    // 05000 LET Q1=8
    EnterpriseQuadrantX = 8;
    // 05010 LET S1=8
    EnterpriseSectorX = 8;

  Lbl_05020:
    // 05020 IF Q2>=1 GOTO 5060
    if(EnterpriseQuadrantY>=1)goto Lbl_05060;
    // 05030 LET X5=1
    X5_int = 1;
    // 05040 LET Q2=1
    EnterpriseQuadrantY = 1;
    // 05050 LET S2=1
    EnterpriseSectorY = 1;

  Lbl_05060:
    // 05060 IF Q2<=8 GOTO 5100
    if(EnterpriseQuadrantY<=8)goto Lbl_05100;
    // 05070 LET X5=1
    X5_int = 1;
    // 05080 LET Q2=8
    EnterpriseQuadrantY = 8;
    // 05090 LET S2=8
    EnterpriseSectorY = 8;

  Lbl_05100:
    // 05100 IF X5=0 GOTO 5170
    if(X5_int==0)goto Lbl_05170;
    // 05110 PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:");strcat(buf,"\n");fputs(buf,fh); };
    // 05120 PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER");strcat(buf,"\n");fputs(buf,fh); };
    // 05130 PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'");strcat(buf,"\n");fputs(buf,fh); };
    // 05140 PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN");strcat(buf,"\n");fputs(buf,fh); };
    // 05150 PRINT "   AT SECTOR "S1","S2" OF QUADRANT "Q1","Q2".'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   AT SECTOR "); b2c_INT(buf,EnterpriseSectorX);strcat(buf,","); b2c_INT(buf,EnterpriseSectorY);strcat(buf," OF QUADRANT "); b2c_INT(buf,EnterpriseQuadrantX);strcat(buf,","); b2c_INT(buf,EnterpriseQuadrantY);strcat(buf,".'");strcat(buf,"\n");fputs(buf,fh); };
    // 05160 IF T>T0+T9 GOTO 7440
    if(T_int>StartStarDate+CampaignLength)goto Lbl_07440;

  Lbl_05170:
    // 05170 IF 8*Q1+Q2=8*Q4+Q5 GOTO 4640
    if(8*EnterpriseQuadrantX+EnterpriseQuadrantY==8*Q4_int+Q5_int)goto Lbl_04640;
    // 05180 LET T=T+1
    T_int = T_int+1;
    // 05190 GOSUB 9190
    Routine_09190();
    // 05200 GOTO 2450
    goto EnterNewQuadrant;
    // 05210 REM
    // 05220 REM ===============================================================
    // 05230 REM
    // 05240 REM L.R. SENSOR SCAN CODE ***

  Lbl_05250:
    // 05250 IF D(3)>=0 GOTO 5280
    if(D_int>=0)goto Lbl_05280;
    // 05260 PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LONG RANGE SENSORS ARE INOPERABLE");strcat(buf,"\n");fputs(buf,fh); };
    // 05270 GOTO 3150
    goto Lbl_03150;

  Lbl_05280:
    // 05280 PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"Q1","Q2
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LONG RANGE SENSOR SCAN FOR QUADRANT"); b2c_INT(buf,EnterpriseQuadrantX);strcat(buf,","); b2c_INT(buf,EnterpriseQuadrantY);strcat(buf,"\n");fputs(buf,fh); };
    // 05290 LET O1$="..................."
    GLBpStr="...................";
    O1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 05300 PRINT O1$
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O1_str);strcat(buf,"\n");fputs(buf,fh); };
    // 05310 FOR I=Q1-1 TO Q1+1
    for(idx_i=EnterpriseQuadrantX-1;idx_i<=EnterpriseQuadrantX+1;idx_i++){
        // 05320 REM    DIM N(3)
        // 05330 FOR I1=1 TO 3
        for(I1_int=1;I1_int<=3;I1_int++){
            // 05340 LET N(I1)=0
            N_int_arr[I1_int] = 0;
            // 05350 NEXT I1
            int dummy_5350=0; // Ignore this line.
        }; // End-For(I1_int)
        // 05360 FOR J=Q2-1 TO Q2+1
        for(idx_j=EnterpriseQuadrantY-1;idx_j<=EnterpriseQuadrantY+1;idx_j++){
            // 05370 IF I<1 GOTO 5450
            if(idx_i<1)goto Lbl_05450;
            // 05380 IF I>8 GOTO 5450
            if(idx_i>8)goto Lbl_05450;
            // 05390 IF J<1 GOTO 5430
            if(idx_j<1)goto Lbl_05430;
            // 05400 IF J>8 GOTO 5430
            if(idx_j>8)goto Lbl_05430;
            // 05410 LET N(J-Q2+2)=G(I,J)
            N_int_arr[idx_j-EnterpriseQuadrantY+2] = SectorPopulation[idx_i][idx_j];
            // 05420 LET Z(I,J)=G(I,J)
            Z_int_arr[idx_i][idx_j] = SectorPopulation[idx_i][idx_j];

  Lbl_05430:
            // 05430 NEXTJ
            int dummy_5430=0; // Ignore this line.
        }; // End-For(idx_j)
        // 05440 REM   DIM P1$(20)

  Lbl_05450:
        // 05450 LET P1$=": ### : ### : ### :"
        GLBpStr=": ### : ### : ### :";
        P1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 05460 PRINT USING P1$,N(1),N(2),N(3)
        b2c_printf(b2c_ConvertUsingFormatStr(P1_str),N_int_arr[1],"\n");
        // 05470 PRINT O1$
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O1_str);strcat(buf,"\n");fputs(buf,fh); };
        // 05480 NEXT I
        int dummy_5480=0; // Ignore this line.
    }; // End-For(idx_i)
    // 05490 GOTO 3150
    goto Lbl_03150;
    // 05500 REM
    // 05510 REM ===============================================================
    // 05520 REM
    // 05530 REM *** PHASER CONTROL CODE BEGINS HERE

  Lbl_05540:
    // 05540 IF K3>0 GOTO 5580
    if(KlingonsSector>0)goto Lbl_05580;
    // 05550 PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW");strcat(buf,"\n");fputs(buf,fh); };
    // 05560 PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  NO ENEMY SHIPS IN THIS QUADRANT.'");strcat(buf,"\n");fputs(buf,fh); };
    // 05570 GOTO 3150
    goto Lbl_03150;

  Lbl_05580:
    // 05580 IF D(4)>=0 GOTO 5610
    if(D_int>=0)goto Lbl_05610;
    // 05590 PRINT "PHASERS INOPERATIVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PHASERS INOPERATIVE");strcat(buf,"\n");fputs(buf,fh); };
    // 05600 GOTO 3150
    goto Lbl_03150;

  Lbl_05610:
    // 05610 IF D(8)>=0 GOTO 5630
    if(D_int>=0)goto Lbl_05630;
    // 05620 PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER FAILURE HAMPERS ACCURACY");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_05630:
    // 05630 PRINT "PHASERS LOCKED ON TARGET;  "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PHASERS LOCKED ON TARGET;  ");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_05640:
    // 05640 PRINT "ENERGY AVAILABLE ="E
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENERGY AVAILABLE ="); b2c_INT(buf,CurrentEnergy);strcat(buf,"\n");fputs(buf,fh); };
    // 05650 PRINT "NUMBER OF UNITS TO FIRE:";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NUMBER OF UNITS TO FIRE:");fputs(buf,fh); };
    // 05660 INPUT X
    // Start of Basic INPUT statement 05660
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 05660
    // 05670 IF X<=0 GOTO 3150
    if(X_int<=0)goto Lbl_03150;
    // 05680 IF E-X<0 GOTO 5640
    if(CurrentEnergy-X_int<0)goto Lbl_05640;
    // 05690 LET E=E-X
    CurrentEnergy = CurrentEnergy-X_int;
    // 05700 GOSUB 9320
    Routine_09320();
    // 05710 IF D(7)>=0 GOTO 5730
    if(D_int>=0)goto Lbl_05730;
    // 05720 LET X=X*RND(1)
    X_int = X_int*RND(1);

  Lbl_05730:
    // 05730 LET H1=INT(X/K3)
    H1_int = INT(X_int/KlingonsSector);
    // 05740 FOR I=1 TO 3
    for(idx_i=1;idx_i<=3;idx_i++){
        // 05750 IF K(I,3)<=0 GOTO 5950
        if(KlingonInfoLocAndDamage[idx_i][3]<=0)goto Lbl_05950;
        // 05760 LET H=INT((H1/FND(0))*(RND(1)*2))
        KlingonHitDamage = INT((H1_int/FND_int_arr[0])*(RND(1)*2));
        // 05770 IF H>.15*K(I,3) GOTO 5810
        if(KlingonHitDamage>0.15*KlingonInfoLocAndDamage[idx_i][3])goto Lbl_05810;
        // 05780 PRINT "SENSORS SHOW NO DAMAGE"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SENSORS SHOW NO DAMAGE");strcat(buf,"\n");fputs(buf,fh); };
        // 05790 PRINT "    TO ENEMY AT "K(I,1)","K(I,2)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TO ENEMY AT "); b2c_INT(buf,KlingonInfoLocAndDamage[idx_i][1]);strcat(buf,","); b2c_INT(buf,KlingonInfoLocAndDamage[idx_i][2]);strcat(buf,"\n");fputs(buf,fh); };
        // 05800 GOTO 5950
        goto Lbl_05950;

  Lbl_05810:
        // 05810 LET K(I,3)=K(I,3)-H
        KlingonInfoLocAndDamage[idx_i][3] = KlingonInfoLocAndDamage[idx_i][3]-KlingonHitDamage;
        // 05820 PRINT H" UNIT HIT ON KLINGON AT SECTOR "K(I,1)","K(I,2)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,KlingonHitDamage);strcat(buf," UNIT HIT ON KLINGON AT SECTOR "); b2c_INT(buf,KlingonInfoLocAndDamage[idx_i][1]);strcat(buf,","); b2c_INT(buf,KlingonInfoLocAndDamage[idx_i][2]);strcat(buf,"\n");fputs(buf,fh); };
        // 05830 IF K(I,3)<=0 GOTO 5860
        if(KlingonInfoLocAndDamage[idx_i][3]<=0)goto Lbl_05860;
        // 05840 PRINT "   (SENSORS SHOW"K(I,3)" UNITS REMAINING)"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   (SENSORS SHOW"); b2c_INT(buf,KlingonInfoLocAndDamage[idx_i][3]);strcat(buf," UNITS REMAINING)");strcat(buf,"\n");fputs(buf,fh); };
        // 05850 GOTO 5950
        goto Lbl_05950;

  Lbl_05860:
        // 05860 PRINT " *** KLINGON DESTROYED ***"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," *** KLINGON DESTROYED ***");strcat(buf,"\n");fputs(buf,fh); };
        // 05870 LET K3=K3-1
        KlingonsSector = KlingonsSector-1;
        // 05880 LET K9=K9-1
        KlingonsTotal = KlingonsTotal-1;
        // 05890 A$="   "
        GLBpStr="   ";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 05900 LET Z1=K(I,1)
        QuadY = KlingonInfoLocAndDamage[idx_i][1];
        // 05910 LET Z2=K(I,2)
        QuadX = KlingonInfoLocAndDamage[idx_i][2];
        // 05920 GOSUB 10610
        Routine_10610();
        // 05930 LET G(Q1,Q2)=K3*100+B3*10+S3
        SectorPopulation[EnterpriseQuadrantX][EnterpriseQuadrantY] = KlingonsSector*100+StarbaseSector*10+SectorStars;
        // 05940 IF K9<=0 GOTO 7590
        if(KlingonsTotal<=0)goto Lbl_07590;

  Lbl_05950:
        // 05950 NEXT I
        int dummy_5950=0; // Ignore this line.
    }; // End-For(idx_i)
    // 05960 GOTO 3150
    goto Lbl_03150;
    // 05970 REM
    // 05980 REM ===============================================================
    // 05990 REM
    // 06000 REM PHOTON TORPEDO CODE BEGINS ***

  Lbl_06010:
    // 06010 IF D(5)>=0 GOTO 6040
    if(D_int>=0)goto Lbl_06040;
    // 06020 PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PHOTON TUBES ARE NOT OPERATIONAL ");strcat(buf,"\n");fputs(buf,fh); };
    // 06030 GOTO 3150
    goto Lbl_03150;

  Lbl_06040:
    // 06040 IF P>0 GOTO 6070
    if(PhotonTorpedoes>0)goto Lbl_06070;
    // 06050 PRINT "ALL PHOTON TORPEDOES EXPENDED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ALL PHOTON TORPEDOES EXPENDED");strcat(buf,"\n");fputs(buf,fh); };
    // 06060 GOTO 3150
    goto Lbl_03150;

  Lbl_06070:
    // 06070 PRINT "TORPEDO COURSE (1-9)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TORPEDO COURSE (1-9)");fputs(buf,fh); };
    // 06080 INPUT C1
    // Start of Basic INPUT statement 06080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 06080
    // 06090 IF C1>=1 GOTO 6120
    if(C1_int>=1)goto Lbl_06120;

  Lbl_06100:
    // 06100 PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'");strcat(buf,"\n");fputs(buf,fh); };
    // 06110 GOTO 3150
    goto Lbl_03150;

  Lbl_06120:
    // 06120 IF C1>9 GOTO 6100
    if(C1_int>9)goto Lbl_06100;
    // 06130 IF C1<9 GOTO 6160
    if(C1_int<9)goto Lbl_06160;
    // 06140 IF C1>=9 GOTO 6070
    if(C1_int>=9)goto Lbl_06070;
    // 06150 LET C1=1
    C1_int = 1;

  Lbl_06160:
    // 06160 LET X1=-SIN((C1-1)*P1)
    X1_int = -SIN((C1_int-1)*P1_int);
    // 06170 LET X2= COS((C1-1)*P1)
    X2_int = COS((C1_int-1)*P1_int);
    // 06180 IF ABS(X1)<ABS(X2) THEN 6230
    if(ABS(X1_int)<ABS(X2_int))goto Lbl_06230;
    // 06190 M9=ABS(1/X1)
    M9_int = ABS(1/X1_int);
    // 06200 X1=SGN(X1)
    X1_int = SGN(X1_int);
    // 06210 X2=X2*M9
    X2_int = X2_int*M9_int;
    // 06220 GOTO 6260
    goto Lbl_06260;

  Lbl_06230:
    // 06230 M9=ABS(1/X2)
    M9_int = ABS(1/X2_int);
    // 06240 X2=SGN(X2)
    X2_int = SGN(X2_int);
    // 06250 X1=X1*M9
    X1_int = X1_int*M9_int;

  Lbl_06260:
    // 06260 LET E=E-2
    CurrentEnergy = CurrentEnergy-2;
    // 06270 LET X=S1
    X_int = EnterpriseSectorX;
    // 06280 LET Y=S2
    Y_int = EnterpriseSectorY;
    // 06290 LET P=P-1
    PhotonTorpedoes = PhotonTorpedoes-1;
    // 06300 PRINT "TORPEDO TRACK:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TORPEDO TRACK:");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_06310:
    // 06310 LET X=X+X1
    X_int = X_int+X1_int;
    // 06320 LET Y=Y+X2
    Y_int = Y_int+X2_int;
    // 06330 LET X9=INT(X+.5)
    X9_int = INT(X_int+0.5);
    // 06340 LET Y9=INT(Y+.5)
    Y9_int = INT(Y_int+0.5);
    // 06350 IF X9<1 GOTO 6880
    if(X9_int<1)goto Lbl_06880;
    // 06360 IF X9>=9 GOTO 6880
    if(X9_int>=9)goto Lbl_06880;
    // 06370 IF Y9<1 GOTO 6880
    if(Y9_int<1)goto Lbl_06880;
    // 06380 IF Y9>=9 GOTO 6880
    if(Y9_int>=9)goto Lbl_06880;
    // 06390 PRINT "               "X9","Y9
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"               "); b2c_INT(buf,X9_int);strcat(buf,","); b2c_INT(buf,Y9_int);strcat(buf,"\n");fputs(buf,fh); };
    // 06400 LET A$="   "
    GLBpStr="   ";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 06410 LET Z1=X9
    QuadY = X9_int;
    // 06420 LET Z2=Y9
    QuadX = Y9_int;
    // 06430 GOSUB 10920
    Routine_10920();
    // 06440 IF Z3<>0 GOTO 6310
    if(rtn!=0)goto Lbl_06310;
    // 06450 LET A$="+++"
    GLBpStr="+++";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 06460 LET Z1=X9
    QuadY = X9_int;
    // 06470 LET Z2=Y9
    QuadX = Y9_int;
    // 06480 GOSUB 10920
    Routine_10920();
    // 06490 IF Z3=0 GOTO 6600
    if(rtn==0)goto Lbl_06600;
    // 06500 PRINT "*** KLINGON DESTROYED ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*** KLINGON DESTROYED ***");strcat(buf,"\n");fputs(buf,fh); };
    // 06510 LET K3=K3-1
    KlingonsSector = KlingonsSector-1;
    // 06520 LET K9=K9-1
    KlingonsTotal = KlingonsTotal-1;
    // 06530 IF K9<=0 GOTO 7590
    if(KlingonsTotal<=0)goto Lbl_07590;
    // 06540 FOR I=1 TO 3
    for(idx_i=1;idx_i<=3;idx_i++){
        // 06550 IF X9<>K(I,1) GOTO 6570
        if(X9_int!=KlingonInfoLocAndDamage[idx_i][1])goto Lbl_06570;
        // 06560 IF Y9=K(I,2) GOTO 6580
        if(Y9_int==KlingonInfoLocAndDamage[idx_i][2])goto Lbl_06580;

  Lbl_06570:
        // 06570 NEXT I
        int dummy_6570=0; // Ignore this line.
    }; // End-For(idx_i)

  Lbl_06580:
    // 06580 LET K(I,3)=0
    KlingonInfoLocAndDamage[idx_i][3] = 0;
    // 06590 GOTO 6820
    goto Lbl_06820;

  Lbl_06600:
    // 06600 LET A$=" * "
    GLBpStr=" * ";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 06610 LET Z1=X9
    QuadY = X9_int;
    // 06620 LET Z2=Y9
    QuadX = Y9_int;
    // 06630 GOSUB 10920
    Routine_10920();
    // 06640 IF Z3=0 GOTO 6670
    if(rtn==0)goto Lbl_06670;
    // 06650 PRINT "STAR AT"X9;","Y9;" ABSORBED TORPEDO ENERGY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"STAR AT"); b2c_INT(buf,X9_int);strcat(buf,","); b2c_INT(buf,Y9_int);strcat(buf," ABSORBED TORPEDO ENERGY.");strcat(buf,"\n");fputs(buf,fh); };
    // 06660 GOTO 6890
    goto Lbl_06890;

  Lbl_06670:
    // 06670 LET A$=">!<"
    GLBpStr=">!<";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 06680 LET Z1=X9
    QuadY = X9_int;
    // 06690 LET Z2=Y9
    QuadX = Y9_int;
    // 06700 GOSUB 10920
    Routine_10920();
    // 06710 IF Z3=0 GOTO 6070
    if(rtn==0)goto Lbl_06070;
    // 06720 PRINT "*** STARBASE DESTROYED ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"*** STARBASE DESTROYED ***");strcat(buf,"\n");fputs(buf,fh); };
    // 06730 LET B3=B3-1
    StarbaseSector = StarbaseSector-1;
    // 06740 LET B9=B9-1
    StarbaseTotal = StarbaseTotal-1;
    // 06750 IF B9>0 GOTO 6790
    if(StarbaseTotal>0)goto Lbl_06790;
    // 06760 PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND");strcat(buf,"\n");fputs(buf,fh); };
    // 06770 PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!");strcat(buf,"\n");fputs(buf,fh); };
    // 06780 GOTO 7490
    goto Lbl_07490;

  Lbl_06790:
    // 06790 PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER");strcat(buf,"\n");fputs(buf,fh); };
    // 06800 PRINT "   COURT MARTIAL!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   COURT MARTIAL!");strcat(buf,"\n");fputs(buf,fh); };
    // 06810 LET D0=0
    flgProtectedByStarbase = 0;

  Lbl_06820:
    // 06820 LET A$="   "
    GLBpStr="   ";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 06830 LET Z1=X9
    QuadY = X9_int;
    // 06840 LET Z2=Y9
    QuadX = Y9_int;
    // 06850 GOSUB 10610
    Routine_10610();
    // 06860 LET G(Q1,Q2)=K3*100+B3*10+S3
    SectorPopulation[EnterpriseQuadrantX][EnterpriseQuadrantY] = KlingonsSector*100+StarbaseSector*10+SectorStars;
    // 06870 GOTO 6890
    goto Lbl_06890;

  Lbl_06880:
    // 06880 PRINT "TORPEDO MISSED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TORPEDO MISSED");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_06890:
    // 06890 GOSUB 9320
    Routine_09320();
    // 06900 GOTO 3150
    goto Lbl_03150;
    // 06910 REM
    // 06920 REM ===============================================================
    // 06930 REM
    // 06940 REM *** SHIELD CONTROL STARTS HERE

  Lbl_06950:
    // 06950 IF D(7)>=0 GOTO 6980
    if(D_int>=0)goto Lbl_06980;
    // 06960 PRINT "SHIELD CONTROL INOPERABLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHIELD CONTROL INOPERABLE");strcat(buf,"\n");fputs(buf,fh); };
    // 06970 GOTO 3150
    goto Lbl_03150;

  Lbl_06980:
    // 06980 PRINT "ENERGY AVAILABLE ="E+5". NUMBER OF UNITS TO SHIELDS:";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENERGY AVAILABLE ="); b2c_INT(buf,CurrentEnergy+5);strcat(buf,". NUMBER OF UNITS TO SHIELDS:");fputs(buf,fh); };
    // 06990 INPUT X
    // Start of Basic INPUT statement 06990
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 06990
    // 07000 IF X>=0 GOTO 7040
    if(X_int>=0)goto Lbl_07040;
    // 07010 IF S<>X GOTO 7040
    if(EnterpriseSheilds!=X_int)goto Lbl_07040;
    // 07020 PRINT "(SHIELDS UNCHANGED)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(SHIELDS UNCHANGED)");strcat(buf,"\n");fputs(buf,fh); };
    // 07030 GOTO 3150
    goto Lbl_03150;

  Lbl_07040:
    // 07040 IF E+S-X<0 GOTO 6980
    if(CurrentEnergy+EnterpriseSheilds-X_int<0)goto Lbl_06980;
    // 07050 LET E=E+S-X
    CurrentEnergy = CurrentEnergy+EnterpriseSheilds-X_int;
    // 07060 LET S=X
    EnterpriseSheilds = X_int;
    // 07070 PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DEFLECTOR CONTROL ROOM REPORT:");strcat(buf,"\n");fputs(buf,fh); };
    // 07080 PRINT "  'SHIELDS NOW AT "S" PER YOUR COMMAND'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  'SHIELDS NOW AT "); b2c_INT(buf,EnterpriseSheilds);strcat(buf," PER YOUR COMMAND'");strcat(buf,"\n");fputs(buf,fh); };
    // 07090 GOTO 3150
    goto Lbl_03150;
    // 07100 REM
    // 07110 REM ===============================================================
    // 07120 REM
    // 07130 REM *** DAMAGE CONTROL STARTS HERE

  Lbl_07140:
    // 07140 IF D(6)>=0 GOTO 7360
    if(D_int>=0)goto Lbl_07360;
    // 07150 PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DAMAGE CONTROL REPORT NOT AVAILABLE");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_07160:
    // 07160 IF D0=0 GOTO 3150
    if(flgProtectedByStarbase==0)goto Lbl_03150;
    // 07170 LET D3=0
    D3_int = 0;
    // 07180 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 07190 IF D(I)>=0 GOTO 7210
        if(D_int>=0)goto Lbl_07210;
        // 07200 LET D3=D3+.1
        D3_int = D3_int+0.1;

  Lbl_07210:
        // 07210 NEXT I
        int dummy_7210=0; // Ignore this line.
    }; // End-For(idx_i)
    // 07220 IF D3=0 GOTO 3150
    if(D3_int==0)goto Lbl_03150;
    // 07230 LET D3=D3+D4
    D3_int = D3_int+D4_int;
    // 07240 IF D3<1 GOTO 7260
    if(D3_int<1)goto Lbl_07260;
    // 07250 LET D3=.9
    D3_int = 0.9;

  Lbl_07260:
    // 07260 PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:");strcat(buf,"\n");fputs(buf,fh); };
    // 07270 PRINT "ESTIMATED TIME TO REPAIR: ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ESTIMATED TIME TO REPAIR: ");fputs(buf,fh); };
    // 07280 PRINT USING ".# STARDATES",D3
    b2c_printf(".%1d stardates%s ",FT(D3_int),"\n");
    // 07290 PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)");fputs(buf,fh); };
    // 07300 INPUT A$
    // Start of Basic INPUT statement 07300
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&tmpstr,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 07300
    // 07310 IF A$<>"YES" GOTO 3150
    if(strcmp(tmpstr,"YES")!=0)goto Lbl_03150;
    // 07320 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 07330 LET D(I)=0
        D_int = 0;
        // 07340 NEXT I
        int dummy_7340=0; // Ignore this line.
    }; // End-For(idx_i)
    // 07350 LET T=T+D3+.1
    T_int = T_int+D3_int+0.1;

  Lbl_07360:
    // 07360 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 07370 PRINT "DEVICE        STATE OF REPAIR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DEVICE        STATE OF REPAIR");strcat(buf,"\n");fputs(buf,fh); };
    // 07380 FOR R1=1 TO 8
    for(RandomNbr1=1;RandomNbr1<=8;RandomNbr1++){
        // 07390 GOSUB 10850
        Routine_10850();
        // 07400 PRINT USING "  -##.##",D(R1)
        b2c_printf("  %6.2f%s ",FT(D_int),"\n");
        // 07410 NEXT R1
        int dummy_7410=0; // Ignore this line.
    }; // End-For(RandomNbr1)
    // 07420 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 07430 GOTO 7160
    goto Lbl_07160;

  Lbl_07440:
    // 07440 PRINT "ITS IS STARDATE "T
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ITS IS STARDATE "); b2c_INT(buf,T_int);strcat(buf,"\n");fputs(buf,fh); };
    // 07450 GOTO 7490
    goto Lbl_07490;

  Lbl_07460:
    // 07460 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 07470 PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED.");strcat(buf,"\n");fputs(buf,fh); };
    // 07480 PRINT "IT IS STARDATE "T"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT IS STARDATE "); b2c_INT(buf,T_int);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_07490:
    // 07490 PRINT "THERE WERE "K9" KLINGON BATTLE CRUISERS LEFT AT "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THERE WERE "); b2c_INT(buf,KlingonsTotal);strcat(buf," KLINGON BATTLE CRUISERS LEFT AT ");strcat(buf,"\n");fputs(buf,fh); };
    // 07500 PRINT "THE END OF YOUR MISSION."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE END OF YOUR MISSION.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_07510:
    // 07510 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 07520 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 07530 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER");strcat(buf,"\n");fputs(buf,fh); };
    // 07540 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,");strcat(buf,"\n");fputs(buf,fh); };
    // 07550 PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LET HIM STEP FORWARD AND ENTER 'AYE'.");strcat(buf,"\n");fputs(buf,fh); };
    // 07560 INPUT A$
    // Start of Basic INPUT statement 07560
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&tmpstr,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 07560
    // 07570 IF A$="AYE" GOTO 1270
    if(strcmp(tmpstr,"AYE")==0)goto GameStart;
    // 07580 GOTO 9120
    goto Lbl_09120;

  Lbl_07590:
    // 07590 PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER");strcat(buf,"\n");fputs(buf,fh); };
    // 07600 PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  MENACING THE FEDERATION HAS BEEN DESTROYED.");strcat(buf,"\n");fputs(buf,fh); };
    // 07610 PRINT " "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 07620 PRINT "YOUR EFFICIENCY RATING IS "((K/(T-T0))*1000)"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR EFFICIENCY RATING IS "); b2c_INT(buf,((KlingonInfoLocAndDamage[0]/(T_int-StartStarDate))*1000));strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 07630 GOTO 7510
    goto Lbl_07510;
    // 07640 REM
    // 07650 REM ===============================================================
    // 07660 REM
    // 07670 REM *** LIBARY COMPUTER CODE BEGINS HERE

  Lbl_07680:
    // 07680 IF D(8)>=0 GOTO 7710
    if(D_int>=0)goto Lbl_07710;
    // 07690 PRINT "COMPUTER DISABLED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER DISABLED");strcat(buf,"\n");fputs(buf,fh); };
    // 07700 GOTO 3150
    goto Lbl_03150;

  Lbl_07710:
    // 07710 PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER ACTIVE AND AWAITING COMMAND:");fputs(buf,fh); };
    // 07720 INPUT A
    // Start of Basic INPUT statement 07720
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 07720
    // 07730 IF A<0 GOTO 3150
    if(A_int<0)goto Lbl_03150;
    // 07740 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 07750 LET H8=1
    H8_int = 1;
    // 07760 IF A=0 GOTO 8000
    if(A_int==0)goto Lbl_08000;
    // 07770 IF A>5 GOTO 7880
    if(A_int>5)goto Lbl_07880;
    // 07780 REM
    // 07790 REM ===============================================================
    // 07800 REM
    // 07810 ON A GOTO 8420, 8620, 9050, 8700, 7830
    switch((int)(A_int)){
        case 1: goto Lbl_08420;
        case 2: goto Lbl_08620;
        case 3: goto Lbl_09050;
        case 4: goto Lbl_08700;
        case 5: goto Lbl_07830;
        default: break; 
    };
    // 07820 REM  GOTO 9150

  Lbl_07830:
    // 07830 REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
    // 07840 LET H8=0
    H8_int = 0;
    // 07850 LET G5=1
    G5_int = 1;
    // 07860 PRINT "                      THE GALAXY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                      THE GALAXY");strcat(buf,"\n");fputs(buf,fh); };
    // 07870 GOTO 8010
    goto Lbl_08010;

  Lbl_07880:
    // 07880 PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:");strcat(buf,"\n");fputs(buf,fh); };
    // 07890 PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   0 = CUMULATIVE GALACTIC RECORD");strcat(buf,"\n");fputs(buf,fh); };
    // 07900 PRINT "   1 = STATUS REPORT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   1 = STATUS REPORT");strcat(buf,"\n");fputs(buf,fh); };
    // 07910 PRINT "   2 = PHOTON TORPEDO DATA"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   2 = PHOTON TORPEDO DATA");strcat(buf,"\n");fputs(buf,fh); };
    // 07920 PRINT "   3 = STARBASE NAVIGATION DATA"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   3 = STARBASE NAVIGATION DATA");strcat(buf,"\n");fputs(buf,fh); };
    // 07930 PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   4 = DIRECTION/DISTANCE CALCULATOR");strcat(buf,"\n");fputs(buf,fh); };
    // 07940 PRINT "   5 = GALAXY 'REGION NAME' MAP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   5 = GALAXY 'REGION NAME' MAP");strcat(buf,"\n");fputs(buf,fh); };
    // 07950 GOTO 7710
    goto Lbl_07710;
    // 07960 REM
    // 07970 REM ===============================================================
    // 07980 REM
    // 07990 REM *** CUM GALACTIC RECORD CODE BEGINS ***

  Lbl_08000:
    // 08000 PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "Q1","Q2":"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER RECORD OF GALAXY FOR QUADRANT "); b2c_INT(buf,EnterpriseQuadrantX);strcat(buf,","); b2c_INT(buf,EnterpriseQuadrantY);strcat(buf,":");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_08010:
    // 08010 PRINT "      1     2     3     4     5     6     7     8"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      1     2     3     4     5     6     7     8");strcat(buf,"\n");fputs(buf,fh); };
    // 08020 LET O3$="    ----- ----- ----- ----- ----- ----- ----- -----"
    GLBpStr="    ----- ----- ----- ----- ----- ----- ----- -----";
    O3_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 08030 PRINT O3$
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O3_str);strcat(buf,"\n");fputs(buf,fh); };
    // 08040 REM   DIM N1$(2),N2$(8),N$(5)
    // 08050 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 08060 LET N1$="##"
        GLBpStr="##";
        N1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 08070 PRINT USING N1$,I;
        b2c_printf(b2c_ConvertUsingFormatStr(N1_str),idx_i,"\n");
        // 08080 PRINT TAB(3);"|";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,3);strcat(buf,"|");fputs(buf,fh); };
        // 08090 IF H8=0 GOTO 8210
        if(H8_int==0)goto Lbl_08210;
        // 08100 FOR J=1 TO 8
        for(idx_j=1;idx_j<=8;idx_j++){
            // 08110 LET N2$=" ### |"
            GLBpStr=" ### |";
            N2_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 08120 LET N$=""
            GLBpStr="";
            N_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 08130 IF I<>Q1 GOTO 8170
            if(idx_i!=EnterpriseQuadrantX)goto Lbl_08170;
            // 08140 IF J<>Q2 GOTO 8170
            if(idx_j!=EnterpriseQuadrantY)goto Lbl_08170;
            // 08150 LET N$=CHR$(7)
            GLBpStr=CHR$(7);
            N_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 08160 PRINT N$;
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,N_str);fputs(buf,fh); };

  Lbl_08170:
            // 08170 PRINT USING N2$,Z(I,J);
            b2c_printf(b2c_ConvertUsingFormatStr(N2_str),Z_int_arr[idx_i][idx_j],"\n");
            // 08180 PRINT N$;
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,N_str);fputs(buf,fh); };
            // 08190 NEXT J
            int dummy_8190=0; // Ignore this line.
        }; // End-For(idx_j)
        // 08200 GOTO 8340
        goto Lbl_08340;

  Lbl_08210:
        // 08210 LET Z4=I
        Z4_int = idx_i;
        // 08220 LET Z5=1
        Z5_int = 1;
        // 08230 GOSUB 11050
        Routine_11050();
        // 08240 LET J0=INT(15-.5*LEN(G2$))
        J0_int = INT(15-0.5*LEN(QuadName));
        // 08250 PRINT  TAB(J0);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,J0_in;fputs(buf,fh); };
        // 08260 PRINT G2$;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,QuadName);fputs(buf,fh); };
        // 08270 PRINT TAB(27);"|";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,27);strcat(buf,"|");fputs(buf,fh); };
        // 08280 LET Z5=5
        Z5_int = 5;
        // 08290 GOSUB 11050
        Routine_11050();
        // 08300 LET J0=INT(39-.5*LEN(G2$))
        J0_int = INT(39-0.5*LEN(QuadName));
        // 08310 PRINT  TAB(J0);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,J0_in;fputs(buf,fh); };
        // 08320 PRINT G2$;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,QuadName);fputs(buf,fh); };
        // 08330 PRINT TAB(51);"|";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,51);strcat(buf,"|");fputs(buf,fh); };

  Lbl_08340:
        // 08340 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 08350 PRINT O3$
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O3_str);strcat(buf,"\n");fputs(buf,fh); };
        // 08360 NEXT I
        int dummy_8360=0; // Ignore this line.
    }; // End-For(idx_i)
    // 08370 GOTO 3150
    goto Lbl_03150;
    // 08380 REM
    // 08390 REM ===============================================================
    // 08400 REM
    // 08410 REM *** STATUS REPORT CODE BEGINS HERE ***

  Lbl_08420:
    // 08420 PRINT "   STATUS REPORT:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   STATUS REPORT:");strcat(buf,"\n");fputs(buf,fh); };
    // 08430 LET X$=""
    GLBpStr="";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 08440 IF K9=1 GOTO 8460
    if(KlingonsTotal==1)goto Lbl_08460;
    // 08450 LET X$="S"
    GLBpStr="S";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_08460:
    // 08460 PRINT K9" KLINGON"X$" LEFT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,KlingonsTotal);strcat(buf," KLINGON"); strcat(buf,X_str);strcat(buf," LEFT");strcat(buf,"\n");fputs(buf,fh); };
    // 08470 LET V5=(T0+T9)-T
    V5_int = (StartStarDate+CampaignLength)-T_int;
    // 08480 PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES",V5
    b2c_printf("mission must be completed in %4.1f stardates%s ",FT(V5_int),"\n");
    // 08490 LET X$=""
    GLBpStr="";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 08500 IF B9=1 GOTO 8560
    if(StarbaseTotal==1)goto Lbl_08560;
    // 08510 LET X$="S"
    GLBpStr="S";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 08520 IF B9<>0 GOTO 8560
    if(StarbaseTotal!=0)goto Lbl_08560;
    // 08530 PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN");strcat(buf,"\n");fputs(buf,fh); };
    // 08540 PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  THE GALAXY -- YOU HAVE NO STARBASES LEFT!");strcat(buf,"\n");fputs(buf,fh); };
    // 08550 GOTO 7140
    goto Lbl_07140;

  Lbl_08560:
    // 08560 PRINT "THE FEDERATION IS MAINTAINING"B9" STARBASE"X$" IN THE GALAXY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE FEDERATION IS MAINTAINING"); b2c_INT(buf,StarbaseTotal);strcat(buf," STARBASE"); strcat(buf,X_str);strcat(buf," IN THE GALAXY");strcat(buf,"\n");fputs(buf,fh); };
    // 08570 GOTO 7140
    goto Lbl_07140;
    // 08580 REM
    // 08590 REM ===============================================================
    // 08600 REM
    // 08610 REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***

  Lbl_08620:
    // 08620 LET H8=0
    H8_int = 0;
    // 08630 FOR I=1 TO 3
    for(idx_i=1;idx_i<=3;idx_i++){
        // 08640 IF K(I,3)<=0 GOTO 9030
        if(KlingonInfoLocAndDamage[idx_i][3]<=0)goto Lbl_09030;
        // 08650 LET W1=K(I,1)
        WarpFactor = KlingonInfoLocAndDamage[idx_i][1];
        // 08660 LET X=K(I,2)
        X_int = KlingonInfoLocAndDamage[idx_i][2];

  Lbl_08670:
        // 08670 LET C1=S1
        C1_int = EnterpriseSectorX;
        // 08680 LET A=S2
        A_int = EnterpriseSectorY;
        // 08690 GOTO8770
        goto Lbl_08770;

  Lbl_08700:
        // 08700 PRINT "DIRECTION/DISTANCE CALCULATOR:"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIRECTION/DISTANCE CALCULATOR:");strcat(buf,"\n");fputs(buf,fh); };
        // 08710 PRINT "YOU ARE AT QUADRANT ("Q1","Q2") SECTOR ("S1","S2")"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE AT QUADRANT ("); b2c_INT(buf,EnterpriseQuadrantX);strcat(buf,","); b2c_INT(buf,EnterpriseQuadrantY);strcat(buf,") SECTOR ("); b2c_INT(buf,EnterpriseSectorX);strcat(buf,","); b2c_INT(buf,EnterpriseSectorY);strcat(buf,")");strcat(buf,"\n");fputs(buf,fh); };
        // 08720 PRINT "PLEASE ENTER --"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE ENTER --");strcat(buf,"\n");fputs(buf,fh); };
        // 08730 PRINT "  INITIAL COORDINATES (X,Y)";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  INITIAL COORDINATES (X,Y)");fputs(buf,fh); };
        // 08740 INPUT C1,A
        // Start of Basic INPUT statement 08740
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&C1_int,args,0)) ||
                    (err += b2c_strtoi(&A_int,args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 08740
        // 08750 PRINT "  FINAL COORDINATES (X,Y)";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  FINAL COORDINATES (X,Y)");fputs(buf,fh); };
        // 08760 INPUT W1,X
        // Start of Basic INPUT statement 08760
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&WarpFactor,args,0)) ||
                    (err += b2c_strtoi(&X_int,args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 08760

  Lbl_08770:
        // 08770 LET X=X-A
        X_int = X_int-A_int;
        // 08780 LET A=C1-W1
        A_int = C1_int-WarpFactor;
        // 08790 IF X<0 GOTO 8900
        if(X_int<0)goto Lbl_08900;
        // 08800 IF A<0 GOTO 8960
        if(A_int<0)goto Lbl_08960;
        // 08810 IF X>0 GOTO 8830
        if(X_int>0)goto Lbl_08830;
        // 08820 IF A=0 GOTO 8920
        if(A_int==0)goto Lbl_08920;

  Lbl_08830:
        // 08830 LET C1=1
        C1_int = 1;

  Lbl_08840:
        // 08840 IF ABS(A)<=ABS(X) GOTO 8880
        if(ABS(A_int)<=ABS(X_int))goto Lbl_08880;
        // 08850 LET V5=C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
        V5_int = C1_int+(((ABS(A_int)-ABS(X_int))+ABS(A_int))/ABS(A_int));
        // 08860 PRINT "DIRECTION ="V5
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIRECTION ="); b2c_INT(buf,V5_int);strcat(buf,"\n");fputs(buf,fh); };
        // 08870 GOTO 9010
        goto Lbl_09010;

  Lbl_08880:
        // 08880 PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIRECTION ="); b2c_INT(buf,C1_int+(ABS(A_int)/ABS(X_int)));strcat(buf,"\n");fputs(buf,fh); };
        // 08890 GOTO 9010
        goto Lbl_09010;

  Lbl_08900:
        // 08900 IF A>0 GOTO 8940
        if(A_int>0)goto Lbl_08940;
        // 08910 IF X=0 GOTO 8960
        if(X_int==0)goto Lbl_08960;

  Lbl_08920:
        // 08920 LET C1=5
        C1_int = 5;
        // 08930 GOTO 8840
        goto Lbl_08840;

  Lbl_08940:
        // 08940 LET C1=3
        C1_int = 3;
        // 08950 GOTO 8970
        goto Lbl_08970;

  Lbl_08960:
        // 08960 LET C1=7
        C1_int = 7;

  Lbl_08970:
        // 08970 IF ABS(A)>=ABS(X) GOTO 9000
        if(ABS(A_int)>=ABS(X_int))goto Lbl_09000;
        // 08980 PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIRECTION ="); b2c_INT(buf,C1_int+(((ABS(X_int)-ABS(A_int))+ABS(X_int))/ABS(X_int)));strcat(buf,"\n");fputs(buf,fh); };
        // 08990 GOTO 9010
        goto Lbl_09010;

  Lbl_09000:
        // 09000 PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIRECTION ="); b2c_INT(buf,C1_int+(ABS(X_int)/ABS(A_int)));strcat(buf,"\n");fputs(buf,fh); };

  Lbl_09010:
        // 09010 PRINT "DISTANCE ="SQR(X^2+A^2)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DISTANCE =");b2c_FLT(buf,SQR(IPower(X_int,2)+IPower(A_int,2)));strcat(buf,"\n");fputs(buf,fh); };
        // 09020 IF H8=1 GOTO 3150
        if(H8_int==1)goto Lbl_03150;

  Lbl_09030:
        // 09030 NEXT I
        int dummy_9030=0; // Ignore this line.
    }; // End-For(idx_i)
    // 09040 GOTO 3150
    goto Lbl_03150;

  Lbl_09050:
    // 09050 IF B3<>0 GOTO 9080
    if(StarbaseSector!=0)goto Lbl_09080;
    // 09060 PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'");strcat(buf,"\n");fputs(buf,fh); };
    // 09070 GOTO 3150
    goto Lbl_03150;

  Lbl_09080:
    // 09080 PRINT "FROM ENTERPRISE TO STARBASE:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FROM ENTERPRISE TO STARBASE:");strcat(buf,"\n");fputs(buf,fh); };
    // 09090 LET W1=B4
    WarpFactor = B4_int;
    // 09100 LET X=B5
    X_int = B5_int;
    // 09110 GOTO 8670
    goto Lbl_08670;

  Lbl_09120:
    // 09120 STOP
    exit(1);
    // 09130 REM *** EXIT HERE ***
    // 09140 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
