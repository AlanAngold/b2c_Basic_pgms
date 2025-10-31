/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/rocket.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5fc2cbe636d0 ---------A   00010  PRINT TAB(30); "ROCKET"
    0x5fc2cbe63670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fc2cbe637f0 ---------A   00030  PRINT:PRINT:PRINT
    0x5fc2cbe64040 ---------A   00070  PRINT "LUNAR LANDING SIMULATION"
    0x5fc2cbe63e80 ---------A   00080  PRINT "----- ------- ----------": PRINT
    0x5fc2cbe644e0 ---------A   00100  INPUT "DO YOU WANT INSTRUCTIONS (YES OR NO)";A$
    0x5fc2cbe661e0 ---------A   00110  IF A$="NO" THEN 390
    0x5fc2cbe64620 ---------A   00160  PRINT
    0x5fc2cbe647a0 ---------A   00200  PRINT"YOU ARE LANDING ON THE MOON AND AND HAVE TAKEN OVER MANUAL"
    0x5fc2cbe64880 ---------A   00210  PRINT"CONTROL 1000 FEET ABOVE A GOOD LANDING SPOT. YOU HAVE A DOWN-"
    0x5fc2cbe6b920 ---------A   00220  PRINT"WARD VELOCITY OF 50 FEET/SEC. 150 UNITS OF FUEL REMAIN."
    0x5fc2cbe6b9e0 ---------A   00225  PRINT
    0x5fc2cbe6bc10 ---------A   00230  PRINT"HERE ARE THE RULES THAT GOVERN YOUR APOLLO SPACE-CRAFT:": PRINT
    0x5fc2cbe6bdd0 ---------A   00240  PRINT"(1) AFTER EACH SECOND THE HEIGHT, VELOCITY, AND REMAINING FUEL"
    0x5fc2cbe6bf90 ---------A   00250  PRINT"    WILL BE REPORTED VIA DIGBY YOUR ON-BOARD COMPUTER."
    0x5fc2cbe6c150 ---------A   00260  PRINT"(2) AFTER THE REPORT A '?' WILL APPEAR. ENTER THE NUMBER"
    0x5fc2cbe6c300 ---------A   00270  PRINT"    OF UNITS OF FUEL YOU WISH TO BURN DURING THE NEXT"
    0x5fc2cbe6c470 ---------A   00280  PRINT"    SECOND. EACH UNIT OF FUEL WILL SLOW YOUR DESCENT BY"
    0x5fc2cbe6c5e0 ---------A   00290  PRINT"    1 FOOT/SEC."
    0x5fc2cbe6c790 ---------A   00310  PRINT"(3) THE MAXIMUM THRUST OF YOUR ENGINE IS 30 FEET/SEC/SEC"
    0x5fc2cbe6c900 ---------A   00320  PRINT"    OR 30 UNITS OF FUEL PER SECOND."
    0x5fc2cbe6cac0 ---------A   00330  PRINT"(4) WHEN YOU CONTACT THE LUNAR SURFACE. YOUR DESCENT ENGINE"
    0x5fc2cbe6cc80 ---------A   00340  PRINT"    WILL AUTOMATICALLY SHUT DOWN AND YOU WILL BE GIVEN A"
    0x5fc2cbe6ce30 ---------A   00350  PRINT"    REPORT OF YOUR LANDING SPEED AND REMAINING FUEL."
    0x5fc2cbe6cff0 ---------A   00360  PRINT"(5) IF YOU RUN OUT OF FUEL THE '?' WILL NO LONGER APPEAR"
    0x5fc2cbe6d1a0 ---------A   00370  PRINT"    BUT YOUR SECOND BY SECOND REPORT WILL CONTINUE UNTIL"
    0x5fc2cbe6d360 ---------A   00380  PRINT"    YOU CONTACT THE LUNAR SURFACE.":PRINT
    0x5fc2cbe6d4e0 ---------A T 00390  PRINT"BEGINNING LANDING PROCEDURE..........":PRINT
    0x5fc2cbe6d600 ---------A   00400  PRINT"G O O D  L U C K ! ! !"
    0x5fc2cbe6d710 ---------A   00420  PRINT:PRINT
    0x5fc2cbe6d890 ---------A   00430  PRINT"SEC  FEET      SPEED     FUEL     PLOT OF DISTANCE"
    0x5fc2cbe6d8f0 ---------A   00450  PRINT
    0x5fc2cbe6e410 ---------A   00455  T=0:H=1000:V=50:F=150
    0x5fc2cbe6f3d0 ---------A T 00490  PRINT T;TAB(6);H;TAB(16);V;TAB(26);F;TAB(35);"I";TAB(H/15);"*"
    0x5fc2cbe6f5f0 ---------A   00500  INPUT B
    0x5fc2cbe6f850 ---------A   00510  IF B<0 THEN 650
    0x5fc2cbe6fca0 ---------A   00520  IF B>30 THEN B=30
    0x5fc2cbe70130 ---------A   00530  IF B>F THEN B=F
    0x5fc2cbe70650 ---------A T 00540  V1=V-B+5
    0x5fc2cbe709a0 ---------A   00560  F=F-B
    0x5fc2cbe70f50 ---------A   00570  H=H- .5*(V+V1)
    0x5fc2cbe711a0 ---------A   00580  IF H<=0 THEN 670
    0x5fc2cbe714e0 ---------A   00590  T=T+1
    0x5fc2cbe71710 ---------A   00600  V=V1
    0x5fc2cbe71960 ---------A   00610  IF F>0 THEN 490
    0x5fc2cbe71ba0 ---------A   00615  IF B=0 THEN 640
    0x5fc2cbe71d30 ---------A   00620  PRINT"**** OUT OF FUEL ****"
    0x5fc2cbe72bf0 ---------A T 00640  PRINT T;TAB(4);H;TAB(12);V;TAB(20);F;TAB(29);"I";TAB(H/12+29);"*"
    0x5fc2cbe72e10 ---------A T 00650  B=0
    0x5fc2cbe72e60 ---------A   00660  GOTO 540
    0x5fc2cbe72fb0 ---------A T 00670  PRINT"***** CONTACT *****"
    0x5fc2cbe73570 ---------A   00680  H=H+ .5*(V1+V)
    0x5fc2cbe737a0 ---------A   00690  IF B=5 THEN 720
    0x5fc2cbe744e0 ---------A   00700  D=(-V+SQR(V*V+H*(10-2*B)))/(5-B)
    0x5fc2cbe74550 ---------A   00710  GOTO 730
    0x5fc2cbe748a0 ---------A T 00720  D=H/V
    0x5fc2cbe74e30 ---------A T 00730  V1=V+(5-B)*D
    0x5fc2cbe752c0 ---------A   00760  PRINT"TOUCHDOWN AT";T+D;"SECONDS."
    0x5fc2cbe75600 ---------A   00770  PRINT"LANDING VELOCITY=";V1;"FEET/SEC."
    0x5fc2cbe75870 ---------A   00780  PRINT F;"UNITS OF FUEL REMAINING."
    0x5fc2cbe75af0 ---------A   00790  IF V1<>0 THEN 810
    0x5fc2cbe75c80 ---------A   00800  PRINT"CONGRATULATIONS! A PERFECT LANDING!!"
    0x5fc2cbe75e10 ---------A   00805  PRINT"YOUR LICENSE WILL BE RENEWED.......LATER."
    0x5fc2cbe76170 ---------A T 00810  IF ABS(V1)<2 THEN 840
    0x5fc2cbe76310 ---------A   00820  PRINT"***** SORRY, BUT YOU BLEW IT!!!!"
    0x5fc2cbe768b0 ---------A   00830  PRINT"APPROPRIATE CONDOLENCES WILL BE SENT TO YOUR NEXT OF KIN."
    0x5fc2cbe76a00 ---------A T 00840  PRINT:PRINT:PRINT
    0x5fc2cbe76b90 ---------A   00850  INPUT "ANOTHER MISSION";A$
    0x5fc2cbe76e20 ---------A   00860  IF A$="YES" THEN 390
    0x5fc2cbe77040 ---------A   00870  PRINT: PRINT "CONTROL OUT.": PRINT
    0x5fc2cbe770a0 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00390      00110T, 00860T
     00490      00610T
     00540      00660T
     00640      00615T
     00650      00510T
     00670      00580T
     00720      00690T
     00730      00710T
     00810      00790T
     00840      00810T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5fc2cbe636d0 (00010)   0x5fc2cbe636d0 (00010)   0x5fc2cbe770a0 (00999)   0x5fc2cbe770a0 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/rocket.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5fc2cbe636d0 ---------A   00010  PRINT TAB(30); "ROCKET"
    0x5fc2cbe63670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fc2cbe542b0 ----------   00030  PRINT
    0x5fc2cbe639e0 ----------        a PRINT
    0x5fc2cbe637f0 ---------A        b PRINT
    0x5fc2cbe64040 ---------A   00070  PRINT "LUNAR LANDING SIMULATION"
    0x5fc2cbe640a0 ----------   00080  PRINT "----- ------- ----------"
    0x5fc2cbe63e80 ---------A        a PRINT
    0x5fc2cbe644e0 ---------A   00100  INPUT "DO YOU WANT INSTRUCTIONS (YES OR NO)";A$
    0x5fc2cbe661e0 ---------A   00110  IF A$="NO" THEN 390
    0x5fc2cbe64620 ---------A   00160  PRINT
    0x5fc2cbe647a0 ---------A   00200  PRINT"YOU ARE LANDING ON THE MOON AND AND HAVE TAKEN OVER MANUAL"
    0x5fc2cbe64880 ---------A   00210  PRINT"CONTROL 1000 FEET ABOVE A GOOD LANDING SPOT. YOU HAVE A DOWN-"
    0x5fc2cbe6b920 ---------A   00220  PRINT"WARD VELOCITY OF 50 FEET/SEC. 150 UNITS OF FUEL REMAIN."
    0x5fc2cbe6b9e0 ---------A   00225  PRINT
    0x5fc2cbe6bb50 ----------   00230  PRINT"HERE ARE THE RULES THAT GOVERN YOUR APOLLO SPACE-CRAFT:"
    0x5fc2cbe6bc10 ---------A        a PRINT
    0x5fc2cbe6bdd0 ---------A   00240  PRINT"(1) AFTER EACH SECOND THE HEIGHT, VELOCITY, AND REMAINING FUEL"
    0x5fc2cbe6bf90 ---------A   00250  PRINT"    WILL BE REPORTED VIA DIGBY YOUR ON-BOARD COMPUTER."
    0x5fc2cbe6c150 ---------A   00260  PRINT"(2) AFTER THE REPORT A '?' WILL APPEAR. ENTER THE NUMBER"
    0x5fc2cbe6c300 ---------A   00270  PRINT"    OF UNITS OF FUEL YOU WISH TO BURN DURING THE NEXT"
    0x5fc2cbe6c470 ---------A   00280  PRINT"    SECOND. EACH UNIT OF FUEL WILL SLOW YOUR DESCENT BY"
    0x5fc2cbe6c5e0 ---------A   00290  PRINT"    1 FOOT/SEC."
    0x5fc2cbe6c790 ---------A   00310  PRINT"(3) THE MAXIMUM THRUST OF YOUR ENGINE IS 30 FEET/SEC/SEC"
    0x5fc2cbe6c900 ---------A   00320  PRINT"    OR 30 UNITS OF FUEL PER SECOND."
    0x5fc2cbe6cac0 ---------A   00330  PRINT"(4) WHEN YOU CONTACT THE LUNAR SURFACE. YOUR DESCENT ENGINE"
    0x5fc2cbe6cc80 ---------A   00340  PRINT"    WILL AUTOMATICALLY SHUT DOWN AND YOU WILL BE GIVEN A"
    0x5fc2cbe6ce30 ---------A   00350  PRINT"    REPORT OF YOUR LANDING SPEED AND REMAINING FUEL."
    0x5fc2cbe6cff0 ---------A   00360  PRINT"(5) IF YOU RUN OUT OF FUEL THE '?' WILL NO LONGER APPEAR"
    0x5fc2cbe6d1a0 ---------A   00370  PRINT"    BUT YOUR SECOND BY SECOND REPORT WILL CONTINUE UNTIL"
    0x5fc2cbe6d2c0 ----------   00380  PRINT"    YOU CONTACT THE LUNAR SURFACE."
    0x5fc2cbe6d360 ---------A        a PRINT
    0x5fc2cbe6d480 ---------- T 00390  PRINT"BEGINNING LANDING PROCEDURE.........."
    0x5fc2cbe6d4e0 ---------A T      a PRINT
    0x5fc2cbe6d600 ---------A   00400  PRINT"G O O D  L U C K ! ! !"
    0x5fc2cbe6d660 ----------   00420  PRINT
    0x5fc2cbe6d710 ---------A        a PRINT
    0x5fc2cbe6d890 ---------A   00430  PRINT"SEC  FEET      SPEED     FUEL     PLOT OF DISTANCE"
    0x5fc2cbe6d8f0 ---------A   00450  PRINT
    0x5fc2cbe6dbb0 ----------   00455  T=0
    0x5fc2cbe6de60 ----------        a H=1000
    0x5fc2cbe6e110 ----------        b V=50
    0x5fc2cbe6e410 ---------A        c F=150
    0x5fc2cbe6f3d0 ---------A T 00490  PRINT T;TAB(6);H;TAB(16);V;TAB(26);F;TAB(35);"I";TAB(H/15);"*"
    0x5fc2cbe6f5f0 ---------A   00500  INPUT B
    0x5fc2cbe6f850 ---------A   00510  IF B<0 THEN 650
    0x5fc2cbe6fca0 ---------A   00520  IF B>30 THEN B=30
    0x5fc2cbe70130 ---------A   00530  IF B>F THEN B=F
    0x5fc2cbe70650 ---------A T 00540  V1=V-B+5
    0x5fc2cbe709a0 ---------A   00560  F=F-B
    0x5fc2cbe70f50 ---------A   00570  H=H- .5*(V+V1)
    0x5fc2cbe711a0 ---------A   00580  IF H<=0 THEN 670
    0x5fc2cbe714e0 ---------A   00590  T=T+1
    0x5fc2cbe71710 ---------A   00600  V=V1
    0x5fc2cbe71960 ---------A   00610  IF F>0 THEN 490
    0x5fc2cbe71ba0 ---------A   00615  IF B=0 THEN 640
    0x5fc2cbe71d30 ---------A   00620  PRINT"**** OUT OF FUEL ****"
    0x5fc2cbe72bf0 ---------A T 00640  PRINT T;TAB(4);H;TAB(12);V;TAB(20);F;TAB(29);"I";TAB(H/12+29);"*"
    0x5fc2cbe72e10 ---------A T 00650  B=0
    0x5fc2cbe72e60 ---------A   00660  GOTO 540
    0x5fc2cbe72fb0 ---------A T 00670  PRINT"***** CONTACT *****"
    0x5fc2cbe73570 ---------A   00680  H=H+ .5*(V1+V)
    0x5fc2cbe737a0 ---------A   00690  IF B=5 THEN 720
    0x5fc2cbe744e0 ---------A   00700  D=(-V+SQR(V*V+H*(10-2*B)))/(5-B)
    0x5fc2cbe74550 ---------A   00710  GOTO 730
    0x5fc2cbe748a0 ---------A T 00720  D=H/V
    0x5fc2cbe74e30 ---------A T 00730  V1=V+(5-B)*D
    0x5fc2cbe752c0 ---------A   00760  PRINT"TOUCHDOWN AT";T+D;"SECONDS."
    0x5fc2cbe75600 ---------A   00770  PRINT"LANDING VELOCITY=";V1;"FEET/SEC."
    0x5fc2cbe75870 ---------A   00780  PRINT F;"UNITS OF FUEL REMAINING."
    0x5fc2cbe75af0 ---------A   00790  IF V1<>0 THEN 810
    0x5fc2cbe75c80 ---------A   00800  PRINT"CONGRATULATIONS! A PERFECT LANDING!!"
    0x5fc2cbe75e10 ---------A   00805  PRINT"YOUR LICENSE WILL BE RENEWED.......LATER."
    0x5fc2cbe76170 ---------A T 00810  IF ABS(V1)<2 THEN 840
    0x5fc2cbe76310 ---------A   00820  PRINT"***** SORRY, BUT YOU BLEW IT!!!!"
    0x5fc2cbe768b0 ---------A   00830  PRINT"APPROPRIATE CONDOLENCES WILL BE SENT TO YOUR NEXT OF KIN."
    0x5fc2cbe76910 ---------- T 00840  PRINT
    0x5fc2cbe76970 ---------- T      a PRINT
    0x5fc2cbe76a00 ---------A T      b PRINT
    0x5fc2cbe76b90 ---------A   00850  INPUT "ANOTHER MISSION";A$
    0x5fc2cbe76e20 ---------A   00860  IF A$="YES" THEN 390
    0x5fc2cbe76e80 ----------   00870  PRINT
    0x5fc2cbe76fc0 ----------        a PRINT "CONTROL OUT."
    0x5fc2cbe77040 ---------A        b PRINT
    0x5fc2cbe770a0 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/rocket.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5fc2cbe636d0 ---------A   01000  PRINT TAB(30); "ROCKET"
    0x5fc2cbe63670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fc2cbe542b0 ----------   01020  PRINT
    0x5fc2cbe639e0 ----------   01030  PRINT
    0x5fc2cbe637f0 ---------A   01040  PRINT
    0x5fc2cbe64040 ---------A   01050  PRINT "LUNAR LANDING SIMULATION"
    0x5fc2cbe640a0 ----------   01060  PRINT "----- ------- ----------"
    0x5fc2cbe63e80 ---------A   01070  PRINT
    0x5fc2cbe644e0 ---------A   01080  INPUT "DO YOU WANT INSTRUCTIONS (YES OR NO)";A$
    0x5fc2cbe661e0 ---------A   01090  IF A$="NO" THEN 1330
    0x5fc2cbe64620 ---------A   01100  PRINT
    0x5fc2cbe647a0 ---------A   01110  PRINT"YOU ARE LANDING ON THE MOON AND AND HAVE TAKEN OVER MANUAL"
    0x5fc2cbe64880 ---------A   01120  PRINT"CONTROL 1000 FEET ABOVE A GOOD LANDING SPOT. YOU HAVE A DOWN-"
    0x5fc2cbe6b920 ---------A   01130  PRINT"WARD VELOCITY OF 50 FEET/SEC. 150 UNITS OF FUEL REMAIN."
    0x5fc2cbe6b9e0 ---------A   01140  PRINT
    0x5fc2cbe6bb50 ----------   01150  PRINT"HERE ARE THE RULES THAT GOVERN YOUR APOLLO SPACE-CRAFT:"
    0x5fc2cbe6bc10 ---------A   01160  PRINT
    0x5fc2cbe6bdd0 ---------A   01170  PRINT"(1) AFTER EACH SECOND THE HEIGHT, VELOCITY, AND REMAINING FUEL"
    0x5fc2cbe6bf90 ---------A   01180  PRINT"    WILL BE REPORTED VIA DIGBY YOUR ON-BOARD COMPUTER."
    0x5fc2cbe6c150 ---------A   01190  PRINT"(2) AFTER THE REPORT A '?' WILL APPEAR. ENTER THE NUMBER"
    0x5fc2cbe6c300 ---------A   01200  PRINT"    OF UNITS OF FUEL YOU WISH TO BURN DURING THE NEXT"
    0x5fc2cbe6c470 ---------A   01210  PRINT"    SECOND. EACH UNIT OF FUEL WILL SLOW YOUR DESCENT BY"
    0x5fc2cbe6c5e0 ---------A   01220  PRINT"    1 FOOT/SEC."
    0x5fc2cbe6c790 ---------A   01230  PRINT"(3) THE MAXIMUM THRUST OF YOUR ENGINE IS 30 FEET/SEC/SEC"
    0x5fc2cbe6c900 ---------A   01240  PRINT"    OR 30 UNITS OF FUEL PER SECOND."
    0x5fc2cbe6cac0 ---------A   01250  PRINT"(4) WHEN YOU CONTACT THE LUNAR SURFACE. YOUR DESCENT ENGINE"
    0x5fc2cbe6cc80 ---------A   01260  PRINT"    WILL AUTOMATICALLY SHUT DOWN AND YOU WILL BE GIVEN A"
    0x5fc2cbe6ce30 ---------A   01270  PRINT"    REPORT OF YOUR LANDING SPEED AND REMAINING FUEL."
    0x5fc2cbe6cff0 ---------A   01280  PRINT"(5) IF YOU RUN OUT OF FUEL THE '?' WILL NO LONGER APPEAR"
    0x5fc2cbe6d1a0 ---------A   01290  PRINT"    BUT YOUR SECOND BY SECOND REPORT WILL CONTINUE UNTIL"
    0x5fc2cbe6d2c0 ----------   01300  PRINT"    YOU CONTACT THE LUNAR SURFACE."
    0x5fc2cbe6d360 ---------A   01310  PRINT
    0x5fc2cbe6d480 ----------   01320  PRINT"BEGINNING LANDING PROCEDURE.........."
    0x5fc2cbe6d4e0 ---------A   01330  PRINT
    0x5fc2cbe6d600 ---------A   01340  PRINT"G O O D  L U C K ! ! !"
    0x5fc2cbe6d660 ----------   01350  PRINT
    0x5fc2cbe6d710 ---------A   01360  PRINT
    0x5fc2cbe6d890 ---------A   01370  PRINT"SEC  FEET      SPEED     FUEL     PLOT OF DISTANCE"
    0x5fc2cbe6d8f0 ---------A   01380  PRINT
    0x5fc2cbe6dbb0 ----------   01390  T=0
    0x5fc2cbe6de60 ----------   01400  H=1000
    0x5fc2cbe6e110 ----------   01410  V=50
    0x5fc2cbe6e410 ---------A   01420  F=150
    0x5fc2cbe6f3d0 ---------A   01430  PRINT T;TAB(6);H;TAB(16);V;TAB(26);F;TAB(35);"I";TAB(H/15);"*"
    0x5fc2cbe6f5f0 ---------A   01440  INPUT B
    0x5fc2cbe6f850 ---------A   01450  IF B<0 THEN 1580
    0x5fc2cbe6fca0 ---------A   01460  IF B>30 THEN B=30
    0x5fc2cbe70130 ---------A   01470  IF B>F THEN B=F
    0x5fc2cbe70650 ---------A   01480  V1=V-B+5
    0x5fc2cbe709a0 ---------A   01490  F=F-B
    0x5fc2cbe70f50 ---------A   01500  H=H- .5*(V+V1)
    0x5fc2cbe711a0 ---------A   01510  IF H<=0 THEN 1600
    0x5fc2cbe714e0 ---------A   01520  T=T+1
    0x5fc2cbe71710 ---------A   01530  V=V1
    0x5fc2cbe71960 ---------A   01540  IF F>0 THEN 1430
    0x5fc2cbe71ba0 ---------A   01550  IF B=0 THEN 1570
    0x5fc2cbe71d30 ---------A   01560  PRINT"**** OUT OF FUEL ****"
    0x5fc2cbe72bf0 ---------A   01570  PRINT T;TAB(4);H;TAB(12);V;TAB(20);F;TAB(29);"I";TAB(H/12+29);"*"
    0x5fc2cbe72e10 ---------A   01580  B=0
    0x5fc2cbe72e60 ---------A   01590  GOTO 1480
    0x5fc2cbe72fb0 ---------A   01600  PRINT"***** CONTACT *****"
    0x5fc2cbe73570 ---------A   01610  H=H+ .5*(V1+V)
    0x5fc2cbe737a0 ---------A   01620  IF B=5 THEN 1650
    0x5fc2cbe744e0 ---------A   01630  D=(-V+SQR(V*V+H*(10-2*B)))/(5-B)
    0x5fc2cbe74550 ---------A   01640  GOTO 1660
    0x5fc2cbe748a0 ---------A   01650  D=H/V
    0x5fc2cbe74e30 ---------A   01660  V1=V+(5-B)*D
    0x5fc2cbe752c0 ---------A   01670  PRINT"TOUCHDOWN AT";T+D;"SECONDS."
    0x5fc2cbe75600 ---------A   01680  PRINT"LANDING VELOCITY=";V1;"FEET/SEC."
    0x5fc2cbe75870 ---------A   01690  PRINT F;"UNITS OF FUEL REMAINING."
    0x5fc2cbe75af0 ---------A   01700  IF V1<>0 THEN 1730
    0x5fc2cbe75c80 ---------A   01710  PRINT"CONGRATULATIONS! A PERFECT LANDING!!"
    0x5fc2cbe75e10 ---------A   01720  PRINT"YOUR LICENSE WILL BE RENEWED.......LATER."
    0x5fc2cbe76170 ---------A   01730  IF ABS(V1)<2 THEN 1780
    0x5fc2cbe76310 ---------A   01740  PRINT"***** SORRY, BUT YOU BLEW IT!!!!"
    0x5fc2cbe768b0 ---------A   01750  PRINT"APPROPRIATE CONDOLENCES WILL BE SENT TO YOUR NEXT OF KIN."
    0x5fc2cbe76910 ----------   01760  PRINT
    0x5fc2cbe76970 ----------   01770  PRINT
    0x5fc2cbe76a00 ---------A   01780  PRINT
    0x5fc2cbe76b90 ---------A   01790  INPUT "ANOTHER MISSION";A$
    0x5fc2cbe76e20 ---------A   01800  IF A$="YES" THEN 1330
    0x5fc2cbe76e80 ----------   01810  PRINT
    0x5fc2cbe76fc0 ----------   01820  PRINT "CONTROL OUT."
    0x5fc2cbe77040 ---------A   01830  PRINT
    0x5fc2cbe770a0 ---------A   01840  END
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
 *  Symbol Table Listing for 'basic/rocket.bas'
 *
    A$                       String      
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
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
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
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V                        Integer     
    V1                       Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/rocket.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5fc2cbe636d0 ---------A   01000  PRINT TAB(30); "ROCKET"
    0x5fc2cbe63670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fc2cbe542b0 ---------A   01020  PRINT
    0x5fc2cbe639e0 ---------A   01030  PRINT
    0x5fc2cbe637f0 ---------A   01040  PRINT
    0x5fc2cbe64040 ---------A   01050  PRINT "LUNAR LANDING SIMULATION"
    0x5fc2cbe640a0 ---------A   01060  PRINT "----- ------- ----------"
    0x5fc2cbe63e80 ---------A   01070  PRINT
    0x5fc2cbe644e0 ---------A   01080  INPUT "DO YOU WANT INSTRUCTIONS (YES OR NO)";A$
    0x5fc2cbe661e0 ---------A   01090  IF A$="NO" THEN 1330
    0x5fc2cbe64620 ---------A   01100  PRINT
    0x5fc2cbe647a0 ---------A   01110  PRINT"YOU ARE LANDING ON THE MOON AND AND HAVE TAKEN OVER MANUAL"
    0x5fc2cbe64880 ---------A   01120  PRINT"CONTROL 1000 FEET ABOVE A GOOD LANDING SPOT. YOU HAVE A DOWN-"
    0x5fc2cbe6b920 ---------A   01130  PRINT"WARD VELOCITY OF 50 FEET/SEC. 150 UNITS OF FUEL REMAIN."
    0x5fc2cbe6b9e0 ---------A   01140  PRINT
    0x5fc2cbe6bb50 ---------A   01150  PRINT"HERE ARE THE RULES THAT GOVERN YOUR APOLLO SPACE-CRAFT:"
    0x5fc2cbe6bc10 ---------A   01160  PRINT
    0x5fc2cbe6bdd0 ---------A   01170  PRINT"(1) AFTER EACH SECOND THE HEIGHT, VELOCITY, AND REMAINING FUEL"
    0x5fc2cbe6bf90 ---------A   01180  PRINT"    WILL BE REPORTED VIA DIGBY YOUR ON-BOARD COMPUTER."
    0x5fc2cbe6c150 ---------A   01190  PRINT"(2) AFTER THE REPORT A '?' WILL APPEAR. ENTER THE NUMBER"
    0x5fc2cbe6c300 ---------A   01200  PRINT"    OF UNITS OF FUEL YOU WISH TO BURN DURING THE NEXT"
    0x5fc2cbe6c470 ---------A   01210  PRINT"    SECOND. EACH UNIT OF FUEL WILL SLOW YOUR DESCENT BY"
    0x5fc2cbe6c5e0 ---------A   01220  PRINT"    1 FOOT/SEC."
    0x5fc2cbe6c790 ---------A   01230  PRINT"(3) THE MAXIMUM THRUST OF YOUR ENGINE IS 30 FEET/SEC/SEC"
    0x5fc2cbe6c900 ---------A   01240  PRINT"    OR 30 UNITS OF FUEL PER SECOND."
    0x5fc2cbe6cac0 ---------A   01250  PRINT"(4) WHEN YOU CONTACT THE LUNAR SURFACE. YOUR DESCENT ENGINE"
    0x5fc2cbe6cc80 ---------A   01260  PRINT"    WILL AUTOMATICALLY SHUT DOWN AND YOU WILL BE GIVEN A"
    0x5fc2cbe6ce30 ---------A   01270  PRINT"    REPORT OF YOUR LANDING SPEED AND REMAINING FUEL."
    0x5fc2cbe6cff0 ---------A   01280  PRINT"(5) IF YOU RUN OUT OF FUEL THE '?' WILL NO LONGER APPEAR"
    0x5fc2cbe6d1a0 ---------A   01290  PRINT"    BUT YOUR SECOND BY SECOND REPORT WILL CONTINUE UNTIL"
    0x5fc2cbe6d2c0 ---------A   01300  PRINT"    YOU CONTACT THE LUNAR SURFACE."
    0x5fc2cbe6d360 ---------A   01310  PRINT
    0x5fc2cbe6d480 ---------A   01320  PRINT"BEGINNING LANDING PROCEDURE.........."
    0x5fc2cbe6d4e0 ---------A T 01330  PRINT
    0x5fc2cbe6d600 ---------A   01340  PRINT"G O O D  L U C K ! ! !"
    0x5fc2cbe6d660 ---------A   01350  PRINT
    0x5fc2cbe6d710 ---------A   01360  PRINT
    0x5fc2cbe6d890 ---------A   01370  PRINT"SEC  FEET      SPEED     FUEL     PLOT OF DISTANCE"
    0x5fc2cbe6d8f0 ---------A   01380  PRINT
    0x5fc2cbe6dbb0 ---------A   01390  T=0
    0x5fc2cbe6de60 ---------A   01400  H=1000
    0x5fc2cbe6e110 ---------A   01410  V=50
    0x5fc2cbe6e410 ---------A   01420  F=150
    0x5fc2cbe6f3d0 ---------A T 01430  PRINT T;TAB(6);H;TAB(16);V;TAB(26);F;TAB(35);"I";TAB(H/15);"*"
    0x5fc2cbe6f5f0 ---------A   01440  INPUT B
    0x5fc2cbe6f850 ---------A   01450  IF B<0 THEN 1580
    0x5fc2cbe6fca0 ---------A   01460  IF B>30 THEN B=30
    0x5fc2cbe70130 ---------A   01470  IF B>F THEN B=F
    0x5fc2cbe70650 ---------A T 01480  V1=V-B+5
    0x5fc2cbe709a0 ---------A   01490  F=F-B
    0x5fc2cbe70f50 ---------A   01500  H=H- .5*(V+V1)
    0x5fc2cbe711a0 ---------A   01510  IF H<=0 THEN 1600
    0x5fc2cbe714e0 ---------A   01520  T=T+1
    0x5fc2cbe71710 ---------A   01530  V=V1
    0x5fc2cbe71960 ---------A   01540  IF F>0 THEN 1430
    0x5fc2cbe71ba0 ---------A   01550  IF B=0 THEN 1570
    0x5fc2cbe71d30 ---------A   01560  PRINT"**** OUT OF FUEL ****"
    0x5fc2cbe72bf0 ---------A T 01570  PRINT T;TAB(4);H;TAB(12);V;TAB(20);F;TAB(29);"I";TAB(H/12+29);"*"
    0x5fc2cbe72e10 ---------A T 01580  B=0
    0x5fc2cbe72e60 ---------A   01590  GOTO 1480
    0x5fc2cbe72fb0 ---------A T 01600  PRINT"***** CONTACT *****"
    0x5fc2cbe73570 ---------A   01610  H=H+ .5*(V1+V)
    0x5fc2cbe737a0 ---------A   01620  IF B=5 THEN 1650
    0x5fc2cbe744e0 ---------A   01630  D=(-V+SQR(V*V+H*(10-2*B)))/(5-B)
    0x5fc2cbe74550 ---------A   01640  GOTO 1660
    0x5fc2cbe748a0 ---------A T 01650  D=H/V
    0x5fc2cbe74e30 ---------A T 01660  V1=V+(5-B)*D
    0x5fc2cbe752c0 ---------A   01670  PRINT"TOUCHDOWN AT";T+D;"SECONDS."
    0x5fc2cbe75600 ---------A   01680  PRINT"LANDING VELOCITY=";V1;"FEET/SEC."
    0x5fc2cbe75870 ---------A   01690  PRINT F;"UNITS OF FUEL REMAINING."
    0x5fc2cbe75af0 ---------A   01700  IF V1<>0 THEN 1730
    0x5fc2cbe75c80 ---------A   01710  PRINT"CONGRATULATIONS! A PERFECT LANDING!!"
    0x5fc2cbe75e10 ---------A   01720  PRINT"YOUR LICENSE WILL BE RENEWED.......LATER."
    0x5fc2cbe76170 ---------A T 01730  IF ABS(V1)<2 THEN 1780
    0x5fc2cbe76310 ---------A   01740  PRINT"***** SORRY, BUT YOU BLEW IT!!!!"
    0x5fc2cbe768b0 ---------A   01750  PRINT"APPROPRIATE CONDOLENCES WILL BE SENT TO YOUR NEXT OF KIN."
    0x5fc2cbe76910 ---------A   01760  PRINT
    0x5fc2cbe76970 ---------A   01770  PRINT
    0x5fc2cbe76a00 ---------A T 01780  PRINT
    0x5fc2cbe76b90 ---------A   01790  INPUT "ANOTHER MISSION";A$
    0x5fc2cbe76e20 ---------A   01800  IF A$="YES" THEN 1330
    0x5fc2cbe76e80 ---------A   01810  PRINT
    0x5fc2cbe76fc0 ---------A   01820  PRINT "CONTROL OUT."
    0x5fc2cbe77040 ---------A   01830  PRINT
    0x5fc2cbe770a0 ---------A   01840  END
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
char*  A_str;                                     // Basic: A$ 
int    B_int;                                     // Basic: B 
int    D_int;                                     // Basic: D 
int    F_int;                                     // Basic: F 
int    H_int;                                     // Basic: H 
int    T_int;                                     // Basic: T 
int    V_int;                                     // Basic: V 
int    V1_int;                                    // Basic: V1 
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
    // 01000 PRINT TAB(30); "ROCKET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,30);strcat(buf,"ROCKET");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "LUNAR LANDING SIMULATION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LUNAR LANDING SIMULATION");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "----- ------- ----------"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"----- ------- ----------");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 INPUT "DO YOU WANT INSTRUCTIONS (YES OR NO)";A$
    // Start of Basic INPUT statement 01080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"DO YOU WANT INSTRUCTIONS (YES OR NO)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 IF A$="NO" THEN 1330
    if(strcmp(A_str,"NO")==0)goto Lbl_01330;
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT"YOU ARE LANDING ON THE MOON AND AND HAVE TAKEN OVER MANUAL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE LANDING ON THE MOON AND AND HAVE TAKEN OVER MANUAL");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT"CONTROL 1000 FEET ABOVE A GOOD LANDING SPOT. YOU HAVE A DOWN-"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONTROL 1000 FEET ABOVE A GOOD LANDING SPOT. YOU HAVE A DOWN-");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT"WARD VELOCITY OF 50 FEET/SEC. 150 UNITS OF FUEL REMAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WARD VELOCITY OF 50 FEET/SEC. 150 UNITS OF FUEL REMAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT"HERE ARE THE RULES THAT GOVERN YOUR APOLLO SPACE-CRAFT:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE ARE THE RULES THAT GOVERN YOUR APOLLO SPACE-CRAFT:");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT"(1) AFTER EACH SECOND THE HEIGHT, VELOCITY, AND REMAINING FUEL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(1) AFTER EACH SECOND THE HEIGHT, VELOCITY, AND REMAINING FUEL");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT"    WILL BE REPORTED VIA DIGBY YOUR ON-BOARD COMPUTER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    WILL BE REPORTED VIA DIGBY YOUR ON-BOARD COMPUTER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT"(2) AFTER THE REPORT A '?' WILL APPEAR. ENTER THE NUMBER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(2) AFTER THE REPORT A '?' WILL APPEAR. ENTER THE NUMBER");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT"    OF UNITS OF FUEL YOU WISH TO BURN DURING THE NEXT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    OF UNITS OF FUEL YOU WISH TO BURN DURING THE NEXT");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT"    SECOND. EACH UNIT OF FUEL WILL SLOW YOUR DESCENT BY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    SECOND. EACH UNIT OF FUEL WILL SLOW YOUR DESCENT BY");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT"    1 FOOT/SEC."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    1 FOOT/SEC.");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT"(3) THE MAXIMUM THRUST OF YOUR ENGINE IS 30 FEET/SEC/SEC"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(3) THE MAXIMUM THRUST OF YOUR ENGINE IS 30 FEET/SEC/SEC");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT"    OR 30 UNITS OF FUEL PER SECOND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    OR 30 UNITS OF FUEL PER SECOND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT"(4) WHEN YOU CONTACT THE LUNAR SURFACE. YOUR DESCENT ENGINE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(4) WHEN YOU CONTACT THE LUNAR SURFACE. YOUR DESCENT ENGINE");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT"    WILL AUTOMATICALLY SHUT DOWN AND YOU WILL BE GIVEN A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    WILL AUTOMATICALLY SHUT DOWN AND YOU WILL BE GIVEN A");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT"    REPORT OF YOUR LANDING SPEED AND REMAINING FUEL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    REPORT OF YOUR LANDING SPEED AND REMAINING FUEL.");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT"(5) IF YOU RUN OUT OF FUEL THE '?' WILL NO LONGER APPEAR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(5) IF YOU RUN OUT OF FUEL THE '?' WILL NO LONGER APPEAR");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT"    BUT YOUR SECOND BY SECOND REPORT WILL CONTINUE UNTIL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    BUT YOUR SECOND BY SECOND REPORT WILL CONTINUE UNTIL");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT"    YOU CONTACT THE LUNAR SURFACE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    YOU CONTACT THE LUNAR SURFACE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT"BEGINNING LANDING PROCEDURE.........."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BEGINNING LANDING PROCEDURE..........");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01330:
    // 01330 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT"G O O D  L U C K ! ! !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"G O O D  L U C K ! ! !");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT"SEC  FEET      SPEED     FUEL     PLOT OF DISTANCE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SEC  FEET      SPEED     FUEL     PLOT OF DISTANCE");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01390 T=0
    T_int = 0;
    // 01400 H=1000
    H_int = 1000;
    // 01410 V=50
    V_int = 50;
    // 01420 F=150
    F_int = 150;

  Lbl_01430:
    // 01430 PRINT T;TAB(6);H;TAB(16);V;TAB(26);F;TAB(35);"I";TAB(H/15);"*"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,T_int);b2c_TAB(buf,6); b2c_INT(buf,H_int);b2c_TAB(buf,16); b2c_INT(buf,V_int);b2c_TAB(buf,26); b2c_INT(buf,F_int);b2c_TAB(buf,35);strcat(buf,"I");b2c_TAB(buf,H_int;strcat(buf,"*");strcat(buf,"\n");fputs(buf,fh); };
    // 01440 INPUT B
    // Start of Basic INPUT statement 01440
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
    }; // End of Basic INPUT statement 01440
    // 01450 IF B<0 THEN 1580
    if(B_int<0)goto Lbl_01580;
    // 01460 IF B>30 THEN B=30
    if(B_int>30) {
    }
    // 01470 IF B>F THEN B=F
    if(B_int>F_int) {
    }

  Lbl_01480:
    // 01480 V1=V-B+5
    V1_int = V_int-B_int+5;
    // 01490 F=F-B
    F_int = F_int-B_int;
    // 01500 H=H- .5*(V+V1)
    H_int = H_int-0.5*(V_int+V1_int);
    // 01510 IF H<=0 THEN 1600
    if(H_int<=0)goto Lbl_01600;
    // 01520 T=T+1
    T_int = T_int+1;
    // 01530 V=V1
    V_int = V1_int;
    // 01540 IF F>0 THEN 1430
    if(F_int>0)goto Lbl_01430;
    // 01550 IF B=0 THEN 1570
    if(B_int==0)goto Lbl_01570;
    // 01560 PRINT"**** OUT OF FUEL ****"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"**** OUT OF FUEL ****");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01570:
    // 01570 PRINT T;TAB(4);H;TAB(12);V;TAB(20);F;TAB(29);"I";TAB(H/12+29);"*"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,T_int);b2c_TAB(buf,4); b2c_INT(buf,H_int);b2c_TAB(buf,12); b2c_INT(buf,V_int);b2c_TAB(buf,20); b2c_INT(buf,F_int);b2c_TAB(buf,29);strcat(buf,"I");b2c_TAB(buf,H_int29);strcat(buf,"*");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01580:
    // 01580 B=0
    B_int = 0;
    // 01590 GOTO 1480
    goto Lbl_01480;

  Lbl_01600:
    // 01600 PRINT"***** CONTACT *****"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"***** CONTACT *****");strcat(buf,"\n");fputs(buf,fh); };
    // 01610 H=H+ .5*(V1+V)
    H_int = H_int+0.5*(V1_int+V_int);
    // 01620 IF B=5 THEN 1650
    if(B_int==5)goto Lbl_01650;
    // 01630 D=(-V+SQR(V*V+H*(10-2*B)))/(5-B)
    D_int = (V_int+SQR(V_int*V_int+H_int*(10-2*B_int)))/(5-B_int);
    // 01640 GOTO 1660
    goto Lbl_01660;

  Lbl_01650:
    // 01650 D=H/V
    D_int = H_int/V_int;

  Lbl_01660:
    // 01660 V1=V+(5-B)*D
    V1_int = V_int+(5-B_int)*D_int;
    // 01670 PRINT"TOUCHDOWN AT";T+D;"SECONDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOUCHDOWN AT"); b2c_INT(buf,T_int+D_int);strcat(buf,"SECONDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01680 PRINT"LANDING VELOCITY=";V1;"FEET/SEC."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LANDING VELOCITY="); b2c_INT(buf,V1_int);strcat(buf,"FEET/SEC.");strcat(buf,"\n");fputs(buf,fh); };
    // 01690 PRINT F;"UNITS OF FUEL REMAINING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int);strcat(buf,"UNITS OF FUEL REMAINING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01700 IF V1<>0 THEN 1730
    if(V1_int!=0)goto Lbl_01730;
    // 01710 PRINT"CONGRATULATIONS! A PERFECT LANDING!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS! A PERFECT LANDING!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01720 PRINT"YOUR LICENSE WILL BE RENEWED.......LATER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR LICENSE WILL BE RENEWED.......LATER.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01730:
    // 01730 IF ABS(V1)<2 THEN 1780
    if(ABS(V1_int)<2)goto Lbl_01780;
    // 01740 PRINT"***** SORRY, BUT YOU BLEW IT!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"***** SORRY, BUT YOU BLEW IT!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01750 PRINT"APPROPRIATE CONDOLENCES WILL BE SENT TO YOUR NEXT OF KIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"APPROPRIATE CONDOLENCES WILL BE SENT TO YOUR NEXT OF KIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01760 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01770 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01780:
    // 01780 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01790 INPUT "ANOTHER MISSION";A$
    // Start of Basic INPUT statement 01790
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ANOTHER MISSION");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01790
    // 01800 IF A$="YES" THEN 1330
    if(strcmp(A_str,"YES")==0)goto Lbl_01330;
    // 01810 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01820 PRINT "CONTROL OUT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONTROL OUT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01830 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01840 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
