# NOTE: Type forced to be:
# gwba - GW-BASIC tokenized file (or BASICA)
    1 DIM F(4)
    2 COLOR 10,0:CLS:PRINTTAB(31);"FUR TRADER"
    4 PRINTTAB(15);"Creative Computing, Morristowm, New Jersey"
    6 PRINT:PRINT
   15 GOSUB 1091
   16 I=600
   17 PRINT "Do you wish to trade furs?"
   18 GOSUB 1402
   19 IF B$="yes" THEN 100
   20 IF B$="YES" THEN 100
   21 END
  100 PRINT
  101 PRINT "You have $";I;"savings."
  102 PRINT "And 19O furs to begin the expedition."
  261 RANDOMIZE(VAL(RIGHT$(TIME$,2))):E1=INT((0.15*(RND*2)+0.95)*10^2+0.5)/10^2
  262 RANDOMIZE(VAL(RIGHT$(TIME$,2))):B1=INT((0.25*(RND*2)+1.0)*10^2+0.5)/10^2
  300 PRINT
  301 PRINT "Your 19O furs are distributed among the following"
  302 PRINT "kinds of pelts:  Mink, Beaver, Ermine, and Fox."
  310 GOSUB 1430
  315 RESTORE
  330 FOR J=1 TO 4
  332 READ B$
  333 PRINT
  335 PRINT "How many "+B$+" pelts do you have";
  338 INPUT F(J)
  340 F(0)=F(1)+F(2)+F(3)+F(4)
  342 IF F(0)=190 THEN 1100
  344 IF F(0)>190 THEN 500
  348 NEXT J
  350 GOTO 1100
  500 PRINT
  501 PRINT "You may not have that many furs."
  502 PRINT "Do not try to cheat.  I can add."
  503 PRINT "You must start again."
  504 GOTO 15
  508 PRINT
  511 PRINT "Do you want to trade furs next year?"
  513 GOTO 18
 1091 PRINT:PRINT "You are the leader of a French fur trading expedition in"
 1092 PRINT "1776 leaving the Lake Ontario Area to sell furs and get"
 1093 PRINT "supplies for the next year.  You have a choice of three"
 1094 PRINT "forts at which you may trade.  The cost of supplies"
 1095 PRINT "and the amount you receive for your furs will depend"
 1096 PRINT "on the fort that you choose."
 1099 RETURN
 1100 PRINT:PRINT "Do you want to trade your furs at Fort 1, Fort 2,"
 1102 PRINT "or Fort 3 ?  Fort 1 is Fort Hochelaga (Montreal)"
 1103 PRINT "and is under the protection of the French Army."
 1104 PRINT "Fort 2 is Fort Stadacona (Quebec) and is under the"
 1105 PRINT "protection of the French Army.  However, you must"
 1106 PRINT "make a portage and cross the Lachine Rapids."
 1108 PRINT "Fort 3 is Fort New York and is under Dutch Control."
 1109 PRINT "You must cross through Iroquois Land."
 1110 PRINT "Answer 1, 2, or 3."
 1111 INPUT B
 1112 IF B=1 THEN 1120
 1113 IF B=2 THEN 1135
 1115 IF B=3 THEN 1147
 1116 GOTO 1110
 1120 PRINT "You have chosen the easiest route.  However, the"
 1121 PRINT "fort is far from any seaport.  The value you"
 1122 PRINT "receive for your furs will be low and the cost of"
 1123 PRINT "supplies higher than at Forts Stadacona or New York."
 1125 GOSUB 1400
 1129 IF B$="yes" OR B$="YES" THEN 1110
 1130 GOTO 1160
 1135 PRINT "You have chosen a hard route.  It is, in comparison,"
 1136 PRINT "harder than the route to Hochelaga but easier than"
 1137 PRINT "the route to New York.  You will receive an average"
 1138 PRINT "value for your furs and the cost of your supplies"
 1139 PRINT "will be average."
 1141 GOSUB 1400
 1144 IF B$="yes" OR B$="YES" THEN 1110
 1145 GOTO 1198
 1147 PRINT "You have chosen the most difficult route.  At"
 1148 PRINT "Fort New York you will receive the highest value"
 1149 PRINT "for your furs.  The cost of your supplies will"
 1150 PRINT "be lower than at all the other forts."
 1152 GOSUB 1400
 1155 IF B$="yes" OR B$="YES" THEN 1110
 1156 GOTO 1250
 1160 I=I-160
 1169 PRINT
 1174 RANDOMIZE(VAL(RIGHT$(TIME$,2))):M1=INT((0.2*(RND*2)+0.7)*10^2+0.5)/10^2
 1175 RANDOMIZE(VAL(RIGHT$(TIME$,2))):E1=INT((0.2*(RND*2)+0.65)*10^2+0.5)/10^2
 1176 RANDOMIZE(VAL(RIGHT$(TIME$,2))):B1=INT((0.2*(RND*2)+0.75)*10^2+0.5)/10^2
 1177 RANDOMIZE(VAL(RIGHT$(TIME$,2))):D1=INT((0.2*(RND*2)+0.8)*10^2+0.5)/10^2
 1180 PRINT "Supplies at Fort Hochelaga cost $15O."
 1181 PRINT "Your travel expenses to Hochelaga were $1O."
 1190 GOTO 1410
 1198 I=I-140
 1201 PRINT
 1205 RANDOMIZE(VAL(RIGHT$(TIME$,2))):M1=INT((0.3*(RND*2)+0.85)*10^2+0.5)/10^2
 1206 RANDOMIZE(VAL(RIGHT$(TIME$,2))):E1=INT((0.15*(RND*2)+0.8)*10^2+0.5)/10^2
 1207 RANDOMIZE(VAL(RIGHT$(TIME$,2))):B1=INT((0.2*(RND*2)+0.9)*10^2+0.5)/10^2
 1209 RANDOMIZE(VAL(RIGHT$(TIME$,2))):P=INT(10*(RND*2))+1
 1210 IF P<=2 THEN 1216
 1212 IF P<=6 THEN 1224
 1213 IF P<=8 THEN 1226
 1215 IF P<=10 THEN 1235
 1216 F(2)=0
 1218 PRINT "Your beavers were too heavy to carry across"
 1219 PRINT "the Portage.  You had to leave the pelts but"
 1220 PRINT "found them stolen when you returned."
 1221 GOSUB 1244
 1222 PRINT:GOTO 1414
 1224 PRINT "You arrived safely at Fort Stadacona."
 1225 GOTO 1239
 1226 GOSUB 1430
 1230 PRINT "Your canoe upset in the Lachine Rapids."
 1231 PRINT "You lost all your furs."
 1232 GOSUB 1244
 1233 GOTO 1418
 1235 F(4)=0
 1237 PRINT "Your fox pelts were not cured properly."
 1238 PRINT "No one will buy them."
 1239 GOSUB 1244
 1240 GOTO 1410
 1244 PRINT "Supplies at Fort Stadacona cost $125."
 1246 PRINT "Your travel expenses to Stadacona were $15."
 1248 RETURN
 1250 I=I-105
 1254 PRINT
 1260 RANDOMIZE(VAL(RIGHT$(TIME$,2))):M1=INT((0.15*(RND*2)+1.05)*10^2+0.5)/10^2
 1263 RANDOMIZE(VAL(RIGHT$(TIME$,2))):D1=INT((0.25*(RND*2)+1.1)*10^2+0.5)/10^2
 1270 RANDOMIZE(VAL(RIGHT$(TIME$,2))):P=INT(10*(RND*2))+1
 1271 IF P<=2 THEN 1281
 1272 IF P<=6 THEN 1291
 1273 IF P<=8 THEN 1295
 1274 IF P<=10 THEN 1306
 1281 PRINT "You were attacked by a party of Iroquois."
 1282 PRINT "All people in your trading group were"
 1283 PRINT "killed.  This ends the game."
 1284 END
 1291 PRINT "You were lucky.  You arrived"
 1292 PRINT "safely at Fort New York."
 1293 GOTO 1311
 1295 GOSUB 1430
 1300 PRINT "You narrowly escaped an Iroquois raiding party."
 1301 PRINT "However, you had to leave all your furs behind."
 1303 GOSUB 1320
 1304 GOTO 1418
 1306 B1=B1/2
 1307 M1=M1/2
 1308 PRINT "Your mink and beaver were damaged on your trip.  You"
 1309 PRINT "receive only half the current price for these furs."
 1311 GOSUB 1320
 1312 GOTO 1410
 1320 PRINT "Supplies at New York cost $8O."
 1321 PRINT "Travel expenses to New York were $25."
 1322 RETURN
 1400 PRINT "Do you want to trade at another fort?"
 1402 PRINT "Answer yes or no",
 1403 INPUT B$
 1404 RETURN
 1410 PRINT
 1412 PRINT "Your Beaver pelts sold for $";B1*F(2);"."
 1414 PRINT "Your Fox pelts sold for $";D1*F(4);"."
 1416 PRINT "Your Ermine pelts sold for $";E1*F(3);"."
 1417 PRINT "Your Mink pelts sold for $";M1*F(1);"."
 1418 I=M1*F(1)+B1*F(2)+E1*F(3)+D1*F(4)+I
 1420 PRINT
 1422 PRINT "You now have $";I;" including your previous savings."
 1425 GOTO 508
 1430 FOR J=1 TO 4
 1432 F(J)=0
 1434 NEXT J
 1436 RETURN
 2000 DATA "Mink","Beaver","Ermine","Fox"
