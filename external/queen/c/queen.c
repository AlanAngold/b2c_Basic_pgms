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
    0x568bdc41cb80 ---------A   00001 PRINT TAB(33);"QUEEN"
    0x568bdc41ded0 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x568bdc41e050 ---------A   00003 PRINT:PRINT:PRINT
    0x568bdc40c2b0 ---------A   00010 DIM S(64)
    0x568bdc41b6d0 ---------A   00011 FOR I=1 TO 64
    0x568bdc41bcc0 ---------A   00012 READ S(I)
    0x568bdc41e160 ---------A   00013 NEXT I
    0x568bdc423c00 ---------A   00014 DATA  81,  71,  61,  51,  41,  31,  21,  11
    0x568bdc424390 ---------A   00015 DATA  92,  82,  72,  62,  52,  42,  32,  22
    0x568bdc41c4c0 ---------A   00016 DATA 103,  93,  83,  73,  63,  53,  43,  33
    0x568bdc425260 ---------A   00017 DATA 114, 104,  94,  84,  74,  64,  54,  44
    0x568bdc4259f0 ---------A   00018 DATA 125, 115, 105,  95,  85,  75,  65,  55
    0x568bdc426180 ---------A   00019 DATA 136, 126, 116, 106,  96,  86,  76,  66
    0x568bdc426910 ---------A   00020 DATA 147, 137, 127, 117, 107,  97,  87,  77
    0x568bdc427060 ---------A   00021 DATA 158, 148, 138, 128, 118, 108,  98,  88
    0x568bdc41b670 ---------A T 00022 INPUT "DO YOU WANT INSTRUCTIONS";W$
    0x568bdc427490 ---------A   00023 IF W$="NO" THEN 30
    0x568bdc4276f0 ---------A   00024 IF W$="YES" THEN 28
    0x568bdc427830 ---------A   00025 PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x568bdc4278a0 ---------A   00026 GOTO 22
    0x568bdc427900 ---------A T 00028 GOSUB 5000
    0x568bdc427960 ---------A   00029 GOTO 100
    0x568bdc4279c0 --------BA T 00030 GOSUB 5160
    0x568bdc427a20 --------BA   00090 REM     ERROR CHECKS
    0x568bdc427ba0 --------BA T 00100 PRINT "WHERE WOULD YOU LIKE TO START";
    0x568bdc427db0 --------BA   00110 INPUT M1
    0x568bdc428010 --------BA   00115 IF M1=0 THEN 232
    0x568bdc4284f0 --------BA   00120 T1=INT(M1/10)
    0x568bdc428a00 --------BA   00130 U1=M1-10*T1
    0x568bdc428c50 --------BA   00140 IF U1=1 THEN 200
    0x568bdc428ef0 --------BA   00150 IF U1=T1 THEN 200
    0x568bdc429010 --------BA   00160 PRINT "PLEASE READ THE DIRECTIONS AGAIN."
    0x568bdc429170 --------BA   00170 PRINT "YOU HAVE BEGUN ILLEGALLY."
    0x568bdc4293f0 --------BA   00175 PRINT
    0x568bdc429460 --------BA   00180 GOTO 100
    0x568bdc4294d0 --------BA T 00200 GOSUB 2000
    0x568bdc4297e0 --------BA   00210 PRINT "COMPUTER MOVES TO SQUARE";M
    0x568bdc429a40 --------BA   00215 IF M=158 THEN 3400
    0x568bdc429bc0 --------BA   00220 PRINT "WHAT IS YOUR MOVE";
    0x568bdc429d10 --------BA T 00230 INPUT M1
    0x568bdc429f70 --------BA   00231 IF M1<>0 THEN 239
    0x568bdc42a010 --------BA T 00232 PRINT
    0x568bdc42a170 --------BA   00233 PRINT "IT LOOKS LIKE I HAVE WON BY FORFEIT."
    0x568bdc42a1e0 --------BA   00234 PRINT
    0x568bdc42a250 --------BA   00235 GOTO 4000
    0x568bdc42a4b0 --------BA T 00239 IF M1<=M THEN 3200
    0x568bdc42a8d0 --------BA   00240 T1=INT(M1/10)
    0x568bdc42ad20 --------BA   00250 U1=M1-10*T1
    0x568bdc42b1f0 --------BA   00260 P=U1-U
    0x568bdc42b440 --------BA   00270 IF P<>0 THEN 300
    0x568bdc42b920 --------BA   00280 L=T1-T
    0x568bdc42bb70 --------BA   00290 IF L<=0 THEN 3200
    0x568bdc42bc00 --------BA   00295 GOTO 200
    0x568bdc42bf80 --------BA T 00300 IF T1-T <>P THEN 320
    0x568bdc42c010 --------BA   00310 GOTO 200
    0x568bdc42c490 --------BA T 00320 IF T1-T <>2*P THEN 3200
    0x568bdc42c520 --------BA   00330 GOTO 200
    0x568bdc42c590 ---------B   01990 REM     LOCATE MOVE FOR COMPUTER
    0x568bdc42c7f0 ---------B G 02000 IF M1=41 THEN 2180
    0x568bdc42ca50 ---------B   02010 IF M1=44 THEN 2180
    0x568bdc42ccb0 ---------B   02020 IF M1=73 THEN 2180
    0x568bdc42cf20 ---------B   02030 IF M1=75 THEN 2180
    0x568bdc42d190 ---------B   02040 IF M1=126 THEN 2180
    0x568bdc42d400 ---------B   02050 IF M1=127 THEN 2180
    0x568bdc42d660 ---------B   02060 IF M1=158 THEN 3300
    0x568bdc42dd60 ---------B   02065 C=0
    0x568bdc42e1b0 ---------B   02070 FOR K=7 TO 1 STEP -1
    0x568bdc42e3f0 ---------B   02080 U=U1
    0x568bdc42e740 ---------B   02090 T=T1+K
    0x568bdc42e7b0 ---------B   02100 GOSUB 3500
    0x568bdc42e9f0 ---------B   02105 IF C=1 THEN 2160
    0x568bdc42ed50 ---------B   02110 U=U+K
    0x568bdc42edc0 ---------B   02120 GOSUB 3500
    0x568bdc42f000 ---------B   02125 IF C=1 THEN 2160
    0x568bdc42f360 ---------B   02130 T=T+K
    0x568bdc42f3d0 ---------B   02140 GOSUB 3500
    0x568bdc42f610 ---------B   02145 IF C=1 THEN 2160
    0x568bdc42f750 ---------B   02150 NEXT K
    0x568bdc42f7d0 ---------B   02155 GOTO 2180
    0x568bdc42f9d0 ---------B T 02160 C=0
    0x568bdc42fa20 ---------B   02170 RETURN
    0x568bdc42faa0 ---------B T 02180 GOSUB 3000
    0x568bdc42fae0 ---------B   02190 RETURN
    0x568bdc42fb70 ---------C   02990 REM     RANDOM MOVE
    0x568bdc42ff30 ---------C G 03000 Z=RND(1)
    0x568bdc430180 ---------C   03010 IF Z>.6 THEN 3110
    0x568bdc4303e0 ---------C   03020 IF Z>.3 THEN 3070
    0x568bdc430620 ---------C   03030 U=U1
    0x568bdc430950 ---------C   03040 T=T1+1
    0x568bdc430da0 ---------C   03050 M=10*T+U
    0x568bdc430df0 ---------C   03060 RETURN
    0x568bdc431130 ---------C T 03070 U=U1+1
    0x568bdc431460 ---------C   03080 T=T1+2
    0x568bdc4318b0 ---------C   03090 M=10*T+U
    0x568bdc431900 ---------C   03100 RETURN
    0x568bdc431c40 ---------C T 03110 U=U1+1
    0x568bdc431f70 ---------C   03120 T=T1+1
    0x568bdc4323c0 ---------C   03130 M=10*T+U
    0x568bdc432410 ---------C   03140 RETURN
    0x568bdc4324b0 ---------A   03190 REM     ILLEGAL MOVE MESSAGE
    0x568bdc432550 --------BA T 03200 PRINT
    0x568bdc4326d0 --------BA   03210 PRINT "Y O U   C H E A T . . .  TRY AGAIN";
    0x568bdc432750 --------BA   03220 GOTO 230
    0x568bdc4327b0 ---------A   03290 REM     PLAYER WINS
    0x568bdc432850 ---------B T 03300 PRINT
    0x568bdc4329b0 ---------B   03310 PRINT "C O N G R A T U L A T I O N S . . ."
    0x568bdc432a40 ---------B   03320 PRINT 
    0x568bdc432bc0 ---------B   03330 PRINT "YOU HAVE WON--VERY WELL PLAYED."
    0x568bdc432d50 ---------B   03340 PRINT "IT LOOKS LIKE I HAVE MET MY MATCH."
    0x568bdc432ec0 ---------B   03350 PRINT "THANKS FOR PLAYING---I CAN'T WIN ALL THE TIME."
    0x568bdc432f30 ---------B   03360 PRINT
    0x568bdc432fb0 ---------B   03370 GOTO 4000
    0x568bdc433010 ---------A   03390 REM     COMPUTER WINS
    0x568bdc4330b0 --------BA T 03400 PRINT
    0x568bdc433230 --------BA   03410 PRINT "NICE TRY, BUT IT LOOKS LIKE I HAVE WON."
    0x568bdc433380 --------BA   03420 PRINT "THANKS FOR PLAYING."
    0x568bdc4333f0 --------BA   03430 PRINT
    0x568bdc433470 --------BA   03440 GOTO 4000
    0x568bdc4334e0 ---------D   03490 REM     TEST FOR COMPUTER MOVE
    0x568bdc433940 ---------D G 03500 M=10*T+U
    0x568bdc433b90 ---------D   03510 IF M=158 THEN 3570
    0x568bdc433df0 ---------D   03520 IF M=127 THEN 3570
    0x568bdc434050 ---------D   03530 IF M=126 THEN 3570
    0x568bdc4342b0 ---------D   03540 IF M=75 THEN 3570
    0x568bdc434510 ---------D   03550 IF M=73 THEN 3570
    0x568bdc434570 ---------D T 03560 RETURN
    0x568bdc434790 ---------D T 03570 C=1
    0x568bdc434810 ---------D   03580 GOTO 3560
    0x568bdc434870 ---------A   03990 REM     ANOTHER GAME???
    0x568bdc435220 --------BA T 04000 PRINT "ANYONE ELSE CARE TO TRY";
    0x568bdc435430 --------BA   04010 INPUT Q$
    0x568bdc4354c0 --------BA   04020 PRINT
    0x568bdc435740 --------BA   04030 IF Q$="YES" THEN 30 
    0x568bdc4359e0 --------BA   04040 IF Q$="NO" THEN 4050
    0x568bdc435b50 --------BA   04042 PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x568bdc435bd0 --------BA   04045 GOTO 4000
    0x568bdc435d60 --------BA T 04050 PRINT:PRINT "OK --- THANKS AGAIN."
    0x568bdc435db0 --------BA   04060 STOP
    0x568bdc435e30 ---------E   04990 REM     DIRECTIONS
    0x568bdc436010 ---------E G 05000 PRINT "WE ARE GOING TO PLAY A GAME BASED ON ONE OF THE CHESS"
    0x568bdc4361b0 ---------E   05010 PRINT "MOVES.  OUR QUEEN WILL BE ABLE TO MOVE ONLY TO THE LEFT,"
    0x568bdc436320 ---------E   05020 PRINT "DOWN, OR DIAGONALLY DOWN AND TO THE LEFT."
    0x568bdc4363c0 ---------E   05030 PRINT
    0x568bdc436570 ---------E   05040 PRINT "THE OBJECT OF THE GAME IS TO PLACE THE QUEEN IN THE LOWER"
    0x568bdc436720 ---------E   05050 PRINT "LEFT HAND SQUARE BY ALTERNATING MOVES BETWEEN YOU AND THE"
    0x568bdc4368a0 ---------E   05060 PRINT "COMPUTER.  THE FIRST ONE TO PLACE THE QUEEN THERE WINS."
    0x568bdc436940 ---------E   05070 PRINT
    0x568bdc436ae0 ---------E   05080 PRINT "YOU GO FIRST AND PLACE THE QUEEN IN ANY ONE OF THE SQUARES"
    0x568bdc436c60 ---------E   05090 PRINT "ON THE TOP ROW OR RIGHT HAND COLUMN."
    0x568bdc436dd0 ---------E   05100 PRINT "THAT WILL BE YOUR FIRST MOVE."
    0x568bdc436f50 ---------E   05110 PRINT "WE ALTERNATE MOVES."
    0x568bdc4370f0 ---------E   05120 PRINT "YOU MAY FORFEIT BY TYPING '0' AS YOUR MOVE."
    0x568bdc437260 ---------E   05130 PRINT "BE SURE TO PRESS THE RETURN KEY AFTER EACH RESPONSE."
    0x568bdc4372d0 ---------E   05140 PRINT
    0x568bdc437340 ---------E   05150 PRINT
    0x568bdc4373b0 ---------E G 05160 PRINT
    0x568bdc437740 ---------E   05170 FOR A=0 TO 7
    0x568bdc437ae0 ---------E   05180 FOR B=1 TO 8
    0x568bdc437f40 ---------E   05185 I=8*A+B
    0x568bdc438190 ---------E   05190 PRINT S(I);
    0x568bdc4382c0 ---------E   05200 NEXT B
    0x568bdc438340 ---------E   05210 PRINT
    0x568bdc4383b0 ---------E   05220 PRINT
    0x568bdc438420 ---------E   05230 PRINT
    0x568bdc438550 ---------E   05240 NEXT A
    0x568bdc4385d0 ---------E   05250 PRINT
    0x568bdc438620 ---------E   05260 RETURN
    0x568bdc438680 ---------A   09999 END
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
   A) 0x568bdc41cb80 (00001)   0x568bdc41cb80 (00001)   0x568bdc438680 (09999)   0x568bdc438680 (09999)   
   B) 0x568bdc4279c0 (00030)   0x568bdc42c7f0 (02000)   0x568bdc42fa20 (02170)   0x568bdc435db0 (04060)   
   C) 0x568bdc42fb70 (02990)   0x568bdc42ff30 (03000)   0x568bdc430df0 (03060)   0x568bdc432410 (03140)   
   D) 0x568bdc4334e0 (03490)   0x568bdc433940 (03500)   0x568bdc434570 (03560)   0x568bdc434810 (03580)   
   E) 0x568bdc435e30 (04990)   0x568bdc436010 (05000)   0x568bdc438620 (05260)   0x568bdc438620 (05260)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine B!
    NOTE: Routine D overlaps, or is tangled with, routine B!

 */

