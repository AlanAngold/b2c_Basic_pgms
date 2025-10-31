/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/wumpus2a.bas: 
 *
                   +----------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |          | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |          | |
        Address    v          v v Original BASIC statement
    -------------- ------------ - ------------------------------------------------------------------------------
    0x57619ee16db0 ---------A   00001  REM NOTE: Basic language type forced to be:
    0x57619ee16f30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x57619ee16e70 ---------A   00010  REM  WUMPUS II  FROM THE LAWRENCE HALL OF SCIENCE
    0x57619ee16ff0 ---------A   00020  REM  TRANSFERED TO SOL EBASIC BY DAVID FOX
    0x57619ee052f0 ---------A   00030  REM  REVISED FOR TRS-80 LEVEL II BASIC BY DOUG BENEDICT
    0x57619ee146d0 ---------A   00040  CLS:PRINT@282,"WUMPUS  II"
    0x57619ee14670 ---------A   00041  PRINT@409,"COPYRIGHT BY"
    0x57619ee16aa0 ---------A   00042  PRINT@470,"CREATIVE COMPUTING"
    0x57619ee15040 ---------A   00043  PRINT@536,"P.O. BOX 789-M"
    0x57619ee14e40 ---------A   00044  PRINT@593,"MORRISTOWN, NEW JERSEY 07960"
    0x57619ee165e0 ---------A   00045  FORI=1TO2000:NEXTI
    0x57619ee1cfe0 ---------A   00050  DIM I$(6),L(6),M(6),P(5),S(20,3)
    0x57619ee1d1d0 ---------A   00060  CLS:PRINT @ 390,"";
    0x57619ee1d380 ---------A   00070  PRINT "* * *  T H E  G A M E  O F  W U M P U S  II  * * *"
    0x57619ee1d710 ---------A T 00080  PRINT @ 896,"";:INPUT "WOULD YOU LIKE INSTRUCTIONS";Z$
    0x57619ee1db40 ---------A   00090  IF LEFT$(Z$,1)="N" THEN 120
    0x57619ee1df60 ---------A   00100  IF LEFT$(Z$,1)<>"Y" THEN 80
    0x57619ee1e2a0 ---------A   00110  F3=1:GOSUB 2580
    0x57619ee1e320 ---------A T 00120  REM  CHOOSE AND SET UP CAVE
    0x57619ee1e5b0 ---------A   00130  GOSUB 1890:F3=1
    0x57619ee1e630 ---------A   00170  REM  LOCATE L ARRAY ITEMS
    0x57619ee1e6f0 ---------A   00180  REM  1=YOU,2=WUMPUS,3&4=PITS,5&6=BATS
    0x57619ee1eaa0 ---------A T 00190  FOR J=1 TO 6
    0x57619ee1ee80 ---------A   00200  L(J)=RND(20)
    0x57619ee1f270 ---------A   00210  M(J)=L(J)
    0x57619ee1f3a0 ---------A   00220  NEXT J
    0x57619ee1f470 ---------A   00230  REM  CHECK FOR CROSSOVERS (IE L(1)=L(2),ETC)
    0x57619ee1f760 ---------A   00240  FOR J=1 TO 6
    0x57619ee1fb20 ---------A   00250  FOR K=J TO 6
    0x57619ee1fdc0 ---------A   00260  IF J=K THEN 280
    0x57619ee20640 ---------A   00270  IF L(J)=L(K) THEN J=7:K=7:GOTO 190
    0x57619ee20770 ---------A T 00280  NEXT K
    0x57619ee208c0 ---------A   00290  NEXT J
    0x57619ee20b60 ---------A   00300  REM  SET # ARROWS
    0x57619ee20e50 ---------A T 00310  A=5
    0x57619ee21140 ---------A   00320  L=L(1)
    0x57619ee211b0 ---------A   00330  REM  RUN THE GAME
    0x57619ee21260 ---------A   00340  REM  HAZARD WARNINGS & LOCATION
    0x57619ee21300 ---------A T 00350  GOSUB 660
    0x57619ee21370 ---------A   00360  REM  MOVE OR SHOOT
    0x57619ee21400 ---------A T 00370  GOSUB 830
    0x57619ee21790 ---------A   00380  ON O GOTO 400,440
    0x57619ee21810 ---------A   00390  REM  SHOOT
    0x57619ee218a0 ---------A T 00400  GOSUB 920
    0x57619ee21bb0 ---------A   00410  IF F=0 THEN 370
    0x57619ee21c30 ---------A   00420  GOTO 460
    0x57619ee21ca0 ---------A   00430  REM  MOVE
    0x57619ee21d30 ---------A T 00440  GOSUB 1480
    0x57619ee21f80 ---------A   00450  IF F=0 THEN 350
    0x57619ee221e0 ---------A T 00460  IF F>0 THEN 510
    0x57619ee22260 ---------A   00470  REM  LOSE
    0x57619ee22420 ---------A   00480  PRINT "HA HA HA - YOU LOSE!     ";
    0x57619ee224a0 ---------A   00490  GOTO 530
    0x57619ee22510 ---------A   00500  REM  WIN
    0x57619ee226d0 ---------A T 00510  PRINT "HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!"
    0x57619ee22750 ---------A   00520  PRINT
    0x57619ee22a30 ---------A T 00530  FOR J=1 TO 6
    0x57619ee22e30 ---------A   00540  L(J)=M(J)
    0x57619ee22f60 ---------A   00550  NEXT J
    0x57619ee23170 ---------A   00560  INPUT "WANT TO PLAY AGAIN";I$:CLS
    0x57619ee23580 ---------A   00570  IF LEFT$(I$,1)<>"Y" THEN 2300
    0x57619ee23610 ---------A   00580  PRINT
    0x57619ee23790 ---------A   00590  INPUT "SAME SET-UP";I$
    0x57619ee23820 ---------A   00600  PRINT
    0x57619ee23c50 ---------A   00610  IF LEFT$(I$,1)="Y" THEN 310
    0x57619ee241e0 ---------A   00620  INPUT "SAME CAVE";I$
    0x57619ee24270 ---------A   00630  PRINT
    0x57619ee24690 ---------A   00640  IF LEFT$(I$,1)="Y" THEN 190
    0x57619ee24730 ---------A   00650  GOTO 120
    0x57619ee247b0 ---------B G 00660  REM  PRINT LOCATION & HAZARD WARNINGS
    0x57619ee24840 ---------B   00670  PRINT
    0x57619ee24b20 ---------B   00680  FOR J=2 TO 6
    0x57619ee24e10 ---------B   00690  FOR K=1 TO 3
    0x57619ee25400 ---------B   00700  IF S(L(1),K)<>L(J) THEN 770
    0x57619ee25a30 ---------B   00710  ON J-1 GOTO 720,740,740,760,760
    0x57619ee25b90 ---------B T 00720  PRINT "I SMeLL A WUMPUS!"
    0x57619ee25c20 ---------B   00730  GOTO 770
    0x57619ee25d70 ---------B T 00740  PRINT "I FEEL A DRAFT"
    0x57619ee25e00 ---------B   00750  GOTO 770
    0x57619ee25f50 ---------B T 00760  PRINT "BATS NEARBY!"
    0x57619ee26090 ---------B T 00770  NEXT K
    0x57619ee261e0 ---------B   00780  NEXT J
    0x57619ee26570 ---------B   00790  PRINT "YOU ARE IN ROOM";L(1);
    0x57619ee270b0 ---------B   00800  PRINT "    TUNNELS LEAD TO";S(L,1);",";S(L,2);"AND";S(L,3)
    0x57619ee27130 ---------B   00810  PRINT
    0x57619ee27190 ---------B   00820  RETURN
    0x57619ee27210 ---------C G 00830  REM  CHOSE OPTION
    0x57619ee273b0 ---------C T 00840  INPUT "SHOOT OR MOVE";I$
    0x57619ee27440 ---------C   00850  PRINT
    0x57619ee27860 ---------C   00860  IF LEFT$(I$,1)<>"S" THEN 890
    0x57619ee27a80 ---------C   00870  O=1
    0x57619ee27ad0 ---------C   00880  RETURN
    0x57619ee27f00 ---------C T 00890  IF LEFT$(I$,1)<>"M" THEN 840
    0x57619ee28120 ---------C   00900  O=2
    0x57619ee28170 ---------C   00910  RETURN
    0x57619ee28200 ---------D G 00920  REM  ARROW ROUTINE
    0x57619ee28440 ---------D   00930  F=0
    0x57619ee284b0 ---------D   00940  REM  PATH OF ARROW
    0x57619ee28710 ---------D T 00950  INPUT "NUMBER OF ROOMS";J9
    0x57619ee28790 ---------D   00960  PRINT
    0x57619ee289f0 ---------D   00970  IF J9<1 THEN 950
    0x57619ee28c50 ---------D   00980  IF J9>5 THEN 950
    0x57619ee28f60 ---------D   00990  FOR K=1 TO J9
    0x57619ee291e0 ---------D T 01000  INPUT "ROOM #";P(K)
    0x57619ee29860 ---------D   01010  IF P(K)>0 THEN IF P(K)<21 THEN 1040
    0x57619ee299e0 ---------D   01020  PRINT "   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY."
    0x57619ee29a60 ---------D   01030  GOTO 1000
    0x57619ee29bd0 ----------   01040  PRINT "  ";
    0x57619ee29d10 ----------   01050  NEXT K
    0x57619ee29da0 ----------   01060  PRINT
    0x57619ee29e20 ---------A   01070  REM  SHOOT ARROW
    0x57619ee2a170 ----------   01080  A=A-1
    0x57619ee2a520 ----------   01090  A9=L(1)
    0x57619ee2a810 ----------   01100  FOR K=1 TO J9
    0x57619ee2aaf0 ----------   01110  F1=0
    0x57619ee2ae90 ----------   01120  FOR K1=1 TO 3
    0x57619ee2b5a0 ----------   01130  IF S(A9,K1)=P(K) THEN F1=1
    0x57619ee2b6e0 ----------   01140  NEXT K1
    0x57619ee2b960 ----------   01150  IF F1=1 THEN 1190
    0x57619ee2b9f0 ---------A   01160  REM  NO TUNNEL FOR ARROW
    0x57619ee2bec0 ----------   01170  A9=S(A9,RND(3))
    0x57619ee2c0e0 ----------   01180  F1=2
    0x57619ee2c3c0 ---------- T 01190  ON F1 GOSUB 1310,1320
    0x57619ee2ca70 ----------   01200  IF ABS(F)=1 THEN K=J9+1:GOTO 1290
    0x57619ee2cba0 ----------   01210  NEXT K
    0x57619ee2cd10 ----------   01220  PRINT "MISSED"
    0x57619ee2cd90 ----------   01230  PRINT
    0x57619ee2ce10 ---------A   01240  REM  MOVE WUMPUS
    0x57619ee2cea0 ----------   01250  GOSUB 1400
    0x57619ee2d720 ---------A   01260  REM  AMMO CHECK
    0x57619ee2d990 ----------   01270  IF A>0 THEN 1290
    0x57619ee2dbb0 ---------E T 01280  F=-1
    0x57619ee2dc00 ---------E T 01290  RETURN
    0x57619ee2dcb0 ---------E   01300  REM  SEE IF ARROW IS AT L(1) OR L(2)
    0x57619ee2dff0 ---------E G 01310  A9=P(K)
    0x57619ee2e350 ---------E G 01320  IF A9<>L(2) THEN 1370
    0x57619ee2e690 ---------E   01330  PRINT "AHA!  YOU GOT THE WUMPUS!!  HE WAS IN ROOM";L(2)
    0x57619ee2e710 ---------E   01340  PRINT
    0x57619ee2e930 ---------E   01350  F=1
    0x57619ee2e980 ---------E   01360  RETURN
    0x57619ee2ed20 ---------E T 01370  IF A9<>L(1) THEN RETURN
    0x57619ee2ee90 ---------E   01380  PRINT "OUCH!  ARROW GOT YOU!!"
    0x57619ee2ef20 ---------E   01390  GOTO 1280
    0x57619ee2efa0 ---------F G 01400  REM  MOVE WUMPUS ROUTINE
    0x57619ee2f2b0 ---------F G 01410  K=RND(4)
    0x57619ee2f500 ---------F   01420  IF K=4 THEN 1470
    0x57619ee2fa90 ---------F   01430  L(2)=S(L(2),K)
    0x57619ee2fde0 ---------F   01440  IF L(2)<>L THEN 1470
    0x57619ee2ffb0 ---------F   01450  PRINT "TSK TSK TSK - THE WUMPUS GOT YOU!":PRINT
    0x57619ee301d0 ---------F   01460  F=-1
    0x57619ee30220 ---------F T 01470  RETURN
    0x57619ee302a0 ---------G G 01480  REM  MOVE ROUTINE
    0x57619ee304e0 ---------G   01490  F=0
    0x57619ee30650 ---------G T 01500  INPUT "WHERE TO";L
    0x57619ee306d0 ---------G   01510  PRINT
    0x57619ee30930 ---------G   01520  IF L<1 THEN 1500
    0x57619ee30b90 ---------G   01530  IF L>20 THEN 1500
    0x57619ee30e80 ---------G   01540  FOR K=1 TO 3
    0x57619ee30f10 ---------G   01550  REM  CHECK IF LEGAL MOVE
    0x57619ee31680 ---------G   01560  IF S(L(1),K)=L THEN K=4:GOTO 1620
    0x57619ee317b0 ----------   01570  NEXT K
    0x57619ee31b20 ----------   01580  IF L=L(1) THEN 1620
    0x57619ee31ca0 ----------   01590  PRINT "NOT POSSIBLE - ";
    0x57619ee31d30 ----------   01600  GOTO 1500
    0x57619ee31da0 ---------A   01610  REM  CHECK FOR HAZARDS
    0x57619ee320b0 ---------G T 01620  L(1)=L
    0x57619ee32120 ---------G   01630  REM  WUMPUS
    0x57619ee324a0 ---------G   01640  IF L<>L(2) THEN 1710
    0x57619ee32610 ---------G   01650  PRINT "... OOPS!  BUMPED A WUMPUS!"
    0x57619ee32690 ---------G   01660  REM  MOVE WUMPUS
    0x57619ee32720 ---------G   01670  GOSUB 1410
    0x57619ee32970 ---------G   01680  IF F=0 THEN 1710
    0x57619ee329d0 ---------G   01690  RETURN
    0x57619ee32a50 ---------G   01700  REM  PIT
    0x57619ee330e0 ---------G T 01710  IF L<>L(3) THEN IF L<>L(4) THEN 1830
    0x57619ee33470 ---------G   01720  CLS:P1=110
    0x57619ee33ee0 ---------G   01730  PRINT CHR$(28);"Y";:GOSUB 5000:PRINT "Y";:GOSUB 5000:PRINT "Y":GOSUB 5000:P1=100:PRINT "      Y":GOSUB 5000
    0x57619ee344b0 ---------G   01740  P1=90:PRINT "         Y":GOSUB 5000:P1=80
    0x57619ee34a10 ---------G   01750  PRINT "          Y":GOSUB 5000:P1=70:PRINT "           Y":GOSUB 5000
    0x57619ee34fc0 ---------G   01760  PRINT TAB(11);"I";:GOSUB 5000:PRINT TAB(30);"FELL IN A PIT!!"
    0x57619ee35aa0 ---------G   01770  FOR I=1 TO 4:P1=70-I*10:PRINT TAB(11);"I":GOSUB 5000:NEXT I
    0x57619ee365c0 ---------G   01780  FOR I=1 TO 2:P1=30-I*10:PRINT TAB(11);"E":GOSUB 5000:NEXT I
    0x57619ee36cc0 ---------G   01790  FOR I=1 TO 18:PRINT TAB(11);".":GOSUB 5000:NEXT I
    0x57619ee36ef0 ---------G   01800  F=-1
    0x57619ee36f40 ---------G   01810  RETURN
    0x57619ee36fc0 ---------A   01820  REM  BATS
    0x57619ee37680 ----------   01830  IF L<>L(5) THEN IF L<>L(6) THEN 1880
    0x57619ee37810 ----------   01840  PRINT "ZAP--SUPER BAT SNATCH!  ELSEWHEREVILLE FOR YOU!"
    0x57619ee37cd0 ----------   01850  FOR Q=1 TO 500:NEXT Q
    0x57619ee37fe0 ----------   01860  L=RND(20)
    0x57619ee38050 ----------   01870  GOTO 1620
    0x57619ee380a0 ----------   01880  RETURN
    0x57619ee38120 ---------A   01890  REM  SELECT CAVE
    0x57619ee383b0 ---------- T 01900  IF F3=1 THEN 1930
    0x57619ee387f0 ----------   01910  PRINT @ 896,CHR$(30):PRINT @ 960,CHR$(30);
    0x57619ee38980 ----------   01920  PRINT @ 901,"";
    0x57619ee38bd0 ---------- T 01930  INPUT "CAVE # (0-6)";N
    0x57619ee39060 ----------   01940  IF N>=0 AND N<=6 THEN 1970
    0x57619ee39320 ----------   01950  IF F3=1 THEN PRINT
    0x57619ee393a0 ----------   01960  GOTO 1900
    0x57619ee39440 ---------- T 01970  CLS
    0x57619ee399f0 ----------   01975  PRINT CHR$(28);:IF N<6 THEN PRINT "THE WUMPUS IS HIDING."
    0x57619ee39c50 ----------   01980  IF N=6 THEN 2060
    0x57619ee39cd0 ----------   01990  RESTORE
    0x57619ee39f20 ----------   02000  IF N=0 THEN 2040
    0x57619ee3a3e0 ----------   02010  FOR X9=1 TO N*60
    0x57619ee3a600 ----------   02020  READ I9
    0x57619ee3a730 ----------   02030  NEXT X9
    0x57619ee3a7c0 ---------- T 02040  GOSUB 2230
    0x57619ee3a830 ----------   02050  GOTO 2070
    0x57619ee3a8a0 ---------- T 02060  GOSUB 2080
    0x57619ee3a8f0 ---------- T 02070  RETURN
    0x57619ee3a980 ---------H G 02080  REM  INPUT OWN CAVE
    0x57619ee3ac70 ---------H   02090  FOR J=1 TO 20
    0x57619ee3af00 ---------H T 02100  PRINT "ROOM #";J;
    0x57619ee3b240 ---------H   02110  INPUT "IS CONNECTED TO :";S(J,1)
    0x57619ee3b860 ---------H   02120  INPUT "AND";S(J,2):INPUT "AND";S(J,3)
    0x57619ee3b8e0 ---------H   02130  PRINT
    0x57619ee3bbc0 ---------H   02140  F5=0
    0x57619ee3beb0 ---------H   02150  FOR K=1 TO 3
    0x57619ee3c700 ---------H   02160  IF S(J,K)>0 THEN IF S(J,K)<21 THEN 2190
    0x57619ee3c880 ---------H   02170  PRINT "ERROR** ENTER ROOM NUMBERS FROM 1 TO 20 ONLY!!"
    0x57619ee3caa0 ---------H   02180  F5=1
    0x57619ee3cbd0 ---------H   02190  NEXT K
    0x57619ee3ce40 ---------H   02200  IF F5=1 THEN 2100
    0x57619ee3cf80 ---------H   02210  NEXT J
    0x57619ee3cff0 ---------H   02220  RETURN
    0x57619ee3d070 ---------I G 02230  REM  INPUT CAVE
    0x57619ee3d360 ---------I   02240  FOR J=1 TO 20
    0x57619ee3d640 ---------I   02250  FOR K=1 TO 3
    0x57619ee3d960 ---------I   02260  READ S(J,K)
    0x57619ee3da90 ---------I   02270  NEXT K
    0x57619ee3dbe0 ---------I   02280  NEXT J
    0x57619ee3dc50 ---------I   02290  RETURN
    0x57619ee3dde0 ---------A T 02300  PRINT @ 401,"THANK YOU FOR PLAYING WITH ME!"
    0x57619ee3de60 ---------A   02310  RUN"MENU"
    0x57619ee3e120 ---------A   02320  PRINT:PRINT"TO LOAD ANOTHER PROGRAM, TYPE 'CLOAD'.":PRINT:END
    0x57619ee3e1a0 ---------A   02330  REM  DODECAHEDRON
    0x57619ee3f5d0 ---------A   02340  DATA 2,5,8,1,3,10,2,4,12,3,5,14,1,4,6,5,7,15,6,8,17,1
    0x57619ee40710 ---------A   02350  DATA 7,8,9,10,18,2,9,11,10,12,19,3,11,13,12,14,20,4,13
    0x57619ee41820 ---------A   02360  DATA 15,6,14,16,15,17,20,7,16,18,9,17,19,11,18,20,13,16,19
    0x57619ee41890 ---------A   02370  REM  MOBIUS STRIP
    0x57619ee42da0 ---------A   02380  DATA 20,2,3,19,1,4,1,4,5,2,3,6,3,6,7,4,5,8,5,8,9,6,7
    0x57619ee43e00 ---------A   02390  DATA 10,7,10,11,8,9,12,9,12,13,10,11,14,11,14,15,12,13
    0x57619ee44f20 ---------A   02400  DATA 16,12,16,17,14,15,18,15,18,19,16,17,20,2,17,20,1,18,19
    0x57619ee44f90 ---------A   02410  REM  STRING OF BEADS
    0x57619ee464a0 ---------A   02420  DATA 2,3,20,1,3,4,1,2,4,2,3,5,4,6,7,5,7,8,5,6,8,6,7
    0x57619ee475e0 ---------A   02430  DATA 9,8,10,11,9,11,12,9,10,12,10,11,13,12,14,15,13,15,1
    0x57619ee486f0 ---------A   02440  DATA 6,13,14,16,14,15,17,16,18,19,17,19,20,17,18,20,1,18,19
    0x57619ee48760 ---------A   02450  REM  HEX NETWORK
    0x57619ee49ab0 ---------A   02460  DATA 6,10,16,6,7,17,7,8,18,8,9,19,9,10,20,1,2,15,2,3,1
    0x57619ee4acd0 ---------A   02470  DATA 1,3,4,12,4,5,13,1,5,14,7,16,20,8,16,17,9,17,18,10
    0x57619ee4bed0 ---------A   02480  DATA 18,19,6,19,20,1,11,12,2,12,13,3,13,14,4,14,15,5,11,15
    0x57619ee4bf50 ---------A   02490  REM  DENDRITE W/ DEGENERACIES
    0x57619ee4d460 ---------A   02500  DATA 1,1,5,2,2,5,3,3,6,4,4,6,1,2,7,3,4,7,5,6,10,8,9
    0x57619ee4e5a0 ---------A   02510  DATA 9,8,8,10,7,9,11,10,13,14,12,13,13,11,12,12,11,15,16
    0x57619ee4f5e0 ---------A   02520  DATA 14,17,18,14,19,20,15,17,17,15,18,18,16,19,19,16,20,20
    0x57619ee2cf10 ---------A   02530  REM  ONE WAY LATTICE
    0x57619ee51290 ---------A   02540  DATA 5,4,8,1,5,6,2,6,7,3,7,8,8,9,12,5,9,10,6,10,11,7
    0x57619ee522f0 ---------A   02550  DATA 11,12,12,13,16,9,13,14,10,14,15,11,15,16,16,17,20,13
    0x57619ee534e0 ---------A   02560  DATA 17,18,14,18,19,15,19,20,1,4,20,1,2,17,2,3,18,3,4,19
    0x57619ee53550 ---------J   02570  REM  INSTRUCTIONS
    0x57619ee53620 ---------J G 02580  CLS
    0x57619ee537d0 ---------J   02590  PRINT "  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3"
    0x57619ee53b20 ---------J   02600  PRINT "TUNNELS LEADING TO OTHER ROOMS.":PRINT:PRINT "HAZARDS:"
    0x57619ee53d40 ---------J   02610  PRINT:PRINT "BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF"
    0x57619ee53f60 ---------J   02620  PRINT "YOU GO IN THERE, YOU FALL INTO THE PIT AND LOSE!":PRINT
    0x57619ee54130 ---------J   02630  PRINT "SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,"
    0x57619ee542f0 ---------J   02640  PRINT "A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE"
    0x57619ee544d0 ---------J   02650  PRINT "CAVE WHERE YOU COULD RUN INTO THE...":GOSUB 3410
    0x57619ee546c0 ---------J   02660  PRINT "WUMPUS:":PRINT
    0x57619ee54890 ---------J   02670  PRINT "THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET"
    0x57619ee54a60 ---------J   02680  PRINT "AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS"
    0x57619ee54c30 ---------J   02690  PRINT "WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW."
    0x57619ee54df0 ---------J   02700  PRINT "IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL."
    0x57619ee54f90 ---------J   02710  PRINT "BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!"
    0x57619ee551e0 ---------J   02720  PRINT:PRINT "YOU:":PRINT
    0x57619ee553a0 ---------J   02730  PRINT "EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW."
    0x57619ee55520 ---------J   02740  PRINT "MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL)."
    0x57619ee555d0 ---------J   02750  GOSUB 3410
    0x57619ee55790 ---------J   02760  PRINT "SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT."
    0x57619ee55960 ---------J   02770  PRINT "  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE"
    0x57619ee55b30 ---------J   02780  PRINT "  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO"
    0x57619ee55cd0 ---------J   02790  PRINT "  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF"
    0x57619ee55ed0 ---------J   02800  PRINT "  OCCURRENCE.":PRINT
    0x57619ee560a0 ---------J   02810  PRINT " EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10"
    0x57619ee56260 ---------J   02820  PRINT "  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO"
    0x57619ee56430 ---------J   02830  PRINT "  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS"
    0x57619ee56600 ---------J   02840  PRINT "  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY"
    0x57619ee567c0 ---------J   02850  PRINT "  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS"
    0x57619ee569e0 ---------J   02860  PRINT "  PROCESS UNTIL 4 ROOMS HAVE BEEN ENTERED.":GOSUB 3410
    0x57619ee56ba0 ---------J   02870  PRINT " NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING"
    0x57619ee56d70 ---------J   02880  PRINT "  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE"
    0x57619ee56f40 ---------J   02890  PRINT "  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED"
    0x57619ee57100 ---------J   02900  PRINT "  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING"
    0x57619ee572d0 ---------J   02910  PRINT "  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW" 
    0x57619ee574a0 ---------J   02920  PRINT "  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT"
    0x57619ee57660 ---------J   02930  PRINT "  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS."
    0x57619ee57860 ---------J   02940  PRINT:PRINT "IF THE ARROW HITS THE WUMPUS, YOU WIN."
    0x57619ee579f0 ---------J   02950  PRINT "IF THE ARROW HITS YOU, YOU LOSE."
    0x57619ee57ca0 ---------J   02960  GOSUB 3410:PRINT:PRINT "WARNINGS:":PRINT
    0x57619ee57e70 ---------J   02970  PRINT "WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,"
    0x57619ee581b0 ---------J   02980  PRINT "THE COMPUTER SAYS:":PRINT:PRINT "WUMPUS - 'I SMELL A WUMPUS'"
    0x57619ee584f0 ---------J   02990  PRINT "BAT - 'BATS NEARBY'":PRINT "PIT - 'I FEEL A DRAFT'":PRINT
    0x57619ee586b0 ---------J   03000  PRINT "BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!"
    0x57619ee589b0 ---------J   03010  PRINT @ 910,"";:INPUT "WOULD YOU LIKE THE DESCRIPTION OF THE CAVES";Z$
    0x57619ee58a40 ---------J   03020  CLS
    0x57619ee58ea0 ---------J   03030  IF LEFT$(Z$,1)="N" THEN RETURN
    0x57619ee590a0 ---------J   03040  PRINT "THE CAVES ARE:":PRINT
    0x57619ee59270 ---------J   03050  PRINT "0 - DODECAHEDRON:  THE ROOMS OF THIS CAVE ARE ON A 12-SIDED"
    0x57619ee59440 ---------J   03060  PRINT "    OBJECT, EACH SIDE FORMING A PENTAGON.  THE ROOMS ARE AT THE"
    0x57619ee595f0 ---------J   03070  PRINT "    CORNERS OF THE PENTAGONS, EACH ROOM HAVING TUNNELS LEADING"
    0x57619ee597f0 ---------J   03080  PRINT "    TO 3 OTHER ROOMS.":PRINT
    0x57619ee599c0 ---------J   03090  PRINT "1 - MOBIUS STRIP:  THIS CAVE IS TWO ROOMS WIDE AND 10 ROOMS"
    0x57619ee59b70 ---------J   03100  PRINT "    AROUND (LIKE A BELT).  YOU WILL NOTICE THERE IS A HALF-"
    0x57619ee59d70 ---------J   03110  PRINT "    TWIST SOMEWHERES.":PRINT
    0x57619ee59f40 ---------J   03120  PRINT "2 - STRING OF BEADS:  FIVE BEADS IN A CIRCLE.  EACH BEAD IS A"
    0x57619ee5a110 ---------J   03130  PRINT "    DIAMOND WITH A VERTICAL CROSS-BAR.  THE RIGHT AND LEFT"
    0x57619ee5a2b0 ---------J   03140  PRINT "    CORNERS LEAD TO NEIGHBORING BEADS.  (THIS ONE IS DIFFICULT"
    0x57619ee5a4b0 ---------J   03150  PRINT "    TO PLAY).":GOSUB 3410
    0x57619ee5a670 ---------J   03160  PRINT "3 - HEX NETWORK:  IMAGINE A HEX TILE FLOOR.  TAKE A RECTANGLE"
    0x57619ee5a840 ---------J   03170  PRINT "    WITH 20 POINTS (INTERSECTIONS) INSIDE (4X5).  JOIN RIGHT"
    0x57619ee5a9f0 ---------J   03180  PRINT "    AND LEFT SIDES TO MAKE A CYLINDER.  THEN JOIN TOP AND BOT-"
    0x57619ee5ab80 ---------J   03190  PRINT "    TOM TO FORM A TORUS (DOUGHNUT)."
    0x57619ee5ad90 ---------J   03200  PRINT "    HAVE FUN IMAGINING THIS ONE!":PRINT
    0x57619ee5af50 ---------J   03210  PRINT "CAVES 0-3 ARE REGULAR IN THE SENSE THAT EACH ROOM GOES TO THREE"
    0x57619ee5b0f0 ---------J   03220  PRINT "OTHER ROOMS AND THE TUNNELS ALLOW TWO-WAY TRAFFIC."
    0x57619ee5b300 ---------J   03230  PRINT "HERE ARE SOME IRREGULAR CAVES:":PRINT
    0x57619ee5b4d0 ---------J   03240  PRINT "4 - DENDRITE WITH DEGENERACIES:  PULL A PLANT FROM THE GROUND."
    0x57619ee5b6a0 ---------J   03250  PRINT "    THE ROOTS AND BRANCHES FROM A DENDRITE - IE, THERE ARE NO"
    0x57619ee5b870 ---------J   03260  PRINT "    LOOPING PATHS.  DEGENERACY MEANS A) SOME ROOMS CONNECT TO"
    0x57619ee5ba30 ---------J   03270  PRINT "    THEMSELVES OR B) THAT TWO ROOMS HAVE MORE THAN ONE TUNNEL"
    0x57619ee5bbb0 ---------J   03280  PRINT "    BETWEEN THEM IE, 12 HAS TWO TUNNELS TO 13."
    0x57619ee5bc70 ---------J   03290  GOSUB 3410
    0x57619ee5be30 ---------J   03300  PRINT "5 - ONE WAY LATTICE:  HERE ALL TUNNELS GO ONE WAY ONLY.  TO"
    0x57619ee5c060 ---------J   03310  PRINT "    RETURN, YOU MUST GO AROUND THE CAVE (ABOUT 5 MOVES).":PRINT
    0x57619ee5c220 ---------J   03320  PRINT "6 - ENTER YOUR OWN CAVE:  THE COMPUTER WILL ASK YOU FOR THE"
    0x57619ee5c410 ---------J   03330  PRINT "    ROOMS NEXT TO EACH ROOM IN THE CAVE.":PRINT
    0x57619ee5c610 ---------J   03340  PRINT "   FOR EXAMPLE:":PRINT
    0x57619ee5c7e0 ---------J   03350  PRINT "    TO SET ROOM #1 UP WITH TUNNELS GOING TO ROOMS 2, 3 AND 4"
    0x57619ee5c980 ---------J   03360  PRINT "    TYPE '2' (ENTER) '3' (ENTER) '4' (ENTER) WHEN PROMPTED"
    0x57619ee5cb00 ---------J   03370  PRINT "    WITH 'ROOM #1'"
    0x57619ee5ce10 ---------J   03380  PRINT:PRINT TAB(24);"HAPPY HUNTING!!!"
    0x57619ee5d0b0 ---------J   03390  PRINT TAB(27);">>>------->"
    0x57619ee5d160 ---------J   03400  GOSUB 3410:RETURN
    0x57619ee5d330 ---------K G 03410  PRINT @ 975,"PRESS 'ENTER' TO CONTINUE ";
    0x57619ee5dab0 ---------K T 03415  Z$=INKEY$:Z$=Z$:IF Z$="" THEN 3415 
    0x57619ee5de80 ---------K   03420  IF ASC(Z$)<>13 THEN 3415 ELSE CLS:RETURN
    0x57619ee5e300 ---------L G 05000  FOR Q=1 TO P1:NEXT Q:RETURN
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00080      00100T
     00120      00090T, 00650T
     00190      00270T, 00640T
     00280      00260T
     00310      00610T
     00350      00450T
     00370      00410T
     00400      00380T
     00440      00380T
     00460      00420T
     00510      00460T
     00530      00490T
     00660      00350G
     00720      00710T
     00740      00710T, 00710T
     00760      00710T, 00710T
     00770      00700T, 00730T, 00750T
     00830      00370G
     00840      00890T
     00890      00860T
     00920      00400G
     00950      00970T, 00980T
     01000      01030T
     01190      01150T
     01280      01390T
     01290      01200T, 01270T
     01310      01190G
     01320      01190G
     01370      01320T
     01400      01250G
     01410      01670G
     01470      01420T, 01440T
     01480      00440G
     01500      01520T, 01530T, 01600T
     01620      01560T, 01580T, 01870T
     01710      01640T, 01680T
     01900      01960T
     01930      01900T
     01970      01940T
     02040      02000T
     02060      01980T
     02070      02050T
     02080      02060G
     02100      02200T
     02230      02040G
     02300      00570T
     02580      00110G
     03410      02650G, 02750G, 02860G, 03150G, 03290G
     03415      03415T
     05000      01730G, 01750G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x57619ee16db0 (00001)   0x57619ee16db0 (00001)   0x57619ee5e300 (05000)   0x57619ee534e0 (02560)   
   B) 0x57619ee247b0 (00660)   0x57619ee247b0 (00660)   0x57619ee27190 (00820)   0x57619ee27190 (00820)   
   C) 0x57619ee27210 (00830)   0x57619ee27210 (00830)   0x57619ee27ad0 (00880)   0x57619ee28170 (00910)   
   D) 0x57619ee28200 (00920)   0x57619ee28200 (00920)   0x000000000000 (00000)   0x57619ee29a60 (01030)   
   E) 0x57619ee2dbb0 (01280)   0x57619ee2dff0 (01310)   0x57619ee2dc00 (01290)   0x57619ee2ef20 (01390)   
   F) 0x57619ee2efa0 (01400)   0x57619ee2efa0 (01400)   0x57619ee30220 (01470)   0x57619ee30220 (01470)   
   G) 0x57619ee302a0 (01480)   0x57619ee302a0 (01480)   0x57619ee329d0 (01690)   0x57619ee36f40 (01810)   
   H) 0x57619ee3a980 (02080)   0x57619ee3a980 (02080)   0x57619ee3cff0 (02220)   0x57619ee3cff0 (02220)   
   I) 0x57619ee3d070 (02230)   0x57619ee3d070 (02230)   0x57619ee3dc50 (02290)   0x57619ee3dc50 (02290)   
   J) 0x57619ee53550 (02570)   0x57619ee53620 (02580)   0x57619ee5d160 (03400)   0x57619ee5d160 (03400)   
   K) 0x57619ee5d330 (03410)   0x57619ee5d330 (03410)   0x57619ee5de80 (03420)   0x57619ee5de80 (03420)   
   L) 0x57619ee5e300 (05000)   0x57619ee5e300 (05000)   0x57619ee5e300 (05000)   0x57619ee5e300 (05000)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!
    NOTE: Routine G overlaps, or is tangled with, routine A!
    NOTE: Routine H overlaps, or is tangled with, routine A!
    NOTE: Routine I overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/wumpus2a.bas: 
 *
                   +----------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |          | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |          | |
        Address    v          v v Original BASIC statement
    -------------- ------------ - ------------------------------------------------------------------------------
    0x57619ee16db0 ---------A   00001  REM NOTE
    0x57619ee16f30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x57619ee16e70 ---------A   00010  REM  WUMPUS II  FROM THE LAWRENCE HALL OF SCIENCE
    0x57619ee16ff0 ---------A   00020  REM  TRANSFERED TO SOL EBASIC BY DAVID FOX
    0x57619ee052f0 ---------A   00030  REM  REVISED FOR TRS-80 LEVEL II BASIC BY DOUG BENEDICT
    0x57619ee149e0 ----------   00040  CLS
    0x57619ee146d0 ---------A        a PRINT@282,"WUMPUS  II"
    0x57619ee14670 ---------A   00041  PRINT@409,"COPYRIGHT BY"
    0x57619ee16aa0 ---------A   00042  PRINT@470,"CREATIVE COMPUTING"
    0x57619ee15040 ---------A   00043  PRINT@536,"P.O. BOX 789-M"
    0x57619ee14e40 ---------A   00044  PRINT@593,"MORRISTOWN, NEW JERSEY 07960"
    0x57619ee14be0 ----------   00045  FORI=1TO2000
    0x57619ee165e0 ---------A        a NEXTI
    0x57619ee1cfe0 ---------A   00050  DIM I$(6),L(6),M(6),P(5),S(20,3)
    0x57619ee1d030 ----------   00060  CLS
    0x57619ee1d1d0 ---------A        a PRINT @ 390,"";
    0x57619ee1d380 ---------A   00070  PRINT "* * *  T H E  G A M E  O F  W U M P U S  II  * * *"
    0x57619ee1d4e0 ---------- T 00080  PRINT @ 896,"";
    0x57619ee1d710 ---------A T      a INPUT "WOULD YOU LIKE INSTRUCTIONS";Z$
    0x57619ee1db40 ---------A   00090  IF LEFT$(Z$,1)="N" THEN 120
    0x57619ee1df60 ---------A   00100  IF LEFT$(Z$,1)<>"Y" THEN 80
    0x57619ee1e220 ----------   00110  F3=1
    0x57619ee1e2a0 ---------A        a GOSUB 2580
    0x57619ee1e320 ---------A T 00120  REM  CHOOSE AND SET UP CAVE
    0x57619ee1e390 ----------   00130  GOSUB 1890
    0x57619ee1e5b0 ---------A        a F3=1
    0x57619ee1e630 ---------A   00170  REM  LOCATE L ARRAY ITEMS
    0x57619ee1e6f0 ---------A   00180  REM  1=YOU,2=WUMPUS,3&4=PITS,5&6=BATS
    0x57619ee1eaa0 ---------A T 00190  FOR J=1 TO 6
    0x57619ee1ee80 ---------A   00200  L(J)=RND(20)
    0x57619ee1f270 ---------A   00210  M(J)=L(J)
    0x57619ee1f3a0 ---------A   00220  NEXT J
    0x57619ee1f470 ---------A   00230  REM  CHECK FOR CROSSOVERS (IE L(1)=L(2),ETC)
    0x57619ee1f760 ---------A   00240  FOR J=1 TO 6
    0x57619ee1fb20 ---------A   00250  FOR K=J TO 6
    0x57619ee1fdc0 ---------A   00260  IF J=K THEN 280
    0x57619ee203d0 ----------   00270  IF L(J)=L(K) THEN J=7
    0x57619ee205d0 ----------        a K=7
    0x57619ee20640 ---------A        b GOTO 190
    0x57619ee20770 ---------A T 00280  NEXT K
    0x57619ee208c0 ---------A   00290  NEXT J
    0x57619ee20b60 ---------A   00300  REM  SET # ARROWS
    0x57619ee20e50 ---------A T 00310  A=5
    0x57619ee21140 ---------A   00320  L=L(1)
    0x57619ee211b0 ---------A   00330  REM  RUN THE GAME
    0x57619ee21260 ---------A   00340  REM  HAZARD WARNINGS & LOCATION
    0x57619ee21300 ---------A T 00350  GOSUB 660
    0x57619ee21370 ---------A   00360  REM  MOVE OR SHOOT
    0x57619ee21400 ---------A T 00370  GOSUB 830
    0x57619ee21790 ---------A   00380  ON O GOTO 400,440
    0x57619ee21810 ---------A   00390  REM  SHOOT
    0x57619ee218a0 ---------A T 00400  GOSUB 920
    0x57619ee21bb0 ---------A   00410  IF F=0 THEN 370
    0x57619ee21c30 ---------A   00420  GOTO 460
    0x57619ee21ca0 ---------A   00430  REM  MOVE
    0x57619ee21d30 ---------A T 00440  GOSUB 1480
    0x57619ee21f80 ---------A   00450  IF F=0 THEN 350
    0x57619ee221e0 ---------A T 00460  IF F>0 THEN 510
    0x57619ee22260 ---------A   00470  REM  LOSE
    0x57619ee22420 ---------A   00480  PRINT "HA HA HA - YOU LOSE!     ";
    0x57619ee224a0 ---------A   00490  GOTO 530
    0x57619ee22510 ---------A   00500  REM  WIN
    0x57619ee226d0 ---------A T 00510  PRINT "HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!"
    0x57619ee22750 ---------A   00520  PRINT
    0x57619ee22a30 ---------A T 00530  FOR J=1 TO 6
    0x57619ee22e30 ---------A   00540  L(J)=M(J)
    0x57619ee22f60 ---------A   00550  NEXT J
    0x57619ee230e0 ----------   00560  INPUT "WANT TO PLAY AGAIN";I$
    0x57619ee23170 ---------A        a CLS
    0x57619ee23580 ---------A   00570  IF LEFT$(I$,1)<>"Y" THEN 2300
    0x57619ee23610 ---------A   00580  PRINT
    0x57619ee23790 ---------A   00590  INPUT "SAME SET-UP";I$
    0x57619ee23820 ---------A   00600  PRINT
    0x57619ee23c50 ---------A   00610  IF LEFT$(I$,1)="Y" THEN 310
    0x57619ee241e0 ---------A   00620  INPUT "SAME CAVE";I$
    0x57619ee24270 ---------A   00630  PRINT
    0x57619ee24690 ---------A   00640  IF LEFT$(I$,1)="Y" THEN 190
    0x57619ee24730 ---------A   00650  GOTO 120
    0x57619ee247b0 ---------B G 00660  REM  PRINT LOCATION & HAZARD WARNINGS
    0x57619ee24840 ---------B   00670  PRINT
    0x57619ee24b20 ---------B   00680  FOR J=2 TO 6
    0x57619ee24e10 ---------B   00690  FOR K=1 TO 3
    0x57619ee25400 ---------B   00700  IF S(L(1),K)<>L(J) THEN 770
    0x57619ee25a30 ---------B   00710  ON J-1 GOTO 720,740,740,760,760
    0x57619ee25b90 ---------B T 00720  PRINT "I SMeLL A WUMPUS!"
    0x57619ee25c20 ---------B   00730  GOTO 770
    0x57619ee25d70 ---------B T 00740  PRINT "I FEEL A DRAFT"
    0x57619ee25e00 ---------B   00750  GOTO 770
    0x57619ee25f50 ---------B T 00760  PRINT "BATS NEARBY!"
    0x57619ee26090 ---------B T 00770  NEXT K
    0x57619ee261e0 ---------B   00780  NEXT J
    0x57619ee26570 ---------B   00790  PRINT "YOU ARE IN ROOM";L(1);
    0x57619ee270b0 ---------B   00800  PRINT "    TUNNELS LEAD TO";S(L,1);",";S(L,2);"AND";S(L,3)
    0x57619ee27130 ---------B   00810  PRINT
    0x57619ee27190 ---------B   00820  RETURN
    0x57619ee27210 ---------C G 00830  REM  CHOSE OPTION
    0x57619ee273b0 ---------C T 00840  INPUT "SHOOT OR MOVE";I$
    0x57619ee27440 ---------C   00850  PRINT
    0x57619ee27860 ---------C   00860  IF LEFT$(I$,1)<>"S" THEN 890
    0x57619ee27a80 ---------C   00870  O=1
    0x57619ee27ad0 ---------C   00880  RETURN
    0x57619ee27f00 ---------C T 00890  IF LEFT$(I$,1)<>"M" THEN 840
    0x57619ee28120 ---------C   00900  O=2
    0x57619ee28170 ---------C   00910  RETURN
    0x57619ee28200 ---------D G 00920  REM  ARROW ROUTINE
    0x57619ee28440 ---------D   00930  F=0
    0x57619ee284b0 ---------D   00940  REM  PATH OF ARROW
    0x57619ee28710 ---------D T 00950  INPUT "NUMBER OF ROOMS";J9
    0x57619ee28790 ---------D   00960  PRINT
    0x57619ee289f0 ---------D   00970  IF J9<1 THEN 950
    0x57619ee28c50 ---------D   00980  IF J9>5 THEN 950
    0x57619ee28f60 ---------D   00990  FOR K=1 TO J9
    0x57619ee291e0 ---------D T 01000  INPUT "ROOM #";P(K)
    0x57619ee29860 ---------D   01010  IF P(K)>0 THEN IF P(K)<21 THEN 1040
    0x57619ee299e0 ---------D   01020  PRINT "   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY."
    0x57619ee29a60 ---------D   01030  GOTO 1000
    0x57619ee29bd0 ----------   01040  PRINT "  ";
    0x57619ee29d10 ----------   01050  NEXT K
    0x57619ee29da0 ----------   01060  PRINT
    0x57619ee29e20 ---------A   01070  REM  SHOOT ARROW
    0x57619ee2a170 ----------   01080  A=A-1
    0x57619ee2a520 ----------   01090  A9=L(1)
    0x57619ee2a810 ----------   01100  FOR K=1 TO J9
    0x57619ee2aaf0 ----------   01110  F1=0
    0x57619ee2ae90 ----------   01120  FOR K1=1 TO 3
    0x57619ee2b5a0 ----------   01130  IF S(A9,K1)=P(K) THEN F1=1
    0x57619ee2b6e0 ----------   01140  NEXT K1
    0x57619ee2b960 ----------   01150  IF F1=1 THEN 1190
    0x57619ee2b9f0 ---------A   01160  REM  NO TUNNEL FOR ARROW
    0x57619ee2bec0 ----------   01170  A9=S(A9,RND(3))
    0x57619ee2c0e0 ----------   01180  F1=2
    0x57619ee2c3c0 ---------- T 01190  ON F1 GOSUB 1310,1320
    0x57619ee2c9f0 ----------   01200  IF ABS(F)=1 THEN K=J9+1
    0x57619ee2ca70 ----------        a GOTO 1290
    0x57619ee2cba0 ----------   01210  NEXT K
    0x57619ee2cd10 ----------   01220  PRINT "MISSED"
    0x57619ee2cd90 ----------   01230  PRINT
    0x57619ee2ce10 ---------A   01240  REM  MOVE WUMPUS
    0x57619ee2cea0 ----------   01250  GOSUB 1400
    0x57619ee2d720 ---------A   01260  REM  AMMO CHECK
    0x57619ee2d990 ----------   01270  IF A>0 THEN 1290
    0x57619ee2dbb0 ---------E T 01280  F=-1
    0x57619ee2dc00 ---------E T 01290  RETURN
    0x57619ee2dcb0 ---------E   01300  REM  SEE IF ARROW IS AT L(1) OR L(2)
    0x57619ee2dff0 ---------E G 01310  A9=P(K)
    0x57619ee2e350 ---------E G 01320  IF A9<>L(2) THEN 1370
    0x57619ee2e690 ---------E   01330  PRINT "AHA!  YOU GOT THE WUMPUS!!  HE WAS IN ROOM";L(2)
    0x57619ee2e710 ---------E   01340  PRINT
    0x57619ee2e930 ---------E   01350  F=1
    0x57619ee2e980 ---------E   01360  RETURN
    0x57619ee2ed20 ---------E T 01370  IF A9<>L(1) THEN RETURN
    0x57619ee2ee90 ---------E   01380  PRINT "OUCH!  ARROW GOT YOU!!"
    0x57619ee2ef20 ---------E   01390  GOTO 1280
    0x57619ee2efa0 ---------F G 01400  REM  MOVE WUMPUS ROUTINE
    0x57619ee2f2b0 ---------F G 01410  K=RND(4)
    0x57619ee2f500 ---------F   01420  IF K=4 THEN 1470
    0x57619ee2fa90 ---------F   01430  L(2)=S(L(2),K)
    0x57619ee2fde0 ---------F   01440  IF L(2)<>L THEN 1470
    0x57619ee2ff30 ----------   01450  PRINT "TSK TSK TSK - THE WUMPUS GOT YOU!"
    0x57619ee2ffb0 ---------F        a PRINT
    0x57619ee301d0 ---------F   01460  F=-1
    0x57619ee30220 ---------F T 01470  RETURN
    0x57619ee302a0 ---------G G 01480  REM  MOVE ROUTINE
    0x57619ee304e0 ---------G   01490  F=0
    0x57619ee30650 ---------G T 01500  INPUT "WHERE TO";L
    0x57619ee306d0 ---------G   01510  PRINT
    0x57619ee30930 ---------G   01520  IF L<1 THEN 1500
    0x57619ee30b90 ---------G   01530  IF L>20 THEN 1500
    0x57619ee30e80 ---------G   01540  FOR K=1 TO 3
    0x57619ee30f10 ---------G   01550  REM  CHECK IF LEGAL MOVE
    0x57619ee31600 ----------   01560  IF S(L(1),K)=L THEN K=4
    0x57619ee31680 ---------G        a GOTO 1620
    0x57619ee317b0 ----------   01570  NEXT K
    0x57619ee31b20 ----------   01580  IF L=L(1) THEN 1620
    0x57619ee31ca0 ----------   01590  PRINT "NOT POSSIBLE - ";
    0x57619ee31d30 ----------   01600  GOTO 1500
    0x57619ee31da0 ---------A   01610  REM  CHECK FOR HAZARDS
    0x57619ee320b0 ---------G T 01620  L(1)=L
    0x57619ee32120 ---------G   01630  REM  WUMPUS
    0x57619ee324a0 ---------G   01640  IF L<>L(2) THEN 1710
    0x57619ee32610 ---------G   01650  PRINT "... OOPS!  BUMPED A WUMPUS!"
    0x57619ee32690 ---------G   01660  REM  MOVE WUMPUS
    0x57619ee32720 ---------G   01670  GOSUB 1410
    0x57619ee32970 ---------G   01680  IF F=0 THEN 1710
    0x57619ee329d0 ---------G   01690  RETURN
    0x57619ee32a50 ---------G   01700  REM  PIT
    0x57619ee330e0 ---------G T 01710  IF L<>L(3) THEN IF L<>L(4) THEN 1830
    0x57619ee33140 ----------   01720  CLS
    0x57619ee33470 ---------G        a P1=110
    0x57619ee33780 ----------   01730  PRINT CHR$(28);"Y";
    0x57619ee337e0 ----------        a GOSUB 5000
    0x57619ee33930 ----------        b PRINT "Y";
    0x57619ee33990 ----------        c GOSUB 5000
    0x57619ee33ac0 ----------        d PRINT "Y"
    0x57619ee33b20 ----------        e GOSUB 5000
    0x57619ee33d10 ----------        f P1=100
    0x57619ee33e40 ----------        g PRINT "      Y"
    0x57619ee33ee0 ---------G        h GOSUB 5000
    0x57619ee340d0 ----------   01740  P1=90
    0x57619ee34200 ----------        a PRINT "         Y"
    0x57619ee34260 ----------        b GOSUB 5000
    0x57619ee344b0 ---------G        c P1=80
    0x57619ee345e0 ----------   01750  PRINT "          Y"
    0x57619ee34640 ----------        a GOSUB 5000
    0x57619ee34830 ----------        b P1=70
    0x57619ee34960 ----------        c PRINT "           Y"
    0x57619ee34a10 ---------G        d GOSUB 5000
    0x57619ee34ca0 ----------   01760  PRINT TAB(11);"I";
    0x57619ee34d00 ----------        a GOSUB 5000
    0x57619ee34fc0 ---------G        b PRINT TAB(30);"FELL IN A PIT!!"
    0x57619ee35280 ----------   01770  FOR I=1 TO 4
    0x57619ee356a0 ----------        a P1=70-I*10
    0x57619ee35910 ----------        b PRINT TAB(11);"I"
    0x57619ee35970 ----------        c GOSUB 5000
    0x57619ee35aa0 ---------G        d NEXT I
    0x57619ee35da0 ----------   01780  FOR I=1 TO 2
    0x57619ee361c0 ----------        a P1=30-I*10
    0x57619ee36430 ----------        b PRINT TAB(11);"E"
    0x57619ee36490 ----------        c GOSUB 5000
    0x57619ee365c0 ---------G        d NEXT I
    0x57619ee368b0 ----------   01790  FOR I=1 TO 18
    0x57619ee36b30 ----------        a PRINT TAB(11);"."
    0x57619ee36b90 ----------        b GOSUB 5000
    0x57619ee36cc0 ---------G        c NEXT I
    0x57619ee36ef0 ---------G   01800  F=-1
    0x57619ee36f40 ---------G   01810  RETURN
    0x57619ee36fc0 ---------A   01820  REM  BATS
    0x57619ee37680 ----------   01830  IF L<>L(5) THEN IF L<>L(6) THEN 1880
    0x57619ee37810 ----------   01840  PRINT "ZAP--SUPER BAT SNATCH!  ELSEWHEREVILLE FOR YOU!"
    0x57619ee37b90 ----------   01850  FOR Q=1 TO 500
    0x57619ee37cd0 ----------        a NEXT Q
    0x57619ee37fe0 ----------   01860  L=RND(20)
    0x57619ee38050 ----------   01870  GOTO 1620
    0x57619ee380a0 ----------   01880  RETURN
    0x57619ee38120 ---------A   01890  REM  SELECT CAVE
    0x57619ee383b0 ---------- T 01900  IF F3=1 THEN 1930
    0x57619ee385b0 ----------   01910  PRINT @ 896,CHR$(30)
    0x57619ee387f0 ----------        a PRINT @ 960,CHR$(30);
    0x57619ee38980 ----------   01920  PRINT @ 901,"";
    0x57619ee38bd0 ---------- T 01930  INPUT "CAVE # (0-6)";N
    0x57619ee39060 ----------   01940  IF N>=0 AND N<=6 THEN 1970
    0x57619ee39320 ----------   01950  IF F3=1 THEN PRINT
    0x57619ee393a0 ----------   01960  GOTO 1900
    0x57619ee39440 ---------- T 01970  CLS
    0x57619ee39650 ----------   01975  PRINT CHR$(28);
    0x57619ee399f0 ----------        a IF N<6 THEN PRINT "THE WUMPUS IS HIDING."
    0x57619ee39c50 ----------   01980  IF N=6 THEN 2060
    0x57619ee39cd0 ----------   01990  RESTORE
    0x57619ee39f20 ----------   02000  IF N=0 THEN 2040
    0x57619ee3a3e0 ----------   02010  FOR X9=1 TO N*60
    0x57619ee3a600 ----------   02020  READ I9
    0x57619ee3a730 ----------   02030  NEXT X9
    0x57619ee3a7c0 ---------- T 02040  GOSUB 2230
    0x57619ee3a830 ----------   02050  GOTO 2070
    0x57619ee3a8a0 ---------- T 02060  GOSUB 2080
    0x57619ee3a8f0 ---------- T 02070  RETURN
    0x57619ee3a980 ---------H G 02080  REM  INPUT OWN CAVE
    0x57619ee3ac70 ---------H   02090  FOR J=1 TO 20
    0x57619ee3af00 ---------H T 02100  PRINT "ROOM #";J;
    0x57619ee3b240 ---------H   02110  INPUT "IS CONNECTED TO :";S(J,1)
    0x57619ee3b540 ----------   02120  INPUT "AND";S(J,2)
    0x57619ee3b860 ---------H        a INPUT "AND";S(J,3)
    0x57619ee3b8e0 ---------H   02130  PRINT
    0x57619ee3bbc0 ---------H   02140  F5=0
    0x57619ee3beb0 ---------H   02150  FOR K=1 TO 3
    0x57619ee3c700 ---------H   02160  IF S(J,K)>0 THEN IF S(J,K)<21 THEN 2190
    0x57619ee3c880 ---------H   02170  PRINT "ERROR** ENTER ROOM NUMBERS FROM 1 TO 20 ONLY!!"
    0x57619ee3caa0 ---------H   02180  F5=1
    0x57619ee3cbd0 ---------H   02190  NEXT K
    0x57619ee3ce40 ---------H   02200  IF F5=1 THEN 2100
    0x57619ee3cf80 ---------H   02210  NEXT J
    0x57619ee3cff0 ---------H   02220  RETURN
    0x57619ee3d070 ---------I G 02230  REM  INPUT CAVE
    0x57619ee3d360 ---------I   02240  FOR J=1 TO 20
    0x57619ee3d640 ---------I   02250  FOR K=1 TO 3
    0x57619ee3d960 ---------I   02260  READ S(J,K)
    0x57619ee3da90 ---------I   02270  NEXT K
    0x57619ee3dbe0 ---------I   02280  NEXT J
    0x57619ee3dc50 ---------I   02290  RETURN
    0x57619ee3dde0 ---------A T 02300  PRINT @ 401,"THANK YOU FOR PLAYING WITH ME!"
    0x57619ee3de60 ---------A   02310  RUN"MENU"
    0x57619ee3df00 ----------   02320  PRINT
    0x57619ee3e060 ----------        a PRINT"TO LOAD ANOTHER PROGRAM, TYPE 'CLOAD'."
    0x57619ee3e0c0 ----------        b PRINT
    0x57619ee3e120 ---------A        c END
    0x57619ee3e1a0 ---------A   02330  REM  DODECAHEDRON
    0x57619ee3f5d0 ---------A   02340  DATA 2,5,8,1,3,10,2,4,12,3,5,14,1,4,6,5,7,15,6,8,17,1
    0x57619ee40710 ---------A   02350  DATA 7,8,9,10,18,2,9,11,10,12,19,3,11,13,12,14,20,4,13
    0x57619ee41820 ---------A   02360  DATA 15,6,14,16,15,17,20,7,16,18,9,17,19,11,18,20,13,16,19
    0x57619ee41890 ---------A   02370  REM  MOBIUS STRIP
    0x57619ee42da0 ---------A   02380  DATA 20,2,3,19,1,4,1,4,5,2,3,6,3,6,7,4,5,8,5,8,9,6,7
    0x57619ee43e00 ---------A   02390  DATA 10,7,10,11,8,9,12,9,12,13,10,11,14,11,14,15,12,13
    0x57619ee44f20 ---------A   02400  DATA 16,12,16,17,14,15,18,15,18,19,16,17,20,2,17,20,1,18,19
    0x57619ee44f90 ---------A   02410  REM  STRING OF BEADS
    0x57619ee464a0 ---------A   02420  DATA 2,3,20,1,3,4,1,2,4,2,3,5,4,6,7,5,7,8,5,6,8,6,7
    0x57619ee475e0 ---------A   02430  DATA 9,8,10,11,9,11,12,9,10,12,10,11,13,12,14,15,13,15,1
    0x57619ee486f0 ---------A   02440  DATA 6,13,14,16,14,15,17,16,18,19,17,19,20,17,18,20,1,18,19
    0x57619ee48760 ---------A   02450  REM  HEX NETWORK
    0x57619ee49ab0 ---------A   02460  DATA 6,10,16,6,7,17,7,8,18,8,9,19,9,10,20,1,2,15,2,3,1
    0x57619ee4acd0 ---------A   02470  DATA 1,3,4,12,4,5,13,1,5,14,7,16,20,8,16,17,9,17,18,10
    0x57619ee4bed0 ---------A   02480  DATA 18,19,6,19,20,1,11,12,2,12,13,3,13,14,4,14,15,5,11,15
    0x57619ee4bf50 ---------A   02490  REM  DENDRITE W/ DEGENERACIES
    0x57619ee4d460 ---------A   02500  DATA 1,1,5,2,2,5,3,3,6,4,4,6,1,2,7,3,4,7,5,6,10,8,9
    0x57619ee4e5a0 ---------A   02510  DATA 9,8,8,10,7,9,11,10,13,14,12,13,13,11,12,12,11,15,16
    0x57619ee4f5e0 ---------A   02520  DATA 14,17,18,14,19,20,15,17,17,15,18,18,16,19,19,16,20,20
    0x57619ee2cf10 ---------A   02530  REM  ONE WAY LATTICE
    0x57619ee51290 ---------A   02540  DATA 5,4,8,1,5,6,2,6,7,3,7,8,8,9,12,5,9,10,6,10,11,7
    0x57619ee522f0 ---------A   02550  DATA 11,12,12,13,16,9,13,14,10,14,15,11,15,16,16,17,20,13
    0x57619ee534e0 ---------A   02560  DATA 17,18,14,18,19,15,19,20,1,4,20,1,2,17,2,3,18,3,4,19
    0x57619ee53550 ---------J   02570  REM  INSTRUCTIONS
    0x57619ee53620 ---------J G 02580  CLS
    0x57619ee537d0 ---------J   02590  PRINT "  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3"
    0x57619ee53920 ----------   02600  PRINT "TUNNELS LEADING TO OTHER ROOMS."
    0x57619ee53980 ----------        a PRINT
    0x57619ee53b20 ---------J        b PRINT "HAZARDS:"
    0x57619ee53b80 ----------   02610  PRINT
    0x57619ee53d40 ---------J        a PRINT "BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF"
    0x57619ee53ea0 ----------   02620  PRINT "YOU GO IN THERE, YOU FALL INTO THE PIT AND LOSE!"
    0x57619ee53f60 ---------J        a PRINT
    0x57619ee54130 ---------J   02630  PRINT "SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,"
    0x57619ee542f0 ---------J   02640  PRINT "A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE"
    0x57619ee54440 ----------   02650  PRINT "CAVE WHERE YOU COULD RUN INTO THE..."
    0x57619ee544d0 ---------J        a GOSUB 3410
    0x57619ee54600 ----------   02660  PRINT "WUMPUS:"
    0x57619ee546c0 ---------J        a PRINT
    0x57619ee54890 ---------J   02670  PRINT "THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET"
    0x57619ee54a60 ---------J   02680  PRINT "AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS"
    0x57619ee54c30 ---------J   02690  PRINT "WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW."
    0x57619ee54df0 ---------J   02700  PRINT "IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL."
    0x57619ee54f90 ---------J   02710  PRINT "BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!"
    0x57619ee54ff0 ----------   02720  PRINT
    0x57619ee55130 ----------        a PRINT "YOU:"
    0x57619ee551e0 ---------J        b PRINT
    0x57619ee553a0 ---------J   02730  PRINT "EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW."
    0x57619ee55520 ---------J   02740  PRINT "MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL)."
    0x57619ee555d0 ---------J   02750  GOSUB 3410
    0x57619ee55790 ---------J   02760  PRINT "SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT."
    0x57619ee55960 ---------J   02770  PRINT "  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE"
    0x57619ee55b30 ---------J   02780  PRINT "  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO"
    0x57619ee55cd0 ---------J   02790  PRINT "  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF"
    0x57619ee55e10 ----------   02800  PRINT "  OCCURRENCE."
    0x57619ee55ed0 ---------J        a PRINT
    0x57619ee560a0 ---------J   02810  PRINT " EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10"
    0x57619ee56260 ---------J   02820  PRINT "  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO"
    0x57619ee56430 ---------J   02830  PRINT "  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS"
    0x57619ee56600 ---------J   02840  PRINT "  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY"
    0x57619ee567c0 ---------J   02850  PRINT "  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS"
    0x57619ee56920 ----------   02860  PRINT "  PROCESS UNTIL 4 ROOMS HAVE BEEN ENTERED."
    0x57619ee569e0 ---------J        a GOSUB 3410
    0x57619ee56ba0 ---------J   02870  PRINT " NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING"
    0x57619ee56d70 ---------J   02880  PRINT "  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE"
    0x57619ee56f40 ---------J   02890  PRINT "  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED"
    0x57619ee57100 ---------J   02900  PRINT "  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING"
    0x57619ee572d0 ---------J   02910  PRINT "  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW" 
    0x57619ee574a0 ---------J   02920  PRINT "  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT"
    0x57619ee57660 ---------J   02930  PRINT "  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS."
    0x57619ee576c0 ----------   02940  PRINT
    0x57619ee57860 ---------J        a PRINT "IF THE ARROW HITS THE WUMPUS, YOU WIN."
    0x57619ee579f0 ---------J   02950  PRINT "IF THE ARROW HITS YOU, YOU LOSE."
    0x57619ee57a50 ----------   02960  GOSUB 3410
    0x57619ee57aa0 ----------        a PRINT
    0x57619ee57be0 ----------        b PRINT "WARNINGS:"
    0x57619ee57ca0 ---------J        c PRINT
    0x57619ee57e70 ---------J   02970  PRINT "WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,"
    0x57619ee57fb0 ----------   02980  PRINT "THE COMPUTER SAYS:"
    0x57619ee58010 ----------        a PRINT
    0x57619ee581b0 ---------J        b PRINT "WUMPUS - 'I SMELL A WUMPUS'"
    0x57619ee582f0 ----------   02990  PRINT "BAT - 'BATS NEARBY'"
    0x57619ee58440 ----------        a PRINT "PIT - 'I FEEL A DRAFT'"
    0x57619ee584f0 ---------J        b PRINT
    0x57619ee586b0 ---------J   03000  PRINT "BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!"
    0x57619ee58810 ----------   03010  PRINT @ 910,"";
    0x57619ee589b0 ---------J        a INPUT "WOULD YOU LIKE THE DESCRIPTION OF THE CAVES";Z$
    0x57619ee58a40 ---------J   03020  CLS
    0x57619ee58ea0 ---------J   03030  IF LEFT$(Z$,1)="N" THEN RETURN
    0x57619ee58fe0 ----------   03040  PRINT "THE CAVES ARE:"
    0x57619ee590a0 ---------J        a PRINT
    0x57619ee59270 ---------J   03050  PRINT "0 - DODECAHEDRON:  THE ROOMS OF THIS CAVE ARE ON A 12-SIDED"
    0x57619ee59440 ---------J   03060  PRINT "    OBJECT, EACH SIDE FORMING A PENTAGON.  THE ROOMS ARE AT THE"
    0x57619ee595f0 ---------J   03070  PRINT "    CORNERS OF THE PENTAGONS, EACH ROOM HAVING TUNNELS LEADING"
    0x57619ee59730 ----------   03080  PRINT "    TO 3 OTHER ROOMS."
    0x57619ee597f0 ---------J        a PRINT
    0x57619ee599c0 ---------J   03090  PRINT "1 - MOBIUS STRIP:  THIS CAVE IS TWO ROOMS WIDE AND 10 ROOMS"
    0x57619ee59b70 ---------J   03100  PRINT "    AROUND (LIKE A BELT).  YOU WILL NOTICE THERE IS A HALF-"
    0x57619ee59cb0 ----------   03110  PRINT "    TWIST SOMEWHERES."
    0x57619ee59d70 ---------J        a PRINT
    0x57619ee59f40 ---------J   03120  PRINT "2 - STRING OF BEADS:  FIVE BEADS IN A CIRCLE.  EACH BEAD IS A"
    0x57619ee5a110 ---------J   03130  PRINT "    DIAMOND WITH A VERTICAL CROSS-BAR.  THE RIGHT AND LEFT"
    0x57619ee5a2b0 ---------J   03140  PRINT "    CORNERS LEAD TO NEIGHBORING BEADS.  (THIS ONE IS DIFFICULT"
    0x57619ee5a3f0 ----------   03150  PRINT "    TO PLAY)."
    0x57619ee5a4b0 ---------J        a GOSUB 3410
    0x57619ee5a670 ---------J   03160  PRINT "3 - HEX NETWORK:  IMAGINE A HEX TILE FLOOR.  TAKE A RECTANGLE"
    0x57619ee5a840 ---------J   03170  PRINT "    WITH 20 POINTS (INTERSECTIONS) INSIDE (4X5).  JOIN RIGHT"
    0x57619ee5a9f0 ---------J   03180  PRINT "    AND LEFT SIDES TO MAKE A CYLINDER.  THEN JOIN TOP AND BOT-"
    0x57619ee5ab80 ---------J   03190  PRINT "    TOM TO FORM A TORUS (DOUGHNUT)."
    0x57619ee5acd0 ----------   03200  PRINT "    HAVE FUN IMAGINING THIS ONE!"
    0x57619ee5ad90 ---------J        a PRINT
    0x57619ee5af50 ---------J   03210  PRINT "CAVES 0-3 ARE REGULAR IN THE SENSE THAT EACH ROOM GOES TO THREE"
    0x57619ee5b0f0 ---------J   03220  PRINT "OTHER ROOMS AND THE TUNNELS ALLOW TWO-WAY TRAFFIC."
    0x57619ee5b240 ----------   03230  PRINT "HERE ARE SOME IRREGULAR CAVES:"
    0x57619ee5b300 ---------J        a PRINT
    0x57619ee5b4d0 ---------J   03240  PRINT "4 - DENDRITE WITH DEGENERACIES:  PULL A PLANT FROM THE GROUND."
    0x57619ee5b6a0 ---------J   03250  PRINT "    THE ROOTS AND BRANCHES FROM A DENDRITE - IE, THERE ARE NO"
    0x57619ee5b870 ---------J   03260  PRINT "    LOOPING PATHS.  DEGENERACY MEANS A) SOME ROOMS CONNECT TO"
    0x57619ee5ba30 ---------J   03270  PRINT "    THEMSELVES OR B) THAT TWO ROOMS HAVE MORE THAN ONE TUNNEL"
    0x57619ee5bbb0 ---------J   03280  PRINT "    BETWEEN THEM IE, 12 HAS TWO TUNNELS TO 13."
    0x57619ee5bc70 ---------J   03290  GOSUB 3410
    0x57619ee5be30 ---------J   03300  PRINT "5 - ONE WAY LATTICE:  HERE ALL TUNNELS GO ONE WAY ONLY.  TO"
    0x57619ee5bfa0 ----------   03310  PRINT "    RETURN, YOU MUST GO AROUND THE CAVE (ABOUT 5 MOVES)."
    0x57619ee5c060 ---------J        a PRINT
    0x57619ee5c220 ---------J   03320  PRINT "6 - ENTER YOUR OWN CAVE:  THE COMPUTER WILL ASK YOU FOR THE"
    0x57619ee5c380 ----------   03330  PRINT "    ROOMS NEXT TO EACH ROOM IN THE CAVE."
    0x57619ee5c410 ---------J        a PRINT
    0x57619ee5c550 ----------   03340  PRINT "   FOR EXAMPLE:"
    0x57619ee5c610 ---------J        a PRINT
    0x57619ee5c7e0 ---------J   03350  PRINT "    TO SET ROOM #1 UP WITH TUNNELS GOING TO ROOMS 2, 3 AND 4"
    0x57619ee5c980 ---------J   03360  PRINT "    TYPE '2' (ENTER) '3' (ENTER) '4' (ENTER) WHEN PROMPTED"
    0x57619ee5cb00 ---------J   03370  PRINT "    WITH 'ROOM #1'"
    0x57619ee5cb60 ----------   03380  PRINT
    0x57619ee5ce10 ---------J        a PRINT TAB(24);"HAPPY HUNTING!!!"
    0x57619ee5d0b0 ---------J   03390  PRINT TAB(27);">>>------->"
    0x57619ee5d110 ----------   03400  GOSUB 3410
    0x57619ee5d160 ---------J        a RETURN
    0x57619ee5d330 ---------K G 03410  PRINT @ 975,"PRESS 'ENTER' TO CONTINUE ";
    0x57619ee5d610 ---------- T 03415  Z$=INKEY$
    0x57619ee5d820 ---------- T      a Z$=Z$
    0x57619ee5dab0 ---------K T      b IF Z$="" THEN 3415 
    0x57619ee5de20 ----------   03420  IF ASC(Z$)<>13 THEN 3415 ELSE CLS
    0x57619ee5de80 ---------K        a RETURN
    0x57619ee5e170 ---------- G 05000  FOR Q=1 TO P1
    0x57619ee5e2b0 ---------- G      a NEXT Q
    0x57619ee5e300 ---------L G      b RETURN
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/wumpus2a.bas: 
 *
                   +----------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |          | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |          | |
        Address    v          v v Original BASIC statement
    -------------- ------------ - ------------------------------------------------------------------------------
    0x57619ee16db0 ---------A T 01000  REM NOTE
    0x57619ee16f30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x57619ee16e70 ---------A   01020  REM  WUMPUS II  FROM THE LAWRENCE HALL OF SCIENCE
    0x57619ee16ff0 ---------A   01030  REM  TRANSFERED TO SOL EBASIC BY DAVID FOX
    0x57619ee052f0 ---------A   01040  REM  REVISED FOR TRS-80 LEVEL II BASIC BY DOUG BENEDICT
    0x57619ee149e0 ----------   01050  CLS
    0x57619ee146d0 ---------A   01060  PRINT@282,"WUMPUS  II"
    0x57619ee14670 ---------A   01070  PRINT@409,"COPYRIGHT BY"
    0x57619ee16aa0 ---------A   01080  PRINT@470,"CREATIVE COMPUTING"
    0x57619ee15040 ---------A   01090  PRINT@536,"P.O. BOX 789-M"
    0x57619ee14e40 ---------A   01100  PRINT@593,"MORRISTOWN, NEW JERSEY 07960"
    0x57619ee14be0 ----------   01110  FORI=1TO2000
    0x57619ee165e0 ---------A   01120  NEXTI
    0x57619ee1cfe0 ---------A   01130  DIM I$(6),L(6),M(6),P(5),S(20,3)
    0x57619ee1d030 ----------   01140  CLS
    0x57619ee1d1d0 ---------A   01150  PRINT @ 390,"";
    0x57619ee1d380 ---------A   01160  PRINT "* * *  T H E  G A M E  O F  W U M P U S  II  * * *"
    0x57619ee1d4e0 ----------   01170  PRINT @ 896,"";
    0x57619ee1d710 ---------A   01180  INPUT "WOULD YOU LIKE INSTRUCTIONS";Z$
    0x57619ee1db40 ---------A T 01190  IF LEFT$(Z$,1)="N" THEN 1230
    0x57619ee1df60 ---------A   01200  IF LEFT$(Z$,1)<>"Y" THEN 1180
    0x57619ee1e220 ----------   01210  F3=1
    0x57619ee1e2a0 ---------A   01220  GOSUB 4100
    0x57619ee1e320 ---------A   01230  REM  CHOOSE AND SET UP CAVE
    0x57619ee1e390 ----------   01240  GOSUB 3340
    0x57619ee1e5b0 ---------A   01250  F3=1
    0x57619ee1e630 ---------A   01260  REM  LOCATE L ARRAY ITEMS
    0x57619ee1e6f0 ---------A   01270  REM  1=YOU,2=WUMPUS,3&4=PITS,5&6=BATS
    0x57619ee1eaa0 ---------A T 01280  FOR J=1 TO 6
    0x57619ee1ee80 ---------A T 01290  L(J)=RND(20)
    0x57619ee1f270 ---------A   01300  M(J)=L(J)
    0x57619ee1f3a0 ---------A G 01310  NEXT J
    0x57619ee1f470 ---------A G 01320  REM  CHECK FOR CROSSOVERS (IE L(1)=L(2),ETC)
    0x57619ee1f760 ---------A   01330  FOR J=1 TO 6
    0x57619ee1fb20 ---------A   01340  FOR K=J TO 6
    0x57619ee1fdc0 ---------A   01350  IF J=K THEN 1390
    0x57619ee203d0 ----------   01360  IF L(J)=L(K) THEN J=7
    0x57619ee205d0 ---------- T 01370  K=7
    0x57619ee20640 ---------A   01380  GOTO 1280
    0x57619ee20770 ---------A   01390  NEXT K
    0x57619ee208c0 ---------A G 01400  NEXT J
    0x57619ee20b60 ---------A G 01410  REM  SET # ARROWS
    0x57619ee20e50 ---------A   01420  A=5
    0x57619ee21140 ---------A   01430  L=L(1)
    0x57619ee211b0 ---------A   01440  REM  RUN THE GAME
    0x57619ee21260 ---------A   01450  REM  HAZARD WARNINGS & LOCATION
    0x57619ee21300 ---------A   01460  GOSUB 1780
    0x57619ee21370 ---------A T 01470  REM  MOVE OR SHOOT
    0x57619ee21400 ---------A G 01480  GOSUB 1950
    0x57619ee21790 ---------A   01490  ON O GOTO 1510,1550
    0x57619ee21810 ---------A T 01500  REM  SHOOT
    0x57619ee218a0 ---------A   01510  GOSUB 2040
    0x57619ee21bb0 ---------A   01520  IF F=0 THEN 1480
    0x57619ee21c30 ---------A   01530  GOTO 1570
    0x57619ee21ca0 ---------A   01540  REM  MOVE
    0x57619ee21d30 ---------A   01550  GOSUB 2620
    0x57619ee21f80 ---------A   01560  IF F=0 THEN 1460
    0x57619ee221e0 ---------A   01570  IF F>0 THEN 1620
    0x57619ee22260 ---------A   01580  REM  LOSE
    0x57619ee22420 ---------A   01590  PRINT "HA HA HA - YOU LOSE!     ";
    0x57619ee224a0 ---------A   01600  GOTO 1640
    0x57619ee22510 ---------A   01610  REM  WIN
    0x57619ee226d0 ---------A T 01620  PRINT "HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!"
    0x57619ee22750 ---------A   01630  PRINT
    0x57619ee22a30 ---------A   01640  FOR J=1 TO 6
    0x57619ee22e30 ---------A   01650  L(J)=M(J)
    0x57619ee22f60 ---------A   01660  NEXT J
    0x57619ee230e0 ----------   01670  INPUT "WANT TO PLAY AGAIN";I$
    0x57619ee23170 ---------A   01680  CLS
    0x57619ee23580 ---------A   01690  IF LEFT$(I$,1)<>"Y" THEN 3790
    0x57619ee23610 ---------A   01700  PRINT
    0x57619ee23790 ---------A T 01710  INPUT "SAME SET-UP";I$
    0x57619ee23820 ---------A   01720  PRINT
    0x57619ee23c50 ---------A   01730  IF LEFT$(I$,1)="Y" THEN 1420
    0x57619ee241e0 ---------A   01740  INPUT "SAME CAVE";I$
    0x57619ee24270 ---------A   01750  PRINT
    0x57619ee24690 ---------A   01760  IF LEFT$(I$,1)="Y" THEN 1280
    0x57619ee24730 ---------A   01770  GOTO 1230
    0x57619ee247b0 ---------B   01780  REM  PRINT LOCATION & HAZARD WARNINGS
    0x57619ee24840 ---------B   01790  PRINT
    0x57619ee24b20 ---------B   01800  FOR J=2 TO 6
    0x57619ee24e10 ---------B   01810  FOR K=1 TO 3
    0x57619ee25400 ---------B   01820  IF S(L(1),K)<>L(J) THEN 1890
    0x57619ee25a30 ---------B   01830  ON J-1 GOTO 1840,1860,1860,1880,1880
    0x57619ee25b90 ---------B   01840  PRINT "I SMeLL A WUMPUS!"
    0x57619ee25c20 ---------B   01850  GOTO 1890
    0x57619ee25d70 ---------B   01860  PRINT "I FEEL A DRAFT"
    0x57619ee25e00 ---------B   01870  GOTO 1890
    0x57619ee25f50 ---------B   01880  PRINT "BATS NEARBY!"
    0x57619ee26090 ---------B   01890  NEXT K
    0x57619ee261e0 ---------B T 01900  NEXT J
    0x57619ee26570 ---------B   01910  PRINT "YOU ARE IN ROOM";L(1);
    0x57619ee270b0 ---------B   01920  PRINT "    TUNNELS LEAD TO";S(L,1);",";S(L,2);"AND";S(L,3)
    0x57619ee27130 ---------B T 01930  PRINT
    0x57619ee27190 ---------B   01940  RETURN
    0x57619ee27210 ---------C   01950  REM  CHOSE OPTION
    0x57619ee273b0 ---------C   01960  INPUT "SHOOT OR MOVE";I$
    0x57619ee27440 ---------C T 01970  PRINT
    0x57619ee27860 ---------C   01980  IF LEFT$(I$,1)<>"S" THEN 2010
    0x57619ee27a80 ---------C   01990  O=1
    0x57619ee27ad0 ---------C   02000  RETURN
    0x57619ee27f00 ---------C   02010  IF LEFT$(I$,1)<>"M" THEN 1960
    0x57619ee28120 ---------C   02020  O=2
    0x57619ee28170 ---------C   02030  RETURN
    0x57619ee28200 ---------D T 02040  REM  ARROW ROUTINE
    0x57619ee28440 ---------D   02050  F=0
    0x57619ee284b0 ---------D T 02060  REM  PATH OF ARROW
    0x57619ee28710 ---------D T 02070  INPUT "NUMBER OF ROOMS";J9
    0x57619ee28790 ---------D G 02080  PRINT
    0x57619ee289f0 ---------D   02090  IF J9<1 THEN 2070
    0x57619ee28c50 ---------D T 02100  IF J9>5 THEN 2070
    0x57619ee28f60 ---------D   02110  FOR K=1 TO J9
    0x57619ee291e0 ---------D   02120  INPUT "ROOM #";P(K)
    0x57619ee29860 ---------D   02130  IF P(K)>0 THEN IF P(K)<21 THEN 1040
    0x57619ee299e0 ---------D   02140  PRINT "   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY."
    0x57619ee29a60 ---------D   02150  GOTO 2120
    0x57619ee29bd0 ----------   02160  PRINT "  ";
    0x57619ee29d10 ----------   02170  NEXT K
    0x57619ee29da0 ----------   02180  PRINT
    0x57619ee29e20 ---------A   02190  REM  SHOOT ARROW
    0x57619ee2a170 ----------   02200  A=A-1
    0x57619ee2a520 ----------   02210  A9=L(1)
    0x57619ee2a810 ----------   02220  FOR K=1 TO J9
    0x57619ee2aaf0 ---------- G 02230  F1=0
    0x57619ee2ae90 ----------   02240  FOR K1=1 TO 3
    0x57619ee2b5a0 ----------   02250  IF S(A9,K1)=P(K) THEN F1=1
    0x57619ee2b6e0 ----------   02260  NEXT K1
    0x57619ee2b960 ----------   02270  IF F1=1 THEN 2310
    0x57619ee2b9f0 ---------A   02280  REM  NO TUNNEL FOR ARROW
    0x57619ee2bec0 ----------   02290  A9=S(A9,RND(3))
    0x57619ee2c0e0 ---------- T 02300  F1=2
    0x57619ee2c3c0 ----------   02310  ON F1 GOSUB 2440,2450
    0x57619ee2c9f0 ----------   02320  IF ABS(F)=1 THEN K=J9+1
    0x57619ee2ca70 ----------   02330  GOTO 2420
    0x57619ee2cba0 ----------   02340  NEXT K
    0x57619ee2cd10 ----------   02350  PRINT "MISSED"
    0x57619ee2cd90 ----------   02360  PRINT
    0x57619ee2ce10 ---------A   02370  REM  MOVE WUMPUS
    0x57619ee2cea0 ----------   02380  GOSUB 2530
    0x57619ee2d720 ---------A   02390  REM  AMMO CHECK
    0x57619ee2d990 ----------   02400  IF A>0 THEN 2420
    0x57619ee2dbb0 ---------E   02410  F=-1
    0x57619ee2dc00 ---------E   02420  RETURN
    0x57619ee2dcb0 ---------E   02430  REM  SEE IF ARROW IS AT L(1) OR L(2)
    0x57619ee2dff0 ---------E   02440  A9=P(K)
    0x57619ee2e350 ---------E   02450  IF A9<>L(2) THEN 2500
    0x57619ee2e690 ---------E   02460  PRINT "AHA!  YOU GOT THE WUMPUS!!  HE WAS IN ROOM";L(2)
    0x57619ee2e710 ---------E   02470  PRINT
    0x57619ee2e930 ---------E   02480  F=1
    0x57619ee2e980 ---------E   02490  RETURN
    0x57619ee2ed20 ---------E   02500  IF A9<>L(1) THEN RETURN
    0x57619ee2ee90 ---------E   02510  PRINT "OUCH!  ARROW GOT YOU!!"
    0x57619ee2ef20 ---------E   02520  GOTO 2410
    0x57619ee2efa0 ---------F   02530  REM  MOVE WUMPUS ROUTINE
    0x57619ee2f2b0 ---------F   02540  K=RND(4)
    0x57619ee2f500 ---------F   02550  IF K=4 THEN 2610
    0x57619ee2fa90 ---------F   02560  L(2)=S(L(2),K)
    0x57619ee2fde0 ---------F   02570  IF L(2)<>L THEN 2610
    0x57619ee2ff30 ---------- G 02580  PRINT "TSK TSK TSK - THE WUMPUS GOT YOU!"
    0x57619ee2ffb0 ---------F   02590  PRINT
    0x57619ee301d0 ---------F   02600  F=-1
    0x57619ee30220 ---------F   02610  RETURN
    0x57619ee302a0 ---------G   02620  REM  MOVE ROUTINE
    0x57619ee304e0 ---------G   02630  F=0
    0x57619ee30650 ---------G   02640  INPUT "WHERE TO";L
    0x57619ee306d0 ---------G   02650  PRINT
    0x57619ee30930 ---------G   02660  IF L<1 THEN 2640
    0x57619ee30b90 ---------G   02670  IF L>20 THEN 2640
    0x57619ee30e80 ---------G   02680  FOR K=1 TO 3
    0x57619ee30f10 ---------G   02690  REM  CHECK IF LEGAL MOVE
    0x57619ee31600 ----------   02700  IF S(L(1),K)=L THEN K=4
    0x57619ee31680 ---------G   02710  GOTO 2770
    0x57619ee317b0 ----------   02720  NEXT K
    0x57619ee31b20 ----------   02730  IF L=L(1) THEN 2770
    0x57619ee31ca0 ----------   02740  PRINT "NOT POSSIBLE - ";
    0x57619ee31d30 ----------   02750  GOTO 2640
    0x57619ee31da0 ---------A   02760  REM  CHECK FOR HAZARDS
    0x57619ee320b0 ---------G   02770  L(1)=L
    0x57619ee32120 ---------G   02780  REM  WUMPUS
    0x57619ee324a0 ---------G   02790  IF L<>L(2) THEN 2860
    0x57619ee32610 ---------G   02800  PRINT "... OOPS!  BUMPED A WUMPUS!"
    0x57619ee32690 ---------G   02810  REM  MOVE WUMPUS
    0x57619ee32720 ---------G   02820  GOSUB 2540
    0x57619ee32970 ---------G   02830  IF F=0 THEN 2860
    0x57619ee329d0 ---------G   02840  RETURN
    0x57619ee32a50 ---------G   02850  REM  PIT
    0x57619ee330e0 ---------G   02860  IF L<>L(3) THEN IF L<>L(4) THEN 1830
    0x57619ee33140 ----------   02870  CLS
    0x57619ee33470 ---------G   02880  P1=110
    0x57619ee33780 ----------   02890  PRINT CHR$(28);"Y";
    0x57619ee337e0 ----------   02900  GOSUB 5310
    0x57619ee33930 ----------   02910  PRINT "Y";
    0x57619ee33990 ----------   02920  GOSUB 5310
    0x57619ee33ac0 ----------   02930  PRINT "Y"
    0x57619ee33b20 ----------   02940  GOSUB 5310
    0x57619ee33d10 ----------   02950  P1=100
    0x57619ee33e40 ----------   02960  PRINT "      Y"
    0x57619ee33ee0 ---------G   02970  GOSUB 5310
    0x57619ee340d0 ----------   02980  P1=90
    0x57619ee34200 ----------   02990  PRINT "         Y"
    0x57619ee34260 ----------   03000  GOSUB 5310
    0x57619ee344b0 ---------G   03010  P1=80
    0x57619ee345e0 ----------   03020  PRINT "          Y"
    0x57619ee34640 ----------   03030  GOSUB 5310
    0x57619ee34830 ----------   03040  P1=70
    0x57619ee34960 ----------   03050  PRINT "           Y"
    0x57619ee34a10 ---------G   03060  GOSUB 5310
    0x57619ee34ca0 ----------   03070  PRINT TAB(11);"I";
    0x57619ee34d00 ----------   03080  GOSUB 5310
    0x57619ee34fc0 ---------G   03090  PRINT TAB(30);"FELL IN A PIT!!"
    0x57619ee35280 ----------   03100  FOR I=1 TO 4
    0x57619ee356a0 ----------   03110  P1=70-I*10
    0x57619ee35910 ----------   03120  PRINT TAB(11);"I"
    0x57619ee35970 ----------   03130  GOSUB 5310
    0x57619ee35aa0 ---------G   03140  NEXT I
    0x57619ee35da0 ----------   03150  FOR I=1 TO 2
    0x57619ee361c0 ----------   03160  P1=30-I*10
    0x57619ee36430 ----------   03170  PRINT TAB(11);"E"
    0x57619ee36490 ----------   03180  GOSUB 5310
    0x57619ee365c0 ---------G   03190  NEXT I
    0x57619ee368b0 ----------   03200  FOR I=1 TO 18
    0x57619ee36b30 ----------   03210  PRINT TAB(11);"."
    0x57619ee36b90 ----------   03220  GOSUB 5310
    0x57619ee36cc0 ---------G   03230  NEXT I
    0x57619ee36ef0 ---------G   03240  F=-1
    0x57619ee36f40 ---------G   03250  RETURN
    0x57619ee36fc0 ---------A   03260  REM  BATS
    0x57619ee37680 ----------   03270  IF L<>L(5) THEN IF L<>L(6) THEN 1880
    0x57619ee37810 ----------   03280  PRINT "ZAP--SUPER BAT SNATCH!  ELSEWHEREVILLE FOR YOU!"
    0x57619ee37b90 ----------   03290  FOR Q=1 TO 500
    0x57619ee37cd0 ----------   03300  NEXT Q
    0x57619ee37fe0 ----------   03310  L=RND(20)
    0x57619ee38050 ----------   03320  GOTO 2770
    0x57619ee380a0 ----------   03330  RETURN
    0x57619ee38120 ---------A   03340  REM  SELECT CAVE
    0x57619ee383b0 ----------   03350  IF F3=1 THEN 3390
    0x57619ee385b0 ----------   03360  PRINT @ 896,CHR$(30)
    0x57619ee387f0 ----------   03370  PRINT @ 960,CHR$(30);
    0x57619ee38980 ----------   03380  PRINT @ 901,"";
    0x57619ee38bd0 ----------   03390  INPUT "CAVE # (0-6)";N
    0x57619ee39060 ----------   03400  IF N>=0 AND N<=6 THEN 3430
    0x57619ee39320 ---------- G 03410  IF F3=1 THEN PRINT
    0x57619ee393a0 ----------   03420  GOTO 3350
    0x57619ee39440 ----------   03430  CLS
    0x57619ee39650 ----------   03440  PRINT CHR$(28);
    0x57619ee399f0 ----------   03450  IF N<6 THEN PRINT "THE WUMPUS IS HIDING."
    0x57619ee39c50 ----------   03460  IF N=6 THEN 3540
    0x57619ee39cd0 ----------   03470  RESTORE
    0x57619ee39f20 ----------   03480  IF N=0 THEN 3520
    0x57619ee3a3e0 ----------   03490  FOR X9=1 TO N*60
    0x57619ee3a600 ----------   03500  READ I9
    0x57619ee3a730 ----------   03510  NEXT X9
    0x57619ee3a7c0 ----------   03520  GOSUB 3720
    0x57619ee3a830 ----------   03530  GOTO 3550
    0x57619ee3a8a0 ----------   03540  GOSUB 3560
    0x57619ee3a8f0 ----------   03550  RETURN
    0x57619ee3a980 ---------H   03560  REM  INPUT OWN CAVE
    0x57619ee3ac70 ---------H   03570  FOR J=1 TO 20
    0x57619ee3af00 ---------H   03580  PRINT "ROOM #";J;
    0x57619ee3b240 ---------H   03590  INPUT "IS CONNECTED TO :";S(J,1)
    0x57619ee3b540 ----------   03600  INPUT "AND";S(J,2)
    0x57619ee3b860 ---------H   03610  INPUT "AND";S(J,3)
    0x57619ee3b8e0 ---------H   03620  PRINT
    0x57619ee3bbc0 ---------H   03630  F5=0
    0x57619ee3beb0 ---------H   03640  FOR K=1 TO 3
    0x57619ee3c700 ---------H   03650  IF S(J,K)>0 THEN IF S(J,K)<21 THEN 2190
    0x57619ee3c880 ---------H   03660  PRINT "ERROR** ENTER ROOM NUMBERS FROM 1 TO 20 ONLY!!"
    0x57619ee3caa0 ---------H   03670  F5=1
    0x57619ee3cbd0 ---------H   03680  NEXT K
    0x57619ee3ce40 ---------H   03690  IF F5=1 THEN 3580
    0x57619ee3cf80 ---------H   03700  NEXT J
    0x57619ee3cff0 ---------H   03710  RETURN
    0x57619ee3d070 ---------I   03720  REM  INPUT CAVE
    0x57619ee3d360 ---------I   03730  FOR J=1 TO 20
    0x57619ee3d640 ---------I   03740  FOR K=1 TO 3
    0x57619ee3d960 ---------I   03750  READ S(J,K)
    0x57619ee3da90 ---------I   03760  NEXT K
    0x57619ee3dbe0 ---------I   03770  NEXT J
    0x57619ee3dc50 ---------I   03780  RETURN
    0x57619ee3dde0 ---------A   03790  PRINT @ 401,"THANK YOU FOR PLAYING WITH ME!"
    0x57619ee3de60 ---------A   03800  RUN"MENU"
    0x57619ee3df00 ----------   03810  PRINT
    0x57619ee3e060 ----------   03820  PRINT"TO LOAD ANOTHER PROGRAM, TYPE 'CLOAD'."
    0x57619ee3e0c0 ----------   03830  PRINT
    0x57619ee3e120 ---------A   03840  END
    0x57619ee3e1a0 ---------A   03850  REM  DODECAHEDRON
    0x57619ee3f5d0 ---------A   03860  DATA 2,5,8,1,3,10,2,4,12,3,5,14,1,4,6,5,7,15,6,8,17,1
    0x57619ee40710 ---------A   03870  DATA 7,8,9,10,18,2,9,11,10,12,19,3,11,13,12,14,20,4,13
    0x57619ee41820 ---------A   03880  DATA 15,6,14,16,15,17,20,7,16,18,9,17,19,11,18,20,13,16,19
    0x57619ee41890 ---------A   03890  REM  MOBIUS STRIP
    0x57619ee42da0 ---------A   03900  DATA 20,2,3,19,1,4,1,4,5,2,3,6,3,6,7,4,5,8,5,8,9,6,7
    0x57619ee43e00 ---------A   03910  DATA 10,7,10,11,8,9,12,9,12,13,10,11,14,11,14,15,12,13
    0x57619ee44f20 ---------A   03920  DATA 16,12,16,17,14,15,18,15,18,19,16,17,20,2,17,20,1,18,19
    0x57619ee44f90 ---------A   03930  REM  STRING OF BEADS
    0x57619ee464a0 ---------A   03940  DATA 2,3,20,1,3,4,1,2,4,2,3,5,4,6,7,5,7,8,5,6,8,6,7
    0x57619ee475e0 ---------A   03950  DATA 9,8,10,11,9,11,12,9,10,12,10,11,13,12,14,15,13,15,1
    0x57619ee486f0 ---------A   03960  DATA 6,13,14,16,14,15,17,16,18,19,17,19,20,17,18,20,1,18,19
    0x57619ee48760 ---------A   03970  REM  HEX NETWORK
    0x57619ee49ab0 ---------A   03980  DATA 6,10,16,6,7,17,7,8,18,8,9,19,9,10,20,1,2,15,2,3,1
    0x57619ee4acd0 ---------A   03990  DATA 1,3,4,12,4,5,13,1,5,14,7,16,20,8,16,17,9,17,18,10
    0x57619ee4bed0 ---------A   04000  DATA 18,19,6,19,20,1,11,12,2,12,13,3,13,14,4,14,15,5,11,15
    0x57619ee4bf50 ---------A   04010  REM  DENDRITE W/ DEGENERACIES
    0x57619ee4d460 ---------A   04020  DATA 1,1,5,2,2,5,3,3,6,4,4,6,1,2,7,3,4,7,5,6,10,8,9
    0x57619ee4e5a0 ---------A   04030  DATA 9,8,8,10,7,9,11,10,13,14,12,13,13,11,12,12,11,15,16
    0x57619ee4f5e0 ---------A   04040  DATA 14,17,18,14,19,20,15,17,17,15,18,18,16,19,19,16,20,20
    0x57619ee2cf10 ---------A   04050  REM  ONE WAY LATTICE
    0x57619ee51290 ---------A   04060  DATA 5,4,8,1,5,6,2,6,7,3,7,8,8,9,12,5,9,10,6,10,11,7
    0x57619ee522f0 ---------A   04070  DATA 11,12,12,13,16,9,13,14,10,14,15,11,15,16,16,17,20,13
    0x57619ee534e0 ---------A   04080  DATA 17,18,14,18,19,15,19,20,1,4,20,1,2,17,2,3,18,3,4,19
    0x57619ee53550 ---------J   04090  REM  INSTRUCTIONS
    0x57619ee53620 ---------J   04100  CLS
    0x57619ee537d0 ---------J   04110  PRINT "  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3"
    0x57619ee53920 ----------   04120  PRINT "TUNNELS LEADING TO OTHER ROOMS."
    0x57619ee53980 ----------   04130  PRINT
    0x57619ee53b20 ---------J   04140  PRINT "HAZARDS:"
    0x57619ee53b80 ----------   04150  PRINT
    0x57619ee53d40 ---------J   04160  PRINT "BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF"
    0x57619ee53ea0 ----------   04170  PRINT "YOU GO IN THERE, YOU FALL INTO THE PIT AND LOSE!"
    0x57619ee53f60 ---------J   04180  PRINT
    0x57619ee54130 ---------J   04190  PRINT "SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,"
    0x57619ee542f0 ---------J   04200  PRINT "A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE"
    0x57619ee54440 ----------   04210  PRINT "CAVE WHERE YOU COULD RUN INTO THE..."
    0x57619ee544d0 ---------J   04220  GOSUB 5230
    0x57619ee54600 ----------   04230  PRINT "WUMPUS:"
    0x57619ee546c0 ---------J   04240  PRINT
    0x57619ee54890 ---------J   04250  PRINT "THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET"
    0x57619ee54a60 ---------J   04260  PRINT "AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS"
    0x57619ee54c30 ---------J   04270  PRINT "WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW."
    0x57619ee54df0 ---------J   04280  PRINT "IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL."
    0x57619ee54f90 ---------J   04290  PRINT "BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!"
    0x57619ee54ff0 ----------   04300  PRINT
    0x57619ee55130 ----------   04310  PRINT "YOU:"
    0x57619ee551e0 ---------J   04320  PRINT
    0x57619ee553a0 ---------J   04330  PRINT "EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW."
    0x57619ee55520 ---------J   04340  PRINT "MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL)."
    0x57619ee555d0 ---------J   04350  GOSUB 5230
    0x57619ee55790 ---------J   04360  PRINT "SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT."
    0x57619ee55960 ---------J   04370  PRINT "  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE"
    0x57619ee55b30 ---------J   04380  PRINT "  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO"
    0x57619ee55cd0 ---------J   04390  PRINT "  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF"
    0x57619ee55e10 ----------   04400  PRINT "  OCCURRENCE."
    0x57619ee55ed0 ---------J   04410  PRINT
    0x57619ee560a0 ---------J   04420  PRINT " EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10"
    0x57619ee56260 ---------J   04430  PRINT "  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO"
    0x57619ee56430 ---------J   04440  PRINT "  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS"
    0x57619ee56600 ---------J   04450  PRINT "  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY"
    0x57619ee567c0 ---------J   04460  PRINT "  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS"
    0x57619ee56920 ----------   04470  PRINT "  PROCESS UNTIL 4 ROOMS HAVE BEEN ENTERED."
    0x57619ee569e0 ---------J   04480  GOSUB 5230
    0x57619ee56ba0 ---------J   04490  PRINT " NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING"
    0x57619ee56d70 ---------J   04500  PRINT "  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE"
    0x57619ee56f40 ---------J   04510  PRINT "  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED"
    0x57619ee57100 ---------J   04520  PRINT "  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING"
    0x57619ee572d0 ---------J   04530  PRINT "  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW" 
    0x57619ee574a0 ---------J   04540  PRINT "  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT"
    0x57619ee57660 ---------J   04550  PRINT "  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS."
    0x57619ee576c0 ----------   04560  PRINT
    0x57619ee57860 ---------J   04570  PRINT "IF THE ARROW HITS THE WUMPUS, YOU WIN."
    0x57619ee579f0 ---------J   04580  PRINT "IF THE ARROW HITS YOU, YOU LOSE."
    0x57619ee57a50 ----------   04590  GOSUB 5230
    0x57619ee57aa0 ----------   04600  PRINT
    0x57619ee57be0 ----------   04610  PRINT "WARNINGS:"
    0x57619ee57ca0 ---------J   04620  PRINT
    0x57619ee57e70 ---------J   04630  PRINT "WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,"
    0x57619ee57fb0 ----------   04640  PRINT "THE COMPUTER SAYS:"
    0x57619ee58010 ----------   04650  PRINT
    0x57619ee581b0 ---------J   04660  PRINT "WUMPUS - 'I SMELL A WUMPUS'"
    0x57619ee582f0 ----------   04670  PRINT "BAT - 'BATS NEARBY'"
    0x57619ee58440 ----------   04680  PRINT "PIT - 'I FEEL A DRAFT'"
    0x57619ee584f0 ---------J   04690  PRINT
    0x57619ee586b0 ---------J   04700  PRINT "BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!"
    0x57619ee58810 ----------   04710  PRINT @ 910,"";
    0x57619ee589b0 ---------J   04720  INPUT "WOULD YOU LIKE THE DESCRIPTION OF THE CAVES";Z$
    0x57619ee58a40 ---------J   04730  CLS
    0x57619ee58ea0 ---------J   04740  IF LEFT$(Z$,1)="N" THEN RETURN
    0x57619ee58fe0 ----------   04750  PRINT "THE CAVES ARE:"
    0x57619ee590a0 ---------J   04760  PRINT
    0x57619ee59270 ---------J   04770  PRINT "0 - DODECAHEDRON:  THE ROOMS OF THIS CAVE ARE ON A 12-SIDED"
    0x57619ee59440 ---------J   04780  PRINT "    OBJECT, EACH SIDE FORMING A PENTAGON.  THE ROOMS ARE AT THE"
    0x57619ee595f0 ---------J   04790  PRINT "    CORNERS OF THE PENTAGONS, EACH ROOM HAVING TUNNELS LEADING"
    0x57619ee59730 ----------   04800  PRINT "    TO 3 OTHER ROOMS."
    0x57619ee597f0 ---------J   04810  PRINT
    0x57619ee599c0 ---------J   04820  PRINT "1 - MOBIUS STRIP:  THIS CAVE IS TWO ROOMS WIDE AND 10 ROOMS"
    0x57619ee59b70 ---------J   04830  PRINT "    AROUND (LIKE A BELT).  YOU WILL NOTICE THERE IS A HALF-"
    0x57619ee59cb0 ----------   04840  PRINT "    TWIST SOMEWHERES."
    0x57619ee59d70 ---------J   04850  PRINT
    0x57619ee59f40 ---------J   04860  PRINT "2 - STRING OF BEADS:  FIVE BEADS IN A CIRCLE.  EACH BEAD IS A"
    0x57619ee5a110 ---------J   04870  PRINT "    DIAMOND WITH A VERTICAL CROSS-BAR.  THE RIGHT AND LEFT"
    0x57619ee5a2b0 ---------J   04880  PRINT "    CORNERS LEAD TO NEIGHBORING BEADS.  (THIS ONE IS DIFFICULT"
    0x57619ee5a3f0 ----------   04890  PRINT "    TO PLAY)."
    0x57619ee5a4b0 ---------J   04900  GOSUB 5230
    0x57619ee5a670 ---------J   04910  PRINT "3 - HEX NETWORK:  IMAGINE A HEX TILE FLOOR.  TAKE A RECTANGLE"
    0x57619ee5a840 ---------J   04920  PRINT "    WITH 20 POINTS (INTERSECTIONS) INSIDE (4X5).  JOIN RIGHT"
    0x57619ee5a9f0 ---------J   04930  PRINT "    AND LEFT SIDES TO MAKE A CYLINDER.  THEN JOIN TOP AND BOT-"
    0x57619ee5ab80 ---------J   04940  PRINT "    TOM TO FORM A TORUS (DOUGHNUT)."
    0x57619ee5acd0 ----------   04950  PRINT "    HAVE FUN IMAGINING THIS ONE!"
    0x57619ee5ad90 ---------J   04960  PRINT
    0x57619ee5af50 ---------J   04970  PRINT "CAVES 0-3 ARE REGULAR IN THE SENSE THAT EACH ROOM GOES TO THREE"
    0x57619ee5b0f0 ---------J   04980  PRINT "OTHER ROOMS AND THE TUNNELS ALLOW TWO-WAY TRAFFIC."
    0x57619ee5b240 ----------   04990  PRINT "HERE ARE SOME IRREGULAR CAVES:"
    0x57619ee5b300 ---------J G 05000  PRINT
    0x57619ee5b4d0 ---------J   05010  PRINT "4 - DENDRITE WITH DEGENERACIES:  PULL A PLANT FROM THE GROUND."
    0x57619ee5b6a0 ---------J   05020  PRINT "    THE ROOTS AND BRANCHES FROM A DENDRITE - IE, THERE ARE NO"
    0x57619ee5b870 ---------J   05030  PRINT "    LOOPING PATHS.  DEGENERACY MEANS A) SOME ROOMS CONNECT TO"
    0x57619ee5ba30 ---------J   05040  PRINT "    THEMSELVES OR B) THAT TWO ROOMS HAVE MORE THAN ONE TUNNEL"
    0x57619ee5bbb0 ---------J   05050  PRINT "    BETWEEN THEM IE, 12 HAS TWO TUNNELS TO 13."
    0x57619ee5bc70 ---------J   05060  GOSUB 5230
    0x57619ee5be30 ---------J   05070  PRINT "5 - ONE WAY LATTICE:  HERE ALL TUNNELS GO ONE WAY ONLY.  TO"
    0x57619ee5bfa0 ----------   05080  PRINT "    RETURN, YOU MUST GO AROUND THE CAVE (ABOUT 5 MOVES)."
    0x57619ee5c060 ---------J   05090  PRINT
    0x57619ee5c220 ---------J   05100  PRINT "6 - ENTER YOUR OWN CAVE:  THE COMPUTER WILL ASK YOU FOR THE"
    0x57619ee5c380 ----------   05110  PRINT "    ROOMS NEXT TO EACH ROOM IN THE CAVE."
    0x57619ee5c410 ---------J   05120  PRINT
    0x57619ee5c550 ----------   05130  PRINT "   FOR EXAMPLE:"
    0x57619ee5c610 ---------J   05140  PRINT
    0x57619ee5c7e0 ---------J   05150  PRINT "    TO SET ROOM #1 UP WITH TUNNELS GOING TO ROOMS 2, 3 AND 4"
    0x57619ee5c980 ---------J   05160  PRINT "    TYPE '2' (ENTER) '3' (ENTER) '4' (ENTER) WHEN PROMPTED"
    0x57619ee5cb00 ---------J   05170  PRINT "    WITH 'ROOM #1'"
    0x57619ee5cb60 ----------   05180  PRINT
    0x57619ee5ce10 ---------J   05190  PRINT TAB(24);"HAPPY HUNTING!!!"
    0x57619ee5d0b0 ---------J   05200  PRINT TAB(27);">>>------->"
    0x57619ee5d110 ----------   05210  GOSUB 5230
    0x57619ee5d160 ---------J   05220  RETURN
    0x57619ee5d330 ---------K   05230  PRINT @ 975,"PRESS 'ENTER' TO CONTINUE ";
    0x57619ee5d610 ----------   05240  Z$=INKEY$
    0x57619ee5d820 ----------   05250  Z$=Z$
    0x57619ee5dab0 ---------K   05260  IF Z$="" THEN 5260 
    0x57619ee5de20 ----------   05270  IF ASC(Z$)<>13 THEN 5260 ELSE CLS
    0x57619ee5de80 ---------K   05280  RETURN
    0x57619ee5e170 ----------   05290  FOR Q=1 TO P1
    0x57619ee5e2b0 ----------   05300  NEXT Q
    0x57619ee5e300 ---------L   05310  RETURN
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     05100 - 10000    4910 

 */



