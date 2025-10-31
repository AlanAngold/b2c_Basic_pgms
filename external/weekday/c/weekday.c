/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/weekday.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c7d94f536d0 ---------A   00010  PRINT TAB(32);"WEEKDAY"
    0x5c7d94f53670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c7d94f55aa0 ---------A   00030  PRINT:PRINT:PRINT
    0x5c7d94f54080 ---------A   00100  PRINT "WEEKDAY IS A COMPUTER DEMONSTRATION THAT"
    0x5c7d94f54480 ---------A   00110  PRINT"GIVES FACTS ABOUT A DATE OF INTEREST TO YOU."
    0x5c7d94f544e0 ---------A   00120  PRINT
    0x5c7d94f556e0 ---------A   00130  PRINT "ENTER TODAY'S DATE IN THE FORM: 3,24,1979  ";
    0x5c7d94f5b8a0 ---------A   00140  INPUT M1,D1,Y1
    0x5c7d94f55e70 ---------A   00150  REM THIS PROGRAM DETERMINES THE DAY OF THE WEEK
    0x5c7d94f54b80 ---------A   00160  REM  FOR A DATE AFTER 1582
    0x5c7d94f55ff0 ---------A   00170  DEF FNA(A)=INT(A/4)
    0x5c7d94f560b0 ---------A   00180  DIM T(12)
    0x5c7d94f5c5b0 ---------A   00190  DEF FNB(A)=INT(A/7)
    0x5c7d94f5c640 ---------A   00200  REM SPACE OUTPUT AND READ IN INITIAL VALUES FOR MONTHS.
    0x5c7d94f5c9f0 ---------A   00210  FOR I= 1 TO 12
    0x5c7d94f5cc30 ---------A   00220  READ T(I)
    0x5c7d94f5cd60 ---------A   00230  NEXT I
    0x5c7d94f5cf40 ---------A   00240  PRINT"ENTER DAY OF BIRTH (OR OTHER DAY OF INTEREST)";
    0x5c7d94f5d4a0 ---------A   00250  INPUT M,D,Y
    0x5c7d94f5d500 ---------A   00260  PRINT
    0x5c7d94f5db40 ---------A   00270  LET I1 = INT((Y-1500)/100)
    0x5c7d94f5dbd0 ---------A   00280  REM TEST FOR DATE BEFORE CURRENT CALENDAR.
    0x5c7d94f5df00 ---------A   00290  IF Y-1582 <0 THEN 1300
    0x5c7d94f5e580 ---------A   00300  LET A = I1*5+(I1+3)/4
    0x5c7d94f5ec50 ---------A   00310  LET I2=INT(A-FNB(A)*7)
    0x5c7d94f5f100 ---------A   00320  LET Y2=INT(Y/100)
    0x5c7d94f5f6d0 ---------A   00330  LET Y3 =INT(Y-Y2*100)
    0x5c7d94f5ff70 ---------A   00340  LET A =Y3/4+Y3+D+T(M)+I2
    0x5c7d94f60740 ---------A   00350  LET B=INT(A-FNB(A)*7)+1
    0x5c7d94f60990 ---------A   00360  IF M > 2 THEN 470
    0x5c7d94f60c00 ---------A   00370  IF Y3 = 0 THEN 440
    0x5c7d94f612e0 ---------A   00380  LET T1=INT(Y-FNA(Y)*4)
    0x5c7d94f61530 ---------A   00390  IF T1 <> 0 THEN 470
    0x5c7d94f619a0 ---------A T 00400  IF B<>0 THEN 420
    0x5c7d94f61bc0 ---------A   00410  LET B=6
    0x5c7d94f61ef0 ---------A T 00420  LET B = B-1
    0x5c7d94f61f60 ---------A   00430  GOTO 470
    0x5c7d94f622a0 ---------A T 00440  LET A = I1-1
    0x5c7d94f628b0 ---------A   00450  LET T1=INT(A-FNA(A)*4)
    0x5c7d94f62b00 ---------A   00460  IF T1 = 0 THEN 400
    0x5c7d94f62d60 ---------A T 00470  IF B <>0 THEN 490
    0x5c7d94f62fa0 ---------A   00480  LET B = 7
    0x5c7d94f63b30 ---------A T 00490  IF (Y1*12+M1)*31+D1<(Y*12+M)*31+D THEN 550
    0x5c7d94f646c0 ---------A   00500  IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 530
    0x5c7d94f64d40 ---------A   00510  PRINT M;"/";D;"/";Y;" WAS A ";
    0x5c7d94f64dd0 ---------A   00520  GOTO 570
    0x5c7d94f65440 ---------A T 00530  PRINT M;"/";D;"/";Y;" IS A ";
    0x5c7d94f654d0 ---------A   00540  GOTO 570
    0x5c7d94f65b60 ---------A T 00550  PRINT M;"/";D;"/";Y;" WILL BE A ";
    0x5c7d94f65c00 ---------A   00560  REM PRINT THE DAY OF THE WEEK THE DATE FALLS ON.
    0x5c7d94f65e70 ---------A T 00570  IF B <>1 THEN 590
    0x5c7d94f65fd0 ---------A   00580  PRINT "SUNDAY."
    0x5c7d94f66230 ---------A T 00590  IF B<>2 THEN 610
    0x5c7d94f66390 ---------A   00600  PRINT "MONDAY."
    0x5c7d94f665f0 ---------A T 00610  IF B<>3 THEN 630
    0x5c7d94f66750 ---------A   00620  PRINT "TUESDAY."
    0x5c7d94f669b0 ---------A T 00630  IF B<>4 THEN 650
    0x5c7d94f66b10 ---------A   00640  PRINT "WEDNESDAY."
    0x5c7d94f66d70 ---------A T 00650  IF B<>5 THEN 670
    0x5c7d94f66ed0 ---------A   00660  PRINT "THURSDAY."
    0x5c7d94f67130 ---------A T 00670  IF B<>6 THEN 690
    0x5c7d94f671b0 ---------A   00680  GOTO 1250
    0x5c7d94f67400 ---------A T 00690  IF B<>7 THEN 710
    0x5c7d94f67580 ---------A   00700  PRINT "SATURDAY."
    0x5c7d94f68100 ---------A T 00710  IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 1120
    0x5c7d94f68930 ---------A   00720  LET I5=Y1-Y
    0x5c7d94f689a0 ---------A   00730  PRINT
    0x5c7d94f68dc0 ---------A   00740  LET I6=M1-M
    0x5c7d94f691d0 ---------A   00750  LET I7=D1-D
    0x5c7d94f69420 ---------A   00760  IF I7>=0 THEN 790
    0x5c7d94f69760 ---------A   00770  LET I6= I6-1
    0x5c7d94f69a90 ---------A   00780  LET I7=I7+30
    0x5c7d94f69ce0 ---------A T 00790  IF I6>=0 THEN 820
    0x5c7d94f6a020 ---------A   00800  LET I5=I5-1
    0x5c7d94f6a350 ---------A   00810  LET I6=I6+12
    0x5c7d94f6a5a0 ---------A T 00820  IF I5<0 THEN 1310
    0x5c7d94f6a800 ---------A   00830  IF I7 <> 0 THEN 850
    0x5c7d94f6aa70 ---------A   00835  IF I6 <> 0 THEN 850
    0x5c7d94f6abf0 ---------A   00840  PRINT"***HAPPY BIRTHDAY***"
    0x5c7d94f6b170 ---------A T 00850  PRINT " "," ","YEARS","MONTHS","DAYS"
    0x5c7d94f6b6f0 ---------A   00855  PRINT " "," ","-----","------","----"
    0x5c7d94f6bb80 ---------A   00860  PRINT "YOUR AGE (IF BIRTHDATE) ",I5,I6,I7
    0x5c7d94f6c640 ---------A   00870  LET A8 = (I5*365)+(I6*30)+I7+INT(I6/2)
    0x5c7d94f6c930 ---------A   00880  LET K5 = I5
    0x5c7d94f6cc20 ---------A   00890  LET K6 = I6
    0x5c7d94f6cf20 ---------A   00900  LET K7 = I7
    0x5c7d94f6cfa0 ---------A   00910  REM CALCULATE RETIREMENT DATE.
    0x5c7d94f6d3e0 ---------A   00920  LET E = Y+65
    0x5c7d94f6d470 ---------A   00930  REM CALCULATE TIME SPENT IN THE FOLLOWING FUNCTIONS.
    0x5c7d94f6d770 ---------A   00940  LET F = .35
    0x5c7d94f6d8e0 ---------A   00950  PRINT "YOU HAVE SLEPT ",
    0x5c7d94f6d960 ---------A   00960  GOSUB 1370
    0x5c7d94f6db80 ---------A   00970  LET F = .17
    0x5c7d94f6dcf0 ---------A   00980  PRINT "YOU HAVE EATEN ",
    0x5c7d94f6dd70 ---------A   00990  GOSUB 1370
    0x5c7d94f6df90 ---------A   01000  LET F = .23
    0x5c7d94f6e1f0 ---------A   01010  IF K5 > 3 THEN 1040
    0x5c7d94f6e370 ---------A   01020  PRINT "YOU HAVE PLAYED",
    0x5c7d94f6e400 ---------A   01030  GOTO 1080
    0x5c7d94f6e660 ---------A T 01040  IF K5 > 9 THEN 1070
    0x5c7d94f6e7f0 ---------A   01050  PRINT "YOU HAVE PLAYED/STUDIED",
    0x5c7d94f6e880 ---------A   01060  GOTO  1080
    0x5c7d94f6ea00 ---------A T 01070  PRINT "YOU HAVE WORKED/PLAYED",
    0x5c7d94f6ea80 ---------A T 01080  GOSUB 1370
    0x5c7d94f6eb00 ---------A   01085  GOTO 1530
    0x5c7d94f6ef50 ---------A T 01090  PRINT "YOU HAVE RELAXED ",K5,K6,K7
    0x5c7d94f6eff0 ---------A   01100  PRINT 
    0x5c7d94f6f4a0 ---------A   01110  PRINT TAB(16);"***  YOU MAY RETIRE IN";E;" ***"
    0x5c7d94f6f520 ---------A T 01120  PRINT
    0x5c7d94f6f5a0 ---------A T 01140  PRINT
    0x5c7d94f6f620 ---------A   01200  PRINT
    0x5c7d94f6f6a0 ---------A   01210  PRINT
    0x5c7d94f6f720 ---------A   01220  PRINT
    0x5c7d94f6f7a0 ---------A   01230  PRINT
    0x5c7d94f6f800 ---------A   01240  END
    0x5c7d94f6fa60 ---------A T 01250  IF D=13 THEN 1280
    0x5c7d94f6fbc0 ---------A   01260  PRINT "FRIDAY."
    0x5c7d94f6fc60 ---------A   01270  GOTO 710
    0x5c7d94f6fdc0 ---------A T 01280  PRINT "FRIDAY THE THIRTEENTH---BEWARE!"
    0x5c7d94f6fe70 ---------A   01290  GOTO 710
    0x5c7d94f6ffe0 ---------A T 01300  PRINT "NOT PREPARED TO GIVE DAY OF WEEK PRIOR TO MDLXXXII. "
    0x5c7d94f70090 ---------A T 01310  GOTO 1140
    0x5c7d94f70130 ---------A   01320  REM TABLE OF VALUES FOR THE MONTHS TO BE USED IN CALCULATIONS.
    0x5c7d94f70c90 ---------A   01330  DATA 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5
    0x5c7d94f70d20 ---------B   01340  REM THIS IS THE CURRENT DATE USED IN THE CALCULATIONS.
    0x5c7d94f70df0 ---------B   01350  REM THIS IS THE DATE TO BE CALCULATED ON.
    0x5c7d94f70ec0 ---------B   01360  REM CALCULATE TIME IN YEARS, MONTHS, AND DAYS
    0x5c7d94f713e0 ---------B G 01370  LET K1=INT(F*A8)
    0x5c7d94f71800 ---------B   01380  LET I5 = INT(K1/365)
    0x5c7d94f724b0 ---------B   01390  LET K1 = K1- (I5*365)
    0x5c7d94f728d0 ---------B   01400  LET I6 = INT(K1/30)
    0x5c7d94f72d60 ---------B   01410  LET I7 = K1 -(I6*30)
    0x5c7d94f730b0 ---------B   01420  LET K5 = K5-I5
    0x5c7d94f73400 ---------B   01430  LET K6 =K6-I6
    0x5c7d94f73750 ---------B   01440  LET K7 = K7-I7
    0x5c7d94f739a0 ---------B   01450  IF K7>=0 THEN 1480
    0x5c7d94f73ce0 ---------B   01460  LET K7=K7+30
    0x5c7d94f74010 ---------B   01470  LET K6=K6-1
    0x5c7d94f74260 ---------B T 01480  IF K6>0 THEN 1510
    0x5c7d94f745a0 ---------B   01490  LET K6=K6+12
    0x5c7d94f748d0 ---------B   01500  LET K5=K5-1
    0x5c7d94f74c20 ---------B T 01510  PRINT I5,I6,I7
    0x5c7d94f74c80 ---------B   01520  RETURN
    0x5c7d94f74ee0 ---------A T 01530  IF K6=12 THEN 1550
    0x5c7d94f74f60 ---------A   01540  GOTO 1090
    0x5c7d94f75290 ---------A T 01550  LET K5=K5+1
    0x5c7d94f754a0 ---------A   01560  LET K6=0
    0x5c7d94f75510 ---------A   01570  GOTO 1090
    0x5c7d94f75580 ---------A   01580  REM
    0x5c7d94f755f0 ---------A   01590  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00400      00460T
     00420      00400T
     00440      00370T
     00470      00360T, 00390T, 00430T
     00490      00470T
     00530      00500T
     00550      00490T
     00570      00520T, 00540T
     00590      00570T
     00610      00590T
     00630      00610T
     00650      00630T
     00670      00650T
     00690      00670T
     00710      00690T, 01270T, 01290T
     00790      00760T
     00820      00790T
     00850      00830T, 00835T
     01040      01010T
     01070      01040T
     01080      01030T, 01060T
     01090      01540T, 01570T
     01120      00710T
     01140      01310T
     01250      00680T
     01280      01250T
     01300      00290T
     01310      00820T
     01370      00960G, 00990G, 01080G
     01480      01450T
     01510      01480T
     01530      01085T
     01550      01530T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5c7d94f536d0 (00010)   0x5c7d94f536d0 (00010)   0x5c7d94f755f0 (01590)   0x5c7d94f755f0 (01590)   
   B) 0x5c7d94f70d20 (01340)   0x5c7d94f713e0 (01370)   0x5c7d94f74c80 (01520)   0x5c7d94f74c80 (01520)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/weekday.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c7d94f536d0 ---------A   00010  PRINT TAB(32);"WEEKDAY"
    0x5c7d94f53670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c7d94f442b0 ----------   00030  PRINT
    0x5c7d94f539e0 ----------        a PRINT
    0x5c7d94f55aa0 ---------A        b PRINT
    0x5c7d94f54080 ---------A   00100  PRINT "WEEKDAY IS A COMPUTER DEMONSTRATION THAT"
    0x5c7d94f54480 ---------A   00110  PRINT"GIVES FACTS ABOUT A DATE OF INTEREST TO YOU."
    0x5c7d94f544e0 ---------A   00120  PRINT
    0x5c7d94f556e0 ---------A   00130  PRINT "ENTER TODAY'S DATE IN THE FORM: 3,24,1979  ";
    0x5c7d94f5b8a0 ---------A   00140  INPUT M1,D1,Y1
    0x5c7d94f55e70 ---------A   00150  REM THIS PROGRAM DETERMINES THE DAY OF THE WEEK
    0x5c7d94f54b80 ---------A   00160  REM  FOR A DATE AFTER 1582
    0x5c7d94f55ff0 ---------A   00170  DEF FNA(A)=INT(A/4)
    0x5c7d94f560b0 ---------A   00180  DIM T(12)
    0x5c7d94f5c5b0 ---------A   00190  DEF FNB(A)=INT(A/7)
    0x5c7d94f5c640 ---------A   00200  REM SPACE OUTPUT AND READ IN INITIAL VALUES FOR MONTHS.
    0x5c7d94f5c9f0 ---------A   00210  FOR I= 1 TO 12
    0x5c7d94f5cc30 ---------A   00220  READ T(I)
    0x5c7d94f5cd60 ---------A   00230  NEXT I
    0x5c7d94f5cf40 ---------A   00240  PRINT"ENTER DAY OF BIRTH (OR OTHER DAY OF INTEREST)";
    0x5c7d94f5d4a0 ---------A   00250  INPUT M,D,Y
    0x5c7d94f5d500 ---------A   00260  PRINT
    0x5c7d94f5db40 ---------A   00270  LET I1 = INT((Y-1500)/100)
    0x5c7d94f5dbd0 ---------A   00280  REM TEST FOR DATE BEFORE CURRENT CALENDAR.
    0x5c7d94f5df00 ---------A   00290  IF Y-1582 <0 THEN 1300
    0x5c7d94f5e580 ---------A   00300  LET A = I1*5+(I1+3)/4
    0x5c7d94f5ec50 ---------A   00310  LET I2=INT(A-FNB(A)*7)
    0x5c7d94f5f100 ---------A   00320  LET Y2=INT(Y/100)
    0x5c7d94f5f6d0 ---------A   00330  LET Y3 =INT(Y-Y2*100)
    0x5c7d94f5ff70 ---------A   00340  LET A =Y3/4+Y3+D+T(M)+I2
    0x5c7d94f60740 ---------A   00350  LET B=INT(A-FNB(A)*7)+1
    0x5c7d94f60990 ---------A   00360  IF M > 2 THEN 470
    0x5c7d94f60c00 ---------A   00370  IF Y3 = 0 THEN 440
    0x5c7d94f612e0 ---------A   00380  LET T1=INT(Y-FNA(Y)*4)
    0x5c7d94f61530 ---------A   00390  IF T1 <> 0 THEN 470
    0x5c7d94f619a0 ---------A T 00400  IF B<>0 THEN 420
    0x5c7d94f61bc0 ---------A   00410  LET B=6
    0x5c7d94f61ef0 ---------A T 00420  LET B = B-1
    0x5c7d94f61f60 ---------A   00430  GOTO 470
    0x5c7d94f622a0 ---------A T 00440  LET A = I1-1
    0x5c7d94f628b0 ---------A   00450  LET T1=INT(A-FNA(A)*4)
    0x5c7d94f62b00 ---------A   00460  IF T1 = 0 THEN 400
    0x5c7d94f62d60 ---------A T 00470  IF B <>0 THEN 490
    0x5c7d94f62fa0 ---------A   00480  LET B = 7
    0x5c7d94f63b30 ---------A T 00490  IF (Y1*12+M1)*31+D1<(Y*12+M)*31+D THEN 550
    0x5c7d94f646c0 ---------A   00500  IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 530
    0x5c7d94f64d40 ---------A   00510  PRINT M;"/";D;"/";Y;" WAS A ";
    0x5c7d94f64dd0 ---------A   00520  GOTO 570
    0x5c7d94f65440 ---------A T 00530  PRINT M;"/";D;"/";Y;" IS A ";
    0x5c7d94f654d0 ---------A   00540  GOTO 570
    0x5c7d94f65b60 ---------A T 00550  PRINT M;"/";D;"/";Y;" WILL BE A ";
    0x5c7d94f65c00 ---------A   00560  REM PRINT THE DAY OF THE WEEK THE DATE FALLS ON.
    0x5c7d94f65e70 ---------A T 00570  IF B <>1 THEN 590
    0x5c7d94f65fd0 ---------A   00580  PRINT "SUNDAY."
    0x5c7d94f66230 ---------A T 00590  IF B<>2 THEN 610
    0x5c7d94f66390 ---------A   00600  PRINT "MONDAY."
    0x5c7d94f665f0 ---------A T 00610  IF B<>3 THEN 630
    0x5c7d94f66750 ---------A   00620  PRINT "TUESDAY."
    0x5c7d94f669b0 ---------A T 00630  IF B<>4 THEN 650
    0x5c7d94f66b10 ---------A   00640  PRINT "WEDNESDAY."
    0x5c7d94f66d70 ---------A T 00650  IF B<>5 THEN 670
    0x5c7d94f66ed0 ---------A   00660  PRINT "THURSDAY."
    0x5c7d94f67130 ---------A T 00670  IF B<>6 THEN 690
    0x5c7d94f671b0 ---------A   00680  GOTO 1250
    0x5c7d94f67400 ---------A T 00690  IF B<>7 THEN 710
    0x5c7d94f67580 ---------A   00700  PRINT "SATURDAY."
    0x5c7d94f68100 ---------A T 00710  IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 1120
    0x5c7d94f68930 ---------A   00720  LET I5=Y1-Y
    0x5c7d94f689a0 ---------A   00730  PRINT
    0x5c7d94f68dc0 ---------A   00740  LET I6=M1-M
    0x5c7d94f691d0 ---------A   00750  LET I7=D1-D
    0x5c7d94f69420 ---------A   00760  IF I7>=0 THEN 790
    0x5c7d94f69760 ---------A   00770  LET I6= I6-1
    0x5c7d94f69a90 ---------A   00780  LET I7=I7+30
    0x5c7d94f69ce0 ---------A T 00790  IF I6>=0 THEN 820
    0x5c7d94f6a020 ---------A   00800  LET I5=I5-1
    0x5c7d94f6a350 ---------A   00810  LET I6=I6+12
    0x5c7d94f6a5a0 ---------A T 00820  IF I5<0 THEN 1310
    0x5c7d94f6a800 ---------A   00830  IF I7 <> 0 THEN 850
    0x5c7d94f6aa70 ---------A   00835  IF I6 <> 0 THEN 850
    0x5c7d94f6abf0 ---------A   00840  PRINT"***HAPPY BIRTHDAY***"
    0x5c7d94f6b170 ---------A T 00850  PRINT " "," ","YEARS","MONTHS","DAYS"
    0x5c7d94f6b6f0 ---------A   00855  PRINT " "," ","-----","------","----"
    0x5c7d94f6bb80 ---------A   00860  PRINT "YOUR AGE (IF BIRTHDATE) ",I5,I6,I7
    0x5c7d94f6c640 ---------A   00870  LET A8 = (I5*365)+(I6*30)+I7+INT(I6/2)
    0x5c7d94f6c930 ---------A   00880  LET K5 = I5
    0x5c7d94f6cc20 ---------A   00890  LET K6 = I6
    0x5c7d94f6cf20 ---------A   00900  LET K7 = I7
    0x5c7d94f6cfa0 ---------A   00910  REM CALCULATE RETIREMENT DATE.
    0x5c7d94f6d3e0 ---------A   00920  LET E = Y+65
    0x5c7d94f6d470 ---------A   00930  REM CALCULATE TIME SPENT IN THE FOLLOWING FUNCTIONS.
    0x5c7d94f6d770 ---------A   00940  LET F = .35
    0x5c7d94f6d8e0 ---------A   00950  PRINT "YOU HAVE SLEPT ",
    0x5c7d94f6d960 ---------A   00960  GOSUB 1370
    0x5c7d94f6db80 ---------A   00970  LET F = .17
    0x5c7d94f6dcf0 ---------A   00980  PRINT "YOU HAVE EATEN ",
    0x5c7d94f6dd70 ---------A   00990  GOSUB 1370
    0x5c7d94f6df90 ---------A   01000  LET F = .23
    0x5c7d94f6e1f0 ---------A   01010  IF K5 > 3 THEN 1040
    0x5c7d94f6e370 ---------A   01020  PRINT "YOU HAVE PLAYED",
    0x5c7d94f6e400 ---------A   01030  GOTO 1080
    0x5c7d94f6e660 ---------A T 01040  IF K5 > 9 THEN 1070
    0x5c7d94f6e7f0 ---------A   01050  PRINT "YOU HAVE PLAYED/STUDIED",
    0x5c7d94f6e880 ---------A   01060  GOTO  1080
    0x5c7d94f6ea00 ---------A T 01070  PRINT "YOU HAVE WORKED/PLAYED",
    0x5c7d94f6ea80 ---------A T 01080  GOSUB 1370
    0x5c7d94f6eb00 ---------A   01085  GOTO 1530
    0x5c7d94f6ef50 ---------A T 01090  PRINT "YOU HAVE RELAXED ",K5,K6,K7
    0x5c7d94f6eff0 ---------A   01100  PRINT 
    0x5c7d94f6f4a0 ---------A   01110  PRINT TAB(16);"***  YOU MAY RETIRE IN";E;" ***"
    0x5c7d94f6f520 ---------A T 01120  PRINT
    0x5c7d94f6f5a0 ---------A T 01140  PRINT
    0x5c7d94f6f620 ---------A   01200  PRINT
    0x5c7d94f6f6a0 ---------A   01210  PRINT
    0x5c7d94f6f720 ---------A   01220  PRINT
    0x5c7d94f6f7a0 ---------A   01230  PRINT
    0x5c7d94f6f800 ---------A   01240  END
    0x5c7d94f6fa60 ---------A T 01250  IF D=13 THEN 1280
    0x5c7d94f6fbc0 ---------A   01260  PRINT "FRIDAY."
    0x5c7d94f6fc60 ---------A   01270  GOTO 710
    0x5c7d94f6fdc0 ---------A T 01280  PRINT "FRIDAY THE THIRTEENTH---BEWARE!"
    0x5c7d94f6fe70 ---------A   01290  GOTO 710
    0x5c7d94f6ffe0 ---------A T 01300  PRINT "NOT PREPARED TO GIVE DAY OF WEEK PRIOR TO MDLXXXII. "
    0x5c7d94f70090 ---------A T 01310  GOTO 1140
    0x5c7d94f70130 ---------A   01320  REM TABLE OF VALUES FOR THE MONTHS TO BE USED IN CALCULATIONS.
    0x5c7d94f70c90 ---------A   01330  DATA 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5
    0x5c7d94f70d20 ---------B   01340  REM THIS IS THE CURRENT DATE USED IN THE CALCULATIONS.
    0x5c7d94f70df0 ---------B   01350  REM THIS IS THE DATE TO BE CALCULATED ON.
    0x5c7d94f70ec0 ---------B   01360  REM CALCULATE TIME IN YEARS, MONTHS, AND DAYS
    0x5c7d94f713e0 ---------B G 01370  LET K1=INT(F*A8)
    0x5c7d94f71800 ---------B   01380  LET I5 = INT(K1/365)
    0x5c7d94f724b0 ---------B   01390  LET K1 = K1- (I5*365)
    0x5c7d94f728d0 ---------B   01400  LET I6 = INT(K1/30)
    0x5c7d94f72d60 ---------B   01410  LET I7 = K1 -(I6*30)
    0x5c7d94f730b0 ---------B   01420  LET K5 = K5-I5
    0x5c7d94f73400 ---------B   01430  LET K6 =K6-I6
    0x5c7d94f73750 ---------B   01440  LET K7 = K7-I7
    0x5c7d94f739a0 ---------B   01450  IF K7>=0 THEN 1480
    0x5c7d94f73ce0 ---------B   01460  LET K7=K7+30
    0x5c7d94f74010 ---------B   01470  LET K6=K6-1
    0x5c7d94f74260 ---------B T 01480  IF K6>0 THEN 1510
    0x5c7d94f745a0 ---------B   01490  LET K6=K6+12
    0x5c7d94f748d0 ---------B   01500  LET K5=K5-1
    0x5c7d94f74c20 ---------B T 01510  PRINT I5,I6,I7
    0x5c7d94f74c80 ---------B   01520  RETURN
    0x5c7d94f74ee0 ---------A T 01530  IF K6=12 THEN 1550
    0x5c7d94f74f60 ---------A   01540  GOTO 1090
    0x5c7d94f75290 ---------A T 01550  LET K5=K5+1
    0x5c7d94f754a0 ---------A   01560  LET K6=0
    0x5c7d94f75510 ---------A   01570  GOTO 1090
    0x5c7d94f75580 ---------A   01580  REM
    0x5c7d94f755f0 ---------A   01590  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/weekday.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c7d94f536d0 ---------A   01000  PRINT TAB(32);"WEEKDAY"
    0x5c7d94f53670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c7d94f442b0 ----------   01020  PRINT
    0x5c7d94f539e0 ----------   01030  PRINT
    0x5c7d94f55aa0 ---------A T 01040  PRINT
    0x5c7d94f54080 ---------A   01050  PRINT "WEEKDAY IS A COMPUTER DEMONSTRATION THAT"
    0x5c7d94f54480 ---------A   01060  PRINT"GIVES FACTS ABOUT A DATE OF INTEREST TO YOU."
    0x5c7d94f544e0 ---------A T 01070  PRINT
    0x5c7d94f556e0 ---------A T 01080  PRINT "ENTER TODAY'S DATE IN THE FORM: 3,24,1979  ";
    0x5c7d94f5b8a0 ---------A T 01090  INPUT M1,D1,Y1
    0x5c7d94f55e70 ---------A   01100  REM THIS PROGRAM DETERMINES THE DAY OF THE WEEK
    0x5c7d94f54b80 ---------A   01110  REM  FOR A DATE AFTER 1582
    0x5c7d94f55ff0 ---------A T 01120  DEF FNA(A)=INT(A/4)
    0x5c7d94f560b0 ---------A   01130  DIM T(12)
    0x5c7d94f5c5b0 ---------A T 01140  DEF FNB(A)=INT(A/7)
    0x5c7d94f5c640 ---------A   01150  REM SPACE OUTPUT AND READ IN INITIAL VALUES FOR MONTHS.
    0x5c7d94f5c9f0 ---------A   01160  FOR I= 1 TO 12
    0x5c7d94f5cc30 ---------A   01170  READ T(I)
    0x5c7d94f5cd60 ---------A   01180  NEXT I
    0x5c7d94f5cf40 ---------A   01190  PRINT"ENTER DAY OF BIRTH (OR OTHER DAY OF INTEREST)";
    0x5c7d94f5d4a0 ---------A   01200  INPUT M,D,Y
    0x5c7d94f5d500 ---------A   01210  PRINT
    0x5c7d94f5db40 ---------A   01220  LET I1 = INT((Y-1500)/100)
    0x5c7d94f5dbd0 ---------A   01230  REM TEST FOR DATE BEFORE CURRENT CALENDAR.
    0x5c7d94f5df00 ---------A   01240  IF Y-1582 <0 THEN 2220
    0x5c7d94f5e580 ---------A T 01250  LET A = I1*5+(I1+3)/4
    0x5c7d94f5ec50 ---------A   01260  LET I2=INT(A-FNB(A)*7)
    0x5c7d94f5f100 ---------A   01270  LET Y2=INT(Y/100)
    0x5c7d94f5f6d0 ---------A T 01280  LET Y3 =INT(Y-Y2*100)
    0x5c7d94f5ff70 ---------A   01290  LET A =Y3/4+Y3+D+T(M)+I2
    0x5c7d94f60740 ---------A T 01300  LET B=INT(A-FNB(A)*7)+1
    0x5c7d94f60990 ---------A T 01310  IF M > 2 THEN 1420
    0x5c7d94f60c00 ---------A   01320  IF Y3 = 0 THEN 1390
    0x5c7d94f612e0 ---------A   01330  LET T1=INT(Y-FNA(Y)*4)
    0x5c7d94f61530 ---------A   01340  IF T1 <> 0 THEN 1420
    0x5c7d94f619a0 ---------A   01350  IF B<>0 THEN 1370
    0x5c7d94f61bc0 ---------A   01360  LET B=6
    0x5c7d94f61ef0 ---------A G 01370  LET B = B-1
    0x5c7d94f61f60 ---------A   01380  GOTO 1420
    0x5c7d94f622a0 ---------A   01390  LET A = I1-1
    0x5c7d94f628b0 ---------A   01400  LET T1=INT(A-FNA(A)*4)
    0x5c7d94f62b00 ---------A   01410  IF T1 = 0 THEN 1350
    0x5c7d94f62d60 ---------A   01420  IF B <>0 THEN 1440
    0x5c7d94f62fa0 ---------A   01430  LET B = 7
    0x5c7d94f63b30 ---------A   01440  IF (Y1*12+M1)*31+D1<(Y*12+M)*31+D THEN 1500
    0x5c7d94f646c0 ---------A   01450  IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 1480
    0x5c7d94f64d40 ---------A   01460  PRINT M;"/";D;"/";Y;" WAS A ";
    0x5c7d94f64dd0 ---------A   01470  GOTO 1520
    0x5c7d94f65440 ---------A T 01480  PRINT M;"/";D;"/";Y;" IS A ";
    0x5c7d94f654d0 ---------A   01490  GOTO 1520
    0x5c7d94f65b60 ---------A   01500  PRINT M;"/";D;"/";Y;" WILL BE A ";
    0x5c7d94f65c00 ---------A T 01510  REM PRINT THE DAY OF THE WEEK THE DATE FALLS ON.
    0x5c7d94f65e70 ---------A   01520  IF B <>1 THEN 1540
    0x5c7d94f65fd0 ---------A T 01530  PRINT "SUNDAY."
    0x5c7d94f66230 ---------A   01540  IF B<>2 THEN 1560
    0x5c7d94f66390 ---------A T 01550  PRINT "MONDAY."
    0x5c7d94f665f0 ---------A   01560  IF B<>3 THEN 1580
    0x5c7d94f66750 ---------A   01570  PRINT "TUESDAY."
    0x5c7d94f669b0 ---------A   01580  IF B<>4 THEN 1600
    0x5c7d94f66b10 ---------A   01590  PRINT "WEDNESDAY."
    0x5c7d94f66d70 ---------A   01600  IF B<>5 THEN 1620
    0x5c7d94f66ed0 ---------A   01610  PRINT "THURSDAY."
    0x5c7d94f67130 ---------A   01620  IF B<>6 THEN 1640
    0x5c7d94f671b0 ---------A   01630  GOTO 2170
    0x5c7d94f67400 ---------A   01640  IF B<>7 THEN 1660
    0x5c7d94f67580 ---------A   01650  PRINT "SATURDAY."
    0x5c7d94f68100 ---------A   01660  IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 2100
    0x5c7d94f68930 ---------A   01670  LET I5=Y1-Y
    0x5c7d94f689a0 ---------A   01680  PRINT
    0x5c7d94f68dc0 ---------A   01690  LET I6=M1-M
    0x5c7d94f691d0 ---------A   01700  LET I7=D1-D
    0x5c7d94f69420 ---------A   01710  IF I7>=0 THEN 1740
    0x5c7d94f69760 ---------A   01720  LET I6= I6-1
    0x5c7d94f69a90 ---------A   01730  LET I7=I7+30
    0x5c7d94f69ce0 ---------A   01740  IF I6>=0 THEN 1770
    0x5c7d94f6a020 ---------A   01750  LET I5=I5-1
    0x5c7d94f6a350 ---------A   01760  LET I6=I6+12
    0x5c7d94f6a5a0 ---------A   01770  IF I5<0 THEN 2230
    0x5c7d94f6a800 ---------A   01780  IF I7 <> 0 THEN 1810
    0x5c7d94f6aa70 ---------A   01790  IF I6 <> 0 THEN 1810
    0x5c7d94f6abf0 ---------A   01800  PRINT"***HAPPY BIRTHDAY***"
    0x5c7d94f6b170 ---------A   01810  PRINT " "," ","YEARS","MONTHS","DAYS"
    0x5c7d94f6b6f0 ---------A   01820  PRINT " "," ","-----","------","----"
    0x5c7d94f6bb80 ---------A   01830  PRINT "YOUR AGE (IF BIRTHDATE) ",I5,I6,I7
    0x5c7d94f6c640 ---------A   01840  LET A8 = (I5*365)+(I6*30)+I7+INT(I6/2)
    0x5c7d94f6c930 ---------A   01850  LET K5 = I5
    0x5c7d94f6cc20 ---------A   01860  LET K6 = I6
    0x5c7d94f6cf20 ---------A   01870  LET K7 = I7
    0x5c7d94f6cfa0 ---------A   01880  REM CALCULATE RETIREMENT DATE.
    0x5c7d94f6d3e0 ---------A   01890  LET E = Y+65
    0x5c7d94f6d470 ---------A   01900  REM CALCULATE TIME SPENT IN THE FOLLOWING FUNCTIONS.
    0x5c7d94f6d770 ---------A   01910  LET F = .35
    0x5c7d94f6d8e0 ---------A   01920  PRINT "YOU HAVE SLEPT ",
    0x5c7d94f6d960 ---------A   01930  GOSUB 2290
    0x5c7d94f6db80 ---------A   01940  LET F = .17
    0x5c7d94f6dcf0 ---------A   01950  PRINT "YOU HAVE EATEN ",
    0x5c7d94f6dd70 ---------A   01960  GOSUB 2290
    0x5c7d94f6df90 ---------A   01970  LET F = .23
    0x5c7d94f6e1f0 ---------A   01980  IF K5 > 3 THEN 2010
    0x5c7d94f6e370 ---------A   01990  PRINT "YOU HAVE PLAYED",
    0x5c7d94f6e400 ---------A   02000  GOTO 2050
    0x5c7d94f6e660 ---------A   02010  IF K5 > 9 THEN 2040
    0x5c7d94f6e7f0 ---------A   02020  PRINT "YOU HAVE PLAYED/STUDIED",
    0x5c7d94f6e880 ---------A   02030  GOTO  2050
    0x5c7d94f6ea00 ---------A   02040  PRINT "YOU HAVE WORKED/PLAYED",
    0x5c7d94f6ea80 ---------A   02050  GOSUB 2290
    0x5c7d94f6eb00 ---------A   02060  GOTO 2450
    0x5c7d94f6ef50 ---------A   02070  PRINT "YOU HAVE RELAXED ",K5,K6,K7
    0x5c7d94f6eff0 ---------A   02080  PRINT 
    0x5c7d94f6f4a0 ---------A   02090  PRINT TAB(16);"***  YOU MAY RETIRE IN";E;" ***"
    0x5c7d94f6f520 ---------A   02100  PRINT
    0x5c7d94f6f5a0 ---------A   02110  PRINT
    0x5c7d94f6f620 ---------A   02120  PRINT
    0x5c7d94f6f6a0 ---------A   02130  PRINT
    0x5c7d94f6f720 ---------A   02140  PRINT
    0x5c7d94f6f7a0 ---------A   02150  PRINT
    0x5c7d94f6f800 ---------A   02160  END
    0x5c7d94f6fa60 ---------A   02170  IF D=13 THEN 2200
    0x5c7d94f6fbc0 ---------A   02180  PRINT "FRIDAY."
    0x5c7d94f6fc60 ---------A   02190  GOTO 1660
    0x5c7d94f6fdc0 ---------A   02200  PRINT "FRIDAY THE THIRTEENTH---BEWARE!"
    0x5c7d94f6fe70 ---------A   02210  GOTO 1660
    0x5c7d94f6ffe0 ---------A   02220  PRINT "NOT PREPARED TO GIVE DAY OF WEEK PRIOR TO MDLXXXII. "
    0x5c7d94f70090 ---------A   02230  GOTO 2110
    0x5c7d94f70130 ---------A   02240  REM TABLE OF VALUES FOR THE MONTHS TO BE USED IN CALCULATIONS.
    0x5c7d94f70c90 ---------A   02250  DATA 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5
    0x5c7d94f70d20 ---------B   02260  REM THIS IS THE CURRENT DATE USED IN THE CALCULATIONS.
    0x5c7d94f70df0 ---------B   02270  REM THIS IS THE DATE TO BE CALCULATED ON.
    0x5c7d94f70ec0 ---------B   02280  REM CALCULATE TIME IN YEARS, MONTHS, AND DAYS
    0x5c7d94f713e0 ---------B   02290  LET K1=INT(F*A8)
    0x5c7d94f71800 ---------B   02300  LET I5 = INT(K1/365)
    0x5c7d94f724b0 ---------B   02310  LET K1 = K1- (I5*365)
    0x5c7d94f728d0 ---------B   02320  LET I6 = INT(K1/30)
    0x5c7d94f72d60 ---------B   02330  LET I7 = K1 -(I6*30)
    0x5c7d94f730b0 ---------B   02340  LET K5 = K5-I5
    0x5c7d94f73400 ---------B   02350  LET K6 =K6-I6
    0x5c7d94f73750 ---------B   02360  LET K7 = K7-I7
    0x5c7d94f739a0 ---------B   02370  IF K7>=0 THEN 2400
    0x5c7d94f73ce0 ---------B   02380  LET K7=K7+30
    0x5c7d94f74010 ---------B   02390  LET K6=K6-1
    0x5c7d94f74260 ---------B   02400  IF K6>0 THEN 2430
    0x5c7d94f745a0 ---------B   02410  LET K6=K6+12
    0x5c7d94f748d0 ---------B   02420  LET K5=K5-1
    0x5c7d94f74c20 ---------B   02430  PRINT I5,I6,I7
    0x5c7d94f74c80 ---------B   02440  RETURN
    0x5c7d94f74ee0 ---------A   02450  IF K6=12 THEN 2470
    0x5c7d94f74f60 ---------A   02460  GOTO 2070
    0x5c7d94f75290 ---------A   02470  LET K5=K5+1
    0x5c7d94f754a0 ---------A   02480  LET K6=0
    0x5c7d94f75510 ---------A   02490  GOTO 2070
    0x5c7d94f75580 ---------A   02500  REM
    0x5c7d94f755f0 ---------A   02510  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02530 - 10000    7480 

 */



