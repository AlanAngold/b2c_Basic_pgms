/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/rabbit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5a19555b96d0 ---------A   01000  PRINT"DO YOU WANT INSTRUCTIONS :";
    0x5a19555b9670 ---------A   01010  INPUT A$
    0x5a19555b99e0 ---------A   01020  IF MID$(A$,1,1)="N" THEN 1220
    0x5a19555b9c40 ---------A   01030  IF MID$(A$,1,1)="n" THEN 1220
    0x5a19555bc100 ---------A   01040  PRINT
    0x5a19555bc160 ---------A   01050  PRINT
    0x5a19555ba680 ---------A   01060  PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    0x5a19555ba7a0 ---------A   01070  PRINT"to come within a certian distance of the computer controlled"
    0x5a19555c18a0 ---------A   01080  PRINT"rabbit, which also moves.  "
    0x5a19555c1a20 ---------A   01090  PRINT"    The way you do this is to hop around (the rabbit hops too) "
    0x5a19555c1b40 ---------A   01100  PRINT"such that your path crosses the rabbit's path at the same time"
    0x5a19555c1cb0 ---------A   01110  PRINT"Or in other words you come close enough to grab the little "
    0x5a19555c1e30 ---------A   01120  PRINT"booger.  "
    0x5a19555c2000 ---------A   01130  PRINT"    Oh by the way your arms are about 20 units long.  The number"
    0x5a19555c21d0 ---------A   01140  PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    0x5a19555c23a0 ---------A   01150  PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    0x5a19555c2570 ---------A   01160  PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    0x5a19555c2740 ---------A   01170  PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    0x5a19555c2900 ---------A   01180  PRINT"so keep that in mind when jumping.  The computer will prompt"
    0x5a19555c2ad0 ---------A   01190  PRINT"you for the direction you want to jump next.  Remember "
    0x5a19555c2c40 ---------A   01200  PRINT"you and the rabbit don't necessarily jump at the same velocity."
    0x5a19555c2d60 ---------A   01210  PRINT"   GOOD LUCK"
    0x5a19555c2e00 ---------A T 01220  PRINT
    0x5a19555c2f60 ---------A   01230  PRINT"                   TYPE 'QUIT' TO STOP."
    0x5a19555c2fc0 ---------A   01240  PRINT
    0x5a19555c3070 ---------A   01250  RANDOMIZE
    0x5a19555c3110 ---------A   01260  REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    0x5a19555c3380 ---------A   01270  LET T = 400
    0x5a19555c33f0 ---------A   01280  REM
    0x5a19555c34c0 ---------A   01290  REM -- INITIALIZE VELOCITIES AND POSITIONS --
    0x5a19555c3550 ---------A   01300  REM
    0x5a19555c3df0 ---------A   01310  LET V1 = INT(RND(0)*10+0.5)*10+50
    0x5a19555c4700 ---------A   01320  LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    0x5a19555c53c0 ---------A T 01330  LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5a19555c5e60 ---------A   01340  LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5a19555c60c0 ---------A   01350  IF Y1 = 0  THEN 1330
    0x5a19555c6320 ---------A   01360  IF X1 = 0 THEN 1330
    0x5a19555c6600 ---------A   01370  LET X2 = 0
    0x5a19555c68e0 ---------A   01380  LET Y2 = 0
    0x5a19555c6a40 ---------A   01390  PRINT"SPEEDS (UNITS/HOP):"
    0x5a19555c6ea0 ---------A   01400  PRINT"RABBIT -";V1,"YOU -";V2
    0x5a19555c6f20 ---------A   01410  PRINT
    0x5a19555c6fa0 ---------A   01420  PRINT
    0x5a19555c7030 ---------A   01430  PRINT
    0x5a19555c7920 ---------A   01440  LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555c7cf0 ---------A   01450  LET P1 = 3.14159/180
    0x5a19555c7fc0 ---------A   01460  LET H1 = 1
    0x5a19555c8030 ---------A   01470  REM
    0x5a19555c80d0 ---------A   01480  REM -- PRINT OUT --
    0x5a19555c8160 ---------A   01490  REM
    0x5a19555c8720 ---------A T 01500  LET D1 = INT(RND(0)*359)
    0x5a19555c8890 ---------A   01510  PRINT"HOP#: ";
    0x5a19555c8c50 ---------A   01520  LET Z = H
    0x5a19555c8cd0 ---------A   01530  GOSUB 2330
    0x5a19555c8e60 ---------A   01540  PRINT"    DISTANCE TO RABBIT: ";
    0x5a19555c9760 ---------A   01550  LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    0x5a19555c97e0 ---------A   01560  GOSUB 2330
    0x5a19555c9960 ---------A   01570  PRINT"    CLOSEST APPROACH: ";
    0x5a19555c9c80 ---------A   01580  LET Z = SQR(C)
    0x5a19555c9cf0 ---------A   01590  GOSUB 2330
    0x5a19555c9d80 ---------A   01600  PRINT
    0x5a19555c9f10 ---------A   01610  PRINT"RABBIT   ---    POSITION:  (";
    0x5a19555ca150 ---------A   01620  LET Z = X1
    0x5a19555ca1c0 ---------A   01630  GOSUB 2280
    0x5a19555ca330 ---------A   01640  PRINT",";
    0x5a19555ca980 ---------A   01650  LET Z = Y1
    0x5a19555caa00 ---------A   01660  GOSUB 2280
    0x5a19555cab80 ---------A   01670  PRINT")     AND DIRECTION:  ";
    0x5a19555cadc0 ---------A   01680  LET Z = D1
    0x5a19555cae30 ---------A   01690  GOSUB 2330
    0x5a19555caec0 ---------A   01700  PRINT
    0x5a19555cb050 ---------A   01710  PRINT"YOU      ---    POSITION:  (";
    0x5a19555cb290 ---------A   01720  LET Z = X2
    0x5a19555cb300 ---------A   01730  GOSUB 2280
    0x5a19555cb470 ---------A   01740  PRINT",";
    0x5a19555cb6b0 ---------A   01750  LET Z = Y2
    0x5a19555cb730 ---------A   01760  GOSUB 2280
    0x5a19555cb8a0 ---------A   01770  PRINT")     AND DIRECTION: ";
    0x5a19555cb940 ---------A   01780  GOTO 1800
    0x5a19555cbac0 ---------A T 01790  PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    0x5a19555cbc20 ---------A T 01800  INPUT A$
    0x5a19555cbf10 ---------A   01810  DIM A(15)
    0x5a19555cca00 ---------A   01820  LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    0x5a19555ccc10 ---------A   01830  CHANGE A$ TO A
    0x5a19555ccfe0 ---------A   01840  FOR I = 1 TO 15
    0x5a19555cd330 ---------A   01850      IF A(I) = 0 THEN 1910
    0x5a19555cd680 ---------A   01859      IF A(I) =113 THEN 2240
    0x5a19555cd9d0 ---------A   01860      IF A(I) = 81 THEN 2240
    0x5a19555cde20 ---------A   01870      IF A(I)-48 < 0 THEN 1790
    0x5a19555ce260 ---------A   01880      IF A(I)-48 > 9 THEN 1790
    0x5a19555ce3a0 ---------A   01890  NEXT I
    0x5a19555ce430 ---------A   01900  GO TO 1790
    0x5a19555ce8f0 ---------A T 01910  FOR J = 1 TO I-1
    0x5a19555cf2f0 ---------A   01920      D2=D2+(A(I-J)-48)*10^(J-1)
    0x5a19555cf420 ---------A   01930  NEXT J
    0x5a19555cf6b0 ---------A   01940  IF D2 < 0 THEN 1790
    0x5a19555cf910 ---------A   01950  IF D2 >= 360 THEN 1790
    0x5a19555cf990 ---------A   01960  PRINT
    0x5a19555cfa10 ---------A   01970  PRINT
    0x5a19555cfa90 ---------A   01980  REM
    0x5a19555cfb60 ---------A   01990  REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    0x5a19555cfbf0 ---------A   02000  REM
    0x5a19555d0340 ---------A   02010  LET X3 = V1*COS(D1*P1)/100
    0x5a19555d0a60 ---------A   02020  LET Y3 = V1*SIN(D1*P1)/100
    0x5a19555d1180 ---------A   02030  LET X4 = V2*COS(D2*P1)/100
    0x5a19555d18a0 ---------A   02040  LET Y4 = V2*SIN(D2*P1)/100
    0x5a19555d20b0 ---------A   02050  LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555d2380 ---------A   02060  FOR I = 1 TO 100
    0x5a19555d26e0 ---------A   02070      LET X1 = X1+X3
    0x5a19555d2a30 ---------A   02080      LET Y1 = Y1+Y3
    0x5a19555d2d80 ---------A   02090      LET X2 = X2+X4
    0x5a19555d30f0 ---------A   02100      LET Y2 = Y2+Y4
    0x5a19555d3950 ---------A   02110      IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2130
    0x5a19555d4170 ---------A   02120      C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555d42a0 ---------A T 02130  NEXT I
    0x5a19555d45f0 ---------A   02140  LET H = H+1
    0x5a19555d4860 ---------A   02150  IF C > T THEN 1500
    0x5a19555d48e0 ---------A   02160  PRINT
    0x5a19555d4960 ---------A   02170  PRINT
    0x5a19555d4ac0 ---------A   02180  PRINT"**********"
    0x5a19555d4c20 ---------A   02190  PRINT"* GOT YA *"
    0x5a19555d4d80 ---------A   02200  PRINT"**********"
    0x5a19555d4e00 ---------A   02210  PRINT
    0x5a19555d4e80 ---------A   02220  PRINT
    0x5a19555d4f00 ---------A   02230  PRINT
    0x5a19555d4f60 ---------A T 02240  STOP
    0x5a19555d4fe0 ---------B   02250  REM
    0x5a19555d50c0 ---------B   02260  REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    0x5a19555d5150 ---------B   02270  REM
    0x5a19555d5bd0 ---------B G 02280  IF Z < 0 THEN 2310
    0x5a19555d5d50 ---------B   02290  PRINT "+";
    0x5a19555d5dd0 ---------B   02300  GOTO 2330
    0x5a19555d5f40 ---------B T 02310  PRINT"-";
    0x5a19555d6180 ---------B   02320  LET Z = -Z
    0x5a19555d65a0 ---------B B 02330  LET Z = INT(Z+0.5)
    0x5a19555d6890 ---------B   02340  LET S$ = "0123456789"
    0x5a19555d6b70 ---------B   02350  FOR I = 1 TO 4
    0x5a19555d72c0 ---------B   02360      LET W = INT(Z/10^(4-I))
    0x5a19555d77c0 ---------B   02370      PRINT MID$(S$,W+1,1);
    0x5a19555d7e80 ---------B   02380      LET Z = Z-W*10^(4-I)
    0x5a19555d7fb0 ---------B   02390  NEXT I
    0x5a19555d8020 ---------B   02400  RETURN
    0x5a19555d8080 ---------A   02410  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01220      01020T, 01030T
     01330      01350T, 01360T
     01500      02150T
     01790      01870T, 01880T, 01900T, 01940T, 01950T
     01800      01780T
     01910      01850T
     02130      02110T
     02240      01859T, 01860T
     02280      01630G, 01660G, 01730G, 01760G
     02310      02280T
     02330      01530G, 01560G, 01590G, 01690G, 02300T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5a19555b96d0 (01000)   0x5a19555b96d0 (01000)   0x5a19555d8080 (02410)   0x5a19555d8080 (02410)   
   B) 0x5a19555d4fe0 (02250)   0x5a19555d5bd0 (02280)   0x5a19555d8020 (02400)   0x5a19555d8020 (02400)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/rabbit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5a19555b96d0 ---------A   01000  PRINT"DO YOU WANT INSTRUCTIONS :";
    0x5a19555b9670 ---------A   01010  INPUT A$
    0x5a19555b99e0 ---------A   01020  IF MID$(A$,1,1)="N" THEN 1220
    0x5a19555b9c40 ---------A   01030  IF MID$(A$,1,1)="n" THEN 1220
    0x5a19555bc100 ---------A   01040  PRINT
    0x5a19555bc160 ---------A   01050  PRINT
    0x5a19555ba680 ---------A   01060  PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    0x5a19555ba7a0 ---------A   01070  PRINT"to come within a certian distance of the computer controlled"
    0x5a19555c18a0 ---------A   01080  PRINT"rabbit, which also moves.  "
    0x5a19555c1a20 ---------A   01090  PRINT"    The way you do this is to hop around (the rabbit hops too) "
    0x5a19555c1b40 ---------A   01100  PRINT"such that your path crosses the rabbit's path at the same time"
    0x5a19555c1cb0 ---------A   01110  PRINT"Or in other words you come close enough to grab the little "
    0x5a19555c1e30 ---------A   01120  PRINT"booger.  "
    0x5a19555c2000 ---------A   01130  PRINT"    Oh by the way your arms are about 20 units long.  The number"
    0x5a19555c21d0 ---------A   01140  PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    0x5a19555c23a0 ---------A   01150  PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    0x5a19555c2570 ---------A   01160  PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    0x5a19555c2740 ---------A   01170  PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    0x5a19555c2900 ---------A   01180  PRINT"so keep that in mind when jumping.  The computer will prompt"
    0x5a19555c2ad0 ---------A   01190  PRINT"you for the direction you want to jump next.  Remember "
    0x5a19555c2c40 ---------A   01200  PRINT"you and the rabbit don't necessarily jump at the same velocity."
    0x5a19555c2d60 ---------A   01210  PRINT"   GOOD LUCK"
    0x5a19555c2e00 ---------A T 01220  PRINT
    0x5a19555c2f60 ---------A   01230  PRINT"                   TYPE 'QUIT' TO STOP."
    0x5a19555c2fc0 ---------A   01240  PRINT
    0x5a19555c3070 ---------A   01250  RANDOMIZE
    0x5a19555c3110 ---------A   01260  REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    0x5a19555c3380 ---------A   01270  LET T = 400
    0x5a19555c33f0 ---------A   01280  REM
    0x5a19555c34c0 ---------A   01290  REM -- INITIALIZE VELOCITIES AND POSITIONS --
    0x5a19555c3550 ---------A   01300  REM
    0x5a19555c3df0 ---------A   01310  LET V1 = INT(RND(0)*10+0.5)*10+50
    0x5a19555c4700 ---------A   01320  LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    0x5a19555c53c0 ---------A T 01330  LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5a19555c5e60 ---------A   01340  LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5a19555c60c0 ---------A   01350  IF Y1 = 0  THEN 1330
    0x5a19555c6320 ---------A   01360  IF X1 = 0 THEN 1330
    0x5a19555c6600 ---------A   01370  LET X2 = 0
    0x5a19555c68e0 ---------A   01380  LET Y2 = 0
    0x5a19555c6a40 ---------A   01390  PRINT"SPEEDS (UNITS/HOP):"
    0x5a19555c6ea0 ---------A   01400  PRINT"RABBIT -";V1,"YOU -";V2
    0x5a19555c6f20 ---------A   01410  PRINT
    0x5a19555c6fa0 ---------A   01420  PRINT
    0x5a19555c7030 ---------A   01430  PRINT
    0x5a19555c7920 ---------A   01440  LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555c7cf0 ---------A   01450  LET P1 = 3.14159/180
    0x5a19555c7fc0 ---------A   01460  LET H1 = 1
    0x5a19555c8030 ---------A   01470  REM
    0x5a19555c80d0 ---------A   01480  REM -- PRINT OUT --
    0x5a19555c8160 ---------A   01490  REM
    0x5a19555c8720 ---------A T 01500  LET D1 = INT(RND(0)*359)
    0x5a19555c8890 ---------A   01510  PRINT"HOP#: ";
    0x5a19555c8c50 ---------A   01520  LET Z = H
    0x5a19555c8cd0 ---------A   01530  GOSUB 2330
    0x5a19555c8e60 ---------A   01540  PRINT"    DISTANCE TO RABBIT: ";
    0x5a19555c9760 ---------A   01550  LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    0x5a19555c97e0 ---------A   01560  GOSUB 2330
    0x5a19555c9960 ---------A   01570  PRINT"    CLOSEST APPROACH: ";
    0x5a19555c9c80 ---------A   01580  LET Z = SQR(C)
    0x5a19555c9cf0 ---------A   01590  GOSUB 2330
    0x5a19555c9d80 ---------A   01600  PRINT
    0x5a19555c9f10 ---------A   01610  PRINT"RABBIT   ---    POSITION:  (";
    0x5a19555ca150 ---------A   01620  LET Z = X1
    0x5a19555ca1c0 ---------A   01630  GOSUB 2280
    0x5a19555ca330 ---------A   01640  PRINT",";
    0x5a19555ca980 ---------A   01650  LET Z = Y1
    0x5a19555caa00 ---------A   01660  GOSUB 2280
    0x5a19555cab80 ---------A   01670  PRINT")     AND DIRECTION:  ";
    0x5a19555cadc0 ---------A   01680  LET Z = D1
    0x5a19555cae30 ---------A   01690  GOSUB 2330
    0x5a19555caec0 ---------A   01700  PRINT
    0x5a19555cb050 ---------A   01710  PRINT"YOU      ---    POSITION:  (";
    0x5a19555cb290 ---------A   01720  LET Z = X2
    0x5a19555cb300 ---------A   01730  GOSUB 2280
    0x5a19555cb470 ---------A   01740  PRINT",";
    0x5a19555cb6b0 ---------A   01750  LET Z = Y2
    0x5a19555cb730 ---------A   01760  GOSUB 2280
    0x5a19555cb8a0 ---------A   01770  PRINT")     AND DIRECTION: ";
    0x5a19555cb940 ---------A   01780  GOTO 1800
    0x5a19555cbac0 ---------A T 01790  PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    0x5a19555cbc20 ---------A T 01800  INPUT A$
    0x5a19555cbf10 ---------A   01810  DIM A(15)
    0x5a19555cca00 ---------A   01820  LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    0x5a19555ccc10 ---------A   01830  CHANGE A$ TO A
    0x5a19555ccfe0 ---------A   01840  FOR I = 1 TO 15
    0x5a19555cd330 ---------A   01850  IF A(I) = 0 THEN 1910
    0x5a19555cd680 ---------A   01859  IF A(I) =113 THEN 2240
    0x5a19555cd9d0 ---------A   01860  IF A(I) = 81 THEN 2240
    0x5a19555cde20 ---------A   01870  IF A(I)-48 < 0 THEN 1790
    0x5a19555ce260 ---------A   01880  IF A(I)-48 > 9 THEN 1790
    0x5a19555ce3a0 ---------A   01890  NEXT I
    0x5a19555ce430 ---------A   01900  GO TO 1790
    0x5a19555ce8f0 ---------A T 01910  FOR J = 1 TO I-1
    0x5a19555cf2f0 ---------A   01920  D2=D2+(A(I-J)-48)*10^(J-1)
    0x5a19555cf420 ---------A   01930  NEXT J
    0x5a19555cf6b0 ---------A   01940  IF D2 < 0 THEN 1790
    0x5a19555cf910 ---------A   01950  IF D2 >= 360 THEN 1790
    0x5a19555cf990 ---------A   01960  PRINT
    0x5a19555cfa10 ---------A   01970  PRINT
    0x5a19555cfa90 ---------A   01980  REM
    0x5a19555cfb60 ---------A   01990  REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    0x5a19555cfbf0 ---------A   02000  REM
    0x5a19555d0340 ---------A   02010  LET X3 = V1*COS(D1*P1)/100
    0x5a19555d0a60 ---------A   02020  LET Y3 = V1*SIN(D1*P1)/100
    0x5a19555d1180 ---------A   02030  LET X4 = V2*COS(D2*P1)/100
    0x5a19555d18a0 ---------A   02040  LET Y4 = V2*SIN(D2*P1)/100
    0x5a19555d20b0 ---------A   02050  LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555d2380 ---------A   02060  FOR I = 1 TO 100
    0x5a19555d26e0 ---------A   02070  LET X1 = X1+X3
    0x5a19555d2a30 ---------A   02080  LET Y1 = Y1+Y3
    0x5a19555d2d80 ---------A   02090  LET X2 = X2+X4
    0x5a19555d30f0 ---------A   02100  LET Y2 = Y2+Y4
    0x5a19555d3950 ---------A   02110  IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2130
    0x5a19555d4170 ---------A   02120  C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555d42a0 ---------A T 02130  NEXT I
    0x5a19555d45f0 ---------A   02140  LET H = H+1
    0x5a19555d4860 ---------A   02150  IF C > T THEN 1500
    0x5a19555d48e0 ---------A   02160  PRINT
    0x5a19555d4960 ---------A   02170  PRINT
    0x5a19555d4ac0 ---------A   02180  PRINT"**********"
    0x5a19555d4c20 ---------A   02190  PRINT"* GOT YA *"
    0x5a19555d4d80 ---------A   02200  PRINT"**********"
    0x5a19555d4e00 ---------A   02210  PRINT
    0x5a19555d4e80 ---------A   02220  PRINT
    0x5a19555d4f00 ---------A   02230  PRINT
    0x5a19555d4f60 ---------A T 02240  STOP
    0x5a19555d4fe0 ---------B   02250  REM
    0x5a19555d50c0 ---------B   02260  REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    0x5a19555d5150 ---------B   02270  REM
    0x5a19555d5bd0 ---------B G 02280  IF Z < 0 THEN 2310
    0x5a19555d5d50 ---------B   02290  PRINT "+";
    0x5a19555d5dd0 ---------B   02300  GOTO 2330
    0x5a19555d5f40 ---------B T 02310  PRINT"-";
    0x5a19555d6180 ---------B   02320  LET Z = -Z
    0x5a19555d65a0 ---------B B 02330  LET Z = INT(Z+0.5)
    0x5a19555d6890 ---------B   02340  LET S$ = "0123456789"
    0x5a19555d6b70 ---------B   02350  FOR I = 1 TO 4
    0x5a19555d72c0 ---------B   02360  LET W = INT(Z/10^(4-I))
    0x5a19555d77c0 ---------B   02370  PRINT MID$(S$,W+1,1);
    0x5a19555d7e80 ---------B   02380  LET Z = Z-W*10^(4-I)
    0x5a19555d7fb0 ---------B   02390  NEXT I
    0x5a19555d8020 ---------B   02400  RETURN
    0x5a19555d8080 ---------A   02410  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/rabbit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5a19555b96d0 ---------A   01000  PRINT"DO YOU WANT INSTRUCTIONS :";
    0x5a19555b9670 ---------A   01010  INPUT A$
    0x5a19555b99e0 ---------A   01020  IF MID$(A$,1,1)="N" THEN 1220
    0x5a19555b9c40 ---------A   01030  IF MID$(A$,1,1)="n" THEN 1220
    0x5a19555bc100 ---------A   01040  PRINT
    0x5a19555bc160 ---------A   01050  PRINT
    0x5a19555ba680 ---------A   01060  PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    0x5a19555ba7a0 ---------A   01070  PRINT"to come within a certian distance of the computer controlled"
    0x5a19555c18a0 ---------A   01080  PRINT"rabbit, which also moves.  "
    0x5a19555c1a20 ---------A   01090  PRINT"    The way you do this is to hop around (the rabbit hops too) "
    0x5a19555c1b40 ---------A   01100  PRINT"such that your path crosses the rabbit's path at the same time"
    0x5a19555c1cb0 ---------A   01110  PRINT"Or in other words you come close enough to grab the little "
    0x5a19555c1e30 ---------A   01120  PRINT"booger.  "
    0x5a19555c2000 ---------A   01130  PRINT"    Oh by the way your arms are about 20 units long.  The number"
    0x5a19555c21d0 ---------A   01140  PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    0x5a19555c23a0 ---------A   01150  PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    0x5a19555c2570 ---------A   01160  PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    0x5a19555c2740 ---------A   01170  PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    0x5a19555c2900 ---------A   01180  PRINT"so keep that in mind when jumping.  The computer will prompt"
    0x5a19555c2ad0 ---------A   01190  PRINT"you for the direction you want to jump next.  Remember "
    0x5a19555c2c40 ---------A   01200  PRINT"you and the rabbit don't necessarily jump at the same velocity."
    0x5a19555c2d60 ---------A   01210  PRINT"   GOOD LUCK"
    0x5a19555c2e00 ---------A T 01220  PRINT
    0x5a19555c2f60 ---------A   01230  PRINT"                   TYPE 'QUIT' TO STOP."
    0x5a19555c2fc0 ---------A   01240  PRINT
    0x5a19555c3070 ---------A   01250  RANDOMIZE
    0x5a19555c3110 ---------A   01260  REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    0x5a19555c3380 ---------A   01270  LET T = 400
    0x5a19555c33f0 ---------A   01280  REM
    0x5a19555c34c0 ---------A   01290  REM -- INITIALIZE VELOCITIES AND POSITIONS --
    0x5a19555c3550 ---------A   01300  REM
    0x5a19555c3df0 ---------A   01310  LET V1 = INT(RND(0)*10+0.5)*10+50
    0x5a19555c4700 ---------A   01320  LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    0x5a19555c53c0 ---------A T 01330  LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5a19555c5e60 ---------A   01340  LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5a19555c60c0 ---------A   01350  IF Y1 = 0  THEN 1330
    0x5a19555c6320 ---------A   01360  IF X1 = 0 THEN 1330
    0x5a19555c6600 ---------A   01370  LET X2 = 0
    0x5a19555c68e0 ---------A   01380  LET Y2 = 0
    0x5a19555c6a40 ---------A   01390  PRINT"SPEEDS (UNITS/HOP):"
    0x5a19555c6ea0 ---------A   01400  PRINT"RABBIT -";V1,"YOU -";V2
    0x5a19555c6f20 ---------A   01410  PRINT
    0x5a19555c6fa0 ---------A   01420  PRINT
    0x5a19555c7030 ---------A   01430  PRINT
    0x5a19555c7920 ---------A   01440  LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555c7cf0 ---------A   01450  LET P1 = 3.14159/180
    0x5a19555c7fc0 ---------A   01460  LET H1 = 1
    0x5a19555c8030 ---------A   01470  REM
    0x5a19555c80d0 ---------A   01480  REM -- PRINT OUT --
    0x5a19555c8160 ---------A   01490  REM
    0x5a19555c8720 ---------A T 01500  LET D1 = INT(RND(0)*359)
    0x5a19555c8890 ---------A   01510  PRINT"HOP#: ";
    0x5a19555c8c50 ---------A   01520  LET Z = H
    0x5a19555c8cd0 ---------A   01530  GOSUB 2340
    0x5a19555c8e60 ---------A   01540  PRINT"    DISTANCE TO RABBIT: ";
    0x5a19555c9760 ---------A   01550  LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    0x5a19555c97e0 ---------A   01560  GOSUB 2340
    0x5a19555c9960 ---------A   01570  PRINT"    CLOSEST APPROACH: ";
    0x5a19555c9c80 ---------A   01580  LET Z = SQR(C)
    0x5a19555c9cf0 ---------A   01590  GOSUB 2340
    0x5a19555c9d80 ---------A   01600  PRINT
    0x5a19555c9f10 ---------A   01610  PRINT"RABBIT   ---    POSITION:  (";
    0x5a19555ca150 ---------A   01620  LET Z = X1
    0x5a19555ca1c0 ---------A   01630  GOSUB 2290
    0x5a19555ca330 ---------A   01640  PRINT",";
    0x5a19555ca980 ---------A   01650  LET Z = Y1
    0x5a19555caa00 ---------A   01660  GOSUB 2290
    0x5a19555cab80 ---------A   01670  PRINT")     AND DIRECTION:  ";
    0x5a19555cadc0 ---------A   01680  LET Z = D1
    0x5a19555cae30 ---------A   01690  GOSUB 2340
    0x5a19555caec0 ---------A   01700  PRINT
    0x5a19555cb050 ---------A   01710  PRINT"YOU      ---    POSITION:  (";
    0x5a19555cb290 ---------A   01720  LET Z = X2
    0x5a19555cb300 ---------A   01730  GOSUB 2290
    0x5a19555cb470 ---------A   01740  PRINT",";
    0x5a19555cb6b0 ---------A   01750  LET Z = Y2
    0x5a19555cb730 ---------A   01760  GOSUB 2290
    0x5a19555cb8a0 ---------A   01770  PRINT")     AND DIRECTION: ";
    0x5a19555cb940 ---------A   01780  GOTO 1800
    0x5a19555cbac0 ---------A T 01790  PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    0x5a19555cbc20 ---------A T 01800  INPUT A$
    0x5a19555cbf10 ---------A   01810  DIM A(15)
    0x5a19555cca00 ---------A   01820  LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    0x5a19555ccc10 ---------A   01830  CHANGE A$ TO A
    0x5a19555ccfe0 ---------A   01840  FOR I = 1 TO 15
    0x5a19555cd330 ---------A   01850  IF A(I) = 0 THEN 1920
    0x5a19555cd680 ---------A   01860  IF A(I) =113 THEN 2250
    0x5a19555cd9d0 ---------A   01870  IF A(I) = 81 THEN 2250
    0x5a19555cde20 ---------A   01880  IF A(I)-48 < 0 THEN 1790
    0x5a19555ce260 ---------A   01890  IF A(I)-48 > 9 THEN 1790
    0x5a19555ce3a0 ---------A   01900  NEXT I
    0x5a19555ce430 ---------A T 01910  GO TO 1790
    0x5a19555ce8f0 ---------A   01920  FOR J = 1 TO I-1
    0x5a19555cf2f0 ---------A   01930  D2=D2+(A(I-J)-48)*10^(J-1)
    0x5a19555cf420 ---------A   01940  NEXT J
    0x5a19555cf6b0 ---------A   01950  IF D2 < 0 THEN 1790
    0x5a19555cf910 ---------A   01960  IF D2 >= 360 THEN 1790
    0x5a19555cf990 ---------A   01970  PRINT
    0x5a19555cfa10 ---------A   01980  PRINT
    0x5a19555cfa90 ---------A   01990  REM
    0x5a19555cfb60 ---------A   02000  REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    0x5a19555cfbf0 ---------A   02010  REM
    0x5a19555d0340 ---------A   02020  LET X3 = V1*COS(D1*P1)/100
    0x5a19555d0a60 ---------A   02030  LET Y3 = V1*SIN(D1*P1)/100
    0x5a19555d1180 ---------A   02040  LET X4 = V2*COS(D2*P1)/100
    0x5a19555d18a0 ---------A   02050  LET Y4 = V2*SIN(D2*P1)/100
    0x5a19555d20b0 ---------A   02060  LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555d2380 ---------A   02070  FOR I = 1 TO 100
    0x5a19555d26e0 ---------A   02080  LET X1 = X1+X3
    0x5a19555d2a30 ---------A   02090  LET Y1 = Y1+Y3
    0x5a19555d2d80 ---------A   02100  LET X2 = X2+X4
    0x5a19555d30f0 ---------A   02110  LET Y2 = Y2+Y4
    0x5a19555d3950 ---------A   02120  IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2140
    0x5a19555d4170 ---------A T 02130  C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555d42a0 ---------A   02140  NEXT I
    0x5a19555d45f0 ---------A   02150  LET H = H+1
    0x5a19555d4860 ---------A   02160  IF C > T THEN 1500
    0x5a19555d48e0 ---------A   02170  PRINT
    0x5a19555d4960 ---------A   02180  PRINT
    0x5a19555d4ac0 ---------A   02190  PRINT"**********"
    0x5a19555d4c20 ---------A   02200  PRINT"* GOT YA *"
    0x5a19555d4d80 ---------A   02210  PRINT"**********"
    0x5a19555d4e00 ---------A   02220  PRINT
    0x5a19555d4e80 ---------A   02230  PRINT
    0x5a19555d4f00 ---------A T 02240  PRINT
    0x5a19555d4f60 ---------A   02250  STOP
    0x5a19555d4fe0 ---------B   02260  REM
    0x5a19555d50c0 ---------B   02270  REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    0x5a19555d5150 ---------B G 02280  REM
    0x5a19555d5bd0 ---------B   02290  IF Z < 0 THEN 2320
    0x5a19555d5d50 ---------B   02300  PRINT "+";
    0x5a19555d5dd0 ---------B T 02310  GOTO 2340
    0x5a19555d5f40 ---------B   02320  PRINT"-";
    0x5a19555d6180 ---------B B 02330  LET Z = -Z
    0x5a19555d65a0 ---------B   02340  LET Z = INT(Z+0.5)
    0x5a19555d6890 ---------B   02350  LET S$ = "0123456789"
    0x5a19555d6b70 ---------B   02360  FOR I = 1 TO 4
    0x5a19555d72c0 ---------B   02370  LET W = INT(Z/10^(4-I))
    0x5a19555d77c0 ---------B   02380  PRINT MID$(S$,W+1,1);
    0x5a19555d7e80 ---------B   02390  LET Z = Z-W*10^(4-I)
    0x5a19555d7fb0 ---------B   02400  NEXT I
    0x5a19555d8020 ---------B   02410  RETURN
    0x5a19555d8080 ---------A   02420  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02440 - 10000    7570 

 */



