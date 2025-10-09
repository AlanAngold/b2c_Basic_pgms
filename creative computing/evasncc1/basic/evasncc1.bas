# NOTE: Type forced to be:
# trs2 - TRS-80 Level II BASIC tokenized file
   10 IF TT < > 0 THEN 25 : ELSE CLS : PRINT CHR$ (23) : FOR P = 328 TO 372 : PRINT @P, CHR$ (149); : NEXT P : PRINT @336," E V A S I O N "; : FOR P = 1 TO 200 : NEXT P : NN = 0 : FOR P = 400 TO 430 STEP 4 : PRINT @P,"*"; : NEXT P
   15 PRINT @384, : PRINT : PRINT : PRINT "THE OBJECT OF THIS GAME IS TO   KEEP AWAY FROM THE SNAKE THAT   WILL CHASE YOU AROUND THE BOARD." : PRINT : PRINT "USE THE ARROWS TO CHANGE YOUR   DIRECTION.  THE SPACE BAR WILL  STOP YOUR MAN."
   20 GOTO 45
   25 CLS : PRINT CHR$ (23) : PRINT @512,"ANOTHER GAME"; : INPUT A$
   30 IF LEFT$ (A$,1) = "Y" THEN 45
   35 IF LEFT$ (A$,1) = "y" THEN 45
   40 GOTO 290
   45 P = 1 : L = 454 : VV = 0 : F = 0 : PP = 0 : E = 1 : TF = 0 : P(0) = 999 : AA = 32 : M = 4 : H = 20 : C = 0 : U = 0 : PRINT : PRINT : D$ = INKEY$ : GN = GN + 1 : IF TT < > 0 THEN 55 : ELSE PRINT @976,"HIT ANY KEY !";
   50 A$ = INKEY$ : IF A$ < > ""THEN 55 : ELSE N = N + 1 : IF N = 80 PRINT @976,"             "; : GOTO 50 : ELSE IF N > 160 PRINT @976,"HIT ANY KEY !"; : N = 0 : GOTO 50 : ELSE 50
   55 CLS : PRINT CHR$ (23) : PRINT @256,"-- CHOOSE DIFFICULTY FACTOR --" : PRINT @460,"- FULL SPEED" : PRINT @588,"- FULL SPEED WITH JUMPS" : PRINT @716,"- HALF SPEED" : PRINT @844,"- HALF SPEED WITH JUMPS"
   60 A$ = INKEY$ : IF A$ < > ""THEN 75
   65 PRINT @L,"  "; : FOR O = 1 TO 20 : NEXT O : PRINT @L,P; : FOR O = 1 TO 50 : NEXT O : L = L + 128 : P = P + 1 : IF L > 900 THEN L = 454 : P = 1
   70 GOTO 60
   75 A = ASC (A$) : IF A = 49 THEN B = 0 : V = 2000 : ELSE IF A = 50 THEN B = 0 : V = 35 : ELSE IF A = 51 THEN B = 1 : V = 2000 : ELSE IF A = 52 THEN B = 1 : V = 35 : ELSE GOTO 60
   80 TT = 0 : CLS : FOR P = 15360 TO 15423 : POKE P,131 : POKE P + 960,176 : NEXT P : FOR P = 15360 TO 16320 STEP 64 : POKE P,191 : POKE P + 63,191 : NEXT P
   85 X = 60 : Y = 24 : SET (X,Y) : SET (X + 1,Y) : GOSUB 200 : N = 10 : G = 11 : D$ = INKEY$ 
   90 A$ = INKEY$ : IF A$ < > ""THEN 125
   95 IF B = 1 THEN IF INT (N / 2) = N / 2 THEN 105
  100 RESET (X,Y) : RESET (X + 1,Y) : X = X + C : Y = Y + U : IF POINT (X,Y) THEN 135 : ELSE SET (X,Y) : SET (X + 1,Y)
  105 S = S + D : Q = Q + W : N = N + 1 : IF N > G THEN G = RND (8) : N = 0 : GOSUB 230
  110 IF S < 1 OR S > 124 OR Q < 1 OR Q > 46 GOSUB 200
  115 SET (S,Q) : SET (S + 1,Q) : TT = TT + .4 : IF Q = Y THEN IF S = X THEN 135
  120 GOTO 90
  125 A = ASC (A$) : IF A = 8C = - 2 : U = 0 : ELSE IF A = 9C = 2 : U = 0 : ELSE IF A = 10C = 0 : U = 1 : ELSE IF A = 91C = 0 : U = - 1 : ELSE IF A = 32C = 0 : U = 0
  130 GOTO 100
  135 NN = NN + 1 : FOR P = 1 TO 12 : SET (X + 1,Y) : SET (X,Y) : RESET (X + 1,Y) : RESET (X,Y) : NEXT P : CLS : PRINT CHR$ (23) : PRINT @960, : FOR P = 1 TO 12 : PRINT TAB 11)"GOTCHA" : NEXT P : FOR P = 1 TO 16 : PRINT : NEXT P
  140 Y = 47 : CLS : PRINT CHR$ (23) : PRINT @10,"* * * EVASION * * *" : FOR P = 76 TO 108 : PRINT @P, CHR$ (191); : NEXT P : PRINT @84," RUN -";NN; : PRINT @268,"YOUR TIME ...."; INT (TT);
  145 FOR P = 0 TO 6 : IF INT (TT) < P(P) AND INT (TT) > P(P + 1) AND P(P + 1) < > 0 PRINT @584,"NEW RECORD - POSITION";P + 1;
  150 NEXT P : IF INT (TT) > 1.25 * P(1) AND P(1) > 50 PRINT @392,"GOOD SCORE IMPROVEMENT";
  155 IF INT (TT) > 99 PRINT @462,"TRIPLE   FIGURES"; : TF = 1 : ELSE IF TT < 15 PRINT @466,"CONCENTRATE";
  160 NG = 0 : FOR P = 1 TO 5 : IF P(P) < > 0 THEN NG = P : NEXT P : ELSE NEXT P
  165 IF NG = 0 THEN 185 : ELSE PRINT @648,"---S-T-A-N-D-I-N-G-S---"; : L = 796 - 4 * NG : IF NG > 5 THEN NG = 5 : L = 776
  170 IF PP < > 11 AND P(1) > 50 THEN IF INT (TT) > P(1) THEN CLS : PRINT CHR$ (23); : FOR P = 320 TO 650 STEP 128 : PRINT @P,"* YOU HAVE TAKEN OVER THE LEAD *"; : NEXT P : FOR P = 1 TO 500 : NEXT P : PP = 11 : GOTO 140
  175 FOR Z = 1 TO NG : FOR P = L TO L + 8 : PRINT @P, CHR$ (176); : PRINT @P + 128, CHR$ (131); : NEXT P : PRINT @L + 64, CHR$ (170); : PRINT @L + 66, STR$ (P(Z)); : IF LEN ( STR$ (P(Z))) > 3 PRINT @L + 66, RIGHT$ ( STR$ (P(Z)),3);
  180 PRINT @P + 63, CHR$ (170); : PRINT @L - 62,Z; : L = L + 8 : NEXT Z : P = L - (Z - 1) * 8 : PRINT @P, CHR$ (160); : PRINT @P + 128, CHR$ (130);
  185 I = INT (TT) : O = 0 : FOR P = 0 TO 5 : IF I < P(P) AND I < > P(P + 1) THEN O = P + 1 : IF P(P + 1) > I THEN O = 0
  190 NEXT P : IF O < > 0 THEN FOR P = 6 TO O STEP - 1 : P(P) = P(P - 1) : NEXT P : P(O) = I
  195 D$ = INKEY$ : GOTO 260
  200 S = RND (50) * 2 + 12 : Q = RND (30) + 9 : RETURN 
  205 ON M GOTO 210,215,220,225
  210 D = - 2 : W = 0 : RETURN 
  215 D = 2 : W = 0 : RETURN 
  220 D = 0 : W = - 1 : RETURN 
  225 D = 0 : W = 1 : RETURN 
  230 DD = S - X : UU = Q - Y : KK = 1 : JJ = 3
  235 DD = S - X : UU = Q - Y : KK = 1 : JJ = 3
  240 IF DD < = 0 THEN KK = 2
  245 IF UU < = 0 THEN JJ = 4
  250 IF TT > V + VV THEN FOR P = 160 TO 870 STEP 128 : PRINT @P, CHR$ (32); : NEXT P : RESET (X,Y) : RESET (X + 1,Y) : X = 64 : Y = RND (20) + 10 : C = 0 : U = 0 : VV = TT
  255 RR = RND (2) : IF RR = 1 THEN M = KK : GOTO 205 : ELSE M = JJ : GOTO 205
  260 N = 90 : P = 960 : K = RND (15) + 32 : S$ = CHR$ (K)
  265 PRINT @P," "; : PRINT @P + 60," "; : FOR O = 1 TO 10 : NEXT O : PRINT @P,S$; : PRINT @P + 60,S$; : P = P - 128 : IF P < 0 THEN P = 960 : IF G = 1 PRINT @978,"             "; : G = 0 : ELSE PRINT @978,"HIT ANY KEY !"; : G = 1 : N = N + 1 : IF N > 150 THEN 10
  270 IF TF = 0 THEN 285
  275 E = E + 1 : IF E = 4 PRINT @462,"TRIPLE"; : PRINT @480,"-------";
  280 IF E = 8 PRINT @462,"------"; : PRINT @480,"FIGURES"; : E = 0 : PRINT @296,"    "; : FOR I = 1 TO 5 : NEXT I : PRINT @296, INT (TT);
  285 A$ = INKEY$ : IF A$ = ""THEN 265 : ELSE 10
  290 CLS : PRINT : PRINT "I HOPE YOU HAD FUN."
  295 PRINT : PRINT "TO PLAY AGAIN, TYPE 'RUN'."
  300 END 
