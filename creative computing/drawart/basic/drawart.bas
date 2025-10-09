# NOTE: Type forced to be:
# trs2 - TRS-80 Level II BASIC tokenized file
    1 : REM ' ......DRAWART/BAS aus Creative Computing Jan/83 S. 268
    5 CMD "t
    6 DEF AUTO 1 = &HE000 : DEF AUTO 2 = &HE010 : FOR AA = 0 TO 27 : READ ZZ : POKE &HE000 + AA,ZZ : NEXT 
   10 CLS : CLEAR : DIM X(255),Y(255),Q(40),W(40)
   20 Q = 64 : W = 24 : SET (Q,W) : X(32) = - 1 : X(64) = 1
   25 Y(8) = - 1 : Y(16) = 1 : R = 1
   30 GOSUB 1000 : IF FK = 1 THEN R = - R
   40 A$ = INKEY$ : IF A$ = ""THEN 30
   50 IF A$ = "l" OR A$ = "L" THEN 2000
   80 IF A$ = "c" OR A$ = "C" THEN 5000
   90 IF A$ = "p" OR A$ = "P" THEN 6000
  100 GOTO 30
 1000 FK = 0 : A = PEEK (14400) : IF A = 0 THEN RETURN 
 1010 IF R = - 1 THEN RESET (Q,W)
 1020 Q1 = Q : W1 = W : Q = Q + X(A) : W = W + Y(A)
 1025 IF Q < 0 THEN Q = Q + 128 : ELSE IF Q > 127 THEN Q = Q - 128
 1026 IF W < 0 THEN W = W + 48 : ELSE IF W > 47 THEN W = W - 48
 1030 FK = 0 : IF A = 128 THEN FOR ZA = 1 TO 30 : NEXT : FK = 1
 1040 SET (Q,W) : RETURN 
 2000 R = - 1 : T = 0
 2010 GOSUB 1000 : IF INKEY$ = "g" THEN 2040
 2015 IF R = 1 AND (Q(T) < > Q OR W(T) < > W) THEN R = - 1
 2020 IF FK = 0 THEN 2010
 2030 R = 1 : IF Q = Q(T) AND W = W(T) THEN 2010
 2035 T = T + 1 : Q(T) = Q : W(T) = W : IF T < 40 THEN 2010
 2040 IF T < 2 THEN 30
 2050 FOR GT = 1 TO T - 1 : X = Q(GT) : Y = W(GT)
 2055 X1 = Q(GT + 1) : Y1 = W(GT + 1)
 2060 GOSUB 3000 : NEXT : GOTO 30
 3000 IF ABS (X1 - X) < ABS (Y1 - Y) THEN 3070
 3010 FOR X2 = X TO X1 STEP 2 * (X1 < X) + 1
 3020 SET (X2,(X2 - X) * (Y1 - Y) / (X1 - X) + Y + .5)
 3030 NEXT : RETURN 
 3070 FOR Y2 = Y TO Y1 STEP 2 * (Y1 < Y) + 1
 3080 SET (.5 + (Y2 - Y) * (X1 - X) / (Y1 - Y) + X,Y2)
 3090 NEXT : RETURN 
 5000 R = - 1 : T = 0
 5010 GOSUB 1000
 5015 IF R = 1 AND (Q(T) < > Q OR W(T) < > W) THEN R = - 1
 5020 IF FK = 0 THEN 5010
 5030 R = 1 : IF Q = Q(T) AND W = W(T) THEN 5010
 5035 T = T + 1 : Q(T) = Q : W(T) = W : IF T = 1 THEN 5010
 5040 X = ABS (Q(1) - Q(2)) : Y = X * 3 / 7
 5045 KX = Q(1) : KY = W(2)
 5050 T = Y * 7 / 3 : IF X > T THEN T = X
 5060 FOR HJ = 0 TO 2 * 3.1415 STEP 1 / T
 5070 Z1 = COS (HJ) * X + KX : Z2 = SIN (HJ) * Y + KY
 5075 IF Z1 < 0 OR Z1 > 127 OR Z2 < 0 OR Z2 > 47 THEN 5090
 5080 SET (Z1,Z2)
 5090 NEXT : GOTO 30
 6000 P = AUTO 1(0)
 6010 CLS : P = AUTO 2(0) : GOTO 30
10000 DATA 33,0,60,17,0,236,1,0,4,237,176,201,255,0,255,0,33,0,236,17,0,60,1,0,4,237,176,201
