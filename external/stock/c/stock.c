/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/stock.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x623509e4cb80 ---------A   00010 PRINT TAB(30);"STOCK MARKET"
    0x623509e4ded0 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x623509e4e050 ---------A   00030 PRINT: PRINT: PRINT
    0x623509e4c2d0 ---------A   00100 REM STOCK MARKET SIMULATION     -STOCK-
    0x623509e3c2f0 ---------A   00101 REM REVISED 8/18/70 (D. PESSEL, L. BRAUN, C. LOSIK)  
    0x623509e4d5d0 ---------A   00102 REM IMP VRBLS: A-MRKT TRND SLP; B5-BRKRGE FEE; C-TTL CSH ASSTS;    
    0x623509e4be40 ---------A   00103 REM C5-TTL CSH ASSTS (TEMP); C(I)-CHNG IN STK VAL; D-TTL ASSTS;
    0x623509e4c4d0 ---------A   00104 REM E1,E2-LRG CHNG MISC; I-STCK #; I1,I2-STCKS W LRG CHNG; 
    0x623509e4d690 ---------A   00105 REM N1,N2-LRG CHNG DAY CNTS; P5-TTL DAYS PRCHSS; P(I)-PRTFL CNTNTS;
    0x623509e4bbe0 ---------A   00106 REM Q9-NEW CYCL?; S4-SGN OF A; S5-TTL DYS SLS; S(I)-VALUE/SHR; 
    0x623509e4bca0 ---------A   00107 REM T-TTL STCK ASSTS; T5-TTL VAL OF TRNSCTNS;
    0x623509e4e140 ---------A   00108 REM W3-LRG CHNG; X1-SMLL CHNG(<$1); Z4,Z5,Z6-NYSE AVE.; Z(I)-TRNSCT
    0x623509e53c40 ---------A   00110 DIM S(5),P(5),Z(5),C(5) 
    0x623509e53cc0 ---------A   00112 REM SLOPE OF MARKET TREND:A  (SAME FOR ALL STOCKS) 
    0x623509e53f20 ---------A   00113 LET X=1
    0x623509e547f0 ---------A   00114 LET A=INT((RND(X)/10)*100+.5)/100 
    0x623509e54ac0 ---------A   00115 LET T5=0
    0x623509e54d90 ---------A   00116 LET X9=0
    0x623509e55060 ---------A   00117 LET N1=0
    0x623509e55330 ---------A   00118 LET N2=0
    0x623509e55600 ---------A   00119 LET E1=0
    0x623509e558d0 ---------A   00120 LET E2=0
    0x623509e55940 ---------A   00121 REM INTRODUCTION 
    0x623509e55b10 ---------A   00122 PRINT "DO YOU WANT THE INSTRUCTIONS (YES-TYPE 1, NO-TYPE 0)"; 
    0x623509e4b6d0 ---------A   00123 INPUT Z9
    0x623509e55d40 ---------A   00124 PRINT 
    0x623509e55db0 ---------A   00125 PRINT 
    0x623509e4b670 ---------A   00126 IF Z9<1 THEN 200
    0x623509e56190 ---------A   00130 PRINT "THIS PROGRAM PLAYS THE STOCK MARKET.  YOU WILL BE GIVEN" 
    0x623509e56340 ---------A   00132 PRINT "$10,000 AND MAY BUY OR SELL STOCKS.  THE STOCK PRICES WILL"
    0x623509e564f0 ---------A   00134 PRINT "BE GENERATED RANDOMLY AND THEREFORE THIS MODEL DOES NOT" 
    0x623509e566a0 ---------A   00135 PRINT "REPRESENT EXACTLY WHAT HAPPENS ON THE EXCHANGE.  A TABLE"
    0x623509e56850 ---------A   00136 PRINT "OF AVAILABLE STOCKS, THEIR PRICES, AND THE NUMBER OF SHARES"
    0x623509e56c10 ---------A   00137 PRINT "IN YOUR PORTFOLIO WILL BE PRINTED.  FOLLOWING THIS, THE" 
    0x623509e56dc0 ---------A   00138 PRINT "INITIALS OF EACH STOCK WILL BE PRINTED WITH A QUESTION"
    0x623509e56f70 ---------A   00139 PRINT "MARK.  HERE YOU INDICATE A TRANSACTION.  TO BUY A STOCK" 
    0x623509e57140 ---------A   00140 PRINT "TYPE +NNN, TO SELL A STOCK TYPE -NNN, WHERE NNN IS THE"  
    0x623509e572f0 ---------A   00141 PRINT "NUMBER OF SHARES.  A BROKERAGE FEE OF 1% WILL BE CHARGED"
    0x623509e574a0 ---------A   00142 PRINT "ON ALL TRANSACTIONS.  NOTE THAT IF A STOCK'S VALUE DROPS"
    0x623509e57650 ---------A   00143 PRINT "TO ZERO IT MAY REBOUND TO A POSITIVE VALUE AGAIN.  YOU"
    0x623509e57800 ---------A   00144 PRINT "HAVE $10,000 TO INVEST.  USE INTEGERS FOR ALL YOUR INPUTS."
    0x623509e57980 ---------A   00145 PRINT "(NOTE:  TO GET A 'FEEL' FOR THE MARKET RUN FOR AT LEAST" 
    0x623509e57ab0 ---------A   00146 PRINT "10 DAYS)"
    0x623509e57c20 ---------A   00147 PRINT "-----GOOD LUCK!-----"
    0x623509e57cb0 ---------A T 00200 REM GENERATION OF STOCK TABLE; INPUT REQUESTS  
    0x623509e57cf0 ---------A   00210 REM INITIAL STOCK VALUES 
    0x623509e57fd0 ---------A   00220 LET S(1)=100
    0x623509e582a0 ---------A   00230 LET S(2)=85 
    0x623509e58570 ---------A   00240 LET S(3)=150
    0x623509e58840 ---------A   00250 LET S(4)=140
    0x623509e58b30 ---------A   00260 LET S(5)=110
    0x623509e58bc0 ---------A   00265 REM INITIAL T8 - # DAYS FOR FIRST TREND SLOPE (A)
    0x623509e59280 ---------A   00266 LET T8=INT(4.99*RND(X)+1) 
    0x623509e59310 ---------A   00267 REM RANDOMIZE SIGN OF FIRST TREND SLOPE (A)
    0x623509e59660 ---------A   00268 IF RND(X)>.5 THEN 270 
    0x623509e598b0 ---------A   00269 LET A=-A
    0x623509e59930 ---------A T 00270 REM RANDOMIZE INITIAL VALUES 
    0x623509e599c0 ---------A   00280 GOSUB 830 
    0x623509e59a30 ---------A   00285 REM INITIAL PORTFOLIO CONTENTS 
    0x623509e59dd0 ---------A   00290 FOR I=1 TO 5
    0x623509e5a0d0 ---------A   00300 LET P(I)=0
    0x623509e5a3c0 ---------A   00305 LET Z(I)=0
    0x623509e5a4f0 ---------A   00310 NEXT I
    0x623509e5a570 ---------A   00320 PRINT 
    0x623509e5a5f0 ---------A   00330 PRINT 
    0x623509e5aa80 ---------A   00333 REM INITIALIZE CASH ASSETS:C 
    0x623509e5acb0 ---------A   00335 LET C=10000 
    0x623509e5ad30 ---------A   00338 REM PRINT INITIAL PORTFOLIO
    0x623509e5b1d0 ---------A   00340 PRINT "STOCK"," ","INITIALS","PRICE/SHARE"
    0x623509e5b610 ---------A   00350 PRINT "INT. BALLISTIC MISSILES","  IBM",S(1)
    0x623509e5ba40 ---------A   00352 PRINT "RED CROSS OF AMERICA","  RCA",S(2) 
    0x623509e5be80 ---------A   00354 PRINT "LICHTENSTEIN, BUMRAP & JOKE","  LBJ",S(3)
    0x623509e5c2b0 ---------A   00356 PRINT "AMERICAN BANKRUPT CO.","  ABC",S(4)
    0x623509e5c6c0 ---------A   00358 PRINT "CENSURED BOOKS STORE","  CBS",S(5) 
    0x623509e5c750 ---------A T 00360 PRINT 
    0x623509e5c7e0 ---------A   00361 REM NYSE AVERAGE:Z5; TEMP. VALUE:Z4; NET CHANGE:Z6 
    0x623509e5cba0 ---------A   00363 LET Z4=Z5 
    0x623509e5cdb0 ---------A   00364 LET Z5=0
    0x623509e5d080 ---------A   00365 LET T=0 
    0x623509e5d350 ---------A   00370 FOR I=1 TO 5
    0x623509e5d790 ---------A   00375 LET Z5=Z5+S(I)
    0x623509e5ddc0 ---------A   00380 LET T=T+S(I)*P(I) 
    0x623509e5def0 ---------A   00390 NEXT I
    0x623509e5e670 ---------A   00391 LET Z5=INT(100*(Z5/5)+.5)/100 
    0x623509e5eea0 ---------A   00392 LET Z6=INT((Z5-Z4)*100+.5)/100
    0x623509e5ef10 ---------A   00393 REM TOTAL ASSETS:D 
    0x623509e5f330 ---------A   00394 LET D=T+C 
    0x623509e5f5a0 ---------A   00395 IF X9>0 THEN 398
    0x623509e5f810 ---------A   00396 PRINT "NEW YORK STOCK EXCHANGE AVERAGE: "Z5 
    0x623509e5f8b0 ---------A   00397 GOTO 399 
    0x623509e5fd00 ---------A T 00398 PRINT "NEW YORK STOCK EXCHANGE AVERAGE: "Z5"NET CHANGE"Z6
    0x623509e5fd80 ---------A T 00399 PRINT 
    0x623509e603b0 ---------A   00400 LET T=INT(100*T+.5)/100 
    0x623509e60620 ---------A   00401 PRINT "TOTAL STOCK ASSETS ARE   $";T
    0x623509e60c50 ---------A   00403 LET C=INT(100*C+.5)/100 
    0x623509e60ec0 ---------A   00405 PRINT "TOTAL CASH ASSETS ARE    $";C
    0x623509e614f0 ---------A   00407 LET D=INT(100*D+.5)/100 
    0x623509e61750 ---------A   00408 PRINT "TOTAL ASSETS ARE         $";D
    0x623509e617c0 ---------A   00410 PRINT 
    0x623509e61a40 ---------A   00411 IF X9=0 THEN 416
    0x623509e61be0 ---------A   00412 PRINT "DO YOU WISH TO CONTINUE (YES-TYPE 1, NO-TYPE 0)";
    0x623509e61df0 ---------A   00413 INPUT Q9
    0x623509e62060 ---------A   00414 IF Q9<1 THEN 998
    0x623509e620e0 ---------A T 00416 REM INPUT TRANSACTIONS 
    0x623509e62270 ---------A T 00420 PRINT "WHAT IS YOUR TRANSACTION IN" 
    0x623509e623e0 ---------A   00430 PRINT "IBM";
    0x623509e625f0 ---------A   00440 INPUT Z(1)
    0x623509e62770 ---------A   00450 PRINT "RCA";
    0x623509e62980 ---------A   00460 INPUT Z(2)
    0x623509e62b00 ---------A   00470 PRINT "LBJ";
    0x623509e62d10 ---------A   00480 INPUT Z(3)
    0x623509e62e90 ---------A   00490 PRINT "ABC";
    0x623509e630a0 ---------A   00500 INPUT Z(4)
    0x623509e63220 ---------A   00510 PRINT "CBS";
    0x623509e63430 ---------A   00520 INPUT Z(5)
    0x623509e634c0 ---------A   00525 PRINT 
    0x623509e63540 ---------A   00530 REM TOTAL DAY'S PURCHASES IN $:P5
    0x623509e63830 ---------A   00540 LET P5=0
    0x623509e638b0 ---------A   00550 REM TOTAL DAY'S SALES IN $:S5
    0x623509e63b90 ---------A   00560 LET S5=0
    0x623509e63e70 ---------A   00570 FOR I=1 TO 5
    0x623509e64460 ---------A   00575 LET Z(I)=INT(Z(I)+.5) 
    0x623509e647a0 ---------A   00580 IF Z(I)<=0 THEN 610 
    0x623509e64de0 ---------A   00590 LET P5=P5+Z(I)*S(I) 
    0x623509e64e60 ---------A   00600 GOTO 620 
    0x623509e65490 ---------A T 00610 LET S5=S5-Z(I)*S(I) 
    0x623509e658e0 ---------A   00612 IF -Z(I)<=P(I) THEN 620 
    0x623509e65a50 ---------A   00614 PRINT "YOU HAVE OVERSOLD A STOCK; TRY AGAIN." 
    0x623509e65ac0 ---------A   00616 GOTO 420 
    0x623509e663f0 ---------A T 00620 NEXT I
    0x623509e66490 ---------A   00622 REM TOTAL VALUE OF TRANSACTIONS:T5 
    0x623509e66800 ---------A   00625 LET T5=P5+S5
    0x623509e66870 ---------A   00630 REM BROKERAGE FEE:B5 
    0x623509e67080 ---------A   00640 LET B5=INT(.01*T5*100+.5)/100 
    0x623509e67110 ---------A   00650 REM CASH ASSETS=OLD CASH ASSETS-TOTAL PURCHASES
    0x623509e671b0 ---------A   00652 REM -BROKERAGE FEES+TOTAL SALES:C5 
    0x623509e67810 ---------A   00654 LET C5=C-P5-B5+S5 
    0x623509e67a80 ---------A   00656 IF C5>=0 THEN 674 
    0x623509e67de0 ---------A   00658 PRINT "YOU HAVE USED $";-C5;" MORE THAN YOU HAVE." 
    0x623509e67e50 ---------A   00660 GOTO 420
    0x623509e68080 ---------A T 00674 LET C=C5
    0x623509e68100 ---------A   00675 REM CALCULATE NEW PORTFOLIO  
    0x623509e683e0 ---------A   00680 FOR I=1 TO 5
    0x623509e689e0 ---------A   00690 LET P(I)=P(I)+Z(I)
    0x623509e68b10 ---------A   00700 NEXT I
    0x623509e68bb0 ---------A   00710 REM CALCULATE NEW STOCK VALUES 
    0x623509e68c30 ---------A   00720 GOSUB 830 
    0x623509e68c90 ---------A   00750 REM PRINT PORTFOLIO
    0x623509e68d50 ---------A   00751 REM BELL RINGING-DIFFERENT ON MANY COMPUTERS 
    0x623509e68e00 ---------A   00755 PRINT 
    0x623509e68f70 ---------A   00756 PRINT "**********     END OF DAY'S TRADING     **********"
    0x623509e68fe0 ---------A   00757 PRINT 
    0x623509e69050 ---------A   00758 PRINT 
    0x623509e692d0 ---------A   00759 IF X9<1 THEN 769
    0x623509e69850 ---------A T 00769 PRINT "STOCK","PRICE/SHARE","HOLDINGS", "VALUE", "NET PRICE CHANGE"
    0x623509e6a2a0 ---------A   00770 PRINT "IBM", S(1), P(1), S(1)*P(1), C(1)
    0x623509e6acf0 ---------A   00771 PRINT "RCA", S(2), P(2), S(2)*P(2), C(2)
    0x623509e6b740 ---------A   00772 PRINT "LBJ", S(3), P(3), S(3)*P(3), C(3)
    0x623509e6c190 ---------A   00773 PRINT "ABC", S(4), P(4), S(4)*P(4), C(4)
    0x623509e6cbc0 ---------A   00774 PRINT "CBS", S(5), P(5), S(5)*P(5), C(5)
    0x623509e6cdd0 ---------A   00775 LET X9=1
    0x623509e6ce40 ---------A   00780 PRINT 
    0x623509e6ceb0 ---------A   00790 PRINT 
    0x623509e6cf30 ---------A   00810 GOTO 360 
    0x623509e6cfa0 ---------B   00829 REM NEW STOCK VALUES - SUBROUTINE
    0x623509e6d070 ---------B G 00830 REM RANDOMLY PRODUCE NEW STOCK VALUES BASED ON PREVIOUS
    0x623509e6d0f0 ---------B   00831 REM DAY'S VALUES 
    0x623509e6d1c0 ---------B   00832 REM N1,N2 ARE RANDOM NUMBERS OF DAYS WHICH RESPECTIVELY
    0x623509e6d2a0 ---------B   00833 REM DETERMINE WHEN STOCK I1 WILL INCREASE 10 PTS. AND STOCK
    0x623509e6d340 ---------B   00834 REM I2 WILL DECREASE 10 PTS. 
    0x623509e6d420 ---------B   00840 REM IF N1 DAYS HAVE PASSED, PICK AN I1, SET E1, DETERMINE NEW N1 
    0x623509e6d690 ---------B   00841 IF N1>0 THEN 850
    0x623509e6dd60 ---------B   00845 LET I1=INT(4.99*RND(X)+1) 
    0x623509e6e350 ---------B   00846 LET N1=INT(4.99*RND(X)+1) 
    0x623509e6e590 ---------B   00847 LET E1=1
    0x623509e6e630 ---------B T 00850 REM IF N2 DAYS HAVE PASSED, PICK AN I2, SET E2, DETERMINE NEW N2 
    0x623509e6e8a0 ---------B   00851 IF N2>0 THEN 860
    0x623509e6ef70 ---------B   00855 LET I2=INT(4.99*RND(X)+1) 
    0x623509e6f560 ---------B   00856 LET N2=INT(4.99*RND(X)+1) 
    0x623509e6f780 ---------B   00857 LET E2=1
    0x623509e6f800 ---------B T 00860 REM DEDUCT ONE DAY FROM N1 AND N2
    0x623509e6fb40 ---------B   00861 LET N1=N1-1 
    0x623509e6fe80 ---------B   00862 LET N2=N2-1 
    0x623509e6ff00 ---------B   00890 REM LOOP THROUGH ALL STOCKS
    0x623509e701e0 ---------B   00900 FOR I=1 TO 5
    0x623509e705c0 ---------B   00910 LET X1=RND(X) 
    0x623509e70810 ---------B   00915 IF X1>.25 THEN 920
    0x623509e70a30 ---------B   00916 LET X1=.25
    0x623509e70aa0 ---------B   00917 GOTO 935 
    0x623509e70ce0 ---------B T 00920 IF X1>.5 THEN 925
    0x623509e70f00 ---------B   00921 LET X1=.5
    0x623509e70f70 ---------B   00922 GOTO 935 
    0x623509e711b0 ---------B T 00925 IF X1>.75 THEN 930
    0x623509e713d0 ---------B   00926 LET X1=.75  
    0x623509e71440 ---------B   00927 GOTO 935 
    0x623509e71660 ---------B T 00930 LET X1=0.0
    0x623509e716f0 ---------B   00931 REM BIG CHANGE CONSTANT:W3  (SET TO ZERO INITIALLY)
    0x623509e719d0 ---------B T 00935 LET W3=0
    0x623509e71c30 ---------B   00936 IF E1<1 THEN 945
    0x623509e72290 ---------B   00937 IF INT(I1+.5)<>INT(I+.5) THEN 945 
    0x623509e72330 ---------B   00938 REM ADD 10 PTS. TO THIS STOCK;  RESET E1 
    0x623509e72550 ---------B   00939 LET W3=10 
    0x623509e72760 ---------B   00943 LET E1=0
    0x623509e729c0 ---------B T 00945 IF E2<1 THEN 955
    0x623509e73020 ---------B   00947 IF INT(I2+.5)<>INT(I+.5) THEN 955 
    0x623509e730c0 ---------B   00948 REM SUBTRACT 10 PTS. FROM THIS STOCK;  RESET E2
    0x623509e73400 ---------B   00949 LET W3=W3-10
    0x623509e73620 ---------B   00953 LET E2=0
    0x623509e736a0 ---------B   00954 REM C(I) IS CHANGE IN STOCK VALUE
    0x623509e744f0 ---------B T 00955 LET C(I)=INT(A*S(I))+X1+INT(3-6*RND(X)+.5)+W3 
    0x623509e74cc0 ---------B   00956 LET C(I)=INT(100*C(I)+.5)/100 
    0x623509e752b0 ---------B   00957 LET S(I)=S(I)+C(I)
    0x623509e755e0 ---------B   00960 IF S(I)>0 THEN 967
    0x623509e758e0 ---------B   00964 LET C(I)=0
    0x623509e75bd0 ---------B   00965 LET S(I)=0
    0x623509e75c50 ---------B   00966 GOTO 970 
    0x623509e76410 ---------B T 00967 LET S(I)=INT(100*S(I)+.5)/100 
    0x623509e76540 ---------B T 00970 NEXT I
    0x623509e76610 ---------B   00972 REM AFTER T8 DAYS RANDOMLY CHANGE TREND SIGN AND SLOPE 
    0x623509e76950 ---------B   00973 LET T8=T8-1 
    0x623509e76ba0 ---------B   00974 IF T8<1 THEN 985
    0x623509e76c00 ---------B   00980 RETURN
    0x623509e76ce0 ---------B T 00985 REM RANDOMLY CHANGE TREND SIGN AND SLOPE (A), AND DURATION 
    0x623509e76d60 ---------B   00986 REM OF TREND (T8)
    0x623509e77380 ---------B   00990 LET T8=INT(4.99*RND(X)+1) 
    0x623509e77bb0 ---------B   00992 LET A=INT((RND(X)/10)*100+.5)/100 
    0x623509e77f80 ---------B   00993 LET S4=RND(X) 
    0x623509e781d0 ---------B   00994 IF S4<=.5 THEN 997
    0x623509e78410 ---------B   00995 LET A=-A
    0x623509e78460 ---------B T 00997 RETURN
    0x623509e785d0 ---------A T 00998 PRINT "HOPE YOU HAD FUN!!"
    0x623509e78620 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00200      00126T
     00270      00268T
     00360      00810T
     00398      00395T
     00399      00397T
     00416      00411T
     00420      00616T, 00660T
     00610      00580T
     00620      00600T, 00612T
     00674      00656T
     00769      00759T
     00830      00280G, 00720G
     00850      00841T
     00860      00851T
     00920      00915T
     00925      00920T
     00930      00925T
     00935      00917T, 00922T, 00927T
     00945      00936T, 00937T
     00955      00945T, 00947T
     00967      00960T
     00970      00966T
     00985      00974T
     00997      00994T
     00998      00414T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x623509e4cb80 (00010)   0x623509e4cb80 (00010)   0x623509e78620 (00999)   0x623509e78620 (00999)   
   B) 0x623509e6cfa0 (00829)   0x623509e6d070 (00830)   0x623509e76c00 (00980)   0x623509e78460 (00997)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03330 - 10000    6680 

 */



