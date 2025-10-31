/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/hamurabi.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b70b6efe6d0 ---------A   00010  PRINT TAB(32);"HAMURABI"
    0x5b70b6efe670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b70b6f00aa0 ---------A   00030  PRINT:PRINT:PRINT
    0x5b70b6eff080 ---------A   00080  PRINT "TRY YOUR HAND AT GOVERNING ANCIENT SUMERIA"
    0x5b70b6eff480 ---------A   00090  PRINT "FOR A TEN-YEAR TERM OF OFFICE.":PRINT
    0x5b70b6f00e70 ---------A   00095  D1=0: P1=0
    0x5b70b6f07280 ---------A   00100  Z=0: P=95:S=2800: H=3000: E=H-S
    0x5b70b6f07e60 ---------A   00110  Y=3: A=H/Y: I=5: Q=1
    0x5b70b6f08160 ---------A T 00210  D=0
    0x5b70b6f08650 ---------A T 00215  PRINT:PRINT:PRINT "HAMURABI:  I BEG TO REPORT TO YOU,": Z=Z+1
    0x5b70b6f08da0 ---------A   00217  PRINT "IN YEAR";Z;",";D;"PEOPLE STARVED,";I;"CAME TO THE CITY,"
    0x5b70b6f09100 ---------A   00218  P=P+I
    0x5b70b6f09350 ---------A   00227  IF Q>0 THEN 230
    0x5b70b6f097a0 ---------A   00228  P=INT(P/2)
    0x5b70b6f098f0 ---------A   00229  PRINT "A HORRIBLE PLAGUE STRUCK!  HALF THE PEOPLE DIED."
    0x5b70b6f09b70 ---------A T 00230  PRINT "POPULATION IS NOW";P
    0x5b70b6f09ef0 ---------A   00232  PRINT "THE CITY NOW OWNS ";A;"ACRES."
    0x5b70b6f0a230 ---------A   00235  PRINT "YOU HARVESTED";Y;"BUSHELS PER ACRE."
    0x5b70b6f0a5b0 ---------A   00250  PRINT "THE RATS ATE";E;"BUSHELS."
    0x5b70b6f0a970 ---------A   00260  PRINT "YOU NOW HAVE ";S;"BUSHELS IN STORE.": PRINT
    0x5b70b6f0abb0 ---------A   00270  IF Z=11 THEN 860
    0x5b70b6f0b480 ---------A   00310  C=INT(10*RND(1)): Y=C+17
    0x5b70b6f0b7f0 ---------A   00312  PRINT "LAND IS TRADING AT";Y;"BUSHELS PER ACRE."
    0x5b70b6f0b960 ---------A T 00320  PRINT "HOW MANY ACRES DO YOU WISH TO BUY";
    0x5b70b6f0bd00 ---------A   00321  INPUT Q: IF Q<0 THEN 850
    0x5b70b6f0c0a0 ---------A   00322  IF Y*Q<=S THEN 330
    0x5b70b6f0c120 ---------A   00323  GOSUB 710
    0x5b70b6f0c190 ---------A   00324  GOTO 320
    0x5b70b6f0c3e0 ---------A T 00330  IF Q=0 THEN 340
    0x5b70b6f0cd80 ---------A   00331  A=A+Q: S=S-Y*Q: C=0
    0x5b70b6f0ce10 ---------A   00334  GOTO 400
    0x5b70b6f0cfa0 ---------A T 00340  PRINT "HOW MANY ACRES DO YOU WISH TO SELL";
    0x5b70b6f0d340 ---------A   00341  INPUT Q: IF Q<0 THEN 850
    0x5b70b6f0d7d0 ---------A   00342  IF Q<A THEN 350
    0x5b70b6f0d850 ---------A   00343  GOSUB 720
    0x5b70b6f0d8c0 ---------A   00344  GOTO 340
    0x5b70b6f0e250 ---------A T 00350  A=A-Q: S=S+Y*Q: C=0
    0x5b70b6f0e2f0 ---------A T 00400  PRINT
    0x5b70b6f0e490 ---------A T 00410  PRINT "HOW MANY BUSHELS DO YOU WISH TO FEED YOUR PEOPLE";
    0x5b70b6f0e5f0 ---------A   00411  INPUT Q
    0x5b70b6f0e870 ---------A   00412  IF Q<0 THEN 850
    0x5b70b6f0e910 ---------A   00418  REM *** TRYING TO USE MORE GRAIN THAN IS IN SILOS?
    0x5b70b6f0eba0 ---------A   00420  IF Q<=S THEN 430
    0x5b70b6f0ec20 ---------A   00421  GOSUB 710
    0x5b70b6f0ec90 ---------A   00422  GOTO 410
    0x5b70b6f0f250 ---------A T 00430  S=S-Q: C=1: PRINT
    0x5b70b6f0f400 ---------A T 00440  PRINT "HOW MANY ACRES DO YOU WISH TO PLANT WITH SEED";
    0x5b70b6f0f7a0 ---------A   00441  INPUT D: IF D=0 THEN 511
    0x5b70b6f0fa20 ---------A   00442  IF D<0 THEN 850
    0x5b70b6f0fac0 ---------A   00444  REM *** TRYING TO PLANT MORE ACRES THAN YOU OWN?
    0x5b70b6f0fd50 ---------A   00445  IF D<=A THEN 450
    0x5b70b6f0fdd0 ---------A   00446  GOSUB 720
    0x5b70b6f0fe50 ---------A   00447  GOTO 440
    0x5b70b6f0fed0 ---------A   00449  REM *** ENOUGH GRAIN FOR SEED?
    0x5b70b6f10350 ---------A T 00450  IF INT(D/2)<=S THEN 455
    0x5b70b6f103d0 ---------A   00452  GOSUB 710
    0x5b70b6f10460 ---------A   00453  GOTO 440
    0x5b70b6f104f0 ---------A   00454  REM *** ENOUGH PEOPLE TO TEND THE CROPS?
    0x5b70b6f108b0 ---------A T 00455  IF D<10*P THEN 510
    0x5b70b6f10c20 ---------A   00460  PRINT "BUT YOU HAVE ONLY";P;"PEOPLE TO TEND THE FIELDS!  NOW THEN,"
    0x5b70b6f10ca0 ---------A   00470  GOTO 440
    0x5b70b6f111d0 ---------A T 00510  S=S-INT(D/2)
    0x5b70b6f11250 ---------A T 00511  GOSUB 800
    0x5b70b6f112d0 ---------A   00512  REM *** A BOUNTIFUL HARVEST!
    0x5b70b6f11a40 ---------A   00515  Y=C: H=D*Y: E=0
    0x5b70b6f11ed0 ---------A   00521  GOSUB 800
    0x5b70b6f12430 ---------A   00522  IF INT(C/2)<>C/2 THEN 530
    0x5b70b6f124c0 ---------A   00523  REM *** RATS ARE RUNNING WILD!!
    0x5b70b6f12910 ---------A   00525  E=INT(S/C)
    0x5b70b6f12d80 ---------A T 00530  S=S-E+H
    0x5b70b6f12e00 ---------A   00531  GOSUB 800
    0x5b70b6f12e80 ---------A   00532  REM *** LET'S HAVE SOME BABIES
    0x5b70b6f13880 ---------A   00533  I=INT(C*(20*A+S)/P/100+1)
    0x5b70b6f13910 ---------A   00539  REM *** HOW MANY PEOPLE HAD FULL TUMMIES?
    0x5b70b6f13d60 ---------A   00540  C=INT(Q/20)
    0x5b70b6f13de0 ---------A   00541  REM *** HORROS, A 15% CHANCE OF PLAGUE
    0x5b70b6f14520 ---------A   00542  Q=INT(10*(2*RND(1)-.3))
    0x5b70b6f147b0 ---------A   00550  IF P<C THEN 210
    0x5b70b6f14840 ---------A   00551  REM *** STARVE ENOUGH FOR IMPEACHMENT?
    0x5b70b6f14f20 ---------A   00552  D=P-C: IF D>.45*P THEN 560
    0x5b70b6f15870 ---------A   00553  P1=((Z-1)*P1+D*100/P)/Z
    0x5b70b6f15e50 ---------A   00555  P=C: D1=D1+D: GOTO 215
    0x5b70b6f16230 ---------A T 00560  PRINT: PRINT "YOU STARVED";D;"PEOPLE IN ONE YEAR!!!"
    0x5b70b6f163e0 ---------A T 00565  PRINT "DUE TO THIS EXTREME MISMANAGEMENT YOU HAVE NOT ONLY"
    0x5b70b6f16590 ---------A   00566  PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE BUT YOU HAVE"
    0x5b70b6f16780 ---------A   00567  PRINT "ALSO BEEN DECLARED NATIONAL FINK!!!!": GOTO 990
    0x5b70b6f16910 ---------B G 00710  PRINT "HAMURABI:  THINK AGAIN.  YOU HAVE ONLY"
    0x5b70b6f16b80 ---------B   00711  PRINT S;"BUSHELS OF GRAIN.  NOW THEN,"
    0x5b70b6f16be0 ---------B   00712  RETURN
    0x5b70b6f16f80 ---------C G 00720  PRINT "HAMURABI:  THINK AGAIN.  YOU OWN ONLY";A;"ACRES.  NOW THEN,"
    0x5b70b6f16fe0 ---------C   00730  RETURN
    0x5b70b6f175c0 ---------D G 00800  C=INT(RND(1)*5)+1
    0x5b70b6f17610 ---------D   00801  RETURN
    0x5b70b6f17830 ---------A T 00850  PRINT: PRINT "HAMURABI:  I CANNOT DO WHAT YOU WISH."
    0x5b70b6f179a0 ---------A   00855  PRINT "GET YOURSELF ANOTHER STEWARD!!!!!"
    0x5b70b6f17a50 ---------A   00857  GOTO 990
    0x5b70b6f17de0 ---------A T 00860  PRINT "IN YOUR 10-YEAR TERM OF OFFICE,";P1;"PERCENT OF THE"
    0x5b70b6f17f80 ---------A   00862  PRINT "POPULATION STARVED PER YEAR ON THE AVERAGE, I.E. A TOTAL OF"
    0x5b70b6f18610 ---------A   00865  PRINT D1;"PEOPLE DIED!!": L=A/P
    0x5b70b6f18790 ---------A   00870  PRINT "YOU STARTED WITH 10 ACRES PER PERSON AND ENDED WITH"
    0x5b70b6f18a50 ---------A   00875  PRINT L;"ACRES PER PERSON.": PRINT
    0x5b70b6f18cb0 ---------A   00880  IF P1>33 THEN 565
    0x5b70b6f18f10 ---------A   00885  IF L<7 THEN 565
    0x5b70b6f19170 ---------A   00890  IF P1>10 THEN 940
    0x5b70b6f193d0 ---------A   00892  IF L<9 THEN 940
    0x5b70b6f19630 ---------A   00895  IF P1>3 THEN 960
    0x5b70b6f198c0 ---------A   00896  IF L<10 THEN 960
    0x5b70b6f19a80 ---------A   00900  PRINT "A FANTASTIC PERFORMANCE!!!  CHARLEMANGE, DISRAELI, AND"
    0x5b70b6f19c90 ---------A   00905  PRINT "JEFFERSON COMBINED COULD NOT HAVE DONE BETTER!":GOTO 990
    0x5b70b6f19e40 ---------A T 00940  PRINT "YOUR HEAVY-HANDED PERFORMANCE SMACKS OF NERO AND IVAN IV."
    0x5b70b6f19ff0 ---------A   00945  PRINT "THE PEOPLE (REMIANING) FIND YOU AN UNPLEASANT RULER, AND,"
    0x5b70b6f1a1f0 ---------A   00950  PRINT "FRANKLY, HATE YOUR GUTS!!":GOTO 990
    0x5b70b6f1a390 ---------A T 00960  PRINT "YOUR PERFORMANCE COULD HAVE BEEN SOMEWHAT BETTER, BUT"
    0x5b70b6f1ab00 ---------A   00965  PRINT "REALLY WASN'T TOO BAD AT ALL. ";INT(P*.8*RND(1));"PEOPLE"
    0x5b70b6f1aca0 ---------A   00970  PRINT "WOULD DEARLY LIKE TO SEE YOU ASSASSINATED BUT WE ALL HAVE OUR"
    0x5b70b6f1ae20 ---------A   00975  PRINT "TRIVIAL PROBLEMS."
    0x5b70b6f1b560 ---------A T 00990  PRINT: FOR N=1 TO 10: PRINT CHR$(7);: NEXT N
    0x5b70b6f1b740 ---------A   00995  PRINT "SO LONG FOR NOW.": PRINT
    0x5b70b6f1b7a0 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00210      00550T
     00215      00555T
     00230      00227T
     00320      00324T
     00330      00322T
     00340      00330T, 00344T
     00350      00342T
     00400      00334T
     00410      00422T
     00430      00420T
     00440      00447T, 00453T, 00470T
     00450      00445T
     00455      00450T
     00510      00455T
     00511      00441T
     00530      00522T
     00560      00552T
     00565      00880T, 00885T
     00710      00323G, 00421G, 00452G
     00720      00343G, 00446G
     00800      00511G, 00521G, 00531G
     00850      00321T, 00341T, 00412T, 00442T
     00860      00270T
     00940      00890T, 00892T
     00960      00895T, 00896T
     00990      00567T, 00857T, 00905T, 00950T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5b70b6efe6d0 (00010)   0x5b70b6efe6d0 (00010)   0x5b70b6f1b7a0 (00999)   0x5b70b6f1b7a0 (00999)   
   B) 0x5b70b6f16910 (00710)   0x5b70b6f16910 (00710)   0x5b70b6f16be0 (00712)   0x5b70b6f16be0 (00712)   
   C) 0x5b70b6f16f80 (00720)   0x5b70b6f16f80 (00720)   0x5b70b6f16fe0 (00730)   0x5b70b6f16fe0 (00730)   
   D) 0x5b70b6f175c0 (00800)   0x5b70b6f175c0 (00800)   0x5b70b6f17610 (00801)   0x5b70b6f17610 (00801)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/hamurabi.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b70b6efe6d0 ---------A   00010  PRINT TAB(32);"HAMURABI"
    0x5b70b6efe670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b70b6eef2b0 ----------   00030  PRINT
    0x5b70b6efe9e0 ----------        a PRINT
    0x5b70b6f00aa0 ---------A        b PRINT
    0x5b70b6eff080 ---------A   00080  PRINT "TRY YOUR HAND AT GOVERNING ANCIENT SUMERIA"
    0x5b70b6efee80 ----------   00090  PRINT "FOR A TEN-YEAR TERM OF OFFICE."
    0x5b70b6eff480 ---------A        a PRINT
    0x5b70b6f00f30 ----------   00095  D1=0
    0x5b70b6f00e70 ---------A        a P1=0
    0x5b70b6f00ff0 ----------   00100  Z=0
    0x5b70b6f010b0 ----------        a P=95
    0x5b70b6f06ca0 ----------        b S=2800
    0x5b70b6f06f10 ----------        c H=3000
    0x5b70b6f07280 ---------A        d E=H-S
    0x5b70b6f074f0 ----------   00110  Y=3
    0x5b70b6f078e0 ----------        a A=H/Y
    0x5b70b6f07b90 ----------        b I=5
    0x5b70b6f07e60 ---------A        c Q=1
    0x5b70b6f08160 ---------A T 00210  D=0
    0x5b70b6f081b0 ---------- T 00215  PRINT
    0x5b70b6f08210 ---------- T      a PRINT
    0x5b70b6f08330 ---------- T      b PRINT "HAMURABI:  I BEG TO REPORT TO YOU,"
    0x5b70b6f08650 ---------A T      c Z=Z+1
    0x5b70b6f08da0 ---------A   00217  PRINT "IN YEAR";Z;",";D;"PEOPLE STARVED,";I;"CAME TO THE CITY,"
    0x5b70b6f09100 ---------A   00218  P=P+I
    0x5b70b6f09350 ---------A   00227  IF Q>0 THEN 230
    0x5b70b6f097a0 ---------A   00228  P=INT(P/2)
    0x5b70b6f098f0 ---------A   00229  PRINT "A HORRIBLE PLAGUE STRUCK!  HALF THE PEOPLE DIED."
    0x5b70b6f09b70 ---------A T 00230  PRINT "POPULATION IS NOW";P
    0x5b70b6f09ef0 ---------A   00232  PRINT "THE CITY NOW OWNS ";A;"ACRES."
    0x5b70b6f0a230 ---------A   00235  PRINT "YOU HARVESTED";Y;"BUSHELS PER ACRE."
    0x5b70b6f0a5b0 ---------A   00250  PRINT "THE RATS ATE";E;"BUSHELS."
    0x5b70b6f0a8f0 ----------   00260  PRINT "YOU NOW HAVE ";S;"BUSHELS IN STORE."
    0x5b70b6f0a970 ---------A        a PRINT
    0x5b70b6f0abb0 ---------A   00270  IF Z=11 THEN 860
    0x5b70b6f0b130 ----------   00310  C=INT(10*RND(1))
    0x5b70b6f0b480 ---------A        a Y=C+17
    0x5b70b6f0b7f0 ---------A   00312  PRINT "LAND IS TRADING AT";Y;"BUSHELS PER ACRE."
    0x5b70b6f0b960 ---------A T 00320  PRINT "HOW MANY ACRES DO YOU WISH TO BUY";
    0x5b70b6f0baa0 ----------   00321  INPUT Q
    0x5b70b6f0bd00 ---------A        a IF Q<0 THEN 850
    0x5b70b6f0c0a0 ---------A   00322  IF Y*Q<=S THEN 330
    0x5b70b6f0c120 ---------A   00323  GOSUB 710
    0x5b70b6f0c190 ---------A   00324  GOTO 320
    0x5b70b6f0c3e0 ---------A T 00330  IF Q=0 THEN 340
    0x5b70b6f0c720 ----------   00331  A=A+Q
    0x5b70b6f0cb70 ----------        a S=S-Y*Q
    0x5b70b6f0cd80 ---------A        b C=0
    0x5b70b6f0ce10 ---------A   00334  GOTO 400
    0x5b70b6f0cfa0 ---------A T 00340  PRINT "HOW MANY ACRES DO YOU WISH TO SELL";
    0x5b70b6f0d0e0 ----------   00341  INPUT Q
    0x5b70b6f0d340 ---------A        a IF Q<0 THEN 850
    0x5b70b6f0d7d0 ---------A   00342  IF Q<A THEN 350
    0x5b70b6f0d850 ---------A   00343  GOSUB 720
    0x5b70b6f0d8c0 ---------A   00344  GOTO 340
    0x5b70b6f0dbf0 ---------- T 00350  A=A-Q
    0x5b70b6f0e040 ---------- T      a S=S+Y*Q
    0x5b70b6f0e250 ---------A T      b C=0
    0x5b70b6f0e2f0 ---------A T 00400  PRINT
    0x5b70b6f0e490 ---------A T 00410  PRINT "HOW MANY BUSHELS DO YOU WISH TO FEED YOUR PEOPLE";
    0x5b70b6f0e5f0 ---------A   00411  INPUT Q
    0x5b70b6f0e870 ---------A   00412  IF Q<0 THEN 850
    0x5b70b6f0e910 ---------A   00418  REM *** TRYING TO USE MORE GRAIN THAN IS IN SILOS?
    0x5b70b6f0eba0 ---------A   00420  IF Q<=S THEN 430
    0x5b70b6f0ec20 ---------A   00421  GOSUB 710
    0x5b70b6f0ec90 ---------A   00422  GOTO 410
    0x5b70b6f0efc0 ---------- T 00430  S=S-Q
    0x5b70b6f0f1b0 ---------- T      a C=1
    0x5b70b6f0f250 ---------A T      b PRINT
    0x5b70b6f0f400 ---------A T 00440  PRINT "HOW MANY ACRES DO YOU WISH TO PLANT WITH SEED";
    0x5b70b6f0f540 ----------   00441  INPUT D
    0x5b70b6f0f7a0 ---------A        a IF D=0 THEN 511
    0x5b70b6f0fa20 ---------A   00442  IF D<0 THEN 850
    0x5b70b6f0fac0 ---------A   00444  REM *** TRYING TO PLANT MORE ACRES THAN YOU OWN?
    0x5b70b6f0fd50 ---------A   00445  IF D<=A THEN 450
    0x5b70b6f0fdd0 ---------A   00446  GOSUB 720
    0x5b70b6f0fe50 ---------A   00447  GOTO 440
    0x5b70b6f0fed0 ---------A   00449  REM *** ENOUGH GRAIN FOR SEED?
    0x5b70b6f10350 ---------A T 00450  IF INT(D/2)<=S THEN 455
    0x5b70b6f103d0 ---------A   00452  GOSUB 710
    0x5b70b6f10460 ---------A   00453  GOTO 440
    0x5b70b6f104f0 ---------A   00454  REM *** ENOUGH PEOPLE TO TEND THE CROPS?
    0x5b70b6f108b0 ---------A T 00455  IF D<10*P THEN 510
    0x5b70b6f10c20 ---------A   00460  PRINT "BUT YOU HAVE ONLY";P;"PEOPLE TO TEND THE FIELDS!  NOW THEN,"
    0x5b70b6f10ca0 ---------A   00470  GOTO 440
    0x5b70b6f111d0 ---------A T 00510  S=S-INT(D/2)
    0x5b70b6f11250 ---------A T 00511  GOSUB 800
    0x5b70b6f112d0 ---------A   00512  REM *** A BOUNTIFUL HARVEST!
    0x5b70b6f11500 ----------   00515  Y=C
    0x5b70b6f11830 ----------        a H=D*Y
    0x5b70b6f11a40 ---------A        b E=0
    0x5b70b6f11ed0 ---------A   00521  GOSUB 800
    0x5b70b6f12430 ---------A   00522  IF INT(C/2)<>C/2 THEN 530
    0x5b70b6f124c0 ---------A   00523  REM *** RATS ARE RUNNING WILD!!
    0x5b70b6f12910 ---------A   00525  E=INT(S/C)
    0x5b70b6f12d80 ---------A T 00530  S=S-E+H
    0x5b70b6f12e00 ---------A   00531  GOSUB 800
    0x5b70b6f12e80 ---------A   00532  REM *** LET'S HAVE SOME BABIES
    0x5b70b6f13880 ---------A   00533  I=INT(C*(20*A+S)/P/100+1)
    0x5b70b6f13910 ---------A   00539  REM *** HOW MANY PEOPLE HAD FULL TUMMIES?
    0x5b70b6f13d60 ---------A   00540  C=INT(Q/20)
    0x5b70b6f13de0 ---------A   00541  REM *** HORROS, A 15% CHANCE OF PLAGUE
    0x5b70b6f14520 ---------A   00542  Q=INT(10*(2*RND(1)-.3))
    0x5b70b6f147b0 ---------A   00550  IF P<C THEN 210
    0x5b70b6f14840 ---------A   00551  REM *** STARVE ENOUGH FOR IMPEACHMENT?
    0x5b70b6f14ba0 ----------   00552  D=P-C
    0x5b70b6f14f20 ---------A        a IF D>.45*P THEN 560
    0x5b70b6f15870 ---------A   00553  P1=((Z-1)*P1+D*100/P)/Z
    0x5b70b6f15a80 ----------   00555  P=C
    0x5b70b6f15db0 ----------        a D1=D1+D
    0x5b70b6f15e50 ---------A        b GOTO 215
    0x5b70b6f15ea0 ---------- T 00560  PRINT
    0x5b70b6f16230 ---------A T      a PRINT "YOU STARVED";D;"PEOPLE IN ONE YEAR!!!"
    0x5b70b6f163e0 ---------A T 00565  PRINT "DUE TO THIS EXTREME MISMANAGEMENT YOU HAVE NOT ONLY"
    0x5b70b6f16590 ---------A   00566  PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE BUT YOU HAVE"
    0x5b70b6f166e0 ----------   00567  PRINT "ALSO BEEN DECLARED NATIONAL FINK!!!!"
    0x5b70b6f16780 ---------A        a GOTO 990
    0x5b70b6f16910 ---------B G 00710  PRINT "HAMURABI:  THINK AGAIN.  YOU HAVE ONLY"
    0x5b70b6f16b80 ---------B   00711  PRINT S;"BUSHELS OF GRAIN.  NOW THEN,"
    0x5b70b6f16be0 ---------B   00712  RETURN
    0x5b70b6f16f80 ---------C G 00720  PRINT "HAMURABI:  THINK AGAIN.  YOU OWN ONLY";A;"ACRES.  NOW THEN,"
    0x5b70b6f16fe0 ---------C   00730  RETURN
    0x5b70b6f175c0 ---------D G 00800  C=INT(RND(1)*5)+1
    0x5b70b6f17610 ---------D   00801  RETURN
    0x5b70b6f176a0 ---------- T 00850  PRINT
    0x5b70b6f17830 ---------A T      a PRINT "HAMURABI:  I CANNOT DO WHAT YOU WISH."
    0x5b70b6f179a0 ---------A   00855  PRINT "GET YOURSELF ANOTHER STEWARD!!!!!"
    0x5b70b6f17a50 ---------A   00857  GOTO 990
    0x5b70b6f17de0 ---------A T 00860  PRINT "IN YOUR 10-YEAR TERM OF OFFICE,";P1;"PERCENT OF THE"
    0x5b70b6f17f80 ---------A   00862  PRINT "POPULATION STARVED PER YEAR ON THE AVERAGE, I.E. A TOTAL OF"
    0x5b70b6f181c0 ----------   00865  PRINT D1;"PEOPLE DIED!!"
    0x5b70b6f18610 ---------A        a L=A/P
    0x5b70b6f18790 ---------A   00870  PRINT "YOU STARTED WITH 10 ACRES PER PERSON AND ENDED WITH"
    0x5b70b6f189d0 ----------   00875  PRINT L;"ACRES PER PERSON."
    0x5b70b6f18a50 ---------A        a PRINT
    0x5b70b6f18cb0 ---------A   00880  IF P1>33 THEN 565
    0x5b70b6f18f10 ---------A   00885  IF L<7 THEN 565
    0x5b70b6f19170 ---------A   00890  IF P1>10 THEN 940
    0x5b70b6f193d0 ---------A   00892  IF L<9 THEN 940
    0x5b70b6f19630 ---------A   00895  IF P1>3 THEN 960
    0x5b70b6f198c0 ---------A   00896  IF L<10 THEN 960
    0x5b70b6f19a80 ---------A   00900  PRINT "A FANTASTIC PERFORMANCE!!!  CHARLEMANGE, DISRAELI, AND"
    0x5b70b6f19be0 ----------   00905  PRINT "JEFFERSON COMBINED COULD NOT HAVE DONE BETTER!"
    0x5b70b6f19c90 ---------A        a GOTO 990
    0x5b70b6f19e40 ---------A T 00940  PRINT "YOUR HEAVY-HANDED PERFORMANCE SMACKS OF NERO AND IVAN IV."
    0x5b70b6f19ff0 ---------A   00945  PRINT "THE PEOPLE (REMIANING) FIND YOU AN UNPLEASANT RULER, AND,"
    0x5b70b6f1a140 ----------   00950  PRINT "FRANKLY, HATE YOUR GUTS!!"
    0x5b70b6f1a1f0 ---------A        a GOTO 990
    0x5b70b6f1a390 ---------A T 00960  PRINT "YOUR PERFORMANCE COULD HAVE BEEN SOMEWHAT BETTER, BUT"
    0x5b70b6f1ab00 ---------A   00965  PRINT "REALLY WASN'T TOO BAD AT ALL. ";INT(P*.8*RND(1));"PEOPLE"
    0x5b70b6f1aca0 ---------A   00970  PRINT "WOULD DEARLY LIKE TO SEE YOU ASSASSINATED BUT WE ALL HAVE OUR"
    0x5b70b6f1ae20 ---------A   00975  PRINT "TRIVIAL PROBLEMS."
    0x5b70b6f1ae80 ---------- T 00990  PRINT
    0x5b70b6f1b200 ---------- T      a FOR N=1 TO 10
    0x5b70b6f1b420 ---------- T      b PRINT CHR$(7);
    0x5b70b6f1b560 ---------A T      c NEXT N
    0x5b70b6f1b6c0 ----------   00995  PRINT "SO LONG FOR NOW."
    0x5b70b6f1b740 ---------A        a PRINT
    0x5b70b6f1b7a0 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/hamurabi.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b70b6efe6d0 ---------A   01000  PRINT TAB(32);"HAMURABI"
    0x5b70b6efe670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b70b6eef2b0 ----------   01020  PRINT
    0x5b70b6efe9e0 ----------   01030  PRINT
    0x5b70b6f00aa0 ---------A   01040  PRINT
    0x5b70b6eff080 ---------A   01050  PRINT "TRY YOUR HAND AT GOVERNING ANCIENT SUMERIA"
    0x5b70b6efee80 ----------   01060  PRINT "FOR A TEN-YEAR TERM OF OFFICE."
    0x5b70b6eff480 ---------A   01070  PRINT
    0x5b70b6f00f30 ----------   01080  D1=0
    0x5b70b6f00e70 ---------A   01090  P1=0
    0x5b70b6f00ff0 ----------   01100  Z=0
    0x5b70b6f010b0 ----------   01110  P=95
    0x5b70b6f06ca0 ----------   01120  S=2800
    0x5b70b6f06f10 ----------   01130  H=3000
    0x5b70b6f07280 ---------A   01140  E=H-S
    0x5b70b6f074f0 ----------   01150  Y=3
    0x5b70b6f078e0 ----------   01160  A=H/Y
    0x5b70b6f07b90 ----------   01170  I=5
    0x5b70b6f07e60 ---------A   01180  Q=1
    0x5b70b6f08160 ---------A   01190  D=0
    0x5b70b6f081b0 ----------   01200  PRINT
    0x5b70b6f08210 ----------   01210  PRINT
    0x5b70b6f08330 ----------   01220  PRINT "HAMURABI:  I BEG TO REPORT TO YOU,"
    0x5b70b6f08650 ---------A   01230  Z=Z+1
    0x5b70b6f08da0 ---------A   01240  PRINT "IN YEAR";Z;",";D;"PEOPLE STARVED,";I;"CAME TO THE CITY,"
    0x5b70b6f09100 ---------A   01250  P=P+I
    0x5b70b6f09350 ---------A   01260  IF Q>0 THEN 1290
    0x5b70b6f097a0 ---------A   01270  P=INT(P/2)
    0x5b70b6f098f0 ---------A   01280  PRINT "A HORRIBLE PLAGUE STRUCK!  HALF THE PEOPLE DIED."
    0x5b70b6f09b70 ---------A   01290  PRINT "POPULATION IS NOW";P
    0x5b70b6f09ef0 ---------A   01300  PRINT "THE CITY NOW OWNS ";A;"ACRES."
    0x5b70b6f0a230 ---------A   01310  PRINT "YOU HARVESTED";Y;"BUSHELS PER ACRE."
    0x5b70b6f0a5b0 ---------A   01320  PRINT "THE RATS ATE";E;"BUSHELS."
    0x5b70b6f0a8f0 ----------   01330  PRINT "YOU NOW HAVE ";S;"BUSHELS IN STORE."
    0x5b70b6f0a970 ---------A   01340  PRINT
    0x5b70b6f0abb0 ---------A   01350  IF Z=11 THEN 2290
    0x5b70b6f0b130 ----------   01360  C=INT(10*RND(1))
    0x5b70b6f0b480 ---------A   01370  Y=C+17
    0x5b70b6f0b7f0 ---------A   01380  PRINT "LAND IS TRADING AT";Y;"BUSHELS PER ACRE."
    0x5b70b6f0b960 ---------A   01390  PRINT "HOW MANY ACRES DO YOU WISH TO BUY";
    0x5b70b6f0baa0 ----------   01400  INPUT Q
    0x5b70b6f0bd00 ---------A   01410  IF Q<0 THEN 2260
    0x5b70b6f0c0a0 ---------A   01420  IF Y*Q<=S THEN 1450
    0x5b70b6f0c120 ---------A   01430  GOSUB 2180
    0x5b70b6f0c190 ---------A   01440  GOTO 1390
    0x5b70b6f0c3e0 ---------A   01450  IF Q=0 THEN 1500
    0x5b70b6f0c720 ----------   01460  A=A+Q
    0x5b70b6f0cb70 ----------   01470  S=S-Y*Q
    0x5b70b6f0cd80 ---------A   01480  C=0
    0x5b70b6f0ce10 ---------A   01490  GOTO 1590
    0x5b70b6f0cfa0 ---------A   01500  PRINT "HOW MANY ACRES DO YOU WISH TO SELL";
    0x5b70b6f0d0e0 ----------   01510  INPUT Q
    0x5b70b6f0d340 ---------A   01520  IF Q<0 THEN 2260
    0x5b70b6f0d7d0 ---------A   01530  IF Q<A THEN 1580
    0x5b70b6f0d850 ---------A   01540  GOSUB 2210
    0x5b70b6f0d8c0 ---------A   01550  GOTO 1500
    0x5b70b6f0dbf0 ----------   01560  A=A-Q
    0x5b70b6f0e040 ----------   01570  S=S+Y*Q
    0x5b70b6f0e250 ---------A   01580  C=0
    0x5b70b6f0e2f0 ---------A   01590  PRINT
    0x5b70b6f0e490 ---------A   01600  PRINT "HOW MANY BUSHELS DO YOU WISH TO FEED YOUR PEOPLE";
    0x5b70b6f0e5f0 ---------A   01610  INPUT Q
    0x5b70b6f0e870 ---------A   01620  IF Q<0 THEN 2260
    0x5b70b6f0e910 ---------A   01630  REM *** TRYING TO USE MORE GRAIN THAN IS IN SILOS?
    0x5b70b6f0eba0 ---------A   01640  IF Q<=S THEN 1690
    0x5b70b6f0ec20 ---------A   01650  GOSUB 2180
    0x5b70b6f0ec90 ---------A   01660  GOTO 1600
    0x5b70b6f0efc0 ----------   01670  S=S-Q
    0x5b70b6f0f1b0 ----------   01680  C=1
    0x5b70b6f0f250 ---------A   01690  PRINT
    0x5b70b6f0f400 ---------A   01700  PRINT "HOW MANY ACRES DO YOU WISH TO PLANT WITH SEED";
    0x5b70b6f0f540 ----------   01710  INPUT D
    0x5b70b6f0f7a0 ---------A   01720  IF D=0 THEN 1870
    0x5b70b6f0fa20 ---------A   01730  IF D<0 THEN 2260
    0x5b70b6f0fac0 ---------A   01740  REM *** TRYING TO PLANT MORE ACRES THAN YOU OWN?
    0x5b70b6f0fd50 ---------A   01750  IF D<=A THEN 1790
    0x5b70b6f0fdd0 ---------A   01760  GOSUB 2210
    0x5b70b6f0fe50 ---------A   01770  GOTO 1700
    0x5b70b6f0fed0 ---------A   01780  REM *** ENOUGH GRAIN FOR SEED?
    0x5b70b6f10350 ---------A   01790  IF INT(D/2)<=S THEN 1830
    0x5b70b6f103d0 ---------A   01800  GOSUB 2180
    0x5b70b6f10460 ---------A   01810  GOTO 1700
    0x5b70b6f104f0 ---------A   01820  REM *** ENOUGH PEOPLE TO TEND THE CROPS?
    0x5b70b6f108b0 ---------A   01830  IF D<10*P THEN 1860
    0x5b70b6f10c20 ---------A   01840  PRINT "BUT YOU HAVE ONLY";P;"PEOPLE TO TEND THE FIELDS!  NOW THEN,"
    0x5b70b6f10ca0 ---------A   01850  GOTO 1700
    0x5b70b6f111d0 ---------A   01860  S=S-INT(D/2)
    0x5b70b6f11250 ---------A   01870  GOSUB 2230
    0x5b70b6f112d0 ---------A   01880  REM *** A BOUNTIFUL HARVEST!
    0x5b70b6f11500 ----------   01890  Y=C
    0x5b70b6f11830 ----------   01900  H=D*Y
    0x5b70b6f11a40 ---------A   01910  E=0
    0x5b70b6f11ed0 ---------A   01920  GOSUB 2230
    0x5b70b6f12430 ---------A   01930  IF INT(C/2)<>C/2 THEN 1960
    0x5b70b6f124c0 ---------A   01940  REM *** RATS ARE RUNNING WILD!!
    0x5b70b6f12910 ---------A   01950  E=INT(S/C)
    0x5b70b6f12d80 ---------A   01960  S=S-E+H
    0x5b70b6f12e00 ---------A   01970  GOSUB 2230
    0x5b70b6f12e80 ---------A   01980  REM *** LET'S HAVE SOME BABIES
    0x5b70b6f13880 ---------A   01990  I=INT(C*(20*A+S)/P/100+1)
    0x5b70b6f13910 ---------A   02000  REM *** HOW MANY PEOPLE HAD FULL TUMMIES?
    0x5b70b6f13d60 ---------A   02010  C=INT(Q/20)
    0x5b70b6f13de0 ---------A   02020  REM *** HORROS, A 15% CHANCE OF PLAGUE
    0x5b70b6f14520 ---------A   02030  Q=INT(10*(2*RND(1)-.3))
    0x5b70b6f147b0 ---------A   02040  IF P<C THEN 1190
    0x5b70b6f14840 ---------A   02050  REM *** STARVE ENOUGH FOR IMPEACHMENT?
    0x5b70b6f14ba0 ----------   02060  D=P-C
    0x5b70b6f14f20 ---------A   02070  IF D>.45*P THEN 2130
    0x5b70b6f15870 ---------A   02080  P1=((Z-1)*P1+D*100/P)/Z
    0x5b70b6f15a80 ----------   02090  P=C
    0x5b70b6f15db0 ----------   02100  D1=D1+D
    0x5b70b6f15e50 ---------A   02110  GOTO 1230
    0x5b70b6f15ea0 ----------   02120  PRINT
    0x5b70b6f16230 ---------A   02130  PRINT "YOU STARVED";D;"PEOPLE IN ONE YEAR!!!"
    0x5b70b6f163e0 ---------A   02140  PRINT "DUE TO THIS EXTREME MISMANAGEMENT YOU HAVE NOT ONLY"
    0x5b70b6f16590 ---------A   02150  PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE BUT YOU HAVE"
    0x5b70b6f166e0 ----------   02160  PRINT "ALSO BEEN DECLARED NATIONAL FINK!!!!"
    0x5b70b6f16780 ---------A   02170  GOTO 2560
    0x5b70b6f16910 ---------B   02180  PRINT "HAMURABI:  THINK AGAIN.  YOU HAVE ONLY"
    0x5b70b6f16b80 ---------B   02190  PRINT S;"BUSHELS OF GRAIN.  NOW THEN,"
    0x5b70b6f16be0 ---------B   02200  RETURN
    0x5b70b6f16f80 ---------C   02210  PRINT "HAMURABI:  THINK AGAIN.  YOU OWN ONLY";A;"ACRES.  NOW THEN,"
    0x5b70b6f16fe0 ---------C   02220  RETURN
    0x5b70b6f175c0 ---------D   02230  C=INT(RND(1)*5)+1
    0x5b70b6f17610 ---------D   02240  RETURN
    0x5b70b6f176a0 ----------   02250  PRINT
    0x5b70b6f17830 ---------A   02260  PRINT "HAMURABI:  I CANNOT DO WHAT YOU WISH."
    0x5b70b6f179a0 ---------A   02270  PRINT "GET YOURSELF ANOTHER STEWARD!!!!!"
    0x5b70b6f17a50 ---------A   02280  GOTO 2560
    0x5b70b6f17de0 ---------A   02290  PRINT "IN YOUR 10-YEAR TERM OF OFFICE,";P1;"PERCENT OF THE"
    0x5b70b6f17f80 ---------A   02300  PRINT "POPULATION STARVED PER YEAR ON THE AVERAGE, I.E. A TOTAL OF"
    0x5b70b6f181c0 ----------   02310  PRINT D1;"PEOPLE DIED!!"
    0x5b70b6f18610 ---------A   02320  L=A/P
    0x5b70b6f18790 ---------A   02330  PRINT "YOU STARTED WITH 10 ACRES PER PERSON AND ENDED WITH"
    0x5b70b6f189d0 ----------   02340  PRINT L;"ACRES PER PERSON."
    0x5b70b6f18a50 ---------A   02350  PRINT
    0x5b70b6f18cb0 ---------A   02360  IF P1>33 THEN 2140
    0x5b70b6f18f10 ---------A   02370  IF L<7 THEN 2140
    0x5b70b6f19170 ---------A   02380  IF P1>10 THEN 2450
    0x5b70b6f193d0 ---------A   02390  IF L<9 THEN 2450
    0x5b70b6f19630 ---------A   02400  IF P1>3 THEN 2490
    0x5b70b6f198c0 ---------A   02410  IF L<10 THEN 2490
    0x5b70b6f19a80 ---------A   02420  PRINT "A FANTASTIC PERFORMANCE!!!  CHARLEMANGE, DISRAELI, AND"
    0x5b70b6f19be0 ----------   02430  PRINT "JEFFERSON COMBINED COULD NOT HAVE DONE BETTER!"
    0x5b70b6f19c90 ---------A   02440  GOTO 2560
    0x5b70b6f19e40 ---------A   02450  PRINT "YOUR HEAVY-HANDED PERFORMANCE SMACKS OF NERO AND IVAN IV."
    0x5b70b6f19ff0 ---------A   02460  PRINT "THE PEOPLE (REMIANING) FIND YOU AN UNPLEASANT RULER, AND,"
    0x5b70b6f1a140 ----------   02470  PRINT "FRANKLY, HATE YOUR GUTS!!"
    0x5b70b6f1a1f0 ---------A   02480  GOTO 2560
    0x5b70b6f1a390 ---------A   02490  PRINT "YOUR PERFORMANCE COULD HAVE BEEN SOMEWHAT BETTER, BUT"
    0x5b70b6f1ab00 ---------A   02500  PRINT "REALLY WASN'T TOO BAD AT ALL. ";INT(P*.8*RND(1));"PEOPLE"
    0x5b70b6f1aca0 ---------A   02510  PRINT "WOULD DEARLY LIKE TO SEE YOU ASSASSINATED BUT WE ALL HAVE OUR"
    0x5b70b6f1ae20 ---------A   02520  PRINT "TRIVIAL PROBLEMS."
    0x5b70b6f1ae80 ----------   02530  PRINT
    0x5b70b6f1b200 ----------   02540  FOR N=1 TO 10
    0x5b70b6f1b420 ----------   02550  PRINT CHR$(7);
    0x5b70b6f1b560 ---------A   02560  NEXT N
    0x5b70b6f1b6c0 ----------   02570  PRINT "SO LONG FOR NOW."
    0x5b70b6f1b740 ---------A   02580  PRINT
    0x5b70b6f1b7a0 ---------A   02590  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02570 - 10000    7440 

 */



