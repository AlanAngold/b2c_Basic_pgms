    1 REM NOTE: Basic language type forced to be:
    2 REM       trs2 - TRS-80 Level II BASIC tokenized file
   10 CLS: CLEAR 1500
   20 PRINT @ 285, "Love"
   30 PRINT @ 409, "Copyright By"
   40 PRINT @ 534, "Creative Computing"
   50 PRINT @ 657, "Morristown, New Jersey 07960"
   60 FOR D= 1 TO 1500: NEXT D
   70 CLS
   80 PRINT @ 194, "A Tribute to The Great American Artist, Robert Indiana."
   90 PRINT @ 325, "His greatest work will be reproduced with a message of"
  100 PRINT @ 389, "Your choice up to 60 Characters.  If you can't think of"
  110 PRINT @ 460, "a message, simply enter the word `LOVE'"
  120 PRINT @ 595,"";:INPUT "YOUR MESSAGE PLEASE..";A$: L = LEN(A$)
  130 DIM B$(120)
  140 PRINT @ 719, "HIT ANY KEY WHEN PRINTER IS READY"
  150 D$=INKEY$: IF D$="" THEN 150
  160 FOR J=0 TO INT(60/L)
  170 FOR I=1 TO L
  180 B$(J*L+I)=MID$(A$,I,1)
  190 NEXT I: NEXT J
  200 C=0
  210 A1=1: P=1: C=C+1: IF C=37 GOTO 640
  220 LPRINT" "
  230 READ A: A1=A1+A: IF P=1 GOTO 250
  240 FOR I=1 TO A: LPRINT" ";: NEXT I: P=1: GOTO 260
  250 FOR I=A1-A TO A1-1: LPRINT B$(I);: NEXT I: P=0
  260 IF A1<61 GOTO 230
  270 GOTO 210
  280 DATA 60
  290 DATA  1, 12, 26,  9, 12
  300 DATA  3,  8, 24, 17,  8
  310 DATA  4,  6, 23, 21,  6
  320 DATA  4,  6, 22, 12,  5,  6,  5
  330 DATA  4,  6, 21, 11,  8,  6,  4
  340 DATA  4,  6, 21, 10, 10,  5,  4
  350 DATA  4,  6, 21,  9, 11,  5,  4
  360 DATA  4,  6, 21,  8, 11,  6,  4
  370 DATA  4,  6, 21,  7, 11,  7,  4
  380 DATA  4,  6, 21,  6, 11,  8,  4
  390 DATA  4,  6, 19,  1,  1,  5, 11,  9,  4
  400 DATA  4,  6, 19,  1,  1,  5, 10, 10,  4
  410 DATA  4,  6, 18,  2,  1,  6,  8, 11,  4
  420 DATA  4,  6, 17,  3,  1,  7,  5, 13,  4
  430 DATA  4,  6, 15,  5,  2, 23,  5
  440 DATA  1, 29,  5, 17,  8
  450 DATA  1, 29,  9,  9, 12
  460 DATA  1, 13,  5, 40,  1
  470 DATA  1, 13,  5, 40,  1
  480 DATA  4,  6, 13,  3, 10,  6, 12,  5,  1
  490 DATA  5,  6, 11,  3, 11,  6, 14,  3,  1
  500 DATA  5,  6, 11,  3, 11,  6, 15,  2,  1
  510 DATA  6,  6,  9,  3, 12,  6, 16,  1,  1
  520 DATA  6,  6,  9,  3, 12,  6,  7,  1, 10
  530 DATA  7,  6,  7,  3, 13,  6,  6,  2, 10
  540 DATA  7,  6,  7,  3, 13, 14, 10
  550 DATA  8,  6,  5,  3, 14,  6,  6,  2, 10
  560 DATA  8,  6,  5,  3, 14,  6,  7,  1, 10
  570 DATA  9,  6,  3,  3, 15,  6, 16,  1,  1
  580 DATA  9,  6,  3,  3, 15,  6, 15,  2,  1
  590 DATA 10,  6,  1,  3, 16,  6, 14,  3,  1
  600 DATA 10, 10, 16,  6, 12,  5,  1
  610 DATA 11,  8, 13, 27,  1
  620 DATA 11,  8, 13, 27,  1
  630 DATA 60
  640 FOR I=1 TO 9: LPRINT" ": NEXT I
