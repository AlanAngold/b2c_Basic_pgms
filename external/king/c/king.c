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
    0x5e4b7c2bd6d0 ---------A   00001  PRINT TAB(34);"KING"
    0x5e4b7c2bd670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e4b7c2ae2b0 ---------A   00003  PRINT:PRINT:PRINT
    0x5e4b7c2bf1b0 ---------A   00004  PRINT "DO YOU WANT INSTRUCTIONS";
    0x5e4b7c2be040 ---------A   00005  INPUT Z$
    0x5e4b7c2bfed0 ---------A   00006  N5=8
    0x5e4b7c2be660 ---------A   00010  IF LEFT$(Z$,1)="N" THEN 47
    0x5e4b7c2c5840 ---------A   00011  IF Z$="AGAIN" THEN 1960
    0x5e4b7c2c5960 ---------A   00012  PRINT:PRINT:PRINT
    0x5e4b7c2c5a40 ---------A   00020  PRINT "CONGRATULATIONS! YOU'VE JUST BEEN ELECTED PREMIER OF SETATS"
    0x5e4b7c2c5bb0 ---------A   00022  PRINT "DETINU, A SMALL COMMUNIST ISLAND 30 BY 70 MILES LONG. YOUR"
    0x5e4b7c2c5d70 ---------A   00024  PRINT "JOB IS TO DECIDE UPON THE CONTRY'S BUDGET AND DISTRIBUTE"
    0x5e4b7c2c5f20 ---------A   00026  PRINT "MONEY TO YOUR COUNTRYMEN FROM THE COMMUNAL TREASURY."
    0x5e4b7c2c60e0 ---------A   00028  PRINT "THE MONEY SYSTEM IS RALLODS, AND EACH PERSON NEEDS 100"
    0x5e4b7c2c62a0 ---------A   00030  PRINT "RALLODS PER YEAR TO SURVIVE. YOUR COUNTRY'S INCOME COMES"
    0x5e4b7c2c6460 ---------A   00032  PRINT "FROM FARM PRODUCE AND TOURISTS VISITING YOUR MAGNIFICENT"
    0x5e4b7c2c6620 ---------A   00034  PRINT "FORESTS, HUNTING, FISHING, ETC. HALF YOUR LAND IS FARM LAND"
    0x5e4b7c2c67e0 ---------A   00036  PRINT "WHICH ALSO HAS AN EXCELLENT MINERAL CONTENT AND MAY BE SOLD"
    0x5e4b7c2c69a0 ---------A   00038  PRINT "TO FOREIGN INDUSTRY (STRIP MINING) WHO IMPORT AND SUPPORT"
    0x5e4b7c2c6b10 ---------A   00040  PRINT "THEIR OWN WORKERS. CROPS COST BETWEEN 10 AND 15 RALLODS PER"
    0x5e4b7c2c6c80 ---------A   00042  PRINT "SQUARE MILE TO PLANT."
    0x5e4b7c2c6fc0 ---------A   00044  PRINT "YOUR GOAL IS TO COMPLETE YOUR";N5;"YEAR TERM OF OFFICE."
    0x5e4b7c2c7120 ---------A   00046  PRINT "GOOD LUCK!"
    0x5e4b7c2c71c0 ---------A T 00047  PRINT
    0x5e4b7c2c7ba0 ---------A   00050  A=INT(60000+(1000*RND(1))-(1000*RND(1)))
    0x5e4b7c2c8590 ---------A   00055  B=INT(500+(10*RND(1))-(10*RND(1)))
    0x5e4b7c2c8860 ---------A   00065  D=2000
    0x5e4b7c2c8ef0 ---------A T 00100  W=INT(10*RND(1)+95)
    0x5e4b7c2c8f80 ---------A   00102  PRINT
    0x5e4b7c2c9300 ---------A   00105  PRINT "YOU NOW HAVE ";A;" RALLODS IN THE TREASURY."
    0x5e4b7c2c96d0 ---------A   00110  PRINT INT(B);:PRINT "COUNTRYMEN, ";
    0x5e4b7c2c9ef0 ---------A   00115  V9=INT(((RND(1)/2)*10+10))
    0x5e4b7c2ca210 ---------A   00120  IF C=0 THEN 140
    0x5e4b7c2ca7a0 ---------A   00130  PRINT INT(C);"FOREIGN WORKERS, ";
    0x5e4b7c2cac00 ---------A T 00140  PRINT "AND";INT(D);"SQ. MILES OF LAND."
    0x5e4b7c2caea0 ---------A   00150  PRINT "THIS YEAR INDUSTRY WILL BUY LAND FOR";W;
    0x5e4b7c2cb040 ---------A   00152  PRINT "RALLODS PER SQUARE MILE."
    0x5e4b7c2cb3b0 ---------A   00155  PRINT "LAND CURRENTLY COSTS";V9;"RALLODS PER SQUARE MILE TO PLANT."
    0x5e4b7c2cb460 ---------A   00162  PRINT
    0x5e4b7c2cb600 ---------A T 00200  PRINT "HOW MANY SQUARE MILES DO YOU WISH TO SELL TO INDUSTRY";
    0x5e4b7c2cb820 ---------A   00210  INPUT H
    0x5e4b7c2cba90 ---------A   00215  IF H<0 THEN 200
    0x5e4b7c2cbe50 ---------A   00220  IF H<=D-1000 THEN 300
    0x5e4b7c2cc2d0 ---------A   00230  PRINT "***  THINK AGAIN. YOU ONLY HAVE";D-1000;"SQUARE MILES OF FARM LAND."
    0x5e4b7c2cc620 ---------A   00240  IF X<>0 THEN 200
    0x5e4b7c2cc830 ---------A   00250  PRINT:PRINT "(FOREIGN INDUSTRY WILL ONLY BUY FARM LAND BECAUSE"
    0x5e4b7c2cc9d0 ---------A   00260  PRINT "FOREST LAND IS UNECONOMICAL TO STRIP MINE DUE TO TREES,"
    0x5e4b7c2ccb40 ---------A   00270  PRINT "THICKER TOP SOIL, ETC.)"
    0x5e4b7c2ccd60 ---------A   00280  X=1
    0x5e4b7c2ccdd0 ---------A   00299  GOTO 200
    0x5e4b7c2cd200 ---------A T 00300  D=INT(D-H)
    0x5e4b7c2cd7c0 ---------A   00310  A=INT(A+(H*W))
    0x5e4b7c2cd960 ---------A T 00320  PRINT "HOW MANY RALLODS WILL YOU DISTRIBUTE AMONG YOUR COUNTRYMEN";
    0x5e4b7c2cdb80 ---------A   00340  INPUT I
    0x5e4b7c2cdde0 ---------A   00342  IF I<0 THEN 320
    0x5e4b7c2ce060 ---------A   00350  IF I<A THEN 400
    0x5e4b7c2ce310 ---------A   00360  IF I=A THEN 380
    0x5e4b7c2ce690 ---------A   00370  PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS IN THE TREASURY"
    0x5e4b7c2ce710 ---------A   00375  GOTO 320
    0x5e4b7c2ce9e0 ---------A T 00380  J=0
    0x5e4b7c2cecb0 ---------A   00390  K=0
    0x5e4b7c2ceec0 ---------A   00395  A=0
    0x5e4b7c2cef30 ---------A   00399  GOTO 1000
    0x5e4b7c2cf380 ---------A T 00400  A=INT(A-I)
    0x5e4b7c2cf510 ---------A T 00410  PRINT "HOW MANY SQUARE MILES DO YOU WISH TO PLANT";
    0x5e4b7c2cfa80 ---------A   00420  INPUT J
    0x5e4b7c2cfce0 ---------A   00421  IF J<0 THEN 410
    0x5e4b7c2d0090 ---------A   00422  IF J<=B*2 THEN 426
    0x5e4b7c2d0220 ---------A   00423  PRINT "   SORRY, BUT EACH COUNTRYMAN CAN ONLY PLANT 2 SQ. MILES."
    0x5e4b7c2d02b0 ---------A   00424  GOTO 410
    0x5e4b7c2d0650 ---------A T 00426  IF J<=D-1000 THEN 430
    0x5e4b7c2d0ad0 ---------A   00427  PRINT "   SORRY, BUT YOU'VE ONLY";D-1000;"SQ. MILES OF FARM LAND."
    0x5e4b7c2d0b50 ---------A   00428  GOTO 410
    0x5e4b7c2d1040 ---------A T 00430  U1=INT(J*V9)
    0x5e4b7c2d12b0 ---------A   00435  IF U1<A THEN 500
    0x5e4b7c2d1570 ---------A   00440  IF U1=A THEN 490
    0x5e4b7c2d18f0 ---------A   00450  PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS LEFT IN THE TREASURY."
    0x5e4b7c2d1970 ---------A   00460  GOTO 410
    0x5e4b7c2d1b80 ---------A T 00490  K=0
    0x5e4b7c2d1d90 ---------A   00495  A=0
    0x5e4b7c2d1e00 ---------A   00499  GOTO 1000
    0x5e4b7c2d2180 ---------A T 00500  A=A-U1
    0x5e4b7c2d2320 ---------A T 00510  PRINT "HOW MANY RALLODS DO YOU WISH TO SPEND ON POLLUTION CONTROL";
    0x5e4b7c2d2480 ---------A   00520  INPUT K
    0x5e4b7c2d26e0 ---------A   00522  IF K<0 THEN 510
    0x5e4b7c2d2990 ---------A   00530  IF K<=A THEN 1000
    0x5e4b7c2d2d00 ---------A   00540  PRINT "   THINK AGAIN. YOU ONLY HAVE ";A;" RALLODS REMAINING."
    0x5e4b7c2d2d80 ---------A   00550  GOTO 510
    0x5e4b7c2d2fd0 ---------A T 00600  IF H<>0 THEN 1002
    0x5e4b7c2d3230 ---------A   00602  IF I<>0 THEN 1002
    0x5e4b7c2d3490 ---------A   00604  IF J<>0 THEN 1002
    0x5e4b7c2d36f0 ---------A   00606  IF K<>0 THEN 1002
    0x5e4b7c2d3770 ---------A   00609  PRINT
    0x5e4b7c2d3900 ---------A   00612  PRINT "GOODBYE."
    0x5e4b7c2d3ac0 ---------A   00614  PRINT "(IF YOU WISH TO CONTINUE THIS GAME AT A LATER DATE, ANSWER"
    0x5e4b7c2d3c60 ---------A   00616  PRINT "'AGAIN' WHEN ASKED IF YOU WANT INSTRUCTIONS AT THE START"
    0x5e4b7c2d3dc0 ---------A   00617  PRINT "OF THE GAME)."
    0x5e4b7c2d3e20 ---------A   00618  STOP
    0x5e4b7c2d3ea0 ---------A T 01000  GOTO 600
    0x5e4b7c2d3f10 ---------A T 01002  PRINT
    0x5e4b7c2d3f90 ---------A   01003  PRINT
    0x5e4b7c2d43d0 ---------A   01010  A=INT(A-K)
    0x5e4b7c2d46d0 ---------A   01020  A4=A
    0x5e4b7c2d4c30 ---------A   01100  IF INT(I/100-B)>=0 THEN 1120
    0x5e4b7c2d4fc0 ---------A   01105  IF I/100<50 THEN 1700
    0x5e4b7c2d5580 ---------A   01110  PRINT INT(B-(I/100));"COUNTRYMEN DIED OF STARVATION"
    0x5e4b7c2d5c80 ---------A T 01120  F1=INT(RND(1)*(2000-D))
    0x5e4b7c2d5ed0 ---------A   01122  IF K<25 THEN 1130
    0x5e4b7c2d6450 ---------A   01125  F1=INT(F1/(K/25))
    0x5e4b7c2d66d0 ---------A T 01130  IF F1<=0 THEN 1150
    0x5e4b7c2d6970 ---------A   01140  PRINT F1;"COUNTRYMEN DIED OF CARBON-MONOXIDE AND DUST INHALATION"
    0x5e4b7c2d6f10 ---------A T 01150  IF INT((I/100)-B)<0 THEN 1170
    0x5e4b7c2d7170 ---------A   01160  IF F1>0 THEN 1180
    0x5e4b7c2d7220 ---------A   01165  GOTO 1200
    0x5e4b7c2d7aa0 ---------A T 01170  PRINT "   YOU WERE FORCED TO SPEND";INT((F1+(B-(I/100)))*9);
    0x5e4b7c2d7c20 ---------A   01172  PRINT "RALLODS ON FUNERAL EXPENSES"
    0x5e4b7c2d83d0 ---------A   01174  B5=INT(F1+(B-(I/100)))
    0x5e4b7c2d8d40 ---------A   01175  A=INT(A-((F1+(B-(I/100)))*9))
    0x5e4b7c2d8de0 ---------A   01176  GOTO 1185
    0x5e4b7c2d9350 ---------A T 01180  PRINT "   YOU WERE FORCED TO SPEND ";INT(F1*9);"RALLODS ON ";
    0x5e4b7c2d94b0 ---------A   01181  PRINT "FUNERAL EXPENSES."
    0x5e4b7c2d96f0 ---------A   01182  B5=F1
    0x5e4b7c2d9c60 ---------A   01183  A=INT(A-(F1*9))
    0x5e4b7c2d9ee0 ---------A T 01185  IF A>=0 THEN 1194
    0x5e4b7c2da070 ---------A   01187  PRINT "   INSUFFICIENT RESERVES TO COVER COST - LAND WAS SOLD"
    0x5e4b7c2da610 ---------A   01189  D=INT(D+(A/W))
    0x5e4b7c2da820 ---------A   01190  A=0
    0x5e4b7c2dac50 ---------A T 01194  B=INT(B-B5)
    0x5e4b7c2daeb0 ---------A T 01200  IF H=0 THEN 1250
    0x5e4b7c2dc0e0 ---------A   01220  C1=INT(H+(RND(1)*10)-(RND(1)*20))
    0x5e4b7c2dc330 ---------A   01224  IF C>0 THEN 1230
    0x5e4b7c2dc690 ---------A   01226  C1=C1+20
    0x5e4b7c2dc930 ---------A T 01230  PRINT C1;"WORKERS CAME TO THE COUNTRY AND";
    0x5e4b7c2dd920 ---------A T 01250  P1=INT(((I/100-B)/10)+(K/25)-((2000-D)/50)-(F1/2))
    0x5e4b7c2ddc70 ---------A   01255  PRINT ABS(P1);"COUNTRYMEN ";
    0x5e4b7c2dded0 ---------A   01260  IF P1<0 THEN 1275
    0x5e4b7c2de050 ---------A   01265  PRINT "CAME TO";
    0x5e4b7c2de0d0 ---------A   01270  GOTO 1280
    0x5e4b7c2de250 ---------A T 01275  PRINT "LEFT";
    0x5e4b7c2de3b0 ---------A T 01280  PRINT " THE ISLAND."
    0x5e4b7c2de7f0 ---------A   01290  B=INT(B+P1)
    0x5e4b7c2dec40 ---------A   01292  C=INT(C+C1)
    0x5e4b7c2df5f0 ---------A   01305  U2=INT(((2000-D)*((RND(1)+1.5)/2)))
    0x5e4b7c2df860 ---------A   01310  IF C=0 THEN 1324
    0x5e4b7c2dfcc0 ---------A   01320  PRINT "OF ";INT(J);"SQ. MILES PLANTED,";
    0x5e4b7c2dff40 ---------A T 01324  IF J>U2 THEN 1330
    0x5e4b7c2e01b0 ---------A   01326  U2=J
    0x5e4b7c2e0700 ---------A T 01330  PRINT " YOU HARVESTED ";INT(J-U2);"SQ. MILES OF CROPS."
    0x5e4b7c2e0960 ---------A   01340  IF U2=0 THEN 1370
    0x5e4b7c2e0c90 ---------A   01344  IF T1>=2 THEN 1370
    0x5e4b7c2e0e10 ---------A   01350  PRINT "   (DUE TO ";
    0x5e4b7c2e1080 ---------A   01355  IF T1=0 THEN 1365
    0x5e4b7c2e1230 ---------A   01360  PRINT "INCREASED ";
    0x5e4b7c2e13c0 ---------A T 01365  PRINT "AIR AND WATER POLLUTION FROM FOREIGN INDUSTRY.)"
    0x5e4b7c2e1b70 ---------A T 01370  Q=INT((J-U2)*(W/2))
    0x5e4b7c2e1fa0 ---------A   01380  PRINT "MAKING";INT(Q);"RALLODS."
    0x5e4b7c2e23f0 ---------A   01390  A=INT(A+Q)
    0x5e4b7c2e2d90 ---------A   01400  V1=INT(((B-P1)*22)+(RND(1)*500))
    0x5e4b7c2e33d0 ---------A   01405  V2=INT((2000-D)*15)
    0x5e4b7c2e3a10 ---------A   01410  PRINT " YOU MADE";ABS(INT(V1-V2));"RALLODS FROM TOURIST TRADE."
    0x5e4b7c2e3c80 ---------A   01420  IF V2=0 THEN 1450
    0x5e4b7c2e40f0 ---------A   01425  IF V1-V2>=V3 THEN 1450
    0x5e4b7c2e4270 ---------A   01430  PRINT "   DECREASE BECAUSE ";
    0x5e4b7c2e4730 ---------A   01435  G1=10*RND(1)
    0x5e4b7c2e4980 ---------A   01440  IF G1<=2 THEN 1460
    0x5e4b7c2e4be0 ---------A   01442  IF G1<=4 THEN 1465
    0x5e4b7c2e4e40 ---------A   01444  IF G1<=6 THEN 1470
    0x5e4b7c2e50b0 ---------A   01446  IF G1<=8 THEN 1475
    0x5e4b7c2e5310 ---------A   01448  IF G1<=10 THEN 1480
    0x5e4b7c2e5750 ---------A T 01450  V3=INT(A+V3)
    0x5e4b7c2e5b80 ---------A   01451  A=INT(A+V3)
    0x5e4b7c2e5c20 ---------A   01452  GOTO 1500
    0x5e4b7c2e5d90 ---------A T 01460  PRINT "FISH POPULATION HAS DWINDLED DUE TO WATER POLLUTION."
    0x5e4b7c2e5e40 ---------A   01462  GOTO 1450
    0x5e4b7c2e5fb0 ---------A T 01465  PRINT "AIR POLLUTION IS KILLING GAME BIRD POPULATION."
    0x5e4b7c2e6060 ---------A   01467  GOTO 1450
    0x5e4b7c2e61d0 ---------A T 01470  PRINT "MINERAL BATHS ARE BEING RUINED BY WATER POLLUTION."
    0x5e4b7c2e6280 ---------A   01472  GOTO 1450
    0x5e4b7c2e63f0 ---------A T 01475  PRINT "UNPLEASANT SMOG IS DISCOURAGING SUN BATHERS."
    0x5e4b7c2e64a0 ---------A   01477  GOTO 1450
    0x5e4b7c2e6610 ---------A T 01480  PRINT "HOTELS ARE LOOKING SHABBY DUE TO SMOG GRIT."
    0x5e4b7c2e66a0 ---------A   01482  GOTO 1450
    0x5e4b7c2e68f0 ---------A T 01500  IF B5>200 THEN 1600
    0x5e4b7c2e6b60 ---------A   01505  IF B<343 THEN 1700
    0x5e4b7c2e6f00 ---------A   01510  IF (A4/100)>5 THEN 1800
    0x5e4b7c2e7190 ---------A T 01515  IF C>B THEN 1550
    0x5e4b7c2e75d0 ---------A   01520  IF N5-1=X5 THEN 1900
    0x5e4b7c2e7650 ---------A   01545  GOTO 2000
    0x5e4b7c2e76c0 ---------A T 01550  PRINT
    0x5e4b7c2e7770 ---------A   01552  PRINT
    0x5e4b7c2e7920 ---------A   01560  PRINT "THE NUMBER OF FOREIGN WORKERS HAS EXCEEDED THE NUMBER"
    0x5e4b7c2e7ab0 ---------A   01562  PRINT "OF COUNTRYMEN. AS A MINORITY, THEY HAVE REVOLTED AND"
    0x5e4b7c2e7c30 ---------A   01564  PRINT "TAKEN OVER THE COUNTRY."
    0x5e4b7c2e7f80 ---------A T 01570  IF RND(1)<=.5 THEN 1580
    0x5e4b7c2e8110 ---------A   01574  PRINT "YOU HAVE BEEN THROWN OUT OF OFFICE AND ARE NOW"
    0x5e4b7c2e8270 ---------A   01576  PRINT "RESIDING IN PRISON."
    0x5e4b7c2e8310 ---------A   01578  GOTO 1590
    0x5e4b7c2e8470 ---------A T 01580  PRINT "YOU HAVE BEEN ASSASSINATED."
    0x5e4b7c2e84f0 ---------A T 01590  PRINT
    0x5e4b7c2e8570 ---------A   01592  PRINT
    0x5e4b7c2e85d0 ---------A   01596  STOP
    0x5e4b7c2e8650 ---------A T 01600  PRINT
    0x5e4b7c2e86f0 ---------A   01602  PRINT
    0x5e4b7c2e8990 ---------A   01610  PRINT B5;"COUNTRYMEN DIED IN ONE YEAR!!!!!"
    0x5e4b7c2e8b40 ---------A   01615  PRINT "DUE TO THIS EXTREME MISMANAGEMENT, YOU HAVE NOT ONLY"
    0x5e4b7c2e8cc0 ---------A   01620  PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE, BUT YOU"
    0x5e4b7c2e9260 ---------A   01622  M6=INT(RND(1)*10)
    0x5e4b7c2e94b0 ---------A   01625  IF M6<=3 THEN 1670
    0x5e4b7c2e9720 ---------A   01630  IF M6<=6 THEN 1680
    0x5e4b7c2e99a0 ---------A   01635  IF M6<=10 THEN 1690
    0x5e4b7c2e9b10 ---------A T 01670  PRINT "ALSO HAD YOUR LEFT EYE GOUGED OUT!"
    0x5e4b7c2e9bb0 ---------A   01672  GOTO 1590
    0x5e4b7c2e9d20 ---------A T 01680  PRINT "HAVE ALSO GAINED A VERY BAD REPUTATION."
    0x5e4b7c2e9dc0 ---------A   01682  GOTO 1590
    0x5e4b7c2e9f30 ---------A T 01690  PRINT "HAVE ALSO BEEN DECLARED NATIONAL FINK."
    0x5e4b7c2e9fb0 ---------A   01692  GOTO 1590
    0x5e4b7c2ea020 ---------A T 01700  PRINT
    0x5e4b7c2ea0d0 ---------A   01702  PRINT
    0x5e4b7c2ea280 ---------A   01710  PRINT "OVER ONE THIRD OF THE POPULTATION HAS DIED SINCE YOU"
    0x5e4b7c2ea410 ---------A   01715  PRINT "WERE ELECTED TO OFFICE. THE PEOPLE (REMAINING)"
    0x5e4b7c2ea570 ---------A   01720  PRINT "HATE YOUR GUTS."
    0x5e4b7c2ea600 ---------A   01730  GOTO 1570
    0x5e4b7c2ea970 ---------A T 01800  IF B5-F1<2 THEN 1515
    0x5e4b7c2eaa20 ---------A   01807  PRINT
    0x5e4b7c2eabd0 ---------A   01815  PRINT "MONEY WAS LEFT OVER IN THE TREASURY WHICH YOU DID"
    0x5e4b7c2ead80 ---------A   01820  PRINT "NOT SPEND. AS A RESULT, SOME OF YOUR COUNTRYMEN DIED"
    0x5e4b7c2eaf30 ---------A   01825  PRINT "OF STARVATION. THE PUBLIC IS ENRAGED AND YOU HAVE"
    0x5e4b7c2eb0c0 ---------A   01830  PRINT "BEEN FORCED TO EITHER RESIGN OR COMMIT SUICIDE."
    0x5e4b7c2eb250 ---------A   01835  PRINT "THE CHOICE IS YOURS."
    0x5e4b7c2eb3f0 ---------A   01840  PRINT "IF YOU CHOOSE THE LATTER, PLEASE TURN OFF YOUR COMPUTER"
    0x5e4b7c2eb550 ---------A   01845  PRINT "BEFORE PROCEEDING."
    0x5e4b7c2eb5d0 ---------A   01850  GOTO 1590
    0x5e4b7c2eb640 ---------A T 01900  PRINT
    0x5e4b7c2eb6e0 ---------A   01902  PRINT
    0x5e4b7c2eb880 ---------A   01920  PRINT "CONGRATULATIONS!!!!!!!!!!!!!!!!!!"
    0x5e4b7c2ebc20 ---------A   01925  PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR";N5;"YEAR TERM"
    0x5e4b7c2ebdd0 ---------A   01930  PRINT "OF OFFICE. YOU WERE, OF COURSE, EXTREMELY LUCKY, BUT"
    0x5e4b7c2ebf90 ---------A   01935  PRINT "NEVERTHELESS, IT'S QUITE AN ACHIEVEMENT. GOODBYE AND GOOD"
    0x5e4b7c2ec130 ---------A   01940  PRINT "LUCK - YOU'LL PROBABLY NEED IT IF YOU'RE THE TYPE THAT"
    0x5e4b7c2ec290 ---------A   01945  PRINT "PLAYS THIS GAME."
    0x5e4b7c2ec340 ---------A   01950  GOTO 1590
    0x5e4b7c2ec4e0 ---------A T 01960  PRINT "HOW MANY YEARS HAD YOU BEEN IN OFFICE WHEN INTERRUPTED";
    0x5e4b7c2ec640 ---------A   01961  INPUT X5
    0x5e4b7c2ec8a0 ---------A   01962  IF X5<0 THEN 1590
    0x5e4b7c2ecb30 ---------A   01963  IF X5<8 THEN 1969
    0x5e4b7c2eceb0 ---------A   01965  PRINT "   COME ON, YOUR TERM IN OFFICE IS ONLY";N5;"YEARS."
    0x5e4b7c2ecf50 ---------A   01967  GOTO 1960
    0x5e4b7c2ed0d0 ---------A T 01969  PRINT "HOW MUCH DID YOU HAVE IN THE TREASURY";
    0x5e4b7c2ed230 ---------A   01970  INPUT A
    0x5e4b7c2ed4a0 ---------A   01971  IF A<0 THEN 1590
    0x5e4b7c2ed620 ---------A   01975  PRINT "HOW MANY COUNTRYMEN";    
    0x5e4b7c2ed780 ---------A   01976  INPUT B
    0x5e4b7c2ed9f0 ---------A   01977  IF B<0 THEN 1590
    0x5e4b7c2edb70 ---------A   01980  PRINT "HOW MANY WORKERS";
    0x5e4b7c2edcd0 ---------A   01981  INPUT C
    0x5e4b7c2edf50 ---------A   01982  IF C<0 THEN 1590
    0x5e4b7c2ee0e0 ---------A T 01990  PRINT "HOW MANY SQUARE MILES OF LAND";
    0x5e4b7c2db010 ---------A   01991  INPUT D
    0x5e4b7c2db280 ---------A   01992  IF D<0 THEN 1590
    0x5e4b7c2db4e0 ---------A   01993  IF D>2000 THEN 1996
    0x5e4b7c2ef1a0 ---------A   01994  IF D>1000 THEN 100
    0x5e4b7c2ef350 ---------A T 01996  PRINT "   COME ON, YOU STARTED WITH 1000 SQ. MILES OF FARM LAND"
    0x5e4b7c2ef4d0 ---------A   01997  PRINT "   AND 10,000 SQ. MILES OF FOREST LAND."
    0x5e4b7c2ef550 ---------A   01998  GOTO 1990
    0x5e4b7c2ef880 ---------A T 02000  X5=X5+1
    0x5e4b7c2efa90 ---------A   02020  B5=0
    0x5e4b7c2efb00 ---------A   02040  GOTO 100
    0x5e4b7c2efb50 ---------A   02046  END
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
   A) 0x5e4b7c2bd6d0 (00001)   0x5e4b7c2bd6d0 (00001)   0x5e4b7c2efb50 (02046)   0x5e4b7c2efb50 (02046)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/king.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e4b7c2bd6d0 ---------A   00001  PRINT TAB(34);"KING"
    0x5e4b7c2bd670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e4b7c2be2d0 ----------   00003  PRINT
    0x5e4b7c2be910 ----------        a PRINT
    0x5e4b7c2ae2b0 ---------A        b PRINT
    0x5e4b7c2bf1b0 ---------A   00004  PRINT "DO YOU WANT INSTRUCTIONS";
    0x5e4b7c2be040 ---------A   00005  INPUT Z$
    0x5e4b7c2bfed0 ---------A   00006  N5=8
    0x5e4b7c2be660 ---------A   00010  IF LEFT$(Z$,1)="N" THEN 47
    0x5e4b7c2c5840 ---------A   00011  IF Z$="AGAIN" THEN 1960
    0x5e4b7c2c58a0 ----------   00012  PRINT
    0x5e4b7c2c5900 ----------        a PRINT
    0x5e4b7c2c5960 ---------A        b PRINT
    0x5e4b7c2c5a40 ---------A   00020  PRINT "CONGRATULATIONS! YOU'VE JUST BEEN ELECTED PREMIER OF SETATS"
    0x5e4b7c2c5bb0 ---------A   00022  PRINT "DETINU, A SMALL COMMUNIST ISLAND 30 BY 70 MILES LONG. YOUR"
    0x5e4b7c2c5d70 ---------A   00024  PRINT "JOB IS TO DECIDE UPON THE CONTRY'S BUDGET AND DISTRIBUTE"
    0x5e4b7c2c5f20 ---------A   00026  PRINT "MONEY TO YOUR COUNTRYMEN FROM THE COMMUNAL TREASURY."
    0x5e4b7c2c60e0 ---------A   00028  PRINT "THE MONEY SYSTEM IS RALLODS, AND EACH PERSON NEEDS 100"
    0x5e4b7c2c62a0 ---------A   00030  PRINT "RALLODS PER YEAR TO SURVIVE. YOUR COUNTRY'S INCOME COMES"
    0x5e4b7c2c6460 ---------A   00032  PRINT "FROM FARM PRODUCE AND TOURISTS VISITING YOUR MAGNIFICENT"
    0x5e4b7c2c6620 ---------A   00034  PRINT "FORESTS, HUNTING, FISHING, ETC. HALF YOUR LAND IS FARM LAND"
    0x5e4b7c2c67e0 ---------A   00036  PRINT "WHICH ALSO HAS AN EXCELLENT MINERAL CONTENT AND MAY BE SOLD"
    0x5e4b7c2c69a0 ---------A   00038  PRINT "TO FOREIGN INDUSTRY (STRIP MINING) WHO IMPORT AND SUPPORT"
    0x5e4b7c2c6b10 ---------A   00040  PRINT "THEIR OWN WORKERS. CROPS COST BETWEEN 10 AND 15 RALLODS PER"
    0x5e4b7c2c6c80 ---------A   00042  PRINT "SQUARE MILE TO PLANT."
    0x5e4b7c2c6fc0 ---------A   00044  PRINT "YOUR GOAL IS TO COMPLETE YOUR";N5;"YEAR TERM OF OFFICE."
    0x5e4b7c2c7120 ---------A   00046  PRINT "GOOD LUCK!"
    0x5e4b7c2c71c0 ---------A T 00047  PRINT
    0x5e4b7c2c7ba0 ---------A   00050  A=INT(60000+(1000*RND(1))-(1000*RND(1)))
    0x5e4b7c2c8590 ---------A   00055  B=INT(500+(10*RND(1))-(10*RND(1)))
    0x5e4b7c2c8860 ---------A   00065  D=2000
    0x5e4b7c2c8ef0 ---------A T 00100  W=INT(10*RND(1)+95)
    0x5e4b7c2c8f80 ---------A   00102  PRINT
    0x5e4b7c2c9300 ---------A   00105  PRINT "YOU NOW HAVE ";A;" RALLODS IN THE TREASURY."
    0x5e4b7c2c9540 ----------   00110  PRINT INT(B);
    0x5e4b7c2c96d0 ---------A        a PRINT "COUNTRYMEN, ";
    0x5e4b7c2c9ef0 ---------A   00115  V9=INT(((RND(1)/2)*10+10))
    0x5e4b7c2ca210 ---------A   00120  IF C=0 THEN 140
    0x5e4b7c2ca7a0 ---------A   00130  PRINT INT(C);"FOREIGN WORKERS, ";
    0x5e4b7c2cac00 ---------A T 00140  PRINT "AND";INT(D);"SQ. MILES OF LAND."
    0x5e4b7c2caea0 ---------A   00150  PRINT "THIS YEAR INDUSTRY WILL BUY LAND FOR";W;
    0x5e4b7c2cb040 ---------A   00152  PRINT "RALLODS PER SQUARE MILE."
    0x5e4b7c2cb3b0 ---------A   00155  PRINT "LAND CURRENTLY COSTS";V9;"RALLODS PER SQUARE MILE TO PLANT."
    0x5e4b7c2cb460 ---------A   00162  PRINT
    0x5e4b7c2cb600 ---------A T 00200  PRINT "HOW MANY SQUARE MILES DO YOU WISH TO SELL TO INDUSTRY";
    0x5e4b7c2cb820 ---------A   00210  INPUT H
    0x5e4b7c2cba90 ---------A   00215  IF H<0 THEN 200
    0x5e4b7c2cbe50 ---------A   00220  IF H<=D-1000 THEN 300
    0x5e4b7c2cc2d0 ---------A   00230  PRINT "***  THINK AGAIN. YOU ONLY HAVE";D-1000;"SQUARE MILES OF FARM LAND."
    0x5e4b7c2cc620 ---------A   00240  IF X<>0 THEN 200
    0x5e4b7c2cc680 ----------   00250  PRINT
    0x5e4b7c2cc830 ---------A        a PRINT "(FOREIGN INDUSTRY WILL ONLY BUY FARM LAND BECAUSE"
    0x5e4b7c2cc9d0 ---------A   00260  PRINT "FOREST LAND IS UNECONOMICAL TO STRIP MINE DUE TO TREES,"
    0x5e4b7c2ccb40 ---------A   00270  PRINT "THICKER TOP SOIL, ETC.)"
    0x5e4b7c2ccd60 ---------A   00280  X=1
    0x5e4b7c2ccdd0 ---------A   00299  GOTO 200
    0x5e4b7c2cd200 ---------A T 00300  D=INT(D-H)
    0x5e4b7c2cd7c0 ---------A   00310  A=INT(A+(H*W))
    0x5e4b7c2cd960 ---------A T 00320  PRINT "HOW MANY RALLODS WILL YOU DISTRIBUTE AMONG YOUR COUNTRYMEN";
    0x5e4b7c2cdb80 ---------A   00340  INPUT I
    0x5e4b7c2cdde0 ---------A   00342  IF I<0 THEN 320
    0x5e4b7c2ce060 ---------A   00350  IF I<A THEN 400
    0x5e4b7c2ce310 ---------A   00360  IF I=A THEN 380
    0x5e4b7c2ce690 ---------A   00370  PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS IN THE TREASURY"
    0x5e4b7c2ce710 ---------A   00375  GOTO 320
    0x5e4b7c2ce9e0 ---------A T 00380  J=0
    0x5e4b7c2cecb0 ---------A   00390  K=0
    0x5e4b7c2ceec0 ---------A   00395  A=0
    0x5e4b7c2cef30 ---------A   00399  GOTO 1000
    0x5e4b7c2cf380 ---------A T 00400  A=INT(A-I)
    0x5e4b7c2cf510 ---------A T 00410  PRINT "HOW MANY SQUARE MILES DO YOU WISH TO PLANT";
    0x5e4b7c2cfa80 ---------A   00420  INPUT J
    0x5e4b7c2cfce0 ---------A   00421  IF J<0 THEN 410
    0x5e4b7c2d0090 ---------A   00422  IF J<=B*2 THEN 426
    0x5e4b7c2d0220 ---------A   00423  PRINT "   SORRY, BUT EACH COUNTRYMAN CAN ONLY PLANT 2 SQ. MILES."
    0x5e4b7c2d02b0 ---------A   00424  GOTO 410
    0x5e4b7c2d0650 ---------A T 00426  IF J<=D-1000 THEN 430
    0x5e4b7c2d0ad0 ---------A   00427  PRINT "   SORRY, BUT YOU'VE ONLY";D-1000;"SQ. MILES OF FARM LAND."
    0x5e4b7c2d0b50 ---------A   00428  GOTO 410
    0x5e4b7c2d1040 ---------A T 00430  U1=INT(J*V9)
    0x5e4b7c2d12b0 ---------A   00435  IF U1<A THEN 500
    0x5e4b7c2d1570 ---------A   00440  IF U1=A THEN 490
    0x5e4b7c2d18f0 ---------A   00450  PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS LEFT IN THE TREASURY."
    0x5e4b7c2d1970 ---------A   00460  GOTO 410
    0x5e4b7c2d1b80 ---------A T 00490  K=0
    0x5e4b7c2d1d90 ---------A   00495  A=0
    0x5e4b7c2d1e00 ---------A   00499  GOTO 1000
    0x5e4b7c2d2180 ---------A T 00500  A=A-U1
    0x5e4b7c2d2320 ---------A T 00510  PRINT "HOW MANY RALLODS DO YOU WISH TO SPEND ON POLLUTION CONTROL";
    0x5e4b7c2d2480 ---------A   00520  INPUT K
    0x5e4b7c2d26e0 ---------A   00522  IF K<0 THEN 510
    0x5e4b7c2d2990 ---------A   00530  IF K<=A THEN 1000
    0x5e4b7c2d2d00 ---------A   00540  PRINT "   THINK AGAIN. YOU ONLY HAVE ";A;" RALLODS REMAINING."
    0x5e4b7c2d2d80 ---------A   00550  GOTO 510
    0x5e4b7c2d2fd0 ---------A T 00600  IF H<>0 THEN 1002
    0x5e4b7c2d3230 ---------A   00602  IF I<>0 THEN 1002
    0x5e4b7c2d3490 ---------A   00604  IF J<>0 THEN 1002
    0x5e4b7c2d36f0 ---------A   00606  IF K<>0 THEN 1002
    0x5e4b7c2d3770 ---------A   00609  PRINT
    0x5e4b7c2d3900 ---------A   00612  PRINT "GOODBYE."
    0x5e4b7c2d3ac0 ---------A   00614  PRINT "(IF YOU WISH TO CONTINUE THIS GAME AT A LATER DATE, ANSWER"
    0x5e4b7c2d3c60 ---------A   00616  PRINT "'AGAIN' WHEN ASKED IF YOU WANT INSTRUCTIONS AT THE START"
    0x5e4b7c2d3dc0 ---------A   00617  PRINT "OF THE GAME)."
    0x5e4b7c2d3e20 ---------A   00618  STOP
    0x5e4b7c2d3ea0 ---------A T 01000  GOTO 600
    0x5e4b7c2d3f10 ---------A T 01002  PRINT
    0x5e4b7c2d3f90 ---------A   01003  PRINT
    0x5e4b7c2d43d0 ---------A   01010  A=INT(A-K)
    0x5e4b7c2d46d0 ---------A   01020  A4=A
    0x5e4b7c2d4c30 ---------A   01100  IF INT(I/100-B)>=0 THEN 1120
    0x5e4b7c2d4fc0 ---------A   01105  IF I/100<50 THEN 1700
    0x5e4b7c2d5580 ---------A   01110  PRINT INT(B-(I/100));"COUNTRYMEN DIED OF STARVATION"
    0x5e4b7c2d5c80 ---------A T 01120  F1=INT(RND(1)*(2000-D))
    0x5e4b7c2d5ed0 ---------A   01122  IF K<25 THEN 1130
    0x5e4b7c2d6450 ---------A   01125  F1=INT(F1/(K/25))
    0x5e4b7c2d66d0 ---------A T 01130  IF F1<=0 THEN 1150
    0x5e4b7c2d6970 ---------A   01140  PRINT F1;"COUNTRYMEN DIED OF CARBON-MONOXIDE AND DUST INHALATION"
    0x5e4b7c2d6f10 ---------A T 01150  IF INT((I/100)-B)<0 THEN 1170
    0x5e4b7c2d7170 ---------A   01160  IF F1>0 THEN 1180
    0x5e4b7c2d7220 ---------A   01165  GOTO 1200
    0x5e4b7c2d7aa0 ---------A T 01170  PRINT "   YOU WERE FORCED TO SPEND";INT((F1+(B-(I/100)))*9);
    0x5e4b7c2d7c20 ---------A   01172  PRINT "RALLODS ON FUNERAL EXPENSES"
    0x5e4b7c2d83d0 ---------A   01174  B5=INT(F1+(B-(I/100)))
    0x5e4b7c2d8d40 ---------A   01175  A=INT(A-((F1+(B-(I/100)))*9))
    0x5e4b7c2d8de0 ---------A   01176  GOTO 1185
    0x5e4b7c2d9350 ---------A T 01180  PRINT "   YOU WERE FORCED TO SPEND ";INT(F1*9);"RALLODS ON ";
    0x5e4b7c2d94b0 ---------A   01181  PRINT "FUNERAL EXPENSES."
    0x5e4b7c2d96f0 ---------A   01182  B5=F1
    0x5e4b7c2d9c60 ---------A   01183  A=INT(A-(F1*9))
    0x5e4b7c2d9ee0 ---------A T 01185  IF A>=0 THEN 1194
    0x5e4b7c2da070 ---------A   01187  PRINT "   INSUFFICIENT RESERVES TO COVER COST - LAND WAS SOLD"
    0x5e4b7c2da610 ---------A   01189  D=INT(D+(A/W))
    0x5e4b7c2da820 ---------A   01190  A=0
    0x5e4b7c2dac50 ---------A T 01194  B=INT(B-B5)
    0x5e4b7c2daeb0 ---------A T 01200  IF H=0 THEN 1250
    0x5e4b7c2dc0e0 ---------A   01220  C1=INT(H+(RND(1)*10)-(RND(1)*20))
    0x5e4b7c2dc330 ---------A   01224  IF C>0 THEN 1230
    0x5e4b7c2dc690 ---------A   01226  C1=C1+20
    0x5e4b7c2dc930 ---------A T 01230  PRINT C1;"WORKERS CAME TO THE COUNTRY AND";
    0x5e4b7c2dd920 ---------A T 01250  P1=INT(((I/100-B)/10)+(K/25)-((2000-D)/50)-(F1/2))
    0x5e4b7c2ddc70 ---------A   01255  PRINT ABS(P1);"COUNTRYMEN ";
    0x5e4b7c2dded0 ---------A   01260  IF P1<0 THEN 1275
    0x5e4b7c2de050 ---------A   01265  PRINT "CAME TO";
    0x5e4b7c2de0d0 ---------A   01270  GOTO 1280
    0x5e4b7c2de250 ---------A T 01275  PRINT "LEFT";
    0x5e4b7c2de3b0 ---------A T 01280  PRINT " THE ISLAND."
    0x5e4b7c2de7f0 ---------A   01290  B=INT(B+P1)
    0x5e4b7c2dec40 ---------A   01292  C=INT(C+C1)
    0x5e4b7c2df5f0 ---------A   01305  U2=INT(((2000-D)*((RND(1)+1.5)/2)))
    0x5e4b7c2df860 ---------A   01310  IF C=0 THEN 1324
    0x5e4b7c2dfcc0 ---------A   01320  PRINT "OF ";INT(J);"SQ. MILES PLANTED,";
    0x5e4b7c2dff40 ---------A T 01324  IF J>U2 THEN 1330
    0x5e4b7c2e01b0 ---------A   01326  U2=J
    0x5e4b7c2e0700 ---------A T 01330  PRINT " YOU HARVESTED ";INT(J-U2);"SQ. MILES OF CROPS."
    0x5e4b7c2e0960 ---------A   01340  IF U2=0 THEN 1370
    0x5e4b7c2e0c90 ---------A   01344  IF T1>=2 THEN 1370
    0x5e4b7c2e0e10 ---------A   01350  PRINT "   (DUE TO ";
    0x5e4b7c2e1080 ---------A   01355  IF T1=0 THEN 1365
    0x5e4b7c2e1230 ---------A   01360  PRINT "INCREASED ";
    0x5e4b7c2e13c0 ---------A T 01365  PRINT "AIR AND WATER POLLUTION FROM FOREIGN INDUSTRY.)"
    0x5e4b7c2e1b70 ---------A T 01370  Q=INT((J-U2)*(W/2))
    0x5e4b7c2e1fa0 ---------A   01380  PRINT "MAKING";INT(Q);"RALLODS."
    0x5e4b7c2e23f0 ---------A   01390  A=INT(A+Q)
    0x5e4b7c2e2d90 ---------A   01400  V1=INT(((B-P1)*22)+(RND(1)*500))
    0x5e4b7c2e33d0 ---------A   01405  V2=INT((2000-D)*15)
    0x5e4b7c2e3a10 ---------A   01410  PRINT " YOU MADE";ABS(INT(V1-V2));"RALLODS FROM TOURIST TRADE."
    0x5e4b7c2e3c80 ---------A   01420  IF V2=0 THEN 1450
    0x5e4b7c2e40f0 ---------A   01425  IF V1-V2>=V3 THEN 1450
    0x5e4b7c2e4270 ---------A   01430  PRINT "   DECREASE BECAUSE ";
    0x5e4b7c2e4730 ---------A   01435  G1=10*RND(1)
    0x5e4b7c2e4980 ---------A   01440  IF G1<=2 THEN 1460
    0x5e4b7c2e4be0 ---------A   01442  IF G1<=4 THEN 1465
    0x5e4b7c2e4e40 ---------A   01444  IF G1<=6 THEN 1470
    0x5e4b7c2e50b0 ---------A   01446  IF G1<=8 THEN 1475
    0x5e4b7c2e5310 ---------A   01448  IF G1<=10 THEN 1480
    0x5e4b7c2e5750 ---------A T 01450  V3=INT(A+V3)
    0x5e4b7c2e5b80 ---------A   01451  A=INT(A+V3)
    0x5e4b7c2e5c20 ---------A   01452  GOTO 1500
    0x5e4b7c2e5d90 ---------A T 01460  PRINT "FISH POPULATION HAS DWINDLED DUE TO WATER POLLUTION."
    0x5e4b7c2e5e40 ---------A   01462  GOTO 1450
    0x5e4b7c2e5fb0 ---------A T 01465  PRINT "AIR POLLUTION IS KILLING GAME BIRD POPULATION."
    0x5e4b7c2e6060 ---------A   01467  GOTO 1450
    0x5e4b7c2e61d0 ---------A T 01470  PRINT "MINERAL BATHS ARE BEING RUINED BY WATER POLLUTION."
    0x5e4b7c2e6280 ---------A   01472  GOTO 1450
    0x5e4b7c2e63f0 ---------A T 01475  PRINT "UNPLEASANT SMOG IS DISCOURAGING SUN BATHERS."
    0x5e4b7c2e64a0 ---------A   01477  GOTO 1450
    0x5e4b7c2e6610 ---------A T 01480  PRINT "HOTELS ARE LOOKING SHABBY DUE TO SMOG GRIT."
    0x5e4b7c2e66a0 ---------A   01482  GOTO 1450
    0x5e4b7c2e68f0 ---------A T 01500  IF B5>200 THEN 1600
    0x5e4b7c2e6b60 ---------A   01505  IF B<343 THEN 1700
    0x5e4b7c2e6f00 ---------A   01510  IF (A4/100)>5 THEN 1800
    0x5e4b7c2e7190 ---------A T 01515  IF C>B THEN 1550
    0x5e4b7c2e75d0 ---------A   01520  IF N5-1=X5 THEN 1900
    0x5e4b7c2e7650 ---------A   01545  GOTO 2000
    0x5e4b7c2e76c0 ---------A T 01550  PRINT
    0x5e4b7c2e7770 ---------A   01552  PRINT
    0x5e4b7c2e7920 ---------A   01560  PRINT "THE NUMBER OF FOREIGN WORKERS HAS EXCEEDED THE NUMBER"
    0x5e4b7c2e7ab0 ---------A   01562  PRINT "OF COUNTRYMEN. AS A MINORITY, THEY HAVE REVOLTED AND"
    0x5e4b7c2e7c30 ---------A   01564  PRINT "TAKEN OVER THE COUNTRY."
    0x5e4b7c2e7f80 ---------A T 01570  IF RND(1)<=.5 THEN 1580
    0x5e4b7c2e8110 ---------A   01574  PRINT "YOU HAVE BEEN THROWN OUT OF OFFICE AND ARE NOW"
    0x5e4b7c2e8270 ---------A   01576  PRINT "RESIDING IN PRISON."
    0x5e4b7c2e8310 ---------A   01578  GOTO 1590
    0x5e4b7c2e8470 ---------A T 01580  PRINT "YOU HAVE BEEN ASSASSINATED."
    0x5e4b7c2e84f0 ---------A T 01590  PRINT
    0x5e4b7c2e8570 ---------A   01592  PRINT
    0x5e4b7c2e85d0 ---------A   01596  STOP
    0x5e4b7c2e8650 ---------A T 01600  PRINT
    0x5e4b7c2e86f0 ---------A   01602  PRINT
    0x5e4b7c2e8990 ---------A   01610  PRINT B5;"COUNTRYMEN DIED IN ONE YEAR!!!!!"
    0x5e4b7c2e8b40 ---------A   01615  PRINT "DUE TO THIS EXTREME MISMANAGEMENT, YOU HAVE NOT ONLY"
    0x5e4b7c2e8cc0 ---------A   01620  PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE, BUT YOU"
    0x5e4b7c2e9260 ---------A   01622  M6=INT(RND(1)*10)
    0x5e4b7c2e94b0 ---------A   01625  IF M6<=3 THEN 1670
    0x5e4b7c2e9720 ---------A   01630  IF M6<=6 THEN 1680
    0x5e4b7c2e99a0 ---------A   01635  IF M6<=10 THEN 1690
    0x5e4b7c2e9b10 ---------A T 01670  PRINT "ALSO HAD YOUR LEFT EYE GOUGED OUT!"
    0x5e4b7c2e9bb0 ---------A   01672  GOTO 1590
    0x5e4b7c2e9d20 ---------A T 01680  PRINT "HAVE ALSO GAINED A VERY BAD REPUTATION."
    0x5e4b7c2e9dc0 ---------A   01682  GOTO 1590
    0x5e4b7c2e9f30 ---------A T 01690  PRINT "HAVE ALSO BEEN DECLARED NATIONAL FINK."
    0x5e4b7c2e9fb0 ---------A   01692  GOTO 1590
    0x5e4b7c2ea020 ---------A T 01700  PRINT
    0x5e4b7c2ea0d0 ---------A   01702  PRINT
    0x5e4b7c2ea280 ---------A   01710  PRINT "OVER ONE THIRD OF THE POPULTATION HAS DIED SINCE YOU"
    0x5e4b7c2ea410 ---------A   01715  PRINT "WERE ELECTED TO OFFICE. THE PEOPLE (REMAINING)"
    0x5e4b7c2ea570 ---------A   01720  PRINT "HATE YOUR GUTS."
    0x5e4b7c2ea600 ---------A   01730  GOTO 1570
    0x5e4b7c2ea970 ---------A T 01800  IF B5-F1<2 THEN 1515
    0x5e4b7c2eaa20 ---------A   01807  PRINT
    0x5e4b7c2eabd0 ---------A   01815  PRINT "MONEY WAS LEFT OVER IN THE TREASURY WHICH YOU DID"
    0x5e4b7c2ead80 ---------A   01820  PRINT "NOT SPEND. AS A RESULT, SOME OF YOUR COUNTRYMEN DIED"
    0x5e4b7c2eaf30 ---------A   01825  PRINT "OF STARVATION. THE PUBLIC IS ENRAGED AND YOU HAVE"
    0x5e4b7c2eb0c0 ---------A   01830  PRINT "BEEN FORCED TO EITHER RESIGN OR COMMIT SUICIDE."
    0x5e4b7c2eb250 ---------A   01835  PRINT "THE CHOICE IS YOURS."
    0x5e4b7c2eb3f0 ---------A   01840  PRINT "IF YOU CHOOSE THE LATTER, PLEASE TURN OFF YOUR COMPUTER"
    0x5e4b7c2eb550 ---------A   01845  PRINT "BEFORE PROCEEDING."
    0x5e4b7c2eb5d0 ---------A   01850  GOTO 1590
    0x5e4b7c2eb640 ---------A T 01900  PRINT
    0x5e4b7c2eb6e0 ---------A   01902  PRINT
    0x5e4b7c2eb880 ---------A   01920  PRINT "CONGRATULATIONS!!!!!!!!!!!!!!!!!!"
    0x5e4b7c2ebc20 ---------A   01925  PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR";N5;"YEAR TERM"
    0x5e4b7c2ebdd0 ---------A   01930  PRINT "OF OFFICE. YOU WERE, OF COURSE, EXTREMELY LUCKY, BUT"
    0x5e4b7c2ebf90 ---------A   01935  PRINT "NEVERTHELESS, IT'S QUITE AN ACHIEVEMENT. GOODBYE AND GOOD"
    0x5e4b7c2ec130 ---------A   01940  PRINT "LUCK - YOU'LL PROBABLY NEED IT IF YOU'RE THE TYPE THAT"
    0x5e4b7c2ec290 ---------A   01945  PRINT "PLAYS THIS GAME."
    0x5e4b7c2ec340 ---------A   01950  GOTO 1590
    0x5e4b7c2ec4e0 ---------A T 01960  PRINT "HOW MANY YEARS HAD YOU BEEN IN OFFICE WHEN INTERRUPTED";
    0x5e4b7c2ec640 ---------A   01961  INPUT X5
    0x5e4b7c2ec8a0 ---------A   01962  IF X5<0 THEN 1590
    0x5e4b7c2ecb30 ---------A   01963  IF X5<8 THEN 1969
    0x5e4b7c2eceb0 ---------A   01965  PRINT "   COME ON, YOUR TERM IN OFFICE IS ONLY";N5;"YEARS."
    0x5e4b7c2ecf50 ---------A   01967  GOTO 1960
    0x5e4b7c2ed0d0 ---------A T 01969  PRINT "HOW MUCH DID YOU HAVE IN THE TREASURY";
    0x5e4b7c2ed230 ---------A   01970  INPUT A
    0x5e4b7c2ed4a0 ---------A   01971  IF A<0 THEN 1590
    0x5e4b7c2ed620 ---------A   01975  PRINT "HOW MANY COUNTRYMEN";    
    0x5e4b7c2ed780 ---------A   01976  INPUT B
    0x5e4b7c2ed9f0 ---------A   01977  IF B<0 THEN 1590
    0x5e4b7c2edb70 ---------A   01980  PRINT "HOW MANY WORKERS";
    0x5e4b7c2edcd0 ---------A   01981  INPUT C
    0x5e4b7c2edf50 ---------A   01982  IF C<0 THEN 1590
    0x5e4b7c2ee0e0 ---------A T 01990  PRINT "HOW MANY SQUARE MILES OF LAND";
    0x5e4b7c2db010 ---------A   01991  INPUT D
    0x5e4b7c2db280 ---------A   01992  IF D<0 THEN 1590
    0x5e4b7c2db4e0 ---------A   01993  IF D>2000 THEN 1996
    0x5e4b7c2ef1a0 ---------A   01994  IF D>1000 THEN 100
    0x5e4b7c2ef350 ---------A T 01996  PRINT "   COME ON, YOU STARTED WITH 1000 SQ. MILES OF FARM LAND"
    0x5e4b7c2ef4d0 ---------A   01997  PRINT "   AND 10,000 SQ. MILES OF FOREST LAND."
    0x5e4b7c2ef550 ---------A   01998  GOTO 1990
    0x5e4b7c2ef880 ---------A T 02000  X5=X5+1
    0x5e4b7c2efa90 ---------A   02020  B5=0
    0x5e4b7c2efb00 ---------A   02040  GOTO 100
    0x5e4b7c2efb50 ---------A   02046  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/king.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e4b7c2bd6d0 ---------A T 01000  PRINT TAB(34);"KING"
    0x5e4b7c2bd670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e4b7c2be2d0 ----------   01020  PRINT
    0x5e4b7c2be910 ----------   01030  PRINT
    0x5e4b7c2ae2b0 ---------A   01040  PRINT
    0x5e4b7c2bf1b0 ---------A   01050  PRINT "DO YOU WANT INSTRUCTIONS";
    0x5e4b7c2be040 ---------A   01060  INPUT Z$
    0x5e4b7c2bfed0 ---------A   01070  N5=8
    0x5e4b7c2be660 ---------A   01080  IF LEFT$(Z$,1)="N" THEN 1270
    0x5e4b7c2c5840 ---------A   01090  IF Z$="AGAIN" THEN 3470
    0x5e4b7c2c58a0 ----------   01100  PRINT
    0x5e4b7c2c5900 ----------   01110  PRINT
    0x5e4b7c2c5960 ---------A T 01120  PRINT
    0x5e4b7c2c5a40 ---------A T 01130  PRINT "CONGRATULATIONS! YOU'VE JUST BEEN ELECTED PREMIER OF SETATS"
    0x5e4b7c2c5bb0 ---------A   01140  PRINT "DETINU, A SMALL COMMUNIST ISLAND 30 BY 70 MILES LONG. YOUR"
    0x5e4b7c2c5d70 ---------A T 01150  PRINT "JOB IS TO DECIDE UPON THE CONTRY'S BUDGET AND DISTRIBUTE"
    0x5e4b7c2c5f20 ---------A   01160  PRINT "MONEY TO YOUR COUNTRYMEN FROM THE COMMUNAL TREASURY."
    0x5e4b7c2c60e0 ---------A T 01170  PRINT "THE MONEY SYSTEM IS RALLODS, AND EACH PERSON NEEDS 100"
    0x5e4b7c2c62a0 ---------A T 01180  PRINT "RALLODS PER YEAR TO SURVIVE. YOUR COUNTRY'S INCOME COMES"
    0x5e4b7c2c6460 ---------A   01190  PRINT "FROM FARM PRODUCE AND TOURISTS VISITING YOUR MAGNIFICENT"
    0x5e4b7c2c6620 ---------A T 01200  PRINT "FORESTS, HUNTING, FISHING, ETC. HALF YOUR LAND IS FARM LAND"
    0x5e4b7c2c67e0 ---------A   01210  PRINT "WHICH ALSO HAS AN EXCELLENT MINERAL CONTENT AND MAY BE SOLD"
    0x5e4b7c2c69a0 ---------A   01220  PRINT "TO FOREIGN INDUSTRY (STRIP MINING) WHO IMPORT AND SUPPORT"
    0x5e4b7c2c6b10 ---------A T 01230  PRINT "THEIR OWN WORKERS. CROPS COST BETWEEN 10 AND 15 RALLODS PER"
    0x5e4b7c2c6c80 ---------A   01240  PRINT "SQUARE MILE TO PLANT."
    0x5e4b7c2c6fc0 ---------A T 01250  PRINT "YOUR GOAL IS TO COMPLETE YOUR";N5;"YEAR TERM OF OFFICE."
    0x5e4b7c2c7120 ---------A   01260  PRINT "GOOD LUCK!"
    0x5e4b7c2c71c0 ---------A   01270  PRINT
    0x5e4b7c2c7ba0 ---------A T 01280  A=INT(60000+(1000*RND(1))-(1000*RND(1)))
    0x5e4b7c2c8590 ---------A   01290  B=INT(500+(10*RND(1))-(10*RND(1)))
    0x5e4b7c2c8860 ---------A   01300  D=2000
    0x5e4b7c2c8ef0 ---------A   01310  W=INT(10*RND(1)+95)
    0x5e4b7c2c8f80 ---------A   01320  PRINT
    0x5e4b7c2c9300 ---------A T 01330  PRINT "YOU NOW HAVE ";A;" RALLODS IN THE TREASURY."
    0x5e4b7c2c9540 ----------   01340  PRINT INT(B);
    0x5e4b7c2c96d0 ---------A   01350  PRINT "COUNTRYMEN, ";
    0x5e4b7c2c9ef0 ---------A   01360  V9=INT(((RND(1)/2)*10+10))
    0x5e4b7c2ca210 ---------A T 01370  IF C=0 THEN 1390
    0x5e4b7c2ca7a0 ---------A   01380  PRINT INT(C);"FOREIGN WORKERS, ";
    0x5e4b7c2cac00 ---------A   01390  PRINT "AND";INT(D);"SQ. MILES OF LAND."
    0x5e4b7c2caea0 ---------A   01400  PRINT "THIS YEAR INDUSTRY WILL BUY LAND FOR";W;
    0x5e4b7c2cb040 ---------A   01410  PRINT "RALLODS PER SQUARE MILE."
    0x5e4b7c2cb3b0 ---------A   01420  PRINT "LAND CURRENTLY COSTS";V9;"RALLODS PER SQUARE MILE TO PLANT."
    0x5e4b7c2cb460 ---------A   01430  PRINT
    0x5e4b7c2cb600 ---------A   01440  PRINT "HOW MANY SQUARE MILES DO YOU WISH TO SELL TO INDUSTRY";
    0x5e4b7c2cb820 ---------A T 01450  INPUT H
    0x5e4b7c2cba90 ---------A T 01460  IF H<0 THEN 1440
    0x5e4b7c2cbe50 ---------A T 01470  IF H<=D-1000 THEN 1560
    0x5e4b7c2cc2d0 ---------A T 01480  PRINT "***  THINK AGAIN. YOU ONLY HAVE";D-1000;"SQUARE MILES OF FARM LAND."
    0x5e4b7c2cc620 ---------A   01490  IF X<>0 THEN 1440
    0x5e4b7c2cc680 ---------- T 01500  PRINT
    0x5e4b7c2cc830 ---------A   01510  PRINT "(FOREIGN INDUSTRY WILL ONLY BUY FARM LAND BECAUSE"
    0x5e4b7c2cc9d0 ---------A   01520  PRINT "FOREST LAND IS UNECONOMICAL TO STRIP MINE DUE TO TREES,"
    0x5e4b7c2ccb40 ---------A   01530  PRINT "THICKER TOP SOIL, ETC.)"
    0x5e4b7c2ccd60 ---------A   01540  X=1
    0x5e4b7c2ccdd0 ---------A T 01550  GOTO 1440
    0x5e4b7c2cd200 ---------A   01560  D=INT(D-H)
    0x5e4b7c2cd7c0 ---------A T 01570  A=INT(A+(H*W))
    0x5e4b7c2cd960 ---------A T 01580  PRINT "HOW MANY RALLODS WILL YOU DISTRIBUTE AMONG YOUR COUNTRYMEN";
    0x5e4b7c2cdb80 ---------A T 01590  INPUT I
    0x5e4b7c2cdde0 ---------A T 01600  IF I<0 THEN 1580
    0x5e4b7c2ce060 ---------A   01610  IF I<A THEN 1690
    0x5e4b7c2ce310 ---------A   01620  IF I=A THEN 1650
    0x5e4b7c2ce690 ---------A   01630  PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS IN THE TREASURY"
    0x5e4b7c2ce710 ---------A   01640  GOTO 1580
    0x5e4b7c2ce9e0 ---------A   01650  J=0
    0x5e4b7c2cecb0 ---------A   01660  K=0
    0x5e4b7c2ceec0 ---------A T 01670  A=0
    0x5e4b7c2cef30 ---------A T 01680  GOTO 2040
    0x5e4b7c2cf380 ---------A T 01690  A=INT(A-I)
    0x5e4b7c2cf510 ---------A T 01700  PRINT "HOW MANY SQUARE MILES DO YOU WISH TO PLANT";
    0x5e4b7c2cfa80 ---------A   01710  INPUT J
    0x5e4b7c2cfce0 ---------A   01720  IF J<0 THEN 1700
    0x5e4b7c2d0090 ---------A   01730  IF J<=B*2 THEN 1760
    0x5e4b7c2d0220 ---------A   01740  PRINT "   SORRY, BUT EACH COUNTRYMAN CAN ONLY PLANT 2 SQ. MILES."
    0x5e4b7c2d02b0 ---------A   01750  GOTO 1700
    0x5e4b7c2d0650 ---------A   01760  IF J<=D-1000 THEN 1790
    0x5e4b7c2d0ad0 ---------A   01770  PRINT "   SORRY, BUT YOU'VE ONLY";D-1000;"SQ. MILES OF FARM LAND."
    0x5e4b7c2d0b50 ---------A   01780  GOTO 1700
    0x5e4b7c2d1040 ---------A   01790  U1=INT(J*V9)
    0x5e4b7c2d12b0 ---------A T 01800  IF U1<A THEN 1870
    0x5e4b7c2d1570 ---------A   01810  IF U1=A THEN 1840
    0x5e4b7c2d18f0 ---------A   01820  PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS LEFT IN THE TREASURY."
    0x5e4b7c2d1970 ---------A   01830  GOTO 1700
    0x5e4b7c2d1b80 ---------A   01840  K=0
    0x5e4b7c2d1d90 ---------A   01850  A=0
    0x5e4b7c2d1e00 ---------A   01860  GOTO 2040
    0x5e4b7c2d2180 ---------A   01870  A=A-U1
    0x5e4b7c2d2320 ---------A   01880  PRINT "HOW MANY RALLODS DO YOU WISH TO SPEND ON POLLUTION CONTROL";
    0x5e4b7c2d2480 ---------A   01890  INPUT K
    0x5e4b7c2d26e0 ---------A T 01900  IF K<0 THEN 1880
    0x5e4b7c2d2990 ---------A   01910  IF K<=A THEN 2040
    0x5e4b7c2d2d00 ---------A   01920  PRINT "   THINK AGAIN. YOU ONLY HAVE ";A;" RALLODS REMAINING."
    0x5e4b7c2d2d80 ---------A   01930  GOTO 1880
    0x5e4b7c2d2fd0 ---------A   01940  IF H<>0 THEN 2050
    0x5e4b7c2d3230 ---------A   01950  IF I<>0 THEN 2050
    0x5e4b7c2d3490 ---------A T 01960  IF J<>0 THEN 2050
    0x5e4b7c2d36f0 ---------A   01970  IF K<>0 THEN 2050
    0x5e4b7c2d3770 ---------A   01980  PRINT
    0x5e4b7c2d3900 ---------A T 01990  PRINT "GOODBYE."
    0x5e4b7c2d3ac0 ---------A T 02000  PRINT "(IF YOU WISH TO CONTINUE THIS GAME AT A LATER DATE, ANSWER"
    0x5e4b7c2d3c60 ---------A   02010  PRINT "'AGAIN' WHEN ASKED IF YOU WANT INSTRUCTIONS AT THE START"
    0x5e4b7c2d3dc0 ---------A   02020  PRINT "OF THE GAME)."
    0x5e4b7c2d3e20 ---------A   02030  STOP
    0x5e4b7c2d3ea0 ---------A   02040  GOTO 1940
    0x5e4b7c2d3f10 ---------A   02050  PRINT
    0x5e4b7c2d3f90 ---------A   02060  PRINT
    0x5e4b7c2d43d0 ---------A   02070  A=INT(A-K)
    0x5e4b7c2d46d0 ---------A   02080  A4=A
    0x5e4b7c2d4c30 ---------A   02090  IF INT(I/100-B)>=0 THEN 2120
    0x5e4b7c2d4fc0 ---------A   02100  IF I/100<50 THEN 3220
    0x5e4b7c2d5580 ---------A   02110  PRINT INT(B-(I/100));"COUNTRYMEN DIED OF STARVATION"
    0x5e4b7c2d5c80 ---------A   02120  F1=INT(RND(1)*(2000-D))
    0x5e4b7c2d5ed0 ---------A   02130  IF K<25 THEN 2150
    0x5e4b7c2d6450 ---------A   02140  F1=INT(F1/(K/25))
    0x5e4b7c2d66d0 ---------A   02150  IF F1<=0 THEN 2170
    0x5e4b7c2d6970 ---------A   02160  PRINT F1;"COUNTRYMEN DIED OF CARBON-MONOXIDE AND DUST INHALATION"
    0x5e4b7c2d6f10 ---------A   02170  IF INT((I/100)-B)<0 THEN 2200
    0x5e4b7c2d7170 ---------A   02180  IF F1>0 THEN 2250
    0x5e4b7c2d7220 ---------A   02190  GOTO 2340
    0x5e4b7c2d7aa0 ---------A   02200  PRINT "   YOU WERE FORCED TO SPEND";INT((F1+(B-(I/100)))*9);
    0x5e4b7c2d7c20 ---------A   02210  PRINT "RALLODS ON FUNERAL EXPENSES"
    0x5e4b7c2d83d0 ---------A   02220  B5=INT(F1+(B-(I/100)))
    0x5e4b7c2d8d40 ---------A   02230  A=INT(A-((F1+(B-(I/100)))*9))
    0x5e4b7c2d8de0 ---------A   02240  GOTO 2290
    0x5e4b7c2d9350 ---------A   02250  PRINT "   YOU WERE FORCED TO SPEND ";INT(F1*9);"RALLODS ON ";
    0x5e4b7c2d94b0 ---------A   02260  PRINT "FUNERAL EXPENSES."
    0x5e4b7c2d96f0 ---------A   02270  B5=F1
    0x5e4b7c2d9c60 ---------A   02280  A=INT(A-(F1*9))
    0x5e4b7c2d9ee0 ---------A   02290  IF A>=0 THEN 2330
    0x5e4b7c2da070 ---------A   02300  PRINT "   INSUFFICIENT RESERVES TO COVER COST - LAND WAS SOLD"
    0x5e4b7c2da610 ---------A   02310  D=INT(D+(A/W))
    0x5e4b7c2da820 ---------A   02320  A=0
    0x5e4b7c2dac50 ---------A   02330  B=INT(B-B5)
    0x5e4b7c2daeb0 ---------A   02340  IF H=0 THEN 2390
    0x5e4b7c2dc0e0 ---------A   02350  C1=INT(H+(RND(1)*10)-(RND(1)*20))
    0x5e4b7c2dc330 ---------A   02360  IF C>0 THEN 2380
    0x5e4b7c2dc690 ---------A   02370  C1=C1+20
    0x5e4b7c2dc930 ---------A   02380  PRINT C1;"WORKERS CAME TO THE COUNTRY AND";
    0x5e4b7c2dd920 ---------A   02390  P1=INT(((I/100-B)/10)+(K/25)-((2000-D)/50)-(F1/2))
    0x5e4b7c2ddc70 ---------A   02400  PRINT ABS(P1);"COUNTRYMEN ";
    0x5e4b7c2dded0 ---------A   02410  IF P1<0 THEN 2440
    0x5e4b7c2de050 ---------A   02420  PRINT "CAME TO";
    0x5e4b7c2de0d0 ---------A   02430  GOTO 2450
    0x5e4b7c2de250 ---------A   02440  PRINT "LEFT";
    0x5e4b7c2de3b0 ---------A   02450  PRINT " THE ISLAND."
    0x5e4b7c2de7f0 ---------A   02460  B=INT(B+P1)
    0x5e4b7c2dec40 ---------A   02470  C=INT(C+C1)
    0x5e4b7c2df5f0 ---------A   02480  U2=INT(((2000-D)*((RND(1)+1.5)/2)))
    0x5e4b7c2df860 ---------A   02490  IF C=0 THEN 2510
    0x5e4b7c2dfcc0 ---------A   02500  PRINT "OF ";INT(J);"SQ. MILES PLANTED,";
    0x5e4b7c2dff40 ---------A   02510  IF J>U2 THEN 2530
    0x5e4b7c2e01b0 ---------A   02520  U2=J
    0x5e4b7c2e0700 ---------A   02530  PRINT " YOU HARVESTED ";INT(J-U2);"SQ. MILES OF CROPS."
    0x5e4b7c2e0960 ---------A   02540  IF U2=0 THEN 2600
    0x5e4b7c2e0c90 ---------A   02550  IF T1>=2 THEN 2600
    0x5e4b7c2e0e10 ---------A   02560  PRINT "   (DUE TO ";
    0x5e4b7c2e1080 ---------A   02570  IF T1=0 THEN 2590
    0x5e4b7c2e1230 ---------A   02580  PRINT "INCREASED ";
    0x5e4b7c2e13c0 ---------A   02590  PRINT "AIR AND WATER POLLUTION FROM FOREIGN INDUSTRY.)"
    0x5e4b7c2e1b70 ---------A   02600  Q=INT((J-U2)*(W/2))
    0x5e4b7c2e1fa0 ---------A   02610  PRINT "MAKING";INT(Q);"RALLODS."
    0x5e4b7c2e23f0 ---------A   02620  A=INT(A+Q)
    0x5e4b7c2e2d90 ---------A   02630  V1=INT(((B-P1)*22)+(RND(1)*500))
    0x5e4b7c2e33d0 ---------A   02640  V2=INT((2000-D)*15)
    0x5e4b7c2e3a10 ---------A   02650  PRINT " YOU MADE";ABS(INT(V1-V2));"RALLODS FROM TOURIST TRADE."
    0x5e4b7c2e3c80 ---------A   02660  IF V2=0 THEN 2750
    0x5e4b7c2e40f0 ---------A   02670  IF V1-V2>=V3 THEN 2750
    0x5e4b7c2e4270 ---------A   02680  PRINT "   DECREASE BECAUSE ";
    0x5e4b7c2e4730 ---------A   02690  G1=10*RND(1)
    0x5e4b7c2e4980 ---------A   02700  IF G1<=2 THEN 2780
    0x5e4b7c2e4be0 ---------A   02710  IF G1<=4 THEN 2800
    0x5e4b7c2e4e40 ---------A   02720  IF G1<=6 THEN 2820
    0x5e4b7c2e50b0 ---------A   02730  IF G1<=8 THEN 2840
    0x5e4b7c2e5310 ---------A   02740  IF G1<=10 THEN 2860
    0x5e4b7c2e5750 ---------A   02750  V3=INT(A+V3)
    0x5e4b7c2e5b80 ---------A   02760  A=INT(A+V3)
    0x5e4b7c2e5c20 ---------A   02770  GOTO 2880
    0x5e4b7c2e5d90 ---------A   02780  PRINT "FISH POPULATION HAS DWINDLED DUE TO WATER POLLUTION."
    0x5e4b7c2e5e40 ---------A   02790  GOTO 2750
    0x5e4b7c2e5fb0 ---------A   02800  PRINT "AIR POLLUTION IS KILLING GAME BIRD POPULATION."
    0x5e4b7c2e6060 ---------A   02810  GOTO 2750
    0x5e4b7c2e61d0 ---------A   02820  PRINT "MINERAL BATHS ARE BEING RUINED BY WATER POLLUTION."
    0x5e4b7c2e6280 ---------A   02830  GOTO 2750
    0x5e4b7c2e63f0 ---------A   02840  PRINT "UNPLEASANT SMOG IS DISCOURAGING SUN BATHERS."
    0x5e4b7c2e64a0 ---------A   02850  GOTO 2750
    0x5e4b7c2e6610 ---------A   02860  PRINT "HOTELS ARE LOOKING SHABBY DUE TO SMOG GRIT."
    0x5e4b7c2e66a0 ---------A   02870  GOTO 2750
    0x5e4b7c2e68f0 ---------A   02880  IF B5>200 THEN 3070
    0x5e4b7c2e6b60 ---------A   02890  IF B<343 THEN 3220
    0x5e4b7c2e6f00 ---------A   02900  IF (A4/100)>5 THEN 3280
    0x5e4b7c2e7190 ---------A   02910  IF C>B THEN 2940
    0x5e4b7c2e75d0 ---------A   02920  IF N5-1=X5 THEN 3380
    0x5e4b7c2e7650 ---------A   02930  GOTO 3700
    0x5e4b7c2e76c0 ---------A   02940  PRINT
    0x5e4b7c2e7770 ---------A   02950  PRINT
    0x5e4b7c2e7920 ---------A   02960  PRINT "THE NUMBER OF FOREIGN WORKERS HAS EXCEEDED THE NUMBER"
    0x5e4b7c2e7ab0 ---------A   02970  PRINT "OF COUNTRYMEN. AS A MINORITY, THEY HAVE REVOLTED AND"
    0x5e4b7c2e7c30 ---------A   02980  PRINT "TAKEN OVER THE COUNTRY."
    0x5e4b7c2e7f80 ---------A   02990  IF RND(1)<=.5 THEN 3030
    0x5e4b7c2e8110 ---------A   03000  PRINT "YOU HAVE BEEN THROWN OUT OF OFFICE AND ARE NOW"
    0x5e4b7c2e8270 ---------A   03010  PRINT "RESIDING IN PRISON."
    0x5e4b7c2e8310 ---------A   03020  GOTO 3040
    0x5e4b7c2e8470 ---------A   03030  PRINT "YOU HAVE BEEN ASSASSINATED."
    0x5e4b7c2e84f0 ---------A   03040  PRINT
    0x5e4b7c2e8570 ---------A   03050  PRINT
    0x5e4b7c2e85d0 ---------A   03060  STOP
    0x5e4b7c2e8650 ---------A   03070  PRINT
    0x5e4b7c2e86f0 ---------A   03080  PRINT
    0x5e4b7c2e8990 ---------A   03090  PRINT B5;"COUNTRYMEN DIED IN ONE YEAR!!!!!"
    0x5e4b7c2e8b40 ---------A   03100  PRINT "DUE TO THIS EXTREME MISMANAGEMENT, YOU HAVE NOT ONLY"
    0x5e4b7c2e8cc0 ---------A   03110  PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE, BUT YOU"
    0x5e4b7c2e9260 ---------A   03120  M6=INT(RND(1)*10)
    0x5e4b7c2e94b0 ---------A   03130  IF M6<=3 THEN 3160
    0x5e4b7c2e9720 ---------A   03140  IF M6<=6 THEN 3180
    0x5e4b7c2e99a0 ---------A   03150  IF M6<=10 THEN 3200
    0x5e4b7c2e9b10 ---------A   03160  PRINT "ALSO HAD YOUR LEFT EYE GOUGED OUT!"
    0x5e4b7c2e9bb0 ---------A   03170  GOTO 3040
    0x5e4b7c2e9d20 ---------A   03180  PRINT "HAVE ALSO GAINED A VERY BAD REPUTATION."
    0x5e4b7c2e9dc0 ---------A   03190  GOTO 3040
    0x5e4b7c2e9f30 ---------A   03200  PRINT "HAVE ALSO BEEN DECLARED NATIONAL FINK."
    0x5e4b7c2e9fb0 ---------A   03210  GOTO 3040
    0x5e4b7c2ea020 ---------A   03220  PRINT
    0x5e4b7c2ea0d0 ---------A   03230  PRINT
    0x5e4b7c2ea280 ---------A   03240  PRINT "OVER ONE THIRD OF THE POPULTATION HAS DIED SINCE YOU"
    0x5e4b7c2ea410 ---------A   03250  PRINT "WERE ELECTED TO OFFICE. THE PEOPLE (REMAINING)"
    0x5e4b7c2ea570 ---------A   03260  PRINT "HATE YOUR GUTS."
    0x5e4b7c2ea600 ---------A   03270  GOTO 2990
    0x5e4b7c2ea970 ---------A   03280  IF B5-F1<2 THEN 2910
    0x5e4b7c2eaa20 ---------A   03290  PRINT
    0x5e4b7c2eabd0 ---------A   03300  PRINT "MONEY WAS LEFT OVER IN THE TREASURY WHICH YOU DID"
    0x5e4b7c2ead80 ---------A   03310  PRINT "NOT SPEND. AS A RESULT, SOME OF YOUR COUNTRYMEN DIED"
    0x5e4b7c2eaf30 ---------A   03320  PRINT "OF STARVATION. THE PUBLIC IS ENRAGED AND YOU HAVE"
    0x5e4b7c2eb0c0 ---------A   03330  PRINT "BEEN FORCED TO EITHER RESIGN OR COMMIT SUICIDE."
    0x5e4b7c2eb250 ---------A   03340  PRINT "THE CHOICE IS YOURS."
    0x5e4b7c2eb3f0 ---------A   03350  PRINT "IF YOU CHOOSE THE LATTER, PLEASE TURN OFF YOUR COMPUTER"
    0x5e4b7c2eb550 ---------A   03360  PRINT "BEFORE PROCEEDING."
    0x5e4b7c2eb5d0 ---------A   03370  GOTO 3040
    0x5e4b7c2eb640 ---------A   03380  PRINT
    0x5e4b7c2eb6e0 ---------A   03390  PRINT
    0x5e4b7c2eb880 ---------A   03400  PRINT "CONGRATULATIONS!!!!!!!!!!!!!!!!!!"
    0x5e4b7c2ebc20 ---------A   03410  PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR";N5;"YEAR TERM"
    0x5e4b7c2ebdd0 ---------A   03420  PRINT "OF OFFICE. YOU WERE, OF COURSE, EXTREMELY LUCKY, BUT"
    0x5e4b7c2ebf90 ---------A   03430  PRINT "NEVERTHELESS, IT'S QUITE AN ACHIEVEMENT. GOODBYE AND GOOD"
    0x5e4b7c2ec130 ---------A   03440  PRINT "LUCK - YOU'LL PROBABLY NEED IT IF YOU'RE THE TYPE THAT"
    0x5e4b7c2ec290 ---------A   03450  PRINT "PLAYS THIS GAME."
    0x5e4b7c2ec340 ---------A   03460  GOTO 3040
    0x5e4b7c2ec4e0 ---------A   03470  PRINT "HOW MANY YEARS HAD YOU BEEN IN OFFICE WHEN INTERRUPTED";
    0x5e4b7c2ec640 ---------A   03480  INPUT X5
    0x5e4b7c2ec8a0 ---------A   03490  IF X5<0 THEN 3040
    0x5e4b7c2ecb30 ---------A   03500  IF X5<8 THEN 3530
    0x5e4b7c2eceb0 ---------A   03510  PRINT "   COME ON, YOUR TERM IN OFFICE IS ONLY";N5;"YEARS."
    0x5e4b7c2ecf50 ---------A   03520  GOTO 3470
    0x5e4b7c2ed0d0 ---------A   03530  PRINT "HOW MUCH DID YOU HAVE IN THE TREASURY";
    0x5e4b7c2ed230 ---------A   03540  INPUT A
    0x5e4b7c2ed4a0 ---------A   03550  IF A<0 THEN 3040
    0x5e4b7c2ed620 ---------A   03560  PRINT "HOW MANY COUNTRYMEN";    
    0x5e4b7c2ed780 ---------A   03570  INPUT B
    0x5e4b7c2ed9f0 ---------A   03580  IF B<0 THEN 3040
    0x5e4b7c2edb70 ---------A   03590  PRINT "HOW MANY WORKERS";
    0x5e4b7c2edcd0 ---------A   03600  INPUT C
    0x5e4b7c2edf50 ---------A   03610  IF C<0 THEN 3040
    0x5e4b7c2ee0e0 ---------A   03620  PRINT "HOW MANY SQUARE MILES OF LAND";
    0x5e4b7c2db010 ---------A   03630  INPUT D
    0x5e4b7c2db280 ---------A   03640  IF D<0 THEN 3040
    0x5e4b7c2db4e0 ---------A   03650  IF D>2000 THEN 3670
    0x5e4b7c2ef1a0 ---------A   03660  IF D>13100 THEN 100
    0x5e4b7c2ef350 ---------A   03670  PRINT "   COME ON, YOU STARTED WITH 1000 SQ. MILES OF FARM LAND"
    0x5e4b7c2ef4d0 ---------A   03680  PRINT "   AND 10,000 SQ. MILES OF FOREST LAND."
    0x5e4b7c2ef550 ---------A   03690  GOTO 3620
    0x5e4b7c2ef880 ---------A   03700  X5=X5+1
    0x5e4b7c2efa90 ---------A   03710  B5=0
    0x5e4b7c2efb00 ---------A   03720  GOTO 1310
    0x5e4b7c2efb50 ---------A   03730  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03740 - 10000    6270 

 */



