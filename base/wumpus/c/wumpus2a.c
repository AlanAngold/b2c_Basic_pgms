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
    0x628b6fabf5d0 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x628b6facffc0 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x628b6fabf2b0 ---------A   00010 REM  WUMPUS II  FROM THE LAWRENCE HALL OF SCIENCE
    0x628b6fad0620 ---------A   00020 REM  TRANSFERED TO SOL EBASIC BY DAVID FOX
    0x628b6facea20 ---------A   00030 REM  REVISED FOR TRS-80 LEVEL II BASIC BY DOUG BENEDICT
    0x628b6fad0e70 ---------A   00040 CLS:PRINT@282,"WUMPUS  II"
    0x628b6fad0ff0 ---------A   00041 PRINT@409,"COPYRIGHT BY"
    0x628b6fad10b0 ---------A   00042 PRINT@470,"CREATIVE COMPUTING"
    0x628b6facf080 ---------A   00043 PRINT@536,"P.O. BOX 789-M"
    0x628b6fad0f30 ---------A   00044 PRINT@593,"MORRISTOWN, NEW JERSEY 07960"
    0x628b6faceca0 ---------A   00045 FORI=1TO2000:NEXTI
    0x628b6fad6fe0 ---------A   00050 DIM I$(6),L(6),M(6),P(5),S(20,3)
    0x628b6fad71b0 ---------A   00060 CLS:PRINT @ 390,"";
    0x628b6fad7350 ---------A   00070 PRINT "* * *  T H E  G A M E  O F  W U M P U S  II  * * *"
    0x628b6face670 ---------A T 00080 PRINT @ 896,"";:INPUT "WOULD YOU LIKE INSTRUCTIONS";Z$
    0x628b6fad7a60 ---------A   00090 IF LEFT$(Z$,1)="N" THEN 120
    0x628b6fad7e80 ---------A   00100 IF LEFT$(Z$,1)<>"Y" THEN 80
    0x628b6fad81c0 ---------A   00110 F3=1:GOSUB 2580
    0x628b6fad8230 ---------A T 00120 REM  CHOOSE AND SET UP CAVE
    0x628b6fad84a0 ---------A   00130 GOSUB 1890:F3=1
    0x628b6fad8520 ---------A   00170 REM  LOCATE L ARRAY ITEMS
    0x628b6fad85d0 ---------A   00180 REM  1=YOU,2=WUMPUS,3&4=PITS,5&6=BATS
    0x628b6fad8970 ---------A T 00190 FOR J=1 TO 6
    0x628b6fad8d50 ---------A   00200 L(J)=RND(20)
    0x628b6fad9140 ---------A   00210 M(J)=L(J)
    0x628b6fad9270 ---------A   00220 NEXT J
    0x628b6fad9330 ---------A   00230 REM  CHECK FOR CROSSOVERS (IE L(1)=L(2),ETC)
    0x628b6fad9610 ---------A   00240 FOR J=1 TO 6
    0x628b6fad99d0 ---------A   00250 FOR K=J TO 6
    0x628b6fad9c70 ---------A   00260 IF J=K THEN 280
    0x628b6fada4f0 ---------A   00270 IF L(J)=L(K) THEN J=7:K=7:GOTO 190
    0x628b6fada610 ---------A T 00280 NEXT K
    0x628b6fada750 ---------A   00290 NEXT J
    0x628b6fada9e0 ---------A   00300 REM  SET # ARROWS
    0x628b6fadacc0 ---------A T 00310 A=5
    0x628b6fadafb0 ---------A   00320 L=L(1)
    0x628b6fadb020 ---------A   00330 REM  RUN THE GAME
    0x628b6fadb0c0 ---------A   00340 REM  HAZARD WARNINGS & LOCATION
    0x628b6fadb150 ---------A T 00350 GOSUB 660
    0x628b6fadb1b0 ---------A   00360 REM  MOVE OR SHOOT
    0x628b6fadb230 ---------A T 00370 GOSUB 830
    0x628b6fadb5b0 ---------A   00380 ON O GOTO 400,440
    0x628b6fadb620 ---------A   00390 REM  SHOOT
    0x628b6fadb6a0 ---------A T 00400 GOSUB 920
    0x628b6fadb9a0 ---------A   00410 IF F=0 THEN 370
    0x628b6fadba20 ---------A   00420 GOTO 460
    0x628b6fadba80 ---------A   00430 REM  MOVE
    0x628b6fadbb00 ---------A T 00440 GOSUB 1480
    0x628b6fadbd40 ---------A   00450 IF F=0 THEN 350
    0x628b6fadbfa0 ---------A T 00460 IF F>0 THEN 510
    0x628b6fadc020 ---------A   00470 REM  LOSE
    0x628b6fadc1d0 ---------A   00480 PRINT "HA HA HA - YOU LOSE!     ";
    0x628b6fadc240 ---------A   00490 GOTO 530
    0x628b6fadc2a0 ---------A   00500 REM  WIN
    0x628b6fadc450 ---------A T 00510 PRINT "HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!"
    0x628b6fadc4c0 ---------A   00520 PRINT
    0x628b6fadc790 ---------A T 00530 FOR J=1 TO 6
    0x628b6fadcb90 ---------A   00540 L(J)=M(J)
    0x628b6fadccc0 ---------A   00550 NEXT J
    0x628b6fadcec0 ---------A   00560 INPUT "WANT TO PLAY AGAIN";I$:CLS
    0x628b6fadd2c0 ---------A   00570 IF LEFT$(I$,1)<>"Y" THEN 2300
    0x628b6fadd350 ---------A   00580 PRINT
    0x628b6fadd4c0 ---------A   00590 INPUT "SAME SET-UP";I$
    0x628b6fadd550 ---------A   00600 PRINT
    0x628b6fadd970 ---------A   00610 IF LEFT$(I$,1)="Y" THEN 310
    0x628b6faddf00 ---------A   00620 INPUT "SAME CAVE";I$
    0x628b6faddf90 ---------A   00630 PRINT
    0x628b6fade3a0 ---------A   00640 IF LEFT$(I$,1)="Y" THEN 190
    0x628b6fade440 ---------A   00650 GOTO 120
    0x628b6fade4b0 ---------B G 00660 REM  PRINT LOCATION & HAZARD WARNINGS
    0x628b6fade530 ---------B   00670 PRINT
    0x628b6fade800 ---------B   00680 FOR J=2 TO 6
    0x628b6fadeaf0 ---------B   00690 FOR K=1 TO 3
    0x628b6fadf0e0 ---------B   00700 IF S(L(1),K)<>L(J) THEN 770
    0x628b6fadf710 ---------B   00710 ON J-1 GOTO 720,740,740,760,760
    0x628b6fadf860 ---------B T 00720 PRINT "I SMeLL A WUMPUS!"
    0x628b6fadf8e0 ---------B   00730 GOTO 770
    0x628b6fadfa20 ---------B T 00740 PRINT "I FEEL A DRAFT"
    0x628b6fadfaa0 ---------B   00750 GOTO 770
    0x628b6fadfbe0 ---------B T 00760 PRINT "BATS NEARBY!"
    0x628b6fadfd10 ---------B T 00770 NEXT K
    0x628b6fadfe50 ---------B   00780 NEXT J
    0x628b6fae01d0 ---------B   00790 PRINT "YOU ARE IN ROOM";L(1);
    0x628b6fae0d00 ---------B   00800 PRINT "    TUNNELS LEAD TO";S(L,1);",";S(L,2);"AND";S(L,3)
    0x628b6fae0d70 ---------B   00810 PRINT
    0x628b6fae0dc0 ---------B   00820 RETURN
    0x628b6fae0e40 ---------C G 00830 REM  CHOSE OPTION
    0x628b6fae0fd0 ---------C T 00840 INPUT "SHOOT OR MOVE";I$
    0x628b6fae1060 ---------C   00850 PRINT
    0x628b6fae1470 ---------C   00860 IF LEFT$(I$,1)<>"S" THEN 890
    0x628b6fae1690 ---------C   00870 O=1
    0x628b6fae16e0 ---------C   00880 RETURN
    0x628b6fae1b10 ---------C T 00890 IF LEFT$(I$,1)<>"M" THEN 840
    0x628b6fae1d30 ---------C   00900 O=2
    0x628b6fae1d80 ---------C   00910 RETURN
    0x628b6fae1e10 ---------D G 00920 REM  ARROW ROUTINE
    0x628b6fae2040 ---------D   00930 F=0
    0x628b6fae20b0 ---------D   00940 REM  PATH OF ARROW
    0x628b6fae2300 ---------D T 00950 INPUT "NUMBER OF ROOMS";J9
    0x628b6fae2380 ---------D   00960 PRINT
    0x628b6fae25d0 ---------D   00970 IF J9<1 THEN 950
    0x628b6fae2830 ---------D   00980 IF J9>5 THEN 950
    0x628b6fae2b40 ---------D   00990 FOR K=1 TO J9
    0x628b6fae2dc0 ---------D T 01000 INPUT "ROOM #";P(K)
    0x628b6fae3440 ---------D   01010 IF P(K)>0 THEN IF P(K)<21 THEN 1040
    0x628b6fae35c0 ---------D   01020 PRINT "   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY."
    0x628b6fae3630 ---------D   01030 GOTO 1000
    0x628b6fae3790 ----------   01040 PRINT "  ";
    0x628b6fae38c0 ----------   01050 NEXT K
    0x628b6fae3940 ----------   01060 PRINT
    0x628b6fae39b0 ---------A   01070 REM  SHOOT ARROW
    0x628b6fae3cf0 ----------   01080 A=A-1
    0x628b6fae40a0 ----------   01090 A9=L(1)
    0x628b6fae4390 ----------   01100 FOR K=1 TO J9
    0x628b6fae4670 ----------   01110 F1=0
    0x628b6fae4a10 ----------   01120 FOR K1=1 TO 3
    0x628b6fae5120 ----------   01130 IF S(A9,K1)=P(K) THEN F1=1
    0x628b6fae5260 ----------   01140 NEXT K1
    0x628b6fae54d0 ----------   01150 IF F1=1 THEN 1190
    0x628b6fae5560 ---------A   01160 REM  NO TUNNEL FOR ARROW
    0x628b6fae5a20 ----------   01170 A9=S(A9,RND(3))
    0x628b6fae5c40 ----------   01180 F1=2
    0x628b6fae5f20 ---------- T 01190 ON F1 GOSUB 1310,1320
    0x628b6fae65c0 ----------   01200 IF ABS(F)=1 THEN K=J9+1:GOTO 1290
    0x628b6fae66e0 ----------   01210 NEXT K
    0x628b6fae6840 ----------   01220 PRINT "MISSED"
    0x628b6fae68b0 ----------   01230 PRINT
    0x628b6fae6920 ---------A   01240 REM  MOVE WUMPUS
    0x628b6fae69a0 ----------   01250 GOSUB 1400
    0x628b6fae7210 ---------A   01260 REM  AMMO CHECK
    0x628b6fae7470 ----------   01270 IF A>0 THEN 1290
    0x628b6fae7690 ---------E T 01280 F=-1
    0x628b6fae76e0 ---------E T 01290 RETURN
    0x628b6fae7790 ---------E   01300 REM  SEE IF ARROW IS AT L(1) OR L(2)
    0x628b6fae7ac0 ---------E G 01310 A9=P(K)
    0x628b6fae7e20 ---------E G 01320 IF A9<>L(2) THEN 1370
    0x628b6fae8160 ---------E   01330 PRINT "AHA!  YOU GOT THE WUMPUS!!  HE WAS IN ROOM";L(2)
    0x628b6fae81d0 ---------E   01340 PRINT
    0x628b6fae83e0 ---------E   01350 F=1
    0x628b6fae8430 ---------E   01360 RETURN
    0x628b6fae87d0 ---------E T 01370 IF A9<>L(1) THEN RETURN
    0x628b6fae8940 ---------E   01380 PRINT "OUCH!  ARROW GOT YOU!!"
    0x628b6fae89c0 ---------E   01390 GOTO 1280
    0x628b6fae8a30 ---------F G 01400 REM  MOVE WUMPUS ROUTINE
    0x628b6fae8d30 ---------F G 01410 K=RND(4)
    0x628b6fae8f80 ---------F   01420 IF K=4 THEN 1470
    0x628b6fae9510 ---------F   01430 L(2)=S(L(2),K)
    0x628b6fae9860 ---------F   01440 IF L(2)<>L THEN 1470
    0x628b6fae9a20 ---------F   01450 PRINT "TSK TSK TSK - THE WUMPUS GOT YOU!":PRINT
    0x628b6fae9c30 ---------F   01460 F=-1
    0x628b6fae9c80 ---------F T 01470 RETURN
    0x628b6fae9d00 ---------G G 01480 REM  MOVE ROUTINE
    0x628b6fae9f30 ---------G   01490 F=0
    0x628b6faea0a0 ---------G T 01500 INPUT "WHERE TO";L
    0x628b6faea120 ---------G   01510 PRINT
    0x628b6faea370 ---------G   01520 IF L<1 THEN 1500
    0x628b6faea5d0 ---------G   01530 IF L>20 THEN 1500
    0x628b6faea8c0 ---------G   01540 FOR K=1 TO 3
    0x628b6faea950 ---------G   01550 REM  CHECK IF LEGAL MOVE
    0x628b6faeb0b0 ---------G   01560 IF S(L(1),K)=L THEN K=4:GOTO 1620
    0x628b6faeb1d0 ----------   01570 NEXT K
    0x628b6faeb530 ----------   01580 IF L=L(1) THEN 1620
    0x628b6faeb6b0 ----------   01590 PRINT "NOT POSSIBLE - ";
    0x628b6faeb730 ----------   01600 GOTO 1500
    0x628b6faeb790 ---------A   01610 REM  CHECK FOR HAZARDS
    0x628b6faeba90 ---------G T 01620 L(1)=L
    0x628b6faebb00 ---------G   01630 REM  WUMPUS
    0x628b6faebe70 ---------G   01640 IF L<>L(2) THEN 1710
    0x628b6faebfe0 ---------G   01650 PRINT "... OOPS!  BUMPED A WUMPUS!"
    0x628b6faec050 ---------G   01660 REM  MOVE WUMPUS
    0x628b6faec0d0 ---------G   01670 GOSUB 1410
    0x628b6faec310 ---------G   01680 IF F=0 THEN 1710
    0x628b6faec370 ---------G   01690 RETURN
    0x628b6faec3f0 ---------G   01700 REM  PIT
    0x628b6faeca70 ---------G T 01710 IF L<>L(3) THEN IF L<>L(4) THEN 1830
    0x628b6faecdf0 ---------G   01720 CLS:P1=110
    0x628b6faed7f0 ---------G   01730 PRINT CHR$(28);"Y";:GOSUB 5000:PRINT "Y";:GOSUB 5000:PRINT "Y":GOSUB 5000:P1=100:PRINT "      Y":GOSUB 5000
    0x628b6faedd90 ---------G   01740 P1=90:PRINT "         Y":GOSUB 5000:P1=80
    0x628b6faee2c0 ---------G   01750 PRINT "          Y":GOSUB 5000:P1=70:PRINT "           Y":GOSUB 5000
    0x628b6faee840 ---------G   01760 PRINT TAB(11);"I";:GOSUB 5000:PRINT TAB(30);"FELL IN A PIT!!"
    0x628b6faef2f0 ---------G   01770 FOR I=1 TO 4:P1=70-I*10:PRINT TAB(11);"I":GOSUB 5000:NEXT I
    0x628b6faefde0 ---------G   01780 FOR I=1 TO 2:P1=30-I*10:PRINT TAB(11);"E":GOSUB 5000:NEXT I
    0x628b6faf04b0 ---------G   01790 FOR I=1 TO 18:PRINT TAB(11);".":GOSUB 5000:NEXT I
    0x628b6faf06d0 ---------G   01800 F=-1
    0x628b6faf0720 ---------G   01810 RETURN
    0x628b6faf07a0 ---------A   01820 REM  BATS
    0x628b6faf0e50 ----------   01830 IF L<>L(5) THEN IF L<>L(6) THEN 1880
    0x628b6faf0fe0 ----------   01840 PRINT "ZAP--SUPER BAT SNATCH!  ELSEWHEREVILLE FOR YOU!"
    0x628b6faf1490 ----------   01850 FOR Q=1 TO 500:NEXT Q
    0x628b6faf1790 ----------   01860 L=RND(20)
    0x628b6faf1800 ----------   01870 GOTO 1620
    0x628b6faf1840 ----------   01880 RETURN
    0x628b6faf18c0 ---------A   01890 REM  SELECT CAVE
    0x628b6faf1b40 ---------- T 01900 IF F3=1 THEN 1930
    0x628b6faf1f70 ----------   01910 PRINT @ 896,CHR$(30):PRINT @ 960,CHR$(30);
    0x628b6faf20f0 ----------   01920 PRINT @ 901,"";
    0x628b6faf2330 ---------- T 01930 INPUT "CAVE # (0-6)";N
    0x628b6faf27c0 ----------   01940 IF N>=0 AND N<=6 THEN 1970
    0x628b6faf2a70 ----------   01950 IF F3=1 THEN PRINT
    0x628b6faf2af0 ----------   01960 GOTO 1900
    0x628b6faf2b80 ---------- T 01970 CLS
    0x628b6faf3100 ----------   01975 PRINT CHR$(28);:IF N<6 THEN PRINT "THE WUMPUS IS HIDING."
    0x628b6faf3360 ----------   01980 IF N=6 THEN 2060
    0x628b6faf33e0 ----------   01990 RESTORE
    0x628b6faf3620 ----------   02000 IF N=0 THEN 2040
    0x628b6faf3ae0 ----------   02010 FOR X9=1 TO N*60
    0x628b6faf3d00 ----------   02020 READ I9
    0x628b6faf3e20 ----------   02030 NEXT X9
    0x628b6faf3ea0 ---------- T 02040 GOSUB 2230
    0x628b6faf3f00 ----------   02050 GOTO 2070
    0x628b6faf3f60 ---------- T 02060 GOSUB 2080
    0x628b6faf3fa0 ---------- T 02070 RETURN
    0x628b6faf4030 ---------H G 02080 REM  INPUT OWN CAVE
    0x628b6faf4310 ---------H   02090 FOR J=1 TO 20
    0x628b6faf45a0 ---------H T 02100 PRINT "ROOM #";J;
    0x628b6faf48d0 ---------H   02110 INPUT "IS CONNECTED TO :";S(J,1)
    0x628b6faf4ef0 ---------H   02120 INPUT "AND";S(J,2):INPUT "AND";S(J,3)
    0x628b6faf4f70 ---------H   02130 PRINT
    0x628b6faf5240 ---------H   02140 F5=0
    0x628b6faf5530 ---------H   02150 FOR K=1 TO 3
    0x628b6faf5d80 ---------H   02160 IF S(J,K)>0 THEN IF S(J,K)<21 THEN 2190
    0x628b6faf5f00 ---------H   02170 PRINT "ERROR** ENTER ROOM NUMBERS FROM 1 TO 20 ONLY!!"
    0x628b6faf6110 ---------H   02180 F5=1
    0x628b6faf6240 ---------H   02190 NEXT K
    0x628b6faf64a0 ---------H   02200 IF F5=1 THEN 2100
    0x628b6faf65e0 ---------H   02210 NEXT J
    0x628b6faf6640 ---------H   02220 RETURN
    0x628b6faf66c0 ---------I G 02230 REM  INPUT CAVE
    0x628b6faf69a0 ---------I   02240 FOR J=1 TO 20
    0x628b6faf6c80 ---------I   02250 FOR K=1 TO 3
    0x628b6faf6fa0 ---------I   02260 READ S(J,K)
    0x628b6faf70c0 ---------I   02270 NEXT K
    0x628b6faf7200 ---------I   02280 NEXT J
    0x628b6faf7260 ---------I   02290 RETURN
    0x628b6faf73f0 ---------A T 02300 PRINT @ 401,"THANK YOU FOR PLAYING WITH ME!"
    0x628b6faf7460 ---------A   02310 RUN"MENU"
    0x628b6faf76e0 ---------A   02320 PRINT:PRINT"TO LOAD ANOTHER PROGRAM, TYPE 'CLOAD'.":PRINT:END
    0x628b6faf7760 ---------A   02330 REM  DODECAHEDRON
    0x628b6faf8b80 ---------A   02340 DATA 2,5,8,1,3,10,2,4,12,3,5,14,1,4,6,5,7,15,6,8,17,1
    0x628b6faf9cc0 ---------A   02350 DATA 7,8,9,10,18,2,9,11,10,12,19,3,11,13,12,14,20,4,13
    0x628b6fafadd0 ---------A   02360 DATA 15,6,14,16,15,17,20,7,16,18,9,17,19,11,18,20,13,16,19
    0x628b6fafae40 ---------A   02370 REM  MOBIUS STRIP
    0x628b6fafc340 ---------A   02380 DATA 20,2,3,19,1,4,1,4,5,2,3,6,3,6,7,4,5,8,5,8,9,6,7
    0x628b6fafd3a0 ---------A   02390 DATA 10,7,10,11,8,9,12,9,12,13,10,11,14,11,14,15,12,13
    0x628b6fafe4c0 ---------A   02400 DATA 16,12,16,17,14,15,18,15,18,19,16,17,20,2,17,20,1,18,19
    0x628b6fafe530 ---------A   02410 REM  STRING OF BEADS
    0x628b6faffa30 ---------A   02420 DATA 2,3,20,1,3,4,1,2,4,2,3,5,4,6,7,5,7,8,5,6,8,6,7
    0x628b6fb00b70 ---------A   02430 DATA 9,8,10,11,9,11,12,9,10,12,10,11,13,12,14,15,13,15,1
    0x628b6fb01c80 ---------A   02440 DATA 6,13,14,16,14,15,17,16,18,19,17,19,20,17,18,20,1,18,19
    0x628b6fb01cf0 ---------A   02450 REM  HEX NETWORK
    0x628b6fb03030 ---------A   02460 DATA 6,10,16,6,7,17,7,8,18,8,9,19,9,10,20,1,2,15,2,3,1
    0x628b6fb04250 ---------A   02470 DATA 1,3,4,12,4,5,13,1,5,14,7,16,20,8,16,17,9,17,18,10
    0x628b6fb05450 ---------A   02480 DATA 18,19,6,19,20,1,11,12,2,12,13,3,13,14,4,14,15,5,11,15
    0x628b6fb054d0 ---------A   02490 REM  DENDRITE W/ DEGENERACIES
    0x628b6fb069d0 ---------A   02500 DATA 1,1,5,2,2,5,3,3,6,4,4,6,1,2,7,3,4,7,5,6,10,8,9
    0x628b6fb07b10 ---------A   02510 DATA 9,8,8,10,7,9,11,10,13,14,12,13,13,11,12,12,11,15,16
    0x628b6fb08b50 ---------A   02520 DATA 14,17,18,14,19,20,15,17,17,15,18,18,16,19,19,16,20,20
    0x628b6fae6a00 ---------A   02530 REM  ONE WAY LATTICE
    0x628b6fb0a7e0 ---------A   02540 DATA 5,4,8,1,5,6,2,6,7,3,7,8,8,9,12,5,9,10,6,10,11,7
    0x628b6fb0b840 ---------A   02550 DATA 11,12,12,13,16,9,13,14,10,14,15,11,15,16,16,17,20,13
    0x628b6fb0ca30 ---------A   02560 DATA 17,18,14,18,19,15,19,20,1,4,20,1,2,17,2,3,18,3,4,19
    0x628b6fb0caa0 ---------J   02570 REM  INSTRUCTIONS
    0x628b6fb0cb60 ---------J G 02580 CLS
    0x628b6fb0cd00 ---------J   02590 PRINT "  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3"
    0x628b6fb0d020 ---------J   02600 PRINT "TUNNELS LEADING TO OTHER ROOMS.":PRINT:PRINT "HAZARDS:"
    0x628b6fb0d220 ---------J   02610 PRINT:PRINT "BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF"
    0x628b6fb0d420 ---------J   02620 PRINT "YOU GO IN THERE, YOU FALL INTO THE PIT AND LOSE!":PRINT
    0x628b6fb0d5e0 ---------J   02630 PRINT "SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,"
    0x628b6fb0d790 ---------J   02640 PRINT "A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE"
    0x628b6fb0d950 ---------J   02650 PRINT "CAVE WHERE YOU COULD RUN INTO THE...":GOSUB 3410
    0x628b6fb0db20 ---------J   02660 PRINT "WUMPUS:":PRINT
    0x628b6fb0dce0 ---------J   02670 PRINT "THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET"
    0x628b6fb0dea0 ---------J   02680 PRINT "AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS"
    0x628b6fb0e060 ---------J   02690 PRINT "WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW."
    0x628b6fb0e210 ---------J   02700 PRINT "IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL."
    0x628b6fb0e3a0 ---------J   02710 PRINT "BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!"
    0x628b6fb0e5c0 ---------J   02720 PRINT:PRINT "YOU:":PRINT
    0x628b6fb0e770 ---------J   02730 PRINT "EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW."
    0x628b6fb0e8e0 ---------J   02740 PRINT "MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL)."
    0x628b6fb0e980 ---------J   02750 GOSUB 3410
    0x628b6fb0eb30 ---------J   02760 PRINT "SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT."
    0x628b6fb0ecf0 ---------J   02770 PRINT "  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE"
    0x628b6fb0eeb0 ---------J   02780 PRINT "  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO"
    0x628b6fb0f040 ---------J   02790 PRINT "  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF"
    0x628b6fb0f220 ---------J   02800 PRINT "  OCCURRENCE.":PRINT
    0x628b6fb0f3e0 ---------J   02810 PRINT " EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10"
    0x628b6fb0f590 ---------J   02820 PRINT "  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO"
    0x628b6fb0f750 ---------J   02830 PRINT "  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS"
    0x628b6fb0f910 ---------J   02840 PRINT "  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY"
    0x628b6fb0fac0 ---------J   02850 PRINT "  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS"
    0x628b6fb0fcc0 ---------J   02860 PRINT "  PROCESS UNTIL 4 ROOMS HAVE BEEN ENTERED.":GOSUB 3410
    0x628b6fb0fe70 ---------J   02870 PRINT " NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING"
    0x628b6fb10030 ---------J   02880 PRINT "  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE"
    0x628b6fb101f0 ---------J   02890 PRINT "  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED"
    0x628b6fb103a0 ---------J   02900 PRINT "  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING"
    0x628b6fb10560 ---------J   02910 PRINT "  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW" 
    0x628b6fb10720 ---------J   02920 PRINT "  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT"
    0x628b6fb108d0 ---------J   02930 PRINT "  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS."
    0x628b6fb10ab0 ---------J   02940 PRINT:PRINT "IF THE ARROW HITS THE WUMPUS, YOU WIN."
    0x628b6fb10c30 ---------J   02950 PRINT "IF THE ARROW HITS YOU, YOU LOSE."
    0x628b6fb10ea0 ---------J   02960 GOSUB 3410:PRINT:PRINT "WARNINGS:":PRINT
    0x628b6fb11060 ---------J   02970 PRINT "WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,"
    0x628b6fb11370 ---------J   02980 PRINT "THE COMPUTER SAYS:":PRINT:PRINT "WUMPUS - 'I SMELL A WUMPUS'"
    0x628b6fb11680 ---------J   02990 PRINT "BAT - 'BATS NEARBY'":PRINT "PIT - 'I FEEL A DRAFT'":PRINT
    0x628b6fb11830 ---------J   03000 PRINT "BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!"
    0x628b6fb11b10 ---------J   03010 PRINT @ 910,"";:INPUT "WOULD YOU LIKE THE DESCRIPTION OF THE CAVES";Z$
    0x628b6fb11ba0 ---------J   03020 CLS
    0x628b6fb11ff0 ---------J   03030 IF LEFT$(Z$,1)="N" THEN RETURN
    0x628b6fb121e0 ---------J   03040 PRINT "THE CAVES ARE:":PRINT
    0x628b6fb123a0 ---------J   03050 PRINT "0 - DODECAHEDRON:  THE ROOMS OF THIS CAVE ARE ON A 12-SIDED"
    0x628b6fb12560 ---------J   03060 PRINT "    OBJECT, EACH SIDE FORMING A PENTAGON.  THE ROOMS ARE AT THE"
    0x628b6fb12700 ---------J   03070 PRINT "    CORNERS OF THE PENTAGONS, EACH ROOM HAVING TUNNELS LEADING"
    0x628b6fb128e0 ---------J   03080 PRINT "    TO 3 OTHER ROOMS.":PRINT
    0x628b6fb12aa0 ---------J   03090 PRINT "1 - MOBIUS STRIP:  THIS CAVE IS TWO ROOMS WIDE AND 10 ROOMS"
    0x628b6fb12c40 ---------J   03100 PRINT "    AROUND (LIKE A BELT).  YOU WILL NOTICE THERE IS A HALF-"
    0x628b6fb12e20 ---------J   03110 PRINT "    TWIST SOMEWHERES.":PRINT
    0x628b6fb12fe0 ---------J   03120 PRINT "2 - STRING OF BEADS:  FIVE BEADS IN A CIRCLE.  EACH BEAD IS A"
    0x628b6fb131a0 ---------J   03130 PRINT "    DIAMOND WITH A VERTICAL CROSS-BAR.  THE RIGHT AND LEFT"
    0x628b6fb13330 ---------J   03140 PRINT "    CORNERS LEAD TO NEIGHBORING BEADS.  (THIS ONE IS DIFFICULT"
    0x628b6fb13510 ---------J   03150 PRINT "    TO PLAY).":GOSUB 3410
    0x628b6fb136c0 ---------J   03160 PRINT "3 - HEX NETWORK:  IMAGINE A HEX TILE FLOOR.  TAKE A RECTANGLE"
    0x628b6fb13880 ---------J   03170 PRINT "    WITH 20 POINTS (INTERSECTIONS) INSIDE (4X5).  JOIN RIGHT"
    0x628b6fb13a20 ---------J   03180 PRINT "    AND LEFT SIDES TO MAKE A CYLINDER.  THEN JOIN TOP AND BOT-"
    0x628b6fb13ba0 ---------J   03190 PRINT "    TOM TO FORM A TORUS (DOUGHNUT)."
    0x628b6fb13d90 ---------J   03200 PRINT "    HAVE FUN IMAGINING THIS ONE!":PRINT
    0x628b6fb13f40 ---------J   03210 PRINT "CAVES 0-3 ARE REGULAR IN THE SENSE THAT EACH ROOM GOES TO THREE"
    0x628b6fb140d0 ---------J   03220 PRINT "OTHER ROOMS AND THE TUNNELS ALLOW TWO-WAY TRAFFIC."
    0x628b6fb142c0 ---------J   03230 PRINT "HERE ARE SOME IRREGULAR CAVES:":PRINT
    0x628b6fb14480 ---------J   03240 PRINT "4 - DENDRITE WITH DEGENERACIES:  PULL A PLANT FROM THE GROUND."
    0x628b6fb14640 ---------J   03250 PRINT "    THE ROOTS AND BRANCHES FROM A DENDRITE - IE, THERE ARE NO"
    0x628b6fb14800 ---------J   03260 PRINT "    LOOPING PATHS.  DEGENERACY MEANS A) SOME ROOMS CONNECT TO"
    0x628b6fb149b0 ---------J   03270 PRINT "    THEMSELVES OR B) THAT TWO ROOMS HAVE MORE THAN ONE TUNNEL"
    0x628b6fb14b20 ---------J   03280 PRINT "    BETWEEN THEM IE, 12 HAS TWO TUNNELS TO 13."
    0x628b6fb14bd0 ---------J   03290 GOSUB 3410
    0x628b6fb14d80 ---------J   03300 PRINT "5 - ONE WAY LATTICE:  HERE ALL TUNNELS GO ONE WAY ONLY.  TO"
    0x628b6fb14f90 ---------J   03310 PRINT "    RETURN, YOU MUST GO AROUND THE CAVE (ABOUT 5 MOVES).":PRINT
    0x628b6fb15140 ---------J   03320 PRINT "6 - ENTER YOUR OWN CAVE:  THE COMPUTER WILL ASK YOU FOR THE"
    0x628b6fb15310 ---------J   03330 PRINT "    ROOMS NEXT TO EACH ROOM IN THE CAVE.":PRINT
    0x628b6fb154f0 ---------J   03340 PRINT "   FOR EXAMPLE:":PRINT
    0x628b6fb156b0 ---------J   03350 PRINT "    TO SET ROOM #1 UP WITH TUNNELS GOING TO ROOMS 2, 3 AND 4"
    0x628b6fb15840 ---------J   03360 PRINT "    TYPE '2' (ENTER) '3' (ENTER) '4' (ENTER) WHEN PROMPTED"
    0x628b6fb159b0 ---------J   03370 PRINT "    WITH 'ROOM #1'"
    0x628b6fb15ca0 ---------J   03380 PRINT:PRINT TAB(24);"HAPPY HUNTING!!!"
    0x628b6fb15f30 ---------J   03390 PRINT TAB(27);">>>------->"
    0x628b6fb15fc0 ---------J   03400 GOSUB 3410:RETURN
    0x628b6fb16190 ---------K G 03410 PRINT @ 975,"PRESS 'ENTER' TO CONTINUE ";
    0x628b6fb16900 ---------K T 03415 Z$=INKEY$:Z$=Z$:IF Z$="" THEN 3415 
    0x628b6fb16cc0 ---------K   03420 IF ASC(Z$)<>13 THEN 3415 ELSE CLS:RETURN
    0x628b6fb17130 ---------L G 05000 FOR Q=1 TO P1:NEXT Q:RETURN
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
   A) 0x628b6fabf5d0 (00001)   0x628b6fabf5d0 (00001)   0x628b6fb17130 (05000)   0x628b6fb0ca30 (02560)   
   B) 0x628b6fade4b0 (00660)   0x628b6fade4b0 (00660)   0x628b6fae0dc0 (00820)   0x628b6fae0dc0 (00820)   
   C) 0x628b6fae0e40 (00830)   0x628b6fae0e40 (00830)   0x628b6fae16e0 (00880)   0x628b6fae1d80 (00910)   
   D) 0x628b6fae1e10 (00920)   0x628b6fae1e10 (00920)   0x000000000000 (00000)   0x628b6fae3630 (01030)   
   E) 0x628b6fae7690 (01280)   0x628b6fae7ac0 (01310)   0x628b6fae76e0 (01290)   0x628b6fae89c0 (01390)   
   F) 0x628b6fae8a30 (01400)   0x628b6fae8a30 (01400)   0x628b6fae9c80 (01470)   0x628b6fae9c80 (01470)   
   G) 0x628b6fae9d00 (01480)   0x628b6fae9d00 (01480)   0x628b6faec370 (01690)   0x628b6faf0720 (01810)   
   H) 0x628b6faf4030 (02080)   0x628b6faf4030 (02080)   0x628b6faf6640 (02220)   0x628b6faf6640 (02220)   
   I) 0x628b6faf66c0 (02230)   0x628b6faf66c0 (02230)   0x628b6faf7260 (02290)   0x628b6faf7260 (02290)   
   J) 0x628b6fb0caa0 (02570)   0x628b6fb0cb60 (02580)   0x628b6fb15fc0 (03400)   0x628b6fb15fc0 (03400)   
   K) 0x628b6fb16190 (03410)   0x628b6fb16190 (03410)   0x628b6fb16cc0 (03420)   0x628b6fb16cc0 (03420)   
   L) 0x628b6fb17130 (05000)   0x628b6fb17130 (05000)   0x628b6fb17130 (05000)   0x628b6fb17130 (05000)   

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
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     04110 - 10000    5900 

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
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x628b6fabf5d0 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x628b6facffc0 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x628b6fabf2b0 ---------A   01020 REM  WUMPUS II  FROM THE LAWRENCE HALL OF SCIENCE
    0x628b6fad0620 ---------A   01030 REM  TRANSFERED TO SOL EBASIC BY DAVID FOX
    0x628b6facea20 ---------A   01040 REM  REVISED FOR TRS-80 LEVEL II BASIC BY DOUG BENEDICT
    0x628b6fad0e70 ---------A   01050 CLS:PRINT@282,"WUMPUS  II"
    0x628b6fad0ff0 ---------A   01060 PRINT@409,"COPYRIGHT BY"
    0x628b6fad10b0 ---------A   01070 PRINT@470,"CREATIVE COMPUTING"
    0x628b6facf080 ---------A   01080 PRINT@536,"P.O. BOX 789-M"
    0x628b6fad0f30 ---------A   01090 PRINT@593,"MORRISTOWN, NEW JERSEY 07960"
    0x628b6faceca0 ---------A   01100 FORI=1TO2000:NEXTI
    0x628b6fad6fe0 ---------A   01110 DIM I$(6),L(6),M(6),P(5),S(20,3)
    0x628b6fad71b0 ---------A   01120 CLS:PRINT @ 390,"";
    0x628b6fad7350 ---------A   01130 PRINT "* * *  T H E  G A M E  O F  W U M P U S  II  * * *"
    0x628b6face670 ---------A T 01140 PRINT @ 896,"";:INPUT "WOULD YOU LIKE INSTRUCTIONS";Z$
    0x628b6fad7a60 ---------A   01150 IF LEFT$(Z$,1)="N" THEN 1190
    0x628b6fad7e80 ---------A   01160 IF LEFT$(Z$,1)<>"Y" THEN 1140
    0x628b6fad81c0 ---------A   01170 F3=1:GOSUB 3210
    0x628b6fad8230 ---------A   01180 REM  CHOOSE AND SET UP CAVE
    0x628b6fad84a0 ---------A T 01190 GOSUB 1890:F3=1
    0x628b6fad8520 ---------A   01200 REM  LOCATE L ARRAY ITEMS
    0x628b6fad85d0 ---------A   01210 REM  1=YOU,2=WUMPUS,3&4=PITS,5&6=BATS
    0x628b6fad8970 ---------A T 01220 FOR J=1 TO 6
    0x628b6fad8d50 ---------A   01230 L(J)=RND(20)
    0x628b6fad9140 ---------A   01240 M(J)=L(J)
    0x628b6fad9270 ---------A   01250 NEXT J
    0x628b6fad9330 ---------A   01260 REM  CHECK FOR CROSSOVERS (IE L(1)=L(2),ETC)
    0x628b6fad9610 ---------A   01270 FOR J=1 TO 6
    0x628b6fad99d0 ---------A   01280 FOR K=J TO 6
    0x628b6fad9c70 ---------A   01290 IF J=K THEN 1310
    0x628b6fada4f0 ---------A   01300 IF L(J)=L(K) THEN J=7:K=7:GOTO 1220
    0x628b6fada610 ---------A T 01310 NEXT K
    0x628b6fada750 ---------A   01320 NEXT J
    0x628b6fada9e0 ---------A   01330 REM  SET # ARROWS
    0x628b6fadacc0 ---------A T 01340 A=5
    0x628b6fadafb0 ---------A   01350 L=L(1)
    0x628b6fadb020 ---------A   01360 REM  RUN THE GAME
    0x628b6fadb0c0 ---------A   01370 REM  HAZARD WARNINGS & LOCATION
    0x628b6fadb150 ---------A T 01380 GOSUB 2420
    0x628b6fadb1b0 ---------A   01390 REM  MOVE OR SHOOT
    0x628b6fadb230 ---------A T 01400 GOSUB 2600
    0x628b6fadb5b0 ---------A   01410 ON O GOTO 1430,1470
    0x628b6fadb620 ---------A   01420 REM  SHOOT
    0x628b6fadb6a0 ---------A T 01430 GOSUB 2700
    0x628b6fadb9a0 ---------A   01440 IF F=0 THEN 1400
    0x628b6fadba20 ---------A   01450 GOTO 1490
    0x628b6fadba80 ---------A   01460 REM  MOVE
    0x628b6fadbb00 ---------A T 01470 GOSUB 2910
    0x628b6fadbd40 ---------A   01480 IF F=0 THEN 1380
    0x628b6fadbfa0 ---------A T 01490 IF F>0 THEN 1540
    0x628b6fadc020 ---------A   01500 REM  LOSE
    0x628b6fadc1d0 ---------A   01510 PRINT "HA HA HA - YOU LOSE!     ";
    0x628b6fadc240 ---------A   01520 GOTO 1560
    0x628b6fadc2a0 ---------A   01530 REM  WIN
    0x628b6fadc450 ---------A T 01540 PRINT "HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!"
    0x628b6fadc4c0 ---------A   01550 PRINT
    0x628b6fadc790 ---------A T 01560 FOR J=1 TO 6
    0x628b6fadcb90 ---------A   01570 L(J)=M(J)
    0x628b6fadccc0 ---------A   01580 NEXT J
    0x628b6fadcec0 ---------A   01590 INPUT "WANT TO PLAY AGAIN";I$:CLS
    0x628b6fadd2c0 ---------A   01600 IF LEFT$(I$,1)<>"Y" THEN 1760
    0x628b6fadd350 ---------A   01610 PRINT
    0x628b6fadd4c0 ---------A   01620 INPUT "SAME SET-UP";I$
    0x628b6fadd550 ---------A   01630 PRINT
    0x628b6fadd970 ---------A   01640 IF LEFT$(I$,1)="Y" THEN 1340
    0x628b6faddf00 ---------A   01650 INPUT "SAME CAVE";I$
    0x628b6faddf90 ---------A   01660 PRINT
    0x628b6fade3a0 ---------A   01670 IF LEFT$(I$,1)="Y" THEN 1220
    0x628b6fade440 ---------A   01680 GOTO 1190
    0x628b6fae39b0 ---------A   01690 REM  SHOOT ARROW
    0x628b6fae5560 ---------A   01700 REM  NO TUNNEL FOR ARROW
    0x628b6fae6920 ---------A   01710 REM  MOVE WUMPUS
    0x628b6fae7210 ---------A   01720 REM  AMMO CHECK
    0x628b6faeb790 ---------A   01730 REM  CHECK FOR HAZARDS
    0x628b6faf07a0 ---------A   01740 REM  BATS
    0x628b6faf18c0 ---------A   01750 REM  SELECT CAVE
    0x628b6faf73f0 ---------A T 01760 PRINT @ 401,"THANK YOU FOR PLAYING WITH ME!"
    0x628b6faf7460 ---------A   01770 RUN"MENU"
    0x628b6faf76e0 ---------A   01780 PRINT:PRINT"TO LOAD ANOTHER PROGRAM, TYPE 'CLOAD'.":PRINT:END
    0x628b6faf7760 ---------A   01790 REM  DODECAHEDRON
    0x628b6faf8b80 ---------A   01800 DATA 2,5,8,1,3,10,2,4,12,3,5,14,1,4,6,5,7,15,6,8,17,1
    0x628b6faf9cc0 ---------A   01810 DATA 7,8,9,10,18,2,9,11,10,12,19,3,11,13,12,14,20,4,13
    0x628b6fafadd0 ---------A   01820 DATA 15,6,14,16,15,17,20,7,16,18,9,17,19,11,18,20,13,16,19
    0x628b6fafae40 ---------A   01830 REM  MOBIUS STRIP
    0x628b6fafc340 ---------A   01840 DATA 20,2,3,19,1,4,1,4,5,2,3,6,3,6,7,4,5,8,5,8,9,6,7
    0x628b6fafd3a0 ---------A   01850 DATA 10,7,10,11,8,9,12,9,12,13,10,11,14,11,14,15,12,13
    0x628b6fafe4c0 ---------A   01860 DATA 16,12,16,17,14,15,18,15,18,19,16,17,20,2,17,20,1,18,19
    0x628b6fafe530 ---------A   01870 REM  STRING OF BEADS
    0x628b6faffa30 ---------A   01880 DATA 2,3,20,1,3,4,1,2,4,2,3,5,4,6,7,5,7,8,5,6,8,6,7
    0x628b6fb00b70 ---------A   01890 DATA 9,8,10,11,9,11,12,9,10,12,10,11,13,12,14,15,13,15,1
    0x628b6fb01c80 ---------A   01900 DATA 6,13,14,16,14,15,17,16,18,19,17,19,20,17,18,20,1,18,19
    0x628b6fb01cf0 ---------A   01910 REM  HEX NETWORK
    0x628b6fb03030 ---------A   01920 DATA 6,10,16,6,7,17,7,8,18,8,9,19,9,10,20,1,2,15,2,3,1
    0x628b6fb04250 ---------A   01930 DATA 1,3,4,12,4,5,13,1,5,14,7,16,20,8,16,17,9,17,18,10
    0x628b6fb05450 ---------A   01940 DATA 18,19,6,19,20,1,11,12,2,12,13,3,13,14,4,14,15,5,11,15
    0x628b6fb054d0 ---------A   01950 REM  DENDRITE W/ DEGENERACIES
    0x628b6fb069d0 ---------A   01960 DATA 1,1,5,2,2,5,3,3,6,4,4,6,1,2,7,3,4,7,5,6,10,8,9
    0x628b6fb07b10 ---------A   01970 DATA 9,8,8,10,7,9,11,10,13,14,12,13,13,11,12,12,11,15,16
    0x628b6fb08b50 ---------A   01980 DATA 14,17,18,14,19,20,15,17,17,15,18,18,16,19,19,16,20,20
    0x628b6fae6a00 ---------A   01990 REM  ONE WAY LATTICE
    0x628b6fb0a7e0 ---------A   02000 DATA 5,4,8,1,5,6,2,6,7,3,7,8,8,9,12,5,9,10,6,10,11,7
    0x628b6fb0b840 ---------A   02010 DATA 11,12,12,13,16,9,13,14,10,14,15,11,15,16,16,17,20,13
    0x628b6fb0ca30 ---------A   02020 DATA 17,18,14,18,19,15,19,20,1,4,20,1,2,17,2,3,18,3,4,19
    0x628b6fb1ff60 ----------   02030 RETURN
    0x628b6fae7690 ---------- T 02040 F=-1
    0x628b6fb1ffc0 ----------   02050 GOTO 02160
    0x628b6fae7790 ---------A   02060 REM  SEE IF ARROW IS AT L(1) OR L(2)
    0x628b6fae7ac0 ----------   02070 A9=P(K)
    0x628b6fae7e20 ----------   02080 IF A9<>L(2) THEN 2130
    0x628b6fae8160 ----------   02090 PRINT "AHA!  YOU GOT THE WUMPUS!!  HE WAS IN ROOM";L(2)
    0x628b6fae81d0 ----------   02100 PRINT
    0x628b6fae83e0 ----------   02110 F=1
    0x628b6fb20020 ----------   02120 GOTO 02160
    0x628b6fae87d0 ---------- T 02130 IF A9<>L(1) THEN RETURN
    0x628b6fae8940 ----------   02140 PRINT "OUCH!  ARROW GOT YOU!!"
    0x628b6fae89c0 ----------   02150 GOTO 2040
    0x628b6fb20080 ---------- T 02160 RETURN
    0x628b6faf4030 ---------A   02170 REM  INPUT OWN CAVE
    0x628b6faf4310 ----------   02180 FOR J=1 TO 20
    0x628b6faf45a0 ---------- T 02190 PRINT "ROOM #";J;
    0x628b6faf48d0 ----------   02200 INPUT "IS CONNECTED TO :";S(J,1)
    0x628b6faf4ef0 ----------   02210 INPUT "AND";S(J,2):INPUT "AND";S(J,3)
    0x628b6faf4f70 ----------   02220 PRINT
    0x628b6faf5240 ----------   02230 F5=0
    0x628b6faf5530 ----------   02240 FOR K=1 TO 3
    0x628b6faf5d80 ----------   02250 IF S(J,K)>0 THEN IF S(J,K)<21 THEN 2190
    0x628b6faf5f00 ----------   02260 PRINT "ERROR** ENTER ROOM NUMBERS FROM 1 TO 20 ONLY!!"
    0x628b6faf6110 ----------   02270 F5=1
    0x628b6faf6240 ----------   02280 NEXT K
    0x628b6faf64a0 ----------   02290 IF F5=1 THEN 2190
    0x628b6faf65e0 ----------   02300 NEXT J
    0x628b6fb202c0 ----------   02310 GOTO 02320
    0x628b6fb20320 ---------- T 02320 RETURN
    0x628b6faf66c0 ---------A   02330 REM  INPUT CAVE
    0x628b6faf69a0 ----------   02340 FOR J=1 TO 20
    0x628b6faf6c80 ----------   02350 FOR K=1 TO 3
    0x628b6faf6fa0 ----------   02360 READ S(J,K)
    0x628b6faf70c0 ----------   02370 NEXT K
    0x628b6faf7200 ----------   02380 NEXT J
    0x628b6fb20380 ----------   02390 GOTO 02400
    0x628b6fb203e0 ---------- T 02400 RETURN
    0x628b6fade4b0 ---------B   02410 REM  PRINT LOCATION & HAZARD WARNINGS
    0x628b6fade530 ---------B G 02420 PRINT
    0x628b6fade800 ---------B   02430 FOR J=2 TO 6
    0x628b6fadeaf0 ---------B   02440 FOR K=1 TO 3
    0x628b6fadf0e0 ---------B   02450 IF S(L(1),K)<>L(J) THEN 2520
    0x628b6fadf710 ---------B   02460 ON J-1 GOTO 2470,2490,2490,2510,2510
    0x628b6fadf860 ---------B T 02470 PRINT "I SMeLL A WUMPUS!"
    0x628b6fadf8e0 ---------B   02480 GOTO 2520
    0x628b6fadfa20 ---------B T 02490 PRINT "I FEEL A DRAFT"
    0x628b6fadfaa0 ---------B   02500 GOTO 2520
    0x628b6fadfbe0 ---------B T 02510 PRINT "BATS NEARBY!"
    0x628b6fadfd10 ---------B T 02520 NEXT K
    0x628b6fadfe50 ---------B   02530 NEXT J
    0x628b6fae01d0 ---------B   02540 PRINT "YOU ARE IN ROOM";L(1);
    0x628b6fae0d00 ---------B   02550 PRINT "    TUNNELS LEAD TO";S(L,1);",";S(L,2);"AND";S(L,3)
    0x628b6fae0d70 ---------B   02560 PRINT
    0x628b6fb1f5d0 ---------B   02570 GOTO 02580
    0x628b6fb1f610 ---------B T 02580 RETURN
    0x628b6fae0e40 ---------C   02590 REM  CHOSE OPTION
    0x628b6fae0fd0 ---------C B 02600 INPUT "SHOOT OR MOVE";I$
    0x628b6fae1060 ---------C   02610 PRINT
    0x628b6fae1470 ---------C   02620 IF LEFT$(I$,1)<>"S" THEN 2650
    0x628b6fae1690 ---------C   02630 O=1
    0x628b6fb1f650 ---------C   02640 GOTO 02680
    0x628b6fae1b10 ---------C T 02650 IF LEFT$(I$,1)<>"M" THEN 2600
    0x628b6fae1d30 ---------C   02660 O=2
    0x628b6fb1fea0 ---------C   02670 GOTO 02680
    0x628b6fb1ff00 ---------C T 02680 RETURN
    0x628b6fae1e10 ---------D   02690 REM  ARROW ROUTINE
    0x628b6fae2040 ---------D G 02700 F=0
    0x628b6fae20b0 ---------D   02710 REM  PATH OF ARROW
    0x628b6fae2300 ---------D T 02720 INPUT "NUMBER OF ROOMS";J9
    0x628b6fae2380 ---------D   02730 PRINT
    0x628b6fae25d0 ---------D   02740 IF J9<1 THEN 2720
    0x628b6fae2830 ---------D   02750 IF J9>5 THEN 2720
    0x628b6fae2b40 ---------D   02760 FOR K=1 TO J9
    0x628b6fae2dc0 ---------D T 02770 INPUT "ROOM #";P(K)
    0x628b6fae3440 ---------D   02780 IF P(K)>0 THEN IF P(K)<21 THEN 1040
    0x628b6fae35c0 ---------D   02790 PRINT "   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY."
    0x628b6fae3630 ---------D   02800 GOTO 2770
    0x628b6fae8a30 ---------E   02810 REM  MOVE WUMPUS ROUTINE
    0x628b6fae8d30 ---------E G 02820 K=RND(4)
    0x628b6fae8f80 ---------E   02830 IF K=4 THEN 2880
    0x628b6fae9510 ---------E   02840 L(2)=S(L(2),K)
    0x628b6fae9860 ---------E   02850 IF L(2)<>L THEN 2880
    0x628b6fae9a20 ---------E   02860 PRINT "TSK TSK TSK - THE WUMPUS GOT YOU!":PRINT
    0x628b6fae9c30 ---------E   02870 F=-1
    0x628b6fb200e0 ---------E T 02880 GOTO 02890
    0x628b6fb20140 ---------E T 02890 RETURN
    0x628b6fae9d00 ---------F   02900 REM  MOVE ROUTINE
    0x628b6fae9f30 ---------F G 02910 F=0
    0x628b6faea0a0 ---------F T 02920 INPUT "WHERE TO";L
    0x628b6faea120 ---------F   02930 PRINT
    0x628b6faea370 ---------F   02940 IF L<1 THEN 2920
    0x628b6faea5d0 ---------F   02950 IF L>20 THEN 2920
    0x628b6faea8c0 ---------F   02960 FOR K=1 TO 3
    0x628b6faea950 ---------F   02970 REM  CHECK IF LEGAL MOVE
    0x628b6faeb0b0 ---------F   02980 IF S(L(1),K)=L THEN K=4:GOTO 2990
    0x628b6faeba90 ---------F T 02990 L(1)=L
    0x628b6faebb00 ---------F   03000 REM  WUMPUS
    0x628b6faebe70 ---------F   03010 IF L<>L(2) THEN 3080
    0x628b6faebfe0 ---------F   03020 PRINT "... OOPS!  BUMPED A WUMPUS!"
    0x628b6faec050 ---------F   03030 REM  MOVE WUMPUS
    0x628b6faec0d0 ---------F   03040 GOSUB 2820
    0x628b6faec310 ---------F   03050 IF F=0 THEN 3080
    0x628b6fb201a0 ---------F   03060 GOTO 03190
    0x628b6faec3f0 ---------F   03070 REM  PIT
    0x628b6faeca70 ---------F T 03080 IF L<>L(3) THEN IF L<>L(4) THEN 1840
    0x628b6faecdf0 ---------F   03090 CLS:P1=110
    0x628b6faed7f0 ---------F   03100 PRINT CHR$(28);"Y";:GOSUB 4090:PRINT "Y";:GOSUB 5000:PRINT "Y":GOSUB 5000:P1=100:PRINT "      Y":GOSUB 5000
    0x628b6faedd90 ---------F   03110 P1=90:PRINT "         Y":GOSUB 5000:P1=80
    0x628b6faee2c0 ---------F   03120 PRINT "          Y":GOSUB 4090:P1=70:PRINT "           Y":GOSUB 5000
    0x628b6faee840 ---------F   03130 PRINT TAB(11);"I";:GOSUB 5000:PRINT TAB(30);"FELL IN A PIT!!"
    0x628b6faef2f0 ---------F   03140 FOR I=1 TO 4:P1=70-I*10:PRINT TAB(11);"I":GOSUB 5000:NEXT I
    0x628b6faefde0 ---------F   03150 FOR I=1 TO 2:P1=30-I*10:PRINT TAB(11);"E":GOSUB 5000:NEXT I
    0x628b6faf04b0 ---------F   03160 FOR I=1 TO 18:PRINT TAB(11);".":GOSUB 5000:NEXT I
    0x628b6faf06d0 ---------F   03170 F=-1
    0x628b6fb20200 ---------F   03180 GOTO 03190
    0x628b6fb20260 ---------F T 03190 RETURN
    0x628b6fb0caa0 ---------G   03200 REM  INSTRUCTIONS
    0x628b6fb0cb60 ---------G G 03210 CLS
    0x628b6fb0cd00 ---------G   03220 PRINT "  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3"
    0x628b6fb0d020 ---------G   03230 PRINT "TUNNELS LEADING TO OTHER ROOMS.":PRINT:PRINT "HAZARDS:"
    0x628b6fb0d220 ---------G   03240 PRINT:PRINT "BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF"
    0x628b6fb0d420 ---------G   03250 PRINT "YOU GO IN THERE, YOU FALL INTO THE PIT AND LOSE!":PRINT
    0x628b6fb0d5e0 ---------G   03260 PRINT "SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,"
    0x628b6fb0d790 ---------G   03270 PRINT "A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE"
    0x628b6fb0d950 ---------G   03280 PRINT "CAVE WHERE YOU COULD RUN INTO THE...":GOSUB 4050
    0x628b6fb0db20 ---------G   03290 PRINT "WUMPUS:":PRINT
    0x628b6fb0dce0 ---------G   03300 PRINT "THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET"
    0x628b6fb0dea0 ---------G   03310 PRINT "AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS"
    0x628b6fb0e060 ---------G   03320 PRINT "WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW."
    0x628b6fb0e210 ---------G   03330 PRINT "IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL."
    0x628b6fb0e3a0 ---------G   03340 PRINT "BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!"
    0x628b6fb0e5c0 ---------G   03350 PRINT:PRINT "YOU:":PRINT
    0x628b6fb0e770 ---------G   03360 PRINT "EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW."
    0x628b6fb0e8e0 ---------G   03370 PRINT "MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL)."
    0x628b6fb0e980 ---------G   03380 GOSUB 4050
    0x628b6fb0eb30 ---------G   03390 PRINT "SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT."
    0x628b6fb0ecf0 ---------G   03400 PRINT "  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE"
    0x628b6fb0eeb0 ---------G   03410 PRINT "  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO"
    0x628b6fb0f040 ---------G   03420 PRINT "  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF"
    0x628b6fb0f220 ---------G   03430 PRINT "  OCCURRENCE.":PRINT
    0x628b6fb0f3e0 ---------G   03440 PRINT " EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10"
    0x628b6fb0f590 ---------G   03450 PRINT "  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO"
    0x628b6fb0f750 ---------G   03460 PRINT "  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS"
    0x628b6fb0f910 ---------G   03470 PRINT "  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY"
    0x628b6fb0fac0 ---------G   03480 PRINT "  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS"
    0x628b6fb0fcc0 ---------G   03490 PRINT "  PROCESS UNTIL 4 ROOMS HAVE BEEN ENTERED.":GOSUB 4050
    0x628b6fb0fe70 ---------G   03500 PRINT " NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING"
    0x628b6fb10030 ---------G   03510 PRINT "  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE"
    0x628b6fb101f0 ---------G   03520 PRINT "  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED"
    0x628b6fb103a0 ---------G   03530 PRINT "  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING"
    0x628b6fb10560 ---------G   03540 PRINT "  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW" 
    0x628b6fb10720 ---------G   03550 PRINT "  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT"
    0x628b6fb108d0 ---------G   03560 PRINT "  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS."
    0x628b6fb10ab0 ---------G   03570 PRINT:PRINT "IF THE ARROW HITS THE WUMPUS, YOU WIN."
    0x628b6fb10c30 ---------G   03580 PRINT "IF THE ARROW HITS YOU, YOU LOSE."
    0x628b6fb10ea0 ---------G   03590 GOSUB 3410:PRINT:PRINT "WARNINGS:":PRINT
    0x628b6fb11060 ---------G   03600 PRINT "WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,"
    0x628b6fb11370 ---------G   03610 PRINT "THE COMPUTER SAYS:":PRINT:PRINT "WUMPUS - 'I SMELL A WUMPUS'"
    0x628b6fb11680 ---------G   03620 PRINT "BAT - 'BATS NEARBY'":PRINT "PIT - 'I FEEL A DRAFT'":PRINT
    0x628b6fb11830 ---------G   03630 PRINT "BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!"
    0x628b6fb11b10 ---------G   03640 PRINT @ 910,"";:INPUT "WOULD YOU LIKE THE DESCRIPTION OF THE CAVES";Z$
    0x628b6fb11ba0 ---------G   03650 CLS
    0x628b6fb11ff0 ---------G   03660 IF LEFT$(Z$,1)="N" THEN RETURN
    0x628b6fb121e0 ---------G   03670 PRINT "THE CAVES ARE:":PRINT
    0x628b6fb123a0 ---------G   03680 PRINT "0 - DODECAHEDRON:  THE ROOMS OF THIS CAVE ARE ON A 12-SIDED"
    0x628b6fb12560 ---------G   03690 PRINT "    OBJECT, EACH SIDE FORMING A PENTAGON.  THE ROOMS ARE AT THE"
    0x628b6fb12700 ---------G   03700 PRINT "    CORNERS OF THE PENTAGONS, EACH ROOM HAVING TUNNELS LEADING"
    0x628b6fb128e0 ---------G   03710 PRINT "    TO 3 OTHER ROOMS.":PRINT
    0x628b6fb12aa0 ---------G   03720 PRINT "1 - MOBIUS STRIP:  THIS CAVE IS TWO ROOMS WIDE AND 10 ROOMS"
    0x628b6fb12c40 ---------G   03730 PRINT "    AROUND (LIKE A BELT).  YOU WILL NOTICE THERE IS A HALF-"
    0x628b6fb12e20 ---------G   03740 PRINT "    TWIST SOMEWHERES.":PRINT
    0x628b6fb12fe0 ---------G   03750 PRINT "2 - STRING OF BEADS:  FIVE BEADS IN A CIRCLE.  EACH BEAD IS A"
    0x628b6fb131a0 ---------G   03760 PRINT "    DIAMOND WITH A VERTICAL CROSS-BAR.  THE RIGHT AND LEFT"
    0x628b6fb13330 ---------G   03770 PRINT "    CORNERS LEAD TO NEIGHBORING BEADS.  (THIS ONE IS DIFFICULT"
    0x628b6fb13510 ---------G   03780 PRINT "    TO PLAY).":GOSUB 4050
    0x628b6fb136c0 ---------G   03790 PRINT "3 - HEX NETWORK:  IMAGINE A HEX TILE FLOOR.  TAKE A RECTANGLE"
    0x628b6fb13880 ---------G   03800 PRINT "    WITH 20 POINTS (INTERSECTIONS) INSIDE (4X5).  JOIN RIGHT"
    0x628b6fb13a20 ---------G   03810 PRINT "    AND LEFT SIDES TO MAKE A CYLINDER.  THEN JOIN TOP AND BOT-"
    0x628b6fb13ba0 ---------G   03820 PRINT "    TOM TO FORM A TORUS (DOUGHNUT)."
    0x628b6fb13d90 ---------G   03830 PRINT "    HAVE FUN IMAGINING THIS ONE!":PRINT
    0x628b6fb13f40 ---------G   03840 PRINT "CAVES 0-3 ARE REGULAR IN THE SENSE THAT EACH ROOM GOES TO THREE"
    0x628b6fb140d0 ---------G   03850 PRINT "OTHER ROOMS AND THE TUNNELS ALLOW TWO-WAY TRAFFIC."
    0x628b6fb142c0 ---------G   03860 PRINT "HERE ARE SOME IRREGULAR CAVES:":PRINT
    0x628b6fb14480 ---------G   03870 PRINT "4 - DENDRITE WITH DEGENERACIES:  PULL A PLANT FROM THE GROUND."
    0x628b6fb14640 ---------G   03880 PRINT "    THE ROOTS AND BRANCHES FROM A DENDRITE - IE, THERE ARE NO"
    0x628b6fb14800 ---------G   03890 PRINT "    LOOPING PATHS.  DEGENERACY MEANS A) SOME ROOMS CONNECT TO"
    0x628b6fb149b0 ---------G   03900 PRINT "    THEMSELVES OR B) THAT TWO ROOMS HAVE MORE THAN ONE TUNNEL"
    0x628b6fb14b20 ---------G   03910 PRINT "    BETWEEN THEM IE, 12 HAS TWO TUNNELS TO 13."
    0x628b6fb14bd0 ---------G   03920 GOSUB 4050
    0x628b6fb14d80 ---------G   03930 PRINT "5 - ONE WAY LATTICE:  HERE ALL TUNNELS GO ONE WAY ONLY.  TO"
    0x628b6fb14f90 ---------G   03940 PRINT "    RETURN, YOU MUST GO AROUND THE CAVE (ABOUT 5 MOVES).":PRINT
    0x628b6fb15140 ---------G   03950 PRINT "6 - ENTER YOUR OWN CAVE:  THE COMPUTER WILL ASK YOU FOR THE"
    0x628b6fb15310 ---------G   03960 PRINT "    ROOMS NEXT TO EACH ROOM IN THE CAVE.":PRINT
    0x628b6fb154f0 ---------G   03970 PRINT "   FOR EXAMPLE:":PRINT
    0x628b6fb156b0 ---------G   03980 PRINT "    TO SET ROOM #1 UP WITH TUNNELS GOING TO ROOMS 2, 3 AND 4"
    0x628b6fb15840 ---------G   03990 PRINT "    TYPE '2' (ENTER) '3' (ENTER) '4' (ENTER) WHEN PROMPTED"
    0x628b6fb159b0 ---------G   04000 PRINT "    WITH 'ROOM #1'"
    0x628b6fb15ca0 ---------G   04010 PRINT:PRINT TAB(24);"HAPPY HUNTING!!!"
    0x628b6fb15f30 ---------G   04020 PRINT TAB(27);">>>------->"
    0x628b6fb1f690 ---------G   04030 GOTO 04040
    0x628b6fb1f6f0 ---------G T 04040 RETURN
    0x628b6fb16190 ---------H G 04050 PRINT @ 975,"PRESS 'ENTER' TO CONTINUE ";
    0x628b6fb16900 ---------H T 04060 Z$=INKEY$:Z$=Z$:IF Z$="" THEN 4060 
    0x628b6fb1f750 ---------H   04070 GOTO 04080
    0x628b6fb1f7b0 ---------H T 04080 RETURN
    0x628b6fb1f810 ---------I G 04090 GOTO 04100
    0x628b6fb1f870 ---------I T 04100 RETURN
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
char* data_01800s[]={"2","5","8","1","3","10","2","4","12","3","5","14","1","4","6","5","7","15","6","8","17","1"};
char* data_01810s[]={"7","8","9","10","18","2","9","11","10","12","19","3","11","13","12","14","20","4","13"};
char* data_01820s[]={"15","6","14","16","15","17","20","7","16","18","9","17","19","11","18","20","13","16","19"};
char* data_01840s[]={"20","2","3","19","1","4","1","4","5","2","3","6","3","6","7","4","5","8","5","8","9","6","7"};
char* data_01850s[]={"10","7","10","11","8","9","12","9","12","13","10","11","14","11","14","15","12","13"};
char* data_01860s[]={"16","12","16","17","14","15","18","15","18","19","16","17","20","2","17","20","1","18","19"};
char* data_01880s[]={"2","3","20","1","3","4","1","2","4","2","3","5","4","6","7","5","7","8","5","6","8","6","7"};
char* data_01890s[]={"9","8","10","11","9","11","12","9","10","12","10","11","13","12","14","15","13","15","1"};
char* data_01900s[]={"6","13","14","16","14","15","17","16","18","19","17","19","20","17","18","20","1","18","19"};
char* data_01920s[]={"6","10","16","6","7","17","7","8","18","8","9","19","9","10","20","1","2","15","2","3","1"};
char* data_01930s[]={"1","3","4","12","4","5","13","1","5","14","7","16","20","8","16","17","9","17","18","10"};
char* data_01940s[]={"18","19","6","19","20","1","11","12","2","12","13","3","13","14","4","14","15","5","11","15"};
char* data_01960s[]={"1","1","5","2","2","5","3","3","6","4","4","6","1","2","7","3","4","7","5","6","10","8","9"};
char* data_01970s[]={"9","8","8","10","7","9","11","10","13","14","12","13","13","11","12","12","11","15","16"};
char* data_01980s[]={"14","17","18","14","19","20","15","17","17","15","18","18","16","19","19","16","20","20"};
char* data_02000s[]={"5","4","8","1","5","6","2","6","7","3","7","8","8","9","12","5","9","10","6","10","11","7"};
char* data_02010s[]={"11","12","12","13","16","9","13","14","10","14","15","11","15","16","16","17","20","13"};
char* data_02020s[]={"17","18","14","18","19","15","19","20","1","4","20","1","2","17","2","3","18","3","4","19"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1800, 22,data_01800s},
    { 1810, 19,data_01810s},
    { 1820, 19,data_01820s},
    { 1840, 23,data_01840s},
    { 1850, 18,data_01850s},
    { 1860, 19,data_01860s},
    { 1880, 23,data_01880s},
    { 1890, 19,data_01890s},
    { 1900, 19,data_01900s},
    { 1920, 21,data_01920s},
    { 1930, 20,data_01930s},
    { 1940, 20,data_01940s},
    { 1960, 23,data_01960s},
    { 1970, 19,data_01970s},
    { 1980, 18,data_01980s},
    { 2000, 22,data_02000s},
    { 2010, 18,data_02010s},
    { 2020, 20,data_02020s},
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
void Routine_02420();
void Routine_02600();
void Routine_02700();
void Routine_02820();
void Routine_02910();
void Routine_03210();
void Routine_04050();
void Routine_04090();

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
    // 02410 REM  PRINT LOCATION & HAZARD WARNINGS

