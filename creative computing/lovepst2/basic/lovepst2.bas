# NOTE: Type forced to be:
# trs2 - TRS-80 Level II BASIC tokenized file
   10 : REM ' Love (Ver 11/18/79)
   20 CLS 
   30 CLEAR 500
   40 PRINT "A Tribute to the great american artist, Robert Indiana."
   50 PRINT "His greatest work will be reproduced with a message of"
   60 PRINT "your choice up to 60 characters.  If you can't think of"
   70 PRINT "a message, simply type the word 'LOVE'"
   80 PRINT "or just press <ENTER> for no message"
   90 PRINT 
  100 INPUT "Your message please";A$
  110 L = LEN (A$)
  120 DIM T$(120)
  130 FOR I = 1 TO 15
  140 LPRINT " "
  150 NEXT 
  160 IF A$ = ""THEN L = 1
  170 FOR J = 0 TO INT (60 / L)
  180 FOR I = 1 TO L
  190 IF A$ < > ""T$(J * L + I) = MID$ (A$,I,1) : GOTO 210
  200 T$(J * L + I) = CHR$ (239) : REM ' graphics block
  210 NEXT I
  220 NEXT J
  230 C = 0
  240 LPRINT TAB 10);
  250 A1 = 1
  260 P = 1
  270 C = C + 1
  280 IF C = 37 THEN 550
  290 READ A
  300 A1 = A1 + A
  310 IF P = 1 THEN 370
  320 FOR I = 1 TO A
  330 LPRINT " ";
  340 NEXT 
  350 P = 1
  360 GOTO 410
  370 FOR I = A1 - A TO A1 - 1
  380 LPRINT T$(I);
  390 NEXT 
  400 P = 0
  410 IF A1 > 60 LPRINT " ": GOTO 240
  420 GOTO 290
  430 DATA 60,1,12,26,9,12,3,8,24,17,8,4,6,23,21,6,4,6,22,12,5,6,5
  440 DATA 4,6,21,11,8,6,4,4,6,21,10,10,5,4,4,6,21,9,11,5,4
  450 DATA 4,6,21,8,11,6,4,4,6,21,7,11,7,4,4,6,21,6,11,8,4
  460 DATA 4,6,19,1,1,5,11,9,4,4,6,19,1,1,5,10,10,4,4,6,18,2,1,6,8,11,4
  470 DATA 4,6,17,3,1,7,5,13,4,4,6,15,5,2,23,5,1,29,5,17,8
  480 DATA 1,29,9,9,12,1,13,5,40,1,1,13,5,40,1,4,6,13,3,10,6,12,5,1
  490 DATA 5,6,11,3,11,6,14,3,1,5,6,11,3,11,6,15,2,1
  500 DATA 6,6,9,3,12,6,16,1,1,6,6,9,3,12,6,7,1,10
  510 DATA 7,6,7,3,13,6,6,2,10,7,6,7,3,13,14,10,8,6,5,3,14,6,6,2,10
  520 DATA 8,6,5,3,14,6,7,1,10,9,6,3,3,15,6,16,1,1
  530 DATA 9,6,3,3,15,6,15,2,1,10,6,1,3,16,6,14,3,1,10,10,16,6,12,5,1
  540 DATA 11,8,13,27,1,11,8,13,27,1,60
  550 LPRINT CHR$ (12); CHR$ (12);
  560 END 
