/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/king.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x597bcc680ac0 ---------A   00001 PRINT TAB(34);"KING"
    0x597bcc681e10 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x597bcc681f90 ---------A   00003 PRINT:PRINT:PRINT
    0x597bcc680850 ---------A   00004 PRINT "DO YOU WANT INSTRUCTIONS";
    0x597bcc67f610 ---------A   00005 INPUT Z$
    0x597bcc67fdc0 ---------A   00006 N5=8
    0x597bcc67f5b0 ---------A   00010 IF LEFT$(Z$,1)="N" THEN 47
    0x597bcc67fbe0 ---------A   00011 IF Z$="AGAIN" THEN 1960
    0x597bcc687780 ---------A   00012 PRINT:PRINT:PRINT
    0x597bcc6878e0 ---------A   00020 PRINT "CONGRATULATIONS! YOU'VE JUST BEEN ELECTED PREMIER OF SETATS"
    0x597bcc687a90 ---------A   00022 PRINT "DETINU, A SMALL COMMUNIST ISLAND 30 BY 70 MILES LONG. YOUR"
    0x597bcc687c40 ---------A   00024 PRINT "JOB IS TO DECIDE UPON THE CONTRY'S BUDGET AND DISTRIBUTE"
    0x597bcc687de0 ---------A   00026 PRINT "MONEY TO YOUR COUNTRYMEN FROM THE COMMUNAL TREASURY."
    0x597bcc687f90 ---------A   00028 PRINT "THE MONEY SYSTEM IS RALLODS, AND EACH PERSON NEEDS 100"
    0x597bcc688140 ---------A   00030 PRINT "RALLODS PER YEAR TO SURVIVE. YOUR COUNTRY'S INCOME COMES"
    0x597bcc6882f0 ---------A   00032 PRINT "FROM FARM PRODUCE AND TOURISTS VISITING YOUR MAGNIFICENT"
    0x597bcc6884a0 ---------A   00034 PRINT "FORESTS, HUNTING, FISHING, ETC. HALF YOUR LAND IS FARM LAND"
    0x597bcc688650 ---------A   00036 PRINT "WHICH ALSO HAS AN EXCELLENT MINERAL CONTENT AND MAY BE SOLD"
    0x597bcc688800 ---------A   00038 PRINT "TO FOREIGN INDUSTRY (STRIP MINING) WHO IMPORT AND SUPPORT"
    0x597bcc688960 ---------A   00040 PRINT "THEIR OWN WORKERS. CROPS COST BETWEEN 10 AND 15 RALLODS PER"
    0x597bcc688ac0 ---------A   00042 PRINT "SQUARE MILE TO PLANT."
    0x597bcc688d90 ---------A   00044 PRINT "YOUR GOAL IS TO COMPLETE YOUR";N5;"YEAR TERM OF OFFICE."
    0x597bcc688ee0 ---------A   00046 PRINT "GOOD LUCK!"
    0x597bcc688f70 ---------A T 00047 PRINT
    0x597bcc689940 ---------A   00050 A=INT(60000+(1000*RND(1))-(1000*RND(1)))
    0x597bcc68a330 ---------A   00055 B=INT(500+(10*RND(1))-(10*RND(1)))
    0x597bcc68a600 ---------A   00065 D=2000
    0x597bcc68ac90 ---------A T 00100 W=INT(10*RND(1)+95)
    0x597bcc68ad20 ---------A   00102 PRINT
    0x597bcc68b090 ---------A   00105 PRINT "YOU NOW HAVE ";A;" RALLODS IN THE TREASURY."
    0x597bcc68b440 ---------A   00110 PRINT INT(B);:PRINT "COUNTRYMEN, ";
    0x597bcc68bc50 ---------A   00115 V9=INT(((RND(1)/2)*10+10))
    0x597bcc68bf70 ---------A   00120 IF C=0 THEN 140
    0x597bcc68c500 ---------A   00130 PRINT INT(C);"FOREIGN WORKERS, ";
    0x597bcc68c950 ---------A T 00140 PRINT "AND";INT(D);"SQ. MILES OF LAND."
    0x597bcc68cbe0 ---------A   00150 PRINT "THIS YEAR INDUSTRY WILL BUY LAND FOR";W;
    0x597bcc68cd70 ---------A   00152 PRINT "RALLODS PER SQUARE MILE."
    0x597bcc68d0d0 ---------A   00155 PRINT "LAND CURRENTLY COSTS";V9;"RALLODS PER SQUARE MILE TO PLANT."
    0x597bcc68d170 ---------A   00162 PRINT
    0x597bcc68d300 ---------A T 00200 PRINT "HOW MANY SQUARE MILES DO YOU WISH TO SELL TO INDUSTRY";
    0x597bcc68d510 ---------A   00210 INPUT H
    0x597bcc68d780 ---------A   00215 IF H<0 THEN 200
    0x597bcc68db40 ---------A   00220 IF H<=D-1000 THEN 300
    0x597bcc68dfc0 ---------A   00230 PRINT "***  THINK AGAIN. YOU ONLY HAVE";D-1000;"SQUARE MILES OF FARM LAND."
    0x597bcc68e300 ---------A   00240 IF X<>0 THEN 200
    0x597bcc68e500 ---------A   00250 PRINT:PRINT "(FOREIGN INDUSTRY WILL ONLY BUY FARM LAND BECAUSE"
    0x597bcc68e690 ---------A   00260 PRINT "FOREST LAND IS UNECONOMICAL TO STRIP MINE DUE TO TREES,"
    0x597bcc68e7f0 ---------A   00270 PRINT "THICKER TOP SOIL, ETC.)"
    0x597bcc68ea00 ---------A   00280 X=1
    0x597bcc68ea70 ---------A   00299 GOTO 200
    0x597bcc68ee90 ---------A T 00300 D=INT(D-H)
    0x597bcc68f450 ---------A   00310 A=INT(A+(H*W))
    0x597bcc68f5f0 ---------A T 00320 PRINT "HOW MANY RALLODS WILL YOU DISTRIBUTE AMONG YOUR COUNTRYMEN";
    0x597bcc68f800 ---------A   00340 INPUT I
    0x597bcc68fa60 ---------A   00342 IF I<0 THEN 320
    0x597bcc68fce0 ---------A   00350 IF I<A THEN 400
    0x597bcc68ff90 ---------A   00360 IF I=A THEN 380
    0x597bcc690310 ---------A   00370 PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS IN THE TREASURY"
    0x597bcc690380 ---------A   00375 GOTO 320
    0x597bcc690640 ---------A T 00380 J=0
    0x597bcc690910 ---------A   00390 K=0
    0x597bcc690b20 ---------A   00395 A=0
    0x597bcc690b90 ---------A   00399 GOTO 1000
    0x597bcc690fd0 ---------A T 00400 A=INT(A-I)
    0x597bcc691160 ---------A T 00410 PRINT "HOW MANY SQUARE MILES DO YOU WISH TO PLANT";
    0x597bcc6916c0 ---------A   00420 INPUT J
    0x597bcc691920 ---------A   00421 IF J<0 THEN 410
    0x597bcc691cd0 ---------A   00422 IF J<=B*2 THEN 426
    0x597bcc691e60 ---------A   00423 PRINT "   SORRY, BUT EACH COUNTRYMAN CAN ONLY PLANT 2 SQ. MILES."
    0x597bcc691ee0 ---------A   00424 GOTO 410
    0x597bcc692270 ---------A T 00426 IF J<=D-1000 THEN 430
    0x597bcc6926f0 ---------A   00427 PRINT "   SORRY, BUT YOU'VE ONLY";D-1000;"SQ. MILES OF FARM LAND."
    0x597bcc692760 ---------A   00428 GOTO 410
    0x597bcc692c40 ---------A T 00430 U1=INT(J*V9)
    0x597bcc692eb0 ---------A   00435 IF U1<A THEN 500
    0x597bcc693170 ---------A   00440 IF U1=A THEN 490
    0x597bcc6934f0 ---------A   00450 PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS LEFT IN THE TREASURY."
    0x597bcc693560 ---------A   00460 GOTO 410
    0x597bcc693760 ---------A T 00490 K=0
    0x597bcc693970 ---------A   00495 A=0
    0x597bcc6939e0 ---------A   00499 GOTO 1000
    0x597bcc693d50 ---------A T 00500 A=A-U1
    0x597bcc693ef0 ---------A T 00510 PRINT "HOW MANY RALLODS DO YOU WISH TO SPEND ON POLLUTION CONTROL";
    0x597bcc694040 ---------A   00520 INPUT K
    0x597bcc6942a0 ---------A   00522 IF K<0 THEN 510
    0x597bcc694550 ---------A   00530 IF K<=A THEN 1000
    0x597bcc6948c0 ---------A   00540 PRINT "   THINK AGAIN. YOU ONLY HAVE ";A;" RALLODS REMAINING."
    0x597bcc694930 ---------A   00550 GOTO 510
    0x597bcc694b70 ---------A T 00600 IF H<>0 THEN 1002
    0x597bcc694dd0 ---------A   00602 IF I<>0 THEN 1002
    0x597bcc695030 ---------A   00604 IF J<>0 THEN 1002
    0x597bcc695290 ---------A   00606 IF K<>0 THEN 1002
    0x597bcc695310 ---------A   00609 PRINT
    0x597bcc695490 ---------A   00612 PRINT "GOODBYE."
    0x597bcc695640 ---------A   00614 PRINT "(IF YOU WISH TO CONTINUE THIS GAME AT A LATER DATE, ANSWER"
    0x597bcc6957d0 ---------A   00616 PRINT "'AGAIN' WHEN ASKED IF YOU WANT INSTRUCTIONS AT THE START"
    0x597bcc695920 ---------A   00617 PRINT "OF THE GAME)."
    0x597bcc695970 ---------A   00618 STOP
    0x597bcc6959f0 ---------A T 01000 GOTO 600
    0x597bcc695a50 ---------A T 01002 PRINT
    0x597bcc695ac0 ---------A   01003 PRINT
    0x597bcc695ef0 ---------A   01010 A=INT(A-K)
    0x597bcc6961f0 ---------A   01020 A4=A
    0x597bcc696750 ---------A   01100 IF INT(I/100-B)>=0 THEN 1120
    0x597bcc696ae0 ---------A   01105 IF I/100<50 THEN 1700
    0x597bcc6970a0 ---------A   01110 PRINT INT(B-(I/100));"COUNTRYMEN DIED OF STARVATION"
    0x597bcc697790 ---------A T 01120 F1=INT(RND(1)*(2000-D))
    0x597bcc6979e0 ---------A   01122 IF K<25 THEN 1130
    0x597bcc697f60 ---------A   01125 F1=INT(F1/(K/25))
    0x597bcc6981e0 ---------A T 01130 IF F1<=0 THEN 1150
    0x597bcc698480 ---------A   01140 PRINT F1;"COUNTRYMEN DIED OF CARBON-MONOXIDE AND DUST INHALATION"
    0x597bcc698a10 ---------A T 01150 IF INT((I/100)-B)<0 THEN 1170
    0x597bcc698c70 ---------A   01160 IF F1>0 THEN 1180
    0x597bcc698d20 ---------A   01165 GOTO 1200
    0x597bcc699590 ---------A T 01170 PRINT "   YOU WERE FORCED TO SPEND";INT((F1+(B-(I/100)))*9);
    0x597bcc699700 ---------A   01172 PRINT "RALLODS ON FUNERAL EXPENSES"
    0x597bcc699ea0 ---------A   01174 B5=INT(F1+(B-(I/100)))
    0x597bcc69a810 ---------A   01175 A=INT(A-((F1+(B-(I/100)))*9))
    0x597bcc69a8b0 ---------A   01176 GOTO 1185
    0x597bcc69ae10 ---------A T 01180 PRINT "   YOU WERE FORCED TO SPEND ";INT(F1*9);"RALLODS ON ";
    0x597bcc69af60 ---------A   01181 PRINT "FUNERAL EXPENSES."
    0x597bcc69b190 ---------A   01182 B5=F1
    0x597bcc69b700 ---------A   01183 A=INT(A-(F1*9))
    0x597bcc69b980 ---------A T 01185 IF A>=0 THEN 1194
    0x597bcc69bb10 ---------A   01187 PRINT "   INSUFFICIENT RESERVES TO COVER COST - LAND WAS SOLD"
    0x597bcc69c0a0 ---------A   01189 D=INT(D+(A/W))
    0x597bcc69c2b0 ---------A   01190 A=0
    0x597bcc69c6e0 ---------A T 01194 B=INT(B-B5)
    0x597bcc69c940 ---------A T 01200 IF H=0 THEN 1250
    0x597bcc69db70 ---------A   01220 C1=INT(H+(RND(1)*10)-(RND(1)*20))
    0x597bcc69ddc0 ---------A   01224 IF C>0 THEN 1230
    0x597bcc69e120 ---------A   01226 C1=C1+20
    0x597bcc69e3c0 ---------A T 01230 PRINT C1;"WORKERS CAME TO THE COUNTRY AND";
    0x597bcc69f3a0 ---------A T 01250 P1=INT(((I/100-B)/10)+(K/25)-((2000-D)/50)-(F1/2))
    0x597bcc69f6f0 ---------A   01255 PRINT ABS(P1);"COUNTRYMEN ";
    0x597bcc69f940 ---------A   01260 IF P1<0 THEN 1275
    0x597bcc69fac0 ---------A   01265 PRINT "CAME TO";
    0x597bcc69fb30 ---------A   01270 GOTO 1280
    0x597bcc69fca0 ---------A T 01275 PRINT "LEFT";
    0x597bcc69fdf0 ---------A T 01280 PRINT " THE ISLAND."
    0x597bcc6a0220 ---------A   01290 B=INT(B+P1)
    0x597bcc6a0670 ---------A   01292 C=INT(C+C1)
    0x597bcc6a1020 ---------A   01305 U2=INT(((2000-D)*((RND(1)+1.5)/2)))
    0x597bcc6a1290 ---------A   01310 IF C=0 THEN 1324
    0x597bcc6a16f0 ---------A   01320 PRINT "OF ";INT(J);"SQ. MILES PLANTED,";
    0x597bcc6a1960 ---------A T 01324 IF J>U2 THEN 1330
    0x597bcc6a1bd0 ---------A   01326 U2=J
    0x597bcc6a2120 ---------A T 01330 PRINT " YOU HARVESTED ";INT(J-U2);"SQ. MILES OF CROPS."
    0x597bcc6a2370 ---------A   01340 IF U2=0 THEN 1370
    0x597bcc6a26a0 ---------A   01344 IF T1>=2 THEN 1370
    0x597bcc6a2820 ---------A   01350 PRINT "   (DUE TO ";
    0x597bcc6a2a80 ---------A   01355 IF T1=0 THEN 1365
    0x597bcc6a2c30 ---------A   01360 PRINT "INCREASED ";
    0x597bcc6a2db0 ---------A T 01365 PRINT "AIR AND WATER POLLUTION FROM FOREIGN INDUSTRY.)"
    0x597bcc6a3550 ---------A T 01370 Q=INT((J-U2)*(W/2))
    0x597bcc6a3980 ---------A   01380 PRINT "MAKING";INT(Q);"RALLODS."
    0x597bcc6a3dc0 ---------A   01390 A=INT(A+Q)
    0x597bcc6a4760 ---------A   01400 V1=INT(((B-P1)*22)+(RND(1)*500))
    0x597bcc6a4da0 ---------A   01405 V2=INT((2000-D)*15)
    0x597bcc6a53e0 ---------A   01410 PRINT " YOU MADE";ABS(INT(V1-V2));"RALLODS FROM TOURIST TRADE."
    0x597bcc6a5640 ---------A   01420 IF V2=0 THEN 1450
    0x597bcc6a5ab0 ---------A   01425 IF V1-V2>=V3 THEN 1450
    0x597bcc6a5c30 ---------A   01430 PRINT "   DECREASE BECAUSE ";
    0x597bcc6a60e0 ---------A   01435 G1=10*RND(1)
    0x597bcc6a6330 ---------A   01440 IF G1<=2 THEN 1460
    0x597bcc6a6590 ---------A   01442 IF G1<=4 THEN 1465
    0x597bcc6a67f0 ---------A   01444 IF G1<=6 THEN 1470
    0x597bcc6a6a60 ---------A   01446 IF G1<=8 THEN 1475
    0x597bcc6a6cc0 ---------A   01448 IF G1<=10 THEN 1480
    0x597bcc6a7100 ---------A T 01450 V3=INT(A+V3)
    0x597bcc6a7530 ---------A   01451 A=INT(A+V3)
    0x597bcc6a75d0 ---------A   01452 GOTO 1500
    0x597bcc6a7730 ---------A T 01460 PRINT "FISH POPULATION HAS DWINDLED DUE TO WATER POLLUTION."
    0x597bcc6a77d0 ---------A   01462 GOTO 1450
    0x597bcc6a7930 ---------A T 01465 PRINT "AIR POLLUTION IS KILLING GAME BIRD POPULATION."
    0x597bcc6a79d0 ---------A   01467 GOTO 1450
    0x597bcc6a7b30 ---------A T 01470 PRINT "MINERAL BATHS ARE BEING RUINED BY WATER POLLUTION."
    0x597bcc6a7bd0 ---------A   01472 GOTO 1450
    0x597bcc6a7d30 ---------A T 01475 PRINT "UNPLEASANT SMOG IS DISCOURAGING SUN BATHERS."
    0x597bcc6a7dd0 ---------A   01477 GOTO 1450
    0x597bcc6a7f30 ---------A T 01480 PRINT "HOTELS ARE LOOKING SHABBY DUE TO SMOG GRIT."
    0x597bcc6a7fb0 ---------A   01482 GOTO 1450
    0x597bcc6a81f0 ---------A T 01500 IF B5>200 THEN 1600
    0x597bcc6a8460 ---------A   01505 IF B<343 THEN 1700
    0x597bcc6a8800 ---------A   01510 IF (A4/100)>5 THEN 1800
    0x597bcc6a8a90 ---------A T 01515 IF C>B THEN 1550
    0x597bcc6a8ed0 ---------A   01520 IF N5-1=X5 THEN 1900
    0x597bcc6a8f50 ---------A   01545 GOTO 2000
    0x597bcc6a8fb0 ---------A T 01550 PRINT
    0x597bcc6a9050 ---------A   01552 PRINT
    0x597bcc6a91f0 ---------A   01560 PRINT "THE NUMBER OF FOREIGN WORKERS HAS EXCEEDED THE NUMBER"
    0x597bcc6a9370 ---------A   01562 PRINT "OF COUNTRYMEN. AS A MINORITY, THEY HAVE REVOLTED AND"
    0x597bcc6a94e0 ---------A   01564 PRINT "TAKEN OVER THE COUNTRY."
    0x597bcc6a9820 ---------A T 01570 IF RND(1)<=.5 THEN 1580
    0x597bcc6a99b0 ---------A   01574 PRINT "YOU HAVE BEEN THROWN OUT OF OFFICE AND ARE NOW"
    0x597bcc6a9b00 ---------A   01576 PRINT "RESIDING IN PRISON."
    0x597bcc6a9b90 ---------A   01578 GOTO 1590
    0x597bcc6a9ce0 ---------A T 01580 PRINT "YOU HAVE BEEN ASSASSINATED."
    0x597bcc6a9d50 ---------A T 01590 PRINT
    0x597bcc6a9dc0 ---------A   01592 PRINT
    0x597bcc6a9e10 ---------A   01596 STOP
    0x597bcc6a9e90 ---------A T 01600 PRINT
    0x597bcc6a9f20 ---------A   01602 PRINT
    0x597bcc6aa1b0 ---------A   01610 PRINT B5;"COUNTRYMEN DIED IN ONE YEAR!!!!!"
    0x597bcc6aa350 ---------A   01615 PRINT "DUE TO THIS EXTREME MISMANAGEMENT, YOU HAVE NOT ONLY"
    0x597bcc6aa4c0 ---------A   01620 PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE, BUT YOU"
    0x597bcc6aaa50 ---------A   01622 M6=INT(RND(1)*10)
    0x597bcc6aaca0 ---------A   01625 IF M6<=3 THEN 1670
    0x597bcc6aaf10 ---------A   01630 IF M6<=6 THEN 1680
    0x597bcc6ab190 ---------A   01635 IF M6<=10 THEN 1690
    0x597bcc6ab300 ---------A T 01670 PRINT "ALSO HAD YOUR LEFT EYE GOUGED OUT!"
    0x597bcc6ab390 ---------A   01672 GOTO 1590
    0x597bcc6ab4f0 ---------A T 01680 PRINT "HAVE ALSO GAINED A VERY BAD REPUTATION."
    0x597bcc6ab580 ---------A   01682 GOTO 1590
    0x597bcc6ab6e0 ---------A T 01690 PRINT "HAVE ALSO BEEN DECLARED NATIONAL FINK."
    0x597bcc6ab750 ---------A   01692 GOTO 1590
    0x597bcc6ab7b0 ---------A T 01700 PRINT
    0x597bcc6ab850 ---------A   01702 PRINT
    0x597bcc6ab9f0 ---------A   01710 PRINT "OVER ONE THIRD OF THE POPULTATION HAS DIED SINCE YOU"
    0x597bcc6abb70 ---------A   01715 PRINT "WERE ELECTED TO OFFICE. THE PEOPLE (REMAINING)"
    0x597bcc6abcc0 ---------A   01720 PRINT "HATE YOUR GUTS."
    0x597bcc6abd40 ---------A   01730 GOTO 1570
    0x597bcc6ac0a0 ---------A T 01800 IF B5-F1<2 THEN 1515
    0x597bcc6ac150 ---------A   01807 PRINT
    0x597bcc6ac2f0 ---------A   01815 PRINT "MONEY WAS LEFT OVER IN THE TREASURY WHICH YOU DID"
    0x597bcc6ac490 ---------A   01820 PRINT "NOT SPEND. AS A RESULT, SOME OF YOUR COUNTRYMEN DIED"
    0x597bcc6ac630 ---------A   01825 PRINT "OF STARVATION. THE PUBLIC IS ENRAGED AND YOU HAVE"
    0x597bcc6ac7b0 ---------A   01830 PRINT "BEEN FORCED TO EITHER RESIGN OR COMMIT SUICIDE."
    0x597bcc6ac930 ---------A   01835 PRINT "THE CHOICE IS YOURS."
    0x597bcc6acac0 ---------A   01840 PRINT "IF YOU CHOOSE THE LATTER, PLEASE TURN OFF YOUR COMPUTER"
    0x597bcc6acc10 ---------A   01845 PRINT "BEFORE PROCEEDING."
    0x597bcc6acc80 ---------A   01850 GOTO 1590
    0x597bcc6acce0 ---------A T 01900 PRINT
    0x597bcc6acd70 ---------A   01902 PRINT
    0x597bcc6acf00 ---------A   01920 PRINT "CONGRATULATIONS!!!!!!!!!!!!!!!!!!"
    0x597bcc6ad290 ---------A   01925 PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR";N5;"YEAR TERM"
    0x597bcc6ad430 ---------A   01930 PRINT "OF OFFICE. YOU WERE, OF COURSE, EXTREMELY LUCKY, BUT"
    0x597bcc6ad5e0 ---------A   01935 PRINT "NEVERTHELESS, IT'S QUITE AN ACHIEVEMENT. GOODBYE AND GOOD"
    0x597bcc6ad770 ---------A   01940 PRINT "LUCK - YOU'LL PROBABLY NEED IT IF YOU'RE THE TYPE THAT"
    0x597bcc6ad8c0 ---------A   01945 PRINT "PLAYS THIS GAME."
    0x597bcc6ad960 ---------A   01950 GOTO 1590
    0x597bcc6adaf0 ---------A T 01960 PRINT "HOW MANY YEARS HAD YOU BEEN IN OFFICE WHEN INTERRUPTED";
    0x597bcc6adc40 ---------A   01961 INPUT X5
    0x597bcc6adea0 ---------A   01962 IF X5<0 THEN 1590
    0x597bcc6ae130 ---------A   01963 IF X5<8 THEN 1969
    0x597bcc6ae4b0 ---------A   01965 PRINT "   COME ON, YOUR TERM IN OFFICE IS ONLY";N5;"YEARS."
    0x597bcc6ae540 ---------A   01967 GOTO 1960
    0x597bcc6ae6b0 ---------A T 01969 PRINT "HOW MUCH DID YOU HAVE IN THE TREASURY";
    0x597bcc6ae800 ---------A   01970 INPUT A
    0x597bcc6aea70 ---------A   01971 IF A<0 THEN 1590
    0x597bcc6aebf0 ---------A   01975 PRINT "HOW MANY COUNTRYMEN";    
    0x597bcc6aed40 ---------A   01976 INPUT B
    0x597bcc6aefb0 ---------A   01977 IF B<0 THEN 1590
    0x597bcc6af130 ---------A   01980 PRINT "HOW MANY WORKERS";
    0x597bcc6af280 ---------A   01981 INPUT C
    0x597bcc6af500 ---------A   01982 IF C<0 THEN 1590
    0x597bcc6af690 ---------A T 01990 PRINT "HOW MANY SQUARE MILES OF LAND";
    0x597bcc69caa0 ---------A   01991 INPUT D
    0x597bcc69cd10 ---------A   01992 IF D<0 THEN 1590
    0x597bcc69cf70 ---------A   01993 IF D>2000 THEN 1996
    0x597bcc6b0740 ---------A   01994 IF D>1000 THEN 100
    0x597bcc6b08f0 ---------A T 01996 PRINT "   COME ON, YOU STARTED WITH 1000 SQ. MILES OF FARM LAND"
    0x597bcc6b0a60 ---------A   01997 PRINT "   AND 10,000 SQ. MILES OF FOREST LAND."
    0x597bcc6b0ad0 ---------A   01998 GOTO 1990
    0x597bcc6b0df0 ---------A T 02000 X5=X5+1
    0x597bcc6b1000 ---------A   02020 B5=0
    0x597bcc6b1070 ---------A   02040 GOTO 100
    0x597bcc6b10b0 ---------A   02046 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00047      00010T
     00100      01994T, 02040T
     00140      00120T
     00200      00215T, 00240T, 00299T
     00300      00220T
     00320      00342T, 00375T
     00380      00360T
     00400      00350T
     00410      00421T, 00424T, 00428T, 00460T
     00426      00422T
     00430      00426T
     00490      00440T
     00500      00435T
     00510      00522T, 00550T
     00600      01000T
     01000      00399T, 00499T, 00530T
     01002      00600T, 00602T, 00604T, 00606T
     01120      01100T
     01130      01122T
     01150      01130T
     01170      01150T
     01180      01160T
     01185      01176T
     01194      01185T
     01200      01165T
     01230      01224T
     01250      01200T
     01275      01260T
     01280      01270T
     01324      01310T
     01330      01324T
     01365      01355T
     01370      01340T, 01344T
     01450      01420T, 01425T, 01462T, 01467T, 01472T, 01477T, 01482T
     01460      01440T
     01465      01442T
     01470      01444T
     01475      01446T
     01480      01448T
     01500      01452T
     01515      01800T
     01550      01515T
     01570      01730T
     01580      01570T
     01590      01578T, 01672T, 01682T, 01692T, 01850T, 01950T, 01962T, 01971T, 
                01977T, 01982T, 01992T
     01600      01500T
     01670      01625T
     01680      01630T
     01690      01635T
     01700      01105T, 01505T
     01800      01510T
     01900      01520T
     01960      00011T, 01967T
     01969      01963T
     01990      01998T
     01996      01993T
     02000      01545T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x597bcc680ac0 (00001)   0x000000000000 (00000)   0x597bcc6b10b0 (02046)   0x597bcc6b10b0 (02046)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03680 - 10000    6330 

 */



