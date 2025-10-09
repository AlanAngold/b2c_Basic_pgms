    1 REM *** STRUGGLE FOR THE CONTINENT ***
    2 REM * This game has its early beginnings in the fall of 1985, when I *
    3 REM * studied a map of World War I in IB Government class my senior *
    4 REM * year of high school and an idea came into my mind. Over several *
    5 REM * years' time I invented and improved this game and its rules. *
    6 REM * I originally wrote the program in September of 1991; though it *
    7 REM * had many bugs, it was playable. While looking for work in Jan- *
    8 REM * April 1992, I corrected many of them, then fixed most of the *
    9 REM * rest in August. This is the game you see today. *
   10 CLS 
		: COLOR 14,0 : LOCATE 1,31 : PRINT "RULES OF THE GAME : "
		: PRINT CHR$(218); STRING$(78,196);CHR$(191)
   20 FOR V=3 TO 21 
		: LOCATE V : PRINT CHR$(179) 
		: LOCATE V,80 : PRINT CHR$(179); 
		: NEXT 
		: PRINT CHR$(192); STRING$(78,196);CHR$(217);
   30 COLOR 1,0 : LOCATE 4,35 : PRINT "1 :  SETUP" 
		: COLOR 6,0 : LOCATE 6,3 : PRINT "1  This is organized to be a game of allies.  Thus, victories are the" 
		: LOCATE 7,6 : PRINT "result of teamwork between allied nations."
   40 LOCATE 8,3 : PRINT "2  Each country begins with a certain number of armies, which its player" 
		: LOCATE 9,6 : PRINT "stations within the country as he/she sees fit.  However, at least"
   50 LOCATE 10,6 : PRINT "one army must be stationed at the capital before play.  Once play" 
		: LOCATE 11,6 : PRINT "has begun, this requirement no longer applies."
   60 LOCATE 12,3 : PRINT "3  Since the game is organized along team rather than individual lines," 
		: LOCATE 13,6 : PRINT "equality among players is not necessary.  What is advisable instead" 
		: LOCATE 14,6 : PRINT "is a relative equality between the two teams."
   70 LOCATE 15,3 : PRINT "4  The first team to move does not mobilize on its first turn." 
		: LOCATE 16,3 : PRINT "5  For purposes of the game, Serbia and Montenegro are so closely allied"
   80 LOCATE 17,6 : PRINT "that they are treated as the same country.  Thus, Montenegro is a part" 
		: LOCATE 18,6 : PRINT "of Serbia and is administered by the player who controls Serbia."
   90 LOCATE 21,27 : PRINT "Press a key for next page" 
		: GOSUB 480
  100 COLOR 1,0 : LOCATE 4,34 : PRINT "2 :  MOVEMENT" 
		: COLOR 6,0 : LOCATE 6,5 : PRINT "1  Each army can make up to 2 moves per turn." 
		: LOCATE 7,5 : PRINT "2  Moving across a province counts as a move."
  110 LOCATE 8,5 : PRINT "3  Attacking counts as a move.  Thus, an army cannot move across two" 
		: LOCATE 9,8 : PRINT "provinces and attack the second one." 
		: LOCATE 10,5 : PRINT "4  Defending against an attack does not count as movement."
  120 LOCATE 11,5 : PRINT "5  Retreat from a battle does not count as a move." 
		: LOCATE 12,5 : PRINT "6  Armies may move freely into (or through) provinces belonging to" 
		: LOCATE 13,8 : PRINT "an ally.  They may do the same with enemy territory--unless there"
  130 LOCATE 14,8 : PRINT "are troops present in the province(s) in question." 
		: LOCATE 15,5 : PRINT "7  Provinces connected by dotted lines across bodies of water are" 
		: LOCATE 16,8 : PRINT "considered to border one another."
  140 LOCATE 17,5 : PRINT "8  Provinces connected by only a point--such as Transylvania and" 
		: LOCATE 18,8 : PRINT "Bucharest--are NOT considered to border one another." 
		: LOCATE 19,5 : PRINT "9  Luxembourg and the Saudi kingdom are impassable." 
		: GOSUB 480
  150 COLOR 1,0 : LOCATE 4,30 : PRINT "3 :  NUMBER OF ARMIES" 
		: COLOR 6,0 : LOCATE 6,5 : PRINT "1  Each country begins with a specific number of armies :  Italy six," 
		: LOCATE 7,8 : PRINT "Austria nine, and so forth."
  160 LOCATE 8,5 : PRINT "2  Each country mobilizes a certain number of armies at the beginning" 
		: LOCATE 9,8 : PRINT "of its turn." 
		: LOCATE 10,5 : PRINT "3  Once a country has mobilized its total number of armies--regardless"
  170 LOCATE 11,8 : PRINT "of the number it has on the board--it may mobilize no more armies." 
		: LOCATE 12,5 : PRINT "4  All armies are mobilized at a nation's capital.  Thus, if one side"
  180 LOCATE 13,8 : PRINT "takes an enemy's capital, that country may not mobilize so long as" 
		: LOCATE 14,8 : PRINT "its capital is occupied.  However, if the country or its allies"
  190 LOCATE 15,8 : PRINT "retake the capital, and the country still retains armies on the" 
		: LOCATE 16,8 : PRINT "board, it may mobilize normally once again." 
		: LOCATE 17,5 : PRINT "5  If a country has mobilized and lost all its armies in combat, or if"
  200 LOCATE 18,8 : PRINT "its capital is occupied by enemy forces and it has no armies left" 
		: LOCATE 19,8 : PRINT "on the board, it is defeated and out of the game." 
		: GOSUB 480
  210 COLOR 1,0 : LOCATE 4,35 : PRINT "4 :  COMBAT" 
		: COLOR 6,0 : LOCATE 6,5 : PRINT "1  Combat proceeds in waves, with one line of armies lined up against" 
		: LOCATE 7,8 : PRINT "the other.  Individual combat occurs between those individual armies"
  220 LOCATE 8,8 : PRINT "that face one another." 
		: LOCATE 9,5 : PRINT "2  An attacker or defender may retreat between waves.  Both sides will" 
		: LOCATE 10,8 : PRINT "be asked at that time whether they wish to continue fighting."
  230 LOCATE 11,5 : PRINT "3  The opposing armies compare their attack values to determine tactical" 
		: LOCATE 12,8 : PRINT "advantage for the battle.  Example :  2 French, 2 English, and 3 German"
  240 LOCATE 13,8 : PRINT "armies engage in combat.  The German armies [5] have a +2 advantage" 
		: LOCATE 14,8 : PRINT "over the British [3] but only a +1 advantage over the French [4]."
  250 LOCATE 15,5 : PRINT "4  The computer generates a random number of 1 to 10 for each side of" 
		: LOCATE 16,8 : PRINT "an individual combat.  The tactical advantage is added in and the"
  260 LOCATE 17,8 : PRINT "losing army is then removed.  Ties result in a standoff between the" 
		: LOCATE 18,8 : PRINT "two armies, with neither being removed during that wave." 
		: GOSUB 480
  270 COLOR 1,0 : LOCATE 4,29 : PRINT "4 :  COMBAT"; 
		: COLOR 6,0 : PRINT " -- Continued" 
		: LOCATE 6,5 : PRINT "5  During a battle, when one army defeats another, all its allies in" 
		: LOCATE 7,8 : PRINT "combat subtract one from their attack values.  Example : "
  280 LOCATE 9,10 : PRINT "2 German and 3 Austrian armies engage 2 Rumanian and 5 Russian" 
		: LOCATE 10,10 : PRINT "armies.  The Germans [5] attack the Rumanians [2], and the" 
		: LOCATE 11,10 : PRINT "Austrians [2] go after the Russians [1]."
  290 LOCATE 13,8 : PRINT "The German armies have an initial advantage of 3 and the Austrians" 
		: LOCATE 14,8 : PRINT "one of 1.  The first German army defeats a Rumanian unit, giving the"
  300 LOCATE 15,8 : PRINT "next German an advantage of only 2 and making the Austrians equal to" 
		: LOCATE 16,8 : PRINT "the Russians.  The next German army also defeats a Rumanian.  These"
  310 LOCATE 17,8 : PRINT "two German victories have cost the Austrians 2 points, and the" 
		: LOCATE 18,8 : PRINT "Russians actually have an advantage of 1 over them." 
		: GOSUB 480
  320 COLOR 1,0 : LOCATE 4,29 : PRINT "4 :  COMBAT"; 
		: COLOR 6,0 : PRINT " -- Continued" 
		: LOCATE 6,5 : PRINT "Now -- the Austrians facing Russian armies with 2 points on their side : "
  330 LOCATE 8,8 : PRINT "The Russians [1] have a +1 advantage over the Austrians [2] because" 
		: LOCATE 9,8 : PRINT "of the difference in combat losses so far.  Combat resumes."
  340 LOCATE 11,8 : PRINT "The first Austrian beats a Russian army, leaving its partner with a" 
		: LOCATE 12,8 : PRINT "penalty of 2 versus its Russian opponent.  The second Austrian army"
  350 LOCATE 13,8 : PRINT "attacks and loses.  There are now 4 Russian units left to face 2" 
		: LOCATE 14,8 : PRINT "Germans and an Austrian.  Though the Germans [5] would ordinarily"
  360 LOCATE 15,8 : PRINT "have a +4 advantage against the Russians [1], the Russians' side" 
		: LOCATE 16,8 : PRINT "suffered two more defeats than the Germans and Austrians, so"
  370 LOCATE 17,8 : PRINT "the Germans have only an advantage of 2.  The Austrians, again," 
		: LOCATE 18,8 : PRINT "have a -1 penalty against them.  Note :  these adjustments do "; 
		: COLOR 1,0 : PRINT "not" : COLOR 6,0
  380 LOCATE 19,8 : PRINT "apply to later battles." 
		: GOSUB 480
  390 COLOR 1,0 : LOCATE 4,30 : PRINT "5 :  ADDITIONAL ALLIES" 
		: COLOR 6,0 : LOCATE 6,5 : PRINT "1  There will likely come a time in the game when a team has been weak-" 
		: LOCATE 7,8 : PRINT "ened to the point that its defeat is all but insured.  At this time"
  400 LOCATE 8,8 : PRINT "it may ask a neutral nation of its choice to join the war effort." 
		: LOCATE 9,8 : PRINT "There is a one in three chance that the country will accept."
  410 LOCATE 10,5 : PRINT "2  The country to be asked must border an enemy of the asking team." 
		: LOCATE 11,5 : PRINT "3  Only one country may be called on per turn." 
		: LOCATE 12,5 : PRINT "4  Only a team's group leader (first to move) may ask a neutral to join."
  420 LOCATE 13,5 : PRINT "5  In order to ask a state to join, "; 
		: COLOR 14,0 : PRINT "all players on the team"; 
		: COLOR 6,0 : PRINT " must for-" 
		: LOCATE 14,8 : PRINT "feit their turn, although each country will still mobilize armies."
  430 LOCATE 15,5 : PRINT "6  A team should not be visibly stronger than the other if it is to" 
		: LOCATE 16,8 : PRINT "ask for aid.  Nor should the country called upon be overwhelmingly"
  440 LOCATE 17,8 : PRINT "stronger than the entire opposing team." 
		: LOCATE 18,5 : PRINT "7  A state that enters the war will be set up, as the others were at" 
		: LOCATE 19,8 : PRINT "the beginning, and the game continues."
  450 COLOR 0,7 : LOCATE 21,24 : PRINT " Press a key to return to menu "
		: COLOR 6,0 
		: FOR A=1 TO 16 
		: A$= INKEY$ 
		: NEXT 
  460 A$= INKEY$ 
		: IF A$="" THEN 460 
		: ELSE CHAIN "SFC"
  480 A$= INKEY$ 
		: IF A$="" THEN 480 
		: ELSE FOR A=3 TO 19 
		: LOCATE A,3 
		: PRINT STRING$(76,32) 
		: NEXT 
		: RETURN 
