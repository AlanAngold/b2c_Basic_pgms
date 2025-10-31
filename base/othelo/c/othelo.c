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
    0x55a890190b80 ---------A   01000  REM********		OTHELLO          BYTE VOL. 2, NUMBER 10 (OCT. 1977)
    0x55a890191e70 ---------A   01010  REM********		PLAYS THE GAME OTHELLO WITH TWO STRATEGIES
    0x55a890191ff0 ---------A   01020  REM********		1. TAKE THE MAX. NUMBER OF PIECES
    0x55a8901920b0 ---------A   01030  REM********		2. ADD A BONUS FOR OUTSIDE POSITION
    0x55a8901802b0 ---------A   01040  REM********		BOARD IS THE ARRAY A, BOUNDED BY 0'S (BLANKS)
    0x55a89018f9e0 ---------A   01050  REM********		A = 0 FOR EMPTY SQUARE
    0x55a89018f7f0 ---------A   01060  REM********		A = B FOR BLACK SQUARE
    0x55a890191aa0 ---------A   01070  REM********		A = W FOR WHITE SQUARE
    0x55a890190090 ---------A   01080  REM********		I AND J ARE ALWAYS USED FOR ROW/COLUMN INDICES
    0x55a89018fe90 ---------A   01090  REM********		I1 AND J4 STORE INCREMENTS TO THE 8 NEIGHBOURS
    0x55a8901916a0 ---------A   01100  REM********		C$ AND D$ STORE CHARACTERS A-H,X,...,O FOR OUTPUT
    0x55a890197a80 ---------A   01110  DIM A(9,9),I4(8),J4(8),C$(8),D$(2)
    0x55a890197ad0 ---------A   01120  REM********		
    0x55a89018f6d0 ---------A   01130  PRINT "GREETINGS FROM OTHELLO!"
    0x55a89018f670 ---------A   01140  PRINT "DO YOU WANT INSTRUCTIONS (Y OR N)";
    0x55a890197e60 ---------A T 01150  INPUT X$
    0x55a8901980c0 ---------A   01160  IF X$ = "N" THEN 1380
    0x55a890198340 ---------A   01170  IF X$ <> "Y" THEN 1150
    0x55a8901983e0 ---------A   01180  PRINT
    0x55a890198590 ---------A   01190  PRINT "OTHELLO IS PLAYED ON AN 8X8 CHECKER BOARD"
    0x55a890198740 ---------A   01200  PRINT "ROWS ARE NUMBERED FROM 1 TO 8 AND COLUMNS FROM A TO H"
    0x55a8901988f0 ---------A   01210  PRINT" THE INITIAL CONFIGURATION IS ALL BLANK EXCEPT FOR"
    0x55a890198a50 ---------A   01220  PRINT "THE CENTER FOUR SQUARES, WHICH FORM THE PATTERN:"
    0x55a890198b90 ---------A   01230  PRINT "               O X"
    0x55a890198cf0 ---------A   01240  PRINT "               X O"
    0x55a890198da0 ---------A   01250  PRINT
    0x55a890198f60 ---------A   01260  PRINT "TRY TO PLACE YOUR PIECE SO THAT IT WILL 'OUTFLANK' MINE"
    0x55a890199110 ---------A   01270  PRINT "THEREBY CREATING A HORIZONTAL, VERTICAL, OR DIAGONAL "
    0x55a8901992c0 ---------A   01280  PRINT "RUN OF MY PIECES BOUNDED AT EACH END BY AT LEAST ONE "
    0x55a890199450 ---------A   01290  PRINT "OF YOURS.  THIS WILL 'FLIP' MY PIECES, TURNING THEM INTO"
    0x55a8901995e0 ---------A   01300  PRINT "YOURS."
    0x55a890199790 ---------A   01310  PRINT"     NOTE: YOU MUST CAPTURE AT LEAST ONE OF MY PIECES"
    0x55a890199940 ---------A   01320  PRINT "IN THIS WAY IF IT IS AT ALL POSSIBLE.  IF IT IS NOT"
    0x55a890199cf0 ---------A   01330  PRINT "POSSIBLE, YOU FORFEIT YOUR TURN BY ENTERING"
    0x55a890199e70 ---------A   01340  PRINT "     0,0   FOR YOUR ROW,COLUMN MOVE"
    0x55a890199fd0 ---------A   01350  PRINT " GOOD LUCK!"
    0x55a89019a050 ---------A   01360  PRINT
    0x55a89019a0d0 ---------A   01370  REM********		
    0x55a89019a2b0 ---------A T 01380  PRINT "SHOULD I WAIT BEFORE MAKING MY MOVES (Y OR N)";
    0x55a89019a590 ---------A   01390  F2 = 0
    0x55a89019a860 ---------A   01400  F9 = 1
    0x55a89019a9c0 ---------A T 01410  INPUT X$
    0x55a89019ac50 ---------A   01420  IF X$ = "N" THEN 1460
    0x55a89019aed0 ---------A   01430  IF X$ <> "Y" THEN  1410
    0x55a89019b120 ---------A   01440  F2 = 1
    0x55a89019b2b0 ---------A   01450          PRINT "OK.  TYPING ANY CHARACTER WILL LET ME GO"
    0x55a89019b450 ---------A T 01460  PRINT "SHOULD I PLAY MY BEST STRATEGY (Y OR N)";
    0x55a89019b730 ---------A   01470  S2 = 0
    0x55a89019b890 ---------A T 01480  INPUT X$
    0x55a89019bb20 ---------A   01490  IF X$ = "N" THEN 1520
    0x55a89019bda0 ---------A   01500  IF X$ <> "Y" THEN 1480
    0x55a89019bfc0 ---------A   01510  S2 = 2
    0x55a89019c290 ---------A T 01520  B = -1
    0x55a89019c560 ---------A   01530  W = +1
    0x55a89019c970 ---------A   01540  D$(B +1) ="X"
    0x55a89019cd60 ---------A   01550  D$(0 +1) = "."
    0x55a89019d170 ---------A   01560  D$(W + 1) ="O"
    0x55a89019d500 ---------A   01570  FOR K = 1 TO 8
    0x55a89019d740 ---------A   01580      READ I4(K)
    0x55a89019d870 ---------A   01590  NEXT K
    0x55a89019e010 ---------A   01600  DATA 0,-1,-1,-1,0,1,1,1
    0x55a89019e2e0 ---------A   01610  FOR K=1 TO 8
    0x55a89019e520 ---------A   01620      READ J4(K)
    0x55a89019e650 ---------A   01630  NEXT K
    0x55a89019edf0 ---------A   01640  DATA 1,1,0,-1,-1,-1,0,1
    0x55a89019f4d0 ---------A   01650  FOR K = 1 TO 8
    0x55a89019f710 ---------A   01660      READ C$(K)
    0x55a89019f840 ---------A   01670  NEXT K
    0x55a89019fff0 ---------A   01680  DATA A,B,C,D,E,F,G,H
    0x55a8901a0070 ---------A   01690  REM********		SET UP A NEW GAME
    0x55a8901a0420 ---------A T 01700  FOR I = 0 TO 9
    0x55a8901a07c0 ---------A   01710      FOR J = 0 TO 9
    0x55a8901a0ba0 ---------A   01720  	A(I,J)=0
    0x55a8901a0cd0 ---------A   01730      NEXT J
    0x55a8901a0e20 ---------A   01740  NEXT I
    0x55a8901a11f0 ---------A   01750  A(4,4) = W
    0x55a8901a15a0 ---------A   01760  A(5,5) = W
    0x55a8901a1950 ---------A   01770  A(4,5) = B
    0x55a8901a1d00 ---------A   01780  A(5,4) = B
    0x55a8901a1fd0 ---------A   01790  C1 = 2
    0x55a8901a22a0 ---------A   01800  H1 = 2
    0x55a8901a2570 ---------A   01810  N1 = 4
    0x55a8901a2850 ---------A   01820  Z =0
    0x55a8901a28d0 ---------A   01830  REM********		HUMAN'S CHOICES
    0x55a8901a2a90 ---------A   01840  PRINT "DO YOU WANT TO HAVE X OR O";
    0x55a8901a2d90 ---------A   01850  C = W
    0x55a8901a3080 ---------A   01860  H = B
    0x55a8901a31e0 ---------A T 01870  INPUT X$
    0x55a8901a3470 ---------A   01880  IF X$ = "X" THEN 1920
    0x55a8901a36f0 ---------A   01890  IF X$ <> "O" THEN 1870
    0x55a8901a3930 ---------A   01900  C = B
    0x55a8901a3b80 ---------A   01910  H = W
    0x55a8901a3d00 ---------A T 01920  PRINT "DO YOU WANT TO GO FIRST (Y OR N)";
    0x55a8901a3e60 ---------A T 01930  INPUT X$
    0x55a8901a4090 ---------A   01940  PRINT CHR$(26)
    0x55a8901a4320 ---------A   01950  IF X$ = "N" THEN 2030
    0x55a8901a45b0 ---------A   01960  IF X$ <> "Y" THEN 1930
    0x55a8901a4640 ---------A   01970  REM********		PRINT INITIAL BOARD
    0x55a8901a46d0 ---------A   01980  GOSUB 4320
    0x55a8901a4750 ---------A   01990  GO TO 2760
    0x55a8901a47d0 ---------A   02000  REM********		COMPUTER'S MOVE
    0x55a8901a4a50 ---------A T 02010  IF F2 = 0 THEN 2030
    0x55a8901a4bb0 ---------A   02020  INPUT X$
    0x55a8901a4e90 ---------A T 02030  B1 = -1
    0x55a8901a5300 ---------A   02040  I3 = J3 = 0
    0x55a8901a55f0 ---------A   02050  T1 = C
    0x55a8901a58f0 ---------A   02060  T2 = H
    0x55a8901a5970 ---------A   02070  REM********		SCAN FOR BLANK SQUARE
    0x55a8901a5c60 ---------A   02080  FOR I = 1 TO 8
    0x55a8901a5f50 ---------A   02090      FOR J = 1 TO 8
    0x55a8901a6380 ---------A   02100  	IF A(I,J) <> 0 THEN 2390
    0x55a8901a6410 ---------A   02110  	REM********		FOUND A BLANK SQUARE
    0x55a8901a64f0 ---------A   02120  	REM********		DOES IT HAVE AN OPPONENT AS A NEIGHBOUR
    0x55a8901a6590 ---------A   02130  	GOSUB 3840
    0x55a8901a68c0 ---------A   02140  	IF F1 = 0 THEN 2390
    0x55a8901a6960 ---------A   02150  	REM********		FOUND OPPONENT AS NEIGHBOUR
    0x55a8901a6a30 ---------A   02160  	REM********		HOW MANY OF HIS PIECES CAN WE FLIP?
    0x55a8901a6ae0 ---------A   02170  	REM********		DON'T DO IT NOW
    0x55a8901a6dd0 ---------A   02180  	U = -1
    0x55a8901a6e60 ---------A   02190  	GOSUB 4040
    0x55a8901a6ef0 ---------A   02200  	REM********		EXTRA POINTS FOR BOUNDARY POSITION
    0x55a8901a7240 ---------A   02210  	IF S1 = 0 THEN 2390
    0x55a8901a7840 ---------A   02220  	IF (I-1) * (I-8) <> 0 THEN 2240
    0x55a8901a7bb0 ---------A   02230  	S1 = S1 + S2
    0x55a8901a81a0 ---------A T 02240  	IF (J-1) * (J-8) <> 0 THEN 2270
    0x55a8901a8530 ---------A   02250  	S1 = S1 +S2
    0x55a8901a85c0 ---------A   02260  	REM********		IS THIS BETTER THAN THE BEST FOUND SO FAR
    0x55a8901a8870 ---------A T 02270  	IF S1 < B1 THEN 2390
    0x55a8901a8b10 ---------A   02280  	IF S1 > B1 THEN 2350
    0x55a8901a93b0 ---------A   02290  	REM********		A TIE; RANDOM DECISION
    0x55a8901a9490 ---------A   02300  	REM********		THE NEXT TWO EXECUTABLE STATEMENTS ARE FOR
    0x55a8901a9550 ---------A   02310  	REM********		BASIC WITH RANDOM NUMBERS
    0x55a8901a9930 ---------A   02320  	R = RND(1)
    0x55a8901a9b80 ---------A   02330  	IF R > .5 THEN 2390
    0x55a8901a9c00 ---------A   02340  	REM********		YES
    0x55a8901a9e50 ---------A T 02350  	B1 = S1
    0x55a8901aa080 ---------A   02360  	I3 = I
    0x55a8901aa2c0 ---------A   02370  	J3 = J
    0x55a8901aa340 ---------A   02380  	REM********		END OF SCAN LOOP
    0x55a8901aa490 ---------A T 02390      NEXT J
    0x55a8901aa5e0 ---------A   02400  NEXT I
    0x55a8901aa690 ---------A   02410  REM********		COULD WE DO ANYTHING?
    0x55a8901aa910 ---------A   02420  IF B1 > 0 THEN 2510
    0x55a8901aa990 ---------A   02430  REM********		NO
    0x55a8901aac80 ---------A   02440  LET L = 18
    0x55a8901aad10 ---------A   02450  GOSUB 4490
    0x55a8901aae70 ---------A   02460  PRINT "DAMN! HAVE TO FORFEIT MY MOVE!"
    0x55a8901ab0d0 ---------A   02470  IF Z = 1 THEN 3370
    0x55a8901ab2f0 ---------A   02480  Z = 1
    0x55a8901ab370 ---------A   02490  GO TO 2760
    0x55a8901ab3f0 ---------A   02500  REM********		MAKE THE MOVE
    0x55a8901ab620 ---------A T 02510  Z = 0
    0x55a8901ab830 ---------A   02520  LET L=15
    0x55a8901ab8b0 ---------A   02530  GOSUB 4490
    0x55a8901aba20 ---------A   02540  PRINT "I WILL MOVE TO ";
    0x55a8901abba0 ---------A   02550  PRINT I3;
    0x55a8901abd20 ---------A   02560  PRINT " , ";
    0x55a8901abf60 ---------A   02570  PRINT C$(J3)
    0x55a8901ac1a0 ---------A   02580  I= I3
    0x55a8901ac3d0 ---------A   02590  J= J3
    0x55a8901ac5e0 ---------A   02600  U= 1
    0x55a8901ac650 ---------A   02610  GOSUB 4040
    0x55a8901acaa0 ---------A   02620  C1 = C1 + S1 + 1
    0x55a8901acdf0 ---------A   02630  H1 = H1 - S1
    0x55a8901ad120 ---------A   02640  N1 = N1 + 1
    0x55a8901ad330 ---------A   02650  LET L=16
    0x55a8901ad3b0 ---------A   02660  GOSUB 4490
    0x55a8901ad520 ---------A   02670  PRINT " THAT GIVES ME : ";
    0x55a8901ad6b0 ---------A   02680  PRINT S1;
    0x55a8901ad820 ---------A   02690  PRINT " OF YOUR PIECES"
    0x55a8901ad8b0 ---------A   02700  REM********		PRINT OUT BOARD
    0x55a8901ad950 ---------A   02710  GOSUB 4320
    0x55a8901ad9d0 ---------A   02720  REM********		TEST FOR END OF GAME
    0x55a8901adc60 ---------A   02730  IF H1 = 0 THEN 3370
    0x55a8901aded0 ---------A   02740  IF N1 = 64 THEN 3370
    0x55a8901adf60 ---------A   02750  REM********		HUMANS MOVE
    0x55a8901ae1b0 ---------A T 02760  T1 = H
    0x55a8901ae3e0 ---------A   02770  T2 = C
    0x55a8901ae5f0 ---------A   02780  LET L = 12
    0x55a8901ae670 ---------A   02790  GOSUB 4490
    0x55a8901ae7e0 ---------A T 02800  PRINT " YOUR MOVE";
    0x55a8901aea20 ---------A T 02810  INPUT I, X$
    0x55a8901aec80 ---------A   02820  IF I < 0 THEN 2810
    0x55a8901aeef0 ---------A   02830  IF I > 8 THEN 2810
    0x55a8901af150 ---------A   02840  IF I <> 0 THEN 2930
    0x55a8901af370 ---------A   02850  LET L = 18
    0x55a8901af400 ---------A   02860  GOSUB 4490
    0x55a8901af560 ---------A   02870  PRINT "ARE YOU FORFEITING YOUR TURN Y OR N"
    0x55a8901af6d0 ---------A   02880  INPUT X$
    0x55a8901af950 ---------A   02890  IF X$ <> "Y" THEN 2800
    0x55a8901afbb0 ---------A   02900  IF Z = 1 THEN 3370
    0x55a8901afdd0 ---------A   02910  Z = 1
    0x55a8901afe40 ---------A   02920  GO TO 2010
    0x55a8901b0120 ---------A T 02930  FOR J = 1 TO 8
    0x55a8901b0480 ---------A   02940      IF C$(J) =X$ THEN 2980
    0x55a8901b05c0 ---------A   02950  NEXT J
    0x55a8901b0660 ---------A   02960  GO TO 2810
    0x55a8901b06e0 ---------A   02970  REM********		CHECK FOR BLANK
    0x55a8901b0b20 ---------A T 02980  IF A(I,J) = 0 THEN 3040
    0x55a8901b0d40 ---------A   02990  LET L = 18
    0x55a8901b0dd0 ---------A   03000  GOSUB 4490
    0x55a8901b0f40 ---------A   03010  PRINT "SORRY, THAT SQUARE IS OCCUPIED, TRY AGAIN"
    0x55a8901b0fe0 ---------A   03020  GO TO 2810
    0x55a8901b1060 ---------A   03030  REM********		CHECK FOR LEGAL NEIGHBOUR
    0x55a8901b1100 ---------A T 03040  GOSUB 3840
    0x55a8901b1350 ---------A   03050  IF F1 = 1 THEN 3110
    0x55a8901b1570 ---------A   03060  LET L = 18
    0x55a8901b1610 ---------A   03070  GOSUB 4490
    0x55a8901b17b0 ---------A   03080  PRINT "SORRY, YOU ARE NOT NEXT TO ONE OF MY PIECES. TRY AGAIN.";
    0x55a8901b1840 ---------A   03090  GO TO 2810
    0x55a8901b18c0 ---------A   03100  REM********		CHECK IF LEGAL RUN
    0x55a8901b1af0 ---------A T 03110  U = -1
    0x55a8901b1b70 ---------A   03120  GOSUB 4040
    0x55a8901b1dc0 ---------A   03130  IF S1 > 0 THEN 3190
    0x55a8901b1fe0 ---------A   03140  LET L = 18
    0x55a8901b2070 ---------A   03150  GOSUB 4490
    0x55a8901b21e0 ---------A   03160  PRINT "SORRY, THAT DOESN'T FLANK A ROW, TRY AGAIN"
    0x55a8901b2280 ---------A   03170  GO TO 2810
    0x55a8901b2310 ---------A   03180  REM********		EVERYTHING LEGAL; MAKE HUMANS MOVE
    0x55a8901b2540 ---------A T 03190  Z = 0
    0x55a8901b2750 ---------A   03200  LET L = 13
    0x55a8901b27d0 ---------A   03210  GOSUB 4490
    0x55a8901b2940 ---------A   03220  PRINT "THAT GIVES YOU";
    0x55a8901b2ad0 ---------A   03230  PRINT S1;
    0x55a8901b2c30 ---------A   03240  PRINT " OF MY PIECES"
    0x55a8901b2e50 ---------A   03250  U = 1
    0x55a8901b2ec0 ---------A   03260  GOSUB 4040
    0x55a8901b3310 ---------A   03270  H1 = H1 + S1 + 1
    0x55a8901b3660 ---------A   03280  C1 = C1 -S1
    0x55a8901b39a0 ---------A   03290  N1 = N1 + 1
    0x55a8901b3a20 ---------A   03300  REM********		PRINT OUT BOARD
    0x55a8901b3ac0 ---------A   03310  GOSUB 4320
    0x55a8901b3b40 ---------A   03320  REM********		TEST FOR END OF GAME
    0x55a8901b3dd0 ---------A   03330  IF C1 = 0 THEN 3370
    0x55a8901b4030 ---------A   03340  IF N1 = 64 THEN 3370
    0x55a8901b40c0 ---------A   03350  GO TO 2010
    0x55a8901b4140 ---------A   03360  REM********		END OF GAME ; WRAPUP
    0x55a8901b4370 ---------A T 03370  LET L = 18
    0x55a8901b4400 ---------A   03380  GOSUB 4490
    0x55a8901b4560 ---------A   03390  PRINT "FOR RESULTS ON GAME TYPE RETURN!!"
    0x55a8901b46d0 ---------A   03400  INPUT X$
    0x55a8901b4ab0 ---------A   03410  PRINT CHR$(30),CHR$(26)
    0x55a8901b4c30 ---------A   03420  PRINT "YOU HAVE ";
    0x55a8901b4dc0 ---------A   03430  PRINT H1;
    0x55a8901b4f40 ---------A   03440  PRINT " PIECES, AND I HAVE ";
    0x55a8901b50d0 ---------A   03450  PRINT C1;
    0x55a8901b5240 ---------A   03460  PRINT " PIECES--- "
    0x55a8901b54d0 ---------A   03470  IF H1 = C1 THEN 3510
    0x55a8901b5760 ---------A   03480  IF H1 > C1 THEN 3530
    0x55a8901b58d0 ---------A   03490  PRINT "SORRY, I WON THAT ONE."
    0x55a8901b5960 ---------A   03500  GO TO 3540
    0x55a8901b5ab0 ---------A T 03510  PRINT " A TIE!!!!!"
    0x55a8901b5b30 ---------A   03520  GO TO 3720
    0x55a8901b5c80 ---------A T 03530  PRINT "YOU WON!!!"
    0x55a8901b5ff0 ---------A T 03540  C1 = C1 - H1
    0x55a8901b6240 ---------A   03550  IF C1 > 0 THEN 3570
    0x55a8901b6480 ---------A   03560  C1 = -C1
    0x55a8901a8fc0 ---------A T 03570  C1 = (64 * C1)/ N1
    0x55a8901a9140 ---------A   03580  PRINT "THAT WAS A ";
    0x55a8901b7510 ---------A   03590  IF C1 < 11 THEN 3710
    0x55a8901b7780 ---------A   03600  IF C1 < 25 THEN 3690
    0x55a8901b79f0 ---------A   03610  IF C1 < 39 THEN 3670
    0x55a8901b7c60 ---------A   03620  IF C1 < 53 THEN 3650
    0x55a8901b7dc0 ---------A   03630  PRINT " A PERFECT GAME!"
    0x55a8901b7e40 ---------A   03640  GO TO 3720
    0x55a8901b7f90 ---------A T 03650  PRINT "WALKAWAY!"
    0x55a8901b8010 ---------A   03660  GO TO 3720
    0x55a8901b8160 ---------A T 03670  PRINT "FIGHT!"
    0x55a8901b81e0 ---------A   03680  GO TO 3720
    0x55a8901b8330 ---------A T 03690  PRINT "HOT GAME!"
    0x55a8901b83b0 ---------A   03700  GO TO 3720
    0x55a8901b8500 ---------A T 03710  PRINT "SQUEAKER!"
    0x55a8901b8590 ---------A T 03720  PRINT
    0x55a8901b8720 ---------A   03730  PRINT"DO YOU WANT TO PLAY AGAIN";
    0x55a8901b8890 ---------A T 03740  INPUT X$
    0x55a8901b8b20 ---------A   03750  IF X$ = "Y" THEN 1700
    0x55a8901b8db0 ---------A   03760  IF X$ <> "N" THEN 3740
    0x55a8901b8f10 ---------A   03770  PRINT "THANKS FOR PLAYING."
    0x55a8901b8f70 ---------A   03780  STOP
    0x55a8901b8ff0 ---------B   03790  REM********		
    0x55a8901b90c0 ---------B   03800  REM********		SUBROUTINE: TEST FOR PROPER NEIGHBOUR
    0x55a8901b9160 ---------B   03810  REM********		ASSUMES:
    0x55a8901b9220 ---------B   03820  REM********		I,J LOCATES A BLANK SQUARE
    0x55a8901b9300 ---------B   03830  REM********		YOU HOPE TO SEE AN ADJACENT  T2 (= -T1)
    0x55a8901b96c0 ---------B G 03840  FOR I1 =  -1 TO 1
    0x55a8901b9a70 ---------B   03850      FOR J1 = -1 TO 1
    0x55a8901ba0f0 ---------B   03860  	IF  A(I+I1,J+J1) = T2 THEN 3930
    0x55a8901ba230 ---------B   03870      NEXT J1
    0x55a8901ba380 ---------B   03880  NEXT I1
    0x55a8901ba430 ---------B   03890  REM********		NO T2 FOUND
    0x55a8901ba660 ---------B   03900  F1 = 0
    0x55a8901ba6b0 ---------B   03910  RETURN
    0x55a8901ba740 ---------A   03920  REM********		SUCCESS
    0x55a8901ba970 ---------B T 03930  F1 = 1
    0x55a8901ba9c0 ---------B   03940  RETURN
    0x55a8901baa80 ---------C   03950  REM********		SUBROUTINE SCORE AND UPDATE
    0x55a8901bab20 ---------C   03960  REM********		ASSUMES;
    0x55a8901bac00 ---------C   03970  REM********		(I,J) IS A TENTATIVE PLACE FOR A PIECE T1.
    0x55a8901bace0 ---------C   03980  REM********		WANT RUNS OF T2 = -T1, TERMINATED BY A T1.
    0x55a8901badc0 ---------C   03990  REM********		IF U IS TRUE (1), MARK THOSE RUNS AS T1'S.
    0x55a8901baea0 ---------C   04000  REM********		RETURN SUM OF ALL RUNS (T2'S ONLY) IN S1.
    0x55a8901baf90 ---------C   04010  REM********		MAIN PROGRAM CONTAINS THE FOLLOWING ARRAYS:
    0x55a8901bb060 ---------C   04020  REM********		I4:  0 -1 -1 -1  0  1  1  1
    0x55a8901bb130 ---------C   04030  REM********		J4:  1  1  0 -1 -1 -1  0  1
    0x55a8901bb360 ---------C G 04040  S1 = 0
    0x55a8901bb630 ---------C   04050  FOR K = 1 TO 8
    0x55a8901bba10 ---------C   04060      I5 = I4(K)
    0x55a8901bbde0 ---------C   04070      J5 = J4(K)
    0x55a8901bc1f0 ---------C   04080      I6 = I + I5
    0x55a8901bc600 ---------C   04090      J6 = J + J5
    0x55a8901bc8e0 ---------C   04100      S3 = 0
    0x55a8901bcd20 ---------C   04110      IF A(I6,J6) <> T2 THEN 4290
    0x55a8901bcdb0 ---------C   04120      REM			LOOP THROUGH THE RUN
    0x55a8901bd100 ---------C T 04130      S3 = S3 + 1
    0x55a8901bd450 ---------C   04140      I6 = I6 + I5
    0x55a8901bd7b0 ---------C   04150      J6 = J6 + J5
    0x55a8901bdbf0 ---------C   04160      IF A (I6,J6) = T1 THEN 4190
    0x55a8901be010 ---------C   04170      IF A(I6,J6) = 0 THEN 4290
    0x55a8901be090 ---------C   04180      GO TO 4130
    0x55a8901be3f0 ---------C T 04190      S1 = S1 + S3
    0x55a8901be650 ---------C   04200      IF U <> 1 THEN 4290
    0x55a8901be6d0 ---------C   04210      REM			UPDATE BOARD
    0x55a8901be920 ---------C   04220      I6 = I
    0x55a8901beb60 ---------C   04230      J6 = J
    0x55a8901bef10 ---------C   04240      FOR K1 = 0 TO S3
    0x55a8901bf310 ---------C   04250  	A(I6,J6) = T1
    0x55a8901bf660 ---------C   04260  	I6 = I6 + I5
    0x55a8901bf9b0 ---------C   04270  	J6 = J6 + J5
    0x55a8901bfae0 ---------C   04280      NEXT K1
    0x55a8901bfc30 ---------C T 04290  NEXT K
    0x55a8901bfca0 ---------C   04300  RETURN
    0x55a8901bfd50 ---------D   04310  REM********		SUBROUTINE TO PRINT BOARD
    0x55a8901bff80 ---------D G 04320  PRINT CHR$(30)
    0x55a8901c01b0 ---------D   04330  LET L = 18
    0x55a8901c03e0 ---------D   04340  IF F9 = 1 GO TO 4370
    0x55a8901c0480 ---------D   04350  GOSUB 4570
    0x55a8901c0690 ---------D   04360  LET F9 = 1
    0x55a8901c08b0 ---------D T 04370  PRINT CHR$(30)
    0x55a8901c0a10 ---------D   04380  PRINT "    A B C D E F G H"
    0x55a8901c0cf0 ---------D   04390  FOR I = 1 TO 8
    0x55a8901c0e70 ---------D   04400      PRINT I;
    0x55a8901c1150 ---------D   04410      FOR J = 1 TO 8
    0x55a8901c12e0 ---------D   04420  	PRINT " ";
    0x55a8901c1800 ---------D   04430  	PRINT D$(A(I,J)+1);
    0x55a8901c1940 ---------D   04440      NEXT J
    0x55a8901c19d0 ---------D   04450      PRINT
    0x55a8901c1b10 ---------D   04460  NEXT I
    0x55a8901c1ba0 ---------D   04470  PRINT
    0x55a8901c1c00 ---------D   04480  RETURN
    0x55a8901c1ca0 ---------E G 04490  REM********		***	SPACE		***
    0x55a8901c1ed0 ---------E   04500  PRINT CHR$(30)
    0x55a8901c2290 ---------E   04510  FOR I9 = 1 TO L
    0x55a8901c2310 ---------E   04520      PRINT
    0x55a8901c2450 ---------E   04530  NEXT I9
    0x55a8901c26b0 ---------E   04540  IF L <> 18 GO TO 4560
    0x55a8901c28f0 ---------E   04550  F9 = 0
    0x55a8901c2940 ---------E T 04560  RETURN
    0x55a8901c29e0 ---------F G 04570  REM********		***	BLANK OUT	***
    0x55a8901c2a70 ---------F   04580  GOSUB 4490
    0x55a8901c2d00 ---------F   04590  PRINT TAB(60);" "
    0x55a8901c2fa0 ---------F   04600  PRINT TAB(60);" "
    0x55a8901c3000 ---------F   04610  RETURN
    0x55a8901c3060 ---------A   04620  END
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
   A) 0x55a890190b80 (01000)   0x55a890190b80 (01000)   0x55a8901c3060 (04620)   0x55a8901c3060 (04620)   
   B) 0x55a8901b8ff0 (03790)   0x55a8901b96c0 (03840)   0x55a8901ba6b0 (03910)   0x55a8901ba9c0 (03940)   
   C) 0x55a8901baa80 (03950)   0x55a8901bb360 (04040)   0x55a8901bfca0 (04300)   0x55a8901bfca0 (04300)   
   D) 0x55a8901bfd50 (04310)   0x55a8901bff80 (04320)   0x55a8901c1c00 (04480)   0x55a8901c1c00 (04480)   
   E) 0x55a8901c1ca0 (04490)   0x55a8901c1ca0 (04490)   0x55a8901c2940 (04560)   0x55a8901c2940 (04560)   
   F) 0x55a8901c29e0 (04570)   0x55a8901c29e0 (04570)   0x55a8901c3000 (04610)   0x55a8901c3000 (04610)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/othelo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55a890190b80 ---------A   01000  REM********		OTHELLO          BYTE VOL. 2, NUMBER 10 (OCT. 1977)
    0x55a890191e70 ---------A   01010  REM********		PLAYS THE GAME OTHELLO WITH TWO STRATEGIES
    0x55a890191ff0 ---------A   01020  REM********		1. TAKE THE MAX. NUMBER OF PIECES
    0x55a8901920b0 ---------A   01030  REM********		2. ADD A BONUS FOR OUTSIDE POSITION
    0x55a8901802b0 ---------A   01040  REM********		BOARD IS THE ARRAY A, BOUNDED BY 0'S (BLANKS)
    0x55a89018f9e0 ---------A   01050  REM********		A = 0 FOR EMPTY SQUARE
    0x55a89018f7f0 ---------A   01060  REM********		A = B FOR BLACK SQUARE
    0x55a890191aa0 ---------A   01070  REM********		A = W FOR WHITE SQUARE
    0x55a890190090 ---------A   01080  REM********		I AND J ARE ALWAYS USED FOR ROW/COLUMN INDICES
    0x55a89018fe90 ---------A   01090  REM********		I1 AND J4 STORE INCREMENTS TO THE 8 NEIGHBOURS
    0x55a8901916a0 ---------A   01100  REM********		C$ AND D$ STORE CHARACTERS A-H,X,...,O FOR OUTPUT
    0x55a890197a80 ---------A   01110  DIM A(9,9),I4(8),J4(8),C$(8),D$(2)
    0x55a890197ad0 ---------A   01120  REM********		
    0x55a89018f6d0 ---------A   01130  PRINT "GREETINGS FROM OTHELLO!"
    0x55a89018f670 ---------A   01140  PRINT "DO YOU WANT INSTRUCTIONS (Y OR N)";
    0x55a890197e60 ---------A T 01150  INPUT X$
    0x55a8901980c0 ---------A   01160  IF X$ = "N" THEN 1380
    0x55a890198340 ---------A   01170  IF X$ <> "Y" THEN 1150
    0x55a8901983e0 ---------A   01180  PRINT
    0x55a890198590 ---------A   01190  PRINT "OTHELLO IS PLAYED ON AN 8X8 CHECKER BOARD"
    0x55a890198740 ---------A   01200  PRINT "ROWS ARE NUMBERED FROM 1 TO 8 AND COLUMNS FROM A TO H"
    0x55a8901988f0 ---------A   01210  PRINT" THE INITIAL CONFIGURATION IS ALL BLANK EXCEPT FOR"
    0x55a890198a50 ---------A   01220  PRINT "THE CENTER FOUR SQUARES, WHICH FORM THE PATTERN:"
    0x55a890198b90 ---------A   01230  PRINT "               O X"
    0x55a890198cf0 ---------A   01240  PRINT "               X O"
    0x55a890198da0 ---------A   01250  PRINT
    0x55a890198f60 ---------A   01260  PRINT "TRY TO PLACE YOUR PIECE SO THAT IT WILL 'OUTFLANK' MINE"
    0x55a890199110 ---------A   01270  PRINT "THEREBY CREATING A HORIZONTAL, VERTICAL, OR DIAGONAL "
    0x55a8901992c0 ---------A   01280  PRINT "RUN OF MY PIECES BOUNDED AT EACH END BY AT LEAST ONE "
    0x55a890199450 ---------A   01290  PRINT "OF YOURS.  THIS WILL 'FLIP' MY PIECES, TURNING THEM INTO"
    0x55a8901995e0 ---------A   01300  PRINT "YOURS."
    0x55a890199790 ---------A   01310  PRINT"     NOTE: YOU MUST CAPTURE AT LEAST ONE OF MY PIECES"
    0x55a890199940 ---------A   01320  PRINT "IN THIS WAY IF IT IS AT ALL POSSIBLE.  IF IT IS NOT"
    0x55a890199cf0 ---------A   01330  PRINT "POSSIBLE, YOU FORFEIT YOUR TURN BY ENTERING"
    0x55a890199e70 ---------A   01340  PRINT "     0,0   FOR YOUR ROW,COLUMN MOVE"
    0x55a890199fd0 ---------A   01350  PRINT " GOOD LUCK!"
    0x55a89019a050 ---------A   01360  PRINT
    0x55a89019a0d0 ---------A   01370  REM********		
    0x55a89019a2b0 ---------A T 01380  PRINT "SHOULD I WAIT BEFORE MAKING MY MOVES (Y OR N)";
    0x55a89019a590 ---------A   01390  F2 = 0
    0x55a89019a860 ---------A   01400  F9 = 1
    0x55a89019a9c0 ---------A T 01410  INPUT X$
    0x55a89019ac50 ---------A   01420  IF X$ = "N" THEN 1460
    0x55a89019aed0 ---------A   01430  IF X$ <> "Y" THEN  1410
    0x55a89019b120 ---------A   01440  F2 = 1
    0x55a89019b2b0 ---------A   01450  PRINT "OK.  TYPING ANY CHARACTER WILL LET ME GO"
    0x55a89019b450 ---------A T 01460  PRINT "SHOULD I PLAY MY BEST STRATEGY (Y OR N)";
    0x55a89019b730 ---------A   01470  S2 = 0
    0x55a89019b890 ---------A T 01480  INPUT X$
    0x55a89019bb20 ---------A   01490  IF X$ = "N" THEN 1520
    0x55a89019bda0 ---------A   01500  IF X$ <> "Y" THEN 1480
    0x55a89019bfc0 ---------A   01510  S2 = 2
    0x55a89019c290 ---------A T 01520  B = -1
    0x55a89019c560 ---------A   01530  W = +1
    0x55a89019c970 ---------A   01540  D$(B +1) ="X"
    0x55a89019cd60 ---------A   01550  D$(0 +1) = "."
    0x55a89019d170 ---------A   01560  D$(W + 1) ="O"
    0x55a89019d500 ---------A   01570  FOR K = 1 TO 8
    0x55a89019d740 ---------A   01580  READ I4(K)
    0x55a89019d870 ---------A   01590  NEXT K
    0x55a89019e010 ---------A   01600  DATA 0,-1,-1,-1,0,1,1,1
    0x55a89019e2e0 ---------A   01610  FOR K=1 TO 8
    0x55a89019e520 ---------A   01620  READ J4(K)
    0x55a89019e650 ---------A   01630  NEXT K
    0x55a89019edf0 ---------A   01640  DATA 1,1,0,-1,-1,-1,0,1
    0x55a89019f4d0 ---------A   01650  FOR K = 1 TO 8
    0x55a89019f710 ---------A   01660  READ C$(K)
    0x55a89019f840 ---------A   01670  NEXT K
    0x55a89019fff0 ---------A   01680  DATA A,B,C,D,E,F,G,H
    0x55a8901a0070 ---------A   01690  REM********		SET UP A NEW GAME
    0x55a8901a0420 ---------A T 01700  FOR I = 0 TO 9
    0x55a8901a07c0 ---------A   01710  FOR J = 0 TO 9
    0x55a8901a0ba0 ---------A   01720  A(I,J)=0
    0x55a8901a0cd0 ---------A   01730  NEXT J
    0x55a8901a0e20 ---------A   01740  NEXT I
    0x55a8901a11f0 ---------A   01750  A(4,4) = W
    0x55a8901a15a0 ---------A   01760  A(5,5) = W
    0x55a8901a1950 ---------A   01770  A(4,5) = B
    0x55a8901a1d00 ---------A   01780  A(5,4) = B
    0x55a8901a1fd0 ---------A   01790  C1 = 2
    0x55a8901a22a0 ---------A   01800  H1 = 2
    0x55a8901a2570 ---------A   01810  N1 = 4
    0x55a8901a2850 ---------A   01820  Z =0
    0x55a8901a28d0 ---------A   01830  REM********		HUMAN'S CHOICES
    0x55a8901a2a90 ---------A   01840  PRINT "DO YOU WANT TO HAVE X OR O";
    0x55a8901a2d90 ---------A   01850  C = W
    0x55a8901a3080 ---------A   01860  H = B
    0x55a8901a31e0 ---------A T 01870  INPUT X$
    0x55a8901a3470 ---------A   01880  IF X$ = "X" THEN 1920
    0x55a8901a36f0 ---------A   01890  IF X$ <> "O" THEN 1870
    0x55a8901a3930 ---------A   01900  C = B
    0x55a8901a3b80 ---------A   01910  H = W
    0x55a8901a3d00 ---------A T 01920  PRINT "DO YOU WANT TO GO FIRST (Y OR N)";
    0x55a8901a3e60 ---------A T 01930  INPUT X$
    0x55a8901a4090 ---------A   01940  PRINT CHR$(26)
    0x55a8901a4320 ---------A   01950  IF X$ = "N" THEN 2030
    0x55a8901a45b0 ---------A   01960  IF X$ <> "Y" THEN 1930
    0x55a8901a4640 ---------A   01970  REM********		PRINT INITIAL BOARD
    0x55a8901a46d0 ---------A   01980  GOSUB 4320
    0x55a8901a4750 ---------A   01990  GO TO 2760
    0x55a8901a47d0 ---------A   02000  REM********		COMPUTER'S MOVE
    0x55a8901a4a50 ---------A T 02010  IF F2 = 0 THEN 2030
    0x55a8901a4bb0 ---------A   02020  INPUT X$
    0x55a8901a4e90 ---------A T 02030  B1 = -1
    0x55a8901a5300 ---------A   02040  I3 = J3 = 0
    0x55a8901a55f0 ---------A   02050  T1 = C
    0x55a8901a58f0 ---------A   02060  T2 = H
    0x55a8901a5970 ---------A   02070  REM********		SCAN FOR BLANK SQUARE
    0x55a8901a5c60 ---------A   02080  FOR I = 1 TO 8
    0x55a8901a5f50 ---------A   02090  FOR J = 1 TO 8
    0x55a8901a6380 ---------A   02100  IF A(I,J) <> 0 THEN 2390
    0x55a8901a6410 ---------A   02110  REM********		FOUND A BLANK SQUARE
    0x55a8901a64f0 ---------A   02120  REM********		DOES IT HAVE AN OPPONENT AS A NEIGHBOUR
    0x55a8901a6590 ---------A   02130  GOSUB 3840
    0x55a8901a68c0 ---------A   02140  IF F1 = 0 THEN 2390
    0x55a8901a6960 ---------A   02150  REM********		FOUND OPPONENT AS NEIGHBOUR
    0x55a8901a6a30 ---------A   02160  REM********		HOW MANY OF HIS PIECES CAN WE FLIP?
    0x55a8901a6ae0 ---------A   02170  REM********		DON'T DO IT NOW
    0x55a8901a6dd0 ---------A   02180  U = -1
    0x55a8901a6e60 ---------A   02190  GOSUB 4040
    0x55a8901a6ef0 ---------A   02200  REM********		EXTRA POINTS FOR BOUNDARY POSITION
    0x55a8901a7240 ---------A   02210  IF S1 = 0 THEN 2390
    0x55a8901a7840 ---------A   02220  IF (I-1) * (I-8) <> 0 THEN 2240
    0x55a8901a7bb0 ---------A   02230  S1 = S1 + S2
    0x55a8901a81a0 ---------A T 02240  IF (J-1) * (J-8) <> 0 THEN 2270
    0x55a8901a8530 ---------A   02250  S1 = S1 +S2
    0x55a8901a85c0 ---------A   02260  REM********		IS THIS BETTER THAN THE BEST FOUND SO FAR
    0x55a8901a8870 ---------A T 02270  IF S1 < B1 THEN 2390
    0x55a8901a8b10 ---------A   02280  IF S1 > B1 THEN 2350
    0x55a8901a93b0 ---------A   02290  REM********		A TIE; RANDOM DECISION
    0x55a8901a9490 ---------A   02300  REM********		THE NEXT TWO EXECUTABLE STATEMENTS ARE FOR
    0x55a8901a9550 ---------A   02310  REM********		BASIC WITH RANDOM NUMBERS
    0x55a8901a9930 ---------A   02320  R = RND(1)
    0x55a8901a9b80 ---------A   02330  IF R > .5 THEN 2390
    0x55a8901a9c00 ---------A   02340  REM********		YES
    0x55a8901a9e50 ---------A T 02350  B1 = S1
    0x55a8901aa080 ---------A   02360  I3 = I
    0x55a8901aa2c0 ---------A   02370  J3 = J
    0x55a8901aa340 ---------A   02380  REM********		END OF SCAN LOOP
    0x55a8901aa490 ---------A T 02390  NEXT J
    0x55a8901aa5e0 ---------A   02400  NEXT I
    0x55a8901aa690 ---------A   02410  REM********		COULD WE DO ANYTHING?
    0x55a8901aa910 ---------A   02420  IF B1 > 0 THEN 2510
    0x55a8901aa990 ---------A   02430  REM********		NO
    0x55a8901aac80 ---------A   02440  LET L = 18
    0x55a8901aad10 ---------A   02450  GOSUB 4490
    0x55a8901aae70 ---------A   02460  PRINT "DAMN! HAVE TO FORFEIT MY MOVE!"
    0x55a8901ab0d0 ---------A   02470  IF Z = 1 THEN 3370
    0x55a8901ab2f0 ---------A   02480  Z = 1
    0x55a8901ab370 ---------A   02490  GO TO 2760
    0x55a8901ab3f0 ---------A   02500  REM********		MAKE THE MOVE
    0x55a8901ab620 ---------A T 02510  Z = 0
    0x55a8901ab830 ---------A   02520  LET L=15
    0x55a8901ab8b0 ---------A   02530  GOSUB 4490
    0x55a8901aba20 ---------A   02540  PRINT "I WILL MOVE TO ";
    0x55a8901abba0 ---------A   02550  PRINT I3;
    0x55a8901abd20 ---------A   02560  PRINT " , ";
    0x55a8901abf60 ---------A   02570  PRINT C$(J3)
    0x55a8901ac1a0 ---------A   02580  I= I3
    0x55a8901ac3d0 ---------A   02590  J= J3
    0x55a8901ac5e0 ---------A   02600  U= 1
    0x55a8901ac650 ---------A   02610  GOSUB 4040
    0x55a8901acaa0 ---------A   02620  C1 = C1 + S1 + 1
    0x55a8901acdf0 ---------A   02630  H1 = H1 - S1
    0x55a8901ad120 ---------A   02640  N1 = N1 + 1
    0x55a8901ad330 ---------A   02650  LET L=16
    0x55a8901ad3b0 ---------A   02660  GOSUB 4490
    0x55a8901ad520 ---------A   02670  PRINT " THAT GIVES ME : ";
    0x55a8901ad6b0 ---------A   02680  PRINT S1;
    0x55a8901ad820 ---------A   02690  PRINT " OF YOUR PIECES"
    0x55a8901ad8b0 ---------A   02700  REM********		PRINT OUT BOARD
    0x55a8901ad950 ---------A   02710  GOSUB 4320
    0x55a8901ad9d0 ---------A   02720  REM********		TEST FOR END OF GAME
    0x55a8901adc60 ---------A   02730  IF H1 = 0 THEN 3370
    0x55a8901aded0 ---------A   02740  IF N1 = 64 THEN 3370
    0x55a8901adf60 ---------A   02750  REM********		HUMANS MOVE
    0x55a8901ae1b0 ---------A T 02760  T1 = H
    0x55a8901ae3e0 ---------A   02770  T2 = C
    0x55a8901ae5f0 ---------A   02780  LET L = 12
    0x55a8901ae670 ---------A   02790  GOSUB 4490
    0x55a8901ae7e0 ---------A T 02800  PRINT " YOUR MOVE";
    0x55a8901aea20 ---------A T 02810  INPUT I, X$
    0x55a8901aec80 ---------A   02820  IF I < 0 THEN 2810
    0x55a8901aeef0 ---------A   02830  IF I > 8 THEN 2810
    0x55a8901af150 ---------A   02840  IF I <> 0 THEN 2930
    0x55a8901af370 ---------A   02850  LET L = 18
    0x55a8901af400 ---------A   02860  GOSUB 4490
    0x55a8901af560 ---------A   02870  PRINT "ARE YOU FORFEITING YOUR TURN Y OR N"
    0x55a8901af6d0 ---------A   02880  INPUT X$
    0x55a8901af950 ---------A   02890  IF X$ <> "Y" THEN 2800
    0x55a8901afbb0 ---------A   02900  IF Z = 1 THEN 3370
    0x55a8901afdd0 ---------A   02910  Z = 1
    0x55a8901afe40 ---------A   02920  GO TO 2010
    0x55a8901b0120 ---------A T 02930  FOR J = 1 TO 8
    0x55a8901b0480 ---------A   02940  IF C$(J) =X$ THEN 2980
    0x55a8901b05c0 ---------A   02950  NEXT J
    0x55a8901b0660 ---------A   02960  GO TO 2810
    0x55a8901b06e0 ---------A   02970  REM********		CHECK FOR BLANK
    0x55a8901b0b20 ---------A T 02980  IF A(I,J) = 0 THEN 3040
    0x55a8901b0d40 ---------A   02990  LET L = 18
    0x55a8901b0dd0 ---------A   03000  GOSUB 4490
    0x55a8901b0f40 ---------A   03010  PRINT "SORRY, THAT SQUARE IS OCCUPIED, TRY AGAIN"
    0x55a8901b0fe0 ---------A   03020  GO TO 2810
    0x55a8901b1060 ---------A   03030  REM********		CHECK FOR LEGAL NEIGHBOUR
    0x55a8901b1100 ---------A T 03040  GOSUB 3840
    0x55a8901b1350 ---------A   03050  IF F1 = 1 THEN 3110
    0x55a8901b1570 ---------A   03060  LET L = 18
    0x55a8901b1610 ---------A   03070  GOSUB 4490
    0x55a8901b17b0 ---------A   03080  PRINT "SORRY, YOU ARE NOT NEXT TO ONE OF MY PIECES. TRY AGAIN.";
    0x55a8901b1840 ---------A   03090  GO TO 2810
    0x55a8901b18c0 ---------A   03100  REM********		CHECK IF LEGAL RUN
    0x55a8901b1af0 ---------A T 03110  U = -1
    0x55a8901b1b70 ---------A   03120  GOSUB 4040
    0x55a8901b1dc0 ---------A   03130  IF S1 > 0 THEN 3190
    0x55a8901b1fe0 ---------A   03140  LET L = 18
    0x55a8901b2070 ---------A   03150  GOSUB 4490
    0x55a8901b21e0 ---------A   03160  PRINT "SORRY, THAT DOESN'T FLANK A ROW, TRY AGAIN"
    0x55a8901b2280 ---------A   03170  GO TO 2810
    0x55a8901b2310 ---------A   03180  REM********		EVERYTHING LEGAL; MAKE HUMANS MOVE
    0x55a8901b2540 ---------A T 03190  Z = 0
    0x55a8901b2750 ---------A   03200  LET L = 13
    0x55a8901b27d0 ---------A   03210  GOSUB 4490
    0x55a8901b2940 ---------A   03220  PRINT "THAT GIVES YOU";
    0x55a8901b2ad0 ---------A   03230  PRINT S1;
    0x55a8901b2c30 ---------A   03240  PRINT " OF MY PIECES"
    0x55a8901b2e50 ---------A   03250  U = 1
    0x55a8901b2ec0 ---------A   03260  GOSUB 4040
    0x55a8901b3310 ---------A   03270  H1 = H1 + S1 + 1
    0x55a8901b3660 ---------A   03280  C1 = C1 -S1
    0x55a8901b39a0 ---------A   03290  N1 = N1 + 1
    0x55a8901b3a20 ---------A   03300  REM********		PRINT OUT BOARD
    0x55a8901b3ac0 ---------A   03310  GOSUB 4320
    0x55a8901b3b40 ---------A   03320  REM********		TEST FOR END OF GAME
    0x55a8901b3dd0 ---------A   03330  IF C1 = 0 THEN 3370
    0x55a8901b4030 ---------A   03340  IF N1 = 64 THEN 3370
    0x55a8901b40c0 ---------A   03350  GO TO 2010
    0x55a8901b4140 ---------A   03360  REM********		END OF GAME ; WRAPUP
    0x55a8901b4370 ---------A T 03370  LET L = 18
    0x55a8901b4400 ---------A   03380  GOSUB 4490
    0x55a8901b4560 ---------A   03390  PRINT "FOR RESULTS ON GAME TYPE RETURN!!"
    0x55a8901b46d0 ---------A   03400  INPUT X$
    0x55a8901b4ab0 ---------A   03410  PRINT CHR$(30),CHR$(26)
    0x55a8901b4c30 ---------A   03420  PRINT "YOU HAVE ";
    0x55a8901b4dc0 ---------A   03430  PRINT H1;
    0x55a8901b4f40 ---------A   03440  PRINT " PIECES, AND I HAVE ";
    0x55a8901b50d0 ---------A   03450  PRINT C1;
    0x55a8901b5240 ---------A   03460  PRINT " PIECES--- "
    0x55a8901b54d0 ---------A   03470  IF H1 = C1 THEN 3510
    0x55a8901b5760 ---------A   03480  IF H1 > C1 THEN 3530
    0x55a8901b58d0 ---------A   03490  PRINT "SORRY, I WON THAT ONE."
    0x55a8901b5960 ---------A   03500  GO TO 3540
    0x55a8901b5ab0 ---------A T 03510  PRINT " A TIE!!!!!"
    0x55a8901b5b30 ---------A   03520  GO TO 3720
    0x55a8901b5c80 ---------A T 03530  PRINT "YOU WON!!!"
    0x55a8901b5ff0 ---------A T 03540  C1 = C1 - H1
    0x55a8901b6240 ---------A   03550  IF C1 > 0 THEN 3570
    0x55a8901b6480 ---------A   03560  C1 = -C1
    0x55a8901a8fc0 ---------A T 03570  C1 = (64 * C1)/ N1
    0x55a8901a9140 ---------A   03580  PRINT "THAT WAS A ";
    0x55a8901b7510 ---------A   03590  IF C1 < 11 THEN 3710
    0x55a8901b7780 ---------A   03600  IF C1 < 25 THEN 3690
    0x55a8901b79f0 ---------A   03610  IF C1 < 39 THEN 3670
    0x55a8901b7c60 ---------A   03620  IF C1 < 53 THEN 3650
    0x55a8901b7dc0 ---------A   03630  PRINT " A PERFECT GAME!"
    0x55a8901b7e40 ---------A   03640  GO TO 3720
    0x55a8901b7f90 ---------A T 03650  PRINT "WALKAWAY!"
    0x55a8901b8010 ---------A   03660  GO TO 3720
    0x55a8901b8160 ---------A T 03670  PRINT "FIGHT!"
    0x55a8901b81e0 ---------A   03680  GO TO 3720
    0x55a8901b8330 ---------A T 03690  PRINT "HOT GAME!"
    0x55a8901b83b0 ---------A   03700  GO TO 3720
    0x55a8901b8500 ---------A T 03710  PRINT "SQUEAKER!"
    0x55a8901b8590 ---------A T 03720  PRINT
    0x55a8901b8720 ---------A   03730  PRINT"DO YOU WANT TO PLAY AGAIN";
    0x55a8901b8890 ---------A T 03740  INPUT X$
    0x55a8901b8b20 ---------A   03750  IF X$ = "Y" THEN 1700
    0x55a8901b8db0 ---------A   03760  IF X$ <> "N" THEN 3740
    0x55a8901b8f10 ---------A   03770  PRINT "THANKS FOR PLAYING."
    0x55a8901b8f70 ---------A   03780  STOP
    0x55a8901b8ff0 ---------B   03790  REM********		
    0x55a8901b90c0 ---------B   03800  REM********		SUBROUTINE
    0x55a8901b9160 ---------B   03810  REM********		ASSUMES
    0x55a8901b9220 ---------B   03820  REM********		I,J LOCATES A BLANK SQUARE
    0x55a8901b9300 ---------B   03830  REM********		YOU HOPE TO SEE AN ADJACENT  T2 (= -T1)
    0x55a8901b96c0 ---------B G 03840  FOR I1 =  -1 TO 1
    0x55a8901b9a70 ---------B   03850  FOR J1 = -1 TO 1
    0x55a8901ba0f0 ---------B   03860  IF  A(I+I1,J+J1) = T2 THEN 3930
    0x55a8901ba230 ---------B   03870  NEXT J1
    0x55a8901ba380 ---------B   03880  NEXT I1
    0x55a8901ba430 ---------B   03890  REM********		NO T2 FOUND
    0x55a8901ba660 ---------B   03900  F1 = 0
    0x55a8901ba6b0 ---------B   03910  RETURN
    0x55a8901ba740 ---------A   03920  REM********		SUCCESS
    0x55a8901ba970 ---------B T 03930  F1 = 1
    0x55a8901ba9c0 ---------B   03940  RETURN
    0x55a8901baa80 ---------C   03950  REM********		SUBROUTINE SCORE AND UPDATE
    0x55a8901bab20 ---------C   03960  REM********		ASSUMES;
    0x55a8901bac00 ---------C   03970  REM********		(I,J) IS A TENTATIVE PLACE FOR A PIECE T1.
    0x55a8901bace0 ---------C   03980  REM********		WANT RUNS OF T2 = -T1, TERMINATED BY A T1.
    0x55a8901badc0 ---------C   03990  REM********		IF U IS TRUE (1), MARK THOSE RUNS AS T1'S.
    0x55a8901baea0 ---------C   04000  REM********		RETURN SUM OF ALL RUNS (T2'S ONLY) IN S1.
    0x55a8901baf90 ---------C   04010  REM********		MAIN PROGRAM CONTAINS THE FOLLOWING ARRAYS
    0x55a8901bb060 ---------C   04020  REM********		I4
    0x55a8901bb130 ---------C   04030  REM********		J4
    0x55a8901bb360 ---------C G 04040  S1 = 0
    0x55a8901bb630 ---------C   04050  FOR K = 1 TO 8
    0x55a8901bba10 ---------C   04060  I5 = I4(K)
    0x55a8901bbde0 ---------C   04070  J5 = J4(K)
    0x55a8901bc1f0 ---------C   04080  I6 = I + I5
    0x55a8901bc600 ---------C   04090  J6 = J + J5
    0x55a8901bc8e0 ---------C   04100  S3 = 0
    0x55a8901bcd20 ---------C   04110  IF A(I6,J6) <> T2 THEN 4290
    0x55a8901bcdb0 ---------C   04120  REM			LOOP THROUGH THE RUN
    0x55a8901bd100 ---------C T 04130  S3 = S3 + 1
    0x55a8901bd450 ---------C   04140  I6 = I6 + I5
    0x55a8901bd7b0 ---------C   04150  J6 = J6 + J5
    0x55a8901bdbf0 ---------C   04160  IF A (I6,J6) = T1 THEN 4190
    0x55a8901be010 ---------C   04170  IF A(I6,J6) = 0 THEN 4290
    0x55a8901be090 ---------C   04180  GO TO 4130
    0x55a8901be3f0 ---------C T 04190  S1 = S1 + S3
    0x55a8901be650 ---------C   04200  IF U <> 1 THEN 4290
    0x55a8901be6d0 ---------C   04210  REM			UPDATE BOARD
    0x55a8901be920 ---------C   04220  I6 = I
    0x55a8901beb60 ---------C   04230  J6 = J
    0x55a8901bef10 ---------C   04240  FOR K1 = 0 TO S3
    0x55a8901bf310 ---------C   04250  A(I6,J6) = T1
    0x55a8901bf660 ---------C   04260  I6 = I6 + I5
    0x55a8901bf9b0 ---------C   04270  J6 = J6 + J5
    0x55a8901bfae0 ---------C   04280  NEXT K1
    0x55a8901bfc30 ---------C T 04290  NEXT K
    0x55a8901bfca0 ---------C   04300  RETURN
    0x55a8901bfd50 ---------D   04310  REM********		SUBROUTINE TO PRINT BOARD
    0x55a8901bff80 ---------D G 04320  PRINT CHR$(30)
    0x55a8901c01b0 ---------D   04330  LET L = 18
    0x55a8901c03e0 ---------D   04340  IF F9 = 1 GO TO 4370
    0x55a8901c0480 ---------D   04350  GOSUB 4570
    0x55a8901c0690 ---------D   04360  LET F9 = 1
    0x55a8901c08b0 ---------D T 04370  PRINT CHR$(30)
    0x55a8901c0a10 ---------D   04380  PRINT "    A B C D E F G H"
    0x55a8901c0cf0 ---------D   04390  FOR I = 1 TO 8
    0x55a8901c0e70 ---------D   04400  PRINT I;
    0x55a8901c1150 ---------D   04410  FOR J = 1 TO 8
    0x55a8901c12e0 ---------D   04420  PRINT " ";
    0x55a8901c1800 ---------D   04430  PRINT D$(A(I,J)+1);
    0x55a8901c1940 ---------D   04440  NEXT J
    0x55a8901c19d0 ---------D   04450  PRINT
    0x55a8901c1b10 ---------D   04460  NEXT I
    0x55a8901c1ba0 ---------D   04470  PRINT
    0x55a8901c1c00 ---------D   04480  RETURN
    0x55a8901c1ca0 ---------E G 04490  REM********		***	SPACE		***
    0x55a8901c1ed0 ---------E   04500  PRINT CHR$(30)
    0x55a8901c2290 ---------E   04510  FOR I9 = 1 TO L
    0x55a8901c2310 ---------E   04520  PRINT
    0x55a8901c2450 ---------E   04530  NEXT I9
    0x55a8901c26b0 ---------E   04540  IF L <> 18 GO TO 4560
    0x55a8901c28f0 ---------E   04550  F9 = 0
    0x55a8901c2940 ---------E T 04560  RETURN
    0x55a8901c29e0 ---------F G 04570  REM********		***	BLANK OUT	***
    0x55a8901c2a70 ---------F   04580  GOSUB 4490
    0x55a8901c2d00 ---------F   04590  PRINT TAB(60);" "
    0x55a8901c2fa0 ---------F   04600  PRINT TAB(60);" "
    0x55a8901c3000 ---------F   04610  RETURN
    0x55a8901c3060 ---------A   04620  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/othelo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55a890190b80 ---------A   01000  REM********		OTHELLO          BYTE VOL. 2, NUMBER 10 (OCT. 1977)
    0x55a890191e70 ---------A   01010  REM********		PLAYS THE GAME OTHELLO WITH TWO STRATEGIES
    0x55a890191ff0 ---------A   01020  REM********		1. TAKE THE MAX. NUMBER OF PIECES
    0x55a8901920b0 ---------A   01030  REM********		2. ADD A BONUS FOR OUTSIDE POSITION
    0x55a8901802b0 ---------A   01040  REM********		BOARD IS THE ARRAY A, BOUNDED BY 0'S (BLANKS)
    0x55a89018f9e0 ---------A   01050  REM********		A = 0 FOR EMPTY SQUARE
    0x55a89018f7f0 ---------A   01060  REM********		A = B FOR BLACK SQUARE
    0x55a890191aa0 ---------A   01070  REM********		A = W FOR WHITE SQUARE
    0x55a890190090 ---------A   01080  REM********		I AND J ARE ALWAYS USED FOR ROW/COLUMN INDICES
    0x55a89018fe90 ---------A   01090  REM********		I1 AND J4 STORE INCREMENTS TO THE 8 NEIGHBOURS
    0x55a8901916a0 ---------A   01100  REM********		C$ AND D$ STORE CHARACTERS A-H,X,...,O FOR OUTPUT
    0x55a890197a80 ---------A   01110  DIM A(9,9),I4(8),J4(8),C$(8),D$(2)
    0x55a890197ad0 ---------A   01120  REM********		
    0x55a89018f6d0 ---------A   01130  PRINT "GREETINGS FROM OTHELLO!"
    0x55a89018f670 ---------A   01140  PRINT "DO YOU WANT INSTRUCTIONS (Y OR N)";
    0x55a890197e60 ---------A T 01150  INPUT X$
    0x55a8901980c0 ---------A   01160  IF X$ = "N" THEN 1380
    0x55a890198340 ---------A   01170  IF X$ <> "Y" THEN 1150
    0x55a8901983e0 ---------A   01180  PRINT
    0x55a890198590 ---------A   01190  PRINT "OTHELLO IS PLAYED ON AN 8X8 CHECKER BOARD"
    0x55a890198740 ---------A   01200  PRINT "ROWS ARE NUMBERED FROM 1 TO 8 AND COLUMNS FROM A TO H"
    0x55a8901988f0 ---------A   01210  PRINT" THE INITIAL CONFIGURATION IS ALL BLANK EXCEPT FOR"
    0x55a890198a50 ---------A   01220  PRINT "THE CENTER FOUR SQUARES, WHICH FORM THE PATTERN:"
    0x55a890198b90 ---------A   01230  PRINT "               O X"
    0x55a890198cf0 ---------A   01240  PRINT "               X O"
    0x55a890198da0 ---------A   01250  PRINT
    0x55a890198f60 ---------A   01260  PRINT "TRY TO PLACE YOUR PIECE SO THAT IT WILL 'OUTFLANK' MINE"
    0x55a890199110 ---------A   01270  PRINT "THEREBY CREATING A HORIZONTAL, VERTICAL, OR DIAGONAL "
    0x55a8901992c0 ---------A   01280  PRINT "RUN OF MY PIECES BOUNDED AT EACH END BY AT LEAST ONE "
    0x55a890199450 ---------A   01290  PRINT "OF YOURS.  THIS WILL 'FLIP' MY PIECES, TURNING THEM INTO"
    0x55a8901995e0 ---------A   01300  PRINT "YOURS."
    0x55a890199790 ---------A   01310  PRINT"     NOTE: YOU MUST CAPTURE AT LEAST ONE OF MY PIECES"
    0x55a890199940 ---------A   01320  PRINT "IN THIS WAY IF IT IS AT ALL POSSIBLE.  IF IT IS NOT"
    0x55a890199cf0 ---------A   01330  PRINT "POSSIBLE, YOU FORFEIT YOUR TURN BY ENTERING"
    0x55a890199e70 ---------A   01340  PRINT "     0,0   FOR YOUR ROW,COLUMN MOVE"
    0x55a890199fd0 ---------A   01350  PRINT " GOOD LUCK!"
    0x55a89019a050 ---------A   01360  PRINT
    0x55a89019a0d0 ---------A   01370  REM********		
    0x55a89019a2b0 ---------A T 01380  PRINT "SHOULD I WAIT BEFORE MAKING MY MOVES (Y OR N)";
    0x55a89019a590 ---------A   01390  F2 = 0
    0x55a89019a860 ---------A   01400  F9 = 1
    0x55a89019a9c0 ---------A T 01410  INPUT X$
    0x55a89019ac50 ---------A   01420  IF X$ = "N" THEN 1460
    0x55a89019aed0 ---------A   01430  IF X$ <> "Y" THEN  1410
    0x55a89019b120 ---------A   01440  F2 = 1
    0x55a89019b2b0 ---------A   01450  PRINT "OK.  TYPING ANY CHARACTER WILL LET ME GO"
    0x55a89019b450 ---------A T 01460  PRINT "SHOULD I PLAY MY BEST STRATEGY (Y OR N)";
    0x55a89019b730 ---------A   01470  S2 = 0
    0x55a89019b890 ---------A T 01480  INPUT X$
    0x55a89019bb20 ---------A   01490  IF X$ = "N" THEN 1520
    0x55a89019bda0 ---------A   01500  IF X$ <> "Y" THEN 1480
    0x55a89019bfc0 ---------A   01510  S2 = 2
    0x55a89019c290 ---------A T 01520  B = -1
    0x55a89019c560 ---------A   01530  W = +1
    0x55a89019c970 ---------A   01540  D$(B +1) ="X"
    0x55a89019cd60 ---------A   01550  D$(0 +1) = "."
    0x55a89019d170 ---------A   01560  D$(W + 1) ="O"
    0x55a89019d500 ---------A   01570  FOR K = 1 TO 8
    0x55a89019d740 ---------A   01580  READ I4(K)
    0x55a89019d870 ---------A   01590  NEXT K
    0x55a89019e010 ---------A   01600  DATA 0,-1,-1,-1,0,1,1,1
    0x55a89019e2e0 ---------A   01610  FOR K=1 TO 8
    0x55a89019e520 ---------A   01620  READ J4(K)
    0x55a89019e650 ---------A   01630  NEXT K
    0x55a89019edf0 ---------A   01640  DATA 1,1,0,-1,-1,-1,0,1
    0x55a89019f4d0 ---------A   01650  FOR K = 1 TO 8
    0x55a89019f710 ---------A   01660  READ C$(K)
    0x55a89019f840 ---------A   01670  NEXT K
    0x55a89019fff0 ---------A   01680  DATA A,B,C,D,E,F,G,H
    0x55a8901a0070 ---------A   01690  REM********		SET UP A NEW GAME
    0x55a8901a0420 ---------A T 01700  FOR I = 0 TO 9
    0x55a8901a07c0 ---------A   01710  FOR J = 0 TO 9
    0x55a8901a0ba0 ---------A   01720  A(I,J)=0
    0x55a8901a0cd0 ---------A   01730  NEXT J
    0x55a8901a0e20 ---------A   01740  NEXT I
    0x55a8901a11f0 ---------A   01750  A(4,4) = W
    0x55a8901a15a0 ---------A   01760  A(5,5) = W
    0x55a8901a1950 ---------A   01770  A(4,5) = B
    0x55a8901a1d00 ---------A   01780  A(5,4) = B
    0x55a8901a1fd0 ---------A   01790  C1 = 2
    0x55a8901a22a0 ---------A   01800  H1 = 2
    0x55a8901a2570 ---------A   01810  N1 = 4
    0x55a8901a2850 ---------A   01820  Z =0
    0x55a8901a28d0 ---------A   01830  REM********		HUMAN'S CHOICES
    0x55a8901a2a90 ---------A   01840  PRINT "DO YOU WANT TO HAVE X OR O";
    0x55a8901a2d90 ---------A   01850  C = W
    0x55a8901a3080 ---------A   01860  H = B
    0x55a8901a31e0 ---------A T 01870  INPUT X$
    0x55a8901a3470 ---------A   01880  IF X$ = "X" THEN 1920
    0x55a8901a36f0 ---------A   01890  IF X$ <> "O" THEN 1870
    0x55a8901a3930 ---------A   01900  C = B
    0x55a8901a3b80 ---------A   01910  H = W
    0x55a8901a3d00 ---------A T 01920  PRINT "DO YOU WANT TO GO FIRST (Y OR N)";
    0x55a8901a3e60 ---------A T 01930  INPUT X$
    0x55a8901a4090 ---------A   01940  PRINT CHR$(26)
    0x55a8901a4320 ---------A   01950  IF X$ = "N" THEN 2030
    0x55a8901a45b0 ---------A   01960  IF X$ <> "Y" THEN 1930
    0x55a8901a4640 ---------A   01970  REM********		PRINT INITIAL BOARD
    0x55a8901a46d0 ---------A   01980  GOSUB 4320
    0x55a8901a4750 ---------A   01990  GO TO 2760
    0x55a8901a47d0 ---------A   02000  REM********		COMPUTER'S MOVE
    0x55a8901a4a50 ---------A T 02010  IF F2 = 0 THEN 2030
    0x55a8901a4bb0 ---------A   02020  INPUT X$
    0x55a8901a4e90 ---------A T 02030  B1 = -1
    0x55a8901a5300 ---------A   02040  I3 = J3 = 0
    0x55a8901a55f0 ---------A   02050  T1 = C
    0x55a8901a58f0 ---------A   02060  T2 = H
    0x55a8901a5970 ---------A   02070  REM********		SCAN FOR BLANK SQUARE
    0x55a8901a5c60 ---------A   02080  FOR I = 1 TO 8
    0x55a8901a5f50 ---------A   02090  FOR J = 1 TO 8
    0x55a8901a6380 ---------A   02100  IF A(I,J) <> 0 THEN 2390
    0x55a8901a6410 ---------A   02110  REM********		FOUND A BLANK SQUARE
    0x55a8901a64f0 ---------A   02120  REM********		DOES IT HAVE AN OPPONENT AS A NEIGHBOUR
    0x55a8901a6590 ---------A   02130  GOSUB 3840
    0x55a8901a68c0 ---------A   02140  IF F1 = 0 THEN 2390
    0x55a8901a6960 ---------A   02150  REM********		FOUND OPPONENT AS NEIGHBOUR
    0x55a8901a6a30 ---------A   02160  REM********		HOW MANY OF HIS PIECES CAN WE FLIP?
    0x55a8901a6ae0 ---------A   02170  REM********		DON'T DO IT NOW
    0x55a8901a6dd0 ---------A   02180  U = -1
    0x55a8901a6e60 ---------A   02190  GOSUB 4040
    0x55a8901a6ef0 ---------A   02200  REM********		EXTRA POINTS FOR BOUNDARY POSITION
    0x55a8901a7240 ---------A   02210  IF S1 = 0 THEN 2390
    0x55a8901a7840 ---------A   02220  IF (I-1) * (I-8) <> 0 THEN 2240
    0x55a8901a7bb0 ---------A   02230  S1 = S1 + S2
    0x55a8901a81a0 ---------A T 02240  IF (J-1) * (J-8) <> 0 THEN 2270
    0x55a8901a8530 ---------A   02250  S1 = S1 +S2
    0x55a8901a85c0 ---------A   02260  REM********		IS THIS BETTER THAN THE BEST FOUND SO FAR
    0x55a8901a8870 ---------A T 02270  IF S1 < B1 THEN 2390
    0x55a8901a8b10 ---------A   02280  IF S1 > B1 THEN 2350
    0x55a8901a93b0 ---------A   02290  REM********		A TIE; RANDOM DECISION
    0x55a8901a9490 ---------A   02300  REM********		THE NEXT TWO EXECUTABLE STATEMENTS ARE FOR
    0x55a8901a9550 ---------A   02310  REM********		BASIC WITH RANDOM NUMBERS
    0x55a8901a9930 ---------A   02320  R = RND(1)
    0x55a8901a9b80 ---------A   02330  IF R > .5 THEN 2390
    0x55a8901a9c00 ---------A   02340  REM********		YES
    0x55a8901a9e50 ---------A T 02350  B1 = S1
    0x55a8901aa080 ---------A   02360  I3 = I
    0x55a8901aa2c0 ---------A   02370  J3 = J
    0x55a8901aa340 ---------A   02380  REM********		END OF SCAN LOOP
    0x55a8901aa490 ---------A T 02390  NEXT J
    0x55a8901aa5e0 ---------A   02400  NEXT I
    0x55a8901aa690 ---------A   02410  REM********		COULD WE DO ANYTHING?
    0x55a8901aa910 ---------A   02420  IF B1 > 0 THEN 2510
    0x55a8901aa990 ---------A   02430  REM********		NO
    0x55a8901aac80 ---------A   02440  LET L = 18
    0x55a8901aad10 ---------A   02450  GOSUB 4490
    0x55a8901aae70 ---------A   02460  PRINT "DAMN! HAVE TO FORFEIT MY MOVE!"
    0x55a8901ab0d0 ---------A   02470  IF Z = 1 THEN 3370
    0x55a8901ab2f0 ---------A   02480  Z = 1
    0x55a8901ab370 ---------A   02490  GO TO 2760
    0x55a8901ab3f0 ---------A   02500  REM********		MAKE THE MOVE
    0x55a8901ab620 ---------A T 02510  Z = 0
    0x55a8901ab830 ---------A   02520  LET L=15
    0x55a8901ab8b0 ---------A   02530  GOSUB 4490
    0x55a8901aba20 ---------A   02540  PRINT "I WILL MOVE TO ";
    0x55a8901abba0 ---------A   02550  PRINT I3;
    0x55a8901abd20 ---------A   02560  PRINT " , ";
    0x55a8901abf60 ---------A   02570  PRINT C$(J3)
    0x55a8901ac1a0 ---------A   02580  I= I3
    0x55a8901ac3d0 ---------A   02590  J= J3
    0x55a8901ac5e0 ---------A   02600  U= 1
    0x55a8901ac650 ---------A   02610  GOSUB 4040
    0x55a8901acaa0 ---------A   02620  C1 = C1 + S1 + 1
    0x55a8901acdf0 ---------A   02630  H1 = H1 - S1
    0x55a8901ad120 ---------A   02640  N1 = N1 + 1
    0x55a8901ad330 ---------A   02650  LET L=16
    0x55a8901ad3b0 ---------A   02660  GOSUB 4490
    0x55a8901ad520 ---------A   02670  PRINT " THAT GIVES ME : ";
    0x55a8901ad6b0 ---------A   02680  PRINT S1;
    0x55a8901ad820 ---------A   02690  PRINT " OF YOUR PIECES"
    0x55a8901ad8b0 ---------A   02700  REM********		PRINT OUT BOARD
    0x55a8901ad950 ---------A   02710  GOSUB 4320
    0x55a8901ad9d0 ---------A   02720  REM********		TEST FOR END OF GAME
    0x55a8901adc60 ---------A   02730  IF H1 = 0 THEN 3370
    0x55a8901aded0 ---------A   02740  IF N1 = 64 THEN 3370
    0x55a8901adf60 ---------A   02750  REM********		HUMANS MOVE
    0x55a8901ae1b0 ---------A T 02760  T1 = H
    0x55a8901ae3e0 ---------A   02770  T2 = C
    0x55a8901ae5f0 ---------A   02780  LET L = 12
    0x55a8901ae670 ---------A   02790  GOSUB 4490
    0x55a8901ae7e0 ---------A T 02800  PRINT " YOUR MOVE";
    0x55a8901aea20 ---------A T 02810  INPUT I, X$
    0x55a8901aec80 ---------A   02820  IF I < 0 THEN 2810
    0x55a8901aeef0 ---------A   02830  IF I > 8 THEN 2810
    0x55a8901af150 ---------A   02840  IF I <> 0 THEN 2930
    0x55a8901af370 ---------A   02850  LET L = 18
    0x55a8901af400 ---------A   02860  GOSUB 4490
    0x55a8901af560 ---------A   02870  PRINT "ARE YOU FORFEITING YOUR TURN Y OR N"
    0x55a8901af6d0 ---------A   02880  INPUT X$
    0x55a8901af950 ---------A   02890  IF X$ <> "Y" THEN 2800
    0x55a8901afbb0 ---------A   02900  IF Z = 1 THEN 3370
    0x55a8901afdd0 ---------A   02910  Z = 1
    0x55a8901afe40 ---------A   02920  GO TO 2010
    0x55a8901b0120 ---------A T 02930  FOR J = 1 TO 8
    0x55a8901b0480 ---------A   02940  IF C$(J) =X$ THEN 2980
    0x55a8901b05c0 ---------A   02950  NEXT J
    0x55a8901b0660 ---------A   02960  GO TO 2810
    0x55a8901b06e0 ---------A   02970  REM********		CHECK FOR BLANK
    0x55a8901b0b20 ---------A T 02980  IF A(I,J) = 0 THEN 3040
    0x55a8901b0d40 ---------A   02990  LET L = 18
    0x55a8901b0dd0 ---------A   03000  GOSUB 4490
    0x55a8901b0f40 ---------A   03010  PRINT "SORRY, THAT SQUARE IS OCCUPIED, TRY AGAIN"
    0x55a8901b0fe0 ---------A   03020  GO TO 2810
    0x55a8901b1060 ---------A   03030  REM********		CHECK FOR LEGAL NEIGHBOUR
    0x55a8901b1100 ---------A T 03040  GOSUB 3840
    0x55a8901b1350 ---------A   03050  IF F1 = 1 THEN 3110
    0x55a8901b1570 ---------A   03060  LET L = 18
    0x55a8901b1610 ---------A   03070  GOSUB 4490
    0x55a8901b17b0 ---------A   03080  PRINT "SORRY, YOU ARE NOT NEXT TO ONE OF MY PIECES. TRY AGAIN.";
    0x55a8901b1840 ---------A   03090  GO TO 2810
    0x55a8901b18c0 ---------A   03100  REM********		CHECK IF LEGAL RUN
    0x55a8901b1af0 ---------A T 03110  U = -1
    0x55a8901b1b70 ---------A   03120  GOSUB 4040
    0x55a8901b1dc0 ---------A   03130  IF S1 > 0 THEN 3190
    0x55a8901b1fe0 ---------A   03140  LET L = 18
    0x55a8901b2070 ---------A   03150  GOSUB 4490
    0x55a8901b21e0 ---------A   03160  PRINT "SORRY, THAT DOESN'T FLANK A ROW, TRY AGAIN"
    0x55a8901b2280 ---------A   03170  GO TO 2810
    0x55a8901b2310 ---------A   03180  REM********		EVERYTHING LEGAL; MAKE HUMANS MOVE
    0x55a8901b2540 ---------A T 03190  Z = 0
    0x55a8901b2750 ---------A   03200  LET L = 13
    0x55a8901b27d0 ---------A   03210  GOSUB 4490
    0x55a8901b2940 ---------A   03220  PRINT "THAT GIVES YOU";
    0x55a8901b2ad0 ---------A   03230  PRINT S1;
    0x55a8901b2c30 ---------A   03240  PRINT " OF MY PIECES"
    0x55a8901b2e50 ---------A   03250  U = 1
    0x55a8901b2ec0 ---------A   03260  GOSUB 4040
    0x55a8901b3310 ---------A   03270  H1 = H1 + S1 + 1
    0x55a8901b3660 ---------A   03280  C1 = C1 -S1
    0x55a8901b39a0 ---------A   03290  N1 = N1 + 1
    0x55a8901b3a20 ---------A   03300  REM********		PRINT OUT BOARD
    0x55a8901b3ac0 ---------A   03310  GOSUB 4320
    0x55a8901b3b40 ---------A   03320  REM********		TEST FOR END OF GAME
    0x55a8901b3dd0 ---------A   03330  IF C1 = 0 THEN 3370
    0x55a8901b4030 ---------A   03340  IF N1 = 64 THEN 3370
    0x55a8901b40c0 ---------A   03350  GO TO 2010
    0x55a8901b4140 ---------A   03360  REM********		END OF GAME ; WRAPUP
    0x55a8901b4370 ---------A T 03370  LET L = 18
    0x55a8901b4400 ---------A   03380  GOSUB 4490
    0x55a8901b4560 ---------A   03390  PRINT "FOR RESULTS ON GAME TYPE RETURN!!"
    0x55a8901b46d0 ---------A   03400  INPUT X$
    0x55a8901b4ab0 ---------A   03410  PRINT CHR$(30),CHR$(26)
    0x55a8901b4c30 ---------A   03420  PRINT "YOU HAVE ";
    0x55a8901b4dc0 ---------A   03430  PRINT H1;
    0x55a8901b4f40 ---------A   03440  PRINT " PIECES, AND I HAVE ";
    0x55a8901b50d0 ---------A   03450  PRINT C1;
    0x55a8901b5240 ---------A   03460  PRINT " PIECES--- "
    0x55a8901b54d0 ---------A   03470  IF H1 = C1 THEN 3510
    0x55a8901b5760 ---------A   03480  IF H1 > C1 THEN 3530
    0x55a8901b58d0 ---------A   03490  PRINT "SORRY, I WON THAT ONE."
    0x55a8901b5960 ---------A   03500  GO TO 3540
    0x55a8901b5ab0 ---------A T 03510  PRINT " A TIE!!!!!"
    0x55a8901b5b30 ---------A   03520  GO TO 3720
    0x55a8901b5c80 ---------A T 03530  PRINT "YOU WON!!!"
    0x55a8901b5ff0 ---------A T 03540  C1 = C1 - H1
    0x55a8901b6240 ---------A   03550  IF C1 > 0 THEN 3570
    0x55a8901b6480 ---------A   03560  C1 = -C1
    0x55a8901a8fc0 ---------A T 03570  C1 = (64 * C1)/ N1
    0x55a8901a9140 ---------A   03580  PRINT "THAT WAS A ";
    0x55a8901b7510 ---------A   03590  IF C1 < 11 THEN 3710
    0x55a8901b7780 ---------A   03600  IF C1 < 25 THEN 3690
    0x55a8901b79f0 ---------A   03610  IF C1 < 39 THEN 3670
    0x55a8901b7c60 ---------A   03620  IF C1 < 53 THEN 3650
    0x55a8901b7dc0 ---------A   03630  PRINT " A PERFECT GAME!"
    0x55a8901b7e40 ---------A   03640  GO TO 3720
    0x55a8901b7f90 ---------A T 03650  PRINT "WALKAWAY!"
    0x55a8901b8010 ---------A   03660  GO TO 3720
    0x55a8901b8160 ---------A T 03670  PRINT "FIGHT!"
    0x55a8901b81e0 ---------A   03680  GO TO 3720
    0x55a8901b8330 ---------A T 03690  PRINT "HOT GAME!"
    0x55a8901b83b0 ---------A   03700  GO TO 3720
    0x55a8901b8500 ---------A T 03710  PRINT "SQUEAKER!"
    0x55a8901b8590 ---------A T 03720  PRINT
    0x55a8901b8720 ---------A   03730  PRINT"DO YOU WANT TO PLAY AGAIN";
    0x55a8901b8890 ---------A T 03740  INPUT X$
    0x55a8901b8b20 ---------A   03750  IF X$ = "Y" THEN 1700
    0x55a8901b8db0 ---------A   03760  IF X$ <> "N" THEN 3740
    0x55a8901b8f10 ---------A   03770  PRINT "THANKS FOR PLAYING."
    0x55a8901b8f70 ---------A   03780  STOP
    0x55a8901b8ff0 ---------B   03790  REM********		
    0x55a8901b90c0 ---------B   03800  REM********		SUBROUTINE
    0x55a8901b9160 ---------B   03810  REM********		ASSUMES
    0x55a8901b9220 ---------B   03820  REM********		I,J LOCATES A BLANK SQUARE
    0x55a8901b9300 ---------B   03830  REM********		YOU HOPE TO SEE AN ADJACENT  T2 (= -T1)
    0x55a8901b96c0 ---------B G 03840  FOR I1 =  -1 TO 1
    0x55a8901b9a70 ---------B   03850  FOR J1 = -1 TO 1
    0x55a8901ba0f0 ---------B   03860  IF  A(I+I1,J+J1) = T2 THEN 3930
    0x55a8901ba230 ---------B   03870  NEXT J1
    0x55a8901ba380 ---------B   03880  NEXT I1
    0x55a8901ba430 ---------B   03890  REM********		NO T2 FOUND
    0x55a8901ba660 ---------B   03900  F1 = 0
    0x55a8901ba6b0 ---------B   03910  RETURN
    0x55a8901ba740 ---------A   03920  REM********		SUCCESS
    0x55a8901ba970 ---------B T 03930  F1 = 1
    0x55a8901ba9c0 ---------B   03940  RETURN
    0x55a8901baa80 ---------C   03950  REM********		SUBROUTINE SCORE AND UPDATE
    0x55a8901bab20 ---------C   03960  REM********		ASSUMES;
    0x55a8901bac00 ---------C   03970  REM********		(I,J) IS A TENTATIVE PLACE FOR A PIECE T1.
    0x55a8901bace0 ---------C   03980  REM********		WANT RUNS OF T2 = -T1, TERMINATED BY A T1.
    0x55a8901badc0 ---------C   03990  REM********		IF U IS TRUE (1), MARK THOSE RUNS AS T1'S.
    0x55a8901baea0 ---------C   04000  REM********		RETURN SUM OF ALL RUNS (T2'S ONLY) IN S1.
    0x55a8901baf90 ---------C   04010  REM********		MAIN PROGRAM CONTAINS THE FOLLOWING ARRAYS
    0x55a8901bb060 ---------C   04020  REM********		I4
    0x55a8901bb130 ---------C   04030  REM********		J4
    0x55a8901bb360 ---------C G 04040  S1 = 0
    0x55a8901bb630 ---------C   04050  FOR K = 1 TO 8
    0x55a8901bba10 ---------C   04060  I5 = I4(K)
    0x55a8901bbde0 ---------C   04070  J5 = J4(K)
    0x55a8901bc1f0 ---------C   04080  I6 = I + I5
    0x55a8901bc600 ---------C   04090  J6 = J + J5
    0x55a8901bc8e0 ---------C   04100  S3 = 0
    0x55a8901bcd20 ---------C   04110  IF A(I6,J6) <> T2 THEN 4290
    0x55a8901bcdb0 ---------C   04120  REM			LOOP THROUGH THE RUN
    0x55a8901bd100 ---------C T 04130  S3 = S3 + 1
    0x55a8901bd450 ---------C   04140  I6 = I6 + I5
    0x55a8901bd7b0 ---------C   04150  J6 = J6 + J5
    0x55a8901bdbf0 ---------C   04160  IF A (I6,J6) = T1 THEN 4190
    0x55a8901be010 ---------C   04170  IF A(I6,J6) = 0 THEN 4290
    0x55a8901be090 ---------C   04180  GO TO 4130
    0x55a8901be3f0 ---------C T 04190  S1 = S1 + S3
    0x55a8901be650 ---------C   04200  IF U <> 1 THEN 4290
    0x55a8901be6d0 ---------C   04210  REM			UPDATE BOARD
    0x55a8901be920 ---------C   04220  I6 = I
    0x55a8901beb60 ---------C   04230  J6 = J
    0x55a8901bef10 ---------C   04240  FOR K1 = 0 TO S3
    0x55a8901bf310 ---------C   04250  A(I6,J6) = T1
    0x55a8901bf660 ---------C   04260  I6 = I6 + I5
    0x55a8901bf9b0 ---------C   04270  J6 = J6 + J5
    0x55a8901bfae0 ---------C   04280  NEXT K1
    0x55a8901bfc30 ---------C T 04290  NEXT K
    0x55a8901bfca0 ---------C   04300  RETURN
    0x55a8901bfd50 ---------D   04310  REM********		SUBROUTINE TO PRINT BOARD
    0x55a8901bff80 ---------D G 04320  PRINT CHR$(30)
    0x55a8901c01b0 ---------D   04330  LET L = 18
    0x55a8901c03e0 ---------D   04340  IF F9 = 1 GO TO 4370
    0x55a8901c0480 ---------D   04350  GOSUB 4570
    0x55a8901c0690 ---------D   04360  LET F9 = 1
    0x55a8901c08b0 ---------D T 04370  PRINT CHR$(30)
    0x55a8901c0a10 ---------D   04380  PRINT "    A B C D E F G H"
    0x55a8901c0cf0 ---------D   04390  FOR I = 1 TO 8
    0x55a8901c0e70 ---------D   04400  PRINT I;
    0x55a8901c1150 ---------D   04410  FOR J = 1 TO 8
    0x55a8901c12e0 ---------D   04420  PRINT " ";
    0x55a8901c1800 ---------D   04430  PRINT D$(A(I,J)+1);
    0x55a8901c1940 ---------D   04440  NEXT J
    0x55a8901c19d0 ---------D   04450  PRINT
    0x55a8901c1b10 ---------D   04460  NEXT I
    0x55a8901c1ba0 ---------D   04470  PRINT
    0x55a8901c1c00 ---------D   04480  RETURN
    0x55a8901c1ca0 ---------E G 04490  REM********		***	SPACE		***
    0x55a8901c1ed0 ---------E   04500  PRINT CHR$(30)
    0x55a8901c2290 ---------E   04510  FOR I9 = 1 TO L
    0x55a8901c2310 ---------E   04520  PRINT
    0x55a8901c2450 ---------E   04530  NEXT I9
    0x55a8901c26b0 ---------E   04540  IF L <> 18 GO TO 4560
    0x55a8901c28f0 ---------E   04550  F9 = 0
    0x55a8901c2940 ---------E T 04560  RETURN
    0x55a8901c29e0 ---------F G 04570  REM********		***	BLANK OUT	***
    0x55a8901c2a70 ---------F   04580  GOSUB 4490
    0x55a8901c2d00 ---------F   04590  PRINT TAB(60);" "
    0x55a8901c2fa0 ---------F   04600  PRINT TAB(60);" "
    0x55a8901c3000 ---------F   04610  RETURN
    0x55a8901c3060 ---------A   04620  END
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
    0x55a890190b80 ---------A   01000  REM********		OTHELLO          BYTE VOL. 2, NUMBER 10 (OCT. 1977)
    0x55a890191e70 ---------A   01010  REM********		PLAYS THE GAME OTHELLO WITH TWO STRATEGIES
    0x55a890191ff0 ---------A   01020  REM********		1. TAKE THE MAX. NUMBER OF PIECES
    0x55a8901920b0 ---------A   01030  REM********		2. ADD A BONUS FOR OUTSIDE POSITION
    0x55a8901802b0 ---------A   01040  REM********		BOARD IS THE ARRAY A, BOUNDED BY 0'S (BLANKS)
    0x55a89018f9e0 ---------A   01050  REM********		A = 0 FOR EMPTY SQUARE
    0x55a89018f7f0 ---------A   01060  REM********		A = B FOR BLACK SQUARE
    0x55a890191aa0 ---------A   01070  REM********		A = W FOR WHITE SQUARE
    0x55a890190090 ---------A   01080  REM********		I AND J ARE ALWAYS USED FOR ROW/COLUMN INDICES
    0x55a89018fe90 ---------A   01090  REM********		I1 AND J4 STORE INCREMENTS TO THE 8 NEIGHBOURS
    0x55a8901916a0 ---------A   01100  REM********		C$ AND D$ STORE CHARACTERS A-H,X,...,O FOR OUTPUT
    0x55a890197a80 ---------A   01110  DIM A(9,9),I4(8),J4(8),C$(8),D$(2)
    0x55a890197ad0 ---------A   01120  REM********		
    0x55a89018f6d0 ---------A   01130  PRINT "GREETINGS FROM OTHELLO!"
    0x55a89018f670 ---------A   01140  PRINT "DO YOU WANT INSTRUCTIONS (Y OR N)";
    0x55a890197e60 ---------A T 01150  INPUT X$
    0x55a8901980c0 ---------A   01160  IF X$ = "N" THEN 1380
    0x55a890198340 ---------A   01170  IF X$ <> "Y" THEN 1150
    0x55a8901983e0 ---------A   01180  PRINT
    0x55a890198590 ---------A   01190  PRINT "OTHELLO IS PLAYED ON AN 8X8 CHECKER BOARD"
    0x55a890198740 ---------A   01200  PRINT "ROWS ARE NUMBERED FROM 1 TO 8 AND COLUMNS FROM A TO H"
    0x55a8901988f0 ---------A   01210  PRINT" THE INITIAL CONFIGURATION IS ALL BLANK EXCEPT FOR"
    0x55a890198a50 ---------A   01220  PRINT "THE CENTER FOUR SQUARES, WHICH FORM THE PATTERN:"
    0x55a890198b90 ---------A   01230  PRINT "               O X"
    0x55a890198cf0 ---------A   01240  PRINT "               X O"
    0x55a890198da0 ---------A   01250  PRINT
    0x55a890198f60 ---------A   01260  PRINT "TRY TO PLACE YOUR PIECE SO THAT IT WILL 'OUTFLANK' MINE"
    0x55a890199110 ---------A   01270  PRINT "THEREBY CREATING A HORIZONTAL, VERTICAL, OR DIAGONAL "
    0x55a8901992c0 ---------A   01280  PRINT "RUN OF MY PIECES BOUNDED AT EACH END BY AT LEAST ONE "
    0x55a890199450 ---------A   01290  PRINT "OF YOURS.  THIS WILL 'FLIP' MY PIECES, TURNING THEM INTO"
    0x55a8901995e0 ---------A   01300  PRINT "YOURS."
    0x55a890199790 ---------A   01310  PRINT"     NOTE: YOU MUST CAPTURE AT LEAST ONE OF MY PIECES"
    0x55a890199940 ---------A   01320  PRINT "IN THIS WAY IF IT IS AT ALL POSSIBLE.  IF IT IS NOT"
    0x55a890199cf0 ---------A   01330  PRINT "POSSIBLE, YOU FORFEIT YOUR TURN BY ENTERING"
    0x55a890199e70 ---------A   01340  PRINT "     0,0   FOR YOUR ROW,COLUMN MOVE"
    0x55a890199fd0 ---------A   01350  PRINT " GOOD LUCK!"
    0x55a89019a050 ---------A   01360  PRINT
    0x55a89019a0d0 ---------A   01370  REM********		
    0x55a89019a2b0 ---------A T 01380  PRINT "SHOULD I WAIT BEFORE MAKING MY MOVES (Y OR N)";
    0x55a89019a590 ---------A   01390  F2 = 0
    0x55a89019a860 ---------A   01400  F9 = 1
    0x55a89019a9c0 ---------A T 01410  INPUT X$
    0x55a89019ac50 ---------A   01420  IF X$ = "N" THEN 1460
    0x55a89019aed0 ---------A   01430  IF X$ <> "Y" THEN  1410
    0x55a89019b120 ---------A   01440  F2 = 1
    0x55a89019b2b0 ---------A   01450  PRINT "OK.  TYPING ANY CHARACTER WILL LET ME GO"
    0x55a89019b450 ---------A T 01460  PRINT "SHOULD I PLAY MY BEST STRATEGY (Y OR N)";
    0x55a89019b730 ---------A   01470  S2 = 0
    0x55a89019b890 ---------A T 01480  INPUT X$
    0x55a89019bb20 ---------A   01490  IF X$ = "N" THEN 1520
    0x55a89019bda0 ---------A   01500  IF X$ <> "Y" THEN 1480
    0x55a89019bfc0 ---------A   01510  S2 = 2
    0x55a89019c290 ---------A T 01520  B = -1
    0x55a89019c560 ---------A   01530  W = +1
    0x55a89019c970 ---------A   01540  D$(B +1) ="X"
    0x55a89019cd60 ---------A   01550  D$(0 +1) = "."
    0x55a89019d170 ---------A   01560  D$(W + 1) ="O"
    0x55a89019d500 ---------A   01570  FOR K = 1 TO 8
    0x55a89019d740 ---------A   01580  READ I4(K)
    0x55a89019d870 ---------A   01590  NEXT K
    0x55a89019e010 ---------A   01600  DATA 0,-1,-1,-1,0,1,1,1
    0x55a89019e2e0 ---------A   01610  FOR K=1 TO 8
    0x55a89019e520 ---------A   01620  READ J4(K)
    0x55a89019e650 ---------A   01630  NEXT K
    0x55a89019edf0 ---------A   01640  DATA 1,1,0,-1,-1,-1,0,1
    0x55a89019f4d0 ---------A   01650  FOR K = 1 TO 8
    0x55a89019f710 ---------A   01660  READ C$(K)
    0x55a89019f840 ---------A   01670  NEXT K
    0x55a89019fff0 ---------A   01680  DATA A,B,C,D,E,F,G,H
    0x55a8901a0070 ---------A   01690  REM********		SET UP A NEW GAME
    0x55a8901a0420 ---------A T 01700  FOR I = 0 TO 9
    0x55a8901a07c0 ---------A   01710  FOR J = 0 TO 9
    0x55a8901a0ba0 ---------A   01720  A(I,J)=0
    0x55a8901a0cd0 ---------A   01730  NEXT J
    0x55a8901a0e20 ---------A   01740  NEXT I
    0x55a8901a11f0 ---------A   01750  A(4,4) = W
    0x55a8901a15a0 ---------A   01760  A(5,5) = W
    0x55a8901a1950 ---------A   01770  A(4,5) = B
    0x55a8901a1d00 ---------A   01780  A(5,4) = B
    0x55a8901a1fd0 ---------A   01790  C1 = 2
    0x55a8901a22a0 ---------A   01800  H1 = 2
    0x55a8901a2570 ---------A   01810  N1 = 4
    0x55a8901a2850 ---------A   01820  Z =0
    0x55a8901a28d0 ---------A   01830  REM********		HUMAN'S CHOICES
    0x55a8901a2a90 ---------A   01840  PRINT "DO YOU WANT TO HAVE X OR O";
    0x55a8901a2d90 ---------A   01850  C = W
    0x55a8901a3080 ---------A   01860  H = B
    0x55a8901a31e0 ---------A T 01870  INPUT X$
    0x55a8901a3470 ---------A   01880  IF X$ = "X" THEN 1920
    0x55a8901a36f0 ---------A   01890  IF X$ <> "O" THEN 1870
    0x55a8901a3930 ---------A   01900  C = B
    0x55a8901a3b80 ---------A   01910  H = W
    0x55a8901a3d00 ---------A T 01920  PRINT "DO YOU WANT TO GO FIRST (Y OR N)";
    0x55a8901a3e60 ---------A T 01930  INPUT X$
    0x55a8901a4090 ---------A   01940  PRINT CHR$(26)
    0x55a8901a4320 ---------A   01950  IF X$ = "N" THEN 2030
    0x55a8901a45b0 ---------A   01960  IF X$ <> "Y" THEN 1930
    0x55a8901a4640 ---------A   01970  REM********		PRINT INITIAL BOARD
    0x55a8901a46d0 ---------A   01980  GOSUB 4350
    0x55a8901a4750 ---------A   01990  GO TO 2760
    0x55a8901a47d0 ---------A   02000  REM********		COMPUTER'S MOVE
    0x55a8901a4a50 ---------A T 02010  IF F2 = 0 THEN 2030
    0x55a8901a4bb0 ---------A   02020  INPUT X$
    0x55a8901a4e90 ---------A T 02030  B1 = -1
    0x55a8901a5300 ---------A   02040  I3 = J3 = 0
    0x55a8901a55f0 ---------A   02050  T1 = C
    0x55a8901a58f0 ---------A   02060  T2 = H
    0x55a8901a5970 ---------A   02070  REM********		SCAN FOR BLANK SQUARE
    0x55a8901a5c60 ---------A   02080  FOR I = 1 TO 8
    0x55a8901a5f50 ---------A   02090  FOR J = 1 TO 8
    0x55a8901a6380 ---------A   02100  IF A(I,J) <> 0 THEN 2390
    0x55a8901a6410 ---------A   02110  REM********		FOUND A BLANK SQUARE
    0x55a8901a64f0 ---------A   02120  REM********		DOES IT HAVE AN OPPONENT AS A NEIGHBOUR
    0x55a8901a6590 ---------A   02130  GOSUB 3860
    0x55a8901a68c0 ---------A   02140  IF F1 = 0 THEN 2390
    0x55a8901a6960 ---------A   02150  REM********		FOUND OPPONENT AS NEIGHBOUR
    0x55a8901a6a30 ---------A   02160  REM********		HOW MANY OF HIS PIECES CAN WE FLIP?
    0x55a8901a6ae0 ---------A   02170  REM********		DON'T DO IT NOW
    0x55a8901a6dd0 ---------A   02180  U = -1
    0x55a8901a6e60 ---------A   02190  GOSUB 4060
    0x55a8901a6ef0 ---------A   02200  REM********		EXTRA POINTS FOR BOUNDARY POSITION
    0x55a8901a7240 ---------A   02210  IF S1 = 0 THEN 2390
    0x55a8901a7840 ---------A   02220  IF (I-1) * (I-8) <> 0 THEN 2240
    0x55a8901a7bb0 ---------A   02230  S1 = S1 + S2
    0x55a8901a81a0 ---------A T 02240  IF (J-1) * (J-8) <> 0 THEN 2270
    0x55a8901a8530 ---------A   02250  S1 = S1 +S2
    0x55a8901a85c0 ---------A   02260  REM********		IS THIS BETTER THAN THE BEST FOUND SO FAR
    0x55a8901a8870 ---------A T 02270  IF S1 < B1 THEN 2390
    0x55a8901a8b10 ---------A   02280  IF S1 > B1 THEN 2350
    0x55a8901a93b0 ---------A   02290  REM********		A TIE; RANDOM DECISION
    0x55a8901a9490 ---------A   02300  REM********		THE NEXT TWO EXECUTABLE STATEMENTS ARE FOR
    0x55a8901a9550 ---------A   02310  REM********		BASIC WITH RANDOM NUMBERS
    0x55a8901a9930 ---------A   02320  R = RND(1)
    0x55a8901a9b80 ---------A   02330  IF R > .5 THEN 2390
    0x55a8901a9c00 ---------A   02340  REM********		YES
    0x55a8901a9e50 ---------A T 02350  B1 = S1
    0x55a8901aa080 ---------A   02360  I3 = I
    0x55a8901aa2c0 ---------A   02370  J3 = J
    0x55a8901aa340 ---------A   02380  REM********		END OF SCAN LOOP
    0x55a8901aa490 ---------A T 02390  NEXT J
    0x55a8901aa5e0 ---------A   02400  NEXT I
    0x55a8901aa690 ---------A   02410  REM********		COULD WE DO ANYTHING?
    0x55a8901aa910 ---------A   02420  IF B1 > 0 THEN 2510
    0x55a8901aa990 ---------A   02430  REM********		NO
    0x55a8901aac80 ---------A   02440  LET L = 18
    0x55a8901aad10 ---------A   02450  GOSUB 4540
    0x55a8901aae70 ---------A   02460  PRINT "DAMN! HAVE TO FORFEIT MY MOVE!"
    0x55a8901ab0d0 ---------A   02470  IF Z = 1 THEN 3370
    0x55a8901ab2f0 ---------A   02480  Z = 1
    0x55a8901ab370 ---------A   02490  GO TO 2760
    0x55a8901ab3f0 ---------A   02500  REM********		MAKE THE MOVE
    0x55a8901ab620 ---------A T 02510  Z = 0
    0x55a8901ab830 ---------A   02520  LET L=15
    0x55a8901ab8b0 ---------A   02530  GOSUB 4540
    0x55a8901aba20 ---------A   02540  PRINT "I WILL MOVE TO ";
    0x55a8901abba0 ---------A   02550  PRINT I3;
    0x55a8901abd20 ---------A   02560  PRINT " , ";
    0x55a8901abf60 ---------A   02570  PRINT C$(J3)
    0x55a8901ac1a0 ---------A   02580  I= I3
    0x55a8901ac3d0 ---------A   02590  J= J3
    0x55a8901ac5e0 ---------A   02600  U= 1
    0x55a8901ac650 ---------A   02610  GOSUB 4060
    0x55a8901acaa0 ---------A   02620  C1 = C1 + S1 + 1
    0x55a8901acdf0 ---------A   02630  H1 = H1 - S1
    0x55a8901ad120 ---------A   02640  N1 = N1 + 1
    0x55a8901ad330 ---------A   02650  LET L=16
    0x55a8901ad3b0 ---------A   02660  GOSUB 4540
    0x55a8901ad520 ---------A   02670  PRINT " THAT GIVES ME : ";
    0x55a8901ad6b0 ---------A   02680  PRINT S1;
    0x55a8901ad820 ---------A   02690  PRINT " OF YOUR PIECES"
    0x55a8901ad8b0 ---------A   02700  REM********		PRINT OUT BOARD
    0x55a8901ad950 ---------A   02710  GOSUB 4350
    0x55a8901ad9d0 ---------A   02720  REM********		TEST FOR END OF GAME
    0x55a8901adc60 ---------A   02730  IF H1 = 0 THEN 3370
    0x55a8901aded0 ---------A   02740  IF N1 = 64 THEN 3370
    0x55a8901adf60 ---------A   02750  REM********		HUMANS MOVE
    0x55a8901ae1b0 ---------A T 02760  T1 = H
    0x55a8901ae3e0 ---------A   02770  T2 = C
    0x55a8901ae5f0 ---------A   02780  LET L = 12
    0x55a8901ae670 ---------A   02790  GOSUB 4540
    0x55a8901ae7e0 ---------A T 02800  PRINT " YOUR MOVE";
    0x55a8901aea20 ---------A T 02810  INPUT I, X$
    0x55a8901aec80 ---------A   02820  IF I < 0 THEN 2810
    0x55a8901aeef0 ---------A   02830  IF I > 8 THEN 2810
    0x55a8901af150 ---------A   02840  IF I <> 0 THEN 2930
    0x55a8901af370 ---------A   02850  LET L = 18
    0x55a8901af400 ---------A   02860  GOSUB 4540
    0x55a8901af560 ---------A   02870  PRINT "ARE YOU FORFEITING YOUR TURN Y OR N"
    0x55a8901af6d0 ---------A   02880  INPUT X$
    0x55a8901af950 ---------A   02890  IF X$ <> "Y" THEN 2800
    0x55a8901afbb0 ---------A   02900  IF Z = 1 THEN 3370
    0x55a8901afdd0 ---------A   02910  Z = 1
    0x55a8901afe40 ---------A   02920  GO TO 2010
    0x55a8901b0120 ---------A T 02930  FOR J = 1 TO 8
    0x55a8901b0480 ---------A   02940  IF C$(J) =X$ THEN 2980
    0x55a8901b05c0 ---------A   02950  NEXT J
    0x55a8901b0660 ---------A   02960  GO TO 2810
    0x55a8901b06e0 ---------A   02970  REM********		CHECK FOR BLANK
    0x55a8901b0b20 ---------A T 02980  IF A(I,J) = 0 THEN 3040
    0x55a8901b0d40 ---------A   02990  LET L = 18
    0x55a8901b0dd0 ---------A   03000  GOSUB 4540
    0x55a8901b0f40 ---------A   03010  PRINT "SORRY, THAT SQUARE IS OCCUPIED, TRY AGAIN"
    0x55a8901b0fe0 ---------A   03020  GO TO 2810
    0x55a8901b1060 ---------A   03030  REM********		CHECK FOR LEGAL NEIGHBOUR
    0x55a8901b1100 ---------A T 03040  GOSUB 3860
    0x55a8901b1350 ---------A   03050  IF F1 = 1 THEN 3110
    0x55a8901b1570 ---------A   03060  LET L = 18
    0x55a8901b1610 ---------A   03070  GOSUB 4540
    0x55a8901b17b0 ---------A   03080  PRINT "SORRY, YOU ARE NOT NEXT TO ONE OF MY PIECES. TRY AGAIN.";
    0x55a8901b1840 ---------A   03090  GO TO 2810
    0x55a8901b18c0 ---------A   03100  REM********		CHECK IF LEGAL RUN
    0x55a8901b1af0 ---------A T 03110  U = -1
    0x55a8901b1b70 ---------A   03120  GOSUB 4060
    0x55a8901b1dc0 ---------A   03130  IF S1 > 0 THEN 3190
    0x55a8901b1fe0 ---------A   03140  LET L = 18
    0x55a8901b2070 ---------A   03150  GOSUB 4540
    0x55a8901b21e0 ---------A   03160  PRINT "SORRY, THAT DOESN'T FLANK A ROW, TRY AGAIN"
    0x55a8901b2280 ---------A   03170  GO TO 2810
    0x55a8901b2310 ---------A   03180  REM********		EVERYTHING LEGAL; MAKE HUMANS MOVE
    0x55a8901b2540 ---------A T 03190  Z = 0
    0x55a8901b2750 ---------A   03200  LET L = 13
    0x55a8901b27d0 ---------A   03210  GOSUB 4540
    0x55a8901b2940 ---------A   03220  PRINT "THAT GIVES YOU";
    0x55a8901b2ad0 ---------A   03230  PRINT S1;
    0x55a8901b2c30 ---------A   03240  PRINT " OF MY PIECES"
    0x55a8901b2e50 ---------A   03250  U = 1
    0x55a8901b2ec0 ---------A   03260  GOSUB 4060
    0x55a8901b3310 ---------A   03270  H1 = H1 + S1 + 1
    0x55a8901b3660 ---------A   03280  C1 = C1 -S1
    0x55a8901b39a0 ---------A   03290  N1 = N1 + 1
    0x55a8901b3a20 ---------A   03300  REM********		PRINT OUT BOARD
    0x55a8901b3ac0 ---------A   03310  GOSUB 4350
    0x55a8901b3b40 ---------A   03320  REM********		TEST FOR END OF GAME
    0x55a8901b3dd0 ---------A   03330  IF C1 = 0 THEN 3370
    0x55a8901b4030 ---------A   03340  IF N1 = 64 THEN 3370
    0x55a8901b40c0 ---------A   03350  GO TO 2010
    0x55a8901b4140 ---------A   03360  REM********		END OF GAME ; WRAPUP
    0x55a8901b4370 ---------A T 03370  LET L = 18
    0x55a8901b4400 ---------A   03380  GOSUB 4540
    0x55a8901b4560 ---------A   03390  PRINT "FOR RESULTS ON GAME TYPE RETURN!!"
    0x55a8901b46d0 ---------A   03400  INPUT X$
    0x55a8901b4ab0 ---------A   03410  PRINT CHR$(30),CHR$(26)
    0x55a8901b4c30 ---------A   03420  PRINT "YOU HAVE ";
    0x55a8901b4dc0 ---------A   03430  PRINT H1;
    0x55a8901b4f40 ---------A   03440  PRINT " PIECES, AND I HAVE ";
    0x55a8901b50d0 ---------A   03450  PRINT C1;
    0x55a8901b5240 ---------A   03460  PRINT " PIECES--- "
    0x55a8901b54d0 ---------A   03470  IF H1 = C1 THEN 3510
    0x55a8901b5760 ---------A   03480  IF H1 > C1 THEN 3530
    0x55a8901b58d0 ---------A   03490  PRINT "SORRY, I WON THAT ONE."
    0x55a8901b5960 ---------A   03500  GO TO 3540
    0x55a8901b5ab0 ---------A T 03510  PRINT " A TIE!!!!!"
    0x55a8901b5b30 ---------A   03520  GO TO 3720
    0x55a8901b5c80 ---------A T 03530  PRINT "YOU WON!!!"
    0x55a8901b5ff0 ---------A T 03540  C1 = C1 - H1
    0x55a8901b6240 ---------A   03550  IF C1 > 0 THEN 3570
    0x55a8901b6480 ---------A   03560  C1 = -C1
    0x55a8901a8fc0 ---------A T 03570  C1 = (64 * C1)/ N1
    0x55a8901a9140 ---------A   03580  PRINT "THAT WAS A ";
    0x55a8901b7510 ---------A   03590  IF C1 < 11 THEN 3710
    0x55a8901b7780 ---------A   03600  IF C1 < 25 THEN 3690
    0x55a8901b79f0 ---------A   03610  IF C1 < 39 THEN 3670
    0x55a8901b7c60 ---------A   03620  IF C1 < 53 THEN 3650
    0x55a8901b7dc0 ---------A   03630  PRINT " A PERFECT GAME!"
    0x55a8901b7e40 ---------A   03640  GO TO 3720
    0x55a8901b7f90 ---------A T 03650  PRINT "WALKAWAY!"
    0x55a8901b8010 ---------A   03660  GO TO 3720
    0x55a8901b8160 ---------A T 03670  PRINT "FIGHT!"
    0x55a8901b81e0 ---------A   03680  GO TO 3720
    0x55a8901b8330 ---------A T 03690  PRINT "HOT GAME!"
    0x55a8901b83b0 ---------A   03700  GO TO 3720
    0x55a8901b8500 ---------A T 03710  PRINT "SQUEAKER!"
    0x55a8901b8590 ---------A T 03720  PRINT
    0x55a8901b8720 ---------A   03730  PRINT"DO YOU WANT TO PLAY AGAIN";
    0x55a8901b8890 ---------A T 03740  INPUT X$
    0x55a8901b8b20 ---------A   03750  IF X$ = "Y" THEN 1700
    0x55a8901b8db0 ---------A   03760  IF X$ <> "N" THEN 3740
    0x55a8901b8f10 ---------A   03770  PRINT "THANKS FOR PLAYING."
    0x55a8901b8f70 ---------A   03780  STOP
    0x55a8901ba740 ---------A   03790  REM********		SUCCESS
    0x55a8901c3060 ---------A   03800  END
    0x55a8901b8ff0 ---------B   03810  REM********		
    0x55a8901b90c0 ---------B   03820  REM********		SUBROUTINE
    0x55a8901b9160 ---------B   03830  REM********		ASSUMES
    0x55a8901b9220 ---------B   03840  REM********		I,J LOCATES A BLANK SQUARE
    0x55a8901b9300 ---------B   03850  REM********		YOU HOPE TO SEE AN ADJACENT  T2 (= -T1)
    0x55a8901b96c0 ---------B G 03860  FOR I1 =  -1 TO 1
    0x55a8901b9a70 ---------B   03870  FOR J1 = -1 TO 1
    0x55a8901ba0f0 ---------B   03880  IF  A(I+I1,J+J1) = T2 THEN 3940
    0x55a8901ba230 ---------B   03890  NEXT J1
    0x55a8901ba380 ---------B   03900  NEXT I1
    0x55a8901ba430 ---------B   03910  REM********		NO T2 FOUND
    0x55a8901ba660 ---------B   03920  F1 = 0
    0x55a8901d86a0 ---------B   03930  GOTO 03960
    0x55a8901ba970 ---------B T 03940  F1 = 1
    0x55a8901d8710 ---------B   03950  GOTO 03960
    0x55a8901d8780 ---------B T 03960  RETURN
    0x55a8901baa80 ---------C   03970  REM********		SUBROUTINE SCORE AND UPDATE
    0x55a8901bab20 ---------C   03980  REM********		ASSUMES;
    0x55a8901bac00 ---------C   03990  REM********		(I,J) IS A TENTATIVE PLACE FOR A PIECE T1.
    0x55a8901bace0 ---------C   04000  REM********		WANT RUNS OF T2 = -T1, TERMINATED BY A T1.
    0x55a8901badc0 ---------C   04010  REM********		IF U IS TRUE (1), MARK THOSE RUNS AS T1'S.
    0x55a8901baea0 ---------C   04020  REM********		RETURN SUM OF ALL RUNS (T2'S ONLY) IN S1.
    0x55a8901baf90 ---------C   04030  REM********		MAIN PROGRAM CONTAINS THE FOLLOWING ARRAYS
    0x55a8901bb060 ---------C   04040  REM********		I4
    0x55a8901bb130 ---------C   04050  REM********		J4
    0x55a8901bb360 ---------C G 04060  S1 = 0
    0x55a8901bb630 ---------C   04070  FOR K = 1 TO 8
    0x55a8901bba10 ---------C   04080  I5 = I4(K)
    0x55a8901bbde0 ---------C   04090  J5 = J4(K)
    0x55a8901bc1f0 ---------C   04100  I6 = I + I5
    0x55a8901bc600 ---------C   04110  J6 = J + J5
    0x55a8901bc8e0 ---------C   04120  S3 = 0
    0x55a8901bcd20 ---------C   04130  IF A(I6,J6) <> T2 THEN 4310
    0x55a8901bcdb0 ---------C   04140  REM			LOOP THROUGH THE RUN
    0x55a8901bd100 ---------C T 04150  S3 = S3 + 1
    0x55a8901bd450 ---------C   04160  I6 = I6 + I5
    0x55a8901bd7b0 ---------C   04170  J6 = J6 + J5
    0x55a8901bdbf0 ---------C   04180  IF A (I6,J6) = T1 THEN 4210
    0x55a8901be010 ---------C   04190  IF A(I6,J6) = 0 THEN 4310
    0x55a8901be090 ---------C   04200  GO TO 4150
    0x55a8901be3f0 ---------C T 04210  S1 = S1 + S3
    0x55a8901be650 ---------C   04220  IF U <> 1 THEN 4310
    0x55a8901be6d0 ---------C   04230  REM			UPDATE BOARD
    0x55a8901be920 ---------C   04240  I6 = I
    0x55a8901beb60 ---------C   04250  J6 = J
    0x55a8901bef10 ---------C   04260  FOR K1 = 0 TO S3
    0x55a8901bf310 ---------C   04270  A(I6,J6) = T1
    0x55a8901bf660 ---------C   04280  I6 = I6 + I5
    0x55a8901bf9b0 ---------C   04290  J6 = J6 + J5
    0x55a8901bfae0 ---------C   04300  NEXT K1
    0x55a8901bfc30 ---------C T 04310  NEXT K
    0x55a8901d87e0 ---------C   04320  GOTO 04330
    0x55a8901d8850 ---------C T 04330  RETURN
    0x55a8901bfd50 ---------D   04340  REM********		SUBROUTINE TO PRINT BOARD
    0x55a8901bff80 ---------D G 04350  PRINT CHR$(30)
    0x55a8901c01b0 ---------D   04360  LET L = 18
    0x55a8901c03e0 ---------D   04370  IF F9 = 1 GO TO 4400
    0x55a8901c0480 ---------D   04380  GOSUB 4630
    0x55a8901c0690 ---------D   04390  LET F9 = 1
    0x55a8901c08b0 ---------D T 04400  PRINT CHR$(30)
    0x55a8901c0a10 ---------D   04410  PRINT "    A B C D E F G H"
    0x55a8901c0cf0 ---------D   04420  FOR I = 1 TO 8
    0x55a8901c0e70 ---------D   04430  PRINT I;
    0x55a8901c1150 ---------D   04440  FOR J = 1 TO 8
    0x55a8901c12e0 ---------D   04450  PRINT " ";
    0x55a8901c1800 ---------D   04460  PRINT D$(A(I,J)+1);
    0x55a8901c1940 ---------D   04470  NEXT J
    0x55a8901c19d0 ---------D   04480  PRINT
    0x55a8901c1b10 ---------D   04490  NEXT I
    0x55a8901c1ba0 ---------D   04500  PRINT
    0x55a8901d88b0 ---------D   04510  GOTO 04520
    0x55a8901d8920 ---------D T 04520  RETURN
    0x55a8901c1ca0 ---------E   04530  REM********		***	SPACE		***
    0x55a8901c1ed0 ---------E G 04540  PRINT CHR$(30)
    0x55a8901c2290 ---------E   04550  FOR I9 = 1 TO L
    0x55a8901c2310 ---------E   04560  PRINT
    0x55a8901c2450 ---------E   04570  NEXT I9
    0x55a8901c26b0 ---------E   04580  IF L <> 18 GO TO 4600
    0x55a8901c28f0 ---------E   04590  F9 = 0
    0x55a8901d8980 ---------E T 04600  GOTO 04610
    0x55a8901d89f0 ---------E T 04610  RETURN
    0x55a8901c29e0 ---------F   04620  REM********		***	BLANK OUT	***
    0x55a8901c2a70 ---------F G 04630  GOSUB 4540
    0x55a8901c2d00 ---------F   04640  PRINT TAB(60);" "
    0x55a8901c2fa0 ---------F   04650  PRINT TAB(60);" "
    0x55a8901d8a50 ---------F   04660  GOTO 04670
    0x55a8901d8ac0 ---------F T 04670  RETURN
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
    // 03820 REM********		SUBROUTINE
    // 03830 REM********		ASSUMES
    // 03840 REM********		I,J LOCATES A BLANK SQUARE
    // 03850 REM********		YOU HOPE TO SEE AN ADJACENT  T2 (= -T1)

void Routine_03860(){
    // 03860 FOR I1 =  -1 TO 1
    for(I1_int=-1;I1_int<=1;I1_int++){
        // 03870 FOR J1 = -1 TO 1
        for(J1_int=-1;J1_int<=1;J1_int++){
            // 03880 IF  A(I+I1,J+J1) = T2 THEN 3940
            if(A_int_arr[I_int+I1_int][J_int+J1_int]==T2_int)goto Lbl_03940;
            // 03890 NEXT J1
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
    // 04030 REM********		MAIN PROGRAM CONTAINS THE FOLLOWING ARRAYS
    // 04040 REM********		I4
    // 04050 REM********		J4

void Routine_04060(){
    // 04060 S1 = 0
    S1_int = 0;
    // 04070 FOR K = 1 TO 8
    for(K_int=1;K_int<=8;K_int++){
        // 04080 I5 = I4(K)
        I5_int = I4_int_arr[K_int];
        // 04090 J5 = J4(K)
        J5_int = J4_int_arr[K_int];
        // 04100 I6 = I + I5
        I6_int = I_int+I5_int;
        // 04110 J6 = J + J5
        J6_int = J_int+J5_int;
        // 04120 S3 = 0
        S3_int = 0;
        // 04130 IF A(I6,J6) <> T2 THEN 4310
        if(A_int_arr[I6_int][J6_int]!=T2_int)goto Lbl_04310;
        // 04140 REM			LOOP THROUGH THE RUN

  Lbl_04150:
        // 04150 S3 = S3 + 1
        S3_int = S3_int+1;
        // 04160 I6 = I6 + I5
        I6_int = I6_int+I5_int;
        // 04170 J6 = J6 + J5
        J6_int = J6_int+J5_int;
        // 04180 IF A (I6,J6) = T1 THEN 4210
        if(A_int_arr[I6_int][J6_int]==T1_int)goto Lbl_04210;
        // 04190 IF A(I6,J6) = 0 THEN 4310
        if(A_int_arr[I6_int][J6_int]==0)goto Lbl_04310;
        // 04200 GO TO 4150
        goto Lbl_04150;

  Lbl_04210:
        // 04210 S1 = S1 + S3
        S1_int = S1_int+S3_int;
        // 04220 IF U <> 1 THEN 4310
        if(U_int!=1)goto Lbl_04310;
        // 04230 REM			UPDATE BOARD
        // 04240 I6 = I
        I6_int = I_int;
        // 04250 J6 = J
        J6_int = J_int;
        // 04260 FOR K1 = 0 TO S3
        for(K1_int=0;K1_int<=S3_int;K1_int++){
            // 04270 A(I6,J6) = T1
            A_int_arr[I6_int][J6_int] = T1_int;
            // 04280 I6 = I6 + I5
            I6_int = I6_int+I5_int;
            // 04290 J6 = J6 + J5
            J6_int = J6_int+J5_int;
            // 04300 NEXT K1
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(30));strcat(buf,"\n");fputs(buf,fh); };
    // 04360 LET L = 18
    L_int = 18;
    // 04370 IF F9 = 1 GO TO 4400
    if(F9_int==1)goto Lbl_04400;
    // 04380 GOSUB 4630
    Routine_04630();
    // 04390 LET F9 = 1
    F9_int = 1;

  Lbl_04400:
    // 04400 PRINT CHR$(30)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(30));strcat(buf,"\n");fputs(buf,fh); };
    // 04410 PRINT "    A B C D E F G H"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    A B C D E F G H");strcat(buf,"\n");fputs(buf,fh); };
    // 04420 FOR I = 1 TO 8
    for(I_int=1;I_int<=8;I_int++){
        // 04430 PRINT I;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,I_int);fputs(buf,fh); };
        // 04440 FOR J = 1 TO 8
        for(J_int=1;J_int<=8;J_int++){
            // 04450 PRINT " ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
            // 04460 PRINT D$(A(I,J)+1);
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,D_str_arr[A_int_arr[I_int][J_int]+1]);fputs(buf,fh); };
            // 04470 NEXT J
            int dummy_4470=0; // Ignore this line.
        }; // End-For(J_int)
        // 04480 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 04490 NEXT I
        int dummy_4490=0; // Ignore this line.
    }; // End-For(I_int)
    // 04500 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(30));strcat(buf,"\n");fputs(buf,fh); };
    // 04550 FOR I9 = 1 TO L
    for(I9_int=1;I9_int<=L_int;I9_int++){
        // 04560 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 04570 NEXT I9
        int dummy_4570=0; // Ignore this line.
    }; // End-For(I9_int)
    // 04580 IF L <> 18 GO TO 4600
    if(L_int!=18)goto Lbl_04600;
    // 04590 F9 = 0
    F9_int = 0;

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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,60);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 04650 PRINT TAB(60);" "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,60);strcat(buf," ");strcat(buf,"\n");fputs(buf,fh); };
    // 04660 GOTO 04670
    goto Lbl_04670;

  Lbl_04670:
    // 04670 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM********		OTHELLO          BYTE VOL. 2, NUMBER 10 (OCT. 1977)
    // 01010 REM********		PLAYS THE GAME OTHELLO WITH TWO STRATEGIES
    // 01020 REM********		1. TAKE THE MAX. NUMBER OF PIECES
    // 01030 REM********		2. ADD A BONUS FOR OUTSIDE POSITION
    // 01040 REM********		BOARD IS THE ARRAY A, BOUNDED BY 0'S (BLANKS)
    // 01050 REM********		A = 0 FOR EMPTY SQUARE
    // 01060 REM********		A = B FOR BLACK SQUARE
    // 01070 REM********		A = W FOR WHITE SQUARE
    // 01080 REM********		I AND J ARE ALWAYS USED FOR ROW/COLUMN INDICES
    // 01090 REM********		I1 AND J4 STORE INCREMENTS TO THE 8 NEIGHBOURS
    // 01100 REM********		C$ AND D$ STORE CHARACTERS A-H,X,...,O FOR OUTPUT
    // 01110 DIM A(9,9),I4(8),J4(8),C$(8),D$(2)
    // 01120 REM********		
    // 01130 PRINT "GREETINGS FROM OTHELLO!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GREETINGS FROM OTHELLO!");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "DO YOU WANT INSTRUCTIONS (Y OR N)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT INSTRUCTIONS (Y OR N)");fputs(buf,fh); };

  Lbl_01150:
    // 01150 INPUT X$
    // Start of Basic INPUT statement 01150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160 IF X$ = "N" THEN 1380
    if(strcmp(X_str,"N")==0)goto Lbl_01380;
    // 01170 IF X$ <> "Y" THEN 1150
    if(strcmp(X_str,"Y")!=0)goto Lbl_01150;
    // 01180 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT "OTHELLO IS PLAYED ON AN 8X8 CHECKER BOARD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OTHELLO IS PLAYED ON AN 8X8 CHECKER BOARD");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "ROWS ARE NUMBERED FROM 1 TO 8 AND COLUMNS FROM A TO H"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ROWS ARE NUMBERED FROM 1 TO 8 AND COLUMNS FROM A TO H");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT" THE INITIAL CONFIGURATION IS ALL BLANK EXCEPT FOR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THE INITIAL CONFIGURATION IS ALL BLANK EXCEPT FOR");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "THE CENTER FOUR SQUARES, WHICH FORM THE PATTERN:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CENTER FOUR SQUARES, WHICH FORM THE PATTERN:");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "               O X"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"               O X");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "               X O"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"               X O");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "TRY TO PLACE YOUR PIECE SO THAT IT WILL 'OUTFLANK' MINE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY TO PLACE YOUR PIECE SO THAT IT WILL 'OUTFLANK' MINE");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "THEREBY CREATING A HORIZONTAL, VERTICAL, OR DIAGONAL "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THEREBY CREATING A HORIZONTAL, VERTICAL, OR DIAGONAL ");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT "RUN OF MY PIECES BOUNDED AT EACH END BY AT LEAST ONE "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RUN OF MY PIECES BOUNDED AT EACH END BY AT LEAST ONE ");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT "OF YOURS.  THIS WILL 'FLIP' MY PIECES, TURNING THEM INTO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF YOURS.  THIS WILL 'FLIP' MY PIECES, TURNING THEM INTO");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT "YOURS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOURS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 PRINT"     NOTE: YOU MUST CAPTURE AT LEAST ONE OF MY PIECES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     NOTE: YOU MUST CAPTURE AT LEAST ONE OF MY PIECES");strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT "IN THIS WAY IF IT IS AT ALL POSSIBLE.  IF IT IS NOT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN THIS WAY IF IT IS AT ALL POSSIBLE.  IF IT IS NOT");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT "POSSIBLE, YOU FORFEIT YOUR TURN BY ENTERING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"POSSIBLE, YOU FORFEIT YOUR TURN BY ENTERING");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT "     0,0   FOR YOUR ROW,COLUMN MOVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     0,0   FOR YOUR ROW,COLUMN MOVE");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT " GOOD LUCK!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," GOOD LUCK!");strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01370 REM********		

  Lbl_01380:
    // 01380 PRINT "SHOULD I WAIT BEFORE MAKING MY MOVES (Y OR N)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOULD I WAIT BEFORE MAKING MY MOVES (Y OR N)");fputs(buf,fh); };
    // 01390 F2 = 0
    F2_int = 0;
    // 01400 F9 = 1
    F9_int = 1;

  Lbl_01410:
    // 01410 INPUT X$
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
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01410
    // 01420 IF X$ = "N" THEN 1460
    if(strcmp(X_str,"N")==0)goto Lbl_01460;
    // 01430 IF X$ <> "Y" THEN  1410
    if(strcmp(X_str,"Y")!=0)goto Lbl_01410;
    // 01440 F2 = 1
    F2_int = 1;
    // 01450 PRINT "OK.  TYPING ANY CHARACTER WILL LET ME GO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OK.  TYPING ANY CHARACTER WILL LET ME GO");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01460:
    // 01460 PRINT "SHOULD I PLAY MY BEST STRATEGY (Y OR N)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOULD I PLAY MY BEST STRATEGY (Y OR N)");fputs(buf,fh); };
    // 01470 S2 = 0
    S2_int = 0;

  Lbl_01480:
    // 01480 INPUT X$
    // Start of Basic INPUT statement 01480
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01480
    // 01490 IF X$ = "N" THEN 1520
    if(strcmp(X_str,"N")==0)goto Lbl_01520;
    // 01500 IF X$ <> "Y" THEN 1480
    if(strcmp(X_str,"Y")!=0)goto Lbl_01480;
    // 01510 S2 = 2
    S2_int = 2;

  Lbl_01520:
    // 01520 B = -1
    B_int = -1;
    // 01530 W = +1
    W_int = 1;
    // 01540 D$(B +1) ="X"
    GLBpStr="X";
    D_str_arr[B_int+1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01550 D$(0 +1) = "."
    GLBpStr=".";
    D_str_arr[0+1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01560 D$(W + 1) ="O"
    GLBpStr="O";
    D_str_arr[W_int+1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01570 FOR K = 1 TO 8
    for(K_int=1;K_int<=8;K_int++){
        // 01580 READ I4(K)
        I4_int_arr[K_int] = Get_Data_Int();
        // 01590 NEXT K
        int dummy_1590=0; // Ignore this line.
    }; // End-For(K_int)
    // 01600 DATA 0,-1,-1,-1,0,1,1,1
    // 01610 FOR K=1 TO 8
    for(K_int=1;K_int<=8;K_int++){
        // 01620 READ J4(K)
        J4_int_arr[K_int] = Get_Data_Int();
        // 01630 NEXT K
        int dummy_1630=0; // Ignore this line.
    }; // End-For(K_int)
    // 01640 DATA 1,1,0,-1,-1,-1,0,1
    // 01650 FOR K = 1 TO 8
    for(K_int=1;K_int<=8;K_int++){
        // 01660 READ C$(K)
        C_str_arr[K_int] = Get_Data_String();
        // 01670 NEXT K
        int dummy_1670=0; // Ignore this line.
    }; // End-For(K_int)
    // 01680 DATA A,B,C,D,E,F,G,H
    // 01690 REM********		SET UP A NEW GAME

  Lbl_01700:
    // 01700 FOR I = 0 TO 9
    for(I_int=0;I_int<=9;I_int++){
        // 01710 FOR J = 0 TO 9
        for(J_int=0;J_int<=9;J_int++){
            // 01720 A(I,J)=0
            A_int_arr[I_int][J_int] = 0;
            // 01730 NEXT J
            int dummy_1730=0; // Ignore this line.
        }; // End-For(J_int)
        // 01740 NEXT I
        int dummy_1740=0; // Ignore this line.
    }; // End-For(I_int)
    // 01750 A(4,4) = W
    A_int_arr[4][4] = W_int;
    // 01760 A(5,5) = W
    A_int_arr[5][5] = W_int;
    // 01770 A(4,5) = B
    A_int_arr[4][5] = B_int;
    // 01780 A(5,4) = B
    A_int_arr[5][4] = B_int;
    // 01790 C1 = 2
    C1_int = 2;
    // 01800 H1 = 2
    H1_int = 2;
    // 01810 N1 = 4
    N1_int = 4;
    // 01820 Z =0
    Z_int = 0;
    // 01830 REM********		HUMAN'S CHOICES
    // 01840 PRINT "DO YOU WANT TO HAVE X OR O";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO HAVE X OR O");fputs(buf,fh); };
    // 01850 C = W
    C_int = W_int;
    // 01860 H = B
    H_int = B_int;

  Lbl_01870:
    // 01870 INPUT X$
    // Start of Basic INPUT statement 01870
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01870
    // 01880 IF X$ = "X" THEN 1920
    if(strcmp(X_str,"X")==0)goto Lbl_01920;
    // 01890 IF X$ <> "O" THEN 1870
    if(strcmp(X_str,"O")!=0)goto Lbl_01870;
    // 01900 C = B
    C_int = B_int;
    // 01910 H = W
    H_int = W_int;

  Lbl_01920:
    // 01920 PRINT "DO YOU WANT TO GO FIRST (Y OR N)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO GO FIRST (Y OR N)");fputs(buf,fh); };

  Lbl_01930:
    // 01930 INPUT X$
    // Start of Basic INPUT statement 01930
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01930
    // 01940 PRINT CHR$(26)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(26));strcat(buf,"\n");fputs(buf,fh); };
    // 01950 IF X$ = "N" THEN 2030
    if(strcmp(X_str,"N")==0)goto Lbl_02030;
    // 01960 IF X$ <> "Y" THEN 1930
    if(strcmp(X_str,"Y")!=0)goto Lbl_01930;
    // 01970 REM********		PRINT INITIAL BOARD
    // 01980 GOSUB 4350
    Routine_04350();
    // 01990 GO TO 2760
    goto Lbl_02760;
    // 02000 REM********		COMPUTER'S MOVE

  Lbl_02010:
    // 02010 IF F2 = 0 THEN 2030
    if(F2_int==0)goto Lbl_02030;
    // 02020 INPUT X$
    // Start of Basic INPUT statement 02020
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02020

  Lbl_02030:
    // 02030 B1 = -1
    B1_int = -1;
    // 02040 I3 = J3 = 0
    J3_int = I3_int = 0;
    // 02050 T1 = C
    T1_int = C_int;
    // 02060 T2 = H
    T2_int = H_int;
    // 02070 REM********		SCAN FOR BLANK SQUARE
    // 02080 FOR I = 1 TO 8
    for(I_int=1;I_int<=8;I_int++){
        // 02090 FOR J = 1 TO 8
        for(J_int=1;J_int<=8;J_int++){
            // 02100 IF A(I,J) <> 0 THEN 2390
            if(A_int_arr[I_int][J_int]!=0)goto Lbl_02390;
            // 02110 REM********		FOUND A BLANK SQUARE
            // 02120 REM********		DOES IT HAVE AN OPPONENT AS A NEIGHBOUR
            // 02130 GOSUB 3860
            Routine_03860();
            // 02140 IF F1 = 0 THEN 2390
            if(F1_int==0)goto Lbl_02390;
            // 02150 REM********		FOUND OPPONENT AS NEIGHBOUR
            // 02160 REM********		HOW MANY OF HIS PIECES CAN WE FLIP?
            // 02170 REM********		DON'T DO IT NOW
            // 02180 U = -1
            U_int = -1;
            // 02190 GOSUB 4060
            Routine_04060();
            // 02200 REM********		EXTRA POINTS FOR BOUNDARY POSITION
            // 02210 IF S1 = 0 THEN 2390
            if(S1_int==0)goto Lbl_02390;
            // 02220 IF (I-1) * (I-8) <> 0 THEN 2240
            if((I_int-1)*(I_int-8)!=0)goto Lbl_02240;
            // 02230 S1 = S1 + S2
            S1_int = S1_int+S2_int;

  Lbl_02240:
            // 02240 IF (J-1) * (J-8) <> 0 THEN 2270
            if((J_int-1)*(J_int-8)!=0)goto Lbl_02270;
            // 02250 S1 = S1 +S2
            S1_int = S1_int+S2_int;
            // 02260 REM********		IS THIS BETTER THAN THE BEST FOUND SO FAR

  Lbl_02270:
            // 02270 IF S1 < B1 THEN 2390
            if(S1_int<B1_int)goto Lbl_02390;
            // 02280 IF S1 > B1 THEN 2350
            if(S1_int>B1_int)goto Lbl_02350;
            // 02290 REM********		A TIE; RANDOM DECISION
            // 02300 REM********		THE NEXT TWO EXECUTABLE STATEMENTS ARE FOR
            // 02310 REM********		BASIC WITH RANDOM NUMBERS
            // 02320 R = RND(1)
            R_int = RND(1);
            // 02330 IF R > .5 THEN 2390
            if(R_int>0.5)goto Lbl_02390;
            // 02340 REM********		YES

  Lbl_02350:
            // 02350 B1 = S1
            B1_int = S1_int;
            // 02360 I3 = I
            I3_int = I_int;
            // 02370 J3 = J
            J3_int = J_int;
            // 02380 REM********		END OF SCAN LOOP

  Lbl_02390:
            // 02390 NEXT J
            int dummy_2390=0; // Ignore this line.
        }; // End-For(J_int)
        // 02400 NEXT I
        int dummy_2400=0; // Ignore this line.
    }; // End-For(I_int)
    // 02410 REM********		COULD WE DO ANYTHING?
    // 02420 IF B1 > 0 THEN 2510
    if(B1_int>0)goto Lbl_02510;
    // 02430 REM********		NO
    // 02440 LET L = 18
    L_int = 18;
    // 02450 GOSUB 4540
    Routine_04540();
    // 02460 PRINT "DAMN! HAVE TO FORFEIT MY MOVE!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DAMN! HAVE TO FORFEIT MY MOVE!");strcat(buf,"\n");fputs(buf,fh); };
    // 02470 IF Z = 1 THEN 3370
    if(Z_int==1)goto Lbl_03370;
    // 02480 Z = 1
    Z_int = 1;
    // 02490 GO TO 2760
    goto Lbl_02760;
    // 02500 REM********		MAKE THE MOVE

  Lbl_02510:
    // 02510 Z = 0
    Z_int = 0;
    // 02520 LET L=15
    L_int = 15;
    // 02530 GOSUB 4540
    Routine_04540();
    // 02540 PRINT "I WILL MOVE TO ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WILL MOVE TO ");fputs(buf,fh); };
    // 02550 PRINT I3;
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,I3_int);fputs(buf,fh); };
    // 02560 PRINT " , ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," , ");fputs(buf,fh); };
    // 02570 PRINT C$(J3)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,C_str_arr[J3_int]);strcat(buf,"\n");fputs(buf,fh); };
    // 02580 I= I3
    I_int = I3_int;
    // 02590 J= J3
    J_int = J3_int;
    // 02600 U= 1
    U_int = 1;
    // 02610 GOSUB 4060
    Routine_04060();
    // 02620 C1 = C1 + S1 + 1
    C1_int = C1_int+S1_int+1;
    // 02630 H1 = H1 - S1
    H1_int = H1_int-S1_int;
    // 02640 N1 = N1 + 1
    N1_int = N1_int+1;
    // 02650 LET L=16
    L_int = 16;
    // 02660 GOSUB 4540
    Routine_04540();
    // 02670 PRINT " THAT GIVES ME : ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THAT GIVES ME : ");fputs(buf,fh); };
    // 02680 PRINT S1;
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,S1_int);fputs(buf,fh); };
    // 02690 PRINT " OF YOUR PIECES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," OF YOUR PIECES");strcat(buf,"\n");fputs(buf,fh); };
    // 02700 REM********		PRINT OUT BOARD
    // 02710 GOSUB 4350
    Routine_04350();
    // 02720 REM********		TEST FOR END OF GAME
    // 02730 IF H1 = 0 THEN 3370
    if(H1_int==0)goto Lbl_03370;
    // 02740 IF N1 = 64 THEN 3370
    if(N1_int==64)goto Lbl_03370;
    // 02750 REM********		HUMANS MOVE

  Lbl_02760:
    // 02760 T1 = H
    T1_int = H_int;
    // 02770 T2 = C
    T2_int = C_int;
    // 02780 LET L = 12
    L_int = 12;
    // 02790 GOSUB 4540
    Routine_04540();

  Lbl_02800:
    // 02800 PRINT " YOUR MOVE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," YOUR MOVE");fputs(buf,fh); };

  Lbl_02810:
    // 02810 INPUT I, X$
    // Start of Basic INPUT statement 02810
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&I_int,args,0)) ||
                (err += b2c_strtos(&X_str,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02810
    // 02820 IF I < 0 THEN 2810
    if(I_int<0)goto Lbl_02810;
    // 02830 IF I > 8 THEN 2810
    if(I_int>8)goto Lbl_02810;
    // 02840 IF I <> 0 THEN 2930
    if(I_int!=0)goto Lbl_02930;
    // 02850 LET L = 18
    L_int = 18;
    // 02860 GOSUB 4540
    Routine_04540();
    // 02870 PRINT "ARE YOU FORFEITING YOUR TURN Y OR N"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ARE YOU FORFEITING YOUR TURN Y OR N");strcat(buf,"\n");fputs(buf,fh); };
    // 02880 INPUT X$
    // Start of Basic INPUT statement 02880
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02880
    // 02890 IF X$ <> "Y" THEN 2800
    if(strcmp(X_str,"Y")!=0)goto Lbl_02800;
    // 02900 IF Z = 1 THEN 3370
    if(Z_int==1)goto Lbl_03370;
    // 02910 Z = 1
    Z_int = 1;
    // 02920 GO TO 2010
    goto Lbl_02010;

  Lbl_02930:
    // 02930 FOR J = 1 TO 8
    for(J_int=1;J_int<=8;J_int++){
        // 02940 IF C$(J) =X$ THEN 2980
        if(strcmp(C_str_arr[J_int],X_str)==0)goto Lbl_02980;
        // 02950 NEXT J
        int dummy_2950=0; // Ignore this line.
    }; // End-For(J_int)
    // 02960 GO TO 2810
    goto Lbl_02810;
    // 02970 REM********		CHECK FOR BLANK

  Lbl_02980:
    // 02980 IF A(I,J) = 0 THEN 3040
    if(A_int_arr[I_int][J_int]==0)goto Lbl_03040;
    // 02990 LET L = 18
    L_int = 18;
    // 03000 GOSUB 4540
    Routine_04540();
    // 03010 PRINT "SORRY, THAT SQUARE IS OCCUPIED, TRY AGAIN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, THAT SQUARE IS OCCUPIED, TRY AGAIN");strcat(buf,"\n");fputs(buf,fh); };
    // 03020 GO TO 2810
    goto Lbl_02810;
    // 03030 REM********		CHECK FOR LEGAL NEIGHBOUR

  Lbl_03040:
    // 03040 GOSUB 3860
    Routine_03860();
    // 03050 IF F1 = 1 THEN 3110
    if(F1_int==1)goto Lbl_03110;
    // 03060 LET L = 18
    L_int = 18;
    // 03070 GOSUB 4540
    Routine_04540();
    // 03080 PRINT "SORRY, YOU ARE NOT NEXT TO ONE OF MY PIECES. TRY AGAIN.";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, YOU ARE NOT NEXT TO ONE OF MY PIECES. TRY AGAIN.");fputs(buf,fh); };
    // 03090 GO TO 2810
    goto Lbl_02810;
    // 03100 REM********		CHECK IF LEGAL RUN

  Lbl_03110:
    // 03110 U = -1
    U_int = -1;
    // 03120 GOSUB 4060
    Routine_04060();
    // 03130 IF S1 > 0 THEN 3190
    if(S1_int>0)goto Lbl_03190;
    // 03140 LET L = 18
    L_int = 18;
    // 03150 GOSUB 4540
    Routine_04540();
    // 03160 PRINT "SORRY, THAT DOESN'T FLANK A ROW, TRY AGAIN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, THAT DOESN'T FLANK A ROW, TRY AGAIN");strcat(buf,"\n");fputs(buf,fh); };
    // 03170 GO TO 2810
    goto Lbl_02810;
    // 03180 REM********		EVERYTHING LEGAL; MAKE HUMANS MOVE

  Lbl_03190:
    // 03190 Z = 0
    Z_int = 0;
    // 03200 LET L = 13
    L_int = 13;
    // 03210 GOSUB 4540
    Routine_04540();
    // 03220 PRINT "THAT GIVES YOU";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT GIVES YOU");fputs(buf,fh); };
    // 03230 PRINT S1;
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,S1_int);fputs(buf,fh); };
    // 03240 PRINT " OF MY PIECES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," OF MY PIECES");strcat(buf,"\n");fputs(buf,fh); };
    // 03250 U = 1
    U_int = 1;
    // 03260 GOSUB 4060
    Routine_04060();
    // 03270 H1 = H1 + S1 + 1
    H1_int = H1_int+S1_int+1;
    // 03280 C1 = C1 -S1
    C1_int = C1_int-S1_int;
    // 03290 N1 = N1 + 1
    N1_int = N1_int+1;
    // 03300 REM********		PRINT OUT BOARD
    // 03310 GOSUB 4350
    Routine_04350();
    // 03320 REM********		TEST FOR END OF GAME
    // 03330 IF C1 = 0 THEN 3370
    if(C1_int==0)goto Lbl_03370;
    // 03340 IF N1 = 64 THEN 3370
    if(N1_int==64)goto Lbl_03370;
    // 03350 GO TO 2010
    goto Lbl_02010;
    // 03360 REM********		END OF GAME ; WRAPUP

  Lbl_03370:
    // 03370 LET L = 18
    L_int = 18;
    // 03380 GOSUB 4540
    Routine_04540();
    // 03390 PRINT "FOR RESULTS ON GAME TYPE RETURN!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOR RESULTS ON GAME TYPE RETURN!!");strcat(buf,"\n");fputs(buf,fh); };
    // 03400 INPUT X$
    // Start of Basic INPUT statement 03400
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03400
    // 03410 PRINT CHR$(30),CHR$(26)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(30));strcpy(buf,CHR$(26));strcat(buf,"\n");fputs(buf,fh); };
    // 03420 PRINT "YOU HAVE ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE ");fputs(buf,fh); };
    // 03430 PRINT H1;
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,H1_int);fputs(buf,fh); };
    // 03440 PRINT " PIECES, AND I HAVE ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," PIECES, AND I HAVE ");fputs(buf,fh); };
    // 03450 PRINT C1;
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,C1_int);fputs(buf,fh); };
    // 03460 PRINT " PIECES--- "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," PIECES--- ");strcat(buf,"\n");fputs(buf,fh); };
    // 03470 IF H1 = C1 THEN 3510
    if(H1_int==C1_int)goto Lbl_03510;
    // 03480 IF H1 > C1 THEN 3530
    if(H1_int>C1_int)goto Lbl_03530;
    // 03490 PRINT "SORRY, I WON THAT ONE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, I WON THAT ONE.");strcat(buf,"\n");fputs(buf,fh); };
    // 03500 GO TO 3540
    goto Lbl_03540;

  Lbl_03510:
    // 03510 PRINT " A TIE!!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," A TIE!!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 03520 GO TO 3720
    goto Lbl_03720;

  Lbl_03530:
    // 03530 PRINT "YOU WON!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WON!!!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03540:
    // 03540 C1 = C1 - H1
    C1_int = C1_int-H1_int;
    // 03550 IF C1 > 0 THEN 3570
    if(C1_int>0)goto Lbl_03570;
    // 03560 C1 = -C1
    C1_int = C1_int;

  Lbl_03570:
    // 03570 C1 = (64 * C1)/ N1
    C1_int = (64*C1_int)/N1_int;
    // 03580 PRINT "THAT WAS A ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT WAS A ");fputs(buf,fh); };
    // 03590 IF C1 < 11 THEN 3710
    if(C1_int<11)goto Lbl_03710;
    // 03600 IF C1 < 25 THEN 3690
    if(C1_int<25)goto Lbl_03690;
    // 03610 IF C1 < 39 THEN 3670
    if(C1_int<39)goto Lbl_03670;
    // 03620 IF C1 < 53 THEN 3650
    if(C1_int<53)goto Lbl_03650;
    // 03630 PRINT " A PERFECT GAME!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," A PERFECT GAME!");strcat(buf,"\n");fputs(buf,fh); };
    // 03640 GO TO 3720
    goto Lbl_03720;

  Lbl_03650:
    // 03650 PRINT "WALKAWAY!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WALKAWAY!");strcat(buf,"\n");fputs(buf,fh); };
    // 03660 GO TO 3720
    goto Lbl_03720;

  Lbl_03670:
    // 03670 PRINT "FIGHT!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FIGHT!");strcat(buf,"\n");fputs(buf,fh); };
    // 03680 GO TO 3720
    goto Lbl_03720;

  Lbl_03690:
    // 03690 PRINT "HOT GAME!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOT GAME!");strcat(buf,"\n");fputs(buf,fh); };
    // 03700 GO TO 3720
    goto Lbl_03720;

  Lbl_03710:
    // 03710 PRINT "SQUEAKER!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SQUEAKER!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03720:
    // 03720 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03730 PRINT"DO YOU WANT TO PLAY AGAIN";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO PLAY AGAIN");fputs(buf,fh); };

  Lbl_03740:
    // 03740 INPUT X$
    // Start of Basic INPUT statement 03740
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03740
    // 03750 IF X$ = "Y" THEN 1700
    if(strcmp(X_str,"Y")==0)goto Lbl_01700;
    // 03760 IF X$ <> "N" THEN 3740
    if(strcmp(X_str,"N")!=0)goto Lbl_03740;
    // 03770 PRINT "THANKS FOR PLAYING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THANKS FOR PLAYING.");strcat(buf,"\n");fputs(buf,fh); };
    // 03780 STOP
    exit(1);
    // 03790 REM********		SUCCESS
    // 03800 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