/*
 *  Symbol Table Listing for 'basic/hamurabi.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    D1                       Integer     
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    L                        Integer     
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
    N                        Integer     
    OCT$            Function String          args=1, float  
    P                        Integer     
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
    S                        Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    Y                        Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/hamurabi.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b70b6efe6d0 ---------A   01000  PRINT TAB(32);"HAMURABI"
    0x5b70b6efe670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b70b6eef2b0 ---------A   01020  PRINT
    0x5b70b6efe9e0 ---------A   01030  PRINT
    0x5b70b6f00aa0 ---------A   01040  PRINT
    0x5b70b6eff080 ---------A   01050  PRINT "TRY YOUR HAND AT GOVERNING ANCIENT SUMERIA"
    0x5b70b6efee80 ---------A   01060  PRINT "FOR A TEN-YEAR TERM OF OFFICE."
    0x5b70b6eff480 ---------A   01070  PRINT
    0x5b70b6f00f30 ---------A   01080  D1=0
    0x5b70b6f00e70 ---------A   01090  P1=0
    0x5b70b6f00ff0 ---------A   01100  Z=0
    0x5b70b6f010b0 ---------A   01110  P=95
    0x5b70b6f06ca0 ---------A   01120  S=2800
    0x5b70b6f06f10 ---------A   01130  H=3000
    0x5b70b6f07280 ---------A   01140  E=H-S
    0x5b70b6f074f0 ---------A   01150  Y=3
    0x5b70b6f078e0 ---------A   01160  A=H/Y
    0x5b70b6f07b90 ---------A   01170  I=5
    0x5b70b6f07e60 ---------A   01180  Q=1
    0x5b70b6f08160 ---------A T 01190  D=0
    0x5b70b6f081b0 ---------A   01200  PRINT
    0x5b70b6f08210 ---------A   01210  PRINT
    0x5b70b6f08330 ---------A   01220  PRINT "HAMURABI:  I BEG TO REPORT TO YOU,"
    0x5b70b6f08650 ---------A T 01230  Z=Z+1
    0x5b70b6f08da0 ---------A   01240  PRINT "IN YEAR";Z;",";D;"PEOPLE STARVED,";I;"CAME TO THE CITY,"
    0x5b70b6f09100 ---------A   01250  P=P+I
    0x5b70b6f09350 ---------A   01260  IF Q>0 THEN 1290
    0x5b70b6f097a0 ---------A   01270  P=INT(P/2)
    0x5b70b6f098f0 ---------A   01280  PRINT "A HORRIBLE PLAGUE STRUCK!  HALF THE PEOPLE DIED."
    0x5b70b6f09b70 ---------A T 01290  PRINT "POPULATION IS NOW";P
    0x5b70b6f09ef0 ---------A   01300  PRINT "THE CITY NOW OWNS ";A;"ACRES."
    0x5b70b6f0a230 ---------A   01310  PRINT "YOU HARVESTED";Y;"BUSHELS PER ACRE."
    0x5b70b6f0a5b0 ---------A   01320  PRINT "THE RATS ATE";E;"BUSHELS."
    0x5b70b6f0a8f0 ---------A   01330  PRINT "YOU NOW HAVE ";S;"BUSHELS IN STORE."
    0x5b70b6f0a970 ---------A   01340  PRINT
    0x5b70b6f0abb0 ---------A   01350  IF Z=11 THEN 2160
    0x5b70b6f0b130 ---------A   01360  C=INT(10*RND(1))
    0x5b70b6f0b480 ---------A   01370  Y=C+17
    0x5b70b6f0b7f0 ---------A   01380  PRINT "LAND IS TRADING AT";Y;"BUSHELS PER ACRE."
    0x5b70b6f0b960 ---------A T 01390  PRINT "HOW MANY ACRES DO YOU WISH TO BUY";
    0x5b70b6f0baa0 ---------A   01400  INPUT Q
    0x5b70b6f0bd00 ---------A   01410  IF Q<0 THEN 2130
    0x5b70b6f0c0a0 ---------A   01420  IF Y*Q<=S THEN 1450
    0x5b70b6f0c120 ---------A   01430  GOSUB 2470
    0x5b70b6f0c190 ---------A   01440  GOTO 1390
    0x5b70b6f0c3e0 ---------A T 01450  IF Q=0 THEN 1500
    0x5b70b6f0c720 ---------A   01460  A=A+Q
    0x5b70b6f0cb70 ---------A   01470  S=S-Y*Q
    0x5b70b6f0cd80 ---------A   01480  C=0
    0x5b70b6f0ce10 ---------A   01490  GOTO 1570
    0x5b70b6f0cfa0 ---------A T 01500  PRINT "HOW MANY ACRES DO YOU WISH TO SELL";
    0x5b70b6f0d0e0 ---------A   01510  INPUT Q
    0x5b70b6f0d340 ---------A   01520  IF Q<0 THEN 2130
    0x5b70b6f0d7d0 ---------A   01530  IF Q<A THEN 1560
    0x5b70b6f0d850 ---------A   01540  GOSUB 2510
    0x5b70b6f0d8c0 ---------A   01550  GOTO 1500
    0x5b70b6f0e250 ---------A T 01560  C=0
    0x5b70b6f0e2f0 ---------A T 01570  PRINT
    0x5b70b6f0e490 ---------A T 01580  PRINT "HOW MANY BUSHELS DO YOU WISH TO FEED YOUR PEOPLE";
    0x5b70b6f0e5f0 ---------A   01590  INPUT Q
    0x5b70b6f0e870 ---------A   01600  IF Q<0 THEN 2130
    0x5b70b6f0e910 ---------A   01610  REM *** TRYING TO USE MORE GRAIN THAN IS IN SILOS?
    0x5b70b6f0eba0 ---------A   01620  IF Q<=S THEN 1650
    0x5b70b6f0ec20 ---------A   01630  GOSUB 2470
    0x5b70b6f0ec90 ---------A   01640  GOTO 1580
    0x5b70b6f0f250 ---------A T 01650  PRINT
    0x5b70b6f0f400 ---------A T 01660  PRINT "HOW MANY ACRES DO YOU WISH TO PLANT WITH SEED";
    0x5b70b6f0f540 ---------A   01670  INPUT D
    0x5b70b6f0f7a0 ---------A   01680  IF D=0 THEN 1830
    0x5b70b6f0fa20 ---------A   01690  IF D<0 THEN 2130
    0x5b70b6f0fac0 ---------A   01700  REM *** TRYING TO PLANT MORE ACRES THAN YOU OWN?
    0x5b70b6f0fd50 ---------A   01710  IF D<=A THEN 1750
    0x5b70b6f0fdd0 ---------A   01720  GOSUB 2510
    0x5b70b6f0fe50 ---------A   01730  GOTO 1660
    0x5b70b6f0fed0 ---------A   01740  REM *** ENOUGH GRAIN FOR SEED?
    0x5b70b6f10350 ---------A T 01750  IF INT(D/2)<=S THEN 1790
    0x5b70b6f103d0 ---------A   01760  GOSUB 2470
    0x5b70b6f10460 ---------A   01770  GOTO 1660
    0x5b70b6f104f0 ---------A   01780  REM *** ENOUGH PEOPLE TO TEND THE CROPS?
    0x5b70b6f108b0 ---------A T 01790  IF D<10*P THEN 1820
    0x5b70b6f10c20 ---------A   01800  PRINT "BUT YOU HAVE ONLY";P;"PEOPLE TO TEND THE FIELDS!  NOW THEN,"
    0x5b70b6f10ca0 ---------A   01810  GOTO 1660
    0x5b70b6f111d0 ---------A T 01820  S=S-INT(D/2)
    0x5b70b6f11250 ---------A T 01830  GOSUB 2540
    0x5b70b6f112d0 ---------A   01840  REM *** A BOUNTIFUL HARVEST!
    0x5b70b6f11500 ---------A   01850  Y=C
    0x5b70b6f11830 ---------A   01860  H=D*Y
    0x5b70b6f11a40 ---------A   01870  E=0
    0x5b70b6f11ed0 ---------A   01880  GOSUB 2540
    0x5b70b6f12430 ---------A   01890  IF INT(C/2)<>C/2 THEN 1920
    0x5b70b6f124c0 ---------A   01900  REM *** RATS ARE RUNNING WILD!!
    0x5b70b6f12910 ---------A   01910  E=INT(S/C)
    0x5b70b6f12d80 ---------A T 01920  S=S-E+H
    0x5b70b6f12e00 ---------A   01930  GOSUB 2540
    0x5b70b6f12e80 ---------A   01940  REM *** LET'S HAVE SOME BABIES
    0x5b70b6f13880 ---------A   01950  I=INT(C*(20*A+S)/P/100+1)
    0x5b70b6f13910 ---------A   01960  REM *** HOW MANY PEOPLE HAD FULL TUMMIES?
    0x5b70b6f13d60 ---------A   01970  C=INT(Q/20)
    0x5b70b6f13de0 ---------A   01980  REM *** HORROS, A 15% CHANCE OF PLAGUE
    0x5b70b6f14520 ---------A   01990  Q=INT(10*(2*RND(1)-.3))
    0x5b70b6f147b0 ---------A   02000  IF P<C THEN 1190
    0x5b70b6f14840 ---------A   02010  REM *** STARVE ENOUGH FOR IMPEACHMENT?
    0x5b70b6f14ba0 ---------A   02020  D=P-C
    0x5b70b6f14f20 ---------A   02030  IF D>.45*P THEN 2080
    0x5b70b6f15870 ---------A   02040  P1=((Z-1)*P1+D*100/P)/Z
    0x5b70b6f15a80 ---------A   02050  P=C
    0x5b70b6f15db0 ---------A   02060  D1=D1+D
    0x5b70b6f15e50 ---------A   02070  GOTO 1230
    0x5b70b6f16230 ---------A T 02080  PRINT "YOU STARVED";D;"PEOPLE IN ONE YEAR!!!"
    0x5b70b6f163e0 ---------A T 02090  PRINT "DUE TO THIS EXTREME MISMANAGEMENT YOU HAVE NOT ONLY"
    0x5b70b6f16590 ---------A   02100  PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE BUT YOU HAVE"
    0x5b70b6f166e0 ---------A   02110  PRINT "ALSO BEEN DECLARED NATIONAL FINK!!!!"
    0x5b70b6f16780 ---------A   02120  GOTO 2430
    0x5b70b6f17830 ---------A T 02130  PRINT "HAMURABI:  I CANNOT DO WHAT YOU WISH."
    0x5b70b6f179a0 ---------A   02140  PRINT "GET YOURSELF ANOTHER STEWARD!!!!!"
    0x5b70b6f17a50 ---------A   02150  GOTO 2430
    0x5b70b6f17de0 ---------A T 02160  PRINT "IN YOUR 10-YEAR TERM OF OFFICE,";P1;"PERCENT OF THE"
    0x5b70b6f17f80 ---------A   02170  PRINT "POPULATION STARVED PER YEAR ON THE AVERAGE, I.E. A TOTAL OF"
    0x5b70b6f181c0 ---------A   02180  PRINT D1;"PEOPLE DIED!!"
    0x5b70b6f18610 ---------A   02190  L=A/P
    0x5b70b6f18790 ---------A   02200  PRINT "YOU STARTED WITH 10 ACRES PER PERSON AND ENDED WITH"
    0x5b70b6f189d0 ---------A   02210  PRINT L;"ACRES PER PERSON."
    0x5b70b6f18a50 ---------A   02220  PRINT
    0x5b70b6f18cb0 ---------A   02230  IF P1>33 THEN 2090
    0x5b70b6f18f10 ---------A   02240  IF L<7 THEN 2090
    0x5b70b6f19170 ---------A   02250  IF P1>10 THEN 2320
    0x5b70b6f193d0 ---------A   02260  IF L<9 THEN 2320
    0x5b70b6f19630 ---------A   02270  IF P1>3 THEN 2360
    0x5b70b6f198c0 ---------A   02280  IF L<10 THEN 2360
    0x5b70b6f19a80 ---------A   02290  PRINT "A FANTASTIC PERFORMANCE!!!  CHARLEMANGE, DISRAELI, AND"
    0x5b70b6f19be0 ---------A   02300  PRINT "JEFFERSON COMBINED COULD NOT HAVE DONE BETTER!"
    0x5b70b6f19c90 ---------A   02310  GOTO 2430
    0x5b70b6f19e40 ---------A T 02320  PRINT "YOUR HEAVY-HANDED PERFORMANCE SMACKS OF NERO AND IVAN IV."
    0x5b70b6f19ff0 ---------A   02330  PRINT "THE PEOPLE (REMIANING) FIND YOU AN UNPLEASANT RULER, AND,"
    0x5b70b6f1a140 ---------A   02340  PRINT "FRANKLY, HATE YOUR GUTS!!"
    0x5b70b6f1a1f0 ---------A   02350  GOTO 2430
    0x5b70b6f1a390 ---------A T 02360  PRINT "YOUR PERFORMANCE COULD HAVE BEEN SOMEWHAT BETTER, BUT"
    0x5b70b6f1ab00 ---------A   02370  PRINT "REALLY WASN'T TOO BAD AT ALL. ";INT(P*.8*RND(1));"PEOPLE"
    0x5b70b6f1aca0 ---------A   02380  PRINT "WOULD DEARLY LIKE TO SEE YOU ASSASSINATED BUT WE ALL HAVE OUR"
    0x5b70b6f1ae20 ---------A   02390  PRINT "TRIVIAL PROBLEMS."
    0x5b70b6f1ae80 ---------A   02400  PRINT
    0x5b70b6f1b200 ---------A   02410  FOR N=1 TO 10
    0x5b70b6f1b420 ---------A   02420  PRINT CHR$(7);
    0x5b70b6f1b560 ---------A T 02430  NEXT N
    0x5b70b6f1b6c0 ---------A   02440  PRINT "SO LONG FOR NOW."
    0x5b70b6f1b740 ---------A   02450  PRINT
    0x5b70b6f1b7a0 ---------A   02460  END
    0x5b70b6f16910 ---------B G 02470  PRINT "HAMURABI:  THINK AGAIN.  YOU HAVE ONLY"
    0x5b70b6f16b80 ---------B   02480  PRINT S;"BUSHELS OF GRAIN.  NOW THEN,"
    0x5b70b6f25800 ---------B   02490  GOTO 02500
    0x5b70b6f27d80 ---------B T 02500  RETURN
    0x5b70b6f16f80 ---------C G 02510  PRINT "HAMURABI:  THINK AGAIN.  YOU OWN ONLY";A;"ACRES.  NOW THEN,"
    0x5b70b6f257b0 ---------C   02520  GOTO 02530
    0x5b70b6f27de0 ---------C T 02530  RETURN
    0x5b70b6f175c0 ---------D G 02540  C=INT(RND(1)*5)+1
    0x5b70b6f25760 ---------D   02550  GOTO 02560
    0x5b70b6f27e60 ---------D T 02560  RETURN
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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    D1_int;                                    // Basic: D1 
int    E_int;                                     // Basic: E 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
int    P1_int;                                    // Basic: P1 
int    Q_int;                                     // Basic: Q 
int    S_int;                                     // Basic: S 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02470();
void Routine_02510();
void Routine_02540();

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

void Routine_02470(){
    // 02470 PRINT "HAMURABI:  THINK AGAIN.  YOU HAVE ONLY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAMURABI:  THINK AGAIN.  YOU HAVE ONLY");strcat(buf,"\n");fputs(buf,fh); };
    // 02480 PRINT S;"BUSHELS OF GRAIN.  NOW THEN,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,S_int);strcat(buf,"BUSHELS OF GRAIN.  NOW THEN,");strcat(buf,"\n");fputs(buf,fh); };
    // 02490 GOTO 02500
    goto Lbl_02500;

  Lbl_02500:
    // 02500 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02510(){
    // 02510 PRINT "HAMURABI:  THINK AGAIN.  YOU OWN ONLY";A;"ACRES.  NOW THEN,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAMURABI:  THINK AGAIN.  YOU OWN ONLY"); b2c_INT(buf,A_int);strcat(buf,"ACRES.  NOW THEN,");strcat(buf,"\n");fputs(buf,fh); };
    // 02520 GOTO 02530
    goto Lbl_02530;

  Lbl_02530:
    // 02530 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_02540(){
    // 02540 C=INT(RND(1)*5)+1
    C_int = INT(RND(1)*5)+1;
    // 02550 GOTO 02560
    goto Lbl_02560;

  Lbl_02560:
    // 02560 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(32);"HAMURABI"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,32);strcat(buf,"HAMURABI");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "TRY YOUR HAND AT GOVERNING ANCIENT SUMERIA"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY YOUR HAND AT GOVERNING ANCIENT SUMERIA");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "FOR A TEN-YEAR TERM OF OFFICE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOR A TEN-YEAR TERM OF OFFICE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 D1=0
    D1_int = 0;
    // 01090 P1=0
    P1_int = 0;
    // 01100 Z=0
    Z_int = 0;
    // 01110 P=95
    P_int = 95;
    // 01120 S=2800
    S_int = 2800;
    // 01130 H=3000
    H_int = 3000;
    // 01140 E=H-S
    E_int = H_int-S_int;
    // 01150 Y=3
    Y_int = 3;
    // 01160 A=H/Y
    A_int = H_int/Y_int;
    // 01170 I=5
    I_int = 5;
    // 01180 Q=1
    Q_int = 1;

  Lbl_01190:
    // 01190 D=0
    D_int = 0;
    // 01200 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "HAMURABI:  I BEG TO REPORT TO YOU,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAMURABI:  I BEG TO REPORT TO YOU,");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01230:
    // 01230 Z=Z+1
    Z_int = Z_int+1;
    // 01240 PRINT "IN YEAR";Z;",";D;"PEOPLE STARVED,";I;"CAME TO THE CITY,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN YEAR"); b2c_INT(buf,Z_int);strcat(buf,","); b2c_INT(buf,D_int);strcat(buf,"PEOPLE STARVED,"); b2c_INT(buf,I_int);strcat(buf,"CAME TO THE CITY,");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 P=P+I
    P_int = P_int+I_int;
    // 01260 IF Q>0 THEN 1290
    if(Q_int>0)goto Lbl_01290;
    // 01270 P=INT(P/2)
    P_int = INT(P_int/2);
    // 01280 PRINT "A HORRIBLE PLAGUE STRUCK!  HALF THE PEOPLE DIED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A HORRIBLE PLAGUE STRUCK!  HALF THE PEOPLE DIED.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01290:
    // 01290 PRINT "POPULATION IS NOW";P
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"POPULATION IS NOW"); b2c_INT(buf,P_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT "THE CITY NOW OWNS ";A;"ACRES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CITY NOW OWNS "); b2c_INT(buf,A_int);strcat(buf,"ACRES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 PRINT "YOU HARVESTED";Y;"BUSHELS PER ACRE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HARVESTED"); b2c_INT(buf,Y_int);strcat(buf,"BUSHELS PER ACRE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT "THE RATS ATE";E;"BUSHELS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE RATS ATE"); b2c_INT(buf,E_int);strcat(buf,"BUSHELS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT "YOU NOW HAVE ";S;"BUSHELS IN STORE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU NOW HAVE "); b2c_INT(buf,S_int);strcat(buf,"BUSHELS IN STORE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01350 IF Z=11 THEN 2160
    if(Z_int==11)goto Lbl_02160;
    // 01360 C=INT(10*RND(1))
    C_int = INT(10*RND(1));
    // 01370 Y=C+17
    Y_int = C_int+17;
    // 01380 PRINT "LAND IS TRADING AT";Y;"BUSHELS PER ACRE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LAND IS TRADING AT"); b2c_INT(buf,Y_int);strcat(buf,"BUSHELS PER ACRE.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01390:
    // 01390 PRINT "HOW MANY ACRES DO YOU WISH TO BUY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY ACRES DO YOU WISH TO BUY");fputs(buf,fh); };
    // 01400 INPUT Q
    // Start of Basic INPUT statement 01400
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Q_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01400
    // 01410 IF Q<0 THEN 2130
    if(Q_int<0)goto Lbl_02130;
    // 01420 IF Y*Q<=S THEN 1450
    if(Y_int*Q_int<=S_int)goto Lbl_01450;
    // 01430 GOSUB 2470
    Routine_02470();
    // 01440 GOTO 1390
    goto Lbl_01390;

  Lbl_01450:
    // 01450 IF Q=0 THEN 1500
    if(Q_int==0)goto Lbl_01500;
    // 01460 A=A+Q
    A_int = A_int+Q_int;
    // 01470 S=S-Y*Q
    S_int = S_int-Y_int*Q_int;
    // 01480 C=0
    C_int = 0;
    // 01490 GOTO 1570
    goto Lbl_01570;

  Lbl_01500:
    // 01500 PRINT "HOW MANY ACRES DO YOU WISH TO SELL";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY ACRES DO YOU WISH TO SELL");fputs(buf,fh); };
    // 01510 INPUT Q
    // Start of Basic INPUT statement 01510
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Q_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01510
    // 01520 IF Q<0 THEN 2130
    if(Q_int<0)goto Lbl_02130;
    // 01530 IF Q<A THEN 1560
    if(Q_int<A_int)goto Lbl_01560;
    // 01540 GOSUB 2510
    Routine_02510();
    // 01550 GOTO 1500
    goto Lbl_01500;

  Lbl_01560:
    // 01560 C=0
    C_int = 0;

  Lbl_01570:
    // 01570 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01580:
    // 01580 PRINT "HOW MANY BUSHELS DO YOU WISH TO FEED YOUR PEOPLE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY BUSHELS DO YOU WISH TO FEED YOUR PEOPLE");fputs(buf,fh); };
    // 01590 INPUT Q
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
                (err += b2c_strtoi(&Q_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01590
    // 01600 IF Q<0 THEN 2130
    if(Q_int<0)goto Lbl_02130;
    // 01610 REM *** TRYING TO USE MORE GRAIN THAN IS IN SILOS?
    // 01620 IF Q<=S THEN 1650
    if(Q_int<=S_int)goto Lbl_01650;
    // 01630 GOSUB 2470
    Routine_02470();
    // 01640 GOTO 1580
    goto Lbl_01580;

  Lbl_01650:
    // 01650 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01660:
    // 01660 PRINT "HOW MANY ACRES DO YOU WISH TO PLANT WITH SEED";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY ACRES DO YOU WISH TO PLANT WITH SEED");fputs(buf,fh); };
    // 01670 INPUT D
    // Start of Basic INPUT statement 01670
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
    }; // End of Basic INPUT statement 01670
    // 01680 IF D=0 THEN 1830
    if(D_int==0)goto Lbl_01830;
    // 01690 IF D<0 THEN 2130
    if(D_int<0)goto Lbl_02130;
    // 01700 REM *** TRYING TO PLANT MORE ACRES THAN YOU OWN?
    // 01710 IF D<=A THEN 1750
    if(D_int<=A_int)goto Lbl_01750;
    // 01720 GOSUB 2510
    Routine_02510();
    // 01730 GOTO 1660
    goto Lbl_01660;
    // 01740 REM *** ENOUGH GRAIN FOR SEED?

  Lbl_01750:
    // 01750 IF INT(D/2)<=S THEN 1790
    if(INT(D_int/2)<=S_int)goto Lbl_01790;
    // 01760 GOSUB 2470
    Routine_02470();
    // 01770 GOTO 1660
    goto Lbl_01660;
    // 01780 REM *** ENOUGH PEOPLE TO TEND THE CROPS?

  Lbl_01790:
    // 01790 IF D<10*P THEN 1820
    if(D_int<10*P_int)goto Lbl_01820;
    // 01800 PRINT "BUT YOU HAVE ONLY";P;"PEOPLE TO TEND THE FIELDS!  NOW THEN,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BUT YOU HAVE ONLY"); b2c_INT(buf,P_int);strcat(buf,"PEOPLE TO TEND THE FIELDS!  NOW THEN,");strcat(buf,"\n");fputs(buf,fh); };
    // 01810 GOTO 1660
    goto Lbl_01660;

  Lbl_01820:
    // 01820 S=S-INT(D/2)
    S_int = S_int-INT(D_int/2);

  Lbl_01830:
    // 01830 GOSUB 2540
    Routine_02540();
    // 01840 REM *** A BOUNTIFUL HARVEST!
    // 01850 Y=C
    Y_int = C_int;
    // 01860 H=D*Y
    H_int = D_int*Y_int;
    // 01870 E=0
    E_int = 0;
    // 01880 GOSUB 2540
    Routine_02540();
    // 01890 IF INT(C/2)<>C/2 THEN 1920
    if(INT(C_int/2)!=C_int/2)goto Lbl_01920;
    // 01900 REM *** RATS ARE RUNNING WILD!!
    // 01910 E=INT(S/C)
    E_int = INT(S_int/C_int);

  Lbl_01920:
    // 01920 S=S-E+H
    S_int = S_int-E_int+H_int;
    // 01930 GOSUB 2540
    Routine_02540();
    // 01940 REM *** LET'S HAVE SOME BABIES
    // 01950 I=INT(C*(20*A+S)/P/100+1)
    I_int = INT(C_int*(20*A_int+S_int)/P_int/100+1);
    // 01960 REM *** HOW MANY PEOPLE HAD FULL TUMMIES?
    // 01970 C=INT(Q/20)
    C_int = INT(Q_int/20);
    // 01980 REM *** HORROS, A 15% CHANCE OF PLAGUE
    // 01990 Q=INT(10*(2*RND(1)-.3))
    Q_int = INT(10*(2*RND(1)-0.3));
    // 02000 IF P<C THEN 1190
    if(P_int<C_int)goto Lbl_01190;
    // 02010 REM *** STARVE ENOUGH FOR IMPEACHMENT?
    // 02020 D=P-C
    D_int = P_int-C_int;
    // 02030 IF D>.45*P THEN 2080
    if(D_int>0.45*P_int)goto Lbl_02080;
    // 02040 P1=((Z-1)*P1+D*100/P)/Z
    P1_int = ((Z_int-1)*P1_int+D_int*100/P_int)/Z_int;
    // 02050 P=C
    P_int = C_int;
    // 02060 D1=D1+D
    D1_int = D1_int+D_int;
    // 02070 GOTO 1230
    goto Lbl_01230;

  Lbl_02080:
    // 02080 PRINT "YOU STARVED";D;"PEOPLE IN ONE YEAR!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU STARVED"); b2c_INT(buf,D_int);strcat(buf,"PEOPLE IN ONE YEAR!!!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02090:
    // 02090 PRINT "DUE TO THIS EXTREME MISMANAGEMENT YOU HAVE NOT ONLY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DUE TO THIS EXTREME MISMANAGEMENT YOU HAVE NOT ONLY");strcat(buf,"\n");fputs(buf,fh); };
    // 02100 PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE BUT YOU HAVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BEEN IMPEACHED AND THROWN OUT OF OFFICE BUT YOU HAVE");strcat(buf,"\n");fputs(buf,fh); };
    // 02110 PRINT "ALSO BEEN DECLARED NATIONAL FINK!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ALSO BEEN DECLARED NATIONAL FINK!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02120 GOTO 2430
    goto Lbl_02430;

  Lbl_02130:
    // 02130 PRINT "HAMURABI:  I CANNOT DO WHAT YOU WISH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAMURABI:  I CANNOT DO WHAT YOU WISH.");strcat(buf,"\n");fputs(buf,fh); };
    // 02140 PRINT "GET YOURSELF ANOTHER STEWARD!!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GET YOURSELF ANOTHER STEWARD!!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02150 GOTO 2430
    goto Lbl_02430;

  Lbl_02160:
    // 02160 PRINT "IN YOUR 10-YEAR TERM OF OFFICE,";P1;"PERCENT OF THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN YOUR 10-YEAR TERM OF OFFICE,"); b2c_INT(buf,P1_int);strcat(buf,"PERCENT OF THE");strcat(buf,"\n");fputs(buf,fh); };
    // 02170 PRINT "POPULATION STARVED PER YEAR ON THE AVERAGE, I.E. A TOTAL OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"POPULATION STARVED PER YEAR ON THE AVERAGE, I.E. A TOTAL OF");strcat(buf,"\n");fputs(buf,fh); };
    // 02180 PRINT D1;"PEOPLE DIED!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,D1_int);strcat(buf,"PEOPLE DIED!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02190 L=A/P
    L_int = A_int/P_int;
    // 02200 PRINT "YOU STARTED WITH 10 ACRES PER PERSON AND ENDED WITH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU STARTED WITH 10 ACRES PER PERSON AND ENDED WITH");strcat(buf,"\n");fputs(buf,fh); };
    // 02210 PRINT L;"ACRES PER PERSON."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,L_int);strcat(buf,"ACRES PER PERSON.");strcat(buf,"\n");fputs(buf,fh); };
    // 02220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02230 IF P1>33 THEN 2090
    if(P1_int>33)goto Lbl_02090;
    // 02240 IF L<7 THEN 2090
    if(L_int<7)goto Lbl_02090;
    // 02250 IF P1>10 THEN 2320
    if(P1_int>10)goto Lbl_02320;
    // 02260 IF L<9 THEN 2320
    if(L_int<9)goto Lbl_02320;
    // 02270 IF P1>3 THEN 2360
    if(P1_int>3)goto Lbl_02360;
    // 02280 IF L<10 THEN 2360
    if(L_int<10)goto Lbl_02360;
    // 02290 PRINT "A FANTASTIC PERFORMANCE!!!  CHARLEMANGE, DISRAELI, AND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A FANTASTIC PERFORMANCE!!!  CHARLEMANGE, DISRAELI, AND");strcat(buf,"\n");fputs(buf,fh); };
    // 02300 PRINT "JEFFERSON COMBINED COULD NOT HAVE DONE BETTER!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"JEFFERSON COMBINED COULD NOT HAVE DONE BETTER!");strcat(buf,"\n");fputs(buf,fh); };
    // 02310 GOTO 2430
    goto Lbl_02430;

  Lbl_02320:
    // 02320 PRINT "YOUR HEAVY-HANDED PERFORMANCE SMACKS OF NERO AND IVAN IV."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR HEAVY-HANDED PERFORMANCE SMACKS OF NERO AND IVAN IV.");strcat(buf,"\n");fputs(buf,fh); };
    // 02330 PRINT "THE PEOPLE (REMIANING) FIND YOU AN UNPLEASANT RULER, AND,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE PEOPLE (REMIANING) FIND YOU AN UNPLEASANT RULER, AND,");strcat(buf,"\n");fputs(buf,fh); };
    // 02340 PRINT "FRANKLY, HATE YOUR GUTS!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FRANKLY, HATE YOUR GUTS!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02350 GOTO 2430
    goto Lbl_02430;

  Lbl_02360:
    // 02360 PRINT "YOUR PERFORMANCE COULD HAVE BEEN SOMEWHAT BETTER, BUT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR PERFORMANCE COULD HAVE BEEN SOMEWHAT BETTER, BUT");strcat(buf,"\n");fputs(buf,fh); };
    // 02370 PRINT "REALLY WASN'T TOO BAD AT ALL. ";INT(P*.8*RND(1));"PEOPLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"REALLY WASN'T TOO BAD AT ALL. ");b2c_INT(buf,INT(P_int*0.8*RND(1)));strcat(buf,"PEOPLE");strcat(buf,"\n");fputs(buf,fh); };
    // 02380 PRINT "WOULD DEARLY LIKE TO SEE YOU ASSASSINATED BUT WE ALL HAVE OUR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WOULD DEARLY LIKE TO SEE YOU ASSASSINATED BUT WE ALL HAVE OUR");strcat(buf,"\n");fputs(buf,fh); };
    // 02390 PRINT "TRIVIAL PROBLEMS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRIVIAL PROBLEMS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02400 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02410 FOR N=1 TO 10
    for(N_int=1;N_int<=10;N_int++){
        // 02420 PRINT CHR$(7);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(7));fputs(buf,fh); };

  Lbl_02430:
        // 02430 NEXT N
        int dummy_2430=0; // Ignore this line.
    }; // End-For(N_int)
    // 02440 PRINT "SO LONG FOR NOW."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SO LONG FOR NOW.");strcat(buf,"\n");fputs(buf,fh); };
    // 02450 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02460 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