/*
 *  Symbol Table Listing for 'basic/king.bas'
 *
    A                        Float       
    A4                       Float       
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
    B5                       Float       
    C                        Float       
    C1                       Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F1                       Float       
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G1                       Float       
    H                        Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    K                        Float       
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M6                       Float       
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N5                       Float       
    OCT$            Function String          args=1, float  
    P1                       Float       
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T1                       Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U1                       Float       
    U2                       Float       
    V1                       Float       
    V2                       Float       
    V3                       Float       
    V9                       Float       
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Float       
    X                        Float       
    X5                       Float       
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/king.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x597bcc680ac0 ---------A   01000 PRINT TAB(34);"KING"
    0x597bcc681e10 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x597bcc681f90 ---------A   01020 PRINT:PRINT:PRINT
    0x597bcc680850 ---------A   01030 PRINT "DO YOU WANT INSTRUCTIONS";
    0x597bcc67f610 ---------A   01040 INPUT Z$
    0x597bcc67fdc0 ---------A   01050 N5=8
    0x597bcc67f5b0 ---------A   01060 IF LEFT$(Z$,1)="N" THEN 1230
    0x597bcc67fbe0 ---------A   01070 IF Z$="AGAIN" THEN 3410
    0x597bcc687780 ---------A   01080 PRINT:PRINT:PRINT
    0x597bcc6878e0 ---------A   01090 PRINT "CONGRATULATIONS! YOU'VE JUST BEEN ELECTED PREMIER OF SETATS"
    0x597bcc687a90 ---------A   01100 PRINT "DETINU, A SMALL COMMUNIST ISLAND 30 BY 70 MILES LONG. YOUR"
    0x597bcc687c40 ---------A   01110 PRINT "JOB IS TO DECIDE UPON THE CONTRY'S BUDGET AND DISTRIBUTE"
    0x597bcc687de0 ---------A   01120 PRINT "MONEY TO YOUR COUNTRYMEN FROM THE COMMUNAL TREASURY."
    0x597bcc687f90 ---------A   01130 PRINT "THE MONEY SYSTEM IS RALLODS, AND EACH PERSON NEEDS 100"
    0x597bcc688140 ---------A   01140 PRINT "RALLODS PER YEAR TO SURVIVE. YOUR COUNTRY'S INCOME COMES"
    0x597bcc6882f0 ---------A   01150 PRINT "FROM FARM PRODUCE AND TOURISTS VISITING YOUR MAGNIFICENT"
    0x597bcc6884a0 ---------A   01160 PRINT "FORESTS, HUNTING, FISHING, ETC. HALF YOUR LAND IS FARM LAND"
    0x597bcc688650 ---------A   01170 PRINT "WHICH ALSO HAS AN EXCELLENT MINERAL CONTENT AND MAY BE SOLD"
    0x597bcc688800 ---------A   01180 PRINT "TO FOREIGN INDUSTRY (STRIP MINING) WHO IMPORT AND SUPPORT"
    0x597bcc688960 ---------A   01190 PRINT "THEIR OWN WORKERS. CROPS COST BETWEEN 10 AND 15 RALLODS PER"
    0x597bcc688ac0 ---------A   01200 PRINT "SQUARE MILE TO PLANT."
    0x597bcc688d90 ---------A   01210 PRINT "YOUR GOAL IS TO COMPLETE YOUR";N5;"YEAR TERM OF OFFICE."
    0x597bcc688ee0 ---------A   01220 PRINT "GOOD LUCK!"
    0x597bcc688f70 ---------A T 01230 PRINT
    0x597bcc689940 ---------A   01240 A=INT(60000+(1000*RND(1))-(1000*RND(1)))
    0x597bcc68a330 ---------A   01250 B=INT(500+(10*RND(1))-(10*RND(1)))
    0x597bcc68a600 ---------A   01260 D=2000
    0x597bcc68ac90 ---------A T 01270 W=INT(10*RND(1)+95)
    0x597bcc68ad20 ---------A   01280 PRINT
    0x597bcc68b090 ---------A   01290 PRINT "YOU NOW HAVE ";A;" RALLODS IN THE TREASURY."
    0x597bcc68b440 ---------A   01300 PRINT INT(B);:PRINT "COUNTRYMEN, ";
    0x597bcc68bc50 ---------A   01310 V9=INT(((RND(1)/2)*10+10))
    0x597bcc68bf70 ---------A   01320 IF C=0 THEN 1340
    0x597bcc68c500 ---------A   01330 PRINT INT(C);"FOREIGN WORKERS, ";
    0x597bcc68c950 ---------A T 01340 PRINT "AND";INT(D);"SQ. MILES OF LAND."
    0x597bcc68cbe0 ---------A   01350 PRINT "THIS YEAR INDUSTRY WILL BUY LAND FOR";W;
    0x597bcc68cd70 ---------A   01360 PRINT "RALLODS PER SQUARE MILE."
    0x597bcc68d0d0 ---------A   01370 PRINT "LAND CURRENTLY COSTS";V9;"RALLODS PER SQUARE MILE TO PLANT."
    0x597bcc68d170 ---------A   01380 PRINT
    0x597bcc68d300 ---------A T 01390 PRINT "HOW MANY SQUARE MILES DO YOU WISH TO SELL TO INDUSTRY";
    0x597bcc68d510 ---------A   01400 INPUT H
    0x597bcc68d780 ---------A   01410 IF H<0 THEN 1390
    0x597bcc68db40 ---------A   01420 IF H<=D-1000 THEN 1500
    0x597bcc68dfc0 ---------A   01430 PRINT "***  THINK AGAIN. YOU ONLY HAVE";D-1000;"SQUARE MILES OF FARM LAND."
    0x597bcc68e300 ---------A   01440 IF X<>0 THEN 1390
    0x597bcc68e500 ---------A   01450 PRINT:PRINT "(FOREIGN INDUSTRY WILL ONLY BUY FARM LAND BECAUSE"
    0x597bcc68e690 ---------A   01460 PRINT "FOREST LAND IS UNECONOMICAL TO STRIP MINE DUE TO TREES,"
    0x597bcc68e7f0 ---------A   01470 PRINT "THICKER TOP SOIL, ETC.)"
    0x597bcc68ea00 ---------A   01480 X=1
    0x597bcc68ea70 ---------A   01490 GOTO 1390
    0x597bcc68ee90 ---------A T 01500 D=INT(D-H)
    0x597bcc68f450 ---------A   01510 A=INT(A+(H*W))
    0x597bcc68f5f0 ---------A T 01520 PRINT "HOW MANY RALLODS WILL YOU DISTRIBUTE AMONG YOUR COUNTRYMEN";
    0x597bcc68f800 ---------A   01530 INPUT I
    0x597bcc68fa60 ---------A   01540 IF I<0 THEN 1520
    0x597bcc68fce0 ---------A   01550 IF I<A THEN 1630
    0x597bcc68ff90 ---------A   01560 IF I=A THEN 1590
    0x597bcc690310 ---------A   01570 PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS IN THE TREASURY"
    0x597bcc690380 ---------A   01580 GOTO 1520
    0x597bcc690640 ---------A T 01590 J=0
    0x597bcc690910 ---------A   01600 K=0
    0x597bcc690b20 ---------A   01610 A=0
    0x597bcc690b90 ---------A   01620 GOTO 1980
    0x597bcc690fd0 ---------A T 01630 A=INT(A-I)
    0x597bcc691160 ---------A T 01640 PRINT "HOW MANY SQUARE MILES DO YOU WISH TO PLANT";
    0x597bcc6916c0 ---------A   01650 INPUT J
    0x597bcc691920 ---------A   01660 IF J<0 THEN 1640
    0x597bcc691cd0 ---------A   01670 IF J<=B*2 THEN 1700
    0x597bcc691e60 ---------A   01680 PRINT "   SORRY, BUT EACH COUNTRYMAN CAN ONLY PLANT 2 SQ. MILES."
    0x597bcc691ee0 ---------A   01690 GOTO 1640
    0x597bcc692270 ---------A T 01700 IF J<=D-1000 THEN 1730
    0x597bcc6926f0 ---------A   01710 PRINT "   SORRY, BUT YOU'VE ONLY";D-1000;"SQ. MILES OF FARM LAND."
    0x597bcc692760 ---------A   01720 GOTO 1640
    0x597bcc692c40 ---------A T 01730 U1=INT(J*V9)
    0x597bcc692eb0 ---------A   01740 IF U1<A THEN 1810
    0x597bcc693170 ---------A   01750 IF U1=A THEN 1780
    0x597bcc6934f0 ---------A   01760 PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS LEFT IN THE TREASURY."
    0x597bcc693560 ---------A   01770 GOTO 1640
    0x597bcc693760 ---------A T 01780 K=0
    0x597bcc693970 ---------A   01790 A=0
    0x597bcc6939e0 ---------A   01800 GOTO 1980
    0x597bcc693d50 ---------A T 01810 A=A-U1
    0x597bcc693ef0 ---------A T 01820 PRINT "HOW MANY RALLODS DO YOU WISH TO SPEND ON POLLUTION CONTROL";
    0x597bcc694040 ---------A   01830 INPUT K
    0x597bcc6942a0 ---------A   01840 IF K<0 THEN 1820
    0x597bcc694550 ---------A   01850 IF K<=A THEN 1980
    0x597bcc6948c0 ---------A   01860 PRINT "   THINK AGAIN. YOU ONLY HAVE ";A;" RALLODS REMAINING."
    0x597bcc694930 ---------A   01870 GOTO 1820
    0x597bcc694b70 ---------A T 01880 IF H<>0 THEN 1990
    0x597bcc694dd0 ---------A   01890 IF I<>0 THEN 1990
    0x597bcc695030 ---------A   01900 IF J<>0 THEN 1990
    0x597bcc695290 ---------A   01910 IF K<>0 THEN 1990
    0x597bcc695310 ---------A   01920 PRINT
    0x597bcc695490 ---------A   01930 PRINT "GOODBYE."
    0x597bcc695640 ---------A   01940 PRINT "(IF YOU WISH TO CONTINUE THIS GAME AT A LATER DATE, ANSWER"
    0x597bcc6957d0 ---------A   01950 PRINT "'AGAIN' WHEN ASKED IF YOU WANT INSTRUCTIONS AT THE START"
    0x597bcc695920 ---------A   01960 PRINT "OF THE GAME)."
    0x597bcc695970 ---------A   01970 STOP
    0x597bcc6959f0 ---------A T 01980 GOTO 1880
    0x597bcc695a50 ---------A T 01990 PRINT
    0x597bcc695ac0 ---------A   02000 PRINT
    0x597bcc695ef0 ---------A   02010 A=INT(A-K)
    0x597bcc6961f0 ---------A   02020 A4=A
    0x597bcc696750 ---------A   02030 IF INT(I/100-B)>=0 THEN 2060
    0x597bcc696ae0 ---------A   02040 IF I/100<50 THEN 3160
    0x597bcc6970a0 ---------A   02050 PRINT INT(B-(I/100));"COUNTRYMEN DIED OF STARVATION"
    0x597bcc697790 ---------A T 02060 F1=INT(RND(1)*(2000-D))
    0x597bcc6979e0 ---------A   02070 IF K<25 THEN 2090
    0x597bcc697f60 ---------A   02080 F1=INT(F1/(K/25))
    0x597bcc6981e0 ---------A T 02090 IF F1<=0 THEN 2110
    0x597bcc698480 ---------A   02100 PRINT F1;"COUNTRYMEN DIED OF CARBON-MONOXIDE AND DUST INHALATION"
    0x597bcc698a10 ---------A T 02110 IF INT((I/100)-B)<0 THEN 2140
    0x597bcc698c70 ---------A   02120 IF F1>0 THEN 2190
    0x597bcc698d20 ---------A   02130 GOTO 2280
    0x597bcc699590 ---------A T 02140 PRINT "   YOU WERE FORCED TO SPEND";INT((F1+(B-(I/100)))*9);
    0x597bcc699700 ---------A   02150 PRINT "RALLODS ON FUNERAL EXPENSES"
    0x597bcc699ea0 ---------A   02160 B5=INT(F1+(B-(I/100)))
    0x597bcc69a810 ---------A   02170 A=INT(A-((F1+(B-(I/100)))*9))
    0x597bcc69a8b0 ---------A   02180 GOTO 2230
    0x597bcc69ae10 ---------A T 02190 PRINT "   YOU WERE FORCED TO SPEND ";INT(F1*9);"RALLODS ON ";
    0x597bcc69af60 ---------A   02200 PRINT "FUNERAL EXPENSES."
    0x597bcc69b190 ---------A   02210 B5=F1
    0x597bcc69b700 ---------A   02220 A=INT(A-(F1*9))
    0x597bcc69b980 ---------A T 02230 IF A>=0 THEN 2270
    0x597bcc69bb10 ---------A   02240 PRINT "   INSUFFICIENT RESERVES TO COVER COST - LAND WAS SOLD"
    0x597bcc69c0a0 ---------A   02250 D=INT(D+(A/W))
    0x597bcc69c2b0 ---------A   02260 A=0
    0x597bcc69c6e0 ---------A T 02270 B=INT(B-B5)
    0x597bcc69c940 ---------A T 02280 IF H=0 THEN 2330
    0x597bcc69db70 ---------A   02290 C1=INT(H+(RND(1)*10)-(RND(1)*20))
    0x597bcc69ddc0 ---------A   02300 IF C>0 THEN 2320
    0x597bcc69e120 ---------A   02310 C1=C1+20
    0x597bcc69e3c0 ---------A T 02320 PRINT C1;"WORKERS CAME TO THE COUNTRY AND";
    0x597bcc69f3a0 ---------A T 02330 P1=INT(((I/100-B)/10)+(K/25)-((2000-D)/50)-(F1/2))
    0x597bcc69f6f0 ---------A   02340 PRINT ABS(P1);"COUNTRYMEN ";
    0x597bcc69f940 ---------A   02350 IF P1<0 THEN 2380
    0x597bcc69fac0 ---------A   02360 PRINT "CAME TO";
    0x597bcc69fb30 ---------A   02370 GOTO 2390
    0x597bcc69fca0 ---------A T 02380 PRINT "LEFT";
    0x597bcc69fdf0 ---------A T 02390 PRINT " THE ISLAND."
    0x597bcc6a0220 ---------A   02400 B=INT(B+P1)
    0x597bcc6a0670 ---------A   02410 C=INT(C+C1)
    0x597bcc6a1020 ---------A   02420 U2=INT(((2000-D)*((RND(1)+1.5)/2)))
    0x597bcc6a1290 ---------A   02430 IF C=0 THEN 2450
    0x597bcc6a16f0 ---------A   02440 PRINT "OF ";INT(J);"SQ. MILES PLANTED,";
    0x597bcc6a1960 ---------A T 02450 IF J>U2 THEN 2470
    0x597bcc6a1bd0 ---------A   02460 U2=J
    0x597bcc6a2120 ---------A T 02470 PRINT " YOU HARVESTED ";INT(J-U2);"SQ. MILES OF CROPS."
    0x597bcc6a2370 ---------A   02480 IF U2=0 THEN 2540
    0x597bcc6a26a0 ---------A   02490 IF T1>=2 THEN 2540
    0x597bcc6a2820 ---------A   02500 PRINT "   (DUE TO ";
    0x597bcc6a2a80 ---------A   02510 IF T1=0 THEN 2530
    0x597bcc6a2c30 ---------A   02520 PRINT "INCREASED ";
    0x597bcc6a2db0 ---------A T 02530 PRINT "AIR AND WATER POLLUTION FROM FOREIGN INDUSTRY.)"
    0x597bcc6a3550 ---------A T 02540 Q=INT((J-U2)*(W/2))
    0x597bcc6a3980 ---------A   02550 PRINT "MAKING";INT(Q);"RALLODS."
    0x597bcc6a3dc0 ---------A   02560 A=INT(A+Q)
    0x597bcc6a4760 ---------A   02570 V1=INT(((B-P1)*22)+(RND(1)*500))
    0x597bcc6a4da0 ---------A   02580 V2=INT((2000-D)*15)
    0x597bcc6a53e0 ---------A   02590 PRINT " YOU MADE";ABS(INT(V1-V2));"RALLODS FROM TOURIST TRADE."
    0x597bcc6a5640 ---------A   02600 IF V2=0 THEN 2690
    0x597bcc6a5ab0 ---------A   02610 IF V1-V2>=V3 THEN 2690
    0x597bcc6a5c30 ---------A   02620 PRINT "   DECREASE BECAUSE ";
    0x597bcc6a60e0 ---------A   02630 G1=10*RND(1)
    0x597bcc6a6330 ---------A   02640 IF G1<=2 THEN 2720
    0x597bcc6a6590 ---------A   02650 IF G1<=4 THEN 2740
    0x597bcc6a67f0 ---------A   02660 IF G1<=6 THEN 2760
    0x597bcc6a6a60 ---------A   02670 IF G1<=8 THEN 2780
    0x597bcc6a6cc0 ---------A   02680 IF G1<=10 THEN 2800
    0x597bcc6a7100 ---------A T 02690 V3=INT(A+V3)
    0x597bcc6a7530 ---------A   02700 A=INT(A+V3)
    0x597bcc6a75d0 ---------A   02710 GOTO 2820
    0x597bcc6a7730 ---------A T 02720 PRINT "FISH POPULATION HAS DWINDLED DUE TO WATER POLLUTION."
    0x597bcc6a77d0 ---------A   02730 GOTO 2690
    0x597bcc6a7930 ---------A T 02740 PRINT "AIR POLLUTION IS KILLING GAME BIRD POPULATION."
    0x597bcc6a79d0 ---------A   02750 GOTO 2690
    0x597bcc6a7b30 ---------A T 02760 PRINT "MINERAL BATHS ARE BEING RUINED BY WATER POLLUTION."
    0x597bcc6a7bd0 ---------A   02770 GOTO 2690
    0x597bcc6a7d30 ---------A T 02780 PRINT "UNPLEASANT SMOG IS DISCOURAGING SUN BATHERS."
    0x597bcc6a7dd0 ---------A   02790 GOTO 2690
    0x597bcc6a7f30 ---------A T 02800 PRINT "HOTELS ARE LOOKING SHABBY DUE TO SMOG GRIT."
    0x597bcc6a7fb0 ---------A   02810 GOTO 2690
    0x597bcc6a81f0 ---------A T 02820 IF B5>200 THEN 3010
    0x597bcc6a8460 ---------A   02830 IF B<343 THEN 3160
    0x597bcc6a8800 ---------A   02840 IF (A4/100)>5 THEN 3220
    0x597bcc6a8a90 ---------A T 02850 IF C>B THEN 2880
    0x597bcc6a8ed0 ---------A   02860 IF N5-1=X5 THEN 3320
    0x597bcc6a8f50 ---------A   02870 GOTO 3640
    0x597bcc6a8fb0 ---------A T 02880 PRINT
    0x597bcc6a9050 ---------A   02890 PRINT
    0x597bcc6a91f0 ---------A   02900 PRINT "THE NUMBER OF FOREIGN WORKERS HAS EXCEEDED THE NUMBER"
    0x597bcc6a9370 ---------A   02910 PRINT "OF COUNTRYMEN. AS A MINORITY, THEY HAVE REVOLTED AND"
    0x597bcc6a94e0 ---------A   02920 PRINT "TAKEN OVER THE COUNTRY."
    0x597bcc6a9820 ---------A T 02930 IF RND(1)<=.5 THEN 2970
    0x597bcc6a99b0 ---------A   02940 PRINT "YOU HAVE BEEN THROWN OUT OF OFFICE AND ARE NOW"
    0x597bcc6a9b00 ---------A   02950 PRINT "RESIDING IN PRISON."
    0x597bcc6a9b90 ---------A   02960 GOTO 2980
    0x597bcc6a9ce0 ---------A T 02970 PRINT "YOU HAVE BEEN ASSASSINATED."
    0x597bcc6a9d50 ---------A T 02980 PRINT
    0x597bcc6a9dc0 ---------A   02990 PRINT
    0x597bcc6a9e10 ---------A   03000 STOP
    0x597bcc6a9e90 ---------A T 03010 PRINT
    0x597bcc6a9f20 ---------A   03020 PRINT
    0x597bcc6aa1b0 ---------A   03030 PRINT B5;"COUNTRYMEN DIED IN ONE YEAR!!!!!"
    0x597bcc6aa350 ---------A   03040 PRINT "DUE TO THIS EXTREME MISMANAGEMENT, YOU HAVE NOT ONLY"
    0x597bcc6aa4c0 ---------A   03050 PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE, BUT YOU"
    0x597bcc6aaa50 ---------A   03060 M6=INT(RND(1)*10)
    0x597bcc6aaca0 ---------A   03070 IF M6<=3 THEN 3100
    0x597bcc6aaf10 ---------A   03080 IF M6<=6 THEN 3120
    0x597bcc6ab190 ---------A   03090 IF M6<=10 THEN 3140
    0x597bcc6ab300 ---------A T 03100 PRINT "ALSO HAD YOUR LEFT EYE GOUGED OUT!"
    0x597bcc6ab390 ---------A   03110 GOTO 2980
    0x597bcc6ab4f0 ---------A T 03120 PRINT "HAVE ALSO GAINED A VERY BAD REPUTATION."
    0x597bcc6ab580 ---------A   03130 GOTO 2980
    0x597bcc6ab6e0 ---------A T 03140 PRINT "HAVE ALSO BEEN DECLARED NATIONAL FINK."
    0x597bcc6ab750 ---------A   03150 GOTO 2980
    0x597bcc6ab7b0 ---------A T 03160 PRINT
    0x597bcc6ab850 ---------A   03170 PRINT
    0x597bcc6ab9f0 ---------A   03180 PRINT "OVER ONE THIRD OF THE POPULTATION HAS DIED SINCE YOU"
    0x597bcc6abb70 ---------A   03190 PRINT "WERE ELECTED TO OFFICE. THE PEOPLE (REMAINING)"
    0x597bcc6abcc0 ---------A   03200 PRINT "HATE YOUR GUTS."
    0x597bcc6abd40 ---------A   03210 GOTO 2930
    0x597bcc6ac0a0 ---------A T 03220 IF B5-F1<2 THEN 2850
    0x597bcc6ac150 ---------A   03230 PRINT
    0x597bcc6ac2f0 ---------A   03240 PRINT "MONEY WAS LEFT OVER IN THE TREASURY WHICH YOU DID"
    0x597bcc6ac490 ---------A   03250 PRINT "NOT SPEND. AS A RESULT, SOME OF YOUR COUNTRYMEN DIED"
    0x597bcc6ac630 ---------A   03260 PRINT "OF STARVATION. THE PUBLIC IS ENRAGED AND YOU HAVE"
    0x597bcc6ac7b0 ---------A   03270 PRINT "BEEN FORCED TO EITHER RESIGN OR COMMIT SUICIDE."
    0x597bcc6ac930 ---------A   03280 PRINT "THE CHOICE IS YOURS."
    0x597bcc6acac0 ---------A   03290 PRINT "IF YOU CHOOSE THE LATTER, PLEASE TURN OFF YOUR COMPUTER"
    0x597bcc6acc10 ---------A   03300 PRINT "BEFORE PROCEEDING."
    0x597bcc6acc80 ---------A   03310 GOTO 2980
    0x597bcc6acce0 ---------A T 03320 PRINT
    0x597bcc6acd70 ---------A   03330 PRINT
    0x597bcc6acf00 ---------A   03340 PRINT "CONGRATULATIONS!!!!!!!!!!!!!!!!!!"
    0x597bcc6ad290 ---------A   03350 PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR";N5;"YEAR TERM"
    0x597bcc6ad430 ---------A   03360 PRINT "OF OFFICE. YOU WERE, OF COURSE, EXTREMELY LUCKY, BUT"
    0x597bcc6ad5e0 ---------A   03370 PRINT "NEVERTHELESS, IT'S QUITE AN ACHIEVEMENT. GOODBYE AND GOOD"
    0x597bcc6ad770 ---------A   03380 PRINT "LUCK - YOU'LL PROBABLY NEED IT IF YOU'RE THE TYPE THAT"
    0x597bcc6ad8c0 ---------A   03390 PRINT "PLAYS THIS GAME."
    0x597bcc6ad960 ---------A   03400 GOTO 2980
    0x597bcc6adaf0 ---------A T 03410 PRINT "HOW MANY YEARS HAD YOU BEEN IN OFFICE WHEN INTERRUPTED";
    0x597bcc6adc40 ---------A   03420 INPUT X5
    0x597bcc6adea0 ---------A   03430 IF X5<0 THEN 2980
    0x597bcc6ae130 ---------A   03440 IF X5<8 THEN 3470
    0x597bcc6ae4b0 ---------A   03450 PRINT "   COME ON, YOUR TERM IN OFFICE IS ONLY";N5;"YEARS."
    0x597bcc6ae540 ---------A   03460 GOTO 3410
    0x597bcc6ae6b0 ---------A T 03470 PRINT "HOW MUCH DID YOU HAVE IN THE TREASURY";
    0x597bcc6ae800 ---------A   03480 INPUT A
    0x597bcc6aea70 ---------A   03490 IF A<0 THEN 2980
    0x597bcc6aebf0 ---------A   03500 PRINT "HOW MANY COUNTRYMEN";    
    0x597bcc6aed40 ---------A   03510 INPUT B
    0x597bcc6aefb0 ---------A   03520 IF B<0 THEN 2980
    0x597bcc6af130 ---------A   03530 PRINT "HOW MANY WORKERS";
    0x597bcc6af280 ---------A   03540 INPUT C
    0x597bcc6af500 ---------A   03550 IF C<0 THEN 2980
    0x597bcc6af690 ---------A T 03560 PRINT "HOW MANY SQUARE MILES OF LAND";
    0x597bcc69caa0 ---------A   03570 INPUT D
    0x597bcc69cd10 ---------A   03580 IF D<0 THEN 2980
    0x597bcc69cf70 ---------A   03590 IF D>2000 THEN 3610
    0x597bcc6b0740 ---------A   03600 IF D>12700 THEN 100
    0x597bcc6b08f0 ---------A T 03610 PRINT "   COME ON, YOU STARTED WITH 1000 SQ. MILES OF FARM LAND"
    0x597bcc6b0a60 ---------A   03620 PRINT "   AND 10,000 SQ. MILES OF FOREST LAND."
    0x597bcc6b0ad0 ---------A   03630 GOTO 3560
    0x597bcc6b0df0 ---------A T 03640 X5=X5+1
    0x597bcc6b1000 ---------A   03650 B5=0
    0x597bcc6b1070 ---------A   03660 GOTO 1270
    0x597bcc6b10b0 ---------A   03670 END
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
float  A_flt;                                     // Basic: A 
float  A4_flt;                                    // Basic: A4 
float  B_flt;                                     // Basic: B 
float  B5_flt;                                    // Basic: B5 
float  C_flt;                                     // Basic: C 
float  C1_flt;                                    // Basic: C1 
float  D_flt;                                     // Basic: D 
float  F1_flt;                                    // Basic: F1 
float  G1_flt;                                    // Basic: G1 
float  H_flt;                                     // Basic: H 
float  I_flt;                                     // Basic: I 
float  J_flt;                                     // Basic: J 
float  K_flt;                                     // Basic: K 
float  M6_flt;                                    // Basic: M6 
float  N5_flt;                                    // Basic: N5 
float  P1_flt;                                    // Basic: P1 
float  Q_flt;                                     // Basic: Q 
float  T1_flt;                                    // Basic: T1 
float  U1_flt;                                    // Basic: U1 
float  U2_flt;                                    // Basic: U2 
float  V1_flt;                                    // Basic: V1 
float  V2_flt;                                    // Basic: V2 
float  V3_flt;                                    // Basic: V3 
float  V9_flt;                                    // Basic: V9 
float  W_flt;                                     // Basic: W 
float  X_flt;                                     // Basic: X 
float  X5_flt;                                    // Basic: X5 
char*  Z_str;                                     // Basic: Z$ 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------

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
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
