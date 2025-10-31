/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/evenwin1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b1d16d366d0 ---------A   00001  PRINT TAB(31);"EVEN WINS"
    0x5b1d16d36670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b1d16d369e0 ---------A   00003  PRINT:PRINT
    0x5b1d16d37b80 ---------A   00004  Y1=0
    0x5b1d16d38f30 ---------A   00010  M1=0
    0x5b1d16d390b0 ---------A   00020  DIM M(20),Y(20)
    0x5b1d16d3e8a0 ---------A   00030  PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x5b1d16d3e9c0 ---------A   00040  PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x5b1d16d3eae0 ---------A   00050  PRINT "OTHER OBJECTS ON A TABLE."
    0x5b1d16d3eb40 ---------A   00060  PRINT
    0x5b1d16d3eba0 ---------A   00070  PRINT 
    0x5b1d16d3ed50 ---------A   00080  PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x5b1d16d3ef00 ---------A   00090  PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x5b1d16d3f0a0 ---------A   00100  PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x5b1d16d3f200 ---------A   00110  PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x5b1d16d3f260 ---------A   00120  PRINT
    0x5b1d16d3f310 ---------A   00130  PRINT
    0x5b1d16d3f4d0 ---------A   00140  PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x5b1d16d3f670 ---------A   00150  PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x5b1d16d3f790 ---------A   00160  PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x5b1d16d3f7f0 ---------A   00170  PRINT
    0x5b1d16d3f850 ---------A   00180  PRINT
    0x5b1d16d3f900 ---------A   00190  PRINT
    0x5b1d16d3faa0 ---------A T 00200  PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x5b1d16d3fbc0 ---------A   00210  PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x5b1d16d3fd80 ---------A   00220  INPUT C
    0x5b1d16d3fe00 ---------A   00225  PRINT
    0x5b1d16d40060 ---------A   00230  IF C=0 THEN 250
    0x5b1d16d400e0 ---------A   00240  GOTO 1060
    0x5b1d16d403b0 ---------A T 00250  T=27
    0x5b1d16d405a0 ---------A   00260  M=2
    0x5b1d16d408b0 ---------A   00270  PRINT:PRINT "TOTAL=";T:PRINT
    0x5b1d16d40c10 ---------A   00280  M1=M1+M
    0x5b1d16d41150 ---------A   00290  T=T-M
    0x5b1d16d414a0 ---------A T 00300  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d416e0 ---------A   00310  IF T=0 THEN 880
    0x5b1d16d419a0 ---------A   00320  PRINT:PRINT "TOTAL=";T
    0x5b1d16d41a50 ---------A   00330  PRINT
    0x5b1d16d41cd0 ---------A   00340  PRINT "     AND WHAT IS YOUR NEXT MOVE, MY TOTAL IS";M1
    0x5b1d16d41e30 ---------A T 00350  INPUT Y
    0x5b1d16d41eb0 ---------A T 00360  PRINT
    0x5b1d16d42110 ---------A   00370  IF Y<1 THEN 1160
    0x5b1d16d42370 ---------A   00380  IF Y>4 THEN 1160
    0x5b1d16d42620 ---------A   00390  IF Y<=T THEN 430
    0x5b1d16d42790 ---------A   00400  PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x5b1d16d428f0 ---------A   00410  PRINT "LEFT.  TRY AGAIN."
    0x5b1d16d42970 ---------A   00420  GOTO 350
    0x5b1d16d42cc0 ---------A T 00430  Y1=Y1+Y
    0x5b1d16d43010 ---------A   00440  T=T-Y
    0x5b1d16d43260 ---------A   00450  IF T=0 THEN 880
    0x5b1d16d434c0 ---------A   00460  PRINT "TOTAL=";T
    0x5b1d16d43550 ---------A   00470  PRINT
    0x5b1d16d437b0 ---------A   00480  PRINT "YOUR TOTAL IS";Y1
    0x5b1d16d43a10 ---------A   00490  IF T<.5 THEN 880
    0x5b1d16d44120 ---------A   00500  R=T-6*INT(T/6)
    0x5b1d16d44670 ---------A   00510  IF INT(Y1/2)=Y1/2 THEN 700
    0x5b1d16d448d0 ---------A   00520  IF T<4.2 THEN 580
    0x5b1d16d44b30 ---------A   00530  IF R>3.4 THEN 620
    0x5b1d16d44e70 ---------A   00540  M=R+1
    0x5b1d16d451c0 ---------A   00550  M1=M1+M
    0x5b1d16d45510 ---------A   00560  T=T-M
    0x5b1d16d45580 ---------A   00570  GOTO 300
    0x5b1d16d457b0 ---------A T 00580  M=T
    0x5b1d16d45b00 ---------A   00590  T=T-M
    0x5b1d16d45b80 ---------A   00600  GOTO 830
    0x5b1d16d46010 ---------A   00610  REM     250 IS WHERE I WIN.
    0x5b1d16d46280 ---------A T 00620  IF R<4.7 THEN 660
    0x5b1d16d464e0 ---------A   00630  IF R>3.5 THEN 660
    0x5b1d16d46700 ---------A T 00640  M=1
    0x5b1d16d46770 ---------A   00650  GOTO 670
    0x5b1d16d46980 ---------A T 00660  M=4
    0x5b1d16d46cd0 ---------A T 00670  T=T-M
    0x5b1d16d47020 ---------A   00680  M1=M1+M
    0x5b1d16d470c0 ---------A   00690  GOTO 300
    0x5b1d16d47160 ---------A T 00700  REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x5b1d16d473d0 ---------A   00710  IF R<1.5 THEN 1020
    0x5b1d16d47630 ---------A   00720  IF R>5.3 THEN 1020
    0x5b1d16d47970 ---------A   00730  M=R-1
    0x5b1d16d47cc0 ---------A   00740  M1=M1+M
    0x5b1d16d48010 ---------A   00750  T=T-M
    0x5b1d16d48270 ---------A   00760  IF T<.2 THEN 790
    0x5b1d16d482f0 ---------A   00770  REM     IS # ZERO HERE
    0x5b1d16d48390 ---------A   00780  GOTO 300
    0x5b1d16d48400 ---------A T 00790  REM     IS = ZERO HERE
    0x5b1d16d48780 ---------A   00800  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d48800 ---------A   00810  PRINT
    0x5b1d16d48890 ---------A   00820  GOTO 880
    0x5b1d16d48910 ---------A T 00830  REM    THIS IS WHERE I WIN
    0x5b1d16d48c90 ---------A   00840  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d48d10 ---------A   00850  PRINT
    0x5b1d16d48e70 ---------A   00860  PRINT "TOTAL = 0"
    0x5b1d16d491e0 ---------A   00870  M1=M1+M
    0x5b1d16d49340 ---------A T 00880  PRINT "THAT IS ALL OF THE MARBLES."
    0x5b1d16d493e0 ---------A   00890  PRINT
    0x5b1d16d49840 ---------A   00900  PRINT " MY TOTAL IS";M1;", YOUR TOTAL IS";Y1
    0x5b1d16d498d0 ---------A   00910  PRINT
    0x5b1d16d49e50 ---------A   00920  IF INT(M1/2)=M1/2 THEN 950
    0x5b1d16d49fc0 ---------A   00930  PRINT "     YOU WON.  DO YOU WANT TO PLAY"
    0x5b1d16d4a060 ---------A   00940  GOTO 960
    0x5b1d16d4a1e0 ---------A T 00950  PRINT "     I WON.  DO YOU WANT TO PLAY"
    0x5b1d16d4a350 ---------A T 00960  PRINT "AGAIN?  TYPE 1 FOR YES AND 0 FOR NO."
    0x5b1d16d4a570 ---------A   00970  INPUT A1
    0x5b1d16d4a7d0 ---------A   00980  IF A1=0 THEN 1030
    0x5b1d16d4a9f0 ---------A   00990  M1=0
    0x5b1d16d4ac00 ---------A   01000  Y1=0
    0x5b1d16d4ac70 ---------A   01010  GOTO 200
    0x5b1d16d4ace0 ---------A T 01020  GOTO 640
    0x5b1d16d4ad60 ---------A T 01030  PRINT
    0x5b1d16d4aec0 ---------A   01040  PRINT "OK.  SEE YOU LATER."
    0x5b1d16d4af40 ---------A   01050  GOTO 1230
    0x5b1d16d4b150 ---------A T 01060  T=27
    0x5b1d16d4b1c0 ---------A   01070  PRINT
    0x5b1d16d4b240 ---------A   01080  PRINT
    0x5b1d16d4b2c0 ---------A   01090  PRINT
    0x5b1d16d4b520 ---------A   01100  PRINT "TOTAL=";T
    0x5b1d16d4b5a0 ---------A   01110  PRINT
    0x5b1d16d4b630 ---------A   01120  PRINT
    0x5b1d16d4b7c0 ---------A   01130  PRINT "WHAT IS YOUR FIRST MOVE";
    0x5b1d16d4b920 ---------A   01140  INPUT Y
    0x5b1d16d4b9a0 ---------A   01150  GOTO 360
    0x5b1d16d4ba40 ---------A T 01160  PRINT
    0x5b1d16d4bbd0 ---------A   01170  PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x5b1d16d4bd40 ---------A   01180  PRINT "INTEGER BETWEEN 1 AND 4."
    0x5b1d16d4bde0 ---------A   01190  PRINT
    0x5b1d16d4bf50 ---------A   01200  PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x5b1d16d4bfd0 ---------A   01210  PRINT
    0x5b1d16d4c050 ---------A   01220  GOTO 350
    0x5b1d16d4c0a0 ---------A T 01230  END
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
   A) 0x5b1d16d366d0 (00001)   0x5b1d16d366d0 (00001)   0x5b1d16d4c0a0 (01230)   0x5b1d16d4c0a0 (01230)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/evenwin1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b1d16d366d0 ---------A   00001  PRINT TAB(31);"EVEN WINS"
    0x5b1d16d36670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b1d16d272b0 ----------   00003  PRINT
    0x5b1d16d369e0 ---------A        a PRINT
    0x5b1d16d37b80 ---------A   00004  Y1=0
    0x5b1d16d38f30 ---------A   00010  M1=0
    0x5b1d16d390b0 ---------A   00020  DIM M(20),Y(20)
    0x5b1d16d3e8a0 ---------A   00030  PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x5b1d16d3e9c0 ---------A   00040  PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x5b1d16d3eae0 ---------A   00050  PRINT "OTHER OBJECTS ON A TABLE."
    0x5b1d16d3eb40 ---------A   00060  PRINT
    0x5b1d16d3eba0 ---------A   00070  PRINT 
    0x5b1d16d3ed50 ---------A   00080  PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x5b1d16d3ef00 ---------A   00090  PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x5b1d16d3f0a0 ---------A   00100  PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x5b1d16d3f200 ---------A   00110  PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x5b1d16d3f260 ---------A   00120  PRINT
    0x5b1d16d3f310 ---------A   00130  PRINT
    0x5b1d16d3f4d0 ---------A   00140  PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x5b1d16d3f670 ---------A   00150  PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x5b1d16d3f790 ---------A   00160  PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x5b1d16d3f7f0 ---------A   00170  PRINT
    0x5b1d16d3f850 ---------A   00180  PRINT
    0x5b1d16d3f900 ---------A   00190  PRINT
    0x5b1d16d3faa0 ---------A T 00200  PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x5b1d16d3fbc0 ---------A   00210  PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x5b1d16d3fd80 ---------A   00220  INPUT C
    0x5b1d16d3fe00 ---------A   00225  PRINT
    0x5b1d16d40060 ---------A   00230  IF C=0 THEN 250
    0x5b1d16d400e0 ---------A   00240  GOTO 1060
    0x5b1d16d403b0 ---------A T 00250  T=27
    0x5b1d16d405a0 ---------A   00260  M=2
    0x5b1d16d405f0 ----------   00270  PRINT
    0x5b1d16d40830 ----------        a PRINT "TOTAL=";T
    0x5b1d16d408b0 ---------A        b PRINT
    0x5b1d16d40c10 ---------A   00280  M1=M1+M
    0x5b1d16d41150 ---------A   00290  T=T-M
    0x5b1d16d414a0 ---------A T 00300  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d416e0 ---------A   00310  IF T=0 THEN 880
    0x5b1d16d41740 ----------   00320  PRINT
    0x5b1d16d419a0 ---------A        a PRINT "TOTAL=";T
    0x5b1d16d41a50 ---------A   00330  PRINT
    0x5b1d16d41cd0 ---------A   00340  PRINT "     AND WHAT IS YOUR NEXT MOVE, MY TOTAL IS";M1
    0x5b1d16d41e30 ---------A T 00350  INPUT Y
    0x5b1d16d41eb0 ---------A T 00360  PRINT
    0x5b1d16d42110 ---------A   00370  IF Y<1 THEN 1160
    0x5b1d16d42370 ---------A   00380  IF Y>4 THEN 1160
    0x5b1d16d42620 ---------A   00390  IF Y<=T THEN 430
    0x5b1d16d42790 ---------A   00400  PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x5b1d16d428f0 ---------A   00410  PRINT "LEFT.  TRY AGAIN."
    0x5b1d16d42970 ---------A   00420  GOTO 350
    0x5b1d16d42cc0 ---------A T 00430  Y1=Y1+Y
    0x5b1d16d43010 ---------A   00440  T=T-Y
    0x5b1d16d43260 ---------A   00450  IF T=0 THEN 880
    0x5b1d16d434c0 ---------A   00460  PRINT "TOTAL=";T
    0x5b1d16d43550 ---------A   00470  PRINT
    0x5b1d16d437b0 ---------A   00480  PRINT "YOUR TOTAL IS";Y1
    0x5b1d16d43a10 ---------A   00490  IF T<.5 THEN 880
    0x5b1d16d44120 ---------A   00500  R=T-6*INT(T/6)
    0x5b1d16d44670 ---------A   00510  IF INT(Y1/2)=Y1/2 THEN 700
    0x5b1d16d448d0 ---------A   00520  IF T<4.2 THEN 580
    0x5b1d16d44b30 ---------A   00530  IF R>3.4 THEN 620
    0x5b1d16d44e70 ---------A   00540  M=R+1
    0x5b1d16d451c0 ---------A   00550  M1=M1+M
    0x5b1d16d45510 ---------A   00560  T=T-M
    0x5b1d16d45580 ---------A   00570  GOTO 300
    0x5b1d16d457b0 ---------A T 00580  M=T
    0x5b1d16d45b00 ---------A   00590  T=T-M
    0x5b1d16d45b80 ---------A   00600  GOTO 830
    0x5b1d16d46010 ---------A   00610  REM     250 IS WHERE I WIN.
    0x5b1d16d46280 ---------A T 00620  IF R<4.7 THEN 660
    0x5b1d16d464e0 ---------A   00630  IF R>3.5 THEN 660
    0x5b1d16d46700 ---------A T 00640  M=1
    0x5b1d16d46770 ---------A   00650  GOTO 670
    0x5b1d16d46980 ---------A T 00660  M=4
    0x5b1d16d46cd0 ---------A T 00670  T=T-M
    0x5b1d16d47020 ---------A   00680  M1=M1+M
    0x5b1d16d470c0 ---------A   00690  GOTO 300
    0x5b1d16d47160 ---------A T 00700  REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x5b1d16d473d0 ---------A   00710  IF R<1.5 THEN 1020
    0x5b1d16d47630 ---------A   00720  IF R>5.3 THEN 1020
    0x5b1d16d47970 ---------A   00730  M=R-1
    0x5b1d16d47cc0 ---------A   00740  M1=M1+M
    0x5b1d16d48010 ---------A   00750  T=T-M
    0x5b1d16d48270 ---------A   00760  IF T<.2 THEN 790
    0x5b1d16d482f0 ---------A   00770  REM     IS # ZERO HERE
    0x5b1d16d48390 ---------A   00780  GOTO 300
    0x5b1d16d48400 ---------A T 00790  REM     IS = ZERO HERE
    0x5b1d16d48780 ---------A   00800  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d48800 ---------A   00810  PRINT
    0x5b1d16d48890 ---------A   00820  GOTO 880
    0x5b1d16d48910 ---------A T 00830  REM    THIS IS WHERE I WIN
    0x5b1d16d48c90 ---------A   00840  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d48d10 ---------A   00850  PRINT
    0x5b1d16d48e70 ---------A   00860  PRINT "TOTAL = 0"
    0x5b1d16d491e0 ---------A   00870  M1=M1+M
    0x5b1d16d49340 ---------A T 00880  PRINT "THAT IS ALL OF THE MARBLES."
    0x5b1d16d493e0 ---------A   00890  PRINT
    0x5b1d16d49840 ---------A   00900  PRINT " MY TOTAL IS";M1;", YOUR TOTAL IS";Y1
    0x5b1d16d498d0 ---------A   00910  PRINT
    0x5b1d16d49e50 ---------A   00920  IF INT(M1/2)=M1/2 THEN 950
    0x5b1d16d49fc0 ---------A   00930  PRINT "     YOU WON.  DO YOU WANT TO PLAY"
    0x5b1d16d4a060 ---------A   00940  GOTO 960
    0x5b1d16d4a1e0 ---------A T 00950  PRINT "     I WON.  DO YOU WANT TO PLAY"
    0x5b1d16d4a350 ---------A T 00960  PRINT "AGAIN?  TYPE 1 FOR YES AND 0 FOR NO."
    0x5b1d16d4a570 ---------A   00970  INPUT A1
    0x5b1d16d4a7d0 ---------A   00980  IF A1=0 THEN 1030
    0x5b1d16d4a9f0 ---------A   00990  M1=0
    0x5b1d16d4ac00 ---------A   01000  Y1=0
    0x5b1d16d4ac70 ---------A   01010  GOTO 200
    0x5b1d16d4ace0 ---------A T 01020  GOTO 640
    0x5b1d16d4ad60 ---------A T 01030  PRINT
    0x5b1d16d4aec0 ---------A   01040  PRINT "OK.  SEE YOU LATER."
    0x5b1d16d4af40 ---------A   01050  GOTO 1230
    0x5b1d16d4b150 ---------A T 01060  T=27
    0x5b1d16d4b1c0 ---------A   01070  PRINT
    0x5b1d16d4b240 ---------A   01080  PRINT
    0x5b1d16d4b2c0 ---------A   01090  PRINT
    0x5b1d16d4b520 ---------A   01100  PRINT "TOTAL=";T
    0x5b1d16d4b5a0 ---------A   01110  PRINT
    0x5b1d16d4b630 ---------A   01120  PRINT
    0x5b1d16d4b7c0 ---------A   01130  PRINT "WHAT IS YOUR FIRST MOVE";
    0x5b1d16d4b920 ---------A   01140  INPUT Y
    0x5b1d16d4b9a0 ---------A   01150  GOTO 360
    0x5b1d16d4ba40 ---------A T 01160  PRINT
    0x5b1d16d4bbd0 ---------A   01170  PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x5b1d16d4bd40 ---------A   01180  PRINT "INTEGER BETWEEN 1 AND 4."
    0x5b1d16d4bde0 ---------A   01190  PRINT
    0x5b1d16d4bf50 ---------A   01200  PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x5b1d16d4bfd0 ---------A   01210  PRINT
    0x5b1d16d4c050 ---------A   01220  GOTO 350
    0x5b1d16d4c0a0 ---------A T 01230  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/evenwin1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b1d16d366d0 ---------A   01000  PRINT TAB(31);"EVEN WINS"
    0x5b1d16d36670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b1d16d272b0 ---------- T 01020  PRINT
    0x5b1d16d369e0 ---------A T 01030  PRINT
    0x5b1d16d37b80 ---------A   01040  Y1=0
    0x5b1d16d38f30 ---------A   01050  M1=0
    0x5b1d16d390b0 ---------A T 01060  DIM M(1060),Y(20)
    0x5b1d16d3e8a0 ---------A   01070  PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x5b1d16d3e9c0 ---------A   01080  PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x5b1d16d3eae0 ---------A   01090  PRINT "OTHER OBJECTS ON A TABLE."
    0x5b1d16d3eb40 ---------A   01100  PRINT
    0x5b1d16d3eba0 ---------A   01110  PRINT 
    0x5b1d16d3ed50 ---------A   01120  PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x5b1d16d3ef00 ---------A   01130  PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x5b1d16d3f0a0 ---------A   01140  PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x5b1d16d3f200 ---------A   01150  PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x5b1d16d3f260 ---------A T 01160  PRINT
    0x5b1d16d3f310 ---------A   01170  PRINT
    0x5b1d16d3f4d0 ---------A   01180  PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x5b1d16d3f670 ---------A   01190  PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x5b1d16d3f790 ---------A   01200  PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x5b1d16d3f7f0 ---------A   01210  PRINT
    0x5b1d16d3f850 ---------A   01220  PRINT
    0x5b1d16d3f900 ---------A T 01230  PRINT
    0x5b1d16d3faa0 ---------A   01240  PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x5b1d16d3fbc0 ---------A   01250  PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x5b1d16d3fd80 ---------A   01260  INPUT C
    0x5b1d16d3fe00 ---------A   01270  PRINT
    0x5b1d16d40060 ---------A   01280  IF C=0 THEN 1300
    0x5b1d16d400e0 ---------A   01290  GOTO 2140
    0x5b1d16d403b0 ---------A   01300  T=27
    0x5b1d16d405a0 ---------A   01310  M=2
    0x5b1d16d405f0 ----------   01320  PRINT
    0x5b1d16d40830 ----------   01330  PRINT "TOTAL=";T
    0x5b1d16d408b0 ---------A   01340  PRINT
    0x5b1d16d40c10 ---------A   01350  M1=M1+M
    0x5b1d16d41150 ---------A   01360  T=T-M
    0x5b1d16d414a0 ---------A   01370  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d416e0 ---------A   01380  IF T=0 THEN 1960
    0x5b1d16d41740 ----------   01390  PRINT
    0x5b1d16d419a0 ---------A   01400  PRINT "TOTAL=";T
    0x5b1d16d41a50 ---------A   01410  PRINT
    0x5b1d16d41cd0 ---------A   01420  PRINT "     AND WHAT IS YOUR NEXT MOVE, MY TOTAL IS";M1
    0x5b1d16d41e30 ---------A   01430  INPUT Y
    0x5b1d16d41eb0 ---------A   01440  PRINT
    0x5b1d16d42110 ---------A   01450  IF Y<1 THEN 2240
    0x5b1d16d42370 ---------A   01460  IF Y>4 THEN 2240
    0x5b1d16d42620 ---------A   01470  IF Y<=T THEN 1510
    0x5b1d16d42790 ---------A   01480  PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x5b1d16d428f0 ---------A   01490  PRINT "LEFT.  TRY AGAIN."
    0x5b1d16d42970 ---------A   01500  GOTO 1430
    0x5b1d16d42cc0 ---------A   01510  Y1=Y1+Y
    0x5b1d16d43010 ---------A   01520  T=T-Y
    0x5b1d16d43260 ---------A   01530  IF T=0 THEN 1960
    0x5b1d16d434c0 ---------A   01540  PRINT "TOTAL=";T
    0x5b1d16d43550 ---------A   01550  PRINT
    0x5b1d16d437b0 ---------A   01560  PRINT "YOUR TOTAL IS";Y1
    0x5b1d16d43a10 ---------A   01570  IF T<.5 THEN 1960
    0x5b1d16d44120 ---------A   01580  R=T-6*INT(T/6)
    0x5b1d16d44670 ---------A   01590  IF INT(Y1/2)=Y1/2 THEN 1780
    0x5b1d16d448d0 ---------A   01600  IF T<4.2 THEN 1660
    0x5b1d16d44b30 ---------A   01610  IF R>3.4 THEN 1700
    0x5b1d16d44e70 ---------A   01620  M=R+1
    0x5b1d16d451c0 ---------A   01630  M1=M1+M
    0x5b1d16d45510 ---------A   01640  T=T-M
    0x5b1d16d45580 ---------A   01650  GOTO 1370
    0x5b1d16d457b0 ---------A   01660  M=T
    0x5b1d16d45b00 ---------A   01670  T=T-M
    0x5b1d16d45b80 ---------A   01680  GOTO 1910
    0x5b1d16d46010 ---------A   01690  REM     250 IS WHERE I WIN.
    0x5b1d16d46280 ---------A   01700  IF R<4.7 THEN 1740
    0x5b1d16d464e0 ---------A   01710  IF R>3.5 THEN 1740
    0x5b1d16d46700 ---------A   01720  M=1
    0x5b1d16d46770 ---------A   01730  GOTO 1750
    0x5b1d16d46980 ---------A   01740  M=4
    0x5b1d16d46cd0 ---------A   01750  T=T-M
    0x5b1d16d47020 ---------A   01760  M1=M1+M
    0x5b1d16d470c0 ---------A   01770  GOTO 1370
    0x5b1d16d47160 ---------A   01780  REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x5b1d16d473d0 ---------A   01790  IF R<1.5 THEN 2100
    0x5b1d16d47630 ---------A   01800  IF R>5.3 THEN 2100
    0x5b1d16d47970 ---------A   01810  M=R-1
    0x5b1d16d47cc0 ---------A   01820  M1=M1+M
    0x5b1d16d48010 ---------A   01830  T=T-M
    0x5b1d16d48270 ---------A   01840  IF T<.2 THEN 1870
    0x5b1d16d482f0 ---------A   01850  REM     IS # ZERO HERE
    0x5b1d16d48390 ---------A   01860  GOTO 1370
    0x5b1d16d48400 ---------A   01870  REM     IS = ZERO HERE
    0x5b1d16d48780 ---------A   01880  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d48800 ---------A   01890  PRINT
    0x5b1d16d48890 ---------A   01900  GOTO 1960
    0x5b1d16d48910 ---------A   01910  REM    THIS IS WHERE I WIN
    0x5b1d16d48c90 ---------A   01920  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d48d10 ---------A   01930  PRINT
    0x5b1d16d48e70 ---------A   01940  PRINT "TOTAL = 0"
    0x5b1d16d491e0 ---------A   01950  M1=M1+M
    0x5b1d16d49340 ---------A   01960  PRINT "THAT IS ALL OF THE MARBLES."
    0x5b1d16d493e0 ---------A   01970  PRINT
    0x5b1d16d49840 ---------A   01980  PRINT " MY TOTAL IS";M1;", YOUR TOTAL IS";Y1
    0x5b1d16d498d0 ---------A   01990  PRINT
    0x5b1d16d49e50 ---------A   02000  IF INT(M1/2)=M1/2 THEN 2030
    0x5b1d16d49fc0 ---------A   02010  PRINT "     YOU WON.  DO YOU WANT TO PLAY"
    0x5b1d16d4a060 ---------A   02020  GOTO 2040
    0x5b1d16d4a1e0 ---------A   02030  PRINT "     I WON.  DO YOU WANT TO PLAY"
    0x5b1d16d4a350 ---------A   02040  PRINT "AGAIN?  TYPE 1 FOR YES AND 0 FOR NO."
    0x5b1d16d4a570 ---------A   02050  INPUT A1
    0x5b1d16d4a7d0 ---------A   02060  IF A1=0 THEN 2110
    0x5b1d16d4a9f0 ---------A   02070  M1=0
    0x5b1d16d4ac00 ---------A   02080  Y1=0
    0x5b1d16d4ac70 ---------A   02090  GOTO 1240
    0x5b1d16d4ace0 ---------A   02100  GOTO 1720
    0x5b1d16d4ad60 ---------A   02110  PRINT
    0x5b1d16d4aec0 ---------A   02120  PRINT "OK.  SEE YOU LATER."
    0x5b1d16d4af40 ---------A   02130  GOTO 2310
    0x5b1d16d4b150 ---------A   02140  T=27
    0x5b1d16d4b1c0 ---------A   02150  PRINT
    0x5b1d16d4b240 ---------A   02160  PRINT
    0x5b1d16d4b2c0 ---------A   02170  PRINT
    0x5b1d16d4b520 ---------A   02180  PRINT "TOTAL=";T
    0x5b1d16d4b5a0 ---------A   02190  PRINT
    0x5b1d16d4b630 ---------A   02200  PRINT
    0x5b1d16d4b7c0 ---------A   02210  PRINT "WHAT IS YOUR FIRST MOVE";
    0x5b1d16d4b920 ---------A   02220  INPUT Y
    0x5b1d16d4b9a0 ---------A   02230  GOTO 1440
    0x5b1d16d4ba40 ---------A   02240  PRINT
    0x5b1d16d4bbd0 ---------A   02250  PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x5b1d16d4bd40 ---------A   02260  PRINT "INTEGER BETWEEN 1 AND 4."
    0x5b1d16d4bde0 ---------A   02270  PRINT
    0x5b1d16d4bf50 ---------A   02280  PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x5b1d16d4bfd0 ---------A   02290  PRINT
    0x5b1d16d4c050 ---------A   02300  GOTO 1430
    0x5b1d16d4c0a0 ---------A   02310  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02320 - 10000    7690 

 */



