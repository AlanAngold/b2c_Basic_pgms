/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/cowboy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f2d2805edb0 ---------A   01000  RANDOMIZE
    0x5f2d2805c6d0 ---------A   01010  PRINT TAB(26);"CORRAL"
    0x5f2d2805c670 ---------A   01020  PRINT TAB(20);"CREATIVE COMPUTING"
    0x5f2d2805e5e0 ---------A   01030  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5f2d2805c9e0 ---------A   01040  PRINT
    0x5f2d2805eaa0 ---------A   01050  PRINT
    0x5f2d2805d040 ---------A   01060  PRINT
    0x5f2d2805ef30 ---------A   01070  DIM A(21)
    0x5f2d2805ee70 ---------A   01080  DIM S(2,9)
    0x5f2d280648a0 ---------A   01090  FOR I=1 TO 2
    0x5f2d28064ba0 ---------A   01100      FOR J=0 TO 9
    0x5f2d2805db80 ---------A   01110          READ S(I,J)
    0x5f2d2805eff0 ---------A   01120      NEXT J
    0x5f2d2805f0b0 ---------A   01130  NEXT I
    0x5f2d28065920 ---------A   01140  DATA 0,1,2,3,3,2,2,1,0,-1
    0x5f2d28066280 ---------A   01150  DATA 1,2,3,4,5,4,3,2,1,0
    0x5f2d28066420 ---------A   01160  PRINT "  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"
    0x5f2d28066580 ---------A   01170  PRINT "DO YOU WANT FULL INSTRUCTIONS";
    0x5f2d280667b0 ---------A   01180  INPUT F$
    0x5f2d28066c00 ---------A   01190  IF LEFT$(F$,1)="N" THEN 1260
    0x5f2d28066db0 ---------A   01200  PRINT "YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."
    0x5f2d28066f60 ---------A   01210  PRINT "IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"
    0x5f2d28067110 ---------A   01220  PRINT "HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"
    0x5f2d280672d0 ---------A   01230  PRINT "WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"
    0x5f2d28067460 ---------A   01240  PRINT "IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"
    0x5f2d28067510 ---------A   01250  PRINT
    0x5f2d280676a0 ---------A T 01260  PRINT "AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"
    0x5f2d28067980 ---------A T 01270  C=1
    0x5f2d28067c50 ---------A   01280  L=1
    0x5f2d28067f20 ---------A   01290  K=0
    0x5f2d280681f0 ---------A   01300  M=0
    0x5f2d280684c0 ---------A   01310  N=0
    0x5f2d280689a0 ---------A   01320  D9=RND(1)+1.5
    0x5f2d28069230 ---------A   01330  PRINT "LEVEL OF DIFFICULTY (0-10) :"10-INT((D9-1.5)*10)
    0x5f2d280692b0 ---------A   01340  GOSUB 2120
    0x5f2d280695c0 ---------A   01350  IF R<=5 THEN 1370
    0x5f2d280698c0 ---------A   01360  Q=-Q
    0x5f2d28069cb0 ---------A T 01370  H=13+Q
    0x5f2d28069d20 ---------A   01380  GOSUB 2170
    0x5f2d2806a1d0 ---------A   01390  T=2+P
    0x5f2d2806a240 ---------A   01400  PRINT
    0x5f2d2806a540 ---------A T 01410  B$="            "
    0x5f2d2806a810 ---------A T 01420  FOR J=1 TO 21
    0x5f2d2806ab10 ---------A   01430      A(J)=32
    0x5f2d2806ac40 ---------A   01440  NEXTJ
    0x5f2d2806af50 ---------A   01450  A(C)=67
    0x5f2d2806b240 ---------A   01460  A(H)=72
    0x5f2d2806b4b0 ---------A   01470  PRINT N,"I";
    0x5f2d2806b7a0 ---------A   01480  FOR J=1 TO 21
    0x5f2d2806bae0 ---------A   01490      PRINT CHR$(A(J));
    0x5f2d2806bc20 ---------A   01500  NEXT J
    0x5f2d2806beb0 ---------A   01510  PRINT "I",B$;
    0x5f2d2806c3b0 ---------A   01520  X=ABS(H-C)
    0x5f2d2806c7e0 ---------A   01530  L=SGN(H-C)
    0x5f2d2806cb10 ---------A   01540  N=N+1
    0x5f2d2806cd40 ---------A   01550  IF K>0 GOTO 2030
    0x5f2d2806cfa0 ---------A T 01560  IF N>100 GOTO 2410
    0x5f2d2806d1e0 ---------A   01570  INPUT D$
    0x5f2d2806d4c0 ---------A   01580  CHANGE D$ TO Z
    0x5f2d2806d700 ---------A   01590  DIM Z(10)
    0x5f2d2806dbb0 ---------A   01600  D=Z(1)-48
    0x5f2d2806de00 ---------A   01610  IF D>0 THEN 1630
    0x5f2d2806de80 ---------A   01620  GOTO1640
    0x5f2d2806e0b0 ---------A T 01630  IF D<6 GOTO 1670
    0x5f2d2806e340 ---------A T 01640  IF D=0 THEN 2370
    0x5f2d2806e8e0 ---------A   01650  PRINT "ILLEGAL MOVE .TRY AGAIN",
    0x5f2d2806e960 ---------A   01660  GOTO 1560
    0x5f2d2806ee90 ---------A T 01670  E=C+L*D
    0x5f2d2806f0e0 ---------A   01680  IF E<1 THEN 1640
    0x5f2d2806f340 ---------A   01690  IF E>21 THEN 1640
    0x5f2d2806f580 ---------A   01700  C=E
    0x5f2d2806f5f0 ---------A   01710  GOSUB 2120
    0x5f2d2806f8e0 ---------A   01720  G=P
    0x5f2d2806fd50 ---------A   01730  H=H+L*G
    0x5f2d2806fdc0 ---------A   01740  GOSUB 2170
    0x5f2d28070130 ---------A   01750  IF X<2*D THEN 1770
    0x5f2d280701b0 ---------A   01760  GOTO 1780
    0x5f2d280703e0 ---------A T 01770  IF D>1 GOTO 1840
    0x5f2d28070660 ---------A T 01780  IF H>1 THEN 1800
    0x5f2d280706e0 ---------A   01790  GOTO 1810
    0x5f2d28070930 ---------A T 01800  IF H<20 THEN 1930
    0x5f2d280709b0 ---------A T 01810  GOSUB 2120
    0x5f2d28070be0 ---------A   01820  IF R>2 GOTO 1930
    0x5f2d28070e40 ---------A   01830  IF X>7 GOTO 1410
    0x5f2d280712a0 ---------A T 01840  G=9+2*G
    0x5f2d28071710 ---------A   01850  H=H-L*G
    0x5f2d28071940 ---------A   01860  L=-L
    0x5f2d280719c0 ---------A   01870  GOSUB 2170
    0x5f2d28071e10 ---------A   01880  IF ABS(H-C)>1 THEN 1910
    0x5f2d28072270 ---------A   01890  H=H-3*L
    0x5f2d280722e0 ---------A   01900  GOSUB 2170
    0x5f2d28072510 ---------A T 01910  B$="BOLTED      "
    0x5f2d28072590 ---------A   01920  GOTO 1420
    0x5f2d280729c0 ---------A T 01930  IF ABS(H-C)>2 GOTO 1410
    0x5f2d28072a60 ---------A   01940  GOSUB 2120
    0x5f2d28072d70 ---------A   01950  IF R1>D9 GOTO 2100
    0x5f2d28072e10 ---------A   01960  GOSUB 2120
    0x5f2d28073140 ---------A   01970  K=P+2
    0x5f2d28073470 ---------A   01980  M=M+1
    0x5f2d280738c0 ---------A   01990  H=H-5*L
    0x5f2d28073930 ---------A   02000  GOSUB 2170
    0x5f2d28073b60 ---------A   02010  B$="KICKED"
    0x5f2d28073bd0 ---------A   02020  GOTO 1420
    0x5f2d28073e20 ---------A T 02030  IF M>T GOTO 2220
    0x5f2d28074180 ---------A   02040  K=K-1
    0x5f2d280741f0 ---------A   02050  PRINT
    0x5f2d28074270 ---------A   02060  GOSUB 2120
    0x5f2d28074820 ---------A   02070  H=H+L*(P+1)
    0x5f2d28074890 ---------A   02080  GOSUB 2170
    0x5f2d28074900 ---------A   02090  GOTO1410
    0x5f2d28074b70 ---------A T 02100  IF H=C THEN 2260
    0x5f2d28074bf0 ---------A   02110  GOTO 1410
    0x5f2d28075120 ---------B G 02120  R1=(8*RND(1)+1)
    0x5f2d28075430 ---------B   02130  R=INT(R1)
    0x5f2d28075800 ---------B   02140  P=S(1,R)
    0x5f2d28075bd0 ---------B   02150  Q=S(2,R)
    0x5f2d28075c20 ---------B   02160  RETURN
    0x5f2d28075e80 ---------C G 02170  IF H>=1 THEN 2190
    0x5f2d280760a0 ---------C   02180  H=1
    0x5f2d280762f0 ---------C T 02190  IF H<=21 THEN 2210
    0x5f2d28076510 ---------C   02200  H=21
    0x5f2d28076560 ---------C T 02210  RETURN
    0x5f2d28076600 ---------A T 02220  PRINT 
    0x5f2d28076790 ---------A   02230  PRINT "THOSE KICKS LANDED YOU IN THE HOSPITAL!"
    0x5f2d280768f0 ---------A   02240  PRINT " GET WELL SOON!!"
    0x5f2d28076970 ---------A   02250  GOTO 2370
    0x5f2d28076c40 ---------A T 02260  FOR J=1 TO 21
    0x5f2d28076f40 ---------A   02270      A(J)=32
    0x5f2d28077070 ---------A   02280  NEXT J
    0x5f2d28077b90 ---------A   02290  A(C)=35
    0x5f2d28077d00 ---------A   02300  PRINT "I";
    0x5f2d28077ff0 ---------A   02310  FOR J=1 TO 21
    0x5f2d28078330 ---------A   02320      PRINT CHR$(A(J));
    0x5f2d28078470 ---------A   02330  NEXT J
    0x5f2d280785e0 ---------A   02340  PRINT "I"
    0x5f2d28078690 ---------A   02350  PRINT
    0x5f2d28078820 ---------A   02360  PRINT "YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"
    0x5f2d280789a0 ---------A T 02370  PRINT "ANOTHER ROUNDUP";
    0x5f2d28078b10 ---------A   02380  INPUT F$
    0x5f2d28078f30 ---------A   02390  IF LEFT$(F$,1)="Y" THEN 1270
    0x5f2d28078fb0 ---------A   02400  GOTO 2440
    0x5f2d28079040 ---------A T 02410  PRINT 
    0x5f2d280791c0 ---------A   02420  PRINT "ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"
    0x5f2d28079240 ---------A   02430  GOTO 2370
    0x5f2d28079290 ---------A T 02440  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01260      01190T
     01270      02390T
     01370      01350T
     01410      01830T, 01930T, 02090T, 02110T
     01420      01920T, 02020T
     01560      01660T
     01630      01610T
     01640      01620T, 01680T, 01690T
     01670      01630T
     01770      01750T
     01780      01760T
     01800      01780T
     01810      01790T
     01840      01770T
     01910      01880T
     01930      01800T, 01820T
     02030      01550T
     02100      01950T
     02120      01340G, 01710G, 01810G, 01940G, 01960G, 02060G
     02170      01380G, 01740G, 01870G, 01900G, 02000G, 02080G
     02190      02170T
     02210      02190T
     02220      02030T
     02260      02100T
     02370      01640T, 02250T, 02430T
     02410      01560T
     02440      02400T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5f2d2805edb0 (01000)   0x5f2d2805edb0 (01000)   0x5f2d28079290 (02440)   0x5f2d28079290 (02440)   
   B) 0x5f2d28075120 (02120)   0x5f2d28075120 (02120)   0x5f2d28075c20 (02160)   0x5f2d28075c20 (02160)   
   C) 0x5f2d28075e80 (02170)   0x5f2d28075e80 (02170)   0x5f2d28076560 (02210)   0x5f2d28076560 (02210)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/cowboy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f2d2805edb0 ---------A   01000  RANDOMIZE
    0x5f2d2805c6d0 ---------A   01010  PRINT TAB(26);"CORRAL"
    0x5f2d2805c670 ---------A   01020  PRINT TAB(20);"CREATIVE COMPUTING"
    0x5f2d2805e5e0 ---------A   01030  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5f2d2805c9e0 ---------A   01040  PRINT
    0x5f2d2805eaa0 ---------A   01050  PRINT
    0x5f2d2805d040 ---------A   01060  PRINT
    0x5f2d2805ef30 ---------A   01070  DIM A(21)
    0x5f2d2805ee70 ---------A   01080  DIM S(2,9)
    0x5f2d280648a0 ---------A   01090  FOR I=1 TO 2
    0x5f2d28064ba0 ---------A   01100  FOR J=0 TO 9
    0x5f2d2805db80 ---------A   01110  READ S(I,J)
    0x5f2d2805eff0 ---------A   01120  NEXT J
    0x5f2d2805f0b0 ---------A   01130  NEXT I
    0x5f2d28065920 ---------A   01140  DATA 0,1,2,3,3,2,2,1,0,-1
    0x5f2d28066280 ---------A   01150  DATA 1,2,3,4,5,4,3,2,1,0
    0x5f2d28066420 ---------A   01160  PRINT "  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"
    0x5f2d28066580 ---------A   01170  PRINT "DO YOU WANT FULL INSTRUCTIONS";
    0x5f2d280667b0 ---------A   01180  INPUT F$
    0x5f2d28066c00 ---------A   01190  IF LEFT$(F$,1)="N" THEN 1260
    0x5f2d28066db0 ---------A   01200  PRINT "YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."
    0x5f2d28066f60 ---------A   01210  PRINT "IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"
    0x5f2d28067110 ---------A   01220  PRINT "HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"
    0x5f2d280672d0 ---------A   01230  PRINT "WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"
    0x5f2d28067460 ---------A   01240  PRINT "IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"
    0x5f2d28067510 ---------A   01250  PRINT
    0x5f2d280676a0 ---------A T 01260  PRINT "AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"
    0x5f2d28067980 ---------A T 01270  C=1
    0x5f2d28067c50 ---------A   01280  L=1
    0x5f2d28067f20 ---------A   01290  K=0
    0x5f2d280681f0 ---------A   01300  M=0
    0x5f2d280684c0 ---------A   01310  N=0
    0x5f2d280689a0 ---------A   01320  D9=RND(1)+1.5
    0x5f2d28069230 ---------A   01330  PRINT "LEVEL OF DIFFICULTY (0-10) :"10-INT((D9-1.5)*10)
    0x5f2d280692b0 ---------A   01340  GOSUB 2120
    0x5f2d280695c0 ---------A   01350  IF R<=5 THEN 1370
    0x5f2d280698c0 ---------A   01360  Q=-Q
    0x5f2d28069cb0 ---------A T 01370  H=13+Q
    0x5f2d28069d20 ---------A   01380  GOSUB 2170
    0x5f2d2806a1d0 ---------A   01390  T=2+P
    0x5f2d2806a240 ---------A   01400  PRINT
    0x5f2d2806a540 ---------A T 01410  B$="            "
    0x5f2d2806a810 ---------A T 01420  FOR J=1 TO 21
    0x5f2d2806ab10 ---------A   01430  A(J)=32
    0x5f2d2806ac40 ---------A   01440  NEXTJ
    0x5f2d2806af50 ---------A   01450  A(C)=67
    0x5f2d2806b240 ---------A   01460  A(H)=72
    0x5f2d2806b4b0 ---------A   01470  PRINT N,"I";
    0x5f2d2806b7a0 ---------A   01480  FOR J=1 TO 21
    0x5f2d2806bae0 ---------A   01490  PRINT CHR$(A(J));
    0x5f2d2806bc20 ---------A   01500  NEXT J
    0x5f2d2806beb0 ---------A   01510  PRINT "I",B$;
    0x5f2d2806c3b0 ---------A   01520  X=ABS(H-C)
    0x5f2d2806c7e0 ---------A   01530  L=SGN(H-C)
    0x5f2d2806cb10 ---------A   01540  N=N+1
    0x5f2d2806cd40 ---------A   01550  IF K>0 GOTO 2030
    0x5f2d2806cfa0 ---------A T 01560  IF N>100 GOTO 2410
    0x5f2d2806d1e0 ---------A   01570  INPUT D$
    0x5f2d2806d4c0 ---------A   01580  CHANGE D$ TO Z
    0x5f2d2806d700 ---------A   01590  DIM Z(10)
    0x5f2d2806dbb0 ---------A   01600  D=Z(1)-48
    0x5f2d2806de00 ---------A   01610  IF D>0 THEN 1630
    0x5f2d2806de80 ---------A   01620  GOTO1640
    0x5f2d2806e0b0 ---------A T 01630  IF D<6 GOTO 1670
    0x5f2d2806e340 ---------A T 01640  IF D=0 THEN 2370
    0x5f2d2806e8e0 ---------A   01650  PRINT "ILLEGAL MOVE .TRY AGAIN",
    0x5f2d2806e960 ---------A   01660  GOTO 1560
    0x5f2d2806ee90 ---------A T 01670  E=C+L*D
    0x5f2d2806f0e0 ---------A   01680  IF E<1 THEN 1640
    0x5f2d2806f340 ---------A   01690  IF E>21 THEN 1640
    0x5f2d2806f580 ---------A   01700  C=E
    0x5f2d2806f5f0 ---------A   01710  GOSUB 2120
    0x5f2d2806f8e0 ---------A   01720  G=P
    0x5f2d2806fd50 ---------A   01730  H=H+L*G
    0x5f2d2806fdc0 ---------A   01740  GOSUB 2170
    0x5f2d28070130 ---------A   01750  IF X<2*D THEN 1770
    0x5f2d280701b0 ---------A   01760  GOTO 1780
    0x5f2d280703e0 ---------A T 01770  IF D>1 GOTO 1840
    0x5f2d28070660 ---------A T 01780  IF H>1 THEN 1800
    0x5f2d280706e0 ---------A   01790  GOTO 1810
    0x5f2d28070930 ---------A T 01800  IF H<20 THEN 1930
    0x5f2d280709b0 ---------A T 01810  GOSUB 2120
    0x5f2d28070be0 ---------A   01820  IF R>2 GOTO 1930
    0x5f2d28070e40 ---------A   01830  IF X>7 GOTO 1410
    0x5f2d280712a0 ---------A T 01840  G=9+2*G
    0x5f2d28071710 ---------A   01850  H=H-L*G
    0x5f2d28071940 ---------A   01860  L=-L
    0x5f2d280719c0 ---------A   01870  GOSUB 2170
    0x5f2d28071e10 ---------A   01880  IF ABS(H-C)>1 THEN 1910
    0x5f2d28072270 ---------A   01890  H=H-3*L
    0x5f2d280722e0 ---------A   01900  GOSUB 2170
    0x5f2d28072510 ---------A T 01910  B$="BOLTED      "
    0x5f2d28072590 ---------A   01920  GOTO 1420
    0x5f2d280729c0 ---------A T 01930  IF ABS(H-C)>2 GOTO 1410
    0x5f2d28072a60 ---------A   01940  GOSUB 2120
    0x5f2d28072d70 ---------A   01950  IF R1>D9 GOTO 2100
    0x5f2d28072e10 ---------A   01960  GOSUB 2120
    0x5f2d28073140 ---------A   01970  K=P+2
    0x5f2d28073470 ---------A   01980  M=M+1
    0x5f2d280738c0 ---------A   01990  H=H-5*L
    0x5f2d28073930 ---------A   02000  GOSUB 2170
    0x5f2d28073b60 ---------A   02010  B$="KICKED"
    0x5f2d28073bd0 ---------A   02020  GOTO 1420
    0x5f2d28073e20 ---------A T 02030  IF M>T GOTO 2220
    0x5f2d28074180 ---------A   02040  K=K-1
    0x5f2d280741f0 ---------A   02050  PRINT
    0x5f2d28074270 ---------A   02060  GOSUB 2120
    0x5f2d28074820 ---------A   02070  H=H+L*(P+1)
    0x5f2d28074890 ---------A   02080  GOSUB 2170
    0x5f2d28074900 ---------A   02090  GOTO1410
    0x5f2d28074b70 ---------A T 02100  IF H=C THEN 2260
    0x5f2d28074bf0 ---------A   02110  GOTO 1410
    0x5f2d28075120 ---------B G 02120  R1=(8*RND(1)+1)
    0x5f2d28075430 ---------B   02130  R=INT(R1)
    0x5f2d28075800 ---------B   02140  P=S(1,R)
    0x5f2d28075bd0 ---------B   02150  Q=S(2,R)
    0x5f2d28075c20 ---------B   02160  RETURN
    0x5f2d28075e80 ---------C G 02170  IF H>=1 THEN 2190
    0x5f2d280760a0 ---------C   02180  H=1
    0x5f2d280762f0 ---------C T 02190  IF H<=21 THEN 2210
    0x5f2d28076510 ---------C   02200  H=21
    0x5f2d28076560 ---------C T 02210  RETURN
    0x5f2d28076600 ---------A T 02220  PRINT 
    0x5f2d28076790 ---------A   02230  PRINT "THOSE KICKS LANDED YOU IN THE HOSPITAL!"
    0x5f2d280768f0 ---------A   02240  PRINT " GET WELL SOON!!"
    0x5f2d28076970 ---------A   02250  GOTO 2370
    0x5f2d28076c40 ---------A T 02260  FOR J=1 TO 21
    0x5f2d28076f40 ---------A   02270  A(J)=32
    0x5f2d28077070 ---------A   02280  NEXT J
    0x5f2d28077b90 ---------A   02290  A(C)=35
    0x5f2d28077d00 ---------A   02300  PRINT "I";
    0x5f2d28077ff0 ---------A   02310  FOR J=1 TO 21
    0x5f2d28078330 ---------A   02320  PRINT CHR$(A(J));
    0x5f2d28078470 ---------A   02330  NEXT J
    0x5f2d280785e0 ---------A   02340  PRINT "I"
    0x5f2d28078690 ---------A   02350  PRINT
    0x5f2d28078820 ---------A   02360  PRINT "YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"
    0x5f2d280789a0 ---------A T 02370  PRINT "ANOTHER ROUNDUP";
    0x5f2d28078b10 ---------A   02380  INPUT F$
    0x5f2d28078f30 ---------A   02390  IF LEFT$(F$,1)="Y" THEN 1270
    0x5f2d28078fb0 ---------A   02400  GOTO 2440
    0x5f2d28079040 ---------A T 02410  PRINT 
    0x5f2d280791c0 ---------A   02420  PRINT "ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"
    0x5f2d28079240 ---------A   02430  GOTO 2370
    0x5f2d28079290 ---------A T 02440  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/cowboy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f2d2805edb0 ---------A   01000  RANDOMIZE
    0x5f2d2805c6d0 ---------A   01010  PRINT TAB(26);"CORRAL"
    0x5f2d2805c670 ---------A   01020  PRINT TAB(20);"CREATIVE COMPUTING"
    0x5f2d2805e5e0 ---------A   01030  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5f2d2805c9e0 ---------A   01040  PRINT
    0x5f2d2805eaa0 ---------A   01050  PRINT
    0x5f2d2805d040 ---------A   01060  PRINT
    0x5f2d2805ef30 ---------A   01070  DIM A(21)
    0x5f2d2805ee70 ---------A   01080  DIM S(2,9)
    0x5f2d280648a0 ---------A   01090  FOR I=1 TO 2
    0x5f2d28064ba0 ---------A   01100  FOR J=0 TO 9
    0x5f2d2805db80 ---------A   01110  READ S(I,J)
    0x5f2d2805eff0 ---------A   01120  NEXT J
    0x5f2d2805f0b0 ---------A   01130  NEXT I
    0x5f2d28065920 ---------A   01140  DATA 0,1,2,3,3,2,2,1,0,-1
    0x5f2d28066280 ---------A   01150  DATA 1,2,3,4,5,4,3,2,1,0
    0x5f2d28066420 ---------A   01160  PRINT "  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"
    0x5f2d28066580 ---------A   01170  PRINT "DO YOU WANT FULL INSTRUCTIONS";
    0x5f2d280667b0 ---------A   01180  INPUT F$
    0x5f2d28066c00 ---------A   01190  IF LEFT$(F$,1)="N" THEN 1260
    0x5f2d28066db0 ---------A   01200  PRINT "YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."
    0x5f2d28066f60 ---------A   01210  PRINT "IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"
    0x5f2d28067110 ---------A   01220  PRINT "HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"
    0x5f2d280672d0 ---------A   01230  PRINT "WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"
    0x5f2d28067460 ---------A   01240  PRINT "IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"
    0x5f2d28067510 ---------A   01250  PRINT
    0x5f2d280676a0 ---------A T 01260  PRINT "AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"
    0x5f2d28067980 ---------A T 01270  C=1
    0x5f2d28067c50 ---------A   01280  L=1
    0x5f2d28067f20 ---------A   01290  K=0
    0x5f2d280681f0 ---------A   01300  M=0
    0x5f2d280684c0 ---------A   01310  N=0
    0x5f2d280689a0 ---------A   01320  D9=RND(1)+1.5
    0x5f2d28069230 ---------A   01330  PRINT "LEVEL OF DIFFICULTY (0-10) :"10-INT((D9-1.5)*10)
    0x5f2d280692b0 ---------A   01340  GOSUB 2120
    0x5f2d280695c0 ---------A   01350  IF R<=5 THEN 1370
    0x5f2d280698c0 ---------A   01360  Q=-Q
    0x5f2d28069cb0 ---------A T 01370  H=13+Q
    0x5f2d28069d20 ---------A   01380  GOSUB 2170
    0x5f2d2806a1d0 ---------A   01390  T=2+P
    0x5f2d2806a240 ---------A   01400  PRINT
    0x5f2d2806a540 ---------A T 01410  B$="            "
    0x5f2d2806a810 ---------A T 01420  FOR J=1 TO 21
    0x5f2d2806ab10 ---------A   01430  A(J)=32
    0x5f2d2806ac40 ---------A   01440  NEXTJ
    0x5f2d2806af50 ---------A   01450  A(C)=67
    0x5f2d2806b240 ---------A   01460  A(H)=72
    0x5f2d2806b4b0 ---------A   01470  PRINT N,"I";
    0x5f2d2806b7a0 ---------A   01480  FOR J=1 TO 21
    0x5f2d2806bae0 ---------A   01490  PRINT CHR$(A(J));
    0x5f2d2806bc20 ---------A   01500  NEXT J
    0x5f2d2806beb0 ---------A   01510  PRINT "I",B$;
    0x5f2d2806c3b0 ---------A   01520  X=ABS(H-C)
    0x5f2d2806c7e0 ---------A   01530  L=SGN(H-C)
    0x5f2d2806cb10 ---------A   01540  N=N+1
    0x5f2d2806cd40 ---------A   01550  IF K>0 GOTO 2030
    0x5f2d2806cfa0 ---------A T 01560  IF N>100 GOTO 2410
    0x5f2d2806d1e0 ---------A   01570  INPUT D$
    0x5f2d2806d4c0 ---------A   01580  CHANGE D$ TO Z
    0x5f2d2806d700 ---------A   01590  DIM Z(10)
    0x5f2d2806dbb0 ---------A   01600  D=Z(1)-48
    0x5f2d2806de00 ---------A   01610  IF D>0 THEN 1630
    0x5f2d2806de80 ---------A   01620  GOTO1640
    0x5f2d2806e0b0 ---------A T 01630  IF D<6 GOTO 1670
    0x5f2d2806e340 ---------A T 01640  IF D=0 THEN 2370
    0x5f2d2806e8e0 ---------A   01650  PRINT "ILLEGAL MOVE .TRY AGAIN",
    0x5f2d2806e960 ---------A   01660  GOTO 1560
    0x5f2d2806ee90 ---------A T 01670  E=C+L*D
    0x5f2d2806f0e0 ---------A   01680  IF E<1 THEN 1640
    0x5f2d2806f340 ---------A   01690  IF E>21 THEN 1640
    0x5f2d2806f580 ---------A   01700  C=E
    0x5f2d2806f5f0 ---------A   01710  GOSUB 2120
    0x5f2d2806f8e0 ---------A   01720  G=P
    0x5f2d2806fd50 ---------A   01730  H=H+L*G
    0x5f2d2806fdc0 ---------A   01740  GOSUB 2170
    0x5f2d28070130 ---------A   01750  IF X<2*D THEN 1770
    0x5f2d280701b0 ---------A   01760  GOTO 1780
    0x5f2d280703e0 ---------A T 01770  IF D>1 GOTO 1840
    0x5f2d28070660 ---------A T 01780  IF H>1 THEN 1800
    0x5f2d280706e0 ---------A   01790  GOTO 1810
    0x5f2d28070930 ---------A T 01800  IF H<20 THEN 1930
    0x5f2d280709b0 ---------A T 01810  GOSUB 2120
    0x5f2d28070be0 ---------A   01820  IF R>2 GOTO 1930
    0x5f2d28070e40 ---------A   01830  IF X>7 GOTO 1410
    0x5f2d280712a0 ---------A T 01840  G=9+2*G
    0x5f2d28071710 ---------A   01850  H=H-L*G
    0x5f2d28071940 ---------A   01860  L=-L
    0x5f2d280719c0 ---------A   01870  GOSUB 2170
    0x5f2d28071e10 ---------A   01880  IF ABS(H-C)>1 THEN 1910
    0x5f2d28072270 ---------A   01890  H=H-3*L
    0x5f2d280722e0 ---------A   01900  GOSUB 2170
    0x5f2d28072510 ---------A T 01910  B$="BOLTED      "
    0x5f2d28072590 ---------A   01920  GOTO 1420
    0x5f2d280729c0 ---------A T 01930  IF ABS(H-C)>2 GOTO 1410
    0x5f2d28072a60 ---------A   01940  GOSUB 2120
    0x5f2d28072d70 ---------A   01950  IF R1>D9 GOTO 2100
    0x5f2d28072e10 ---------A   01960  GOSUB 2120
    0x5f2d28073140 ---------A   01970  K=P+2
    0x5f2d28073470 ---------A   01980  M=M+1
    0x5f2d280738c0 ---------A   01990  H=H-5*L
    0x5f2d28073930 ---------A   02000  GOSUB 2170
    0x5f2d28073b60 ---------A   02010  B$="KICKED"
    0x5f2d28073bd0 ---------A   02020  GOTO 1420
    0x5f2d28073e20 ---------A T 02030  IF M>T GOTO 2220
    0x5f2d28074180 ---------A   02040  K=K-1
    0x5f2d280741f0 ---------A   02050  PRINT
    0x5f2d28074270 ---------A   02060  GOSUB 2120
    0x5f2d28074820 ---------A   02070  H=H+L*(P+1)
    0x5f2d28074890 ---------A   02080  GOSUB 2170
    0x5f2d28074900 ---------A   02090  GOTO1410
    0x5f2d28074b70 ---------A T 02100  IF H=C THEN 2260
    0x5f2d28074bf0 ---------A   02110  GOTO 1410
    0x5f2d28075120 ---------B G 02120  R1=(8*RND(1)+1)
    0x5f2d28075430 ---------B   02130  R=INT(R1)
    0x5f2d28075800 ---------B   02140  P=S(1,R)
    0x5f2d28075bd0 ---------B   02150  Q=S(2,R)
    0x5f2d28075c20 ---------B   02160  RETURN
    0x5f2d28075e80 ---------C G 02170  IF H>=1 THEN 2190
    0x5f2d280760a0 ---------C   02180  H=1
    0x5f2d280762f0 ---------C T 02190  IF H<=21 THEN 2210
    0x5f2d28076510 ---------C   02200  H=21
    0x5f2d28076560 ---------C T 02210  RETURN
    0x5f2d28076600 ---------A T 02220  PRINT 
    0x5f2d28076790 ---------A   02230  PRINT "THOSE KICKS LANDED YOU IN THE HOSPITAL!"
    0x5f2d280768f0 ---------A   02240  PRINT " GET WELL SOON!!"
    0x5f2d28076970 ---------A   02250  GOTO 2370
    0x5f2d28076c40 ---------A T 02260  FOR J=1 TO 21
    0x5f2d28076f40 ---------A   02270  A(J)=32
    0x5f2d28077070 ---------A   02280  NEXT J
    0x5f2d28077b90 ---------A   02290  A(C)=35
    0x5f2d28077d00 ---------A   02300  PRINT "I";
    0x5f2d28077ff0 ---------A   02310  FOR J=1 TO 21
    0x5f2d28078330 ---------A   02320  PRINT CHR$(A(J));
    0x5f2d28078470 ---------A   02330  NEXT J
    0x5f2d280785e0 ---------A   02340  PRINT "I"
    0x5f2d28078690 ---------A   02350  PRINT
    0x5f2d28078820 ---------A   02360  PRINT "YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"
    0x5f2d280789a0 ---------A T 02370  PRINT "ANOTHER ROUNDUP";
    0x5f2d28078b10 ---------A   02380  INPUT F$
    0x5f2d28078f30 ---------A   02390  IF LEFT$(F$,1)="Y" THEN 1270
    0x5f2d28078fb0 ---------A   02400  GOTO 2440
    0x5f2d28079040 ---------A T 02410  PRINT 
    0x5f2d280791c0 ---------A   02420  PRINT "ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"
    0x5f2d28079240 ---------A   02430  GOTO 2370
    0x5f2d28079290 ---------A T 02440  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02470 - 10000    7540 

 */



