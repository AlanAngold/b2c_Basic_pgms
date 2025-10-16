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
    0x62a7970facf0 ---------A   01000 RANDOMIZE
    0x62a7970e9550 ---------A   01010 REM *** PRESS UPS ***
    0x62a7970e9590 ---------A   01020 REM *** RON BEHRNS ***
    0x62a7970e95d0 ---------A   01030 REM *** 1979 ***
    0x62a7970f9ac0 ---------A   01040 B=0
    0x62a7970fadb0 ---------A   01050 R=0
    0x62a7970faf30 ---------A   01060 PRINT "THIS IS THE GAME OF PRESS UPS"
    0x62a7970faff0 ---------A   01070 PRINT "INSTRUCTIONS (Y OR N) ";
    0x62a7970f8610 ---------A   01080 INPUT I$
    0x62a7970f85b0 ---------A   01090 IF I$<>"Y" THEN 1270
    0x62a7970fb040 ---------A   01100 PRINT "TWO MAY PLAY -- THE COMPUTER IS YOUR REFEREE"
    0x62a7970fb150 ---------A   01110 PRINT "OR YOU MAY PLAY AGAINST THE COMPUTER"
    0x62a7970f95b0 ---------A   01120 PRINT
    0x62a7970f9760 ---------A   01130 PRINT "ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL"
    0x62a7971008f0 ---------A   01140 PRINT "A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID"
    0x62a797100a80 ---------A   01150 PRINT "THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS"
    0x62a797100c20 ---------A   01160 PRINT "YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS"
    0x62a797100dc0 ---------A   01170 PRINT "IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST"
    0x62a797100f20 ---------A   01180 PRINT "ONE PRESSED, THE GAME IS OVER."
    0x62a7971010d0 ---------A   01190 PRINT "THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS"
    0x62a797101230 ---------A   01200 PRINT "END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE "
    0x62a797101360 ---------A   01210 PRINT "X-COORDINATE"
    0x62a797101410 ---------A   01220 PRINT
    0x62a7971015d0 ---------A   01230 PRINT "DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST"
    0x62a797101790 ---------A   01240 PRINT "THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)"
    0x62a7971018f0 ---------A   01250 PRINT "NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING"
    0x62a797101a40 ---------A   01260 PRINT "DIAGONALLY)."
    0x62a797101ad0 ---------A T 01270 PRINT
    0x62a797101c20 ---------A   01280 PRINT "PLAY WITH PARTNER(P) OR COMPUTER(C) ";
    0x62a797101e10 ---------A   01290 INPUT R$
    0x62a797102090 ---------A   01300 IF R$="C" THEN 1320
    0x62a797102140 ---------A   01310 GOTO 1350
    0x62a797102280 ---------A T 01320 PRINT "COMPUTER HAS BLUE PEGS--OPPONENT IS PLAYER B"
    0x62a7971025e0 ---------A   01330 PRINT "COMPUTER FIRST(Y OR N) ";
    0x62a7971027f0 ---------A   01340 INPUT F$
    0x62a797102880 ---------A T 01350 PRINT
    0x62a7971029e0 ---------A   01360 PRINT "READY... HERE IS THE BOARD"
    0x62a797102a50 ---------A   01370 PRINT
    0x62a797102ac0 ---------A   01380 PRINT
    0x62a797102d90 ---------A   01390 DIM P$(7)
    0x62a797103070 ---------A   01400 P$(1)="YBBBBBY"
    0x62a797103360 ---------A   01410 P$(2)="RYYYYYR"
    0x62a797103650 ---------A   01420 P$(3)="RYYYYYR"
    0x62a797103940 ---------A   01430 P$(4)="RYYYYYR"
    0x62a797103c30 ---------A   01440 P$(5)="RYYYYYR"
    0x62a797103f20 ---------A   01450 P$(6)="RYYYYYR"
    0x62a797104210 ---------A   01460 P$(7)="YBBBBBY"
    0x62a797104280 ---------A   01470 GOSUB 2000
    0x62a7971042f0 ---------A   01480 PRINT
    0x62a797104570 ---------A   01490 IF R$="C" THEN 1650
    0x62a7971046d0 ---------A   01500 PRINT "MOVE:PLAYER A"
    0x62a797104a80 ---------A T 01510 INPUT X,Y
    0x62a797104ce0 ---------A   01520 IF X>7 THEN 1510
    0x62a797104f50 ---------A   01530 IF Y>7 THEN 1510
    0x62a797105550 ---------A   01540 IF MID$(P$(X),Y,1)="Y" THEN 1570
    0x62a7971056c0 ---------A   01550 PRINT "ILLEGAL MOVE...PRESS A YELLOW PEG!! "
    0x62a797105730 ---------A   01560 GOTO 1510
    0x62a797105a10 ---------A T 01570 P9$="*"
    0x62a797105d00 ---------A   01580 P9=X
    0x62a797105ff0 ---------A   01590 P8=Y
    0x62a797106060 ---------A   01600 GOSUB 3450
    0x62a7971060c0 ---------A   01610 GOSUB 2000
    0x62a797106130 ---------A   01620 PRINT
    0x62a7971063a0 ---------A   01630 IF R$="C" THEN 2600
    0x62a797106430 ---------A   01640 GO TO 1780
    0x62a797106ab0 ---------A T 01650 IF F$<>"Y" THEN 1760
    0x62a797107090 ---------A   01660 X=INT(3*RND(0) + 3)
    0x62a7971072b0 ---------A   01670 Y=4
    0x62a797107600 ---------A   01680 PRINT "I MOVE ";X;Y
    0x62a797107830 ---------A   01690 P9$="*"
    0x62a797107a60 ---------A   01700 P9=X
    0x62a797107c90 ---------A   01710 P8=Y
    0x62a797107d00 ---------A   01720 GOSUB 3450
    0x62a797107d60 ---------A   01730 GOSUB 2000
    0x62a797107dc0 ---------A   01740 PRINT
    0x62a797107e40 ---------A   01750 GOTO 1780
    0x62a797107f80 ---------A T 01760 PRINT "MOVE; PLAYER B"
    0x62a797108000 ---------A   01770 GOTO1510
    0x62a797108140 --------FA T 01780 PRINT "MOVE: PLAYER B"
    0x62a7971081b0 --------FA   01790 GOSUB 2160
    0x62a797108210 --------FA   01800 GOSUB 2310
    0x62a797108430 --------FA   01810 P9$="*"
    0x62a797108660 --------FA   01820 P9=X
    0x62a797108890 --------FA   01830 P8=Y
    0x62a797108900 --------FA   01840 GOSUB 3450
    0x62a797108970 --------FA   01850 GOSUB 2470
    0x62a797108bd0 --------FA   01860 IF R$="C" THEN 2600
    0x62a797108c50 --------FA   01870 GOSUB 2000
    0x62a797108cc0 --------FA   01880 PRINT
    0x62a797108e10 --------FA   01890 PRINT "MOVE: PLAYER A"
    0x62a797108e80 --------FA   01900 GOSUB 2160
    0x62a797108ee0 --------FA   01910 GOSUB 2310
    0x62a797109100 --------FA   01920 P9$="*"
    0x62a797109330 --------FA   01930 P9=X
    0x62a797109560 --------FA   01940 P8=Y
    0x62a7971095d0 --------FA   01950 GOSUB 3450
    0x62a797109630 --------FA   01960 GOSUB 2470
    0x62a797109690 --------FA   01970 GOSUB 2000
    0x62a7971096f0 --------FA   01980 PRINT
    0x62a797109760 --------FA   01990 GOTO 1780
    0x62a7971097c0 ---------B G 02000 REM PRINT BOARD
    0x62a797109850 ---------B   02010 PRINT
    0x62a7971099b0 ---------B   02020 PRINT "      SECOND NUMBER"
    0x62a797109b00 ---------B   02030 PRINT "      1 2 3 4 5 6 7"
    0x62a797109b70 ---------B   02040 PRINT
    0x62a797109e60 ---------B   02050 F1$="FIRST #"
    0x62a79710a1f0 ---------B   02060 FOR I=1 TO 7
    0x62a79710a5a0 ---------B   02070     FOR J=1 TO 7
    0x62a79710a7e0 ---------B   02080 	    IF J<>1 GOTO 2100
    0x62a79710af30 ---------B   02090 	    PRINT MID$(F1$,I,1);" ";I;" ";
    0x62a79710b400 ---------B T 02100 	    PRINT MID$(P$(I),J,1);
    0x62a79710b570 ---------B   02110 	    PRINT " ";
    0x62a79710b6a0 ---------B   02120     NEXT J
    0x62a79710b8c0 ---------B   02130     PRINT CHR$(14)
    0x62a79710b9f0 ---------B   02140 NEXT I
    0x62a79710ba50 ---------B   02150 RETURN
    0x62a79710be20 ---------C B 02160 INPUT X(1),Y(1)
    0x62a79710bea0 ---------C   02170 REM CHECK ADJACENCY
    0x62a79710c1e0 ---------C   02180 IF X(1)<0 THEN 2160
    0x62a79710c510 ---------C   02190 IF Y(1)<0 THEN 2160
    0x62a79710c840 ---------C   02200 IF X(1)=0 THEN 2380
    0x62a79710cb70 ---------C   02210 IF X(1)>7 THEN 2160
    0x62a79710cea0 ---------C   02220 IF Y(1)>7 THEN 2160
    0x62a79710d3d0 ---------C   02230 IF ABS(X-X(1))>1 THEN 2290
    0x62a79710d910 ---------C   02240 IF ABS(Y-Y(1))>1 THEN 2290
    0x62a79710e070 ---------C   02250 IF MID$(P$(X(1)),Y(1),1)="*" THEN 2160
    0x62a79710e370 ---------C   02260 X=X(1)
    0x62a79710e660 ---------C   02270 Y=Y(1)
    0x62a79710e6b0 ---------C   02280 RETURN
    0x62a79710f030 ---------C T 02290 PRINT "NOT ADJACENT!"
    0x62a79710f0b0 ---------C   02300 GOTO 2160
    0x62a79710f670 ---------D G 02310 IF MID$(P$(X),Y,1)<>"B" THEN 2330
    0x62a79710f9c0 ---------D   02320  B=B+1
    0x62a79710ff90 ---------D T 02330 IF MID$(P$(X),Y,1)<>"R" THEN 2350
    0x62a7971102d0 ---------D   02340 R=R+1
    0x62a797110520 ---------D T 02350 IF B=10 THEN 2410
    0x62a797110780 ---------D   02360 IF R=10 THEN 2430
    0x62a7971107e0 ---------D   02370 RETURN
    0x62a797110a60 --------EC T 02380 IF B>R  THEN 2410
    0x62a797110ce0 --------EC   02390 IF R>B THEN 2430
    0x62a797110f80 --------EC   02400 IF R=B THEN 2450
    0x62a7971113e0 -------EDC T 02410 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x62a797111470 -------EDC   02420 GOTO 2460
    0x62a7971118b0 -------EDC T 02430 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x62a797111940 -------EDC   02440 GOTO 2460
    0x62a797111b90 --------EC T 02450 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x62a797111c00 -------EDC T 02460 GOTO 3530
    0x62a7971121d0 ---------E G 02470 FOR G=X-1 TO X+1
    0x62a7971127c0 ---------E   02480     FOR H=Y-1 TO Y+1
    0x62a797112a30 ---------E   02490     	IF G=0 THEN 2550
    0x62a797112ca0 ---------E   02500     	IF H=0 THEN 2540
    0x62a797112f10 ---------E   02510     	IF G=8 THEN 2550
    0x62a797113190 ---------E   02520     	IF H=8 THEN 2540
    0x62a797113770 ---------E   02530     	IF MID$(P$(G),H,1)<>"*" THEN 2580
    0x62a7971138b0 ---------E T 02540     NEXT H
    0x62a7971139f0 ---------E T 02550 NEXT G
    0x62a797113b50 ---------E   02560 PRINT "GAME OVER"
    0x62a797113bc0 ---------E   02570 GOTO 2380
    0x62a797113c00 ---------E T 02580 RETURN
    0x62a797113c90 ---------A   02590 REM COMPUTER'S MOVE
    0x62a797113ef0 --------FA T 02600 IF X=1 THEN 2620
    0x62a797114150 --------FA   02610 IF X<>7 THEN 2790
    0x62a7971143b0 --------FA T 02620 IF Y>=4 THEN 2680
    0x62a7971146b0 --------FA   02630 K=X
    0x62a797114ab0 --------FA   02640 L=Y+1
    0x62a797115080 --------FA   02650 IF MID$(P$(K),L,1)<>"*" THEN 2670
    0x62a7971153c0 --------FA   02660 L=Y-1
    0x62a797115430 --------FA T 02670 GOTO 3050
    0x62a797115670 --------FA T 02680 IF Y<>4 THEN 2740
    0x62a7971158b0 --------FA   02690 K=X
    0x62a797115bf0 --------FA   02700 L=Y-1
    0x62a7971161c0 --------FA   02710 IF MID$(P$(K),L,1)<>"*" THEN 2730
    0x62a797116500 --------FA   02720 L=Y+1
    0x62a797116570 --------FA T 02730 GOTO 3050
    0x62a797116790 --------FA T 02740 K=X
    0x62a797116ad0 --------FA   02750 L=Y-1
    0x62a7971170a0 --------FA   02760 IF MID$(P$(K),L,1)<>"*" THEN 2780
    0x62a7971173e0 --------FA   02770 L=Y+1
    0x62a797117450 --------FA T 02780 GOTO 3050
    0x62a797117690 --------FA T 02790 IF X>=5 THEN 2930
    0x62a7971178f0 --------FA   02800 IF Y>=4 THEN 2850
    0x62a797117970 --------FA   02810 GOSUB 3260
    0x62a797117c90 --------FA   02820 K=X-1
    0x62a797117fc0 --------FA   02830 L=Y+1
    0x62a797118030 --------FA   02840 GOTO 3050
    0x62a797118270 --------FA T 02850 IF Y<>4 THEN 2890
    0x62a7971185b0 --------FA   02860 K=X-1
    0x62a7971187e0 --------FA   02870 L=Y
    0x62a797118850 --------FA   02880 GOTO 3050
    0x62a7971188b0 --------FA T 02890 GOSUB 3260
    0x62a797118bd0 --------FA   02900 K=X-1
    0x62a797118f00 --------FA   02910 L=Y-1
    0x62a797118f70 --------FA   02920 GOTO 3050
    0x62a7971191b0 --------FA T 02930 IF Y>=4 THEN 2980
    0x62a797119230 --------FA   02940 GOSUB 3260
    0x62a797119550 --------FA   02950 K=X+1
    0x62a797119880 --------FA   02960 L=Y+1
    0x62a7971198f0 --------FA   02970 GOTO 3050
    0x62a797119b30 --------FA T 02980 IF Y<>4 THEN 3020
    0x62a797119e70 --------FA   02990 K=X+1
    0x62a79711a0a0 --------FA   03000 L=Y
    0x62a79711a110 --------FA   03010 GOTO 3050
    0x62a79711a170 --------FA T 03020 GOSUB 3260
    0x62a79711a490 --------FA   03030 K=X+1
    0x62a79711a7d0 --------FA   03040 L=Y-1
    0x62a79711adb0 --------FA T 03050 IF MID$(P$(K),L,1)<>"*" THEN 3130
    0x62a79711b4b0 --------FA T 03060 K=INT(3*RND(0)-0.99999) + X
    0x62a79711b700 --------FA   03070 IF K=0 THEN 3060
    0x62a79711b970 --------FA   03080 IF K=8 THEN 3060
    0x62a79711c070 --------FA T 03090 L=INT(3*RND(0)-0.99999) + Y
    0x62a79711c2c0 --------FA   03100 IF L=0 THEN 3090
    0x62a79711c530 --------FA   03110 IF L=8 THEN 3090
    0x62a79711cb10 --------FA   03120 IF MID$(P$(K),L,1)="*" THEN 3060
    0x62a79711cd50 --------FA T 03130 X=K
    0x62a79711cf80 --------FA   03140 Y=L
    0x62a79711cff0 --------FA   03150 GOSUB 2310
    0x62a79711d210 --------FA   03160 P9$="*"
    0x62a79711d440 --------FA   03170 P9=X
    0x62a79711d670 --------FA   03180 P8=Y
    0x62a79711d6f0 --------FA   03190 GOSUB 3450
    0x62a79711da30 --------FA   03200 PRINT "I MOVE ";X;Y
    0x62a79711daa0 --------FA   03210 GOSUB 2000
    0x62a79711db00 --------FA   03220 PRINT
    0x62a79711db70 --------FA   03230 GOSUB 2470
    0x62a79711dbe0 --------FA   03240 GOTO 1780
    0x62a79711dc40 ---------F   03250 REM GRAB CORNER PEG
    0x62a79711df40 ---------F G 03260 X(2)=X
    0x62a79711e240 ---------F   03270 Y(2)=Y
    0x62a79711e9a0 ---------F   03280 FOR M=X(2)-1 TO X(2)+1
    0x62a79711f110 ---------F   03290     FOR N=Y(2)-1 TO Y(2)+1
    0x62a79711f380 ---------F   03300     	IF M=0 THEN 3430
    0x62a79711f5f0 ---------F   03310     	IF N=0 THEN 3420
    0x62a79711f860 ---------F   03320     	IF M=8 THEN 3430
    0x62a79711fad0 ---------F   03330     	IF N=8 THEN 3420
    0x62a79711fd40 ---------F   03340     	IF M=1 THEN 3360
    0x62a79711ffb0 ---------F   03350     	IF M<>7 THEN 3430
    0x62a797120220 ---------F T 03360     	IF N=1 THEN 3380
    0x62a7971204a0 ---------F   03370     	IF N<>7 THEN 3420
    0x62a797120a80 ---------F T 03380     	IF MID$(P$(M),N,1)="*" THEN 3440
    0x62a797120cc0 ---------F   03390     	K=M
    0x62a797120ef0 ---------F   03400     	L=N
    0x62a797120f60 ---------F   03410     	GOTO 3130
    0x62a797121080 ---------F T 03420     NEXT N
    0x62a7971211c0 ---------F T 03430 NEXT M
    0x62a797121220 ---------F T 03440 RETURN
    0x62a797121300 ---------G G 03450 REM SUBROUTINE TO INSERT A CHARATER IN A CHARATER STRING
    0x62a7971215f0 ---------G   03460 DIM P7(10)
    0x62a7971218d0 ---------G   03470 CHANGE P$(P9) TO P7
    0x62a797121bc0 ---------G   03480 DIM P6(10)
    0x62a797121dc0 ---------G   03490 CHANGE P9$ TO P6
    0x62a7971221c0 ---------G   03500 P7(P8) = P6(1)
    0x62a7971224b0 ---------G   03510 CHANGE P7 TO P$(P9)
    0x62a797122520 ---------G   03520 RETURN
    0x62a797122580 -------EDC T 03530 END
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
   A) 0x62a7970facf0 (01000)   0x000000000000 (00000)   0x62a797122580 (03530)   0x62a79711dbe0 (03240)   
   B) 0x62a7971097c0 (02000)   0x62a7971097c0 (02000)   0x62a79710ba50 (02150)   0x62a79710ba50 (02150)   
   C) 0x62a79710be20 (02160)   0x62a79710be20 (02160)   0x62a79710e6b0 (02280)   0x62a797122580 (03530)   
   D) 0x62a79710f670 (02310)   0x62a79710f670 (02310)   0x62a7971107e0 (02370)   0x62a797122580 (03530)   
   E) 0x62a797110a60 (02380)   0x62a7971121d0 (02470)   0x62a797113c00 (02580)   0x62a797122580 (03530)   
   F) 0x62a797108140 (01780)   0x62a79711df40 (03260)   0x62a797121220 (03440)   0x62a797121220 (03440)   
   G) 0x62a797121300 (03450)   0x62a797121300 (03450)   0x62a797122520 (03520)   0x62a797122520 (03520)   

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
    B                        Float       
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
    G                        Float       
    H                        Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    I$                       String      
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    K                        Float       
    L                        Float       
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Float       
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Float       
    OCT$            Function String          args=1, float  
    P$              Array    String          {0,6} 
    P6              Array    Float           {0,9} 
    P7              Array    Float           {0,9} 
    P8                       Float       
    P9                       Float       
    P9$                      String      
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Float       
    R$                       String      
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    Y                        Float       

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
    0x62a7970facf0 ---------A   01000 RANDOMIZE
    0x62a7970e9550 ---------A   01010 REM *** PRESS UPS ***
    0x62a7970e9590 ---------A   01020 REM *** RON BEHRNS ***
    0x62a7970e95d0 ---------A   01030 REM *** 1979 ***
    0x62a7970f9ac0 ---------A   01040 B=0
    0x62a7970fadb0 ---------A   01050 R=0
    0x62a7970faf30 ---------A   01060 PRINT "THIS IS THE GAME OF PRESS UPS"
    0x62a7970faff0 ---------A   01070 PRINT "INSTRUCTIONS (Y OR N) ";
    0x62a7970f8610 ---------A   01080 INPUT I$
    0x62a7970f85b0 ---------A   01090 IF I$<>"Y" THEN 1270
    0x62a7970fb040 ---------A   01100 PRINT "TWO MAY PLAY -- THE COMPUTER IS YOUR REFEREE"
    0x62a7970fb150 ---------A   01110 PRINT "OR YOU MAY PLAY AGAINST THE COMPUTER"
    0x62a7970f95b0 ---------A   01120 PRINT
    0x62a7970f9760 ---------A   01130 PRINT "ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL"
    0x62a7971008f0 ---------A   01140 PRINT "A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID"
    0x62a797100a80 ---------A   01150 PRINT "THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS"
    0x62a797100c20 ---------A   01160 PRINT "YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS"
    0x62a797100dc0 ---------A   01170 PRINT "IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST"
    0x62a797100f20 ---------A   01180 PRINT "ONE PRESSED, THE GAME IS OVER."
    0x62a7971010d0 ---------A   01190 PRINT "THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS"
    0x62a797101230 ---------A   01200 PRINT "END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE "
    0x62a797101360 ---------A   01210 PRINT "X-COORDINATE"
    0x62a797101410 ---------A   01220 PRINT
    0x62a7971015d0 ---------A   01230 PRINT "DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST"
    0x62a797101790 ---------A   01240 PRINT "THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)"
    0x62a7971018f0 ---------A   01250 PRINT "NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING"
    0x62a797101a40 ---------A   01260 PRINT "DIAGONALLY)."
    0x62a797101ad0 ---------A T 01270 PRINT
    0x62a797101c20 ---------A   01280 PRINT "PLAY WITH PARTNER(P) OR COMPUTER(C) ";
    0x62a797101e10 ---------A   01290 INPUT R$
    0x62a797102090 ---------A   01300 IF R$="C" THEN 1320
    0x62a797102140 ---------A   01310 GOTO 1350
    0x62a797102280 ---------A T 01320 PRINT "COMPUTER HAS BLUE PEGS--OPPONENT IS PLAYER B"
    0x62a7971025e0 ---------A   01330 PRINT "COMPUTER FIRST(Y OR N) ";
    0x62a7971027f0 ---------A   01340 INPUT F$
    0x62a797102880 ---------A T 01350 PRINT
    0x62a7971029e0 ---------A   01360 PRINT "READY... HERE IS THE BOARD"
    0x62a797102a50 ---------A   01370 PRINT
    0x62a797102ac0 ---------A   01380 PRINT
    0x62a797102d90 ---------A   01390 DIM P$(7)
    0x62a797103070 ---------A   01400 P$(1)="YBBBBBY"
    0x62a797103360 ---------A   01410 P$(2)="RYYYYYR"
    0x62a797103650 ---------A   01420 P$(3)="RYYYYYR"
    0x62a797103940 ---------A   01430 P$(4)="RYYYYYR"
    0x62a797103c30 ---------A   01440 P$(5)="RYYYYYR"
    0x62a797103f20 ---------A   01450 P$(6)="RYYYYYR"
    0x62a797104210 ---------A   01460 P$(7)="YBBBBBY"
    0x62a797104280 ---------A   01470 GOSUB 3700
    0x62a7971042f0 ---------A   01480 PRINT
    0x62a797104570 ---------A   01490 IF R$="C" THEN 1650
    0x62a7971046d0 ---------A   01500 PRINT "MOVE:PLAYER A"
    0x62a797104a80 ---------A T 01510 INPUT X,Y
    0x62a797104ce0 ---------A   01520 IF X>7 THEN 1510
    0x62a797104f50 ---------A   01530 IF Y>7 THEN 1510
    0x62a797105550 ---------A   01540 IF MID$(P$(X),Y,1)="Y" THEN 1570
    0x62a7971056c0 ---------A   01550 PRINT "ILLEGAL MOVE...PRESS A YELLOW PEG!! "
    0x62a797105730 ---------A   01560 GOTO 1510
    0x62a797105a10 ---------A T 01570 P9$="*"
    0x62a797105d00 ---------A   01580 P9=X
    0x62a797105ff0 ---------A   01590 P8=Y
    0x62a797106060 ---------A   01600 GOSUB 5580
    0x62a7971060c0 ---------A   01610 GOSUB 3700
    0x62a797106130 ---------A   01620 PRINT
    0x62a7971063a0 ---------A   01630 IF R$="C" THEN 3040
    0x62a797106430 ---------A   01640 GO TO 2820
    0x62a797106ab0 ---------A T 01650 IF F$<>"Y" THEN 1760
    0x62a797107090 ---------A   01660 X=INT(3*RND(0) + 3)
    0x62a7971072b0 ---------A   01670 Y=4
    0x62a797107600 ---------A   01680 PRINT "I MOVE ";X;Y
    0x62a797107830 ---------A   01690 P9$="*"
    0x62a797107a60 ---------A   01700 P9=X
    0x62a797107c90 ---------A   01710 P8=Y
    0x62a797107d00 ---------A   01720 GOSUB 5580
    0x62a797107d60 ---------A   01730 GOSUB 3700
    0x62a797107dc0 ---------A   01740 PRINT
    0x62a797107e40 ---------A   01750 GOTO 2820
    0x62a797107f80 ---------A T 01760 PRINT "MOVE; PLAYER B"
    0x62a797108000 ---------A   01770 GOTO1510
    0x62a797128d00 ----------   01780 PRINT "MOVE: PLAYER B"
    0x62a797128d50 ----------   01790 GOSUB 3860
    0x62a797128d90 ----------   01800 GOSUB 4120
    0x62a797128dd0 ----------   01810 P9$="*"
    0x62a797128e40 ----------   01820 P9=X
    0x62a797128eb0 ----------   01830 P8=Y
    0x62a797128f20 ----------   01840 GOSUB 5580
    0x62a797128f80 ----------   01850 GOSUB 4350
    0x62a797128fe0 ----------   01860 IF R$="C" THEN 3040
    0x62a797129070 ----------   01870 GOSUB 3700
    0x62a7971290d0 ----------   01880 PRINT
    0x62a797129140 ----------   01890 PRINT "MOVE: PLAYER A"
    0x62a7971291c0 ----------   01900 GOSUB 3860
    0x62a797129220 ----------   01910 GOSUB 4120
    0x62a797129280 ----------   01920 P9$="*"
    0x62a7971292f0 ----------   01930 P9=X
    0x62a797129360 ----------   01940 P8=Y
    0x62a7971293d0 ----------   01950 GOSUB 5580
    0x62a797129430 ----------   01960 GOSUB 4350
    0x62a797129490 ----------   01970 GOSUB 3700
    0x62a7971294f0 ----------   01980 PRINT
    0x62a797129560 ----------   01990 GOTO 2820
    0x62a797113c90 ---------A   02000 REM COMPUTER'S MOVE
    0x62a7971295c0 ----------   02010 IF X=1 THEN 3060
    0x62a797129640 ----------   02020 IF X<>7 THEN 3230
    0x62a7971296c0 ----------   02030 IF Y>=4 THEN 3120
    0x62a797129740 ----------   02040 K=X
    0x62a7971297b0 ----------   02050 L=Y+1
    0x62a797129820 ----------   02060 IF MID$(P$(K),L,1)<>"*" THEN 3110
    0x62a7971298b0 ----------   02070 L=Y-1
    0x62a797129920 ----------   02080 GOTO 3490
    0x62a797129980 ----------   02090 IF Y<>4 THEN 3180
    0x62a797129a00 ----------   02100 K=X
    0x62a797129a70 ----------   02110 L=Y-1
    0x62a797129ae0 ----------   02120 IF MID$(P$(K),L,1)<>"*" THEN 3170
    0x62a797129b70 ----------   02130 L=Y+1
    0x62a797129be0 ----------   02140 GOTO 3490
    0x62a797129c40 ----------   02150 K=X
    0x62a797129cb0 ----------   02160 L=Y-1
    0x62a797129d20 ----------   02170 IF MID$(P$(K),L,1)<>"*" THEN 3220
    0x62a797129db0 ----------   02180 L=Y+1
    0x62a797129e20 ----------   02190 GOTO 3490
    0x62a797129e80 ----------   02200 IF X>=5 THEN 3370
    0x62a797129f00 ----------   02210 IF Y>=4 THEN 3290
    0x62a797129f80 ----------   02220 GOSUB 5370
    0x62a797129fe0 ----------   02230 K=X-1
    0x62a79712a050 ----------   02240 L=Y+1
    0x62a79712a0c0 ----------   02250 GOTO 3490
    0x62a79712a120 ----------   02260 IF Y<>4 THEN 3330
    0x62a79712a1a0 ----------   02270 K=X-1
    0x62a79712a210 ----------   02280 L=Y
    0x62a79712aa90 ----------   02290 GOTO 3490
    0x62a79712aaf0 ----------   02300 GOSUB 5370
    0x62a79712ab50 ----------   02310 K=X-1
    0x62a79712abc0 ----------   02320 L=Y-1
    0x62a79712ac30 ----------   02330 GOTO 3490
    0x62a79712ac90 ----------   02340 IF Y>=4 THEN 3420
    0x62a79712ad10 ----------   02350 GOSUB 5370
    0x62a79712ad70 ----------   02360 K=X+1
    0x62a79712ade0 ----------   02370 L=Y+1
    0x62a79712ae50 ----------   02380 GOTO 3490
    0x62a79712aeb0 ----------   02390 IF Y<>4 THEN 3460
    0x62a79712af30 ----------   02400 K=X+1
    0x62a79712afa0 ----------   02410 L=Y
    0x62a79712b010 ----------   02420 GOTO 3490
    0x62a79712b070 ----------   02430 GOSUB 5370
    0x62a79712b0d0 ----------   02440 K=X+1
    0x62a79712b140 ----------   02450 L=Y-1
    0x62a79712b1b0 ----------   02460 IF MID$(P$(K),L,1)<>"*" THEN 3570
    0x62a79712b240 ----------   02470 K=INT(3*RND(0)-0.99999) + X
    0x62a79712b2c0 ----------   02480 IF K=0 THEN 3500
    0x62a79712b340 ----------   02490 IF K=8 THEN 3500
    0x62a79712b3c0 ----------   02500 L=INT(3*RND(0)-0.99999) + Y
    0x62a79712b440 ----------   02510 IF L=0 THEN 3530
    0x62a79712b4c0 ----------   02520 IF L=8 THEN 3530
    0x62a79712b540 ----------   02530 IF MID$(P$(K),L,1)="*" THEN 3500
    0x62a79712b5d0 ----------   02540 X=K
    0x62a79712b640 ----------   02550 Y=L
    0x62a79712b6b0 ----------   02560 GOSUB 4120
    0x62a79712b710 ----------   02570 P9$="*"
    0x62a79712b780 ----------   02580 P9=X
    0x62a79712b7f0 ----------   02590 P8=Y
    0x62a79712b860 ----------   02600 GOSUB 5580
    0x62a79712b8c0 ----------   02610 PRINT "I MOVE ";X;Y
    0x62a79712b940 ----------   02620 GOSUB 3700
    0x62a79712b9a0 ----------   02630 PRINT
    0x62a79712ba10 ----------   02640 GOSUB 4350
    0x62a79712ba70 ----------   02650 GOTO 2820
    0x62a79712bbf0 ----------   02660 IF B>R  THEN 3260
    0x62a79712bc70 ----------   02670 IF R>B THEN 3280
    0x62a79712bcf0 ----------   02680 IF R=B THEN 3300
    0x62a79712bd70 ----------   02690 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x62a79712be00 ----------   02700 GOTO 3310
    0x62a79712be60 ----------   02710 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x62a79712bef0 ----------   02720 GOTO 3310
    0x62a79712bf50 ----------   02730 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x62a79712bfe0 ----------   02740 GOTO 3440
    0x62a79712c040 ---------A   02750 END
    0x62a79712c160 ----------   02760 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x62a79712c1f0 ----------   02770 GOTO 3310
    0x62a79712c250 ----------   02780 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x62a79712c2e0 ----------   02790 GOTO 3310
    0x62a79712c340 ----------   02800 GOTO 3440
    0x62a79712c3a0 ---------A   02810 END
    0x62a797108140 ---------A T 02820 PRINT "MOVE: PLAYER B"
    0x62a7971081b0 ---------A   02830 GOSUB 3860
    0x62a797108210 ---------A   02840 GOSUB 4120
    0x62a797108430 ---------A   02850 P9$="*"
    0x62a797108660 ---------A   02860 P9=X
    0x62a797108890 ---------A   02870 P8=Y
    0x62a797108900 ---------A   02880 GOSUB 5580
    0x62a797108970 ---------A   02890 GOSUB 4350
    0x62a797108bd0 ---------A   02900 IF R$="C" THEN 3040
    0x62a797108c50 ---------A   02910 GOSUB 3700
    0x62a797108cc0 ---------A   02920 PRINT
    0x62a797108e10 ---------A   02930 PRINT "MOVE: PLAYER A"
    0x62a797108e80 ---------A   02940 GOSUB 3860
    0x62a797108ee0 ---------A   02950 GOSUB 4120
    0x62a797109100 ---------A   02960 P9$="*"
    0x62a797109330 ---------A   02970 P9=X
    0x62a797109560 ---------A   02980 P8=Y
    0x62a7971095d0 ---------A   02990 GOSUB 5580
    0x62a797109630 ---------A   03000 GOSUB 4350
    0x62a797109690 ---------A   03010 GOSUB 3700
    0x62a7971096f0 ---------A   03020 PRINT
    0x62a797109760 ---------A   03030 GOTO 2820
    0x62a797113ef0 ---------A T 03040 IF X=1 THEN 3060
    0x62a797114150 ---------A   03050 IF X<>7 THEN 3230
    0x62a7971143b0 ---------A T 03060 IF Y>=4 THEN 3120
    0x62a7971146b0 ---------A   03070 K=X
    0x62a797114ab0 ---------A   03080 L=Y+1
    0x62a797115080 ---------A   03090 IF MID$(P$(K),L,1)<>"*" THEN 3110
    0x62a7971153c0 ---------A   03100 L=Y-1
    0x62a797115430 ---------A T 03110 GOTO 3490
    0x62a797115670 ---------A T 03120 IF Y<>4 THEN 3180
    0x62a7971158b0 ---------A   03130 K=X
    0x62a797115bf0 ---------A   03140 L=Y-1
    0x62a7971161c0 ---------A   03150 IF MID$(P$(K),L,1)<>"*" THEN 3170
    0x62a797116500 ---------A   03160 L=Y+1
    0x62a797116570 ---------A T 03170 GOTO 3490
    0x62a797116790 ---------A T 03180 K=X
    0x62a797116ad0 ---------A   03190 L=Y-1
    0x62a7971170a0 ---------A   03200 IF MID$(P$(K),L,1)<>"*" THEN 3220
    0x62a7971173e0 ---------A   03210 L=Y+1
    0x62a797117450 ---------A T 03220 GOTO 3490
    0x62a797117690 ---------A T 03230 IF X>=5 THEN 3370
    0x62a7971178f0 ---------A   03240 IF Y>=4 THEN 3290
    0x62a797117970 ---------A   03250 GOSUB 5370
    0x62a797117c90 ---------A T 03260 K=X-1
    0x62a797117fc0 ---------A   03270 L=Y+1
    0x62a797118030 ---------A T 03280 GOTO 3490
    0x62a797118270 ---------A T 03290 IF Y<>4 THEN 3330
    0x62a7971185b0 ---------A T 03300 K=X-1
    0x62a7971187e0 ---------A T 03310 L=Y
    0x62a797118850 ---------A   03320 GOTO 3490
    0x62a7971188b0 ---------A T 03330 GOSUB 5370
    0x62a797118bd0 ---------A   03340 K=X-1
    0x62a797118f00 ---------A   03350 L=Y-1
    0x62a797118f70 ---------A   03360 GOTO 3490
    0x62a7971191b0 ---------A T 03370 IF Y>=4 THEN 3420
    0x62a797119230 ---------A   03380 GOSUB 5370
    0x62a797119550 ---------A   03390 K=X+1
    0x62a797119880 ---------A   03400 L=Y+1
    0x62a7971198f0 ---------A   03410 GOTO 3490
    0x62a797119b30 ---------A T 03420 IF Y<>4 THEN 3460
    0x62a797119e70 ---------A   03430 K=X+1
    0x62a79711a0a0 ---------A T 03440 L=Y
    0x62a79711a110 ---------A   03450 GOTO 3490
    0x62a79711a170 ---------A T 03460 GOSUB 5370
    0x62a79711a490 ---------A   03470 K=X+1
    0x62a79711a7d0 ---------A   03480 L=Y-1
    0x62a79711adb0 ---------A T 03490 IF MID$(P$(K),L,1)<>"*" THEN 3570
    0x62a79711b4b0 ---------A T 03500 K=INT(3*RND(0)-0.99999) + X
    0x62a79711b700 ---------A   03510 IF K=0 THEN 3500
    0x62a79711b970 ---------A   03520 IF K=8 THEN 3500
    0x62a79711c070 ---------A T 03530 L=INT(3*RND(0)-0.99999) + Y
    0x62a79711c2c0 ---------A   03540 IF L=0 THEN 3530
    0x62a79711c530 ---------A   03550 IF L=8 THEN 3530
    0x62a79711cb10 ---------A   03560 IF MID$(P$(K),L,1)="*" THEN 3500
    0x62a79711cd50 ---------A T 03570 X=K
    0x62a79711cf80 ---------A   03580 Y=L
    0x62a79711cff0 ---------A   03590 GOSUB 4120
    0x62a79711d210 ---------A   03600 P9$="*"
    0x62a79711d440 ---------A   03610 P9=X
    0x62a79711d670 ---------A   03620 P8=Y
    0x62a79711d6f0 ---------A   03630 GOSUB 5580
    0x62a79711da30 ---------A   03640 PRINT "I MOVE ";X;Y
    0x62a79711daa0 ---------A   03650 GOSUB 3700
    0x62a79711db00 ---------A   03660 PRINT
    0x62a79711db70 ---------A   03670 GOSUB 4350
    0x62a79711dbe0 ---------A   03680 GOTO 2820
    0x62a7971097c0 ---------B   03690 REM PRINT BOARD
    0x62a797109850 ---------B G 03700 PRINT
    0x62a7971099b0 ---------B   03710 PRINT "      SECOND NUMBER"
    0x62a797109b00 ---------B   03720 PRINT "      1 2 3 4 5 6 7"
    0x62a797109b70 ---------B   03730 PRINT
    0x62a797109e60 ---------B   03740 F1$="FIRST #"
    0x62a79710a1f0 ---------B   03750 FOR I=1 TO 7
    0x62a79710a5a0 ---------B   03760     FOR J=1 TO 7
    0x62a79710a7e0 ---------B   03770 	    IF J<>1 GOTO 3790
    0x62a79710af30 ---------B   03780 	    PRINT MID$(F1$,I,1);" ";I;" ";
    0x62a79710b400 ---------B T 03790 	    PRINT MID$(P$(I),J,1);
    0x62a79710b570 ---------B   03800 	    PRINT " ";
    0x62a79710b6a0 ---------B   03810     NEXT J
    0x62a79710b8c0 ---------B   03820     PRINT CHR$(14)
    0x62a79710b9f0 ---------B   03830 NEXT I
    0x62a79712bad0 ---------B   03840 GOTO 03850
    0x62a79712bb30 ---------B T 03850 RETURN
    0x62a79710be20 ---------C B 03860 INPUT X(1),Y(1)
    0x62a79710bea0 ---------C   03870 REM CHECK ADJACENCY
    0x62a79710c1e0 ---------C   03880 IF X(1)<0 THEN 3860
    0x62a79710c510 ---------C   03890 IF Y(1)<0 THEN 3860
    0x62a79710c840 ---------C   03900 IF X(1)=0 THEN 4020
    0x62a79710cb70 ---------C   03910 IF X(1)>7 THEN 3860
    0x62a79710cea0 ---------C   03920 IF Y(1)>7 THEN 3860
    0x62a79710d3d0 ---------C   03930 IF ABS(X-X(1))>1 THEN 3990
    0x62a79710d910 ---------C   03940 IF ABS(Y-Y(1))>1 THEN 3990
    0x62a79710e070 ---------C   03950 IF MID$(P$(X(1)),Y(1),1)="*" THEN 3860
    0x62a79710e370 ---------C   03960 X=X(1)
    0x62a79710e660 ---------C   03970 Y=Y(1)
    0x62a79712bb90 ---------C   03980 GOTO 04010
    0x62a79710f030 ---------C T 03990 PRINT "NOT ADJACENT!"
    0x62a79710f0b0 ---------C   04000 GOTO 3860
    0x62a79712c0a0 ---------C T 04010 RETURN
    0x62a797132b80 ---------C T 04020 IF B>R  THEN 4050
    0x62a797132be0 ---------C   04030 IF R>B THEN 4070
    0x62a797132c60 ---------C   04040 IF R=B THEN 4090
    0x62a797122880 ---------C T 04050 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x62a797132d20 ---------C   04060 GOTO 4100
    0x62a797126580 ---------C T 04070 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x62a797132dc0 ---------C   04080 GOTO 4100
    0x62a797126670 ---------C T 04090 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x62a797132e60 ---------C T 04100 GOTO 4110
    0x62a797132ec0 ---------C T 04110 END
    0x62a79710f670 ---------D G 04120 IF MID$(P$(X),Y,1)<>"B" THEN 4140
    0x62a79710f9c0 ---------D   04130  B=B+1
    0x62a79710ff90 ---------D T 04140 IF MID$(P$(X),Y,1)<>"R" THEN 4160
    0x62a7971102d0 ---------D   04150 R=R+1
    0x62a797110520 ---------D T 04160 IF B=10 THEN 4200
    0x62a797110780 ---------D   04170 IF R=10 THEN 4220
    0x62a79712c100 ---------D   04180 GOTO 04190
    0x62a79712c400 ---------D T 04190 RETURN
    0x62a797122710 ---------D T 04200 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x62a797133020 ---------D   04210 GOTO 4240
    0x62a797126350 ---------D T 04220 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x62a7971330c0 ---------D   04230 GOTO 4240
    0x62a797133120 ---------D T 04240 GOTO 4250
    0x62a797133180 ---------D T 04250 END
    0x62a797110a60 ---------E T 04260 IF B>R  THEN 4290
    0x62a797110ce0 ---------E   04270 IF R>B THEN 4310
    0x62a797110f80 ---------E   04280 IF R=B THEN 4330
    0x62a7971113e0 ---------E T 04290 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    0x62a797111470 ---------E   04300 GOTO 4340
    0x62a7971118b0 ---------E T 04310 PRINT "RED IS THE WINNER! ";R;" TO ";B
    0x62a797111940 ---------E   04320 GOTO 4340
    0x62a797111b90 ---------E T 04330 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    0x62a797111c00 ---------E T 04340 GOTO 4470
    0x62a7971121d0 ---------E G 04350 FOR G=X-1 TO X+1
    0x62a7971127c0 ---------E   04360     FOR H=Y-1 TO Y+1
    0x62a797112a30 ---------E   04370     	IF G=0 THEN 4430
    0x62a797112ca0 ---------E   04380     	IF H=0 THEN 4420
    0x62a797112f10 ---------E   04390     	IF G=8 THEN 4430
    0x62a797113190 ---------E   04400     	IF H=8 THEN 4420
    0x62a797113770 ---------E   04410     	IF MID$(P$(G),H,1)<>"*" THEN 4460
    0x62a7971138b0 ---------E T 04420     NEXT H
    0x62a7971139f0 ---------E T 04430 NEXT G
    0x62a797113b50 ---------E   04440 PRINT "GAME OVER"
    0x62a797113bc0 ---------E   04450 GOTO 4260
    0x62a79712c460 ---------E T 04460 GOTO 04480
    0x62a797122580 ---------E T 04470 END
    0x62a79712c4c0 ---------E T 04480 RETURN
    0x62a797123e70 ---------F T 04490 PRINT "MOVE: PLAYER B"
    0x62a797133360 ---------F   04500 GOSUB 3860
    0x62a7971333c0 ---------F   04510 GOSUB 4120
    0x62a797122c80 ---------F   04520 P9$="*"
    0x62a797125270 ---------F   04530 P9=X
    0x62a797125bd0 ---------F   04540 P8=Y
    0x62a797133480 ---------F   04550 GOSUB 5580
    0x62a7971334e0 ---------F   04560 GOSUB 4350
    0x62a797133540 ---------F   04570 IF R$="C" THEN 4710
    0x62a7971335a0 ---------F   04580 GOSUB 3700
    0x62a797126850 ---------F   04590 PRINT
    0x62a7971233a0 ---------F   04600 PRINT "MOVE: PLAYER A"
    0x62a797133620 ---------F   04610 GOSUB 3860
    0x62a797133680 ---------F   04620 GOSUB 4120
    0x62a797124000 ---------F   04630 P9$="*"
    0x62a797124190 ---------F   04640 P9=X
    0x62a797123d30 ---------F   04650 P8=Y
    0x62a797133740 ---------F   04660 GOSUB 5580
    0x62a7971337a0 ---------F   04670 GOSUB 4350
    0x62a797133800 ---------F   04680 GOSUB 3700
    0x62a797126b20 ---------F   04690 PRINT
    0x62a797133880 ---------F   04700 GOTO 4490
    0x62a7971338e0 ---------F T 04710 IF X=1 THEN 4730
    0x62a797133960 ---------F   04720 IF X<>7 THEN 4900
    0x62a7971339e0 ---------F T 04730 IF Y>=4 THEN 4790
    0x62a797122d00 ---------F   04740 K=X
    0x62a797126940 ---------F   04750 L=Y+1
    0x62a797133aa0 ---------F   04760 IF MID$(P$(K),L,1)<>"*" THEN 4780
    0x62a797126a30 ---------F   04770 L=Y-1
    0x62a797133b20 ---------F T 04780 GOTO 5160
    0x62a797133b80 ---------F T 04790 IF Y<>4 THEN 4850
    0x62a7971269e0 ---------F   04800 K=X
    0x62a797123270 ---------F   04810 L=Y-1
    0x62a797133c40 ---------F   04820 IF MID$(P$(K),L,1)<>"*" THEN 4840
    0x62a797124410 ---------F   04830 L=Y+1
    0x62a797133cc0 ---------F T 04840 GOTO 5160
    0x62a797126c60 ---------F T 04850 K=X
    0x62a797123200 ---------F   04860 L=Y-1
    0x62a797133d60 ---------F   04870 IF MID$(P$(K),L,1)<>"*" THEN 4890
    0x62a797124280 ---------F   04880 L=Y+1
    0x62a797133de0 ---------F T 04890 GOTO 5160
    0x62a797133e40 ---------F T 04900 IF X>=5 THEN 5040
    0x62a797133ec0 ---------F   04910 IF Y>=4 THEN 4960
    0x62a797133f40 ---------F   04920 GOSUB 5370
    0x62a797123bc0 ---------F   04930 K=X-1
    0x62a797126ee0 ---------F   04940 L=Y+1
    0x62a797133fe0 ---------F   04950 GOTO 5160
    0x62a797134040 ---------F T 04960 IF Y<>4 THEN 5000
    0x62a797126bc0 ---------F   04970 K=X-1
    0x62a797124460 ---------F   04980 L=Y
    0x62a797134100 ---------F   04990 GOTO 5160
    0x62a797134160 ---------F T 05000 GOSUB 5370
    0x62a7971234f0 ---------F   05010 K=X-1
    0x62a797124550 ---------F   05020 L=Y-1
    0x62a797134200 ---------F   05030 GOTO 5160
    0x62a797134260 ---------F T 05040 IF Y>=4 THEN 5090
    0x62a7971342e0 ---------F   05050 GOSUB 5370
    0x62a797127020 ---------F   05060 K=X+1
    0x62a797126f80 ---------F   05070 L=Y+1
    0x62a797134380 ---------F   05080 GOTO 5160
    0x62a7971343e0 ---------F T 05090 IF Y<>4 THEN 5130
    0x62a797127070 ---------F   05100 K=X+1
    0x62a7971271b0 ---------F   05110 L=Y
    0x62a7971344a0 ---------F   05120 GOTO 5160
    0x62a797134500 ---------F T 05130 GOSUB 5370
    0x62a797127160 ---------F   05140 K=X+1
    0x62a7971270c0 ---------F   05150 L=Y-1
    0x62a7971345a0 ---------F T 05160 IF MID$(P$(K),L,1)<>"*" THEN 5240
    0x62a797127110 ---------F T 05170 K=INT(3*RND(0)-0.99999) + X
    0x62a797134600 ---------F   05180 IF K=0 THEN 5170
    0x62a797134680 ---------F   05190 IF K=8 THEN 5170
    0x62a797123700 ---------F T 05200 L=INT(3*RND(0)-0.99999) + Y
    0x62a797134700 ---------F   05210 IF L=0 THEN 5200
    0x62a797134780 ---------F   05220 IF L=8 THEN 5200
    0x62a797134800 ---------F   05230 IF MID$(P$(K),L,1)="*" THEN 5170
    0x62a797124690 ---------F T 05240 X=K
    0x62a797127340 ---------F   05250 Y=L
    0x62a7971348a0 ---------F   05260 GOSUB 4120
    0x62a7971274d0 ---------F   05270 P9$="*"
    0x62a797125680 ---------F   05280 P9=X
    0x62a797127390 ---------F   05290 P8=Y
    0x62a797134960 ---------F   05300 GOSUB 5580
    0x62a797127520 ---------F   05310 PRINT "I MOVE ";X;Y
    0x62a7971349c0 ---------F   05320 GOSUB 3700
    0x62a797123aa0 ---------F   05330 PRINT
    0x62a797134a40 ---------F   05340 GOSUB 4350
    0x62a797134aa0 ---------F   05350 GOTO 4490
    0x62a79711dc40 ---------F   05360 REM GRAB CORNER PEG
    0x62a79711df40 ---------F G 05370 X(2)=X
    0x62a79711e240 ---------F   05380 Y(2)=Y
    0x62a79711e9a0 ---------F   05390 FOR M=X(2)-1 TO X(2)+1
    0x62a79711f110 ---------F   05400     FOR N=Y(2)-1 TO Y(2)+1
    0x62a79711f380 ---------F   05410     	IF M=0 THEN 5540
    0x62a79711f5f0 ---------F   05420     	IF N=0 THEN 5530
    0x62a79711f860 ---------F   05430     	IF M=8 THEN 5540
    0x62a79711fad0 ---------F   05440     	IF N=8 THEN 5530
    0x62a79711fd40 ---------F   05450     	IF M=1 THEN 5470
    0x62a79711ffb0 ---------F   05460     	IF M<>7 THEN 5540
    0x62a797120220 ---------F T 05470     	IF N=1 THEN 5490
    0x62a7971204a0 ---------F   05480     	IF N<>7 THEN 5530
    0x62a797120a80 ---------F T 05490     	IF MID$(P$(M),N,1)="*" THEN 5550
    0x62a797120cc0 ---------F   05500     	K=M
    0x62a797120ef0 ---------F   05510     	L=N
    0x62a797120f60 ---------F   05520     	GOTO 5240
    0x62a797121080 ---------F T 05530     NEXT N
    0x62a7971211c0 ---------F T 05540 NEXT M
    0x62a79712a280 ---------F T 05550 GOTO 05560
    0x62a79712a2e0 ---------F T 05560 RETURN
    0x62a797121300 ---------G   05570 REM SUBROUTINE TO INSERT A CHARATER IN A CHARATER STRING
    0x62a7971215f0 ---------G G 05580 DIM P7(10)
    0x62a7971218d0 ---------G   05590 CHANGE P$(P9) TO P7
    0x62a797121bc0 ---------G   05600 DIM P6(10)
    0x62a797121dc0 ---------G   05610 CHANGE P9$ TO P6
    0x62a7971221c0 ---------G   05620 P7(P8) = P6(1)
    0x62a7971224b0 ---------G   05630 CHANGE P7 TO P$(P9)
    0x62a79712a340 ---------G   05640 GOTO 05650
    0x62a79712a3a0 ---------G T 05650 RETURN
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
float  B_flt;                                     // Basic: B 
char*  F_str;                                     // Basic: F$ 
char*  F1_str;                                    // Basic: F1$ 
float  G_flt;                                     // Basic: G 
float  H_flt;                                     // Basic: H 
float  I_flt;                                     // Basic: I 
char*  I_str;                                     // Basic: I$ 
float  J_flt;                                     // Basic: J 
float  K_flt;                                     // Basic: K 
float  L_flt;                                     // Basic: L 
float  M_flt;                                     // Basic: M 
float  N_flt;                                     // Basic: N 
char*  P_str_arr[7];                              // Basic: P$ 
float  P6_flt_arr[10];                            // Basic: P6 
float  P7_flt_arr[10];                            // Basic: P7 
float  P8_flt;                                    // Basic: P8 
float  P9_flt;                                    // Basic: P9 
char*  P9_str;                                    // Basic: P9$ 
float  R_flt;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
float  X_flt;                                     // Basic: X 
float  Y_flt;                                     // Basic: Y 
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
    b2c_printf("\n");
    // 03710 PRINT "      SECOND NUMBER"
    b2c_printf("      second number\n");
    // 03720 PRINT "      1 2 3 4 5 6 7"
    b2c_printf("      1 2 3 4 5 6 7\n");
    // 03730 PRINT
    b2c_printf("\n");
    // 03740 F1$="FIRST #"
    GLBpStr="First #";
    F1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 03750 FOR I=1 TO 7
    for(I_flt=1;I_flt<=7;I_flt++){
        // 03760     FOR J=1 TO 7
        for(J_flt=1;J_flt<=7;J_flt++){
            // 03770 	    IF J<>1 GOTO 3790
            if(J_flt!=1)goto Lbl_03790;
            // 03780 	    PRINT MID$(F1$,I,1);" ";I;" ";
            b2c_printf("  %.2f    \n",I_flt);

  Lbl_03790:
            // 03790 	    PRINT MID$(P$(I),J,1);
            b2c_printf("");
            // 03800 	    PRINT " ";
            b2c_printf(" ");
            // 03810     NEXT J
            int dummy_3810=0; // Ignore this line.
        }; // End-For(J_flt)
        // 03820     PRINT CHR$(14)
        b2c_printf("");
        // 03830 NEXT I
        int dummy_3830=0; // Ignore this line.
    }; // End-For(I_flt)
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
                (err += b2c_strtof(&X_flt,args,0)) ||
                (err += b2c_strtof(&Y_flt,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03860
    // 03870 REM CHECK ADJACENCY
    // 03880 IF X(1)<0 THEN 3860
    if(X_flt<0)goto Lbl_03860;
    // 03890 IF Y(1)<0 THEN 3860
    if(Y_flt<0)goto Lbl_03860;
    // 03900 IF X(1)=0 THEN 4020
    if(X_flt==0)goto Lbl_04020;
    // 03910 IF X(1)>7 THEN 3860
    if(X_flt>7)goto Lbl_03860;
    // 03920 IF Y(1)>7 THEN 3860
    if(Y_flt>7)goto Lbl_03860;
    // 03930 IF ABS(X-X(1))>1 THEN 3990
    if(ABS(X_flt-X_flt)>1)goto Lbl_03990;
    // 03940 IF ABS(Y-Y(1))>1 THEN 3990
    if(ABS(Y_flt-Y_flt)>1)goto Lbl_03990;
    // 03950 IF MID$(P$(X(1)),Y(1),1)="*" THEN 3860
    if(MID$(P_str_arr[(int)X_flt],Y_flt,1)=='*')goto Lbl_03860;
    // 03960 X=X(1)
    X_flt = X_flt;
    // 03970 Y=Y(1)
    Y_flt = Y_flt;
    // 03980 GOTO 04010
    goto Lbl_04010;

  Lbl_03990:
    // 03990 PRINT "NOT ADJACENT!"
    b2c_printf("Not adjacent!\n");
    // 04000 GOTO 3860
    goto Lbl_03860;

  Lbl_04010:
    // 04010 RETURN
    return;
};

  Lbl_04020:
    // 04020 IF B>R  THEN 4050
    if(B_flt>R_flt)goto Lbl_04050;
    // 04030 IF R>B THEN 4070
    if(R_flt>B_flt)goto Lbl_04070;
    // 04040 IF R=B THEN 4090
    if(R_flt==B_flt)goto Lbl_04090;

  Lbl_04050:
    // 04050 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    b2c_printf("Blue is the winner!  %.2f Blue is the winner!  to  to  %.2f \n",B_flt,R_flt);
    // 04060 GOTO 4100
    goto Lbl_04100;

  Lbl_04070:
    // 04070 PRINT "RED IS THE WINNER! ";R;" TO ";B
    b2c_printf("Red is the winner!  %.2f Red is the winner!  to  to  %.2f \n",R_flt,B_flt);
    // 04080 GOTO 4100
    goto Lbl_04100;

  Lbl_04090:
    // 04090 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    b2c_printf("It's a tie!!  Each player has  %.2f \n",B_flt);

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
    if(MID$(P_str_arr[(int)X_flt],Y_flt,1)=='B')goto Lbl_04140;
    // 04130  B=B+1
    B_flt = B_flt+1;

  Lbl_04140:
    // 04140 IF MID$(P$(X),Y,1)<>"R" THEN 4160
    if(MID$(P_str_arr[(int)X_flt],Y_flt,1)=='R')goto Lbl_04160;
    // 04150 R=R+1
    R_flt = R_flt+1;

  Lbl_04160:
    // 04160 IF B=10 THEN 4200
    if(B_flt==10)goto Lbl_04200;
    // 04170 IF R=10 THEN 4220
    if(R_flt==10)goto Lbl_04220;
    // 04180 GOTO 04190
    goto Lbl_04190;

  Lbl_04190:
    // 04190 RETURN
    return;
};

  Lbl_04200:
    // 04200 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    b2c_printf("Blue is the winner!  %.2f Blue is the winner!  to  to  %.2f \n",B_flt,R_flt);
    // 04210 GOTO 4240
    goto Lbl_04240;

  Lbl_04220:
    // 04220 PRINT "RED IS THE WINNER! ";R;" TO ";B
    b2c_printf("Red is the winner!  %.2f Red is the winner!  to  to  %.2f \n",R_flt,B_flt);
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
    if(B_flt>R_flt)goto Lbl_04290;
    // 04270 IF R>B THEN 4310
    if(R_flt>B_flt)goto Lbl_04310;
    // 04280 IF R=B THEN 4330
    if(R_flt==B_flt)goto Lbl_04330;

  Lbl_04290:
    // 04290 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    b2c_printf("Blue is the winner!  %.2f Blue is the winner!  to  to  %.2f \n",B_flt,R_flt);
    // 04300 GOTO 4340
    goto Lbl_04340;

  Lbl_04310:
    // 04310 PRINT "RED IS THE WINNER! ";R;" TO ";B
    b2c_printf("Red is the winner!  %.2f Red is the winner!  to  to  %.2f \n",R_flt,B_flt);
    // 04320 GOTO 4340
    goto Lbl_04340;

  Lbl_04330:
    // 04330 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    b2c_printf("It's a tie!!  Each player has  %.2f \n",B_flt);

  Lbl_04340:
    // 04340 GOTO 4470
    goto Lbl_04470;

