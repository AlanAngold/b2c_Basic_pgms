/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bombsawy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c1b977236d0 ---------A T 00008  PRINT "YOU ARE A PILOT IN A WORLD WAR II BOMBER."
    0x5c1b97723670 ---------A T 00010  INPUT "WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)";A
    0x5c1b977239e0 ---------A   00020  IF A>0 AND A<5 THEN 25
    0x5c1b97725f30 ---------A   00022  PRINT "TRY AGAIN..." : GOTO 10
    0x5c1b977240a0 ---------A T 00025  ON A GOTO 30, 110, 200, 220
    0x5c1b97723ca0 ---------A T 00030  INPUT "YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)";B
    0x5c1b97724500 ---------A   00040  IF B>0 AND B<4 THEN 45
    0x5c1b977260b0 ---------A   00042  PRINT "TRY AGAIN..." : GOTO 30
    0x5c1b9772bfb0 ---------A T 00045  PRINT : ON B GOTO 50, 80,90
    0x5c1b9772c110 ---------A T 00050  PRINT "SHOULD BE EASY -- YOU'RE FLYING A NAZI-MADE PLANE."
    0x5c1b97725ff0 ---------A   00060  GOTO 280
    0x5c1b9772c2d0 ---------A T 00080  PRINT "BE CAREFUL!!!" : GOTO 280
    0x5c1b9772c4b0 ---------A T 00090  PRINT "YOU'RE GOING FOR THE OIL, EH?" : GOTO 280
    0x5c1b9772c6f0 ---------A T 00110  INPUT "AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)";G
    0x5c1b9772cb50 ---------A   00120  IF G>0 AND G<5 THEN 125
    0x5c1b9772cd50 ---------A   00122  PRINT "TRY AGAIN..." : GOTO 110
    0x5c1b9772d230 ---------A T 00125  PRINT : ON G GOTO 130, 150, 170, 190
    0x5c1b9772d460 ---------A T 00130  PRINT "YOU'VE GOT 2 TONS OF BOMBS FLYING FOR PLOESTI." : GOTO 280
    0x5c1b9772d680 ---------A T 00150  PRINT "YOU'RE DUMPING THE A-BOMB ON HIROSHIMA." : GOTO 280
    0x5c1b9772d8a0 ---------A T 00170  PRINT "YOU'RE CHASING THE BISMARK IN THE NORTH SEA." : GOTO 280
    0x5c1b9772da20 ---------A T 00190  PRINT "YOU'RE BUSTING A GERMAN HEAVY WATER PLANT IN THE RUHR."
    0x5c1b9772dad0 ---------A   00195  GOTO 280
    0x5c1b9772dc70 ---------A T 00200  PRINT "YOU'RE FLYING A KAMIKAZE MISSION OVER THE USS LEXINGTON."
    0x5c1b9772ded0 ---------A   00205  INPUT "YOUR FIRST KAMIKAZE MISSION(Y OR N)";F$
    0x5c1b9772e470 ---------A   00207  IF F$="N" THEN S=0 : GOTO 358
    0x5c1b9772e7e0 ----------   00210  PRINT : IF RND(1)>.65 THEN 325
    0x5c1b9772e890 ----------   00215  GOTO 380
    0x5c1b9772ea30 ---------A T 00220  PRINT "A NAZI, EH?  OH WELL.  ARE YOU GOING FOR RUSSIA(1),"
    0x5c1b9772f0f0 ---------A   00230  INPUT "ENGLAND(2), OR FRANCE(3)";M : IF M>0 AND M<4 THEN 235
    0x5c1b9772f2e0 ---------A   00232  PRINT "TRY AGAIN..." : GOTO 220
    0x5c1b9772f6f0 ---------A T 00235  PRINT : ON M GOTO 250, 260, 270
    0x5c1b9772f910 ---------A T 00250  PRINT "YOU'RE NEARING STALINGRAD." : GOTO 280
    0x5c1b9772fb40 ---------A T 00260  PRINT "NEARING LONDON.  BE CAREFUL, THEY'VE GOT RADAR." : GOTO 280
    0x5c1b9772fed0 ---------A T 00270  PRINT "NEARING VERSAILLES.  DUCK SOUP.  THEY'RE NEARLY DEFENSELESS."
    0x5c1b9772ff70 ---------A T 00280  PRINT
    0x5c1b977301c0 ---------A T 00285  INPUT "HOW MANY MISSIONS HAVE YOU FLOWN";D
    0x5c1b97730430 ---------A   00290  IF D<160 THEN 300
    0x5c1b977305c0 ---------A   00292  PRINT "MISSIONS, NOT MILES..." 
    0x5c1b97730750 ---------A   00295  PRINT "150 MISSIONS IS HIGH EVEN FOR OLD-TIMERS."
    0x5c1b97730940 ---------A   00297  PRINT "NOW THEN, "; : GOTO 285
    0x5c1b97730c10 ---------A T 00300  PRINT:IF D<100 THEN 310
    0x5c1b97730e20 ---------A   00305  PRINT "THAT'S PUSHING THE ODDS!" : GOTO 320
    0x5c1b977311d0 ---------A T 00310  IF D<25 THEN PRINT "FRESH OUT OF TRAINING, EH?"
    0x5c1b97731690 ---------A T 00320  PRINT : IF D<160*RND(1) THEN 330
    0x5c1b97731cb0 ---------A T 00325  PRINT "DIRECT HIT!!!! "INT(100*RND(1))"KILLED."
    0x5c1b97731eb0 ---------A   00327  PRINT "MISSION SUCCESSFUL." : GOTO 390
    0x5c1b977325c0 ---------A T 00330  PRINT "MISSED TARGET BY"INT(2+30*RND(1))"MILES!"
    0x5c1b977327e0 ---------A   00335  PRINT "NOW YOU'RE REALLY IN FOR IT !!" : PRINT
    0x5c1b97732a50 ---------A T 00340  INPUT "DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)";R
    0x5c1b97732ee0 ---------A   00345  IF R>0 AND R<4 THEN 350
    0x5c1b977330d0 ---------A   00347  PRINT "TRY AGAIN..." : GOTO 340
    0x5c1b97733660 ---------A T 00350  PRINT : T=0 : IF R=2 THEN 360
    0x5c1b97733840 ---------A   00355  INPUT "WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)";S
    0x5c1b97733c50 ---------A   00357  IF S<10 THEN PRINT "YOU LIE, BUT YOU'LL PAY...": GOTO 380
    0x5c1b97733cd0 ---------A T 00358  PRINT
    0x5c1b97734190 ---------A T 00360  PRINT : IF R>1 THEN T=35
    0x5c1b97734720 ---------A   00365  IF S+T>100*RND(1) THEN 380
    0x5c1b97734920 ---------A   00370  PRINT "YOU MADE IT THROUGH TREMENDOUS FLAK!!" : GOTO 390
    0x5c1b97734a90 ---------A T 00380  PRINT "* * * * BOOM * * * *"
    0x5c1b97734c30 ---------A   00384  PRINT "YOU HAVE BEEN SHOT DOWN....."
    0x5c1b97734dc0 ---------A   00386  PRINT "DEARLY BELOVED, WE ARE GATHERED HERE TODAY TO PAY OUR"
    0x5c1b97734f50 ---------A   00387  PRINT "LAST TRIBUTE..."
    0x5c1b977352c0 ---------A T 00390  PRINT:PRINT:PRINT:INPUT "ANOTHER MISSION (Y OR N)";U$
    0x5c1b97735550 ---------A   00395  IF U$="Y" THEN 8
    0x5c1b97735770 ---------A   00400  PRINT "CHICKEN !!!" : PRINT : END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00008      00395T
     00010      00022T
     00025      00020T
     00030      00025T, 00042T
     00045      00040T
     00050      00045T
     00080      00045T
     00090      00045T
     00110      00025T, 00122T
     00125      00120T
     00130      00125T
     00150      00125T
     00170      00125T
     00190      00125T
     00200      00025T
     00220      00025T, 00232T
     00235      00230T
     00250      00235T
     00260      00235T
     00270      00235T
     00280      00060T, 00080T, 00090T, 00130T, 00150T, 00170T, 00195T, 00250T, 
                00260T
     00285      00297T
     00300      00290T
     00310      00300T
     00320      00305T
     00325      00210T
     00330      00320T
     00340      00347T
     00350      00345T
     00358      00207T
     00360      00350T
     00380      00215T, 00357T, 00365T
     00390      00327T, 00370T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5c1b977236d0 (00008)   0x5c1b977236d0 (00008)   0x5c1b97735770 (00400)   0x5c1b97735770 (00400)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/bombsawy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c1b977236d0 ---------A T 00008  PRINT "YOU ARE A PILOT IN A WORLD WAR II BOMBER."
    0x5c1b97723670 ---------A T 00010  INPUT "WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)";A
    0x5c1b977239e0 ---------A   00020  IF A>0 AND A<5 THEN 25
    0x5c1b97724040 ----------   00022  PRINT "TRY AGAIN..." 
    0x5c1b97725f30 ---------A        a GOTO 10
    0x5c1b977240a0 ---------A T 00025  ON A GOTO 30, 110, 200, 220
    0x5c1b97723ca0 ---------A T 00030  INPUT "YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)";B
    0x5c1b97724500 ---------A   00040  IF B>0 AND B<4 THEN 45
    0x5c1b9772bba0 ----------   00042  PRINT "TRY AGAIN..." 
    0x5c1b977260b0 ---------A        a GOTO 30
    0x5c1b9772bc00 ---------- T 00045  PRINT 
    0x5c1b9772bfb0 ---------A T      a ON B GOTO 50, 80,90
    0x5c1b9772c110 ---------A T 00050  PRINT "SHOULD BE EASY -- YOU'RE FLYING A NAZI-MADE PLANE."
    0x5c1b97725ff0 ---------A   00060  GOTO 280
    0x5c1b9772c230 ---------- T 00080  PRINT "BE CAREFUL!!!" 
    0x5c1b9772c2d0 ---------A T      a GOTO 280
    0x5c1b9772c400 ---------- T 00090  PRINT "YOU'RE GOING FOR THE OIL, EH?" 
    0x5c1b9772c4b0 ---------A T      a GOTO 280
    0x5c1b9772c6f0 ---------A T 00110  INPUT "AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)";G
    0x5c1b9772cb50 ---------A   00120  IF G>0 AND G<5 THEN 125
    0x5c1b9772ccb0 ----------   00122  PRINT "TRY AGAIN..." 
    0x5c1b9772cd50 ---------A        a GOTO 110
    0x5c1b9772cda0 ---------- T 00125  PRINT 
    0x5c1b9772d230 ---------A T      a ON G GOTO 130, 150, 170, 190
    0x5c1b9772d3b0 ---------- T 00130  PRINT "YOU'VE GOT 2 TONS OF BOMBS FLYING FOR PLOESTI." 
    0x5c1b9772d460 ---------A T      a GOTO 280
    0x5c1b9772d5d0 ---------- T 00150  PRINT "YOU'RE DUMPING THE A-BOMB ON HIROSHIMA." 
    0x5c1b9772d680 ---------A T      a GOTO 280
    0x5c1b9772d7f0 ---------- T 00170  PRINT "YOU'RE CHASING THE BISMARK IN THE NORTH SEA." 
    0x5c1b9772d8a0 ---------A T      a GOTO 280
    0x5c1b9772da20 ---------A T 00190  PRINT "YOU'RE BUSTING A GERMAN HEAVY WATER PLANT IN THE RUHR."
    0x5c1b9772dad0 ---------A   00195  GOTO 280
    0x5c1b9772dc70 ---------A T 00200  PRINT "YOU'RE FLYING A KAMIKAZE MISSION OVER THE USS LEXINGTON."
    0x5c1b9772ded0 ---------A   00205  INPUT "YOUR FIRST KAMIKAZE MISSION(Y OR N)";F$
    0x5c1b9772e3e0 ----------   00207  IF F$="N" THEN S=0 
    0x5c1b9772e470 ---------A        a GOTO 358
    0x5c1b9772e4c0 ----------   00210  PRINT 
    0x5c1b9772e7e0 ----------        a IF RND(1)>.65 THEN 325
    0x5c1b9772e890 ----------   00215  GOTO 380
    0x5c1b9772ea30 ---------A T 00220  PRINT "A NAZI, EH?  OH WELL.  ARE YOU GOING FOR RUSSIA(1),"
    0x5c1b9772ec60 ----------   00230  INPUT "ENGLAND(2), OR FRANCE(3)";M 
    0x5c1b9772f0f0 ---------A        a IF M>0 AND M<4 THEN 235
    0x5c1b9772f250 ----------   00232  PRINT "TRY AGAIN..." 
    0x5c1b9772f2e0 ---------A        a GOTO 220
    0x5c1b9772f330 ---------- T 00235  PRINT 
    0x5c1b9772f6f0 ---------A T      a ON M GOTO 250, 260, 270
    0x5c1b9772f860 ---------- T 00250  PRINT "YOU'RE NEARING STALINGRAD." 
    0x5c1b9772f910 ---------A T      a GOTO 280
    0x5c1b9772fa80 ---------- T 00260  PRINT "NEARING LONDON.  BE CAREFUL, THEY'VE GOT RADAR." 
    0x5c1b9772fb40 ---------A T      a GOTO 280
    0x5c1b9772fed0 ---------A T 00270  PRINT "NEARING VERSAILLES.  DUCK SOUP.  THEY'RE NEARLY DEFENSELESS."
    0x5c1b9772ff70 ---------A T 00280  PRINT
    0x5c1b977301c0 ---------A T 00285  INPUT "HOW MANY MISSIONS HAVE YOU FLOWN";D
    0x5c1b97730430 ---------A   00290  IF D<160 THEN 300
    0x5c1b977305c0 ---------A   00292  PRINT "MISSIONS, NOT MILES..." 
    0x5c1b97730750 ---------A   00295  PRINT "150 MISSIONS IS HIGH EVEN FOR OLD-TIMERS."
    0x5c1b977308b0 ----------   00297  PRINT "NOW THEN, "; 
    0x5c1b97730940 ---------A        a GOTO 285
    0x5c1b97730990 ---------- T 00300  PRINT
    0x5c1b97730c10 ---------A T      a IF D<100 THEN 310
    0x5c1b97730d80 ----------   00305  PRINT "THAT'S PUSHING THE ODDS!" 
    0x5c1b97730e20 ---------A        a GOTO 320
    0x5c1b977311d0 ---------A T 00310  IF D<25 THEN PRINT "FRESH OUT OF TRAINING, EH?"
    0x5c1b97731230 ---------- T 00320  PRINT 
    0x5c1b97731690 ---------A T      a IF D<160*RND(1) THEN 330
    0x5c1b97731cb0 ---------A T 00325  PRINT "DIRECT HIT!!!! "INT(100*RND(1))"KILLED."
    0x5c1b97731e10 ----------   00327  PRINT "MISSION SUCCESSFUL." 
    0x5c1b97731eb0 ---------A        a GOTO 390
    0x5c1b977325c0 ---------A T 00330  PRINT "MISSED TARGET BY"INT(2+30*RND(1))"MILES!"
    0x5c1b97732730 ----------   00335  PRINT "NOW YOU'RE REALLY IN FOR IT !!" 
    0x5c1b977327e0 ---------A        a PRINT
    0x5c1b97732a50 ---------A T 00340  INPUT "DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)";R
    0x5c1b97732ee0 ---------A   00345  IF R>0 AND R<4 THEN 350
    0x5c1b97733040 ----------   00347  PRINT "TRY AGAIN..." 
    0x5c1b977330d0 ---------A        a GOTO 340
    0x5c1b97733120 ---------- T 00350  PRINT 
    0x5c1b977333e0 ---------- T      a T=0 
    0x5c1b97733660 ---------A T      b IF R=2 THEN 360
    0x5c1b97733840 ---------A   00355  INPUT "WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)";S
    0x5c1b97733bd0 ----------   00357  IF S<10 THEN PRINT "YOU LIE, BUT YOU'LL PAY..."
    0x5c1b97733c50 ---------A        a GOTO 380
    0x5c1b97733cd0 ---------A T 00358  PRINT
    0x5c1b97733d30 ---------- T 00360  PRINT 
    0x5c1b97734190 ---------A T      a IF R>1 THEN T=35
    0x5c1b97734720 ---------A   00365  IF S+T>100*RND(1) THEN 380
    0x5c1b97734890 ----------   00370  PRINT "YOU MADE IT THROUGH TREMENDOUS FLAK!!" 
    0x5c1b97734920 ---------A        a GOTO 390
    0x5c1b97734a90 ---------A T 00380  PRINT "* * * * BOOM * * * *"
    0x5c1b97734c30 ---------A   00384  PRINT "YOU HAVE BEEN SHOT DOWN....."
    0x5c1b97734dc0 ---------A   00386  PRINT "DEARLY BELOVED, WE ARE GATHERED HERE TODAY TO PAY OUR"
    0x5c1b97734f50 ---------A   00387  PRINT "LAST TRIBUTE..."
    0x5c1b97734fb0 ---------- T 00390  PRINT
    0x5c1b97735010 ---------- T      a PRINT
    0x5c1b97735070 ---------- T      b PRINT
    0x5c1b977352c0 ---------A T      c INPUT "ANOTHER MISSION (Y OR N)";U$
    0x5c1b97735550 ---------A   00395  IF U$="Y" THEN 8
    0x5c1b977356b0 ----------   00400  PRINT "CHICKEN !!!" 
    0x5c1b97735710 ----------        a PRINT 
    0x5c1b97735770 ---------A        b END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/bombsawy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c1b977236d0 ---------A   01000  PRINT "YOU ARE A PILOT IN A WORLD WAR II BOMBER."
    0x5c1b97723670 ---------A   01010  INPUT "WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)";A
    0x5c1b977239e0 ---------A   01020  IF A>0 AND A<5 THEN 1050
    0x5c1b97724040 ----------   01030  PRINT "TRY AGAIN..." 
    0x5c1b97725f30 ---------A   01040  GOTO 1010
    0x5c1b977240a0 ---------A   01050  ON A GOTO 1060, 1180, 1320, 1390
    0x5c1b97723ca0 ---------A   01060  INPUT "YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)";B
    0x5c1b97724500 ---------A   01070  IF B>0 AND B<4 THEN 1110
    0x5c1b9772bba0 ----------   01080  PRINT "TRY AGAIN..." 
    0x5c1b977260b0 ---------A   01090  GOTO 1060
    0x5c1b9772bc00 ----------   01100  PRINT 
    0x5c1b9772bfb0 ---------A   01110  ON B GOTO 1120, 1150,1170
    0x5c1b9772c110 ---------A   01120  PRINT "SHOULD BE EASY -- YOU'RE FLYING A NAZI-MADE PLANE."
    0x5c1b97725ff0 ---------A   01130  GOTO 1510
    0x5c1b9772c230 ----------   01140  PRINT "BE CAREFUL!!!" 
    0x5c1b9772c2d0 ---------A   01150  GOTO 21150
    0x5c1b9772c400 ----------   01160  PRINT "YOU'RE GOING FOR THE OIL, EH?" 
    0x5c1b9772c4b0 ---------A   01170  GOTO 1510
    0x5c1b9772c6f0 ---------A   01180  INPUT "AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)";G
    0x5c1b9772cb50 ---------A   01190  IF G>0 AND G<5 THEN 1230
    0x5c1b9772ccb0 ----------   01200  PRINT "TRY AGAIN..." 
    0x5c1b9772cd50 ---------A   01210  GOTO 1180
    0x5c1b9772cda0 ----------   01220  PRINT 
    0x5c1b9772d230 ---------A   01230  ON G GOTO 1250, 1270, 1290, 1300
    0x5c1b9772d3b0 ----------   01240  PRINT "YOU'VE GOT 2 TONS OF BOMBS FLYING FOR PLOESTI." 
    0x5c1b9772d460 ---------A   01250  GOTO 1510
    0x5c1b9772d5d0 ----------   01260  PRINT "YOU'RE DUMPING THE A-BOMB ON HIROSHIMA." 
    0x5c1b9772d680 ---------A   01270  GOTO 1510
    0x5c1b9772d7f0 ----------   01280  PRINT "YOU'RE CHASING THE BISMARK IN THE NORTH SEA." 
    0x5c1b9772d8a0 ---------A   01290  GOTO 1510
    0x5c1b9772da20 ---------A   01300  PRINT "YOU'RE BUSTING A GERMAN HEAVY WATER PLANT IN THE RUHR."
    0x5c1b9772dad0 ---------A   01310  GOTO 1510
    0x5c1b9772dc70 ---------A   01320  PRINT "YOU'RE FLYING A KAMIKAZE MISSION OVER THE USS LEXINGTON."
    0x5c1b9772ded0 ---------A   01330  INPUT "YOUR FIRST KAMIKAZE MISSION(Y OR N)";F$
    0x5c1b9772e3e0 ----------   01340  IF F$="N" THEN S=0 
    0x5c1b9772e470 ---------A   01350  GOTO 1810
    0x5c1b9772e4c0 ----------   01360  PRINT 
    0x5c1b9772e7e0 ----------   01370  IF RND(1)>.65 THEN 1650
    0x5c1b9772e890 ----------   01380  GOTO 1870
    0x5c1b9772ea30 ---------A   01390  PRINT "A NAZI, EH?  OH WELL.  ARE YOU GOING FOR RUSSIA(1),"
    0x5c1b9772ec60 ----------   01400  INPUT "ENGLAND(2), OR FRANCE(3)";M 
    0x5c1b9772f0f0 ---------A   01410  IF M>0 AND M<4 THEN 1450
    0x5c1b9772f250 ----------   01420  PRINT "TRY AGAIN..." 
    0x5c1b9772f2e0 ---------A   01430  GOTO 1390
    0x5c1b9772f330 ----------   01440  PRINT 
    0x5c1b9772f6f0 ---------A   01450  ON M GOTO 1470, 1490, 1500
    0x5c1b9772f860 ----------   01460  PRINT "YOU'RE NEARING STALINGRAD." 
    0x5c1b9772f910 ---------A   01470  GOTO 1510
    0x5c1b9772fa80 ----------   01480  PRINT "NEARING LONDON.  BE CAREFUL, THEY'VE GOT RADAR." 
    0x5c1b9772fb40 ---------A   01490  GOTO 1510
    0x5c1b9772fed0 ---------A   01500  PRINT "NEARING VERSAILLES.  DUCK SOUP.  THEY'RE NEARLY DEFENSELESS."
    0x5c1b9772ff70 ---------A   01510  PRINT
    0x5c1b977301c0 ---------A   01520  INPUT "HOW MANY MISSIONS HAVE YOU FLOWN";D
    0x5c1b97730430 ---------A   01530  IF D<160 THEN 1590
    0x5c1b977305c0 ---------A   01540  PRINT "MISSIONS, NOT MILES..." 
    0x5c1b97730750 ---------A   01550  PRINT "150 MISSIONS IS HIGH EVEN FOR OLD-TIMERS."
    0x5c1b977308b0 ----------   01560  PRINT "NOW THEN, "; 
    0x5c1b97730940 ---------A   01570  GOTO 1520
    0x5c1b97730990 ----------   01580  PRINT
    0x5c1b97730c10 ---------A   01590  IF D<100 THEN 1620
    0x5c1b97730d80 ----------   01600  PRINT "THAT'S PUSHING THE ODDS!" 
    0x5c1b97730e20 ---------A   01610  GOTO 1640
    0x5c1b977311d0 ---------A   01620  IF D<25 THEN PRINT "FRESH OUT OF TRAINING, EH?"
    0x5c1b97731230 ----------   01630  PRINT 
    0x5c1b97731690 ---------A   01640  IF D<160*RND(1) THEN 1680
    0x5c1b97731cb0 ---------A   01650  PRINT "DIRECT HIT!!!! "INT(100*RND(1))"KILLED."
    0x5c1b97731e10 ----------   01660  PRINT "MISSION SUCCESSFUL." 
    0x5c1b97731eb0 ---------A   01670  GOTO 1940
    0x5c1b977325c0 ---------A   01680  PRINT "MISSED TARGET BY"INT(2+30*RND(1))"MILES!"
    0x5c1b97732730 ----------   01690  PRINT "NOW YOU'RE REALLY IN FOR IT !!" 
    0x5c1b977327e0 ---------A   01700  PRINT
    0x5c1b97732a50 ---------A   01710  INPUT "DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)";R
    0x5c1b97732ee0 ---------A   01720  IF R>0 AND R<4 THEN 1770
    0x5c1b97733040 ----------   01730  PRINT "TRY AGAIN..." 
    0x5c1b977330d0 ---------A   01740  GOTO 1710
    0x5c1b97733120 ----------   01750  PRINT 
    0x5c1b977333e0 ----------   01760  T=0 
    0x5c1b97733660 ---------A   01770  IF R=2 THEN 1830
    0x5c1b97733840 ---------A   01780  INPUT "WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)";S
    0x5c1b97733bd0 ----------   01790  IF S<10 THEN PRINT "YOU LIE, BUT YOU'LL PAY..."
    0x5c1b97733c50 ---------A   01800  GOTO 1870
    0x5c1b97733cd0 ---------A   01810  PRINT
    0x5c1b97733d30 ----------   01820  PRINT 
    0x5c1b97734190 ---------A   01830  IF R>1 THEN T=35
    0x5c1b97734720 ---------A   01840  IF S+T>100*RND(1) THEN 1870
    0x5c1b97734890 ----------   01850  PRINT "YOU MADE IT THROUGH TREMENDOUS FLAK!!" 
    0x5c1b97734920 ---------A   01860  GOTO 1940
    0x5c1b97734a90 ---------A   01870  PRINT "* * * * BOOM * * * *"
    0x5c1b97734c30 ---------A   01880  PRINT "YOU HAVE BEEN SHOT DOWN....."
    0x5c1b97734dc0 ---------A   01890  PRINT "DEARLY BELOVED, WE ARE GATHERED HERE TODAY TO PAY OUR"
    0x5c1b97734f50 ---------A   01900  PRINT "LAST TRIBUTE..."
    0x5c1b97734fb0 ----------   01910  PRINT
    0x5c1b97735010 ----------   01920  PRINT
    0x5c1b97735070 ----------   01930  PRINT
    0x5c1b977352c0 ---------A   01940  INPUT "ANOTHER MISSION (Y OR N)";U$
    0x5c1b97735550 ---------A   01950  IF U$="Y" THEN 1000
    0x5c1b977356b0 ----------   01960  PRINT "CHICKEN !!!" 
    0x5c1b97735710 ----------   01970  PRINT 
    0x5c1b97735770 ---------A   01980  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01850 - 10000    8160 

 */



