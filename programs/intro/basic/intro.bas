# NOTE: Type forced to be:
# gwba - GW-BASIC tokenized file (or BASICA)
    5 DIM P$(43),Q$(20):M=1
   10 P$(1)="T100 O3 L16D":P$(2)="L8D":P$(3)="L8E":P$(4)="L4F":P$(5)="L4D"
   15 P$(6)="L8D":P$(7)="L8C":P$(8)="L3D":P$(9)="L8D"
   20 P$(10)="L8D":P$(11)="L8E":P$(12)="L4F":P$(13)="L4D"
   25 P$(14)="L8D":P$(15)="L8C":P$(16)="L4D":P$(17)="L8D":P$(18)="L8G"
   30 P$(19)="L8G":P$(20)="L8A":P$(21)="L4B":P$(22)="L4G"
   35 P$(23)="L8G":P$(24)="L4F":P$(25)="L8G":P$(26)="L4G":P$(27)="L16D"
   40 P$(28)="L8D":P$(29)="L8E":P$(30)="L4F":P$(31)="L4D"
   45 P$(32)="L8D":P$(33)="L8C":P$(34)="L4D":P$(35)="L8A":P$(36)="L8D"
   50 P$(37)="L8D":P$(38)="L8E":P$(39)="L4F":P$(40)="L4D"
   55 P$(41)="L8D":P$(42)="L8C":P$(43)="L2D"
   60 IF O=1 THEN O=0:GOTO 1605
  100 REM *** INTRO TO MANOR ***
  110 CLS:KEY OFF:PRINT TAB(19);"*** MANOR ***":PRINT:PRINT TAB(10);"Copyright (C) Leon Baradat 1986"
  115 PRINT:PRINT:PRINT TAB(11);"Press M to turn music on/off"
  120 PRINT:PRINT:PRINT "   You are the Earl of Couldoud in medieval England."
  130 Q$(1)="Your estate is one of several in the area and is"
  140 Q$(2)="surrounded by five manors run by other nobles of"
  150 Q$(3)="various strengths."
  160 Q$(5)="   You begin with 1385 acres of land, 60 peasants,"
  170 Q$(6)="75 serfs, and 15 nobles, for a total population of"
  180 Q$(7)="150.  Your able-bodied population totals 60.  This"
  190 Q$(8)="is your fighting force.  You also have 15 pounds"
  195 Q$(9)="sterling and a small amount of grain left over from"
  197 Q$(10)="last year's harvest."
  200 Q$(11)=CHR$(13)+"The computer displays all this information on the screen"
  210 Q$(12)="and begins the year's course of events and decisions:"
  212 FOR A=1 TO 12:PRINT Q$(A):PLAY P$(P):PLAY P$(P+1):P=P+2:A$=INKEY$:IF A$="M" OR A$="m" THEN M=0:FOR B=1 TO 43:P$(B)="":NEXT
  214 NEXT:P=P+1
  215 GOSUB 1600
  220 PRINT:PRINT "  TAXES":Q$(1)=CHR$(13)+"You decide how much to tax your peasants and nobles."
  230 Q$(2)="You do not tax your serfs; they farm your land as"
  240 Q$(3)="payment.  A 10% tax is average, and 30% is the max-"
  250 Q$(4)="imum advisable rate.  Note that no one likes taxes"
  260 Q$(5)="and that the higher they are, the more starvation"
  270 Q$(6)="there is likely to be during poor harvests."
  280 Q$(7)=CHR$(13)+"  LAND TO FARM"+CHR$(13)+"You must then decide how much of your own estates you want to"
  290 Q$(8)="have the serfs farm.  You can't tell your people how much of"
  300 Q$(9)="their land to plant--they do that for themselves.  The grain"
  310 Q$(10)="harvested on your acreage, plus tax revenues, forms the bulk"
  320 Q$(11)="of your income.  Remember that land being continuously farmed"
  330 Q$(12)="will eventually be depleted, and it is a good idea to rotate"
  335 Q$(13)="your crops; leaving half or so of your land fallow each year"
  340 Q$(14)="will suffice to keep it fertile.   NOTE: it takes one bushel"
  341 Q$(15)="of grain to plant an acre of land."
  342 FOR A=1 TO 15:PRINT Q$(A):IF P<44 THEN PLAY P$(P):IF P<43 THEN PLAY P$(P+1)
  343 IF P>43 THEN P=-1
  344 P=P+2:NEXT:P=P-1
  345 GOSUB 1600
  350 PRINT:PRINT "  KNIGHTING PEASANTS":Q$(1)=CHR$(13)+"This is a way to increase your manor's fighting strength."
  360 Q$(2)="You do this by knighting one of your able-bodied peasants"
  370 Q$(3)="and giving him 5 more acres of land, along with 5 pounds"
  380 Q$(4)="sterling and 15 bushels of grain.  Note that this reduces"
  390 Q$(5)="your number of able peasants and can be an expensive way of"
  400 Q$(6)="bolstering your army.  It is an effective method, however,"
  410 Q$(7)="and is particularly useful in attempts to take another"
  420 Q$(8)="noble's land by force or to defend your manor from attack."
  430 Q$(9)=CHR$(13)+"  LAND TRANSACTIONS":Q$(10)=CHR$(13)+"Occasionally a neighboring noble will desire to sell some"
  440 Q$(11)="of his land in order to temporarily increase revenues, or"
  450 Q$(12)="will want to buy some of your acreage when times are good"
  460 Q$(13)="on his manor.  This is not a common practice, and land,"
  470 Q$(14)="being the chief source of revenue, is expensive.  Keep in"
  480 Q$(15)="mind while buying land that you should save some of your"
  490 Q$(16)="money for later.  The king's taxes are yet to come, and"
  500 Q$(17)="war can be very expensive."+CHR$(13)
  503 FOR A=1 TO 17:PRINT Q$(A):IF P<44 THEN PLAY P$(P):IF P<43 THEN PLAY P$(P+1)
  505 IF P>43 THEN P=-1
  507 P=P+2:NEXT:P=P-1
  510 GOSUB 1600
  520 PRINT "  THE MAP":Q$(1)=CHR$(13)+"Your servants then present a map of the area, which they"
  530 Q$(2)="have compiled for you.  Remember that medieval maps were"
  540 Q$(3)="crude and rarely accurate, and this is no exception.  It"
  550 Q$(4)="will be shown hereafter.
  560 Q$(5)=CHR$(13)+"  THE KING'S TAXES":Q$(6)=CHR$(13)+"The King's sheriff arrives in town and figures out your taxes."
  570 Q$(7)="They consist of a tax on your land, your harvest, your income"
  580 Q$(8)="(taxes to your population etc.), and on all miscellaneous"
  590 Q$(9)="factors.  You might be able to get away with covering up the"
  600 Q$(10)="miscellaneous tax, but if you are caught the king doubles it"
  610 Q$(11)="next year.  This also decreases his confidence in you as a"
  620 Q$(12)="loyal subject."+CHR$(13)
  623 FOR A=1 TO 12:PRINT Q$(A):IF P<44 THEN PLAY P$(P):IF P<43 THEN PLAY P$(P+1)
  625 IF P>43 THEN P=-1
  627 P=P+2:NEXT:P=P-1
  630 GOSUB 1600
  640 PRINT:PRINT "  WAR!":Q$(1)=CHR$(13)+"One noble may attack another (usually a small and weak neighbor)"
  650 Q$(2)="and either take or lose some land.  Someone may also attack you,"
  660 Q$(3)="and if so you are alerted immediately.  You can try to find mer-"
  670 Q$(4)="cenaries to augment your fighting force and you may also retreat"
  680 Q$(5)="to your castle.  However, mercenaries are expensive and rather"
  690 Q$(6)="mediocre soldiers as they don't like to take chances. Retreating"
  700 Q$(7)="to the castle means a greater chance of victory but a smaller one
  710 Q$(8)="for you if you win.  Your army will also eat up a lot of grain
  720 Q$(9)="during the seige, and you will be starved out of the castle if
  730 Q$(10)="you haven't enough food left over from the harvest.
  740 Q$(11)=CHR$(13)+"You will soon be asked whether or not you want to go to war."
  750 Q$(12)="If you answer yes, you will decide who to attack and whether"
  760 Q$(13)="or not to hire mercenaries.  Your army will then be assembled,"
  770 Q$(14)="and you are given a chance to call off the attack at the last"
  780 Q$(15)="minute if you should have second thoughts.  If not, they sound"
  790 Q$(16)="the charge and invade...When you attack someone, he is assumed"
  800 Q$(17)="to retreat to his castle, with all the effects listed above."+CHR$(13)
  803 FOR A=1 TO 17:PRINT Q$(A):IF P<44 THEN PLAY P$(P):IF P<43 THEN PLAY P$(P+1)
  805 IF P>43 THEN P=-1
  807 P=P+2:NEXT:P=P-1
  820 GOSUB 1600
  830 PRINT "  LAND DISTRIBUTION":Q$(1)="Finally, your servants bring forth a chart showing the dist-"
  840 Q$(2)="ribution of land on the manor.  You may (or might have to)"
  850 Q$(3)="redistribute the land.  The usual is 8.3 acres per peasant"
  860 Q$(4)="or serf, 12.3 for each noble, and 75 acres for yourself."
  870 Q$(5)="This is the initial division and allows for fair harvests":Q$(6)="and general prosperity."
  880 Q$(7)=CHR$(13)+"  FINAL REMARKS":Q$(8)=CHR$(13)+"Now any number of things can happen.  If the lower classes are"
  890 Q$(9)="angry enough they may revolt, although your nobles usually manage"
  900 Q$(10)="to hold them off.  However, if the upper classes don't like the"
  910 Q$(11)="way you run the manor, they have their own style of putting you"
  915 Q$(12)="out of office, and one evening you may find your dinner poisoned"
  920 Q$(13)="(although this is not always lethal)."
  925 Q$(14)=CHR$(13)+"Also, there is a slight chance of an outbreak of the Black Plague."
  930 Q$(15)="It may strike your manor or others nearby, or it might just miss"
  935 Q$(16)="the area entirely.  Nothing is certain, and reports from neigh-"
  940 Q$(17)="boring estates are no more than rumors; they are not always to be
  945 Q$(18)="trusted.  Note: if your manor is hit by the Plague, you may be
  950 Q$(19)="stricken with it yourself...
  952 FOR A=1 TO 19:PRINT Q$(A):IF P<44 THEN PLAY P$(P):IF P<43 THEN PLAY P$(P+1)
  953 IF P>43 THEN P=-1
  954 P=P+2:NEXT:P=P-1
  970 GOSUB 1600
  980 PRINT:PRINT "  THE MAP":PRINT:PRINT "The area originally looks like this:"
  990 PRINT "(Do not press any keys.  I am drawing the map.)"
 1010 DIM T(22,41)
 1060 FOR A=1 TO 10:FOR B=1 TO 23:T(A,B)=176:NEXT:NEXT:FOR A=17 TO 22:FOR B=1 TO 40:T(A,B)=178:NEXT:NEXT
 1070 FOR A=1 TO 5:FOR B=24 TO 40:T(A,B)=8:NEXT:NEXT:FOR A=9 TO 18:FOR B=30 TO 40:T(A,B)=15:NEXT:NEXT
 1080 FOR A=9 TO 16:FOR B=16 TO 29:T(A,B)=219:NEXT:NEXT:FOR A=11 TO 18:FOR B=1 TO 15:T(A,B)=177:NEXT:NEXT:FOR A=10 TO 12:T(A,15)=219:NEXT:FOR A=1 TO 10:T(11,A)=176:NEXT
 1085 FOR A=12 TO 15:T(18,A)=178:NEXT:FOR A=7 TO 8:FOR B=24 TO 31:T(A,B)=8:NEXT:NEXT:FOR A=38 TO 40:T(8,A)=15:NEXT:FOR A=24 TO 40:T(6,A)=8:NEXT:FOR A=16 TO 27:T(17,A)=219:NEXT
 1086 FOR A=7 TO 8:FOR B=32 TO 40:T(A,B)=15:NEXT:NEXT:FOR A=32 TO 40:T(19,A)=15:NEXT:T(7,32)=8:T(17,28)=15:T(17,29)=15:FOR A=36 TO 40:T(20,A)=15:NEXT:FOR A=38 TO 40:T(21,A)=15:NEXT
 1100 CLS:FOR A=1 TO 22:FOR B=1 TO 40:PRINT CHR$(T(A,B));:NEXT:PRINT:NEXT
 1200 LOCATE 4,7:PRINT "The Duchy":LOCATE 5,6:PRINT "of Leonshire"
 1210 LOCATE 3,26:PRINT "The Viscounty":LOCATE 4,25:PRINT "of Whatsitsname"
 1220 LOCATE 14,3:PRINT "The Barony":LOCATE 15,4:PRINT "of Crisco"
 1230 LOCATE 12,17:PRINT "The Earldom":LOCATE 13,17:PRINT "of Couldoud":LOCATE 14,20:PRINT "(you)"
 1240 LOCATE 11,34:PRINT "The":LOCATE 12,32:PRINT "Earldom":LOCATE 13,34:PRINT "of":LOCATE 14,30:PRINT "Cretinburgh"
 1250 LOCATE 21,10:PRINT "The March of Adelmynde"
 1260 LOCATE 11,44:PRINT "Each square equals about 12 acres."
 1300 GOSUB 1600
 1310 CLS:PRINT:PRINT "Very well.  One final note: In response to a yes"
 1320 PRINT "or no question, you need not type out the full"
 1330 PRINT "word: "CHR$(34)"y"CHR$(34)" (or "CHR$(34)"Y"CHR$(34)") will suffice for yes, and"
 1340 PRINT "anything else will be taken as a no."
 1397 GOSUB 1600
 1410 PRINT:PRINT:PRINT "Well, there you have it.  When the game begins,"
 1420 PRINT "you are given 60 able-bodied men, 150 bushels"
 1430 PRINT "of grain, 15 pounds sterling, enough land to"
 1440 PRINT "sustain yourself and your people, and a castle"
 1450 PRINT "to help defend it all.  Are you ready for the"
 1460 PRINT "adventure that awaits you at the touch of a"
 1470 FOR A=1 TO 15000:NEXT:PRINT "button";:FOR B=1 TO 4:FOR A=1 TO 1250:NEXT:PRINT "? ";:NEXT
 1480 GOSUB 1600
 1490 IF A$<>"N" AND A$<>"n" THEN CHAIN"MANOR"
 1500 PRINT:PRINT:PRINT "WHAT DO YOU MEAN You'll not play this game?":END
 1600 FOR A=1 TO 16:A$=INKEY$:NEXT
 1605 P=P+1:IF P>43 THEN P=1
 1610 PLAY P$(P)
 1615 A$=INKEY$:IF A$="" THEN 1605
 1620 IF A$<>"M" AND A$<>"m" THEN RETURN
 1630 IF M=1 THEN M=0:FOR A=1 TO 43:P$(A)="":NEXT:GOTO 1605
 1640 M=1:O=1:GOTO 10
