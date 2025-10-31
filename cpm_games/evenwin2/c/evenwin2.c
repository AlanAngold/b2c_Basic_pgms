/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/evenwin2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56ff930166d0 ---------A   00001  PRINT CHR$(26);TAB(31);"EVEN WINS"
    0x56ff93016670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56ff930167f0 ---------A   00003  PRINT:PRINT
    0x56ff93017b80 ---------A   00004  Y1=0
    0x56ff93018f30 ---------A   00010  M1=0
    0x56ff930190b0 ---------A   00020  DIM M(20),Y(20)
    0x56ff9301e9c0 ---------A   00030  PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x56ff9301eb20 ---------A   00040  PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x56ff9301ec40 ---------A   00050  PRINT "OTHER OBJECTS ON A TABLE."
    0x56ff9301eca0 ---------A   00060  PRINT
    0x56ff9301ed00 ---------A   00070  PRINT 
    0x56ff9301eeb0 ---------A   00080  PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x56ff9301f060 ---------A   00090  PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x56ff9301f200 ---------A   00100  PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x56ff9301f360 ---------A   00110  PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x56ff9301f3c0 ---------A   00120  PRINT
    0x56ff9301f470 ---------A   00130  PRINT
    0x56ff9301f630 ---------A   00140  PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x56ff9301f7d0 ---------A   00150  PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x56ff9301f8f0 ---------A   00160  PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x56ff9301f950 ---------A   00170  PRINT
    0x56ff9301f9b0 ---------A   00180  PRINT
    0x56ff9301fa60 ---------A   00190  PRINT
    0x56ff9301fc00 ---------A T 00200  PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x56ff9301fd40 ---------A   00210  PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x56ff9301ff60 ---------A   00220  INPUT C
    0x56ff9301ffe0 ---------A   00225  PRINT
    0x56ff93020240 ---------A   00230  IF C=0 THEN 250
    0x56ff930202c0 ---------A   00240  GOTO 1060
    0x56ff93020590 ---------A T 00250  T=27
    0x56ff93020780 ---------A   00260  M=2
    0x56ff93020a90 ---------A   00270  PRINT:PRINT "TOTAL=";T:PRINT
    0x56ff93020df0 ---------A   00280  M1=M1+M
    0x56ff93021390 ---------A   00290  T=T-M
    0x56ff93021da0 ---------A T 00300  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff93021fe0 ---------A   00310  IF T=0 THEN 880
    0x56ff93022300 ---------A   00320  PRINT:PRINT "TOTAL=";T:PRINT
    0x56ff930223b0 ---------A   00330  PRINT
    0x56ff930228d0 ---------A   00340  PRINT "WHAT IS YOUR NEXT MOVE (MY TOTAL IS";M1;CHR$(8);")";
    0x56ff93022a30 ---------A T 00350  INPUT Y
    0x56ff93022ab0 ---------A T 00360  PRINT
    0x56ff93022d10 ---------A   00370  IF Y<1 THEN 1160
    0x56ff93022f70 ---------A   00380  IF Y>4 THEN 1160
    0x56ff93023220 ---------A   00390  IF Y<=T THEN 430
    0x56ff93023390 ---------A   00400  PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x56ff930234f0 ---------A   00410  PRINT "LEFT.  TRY AGAIN."
    0x56ff93023570 ---------A   00420  GOTO 350
    0x56ff930238c0 ---------A T 00430  Y1=Y1+Y
    0x56ff93023c10 ---------A   00440  T=T-Y
    0x56ff93023e60 ---------A   00450  IF T=0 THEN 880
    0x56ff930240c0 ---------A   00460  PRINT "TOTAL=";T
    0x56ff93024160 ---------A   00470  PRINT
    0x56ff93024680 ---------A   00480  PRINT "YOUR TOTAL IS";Y1;CHR$(8);"."
    0x56ff930248e0 ---------A   00490  IF T<.5 THEN 880
    0x56ff93024ff0 ---------A   00500  R=T-6*INT(T/6)
    0x56ff93025540 ---------A   00510  IF INT(Y1/2)=Y1/2 THEN 700
    0x56ff930257a0 ---------A   00520  IF T<4.2 THEN 580
    0x56ff93025a00 ---------A   00530  IF R>3.4 THEN 620
    0x56ff93025d40 ---------A   00540  M=R+1
    0x56ff93026090 ---------A   00550  M1=M1+M
    0x56ff930263e0 ---------A   00560  T=T-M
    0x56ff93026450 ---------A   00570  GOTO 300
    0x56ff93026680 ---------A T 00580  M=T
    0x56ff930269d0 ---------A   00590  T=T-M
    0x56ff93026a50 ---------A   00600  GOTO 830
    0x56ff93026ee0 ---------A   00610  REM     250 IS WHERE I WIN.
    0x56ff93027150 ---------A T 00620  IF R<4.7 THEN 660
    0x56ff930273b0 ---------A   00630  IF R>3.5 THEN 660
    0x56ff930275d0 ---------A T 00640  M=1
    0x56ff93027640 ---------A   00650  GOTO 670
    0x56ff93027850 ---------A T 00660  M=4
    0x56ff93027ba0 ---------A T 00670  T=T-M
    0x56ff93027ef0 ---------A   00680  M1=M1+M
    0x56ff93027f90 ---------A   00690  GOTO 300
    0x56ff93028030 ---------A T 00700  REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x56ff930282a0 ---------A   00710  IF R<1.5 THEN 1020
    0x56ff93028500 ---------A   00720  IF R>5.3 THEN 1020
    0x56ff93028840 ---------A   00730  M=R-1
    0x56ff93028b90 ---------A   00740  M1=M1+M
    0x56ff93028ee0 ---------A   00750  T=T-M
    0x56ff93029140 ---------A   00760  IF T<.2 THEN 790
    0x56ff930291c0 ---------A   00770  REM     IS # ZERO HERE
    0x56ff93029260 ---------A   00780  GOTO 300
    0x56ff930292d0 ---------A T 00790  REM     IS = ZERO HERE
    0x56ff93029bc0 ---------A   00800  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff93029c40 ---------A   00810  PRINT
    0x56ff93029cd0 ---------A   00820  GOTO 880
    0x56ff93029d50 ---------A T 00830  REM    THIS IS WHERE I WIN
    0x56ff9302a640 ---------A   00840  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff9302a6c0 ---------A   00850  PRINT
    0x56ff9302a820 ---------A   00860  PRINT "TOTAL = 0"
    0x56ff9302ab90 ---------A   00870  M1=M1+M
    0x56ff9302acf0 ---------A T 00880  PRINT "THAT IS ALL OF THE MARBLES."
    0x56ff9302ada0 ---------A   00890  PRINT
    0x56ff9302b680 ---------A   00900  PRINT " MY TOTAL IS";M1;CHR$(8);", YOUR TOTAL IS";Y1;CHR$(8);"."
    0x56ff9302b710 ---------A   00910  PRINT
    0x56ff9302bc90 ---------A   00920  IF INT(M1/2)=M1/2 THEN 950
    0x56ff9302be20 ---------A   00930  PRINT "     YOU WON.  DO YOU WANT TO PLAY";
    0x56ff9302bec0 ---------A   00940  GOTO 960
    0x56ff9302c050 ---------A T 00950  PRINT "     I WON.  DO YOU WANT TO PLAY";
    0x56ff9302c360 ---------A T 00960  INPUT " AGAIN";A1$:PRINT:PRINT
    0x56ff9302c780 ---------A   00980  IF LEFT$(A1$,1)="N" THEN 1030
    0x56ff9302c9a0 ---------A   00990  M1=0
    0x56ff9302cbb0 ---------A   01000  Y1=0
    0x56ff9302cc20 ---------A   01010  GOTO 200
    0x56ff9302cc90 ---------A T 01020  GOTO 640
    0x56ff9302cd10 ---------A T 01030  PRINT
    0x56ff9302ce70 ---------A   01040  PRINT "OK.  SEE YOU LATER."
    0x56ff9302cef0 ---------A   01050  GOTO 1230
    0x56ff9302d100 ---------A T 01060  T=27
    0x56ff9302d170 ---------A   01070  PRINT
    0x56ff9302d1f0 ---------A   01080  PRINT
    0x56ff9302d270 ---------A   01090  PRINT
    0x56ff9302d4d0 ---------A   01100  PRINT "TOTAL=";T
    0x56ff9302d550 ---------A   01110  PRINT
    0x56ff9302d5e0 ---------A   01120  PRINT
    0x56ff9302d770 ---------A   01130  PRINT "WHAT IS YOUR FIRST MOVE";
    0x56ff9302d8d0 ---------A   01140  INPUT Y
    0x56ff9302d950 ---------A   01150  GOTO 360
    0x56ff9302d9f0 ---------A T 01160  PRINT
    0x56ff9302db80 ---------A   01170  PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x56ff9302dcf0 ---------A   01180  PRINT "INTEGER BETWEEN 1 AND 4."
    0x56ff9302dd90 ---------A   01190  PRINT
    0x56ff9302df00 ---------A   01200  PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x56ff9302df80 ---------A   01210  PRINT
    0x56ff9302e000 ---------A   01220  GOTO 350
    0x56ff9302e070 ---------A T 01230  RUN "MENU"
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00200      01010T
     00250      00230T
     00300      00570T, 00690T, 00780T
     00350      00420T, 01220T
     00360      01150T
     00430      00390T
     00580      00520T
     00620      00530T
     00640      01020T
     00660      00620T, 00630T
     00670      00650T
     00700      00510T
     00790      00760T
     00830      00600T
     00880      00310T, 00450T, 00490T, 00820T
     00950      00920T
     00960      00940T
     01020      00710T, 00720T
     01030      00980T
     01060      00240T
     01160      00370T, 00380T
     01230      01050T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x56ff930166d0 (00001)   0x56ff930166d0 (00001)   0x56ff9302e070 (01230)   0x56ff9302e070 (01230)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/evenwin2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56ff930166d0 ---------A   00001  PRINT CHR$(26);TAB(31);"EVEN WINS"
    0x56ff93016670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56ff930169e0 ----------   00003  PRINT
    0x56ff930167f0 ---------A        a PRINT
    0x56ff93017b80 ---------A   00004  Y1=0
    0x56ff93018f30 ---------A   00010  M1=0
    0x56ff930190b0 ---------A   00020  DIM M(20),Y(20)
    0x56ff9301e9c0 ---------A   00030  PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x56ff9301eb20 ---------A   00040  PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x56ff9301ec40 ---------A   00050  PRINT "OTHER OBJECTS ON A TABLE."
    0x56ff9301eca0 ---------A   00060  PRINT
    0x56ff9301ed00 ---------A   00070  PRINT 
    0x56ff9301eeb0 ---------A   00080  PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x56ff9301f060 ---------A   00090  PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x56ff9301f200 ---------A   00100  PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x56ff9301f360 ---------A   00110  PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x56ff9301f3c0 ---------A   00120  PRINT
    0x56ff9301f470 ---------A   00130  PRINT
    0x56ff9301f630 ---------A   00140  PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x56ff9301f7d0 ---------A   00150  PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x56ff9301f8f0 ---------A   00160  PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x56ff9301f950 ---------A   00170  PRINT
    0x56ff9301f9b0 ---------A   00180  PRINT
    0x56ff9301fa60 ---------A   00190  PRINT
    0x56ff9301fc00 ---------A T 00200  PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x56ff9301fd40 ---------A   00210  PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x56ff9301ff60 ---------A   00220  INPUT C
    0x56ff9301ffe0 ---------A   00225  PRINT
    0x56ff93020240 ---------A   00230  IF C=0 THEN 250
    0x56ff930202c0 ---------A   00240  GOTO 1060
    0x56ff93020590 ---------A T 00250  T=27
    0x56ff93020780 ---------A   00260  M=2
    0x56ff930207d0 ----------   00270  PRINT
    0x56ff93020a10 ----------        a PRINT "TOTAL=";T
    0x56ff93020a90 ---------A        b PRINT
    0x56ff93020df0 ---------A   00280  M1=M1+M
    0x56ff93021390 ---------A   00290  T=T-M
    0x56ff93021da0 ---------A T 00300  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff93021fe0 ---------A   00310  IF T=0 THEN 880
    0x56ff93022040 ----------   00320  PRINT
    0x56ff93022280 ----------        a PRINT "TOTAL=";T
    0x56ff93022300 ---------A        b PRINT
    0x56ff930223b0 ---------A   00330  PRINT
    0x56ff930228d0 ---------A   00340  PRINT "WHAT IS YOUR NEXT MOVE (MY TOTAL IS";M1;CHR$(8);")";
    0x56ff93022a30 ---------A T 00350  INPUT Y
    0x56ff93022ab0 ---------A T 00360  PRINT
    0x56ff93022d10 ---------A   00370  IF Y<1 THEN 1160
    0x56ff93022f70 ---------A   00380  IF Y>4 THEN 1160
    0x56ff93023220 ---------A   00390  IF Y<=T THEN 430
    0x56ff93023390 ---------A   00400  PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x56ff930234f0 ---------A   00410  PRINT "LEFT.  TRY AGAIN."
    0x56ff93023570 ---------A   00420  GOTO 350
    0x56ff930238c0 ---------A T 00430  Y1=Y1+Y
    0x56ff93023c10 ---------A   00440  T=T-Y
    0x56ff93023e60 ---------A   00450  IF T=0 THEN 880
    0x56ff930240c0 ---------A   00460  PRINT "TOTAL=";T
    0x56ff93024160 ---------A   00470  PRINT
    0x56ff93024680 ---------A   00480  PRINT "YOUR TOTAL IS";Y1;CHR$(8);"."
    0x56ff930248e0 ---------A   00490  IF T<.5 THEN 880
    0x56ff93024ff0 ---------A   00500  R=T-6*INT(T/6)
    0x56ff93025540 ---------A   00510  IF INT(Y1/2)=Y1/2 THEN 700
    0x56ff930257a0 ---------A   00520  IF T<4.2 THEN 580
    0x56ff93025a00 ---------A   00530  IF R>3.4 THEN 620
    0x56ff93025d40 ---------A   00540  M=R+1
    0x56ff93026090 ---------A   00550  M1=M1+M
    0x56ff930263e0 ---------A   00560  T=T-M
    0x56ff93026450 ---------A   00570  GOTO 300
    0x56ff93026680 ---------A T 00580  M=T
    0x56ff930269d0 ---------A   00590  T=T-M
    0x56ff93026a50 ---------A   00600  GOTO 830
    0x56ff93026ee0 ---------A   00610  REM     250 IS WHERE I WIN.
    0x56ff93027150 ---------A T 00620  IF R<4.7 THEN 660
    0x56ff930273b0 ---------A   00630  IF R>3.5 THEN 660
    0x56ff930275d0 ---------A T 00640  M=1
    0x56ff93027640 ---------A   00650  GOTO 670
    0x56ff93027850 ---------A T 00660  M=4
    0x56ff93027ba0 ---------A T 00670  T=T-M
    0x56ff93027ef0 ---------A   00680  M1=M1+M
    0x56ff93027f90 ---------A   00690  GOTO 300
    0x56ff93028030 ---------A T 00700  REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x56ff930282a0 ---------A   00710  IF R<1.5 THEN 1020
    0x56ff93028500 ---------A   00720  IF R>5.3 THEN 1020
    0x56ff93028840 ---------A   00730  M=R-1
    0x56ff93028b90 ---------A   00740  M1=M1+M
    0x56ff93028ee0 ---------A   00750  T=T-M
    0x56ff93029140 ---------A   00760  IF T<.2 THEN 790
    0x56ff930291c0 ---------A   00770  REM     IS # ZERO HERE
    0x56ff93029260 ---------A   00780  GOTO 300
    0x56ff930292d0 ---------A T 00790  REM     IS = ZERO HERE
    0x56ff93029bc0 ---------A   00800  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff93029c40 ---------A   00810  PRINT
    0x56ff93029cd0 ---------A   00820  GOTO 880
    0x56ff93029d50 ---------A T 00830  REM    THIS IS WHERE I WIN
    0x56ff9302a640 ---------A   00840  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff9302a6c0 ---------A   00850  PRINT
    0x56ff9302a820 ---------A   00860  PRINT "TOTAL = 0"
    0x56ff9302ab90 ---------A   00870  M1=M1+M
    0x56ff9302acf0 ---------A T 00880  PRINT "THAT IS ALL OF THE MARBLES."
    0x56ff9302ada0 ---------A   00890  PRINT
    0x56ff9302b680 ---------A   00900  PRINT " MY TOTAL IS";M1;CHR$(8);", YOUR TOTAL IS";Y1;CHR$(8);"."
    0x56ff9302b710 ---------A   00910  PRINT
    0x56ff9302bc90 ---------A   00920  IF INT(M1/2)=M1/2 THEN 950
    0x56ff9302be20 ---------A   00930  PRINT "     YOU WON.  DO YOU WANT TO PLAY";
    0x56ff9302bec0 ---------A   00940  GOTO 960
    0x56ff9302c050 ---------A T 00950  PRINT "     I WON.  DO YOU WANT TO PLAY";
    0x56ff9302c270 ---------- T 00960  INPUT " AGAIN";A1$
    0x56ff9302c2d0 ---------- T      a PRINT
    0x56ff9302c360 ---------A T      b PRINT
    0x56ff9302c780 ---------A   00980  IF LEFT$(A1$,1)="N" THEN 1030
    0x56ff9302c9a0 ---------A   00990  M1=0
    0x56ff9302cbb0 ---------A   01000  Y1=0
    0x56ff9302cc20 ---------A   01010  GOTO 200
    0x56ff9302cc90 ---------A T 01020  GOTO 640
    0x56ff9302cd10 ---------A T 01030  PRINT
    0x56ff9302ce70 ---------A   01040  PRINT "OK.  SEE YOU LATER."
    0x56ff9302cef0 ---------A   01050  GOTO 1230
    0x56ff9302d100 ---------A T 01060  T=27
    0x56ff9302d170 ---------A   01070  PRINT
    0x56ff9302d1f0 ---------A   01080  PRINT
    0x56ff9302d270 ---------A   01090  PRINT
    0x56ff9302d4d0 ---------A   01100  PRINT "TOTAL=";T
    0x56ff9302d550 ---------A   01110  PRINT
    0x56ff9302d5e0 ---------A   01120  PRINT
    0x56ff9302d770 ---------A   01130  PRINT "WHAT IS YOUR FIRST MOVE";
    0x56ff9302d8d0 ---------A   01140  INPUT Y
    0x56ff9302d950 ---------A   01150  GOTO 360
    0x56ff9302d9f0 ---------A T 01160  PRINT
    0x56ff9302db80 ---------A   01170  PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x56ff9302dcf0 ---------A   01180  PRINT "INTEGER BETWEEN 1 AND 4."
    0x56ff9302dd90 ---------A   01190  PRINT
    0x56ff9302df00 ---------A   01200  PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x56ff9302df80 ---------A   01210  PRINT
    0x56ff9302e000 ---------A   01220  GOTO 350
    0x56ff9302e070 ---------A T 01230  RUN "MENU"
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/evenwin2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56ff930166d0 ---------A   01000  PRINT CHR$(26);TAB(31);"EVEN WINS"
    0x56ff93016670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56ff930169e0 ---------- T 01020  PRINT
    0x56ff930167f0 ---------A T 01030  PRINT
    0x56ff93017b80 ---------A   01040  Y1=0
    0x56ff93018f30 ---------A   01050  M1=0
    0x56ff930190b0 ---------A T 01060  DIM M(1060),Y(20)
    0x56ff9301e9c0 ---------A   01070  PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x56ff9301eb20 ---------A   01080  PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x56ff9301ec40 ---------A   01090  PRINT "OTHER OBJECTS ON A TABLE."
    0x56ff9301eca0 ---------A   01100  PRINT
    0x56ff9301ed00 ---------A   01110  PRINT 
    0x56ff9301eeb0 ---------A   01120  PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x56ff9301f060 ---------A   01130  PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x56ff9301f200 ---------A   01140  PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x56ff9301f360 ---------A   01150  PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x56ff9301f3c0 ---------A T 01160  PRINT
    0x56ff9301f470 ---------A   01170  PRINT
    0x56ff9301f630 ---------A   01180  PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x56ff9301f7d0 ---------A   01190  PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x56ff9301f8f0 ---------A   01200  PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x56ff9301f950 ---------A   01210  PRINT
    0x56ff9301f9b0 ---------A   01220  PRINT
    0x56ff9301fa60 ---------A T 01230  PRINT
    0x56ff9301fc00 ---------A   01240  PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x56ff9301fd40 ---------A   01250  PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x56ff9301ff60 ---------A   01260  INPUT C
    0x56ff9301ffe0 ---------A   01270  PRINT
    0x56ff93020240 ---------A   01280  IF C=0 THEN 1300
    0x56ff930202c0 ---------A   01290  GOTO 2160
    0x56ff93020590 ---------A   01300  T=27
    0x56ff93020780 ---------A   01310  M=2
    0x56ff930207d0 ----------   01320  PRINT
    0x56ff93020a10 ----------   01330  PRINT "TOTAL=";T
    0x56ff93020a90 ---------A   01340  PRINT
    0x56ff93020df0 ---------A   01350  M1=M1+M
    0x56ff93021390 ---------A   01360  T=T-M
    0x56ff93021da0 ---------A   01370  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff93021fe0 ---------A   01380  IF T=0 THEN 1970
    0x56ff93022040 ----------   01390  PRINT
    0x56ff93022280 ----------   01400  PRINT "TOTAL=";T
    0x56ff93022300 ---------A   01410  PRINT
    0x56ff930223b0 ---------A   01420  PRINT
    0x56ff930228d0 ---------A   01430  PRINT "WHAT IS YOUR NEXT MOVE (MY TOTAL IS";M1;CHR$(8);")";
    0x56ff93022a30 ---------A   01440  INPUT Y
    0x56ff93022ab0 ---------A   01450  PRINT
    0x56ff93022d10 ---------A   01460  IF Y<1 THEN 2260
    0x56ff93022f70 ---------A   01470  IF Y>4 THEN 2260
    0x56ff93023220 ---------A   01480  IF Y<=T THEN 1520
    0x56ff93023390 ---------A   01490  PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x56ff930234f0 ---------A   01500  PRINT "LEFT.  TRY AGAIN."
    0x56ff93023570 ---------A   01510  GOTO 1440
    0x56ff930238c0 ---------A   01520  Y1=Y1+Y
    0x56ff93023c10 ---------A   01530  T=T-Y
    0x56ff93023e60 ---------A   01540  IF T=0 THEN 1970
    0x56ff930240c0 ---------A   01550  PRINT "TOTAL=";T
    0x56ff93024160 ---------A   01560  PRINT
    0x56ff93024680 ---------A   01570  PRINT "YOUR TOTAL IS";Y1;CHR$(8);"."
    0x56ff930248e0 ---------A   01580  IF T<.5 THEN 1970
    0x56ff93024ff0 ---------A   01590  R=T-6*INT(T/6)
    0x56ff93025540 ---------A   01600  IF INT(Y1/2)=Y1/2 THEN 1790
    0x56ff930257a0 ---------A   01610  IF T<4.2 THEN 1670
    0x56ff93025a00 ---------A   01620  IF R>3.4 THEN 1710
    0x56ff93025d40 ---------A   01630  M=R+1
    0x56ff93026090 ---------A   01640  M1=M1+M
    0x56ff930263e0 ---------A   01650  T=T-M
    0x56ff93026450 ---------A   01660  GOTO 1370
    0x56ff93026680 ---------A   01670  M=T
    0x56ff930269d0 ---------A   01680  T=T-M
    0x56ff93026a50 ---------A   01690  GOTO 1920
    0x56ff93026ee0 ---------A   01700  REM     250 IS WHERE I WIN.
    0x56ff93027150 ---------A   01710  IF R<4.7 THEN 1750
    0x56ff930273b0 ---------A   01720  IF R>3.5 THEN 1750
    0x56ff930275d0 ---------A   01730  M=1
    0x56ff93027640 ---------A   01740  GOTO 1760
    0x56ff93027850 ---------A   01750  M=4
    0x56ff93027ba0 ---------A   01760  T=T-M
    0x56ff93027ef0 ---------A   01770  M1=M1+M
    0x56ff93027f90 ---------A   01780  GOTO 1370
    0x56ff93028030 ---------A   01790  REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x56ff930282a0 ---------A   01800  IF R<1.5 THEN 2120
    0x56ff93028500 ---------A   01810  IF R>5.3 THEN 2120
    0x56ff93028840 ---------A   01820  M=R-1
    0x56ff93028b90 ---------A   01830  M1=M1+M
    0x56ff93028ee0 ---------A   01840  T=T-M
    0x56ff93029140 ---------A   01850  IF T<.2 THEN 1880
    0x56ff930291c0 ---------A   01860  REM     IS # ZERO HERE
    0x56ff93029260 ---------A   01870  GOTO 1370
    0x56ff930292d0 ---------A   01880  REM     IS = ZERO HERE
    0x56ff93029bc0 ---------A   01890  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff93029c40 ---------A   01900  PRINT
    0x56ff93029cd0 ---------A   01910  GOTO 1970
    0x56ff93029d50 ---------A   01920  REM    THIS IS WHERE I WIN
    0x56ff9302a640 ---------A   01930  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff9302a6c0 ---------A   01940  PRINT
    0x56ff9302a820 ---------A   01950  PRINT "TOTAL = 0"
    0x56ff9302ab90 ---------A   01960  M1=M1+M
    0x56ff9302acf0 ---------A   01970  PRINT "THAT IS ALL OF THE MARBLES."
    0x56ff9302ada0 ---------A   01980  PRINT
    0x56ff9302b680 ---------A   01990  PRINT " MY TOTAL IS";M1;CHR$(8);", YOUR TOTAL IS";Y1;CHR$(8);"."
    0x56ff9302b710 ---------A   02000  PRINT
    0x56ff9302bc90 ---------A   02010  IF INT(M1/2)=M1/2 THEN 2040
    0x56ff9302be20 ---------A   02020  PRINT "     YOU WON.  DO YOU WANT TO PLAY";
    0x56ff9302bec0 ---------A   02030  GOTO 2070
    0x56ff9302c050 ---------A   02040  PRINT "     I WON.  DO YOU WANT TO PLAY";
    0x56ff9302c270 ----------   02050  INPUT " AGAIN";A1$
    0x56ff9302c2d0 ----------   02060  PRINT
    0x56ff9302c360 ---------A   02070  PRINT
    0x56ff9302c780 ---------A   02080  IF LEFT$(A1$,1)="N" THEN 2130
    0x56ff9302c9a0 ---------A   02090  M1=0
    0x56ff9302cbb0 ---------A   02100  Y1=0
    0x56ff9302cc20 ---------A   02110  GOTO 1240
    0x56ff9302cc90 ---------A   02120  GOTO 1730
    0x56ff9302cd10 ---------A   02130  PRINT
    0x56ff9302ce70 ---------A   02140  PRINT "OK.  SEE YOU LATER."
    0x56ff9302cef0 ---------A   02150  GOTO 2330
    0x56ff9302d100 ---------A   02160  T=27
    0x56ff9302d170 ---------A   02170  PRINT
    0x56ff9302d1f0 ---------A   02180  PRINT
    0x56ff9302d270 ---------A   02190  PRINT
    0x56ff9302d4d0 ---------A   02200  PRINT "TOTAL=";T
    0x56ff9302d550 ---------A   02210  PRINT
    0x56ff9302d5e0 ---------A   02220  PRINT
    0x56ff9302d770 ---------A   02230  PRINT "WHAT IS YOUR FIRST MOVE";
    0x56ff9302d8d0 ---------A   02240  INPUT Y
    0x56ff9302d950 ---------A   02250  GOTO 1450
    0x56ff9302d9f0 ---------A   02260  PRINT
    0x56ff9302db80 ---------A   02270  PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x56ff9302dcf0 ---------A   02280  PRINT "INTEGER BETWEEN 1 AND 4."
    0x56ff9302dd90 ---------A   02290  PRINT
    0x56ff9302df00 ---------A   02300  PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x56ff9302df80 ---------A   02310  PRINT
    0x56ff9302e000 ---------A   02320  GOTO 1440
    0x56ff9302e070 ---------A   02330  RUN "MENU"
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02340 - 10000    7670 

 */