/*
 *  Symbol Table Listing for 'basic/rabbit.bas'
 *
    A               Array    Integer         {0,14} 
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D1                       Integer     
    D2                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
    H1                       Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
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
    OCT$            Function String          args=1, float  
    P1                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S$                       String      
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V1                       Integer     
    V2                       Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X1                       Integer     
    X2                       Integer     
    X3                       Integer     
    X4                       Integer     
    Y1                       Integer     
    Y2                       Integer     
    Y3                       Integer     
    Y4                       Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/rabbit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5a19555b96d0 ---------A   01000  PRINT"DO YOU WANT INSTRUCTIONS :";
    0x5a19555b9670 ---------A   01010  INPUT A$
    0x5a19555b99e0 ---------A   01020  IF MID$(A$,1,1)="N" THEN 1220
    0x5a19555b9c40 ---------A   01030  IF MID$(A$,1,1)="n" THEN 1220
    0x5a19555bc100 ---------A   01040  PRINT
    0x5a19555bc160 ---------A   01050  PRINT
    0x5a19555ba680 ---------A   01060  PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    0x5a19555ba7a0 ---------A   01070  PRINT"to come within a certian distance of the computer controlled"
    0x5a19555c18a0 ---------A   01080  PRINT"rabbit, which also moves.  "
    0x5a19555c1a20 ---------A   01090  PRINT"    The way you do this is to hop around (the rabbit hops too) "
    0x5a19555c1b40 ---------A   01100  PRINT"such that your path crosses the rabbit's path at the same time"
    0x5a19555c1cb0 ---------A   01110  PRINT"Or in other words you come close enough to grab the little "
    0x5a19555c1e30 ---------A   01120  PRINT"booger.  "
    0x5a19555c2000 ---------A   01130  PRINT"    Oh by the way your arms are about 20 units long.  The number"
    0x5a19555c21d0 ---------A   01140  PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    0x5a19555c23a0 ---------A   01150  PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    0x5a19555c2570 ---------A   01160  PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    0x5a19555c2740 ---------A   01170  PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    0x5a19555c2900 ---------A   01180  PRINT"so keep that in mind when jumping.  The computer will prompt"
    0x5a19555c2ad0 ---------A   01190  PRINT"you for the direction you want to jump next.  Remember "
    0x5a19555c2c40 ---------A   01200  PRINT"you and the rabbit don't necessarily jump at the same velocity."
    0x5a19555c2d60 ---------A   01210  PRINT"   GOOD LUCK"
    0x5a19555c2e00 ---------A T 01220  PRINT
    0x5a19555c2f60 ---------A   01230  PRINT"                   TYPE 'QUIT' TO STOP."
    0x5a19555c2fc0 ---------A   01240  PRINT
    0x5a19555c3070 ---------A   01250  RANDOMIZE
    0x5a19555c3110 ---------A   01260  REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    0x5a19555c3380 ---------A   01270  LET T = 400
    0x5a19555c33f0 ---------A   01280  REM
    0x5a19555c34c0 ---------A   01290  REM -- INITIALIZE VELOCITIES AND POSITIONS --
    0x5a19555c3550 ---------A   01300  REM
    0x5a19555c3df0 ---------A   01310  LET V1 = INT(RND(0)*10+0.5)*10+50
    0x5a19555c4700 ---------A   01320  LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    0x5a19555c53c0 ---------A T 01330  LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5a19555c5e60 ---------A   01340  LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5a19555c60c0 ---------A   01350  IF Y1 = 0  THEN 1330
    0x5a19555c6320 ---------A   01360  IF X1 = 0 THEN 1330
    0x5a19555c6600 ---------A   01370  LET X2 = 0
    0x5a19555c68e0 ---------A   01380  LET Y2 = 0
    0x5a19555c6a40 ---------A   01390  PRINT"SPEEDS (UNITS/HOP):"
    0x5a19555c6ea0 ---------A   01400  PRINT"RABBIT -";V1,"YOU -";V2
    0x5a19555c6f20 ---------A   01410  PRINT
    0x5a19555c6fa0 ---------A   01420  PRINT
    0x5a19555c7030 ---------A   01430  PRINT
    0x5a19555c7920 ---------A   01440  LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555c7cf0 ---------A   01450  LET P1 = 3.14159/180
    0x5a19555c7fc0 ---------A   01460  LET H1 = 1
    0x5a19555c8030 ---------A   01470  REM
    0x5a19555c80d0 ---------A   01480  REM -- PRINT OUT --
    0x5a19555c8160 ---------A   01490  REM
    0x5a19555c8720 ---------A T 01500  LET D1 = INT(RND(0)*359)
    0x5a19555c8890 ---------A   01510  PRINT"HOP#: ";
    0x5a19555c8c50 ---------A   01520  LET Z = H
    0x5a19555c8cd0 ---------A   01530  GOSUB 2350
    0x5a19555c8e60 ---------A   01540  PRINT"    DISTANCE TO RABBIT: ";
    0x5a19555c9760 ---------A   01550  LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    0x5a19555c97e0 ---------A   01560  GOSUB 2350
    0x5a19555c9960 ---------A   01570  PRINT"    CLOSEST APPROACH: ";
    0x5a19555c9c80 ---------A   01580  LET Z = SQR(C)
    0x5a19555c9cf0 ---------A   01590  GOSUB 2350
    0x5a19555c9d80 ---------A   01600  PRINT
    0x5a19555c9f10 ---------A   01610  PRINT"RABBIT   ---    POSITION:  (";
    0x5a19555ca150 ---------A   01620  LET Z = X1
    0x5a19555ca1c0 ---------A   01630  GOSUB 2300
    0x5a19555ca330 ---------A   01640  PRINT",";
    0x5a19555ca980 ---------A   01650  LET Z = Y1
    0x5a19555caa00 ---------A   01660  GOSUB 2300
    0x5a19555cab80 ---------A   01670  PRINT")     AND DIRECTION:  ";
    0x5a19555cadc0 ---------A   01680  LET Z = D1
    0x5a19555cae30 ---------A   01690  GOSUB 2350
    0x5a19555caec0 ---------A   01700  PRINT
    0x5a19555cb050 ---------A   01710  PRINT"YOU      ---    POSITION:  (";
    0x5a19555cb290 ---------A   01720  LET Z = X2
    0x5a19555cb300 ---------A   01730  GOSUB 2300
    0x5a19555cb470 ---------A   01740  PRINT",";
    0x5a19555cb6b0 ---------A   01750  LET Z = Y2
    0x5a19555cb730 ---------A   01760  GOSUB 2300
    0x5a19555cb8a0 ---------A   01770  PRINT")     AND DIRECTION: ";
    0x5a19555cb940 ---------A   01780  GOTO 1800
    0x5a19555cbac0 ---------A T 01790  PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    0x5a19555cbc20 ---------A T 01800  INPUT A$
    0x5a19555cbf10 ---------A   01810  DIM A(15)
    0x5a19555cca00 ---------A   01820  LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    0x5a19555ccc10 ---------A   01830  CHANGE A$ TO A
    0x5a19555ccfe0 ---------A   01840  FOR I = 1 TO 15
    0x5a19555cd330 ---------A   01850  IF A(I) = 0 THEN 1920
    0x5a19555cd680 ---------A   01860  IF A(I) =113 THEN 2250
    0x5a19555cd9d0 ---------A   01870  IF A(I) = 81 THEN 2250
    0x5a19555cde20 ---------A   01880  IF A(I)-48 < 0 THEN 1790
    0x5a19555ce260 ---------A   01890  IF A(I)-48 > 9 THEN 1790
    0x5a19555ce3a0 ---------A   01900  NEXT I
    0x5a19555ce430 ---------A   01910  GO TO 1790
    0x5a19555ce8f0 ---------A T 01920  FOR J = 1 TO I-1
    0x5a19555cf2f0 ---------A   01930  D2=D2+(A(I-J)-48)*10^(J-1)
    0x5a19555cf420 ---------A   01940  NEXT J
    0x5a19555cf6b0 ---------A   01950  IF D2 < 0 THEN 1790
    0x5a19555cf910 ---------A   01960  IF D2 >= 360 THEN 1790
    0x5a19555cf990 ---------A   01970  PRINT
    0x5a19555cfa10 ---------A   01980  PRINT
    0x5a19555cfa90 ---------A   01990  REM
    0x5a19555cfb60 ---------A   02000  REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    0x5a19555cfbf0 ---------A   02010  REM
    0x5a19555d0340 ---------A   02020  LET X3 = V1*COS(D1*P1)/100
    0x5a19555d0a60 ---------A   02030  LET Y3 = V1*SIN(D1*P1)/100
    0x5a19555d1180 ---------A   02040  LET X4 = V2*COS(D2*P1)/100
    0x5a19555d18a0 ---------A   02050  LET Y4 = V2*SIN(D2*P1)/100
    0x5a19555d20b0 ---------A   02060  LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555d2380 ---------A   02070  FOR I = 1 TO 100
    0x5a19555d26e0 ---------A   02080  LET X1 = X1+X3
    0x5a19555d2a30 ---------A   02090  LET Y1 = Y1+Y3
    0x5a19555d2d80 ---------A   02100  LET X2 = X2+X4
    0x5a19555d30f0 ---------A   02110  LET Y2 = Y2+Y4
    0x5a19555d3950 ---------A   02120  IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2140
    0x5a19555d4170 ---------A   02130  C = (X2-X1)^2+(Y2-Y1)^2
    0x5a19555d42a0 ---------A T 02140  NEXT I
    0x5a19555d45f0 ---------A   02150  LET H = H+1
    0x5a19555d4860 ---------A   02160  IF C > T THEN 1500
    0x5a19555d48e0 ---------A   02170  PRINT
    0x5a19555d4960 ---------A   02180  PRINT
    0x5a19555d4ac0 ---------A   02190  PRINT"**********"
    0x5a19555d4c20 ---------A   02200  PRINT"* GOT YA *"
    0x5a19555d4d80 ---------A   02210  PRINT"**********"
    0x5a19555d4e00 ---------A   02220  PRINT
    0x5a19555d4e80 ---------A   02230  PRINT
    0x5a19555d4f00 ---------A   02240  PRINT
    0x5a19555d4f60 ---------A T 02250  STOP
    0x5a19555d8080 ---------A   02260  END
    0x5a19555d4fe0 ---------B   02270  REM
    0x5a19555d50c0 ---------B   02280  REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    0x5a19555d5150 ---------B   02290  REM
    0x5a19555d5bd0 ---------B G 02300  IF Z < 0 THEN 2330
    0x5a19555d5d50 ---------B   02310  PRINT "+";
    0x5a19555d5dd0 ---------B   02320  GOTO 2350
    0x5a19555d5f40 ---------B T 02330  PRINT"-";
    0x5a19555d6180 ---------B   02340  LET Z = -Z
    0x5a19555d65a0 ---------B B 02350  LET Z = INT(Z+0.5)
    0x5a19555d6890 ---------B   02360  LET S$ = "0123456789"
    0x5a19555d6b70 ---------B   02370  FOR I = 1 TO 4
    0x5a19555d72c0 ---------B   02380  LET W = INT(Z/10^(4-I))
    0x5a19555d77c0 ---------B   02390  PRINT MID$(S$,W+1,1);
    0x5a19555d7e80 ---------B   02400  LET Z = Z-W*10^(4-I)
    0x5a19555d7fb0 ---------B   02410  NEXT I
    0x5a19555dad20 ---------B   02420  GOTO 02430
    0x5a19555e14c0 ---------B T 02430  RETURN
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
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[15];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    C_int;                                     // Basic: C 
int    D1_int;                                    // Basic: D1 
int    D2_int;                                    // Basic: D2 
int    H_int;                                     // Basic: H 
int    H1_int;                                    // Basic: H1 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    P1_int;                                    // Basic: P1 
char*  S_str;                                     // Basic: S$ 
int    T_int;                                     // Basic: T 
int    V1_int;                                    // Basic: V1 
int    V2_int;                                    // Basic: V2 
int    W_int;                                     // Basic: W 
int    X1_int;                                    // Basic: X1 
int    X2_int;                                    // Basic: X2 
int    X3_int;                                    // Basic: X3 
int    X4_int;                                    // Basic: X4 
int    Y1_int;                                    // Basic: Y1 
int    Y2_int;                                    // Basic: Y2 
int    Y3_int;                                    // Basic: Y3 
int    Y4_int;                                    // Basic: Y4 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02300();

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
    // 02270 REM
    // 02280 REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    // 02290 REM

void Routine_02300(){
    // 02300 IF Z < 0 THEN 2330
    if(Z_int<0)goto Lbl_02330;
    // 02310 PRINT "+";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"+");fputs(buf,fh); };
    // 02320 GOTO 2350
    goto Lbl_02350;

  Lbl_02330:
    // 02330 PRINT"-";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"-");fputs(buf,fh); };
    // 02340 LET Z = -Z
    Z_int = Z_int;

void Routine_02350(){

  Lbl_02350:
    // 02350 LET Z = INT(Z+0.5)
    Z_int = INT(Z_int+0.5);
    // 02360 LET S$ = "0123456789"
    GLBpStr="0123456789";
    S_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02370 FOR I = 1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 02380 LET W = INT(Z/10^(4-I))
        W_int = INT(Z_int/IPower(10,(4-I_int)));
        // 02390 PRINT MID$(S$,W+1,1);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,MID$(S_str,W_int+1,1));fputs(buf,fh); };
        // 02400 LET Z = Z-W*10^(4-I)
        Z_int = Z_int-W_int*IPower(10,(4-I_int));
        // 02410 NEXT I
        int dummy_2410=0; // Ignore this line.
    }; // End-For(I_int)
    // 02420 GOTO 02430
    goto Lbl_02430;

  Lbl_02430:
    // 02430 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT"DO YOU WANT INSTRUCTIONS :";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT INSTRUCTIONS :");fputs(buf,fh); };
    // 01010 INPUT A$
    // Start of Basic INPUT statement 01010
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01010
    // 01020 IF MID$(A$,1,1)="N" THEN 1220
    if(MID$(A_str,1,1)=='N')goto Lbl_01220;
    // 01030 IF MID$(A$,1,1)="n" THEN 1220
    if(MID$(A_str,1,1)=='N')goto Lbl_01220;
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    This is the game of RABBIT.  The object of RABBIT is");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT"to come within a certian distance of the computer controlled"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"to come within a certian distance of the computer controlled");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT"rabbit, which also moves.  "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"rabbit, which also moves.  ");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT"    The way you do this is to hop around (the rabbit hops too) "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    The way you do this is to hop around (the rabbit hops too) ");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT"such that your path crosses the rabbit's path at the same time"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"such that your path crosses the rabbit's path at the same time");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT"Or in other words you come close enough to grab the little "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"Or in other words you come close enough to grab the little ");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT"booger.  "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"booger.  ");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT"    Oh by the way your arms are about 20 units long.  The number"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    Oh by the way your arms are about 20 units long.  The number");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'CLOSEST APPROACH' is the closest distance you and your bouncy");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"friend came to each other during the last hop.  The 'DISTANCE");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO RABBIT' is the distance you are from the rabbit now.  The");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"rabbits 'DIRECTION' is the direction he is just about to hop,");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT"so keep that in mind when jumping.  The computer will prompt"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"so keep that in mind when jumping.  The computer will prompt");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT"you for the direction you want to jump next.  Remember "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"you for the direction you want to jump next.  Remember ");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT"you and the rabbit don't necessarily jump at the same velocity."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"you and the rabbit don't necessarily jump at the same velocity.");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT"   GOOD LUCK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   GOOD LUCK");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01220:
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT"                   TYPE 'QUIT' TO STOP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                   TYPE 'QUIT' TO STOP.");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01250 RANDOMIZE
    RANDOMIZE();
    // 01260 REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    // 01270 LET T = 400
    T_int = 400;
    // 01280 REM
    // 01290 REM -- INITIALIZE VELOCITIES AND POSITIONS --
    // 01300 REM
    // 01310 LET V1 = INT(RND(0)*10+0.5)*10+50
    V1_int = INT(RND(0)*10+0.5)*10+50;
    // 01320 LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    V2_int = (INT(RND(0)*2+0.5)+1)*V1_int;

  Lbl_01330:
    // 01330 LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    X1_int = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5);
    // 01340 LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    Y1_int = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5);
    // 01350 IF Y1 = 0  THEN 1330
    if(Y1_int==0)goto Lbl_01330;
    // 01360 IF X1 = 0 THEN 1330
    if(X1_int==0)goto Lbl_01330;
    // 01370 LET X2 = 0
    X2_int = 0;
    // 01380 LET Y2 = 0
    Y2_int = 0;
    // 01390 PRINT"SPEEDS (UNITS/HOP):"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SPEEDS (UNITS/HOP):");strcat(buf,"\n");fputs(buf,fh); };
    // 01400 PRINT"RABBIT -";V1,"YOU -";V2
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RABBIT -"); b2c_INT(buf,V1_int);strcat(buf,"YOU -"); b2c_INT(buf,V2_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01440 LET C = (X2-X1)^2+(Y2-Y1)^2
    C_int = IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2);
    // 01450 LET P1 = 3.14159/180
    P1_int = 3.14/180;
    // 01460 LET H1 = 1
    H1_int = 1;
    // 01470 REM
    // 01480 REM -- PRINT OUT --
    // 01490 REM

  Lbl_01500:
    // 01500 LET D1 = INT(RND(0)*359)
    D1_int = INT(RND(0)*359);
    // 01510 PRINT"HOP#: ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOP#: ");fputs(buf,fh); };
    // 01520 LET Z = H
    Z_int = H_int;
    // 01530 GOSUB 2350
    Routine_02350();
    // 01540 PRINT"    DISTANCE TO RABBIT: ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    DISTANCE TO RABBIT: ");fputs(buf,fh); };
    // 01550 LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    Z_int = SQR(IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2));
    // 01560 GOSUB 2350
    Routine_02350();
    // 01570 PRINT"    CLOSEST APPROACH: ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    CLOSEST APPROACH: ");fputs(buf,fh); };
    // 01580 LET Z = SQR(C)
    Z_int = SQR(C_int);
    // 01590 GOSUB 2350
    Routine_02350();
    // 01600 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01610 PRINT"RABBIT   ---    POSITION:  (";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RABBIT   ---    POSITION:  (");fputs(buf,fh); };
    // 01620 LET Z = X1
    Z_int = X1_int;
    // 01630 GOSUB 2300
    Routine_02300();
    // 01640 PRINT",";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,",");fputs(buf,fh); };
    // 01650 LET Z = Y1
    Z_int = Y1_int;
    // 01660 GOSUB 2300
    Routine_02300();
    // 01670 PRINT")     AND DIRECTION:  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,")     AND DIRECTION:  ");fputs(buf,fh); };
    // 01680 LET Z = D1
    Z_int = D1_int;
    // 01690 GOSUB 2350
    Routine_02350();
    // 01700 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01710 PRINT"YOU      ---    POSITION:  (";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU      ---    POSITION:  (");fputs(buf,fh); };
    // 01720 LET Z = X2
    Z_int = X2_int;
    // 01730 GOSUB 2300
    Routine_02300();
    // 01740 PRINT",";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,",");fputs(buf,fh); };
    // 01750 LET Z = Y2
    Z_int = Y2_int;
    // 01760 GOSUB 2300
    Routine_02300();
    // 01770 PRINT")     AND DIRECTION: ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,")     AND DIRECTION: ");fputs(buf,fh); };
    // 01780 GOTO 1800
    goto Lbl_01800;

  Lbl_01790:
    // 01790 PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIRECTION TO HOP (0-359 DEGREES): ");fputs(buf,fh); };

  Lbl_01800:
    // 01800 INPUT A$
    // Start of Basic INPUT statement 01800
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01800
    // 01810 DIM A(15)
    // 01820 LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    D2_int = A_int_arr[5] = A_int_arr[4] = A_int_arr[3] = A_int_arr[2] = A_int_arr[1] = 0;
    // 01830 CHANGE A$ TO A
    if(A_str!=nullptr){
        for(int i=1;(i<=(int)strlen(A_str))&&(i<=14);i++){
            A_int_arr[0][i]=(int)A_str[i-1];
        }
    }
    // 01840 FOR I = 1 TO 15
    for(I_int=1;I_int<=15;I_int++){
        // 01850 IF A(I) = 0 THEN 1920
        if(A_int_arr[I_int]==0)goto Lbl_01920;
        // 01860 IF A(I) =113 THEN 2250
        if(A_int_arr[I_int]==113)goto Lbl_02250;
        // 01870 IF A(I) = 81 THEN 2250
        if(A_int_arr[I_int]==81)goto Lbl_02250;
        // 01880 IF A(I)-48 < 0 THEN 1790
        if(A_int_arr[I_int]-48<0)goto Lbl_01790;
        // 01890 IF A(I)-48 > 9 THEN 1790
        if(A_int_arr[I_int]-48>9)goto Lbl_01790;
        // 01900 NEXT I
        int dummy_1900=0; // Ignore this line.
    }; // End-For(I_int)
    // 01910 GO TO 1790
    goto Lbl_01790;

  Lbl_01920:
    // 01920 FOR J = 1 TO I-1
    for(J_int=1;J_int<=I_int-1;J_int++){
        // 01930 D2=D2+(A(I-J)-48)*10^(J-1)
        D2_int = D2_int+(A_int_arr[I_int-J_int]-48)*IPower(10,(J_int-1));
        // 01940 NEXT J
        int dummy_1940=0; // Ignore this line.
    }; // End-For(J_int)
    // 01950 IF D2 < 0 THEN 1790
    if(D2_int<0)goto Lbl_01790;
    // 01960 IF D2 >= 360 THEN 1790
    if(D2_int>=360)goto Lbl_01790;
    // 01970 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01980 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01990 REM
    // 02000 REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    // 02010 REM
    // 02020 LET X3 = V1*COS(D1*P1)/100
    X3_int = V1_int*COS(D1_int*P1_int)/100;
    // 02030 LET Y3 = V1*SIN(D1*P1)/100
    Y3_int = V1_int*SIN(D1_int*P1_int)/100;
    // 02040 LET X4 = V2*COS(D2*P1)/100
    X4_int = V2_int*COS(D2_int*P1_int)/100;
    // 02050 LET Y4 = V2*SIN(D2*P1)/100
    Y4_int = V2_int*SIN(D2_int*P1_int)/100;
    // 02060 LET C = (X2-X1)^2+(Y2-Y1)^2
    C_int = IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2);
    // 02070 FOR I = 1 TO 100
    for(I_int=1;I_int<=100;I_int++){
        // 02080 LET X1 = X1+X3
        X1_int = X1_int+X3_int;
        // 02090 LET Y1 = Y1+Y3
        Y1_int = Y1_int+Y3_int;
        // 02100 LET X2 = X2+X4
        X2_int = X2_int+X4_int;
        // 02110 LET Y2 = Y2+Y4
        Y2_int = Y2_int+Y4_int;
        // 02120 IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2140
        if(C_int<IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2))goto Lbl_02140;
        // 02130 C = (X2-X1)^2+(Y2-Y1)^2
        C_int = IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2);

  Lbl_02140:
        // 02140 NEXT I
        int dummy_2140=0; // Ignore this line.
    }; // End-For(I_int)
    // 02150 LET H = H+1
    H_int = H_int+1;
    // 02160 IF C > T THEN 1500
    if(C_int>T_int)goto Lbl_01500;
    // 02170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02180 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02190 PRINT"**********"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"**********");strcat(buf,"\n");fputs(buf,fh); };
    // 02200 PRINT"* GOT YA *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"* GOT YA *");strcat(buf,"\n");fputs(buf,fh); };
    // 02210 PRINT"**********"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"**********");strcat(buf,"\n");fputs(buf,fh); };
    // 02220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02230 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02250:
    // 02250 STOP
    exit(1);
    // 02260 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