void Routine_02420(){
    // 02420 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02430 FOR J=2 TO 6
    for(J_int=2;J_int<=6;J_int++){
        // 02440 FOR K=1 TO 3
        for(K_int=1;K_int<=3;K_int++){
            // 02450 IF S(L(1),K)<>L(J) THEN 2520
            if(S_int_arr[L_int_arr[1]][K_int]!=L_int_arr[J_int])goto Lbl_02520;
            // 02460 ON J-1 GOTO 2470,2490,2490,2510,2510
            switch((int)(J_int-1)){
                case 1: goto Lbl_02470;
                case 2: goto Lbl_02490;
                case 3: goto Lbl_02490;
                case 4: goto Lbl_02510;
                case 5: goto Lbl_02510;
                default: break; 
            };

  Lbl_02470:
            // 02470 PRINT "I SMeLL A WUMPUS!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I SMeLL A WUMPUS!");strcat(buf,"\n");fputs(buf,fh); };
            // 02480 GOTO 2520
            goto Lbl_02520;

  Lbl_02490:
            // 02490 PRINT "I FEEL A DRAFT"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I FEEL A DRAFT");strcat(buf,"\n");fputs(buf,fh); };
            // 02500 GOTO 2520
            goto Lbl_02520;

  Lbl_02510:
            // 02510 PRINT "BATS NEARBY!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BATS NEARBY!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02520:
            // 02520 NEXT K
            int dummy_2520=0; // Ignore this line.
        }; // End-For(K_int)
        // 02530 NEXT J
        int dummy_2530=0; // Ignore this line.
    }; // End-For(J_int)
    // 02540 PRINT "YOU ARE IN ROOM";L(1);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE IN ROOM"); b2c_INT(buf,L_int_arr[1]);fputs(buf,fh); };
    // 02550 PRINT "    TUNNELS LEAD TO";S(L,1);",";S(L,2);"AND";S(L,3)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    TUNNELS LEAD TO"); b2c_INT(buf,S_int_arr[L_int_arr[0]][1]);strcat(buf,","); b2c_INT(buf,S_int_arr[L_int_arr[0]][2]);strcat(buf,"AND"); b2c_INT(buf,S_int_arr[L_int_arr[0]][3]);strcat(buf,"\n");fputs(buf,fh); };
    // 02560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02570 GOTO 02580
    goto Lbl_02580;

  Lbl_02580:
    // 02580 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 02590 REM  CHOSE OPTION

void Routine_02600(){

  Lbl_02600:
    // 02600 INPUT "SHOOT OR MOVE";I$
    // Start of Basic INPUT statement 02600
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
    }; // End of Basic INPUT statement 02600
    // 02610 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02620 IF LEFT$(I$,1)<>"S" THEN 2650
    if(LEFT$(I_str_arr[0],1)=='S')goto Lbl_02650;
    // 02630 O=1
    O_int = 1;
    // 02640 GOTO 02680
    goto Lbl_02680;

  Lbl_02650:
    // 02650 IF LEFT$(I$,1)<>"M" THEN 2600
    if(LEFT$(I_str_arr[0],1)=='M')goto Lbl_02600;
    // 02660 O=2
    O_int = 2;
    // 02670 GOTO 02680
    goto Lbl_02680;

  Lbl_02680:
    // 02680 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------
    // 02690 REM  ARROW ROUTINE

void Routine_02700(){
    // 02700 F=0
    F_int = 0;
    // 02710 REM  PATH OF ARROW

  Lbl_02720:
    // 02720 INPUT "NUMBER OF ROOMS";J9
    // Start of Basic INPUT statement 02720
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
    }; // End of Basic INPUT statement 02720
    // 02730 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02740 IF J9<1 THEN 2720
    if(J9_int<1)goto Lbl_02720;
    // 02750 IF J9>5 THEN 2720
    if(J9_int>5)goto Lbl_02720;
    // 02760 FOR K=1 TO J9
    for(K_int=1;K_int<=J9_int;K_int++){

  Lbl_02770:
        // 02770 INPUT "ROOM #";P(K)
        // Start of Basic INPUT statement 02770
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
        }; // End of Basic INPUT statement 02770
        // 02780 IF P(K)>0 THEN IF P(K)<21 THEN 1040
        if(P_int_arr[K_int]>0) {
        }
        // 02790 PRINT "   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY.");strcat(buf,"\n");fputs(buf,fh); };
        // 02800 GOTO 2770
        goto Lbl_02770;


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------
        // 02810 REM  MOVE WUMPUS ROUTINE

void Routine_02820(){
        // 02820 K=RND(4)
        K_int = RND(4);
        // 02830 IF K=4 THEN 2880
        if(K_int==4)goto Lbl_02880;
        // 02840 L(2)=S(L(2),K)
        L_int_arr[2] = S_int_arr[L_int_arr[2]][K_int];
        // 02850 IF L(2)<>L THEN 2880
        if(L_int_arr[2]!=L_int_arr[0])goto Lbl_02880;
        // 02860 PRINT "TSK TSK TSK - THE WUMPUS GOT YOU!":PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 02870 F=-1
        F_int = -1;

  Lbl_02880:
        // 02880 GOTO 02890
        goto Lbl_02890;

  Lbl_02890:
        // 02890 RETURN
        return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------
        // 02900 REM  MOVE ROUTINE

void Routine_02910(){
        // 02910 F=0
        F_int = 0;

  Lbl_02920:
        // 02920 INPUT "WHERE TO";L
        // Start of Basic INPUT statement 02920
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
        }; // End of Basic INPUT statement 02920
        // 02930 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 02940 IF L<1 THEN 2920
        if(L_int_arr[0]<1)goto Lbl_02920;
        // 02950 IF L>20 THEN 2920
        if(L_int_arr[0]>20)goto Lbl_02920;
        // 02960 FOR K=1 TO 3
        for(K_int=1;K_int<=3;K_int++){
            // 02970 REM  CHECK IF LEGAL MOVE
            // 02980 IF S(L(1),K)=L THEN K=4:GOTO 2990
            goto Lbl_02990;

  Lbl_02990:
            // 02990 L(1)=L
            L_int_arr[1] = L_int_arr[0];
            // 03000 REM  WUMPUS
            // 03010 IF L<>L(2) THEN 3080
            if(L_int_arr[0]!=L_int_arr[2])goto Lbl_03080;
            // 03020 PRINT "... OOPS!  BUMPED A WUMPUS!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"... OOPS!  BUMPED A WUMPUS!");strcat(buf,"\n");fputs(buf,fh); };
            // 03030 REM  MOVE WUMPUS
            // 03040 GOSUB 2820
            Routine_02820();
            // 03050 IF F=0 THEN 3080
            if(F_int==0)goto Lbl_03080;
            // 03060 GOTO 03190
            goto Lbl_03190;
            // 03070 REM  PIT

  Lbl_03080:
            // 03080 IF L<>L(3) THEN IF L<>L(4) THEN 1840
            if(L_int_arr[0]!=L_int_arr[3]) {
            }
            // 03090 CLS:P1=110
            P1_int = 110;
            // 03100 PRINT CHR$(28);"Y";:GOSUB 4090:PRINT "Y";:GOSUB 5000:PRINT "Y":GOSUB 5000:P1=100:PRINT "      Y":GOSUB 5000
            Routine_04090();
            // 03110 P1=90:PRINT "         Y":GOSUB 5000:P1=80
            P1_int = 80;
            // 03120 PRINT "          Y":GOSUB 4090:P1=70:PRINT "           Y":GOSUB 5000
            Routine_04090();
            // 03130 PRINT TAB(11);"I";:GOSUB 5000:PRINT TAB(30);"FELL IN A PIT!!"