/*
 *  Symbol Table Listing for 'basic/bombsawy.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
    F$                       String      
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    HEX$            Function String          args=1, int    
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
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U$                       String      
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bombsawy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c1b977236d0 ---------A T 01000  PRINT "YOU ARE A PILOT IN A WORLD WAR II BOMBER."
    0x5c1b97723670 ---------A T 01010  INPUT "WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)";A
    0x5c1b977239e0 ---------A   01020  IF A>0 AND A<5 THEN 1050
    0x5c1b97724040 ---------A   01030  PRINT "TRY AGAIN..." 
    0x5c1b97725f30 ---------A   01040  GOTO 1010
    0x5c1b977240a0 ---------A T 01050  ON A GOTO 1060, 1150, 1260, 1300
    0x5c1b97723ca0 ---------A T 01060  INPUT "YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)";B
    0x5c1b97724500 ---------A   01070  IF B>0 AND B<4 THEN 1100
    0x5c1b9772bba0 ---------A   01080  PRINT "TRY AGAIN..." 
    0x5c1b977260b0 ---------A   01090  GOTO 1060
    0x5c1b9772bfb0 ---------A T 01100  ON B GOTO 1110, 1130,1140
    0x5c1b9772c110 ---------A T 01110  PRINT "SHOULD BE EASY -- YOU'RE FLYING A NAZI-MADE PLANE."
    0x5c1b97725ff0 ---------A   01120  GOTO 1400
    0x5c1b9772c2d0 ---------A T 01130  GOTO 21130
    0x5c1b9772c4b0 ---------A T 01140  GOTO 1400
    0x5c1b9772c6f0 ---------A T 01150  INPUT "AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)";G
    0x5c1b9772cb50 ---------A   01160  IF G>0 AND G<5 THEN 1190
    0x5c1b9772ccb0 ---------A   01170  PRINT "TRY AGAIN..." 
    0x5c1b9772cd50 ---------A   01180  GOTO 1150
    0x5c1b9772d230 ---------A T 01190  ON G GOTO 1210, 1220, 1230, 1240
    0x5c1b9772d3b0 ---------A   01200  PRINT "YOU'VE GOT 2 TONS OF BOMBS FLYING FOR PLOESTI." 
    0x5c1b9772d460 ---------A T 01210  GOTO 1400
    0x5c1b9772d680 ---------A T 01220  GOTO 1400
    0x5c1b9772d8a0 ---------A T 01230  GOTO 1400
    0x5c1b9772da20 ---------A T 01240  PRINT "YOU'RE BUSTING A GERMAN HEAVY WATER PLANT IN THE RUHR."
    0x5c1b9772dad0 ---------A   01250  GOTO 1400
    0x5c1b9772dc70 ---------A T 01260  PRINT "YOU'RE FLYING A KAMIKAZE MISSION OVER THE USS LEXINGTON."
    0x5c1b9772ded0 ---------A   01270  INPUT "YOUR FIRST KAMIKAZE MISSION(Y OR N)";F$
    0x5c1b9772e3e0 ---------A   01280  IF F$="N" THEN S=0 
    0x5c1b9772e470 ---------A   01290  GOTO 1670
    0x5c1b9772ea30 ---------A T 01300  PRINT "A NAZI, EH?  OH WELL.  ARE YOU GOING FOR RUSSIA(1),"
    0x5c1b9772ec60 ---------A   01310  INPUT "ENGLAND(2), OR FRANCE(3)";M 
    0x5c1b9772f0f0 ---------A   01320  IF M>0 AND M<4 THEN 1350
    0x5c1b9772f250 ---------A   01330  PRINT "TRY AGAIN..." 
    0x5c1b9772f2e0 ---------A   01340  GOTO 1300
    0x5c1b9772f6f0 ---------A T 01350  ON M GOTO 1370, 1380, 1390
    0x5c1b9772f860 ---------A   01360  PRINT "YOU'RE NEARING STALINGRAD." 
    0x5c1b9772f910 ---------A T 01370  GOTO 1400
    0x5c1b9772fb40 ---------A T 01380  GOTO 1400
    0x5c1b9772fed0 ---------A T 01390  PRINT "NEARING VERSAILLES.  DUCK SOUP.  THEY'RE NEARLY DEFENSELESS."
    0x5c1b9772ff70 ---------A T 01400  PRINT
    0x5c1b977301c0 ---------A T 01410  INPUT "HOW MANY MISSIONS HAVE YOU FLOWN";D
    0x5c1b97730430 ---------A   01420  IF D<160 THEN 1470
    0x5c1b977305c0 ---------A   01430  PRINT "MISSIONS, NOT MILES..." 
    0x5c1b97730750 ---------A   01440  PRINT "150 MISSIONS IS HIGH EVEN FOR OLD-TIMERS."
    0x5c1b977308b0 ---------A   01450  PRINT "NOW THEN, "; 
    0x5c1b97730940 ---------A   01460  GOTO 1410
    0x5c1b97730c10 ---------A T 01470  IF D<100 THEN 1500
    0x5c1b97730d80 ---------A   01480  PRINT "THAT'S PUSHING THE ODDS!" 
    0x5c1b97730e20 ---------A   01490  GOTO 1520
    0x5c1b977311d0 ---------A T 01500  IF D<25 THEN PRINT "FRESH OUT OF TRAINING, EH?"
    0x5c1b97731230 ---------A   01510  PRINT 
    0x5c1b97731690 ---------A T 01520  IF D<160*RND(1) THEN 1560
    0x5c1b97731cb0 ---------A   01530  PRINT "DIRECT HIT!!!! "INT(100*RND(1))"KILLED."
    0x5c1b97731e10 ---------A   01540  PRINT "MISSION SUCCESSFUL." 
    0x5c1b97731eb0 ---------A   01550  GOTO 1800
    0x5c1b977325c0 ---------A T 01560  PRINT "MISSED TARGET BY"INT(2+30*RND(1))"MILES!"
    0x5c1b97732730 ---------A   01570  PRINT "NOW YOU'RE REALLY IN FOR IT !!" 
    0x5c1b977327e0 ---------A   01580  PRINT
    0x5c1b97732a50 ---------A T 01590  INPUT "DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)";R
    0x5c1b97732ee0 ---------A   01600  IF R>0 AND R<4 THEN 1630
    0x5c1b97733040 ---------A   01610  PRINT "TRY AGAIN..." 
    0x5c1b977330d0 ---------A   01620  GOTO 1590
    0x5c1b97733660 ---------A T 01630  IF R=2 THEN 1690
    0x5c1b97733840 ---------A   01640  INPUT "WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)";S
    0x5c1b97733bd0 ---------A   01650  IF S<10 THEN PRINT "YOU LIE, BUT YOU'LL PAY..."
    0x5c1b97733c50 ---------A   01660  GOTO 1730
    0x5c1b97733cd0 ---------A T 01670  PRINT
    0x5c1b97733d30 ---------A   01680  PRINT 
    0x5c1b97734190 ---------A T 01690  IF R>1 THEN T=35
    0x5c1b97734720 ---------A   01700  IF S+T>100*RND(1) THEN 1730
    0x5c1b97734890 ---------A   01710  PRINT "YOU MADE IT THROUGH TREMENDOUS FLAK!!" 
    0x5c1b97734920 ---------A   01720  GOTO 1800
    0x5c1b97734a90 ---------A T 01730  PRINT "* * * * BOOM * * * *"
    0x5c1b97734c30 ---------A   01740  PRINT "YOU HAVE BEEN SHOT DOWN....."
    0x5c1b97734dc0 ---------A   01750  PRINT "DEARLY BELOVED, WE ARE GATHERED HERE TODAY TO PAY OUR"
    0x5c1b97734f50 ---------A   01760  PRINT "LAST TRIBUTE..."
    0x5c1b97734fb0 ---------A   01770  PRINT
    0x5c1b97735010 ---------A   01780  PRINT
    0x5c1b97735070 ---------A   01790  PRINT
    0x5c1b977352c0 ---------A T 01800  INPUT "ANOTHER MISSION (Y OR N)";U$
    0x5c1b97735550 ---------A   01810  IF U$="Y" THEN 1000
    0x5c1b977356b0 ---------A   01820  PRINT "CHICKEN !!!" 
    0x5c1b97735710 ---------A   01830  PRINT 
    0x5c1b97735770 ---------A   01840  END
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
int    B_int;                                     // Basic: B 
int    D_int;                                     // Basic: D 
char*  F_str;                                     // Basic: F$ 
int    G_int;                                     // Basic: G 
int    M_int;                                     // Basic: M 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
char*  U_str;                                     // Basic: U$ 
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

  Lbl_01000:
    // 01000 PRINT "YOU ARE A PILOT IN A WORLD WAR II BOMBER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE A PILOT IN A WORLD WAR II BOMBER.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01010:
    // 01010 INPUT "WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)";A
    // Start of Basic INPUT statement 01010
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01010
    // 01020 IF A>0 AND A<5 THEN 1050
    if(A_int>0&&A_int<5)goto Lbl_01050;
    // 01030 PRINT "TRY AGAIN..." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY AGAIN...");fputs(buf,fh); };
    // 01040 GOTO 1010
    goto Lbl_01010;

  Lbl_01050:
    // 01050 ON A GOTO 1060, 1150, 1260, 1300
    switch((int)(A_int)){
        case 1: goto Lbl_01060;
        case 2: goto Lbl_01150;
        case 3: goto Lbl_01260;
        case 4: goto Lbl_01300;
        default: break; 
    };

  Lbl_01060:
    // 01060 INPUT "YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)";B
    // Start of Basic INPUT statement 01060
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF B>0 AND B<4 THEN 1100
    if(B_int>0&&B_int<4)goto Lbl_01100;
    // 01080 PRINT "TRY AGAIN..." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY AGAIN...");fputs(buf,fh); };
    // 01090 GOTO 1060
    goto Lbl_01060;

  Lbl_01100:
    // 01100 ON B GOTO 1110, 1130,1140
    switch((int)(B_int)){
        case 1: goto Lbl_01110;
        case 2: goto Lbl_01130;
        case 3: goto Lbl_01140;
        default: break; 
    };

  Lbl_01110:
    // 01110 PRINT "SHOULD BE EASY -- YOU'RE FLYING A NAZI-MADE PLANE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOULD BE EASY -- YOU'RE FLYING A NAZI-MADE PLANE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 GOTO 1400
    goto Lbl_01400;

  Lbl_01130:
    // 01130 GOTO 21130
    goto Lbl_01400;

  Lbl_01140:
    // 01140 GOTO 1400
    goto Lbl_01400;

  Lbl_01150:
    // 01150 INPUT "AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)";G
    // Start of Basic INPUT statement 01150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&G_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160 IF G>0 AND G<5 THEN 1190
    if(G_int>0&&G_int<5)goto Lbl_01190;
    // 01170 PRINT "TRY AGAIN..." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY AGAIN...");fputs(buf,fh); };
    // 01180 GOTO 1150
    goto Lbl_01150;

  Lbl_01190:
    // 01190 ON G GOTO 1210, 1220, 1230, 1240
    switch((int)(G_int)){
        case 1: goto Lbl_01210;
        case 2: goto Lbl_01220;
        case 3: goto Lbl_01230;
        case 4: goto Lbl_01240;
        default: break; 
    };
    // 01200 PRINT "YOU'VE GOT 2 TONS OF BOMBS FLYING FOR PLOESTI." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU'VE GOT 2 TONS OF BOMBS FLYING FOR PLOESTI.");fputs(buf,fh); };

  Lbl_01210:
    // 01210 GOTO 1400
    goto Lbl_01400;

  Lbl_01220:
    // 01220 GOTO 1400
    goto Lbl_01400;

  Lbl_01230:
    // 01230 GOTO 1400
    goto Lbl_01400;

  Lbl_01240:
    // 01240 PRINT "YOU'RE BUSTING A GERMAN HEAVY WATER PLANT IN THE RUHR."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU'RE BUSTING A GERMAN HEAVY WATER PLANT IN THE RUHR.");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 GOTO 1400
    goto Lbl_01400;

  Lbl_01260:
    // 01260 PRINT "YOU'RE FLYING A KAMIKAZE MISSION OVER THE USS LEXINGTON."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU'RE FLYING A KAMIKAZE MISSION OVER THE USS LEXINGTON.");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 INPUT "YOUR FIRST KAMIKAZE MISSION(Y OR N)";F$
    // Start of Basic INPUT statement 01270
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"YOUR FIRST KAMIKAZE MISSION(Y OR N)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&F_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01270
    // 01280 IF F$="N" THEN S=0 
    if(strcmp(F_str,"N")==0) {
    }
    // 01290 GOTO 1670
    goto Lbl_01670;

  Lbl_01300:
    // 01300 PRINT "A NAZI, EH?  OH WELL.  ARE YOU GOING FOR RUSSIA(1),"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A NAZI, EH?  OH WELL.  ARE YOU GOING FOR RUSSIA(1),");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 INPUT "ENGLAND(2), OR FRANCE(3)";M 
    // Start of Basic INPUT statement 01310
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ENGLAND(2), OR FRANCE(3)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01310
    // 01320 IF M>0 AND M<4 THEN 1350
    if(M_int>0&&M_int<4)goto Lbl_01350;
    // 01330 PRINT "TRY AGAIN..." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY AGAIN...");fputs(buf,fh); };
    // 01340 GOTO 1300
    goto Lbl_01300;

  Lbl_01350:
    // 01350 ON M GOTO 1370, 1380, 1390
    switch((int)(M_int)){
        case 1: goto Lbl_01370;
        case 2: goto Lbl_01380;
        case 3: goto Lbl_01390;
        default: break; 
    };
    // 01360 PRINT "YOU'RE NEARING STALINGRAD." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU'RE NEARING STALINGRAD.");fputs(buf,fh); };

  Lbl_01370:
    // 01370 GOTO 1400
    goto Lbl_01400;

  Lbl_01380:
    // 01380 GOTO 1400
    goto Lbl_01400;

  Lbl_01390:
    // 01390 PRINT "NEARING VERSAILLES.  DUCK SOUP.  THEY'RE NEARLY DEFENSELESS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NEARING VERSAILLES.  DUCK SOUP.  THEY'RE NEARLY DEFENSELESS.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01400:
    // 01400 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01410:
    // 01410 INPUT "HOW MANY MISSIONS HAVE YOU FLOWN";D
    // Start of Basic INPUT statement 01410
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"HOW MANY MISSIONS HAVE YOU FLOWN");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01410
    // 01420 IF D<160 THEN 1470
    if(D_int<160)goto Lbl_01470;
    // 01430 PRINT "MISSIONS, NOT MILES..." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSIONS, NOT MILES...");strcat(buf,"\n");fputs(buf,fh); };
    // 01440 PRINT "150 MISSIONS IS HIGH EVEN FOR OLD-TIMERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"150 MISSIONS IS HIGH EVEN FOR OLD-TIMERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01450 PRINT "NOW THEN, "; 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOW THEN, ");fputs(buf,fh); };
    // 01460 GOTO 1410
    goto Lbl_01410;

  Lbl_01470:
    // 01470 IF D<100 THEN 1500
    if(D_int<100)goto Lbl_01500;
    // 01480 PRINT "THAT'S PUSHING THE ODDS!" 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT'S PUSHING THE ODDS!");fputs(buf,fh); };
    // 01490 GOTO 1520
    goto Lbl_01520;

  Lbl_01500:
    // 01500 IF D<25 THEN PRINT "FRESH OUT OF TRAINING, EH?"
    if(D_int<25) {
    }
    // 01510 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01520:
    // 01520 IF D<160*RND(1) THEN 1560
    if(D_int<160*RND(1))goto Lbl_01560;
    // 01530 PRINT "DIRECT HIT!!!! "INT(100*RND(1))"KILLED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIRECT HIT!!!! ");b2c_INT(buf,INT(100*RND(1)));strcat(buf,"KILLED.");strcat(buf,"\n");fputs(buf,fh); };
    // 01540 PRINT "MISSION SUCCESSFUL." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSION SUCCESSFUL.");fputs(buf,fh); };
    // 01550 GOTO 1800
    goto Lbl_01800;

  Lbl_01560:
    // 01560 PRINT "MISSED TARGET BY"INT(2+30*RND(1))"MILES!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSED TARGET BY");b2c_INT(buf,INT(2+30*RND(1)));strcat(buf,"MILES!");strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT "NOW YOU'RE REALLY IN FOR IT !!" 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOW YOU'RE REALLY IN FOR IT !!");fputs(buf,fh); };
    // 01580 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01590:
    // 01590 INPUT "DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)";R
    // Start of Basic INPUT statement 01590
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01590
    // 01600 IF R>0 AND R<4 THEN 1630
    if(R_int>0&&R_int<4)goto Lbl_01630;
    // 01610 PRINT "TRY AGAIN..." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY AGAIN...");fputs(buf,fh); };
    // 01620 GOTO 1590
    goto Lbl_01590;

  Lbl_01630:
    // 01630 IF R=2 THEN 1690
    if(R_int==2)goto Lbl_01690;
    // 01640 INPUT "WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)";S
    // Start of Basic INPUT statement 01640
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01640
    // 01650 IF S<10 THEN PRINT "YOU LIE, BUT YOU'LL PAY..."
    if(S_int<10) {
    }
    // 01660 GOTO 1730
    goto Lbl_01730;

  Lbl_01670:
    // 01670 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01680 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01690:
    // 01690 IF R>1 THEN T=35
    if(R_int>1) {
    }
    // 01700 IF S+T>100*RND(1) THEN 1730
    if(S_int+T_int>100*RND(1))goto Lbl_01730;
    // 01710 PRINT "YOU MADE IT THROUGH TREMENDOUS FLAK!!" 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU MADE IT THROUGH TREMENDOUS FLAK!!");fputs(buf,fh); };
    // 01720 GOTO 1800
    goto Lbl_01800;

  Lbl_01730:
    // 01730 PRINT "* * * * BOOM * * * *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"* * * * BOOM * * * *");strcat(buf,"\n");fputs(buf,fh); };
    // 01740 PRINT "YOU HAVE BEEN SHOT DOWN....."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE BEEN SHOT DOWN.....");strcat(buf,"\n");fputs(buf,fh); };
    // 01750 PRINT "DEARLY BELOVED, WE ARE GATHERED HERE TODAY TO PAY OUR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DEARLY BELOVED, WE ARE GATHERED HERE TODAY TO PAY OUR");strcat(buf,"\n");fputs(buf,fh); };
    // 01760 PRINT "LAST TRIBUTE..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LAST TRIBUTE...");strcat(buf,"\n");fputs(buf,fh); };
    // 01770 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01780 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01790 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01800:
    // 01800 INPUT "ANOTHER MISSION (Y OR N)";U$
    // Start of Basic INPUT statement 01800
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ANOTHER MISSION (Y OR N)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&U_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01800
    // 01810 IF U$="Y" THEN 1000
    if(strcmp(U_str,"Y")==0)goto Lbl_01000;
    // 01820 PRINT "CHICKEN !!!" 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHICKEN !!!");fputs(buf,fh); };
    // 01830 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01840 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
