/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/othelo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x645f76a1e550 ---------A   01000 REM********		OTHELLO          BYTE VOL. 2, NUMBER 10 (OCT. 1977)
    0x645f76a1e5d0 ---------A   01010 REM********		PLAYS THE GAME OTHELLO WITH TWO STRATEGIES
    0x645f76a2e210 ---------A   01020 REM********		1. TAKE THE MAX. NUMBER OF PIECES
    0x645f76a1e2f0 ---------A   01030 REM********		2. ADD A BONUS FOR OUTSIDE POSITION
    0x645f76a2f520 ---------A   01040 REM********		BOARD IS THE ARRAY A, BOUNDED BY 0'S (BLANKS)
    0x645f76a2d920 ---------A   01050 REM********		A = 0 FOR EMPTY SQUARE
    0x645f76a2d730 ---------A   01060 REM********		A = B FOR BLACK SQUARE
    0x645f76a2f9e0 ---------A   01070 REM********		A = W FOR WHITE SQUARE
    0x645f76a2df80 ---------A   01080 REM********		I AND J ARE ALWAYS USED FOR ROW/COLUMN INDICES
    0x645f76a2dd80 ---------A   01090 REM********		I1 AND J4 STORE INCREMENTS TO THE 8 NEIGHBOURS
    0x645f76a2e410 ---------A   01100 REM********		C$ AND D$ STORE CHARACTERS A-H,X,...,O FOR OUTPUT
    0x645f76a359c0 ---------A   01110 DIM A(9,9),I4(8),J4(8),C$(8),D$(2)
    0x645f76a35a00 ---------A   01120 REM********		
    0x645f76a35b40 ---------A   01130 PRINT "GREETINGS FROM OTHELLO!"
    0x645f76a35c50 ---------A   01140 PRINT "DO YOU WANT INSTRUCTIONS (Y OR N)";
    0x645f76a2d610 ---------A T 01150 INPUT X$
    0x645f76a2d5b0 ---------A   01160 IF X$ = "N" THEN 1380
    0x645f76a36240 ---------A   01170 IF X$ <> "Y" THEN 1150
    0x645f76a362e0 ---------A   01180 PRINT
    0x645f76a36480 ---------A   01190 PRINT "OTHELLO IS PLAYED ON AN 8X8 CHECKER BOARD"
    0x645f76a36620 ---------A   01200 PRINT "ROWS ARE NUMBERED FROM 1 TO 8 AND COLUMNS FROM A TO H"
    0x645f76a367c0 ---------A   01210 PRINT" THE INITIAL CONFIGURATION IS ALL BLANK EXCEPT FOR"
    0x645f76a36910 ---------A   01220 PRINT "THE CENTER FOUR SQUARES, WHICH FORM THE PATTERN:"
    0x645f76a36a40 ---------A   01230 PRINT "               O X"
    0x645f76a36b90 ---------A   01240 PRINT "               X O"
    0x645f76a36c30 ---------A   01250 PRINT
    0x645f76a36de0 ---------A   01260 PRINT "TRY TO PLACE YOUR PIECE SO THAT IT WILL 'OUTFLANK' MINE"
    0x645f76a36f80 ---------A   01270 PRINT "THEREBY CREATING A HORIZONTAL, VERTICAL, OR DIAGONAL "
    0x645f76a37120 ---------A   01280 PRINT "RUN OF MY PIECES BOUNDED AT EACH END BY AT LEAST ONE "
    0x645f76a372a0 ---------A   01290 PRINT "OF YOURS.  THIS WILL 'FLIP' MY PIECES, TURNING THEM INTO"
    0x645f76a37420 ---------A   01300 PRINT "YOURS."
    0x645f76a375c0 ---------A   01310 PRINT"     NOTE: YOU MUST CAPTURE AT LEAST ONE OF MY PIECES"
    0x645f76a37760 ---------A   01320 PRINT "IN THIS WAY IF IT IS AT ALL POSSIBLE.  IF IT IS NOT"
    0x645f76a37b00 ---------A   01330 PRINT "POSSIBLE, YOU FORFEIT YOUR TURN BY ENTERING"
    0x645f76a37c70 ---------A   01340 PRINT "     0,0   FOR YOUR ROW,COLUMN MOVE"
    0x645f76a37dc0 ---------A   01350 PRINT " GOOD LUCK!"
    0x645f76a37e30 ---------A   01360 PRINT
    0x645f76a37ea0 ---------A   01370 REM********		
    0x645f76a38070 ---------A T 01380 PRINT "SHOULD I WAIT BEFORE MAKING MY MOVES (Y OR N)";
    0x645f76a38340 ---------A   01390 F2 = 0
    0x645f76a38610 ---------A   01400 F9 = 1
    0x645f76a38770 ---------A T 01410 INPUT X$
    0x645f76a38a00 ---------A   01420 IF X$ = "N" THEN 1460
    0x645f76a38c80 ---------A   01430 IF X$ <> "Y" THEN  1410
    0x645f76a38ed0 ---------A   01440 F2 = 1
    0x645f76a39060 ---------A   01450         PRINT "OK.  TYPING ANY CHARACTER WILL LET ME GO"
    0x645f76a391f0 ---------A T 01460 PRINT "SHOULD I PLAY MY BEST STRATEGY (Y OR N)";
    0x645f76a394c0 ---------A   01470 S2 = 0
    0x645f76a39620 ---------A T 01480 INPUT X$
    0x645f76a398b0 ---------A   01490 IF X$ = "N" THEN 1520
    0x645f76a39b30 ---------A   01500 IF X$ <> "Y" THEN 1480
    0x645f76a39d50 ---------A   01510 S2 = 2
    0x645f76a3a020 ---------A T 01520 B = -1
    0x645f76a3a2f0 ---------A   01530 W = +1
    0x645f76a3a700 ---------A   01540 D$(B +1) ="X"
    0x645f76a3aaf0 ---------A   01550 D$(0 +1) = "."
    0x645f76a3af00 ---------A   01560 D$(W + 1) ="O"
    0x645f76a3b290 ---------A   01570 FOR K = 1 TO 8
    0x645f76a3b4d0 ---------A   01580     READ I4(K)
    0x645f76a3b5f0 ---------A   01590 NEXT K
    0x645f76a3bd80 ---------A   01600 DATA 0,-1,-1,-1,0,1,1,1
    0x645f76a3c050 ---------A   01610 FOR K=1 TO 8
    0x645f76a3c290 ---------A   01620     READ J4(K)
    0x645f76a3c3b0 ---------A   01630 NEXT K
    0x645f76a3cb40 ---------A   01640 DATA 1,1,0,-1,-1,-1,0,1
    0x645f76a3d220 ---------A   01650 FOR K = 1 TO 8
    0x645f76a3d460 ---------A   01660     READ C$(K)
    0x645f76a3d580 ---------A   01670 NEXT K
    0x645f76a3dd20 ---------A   01680 DATA A,B,C,D,E,F,G,H
    0x645f76a3dda0 ---------A   01690 REM********		SET UP A NEW GAME
    0x645f76a3e140 ---------A T 01700 FOR I = 0 TO 9
    0x645f76a3e4e0 ---------A   01710     FOR J = 0 TO 9
    0x645f76a3e8c0 ---------A   01720 	A(I,J)=0
    0x645f76a3e9f0 ---------A   01730     NEXT J
    0x645f76a3eb30 ---------A   01740 NEXT I
    0x645f76a3eef0 ---------A   01750 A(4,4) = W
    0x645f76a3f2a0 ---------A   01760 A(5,5) = W
    0x645f76a3f650 ---------A   01770 A(4,5) = B
    0x645f76a3fa00 ---------A   01780 A(5,4) = B
    0x645f76a3fcd0 ---------A   01790 C1 = 2
    0x645f76a3ffa0 ---------A   01800 H1 = 2
    0x645f76a40270 ---------A   01810 N1 = 4
    0x645f76a40550 ---------A   01820 Z =0
    0x645f76a405d0 ---------A   01830 REM********		HUMAN'S CHOICES
    0x645f76a40780 ---------A   01840 PRINT "DO YOU WANT TO HAVE X OR O";
    0x645f76a40a70 ---------A   01850 C = W
    0x645f76a40d60 ---------A   01860 H = B
    0x645f76a40ec0 ---------A T 01870 INPUT X$
    0x645f76a41150 ---------A   01880 IF X$ = "X" THEN 1920
    0x645f76a413d0 ---------A   01890 IF X$ <> "O" THEN 1870
    0x645f76a41610 ---------A   01900 C = B
    0x645f76a41860 ---------A   01910 H = W
    0x645f76a419e0 ---------A T 01920 PRINT "DO YOU WANT TO GO FIRST (Y OR N)";
    0x645f76a41b30 ---------A T 01930 INPUT X$
    0x645f76a41d60 ---------A   01940 PRINT CHR$(26)
    0x645f76a41fe0 ---------A   01950 IF X$ = "N" THEN 2030
    0x645f76a42270 ---------A   01960 IF X$ <> "Y" THEN 1930
    0x645f76a42300 ---------A   01970 REM********		PRINT INITIAL BOARD
    0x645f76a42380 ---------A   01980 GOSUB 4320
    0x645f76a423f0 ---------A   01990 GO TO 2760
    0x645f76a42460 ---------A   02000 REM********		COMPUTER'S MOVE
    0x645f76a426d0 ---------A T 02010 IF F2 = 0 THEN 2030
    0x645f76a42830 ---------A   02020 INPUT X$
    0x645f76a42b10 ---------A T 02030 B1 = -1
    0x645f76a42f80 ---------A   02040 I3 = J3 = 0
    0x645f76a43270 ---------A   02050 T1 = C
    0x645f76a43570 ---------A   02060 T2 = H
    0x645f76a435f0 ---------A   02070 REM********		SCAN FOR BLANK SQUARE
    0x645f76a438d0 ---------A   02080 FOR I = 1 TO 8
    0x645f76a43bc0 ---------A   02090     FOR J = 1 TO 8
    0x645f76a43ff0 ---------A   02100 	IF A(I,J) <> 0 THEN 2390
    0x645f76a44080 ---------A   02110 	REM********		FOUND A BLANK SQUARE
    0x645f76a44150 ---------A   02120 	REM********		DOES IT HAVE AN OPPONENT AS A NEIGHBOUR
    0x645f76a441e0 ---------A   02130 	GOSUB 3840
    0x645f76a44500 ---------A   02140 	IF F1 = 0 THEN 2390
    0x645f76a445a0 ---------A   02150 	REM********		FOUND OPPONENT AS NEIGHBOUR
    0x645f76a44660 ---------A   02160 	REM********		HOW MANY OF HIS PIECES CAN WE FLIP?
    0x645f76a44700 ---------A   02170 	REM********		DON'T DO IT NOW
    0x645f76a449e0 ---------A   02180 	U = -1
    0x645f76a44a70 ---------A   02190 	GOSUB 4040
    0x645f76a44af0 ---------A   02200 	REM********		EXTRA POINTS FOR BOUNDARY POSITION
    0x645f76a44e30 ---------A   02210 	IF S1 = 0 THEN 2390
    0x645f76a45430 ---------A   02220 	IF (I-1) * (I-8) <> 0 THEN 2240
    0x645f76a457a0 ---------A   02230 	S1 = S1 + S2
    0x645f76a45d90 ---------A T 02240 	IF (J-1) * (J-8) <> 0 THEN 2270
    0x645f76a46120 ---------A   02250 	S1 = S1 +S2
    0x645f76a461b0 ---------A   02260 	REM********		IS THIS BETTER THAN THE BEST FOUND SO FAR
    0x645f76a46450 ---------A T 02270 	IF S1 < B1 THEN 2390
    0x645f76a466f0 ---------A   02280 	IF S1 > B1 THEN 2350
    0x645f76a46f90 ---------A   02290 	REM********		A TIE; RANDOM DECISION
    0x645f76a47060 ---------A   02300 	REM********		THE NEXT TWO EXECUTABLE STATEMENTS ARE FOR
    0x645f76a47110 ---------A   02310 	REM********		BASIC WITH RANDOM NUMBERS
    0x645f76a474e0 ---------A   02320 	R = RND(1)
    0x645f76a47730 ---------A   02330 	IF R > .5 THEN 2390
    0x645f76a477b0 ---------A   02340 	REM********		YES
    0x645f76a479f0 ---------A T 02350 	B1 = S1
    0x645f76a47c20 ---------A   02360 	I3 = I
    0x645f76a47e60 ---------A   02370 	J3 = J
    0x645f76a47ee0 ---------A   02380 	REM********		END OF SCAN LOOP
    0x645f76a48020 ---------A T 02390     NEXT J
    0x645f76a48160 ---------A   02400 NEXT I
    0x645f76a48200 ---------A   02410 REM********		COULD WE DO ANYTHING?
    0x645f76a48470 ---------A   02420 IF B1 > 0 THEN 2510
    0x645f76a484f0 ---------A   02430 REM********		NO
    0x645f76a487d0 ---------A   02440 LET L = 18
    0x645f76a48860 ---------A   02450 GOSUB 4490
    0x645f76a489b0 ---------A   02460 PRINT "DAMN! HAVE TO FORFEIT MY MOVE!"
    0x645f76a48c00 ---------A   02470 IF Z = 1 THEN 3370
    0x645f76a48e20 ---------A   02480 Z = 1
    0x645f76a48ea0 ---------A   02490 GO TO 2760
    0x645f76a48f10 ---------A   02500 REM********		MAKE THE MOVE
    0x645f76a49130 ---------A T 02510 Z = 0
    0x645f76a49340 ---------A   02520 LET L=15
    0x645f76a493c0 ---------A   02530 GOSUB 4490
    0x645f76a49520 ---------A   02540 PRINT "I WILL MOVE TO ";
    0x645f76a49690 ---------A   02550 PRINT I3;
    0x645f76a49800 ---------A   02560 PRINT " , ";
    0x645f76a49a30 ---------A   02570 PRINT C$(J3)
    0x645f76a49c60 ---------A   02580 I= I3
    0x645f76a49e90 ---------A   02590 J= J3
    0x645f76a4a0a0 ---------A   02600 U= 1
    0x645f76a4a110 ---------A   02610 GOSUB 4040
    0x645f76a4a550 ---------A   02620 C1 = C1 + S1 + 1
    0x645f76a4a8a0 ---------A   02630 H1 = H1 - S1
    0x645f76a4abd0 ---------A   02640 N1 = N1 + 1
    0x645f76a4ade0 ---------A   02650 LET L=16
    0x645f76a4ae60 ---------A   02660 GOSUB 4490
    0x645f76a4afc0 ---------A   02670 PRINT " THAT GIVES ME : ";
    0x645f76a4b140 ---------A   02680 PRINT S1;
    0x645f76a4b2a0 ---------A   02690 PRINT " OF YOUR PIECES"
    0x645f76a4b320 ---------A   02700 REM********		PRINT OUT BOARD
    0x645f76a4b3b0 ---------A   02710 GOSUB 4320
    0x645f76a4b420 ---------A   02720 REM********		TEST FOR END OF GAME
    0x645f76a4b6a0 ---------A   02730 IF H1 = 0 THEN 3370
    0x645f76a4b910 ---------A   02740 IF N1 = 64 THEN 3370
    0x645f76a4b9a0 ---------A   02750 REM********		HUMANS MOVE
    0x645f76a4bbe0 ---------A T 02760 T1 = H
    0x645f76a4be10 ---------A   02770 T2 = C
    0x645f76a4c020 ---------A   02780 LET L = 12
    0x645f76a4c0a0 ---------A   02790 GOSUB 4490
    0x645f76a4c200 ---------A T 02800 PRINT " YOUR MOVE";
    0x645f76a4c430 ---------A T 02810 INPUT I, X$
    0x645f76a4c690 ---------A   02820 IF I < 0 THEN 2810
    0x645f76a4c900 ---------A   02830 IF I > 8 THEN 2810
    0x645f76a4cb60 ---------A   02840 IF I <> 0 THEN 2930
    0x645f76a4cd80 ---------A   02850 LET L = 18
    0x645f76a4ce10 ---------A   02860 GOSUB 4490
    0x645f76a4cf60 ---------A   02870 PRINT "ARE YOU FORFEITING YOUR TURN Y OR N"
    0x645f76a4d0c0 ---------A   02880 INPUT X$
    0x645f76a4d340 ---------A   02890 IF X$ <> "Y" THEN 2800
    0x645f76a4d5a0 ---------A   02900 IF Z = 1 THEN 3370
    0x645f76a4d7c0 ---------A   02910 Z = 1
    0x645f76a4d830 ---------A   02920 GO TO 2010
    0x645f76a4db00 ---------A T 02930 FOR J = 1 TO 8
    0x645f76a4de60 ---------A   02940     IF C$(J) =X$ THEN 2980
    0x645f76a4dfa0 ---------A   02950 NEXT J
    0x645f76a4e030 ---------A   02960 GO TO 2810
    0x645f76a4e0a0 ---------A   02970 REM********		CHECK FOR BLANK
    0x645f76a4e4d0 ---------A T 02980 IF A(I,J) = 0 THEN 3040
    0x645f76a4e6f0 ---------A   02990 LET L = 18
    0x645f76a4e780 ---------A   03000 GOSUB 4490
    0x645f76a4e8e0 ---------A   03010 PRINT "SORRY, THAT SQUARE IS OCCUPIED, TRY AGAIN"
    0x645f76a4e970 ---------A   03020 GO TO 2810
    0x645f76a4e9e0 ---------A   03030 REM********		CHECK FOR LEGAL NEIGHBOUR
    0x645f76a4ea70 ---------A T 03040 GOSUB 3840
    0x645f76a4ecb0 ---------A   03050 IF F1 = 1 THEN 3110
    0x645f76a4eed0 ---------A   03060 LET L = 18
    0x645f76a4ef70 ---------A   03070 GOSUB 4490
    0x645f76a4f100 ---------A   03080 PRINT "SORRY, YOU ARE NOT NEXT TO ONE OF MY PIECES. TRY AGAIN.";
    0x645f76a4f180 ---------A   03090 GO TO 2810
    0x645f76a4f1f0 ---------A   03100 REM********		CHECK IF LEGAL RUN
    0x645f76a4f410 ---------A T 03110 U = -1
    0x645f76a4f490 ---------A   03120 GOSUB 4040
    0x645f76a4f6d0 ---------A   03130 IF S1 > 0 THEN 3190
    0x645f76a4f8f0 ---------A   03140 LET L = 18
    0x645f76a4f980 ---------A   03150 GOSUB 4490
    0x645f76a4fae0 ---------A   03160 PRINT "SORRY, THAT DOESN'T FLANK A ROW, TRY AGAIN"
    0x645f76a4fb70 ---------A   03170 GO TO 2810
    0x645f76a4fbf0 ---------A   03180 REM********		EVERYTHING LEGAL; MAKE HUMANS MOVE
    0x645f76a4fe10 ---------A T 03190 Z = 0
    0x645f76a50020 ---------A   03200 LET L = 13
    0x645f76a500a0 ---------A   03210 GOSUB 4490
    0x645f76a50200 ---------A   03220 PRINT "THAT GIVES YOU";
    0x645f76a50380 ---------A   03230 PRINT S1;
    0x645f76a504d0 ---------A   03240 PRINT " OF MY PIECES"
    0x645f76a506e0 ---------A   03250 U = 1
    0x645f76a50750 ---------A   03260 GOSUB 4040
    0x645f76a50b90 ---------A   03270 H1 = H1 + S1 + 1
    0x645f76a50ee0 ---------A   03280 C1 = C1 -S1
    0x645f76a51220 ---------A   03290 N1 = N1 + 1
    0x645f76a512a0 ---------A   03300 REM********		PRINT OUT BOARD
    0x645f76a51330 ---------A   03310 GOSUB 4320
    0x645f76a513a0 ---------A   03320 REM********		TEST FOR END OF GAME
    0x645f76a51620 ---------A   03330 IF C1 = 0 THEN 3370
    0x645f76a51880 ---------A   03340 IF N1 = 64 THEN 3370
    0x645f76a51910 ---------A   03350 GO TO 2010
    0x645f76a51980 ---------A   03360 REM********		END OF GAME ; WRAPUP
    0x645f76a51ba0 ---------A T 03370 LET L = 18
    0x645f76a51c30 ---------A   03380 GOSUB 4490
    0x645f76a51d80 ---------A   03390 PRINT "FOR RESULTS ON GAME TYPE RETURN!!"
    0x645f76a51ee0 ---------A   03400 INPUT X$
    0x645f76a522c0 ---------A   03410 PRINT CHR$(30),CHR$(26)
    0x645f76a52430 ---------A   03420 PRINT "YOU HAVE ";
    0x645f76a525b0 ---------A   03430 PRINT H1;
    0x645f76a52720 ---------A   03440 PRINT " PIECES, AND I HAVE ";
    0x645f76a528a0 ---------A   03450 PRINT C1;
    0x645f76a52a00 ---------A   03460 PRINT " PIECES--- "
    0x645f76a52c80 ---------A   03470 IF H1 = C1 THEN 3510
    0x645f76a52f10 ---------A   03480 IF H1 > C1 THEN 3530
    0x645f76a53080 ---------A   03490 PRINT "SORRY, I WON THAT ONE."
    0x645f76a53100 ---------A   03500 GO TO 3540
    0x645f76a53240 ---------A T 03510 PRINT " A TIE!!!!!"
    0x645f76a532b0 ---------A   03520 GO TO 3720
    0x645f76a533f0 ---------A T 03530 PRINT "YOU WON!!!"
    0x645f76a53750 ---------A T 03540 C1 = C1 - H1
    0x645f76a539a0 ---------A   03550 IF C1 > 0 THEN 3570
    0x645f76a53be0 ---------A   03560 C1 = -C1
    0x645f76a46ba0 ---------A T 03570 C1 = (64 * C1)/ N1
    0x645f76a46d20 ---------A   03580 PRINT "THAT WAS A ";
    0x645f76a54c70 ---------A   03590 IF C1 < 11 THEN 3710
    0x645f76a54ee0 ---------A   03600 IF C1 < 25 THEN 3690
    0x645f76a55150 ---------A   03610 IF C1 < 39 THEN 3670
    0x645f76a553c0 ---------A   03620 IF C1 < 53 THEN 3650
    0x645f76a55520 ---------A   03630 PRINT " A PERFECT GAME!"
    0x645f76a55590 ---------A   03640 GO TO 3720
    0x645f76a556d0 ---------A T 03650 PRINT "WALKAWAY!"
    0x645f76a55740 ---------A   03660 GO TO 3720
    0x645f76a55880 ---------A T 03670 PRINT "FIGHT!"
    0x645f76a558f0 ---------A   03680 GO TO 3720
    0x645f76a55a30 ---------A T 03690 PRINT "HOT GAME!"
    0x645f76a55aa0 ---------A   03700 GO TO 3720
    0x645f76a55be0 ---------A T 03710 PRINT "SQUEAKER!"
    0x645f76a55c60 ---------A T 03720 PRINT
    0x645f76a55de0 ---------A   03730 PRINT"DO YOU WANT TO PLAY AGAIN";
    0x645f76a55f40 ---------A T 03740 INPUT X$
    0x645f76a561d0 ---------A   03750 IF X$ = "Y" THEN 1700
    0x645f76a56460 ---------A   03760 IF X$ <> "N" THEN 3740
    0x645f76a565c0 ---------A   03770 PRINT "THANKS FOR PLAYING."
    0x645f76a56610 ---------A   03780 STOP
    0x645f76a56690 ---------B   03790 REM********		
    0x645f76a56750 ---------B   03800 REM********		SUBROUTINE: TEST FOR PROPER NEIGHBOUR
    0x645f76a567e0 ---------B   03810 REM********		ASSUMES:
    0x645f76a56890 ---------B   03820 REM********		I,J LOCATES A BLANK SQUARE
    0x645f76a56960 ---------B   03830 REM********		YOU HOPE TO SEE AN ADJACENT  T2 (= -T1)
    0x645f76a56d10 ---------B G 03840 FOR I1 =  -1 TO 1
    0x645f76a570c0 ---------B   03850     FOR J1 = -1 TO 1
    0x645f76a57740 ---------B   03860 	IF  A(I+I1,J+J1) = T2 THEN 3930
    0x645f76a57880 ---------B   03870     NEXT J1
    0x645f76a579c0 ---------B   03880 NEXT I1
    0x645f76a57a60 ---------B   03890 REM********		NO T2 FOUND
    0x645f76a57c80 ---------B   03900 F1 = 0
    0x645f76a57cd0 ---------B   03910 RETURN
    0x645f76a57d60 ---------A   03920 REM********		SUCCESS
    0x645f76a57f80 ---------B T 03930 F1 = 1
    0x645f76a57fd0 ---------B   03940 RETURN
    0x645f76a58090 ---------C   03950 REM********		SUBROUTINE SCORE AND UPDATE
    0x645f76a58120 ---------C   03960 REM********		ASSUMES;
    0x645f76a581f0 ---------C   03970 REM********		(I,J) IS A TENTATIVE PLACE FOR A PIECE T1.
    0x645f76a582c0 ---------C   03980 REM********		WANT RUNS OF T2 = -T1, TERMINATED BY A T1.
    0x645f76a58390 ---------C   03990 REM********		IF U IS TRUE (1), MARK THOSE RUNS AS T1'S.
    0x645f76a58460 ---------C   04000 REM********		RETURN SUM OF ALL RUNS (T2'S ONLY) IN S1.
    0x645f76a58540 ---------C   04010 REM********		MAIN PROGRAM CONTAINS THE FOLLOWING ARRAYS:
    0x645f76a58600 ---------C   04020 REM********		I4:  0 -1 -1 -1  0  1  1  1
    0x645f76a586c0 ---------C   04030 REM********		J4:  1  1  0 -1 -1 -1  0  1
    0x645f76a588e0 ---------C G 04040 S1 = 0
    0x645f76a58bb0 ---------C   04050 FOR K = 1 TO 8
    0x645f76a58f90 ---------C   04060     I5 = I4(K)
    0x645f76a59360 ---------C   04070     J5 = J4(K)
    0x645f76a59770 ---------C   04080     I6 = I + I5
    0x645f76a59b80 ---------C   04090     J6 = J + J5
    0x645f76a59e60 ---------C   04100     S3 = 0
    0x645f76a5a2a0 ---------C   04110     IF A(I6,J6) <> T2 THEN 4290
    0x645f76a5a330 ---------C   04120     REM			LOOP THROUGH THE RUN
    0x645f76a5a670 ---------C T 04130     S3 = S3 + 1
    0x645f76a5a9c0 ---------C   04140     I6 = I6 + I5
    0x645f76a5ad20 ---------C   04150     J6 = J6 + J5
    0x645f76a5b160 ---------C   04160     IF A (I6,J6) = T1 THEN 4190
    0x645f76a5b580 ---------C   04170     IF A(I6,J6) = 0 THEN 4290
    0x645f76a5b600 ---------C   04180     GO TO 4130
    0x645f76a5b950 ---------C T 04190     S1 = S1 + S3
    0x645f76a5bbb0 ---------C   04200     IF U <> 1 THEN 4290
    0x645f76a5bc30 ---------C   04210     REM			UPDATE BOARD
    0x645f76a5be70 ---------C   04220     I6 = I
    0x645f76a5c0b0 ---------C   04230     J6 = J
    0x645f76a5c460 ---------C   04240     FOR K1 = 0 TO S3
    0x645f76a5c860 ---------C   04250 	A(I6,J6) = T1
    0x645f76a5cbb0 ---------C   04260 	I6 = I6 + I5
    0x645f76a5cf00 ---------C   04270 	J6 = J6 + J5
    0x645f76a5d030 ---------C   04280     NEXT K1
    0x645f76a5d170 ---------C T 04290 NEXT K
    0x645f76a5d1d0 ---------C   04300 RETURN
    0x645f76a5d280 ---------D   04310 REM********		SUBROUTINE TO PRINT BOARD
    0x645f76a5d4a0 ---------D G 04320 PRINT CHR$(30)
    0x645f76a5d6c0 ---------D   04330 LET L = 18
    0x645f76a5d8f0 ---------D   04340 IF F9 = 1 GO TO 4370
    0x645f76a5d990 ---------D   04350 GOSUB 4570
    0x645f76a5db90 ---------D   04360 LET F9 = 1
    0x645f76a5ddb0 ---------D T 04370 PRINT CHR$(30)
    0x645f76a5df00 ---------D   04380 PRINT "    A B C D E F G H"
    0x645f76a5e1d0 ---------D   04390 FOR I = 1 TO 8
    0x645f76a5e350 ---------D   04400     PRINT I;
    0x645f76a5e620 ---------D   04410     FOR J = 1 TO 8
    0x645f76a5e7b0 ---------D   04420 	PRINT " ";
    0x645f76a5ecc0 ---------D   04430 	PRINT D$(A(I,J)+1);
    0x645f76a5edf0 ---------D   04440     NEXT J
    0x645f76a5ee70 ---------D   04450     PRINT
    0x645f76a5efa0 ---------D   04460 NEXT I
    0x645f76a5f020 ---------D   04470 PRINT
    0x645f76a5f070 ---------D   04480 RETURN
    0x645f76a5f110 ---------E G 04490 REM********		***	SPACE		***
    0x645f76a5f330 ---------E   04500 PRINT CHR$(30)
    0x645f76a5f6e0 ---------E   04510 FOR I9 = 1 TO L
    0x645f76a5f760 ---------E   04520     PRINT
    0x645f76a5f890 ---------E   04530 NEXT I9
    0x645f76a5fae0 ---------E   04540 IF L <> 18 GO TO 4560
    0x645f76a5fd20 ---------E   04550 F9 = 0
    0x645f76a5fd70 ---------E T 04560 RETURN
    0x645f76a5fe10 ---------F G 04570 REM********		***	BLANK OUT	***
    0x645f76a5fe90 ---------F   04580 GOSUB 4490
    0x645f76a60110 ---------F   04590 PRINT TAB(60);" "
    0x645f76a603a0 ---------F   04600 PRINT TAB(60);" "
    0x645f76a603f0 ---------F   04610 RETURN
    0x645f76a60450 ---------A   04620 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01150      01170T
     01380      01160T
     01410      01430T
     01460      01420T
     01480      01500T
     01520      01490T
     01700      03750T
     01870      01890T
     01920      01880T
     01930      01960T
     02010      02920T, 03350T
     02030      01950T, 02010T
     02240      02220T
     02270      02240T
     02350      02280T
     02390      02100T, 02140T, 02210T, 02270T, 02330T
     02510      02420T
     02760      01990T, 02490T
     02800      02890T
     02810      02820T, 02830T, 02960T, 03020T, 03090T, 03170T
     02930      02840T
     02980      02940T
     03040      02980T
     03110      03050T
     03190      03130T
     03370      02470T, 02730T, 02740T, 02900T, 03330T, 03340T
     03510      03470T
     03530      03480T
     03540      03500T
     03570      03550T
     03650      03620T
     03670      03610T
     03690      03600T
     03710      03590T
     03720      03520T, 03640T, 03660T, 03680T, 03700T
     03740      03760T
     03840      02130G, 03040G
     03930      03860T
     04040      02190G, 02610G, 03120G, 03260G
     04130      04180T
     04190      04160T
     04290      04110T, 04170T, 04200T
     04320      01980G, 02710G, 03310G
     04370      04340T
     04490      02450G, 02530G, 02660G, 02790G, 02860G, 03000G, 03070G, 03150G, 
                03210G, 03380G, 04580G
     04560      04540T
     04570      04350G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x645f76a1e550 (01000)   0x000000000000 (00000)   0x645f76a60450 (04620)   0x645f76a60450 (04620)   
   B) 0x645f76a56690 (03790)   0x645f76a56d10 (03840)   0x645f76a57cd0 (03910)   0x645f76a57fd0 (03940)   
   C) 0x645f76a58090 (03950)   0x645f76a588e0 (04040)   0x645f76a5d1d0 (04300)   0x645f76a5d1d0 (04300)   
   D) 0x645f76a5d280 (04310)   0x645f76a5d4a0 (04320)   0x645f76a5f070 (04480)   0x645f76a5f070 (04480)   
   E) 0x645f76a5f110 (04490)   0x645f76a5f110 (04490)   0x645f76a5fd70 (04560)   0x645f76a5fd70 (04560)   
   F) 0x645f76a5fe10 (04570)   0x645f76a5fe10 (04570)   0x645f76a603f0 (04610)   0x645f76a603f0 (04610)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     04680 - 10000    5330 

 */



