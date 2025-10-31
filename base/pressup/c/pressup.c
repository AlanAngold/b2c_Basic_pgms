/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/pressup.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59c63595adb0 ---------A   01000  RANDOMIZE
    0x59c635959b80 ---------A   01010  REM *** PRESS UPS ***
    0x59c63595af30 ---------A   01020  REM *** RON BEHRNS ***
    0x59c63595ae70 ---------A   01030  REM *** 1979 ***
    0x59c63595aff0 ---------A   01040  B=0
    0x59c635959fc0 ---------A   01050  R=0
    0x59c6359586d0 ---------A   01060  PRINT "THIS IS THE GAME OF PRESS UPS"
    0x59c635958670 ---------A   01070  PRINT "INSTRUCTIONS (Y OR N) ";
    0x59c63595a5e0 ---------A   01080  INPUT I$
    0x59c63595a720 ---------A   01090  IF I$<>"Y" THEN 1270
    0x59c63595b140 ---------A   01100  PRINT "TWO MAY PLAY -- THE COMPUTER IS YOUR REFEREE"
    0x59c635959620 ---------A   01110  PRINT "OR YOU MAY PLAY AGAINST THE COMPUTER"
    0x59c6359596d0 ---------A   01120  PRINT
    0x59c6359608a0 ---------A   01130  PRINT "ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL"
    0x59c635960a10 ---------A   01140  PRINT "A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID"
    0x59c635960bb0 ---------A   01150  PRINT "THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS"
    0x59c635960d60 ---------A   01160  PRINT "YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS"
    0x59c635960f10 ---------A   01170  PRINT "IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST"
    0x59c635961080 ---------A   01180  PRINT "ONE PRESSED, THE GAME IS OVER."
    0x59c635961240 ---------A   01190  PRINT "THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS"
    0x59c6359613b0 ---------A   01200  PRINT "END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE "
    0x59c635961510 ---------A   01210  PRINT "X-COORDINATE"
    0x59c6359615d0 ---------A   01220  PRINT
    0x59c6359617a0 ---------A   01230  PRINT "DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST"
    0x59c635961970 ---------A   01240  PRINT "THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)"
    0x59c635961ae0 ---------A   01250  PRINT "NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING"
    0x59c635961c40 ---------A   01260  PRINT "DIAGONALLY)."
    0x59c635961ce0 ---------A T 01270  PRINT
    0x59c635961e40 ---------A   01280  PRINT "PLAY WITH PARTNER(P) OR COMPUTER(C) ";
    0x59c635962040 ---------A   01290  INPUT R$
    0x59c6359622c0 ---------A   01300  IF R$="C" THEN 1320
    0x59c635962370 ---------A   01310  GOTO 1350
    0x59c6359624c0 ---------A T 01320  PRINT "COMPUTER HAS BLUE PEGS--OPPONENT IS PLAYER B"
    0x59c635962860 ---------A   01330  PRINT "COMPUTER FIRST(Y OR N) ";
    0x59c635962a80 ---------A   01340  INPUT F$
    0x59c635962b10 ---------A T 01350  PRINT
    0x59c635962c80 ---------A   01360  PRINT "READY... HERE IS THE BOARD"
    0x59c635962d00 ---------A   01370  PRINT
    0x59c635962d80 ---------A   01380  PRINT
    0x59c635963060 ---------A   01390  DIM P$(7)
    0x59c635963350 ---------A   01400  P$(1)="YBBBBBY"
    0x59c635963640 ---------A   01410  P$(2)="RYYYYYR"
    0x59c635963930 ---------A   01420  P$(3)="RYYYYYR"
    0x59c635963c20 ---------A   01430  P$(4)="RYYYYYR"
    0x59c635963f10 ---------A   01440  P$(5)="RYYYYYR"
    0x59c635964200 ---------A   01450  P$(6)="RYYYYYR"
    0x59c6359644f0 ---------A   01460  P$(7)="YBBBBBY"
    0x59c635964560 ---------A   01470  GOSUB 2000
    0x59c6359645e0 ---------A   01480  PRINT
    0x59c635964870 ---------A   01490  IF R$="C" THEN 1650
    0x59c6359649d0 ---------A   01500  PRINT "MOVE:PLAYER A"
    0x59c635964d90 ---------A T 01510  INPUT X,Y
    0x59c635964ff0 ---------A   01520  IF X>7 THEN 1510
    0x59c635965260 ---------A   01530  IF Y>7 THEN 1510
    0x59c635965860 ---------A   01540  IF MID$(P$(X),Y,1)="Y" THEN 1570
    0x59c6359659d0 ---------A   01550  PRINT "ILLEGAL MOVE...PRESS A YELLOW PEG!! "
    0x59c635965a50 ---------A   01560  GOTO 1510
    0x59c635965d40 ---------A T 01570  P9$="*"
    0x59c635966030 ---------A   01580  P9=X
    0x59c635966320 ---------A   01590  P8=Y
    0x59c635966390 ---------A   01600  GOSUB 3450
    0x59c635966400 ---------A   01610  GOSUB 2000
    0x59c635966480 ---------A   01620  PRINT
    0x59c635966700 ---------A   01630  IF R$="C" THEN 2600
    0x59c635966790 ---------A   01640  GO TO 1780
    0x59c635966e20 ---------A T 01650  IF F$<>"Y" THEN 1760
    0x59c635967400 ---------A   01660  X=INT(3*RND(0) + 3)
    0x59c635967620 ---------A   01670  Y=4
    0x59c635967970 ---------A   01680  PRINT "I MOVE ";X;Y
    0x59c635967bb0 ---------A   01690  P9$="*"
    0x59c635967de0 ---------A   01700  P9=X
    0x59c635968010 ---------A   01710  P8=Y
    0x59c635968080 ---------A   01720  GOSUB 3450
    0x59c6359680f0 ---------A   01730  GOSUB 2000
    0x59c635968160 ---------A   01740  PRINT
    0x59c6359681f0 ---------A   01750  GOTO 1780
    0x59c635968340 ---------A T 01760  PRINT "MOVE; PLAYER B"
    0x59c6359683d0 ---------A   01770  GOTO1510
    0x59c635968520 --------FA T 01780  PRINT "MOVE: PLAYER B"
    0x59c6359685a0 --------FA   01790  GOSUB 2160
    0x59c635968610 --------FA   01800  GOSUB 2310
    0x59c635968840 --------FA   01810  P9$="*"
    0x59c635968a70 --------FA   01820  P9=X
    0x59c635968ca0 --------FA   01830  P8=Y
    0x59c635968d10 --------FA   01840  GOSUB 3450
    0x59c635968d90 --------FA   01850  GOSUB 2470
    0x59c635969000 --------FA   01860  IF R$="C" THEN 2600
    0x59c635969080 --------FA   01870  GOSUB 2000
    0x59c635969100 --------FA   01880  PRINT
    0x59c635969260 --------FA   01890  PRINT "MOVE: PLAYER A"
    0x59c6359692e0 --------FA   01900  GOSUB 2160
    0x59c635969350 --------FA   01910  GOSUB 2310
    0x59c635969580 --------FA   01920  P9$="*"
    0x59c6359697b0 --------FA   01930  P9=X
    0x59c6359699e0 --------FA   01940  P8=Y
    0x59c635969a50 --------FA   01950  GOSUB 3450
    0x59c635969ac0 --------FA   01960  GOSUB 2470
    0x59c635969b30 --------FA   01970  GOSUB 2000
    0x59c635969ba0 --------FA   01980  PRINT
    0x59c635969c20 --------FA   01990  GOTO 1780
    0x59c635969c90 ---------B G 02000  REM PRINT BOARD
    0x59c635969d30 ---------B   02010  PRINT
    0x59c635969ea0 ---------B   02020  PRINT "      SECOND NUMBER"
    0x59c63596a000 ---------B   02030  PRINT "      1 2 3 4 5 6 7"
    0x59c63596a080 ---------B   02040  PRINT
    0x59c63596a380 ---------B   02050  F1$="FIRST #"
    0x59c63596a710 ---------B   02060  FOR I=1 TO 7
    0x59c63596aac0 ---------B   02070      FOR J=1 TO 7
    0x59c63596ad00 ---------B   02080  	    IF J<>1 GOTO 2100
    0x59c63596b450 ---------B   02090  	    PRINT MID$(F1$,I,1);" ";I;" ";
    0x59c63596b930 ---------B T 02100  	    PRINT MID$(P$(I),J,1);
    0x59c63596bab0 ---------B   02110  	    PRINT " ";
    0x59c63596bbf0 ---------B   02120      NEXT J
    0x59c63596be20 ---------B   02130      PRINT CHR$(14)
    0x59c63596bf60 ---------B   02140  NEXT I
    0x59c63596bfd0 ---------B   02150  RETURN
    0x59c63596c3a0 ---------C B 02160  INPUT X(1),Y(1)
    0x59c63596c420 ---------C   02170  REM CHECK ADJACENCY
    0x59c63596c770 ---------C   02180  IF X(1)<0 THEN 2160
    0x59c63596caa0 ---------C   02190  IF Y(1)<0 THEN 2160
    0x59c63596cdd0 ---------C   02200  IF X(1)=0 THEN 2380
    0x59c63596d100 ---------C   02210  IF X(1)>7 THEN 2160
    0x59c63596d430 ---------C   02220  IF Y(1)>7 THEN 2160
    0x59c63596d960 ---------C   02230  IF ABS(X-X(1))>1 THEN 2290
    0x59c63596dea0 ---------C   02240  IF ABS(Y-Y(1))>1 THEN 2290
    0x59c63596e600 ---------C   02250  IF MID$(P$(X(1)),Y(1),1)="*" THEN 2160
    0x59c63596e900 ---------C   02260  X=X(1)
    0x59c63596ebf0 ---------C   02270  Y=Y(1)
    0x59c63596ec40 ---------C   02280  RETURN
    0x59c63596f5c0 ---------C T 02290  PRINT "NOT ADJACENT!"
    0x59c63596f650 ---------C   02300  GOTO 2160
    0x59c63596fc20 ---------D G 02310  IF MID$(P$(X),Y,1)<>"B" THEN 2330
    0x59c63596ff70 ---------D   02320   B=B+1
    0x59c635970540 ---------D T 02330  IF MID$(P$(X),Y,1)<>"R" THEN 2350
    0x59c635970880 ---------D   02340  R=R+1
    0x59c635970ad0 ---------D T 02350  IF B=10 THEN 2410
    0x59c635970d30 ---------D   02360  IF R=10 THEN 2430
    0x59c635970d90 ---------D   02370  RETURN
    0x59c635971010 --------EC T 02380  IF B>R  THEN 2410
    0x59c635971290 --------EC   02390  IF R>B THEN 2430
    0x59c635971530 --------EC   02400  IF R=B THEN 2450
    0x59c635971990 -------EDC T 02410  PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x59c635971a30 -------EDC   02420  GOTO 2460
    0x59c635971e80 -------EDC T 02430  PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x59c635971f20 -------EDC   02440  GOTO 2460
    0x59c635972180 --------EC T 02450  PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x59c635972200 -------EDC T 02460  GOTO 3530
    0x59c6359727e0 ---------E G 02470  FOR G=X-1 TO X+1
    0x59c635972dd0 ---------E   02480      FOR H=Y-1 TO Y+1
    0x59c635973040 ---------E   02490      	IF G=0 THEN 2550
    0x59c6359732b0 ---------E   02500      	IF H=0 THEN 2540
    0x59c635973520 ---------E   02510      	IF G=8 THEN 2550
    0x59c6359737a0 ---------E   02520      	IF H=8 THEN 2540
    0x59c635973d80 ---------E   02530      	IF MID$(P$(G),H,1)<>"*" THEN 2580
    0x59c635973ec0 ---------E T 02540      NEXT H
    0x59c635974010 ---------E T 02550  NEXT G
    0x59c635974180 ---------E   02560  PRINT "GAME OVER"
    0x59c635974200 ---------E   02570  GOTO 2380
    0x59c635974250 ---------E T 02580  RETURN
    0x59c6359742e0 ---------A   02590  REM COMPUTER'S MOVE
    0x59c635974550 --------FA T 02600  IF X=1 THEN 2620
    0x59c6359747b0 --------FA   02610  IF X<>7 THEN 2790
    0x59c635974a10 --------FA T 02620  IF Y>=4 THEN 2680
    0x59c635974d10 --------FA   02630  K=X
    0x59c635975110 --------FA   02640  L=Y+1
    0x59c6359756e0 --------FA   02650  IF MID$(P$(K),L,1)<>"*" THEN 2670
    0x59c635975a20 --------FA   02660  L=Y-1
    0x59c635975a90 --------FA T 02670  GOTO 3050
    0x59c635975ce0 --------FA T 02680  IF Y<>4 THEN 2740
    0x59c635975f20 --------FA   02690  K=X
    0x59c635976260 --------FA   02700  L=Y-1
    0x59c635976830 --------FA   02710  IF MID$(P$(K),L,1)<>"*" THEN 2730
    0x59c635976b70 --------FA   02720  L=Y+1
    0x59c635976be0 --------FA T 02730  GOTO 3050
    0x59c635976e10 --------FA T 02740  K=X
    0x59c635977150 --------FA   02750  L=Y-1
    0x59c635977720 --------FA   02760  IF MID$(P$(K),L,1)<>"*" THEN 2780
    0x59c635977a60 --------FA   02770  L=Y+1
    0x59c635977ad0 --------FA T 02780  GOTO 3050
    0x59c635977d20 --------FA T 02790  IF X>=5 THEN 2930
    0x59c635977f80 --------FA   02800  IF Y>=4 THEN 2850
    0x59c635978000 --------FA   02810  GOSUB 3260
    0x59c635978330 --------FA   02820  K=X-1
    0x59c635978660 --------FA   02830  L=Y+1
    0x59c6359786d0 --------FA   02840  GOTO 3050
    0x59c635978920 --------FA T 02850  IF Y<>4 THEN 2890
    0x59c635978c60 --------FA   02860  K=X-1
    0x59c635978e90 --------FA   02870  L=Y
    0x59c635978f00 --------FA   02880  GOTO 3050
    0x59c635978f70 --------FA T 02890  GOSUB 3260
    0x59c6359792a0 --------FA   02900  K=X-1
    0x59c6359795d0 --------FA   02910  L=Y-1
    0x59c635979640 --------FA   02920  GOTO 3050
    0x59c635979890 --------FA T 02930  IF Y>=4 THEN 2980
    0x59c635979910 --------FA   02940  GOSUB 3260
    0x59c635979c40 --------FA   02950  K=X+1
    0x59c635979f70 --------FA   02960  L=Y+1
    0x59c635979fe0 --------FA   02970  GOTO 3050
    0x59c63597a230 --------FA T 02980  IF Y<>4 THEN 3020
    0x59c63597a570 --------FA   02990  K=X+1
    0x59c63597a7a0 --------FA   03000  L=Y
    0x59c63597a810 --------FA   03010  GOTO 3050
    0x59c63597a880 --------FA T 03020  GOSUB 3260
    0x59c63597abb0 --------FA   03030  K=X+1
    0x59c63597aef0 --------FA   03040  L=Y-1
    0x59c63597b4d0 --------FA T 03050  IF MID$(P$(K),L,1)<>"*" THEN 3130
    0x59c63597bbd0 --------FA T 03060  K=INT(3*RND(0)-0.99999) + X
    0x59c63597be20 --------FA   03070  IF K=0 THEN 3060
    0x59c63597c090 --------FA   03080  IF K=8 THEN 3060
    0x59c63597c790 --------FA T 03090  L=INT(3*RND(0)-0.99999) + Y
    0x59c63597c9e0 --------FA   03100  IF L=0 THEN 3090
    0x59c63597cc50 --------FA   03110  IF L=8 THEN 3090
    0x59c63597d230 --------FA   03120  IF MID$(P$(K),L,1)="*" THEN 3060
    0x59c63597d470 --------FA T 03130  X=K
    0x59c63597d6a0 --------FA   03140  Y=L
    0x59c63597d710 --------FA   03150  GOSUB 2310
    0x59c63597d940 --------FA   03160  P9$="*"
    0x59c63597db70 --------FA   03170  P9=X
    0x59c63597dda0 --------FA   03180  P8=Y
    0x59c63597de20 --------FA   03190  GOSUB 3450
    0x59c63597e170 --------FA   03200  PRINT "I MOVE ";X;Y
    0x59c63597e1f0 --------FA   03210  GOSUB 2000
    0x59c63597e260 --------FA   03220  PRINT
    0x59c63597e2e0 --------FA   03230  GOSUB 2470
    0x59c63597e360 --------FA   03240  GOTO 1780
    0x59c63597e3d0 ---------F   03250  REM GRAB CORNER PEG
    0x59c63597e6e0 ---------F G 03260  X(2)=X
    0x59c63597e9e0 ---------F   03270  Y(2)=Y
    0x59c63597f140 ---------F   03280  FOR M=X(2)-1 TO X(2)+1
    0x59c63597f8b0 ---------F   03290      FOR N=Y(2)-1 TO Y(2)+1
    0x59c63597fb20 ---------F   03300      	IF M=0 THEN 3430
    0x59c63597fd90 ---------F   03310      	IF N=0 THEN 3420
    0x59c635980000 ---------F   03320      	IF M=8 THEN 3430
    0x59c635980270 ---------F   03330      	IF N=8 THEN 3420
    0x59c6359804e0 ---------F   03340      	IF M=1 THEN 3360
    0x59c635980750 ---------F   03350      	IF M<>7 THEN 3430
    0x59c6359809c0 ---------F T 03360      	IF N=1 THEN 3380
    0x59c635980c40 ---------F   03370      	IF N<>7 THEN 3420
    0x59c635981220 ---------F T 03380      	IF MID$(P$(M),N,1)="*" THEN 3440
    0x59c635981460 ---------F   03390      	K=M
    0x59c635981690 ---------F   03400      	L=N
    0x59c635981700 ---------F   03410      	GOTO 3130
    0x59c635981830 ---------F T 03420      NEXT N
    0x59c635981980 ---------F T 03430  NEXT M
    0x59c6359819f0 ---------F T 03440  RETURN
    0x59c635981ad0 ---------G G 03450  REM SUBROUTINE TO INSERT A CHARATER IN A CHARATER STRING
    0x59c635981dd0 ---------G   03460  DIM P7(10)
    0x59c6359820c0 ---------G   03470  CHANGE P$(P9) TO P7
    0x59c6359823c0 ---------G   03480  DIM P6(10)
    0x59c6359825d0 ---------G   03490  CHANGE P9$ TO P6
    0x59c6359829e0 ---------G   03500  P7(P8) = P6(1)
    0x59c635982cd0 ---------G   03510  CHANGE P7 TO P$(P9)
    0x59c635982d50 ---------G   03520  RETURN
    0x59c635982db0 -------EDC T 03530  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01270      01090T
     01320      01300T
     01350      01310T
     01510      01520T, 01530T, 01560T, 01770T
     01570      01540T
     01650      01490T
     01760      01650T
     01780      01640T, 01750T, 01990T, 03240T
     02000      01470G, 01610G, 01730G, 01870G, 01970G, 03210G
     02100      02080T
     02160      01790G, 01900G, 02180T, 02190T, 02210T, 02220T, 02250T, 02300T
     02290      02230T, 02240T
     02310      01800G, 01910G, 03150G
     02330      02310T
     02350      02330T
     02380      02200T, 02570T
     02410      02350T, 02380T
     02430      02360T, 02390T
     02450      02400T
     02460      02420T, 02440T
     02470      01850G, 01960G, 03230G
     02540      02500T, 02520T
     02550      02490T, 02510T
     02580      02530T
     02600      01630T, 01860T
     02620      02600T
     02670      02650T
     02680      02620T
     02730      02710T
     02740      02680T
     02780      02760T
     02790      02610T
     02850      02800T
     02890      02850T
     02930      02790T
     02980      02930T
     03020      02980T
     03050      02670T, 02730T, 02780T, 02840T, 02880T, 02920T, 02970T, 03010T
     03060      03070T, 03080T, 03120T
     03090      03100T, 03110T
     03130      03050T, 03410T
     03260      02810G, 02890G, 02940G, 03020G
     03360      03340T
     03380      03360T
     03420      03310T, 03330T, 03370T
     03430      03300T, 03320T, 03350T
     03440      03380T
     03450      01600G, 01720G, 01840G, 01950G, 03190G
     03530      02460T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x59c63595adb0 (01000)   0x59c63595adb0 (01000)   0x59c635982db0 (03530)   0x59c63597e360 (03240)   
   B) 0x59c635969c90 (02000)   0x59c635969c90 (02000)   0x59c63596bfd0 (02150)   0x59c63596bfd0 (02150)   
   C) 0x59c63596c3a0 (02160)   0x59c63596c3a0 (02160)   0x59c63596ec40 (02280)   0x59c635982db0 (03530)   
   D) 0x59c63596fc20 (02310)   0x59c63596fc20 (02310)   0x59c635970d90 (02370)   0x59c635982db0 (03530)   
   E) 0x59c635971010 (02380)   0x59c6359727e0 (02470)   0x59c635974250 (02580)   0x59c635982db0 (03530)   
   F) 0x59c635968520 (01780)   0x59c63597e6e0 (03260)   0x59c6359819f0 (03440)   0x59c6359819f0 (03440)   
   G) 0x59c635981ad0 (03450)   0x59c635981ad0 (03450)   0x59c635982d50 (03520)   0x59c635982d50 (03520)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine C!
    NOTE: Routine E overlaps, or is tangled with, routine C!
    NOTE: Routine G overlaps, or is tangled with, routine C!
    NOTE: Routine E overlaps, or is tangled with, routine D!
    NOTE: Routine G overlaps, or is tangled with, routine D!
    NOTE: Routine G overlaps, or is tangled with, routine E!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/pressup.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59c63595adb0 ---------A   01000  RANDOMIZE
    0x59c635959b80 ---------A   01010  REM *** PRESS UPS ***
    0x59c63595af30 ---------A   01020  REM *** RON BEHRNS ***
    0x59c63595ae70 ---------A   01030  REM *** 1979 ***
    0x59c63595aff0 ---------A   01040  B=0
    0x59c635959fc0 ---------A   01050  R=0
    0x59c6359586d0 ---------A   01060  PRINT "THIS IS THE GAME OF PRESS UPS"
    0x59c635958670 ---------A   01070  PRINT "INSTRUCTIONS (Y OR N) ";
    0x59c63595a5e0 ---------A   01080  INPUT I$
    0x59c63595a720 ---------A   01090  IF I$<>"Y" THEN 1270
    0x59c63595b140 ---------A   01100  PRINT "TWO MAY PLAY -- THE COMPUTER IS YOUR REFEREE"
    0x59c635959620 ---------A   01110  PRINT "OR YOU MAY PLAY AGAINST THE COMPUTER"
    0x59c6359596d0 ---------A   01120  PRINT
    0x59c6359608a0 ---------A   01130  PRINT "ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL"
    0x59c635960a10 ---------A   01140  PRINT "A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID"
    0x59c635960bb0 ---------A   01150  PRINT "THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS"
    0x59c635960d60 ---------A   01160  PRINT "YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS"
    0x59c635960f10 ---------A   01170  PRINT "IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST"
    0x59c635961080 ---------A   01180  PRINT "ONE PRESSED, THE GAME IS OVER."
    0x59c635961240 ---------A   01190  PRINT "THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS"
    0x59c6359613b0 ---------A   01200  PRINT "END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE "
    0x59c635961510 ---------A   01210  PRINT "X-COORDINATE"
    0x59c6359615d0 ---------A   01220  PRINT
    0x59c6359617a0 ---------A   01230  PRINT "DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST"
    0x59c635961970 ---------A   01240  PRINT "THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)"
    0x59c635961ae0 ---------A   01250  PRINT "NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING"
    0x59c635961c40 ---------A   01260  PRINT "DIAGONALLY)."
    0x59c635961ce0 ---------A T 01270  PRINT
    0x59c635961e40 ---------A   01280  PRINT "PLAY WITH PARTNER(P) OR COMPUTER(C) ";
    0x59c635962040 ---------A   01290  INPUT R$
    0x59c6359622c0 ---------A   01300  IF R$="C" THEN 1320
    0x59c635962370 ---------A   01310  GOTO 1350
    0x59c6359624c0 ---------A T 01320  PRINT "COMPUTER HAS BLUE PEGS--OPPONENT IS PLAYER B"
    0x59c635962860 ---------A   01330  PRINT "COMPUTER FIRST(Y OR N) ";
    0x59c635962a80 ---------A   01340  INPUT F$
    0x59c635962b10 ---------A T 01350  PRINT
    0x59c635962c80 ---------A   01360  PRINT "READY... HERE IS THE BOARD"
    0x59c635962d00 ---------A   01370  PRINT
    0x59c635962d80 ---------A   01380  PRINT
    0x59c635963060 ---------A   01390  DIM P$(7)
    0x59c635963350 ---------A   01400  P$(1)="YBBBBBY"
    0x59c635963640 ---------A   01410  P$(2)="RYYYYYR"
    0x59c635963930 ---------A   01420  P$(3)="RYYYYYR"
    0x59c635963c20 ---------A   01430  P$(4)="RYYYYYR"
    0x59c635963f10 ---------A   01440  P$(5)="RYYYYYR"
    0x59c635964200 ---------A   01450  P$(6)="RYYYYYR"
    0x59c6359644f0 ---------A   01460  P$(7)="YBBBBBY"
    0x59c635964560 ---------A   01470  GOSUB 2000
    0x59c6359645e0 ---------A   01480  PRINT
    0x59c635964870 ---------A   01490  IF R$="C" THEN 1650
    0x59c6359649d0 ---------A   01500  PRINT "MOVE:PLAYER A"
    0x59c635964d90 ---------A T 01510  INPUT X,Y
    0x59c635964ff0 ---------A   01520  IF X>7 THEN 1510
    0x59c635965260 ---------A   01530  IF Y>7 THEN 1510
    0x59c635965860 ---------A   01540  IF MID$(P$(X),Y,1)="Y" THEN 1570
    0x59c6359659d0 ---------A   01550  PRINT "ILLEGAL MOVE...PRESS A YELLOW PEG!! "
    0x59c635965a50 ---------A   01560  GOTO 1510
    0x59c635965d40 ---------A T 01570  P9$="*"
    0x59c635966030 ---------A   01580  P9=X
    0x59c635966320 ---------A   01590  P8=Y
    0x59c635966390 ---------A   01600  GOSUB 3450
    0x59c635966400 ---------A   01610  GOSUB 2000
    0x59c635966480 ---------A   01620  PRINT
    0x59c635966700 ---------A   01630  IF R$="C" THEN 2600
    0x59c635966790 ---------A   01640  GO TO 1780
    0x59c635966e20 ---------A T 01650  IF F$<>"Y" THEN 1760
    0x59c635967400 ---------A   01660  X=INT(3*RND(0) + 3)
    0x59c635967620 ---------A   01670  Y=4
    0x59c635967970 ---------A   01680  PRINT "I MOVE ";X;Y
    0x59c635967bb0 ---------A   01690  P9$="*"
    0x59c635967de0 ---------A   01700  P9=X
    0x59c635968010 ---------A   01710  P8=Y
    0x59c635968080 ---------A   01720  GOSUB 3450
    0x59c6359680f0 ---------A   01730  GOSUB 2000
    0x59c635968160 ---------A   01740  PRINT
    0x59c6359681f0 ---------A   01750  GOTO 1780
    0x59c635968340 ---------A T 01760  PRINT "MOVE; PLAYER B"
    0x59c6359683d0 ---------A   01770  GOTO1510
    0x59c635968520 --------FA T 01780  PRINT "MOVE: PLAYER B"
    0x59c6359685a0 --------FA   01790  GOSUB 2160
    0x59c635968610 --------FA   01800  GOSUB 2310
    0x59c635968840 --------FA   01810  P9$="*"
    0x59c635968a70 --------FA   01820  P9=X
    0x59c635968ca0 --------FA   01830  P8=Y
    0x59c635968d10 --------FA   01840  GOSUB 3450
    0x59c635968d90 --------FA   01850  GOSUB 2470
    0x59c635969000 --------FA   01860  IF R$="C" THEN 2600
    0x59c635969080 --------FA   01870  GOSUB 2000
    0x59c635969100 --------FA   01880  PRINT
    0x59c635969260 --------FA   01890  PRINT "MOVE: PLAYER A"
    0x59c6359692e0 --------FA   01900  GOSUB 2160
    0x59c635969350 --------FA   01910  GOSUB 2310
    0x59c635969580 --------FA   01920  P9$="*"
    0x59c6359697b0 --------FA   01930  P9=X
    0x59c6359699e0 --------FA   01940  P8=Y
    0x59c635969a50 --------FA   01950  GOSUB 3450
    0x59c635969ac0 --------FA   01960  GOSUB 2470
    0x59c635969b30 --------FA   01970  GOSUB 2000
    0x59c635969ba0 --------FA   01980  PRINT
    0x59c635969c20 --------FA   01990  GOTO 1780
    0x59c635969c90 ---------B G 02000  REM PRINT BOARD
    0x59c635969d30 ---------B   02010  PRINT
    0x59c635969ea0 ---------B   02020  PRINT "      SECOND NUMBER"
    0x59c63596a000 ---------B   02030  PRINT "      1 2 3 4 5 6 7"
    0x59c63596a080 ---------B   02040  PRINT
    0x59c63596a380 ---------B   02050  F1$="FIRST #"
    0x59c63596a710 ---------B   02060  FOR I=1 TO 7
    0x59c63596aac0 ---------B   02070  FOR J=1 TO 7
    0x59c63596ad00 ---------B   02080  IF J<>1 GOTO 2100
    0x59c63596b450 ---------B   02090  PRINT MID$(F1$,I,1);" ";I;" ";
    0x59c63596b930 ---------B T 02100  PRINT MID$(P$(I),J,1);
    0x59c63596bab0 ---------B   02110  PRINT " ";
    0x59c63596bbf0 ---------B   02120  NEXT J
    0x59c63596be20 ---------B   02130  PRINT CHR$(14)
    0x59c63596bf60 ---------B   02140  NEXT I
    0x59c63596bfd0 ---------B   02150  RETURN
    0x59c63596c3a0 ---------C B 02160  INPUT X(1),Y(1)
    0x59c63596c420 ---------C   02170  REM CHECK ADJACENCY
    0x59c63596c770 ---------C   02180  IF X(1)<0 THEN 2160
    0x59c63596caa0 ---------C   02190  IF Y(1)<0 THEN 2160
    0x59c63596cdd0 ---------C   02200  IF X(1)=0 THEN 2380
    0x59c63596d100 ---------C   02210  IF X(1)>7 THEN 2160
    0x59c63596d430 ---------C   02220  IF Y(1)>7 THEN 2160
    0x59c63596d960 ---------C   02230  IF ABS(X-X(1))>1 THEN 2290
    0x59c63596dea0 ---------C   02240  IF ABS(Y-Y(1))>1 THEN 2290
    0x59c63596e600 ---------C   02250  IF MID$(P$(X(1)),Y(1),1)="*" THEN 2160
    0x59c63596e900 ---------C   02260  X=X(1)
    0x59c63596ebf0 ---------C   02270  Y=Y(1)
    0x59c63596ec40 ---------C   02280  RETURN
    0x59c63596f5c0 ---------C T 02290  PRINT "NOT ADJACENT!"
    0x59c63596f650 ---------C   02300  GOTO 2160
    0x59c63596fc20 ---------D G 02310  IF MID$(P$(X),Y,1)<>"B" THEN 2330
    0x59c63596ff70 ---------D   02320  B=B+1
    0x59c635970540 ---------D T 02330  IF MID$(P$(X),Y,1)<>"R" THEN 2350
    0x59c635970880 ---------D   02340  R=R+1
    0x59c635970ad0 ---------D T 02350  IF B=10 THEN 2410
    0x59c635970d30 ---------D   02360  IF R=10 THEN 2430
    0x59c635970d90 ---------D   02370  RETURN
    0x59c635971010 --------EC T 02380  IF B>R  THEN 2410
    0x59c635971290 --------EC   02390  IF R>B THEN 2430
    0x59c635971530 --------EC   02400  IF R=B THEN 2450
    0x59c635971990 -------EDC T 02410  PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x59c635971a30 -------EDC   02420  GOTO 2460
    0x59c635971e80 -------EDC T 02430  PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x59c635971f20 -------EDC   02440  GOTO 2460
    0x59c635972180 --------EC T 02450  PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x59c635972200 -------EDC T 02460  GOTO 3530
    0x59c6359727e0 ---------E G 02470  FOR G=X-1 TO X+1
    0x59c635972dd0 ---------E   02480  FOR H=Y-1 TO Y+1
    0x59c635973040 ---------E   02490  IF G=0 THEN 2550
    0x59c6359732b0 ---------E   02500  IF H=0 THEN 2540
    0x59c635973520 ---------E   02510  IF G=8 THEN 2550
    0x59c6359737a0 ---------E   02520  IF H=8 THEN 2540
    0x59c635973d80 ---------E   02530  IF MID$(P$(G),H,1)<>"*" THEN 2580
    0x59c635973ec0 ---------E T 02540  NEXT H
    0x59c635974010 ---------E T 02550  NEXT G
    0x59c635974180 ---------E   02560  PRINT "GAME OVER"
    0x59c635974200 ---------E   02570  GOTO 2380
    0x59c635974250 ---------E T 02580  RETURN
    0x59c6359742e0 ---------A   02590  REM COMPUTER'S MOVE
    0x59c635974550 --------FA T 02600  IF X=1 THEN 2620
    0x59c6359747b0 --------FA   02610  IF X<>7 THEN 2790
    0x59c635974a10 --------FA T 02620  IF Y>=4 THEN 2680
    0x59c635974d10 --------FA   02630  K=X
    0x59c635975110 --------FA   02640  L=Y+1
    0x59c6359756e0 --------FA   02650  IF MID$(P$(K),L,1)<>"*" THEN 2670
    0x59c635975a20 --------FA   02660  L=Y-1
    0x59c635975a90 --------FA T 02670  GOTO 3050
    0x59c635975ce0 --------FA T 02680  IF Y<>4 THEN 2740
    0x59c635975f20 --------FA   02690  K=X
    0x59c635976260 --------FA   02700  L=Y-1
    0x59c635976830 --------FA   02710  IF MID$(P$(K),L,1)<>"*" THEN 2730
    0x59c635976b70 --------FA   02720  L=Y+1
    0x59c635976be0 --------FA T 02730  GOTO 3050
    0x59c635976e10 --------FA T 02740  K=X
    0x59c635977150 --------FA   02750  L=Y-1
    0x59c635977720 --------FA   02760  IF MID$(P$(K),L,1)<>"*" THEN 2780
    0x59c635977a60 --------FA   02770  L=Y+1
    0x59c635977ad0 --------FA T 02780  GOTO 3050
    0x59c635977d20 --------FA T 02790  IF X>=5 THEN 2930
    0x59c635977f80 --------FA   02800  IF Y>=4 THEN 2850
    0x59c635978000 --------FA   02810  GOSUB 3260
    0x59c635978330 --------FA   02820  K=X-1
    0x59c635978660 --------FA   02830  L=Y+1
    0x59c6359786d0 --------FA   02840  GOTO 3050
    0x59c635978920 --------FA T 02850  IF Y<>4 THEN 2890
    0x59c635978c60 --------FA   02860  K=X-1
    0x59c635978e90 --------FA   02870  L=Y
    0x59c635978f00 --------FA   02880  GOTO 3050
    0x59c635978f70 --------FA T 02890  GOSUB 3260
    0x59c6359792a0 --------FA   02900  K=X-1
    0x59c6359795d0 --------FA   02910  L=Y-1
    0x59c635979640 --------FA   02920  GOTO 3050
    0x59c635979890 --------FA T 02930  IF Y>=4 THEN 2980
    0x59c635979910 --------FA   02940  GOSUB 3260
    0x59c635979c40 --------FA   02950  K=X+1
    0x59c635979f70 --------FA   02960  L=Y+1
    0x59c635979fe0 --------FA   02970  GOTO 3050
    0x59c63597a230 --------FA T 02980  IF Y<>4 THEN 3020
    0x59c63597a570 --------FA   02990  K=X+1
    0x59c63597a7a0 --------FA   03000  L=Y
    0x59c63597a810 --------FA   03010  GOTO 3050
    0x59c63597a880 --------FA T 03020  GOSUB 3260
    0x59c63597abb0 --------FA   03030  K=X+1
    0x59c63597aef0 --------FA   03040  L=Y-1
    0x59c63597b4d0 --------FA T 03050  IF MID$(P$(K),L,1)<>"*" THEN 3130
    0x59c63597bbd0 --------FA T 03060  K=INT(3*RND(0)-0.99999) + X
    0x59c63597be20 --------FA   03070  IF K=0 THEN 3060
    0x59c63597c090 --------FA   03080  IF K=8 THEN 3060
    0x59c63597c790 --------FA T 03090  L=INT(3*RND(0)-0.99999) + Y
    0x59c63597c9e0 --------FA   03100  IF L=0 THEN 3090
    0x59c63597cc50 --------FA   03110  IF L=8 THEN 3090
    0x59c63597d230 --------FA   03120  IF MID$(P$(K),L,1)="*" THEN 3060
    0x59c63597d470 --------FA T 03130  X=K
    0x59c63597d6a0 --------FA   03140  Y=L
    0x59c63597d710 --------FA   03150  GOSUB 2310
    0x59c63597d940 --------FA   03160  P9$="*"
    0x59c63597db70 --------FA   03170  P9=X
    0x59c63597dda0 --------FA   03180  P8=Y
    0x59c63597de20 --------FA   03190  GOSUB 3450
    0x59c63597e170 --------FA   03200  PRINT "I MOVE ";X;Y
    0x59c63597e1f0 --------FA   03210  GOSUB 2000
    0x59c63597e260 --------FA   03220  PRINT
    0x59c63597e2e0 --------FA   03230  GOSUB 2470
    0x59c63597e360 --------FA   03240  GOTO 1780
    0x59c63597e3d0 ---------F   03250  REM GRAB CORNER PEG
    0x59c63597e6e0 ---------F G 03260  X(2)=X
    0x59c63597e9e0 ---------F   03270  Y(2)=Y
    0x59c63597f140 ---------F   03280  FOR M=X(2)-1 TO X(2)+1
    0x59c63597f8b0 ---------F   03290  FOR N=Y(2)-1 TO Y(2)+1
    0x59c63597fb20 ---------F   03300  IF M=0 THEN 3430
    0x59c63597fd90 ---------F   03310  IF N=0 THEN 3420
    0x59c635980000 ---------F   03320  IF M=8 THEN 3430
    0x59c635980270 ---------F   03330  IF N=8 THEN 3420
    0x59c6359804e0 ---------F   03340  IF M=1 THEN 3360
    0x59c635980750 ---------F   03350  IF M<>7 THEN 3430
    0x59c6359809c0 ---------F T 03360  IF N=1 THEN 3380
    0x59c635980c40 ---------F   03370  IF N<>7 THEN 3420
    0x59c635981220 ---------F T 03380  IF MID$(P$(M),N,1)="*" THEN 3440
    0x59c635981460 ---------F   03390  K=M
    0x59c635981690 ---------F   03400  L=N
    0x59c635981700 ---------F   03410  GOTO 3130
    0x59c635981830 ---------F T 03420  NEXT N
    0x59c635981980 ---------F T 03430  NEXT M
    0x59c6359819f0 ---------F T 03440  RETURN
    0x59c635981ad0 ---------G G 03450  REM SUBROUTINE TO INSERT A CHARATER IN A CHARATER STRING
    0x59c635981dd0 ---------G   03460  DIM P7(10)
    0x59c6359820c0 ---------G   03470  CHANGE P$(P9) TO P7
    0x59c6359823c0 ---------G   03480  DIM P6(10)
    0x59c6359825d0 ---------G   03490  CHANGE P9$ TO P6
    0x59c6359829e0 ---------G   03500  P7(P8) = P6(1)
    0x59c635982cd0 ---------G   03510  CHANGE P7 TO P$(P9)
    0x59c635982d50 ---------G   03520  RETURN
    0x59c635982db0 -------EDC T 03530  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/pressup.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59c63595adb0 ---------A   01000  RANDOMIZE
    0x59c635959b80 ---------A   01010  REM *** PRESS UPS ***
    0x59c63595af30 ---------A   01020  REM *** RON BEHRNS ***
    0x59c63595ae70 ---------A   01030  REM *** 1979 ***
    0x59c63595aff0 ---------A   01040  B=0
    0x59c635959fc0 ---------A   01050  R=0
    0x59c6359586d0 ---------A   01060  PRINT "THIS IS THE GAME OF PRESS UPS"
    0x59c635958670 ---------A   01070  PRINT "INSTRUCTIONS (Y OR N) ";
    0x59c63595a5e0 ---------A   01080  INPUT I$
    0x59c63595a720 ---------A   01090  IF I$<>"Y" THEN 1270
    0x59c63595b140 ---------A   01100  PRINT "TWO MAY PLAY -- THE COMPUTER IS YOUR REFEREE"
    0x59c635959620 ---------A   01110  PRINT "OR YOU MAY PLAY AGAINST THE COMPUTER"
    0x59c6359596d0 ---------A   01120  PRINT
    0x59c6359608a0 ---------A   01130  PRINT "ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL"
    0x59c635960a10 ---------A   01140  PRINT "A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID"
    0x59c635960bb0 ---------A   01150  PRINT "THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS"
    0x59c635960d60 ---------A   01160  PRINT "YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS"
    0x59c635960f10 ---------A   01170  PRINT "IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST"
    0x59c635961080 ---------A   01180  PRINT "ONE PRESSED, THE GAME IS OVER."
    0x59c635961240 ---------A   01190  PRINT "THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS"
    0x59c6359613b0 ---------A   01200  PRINT "END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE "
    0x59c635961510 ---------A   01210  PRINT "X-COORDINATE"
    0x59c6359615d0 ---------A   01220  PRINT
    0x59c6359617a0 ---------A   01230  PRINT "DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST"
    0x59c635961970 ---------A   01240  PRINT "THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)"
    0x59c635961ae0 ---------A   01250  PRINT "NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING"
    0x59c635961c40 ---------A   01260  PRINT "DIAGONALLY)."
    0x59c635961ce0 ---------A T 01270  PRINT
    0x59c635961e40 ---------A   01280  PRINT "PLAY WITH PARTNER(P) OR COMPUTER(C) ";
    0x59c635962040 ---------A   01290  INPUT R$
    0x59c6359622c0 ---------A   01300  IF R$="C" THEN 1320
    0x59c635962370 ---------A   01310  GOTO 1350
    0x59c6359624c0 ---------A T 01320  PRINT "COMPUTER HAS BLUE PEGS--OPPONENT IS PLAYER B"
    0x59c635962860 ---------A   01330  PRINT "COMPUTER FIRST(Y OR N) ";
    0x59c635962a80 ---------A   01340  INPUT F$
    0x59c635962b10 ---------A T 01350  PRINT
    0x59c635962c80 ---------A   01360  PRINT "READY... HERE IS THE BOARD"
    0x59c635962d00 ---------A   01370  PRINT
    0x59c635962d80 ---------A   01380  PRINT
    0x59c635963060 ---------A   01390  DIM P$(7)
    0x59c635963350 ---------A   01400  P$(1)="YBBBBBY"
    0x59c635963640 ---------A   01410  P$(2)="RYYYYYR"
    0x59c635963930 ---------A   01420  P$(3)="RYYYYYR"
    0x59c635963c20 ---------A   01430  P$(4)="RYYYYYR"
    0x59c635963f10 ---------A   01440  P$(5)="RYYYYYR"
    0x59c635964200 ---------A   01450  P$(6)="RYYYYYR"
    0x59c6359644f0 ---------A   01460  P$(7)="YBBBBBY"
    0x59c635964560 ---------A   01470  GOSUB 2000
    0x59c6359645e0 ---------A   01480  PRINT
    0x59c635964870 ---------A   01490  IF R$="C" THEN 1650
    0x59c6359649d0 ---------A   01500  PRINT "MOVE:PLAYER A"
    0x59c635964d90 ---------A T 01510  INPUT X,Y
    0x59c635964ff0 ---------A   01520  IF X>7 THEN 1510
    0x59c635965260 ---------A   01530  IF Y>7 THEN 1510
    0x59c635965860 ---------A   01540  IF MID$(P$(X),Y,1)="Y" THEN 1570
    0x59c6359659d0 ---------A   01550  PRINT "ILLEGAL MOVE...PRESS A YELLOW PEG!! "
    0x59c635965a50 ---------A   01560  GOTO 1510
    0x59c635965d40 ---------A T 01570  P9$="*"
    0x59c635966030 ---------A   01580  P9=X
    0x59c635966320 ---------A   01590  P8=Y
    0x59c635966390 ---------A   01600  GOSUB 3450
    0x59c635966400 ---------A   01610  GOSUB 2000
    0x59c635966480 ---------A   01620  PRINT
    0x59c635966700 ---------A   01630  IF R$="C" THEN 2600
    0x59c635966790 ---------A   01640  GO TO 1780
    0x59c635966e20 ---------A T 01650  IF F$<>"Y" THEN 1760
    0x59c635967400 ---------A   01660  X=INT(3*RND(0) + 3)
    0x59c635967620 ---------A   01670  Y=4
    0x59c635967970 ---------A   01680  PRINT "I MOVE ";X;Y
    0x59c635967bb0 ---------A   01690  P9$="*"
    0x59c635967de0 ---------A   01700  P9=X
    0x59c635968010 ---------A   01710  P8=Y
    0x59c635968080 ---------A   01720  GOSUB 3450
    0x59c6359680f0 ---------A   01730  GOSUB 2000
    0x59c635968160 ---------A   01740  PRINT
    0x59c6359681f0 ---------A   01750  GOTO 1780
    0x59c635968340 ---------A T 01760  PRINT "MOVE; PLAYER B"
    0x59c6359683d0 ---------A   01770  GOTO1510
    0x59c635968520 --------FA T 01780  PRINT "MOVE: PLAYER B"
    0x59c6359685a0 --------FA   01790  GOSUB 2160
    0x59c635968610 --------FA   01800  GOSUB 2310
    0x59c635968840 --------FA   01810  P9$="*"
    0x59c635968a70 --------FA   01820  P9=X
    0x59c635968ca0 --------FA   01830  P8=Y
    0x59c635968d10 --------FA   01840  GOSUB 3450
    0x59c635968d90 --------FA   01850  GOSUB 2470
    0x59c635969000 --------FA   01860  IF R$="C" THEN 2600
    0x59c635969080 --------FA   01870  GOSUB 2000
    0x59c635969100 --------FA   01880  PRINT
    0x59c635969260 --------FA   01890  PRINT "MOVE: PLAYER A"
    0x59c6359692e0 --------FA   01900  GOSUB 2160
    0x59c635969350 --------FA   01910  GOSUB 2310
    0x59c635969580 --------FA   01920  P9$="*"
    0x59c6359697b0 --------FA   01930  P9=X
    0x59c6359699e0 --------FA   01940  P8=Y
    0x59c635969a50 --------FA   01950  GOSUB 3450
    0x59c635969ac0 --------FA   01960  GOSUB 2470
    0x59c635969b30 --------FA   01970  GOSUB 2000
    0x59c635969ba0 --------FA   01980  PRINT
    0x59c635969c20 --------FA   01990  GOTO 1780
    0x59c635969c90 ---------B G 02000  REM PRINT BOARD
    0x59c635969d30 ---------B   02010  PRINT
    0x59c635969ea0 ---------B   02020  PRINT "      SECOND NUMBER"
    0x59c63596a000 ---------B   02030  PRINT "      1 2 3 4 5 6 7"
    0x59c63596a080 ---------B   02040  PRINT
    0x59c63596a380 ---------B   02050  F1$="FIRST #"
    0x59c63596a710 ---------B   02060  FOR I=1 TO 7
    0x59c63596aac0 ---------B   02070  FOR J=1 TO 7
    0x59c63596ad00 ---------B   02080  IF J<>1 GOTO 2100
    0x59c63596b450 ---------B   02090  PRINT MID$(F1$,I,1);" ";I;" ";
    0x59c63596b930 ---------B T 02100  PRINT MID$(P$(I),J,1);
    0x59c63596bab0 ---------B   02110  PRINT " ";
    0x59c63596bbf0 ---------B   02120  NEXT J
    0x59c63596be20 ---------B   02130  PRINT CHR$(14)
    0x59c63596bf60 ---------B   02140  NEXT I
    0x59c63596bfd0 ---------B   02150  RETURN
    0x59c63596c3a0 ---------C B 02160  INPUT X(1),Y(1)
    0x59c63596c420 ---------C   02170  REM CHECK ADJACENCY
    0x59c63596c770 ---------C   02180  IF X(1)<0 THEN 2160
    0x59c63596caa0 ---------C   02190  IF Y(1)<0 THEN 2160
    0x59c63596cdd0 ---------C   02200  IF X(1)=0 THEN 2380
    0x59c63596d100 ---------C   02210  IF X(1)>7 THEN 2160
    0x59c63596d430 ---------C   02220  IF Y(1)>7 THEN 2160
    0x59c63596d960 ---------C   02230  IF ABS(X-X(1))>1 THEN 2290
    0x59c63596dea0 ---------C   02240  IF ABS(Y-Y(1))>1 THEN 2290
    0x59c63596e600 ---------C   02250  IF MID$(P$(X(1)),Y(1),1)="*" THEN 2160
    0x59c63596e900 ---------C   02260  X=X(1)
    0x59c63596ebf0 ---------C   02270  Y=Y(1)
    0x59c63596ec40 ---------C   02280  RETURN
    0x59c63596f5c0 ---------C T 02290  PRINT "NOT ADJACENT!"
    0x59c63596f650 ---------C   02300  GOTO 2160
    0x59c63596fc20 ---------D G 02310  IF MID$(P$(X),Y,1)<>"B" THEN 2330
    0x59c63596ff70 ---------D   02320  B=B+1
    0x59c635970540 ---------D T 02330  IF MID$(P$(X),Y,1)<>"R" THEN 2350
    0x59c635970880 ---------D   02340  R=R+1
    0x59c635970ad0 ---------D T 02350  IF B=10 THEN 2410
    0x59c635970d30 ---------D   02360  IF R=10 THEN 2430
    0x59c635970d90 ---------D   02370  RETURN
    0x59c635971010 --------EC T 02380  IF B>R  THEN 2410
    0x59c635971290 --------EC   02390  IF R>B THEN 2430
    0x59c635971530 --------EC   02400  IF R=B THEN 2450
    0x59c635971990 -------EDC T 02410  PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x59c635971a30 -------EDC   02420  GOTO 2460
    0x59c635971e80 -------EDC T 02430  PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x59c635971f20 -------EDC   02440  GOTO 2460
    0x59c635972180 --------EC T 02450  PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x59c635972200 -------EDC T 02460  GOTO 3530
    0x59c6359727e0 ---------E G 02470  FOR G=X-1 TO X+1
    0x59c635972dd0 ---------E   02480  FOR H=Y-1 TO Y+1
    0x59c635973040 ---------E   02490  IF G=0 THEN 2550
    0x59c6359732b0 ---------E   02500  IF H=0 THEN 2540
    0x59c635973520 ---------E   02510  IF G=8 THEN 2550
    0x59c6359737a0 ---------E   02520  IF H=8 THEN 2540
    0x59c635973d80 ---------E   02530  IF MID$(P$(G),H,1)<>"*" THEN 2580
    0x59c635973ec0 ---------E T 02540  NEXT H
    0x59c635974010 ---------E T 02550  NEXT G
    0x59c635974180 ---------E   02560  PRINT "GAME OVER"
    0x59c635974200 ---------E   02570  GOTO 2380
    0x59c635974250 ---------E T 02580  RETURN
    0x59c6359742e0 ---------A   02590  REM COMPUTER'S MOVE
    0x59c635974550 --------FA T 02600  IF X=1 THEN 2620
    0x59c6359747b0 --------FA   02610  IF X<>7 THEN 2790
    0x59c635974a10 --------FA T 02620  IF Y>=4 THEN 2680
    0x59c635974d10 --------FA   02630  K=X
    0x59c635975110 --------FA   02640  L=Y+1
    0x59c6359756e0 --------FA   02650  IF MID$(P$(K),L,1)<>"*" THEN 2670
    0x59c635975a20 --------FA   02660  L=Y-1
    0x59c635975a90 --------FA T 02670  GOTO 3050
    0x59c635975ce0 --------FA T 02680  IF Y<>4 THEN 2740
    0x59c635975f20 --------FA   02690  K=X
    0x59c635976260 --------FA   02700  L=Y-1
    0x59c635976830 --------FA   02710  IF MID$(P$(K),L,1)<>"*" THEN 2730
    0x59c635976b70 --------FA   02720  L=Y+1
    0x59c635976be0 --------FA T 02730  GOTO 3050
    0x59c635976e10 --------FA T 02740  K=X
    0x59c635977150 --------FA   02750  L=Y-1
    0x59c635977720 --------FA   02760  IF MID$(P$(K),L,1)<>"*" THEN 2780
    0x59c635977a60 --------FA   02770  L=Y+1
    0x59c635977ad0 --------FA T 02780  GOTO 3050
    0x59c635977d20 --------FA T 02790  IF X>=5 THEN 2930
    0x59c635977f80 --------FA   02800  IF Y>=4 THEN 2850
    0x59c635978000 --------FA   02810  GOSUB 3260
    0x59c635978330 --------FA   02820  K=X-1
    0x59c635978660 --------FA   02830  L=Y+1
    0x59c6359786d0 --------FA   02840  GOTO 3050
    0x59c635978920 --------FA T 02850  IF Y<>4 THEN 2890
    0x59c635978c60 --------FA   02860  K=X-1
    0x59c635978e90 --------FA   02870  L=Y
    0x59c635978f00 --------FA   02880  GOTO 3050
    0x59c635978f70 --------FA T 02890  GOSUB 3260
    0x59c6359792a0 --------FA   02900  K=X-1
    0x59c6359795d0 --------FA   02910  L=Y-1
    0x59c635979640 --------FA   02920  GOTO 3050
    0x59c635979890 --------FA T 02930  IF Y>=4 THEN 2980
    0x59c635979910 --------FA   02940  GOSUB 3260
    0x59c635979c40 --------FA   02950  K=X+1
    0x59c635979f70 --------FA   02960  L=Y+1
    0x59c635979fe0 --------FA   02970  GOTO 3050
    0x59c63597a230 --------FA T 02980  IF Y<>4 THEN 3020
    0x59c63597a570 --------FA   02990  K=X+1
    0x59c63597a7a0 --------FA   03000  L=Y
    0x59c63597a810 --------FA   03010  GOTO 3050
    0x59c63597a880 --------FA T 03020  GOSUB 3260
    0x59c63597abb0 --------FA   03030  K=X+1
    0x59c63597aef0 --------FA   03040  L=Y-1
    0x59c63597b4d0 --------FA T 03050  IF MID$(P$(K),L,1)<>"*" THEN 3130
    0x59c63597bbd0 --------FA T 03060  K=INT(3*RND(0)-0.99999) + X
    0x59c63597be20 --------FA   03070  IF K=0 THEN 3060
    0x59c63597c090 --------FA   03080  IF K=8 THEN 3060
    0x59c63597c790 --------FA T 03090  L=INT(3*RND(0)-0.99999) + Y
    0x59c63597c9e0 --------FA   03100  IF L=0 THEN 3090
    0x59c63597cc50 --------FA   03110  IF L=8 THEN 3090
    0x59c63597d230 --------FA   03120  IF MID$(P$(K),L,1)="*" THEN 3060
    0x59c63597d470 --------FA T 03130  X=K
    0x59c63597d6a0 --------FA   03140  Y=L
    0x59c63597d710 --------FA   03150  GOSUB 2310
    0x59c63597d940 --------FA   03160  P9$="*"
    0x59c63597db70 --------FA   03170  P9=X
    0x59c63597dda0 --------FA   03180  P8=Y
    0x59c63597de20 --------FA   03190  GOSUB 3450
    0x59c63597e170 --------FA   03200  PRINT "I MOVE ";X;Y
    0x59c63597e1f0 --------FA   03210  GOSUB 2000
    0x59c63597e260 --------FA   03220  PRINT
    0x59c63597e2e0 --------FA   03230  GOSUB 2470
    0x59c63597e360 --------FA   03240  GOTO 1780
    0x59c63597e3d0 ---------F   03250  REM GRAB CORNER PEG
    0x59c63597e6e0 ---------F G 03260  X(2)=X
    0x59c63597e9e0 ---------F   03270  Y(2)=Y
    0x59c63597f140 ---------F   03280  FOR M=X(2)-1 TO X(2)+1
    0x59c63597f8b0 ---------F   03290  FOR N=Y(2)-1 TO Y(2)+1
    0x59c63597fb20 ---------F   03300  IF M=0 THEN 3430
    0x59c63597fd90 ---------F   03310  IF N=0 THEN 3420
    0x59c635980000 ---------F   03320  IF M=8 THEN 3430
    0x59c635980270 ---------F   03330  IF N=8 THEN 3420
    0x59c6359804e0 ---------F   03340  IF M=1 THEN 3360
    0x59c635980750 ---------F   03350  IF M<>7 THEN 3430
    0x59c6359809c0 ---------F T 03360  IF N=1 THEN 3380
    0x59c635980c40 ---------F   03370  IF N<>7 THEN 3420
    0x59c635981220 ---------F T 03380  IF MID$(P$(M),N,1)="*" THEN 3440
    0x59c635981460 ---------F   03390  K=M
    0x59c635981690 ---------F   03400  L=N
    0x59c635981700 ---------F   03410  GOTO 3130
    0x59c635981830 ---------F T 03420  NEXT N
    0x59c635981980 ---------F T 03430  NEXT M
    0x59c6359819f0 ---------F T 03440  RETURN
    0x59c635981ad0 ---------G G 03450  REM SUBROUTINE TO INSERT A CHARATER IN A CHARATER STRING
    0x59c635981dd0 ---------G   03460  DIM P7(10)
    0x59c6359820c0 ---------G   03470  CHANGE P$(P9) TO P7
    0x59c6359823c0 ---------G   03480  DIM P6(10)
    0x59c6359825d0 ---------G   03490  CHANGE P9$ TO P6
    0x59c6359829e0 ---------G   03500  P7(P8) = P6(1)
    0x59c635982cd0 ---------G   03510  CHANGE P7 TO P$(P9)
    0x59c635982d50 ---------G   03520  RETURN
    0x59c635982db0 -------EDC T 03530  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     05660 - 10000    4350 

 */



