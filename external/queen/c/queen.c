/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/queen.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59e9faf156d0 ---------A   00001  PRINT TAB(33);"QUEEN"
    0x59e9faf15670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x59e9faf062b0 ---------A   00003  PRINT:PRINT:PRINT
    0x59e9faf16b80 ---------A   00010  DIM S(64)
    0x59e9faf17640 ---------A   00011  FOR I=1 TO 64
    0x59e9faf17e10 ---------A   00012  READ S(I)
    0x59e9faf17f90 ---------A   00013  NEXT I
    0x59e9faf18050 ---------A   00014  DATA  81,  71,  61,  51,  41,  31,  21,  11
    0x59e9faf1e3a0 ---------A   00015  DATA  92,  82,  72,  62,  52,  42,  32,  22
    0x59e9faf17ed0 ---------A   00016  DATA 103,  93,  83,  73,  63,  53,  43,  33
    0x59e9faf1f270 ---------A   00017  DATA 114, 104,  94,  84,  74,  64,  54,  44
    0x59e9faf1fa00 ---------A   00018  DATA 125, 115, 105,  95,  85,  75,  65,  55
    0x59e9faf20190 ---------A   00019  DATA 136, 126, 116, 106,  96,  86,  76,  66
    0x59e9faf20920 ---------A   00020  DATA 147, 137, 127, 117, 107,  97,  87,  77
    0x59e9faf21070 ---------A   00021  DATA 158, 148, 138, 128, 118, 108,  98,  88
    0x59e9faf21280 ---------A T 00022  INPUT "DO YOU WANT INSTRUCTIONS";W$
    0x59e9faf21500 ---------A   00023  IF W$="NO" THEN 30
    0x59e9faf21760 ---------A   00024  IF W$="YES" THEN 28
    0x59e9faf218a0 ---------A   00025  PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x59e9faf21920 ---------A   00026  GOTO 22
    0x59e9faf21990 ---------A T 00028  GOSUB 5000
    0x59e9faf21a00 ---------A   00029  GOTO 100
    0x59e9faf21a70 --------BA T 00030  GOSUB 5160
    0x59e9faf21ae0 --------BA   00090  REM     ERROR CHECKS
    0x59e9faf21c70 --------BA T 00100  PRINT "WHERE WOULD YOU LIKE TO START";
    0x59e9faf21e90 --------BA   00110  INPUT M1
    0x59e9faf220f0 --------BA   00115  IF M1=0 THEN 232
    0x59e9faf225d0 --------BA   00120  T1=INT(M1/10)
    0x59e9faf22ae0 --------BA   00130  U1=M1-10*T1
    0x59e9faf22d30 --------BA   00140  IF U1=1 THEN 200
    0x59e9faf22fd0 --------BA   00150  IF U1=T1 THEN 200
    0x59e9faf230f0 --------BA   00160  PRINT "PLEASE READ THE DIRECTIONS AGAIN."
    0x59e9faf23260 --------BA   00170  PRINT "YOU HAVE BEGUN ILLEGALLY."
    0x59e9faf234f0 --------BA   00175  PRINT
    0x59e9faf23570 --------BA   00180  GOTO 100
    0x59e9faf235f0 --------BA T 00200  GOSUB 2000
    0x59e9faf23910 --------BA   00210  PRINT "COMPUTER MOVES TO SQUARE";M
    0x59e9faf23b80 --------BA   00215  IF M=158 THEN 3400
    0x59e9faf23d00 --------BA   00220  PRINT "WHAT IS YOUR MOVE";
    0x59e9faf23e60 --------BA T 00230  INPUT M1
    0x59e9faf240c0 --------BA   00231  IF M1<>0 THEN 239
    0x59e9faf24160 --------BA T 00232  PRINT
    0x59e9faf242d0 --------BA   00233  PRINT "IT LOOKS LIKE I HAVE WON BY FORFEIT."
    0x59e9faf24350 --------BA   00234  PRINT
    0x59e9faf243d0 --------BA   00235  GOTO 4000
    0x59e9faf24640 --------BA T 00239  IF M1<=M THEN 3200
    0x59e9faf24a60 --------BA   00240  T1=INT(M1/10)
    0x59e9faf24eb0 --------BA   00250  U1=M1-10*T1
    0x59e9faf25380 --------BA   00260  P=U1-U
    0x59e9faf255d0 --------BA   00270  IF P<>0 THEN 300
    0x59e9faf25ab0 --------BA   00280  L=T1-T
    0x59e9faf25d00 --------BA   00290  IF L<=0 THEN 3200
    0x59e9faf25d90 --------BA   00295  GOTO 200
    0x59e9faf26120 --------BA T 00300  IF T1-T <>P THEN 320
    0x59e9faf261b0 --------BA   00310  GOTO 200
    0x59e9faf26640 --------BA T 00320  IF T1-T <>2*P THEN 3200
    0x59e9faf266d0 --------BA   00330  GOTO 200
    0x59e9faf26750 ---------B   01990  REM     LOCATE MOVE FOR COMPUTER
    0x59e9faf269c0 ---------B G 02000  IF M1=41 THEN 2180
    0x59e9faf26c20 ---------B   02010  IF M1=44 THEN 2180
    0x59e9faf26e80 ---------B   02020  IF M1=73 THEN 2180
    0x59e9faf270f0 ---------B   02030  IF M1=75 THEN 2180
    0x59e9faf27360 ---------B   02040  IF M1=126 THEN 2180
    0x59e9faf275d0 ---------B   02050  IF M1=127 THEN 2180
    0x59e9faf27830 ---------B   02060  IF M1=158 THEN 3300
    0x59e9faf27f30 ---------B   02065  C=0
    0x59e9faf28380 ---------B   02070  FOR K=7 TO 1 STEP -1
    0x59e9faf285c0 ---------B   02080  U=U1
    0x59e9faf28910 ---------B   02090  T=T1+K
    0x59e9faf28980 ---------B   02100  GOSUB 3500
    0x59e9faf28bd0 ---------B   02105  IF C=1 THEN 2160
    0x59e9faf28f30 ---------B   02110  U=U+K
    0x59e9faf28fa0 ---------B   02120  GOSUB 3500
    0x59e9faf291f0 ---------B   02125  IF C=1 THEN 2160
    0x59e9faf29550 ---------B   02130  T=T+K
    0x59e9faf295c0 ---------B   02140  GOSUB 3500
    0x59e9faf29810 ---------B   02145  IF C=1 THEN 2160
    0x59e9faf29950 ---------B   02150  NEXT K
    0x59e9faf299e0 ---------B   02155  GOTO 2180
    0x59e9faf29bf0 ---------B T 02160  C=0
    0x59e9faf29c40 ---------B   02170  RETURN
    0x59e9faf29cc0 ---------B T 02180  GOSUB 3000
    0x59e9faf29d10 ---------B   02190  RETURN
    0x59e9faf29da0 ---------C   02990  REM     RANDOM MOVE
    0x59e9faf2a170 ---------C G 03000  Z=RND(1)
    0x59e9faf2a3c0 ---------C   03010  IF Z>.6 THEN 3110
    0x59e9faf2a620 ---------C   03020  IF Z>.3 THEN 3070
    0x59e9faf2a860 ---------C   03030  U=U1
    0x59e9faf2ab90 ---------C   03040  T=T1+1
    0x59e9faf2afe0 ---------C   03050  M=10*T+U
    0x59e9faf2b030 ---------C   03060  RETURN
    0x59e9faf2b370 ---------C T 03070  U=U1+1
    0x59e9faf2b6a0 ---------C   03080  T=T1+2
    0x59e9faf2baf0 ---------C   03090  M=10*T+U
    0x59e9faf2bb40 ---------C   03100  RETURN
    0x59e9faf2be80 ---------C T 03110  U=U1+1
    0x59e9faf2c1b0 ---------C   03120  T=T1+1
    0x59e9faf2c600 ---------C   03130  M=10*T+U
    0x59e9faf2c650 ---------C   03140  RETURN
    0x59e9faf2c6f0 ---------A   03190  REM     ILLEGAL MOVE MESSAGE
    0x59e9faf2c7a0 --------BA T 03200  PRINT
    0x59e9faf2c930 --------BA   03210  PRINT "Y O U   C H E A T . . .  TRY AGAIN";
    0x59e9faf2c9c0 --------BA   03220  GOTO 230
    0x59e9faf2ca30 ---------A   03290  REM     PLAYER WINS
    0x59e9faf2cae0 ---------B T 03300  PRINT
    0x59e9faf2cc50 ---------B   03310  PRINT "C O N G R A T U L A T I O N S . . ."
    0x59e9faf2ccf0 ---------B   03320  PRINT 
    0x59e9faf2ce80 ---------B   03330  PRINT "YOU HAVE WON--VERY WELL PLAYED."
    0x59e9faf2d020 ---------B   03340  PRINT "IT LOOKS LIKE I HAVE MET MY MATCH."
    0x59e9faf2d1a0 ---------B   03350  PRINT "THANKS FOR PLAYING---I CAN'T WIN ALL THE TIME."
    0x59e9faf2d220 ---------B   03360  PRINT
    0x59e9faf2d2b0 ---------B   03370  GOTO 4000
    0x59e9faf2d320 ---------A   03390  REM     COMPUTER WINS
    0x59e9faf2d3d0 --------BA T 03400  PRINT
    0x59e9faf2d560 --------BA   03410  PRINT "NICE TRY, BUT IT LOOKS LIKE I HAVE WON."
    0x59e9faf2d6c0 --------BA   03420  PRINT "THANKS FOR PLAYING."
    0x59e9faf2d740 --------BA   03430  PRINT
    0x59e9faf2d7d0 --------BA   03440  GOTO 4000
    0x59e9faf2d850 ---------D   03490  REM     TEST FOR COMPUTER MOVE
    0x59e9faf2dcc0 ---------D G 03500  M=10*T+U
    0x59e9faf2df10 ---------D   03510  IF M=158 THEN 3570
    0x59e9faf2e170 ---------D   03520  IF M=127 THEN 3570
    0x59e9faf2e3d0 ---------D   03530  IF M=126 THEN 3570
    0x59e9faf2e630 ---------D   03540  IF M=75 THEN 3570
    0x59e9faf2e890 ---------D   03550  IF M=73 THEN 3570
    0x59e9faf2e8f0 ---------D T 03560  RETURN
    0x59e9faf2eb10 ---------D T 03570  C=1
    0x59e9faf2eb90 ---------D   03580  GOTO 3560
    0x59e9faf2ec00 ---------A   03990  REM     ANOTHER GAME???
    0x59e9faf2f5c0 --------BA T 04000  PRINT "ANYONE ELSE CARE TO TRY";
    0x59e9faf2f7e0 --------BA   04010  INPUT Q$
    0x59e9faf2f870 --------BA   04020  PRINT
    0x59e9faf2fb00 --------BA   04030  IF Q$="YES" THEN 30 
    0x59e9faf2fda0 --------BA   04040  IF Q$="NO" THEN 4050
    0x59e9faf2ff10 --------BA   04042  PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x59e9faf2ffa0 --------BA   04045  GOTO 4000
    0x59e9faf30150 --------BA T 04050  PRINT:PRINT "OK --- THANKS AGAIN."
    0x59e9faf301b0 --------BA   04060  STOP
    0x59e9faf30230 ---------E   04990  REM     DIRECTIONS
    0x59e9faf30420 ---------E G 05000  PRINT "WE ARE GOING TO PLAY A GAME BASED ON ONE OF THE CHESS"
    0x59e9faf305d0 ---------E   05010  PRINT "MOVES.  OUR QUEEN WILL BE ABLE TO MOVE ONLY TO THE LEFT,"
    0x59e9faf30750 ---------E   05020  PRINT "DOWN, OR DIAGONALLY DOWN AND TO THE LEFT."
    0x59e9faf30800 ---------E   05030  PRINT
    0x59e9faf309c0 ---------E   05040  PRINT "THE OBJECT OF THE GAME IS TO PLACE THE QUEEN IN THE LOWER"
    0x59e9faf30b80 ---------E   05050  PRINT "LEFT HAND SQUARE BY ALTERNATING MOVES BETWEEN YOU AND THE"
    0x59e9faf30d10 ---------E   05060  PRINT "COMPUTER.  THE FIRST ONE TO PLACE THE QUEEN THERE WINS."
    0x59e9faf30dc0 ---------E   05070  PRINT
    0x59e9faf30f70 ---------E   05080  PRINT "YOU GO FIRST AND PLACE THE QUEEN IN ANY ONE OF THE SQUARES"
    0x59e9faf31100 ---------E   05090  PRINT "ON THE TOP ROW OR RIGHT HAND COLUMN."
    0x59e9faf31280 ---------E   05100  PRINT "THAT WILL BE YOUR FIRST MOVE."
    0x59e9faf31410 ---------E   05110  PRINT "WE ALTERNATE MOVES."
    0x59e9faf315c0 ---------E   05120  PRINT "YOU MAY FORFEIT BY TYPING '0' AS YOUR MOVE."
    0x59e9faf31740 ---------E   05130  PRINT "BE SURE TO PRESS THE RETURN KEY AFTER EACH RESPONSE."
    0x59e9faf317c0 ---------E   05140  PRINT
    0x59e9faf31840 ---------E   05150  PRINT
    0x59e9faf318c0 ---------E G 05160  PRINT
    0x59e9faf31c60 ---------E   05170  FOR A=0 TO 7
    0x59e9faf32000 ---------E   05180  FOR B=1 TO 8
    0x59e9faf32460 ---------E   05185  I=8*A+B
    0x59e9faf326b0 ---------E   05190  PRINT S(I);
    0x59e9faf327f0 ---------E   05200  NEXT B
    0x59e9faf32880 ---------E   05210  PRINT
    0x59e9faf32900 ---------E   05220  PRINT
    0x59e9faf32980 ---------E   05230  PRINT
    0x59e9faf32ac0 ---------E   05240  NEXT A
    0x59e9faf32b50 ---------E   05250  PRINT
    0x59e9faf32bb0 ---------E   05260  RETURN
    0x59e9faf32c10 ---------A   09999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00022      00026T
     00028      00024T
     00030      00023T, 04030T
     00100      00029T, 00180T
     00200      00140T, 00150T, 00295T, 00310T, 00330T
     00230      03220T
     00232      00115T
     00239      00231T
     00300      00270T
     00320      00300T
     02000      00200G
     02160      02105T, 02125T, 02145T
     02180      02000T, 02010T, 02020T, 02030T, 02040T, 02050T, 02155T
     03000      02180G
     03070      03020T
     03110      03010T
     03200      00239T, 00290T, 00320T
     03300      02060T
     03400      00215T
     03500      02100G, 02120G, 02140G
     03560      03580T
     03570      03510T, 03520T, 03530T, 03540T, 03550T
     04000      00235T, 03370T, 03440T, 04045T
     04050      04040T
     05000      00028G
     05160      00030G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x59e9faf156d0 (00001)   0x59e9faf156d0 (00001)   0x59e9faf32c10 (09999)   0x59e9faf32c10 (09999)   
   B) 0x59e9faf21a70 (00030)   0x59e9faf269c0 (02000)   0x59e9faf29c40 (02170)   0x59e9faf301b0 (04060)   
   C) 0x59e9faf29da0 (02990)   0x59e9faf2a170 (03000)   0x59e9faf2b030 (03060)   0x59e9faf2c650 (03140)   
   D) 0x59e9faf2d850 (03490)   0x59e9faf2dcc0 (03500)   0x59e9faf2e8f0 (03560)   0x59e9faf2eb90 (03580)   
   E) 0x59e9faf30230 (04990)   0x59e9faf30420 (05000)   0x59e9faf32bb0 (05260)   0x59e9faf32bb0 (05260)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine B!
    NOTE: Routine D overlaps, or is tangled with, routine B!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/queen.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59e9faf156d0 ---------A   00001  PRINT TAB(33);"QUEEN"
    0x59e9faf15670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x59e9faf162d0 ----------   00003  PRINT
    0x59e9faf16910 ----------        a PRINT
    0x59e9faf062b0 ---------A        b PRINT
    0x59e9faf16b80 ---------A   00010  DIM S(64)
    0x59e9faf17640 ---------A   00011  FOR I=1 TO 64
    0x59e9faf17e10 ---------A   00012  READ S(I)
    0x59e9faf17f90 ---------A   00013  NEXT I
    0x59e9faf18050 ---------A   00014  DATA  81,  71,  61,  51,  41,  31,  21,  11
    0x59e9faf1e3a0 ---------A   00015  DATA  92,  82,  72,  62,  52,  42,  32,  22
    0x59e9faf17ed0 ---------A   00016  DATA 103,  93,  83,  73,  63,  53,  43,  33
    0x59e9faf1f270 ---------A   00017  DATA 114, 104,  94,  84,  74,  64,  54,  44
    0x59e9faf1fa00 ---------A   00018  DATA 125, 115, 105,  95,  85,  75,  65,  55
    0x59e9faf20190 ---------A   00019  DATA 136, 126, 116, 106,  96,  86,  76,  66
    0x59e9faf20920 ---------A   00020  DATA 147, 137, 127, 117, 107,  97,  87,  77
    0x59e9faf21070 ---------A   00021  DATA 158, 148, 138, 128, 118, 108,  98,  88
    0x59e9faf21280 ---------A T 00022  INPUT "DO YOU WANT INSTRUCTIONS";W$
    0x59e9faf21500 ---------A   00023  IF W$="NO" THEN 30
    0x59e9faf21760 ---------A   00024  IF W$="YES" THEN 28
    0x59e9faf218a0 ---------A   00025  PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x59e9faf21920 ---------A   00026  GOTO 22
    0x59e9faf21990 ---------A T 00028  GOSUB 5000
    0x59e9faf21a00 ---------A   00029  GOTO 100
    0x59e9faf21a70 --------BA T 00030  GOSUB 5160
    0x59e9faf21ae0 --------BA   00090  REM     ERROR CHECKS
    0x59e9faf21c70 --------BA T 00100  PRINT "WHERE WOULD YOU LIKE TO START";
    0x59e9faf21e90 --------BA   00110  INPUT M1
    0x59e9faf220f0 --------BA   00115  IF M1=0 THEN 232
    0x59e9faf225d0 --------BA   00120  T1=INT(M1/10)
    0x59e9faf22ae0 --------BA   00130  U1=M1-10*T1
    0x59e9faf22d30 --------BA   00140  IF U1=1 THEN 200
    0x59e9faf22fd0 --------BA   00150  IF U1=T1 THEN 200
    0x59e9faf230f0 --------BA   00160  PRINT "PLEASE READ THE DIRECTIONS AGAIN."
    0x59e9faf23260 --------BA   00170  PRINT "YOU HAVE BEGUN ILLEGALLY."
    0x59e9faf234f0 --------BA   00175  PRINT
    0x59e9faf23570 --------BA   00180  GOTO 100
    0x59e9faf235f0 --------BA T 00200  GOSUB 2000
    0x59e9faf23910 --------BA   00210  PRINT "COMPUTER MOVES TO SQUARE";M
    0x59e9faf23b80 --------BA   00215  IF M=158 THEN 3400
    0x59e9faf23d00 --------BA   00220  PRINT "WHAT IS YOUR MOVE";
    0x59e9faf23e60 --------BA T 00230  INPUT M1
    0x59e9faf240c0 --------BA   00231  IF M1<>0 THEN 239
    0x59e9faf24160 --------BA T 00232  PRINT
    0x59e9faf242d0 --------BA   00233  PRINT "IT LOOKS LIKE I HAVE WON BY FORFEIT."
    0x59e9faf24350 --------BA   00234  PRINT
    0x59e9faf243d0 --------BA   00235  GOTO 4000
    0x59e9faf24640 --------BA T 00239  IF M1<=M THEN 3200
    0x59e9faf24a60 --------BA   00240  T1=INT(M1/10)
    0x59e9faf24eb0 --------BA   00250  U1=M1-10*T1
    0x59e9faf25380 --------BA   00260  P=U1-U
    0x59e9faf255d0 --------BA   00270  IF P<>0 THEN 300
    0x59e9faf25ab0 --------BA   00280  L=T1-T
    0x59e9faf25d00 --------BA   00290  IF L<=0 THEN 3200
    0x59e9faf25d90 --------BA   00295  GOTO 200
    0x59e9faf26120 --------BA T 00300  IF T1-T <>P THEN 320
    0x59e9faf261b0 --------BA   00310  GOTO 200
    0x59e9faf26640 --------BA T 00320  IF T1-T <>2*P THEN 3200
    0x59e9faf266d0 --------BA   00330  GOTO 200
    0x59e9faf26750 ---------B   01990  REM     LOCATE MOVE FOR COMPUTER
    0x59e9faf269c0 ---------B G 02000  IF M1=41 THEN 2180
    0x59e9faf26c20 ---------B   02010  IF M1=44 THEN 2180
    0x59e9faf26e80 ---------B   02020  IF M1=73 THEN 2180
    0x59e9faf270f0 ---------B   02030  IF M1=75 THEN 2180
    0x59e9faf27360 ---------B   02040  IF M1=126 THEN 2180
    0x59e9faf275d0 ---------B   02050  IF M1=127 THEN 2180
    0x59e9faf27830 ---------B   02060  IF M1=158 THEN 3300
    0x59e9faf27f30 ---------B   02065  C=0
    0x59e9faf28380 ---------B   02070  FOR K=7 TO 1 STEP -1
    0x59e9faf285c0 ---------B   02080  U=U1
    0x59e9faf28910 ---------B   02090  T=T1+K
    0x59e9faf28980 ---------B   02100  GOSUB 3500
    0x59e9faf28bd0 ---------B   02105  IF C=1 THEN 2160
    0x59e9faf28f30 ---------B   02110  U=U+K
    0x59e9faf28fa0 ---------B   02120  GOSUB 3500
    0x59e9faf291f0 ---------B   02125  IF C=1 THEN 2160
    0x59e9faf29550 ---------B   02130  T=T+K
    0x59e9faf295c0 ---------B   02140  GOSUB 3500
    0x59e9faf29810 ---------B   02145  IF C=1 THEN 2160
    0x59e9faf29950 ---------B   02150  NEXT K
    0x59e9faf299e0 ---------B   02155  GOTO 2180
    0x59e9faf29bf0 ---------B T 02160  C=0
    0x59e9faf29c40 ---------B   02170  RETURN
    0x59e9faf29cc0 ---------B T 02180  GOSUB 3000
    0x59e9faf29d10 ---------B   02190  RETURN
    0x59e9faf29da0 ---------C   02990  REM     RANDOM MOVE
    0x59e9faf2a170 ---------C G 03000  Z=RND(1)
    0x59e9faf2a3c0 ---------C   03010  IF Z>.6 THEN 3110
    0x59e9faf2a620 ---------C   03020  IF Z>.3 THEN 3070
    0x59e9faf2a860 ---------C   03030  U=U1
    0x59e9faf2ab90 ---------C   03040  T=T1+1
    0x59e9faf2afe0 ---------C   03050  M=10*T+U
    0x59e9faf2b030 ---------C   03060  RETURN
    0x59e9faf2b370 ---------C T 03070  U=U1+1
    0x59e9faf2b6a0 ---------C   03080  T=T1+2
    0x59e9faf2baf0 ---------C   03090  M=10*T+U
    0x59e9faf2bb40 ---------C   03100  RETURN
    0x59e9faf2be80 ---------C T 03110  U=U1+1
    0x59e9faf2c1b0 ---------C   03120  T=T1+1
    0x59e9faf2c600 ---------C   03130  M=10*T+U
    0x59e9faf2c650 ---------C   03140  RETURN
    0x59e9faf2c6f0 ---------A   03190  REM     ILLEGAL MOVE MESSAGE
    0x59e9faf2c7a0 --------BA T 03200  PRINT
    0x59e9faf2c930 --------BA   03210  PRINT "Y O U   C H E A T . . .  TRY AGAIN";
    0x59e9faf2c9c0 --------BA   03220  GOTO 230
    0x59e9faf2ca30 ---------A   03290  REM     PLAYER WINS
    0x59e9faf2cae0 ---------B T 03300  PRINT
    0x59e9faf2cc50 ---------B   03310  PRINT "C O N G R A T U L A T I O N S . . ."
    0x59e9faf2ccf0 ---------B   03320  PRINT 
    0x59e9faf2ce80 ---------B   03330  PRINT "YOU HAVE WON--VERY WELL PLAYED."
    0x59e9faf2d020 ---------B   03340  PRINT "IT LOOKS LIKE I HAVE MET MY MATCH."
    0x59e9faf2d1a0 ---------B   03350  PRINT "THANKS FOR PLAYING---I CAN'T WIN ALL THE TIME."
    0x59e9faf2d220 ---------B   03360  PRINT
    0x59e9faf2d2b0 ---------B   03370  GOTO 4000
    0x59e9faf2d320 ---------A   03390  REM     COMPUTER WINS
    0x59e9faf2d3d0 --------BA T 03400  PRINT
    0x59e9faf2d560 --------BA   03410  PRINT "NICE TRY, BUT IT LOOKS LIKE I HAVE WON."
    0x59e9faf2d6c0 --------BA   03420  PRINT "THANKS FOR PLAYING."
    0x59e9faf2d740 --------BA   03430  PRINT
    0x59e9faf2d7d0 --------BA   03440  GOTO 4000
    0x59e9faf2d850 ---------D   03490  REM     TEST FOR COMPUTER MOVE
    0x59e9faf2dcc0 ---------D G 03500  M=10*T+U
    0x59e9faf2df10 ---------D   03510  IF M=158 THEN 3570
    0x59e9faf2e170 ---------D   03520  IF M=127 THEN 3570
    0x59e9faf2e3d0 ---------D   03530  IF M=126 THEN 3570
    0x59e9faf2e630 ---------D   03540  IF M=75 THEN 3570
    0x59e9faf2e890 ---------D   03550  IF M=73 THEN 3570
    0x59e9faf2e8f0 ---------D T 03560  RETURN
    0x59e9faf2eb10 ---------D T 03570  C=1
    0x59e9faf2eb90 ---------D   03580  GOTO 3560
    0x59e9faf2ec00 ---------A   03990  REM     ANOTHER GAME???
    0x59e9faf2f5c0 --------BA T 04000  PRINT "ANYONE ELSE CARE TO TRY";
    0x59e9faf2f7e0 --------BA   04010  INPUT Q$
    0x59e9faf2f870 --------BA   04020  PRINT
    0x59e9faf2fb00 --------BA   04030  IF Q$="YES" THEN 30 
    0x59e9faf2fda0 --------BA   04040  IF Q$="NO" THEN 4050
    0x59e9faf2ff10 --------BA   04042  PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x59e9faf2ffa0 --------BA   04045  GOTO 4000
    0x59e9faf2fff0 ---------- T 04050  PRINT
    0x59e9faf30150 --------BA T      a PRINT "OK --- THANKS AGAIN."
    0x59e9faf301b0 --------BA   04060  STOP
    0x59e9faf30230 ---------E   04990  REM     DIRECTIONS
    0x59e9faf30420 ---------E G 05000  PRINT "WE ARE GOING TO PLAY A GAME BASED ON ONE OF THE CHESS"
    0x59e9faf305d0 ---------E   05010  PRINT "MOVES.  OUR QUEEN WILL BE ABLE TO MOVE ONLY TO THE LEFT,"
    0x59e9faf30750 ---------E   05020  PRINT "DOWN, OR DIAGONALLY DOWN AND TO THE LEFT."
    0x59e9faf30800 ---------E   05030  PRINT
    0x59e9faf309c0 ---------E   05040  PRINT "THE OBJECT OF THE GAME IS TO PLACE THE QUEEN IN THE LOWER"
    0x59e9faf30b80 ---------E   05050  PRINT "LEFT HAND SQUARE BY ALTERNATING MOVES BETWEEN YOU AND THE"
    0x59e9faf30d10 ---------E   05060  PRINT "COMPUTER.  THE FIRST ONE TO PLACE THE QUEEN THERE WINS."
    0x59e9faf30dc0 ---------E   05070  PRINT
    0x59e9faf30f70 ---------E   05080  PRINT "YOU GO FIRST AND PLACE THE QUEEN IN ANY ONE OF THE SQUARES"
    0x59e9faf31100 ---------E   05090  PRINT "ON THE TOP ROW OR RIGHT HAND COLUMN."
    0x59e9faf31280 ---------E   05100  PRINT "THAT WILL BE YOUR FIRST MOVE."
    0x59e9faf31410 ---------E   05110  PRINT "WE ALTERNATE MOVES."
    0x59e9faf315c0 ---------E   05120  PRINT "YOU MAY FORFEIT BY TYPING '0' AS YOUR MOVE."
    0x59e9faf31740 ---------E   05130  PRINT "BE SURE TO PRESS THE RETURN KEY AFTER EACH RESPONSE."
    0x59e9faf317c0 ---------E   05140  PRINT
    0x59e9faf31840 ---------E   05150  PRINT
    0x59e9faf318c0 ---------E G 05160  PRINT
    0x59e9faf31c60 ---------E   05170  FOR A=0 TO 7
    0x59e9faf32000 ---------E   05180  FOR B=1 TO 8
    0x59e9faf32460 ---------E   05185  I=8*A+B
    0x59e9faf326b0 ---------E   05190  PRINT S(I);
    0x59e9faf327f0 ---------E   05200  NEXT B
    0x59e9faf32880 ---------E   05210  PRINT
    0x59e9faf32900 ---------E   05220  PRINT
    0x59e9faf32980 ---------E   05230  PRINT
    0x59e9faf32ac0 ---------E   05240  NEXT A
    0x59e9faf32b50 ---------E   05250  PRINT
    0x59e9faf32bb0 ---------E   05260  RETURN
    0x59e9faf32c10 ---------A   09999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/queen.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59e9faf156d0 ---------A   01000  PRINT TAB(33);"QUEEN"
    0x59e9faf15670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x59e9faf162d0 ----------   01020  PRINT
    0x59e9faf16910 ----------   01030  PRINT
    0x59e9faf062b0 ---------A   01040  PRINT
    0x59e9faf16b80 ---------A   01050  DIM S(64)
    0x59e9faf17640 ---------A   01060  FOR I=1 TO 64
    0x59e9faf17e10 ---------A   01070  READ S(I)
    0x59e9faf17f90 ---------A   01080  NEXT I
    0x59e9faf18050 ---------A   01090  DATA  81,  71,  61,  51,  41,  31,  21,  11
    0x59e9faf1e3a0 ---------A   01100  DATA  92,  82,  72,  62,  52,  42,  32,  22
    0x59e9faf17ed0 ---------A   01110  DATA 103,  93,  83,  73,  63,  53,  43,  33
    0x59e9faf1f270 ---------A   01120  DATA 114, 104,  94,  84,  74,  64,  54,  44
    0x59e9faf1fa00 ---------A   01130  DATA 125, 115, 105,  95,  85,  75,  65,  55
    0x59e9faf20190 ---------A   01140  DATA 136, 126, 116, 106,  96,  86,  76,  66
    0x59e9faf20920 ---------A   01150  DATA 147, 137, 127, 117, 107,  97,  87,  77
    0x59e9faf21070 ---------A   01160  DATA 158, 148, 138, 128, 118, 108,  98,  88
    0x59e9faf21280 ---------A   01170  INPUT "DO YOU WANT INSTRUCTIONS";W$
    0x59e9faf21500 ---------A   01180  IF W$="NO" THEN 1240
    0x59e9faf21760 ---------A   01190  IF W$="YES" THEN 1220
    0x59e9faf218a0 ---------A   01200  PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x59e9faf21920 ---------A   01210  GOTO 1170
    0x59e9faf21990 ---------A   01220  GOSUB 2420
    0x59e9faf21a00 ---------A   01230  GOTO 1260
    0x59e9faf21a70 --------BA   01240  GOSUB 2580
    0x59e9faf21ae0 --------BA   01250  REM     ERROR CHECKS
    0x59e9faf21c70 --------BA   01260  PRINT "WHERE WOULD YOU LIKE TO START";
    0x59e9faf21e90 --------BA   01270  INPUT M1
    0x59e9faf220f0 --------BA   01280  IF M1=0 THEN 1430
    0x59e9faf225d0 --------BA   01290  T1=INT(M1/10)
    0x59e9faf22ae0 --------BA   01300  U1=M1-10*T1
    0x59e9faf22d30 --------BA   01310  IF U1=1 THEN 1370
    0x59e9faf22fd0 --------BA   01320  IF U1=T1 THEN 1370
    0x59e9faf230f0 --------BA   01330  PRINT "PLEASE READ THE DIRECTIONS AGAIN."
    0x59e9faf23260 --------BA   01340  PRINT "YOU HAVE BEGUN ILLEGALLY."
    0x59e9faf234f0 --------BA   01350  PRINT
    0x59e9faf23570 --------BA   01360  GOTO 1260
    0x59e9faf235f0 --------BA   01370  GOSUB 13700
    0x59e9faf23910 --------BA   01380  PRINT "COMPUTER MOVES TO SQUARE";M
    0x59e9faf23b80 --------BA   01390  IF M=158 THEN 2150
    0x59e9faf23d00 --------BA   01400  PRINT "WHAT IS YOUR MOVE";
    0x59e9faf23e60 --------BA   01410  INPUT M1
    0x59e9faf240c0 --------BA   01420  IF M1<>0 THEN 1470
    0x59e9faf24160 --------BA   01430  PRINT
    0x59e9faf242d0 --------BA   01440  PRINT "IT LOOKS LIKE I HAVE WON BY FORFEIT."
    0x59e9faf24350 --------BA   01450  PRINT
    0x59e9faf243d0 --------BA   01460  GOTO 2310
    0x59e9faf24640 --------BA   01470  IF M1<=M THEN 2020
    0x59e9faf24a60 --------BA   01480  T1=INT(M1/10)
    0x59e9faf24eb0 --------BA   01490  U1=M1-10*T1
    0x59e9faf25380 --------BA   01500  P=U1-U
    0x59e9faf255d0 --------BA   01510  IF P<>0 THEN 1550
    0x59e9faf25ab0 --------BA   01520  L=T1-T
    0x59e9faf25d00 --------BA   01530  IF L<=0 THEN 2020
    0x59e9faf25d90 --------BA   01540  GOTO 1370
    0x59e9faf26120 --------BA   01550  IF T1-T <>P THEN 1570
    0x59e9faf261b0 --------BA   01560  GOTO 1370
    0x59e9faf26640 --------BA   01570  IF T1-T <>2*P THEN 15700
    0x59e9faf266d0 --------BA   01580  GOTO 1370
    0x59e9faf26750 ---------B   01590  REM     LOCATE MOVE FOR COMPUTER
    0x59e9faf269c0 ---------B   01600  IF M1=41 THEN 1830
    0x59e9faf26c20 ---------B   01610  IF M1=44 THEN 1830
    0x59e9faf26e80 ---------B   01620  IF M1=73 THEN 1830
    0x59e9faf270f0 ---------B   01630  IF M1=75 THEN 1830
    0x59e9faf27360 ---------B   01640  IF M1=126 THEN 1830
    0x59e9faf275d0 ---------B   01650  IF M1=127 THEN 1830
    0x59e9faf27830 ---------B   01660  IF M1=158 THEN 2060
    0x59e9faf27f30 ---------B   01670  C=0
    0x59e9faf28380 ---------B   01680  FOR K=7 TO 1 STEP -1
    0x59e9faf285c0 ---------B   01690  U=U1
    0x59e9faf28910 ---------B   01700  T=T1+K
    0x59e9faf28980 ---------B   01710  GOSUB 2210
    0x59e9faf28bd0 ---------B   01720  IF C=1 THEN 1810
    0x59e9faf28f30 ---------B   01730  U=U+K
    0x59e9faf28fa0 ---------B   01740  GOSUB 2210
    0x59e9faf291f0 ---------B   01750  IF C=1 THEN 1810
    0x59e9faf29550 ---------B   01760  T=T+K
    0x59e9faf295c0 ---------B   01770  GOSUB 2210
    0x59e9faf29810 ---------B   01780  IF C=1 THEN 1810
    0x59e9faf29950 ---------B   01790  NEXT K
    0x59e9faf299e0 ---------B   01800  GOTO 1830
    0x59e9faf29bf0 ---------B   01810  C=0
    0x59e9faf29c40 ---------B   01820  RETURN
    0x59e9faf29cc0 ---------B   01830  GOSUB 1860
    0x59e9faf29d10 ---------B   01840  RETURN
    0x59e9faf29da0 ---------C   01850  REM     RANDOM MOVE
    0x59e9faf2a170 ---------C   01860  Z=RND(1)
    0x59e9faf2a3c0 ---------C   01870  IF Z>.6 THEN 1970
    0x59e9faf2a620 ---------C   01880  IF Z>.3 THEN 1930
    0x59e9faf2a860 ---------C   01890  U=U1
    0x59e9faf2ab90 ---------C   01900  T=T1+1
    0x59e9faf2afe0 ---------C   01910  M=10*T+U
    0x59e9faf2b030 ---------C   01920  RETURN
    0x59e9faf2b370 ---------C   01930  U=U1+1
    0x59e9faf2b6a0 ---------C   01940  T=T1+2
    0x59e9faf2baf0 ---------C   01950  M=10*T+U
    0x59e9faf2bb40 ---------C   01960  RETURN
    0x59e9faf2be80 ---------C   01970  U=U1+1
    0x59e9faf2c1b0 ---------C   01980  T=T1+1
    0x59e9faf2c600 ---------C   01990  M=10*T+U
    0x59e9faf2c650 ---------C G 02000  RETURN
    0x59e9faf2c6f0 ---------A   02010  REM     ILLEGAL MOVE MESSAGE
    0x59e9faf2c7a0 --------BA   02020  PRINT
    0x59e9faf2c930 --------BA   02030  PRINT "Y O U   C H E A T . . .  TRY AGAIN";
    0x59e9faf2c9c0 --------BA   02040  GOTO 1410
    0x59e9faf2ca30 ---------A   02050  REM     PLAYER WINS
    0x59e9faf2cae0 ---------B   02060  PRINT
    0x59e9faf2cc50 ---------B   02070  PRINT "C O N G R A T U L A T I O N S . . ."
    0x59e9faf2ccf0 ---------B   02080  PRINT 
    0x59e9faf2ce80 ---------B   02090  PRINT "YOU HAVE WON--VERY WELL PLAYED."
    0x59e9faf2d020 ---------B   02100  PRINT "IT LOOKS LIKE I HAVE MET MY MATCH."
    0x59e9faf2d1a0 ---------B   02110  PRINT "THANKS FOR PLAYING---I CAN'T WIN ALL THE TIME."
    0x59e9faf2d220 ---------B   02120  PRINT
    0x59e9faf2d2b0 ---------B   02130  GOTO 2310
    0x59e9faf2d320 ---------A   02140  REM     COMPUTER WINS
    0x59e9faf2d3d0 --------BA   02150  PRINT
    0x59e9faf2d560 --------BA T 02160  PRINT "NICE TRY, BUT IT LOOKS LIKE I HAVE WON."
    0x59e9faf2d6c0 --------BA   02170  PRINT "THANKS FOR PLAYING."
    0x59e9faf2d740 --------BA T 02180  PRINT
    0x59e9faf2d7d0 --------BA   02190  GOTO 2310
    0x59e9faf2d850 ---------D   02200  REM     TEST FOR COMPUTER MOVE
    0x59e9faf2dcc0 ---------D   02210  M=10*T+U
    0x59e9faf2df10 ---------D   02220  IF M=158 THEN 2280
    0x59e9faf2e170 ---------D   02230  IF M=127 THEN 2280
    0x59e9faf2e3d0 ---------D   02240  IF M=126 THEN 2280
    0x59e9faf2e630 ---------D   02250  IF M=75 THEN 2280
    0x59e9faf2e890 ---------D   02260  IF M=73 THEN 2280
    0x59e9faf2e8f0 ---------D   02270  RETURN
    0x59e9faf2eb10 ---------D   02280  C=1
    0x59e9faf2eb90 ---------D   02290  GOTO 2270
    0x59e9faf2ec00 ---------A   02300  REM     ANOTHER GAME???
    0x59e9faf2f5c0 --------BA   02310  PRINT "ANYONE ELSE CARE TO TRY";
    0x59e9faf2f7e0 --------BA   02320  INPUT Q$
    0x59e9faf2f870 --------BA   02330  PRINT
    0x59e9faf2fb00 --------BA   02340  IF Q$="YES" THEN 1240 
    0x59e9faf2fda0 --------BA   02350  IF Q$="NO" THEN 2390
    0x59e9faf2ff10 --------BA   02360  PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x59e9faf2ffa0 --------BA   02370  GOTO 2310
    0x59e9faf2fff0 ----------   02380  PRINT
    0x59e9faf30150 --------BA   02390  PRINT "OK --- THANKS AGAIN."
    0x59e9faf301b0 --------BA   02400  STOP
    0x59e9faf30230 ---------E   02410  REM     DIRECTIONS
    0x59e9faf30420 ---------E   02420  PRINT "WE ARE GOING TO PLAY A GAME BASED ON ONE OF THE CHESS"
    0x59e9faf305d0 ---------E   02430  PRINT "MOVES.  OUR QUEEN WILL BE ABLE TO MOVE ONLY TO THE LEFT,"
    0x59e9faf30750 ---------E   02440  PRINT "DOWN, OR DIAGONALLY DOWN AND TO THE LEFT."
    0x59e9faf30800 ---------E   02450  PRINT
    0x59e9faf309c0 ---------E   02460  PRINT "THE OBJECT OF THE GAME IS TO PLACE THE QUEEN IN THE LOWER"
    0x59e9faf30b80 ---------E   02470  PRINT "LEFT HAND SQUARE BY ALTERNATING MOVES BETWEEN YOU AND THE"
    0x59e9faf30d10 ---------E   02480  PRINT "COMPUTER.  THE FIRST ONE TO PLACE THE QUEEN THERE WINS."
    0x59e9faf30dc0 ---------E   02490  PRINT
    0x59e9faf30f70 ---------E   02500  PRINT "YOU GO FIRST AND PLACE THE QUEEN IN ANY ONE OF THE SQUARES"
    0x59e9faf31100 ---------E   02510  PRINT "ON THE TOP ROW OR RIGHT HAND COLUMN."
    0x59e9faf31280 ---------E   02520  PRINT "THAT WILL BE YOUR FIRST MOVE."
    0x59e9faf31410 ---------E   02530  PRINT "WE ALTERNATE MOVES."
    0x59e9faf315c0 ---------E   02540  PRINT "YOU MAY FORFEIT BY TYPING '0' AS YOUR MOVE."
    0x59e9faf31740 ---------E   02550  PRINT "BE SURE TO PRESS THE RETURN KEY AFTER EACH RESPONSE."
    0x59e9faf317c0 ---------E   02560  PRINT
    0x59e9faf31840 ---------E   02570  PRINT
    0x59e9faf318c0 ---------E   02580  PRINT
    0x59e9faf31c60 ---------E   02590  FOR A=0 TO 7
    0x59e9faf32000 ---------E   02600  FOR B=1 TO 8
    0x59e9faf32460 ---------E   02610  I=8*A+B
    0x59e9faf326b0 ---------E   02620  PRINT S(I);
    0x59e9faf327f0 ---------E   02630  NEXT B
    0x59e9faf32880 ---------E   02640  PRINT
    0x59e9faf32900 ---------E   02650  PRINT
    0x59e9faf32980 ---------E   02660  PRINT
    0x59e9faf32ac0 ---------E   02670  NEXT A
    0x59e9faf32b50 ---------E   02680  PRINT
    0x59e9faf32bb0 ---------E   02690  RETURN
    0x59e9faf32c10 ---------A   02700  END
 */