/*
 *  Symbol Table Listing for 'basic/othelo.bas'
 *
    A               Array    Float           {0,8} {0,8} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
    B1                       Float       
    C                        Float       
    C$              Array    String          {0,7} 
    C1                       Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D$              Array    String          {0,1} 
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F1                       Float       
    F2                       Float       
    F9                       Float       
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Float       
    H1                       Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    I1                       Float       
    I3                       Float       
    I4              Array    Float           {0,7} 
    I5                       Float       
    I6                       Float       
    I9                       Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    J1                       Float       
    J3                       Float       
    J4              Array    Float           {0,7} 
    J5                       Float       
    J6                       Float       
    K                        Float       
    K1                       Float       
    L                        Float       
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
    N1                       Float       
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S1                       Float       
    S2                       Float       
    S3                       Float       
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T1                       Float       
    T2                       Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Float       
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Float       
    X$                       String      
    Z                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/othelo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x645f76a1e550 ---------A   01000 REM********		OTHELLO          BYTE VOL. 2, NUMBER 10 (OCT. 1977)
    0x645f76a1e5d0 ---------A   01010 REM********		PLAYS THE GAME OTHELLO WITH TWO STRATEGIES
    0x645f76a2e210 ---------A   01020 REM********		1. TAKE THE MAX. NUMBER OF PIECES
    0x645f76a1e2f0 ---------A   01030 REM********		2. ADD A BONUS FOR OUTSIDE POSITION
    0x645f76a2f520 ---------A   01040 REM********		BOARD IS THE ARRAY A, BOUNDED BY 0'S (BLANKS)
    0x645f76a2d920 ---------A   01050 REM********		A = 0 FOR EMPTY SQUARE
    0x645f76a2d730 ---------A   01060 REM********		A = B FOR BLACK SQUARE
    0x645f76a2f9e0 ---------A   01070 REM********		A = W FOR WHITE SQUARE
    0x645f76a2df80 ---------A   01080 REM********		I AND J ARE ALWAYS USED FOR ROW/COLUMN INDICES
    0x645f76a2dd80 ---------A   01090 REM********		I1 AND J4 STORE INCREMENTS TO THE 8 NEIGHBOURS
    0x645f76a2e410 ---------A   01100 REM********		C$ AND D$ STORE CHARACTERS A-H,X,...,O FOR OUTPUT
    0x645f76a359c0 ---------A   01110 DIM A(9,9),I4(8),J4(8),C$(8),D$(2)
    0x645f76a35a00 ---------A   01120 REM********		
    0x645f76a35b40 ---------A   01130 PRINT "GREETINGS FROM OTHELLO!"
    0x645f76a35c50 ---------A   01140 PRINT "DO YOU WANT INSTRUCTIONS (Y OR N)";
    0x645f76a2d610 ---------A T 01150 INPUT X$
    0x645f76a2d5b0 ---------A   01160 IF X$ = "N" THEN 1380
    0x645f76a36240 ---------A   01170 IF X$ <> "Y" THEN 1150
    0x645f76a362e0 ---------A   01180 PRINT
    0x645f76a36480 ---------A   01190 PRINT "OTHELLO IS PLAYED ON AN 8X8 CHECKER BOARD"
    0x645f76a36620 ---------A   01200 PRINT "ROWS ARE NUMBERED FROM 1 TO 8 AND COLUMNS FROM A TO H"
    0x645f76a367c0 ---------A   01210 PRINT" THE INITIAL CONFIGURATION IS ALL BLANK EXCEPT FOR"
    0x645f76a36910 ---------A   01220 PRINT "THE CENTER FOUR SQUARES, WHICH FORM THE PATTERN:"
    0x645f76a36a40 ---------A   01230 PRINT "               O X"
    0x645f76a36b90 ---------A   01240 PRINT "               X O"
    0x645f76a36c30 ---------A   01250 PRINT
    0x645f76a36de0 ---------A   01260 PRINT "TRY TO PLACE YOUR PIECE SO THAT IT WILL 'OUTFLANK' MINE"
    0x645f76a36f80 ---------A   01270 PRINT "THEREBY CREATING A HORIZONTAL, VERTICAL, OR DIAGONAL "
    0x645f76a37120 ---------A   01280 PRINT "RUN OF MY PIECES BOUNDED AT EACH END BY AT LEAST ONE "
    0x645f76a372a0 ---------A   01290 PRINT "OF YOURS.  THIS WILL 'FLIP' MY PIECES, TURNING THEM INTO"
    0x645f76a37420 ---------A   01300 PRINT "YOURS."
    0x645f76a375c0 ---------A   01310 PRINT"     NOTE: YOU MUST CAPTURE AT LEAST ONE OF MY PIECES"
    0x645f76a37760 ---------A   01320 PRINT "IN THIS WAY IF IT IS AT ALL POSSIBLE.  IF IT IS NOT"
    0x645f76a37b00 ---------A   01330 PRINT "POSSIBLE, YOU FORFEIT YOUR TURN BY ENTERING"
    0x645f76a37c70 ---------A   01340 PRINT "     0,0   FOR YOUR ROW,COLUMN MOVE"
    0x645f76a37dc0 ---------A   01350 PRINT " GOOD LUCK!"
    0x645f76a37e30 ---------A   01360 PRINT
    0x645f76a37ea0 ---------A   01370 REM********		
    0x645f76a38070 ---------A T 01380 PRINT "SHOULD I WAIT BEFORE MAKING MY MOVES (Y OR N)";
    0x645f76a38340 ---------A   01390 F2 = 0
    0x645f76a38610 ---------A   01400 F9 = 1
    0x645f76a38770 ---------A T 01410 INPUT X$
    0x645f76a38a00 ---------A   01420 IF X$ = "N" THEN 1460
    0x645f76a38c80 ---------A   01430 IF X$ <> "Y" THEN  1410
    0x645f76a38ed0 ---------A   01440 F2 = 1
    0x645f76a39060 ---------A   01450         PRINT "OK.  TYPING ANY CHARACTER WILL LET ME GO"
    0x645f76a391f0 ---------A T 01460 PRINT "SHOULD I PLAY MY BEST STRATEGY (Y OR N)";
    0x645f76a394c0 ---------A   01470 S2 = 0
    0x645f76a39620 ---------A T 01480 INPUT X$
    0x645f76a398b0 ---------A   01490 IF X$ = "N" THEN 1520
    0x645f76a39b30 ---------A   01500 IF X$ <> "Y" THEN 1480
    0x645f76a39d50 ---------A   01510 S2 = 2
    0x645f76a3a020 ---------A T 01520 B = -1
    0x645f76a3a2f0 ---------A   01530 W = +1
    0x645f76a3a700 ---------A   01540 D$(B +1) ="X"
    0x645f76a3aaf0 ---------A   01550 D$(0 +1) = "."
    0x645f76a3af00 ---------A   01560 D$(W + 1) ="O"
    0x645f76a3b290 ---------A   01570 FOR K = 1 TO 8
    0x645f76a3b4d0 ---------A   01580     READ I4(K)
    0x645f76a3b5f0 ---------A   01590 NEXT K
    0x645f76a3bd80 ---------A   01600 DATA 0,-1,-1,-1,0,1,1,1
    0x645f76a3c050 ---------A   01610 FOR K=1 TO 8
    0x645f76a3c290 ---------A   01620     READ J4(K)
    0x645f76a3c3b0 ---------A   01630 NEXT K
    0x645f76a3cb40 ---------A   01640 DATA 1,1,0,-1,-1,-1,0,1
    0x645f76a3d220 ---------A   01650 FOR K = 1 TO 8
    0x645f76a3d460 ---------A   01660     READ C$(K)
    0x645f76a3d580 ---------A   01670 NEXT K
    0x645f76a3dd20 ---------A   01680 DATA A,B,C,D,E,F,G,H
    0x645f76a3dda0 ---------A   01690 REM********		SET UP A NEW GAME
    0x645f76a3e140 ---------A T 01700 FOR I = 0 TO 9
    0x645f76a3e4e0 ---------A   01710     FOR J = 0 TO 9
    0x645f76a3e8c0 ---------A   01720 	A(I,J)=0
    0x645f76a3e9f0 ---------A   01730     NEXT J
    0x645f76a3eb30 ---------A   01740 NEXT I
    0x645f76a3eef0 ---------A   01750 A(4,4) = W
    0x645f76a3f2a0 ---------A   01760 A(5,5) = W
    0x645f76a3f650 ---------A   01770 A(4,5) = B
    0x645f76a3fa00 ---------A   01780 A(5,4) = B
    0x645f76a3fcd0 ---------A   01790 C1 = 2
    0x645f76a3ffa0 ---------A   01800 H1 = 2
    0x645f76a40270 ---------A   01810 N1 = 4
    0x645f76a40550 ---------A   01820 Z =0
    0x645f76a405d0 ---------A   01830 REM********		HUMAN'S CHOICES
    0x645f76a40780 ---------A   01840 PRINT "DO YOU WANT TO HAVE X OR O";
    0x645f76a40a70 ---------A   01850 C = W
    0x645f76a40d60 ---------A   01860 H = B
    0x645f76a40ec0 ---------A T 01870 INPUT X$
    0x645f76a41150 ---------A   01880 IF X$ = "X" THEN 1920
    0x645f76a413d0 ---------A   01890 IF X$ <> "O" THEN 1870
    0x645f76a41610 ---------A   01900 C = B
    0x645f76a41860 ---------A   01910 H = W
    0x645f76a419e0 ---------A T 01920 PRINT "DO YOU WANT TO GO FIRST (Y OR N)";
    0x645f76a41b30 ---------A T 01930 INPUT X$
    0x645f76a41d60 ---------A   01940 PRINT CHR$(26)
    0x645f76a41fe0 ---------A   01950 IF X$ = "N" THEN 2030
    0x645f76a42270 ---------A   01960 IF X$ <> "Y" THEN 1930
    0x645f76a42300 ---------A   01970 REM********		PRINT INITIAL BOARD
    0x645f76a42380 ---------A   01980 GOSUB 4350
    0x645f76a423f0 ---------A   01990 GO TO 2760
    0x645f76a42460 ---------A   02000 REM********		COMPUTER'S MOVE
    0x645f76a426d0 ---------A T 02010 IF F2 = 0 THEN 2030
    0x645f76a42830 ---------A   02020 INPUT X$
    0x645f76a42b10 ---------A T 02030 B1 = -1
    0x645f76a42f80 ---------A   02040 I3 = J3 = 0
    0x645f76a43270 ---------A   02050 T1 = C
    0x645f76a43570 ---------A   02060 T2 = H
    0x645f76a435f0 ---------A   02070 REM********		SCAN FOR BLANK SQUARE
    0x645f76a438d0 ---------A   02080 FOR I = 1 TO 8
    0x645f76a43bc0 ---------A   02090     FOR J = 1 TO 8
    0x645f76a43ff0 ---------A   02100 	IF A(I,J) <> 0 THEN 2390
    0x645f76a44080 ---------A   02110 	REM********		FOUND A BLANK SQUARE
    0x645f76a44150 ---------A   02120 	REM********		DOES IT HAVE AN OPPONENT AS A NEIGHBOUR
    0x645f76a441e0 ---------A   02130 	GOSUB 3860
    0x645f76a44500 ---------A   02140 	IF F1 = 0 THEN 2390
    0x645f76a445a0 ---------A   02150 	REM********		FOUND OPPONENT AS NEIGHBOUR
    0x645f76a44660 ---------A   02160 	REM********		HOW MANY OF HIS PIECES CAN WE FLIP?
    0x645f76a44700 ---------A   02170 	REM********		DON'T DO IT NOW
    0x645f76a449e0 ---------A   02180 	U = -1
    0x645f76a44a70 ---------A   02190 	GOSUB 4060
    0x645f76a44af0 ---------A   02200 	REM********		EXTRA POINTS FOR BOUNDARY POSITION
    0x645f76a44e30 ---------A   02210 	IF S1 = 0 THEN 2390
    0x645f76a45430 ---------A   02220 	IF (I-1) * (I-8) <> 0 THEN 2240
    0x645f76a457a0 ---------A   02230 	S1 = S1 + S2
    0x645f76a45d90 ---------A T 02240 	IF (J-1) * (J-8) <> 0 THEN 2270
    0x645f76a46120 ---------A   02250 	S1 = S1 +S2
    0x645f76a461b0 ---------A   02260 	REM********		IS THIS BETTER THAN THE BEST FOUND SO FAR
    0x645f76a46450 ---------A T 02270 	IF S1 < B1 THEN 2390
    0x645f76a466f0 ---------A   02280 	IF S1 > B1 THEN 2350
    0x645f76a46f90 ---------A   02290 	REM********		A TIE; RANDOM DECISION
    0x645f76a47060 ---------A   02300 	REM********		THE NEXT TWO EXECUTABLE STATEMENTS ARE FOR
    0x645f76a47110 ---------A   02310 	REM********		BASIC WITH RANDOM NUMBERS
    0x645f76a474e0 ---------A   02320 	R = RND(1)
    0x645f76a47730 ---------A   02330 	IF R > .5 THEN 2390
    0x645f76a477b0 ---------A   02340 	REM********		YES
    0x645f76a479f0 ---------A T 02350 	B1 = S1
    0x645f76a47c20 ---------A   02360 	I3 = I
    0x645f76a47e60 ---------A   02370 	J3 = J
    0x645f76a47ee0 ---------A   02380 	REM********		END OF SCAN LOOP
    0x645f76a48020 ---------A T 02390     NEXT J
    0x645f76a48160 ---------A   02400 NEXT I
    0x645f76a48200 ---------A   02410 REM********		COULD WE DO ANYTHING?
    0x645f76a48470 ---------A   02420 IF B1 > 0 THEN 2510
    0x645f76a484f0 ---------A   02430 REM********		NO
    0x645f76a487d0 ---------A   02440 LET L = 18
    0x645f76a48860 ---------A   02450 GOSUB 4540
    0x645f76a489b0 ---------A   02460 PRINT "DAMN! HAVE TO FORFEIT MY MOVE!"
    0x645f76a48c00 ---------A   02470 IF Z = 1 THEN 3370
    0x645f76a48e20 ---------A   02480 Z = 1
    0x645f76a48ea0 ---------A   02490 GO TO 2760
    0x645f76a48f10 ---------A   02500 REM********		MAKE THE MOVE
    0x645f76a49130 ---------A T 02510 Z = 0
    0x645f76a49340 ---------A   02520 LET L=15
    0x645f76a493c0 ---------A   02530 GOSUB 4540
    0x645f76a49520 ---------A   02540 PRINT "I WILL MOVE TO ";
    0x645f76a49690 ---------A   02550 PRINT I3;
    0x645f76a49800 ---------A   02560 PRINT " , ";
    0x645f76a49a30 ---------A   02570 PRINT C$(J3)
    0x645f76a49c60 ---------A   02580 I= I3
    0x645f76a49e90 ---------A   02590 J= J3
    0x645f76a4a0a0 ---------A   02600 U= 1
    0x645f76a4a110 ---------A   02610 GOSUB 4060
    0x645f76a4a550 ---------A   02620 C1 = C1 + S1 + 1
    0x645f76a4a8a0 ---------A   02630 H1 = H1 - S1
    0x645f76a4abd0 ---------A   02640 N1 = N1 + 1
    0x645f76a4ade0 ---------A   02650 LET L=16
    0x645f76a4ae60 ---------A   02660 GOSUB 4540
    0x645f76a4afc0 ---------A   02670 PRINT " THAT GIVES ME : ";
    0x645f76a4b140 ---------A   02680 PRINT S1;
    0x645f76a4b2a0 ---------A   02690 PRINT " OF YOUR PIECES"
    0x645f76a4b320 ---------A   02700 REM********		PRINT OUT BOARD
    0x645f76a4b3b0 ---------A   02710 GOSUB 4350
    0x645f76a4b420 ---------A   02720 REM********		TEST FOR END OF GAME
    0x645f76a4b6a0 ---------A   02730 IF H1 = 0 THEN 3370
    0x645f76a4b910 ---------A   02740 IF N1 = 64 THEN 3370
    0x645f76a4b9a0 ---------A   02750 REM********		HUMANS MOVE
    0x645f76a4bbe0 ---------A T 02760 T1 = H
    0x645f76a4be10 ---------A   02770 T2 = C
    0x645f76a4c020 ---------A   02780 LET L = 12
    0x645f76a4c0a0 ---------A   02790 GOSUB 4540
    0x645f76a4c200 ---------A T 02800 PRINT " YOUR MOVE";
    0x645f76a4c430 ---------A T 02810 INPUT I, X$
    0x645f76a4c690 ---------A   02820 IF I < 0 THEN 2810
    0x645f76a4c900 ---------A   02830 IF I > 8 THEN 2810
    0x645f76a4cb60 ---------A   02840 IF I <> 0 THEN 2930
    0x645f76a4cd80 ---------A   02850 LET L = 18
    0x645f76a4ce10 ---------A   02860 GOSUB 4540
    0x645f76a4cf60 ---------A   02870 PRINT "ARE YOU FORFEITING YOUR TURN Y OR N"
    0x645f76a4d0c0 ---------A   02880 INPUT X$
    0x645f76a4d340 ---------A   02890 IF X$ <> "Y" THEN 2800
    0x645f76a4d5a0 ---------A   02900 IF Z = 1 THEN 3370
    0x645f76a4d7c0 ---------A   02910 Z = 1
    0x645f76a4d830 ---------A   02920 GO TO 2010
    0x645f76a4db00 ---------A T 02930 FOR J = 1 TO 8
    0x645f76a4de60 ---------A   02940     IF C$(J) =X$ THEN 2980
    0x645f76a4dfa0 ---------A   02950 NEXT J
    0x645f76a4e030 ---------A   02960 GO TO 2810
    0x645f76a4e0a0 ---------A   02970 REM********		CHECK FOR BLANK
    0x645f76a4e4d0 ---------A T 02980 IF A(I,J) = 0 THEN 3040
    0x645f76a4e6f0 ---------A   02990 LET L = 18
    0x645f76a4e780 ---------A   03000 GOSUB 4540
    0x645f76a4e8e0 ---------A   03010 PRINT "SORRY, THAT SQUARE IS OCCUPIED, TRY AGAIN"
    0x645f76a4e970 ---------A   03020 GO TO 2810
    0x645f76a4e9e0 ---------A   03030 REM********		CHECK FOR LEGAL NEIGHBOUR
    0x645f76a4ea70 ---------A T 03040 GOSUB 3860
    0x645f76a4ecb0 ---------A   03050 IF F1 = 1 THEN 3110
    0x645f76a4eed0 ---------A   03060 LET L = 18
    0x645f76a4ef70 ---------A   03070 GOSUB 4540
    0x645f76a4f100 ---------A   03080 PRINT "SORRY, YOU ARE NOT NEXT TO ONE OF MY PIECES. TRY AGAIN.";
    0x645f76a4f180 ---------A   03090 GO TO 2810
    0x645f76a4f1f0 ---------A   03100 REM********		CHECK IF LEGAL RUN
    0x645f76a4f410 ---------A T 03110 U = -1
    0x645f76a4f490 ---------A   03120 GOSUB 4060
    0x645f76a4f6d0 ---------A   03130 IF S1 > 0 THEN 3190
    0x645f76a4f8f0 ---------A   03140 LET L = 18
    0x645f76a4f980 ---------A   03150 GOSUB 4540
    0x645f76a4fae0 ---------A   03160 PRINT "SORRY, THAT DOESN'T FLANK A ROW, TRY AGAIN"
    0x645f76a4fb70 ---------A   03170 GO TO 2810
    0x645f76a4fbf0 ---------A   03180 REM********		EVERYTHING LEGAL; MAKE HUMANS MOVE
    0x645f76a4fe10 ---------A T 03190 Z = 0
    0x645f76a50020 ---------A   03200 LET L = 13
    0x645f76a500a0 ---------A   03210 GOSUB 4540
    0x645f76a50200 ---------A   03220 PRINT "THAT GIVES YOU";
    0x645f76a50380 ---------A   03230 PRINT S1;
    0x645f76a504d0 ---------A   03240 PRINT " OF MY PIECES"
    0x645f76a506e0 ---------A   03250 U = 1
    0x645f76a50750 ---------A   03260 GOSUB 4060
    0x645f76a50b90 ---------A   03270 H1 = H1 + S1 + 1
    0x645f76a50ee0 ---------A   03280 C1 = C1 -S1
    0x645f76a51220 ---------A   03290 N1 = N1 + 1
    0x645f76a512a0 ---------A   03300 REM********		PRINT OUT BOARD
    0x645f76a51330 ---------A   03310 GOSUB 4350
    0x645f76a513a0 ---------A   03320 REM********		TEST FOR END OF GAME
    0x645f76a51620 ---------A   03330 IF C1 = 0 THEN 3370
    0x645f76a51880 ---------A   03340 IF N1 = 64 THEN 3370
    0x645f76a51910 ---------A   03350 GO TO 2010
    0x645f76a51980 ---------A   03360 REM********		END OF GAME ; WRAPUP
    0x645f76a51ba0 ---------A T 03370 LET L = 18
    0x645f76a51c30 ---------A   03380 GOSUB 4540
    0x645f76a51d80 ---------A   03390 PRINT "FOR RESULTS ON GAME TYPE RETURN!!"
    0x645f76a51ee0 ---------A   03400 INPUT X$
    0x645f76a522c0 ---------A   03410 PRINT CHR$(30),CHR$(26)
    0x645f76a52430 ---------A   03420 PRINT "YOU HAVE ";
    0x645f76a525b0 ---------A   03430 PRINT H1;
    0x645f76a52720 ---------A   03440 PRINT " PIECES, AND I HAVE ";
    0x645f76a528a0 ---------A   03450 PRINT C1;
    0x645f76a52a00 ---------A   03460 PRINT " PIECES--- "
    0x645f76a52c80 ---------A   03470 IF H1 = C1 THEN 3510
    0x645f76a52f10 ---------A   03480 IF H1 > C1 THEN 3530
    0x645f76a53080 ---------A   03490 PRINT "SORRY, I WON THAT ONE."
    0x645f76a53100 ---------A   03500 GO TO 3540
    0x645f76a53240 ---------A T 03510 PRINT " A TIE!!!!!"
    0x645f76a532b0 ---------A   03520 GO TO 3720
    0x645f76a533f0 ---------A T 03530 PRINT "YOU WON!!!"
    0x645f76a53750 ---------A T 03540 C1 = C1 - H1
    0x645f76a539a0 ---------A   03550 IF C1 > 0 THEN 3570
    0x645f76a53be0 ---------A   03560 C1 = -C1
    0x645f76a46ba0 ---------A T 03570 C1 = (64 * C1)/ N1
    0x645f76a46d20 ---------A   03580 PRINT "THAT WAS A ";
    0x645f76a54c70 ---------A   03590 IF C1 < 11 THEN 3710
    0x645f76a54ee0 ---------A   03600 IF C1 < 25 THEN 3690
    0x645f76a55150 ---------A   03610 IF C1 < 39 THEN 3670
    0x645f76a553c0 ---------A   03620 IF C1 < 53 THEN 3650
    0x645f76a55520 ---------A   03630 PRINT " A PERFECT GAME!"
    0x645f76a55590 ---------A   03640 GO TO 3720
    0x645f76a556d0 ---------A T 03650 PRINT "WALKAWAY!"
    0x645f76a55740 ---------A   03660 GO TO 3720
    0x645f76a55880 ---------A T 03670 PRINT "FIGHT!"
    0x645f76a558f0 ---------A   03680 GO TO 3720
    0x645f76a55a30 ---------A T 03690 PRINT "HOT GAME!"
    0x645f76a55aa0 ---------A   03700 GO TO 3720
    0x645f76a55be0 ---------A T 03710 PRINT "SQUEAKER!"
    0x645f76a55c60 ---------A T 03720 PRINT
    0x645f76a55de0 ---------A   03730 PRINT"DO YOU WANT TO PLAY AGAIN";
    0x645f76a55f40 ---------A T 03740 INPUT X$
    0x645f76a561d0 ---------A   03750 IF X$ = "Y" THEN 1700
    0x645f76a56460 ---------A   03760 IF X$ <> "N" THEN 3740
    0x645f76a565c0 ---------A   03770 PRINT "THANKS FOR PLAYING."
    0x645f76a56610 ---------A   03780 STOP
    0x645f76a57d60 ---------A   03790 REM********		SUCCESS
    0x645f76a60450 ---------A   03800 END
    0x645f76a56690 ---------B   03810 REM********		
    0x645f76a56750 ---------B   03820 REM********		SUBROUTINE: TEST FOR PROPER NEIGHBOUR
    0x645f76a567e0 ---------B   03830 REM********		ASSUMES:
    0x645f76a56890 ---------B   03840 REM********		I,J LOCATES A BLANK SQUARE
    0x645f76a56960 ---------B   03850 REM********		YOU HOPE TO SEE AN ADJACENT  T2 (= -T1)
    0x645f76a56d10 ---------B G 03860 FOR I1 =  -1 TO 1
    0x645f76a570c0 ---------B   03870     FOR J1 = -1 TO 1
    0x645f76a57740 ---------B   03880 	IF  A(I+I1,J+J1) = T2 THEN 3940
    0x645f76a57880 ---------B   03890     NEXT J1
    0x645f76a579c0 ---------B   03900 NEXT I1
    0x645f76a57a60 ---------B   03910 REM********		NO T2 FOUND
    0x645f76a57c80 ---------B   03920 F1 = 0
    0x645f76a68e10 ---------B   03930 GOTO 03960
    0x645f76a57f80 ---------B T 03940 F1 = 1
    0x645f76a68e50 ---------B   03950 GOTO 03960
    0x645f76a68e90 ---------B T 03960 RETURN
    0x645f76a58090 ---------C   03970 REM********		SUBROUTINE SCORE AND UPDATE
    0x645f76a58120 ---------C   03980 REM********		ASSUMES;
    0x645f76a581f0 ---------C   03990 REM********		(I,J) IS A TENTATIVE PLACE FOR A PIECE T1.
    0x645f76a582c0 ---------C   04000 REM********		WANT RUNS OF T2 = -T1, TERMINATED BY A T1.
    0x645f76a58390 ---------C   04010 REM********		IF U IS TRUE (1), MARK THOSE RUNS AS T1'S.
    0x645f76a58460 ---------C   04020 REM********		RETURN SUM OF ALL RUNS (T2'S ONLY) IN S1.
    0x645f76a58540 ---------C   04030 REM********		MAIN PROGRAM CONTAINS THE FOLLOWING ARRAYS:
    0x645f76a58600 ---------C   04040 REM********		I4:  0 -1 -1 -1  0  1  1  1
    0x645f76a586c0 ---------C   04050 REM********		J4:  1  1  0 -1 -1 -1  0  1
    0x645f76a588e0 ---------C G 04060 S1 = 0
    0x645f76a58bb0 ---------C   04070 FOR K = 1 TO 8
    0x645f76a58f90 ---------C   04080     I5 = I4(K)
    0x645f76a59360 ---------C   04090     J5 = J4(K)
    0x645f76a59770 ---------C   04100     I6 = I + I5
    0x645f76a59b80 ---------C   04110     J6 = J + J5
    0x645f76a59e60 ---------C   04120     S3 = 0
    0x645f76a5a2a0 ---------C   04130     IF A(I6,J6) <> T2 THEN 4310
    0x645f76a5a330 ---------C   04140     REM			LOOP THROUGH THE RUN
    0x645f76a5a670 ---------C T 04150     S3 = S3 + 1
    0x645f76a5a9c0 ---------C   04160     I6 = I6 + I5
    0x645f76a5ad20 ---------C   04170     J6 = J6 + J5
    0x645f76a5b160 ---------C   04180     IF A (I6,J6) = T1 THEN 4210
    0x645f76a5b580 ---------C   04190     IF A(I6,J6) = 0 THEN 4310
    0x645f76a5b600 ---------C   04200     GO TO 4150
    0x645f76a5b950 ---------C T 04210     S1 = S1 + S3
    0x645f76a5bbb0 ---------C   04220     IF U <> 1 THEN 4310
    0x645f76a5bc30 ---------C   04230     REM			UPDATE BOARD
    0x645f76a5be70 ---------C   04240     I6 = I
    0x645f76a5c0b0 ---------C   04250     J6 = J
    0x645f76a5c460 ---------C   04260     FOR K1 = 0 TO S3
    0x645f76a5c860 ---------C   04270 	A(I6,J6) = T1
    0x645f76a5cbb0 ---------C   04280 	I6 = I6 + I5
    0x645f76a5cf00 ---------C   04290 	J6 = J6 + J5
    0x645f76a5d030 ---------C   04300     NEXT K1
    0x645f76a5d170 ---------C T 04310 NEXT K
    0x645f76a68ef0 ---------C   04320 GOTO 04330
    0x645f76a68f50 ---------C T 04330 RETURN
    0x645f76a5d280 ---------D   04340 REM********		SUBROUTINE TO PRINT BOARD
    0x645f76a5d4a0 ---------D G 04350 PRINT CHR$(30)
    0x645f76a5d6c0 ---------D   04360 LET L = 18
    0x645f76a5d8f0 ---------D   04370 IF F9 = 1 GO TO 4400
    0x645f76a5d990 ---------D   04380 GOSUB 4630
    0x645f76a5db90 ---------D   04390 LET F9 = 1
    0x645f76a5ddb0 ---------D T 04400 PRINT CHR$(30)
    0x645f76a5df00 ---------D   04410 PRINT "    A B C D E F G H"
    0x645f76a5e1d0 ---------D   04420 FOR I = 1 TO 8
    0x645f76a5e350 ---------D   04430     PRINT I;
    0x645f76a5e620 ---------D   04440     FOR J = 1 TO 8
    0x645f76a5e7b0 ---------D   04450 	PRINT " ";
    0x645f76a5ecc0 ---------D   04460 	PRINT D$(A(I,J)+1);
    0x645f76a5edf0 ---------D   04470     NEXT J
    0x645f76a5ee70 ---------D   04480     PRINT
    0x645f76a5efa0 ---------D   04490 NEXT I
    0x645f76a5f020 ---------D   04500 PRINT
    0x645f76a68fb0 ---------D   04510 GOTO 04520
    0x645f76a69010 ---------D T 04520 RETURN
    0x645f76a5f110 ---------E   04530 REM********		***	SPACE		***
    0x645f76a5f330 ---------E G 04540 PRINT CHR$(30)
    0x645f76a5f6e0 ---------E   04550 FOR I9 = 1 TO L
    0x645f76a5f760 ---------E   04560     PRINT
    0x645f76a5f890 ---------E   04570 NEXT I9
    0x645f76a5fae0 ---------E   04580 IF L <> 18 GO TO 4600
    0x645f76a5fd20 ---------E   04590 F9 = 0
    0x645f76a69070 ---------E T 04600 GOTO 04610
    0x645f76a690d0 ---------E T 04610 RETURN
    0x645f76a5fe10 ---------F   04620 REM********		***	BLANK OUT	***
    0x645f76a5fe90 ---------F G 04630 GOSUB 4540
    0x645f76a60110 ---------F   04640 PRINT TAB(60);" "
    0x645f76a603a0 ---------F   04650 PRINT TAB(60);" "
    0x645f76a69130 ---------F   04660 GOTO 04670
    0x645f76a69190 ---------F T 04670 RETURN
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
char* data_01600s[]={"0","-1","-1","-1","0","1","1","1"};
char* data_01640s[]={"1","1","0","-1","-1","-1","0","1"};
char* data_01680s[]={"A","B","C","D","E","F","G","H"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1600,  8,data_01600s},
    { 1640,  8,data_01640s},
    { 1680,  8,data_01680s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
float  A_flt_arr[9][9];                           // Basic: A 
float  B_flt;                                     // Basic: B 
float  B1_flt;                                    // Basic: B1 
float  C_flt;                                     // Basic: C 
char*  C_str_arr[8];                              // Basic: C$ 
float  C1_flt;                                    // Basic: C1 
char*  D_str_arr[2];                              // Basic: D$ 
float  F1_flt;                                    // Basic: F1 
float  F2_flt;                                    // Basic: F2 
float  F9_flt;                                    // Basic: F9 
float  H_flt;                                     // Basic: H 
float  H1_flt;                                    // Basic: H1 
float  I_flt;                                     // Basic: I 
float  I1_flt;                                    // Basic: I1 
float  I3_flt;                                    // Basic: I3 
float  I4_flt_arr[8];                             // Basic: I4 
float  I5_flt;                                    // Basic: I5 
float  I6_flt;                                    // Basic: I6 
float  I9_flt;                                    // Basic: I9 
float  J_flt;                                     // Basic: J 
float  J1_flt;                                    // Basic: J1 
float  J3_flt;                                    // Basic: J3 
float  J4_flt_arr[8];                             // Basic: J4 
float  J5_flt;                                    // Basic: J5 
float  J6_flt;                                    // Basic: J6 
float  K_flt;                                     // Basic: K 
float  K1_flt;                                    // Basic: K1 
float  L_flt;                                     // Basic: L 
float  N1_flt;                                    // Basic: N1 
float  R_flt;                                     // Basic: R 
float  S1_flt;                                    // Basic: S1 
float  S2_flt;                                    // Basic: S2 
float  S3_flt;                                    // Basic: S3 
float  T1_flt;                                    // Basic: T1 
float  T2_flt;                                    // Basic: T2 
float  U_flt;                                     // Basic: U 
float  W_flt;                                     // Basic: W 
char*  X_str;                                     // Basic: X$ 
float  Z_flt;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03860();
void Routine_04060();
void Routine_04350();
void Routine_04540();
void Routine_04630();

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
    // 03810 REM********		
    // 03820 REM********		SUBROUTINE: TEST FOR PROPER NEIGHBOUR
    // 03830 REM********		ASSUMES:
    // 03840 REM********		I,J LOCATES A BLANK SQUARE
    // 03850 REM********		YOU HOPE TO SEE AN ADJACENT  T2 (= -T1)

void Routine_03860(){
    // 03860 FOR I1 =  -1 TO 1
    for(I1_flt=-1;I1_flt<=1;I1_flt++){
        // 03870     FOR J1 = -1 TO 1
        for(J1_flt=-1;J1_flt<=1;J1_flt++){
            // 03880 	IF  A(I+I1,J+J1) = T2 THEN 3940
            if(A_flt_arr[(int)I_flt+I1_flt][(int)J_flt+J1_flt]==T2_flt)goto Lbl_03940;
            // 03890     NEXT J1
            int dummy_3890=0; // Ignore this line.
        }; // End-For(J1_flt)
        // 03900 NEXT I1
        int dummy_3900=0; // Ignore this line.
    }; // End-For(I1_flt)
    // 03910 REM********		NO T2 FOUND
    // 03920 F1 = 0
    F1_flt = 0;
    // 03930 GOTO 03960
    goto Lbl_03960;

  Lbl_03940:
    // 03940 F1 = 1
    F1_flt = 1;
    // 03950 GOTO 03960
    goto Lbl_03960;

  Lbl_03960:
    // 03960 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 03970 REM********		SUBROUTINE SCORE AND UPDATE
    // 03980 REM********		ASSUMES;
    // 03990 REM********		(I,J) IS A TENTATIVE PLACE FOR A PIECE T1.
    // 04000 REM********		WANT RUNS OF T2 = -T1, TERMINATED BY A T1.
    // 04010 REM********		IF U IS TRUE (1), MARK THOSE RUNS AS T1'S.
    // 04020 REM********		RETURN SUM OF ALL RUNS (T2'S ONLY) IN S1.
    // 04030 REM********		MAIN PROGRAM CONTAINS THE FOLLOWING ARRAYS:
    // 04040 REM********		I4:  0 -1 -1 -1  0  1  1  1
    // 04050 REM********		J4:  1  1  0 -1 -1 -1  0  1

void Routine_04060(){
    // 04060 S1 = 0
    S1_flt = 0;
    // 04070 FOR K = 1 TO 8
    for(K_flt=1;K_flt<=8;K_flt++){
        // 04080     I5 = I4(K)
        I5_flt = I4_flt_arr[(int)K_flt];
        // 04090     J5 = J4(K)
        J5_flt = J4_flt_arr[(int)K_flt];
        // 04100     I6 = I + I5
        I6_flt = I_flt+I5_flt;
        // 04110     J6 = J + J5
        J6_flt = J_flt+J5_flt;
        // 04120     S3 = 0
        S3_flt = 0;
        // 04130     IF A(I6,J6) <> T2 THEN 4310
        if(A_flt_arr[(int)I6_flt][(int)J6_flt]!=T2_flt)goto Lbl_04310;
        // 04140     REM			LOOP THROUGH THE RUN

  Lbl_04150:
        // 04150     S3 = S3 + 1
        S3_flt = S3_flt+1;
        // 04160     I6 = I6 + I5
        I6_flt = I6_flt+I5_flt;
        // 04170     J6 = J6 + J5
        J6_flt = J6_flt+J5_flt;
        // 04180     IF A (I6,J6) = T1 THEN 4210
        if(A_flt_arr[(int)I6_flt][(int)J6_flt]==T1_flt)goto Lbl_04210;
        // 04190     IF A(I6,J6) = 0 THEN 4310
        if(A_flt_arr[(int)I6_flt][(int)J6_flt]==0)goto Lbl_04310;
        // 04200     GO TO 4150
        goto Lbl_04150;

  Lbl_04210:
        // 04210     S1 = S1 + S3
        S1_flt = S1_flt+S3_flt;
        // 04220     IF U <> 1 THEN 4310
        if(U_flt!=1)goto Lbl_04310;
        // 04230     REM			UPDATE BOARD
        // 04240     I6 = I
        I6_flt = I_flt;
        // 04250     J6 = J
        J6_flt = J_flt;
        // 04260     FOR K1 = 0 TO S3
        for(K1_flt=0;K1_flt<=S3_flt;K1_flt++){
            // 04270 	A(I6,J6) = T1
            A_flt_arr[(int)I6_flt][(int)J6_flt] = T1_flt;
            // 04280 	I6 = I6 + I5
            I6_flt = I6_flt+I5_flt;
            // 04290 	J6 = J6 + J5
            J6_flt = J6_flt+J5_flt;
            // 04300     NEXT K1
            int dummy_4300=0; // Ignore this line.
        }; // End-For(K1_flt)

  Lbl_04310:
        // 04310 NEXT K
        int dummy_4310=0; // Ignore this line.
    }; // End-For(K_flt)
    // 04320 GOTO 04330
    goto Lbl_04330;

  Lbl_04330:
    // 04330 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------
    // 04340 REM********		SUBROUTINE TO PRINT BOARD

void Routine_04350(){
    // 04350 PRINT CHR$(30)
    b2c_printf("");
    // 04360 LET L = 18
    L_flt = 18;
    // 04370 IF F9 = 1 GO TO 4400
    if(F9_flt==1)goto Lbl_04400;
    // 04380 GOSUB 4630
    Routine_04630();
    // 04390 LET F9 = 1
    F9_flt = 1;

  Lbl_04400:
    // 04400 PRINT CHR$(30)
    b2c_printf("");
    // 04410 PRINT "    A B C D E F G H"
    b2c_printf("    a b c d e f g h\n");
    // 04420 FOR I = 1 TO 8
    for(I_flt=1;I_flt<=8;I_flt++){
        // 04430     PRINT I;
        b2c_printf(" %.2f x¦v_d\n",I_flt);
        // 04440     FOR J = 1 TO 8
        for(J_flt=1;J_flt<=8;J_flt++){
            // 04450 	PRINT " ";
            b2c_printf(" ");
            // 04460 	PRINT D$(A(I,J)+1);
            b2c_printf("%s¦v_d\n",D_str_arr[(int)A_flt_arr[(int)I_flt][(int)J_flt]+1]);
            // 04470     NEXT J
            int dummy_4470=0; // Ignore this line.
        }; // End-For(J_flt)
        // 04480     PRINT
        b2c_printf("\n");
        // 04490 NEXT I
        int dummy_4490=0; // Ignore this line.
    }; // End-For(I_flt)
    // 04500 PRINT
    b2c_printf("\n");
    // 04510 GOTO 04520
    goto Lbl_04520;

  Lbl_04520:
    // 04520 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------
    // 04530 REM********		***	SPACE		***

void Routine_04540(){
    // 04540 PRINT CHR$(30)
    b2c_printf("");
    // 04550 FOR I9 = 1 TO L
    for(I9_flt=1;I9_flt<=L_flt;I9_flt++){
        // 04560     PRINT
        b2c_printf("");
        // 04570 NEXT I9
        int dummy_4570=0; // Ignore this line.
    }; // End-For(I9_flt)
    // 04580 IF L <> 18 GO TO 4600
    if(L_flt!=18)goto Lbl_04600;
    // 04590 F9 = 0
    F9_flt = 0;

  Lbl_04600:
    // 04600 GOTO 04610
    goto Lbl_04610;

  Lbl_04610:
    // 04610 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------
    // 04620 REM********		***	BLANK OUT	***

void Routine_04630(){
    // 04630 GOSUB 4540
    Routine_04540();
    // 04640 PRINT TAB(60);" "