void Routine_04350(){
    // 04350 FOR G=X-1 TO X+1
    for(G_flt=X_flt-1;G_flt<=X_flt+1;G_flt++){
        // 04360     FOR H=Y-1 TO Y+1
        for(H_flt=Y_flt-1;H_flt<=Y_flt+1;H_flt++){
            // 04370     	IF G=0 THEN 4430
            if(G_flt==0)goto Lbl_04430;
            // 04380     	IF H=0 THEN 4420
            if(H_flt==0)goto Lbl_04420;
            // 04390     	IF G=8 THEN 4430
            if(G_flt==8)goto Lbl_04430;
            // 04400     	IF H=8 THEN 4420
            if(H_flt==8)goto Lbl_04420;
            // 04410     	IF MID$(P$(G),H,1)<>"*" THEN 4460
            if(MID$(P_str_arr[(int)G_flt],H_flt,1)=='*')goto Lbl_04460;

  Lbl_04420:
            // 04420     NEXT H
            int dummy_4420=0; // Ignore this line.
        }; // End-For(H_flt)

  Lbl_04430:
        // 04430 NEXT G
        int dummy_4430=0; // Ignore this line.
    }; // End-For(G_flt)
    // 04440 PRINT "GAME OVER"
    b2c_printf("Game over\n");
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
    b2c_printf("Move: player b\n");
    // 04500 GOSUB 3860
    Routine_03860();
    // 04510 GOSUB 4120
    Routine_04120();
    // 04520 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 04530 P9=X
    P9_flt = X_flt;
    // 04540 P8=Y
    P8_flt = Y_flt;
    // 04550 GOSUB 5580
    Routine_05580();
    // 04560 GOSUB 4350
    Routine_04350();
    // 04570 IF R$="C" THEN 4710
    if(strcmp(R_str,"C")==0)goto Lbl_04710;
    // 04580 GOSUB 3700
    Routine_03700();
    // 04590 PRINT
    b2c_printf("\n");
    // 04600 PRINT "MOVE: PLAYER A"
    b2c_printf("Move: player a\n");
    // 04610 GOSUB 3860
    Routine_03860();
    // 04620 GOSUB 4120
    Routine_04120();
    // 04630 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 04640 P9=X
    P9_flt = X_flt;
    // 04650 P8=Y
    P8_flt = Y_flt;
    // 04660 GOSUB 5580
    Routine_05580();
    // 04670 GOSUB 4350
    Routine_04350();
    // 04680 GOSUB 3700
    Routine_03700();
    // 04690 PRINT
    b2c_printf("\n");
    // 04700 GOTO 4490
    goto Lbl_04490;

  Lbl_04710:
    // 04710 IF X=1 THEN 4730
    if(X_flt==1)goto Lbl_04730;
    // 04720 IF X<>7 THEN 4900
    if(X_flt!=7)goto Lbl_04900;

  Lbl_04730:
    // 04730 IF Y>=4 THEN 4790
    if(Y_flt>=4)goto Lbl_04790;
    // 04740 K=X
    K_flt = X_flt;
    // 04750 L=Y+1
    L_flt = Y_flt+1;
    // 04760 IF MID$(P$(K),L,1)<>"*" THEN 4780
    if(MID$(P_str_arr[(int)K_flt],L_flt,1)=='*')goto Lbl_04780;
    // 04770 L=Y-1
    L_flt = Y_flt-1;

  Lbl_04780:
    // 04780 GOTO 5160
    goto Lbl_05160;

  Lbl_04790:
    // 04790 IF Y<>4 THEN 4850
    if(Y_flt!=4)goto Lbl_04850;
    // 04800 K=X
    K_flt = X_flt;
    // 04810 L=Y-1
    L_flt = Y_flt-1;
    // 04820 IF MID$(P$(K),L,1)<>"*" THEN 4840
    if(MID$(P_str_arr[(int)K_flt],L_flt,1)=='*')goto Lbl_04840;
    // 04830 L=Y+1
    L_flt = Y_flt+1;

  Lbl_04840:
    // 04840 GOTO 5160
    goto Lbl_05160;

  Lbl_04850:
    // 04850 K=X
    K_flt = X_flt;
    // 04860 L=Y-1
    L_flt = Y_flt-1;
    // 04870 IF MID$(P$(K),L,1)<>"*" THEN 4890
    if(MID$(P_str_arr[(int)K_flt],L_flt,1)=='*')goto Lbl_04890;
    // 04880 L=Y+1
    L_flt = Y_flt+1;

  Lbl_04890:
    // 04890 GOTO 5160
    goto Lbl_05160;

  Lbl_04900:
    // 04900 IF X>=5 THEN 5040
    if(X_flt>=5)goto Lbl_05040;
    // 04910 IF Y>=4 THEN 4960
    if(Y_flt>=4)goto Lbl_04960;
    // 04920 GOSUB 5370
    Routine_05370();
    // 04930 K=X-1
    K_flt = X_flt-1;
    // 04940 L=Y+1
    L_flt = Y_flt+1;
    // 04950 GOTO 5160
    goto Lbl_05160;

  Lbl_04960:
    // 04960 IF Y<>4 THEN 5000
    if(Y_flt!=4)goto Lbl_05000;
    // 04970 K=X-1
    K_flt = X_flt-1;
    // 04980 L=Y
    L_flt = Y_flt;
    // 04990 GOTO 5160
    goto Lbl_05160;

  Lbl_05000:
    // 05000 GOSUB 5370
    Routine_05370();
    // 05010 K=X-1
    K_flt = X_flt-1;
    // 05020 L=Y-1
    L_flt = Y_flt-1;
    // 05030 GOTO 5160
    goto Lbl_05160;

  Lbl_05040:
    // 05040 IF Y>=4 THEN 5090
    if(Y_flt>=4)goto Lbl_05090;
    // 05050 GOSUB 5370
    Routine_05370();
    // 05060 K=X+1
    K_flt = X_flt+1;
    // 05070 L=Y+1
    L_flt = Y_flt+1;
    // 05080 GOTO 5160
    goto Lbl_05160;

  Lbl_05090:
    // 05090 IF Y<>4 THEN 5130
    if(Y_flt!=4)goto Lbl_05130;
    // 05100 K=X+1
    K_flt = X_flt+1;
    // 05110 L=Y
    L_flt = Y_flt;
    // 05120 GOTO 5160
    goto Lbl_05160;

  Lbl_05130:
    // 05130 GOSUB 5370
    Routine_05370();
    // 05140 K=X+1
    K_flt = X_flt+1;
    // 05150 L=Y-1
    L_flt = Y_flt-1;

  Lbl_05160:
    // 05160 IF MID$(P$(K),L,1)<>"*" THEN 5240
    if(MID$(P_str_arr[(int)K_flt],L_flt,1)=='*')goto Lbl_05240;

  Lbl_05170:
    // 05170 K=INT(3*RND(0)-0.99999) + X
    K_flt = INT(3*RND(0)-1.)+X_flt;
    // 05180 IF K=0 THEN 5170
    if(K_flt==0)goto Lbl_05170;
    // 05190 IF K=8 THEN 5170
    if(K_flt==8)goto Lbl_05170;

  Lbl_05200:
    // 05200 L=INT(3*RND(0)-0.99999) + Y
    L_flt = INT(3*RND(0)-1.)+Y_flt;
    // 05210 IF L=0 THEN 5200
    if(L_flt==0)goto Lbl_05200;
    // 05220 IF L=8 THEN 5200
    if(L_flt==8)goto Lbl_05200;
    // 05230 IF MID$(P$(K),L,1)="*" THEN 5170
    if(MID$(P_str_arr[(int)K_flt],L_flt,1)=='*')goto Lbl_05170;

  Lbl_05240:
    // 05240 X=K
    X_flt = K_flt;
    // 05250 Y=L
    Y_flt = L_flt;
    // 05260 GOSUB 4120
    Routine_04120();
    // 05270 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 05280 P9=X
    P9_flt = X_flt;
    // 05290 P8=Y
    P8_flt = Y_flt;
    // 05300 GOSUB 5580
    Routine_05580();
    // 05310 PRINT "I MOVE ";X;Y
    b2c_printf("I move  %.2f I move  %.2f \n",X_flt,Y_flt);
    // 05320 GOSUB 3700
    Routine_03700();
    // 05330 PRINT
    b2c_printf("\n");
    // 05340 GOSUB 4350
    Routine_04350();
    // 05350 GOTO 4490
    goto Lbl_04490;
    // 05360 REM GRAB CORNER PEG

void Routine_05370(){
    // 05370 X(2)=X
    X_flt = X_flt;
    // 05380 Y(2)=Y
    Y_flt = Y_flt;
    // 05390 FOR M=X(2)-1 TO X(2)+1
    for(M_flt=X_flt-1;M_flt<=X_flt+1;M_flt++){
        // 05400     FOR N=Y(2)-1 TO Y(2)+1
        for(N_flt=Y_flt-1;N_flt<=Y_flt+1;N_flt++){
            // 05410     	IF M=0 THEN 5540
            if(M_flt==0)goto Lbl_05540;
            // 05420     	IF N=0 THEN 5530
            if(N_flt==0)goto Lbl_05530;
            // 05430     	IF M=8 THEN 5540
            if(M_flt==8)goto Lbl_05540;
            // 05440     	IF N=8 THEN 5530
            if(N_flt==8)goto Lbl_05530;
            // 05450     	IF M=1 THEN 5470
            if(M_flt==1)goto Lbl_05470;
            // 05460     	IF M<>7 THEN 5540
            if(M_flt!=7)goto Lbl_05540;

  Lbl_05470:
            // 05470     	IF N=1 THEN 5490
            if(N_flt==1)goto Lbl_05490;
            // 05480     	IF N<>7 THEN 5530
            if(N_flt!=7)goto Lbl_05530;

  Lbl_05490:
            // 05490     	IF MID$(P$(M),N,1)="*" THEN 5550
            if(MID$(P_str_arr[(int)M_flt],N_flt,1)=='*')goto Lbl_05550;
            // 05500     	K=M
            K_flt = M_flt;
            // 05510     	L=N
            L_flt = N_flt;
            // 05520     	GOTO 5240
            goto Lbl_05240;

  Lbl_05530:
            // 05530     NEXT N
            int dummy_5530=0; // Ignore this line.
        }; // End-For(N_flt)

  Lbl_05540:
        // 05540 NEXT M
        int dummy_5540=0; // Ignore this line.
    }; // End-For(M_flt)

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
    if(P_str_arr[(int)P9_flt]!=nullptr){
        for(int i=1;(i<=(int)strlen(P_str_arr[(int)P9_flt]))&&(i<=9);i++){
            P7_flt_arr[0][i]=(int)P_str_arr[(int)P9_flt][i-1];
        }
    }
    // 05600 DIM P6(10)
    // 05610 CHANGE P9$ TO P6
    if(P9_str!=nullptr){
        for(int i=1;(i<=(int)strlen(P9_str))&&(i<=9);i++){
            P6_flt_arr[0][i]=(int)P9_str[i-1];
        }
    }
    // 05620 P7(P8) = P6(1)
    P7_flt_arr[(int)P8_flt] = P6_flt_arr[1];
    // 05630 CHANGE P7 TO P$(P9)
    if(P_str_arr[(int)P9_flt]!=nullptr){
        for(int i=1;(i<=(int)strlen(P_str_arr[(int)P9_flt]))&&(i<=-1);i++){
            P_str_arr[(int)P9_flt][i-1]=(int)P7_flt_arr[0][i];
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
    B_flt = 0;
    // 01050 R=0
    R_flt = 0;
    // 01060 PRINT "THIS IS THE GAME OF PRESS UPS"
    b2c_printf("This is the game of press ups\n");
    // 01070 PRINT "INSTRUCTIONS (Y OR N) ";
    b2c_printf("Instructions (y or n) ");
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
    b2c_printf("Two may play -- the computer is your referee\n");
    // 01110 PRINT "OR YOU MAY PLAY AGAINST THE COMPUTER"
    b2c_printf("Or you may play against the computer\n");
    // 01120 PRINT
    b2c_printf("\n");
    // 01130 PRINT "ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL"
    b2c_printf("One player has red pegs, the other blue:yellow is neutral\n");
    // 01140 PRINT "A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID"
    b2c_printf("A peg is pressed down by inputting coordinates of a grid\n");
    // 01150 PRINT "THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS"
    b2c_printf("The player who presses down all his pegs first wins\n");
    // 01160 PRINT "YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS"
    b2c_printf("You can press down your opponent's pegs\n");
    // 01170 PRINT "IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST"
    b2c_printf("If it is impossible to press down a peg next to the last\n");
    // 01180 PRINT "ONE PRESSED, THE GAME IS OVER."
    b2c_printf("One pressed, the game is over.\n");
    // 01190 PRINT "THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS"
    b2c_printf("The player with the most pegs pressed of his colour wins\n");
    // 01200 PRINT "END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE "
    b2c_printf("End the game at any time by inputting zero(0) for the \n");
    // 01210 PRINT "X-COORDINATE"
    b2c_printf("X-coordinate\n");
    // 01220 PRINT
    b2c_printf("\n");
    // 01230 PRINT "DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST"
    b2c_printf("Decide who starts (player a); a yellow peg must be pressed first\n");
    // 01240 PRINT "THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)"
    b2c_printf("Then each player in turn presses down a peg (of any colour)\n");
    // 01250 PRINT "NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING"
    b2c_printf("Next to the previous one pressed (in any direction including\n");
    // 01260 PRINT "DIAGONALLY)."
    b2c_printf("Diagonally).\n");

  Lbl_01270:
    // 01270 PRINT
    b2c_printf("\n");
    // 01280 PRINT "PLAY WITH PARTNER(P) OR COMPUTER(C) ";
    b2c_printf("Play with partner(p) or computer(c) ");
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
    b2c_printf("Computer has blue pegs--opponent is player b\n");
    // 01330 PRINT "COMPUTER FIRST(Y OR N) ";
    b2c_printf("Computer first(y or n) ");
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
    b2c_printf("\n");
    // 01360 PRINT "READY... HERE IS THE BOARD"
    b2c_printf("Ready... Here is the board\n");
    // 01370 PRINT
    b2c_printf("\n");
    // 01380 PRINT
    b2c_printf("\n");
    // 01390 DIM P$(7)
    // 01400 P$(1)="YBBBBBY"
    GLBpStr="Ybbbbby";
    P_str_arr[1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01410 P$(2)="RYYYYYR"
    GLBpStr="Ryyyyyr";
    P_str_arr[2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01420 P$(3)="RYYYYYR"
    GLBpStr="Ryyyyyr";
    P_str_arr[3] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01430 P$(4)="RYYYYYR"
    GLBpStr="Ryyyyyr";
    P_str_arr[4] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01440 P$(5)="RYYYYYR"
    GLBpStr="Ryyyyyr";
    P_str_arr[5] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01450 P$(6)="RYYYYYR"
    GLBpStr="Ryyyyyr";
    P_str_arr[6] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01460 P$(7)="YBBBBBY"
    GLBpStr="Ybbbbby";
    P_str_arr[7] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01470 GOSUB 3700
    Routine_03700();
    // 01480 PRINT
    b2c_printf("\n");
    // 01490 IF R$="C" THEN 1650
    if(strcmp(R_str,"C")==0)goto Lbl_01650;
    // 01500 PRINT "MOVE:PLAYER A"
    b2c_printf("Move:player a\n");

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
                (err += b2c_strtof(&X_flt,args,0)) ||
                (err += b2c_strtof(&Y_flt,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01510
    // 01520 IF X>7 THEN 1510
    if(X_flt>7)goto Lbl_01510;
    // 01530 IF Y>7 THEN 1510
    if(Y_flt>7)goto Lbl_01510;
    // 01540 IF MID$(P$(X),Y,1)="Y" THEN 1570
    if(MID$(P_str_arr[(int)X_flt],Y_flt,1)=='Y')goto Lbl_01570;
    // 01550 PRINT "ILLEGAL MOVE...PRESS A YELLOW PEG!! "
    b2c_printf("Illegal move...Press a yellow peg!! \n");
    // 01560 GOTO 1510
    goto Lbl_01510;

  Lbl_01570:
    // 01570 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01580 P9=X
    P9_flt = X_flt;
    // 01590 P8=Y
    P8_flt = Y_flt;
    // 01600 GOSUB 5580
    Routine_05580();
    // 01610 GOSUB 3700
    Routine_03700();
    // 01620 PRINT
    b2c_printf("\n");
    // 01630 IF R$="C" THEN 3040
    if(strcmp(R_str,"C")==0)goto Lbl_03040;
    // 01640 GO TO 2820
    goto Lbl_02820;

  Lbl_01650:
    // 01650 IF F$<>"Y" THEN 1760
    if(strcmp(F_str,"Y")!=0)goto Lbl_01760;
    // 01660 X=INT(3*RND(0) + 3)
    X_flt = INT(3*RND(0)+3);
    // 01670 Y=4
    Y_flt = 4;
    // 01680 PRINT "I MOVE ";X;Y
    b2c_printf("I move  %.2f I move  %.2f \n",X_flt,Y_flt);
    // 01690 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01700 P9=X
    P9_flt = X_flt;
    // 01710 P8=Y
    P8_flt = Y_flt;
    // 01720 GOSUB 5580
    Routine_05580();
    // 01730 GOSUB 3700
    Routine_03700();
    // 01740 PRINT
    b2c_printf("\n");
    // 01750 GOTO 2820
    goto Lbl_02820;

  Lbl_01760:
    // 01760 PRINT "MOVE; PLAYER B"
    b2c_printf("Move; player b\n");
    // 01770 GOTO1510
    goto Lbl_01510;
    // 02000 REM COMPUTER'S MOVE
    // 02750 END
    // 02810 END

  Lbl_02820:
    // 02820 PRINT "MOVE: PLAYER B"
    b2c_printf("Move: player b\n");
    // 02830 GOSUB 3860
    Routine_03860();
    // 02840 GOSUB 4120
    Routine_04120();
    // 02850 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02860 P9=X
    P9_flt = X_flt;
    // 02870 P8=Y
    P8_flt = Y_flt;
    // 02880 GOSUB 5580
    Routine_05580();
    // 02890 GOSUB 4350
    Routine_04350();
    // 02900 IF R$="C" THEN 3040
    if(strcmp(R_str,"C")==0)goto Lbl_03040;
    // 02910 GOSUB 3700
    Routine_03700();
    // 02920 PRINT
    b2c_printf("\n");
    // 02930 PRINT "MOVE: PLAYER A"
    b2c_printf("Move: player a\n");
    // 02940 GOSUB 3860
    Routine_03860();
    // 02950 GOSUB 4120
    Routine_04120();
    // 02960 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02970 P9=X
    P9_flt = X_flt;
    // 02980 P8=Y
    P8_flt = Y_flt;
    // 02990 GOSUB 5580
    Routine_05580();
    // 03000 GOSUB 4350
    Routine_04350();
    // 03010 GOSUB 3700
    Routine_03700();
    // 03020 PRINT
    b2c_printf("\n");
    // 03030 GOTO 2820
    goto Lbl_02820;

  Lbl_03040:
    // 03040 IF X=1 THEN 3060
    if(X_flt==1)goto Lbl_03060;
    // 03050 IF X<>7 THEN 3230
    if(X_flt!=7)goto Lbl_03230;

  Lbl_03060:
    // 03060 IF Y>=4 THEN 3120
    if(Y_flt>=4)goto Lbl_03120;
    // 03070 K=X
    K_flt = X_flt;
    // 03080 L=Y+1
    L_flt = Y_flt+1;
    // 03090 IF MID$(P$(K),L,1)<>"*" THEN 3110
    if(MID$(P_str_arr[(int)K_flt],L_flt,1)=='*')goto Lbl_03110;
    // 03100 L=Y-1
    L_flt = Y_flt-1;

  Lbl_03110:
    // 03110 GOTO 3490
    goto Lbl_03490;

  Lbl_03120:
    // 03120 IF Y<>4 THEN 3180
    if(Y_flt!=4)goto Lbl_03180;
    // 03130 K=X
    K_flt = X_flt;
    // 03140 L=Y-1
    L_flt = Y_flt-1;
    // 03150 IF MID$(P$(K),L,1)<>"*" THEN 3170
    if(MID$(P_str_arr[(int)K_flt],L_flt,1)=='*')goto Lbl_03170;
    // 03160 L=Y+1
    L_flt = Y_flt+1;

  Lbl_03170:
    // 03170 GOTO 3490
    goto Lbl_03490;

  Lbl_03180:
    // 03180 K=X
    K_flt = X_flt;
    // 03190 L=Y-1
    L_flt = Y_flt-1;
    // 03200 IF MID$(P$(K),L,1)<>"*" THEN 3220
    if(MID$(P_str_arr[(int)K_flt],L_flt,1)=='*')goto Lbl_03220;
    // 03210 L=Y+1
    L_flt = Y_flt+1;

  Lbl_03220:
    // 03220 GOTO 3490
    goto Lbl_03490;

  Lbl_03230:
    // 03230 IF X>=5 THEN 3370
    if(X_flt>=5)goto Lbl_03370;
    // 03240 IF Y>=4 THEN 3290
    if(Y_flt>=4)goto Lbl_03290;
    // 03250 GOSUB 5370
    Routine_05370();

  Lbl_03260:
    // 03260 K=X-1
    K_flt = X_flt-1;
    // 03270 L=Y+1
    L_flt = Y_flt+1;

  Lbl_03280:
    // 03280 GOTO 3490
    goto Lbl_03490;

  Lbl_03290:
    // 03290 IF Y<>4 THEN 3330
    if(Y_flt!=4)goto Lbl_03330;

  Lbl_03300:
    // 03300 K=X-1
    K_flt = X_flt-1;

  Lbl_03310:
    // 03310 L=Y
    L_flt = Y_flt;
    // 03320 GOTO 3490
    goto Lbl_03490;

  Lbl_03330:
    // 03330 GOSUB 5370
    Routine_05370();
    // 03340 K=X-1
    K_flt = X_flt-1;
    // 03350 L=Y-1
    L_flt = Y_flt-1;
    // 03360 GOTO 3490
    goto Lbl_03490;

  Lbl_03370:
    // 03370 IF Y>=4 THEN 3420
    if(Y_flt>=4)goto Lbl_03420;
    // 03380 GOSUB 5370
    Routine_05370();
    // 03390 K=X+1
    K_flt = X_flt+1;
    // 03400 L=Y+1
    L_flt = Y_flt+1;
    // 03410 GOTO 3490
    goto Lbl_03490;

  Lbl_03420:
    // 03420 IF Y<>4 THEN 3460
    if(Y_flt!=4)goto Lbl_03460;
    // 03430 K=X+1
    K_flt = X_flt+1;

  Lbl_03440:
    // 03440 L=Y
    L_flt = Y_flt;
    // 03450 GOTO 3490
    goto Lbl_03490;

  Lbl_03460:
    // 03460 GOSUB 5370
    Routine_05370();
    // 03470 K=X+1
    K_flt = X_flt+1;
    // 03480 L=Y-1
    L_flt = Y_flt-1;

  Lbl_03490:
    // 03490 IF MID$(P$(K),L,1)<>"*" THEN 3570
    if(MID$(P_str_arr[(int)K_flt],L_flt,1)=='*')goto Lbl_03570;

  Lbl_03500:
    // 03500 K=INT(3*RND(0)-0.99999) + X
    K_flt = INT(3*RND(0)-1.)+X_flt;
    // 03510 IF K=0 THEN 3500
    if(K_flt==0)goto Lbl_03500;
    // 03520 IF K=8 THEN 3500
    if(K_flt==8)goto Lbl_03500;

  Lbl_03530:
    // 03530 L=INT(3*RND(0)-0.99999) + Y
    L_flt = INT(3*RND(0)-1.)+Y_flt;
    // 03540 IF L=0 THEN 3530
    if(L_flt==0)goto Lbl_03530;
    // 03550 IF L=8 THEN 3530
    if(L_flt==8)goto Lbl_03530;
    // 03560 IF MID$(P$(K),L,1)="*" THEN 3500
    if(MID$(P_str_arr[(int)K_flt],L_flt,1)=='*')goto Lbl_03500;

  Lbl_03570:
    // 03570 X=K
    X_flt = K_flt;
    // 03580 Y=L
    Y_flt = L_flt;
    // 03590 GOSUB 4120
    Routine_04120();
    // 03600 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 03610 P9=X
    P9_flt = X_flt;
    // 03620 P8=Y
    P8_flt = Y_flt;
    // 03630 GOSUB 5580
    Routine_05580();
    // 03640 PRINT "I MOVE ";X;Y
    b2c_printf("I move  %.2f I move  %.2f \n",X_flt,Y_flt);
    // 03650 GOSUB 3700
    Routine_03700();
    // 03660 PRINT
    b2c_printf("\n");
    // 03670 GOSUB 4350
    Routine_04350();
    // 03680 GOTO 2820
    goto Lbl_02820;
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
