# NOTE: Type forced to be:
# gwba - GW-BASIC tokenized file (or BASICA)
   10 DIM X(800),Y(800),X2(800),Y2(800),V(800),W(800),V1(800),F1(800),D(30),F(30)
   20 D(5)=0.878:D(6)=0.811:D(7)=0.754:D(8)=0.707:D(9)=0.666:D(10)=0.632:D(11)=0.602:D(12)=0.576:D(13)=0.553:D(14)=0.532:D(15)=0.514:D(16)=0.497:D(17)=0.482:D(18)=0.468
   30 D(19)=0.456:D(20)=0.444:D(22)=0.423:D(24)=0.404:D(26)=0.388:D(28)=0.374:D(30)=0.361:W$(0)=CHR$(179):W$(2)="|":W1$(0)=CHR$(180):W1$(2)="+":W2$(0)=CHR$(192):W2$(2)="+":W3$(0)=CHR$(196):W3$(2)="-":W4$(0)=CHR$(194):W4$(2)="+"
   40 CLS:SCREEN 0,0,0:KEY OFF:COLOR 13,0:PRINT:PRINT,"  A N   A S P E C T   O F":PRINT,"    S T A T I S T I C S":SP=7
   50 COLOR 5,0:PRINT:PRINT:PRINT," A program by Leon Baradat"
   60 PRINT,"  to compute correlations":PRINT,"     for binomial data"
   70 COLOR 6,0:PRINT:PRINT:PRINT,"       ** WELCOME **":GOTO 85
   80 CLS
   85 PRINT:PRINT:PRINT,"What option would you like?":GOSUB 1670:FOR A=1 TO N:X(A)=0:Y(A)=0:X2(A)=0:Y2(A)=0:NEXT:N=0:NV=1:B1=0:B0=0:SE=0
   90 PRINT," A)  Input Data:  Format  INPUT [X,Y]"
  100 PRINT," B)  Input Data:  Format  INPUT [X]: INPUT [Y]"
  110 PRINT," C)  Recall Data from computer banks"
  120 PRINT," D)  Rename a Data file"
  130 PRINT," E)  Erase a Data file"
  140 PRINT," F)  Exit program"
  150 A$=INKEY$:IF A$="" THEN 150
  160 A=ASC(A$):IF A<65 OR A>122 THEN 150 ELSE IF A>96 THEN A=A-32
  170 IF A>70 THEN 150 ELSE CLS:ON A-64 GOTO 180,1210,1060,1300,1340,1420
  180 GOSUB 1380
  190 PRINT,"INPUT X and Y:":PRINT:PRINT "       (Enter `s,' or `S,' to stop)":PRINT "  (Enter `b,' or `B,' to back up a step)":PRINT:GOSUB 1670
  200 PRINT " "N+1;TAB(9);"=",:INPUT X$,Y$:IF LEFT$(X$,1)="s" OR LEFT$(X$,1)="S" OR LEFT$(Y$,1)="s" OR LEFT$(Y$,1)="S" THEN 1430
  210 IF LEFT$(X$,1)="b" OR LEFT$(X$,1)="B" OR LEFT$(Y$,1)="b" OR LEFT$(Y$,1)="B" THEN IF N<=0 THEN 200 ELSE PRINT CHR$(30);TAB(1);STRING$(40,32);STRING$(2,30);TAB(1);STRING$(40,32);CHR$(30);TAB(1);:N=N-1:GOTO 200
  220 N=N+1:X(N)=VAL(X$):Y(N)=VAL(Y$):GOTO 200
  230 IF N<1 THEN 1430
  235 IF SUX<>0 AND SUY< 0 THEN 290 ELSE FOR A=1 TO N:X2(A)=X(A)^2:Y2(A)=Y(A)^2:SUX=SUX+X(A):SUX2=SUX2+X2(A):SUY=SUY+Y(A):SUY2=SUY2+Y2(A):XY=XY+X(A)*Y(A):NEXT
  240 XA=SUX/N:YA=SUY/N
  250 SX=SQR(ABS((N*SUX2-SUX^2)/(N*(N-1)))):SY=SQR(ABS((N*SUY2-SUY^2)/(N*(N-1))))
  260 R=(N*XY-SUX*SUY)/(SQR(ABS(N*SUX2-SUX^2))*SQR(ABS(N*SUY2-SUY^2)))
  270 B1=(N*XY-SUX*SUY)/(N*SUX2-SUX^2)
  280 B0=YA-B1*XA
  290 COLOR 7,0:IF XX$<>"" THEN PRINT "Currently in file:  ";:COLOR 15,1:PRINT XX$:COLOR 7,0
  300 PRINT:PRINT "Number:","n ="N,,CHR$(228)"x ="SUX:PRINT,,,CHR$(228)"y ="SUY
  310 PRINT "Mean:","X ="XA:PRINT,"Y ="YA,,CHR$(228)"x"CHR$(253)" ="SUX2:PRINT,,,CHR$(228)"y"CHR$(253)" ="SUY2
  320 PRINT "Standard Deviation:  s ="SX:PRINT,"       s ="SY,CHR$(228)"xy ="XY:PRINT
  330 FOR A=1 TO N:V(A)=X(A):W(A)=Y(A):NEXT:N1=N
  340 IF XM<>0 AND YM<>0 THEN 440 ELSE COLOR 0,7:PRINT "Calculating the Median...":COLOR 7,0
  345 SX=0:SX1=0:FOR A=1 TO N1:IF V(A)>SX THEN SX=V(A):SX1=A
  350 NEXT:FOR A1=SX1 TO N1:V(A1)=V(A1+1):NEXT:N1=N1-1:IF N1<1 THEN XM=SX:N1=N:GOTO 390
  360 TX=1.138052e-149#:TX1=TX:FOR A=1 TO N1:IF V(A)<TX THEN TX=V(A):TX1=A
  370 NEXT:FOR A1=TX1 TO N1:V(A1)=V(A1+1):NEXT:N1=N1-1:IF N1<1 THEN XM=(TX+SX)/2:N1=N:GOTO 390
  380 GOTO 345
  390 SX=0:SX1=0:FOR A=1 TO N1:IF W(A)>SX THEN SX=W(A):SX1=A
  400 NEXT:FOR A1=SX1 TO N1:W(A1)=W(A1+1):NEXT:N1=N1-1:IF N1<1 THEN YM=SX:GOTO 440
  410 TX=1.138052e-149#:TX1=TX:FOR A=1 TO N1:IF W(A)<TX THEN TX=W(A):TX1=A
  420 NEXT:FOR A1=TX1 TO N1:W(A1)=W(A1+1):NEXT:N1=N1-1:IF N1<1 THEN YM=(TX+SX)/2:GOTO 440
  430 GOTO 390
  440 PRINT CHR$(30);STRING$(79,32):PRINT CHR$(30);"Median:","X ="XM:PRINT,"Y ="YM
  450 IF N<31 THEN DP=D(N)
  460 IF N<5 THEN DP=0.878+(5-N)*0.0244
  470 IF N>20 AND N<30 AND INT(N/2)<>N/2 THEN DP=D(N-1)-(D(N-1)-D(N+1))/2
  480 IF N>30 AND N<40 THEN DP=0.361-0.0049*(N-30)
  490 IF N>39 AND N<50 THEN DP=0.312-0.0033*(N-40)
  500 IF N>49 AND N<60 THEN DP=0.279-0.0025*(N-50)
  510 IF N>59 AND N<80 THEN DP=0.254-0.0017*(N-60)
  520 IF N>79 AND N<100 THEN DP=0.22-0.0012*(N-80)
  530 IF N>99 THEN DP=0.196
  540 PRINT:PRINT "Coefficient needed to presume correlation ="DP
  550 PRINT "Correlation Coefficient:  r ="R:PRINT
  560 IF ABS(R)<DP THEN PRINT "The sample does not provide sufficient evidence to conclude that a":PRINT "connection exists between ";:GOSUB 1720:GOTO 590
  570 IF R=>0 THEN PRINT "The sample does provide sufficient evidence to conclude that a":PRINT "positive correlation exists between ";:GOSUB 1720
  580 IF R<0 THEN PRINT "The sample does provide sufficient evidence to conclude that a":PRINT "negative correlation exists between ";:GOSUB 1720
  590 IF N<5 THEN PRINT " However, an inadequate number of trials were made":PRINT " to assure a reasonable degree of acccuracy."
  600 PRINT:PRINT "The Best-Fitting Line:   y ="STR$(B1)"x +"B0
  610 A$=INKEY$:IF A$="" THEN 610
  620 GOTO 1430
  630 COLOR 7,0:IF B1=0 AND B0=0 THEN LOCATE 10:PRINT "Error: You must view data readout first.":PRINT:LINE INPUT "      Press Enter to continue.";A$:GOTO 1430
  660 SX=0:SXX=0:TX=1.138052e-149#:TXX=TX:FOR A=1 TO N:IF X(A)>SX THEN SX=X(A)
  670 IF X(A)<TX THEN TX=X(A)
  680 IF Y(A)>SXX THEN SXX=Y(A)
  690 IF Y(A)<TXX THEN TXX=Y(A)
  700 NEXT
  710 PRINT:PRINT,," X"," Y"
  720 XX=1:TX1=1
  730 TXX1=1
  740 PRINT"Highest Variable:",SX,SXX:XS=0:SL=0
  750 PRINT"Lowest Variable:",TX,TXX:XXS=0
  760 PRINT:PRINT"Difference:",,SX-TX,SXX-TXX:PRINT:PRINT
  770 LOCATE 11:PRINT"Scatter Diagram:":IF TG=0 THEN PRINT" 0. Use High-Res Graphics" ELSE PRINT" 0. Use Text Graphics    "
  775 PRINT" 1. Points only":PRINT" 2. Best-Fitting Line":PRINT" 3. Both Points & Line":PRINT" 4. Reset High & Low Points":PRINT" 5. Return to Menu"
  780 A$=INKEY$:IF A$="" THEN 780 ELSE IF A$="0" THEN IF TG=0 THEN TG=2 ELSE TG=0
  790 IF A$="0" THEN 770 ELSE AA=VAL(A$):IF AA<1 OR AA>5 THEN 780
  791 IF AA<>4 THEN 800 ELSE FOR A=11 TO 16:LOCATE A:PRINT STRING$(25,32):NEXT
  793 LOCATE 11:INPUT "Highest value of X";SX:INPUT " Lowest value of X";TX
  795 PRINT:INPUT "Highest value of Y";SXX:INPUT " Lowest value of Y";TXX:CLS:GOTO 710
  800 IF AA=5 THEN 1430
  830 Y=SXX/60:ON ERROR GOTO 0
  840 CLS:SCREEN TG:P1$=P$:IF LEN(Q$)>20 THEN Q1$=LEFT$(Q$,20) ELSE Q1$=Q$
  842 IF RIGHT$(Q1$,1)=" " OR MID$(Q$,21,1)=" " OR MID$(Q$,20,1)=". " THEN 845 ELSE FOR A=20 TO 15 STEP -1
  843 IF MID$(Q1$,A,1)=" " THEN Q1$=LEFT$(Q1$,A-1)
  844 NEXT
  845 IF ASC(LEFT$(Q1$,1))>96 THEN MID$(Q1$,1,1)=CHR$(ASC(LEFT$(Q1$,1))-32)
  847 IF ASC(LEFT$(P1$,1))>96 THEN MID$(P1$,1,1)=CHR$(ASC(LEFT$(P1$,1))-32)
  850 BX=0:IF TX*3>SX-TX OR TX<0 THEN BX=TX
  855 IX=(SX-BX)/68
  860 BY=0:IF TXX*3>SXX-TXX OR TXX<0 THEN BY=TXX
  865 IY=19/(SXX-BY)
  870 FOR A=1 TO LEN(Q1$):LOCATE A+(20-LEN(Q1$))/2:PRINT MID$(Q1$,A,1):NEXT:FOR A=1 TO 20:LOCATE A,6:PRINT W$(TG):NEXT:FOR A=18 TO 1 STEP -3:LOCATE A,6:PRINT W1$(TG):NEXT
  880 LOCATE 23,6+(73-LEN(P1$))/2:PRINT P1$:LOCATE 21,6:PRINT W2$(TG);:FOR A=1 TO 7:PRINT STRING$(9,W3$(TG));W4$(TG);:NEXT
  882 FOR A=1 TO 7:LOCATE 22,6+A*10-INT(LEN(STR$(INT(100*A*IX)/10+BX))/2):PRINT INT(100*A*IX)/10+BX:NEXT:FOR A=6 TO 1 STEP -1:IY$=LEFT$(STR$(BY+(20-A*3)/IY),4):IF VAL(IY$)=>0 THEN IY$=LEFT$(RIGHT$(IY$,LEN(IY$)-1),4)
  883 IF RIGHT$(IY$,1)="." THEN IY$=" "+LEFT$(IY$,3)
  884 IF LEN(IY$)<4 THEN IY$=STRING$(4-LEN(IY$),32)+IY$ ELSE IF ABS(BY+(20-A*3)/IY)<=0.09 THEN IY$="  "+CHR$(247)+"0"
  885 LOCATE A*3,2:PRINT IY$:NEXT:IF TG=2 THEN 3010
  890 IF AA=1 THEN 895 ELSE FOR A=BX TO SX STEP IX:U=20-(A*B1+B0-BY)*IY:UU=7+(A-BX)/IX:IF U=>1 AND U<=20 AND UU>4 AND UU<80 THEN LOCATE U,UU:PRINT CHR$(250)
  892 NEXT
  895 IF AA<>2 THEN COLOR 15,0:FOR A=1 TO N:LOCATE 20-(Y(A)-BY)*IY,7+(X(A)-BX)/IX:PRINT CHR$(249):NEXT:COLOR 7,0
  900 A$=INKEY$:IF A$="" THEN 900
  910 CLS:SCREEN 0,0,0:GOTO 710
  920 COLOR 5,0:PRINT:PRINT:IF XX$<>"" THEN PRINT "Presently in file:  "XX$
  930 PRINT:PRINT "[Press Enter to return to menu]":PRINT:PRINT:INPUT "What will be the name of the data file";X$:IF X$="" THEN 1430
  940 OPEN "O",#1,X$
  950 PRINT #1,P$
  960 PRINT #1,Q$
  970 PRINT #1,XM
  980 PRINT #1,YM
  990 PRINT #1,N
 1000 FOR A=1 TO N
 1010 PRINT #1,X(A)
 1020 PRINT #1,Y(A)
 1030 NEXT
 1040 CLOSE #1
 1050 GOTO 1430
 1060 U$="pull data from":GOSUB 2900
 1080 OPEN "I",#1,XX$
 1090 LINE INPUT #1,P$
 1100 LINE INPUT #1,Q$
 1110 INPUT #1,XM
 1120 INPUT #1,YM
 1130 INPUT #1,N
 1140 FOR A=1 TO N
 1150 INPUT #1,X(A)
 1160 INPUT #1,Y(A)
 1170 NEXT
 1180 CLOSE #1
 1185 IF N<1 THEN 2990
 1190 FOR A=1 TO LEN(XX$):IF ASC(MID$(XX$,A,1))>96 THEN MID$(XX$,A,1)=CHR$(ASC(MID$(XX$,A,1))-32)
 1200 NEXT:GOTO 1430
 1210 GOSUB 1380
 1220 PRINT,"INPUT X:":PRINT:PRINT "     (Enter `s' or `S' to stop)":PRINT "(Enter `b' or `B' to back up a step)":PRINT:GOSUB 1670
 1230 PRINT " "N+1;TAB(9);"=",:INPUT X$:IF LEFT$(X$,1)="s" OR LEFT$(X$,1)="S" THEN 1260
 1240 IF LEFT$(X$,1)="b" OR LEFT$(X$,1)="B" THEN IF N<=0 THEN 1230 ELSE PRINT CHR$(30);TAB(1);STRING$(40,32);STRING$(2,30);TAB(1);STRING$(40,32);CHR$(30);TAB(1);:N=N-1:GOTO 1230
 1250 N=N+1:X(N)=VAL(X$):GOTO 1230
 1260 PRINT:PRINT:PRINT,"INPUT Y:":PRINT:FOR A=NV TO N
 1270 PRINT " "X(A),:INPUT Y$
 1280 IF LEFT$(Y$,1)="b" OR LEFT$(Y$,1)="B" THEN IF A<=1 THEN 1270 ELSE PRINT CHR$(30);TAB(1);STRING$(40,32);STRING$(2,30);TAB(1);STRING$(40,32);CHR$(30);TAB(1);:A=A-1:GOTO 1270
 1290 Y(A)=VAL(Y$):NEXT:GOTO 1430
 1300 U$="change":GOSUB 2900
 1320 PRINT "Change the name of ";:COLOR 14:PRINT XX$;:COLOR 6:PRINT " to? ";:COLOR 14:LINE INPUT X1$:COLOR 6
 1330 IF X1$="" THEN 80 ELSE NAME XX$ AS X1$:GOTO 2930
 1340 U$="delete":GOSUB 2900
 1360 KILL XX$:GOTO 2930
 1370 PRINT " and "Q$".":RETURN
 1380 PRINT:PRINT "         I N P U T    D A T A":PRINT
 1390 PRINT:PRINT "The comparison of data will be between:":PRINT:SE=1
 1400 LINE INPUT P$:PRINT,"and:"
 1410 LINE INPUT Q$:CLS:RETURN
 1420 COLOR 7,0:END
 1430 CLS:COLOR 6,0:PRINT:PRINT:PRINT:IF XX$<>"" THEN PRINT,"    In File: "XX$
 1440 PRINT:PRINT,"What would you like to do now?"
 1450 PRINT," A)  View Data Readout
 1460 PRINT," B)  View Scatter Diagram
 1470 PRINT," C)  Add to Data: Format X,Y
 1480 PRINT," D)  Add to Data: Format X-Y":NV=N+1
 1490 PRINT," E)  Change names to compare
 1500 PRINT," F)  Reverse X and Y
 1510 PRINT," G)  See/Edit Data
 1520 PRINT," H)  Print Data Readout
 1530 PRINT," I)  Print Raw Data
 1535 PRINT," J)  Explanations of Readout
 1540 PRINT," K)  Save Data
 1550 PRINT," L)  Quit Data
 1560 A$=INKEY$:IF A$="" THEN 1560
 1570 IF ASC(A$)<65 THEN 1560 ELSE IF ASC(A$)>96 THEN A$=CHR$(ASC(A$)-32)
 1580 CLS:ON ASC(A$)-64 GOTO 230,630,190,1220,1680,1760,1600,2060,1790,2400,920,2800
 1590 GOTO 1430
 1600 COLOR 7,0:PRINT "Press 0-9 to change speed":FOR A=1 TO N:PRINT " "A,X(A)","Y(A)
 1610 A$=INKEY$:IF A$<>"" AND VAL(A$)=0 AND A$<>"0" THEN 1630
 1615 IF VAL(A$)>0 OR A$="0" THEN SP=VAL(A$)
 1617 IF SP=0 THEN 1610
 1620 FOR A1=1 TO 100*(10-SP)^1.5:NEXT:NEXT:PRINT "* End of scroll *"
 1630 PRINT "Command (? for info) ";
 1631 B$=INKEY$:IF B$="" THEN 1631 ELSE PRINT B$
 1632 IF B$="?" THEN PRINT "  a  add a line":PRINT "  b  back to beginning":PRINT "  c  continue scrolling":PRINT "  d  delete a line":PRINT "  e  edit a line":PRINT "  r  return to menu":GOTO 1630
 1633 IF B$="c" OR B$="C" THEN IF A<=N THEN 1620
 1634 IF B$="b" OR B$="B" THEN CLS:GOTO 1600
 1635 IF B$="r" OR B$="R" THEN 1430 ELSE IF B$<>"d" AND B$<>"D" THEN 1640 ELSE INPUT "Delete # ";B:IF B<1 OR B>A THEN 1630
 1637 FOR AA=B TO N:X(AA)=X(AA+1):Y(AA)=Y(AA+1):NEXT:N=N-1:GOSUB 1670:GOTO 1630
 1640 IF B$="a" OR B$="A" THEN N=N+1:INPUT "Enter new line (x,y)";X(N),Y(N):GOTO 1630
 1650 IF B$<>"e" AND B$<>"E" THEN 1630 ELSE INPUT " Line to edit";B:IF B>N OR B<1 THEN 1630
 1660 SE=2:PRINT " Enter  X: ";:INPUT X(B):PRINT CHR$(30);" Enter  X:"X(B)"  Y: ";:INPUT Y(B):GOSUB 1670:GOTO 1630
 1670 XM=0:YM=0:SUX=0:SUY=0:SUX2=0:SUY2=0:XY=0:XX$="":RETURN
 1680 PRINT:PRINT "You were comparing:    "P$:PRINT,"with:    "Q$"."
 1685 PRINT:PRINT "(Press Enter TWICE to return to menu)"
 1690 PRINT:LINE INPUT "Now you are comparing";P1$:IF P1$<>"" THEN P$=P1$
 1700 LINE INPUT "With what";P1$:IF P1$<>"" THEN Q$=P1$
 1710 GOTO 1430
 1720 IF LEN(P$)<=42 THEN 1740 ELSE FOR A=48 TO 34 STEP -1:IF MID$(P$,A,1)=" " THEN PRINT LEFT$(P$,A):PRINT RIGHT$(P$,LEN(P$)-A);:GOTO 1750
 1730 NEXT:PRINT P$:GOTO 1750
 1740 PRINT P$;:IF LEN(P$)+LEN(Q$)>38 THEN PRINT ELSE PRINT " and "Q$".":RETURN
 1750 PRINT " and "Q$".":RETURN
 1760 FOR A=1 TO N:SWAP X(A),Y(A):NEXT:SWAP P$,Q$:GOSUB 1670:GOTO 1430
 1790 COLOR 5,0:PRINT "You have"N"pieces of data.  How shall I print it?
 1800 PRINT:PRINT:PRINT " 1)     X        Y";TAB(63);N+6;"lines";INT((N+6)/65+0.99);"pages"
 1810 PRINT "        X        Y
 1820 PRINT "        X        Y
 1830 PRINT:PRINT " 2)     X        Y           X        Y";TAB(63);6+INT(N/2+0.6);"lines";INT((6+INT(N/2+0.6))/65+0.99);"pages"
 1840 PRINT "        X        Y           X        Y
 1850 PRINT:PRINT " 3)     X  Y        X  Y        X  Y";TAB(63);6+INT(N/3+0.7);"lines";INT((6+INT(N/3+0.7))/ A+0.99);"pages"
 1860 PRINT "        X  Y        X  Y        X  Y"
 1870 PRINT:PRINT " 4)     X  Y        X  Y        X  Y        X  Y";TAB(63);6+INT(N/4+0.8);"lines";INT((6+INT(N/4+0.8))/65+0.99);"pages"
 1880 PRINT "        X  Y        X  Y        X  Y        X  Y"
 1890 PRINT:PRINT " 5)     X  Y        X  Y        X  Y        X  Y        X  Y  ";6+INT(N/5+0.9);"lines";INT((6+INT(N/5+0.9))/65+0.99);"pages"
 1900 PRINT "        X  Y        X  Y        X  Y        X  Y        X  Y":PRINT
 1910 PRINT " 6)     Return to menu"
 1920 A$=INKEY$:IF A$="" THEN 1920
 1930 IF VAL(A$)<1 OR VAL(A$)>6 THEN 1920 ELSE IF VAL(A$)=6 THEN 1430
 1940 IF A$="1" THEN PRINT:PRINT:INPUT "Shall I print n along with the data";X$:X$=LEFT$(X$,1)
 1950 IF XX$<>"" THEN LPRINT "File:  "XX$
 1960 LPRINT:LPRINT "Comparing: "P$:LPRINT "     with: "Q$"."
 1970 LPRINT:LPRINT:FOR B=1 TOHN STEP VAL(A$):IF X$="Y" OR X$="y" THEN LPRINT TAB(6-LEN(STR$(B)));B,
 1980 IF A$="1" THEN LPRINT X(B),Y(B),
 1990 IF A$="2" THEN LPRINT X(B),Y(B),,:IF B<N THEN LPRINT X(B+1),Y(B+1),
 2000 IF A$="3" THEN LPRINT X(B);Y(B),:IF B<N THEN LPRINT X(B+1);Y(B+1),
 2010 IF A$="3" AND B+1<N THEN LPRINT X(B+2);Y(B+2),
 2020 IF A$="4" THEN LPRINT X(B);Y(B),:IF B<N THEN LPRINT X(B+1);Y(B+1),
 2030 IF A$="4" AND B+1<N THEN LPRINT X(B+2);Y(B+2),:IF B+2<N   LPRINT X(B+3);Y(B+3),
 2040 IF A$="5" THEN LPRINT X(B);Y(B),:IF B<N THEN LPRINT X(B+1);Y(B+1),:IF B+1<N THEN LPRINT X(B+2);Y(B+2),:IF B+2<N THEN LPRINT X(B+3);Y(B+3),:IF B+3<N THEN LPRINT X(B+4);Y(B+4),
 2050 LPRINT:NEXT:LPRINT:LPRINT:GOTO 1430
 2060 COLOR 5,0:LOCATE 10,10:PRINT "What type of printer do you have?"
 2070 PRINT:PRINT TAB(11);"1)  IBM or strictly compatible"
 2080 PRINT TAB(11);"2)  Other type"
 2090 PRINT TAB(11);"3)  Return to menu"
 2100 A$=INKEY$:IF A$="" THEN 2100
 2110 IF A$="1" THEN E$=CHR$(228):G$=CHR$(253)
 2120 IF A$="2" THEN E$="E":G$="^2"
 2130 IF A$="3" THEN 1430 ELSE IF VAL(A$)<1 OR VAL(A$)>3 THEN 2100
 2140 LPRINT:LPRINT:LPRINT "File Name:",XX$
 2150 LPRINT:LPRINT "Number:","n ="N,,E$"x ="SUX:LPRINT,,,E$"y ="SUY
 2160 LPRINT "Mean:","X ="XA:LPRINT,"Y ="YA,,E$"x"G$" ="SUX2
 2170 LPRINT,,,E$"y"G$" ="SUY2
 2180 LPRINT "Standard Deviation:  s ="SX:LPRINT,"       s ="SY,E$;"xy ="XY:LPRINT
 2190 LPRINT "Median:","X ="XM:LPRINT,"Y ="YM
 2200 LPRINT:LPRINT "Coefficient needed to presume correlation ="DP
 2210 LPRINT "Correlation Coefficient:  r ="R:LPRINT
 2220 IF ABS(R)<DP THEN LPRINT "The sample does not provide sufficient evidence to conclude that a":LPRINT "connection exists between ";:GOSUB 2280:GOTO 2250
 2230 IF R=>0 THEN LPRINT "The sample does provide sufficient evidence to conclude that a":LPRINT "positive correlation exists between ";:GOSUB 2280
 2240 IF R<0 THEN LPRINT "The sample does provide sufficient evidence to conclude that a":LPRINT "negative correlation exists between ";:GOSUB 2280
 2250 IF N<5 THEN LPRINT " However, an inadequate number of trials were made":LPRINT " to assure a reasonable degree of acccuracy."
 2260 LPRINT:LPRINT "The Best-Fitting Line:   y ="STR$(B1)"x +"B0
 2270 FOR A=1 TO 3:LPRINT:NEXT:GOTO 1430
 2280 IF LEN(P$)<=42 THEN 2300 ELSE FOR A=48 TO 34 STEP -1:IF MID$(P$,A,1)=" " THEN LPRINT LEFT$(P$,A):LPRINT RIGHT$(P$,LEN(P$)-A);:GOTO 2310
 2290 NEXT:LPRINT P$:GOTO 2310
 2300 LPRINT P$;:IF LEN(P$)+LEN(Q$)>38 THEN LPRINT ELSE PRINT " and "Q$".":RETURN
 2310 LPRINT " and "Q$".":RETURN
 2399 REM *** EXPLANATIONS FOR DATA READOUT ***
 2400 COLOR 7,0:CLS:PRINT "    "CHR$(228)"x, "CHR$(228)"y","Sum of all numbers in the x and y columns."
 2410 PRINT "   "CHR$(228)"x"CHR$(253)", "CHR$(228)"y"CHR$(253),"Sum of the square of all numbers in the x and y columns."
 2420 PRINT "     "CHR$(228)"xy","Sum of each number labeled x with its corresponding y number."
 2430 PRINT:PRINT "Standard Deviation:      A measure of how widely the numbers vary:"
 2440 PRINT ,,"         "STRING$(15,196)
 2450 PRINT ,,"s  =    / ";:COLOR 1,0:PRINT "n(äxý) - (äx)ý":COLOR 7,0
 2460 PRINT ,,"      \/      n(n-1)
 2470 PRINT:PRINT "    Median","The number in the middle of the sequence.  For instance:"
 2480 PRINT TAB(45);:COLOR 1,0:PRINT " x ";:COLOR 7,0:PRINT "  [n is even]":PRINT TAB(20);:COLOR 1,0:PRINT " x ";:COLOR 7,0:PRINT " [n is odd]";TAB(45);"200"
 2490 PRINT TAB(21);"1";TAB(45);"600  (Median is 700, the":PRINT TAB(21);"2  (Median is 2)        800   average of the two":PRINT TAB(21);"7";TAB(45);"900   middle numbers)
 2500 PRINT:PRINT "Correlation Coefficient","The degree that the two sets of numbers correspond:":PRINT ,," ie, the probable relationship between them.
 2510 PRINT ,,"Correlation differs from causation; it means":PRINT ,," only that the data sets happen together.  There
 2520 PRINT ,," may be a third variable causing both to occur.":PRINT ,,"A coefficient of ñ1 means there is a perfect
 2530 PRINT ,," correlation; 0 means there is no correlation."
 2540 A$=INKEY$:IF A$="" THEN 2540
 2550 CLS:PRINT "Correlation Coefficient","         nùäxy - (äx)(äy)
 2560 PRINT ,,"r = Ä";:COLOR 1,0:PRINT STRING$(12,196);:COLOR 7,0:PRINT "ÄÄ";:COLOR 1,0:PRINT STRING$(12,196):COLOR 7,0
 2570 PRINT ,,"    ûn(äxý)-(äx)ý ûn(äyý)-(äy)ý"
 2580 PRINT:PRINT "Decision Points";TAB(21);"The point at which you determine whether the coefficient
 2590 PRINT TAB(21);"is statistically significant.  It depends on value of n:
 2600 PRINT TAB(21);:COLOR 1,0:PRINT " n ";:COLOR 7,0:PRINT TAB(34);:COLOR 1,0:PRINT " n ";:COLOR 7,0:PRINT TAB(47);:COLOR 1,0:PRINT " n ";:COLOR 7,0:PRINT TAB(60);:COLOR 1,0:PRINT " n ":COLOR 7,0
 2610 PRINT TAB(22);"5  .878";TAB(34);"12  .576";TAB(47);"19  .456";TAB(60);"30  .361"
 2620 PRINT TAB(22);"6  .811";TAB(34);"13  .553";TAB(47);"20  .444";TAB(60);"40  .312"
 2630 PRINT TAB(22);"7  .754";TAB(34);"14  .532";TAB(47);"22  .423";TAB(60);"50  .279"
 2640 PRINT TAB(22);"8  .707";TAB(34);"15  .514";TAB(47);"24  .404";TAB(60);"60  .254"
 2650 PRINT TAB(22);"9  .666";TAB(34);"16  .497";TAB(47);"26  .388";TAB(60);"80  .220"
 2660 PRINT TAB(21);"10  .632";TAB(34);"17  .482";TAB(47);"28  .374";TAB(60);"100 .196"
 2670 PRINT TAB(21);"11  .602";TAB(34);"18  .468"
 2680 PRINT TAB(21);"[The program makes some smaller distinctions for the value":PRINT TAB(22);"of the Decision Point; eg a separate value for 21.]
 2690 PRINT:PRINT "Best-Fitting Line";TAB(21);"A straight line which best approximates all the numbers":PRINT TAB(21);"on a scatter diagram.  It is calculated as follows:"
 2700 PRINT TAB(26);"nùäxy - äxäy"
 2710 PRINT TAB(21);"b1 = ";STRING$(13,196),"b0 = (mean y) - b1ù(mean x)"
 2720 PRINT TAB(26);"nùäxý - (äx)ý"
 2730 PRINT TAB(43);"Line format I use is y=mx+b;
 2740 PRINT TAB(43);"plug in #s-- y = [b1]x + [b0]";
 2750 A$=INKEY$:IF A$="" THEN 2750 ELSE 1430
 2800 IF SE<=0 OR N<1 THEN 80 ELSE LOCATE 10,13:COLOR 0,7:PRINT "WARNING":COLOR 7,0
 2810 PRINT:IF SE=1 THEN PRINT "    Your data will be lost." ELSE PRINT "Your modifications will be lost."
 2820 PRINT:PRINT "   Proceed to erase data and":PRINT "     return to main menu?"
 2830 A$=INKEY$:IF A$="" THEN 2830
 2840 IF A$<>"Y" AND A$<>"y" THEN 1430 ELSE 80
 2900 ON ERROR GOTO 2970:PRINT:PRINT:PRINT "Data files available on current disk:":FILES "*."
 2910 ON ERROR GOTO 2950:PRINT:PRINT "Which file do you wish to "U$;:INPUT XX$:IF XX$="" THEN 80
 2920 RETURN
 2930 PRINT:PRINT "    ** Done.  Press a key **":ON ERROR GOTO 0
 2940 A$=INKEY$:IF A$="" THEN 2940 ELSE 80
 2950 COLOR 12:PRINT:PRINT " ® Unable to find the file.  Press a key ¯"
 2960 A$=INKEY$:IF A$="" THEN 2960 ELSE RESUME 80
 2970 COLOR 12:CLS:PRINT " ® None seem to exist on this disk.  There may, ¯":PRINT " ®   however, be data files under a different   ¯":PRINT " ®     extension.  Try one of the following,    ¯"
 2980 PRINT " ®        or press return for main menu.        ¯":PRINT:FILES:RESUME 2910
 2990 PRINT:PRINT:PRINT " < Sorry, but this is either an empty data >":PRINT " < file, or else not a data file at all; I >":PRINT " < cannot pull data from it.  Press a key. >"
 3000 A$=INKEY$:IF A$="" THEN 3000 ELSE 80
 3010 LOCATE 23,6+(73-LEN(P1$))/2:PRINT P1$:LOCATE 21,6:PRINT"|";:FOR A=1 TO 7:PRINT STRING$(9,45);"+";:NEXT
 3020 IX=554/(SX-BX):IY=SXX-BY:IF AA=1 THEN 3030 ELSE U2=163-((((B1*BX+B0)-BY)/IY)*163):U3=46+(SX-BX)*IX:U4=163-((((B1*SX+B0)-BY)/IY)*163):LINE(44,U2)-(U3,U4)
 3030 IF AA<>2 THEN FOR A=1 TO N:U=46+(X(A)-BX)*IX:UU=161-((Y(A)-BY)/IY)*161:CIRCLE(U,UU),2:NEXT
 3040 GOTO 900