/*
 *  Symbol Table Listing for 'basic/weekday.bas'
 *
    A                        Integer     
    A8                       Integer     
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
    D1                       Integer     
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FNA             Array    Integer         {0,9} 
    FNB             Array    Integer         {0,9} 
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
    I1                       Integer     
    I2                       Integer     
    I5                       Integer     
    I6                       Integer     
    I7                       Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K1                       Integer     
    K5                       Integer     
    K6                       Integer     
    K7                       Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
    M1                       Integer     
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
    T               Array    Integer         {0,11} 
    T1                       Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    Y                        Integer     
    Y1                       Integer     
    Y2                       Integer     
    Y3                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/weekday.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c7d94f536d0 ---------A   01000  PRINT TAB(32);"WEEKDAY"
    0x5c7d94f53670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c7d94f442b0 ---------A   01020  PRINT
    0x5c7d94f539e0 ---------A   01030  PRINT
    0x5c7d94f55aa0 ---------A   01040  PRINT
    0x5c7d94f54080 ---------A   01050  PRINT "WEEKDAY IS A COMPUTER DEMONSTRATION THAT"
    0x5c7d94f54480 ---------A   01060  PRINT"GIVES FACTS ABOUT A DATE OF INTEREST TO YOU."
    0x5c7d94f544e0 ---------A   01070  PRINT
    0x5c7d94f556e0 ---------A   01080  PRINT "ENTER TODAY'S DATE IN THE FORM: 3,24,1979  ";
    0x5c7d94f5b8a0 ---------A   01090  INPUT M1,D1,Y1
    0x5c7d94f55e70 ---------A   01100  REM THIS PROGRAM DETERMINES THE DAY OF THE WEEK
    0x5c7d94f54b80 ---------A   01110  REM  FOR A DATE AFTER 1582
    0x5c7d94f55ff0 ---------A   01120  DEF FNA(A)=INT(A/4)
    0x5c7d94f560b0 ---------A   01130  DIM T(12)
    0x5c7d94f5c5b0 ---------A   01140  DEF FNB(A)=INT(A/7)
    0x5c7d94f5c640 ---------A   01150  REM SPACE OUTPUT AND READ IN INITIAL VALUES FOR MONTHS.
    0x5c7d94f5c9f0 ---------A   01160  FOR I= 1 TO 12
    0x5c7d94f5cc30 ---------A   01170  READ T(I)
    0x5c7d94f5cd60 ---------A   01180  NEXT I
    0x5c7d94f5cf40 ---------A   01190  PRINT"ENTER DAY OF BIRTH (OR OTHER DAY OF INTEREST)";
    0x5c7d94f5d4a0 ---------A   01200  INPUT M,D,Y
    0x5c7d94f5d500 ---------A   01210  PRINT
    0x5c7d94f5db40 ---------A   01220  LET I1 = INT((Y-1500)/100)
    0x5c7d94f5dbd0 ---------A   01230  REM TEST FOR DATE BEFORE CURRENT CALENDAR.
    0x5c7d94f5df00 ---------A   01240  IF Y-1582 <0 THEN 2220
    0x5c7d94f5e580 ---------A   01250  LET A = I1*5+(I1+3)/4
    0x5c7d94f5ec50 ---------A   01260  LET I2=INT(A-FNB(A)*7)
    0x5c7d94f5f100 ---------A   01270  LET Y2=INT(Y/100)
    0x5c7d94f5f6d0 ---------A   01280  LET Y3 =INT(Y-Y2*100)
    0x5c7d94f5ff70 ---------A   01290  LET A =Y3/4+Y3+D+T(M)+I2
    0x5c7d94f60740 ---------A   01300  LET B=INT(A-FNB(A)*7)+1
    0x5c7d94f60990 ---------A   01310  IF M > 2 THEN 1420
    0x5c7d94f60c00 ---------A   01320  IF Y3 = 0 THEN 1390
    0x5c7d94f612e0 ---------A   01330  LET T1=INT(Y-FNA(Y)*4)
    0x5c7d94f61530 ---------A   01340  IF T1 <> 0 THEN 1420
    0x5c7d94f619a0 ---------A T 01350  IF B<>0 THEN 1370
    0x5c7d94f61bc0 ---------A   01360  LET B=6
    0x5c7d94f61ef0 ---------A T 01370  LET B = B-1
    0x5c7d94f61f60 ---------A   01380  GOTO 1420
    0x5c7d94f622a0 ---------A T 01390  LET A = I1-1
    0x5c7d94f628b0 ---------A   01400  LET T1=INT(A-FNA(A)*4)
    0x5c7d94f62b00 ---------A   01410  IF T1 = 0 THEN 1350
    0x5c7d94f62d60 ---------A T 01420  IF B <>0 THEN 1440
    0x5c7d94f62fa0 ---------A   01430  LET B = 7
    0x5c7d94f63b30 ---------A T 01440  IF (Y1*12+M1)*31+D1<(Y*12+M)*31+D THEN 1500
    0x5c7d94f646c0 ---------A   01450  IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 1480
    0x5c7d94f64d40 ---------A   01460  PRINT M;"/";D;"/";Y;" WAS A ";
    0x5c7d94f64dd0 ---------A   01470  GOTO 1520
    0x5c7d94f65440 ---------A T 01480  PRINT M;"/";D;"/";Y;" IS A ";
    0x5c7d94f654d0 ---------A   01490  GOTO 1520
    0x5c7d94f65b60 ---------A T 01500  PRINT M;"/";D;"/";Y;" WILL BE A ";
    0x5c7d94f65c00 ---------A   01510  REM PRINT THE DAY OF THE WEEK THE DATE FALLS ON.
    0x5c7d94f65e70 ---------A T 01520  IF B <>1 THEN 1540
    0x5c7d94f65fd0 ---------A   01530  PRINT "SUNDAY."
    0x5c7d94f66230 ---------A T 01540  IF B<>2 THEN 1560
    0x5c7d94f66390 ---------A   01550  PRINT "MONDAY."
    0x5c7d94f665f0 ---------A T 01560  IF B<>3 THEN 1580
    0x5c7d94f66750 ---------A   01570  PRINT "TUESDAY."
    0x5c7d94f669b0 ---------A T 01580  IF B<>4 THEN 1600
    0x5c7d94f66b10 ---------A   01590  PRINT "WEDNESDAY."
    0x5c7d94f66d70 ---------A T 01600  IF B<>5 THEN 1620
    0x5c7d94f66ed0 ---------A   01610  PRINT "THURSDAY."
    0x5c7d94f67130 ---------A T 01620  IF B<>6 THEN 1640
    0x5c7d94f671b0 ---------A   01630  GOTO 2170
    0x5c7d94f67400 ---------A T 01640  IF B<>7 THEN 1660
    0x5c7d94f67580 ---------A   01650  PRINT "SATURDAY."
    0x5c7d94f68100 ---------A T 01660  IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 2100
    0x5c7d94f68930 ---------A   01670  LET I5=Y1-Y
    0x5c7d94f689a0 ---------A   01680  PRINT
    0x5c7d94f68dc0 ---------A   01690  LET I6=M1-M
    0x5c7d94f691d0 ---------A   01700  LET I7=D1-D
    0x5c7d94f69420 ---------A   01710  IF I7>=0 THEN 1740
    0x5c7d94f69760 ---------A   01720  LET I6= I6-1
    0x5c7d94f69a90 ---------A   01730  LET I7=I7+30
    0x5c7d94f69ce0 ---------A T 01740  IF I6>=0 THEN 1770
    0x5c7d94f6a020 ---------A   01750  LET I5=I5-1
    0x5c7d94f6a350 ---------A   01760  LET I6=I6+12
    0x5c7d94f6a5a0 ---------A T 01770  IF I5<0 THEN 2230
    0x5c7d94f6a800 ---------A   01780  IF I7 <> 0 THEN 1810
    0x5c7d94f6aa70 ---------A   01790  IF I6 <> 0 THEN 1810
    0x5c7d94f6abf0 ---------A   01800  PRINT"***HAPPY BIRTHDAY***"
    0x5c7d94f6b170 ---------A T 01810  PRINT " "," ","YEARS","MONTHS","DAYS"
    0x5c7d94f6b6f0 ---------A   01820  PRINT " "," ","-----","------","----"
    0x5c7d94f6bb80 ---------A   01830  PRINT "YOUR AGE (IF BIRTHDATE) ",I5,I6,I7
    0x5c7d94f6c640 ---------A   01840  LET A8 = (I5*365)+(I6*30)+I7+INT(I6/2)
    0x5c7d94f6c930 ---------A   01850  LET K5 = I5
    0x5c7d94f6cc20 ---------A   01860  LET K6 = I6
    0x5c7d94f6cf20 ---------A   01870  LET K7 = I7
    0x5c7d94f6cfa0 ---------A   01880  REM CALCULATE RETIREMENT DATE.
    0x5c7d94f6d3e0 ---------A   01890  LET E = Y+65
    0x5c7d94f6d470 ---------A   01900  REM CALCULATE TIME SPENT IN THE FOLLOWING FUNCTIONS.
    0x5c7d94f6d770 ---------A   01910  LET F = .35
    0x5c7d94f6d8e0 ---------A   01920  PRINT "YOU HAVE SLEPT ",
    0x5c7d94f6d960 ---------A   01930  GOSUB 2360
    0x5c7d94f6db80 ---------A   01940  LET F = .17
    0x5c7d94f6dcf0 ---------A   01950  PRINT "YOU HAVE EATEN ",
    0x5c7d94f6dd70 ---------A   01960  GOSUB 2360
    0x5c7d94f6df90 ---------A   01970  LET F = .23
    0x5c7d94f6e1f0 ---------A   01980  IF K5 > 3 THEN 2010
    0x5c7d94f6e370 ---------A   01990  PRINT "YOU HAVE PLAYED",
    0x5c7d94f6e400 ---------A   02000  GOTO 2050
    0x5c7d94f6e660 ---------A T 02010  IF K5 > 9 THEN 2040
    0x5c7d94f6e7f0 ---------A   02020  PRINT "YOU HAVE PLAYED/STUDIED",
    0x5c7d94f6e880 ---------A   02030  GOTO  2050
    0x5c7d94f6ea00 ---------A T 02040  PRINT "YOU HAVE WORKED/PLAYED",
    0x5c7d94f6ea80 ---------A T 02050  GOSUB 2360
    0x5c7d94f6eb00 ---------A   02060  GOTO 2260
    0x5c7d94f6ef50 ---------A T 02070  PRINT "YOU HAVE RELAXED ",K5,K6,K7
    0x5c7d94f6eff0 ---------A   02080  PRINT 
    0x5c7d94f6f4a0 ---------A   02090  PRINT TAB(16);"***  YOU MAY RETIRE IN";E;" ***"
    0x5c7d94f6f520 ---------A T 02100  PRINT
    0x5c7d94f6f5a0 ---------A T 02110  PRINT
    0x5c7d94f6f620 ---------A   02120  PRINT
    0x5c7d94f6f6a0 ---------A   02130  PRINT
    0x5c7d94f6f720 ---------A   02140  PRINT
    0x5c7d94f6f7a0 ---------A   02150  PRINT
    0x5c7d94f6f800 ---------A   02160  END
    0x5c7d94f6fa60 ---------A T 02170  IF D=13 THEN 2200
    0x5c7d94f6fbc0 ---------A   02180  PRINT "FRIDAY."
    0x5c7d94f6fc60 ---------A   02190  GOTO 1660
    0x5c7d94f6fdc0 ---------A T 02200  PRINT "FRIDAY THE THIRTEENTH---BEWARE!"
    0x5c7d94f6fe70 ---------A   02210  GOTO 1660
    0x5c7d94f6ffe0 ---------A T 02220  PRINT "NOT PREPARED TO GIVE DAY OF WEEK PRIOR TO MDLXXXII. "
    0x5c7d94f70090 ---------A T 02230  GOTO 2110
    0x5c7d94f70130 ---------A   02240  REM TABLE OF VALUES FOR THE MONTHS TO BE USED IN CALCULATIONS.
    0x5c7d94f70c90 ---------A   02250  DATA 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5
    0x5c7d94f74ee0 ---------A T 02260  IF K6=12 THEN 2280
    0x5c7d94f74f60 ---------A   02270  GOTO 2070
    0x5c7d94f75290 ---------A T 02280  LET K5=K5+1
    0x5c7d94f754a0 ---------A   02290  LET K6=0
    0x5c7d94f75510 ---------A   02300  GOTO 2070
    0x5c7d94f75580 ---------A   02310  REM
    0x5c7d94f755f0 ---------A   02320  END
    0x5c7d94f70d20 ---------B   02330  REM THIS IS THE CURRENT DATE USED IN THE CALCULATIONS.
    0x5c7d94f70df0 ---------B   02340  REM THIS IS THE DATE TO BE CALCULATED ON.
    0x5c7d94f70ec0 ---------B   02350  REM CALCULATE TIME IN YEARS, MONTHS, AND DAYS
    0x5c7d94f713e0 ---------B G 02360  LET K1=INT(F*A8)
    0x5c7d94f71800 ---------B   02370  LET I5 = INT(K1/365)
    0x5c7d94f724b0 ---------B   02380  LET K1 = K1- (I5*365)
    0x5c7d94f728d0 ---------B   02390  LET I6 = INT(K1/30)
    0x5c7d94f72d60 ---------B   02400  LET I7 = K1 -(I6*30)
    0x5c7d94f730b0 ---------B   02410  LET K5 = K5-I5
    0x5c7d94f73400 ---------B   02420  LET K6 =K6-I6
    0x5c7d94f73750 ---------B   02430  LET K7 = K7-I7
    0x5c7d94f739a0 ---------B   02440  IF K7>=0 THEN 2470
    0x5c7d94f73ce0 ---------B   02450  LET K7=K7+30
    0x5c7d94f74010 ---------B   02460  LET K6=K6-1
    0x5c7d94f74260 ---------B T 02470  IF K6>0 THEN 2500
    0x5c7d94f745a0 ---------B   02480  LET K6=K6+12
    0x5c7d94f748d0 ---------B   02490  LET K5=K5-1
    0x5c7d94f74c20 ---------B T 02500  PRINT I5,I6,I7
    0x5c7d94f75cd0 ---------B   02510  GOTO 02520
    0x5c7d94f80e80 ---------B T 02520  RETURN
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
char* data_02250s[]={"0","3","3","6","1","4","6","2","5","0","3","5"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 2250, 12,data_02250s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
int    A8_int;                                    // Basic: A8 
int    B_int;                                     // Basic: B 
int    D_int;                                     // Basic: D 
int    D1_int;                                    // Basic: D1 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    FNA_int_arr[10];                           // Basic: FNA 
int    FNB_int_arr[10];                           // Basic: FNB 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    I2_int;                                    // Basic: I2 
int    I5_int;                                    // Basic: I5 
int    I6_int;                                    // Basic: I6 
int    I7_int;                                    // Basic: I7 
int    K1_int;                                    // Basic: K1 
int    K5_int;                                    // Basic: K5 
int    K6_int;                                    // Basic: K6 
int    K7_int;                                    // Basic: K7 
int    M_int;                                     // Basic: M 
int    M1_int;                                    // Basic: M1 
int    T_int_arr[12];                             // Basic: T 
int    T1_int;                                    // Basic: T1 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Y2_int;                                    // Basic: Y2 
int    Y3_int;                                    // Basic: Y3 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02360();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused A
int FNA(int A){
    int rtn=INT(A_int/4);
    return(rtn);
}

#pragma argsused A
int FNB(int A){
    int rtn=INT(A_int/7);
    return(rtn);
}

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
    // 02330 REM THIS IS THE CURRENT DATE USED IN THE CALCULATIONS.
    // 02340 REM THIS IS THE DATE TO BE CALCULATED ON.
    // 02350 REM CALCULATE TIME IN YEARS, MONTHS, AND DAYS

void Routine_02360(){
    // 02360 LET K1=INT(F*A8)
    K1_int = INT(F_int*A8_int);
    // 02370 LET I5 = INT(K1/365)
    I5_int = INT(K1_int/365);
    // 02380 LET K1 = K1- (I5*365)
    K1_int = K1_int-(I5_int*365);
    // 02390 LET I6 = INT(K1/30)
    I6_int = INT(K1_int/30);
    // 02400 LET I7 = K1 -(I6*30)
    I7_int = K1_int-(I6_int*30);
    // 02410 LET K5 = K5-I5
    K5_int = K5_int-I5_int;
    // 02420 LET K6 =K6-I6
    K6_int = K6_int-I6_int;
    // 02430 LET K7 = K7-I7
    K7_int = K7_int-I7_int;
    // 02440 IF K7>=0 THEN 2470
    if(K7_int>=0)goto Lbl_02470;
    // 02450 LET K7=K7+30
    K7_int = K7_int+30;
    // 02460 LET K6=K6-1
    K6_int = K6_int-1;

  Lbl_02470:
    // 02470 IF K6>0 THEN 2500
    if(K6_int>0)goto Lbl_02500;
    // 02480 LET K6=K6+12
    K6_int = K6_int+12;
    // 02490 LET K5=K5-1
    K5_int = K5_int-1;

  Lbl_02500:
    // 02500 PRINT I5,I6,I7
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,I5_int); b2c_INT(buf,I6_int); b2c_INT(buf,I7_int);strcat(buf,"\n");fputs(buf,fh); };
    // 02510 GOTO 02520
    goto Lbl_02520;

  Lbl_02520:
    // 02520 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(32);"WEEKDAY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,32);strcat(buf,"WEEKDAY");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "WEEKDAY IS A COMPUTER DEMONSTRATION THAT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WEEKDAY IS A COMPUTER DEMONSTRATION THAT");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT"GIVES FACTS ABOUT A DATE OF INTEREST TO YOU."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GIVES FACTS ABOUT A DATE OF INTEREST TO YOU.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "ENTER TODAY'S DATE IN THE FORM: 3,24,1979  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER TODAY'S DATE IN THE FORM: 3,24,1979  ");fputs(buf,fh); };
    // 01090 INPUT M1,D1,Y1
    // Start of Basic INPUT statement 01090
    {
        int numargs=3;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M1_int,args,0)) ||
                (err += b2c_strtoi(&D1_int,args,1)) ||
                (err += b2c_strtoi(&Y1_int,args,2)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01090
    // 01100 REM THIS PROGRAM DETERMINES THE DAY OF THE WEEK
    // 01110 REM  FOR A DATE AFTER 1582
    // 01120 DEF FNA(A)=INT(A/4)
    // 01130 DIM T(12)
    // 01140 DEF FNB(A)=INT(A/7)
    // 01150 REM SPACE OUTPUT AND READ IN INITIAL VALUES FOR MONTHS.
    // 01160 FOR I= 1 TO 12
    for(I_int=1;I_int<=12;I_int++){
        // 01170 READ T(I)
        T_int_arr[I_int] = Get_Data_Int();
        // 01180 NEXT I
        int dummy_1180=0; // Ignore this line.
    }; // End-For(I_int)
    // 01190 PRINT"ENTER DAY OF BIRTH (OR OTHER DAY OF INTEREST)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER DAY OF BIRTH (OR OTHER DAY OF INTEREST)");fputs(buf,fh); };
    // 01200 INPUT M,D,Y
    // Start of Basic INPUT statement 01200
    {
        int numargs=3;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ||
                (err += b2c_strtoi(&D_int,args,1)) ||
                (err += b2c_strtoi(&Y_int,args,2)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01200
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 LET I1 = INT((Y-1500)/100)
    I1_int = INT((Y_int-1500)/100);
    // 01230 REM TEST FOR DATE BEFORE CURRENT CALENDAR.
    // 01240 IF Y-1582 <0 THEN 2220
    if(Y_int-1582<0)goto Lbl_02220;
    // 01250 LET A = I1*5+(I1+3)/4
    A_int = I1_int*5+(I1_int+3)/4;
    // 01260 LET I2=INT(A-FNB(A)*7)
    I2_int = INT(A_int-FNB_int_arr[A_int]*7);
    // 01270 LET Y2=INT(Y/100)
    Y2_int = INT(Y_int/100);
    // 01280 LET Y3 =INT(Y-Y2*100)
    Y3_int = INT(Y_int-Y2_int*100);
    // 01290 LET A =Y3/4+Y3+D+T(M)+I2
    A_int = Y3_int/4+Y3_int+D_int+T_int_arr[M_int]+I2_int;
    // 01300 LET B=INT(A-FNB(A)*7)+1
    B_int = INT(A_int-FNB_int_arr[A_int]*7)+1;
    // 01310 IF M > 2 THEN 1420
    if(M_int>2)goto Lbl_01420;
    // 01320 IF Y3 = 0 THEN 1390
    if(Y3_int==0)goto Lbl_01390;
    // 01330 LET T1=INT(Y-FNA(Y)*4)
    T1_int = INT(Y_int-FNA_int_arr[Y_int]*4);
    // 01340 IF T1 <> 0 THEN 1420
    if(T1_int!=0)goto Lbl_01420;

  Lbl_01350:
    // 01350 IF B<>0 THEN 1370
    if(B_int!=0)goto Lbl_01370;
    // 01360 LET B=6
    B_int = 6;

  Lbl_01370:
    // 01370 LET B = B-1
    B_int = B_int-1;
    // 01380 GOTO 1420
    goto Lbl_01420;

  Lbl_01390:
    // 01390 LET A = I1-1
    A_int = I1_int-1;
    // 01400 LET T1=INT(A-FNA(A)*4)
    T1_int = INT(A_int-FNA_int_arr[A_int]*4);
    // 01410 IF T1 = 0 THEN 1350
    if(T1_int==0)goto Lbl_01350;

  Lbl_01420:
    // 01420 IF B <>0 THEN 1440
    if(B_int!=0)goto Lbl_01440;
    // 01430 LET B = 7
    B_int = 7;

  Lbl_01440:
    // 01440 IF (Y1*12+M1)*31+D1<(Y*12+M)*31+D THEN 1500
    if((Y1_int*12+M1_int)*31+D1_int<(Y_int*12+M_int)*31+D_int)goto Lbl_01500;
    // 01450 IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 1480
    if((Y1_int*12+M1_int)*31+D1_int==(Y_int*12+M_int)*31+D_int)goto Lbl_01480;
    // 01460 PRINT M;"/";D;"/";Y;" WAS A ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,M_int);strcat(buf,"/"); b2c_INT(buf,D_int);strcat(buf,"/"); b2c_INT(buf,Y_int);strcat(buf," WAS A ");fputs(buf,fh); };
    // 01470 GOTO 1520
    goto Lbl_01520;

  Lbl_01480:
    // 01480 PRINT M;"/";D;"/";Y;" IS A ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,M_int);strcat(buf,"/"); b2c_INT(buf,D_int);strcat(buf,"/"); b2c_INT(buf,Y_int);strcat(buf," IS A ");fputs(buf,fh); };
    // 01490 GOTO 1520
    goto Lbl_01520;

  Lbl_01500:
    // 01500 PRINT M;"/";D;"/";Y;" WILL BE A ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,M_int);strcat(buf,"/"); b2c_INT(buf,D_int);strcat(buf,"/"); b2c_INT(buf,Y_int);strcat(buf," WILL BE A ");fputs(buf,fh); };
    // 01510 REM PRINT THE DAY OF THE WEEK THE DATE FALLS ON.

  Lbl_01520:
    // 01520 IF B <>1 THEN 1540
    if(B_int!=1)goto Lbl_01540;
    // 01530 PRINT "SUNDAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SUNDAY.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01540:
    // 01540 IF B<>2 THEN 1560
    if(B_int!=2)goto Lbl_01560;
    // 01550 PRINT "MONDAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MONDAY.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01560:
    // 01560 IF B<>3 THEN 1580
    if(B_int!=3)goto Lbl_01580;
    // 01570 PRINT "TUESDAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TUESDAY.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01580:
    // 01580 IF B<>4 THEN 1600
    if(B_int!=4)goto Lbl_01600;
    // 01590 PRINT "WEDNESDAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WEDNESDAY.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01600:
    // 01600 IF B<>5 THEN 1620
    if(B_int!=5)goto Lbl_01620;
    // 01610 PRINT "THURSDAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THURSDAY.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01620:
    // 01620 IF B<>6 THEN 1640
    if(B_int!=6)goto Lbl_01640;
    // 01630 GOTO 2170
    goto Lbl_02170;

  Lbl_01640:
    // 01640 IF B<>7 THEN 1660
    if(B_int!=7)goto Lbl_01660;
    // 01650 PRINT "SATURDAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SATURDAY.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01660:
    // 01660 IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 2100
    if((Y1_int*12+M1_int)*31+D1_int==(Y_int*12+M_int)*31+D_int)goto Lbl_02100;
    // 01670 LET I5=Y1-Y
    I5_int = Y1_int-Y_int;
    // 01680 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01690 LET I6=M1-M
    I6_int = M1_int-M_int;
    // 01700 LET I7=D1-D
    I7_int = D1_int-D_int;
    // 01710 IF I7>=0 THEN 1740
    if(I7_int>=0)goto Lbl_01740;
    // 01720 LET I6= I6-1
    I6_int = I6_int-1;
    // 01730 LET I7=I7+30
    I7_int = I7_int+30;

  Lbl_01740:
    // 01740 IF I6>=0 THEN 1770
    if(I6_int>=0)goto Lbl_01770;
    // 01750 LET I5=I5-1
    I5_int = I5_int-1;
    // 01760 LET I6=I6+12
    I6_int = I6_int+12;

  Lbl_01770:
    // 01770 IF I5<0 THEN 2230
    if(I5_int<0)goto Lbl_02230;
    // 01780 IF I7 <> 0 THEN 1810
    if(I7_int!=0)goto Lbl_01810;
    // 01790 IF I6 <> 0 THEN 1810
    if(I6_int!=0)goto Lbl_01810;
    // 01800 PRINT"***HAPPY BIRTHDAY***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"***HAPPY BIRTHDAY***");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01810:
    // 01810 PRINT " "," ","YEARS","MONTHS","DAYS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf," ");strcat(buf,"YEARS");strcat(buf,"MONTHS");strcat(buf,"DAYS");strcat(buf,"\n");fputs(buf,fh); };
    // 01820 PRINT " "," ","-----","------","----"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");strcat(buf," ");strcat(buf,"-----");strcat(buf,"------");strcat(buf,"----");strcat(buf,"\n");fputs(buf,fh); };
    // 01830 PRINT "YOUR AGE (IF BIRTHDATE) ",I5,I6,I7
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR AGE (IF BIRTHDATE) "); b2c_INT(buf,I5_int); b2c_INT(buf,I6_int); b2c_INT(buf,I7_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01840 LET A8 = (I5*365)+(I6*30)+I7+INT(I6/2)
    A8_int = (I5_int*365)+(I6_int*30)+I7_int+INT(I6_int/2);
    // 01850 LET K5 = I5
    K5_int = I5_int;
    // 01860 LET K6 = I6
    K6_int = I6_int;
    // 01870 LET K7 = I7
    K7_int = I7_int;
    // 01880 REM CALCULATE RETIREMENT DATE.
    // 01890 LET E = Y+65
    E_int = Y_int+65;
    // 01900 REM CALCULATE TIME SPENT IN THE FOLLOWING FUNCTIONS.
    // 01910 LET F = .35
    F_int = 0.35;
    // 01920 PRINT "YOU HAVE SLEPT ",
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE SLEPT ");fputs(buf,fh); };
    // 01930 GOSUB 2360
    Routine_02360();
    // 01940 LET F = .17
    F_int = 0.17;
    // 01950 PRINT "YOU HAVE EATEN ",
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE EATEN ");fputs(buf,fh); };
    // 01960 GOSUB 2360
    Routine_02360();
    // 01970 LET F = .23
    F_int = 0.23;
    // 01980 IF K5 > 3 THEN 2010
    if(K5_int>3)goto Lbl_02010;
    // 01990 PRINT "YOU HAVE PLAYED",
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE PLAYED");fputs(buf,fh); };
    // 02000 GOTO 2050
    goto Lbl_02050;

  Lbl_02010:
    // 02010 IF K5 > 9 THEN 2040
    if(K5_int>9)goto Lbl_02040;
    // 02020 PRINT "YOU HAVE PLAYED/STUDIED",
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE PLAYED/STUDIED");fputs(buf,fh); };
    // 02030 GOTO  2050
    goto Lbl_02050;

  Lbl_02040:
    // 02040 PRINT "YOU HAVE WORKED/PLAYED",
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE WORKED/PLAYED");fputs(buf,fh); };

  Lbl_02050:
    // 02050 GOSUB 2360
    Routine_02360();
    // 02060 GOTO 2260
    goto Lbl_02260;

  Lbl_02070:
    // 02070 PRINT "YOU HAVE RELAXED ",K5,K6,K7
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE RELAXED "); b2c_INT(buf,K5_int); b2c_INT(buf,K6_int); b2c_INT(buf,K7_int);strcat(buf,"\n");fputs(buf,fh); };
    // 02080 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02090 PRINT TAB(16);"***  YOU MAY RETIRE IN";E;" ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,16);strcat(buf,"***  YOU MAY RETIRE IN"); b2c_INT(buf,E_int);strcat(buf," ***");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02100:
    // 02100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02110:
    // 02110 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02150 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02160 END

  Lbl_02170:
    // 02170 IF D=13 THEN 2200
    if(D_int==13)goto Lbl_02200;
    // 02180 PRINT "FRIDAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FRIDAY.");strcat(buf,"\n");fputs(buf,fh); };
    // 02190 GOTO 1660
    goto Lbl_01660;

  Lbl_02200:
    // 02200 PRINT "FRIDAY THE THIRTEENTH---BEWARE!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FRIDAY THE THIRTEENTH---BEWARE!");strcat(buf,"\n");fputs(buf,fh); };
    // 02210 GOTO 1660
    goto Lbl_01660;

  Lbl_02220:
    // 02220 PRINT "NOT PREPARED TO GIVE DAY OF WEEK PRIOR TO MDLXXXII. "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOT PREPARED TO GIVE DAY OF WEEK PRIOR TO MDLXXXII. ");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02230:
    // 02230 GOTO 2110
    goto Lbl_02110;
    // 02240 REM TABLE OF VALUES FOR THE MONTHS TO BE USED IN CALCULATIONS.
    // 02250 DATA 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5

  Lbl_02260:
    // 02260 IF K6=12 THEN 2280
    if(K6_int==12)goto Lbl_02280;
    // 02270 GOTO 2070
    goto Lbl_02070;

  Lbl_02280:
    // 02280 LET K5=K5+1
    K5_int = K5_int+1;
    // 02290 LET K6=0
    K6_int = 0;
    // 02300 GOTO 2070
    goto Lbl_02070;
    // 02310 REM
    // 02320 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
