# NOTE: Type forced to be:
# trs2 - TRS-80 Level II BASIC tokenized file
   74 GOTO 85
   75 CLS : PRINT CHR$ (23) : PRINT "**-***-***- LANDER -***-***-**" : PRINT "COPYRIGHT SIMUTEK ENT. 1979" : PRINT : INPUT "INSTRUCTIONS  1/YES  2/NO";JJ : IF JJ = 1 THEN KL = 5
   76 CLS : PRINT CHR$ (23) : PRINT : PRINT : PRINT "ONE MOMENT PLEASE..........." : RETURN 
   85 CLEAR 1400 : C(1) = 176 : C(2) = 191 : C(3) = 188 : C(4) = 189 : C(5) = 184 : C(6) = 180
   86 BL$ = "  "+ CHR$ (191) + CHR$ (26) + CHR$ (24) + CHR$ (24) + CHR$ (24) + CHR$ (191) + " "+ CHR$ (191) + " "+ CHR$ (191) : X$ = "           "+ CHR$ (26) + STRING$ (12, CHR$ (24)) + "           ": BO$ = " "+ CHR$ (191) + CHR$ (191) + CHR$ (26) + STRING$ (4, CHR$ (24)) + CHR$ (191) + CHR$ (191) + "  "+ CHR$ (191) + CHR$ (191)
   87 GOSUB 75
   88 BS$ = CHR$ (131) + " "+ CHR$ (140) + " "+ CHR$ (176) + " "+ CHR$ (188) + " "+ CHR$ (176) + " "+ CHR$ (140) + " "+ CHR$ (131) : BB$ = CHR$ (131) + " "+ CHR$ (140) + " "+ CHR$ (176) + CHR$ (26) + " "+ CHR$ (131) + " "+ CHR$ (140) + " "+ CHR$ (176) + CHR$ (140) + CHR$ (131) + CHR$ (140) + CHR$ (176) + " "+ CHR$ (140)
   89 BB$ = BB$ + " "+ CHR$ (131) + " "+ CHR$ (27) + CHR$ (176) + " "+ CHR$ (140) + " "+ CHR$ (131) : BT$ = "     "+ CHR$ (26) + "              "+ CHR$ (27) + "        ": A$ = CHR$ (191) + " ": A1$ = CHR$ (191) + " "+ CHR$ (191) : A2$ = CHR$ (191) + " "+ CHR$ (191) + " "
   90 DIM S$(10) : FOR X = 0 TO 63 : G9 = RND (6) : S$(1) = S$(1) + CHR$ (C(G9)) : NEXT 
   91 FOR X = 0 TO 63 : G9 = RND (3) : S$(2) = S$(2) + CHR$ (C(G9)) : NEXT : S$(2) = S$(2) + STRING$ (64, CHR$ (131))
   92 FOR X = 1 TO 10 : S$(3) = S$(3) + CHR$ (191) : NEXT : FOR X = 1 TO 30 : S$(3) = S$(3) + CHR$ (176) : NEXT : FOR X = 1 TO 24 : G9 = RND (2) : S$(3) = S$(3) + CHR$ (C(G9)) : NEXT : S$(3) = S$(3) + STRING$ (64, CHR$ (131)) : IF KL = 5 GOSUB 9000
   93 S$(4) = "  "+ CHR$ (191) + CHR$ (191) + "   "+ CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + "                               "+ CHR$ (191) + CHR$ (188) + CHR$ (191) + CHR$ (191) + "   "+ CHR$ (188) + "    "+ CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + "     "+ CHR$ (176)
   94 S$(4) = S$(4) + CHR$ (188) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (176) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (188) + CHR$ (176) + "                          "+ CHR$ (188) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191)
   95 S$(4) = S$(4) + CHR$ (191) + CHR$ (188) + CHR$ (176) + CHR$ (191) + CHR$ (176) + "   "+ CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (188) + CHR$ (176) + "{0x10}  "+ CHR$ (191) + STRING$ (64, CHR$ (131))
   96 S$(5) = CHR$ (191) + CHR$ (191) + CHR$ (191) + "                                                  "+ CHR$ (191) + CHR$ (188) + CHR$ (176) + "       "+ CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (188) + "                                          "+ CHR$ (176) + CHR$ (188) + CHR$ (188)
   97 S$(5) = S$(5) + CHR$ (176) + CHR$ (176) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (176) + "  "+ CHR$ (176) + CHR$ (188) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + STRING$ (40," ") + CHR$ (191) + STRING$ (23, CHR$ (191))
   98 S$(5) = S$(5) + STRING$ (36," ") + CHR$ (188) + CHR$ (176) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191)
   99 S$(6) = STRING$ (20, CHR$ (191)) + STRING$ (34, CHR$ (176)) + STRING$ (24, CHR$ (191)) : GOSUB 6000
  100 D = 0 : F = 0 : CLS : BN = 8
  110 PRINT @09,"**** *** *** *** LANDER *** *** *** ***"
  120 PRINT : PRINT "EARTH=1   MOON=2    MARS=3    ASTEROID ALPHA=4";
  140 INPUT X : IF X < 1 OR X > 4 THEN 100 : ELSE ON X GOTO 500,600,700,800
  145 CLS : X = 87 : FOR Y = 0 TO 15 : SET (X,Y) : SET (X + 39,Y) : NEXT : Y = 0 : FOR X = 87 TO 126 : SET (X,Y) : SET (X,Y + 15) : NEXT 
  147 PRINT @980,A$;
  150 G2 = G1 / 36
  160 G3 = SQR (G2) * 100 : G3 = FIX (G3) : IF G3 < 175 THEN G3 = 175
  170 G4 = G3 * 55 : G4 = FIX (G4) : IF G4 < 10000 THEN G4 = 10000
  180 G5 = G4 * ( LOG (G1) / 20) + 10000
  190 A1 = - 6400 : A2 = 5000 : A3 = 15000 : A4 = 10
  200 NM = 84 : B4 = A4 : B2 = A2 : N3 = G3 : N4 = G4 : PRINT @NM,SP$; : 
  205 GOSUB 7000 : PRINT @109,"E.TIME : ";T1; : PRINT @173,"ALT. :   ";N3; : PRINT @237,"SPEED :  ";B2; : PRINT @301,"FUEL :   ";N4; : PRINT @428,"                "; : PRINT @428,"BURN RATE  "; : INPUT F : PRINT @NM,SP$; : GOTO 250
  210 GOTO 205
  250 IF F = 0 GOTO 280
  260 IF F = < 0 OR F > 100 GOTO 320
  270 T = N4 / F : IF T < 10 THEN B4 = T
  280 N4 = N4 - (F * B4)
  285 V1 = B3
  286 T1 = T1 + B4
  290 B5 = (G2 + ((G2 * N3) / (A5 * - 2))) - ((F * G5) / (A3 + N4))
  295 B3 = B2 + (B5 * B4)
  298 N5 = N3
  300 N3 = N3 + (((B3 + B2) / A1) * B4)
  305 B2 = B3
  307 IF N3 < .01 GOTO 450
  310 IF N4 < = 0 GOTO 400 : GOTO 210
  312 : REM ' 
  315 GOTO 205
  320 FOR TY = 1 TO 20 : PRINT @428,"** ILLEGAL **"; : FOR YT = 1 TO 10 : NEXT : PRINT @428,"             "; : FOR YT = 1 TO 10 : NEXT : NEXT : F = 0 : GOTO 205
  400 V2 = SQR (B2 ^ 2 + N3 * G2 * 5650) : PRINT @498,"** OUT **"; : PRINT @562,"*** OF ***"; : PRINT @626,"** FUEL!!**";
  410 V3 = ABS (V2) * 10000 / 3600
  420 T1 = T1 + LOG ((V3 * N3 * 10000) / G1)
  430 GOSUB 8000 : GOTO 1000
  450 V2 = SQR ( ABS (N5 / (26 * B5))) * (26 * B5) + V1 : GOSUB 8000 : GOTO 1000
  460 T1 = T1 - (10 - B4)
  500 G1 = 980.7 : A5 = 6371 : A$ = "EARTH" : GOTO 145
  600 G1 = 162 : A5 = 1738 : A$ = "MOON" : GOTO 145
  700 G1 = 374 : A5 = 3380 : A$ = "MARS" : GOTO 145
  800 G1 = 17.5 : A5 = 195 : A$ = "ASTEROID ALPHA" : GOTO 145
 1000 PRINT @0,"****---YOU HAVE ";
 1010 IF V2 < 20 THEN PRINT "LANDED!!"; : GOTO 1100
 1020 IF V2 < 100 PRINT "CRASHED!!!"; : GOTO 1140
 1030 IF V2 < 250 PRINT "DISINTEGRATED!!"; : GOTO 5000
 1040 IF V2 < 5000 PRINT "MADE A NEW CRATER!!"; : GOTO 5000
 1050 IF V2 > 4999 THEN PRINT "STRUCK OIL!!!"; : GOTO 5000
 1100 IF V2 < 2 PRINT @64,"******** EXCELLENT LANDING!!*****"; : GOTO 5000
 1110 IF V2 < 5 PRINT @64,"---- NOT TOO BAD!! ------"; : GOTO 5000
 1120 PRINT @64,"#### KIND OF ROUGH!! ???#####"; : GOTO 5000
 1140 IF V2 < 30 PRINT @64,"*** THE MODULE IS DESTROYED!!*******"; : GOTO 5000
 1150 IF V2 < 45 PRINT @64,"** YOU ARE INJURED, MODULE DESTROYED!**"; : GOTO 5000
 1160 PRINT @675,"*** THERE ARE NO SURVIVORS!!";
 5000 PRINT @128,"SPEED AT IMPACT="; ABS (V2);" KM/HR"; : PRINT @192,"ELAPSED TIME=";T1;" SECONDS."; : PRINT @256,""; : INPUT "TRY AGAIN 1/YES 2/NO";GG : IF GG < 1 OR GG > 2 THEN 5000 : ELSE IF GG = 1 GOTO 100 : ELSE CLS : END 
 6000 S$(7) = CHR$ (191) + CHR$ (13) + CHR$ (191) + CHR$ (191) + CHR$ (13) + CHR$ (191) + CHR$ (191) + CHR$ (176) + CHR$ (13) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (188) + CHR$ (13) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (13) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191)
 6001 S$(7) = S$(7) + CHR$ (176) + CHR$ (13) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (191) + CHR$ (13) + STRING$ (63, CHR$ (131))
 6002 S$(7) = S$(7) + CHR$ (27) + STRING$ (4, CHR$ (24)) + CHR$ (176) + CHR$ (188) + CHR$ (191) + CHR$ (191) + CHR$ (27) + CHR$ (24) + CHR$ (191)
 6004 SP$ = CHR$ (187) + CHR$ (177) + CHR$ (188) + CHR$ (151) + CHR$ (171) + CHR$ (188) + CHR$ (178) + CHR$ (183) + CHR$ (26) + STRING$ (9, CHR$ (24)) + CHR$ (162) + CHR$ (183) + CHR$ (131) + CHR$ (163) + CHR$ (187) + CHR$ (183) + CHR$ (147) + CHR$ (131) + CHR$ (187) + CHR$ (145)
 6005 MM$ = CHR$ (183) + CHR$ (191) + CHR$ (187) + CHR$ (26) + STRING$ (8, CHR$ (24)) + STRING$ (4, CHR$ (143)) + STRING$ (5, CHR$ (191)) + STRING$ (6, CHR$ (143)) + CHR$ (191) + CHR$ (191) + CHR$ (26) + STRING$ (13, CHR$ (24)) + STRING$ (5, CHR$ (191)) + CHR$ (26)
 6006 MM$ = MM$ + STRING$ (5, CHR$ (24)) + CHR$ (191) + CHR$ (191) + CHR$ (131) + CHR$ (191) + CHR$ (191) + CHR$ (26) + STRING$ (7, CHR$ (24)) + CHR$ (176) + CHR$ (188) + CHR$ (191) + CHR$ (191) + " "+ CHR$ (191) + CHR$ (191) + CHR$ (188) + CHR$ (176) : A4$ = CHR$ (180) + CHR$ (181) + CHR$ (181) + CHR$ (184) + CHR$ (26)
 6007 A4$ = A4$ + STRING$ (3, CHR$ (24)) + CHR$ (191) + CHR$ (191) + CHR$ (26) + STRING$ (2, CHR$ (24)) + CHR$ (143) + CHR$ (143) : A5$ = CHR$ (168) + CHR$ (170) + CHR$ (136) + CHR$ (148) + CHR$ (26) + STRING$ (5, CHR$ (24)) + CHR$ (138) + CHR$ (142) + STRING$ (8, CHR$ (143))
 6008 F1$ = STRING$ (8, CHR$ (191)) + CHR$ (26) + STRING$ (8, CHR$ (24)) + STRING$ (8, CHR$ (191)) : F2$ = STRING$ (5, CHR$ (191)) + STRING$ (3, CHR$ (188)) + CHR$ (26) + STRING$ (8, CHR$ (24)) + STRING$ (5, CHR$ (143)) + STRING$ (3, CHR$ (191)) : F3$ = STRING$ (5, CHR$ (188)) + STRING$ (3, CHR$ (191))
 6009 F3$ = F3$ + CHR$ (26) + STRING$ (8, CHR$ (24)) + STRING$ (5, CHR$ (191)) + STRING$ (2, CHR$ (143)) : GA$ = CHR$ (160) + CHR$ (177) + CHR$ (134) + CHR$ (141) + CHR$ (188) + CHR$ (176) + CHR$ (160) + CHR$ (149) + CHR$ (143) + CHR$ (179) + CHR$ (174) + CHR$ (132) + CHR$ (156) + CHR$ (190) + CHR$ (160)
 6010 RETURN 
 7000 VB = F / 5 : IF N3 < 1 THEN D = 1 : ELSE IF N3 < 10 THEN D = 2 : ELSE IF N3 < 25 THEN D = 3 : ELSE IF N3 < 50 THEN D = 4 : ELSE IF N3 < 100 THEN D = 5 : ELSE D = 6
 7001 IF D < > 1 THEN PRINT @NM,X$; : NM = 84 : PRINT @NM,SP$; : GOSUB 7100
 7005 ON D GOTO 7200,7020,7030,7040,7050,7060
 7010 PRINT @512,S$(7); : RETURN 
 7020 PRINT @640,S$(5);S$(6); : RETURN 
 7030 PRINT @768,S$(4); : RETURN 
 7040 PRINT @832,S$(3); : RETURN 
 7050 PRINT @832,S$(2); : RETURN 
 7060 PRINT @896,S$(1); : RETURN 
 7100 IF F = 0 RETURN : ELSE BL = NM + 130 : FOR X = 1 TO VB : PRINT @BL,BL$; : FOR JK = 1 TO 5 : NEXT : PRINT @BL,X$; : FOR CX = 1 TO 5 : NEXT : PRINT @BL,BO$; : FOR CV = 1 TO 5 : NEXT : PRINT @BL,X$; : NEXT : RETURN 
 7150 RETURN 
 7200 PRINT @512,S$(7); : IF N3 < .10 THEN P = 6 : ELSE IF N3 < .2 THEN P = 5 : ELSE IF N3 < .3 THEN P = 4 : ELSE IF N3 < .6 THEN P = 3 : ELSE IF N3 < .8 THEN P = 2 : ELSE P = 1
 7205 ON P GOTO 7210,7220,7230,7240,7250,7260
 7210 PRINT @NM,X$; : NM = 212 : PRINT @NM,SP$; : GOSUB 7100 : RETURN 
 7220 PRINT @NM,X$; : NM = 404 : PRINT @NM,SP$; : GOSUB 7100 : RETURN 
 7230 PRINT @NM,X$; : NM = 532 : PRINT @NM,SP$; : GOSUB 7100 : RETURN 
 7240 PRINT @NM,X$; : NM = 660 : PRINT @NM,SP$; : GOSUB 7100 : RETURN 
 7250 PRINT @NM,X$; : NM = 724 : PRINT @NM,SP$; : GOSUB 7100 : RETURN 
 7260 PRINT @NM,X$; : NM = 788 : PRINT @NM,SP$;
 7270 VB = F * 2 : IF F = 0 RETURN : ELSE FOR X = 1 TO VB : PRINT @NM + 128 - 3,BS$; : FOR VN = 1 TO 25 : NEXT : PRINT @NM + 128 - 3,"            "; : FOR VN = 1 TO 5 : NEXT : PRINT @NM - 9 + 64,BB$; : FOR VN = 1 TO 10 : NEXT : PRINT @NM - 9 + 64,BT$; : FOR VN = 1 TO 5 : NEXT : NEXT : RETURN 
 8000 IF V2 > 45 THEN 8100 : ELSE IF V2 > 19 THEN 8200 : ELSE GOTO 8300
 8100 PRINT @NM,X$; : FOR X = 1 TO 20 : PRINT @906, STRING$ (20, CHR$ (149)); : FOR GT = 1 TO 10 : NEXT : PRINT @906, STRING$ (20, CHR$ (176)); : PRINT @838, STRING$ (22, CHR$ (149)); : FOR TG = 1 TO 10 : NEXT : PRINT @838, STRING$ (22," "); : PRINT @715, STRING$ (24, CHR$ (149)); : FOR TG = 1 TO 10 : NEXT 
 8110 PRINT @715, STRING$ (24," "); : PRINT @645, STRING$ (28, CHR$ (149)); : FOR TG = 1 TO 10 : NEXT : PRINT @645, STRING$ (28," "); : NEXT : 
 8200 BN = BN - 1 : PRINT @NM,X$; : PRINT @914,GA$; : FOR CV = 1 TO 5 : X = RND (20) + 39 : FOR Y = 42 TO 33 STEP - 1 : SET (X,Y) : RESET (X,Y) : SET (X + 4,Y) : RESET (X + 4,Y) : NEXT : NEXT : IF BN < 0 THEN RETURN : ELSE GOTO 8200 RETURN 
 8300 PRINT @448,"** WE DID IT CAPTAIN!!!*** ...."; : PRINT @NM,X$; : PRINT @850,SP$; : IF V2 > 5 THEN RETURN 
 8310 PRINT @670,MM$; : PRINT @598,A4$; : PRINT @552,F1$; : X = 80 : FOR Y = 21 TO 44 : SET (X,Y) : NEXT 
 8320 FOR X = 1 TO 45 : PRINT @594,X$; : PRINT @658,A5$; : PRINT @552,F2$; : FOR GG = 1 TO 50 : NEXT : PRINT @552,F3$; : FOR GG = 1 TO 40 : NEXT : PRINT @653,X$; : PRINT @598,A4$; : FOR GG = 1 TO 40 : NEXT : NEXT : RETURN 
 9000 CLS : PRINT "*******======******====--- L A N D E R---====*****=====*******"
 9002 PRINT : PRINT "THIS IS A SPACE LANDER SIMULATER. THE WHOLE IDEA OF THE GAME" : PRINT "IS TO LAND YOUR SHIP WITHOUT DAMAGING EITHER YOU OR IT!!!!!!" : PRINT "THIS ISN'T AS SIMPLE AS IT MIGHT FIRST APPEAR!"
 9005 PRINT "   YOU WILL USE YOUR ROCKETS TO SLOW YOUR VERTICAL DESCENT." : PRINT "ROCKETS FIRE IN 10 SECOND INTERVALS OF BURNS BETWEEN 0-100." : PRINT "YOU MUST INPUT THE APPROPRIATE BURN RATE!! (NO NEG. BURNS!!)" : PRINT "YOU HAVE A CHOICE OF 4 PLANETS OR PLANETOIDS."
 9006 PRINT "THERE IS A CONSTANTLY UPDATED GRAPHIC DISPLAY TO AID YOU" : PRINT "IN YOUR LANDING." : PRINT "TO SURVIVE YOU MUST LAND AT SPEEDS BELOW 20 KM/HR. ": PRINT "ANYTHING OVER THESE SPEEDS WILL DESTROY YOU AND THE SHIP!!!" : PRINT "GOOD LUCK CAPTAIN!!" : PRINT 
 9007 INPUT "HIT ENTER TO CONTINUE!";G$ : CLS : PRINT CHR$ (23) : PRINT : PRINT : PRINT : PRINT "ONE MORE MOMENT PLEASE??......." : PRINT : PRINT : PRINT "INCIDENTALLY NEGATIVE VELOCITY" : PRINT "INDICATES THRUST AWAY FROM THE" : PRINT "PLANET(OID)!!" : RETURN 