/*
 *  Symbol Table Listing for 'basic/cowboy.bas'
 *
    A               Array    Integer         {0,20} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$                       String      
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
    D$                       String      
    D9                       Integer     
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F$                       String      
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
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
    L                        Integer     
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
    N                        Integer     
    OCT$            Function String          args=1, float  
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    R                        Integer     
    R1                       Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,1} {0,8} 
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
    X                        Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/cowboy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f2d2805edb0 ---------A   01000  RANDOMIZE
    0x5f2d2805c6d0 ---------A   01010  PRINT TAB(26);"CORRAL"
    0x5f2d2805c670 ---------A   01020  PRINT TAB(20);"CREATIVE COMPUTING"
    0x5f2d2805e5e0 ---------A   01030  PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5f2d2805c9e0 ---------A   01040  PRINT
    0x5f2d2805eaa0 ---------A   01050  PRINT
    0x5f2d2805d040 ---------A   01060  PRINT
    0x5f2d2805ef30 ---------A   01070  DIM A(21)
    0x5f2d2805ee70 ---------A   01080  DIM S(2,9)
    0x5f2d280648a0 ---------A   01090  FOR I=1 TO 2
    0x5f2d28064ba0 ---------A   01100  FOR J=0 TO 9
    0x5f2d2805db80 ---------A   01110  READ S(I,J)
    0x5f2d2805eff0 ---------A   01120  NEXT J
    0x5f2d2805f0b0 ---------A   01130  NEXT I
    0x5f2d28065920 ---------A   01140  DATA 0,1,2,3,3,2,2,1,0,-1
    0x5f2d28066280 ---------A   01150  DATA 1,2,3,4,5,4,3,2,1,0
    0x5f2d28066420 ---------A   01160  PRINT "  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"
    0x5f2d28066580 ---------A   01170  PRINT "DO YOU WANT FULL INSTRUCTIONS";
    0x5f2d280667b0 ---------A   01180  INPUT F$
    0x5f2d28066c00 ---------A   01190  IF LEFT$(F$,1)="N" THEN 1260
    0x5f2d28066db0 ---------A   01200  PRINT "YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."
    0x5f2d28066f60 ---------A   01210  PRINT "IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"
    0x5f2d28067110 ---------A   01220  PRINT "HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"
    0x5f2d280672d0 ---------A   01230  PRINT "WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"
    0x5f2d28067460 ---------A   01240  PRINT "IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"
    0x5f2d28067510 ---------A   01250  PRINT
    0x5f2d280676a0 ---------A T 01260  PRINT "AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"
    0x5f2d28067980 ---------A T 01270  C=1
    0x5f2d28067c50 ---------A   01280  L=1
    0x5f2d28067f20 ---------A   01290  K=0
    0x5f2d280681f0 ---------A   01300  M=0
    0x5f2d280684c0 ---------A   01310  N=0
    0x5f2d280689a0 ---------A   01320  D9=RND(1)+1.5
    0x5f2d28069230 ---------A   01330  PRINT "LEVEL OF DIFFICULTY (0-10) :"10-INT((D9-1.5)*10)
    0x5f2d280692b0 ---------A   01340  GOSUB 2350
    0x5f2d280695c0 ---------A   01350  IF R<=5 THEN 1370
    0x5f2d280698c0 ---------A   01360  Q=-Q
    0x5f2d28069cb0 ---------A T 01370  H=13+Q
    0x5f2d28069d20 ---------A   01380  GOSUB 2410
    0x5f2d2806a1d0 ---------A   01390  T=2+P
    0x5f2d2806a240 ---------A   01400  PRINT
    0x5f2d2806a540 ---------A T 01410  B$="            "
    0x5f2d2806a810 ---------A T 01420  FOR J=1 TO 21
    0x5f2d2806ab10 ---------A   01430  A(J)=32
    0x5f2d2806ac40 ---------A   01440  NEXTJ
    0x5f2d2806af50 ---------A   01450  A(C)=67
    0x5f2d2806b240 ---------A   01460  A(H)=72
    0x5f2d2806b4b0 ---------A   01470  PRINT N,"I";
    0x5f2d2806b7a0 ---------A   01480  FOR J=1 TO 21
    0x5f2d2806bae0 ---------A   01490  PRINT CHR$(A(J));
    0x5f2d2806bc20 ---------A   01500  NEXT J
    0x5f2d2806beb0 ---------A   01510  PRINT "I",B$;
    0x5f2d2806c3b0 ---------A   01520  X=ABS(H-C)
    0x5f2d2806c7e0 ---------A   01530  L=SGN(H-C)
    0x5f2d2806cb10 ---------A   01540  N=N+1
    0x5f2d2806cd40 ---------A   01550  IF K>0 GOTO 2030
    0x5f2d2806cfa0 ---------A T 01560  IF N>100 GOTO 2310
    0x5f2d2806d1e0 ---------A   01570  INPUT D$
    0x5f2d2806d4c0 ---------A   01580  CHANGE D$ TO Z
    0x5f2d2806d700 ---------A   01590  DIM Z(10)
    0x5f2d2806dbb0 ---------A   01600  D=Z(1)-48
    0x5f2d2806de00 ---------A   01610  IF D>0 THEN 1630
    0x5f2d2806de80 ---------A   01620  GOTO1640
    0x5f2d2806e0b0 ---------A T 01630  IF D<6 GOTO 1670
    0x5f2d2806e340 ---------A T 01640  IF D=0 THEN 2270
    0x5f2d2806e8e0 ---------A   01650  PRINT "ILLEGAL MOVE .TRY AGAIN",
    0x5f2d2806e960 ---------A   01660  GOTO 1560
    0x5f2d2806ee90 ---------A T 01670  E=C+L*D
    0x5f2d2806f0e0 ---------A   01680  IF E<1 THEN 1640
    0x5f2d2806f340 ---------A   01690  IF E>21 THEN 1640
    0x5f2d2806f580 ---------A   01700  C=E
    0x5f2d2806f5f0 ---------A   01710  GOSUB 2350
    0x5f2d2806f8e0 ---------A   01720  G=P
    0x5f2d2806fd50 ---------A   01730  H=H+L*G
    0x5f2d2806fdc0 ---------A   01740  GOSUB 2410
    0x5f2d28070130 ---------A   01750  IF X<2*D THEN 1770
    0x5f2d280701b0 ---------A   01760  GOTO 1780
    0x5f2d280703e0 ---------A T 01770  IF D>1 GOTO 1840
    0x5f2d28070660 ---------A T 01780  IF H>1 THEN 1800
    0x5f2d280706e0 ---------A   01790  GOTO 1810
    0x5f2d28070930 ---------A T 01800  IF H<20 THEN 1930
    0x5f2d280709b0 ---------A T 01810  GOSUB 2350
    0x5f2d28070be0 ---------A   01820  IF R>2 GOTO 1930
    0x5f2d28070e40 ---------A   01830  IF X>7 GOTO 1410
    0x5f2d280712a0 ---------A T 01840  G=9+2*G
    0x5f2d28071710 ---------A   01850  H=H-L*G
    0x5f2d28071940 ---------A   01860  L=-L
    0x5f2d280719c0 ---------A   01870  GOSUB 2410
    0x5f2d28071e10 ---------A   01880  IF ABS(H-C)>1 THEN 1910
    0x5f2d28072270 ---------A   01890  H=H-3*L
    0x5f2d280722e0 ---------A   01900  GOSUB 2410
    0x5f2d28072510 ---------A T 01910  B$="BOLTED      "
    0x5f2d28072590 ---------A   01920  GOTO 1420
    0x5f2d280729c0 ---------A T 01930  IF ABS(H-C)>2 GOTO 1410
    0x5f2d28072a60 ---------A   01940  GOSUB 2350
    0x5f2d28072d70 ---------A   01950  IF R1>D9 GOTO 2100
    0x5f2d28072e10 ---------A   01960  GOSUB 2350
    0x5f2d28073140 ---------A   01970  K=P+2
    0x5f2d28073470 ---------A   01980  M=M+1
    0x5f2d280738c0 ---------A   01990  H=H-5*L
    0x5f2d28073930 ---------A   02000  GOSUB 2410
    0x5f2d28073b60 ---------A   02010  B$="KICKED"
    0x5f2d28073bd0 ---------A   02020  GOTO 1420
    0x5f2d28073e20 ---------A T 02030  IF M>T GOTO 2120
    0x5f2d28074180 ---------A   02040  K=K-1
    0x5f2d280741f0 ---------A   02050  PRINT
    0x5f2d28074270 ---------A   02060  GOSUB 2350
    0x5f2d28074820 ---------A   02070  H=H+L*(P+1)
    0x5f2d28074890 ---------A   02080  GOSUB 2410
    0x5f2d28074900 ---------A   02090  GOTO1410
    0x5f2d28074b70 ---------A T 02100  IF H=C THEN 2160
    0x5f2d28074bf0 ---------A   02110  GOTO 1410
    0x5f2d28076600 ---------A T 02120  PRINT 
    0x5f2d28076790 ---------A   02130  PRINT "THOSE KICKS LANDED YOU IN THE HOSPITAL!"
    0x5f2d280768f0 ---------A   02140  PRINT " GET WELL SOON!!"
    0x5f2d28076970 ---------A   02150  GOTO 2270
    0x5f2d28076c40 ---------A T 02160  FOR J=1 TO 21
    0x5f2d28076f40 ---------A   02170  A(J)=32
    0x5f2d28077070 ---------A   02180  NEXT J
    0x5f2d28077b90 ---------A   02190  A(C)=35
    0x5f2d28077d00 ---------A   02200  PRINT "I";
    0x5f2d28077ff0 ---------A   02210  FOR J=1 TO 21
    0x5f2d28078330 ---------A   02220  PRINT CHR$(A(J));
    0x5f2d28078470 ---------A   02230  NEXT J
    0x5f2d280785e0 ---------A   02240  PRINT "I"
    0x5f2d28078690 ---------A   02250  PRINT
    0x5f2d28078820 ---------A   02260  PRINT "YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"
    0x5f2d280789a0 ---------A T 02270  PRINT "ANOTHER ROUNDUP";
    0x5f2d28078b10 ---------A   02280  INPUT F$
    0x5f2d28078f30 ---------A   02290  IF LEFT$(F$,1)="Y" THEN 1270
    0x5f2d28078fb0 ---------A   02300  GOTO 2340
    0x5f2d28079040 ---------A T 02310  PRINT 
    0x5f2d280791c0 ---------A   02320  PRINT "ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"
    0x5f2d28079240 ---------A   02330  GOTO 2270
    0x5f2d28079290 ---------A T 02340  END
    0x5f2d28075120 ---------B G 02350  R1=(8*RND(1)+1)
    0x5f2d28075430 ---------B   02360  R=INT(R1)
    0x5f2d28075800 ---------B   02370  P=S(1,R)
    0x5f2d28075bd0 ---------B   02380  Q=S(2,R)
    0x5f2d28082210 ---------B   02390  GOTO 02400
    0x5f2d28082260 ---------B T 02400  RETURN
    0x5f2d28075e80 ---------C G 02410  IF H>=1 THEN 2430
    0x5f2d280760a0 ---------C   02420  H=1
    0x5f2d280762f0 ---------C T 02430  IF H<=21 THEN 2450
    0x5f2d28076510 ---------C   02440  H=21
    0x5f2d280822c0 ---------C T 02450  GOTO 02460
    0x5f2d28082330 ---------C T 02460  RETURN
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
char* data_01140s[]={"0","1","2","3","3","2","2","1","0","-1"};
char* data_01150s[]={"1","2","3","4","5","4","3","2","1","0"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1140, 10,data_01140s},
    { 1150, 10,data_01150s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[21];                             // Basic: A 
char*  B_str;                                     // Basic: B$ 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
char*  D_str;                                     // Basic: D$ 
int    D9_int;                                    // Basic: D9 
int    E_int;                                     // Basic: E 
char*  F_str;                                     // Basic: F$ 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    S_int_arr[2][9];                           // Basic: S 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02350();
void Routine_02410();

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

void Routine_02350(){
    // 02350 R1=(8*RND(1)+1)
    R1_int = (8*RND(1)+1);
    // 02360 R=INT(R1)
    R_int = INT(R1_int);
    // 02370 P=S(1,R)
    P_int = S_int_arr[1][R_int];
    // 02380 Q=S(2,R)
    Q_int = S_int_arr[2][R_int];
    // 02390 GOTO 02400
    goto Lbl_02400;

  Lbl_02400:
    // 02400 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02410(){
    // 02410 IF H>=1 THEN 2430
    if(H_int>=1)goto Lbl_02430;
    // 02420 H=1
    H_int = 1;

  Lbl_02430:
    // 02430 IF H<=21 THEN 2450
    if(H_int<=21)goto Lbl_02450;
    // 02440 H=21
    H_int = 21;

  Lbl_02450:
    // 02450 GOTO 02460
    goto Lbl_02460;

  Lbl_02460:
    // 02460 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 RANDOMIZE
    RANDOMIZE();
    // 01010 PRINT TAB(26);"CORRAL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,26);strcat(buf,"CORRAL");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT TAB(20);"CREATIVE COMPUTING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,20);strcat(buf,"CREATIVE COMPUTING");strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,18);strcat(buf,"MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 DIM A(21)
    // 01080 DIM S(2,9)
    // 01090 FOR I=1 TO 2
    for(I_int=1;I_int<=2;I_int++){
        // 01100 FOR J=0 TO 9
        for(J_int=0;J_int<=9;J_int++){
            // 01110 READ S(I,J)
            S_int_arr[I_int][J_int] = Get_Data_Int();
            // 01120 NEXT J
            int dummy_1120=0; // Ignore this line.
        }; // End-For(J_int)
        // 01130 NEXT I
        int dummy_1130=0; // Ignore this line.
    }; // End-For(I_int)
    // 01140 DATA 0,1,2,3,3,2,2,1,0,-1
    // 01150 DATA 1,2,3,4,5,4,3,2,1,0
    // 01160 PRINT "  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "DO YOU WANT FULL INSTRUCTIONS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT FULL INSTRUCTIONS");fputs(buf,fh); };
    // 01180 INPUT F$
    // Start of Basic INPUT statement 01180
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&F_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01180
    // 01190 IF LEFT$(F$,1)="N" THEN 1260
    if(LEFT$(F_str,1)=='N')goto Lbl_01260;
    // 01200 PRINT "YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01260:
    // 01260 PRINT "AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01270:
    // 01270 C=1
    C_int = 1;
    // 01280 L=1
    L_int = 1;
    // 01290 K=0
    K_int = 0;
    // 01300 M=0
    M_int = 0;
    // 01310 N=0
    N_int = 0;
    // 01320 D9=RND(1)+1.5
    D9_int = RND(1)+1.5;
    // 01330 PRINT "LEVEL OF DIFFICULTY (0-10) :"10-INT((D9-1.5)*10)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LEVEL OF DIFFICULTY (0-10) :"); b2c_INT(buf,10-INT((D9_int-1.5)*10));strcat(buf,"\n");fputs(buf,fh); };
    // 01340 GOSUB 2350
    Routine_02350();
    // 01350 IF R<=5 THEN 1370
    if(R_int<=5)goto Lbl_01370;
    // 01360 Q=-Q
    Q_int = Q_int;

  Lbl_01370:
    // 01370 H=13+Q
    H_int = 13+Q_int;
    // 01380 GOSUB 2410
    Routine_02410();
    // 01390 T=2+P
    T_int = 2+P_int;
    // 01400 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01410:
    // 01410 B$="            "
    GLBpStr="            ";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01420:
    // 01420 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 01430 A(J)=32
        A_int_arr[J_int] = 32;
        // 01440 NEXTJ
        int dummy_1440=0; // Ignore this line.
    }; // End-For(J_int)
    // 01450 A(C)=67
    A_int_arr[C_int] = 67;
    // 01460 A(H)=72
    A_int_arr[H_int] = 72;
    // 01470 PRINT N,"I";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,N_int);strcat(buf,"I");fputs(buf,fh); };
    // 01480 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 01490 PRINT CHR$(A(J));
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(A_int_arr[J_int]));fputs(buf,fh); };
        // 01500 NEXT J
        int dummy_1500=0; // Ignore this line.
    }; // End-For(J_int)
    // 01510 PRINT "I",B$;
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I"); strcat(buf,B_str);fputs(buf,fh); };
    // 01520 X=ABS(H-C)
    X_int = ABS(H_int-C_int);
    // 01530 L=SGN(H-C)
    L_int = SGN(H_int-C_int);
    // 01540 N=N+1
    N_int = N_int+1;
    // 01550 IF K>0 GOTO 2030
    if(K_int>0)goto Lbl_02030;

  Lbl_01560:
    // 01560 IF N>100 GOTO 2310
    if(N_int>100)goto Lbl_02310;
    // 01570 INPUT D$
    // Start of Basic INPUT statement 01570
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&D_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01570
    // 01580 CHANGE D$ TO Z
    Z_int = atoi(D_str);
    // 01590 DIM Z(10)
    // 01600 D=Z(1)-48
    D_int = Z_int-48;
    // 01610 IF D>0 THEN 1630
    if(D_int>0)goto Lbl_01630;
    // 01620 GOTO1640
    goto Lbl_01640;

  Lbl_01630:
    // 01630 IF D<6 GOTO 1670
    if(D_int<6)goto Lbl_01670;

  Lbl_01640:
    // 01640 IF D=0 THEN 2270
    if(D_int==0)goto Lbl_02270;
    // 01650 PRINT "ILLEGAL MOVE .TRY AGAIN",
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL MOVE .TRY AGAIN");fputs(buf,fh); };
    // 01660 GOTO 1560
    goto Lbl_01560;

  Lbl_01670:
    // 01670 E=C+L*D
    E_int = C_int+L_int*D_int;
    // 01680 IF E<1 THEN 1640
    if(E_int<1)goto Lbl_01640;
    // 01690 IF E>21 THEN 1640
    if(E_int>21)goto Lbl_01640;
    // 01700 C=E
    C_int = E_int;
    // 01710 GOSUB 2350
    Routine_02350();
    // 01720 G=P
    G_int = P_int;
    // 01730 H=H+L*G
    H_int = H_int+L_int*G_int;
    // 01740 GOSUB 2410
    Routine_02410();
    // 01750 IF X<2*D THEN 1770
    if(X_int<2*D_int)goto Lbl_01770;
    // 01760 GOTO 1780
    goto Lbl_01780;

  Lbl_01770:
    // 01770 IF D>1 GOTO 1840
    if(D_int>1)goto Lbl_01840;

  Lbl_01780:
    // 01780 IF H>1 THEN 1800
    if(H_int>1)goto Lbl_01800;
    // 01790 GOTO 1810
    goto Lbl_01810;

  Lbl_01800:
    // 01800 IF H<20 THEN 1930
    if(H_int<20)goto Lbl_01930;

  Lbl_01810:
    // 01810 GOSUB 2350
    Routine_02350();
    // 01820 IF R>2 GOTO 1930
    if(R_int>2)goto Lbl_01930;
    // 01830 IF X>7 GOTO 1410
    if(X_int>7)goto Lbl_01410;

  Lbl_01840:
    // 01840 G=9+2*G
    G_int = 9+2*G_int;
    // 01850 H=H-L*G
    H_int = H_int-L_int*G_int;
    // 01860 L=-L
    L_int = L_int;
    // 01870 GOSUB 2410
    Routine_02410();
    // 01880 IF ABS(H-C)>1 THEN 1910
    if(ABS(H_int-C_int)>1)goto Lbl_01910;
    // 01890 H=H-3*L
    H_int = H_int-3*L_int;
    // 01900 GOSUB 2410
    Routine_02410();

  Lbl_01910:
    // 01910 B$="BOLTED      "
    GLBpStr="BOLTED      ";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01920 GOTO 1420
    goto Lbl_01420;

  Lbl_01930:
    // 01930 IF ABS(H-C)>2 GOTO 1410
    if(ABS(H_int-C_int)>2)goto Lbl_01410;
    // 01940 GOSUB 2350
    Routine_02350();
    // 01950 IF R1>D9 GOTO 2100
    if(R1_int>D9_int)goto Lbl_02100;
    // 01960 GOSUB 2350
    Routine_02350();
    // 01970 K=P+2
    K_int = P_int+2;
    // 01980 M=M+1
    M_int = M_int+1;
    // 01990 H=H-5*L
    H_int = H_int-5*L_int;
    // 02000 GOSUB 2410
    Routine_02410();
    // 02010 B$="KICKED"
    GLBpStr="KICKED";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02020 GOTO 1420
    goto Lbl_01420;

  Lbl_02030:
    // 02030 IF M>T GOTO 2120
    if(M_int>T_int)goto Lbl_02120;
    // 02040 K=K-1
    K_int = K_int-1;
    // 02050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02060 GOSUB 2350
    Routine_02350();
    // 02070 H=H+L*(P+1)
    H_int = H_int+L_int*(P_int+1);
    // 02080 GOSUB 2410
    Routine_02410();
    // 02090 GOTO1410
    goto Lbl_01410;

  Lbl_02100:
    // 02100 IF H=C THEN 2160
    if(H_int==C_int)goto Lbl_02160;
    // 02110 GOTO 1410
    goto Lbl_01410;

  Lbl_02120:
    // 02120 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02130 PRINT "THOSE KICKS LANDED YOU IN THE HOSPITAL!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THOSE KICKS LANDED YOU IN THE HOSPITAL!");strcat(buf,"\n");fputs(buf,fh); };
    // 02140 PRINT " GET WELL SOON!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," GET WELL SOON!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02150 GOTO 2270
    goto Lbl_02270;

  Lbl_02160:
    // 02160 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 02170 A(J)=32
        A_int_arr[J_int] = 32;
        // 02180 NEXT J
        int dummy_2180=0; // Ignore this line.
    }; // End-For(J_int)
    // 02190 A(C)=35
    A_int_arr[C_int] = 35;
    // 02200 PRINT "I";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I");fputs(buf,fh); };
    // 02210 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 02220 PRINT CHR$(A(J));
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(A_int_arr[J_int]));fputs(buf,fh); };
        // 02230 NEXT J
        int dummy_2230=0; // Ignore this line.
    }; // End-For(J_int)
    // 02240 PRINT "I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I");strcat(buf,"\n");fputs(buf,fh); };
    // 02250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02260 PRINT "YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02270:
    // 02270 PRINT "ANOTHER ROUNDUP";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ANOTHER ROUNDUP");fputs(buf,fh); };
    // 02280 INPUT F$
    // Start of Basic INPUT statement 02280
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&F_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02280
    // 02290 IF LEFT$(F$,1)="Y" THEN 1270
    if(LEFT$(F_str,1)=='Y')goto Lbl_01270;
    // 02300 GOTO 2340
    goto Lbl_02340;

  Lbl_02310:
    // 02310 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02320 PRINT "ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENOUGH!! YOU'D DO BETTER AS CAMP COOK!");strcat(buf,"\n");fputs(buf,fh); };
    // 02330 GOTO 2270
    goto Lbl_02270;

  Lbl_02340:
    // 02340 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