/*
 *  Symbol Table Listing for 'basic/wumpus2a.bas'
 *
    A                        Integer     
    A9                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
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
    F                        Integer     
    F1                       Integer     
    F3                       Integer     
    F5                       Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
    I$              Array    String          {0,5} 
    I9                       Integer     
    INKEY$                   String      
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    J9                       Integer     
    K                        Integer     
    K1                       Integer     
    L               Array    Integer         {0,5} 
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M               Array    Integer         {0,5} 
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    O                        Integer     
    OCT$            Function String          args=1, float  
    P               Array    Integer         {0,4} 
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
    S               Array    Integer         {0,19} {0,2} 
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
    X9                       Integer     
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/wumpus2a.bas: 
 *
                   +----------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |          | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |          | |
        Address    v          v v Original BASIC statement
    -------------- ------------ - ------------------------------------------------------------------------------
    0x57619ee16db0 ---------A   01000  REM NOTE
    0x57619ee16f30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x57619ee16e70 ---------A   01020  REM  WUMPUS II  FROM THE LAWRENCE HALL OF SCIENCE
    0x57619ee16ff0 ---------A   01030  REM  TRANSFERED TO SOL EBASIC BY DAVID FOX
    0x57619ee052f0 ---------A   01040  REM  REVISED FOR TRS-80 LEVEL II BASIC BY DOUG BENEDICT
    0x57619ee149e0 ---------A   01050  CLS
    0x57619ee146d0 ---------A   01060  PRINT@282,"WUMPUS  II"
    0x57619ee14670 ---------A   01070  PRINT@409,"COPYRIGHT BY"
    0x57619ee16aa0 ---------A   01080  PRINT@470,"CREATIVE COMPUTING"
    0x57619ee15040 ---------A   01090  PRINT@536,"P.O. BOX 789-M"
    0x57619ee14e40 ---------A   01100  PRINT@593,"MORRISTOWN, NEW JERSEY 07960"
    0x57619ee14be0 ---------A   01110  FORI=1TO2000
    0x57619ee165e0 ---------A   01120  NEXTI
    0x57619ee1cfe0 ---------A   01130  DIM I$(6),L(6),M(6),P(5),S(20,3)
    0x57619ee1d030 ---------A   01140  CLS
    0x57619ee1d1d0 ---------A   01150  PRINT @ 390,"";
    0x57619ee1d380 ---------A   01160  PRINT "* * *  T H E  G A M E  O F  W U M P U S  II  * * *"
    0x57619ee1d4e0 ---------A   01170  PRINT @ 896,"";
    0x57619ee1d710 ---------A T 01180  INPUT "WOULD YOU LIKE INSTRUCTIONS";Z$
    0x57619ee1db40 ---------A   01190  IF LEFT$(Z$,1)="N" THEN 1230
    0x57619ee1df60 ---------A   01200  IF LEFT$(Z$,1)<>"Y" THEN 1180
    0x57619ee1e220 ---------A   01210  F3=1
    0x57619ee1e2a0 ---------A   01220  GOSUB 3870
    0x57619ee1e320 ---------A T 01230  REM  CHOOSE AND SET UP CAVE
    0x57619ee1e390 ---------A   01240  GOSUB 3380
    0x57619ee1e5b0 ---------A   01250  F3=1
    0x57619ee1e630 ---------A   01260  REM  LOCATE L ARRAY ITEMS
    0x57619ee1e6f0 ---------A   01270  REM  1=YOU,2=WUMPUS,3&4=PITS,5&6=BATS
    0x57619ee1eaa0 ---------A T 01280  FOR J=1 TO 6
    0x57619ee1ee80 ---------A   01290  L(J)=RND(20)
    0x57619ee1f270 ---------A   01300  M(J)=L(J)
    0x57619ee1f3a0 ---------A   01310  NEXT J
    0x57619ee1f470 ---------A   01320  REM  CHECK FOR CROSSOVERS (IE L(1)=L(2),ETC)
    0x57619ee1f760 ---------A   01330  FOR J=1 TO 6
    0x57619ee1fb20 ---------A   01340  FOR K=J TO 6
    0x57619ee1fdc0 ---------A   01350  IF J=K THEN 1390
    0x57619ee203d0 ---------A   01360  IF L(J)=L(K) THEN J=7
    0x57619ee205d0 ---------A   01370  K=7
    0x57619ee20640 ---------A   01380  GOTO 1280
    0x57619ee20770 ---------A T 01390  NEXT K
    0x57619ee208c0 ---------A   01400  NEXT J
    0x57619ee20b60 ---------A   01410  REM  SET # ARROWS
    0x57619ee20e50 ---------A T 01420  A=5
    0x57619ee21140 ---------A   01430  L=L(1)
    0x57619ee211b0 ---------A   01440  REM  RUN THE GAME
    0x57619ee21260 ---------A   01450  REM  HAZARD WARNINGS & LOCATION
    0x57619ee21300 ---------A T 01460  GOSUB 2280
    0x57619ee21370 ---------A   01470  REM  MOVE OR SHOOT
    0x57619ee21400 ---------A T 01480  GOSUB 2460
    0x57619ee21790 ---------A   01490  ON O GOTO 1510,1550
    0x57619ee21810 ---------A   01500  REM  SHOOT
    0x57619ee218a0 ---------A T 01510  GOSUB 2570
    0x57619ee21bb0 ---------A   01520  IF F=0 THEN 1480
    0x57619ee21c30 ---------A   01530  GOTO 1570
    0x57619ee21ca0 ---------A   01540  REM  MOVE
    0x57619ee21d30 ---------A T 01550  GOSUB 2780
    0x57619ee21f80 ---------A   01560  IF F=0 THEN 1460
    0x57619ee221e0 ---------A T 01570  IF F>0 THEN 1620
    0x57619ee22260 ---------A   01580  REM  LOSE
    0x57619ee22420 ---------A   01590  PRINT "HA HA HA - YOU LOSE!     ";
    0x57619ee224a0 ---------A   01600  GOTO 1640
    0x57619ee22510 ---------A   01610  REM  WIN
    0x57619ee226d0 ---------A T 01620  PRINT "HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!"
    0x57619ee22750 ---------A   01630  PRINT
    0x57619ee22a30 ---------A T 01640  FOR J=1 TO 6
    0x57619ee22e30 ---------A   01650  L(J)=M(J)
    0x57619ee22f60 ---------A   01660  NEXT J
    0x57619ee230e0 ---------A   01670  INPUT "WANT TO PLAY AGAIN";I$
    0x57619ee23170 ---------A   01680  CLS
    0x57619ee23580 ---------A   01690  IF LEFT$(I$,1)<>"Y" THEN 1840
    0x57619ee23610 ---------A   01700  PRINT
    0x57619ee23790 ---------A   01710  INPUT "SAME SET-UP";I$
    0x57619ee23820 ---------A   01720  PRINT
    0x57619ee23c50 ---------A   01730  IF LEFT$(I$,1)="Y" THEN 1420
    0x57619ee241e0 ---------A   01740  INPUT "SAME CAVE";I$
    0x57619ee24270 ---------A   01750  PRINT
    0x57619ee24690 ---------A   01760  IF LEFT$(I$,1)="Y" THEN 1280
    0x57619ee24730 ---------A   01770  GOTO 1230
    0x57619ee29e20 ---------A   01780  REM  SHOOT ARROW
    0x57619ee2b9f0 ---------A   01790  REM  NO TUNNEL FOR ARROW
    0x57619ee2ce10 ---------A   01800  REM  MOVE WUMPUS
    0x57619ee2d720 ---------A   01810  REM  AMMO CHECK
    0x57619ee31da0 ---------A   01820  REM  CHECK FOR HAZARDS
    0x57619ee36fc0 ---------A   01830  REM  BATS
    0x57619ee3dde0 ---------A T 01840  PRINT @ 401,"THANK YOU FOR PLAYING WITH ME!"
    0x57619ee3de60 ---------A   01850  RUN"MENU"
    0x57619ee3df00 ---------A   01860  PRINT
    0x57619ee3e060 ---------A   01870  PRINT"TO LOAD ANOTHER PROGRAM, TYPE 'CLOAD'."
    0x57619ee3e0c0 ---------A   01880  PRINT
    0x57619ee3e120 ---------A   01890  END
    0x57619ee3e1a0 ---------A   01900  REM  DODECAHEDRON
    0x57619ee3f5d0 ---------A   01910  DATA 2,5,8,1,3,10,2,4,12,3,5,14,1,4,6,5,7,15,6,8,17,1
    0x57619ee40710 ---------A   01920  DATA 7,8,9,10,18,2,9,11,10,12,19,3,11,13,12,14,20,4,13
    0x57619ee41820 ---------A   01930  DATA 15,6,14,16,15,17,20,7,16,18,9,17,19,11,18,20,13,16,19
    0x57619ee41890 ---------A   01940  REM  MOBIUS STRIP
    0x57619ee42da0 ---------A   01950  DATA 20,2,3,19,1,4,1,4,5,2,3,6,3,6,7,4,5,8,5,8,9,6,7
    0x57619ee43e00 ---------A   01960  DATA 10,7,10,11,8,9,12,9,12,13,10,11,14,11,14,15,12,13
    0x57619ee44f20 ---------A   01970  DATA 16,12,16,17,14,15,18,15,18,19,16,17,20,2,17,20,1,18,19
    0x57619ee44f90 ---------A   01980  REM  STRING OF BEADS
    0x57619ee464a0 ---------A   01990  DATA 2,3,20,1,3,4,1,2,4,2,3,5,4,6,7,5,7,8,5,6,8,6,7
    0x57619ee475e0 ---------A   02000  DATA 9,8,10,11,9,11,12,9,10,12,10,11,13,12,14,15,13,15,1
    0x57619ee486f0 ---------A   02010  DATA 6,13,14,16,14,15,17,16,18,19,17,19,20,17,18,20,1,18,19
    0x57619ee48760 ---------A   02020  REM  HEX NETWORK
    0x57619ee49ab0 ---------A   02030  DATA 6,10,16,6,7,17,7,8,18,8,9,19,9,10,20,1,2,15,2,3,1
    0x57619ee4acd0 ---------A   02040  DATA 1,3,4,12,4,5,13,1,5,14,7,16,20,8,16,17,9,17,18,10
    0x57619ee4bed0 ---------A   02050  DATA 18,19,6,19,20,1,11,12,2,12,13,3,13,14,4,14,15,5,11,15
    0x57619ee4bf50 ---------A   02060  REM  DENDRITE W/ DEGENERACIES
    0x57619ee4d460 ---------A   02070  DATA 1,1,5,2,2,5,3,3,6,4,4,6,1,2,7,3,4,7,5,6,10,8,9
    0x57619ee4e5a0 ---------A   02080  DATA 9,8,8,10,7,9,11,10,13,14,12,13,13,11,12,12,11,15,16
    0x57619ee4f5e0 ---------A   02090  DATA 14,17,18,14,19,20,15,17,17,15,18,18,16,19,19,16,20,20
    0x57619ee2cf10 ---------A   02100  REM  ONE WAY LATTICE
    0x57619ee51290 ---------A   02110  DATA 5,4,8,1,5,6,2,6,7,3,7,8,8,9,12,5,9,10,6,10,11,7
    0x57619ee522f0 ---------A   02120  DATA 11,12,12,13,16,9,13,14,10,14,15,11,15,16,16,17,20,13
    0x57619ee534e0 ---------A   02130  DATA 17,18,14,18,19,15,19,20,1,4,20,1,2,17,2,3,18,3,4,19
    0x57619ee72eb0 ----------   02140  RETURN
    0x57619ee2dbb0 ---------- T 02150  F=-1
    0x57619ee76ac0 ----------   02160  GOTO 02270
    0x57619ee2dcb0 ---------A   02170  REM  SEE IF ARROW IS AT L(1) OR L(2)
    0x57619ee2dff0 ----------   02180  A9=P(K)
    0x57619ee2e350 ----------   02190  IF A9<>L(2) THEN 2240
    0x57619ee2e690 ----------   02200  PRINT "AHA!  YOU GOT THE WUMPUS!!  HE WAS IN ROOM";L(2)
    0x57619ee2e710 ----------   02210  PRINT
    0x57619ee2e930 ----------   02220  F=1
    0x57619ee76a70 ----------   02230  GOTO 02270
    0x57619ee2ed20 ---------- T 02240  IF A9<>L(1) THEN RETURN
    0x57619ee2ee90 ----------   02250  PRINT "OUCH!  ARROW GOT YOU!!"
    0x57619ee2ef20 ----------   02260  GOTO 2150
    0x57619ee72f50 ---------- T 02270  RETURN
    0x57619ee247b0 ---------B G 02280  REM  PRINT LOCATION & HAZARD WARNINGS
    0x57619ee24840 ---------B   02290  PRINT
    0x57619ee24b20 ---------B   02300  FOR J=2 TO 6
    0x57619ee24e10 ---------B   02310  FOR K=1 TO 3
    0x57619ee25400 ---------B   02320  IF S(L(1),K)<>L(J) THEN 2390
    0x57619ee25a30 ---------B   02330  ON J-1 GOTO 2340,2360,2360,2380,2380
    0x57619ee25b90 ---------B T 02340  PRINT "I SMeLL A WUMPUS!"
    0x57619ee25c20 ---------B   02350  GOTO 2390
    0x57619ee25d70 ---------B T 02360  PRINT "I FEEL A DRAFT"
    0x57619ee25e00 ---------B   02370  GOTO 2390
    0x57619ee25f50 ---------B T 02380  PRINT "BATS NEARBY!"
    0x57619ee26090 ---------B T 02390  NEXT K
    0x57619ee261e0 ---------B   02400  NEXT J
    0x57619ee26570 ---------B   02410  PRINT "YOU ARE IN ROOM";L(1);
    0x57619ee270b0 ---------B   02420  PRINT "    TUNNELS LEAD TO";S(L,1);",";S(L,2);"AND";S(L,3)
    0x57619ee27130 ---------B   02430  PRINT
    0x57619ee76bb0 ---------B   02440  GOTO 02450
    0x57619ee72db0 ---------B T 02450  RETURN
    0x57619ee27210 ---------C G 02460  REM  CHOSE OPTION
    0x57619ee273b0 ---------C T 02470  INPUT "SHOOT OR MOVE";I$
    0x57619ee27440 ---------C   02480  PRINT
    0x57619ee27860 ---------C   02490  IF LEFT$(I$,1)<>"S" THEN 2520
    0x57619ee27a80 ---------C   02500  O=1
    0x57619ee76b60 ---------C   02510  GOTO 02550
    0x57619ee27f00 ---------C T 02520  IF LEFT$(I$,1)<>"M" THEN 2470
    0x57619ee28120 ---------C   02530  O=2
    0x57619ee76b10 ---------C   02540  GOTO 02550
    0x57619ee72e50 ---------C T 02550  RETURN
    0x57619ee28200 ---------D   02560  REM  ARROW ROUTINE
    0x57619ee28440 ---------D G 02570  F=0
    0x57619ee284b0 ---------D   02580  REM  PATH OF ARROW
    0x57619ee28710 ---------D T 02590  INPUT "NUMBER OF ROOMS";J9
    0x57619ee28790 ---------D   02600  PRINT
    0x57619ee289f0 ---------D   02610  IF J9<1 THEN 2590
    0x57619ee28c50 ---------D   02620  IF J9>5 THEN 2590
    0x57619ee28f60 ---------D   02630  FOR K=1 TO J9
    0x57619ee291e0 ---------D T 02640  INPUT "ROOM #";P(K)
    0x57619ee29860 ---------D   02650  IF P(K)>0 THEN IF P(K)<21 THEN 1040
    0x57619ee299e0 ---------D   02660  PRINT "   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY."
    0x57619ee29a60 ---------D   02670  GOTO 2640
    0x57619ee2efa0 ---------E   02680  REM  MOVE WUMPUS ROUTINE
    0x57619ee2f2b0 ---------E G 02690  K=RND(4)
    0x57619ee2f500 ---------E   02700  IF K=4 THEN 2760
    0x57619ee2fa90 ---------E   02710  L(2)=S(L(2),K)
    0x57619ee2fde0 ---------E   02720  IF L(2)<>L THEN 2760
    0x57619ee2ff30 ---------E   02730  PRINT "TSK TSK TSK - THE WUMPUS GOT YOU!"
    0x57619ee2ffb0 ---------E   02740  PRINT
    0x57619ee301d0 ---------E   02750  F=-1
    0x57619ee76a20 ---------E T 02760  GOTO 02770
    0x57619ee72fd0 ---------E T 02770  RETURN
    0x57619ee302a0 ---------F G 02780  REM  MOVE ROUTINE
    0x57619ee304e0 ---------F   02790  F=0
    0x57619ee30650 ---------F T 02800  INPUT "WHERE TO";L
    0x57619ee306d0 ---------F   02810  PRINT
    0x57619ee30930 ---------F   02820  IF L<1 THEN 2800
    0x57619ee30b90 ---------F   02830  IF L>20 THEN 2800
    0x57619ee30e80 ---------F   02840  FOR K=1 TO 3
    0x57619ee30f10 ---------F   02850  REM  CHECK IF LEGAL MOVE
    0x57619ee31600 ---------F   02860  IF S(L(1),K)=L THEN K=4
    0x57619ee31680 ---------F   02870  GOTO 2880
    0x57619ee320b0 ---------F T 02880  L(1)=L
    0x57619ee32120 ---------F   02890  REM  WUMPUS
    0x57619ee324a0 ---------F   02900  IF L<>L(2) THEN 2970
    0x57619ee32610 ---------F   02910  PRINT "... OOPS!  BUMPED A WUMPUS!"
    0x57619ee32690 ---------F   02920  REM  MOVE WUMPUS
    0x57619ee32720 ---------F   02930  GOSUB 2690
    0x57619ee32970 ---------F   02940  IF F=0 THEN 2970
    0x57619ee76c50 ---------F   02950  GOTO 03370
    0x57619ee32a50 ---------F   02960  REM  PIT
    0x57619ee330e0 ---------F T 02970  IF L<>L(3) THEN IF L<>L(4) THEN 1830
    0x57619ee33140 ---------F   02980  CLS
    0x57619ee33470 ---------F   02990  P1=110
    0x57619ee33780 ---------F   03000  PRINT CHR$(28);"Y";
    0x57619ee337e0 ---------F   03010  GOSUB 5080
    0x57619ee33930 ---------F   03020  PRINT "Y";
    0x57619ee33990 ---------F   03030  GOSUB 5080
    0x57619ee33ac0 ---------F   03040  PRINT "Y"
    0x57619ee33b20 ---------F   03050  GOSUB 5080
    0x57619ee33d10 ---------F   03060  P1=100
    0x57619ee33e40 ---------F   03070  PRINT "      Y"
    0x57619ee33ee0 ---------F   03080  GOSUB 5080
    0x57619ee340d0 ---------F   03090  P1=90
    0x57619ee34200 ---------F   03100  PRINT "         Y"
    0x57619ee34260 ---------F   03110  GOSUB 5080
    0x57619ee344b0 ---------F   03120  P1=80
    0x57619ee345e0 ---------F   03130  PRINT "          Y"
    0x57619ee34640 ---------F   03140  GOSUB 5080
    0x57619ee34830 ---------F   03150  P1=70
    0x57619ee34960 ---------F   03160  PRINT "           Y"
    0x57619ee34a10 ---------F   03170  GOSUB 5080
    0x57619ee34ca0 ---------F   03180  PRINT TAB(11);"I";
    0x57619ee34d00 ---------F   03190  GOSUB 5080
    0x57619ee34fc0 ---------F   03200  PRINT TAB(30);"FELL IN A PIT!!"
    0x57619ee35280 ---------F   03210  FOR I=1 TO 4
    0x57619ee356a0 ---------F   03220  P1=70-I*10
    0x57619ee35910 ---------F   03230  PRINT TAB(11);"I"
    0x57619ee35970 ---------F   03240  GOSUB 5080
    0x57619ee35aa0 ---------F   03250  NEXT I
    0x57619ee35da0 ---------F   03260  FOR I=1 TO 2
    0x57619ee361c0 ---------F   03270  P1=30-I*10
    0x57619ee36430 ---------F   03280  PRINT TAB(11);"E"
    0x57619ee36490 ---------F   03290  GOSUB 5080
    0x57619ee365c0 ---------F   03300  NEXT I
    0x57619ee368b0 ---------F   03310  FOR I=1 TO 18
    0x57619ee36b30 ---------F   03320  PRINT TAB(11);"."
    0x57619ee36b90 ---------F   03330  GOSUB 5080
    0x57619ee36cc0 ---------F   03340  NEXT I
    0x57619ee36ef0 ---------F   03350  F=-1
    0x57619ee76e80 ---------F   03360  GOTO 03370
    0x57619ee73070 ---------F T 03370  RETURN
    0x57619ee38120 ---------G G 03380  REM  SELECT CAVE
    0x57619ee383b0 ---------G T 03390  IF F3=1 THEN 3430
    0x57619ee385b0 ---------G   03400  PRINT @ 896,CHR$(30)
    0x57619ee387f0 ---------G   03410  PRINT @ 960,CHR$(30);
    0x57619ee38980 ---------G   03420  PRINT @ 901,"";
    0x57619ee38bd0 ---------G T 03430  INPUT "CAVE # (0-6)";N
    0x57619ee39060 ---------G   03440  IF N>=0 AND N<=6 THEN 3470
    0x57619ee39320 ---------G   03450  IF F3=1 THEN PRINT
    0x57619ee393a0 ---------G   03460  GOTO 3390
    0x57619ee39440 ---------G T 03470  CLS
    0x57619ee39650 ---------G   03480  PRINT CHR$(28);
    0x57619ee399f0 ---------G   03490  IF N<6 THEN PRINT "THE WUMPUS IS HIDING."
    0x57619ee39c50 ---------G   03500  IF N=6 THEN 3580
    0x57619ee39cd0 ---------G   03510  RESTORE
    0x57619ee39f20 ---------G   03520  IF N=0 THEN 3560
    0x57619ee3a3e0 ---------G   03530  FOR X9=1 TO N*60
    0x57619ee3a600 ---------G   03540  READ I9
    0x57619ee3a730 ---------G   03550  NEXT X9
    0x57619ee3a7c0 ---------G T 03560  GOSUB 3780
    0x57619ee3a830 ---------G   03570  GOTO 3590
    0x57619ee3a8a0 ---------G T 03580  GOSUB 3610
    0x57619ee76e30 ---------G T 03590  GOTO 03600
    0x57619ee730f0 ---------G T 03600  RETURN
    0x57619ee3a980 ---------H G 03610  REM  INPUT OWN CAVE
    0x57619ee3ac70 ---------H   03620  FOR J=1 TO 20
    0x57619ee3af00 ---------H T 03630  PRINT "ROOM #";J;
    0x57619ee3b240 ---------H   03640  INPUT "IS CONNECTED TO :";S(J,1)
    0x57619ee3b540 ---------H   03650  INPUT "AND";S(J,2)
    0x57619ee3b860 ---------H   03660  INPUT "AND";S(J,3)
    0x57619ee3b8e0 ---------H   03670  PRINT
    0x57619ee3bbc0 ---------H   03680  F5=0
    0x57619ee3beb0 ---------H   03690  FOR K=1 TO 3
    0x57619ee3c700 ---------H   03700  IF S(J,K)>0 THEN IF S(J,K)<21 THEN 2190
    0x57619ee3c880 ---------H   03710  PRINT "ERROR** ENTER ROOM NUMBERS FROM 1 TO 20 ONLY!!"
    0x57619ee3caa0 ---------H   03720  F5=1
    0x57619ee3cbd0 ---------H   03730  NEXT K
    0x57619ee3ce40 ---------H   03740  IF F5=1 THEN 3630
    0x57619ee3cf80 ---------H   03750  NEXT J
    0x57619ee76de0 ---------H   03760  GOTO 03770
    0x57619ee73170 ---------H T 03770  RETURN
    0x57619ee3d070 ---------I G 03780  REM  INPUT CAVE
    0x57619ee3d360 ---------I   03790  FOR J=1 TO 20
    0x57619ee3d640 ---------I   03800  FOR K=1 TO 3
    0x57619ee3d960 ---------I   03810  READ S(J,K)
    0x57619ee3da90 ---------I   03820  NEXT K
    0x57619ee3dbe0 ---------I   03830  NEXT J
    0x57619ee76d90 ---------I   03840  GOTO 03850
    0x57619ee731f0 ---------I T 03850  RETURN
    0x57619ee53550 ---------J   03860  REM  INSTRUCTIONS
    0x57619ee53620 ---------J G 03870  CLS
    0x57619ee537d0 ---------J   03880  PRINT "  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3"
    0x57619ee53920 ---------J   03890  PRINT "TUNNELS LEADING TO OTHER ROOMS."
    0x57619ee53980 ---------J   03900  PRINT
    0x57619ee53b20 ---------J   03910  PRINT "HAZARDS:"
    0x57619ee53b80 ---------J   03920  PRINT
    0x57619ee53d40 ---------J   03930  PRINT "BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF"
    0x57619ee53ea0 ---------J   03940  PRINT "YOU GO IN THERE, YOU FALL INTO THE PIT AND LOSE!"
    0x57619ee53f60 ---------J   03950  PRINT
    0x57619ee54130 ---------J   03960  PRINT "SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,"
    0x57619ee542f0 ---------J   03970  PRINT "A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE"
    0x57619ee54440 ---------J   03980  PRINT "CAVE WHERE YOU COULD RUN INTO THE..."
    0x57619ee544d0 ---------J   03990  GOSUB 5010
    0x57619ee54600 ---------J   04000  PRINT "WUMPUS:"
    0x57619ee546c0 ---------J   04010  PRINT
    0x57619ee54890 ---------J   04020  PRINT "THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET"
    0x57619ee54a60 ---------J   04030  PRINT "AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS"
    0x57619ee54c30 ---------J   04040  PRINT "WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW."
    0x57619ee54df0 ---------J   04050  PRINT "IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL."
    0x57619ee54f90 ---------J   04060  PRINT "BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!"
    0x57619ee54ff0 ---------J   04070  PRINT
    0x57619ee55130 ---------J   04080  PRINT "YOU:"
    0x57619ee551e0 ---------J   04090  PRINT
    0x57619ee553a0 ---------J   04100  PRINT "EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW."
    0x57619ee55520 ---------J   04110  PRINT "MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL)."
    0x57619ee555d0 ---------J   04120  GOSUB 5010
    0x57619ee55790 ---------J   04130  PRINT "SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT."
    0x57619ee55960 ---------J   04140  PRINT "  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE"
    0x57619ee55b30 ---------J   04150  PRINT "  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO"
    0x57619ee55cd0 ---------J   04160  PRINT "  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF"
    0x57619ee55e10 ---------J   04170  PRINT "  OCCURRENCE."
    0x57619ee55ed0 ---------J   04180  PRINT
    0x57619ee560a0 ---------J   04190  PRINT " EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10"
    0x57619ee56260 ---------J   04200  PRINT "  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO"
    0x57619ee56430 ---------J   04210  PRINT "  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS"
    0x57619ee56600 ---------J   04220  PRINT "  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY"
    0x57619ee567c0 ---------J   04230  PRINT "  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS"
    0x57619ee56920 ---------J   04240  PRINT "  PROCESS UNTIL 4 ROOMS HAVE BEEN ENTERED."
    0x57619ee569e0 ---------J   04250  GOSUB 5010
    0x57619ee56ba0 ---------J   04260  PRINT " NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING"
    0x57619ee56d70 ---------J   04270  PRINT "  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE"
    0x57619ee56f40 ---------J   04280  PRINT "  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED"
    0x57619ee57100 ---------J   04290  PRINT "  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING"
    0x57619ee572d0 ---------J   04300  PRINT "  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW" 
    0x57619ee574a0 ---------J   04310  PRINT "  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT"
    0x57619ee57660 ---------J   04320  PRINT "  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS."
    0x57619ee576c0 ---------J   04330  PRINT
    0x57619ee57860 ---------J   04340  PRINT "IF THE ARROW HITS THE WUMPUS, YOU WIN."
    0x57619ee579f0 ---------J   04350  PRINT "IF THE ARROW HITS YOU, YOU LOSE."
    0x57619ee57a50 ---------J   04360  GOSUB 5010
    0x57619ee57aa0 ---------J   04370  PRINT
    0x57619ee57be0 ---------J   04380  PRINT "WARNINGS:"
    0x57619ee57ca0 ---------J   04390  PRINT
    0x57619ee57e70 ---------J   04400  PRINT "WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,"
    0x57619ee57fb0 ---------J   04410  PRINT "THE COMPUTER SAYS:"
    0x57619ee58010 ---------J   04420  PRINT
    0x57619ee581b0 ---------J   04430  PRINT "WUMPUS - 'I SMELL A WUMPUS'"
    0x57619ee582f0 ---------J   04440  PRINT "BAT - 'BATS NEARBY'"
    0x57619ee58440 ---------J   04450  PRINT "PIT - 'I FEEL A DRAFT'"
    0x57619ee584f0 ---------J   04460  PRINT
    0x57619ee586b0 ---------J   04470  PRINT "BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!"
    0x57619ee58810 ---------J   04480  PRINT @ 910,"";
    0x57619ee589b0 ---------J   04490  INPUT "WOULD YOU LIKE THE DESCRIPTION OF THE CAVES";Z$
    0x57619ee58a40 ---------J   04500  CLS
    0x57619ee58ea0 ---------J   04510  IF LEFT$(Z$,1)="N" THEN RETURN
    0x57619ee58fe0 ---------J   04520  PRINT "THE CAVES ARE:"
    0x57619ee590a0 ---------J   04530  PRINT
    0x57619ee59270 ---------J   04540  PRINT "0 - DODECAHEDRON:  THE ROOMS OF THIS CAVE ARE ON A 12-SIDED"
    0x57619ee59440 ---------J   04550  PRINT "    OBJECT, EACH SIDE FORMING A PENTAGON.  THE ROOMS ARE AT THE"
    0x57619ee595f0 ---------J   04560  PRINT "    CORNERS OF THE PENTAGONS, EACH ROOM HAVING TUNNELS LEADING"
    0x57619ee59730 ---------J   04570  PRINT "    TO 3 OTHER ROOMS."
    0x57619ee597f0 ---------J   04580  PRINT
    0x57619ee599c0 ---------J   04590  PRINT "1 - MOBIUS STRIP:  THIS CAVE IS TWO ROOMS WIDE AND 10 ROOMS"
    0x57619ee59b70 ---------J   04600  PRINT "    AROUND (LIKE A BELT).  YOU WILL NOTICE THERE IS A HALF-"
    0x57619ee59cb0 ---------J   04610  PRINT "    TWIST SOMEWHERES."
    0x57619ee59d70 ---------J   04620  PRINT
    0x57619ee59f40 ---------J   04630  PRINT "2 - STRING OF BEADS:  FIVE BEADS IN A CIRCLE.  EACH BEAD IS A"
    0x57619ee5a110 ---------J   04640  PRINT "    DIAMOND WITH A VERTICAL CROSS-BAR.  THE RIGHT AND LEFT"
    0x57619ee5a2b0 ---------J   04650  PRINT "    CORNERS LEAD TO NEIGHBORING BEADS.  (THIS ONE IS DIFFICULT"
    0x57619ee5a3f0 ---------J   04660  PRINT "    TO PLAY)."
    0x57619ee5a4b0 ---------J   04670  GOSUB 5010
    0x57619ee5a670 ---------J   04680  PRINT "3 - HEX NETWORK:  IMAGINE A HEX TILE FLOOR.  TAKE A RECTANGLE"
    0x57619ee5a840 ---------J   04690  PRINT "    WITH 20 POINTS (INTERSECTIONS) INSIDE (4X5).  JOIN RIGHT"
    0x57619ee5a9f0 ---------J   04700  PRINT "    AND LEFT SIDES TO MAKE A CYLINDER.  THEN JOIN TOP AND BOT-"
    0x57619ee5ab80 ---------J   04710  PRINT "    TOM TO FORM A TORUS (DOUGHNUT)."
    0x57619ee5acd0 ---------J   04720  PRINT "    HAVE FUN IMAGINING THIS ONE!"
    0x57619ee5ad90 ---------J   04730  PRINT
    0x57619ee5af50 ---------J   04740  PRINT "CAVES 0-3 ARE REGULAR IN THE SENSE THAT EACH ROOM GOES TO THREE"
    0x57619ee5b0f0 ---------J   04750  PRINT "OTHER ROOMS AND THE TUNNELS ALLOW TWO-WAY TRAFFIC."
    0x57619ee5b240 ---------J   04760  PRINT "HERE ARE SOME IRREGULAR CAVES:"
    0x57619ee5b300 ---------J   04770  PRINT
    0x57619ee5b4d0 ---------J   04780  PRINT "4 - DENDRITE WITH DEGENERACIES:  PULL A PLANT FROM THE GROUND."
    0x57619ee5b6a0 ---------J   04790  PRINT "    THE ROOTS AND BRANCHES FROM A DENDRITE - IE, THERE ARE NO"
    0x57619ee5b870 ---------J   04800  PRINT "    LOOPING PATHS.  DEGENERACY MEANS A) SOME ROOMS CONNECT TO"
    0x57619ee5ba30 ---------J   04810  PRINT "    THEMSELVES OR B) THAT TWO ROOMS HAVE MORE THAN ONE TUNNEL"
    0x57619ee5bbb0 ---------J   04820  PRINT "    BETWEEN THEM IE, 12 HAS TWO TUNNELS TO 13."
    0x57619ee5bc70 ---------J   04830  GOSUB 5010
    0x57619ee5be30 ---------J   04840  PRINT "5 - ONE WAY LATTICE:  HERE ALL TUNNELS GO ONE WAY ONLY.  TO"
    0x57619ee5bfa0 ---------J   04850  PRINT "    RETURN, YOU MUST GO AROUND THE CAVE (ABOUT 5 MOVES)."
    0x57619ee5c060 ---------J   04860  PRINT
    0x57619ee5c220 ---------J   04870  PRINT "6 - ENTER YOUR OWN CAVE:  THE COMPUTER WILL ASK YOU FOR THE"
    0x57619ee5c380 ---------J   04880  PRINT "    ROOMS NEXT TO EACH ROOM IN THE CAVE."
    0x57619ee5c410 ---------J   04890  PRINT
    0x57619ee5c550 ---------J   04900  PRINT "   FOR EXAMPLE:"
    0x57619ee5c610 ---------J   04910  PRINT
    0x57619ee5c7e0 ---------J   04920  PRINT "    TO SET ROOM #1 UP WITH TUNNELS GOING TO ROOMS 2, 3 AND 4"
    0x57619ee5c980 ---------J   04930  PRINT "    TYPE '2' (ENTER) '3' (ENTER) '4' (ENTER) WHEN PROMPTED"
    0x57619ee5cb00 ---------J   04940  PRINT "    WITH 'ROOM #1'"
    0x57619ee5cb60 ---------J   04950  PRINT
    0x57619ee5ce10 ---------J   04960  PRINT TAB(24);"HAPPY HUNTING!!!"
    0x57619ee5d0b0 ---------J   04970  PRINT TAB(27);">>>------->"
    0x57619ee5d110 ---------J   04980  GOSUB 5010
    0x57619ee76d40 ---------J   04990  GOTO 05000
    0x57619ee73270 ---------J T 05000  RETURN
    0x57619ee5d330 ---------K G 05010  PRINT @ 975,"PRESS 'ENTER' TO CONTINUE ";
    0x57619ee5d610 ---------K   05020  Z$=INKEY$
    0x57619ee5d820 ---------K   05030  Z$=Z$
    0x57619ee5dab0 ---------K T 05040  IF Z$="" THEN 5040 
    0x57619ee5de20 ---------K   05050  IF ASC(Z$)<>13 THEN 5040 ELSE CLS
    0x57619ee76cf0 ---------K   05060  GOTO 05070
    0x57619ee732f0 ---------K T 05070  RETURN
    0x57619ee76ca0 ---------L G 05080  GOTO 05090
    0x57619ee73370 ---------L T 05090  RETURN
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
char* data_01910s[]={"2","5","8","1","3","10","2","4","12","3","5","14","1","4","6","5","7","15","6","8","17","1"};
char* data_01920s[]={"7","8","9","10","18","2","9","11","10","12","19","3","11","13","12","14","20","4","13"};
char* data_01930s[]={"15","6","14","16","15","17","20","7","16","18","9","17","19","11","18","20","13","16","19"};
char* data_01950s[]={"20","2","3","19","1","4","1","4","5","2","3","6","3","6","7","4","5","8","5","8","9","6","7"};
char* data_01960s[]={"10","7","10","11","8","9","12","9","12","13","10","11","14","11","14","15","12","13"};
char* data_01970s[]={"16","12","16","17","14","15","18","15","18","19","16","17","20","2","17","20","1","18","19"};
char* data_01990s[]={"2","3","20","1","3","4","1","2","4","2","3","5","4","6","7","5","7","8","5","6","8","6","7"};
char* data_02000s[]={"9","8","10","11","9","11","12","9","10","12","10","11","13","12","14","15","13","15","1"};
char* data_02010s[]={"6","13","14","16","14","15","17","16","18","19","17","19","20","17","18","20","1","18","19"};
char* data_02030s[]={"6","10","16","6","7","17","7","8","18","8","9","19","9","10","20","1","2","15","2","3","1"};
char* data_02040s[]={"1","3","4","12","4","5","13","1","5","14","7","16","20","8","16","17","9","17","18","10"};
char* data_02050s[]={"18","19","6","19","20","1","11","12","2","12","13","3","13","14","4","14","15","5","11","15"};
char* data_02070s[]={"1","1","5","2","2","5","3","3","6","4","4","6","1","2","7","3","4","7","5","6","10","8","9"};
char* data_02080s[]={"9","8","8","10","7","9","11","10","13","14","12","13","13","11","12","12","11","15","16"};
char* data_02090s[]={"14","17","18","14","19","20","15","17","17","15","18","18","16","19","19","16","20","20"};
char* data_02110s[]={"5","4","8","1","5","6","2","6","7","3","7","8","8","9","12","5","9","10","6","10","11","7"};
char* data_02120s[]={"11","12","12","13","16","9","13","14","10","14","15","11","15","16","16","17","20","13"};
char* data_02130s[]={"17","18","14","18","19","15","19","20","1","4","20","1","2","17","2","3","18","3","4","19"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1910, 22,data_01910s},
    { 1920, 19,data_01920s},
    { 1930, 19,data_01930s},
    { 1950, 23,data_01950s},
    { 1960, 18,data_01960s},
    { 1970, 19,data_01970s},
    { 1990, 23,data_01990s},
    { 2000, 19,data_02000s},
    { 2010, 19,data_02010s},
    { 2030, 21,data_02030s},
    { 2040, 20,data_02040s},
    { 2050, 20,data_02050s},
    { 2070, 23,data_02070s},
    { 2080, 19,data_02080s},
    { 2090, 18,data_02090s},
    { 2110, 22,data_02110s},
    { 2120, 18,data_02120s},
    { 2130, 20,data_02130s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
int    A9_int;                                    // Basic: A9 
int    F_int;                                     // Basic: F 
int    F1_int;                                    // Basic: F1 
int    F3_int;                                    // Basic: F3 
int    F5_int;                                    // Basic: F5 
int    I_int;                                     // Basic: I 
char*  I_str_arr[6];                              // Basic: I$ 
int    I9_int;                                    // Basic: I9 
char*  INKEY_str;                                 // Basic: INKEY$ 
int    J_int;                                     // Basic: J 
int    J9_int;                                    // Basic: J9 
int    K_int;                                     // Basic: K 
int    K1_int;                                    // Basic: K1 
int    L_int_arr[6];                              // Basic: L 
int    M_int_arr[6];                              // Basic: M 
int    N_int;                                     // Basic: N 
int    O_int;                                     // Basic: O 
int    P_int_arr[5];                              // Basic: P 
int    P1_int;                                    // Basic: P1 
int    Q_int;                                     // Basic: Q 
int    S_int_arr[20][3];                          // Basic: S 
int    X9_int;                                    // Basic: X9 
char*  Z_str;                                     // Basic: Z$ 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02280();
void Routine_02460();
void Routine_02570();
void Routine_02690();
void Routine_02780();
void Routine_03380();
void Routine_03610();
void Routine_03780();
void Routine_03870();
void Routine_05010();
void Routine_05080();

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

void Routine_02280(){
    // 02280 REM  PRINT LOCATION & HAZARD WARNINGS
    // 02290 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02300 FOR J=2 TO 6
    for(J_int=2;J_int<=6;J_int++){
        // 02310 FOR K=1 TO 3
        for(K_int=1;K_int<=3;K_int++){
            // 02320 IF S(L(1),K)<>L(J) THEN 2390
            if(S_int_arr[L_int_arr[1]][K_int]!=L_int_arr[J_int])goto Lbl_02390;
            // 02330 ON J-1 GOTO 2340,2360,2360,2380,2380
            switch((int)(J_int-1)){
                case 1: goto Lbl_02340;
                case 2: goto Lbl_02360;
                case 3: goto Lbl_02360;
                case 4: goto Lbl_02380;
                case 5: goto Lbl_02380;
                default: break; 
            };

  Lbl_02340:
            // 02340 PRINT "I SMeLL A WUMPUS!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I SMeLL A WUMPUS!");strcat(buf,"\n");fputs(buf,fh); };
            // 02350 GOTO 2390
            goto Lbl_02390;

  Lbl_02360:
            // 02360 PRINT "I FEEL A DRAFT"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I FEEL A DRAFT");strcat(buf,"\n");fputs(buf,fh); };
            // 02370 GOTO 2390
            goto Lbl_02390;

  Lbl_02380:
            // 02380 PRINT "BATS NEARBY!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BATS NEARBY!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02390:
            // 02390 NEXT K
            int dummy_2390=0; // Ignore this line.
        }; // End-For(K_int)
        // 02400 NEXT J
        int dummy_2400=0; // Ignore this line.
    }; // End-For(J_int)
    // 02410 PRINT "YOU ARE IN ROOM";L(1);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE IN ROOM"); b2c_INT(buf,L_int_arr[1]);fputs(buf,fh); };
    // 02420 PRINT "    TUNNELS LEAD TO";S(L,1);",";S(L,2);"AND";S(L,3)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TUNNELS LEAD TO"); b2c_INT(buf,S_int_arr[L_int_arr[0]][1]);strcat(buf,","); b2c_INT(buf,S_int_arr[L_int_arr[0]][2]);strcat(buf,"AND"); b2c_INT(buf,S_int_arr[L_int_arr[0]][3]);strcat(buf,"\n");fputs(buf,fh); };
    // 02430 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02440 GOTO 02450
    goto Lbl_02450;

  Lbl_02450:
    // 02450 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02460(){
    // 02460 REM  CHOSE OPTION

  Lbl_02470:
    // 02470 INPUT "SHOOT OR MOVE";I$
    // Start of Basic INPUT statement 02470
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"SHOOT OR MOVE");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&I_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02470
    // 02480 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02490 IF LEFT$(I$,1)<>"S" THEN 2520
    if(LEFT$(I_str_arr[0],1)=='S')goto Lbl_02520;
    // 02500 O=1
    O_int = 1;
    // 02510 GOTO 02550
    goto Lbl_02550;

  Lbl_02520:
    // 02520 IF LEFT$(I$,1)<>"M" THEN 2470
    if(LEFT$(I_str_arr[0],1)=='M')goto Lbl_02470;
    // 02530 O=2
    O_int = 2;
    // 02540 GOTO 02550
    goto Lbl_02550;

  Lbl_02550:
    // 02550 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------
    // 02560 REM  ARROW ROUTINE

void Routine_02570(){
    // 02570 F=0
    F_int = 0;
    // 02580 REM  PATH OF ARROW

  Lbl_02590:
    // 02590 INPUT "NUMBER OF ROOMS";J9
    // Start of Basic INPUT statement 02590
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"NUMBER OF ROOMS");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&J9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02590
    // 02600 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02610 IF J9<1 THEN 2590
    if(J9_int<1)goto Lbl_02590;
    // 02620 IF J9>5 THEN 2590
    if(J9_int>5)goto Lbl_02590;
    // 02630 FOR K=1 TO J9
    for(K_int=1;K_int<=J9_int;K_int++){

  Lbl_02640:
        // 02640 INPUT "ROOM #";P(K)
        // Start of Basic INPUT statement 02640
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout,"ROOM #");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&P_int_arr[K_int],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 02640
        // 02650 IF P(K)>0 THEN IF P(K)<21 THEN 1040
        if(P_int_arr[K_int]>0) {
        }
        // 02660 PRINT "   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY.");strcat(buf,"\n");fputs(buf,fh); };
        // 02670 GOTO 2640
        goto Lbl_02640;


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------
        // 02680 REM  MOVE WUMPUS ROUTINE

void Routine_02690(){
        // 02690 K=RND(4)
        K_int = RND(4);
        // 02700 IF K=4 THEN 2760
        if(K_int==4)goto Lbl_02760;
        // 02710 L(2)=S(L(2),K)
        L_int_arr[2] = S_int_arr[L_int_arr[2]][K_int];
        // 02720 IF L(2)<>L THEN 2760
        if(L_int_arr[2]!=L_int_arr[0])goto Lbl_02760;
        // 02730 PRINT "TSK TSK TSK - THE WUMPUS GOT YOU!"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TSK TSK TSK - THE WUMPUS GOT YOU!");strcat(buf,"\n");fputs(buf,fh); };
        // 02740 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 02750 F=-1
        F_int = -1;

  Lbl_02760:
        // 02760 GOTO 02770
        goto Lbl_02770;

  Lbl_02770:
        // 02770 RETURN
        return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------

void Routine_02780(){
        // 02780 REM  MOVE ROUTINE
        // 02790 F=0
        F_int = 0;

  Lbl_02800:
        // 02800 INPUT "WHERE TO";L
        // Start of Basic INPUT statement 02800
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout,"WHERE TO");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&L_int_arr[0],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 02800
        // 02810 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 02820 IF L<1 THEN 2800
        if(L_int_arr[0]<1)goto Lbl_02800;
        // 02830 IF L>20 THEN 2800
        if(L_int_arr[0]>20)goto Lbl_02800;
        // 02840 FOR K=1 TO 3
        for(K_int=1;K_int<=3;K_int++){
            // 02850 REM  CHECK IF LEGAL MOVE
            // 02860 IF S(L(1),K)=L THEN K=4
            if(S_int_arr[L_int_arr[1]][K_int]==L_int_arr[0]) {
            }
            // 02870 GOTO 2880
            goto Lbl_02880;

  Lbl_02880:
            // 02880 L(1)=L
            L_int_arr[1] = L_int_arr[0];
            // 02890 REM  WUMPUS
            // 02900 IF L<>L(2) THEN 2970
            if(L_int_arr[0]!=L_int_arr[2])goto Lbl_02970;
            // 02910 PRINT "... OOPS!  BUMPED A WUMPUS!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"... OOPS!  BUMPED A WUMPUS!");strcat(buf,"\n");fputs(buf,fh); };
            // 02920 REM  MOVE WUMPUS
            // 02930 GOSUB 2690
            Routine_02690();
            // 02940 IF F=0 THEN 2970
            if(F_int==0)goto Lbl_02970;
            // 02950 GOTO 03370
            goto Lbl_03370;
            // 02960 REM  PIT

  Lbl_02970:
            // 02970 IF L<>L(3) THEN IF L<>L(4) THEN 1830
            if(L_int_arr[0]!=L_int_arr[3]) {
            }
            // 02980 CLS
            ClearScreen(0);
            // 02990 P1=110
            P1_int = 110;
            // 03000 PRINT CHR$(28);"Y";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(28));strcat(buf,"Y");fputs(buf,fh); };
            // 03010 GOSUB 5080
            Routine_05080();
            // 03020 PRINT "Y";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Y");fputs(buf,fh); };
            // 03030 GOSUB 5080
            Routine_05080();
            // 03040 PRINT "Y"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Y");strcat(buf,"\n");fputs(buf,fh); };
            // 03050 GOSUB 5080
            Routine_05080();
            // 03060 P1=100
            P1_int = 100;
            // 03070 PRINT "      Y"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      Y");strcat(buf,"\n");fputs(buf,fh); };
            // 03080 GOSUB 5080
            Routine_05080();
            // 03090 P1=90
            P1_int = 90;
            // 03100 PRINT "         Y"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"         Y");strcat(buf,"\n");fputs(buf,fh); };
            // 03110 GOSUB 5080
            Routine_05080();
            // 03120 P1=80
            P1_int = 80;
            // 03130 PRINT "          Y"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"          Y");strcat(buf,"\n");fputs(buf,fh); };
            // 03140 GOSUB 5080
            Routine_05080();
            // 03150 P1=70
            P1_int = 70;
            // 03160 PRINT "           Y"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"           Y");strcat(buf,"\n");fputs(buf,fh); };
            // 03170 GOSUB 5080
            Routine_05080();
            // 03180 PRINT TAB(11);"I";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,11);strcat(buf,"I");fputs(buf,fh); };
            // 03190 GOSUB 5080
            Routine_05080();
            // 03200 PRINT TAB(30);"FELL IN A PIT!!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,30);strcat(buf,"FELL IN A PIT!!");strcat(buf,"\n");fputs(buf,fh); };
            // 03210 FOR I=1 TO 4
            for(I_int=1;I_int<=4;I_int++){
                // 03220 P1=70-I*10
                P1_int = 70-I_int*10;
                // 03230 PRINT TAB(11);"I"
                { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,11);strcat(buf,"I");strcat(buf,"\n");fputs(buf,fh); };
                // 03240 GOSUB 5080
                Routine_05080();
                // 03250 NEXT I
                int dummy_3250=0; // Ignore this line.
            }; // End-For(I_int)
            // 03260 FOR I=1 TO 2
            for(I_int=1;I_int<=2;I_int++){
                // 03270 P1=30-I*10
                P1_int = 30-I_int*10;
                // 03280 PRINT TAB(11);"E"
                { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,11);strcat(buf,"E");strcat(buf,"\n");fputs(buf,fh); };
                // 03290 GOSUB 5080
                Routine_05080();
                // 03300 NEXT I
                int dummy_3300=0; // Ignore this line.
            }; // End-For(I_int)
            // 03310 FOR I=1 TO 18
            for(I_int=1;I_int<=18;I_int++){
                // 03320 PRINT TAB(11);"."
                { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,11);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
                // 03330 GOSUB 5080
                Routine_05080();
                // 03340 NEXT I
                int dummy_3340=0; // Ignore this line.
            }; // End-For(I_int)
            // 03350 F=-1
            F_int = -1;
            // 03360 GOTO 03370
            goto Lbl_03370;

  Lbl_03370:
            // 03370 RETURN
            return;
};


//---------------------------------------------------------------------------
// Routine G
//---------------------------------------------------------------------------

void Routine_03380(){
            // 03380 REM  SELECT CAVE

  Lbl_03390:
            // 03390 IF F3=1 THEN 3430
            if(F3_int==1)goto Lbl_03430;
            // 03400 PRINT @ 896,CHR$(30)
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(30));strcat(buf,"\n");fputs(buf,fh); };
            // 03410 PRINT @ 960,CHR$(30);
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(30));fputs(buf,fh); };
            // 03420 PRINT @ 901,"";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"");fputs(buf,fh); };

  Lbl_03430:
            // 03430 INPUT "CAVE # (0-6)";N
            // Start of Basic INPUT statement 03430
            {
                int numargs=1;
                char *args[numargs+1];
                bool echoeol=true;
                while(true){
                    fprintf(stdout,"CAVE # (0-6)");
                    int err=input(args,numargs,echoeol);
                    if(err==0x03) break;
                    if(err || 
                        (err += b2c_strtoi(&N_int,args,0)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 03430
            // 03440 IF N>=0 AND N<=6 THEN 3470
            if(N_int>=0&&N_int<=6)goto Lbl_03470;
            // 03450 IF F3=1 THEN PRINT
            if(F3_int==1) {
            }
            // 03460 GOTO 3390
            goto Lbl_03390;

  Lbl_03470:
            // 03470 CLS
            ClearScreen(0);
            // 03480 PRINT CHR$(28);
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(28));fputs(buf,fh); };
            // 03490 IF N<6 THEN PRINT "THE WUMPUS IS HIDING."
            if(N_int<6) {
            }
            // 03500 IF N=6 THEN 3580
            if(N_int==6)goto Lbl_03580;
            // 03510 RESTORE
            Data_Index=0;
            RestoreData(0);
            // 03520 IF N=0 THEN 3560
            if(N_int==0)goto Lbl_03560;
            // 03530 FOR X9=1 TO N*60
            for(X9_int=1;X9_int<=N_int*60;X9_int++){
                // 03540 READ I9
                I9_int = Get_Data_Int();
                // 03550 NEXT X9
                int dummy_3550=0; // Ignore this line.
            }; // End-For(X9_int)

  Lbl_03560:
            // 03560 GOSUB 3780
            Routine_03780();
            // 03570 GOTO 3590
            goto Lbl_03590;

  Lbl_03580:
            // 03580 GOSUB 3610
            Routine_03610();

  Lbl_03590:
            // 03590 GOTO 03600
            goto Lbl_03600;

  Lbl_03600:
            // 03600 RETURN
            return;
};


//---------------------------------------------------------------------------
// Routine H
//---------------------------------------------------------------------------

void Routine_03610(){
            // 03610 REM  INPUT OWN CAVE
            // 03620 FOR J=1 TO 20
            for(J_int=1;J_int<=20;J_int++){

  Lbl_03630:
                // 03630 PRINT "ROOM #";J;
                { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ROOM #"); b2c_INT(buf,J_int);fputs(buf,fh); };
                // 03640 INPUT "IS CONNECTED TO :";S(J,1)
                // Start of Basic INPUT statement 03640
                {
                    int numargs=1;
                    char *args[numargs+1];
                    bool echoeol=true;
                    while(true){
                        fprintf(stdout,"IS CONNECTED TO :");
                        int err=input(args,numargs,echoeol);
                        if(err==0x03) break;
                        if(err || 
                            (err += b2c_strtoi(&S_int_arr[J_int][1],args,0)) ){
                             printf("?Redo from start\n");
                        }else{
                            break;
                        };
                    };
                }; // End of Basic INPUT statement 03640
                // 03650 INPUT "AND";S(J,2)
                // Start of Basic INPUT statement 03650
                {
                    int numargs=1;
                    char *args[numargs+1];
                    bool echoeol=true;
                    while(true){
                        fprintf(stdout,"AND");
                        int err=input(args,numargs,echoeol);
                        if(err==0x03) break;
                        if(err || 
                            (err += b2c_strtoi(&S_int_arr[J_int][2],args,0)) ){
                             printf("?Redo from start\n");
                        }else{
                            break;
                        };
                    };
                }; // End of Basic INPUT statement 03650
                // 03660 INPUT "AND";S(J,3)
                // Start of Basic INPUT statement 03660
                {
                    int numargs=1;
                    char *args[numargs+1];
                    bool echoeol=true;
                    while(true){
                        fprintf(stdout,"AND");
                        int err=input(args,numargs,echoeol);
                        if(err==0x03) break;
                        if(err || 
                            (err += b2c_strtoi(&S_int_arr[J_int][3],args,0)) ){
                             printf("?Redo from start\n");
                        }else{
                            break;
                        };
                    };
                }; // End of Basic INPUT statement 03660
                // 03670 PRINT
                { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
                // 03680 F5=0
                F5_int = 0;
                // 03690 FOR K=1 TO 3
                for(K_int=1;K_int<=3;K_int++){
                    // 03700 IF S(J,K)>0 THEN IF S(J,K)<21 THEN 2190
                    if(S_int_arr[J_int][K_int]>0) {
                    }
                    // 03710 PRINT "ERROR** ENTER ROOM NUMBERS FROM 1 TO 20 ONLY!!"
                    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ERROR** ENTER ROOM NUMBERS FROM 1 TO 20 ONLY!!");strcat(buf,"\n");fputs(buf,fh); };
                    // 03720 F5=1
                    F5_int = 1;
                    // 03730 NEXT K
                    int dummy_3730=0; // Ignore this line.
                }; // End-For(K_int)
                // 03740 IF F5=1 THEN 3630
                if(F5_int==1)goto Lbl_03630;
                // 03750 NEXT J
                int dummy_3750=0; // Ignore this line.
            }; // End-For(J_int)
            // 03760 GOTO 03770
            goto Lbl_03770;

  Lbl_03770:
            // 03770 RETURN
            return;
};


//---------------------------------------------------------------------------
// Routine I
//---------------------------------------------------------------------------

void Routine_03780(){
            // 03780 REM  INPUT CAVE
            // 03790 FOR J=1 TO 20
            for(J_int=1;J_int<=20;J_int++){
                // 03800 FOR K=1 TO 3
                for(K_int=1;K_int<=3;K_int++){
                    // 03810 READ S(J,K)
                    S_int_arr[J_int][K_int] = Get_Data_Int();
                    // 03820 NEXT K
                    int dummy_3820=0; // Ignore this line.
                }; // End-For(K_int)
                // 03830 NEXT J
                int dummy_3830=0; // Ignore this line.
            }; // End-For(J_int)
            // 03840 GOTO 03850
            goto Lbl_03850;

  Lbl_03850:
            // 03850 RETURN
            return;
};


//---------------------------------------------------------------------------
// Routine J
//---------------------------------------------------------------------------
            // 03860 REM  INSTRUCTIONS

void Routine_03870(){
            // 03870 CLS
            ClearScreen(0);
            // 03880 PRINT "  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3");strcat(buf,"\n");fputs(buf,fh); };
            // 03890 PRINT "TUNNELS LEADING TO OTHER ROOMS."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TUNNELS LEADING TO OTHER ROOMS.");strcat(buf,"\n");fputs(buf,fh); };
            // 03900 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 03910 PRINT "HAZARDS:"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAZARDS:");strcat(buf,"\n");fputs(buf,fh); };
            // 03920 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 03930 PRINT "BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF");strcat(buf,"\n");fputs(buf,fh); };
            // 03940 PRINT "YOU GO IN THERE, YOU FALL INTO THE PIT AND LOSE!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU GO IN THERE, YOU FALL INTO THE PIT AND LOSE!");strcat(buf,"\n");fputs(buf,fh); };
            // 03950 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 03960 PRINT "SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,");strcat(buf,"\n");fputs(buf,fh); };
            // 03970 PRINT "A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE");strcat(buf,"\n");fputs(buf,fh); };
            // 03980 PRINT "CAVE WHERE YOU COULD RUN INTO THE..."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CAVE WHERE YOU COULD RUN INTO THE...");strcat(buf,"\n");fputs(buf,fh); };
            // 03990 GOSUB 5010
            Routine_05010();
            // 04000 PRINT "WUMPUS:"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WUMPUS:");strcat(buf,"\n");fputs(buf,fh); };
            // 04010 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04020 PRINT "THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET");strcat(buf,"\n");fputs(buf,fh); };
            // 04030 PRINT "AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS");strcat(buf,"\n");fputs(buf,fh); };
            // 04040 PRINT "WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW.");strcat(buf,"\n");fputs(buf,fh); };
            // 04050 PRINT "IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL.");strcat(buf,"\n");fputs(buf,fh); };
            // 04060 PRINT "BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!");strcat(buf,"\n");fputs(buf,fh); };
            // 04070 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04080 PRINT "YOU:"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU:");strcat(buf,"\n");fputs(buf,fh); };
            // 04090 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04100 PRINT "EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW.");strcat(buf,"\n");fputs(buf,fh); };
            // 04110 PRINT "MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL)."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL).");strcat(buf,"\n");fputs(buf,fh); };
            // 04120 GOSUB 5010
            Routine_05010();
            // 04130 PRINT "SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT.");strcat(buf,"\n");fputs(buf,fh); };
            // 04140 PRINT "  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE");strcat(buf,"\n");fputs(buf,fh); };
            // 04150 PRINT "  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO");strcat(buf,"\n");fputs(buf,fh); };
            // 04160 PRINT "  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF");strcat(buf,"\n");fputs(buf,fh); };
            // 04170 PRINT "  OCCURRENCE."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  OCCURRENCE.");strcat(buf,"\n");fputs(buf,fh); };
            // 04180 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04190 PRINT " EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10");strcat(buf,"\n");fputs(buf,fh); };
            // 04200 PRINT "  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO");strcat(buf,"\n");fputs(buf,fh); };
            // 04210 PRINT "  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS");strcat(buf,"\n");fputs(buf,fh); };
            // 04220 PRINT "  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY");strcat(buf,"\n");fputs(buf,fh); };
            // 04230 PRINT "  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS");strcat(buf,"\n");fputs(buf,fh); };
            // 04240 PRINT "  PROCESS UNTIL 4 ROOMS HAVE BEEN ENTERED."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  PROCESS UNTIL 4 ROOMS HAVE BEEN ENTERED.");strcat(buf,"\n");fputs(buf,fh); };
            // 04250 GOSUB 5010
            Routine_05010();
            // 04260 PRINT " NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING");strcat(buf,"\n");fputs(buf,fh); };
            // 04270 PRINT "  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE");strcat(buf,"\n");fputs(buf,fh); };
            // 04280 PRINT "  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED");strcat(buf,"\n");fputs(buf,fh); };
            // 04290 PRINT "  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING");strcat(buf,"\n");fputs(buf,fh); };
            // 04300 PRINT "  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW" 
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW");strcat(buf,"\n");fputs(buf,fh); };
            // 04310 PRINT "  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT");strcat(buf,"\n");fputs(buf,fh); };
            // 04320 PRINT "  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS.");strcat(buf,"\n");fputs(buf,fh); };
            // 04330 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04340 PRINT "IF THE ARROW HITS THE WUMPUS, YOU WIN."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF THE ARROW HITS THE WUMPUS, YOU WIN.");strcat(buf,"\n");fputs(buf,fh); };
            // 04350 PRINT "IF THE ARROW HITS YOU, YOU LOSE."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF THE ARROW HITS YOU, YOU LOSE.");strcat(buf,"\n");fputs(buf,fh); };
            // 04360 GOSUB 5010
            Routine_05010();
            // 04370 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04380 PRINT "WARNINGS:"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WARNINGS:");strcat(buf,"\n");fputs(buf,fh); };
            // 04390 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04400 PRINT "WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,");strcat(buf,"\n");fputs(buf,fh); };
            // 04410 PRINT "THE COMPUTER SAYS:"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE COMPUTER SAYS:");strcat(buf,"\n");fputs(buf,fh); };
            // 04420 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04430 PRINT "WUMPUS - 'I SMELL A WUMPUS'"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WUMPUS - 'I SMELL A WUMPUS'");strcat(buf,"\n");fputs(buf,fh); };
            // 04440 PRINT "BAT - 'BATS NEARBY'"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BAT - 'BATS NEARBY'");strcat(buf,"\n");fputs(buf,fh); };
            // 04450 PRINT "PIT - 'I FEEL A DRAFT'"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PIT - 'I FEEL A DRAFT'");strcat(buf,"\n");fputs(buf,fh); };
            // 04460 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04470 PRINT "BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!");strcat(buf,"\n");fputs(buf,fh); };
            // 04480 PRINT @ 910,"";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"");fputs(buf,fh); };
            // 04490 INPUT "WOULD YOU LIKE THE DESCRIPTION OF THE CAVES";Z$
            // Start of Basic INPUT statement 04490
            {
                int numargs=1;
                char *args[numargs+1];
                bool echoeol=true;
                while(true){
                    fprintf(stdout,"WOULD YOU LIKE THE DESCRIPTION OF THE CAVES");
                    int err=input(args,numargs,echoeol);
                    if(err==0x03) break;
                    if(err || 
                        (err += b2c_strtos(&Z_str,args,0)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 04490
            // 04500 CLS
            ClearScreen(0);
            // 04510 IF LEFT$(Z$,1)="N" THEN RETURN
            if(LEFT$(Z_str,1)=='N') {
            }
            // 04520 PRINT "THE CAVES ARE:"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CAVES ARE:");strcat(buf,"\n");fputs(buf,fh); };
            // 04530 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04540 PRINT "0 - DODECAHEDRON:  THE ROOMS OF THIS CAVE ARE ON A 12-SIDED"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"0 - DODECAHEDRON:  THE ROOMS OF THIS CAVE ARE ON A 12-SIDED");strcat(buf,"\n");fputs(buf,fh); };
            // 04550 PRINT "    OBJECT, EACH SIDE FORMING A PENTAGON.  THE ROOMS ARE AT THE"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    OBJECT, EACH SIDE FORMING A PENTAGON.  THE ROOMS ARE AT THE");strcat(buf,"\n");fputs(buf,fh); };
            // 04560 PRINT "    CORNERS OF THE PENTAGONS, EACH ROOM HAVING TUNNELS LEADING"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    CORNERS OF THE PENTAGONS, EACH ROOM HAVING TUNNELS LEADING");strcat(buf,"\n");fputs(buf,fh); };
            // 04570 PRINT "    TO 3 OTHER ROOMS."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TO 3 OTHER ROOMS.");strcat(buf,"\n");fputs(buf,fh); };
            // 04580 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04590 PRINT "1 - MOBIUS STRIP:  THIS CAVE IS TWO ROOMS WIDE AND 10 ROOMS"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1 - MOBIUS STRIP:  THIS CAVE IS TWO ROOMS WIDE AND 10 ROOMS");strcat(buf,"\n");fputs(buf,fh); };
            // 04600 PRINT "    AROUND (LIKE A BELT).  YOU WILL NOTICE THERE IS A HALF-"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    AROUND (LIKE A BELT).  YOU WILL NOTICE THERE IS A HALF-");strcat(buf,"\n");fputs(buf,fh); };
            // 04610 PRINT "    TWIST SOMEWHERES."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TWIST SOMEWHERES.");strcat(buf,"\n");fputs(buf,fh); };
            // 04620 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04630 PRINT "2 - STRING OF BEADS:  FIVE BEADS IN A CIRCLE.  EACH BEAD IS A"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2 - STRING OF BEADS:  FIVE BEADS IN A CIRCLE.  EACH BEAD IS A");strcat(buf,"\n");fputs(buf,fh); };
            // 04640 PRINT "    DIAMOND WITH A VERTICAL CROSS-BAR.  THE RIGHT AND LEFT"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    DIAMOND WITH A VERTICAL CROSS-BAR.  THE RIGHT AND LEFT");strcat(buf,"\n");fputs(buf,fh); };
            // 04650 PRINT "    CORNERS LEAD TO NEIGHBORING BEADS.  (THIS ONE IS DIFFICULT"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    CORNERS LEAD TO NEIGHBORING BEADS.  (THIS ONE IS DIFFICULT");strcat(buf,"\n");fputs(buf,fh); };
            // 04660 PRINT "    TO PLAY)."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TO PLAY).");strcat(buf,"\n");fputs(buf,fh); };
            // 04670 GOSUB 5010
            Routine_05010();
            // 04680 PRINT "3 - HEX NETWORK:  IMAGINE A HEX TILE FLOOR.  TAKE A RECTANGLE"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"3 - HEX NETWORK:  IMAGINE A HEX TILE FLOOR.  TAKE A RECTANGLE");strcat(buf,"\n");fputs(buf,fh); };
            // 04690 PRINT "    WITH 20 POINTS (INTERSECTIONS) INSIDE (4X5).  JOIN RIGHT"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    WITH 20 POINTS (INTERSECTIONS) INSIDE (4X5).  JOIN RIGHT");strcat(buf,"\n");fputs(buf,fh); };
            // 04700 PRINT "    AND LEFT SIDES TO MAKE A CYLINDER.  THEN JOIN TOP AND BOT-"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    AND LEFT SIDES TO MAKE A CYLINDER.  THEN JOIN TOP AND BOT-");strcat(buf,"\n");fputs(buf,fh); };
            // 04710 PRINT "    TOM TO FORM A TORUS (DOUGHNUT)."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TOM TO FORM A TORUS (DOUGHNUT).");strcat(buf,"\n");fputs(buf,fh); };
            // 04720 PRINT "    HAVE FUN IMAGINING THIS ONE!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    HAVE FUN IMAGINING THIS ONE!");strcat(buf,"\n");fputs(buf,fh); };
            // 04730 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04740 PRINT "CAVES 0-3 ARE REGULAR IN THE SENSE THAT EACH ROOM GOES TO THREE"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CAVES 0-3 ARE REGULAR IN THE SENSE THAT EACH ROOM GOES TO THREE");strcat(buf,"\n");fputs(buf,fh); };
            // 04750 PRINT "OTHER ROOMS AND THE TUNNELS ALLOW TWO-WAY TRAFFIC."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OTHER ROOMS AND THE TUNNELS ALLOW TWO-WAY TRAFFIC.");strcat(buf,"\n");fputs(buf,fh); };
            // 04760 PRINT "HERE ARE SOME IRREGULAR CAVES:"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE ARE SOME IRREGULAR CAVES:");strcat(buf,"\n");fputs(buf,fh); };
            // 04770 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04780 PRINT "4 - DENDRITE WITH DEGENERACIES:  PULL A PLANT FROM THE GROUND."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"4 - DENDRITE WITH DEGENERACIES:  PULL A PLANT FROM THE GROUND.");strcat(buf,"\n");fputs(buf,fh); };
            // 04790 PRINT "    THE ROOTS AND BRANCHES FROM A DENDRITE - IE, THERE ARE NO"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    THE ROOTS AND BRANCHES FROM A DENDRITE - IE, THERE ARE NO");strcat(buf,"\n");fputs(buf,fh); };
            // 04800 PRINT "    LOOPING PATHS.  DEGENERACY MEANS A) SOME ROOMS CONNECT TO"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    LOOPING PATHS.  DEGENERACY MEANS A) SOME ROOMS CONNECT TO");strcat(buf,"\n");fputs(buf,fh); };
            // 04810 PRINT "    THEMSELVES OR B) THAT TWO ROOMS HAVE MORE THAN ONE TUNNEL"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    THEMSELVES OR B) THAT TWO ROOMS HAVE MORE THAN ONE TUNNEL");strcat(buf,"\n");fputs(buf,fh); };
            // 04820 PRINT "    BETWEEN THEM IE, 12 HAS TWO TUNNELS TO 13."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    BETWEEN THEM IE, 12 HAS TWO TUNNELS TO 13.");strcat(buf,"\n");fputs(buf,fh); };
            // 04830 GOSUB 5010
            Routine_05010();
            // 04840 PRINT "5 - ONE WAY LATTICE:  HERE ALL TUNNELS GO ONE WAY ONLY.  TO"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"5 - ONE WAY LATTICE:  HERE ALL TUNNELS GO ONE WAY ONLY.  TO");strcat(buf,"\n");fputs(buf,fh); };
            // 04850 PRINT "    RETURN, YOU MUST GO AROUND THE CAVE (ABOUT 5 MOVES)."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    RETURN, YOU MUST GO AROUND THE CAVE (ABOUT 5 MOVES).");strcat(buf,"\n");fputs(buf,fh); };
            // 04860 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04870 PRINT "6 - ENTER YOUR OWN CAVE:  THE COMPUTER WILL ASK YOU FOR THE"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"6 - ENTER YOUR OWN CAVE:  THE COMPUTER WILL ASK YOU FOR THE");strcat(buf,"\n");fputs(buf,fh); };
            // 04880 PRINT "    ROOMS NEXT TO EACH ROOM IN THE CAVE."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    ROOMS NEXT TO EACH ROOM IN THE CAVE.");strcat(buf,"\n");fputs(buf,fh); };
            // 04890 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04900 PRINT "   FOR EXAMPLE:"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   FOR EXAMPLE:");strcat(buf,"\n");fputs(buf,fh); };
            // 04910 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04920 PRINT "    TO SET ROOM #1 UP WITH TUNNELS GOING TO ROOMS 2, 3 AND 4"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TO SET ROOM #1 UP WITH TUNNELS GOING TO ROOMS 2, 3 AND 4");strcat(buf,"\n");fputs(buf,fh); };
            // 04930 PRINT "    TYPE '2' (ENTER) '3' (ENTER) '4' (ENTER) WHEN PROMPTED"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TYPE '2' (ENTER) '3' (ENTER) '4' (ENTER) WHEN PROMPTED");strcat(buf,"\n");fputs(buf,fh); };
            // 04940 PRINT "    WITH 'ROOM #1'"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    WITH 'ROOM #1'");strcat(buf,"\n");fputs(buf,fh); };
            // 04950 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 04960 PRINT TAB(24);"HAPPY HUNTING!!!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,24);strcat(buf,"HAPPY HUNTING!!!");strcat(buf,"\n");fputs(buf,fh); };
            // 04970 PRINT TAB(27);">>>------->"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,27);strcat(buf,">>>------->");strcat(buf,"\n");fputs(buf,fh); };
            // 04980 GOSUB 5010
            Routine_05010();
            // 04990 GOTO 05000
            goto Lbl_05000;

  Lbl_05000:
            // 05000 RETURN
            return;
};


//---------------------------------------------------------------------------
// Routine K
//---------------------------------------------------------------------------

void Routine_05010(){
            // 05010 PRINT @ 975,"PRESS 'ENTER' TO CONTINUE ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PRESS 'ENTER' TO CONTINUE ");fputs(buf,fh); };
            // 05020 Z$=INKEY$
            GLBpStr=INKEY_str;
            Z_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 05030 Z$=Z$
            GLBpStr=Z_str;
            Z_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_05040:
            // 05040 IF Z$="" THEN 5040 
            if(strcmp(Z_str,"")==0)goto Lbl_05040;
            // 05050 IF ASC(Z$)<>13 THEN 5040 ELSE CLS
            if(ASC(Z_str)!=13)goto Lbl_05040;
            // 05060 GOTO 05070
            goto Lbl_05070;

  Lbl_05070:
            // 05070 RETURN
            return;
};


//---------------------------------------------------------------------------
// Routine L
//---------------------------------------------------------------------------

void Routine_05080(){
            // 05080 GOTO 05090
            goto Lbl_05090;

  Lbl_05090:
            // 05090 RETURN
            return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM NOTE
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 REM  WUMPUS II  FROM THE LAWRENCE HALL OF SCIENCE
    // 01030 REM  TRANSFERED TO SOL EBASIC BY DAVID FOX
    // 01040 REM  REVISED FOR TRS-80 LEVEL II BASIC BY DOUG BENEDICT
    // 01050 CLS
    ClearScreen(0);
    // 01060 PRINT@282,"WUMPUS  II"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WUMPUS  II");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT@409,"COPYRIGHT BY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COPYRIGHT BY");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT@470,"CREATIVE COMPUTING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CREATIVE COMPUTING");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT@536,"P.O. BOX 789-M"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"P.O. BOX 789-M");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT@593,"MORRISTOWN, NEW JERSEY 07960"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MORRISTOWN, NEW JERSEY 07960");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 FORI=1TO2000
    for(I_int=1;I_int<=2000;I_int++){
        // 01120 NEXTI
        int dummy_1120=0; // Ignore this line.
    }; // End-For(I_int)
    // 01130 DIM I$(6),L(6),M(6),P(5),S(20,3)
    // 01140 CLS
    ClearScreen(0);
    // 01150 PRINT @ 390,"";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"");fputs(buf,fh); };
    // 01160 PRINT "* * *  T H E  G A M E  O F  W U M P U S  II  * * *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"* * *  T H E  G A M E  O F  W U M P U S  II  * * *");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT @ 896,"";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"");fputs(buf,fh); };

  Lbl_01180:
    // 01180 INPUT "WOULD YOU LIKE INSTRUCTIONS";Z$
    // Start of Basic INPUT statement 01180
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"WOULD YOU LIKE INSTRUCTIONS");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01180
    // 01190 IF LEFT$(Z$,1)="N" THEN 1230
    if(LEFT$(Z_str,1)=='N')goto Lbl_01230;
    // 01200 IF LEFT$(Z$,1)<>"Y" THEN 1180
    if(LEFT$(Z_str,1)=='Y')goto Lbl_01180;
    // 01210 F3=1
    F3_int = 1;
    // 01220 GOSUB 3870
    Routine_03870();

  Lbl_01230:
    // 01230 REM  CHOOSE AND SET UP CAVE
    // 01240 GOSUB 3380
    Routine_03380();
    // 01250 F3=1
    F3_int = 1;
    // 01260 REM  LOCATE L ARRAY ITEMS
    // 01270 REM  1=YOU,2=WUMPUS,3&4=PITS,5&6=BATS

  Lbl_01280:
    // 01280 FOR J=1 TO 6
    for(J_int=1;J_int<=6;J_int++){
        // 01290 L(J)=RND(20)
        L_int_arr[J_int] = RND(20);
        // 01300 M(J)=L(J)
        M_int_arr[J_int] = L_int_arr[J_int];
        // 01310 NEXT J
        int dummy_1310=0; // Ignore this line.
    }; // End-For(J_int)
    // 01320 REM  CHECK FOR CROSSOVERS (IE L(1)=L(2),ETC)
    // 01330 FOR J=1 TO 6
    for(J_int=1;J_int<=6;J_int++){
        // 01340 FOR K=J TO 6
        for(K_int=J_int;K_int<=6;K_int++){
            // 01350 IF J=K THEN 1390
            if(J_int==K_int)goto Lbl_01390;
            // 01360 IF L(J)=L(K) THEN J=7
            if(L_int_arr[J_int]==L_int_arr[K_int]) {
            }
            // 01370 K=7
            K_int = 7;
            // 01380 GOTO 1280
            goto Lbl_01280;

  Lbl_01390:
            // 01390 NEXT K
            int dummy_1390=0; // Ignore this line.
        }; // End-For(K_int)
        // 01400 NEXT J
        int dummy_1400=0; // Ignore this line.
    }; // End-For(J_int)
    // 01410 REM  SET # ARROWS

  Lbl_01420:
    // 01420 A=5
    A_int = 5;
    // 01430 L=L(1)
    L_int_arr[0] = L_int_arr[1];
    // 01440 REM  RUN THE GAME
    // 01450 REM  HAZARD WARNINGS & LOCATION

  Lbl_01460:
    // 01460 GOSUB 2280
    Routine_02280();
    // 01470 REM  MOVE OR SHOOT

  Lbl_01480:
    // 01480 GOSUB 2460
    Routine_02460();
    // 01490 ON O GOTO 1510,1550
    switch((int)(O_int)){
        case 1: goto Lbl_01510;
        case 2: goto Lbl_01550;
        default: break; 
    };
    // 01500 REM  SHOOT

  Lbl_01510:
    // 01510 GOSUB 2570
    Routine_02570();
    // 01520 IF F=0 THEN 1480
    if(F_int==0)goto Lbl_01480;
    // 01530 GOTO 1570
    goto Lbl_01570;
    // 01540 REM  MOVE

  Lbl_01550:
    // 01550 GOSUB 2780
    Routine_02780();
    // 01560 IF F=0 THEN 1460
    if(F_int==0)goto Lbl_01460;

  Lbl_01570:
    // 01570 IF F>0 THEN 1620
    if(F_int>0)goto Lbl_01620;
    // 01580 REM  LOSE
    // 01590 PRINT "HA HA HA - YOU LOSE!     ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HA HA HA - YOU LOSE!     ");fputs(buf,fh); };
    // 01600 GOTO 1640
    goto Lbl_01640;
    // 01610 REM  WIN

  Lbl_01620:
    // 01620 PRINT "HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01630 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01640:
    // 01640 FOR J=1 TO 6
    for(J_int=1;J_int<=6;J_int++){
        // 01650 L(J)=M(J)
        L_int_arr[J_int] = M_int_arr[J_int];
        // 01660 NEXT J
        int dummy_1660=0; // Ignore this line.
    }; // End-For(J_int)
    // 01670 INPUT "WANT TO PLAY AGAIN";I$
    // Start of Basic INPUT statement 01670
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"WANT TO PLAY AGAIN");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&I_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01670
    // 01680 CLS
    ClearScreen(0);
    // 01690 IF LEFT$(I$,1)<>"Y" THEN 1840
    if(LEFT$(I_str_arr[0],1)=='Y')goto Lbl_01840;
    // 01700 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01710 INPUT "SAME SET-UP";I$
    // Start of Basic INPUT statement 01710
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"SAME SET-UP");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&I_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01710
    // 01720 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01730 IF LEFT$(I$,1)="Y" THEN 1420
    if(LEFT$(I_str_arr[0],1)=='Y')goto Lbl_01420;
    // 01740 INPUT "SAME CAVE";I$
    // Start of Basic INPUT statement 01740
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"SAME CAVE");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&I_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01740
    // 01750 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01760 IF LEFT$(I$,1)="Y" THEN 1280
    if(LEFT$(I_str_arr[0],1)=='Y')goto Lbl_01280;
    // 01770 GOTO 1230
    goto Lbl_01230;
    // 01780 REM  SHOOT ARROW
    // 01790 REM  NO TUNNEL FOR ARROW
    // 01800 REM  MOVE WUMPUS
    // 01810 REM  AMMO CHECK
    // 01820 REM  CHECK FOR HAZARDS
    // 01830 REM  BATS

  Lbl_01840:
    // 01840 PRINT @ 401,"THANK YOU FOR PLAYING WITH ME!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THANK YOU FOR PLAYING WITH ME!");strcat(buf,"\n");fputs(buf,fh); };
    // 01850 RUN"MENU"
    system(""MENU"");
    // 01860 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01870 PRINT"TO LOAD ANOTHER PROGRAM, TYPE 'CLOAD'."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO LOAD ANOTHER PROGRAM, TYPE 'CLOAD'.");strcat(buf,"\n");fputs(buf,fh); };
    // 01880 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01890 END
    // 01900 REM  DODECAHEDRON
    // 01910 DATA 2,5,8,1,3,10,2,4,12,3,5,14,1,4,6,5,7,15,6,8,17,1
    // 01920 DATA 7,8,9,10,18,2,9,11,10,12,19,3,11,13,12,14,20,4,13
    // 01930 DATA 15,6,14,16,15,17,20,7,16,18,9,17,19,11,18,20,13,16,19
    // 01940 REM  MOBIUS STRIP
    // 01950 DATA 20,2,3,19,1,4,1,4,5,2,3,6,3,6,7,4,5,8,5,8,9,6,7
    // 01960 DATA 10,7,10,11,8,9,12,9,12,13,10,11,14,11,14,15,12,13
    // 01970 DATA 16,12,16,17,14,15,18,15,18,19,16,17,20,2,17,20,1,18,19
    // 01980 REM  STRING OF BEADS
    // 01990 DATA 2,3,20,1,3,4,1,2,4,2,3,5,4,6,7,5,7,8,5,6,8,6,7
    // 02000 DATA 9,8,10,11,9,11,12,9,10,12,10,11,13,12,14,15,13,15,1
    // 02010 DATA 6,13,14,16,14,15,17,16,18,19,17,19,20,17,18,20,1,18,19
    // 02020 REM  HEX NETWORK
    // 02030 DATA 6,10,16,6,7,17,7,8,18,8,9,19,9,10,20,1,2,15,2,3,1
    // 02040 DATA 1,3,4,12,4,5,13,1,5,14,7,16,20,8,16,17,9,17,18,10
    // 02050 DATA 18,19,6,19,20,1,11,12,2,12,13,3,13,14,4,14,15,5,11,15
    // 02060 REM  DENDRITE W/ DEGENERACIES
    // 02070 DATA 1,1,5,2,2,5,3,3,6,4,4,6,1,2,7,3,4,7,5,6,10,8,9
    // 02080 DATA 9,8,8,10,7,9,11,10,13,14,12,13,13,11,12,12,11,15,16
    // 02090 DATA 14,17,18,14,19,20,15,17,17,15,18,18,16,19,19,16,20,20
    // 02100 REM  ONE WAY LATTICE
    // 02110 DATA 5,4,8,1,5,6,2,6,7,3,7,8,8,9,12,5,9,10,6,10,11,7
    // 02120 DATA 11,12,12,13,16,9,13,14,10,14,15,11,15,16,16,17,20,13
    // 02130 DATA 17,18,14,18,19,15,19,20,1,4,20,1,2,17,2,3,18,3,4,19
    // 02170 REM  SEE IF ARROW IS AT L(1) OR L(2)
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
