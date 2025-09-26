    5 : REM ' PETER TREFONAS\n 22 BLUEBIRD\n NEW ORLEANS, LA 70124\nCOPYRIGHT (C) CLOAD 1981
   10 CLS : CLEAR 270 : DEFINT A - Y : DEFSTR Z : INPUT "Give reading speed (1=fast, 100=very slow)";S
   12 K = 0 : READ Z1 : IF Z1 = "CHR$(34)" THEN Z1 = CHR$ (34)
   15 L = LEN (Z1)
   20 K = K + 1 : IF K > L GOTO 12
   25 Z = MID$ (Z1,K,1)
   29 IF Z = "*" THEN FOR I = 1 TO 1500 : NEXT I : GOTO 20
   30 IF Z = "@" CLS : GOTO 20
   35 IF Z = ">" END 
   40 IF Z = "/" PRINT "": GOTO 20
   45 PRINT Z; : FOR Q = 1 TO S : NEXT Q : GOTO 20
   50 DATA "@  Hello!     Welcome to  E M P I R E . . .*//Imagine yourself to be the ruler of a small, unimportant piece/of European land way back in the medieval ages. Your country is/beset by many problems - no industry, little trade, small army"
   60 DATA ",/underpopulation, angry neighbors, plague, and all the other/day-to-day problems a capable leader must learn to face. Am-/bitious by necessity, you must aquire land, capital, and an/
   70 DATA "army just to survive. Because of the short lifetimes back then,/you'll have only a limited amount of time to build your coun-/try into an empire./"
   80 DATA "/  Competent rule will gradually be rewarded with lofty titles -/Knight, Prince, King, and finally  -- Emperor --*@
   90 DATA "  Sounds easy?  Then consider this - five other city-states are/also struggling to become the emperor, and they don't just in-"
  100 DATA "/tend to passively watch you win. They control armies which can/attack at a moments notice, and perhaps devastate your country./
  110 DATA "They control the grain market, and if you think OPEC is bad,/just wait and see how scarce and expensive grain can become./
  120 DATA "  Of course, a competent ruler could make a killing on the/grain market. With proper planning, your harvests should be/plentiful. You could solve overpopulation problems by raising a/
  130 DATA "large army to be killed off in battle./  Nevertheless, your overiding concern should be lebensraum -/living room. There is only a limited amount of land to be con-/quered. If you can defeat the barbarian hordes, and the well-/
  140 DATA "trained standing armies of the other nations, and then defeat/their peasant militias, perhaps you may attain the well deser-/ved title of Emperor.*@"
  150 DATA "Taxes : /  The customs tax applies only to immigrants to your nation./Often, lower customs tax means more immigrants./  The sales tax is closely intertwined into your capitalist/economy. While it has the potential of raising lots of money,
  160 DATA "/overly high taxes tend to stifle industrial profits./  Income taxes are paid by all inhabitants and industry. Again,/lower income tax often means increased industrial output.
  170 DATA "//  You have the option each year to invest your earnings in/different types of trade and industry. In the years to follow,/these investments, if managed correctly, will more than pay/for themselves.*@
  180 DATA "Types of investments : //  Marketplaces are a relatively cheap investment that are quite/profitable because they encourage the formation of a middle/class - the merchants. And, as you are probably aware, the/
  190 DATA "middle class pays an inordinate share of taxes./  Grain mills are necessary to process the harvest, and con-/sequently, usually do quite well when there is a large harvest./
  200 DATA "  Foundries are necessary for the creation of large armies./Several of them will allow you to equip a much larger army/than otherwise./
  210 DATA "  Shipyards have the greatest profit potential of all invest-/ments. Because of a larger volume of orders during good wea-/ther, there is often a better return during these years.*@
  220 DATA "  Armies are never a profitable investment. Besides costing/a large initial investment, they also cost a lot to maintain/and train. In addition, they also require a greater fraction/of the harvest than serfs./
  230 DATA "  Of course, one should give himself the luxury of building a/palace. What else could distinguish an emperor from all the/other kings with their castles, than a palace? Also, with a/
  240 DATA "palace, your country will begin to attract more nobles.//Other general hints : /  You always lose 10% as a brokerage fee when dealing on the/grain market. When you sell your grain at different prices,/
  250 DATA "the market price is the weighted average of the sales prices/(this helps to prevent large yearly price fluctuations). To/prevent those unscrupulous rulers who try to use the market as/
  260 DATA "a method to avoid the rats, you can't buy back your own grain.*@Also, leave a portion of your grain reserve for planting for/next year's harvest./
  270 DATA "Often, it is beneficial to feed your people much more than they/require. Immigrants are usually attracted to a prosperous nat-/ion, and sometimes, even merchants and nobles move in./
  280 DATA "//  Up to six people can play this game. Rulers not played by/humans will be played by your TRS-80, with its playing abil-/ity based on the average of the human players.*@
  282 DATA "Winning : //To become a prince, you must pass these rather stringent/qualifications : 8 marketplaces, 4 mills, palace 20% completed,/a land-over-serf ratio of 4.8, over 10 nobles, and over 2300/serfs./
  284 DATA "/To become a king, you must have : 14 marketplaces, 6 mills,/palace 60% completed, 1 foundry, land-over-serf ratio of at/least 5.0, Over 2600 serfs and 25 nobles.//
  286 DATA "To become an +EMPEROR+ you must meet all of the above qual-/ifications, and ....over 3100 serfs and 40 nobles.//
  290 DATA "-- When you are ready to start the game, type 'RUN",CHR$(34),"EMPIRE",CHR$(34),"'-/Good luck, future rulers*>
