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
    0x64eea4f52db0 ---------A   01000 RANDOMIZE
    0x64eea4f41550 ---------A   01010 REM *** PRESS UPS ***
    0x64eea4f41590 ---------A   01020 REM *** RON BEHRNS ***
    0x64eea4f415d0 ---------A   01030 REM *** 1979 ***
    0x64eea4f51b80 ---------A   01040 B=0
    0x64eea4f52e70 ---------A   01050 R=0
    0x64eea4f52ff0 ---------A   01060 PRINT "THIS IS THE GAME OF PRESS UPS"
    0x64eea4f530b0 ---------A   01070 PRINT "INSTRUCTIONS (Y OR N) ";
    0x64eea4f506d0 ---------A   01080 INPUT I$
    0x64eea4f50670 ---------A   01090 IF I$<>"Y" THEN 1270
    0x64eea4f53100 ---------A   01100 PRINT "TWO MAY PLAY -- THE COMPUTER IS YOUR REFEREE"
    0x64eea4f53210 ---------A   01110 PRINT "OR YOU MAY PLAY AGAINST THE COMPUTER"
    0x64eea4f51670 ---------A   01120 PRINT
    0x64eea4f51820 ---------A   01130 PRINT "ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL"
    0x64eea4f589b0 ---------A   01140 PRINT "A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID"
    0x64eea4f58b40 ---------A   01150 PRINT "THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS"
    0x64eea4f58ce0 ---------A   01160 PRINT "YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS"
    0x64eea4f58e80 ---------A   01170 PRINT "IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST"
    0x64eea4f58fe0 ---------A   01180 PRINT "ONE PRESSED, THE GAME IS OVER."
    0x64eea4f59190 ---------A   01190 PRINT "THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS"
    0x64eea4f592f0 ---------A   01200 PRINT "END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE "
    0x64eea4f59420 ---------A   01210 PRINT "X-COORDINATE"
    0x64eea4f594d0 ---------A   01220 PRINT
    0x64eea4f59690 ---------A   01230 PRINT "DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST"
    0x64eea4f59850 ---------A   01240 PRINT "THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)"
    0x64eea4f599b0 ---------A   01250 PRINT "NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING"
    0x64eea4f59b00 ---------A   01260 PRINT "DIAGONALLY)."
    0x64eea4f59b90 ---------A T 01270 PRINT
    0x64eea4f59ce0 ---------A   01280 PRINT "PLAY WITH PARTNER(P) OR COMPUTER(C) ";
    0x64eea4f59ed0 ---------A   01290 INPUT R$
    0x64eea4f5a150 ---------A   01300 IF R$="C" THEN 1320
    0x64eea4f5a200 ---------A   01310 GOTO 1350
    0x64eea4f5a340 ---------A T 01320 PRINT "COMPUTER HAS BLUE PEGS--OPPONENT IS PLAYER B"
    0x64eea4f5a6a0 ---------A   01330 PRINT "COMPUTER FIRST(Y OR N) ";
    0x64eea4f5a8b0 ---------A   01340 INPUT F$
    0x64eea4f5a940 ---------A T 01350 PRINT
    0x64eea4f5aaa0 ---------A   01360 PRINT "READY... HERE IS THE BOARD"
    0x64eea4f5ab10 ---------A   01370 PRINT
    0x64eea4f5ab80 ---------A   01380 PRINT
    0x64eea4f5ae50 ---------A   01390 DIM P$(7)
    0x64eea4f5b130 ---------A   01400 P$(1)="YBBBBBY"
    0x64eea4f5b420 ---------A   01410 P$(2)="RYYYYYR"
    0x64eea4f5b710 ---------A   01420 P$(3)="RYYYYYR"
    0x64eea4f5ba00 ---------A   01430 P$(4)="RYYYYYR"
    0x64eea4f5bcf0 ---------A   01440 P$(5)="RYYYYYR"
    0x64eea4f5bfe0 ---------A   01450 P$(6)="RYYYYYR"
    0x64eea4f5c2d0 ---------A   01460 P$(7)="YBBBBBY"
    0x64eea4f5c340 ---------A   01470 GOSUB 2000
    0x64eea4f5c3b0 ---------A   01480 PRINT
    0x64eea4f5c630 ---------A   01490 IF R$="C" THEN 1650
    0x64eea4f5c790 ---------A   01500 PRINT "MOVE:PLAYER A"
    0x64eea4f5cb40 ---------A T 01510 INPUT X,Y
    0x64eea4f5cda0 ---------A   01520 IF X>7 THEN 1510
    0x64eea4f5d010 ---------A   01530 IF Y>7 THEN 1510
    0x64eea4f5d610 ---------A   01540 IF MID$(P$(X),Y,1)="Y" THEN 1570
    0x64eea4f5d780 ---------A   01550 PRINT "ILLEGAL MOVE...PRESS A YELLOW PEG!! "
    0x64eea4f5d7f0 ---------A   01560 GOTO 1510
    0x64eea4f5dad0 ---------A T 01570 P9$="*"
    0x64eea4f5ddc0 ---------A   01580 P9=X
    0x64eea4f5e0b0 ---------A   01590 P8=Y
    0x64eea4f5e120 ---------A   01600 GOSUB 3450
    0x64eea4f5e180 ---------A   01610 GOSUB 2000
    0x64eea4f5e1f0 ---------A   01620 PRINT
    0x64eea4f5e460 ---------A   01630 IF R$="C" THEN 2600
    0x64eea4f5e4f0 ---------A   01640 GO TO 1780
    0x64eea4f5eb70 ---------A T 01650 IF F$<>"Y" THEN 1760
    0x64eea4f5f150 ---------A   01660 X=INT(3*RND(0) + 3)
    0x64eea4f5f370 ---------A   01670 Y=4
    0x64eea4f5f6c0 ---------A   01680 PRINT "I MOVE ";X;Y
    0x64eea4f5f8f0 ---------A   01690 P9$="*"
    0x64eea4f5fb20 ---------A   01700 P9=X
    0x64eea4f5fd50 ---------A   01710 P8=Y
    0x64eea4f5fdc0 ---------A   01720 GOSUB 3450
    0x64eea4f5fe20 ---------A   01730 GOSUB 2000
    0x64eea4f5fe80 ---------A   01740 PRINT
    0x64eea4f5ff00 ---------A   01750 GOTO 1780
    0x64eea4f60040 ---------A T 01760 PRINT "MOVE; PLAYER B"
    0x64eea4f600c0 ---------A   01770 GOTO1510
    0x64eea4f60200 --------FA T 01780 PRINT "MOVE: PLAYER B"
    0x64eea4f60270 --------FA   01790 GOSUB 2160
    0x64eea4f602d0 --------FA   01800 GOSUB 2310
    0x64eea4f604f0 --------FA   01810 P9$="*"
    0x64eea4f60720 --------FA   01820 P9=X
    0x64eea4f60950 --------FA   01830 P8=Y
    0x64eea4f609c0 --------FA   01840 GOSUB 3450
    0x64eea4f60a30 --------FA   01850 GOSUB 2470
    0x64eea4f60c90 --------FA   01860 IF R$="C" THEN 2600
    0x64eea4f60d10 --------FA   01870 GOSUB 2000
    0x64eea4f60d80 --------FA   01880 PRINT
    0x64eea4f60ed0 --------FA   01890 PRINT "MOVE: PLAYER A"
    0x64eea4f60f40 --------FA   01900 GOSUB 2160
    0x64eea4f60fa0 --------FA   01910 GOSUB 2310
    0x64eea4f611c0 --------FA   01920 P9$="*"
    0x64eea4f613f0 --------FA   01930 P9=X
    0x64eea4f61620 --------FA   01940 P8=Y
    0x64eea4f61690 --------FA   01950 GOSUB 3450
    0x64eea4f616f0 --------FA   01960 GOSUB 2470
    0x64eea4f61750 --------FA   01970 GOSUB 2000
    0x64eea4f617b0 --------FA   01980 PRINT
    0x64eea4f61820 --------FA   01990 GOTO 1780
    0x64eea4f61880 ---------B G 02000 REM PRINT BOARD
    0x64eea4f61910 ---------B   02010 PRINT
    0x64eea4f61a70 ---------B   02020 PRINT "      SECOND NUMBER"
    0x64eea4f61bc0 ---------B   02030 PRINT "      1 2 3 4 5 6 7"
    0x64eea4f61c30 ---------B   02040 PRINT
    0x64eea4f61f20 ---------B   02050 F1$="FIRST #"
    0x64eea4f622b0 ---------B   02060 FOR I=1 TO 7
    0x64eea4f62660 ---------B   02070     FOR J=1 TO 7
    0x64eea4f628a0 ---------B   02080 	    IF J<>1 GOTO 2100
    0x64eea4f62ff0 ---------B   02090 	    PRINT MID$(F1$,I,1);" ";I;" ";
    0x64eea4f634c0 ---------B T 02100 	    PRINT MID$(P$(I),J,1);
    0x64eea4f63630 ---------B   02110 	    PRINT " ";
    0x64eea4f63760 ---------B   02120     NEXT J
    0x64eea4f63980 ---------B   02130     PRINT CHR$(14)
    0x64eea4f63ab0 ---------B   02140 NEXT I
    0x64eea4f63b10 ---------B   02150 RETURN
    0x64eea4f63ee0 ---------C B 02160 INPUT X(1),Y(1)
    0x64eea4f63f60 ---------C   02170 REM CHECK ADJACENCY
    0x64eea4f642a0 ---------C   02180 IF X(1)<0 THEN 2160
    0x64eea4f645d0 ---------C   02190 IF Y(1)<0 THEN 2160
    0x64eea4f64900 ---------C   02200 IF X(1)=0 THEN 2380
    0x64eea4f64c30 ---------C   02210 IF X(1)>7 THEN 2160
    0x64eea4f64f60 ---------C   02220 IF Y(1)>7 THEN 2160
    0x64eea4f65490 ---------C   02230 IF ABS(X-X(1))>1 THEN 2290
    0x64eea4f659d0 ---------C   02240 IF ABS(Y-Y(1))>1 THEN 2290
    0x64eea4f66130 ---------C   02250 IF MID$(P$(X(1)),Y(1),1)="*" THEN 2160
    0x64eea4f66430 ---------C   02260 X=X(1)
    0x64eea4f66720 ---------C   02270 Y=Y(1)
    0x64eea4f66770 ---------C   02280 RETURN
    0x64eea4f670f0 ---------C T 02290 PRINT "NOT ADJACENT!"
    0x64eea4f67170 ---------C   02300 GOTO 2160
    0x64eea4f67730 ---------D G 02310 IF MID$(P$(X),Y,1)<>"B" THEN 2330
    0x64eea4f67a80 ---------D   02320  B=B+1
    0x64eea4f68050 ---------D T 02330 IF MID$(P$(X),Y,1)<>"R" THEN 2350
    0x64eea4f68390 ---------D   02340 R=R+1
    0x64eea4f685e0 ---------D T 02350 IF B=10 THEN 2410
    0x64eea4f68840 ---------D   02360 IF R=10 THEN 2430
    0x64eea4f688a0 ---------D   02370 RETURN
    0x64eea4f68b20 --------EC T 02380 IF B>R  THEN 2410
    0x64eea4f68da0 --------EC   02390 IF R>B THEN 2430
    0x64eea4f69040 --------EC   02400 IF R=B THEN 2450
    0x64eea4f694a0 -------EDC T 02410 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x64eea4f69530 -------EDC   02420 GOTO 2460
    0x64eea4f69970 -------EDC T 02430 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x64eea4f69a00 -------EDC   02440 GOTO 2460
    0x64eea4f69c50 --------EC T 02450 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x64eea4f69cc0 -------EDC T 02460 GOTO 3530
    0x64eea4f6a290 ---------E G 02470 FOR G=X-1 TO X+1
    0x64eea4f6a880 ---------E   02480     FOR H=Y-1 TO Y+1
    0x64eea4f6aaf0 ---------E   02490     	IF G=0 THEN 2550
    0x64eea4f6ad60 ---------E   02500     	IF H=0 THEN 2540
    0x64eea4f6afd0 ---------E   02510     	IF G=8 THEN 2550
    0x64eea4f6b250 ---------E   02520     	IF H=8 THEN 2540
    0x64eea4f6b830 ---------E   02530     	IF MID$(P$(G),H,1)<>"*" THEN 2580
    0x64eea4f6b970 ---------E T 02540     NEXT H
    0x64eea4f6bab0 ---------E T 02550 NEXT G
    0x64eea4f6bc10 ---------E   02560 PRINT "GAME OVER"
    0x64eea4f6bc80 ---------E   02570 GOTO 2380
    0x64eea4f6bcc0 ---------E T 02580 RETURN
    0x64eea4f6bd50 ---------A   02590 REM COMPUTER'S MOVE
    0x64eea4f6bfb0 --------FA T 02600 IF X=1 THEN 2620
    0x64eea4f6c210 --------FA   02610 IF X<>7 THEN 2790
    0x64eea4f6c470 --------FA T 02620 IF Y>=4 THEN 2680
    0x64eea4f6c770 --------FA   02630 K=X
    0x64eea4f6cb70 --------FA   02640 L=Y+1
    0x64eea4f6d140 --------FA   02650 IF MID$(P$(K),L,1)<>"*" THEN 2670
    0x64eea4f6d480 --------FA   02660 L=Y-1
    0x64eea4f6d4f0 --------FA T 02670 GOTO 3050
    0x64eea4f6d730 --------FA T 02680 IF Y<>4 THEN 2740
    0x64eea4f6d970 --------FA   02690 K=X
    0x64eea4f6dcb0 --------FA   02700 L=Y-1
    0x64eea4f6e280 --------FA   02710 IF MID$(P$(K),L,1)<>"*" THEN 2730
    0x64eea4f6e5c0 --------FA   02720 L=Y+1
    0x64eea4f6e630 --------FA T 02730 GOTO 3050
    0x64eea4f6e850 --------FA T 02740 K=X
    0x64eea4f6eb90 --------FA   02750 L=Y-1
    0x64eea4f6f160 --------FA   02760 IF MID$(P$(K),L,1)<>"*" THEN 2780
    0x64eea4f6f4a0 --------FA   02770 L=Y+1
    0x64eea4f6f510 --------FA T 02780 GOTO 3050
    0x64eea4f6f750 --------FA T 02790 IF X>=5 THEN 2930
    0x64eea4f6f9b0 --------FA   02800 IF Y>=4 THEN 2850
    0x64eea4f6fa30 --------FA   02810 GOSUB 3260
    0x64eea4f6fd50 --------FA   02820 K=X-1
    0x64eea4f70080 --------FA   02830 L=Y+1
    0x64eea4f700f0 --------FA   02840 GOTO 3050
    0x64eea4f70330 --------FA T 02850 IF Y<>4 THEN 2890
    0x64eea4f70670 --------FA   02860 K=X-1
    0x64eea4f708a0 --------FA   02870 L=Y
    0x64eea4f70910 --------FA   02880 GOTO 3050
    0x64eea4f70970 --------FA T 02890 GOSUB 3260
    0x64eea4f70c90 --------FA   02900 K=X-1
    0x64eea4f70fc0 --------FA   02910 L=Y-1
    0x64eea4f71030 --------FA   02920 GOTO 3050
    0x64eea4f71270 --------FA T 02930 IF Y>=4 THEN 2980
    0x64eea4f712f0 --------FA   02940 GOSUB 3260
    0x64eea4f71610 --------FA   02950 K=X+1
    0x64eea4f71940 --------FA   02960 L=Y+1
    0x64eea4f719b0 --------FA   02970 GOTO 3050
    0x64eea4f71bf0 --------FA T 02980 IF Y<>4 THEN 3020
    0x64eea4f71f30 --------FA   02990 K=X+1
    0x64eea4f72160 --------FA   03000 L=Y
    0x64eea4f721d0 --------FA   03010 GOTO 3050
    0x64eea4f72230 --------FA T 03020 GOSUB 3260
    0x64eea4f72550 --------FA   03030 K=X+1
    0x64eea4f72890 --------FA   03040 L=Y-1
    0x64eea4f72e70 --------FA T 03050 IF MID$(P$(K),L,1)<>"*" THEN 3130
    0x64eea4f73570 --------FA T 03060 K=INT(3*RND(0)-0.99999) + X
    0x64eea4f737c0 --------FA   03070 IF K=0 THEN 3060
    0x64eea4f73a30 --------FA   03080 IF K=8 THEN 3060
    0x64eea4f74130 --------FA T 03090 L=INT(3*RND(0)-0.99999) + Y
    0x64eea4f74380 --------FA   03100 IF L=0 THEN 3090
    0x64eea4f745f0 --------FA   03110 IF L=8 THEN 3090
    0x64eea4f74bd0 --------FA   03120 IF MID$(P$(K),L,1)="*" THEN 3060
    0x64eea4f74e10 --------FA T 03130 X=K
    0x64eea4f75040 --------FA   03140 Y=L
    0x64eea4f750b0 --------FA   03150 GOSUB 2310
    0x64eea4f752d0 --------FA   03160 P9$="*"
    0x64eea4f75500 --------FA   03170 P9=X
    0x64eea4f75730 --------FA   03180 P8=Y
    0x64eea4f757b0 --------FA   03190 GOSUB 3450
    0x64eea4f75af0 --------FA   03200 PRINT "I MOVE ";X;Y
    0x64eea4f75b60 --------FA   03210 GOSUB 2000
    0x64eea4f75bc0 --------FA   03220 PRINT
    0x64eea4f75c30 --------FA   03230 GOSUB 2470
    0x64eea4f75ca0 --------FA   03240 GOTO 1780
    0x64eea4f75d00 ---------F   03250 REM GRAB CORNER PEG
    0x64eea4f76000 ---------F G 03260 X(2)=X
    0x64eea4f76300 ---------F   03270 Y(2)=Y
    0x64eea4f76a60 ---------F   03280 FOR M=X(2)-1 TO X(2)+1
    0x64eea4f771d0 ---------F   03290     FOR N=Y(2)-1 TO Y(2)+1
    0x64eea4f77440 ---------F   03300     	IF M=0 THEN 3430
    0x64eea4f776b0 ---------F   03310     	IF N=0 THEN 3420
    0x64eea4f77920 ---------F   03320     	IF M=8 THEN 3430
    0x64eea4f77b90 ---------F   03330     	IF N=8 THEN 3420
    0x64eea4f77e00 ---------F   03340     	IF M=1 THEN 3360
    0x64eea4f78070 ---------F   03350     	IF M<>7 THEN 3430
    0x64eea4f782e0 ---------F T 03360     	IF N=1 THEN 3380
    0x64eea4f78560 ---------F   03370     	IF N<>7 THEN 3420
    0x64eea4f78b40 ---------F T 03380     	IF MID$(P$(M),N,1)="*" THEN 3440
    0x64eea4f78d80 ---------F   03390     	K=M
    0x64eea4f78fb0 ---------F   03400     	L=N
    0x64eea4f79020 ---------F   03410     	GOTO 3130
    0x64eea4f79140 ---------F T 03420     NEXT N
    0x64eea4f79280 ---------F T 03430 NEXT M
    0x64eea4f792e0 ---------F T 03440 RETURN
    0x64eea4f793c0 ---------G G 03450 REM SUBROUTINE TO INSERT A CHARATER IN A CHARATER STRING
    0x64eea4f796b0 ---------G   03460 DIM P7(10)
    0x64eea4f79990 ---------G   03470 CHANGE P$(P9) TO P7
    0x64eea4f79c80 ---------G   03480 DIM P6(10)
    0x64eea4f79e80 ---------G   03490 CHANGE P9$ TO P6
    0x64eea4f7a280 ---------G   03500 P7(P8) = P6(1)
    0x64eea4f7a570 ---------G   03510 CHANGE P7 TO P$(P9)
    0x64eea4f7a5e0 ---------G   03520 RETURN
    0x64eea4f7a640 -------EDC T 03530 END
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
   A) 0x64eea4f52db0 (01000)   0x64eea4f52db0 (01000)   0x64eea4f7a640 (03530)   0x64eea4f75ca0 (03240)   
   B) 0x64eea4f61880 (02000)   0x64eea4f61880 (02000)   0x64eea4f63b10 (02150)   0x64eea4f63b10 (02150)   
   C) 0x64eea4f63ee0 (02160)   0x64eea4f63ee0 (02160)   0x64eea4f66770 (02280)   0x64eea4f7a640 (03530)   
   D) 0x64eea4f67730 (02310)   0x64eea4f67730 (02310)   0x64eea4f688a0 (02370)   0x64eea4f7a640 (03530)   
   E) 0x64eea4f68b20 (02380)   0x64eea4f6a290 (02470)   0x64eea4f6bcc0 (02580)   0x64eea4f7a640 (03530)   
   F) 0x64eea4f60200 (01780)   0x64eea4f76000 (03260)   0x64eea4f792e0 (03440)   0x64eea4f792e0 (03440)   
   G) 0x64eea4f793c0 (03450)   0x64eea4f793c0 (03450)   0x64eea4f7a5e0 (03520)   0x64eea4f7a5e0 (03520)   

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
    0x64eea4f52db0 ---------A   01000 RANDOMIZE
    0x64eea4f41550 ---------A   01010 REM *** PRESS UPS ***
    0x64eea4f41590 ---------A   01020 REM *** RON BEHRNS ***
    0x64eea4f415d0 ---------A   01030 REM *** 1979 ***
    0x64eea4f51b80 ---------A   01040 B=0
    0x64eea4f52e70 ---------A   01050 R=0
    0x64eea4f52ff0 ---------A   01060 PRINT "THIS IS THE GAME OF PRESS UPS"
    0x64eea4f530b0 ---------A   01070 PRINT "INSTRUCTIONS (Y OR N) ";
    0x64eea4f506d0 ---------A   01080 INPUT I$
    0x64eea4f50670 ---------A   01090 IF I$<>"Y" THEN 1270
    0x64eea4f53100 ---------A   01100 PRINT "TWO MAY PLAY -- THE COMPUTER IS YOUR REFEREE"
    0x64eea4f53210 ---------A   01110 PRINT "OR YOU MAY PLAY AGAINST THE COMPUTER"
    0x64eea4f51670 ---------A   01120 PRINT
    0x64eea4f51820 ---------A   01130 PRINT "ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL"
    0x64eea4f589b0 ---------A   01140 PRINT "A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID"
    0x64eea4f58b40 ---------A   01150 PRINT "THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS"
    0x64eea4f58ce0 ---------A   01160 PRINT "YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS"
    0x64eea4f58e80 ---------A   01170 PRINT "IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST"
    0x64eea4f58fe0 ---------A   01180 PRINT "ONE PRESSED, THE GAME IS OVER."
    0x64eea4f59190 ---------A   01190 PRINT "THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS"
    0x64eea4f592f0 ---------A   01200 PRINT "END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE "
    0x64eea4f59420 ---------A   01210 PRINT "X-COORDINATE"
    0x64eea4f594d0 ---------A   01220 PRINT
    0x64eea4f59690 ---------A   01230 PRINT "DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST"
    0x64eea4f59850 ---------A   01240 PRINT "THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)"
    0x64eea4f599b0 ---------A   01250 PRINT "NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING"
    0x64eea4f59b00 ---------A   01260 PRINT "DIAGONALLY)."
    0x64eea4f59b90 ---------A T 01270 PRINT
    0x64eea4f59ce0 ---------A   01280 PRINT "PLAY WITH PARTNER(P) OR COMPUTER(C) ";
    0x64eea4f59ed0 ---------A   01290 INPUT R$
    0x64eea4f5a150 ---------A   01300 IF R$="C" THEN 1320
    0x64eea4f5a200 ---------A   01310 GOTO 1350
    0x64eea4f5a340 ---------A T 01320 PRINT "COMPUTER HAS BLUE PEGS--OPPONENT IS PLAYER B"
    0x64eea4f5a6a0 ---------A   01330 PRINT "COMPUTER FIRST(Y OR N) ";
    0x64eea4f5a8b0 ---------A   01340 INPUT F$
    0x64eea4f5a940 ---------A T 01350 PRINT
    0x64eea4f5aaa0 ---------A   01360 PRINT "READY... HERE IS THE BOARD"
    0x64eea4f5ab10 ---------A   01370 PRINT
    0x64eea4f5ab80 ---------A   01380 PRINT
    0x64eea4f5ae50 ---------A   01390 DIM P$(7)
    0x64eea4f5b130 ---------A   01400 P$(1)="YBBBBBY"
    0x64eea4f5b420 ---------A   01410 P$(2)="RYYYYYR"
    0x64eea4f5b710 ---------A   01420 P$(3)="RYYYYYR"
    0x64eea4f5ba00 ---------A   01430 P$(4)="RYYYYYR"
    0x64eea4f5bcf0 ---------A   01440 P$(5)="RYYYYYR"
    0x64eea4f5bfe0 ---------A   01450 P$(6)="RYYYYYR"
    0x64eea4f5c2d0 ---------A   01460 P$(7)="YBBBBBY"
    0x64eea4f5c340 ---------A   01470 GOSUB 3700
    0x64eea4f5c3b0 ---------A   01480 PRINT
    0x64eea4f5c630 ---------A   01490 IF R$="C" THEN 1650
    0x64eea4f5c790 ---------A   01500 PRINT "MOVE:PLAYER A"
    0x64eea4f5cb40 ---------A T 01510 INPUT X,Y
    0x64eea4f5cda0 ---------A   01520 IF X>7 THEN 1510
    0x64eea4f5d010 ---------A   01530 IF Y>7 THEN 1510
    0x64eea4f5d610 ---------A   01540 IF MID$(P$(X),Y,1)="Y" THEN 1570
    0x64eea4f5d780 ---------A   01550 PRINT "ILLEGAL MOVE...PRESS A YELLOW PEG!! "
    0x64eea4f5d7f0 ---------A   01560 GOTO 1510
    0x64eea4f5dad0 ---------A T 01570 P9$="*"
    0x64eea4f5ddc0 ---------A   01580 P9=X
    0x64eea4f5e0b0 ---------A   01590 P8=Y
    0x64eea4f5e120 ---------A   01600 GOSUB 5580
    0x64eea4f5e180 ---------A   01610 GOSUB 3700
    0x64eea4f5e1f0 ---------A   01620 PRINT
    0x64eea4f5e460 ---------A   01630 IF R$="C" THEN 3040
    0x64eea4f5e4f0 ---------A   01640 GO TO 2820
    0x64eea4f5eb70 ---------A T 01650 IF F$<>"Y" THEN 1760
    0x64eea4f5f150 ---------A   01660 X=INT(3*RND(0) + 3)
    0x64eea4f5f370 ---------A   01670 Y=4
    0x64eea4f5f6c0 ---------A   01680 PRINT "I MOVE ";X;Y
    0x64eea4f5f8f0 ---------A   01690 P9$="*"
    0x64eea4f5fb20 ---------A   01700 P9=X
    0x64eea4f5fd50 ---------A   01710 P8=Y
    0x64eea4f5fdc0 ---------A   01720 GOSUB 5580
    0x64eea4f5fe20 ---------A   01730 GOSUB 3700
    0x64eea4f5fe80 ---------A   01740 PRINT
    0x64eea4f5ff00 ---------A   01750 GOTO 2820
    0x64eea4f60040 ---------A T 01760 PRINT "MOVE; PLAYER B"
    0x64eea4f600c0 ---------A   01770 GOTO1510
    0x64eea4f80dc0 ----------   01780 PRINT "MOVE: PLAYER B"
    0x64eea4f80e10 ----------   01790 GOSUB 3860
    0x64eea4f80e50 ----------   01800 GOSUB 4120
    0x64eea4f80e90 ----------   01810 P9$="*"
    0x64eea4f80f00 ----------   01820 P9=X
    0x64eea4f80f70 ----------   01830 P8=Y
    0x64eea4f80fe0 ----------   01840 GOSUB 5580
    0x64eea4f81040 ----------   01850 GOSUB 4350
    0x64eea4f810a0 ----------   01860 IF R$="C" THEN 3040
    0x64eea4f81130 ----------   01870 GOSUB 3700
    0x64eea4f81190 ----------   01880 PRINT
    0x64eea4f81200 ----------   01890 PRINT "MOVE: PLAYER A"
    0x64eea4f81280 ----------   01900 GOSUB 3860
    0x64eea4f812e0 ----------   01910 GOSUB 4120
    0x64eea4f81340 ----------   01920 P9$="*"
    0x64eea4f813b0 ----------   01930 P9=X
    0x64eea4f81420 ----------   01940 P8=Y
    0x64eea4f81490 ----------   01950 GOSUB 5580
    0x64eea4f814f0 ----------   01960 GOSUB 4350
    0x64eea4f81550 ----------   01970 GOSUB 3700
    0x64eea4f815b0 ----------   01980 PRINT
    0x64eea4f81620 ----------   01990 GOTO 2820
    0x64eea4f6bd50 ---------A   02000 REM COMPUTER'S MOVE
    0x64eea4f81680 ----------   02010 IF X=1 THEN 3060
    0x64eea4f81700 ----------   02020 IF X<>7 THEN 3230
    0x64eea4f81780 ----------   02030 IF Y>=4 THEN 3120
    0x64eea4f81800 ----------   02040 K=X
    0x64eea4f81870 ----------   02050 L=Y+1
    0x64eea4f818e0 ----------   02060 IF MID$(P$(K),L,1)<>"*" THEN 3110
    0x64eea4f81970 ----------   02070 L=Y-1
    0x64eea4f819e0 ----------   02080 GOTO 3490
    0x64eea4f81a40 ----------   02090 IF Y<>4 THEN 3180
    0x64eea4f81ac0 ----------   02100 K=X
    0x64eea4f81b30 ----------   02110 L=Y-1
    0x64eea4f81ba0 ----------   02120 IF MID$(P$(K),L,1)<>"*" THEN 3170
    0x64eea4f81c30 ----------   02130 L=Y+1
    0x64eea4f81ca0 ----------   02140 GOTO 3490
    0x64eea4f81d00 ----------   02150 K=X
    0x64eea4f81d70 ----------   02160 L=Y-1
    0x64eea4f81de0 ----------   02170 IF MID$(P$(K),L,1)<>"*" THEN 3220
    0x64eea4f81e70 ----------   02180 L=Y+1
    0x64eea4f81ee0 ----------   02190 GOTO 3490
    0x64eea4f81f40 ----------   02200 IF X>=5 THEN 3370
    0x64eea4f81fc0 ----------   02210 IF Y>=4 THEN 3290
    0x64eea4f82040 ----------   02220 GOSUB 5370
    0x64eea4f820a0 ----------   02230 K=X-1
    0x64eea4f82110 ----------   02240 L=Y+1
    0x64eea4f82180 ----------   02250 GOTO 3490
    0x64eea4f821e0 ----------   02260 IF Y<>4 THEN 3330
    0x64eea4f82260 ----------   02270 K=X-1
    0x64eea4f822d0 ----------   02280 L=Y
    0x64eea4f82b50 ----------   02290 GOTO 3490
    0x64eea4f82bb0 ----------   02300 GOSUB 5370
    0x64eea4f82c10 ----------   02310 K=X-1
    0x64eea4f82c80 ----------   02320 L=Y-1
    0x64eea4f82cf0 ----------   02330 GOTO 3490
    0x64eea4f82d50 ----------   02340 IF Y>=4 THEN 3420
    0x64eea4f82dd0 ----------   02350 GOSUB 5370
    0x64eea4f82e30 ----------   02360 K=X+1
    0x64eea4f82ea0 ----------   02370 L=Y+1
    0x64eea4f82f10 ----------   02380 GOTO 3490
    0x64eea4f82f70 ----------   02390 IF Y<>4 THEN 3460
    0x64eea4f82ff0 ----------   02400 K=X+1
    0x64eea4f83060 ----------   02410 L=Y
    0x64eea4f830d0 ----------   02420 GOTO 3490
    0x64eea4f83130 ----------   02430 GOSUB 5370
    0x64eea4f83190 ----------   02440 K=X+1
    0x64eea4f83200 ----------   02450 L=Y-1
    0x64eea4f83270 ----------   02460 IF MID$(P$(K),L,1)<>"*" THEN 3570
    0x64eea4f83300 ----------   02470 K=INT(3*RND(0)-0.99999) + X
    0x64eea4f83380 ----------   02480 IF K=0 THEN 3500
    0x64eea4f83400 ----------   02490 IF K=8 THEN 3500
    0x64eea4f83480 ----------   02500 L=INT(3*RND(0)-0.99999) + Y
    0x64eea4f83500 ----------   02510 IF L=0 THEN 3530
    0x64eea4f83580 ----------   02520 IF L=8 THEN 3530
    0x64eea4f83600 ----------   02530 IF MID$(P$(K),L,1)="*" THEN 3500
    0x64eea4f83690 ----------   02540 X=K
    0x64eea4f83700 ----------   02550 Y=L
    0x64eea4f83770 ----------   02560 GOSUB 4120
    0x64eea4f837d0 ----------   02570 P9$="*"
    0x64eea4f83840 ----------   02580 P9=X
    0x64eea4f838b0 ----------   02590 P8=Y
    0x64eea4f83920 ----------   02600 GOSUB 5580
    0x64eea4f83980 ----------   02610 PRINT "I MOVE ";X;Y
    0x64eea4f83a00 ----------   02620 GOSUB 3700
    0x64eea4f83a60 ----------   02630 PRINT
    0x64eea4f83ad0 ----------   02640 GOSUB 4350
    0x64eea4f83b30 ----------   02650 GOTO 2820
    0x64eea4f83cb0 ----------   02660 IF B>R  THEN 3260
    0x64eea4f83d30 ----------   02670 IF R>B THEN 3280
    0x64eea4f83db0 ----------   02680 IF R=B THEN 3300
    0x64eea4f83e30 ----------   02690 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x64eea4f83ec0 ----------   02700 GOTO 3310
    0x64eea4f83f20 ----------   02710 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x64eea4f83fb0 ----------   02720 GOTO 3310
    0x64eea4f84010 ----------   02730 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x64eea4f840a0 ----------   02740 GOTO 3440
    0x64eea4f84100 ---------A   02750 END
    0x64eea4f84220 ----------   02760 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x64eea4f842b0 ----------   02770 GOTO 3310
    0x64eea4f84310 ----------   02780 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x64eea4f843a0 ----------   02790 GOTO 3310
    0x64eea4f84400 ----------   02800 GOTO 3440
    0x64eea4f84460 ---------A   02810 END
    0x64eea4f60200 ---------A T 02820 PRINT "MOVE: PLAYER B"
    0x64eea4f60270 ---------A   02830 GOSUB 3860
    0x64eea4f602d0 ---------A   02840 GOSUB 4120
    0x64eea4f604f0 ---------A   02850 P9$="*"
    0x64eea4f60720 ---------A   02860 P9=X
    0x64eea4f60950 ---------A   02870 P8=Y
    0x64eea4f609c0 ---------A   02880 GOSUB 5580
    0x64eea4f60a30 ---------A   02890 GOSUB 4350
    0x64eea4f60c90 ---------A   02900 IF R$="C" THEN 3040
    0x64eea4f60d10 ---------A   02910 GOSUB 3700
    0x64eea4f60d80 ---------A   02920 PRINT
    0x64eea4f60ed0 ---------A   02930 PRINT "MOVE: PLAYER A"
    0x64eea4f60f40 ---------A   02940 GOSUB 3860
    0x64eea4f60fa0 ---------A   02950 GOSUB 4120
    0x64eea4f611c0 ---------A   02960 P9$="*"
    0x64eea4f613f0 ---------A   02970 P9=X
    0x64eea4f61620 ---------A   02980 P8=Y
    0x64eea4f61690 ---------A   02990 GOSUB 5580
    0x64eea4f616f0 ---------A   03000 GOSUB 4350
    0x64eea4f61750 ---------A   03010 GOSUB 3700
    0x64eea4f617b0 ---------A   03020 PRINT
    0x64eea4f61820 ---------A   03030 GOTO 2820
    0x64eea4f6bfb0 ---------A T 03040 IF X=1 THEN 3060
    0x64eea4f6c210 ---------A   03050 IF X<>7 THEN 3230
    0x64eea4f6c470 ---------A T 03060 IF Y>=4 THEN 3120
    0x64eea4f6c770 ---------A   03070 K=X
    0x64eea4f6cb70 ---------A   03080 L=Y+1
    0x64eea4f6d140 ---------A   03090 IF MID$(P$(K),L,1)<>"*" THEN 3110
    0x64eea4f6d480 ---------A   03100 L=Y-1
    0x64eea4f6d4f0 ---------A T 03110 GOTO 3490
    0x64eea4f6d730 ---------A T 03120 IF Y<>4 THEN 3180
    0x64eea4f6d970 ---------A   03130 K=X
    0x64eea4f6dcb0 ---------A   03140 L=Y-1
    0x64eea4f6e280 ---------A   03150 IF MID$(P$(K),L,1)<>"*" THEN 3170
    0x64eea4f6e5c0 ---------A   03160 L=Y+1
    0x64eea4f6e630 ---------A T 03170 GOTO 3490
    0x64eea4f6e850 ---------A T 03180 K=X
    0x64eea4f6eb90 ---------A   03190 L=Y-1
    0x64eea4f6f160 ---------A   03200 IF MID$(P$(K),L,1)<>"*" THEN 3220
    0x64eea4f6f4a0 ---------A   03210 L=Y+1
    0x64eea4f6f510 ---------A T 03220 GOTO 3490
    0x64eea4f6f750 ---------A T 03230 IF X>=5 THEN 3370
    0x64eea4f6f9b0 ---------A   03240 IF Y>=4 THEN 3290
    0x64eea4f6fa30 ---------A   03250 GOSUB 5370
    0x64eea4f6fd50 ---------A T 03260 K=X-1
    0x64eea4f70080 ---------A   03270 L=Y+1
    0x64eea4f700f0 ---------A T 03280 GOTO 3490
    0x64eea4f70330 ---------A T 03290 IF Y<>4 THEN 3330
    0x64eea4f70670 ---------A T 03300 K=X-1
    0x64eea4f708a0 ---------A T 03310 L=Y
    0x64eea4f70910 ---------A   03320 GOTO 3490
    0x64eea4f70970 ---------A T 03330 GOSUB 5370
    0x64eea4f70c90 ---------A   03340 K=X-1
    0x64eea4f70fc0 ---------A   03350 L=Y-1
    0x64eea4f71030 ---------A   03360 GOTO 3490
    0x64eea4f71270 ---------A T 03370 IF Y>=4 THEN 3420
    0x64eea4f712f0 ---------A   03380 GOSUB 5370
    0x64eea4f71610 ---------A   03390 K=X+1
    0x64eea4f71940 ---------A   03400 L=Y+1
    0x64eea4f719b0 ---------A   03410 GOTO 3490
    0x64eea4f71bf0 ---------A T 03420 IF Y<>4 THEN 3460
    0x64eea4f71f30 ---------A   03430 K=X+1
    0x64eea4f72160 ---------A T 03440 L=Y
    0x64eea4f721d0 ---------A   03450 GOTO 3490
    0x64eea4f72230 ---------A T 03460 GOSUB 5370
    0x64eea4f72550 ---------A   03470 K=X+1
    0x64eea4f72890 ---------A   03480 L=Y-1
    0x64eea4f72e70 ---------A T 03490 IF MID$(P$(K),L,1)<>"*" THEN 3570
    0x64eea4f73570 ---------A T 03500 K=INT(3*RND(0)-0.99999) + X
    0x64eea4f737c0 ---------A   03510 IF K=0 THEN 3500
    0x64eea4f73a30 ---------A   03520 IF K=8 THEN 3500
    0x64eea4f74130 ---------A T 03530 L=INT(3*RND(0)-0.99999) + Y
    0x64eea4f74380 ---------A   03540 IF L=0 THEN 3530
    0x64eea4f745f0 ---------A   03550 IF L=8 THEN 3530
    0x64eea4f74bd0 ---------A   03560 IF MID$(P$(K),L,1)="*" THEN 3500
    0x64eea4f74e10 ---------A T 03570 X=K
    0x64eea4f75040 ---------A   03580 Y=L
    0x64eea4f750b0 ---------A   03590 GOSUB 4120
    0x64eea4f752d0 ---------A   03600 P9$="*"
    0x64eea4f75500 ---------A   03610 P9=X
    0x64eea4f75730 ---------A   03620 P8=Y
    0x64eea4f757b0 ---------A   03630 GOSUB 5580
    0x64eea4f75af0 ---------A   03640 PRINT "I MOVE ";X;Y
    0x64eea4f75b60 ---------A   03650 GOSUB 3700
    0x64eea4f75bc0 ---------A   03660 PRINT
    0x64eea4f75c30 ---------A   03670 GOSUB 4350
    0x64eea4f75ca0 ---------A   03680 GOTO 2820
    0x64eea4f61880 ---------B   03690 REM PRINT BOARD
    0x64eea4f61910 ---------B G 03700 PRINT
    0x64eea4f61a70 ---------B   03710 PRINT "      SECOND NUMBER"
    0x64eea4f61bc0 ---------B   03720 PRINT "      1 2 3 4 5 6 7"
    0x64eea4f61c30 ---------B   03730 PRINT
    0x64eea4f61f20 ---------B   03740 F1$="FIRST #"
    0x64eea4f622b0 ---------B   03750 FOR I=1 TO 7
    0x64eea4f62660 ---------B   03760     FOR J=1 TO 7
    0x64eea4f628a0 ---------B   03770 	    IF J<>1 GOTO 3790
    0x64eea4f62ff0 ---------B   03780 	    PRINT MID$(F1$,I,1);" ";I;" ";
    0x64eea4f634c0 ---------B T 03790 	    PRINT MID$(P$(I),J,1);
    0x64eea4f63630 ---------B   03800 	    PRINT " ";
    0x64eea4f63760 ---------B   03810     NEXT J
    0x64eea4f63980 ---------B   03820     PRINT CHR$(14)
    0x64eea4f63ab0 ---------B   03830 NEXT I
    0x64eea4f83b90 ---------B   03840 GOTO 03850
    0x64eea4f83bf0 ---------B T 03850 RETURN
    0x64eea4f63ee0 ---------C B 03860 INPUT X(1),Y(1)
    0x64eea4f63f60 ---------C   03870 REM CHECK ADJACENCY
    0x64eea4f642a0 ---------C   03880 IF X(1)<0 THEN 3860
    0x64eea4f645d0 ---------C   03890 IF Y(1)<0 THEN 3860
    0x64eea4f64900 ---------C   03900 IF X(1)=0 THEN 4020
    0x64eea4f64c30 ---------C   03910 IF X(1)>7 THEN 3860
    0x64eea4f64f60 ---------C   03920 IF Y(1)>7 THEN 3860
    0x64eea4f65490 ---------C   03930 IF ABS(X-X(1))>1 THEN 3990
    0x64eea4f659d0 ---------C   03940 IF ABS(Y-Y(1))>1 THEN 3990
    0x64eea4f66130 ---------C   03950 IF MID$(P$(X(1)),Y(1),1)="*" THEN 3860
    0x64eea4f66430 ---------C   03960 X=X(1)
    0x64eea4f66720 ---------C   03970 Y=Y(1)
    0x64eea4f83c50 ---------C   03980 GOTO 04010
    0x64eea4f670f0 ---------C T 03990 PRINT "NOT ADJACENT!"
    0x64eea4f67170 ---------C   04000 GOTO 3860
    0x64eea4f84160 ---------C T 04010 RETURN
    0x64eea4f8ac40 ---------C T 04020 IF B>R  THEN 4050
    0x64eea4f8aca0 ---------C   04030 IF R>B THEN 4070
    0x64eea4f8ad20 ---------C   04040 IF R=B THEN 4090
    0x64eea4f7a940 ---------C T 04050 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x64eea4f8ade0 ---------C   04060 GOTO 4100
    0x64eea4f7e640 ---------C T 04070 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x64eea4f8ae80 ---------C   04080 GOTO 4100
    0x64eea4f7e730 ---------C T 04090 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x64eea4f8af20 ---------C T 04100 GOTO 4110
    0x64eea4f8af80 ---------C T 04110 END
    0x64eea4f67730 ---------D G 04120 IF MID$(P$(X),Y,1)<>"B" THEN 4140
    0x64eea4f67a80 ---------D   04130  B=B+1
    0x64eea4f68050 ---------D T 04140 IF MID$(P$(X),Y,1)<>"R" THEN 4160
    0x64eea4f68390 ---------D   04150 R=R+1
    0x64eea4f685e0 ---------D T 04160 IF B=10 THEN 4200
    0x64eea4f68840 ---------D   04170 IF R=10 THEN 4220
    0x64eea4f841c0 ---------D   04180 GOTO 04190
    0x64eea4f844c0 ---------D T 04190 RETURN
    0x64eea4f7a7d0 ---------D T 04200 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x64eea4f8b0e0 ---------D   04210 GOTO 4240
    0x64eea4f7e410 ---------D T 04220 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x64eea4f8b180 ---------D   04230 GOTO 4240
    0x64eea4f8b1e0 ---------D T 04240 GOTO 4250
    0x64eea4f8b240 ---------D T 04250 END
    0x64eea4f68b20 ---------E T 04260 IF B>R  THEN 4290
    0x64eea4f68da0 ---------E   04270 IF R>B THEN 4310
    0x64eea4f69040 ---------E   04280 IF R=B THEN 4330
    0x64eea4f694a0 ---------E T 04290 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x64eea4f69530 ---------E   04300 GOTO 4340
    0x64eea4f69970 ---------E T 04310 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x64eea4f69a00 ---------E   04320 GOTO 4340
    0x64eea4f69c50 ---------E T 04330 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x64eea4f69cc0 ---------E T 04340 GOTO 4470
    0x64eea4f6a290 ---------E G 04350 FOR G=X-1 TO X+1
    0x64eea4f6a880 ---------E   04360     FOR H=Y-1 TO Y+1
    0x64eea4f6aaf0 ---------E   04370     	IF G=0 THEN 4430
    0x64eea4f6ad60 ---------E   04380     	IF H=0 THEN 4420
    0x64eea4f6afd0 ---------E   04390     	IF G=8 THEN 4430
    0x64eea4f6b250 ---------E   04400     	IF H=8 THEN 4420
    0x64eea4f6b830 ---------E   04410     	IF MID$(P$(G),H,1)<>"*" THEN 4460
    0x64eea4f6b970 ---------E T 04420     NEXT H
    0x64eea4f6bab0 ---------E T 04430 NEXT G
    0x64eea4f6bc10 ---------E   04440 PRINT "GAME OVER"
    0x64eea4f6bc80 ---------E   04450 GOTO 4260
    0x64eea4f84520 ---------E T 04460 GOTO 04480
    0x64eea4f7a640 ---------E T 04470 END
    0x64eea4f84580 ---------E T 04480 RETURN
    0x64eea4f7bf30 ---------F T 04490 PRINT "MOVE: PLAYER B"
    0x64eea4f8b420 ---------F   04500 GOSUB 3860
    0x64eea4f8b480 ---------F   04510 GOSUB 4120
    0x64eea4f7ad40 ---------F   04520 P9$="*"
    0x64eea4f7d330 ---------F   04530 P9=X
    0x64eea4f7dc90 ---------F   04540 P8=Y
    0x64eea4f8b540 ---------F   04550 GOSUB 5580
    0x64eea4f8b5a0 ---------F   04560 GOSUB 4350
    0x64eea4f8b600 ---------F   04570 IF R$="C" THEN 4710
    0x64eea4f8b660 ---------F   04580 GOSUB 3700
    0x64eea4f7e910 ---------F   04590 PRINT
    0x64eea4f7b460 ---------F   04600 PRINT "MOVE: PLAYER A"
    0x64eea4f8b6e0 ---------F   04610 GOSUB 3860
    0x64eea4f8b740 ---------F   04620 GOSUB 4120
    0x64eea4f7c0c0 ---------F   04630 P9$="*"
    0x64eea4f7c250 ---------F   04640 P9=X
    0x64eea4f7bdf0 ---------F   04650 P8=Y
    0x64eea4f8b800 ---------F   04660 GOSUB 5580
    0x64eea4f8b860 ---------F   04670 GOSUB 4350
    0x64eea4f8b8c0 ---------F   04680 GOSUB 3700
    0x64eea4f7ebe0 ---------F   04690 PRINT
    0x64eea4f8b940 ---------F   04700 GOTO 4490
    0x64eea4f8b9a0 ---------F T 04710 IF X=1 THEN 4730
    0x64eea4f8ba20 ---------F   04720 IF X<>7 THEN 4900
    0x64eea4f8baa0 ---------F T 04730 IF Y>=4 THEN 4790
    0x64eea4f7adc0 ---------F   04740 K=X
    0x64eea4f7ea00 ---------F   04750 L=Y+1
    0x64eea4f8bb60 ---------F   04760 IF MID$(P$(K),L,1)<>"*" THEN 4780
    0x64eea4f7eaf0 ---------F   04770 L=Y-1
    0x64eea4f8bbe0 ---------F T 04780 GOTO 5160
    0x64eea4f8bc40 ---------F T 04790 IF Y<>4 THEN 4850
    0x64eea4f7eaa0 ---------F   04800 K=X
    0x64eea4f7b330 ---------F   04810 L=Y-1
    0x64eea4f8bd00 ---------F   04820 IF MID$(P$(K),L,1)<>"*" THEN 4840
    0x64eea4f7c4d0 ---------F   04830 L=Y+1
    0x64eea4f8bd80 ---------F T 04840 GOTO 5160
    0x64eea4f7ed20 ---------F T 04850 K=X
    0x64eea4f7b2c0 ---------F   04860 L=Y-1
    0x64eea4f8be20 ---------F   04870 IF MID$(P$(K),L,1)<>"*" THEN 4890
    0x64eea4f7c340 ---------F   04880 L=Y+1
    0x64eea4f8bea0 ---------F T 04890 GOTO 5160
    0x64eea4f8bf00 ---------F T 04900 IF X>=5 THEN 5040
    0x64eea4f8bf80 ---------F   04910 IF Y>=4 THEN 4960
    0x64eea4f8c000 ---------F   04920 GOSUB 5370
    0x64eea4f7bc80 ---------F   04930 K=X-1
    0x64eea4f7efa0 ---------F   04940 L=Y+1
    0x64eea4f8c0a0 ---------F   04950 GOTO 5160
    0x64eea4f8c100 ---------F T 04960 IF Y<>4 THEN 5000
    0x64eea4f7ec80 ---------F   04970 K=X-1
    0x64eea4f7c520 ---------F   04980 L=Y
    0x64eea4f8c1c0 ---------F   04990 GOTO 5160
    0x64eea4f8c220 ---------F T 05000 GOSUB 5370
    0x64eea4f7b5b0 ---------F   05010 K=X-1
    0x64eea4f7c610 ---------F   05020 L=Y-1
    0x64eea4f8c2c0 ---------F   05030 GOTO 5160
    0x64eea4f8c320 ---------F T 05040 IF Y>=4 THEN 5090
    0x64eea4f8c3a0 ---------F   05050 GOSUB 5370
    0x64eea4f7f0e0 ---------F   05060 K=X+1
    0x64eea4f7f040 ---------F   05070 L=Y+1
    0x64eea4f8c440 ---------F   05080 GOTO 5160
    0x64eea4f8c4a0 ---------F T 05090 IF Y<>4 THEN 5130
    0x64eea4f7f130 ---------F   05100 K=X+1
    0x64eea4f7f270 ---------F   05110 L=Y
    0x64eea4f8c560 ---------F   05120 GOTO 5160
    0x64eea4f8c5c0 ---------F T 05130 GOSUB 5370
    0x64eea4f7f220 ---------F   05140 K=X+1
    0x64eea4f7f180 ---------F   05150 L=Y-1
    0x64eea4f8c660 ---------F T 05160 IF MID$(P$(K),L,1)<>"*" THEN 5240
    0x64eea4f7f1d0 ---------F T 05170 K=INT(3*RND(0)-0.99999) + X
    0x64eea4f8c6c0 ---------F   05180 IF K=0 THEN 5170
    0x64eea4f8c740 ---------F   05190 IF K=8 THEN 5170
    0x64eea4f7b7c0 ---------F T 05200 L=INT(3*RND(0)-0.99999) + Y
    0x64eea4f8c7c0 ---------F   05210 IF L=0 THEN 5200
    0x64eea4f8c840 ---------F   05220 IF L=8 THEN 5200
    0x64eea4f8c8c0 ---------F   05230 IF MID$(P$(K),L,1)="*" THEN 5170
    0x64eea4f7c750 ---------F T 05240 X=K
    0x64eea4f7f400 ---------F   05250 Y=L
    0x64eea4f8c960 ---------F   05260 GOSUB 4120
    0x64eea4f7f590 ---------F   05270 P9$="*"
    0x64eea4f7d740 ---------F   05280 P9=X
    0x64eea4f7f450 ---------F   05290 P8=Y
    0x64eea4f8ca20 ---------F   05300 GOSUB 5580
    0x64eea4f7f5e0 ---------F   05310 PRINT "I MOVE ";X;Y
    0x64eea4f8ca80 ---------F   05320 GOSUB 3700
    0x64eea4f7bb60 ---------F   05330 PRINT
    0x64eea4f8cb00 ---------F   05340 GOSUB 4350
    0x64eea4f8cb60 ---------F   05350 GOTO 4490
    0x64eea4f75d00 ---------F   05360 REM GRAB CORNER PEG
    0x64eea4f76000 ---------F G 05370 X(2)=X
    0x64eea4f76300 ---------F   05380 Y(2)=Y
    0x64eea4f76a60 ---------F   05390 FOR M=X(2)-1 TO X(2)+1
    0x64eea4f771d0 ---------F   05400     FOR N=Y(2)-1 TO Y(2)+1
    0x64eea4f77440 ---------F   05410     	IF M=0 THEN 5540
    0x64eea4f776b0 ---------F   05420     	IF N=0 THEN 5530
    0x64eea4f77920 ---------F   05430     	IF M=8 THEN 5540
    0x64eea4f77b90 ---------F   05440     	IF N=8 THEN 5530
    0x64eea4f77e00 ---------F   05450     	IF M=1 THEN 5470
    0x64eea4f78070 ---------F   05460     	IF M<>7 THEN 5540
    0x64eea4f782e0 ---------F T 05470     	IF N=1 THEN 5490
    0x64eea4f78560 ---------F   05480     	IF N<>7 THEN 5530
    0x64eea4f78b40 ---------F T 05490     	IF MID$(P$(M),N,1)="*" THEN 5550
    0x64eea4f78d80 ---------F   05500     	K=M
    0x64eea4f78fb0 ---------F   05510     	L=N
    0x64eea4f79020 ---------F   05520     	GOTO 5240
    0x64eea4f79140 ---------F T 05530     NEXT N
    0x64eea4f79280 ---------F T 05540 NEXT M
    0x64eea4f82340 ---------F T 05550 GOTO 05560
    0x64eea4f823a0 ---------F T 05560 RETURN
    0x64eea4f793c0 ---------G   05570 REM SUBROUTINE TO INSERT A CHARATER IN A CHARATER STRING
    0x64eea4f796b0 ---------G G 05580 DIM P7(10)
    0x64eea4f79990 ---------G   05590 CHANGE P$(P9) TO P7
    0x64eea4f79c80 ---------G   05600 DIM P6(10)
    0x64eea4f79e80 ---------G   05610 CHANGE P9$ TO P6
    0x64eea4f7a280 ---------G   05620 P7(P8) = P6(1)
    0x64eea4f7a570 ---------G   05630 CHANGE P7 TO P$(P9)
    0x64eea4f82400 ---------G   05640 GOTO 05650
    0x64eea4f82460 ---------G T 05650 RETURN
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
        // 03760     FOR J=1 TO 7
        for(J_int=1;J_int<=7;J_int++){
            // 03770 	    IF J<>1 GOTO 3790
            if(J_int!=1)goto Lbl_03790;
            // 03780 	    PRINT MID$(F1$,I,1);" ";I;" ";