/*
 *  Symbol Table Listing for 'basic/evenwin1.bas'
 *
    A1                       Integer     
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
 *  Listing of basic/evenwin1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b1d16d366d0 ---------A   01000  PRINT TAB(31);"EVEN WINS"
    0x5b1d16d36670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b1d16d272b0 ---------A   01020  PRINT
    0x5b1d16d369e0 ---------A   01030  PRINT
    0x5b1d16d37b80 ---------A   01040  Y1=0
    0x5b1d16d38f30 ---------A   01050  M1=0
    0x5b1d16d390b0 ---------A   01060  DIM M(1060),Y(20)
    0x5b1d16d3e8a0 ---------A   01070  PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    0x5b1d16d3e9c0 ---------A   01080  PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    0x5b1d16d3eae0 ---------A   01090  PRINT "OTHER OBJECTS ON A TABLE."
    0x5b1d16d3eb40 ---------A   01100  PRINT
    0x5b1d16d3eba0 ---------A   01110  PRINT 
    0x5b1d16d3ed50 ---------A   01120  PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    0x5b1d16d3ef00 ---------A   01130  PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    0x5b1d16d3f0a0 ---------A   01140  PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    0x5b1d16d3f200 ---------A   01150  PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    0x5b1d16d3f260 ---------A   01160  PRINT
    0x5b1d16d3f310 ---------A   01170  PRINT
    0x5b1d16d3f4d0 ---------A   01180  PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    0x5b1d16d3f670 ---------A   01190  PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    0x5b1d16d3f790 ---------A   01200  PRINT "AND (3) YOU CANNOT SKIP A TURN."
    0x5b1d16d3f7f0 ---------A   01210  PRINT
    0x5b1d16d3f850 ---------A   01220  PRINT
    0x5b1d16d3f900 ---------A   01230  PRINT
    0x5b1d16d3faa0 ---------A T 01240  PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    0x5b1d16d3fbc0 ---------A   01250  PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    0x5b1d16d3fd80 ---------A   01260  INPUT C
    0x5b1d16d3fe00 ---------A   01270  PRINT
    0x5b1d16d40060 ---------A   01280  IF C=0 THEN 1300
    0x5b1d16d400e0 ---------A   01290  GOTO 2140
    0x5b1d16d403b0 ---------A T 01300  T=27
    0x5b1d16d405a0 ---------A   01310  M=2
    0x5b1d16d405f0 ---------A   01320  PRINT
    0x5b1d16d40830 ---------A   01330  PRINT "TOTAL=";T
    0x5b1d16d408b0 ---------A   01340  PRINT
    0x5b1d16d40c10 ---------A   01350  M1=M1+M
    0x5b1d16d41150 ---------A   01360  T=T-M
    0x5b1d16d414a0 ---------A T 01370  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d416e0 ---------A   01380  IF T=0 THEN 1960
    0x5b1d16d41740 ---------A   01390  PRINT
    0x5b1d16d419a0 ---------A   01400  PRINT "TOTAL=";T
    0x5b1d16d41a50 ---------A   01410  PRINT
    0x5b1d16d41cd0 ---------A   01420  PRINT "     AND WHAT IS YOUR NEXT MOVE, MY TOTAL IS";M1
    0x5b1d16d41e30 ---------A T 01430  INPUT Y
    0x5b1d16d41eb0 ---------A T 01440  PRINT
    0x5b1d16d42110 ---------A   01450  IF Y<1 THEN 2240
    0x5b1d16d42370 ---------A   01460  IF Y>4 THEN 2240
    0x5b1d16d42620 ---------A   01470  IF Y<=T THEN 1510
    0x5b1d16d42790 ---------A   01480  PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    0x5b1d16d428f0 ---------A   01490  PRINT "LEFT.  TRY AGAIN."
    0x5b1d16d42970 ---------A   01500  GOTO 1430
    0x5b1d16d42cc0 ---------A T 01510  Y1=Y1+Y
    0x5b1d16d43010 ---------A   01520  T=T-Y
    0x5b1d16d43260 ---------A   01530  IF T=0 THEN 1960
    0x5b1d16d434c0 ---------A   01540  PRINT "TOTAL=";T
    0x5b1d16d43550 ---------A   01550  PRINT
    0x5b1d16d437b0 ---------A   01560  PRINT "YOUR TOTAL IS";Y1
    0x5b1d16d43a10 ---------A   01570  IF T<.5 THEN 1960
    0x5b1d16d44120 ---------A   01580  R=T-6*INT(T/6)
    0x5b1d16d44670 ---------A   01590  IF INT(Y1/2)=Y1/2 THEN 1780
    0x5b1d16d448d0 ---------A   01600  IF T<4.2 THEN 1660
    0x5b1d16d44b30 ---------A   01610  IF R>3.4 THEN 1700
    0x5b1d16d44e70 ---------A   01620  M=R+1
    0x5b1d16d451c0 ---------A   01630  M1=M1+M
    0x5b1d16d45510 ---------A   01640  T=T-M
    0x5b1d16d45580 ---------A   01650  GOTO 1370
    0x5b1d16d457b0 ---------A T 01660  M=T
    0x5b1d16d45b00 ---------A   01670  T=T-M
    0x5b1d16d45b80 ---------A   01680  GOTO 1910
    0x5b1d16d46010 ---------A   01690  REM     250 IS WHERE I WIN.
    0x5b1d16d46280 ---------A T 01700  IF R<4.7 THEN 1740
    0x5b1d16d464e0 ---------A   01710  IF R>3.5 THEN 1740
    0x5b1d16d46700 ---------A T 01720  M=1
    0x5b1d16d46770 ---------A   01730  GOTO 1750
    0x5b1d16d46980 ---------A T 01740  M=4
    0x5b1d16d46cd0 ---------A T 01750  T=T-M
    0x5b1d16d47020 ---------A   01760  M1=M1+M
    0x5b1d16d470c0 ---------A   01770  GOTO 1370
    0x5b1d16d47160 ---------A T 01780  REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    0x5b1d16d473d0 ---------A   01790  IF R<1.5 THEN 2100
    0x5b1d16d47630 ---------A   01800  IF R>5.3 THEN 2100
    0x5b1d16d47970 ---------A   01810  M=R-1
    0x5b1d16d47cc0 ---------A   01820  M1=M1+M
    0x5b1d16d48010 ---------A   01830  T=T-M
    0x5b1d16d48270 ---------A   01840  IF T<.2 THEN 1870
    0x5b1d16d482f0 ---------A   01850  REM     IS # ZERO HERE
    0x5b1d16d48390 ---------A   01860  GOTO 1370
    0x5b1d16d48400 ---------A T 01870  REM     IS = ZERO HERE
    0x5b1d16d48780 ---------A   01880  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d48800 ---------A   01890  PRINT
    0x5b1d16d48890 ---------A   01900  GOTO 1960
    0x5b1d16d48910 ---------A T 01910  REM    THIS IS WHERE I WIN
    0x5b1d16d48c90 ---------A   01920  PRINT "I PICK UP";M;"MARBLES."
    0x5b1d16d48d10 ---------A   01930  PRINT
    0x5b1d16d48e70 ---------A   01940  PRINT "TOTAL = 0"
    0x5b1d16d491e0 ---------A   01950  M1=M1+M
    0x5b1d16d49340 ---------A T 01960  PRINT "THAT IS ALL OF THE MARBLES."
    0x5b1d16d493e0 ---------A   01970  PRINT
    0x5b1d16d49840 ---------A   01980  PRINT " MY TOTAL IS";M1;", YOUR TOTAL IS";Y1
    0x5b1d16d498d0 ---------A   01990  PRINT
    0x5b1d16d49e50 ---------A   02000  IF INT(M1/2)=M1/2 THEN 2030
    0x5b1d16d49fc0 ---------A   02010  PRINT "     YOU WON.  DO YOU WANT TO PLAY"
    0x5b1d16d4a060 ---------A   02020  GOTO 2040
    0x5b1d16d4a1e0 ---------A T 02030  PRINT "     I WON.  DO YOU WANT TO PLAY"
    0x5b1d16d4a350 ---------A T 02040  PRINT "AGAIN?  TYPE 1 FOR YES AND 0 FOR NO."
    0x5b1d16d4a570 ---------A   02050  INPUT A1
    0x5b1d16d4a7d0 ---------A   02060  IF A1=0 THEN 2110
    0x5b1d16d4a9f0 ---------A   02070  M1=0
    0x5b1d16d4ac00 ---------A   02080  Y1=0
    0x5b1d16d4ac70 ---------A   02090  GOTO 1240
    0x5b1d16d4ace0 ---------A T 02100  GOTO 1720
    0x5b1d16d4ad60 ---------A T 02110  PRINT
    0x5b1d16d4aec0 ---------A   02120  PRINT "OK.  SEE YOU LATER."
    0x5b1d16d4af40 ---------A   02130  GOTO 2310
    0x5b1d16d4b150 ---------A T 02140  T=27
    0x5b1d16d4b1c0 ---------A   02150  PRINT
    0x5b1d16d4b240 ---------A   02160  PRINT
    0x5b1d16d4b2c0 ---------A   02170  PRINT
    0x5b1d16d4b520 ---------A   02180  PRINT "TOTAL=";T
    0x5b1d16d4b5a0 ---------A   02190  PRINT
    0x5b1d16d4b630 ---------A   02200  PRINT
    0x5b1d16d4b7c0 ---------A   02210  PRINT "WHAT IS YOUR FIRST MOVE";
    0x5b1d16d4b920 ---------A   02220  INPUT Y
    0x5b1d16d4b9a0 ---------A   02230  GOTO 1440
    0x5b1d16d4ba40 ---------A T 02240  PRINT
    0x5b1d16d4bbd0 ---------A   02250  PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    0x5b1d16d4bd40 ---------A   02260  PRINT "INTEGER BETWEEN 1 AND 4."
    0x5b1d16d4bde0 ---------A   02270  PRINT
    0x5b1d16d4bf50 ---------A   02280  PRINT "     WHAT IS YOUR NEXT MOVE?"
    0x5b1d16d4bfd0 ---------A   02290  PRINT
    0x5b1d16d4c050 ---------A   02300  GOTO 1430
    0x5b1d16d4c0a0 ---------A T 02310  END
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
int    A1_int;                                    // Basic: A1 
int    C_int;                                     // Basic: C 
int    M_int_arr[20];                             // Basic: M 
int    M1_int;                                    // Basic: M1 
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
    // 01000 PRINT TAB(31);"EVEN WINS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,31);strcat(buf,"EVEN WINS");strcat(buf,"\n");fputs(buf,fh); };
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
    // 01290 GOTO 2140
    goto Lbl_02140;

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
    // 01370 PRINT "I PICK UP";M;"MARBLES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I PICK UP"); b2c_INT(buf,M_int_arr[0]);strcat(buf,"MARBLES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 IF T=0 THEN 1960
    if(T_int==0)goto Lbl_01960;
    // 01390 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01400 PRINT "TOTAL=";T
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL="); b2c_INT(buf,T_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT "     AND WHAT IS YOUR NEXT MOVE, MY TOTAL IS";M1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     AND WHAT IS YOUR NEXT MOVE, MY TOTAL IS"); b2c_INT(buf,M1_int);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01430:
    // 01430 INPUT Y
    // Start of Basic INPUT statement 01430
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
    }; // End of Basic INPUT statement 01430

  Lbl_01440:
    // 01440 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01450 IF Y<1 THEN 2240
    if(Y_int_arr[0]<1)goto Lbl_02240;
    // 01460 IF Y>4 THEN 2240
    if(Y_int_arr[0]>4)goto Lbl_02240;
    // 01470 IF Y<=T THEN 1510
    if(Y_int_arr[0]<=T_int)goto Lbl_01510;
    // 01480 PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 PRINT "LEFT.  TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LEFT.  TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01500 GOTO 1430
    goto Lbl_01430;

  Lbl_01510:
    // 01510 Y1=Y1+Y
    Y1_int = Y1_int+Y_int_arr[0];
    // 01520 T=T-Y
    T_int = T_int-Y_int_arr[0];
    // 01530 IF T=0 THEN 1960
    if(T_int==0)goto Lbl_01960;
    // 01540 PRINT "TOTAL=";T
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL="); b2c_INT(buf,T_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01560 PRINT "YOUR TOTAL IS";Y1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR TOTAL IS"); b2c_INT(buf,Y1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 IF T<.5 THEN 1960
    if(T_int<0.5)goto Lbl_01960;
    // 01580 R=T-6*INT(T/6)
    R_int = T_int-6*INT(T_int/6);
    // 01590 IF INT(Y1/2)=Y1/2 THEN 1780
    if(INT(Y1_int/2)==Y1_int/2)goto Lbl_01780;
    // 01600 IF T<4.2 THEN 1660
    if(T_int<4.2)goto Lbl_01660;
    // 01610 IF R>3.4 THEN 1700
    if(R_int>3.4)goto Lbl_01700;
    // 01620 M=R+1
    M_int_arr[0] = R_int+1;
    // 01630 M1=M1+M
    M1_int = M1_int+M_int_arr[0];
    // 01640 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01650 GOTO 1370
    goto Lbl_01370;

  Lbl_01660:
    // 01660 M=T
    M_int_arr[0] = T_int;
    // 01670 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01680 GOTO 1910
    goto Lbl_01910;
    // 01690 REM     250 IS WHERE I WIN.

  Lbl_01700:
    // 01700 IF R<4.7 THEN 1740
    if(R_int<4.7)goto Lbl_01740;
    // 01710 IF R>3.5 THEN 1740
    if(R_int>3.5)goto Lbl_01740;

  Lbl_01720:
    // 01720 M=1
    M_int_arr[0] = 1;
    // 01730 GOTO 1750
    goto Lbl_01750;

  Lbl_01740:
    // 01740 M=4
    M_int_arr[0] = 4;

  Lbl_01750:
    // 01750 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01760 M1=M1+M
    M1_int = M1_int+M_int_arr[0];
    // 01770 GOTO 1370
    goto Lbl_01370;

  Lbl_01780:
    // 01780 REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN
    // 01790 IF R<1.5 THEN 2100
    if(R_int<1.5)goto Lbl_02100;
    // 01800 IF R>5.3 THEN 2100
    if(R_int>5.3)goto Lbl_02100;
    // 01810 M=R-1
    M_int_arr[0] = R_int-1;
    // 01820 M1=M1+M
    M1_int = M1_int+M_int_arr[0];
    // 01830 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01840 IF T<.2 THEN 1870
    if(T_int<0.2)goto Lbl_01870;
    // 01850 REM     IS # ZERO HERE
    // 01860 GOTO 1370
    goto Lbl_01370;

  Lbl_01870:
    // 01870 REM     IS = ZERO HERE
    // 01880 PRINT "I PICK UP";M;"MARBLES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I PICK UP"); b2c_INT(buf,M_int_arr[0]);strcat(buf,"MARBLES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01890 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01900 GOTO 1960
    goto Lbl_01960;

  Lbl_01910:
    // 01910 REM    THIS IS WHERE I WIN
    // 01920 PRINT "I PICK UP";M;"MARBLES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I PICK UP"); b2c_INT(buf,M_int_arr[0]);strcat(buf,"MARBLES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01930 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01940 PRINT "TOTAL = 0"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL = 0");strcat(buf,"\n");fputs(buf,fh); };
    // 01950 M1=M1+M
    M1_int = M1_int+M_int_arr[0];

  Lbl_01960:
    // 01960 PRINT "THAT IS ALL OF THE MARBLES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT IS ALL OF THE MARBLES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01970 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01980 PRINT " MY TOTAL IS";M1;", YOUR TOTAL IS";Y1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," MY TOTAL IS"); b2c_INT(buf,M1_int);strcat(buf,", YOUR TOTAL IS"); b2c_INT(buf,Y1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01990 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02000 IF INT(M1/2)=M1/2 THEN 2030
    if(INT(M1_int/2)==M1_int/2)goto Lbl_02030;
    // 02010 PRINT "     YOU WON.  DO YOU WANT TO PLAY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     YOU WON.  DO YOU WANT TO PLAY");strcat(buf,"\n");fputs(buf,fh); };
    // 02020 GOTO 2040
    goto Lbl_02040;

  Lbl_02030:
    // 02030 PRINT "     I WON.  DO YOU WANT TO PLAY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     I WON.  DO YOU WANT TO PLAY");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02040:
    // 02040 PRINT "AGAIN?  TYPE 1 FOR YES AND 0 FOR NO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AGAIN?  TYPE 1 FOR YES AND 0 FOR NO.");strcat(buf,"\n");fputs(buf,fh); };
    // 02050 INPUT A1
    // Start of Basic INPUT statement 02050
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02050
    // 02060 IF A1=0 THEN 2110
    if(A1_int==0)goto Lbl_02110;
    // 02070 M1=0
    M1_int = 0;
    // 02080 Y1=0
    Y1_int = 0;
    // 02090 GOTO 1240
    goto Lbl_01240;

  Lbl_02100:
    // 02100 GOTO 1720
    goto Lbl_01720;

  Lbl_02110:
    // 02110 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02120 PRINT "OK.  SEE YOU LATER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OK.  SEE YOU LATER.");strcat(buf,"\n");fputs(buf,fh); };
    // 02130 GOTO 2310
    goto Lbl_02310;

  Lbl_02140:
    // 02140 T=27
    T_int = 27;
    // 02150 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02160 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02180 PRINT "TOTAL=";T
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL="); b2c_INT(buf,T_int);strcat(buf,"\n");fputs(buf,fh); };
    // 02190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02200 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02210 PRINT "WHAT IS YOUR FIRST MOVE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR FIRST MOVE");fputs(buf,fh); };
    // 02220 INPUT Y
    // Start of Basic INPUT statement 02220
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
    }; // End of Basic INPUT statement 02220
    // 02230 GOTO 1440
    goto Lbl_01440;

  Lbl_02240:
    // 02240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02250 PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE");strcat(buf,"\n");fputs(buf,fh); };
    // 02260 PRINT "INTEGER BETWEEN 1 AND 4."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INTEGER BETWEEN 1 AND 4.");strcat(buf,"\n");fputs(buf,fh); };
    // 02270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02280 PRINT "     WHAT IS YOUR NEXT MOVE?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     WHAT IS YOUR NEXT MOVE?");strcat(buf,"\n");fputs(buf,fh); };
    // 02290 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02300 GOTO 1430
    goto Lbl_01430;

  Lbl_02310:
    // 02310 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
