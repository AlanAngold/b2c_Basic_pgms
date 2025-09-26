/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/wumpus/basic/wumpus2a.bas: 
 *
                   +----------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |          | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |          | |
        Address    v          v v Original BASIC statement
    -------------- ------------ - ------------------------------------------------------------------------------
    0x55fe3ade0d10 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x55fe3ade0e00 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x55fe3ade0ee0 ---------A   00010 REM  WUMPUS II  FROM THE LAWRENCE HALL OF SCIENCE
    0x55fe3ade0fd0 ---------A   00020 REM  TRANSFERED TO SOL EBASIC BY DAVID FOX
    0x55fe3ade10a0 ---------A   00030 REM  REVISED FOR TRS-80 LEVEL II BASIC BY DOUG BENEDICT
    0x55fe3ade1240 ---------A   00040 CLS:PRINT@282,"WUMPUS  II"
    0x55fe3ade1360 ---------A   00041 PRINT@409,"COPYRIGHT BY"
    0x55fe3ade14a0 ---------A   00042 PRINT@470,"CREATIVE COMPUTING"
    0x55fe3ade15f0 ---------A   00043 PRINT@536,"P.O. BOX 789-M"
    0x55fe3ade1110 ---------A   00044 PRINT@593,"MORRISTOWN, NEW JERSEY 07960"
    0x55fe3ade1ab0 ---------A   00045 FORI=1TO2000:NEXTI
    0x55fe3ade65c0 ---------A   00050 DIM I$(6),L(6),M(6),P(5),S(20,3)
    0x55fe3ade6770 ---------A   00060 CLS:PRINT @ 390,"";
    0x55fe3ade68f0 ---------A   00070 PRINT "* * *  T H E  G A M E  O F  W U M P U S  II  * * *"
    0x55fe3ade6bb0 ---------A T 00080 PRINT @ 896,"";:INPUT "WOULD YOU LIKE INSTRUCTIONS";Z$
    0x55fe3ade6f20 ---------A   00090 IF LEFT$(Z$,1)="N" THEN 120
    0x55fe3ade7200 ---------A   00100 IF LEFT$(Z$,1)<>"Y" THEN 80
    0x55fe3ade7570 ---------A   00110 F3=1:GOSUB 2580
    0x55fe3ade75e0 ---------A T 00120 REM  CHOOSE AND SET UP CAVE
    0x55fe3ade77b0 ---------A   00130 GOSUB 1890:F3=1
    0x55fe3ade7830 ---------A   00170 REM  LOCATE L ARRAY ITEMS
    0x55fe3ade78e0 ---------A   00180 REM  1=YOU,2=WUMPUS,3&4=PITS,5&6=BATS
    0x55fe3ade7b80 ---------A T 00190 FOR J=1 TO 6
    0x55fe3ade7e40 ---------A   00200 L(J)=RND(20)
    0x55fe3ade8030 ---------A   00210 M(J)=L(J)
    0x55fe3ade80e0 ---------A   00220 NEXT J
    0x55fe3ade81a0 ---------A   00230 REM  CHECK FOR CROSSOVERS (IE L(1)=L(2),ETC)
    0x55fe3ade83c0 ---------A   00240 FOR J=1 TO 6
    0x55fe3ade8620 ---------A   00250 FOR K=J TO 6
    0x55fe3ade87c0 ---------A   00260 IF J=K THEN 280
    0x55fe3ade8d00 ---------A   00270 IF L(J)=L(K) THEN J=7:K=7:GOTO 190
    0x55fe3ade8da0 ---------A T 00280 NEXT K
    0x55fe3ade8e60 ---------A   00290 NEXT J
    0x55fe3ade90f0 ---------A   00300 REM  SET # ARROWS
    0x55fe3ade92f0 ---------A T 00310 A=5
    0x55fe3ade9540 ---------A   00320 L=L(1)
    0x55fe3ade95b0 ---------A   00330 REM  RUN THE GAME
    0x55fe3ade9650 ---------A   00340 REM  HAZARD WARNINGS & LOCATION
    0x55fe3ade96e0 ---------A T 00350 GOSUB 660
    0x55fe3ade9740 ---------A   00360 REM  MOVE OR SHOOT
    0x55fe3ade97c0 ---------A T 00370 GOSUB 830
    0x55fe3ade9a40 ---------A   00380 ON O GOTO 400,440
    0x55fe3ade9ab0 ---------A   00390 REM  SHOOT
    0x55fe3ade9b30 ---------A T 00400 GOSUB 920
    0x55fe3ade9d50 ---------A   00410 IF F=0 THEN 370
    0x55fe3ade9dd0 ---------A   00420 GOTO 460
    0x55fe3ade9e30 ---------A   00430 REM  MOVE
    0x55fe3ade9eb0 ---------A T 00440 GOSUB 1480
    0x55fe3adea050 ---------A   00450 IF F=0 THEN 350
    0x55fe3adea210 ---------A T 00460 IF F>0 THEN 510
    0x55fe3adea290 ---------A   00470 REM  LOSE
    0x55fe3adea420 ---------A   00480 PRINT "HA HA HA - YOU LOSE!     ";
    0x55fe3adea490 ---------A   00490 GOTO 530
    0x55fe3adea4f0 ---------A   00500 REM  WIN
    0x55fe3adea680 ---------A T 00510 PRINT "HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!"
    0x55fe3adea6f0 ---------A   00520 PRINT
    0x55fe3adea900 ---------A T 00530 FOR J=1 TO 6
    0x55fe3adeab00 ---------A   00540 L(J)=M(J)
    0x55fe3adeabb0 ---------A   00550 NEXT J
    0x55fe3adeadb0 ---------A   00560 INPUT "WANT TO PLAY AGAIN";I$:CLS
    0x55fe3adeb070 ---------A   00570 IF LEFT$(I$,1)<>"Y" THEN 2300
    0x55fe3adeb100 ---------A   00580 PRINT
    0x55fe3adeb1f0 ---------A   00590 INPUT "SAME SET-UP";I$
    0x55fe3adeb280 ---------A   00600 PRINT
    0x55fe3adeb560 ---------A   00610 IF LEFT$(I$,1)="Y" THEN 310
    0x55fe3adeba70 ---------A   00620 INPUT "SAME CAVE";I$
    0x55fe3adebb00 ---------A   00630 PRINT
    0x55fe3adebdd0 ---------A   00640 IF LEFT$(I$,1)="Y" THEN 190
    0x55fe3adebe70 ---------A   00650 GOTO 120
    0x55fe3adebee0 ---------B G 00660 REM  PRINT LOCATION & HAZARD WARNINGS
    0x55fe3adebf60 ---------B   00670 PRINT
    0x55fe3adec170 ---------B   00680 FOR J=2 TO 6
    0x55fe3adec3a0 ---------B   00690 FOR K=1 TO 3
    0x55fe3adec6f0 ---------B   00700 IF S(L(1),K)<>L(J) THEN 770
    0x55fe3adecbe0 ---------B   00710 ON J-1 GOTO 720,740,740,760,760
    0x55fe3adecd10 ---------B T 00720 PRINT "I SMeLL A WUMPUS!"
    0x55fe3adecd90 ---------B   00730 GOTO 770
    0x55fe3adeceb0 ---------B T 00740 PRINT "I FEEL A DRAFT"
    0x55fe3adecf30 ---------B   00750 GOTO 770
    0x55fe3aded050 ---------B T 00760 PRINT "BATS NEARBY!"
    0x55fe3aded100 ---------B T 00770 NEXT K
    0x55fe3aded1c0 ---------B   00780 NEXT J
    0x55fe3aded480 ---------B   00790 PRINT "YOU ARE IN ROOM";L(1);
    0x55fe3adedbf0 ---------B   00800 PRINT "    TUNNELS LEAD TO";S(L,1);",";S(L,2);"AND";S(L,3)
    0x55fe3adedc60 ---------B   00810 PRINT
    0x55fe3adedcb0 ---------B   00820 RETURN
    0x55fe3adedd30 ---------C G 00830 REM  CHOSE OPTION
    0x55fe3adede40 ---------C T 00840 INPUT "SHOOT OR MOVE";I$
    0x55fe3adeded0 ---------C   00850 PRINT
    0x55fe3adee1a0 ---------C   00860 IF LEFT$(I$,1)<>"S" THEN 890
    0x55fe3adee320 ---------C   00870 O=1
    0x55fe3adee370 ---------C   00880 RETURN
    0x55fe3adee660 ---------C T 00890 IF LEFT$(I$,1)<>"M" THEN 840
    0x55fe3adee7e0 ---------C   00900 O=2
    0x55fe3adee830 ---------C   00910 RETURN
    0x55fe3adee8c0 ---------D G 00920 REM  ARROW ROUTINE
    0x55fe3adeea50 ---------D   00930 F=0
    0x55fe3adeeac0 ---------D   00940 REM  PATH OF ARROW
    0x55fe3adeec50 ---------D T 00950 INPUT "NUMBER OF ROOMS";J9
    0x55fe3adeecd0 ---------D   00960 PRINT
    0x55fe3adeee80 ---------D   00970 IF J9<1 THEN 950
    0x55fe3adef040 ---------D   00980 IF J9>5 THEN 950
    0x55fe3adef230 ---------D   00990 FOR K=1 TO J9
    0x55fe3adef3b0 ---------D T 01000 INPUT "ROOM #";P(K)
    0x55fe3adef7f0 ---------D   01010 IF P(K)>0 THEN IF P(K)<21 THEN 1040
    0x55fe3adef950 ----------   01020 PRINT "   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY."
    0x55fe3adef9c0 ----------   01030 GOTO 1000
    0x55fe3adefb00 ----------   01040 PRINT "  ";
    0x55fe3adefbb0 ----------   01050 NEXT K
    0x55fe3adefc30 ----------   01060 PRINT
    0x55fe3adefca0 ---------A   01070 REM  SHOOT ARROW
    0x55fe3adefec0 ----------   01080 A=A-1
    0x55fe3adf0110 ----------   01090 A9=L(1)
    0x55fe3adf02e0 ----------   01100 FOR K=1 TO J9
    0x55fe3adf04e0 ----------   01110 F1=0
    0x55fe3adf0780 ----------   01120 FOR K1=1 TO 3
    0x55fe3adf0b70 ----------   01130 IF S(A9,K1)=P(K) THEN F1=1
    0x55fe3adf0c30 ----------   01140 NEXT K1
    0x55fe3adf0e00 ----------   01150 IF F1=1 THEN 1190
    0x55fe3adf0e90 ---------A   01160 REM  NO TUNNEL FOR ARROW
    0x55fe3adf1130 ----------   01170 A9=S(A9,RND(3))
    0x55fe3adf12b0 ----------   01180 F1=2
    0x55fe3adf14d0 ---------- T 01190 ON F1 GOSUB 1310,1320
    0x55fe3adf19b0 ----------   01200 IF ABS(F)=1 THEN K=J9+1:GOTO 1290
    0x55fe3adf1a50 ----------   01210 NEXT K
    0x55fe3adf1b90 ----------   01220 PRINT "MISSED"
    0x55fe3adf1c00 ----------   01230 PRINT
    0x55fe3adf1c70 ---------A   01240 REM  MOVE WUMPUS
    0x55fe3adf1cf0 ----------   01250 GOSUB 1400
    0x55fe3adf2560 ---------A   01260 REM  AMMO CHECK
    0x55fe3adf2720 ----------   01270 IF A>0 THEN 1290
    0x55fe3adf28a0 ---------- T 01280 F=-1
    0x55fe3adf28f0 ---------- T 01290 RETURN
    0x55fe3adf29a0 ---------A   01300 REM  SEE IF ARROW IS AT L(1) OR L(2)
    0x55fe3adf2b50 ---------- T 01310 A9=P(K)
    0x55fe3adf2d90 ---------- T 01320 IF A9<>L(2) THEN 1370
    0x55fe3adf3010 ----------   01330 PRINT "AHA!  YOU GOT THE WUMPUS!!  HE WAS IN ROOM";L(2)
    0x55fe3adf3080 ----------   01340 PRINT
    0x55fe3adf31f0 ----------   01350 F=1
    0x55fe3adf3240 ----------   01360 RETURN
    0x55fe3adf34c0 ---------- T 01370 IF A9<>L(1) THEN RETURN
    0x55fe3adf3610 ----------   01380 PRINT "OUCH!  ARROW GOT YOU!!"
    0x55fe3adf3690 ----------   01390 GOTO 1280
    0x55fe3adf3700 --------FE G 01400 REM  MOVE WUMPUS ROUTINE
    0x55fe3adf38e0 --------FE G 01410 K=RND(4)
    0x55fe3adf3a90 --------FE   01420 IF K=4 THEN 1470
    0x55fe3adf3de0 --------FE   01430 L(2)=S(L(2),K)
    0x55fe3adf4010 --------FE   01440 IF L(2)<>L THEN 1470
    0x55fe3adf41b0 --------FE   01450 PRINT "TSK TSK TSK - THE WUMPUS GOT YOU!":PRINT
    0x55fe3adf4320 --------FE   01460 F=-1
    0x55fe3adf4370 --------FE T 01470 RETURN
    0x55fe3adf43f0 ---------G G 01480 REM  MOVE ROUTINE
    0x55fe3adf4580 ---------G   01490 F=0
    0x55fe3adf4670 ---------G T 01500 INPUT "WHERE TO";L
    0x55fe3adf46f0 ---------G   01510 PRINT
    0x55fe3adf48a0 ---------G   01520 IF L<1 THEN 1500
    0x55fe3adf4a60 ---------G   01530 IF L>20 THEN 1500
    0x55fe3adf4c90 ---------G   01540 FOR K=1 TO 3
    0x55fe3adf4d20 ---------G   01550 REM  CHECK IF LEGAL MOVE
    0x55fe3adf51c0 ---------G   01560 IF S(L(1),K)=L THEN K=4:GOTO 1620
    0x55fe3adf5260 ----------   01570 NEXT K
    0x55fe3adf54a0 ----------   01580 IF L=L(1) THEN 1620
    0x55fe3adf5600 ----------   01590 PRINT "NOT POSSIBLE - ";
    0x55fe3adf5680 ----------   01600 GOTO 1500
    0x55fe3adf56e0 ---------G   01610 REM  CHECK FOR HAZARDS
    0x55fe3adf58c0 ---------G T 01620 L(1)=L
    0x55fe3adf5930 ---------G   01630 REM  WUMPUS
    0x55fe3adf5b80 ---------G   01640 IF L<>L(2) THEN 1710
    0x55fe3adf5cd0 ---------G   01650 PRINT "... OOPS!  BUMPED A WUMPUS!"
    0x55fe3adf5d40 ---------G   01660 REM  MOVE WUMPUS
    0x55fe3adf5dc0 ---------G   01670 GOSUB 1410
    0x55fe3adf5f60 ---------G   01680 IF F=0 THEN 1710
    0x55fe3adf5fc0 ---------G   01690 RETURN
    0x55fe3adf6040 ---------G   01700 REM  PIT
    0x55fe3adf6480 ---------G T 01710 IF L<>L(3) THEN IF L<>L(4) THEN 1830
    0x55fe3adf6720 ----------   01720 CLS:P1=110
    0x55fe3adf6fe0 ----------   01730 PRINT CHR$(28);"Y";:GOSUB 5000:PRINT "Y";:GOSUB 5000:PRINT "Y":GOSUB 5000:P1=100:PRINT "      Y":GOSUB 5000
    0x55fe3adf7420 ----------   01740 P1=90:PRINT "         Y":GOSUB 5000:P1=80
    0x55fe3adf7870 ----------   01750 PRINT "          Y":GOSUB 5000:P1=70:PRINT "           Y":GOSUB 5000
    0x55fe3adf7df0 ----------   01760 PRINT TAB(11);"I";:GOSUB 5000:PRINT TAB(30);"FELL IN A PIT!!"
    0x55fe3adf85e0 ----------   01770 FOR I=1 TO 4:P1=70-I*10:PRINT TAB(11);"I":GOSUB 5000:NEXT I
    0x55fe3adf8e10 ----------   01780 FOR I=1 TO 2:P1=30-I*10:PRINT TAB(11);"E":GOSUB 5000:NEXT I
    0x55fe3adf9360 ----------   01790 FOR I=1 TO 18:PRINT TAB(11);".":GOSUB 5000:NEXT I
    0x55fe3adf94e0 ----------   01800 F=-1
    0x55fe3adf9530 ----------   01810 RETURN
    0x55fe3adf95b0 ---------A   01820 REM  BATS
    0x55fe3adf9a20 ----------   01830 IF L<>L(5) THEN IF L<>L(6) THEN 1880
    0x55fe3adf9b90 ----------   01840 PRINT "ZAP--SUPER BAT SNATCH!  ELSEWHEREVILLE FOR YOU!"
    0x55fe3adf9ec0 ----------   01850 FOR Q=1 TO 500:NEXT Q
    0x55fe3adfa0a0 ----------   01860 L=RND(20)
    0x55fe3adfa110 ----------   01870 GOTO 1620
    0x55fe3adfa150 ----------   01880 RETURN
    0x55fe3adfa1d0 ---------A   01890 REM  SELECT CAVE
    0x55fe3adfa3b0 ---------- T 01900 IF F3=1 THEN 1930
    0x55fe3adfa6a0 ----------   01910 PRINT @ 896,CHR$(30):PRINT @ 960,CHR$(30);
    0x55fe3adfa800 ----------   01920 PRINT @ 901,"";
    0x55fe3adfa980 ---------- T 01930 INPUT "CAVE # (0-6)";N
    0x55fe3adfacd0 ----------   01940 IF N>=0 AND N<=6 THEN 1970
    0x55fe3adfaee0 ----------   01950 IF F3=1 THEN PRINT
    0x55fe3adfaf60 ----------   01960 GOTO 1900
    0x55fe3adfaff0 ---------- T 01970 CLS
    0x55fe3adfb410 ----------   01975 PRINT CHR$(28);:IF N<6 THEN PRINT "THE WUMPUS IS HIDING."
    0x55fe3adfb5d0 ----------   01980 IF N=6 THEN 2060
    0x55fe3adfb650 ----------   01990 RESTORE
    0x55fe3adfb7f0 ----------   02000 IF N=0 THEN 2040
    0x55fe3adfbb30 ----------   02010 FOR X9=1 TO N*60
    0x55fe3adfbc90 ----------   02020 READ I9
    0x55fe3adfbd30 ----------   02030 NEXT X9
    0x55fe3adfbdb0 ---------- T 02040 GOSUB 2230
    0x55fe3adfbe10 ----------   02050 GOTO 2070
    0x55fe3adfbe70 ---------- T 02060 GOSUB 2080
    0x55fe3adfbeb0 ---------- T 02070 RETURN
    0x55fe3adfbf40 ---------H G 02080 REM  INPUT OWN CAVE
    0x55fe3adfc160 ---------H   02090 FOR J=1 TO 20
    0x55fe3adfc350 ---------H T 02100 PRINT "ROOM #";J;
    0x55fe3adfc560 ---------H   02110 INPUT "IS CONNECTED TO :";S(J,1)
    0x55fe3adfc940 ---------H   02120 INPUT "AND";S(J,2):INPUT "AND";S(J,3)
    0x55fe3adfc9c0 ---------H   02130 PRINT
    0x55fe3adfcbb0 ---------H   02140 F5=0
    0x55fe3adfcde0 ---------H   02150 FOR K=1 TO 3
    0x55fe3adfd2f0 ---------H   02160 IF S(J,K)>0 THEN IF S(J,K)<21 THEN 2190
    0x55fe3adfd450 ----------   02170 PRINT "ERROR** ENTER ROOM NUMBERS FROM 1 TO 20 ONLY!!"
    0x55fe3adfd5c0 ----------   02180 F5=1
    0x55fe3adfd670 ----------   02190 NEXT K
    0x55fe3adfd830 ----------   02200 IF F5=1 THEN 2100
    0x55fe3adfd8f0 ----------   02210 NEXT J
    0x55fe3adfd950 ----------   02220 RETURN
    0x55fe3adfd9d0 ---------I G 02230 REM  INPUT CAVE
    0x55fe3adfdbf0 ---------I   02240 FOR J=1 TO 20
    0x55fe3adfde10 ---------I   02250 FOR K=1 TO 3
    0x55fe3adfdfb0 ---------I   02260 READ S(J,K)
    0x55fe3adfe050 ---------I   02270 NEXT K
    0x55fe3adfe110 ---------I   02280 NEXT J
    0x55fe3adfe170 ---------I   02290 RETURN
    0x55fe3adfe2e0 ---------A T 02300 PRINT @ 401,"THANK YOU FOR PLAYING WITH ME!"
    0x55fe3adfe350 ---------A   02310 RUN"MENU"
    0x55fe3adfe5b0 ---------A   02320 PRINT:PRINT"TO LOAD ANOTHER PROGRAM, TYPE 'CLOAD'.":PRINT:END
    0x55fe3adfe630 ---------A   02330 REM  DODECAHEDRON
    0x55fe3adff790 ---------A   02340 DATA 2,5,8,1,3,10,2,4,12,3,5,14,1,4,6,5,7,15,6,8,17,1
    0x55fe3ae00670 ---------A   02350 DATA 7,8,9,10,18,2,9,11,10,12,19,3,11,13,12,14,20,4,13
    0x55fe3ae01520 ---------A   02360 DATA 15,6,14,16,15,17,20,7,16,18,9,17,19,11,18,20,13,16,19
    0x55fe3ae01590 ---------A   02370 REM  MOBIUS STRIP
    0x55fe3ae027b0 ---------A   02380 DATA 20,2,3,19,1,4,1,4,5,2,3,6,3,6,7,4,5,8,5,8,9,6,7
    0x55fe3ae035d0 ---------A   02390 DATA 10,7,10,11,8,9,12,9,12,13,10,11,14,11,14,15,12,13
    0x55fe3ae04490 ---------A   02400 DATA 16,12,16,17,14,15,18,15,18,19,16,17,20,2,17,20,1,18,19
    0x55fe3ae04500 ---------A   02410 REM  STRING OF BEADS
    0x55fe3ae05720 ---------A   02420 DATA 2,3,20,1,3,4,1,2,4,2,3,5,4,6,7,5,7,8,5,6,8,6,7
    0x55fe3ae06600 ---------A   02430 DATA 9,8,10,11,9,11,12,9,10,12,10,11,13,12,14,15,13,15,1
    0x55fe3ae074b0 ---------A   02440 DATA 6,13,14,16,14,15,17,16,18,19,17,19,20,17,18,20,1,18,19
    0x55fe3ae07520 ---------A   02450 REM  HEX NETWORK
    0x55fe3ae085c0 ---------A   02460 DATA 6,10,16,6,7,17,7,8,18,8,9,19,9,10,20,1,2,15,2,3,1
    0x55fe3ae09560 ---------A   02470 DATA 1,3,4,12,4,5,13,1,5,14,7,16,20,8,16,17,9,17,18,10
    0x55fe3ae0a4e0 ---------A   02480 DATA 18,19,6,19,20,1,11,12,2,12,13,3,13,14,4,14,15,5,11,15
    0x55fe3ae0a560 ---------A   02490 REM  DENDRITE W/ DEGENERACIES
    0x55fe3ae0b780 ---------A   02500 DATA 1,1,5,2,2,5,3,3,6,4,4,6,1,2,7,3,4,7,5,6,10,8,9
    0x55fe3ae0c660 ---------A   02510 DATA 9,8,8,10,7,9,11,10,13,14,12,13,13,11,12,12,11,15,16
    0x55fe3ae0d460 ---------A   02520 DATA 14,17,18,14,19,20,15,17,17,15,18,18,16,19,19,16,20,20
    0x55fe3adf1d50 ---------A   02530 REM  ONE WAY LATTICE
    0x55fe3ae0ee30 ---------A   02540 DATA 5,4,8,1,5,6,2,6,7,3,7,8,8,9,12,5,9,10,6,10,11,7
    0x55fe3ae0fc50 ---------A   02550 DATA 11,12,12,13,16,9,13,14,10,14,15,11,15,16,16,17,20,13
    0x55fe3ae10bc0 ---------A   02560 DATA 17,18,14,18,19,15,19,20,1,4,20,1,2,17,2,3,18,3,4,19
    0x55fe3ae10c30 ---------J   02570 REM  INSTRUCTIONS
    0x55fe3ae10cf0 ---------J G 02580 CLS
    0x55fe3ae10e70 ---------J   02590 PRINT "  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3"
    0x55fe3ae11150 ---------J   02600 PRINT "TUNNELS LEADING TO OTHER ROOMS.":PRINT:PRINT "HAZARDS:"
    0x55fe3ae11330 ---------J   02610 PRINT:PRINT "BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF"
    0x55fe3ae11510 ---------J   02620 PRINT "YOU GO IN THERE, YOU FALL INTO THE PIT AND LOSE!":PRINT
    0x55fe3ae116b0 ---------J   02630 PRINT "SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,"
    0x55fe3ae11840 ---------J   02640 PRINT "A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE"
    0x55fe3ae119e0 ---------J   02650 PRINT "CAVE WHERE YOU COULD RUN INTO THE...":GOSUB 3410
    0x55fe3ae11b90 ---------J   02660 PRINT "WUMPUS:":PRINT
    0x55fe3ae11d30 ---------J   02670 PRINT "THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET"
    0x55fe3ae11ed0 ---------J   02680 PRINT "AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS"
    0x55fe3ae12070 ---------J   02690 PRINT "WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW."
    0x55fe3ae12200 ---------J   02700 PRINT "IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL."
    0x55fe3ae12370 ---------J   02710 PRINT "BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!"
    0x55fe3ae12570 ---------J   02720 PRINT:PRINT "YOU:":PRINT
    0x55fe3ae12700 ---------J   02730 PRINT "EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW."
    0x55fe3ae12850 ---------J   02740 PRINT "MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL)."
    0x55fe3ae128f0 ---------J   02750 GOSUB 3410
    0x55fe3ae12a80 ---------J   02760 PRINT "SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT."
    0x55fe3ae12c20 ---------J   02770 PRINT "  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE"
    0x55fe3ae12dc0 ---------J   02780 PRINT "  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO"
    0x55fe3ae12f30 ---------J   02790 PRINT "  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF"
    0x55fe3ae130f0 ---------J   02800 PRINT "  OCCURRENCE.":PRINT
    0x55fe3ae13290 ---------J   02810 PRINT " EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10"
    0x55fe3ae13420 ---------J   02820 PRINT "  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO"
    0x55fe3ae135c0 ---------J   02830 PRINT "  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS"
    0x55fe3ae13760 ---------J   02840 PRINT "  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY"
    0x55fe3ae138f0 ---------J   02850 PRINT "  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS"
    0x55fe3ae13ad0 ---------J   02860 PRINT "  PROCESS UNTIL 4 ROOMS HAVE BEEN ENTERED.":GOSUB 3410
    0x55fe3ae13c60 ---------J   02870 PRINT " NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING"
    0x55fe3ae13e00 ---------J   02880 PRINT "  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE"
    0x55fe3ae13fa0 ---------J   02890 PRINT "  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED"
    0x55fe3ae14130 ---------J   02900 PRINT "  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING"
    0x55fe3ae142d0 ---------J   02910 PRINT "  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW" 
    0x55fe3ae14470 ---------J   02920 PRINT "  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT"
    0x55fe3ae14600 ---------J   02930 PRINT "  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS."
    0x55fe3ae147c0 ---------J   02940 PRINT:PRINT "IF THE ARROW HITS THE WUMPUS, YOU WIN."
    0x55fe3ae14920 ---------J   02950 PRINT "IF THE ARROW HITS YOU, YOU LOSE."
    0x55fe3ae14b70 ---------J   02960 GOSUB 3410:PRINT:PRINT "WARNINGS:":PRINT
    0x55fe3ae14d10 ---------J   02970 PRINT "WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,"
    0x55fe3ae14fe0 ---------J   02980 PRINT "THE COMPUTER SAYS:":PRINT:PRINT "WUMPUS - 'I SMELL A WUMPUS'"
    0x55fe3ae152b0 ---------J   02990 PRINT "BAT - 'BATS NEARBY'":PRINT "PIT - 'I FEEL A DRAFT'":PRINT
    0x55fe3ae15440 ---------J   03000 PRINT "BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!"
    0x55fe3ae15680 ---------J   03010 PRINT @ 910,"";:INPUT "WOULD YOU LIKE THE DESCRIPTION OF THE CAVES";Z$
    0x55fe3ae15710 ---------J   03020 CLS
    0x55fe3ae15a20 ---------J   03030 IF LEFT$(Z$,1)="N" THEN RETURN
    0x55fe3ae15bf0 ----------   03040 PRINT "THE CAVES ARE:":PRINT
    0x55fe3ae15d90 ----------   03050 PRINT "0 - DODECAHEDRON:  THE ROOMS OF THIS CAVE ARE ON A 12-SIDED"
    0x55fe3ae15f30 ----------   03060 PRINT "    OBJECT, EACH SIDE FORMING A PENTAGON.  THE ROOMS ARE AT THE"
    0x55fe3ae160b0 ----------   03070 PRINT "    CORNERS OF THE PENTAGONS, EACH ROOM HAVING TUNNELS LEADING"
    0x55fe3ae16270 ----------   03080 PRINT "    TO 3 OTHER ROOMS.":PRINT
    0x55fe3ae16410 ----------   03090 PRINT "1 - MOBIUS STRIP:  THIS CAVE IS TWO ROOMS WIDE AND 10 ROOMS"
    0x55fe3ae16590 ----------   03100 PRINT "    AROUND (LIKE A BELT).  YOU WILL NOTICE THERE IS A HALF-"
    0x55fe3ae16750 ----------   03110 PRINT "    TWIST SOMEWHERES.":PRINT
    0x55fe3ae168f0 ----------   03120 PRINT "2 - STRING OF BEADS:  FIVE BEADS IN A CIRCLE.  EACH BEAD IS A"
    0x55fe3ae16a90 ----------   03130 PRINT "    DIAMOND WITH A VERTICAL CROSS-BAR.  THE RIGHT AND LEFT"
    0x55fe3ae16c00 ----------   03140 PRINT "    CORNERS LEAD TO NEIGHBORING BEADS.  (THIS ONE IS DIFFICULT"
    0x55fe3ae16dc0 ----------   03150 PRINT "    TO PLAY).":GOSUB 3410
    0x55fe3ae16f50 ----------   03160 PRINT "3 - HEX NETWORK:  IMAGINE A HEX TILE FLOOR.  TAKE A RECTANGLE"
    0x55fe3ae170f0 ----------   03170 PRINT "    WITH 20 POINTS (INTERSECTIONS) INSIDE (4X5).  JOIN RIGHT"
    0x55fe3ae17270 ----------   03180 PRINT "    AND LEFT SIDES TO MAKE A CYLINDER.  THEN JOIN TOP AND BOT-"
    0x55fe3ae173d0 ----------   03190 PRINT "    TOM TO FORM A TORUS (DOUGHNUT)."
    0x55fe3ae175a0 ----------   03200 PRINT "    HAVE FUN IMAGINING THIS ONE!":PRINT
    0x55fe3ae17730 ----------   03210 PRINT "CAVES 0-3 ARE REGULAR IN THE SENSE THAT EACH ROOM GOES TO THREE"
    0x55fe3ae178a0 ----------   03220 PRINT "OTHER ROOMS AND THE TUNNELS ALLOW TWO-WAY TRAFFIC."
    0x55fe3ae17a70 ----------   03230 PRINT "HERE ARE SOME IRREGULAR CAVES:":PRINT
    0x55fe3ae17c10 ----------   03240 PRINT "4 - DENDRITE WITH DEGENERACIES:  PULL A PLANT FROM THE GROUND."
    0x55fe3ae17db0 ----------   03250 PRINT "    THE ROOTS AND BRANCHES FROM A DENDRITE - IE, THERE ARE NO"
    0x55fe3ae17f50 ----------   03260 PRINT "    LOOPING PATHS.  DEGENERACY MEANS A) SOME ROOMS CONNECT TO"
    0x55fe3ae180e0 ----------   03270 PRINT "    THEMSELVES OR B) THAT TWO ROOMS HAVE MORE THAN ONE TUNNEL"
    0x55fe3ae18230 ----------   03280 PRINT "    BETWEEN THEM IE, 12 HAS TWO TUNNELS TO 13."
    0x55fe3ae182e0 ----------   03290 GOSUB 3410
    0x55fe3ae18470 ----------   03300 PRINT "5 - ONE WAY LATTICE:  HERE ALL TUNNELS GO ONE WAY ONLY.  TO"
    0x55fe3ae18660 ----------   03310 PRINT "    RETURN, YOU MUST GO AROUND THE CAVE (ABOUT 5 MOVES).":PRINT
    0x55fe3ae187f0 ----------   03320 PRINT "6 - ENTER YOUR OWN CAVE:  THE COMPUTER WILL ASK YOU FOR THE"
    0x55fe3ae189a0 ----------   03330 PRINT "    ROOMS NEXT TO EACH ROOM IN THE CAVE.":PRINT
    0x55fe3ae18b60 ----------   03340 PRINT "   FOR EXAMPLE:":PRINT
    0x55fe3ae18d00 ----------   03350 PRINT "    TO SET ROOM #1 UP WITH TUNNELS GOING TO ROOMS 2, 3 AND 4"
    0x55fe3ae18e70 ----------   03360 PRINT "    TYPE '2' (ENTER) '3' (ENTER) '4' (ENTER) WHEN PROMPTED"
    0x55fe3ae18fc0 ----------   03370 PRINT "    WITH 'ROOM #1'"
    0x55fe3ae19270 ----------   03380 PRINT:PRINT TAB(24);"HAPPY HUNTING!!!"
    0x55fe3ae194c0 ----------   03390 PRINT TAB(27);">>>------->"
    0x55fe3ae19550 ----------   03400 GOSUB 3410:RETURN
    0x55fe3ae19700 ---------K G 03410 PRINT @ 975,"PRESS 'ENTER' TO CONTINUE ";
    0x55fe3ae19b90 ---------K T 03415 Z$=INKEY$:Z$=Z$:IF Z$="" THEN 3415 
    0x55fe3ae19eb0 ---------K   03420 IF ASC(Z$)<>13 THEN 3415 ELSE CLS:RETURN
    0x55fe3ae1a180 ---------L G 05000 FOR Q=1 TO P1:NEXT Q:RETURN
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
     01310      01190T
     01320      01190T
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

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x55fe3ade0d10   0x55fe3ade0d10   0x55fe3ae1a180   0x55fe3ae10bc0 
   B) 0x55fe3adebee0   0x55fe3adebee0   0x55fe3adedcb0   0x55fe3adedcb0 
   C) 0x55fe3adedd30   0x55fe3adedd30   0x55fe3adee370   0x55fe3adee830 
   D) 0x55fe3adee8c0   0x55fe3adee8c0   0x000000000000   0x55fe3adef7f0 
   E) 0x55fe3adf3700   0x55fe3adf3700   0x55fe3adf4370   0x55fe3adf4370 
   F) 0x55fe3adf3700   0x55fe3adf38e0   0x55fe3adf4370   0x55fe3adf4370 
   G) 0x55fe3adf43f0   0x55fe3adf43f0   0x55fe3adf5fc0   0x55fe3adf6480 
   H) 0x55fe3adfbf40   0x55fe3adfbf40   0x000000000000   0x55fe3adfd2f0 
   I) 0x55fe3adfd9d0   0x55fe3adfd9d0   0x55fe3adfe170   0x55fe3adfe170 
   J) 0x55fe3ae10c30   0x55fe3ae10cf0   0x000000000000   0x55fe3ae15a20 
   K) 0x55fe3ae19700   0x55fe3ae19700   0x55fe3ae19eb0   0x55fe3ae19eb0 
   L) 0x55fe3ae1a180   0x55fe3ae1a180   0x55fe3ae1a180   0x55fe3ae1a180 

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!
    NOTE: Routine G overlaps, or is tangled with, routine A!
    NOTE: Routine H overlaps, or is tangled with, routine A!
    NOTE: Routine I overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine E!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     04550 - 10000    5460 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/wumpus/basic/wumpus2a.bas'
 *
    A              Integer 
    A9             Integer 
    ABS   Function Integer     args=1, int   
    ASC   Function Integer     args=1, char* 
    CHR$  Function String      args=1, int   
    F              Integer 
    F1             Integer 
    F3             Integer 
    F5             Integer 
    I              Integer 
    I$    Array    String      {0,7} 
    I$             String  
    I9             Integer 
    INKEY$          String  
    J              Integer 
    J9             Integer 
    K              Integer 
    K1             Integer 
    L     Array    Integer     {0,7} 
    L              Integer 
    LEFT$ Function String      args=2, char* int   
    M     Array    Integer     {0,7} 
    N              Integer 
    O              Integer 
    P     Array    Integer     {0,6} 
    P1             Integer 
    Q              Integer 
    RND   Function Integer     args=1, int   
    S     Array    Integer     {0,21} {0,4} 
    TAB   Function String      args=1, 
    X9             Integer 
    Z$             String  

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/wumpus/basic/wumpus2a.bas: 
 *
                   +---------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |         | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |         | |
        Address    v         v v Original BASIC statement
    -------------- ----------- - ------------------------------------------------------------------------------
    0x55fe3ade0d10 ---------A T 01000 REM NOTE: Basic language type forced to be:
    0x55fe3ade0e00 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x55fe3ade0ee0 ---------A   01020 REM  WUMPUS II  FROM THE LAWRENCE HALL OF SCIENCE
    0x55fe3ade0fd0 ---------A   01030 REM  TRANSFERED TO SOL EBASIC BY DAVID FOX
    0x55fe3ade10a0 ---------A   01040 REM  REVISED FOR TRS-80 LEVEL II BASIC BY DOUG BENEDICT
    0x55fe3ade1240 ---------A   01050 CLS:PRINT@282,"WUMPUS  II"
    0x55fe3ade1360 ---------A   01060 PRINT@409,"COPYRIGHT BY"
    0x55fe3ade14a0 ---------A   01070 PRINT@470,"CREATIVE COMPUTING"
    0x55fe3ade15f0 ---------A   01080 PRINT@536,"P.O. BOX 789-M"
    0x55fe3ade1110 ---------A   01090 PRINT@593,"MORRISTOWN, NEW JERSEY 07960"
    0x55fe3ade1ab0 ---------A   01100 FORI=1TO2000:NEXTI
    0x55fe3ade65c0 ---------A   01110 DIM I$(6),L(6),M(6),P(5),S(20,3)
    0x55fe3ade6770 ---------A   01120 CLS:PRINT @ 390,"";
    0x55fe3ade68f0 ---------A   01130 PRINT "* * *  T H E  G A M E  O F  W U M P U S  II  * * *"
    0x55fe3ade6bb0 ---------A T 01140 PRINT @ 896,"";:INPUT "WOULD YOU LIKE INSTRUCTIONS";Z$
    0x55fe3ade6f20 ---------A   01150 IF LEFT$(Z$,1)="N" THEN 1190
    0x55fe3ade7200 ---------A   01160 IF LEFT$(Z$,1)<>"Y" THEN 1140
    0x55fe3ade7570 ---------A   01170 F3=1:GOSUB 4050
    0x55fe3ade75e0 ---------A   01180 REM  CHOOSE AND SET UP CAVE
    0x55fe3ade77b0 ---------A T 01190 GOSUB 1890:F3=1
    0x55fe3ade7830 ---------A   01200 REM  LOCATE L ARRAY ITEMS
    0x55fe3ade78e0 ---------A   01210 REM  1=YOU,2=WUMPUS,3&4=PITS,5&6=BATS
    0x55fe3ade7b80 ---------A T 01220 FOR J=1 TO 6
    0x55fe3ade7e40 ---------A   01230 L(J)=RND(20)
    0x55fe3ade8030 ---------A   01240 M(J)=L(J)
    0x55fe3ade80e0 ---------A   01250 NEXT J
    0x55fe3ade81a0 ---------A   01260 REM  CHECK FOR CROSSOVERS (IE L(1)=L(2),ETC)
    0x55fe3ade83c0 ---------A   01270 FOR J=1 TO 6
    0x55fe3ade8620 ---------A   01280 FOR K=J TO 6
    0x55fe3ade87c0 ---------A   01290 IF J=K THEN 1310
    0x55fe3ade8d00 ---------A   01300 IF L(J)=L(K) THEN J=7:K=7:GOTO 1220
    0x55fe3ade8da0 ---------A T 01310 NEXT K
    0x55fe3ade8e60 ---------A   01320 NEXT J
    0x55fe3ade90f0 ---------A   01330 REM  SET # ARROWS
    0x55fe3ade92f0 ---------A T 01340 A=5
    0x55fe3ade9540 ---------A   01350 L=L(1)
    0x55fe3ade95b0 ---------A   01360 REM  RUN THE GAME
    0x55fe3ade9650 ---------A   01370 REM  HAZARD WARNINGS & LOCATION
    0x55fe3ade96e0 ---------A T 01380 GOSUB 3180
    0x55fe3ade9740 ---------A   01390 REM  MOVE OR SHOOT
    0x55fe3ade97c0 ---------A T 01400 GOSUB 3360
    0x55fe3ade9a40 ---------A   01410 ON O GOTO 1430,1470
    0x55fe3ade9ab0 ---------A   01420 REM  SHOOT
    0x55fe3ade9b30 ---------A T 01430 GOSUB 3470
    0x55fe3ade9d50 ---------A   01440 IF F=0 THEN 1400
    0x55fe3ade9dd0 ---------A   01450 GOTO 1490
    0x55fe3ade9e30 ---------A   01460 REM  MOVE
    0x55fe3ade9eb0 ---------A T 01470 GOSUB 3650
    0x55fe3adea050 ---------A   01480 IF F=0 THEN 1380
    0x55fe3adea210 ---------A T 01490 IF F>0 THEN 1540
    0x55fe3adea290 ---------A T 01500 REM  LOSE
    0x55fe3adea420 ---------A   01510 PRINT "HA HA HA - YOU LOSE!     ";
    0x55fe3adea490 ---------A   01520 GOTO 1560
    0x55fe3adea4f0 ---------A   01530 REM  WIN
    0x55fe3adea680 ---------A T 01540 PRINT "HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!"
    0x55fe3adea6f0 ---------A   01550 PRINT
    0x55fe3adea900 ---------A T 01560 FOR J=1 TO 6
    0x55fe3adeab00 ---------A   01570 L(J)=M(J)
    0x55fe3adeabb0 ---------A   01580 NEXT J
    0x55fe3adeadb0 ---------A   01590 INPUT "WANT TO PLAY AGAIN";I$:CLS
    0x55fe3adeb070 ---------A   01600 IF LEFT$(I$,1)<>"Y" THEN 2540
    0x55fe3adeb100 ---------A   01610 PRINT
    0x55fe3adeb1f0 ---------A T 01620 INPUT "SAME SET-UP";I$
    0x55fe3adeb280 ---------A   01630 PRINT
    0x55fe3adeb560 ---------A   01640 IF LEFT$(I$,1)="Y" THEN 1340
    0x55fe3adeba70 ---------A   01650 INPUT "SAME CAVE";I$
    0x55fe3adebb00 ---------A   01660 PRINT
    0x55fe3adebdd0 ---------A   01670 IF LEFT$(I$,1)="Y" THEN 1220
    0x55fe3adebe70 ---------A   01680 GOTO 1190
    0x55fe3adef950 ----------   01690 PRINT "   ENTER ROOM NUMBERS FROM 1 TO 20 ONLY."
    0x55fe3adef9c0 ----------   01700 GOTO 1000
    0x55fe3adefb00 ----------   01710 PRINT "  ";
    0x55fe3adefbb0 ----------   01720 NEXT K
    0x55fe3adefc30 ----------   01730 PRINT
    0x55fe3adefca0 ---------A   01740 REM  SHOOT ARROW
    0x55fe3adefec0 ----------   01750 A=A-1
    0x55fe3adf0110 ----------   01760 A9=L(1)
    0x55fe3adf02e0 ----------   01770 FOR K=1 TO J9
    0x55fe3adf04e0 ----------   01780 F1=0
    0x55fe3adf0780 ----------   01790 FOR K1=1 TO 3
    0x55fe3adf0b70 ----------   01800 IF S(A9,K1)=P(K) THEN F1=1
    0x55fe3adf0c30 ----------   01810 NEXT K1
    0x55fe3adf0e00 ----------   01820 IF F1=1 THEN 1860
    0x55fe3adf0e90 ---------A   01830 REM  NO TUNNEL FOR ARROW
    0x55fe3adf1130 ----------   01840 A9=S(A9,RND(3))
    0x55fe3adf12b0 ----------   01850 F1=2
    0x55fe3adf14d0 ---------- T 01860 ON F1 GOSUB 1980,1990
    0x55fe3adf19b0 ----------   01870 IF ABS(F)=1 THEN K=J9+1:GOTO 1960
    0x55fe3adf1a50 ----------   01880 NEXT K
    0x55fe3adf1b90 ----------   01890 PRINT "MISSED"
    0x55fe3adf1c00 ----------   01900 PRINT
    0x55fe3adf1c70 ---------A   01910 REM  MOVE WUMPUS
    0x55fe3adf1cf0 ----------   01920 GOSUB 3560
    0x55fe3adf2560 ---------A   01930 REM  AMMO CHECK
    0x55fe3adf2720 ----------   01940 IF A>0 THEN 1960
    0x55fe3adf28a0 ---------- T 01950 F=-1
    0x55fe3adf28f0 ---------- T 01960 RETURN
    0x55fe3adf29a0 ---------A   01970 REM  SEE IF ARROW IS AT L(1) OR L(2)
    0x55fe3adf2b50 ---------- T 01980 A9=P(K)
    0x55fe3adf2d90 ---------- T 01990 IF A9<>L(2) THEN 2040
    0x55fe3adf3010 ----------   02000 PRINT "AHA!  YOU GOT THE WUMPUS!!  HE WAS IN ROOM";L(2)
    0x55fe3adf3080 ----------   02010 PRINT
    0x55fe3adf31f0 ----------   02020 F=1
    0x55fe3adf3240 ----------   02030 RETURN
    0x55fe3adf34c0 ---------- T 02040 IF A9<>L(1) THEN RETURN
    0x55fe3adf3610 ----------   02050 PRINT "OUCH!  ARROW GOT YOU!!"
    0x55fe3adf3690 ----------   02060 GOTO 1950
    0x55fe3adf5260 ----------   02070 NEXT K
    0x55fe3adf54a0 ----------   02080 IF L=L(1) THEN 1620
    0x55fe3adf5600 ----------   02090 PRINT "NOT POSSIBLE - ";
    0x55fe3adf5680 ---------- T 02100 GOTO 1500
    0x55fe3adf6720 ----------   02110 CLS:P1=110
    0x55fe3adf6fe0 ----------   02120 PRINT CHR$(28);"Y";:GOSUB 4540:PRINT "Y";:GOSUB 5000:PRINT "Y":GOSUB 5000:P1=100:PRINT "      Y":GOSUB 5000
    0x55fe3adf7420 ----------   02130 P1=90:PRINT "         Y":GOSUB 5000:P1=80
    0x55fe3adf7870 ----------   02140 PRINT "          Y":GOSUB 4540:P1=70:PRINT "           Y":GOSUB 5000
    0x55fe3adf7df0 ----------   02150 PRINT TAB(11);"I";:GOSUB 5000:PRINT TAB(30);"FELL IN A PIT!!"
    0x55fe3adf85e0 ----------   02160 FOR I=1 TO 4:P1=70-I*10:PRINT TAB(11);"I":GOSUB 5000:NEXT I
    0x55fe3adf8e10 ----------   02170 FOR I=1 TO 2:P1=30-I*10:PRINT TAB(11);"E":GOSUB 5000:NEXT I
    0x55fe3adf9360 ----------   02180 FOR I=1 TO 18:PRINT TAB(11);".":GOSUB 5000:NEXT I
    0x55fe3adf94e0 ----------   02190 F=-1
    0x55fe3adf9530 ----------   02200 RETURN
    0x55fe3adf95b0 ---------A   02210 REM  BATS
    0x55fe3adf9a20 ----------   02220 IF L<>L(5) THEN IF L<>L(6) THEN 1880
    0x55fe3adf9b90 ----------   02230 PRINT "ZAP--SUPER BAT SNATCH!  ELSEWHEREVILLE FOR YOU!"
    0x55fe3adf9ec0 ----------   02240 FOR Q=1 TO 500:NEXT Q
    0x55fe3adfa0a0 ----------   02250 L=RND(20)
    0x55fe3adfa110 ----------   02260 GOTO 1620
    0x55fe3adfa150 ----------   02270 RETURN
    0x55fe3adfa1d0 ---------A   02280 REM  SELECT CAVE
    0x55fe3adfa3b0 ---------- T 02290 IF F3=1 THEN 2320
    0x55fe3adfa6a0 ----------   02300 PRINT @ 896,CHR$(30):PRINT @ 960,CHR$(30);
    0x55fe3adfa800 ----------   02310 PRINT @ 901,"";
    0x55fe3adfa980 ---------- T 02320 INPUT "CAVE # (0-6)";N
    0x55fe3adfacd0 ----------   02330 IF N>=0 AND N<=6 THEN 2360
    0x55fe3adfaee0 ----------   02340 IF F3=1 THEN PRINT
    0x55fe3adfaf60 ----------   02350 GOTO 2290
    0x55fe3adfaff0 ---------- T 02360 CLS
    0x55fe3adfb410 ----------   02370 PRINT CHR$(28);:IF N<6 THEN PRINT "THE WUMPUS IS HIDING."
    0x55fe3adfb5d0 ----------   02380 IF N=6 THEN 2460
    0x55fe3adfb650 ----------   02390 RESTORE
    0x55fe3adfb7f0 ----------   02400 IF N=0 THEN 2440
    0x55fe3adfbb30 ----------   02410 FOR X9=1 TO N*60
    0x55fe3adfbc90 ----------   02420 READ I9
    0x55fe3adfbd30 ----------   02430 NEXT X9
    0x55fe3adfbdb0 ---------- T 02440 GOSUB 3960
    0x55fe3adfbe10 ----------   02450 GOTO 2470
    0x55fe3adfbe70 ---------- T 02460 GOSUB 3880
    0x55fe3adfbeb0 ---------- T 02470 RETURN
    0x55fe3adfd450 ----------   02480 PRINT "ERROR** ENTER ROOM NUMBERS FROM 1 TO 20 ONLY!!"
    0x55fe3adfd5c0 ----------   02490 F5=1
    0x55fe3adfd670 ----------   02500 NEXT K
    0x55fe3adfd830 ----------   02510 IF F5=1 THEN 2100
    0x55fe3adfd8f0 ----------   02520 NEXT J
    0x55fe3adfd950 ----------   02530 RETURN
    0x55fe3adfe2e0 ---------A T 02540 PRINT @ 401,"THANK YOU FOR PLAYING WITH ME!"
    0x55fe3adfe350 ---------A   02550 RUN"MENU"
    0x55fe3adfe5b0 ---------A   02560 PRINT:PRINT"TO LOAD ANOTHER PROGRAM, TYPE 'CLOAD'.":PRINT:END
    0x55fe3adfe630 ---------A   02570 REM  DODECAHEDRON
    0x55fe3adff790 ---------A   02580 DATA 2,5,8,1,3,10,2,4,12,3,5,14,1,4,6,5,7,15,6,8,17,1
    0x55fe3ae00670 ---------A   02590 DATA 7,8,9,10,18,2,9,11,10,12,19,3,11,13,12,14,20,4,13
    0x55fe3ae01520 ---------A   02600 DATA 15,6,14,16,15,17,20,7,16,18,9,17,19,11,18,20,13,16,19
    0x55fe3ae01590 ---------A   02610 REM  MOBIUS STRIP
    0x55fe3ae027b0 ---------A   02620 DATA 20,2,3,19,1,4,1,4,5,2,3,6,3,6,7,4,5,8,5,8,9,6,7
    0x55fe3ae035d0 ---------A   02630 DATA 10,7,10,11,8,9,12,9,12,13,10,11,14,11,14,15,12,13
    0x55fe3ae04490 ---------A   02640 DATA 16,12,16,17,14,15,18,15,18,19,16,17,20,2,17,20,1,18,19
    0x55fe3ae04500 ---------A   02650 REM  STRING OF BEADS
    0x55fe3ae05720 ---------A   02660 DATA 2,3,20,1,3,4,1,2,4,2,3,5,4,6,7,5,7,8,5,6,8,6,7
    0x55fe3ae06600 ---------A   02670 DATA 9,8,10,11,9,11,12,9,10,12,10,11,13,12,14,15,13,15,1
    0x55fe3ae074b0 ---------A   02680 DATA 6,13,14,16,14,15,17,16,18,19,17,19,20,17,18,20,1,18,19
    0x55fe3ae07520 ---------A   02690 REM  HEX NETWORK
    0x55fe3ae085c0 ---------A   02700 DATA 6,10,16,6,7,17,7,8,18,8,9,19,9,10,20,1,2,15,2,3,1
    0x55fe3ae09560 ---------A   02710 DATA 1,3,4,12,4,5,13,1,5,14,7,16,20,8,16,17,9,17,18,10
    0x55fe3ae0a4e0 ---------A   02720 DATA 18,19,6,19,20,1,11,12,2,12,13,3,13,14,4,14,15,5,11,15
    0x55fe3ae0a560 ---------A   02730 REM  DENDRITE W/ DEGENERACIES
    0x55fe3ae0b780 ---------A   02740 DATA 1,1,5,2,2,5,3,3,6,4,4,6,1,2,7,3,4,7,5,6,10,8,9
    0x55fe3ae0c660 ---------A   02750 DATA 9,8,8,10,7,9,11,10,13,14,12,13,13,11,12,12,11,15,16
    0x55fe3ae0d460 ---------A   02760 DATA 14,17,18,14,19,20,15,17,17,15,18,18,16,19,19,16,20,20
    0x55fe3adf1d50 ---------A   02770 REM  ONE WAY LATTICE
    0x55fe3ae0ee30 ---------A   02780 DATA 5,4,8,1,5,6,2,6,7,3,7,8,8,9,12,5,9,10,6,10,11,7
    0x55fe3ae0fc50 ---------A   02790 DATA 11,12,12,13,16,9,13,14,10,14,15,11,15,16,16,17,20,13
    0x55fe3ae10bc0 ---------A   02800 DATA 17,18,14,18,19,15,19,20,1,4,20,1,2,17,2,3,18,3,4,19
    0x55fe3ae15bf0 ----------   02810 PRINT "THE CAVES ARE:":PRINT
    0x55fe3ae15d90 ----------   02820 PRINT "0 - DODECAHEDRON:  THE ROOMS OF THIS CAVE ARE ON A 12-SIDED"
    0x55fe3ae15f30 ----------   02830 PRINT "    OBJECT, EACH SIDE FORMING A PENTAGON.  THE ROOMS ARE AT THE"
    0x55fe3ae160b0 ----------   02840 PRINT "    CORNERS OF THE PENTAGONS, EACH ROOM HAVING TUNNELS LEADING"
    0x55fe3ae16270 ----------   02850 PRINT "    TO 3 OTHER ROOMS.":PRINT
    0x55fe3ae16410 ----------   02860 PRINT "1 - MOBIUS STRIP:  THIS CAVE IS TWO ROOMS WIDE AND 10 ROOMS"
    0x55fe3ae16590 ----------   02870 PRINT "    AROUND (LIKE A BELT).  YOU WILL NOTICE THERE IS A HALF-"
    0x55fe3ae16750 ----------   02880 PRINT "    TWIST SOMEWHERES.":PRINT
    0x55fe3ae168f0 ----------   02890 PRINT "2 - STRING OF BEADS:  FIVE BEADS IN A CIRCLE.  EACH BEAD IS A"
    0x55fe3ae16a90 ----------   02900 PRINT "    DIAMOND WITH A VERTICAL CROSS-BAR.  THE RIGHT AND LEFT"
    0x55fe3ae16c00 ----------   02910 PRINT "    CORNERS LEAD TO NEIGHBORING BEADS.  (THIS ONE IS DIFFICULT"
    0x55fe3ae16dc0 ----------   02920 PRINT "    TO PLAY).":GOSUB 4510
    0x55fe3ae16f50 ----------   02930 PRINT "3 - HEX NETWORK:  IMAGINE A HEX TILE FLOOR.  TAKE A RECTANGLE"
    0x55fe3ae170f0 ----------   02940 PRINT "    WITH 20 POINTS (INTERSECTIONS) INSIDE (4X5).  JOIN RIGHT"
    0x55fe3ae17270 ----------   02950 PRINT "    AND LEFT SIDES TO MAKE A CYLINDER.  THEN JOIN TOP AND BOT-"
    0x55fe3ae173d0 ----------   02960 PRINT "    TOM TO FORM A TORUS (DOUGHNUT)."
    0x55fe3ae175a0 ----------   02970 PRINT "    HAVE FUN IMAGINING THIS ONE!":PRINT
    0x55fe3ae17730 ----------   02980 PRINT "CAVES 0-3 ARE REGULAR IN THE SENSE THAT EACH ROOM GOES TO THREE"
    0x55fe3ae178a0 ----------   02990 PRINT "OTHER ROOMS AND THE TUNNELS ALLOW TWO-WAY TRAFFIC."
    0x55fe3ae17a70 ----------   03000 PRINT "HERE ARE SOME IRREGULAR CAVES:":PRINT
    0x55fe3ae17c10 ----------   03010 PRINT "4 - DENDRITE WITH DEGENERACIES:  PULL A PLANT FROM THE GROUND."
    0x55fe3ae17db0 ----------   03020 PRINT "    THE ROOTS AND BRANCHES FROM A DENDRITE - IE, THERE ARE NO"
    0x55fe3ae17f50 ----------   03030 PRINT "    LOOPING PATHS.  DEGENERACY MEANS A) SOME ROOMS CONNECT TO"
    0x55fe3ae180e0 ----------   03040 PRINT "    THEMSELVES OR B) THAT TWO ROOMS HAVE MORE THAN ONE TUNNEL"
    0x55fe3ae18230 ----------   03050 PRINT "    BETWEEN THEM IE, 12 HAS TWO TUNNELS TO 13."
    0x55fe3ae182e0 ----------   03060 GOSUB 4510
    0x55fe3ae18470 ----------   03070 PRINT "5 - ONE WAY LATTICE:  HERE ALL TUNNELS GO ONE WAY ONLY.  TO"
    0x55fe3ae18660 ----------   03080 PRINT "    RETURN, YOU MUST GO AROUND THE CAVE (ABOUT 5 MOVES).":PRINT
    0x55fe3ae187f0 ----------   03090 PRINT "6 - ENTER YOUR OWN CAVE:  THE COMPUTER WILL ASK YOU FOR THE"
    0x55fe3ae189a0 ----------   03100 PRINT "    ROOMS NEXT TO EACH ROOM IN THE CAVE.":PRINT
    0x55fe3ae18b60 ----------   03110 PRINT "   FOR EXAMPLE:":PRINT
    0x55fe3ae18d00 ----------   03120 PRINT "    TO SET ROOM #1 UP WITH TUNNELS GOING TO ROOMS 2, 3 AND 4"
    0x55fe3ae18e70 ----------   03130 PRINT "    TYPE '2' (ENTER) '3' (ENTER) '4' (ENTER) WHEN PROMPTED"
    0x55fe3ae18fc0 ----------   03140 PRINT "    WITH 'ROOM #1'"
    0x55fe3ae19270 ----------   03150 PRINT:PRINT TAB(24);"HAPPY HUNTING!!!"
    0x55fe3ae194c0 ----------   03160 PRINT TAB(27);">>>------->"
    0x55fe3ae19550 ----------   03170 GOSUB 3410:RETURN
    0x55fe3ae225d0 ---------B G 03180 GOTO 3200 (Pseudo Goto)
    0x55fe3adebee0 ---------B   03190 REM  PRINT LOCATION & HAZARD WARNINGS
    0x55fe3adebf60 ---------B T 03200 PRINT
    0x55fe3adec170 ---------B   03210 FOR J=2 TO 6
    0x55fe3adec3a0 ---------B   03220 FOR K=1 TO 3
    0x55fe3adec6f0 ---------B   03230 IF S(L(1),K)<>L(J) THEN 3300
    0x55fe3adecbe0 ---------B   03240 ON J-1 GOTO 3250,3270,3270,3290,3290
    0x55fe3adecd10 ---------B T 03250 PRINT "I SMeLL A WUMPUS!"
    0x55fe3adecd90 ---------B   03260 GOTO 3300
    0x55fe3adeceb0 ---------B T 03270 PRINT "I FEEL A DRAFT"
    0x55fe3adecf30 ---------B   03280 GOTO 3300
    0x55fe3aded050 ---------B T 03290 PRINT "BATS NEARBY!"
    0x55fe3aded100 ---------B T 03300 NEXT K
    0x55fe3aded1c0 ---------B   03310 NEXT J
    0x55fe3aded480 ---------B   03320 PRINT "YOU ARE IN ROOM";L(1);
    0x55fe3adedbf0 ---------B   03330 PRINT "    TUNNELS LEAD TO";S(L,1);",";S(L,2);"AND";S(L,3)
    0x55fe3adedc60 ---------B   03340 PRINT
    0x55fe3adedcb0 ---------B   03350 RETURN
    0x55fe3ae22690 ---------C G 03360 GOTO 3380 (Pseudo Goto)
    0x55fe3adedd30 ---------C   03370 REM  CHOSE OPTION
    0x55fe3adede40 ---------C T 03380 INPUT "SHOOT OR MOVE";I$
    0x55fe3adeded0 ---------C   03390 PRINT
    0x55fe3adee1a0 ---------C   03400 IF LEFT$(I$,1)<>"S" THEN 3430
    0x55fe3adee320 ---------C   03410 O=1
    0x55fe3ae22750 ---------C   03420 GOTO 3450 (Pseudo Goto)
    0x55fe3adee660 ---------C T 03430 IF LEFT$(I$,1)<>"M" THEN 3380
    0x55fe3adee7e0 ---------C   03440 O=2
    0x55fe3adee830 ---------C T 03450 RETURN
    0x55fe3adee8c0 ---------D   03460 REM  ARROW ROUTINE
    0x55fe3adeea50 ---------D G 03470 F=0
    0x55fe3adeeac0 ---------D   03480 REM  PATH OF ARROW
    0x55fe3adeec50 ---------D T 03490 INPUT "NUMBER OF ROOMS";J9
    0x55fe3adeecd0 ---------D   03500 PRINT
    0x55fe3adeee80 ---------D   03510 IF J9<1 THEN 3490
    0x55fe3adef040 ---------D   03520 IF J9>5 THEN 3490
    0x55fe3adef230 ---------D   03530 FOR K=1 TO J9
    0x55fe3adef3b0 ---------D   03540 INPUT "ROOM #";P(K)
    0x55fe3adef7f0 ---------D   03550 IF P(K)>0 THEN IF P(K)<21 THEN 1040
    0x55fe3ae227e0 ---------E G 03560 GOTO 3580 (Pseudo Goto)
    0x55fe3adf3700 ---------E   03570 REM  MOVE WUMPUS ROUTINE
    0x55fe3adf38e0 ---------E T 03580 K=RND(4)
    0x55fe3adf3a90 ---------E   03590 IF K=4 THEN 3640
    0x55fe3adf3de0 ---------E   03600 L(2)=S(L(2),K)
    0x55fe3adf4010 ---------E   03610 IF L(2)<>L THEN 3640
    0x55fe3adf41b0 ---------E   03620 PRINT "TSK TSK TSK - THE WUMPUS GOT YOU!":PRINT
    0x55fe3adf4320 ---------E   03630 F=-1
    0x55fe3adf4370 ---------E T 03640 RETURN
    0x55fe3ae228c0 ---------F G 03650 GOTO 3670 (Pseudo Goto)
    0x55fe3adf43f0 ---------F   03660 REM  MOVE ROUTINE
    0x55fe3adf4580 ---------F T 03670 F=0
    0x55fe3adf4670 ---------F T 03680 INPUT "WHERE TO";L
    0x55fe3adf46f0 ---------F   03690 PRINT
    0x55fe3adf48a0 ---------F   03700 IF L<1 THEN 3680
    0x55fe3adf4a60 ---------F   03710 IF L>20 THEN 3680
    0x55fe3adf4c90 ---------F   03720 FOR K=1 TO 3
    0x55fe3adf4d20 ---------F   03730 REM  CHECK IF LEGAL MOVE
    0x55fe3adf51c0 ---------F   03740 IF S(L(1),K)=L THEN K=4:GOTO 3760
    0x55fe3adf56e0 ---------F   03750 REM  CHECK FOR HAZARDS
    0x55fe3adf58c0 ---------F T 03760 L(1)=L
    0x55fe3adf5930 ---------F   03770 REM  WUMPUS
    0x55fe3adf5b80 ---------F   03780 IF L<>L(2) THEN 3850
    0x55fe3adf5cd0 ---------F   03790 PRINT "... OOPS!  BUMPED A WUMPUS!"
    0x55fe3adf5d40 ---------F   03800 REM  MOVE WUMPUS
    0x55fe3adf5dc0 ---------F   03810 GOSUB 3560
    0x55fe3adf5f60 ---------F   03820 IF F=0 THEN 3850
    0x55fe3ae229e0 ---------F   03830 GOTO 3860 (Pseudo Goto)
    0x55fe3adf6040 ---------F   03840 REM  PIT
    0x55fe3adf6480 ---------F T 03850 IF L<>L(3) THEN IF L<>L(4) THEN 1840
    0x55fe3ae229a0 ---------F T 03860 RETURN (Pseudo)
    0x55fe3adfbf40 ---------G   03870 REM  INPUT OWN CAVE
    0x55fe3adfc160 ---------G G 03880 FOR J=1 TO 20
    0x55fe3adfc350 ---------G   03890 PRINT "ROOM #";J;
    0x55fe3adfc560 ---------G   03900 INPUT "IS CONNECTED TO :";S(J,1)
    0x55fe3adfc940 ---------G   03910 INPUT "AND";S(J,2):INPUT "AND";S(J,3)
    0x55fe3adfc9c0 ---------G   03920 PRINT
    0x55fe3adfcbb0 ---------G   03930 F5=0
    0x55fe3adfcde0 ---------G   03940 FOR K=1 TO 3
    0x55fe3adfd2f0 ---------G   03950 IF S(J,K)>0 THEN IF S(J,K)<21 THEN 2190
    0x55fe3ae22ae0 ---------H G 03960 GOTO 3980 (Pseudo Goto)
    0x55fe3adfd9d0 ---------H   03970 REM  INPUT CAVE
    0x55fe3adfdbf0 ---------H T 03980 FOR J=1 TO 20
    0x55fe3adfde10 ---------H   03990 FOR K=1 TO 3
    0x55fe3adfdfb0 ---------H   04000 READ S(J,K)
    0x55fe3adfe050 ---------H   04010 NEXT K
    0x55fe3adfe110 ---------H   04020 NEXT J
    0x55fe3adfe170 ---------H   04030 RETURN
    0x55fe3ae10c30 ---------I   04040 REM  INSTRUCTIONS
    0x55fe3ae10cf0 ---------I G 04050 CLS
    0x55fe3ae10e70 ---------I   04060 PRINT "  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3"
    0x55fe3ae11150 ---------I   04070 PRINT "TUNNELS LEADING TO OTHER ROOMS.":PRINT:PRINT "HAZARDS:"
    0x55fe3ae11330 ---------I   04080 PRINT:PRINT "BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF"
    0x55fe3ae11510 ---------I   04090 PRINT "YOU GO IN THERE, YOU FALL INTO THE PIT AND LOSE!":PRINT
    0x55fe3ae116b0 ---------I   04100 PRINT "SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,"
    0x55fe3ae11840 ---------I   04110 PRINT "A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE"
    0x55fe3ae119e0 ---------I   04120 PRINT "CAVE WHERE YOU COULD RUN INTO THE...":GOSUB 4510
    0x55fe3ae11b90 ---------I   04130 PRINT "WUMPUS:":PRINT
    0x55fe3ae11d30 ---------I   04140 PRINT "THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET"
    0x55fe3ae11ed0 ---------I   04150 PRINT "AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS"
    0x55fe3ae12070 ---------I   04160 PRINT "WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW."
    0x55fe3ae12200 ---------I   04170 PRINT "IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL."
    0x55fe3ae12370 ---------I   04180 PRINT "BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!"
    0x55fe3ae12570 ---------I   04190 PRINT:PRINT "YOU:":PRINT
    0x55fe3ae12700 ---------I   04200 PRINT "EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW."
    0x55fe3ae12850 ---------I   04210 PRINT "MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL)."
    0x55fe3ae128f0 ---------I   04220 GOSUB 4510
    0x55fe3ae12a80 ---------I   04230 PRINT "SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT."
    0x55fe3ae12c20 ---------I   04240 PRINT "  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE"
    0x55fe3ae12dc0 ---------I   04250 PRINT "  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO"
    0x55fe3ae12f30 ---------I   04260 PRINT "  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF"
    0x55fe3ae130f0 ---------I   04270 PRINT "  OCCURRENCE.":PRINT
    0x55fe3ae13290 ---------I   04280 PRINT " EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10"
    0x55fe3ae13420 ---------I   04290 PRINT "  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO"
    0x55fe3ae135c0 ---------I   04300 PRINT "  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS"
    0x55fe3ae13760 ---------I   04310 PRINT "  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY"
    0x55fe3ae138f0 ---------I   04320 PRINT "  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS"
    0x55fe3ae13ad0 ---------I   04330 PRINT "  PROCESS UNTIL 4 ROOMS HAVE BEEN ENTERED.":GOSUB 4510
    0x55fe3ae13c60 ---------I   04340 PRINT " NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING"
    0x55fe3ae13e00 ---------I   04350 PRINT "  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE"
    0x55fe3ae13fa0 ---------I   04360 PRINT "  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED"
    0x55fe3ae14130 ---------I   04370 PRINT "  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING"
    0x55fe3ae142d0 ---------I   04380 PRINT "  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW" 
    0x55fe3ae14470 ---------I   04390 PRINT "  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT"
    0x55fe3ae14600 ---------I   04400 PRINT "  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS."
    0x55fe3ae147c0 ---------I   04410 PRINT:PRINT "IF THE ARROW HITS THE WUMPUS, YOU WIN."
    0x55fe3ae14920 ---------I   04420 PRINT "IF THE ARROW HITS YOU, YOU LOSE."
    0x55fe3ae14b70 ---------I   04430 GOSUB 3410:PRINT:PRINT "WARNINGS:":PRINT
    0x55fe3ae14d10 ---------I   04440 PRINT "WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,"
    0x55fe3ae14fe0 ---------I   04450 PRINT "THE COMPUTER SAYS:":PRINT:PRINT "WUMPUS - 'I SMELL A WUMPUS'"
    0x55fe3ae152b0 ---------I   04460 PRINT "BAT - 'BATS NEARBY'":PRINT "PIT - 'I FEEL A DRAFT'":PRINT
    0x55fe3ae15440 ---------I   04470 PRINT "BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!"
    0x55fe3ae15680 ---------I   04480 PRINT @ 910,"";:INPUT "WOULD YOU LIKE THE DESCRIPTION OF THE CAVES";Z$
    0x55fe3ae15710 ---------I   04490 CLS
    0x55fe3ae15a20 ---------I   04500 IF LEFT$(Z$,1)="N" THEN RETURN
    0x55fe3ae19700 ---------J G 04510 PRINT @ 975,"PRESS 'ENTER' TO CONTINUE ";
    0x55fe3ae19b90 ---------J T 04520 Z$=INKEY$:Z$=Z$:IF Z$="" THEN 4520 
    0x55fe3ae19eb0 ---------J   04530 IF ASC(Z$)<>13 THEN 3415 ELSE CLS:RETURN
    0x55fe3ae1a180 ---------K G 04540 FOR Q=1 TO P1:NEXT Q:RETURN
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
char* data_02580s[]={"2","5","8","1","3","10","2","4","12","3","5","14","1","4","6","5","7","15","6","8","17","1"};
char* data_02590s[]={"7","8","9","10","18","2","9","11","10","12","19","3","11","13","12","14","20","4","13"};
char* data_02600s[]={"15","6","14","16","15","17","20","7","16","18","9","17","19","11","18","20","13","16","19"};
char* data_02620s[]={"20","2","3","19","1","4","1","4","5","2","3","6","3","6","7","4","5","8","5","8","9","6","7"};
char* data_02630s[]={"10","7","10","11","8","9","12","9","12","13","10","11","14","11","14","15","12","13"};
char* data_02640s[]={"16","12","16","17","14","15","18","15","18","19","16","17","20","2","17","20","1","18","19"};
char* data_02660s[]={"2","3","20","1","3","4","1","2","4","2","3","5","4","6","7","5","7","8","5","6","8","6","7"};
char* data_02670s[]={"9","8","10","11","9","11","12","9","10","12","10","11","13","12","14","15","13","15","1"};
char* data_02680s[]={"6","13","14","16","14","15","17","16","18","19","17","19","20","17","18","20","1","18","19"};
char* data_02700s[]={"6","10","16","6","7","17","7","8","18","8","9","19","9","10","20","1","2","15","2","3","1"};
char* data_02710s[]={"1","3","4","12","4","5","13","1","5","14","7","16","20","8","16","17","9","17","18","10"};
char* data_02720s[]={"18","19","6","19","20","1","11","12","2","12","13","3","13","14","4","14","15","5","11","15"};
char* data_02740s[]={"1","1","5","2","2","5","3","3","6","4","4","6","1","2","7","3","4","7","5","6","10","8","9"};
char* data_02750s[]={"9","8","8","10","7","9","11","10","13","14","12","13","13","11","12","12","11","15","16"};
char* data_02760s[]={"14","17","18","14","19","20","15","17","17","15","18","18","16","19","19","16","20","20"};
char* data_02780s[]={"5","4","8","1","5","6","2","6","7","3","7","8","8","9","12","5","9","10","6","10","11","7"};
char* data_02790s[]={"11","12","12","13","16","9","13","14","10","14","15","11","15","16","16","17","20","13"};
char* data_02800s[]={"17","18","14","18","19","15","19","20","1","4","20","1","2","17","2","3","18","3","4","19"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 2580, 22,data_02580s},
    { 2590, 19,data_02590s},
    { 2600, 19,data_02600s},
    { 2620, 23,data_02620s},
    { 2630, 18,data_02630s},
    { 2640, 19,data_02640s},
    { 2660, 23,data_02660s},
    { 2670, 19,data_02670s},
    { 2680, 19,data_02680s},
    { 2700, 21,data_02700s},
    { 2710, 20,data_02710s},
    { 2720, 20,data_02720s},
    { 2740, 23,data_02740s},
    { 2750, 19,data_02750s},
    { 2760, 18,data_02760s},
    { 2780, 22,data_02780s},
    { 2790, 18,data_02790s},
    { 2800, 20,data_02800s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int   A_int;        // Comments?
int   A9_int;       // Comments?
int   F_int;        // Comments?
int   F1_int;       // Comments?
int   F3_int;       // Comments?
int   F5_int;       // Comments?
int   I_int;        // Comments?
char* I_str_arr[7]; // Comments?
char* I_str;        // Comments?
int   I9_int;       // Comments?
char* INKEY_str;    // Comments?
int   J_int;        // Comments?
int   J9_int;       // Comments?
int   K_int;        // Comments?
int   K1_int;       // Comments?
int   L_int_arr[7]; // Comments?
int   L_int;        // Comments?
int   M_int_arr[7]; // Comments?
int   N_int;        // Comments?
int   O_int;        // Comments?
int   P_int_arr[6]; // Comments?
int   P1_int;       // Comments?
int   Q_int;        // Comments?
int   S_int_arr[21][4]; // Comments?
int   X9_int;       // Comments?
char* Z_str;        // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03180();
void Routine_03360();
void Routine_03470();
void Routine_03560();
void Routine_03650();
void Routine_03880();
void Routine_03960();
void Routine_04050();
void Routine_04510();
void Routine_04540();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_03180(){
    // 03180 GOTO 3200 (Pseudo Goto)
    goto Lbl_03200;
    // 03190 REM  PRINT LOCATION & HAZARD WARNINGS

  Lbl_03200:
    // 03200 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 03210 FOR J=2 TO 6
    for(J_int=2;J_int<=6;J_int++){
        // 03220 FOR K=1 TO 3
        for(K_int=1;K_int<=3;K_int++){
            // 03230 IF S(L(1),K)<>L(J) THEN 3300
            if(S_int_arr[(int)L_int_arr[(int)1]][(int)K_int]!=L_int_arr[(int)J_int])goto Lbl_03300;
            // 03240 ON J-1 GOTO 3250,3270,3270,3290,3290
            switch((int)(J_int-1)){
                case 1: goto Lbl_03250;
                case 2: goto Lbl_03270;
                case 3: goto Lbl_03270;
                case 4: goto Lbl_03290;
                case 5: goto Lbl_03290;
                default: break; 
            };

  Lbl_03250:
            // 03250 PRINT "I SMeLL A WUMPUS!"
            b2c_fprintf(stdout,"I SMeLL A WUMPUS!"); b2c_fprintf(stdout,"\n");
            // 03260 GOTO 3300
            goto Lbl_03300;

  Lbl_03270:
            // 03270 PRINT "I FEEL A DRAFT"
            b2c_fprintf(stdout,"I FEEL A DRAFT"); b2c_fprintf(stdout,"\n");
            // 03280 GOTO 3300
            goto Lbl_03300;

  Lbl_03290:
            // 03290 PRINT "BATS NEARBY!"
            b2c_fprintf(stdout,"BATS NEARBY!"); b2c_fprintf(stdout,"\n");

  Lbl_03300:
            // 03300 NEXT K
            int dummy_3300=0; // Ignore this line.
        }; // End-For(K_int)
        // 03310 NEXT J
        int dummy_3310=0; // Ignore this line.
    }; // End-For(J_int)
    // 03320 PRINT "YOU ARE IN ROOM";L(1);
    b2c_fprintf(stdout,"YOU ARE IN ROOM %d ",L_int_arr[(int)1]); 
    // 03330 PRINT "    TUNNELS LEAD TO";S(L,1);",";S(L,2);"AND";S(L,3)
    b2c_fprintf(stdout,"    TUNNELS LEAD TO %d , %d AND %d ",S_int_arr[(int)L_int][(int)1],S_int_arr[(int)L_int][(int)2],S_int_arr[(int)L_int][(int)3]); b2c_fprintf(stdout,"\n");
    // 03340 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 03350 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_03360(){
    // 03360 GOTO 3380 (Pseudo Goto)
    goto Lbl_03380;
    // 03370 REM  CHOSE OPTION

  Lbl_03380:
    // 03380 INPUT "SHOOT OR MOVE";I$
    // Start of Basic INPUT statement 03380
    printf("SHOOT OR MOVE");
    char inpbuf_03380[100];
    if(fgets(inpbuf_03380,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_03380=strtok(inpbuf_03380," ,\t\n");
        I_str=strdup(inpbuf_03380);
    }; // End of Basic INPUT statement 03380
    // 03390 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 03400 IF LEFT$(I$,1)<>"S" THEN 3430
    if(strcmp(LEFT(I_str,1),"S")!=0)goto Lbl_03430;
    // 03410 O=1
    O_int = 1;
    // 03420 GOTO 3450 (Pseudo Goto)
    goto Lbl_03450;

  Lbl_03430:
    // 03430 IF LEFT$(I$,1)<>"M" THEN 3380
    if(strcmp(LEFT(I_str,1),"M")!=0)goto Lbl_03380;
    // 03440 O=2
    O_int = 2;

  Lbl_03450:
    // 03450 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------
    // 03460 REM  ARROW ROUTINE

void Routine_03470(){
    // 03470 F=0
    F_int = 0;
    // 03480 REM  PATH OF ARROW

  Lbl_03490:
    // 03490 INPUT "NUMBER OF ROOMS";J9
    // Start of Basic INPUT statement 03490
    printf("NUMBER OF ROOMS");
    char inpbuf_03490[100];
    if(fgets(inpbuf_03490,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_03490=strtok(inpbuf_03490," ,\t\n");
        J9_int=strdup(inpbuf_03490);
    }; // End of Basic INPUT statement 03490
    // 03500 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 03510 IF J9<1 THEN 3490
    if(J9_int<1)goto Lbl_03490;
    // 03520 IF J9>5 THEN 3490
    if(J9_int>5)goto Lbl_03490;
    // 03530 FOR K=1 TO J9
    for(K_int=1;K_int<=J9_int;K_int++){
        // 03540 INPUT "ROOM #";P(K)
        // Start of Basic INPUT statement 03540
        printf("ROOM #");
        char inpbuf_03540[100];
        if(fgets(inpbuf_03540,100,stdin)==nullptr){
            fprintf(stderr,"ERROR: End of file on input.\n");
            exit(2);
        }else{
            char *ps_03540=strtok(inpbuf_03540," ,\t\n");
            P_int_arr[(int)K_int]=strdup(inpbuf_03540);
        }; // End of Basic INPUT statement 03540
        // 03550 IF P(K)>0 THEN IF P(K)<21 THEN 1040
        if(P_int_arr[(int)K_int]>0) {
        }


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

void Routine_03560(){
        // 03560 GOTO 3580 (Pseudo Goto)
        goto Lbl_03580;
        // 03570 REM  MOVE WUMPUS ROUTINE

  Lbl_03580:
        // 03580 K=RND(4)
        K_int = RND(4);
        // 03590 IF K=4 THEN 3640
        if(K_int==4)goto Lbl_03640;
        // 03600 L(2)=S(L(2),K)
        L_int_arr[(int)2] = S_int_arr[(int)L_int_arr[(int)2]][(int)K_int];
        // 03610 IF L(2)<>L THEN 3640
        if(L_int_arr[(int)2]!=L_int)goto Lbl_03640;
        // 03620 PRINT "TSK TSK TSK - THE WUMPUS GOT YOU!":PRINT
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 03630 F=-1
        F_int = -1;

  Lbl_03640:
        // 03640 RETURN
        return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------

void Routine_03650(){
        // 03650 GOTO 3670 (Pseudo Goto)
        goto Lbl_03670;
        // 03660 REM  MOVE ROUTINE

  Lbl_03670:
        // 03670 F=0
        F_int = 0;

  Lbl_03680:
        // 03680 INPUT "WHERE TO";L
        // Start of Basic INPUT statement 03680
        printf("WHERE TO");
        char inpbuf_03680[100];
        if(fgets(inpbuf_03680,100,stdin)==nullptr){
            fprintf(stderr,"ERROR: End of file on input.\n");
            exit(2);
        }else{
            char *ps_03680=strtok(inpbuf_03680," ,\t\n");
            L_int=strdup(inpbuf_03680);
        }; // End of Basic INPUT statement 03680
        // 03690 PRINT
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 03700 IF L<1 THEN 3680
        if(L_int<1)goto Lbl_03680;
        // 03710 IF L>20 THEN 3680
        if(L_int>20)goto Lbl_03680;
        // 03720 FOR K=1 TO 3
        for(K_int=1;K_int<=3;K_int++){
            // 03730 REM  CHECK IF LEGAL MOVE
            // 03740 IF S(L(1),K)=L THEN K=4:GOTO 3760
            goto Lbl_03760;
            // 03750 REM  CHECK FOR HAZARDS

  Lbl_03760:
            // 03760 L(1)=L
            L_int_arr[(int)1] = L_int;
            // 03770 REM  WUMPUS
            // 03780 IF L<>L(2) THEN 3850
            if(L_int!=L_int_arr[(int)2])goto Lbl_03850;
            // 03790 PRINT "... OOPS!  BUMPED A WUMPUS!"
            b2c_fprintf(stdout,"... OOPS!  BUMPED A WUMPUS!"); b2c_fprintf(stdout,"\n");
            // 03800 REM  MOVE WUMPUS
            // 03810 GOSUB 3560
            Routine_03560();
            // 03820 IF F=0 THEN 3850
            if(F_int==0)goto Lbl_03850;
            // 03830 GOTO 3860 (Pseudo Goto)
            goto Lbl_03860;
            // 03840 REM  PIT

  Lbl_03850:
            // 03850 IF L<>L(3) THEN IF L<>L(4) THEN 1840
            if(L_int!=L_int_arr[(int)3]) {
            }

  Lbl_03860:
            // 03860 RETURN (Pseudo)
            return;
};


//---------------------------------------------------------------------------
// Routine G
//---------------------------------------------------------------------------
            // 03870 REM  INPUT OWN CAVE

void Routine_03880(){
            // 03880 FOR J=1 TO 20
            for(J_int=1;J_int<=20;J_int++){
                // 03890 PRINT "ROOM #";J;
                b2c_fprintf(stdout,"ROOM # %d ",J_int); 
                // 03900 INPUT "IS CONNECTED TO :";S(J,1)
                // Start of Basic INPUT statement 03900
                printf("IS CONNECTED TO :");
                char inpbuf_03900[100];
                if(fgets(inpbuf_03900,100,stdin)==nullptr){
                    fprintf(stderr,"ERROR: End of file on input.\n");
                    exit(2);
                }else{
                    char *ps_03900=strtok(inpbuf_03900," ,\t\n");
                    S_int_arr[(int)J_int][(int)1]=strdup(inpbuf_03900);
                }; // End of Basic INPUT statement 03900
                // 03910 INPUT "AND";S(J,2):INPUT "AND";S(J,3)
                // Start of Basic INPUT statement 03910
                printf("AND");
                char inpbuf_03910[100];
                if(fgets(inpbuf_03910,100,stdin)==nullptr){
                    fprintf(stderr,"ERROR: End of file on input.\n");
                    exit(2);
                }else{
                    char *ps_03910=strtok(inpbuf_03910," ,\t\n");
                    S_int_arr[(int)J_int][(int)3]=strdup(inpbuf_03910);
                }; // End of Basic INPUT statement 03910
                // 03920 PRINT
                b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
                // 03930 F5=0
                F5_int = 0;
                // 03940 FOR K=1 TO 3
                for(K_int=1;K_int<=3;K_int++){
                    // 03950 IF S(J,K)>0 THEN IF S(J,K)<21 THEN 2190
                    if(S_int_arr[(int)J_int][(int)K_int]>0) {
                    }


//---------------------------------------------------------------------------
// Routine H
//---------------------------------------------------------------------------

void Routine_03960(){
                    // 03960 GOTO 3980 (Pseudo Goto)
                    goto Lbl_03980;
                    // 03970 REM  INPUT CAVE

  Lbl_03980:
                    // 03980 FOR J=1 TO 20
                    for(J_int=1;J_int<=20;J_int++){
                        // 03990 FOR K=1 TO 3
                        for(K_int=1;K_int<=3;K_int++){
                            // 04000 READ S(J,K)
                            S_int_arr[(int)J_int][(int)K_int] = Get_Data_Int();
                            // 04010 NEXT K
                            int dummy_4010=0; // Ignore this line.
                        }; // End-For(K_int)
                        // 04020 NEXT J
                        int dummy_4020=0; // Ignore this line.
                    }; // End-For(J_int)
                    // 04030 RETURN
                    return;
};


//---------------------------------------------------------------------------
// Routine I
//---------------------------------------------------------------------------
                    // 04040 REM  INSTRUCTIONS

void Routine_04050(){
                    // 04050 CLS
                    ClearScreen(0);
                    // 04060 PRINT "  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3"
                    b2c_fprintf(stdout,"  THE WUMPUS LIVES IN A CAVE OF 20 ROOMS.  EACH ROOM HAS 3"); b2c_fprintf(stdout,"\n");
                    // 04070 PRINT "TUNNELS LEADING TO OTHER ROOMS.":PRINT:PRINT "HAZARDS:"
                    b2c_fprintf(stdout,"HAZARDS:"); b2c_fprintf(stdout,"\n");
                    // 04080 PRINT:PRINT "BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF"
                    b2c_fprintf(stdout,"BOTTOMLESS PITS - TWO ROOMS HAVE BOTTOMLESS PITS IN THEM.  IF"); b2c_fprintf(stdout,"\n");
                    // 04090 PRINT "YOU GO IN THERE, YOU FALL INTO THE PIT AND LOSE!":PRINT
                    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
                    // 04100 PRINT "SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,"
                    b2c_fprintf(stdout,"SUPER BATS - TWO OTHER ROOMS HAVE SUPER BATS.  IF YOU GO THERE,"); b2c_fprintf(stdout,"\n");
                    // 04110 PRINT "A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE"
                    b2c_fprintf(stdout,"A BAT WILL GRAB YOU AND TAKE YOU AWAY TO SOMEWHERE ELSE IN THE"); b2c_fprintf(stdout,"\n");
                    // 04120 PRINT "CAVE WHERE YOU COULD RUN INTO THE...":GOSUB 4510
                    Routine_04510();
                    // 04130 PRINT "WUMPUS:":PRINT
                    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
                    // 04140 PRINT "THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET"
                    b2c_fprintf(stdout,"THE WUMPUS IS NOT BOTHERED BY THE HAZARDS (HE HAS SUCKER FEET"); b2c_fprintf(stdout,"\n");
                    // 04150 PRINT "AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS"
                    b2c_fprintf(stdout,"AND IS TOO BIG TO LIFT).  USUALLY HE IS ASLEEP.  TWO THINGS"); b2c_fprintf(stdout,"\n");
                    // 04160 PRINT "WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW."
                    b2c_fprintf(stdout,"WAKE HIM UP:  YOUR ENTERING HIS ROOM OR YOUR SHOOTING AN ARROW."); b2c_fprintf(stdout,"\n");
                    // 04170 PRINT "IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL."
                    b2c_fprintf(stdout,"IF THE WUMPUS WAKES, HE MIGHT MOVE ONE ROOM OR STAY STILL."); b2c_fprintf(stdout,"\n");
                    // 04180 PRINT "BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!"
                    b2c_fprintf(stdout,"BUT IF HE IS WHERE YOU ARE, HE EATS YOU UP AND YOU LOSE!"); b2c_fprintf(stdout,"\n");
                    // 04190 PRINT:PRINT "YOU:":PRINT
                    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
                    // 04200 PRINT "EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW."
                    b2c_fprintf(stdout,"EACH TURN YOU MAY MOVE OR YOU MAY SHOOT A CROOKED ARROW."); b2c_fprintf(stdout,"\n");
                    // 04210 PRINT "MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL)."
                    b2c_fprintf(stdout,"MOVING:  YOU CAN GO ONE ROOM (THRU ONE TUNNEL)."); b2c_fprintf(stdout,"\n");
                    // 04220 GOSUB 4510
                    Routine_04510();
                    // 04230 PRINT "SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT."
                    b2c_fprintf(stdout,"SHOOTING:  YOU HAVE 5 ARROWS.  YOU LOSE WHEN YOU RUN OUT."); b2c_fprintf(stdout,"\n");
                    // 04240 PRINT "  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE"
                    b2c_fprintf(stdout,"  EACH ARROW CAN GO FROM 1 TO 5 ROOMS.  YOU AIM BY TELLING THE"); b2c_fprintf(stdout,"\n");
                    // 04250 PRINT "  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO"
                    b2c_fprintf(stdout,"  COMPUTER, FIRST THE NUMBER OF ROOMS YOU WISH THE ARROW TO"); b2c_fprintf(stdout,"\n");
                    // 04260 PRINT "  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF"
                    b2c_fprintf(stdout,"  TRAVEL THRU AND, SECOND, THE ROOM NUMBERS IN THEIR ORDER OF"); b2c_fprintf(stdout,"\n");
                    // 04270 PRINT "  OCCURRENCE.":PRINT
                    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
                    // 04280 PRINT " EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10"
                    b2c_fprintf(stdout," EXAMPLE:  YOU ARE IN ROOM 2; TUNNELS LEAD TO ROOMS 1, 3 AND 10"); b2c_fprintf(stdout,"\n");
                    // 04290 PRINT "  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO"
                    b2c_fprintf(stdout,"  AND YOU THINK THE WUMPUS IS IN ONE OF THEM.  YOU CHOOSE TO"); b2c_fprintf(stdout,"\n");
                    // 04300 PRINT "  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS"
                    b2c_fprintf(stdout,"  SHOOT AN ARROW THRU FOUR ROOMS.  WHEN THE COMPUTER ASKS"); b2c_fprintf(stdout,"\n");
                    // 04310 PRINT "  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY"
                    b2c_fprintf(stdout,"  'NUMBER OF ROOM?', YOU TYPE 4.  THEN THE COMPUTER WILL SAY"); b2c_fprintf(stdout,"\n");
                    // 04320 PRINT "  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS"
                    b2c_fprintf(stdout,"  'ROOM #?'.  YOU THEN TYPE THE ROOM NUMBER.  CONTINUE THIS"); b2c_fprintf(stdout,"\n");
                    // 04330 PRINT "  PROCESS UNTIL 4 ROOMS HAVE BEEN ENTERED.":GOSUB 4510
                    Routine_04510();
                    // 04340 PRINT " NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING"
                    b2c_fprintf(stdout," NOTE:  THE FIRST ROOM IN THE SEQUENCE MUST BE AN ADJOINING"); b2c_fprintf(stdout,"\n");
                    // 04350 PRINT "  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE"
                    b2c_fprintf(stdout,"  ROOM, THAT IS, ONE THAT HAS A TUNNEL CONNECTING IT WITH THE"); b2c_fprintf(stdout,"\n");
                    // 04360 PRINT "  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED"
                    b2c_fprintf(stdout,"  ROOM YOU ARE IN, EACH SUCCEEDING ROOM MUST ALSO BE CONNECTED"); b2c_fprintf(stdout,"\n");
                    // 04370 PRINT "  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING"
                    b2c_fprintf(stdout,"  TO THE PREVIOUS ROOM BY A TUNNEL.  IF THERE IS NO CONNECTING"); b2c_fprintf(stdout,"\n");
                    // 04380 PRINT "  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW" 
                    b2c_fprintf(stdout,"  TUNNEL BETWEEN PARTICULAR ROOMS YOU SPECIFY, THE ARROW"); b2c_fprintf(stdout,"\n");
                    // 04390 PRINT "  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT"
                    b2c_fprintf(stdout,"  RANDOMLY CHOOSES ONE OF THE THREE TUNNELS FROM THE ROOM IT"); b2c_fprintf(stdout,"\n");
                    // 04400 PRINT "  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS."
                    b2c_fprintf(stdout,"  IS IN AND GOES ITS OWN WAY UNTIL IT HAS TRAVELED FOUR ROOMS."); b2c_fprintf(stdout,"\n");
                    // 04410 PRINT:PRINT "IF THE ARROW HITS THE WUMPUS, YOU WIN."
                    b2c_fprintf(stdout,"IF THE ARROW HITS THE WUMPUS, YOU WIN."); b2c_fprintf(stdout,"\n");
                    // 04420 PRINT "IF THE ARROW HITS YOU, YOU LOSE."
                    b2c_fprintf(stdout,"IF THE ARROW HITS YOU, YOU LOSE."); b2c_fprintf(stdout,"\n");
                    // 04430 GOSUB 3410:PRINT:PRINT "WARNINGS:":PRINT
                    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
                    // 04440 PRINT "WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,"
                    b2c_fprintf(stdout,"WHEN YOU MOVE TO WITHIN ONE ROOM OF THE WUMPUS OR A HAZARD,"); b2c_fprintf(stdout,"\n");
                    // 04450 PRINT "THE COMPUTER SAYS:":PRINT:PRINT "WUMPUS - 'I SMELL A WUMPUS'"
                    b2c_fprintf(stdout,"WUMPUS - 'I SMELL A WUMPUS'"); b2c_fprintf(stdout,"\n");
                    // 04460 PRINT "BAT - 'BATS NEARBY'":PRINT "PIT - 'I FEEL A DRAFT'":PRINT
                    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
                    // 04470 PRINT "BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!"
                    b2c_fprintf(stdout,"BE CAREFUL!  THE WUMPUS MAY SNEAK UP ON YOU!!"); b2c_fprintf(stdout,"\n");
                    // 04480 PRINT @ 910,"";:INPUT "WOULD YOU LIKE THE DESCRIPTION OF THE CAVES";Z$
                    // Start of Basic INPUT statement 04480
                    printf("WOULD YOU LIKE THE DESCRIPTION OF THE CAVES");
                    char inpbuf_04480[100];
                    if(fgets(inpbuf_04480,100,stdin)==nullptr){
                        fprintf(stderr,"ERROR: End of file on input.\n");
                        exit(2);
                    }else{
                        char *ps_04480=strtok(inpbuf_04480," ,\t\n");
                        Z_str=strdup(inpbuf_04480);
                    }; // End of Basic INPUT statement 04480
                    // 04490 CLS
                    ClearScreen(0);
                    // 04500 IF LEFT$(Z$,1)="N" THEN RETURN
                    if(strcmp(LEFT(Z_str,1),"N")==0) {
                    }


//---------------------------------------------------------------------------
// Routine J
//---------------------------------------------------------------------------

void Routine_04510(){
                    // 04510 PRINT @ 975,"PRESS 'ENTER' TO CONTINUE ";
                    b2c_fprintf(stdout,"PRESS 'ENTER' TO CONTINUE "); 

  Lbl_04520:
                    // 04520 Z$=INKEY$:Z$=Z$:IF Z$="" THEN 4520 
                    if(strcmp(Z_str,"")==0)goto Lbl_04520;
                    // 04530 IF ASC(Z$)<>13 THEN 3415 ELSE CLS:RETURN
                    return;
};


//---------------------------------------------------------------------------
// Routine K
//---------------------------------------------------------------------------

void Routine_04540(){
                    // 04540 FOR Q=1 TO P1:NEXT Q:RETURN
                    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{

  Lbl_01000:
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 REM  WUMPUS II  FROM THE LAWRENCE HALL OF SCIENCE
    // 01030 REM  TRANSFERED TO SOL EBASIC BY DAVID FOX
    // 01040 REM  REVISED FOR TRS-80 LEVEL II BASIC BY DOUG BENEDICT
    // 01050 CLS:PRINT@282,"WUMPUS  II"
    b2c_fprintf(stdout,"WUMPUS  II"); b2c_fprintf(stdout,"\n");
    // 01060 PRINT@409,"COPYRIGHT BY"
    b2c_fprintf(stdout,"COPYRIGHT BY"); b2c_fprintf(stdout,"\n");
    // 01070 PRINT@470,"CREATIVE COMPUTING"
    b2c_fprintf(stdout,"CREATIVE COMPUTING"); b2c_fprintf(stdout,"\n");
    // 01080 PRINT@536,"P.O. BOX 789-M"
    b2c_fprintf(stdout,"P.O. BOX 789-M"); b2c_fprintf(stdout,"\n");
    // 01090 PRINT@593,"MORRISTOWN, NEW JERSEY 07960"
    b2c_fprintf(stdout,"MORRISTOWN, NEW JERSEY 07960"); b2c_fprintf(stdout,"\n");
    // 01100 FORI=1TO2000:NEXTI
    int dummy_1100=0; // Ignore this line.
}; // End-For(I_int)
// 01110 DIM I$(6),L(6),M(6),P(5),S(20,3)
// 01120 CLS:PRINT @ 390,"";
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 01130 PRINT "* * *  T H E  G A M E  O F  W U M P U S  II  * * *"
b2c_fprintf(stdout,"* * *  T H E  G A M E  O F  W U M P U S  II  * * *"); b2c_fprintf(stdout,"\n");

  Lbl_01140:
// 01140 PRINT @ 896,"";:INPUT "WOULD YOU LIKE INSTRUCTIONS";Z$
// Start of Basic INPUT statement 01140
printf("WOULD YOU LIKE INSTRUCTIONS");
char inpbuf_01140[100];
if(fgets(inpbuf_01140,100,stdin)==nullptr){
    fprintf(stderr,"ERROR: End of file on input.\n");
    exit(2);
}else{
    char *ps_01140=strtok(inpbuf_01140," ,\t\n");
    Z_str=strdup(inpbuf_01140);
}; // End of Basic INPUT statement 01140
// 01150 IF LEFT$(Z$,1)="N" THEN 1190
if(strcmp(LEFT(Z_str,1),"N")==0)goto Lbl_01190;
// 01160 IF LEFT$(Z$,1)<>"Y" THEN 1140
if(strcmp(LEFT(Z_str,1),"Y")!=0)goto Lbl_01140;
// 01170 F3=1:GOSUB 4050
Routine_04050();
// 01180 REM  CHOOSE AND SET UP CAVE

  Lbl_01190:
// 01190 GOSUB 1890:F3=1
F3_int = 1;
// 01200 REM  LOCATE L ARRAY ITEMS
// 01210 REM  1=YOU,2=WUMPUS,3&4=PITS,5&6=BATS

  Lbl_01220:
// 01220 FOR J=1 TO 6
for(J_int=1;J_int<=6;J_int++){
    // 01230 L(J)=RND(20)
    L_int_arr[(int)J_int] = RND(20);
    // 01240 M(J)=L(J)
    M_int_arr[(int)J_int] = L_int_arr[(int)J_int];
    // 01250 NEXT J
    int dummy_1250=0; // Ignore this line.
}; // End-For(J_int)
// 01260 REM  CHECK FOR CROSSOVERS (IE L(1)=L(2),ETC)
// 01270 FOR J=1 TO 6
for(J_int=1;J_int<=6;J_int++){
    // 01280 FOR K=J TO 6
    for(K_int=J_int;K_int<=6;K_int++){
        // 01290 IF J=K THEN 1310
        if(J_int==K_int)goto Lbl_01310;
        // 01300 IF L(J)=L(K) THEN J=7:K=7:GOTO 1220
        goto Lbl_01220;

  Lbl_01310:
        // 01310 NEXT K
        int dummy_1310=0; // Ignore this line.
    }; // End-For(K_int)
    // 01320 NEXT J
    int dummy_1320=0; // Ignore this line.
}; // End-For(J_int)
// 01330 REM  SET # ARROWS

  Lbl_01340:
// 01340 A=5
A_int = 5;
// 01350 L=L(1)
L_int = L_int_arr[(int)1];
// 01360 REM  RUN THE GAME
// 01370 REM  HAZARD WARNINGS & LOCATION

  Lbl_01380:
// 01380 GOSUB 3180
Routine_03180();
// 01390 REM  MOVE OR SHOOT

  Lbl_01400:
// 01400 GOSUB 3360
Routine_03360();
// 01410 ON O GOTO 1430,1470
switch((int)(O_int)){
    case 1: goto Lbl_01430;
    case 2: goto Lbl_01470;
    default: break; 
};
// 01420 REM  SHOOT

  Lbl_01430:
// 01430 GOSUB 3470
Routine_03470();
// 01440 IF F=0 THEN 1400
if(F_int==0)goto Lbl_01400;
// 01450 GOTO 1490
goto Lbl_01490;
// 01460 REM  MOVE

  Lbl_01470:
// 01470 GOSUB 3650
Routine_03650();
// 01480 IF F=0 THEN 1380
if(F_int==0)goto Lbl_01380;

  Lbl_01490:
// 01490 IF F>0 THEN 1540
if(F_int>0)goto Lbl_01540;

  Lbl_01500:
// 01500 REM  LOSE
// 01510 PRINT "HA HA HA - YOU LOSE!     ";
b2c_fprintf(stdout,"HA HA HA - YOU LOSE!     "); 
// 01520 GOTO 1560
goto Lbl_01560;
// 01530 REM  WIN

  Lbl_01540:
// 01540 PRINT "HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!"
b2c_fprintf(stdout,"HEE HEE HEE - THE WUMPUS'LL GETCHA NEXT TIME!!"); b2c_fprintf(stdout,"\n");
// 01550 PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

  Lbl_01560:
// 01560 FOR J=1 TO 6
for(J_int=1;J_int<=6;J_int++){
    // 01570 L(J)=M(J)
    L_int_arr[(int)J_int] = M_int_arr[(int)J_int];
    // 01580 NEXT J
    int dummy_1580=0; // Ignore this line.
}; // End-For(J_int)
// 01590 INPUT "WANT TO PLAY AGAIN";I$:CLS
ClearScreen(0);
// 01600 IF LEFT$(I$,1)<>"Y" THEN 2540
if(strcmp(LEFT(I_str,1),"Y")!=0)goto Lbl_02540;
// 01610 PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

  Lbl_01620:
// 01620 INPUT "SAME SET-UP";I$
// Start of Basic INPUT statement 01620
printf("SAME SET-UP");
char inpbuf_01620[100];
if(fgets(inpbuf_01620,100,stdin)==nullptr){
    fprintf(stderr,"ERROR: End of file on input.\n");
    exit(2);
}else{
    char *ps_01620=strtok(inpbuf_01620," ,\t\n");
    I_str=strdup(inpbuf_01620);
}; // End of Basic INPUT statement 01620
// 01630 PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 01640 IF LEFT$(I$,1)="Y" THEN 1340
if(strcmp(LEFT(I_str,1),"Y")==0)goto Lbl_01340;
// 01650 INPUT "SAME CAVE";I$
// Start of Basic INPUT statement 01650
printf("SAME CAVE");
char inpbuf_01650[100];
if(fgets(inpbuf_01650,100,stdin)==nullptr){
    fprintf(stderr,"ERROR: End of file on input.\n");
    exit(2);
}else{
    char *ps_01650=strtok(inpbuf_01650," ,\t\n");
    I_str=strdup(inpbuf_01650);
}; // End of Basic INPUT statement 01650
// 01660 PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 01670 IF LEFT$(I$,1)="Y" THEN 1220
if(strcmp(LEFT(I_str,1),"Y")==0)goto Lbl_01220;
// 01680 GOTO 1190
goto Lbl_01190;
// 01740 REM  SHOOT ARROW
// 01830 REM  NO TUNNEL FOR ARROW
// 01910 REM  MOVE WUMPUS
// 01930 REM  AMMO CHECK
// 01970 REM  SEE IF ARROW IS AT L(1) OR L(2)
// 02210 REM  BATS
// 02280 REM  SELECT CAVE

  Lbl_02540:
// 02540 PRINT @ 401,"THANK YOU FOR PLAYING WITH ME!"
b2c_fprintf(stdout,"THANK YOU FOR PLAYING WITH ME!"); b2c_fprintf(stdout,"\n");
// 02550 RUN"MENU"
system(""MENU"");
// 02560 PRINT:PRINT"TO LOAD ANOTHER PROGRAM, TYPE 'CLOAD'.":PRINT:END
// 02570 REM  DODECAHEDRON
// 02580 DATA 2,5,8,1,3,10,2,4,12,3,5,14,1,4,6,5,7,15,6,8,17,1
// 02590 DATA 7,8,9,10,18,2,9,11,10,12,19,3,11,13,12,14,20,4,13
// 02600 DATA 15,6,14,16,15,17,20,7,16,18,9,17,19,11,18,20,13,16,19
// 02610 REM  MOBIUS STRIP
// 02620 DATA 20,2,3,19,1,4,1,4,5,2,3,6,3,6,7,4,5,8,5,8,9,6,7
// 02630 DATA 10,7,10,11,8,9,12,9,12,13,10,11,14,11,14,15,12,13
// 02640 DATA 16,12,16,17,14,15,18,15,18,19,16,17,20,2,17,20,1,18,19
// 02650 REM  STRING OF BEADS
// 02660 DATA 2,3,20,1,3,4,1,2,4,2,3,5,4,6,7,5,7,8,5,6,8,6,7
// 02670 DATA 9,8,10,11,9,11,12,9,10,12,10,11,13,12,14,15,13,15,1
// 02680 DATA 6,13,14,16,14,15,17,16,18,19,17,19,20,17,18,20,1,18,19
// 02690 REM  HEX NETWORK
// 02700 DATA 6,10,16,6,7,17,7,8,18,8,9,19,9,10,20,1,2,15,2,3,1
// 02710 DATA 1,3,4,12,4,5,13,1,5,14,7,16,20,8,16,17,9,17,18,10
// 02720 DATA 18,19,6,19,20,1,11,12,2,12,13,3,13,14,4,14,15,5,11,15
// 02730 REM  DENDRITE W/ DEGENERACIES
// 02740 DATA 1,1,5,2,2,5,3,3,6,4,4,6,1,2,7,3,4,7,5,6,10,8,9
// 02750 DATA 9,8,8,10,7,9,11,10,13,14,12,13,13,11,12,12,11,15,16
// 02760 DATA 14,17,18,14,19,20,15,17,17,15,18,18,16,19,19,16,20,20
// 02770 REM  ONE WAY LATTICE
// 02780 DATA 5,4,8,1,5,6,2,6,7,3,7,8,8,9,12,5,9,10,6,10,11,7
// 02790 DATA 11,12,12,13,16,9,13,14,10,14,15,11,15,16,16,17,20,13
// 02800 DATA 17,18,14,18,19,15,19,20,1,4,20,1,2,17,2,3,18,3,4,19
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