/*
 *  Symbol Table Listing for 'basic/stock.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B5                       Integer     
    C               Array    Integer         {0,4} 
    C5                       Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    E1                       Integer     
    E2                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
    I1                       Integer     
    I2                       Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N1                       Integer     
    N2                       Integer     
    OCT$            Function String          args=1, float  
    P               Array    Integer         {0,4} 
    P5                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q9                       Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,4} 
    S4                       Integer     
    S5                       Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    T5                       Integer     
    T8                       Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W3                       Integer     
    X                        Integer     
    X1                       Integer     
    X9                       Integer     
    Z               Array    Integer         {0,4} 
    Z4                       Integer     
    Z5                       Integer     
    Z6                       Integer     
    Z9                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/stock.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x623509e4cb80 ---------A   01000 PRINT TAB(30);"STOCK MARKET"
    0x623509e4ded0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x623509e4e050 ---------A   01020 PRINT: PRINT: PRINT
    0x623509e4c2d0 ---------A   01030 REM STOCK MARKET SIMULATION     -STOCK-
    0x623509e3c2f0 ---------A   01040 REM REVISED 8/18/70 (D. PESSEL, L. BRAUN, C. LOSIK)  
    0x623509e4d5d0 ---------A   01050 REM IMP VRBLS: A-MRKT TRND SLP; B5-BRKRGE FEE; C-TTL CSH ASSTS;    
    0x623509e4be40 ---------A   01060 REM C5-TTL CSH ASSTS (TEMP); C(I)-CHNG IN STK VAL; D-TTL ASSTS;
    0x623509e4c4d0 ---------A   01070 REM E1,E2-LRG CHNG MISC; I-STCK #; I1,I2-STCKS W LRG CHNG; 
    0x623509e4d690 ---------A   01080 REM N1,N2-LRG CHNG DAY CNTS; P5-TTL DAYS PRCHSS; P(I)-PRTFL CNTNTS;
    0x623509e4bbe0 ---------A   01090 REM Q9-NEW CYCL?; S4-SGN OF A; S5-TTL DYS SLS; S(I)-VALUE/SHR; 
    0x623509e4bca0 ---------A   01100 REM T-TTL STCK ASSTS; T5-TTL VAL OF TRNSCTNS;
    0x623509e4e140 ---------A   01110 REM W3-LRG CHNG; X1-SMLL CHNG(<$1); Z4,Z5,Z6-NYSE AVE.; Z(I)-TRNSCT
    0x623509e53c40 ---------A   01120 DIM S(5),P(5),Z(5),C(5) 
    0x623509e53cc0 ---------A   01130 REM SLOPE OF MARKET TREND:A  (SAME FOR ALL STOCKS) 
    0x623509e53f20 ---------A   01140 LET X=1
    0x623509e547f0 ---------A   01150 LET A=INT((RND(X)/10)*100+.5)/100 
    0x623509e54ac0 ---------A   01160 LET T5=0
    0x623509e54d90 ---------A   01170 LET X9=0
    0x623509e55060 ---------A   01180 LET N1=0
    0x623509e55330 ---------A   01190 LET N2=0
    0x623509e55600 ---------A   01200 LET E1=0
    0x623509e558d0 ---------A   01210 LET E2=0
    0x623509e55940 ---------A   01220 REM INTRODUCTION 
    0x623509e55b10 ---------A   01230 PRINT "DO YOU WANT THE INSTRUCTIONS (YES-TYPE 1, NO-TYPE 0)"; 
    0x623509e4b6d0 ---------A   01240 INPUT Z9
    0x623509e55d40 ---------A   01250 PRINT 
    0x623509e55db0 ---------A   01260 PRINT 
    0x623509e4b670 ---------A   01270 IF Z9<1 THEN 1460
    0x623509e56190 ---------A   01280 PRINT "THIS PROGRAM PLAYS THE STOCK MARKET.  YOU WILL BE GIVEN" 
    0x623509e56340 ---------A   01290 PRINT "$10,000 AND MAY BUY OR SELL STOCKS.  THE STOCK PRICES WILL"
    0x623509e564f0 ---------A   01300 PRINT "BE GENERATED RANDOMLY AND THEREFORE THIS MODEL DOES NOT" 
    0x623509e566a0 ---------A   01310 PRINT "REPRESENT EXACTLY WHAT HAPPENS ON THE EXCHANGE.  A TABLE"
    0x623509e56850 ---------A   01320 PRINT "OF AVAILABLE STOCKS, THEIR PRICES, AND THE NUMBER OF SHARES"
    0x623509e56c10 ---------A   01330 PRINT "IN YOUR PORTFOLIO WILL BE PRINTED.  FOLLOWING THIS, THE" 
    0x623509e56dc0 ---------A   01340 PRINT "INITIALS OF EACH STOCK WILL BE PRINTED WITH A QUESTION"
    0x623509e56f70 ---------A   01350 PRINT "MARK.  HERE YOU INDICATE A TRANSACTION.  TO BUY A STOCK" 
    0x623509e57140 ---------A   01360 PRINT "TYPE +NNN, TO SELL A STOCK TYPE -NNN, WHERE NNN IS THE"  
    0x623509e572f0 ---------A   01370 PRINT "NUMBER OF SHARES.  A BROKERAGE FEE OF 1% WILL BE CHARGED"
    0x623509e574a0 ---------A   01380 PRINT "ON ALL TRANSACTIONS.  NOTE THAT IF A STOCK'S VALUE DROPS"
    0x623509e57650 ---------A   01390 PRINT "TO ZERO IT MAY REBOUND TO A POSITIVE VALUE AGAIN.  YOU"
    0x623509e57800 ---------A   01400 PRINT "HAVE $10,000 TO INVEST.  USE INTEGERS FOR ALL YOUR INPUTS."
    0x623509e57980 ---------A   01410 PRINT "(NOTE:  TO GET A 'FEEL' FOR THE MARKET RUN FOR AT LEAST" 
    0x623509e57ab0 ---------A   01420 PRINT "10 DAYS)"
    0x623509e57c20 ---------A   01430 PRINT "-----GOOD LUCK!-----"
    0x623509e57cb0 ---------A   01440 REM GENERATION OF STOCK TABLE; INPUT REQUESTS  
    0x623509e57cf0 ---------A   01450 REM INITIAL STOCK VALUES 
    0x623509e57fd0 ---------A T 01460 LET S(1)=100
    0x623509e582a0 ---------A   01470 LET S(2)=85 
    0x623509e58570 ---------A   01480 LET S(3)=150
    0x623509e58840 ---------A   01490 LET S(4)=140
    0x623509e58b30 ---------A   01500 LET S(5)=110
    0x623509e58bc0 ---------A   01510 REM INITIAL T8 - # DAYS FOR FIRST TREND SLOPE (A)
    0x623509e59280 ---------A   01520 LET T8=INT(4.99*RND(X)+1) 
    0x623509e59310 ---------A   01530 REM RANDOMIZE SIGN OF FIRST TREND SLOPE (A)
    0x623509e59660 ---------A   01540 IF RND(X)>.5 THEN 1570 
    0x623509e598b0 ---------A   01550 LET A=-A
    0x623509e59930 ---------A   01560 REM RANDOMIZE INITIAL VALUES 
    0x623509e599c0 ---------A T 01570 GOSUB 2750 
    0x623509e59a30 ---------A   01580 REM INITIAL PORTFOLIO CONTENTS 
    0x623509e59dd0 ---------A   01590 FOR I=1 TO 5
    0x623509e5a0d0 ---------A   01600 LET P(I)=0
    0x623509e5a3c0 ---------A   01610 LET Z(I)=0
    0x623509e5a4f0 ---------A   01620 NEXT I
    0x623509e5a570 ---------A   01630 PRINT 
    0x623509e5a5f0 ---------A   01640 PRINT 
    0x623509e5aa80 ---------A   01650 REM INITIALIZE CASH ASSETS:C 
    0x623509e5acb0 ---------A   01660 LET C=10000 
    0x623509e5ad30 ---------A   01670 REM PRINT INITIAL PORTFOLIO
    0x623509e5b1d0 ---------A   01680 PRINT "STOCK"," ","INITIALS","PRICE/SHARE"
    0x623509e5b610 ---------A   01690 PRINT "INT. BALLISTIC MISSILES","  IBM",S(1)
    0x623509e5ba40 ---------A   01700 PRINT "RED CROSS OF AMERICA","  RCA",S(2) 
    0x623509e5be80 ---------A   01710 PRINT "LICHTENSTEIN, BUMRAP & JOKE","  LBJ",S(3)
    0x623509e5c2b0 ---------A   01720 PRINT "AMERICAN BANKRUPT CO.","  ABC",S(4)
    0x623509e5c6c0 ---------A   01730 PRINT "CENSURED BOOKS STORE","  CBS",S(5) 
    0x623509e5c750 ---------A T 01740 PRINT 
    0x623509e5c7e0 ---------A   01750 REM NYSE AVERAGE:Z5; TEMP. VALUE:Z4; NET CHANGE:Z6 
    0x623509e5cba0 ---------A   01760 LET Z4=Z5 
    0x623509e5cdb0 ---------A   01770 LET Z5=0
    0x623509e5d080 ---------A   01780 LET T=0 
    0x623509e5d350 ---------A   01790 FOR I=1 TO 5
    0x623509e5d790 ---------A   01800 LET Z5=Z5+S(I)
    0x623509e5ddc0 ---------A   01810 LET T=T+S(I)*P(I) 
    0x623509e5def0 ---------A   01820 NEXT I
    0x623509e5e670 ---------A   01830 LET Z5=INT(100*(Z5/5)+.5)/100 
    0x623509e5eea0 ---------A   01840 LET Z6=INT((Z5-Z4)*100+.5)/100
    0x623509e5ef10 ---------A   01850 REM TOTAL ASSETS:D 
    0x623509e5f330 ---------A   01860 LET D=T+C 
    0x623509e5f5a0 ---------A   01870 IF X9>0 THEN 1900
    0x623509e5f810 ---------A   01880 PRINT "NEW YORK STOCK EXCHANGE AVERAGE: "Z5 
    0x623509e5f8b0 ---------A   01890 GOTO 1910 
    0x623509e5fd00 ---------A T 01900 PRINT "NEW YORK STOCK EXCHANGE AVERAGE: "Z5"NET CHANGE"Z6
    0x623509e5fd80 ---------A T 01910 PRINT 
    0x623509e603b0 ---------A   01920 LET T=INT(100*T+.5)/100 
    0x623509e60620 ---------A   01930 PRINT "TOTAL STOCK ASSETS ARE   $";T
    0x623509e60c50 ---------A   01940 LET C=INT(100*C+.5)/100 
    0x623509e60ec0 ---------A   01950 PRINT "TOTAL CASH ASSETS ARE    $";C
    0x623509e614f0 ---------A   01960 LET D=INT(100*D+.5)/100 
    0x623509e61750 ---------A   01970 PRINT "TOTAL ASSETS ARE         $";D
    0x623509e617c0 ---------A   01980 PRINT 
    0x623509e61a40 ---------A   01990 IF X9=0 THEN 2040
    0x623509e61be0 ---------A   02000 PRINT "DO YOU WISH TO CONTINUE (YES-TYPE 1, NO-TYPE 0)";
    0x623509e61df0 ---------A   02010 INPUT Q9
    0x623509e62060 ---------A   02020 IF Q9<1 THEN 2660
    0x623509e620e0 ---------A   02030 REM INPUT TRANSACTIONS 
    0x623509e62270 ---------A T 02040 PRINT "WHAT IS YOUR TRANSACTION IN" 
    0x623509e623e0 ---------A   02050 PRINT "IBM";
    0x623509e625f0 ---------A   02060 INPUT Z(1)
    0x623509e62770 ---------A   02070 PRINT "RCA";
    0x623509e62980 ---------A   02080 INPUT Z(2)
    0x623509e62b00 ---------A   02090 PRINT "LBJ";
    0x623509e62d10 ---------A   02100 INPUT Z(3)
    0x623509e62e90 ---------A   02110 PRINT "ABC";
    0x623509e630a0 ---------A   02120 INPUT Z(4)
    0x623509e63220 ---------A   02130 PRINT "CBS";
    0x623509e63430 ---------A   02140 INPUT Z(5)
    0x623509e634c0 ---------A   02150 PRINT 
    0x623509e63540 ---------A   02160 REM TOTAL DAY'S PURCHASES IN $:P5
    0x623509e63830 ---------A   02170 LET P5=0
    0x623509e638b0 ---------A   02180 REM TOTAL DAY'S SALES IN $:S5
    0x623509e63b90 ---------A   02190 LET S5=0
    0x623509e63e70 ---------A   02200 FOR I=1 TO 5
    0x623509e64460 ---------A   02210 LET Z(I)=INT(Z(I)+.5) 
    0x623509e647a0 ---------A   02220 IF Z(I)<=0 THEN 2250 
    0x623509e64de0 ---------A   02230 LET P5=P5+Z(I)*S(I) 
    0x623509e64e60 ---------A   02240 GOTO 2290 
    0x623509e65490 ---------A T 02250 LET S5=S5-Z(I)*S(I) 
    0x623509e658e0 ---------A   02260 IF -Z(I)<=P(I) THEN 2290 
    0x623509e65a50 ---------A   02270 PRINT "YOU HAVE OVERSOLD A STOCK; TRY AGAIN." 
    0x623509e65ac0 ---------A   02280 GOTO 2040 
    0x623509e663f0 ---------A T 02290 NEXT I
    0x623509e66490 ---------A   02300 REM TOTAL VALUE OF TRANSACTIONS:T5 
    0x623509e66800 ---------A   02310 LET T5=P5+S5
    0x623509e66870 ---------A   02320 REM BROKERAGE FEE:B5 
    0x623509e67080 ---------A   02330 LET B5=INT(.01*T5*100+.5)/100 
    0x623509e67110 ---------A   02340 REM CASH ASSETS=OLD CASH ASSETS-TOTAL PURCHASES
    0x623509e671b0 ---------A   02350 REM -BROKERAGE FEES+TOTAL SALES:C5 
    0x623509e67810 ---------A   02360 LET C5=C-P5-B5+S5 
    0x623509e67a80 ---------A   02370 IF C5>=0 THEN 2400 
    0x623509e67de0 ---------A   02380 PRINT "YOU HAVE USED $";-C5;" MORE THAN YOU HAVE." 
    0x623509e67e50 ---------A   02390 GOTO 2040
    0x623509e68080 ---------A T 02400 LET C=C5
    0x623509e68100 ---------A   02410 REM CALCULATE NEW PORTFOLIO  
    0x623509e683e0 ---------A   02420 FOR I=1 TO 5
    0x623509e689e0 ---------A   02430 LET P(I)=P(I)+Z(I)
    0x623509e68b10 ---------A   02440 NEXT I
    0x623509e68bb0 ---------A   02450 REM CALCULATE NEW STOCK VALUES 
    0x623509e68c30 ---------A   02460 GOSUB 2750 
    0x623509e68c90 ---------A   02470 REM PRINT PORTFOLIO
    0x623509e68d50 ---------A   02480 REM BELL RINGING-DIFFERENT ON MANY COMPUTERS 
    0x623509e68e00 ---------A   02490 PRINT 
    0x623509e68f70 ---------A   02500 PRINT "**********     END OF DAY'S TRADING     **********"
    0x623509e68fe0 ---------A   02510 PRINT 
    0x623509e69050 ---------A   02520 PRINT 
    0x623509e692d0 ---------A   02530 IF X9<1 THEN 2540
    0x623509e69850 ---------A T 02540 PRINT "STOCK","PRICE/SHARE","HOLDINGS", "VALUE", "NET PRICE CHANGE"
    0x623509e6a2a0 ---------A   02550 PRINT "IBM", S(1), P(1), S(1)*P(1), C(1)
    0x623509e6acf0 ---------A   02560 PRINT "RCA", S(2), P(2), S(2)*P(2), C(2)
    0x623509e6b740 ---------A   02570 PRINT "LBJ", S(3), P(3), S(3)*P(3), C(3)
    0x623509e6c190 ---------A   02580 PRINT "ABC", S(4), P(4), S(4)*P(4), C(4)
    0x623509e6cbc0 ---------A   02590 PRINT "CBS", S(5), P(5), S(5)*P(5), C(5)
    0x623509e6cdd0 ---------A   02600 LET X9=1
    0x623509e6ce40 ---------A   02610 PRINT 
    0x623509e6ceb0 ---------A   02620 PRINT 
    0x623509e6cf30 ---------A   02630 GOTO 1740 
    0x623509e76ce0 ---------A   02640 REM RANDOMLY CHANGE TREND SIGN AND SLOPE (A), AND DURATION 
    0x623509e76d60 ---------A   02650 REM OF TREND (T8)
    0x623509e785d0 ---------A T 02660 PRINT "HOPE YOU HAD FUN!!"
    0x623509e78620 ---------A   02670 END
    0x623509e6cfa0 ---------B   02680 REM NEW STOCK VALUES - SUBROUTINE
    0x623509e6d070 ---------B   02690 REM RANDOMLY PRODUCE NEW STOCK VALUES BASED ON PREVIOUS
    0x623509e6d0f0 ---------B   02700 REM DAY'S VALUES 
    0x623509e6d1c0 ---------B   02710 REM N1,N2 ARE RANDOM NUMBERS OF DAYS WHICH RESPECTIVELY
    0x623509e6d2a0 ---------B   02720 REM DETERMINE WHEN STOCK I1 WILL INCREASE 10 PTS. AND STOCK
    0x623509e6d340 ---------B   02730 REM I2 WILL DECREASE 10 PTS. 
    0x623509e6d420 ---------B   02740 REM IF N1 DAYS HAVE PASSED, PICK AN I1, SET E1, DETERMINE NEW N1 
    0x623509e6d690 ---------B G 02750 IF N1>0 THEN 2800
    0x623509e6dd60 ---------B   02760 LET I1=INT(4.99*RND(X)+1) 
    0x623509e6e350 ---------B   02770 LET N1=INT(4.99*RND(X)+1) 
    0x623509e6e590 ---------B   02780 LET E1=1
    0x623509e6e630 ---------B   02790 REM IF N2 DAYS HAVE PASSED, PICK AN I2, SET E2, DETERMINE NEW N2 
    0x623509e6e8a0 ---------B T 02800 IF N2>0 THEN 2850
    0x623509e6ef70 ---------B   02810 LET I2=INT(4.99*RND(X)+1) 
    0x623509e6f560 ---------B   02820 LET N2=INT(4.99*RND(X)+1) 
    0x623509e6f780 ---------B   02830 LET E2=1
    0x623509e6f800 ---------B   02840 REM DEDUCT ONE DAY FROM N1 AND N2
    0x623509e6fb40 ---------B T 02850 LET N1=N1-1 
    0x623509e6fe80 ---------B   02860 LET N2=N2-1 
    0x623509e6ff00 ---------B   02870 REM LOOP THROUGH ALL STOCKS
    0x623509e701e0 ---------B   02880 FOR I=1 TO 5
    0x623509e705c0 ---------B   02890 LET X1=RND(X) 
    0x623509e70810 ---------B   02900 IF X1>.25 THEN 2930
    0x623509e70a30 ---------B   02910 LET X1=.25
    0x623509e70aa0 ---------B   02920 GOTO 3010 
    0x623509e70ce0 ---------B T 02930 IF X1>.5 THEN 2960
    0x623509e70f00 ---------B   02940 LET X1=.5
    0x623509e70f70 ---------B   02950 GOTO 3010 
    0x623509e711b0 ---------B T 02960 IF X1>.75 THEN 2990
    0x623509e713d0 ---------B   02970 LET X1=.75  
    0x623509e71440 ---------B   02980 GOTO 3010 
    0x623509e71660 ---------B T 02990 LET X1=0.0
    0x623509e716f0 ---------B   03000 REM BIG CHANGE CONSTANT:W3  (SET TO ZERO INITIALLY)
    0x623509e719d0 ---------B T 03010 LET W3=0
    0x623509e71c30 ---------B   03020 IF E1<1 THEN 3070
    0x623509e72290 ---------B   03030 IF INT(I1+.5)<>INT(I+.5) THEN 3070 
    0x623509e72330 ---------B   03040 REM ADD 10 PTS. TO THIS STOCK;  RESET E1 
    0x623509e72550 ---------B   03050 LET W3=10 
    0x623509e72760 ---------B   03060 LET E1=0
    0x623509e729c0 ---------B T 03070 IF E2<1 THEN 3130
    0x623509e73020 ---------B   03080 IF INT(I2+.5)<>INT(I+.5) THEN 3130 
    0x623509e730c0 ---------B   03090 REM SUBTRACT 10 PTS. FROM THIS STOCK;  RESET E2
    0x623509e73400 ---------B   03100 LET W3=W3-10
    0x623509e73620 ---------B   03110 LET E2=0
    0x623509e736a0 ---------B   03120 REM C(I) IS CHANGE IN STOCK VALUE
    0x623509e744f0 ---------B T 03130 LET C(I)=INT(A*S(I))+X1+INT(3-6*RND(X)+.5)+W3 
    0x623509e74cc0 ---------B   03140 LET C(I)=INT(100*C(I)+.5)/100 
    0x623509e752b0 ---------B   03150 LET S(I)=S(I)+C(I)
    0x623509e755e0 ---------B   03160 IF S(I)>0 THEN 3200
    0x623509e758e0 ---------B   03170 LET C(I)=0
    0x623509e75bd0 ---------B   03180 LET S(I)=0
    0x623509e75c50 ---------B   03190 GOTO 3210 
    0x623509e76410 ---------B T 03200 LET S(I)=INT(100*S(I)+.5)/100 
    0x623509e76540 ---------B T 03210 NEXT I
    0x623509e76610 ---------B   03220 REM AFTER T8 DAYS RANDOMLY CHANGE TREND SIGN AND SLOPE 
    0x623509e76950 ---------B   03230 LET T8=T8-1 
    0x623509e76ba0 ---------B   03240 IF T8<1 THEN 3260
    0x623509e7eae0 ---------B   03250 GOTO 03320
    0x623509e77380 ---------B T 03260 LET T8=INT(4.99*RND(X)+1) 
    0x623509e77bb0 ---------B   03270 LET A=INT((RND(X)/10)*100+.5)/100 
    0x623509e77f80 ---------B   03280 LET S4=RND(X) 
    0x623509e781d0 ---------B   03290 IF S4<=.5 THEN 3310
    0x623509e78410 ---------B   03300 LET A=-A
    0x623509e7eb20 ---------B T 03310 GOTO 03320
    0x623509e7eb60 ---------B T 03320 RETURN
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
int    B5_int;                                    // Basic: B5 
int    C_int_arr[5];                              // Basic: C 
int    C5_int;                                    // Basic: C5 
int    D_int;                                     // Basic: D 
int    E1_int;                                    // Basic: E1 
int    E2_int;                                    // Basic: E2 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    I2_int;                                    // Basic: I2 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    P_int_arr[5];                              // Basic: P 
int    P5_int;                                    // Basic: P5 
int    Q9_int;                                    // Basic: Q9 
int    S_int_arr[5];                              // Basic: S 
int    S4_int;                                    // Basic: S4 
int    S5_int;                                    // Basic: S5 
int    T_int;                                     // Basic: T 
int    T5_int;                                    // Basic: T5 
int    T8_int;                                    // Basic: T8 
int    W3_int;                                    // Basic: W3 
int    X_int;                                     // Basic: X 
int    X1_int;                                    // Basic: X1 
int    X9_int;                                    // Basic: X9 
int    Z_int_arr[5];                              // Basic: Z 
int    Z4_int;                                    // Basic: Z4 
int    Z5_int;                                    // Basic: Z5 
int    Z6_int;                                    // Basic: Z6 
int    Z9_int;                                    // Basic: Z9 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02750();

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
// Routine B
//---------------------------------------------------------------------------
    // 02680 REM NEW STOCK VALUES - SUBROUTINE
    // 02690 REM RANDOMLY PRODUCE NEW STOCK VALUES BASED ON PREVIOUS
    // 02700 REM DAY'S VALUES 
    // 02710 REM N1,N2 ARE RANDOM NUMBERS OF DAYS WHICH RESPECTIVELY
    // 02720 REM DETERMINE WHEN STOCK I1 WILL INCREASE 10 PTS. AND STOCK
    // 02730 REM I2 WILL DECREASE 10 PTS. 
    // 02740 REM IF N1 DAYS HAVE PASSED, PICK AN I1, SET E1, DETERMINE NEW N1 

void Routine_02750(){
    // 02750 IF N1>0 THEN 2800
    if(N1_int>0)goto Lbl_02800;
    // 02760 LET I1=INT(4.99*RND(X)+1) 
    I1_int = INT(4.99*RND(X_int)+1);
    // 02770 LET N1=INT(4.99*RND(X)+1) 
    N1_int = INT(4.99*RND(X_int)+1);
    // 02780 LET E1=1
    E1_int = 1;
    // 02790 REM IF N2 DAYS HAVE PASSED, PICK AN I2, SET E2, DETERMINE NEW N2 

  Lbl_02800:
    // 02800 IF N2>0 THEN 2850
    if(N2_int>0)goto Lbl_02850;
    // 02810 LET I2=INT(4.99*RND(X)+1) 
    I2_int = INT(4.99*RND(X_int)+1);
    // 02820 LET N2=INT(4.99*RND(X)+1) 
    N2_int = INT(4.99*RND(X_int)+1);
    // 02830 LET E2=1
    E2_int = 1;
    // 02840 REM DEDUCT ONE DAY FROM N1 AND N2

  Lbl_02850:
    // 02850 LET N1=N1-1 
    N1_int = N1_int-1;
    // 02860 LET N2=N2-1 
    N2_int = N2_int-1;
    // 02870 REM LOOP THROUGH ALL STOCKS
    // 02880 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 02890 LET X1=RND(X) 
        X1_int = RND(X_int);
        // 02900 IF X1>.25 THEN 2930
        if(X1_int>0.25)goto Lbl_02930;
        // 02910 LET X1=.25
        X1_int = 0.25;
        // 02920 GOTO 3010 
        goto Lbl_03010;

  Lbl_02930:
        // 02930 IF X1>.5 THEN 2960
        if(X1_int>0.5)goto Lbl_02960;
        // 02940 LET X1=.5
        X1_int = 0.5;
        // 02950 GOTO 3010 
        goto Lbl_03010;

  Lbl_02960:
        // 02960 IF X1>.75 THEN 2990
        if(X1_int>0.75)goto Lbl_02990;
        // 02970 LET X1=.75  
        X1_int = 0.75;
        // 02980 GOTO 3010 
        goto Lbl_03010;

  Lbl_02990:
        // 02990 LET X1=0.0
        X1_int = 0.;
        // 03000 REM BIG CHANGE CONSTANT:W3  (SET TO ZERO INITIALLY)

  Lbl_03010:
        // 03010 LET W3=0
        W3_int = 0;
        // 03020 IF E1<1 THEN 3070
        if(E1_int<1)goto Lbl_03070;
        // 03030 IF INT(I1+.5)<>INT(I+.5) THEN 3070 
        if(INT(I1_int+0.5)!=INT(I_int+0.5))goto Lbl_03070;
        // 03040 REM ADD 10 PTS. TO THIS STOCK;  RESET E1 
        // 03050 LET W3=10 
        W3_int = 10;
        // 03060 LET E1=0
        E1_int = 0;

  Lbl_03070:
        // 03070 IF E2<1 THEN 3130
        if(E2_int<1)goto Lbl_03130;
        // 03080 IF INT(I2+.5)<>INT(I+.5) THEN 3130 
        if(INT(I2_int+0.5)!=INT(I_int+0.5))goto Lbl_03130;
        // 03090 REM SUBTRACT 10 PTS. FROM THIS STOCK;  RESET E2
        // 03100 LET W3=W3-10
        W3_int = W3_int-10;
        // 03110 LET E2=0
        E2_int = 0;
        // 03120 REM C(I) IS CHANGE IN STOCK VALUE

  Lbl_03130:
        // 03130 LET C(I)=INT(A*S(I))+X1+INT(3-6*RND(X)+.5)+W3 
        C_int_arr[I_int] = INT(A_int*S_int_arr[I_int])+X1_int+INT(3-6*RND(X_int)+0.5)+W3_int;
        // 03140 LET C(I)=INT(100*C(I)+.5)/100 
        C_int_arr[I_int] = INT(100*C_int_arr[I_int]+0.5)/100;
        // 03150 LET S(I)=S(I)+C(I)
        S_int_arr[I_int] = S_int_arr[I_int]+C_int_arr[I_int];
        // 03160 IF S(I)>0 THEN 3200
        if(S_int_arr[I_int]>0)goto Lbl_03200;
        // 03170 LET C(I)=0
        C_int_arr[I_int] = 0;
        // 03180 LET S(I)=0
        S_int_arr[I_int] = 0;
        // 03190 GOTO 3210 
        goto Lbl_03210;

  Lbl_03200:
        // 03200 LET S(I)=INT(100*S(I)+.5)/100 
        S_int_arr[I_int] = INT(100*S_int_arr[I_int]+0.5)/100;

  Lbl_03210:
        // 03210 NEXT I
        int dummy_3210=0; // Ignore this line.
    }; // End-For(I_int)
    // 03220 REM AFTER T8 DAYS RANDOMLY CHANGE TREND SIGN AND SLOPE 
    // 03230 LET T8=T8-1 
    T8_int = T8_int-1;
    // 03240 IF T8<1 THEN 3260
    if(T8_int<1)goto Lbl_03260;
    // 03250 GOTO 03320
    goto Lbl_03320;

  Lbl_03260:
    // 03260 LET T8=INT(4.99*RND(X)+1) 
    T8_int = INT(4.99*RND(X_int)+1);
    // 03270 LET A=INT((RND(X)/10)*100+.5)/100 
    A_int = INT((RND(X_int)/10)*100+0.5)/100;
    // 03280 LET S4=RND(X) 
    S4_int = RND(X_int);
    // 03290 IF S4<=.5 THEN 3310
    if(S4_int<=0.5)goto Lbl_03310;
    // 03300 LET A=-A
    A_int = A_int;

  Lbl_03310:
    // 03310 GOTO 03320
    goto Lbl_03320;

  Lbl_03320:
    // 03320 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
