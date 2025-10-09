# NOTE: Type forced to be:
# gwba - GW-BASIC tokenized file (or BASICA)
   10 REM  ***        MANOR          ***
   20 REM  *** BY LEON BARADAT  1986 ***
   30 REM  Special thanks to Rene Baradat for historical background
   40 REM  and advice, and to the program Dukedom from Big Computer
   50 REM  Games by David Ahl.
   60 DIM T(22,40)
   70 H$(0)="Dismal":H$(1)="Poor":H$(2)="Fair":H$(3)="Good":H$(4)="Very Good":H$(5)="Excellent"
   80 W(1)=180:W(2)=85:W(3)=130:W(4)=120:W(5)=100:FOR A=1 TO 5:W1(A)=W(A):FF(A)=50:NEXT:R=250
   90 PP(1)=265:PP(2)=125:PP(3)=190:PP(4)=170:PP(5)=140:MO(1)=1:MO(2)=1:MO(3)=1
  100 NS=115:NS(1)=202:NS(2)=95:NS(3)=147:NS(4)=133:NS(5)=108
  110 SE(0)=219:SE(1)=176:SE(2)=177:SE(3)=178:SE(4)=15:SE(5)=8:WL(1)=2425:WL(2)=1135:WL(3)=1760:WL(4)=1593:WL(5)=1302:FOR A=1 TO 5:SEE(A)=SE(A):NEXT
  120 GOSUB 2770:Y=INT(21+RND*5):YAB=Y
  130 FOR A=1 TO 10:FOR B=1 TO 23:T(A,B)=176:NEXT:NEXT:FOR A=17 TO 22:FOR B=1 TO 40:T(A,B)=178:NEXT:NEXT
  140 FOR A=1 TO 5:FOR B=24 TO 40:T(A,B)=8:NEXT:NEXT:FOR A=9 TO 18:FOR B=30 TO 40:T(A,B)=15:NEXT:NEXT
  150 FOR A=9 TO 16:FOR B=16 TO 29:T(A,B)=219:NEXT:NEXT:FOR A=11 TO 18:FOR B=1 TO 15:T(A,B)=177:NEXT:NEXT:FOR A=10 TO 12:T(A,15)=219:NEXT:FOR A=1 TO 10:T(11,A)=176:NEXT
  160 FOR A=12 TO 15:T(18,A)=178:NEXT:FOR A=7 TO 8:FOR B=24 TO 31:T(A,B)=8:NEXT:NEXT:FOR A=38 TO 40:T(8,A)=15:NEXT:FOR A=24 TO 40:T(6,A)=8:NEXT:FOR A=16 TO 27:T(17,A)=219:NEXT
  170 FOR A=7 TO 8:FOR B=32 TO 40:T(A,B)=15:NEXT:NEXT:FOR A=32 TO 40:T(19,A)=15:NEXT:T(7,32)=8:T(17,28)=15:T(17,29)=15:FOR A=36 TO 40:T(20,A)=15:NEXT:FOR A=38 TO 40:T(21,A)=15:NEXT
  180 D$(1)="Duke of Leonshire":D$(2)="Baron of Crisco":D$(3)="Marquis of Adelmynde":D$(4)="Earl of Cretinburgh":D$(5)="Viscount of Whatsitsname"
  190 CLS:KEY OFF:PRINT
  200 PT=10:NT=10:L=1385:LE=75:P(1)=60:P(2)=75:P(3)=15:P(4)=15:P(5)=20:P(6)=5
  210 L(1)=500:L(2)=625:L(3)=185:G=150:P=15:F=50:F(1)=50:F(2)=50:F(3)=50:FOR A=1 TO 3:P1(A)=P(A):NEXT
  220 L$(0)="Depleted":L$(1)="Poor":L$(2)="Fair":L$(3)="Fair":L$(4)="Good":L$(5)="Good":L$(6)="Fallow":L$(7)="Fallow"
  230 P$(1)="Peasants":P$(2)="Serfs":P$(3)="Nobles":P$(4)="Able-bodied Peasants":P$(5)="Able-bodied Serfs":P$(6)="Able-bodied Knights"
  237 IF CL$="M" THEN 240 ELSE CL(1)=13:CL(2)=11:CL(3)=14:CL(4)=12:CL(5)=15:CL(6)=12
  240 CLS:COLOR 12,0:PRINT " *** MANOR ***":PRINT:COLOR 7,0:GOTO 630
  250 GOSUB 2770:P(1)=P(1)+INT(RND*(P(1)/9)+3.5)-INT(RND*(P(1)/11)+1.5)
  260 GOSUB 2770:P(2)=P(2)+INT(RND*(P(2)/9)+3.5)-INT(RND*(P(2)/11)+1.5)
  270 GOSUB 2770:P(3)=P(3)+INT(RND*(P(3)/11)+1.5)-INT(RND*(P(3)/11)+1.5)
  280 GOSUB 2770:P(4)=P(4)+INT(RND*(P(1)/2.4-P(4))/2+RND*P(1)/5-P(1)/10):P(5)=P(5)+INT(RND*(P(2)/2.5-P(4))/2+RND*P(2)/5-P(2)/10)
  290 GOSUB 2770:P(6)=P(6)+INT(RND*(P(3)/3-P(6))/2+RND*P(6)/5-P(6)/10):FOR A=4 TO 6:Y(A)=P(A)-Z(A):NEXT
  300 GOSUB 2770:PA=PA-INT(RND*P(2)/1.5+1):GOSUB 2770:SA=SA-INT(RND*P(3)/1.5+1):GOSUB 2770:NA=NA-INT(RND*P(5)/1.5+1)
  310 FOR A=1 TO 6:IF P(A)<0 THEN P(A)=0
  320 NEXT:FOR A=1 TO 3:IF MO(A)>0.8 THEN 340 ELSE COLOR 4,0:PRINT "The "P$(A)" are grumbling ";:IF MO(A)<0.65 THEN COLOR 12,0:PRINT "much ";:COLOR 4,0
  330 PRINT "about conditions on the Manor, my lord";:IF MO(A)<0.7 THEN PRINT "!" ELSE PRINT "."
  340 IF MO(A)<1.2 THEN 360 ELSE COLOR 6,0:PRINT "You're ";:IF MO(A)>1.8 THEN PRINT "very ";
  350 PRINT "popular with the "P$(A)", your excellency."
  360 NEXT:IF G>0 THEN GP=INT(RND*20+0.5):GE=INT(G*GP/100+0.5):IF GE>0 THEN COLOR 3,0:PRINT "Rats ate"STR$(GP)"% of our grain reserves,":PRINT " totalling"GE"bushels.":G=INT(G-GE+0.5)
  370 IF (MO(1)+MO(2))/2>0.2 AND L(1)/P(1)>5 AND L(2)/P(2)>5 THEN 430 ELSE COLOR 12,0:PRINT "My lord, the rabble is rising against us!!!":FOR A=1 TO 3:GOSUB 2770:C1(A)=INT(RND*(P(A+3)/5)+0.5)
  380 GOSUB 2990:NEXT:FOR A=1 TO 400000.0:NEXT:PRINT
  390 IF MO(3)<0.2 OR L(3)/P(3)<7 THEN PRINT "The nobles are joining the revolt, your excellency!":C1(3)=500:FOR A=1 TO 500000.0:NEXT
  400 IF C1(1)+C1(2)<C1(3)*2 THEN PRINT "The peasants have stormed your home and strung you up...":GOTO 2820
  410 PRINT "The revolt has been quelled...":PRINT C1(1)"peasants and"C1(2)"serfs were killed in the attempt,"
  420 PRINT " and"C1(3)"nobles were killed defending you.":FOR A=1 TO 3:P(A)=P(A)-C1(A):MO(A)=MO(A)*(P(A)-C1(A))/P(A):P(A+3)=INT(P(A+3)-C1(A)/8):NEXT
  430 IF MO(3)<0.2 OR L(3)/P(3)<7 THEN GOSUB 2770:IF RND*1<0.5 THEN COLOR 5,0:PRINT:PRINT "You sit down to dinner one evening, and your food":PRINT "taster collapses.  It seems the nobles are trying":PRINT "to tell you something, your excellency...":GOTO 450
  440 IF MO(3)<0.2 OR L(3)/P(3)<7 THEN COLOR 4,0:PRINT:PRINT "You sit down to dinner one evening, and":PRINT "next morning your servants find you on":PRINT "the floor, poisoned by your nobles.":GOTO 2810
  450 GOSUB 2770:IF INT(RND*100+1)<3*(20-(65-Y)) THEN COLOR 5,0:PRINT "You have died of old age, at"Y"years.":GOTO 2810
  460 GOSUB 2770:IF RND*100>3-(H-10)/2 THEN 540 ELSE COLOR 4,0:PRINT:PRINT "The Black Death is sweeping the area!":FOR A=1 TO 5:GOSUB 2770:IF RND*1<0.3 THEN PLA(A)=1:GOSUB 2770:PP(A)=INT(PP(A)*(RND*0.3+0.6)):NEXT
  470 GOSUB 2990:GOSUB 2770:IF RND*1>0.3 THEN 520 ELSE PRINT "The Manor has been struck by the Plague!":FOR A=1 TO 6:GOSUB 2770:P2(A)=INT(RND*P(A)/3):NEXT:PD=INT(100*(P2(1)+P2(2)+P2(3))/(P(1)+P(2)+P(3))+0.5)
  480 PRINT STR$(PD)"% of the population has died, my lord.":PRINT " Take care not to fall victim as well!":PRINT " (Press a key, your excellency.)":PRINT
  490 A$=INKEY$:IF A$="" THEN 490
  500 GOSUB 2770:IF INT(RND*100+1)<PD THEN PRINT "You've been stricken by the Plague and died!":GOTO 2810
  510 FOR A=1 TO 6:P(A)=P(A)-P2(A):NEXT:COLOR 2,0:PRINT "You have avoided contracting the Plague."
  520 FOR A=1 TO 5:GOSUB 2770:IF RND*1+PLA(A)>0.9 THEN COLOR 6,0:PRINT "Rumor has it that the "D$(A)"'s manor":PRINT " is being ravaged by the Plague!":FOR B=1 TO 1000:NEXT
  530 NEXT
  540 G=INT(G+0.5):P=INT(P+0.5):FOR A=1 TO 3:IF P(A+3)>P(A)*0.4 THEN P(A+3)=INT(P(A)*0.4+0.5)
  550 NEXT
  560 APSS=APSS+MO(1)+MO(2)+MO(3):IF Y-YAB>0 THEN APS=APSS/(Y-YAB) ELSE APS=APSS
  570 IF Y-YAB>0 THEN R1=INT(100*(L/1385)^0.6*(BLL/10+1)^0.3*APS/3*((Y-YAB)/15)^0.05*(((WL(2)/1135+WL(5)/1302+(2-WL(1)/2425)+(2-WL(3)/1760))/4)^0.2))
  580 IF Y-YAB>0 THEN COLOR 7,0:PRINT:PRINT "Your performance so far:"R1" (";:CC=R1-R:GOSUB 2780:PRINT:PRINT:R=R1
  590 Y=Y+1:COLOR 15,0:PRINT "  At age"STR$(Y)":":PRINT:NW=0:COLOR 7,0
  600 FOR A=1 TO 3:PRINT P$(A),,P(A);:PRINT TAB(34);"(";:CC=P(A)-P1(A):GOSUB 2780:NEXT
  610 FOR A=4 TO 6:PRINT P$(A),P(A);:PRINT TAB(34);"(";:CC=Y(A):GOSUB 2780:NEXT:PRINT
  620 A$=INKEY$:IF A$="" THEN 620
  630 PRINT "Total Population",P(1)+P(2)+P(3);:PRINT TAB(34);"(";:CC=P(1)+P(2)+P(3)-P1(1)-P1(2)-P1(3):GOSUB 2780
  640 PRINT "Able Population",P(4)+P(5)+P(6);:PRINT TAB(34);"(";:CC=Y(4)+Y(5)+Y(6):GOSUB 2780
  650 PRINT "Grain",,G:FOR A=1 TO 3:P1(A)=P(A):NEXT:PRINT "Pounds",,P
  660 PRINT:PRINT "Total Land in Earldom",L"acres":PRINT "Acre / Person ",INT(L/(P(1)+P(2)+P(3)+8)+0.5)
  670 FOR A=1 TO 3:PRINT P$(A)"' Land   ",INT(L(A)/P(A)*10)/10;"acres":NEXT:PRINT "Your own Estates",LE"acres":PRINT
  680 FOR A=1 TO 3:PRINT "Fertility of "P$(A)"' Land:   ",L$(INT(F(A)/10)):NEXT
  690 IF LE>0 THEN PRINT "Fertility of your Estates: ",,L$(INT(F/10))
  700 PRINT "Total Fertility of Earldom: ",L$(INT((F*LE+F(1)*L(1)+F(2)*L(2)+F(3)*L(3))/(10*L)))
  710 PRINT:FOR A=4 TO 6:Z(A)=P(A):NEXT
  720 COLOR 2,0:PRINT "Taxes to Peasants ("STR$(PT)"% last year ) ";:INPUT PT1:IF PT1>30 THEN INPUT"  Are you certain";A$:IF LEFT$(A$,1)<>"Y" AND LEFT$(A$,1)<>"y" THEN 720
  725 IF PT1<0 THEN 720 ELSE PT=PT1
  730 PRINT "Taxes to Nobles ("STR$(NT)"% last year ) ";:INPUT NT1:IF NT1>30 THEN INPUT"  Are you certain";A$:IF LEFT$(A$,1)<>"Y" AND LEFT$(A$,1)<>"y" THEN 730
  735 IF NT1<0 THEN 730 ELSE NT=NT1
  740 MO(1)=MO(1)+RND*(PT-10)/50+(PT-10)/100:MO(3)=MO(3)+RND*(PT-10)/40+(PT-10)/80
  750 LF=0:IF G<1 OR LE<1 THEN 770 ELSE INPUT "Land to be farmed by Serfs";LF:IF LF>LE THEN 750
  760 IF LF>G THEN PRINT " You have only enough grain to plant"G"acres, sir!":GOTO 750
  770 GOSUB 2770:H=RND*6+9.5:PRINT "Harvest:  "H$(H-10)".":HE=INT(H*LF*F/100+0.5):PRINT HE"bushels were harvested on your estates.":PRINT:HE1=HE
  780 F=F-0.2*LF+0.22*(LE-LF):IF F<0 THEN F=0
  790 IF PQ1(A)<0 THEN PQ1(A)=0
  800 FOR A=1 TO 5:GOSUB 2770:PQ(A)=ABS(RND*WL(A)/50-WL(A)/100+WL(A)/2):PQ1(A)=INT(PQ1(A)+PQ(A)*H*FF(A)/100-PP(A)*22):IF PQ1(A)<0 THEN PP(A)=INT(PP(A)+PQ1(A)/22)
  810 FF(A)=FF(A)-0.2*PQ(A)+0.22*(WL(A)-PQ(A)):IF FF(A)<0 THEN FF(A)=0
  820 GOSUB 2770:PP(A)=PP(A)+INT(RND*(PP(A)/9)+3.5-RND*(PP(A)/11)+1.5):W(A)=PP(A)/1.75:IF FF(A)>65 THEN FF(A)=65
  830 IF PP(A)<=0 THEN PP(A)=1
  840 IF W(A)<=0 THEN W(A)=1
  850 PQ1(A)=PQ1(A)*0.75:NEXT:G=G+HE:IF F>65 THEN F=65
  860 FOR A=1 TO 3:LP(A)=L(A)/P(A):EP=5:IF LP(A)>10 THEN GOSUB 2770:EP=5+(RND*2+3)/4*((LP(A)-11)/2)
  870 IF LP(A)<5 THEN EP=LP(A)
  880 IF LP(A)<5 THEN COLOR 10,0:PRINT "Sir, the "P$(A)" haven't enough land to feed themselves!":COLOR 2,0
  890 H(A)=INT(EP*H*(F(A)/100)*P(A)+0.5):PRINT "The "P$(A)" harvested"INT(H(A)/P(A)+0.5)"bushels of grain on"INT(EP)"acres of land."
  900 GOSUB 2770:TA=20+INT(RND*6):TB=INT(H(A)*TA/100+0.5):H(A)=H(A)-TB
  910 F(A)=F(A)-1.5*EP+1.7*(LP(A)-5):IF F(A)>65 THEN F(A)=65
  920 IF F(A)<=0 THEN F(A)=0:COLOR 10,0:PRINT "Sir, the "P$(A)"' land is totally depleted!":COLOR 2,0
  930 NEXT:PTC=INT(H(1)*PT/100+0.5):NTC=INT(H(3)*NT/100+0.5):H(1)=H(1)-PTC:H(3)=H(3)-NTC
  940 FOR A=1 TO 3:EG(A)=H(A)/P(A):IF EG(A)=>23 OR G<1 THEN 980
  950 PRINT:PRINT " The "P$(A)" are going hungry, my lord.  We have"G"bushels in store.":INPUT " How many bushels (if any) will you give them";A1
  960 IF A1<0 THEN A1=0
  970 H(A)=H(A)+A1:EG(A)=H(A)/P(A):G=G-A1
  980 IF EG(A)=>20 THEN 1000 ELSE COLOR 10,0:PRINT "Some of the "P$(A)" are starving.":COLOR 2,0
  990 GOSUB 2770:VA=INT((RND*1+0.5)*(P(A)*20-H(A))/20+0.5):ST=ST+VA:P(A)=P(A)-VA:GOSUB 2770:P(3+A)=P(3+A)-INT(VA/(RND*5)+0.5)
 1000 IF EG(A)=>20 AND EG(A)<25 THEN PRINT "Many of the "P$(A)" are malnourished.":GOSUB 2770:VA=INT(RND*1*(P(A)*25-H(A))/25):P(A)=P(A)-VA:P(3+A)=P(3+A)-INT(VA/10)
 1005 IF P(A)<0 THEN P(A)=0
 1007 IF P(3+A)<0 THEN P(3+A)=0
 1010 NEXT:PRINT:PRINT "The King and the Church collected"TB"bushels from the population."
 1020 IF PTC>0 THEN PRINT "You collected"PTC"bushels from the Peasants.":H(1)=H(1)-PTC:H(3)=H(3)-NTC
 1030 FOR A=1 TO 2:GOSUB 2770:MO(A)=MO(A)+RND*(L(A)/P(A)-8.3)/10+(L(A)/P(A)-8.3)/10:NEXT:GOSUB 2770:MO(3)=MO(3)+RND*(L(3)/P(3)-12.3)/10+(L(3)/P(3)-12.3)/10
 1040 GOSUB 2770:P1=INT(RND*(NTC/10)+0.5):NTC=NTC-P1:FOR A=1 TO 3:MO(A)=MO(A)+((H(A)/P(A)-22)/P(A))/2:IF MO(A)>2 THEN MO(A)=2 ELSE IF MO(A)<0.1 THEN MO(A)=0.1
 1050 NEXT:P1=INT(P1+0.5):IF NTC>0 THEN PRINT "You collected"NTC"bushels and"P1"pounds from your Nobles."
 1060 G=G+PTC+NTC:P=P+P1:IF P(4)<1 THEN 1080 ELSE PRINT:PRINT "You have"P(4);P$(4)" and"P(6);P$(6):PRINT " as well as"G"bushels of grain and"P"Pounds."
 1070 INPUT "How many peasants will you knight this year";K:IF K<0 THEN 1070 ELSE IF K>P(4) AND K>0 THEN PRINT "You don't have enough peasants!":K=P(4):FOR A=1 TO 500:NEXT
 1080 IF K>0 AND K<=P(4) THEN P(1)=P(1)-K:P(3)=P(3)+K:P(4)=P(4)-K:P(6)=P(6)+K:G=G-K*25:P=P-K*5:LE=LE-K*5:L(1)=L(1)-K*10:L(3)=L(3)+K*15
 1090 PRINT:GOSUB 2770:G=G-INT(200+RND*150):IF G<0 THEN 1180 ELSE GOSUB 2770:IF RND*1<0.83 THEN 1180
 1100 GOSUB 2770:B=INT(RND*5+1):IF D$(B)="province" OR G+P*5<10 THEN 1180
 1110 IF WL(B)<1 OR NS(B)<1 THEN 1100
 1120 GOSUB 2770:LQ=INT(RND*10+1)*10:COLOR CL(B):PRINT:PRINT "The "D$(B)" wants to sell"LQ"acres of land.":GOSUB 2770:LC=INT(RND*10+19):B1=B:COLOR 2
 1130 PRINT "He's selling at"LC"bushels an acre,":PRINT " and you can afford"INT((G+P*5)/LC)"acres."
 1140 BL=0:INPUT "How much do you want to buy";BL:IF BL>LQ THEN PRINT "He is offering only"LQ"acres, your excellency.":BL=LQ
 1150 IF BL*LC>G+P*5 THEN PRINT "But you only have enough for"INT((G+P*5)/LC)"acres!":GOTO 1130
 1160 IF BL<1 THEN 1180 ELSE G=G-LC*BL:PQ1(B)=PQ1(B)+LC*BL:IF G<0 THEN P=P+INT(G/5+0.9):G=G-G/5-INT(-G/5)
 1170 F=(F*LE+FF(B)*BL)/(LE+BL):LE=LE+BL:BLL=BLL+BL:L=L+BL:SE=SE(B):SE1=219:SE2=BL/12:GOSUB 2050
 1180 IF B>40 THEN B=40
 1190 IF LE<1 THEN 1240 ELSE PRINT:PRINT "You have"LE"acres in your demesne,"G"bushels":PRINT " of grain, and"P"pounds sterling."
 1195 IF BL>0 THEN A$=INKEY$:IF A$="" THEN 1195 ELSE 1240
 1197 INPUT "How much land do you wish to sell (return for none)";BL:IF BL<1 THEN 1240
 1200 GOSUB 2770:B1=INT(RND*5+1):LC=INT(RND*10+19):IF WL(B1)<1 OR NS(B1)<1 OR PQ1(B1)<100 THEN 1180
 1210 IF BL>LE THEN PRINT " You don't have that much in your demesne!":GOTO 1195
 1220 PRINT:PRINT " The "D$(B1)" expresses an interest, and":PRINT " you agree on a price of"LC"bushels per acre.":PRINT " To receive the"BL*LC"bushels, press a key."
 1225 A$=INKEY$:IF A$="" THEN 1225
 1230 B=B1:LE=LE-BL:L=L-BL:G=G+LC*BL:SE=219:SE1=SE(B):SE2=BL/12:GOSUB 2050
 1240 CLS:CL=2:FOR A=1 TO 22:FOR B=1 TO 40:IF T(A,B)=T(A,B-1) THEN 1250 ELSE IF T(A,B)=176 THEN CL=13 ELSE IF T(A,B)=177 THEN CL=11 ELSE IF T(A,B)=178 THEN CL=14 ELSE IF T(A,B)=15 THEN CL=12 ELSE IF T(A,B)=8 THEN CL=15 ELSE CL=2
 1245 COLOR CL,0
 1250 PRINT CHR$(T(A,B));:NEXT:PRINT:NEXT:IF RT=1 THEN 2070 ELSE FOR A=1 TO 5:LOCATE 7+A,45:COLOR CL(A):PRINT STRING$(2,SE(A))"  ";D$(A):NEXT:LOCATE 14,45:COLOR 2:PRINT STRING$(2,219);"  You, the Earl of Couldoud"
 1260 A$=INKEY$:IF A$="" THEN 1260
 1270 GOSUB 2770:TP=RND*0.5+0.1:CLS:COLOR 6,0:PRINT:PRINT "The King's Sheriff has arrived at the manor.":PRINT
 1280 KT=1:IF G+P*5>800 THEN KT=KT+(G+P*5-800)/500:IF KT=>2 THEN PRINT "Taxes are high this year, my lord.":PRINT
 1290 PRINT "Taxes to your estates:":TL=ABS(INT(LE*0.15*TP*KT/5)):TL1=ABS(INT(LE*0.15-TL*5+0.5)):PRINT " Tax on your land:",TL"pounds,"TL1"bushels of grain"
 1300 TH=HE1*0.15*KT:TH1=ABS(INT(TH*TP/5+0.5)):PRINT " Tax on your harvest:",TH1"pounds,"ABS(INT(TH-TH1*5))"bushels of grain"
 1310 GOSUB 2770:MT=INT(RND*40+KT/2+PTF/2):MT1=INT(MT*TP/5):PRINT " Miscellaneous:",MT1"pounds,"INT(MT-MT1*5)"bushels of grain"
 1320 TTL=INT(TL+TH1+TI1):TTT=INT(TL1+(TH-TH1*5)+(TI-TI1*10)+0.5):PRINT "  Total Taxes:",TTL+MT1"pounds,"TTT+INT(MT-MT1*5)"bushels of grain.":P=P-TTL:G=G-TTT
 1330 IF MT>0 THEN CT=0:PRINT "Shall I cover up the"MT1"pounds and"MT-MT1*5"bushels":INPUT " in miscellaneous taxes";X$:IF LEFT$(X$,1)<>"Y" AND LEFT$(X$,1)<>"y" THEN PRINT:GOTO 1350
 1340 P=P-MT1:G=G-MT-MT1*5:CT=MT:PRINT
 1350 IF CT<1 THEN 1370 ELSE GOSUB 2770:IF RND*1>0.65 THEN PRINT " He didn't catch us, your excellency.":PRINT:PRINT:GOTO 1370
 1360 GOSUB 2770:PTF=INT(RND*CT+1)*2:PRINT " He found"PTF/2"bushels missing.":PRINT:PRINT:PFF=PFF+PTF/2
 1370 IF P<0 THEN G=G+P*6:PRINT "You've had to spend"INT(-P*5.9+0.5)"bushels of grain":PRINT "in place of"INT(-P+0.5)"pounds, at a loss.":PRINT:P=0:GOTO 1390
 1380 IF G<0 THEN P=P+G/4:PRINT "You've had to spend"INT(-G/4.1+0.5)"pounds sterling":PRINT "in place of"INT(-G+0.5)"bushels, at a loss.":PRINT:G=0
 1390 IF G>0 THEN PRINT "You have"G"bushels of grain in your storehouses":IF P>0 THEN PRINT " and"P"pounds sterling left in your treasury"
 1400 IF G<1 AND P>0 THEN PRINT "We have only"INT(P)"pounds remaining, your excellency."
 1410 IF G<1 AND P<1 THEN PRINT "We are in debt, your excellency!"
 1420 FOR A=4 TO 6:IF P(A)<0 THEN P(A)=0
 1430 NEXT:J=0:I1=0:WC=0:LT2=0
 1440 J=J+1:IF J>5 THEN 2340
 1450 GOSUB 2770:I=INT(RND*5+1):IF RIGHT$(D$(I),8)="province" THEN 1440 ELSE IF RND*1>(W(I)-W1(I))/W(I) THEN 1440
 1460 PRINT:COLOR 4,0:GOSUB 2770:IF RND*1<0.35+ABS(HT(I)/100) THEN 1620
 1470 GOSUB 2770:IF RND*1<0.5 THEN 1500 ELSE I1=I-1:IF I1<1 THEN I1=5
 1480 IF WL(I1)<1 OR NS(I1)<1 THEN 1450
 1490 CHB=(W(I)/(W(I)+W(I1)))*100:GOSUB 2770:IF INT(RND*100+1)>CHB THEN 2020 ELSE 1520
 1500 GOSUB 2770:I1=INT(RND*5+1):IF I1=I OR RIGHT$(D$(I1),8)="province" THEN 1500
 1510 IF WL(I1)<1 OR NS(I1)<1 THEN 1450 ELSE CHB=(W(I)/(W(I)+W(I1)))*100:GOSUB 2770:IF INT(RND*100+1)>CHB THEN 2045
 1520 NW=1:PRINT:PRINT "The "D$(I)" is invading the "D$(I1)"!"
 1530 GOSUB 2770:IF INT(RND*100+1)>CHB THEN 1580 ELSE GOSUB 2770:W(I)=INT(W(I)-W(I)*RND*0.2+0.5):W(I1)=INT(W(I1)-W(I1)*RND*0.3+0.5)
 1540 GOSUB 2770:WL=INT(RND*1+1.5)*CHB:FF(I)=(FF(I)*WL(I)+FF(I1)*WL)/(WL(I)+WL):WL(I)=WL(I)+WL
 1550 WL(I1)=WL(I1)+WL:LT=SE(I):LT1=SE(I1):PRINT "The "D$(I)" has gained a "H$(INT(WL/30))" victory!":I2=I:I3=I1
 1560 GOSUB 2730:IF TK=1 THEN 1850 ELSE TK=0:GS=1:LQ=WL(I1):GOTO 1900
 1570 TAK=INT(WL/10.91+0.5):IF TAK>NS(I1) THEN 2730 ELSE NS(I1)=NS(I1)-TAK:NS(I)=NS(I)+TAK:GOTO 1900
 1580 PRINT "The "D$(I1)" has driven back the invading forces!":GOSUB 2770:W(I)=INT(W(I)-W(I)*RND*0.4+0.5):W(I1)=INT(W(I1)-W(I1)*RND*0.25+0.5)
 1590 WL=INT(RND*1+1)*(100-CHB):FF(I1)=(FF(I1)*WL(I1)+FF(I)*WL)/(WL(I1)+WL):WL(I)=WL(I)-WL:WL(I1)=WL(I1)+WL:LT=SE(I1):LT1=SE(I):GS=1
 1600 TAK=INT(WL/10.91+0.5):IF TAK>NS(I) THEN 2730 ELSE NS(I)=NS(I)-TAK:NS(I1)=NS(I1)+TAK:GOTO 1900
 1610 I2=I1:I3=I:GOSUB 2730:IF TK=1 THEN 1850 ELSE TK=0:WL(I)=WL(I)-WL:WL(I1)=WL(I1)+WL:LT=SE(I1):LT1=SE(I):GS=1:LQ=WL(I):GOTO 1900
 1620 GOSUB 2770:IF RND*1<=HT(I)/150+W1(I)/W(I) THEN GOSUB 2770:A=INT(RND*4+1):B=INT(RND*4+1):IF RIGHT$(D$(A),8)="province" OR RIGHT$(D$(B),8)="province" THEN 1620
 1630 IF B>4 THEN GOSUB 2770:B=INT(RND*4+1)
 1640 IF A>6 THEN GOSUB 2770:A=INT(RND*4+1)
 1645 IF A<>B THEN I=6:D$(6)=D$(A)+" has allied with the "+D$(B)+" and     ":W(6)=W(A)+W(B):LT2=SE(A)
 1650 ARMY=1.2*(P(4)+P(4)*MO(1)+P(5)+P(5)*MO(2)+P(6)+P(6)*5*MO(3)/(0.65+P(6)/(P(4)+P(6)))^0.5)/2
 1660 CHA=3*HT(I)+(W(I)/(W(I)+ARMY))*100:GOSUB 2770:IF INT(RND*100+1)>CHA THEN 2040 ELSE COLOR CL(I):PRINT "The "D$(I)" is marching on us!":COLOR 12:NW=1:NWT=1:GOSUB 2990
 1670 IF I=6 THEN I=A
 1680 MF=0:IF G<1 AND P<1 THEN 1710 ELSE INPUT "Do you want to try to find mercenaries";X$:IF LEFT$(X$,1)<>"Y" AND LEFT$(X$,1)<>"y" THEN 1710 ELSE GOSUB 2770:MF=INT(RND*26-5):IF MF<0 THEN MF=0
 1690 PRINT "You found"MF"mercenaries to fight for you":IF MF*20>G+P*5 THEN MF=INT((G+P*5)/20):PRINT "but you can only afford to hire"MF
 1700 ARMY=ARMY+MF*3:CHA=ABS(HT(I))+(W(I)/(W(I)+ARMY))*100:G=G-MF*20:IF G<0 THEN P=P-INT(-G/5+0.9):G=0
 1710 PRINT "Your army consists of:":FOR A=1 TO 3:PRINT P(A+3);P$(A):NEXT:IF MF>0 THEN PRINT " and"MF"Mercenaries"
 1720 GOSUB 2770:GD=P(4)+P(5)+P(6):IF G<RND*0.4+0.6*0.4*GD*1.25 THEN PRINT "We haven't enough grain to withstand a siege!"
 1730 RT=1:INPUT "Shall we retreat to the castle";X$:IF LEFT$(X$,1)<>"Y" AND LEFT$(X$,1)<>"y" THEN 1770
 1740 CHA=CHA*0.8:GOSUB 2770:RT=RND*0.35+0.65:PS=(P(1)-P(4))*(RND*0.25+0.1):SS=(P(2)-P(5))*(RND*0.25+0.1)
 1750 G=G-0.4*GD*(RND*0.4+1):IF G<0 THEN PRINT "We've been starved out!":MN(1)=INT(-G/2+0.5):MN(2)=MN(1):MN(3)=0:CHA=CHA*1.1
 1760 GOSUB 2770:IF INT(RND*100+1)>CHA THEN 1780 ELSE FOR A=4 TO 6:GOSUB 2770:C(A)=INT(RND*(P(A)*0.3+0.5+MN(A))+0.8):NEXT:GOTO 1820
 1770 GOSUB 2770:PS=(P(1)-P(4))*(RND*0.1):SS=(P(2)-P(5))*(RND*0.1):GOSUB 2770:IF INT(RND*100+1)>CHA THEN 1780 ELSE FOR A=4 TO 6:GOSUB 2770:C(A)=INT(RND*(P(A)*0.45+1)+0.8):NEXT:GOTO 1820
 1780 GOSUB 2770:WL=INT((RND*0.5+2)*CHA):IF WL>25 THEN WL=INT(WL/10+0.5)*10:GOSUB 2770:PQ1=PQ1*(RND*0.25+0.65)
 1790 PRINT:PRINT "We lost, your excellency!  He's taken"WL"acres of our land!":SE(I)=SEE(I)
 1800 FF(I)=(FF(I)*WL(I)+F*WL)/(WL(I)+WL):WL(I)=WL(I)+WL:L=L-WL:LE=LE-WL:LT=SE(I):LT1=219:GOSUB 2770:HT(I)=HT(I)-(RND*WL/2+WL/4+C(4)+C(5)+C(6))/50
 1810 FOR A=1 TO 3:MO(A)=MO(A)*1.5*(P(A+3)-C(A+3))/P(A+3)*1.1+0.01-WL/200:NEXT:GOSUB 2770:W(I)=INT(W(I)-RND*CHA/5+CHA/5+0.5):WC=INT(RND*CHA/5+CHA/5+0.5):PP(I)=PP(I)-WC:GOSUB 2720:GOTO 1870
 1820 GOSUB 2770:WL=ABS(INT(RT*(RND*0.5+1.5)*(100-CHA))):IF WL>25 THEN WL=INT(WL/10+0.5)*10:GOSUB 2770:PQ1=PQ1*(RND*0.3+0.65)
 1830 PRINT:PRINT "Victory, my lord!  We've driven the enemy back"WL"acres into his own manor!":GOSUB 2770:WC=INT(RND*CHA/4+CHA/4+0.5):GOSUB 2770:HT(I)=HT(I)+(RND*WL/2+WL/4+WC)/50
 1840 F=(F*LE+FF(I)*WL)/(LE+WL):WL(I)=WL(I)-WL:L=L+WL:LE=LE+WL:LT=219:LT1=SE(I):FOR A=1 TO 3:MO(A)=MO(A)*1.5*(P(A+3)-C(A+3))/(P(A+3)*0.9+0.01)+WL/200:NEXT:GOSUB 2680
 1850 GOSUB 2770:W(I)=INT(W(I)-RND*CHA/4+CHA/4+0.5):PP(I)=PP(I)-WC
 1860 IF NW=0 THEN 2340
 1870 PRINT:PRINT "War Casualties:":FOR A=1 TO 3:PRINT " "P$(A),C(A+3)"out of"P(A+3):NEXT:FOR A=4 TO 6:P(A-3)=P(A-3)-C(A):P(A)=P(A)-C(A):NEXT
 1880 IF LT2<>0 THEN IF LT1=SE(I) THEN LT1=LT2 ELSE LT=LT2
 1890 PRINT "The "D$(I)" lost"WC"men."
 1900 AB=0:TM=VAL(TIME$)*60+VAL(MID$(TIME$,4,2))+VAL(RIGHT$(TIME$,2))/60:IF WL(I)=0 THEN ABA=0 ELSE ABA=INT(WL/12)
 1910 AB1=0:GOSUB 2770:A=INT(RND*21+1):B=INT(RND*40+1):IF T(A,B)<>LT1 THEN 1910 ELSE FOR A1=A-1 TO A+1 STEP 2:FOR B1=B-1 TO B+1 STEP 2:IF A1>22 THEN A1=20
 1920 IF B1>40 THEN B1=38
 1930 IF T(A1,B1)=LT THEN T(A,B)=LT:AB1=1
 1940 IF AB1=0 THEN 1990 ELSE FOR A1=A-1 TO A+1:FOR B1=B-1 TO B+1:IF A1>22 THEN A1=20
 1950 IF B1>40 THEN B1=38
 1960 IF T(A1,B1)=LT1 THEN T(A1,B1)=LT:AB1=AB1+1
 1970 IF AB+AB1=>ABA THEN 2040
 1980 NEXT:NEXT
 1990 NEXT:NEXT:IF AB1>0 THEN AB=AB+AB1:NS(I)=NS(I)-AB1:IF NS(I)<1 THEN AB=ABA
 2000 IF (VAL(TIME$)*60+VAL(MID$(TIME$,4,2))+VAL(RIGHT$(TIME$,2))/60)-TM>0.3 THEN AB=ABA:GOTO 1970
 2010 IF AB<ABA THEN 1910
 2020 IF J<5 THEN 1440
 2030 IF GS=1 THEN GS=0:GOTO 1850
 2040 GOTO 2340
 2045 GOSUB 2770:IF RND*1<0.4 THEN 1450 ELSE 2340
 2050 IF BL<7 THEN RETURN
 2060 RT=1:GOTO 1240
 2070 RT=0:COLOR CL(B1):LOCATE 12,42:PRINT "Choose which will be transacted":LOCATE 13,44:PRINT "with the "D$(B1)":":LOCATE 15,56:PRINT STRING$(2,SE(B1)):A=13:B=22
 2080 COLOR 2:LOCATE A,B:PRINT CHR$(26)
 2090 A$=INKEY$:IF A$="" THEN 2090
 2100 IF LEN(A$)=1 THEN 2150 ELSE A$=RIGHT$(A$,1)
 2110 IF A$="K" THEN A$="4" ELSE IF A$="M" THEN A$="6"
 2120 IF A$="H" THEN A$="8" ELSE IF A$="P" THEN A$="2"
 2130 IF A$="G" THEN A$="7" ELSE IF A$="I" THEN A$="9"
 2140 IF A$="O" THEN A$="1" ELSE IF A$="Q" THEN A$="3"
 2150 IF A$="1" OR A$="2" OR A$="3" THEN LOCATE A,B:PRINT CHR$(T(A,B)):A=A+1
 2160 IF A$="7" OR A$="8" OR A$="9" THEN LOCATE A,B:PRINT CHR$(T(A,B)):A=A-1
 2170 IF A$="9" OR A$="6" OR A$="3" THEN LOCATE A,B:PRINT CHR$(T(A,B)):B=B+1
 2180 IF A$="7" OR A$="4" OR A$="1" THEN LOCATE A,B:PRINT CHR$(T(A,B)):B=B-1
 2190 IF VAL(A$)=0 THEN 2210
 2200 GOTO 2080
 2210 IF T(A,B)=SE THEN T(A,B)=SE1:SE2=SE2-1:LOCATE A,B:PRINTCHR$(T(A,B))
 2220 IF SE2=>0.5 THEN 2080 ELSE CLS:RETURN
 2230 CLS:COLOR 3,0:PRINT:PRINT "Distribution of land:":FOR A=1 TO 3:PRINT INT(L(A)/P(A)*10)/10"("L(A)") for your "P$(A)",":NEXT
 2240 PRINT LE"for your Estates,":PRINT "  and"L"acres Total."
 2250 IF LE<0 THEN 2280
 2260 IF G<LE/2 THEN PRINT "But you have only enough grain to plant"INT(G)"acres, my lord."
 2270 INPUT "Do you want to redistribute the land";X$:IF VAL(X$)>0 THEN 2270 ELSE IF LEFT$(X$,1)<>"Y" AND LEFT$(X$,1)<>"y" THEN 2330
 2280 PRINT:INPUT "Land for the Peasants";L5:IF L5>L THEN 2280 ELSE IF L5>L(1) THEN F(1)=(F(1)*L(1)+(F(2)+F(3)+F)/3*(L(2)+L(3)+LE))/L
 2290 L(1)=L5:PRINT "Land for the Serfs ("L-L5"max ) ";:INPUT L5:IF L5>L-L(1) THEN 2290 ELSE IF L5>L(2) THEN F(2)=(F(2)*L(2)+(F(1)+F(3)+F)/3*(L(1)+L(3)+LE))/L
 2300 L(2)=L5:PRINT "Land for your Nobles ("L-L(1)-L5"max ) ";:INPUT L6:IF L6>L-L(1)-L(2) THEN 2300 ELSE IF L6>L(3) THEN F(3)=(F(3)*L(3)+(F(1)+F(2)+F)/3*(L(1)+L(2)+LE))/L
 2310 L(3)=L6:LEE=LE:LE=L-L(1)-L(2)-L(3):PRINT "Land for your Estates:"LE:IF LE>LEE THEN F=(F*LEE+(F(1)+F(2)+F(3))/3*(L(1)+L(2)+L(3)))/L
 2320 PRINT:PRINT "How does it look now?":FOR A=1 TO 3:PRINT INT(L(A)/P(A)*10)/10"("L(A)") for your "P$(A)",":NEXT:GOTO 2240
 2330 PRINT:PRINT:GOTO 250
 2340 TK=0:X$="":COLOR 12,0:PRINT:INPUT "Do you want to go to war";X$:COLOR 4,0:IF VAL(X$)>0 THEN 2340
 2350 PRINT:IF LEFT$(X$,1)<>"Y" AND LEFT$(X$,1)<>"y" THEN 2230 ELSE FOR A=1 TO 5:COLOR CL(A):PRINT A;D$(A),STRING$(2,SE(A)):NEXT:PRINT:COLOR 12
 2360 IF P(4)+P(5)+P(6)<1 THEN PRINT "How can you invade someone without soldiers?":RETURN
 2370 ARMY=1.2*(P(4)+P(4)*MO(1)+P(5)+P(5)*MO(2)+P(6)+P(6)*5*MO(3)/(0.65+P(6)/(P(4)+P(6)))^0.5)/2:INPUT "Which one do you want to invade";I:IF I<1 OR I>5 THEN 2340 ELSE I=INT(I)
 2380 IF D$(I)="province" THEN PRINT "As you recall, my lord, you have already":PRINT "  subjugated that particular fief.":GOTO 2340
 2390 MF=0:IF G<1 AND P<1 THEN 2420 ELSE NWT=1:INPUT "Do you want to try to hire mercenaries";X$:IF LEFT$(X$,1)<>"Y" AND LEFT$(X$,1)<>"y" THEN 2420 ELSE GOSUB 2770:MF=INT(RND*26-5):IF MF<0 THEN MF=0
 2400 PRINT "You found"MF"mercenaries":IF MF*20>G+P*5 THEN MF=INT((G+P*5)/20):PRINT "but you can only afford"MF"
 2410 PRINT:ARMY=ARMY+MF*3
 2420 PRINT "Your army is ready, my lord!":FOR A=1 TO 3:PRINT P(A+3);P$(A):NEXT:IF MF>0 THEN PRINT " and"MF"mercenaries":PRINT
 2430 CHA=ABS(HT(I))+(W(I)/(ARMY+W(I)))*100:CHA=CHA*1.2
 2440 FOR A=1 TO 3:IF MO(A)<0 THEN MO(A)=0
 2450 NEXT:PRINT "The rabble seems ";:IF (MO(1)+MO(2))/2>1.15 THEN PRINT "enthusiastic." ELSE IF (MO(1)+MO(2))/2<0.85 THEN PRINT "sullen." ELSE PRINT "quiet."
 2460 PRINT "You gather your knights.  They are ";
 2470 IF CHA*MO(3)^0.5>80 THEN PRINT "in favor of invasion." ELSE IF CHA*MO(3)^0.5<40 THEN PRINT "wondering what life";CHR$(13);"  will be like under the "D$(I)"." ELSE PRINT "unsure about the invasion."
 2480 IF P(6)*2<P(4) THEN 2500 ELSE PRINT "  They are complaining ";:IF P(6)=>P(4) THEN PRINT "greatly ";
 2490 PRINT "that they are too":PRINT "  many and the peasants too few!"
 2500 PRINT:INPUT "Shall I sound the horns, my lord";A$:COLOR 7,0:IF LEFT$(A$,1)<>"Y" AND LEFT$(A$,1)<>"y" THEN 2340
 2510 PRINT:G=G-MF*20:IF G<0 THEN P=P-INT(-G/5+0.9):G=0
 2520 IF W(I)<0 THEN CHA=0
 2530 GOSUB 2770:IF INT(RND*100+1)>CHA THEN 2540 ELSE FOR A=4 TO 6:GOSUB 2770:C(A)=INT((RND*0.4+0.1)*P(A)+0.8):NEXT:SS=INT(RND*(PP(I)*0.1)+PP(I)*0.1):GOTO 2550
 2540 FOR A=4 TO 6:GOSUB 2770:C(A)=INT((RND*0.3+0.05)*P(A)+0.8):NEXT:SS=INT(RND*(PP(I)*0.3)+PP(I)*0.2):GOTO 2600
 2550 GOSUB 2770:WL=INT((RND*0.5+1.5)*CHA):IF WL>25 THEN WL=INT(WL/10+0.5)*10:GOSUB 2770:PQ1(A)=PQ1(A)*(RND*0.25+0.65)
 2560 PRINT "We've lost, sir!  The "D$(I)"'s forces have pushed us":PRINT WL"acres back across the border!":LQ=L:GOSUB 2770:W(I)=INT(W(I)-(RND*CHA/5+CHA/5+0.5)):WC=INT(RND*CHA/5+CHA/5+0.5):PP(I)=PP(I)-WC
 2570 FF(I)=(FF(I)*WL(I)+F*WL)/(WL(I)+WL):WL(I)=WL(I)+WL:L=L-WL:LE=LE-WL:GOSUB 2720
 2580 IF TK=1 THEN 2640 ELSE LT=SE(I):LT1=219:FOR A=1 TO 3:MO(A)=MO(A)*1.5*(P(A+3)-C(A+3))/(P(A+3)*1.1+0.01)-WL/200:NEXT
 2590 GOSUB 2770:HT(I)=HT(I)-(RND*WL/2+WL/4+C(4)+C(5)+C(6))/50:GOTO 2640
 2600 GOSUB 2770:WL=INT((RND*0.5+2)*(100-CHA)):IF WL>25 THEN WL=INT(WL/10+0.5)*10:GOSUB 2770:PQ1=PQ1*(RND*0.3+0.65)
 2610 PRINT "Victory!  We have pushed the "D$(I)"'s forces":PRINT WL"acres into his territory!":GOSUB 2770:W(I)=INT(W(I)-RND*CHA/4+CHA/4+0.5):WC=INT(RND*CHA/4+CHA/4+0.5):PP(I)=PP(I)-WC
 2620 F=(F*LE+FF(I)*0.9*WL)/(LE+WL):WL(I)=WL(I)-WL:L=L+WL:LE=LE+WL:GOSUB 2680:IF TK=1 THEN 2650
 2630 LT=219:LT1=SE(I):FOR A=1 TO 3:MO(A)=MO(A)*1.5*(P(A+3)-C(A+3))/(P(A+3)*0.9+0.01)+WL/200:NEXT:LQ=WL(I):GOSUB 2770:HT(I)=HT(I)+(RND*WL/2+WL/4+WC)/50
 2640 IF NWT=0 THEN GS=0
 2650 NW=0:PRINT:PRINT "War Casualties:":FOR A=1 TO 3:PRINT " "P$(A),C(A+3)"out of"P(A+3):NEXT:FOR A=4 TO 6:P(A-3)=P(A-3)-C(A):P(A)=P(A)-C(A):NEXT:IF TK=0 THEN GS=0
 2660 GOTO 1890
 2670 GOTO 2340
 2680 GOSUB 2770:IF RND*1>W(I)/W1(I) THEN 2690 ELSE IF RIGHT$(D$(I),8)="province" OR WL(I)>0 THEN RETURN
 2690 PRINT:PRINT "You have overrun the "D$(I)"'s entire manor,":D$(I)="province":LT=SE(I):LT1=219:L=INT(L+WL(I)):LE=INT(LE+WL(I)):WL(I)=0
 2700 GG=ABS(INT(PQ(I)*H*FF(I)/100*0.75)):GOSUB 2770:GG1=INT((RND*0.2+0.2)*GG/5):GG=GG-GG1*5:PRINT " taken"GG"bushels of grain and"GG1"pounds":PRINT " from his stores, and acquired"
 2710 FOR A=1 TO 6:GOSUB 2770:PAC=ABS(INT(RND*PP(I)/A)):PRINT " "PAC;P$(A):P(A)=P(A)+PAC:NEXT:W(A)=0:G=G+GG:P=P+GG1:GOTO 2750
 2720 GOSUB 2770:IF L>0 AND RND*1<ARMY/105 THEN RETURN ELSE PRINT:PRINT "The "D$(I)" has overrun your whole manor!":PRINT "Sorry, but there's nothing I can do for you.":PRINT "Your reign has ended.  Farewell.":L=0:GOTO 2810
 2730 GOSUB 2770:IF WL(I2)>0 AND RND*1<W(I2)/W1(I2) THEN RETURN ELSE PRINT:PRINT "The "D$(I3)" has overrun the "D$(I2)"!":LT=SE(I2):LT1=SE(I3):D$(I2)=D$(I3)+"'s province"
 2740 GOSUB 2770:PP(I3)=PP(I3)+RND*PP(I2)/4:W(I3)=W(I2)+RND*PP(I2)/4:W(I2)=0:WL(I3)=INT(WL(I3)+WL(I2)):WL(I2)=0
 2750 PRINT:PRINT "Time to redraw the map...":FOR A=1 TO 22:FOR B=1 TO 40:IF T(A,B)=LT THEN T(A,B)=LT1
 2760 NEXT:NEXT:TK=1:PRINT:RETURN
 2770 RANDOMIZE(VAL(RIGHT$(TIME$,2))):RETURN
 2780 IF CC<0 THEN PRINT STR$(CC);")":RETURN
 2790 IF CC=0 THEN PRINT CHR$(241);"0)":RETURN
 2800 PRINT "+";RIGHT$(STR$(CC),LEN(STR$(CC))-1);")":RETURN
 2810 FOR A=1 TO 5000:NEXT:Y=Y+1:APSS=APSS+MO(1)+MO(2)+MO(3):APS=APSS/(Y-YAB)
 2820 COLOR 5,0:PRINT:PRINT:PRINT "By the end of your reign you had":IF L>1385 THEN PRINT "increased your manor's area by"STR$(INT(10000*L/1385)/100-100)"%, or"
 2830 IF L<1385 THEN PRINT "lost"STR$(100-(INT(10000*L/1385)/100))"% of your manor's area, or"
 2840 IF L=1385 THEN PRINT "not changed your manor's area at all.":GOTO 2860
 2850 PRINT ABS(1385-L)"acres of land -- totaling"L"acres."
 2860 PRINT:FOR A=1 TO 6:PRINT " "P$(A);TAB(23);P(A):NEXT
 2870 TOT=P(1)+P(2)+P(3):POP=P(4)+P(5)+P(6):PRINT:PRINT "You had a total population of"TOT:PRINT " and an able-bodied population of"POP
 2880 PRINT:PRINT "Your performance rating was"INT(100*(L/1385)^0.6*(BLL/10+1)^0.3*APS/3*((Y-YAB)*2.5/(ST+5))^0.1*((Y-YAB)/15)^0.05*(((WL(2)/1135+WL(5)/1302+(2-WL(1)/2425)+(2-WL(3)/1760))/4)^0.2)):PRINT:PRINT
 2890 A$=INKEY$:IF A$="" THEN 2890
 2900 PRINT:PRINT " Base Score of:"INT(10000*(L/1385)^0.6+0.5)/100"for land gain/loss"
 2910 PRINT "  x"INT(100*(BLL/10+1)^0.3+0.5)/100"for peaceful acquisition of land"
 2920 PRINT "  x"INT(APS/3*100+0.5)/100"for your people's happiness"
 2930 PRINT "  x"INT(100*((Y-YAB)*2.5/(ST+5))^0.1+0.5)/100"for starvations suffered under you"
 2940 PRINT "  x"INT(100*(1-PFF/5000)+0.5)/100"for your economic honesty with the King"
 2950 PRINT "  x"INT(((Y-YAB)/15)^0.05*100+0.5)/100"for your longevity of reign"
 2960 PRINT "  x"INT((100*((WL(2)/1135+WL(5)/1302)/2)^0.2)+0.5)/100"for your military campaigns against":PRINT,"your weaker neighbors"
 2970 PRINT "  x"INT((100*(((2-WL(1)/2425)+(2-WL(3)/1760))/2)^0.2)+0.5)/100"for your military campaigns against":PRINT,"your stronger neighbors
 2980 COLOR 7,0:END
 2990 SOUND 500,0.7:SOUND 475,0.7:SOUND 500,0.7:SOUND 500,0.7:FOR A1=1 TO 400:NEXT:RETURN