/*
 *  Symbol Table Listing for 'basic/king.bas'
 *
    A                        Integer     
    A4                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B5                       Integer     
    C                        Integer     
    C1                       Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F1                       Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G1                       Integer     
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M6                       Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N5                       Integer     
    OCT$            Function String          args=1, float  
    P1                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T1                       Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U1                       Integer     
    U2                       Integer     
    V1                       Integer     
    V2                       Integer     
    V3                       Integer     
    V9                       Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X                        Integer     
    X5                       Integer     
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
    0x5e4b7c2bd6d0 ---------A   01000  PRINT TAB(34);"KING"
    0x5e4b7c2bd670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e4b7c2be2d0 ---------A   01020  PRINT
    0x5e4b7c2be910 ---------A   01030  PRINT
    0x5e4b7c2ae2b0 ---------A   01040  PRINT
    0x5e4b7c2bf1b0 ---------A   01050  PRINT "DO YOU WANT INSTRUCTIONS";
    0x5e4b7c2be040 ---------A   01060  INPUT Z$
    0x5e4b7c2bfed0 ---------A   01070  N5=8
    0x5e4b7c2be660 ---------A   01080  IF LEFT$(Z$,1)="N" THEN 1270
    0x5e4b7c2c5840 ---------A   01090  IF Z$="AGAIN" THEN 3470
    0x5e4b7c2c58a0 ---------A   01100  PRINT
    0x5e4b7c2c5900 ---------A   01110  PRINT
    0x5e4b7c2c5960 ---------A   01120  PRINT
    0x5e4b7c2c5a40 ---------A   01130  PRINT "CONGRATULATIONS! YOU'VE JUST BEEN ELECTED PREMIER OF SETATS"
    0x5e4b7c2c5bb0 ---------A   01140  PRINT "DETINU, A SMALL COMMUNIST ISLAND 30 BY 70 MILES LONG. YOUR"
    0x5e4b7c2c5d70 ---------A   01150  PRINT "JOB IS TO DECIDE UPON THE CONTRY'S BUDGET AND DISTRIBUTE"
    0x5e4b7c2c5f20 ---------A   01160  PRINT "MONEY TO YOUR COUNTRYMEN FROM THE COMMUNAL TREASURY."
    0x5e4b7c2c60e0 ---------A   01170  PRINT "THE MONEY SYSTEM IS RALLODS, AND EACH PERSON NEEDS 100"
    0x5e4b7c2c62a0 ---------A   01180  PRINT "RALLODS PER YEAR TO SURVIVE. YOUR COUNTRY'S INCOME COMES"
    0x5e4b7c2c6460 ---------A   01190  PRINT "FROM FARM PRODUCE AND TOURISTS VISITING YOUR MAGNIFICENT"
    0x5e4b7c2c6620 ---------A   01200  PRINT "FORESTS, HUNTING, FISHING, ETC. HALF YOUR LAND IS FARM LAND"
    0x5e4b7c2c67e0 ---------A   01210  PRINT "WHICH ALSO HAS AN EXCELLENT MINERAL CONTENT AND MAY BE SOLD"
    0x5e4b7c2c69a0 ---------A   01220  PRINT "TO FOREIGN INDUSTRY (STRIP MINING) WHO IMPORT AND SUPPORT"
    0x5e4b7c2c6b10 ---------A   01230  PRINT "THEIR OWN WORKERS. CROPS COST BETWEEN 10 AND 15 RALLODS PER"
    0x5e4b7c2c6c80 ---------A   01240  PRINT "SQUARE MILE TO PLANT."
    0x5e4b7c2c6fc0 ---------A   01250  PRINT "YOUR GOAL IS TO COMPLETE YOUR";N5;"YEAR TERM OF OFFICE."
    0x5e4b7c2c7120 ---------A   01260  PRINT "GOOD LUCK!"
    0x5e4b7c2c71c0 ---------A T 01270  PRINT
    0x5e4b7c2c7ba0 ---------A   01280  A=INT(60000+(1000*RND(1))-(1000*RND(1)))
    0x5e4b7c2c8590 ---------A   01290  B=INT(500+(10*RND(1))-(10*RND(1)))
    0x5e4b7c2c8860 ---------A   01300  D=2000
    0x5e4b7c2c8ef0 ---------A T 01310  W=INT(10*RND(1)+95)
    0x5e4b7c2c8f80 ---------A   01320  PRINT
    0x5e4b7c2c9300 ---------A   01330  PRINT "YOU NOW HAVE ";A;" RALLODS IN THE TREASURY."
    0x5e4b7c2c9540 ---------A   01340  PRINT INT(B);
    0x5e4b7c2c96d0 ---------A   01350  PRINT "COUNTRYMEN, ";
    0x5e4b7c2c9ef0 ---------A   01360  V9=INT(((RND(1)/2)*10+10))
    0x5e4b7c2ca210 ---------A   01370  IF C=0 THEN 1390
    0x5e4b7c2ca7a0 ---------A   01380  PRINT INT(C);"FOREIGN WORKERS, ";
    0x5e4b7c2cac00 ---------A T 01390  PRINT "AND";INT(D);"SQ. MILES OF LAND."
    0x5e4b7c2caea0 ---------A   01400  PRINT "THIS YEAR INDUSTRY WILL BUY LAND FOR";W;
    0x5e4b7c2cb040 ---------A   01410  PRINT "RALLODS PER SQUARE MILE."
    0x5e4b7c2cb3b0 ---------A   01420  PRINT "LAND CURRENTLY COSTS";V9;"RALLODS PER SQUARE MILE TO PLANT."
    0x5e4b7c2cb460 ---------A   01430  PRINT
    0x5e4b7c2cb600 ---------A T 01440  PRINT "HOW MANY SQUARE MILES DO YOU WISH TO SELL TO INDUSTRY";
    0x5e4b7c2cb820 ---------A   01450  INPUT H
    0x5e4b7c2cba90 ---------A   01460  IF H<0 THEN 1440
    0x5e4b7c2cbe50 ---------A   01470  IF H<=D-1000 THEN 1560
    0x5e4b7c2cc2d0 ---------A   01480  PRINT "***  THINK AGAIN. YOU ONLY HAVE";D-1000;"SQUARE MILES OF FARM LAND."
    0x5e4b7c2cc620 ---------A   01490  IF X<>0 THEN 1440
    0x5e4b7c2cc680 ---------A   01500  PRINT
    0x5e4b7c2cc830 ---------A   01510  PRINT "(FOREIGN INDUSTRY WILL ONLY BUY FARM LAND BECAUSE"
    0x5e4b7c2cc9d0 ---------A   01520  PRINT "FOREST LAND IS UNECONOMICAL TO STRIP MINE DUE TO TREES,"
    0x5e4b7c2ccb40 ---------A   01530  PRINT "THICKER TOP SOIL, ETC.)"
    0x5e4b7c2ccd60 ---------A   01540  X=1
    0x5e4b7c2ccdd0 ---------A   01550  GOTO 1440
    0x5e4b7c2cd200 ---------A T 01560  D=INT(D-H)
    0x5e4b7c2cd7c0 ---------A   01570  A=INT(A+(H*W))
    0x5e4b7c2cd960 ---------A T 01580  PRINT "HOW MANY RALLODS WILL YOU DISTRIBUTE AMONG YOUR COUNTRYMEN";
    0x5e4b7c2cdb80 ---------A   01590  INPUT I
    0x5e4b7c2cdde0 ---------A   01600  IF I<0 THEN 1580
    0x5e4b7c2ce060 ---------A   01610  IF I<A THEN 1690
    0x5e4b7c2ce310 ---------A   01620  IF I=A THEN 1650
    0x5e4b7c2ce690 ---------A   01630  PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS IN THE TREASURY"
    0x5e4b7c2ce710 ---------A   01640  GOTO 1580
    0x5e4b7c2ce9e0 ---------A T 01650  J=0
    0x5e4b7c2cecb0 ---------A   01660  K=0
    0x5e4b7c2ceec0 ---------A   01670  A=0
    0x5e4b7c2cef30 ---------A   01680  GOTO 2040
    0x5e4b7c2cf380 ---------A T 01690  A=INT(A-I)
    0x5e4b7c2cf510 ---------A T 01700  PRINT "HOW MANY SQUARE MILES DO YOU WISH TO PLANT";
    0x5e4b7c2cfa80 ---------A   01710  INPUT J
    0x5e4b7c2cfce0 ---------A   01720  IF J<0 THEN 1700
    0x5e4b7c2d0090 ---------A   01730  IF J<=B*2 THEN 1760
    0x5e4b7c2d0220 ---------A   01740  PRINT "   SORRY, BUT EACH COUNTRYMAN CAN ONLY PLANT 2 SQ. MILES."
    0x5e4b7c2d02b0 ---------A   01750  GOTO 1700
    0x5e4b7c2d0650 ---------A T 01760  IF J<=D-1000 THEN 1790
    0x5e4b7c2d0ad0 ---------A   01770  PRINT "   SORRY, BUT YOU'VE ONLY";D-1000;"SQ. MILES OF FARM LAND."
    0x5e4b7c2d0b50 ---------A   01780  GOTO 1700
    0x5e4b7c2d1040 ---------A T 01790  U1=INT(J*V9)
    0x5e4b7c2d12b0 ---------A   01800  IF U1<A THEN 1870
    0x5e4b7c2d1570 ---------A   01810  IF U1=A THEN 1840
    0x5e4b7c2d18f0 ---------A   01820  PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS LEFT IN THE TREASURY."
    0x5e4b7c2d1970 ---------A   01830  GOTO 1700
    0x5e4b7c2d1b80 ---------A T 01840  K=0
    0x5e4b7c2d1d90 ---------A   01850  A=0
    0x5e4b7c2d1e00 ---------A   01860  GOTO 2040
    0x5e4b7c2d2180 ---------A T 01870  A=A-U1
    0x5e4b7c2d2320 ---------A T 01880  PRINT "HOW MANY RALLODS DO YOU WISH TO SPEND ON POLLUTION CONTROL";
    0x5e4b7c2d2480 ---------A   01890  INPUT K
    0x5e4b7c2d26e0 ---------A   01900  IF K<0 THEN 1880
    0x5e4b7c2d2990 ---------A   01910  IF K<=A THEN 2040
    0x5e4b7c2d2d00 ---------A   01920  PRINT "   THINK AGAIN. YOU ONLY HAVE ";A;" RALLODS REMAINING."
    0x5e4b7c2d2d80 ---------A   01930  GOTO 1880
    0x5e4b7c2d2fd0 ---------A T 01940  IF H<>0 THEN 2050
    0x5e4b7c2d3230 ---------A   01950  IF I<>0 THEN 2050
    0x5e4b7c2d3490 ---------A   01960  IF J<>0 THEN 2050
    0x5e4b7c2d36f0 ---------A   01970  IF K<>0 THEN 2050
    0x5e4b7c2d3770 ---------A   01980  PRINT
    0x5e4b7c2d3900 ---------A   01990  PRINT "GOODBYE."
    0x5e4b7c2d3ac0 ---------A   02000  PRINT "(IF YOU WISH TO CONTINUE THIS GAME AT A LATER DATE, ANSWER"
    0x5e4b7c2d3c60 ---------A   02010  PRINT "'AGAIN' WHEN ASKED IF YOU WANT INSTRUCTIONS AT THE START"
    0x5e4b7c2d3dc0 ---------A   02020  PRINT "OF THE GAME)."
    0x5e4b7c2d3e20 ---------A   02030  STOP
    0x5e4b7c2d3ea0 ---------A T 02040  GOTO 1940
    0x5e4b7c2d3f10 ---------A T 02050  PRINT
    0x5e4b7c2d3f90 ---------A   02060  PRINT
    0x5e4b7c2d43d0 ---------A   02070  A=INT(A-K)
    0x5e4b7c2d46d0 ---------A   02080  A4=A
    0x5e4b7c2d4c30 ---------A   02090  IF INT(I/100-B)>=0 THEN 2120
    0x5e4b7c2d4fc0 ---------A   02100  IF I/100<50 THEN 3220
    0x5e4b7c2d5580 ---------A   02110  PRINT INT(B-(I/100));"COUNTRYMEN DIED OF STARVATION"
    0x5e4b7c2d5c80 ---------A T 02120  F1=INT(RND(1)*(2000-D))
    0x5e4b7c2d5ed0 ---------A   02130  IF K<25 THEN 2150
    0x5e4b7c2d6450 ---------A   02140  F1=INT(F1/(K/25))
    0x5e4b7c2d66d0 ---------A T 02150  IF F1<=0 THEN 2170
    0x5e4b7c2d6970 ---------A   02160  PRINT F1;"COUNTRYMEN DIED OF CARBON-MONOXIDE AND DUST INHALATION"
    0x5e4b7c2d6f10 ---------A T 02170  IF INT((I/100)-B)<0 THEN 2200
    0x5e4b7c2d7170 ---------A   02180  IF F1>0 THEN 2250
    0x5e4b7c2d7220 ---------A   02190  GOTO 2340
    0x5e4b7c2d7aa0 ---------A T 02200  PRINT "   YOU WERE FORCED TO SPEND";INT((F1+(B-(I/100)))*9);
    0x5e4b7c2d7c20 ---------A   02210  PRINT "RALLODS ON FUNERAL EXPENSES"
    0x5e4b7c2d83d0 ---------A   02220  B5=INT(F1+(B-(I/100)))
    0x5e4b7c2d8d40 ---------A   02230  A=INT(A-((F1+(B-(I/100)))*9))
    0x5e4b7c2d8de0 ---------A   02240  GOTO 2290
    0x5e4b7c2d9350 ---------A T 02250  PRINT "   YOU WERE FORCED TO SPEND ";INT(F1*9);"RALLODS ON ";
    0x5e4b7c2d94b0 ---------A   02260  PRINT "FUNERAL EXPENSES."
    0x5e4b7c2d96f0 ---------A   02270  B5=F1
    0x5e4b7c2d9c60 ---------A   02280  A=INT(A-(F1*9))
    0x5e4b7c2d9ee0 ---------A T 02290  IF A>=0 THEN 2330
    0x5e4b7c2da070 ---------A   02300  PRINT "   INSUFFICIENT RESERVES TO COVER COST - LAND WAS SOLD"
    0x5e4b7c2da610 ---------A   02310  D=INT(D+(A/W))
    0x5e4b7c2da820 ---------A   02320  A=0
    0x5e4b7c2dac50 ---------A T 02330  B=INT(B-B5)
    0x5e4b7c2daeb0 ---------A T 02340  IF H=0 THEN 2390
    0x5e4b7c2dc0e0 ---------A   02350  C1=INT(H+(RND(1)*10)-(RND(1)*20))
    0x5e4b7c2dc330 ---------A   02360  IF C>0 THEN 2380
    0x5e4b7c2dc690 ---------A   02370  C1=C1+20
    0x5e4b7c2dc930 ---------A T 02380  PRINT C1;"WORKERS CAME TO THE COUNTRY AND";
    0x5e4b7c2dd920 ---------A T 02390  P1=INT(((I/100-B)/10)+(K/25)-((2000-D)/50)-(F1/2))
    0x5e4b7c2ddc70 ---------A   02400  PRINT ABS(P1);"COUNTRYMEN ";
    0x5e4b7c2dded0 ---------A   02410  IF P1<0 THEN 2440
    0x5e4b7c2de050 ---------A   02420  PRINT "CAME TO";
    0x5e4b7c2de0d0 ---------A   02430  GOTO 2450
    0x5e4b7c2de250 ---------A T 02440  PRINT "LEFT";
    0x5e4b7c2de3b0 ---------A T 02450  PRINT " THE ISLAND."
    0x5e4b7c2de7f0 ---------A   02460  B=INT(B+P1)
    0x5e4b7c2dec40 ---------A   02470  C=INT(C+C1)
    0x5e4b7c2df5f0 ---------A   02480  U2=INT(((2000-D)*((RND(1)+1.5)/2)))
    0x5e4b7c2df860 ---------A   02490  IF C=0 THEN 2510
    0x5e4b7c2dfcc0 ---------A   02500  PRINT "OF ";INT(J);"SQ. MILES PLANTED,";
    0x5e4b7c2dff40 ---------A T 02510  IF J>U2 THEN 2530
    0x5e4b7c2e01b0 ---------A   02520  U2=J
    0x5e4b7c2e0700 ---------A T 02530  PRINT " YOU HARVESTED ";INT(J-U2);"SQ. MILES OF CROPS."
    0x5e4b7c2e0960 ---------A   02540  IF U2=0 THEN 2600
    0x5e4b7c2e0c90 ---------A   02550  IF T1>=2 THEN 2600
    0x5e4b7c2e0e10 ---------A   02560  PRINT "   (DUE TO ";
    0x5e4b7c2e1080 ---------A   02570  IF T1=0 THEN 2590
    0x5e4b7c2e1230 ---------A   02580  PRINT "INCREASED ";
    0x5e4b7c2e13c0 ---------A T 02590  PRINT "AIR AND WATER POLLUTION FROM FOREIGN INDUSTRY.)"
    0x5e4b7c2e1b70 ---------A T 02600  Q=INT((J-U2)*(W/2))
    0x5e4b7c2e1fa0 ---------A   02610  PRINT "MAKING";INT(Q);"RALLODS."
    0x5e4b7c2e23f0 ---------A   02620  A=INT(A+Q)
    0x5e4b7c2e2d90 ---------A   02630  V1=INT(((B-P1)*22)+(RND(1)*500))
    0x5e4b7c2e33d0 ---------A   02640  V2=INT((2000-D)*15)
    0x5e4b7c2e3a10 ---------A   02650  PRINT " YOU MADE";ABS(INT(V1-V2));"RALLODS FROM TOURIST TRADE."
    0x5e4b7c2e3c80 ---------A   02660  IF V2=0 THEN 2750
    0x5e4b7c2e40f0 ---------A   02670  IF V1-V2>=V3 THEN 2750
    0x5e4b7c2e4270 ---------A   02680  PRINT "   DECREASE BECAUSE ";
    0x5e4b7c2e4730 ---------A   02690  G1=10*RND(1)
    0x5e4b7c2e4980 ---------A   02700  IF G1<=2 THEN 2780
    0x5e4b7c2e4be0 ---------A   02710  IF G1<=4 THEN 2800
    0x5e4b7c2e4e40 ---------A   02720  IF G1<=6 THEN 2820
    0x5e4b7c2e50b0 ---------A   02730  IF G1<=8 THEN 2840
    0x5e4b7c2e5310 ---------A   02740  IF G1<=10 THEN 2860
    0x5e4b7c2e5750 ---------A T 02750  V3=INT(A+V3)
    0x5e4b7c2e5b80 ---------A   02760  A=INT(A+V3)
    0x5e4b7c2e5c20 ---------A   02770  GOTO 2880
    0x5e4b7c2e5d90 ---------A T 02780  PRINT "FISH POPULATION HAS DWINDLED DUE TO WATER POLLUTION."
    0x5e4b7c2e5e40 ---------A   02790  GOTO 2750
    0x5e4b7c2e5fb0 ---------A T 02800  PRINT "AIR POLLUTION IS KILLING GAME BIRD POPULATION."
    0x5e4b7c2e6060 ---------A   02810  GOTO 2750
    0x5e4b7c2e61d0 ---------A T 02820  PRINT "MINERAL BATHS ARE BEING RUINED BY WATER POLLUTION."
    0x5e4b7c2e6280 ---------A   02830  GOTO 2750
    0x5e4b7c2e63f0 ---------A T 02840  PRINT "UNPLEASANT SMOG IS DISCOURAGING SUN BATHERS."
    0x5e4b7c2e64a0 ---------A   02850  GOTO 2750
    0x5e4b7c2e6610 ---------A T 02860  PRINT "HOTELS ARE LOOKING SHABBY DUE TO SMOG GRIT."
    0x5e4b7c2e66a0 ---------A   02870  GOTO 2750
    0x5e4b7c2e68f0 ---------A T 02880  IF B5>200 THEN 3070
    0x5e4b7c2e6b60 ---------A   02890  IF B<343 THEN 3220
    0x5e4b7c2e6f00 ---------A   02900  IF (A4/100)>5 THEN 3280
    0x5e4b7c2e7190 ---------A T 02910  IF C>B THEN 2940
    0x5e4b7c2e75d0 ---------A   02920  IF N5-1=X5 THEN 3380
    0x5e4b7c2e7650 ---------A   02930  GOTO 3700
    0x5e4b7c2e76c0 ---------A T 02940  PRINT
    0x5e4b7c2e7770 ---------A   02950  PRINT
    0x5e4b7c2e7920 ---------A   02960  PRINT "THE NUMBER OF FOREIGN WORKERS HAS EXCEEDED THE NUMBER"
    0x5e4b7c2e7ab0 ---------A   02970  PRINT "OF COUNTRYMEN. AS A MINORITY, THEY HAVE REVOLTED AND"
    0x5e4b7c2e7c30 ---------A   02980  PRINT "TAKEN OVER THE COUNTRY."
    0x5e4b7c2e7f80 ---------A T 02990  IF RND(1)<=.5 THEN 3030
    0x5e4b7c2e8110 ---------A   03000  PRINT "YOU HAVE BEEN THROWN OUT OF OFFICE AND ARE NOW"
    0x5e4b7c2e8270 ---------A   03010  PRINT "RESIDING IN PRISON."
    0x5e4b7c2e8310 ---------A   03020  GOTO 3040
    0x5e4b7c2e8470 ---------A T 03030  PRINT "YOU HAVE BEEN ASSASSINATED."
    0x5e4b7c2e84f0 ---------A T 03040  PRINT
    0x5e4b7c2e8570 ---------A   03050  PRINT
    0x5e4b7c2e85d0 ---------A   03060  STOP
    0x5e4b7c2e8650 ---------A T 03070  PRINT
    0x5e4b7c2e86f0 ---------A   03080  PRINT
    0x5e4b7c2e8990 ---------A   03090  PRINT B5;"COUNTRYMEN DIED IN ONE YEAR!!!!!"
    0x5e4b7c2e8b40 ---------A   03100  PRINT "DUE TO THIS EXTREME MISMANAGEMENT, YOU HAVE NOT ONLY"
    0x5e4b7c2e8cc0 ---------A   03110  PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE, BUT YOU"
    0x5e4b7c2e9260 ---------A   03120  M6=INT(RND(1)*10)
    0x5e4b7c2e94b0 ---------A   03130  IF M6<=3 THEN 3160
    0x5e4b7c2e9720 ---------A   03140  IF M6<=6 THEN 3180
    0x5e4b7c2e99a0 ---------A   03150  IF M6<=10 THEN 3200
    0x5e4b7c2e9b10 ---------A T 03160  PRINT "ALSO HAD YOUR LEFT EYE GOUGED OUT!"
    0x5e4b7c2e9bb0 ---------A   03170  GOTO 3040
    0x5e4b7c2e9d20 ---------A T 03180  PRINT "HAVE ALSO GAINED A VERY BAD REPUTATION."
    0x5e4b7c2e9dc0 ---------A   03190  GOTO 3040
    0x5e4b7c2e9f30 ---------A T 03200  PRINT "HAVE ALSO BEEN DECLARED NATIONAL FINK."
    0x5e4b7c2e9fb0 ---------A   03210  GOTO 3040
    0x5e4b7c2ea020 ---------A T 03220  PRINT
    0x5e4b7c2ea0d0 ---------A   03230  PRINT
    0x5e4b7c2ea280 ---------A   03240  PRINT "OVER ONE THIRD OF THE POPULTATION HAS DIED SINCE YOU"
    0x5e4b7c2ea410 ---------A   03250  PRINT "WERE ELECTED TO OFFICE. THE PEOPLE (REMAINING)"
    0x5e4b7c2ea570 ---------A   03260  PRINT "HATE YOUR GUTS."
    0x5e4b7c2ea600 ---------A   03270  GOTO 2990
    0x5e4b7c2ea970 ---------A T 03280  IF B5-F1<2 THEN 2910
    0x5e4b7c2eaa20 ---------A   03290  PRINT
    0x5e4b7c2eabd0 ---------A   03300  PRINT "MONEY WAS LEFT OVER IN THE TREASURY WHICH YOU DID"
    0x5e4b7c2ead80 ---------A   03310  PRINT "NOT SPEND. AS A RESULT, SOME OF YOUR COUNTRYMEN DIED"
    0x5e4b7c2eaf30 ---------A   03320  PRINT "OF STARVATION. THE PUBLIC IS ENRAGED AND YOU HAVE"
    0x5e4b7c2eb0c0 ---------A   03330  PRINT "BEEN FORCED TO EITHER RESIGN OR COMMIT SUICIDE."
    0x5e4b7c2eb250 ---------A   03340  PRINT "THE CHOICE IS YOURS."
    0x5e4b7c2eb3f0 ---------A   03350  PRINT "IF YOU CHOOSE THE LATTER, PLEASE TURN OFF YOUR COMPUTER"
    0x5e4b7c2eb550 ---------A   03360  PRINT "BEFORE PROCEEDING."
    0x5e4b7c2eb5d0 ---------A   03370  GOTO 3040
    0x5e4b7c2eb640 ---------A T 03380  PRINT
    0x5e4b7c2eb6e0 ---------A   03390  PRINT
    0x5e4b7c2eb880 ---------A   03400  PRINT "CONGRATULATIONS!!!!!!!!!!!!!!!!!!"
    0x5e4b7c2ebc20 ---------A   03410  PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR";N5;"YEAR TERM"
    0x5e4b7c2ebdd0 ---------A   03420  PRINT "OF OFFICE. YOU WERE, OF COURSE, EXTREMELY LUCKY, BUT"
    0x5e4b7c2ebf90 ---------A   03430  PRINT "NEVERTHELESS, IT'S QUITE AN ACHIEVEMENT. GOODBYE AND GOOD"
    0x5e4b7c2ec130 ---------A   03440  PRINT "LUCK - YOU'LL PROBABLY NEED IT IF YOU'RE THE TYPE THAT"
    0x5e4b7c2ec290 ---------A   03450  PRINT "PLAYS THIS GAME."
    0x5e4b7c2ec340 ---------A   03460  GOTO 3040
    0x5e4b7c2ec4e0 ---------A T 03470  PRINT "HOW MANY YEARS HAD YOU BEEN IN OFFICE WHEN INTERRUPTED";
    0x5e4b7c2ec640 ---------A   03480  INPUT X5
    0x5e4b7c2ec8a0 ---------A   03490  IF X5<0 THEN 3040
    0x5e4b7c2ecb30 ---------A   03500  IF X5<8 THEN 3530
    0x5e4b7c2eceb0 ---------A   03510  PRINT "   COME ON, YOUR TERM IN OFFICE IS ONLY";N5;"YEARS."
    0x5e4b7c2ecf50 ---------A   03520  GOTO 3470
    0x5e4b7c2ed0d0 ---------A T 03530  PRINT "HOW MUCH DID YOU HAVE IN THE TREASURY";
    0x5e4b7c2ed230 ---------A   03540  INPUT A
    0x5e4b7c2ed4a0 ---------A   03550  IF A<0 THEN 3040
    0x5e4b7c2ed620 ---------A   03560  PRINT "HOW MANY COUNTRYMEN";    
    0x5e4b7c2ed780 ---------A   03570  INPUT B
    0x5e4b7c2ed9f0 ---------A   03580  IF B<0 THEN 3040
    0x5e4b7c2edb70 ---------A   03590  PRINT "HOW MANY WORKERS";
    0x5e4b7c2edcd0 ---------A   03600  INPUT C
    0x5e4b7c2edf50 ---------A   03610  IF C<0 THEN 3040
    0x5e4b7c2ee0e0 ---------A T 03620  PRINT "HOW MANY SQUARE MILES OF LAND";
    0x5e4b7c2db010 ---------A   03630  INPUT D
    0x5e4b7c2db280 ---------A   03640  IF D<0 THEN 3040
    0x5e4b7c2db4e0 ---------A   03650  IF D>2000 THEN 3670
    0x5e4b7c2ef1a0 ---------A   03660  IF D>13100 THEN 100
    0x5e4b7c2ef350 ---------A T 03670  PRINT "   COME ON, YOU STARTED WITH 1000 SQ. MILES OF FARM LAND"
    0x5e4b7c2ef4d0 ---------A   03680  PRINT "   AND 10,000 SQ. MILES OF FOREST LAND."
    0x5e4b7c2ef550 ---------A   03690  GOTO 3620
    0x5e4b7c2ef880 ---------A T 03700  X5=X5+1
    0x5e4b7c2efa90 ---------A   03710  B5=0
    0x5e4b7c2efb00 ---------A   03720  GOTO 1310
    0x5e4b7c2efb50 ---------A   03730  END
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
int    A_int;                                     // Basic: A 
int    A4_int;                                    // Basic: A4 
int    B_int;                                     // Basic: B 
int    B5_int;                                    // Basic: B5 
int    C_int;                                     // Basic: C 
int    C1_int;                                    // Basic: C1 
int    D_int;                                     // Basic: D 
int    F1_int;                                    // Basic: F1 
int    G1_int;                                    // Basic: G1 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    M6_int;                                    // Basic: M6 
int    N5_int;                                    // Basic: N5 
int    P1_int;                                    // Basic: P1 
int    Q_int;                                     // Basic: Q 
int    T1_int;                                    // Basic: T1 
int    U1_int;                                    // Basic: U1 
int    U2_int;                                    // Basic: U2 
int    V1_int;                                    // Basic: V1 
int    V2_int;                                    // Basic: V2 
int    V3_int;                                    // Basic: V3 
int    V9_int;                                    // Basic: V9 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    X5_int;                                    // Basic: X5 
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
    // 01000 PRINT TAB(34);"KING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,34);strcat(buf,"KING");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "DO YOU WANT INSTRUCTIONS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT INSTRUCTIONS");fputs(buf,fh); };
    // 01060 INPUT Z$
    // Start of Basic INPUT statement 01060
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 N5=8
    N5_int = 8;
    // 01080 IF LEFT$(Z$,1)="N" THEN 1270
    if(LEFT$(Z_str,1)=='N')goto Lbl_01270;
    // 01090 IF Z$="AGAIN" THEN 3470
    if(strcmp(Z_str,"AGAIN")==0)goto Lbl_03470;
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "CONGRATULATIONS! YOU'VE JUST BEEN ELECTED PREMIER OF SETATS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS! YOU'VE JUST BEEN ELECTED PREMIER OF SETATS");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "DETINU, A SMALL COMMUNIST ISLAND 30 BY 70 MILES LONG. YOUR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DETINU, A SMALL COMMUNIST ISLAND 30 BY 70 MILES LONG. YOUR");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "JOB IS TO DECIDE UPON THE CONTRY'S BUDGET AND DISTRIBUTE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"JOB IS TO DECIDE UPON THE CONTRY'S BUDGET AND DISTRIBUTE");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "MONEY TO YOUR COUNTRYMEN FROM THE COMMUNAL TREASURY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MONEY TO YOUR COUNTRYMEN FROM THE COMMUNAL TREASURY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "THE MONEY SYSTEM IS RALLODS, AND EACH PERSON NEEDS 100"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE MONEY SYSTEM IS RALLODS, AND EACH PERSON NEEDS 100");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT "RALLODS PER YEAR TO SURVIVE. YOUR COUNTRY'S INCOME COMES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RALLODS PER YEAR TO SURVIVE. YOUR COUNTRY'S INCOME COMES");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT "FROM FARM PRODUCE AND TOURISTS VISITING YOUR MAGNIFICENT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FROM FARM PRODUCE AND TOURISTS VISITING YOUR MAGNIFICENT");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "FORESTS, HUNTING, FISHING, ETC. HALF YOUR LAND IS FARM LAND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FORESTS, HUNTING, FISHING, ETC. HALF YOUR LAND IS FARM LAND");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "WHICH ALSO HAS AN EXCELLENT MINERAL CONTENT AND MAY BE SOLD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHICH ALSO HAS AN EXCELLENT MINERAL CONTENT AND MAY BE SOLD");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "TO FOREIGN INDUSTRY (STRIP MINING) WHO IMPORT AND SUPPORT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO FOREIGN INDUSTRY (STRIP MINING) WHO IMPORT AND SUPPORT");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "THEIR OWN WORKERS. CROPS COST BETWEEN 10 AND 15 RALLODS PER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THEIR OWN WORKERS. CROPS COST BETWEEN 10 AND 15 RALLODS PER");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "SQUARE MILE TO PLANT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SQUARE MILE TO PLANT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "YOUR GOAL IS TO COMPLETE YOUR";N5;"YEAR TERM OF OFFICE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR GOAL IS TO COMPLETE YOUR"); b2c_INT(buf,N5_int);strcat(buf,"YEAR TERM OF OFFICE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "GOOD LUCK!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01270:
    // 01270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01280 A=INT(60000+(1000*RND(1))-(1000*RND(1)))
    A_int = INT(60000+(1000*RND(1))-(1000*RND(1)));
    // 01290 B=INT(500+(10*RND(1))-(10*RND(1)))
    B_int = INT(500+(10*RND(1))-(10*RND(1)));
    // 01300 D=2000
    D_int = 2000;

  Lbl_01310:
    // 01310 W=INT(10*RND(1)+95)
    W_int = INT(10*RND(1)+95);
    // 01320 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT "YOU NOW HAVE ";A;" RALLODS IN THE TREASURY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU NOW HAVE "); b2c_INT(buf,A_int);strcat(buf," RALLODS IN THE TREASURY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT INT(B);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_INT(buf,INT(B_int));fputs(buf,fh); };
    // 01350 PRINT "COUNTRYMEN, ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COUNTRYMEN, ");fputs(buf,fh); };
    // 01360 V9=INT(((RND(1)/2)*10+10))
    V9_int = INT(((RND(1)/2)*10+10));
    // 01370 IF C=0 THEN 1390
    if(C_int==0)goto Lbl_01390;
    // 01380 PRINT INT(C);"FOREIGN WORKERS, ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_INT(buf,INT(C_int));strcat(buf,"FOREIGN WORKERS, ");fputs(buf,fh); };

  Lbl_01390:
    // 01390 PRINT "AND";INT(D);"SQ. MILES OF LAND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND");b2c_INT(buf,INT(D_int));strcat(buf,"SQ. MILES OF LAND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01400 PRINT "THIS YEAR INDUSTRY WILL BUY LAND FOR";W;
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS YEAR INDUSTRY WILL BUY LAND FOR"); b2c_INT(buf,W_int);fputs(buf,fh); };
    // 01410 PRINT "RALLODS PER SQUARE MILE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RALLODS PER SQUARE MILE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT "LAND CURRENTLY COSTS";V9;"RALLODS PER SQUARE MILE TO PLANT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LAND CURRENTLY COSTS"); b2c_INT(buf,V9_int);strcat(buf,"RALLODS PER SQUARE MILE TO PLANT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01440:
    // 01440 PRINT "HOW MANY SQUARE MILES DO YOU WISH TO SELL TO INDUSTRY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY SQUARE MILES DO YOU WISH TO SELL TO INDUSTRY");fputs(buf,fh); };
    // 01450 INPUT H
    // Start of Basic INPUT statement 01450
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&H_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01450
    // 01460 IF H<0 THEN 1440
    if(H_int<0)goto Lbl_01440;
    // 01470 IF H<=D-1000 THEN 1560
    if(H_int<=D_int-1000)goto Lbl_01560;
    // 01480 PRINT "***  THINK AGAIN. YOU ONLY HAVE";D-1000;"SQUARE MILES OF FARM LAND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"***  THINK AGAIN. YOU ONLY HAVE"); b2c_INT(buf,D_int-1000);strcat(buf,"SQUARE MILES OF FARM LAND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 IF X<>0 THEN 1440
    if(X_int!=0)goto Lbl_01440;
    // 01500 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01510 PRINT "(FOREIGN INDUSTRY WILL ONLY BUY FARM LAND BECAUSE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(FOREIGN INDUSTRY WILL ONLY BUY FARM LAND BECAUSE");strcat(buf,"\n");fputs(buf,fh); };
    // 01520 PRINT "FOREST LAND IS UNECONOMICAL TO STRIP MINE DUE TO TREES,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOREST LAND IS UNECONOMICAL TO STRIP MINE DUE TO TREES,");strcat(buf,"\n");fputs(buf,fh); };
    // 01530 PRINT "THICKER TOP SOIL, ETC.)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THICKER TOP SOIL, ETC.)");strcat(buf,"\n");fputs(buf,fh); };
    // 01540 X=1
    X_int = 1;
    // 01550 GOTO 1440
    goto Lbl_01440;

  Lbl_01560:
    // 01560 D=INT(D-H)
    D_int = INT(D_int-H_int);
    // 01570 A=INT(A+(H*W))
    A_int = INT(A_int+(H_int*W_int));

  Lbl_01580:
    // 01580 PRINT "HOW MANY RALLODS WILL YOU DISTRIBUTE AMONG YOUR COUNTRYMEN";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY RALLODS WILL YOU DISTRIBUTE AMONG YOUR COUNTRYMEN");fputs(buf,fh); };
    // 01590 INPUT I
    // Start of Basic INPUT statement 01590
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&I_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01590
    // 01600 IF I<0 THEN 1580
    if(I_int<0)goto Lbl_01580;
    // 01610 IF I<A THEN 1690
    if(I_int<A_int)goto Lbl_01690;
    // 01620 IF I=A THEN 1650
    if(I_int==A_int)goto Lbl_01650;
    // 01630 PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS IN THE TREASURY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   THINK AGAIN. YOU'VE ONLY"); b2c_INT(buf,A_int);strcat(buf," RALLODS IN THE TREASURY");strcat(buf,"\n");fputs(buf,fh); };
    // 01640 GOTO 1580
    goto Lbl_01580;

  Lbl_01650:
    // 01650 J=0
    J_int = 0;
    // 01660 K=0
    K_int = 0;
    // 01670 A=0
    A_int = 0;
    // 01680 GOTO 2040
    goto Lbl_02040;

  Lbl_01690:
    // 01690 A=INT(A-I)
    A_int = INT(A_int-I_int);

  Lbl_01700:
    // 01700 PRINT "HOW MANY SQUARE MILES DO YOU WISH TO PLANT";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY SQUARE MILES DO YOU WISH TO PLANT");fputs(buf,fh); };
    // 01710 INPUT J
    // Start of Basic INPUT statement 01710
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&J_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01710
    // 01720 IF J<0 THEN 1700
    if(J_int<0)goto Lbl_01700;
    // 01730 IF J<=B*2 THEN 1760
    if(J_int<=B_int*2)goto Lbl_01760;
    // 01740 PRINT "   SORRY, BUT EACH COUNTRYMAN CAN ONLY PLANT 2 SQ. MILES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   SORRY, BUT EACH COUNTRYMAN CAN ONLY PLANT 2 SQ. MILES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01750 GOTO 1700
    goto Lbl_01700;

  Lbl_01760:
    // 01760 IF J<=D-1000 THEN 1790
    if(J_int<=D_int-1000)goto Lbl_01790;
    // 01770 PRINT "   SORRY, BUT YOU'VE ONLY";D-1000;"SQ. MILES OF FARM LAND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   SORRY, BUT YOU'VE ONLY"); b2c_INT(buf,D_int-1000);strcat(buf,"SQ. MILES OF FARM LAND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01780 GOTO 1700
    goto Lbl_01700;

  Lbl_01790:
    // 01790 U1=INT(J*V9)
    U1_int = INT(J_int*V9_int);
    // 01800 IF U1<A THEN 1870
    if(U1_int<A_int)goto Lbl_01870;
    // 01810 IF U1=A THEN 1840
    if(U1_int==A_int)goto Lbl_01840;
    // 01820 PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS LEFT IN THE TREASURY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   THINK AGAIN. YOU'VE ONLY"); b2c_INT(buf,A_int);strcat(buf," RALLODS LEFT IN THE TREASURY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01830 GOTO 1700
    goto Lbl_01700;

  Lbl_01840:
    // 01840 K=0
    K_int = 0;
    // 01850 A=0
    A_int = 0;
    // 01860 GOTO 2040
    goto Lbl_02040;

  Lbl_01870:
    // 01870 A=A-U1
    A_int = A_int-U1_int;

  Lbl_01880:
    // 01880 PRINT "HOW MANY RALLODS DO YOU WISH TO SPEND ON POLLUTION CONTROL";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY RALLODS DO YOU WISH TO SPEND ON POLLUTION CONTROL");fputs(buf,fh); };
    // 01890 INPUT K
    // Start of Basic INPUT statement 01890
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&K_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01890
    // 01900 IF K<0 THEN 1880
    if(K_int<0)goto Lbl_01880;
    // 01910 IF K<=A THEN 2040
    if(K_int<=A_int)goto Lbl_02040;
    // 01920 PRINT "   THINK AGAIN. YOU ONLY HAVE ";A;" RALLODS REMAINING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   THINK AGAIN. YOU ONLY HAVE "); b2c_INT(buf,A_int);strcat(buf," RALLODS REMAINING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01930 GOTO 1880
    goto Lbl_01880;

  Lbl_01940:
    // 01940 IF H<>0 THEN 2050
    if(H_int!=0)goto Lbl_02050;
    // 01950 IF I<>0 THEN 2050
    if(I_int!=0)goto Lbl_02050;
    // 01960 IF J<>0 THEN 2050
    if(J_int!=0)goto Lbl_02050;
    // 01970 IF K<>0 THEN 2050
    if(K_int!=0)goto Lbl_02050;
    // 01980 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01990 PRINT "GOODBYE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOODBYE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02000 PRINT "(IF YOU WISH TO CONTINUE THIS GAME AT A LATER DATE, ANSWER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(IF YOU WISH TO CONTINUE THIS GAME AT A LATER DATE, ANSWER");strcat(buf,"\n");fputs(buf,fh); };
    // 02010 PRINT "'AGAIN' WHEN ASKED IF YOU WANT INSTRUCTIONS AT THE START"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'AGAIN' WHEN ASKED IF YOU WANT INSTRUCTIONS AT THE START");strcat(buf,"\n");fputs(buf,fh); };
    // 02020 PRINT "OF THE GAME)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF THE GAME).");strcat(buf,"\n");fputs(buf,fh); };
    // 02030 STOP
    exit(1);

  Lbl_02040:
    // 02040 GOTO 1940
    goto Lbl_01940;

  Lbl_02050:
    // 02050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02070 A=INT(A-K)
    A_int = INT(A_int-K_int);
    // 02080 A4=A
    A4_int = A_int;
    // 02090 IF INT(I/100-B)>=0 THEN 2120
    if(INT(I_int/100-B_int)>=0)goto Lbl_02120;
    // 02100 IF I/100<50 THEN 3220
    if(I_int/100<50)goto Lbl_03220;
    // 02110 PRINT INT(B-(I/100));"COUNTRYMEN DIED OF STARVATION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_INT(buf,INT(B_int-(I_int/100)));strcat(buf,"COUNTRYMEN DIED OF STARVATION");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02120:
    // 02120 F1=INT(RND(1)*(2000-D))
    F1_int = INT(RND(1)*(2000-D_int));
    // 02130 IF K<25 THEN 2150
    if(K_int<25)goto Lbl_02150;
    // 02140 F1=INT(F1/(K/25))
    F1_int = INT(F1_int/(K_int/25));

  Lbl_02150:
    // 02150 IF F1<=0 THEN 2170
    if(F1_int<=0)goto Lbl_02170;
    // 02160 PRINT F1;"COUNTRYMEN DIED OF CARBON-MONOXIDE AND DUST INHALATION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F1_int);strcat(buf,"COUNTRYMEN DIED OF CARBON-MONOXIDE AND DUST INHALATION");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02170:
    // 02170 IF INT((I/100)-B)<0 THEN 2200
    if(INT((I_int/100)-B_int)<0)goto Lbl_02200;
    // 02180 IF F1>0 THEN 2250
    if(F1_int>0)goto Lbl_02250;
    // 02190 GOTO 2340
    goto Lbl_02340;

  Lbl_02200:
    // 02200 PRINT "   YOU WERE FORCED TO SPEND";INT((F1+(B-(I/100)))*9);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   YOU WERE FORCED TO SPEND");b2c_INT(buf,INT((F1_int+(B_int-(I_int/100)))*9));fputs(buf,fh); };
    // 02210 PRINT "RALLODS ON FUNERAL EXPENSES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RALLODS ON FUNERAL EXPENSES");strcat(buf,"\n");fputs(buf,fh); };
    // 02220 B5=INT(F1+(B-(I/100)))
    B5_int = INT(F1_int+(B_int-(I_int/100)));
    // 02230 A=INT(A-((F1+(B-(I/100)))*9))
    A_int = INT(A_int-((F1_int+(B_int-(I_int/100)))*9));
    // 02240 GOTO 2290
    goto Lbl_02290;

  Lbl_02250:
    // 02250 PRINT "   YOU WERE FORCED TO SPEND ";INT(F1*9);"RALLODS ON ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   YOU WERE FORCED TO SPEND ");b2c_INT(buf,INT(F1_int*9));strcat(buf,"RALLODS ON ");fputs(buf,fh); };
    // 02260 PRINT "FUNERAL EXPENSES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FUNERAL EXPENSES.");strcat(buf,"\n");fputs(buf,fh); };
    // 02270 B5=F1
    B5_int = F1_int;
    // 02280 A=INT(A-(F1*9))
    A_int = INT(A_int-(F1_int*9));

  Lbl_02290:
    // 02290 IF A>=0 THEN 2330
    if(A_int>=0)goto Lbl_02330;
    // 02300 PRINT "   INSUFFICIENT RESERVES TO COVER COST - LAND WAS SOLD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   INSUFFICIENT RESERVES TO COVER COST - LAND WAS SOLD");strcat(buf,"\n");fputs(buf,fh); };
    // 02310 D=INT(D+(A/W))
    D_int = INT(D_int+(A_int/W_int));
    // 02320 A=0
    A_int = 0;

  Lbl_02330:
    // 02330 B=INT(B-B5)
    B_int = INT(B_int-B5_int);

  Lbl_02340:
    // 02340 IF H=0 THEN 2390
    if(H_int==0)goto Lbl_02390;
    // 02350 C1=INT(H+(RND(1)*10)-(RND(1)*20))
    C1_int = INT(H_int+(RND(1)*10)-(RND(1)*20));
    // 02360 IF C>0 THEN 2380
    if(C_int>0)goto Lbl_02380;
    // 02370 C1=C1+20
    C1_int = C1_int+20;

  Lbl_02380:
    // 02380 PRINT C1;"WORKERS CAME TO THE COUNTRY AND";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,C1_int);strcat(buf,"WORKERS CAME TO THE COUNTRY AND");fputs(buf,fh); };

  Lbl_02390:
    // 02390 P1=INT(((I/100-B)/10)+(K/25)-((2000-D)/50)-(F1/2))
    P1_int = INT(((I_int/100-B_int)/10)+(K_int/25)-((2000-D_int)/50)-(F1_int/2));
    // 02400 PRINT ABS(P1);"COUNTRYMEN ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_INT(buf,ABS(P1_int));strcat(buf,"COUNTRYMEN ");fputs(buf,fh); };
    // 02410 IF P1<0 THEN 2440
    if(P1_int<0)goto Lbl_02440;
    // 02420 PRINT "CAME TO";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CAME TO");fputs(buf,fh); };
    // 02430 GOTO 2450
    goto Lbl_02450;

  Lbl_02440:
    // 02440 PRINT "LEFT";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LEFT");fputs(buf,fh); };

  Lbl_02450:
    // 02450 PRINT " THE ISLAND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," THE ISLAND.");strcat(buf,"\n");fputs(buf,fh); };
    // 02460 B=INT(B+P1)
    B_int = INT(B_int+P1_int);
    // 02470 C=INT(C+C1)
    C_int = INT(C_int+C1_int);
    // 02480 U2=INT(((2000-D)*((RND(1)+1.5)/2)))
    U2_int = INT(((2000-D_int)*((RND(1)+1.5)/2)));
    // 02490 IF C=0 THEN 2510
    if(C_int==0)goto Lbl_02510;
    // 02500 PRINT "OF ";INT(J);"SQ. MILES PLANTED,";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF ");b2c_INT(buf,INT(J_int));strcat(buf,"SQ. MILES PLANTED,");fputs(buf,fh); };

  Lbl_02510:
    // 02510 IF J>U2 THEN 2530
    if(J_int>U2_int)goto Lbl_02530;
    // 02520 U2=J
    U2_int = J_int;

  Lbl_02530:
    // 02530 PRINT " YOU HARVESTED ";INT(J-U2);"SQ. MILES OF CROPS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," YOU HARVESTED ");b2c_INT(buf,INT(J_int-U2_int));strcat(buf,"SQ. MILES OF CROPS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02540 IF U2=0 THEN 2600
    if(U2_int==0)goto Lbl_02600;
    // 02550 IF T1>=2 THEN 2600
    if(T1_int>=2)goto Lbl_02600;
    // 02560 PRINT "   (DUE TO ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   (DUE TO ");fputs(buf,fh); };
    // 02570 IF T1=0 THEN 2590
    if(T1_int==0)goto Lbl_02590;
    // 02580 PRINT "INCREASED ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INCREASED ");fputs(buf,fh); };

  Lbl_02590:
    // 02590 PRINT "AIR AND WATER POLLUTION FROM FOREIGN INDUSTRY.)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AIR AND WATER POLLUTION FROM FOREIGN INDUSTRY.)");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02600:
    // 02600 Q=INT((J-U2)*(W/2))
    Q_int = INT((J_int-U2_int)*(W_int/2));
    // 02610 PRINT "MAKING";INT(Q);"RALLODS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MAKING");b2c_INT(buf,INT(Q_int));strcat(buf,"RALLODS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02620 A=INT(A+Q)
    A_int = INT(A_int+Q_int);
    // 02630 V1=INT(((B-P1)*22)+(RND(1)*500))
    V1_int = INT(((B_int-P1_int)*22)+(RND(1)*500));
    // 02640 V2=INT((2000-D)*15)
    V2_int = INT((2000-D_int)*15);
    // 02650 PRINT " YOU MADE";ABS(INT(V1-V2));"RALLODS FROM TOURIST TRADE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," YOU MADE");b2c_INT(buf,ABS(INT(V1_int-V2_int)));strcat(buf,"RALLODS FROM TOURIST TRADE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02660 IF V2=0 THEN 2750
    if(V2_int==0)goto Lbl_02750;
    // 02670 IF V1-V2>=V3 THEN 2750
    if(V1_int-V2_int>=V3_int)goto Lbl_02750;
    // 02680 PRINT "   DECREASE BECAUSE ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   DECREASE BECAUSE ");fputs(buf,fh); };
    // 02690 G1=10*RND(1)
    G1_int = 10*RND(1);
    // 02700 IF G1<=2 THEN 2780
    if(G1_int<=2)goto Lbl_02780;
    // 02710 IF G1<=4 THEN 2800
    if(G1_int<=4)goto Lbl_02800;
    // 02720 IF G1<=6 THEN 2820
    if(G1_int<=6)goto Lbl_02820;
    // 02730 IF G1<=8 THEN 2840
    if(G1_int<=8)goto Lbl_02840;
    // 02740 IF G1<=10 THEN 2860
    if(G1_int<=10)goto Lbl_02860;

  Lbl_02750:
    // 02750 V3=INT(A+V3)
    V3_int = INT(A_int+V3_int);
    // 02760 A=INT(A+V3)
    A_int = INT(A_int+V3_int);
    // 02770 GOTO 2880
    goto Lbl_02880;

  Lbl_02780:
    // 02780 PRINT "FISH POPULATION HAS DWINDLED DUE TO WATER POLLUTION."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FISH POPULATION HAS DWINDLED DUE TO WATER POLLUTION.");strcat(buf,"\n");fputs(buf,fh); };
    // 02790 GOTO 2750
    goto Lbl_02750;

  Lbl_02800:
    // 02800 PRINT "AIR POLLUTION IS KILLING GAME BIRD POPULATION."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AIR POLLUTION IS KILLING GAME BIRD POPULATION.");strcat(buf,"\n");fputs(buf,fh); };
    // 02810 GOTO 2750
    goto Lbl_02750;

  Lbl_02820:
    // 02820 PRINT "MINERAL BATHS ARE BEING RUINED BY WATER POLLUTION."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MINERAL BATHS ARE BEING RUINED BY WATER POLLUTION.");strcat(buf,"\n");fputs(buf,fh); };
    // 02830 GOTO 2750
    goto Lbl_02750;

  Lbl_02840:
    // 02840 PRINT "UNPLEASANT SMOG IS DISCOURAGING SUN BATHERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"UNPLEASANT SMOG IS DISCOURAGING SUN BATHERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02850 GOTO 2750
    goto Lbl_02750;

  Lbl_02860:
    // 02860 PRINT "HOTELS ARE LOOKING SHABBY DUE TO SMOG GRIT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOTELS ARE LOOKING SHABBY DUE TO SMOG GRIT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02870 GOTO 2750
    goto Lbl_02750;

  Lbl_02880:
    // 02880 IF B5>200 THEN 3070
    if(B5_int>200)goto Lbl_03070;
    // 02890 IF B<343 THEN 3220
    if(B_int<343)goto Lbl_03220;
    // 02900 IF (A4/100)>5 THEN 3280
    if((A4_int/100)>5)goto Lbl_03280;

  Lbl_02910:
    // 02910 IF C>B THEN 2940
    if(C_int>B_int)goto Lbl_02940;
    // 02920 IF N5-1=X5 THEN 3380
    if(N5_int-1==X5_int)goto Lbl_03380;
    // 02930 GOTO 3700
    goto Lbl_03700;

  Lbl_02940:
    // 02940 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02950 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02960 PRINT "THE NUMBER OF FOREIGN WORKERS HAS EXCEEDED THE NUMBER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE NUMBER OF FOREIGN WORKERS HAS EXCEEDED THE NUMBER");strcat(buf,"\n");fputs(buf,fh); };
    // 02970 PRINT "OF COUNTRYMEN. AS A MINORITY, THEY HAVE REVOLTED AND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF COUNTRYMEN. AS A MINORITY, THEY HAVE REVOLTED AND");strcat(buf,"\n");fputs(buf,fh); };
    // 02980 PRINT "TAKEN OVER THE COUNTRY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TAKEN OVER THE COUNTRY.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02990:
    // 02990 IF RND(1)<=.5 THEN 3030
    if(RND(1)<=0.5)goto Lbl_03030;
    // 03000 PRINT "YOU HAVE BEEN THROWN OUT OF OFFICE AND ARE NOW"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE BEEN THROWN OUT OF OFFICE AND ARE NOW");strcat(buf,"\n");fputs(buf,fh); };
    // 03010 PRINT "RESIDING IN PRISON."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RESIDING IN PRISON.");strcat(buf,"\n");fputs(buf,fh); };
    // 03020 GOTO 3040
    goto Lbl_03040;

  Lbl_03030:
    // 03030 PRINT "YOU HAVE BEEN ASSASSINATED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE BEEN ASSASSINATED.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03040:
    // 03040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03060 STOP
    exit(1);

  Lbl_03070:
    // 03070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03090 PRINT B5;"COUNTRYMEN DIED IN ONE YEAR!!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,B5_int);strcat(buf,"COUNTRYMEN DIED IN ONE YEAR!!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 03100 PRINT "DUE TO THIS EXTREME MISMANAGEMENT, YOU HAVE NOT ONLY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DUE TO THIS EXTREME MISMANAGEMENT, YOU HAVE NOT ONLY");strcat(buf,"\n");fputs(buf,fh); };
    // 03110 PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE, BUT YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BEEN IMPEACHED AND THROWN OUT OF OFFICE, BUT YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 03120 M6=INT(RND(1)*10)
    M6_int = INT(RND(1)*10);
    // 03130 IF M6<=3 THEN 3160
    if(M6_int<=3)goto Lbl_03160;
    // 03140 IF M6<=6 THEN 3180
    if(M6_int<=6)goto Lbl_03180;
    // 03150 IF M6<=10 THEN 3200
    if(M6_int<=10)goto Lbl_03200;

  Lbl_03160:
    // 03160 PRINT "ALSO HAD YOUR LEFT EYE GOUGED OUT!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ALSO HAD YOUR LEFT EYE GOUGED OUT!");strcat(buf,"\n");fputs(buf,fh); };
    // 03170 GOTO 3040
    goto Lbl_03040;

  Lbl_03180:
    // 03180 PRINT "HAVE ALSO GAINED A VERY BAD REPUTATION."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAVE ALSO GAINED A VERY BAD REPUTATION.");strcat(buf,"\n");fputs(buf,fh); };
    // 03190 GOTO 3040
    goto Lbl_03040;

  Lbl_03200:
    // 03200 PRINT "HAVE ALSO BEEN DECLARED NATIONAL FINK."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAVE ALSO BEEN DECLARED NATIONAL FINK.");strcat(buf,"\n");fputs(buf,fh); };
    // 03210 GOTO 3040
    goto Lbl_03040;

  Lbl_03220:
    // 03220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03230 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03240 PRINT "OVER ONE THIRD OF THE POPULTATION HAS DIED SINCE YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OVER ONE THIRD OF THE POPULTATION HAS DIED SINCE YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 03250 PRINT "WERE ELECTED TO OFFICE. THE PEOPLE (REMAINING)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WERE ELECTED TO OFFICE. THE PEOPLE (REMAINING)");strcat(buf,"\n");fputs(buf,fh); };
    // 03260 PRINT "HATE YOUR GUTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HATE YOUR GUTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 03270 GOTO 2990
    goto Lbl_02990;

  Lbl_03280:
    // 03280 IF B5-F1<2 THEN 2910
    if(B5_int-F1_int<2)goto Lbl_02910;
    // 03290 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03300 PRINT "MONEY WAS LEFT OVER IN THE TREASURY WHICH YOU DID"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MONEY WAS LEFT OVER IN THE TREASURY WHICH YOU DID");strcat(buf,"\n");fputs(buf,fh); };
    // 03310 PRINT "NOT SPEND. AS A RESULT, SOME OF YOUR COUNTRYMEN DIED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOT SPEND. AS A RESULT, SOME OF YOUR COUNTRYMEN DIED");strcat(buf,"\n");fputs(buf,fh); };
    // 03320 PRINT "OF STARVATION. THE PUBLIC IS ENRAGED AND YOU HAVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF STARVATION. THE PUBLIC IS ENRAGED AND YOU HAVE");strcat(buf,"\n");fputs(buf,fh); };
    // 03330 PRINT "BEEN FORCED TO EITHER RESIGN OR COMMIT SUICIDE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BEEN FORCED TO EITHER RESIGN OR COMMIT SUICIDE.");strcat(buf,"\n");fputs(buf,fh); };
    // 03340 PRINT "THE CHOICE IS YOURS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CHOICE IS YOURS.");strcat(buf,"\n");fputs(buf,fh); };
    // 03350 PRINT "IF YOU CHOOSE THE LATTER, PLEASE TURN OFF YOUR COMPUTER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF YOU CHOOSE THE LATTER, PLEASE TURN OFF YOUR COMPUTER");strcat(buf,"\n");fputs(buf,fh); };
    // 03360 PRINT "BEFORE PROCEEDING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BEFORE PROCEEDING.");strcat(buf,"\n");fputs(buf,fh); };
    // 03370 GOTO 3040
    goto Lbl_03040;

  Lbl_03380:
    // 03380 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03390 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03400 PRINT "CONGRATULATIONS!!!!!!!!!!!!!!!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS!!!!!!!!!!!!!!!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 03410 PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR";N5;"YEAR TERM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE SUCCESFULLY COMPLETED YOUR"); b2c_INT(buf,N5_int);strcat(buf,"YEAR TERM");strcat(buf,"\n");fputs(buf,fh); };
    // 03420 PRINT "OF OFFICE. YOU WERE, OF COURSE, EXTREMELY LUCKY, BUT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF OFFICE. YOU WERE, OF COURSE, EXTREMELY LUCKY, BUT");strcat(buf,"\n");fputs(buf,fh); };
    // 03430 PRINT "NEVERTHELESS, IT'S QUITE AN ACHIEVEMENT. GOODBYE AND GOOD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NEVERTHELESS, IT'S QUITE AN ACHIEVEMENT. GOODBYE AND GOOD");strcat(buf,"\n");fputs(buf,fh); };
    // 03440 PRINT "LUCK - YOU'LL PROBABLY NEED IT IF YOU'RE THE TYPE THAT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LUCK - YOU'LL PROBABLY NEED IT IF YOU'RE THE TYPE THAT");strcat(buf,"\n");fputs(buf,fh); };
    // 03450 PRINT "PLAYS THIS GAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLAYS THIS GAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 03460 GOTO 3040
    goto Lbl_03040;

  Lbl_03470:
    // 03470 PRINT "HOW MANY YEARS HAD YOU BEEN IN OFFICE WHEN INTERRUPTED";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY YEARS HAD YOU BEEN IN OFFICE WHEN INTERRUPTED");fputs(buf,fh); };
    // 03480 INPUT X5
    // Start of Basic INPUT statement 03480
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X5_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03480
    // 03490 IF X5<0 THEN 3040
    if(X5_int<0)goto Lbl_03040;
    // 03500 IF X5<8 THEN 3530
    if(X5_int<8)goto Lbl_03530;
    // 03510 PRINT "   COME ON, YOUR TERM IN OFFICE IS ONLY";N5;"YEARS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   COME ON, YOUR TERM IN OFFICE IS ONLY"); b2c_INT(buf,N5_int);strcat(buf,"YEARS.");strcat(buf,"\n");fputs(buf,fh); };
    // 03520 GOTO 3470
    goto Lbl_03470;

  Lbl_03530:
    // 03530 PRINT "HOW MUCH DID YOU HAVE IN THE TREASURY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MUCH DID YOU HAVE IN THE TREASURY");fputs(buf,fh); };
    // 03540 INPUT A
    // Start of Basic INPUT statement 03540
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03540
    // 03550 IF A<0 THEN 3040
    if(A_int<0)goto Lbl_03040;
    // 03560 PRINT "HOW MANY COUNTRYMEN";    
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY COUNTRYMEN");fputs(buf,fh); };
    // 03570 INPUT B
    // Start of Basic INPUT statement 03570
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03570
    // 03580 IF B<0 THEN 3040
    if(B_int<0)goto Lbl_03040;
    // 03590 PRINT "HOW MANY WORKERS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY WORKERS");fputs(buf,fh); };
    // 03600 INPUT C
    // Start of Basic INPUT statement 03600
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03600
    // 03610 IF C<0 THEN 3040
    if(C_int<0)goto Lbl_03040;

  Lbl_03620:
    // 03620 PRINT "HOW MANY SQUARE MILES OF LAND";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY SQUARE MILES OF LAND");fputs(buf,fh); };
    // 03630 INPUT D
    // Start of Basic INPUT statement 03630
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03630
    // 03640 IF D<0 THEN 3040
    if(D_int<0)goto Lbl_03040;
    // 03650 IF D>2000 THEN 3670
    if(D_int>2000)goto Lbl_03670;
    // 03660 IF D>13100 THEN 100
    if(D_int>1000)goto Lbl_01310;

  Lbl_03670:
    // 03670 PRINT "   COME ON, YOU STARTED WITH 1000 SQ. MILES OF FARM LAND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   COME ON, YOU STARTED WITH 1000 SQ. MILES OF FARM LAND");strcat(buf,"\n");fputs(buf,fh); };
    // 03680 PRINT "   AND 10,000 SQ. MILES OF FOREST LAND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   AND 10,000 SQ. MILES OF FOREST LAND.");strcat(buf,"\n");fputs(buf,fh); };
    // 03690 GOTO 3620
    goto Lbl_03620;

  Lbl_03700:
    // 03700 X5=X5+1
    X5_int = X5_int+1;
    // 03710 B5=0
    B5_int = 0;
    // 03720 GOTO 1310
    goto Lbl_01310;
    // 03730 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