/*
 *  Symbol Table Listing for 'basic/pressup.bas'
 *
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
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F$                       String      
    F1$                      String      
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    I$                       String      
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
    P$              Array    String          {0,6} 
    P6              Array    Integer         {0,9} 
    P7              Array    Integer         {0,9} 
    P8                       Integer     
    P9                       Integer     
    P9$                      String      
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
    R$                       String      
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
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    Y                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/pressup.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59c63595adb0 ---------A   01000  RANDOMIZE
    0x59c635959b80 ---------A   01010  REM *** PRESS UPS ***
    0x59c63595af30 ---------A   01020  REM *** RON BEHRNS ***
    0x59c63595ae70 ---------A   01030  REM *** 1979 ***
    0x59c63595aff0 ---------A   01040  B=0
    0x59c635959fc0 ---------A   01050  R=0
    0x59c6359586d0 ---------A   01060  PRINT "THIS IS THE GAME OF PRESS UPS"
    0x59c635958670 ---------A   01070  PRINT "INSTRUCTIONS (Y OR N) ";
    0x59c63595a5e0 ---------A   01080  INPUT I$
    0x59c63595a720 ---------A   01090  IF I$<>"Y" THEN 1270
    0x59c63595b140 ---------A   01100  PRINT "TWO MAY PLAY -- THE COMPUTER IS YOUR REFEREE"
    0x59c635959620 ---------A   01110  PRINT "OR YOU MAY PLAY AGAINST THE COMPUTER"
    0x59c6359596d0 ---------A   01120  PRINT
    0x59c6359608a0 ---------A   01130  PRINT "ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL"
    0x59c635960a10 ---------A   01140  PRINT "A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID"
    0x59c635960bb0 ---------A   01150  PRINT "THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS"
    0x59c635960d60 ---------A   01160  PRINT "YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS"
    0x59c635960f10 ---------A   01170  PRINT "IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST"
    0x59c635961080 ---------A   01180  PRINT "ONE PRESSED, THE GAME IS OVER."
    0x59c635961240 ---------A   01190  PRINT "THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS"
    0x59c6359613b0 ---------A   01200  PRINT "END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE "
    0x59c635961510 ---------A   01210  PRINT "X-COORDINATE"
    0x59c6359615d0 ---------A   01220  PRINT
    0x59c6359617a0 ---------A   01230  PRINT "DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST"
    0x59c635961970 ---------A   01240  PRINT "THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)"
    0x59c635961ae0 ---------A   01250  PRINT "NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING"
    0x59c635961c40 ---------A   01260  PRINT "DIAGONALLY)."
    0x59c635961ce0 ---------A T 01270  PRINT
    0x59c635961e40 ---------A   01280  PRINT "PLAY WITH PARTNER(P) OR COMPUTER(C) ";
    0x59c635962040 ---------A   01290  INPUT R$
    0x59c6359622c0 ---------A   01300  IF R$="C" THEN 1320
    0x59c635962370 ---------A   01310  GOTO 1350
    0x59c6359624c0 ---------A T 01320  PRINT "COMPUTER HAS BLUE PEGS--OPPONENT IS PLAYER B"
    0x59c635962860 ---------A   01330  PRINT "COMPUTER FIRST(Y OR N) ";
    0x59c635962a80 ---------A   01340  INPUT F$
    0x59c635962b10 ---------A T 01350  PRINT
    0x59c635962c80 ---------A   01360  PRINT "READY... HERE IS THE BOARD"
    0x59c635962d00 ---------A   01370  PRINT
    0x59c635962d80 ---------A   01380  PRINT
    0x59c635963060 ---------A   01390  DIM P$(7)
    0x59c635963350 ---------A   01400  P$(1)="YBBBBBY"
    0x59c635963640 ---------A   01410  P$(2)="RYYYYYR"
    0x59c635963930 ---------A   01420  P$(3)="RYYYYYR"
    0x59c635963c20 ---------A   01430  P$(4)="RYYYYYR"
    0x59c635963f10 ---------A   01440  P$(5)="RYYYYYR"
    0x59c635964200 ---------A   01450  P$(6)="RYYYYYR"
    0x59c6359644f0 ---------A   01460  P$(7)="YBBBBBY"
    0x59c635964560 ---------A   01470  GOSUB 3700
    0x59c6359645e0 ---------A   01480  PRINT
    0x59c635964870 ---------A   01490  IF R$="C" THEN 1650
    0x59c6359649d0 ---------A   01500  PRINT "MOVE:PLAYER A"
    0x59c635964d90 ---------A T 01510  INPUT X,Y
    0x59c635964ff0 ---------A   01520  IF X>7 THEN 1510
    0x59c635965260 ---------A   01530  IF Y>7 THEN 1510
    0x59c635965860 ---------A   01540  IF MID$(P$(X),Y,1)="Y" THEN 1570
    0x59c6359659d0 ---------A   01550  PRINT "ILLEGAL MOVE...PRESS A YELLOW PEG!! "
    0x59c635965a50 ---------A   01560  GOTO 1510
    0x59c635965d40 ---------A T 01570  P9$="*"
    0x59c635966030 ---------A   01580  P9=X
    0x59c635966320 ---------A   01590  P8=Y
    0x59c635966390 ---------A   01600  GOSUB 5580
    0x59c635966400 ---------A   01610  GOSUB 3700
    0x59c635966480 ---------A   01620  PRINT
    0x59c635966700 ---------A   01630  IF R$="C" THEN 3040
    0x59c635966790 ---------A   01640  GO TO 2820
    0x59c635966e20 ---------A T 01650  IF F$<>"Y" THEN 1760
    0x59c635967400 ---------A   01660  X=INT(3*RND(0) + 3)
    0x59c635967620 ---------A   01670  Y=4
    0x59c635967970 ---------A   01680  PRINT "I MOVE ";X;Y
    0x59c635967bb0 ---------A   01690  P9$="*"
    0x59c635967de0 ---------A   01700  P9=X
    0x59c635968010 ---------A   01710  P8=Y
    0x59c635968080 ---------A   01720  GOSUB 5580
    0x59c6359680f0 ---------A   01730  GOSUB 3700
    0x59c635968160 ---------A   01740  PRINT
    0x59c6359681f0 ---------A   01750  GOTO 2820
    0x59c635968340 ---------A T 01760  PRINT "MOVE; PLAYER B"
    0x59c6359683d0 ---------A   01770  GOTO1510
    0x59c635991af0 ----------   01780  PRINT "MOVE: PLAYER B"
    0x59c635991b50 ----------   01790  GOSUB 3860
    0x59c635991ba0 ----------   01800  GOSUB 4120
    0x59c635991bf0 ----------   01810  P9$="*"
    0x59c635991c40 ----------   01820  P9=X
    0x59c635991c90 ----------   01830  P8=Y
    0x59c635991ce0 ----------   01840  GOSUB 5580
    0x59c635991d30 ----------   01850  GOSUB 4350
    0x59c635991d80 ----------   01860  IF R$="C" THEN 3040
    0x59c635991de0 ----------   01870  GOSUB 3700
    0x59c635991e30 ----------   01880  PRINT
    0x59c635991e90 ----------   01890  PRINT "MOVE: PLAYER A"
    0x59c635991ef0 ----------   01900  GOSUB 3860
    0x59c635991f40 ----------   01910  GOSUB 4120
    0x59c635991f90 ----------   01920  P9$="*"
    0x59c635991fe0 ----------   01930  P9=X
    0x59c635992030 ----------   01940  P8=Y
    0x59c635992080 ----------   01950  GOSUB 5580
    0x59c6359920d0 ----------   01960  GOSUB 4350
    0x59c635992120 ----------   01970  GOSUB 3700
    0x59c635992170 ----------   01980  PRINT
    0x59c6359921d0 ----------   01990  GOTO 2820
    0x59c6359742e0 ---------A   02000  REM COMPUTER'S MOVE
    0x59c635992220 ----------   02010  IF X=1 THEN 3060
    0x59c635992280 ----------   02020  IF X<>7 THEN 3230
    0x59c6359922e0 ----------   02030  IF Y>=4 THEN 3120
    0x59c635992340 ----------   02040  K=X
    0x59c635992390 ----------   02050  L=Y+1
    0x59c6359923e0 ----------   02060  IF MID$(P$(K),L,1)<>"*" THEN 3110
    0x59c635992440 ----------   02070  L=Y-1
    0x59c635992490 ----------   02080  GOTO 3490
    0x59c6359924e0 ----------   02090  IF Y<>4 THEN 3180
    0x59c635992540 ----------   02100  K=X
    0x59c635992590 ----------   02110  L=Y-1
    0x59c6359925e0 ----------   02120  IF MID$(P$(K),L,1)<>"*" THEN 3170
    0x59c635992640 ----------   02130  L=Y+1
    0x59c635992690 ----------   02140  GOTO 3490
    0x59c6359926e0 ----------   02150  K=X
    0x59c635992730 ----------   02160  L=Y-1
    0x59c635992780 ----------   02170  IF MID$(P$(K),L,1)<>"*" THEN 3220
    0x59c6359927e0 ----------   02180  L=Y+1
    0x59c635992830 ----------   02190  GOTO 3490
    0x59c635992880 ----------   02200  IF X>=5 THEN 3370
    0x59c6359928e0 ----------   02210  IF Y>=4 THEN 3290
    0x59c635992940 ----------   02220  GOSUB 5370
    0x59c635992990 ----------   02230  K=X-1
    0x59c6359929e0 ----------   02240  L=Y+1
    0x59c635992a30 ----------   02250  GOTO 3490
    0x59c635992a80 ----------   02260  IF Y<>4 THEN 3330
    0x59c635992ae0 ----------   02270  K=X-1
    0x59c635992b30 ----------   02280  L=Y
    0x59c635992b80 ----------   02290  GOTO 3490
    0x59c635992bd0 ----------   02300  GOSUB 5370
    0x59c635992c20 ----------   02310  K=X-1
    0x59c635992c70 ----------   02320  L=Y-1
    0x59c635992cc0 ----------   02330  GOTO 3490
    0x59c635992d10 ----------   02340  IF Y>=4 THEN 3420
    0x59c635992d70 ----------   02350  GOSUB 5370
    0x59c635992dc0 ----------   02360  K=X+1
    0x59c635992e10 ----------   02370  L=Y+1
    0x59c635992e60 ----------   02380  GOTO 3490
    0x59c635992eb0 ----------   02390  IF Y<>4 THEN 3460
    0x59c635992f10 ----------   02400  K=X+1
    0x59c635992f60 ----------   02410  L=Y
    0x59c635992fb0 ----------   02420  GOTO 3490
    0x59c635993000 ----------   02430  GOSUB 5370
    0x59c635993050 ----------   02440  K=X+1
    0x59c6359930a0 ----------   02450  L=Y-1
    0x59c6359930f0 ----------   02460  IF MID$(P$(K),L,1)<>"*" THEN 3570
    0x59c635993150 ----------   02470  K=INT(3*RND(0)-0.99999) + X
    0x59c6359931a0 ----------   02480  IF K=0 THEN 3500
    0x59c635993200 ----------   02490  IF K=8 THEN 3500
    0x59c635993260 ----------   02500  L=INT(3*RND(0)-0.99999) + Y
    0x59c6359932b0 ----------   02510  IF L=0 THEN 3530
    0x59c635993310 ----------   02520  IF L=8 THEN 3530
    0x59c635993370 ----------   02530  IF MID$(P$(K),L,1)="*" THEN 3500
    0x59c6359933d0 ----------   02540  X=K
    0x59c635993420 ----------   02550  Y=L
    0x59c635993470 ----------   02560  GOSUB 4120
    0x59c6359934c0 ----------   02570  P9$="*"
    0x59c635993510 ----------   02580  P9=X
    0x59c635993560 ----------   02590  P8=Y
    0x59c6359935b0 ----------   02600  GOSUB 5580
    0x59c635993600 ----------   02610  PRINT "I MOVE ";X;Y
    0x59c635993660 ----------   02620  GOSUB 3700
    0x59c6359936b0 ----------   02630  PRINT
    0x59c635993710 ----------   02640  GOSUB 4350
    0x59c635993760 ----------   02650  GOTO 2820
    0x59c6359938d0 ----------   02660  IF B>R  THEN 4290
    0x59c635993930 ----------   02670  IF R>B THEN 4310
    0x59c635993990 ----------   02680  IF R=B THEN 4330
    0x59c6359939f0 ----------   02690  PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x59c635993a50 ----------   02700  GOTO 4340
    0x59c635993aa0 ----------   02710  PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x59c635993b00 ----------   02720  GOTO 4340
    0x59c635993b50 ----------   02730  PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x59c635993bb0 ----------   02740  GOTO 4470
    0x59c635993c00 ---------A   02750  END
    0x59c635993d10 ----------   02760  PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x59c635993d70 ----------   02770  GOTO 4340
    0x59c635993dc0 ----------   02780  PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x59c635993e20 ----------   02790  GOTO 4340
    0x59c635993e70 ----------   02800  GOTO 4470
    0x59c635993ec0 ---------A   02810  END
    0x59c635968520 ---------A T 02820  PRINT "MOVE: PLAYER B"
    0x59c6359685a0 ---------A   02830  GOSUB 3860
    0x59c635968610 ---------A   02840  GOSUB 4120
    0x59c635968840 ---------A   02850  P9$="*"
    0x59c635968a70 ---------A   02860  P9=X
    0x59c635968ca0 ---------A   02870  P8=Y
    0x59c635968d10 ---------A   02880  GOSUB 5580
    0x59c635968d90 ---------A   02890  GOSUB 4350
    0x59c635969000 ---------A   02900  IF R$="C" THEN 3040
    0x59c635969080 ---------A   02910  GOSUB 3700
    0x59c635969100 ---------A   02920  PRINT
    0x59c635969260 ---------A   02930  PRINT "MOVE: PLAYER A"
    0x59c6359692e0 ---------A   02940  GOSUB 3860
    0x59c635969350 ---------A   02950  GOSUB 4120
    0x59c635969580 ---------A   02960  P9$="*"
    0x59c6359697b0 ---------A   02970  P9=X
    0x59c6359699e0 ---------A   02980  P8=Y
    0x59c635969a50 ---------A   02990  GOSUB 5580
    0x59c635969ac0 ---------A   03000  GOSUB 4350
    0x59c635969b30 ---------A   03010  GOSUB 3700
    0x59c635969ba0 ---------A   03020  PRINT
    0x59c635969c20 ---------A   03030  GOTO 2820
    0x59c635974550 ---------A T 03040  IF X=1 THEN 3060
    0x59c6359747b0 ---------A   03050  IF X<>7 THEN 3230
    0x59c635974a10 ---------A T 03060  IF Y>=4 THEN 3120
    0x59c635974d10 ---------A   03070  K=X
    0x59c635975110 ---------A   03080  L=Y+1
    0x59c6359756e0 ---------A   03090  IF MID$(P$(K),L,1)<>"*" THEN 3110
    0x59c635975a20 ---------A   03100  L=Y-1
    0x59c635975a90 ---------A T 03110  GOTO 3490
    0x59c635975ce0 ---------A T 03120  IF Y<>4 THEN 3180
    0x59c635975f20 ---------A   03130  K=X
    0x59c635976260 ---------A   03140  L=Y-1
    0x59c635976830 ---------A   03150  IF MID$(P$(K),L,1)<>"*" THEN 3170
    0x59c635976b70 ---------A   03160  L=Y+1
    0x59c635976be0 ---------A T 03170  GOTO 3490
    0x59c635976e10 ---------A T 03180  K=X
    0x59c635977150 ---------A   03190  L=Y-1
    0x59c635977720 ---------A   03200  IF MID$(P$(K),L,1)<>"*" THEN 3220
    0x59c635977a60 ---------A   03210  L=Y+1
    0x59c635977ad0 ---------A T 03220  GOTO 3490
    0x59c635977d20 ---------A T 03230  IF X>=5 THEN 3370
    0x59c635977f80 ---------A   03240  IF Y>=4 THEN 3290
    0x59c635978000 ---------A   03250  GOSUB 5370
    0x59c635978330 ---------A T 03260  K=X-1
    0x59c635978660 ---------A   03270  L=Y+1
    0x59c6359786d0 ---------A T 03280  GOTO 3490
    0x59c635978920 ---------A T 03290  IF Y<>4 THEN 3330
    0x59c635978c60 ---------A T 03300  K=X-1
    0x59c635978e90 ---------A T 03310  L=Y
    0x59c635978f00 ---------A   03320  GOTO 3490
    0x59c635978f70 ---------A T 03330  GOSUB 5370
    0x59c6359792a0 ---------A   03340  K=X-1
    0x59c6359795d0 ---------A   03350  L=Y-1
    0x59c635979640 ---------A   03360  GOTO 3490
    0x59c635979890 ---------A T 03370  IF Y>=4 THEN 3420
    0x59c635979910 ---------A   03380  GOSUB 5370
    0x59c635979c40 ---------A   03390  K=X+1
    0x59c635979f70 ---------A   03400  L=Y+1
    0x59c635979fe0 ---------A   03410  GOTO 3490
    0x59c63597a230 ---------A T 03420  IF Y<>4 THEN 3460
    0x59c63597a570 ---------A   03430  K=X+1
    0x59c63597a7a0 ---------A T 03440  L=Y
    0x59c63597a810 ---------A   03450  GOTO 3490
    0x59c63597a880 ---------A T 03460  GOSUB 5370
    0x59c63597abb0 ---------A   03470  K=X+1
    0x59c63597aef0 ---------A   03480  L=Y-1
    0x59c63597b4d0 ---------A T 03490  IF MID$(P$(K),L,1)<>"*" THEN 3570
    0x59c63597bbd0 ---------A T 03500  K=INT(3*RND(0)-0.99999) + X
    0x59c63597be20 ---------A   03510  IF K=0 THEN 3500
    0x59c63597c090 ---------A   03520  IF K=8 THEN 3500
    0x59c63597c790 ---------A T 03530  L=INT(3*RND(0)-0.99999) + Y
    0x59c63597c9e0 ---------A   03540  IF L=0 THEN 3530
    0x59c63597cc50 ---------A   03550  IF L=8 THEN 3530
    0x59c63597d230 ---------A   03560  IF MID$(P$(K),L,1)="*" THEN 3500
    0x59c63597d470 ---------A T 03570  X=K
    0x59c63597d6a0 ---------A   03580  Y=L
    0x59c63597d710 ---------A   03590  GOSUB 4120
    0x59c63597d940 ---------A   03600  P9$="*"
    0x59c63597db70 ---------A   03610  P9=X
    0x59c63597dda0 ---------A   03620  P8=Y
    0x59c63597de20 ---------A   03630  GOSUB 5580
    0x59c63597e170 ---------A   03640  PRINT "I MOVE ";X;Y
    0x59c63597e1f0 ---------A   03650  GOSUB 3700
    0x59c63597e260 ---------A   03660  PRINT
    0x59c63597e2e0 ---------A   03670  GOSUB 4350
    0x59c63597e360 ---------A   03680  GOTO 2820
    0x59c635969c90 ---------B   03690  REM PRINT BOARD
    0x59c635969d30 ---------B G 03700  PRINT
    0x59c635969ea0 ---------B   03710  PRINT "      SECOND NUMBER"
    0x59c63596a000 ---------B   03720  PRINT "      1 2 3 4 5 6 7"
    0x59c63596a080 ---------B   03730  PRINT
    0x59c63596a380 ---------B   03740  F1$="FIRST #"
    0x59c63596a710 ---------B   03750  FOR I=1 TO 7
    0x59c63596aac0 ---------B   03760  FOR J=1 TO 7
    0x59c63596ad00 ---------B   03770  IF J<>1 GOTO 3790
    0x59c63596b450 ---------B   03780  PRINT MID$(F1$,I,1);" ";I;" ";
    0x59c63596b930 ---------B T 03790  PRINT MID$(P$(I),J,1);
    0x59c63596bab0 ---------B   03800  PRINT " ";
    0x59c63596bbf0 ---------B   03810  NEXT J
    0x59c63596be20 ---------B   03820  PRINT CHR$(14)
    0x59c63596bf60 ---------B   03830  NEXT I
    0x59c6359937b0 ---------B   03840  GOTO 03850
    0x59c635993800 ---------B T 03850  RETURN
    0x59c63596c3a0 ---------C B 03860  INPUT X(1),Y(1)
    0x59c63596c420 ---------C   03870  REM CHECK ADJACENCY
    0x59c63596c770 ---------C   03880  IF X(1)<0 THEN 3860
    0x59c63596caa0 ---------C   03890  IF Y(1)<0 THEN 3860
    0x59c63596cdd0 ---------C   03900  IF X(1)=0 THEN 4020
    0x59c63596d100 ---------C   03910  IF X(1)>7 THEN 3860
    0x59c63596d430 ---------C   03920  IF Y(1)>7 THEN 3860
    0x59c63596d960 ---------C   03930  IF ABS(X-X(1))>1 THEN 3990
    0x59c63596dea0 ---------C   03940  IF ABS(Y-Y(1))>1 THEN 3990
    0x59c63596e600 ---------C   03950  IF MID$(P$(X(1)),Y(1),1)="*" THEN 3860
    0x59c63596e900 ---------C   03960  X=X(1)
    0x59c63596ebf0 ---------C   03970  Y=Y(1)
    0x59c635993860 ---------C   03980  GOTO 04010
    0x59c63596f5c0 ---------C T 03990  PRINT "NOT ADJACENT!"
    0x59c63596f650 ---------C   04000  GOTO 3860
    0x59c635993c40 ---------C T 04010  RETURN
    0x59c635997740 ---------C T 04020  IF B>R  THEN 4050
    0x59c6359977a0 ---------C   04030  IF R>B THEN 4070
    0x59c635997800 ---------C   04040  IF R=B THEN 4090
    0x59c635997880 ---------C T 04050  PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x59c6359830b0 ---------C   04060  GOTO 4100
    0x59c635997900 ---------C T 04070  PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x59c635986db0 ---------C   04080  GOTO 4100
    0x59c6359979c0 ---------C T 04090  PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x59c635986ea0 ---------C T 04100  GOTO 4110
    0x59c635997a80 ---------C T 04110  END
    0x59c63596fc20 ---------D G 04120  IF MID$(P$(X),Y,1)<>"B" THEN 4140
    0x59c63596ff70 ---------D   04130  B=B+1
    0x59c635970540 ---------D T 04140  IF MID$(P$(X),Y,1)<>"R" THEN 4160
    0x59c635970880 ---------D   04150  R=R+1
    0x59c635970ad0 ---------D T 04160  IF B=10 THEN 4200
    0x59c635970d30 ---------D   04170  IF R=10 THEN 4220
    0x59c635993ca0 ---------D   04180  GOTO 04190
    0x59c635993f00 ---------D T 04190  RETURN
    0x59c635997ba0 ---------D T 04200  PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x59c635982f40 ---------D   04210  GOTO 4240
    0x59c635997c60 ---------D T 04220  PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x59c635986b80 ---------D   04230  GOTO 4240
    0x59c635986220 ---------D T 04240  GOTO 4250
    0x59c635997d40 ---------D T 04250  END
    0x59c635971010 ---------E T 04260  IF B>R  THEN 4290
    0x59c635971290 ---------E   04270  IF R>B THEN 4310
    0x59c635971530 ---------E   04280  IF R=B THEN 4330
    0x59c635971990 ---------E T 04290  PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x59c635971a30 ---------E   04300  GOTO 4340
    0x59c635971e80 ---------E T 04310  PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x59c635971f20 ---------E   04320  GOTO 4340
    0x59c635972180 ---------E T 04330  PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x59c635972200 ---------E T 04340  GOTO 4470
    0x59c6359727e0 ---------E G 04350  FOR G=X-1 TO X+1
    0x59c635972dd0 ---------E   04360  FOR H=Y-1 TO Y+1
    0x59c635973040 ---------E   04370  IF G=0 THEN 4430
    0x59c6359732b0 ---------E   04380  IF H=0 THEN 4420
    0x59c635973520 ---------E   04390  IF G=8 THEN 4430
    0x59c6359737a0 ---------E   04400  IF H=8 THEN 4420
    0x59c635973d80 ---------E   04410  IF MID$(P$(G),H,1)<>"*" THEN 4460
    0x59c635973ec0 ---------E T 04420  NEXT H
    0x59c635974010 ---------E T 04430  NEXT G
    0x59c635974180 ---------E   04440  PRINT "GAME OVER"
    0x59c635974200 ---------E   04450  GOTO 4260
    0x59c635993f60 ---------E T 04460  GOTO 04480
    0x59c635982db0 ---------E T 04470  END
    0x59c635993fd0 ---------E T 04480  RETURN
    0x59c635997f20 ---------F T 04490  PRINT "MOVE: PLAYER B"
    0x59c6359846a0 ---------F   04500  GOSUB 3860
    0x59c635986680 ---------F   04510  GOSUB 4120
    0x59c635986fe0 ---------F   04520  P9$="*"
    0x59c635986c70 ---------F   04530  P9=X
    0x59c635983800 ---------F   04540  P8=Y
    0x59c6359882a0 ---------F   04550  GOSUB 5580
    0x59c635984830 ---------F   04560  GOSUB 4350
    0x59c635998060 ---------F   04570  IF R$="C" THEN 4710
    0x59c635984970 ---------F   04580  GOSUB 3700
    0x59c6359980e0 ---------F   04590  PRINT
    0x59c635998160 ---------F   04600  PRINT "MOVE: PLAYER A"
    0x59c6359831f0 ---------F   04610  GOSUB 3860
    0x59c635987120 ---------F   04620  GOSUB 4120
    0x59c635984bf0 ---------F   04630  P9$="*"
    0x59c6359870d0 ---------F   04640  P9=X
    0x59c635987170 ---------F   04650  P8=Y
    0x59c635987350 ---------F   04660  GOSUB 5580
    0x59c635984b00 ---------F   04670  GOSUB 4350
    0x59c635983530 ---------F   04680  GOSUB 3700
    0x59c6359982c0 ---------F   04690  PRINT
    0x59c6359872b0 ---------F   04700  GOTO 4490
    0x59c635998360 ---------F T 04710  IF X=1 THEN 4730
    0x59c6359983e0 ---------F   04720  IF X<>7 THEN 4900
    0x59c635998460 ---------F T 04730  IF Y>=4 THEN 4790
    0x59c635984a60 ---------F   04740  K=X
    0x59c6359873a0 ---------F   04750  L=Y+1
    0x59c635998520 ---------F   04760  IF MID$(P$(K),L,1)<>"*" THEN 4780
    0x59c635984e20 ---------F   04770  L=Y-1
    0x59c6359874e0 ---------F T 04780  GOTO 5160
    0x59c6359985c0 ---------F T 04790  IF Y<>4 THEN 4850
    0x59c635987490 ---------F   04800  K=X
    0x59c635987440 ---------F   04810  L=Y-1
    0x59c635998680 ---------F   04820  IF MID$(P$(K),L,1)<>"*" THEN 4840
    0x59c6359873f0 ---------F   04830  L=Y+1
    0x59c635987760 ---------F T 04840  GOTO 5160
    0x59c6359843f0 ---------F T 04850  K=X
    0x59c635984a10 ---------F   04860  L=Y-1
    0x59c635998760 ---------F   04870  IF MID$(P$(K),L,1)<>"*" THEN 4890
    0x59c635984d80 ---------F   04880  L=Y+1
    0x59c635987620 ---------F T 04890  GOTO 5160
    0x59c635998800 ---------F T 04900  IF X>=5 THEN 5040
    0x59c635998880 ---------F   04910  IF Y>=4 THEN 4960
    0x59c6359875d0 ---------F   04920  GOSUB 5370
    0x59c635983d20 ---------F   04930  K=X-1
    0x59c635987670 ---------F   04940  L=Y+1
    0x59c635983e00 ---------F   04950  GOTO 5160
    0x59c635998980 ---------F T 04960  IF Y<>4 THEN 5000
    0x59c635987850 ---------F   04970  K=X-1
    0x59c6359877b0 ---------F   04980  L=Y
    0x59c6359878f0 ---------F   04990  GOTO 5160
    0x59c635987a30 ---------F T 05000  GOSUB 5370
    0x59c6359879e0 ---------F   05010  K=X-1
    0x59c635983af0 ---------F   05020  L=Y-1
    0x59c635984060 ---------F   05030  GOTO 5160
    0x59c635998ae0 ---------F T 05040  IF Y>=4 THEN 5090
    0x59c635984ec0 ---------F   05050  GOSUB 5370
    0x59c635983e50 ---------F   05060  K=X+1
    0x59c635983f30 ---------F   05070  L=Y+1
    0x59c635984dd0 ---------F   05080  GOTO 5160
    0x59c635998be0 ---------F T 05090  IF Y<>4 THEN 5130
    0x59c635987bc0 ---------F   05100  K=X+1
    0x59c635987b20 ---------F   05110  L=Y
    0x59c635987d00 ---------F   05120  GOTO 5160
    0x59c635985eb0 ---------F T 05130  GOSUB 5370
    0x59c635987c10 ---------F   05140  K=X+1
    0x59c635987da0 ---------F   05150  L=Y-1
    0x59c635998d20 ---------F T 05160  IF MID$(P$(K),L,1)<>"*" THEN 5240
    0x59c635987d50 ---------F T 05170  K=INT(3*RND(0)-0.99999) + X
    0x59c635998d80 ---------F   05180  IF K=0 THEN 5170
    0x59c635998e00 ---------F   05190  IF K=8 THEN 5170
    0x59c6359842d0 ---------F T 05200  L=INT(3*RND(0)-0.99999) + Y
    0x59c635998e80 ---------F   05210  IF L=0 THEN 5200
    0x59c635998f00 ---------F   05220  IF L=8 THEN 5200
    0x59c635998f80 ---------F   05230  IF MID$(P$(K),L,1)="*" THEN 5170
    0x59c635987f30 ---------F T 05240  X=K
    0x59c635987e90 ---------F   05250  Y=L
    0x59c635987e40 ---------F   05260  GOSUB 4120
    0x59c635988020 ---------F   05270  P9$="*"
    0x59c635985c30 ---------F   05280  P9=X
    0x59c6359840b0 ---------F   05290  P8=Y
    0x59c6359880c0 ---------F   05300  GOSUB 5580
    0x59c6359990c0 ---------F   05310  PRINT "I MOVE ";X;Y
    0x59c635985050 ---------F   05320  GOSUB 3700
    0x59c635999140 ---------F   05330  PRINT
    0x59c635985190 ---------F   05340  GOSUB 4350
    0x59c635984370 ---------F   05350  GOTO 4490
    0x59c63597e3d0 ---------F   05360  REM GRAB CORNER PEG
    0x59c63597e6e0 ---------F G 05370  X(2)=X
    0x59c63597e9e0 ---------F   05380  Y(2)=Y
    0x59c63597f140 ---------F   05390  FOR M=X(2)-1 TO X(2)+1
    0x59c63597f8b0 ---------F   05400  FOR N=Y(2)-1 TO Y(2)+1
    0x59c63597fb20 ---------F   05410  IF M=0 THEN 5540
    0x59c63597fd90 ---------F   05420  IF N=0 THEN 5530
    0x59c635980000 ---------F   05430  IF M=8 THEN 5540
    0x59c635980270 ---------F   05440  IF N=8 THEN 5530
    0x59c6359804e0 ---------F   05450  IF M=1 THEN 5470
    0x59c635980750 ---------F   05460  IF M<>7 THEN 5540
    0x59c6359809c0 ---------F T 05470  IF N=1 THEN 5490
    0x59c635980c40 ---------F   05480  IF N<>7 THEN 5530
    0x59c635981220 ---------F T 05490  IF MID$(P$(M),N,1)="*" THEN 5550
    0x59c635981460 ---------F   05500  K=M
    0x59c635981690 ---------F   05510  L=N
    0x59c635981700 ---------F   05520  GOTO 5240
    0x59c635981830 ---------F T 05530  NEXT N
    0x59c635981980 ---------F T 05540  NEXT M
    0x59c63598bf70 ---------F T 05550  GOTO 05560
    0x59c63598bfe0 ---------F T 05560  RETURN
    0x59c635981ad0 ---------G   05570  REM SUBROUTINE TO INSERT A CHARATER IN A CHARATER STRING
    0x59c635981dd0 ---------G G 05580  DIM P7(10)
    0x59c6359820c0 ---------G   05590  CHANGE P$(P9) TO P7
    0x59c6359823c0 ---------G   05600  DIM P6(10)
    0x59c6359825d0 ---------G   05610  CHANGE P9$ TO P6
    0x59c6359829e0 ---------G   05620  P7(P8) = P6(1)
    0x59c635982cd0 ---------G   05630  CHANGE P7 TO P$(P9)
    0x59c63598c040 ---------G   05640  GOTO 05650
    0x59c63598c0b0 ---------G T 05650  RETURN
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
int    B_int;                                     // Basic: B 
char*  F_str;                                     // Basic: F$ 
char*  F1_str;                                    // Basic: F1$ 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
char*  I_str;                                     // Basic: I$ 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
char*  P_str_arr[7];                              // Basic: P$ 
int    P6_int_arr[10];                            // Basic: P6 
int    P7_int_arr[10];                            // Basic: P7 
int    P8_int;                                    // Basic: P8 
int    P9_int;                                    // Basic: P9 
char*  P9_str;                                    // Basic: P9$ 
int    R_int;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03700();
void Routine_03860();
void Routine_04120();
void Routine_04350();
void Routine_05370();
void Routine_05580();

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
    // 03690 REM PRINT BOARD

void Routine_03700(){
    // 03700 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03710 PRINT "      SECOND NUMBER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      SECOND NUMBER");strcat(buf,"\n");fputs(buf,fh); };
    // 03720 PRINT "      1 2 3 4 5 6 7"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      1 2 3 4 5 6 7");strcat(buf,"\n");fputs(buf,fh); };
    // 03730 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03740 F1$="FIRST #"
    GLBpStr="FIRST #";
    F1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 03750 FOR I=1 TO 7
    for(I_int=1;I_int<=7;I_int++){
        // 03760 FOR J=1 TO 7
        for(J_int=1;J_int<=7;J_int++){
            // 03770 IF J<>1 GOTO 3790
            if(J_int!=1)goto Lbl_03790;
            // 03780 PRINT MID$(F1$,I,1);" ";I;" ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,MID$(F1_str,I_int,1));strcat(buf," "); b2c_INT(buf,I_int);strcat(buf," ");fputs(buf,fh); };

  Lbl_03790:
            // 03790 PRINT MID$(P$(I),J,1);
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,MID$(P_str_arr[I_int],J_int,1));fputs(buf,fh); };
            // 03800 PRINT " ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
            // 03810 NEXT J
            int dummy_3810=0; // Ignore this line.
        }; // End-For(J_int)
        // 03820 PRINT CHR$(14)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(14));strcat(buf,"\n");fputs(buf,fh); };
        // 03830 NEXT I
        int dummy_3830=0; // Ignore this line.
    }; // End-For(I_int)
    // 03840 GOTO 03850
    goto Lbl_03850;

  Lbl_03850:
    // 03850 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_03860(){

  Lbl_03860:
    // 03860 INPUT X(1),Y(1)
    // Start of Basic INPUT statement 03860
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ||
                (err += b2c_strtoi(&Y_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03860
    // 03870 REM CHECK ADJACENCY
    // 03880 IF X(1)<0 THEN 3860
    if(X_int<0)goto Lbl_03860;
    // 03890 IF Y(1)<0 THEN 3860
    if(Y_int<0)goto Lbl_03860;
    // 03900 IF X(1)=0 THEN 4020
    if(X_int==0)goto Lbl_04020;
    // 03910 IF X(1)>7 THEN 3860
    if(X_int>7)goto Lbl_03860;
    // 03920 IF Y(1)>7 THEN 3860
    if(Y_int>7)goto Lbl_03860;
    // 03930 IF ABS(X-X(1))>1 THEN 3990
    if(ABS(X_int-X_int)>1)goto Lbl_03990;
    // 03940 IF ABS(Y-Y(1))>1 THEN 3990
    if(ABS(Y_int-Y_int)>1)goto Lbl_03990;
    // 03950 IF MID$(P$(X(1)),Y(1),1)="*" THEN 3860
    if(MID$(P_str_arr[X_int],Y_int,1)=='*')goto Lbl_03860;
    // 03960 X=X(1)
    X_int = X_int;
    // 03970 Y=Y(1)
    Y_int = Y_int;
    // 03980 GOTO 04010
    goto Lbl_04010;

  Lbl_03990:
    // 03990 PRINT "NOT ADJACENT!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOT ADJACENT!");strcat(buf,"\n");fputs(buf,fh); };
    // 04000 GOTO 3860
    goto Lbl_03860;

  Lbl_04010:
    // 04010 RETURN
    return;
};

  Lbl_04020:
    // 04020 IF B>R  THEN 4050
    if(B_int>R_int)goto Lbl_04050;
    // 04030 IF R>B THEN 4070
    if(R_int>B_int)goto Lbl_04070;
    // 04040 IF R=B THEN 4090
    if(R_int==B_int)goto Lbl_04090;

  Lbl_04050:
    // 04050 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BLUE IS THE WINNER! "); b2c_INT(buf,B_int);strcat(buf," TO "); b2c_INT(buf,R_int);strcat(buf,"\n");fputs(buf,fh); };
    // 04060 GOTO 4100
    goto Lbl_04100;

  Lbl_04070:
    // 04070 PRINT "RED IS THE WINNER! ";R;" TO ";B
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RED IS THE WINNER! "); b2c_INT(buf,R_int);strcat(buf," TO "); b2c_INT(buf,B_int);strcat(buf,"\n");fputs(buf,fh); };
    // 04080 GOTO 4100
    goto Lbl_04100;

  Lbl_04090:
    // 04090 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT'S A TIE!!  EACH PLAYER HAS "); b2c_INT(buf,B_int);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_04100:
    // 04100 GOTO 4110
    goto Lbl_04110;

  Lbl_04110:
    // 04110 END
    exit(4110);


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_04120(){
    // 04120 IF MID$(P$(X),Y,1)<>"B" THEN 4140
    if(MID$(P_str_arr[X_int],Y_int,1)=='B')goto Lbl_04140;
    // 04130 B=B+1
    B_int = B_int+1;

  Lbl_04140:
    // 04140 IF MID$(P$(X),Y,1)<>"R" THEN 4160
    if(MID$(P_str_arr[X_int],Y_int,1)=='R')goto Lbl_04160;
    // 04150 R=R+1
    R_int = R_int+1;

  Lbl_04160:
    // 04160 IF B=10 THEN 4200
    if(B_int==10)goto Lbl_04200;
    // 04170 IF R=10 THEN 4220
    if(R_int==10)goto Lbl_04220;
    // 04180 GOTO 04190
    goto Lbl_04190;

  Lbl_04190:
    // 04190 RETURN
    return;
};

  Lbl_04200:
    // 04200 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BLUE IS THE WINNER! "); b2c_INT(buf,B_int);strcat(buf," TO "); b2c_INT(buf,R_int);strcat(buf,"\n");fputs(buf,fh); };
    // 04210 GOTO 4240
    goto Lbl_04240;

  Lbl_04220:
    // 04220 PRINT "RED IS THE WINNER! ";R;" TO ";B
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RED IS THE WINNER! "); b2c_INT(buf,R_int);strcat(buf," TO "); b2c_INT(buf,B_int);strcat(buf,"\n");fputs(buf,fh); };
    // 04230 GOTO 4240
    goto Lbl_04240;

  Lbl_04240:
    // 04240 GOTO 4250
    goto Lbl_04250;

  Lbl_04250:
    // 04250 END
    exit(4250);


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

  Lbl_04260:
    // 04260 IF B>R  THEN 4290
    if(B_int>R_int)goto Lbl_04290;
    // 04270 IF R>B THEN 4310
    if(R_int>B_int)goto Lbl_04310;
    // 04280 IF R=B THEN 4330
    if(R_int==B_int)goto Lbl_04330;

  Lbl_04290:
    // 04290 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BLUE IS THE WINNER! "); b2c_INT(buf,B_int);strcat(buf," TO "); b2c_INT(buf,R_int);strcat(buf,"\n");fputs(buf,fh); };
    // 04300 GOTO 4340
    goto Lbl_04340;

  Lbl_04310:
    // 04310 PRINT "RED IS THE WINNER! ";R;" TO ";B
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RED IS THE WINNER! "); b2c_INT(buf,R_int);strcat(buf," TO "); b2c_INT(buf,B_int);strcat(buf,"\n");fputs(buf,fh); };
    // 04320 GOTO 4340
    goto Lbl_04340;

  Lbl_04330:
    // 04330 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT'S A TIE!!  EACH PLAYER HAS "); b2c_INT(buf,B_int);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_04340:
    // 04340 GOTO 4470
    goto Lbl_04470;

void Routine_04350(){
    // 04350 FOR G=X-1 TO X+1
    for(G_int=X_int-1;G_int<=X_int+1;G_int++){
        // 04360 FOR H=Y-1 TO Y+1
        for(H_int=Y_int-1;H_int<=Y_int+1;H_int++){
            // 04370 IF G=0 THEN 4430
            if(G_int==0)goto Lbl_04430;
            // 04380 IF H=0 THEN 4420
            if(H_int==0)goto Lbl_04420;
            // 04390 IF G=8 THEN 4430
            if(G_int==8)goto Lbl_04430;
            // 04400 IF H=8 THEN 4420
            if(H_int==8)goto Lbl_04420;
            // 04410 IF MID$(P$(G),H,1)<>"*" THEN 4460
            if(MID$(P_str_arr[G_int],H_int,1)=='*')goto Lbl_04460;

  Lbl_04420:
            // 04420 NEXT H
            int dummy_4420=0; // Ignore this line.
        }; // End-For(H_int)

  Lbl_04430:
        // 04430 NEXT G
        int dummy_4430=0; // Ignore this line.
    }; // End-For(G_int)
    // 04440 PRINT "GAME OVER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GAME OVER");strcat(buf,"\n");fputs(buf,fh); };
    // 04450 GOTO 4260
    goto Lbl_04260;

  Lbl_04460:
    // 04460 GOTO 04480
    goto Lbl_04480;

  Lbl_04470:
    // 04470 END
    exit(4470);

  Lbl_04480:
    // 04480 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------

  Lbl_04490:
    // 04490 PRINT "MOVE: PLAYER B"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MOVE: PLAYER B");strcat(buf,"\n");fputs(buf,fh); };
    // 04500 GOSUB 3860
    Routine_03860();
    // 04510 GOSUB 4120
    Routine_04120();
    // 04520 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 04530 P9=X
    P9_int = X_int;
    // 04540 P8=Y
    P8_int = Y_int;
    // 04550 GOSUB 5580
    Routine_05580();
    // 04560 GOSUB 4350
    Routine_04350();
    // 04570 IF R$="C" THEN 4710
    if(strcmp(R_str,"C")==0)goto Lbl_04710;
    // 04580 GOSUB 3700
    Routine_03700();
    // 04590 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 04600 PRINT "MOVE: PLAYER A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MOVE: PLAYER A");strcat(buf,"\n");fputs(buf,fh); };
    // 04610 GOSUB 3860
    Routine_03860();
    // 04620 GOSUB 4120
    Routine_04120();
    // 04630 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 04640 P9=X
    P9_int = X_int;
    // 04650 P8=Y
    P8_int = Y_int;
    // 04660 GOSUB 5580
    Routine_05580();
    // 04670 GOSUB 4350
    Routine_04350();
    // 04680 GOSUB 3700
    Routine_03700();
    // 04690 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 04700 GOTO 4490
    goto Lbl_04490;

  Lbl_04710:
    // 04710 IF X=1 THEN 4730
    if(X_int==1)goto Lbl_04730;
    // 04720 IF X<>7 THEN 4900
    if(X_int!=7)goto Lbl_04900;

  Lbl_04730:
    // 04730 IF Y>=4 THEN 4790
    if(Y_int>=4)goto Lbl_04790;
    // 04740 K=X
    K_int = X_int;
    // 04750 L=Y+1
    L_int = Y_int+1;
    // 04760 IF MID$(P$(K),L,1)<>"*" THEN 4780
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_04780;
    // 04770 L=Y-1
    L_int = Y_int-1;

  Lbl_04780:
    // 04780 GOTO 5160
    goto Lbl_05160;

  Lbl_04790:
    // 04790 IF Y<>4 THEN 4850
    if(Y_int!=4)goto Lbl_04850;
    // 04800 K=X
    K_int = X_int;
    // 04810 L=Y-1
    L_int = Y_int-1;
    // 04820 IF MID$(P$(K),L,1)<>"*" THEN 4840
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_04840;
    // 04830 L=Y+1
    L_int = Y_int+1;

  Lbl_04840:
    // 04840 GOTO 5160
    goto Lbl_05160;

  Lbl_04850:
    // 04850 K=X
    K_int = X_int;
    // 04860 L=Y-1
    L_int = Y_int-1;
    // 04870 IF MID$(P$(K),L,1)<>"*" THEN 4890
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_04890;
    // 04880 L=Y+1
    L_int = Y_int+1;

  Lbl_04890:
    // 04890 GOTO 5160
    goto Lbl_05160;

  Lbl_04900:
    // 04900 IF X>=5 THEN 5040
    if(X_int>=5)goto Lbl_05040;
    // 04910 IF Y>=4 THEN 4960
    if(Y_int>=4)goto Lbl_04960;
    // 04920 GOSUB 5370
    Routine_05370();
    // 04930 K=X-1
    K_int = X_int-1;
    // 04940 L=Y+1
    L_int = Y_int+1;
    // 04950 GOTO 5160
    goto Lbl_05160;

  Lbl_04960:
    // 04960 IF Y<>4 THEN 5000
    if(Y_int!=4)goto Lbl_05000;
    // 04970 K=X-1
    K_int = X_int-1;
    // 04980 L=Y
    L_int = Y_int;
    // 04990 GOTO 5160
    goto Lbl_05160;

  Lbl_05000:
    // 05000 GOSUB 5370
    Routine_05370();
    // 05010 K=X-1
    K_int = X_int-1;
    // 05020 L=Y-1
    L_int = Y_int-1;
    // 05030 GOTO 5160
    goto Lbl_05160;

  Lbl_05040:
    // 05040 IF Y>=4 THEN 5090
    if(Y_int>=4)goto Lbl_05090;
    // 05050 GOSUB 5370
    Routine_05370();
    // 05060 K=X+1
    K_int = X_int+1;
    // 05070 L=Y+1
    L_int = Y_int+1;
    // 05080 GOTO 5160
    goto Lbl_05160;

  Lbl_05090:
    // 05090 IF Y<>4 THEN 5130
    if(Y_int!=4)goto Lbl_05130;
    // 05100 K=X+1
    K_int = X_int+1;
    // 05110 L=Y
    L_int = Y_int;
    // 05120 GOTO 5160
    goto Lbl_05160;

  Lbl_05130:
    // 05130 GOSUB 5370
    Routine_05370();
    // 05140 K=X+1
    K_int = X_int+1;
    // 05150 L=Y-1
    L_int = Y_int-1;

  Lbl_05160:
    // 05160 IF MID$(P$(K),L,1)<>"*" THEN 5240
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_05240;

  Lbl_05170:
    // 05170 K=INT(3*RND(0)-0.99999) + X
    K_int = INT(3*RND(0)-1.)+X_int;
    // 05180 IF K=0 THEN 5170
    if(K_int==0)goto Lbl_05170;
    // 05190 IF K=8 THEN 5170
    if(K_int==8)goto Lbl_05170;

  Lbl_05200:
    // 05200 L=INT(3*RND(0)-0.99999) + Y
    L_int = INT(3*RND(0)-1.)+Y_int;
    // 05210 IF L=0 THEN 5200
    if(L_int==0)goto Lbl_05200;
    // 05220 IF L=8 THEN 5200
    if(L_int==8)goto Lbl_05200;
    // 05230 IF MID$(P$(K),L,1)="*" THEN 5170
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_05170;

  Lbl_05240:
    // 05240 X=K
    X_int = K_int;
    // 05250 Y=L
    Y_int = L_int;
    // 05260 GOSUB 4120
    Routine_04120();
    // 05270 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 05280 P9=X
    P9_int = X_int;
    // 05290 P8=Y
    P8_int = Y_int;
    // 05300 GOSUB 5580
    Routine_05580();
    // 05310 PRINT "I MOVE ";X;Y
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I MOVE "); b2c_INT(buf,X_int); b2c_INT(buf,Y_int);strcat(buf,"\n");fputs(buf,fh); };
    // 05320 GOSUB 3700
    Routine_03700();
    // 05330 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 05340 GOSUB 4350
    Routine_04350();
    // 05350 GOTO 4490
    goto Lbl_04490;
    // 05360 REM GRAB CORNER PEG

void Routine_05370(){
    // 05370 X(2)=X
    X_int = X_int;
    // 05380 Y(2)=Y
    Y_int = Y_int;
    // 05390 FOR M=X(2)-1 TO X(2)+1
    for(M_int=X_int-1;M_int<=X_int+1;M_int++){
        // 05400 FOR N=Y(2)-1 TO Y(2)+1
        for(N_int=Y_int-1;N_int<=Y_int+1;N_int++){
            // 05410 IF M=0 THEN 5540
            if(M_int==0)goto Lbl_05540;
            // 05420 IF N=0 THEN 5530
            if(N_int==0)goto Lbl_05530;
            // 05430 IF M=8 THEN 5540
            if(M_int==8)goto Lbl_05540;
            // 05440 IF N=8 THEN 5530
            if(N_int==8)goto Lbl_05530;
            // 05450 IF M=1 THEN 5470
            if(M_int==1)goto Lbl_05470;
            // 05460 IF M<>7 THEN 5540
            if(M_int!=7)goto Lbl_05540;

  Lbl_05470:
            // 05470 IF N=1 THEN 5490
            if(N_int==1)goto Lbl_05490;
            // 05480 IF N<>7 THEN 5530
            if(N_int!=7)goto Lbl_05530;

  Lbl_05490:
            // 05490 IF MID$(P$(M),N,1)="*" THEN 5550
            if(MID$(P_str_arr[M_int],N_int,1)=='*')goto Lbl_05550;
            // 05500 K=M
            K_int = M_int;
            // 05510 L=N
            L_int = N_int;
            // 05520 GOTO 5240
            goto Lbl_05240;

  Lbl_05530:
            // 05530 NEXT N
            int dummy_5530=0; // Ignore this line.
        }; // End-For(N_int)

  Lbl_05540:
        // 05540 NEXT M
        int dummy_5540=0; // Ignore this line.
    }; // End-For(M_int)

  Lbl_05550:
    // 05550 GOTO 05560
    goto Lbl_05560;

  Lbl_05560:
    // 05560 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine G
//---------------------------------------------------------------------------
    // 05570 REM SUBROUTINE TO INSERT A CHARATER IN A CHARATER STRING

void Routine_05580(){
    // 05580 DIM P7(10)
    // 05590 CHANGE P$(P9) TO P7
    if(P_str_arr[P9_int]!=nullptr){
        for(int i=1;(i<=(int)strlen(P_str_arr[P9_int]))&&(i<=9);i++){
            P7_int_arr[0][i]=(int)P_str_arr[P9_int][i-1];
        }
    }
    // 05600 DIM P6(10)
    // 05610 CHANGE P9$ TO P6
    if(P9_str!=nullptr){
        for(int i=1;(i<=(int)strlen(P9_str))&&(i<=9);i++){
            P6_int_arr[0][i]=(int)P9_str[i-1];
        }
    }
    // 05620 P7(P8) = P6(1)
    P7_int_arr[P8_int] = P6_int_arr[1];
    // 05630 CHANGE P7 TO P$(P9)
    if(P_str_arr[P9_int]!=nullptr){
        for(int i=1;(i<=(int)strlen(P_str_arr[P9_int]))&&(i<=-1);i++){
            P_str_arr[P9_int][i-1]=(int)P7_int_arr[0][i];
        }
    }
    // 05640 GOTO 05650
    goto Lbl_05650;

  Lbl_05650:
    // 05650 RETURN
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
    // 01010 REM *** PRESS UPS ***
    // 01020 REM *** RON BEHRNS ***
    // 01030 REM *** 1979 ***
    // 01040 B=0
    B_int = 0;
    // 01050 R=0
    R_int = 0;
    // 01060 PRINT "THIS IS THE GAME OF PRESS UPS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS THE GAME OF PRESS UPS");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "INSTRUCTIONS (Y OR N) ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INSTRUCTIONS (Y OR N) ");fputs(buf,fh); };
    // 01080 INPUT I$
    // Start of Basic INPUT statement 01080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&I_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 IF I$<>"Y" THEN 1270
    if(strcmp(I_str,"Y")!=0)goto Lbl_01270;
    // 01100 PRINT "TWO MAY PLAY -- THE COMPUTER IS YOUR REFEREE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TWO MAY PLAY -- THE COMPUTER IS YOUR REFEREE");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "OR YOU MAY PLAY AGAINST THE COMPUTER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OR YOU MAY PLAY AGAINST THE COMPUTER");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT "ONE PRESSED, THE GAME IS OVER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONE PRESSED, THE GAME IS OVER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT "THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE ");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "X-COORDINATE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"X-COORDINATE");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "DIAGONALLY)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIAGONALLY).");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01270:
    // 01270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT "PLAY WITH PARTNER(P) OR COMPUTER(C) ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLAY WITH PARTNER(P) OR COMPUTER(C) ");fputs(buf,fh); };
    // 01290 INPUT R$
    // Start of Basic INPUT statement 01290
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&R_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01290
    // 01300 IF R$="C" THEN 1320
    if(strcmp(R_str,"C")==0)goto Lbl_01320;
    // 01310 GOTO 1350
    goto Lbl_01350;

  Lbl_01320:
    // 01320 PRINT "COMPUTER HAS BLUE PEGS--OPPONENT IS PLAYER B"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER HAS BLUE PEGS--OPPONENT IS PLAYER B");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT "COMPUTER FIRST(Y OR N) ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER FIRST(Y OR N) ");fputs(buf,fh); };
    // 01340 INPUT F$
    // Start of Basic INPUT statement 01340
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
    }; // End of Basic INPUT statement 01340

  Lbl_01350:
    // 01350 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT "READY... HERE IS THE BOARD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"READY... HERE IS THE BOARD");strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01390 DIM P$(7)
    // 01400 P$(1)="YBBBBBY"
    GLBpStr="YBBBBBY";
    P_str_arr[1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01410 P$(2)="RYYYYYR"
    GLBpStr="RYYYYYR";
    P_str_arr[2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01420 P$(3)="RYYYYYR"
    GLBpStr="RYYYYYR";
    P_str_arr[3] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01430 P$(4)="RYYYYYR"
    GLBpStr="RYYYYYR";
    P_str_arr[4] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01440 P$(5)="RYYYYYR"
    GLBpStr="RYYYYYR";
    P_str_arr[5] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01450 P$(6)="RYYYYYR"
    GLBpStr="RYYYYYR";
    P_str_arr[6] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01460 P$(7)="YBBBBBY"
    GLBpStr="YBBBBBY";
    P_str_arr[7] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01470 GOSUB 3700
    Routine_03700();
    // 01480 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01490 IF R$="C" THEN 1650
    if(strcmp(R_str,"C")==0)goto Lbl_01650;
    // 01500 PRINT "MOVE:PLAYER A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MOVE:PLAYER A");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01510:
    // 01510 INPUT X,Y
    // Start of Basic INPUT statement 01510
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ||
                (err += b2c_strtoi(&Y_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01510
    // 01520 IF X>7 THEN 1510
    if(X_int>7)goto Lbl_01510;
    // 01530 IF Y>7 THEN 1510
    if(Y_int>7)goto Lbl_01510;
    // 01540 IF MID$(P$(X),Y,1)="Y" THEN 1570
    if(MID$(P_str_arr[X_int],Y_int,1)=='Y')goto Lbl_01570;
    // 01550 PRINT "ILLEGAL MOVE...PRESS A YELLOW PEG!! "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL MOVE...PRESS A YELLOW PEG!! ");strcat(buf,"\n");fputs(buf,fh); };
    // 01560 GOTO 1510
    goto Lbl_01510;

  Lbl_01570:
    // 01570 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01580 P9=X
    P9_int = X_int;
    // 01590 P8=Y
    P8_int = Y_int;
    // 01600 GOSUB 5580
    Routine_05580();
    // 01610 GOSUB 3700
    Routine_03700();
    // 01620 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01630 IF R$="C" THEN 3040
    if(strcmp(R_str,"C")==0)goto Lbl_03040;
    // 01640 GO TO 2820
    goto Lbl_02820;

  Lbl_01650:
    // 01650 IF F$<>"Y" THEN 1760
    if(strcmp(F_str,"Y")!=0)goto Lbl_01760;
    // 01660 X=INT(3*RND(0) + 3)
    X_int = INT(3*RND(0)+3);
    // 01670 Y=4
    Y_int = 4;
    // 01680 PRINT "I MOVE ";X;Y
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I MOVE "); b2c_INT(buf,X_int); b2c_INT(buf,Y_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01690 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01700 P9=X
    P9_int = X_int;
    // 01710 P8=Y
    P8_int = Y_int;
    // 01720 GOSUB 5580
    Routine_05580();
    // 01730 GOSUB 3700
    Routine_03700();
    // 01740 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01750 GOTO 2820
    goto Lbl_02820;

  Lbl_01760:
    // 01760 PRINT "MOVE; PLAYER B"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MOVE; PLAYER B");strcat(buf,"\n");fputs(buf,fh); };
    // 01770 GOTO1510
    goto Lbl_01510;
    // 02000 REM COMPUTER'S MOVE
    // 02750 END
    // 02810 END

  Lbl_02820:
    // 02820 PRINT "MOVE: PLAYER B"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MOVE: PLAYER B");strcat(buf,"\n");fputs(buf,fh); };
    // 02830 GOSUB 3860
    Routine_03860();
    // 02840 GOSUB 4120
    Routine_04120();
    // 02850 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02860 P9=X
    P9_int = X_int;
    // 02870 P8=Y
    P8_int = Y_int;
    // 02880 GOSUB 5580
    Routine_05580();
    // 02890 GOSUB 4350
    Routine_04350();
    // 02900 IF R$="C" THEN 3040
    if(strcmp(R_str,"C")==0)goto Lbl_03040;
    // 02910 GOSUB 3700
    Routine_03700();
    // 02920 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02930 PRINT "MOVE: PLAYER A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MOVE: PLAYER A");strcat(buf,"\n");fputs(buf,fh); };
    // 02940 GOSUB 3860
    Routine_03860();
    // 02950 GOSUB 4120
    Routine_04120();
    // 02960 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02970 P9=X
    P9_int = X_int;
    // 02980 P8=Y
    P8_int = Y_int;
    // 02990 GOSUB 5580
    Routine_05580();
    // 03000 GOSUB 4350
    Routine_04350();
    // 03010 GOSUB 3700
    Routine_03700();
    // 03020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03030 GOTO 2820
    goto Lbl_02820;

  Lbl_03040:
    // 03040 IF X=1 THEN 3060
    if(X_int==1)goto Lbl_03060;
    // 03050 IF X<>7 THEN 3230
    if(X_int!=7)goto Lbl_03230;

  Lbl_03060:
    // 03060 IF Y>=4 THEN 3120
    if(Y_int>=4)goto Lbl_03120;
    // 03070 K=X
    K_int = X_int;
    // 03080 L=Y+1
    L_int = Y_int+1;
    // 03090 IF MID$(P$(K),L,1)<>"*" THEN 3110
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_03110;
    // 03100 L=Y-1
    L_int = Y_int-1;

  Lbl_03110:
    // 03110 GOTO 3490
    goto Lbl_03490;

  Lbl_03120:
    // 03120 IF Y<>4 THEN 3180
    if(Y_int!=4)goto Lbl_03180;
    // 03130 K=X
    K_int = X_int;
    // 03140 L=Y-1
    L_int = Y_int-1;
    // 03150 IF MID$(P$(K),L,1)<>"*" THEN 3170
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_03170;
    // 03160 L=Y+1
    L_int = Y_int+1;

  Lbl_03170:
    // 03170 GOTO 3490
    goto Lbl_03490;

  Lbl_03180:
    // 03180 K=X
    K_int = X_int;
    // 03190 L=Y-1
    L_int = Y_int-1;
    // 03200 IF MID$(P$(K),L,1)<>"*" THEN 3220
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_03220;
    // 03210 L=Y+1
    L_int = Y_int+1;

  Lbl_03220:
    // 03220 GOTO 3490
    goto Lbl_03490;

  Lbl_03230:
    // 03230 IF X>=5 THEN 3370
    if(X_int>=5)goto Lbl_03370;
    // 03240 IF Y>=4 THEN 3290
    if(Y_int>=4)goto Lbl_03290;
    // 03250 GOSUB 5370
    Routine_05370();

  Lbl_03260:
    // 03260 K=X-1
    K_int = X_int-1;
    // 03270 L=Y+1
    L_int = Y_int+1;

  Lbl_03280:
    // 03280 GOTO 3490
    goto Lbl_03490;

  Lbl_03290:
    // 03290 IF Y<>4 THEN 3330
    if(Y_int!=4)goto Lbl_03330;

  Lbl_03300:
    // 03300 K=X-1
    K_int = X_int-1;

  Lbl_03310:
    // 03310 L=Y
    L_int = Y_int;
    // 03320 GOTO 3490
    goto Lbl_03490;

  Lbl_03330:
    // 03330 GOSUB 5370
    Routine_05370();
    // 03340 K=X-1
    K_int = X_int-1;
    // 03350 L=Y-1
    L_int = Y_int-1;
    // 03360 GOTO 3490
    goto Lbl_03490;

  Lbl_03370:
    // 03370 IF Y>=4 THEN 3420
    if(Y_int>=4)goto Lbl_03420;
    // 03380 GOSUB 5370
    Routine_05370();
    // 03390 K=X+1
    K_int = X_int+1;
    // 03400 L=Y+1
    L_int = Y_int+1;
    // 03410 GOTO 3490
    goto Lbl_03490;

  Lbl_03420:
    // 03420 IF Y<>4 THEN 3460
    if(Y_int!=4)goto Lbl_03460;
    // 03430 K=X+1
    K_int = X_int+1;

  Lbl_03440:
    // 03440 L=Y
    L_int = Y_int;
    // 03450 GOTO 3490
    goto Lbl_03490;

  Lbl_03460:
    // 03460 GOSUB 5370
    Routine_05370();
    // 03470 K=X+1
    K_int = X_int+1;
    // 03480 L=Y-1
    L_int = Y_int-1;

  Lbl_03490:
    // 03490 IF MID$(P$(K),L,1)<>"*" THEN 3570
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_03570;

  Lbl_03500:
    // 03500 K=INT(3*RND(0)-0.99999) + X
    K_int = INT(3*RND(0)-1.)+X_int;
    // 03510 IF K=0 THEN 3500
    if(K_int==0)goto Lbl_03500;
    // 03520 IF K=8 THEN 3500
    if(K_int==8)goto Lbl_03500;

  Lbl_03530:
    // 03530 L=INT(3*RND(0)-0.99999) + Y
    L_int = INT(3*RND(0)-1.)+Y_int;
    // 03540 IF L=0 THEN 3530
    if(L_int==0)goto Lbl_03530;
    // 03550 IF L=8 THEN 3530
    if(L_int==8)goto Lbl_03530;
    // 03560 IF MID$(P$(K),L,1)="*" THEN 3500
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_03500;

  Lbl_03570:
    // 03570 X=K
    X_int = K_int;
    // 03580 Y=L
    Y_int = L_int;
    // 03590 GOSUB 4120
    Routine_04120();
    // 03600 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 03610 P9=X
    P9_int = X_int;
    // 03620 P8=Y
    P8_int = Y_int;
    // 03630 GOSUB 5580
    Routine_05580();
    // 03640 PRINT "I MOVE ";X;Y
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I MOVE "); b2c_INT(buf,X_int); b2c_INT(buf,Y_int);strcat(buf,"\n");fputs(buf,fh); };
    // 03650 GOSUB 3700
    Routine_03700();
    // 03660 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03670 GOSUB 4350
    Routine_04350();
    // 03680 GOTO 2820
    goto Lbl_02820;
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
