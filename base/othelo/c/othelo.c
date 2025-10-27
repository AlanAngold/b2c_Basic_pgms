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
    0x623817c7f550 ---------A   01000 REM********		OTHELLO          BYTE VOL. 2, NUMBER 10 (OCT. 1977)
    0x623817c7f5d0 ---------A   01010 REM********		PLAYS THE GAME OTHELLO WITH TWO STRATEGIES
    0x623817c8f2d0 ---------A   01020 REM********		1. TAKE THE MAX. NUMBER OF PIECES
    0x623817c7f2f0 ---------A   01030 REM********		2. ADD A BONUS FOR OUTSIDE POSITION
    0x623817c905e0 ---------A   01040 REM********		BOARD IS THE ARRAY A, BOUNDED BY 0'S (BLANKS)
    0x623817c8e9e0 ---------A   01050 REM********		A = 0 FOR EMPTY SQUARE
    0x623817c8e7f0 ---------A   01060 REM********		A = B FOR BLACK SQUARE
    0x623817c90aa0 ---------A   01070 REM********		A = W FOR WHITE SQUARE
    0x623817c8f040 ---------A   01080 REM********		I AND J ARE ALWAYS USED FOR ROW/COLUMN INDICES
    0x623817c8ee40 ---------A   01090 REM********		I1 AND J4 STORE INCREMENTS TO THE 8 NEIGHBOURS
    0x623817c8f4d0 ---------A   01100 REM********		C$ AND D$ STORE CHARACTERS A-H,X,...,O FOR OUTPUT
    0x623817c96a80 ---------A   01110 DIM A(9,9),I4(8),J4(8),C$(8),D$(2)
    0x623817c96ac0 ---------A   01120 REM********		
    0x623817c96c00 ---------A   01130 PRINT "GREETINGS FROM OTHELLO!"
    0x623817c96d10 ---------A   01140 PRINT "DO YOU WANT INSTRUCTIONS (Y OR N)";
    0x623817c8e6d0 ---------A T 01150 INPUT X$
    0x623817c8e670 ---------A   01160 IF X$ = "N" THEN 1380
    0x623817c97300 ---------A   01170 IF X$ <> "Y" THEN 1150
    0x623817c973a0 ---------A   01180 PRINT
    0x623817c97540 ---------A   01190 PRINT "OTHELLO IS PLAYED ON AN 8X8 CHECKER BOARD"
    0x623817c976e0 ---------A   01200 PRINT "ROWS ARE NUMBERED FROM 1 TO 8 AND COLUMNS FROM A TO H"
    0x623817c97880 ---------A   01210 PRINT" THE INITIAL CONFIGURATION IS ALL BLANK EXCEPT FOR"
    0x623817c979d0 ---------A   01220 PRINT "THE CENTER FOUR SQUARES, WHICH FORM THE PATTERN:"
    0x623817c97b00 ---------A   01230 PRINT "               O X"
    0x623817c97c50 ---------A   01240 PRINT "               X O"
    0x623817c97cf0 ---------A   01250 PRINT
    0x623817c97ea0 ---------A   01260 PRINT "TRY TO PLACE YOUR PIECE SO THAT IT WILL 'OUTFLANK' MINE"
    0x623817c98040 ---------A   01270 PRINT "THEREBY CREATING A HORIZONTAL, VERTICAL, OR DIAGONAL "
    0x623817c981e0 ---------A   01280 PRINT "RUN OF MY PIECES BOUNDED AT EACH END BY AT LEAST ONE "
    0x623817c98360 ---------A   01290 PRINT "OF YOURS.  THIS WILL 'FLIP' MY PIECES, TURNING THEM INTO"
    0x623817c984e0 ---------A   01300 PRINT "YOURS."
    0x623817c98680 ---------A   01310 PRINT"     NOTE: YOU MUST CAPTURE AT LEAST ONE OF MY PIECES"
    0x623817c98820 ---------A   01320 PRINT "IN THIS WAY IF IT IS AT ALL POSSIBLE.  IF IT IS NOT"
    0x623817c98bc0 ---------A   01330 PRINT "POSSIBLE, YOU FORFEIT YOUR TURN BY ENTERING"
    0x623817c98d30 ---------A   01340 PRINT "     0,0   FOR YOUR ROW,COLUMN MOVE"
    0x623817c98e80 ---------A   01350 PRINT " GOOD LUCK!"
    0x623817c98ef0 ---------A   01360 PRINT
    0x623817c98f60 ---------A   01370 REM********		
    0x623817c99130 ---------A T 01380 PRINT "SHOULD I WAIT BEFORE MAKING MY MOVES (Y OR N)";
    0x623817c99400 ---------A   01390 F2 = 0
    0x623817c996d0 ---------A   01400 F9 = 1
    0x623817c99830 ---------A T 01410 INPUT X$
    0x623817c99ac0 ---------A   01420 IF X$ = "N" THEN 1460
    0x623817c99d40 ---------A   01430 IF X$ <> "Y" THEN  1410
    0x623817c99f90 ---------A   01440 F2 = 1
    0x623817c9a120 ---------A   01450         PRINT "OK.  TYPING ANY CHARACTER WILL LET ME GO"
    0x623817c9a2b0 ---------A T 01460 PRINT "SHOULD I PLAY MY BEST STRATEGY (Y OR N)";
    0x623817c9a580 ---------A   01470 S2 = 0
    0x623817c9a6e0 ---------A T 01480 INPUT X$
    0x623817c9a970 ---------A   01490 IF X$ = "N" THEN 1520
    0x623817c9abf0 ---------A   01500 IF X$ <> "Y" THEN 1480
    0x623817c9ae10 ---------A   01510 S2 = 2
    0x623817c9b0e0 ---------A T 01520 B = -1
    0x623817c9b3b0 ---------A   01530 W = +1
    0x623817c9b7c0 ---------A   01540 D$(B +1) ="X"
    0x623817c9bbb0 ---------A   01550 D$(0 +1) = "."
    0x623817c9bfc0 ---------A   01560 D$(W + 1) ="O"
    0x623817c9c350 ---------A   01570 FOR K = 1 TO 8
    0x623817c9c590 ---------A   01580     READ I4(K)
    0x623817c9c6b0 ---------A   01590 NEXT K
    0x623817c9ce40 ---------A   01600 DATA 0,-1,-1,-1,0,1,1,1
    0x623817c9d110 ---------A   01610 FOR K=1 TO 8
    0x623817c9d350 ---------A   01620     READ J4(K)
    0x623817c9d470 ---------A   01630 NEXT K
    0x623817c9dc00 ---------A   01640 DATA 1,1,0,-1,-1,-1,0,1
    0x623817c9e2e0 ---------A   01650 FOR K = 1 TO 8
    0x623817c9e520 ---------A   01660     READ C$(K)
    0x623817c9e640 ---------A   01670 NEXT K
    0x623817c9ede0 ---------A   01680 DATA A,B,C,D,E,F,G,H
    0x623817c9ee60 ---------A   01690 REM********		SET UP A NEW GAME
    0x623817c9f200 ---------A T 01700 FOR I = 0 TO 9
    0x623817c9f5a0 ---------A   01710     FOR J = 0 TO 9
    0x623817c9f980 ---------A   01720 	A(I,J)=0
    0x623817c9fab0 ---------A   01730     NEXT J
    0x623817c9fbf0 ---------A   01740 NEXT I
    0x623817c9ffb0 ---------A   01750 A(4,4) = W
    0x623817ca0360 ---------A   01760 A(5,5) = W
    0x623817ca0710 ---------A   01770 A(4,5) = B
    0x623817ca0ac0 ---------A   01780 A(5,4) = B
    0x623817ca0d90 ---------A   01790 C1 = 2
    0x623817ca1060 ---------A   01800 H1 = 2
    0x623817ca1330 ---------A   01810 N1 = 4
    0x623817ca1610 ---------A   01820 Z =0
    0x623817ca1690 ---------A   01830 REM********		HUMAN'S CHOICES
    0x623817ca1840 ---------A   01840 PRINT "DO YOU WANT TO HAVE X OR O";
    0x623817ca1b30 ---------A   01850 C = W
    0x623817ca1e20 ---------A   01860 H = B
    0x623817ca1f80 ---------A T 01870 INPUT X$
    0x623817ca2210 ---------A   01880 IF X$ = "X" THEN 1920
    0x623817ca2490 ---------A   01890 IF X$ <> "O" THEN 1870
    0x623817ca26d0 ---------A   01900 C = B
    0x623817ca2920 ---------A   01910 H = W
    0x623817ca2aa0 ---------A T 01920 PRINT "DO YOU WANT TO GO FIRST (Y OR N)";
    0x623817ca2bf0 ---------A T 01930 INPUT X$
    0x623817ca2e20 ---------A   01940 PRINT CHR$(26)
    0x623817ca30a0 ---------A   01950 IF X$ = "N" THEN 2030
    0x623817ca3330 ---------A   01960 IF X$ <> "Y" THEN 1930
    0x623817ca33c0 ---------A   01970 REM********		PRINT INITIAL BOARD
    0x623817ca3440 ---------A   01980 GOSUB 4320
    0x623817ca34b0 ---------A   01990 GO TO 2760
    0x623817ca3520 ---------A   02000 REM********		COMPUTER'S MOVE
    0x623817ca3790 ---------A T 02010 IF F2 = 0 THEN 2030
    0x623817ca38f0 ---------A   02020 INPUT X$
    0x623817ca3bd0 ---------A T 02030 B1 = -1
    0x623817ca4040 ---------A   02040 I3 = J3 = 0
    0x623817ca4330 ---------A   02050 T1 = C
    0x623817ca4630 ---------A   02060 T2 = H
    0x623817ca46b0 ---------A   02070 REM********		SCAN FOR BLANK SQUARE
    0x623817ca4990 ---------A   02080 FOR I = 1 TO 8
    0x623817ca4c80 ---------A   02090     FOR J = 1 TO 8
    0x623817ca50b0 ---------A   02100 	IF A(I,J) <> 0 THEN 2390
    0x623817ca5140 ---------A   02110 	REM********		FOUND A BLANK SQUARE
    0x623817ca5210 ---------A   02120 	REM********		DOES IT HAVE AN OPPONENT AS A NEIGHBOUR
    0x623817ca52a0 ---------A   02130 	GOSUB 3840
    0x623817ca55c0 ---------A   02140 	IF F1 = 0 THEN 2390
    0x623817ca5660 ---------A   02150 	REM********		FOUND OPPONENT AS NEIGHBOUR
    0x623817ca5720 ---------A   02160 	REM********		HOW MANY OF HIS PIECES CAN WE FLIP?
    0x623817ca57c0 ---------A   02170 	REM********		DON'T DO IT NOW
    0x623817ca5aa0 ---------A   02180 	U = -1
    0x623817ca5b30 ---------A   02190 	GOSUB 4040
    0x623817ca5bb0 ---------A   02200 	REM********		EXTRA POINTS FOR BOUNDARY POSITION
    0x623817ca5ef0 ---------A   02210 	IF S1 = 0 THEN 2390
    0x623817ca64f0 ---------A   02220 	IF (I-1) * (I-8) <> 0 THEN 2240
    0x623817ca6860 ---------A   02230 	S1 = S1 + S2
    0x623817ca6e50 ---------A T 02240 	IF (J-1) * (J-8) <> 0 THEN 2270
    0x623817ca71e0 ---------A   02250 	S1 = S1 +S2
    0x623817ca7270 ---------A   02260 	REM********		IS THIS BETTER THAN THE BEST FOUND SO FAR
    0x623817ca7510 ---------A T 02270 	IF S1 < B1 THEN 2390
    0x623817ca77b0 ---------A   02280 	IF S1 > B1 THEN 2350
    0x623817ca8050 ---------A   02290 	REM********		A TIE; RANDOM DECISION
    0x623817ca8120 ---------A   02300 	REM********		THE NEXT TWO EXECUTABLE STATEMENTS ARE FOR
    0x623817ca81d0 ---------A   02310 	REM********		BASIC WITH RANDOM NUMBERS
    0x623817ca85a0 ---------A   02320 	R = RND(1)
    0x623817ca87f0 ---------A   02330 	IF R > .5 THEN 2390
    0x623817ca8870 ---------A   02340 	REM********		YES
    0x623817ca8ab0 ---------A T 02350 	B1 = S1
    0x623817ca8ce0 ---------A   02360 	I3 = I
    0x623817ca8f20 ---------A   02370 	J3 = J
    0x623817ca8fa0 ---------A   02380 	REM********		END OF SCAN LOOP
    0x623817ca90e0 ---------A T 02390     NEXT J
    0x623817ca9220 ---------A   02400 NEXT I
    0x623817ca92c0 ---------A   02410 REM********		COULD WE DO ANYTHING?
    0x623817ca9530 ---------A   02420 IF B1 > 0 THEN 2510
    0x623817ca95b0 ---------A   02430 REM********		NO
    0x623817ca9890 ---------A   02440 LET L = 18
    0x623817ca9920 ---------A   02450 GOSUB 4490
    0x623817ca9a70 ---------A   02460 PRINT "DAMN! HAVE TO FORFEIT MY MOVE!"
    0x623817ca9cc0 ---------A   02470 IF Z = 1 THEN 3370
    0x623817ca9ee0 ---------A   02480 Z = 1
    0x623817ca9f60 ---------A   02490 GO TO 2760
    0x623817ca9fd0 ---------A   02500 REM********		MAKE THE MOVE
    0x623817caa1f0 ---------A T 02510 Z = 0
    0x623817caa400 ---------A   02520 LET L=15
    0x623817caa480 ---------A   02530 GOSUB 4490
    0x623817caa5e0 ---------A   02540 PRINT "I WILL MOVE TO ";
    0x623817caa750 ---------A   02550 PRINT I3;
    0x623817caa8c0 ---------A   02560 PRINT " , ";
    0x623817caaaf0 ---------A   02570 PRINT C$(J3)
    0x623817caad20 ---------A   02580 I= I3
    0x623817caaf50 ---------A   02590 J= J3
    0x623817cab160 ---------A   02600 U= 1
    0x623817cab1d0 ---------A   02610 GOSUB 4040
    0x623817cab610 ---------A   02620 C1 = C1 + S1 + 1
    0x623817cab960 ---------A   02630 H1 = H1 - S1
    0x623817cabc90 ---------A   02640 N1 = N1 + 1
    0x623817cabea0 ---------A   02650 LET L=16
    0x623817cabf20 ---------A   02660 GOSUB 4490
    0x623817cac080 ---------A   02670 PRINT " THAT GIVES ME : ";
    0x623817cac200 ---------A   02680 PRINT S1;
    0x623817cac360 ---------A   02690 PRINT " OF YOUR PIECES"
    0x623817cac3e0 ---------A   02700 REM********		PRINT OUT BOARD
    0x623817cac470 ---------A   02710 GOSUB 4320
    0x623817cac4e0 ---------A   02720 REM********		TEST FOR END OF GAME
    0x623817cac760 ---------A   02730 IF H1 = 0 THEN 3370
    0x623817cac9d0 ---------A   02740 IF N1 = 64 THEN 3370
    0x623817caca60 ---------A   02750 REM********		HUMANS MOVE
    0x623817cacca0 ---------A T 02760 T1 = H
    0x623817caced0 ---------A   02770 T2 = C
    0x623817cad0e0 ---------A   02780 LET L = 12
    0x623817cad160 ---------A   02790 GOSUB 4490
    0x623817cad2c0 ---------A T 02800 PRINT " YOUR MOVE";
    0x623817cad4f0 ---------A T 02810 INPUT I, X$
    0x623817cad750 ---------A   02820 IF I < 0 THEN 2810
    0x623817cad9c0 ---------A   02830 IF I > 8 THEN 2810
    0x623817cadc20 ---------A   02840 IF I <> 0 THEN 2930
    0x623817cade40 ---------A   02850 LET L = 18
    0x623817caded0 ---------A   02860 GOSUB 4490
    0x623817cae020 ---------A   02870 PRINT "ARE YOU FORFEITING YOUR TURN Y OR N"
    0x623817cae180 ---------A   02880 INPUT X$
    0x623817cae400 ---------A   02890 IF X$ <> "Y" THEN 2800
    0x623817cae660 ---------A   02900 IF Z = 1 THEN 3370
    0x623817cae880 ---------A   02910 Z = 1
    0x623817cae8f0 ---------A   02920 GO TO 2010
    0x623817caebc0 ---------A T 02930 FOR J = 1 TO 8
    0x623817caef20 ---------A   02940     IF C$(J) =X$ THEN 2980
    0x623817caf060 ---------A   02950 NEXT J
    0x623817caf0f0 ---------A   02960 GO TO 2810
    0x623817caf160 ---------A   02970 REM********		CHECK FOR BLANK
    0x623817caf590 ---------A T 02980 IF A(I,J) = 0 THEN 3040
    0x623817caf7b0 ---------A   02990 LET L = 18
    0x623817caf840 ---------A   03000 GOSUB 4490
    0x623817caf9a0 ---------A   03010 PRINT "SORRY, THAT SQUARE IS OCCUPIED, TRY AGAIN"
    0x623817cafa30 ---------A   03020 GO TO 2810
    0x623817cafaa0 ---------A   03030 REM********		CHECK FOR LEGAL NEIGHBOUR
    0x623817cafb30 ---------A T 03040 GOSUB 3840
    0x623817cafd70 ---------A   03050 IF F1 = 1 THEN 3110
    0x623817caff90 ---------A   03060 LET L = 18
    0x623817cb0030 ---------A   03070 GOSUB 4490
    0x623817cb01c0 ---------A   03080 PRINT "SORRY, YOU ARE NOT NEXT TO ONE OF MY PIECES. TRY AGAIN.";
    0x623817cb0240 ---------A   03090 GO TO 2810
    0x623817cb02b0 ---------A   03100 REM********		CHECK IF LEGAL RUN
    0x623817cb04d0 ---------A T 03110 U = -1
    0x623817cb0550 ---------A   03120 GOSUB 4040
    0x623817cb0790 ---------A   03130 IF S1 > 0 THEN 3190
    0x623817cb09b0 ---------A   03140 LET L = 18
    0x623817cb0a40 ---------A   03150 GOSUB 4490
    0x623817cb0ba0 ---------A   03160 PRINT "SORRY, THAT DOESN'T FLANK A ROW, TRY AGAIN"
    0x623817cb0c30 ---------A   03170 GO TO 2810
    0x623817cb0cb0 ---------A   03180 REM********		EVERYTHING LEGAL; MAKE HUMANS MOVE
    0x623817cb0ed0 ---------A T 03190 Z = 0
    0x623817cb10e0 ---------A   03200 LET L = 13
    0x623817cb1160 ---------A   03210 GOSUB 4490
    0x623817cb12c0 ---------A   03220 PRINT "THAT GIVES YOU";
    0x623817cb1440 ---------A   03230 PRINT S1;
    0x623817cb1590 ---------A   03240 PRINT " OF MY PIECES"
    0x623817cb17a0 ---------A   03250 U = 1
    0x623817cb1810 ---------A   03260 GOSUB 4040
    0x623817cb1c50 ---------A   03270 H1 = H1 + S1 + 1
    0x623817cb1fa0 ---------A   03280 C1 = C1 -S1
    0x623817cb22e0 ---------A   03290 N1 = N1 + 1
    0x623817cb2360 ---------A   03300 REM********		PRINT OUT BOARD
    0x623817cb23f0 ---------A   03310 GOSUB 4320
    0x623817cb2460 ---------A   03320 REM********		TEST FOR END OF GAME
    0x623817cb26e0 ---------A   03330 IF C1 = 0 THEN 3370
    0x623817cb2940 ---------A   03340 IF N1 = 64 THEN 3370
    0x623817cb29d0 ---------A   03350 GO TO 2010
    0x623817cb2a40 ---------A   03360 REM********		END OF GAME ; WRAPUP
    0x623817cb2c60 ---------A T 03370 LET L = 18
    0x623817cb2cf0 ---------A   03380 GOSUB 4490
    0x623817cb2e40 ---------A   03390 PRINT "FOR RESULTS ON GAME TYPE RETURN!!"
    0x623817cb2fa0 ---------A   03400 INPUT X$
    0x623817cb3380 ---------A   03410 PRINT CHR$(30),CHR$(26)
    0x623817cb34f0 ---------A   03420 PRINT "YOU HAVE ";
    0x623817cb3670 ---------A   03430 PRINT H1;
    0x623817cb37e0 ---------A   03440 PRINT " PIECES, AND I HAVE ";
    0x623817cb3960 ---------A   03450 PRINT C1;
    0x623817cb3ac0 ---------A   03460 PRINT " PIECES--- "
    0x623817cb3d40 ---------A   03470 IF H1 = C1 THEN 3510
    0x623817cb3fd0 ---------A   03480 IF H1 > C1 THEN 3530
    0x623817cb4140 ---------A   03490 PRINT "SORRY, I WON THAT ONE."
    0x623817cb41c0 ---------A   03500 GO TO 3540
    0x623817cb4300 ---------A T 03510 PRINT " A TIE!!!!!"
    0x623817cb4370 ---------A   03520 GO TO 3720
    0x623817cb44b0 ---------A T 03530 PRINT "YOU WON!!!"
    0x623817cb4810 ---------A T 03540 C1 = C1 - H1
    0x623817cb4a60 ---------A   03550 IF C1 > 0 THEN 3570
    0x623817cb4ca0 ---------A   03560 C1 = -C1
    0x623817ca7c60 ---------A T 03570 C1 = (64 * C1)/ N1
    0x623817ca7de0 ---------A   03580 PRINT "THAT WAS A ";
    0x623817cb5d30 ---------A   03590 IF C1 < 11 THEN 3710
    0x623817cb5fa0 ---------A   03600 IF C1 < 25 THEN 3690
    0x623817cb6210 ---------A   03610 IF C1 < 39 THEN 3670
    0x623817cb6480 ---------A   03620 IF C1 < 53 THEN 3650
    0x623817cb65e0 ---------A   03630 PRINT " A PERFECT GAME!"
    0x623817cb6650 ---------A   03640 GO TO 3720
    0x623817cb6790 ---------A T 03650 PRINT "WALKAWAY!"
    0x623817cb6800 ---------A   03660 GO TO 3720
    0x623817cb6940 ---------A T 03670 PRINT "FIGHT!"
    0x623817cb69b0 ---------A   03680 GO TO 3720
    0x623817cb6af0 ---------A T 03690 PRINT "HOT GAME!"
    0x623817cb6b60 ---------A   03700 GO TO 3720
    0x623817cb6ca0 ---------A T 03710 PRINT "SQUEAKER!"
    0x623817cb6d20 ---------A T 03720 PRINT
    0x623817cb6ea0 ---------A   03730 PRINT"DO YOU WANT TO PLAY AGAIN";
    0x623817cb7000 ---------A T 03740 INPUT X$
    0x623817cb7290 ---------A   03750 IF X$ = "Y" THEN 1700
    0x623817cb7520 ---------A   03760 IF X$ <> "N" THEN 3740
    0x623817cb7680 ---------A   03770 PRINT "THANKS FOR PLAYING."
    0x623817cb76d0 ---------A   03780 STOP
    0x623817cb7750 ---------B   03790 REM********		
    0x623817cb7810 ---------B   03800 REM********		SUBROUTINE: TEST FOR PROPER NEIGHBOUR
    0x623817cb78a0 ---------B   03810 REM********		ASSUMES:
    0x623817cb7950 ---------B   03820 REM********		I,J LOCATES A BLANK SQUARE
    0x623817cb7a20 ---------B   03830 REM********		YOU HOPE TO SEE AN ADJACENT  T2 (= -T1)
    0x623817cb7dd0 ---------B G 03840 FOR I1 =  -1 TO 1
    0x623817cb8180 ---------B   03850     FOR J1 = -1 TO 1
    0x623817cb8800 ---------B   03860 	IF  A(I+I1,J+J1) = T2 THEN 3930
    0x623817cb8940 ---------B   03870     NEXT J1
    0x623817cb8a80 ---------B   03880 NEXT I1
    0x623817cb8b20 ---------B   03890 REM********		NO T2 FOUND
    0x623817cb8d40 ---------B   03900 F1 = 0
    0x623817cb8d90 ---------B   03910 RETURN
    0x623817cb8e20 ---------A   03920 REM********		SUCCESS
    0x623817cb9040 ---------B T 03930 F1 = 1
    0x623817cb9090 ---------B   03940 RETURN
    0x623817cb9150 ---------C   03950 REM********		SUBROUTINE SCORE AND UPDATE
    0x623817cb91e0 ---------C   03960 REM********		ASSUMES;
    0x623817cb92b0 ---------C   03970 REM********		(I,J) IS A TENTATIVE PLACE FOR A PIECE T1.
    0x623817cb9380 ---------C   03980 REM********		WANT RUNS OF T2 = -T1, TERMINATED BY A T1.
    0x623817cb9450 ---------C   03990 REM********		IF U IS TRUE (1), MARK THOSE RUNS AS T1'S.
    0x623817cb9520 ---------C   04000 REM********		RETURN SUM OF ALL RUNS (T2'S ONLY) IN S1.
    0x623817cb9600 ---------C   04010 REM********		MAIN PROGRAM CONTAINS THE FOLLOWING ARRAYS:
    0x623817cb96c0 ---------C   04020 REM********		I4:  0 -1 -1 -1  0  1  1  1
    0x623817cb9780 ---------C   04030 REM********		J4:  1  1  0 -1 -1 -1  0  1
    0x623817cb99a0 ---------C G 04040 S1 = 0
    0x623817cb9c70 ---------C   04050 FOR K = 1 TO 8
    0x623817cba050 ---------C   04060     I5 = I4(K)
    0x623817cba420 ---------C   04070     J5 = J4(K)
    0x623817cba830 ---------C   04080     I6 = I + I5
    0x623817cbac40 ---------C   04090     J6 = J + J5
    0x623817cbaf20 ---------C   04100     S3 = 0
    0x623817cbb360 ---------C   04110     IF A(I6,J6) <> T2 THEN 4290
    0x623817cbb3f0 ---------C   04120     REM			LOOP THROUGH THE RUN
    0x623817cbb730 ---------C T 04130     S3 = S3 + 1
    0x623817cbba80 ---------C   04140     I6 = I6 + I5
    0x623817cbbde0 ---------C   04150     J6 = J6 + J5
    0x623817cbc220 ---------C   04160     IF A (I6,J6) = T1 THEN 4190
    0x623817cbc640 ---------C   04170     IF A(I6,J6) = 0 THEN 4290
    0x623817cbc6c0 ---------C   04180     GO TO 4130
    0x623817cbca10 ---------C T 04190     S1 = S1 + S3
    0x623817cbcc70 ---------C   04200     IF U <> 1 THEN 4290
    0x623817cbccf0 ---------C   04210     REM			UPDATE BOARD
    0x623817cbcf30 ---------C   04220     I6 = I
    0x623817cbd170 ---------C   04230     J6 = J
    0x623817cbd520 ---------C   04240     FOR K1 = 0 TO S3
    0x623817cbd920 ---------C   04250 	A(I6,J6) = T1
    0x623817cbdc70 ---------C   04260 	I6 = I6 + I5
    0x623817cbdfc0 ---------C   04270 	J6 = J6 + J5
    0x623817cbe0f0 ---------C   04280     NEXT K1
    0x623817cbe230 ---------C T 04290 NEXT K
    0x623817cbe290 ---------C   04300 RETURN
    0x623817cbe340 ---------D   04310 REM********		SUBROUTINE TO PRINT BOARD
    0x623817cbe560 ---------D G 04320 PRINT CHR$(30)
    0x623817cbe780 ---------D   04330 LET L = 18
    0x623817cbe9b0 ---------D   04340 IF F9 = 1 GO TO 4370
    0x623817cbea50 ---------D   04350 GOSUB 4570
    0x623817cbec50 ---------D   04360 LET F9 = 1
    0x623817cbee70 ---------D T 04370 PRINT CHR$(30)
    0x623817cbefc0 ---------D   04380 PRINT "    A B C D E F G H"
    0x623817cbf290 ---------D   04390 FOR I = 1 TO 8
    0x623817cbf410 ---------D   04400     PRINT I;
    0x623817cbf6e0 ---------D   04410     FOR J = 1 TO 8
    0x623817cbf870 ---------D   04420 	PRINT " ";
    0x623817cbfd80 ---------D   04430 	PRINT D$(A(I,J)+1);
    0x623817cbfeb0 ---------D   04440     NEXT J
    0x623817cbff30 ---------D   04450     PRINT
    0x623817cc0060 ---------D   04460 NEXT I
    0x623817cc00e0 ---------D   04470 PRINT
    0x623817cc0130 ---------D   04480 RETURN
    0x623817cc01d0 ---------E G 04490 REM********		***	SPACE		***
    0x623817cc03f0 ---------E   04500 PRINT CHR$(30)
    0x623817cc07a0 ---------E   04510 FOR I9 = 1 TO L
    0x623817cc0820 ---------E   04520     PRINT
    0x623817cc0950 ---------E   04530 NEXT I9
    0x623817cc0ba0 ---------E   04540 IF L <> 18 GO TO 4560
    0x623817cc0de0 ---------E   04550 F9 = 0
    0x623817cc0e30 ---------E T 04560 RETURN
    0x623817cc0ed0 ---------F G 04570 REM********		***	BLANK OUT	***
    0x623817cc0f50 ---------F   04580 GOSUB 4490
    0x623817cc11d0 ---------F   04590 PRINT TAB(60);" "
    0x623817cc1460 ---------F   04600 PRINT TAB(60);" "
    0x623817cc14b0 ---------F   04610 RETURN
    0x623817cc1510 ---------A   04620 END
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
   A) 0x623817c7f550 (01000)   0x623817c7f550 (01000)   0x623817cc1510 (04620)   0x623817cc1510 (04620)   
   B) 0x623817cb7750 (03790)   0x623817cb7dd0 (03840)   0x623817cb8d90 (03910)   0x623817cb9090 (03940)   
   C) 0x623817cb9150 (03950)   0x623817cb99a0 (04040)   0x623817cbe290 (04300)   0x623817cbe290 (04300)   
   D) 0x623817cbe340 (04310)   0x623817cbe560 (04320)   0x623817cc0130 (04480)   0x623817cc0130 (04480)   
   E) 0x623817cc01d0 (04490)   0x623817cc01d0 (04490)   0x623817cc0e30 (04560)   0x623817cc0e30 (04560)   
   F) 0x623817cc0ed0 (04570)   0x623817cc0ed0 (04570)   0x623817cc14b0 (04610)   0x623817cc14b0 (04610)   

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
    A               Array    Integer         {0,8} {0,8} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B1                       Integer     
    C                        Integer     
    C$              Array    String          {0,7} 
    C1                       Integer     
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
    F1                       Integer     
    F2                       Integer     
    F9                       Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
    H1                       Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    I1                       Integer     
    I3                       Integer     
    I4              Array    Integer         {0,7} 
    I5                       Integer     
    I6                       Integer     
    I9                       Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    J1                       Integer     
    J3                       Integer     
    J4              Array    Integer         {0,7} 
    J5                       Integer     
    J6                       Integer     
    K                        Integer     
    K1                       Integer     
    L                        Integer     
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
    N1                       Integer     
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S1                       Integer     
    S2                       Integer     
    S3                       Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T1                       Integer     
    T2                       Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X$                       String      
    Z                        Integer     

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
    0x623817c7f550 ---------A   01000 REM********		OTHELLO          BYTE VOL. 2, NUMBER 10 (OCT. 1977)
    0x623817c7f5d0 ---------A   01010 REM********		PLAYS THE GAME OTHELLO WITH TWO STRATEGIES
    0x623817c8f2d0 ---------A   01020 REM********		1. TAKE THE MAX. NUMBER OF PIECES
    0x623817c7f2f0 ---------A   01030 REM********		2. ADD A BONUS FOR OUTSIDE POSITION
    0x623817c905e0 ---------A   01040 REM********		BOARD IS THE ARRAY A, BOUNDED BY 0'S (BLANKS)
    0x623817c8e9e0 ---------A   01050 REM********		A = 0 FOR EMPTY SQUARE
    0x623817c8e7f0 ---------A   01060 REM********		A = B FOR BLACK SQUARE
    0x623817c90aa0 ---------A   01070 REM********		A = W FOR WHITE SQUARE
    0x623817c8f040 ---------A   01080 REM********		I AND J ARE ALWAYS USED FOR ROW/COLUMN INDICES
    0x623817c8ee40 ---------A   01090 REM********		I1 AND J4 STORE INCREMENTS TO THE 8 NEIGHBOURS
    0x623817c8f4d0 ---------A   01100 REM********		C$ AND D$ STORE CHARACTERS A-H,X,...,O FOR OUTPUT
    0x623817c96a80 ---------A   01110 DIM A(9,9),I4(8),J4(8),C$(8),D$(2)
    0x623817c96ac0 ---------A   01120 REM********		
    0x623817c96c00 ---------A   01130 PRINT "GREETINGS FROM OTHELLO!"
    0x623817c96d10 ---------A   01140 PRINT "DO YOU WANT INSTRUCTIONS (Y OR N)";
    0x623817c8e6d0 ---------A T 01150 INPUT X$
    0x623817c8e670 ---------A   01160 IF X$ = "N" THEN 1380
    0x623817c97300 ---------A   01170 IF X$ <> "Y" THEN 1150
    0x623817c973a0 ---------A   01180 PRINT
    0x623817c97540 ---------A   01190 PRINT "OTHELLO IS PLAYED ON AN 8X8 CHECKER BOARD"
    0x623817c976e0 ---------A   01200 PRINT "ROWS ARE NUMBERED FROM 1 TO 8 AND COLUMNS FROM A TO H"
    0x623817c97880 ---------A   01210 PRINT" THE INITIAL CONFIGURATION IS ALL BLANK EXCEPT FOR"
    0x623817c979d0 ---------A   01220 PRINT "THE CENTER FOUR SQUARES, WHICH FORM THE PATTERN:"
    0x623817c97b00 ---------A   01230 PRINT "               O X"
    0x623817c97c50 ---------A   01240 PRINT "               X O"
    0x623817c97cf0 ---------A   01250 PRINT
    0x623817c97ea0 ---------A   01260 PRINT "TRY TO PLACE YOUR PIECE SO THAT IT WILL 'OUTFLANK' MINE"
    0x623817c98040 ---------A   01270 PRINT "THEREBY CREATING A HORIZONTAL, VERTICAL, OR DIAGONAL "
    0x623817c981e0 ---------A   01280 PRINT "RUN OF MY PIECES BOUNDED AT EACH END BY AT LEAST ONE "
    0x623817c98360 ---------A   01290 PRINT "OF YOURS.  THIS WILL 'FLIP' MY PIECES, TURNING THEM INTO"
    0x623817c984e0 ---------A   01300 PRINT "YOURS."
    0x623817c98680 ---------A   01310 PRINT"     NOTE: YOU MUST CAPTURE AT LEAST ONE OF MY PIECES"
    0x623817c98820 ---------A   01320 PRINT "IN THIS WAY IF IT IS AT ALL POSSIBLE.  IF IT IS NOT"
    0x623817c98bc0 ---------A   01330 PRINT "POSSIBLE, YOU FORFEIT YOUR TURN BY ENTERING"
    0x623817c98d30 ---------A   01340 PRINT "     0,0   FOR YOUR ROW,COLUMN MOVE"
    0x623817c98e80 ---------A   01350 PRINT " GOOD LUCK!"
    0x623817c98ef0 ---------A   01360 PRINT
    0x623817c98f60 ---------A   01370 REM********		
    0x623817c99130 ---------A T 01380 PRINT "SHOULD I WAIT BEFORE MAKING MY MOVES (Y OR N)";
    0x623817c99400 ---------A   01390 F2 = 0
    0x623817c996d0 ---------A   01400 F9 = 1
    0x623817c99830 ---------A T 01410 INPUT X$
    0x623817c99ac0 ---------A   01420 IF X$ = "N" THEN 1460
    0x623817c99d40 ---------A   01430 IF X$ <> "Y" THEN  1410
    0x623817c99f90 ---------A   01440 F2 = 1
    0x623817c9a120 ---------A   01450         PRINT "OK.  TYPING ANY CHARACTER WILL LET ME GO"
    0x623817c9a2b0 ---------A T 01460 PRINT "SHOULD I PLAY MY BEST STRATEGY (Y OR N)";
    0x623817c9a580 ---------A   01470 S2 = 0
    0x623817c9a6e0 ---------A T 01480 INPUT X$
    0x623817c9a970 ---------A   01490 IF X$ = "N" THEN 1520
    0x623817c9abf0 ---------A   01500 IF X$ <> "Y" THEN 1480
    0x623817c9ae10 ---------A   01510 S2 = 2
    0x623817c9b0e0 ---------A T 01520 B = -1
    0x623817c9b3b0 ---------A   01530 W = +1
    0x623817c9b7c0 ---------A   01540 D$(B +1) ="X"
    0x623817c9bbb0 ---------A   01550 D$(0 +1) = "."
    0x623817c9bfc0 ---------A   01560 D$(W + 1) ="O"
    0x623817c9c350 ---------A   01570 FOR K = 1 TO 8
    0x623817c9c590 ---------A   01580     READ I4(K)
    0x623817c9c6b0 ---------A   01590 NEXT K
    0x623817c9ce40 ---------A   01600 DATA 0,-1,-1,-1,0,1,1,1
    0x623817c9d110 ---------A   01610 FOR K=1 TO 8
    0x623817c9d350 ---------A   01620     READ J4(K)
    0x623817c9d470 ---------A   01630 NEXT K
    0x623817c9dc00 ---------A   01640 DATA 1,1,0,-1,-1,-1,0,1
    0x623817c9e2e0 ---------A   01650 FOR K = 1 TO 8
    0x623817c9e520 ---------A   01660     READ C$(K)
    0x623817c9e640 ---------A   01670 NEXT K
    0x623817c9ede0 ---------A   01680 DATA A,B,C,D,E,F,G,H
    0x623817c9ee60 ---------A   01690 REM********		SET UP A NEW GAME
    0x623817c9f200 ---------A T 01700 FOR I = 0 TO 9
    0x623817c9f5a0 ---------A   01710     FOR J = 0 TO 9
    0x623817c9f980 ---------A   01720 	A(I,J)=0
    0x623817c9fab0 ---------A   01730     NEXT J
    0x623817c9fbf0 ---------A   01740 NEXT I
    0x623817c9ffb0 ---------A   01750 A(4,4) = W
    0x623817ca0360 ---------A   01760 A(5,5) = W
    0x623817ca0710 ---------A   01770 A(4,5) = B
    0x623817ca0ac0 ---------A   01780 A(5,4) = B
    0x623817ca0d90 ---------A   01790 C1 = 2
    0x623817ca1060 ---------A   01800 H1 = 2
    0x623817ca1330 ---------A   01810 N1 = 4
    0x623817ca1610 ---------A   01820 Z =0
    0x623817ca1690 ---------A   01830 REM********		HUMAN'S CHOICES
    0x623817ca1840 ---------A   01840 PRINT "DO YOU WANT TO HAVE X OR O";
    0x623817ca1b30 ---------A   01850 C = W
    0x623817ca1e20 ---------A   01860 H = B
    0x623817ca1f80 ---------A T 01870 INPUT X$
    0x623817ca2210 ---------A   01880 IF X$ = "X" THEN 1920
    0x623817ca2490 ---------A   01890 IF X$ <> "O" THEN 1870
    0x623817ca26d0 ---------A   01900 C = B
    0x623817ca2920 ---------A   01910 H = W
    0x623817ca2aa0 ---------A T 01920 PRINT "DO YOU WANT TO GO FIRST (Y OR N)";
    0x623817ca2bf0 ---------A T 01930 INPUT X$
    0x623817ca2e20 ---------A   01940 PRINT CHR$(26)
    0x623817ca30a0 ---------A   01950 IF X$ = "N" THEN 2030
    0x623817ca3330 ---------A   01960 IF X$ <> "Y" THEN 1930
    0x623817ca33c0 ---------A   01970 REM********		PRINT INITIAL BOARD
    0x623817ca3440 ---------A   01980 GOSUB 4350
    0x623817ca34b0 ---------A   01990 GO TO 2760
    0x623817ca3520 ---------A   02000 REM********		COMPUTER'S MOVE
    0x623817ca3790 ---------A T 02010 IF F2 = 0 THEN 2030
    0x623817ca38f0 ---------A   02020 INPUT X$
    0x623817ca3bd0 ---------A T 02030 B1 = -1
    0x623817ca4040 ---------A   02040 I3 = J3 = 0
    0x623817ca4330 ---------A   02050 T1 = C
    0x623817ca4630 ---------A   02060 T2 = H
    0x623817ca46b0 ---------A   02070 REM********		SCAN FOR BLANK SQUARE
    0x623817ca4990 ---------A   02080 FOR I = 1 TO 8
    0x623817ca4c80 ---------A   02090     FOR J = 1 TO 8
    0x623817ca50b0 ---------A   02100 	IF A(I,J) <> 0 THEN 2390
    0x623817ca5140 ---------A   02110 	REM********		FOUND A BLANK SQUARE
    0x623817ca5210 ---------A   02120 	REM********		DOES IT HAVE AN OPPONENT AS A NEIGHBOUR
    0x623817ca52a0 ---------A   02130 	GOSUB 3860
    0x623817ca55c0 ---------A   02140 	IF F1 = 0 THEN 2390
    0x623817ca5660 ---------A   02150 	REM********		FOUND OPPONENT AS NEIGHBOUR
    0x623817ca5720 ---------A   02160 	REM********		HOW MANY OF HIS PIECES CAN WE FLIP?
    0x623817ca57c0 ---------A   02170 	REM********		DON'T DO IT NOW
    0x623817ca5aa0 ---------A   02180 	U = -1
    0x623817ca5b30 ---------A   02190 	GOSUB 4060
    0x623817ca5bb0 ---------A   02200 	REM********		EXTRA POINTS FOR BOUNDARY POSITION
    0x623817ca5ef0 ---------A   02210 	IF S1 = 0 THEN 2390
    0x623817ca64f0 ---------A   02220 	IF (I-1) * (I-8) <> 0 THEN 2240
    0x623817ca6860 ---------A   02230 	S1 = S1 + S2
    0x623817ca6e50 ---------A T 02240 	IF (J-1) * (J-8) <> 0 THEN 2270
    0x623817ca71e0 ---------A   02250 	S1 = S1 +S2
    0x623817ca7270 ---------A   02260 	REM********		IS THIS BETTER THAN THE BEST FOUND SO FAR
    0x623817ca7510 ---------A T 02270 	IF S1 < B1 THEN 2390
    0x623817ca77b0 ---------A   02280 	IF S1 > B1 THEN 2350
    0x623817ca8050 ---------A   02290 	REM********		A TIE; RANDOM DECISION
    0x623817ca8120 ---------A   02300 	REM********		THE NEXT TWO EXECUTABLE STATEMENTS ARE FOR
    0x623817ca81d0 ---------A   02310 	REM********		BASIC WITH RANDOM NUMBERS
    0x623817ca85a0 ---------A   02320 	R = RND(1)
    0x623817ca87f0 ---------A   02330 	IF R > .5 THEN 2390
    0x623817ca8870 ---------A   02340 	REM********		YES
    0x623817ca8ab0 ---------A T 02350 	B1 = S1
    0x623817ca8ce0 ---------A   02360 	I3 = I
    0x623817ca8f20 ---------A   02370 	J3 = J
    0x623817ca8fa0 ---------A   02380 	REM********		END OF SCAN LOOP
    0x623817ca90e0 ---------A T 02390     NEXT J
    0x623817ca9220 ---------A   02400 NEXT I
    0x623817ca92c0 ---------A   02410 REM********		COULD WE DO ANYTHING?
    0x623817ca9530 ---------A   02420 IF B1 > 0 THEN 2510
    0x623817ca95b0 ---------A   02430 REM********		NO
    0x623817ca9890 ---------A   02440 LET L = 18
    0x623817ca9920 ---------A   02450 GOSUB 4540
    0x623817ca9a70 ---------A   02460 PRINT "DAMN! HAVE TO FORFEIT MY MOVE!"
    0x623817ca9cc0 ---------A   02470 IF Z = 1 THEN 3370
    0x623817ca9ee0 ---------A   02480 Z = 1
    0x623817ca9f60 ---------A   02490 GO TO 2760
    0x623817ca9fd0 ---------A   02500 REM********		MAKE THE MOVE
    0x623817caa1f0 ---------A T 02510 Z = 0
    0x623817caa400 ---------A   02520 LET L=15
    0x623817caa480 ---------A   02530 GOSUB 4540
    0x623817caa5e0 ---------A   02540 PRINT "I WILL MOVE TO ";
    0x623817caa750 ---------A   02550 PRINT I3;
    0x623817caa8c0 ---------A   02560 PRINT " , ";
    0x623817caaaf0 ---------A   02570 PRINT C$(J3)
    0x623817caad20 ---------A   02580 I= I3
    0x623817caaf50 ---------A   02590 J= J3
    0x623817cab160 ---------A   02600 U= 1
    0x623817cab1d0 ---------A   02610 GOSUB 4060
    0x623817cab610 ---------A   02620 C1 = C1 + S1 + 1
    0x623817cab960 ---------A   02630 H1 = H1 - S1
    0x623817cabc90 ---------A   02640 N1 = N1 + 1
    0x623817cabea0 ---------A   02650 LET L=16
    0x623817cabf20 ---------A   02660 GOSUB 4540
    0x623817cac080 ---------A   02670 PRINT " THAT GIVES ME : ";
    0x623817cac200 ---------A   02680 PRINT S1;
    0x623817cac360 ---------A   02690 PRINT " OF YOUR PIECES"
    0x623817cac3e0 ---------A   02700 REM********		PRINT OUT BOARD
    0x623817cac470 ---------A   02710 GOSUB 4350
    0x623817cac4e0 ---------A   02720 REM********		TEST FOR END OF GAME
    0x623817cac760 ---------A   02730 IF H1 = 0 THEN 3370
    0x623817cac9d0 ---------A   02740 IF N1 = 64 THEN 3370
    0x623817caca60 ---------A   02750 REM********		HUMANS MOVE
    0x623817cacca0 ---------A T 02760 T1 = H
    0x623817caced0 ---------A   02770 T2 = C
    0x623817cad0e0 ---------A   02780 LET L = 12
    0x623817cad160 ---------A   02790 GOSUB 4540
    0x623817cad2c0 ---------A T 02800 PRINT " YOUR MOVE";
    0x623817cad4f0 ---------A T 02810 INPUT I, X$
    0x623817cad750 ---------A   02820 IF I < 0 THEN 2810
    0x623817cad9c0 ---------A   02830 IF I > 8 THEN 2810
    0x623817cadc20 ---------A   02840 IF I <> 0 THEN 2930
    0x623817cade40 ---------A   02850 LET L = 18
    0x623817caded0 ---------A   02860 GOSUB 4540
    0x623817cae020 ---------A   02870 PRINT "ARE YOU FORFEITING YOUR TURN Y OR N"
    0x623817cae180 ---------A   02880 INPUT X$
    0x623817cae400 ---------A   02890 IF X$ <> "Y" THEN 2800
    0x623817cae660 ---------A   02900 IF Z = 1 THEN 3370
    0x623817cae880 ---------A   02910 Z = 1
    0x623817cae8f0 ---------A   02920 GO TO 2010
    0x623817caebc0 ---------A T 02930 FOR J = 1 TO 8
    0x623817caef20 ---------A   02940     IF C$(J) =X$ THEN 2980
    0x623817caf060 ---------A   02950 NEXT J
    0x623817caf0f0 ---------A   02960 GO TO 2810
    0x623817caf160 ---------A   02970 REM********		CHECK FOR BLANK
    0x623817caf590 ---------A T 02980 IF A(I,J) = 0 THEN 3040
    0x623817caf7b0 ---------A   02990 LET L = 18
    0x623817caf840 ---------A   03000 GOSUB 4540
    0x623817caf9a0 ---------A   03010 PRINT "SORRY, THAT SQUARE IS OCCUPIED, TRY AGAIN"
    0x623817cafa30 ---------A   03020 GO TO 2810
    0x623817cafaa0 ---------A   03030 REM********		CHECK FOR LEGAL NEIGHBOUR
    0x623817cafb30 ---------A T 03040 GOSUB 3860
    0x623817cafd70 ---------A   03050 IF F1 = 1 THEN 3110
    0x623817caff90 ---------A   03060 LET L = 18
    0x623817cb0030 ---------A   03070 GOSUB 4540
    0x623817cb01c0 ---------A   03080 PRINT "SORRY, YOU ARE NOT NEXT TO ONE OF MY PIECES. TRY AGAIN.";
    0x623817cb0240 ---------A   03090 GO TO 2810
    0x623817cb02b0 ---------A   03100 REM********		CHECK IF LEGAL RUN
    0x623817cb04d0 ---------A T 03110 U = -1
    0x623817cb0550 ---------A   03120 GOSUB 4060
    0x623817cb0790 ---------A   03130 IF S1 > 0 THEN 3190
    0x623817cb09b0 ---------A   03140 LET L = 18
    0x623817cb0a40 ---------A   03150 GOSUB 4540
    0x623817cb0ba0 ---------A   03160 PRINT "SORRY, THAT DOESN'T FLANK A ROW, TRY AGAIN"
    0x623817cb0c30 ---------A   03170 GO TO 2810
    0x623817cb0cb0 ---------A   03180 REM********		EVERYTHING LEGAL; MAKE HUMANS MOVE
    0x623817cb0ed0 ---------A T 03190 Z = 0
    0x623817cb10e0 ---------A   03200 LET L = 13
    0x623817cb1160 ---------A   03210 GOSUB 4540
    0x623817cb12c0 ---------A   03220 PRINT "THAT GIVES YOU";
    0x623817cb1440 ---------A   03230 PRINT S1;
    0x623817cb1590 ---------A   03240 PRINT " OF MY PIECES"
    0x623817cb17a0 ---------A   03250 U = 1
    0x623817cb1810 ---------A   03260 GOSUB 4060
    0x623817cb1c50 ---------A   03270 H1 = H1 + S1 + 1
    0x623817cb1fa0 ---------A   03280 C1 = C1 -S1
    0x623817cb22e0 ---------A   03290 N1 = N1 + 1
    0x623817cb2360 ---------A   03300 REM********		PRINT OUT BOARD
    0x623817cb23f0 ---------A   03310 GOSUB 4350
    0x623817cb2460 ---------A   03320 REM********		TEST FOR END OF GAME
    0x623817cb26e0 ---------A   03330 IF C1 = 0 THEN 3370
    0x623817cb2940 ---------A   03340 IF N1 = 64 THEN 3370
    0x623817cb29d0 ---------A   03350 GO TO 2010
    0x623817cb2a40 ---------A   03360 REM********		END OF GAME ; WRAPUP
    0x623817cb2c60 ---------A T 03370 LET L = 18
    0x623817cb2cf0 ---------A   03380 GOSUB 4540
    0x623817cb2e40 ---------A   03390 PRINT "FOR RESULTS ON GAME TYPE RETURN!!"
    0x623817cb2fa0 ---------A   03400 INPUT X$
    0x623817cb3380 ---------A   03410 PRINT CHR$(30),CHR$(26)
    0x623817cb34f0 ---------A   03420 PRINT "YOU HAVE ";
    0x623817cb3670 ---------A   03430 PRINT H1;
    0x623817cb37e0 ---------A   03440 PRINT " PIECES, AND I HAVE ";
    0x623817cb3960 ---------A   03450 PRINT C1;
    0x623817cb3ac0 ---------A   03460 PRINT " PIECES--- "
    0x623817cb3d40 ---------A   03470 IF H1 = C1 THEN 3510
    0x623817cb3fd0 ---------A   03480 IF H1 > C1 THEN 3530
    0x623817cb4140 ---------A   03490 PRINT "SORRY, I WON THAT ONE."
    0x623817cb41c0 ---------A   03500 GO TO 3540
    0x623817cb4300 ---------A T 03510 PRINT " A TIE!!!!!"
    0x623817cb4370 ---------A   03520 GO TO 3720
    0x623817cb44b0 ---------A T 03530 PRINT "YOU WON!!!"
    0x623817cb4810 ---------A T 03540 C1 = C1 - H1
    0x623817cb4a60 ---------A   03550 IF C1 > 0 THEN 3570
    0x623817cb4ca0 ---------A   03560 C1 = -C1
    0x623817ca7c60 ---------A T 03570 C1 = (64 * C1)/ N1
    0x623817ca7de0 ---------A   03580 PRINT "THAT WAS A ";
    0x623817cb5d30 ---------A   03590 IF C1 < 11 THEN 3710
    0x623817cb5fa0 ---------A   03600 IF C1 < 25 THEN 3690
    0x623817cb6210 ---------A   03610 IF C1 < 39 THEN 3670
    0x623817cb6480 ---------A   03620 IF C1 < 53 THEN 3650
    0x623817cb65e0 ---------A   03630 PRINT " A PERFECT GAME!"
    0x623817cb6650 ---------A   03640 GO TO 3720
    0x623817cb6790 ---------A T 03650 PRINT "WALKAWAY!"
    0x623817cb6800 ---------A   03660 GO TO 3720
    0x623817cb6940 ---------A T 03670 PRINT "FIGHT!"
    0x623817cb69b0 ---------A   03680 GO TO 3720
    0x623817cb6af0 ---------A T 03690 PRINT "HOT GAME!"
    0x623817cb6b60 ---------A   03700 GO TO 3720
    0x623817cb6ca0 ---------A T 03710 PRINT "SQUEAKER!"
    0x623817cb6d20 ---------A T 03720 PRINT
    0x623817cb6ea0 ---------A   03730 PRINT"DO YOU WANT TO PLAY AGAIN";
    0x623817cb7000 ---------A T 03740 INPUT X$
    0x623817cb7290 ---------A   03750 IF X$ = "Y" THEN 1700
    0x623817cb7520 ---------A   03760 IF X$ <> "N" THEN 3740
    0x623817cb7680 ---------A   03770 PRINT "THANKS FOR PLAYING."
    0x623817cb76d0 ---------A   03780 STOP
    0x623817cb8e20 ---------A   03790 REM********		SUCCESS
    0x623817cc1510 ---------A   03800 END
    0x623817cb7750 ---------B   03810 REM********		
    0x623817cb7810 ---------B   03820 REM********		SUBROUTINE: TEST FOR PROPER NEIGHBOUR
    0x623817cb78a0 ---------B   03830 REM********		ASSUMES:
    0x623817cb7950 ---------B   03840 REM********		I,J LOCATES A BLANK SQUARE
    0x623817cb7a20 ---------B   03850 REM********		YOU HOPE TO SEE AN ADJACENT  T2 (= -T1)
    0x623817cb7dd0 ---------B G 03860 FOR I1 =  -1 TO 1
    0x623817cb8180 ---------B   03870     FOR J1 = -1 TO 1
    0x623817cb8800 ---------B   03880 	IF  A(I+I1,J+J1) = T2 THEN 3940
    0x623817cb8940 ---------B   03890     NEXT J1
    0x623817cb8a80 ---------B   03900 NEXT I1
    0x623817cb8b20 ---------B   03910 REM********		NO T2 FOUND
    0x623817cb8d40 ---------B   03920 F1 = 0
    0x623817cc9ed0 ---------B   03930 GOTO 03960
    0x623817cb9040 ---------B T 03940 F1 = 1
    0x623817cc9f10 ---------B   03950 GOTO 03960
    0x623817cc9f50 ---------B T 03960 RETURN
    0x623817cb9150 ---------C   03970 REM********		SUBROUTINE SCORE AND UPDATE
    0x623817cb91e0 ---------C   03980 REM********		ASSUMES;
    0x623817cb92b0 ---------C   03990 REM********		(I,J) IS A TENTATIVE PLACE FOR A PIECE T1.
    0x623817cb9380 ---------C   04000 REM********		WANT RUNS OF T2 = -T1, TERMINATED BY A T1.
    0x623817cb9450 ---------C   04010 REM********		IF U IS TRUE (1), MARK THOSE RUNS AS T1'S.
    0x623817cb9520 ---------C   04020 REM********		RETURN SUM OF ALL RUNS (T2'S ONLY) IN S1.
    0x623817cb9600 ---------C   04030 REM********		MAIN PROGRAM CONTAINS THE FOLLOWING ARRAYS:
    0x623817cb96c0 ---------C   04040 REM********		I4:  0 -1 -1 -1  0  1  1  1
    0x623817cb9780 ---------C   04050 REM********		J4:  1  1  0 -1 -1 -1  0  1
    0x623817cb99a0 ---------C G 04060 S1 = 0
    0x623817cb9c70 ---------C   04070 FOR K = 1 TO 8
    0x623817cba050 ---------C   04080     I5 = I4(K)
    0x623817cba420 ---------C   04090     J5 = J4(K)
    0x623817cba830 ---------C   04100     I6 = I + I5
    0x623817cbac40 ---------C   04110     J6 = J + J5
    0x623817cbaf20 ---------C   04120     S3 = 0
    0x623817cbb360 ---------C   04130     IF A(I6,J6) <> T2 THEN 4310
    0x623817cbb3f0 ---------C   04140     REM			LOOP THROUGH THE RUN
    0x623817cbb730 ---------C T 04150     S3 = S3 + 1
    0x623817cbba80 ---------C   04160     I6 = I6 + I5
    0x623817cbbde0 ---------C   04170     J6 = J6 + J5
    0x623817cbc220 ---------C   04180     IF A (I6,J6) = T1 THEN 4210
    0x623817cbc640 ---------C   04190     IF A(I6,J6) = 0 THEN 4310
    0x623817cbc6c0 ---------C   04200     GO TO 4150
    0x623817cbca10 ---------C T 04210     S1 = S1 + S3
    0x623817cbcc70 ---------C   04220     IF U <> 1 THEN 4310
    0x623817cbccf0 ---------C   04230     REM			UPDATE BOARD
    0x623817cbcf30 ---------C   04240     I6 = I
    0x623817cbd170 ---------C   04250     J6 = J
    0x623817cbd520 ---------C   04260     FOR K1 = 0 TO S3
    0x623817cbd920 ---------C   04270 	A(I6,J6) = T1
    0x623817cbdc70 ---------C   04280 	I6 = I6 + I5
    0x623817cbdfc0 ---------C   04290 	J6 = J6 + J5
    0x623817cbe0f0 ---------C   04300     NEXT K1
    0x623817cbe230 ---------C T 04310 NEXT K
    0x623817cc9fb0 ---------C   04320 GOTO 04330
    0x623817cca010 ---------C T 04330 RETURN
    0x623817cbe340 ---------D   04340 REM********		SUBROUTINE TO PRINT BOARD
    0x623817cbe560 ---------D G 04350 PRINT CHR$(30)
    0x623817cbe780 ---------D   04360 LET L = 18
    0x623817cbe9b0 ---------D   04370 IF F9 = 1 GO TO 4400
    0x623817cbea50 ---------D   04380 GOSUB 4630
    0x623817cbec50 ---------D   04390 LET F9 = 1
    0x623817cbee70 ---------D T 04400 PRINT CHR$(30)
    0x623817cbefc0 ---------D   04410 PRINT "    A B C D E F G H"
    0x623817cbf290 ---------D   04420 FOR I = 1 TO 8
    0x623817cbf410 ---------D   04430     PRINT I;
    0x623817cbf6e0 ---------D   04440     FOR J = 1 TO 8
    0x623817cbf870 ---------D   04450 	PRINT " ";
    0x623817cbfd80 ---------D   04460 	PRINT D$(A(I,J)+1);
    0x623817cbfeb0 ---------D   04470     NEXT J
    0x623817cbff30 ---------D   04480     PRINT
    0x623817cc0060 ---------D   04490 NEXT I
    0x623817cc00e0 ---------D   04500 PRINT
    0x623817cca070 ---------D   04510 GOTO 04520
    0x623817cca0d0 ---------D T 04520 RETURN
    0x623817cc01d0 ---------E   04530 REM********		***	SPACE		***
    0x623817cc03f0 ---------E G 04540 PRINT CHR$(30)
    0x623817cc07a0 ---------E   04550 FOR I9 = 1 TO L
    0x623817cc0820 ---------E   04560     PRINT
    0x623817cc0950 ---------E   04570 NEXT I9
    0x623817cc0ba0 ---------E   04580 IF L <> 18 GO TO 4600
    0x623817cc0de0 ---------E   04590 F9 = 0
    0x623817cca130 ---------E T 04600 GOTO 04610
    0x623817cca190 ---------E T 04610 RETURN
    0x623817cc0ed0 ---------F   04620 REM********		***	BLANK OUT	***
    0x623817cc0f50 ---------F G 04630 GOSUB 4540
    0x623817cc11d0 ---------F   04640 PRINT TAB(60);" "
    0x623817cc1460 ---------F   04650 PRINT TAB(60);" "
    0x623817cca1f0 ---------F   04660 GOTO 04670
    0x623817cca250 ---------F T 04670 RETURN
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
int    A_int_arr[9][9];                           // Basic: A 
int    B_int;                                     // Basic: B 
int    B1_int;                                    // Basic: B1 
int    C_int;                                     // Basic: C 
char*  C_str_arr[8];                              // Basic: C$ 
int    C1_int;                                    // Basic: C1 
char*  D_str_arr[2];                              // Basic: D$ 
int    F1_int;                                    // Basic: F1 
int    F2_int;                                    // Basic: F2 
int    F9_int;                                    // Basic: F9 
int    H_int;                                     // Basic: H 
int    H1_int;                                    // Basic: H1 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    I3_int;                                    // Basic: I3 
int    I4_int_arr[8];                             // Basic: I4 
int    I5_int;                                    // Basic: I5 
int    I6_int;                                    // Basic: I6 
int    I9_int;                                    // Basic: I9 
int    J_int;                                     // Basic: J 
int    J1_int;                                    // Basic: J1 
int    J3_int;                                    // Basic: J3 
int    J4_int_arr[8];                             // Basic: J4 
int    J5_int;                                    // Basic: J5 
int    J6_int;                                    // Basic: J6 
int    K_int;                                     // Basic: K 
int    K1_int;                                    // Basic: K1 
int    L_int;                                     // Basic: L 
int    N1_int;                                    // Basic: N1 
int    R_int;                                     // Basic: R 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    S3_int;                                    // Basic: S3 
int    T1_int;                                    // Basic: T1 
int    T2_int;                                    // Basic: T2 
int    U_int;                                     // Basic: U 
int    W_int;                                     // Basic: W 
char*  X_str;                                     // Basic: X$ 
int    Z_int;                                     // Basic: Z 
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
    for(I1_int=-1;I1_int<=1;I1_int++){
        // 03870     FOR J1 = -1 TO 1
        for(J1_int=-1;J1_int<=1;J1_int++){
            // 03880 	IF  A(I+I1,J+J1) = T2 THEN 3940
            if(A_int_arr[I_int+I1_int][J_int+J1_int]==T2_int)goto Lbl_03940;
            // 03890     NEXT J1
            int dummy_3890=0; // Ignore this line.
        }; // End-For(J1_int)
        // 03900 NEXT I1
        int dummy_3900=0; // Ignore this line.
    }; // End-For(I1_int)
    // 03910 REM********		NO T2 FOUND
    // 03920 F1 = 0
    F1_int = 0;
    // 03930 GOTO 03960
    goto Lbl_03960;

  Lbl_03940:
    // 03940 F1 = 1
    F1_int = 1;
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
    S1_int = 0;
    // 04070 FOR K = 1 TO 8
    for(K_int=1;K_int<=8;K_int++){
        // 04080     I5 = I4(K)
        I5_int = I4_int_arr[K_int];
        // 04090     J5 = J4(K)
        J5_int = J4_int_arr[K_int];
        // 04100     I6 = I + I5
        I6_int = I_int+I5_int;
        // 04110     J6 = J + J5
        J6_int = J_int+J5_int;
        // 04120     S3 = 0
        S3_int = 0;
        // 04130     IF A(I6,J6) <> T2 THEN 4310
        if(A_int_arr[I6_int][J6_int]!=T2_int)goto Lbl_04310;
        // 04140     REM			LOOP THROUGH THE RUN

  Lbl_04150:
        // 04150     S3 = S3 + 1
        S3_int = S3_int+1;
        // 04160     I6 = I6 + I5
        I6_int = I6_int+I5_int;
        // 04170     J6 = J6 + J5
        J6_int = J6_int+J5_int;
        // 04180     IF A (I6,J6) = T1 THEN 4210
        if(A_int_arr[I6_int][J6_int]==T1_int)goto Lbl_04210;
        // 04190     IF A(I6,J6) = 0 THEN 4310
        if(A_int_arr[I6_int][J6_int]==0)goto Lbl_04310;
        // 04200     GO TO 4150
        goto Lbl_04150;

  Lbl_04210:
        // 04210     S1 = S1 + S3
        S1_int = S1_int+S3_int;
        // 04220     IF U <> 1 THEN 4310
        if(U_int!=1)goto Lbl_04310;
        // 04230     REM			UPDATE BOARD
        // 04240     I6 = I
        I6_int = I_int;
        // 04250     J6 = J
        J6_int = J_int;
        // 04260     FOR K1 = 0 TO S3
        for(K1_int=0;K1_int<=S3_int;K1_int++){
            // 04270 	A(I6,J6) = T1
            A_int_arr[I6_int][J6_int] = T1_int;
            // 04280 	I6 = I6 + I5
            I6_int = I6_int+I5_int;
            // 04290 	J6 = J6 + J5
            J6_int = J6_int+J5_int;
            // 04300     NEXT K1
            int dummy_4300=0; // Ignore this line.
        }; // End-For(K1_int)

  Lbl_04310:
        // 04310 NEXT K
        int dummy_4310=0; // Ignore this line.
    }; // End-For(K_int)
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
