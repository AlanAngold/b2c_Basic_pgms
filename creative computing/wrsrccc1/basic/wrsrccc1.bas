# NOTE: Type forced to be:
# trs2 - TRS-80 Level II BASIC tokenized file
   10 PRINT TAB 20);"WORD SEARCH PUZZLE"
   40 PRINT : PRINT : PRINT 
   50 PRINT "  This program is a word search puzzle generator!!"
   60 PRINT "The program takes a set on input strings, purges all"
   70 PRINT "non-alphabetic characters out of them, and incorporates"
   80 PRINT "them into a word search puzzle."
   90 PRINT 
  100 PRINT "  In the course of making a puzzle, the machine may"
  110 PRINT "find that it can't put a particular word anywhere, and"
  120 PRINT "so will ask you if it should start the whole puzzle"
  130 PRINT "over.  If you don't want it to start over, typing 'NO'"
  140 PRINT "will throw away that particular word.  If this persists,"
  150 PRINT "try either less words or bigger puzzle dimensions!"
  160 PRINT : PRINT 
  280 CLEAR 3000
  300 DEF FN A(Z) = INT ( RND (0) * Z + 1)
  310 INPUT "HOW MANY COLUMNS DOES YOUR PRINTER HAVE";TW
  320 INPUT "DO YOU WANT A SOLUTION PRINTOUT";X$
  330 INPUT "WHAT IS TO BE THE WIDTH OF YOUR PUZZLE";W : MD = W
  340 IF W * 2 < = TW THEN 345
  343 PRINT "THAT WILL NOT FIT IN";TW;" COLUMNS." : GOTO 330
  345 IF W < 1 THEN 330
  350 INPUT "THE LENGTH OF";L : IF L > W THEN MD = L
  355 IF L < 1 THEN 350
  360 INPUT "WHAT IS THE MAXIMUM NUMBER OF WORDS IN THE PUZZLE";M
  370 IF M > = 2 THEN 380
  375 PRINT "SORRY; THERE MUST BE AT LEAST 2 WORDS." : GOTO 360
  380 PRINT 
  390 DIM A$(L,W),W$(M)
  400 DIM W(M,3),DXY(8,2),DD(28)
  410 PRINT "NOW ENTER A HEADING THAT WILL BE PRINTED OVER THE PUZZLE : "
  420 PRINT "(";TW;"CHARACTERS MAXIMUM! )"
  430 INPUT XY$
  440 PRINT "OK . . . Enter a word at each question mark."
  450 PRINT "to redo the previous word, type a hyphen (-)."
  460 PRINT "When you run out of words, type a period (.)."
  470 FOR I = 1 TO M
  480 INPUT T$ : IF T$ = "-" THEN I = I - 1 : PRINT "REDO";W$(I);". . ." : GOTO 480
  490 IF T$ = "." THEN M = I - 1 : GOTO 660
  500 IF LEN (T$) = 0 THEN PRINT "INPUT ERROR; REDO : ": GOTO 480
  510 J = 1
  520 TE$ = MID$ (T$,J,1) : IF TE$ > = "a" AND TE$ < = "z" THEN 570
  525 IF TE$ < "A" OR TE$ > "Z" THEN 530
  527 T$ = LEFT$ (T$,J - 1) + CHR$ ( ASC ( MID$ (T$,J,1)) + 32) + RIGHT$ (T$, LEN (T$) - J) : GOTO 570
  530 IF TE$ = T$ THEN T$ = "": GOTO 500
  540 IF J = LEN (T$) THEN T$ = LEFT$ (T$,J - 1) : GOTO 580
  550 IF J = 1 THEN T$ = RIGHT$ (T$, LEN (T$) - 1) : J = J - 1 : GOTO 570
  560 T$ = LEFT$ (T$,J - 1) + RIGHT$ (T$, LEN (T$) - J) : J = J - 1
  570 J = J + 1 : IF J < = LEN (T$) THEN 520
  580 PRINT "-";T$;"-"
  600 IF LEN (T$) < = MD THEN 610
  605 PRINT "THAT'S TOO LONG, I'M AFRAID.";
  607 PRINT " TRY ANOTHER ONE : ": GOTO 480
  610 FOR IZ = 1 TO I - 1 : IF W$(IZ) < > T$ THEN NEXT : GOTO 630
  620 PRINT "YOU ENTERED THAT ONE ALREADY. TRY ANOTHER : ": GOTO 480
  630 W$(I) = T$
  640 NEXT I
  650 PRINT "THAT'S IT...";M;"WORDS."
  660 PRINT "NOW LET ME PONDER THIS........."
  680 FOR I = 1 TO M - 1
  685 FOR J = I + 1 TO M
  690 IF LEN (W$(I)) < LEN (W$(J)) THEN HZ$ = W$(I) : W$(I) = W$(J) : W$(J) = HZ$
  700 NEXT : NEXT 
  710 FOR I = 1 TO 8 : READ DXY(I,1),DXY(I,2) : NEXT 
  720 FOR I = 1 TO 28 : READ DD(I) : NEXT 
  730 DATA 0,1,1,1,1,0,1,-1,0,-1,-1,-1,-1,0,-1,1
  740 DATA 2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,1,3,5,7
  750 FOR I = 1 TO M
  760 LN = LEN (W$(I))
  770 NT = 0
  790 SD = DD( FN A(28))
  800 SX = FN A(W) : X1 = SX + (LN - 1) * DXY(SD,1) : IF X1 < 1 OR X1 > W THEN 790
  810 SY = FN A(L) : X1 = SY + (LN - 1) * DXY(SD,2) : IF X1 < 1 OR X1 > L THEN 790
  820 NT = NT + 1 : IF NT < > W * L * 2 THEN 850
  830 PRINT "COUNDN'T FIT  '";W$(I);"' IN THE PUZZLE."
  832 INPUT "DO YOU WANT ME TO START OVER";A$
  834 IF LEFT$ (A$,1) = "Y" THEN 750
  836 W$(I) = "": GOTO 950
  850 J = SY : K = SX
  860 FOR P = 1 TO LN
  870 IF LEN (A$(J,K)) AND A$(J,K) < > MID$ (W$(I),P,1) THEN 790
  880 J = J + DXY(SD,2) : K = K + DXY(SD,1) : NEXT P
  900 J = SY : K = SX
  910 FOR P = 1 TO LN : A$(J,K) = MID$ (W$(I),P,1)
  920 J = J + DXY(SD,2) : K = K + DXY(SD,1) : NEXT 
  940 W(I,1) = SX : W(I,2) = SY : W(I,3) = SD
  950 NEXT I
  970 FOR I = 1 TO L
  975 FOR J = 1 TO W
  980 IF A$(I,J) = ""THEN A$(I,J) = CHR$ ( FN A(26) + 96)
  990 NEXT : NEXT 
 1010 FOR I = 1 TO M - 1 : FOR J = I + 1 TO M
 1020 IF W$(I) < = W$(J) THEN 1030
 1021 HZ$ = W$(I) : W$(I) = W$(J) : W$(J) = HZ$
 1025 FOR K = 1 TO 3 : HZ = W(I,K) : W(I,K) = W(J,K) : W(J,K) = HZ : NEXT K
 1030 NEXT J : NEXT I
 1040 INPUT "HOW MANY COPIES OF THIS PUZZLE DO YOU WANT";N
 1050 PRINT "FOR EACH COPY, HIT RETURN TO BEGIN PRINTING..."
 1060 FOR C = 1 TO N : GOSUB 1070 : NEXT : GOTO 1230
 1070 INPUT A$ : PRINT 
 1080 T = (TW - 2 * W) / 2 : PRINT 
 1090 LPRINT 
 1100 LPRINT TAB (TW - LEN (XY$)) / 2);XY$
 1110 LPRINT : LPRINT 
 1120 FOR J = 1 TO L : LPRINT TAB T);
 1130 FOR K = 1 TO W : IF A$(J,K) = "." THEN LPRINT ". "; : GOTO 1140
 1135 LPRINT CHR$ ( ASC (A$(J,K)) - 32);" ";
 1140 NEXT : LPRINT : NEXT 
 1150 LPRINT : LPRINT 
 1160 LPRINT "FIND THESE HIDDEN WORDS IN THE ABOVE PUZZLE : "
 1170 LPRINT 
 1180 FOR J = 1 TO M : IF LEN (W$(J)) = 0 THEN 1210
 1190 IF POS (0) + LEN (W$(J)) > TW - 2 THEN LPRINT 
 1200 LPRINT W$(J),
 1210 NEXT : LPRINT : LPRINT : LPRINT : LPRINT 
 1220 RETURN 
 1230 IF LEFT$ (X$,1) = "Y" OR LEFT$ (X$,1) = "y" THEN 1250
 1240 END 
 1250 : REM ' 
 1260 FOR I = 1 TO L : FOR J = 1 TO W : A$(I,J) = "." : NEXT J : NEXT I
 1270 FOR I = 1 TO M
 1280 LN = LEN (W$(I)) : J = W(I,2) : K = W(I,1)
 1290 FOR P = 1 TO LN
 1300 A$(J,K) = MID$ (W$(I),P,1)
 1310 J = J + DXY(W(I,3),2) : K = K + DXY(W(I,3),1) : NEXT P
 1320 NEXT I
 1330 XY$ = "HERE IS THE ANSWER KEY : "
 1340 GOSUB 1070
 1350 LPRINT : LPRINT 
 1360 END 
