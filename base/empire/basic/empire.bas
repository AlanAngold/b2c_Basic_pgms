   10 : REM ' *************************************
   20 : REM ' * EMPIRE. Space War Game *
   30 : REM ' * by P.D. Estelle *
   40 : REM ' * Latest Update 05-18/86 *
   50 : REM ' * *
   60 : REM ' * A game for the TRS-80 model *
   65 : REM ' * 1 and 3 computers. *
   70 : REM ' *************************************
   90 RANDOM 
  100 CLS : CLEAR 300 : DIM S$(10),S(10),E(10),SR(10),D(10),B(10),SS(10),SP(10,1),TW(20),TE(20),TS(20),ST(10,1),W(10,4),W$(4),AL(9)
  102 DIM CR(10)
  105 PRINT CHR$ (14);
  110 FOR X = 0 TO 10 : S(X) = 100 : E(X) = 300 : SS(X) = 50 : B(X) = 180 : SR(X) = 100 : F(X) = 1 : M(X) = 1 : T(X) = 1 : CR(X) = 10 : NEXT X
  115 SS(0) = 100 : B(0) = 0 : S(0) = 150
  116 W$(1) = "Fusion Ray" : W$(2) = "Disrupter Beam" : W$(3) = "Torpedo"
  117 W$(4) = "Reactor"
  120 A$ = "EMPIRE.  A game by Phil Estelle." : GOSUB 1000 : PRINT 
  122 FOR X = 1 TO 20 : TS(X) = - 1 : NEXT X : FOR X = 1 TO 10 : FOR Y = 1 TO 3 : W(X,Y) = 1 : NEXT Y,X
  125 PRINT 
  130 A$ = "Do you want the introduction? (Y/N) ;" : GOSUB 1000
  140 GOSUB 1100
  145 IF Q$ = "Y" THEN A$ = "Yes" : GOSUB 1000 : GOTO 5000
  150 IF Q$ = "N" THEN A$ = "No ": GOSUB 1000 : GOTO 200
  160 A$ = "What?" : GOSUB 1000 : GOTO 130
  200 A$ = "What is your last name, Captain;" : GOSUB 1000 : INPUT CN$ : IF CN$ = ""CN$ = "Estelle"
  205 A$ = "What is the name of your ship, Captain "+ CN$ + ";" : GOSUB 1000 : INPUT S$(0) : IF S$(0) = ""THEN S$(0) = "Pentadragon"
  207 IF LEN (S$(0)) > 19 THEN A$ = "Ship name too long!" : GOSUB 1000 : GOTO 205
  210 A$ = "What is your sex, Captain "+ CN$ + "? (M/F) ;" : GOSUB 1000 : GOSUB 1100
  212 IF Q$ = "M" THEN PS$ = "Sir" : A$ = "Male" : GOSUB 1000 : GOTO 220
  214 IF Q$ = "F" THEN PS$ = "Ma'am" : A$ = "Female" : GOSUB 1000 : GOTO 220
  216 PS$ = "Fruit" : A$ = "??????" : GOSUB 1000
  220 A$ = "How many ships do you wish to fight "+ PS$ + "? (1-9) ;" : GOSUB 1000 : GOSUB 1100
  225 IF ASC (Q$) < 49 THEN 220
  230 IF ASC (Q$) > 57 THEN 220
  233 PRINT Q$ : PRINT : PRINT 
  235 N$ = Q$ : N = VAL (Q$) : A$ = "Ekrub  :  "+ N$ + " enemy ships coming up on ships scanners, "+ PS$ + "!" : GOSUB 1000 : GOSUB 2500
  237 E(0) = (425 - (N * 25)) * N : S(0) = INT (140 * N)
  240 A$ = CN$ + " :  Sound RED alert, Ekrub!" : GOSUB 1000
  242 A$ = "Ekrub  :  Aye-Aye, "+ PS$ + "!" : GOSUB 1000
  245 A$ = CN$ + " :  Captain to Crew, Go to Battle Stations!" : GOSUB 1000
  247 PRINT 
  250 FOR X = 1 TO 10
  255 READ S$(X) : IF LEFT$ (S$(X),1) = LEFT$ (S$(0),1) THEN 255
  260 DATA "Avenger","Blue Knight","Constellation","Delta","Excalibur","Falcon","Gorgon","Omega","Trident","X-Quest"
  261 DATA "*"
  265 NEXT X : A$ = "We are being attacked by : ": GOSUB 1000
  270 IF N = 1 THEN A$ = "The "+ S$(1) : GOSUB 1000 : GOTO 300
  275 FOR X = 1 TO N - 1 : A$ = "The "+ S$(X) + ", ": IF INT (X / 3) < > X / 3 A$ = A$ + ";"
  277 GOSUB 1000 : NEXT X : A$ = "and the "+ S$(N) + "." : GOSUB 1000
  280 PRINT : A$ = "Ekrub  :  "+ S$(0) + " at full alert, "+ PS$ + "!" : GOSUB 1000
  285 FOR X = 1 TO N : S1 = X : S2 = 0 : GOSUB 7000 : SI(X) = SI : B(X) = SC : B1(X) = 0 : NEXT X
  286 FOR X = 1 TO N : IF E(X) > 0 THEN 290
  287 NEXT X : PRINT : GOTO 4930
  290 B1(0) = 11
  300 PRINT : IF E(0) < 0 THEN 4900 : ELSE GOSUB 9000 : A$ = "Ekrub  :  What are your orders, Captain "+ CN$ + "? ;" : GOSUB 1000 : GOSUB 1100
  302 IF Q$ = "Q" A$ = "Quit!" : GOSUB 1000 : GOTO 4900
  305 IF Q$ = "H" THEN A$ = "Help!!" : GOSUB 1000 : GOTO 2000
  307 IF Q$ = "F" THEN A$ = "Fire!" : GOSUB 1000 : GOTO 1800
  310 IF Q$ = "S" THEN A$ = "Ship stats" : GOSUB 1000 : GOTO 1200
  315 IF Q$ = "D" THEN A$ = "Display" : GOSUB 1000 : GOTO 1300
  320 IF Q$ = "C" THEN A$ = "Set Course" : GOSUB 1000 : GOTO 1400
  325 IF Q$ = "R" THEN A$ = "Shields" : GOSUB 1000 : GOTO 1490
  330 IF Q$ = "M" THEN A$ = "Move......" : GOSUB 1000 : GOTO 1600
  335 IF Q$ = "L" THEN A$ = "List Ships." : GOSUB 1000 : GOTO 3000
  340 IF Q$ = "T" THEN A$ = "List Torps" : GOSUB 1000 : GOTO 2200
  345 PRINT 
  350 A$ = "Ekrub  :  Type 'H' for a list of commands, "+ PS$ : GOSUB 1000 : GOTO 300
  999 END 
 1000 PRINT CHR$ (14); : FOR X1 = 1 TO LEN (A$) : O$ = MID$ (A$,X1,1) : IF O$ < > ";" THEN PRINT O$;
 1010 NEXT X1 : IF RIGHT$ (A$,1) < > ";" THEN PRINT 
 1020 RETURN 
 1100 FOR Q = 1 TO 2000 : Q$ = INKEY$ 
 1102 IF Q$ = ""THEN NEXT Q : Q$ = "M"
 1103 R9 = RND (100)
 1105 IF Q$ = CHR$ (2) THEN A$ = "(BREAK INTERCEPT)" : GOSUB 1000 : GOTO 4970
 1110 RETURN 
 1200 A$ = "Which ship? ;" : GOSUB 1000 : GOSUB 1100
 1210 FOR X = 0 TO N : IF LEFT$ (S$(X),1) = Q$ THEN S = X : GOTO 1230
 1220 NEXT X : A$ = "No such ship Captain "+ CN$ + "!" : GOSUB 1000 : GOTO 300
 1230 A$ = S$(S) : GOSUB 1000
 1232 IF E(S) < 0 THEN A$ = "Ekrub  :  The "+ S$(S) + " does not exist!" : GOSUB 1000 : GOTO 300
 1234 PRINT 
 1235 A$ = "Current state of repair at" + STR$ (SR(S)) : GOSUB 1000
 1236 A$ = "Energy readings at" + STR$ (E(S)) + " units" : GOSUB 1000
 1237 IF S(S) < 0 THEN A$ = S$(S) + "'s shields are damaged and inoperative." : GOSUB 1000 : GOTO 1240
 1238 A$ = S$(S) + "'s shields are at "+ STR$ (S(S)) + " units" : GOSUB 1000
 1240 A$ = "Bearing :  "+ STR$ (B(S)) + "    Speed : "+ STR$ (SS(S)) : GOSUB 1000
 1245 IF B1(S) = 11 THEN A$ = "Heading for nowhere in particular." : GOSUB 1000 : GOTO 1263
 1250 A$ = "Heading for the "+ S$(B1(S)) : GOSUB 1000
 1260 A$ = "Distance to Target :  "+ STR$ (SI(S)) : GOSUB 1000
 1263 IF S = 0 THEN 1270
 1265 IF S(S) > 0 THEN A$ = "Ships Shields prevent damage scan." : GOSUB 1000 : GOTO 1290
 1270 PRINT 
 1273 DM = 0 : A$ = "Damaged Systems Report : ": GOSUB 1000 : PRINT 
 1275 FOR X = 1 TO 4 : IF W(S,X) = - 1 THEN DM = DM + 1 : A$ = W$(X) : GOSUB 1000
 1280 NEXT X
 1285 IF DM = 0 THEN A$ = "Negative." : GOSUB 1000
 1287 IF SR(S) < 20 A$ = S$(S) + "'s reactor has gone critical." : GOSUB 1000
 1290 PRINT : GOTO 300
 1300 A$ = "How far should we Scan, "+ PS$ + "?" : GOSUB 1000 : INPUT L
 1305 IF L < = 0 OR L > 2000 THEN A$ = "But our Scanners don't have that kind of power, "+ PS$ + "!" : GOSUB 1000 : GOTO 300
 1310 A$ = "Ekrub  :  Scanners out, "+ PS$ + "!" : GOSUB 1000 : GOTO 300
 1400 A$ = "Ekrub  :  Set Course for what Ship? ;" : GOSUB 1000 : GOSUB 1100
 1402 IF Q$ = CHR$ (13) THEN A$ = "No ship" : GOSUB 1000 : GOTO 1415
 1405 FOR X = 1 TO N : IF LEFT$ (S$(X),1) = Q$ THEN S = X : A$ = S$(X) : GOSUB 1000 : GOTO 1425
 1407 NEXT X : IF Q$ = ""THEN 1415
 1410 A$ = "There is no such ship, "+ PS$ + "!" : GOSUB 1000 : GOTO 300
 1415 A$ = "Set ship to what course? (0-360);" : GOSUB 1000 : INPUT L : IF L < 0 OR L > 360 THEN 1415
 1416 A$ = "At What Speed;" : GOSUB 1000 : INPUT L1 : IF L1 < 0 THEN 300 : ELSE SS(0) = L1
 1420 B1(0) = 11 : B(0) = L : GOTO 300
 1425 A$ = "At what speed;" : GOSUB 1000 : INPUT L : IF L < 0 THEN 300 : ELSE SS(0) = L
 1430 S1 = 0 : S2 = S : GOSUB 7000 : B(0) = SC : B1(0) = S : A$ = "Ekrub  :  Course now locked in on the "+ S$(S) + ", "+ PS$ : GOSUB 1000 : GOTO 300
 1480 : REM ' RAISE OR LOWER SHIELDS
 1490 IF S(0) < 0 THEN A$ = " :  :  Shields Knocked Out!  :  : ": GOSUB 1000 : GOTO 300
 1500 E(0) = E(0) + S(0) : S(0) = 0 : M = E(0) * (SR(0) / 100) : A$ = "Raise Shields to what level, "+ PS$ + "? (0 -" + STR$ (M) + ")" : GOSUB 1000 : INPUT L : IF L < 0 OR L > M THEN 1500
 1510 S(0) = L : E(0) = E(0) - S(0) : A$ = "Ekrub  :  Shield Energy Level changed to "+ STR$ (L) : GOSUB 1000 : GOTO 300
 1600 FOR X = 0 TO N : X1 = SP(X,0) : Y1 = SP(X,1) : SC = B(X) : D = SS(X) : GOSUB 7220 : SP(X,0) = X2 : SP(X,1) = Y2 : NEXT X : REM ' MOVE TO SHIPS
 1606 FOR X = 0 TO N : IF E(X) < 0 THEN 1620
 1607 SR(X) = SR(X) + 5 : IF SR(X) < 101 THEN 1620
 1608 SR(X) = 100
 1610 FOR U = 1 TO 4 : IF W(X,U) = - 1 THEN 1615
 1612 NEXT U : GOTO 1620
 1615 W(X,U) = 1 : IF X = 0 THEN A$ = "Ekrub :  "+ W$(U) + " has been repaired." : GOSUB 1000
 1620 NEXT X
 1630 FOR X = 0 TO N : IF W(X,4) = - 1 THEN 1634
 1631 IF E(X) < 1 THEN 1634
 1632 E(X) = E(X) + SR(X) : REM ' REGENERATE
 1633 IF X = 0 THEN E(0) = E(0) + 50
 1634 NEXT X
 1635 FOR X = 1 TO N : GOSUB 2720 : IF W = 0 THEN 1650
 1637 E1 = INT (E(X) / 3)
 1640 X5 = X : X6 = 0 : GOSUB 7500 : REM ' SHOT THE WEAPON
 1650 NEXT X
 1670 IF E(0) < = 0 THEN 4900
 1675 FOR X2 = 1 TO 20 : TW(X2) = TW(X2) - 1 : IF TW(X2) < > 0 THEN 1681
 1680 A$ = " :  :  Torpedo "+ STR$ (X2) + " hits "+ S$(TS(X2)) + " - "+ STR$ (TE(X2)) + " units hit  :  : ": GOSUB 1000 : W = 3 : X6 = TS(X2) : E1 = TE(X2) : TS(X2) = - 1 : GOSUB 7700
 1681 NEXT X2
 1685 : REM ' 
 1699 GOTO 285
 1800 A$ = "What Weapon, "+ PS$ + "? (F/D/T) ;" : GOSUB 1000
 1805 GOSUB 1100
 1810 IF Q$ = "F" THEN W = 1 : A$ = W$(1) : GOSUB 1000 : GOTO 1830
 1815 IF Q$ = "D" THEN W = 2 : A$ = W$(2) : GOSUB 1000 : GOTO 1830
 1820 IF Q$ = "T" THEN W = 3 : A$ = W$(3) : GOSUB 1000 : GOTO 1830
 1825 A$ = "No such Weapon, "+ PS$ : GOSUB 1000 : GOTO 300
 1830 IF W(0,W) = - 1 THEN A$ = "Ekrub :  "+ W$(W) + " Knocked Out!" : GOSUB 1000 : GOTO 300
 1832 IF W = 3 THEN 1900
 1835 A$ = "How Many units to direct to "+ W$(W) + "? (0 -" + STR$ (E(0)) + ");" : GOSUB 1000 : INPUT L
 1840 IF L < 0 OR L > E(0) THEN A$ = "Ekrub  :  We don't have that much power, "+ PS$ + "!" : GOSUB 1000 : GOTO 300
 1843 IF L < 20 THEN A$ = "Ekrub  :  "+ W$(W) + " must have at least 20 units!" : GOSUB 1000 : GOTO 300
 1845 A$ = "At which Ship? ;" : GOSUB 1000 : GOSUB 1100 : FOR X = 1 TO N : IF LEFT$ (S$(X),1) = Q$ THEN 1855
 1850 NEXT X : A$ = "No such ship, "+ PS$ + "!" : GOSUB 1000 : GOTO 300
 1855 A$ = S$(X) : GOSUB 1000 : IF E(X) < 0 THEN A$ = "That ship has been destroyed!" : GOSUB 1000 : GOTO 300
 1860 X5 = 0 : X6 = X : E1 = L : GOSUB 7500 : GOTO 300
 1900 A$ = "How much energy to feed to Torpedo? (0 -" + STR$ (E(0)) + ");" : GOSUB 1000 : INPUT L : GOTO 1840
 1920 GOTO 1840
 2000 A$ = "Type 'H' to get this message." : GOSUB 1000
 2010 A$ = "Type 'S' to get current Stats on any ship" : GOSUB 1000
 2015 A$ = "Type 'Q' to Quit this mission." : GOSUB 1000
 2020 A$ = "Type 'R' to Raise or Lower your Shields" : GOSUB 1000
 2025 A$ = "Type 'C' to Set or Reset your course." : GOSUB 1000
 2030 A$ = "Tyoe 'D' for a Scanner Map" : GOSUB 1000
 2040 A$ = "Type 'M' to move your Ship" : GOSUB 1000
 2050 A$ = "Type 'F' to fire a Weapon" : GOSUB 1000
 2060 A$ = "Type 'L' to List all ships in Action" : GOSUB 1000
 2070 A$ = "Type 'T' to list Live Torpedos" : GOSUB 1000
 2100 GOTO 300
 2200 LI = 0 : T1 = 0
 2210 FOR X = 0 TO N : IF E(X) < 0 THEN 2235
 2220 FOR Y = 1 TO 20 : IF TS(Y) = X THEN T1 = T1 + 1
 2225 NEXT Y
 2230 A$ = STR$ (T1) + " Torps heading for the "+ S$(X) : GOSUB 1000
 2235 LI = LI + T1 : T1 = 0 : NEXT X
 2240 PRINT : A$ = STR$ (LI) + " Total Torpedos in flight." : GOSUB 1000
 2250 PRINT 
 2290 GOTO 300
 2500 FOR X = 0 TO N : SP(X,0) = RND (10000) : SP(X,1) = RND (10000) : ST(X,0) = RND (10000) : ST(X,1) = RND (10000) : NEXT X : RETURN 
 2700 : REM ' Detrermine which weapon for emeny ship to fire
 2710 : REM ' X = ship #, W = returns weapon to fire 0 if none
 2720 W = 0 : IF E(X) < = 0 THEN RETURN 
 2725 R = RND (100)
 2730 IF R < 75 THEN W = 3 : GOTO 2750
 2735 IF R < 50 THEN W = 2 : GOTO 2750
 2740 W = 1
 2750 IF W(X,W) = - 1 THEN W = W - 1 : IF W < > 0 THEN 2750
 2760 IF W = 0 THEN RETURN 
 2770 IF E(X) > 999 THEN RETURN 
 2780 IF RND (5) < 3 THEN W = 0
 2790 IF E(X) < 150 THEN W = 0
 2795 RETURN 
 3000 PRINT : A$ = STR$ (N) + " Archon Ships Engaged." : GOSUB 1000
 3005 I = 0
 3010 FOR X = 1 TO N : IF E(X) < 0 THEN I = I + 1
 3015 NEXT X : A$ = STR$ (I) + " Archon Ships Destroyed." : GOSUB 1000 : PRINT 
 3017 A$ = "     Name of        Energy    Torps    Dist/" : GOSUB 1000
 3018 A$ = "      Ship           Avail     Head    Target" : GOSUB 1000 : PRINT 
 3020 FOR X = 0 TO N : I = LEN (S$(X)) : L$ = STRING$ (18 - I,32)
 3025 IF S(X) < 0 THEN L$ = L$ + "* ": ELSE L$ = L$ + "  "
 3030 IF E(X) < 0 THEN 3100
 3040 A$ = S$(X) + L$ + STR$ (E(X))
 3050 LI = 0 : T1 = 0
 3055 FOR Y = 1 TO 20 : IF TS(Y) = X THEN T1 = T1 + 1
 3060 NEXT Y
 3065 I = 32 - LEN (A$) : L$ = STRING$ (I,32) : A$ = A$ + L$ + STR$ (T1)
 3080 I = 38 - LEN (A$) : L$ = STRING$ (I,32) : A$ = A$ + L$ + STR$ (SI(X))
 3090 GOSUB 1000
 3100 NEXT X : PRINT 
 3110 GOTO 300
 4900 A$ = "You have failed us in our hour of need, Captain "+ CN$ + "!" : GOSUB 1000
 4910 A$ = "Your name will be cursed throughout the endless ages of" : GOSUB 1000
 4920 A$ = "time!" : GOSUB 1000 : GOTO 4950
 4930 A$ = "You have destroyed *ALL* the enemy ships!" : GOSUB 1000 : A$ = "You are safe to carry your shipment of Medical supplies" : GOSUB 1000
 4935 A$ = "to your home planet.  Your Name will go down in history as" : GOSUB 1000 : A$ = "a Great Hero!" : GOSUB 1000
 4950 PRINT : A$ = "Of the" + STR$ (N) + " ships that attacked, you destoryed" : GOSUB 1000
 4960 I = 0 : FOR X = 1 TO N : IF E(X) < 0 THEN I = I + 1
 4963 NEXT X
 4965 A$ = STR$ (I) + " of them (" + STR$ ((I / N) * 100) + "%)" : GOSUB 1000 : PRINT 
 4970 PRINT : A$ = "Want to give it another go? (Y/N)" : GOSUB 1000 : GOSUB 1100
 4975 PRINT CHR$ (15); : IF Q$ = "N" THEN CLS : A$ = "Thank you for playing!" : GOSUB 1000 : RUN "MENU/BAS"
 4980 IF Q$ = "Y" THEN RUN 
 4985 A$ = "HUH?" : GOSUB 1000 : GOTO 4970
 5000 A$ = "You have been given command of a ship of your own in the war" : GOSUB 1000
 5010 A$ = "against the Archons, who wish to wipe out your home planet." : GOSUB 1000
 5020 A$ = "You are on your way home when you are attacked by the Archon" : GOSUB 1000
 5025 A$ = "swine.  Your ship carries medical supplies to help the sick" : GOSUB 1000
 5030 A$ = "and injured victoms of the war.  You must destory all the" : GOSUB 1000
 5035 A$ = "attacking ships if you are to make it back to your planet." : GOSUB 1000 : PRINT 
 5040 A$ = "At the start of the game, you are asked how many ships ": GOSUB 1000
 5045 A$ = "you want to fight.  This is sort of skill level for the" : GOSUB 1000
 5050 A$ = "game.  1 ship is very easy, 6 ships is hard, and 9 ships" : GOSUB 1000
 5055 A$ = "are next to impossible." : GOSUB 1000 : PRINT : GOSUB 6000
 5060 A$ = "You give orders to your crew by issuing 1 character commands" : GOSUB 1000
 5070 A$ = "CAUTION :  The game is 'real time'.  If you wait too long" : GOSUB 1000
 5080 A$ = "to give a command, you will lose your turn.  For a list" : GOSUB 1000
 5090 A$ = "of availible commands, Type 'H' (for help) when Ekrub" : GOSUB 1000
 5100 A$ = "asks for your orders." : GOSUB 1000
 5110 A$ = "A few words about weapons.  There are 3 types of offensive" : GOSUB 1000
 5120 A$ = "weapons in this game.  They are : ": GOSUB 1000
 5130 A$ = "     Torpedoes.  All the energy you put into a torpedo getss" : GOSUB 1000
 5140 A$ = "          to it's target, but it takes time to get there." : GOSUB 1000
 5150 A$ = "     Disrupter Beam and Fusion Ray.  Their effectiveness" : GOSUB 1000
 5160 A$ = "           decreases with range, but the effect is" : GOSUB 1000
 5170 A$ = "           insstantainious.  The Disrupter beam generally" : GOSUB 1000
 5180 A$ = "           hits with more energy units, but does less damage" : GOSUB 1000
 5190 A$ = "           when it hits." : GOSUB 1000 : GOSUB 6000
 5200 A$ = "Your on-board computer constantly adjusts the flight of" : GOSUB 1000
 5210 A$ = "your torpedoes.  They will ALWAYS hit their target." : GOSUB 1000
 5220 A$ = "However, your computer can only control 10 torpedoes at a" : GOSUB 1000
 5230 A$ = "time.  If you already have 10 torpedoes active, trying to" : GOSUB 1000
 5240 A$ = "fire another one will cause a misfire.  Automatic systems" : GOSUB 1000
 5250 A$ = "will prevent damage to your ship, but the energy you put" : GOSUB 1000
 5260 A$ = "into the torpedo will be lost." : GOSUB 1000 : PRINT 
 5270 A$ = "The archons have the same type weapons you have.  They can" : GOSUB 1000
 5280 A$ = "have a total of 10 torpedoes active at any time.  All ": GOSUB 1000
 5290 A$ = "rules that apply to your weapons also apply to theirs" : GOSUB 1000
 5900 GOSUB 6000
 5999 GOTO 200
 6000 A$ = "": GOSUB 1000 : A$ = "Press -ENTER- to continue : ": GOSUB 1000 : GOSUB 1100 : CLS : RETURN 
 7000 : REM ' NAVIGATION S1=SHIP FROM , S2=SHIP TO
 7001 : REM ' OUT SC=COURSE, SI=DISTANCE
 7005 X1 = SP(S1,0) : Y1 = SP(S1,1) : X2 = SP(S2,0) : Y2 = SP(S2,1) : XD = X2 - X1 : YD = Y2 - Y1 : IF XD = 0 AND YD = 0 THEN 8000
 7010 SI = SQR (XD ^ 2 + YD ^ 2) : CF = 1 / SI : XD = XD * CF : YD = YD * CF
 7015 SI(S1) = SI
 7020 IF XD = 0 AND YD < 0 THEN SC = 271 : GOTO 7100
 7025 IF XD = 0 AND YD > 0 THEN SC = 91 : GOTO 7100
 7030 IF XD < 0 AND YD = 0 THEN SC = 1 : GOTO 7100
 7035 IF XD > 0 AND YD = 0 THEN SC = 181 : GOTO 7100
 7040 IF XD > 0 AND YD < 0 THEN SC = 270 - INT ( ATN ( ABS (XD) / ABS (YD)) * 57.285)
 7045 IF XD > 0 AND YD > 0 THEN SC = 180 - INT ( ATN ( ABS (XD) / ABS (YD)) * 57.285)
 7050 IF XD < 0 AND YD > 0 THEN SC = 90 - INT ( ATN ( ABS (XD) / ABS (YD)) + 57.285)
 7060 IF XD < 0 AND YD < 0 THEN SC = 360 - INT ( ATN ( ABS (XD) / ABS (YD)) * 57.285)
 7100 SC = SC - 1 : RETURN 
 7200 : REM ' MOVE A SHIP OR TORPEDO SC=COURSE D=DIST. (SPPED)
 7210 : REM ' X1,Y1= OLD POSITION X2,Y2=NEW
 7220 F1 = .017456 : T1 = SC : T1 = 180 - T1 : T2 = 90 - T1 : X2 = SIN (T1 * F1)
 7230 Y2 = SIN (T2 * F1) : X2 = X2 * D : Y2 = Y2 * D : X2 = X1 + X2 : Y2 = Y1 + Y2 : RETURN 
 7300 R1 = RND (3) : IF W(S,R1) = - 1 THEN 7330
 7310 A$ = " :  :  "+ W$(R1) + " damaged  :  : ": GOSUB 1000 : W(S,R1) = - 1
 7315 E(S) = E(S) + S(S)
 7330 SR(S) = ((S(S) / E(S))) * 100 : SR(S) = INT (SR(S))
 7335 IF SR(S) < = 0 THEN S(S) = 1
 7340 A$ = " :  :  Shields knocked out!  :  : ": GOSUB 1000 : S(S) = - 1
 7400 RETURN 
 7500 : REM ' SHOOT A WEAPON. X5=ATTACKING SHIP, X6=DEFENDING SHIP
 7505 : REM ' W=WEAPON TO SHOOT (1-4), E1=ENERGY IN SHOT
 7507 IF E(X6) < 00 THEN RETURN 
 7510 IF W(X5,W) = - 1 THEN A$ = " :  :  "+ W$(W) + " of "+ S$(X5) + " damaged  :  : ": GOSUB 1000 : RETURN 
 7515 E(X5) = E(X5) - E1
 7517 IF W = 3 THEN 7600
 7518 IF W = 1 THEN WM = .022 : ELSE WM = .011
 7520 S1 = X5 : S2 = X6 : GOSUB 7005 : E2 = INT ((SI * WM) + .5) : IF E2 > 100 THEN E2 = 100
 7522 E1 = E1 - (E1 * (E2 / 100))
 7530 A$ = " :  :  "+ STR$ (E1) + " units hit "+ S$(X6) + " from "+ S$(X5) + "  :  : ": GOSUB 1000 : GOSUB 7710 : RETURN 
 7550 RETURN 
 7600 S1 = X5 : S2 = X6 : GOSUB 7000
 7605 IF X5 < > 0 THEN 7650
 7610 FOR Q = 11 TO 20 : IF TW(Q) < 1 THEN 7630
 7620 NEXT Q : A$ = "Ekrub :  Still reloading, "+ PS$ + "!" : GOSUB 1000 : RETURN 
 7630 TW(Q) = INT (SI / 1500) + 1 : TE(Q) = E1 : TS(Q) = X6 : A$ = " :  :  "+ S$(X5) + " firing torpedo" + STR$ (Q) + " at "+ S$(X6) + "  :  : ": GOSUB 1000 : RETURN 
 7650 FOR Q = 1 TO 10 : IF TW(Q) < 1 THEN 7680
 7660 NEXT Q : A$ = "Ekrub :  "+ S$(X5) + "'s torpedo has just misfired!" : GOSUB 1000 : RETURN 
 7680 GOTO 7630
 7700 : REM ' DETERMINE DAMANG X6=SHIP HIT, E1=ENERGY OF HIT
 7705 : REM ' X5=ATTACKING SHIP
 7710 S(X6) = S(X6) - E1 : IF S(X6) < 1 THEN S(X6) = - 1 : A$ = " :  :  Shields Knocked out  :  : ": GOSUB 1000 : E(X6) = E(X6) - E1 : SR(X6) = SR(X6) - INT (E1 / 10) - RND (10)
 7715 IF SR(X6) < 0 THEN E(X6) = - 1
 7720 IF E(X6) < = 0 THEN A$ = "++ "+ S$(X6) + " destruct ++" : GOSUB 1000 : E(X6) = - 1 : GOSUB 7810
 7725 IF E(X6) < 0 GOTO 7790
 7727 IF X6 = 0 THEN RETURN 
 7728 IF S(X6) < 0 THEN 7740
 7730 E(X6) = E(X6) + S(X6) : S(X6) = 0
 7735 Y = INT (E(X6) / 3) : S(X6) = Y : E(X6) = E(X6) - Y : GOTO 7790
 7740 Y = RND (100) : IF Y > 75 THEN 7790
 7750 Y = RND (4) : W(X6,Y) = - 1 : A$ = ">>> "+ W$(Y) + " of "+ S$(X6) + " damaged <<<" : GOSUB 1000
 7790 RETURN 
 7800 : REM ' WHEN A SHIP IS DESSTROYED (X6),KILL ALL OTHER TORPS
 7805 : REM ' HEADING FOR IT
 7810 FOR U = 1 TO 20 : IF TS(U) = X6 THEN TW(U) = - 1 : TE(U) = 0 : TS(U) = - 1 : A$ = "++ Torpedo" + STR$ (U) + " destruct ++" : GOSUB 1000
 7820 NEXT U : RETURN 
 8000 STOP 
 8999 : REM ' SURRENDER?
 9000 W7 = 0 : FOR X = 1 TO 4 : IF W(0,X) = - 1 THEN W7 = W7 + 1
 9010 NEXT X : IF W7 < 2 THEN RETURN 
 9020 W7 = 0 : FOR X = 1 TO N : IF E(X) > 0 THEN W7 = W7 + 1
 9030 NEXT X : IF W7 < 2 THEN RETURN 
 9040 IF E(0) / W7 > 40 THEN RETURN 
 9100 FOR X = 1 TO N : IF E(X) > 0 THEN 9120
 9110 NEXT Q : A$ = "Ekrub :  No ships on scanners, "+ PS$ + "!" : GOSUB 1000 : RETURN 
 9120 PRINT : A$ = "Nayra :  Message coming in from the "+ S$(X) + ", "+ PS$ + "!" : GOSUB 1000
 9130 A$ = "    'Commander of the "+ S$(0) + ", You are ordered to surrender" : GOSUB 1000 : A$ = "your vessel.  Respond.'" : GOSUB 1000
 9140 PRINT : A$ = "Ekrub :  Shall we give in to them, "+ PS$ + "?;" : GOSUB 1000
 9150 GOSUB 1100 : IF Q$ = "N" THEN A$ = "Ekrub :  Very Good, "+ PS$ + "!" : PRINT : GOSUB 1000 : RETURN 
 9160 IF Q$ < > "Y" THEN RETURN 
 9200 PRINT : A$ = "Not only have you given up your ship to the Archon swine," : GOSUB 1000 : A$ = "but you've also let them have the Medical supplies" : GOSUB 1000 : A$ = "so needed by your home planet!" : GOSUB 1000 : PRINT 
 9210 A$ = "Luckily for you, your crew kills you for treason even before" : GOSUB 1000 : A$ = "the Archons can take over the ship!" : GOSUB 1000
 9220 GOTO 4900
