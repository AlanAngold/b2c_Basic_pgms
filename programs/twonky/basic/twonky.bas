# NOTE: Type forced to be:
# gwba - GW-BASIC tokenized file (or BASICA)
   10 CLS:PRINTTAB(24);"Twonky"
   20 PRINTTAB(18);"Creative Computing"
   30 PRINTTAB(16);"Morristown, New Jersey"
   40 PRINT:PRINT:PRINT
  140 GOSUB 2250
  150 DIM A(15,15)
  160 R9=0
  170 GOSUB 1830
  180 PRINT "-------------------------------------"
  190 PRINT
  200 GOSUB 1450
  210 PRINT
  220 PRINT "Move or Shoot";
  230 INPUT Q8$
  240 IF LEFT$(Q8$,1)="m" THEN 270
  250 IF LEFT$(Q8$,1)="s" THEN 950
  260 GOTO 210
  270 PRINT "Which way (F/B/R/L) ";
  280 INPUT Q$
  290 IF LEFT$(Q$,1)="f" THEN 340
  300 IF LEFT$(Q$,1)="b" THEN 370
  310 IF LEFT$(Q$,1)="r" THEN 400
  320 IF LEFT$(Q$,1)="l" THEN 430
  330 GOTO 210
  340 X5=X
  350 Y5=Y-1
  360 GOTO 460
  370 X5=X
  380 Y5=Y+1
  390 GOTO 460
  400 X5=X-1
  410 Y5=Y
  420 GOTO 460
  430 X5=X+1
  440 Y5=Y
  460 IF X5<1 THEN 510
  470 IF X5>15 THEN 510
  480 IF Y5<1 THEN 510
  490 IF Y5>15 THEN 510
  500 GOTO 540
  510 PRINT "That move takes you out of the Maze."
  520 PRINT "Move not allowed."
  530 GOTO 1430
  540 ON (A(X5,Y5)+1) GOTO 550,620,630,660,760,800,920
  550 REM *** EMPTY SPACE ***
  560 A(X,Y)=0
  570 A(X5,Y5)=1
  580 X=X5
  590 Y=Y5
  600 PRINT "Move allowed."
  610 GOTO 1430
  620 REM *** IMPOSSIBLE TO GET HERE
  630 REM *** BLOCKED SPACE ROUTINE
  640 PRINT "That space is blocked."
  650 GOTO 1430
  660 REM *** RELOCATION ROUTINE
  670 PRINT "You've been  R E L O C A T E D  ! ! !"
  680 GOSUB 2710
  690 IF A(Z,W)>2 THEN 540
  700 IF A(Z,W)<>0 THEN 680
  710 A(Z,W)=1
  720 A(X,Y)=0
  730 X=Z
  740 Y=W
  750 GOTO 1430
  760 REM *** CHANGE ALL, SUPER TRAP.
  770 PRINT "   You hit the Super Trap!!  You get a new Maze."
  780 GOSUB 1830
  790 GOTO 1430
  800 REM *** HE WON! ***
  810 PRINT
  820 PRINT "I don't believe it but you won the game!"
  830 PRINT "You got to the Objective before"
  840 PRINT "   the Twonky got you!!"
  850 PRINT
  860 PRINT
  870 PRINT "Do you want to try again";
  880 INPUT Q$
  890 IF LEFT$(Q$,1)="y" THEN 160
  900 IF LEFT$(Q$,1)="n" THEN 2750
  910 GOTO 870
  920 REM *** HE LANDED ON TWONKY!]
  930 PRINT "You stepped on the Twonky!"
  940 GOTO 1790
  950 REM *** SHOOT ROUTINE
  960 PRINT "Which way (F/B/R/L) ";
  970 INPUT Q$
  980 IF LEFT$(Q$,1)="f" THEN 1030
  990 IF LEFT$(Q$,1)="b" THEN 1060
 1000 IF LEFT$(Q$,1)="r" THEN 1120
 1010 IF LEFT$(Q$,1)="l" THEN 1090
 1020 GOTO 210
 1030 S1=0
 1040 S2=-1
 1050 GOTO 1140
 1060 S1=0
 1070 S2=1
 1080 GOTO 1140
 1090 S1=-1
 1100 S2=0
 1110 GOTO 1140
 1120 S1=1
 1130 S2=0
 1140 R1=X
 1150 R2=Y
 1160 R1=R1+S1
 1170 R2=R2+S2
 1180 PRINT "Z A P --";
 1190 IF R1<1 OR R1>15 OR R2<1 OR R2>15 THEN 1240
 1230 GOTO 1280
 1240 PRINT "FIZZLE . . ."
 1250 PRINT "Shot left Maze."
 1260 PRINT "Shot missed."
 1270 GOTO 1430
 1280 IF A(R1,R2)<>2 THEN 1330
 1290 PRINT "BLAST!!!!"
 1300 PRINT "You hit wall."
 1310 PRINT "Shot missed."
 1320 GOTO 1430
 1330 IF A(R1,R2)<>6 THEN 1160
 1340 PRINT " Ouch!!"
 1350 PRINT "Twonky retreats."
 1360 A(R1,R2)=R9
 1370 GOSUB 2710
 1380 IF A(Z,W)<>0 THEN 1370
 1390 A(Z,W)=6
 1410 X1=Z
 1420 Y1=W
 1430 GOSUB 1450
 1440 GOTO 1570
 1450 REM *** PRINT TWONKY AND OBJECTIVE DISTANCE
 1455 PRINT
 1460 PRINT "The Twonky is";
 1470 D=SQR(ABS((X2-X)^2+(Y1-Y)^2))
 1490 PRINTD;
 1500 PRINT "Units away."
 1510 PRINT "The Objective is";
 1520 D1=SQR(ABS(X2-X)^2+(Y2-Y)^2)
 1530 PRINTD1;
 1540 PRINT "Units away."
 1550 PRINT
 1560 RETURN
 1570 REM *** TWONKY'S LOGIC
 1580 IF D<2 THEN 1790
 1590 Z2=Y1
 1600 Z1=X1
 1610 IF X<X1 THEN 1680
 1620 IF X>X1 THEN 1700
 1630 IF Y<Y1 THEN 1660
 1640 Z2=Y1+1
 1650 GOTO 1710
 1660 Z2=Y1-1
 1670 GOTO 1710
 1680 Z1=X1-1
 1690 GOTO 1710
 1700 Z1=X1+1
 1710 A(X1,Y1)=R9
 1720 R9=A(Z1,Z2)
 1730 A(Z1,Z2)=6
 1740 X1=Z1
 1750 Y1=Z2
 1760 PRINT "Twonky Moves...."
 1770 GOSUB 1450
 1780 IF D=>2 THEN 210
 1790 PRINT
 1800 PRINT "> > > SCHLOORP !!! < < <"
 1810 PRINT "The Twonky has just absorbed you!!  You lose."
 1820 GOTO 850
 1830 REM *** SET UP NEW MAZE ROUTINE
 1840 REM *** 1=PLAYER, 2=BLOCKED SPACES
 1850 REM *** 3=RELOCATIONS, 4=SUPER TRAP
 1860 REM *** 5=OBJECTIVE, 6=TWONKY
 1870 REM *** 0=EMPTY SPACES
 1880 REM *** CLEAR MAZE
 1883 FOR B0=1 TO 15
 1885 FOR B1=1 TO 15
 1890 A(B0,B1)=0
 1893 NEXT B1
 1895 NEXT B0
 1910 FOR I=1 TO 30
 1920 GOSUB 2710
 1930 IF A(Z,W)<>0 THEN 1920
 1940 A(Z,W)=2
 1950 NEXT I
 1960 REM *** PLACE RELOCATIONS
 1970 FOR I=1 TO 22
 1980 GOSUB 2710
 1990 IF A(Z,W)<>0 THEN 1980
 2000 A(Z,W)=3
 2010 NEXT I
 2020 REM *** PLACE THE SPECIAL TRAP
 2030 GOSUB 2710
 2040 IF A(Z,W)<>0 THEN 2030
 2050 A(Z,W)=4
 2060 REM *** PLACE THE PLAYER
 2070 GOSUB 2710
 2080 IF A(Z,W)<>0 THEN 2070
 2090 A(Z,W)=1
 2100 X=Z
 2110 Y=W
 2120 REM *** PLACE THE OBJECTIVE
 2130 GOSUB 2710
 2140 IF A(Z,W)<>0 THEN 2130
 2150 A(Z,W)=5
 2160 X2=Z
 2170 Y2=W
 2180 REM *** PLACE THE TWONKY
 2190 GOSUB 2710
 2200 IF A(Z,W)<>0 THEN 2190
 2210 A(Z,W)=6
 2220 X1=Z
 2230 Y1=W
 2240 RETURN
 2250 REM
 2310 PRINT "Do you want Instructions";
 2320 INPUT Q$
 2330 IF LEFT$(Q$,1)="n" THEN 2700
 2350 PRINT:PRINT:PRINT
 2380 PRINT "This is the game of Twonky."
 2410 PRINT "You have landed on the Planet of Twinky and"
 2420 PRINT "its King (Kong: Their King is King Kong) has"
 2430 PRINT "captured you.  He has put you in a Maze that"
 2440 PRINT "is 15 x 15 units long.  You are in the dark"
 2450 PRINT "and cannot see...  You must get to the objec-"
 2460 PRINT "tive square and be set free."
 2470 PRINT
 2480 PRINT "     Hazards Include:"
 2490 PRINT "Squares that you cannot go into (30)."
 2500 PRINT "Squares that randomly throw you around the Maze (22)."
 2510 PRINT "Square that sets up a new Maze and all that's in it (1)."
 2520 PRINT "Monster called Twonky that chases you and will"
 2530 PRINT "    absorb you if the distance it is from you"
 2540 PRINT "    falls below 2 units."
 2550 PRINT "    Twonky is also immune to all traps including"
 2560 PRINT "      walls."
 2570 PRINT
 2575 A$=INKEY$:IF A$="" THEN 2575
 2590 PRINT "    You can:"
 2600 PRINT "Move one square at a time to find the Objective"
 2610 PRINT "     or escape from the Twonky."
 2620 PRINT "Shoot at the Twonky one direction at a time."
 2630 PRINT "  If the Twonky is hit, he will be replaced in"
 2640 PRINT "        the Maze randomly."
 2645 PRINT
 2650 PRINT "If the Twonky absorbs you...You lose."
 2660 PRINT " If you land on the Objective Square you win."
 2670 PRINT
 2680 PRINT "Good Luck!"
 2690 PRINT
 2700 RETURN
 2710 REM *** SUBROUTINE TO GET 2 RANDOM NUMBERS
 2715 RANDOMIZE(VAL(RIGHT$(TIME$,2)))
 2720 Z=INT((RND*1)*15+1)
 2725 RANDOMIZE(VAL(RIGHT$(TIME$,2)))
 2730 W=INT((RND*1)*15+1)
 2740 RETURN
 2750 END