/*
 *  Symbol Table Listing for 'basic/evenwin2.bas'
 *
    A1$                      String      
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
    ELSE                     Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
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
    M               Array    Integer         {0,19} 
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
    PRINT                    Integer     
    R                        Integer     
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
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    Y               Array    Integer         {0,19} 
    Y1                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/evenwin2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56ff930166d0 ---------A   01000  PRINT CHR$(26);TAB(31);"EVEN WINS"
    0x56ff93016670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56ff930169e0 ---------A   01020  PRINT
    0x56ff930167f0 ---------A   01030  PRINT
    0x56ff93017b80 ---------A   01040  Y1=0
    0x56ff93018f30 ---------A   01050  M1=0
    0x56ff930190b0 ---------A   01060  DIM M(1060),Y(20)
    0x56ff9301e9c0 ---------A   01070  PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x56ff9301eb20 ---------A   01080  PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x56ff9301ec40 ---------A   01090  PRINT "OTHER OBJECTS ON A TABLE."
    0x56ff9301eca0 ---------A   01100  PRINT
    0x56ff9301ed00 ---------A   01110  PRINT 
    0x56ff9301eeb0 ---------A   01120  PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x56ff9301f060 ---------A   01130  PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x56ff9301f200 ---------A   01140  PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x56ff9301f360 ---------A   01150  PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x56ff9301f3c0 ---------A   01160  PRINT
    0x56ff9301f470 ---------A   01170  PRINT
    0x56ff9301f630 ---------A   01180  PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x56ff9301f7d0 ---------A   01190  PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x56ff9301f8f0 ---------A   01200  PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x56ff9301f950 ---------A   01210  PRINT
    0x56ff9301f9b0 ---------A   01220  PRINT
    0x56ff9301fa60 ---------A   01230  PRINT
    0x56ff9301fc00 ---------A T 01240  PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x56ff9301fd40 ---------A   01250  PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x56ff9301ff60 ---------A   01260  INPUT C
    0x56ff9301ffe0 ---------A   01270  PRINT
    0x56ff93020240 ---------A   01280  IF C=0 THEN 1300
    0x56ff930202c0 ---------A   01290  GOTO 2160
    0x56ff93020590 ---------A T 01300  T=27
    0x56ff93020780 ---------A   01310  M=2
    0x56ff930207d0 ---------A   01320  PRINT
    0x56ff93020a10 ---------A   01330  PRINT "TOTAL=";T
    0x56ff93020a90 ---------A   01340  PRINT
    0x56ff93020df0 ---------A   01350  M1=M1+M
    0x56ff93021390 ---------A   01360  T=T-M
    0x56ff93021da0 ---------A T 01370  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff93021fe0 ---------A   01380  IF T=0 THEN 1970
    0x56ff93022040 ---------A   01390  PRINT
    0x56ff93022280 ---------A   01400  PRINT "TOTAL=";T
    0x56ff93022300 ---------A   01410  PRINT
    0x56ff930223b0 ---------A   01420  PRINT
    0x56ff930228d0 ---------A   01430  PRINT "WHAT IS YOUR NEXT MOVE (MY TOTAL IS";M1;CHR$(8);")";
    0x56ff93022a30 ---------A T 01440  INPUT Y
    0x56ff93022ab0 ---------A T 01450  PRINT
    0x56ff93022d10 ---------A   01460  IF Y<1 THEN 2260
    0x56ff93022f70 ---------A   01470  IF Y>4 THEN 2260
    0x56ff93023220 ---------A   01480  IF Y<=T THEN 1520
    0x56ff93023390 ---------A   01490  PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x56ff930234f0 ---------A   01500  PRINT "LEFT.  TRY AGAIN."
    0x56ff93023570 ---------A   01510  GOTO 1440
    0x56ff930238c0 ---------A T 01520  Y1=Y1+Y
    0x56ff93023c10 ---------A   01530  T=T-Y
    0x56ff93023e60 ---------A   01540  IF T=0 THEN 1970
    0x56ff930240c0 ---------A   01550  PRINT "TOTAL=";T
    0x56ff93024160 ---------A   01560  PRINT
    0x56ff93024680 ---------A   01570  PRINT "YOUR TOTAL IS";Y1;CHR$(8);"."
    0x56ff930248e0 ---------A   01580  IF T<.5 THEN 1970
    0x56ff93024ff0 ---------A   01590  R=T-6*INT(T/6)
    0x56ff93025540 ---------A   01600  IF INT(Y1/2)=Y1/2 THEN 1790
    0x56ff930257a0 ---------A   01610  IF T<4.2 THEN 1670
    0x56ff93025a00 ---------A   01620  IF R>3.4 THEN 1710
    0x56ff93025d40 ---------A   01630  M=R+1
    0x56ff93026090 ---------A   01640  M1=M1+M
    0x56ff930263e0 ---------A   01650  T=T-M
    0x56ff93026450 ---------A   01660  GOTO 1370
    0x56ff93026680 ---------A T 01670  M=T
    0x56ff930269d0 ---------A   01680  T=T-M
    0x56ff93026a50 ---------A   01690  GOTO 1920
    0x56ff93026ee0 ---------A   01700  REM     250 IS WHERE I WIN.
    0x56ff93027150 ---------A T 01710  IF R<4.7 THEN 1750
    0x56ff930273b0 ---------A   01720  IF R>3.5 THEN 1750
    0x56ff930275d0 ---------A T 01730  M=1
    0x56ff93027640 ---------A   01740  GOTO 1760
    0x56ff93027850 ---------A T 01750  M=4
    0x56ff93027ba0 ---------A T 01760  T=T-M
    0x56ff93027ef0 ---------A   01770  M1=M1+M
    0x56ff93027f90 ---------A   01780  GOTO 1370
    0x56ff93028030 ---------A T 01790  REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x56ff930282a0 ---------A   01800  IF R<1.5 THEN 2120
    0x56ff93028500 ---------A   01810  IF R>5.3 THEN 2120
    0x56ff93028840 ---------A   01820  M=R-1
    0x56ff93028b90 ---------A   01830  M1=M1+M
    0x56ff93028ee0 ---------A   01840  T=T-M
    0x56ff93029140 ---------A   01850  IF T<.2 THEN 1880
    0x56ff930291c0 ---------A   01860  REM     IS # ZERO HERE
    0x56ff93029260 ---------A   01870  GOTO 1370
    0x56ff930292d0 ---------A T 01880  REM     IS = ZERO HERE
    0x56ff93029bc0 ---------A   01890  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff93029c40 ---------A   01900  PRINT
    0x56ff93029cd0 ---------A   01910  GOTO 1970
    0x56ff93029d50 ---------A T 01920  REM    THIS IS WHERE I WIN
    0x56ff9302a640 ---------A   01930  IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    0x56ff9302a6c0 ---------A   01940  PRINT
    0x56ff9302a820 ---------A   01950  PRINT "TOTAL = 0"
    0x56ff9302ab90 ---------A   01960  M1=M1+M
    0x56ff9302acf0 ---------A T 01970  PRINT "THAT IS ALL OF THE MARBLES."
    0x56ff9302ada0 ---------A   01980  PRINT
    0x56ff9302b680 ---------A   01990  PRINT " MY TOTAL IS";M1;CHR$(8);", YOUR TOTAL IS";Y1;CHR$(8);"."
    0x56ff9302b710 ---------A   02000  PRINT
    0x56ff9302bc90 ---------A   02010  IF INT(M1/2)=M1/2 THEN 2040
    0x56ff9302be20 ---------A   02020  PRINT "     YOU WON.  DO YOU WANT TO PLAY";
    0x56ff9302bec0 ---------A   02030  GOTO 2070
    0x56ff9302c050 ---------A T 02040  PRINT "     I WON.  DO YOU WANT TO PLAY";
    0x56ff9302c270 ---------A   02050  INPUT " AGAIN";A1$
    0x56ff9302c2d0 ---------A   02060  PRINT
    0x56ff9302c360 ---------A T 02070  PRINT
    0x56ff9302c780 ---------A   02080  IF LEFT$(A1$,1)="N" THEN 2130
    0x56ff9302c9a0 ---------A   02090  M1=0
    0x56ff9302cbb0 ---------A   02100  Y1=0
    0x56ff9302cc20 ---------A   02110  GOTO 1240
    0x56ff9302cc90 ---------A T 02120  GOTO 1730
    0x56ff9302cd10 ---------A T 02130  PRINT
    0x56ff9302ce70 ---------A   02140  PRINT "OK.  SEE YOU LATER."
    0x56ff9302cef0 ---------A   02150  GOTO 2330
    0x56ff9302d100 ---------A T 02160  T=27
    0x56ff9302d170 ---------A   02170  PRINT
    0x56ff9302d1f0 ---------A   02180  PRINT
    0x56ff9302d270 ---------A   02190  PRINT
    0x56ff9302d4d0 ---------A   02200  PRINT "TOTAL=";T
    0x56ff9302d550 ---------A   02210  PRINT
    0x56ff9302d5e0 ---------A   02220  PRINT
    0x56ff9302d770 ---------A   02230  PRINT "WHAT IS YOUR FIRST MOVE";
    0x56ff9302d8d0 ---------A   02240  INPUT Y
    0x56ff9302d950 ---------A   02250  GOTO 1450
    0x56ff9302d9f0 ---------A T 02260  PRINT
    0x56ff9302db80 ---------A   02270  PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x56ff9302dcf0 ---------A   02280  PRINT "INTEGER BETWEEN 1 AND 4."
    0x56ff9302dd90 ---------A   02290  PRINT
    0x56ff9302df00 ---------A   02300  PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x56ff9302df80 ---------A   02310  PRINT
    0x56ff9302e000 ---------A   02320  GOTO 1440
    0x56ff9302e070 ---------A T 02330  RUN "MENU"
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
char*  A1_str;                                    // Basic: A1$ 
int    C_int;                                     // Basic: C 
int    ELSE_int;                                  // Basic: ELSE 
int    M_int_arr[20];                             // Basic: M 
int    M1_int;                                    // Basic: M1 
int    PRINT_int;                                 // Basic: PRINT 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    Y_int_arr[20];                             // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
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
    // 01000 PRINT CHR$(26);TAB(31);"EVEN WINS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(26));b2c_TAB(buf,31);strcat(buf,"EVEN WINS");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 Y1=0
    Y1_int = 0;
    // 01050 M1=0
    M1_int = 0;
    // 01060 DIM M(1060),Y(20)
    // 01070 PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "OTHER OBJECTS ON A TABLE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OTHER OBJECTS ON A TABLE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IS THE ONE WITH AN EVEN NUMBER OF MARBLES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "AND (3) YOU CANNOT SKIP A TURN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND (3) YOU CANNOT SKIP A TURN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01240:
    // 01240 PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A '0' IF YOU WANT ME TO GO FIRST.");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 INPUT C
    // Start of Basic INPUT statement 01260
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
    }; // End of Basic INPUT statement 01260
    // 01270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01280 IF C=0 THEN 1300
    if(C_int==0)goto Lbl_01300;
    // 01290 GOTO 2160
    goto Lbl_02160;

  Lbl_01300:
    // 01300 T=27
    T_int = 27;
    // 01310 M=2
    M_int_arr[0] = 2;
    // 01320 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT "TOTAL=";T
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL="); b2c_INT(buf,T_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01350 M1=M1+M
    M1_int = M1_int+M_int_arr[0];
    // 01360 T=T-M
    T_int = T_int-M_int_arr[0];

  Lbl_01370:
    // 01370 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    if(M_int_arr[0]==1) {
    }
    // 01380 IF T=0 THEN 1970
    if(T_int==0)goto Lbl_01970;
    // 01390 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01400 PRINT "TOTAL=";T
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL="); b2c_INT(buf,T_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT "WHAT IS YOUR NEXT MOVE (MY TOTAL IS";M1;CHR$(8);")";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR NEXT MOVE (MY TOTAL IS"); b2c_INT(buf,M1_int);strcpy(buf,CHR$(8));strcat(buf,")");fputs(buf,fh); };

  Lbl_01440:
    // 01440 INPUT Y
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
                (err += b2c_strtoi(&Y_int_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01440

  Lbl_01450:
    // 01450 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01460 IF Y<1 THEN 2260
    if(Y_int_arr[0]<1)goto Lbl_02260;
    // 01470 IF Y>4 THEN 2260
    if(Y_int_arr[0]>4)goto Lbl_02260;
    // 01480 IF Y<=T THEN 1520
    if(Y_int_arr[0]<=T_int)goto Lbl_01520;
    // 01490 PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE");strcat(buf,"\n");fputs(buf,fh); };
    // 01500 PRINT "LEFT.  TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LEFT.  TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01510 GOTO 1440
    goto Lbl_01440;

  Lbl_01520:
    // 01520 Y1=Y1+Y
    Y1_int = Y1_int+Y_int_arr[0];
    // 01530 T=T-Y
    T_int = T_int-Y_int_arr[0];
    // 01540 IF T=0 THEN 1970
    if(T_int==0)goto Lbl_01970;
    // 01550 PRINT "TOTAL=";T
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL="); b2c_INT(buf,T_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT "YOUR TOTAL IS";Y1;CHR$(8);"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR TOTAL IS"); b2c_INT(buf,Y1_int);strcpy(buf,CHR$(8));strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01580 IF T<.5 THEN 1970
    if(T_int<0.5)goto Lbl_01970;
    // 01590 R=T-6*INT(T/6)
    R_int = T_int-6*INT(T_int/6);
    // 01600 IF INT(Y1/2)=Y1/2 THEN 1790
    if(INT(Y1_int/2)==Y1_int/2)goto Lbl_01790;
    // 01610 IF T<4.2 THEN 1670
    if(T_int<4.2)goto Lbl_01670;
    // 01620 IF R>3.4 THEN 1710
    if(R_int>3.4)goto Lbl_01710;
    // 01630 M=R+1
    M_int_arr[0] = R_int+1;
    // 01640 M1=M1+M
    M1_int = M1_int+M_int_arr[0];
    // 01650 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01660 GOTO 1370
    goto Lbl_01370;

  Lbl_01670:
    // 01670 M=T
    M_int_arr[0] = T_int;
    // 01680 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01690 GOTO 1920
    goto Lbl_01920;
    // 01700 REM     250 IS WHERE I WIN.

  Lbl_01710:
    // 01710 IF R<4.7 THEN 1750
    if(R_int<4.7)goto Lbl_01750;
    // 01720 IF R>3.5 THEN 1750
    if(R_int>3.5)goto Lbl_01750;

  Lbl_01730:
    // 01730 M=1
    M_int_arr[0] = 1;
    // 01740 GOTO 1760
    goto Lbl_01760;

  Lbl_01750:
    // 01750 M=4
    M_int_arr[0] = 4;

  Lbl_01760:
    // 01760 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01770 M1=M1+M
    M1_int = M1_int+M_int_arr[0];
    // 01780 GOTO 1370
    goto Lbl_01370;

  Lbl_01790:
    // 01790 REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    // 01800 IF R<1.5 THEN 2120
    if(R_int<1.5)goto Lbl_02120;
    // 01810 IF R>5.3 THEN 2120
    if(R_int>5.3)goto Lbl_02120;
    // 01820 M=R-1
    M_int_arr[0] = R_int-1;
    // 01830 M1=M1+M
    M1_int = M1_int+M_int_arr[0];
    // 01840 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01850 IF T<.2 THEN 1880
    if(T_int<0.2)goto Lbl_01880;
    // 01860 REM     IS # ZERO HERE
    // 01870 GOTO 1370
    goto Lbl_01370;

  Lbl_01880:
    // 01880 REM     IS = ZERO HERE
    // 01890 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    if(M_int_arr[0]==1) {
    }
    // 01900 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01910 GOTO 1970
    goto Lbl_01970;

  Lbl_01920:
    // 01920 REM    THIS IS WHERE I WIN
    // 01930 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    if(M_int_arr[0]==1) {
    }
    // 01940 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01950 PRINT "TOTAL = 0"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL = 0");strcat(buf,"\n");fputs(buf,fh); };
    // 01960 M1=M1+M
    M1_int = M1_int+M_int_arr[0];

  Lbl_01970:
    // 01970 PRINT "THAT IS ALL OF THE MARBLES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT IS ALL OF THE MARBLES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01980 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01990 PRINT " MY TOTAL IS";M1;CHR$(8);", YOUR TOTAL IS";Y1;CHR$(8);"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," MY TOTAL IS"); b2c_INT(buf,M1_int);strcpy(buf,CHR$(8));strcat(buf,", YOUR TOTAL IS"); b2c_INT(buf,Y1_int);strcpy(buf,CHR$(8));strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 02000 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02010 IF INT(M1/2)=M1/2 THEN 2040
    if(INT(M1_int/2)==M1_int/2)goto Lbl_02040;
    // 02020 PRINT "     YOU WON.  DO YOU WANT TO PLAY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     YOU WON.  DO YOU WANT TO PLAY");fputs(buf,fh); };
    // 02030 GOTO 2070
    goto Lbl_02070;

  Lbl_02040:
    // 02040 PRINT "     I WON.  DO YOU WANT TO PLAY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     I WON.  DO YOU WANT TO PLAY");fputs(buf,fh); };
    // 02050 INPUT " AGAIN";A1$
    // Start of Basic INPUT statement 02050
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," AGAIN");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A1_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02050
    // 02060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02070:
    // 02070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02080 IF LEFT$(A1$,1)="N" THEN 2130
    if(LEFT$(A1_str,1)=='N')goto Lbl_02130;
    // 02090 M1=0
    M1_int = 0;
    // 02100 Y1=0
    Y1_int = 0;
    // 02110 GOTO 1240
    goto Lbl_01240;

  Lbl_02120:
    // 02120 GOTO 1730
    goto Lbl_01730;

  Lbl_02130:
    // 02130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02140 PRINT "OK.  SEE YOU LATER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OK.  SEE YOU LATER.");strcat(buf,"\n");fputs(buf,fh); };
    // 02150 GOTO 2330
    goto Lbl_02330;

  Lbl_02160:
    // 02160 T=27
    T_int = 27;
    // 02170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02180 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02200 PRINT "TOTAL=";T
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL="); b2c_INT(buf,T_int);strcat(buf,"\n");fputs(buf,fh); };
    // 02210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02230 PRINT "WHAT IS YOUR FIRST MOVE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR FIRST MOVE");fputs(buf,fh); };
    // 02240 INPUT Y
    // Start of Basic INPUT statement 02240
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Y_int_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02240
    // 02250 GOTO 1450
    goto Lbl_01450;

  Lbl_02260:
    // 02260 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02270 PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE");strcat(buf,"\n");fputs(buf,fh); };
    // 02280 PRINT "INTEGER BETWEEN 1 AND 4."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INTEGER BETWEEN 1 AND 4.");strcat(buf,"\n");fputs(buf,fh); };
    // 02290 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02300 PRINT "     WHAT IS YOUR NEXT MOVE?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     WHAT IS YOUR NEXT MOVE?");strcat(buf,"\n");fputs(buf,fh); };
    // 02310 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02320 GOTO 1440
    goto Lbl_01440;

  Lbl_02330:
    // 02330 RUN "MENU"
    system("MENU");
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
