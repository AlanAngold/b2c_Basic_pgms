/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bombard.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x626f4e96d6d0 ---------A   00010  PRINT TAB(33);"BOMBARDMENT"
    0x626f4e96d670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x626f4e96d7f0 ---------A   00030  PRINT:PRINT:PRINT
    0x626f4e96e040 ---------A   00100  PRINT "YOU ARE ON A BATTLEFIELD WITH 4 PLATOONS AND YOU"
    0x626f4e96de40 ---------A   00110  PRINT "HAVE 25 OUTPOSTS AVAILABLE WHERE THEY MAY BE PLACED."
    0x626f4e96e4c0 ---------A   00120  PRINT "YOU CAN ONLY PLACE ONE PLATOON AT ANY ONE OUTPOST."
    0x626f4e96dbe0 ---------A   00130  PRINT "THE COMPUTER DOES THE SAME WITH ITS FOUR PLATOONS."
    0x626f4e96dc90 ---------A   00135  PRINT
    0x626f4e96e620 ---------A   00140  PRINT "THE OBJECT OF THE GAME IS TO FIRE MISSLES AT THE"
    0x626f4e96e750 ---------A   00150  PRINT "OUTPOSTS OF THE COMPUTER.  IT WILL DO THE SAME TO YOU."
    0x626f4e9758a0 ---------A   00160  PRINT "THE ONE WHO DESTROYS ALL FOUR OF THE ENEMY'S PLATOONS"
    0x626f4e9759c0 ---------A   00170  PRINT "FIRST IS THE WINNER."
    0x626f4e975a70 ---------A   00180  PRINT
    0x626f4e975be0 ---------A   00190  PRINT "GOOD LUCK... AND TELL US WHERE YOU WANT THE BODIES SENT!"
    0x626f4e975c90 ---------A   00200  PRINT
    0x626f4e975df0 ---------A   00210  PRINT "TEAR OFF MATRIX AND USE IT TO CHECK OFF THE NUMBERS."
    0x626f4e9762b0 ---------A   00220  FOR R=1 TO 5: PRINT: NEXT R
    0x626f4e976520 ---------A   00260  DIM M(100)
    0x626f4e9767b0 ---------A   00270  FOR R=1 TO 5
    0x626f4e976d70 ---------A   00280  I=(R-1)*5+1
    0x626f4e9776c0 ---------A   00290  PRINT I,I+1,I+2,I+3,I+4
    0x626f4e977800 ---------A   00300  NEXT R
    0x626f4e977c50 ---------A   00350  FOR R=1 TO 10: PRINT: NEXT R
    0x626f4e978300 ---------A   00380  C=INT(RND(1)*25)+1
    0x626f4e978990 ---------A T 00390  D=INT(RND(1)*25)+1
    0x626f4e979020 ---------A T 00400  E=INT(RND(1)*25)+1
    0x626f4e9796b0 ---------A T 00410  F=INT(RND(1)*25)+1
    0x626f4e979920 ---------A   00420  IF C=D THEN 390
    0x626f4e979ba0 ---------A   00430  IF C=E THEN 400
    0x626f4e979e20 ---------A   00440  IF C=F THEN 410
    0x626f4e97a0a0 ---------A   00450  IF D=E THEN 400
    0x626f4e97a320 ---------A   00460  IF D=F THEN 410
    0x626f4e97a5c0 ---------A   00470  IF E=F THEN 410
    0x626f4e97a930 ---------A   00480  PRINT "WHAT ARE YOUR FOUR POSITIONS";
    0x626f4e97b030 ---------A   00490  INPUT G,H,K,L
    0x626f4e97b0d0 ---------A   00495  PRINT
    0x626f4e97b230 ---------A T 00500  PRINT "WHERE DO YOU WISH TO FIRE YOUR MISSLE";
    0x626f4e97b450 ---------A   00510  INPUT Y
    0x626f4e97b6d0 ---------A   00520  IF Y=C THEN 710
    0x626f4e97b950 ---------A   00530  IF Y=D THEN 710
    0x626f4e97bbd0 ---------A   00540  IF Y=E THEN 710
    0x626f4e97be50 ---------A   00550  IF Y=F THEN 710
    0x626f4e97bed0 ---------A   00560  GOTO 630
    0x626f4e97c4a0 ---------A T 00570  M=INT(RND(1)*25)+1
    0x626f4e97c510 ---------A   00575  GOTO 1160
    0x626f4e97c840 ---------A T 00580  IF X=G THEN 920
    0x626f4e97cac0 ---------A   00590  IF X=H THEN 920
    0x626f4e97cd40 ---------A   00600  IF X=L THEN 920
    0x626f4e97cfc0 ---------A   00610  IF X=K THEN 920
    0x626f4e97d060 ---------A   00620  GOTO 670
    0x626f4e97d170 ---------A T 00630  PRINT "HA, HA YOU MISSED. MY TURN NOW:"
    0x626f4e97d2e0 ---------A   00640  PRINT: PRINT: GOTO 570
    0x626f4e97d650 ---------A T 00670  PRINT "I MISSED YOU, YOU DIRTY RAT. I PICKED";M". YOUR TURN:"
    0x626f4e97d790 ---------A   00680  PRINT: PRINT: GOTO 500
    0x626f4e97db80 ---------A T 00710  Q=Q+1
    0x626f4e97dde0 ---------A   00720  IF Q=4 THEN 890
    0x626f4e97df50 ---------A   00730  PRINT "YOU GOT ONE OF MY OUTPOSTS!"
    0x626f4e97e1b0 ---------A   00740  IF Q=1 THEN 770
    0x626f4e97e410 ---------A   00750  IF Q=2 THEN 810
    0x626f4e97e680 ---------A   00760  IF Q=3 THEN 850
    0x626f4e97e800 ---------A T 00770  PRINT "ONE DOWN, THREE TO GO."
    0x626f4e97e950 ---------A   00780  PRINT: PRINT: GOTO 570
    0x626f4e97eab0 ---------A T 00810  PRINT "TWO DOWN, TWO TO GO."
    0x626f4e97ec00 ---------A   00820  PRINT: PRINT: GOTO 570
    0x626f4e97ed70 ---------A T 00850  PRINT "THREE DOWN, ONE TO GO."
    0x626f4e97f2f0 ---------A   00860  PRINT: PRINT: GOTO 570
    0x626f4e97f470 ---------A T 00890  PRINT "YOU GOT ME, I'M GOING FAST. BUT I'LL GET YOU WHEN"
    0x626f4e97f5e0 ---------A   00900  PRINT "MY TRANSISTO&S RECUP%RA*E!"
    0x626f4e97f660 ---------A   00910  GOTO 1235
    0x626f4e97fa50 ---------A T 00920  Z=Z+1
    0x626f4e97fcd0 ---------A   00930  IF Z=4 THEN 1110
    0x626f4e980040 ---------A   00940  PRINT "I GOT YOU. IT WON'T BE LONG NOW. POST";X;"WAS HIT."
    0x626f4e9802a0 ---------A   00950  IF Z=1 THEN 990
    0x626f4e980500 ---------A   00960  IF Z=2 THEN 1030
    0x626f4e980780 ---------A   00970  IF Z=3 THEN 1070
    0x626f4e980900 ---------A T 00990  PRINT "YOU HAVE ONLY THREE OUTPOSTS LEFT."
    0x626f4e980a60 ---------A   01000  PRINT: PRINT: GOTO 500
    0x626f4e980bd0 ---------A T 01030  PRINT "YOU HAVE ONLY TWO OUTPOSTS LEFT."
    0x626f4e980d30 ---------A   01040  PRINT: PRINT: GOTO 500
    0x626f4e980ea0 ---------A T 01070  PRINT "YOU HAVE ONLY ONE OUTPOST LEFT."
    0x626f4e981010 ---------A   01080  PRINT: PRINT: GOTO 500
    0x626f4e981380 ---------A T 01110  PRINT "YOU'RE DEAD. YOUR LAST OUTPOST WAS AT";X;". HA, HA, HA."
    0x626f4e9814f0 ---------A   01120  PRINT "BETTER LUCK NEXT TIME."
    0x626f4e981570 ---------A   01150  GOTO 1235
    0x626f4e981960 ---------A T 01160  P=P+1
    0x626f4e981d50 ---------A   01170  N=P-1
    0x626f4e982100 ---------A   01180  FOR T=1 TO N
    0x626f4e982460 ---------A   01190  IF M=M(T) THEN 570
    0x626f4e9825a0 ---------A   01200  NEXT T
    0x626f4e9827f0 ---------A   01210  X=M
    0x626f4e982b00 ---------A   01220  M(P)=M
    0x626f4e982b70 ---------A   01230  GOTO 580
    0x626f4e982bc0 ---------A T 01235  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00390      00420T
     00400      00430T, 00450T
     00410      00440T, 00460T, 00470T
     00500      00680T, 01000T, 01040T, 01080T
     00570      00640T, 00780T, 00820T, 00860T, 01190T
     00580      01230T
     00630      00560T
     00670      00620T
     00710      00520T, 00530T, 00540T, 00550T
     00770      00740T
     00810      00750T
     00850      00760T
     00890      00720T
     00920      00580T, 00590T, 00600T, 00610T
     00990      00950T
     01030      00960T
     01070      00970T
     01110      00930T
     01160      00575T
     01235      00910T, 01150T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x626f4e96d6d0 (00010)   0x626f4e96d6d0 (00010)   0x626f4e982bc0 (01235)   0x626f4e982bc0 (01235)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/bombard.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x626f4e96d6d0 ---------A   00010  PRINT TAB(33);"BOMBARDMENT"
    0x626f4e96d670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x626f4e95e2b0 ----------   00030  PRINT
    0x626f4e96d9e0 ----------        a PRINT
    0x626f4e96d7f0 ---------A        b PRINT
    0x626f4e96e040 ---------A   00100  PRINT "YOU ARE ON A BATTLEFIELD WITH 4 PLATOONS AND YOU"
    0x626f4e96de40 ---------A   00110  PRINT "HAVE 25 OUTPOSTS AVAILABLE WHERE THEY MAY BE PLACED."
    0x626f4e96e4c0 ---------A   00120  PRINT "YOU CAN ONLY PLACE ONE PLATOON AT ANY ONE OUTPOST."
    0x626f4e96dbe0 ---------A   00130  PRINT "THE COMPUTER DOES THE SAME WITH ITS FOUR PLATOONS."
    0x626f4e96dc90 ---------A   00135  PRINT
    0x626f4e96e620 ---------A   00140  PRINT "THE OBJECT OF THE GAME IS TO FIRE MISSLES AT THE"
    0x626f4e96e750 ---------A   00150  PRINT "OUTPOSTS OF THE COMPUTER.  IT WILL DO THE SAME TO YOU."
    0x626f4e9758a0 ---------A   00160  PRINT "THE ONE WHO DESTROYS ALL FOUR OF THE ENEMY'S PLATOONS"
    0x626f4e9759c0 ---------A   00170  PRINT "FIRST IS THE WINNER."
    0x626f4e975a70 ---------A   00180  PRINT
    0x626f4e975be0 ---------A   00190  PRINT "GOOD LUCK... AND TELL US WHERE YOU WANT THE BODIES SENT!"
    0x626f4e975c90 ---------A   00200  PRINT
    0x626f4e975df0 ---------A   00210  PRINT "TEAR OFF MATRIX AND USE IT TO CHECK OFF THE NUMBERS."
    0x626f4e976130 ----------   00220  FOR R=1 TO 5
    0x626f4e976190 ----------        a PRINT
    0x626f4e9762b0 ---------A        b NEXT R
    0x626f4e976520 ---------A   00260  DIM M(100)
    0x626f4e9767b0 ---------A   00270  FOR R=1 TO 5
    0x626f4e976d70 ---------A   00280  I=(R-1)*5+1
    0x626f4e9776c0 ---------A   00290  PRINT I,I+1,I+2,I+3,I+4
    0x626f4e977800 ---------A   00300  NEXT R
    0x626f4e977ab0 ----------   00350  FOR R=1 TO 10
    0x626f4e977b10 ----------        a PRINT
    0x626f4e977c50 ---------A        b NEXT R
    0x626f4e978300 ---------A   00380  C=INT(RND(1)*25)+1
    0x626f4e978990 ---------A T 00390  D=INT(RND(1)*25)+1
    0x626f4e979020 ---------A T 00400  E=INT(RND(1)*25)+1
    0x626f4e9796b0 ---------A T 00410  F=INT(RND(1)*25)+1
    0x626f4e979920 ---------A   00420  IF C=D THEN 390
    0x626f4e979ba0 ---------A   00430  IF C=E THEN 400
    0x626f4e979e20 ---------A   00440  IF C=F THEN 410
    0x626f4e97a0a0 ---------A   00450  IF D=E THEN 400
    0x626f4e97a320 ---------A   00460  IF D=F THEN 410
    0x626f4e97a5c0 ---------A   00470  IF E=F THEN 410
    0x626f4e97a930 ---------A   00480  PRINT "WHAT ARE YOUR FOUR POSITIONS";
    0x626f4e97b030 ---------A   00490  INPUT G,H,K,L
    0x626f4e97b0d0 ---------A   00495  PRINT
    0x626f4e97b230 ---------A T 00500  PRINT "WHERE DO YOU WISH TO FIRE YOUR MISSLE";
    0x626f4e97b450 ---------A   00510  INPUT Y
    0x626f4e97b6d0 ---------A   00520  IF Y=C THEN 710
    0x626f4e97b950 ---------A   00530  IF Y=D THEN 710
    0x626f4e97bbd0 ---------A   00540  IF Y=E THEN 710
    0x626f4e97be50 ---------A   00550  IF Y=F THEN 710
    0x626f4e97bed0 ---------A   00560  GOTO 630
    0x626f4e97c4a0 ---------A T 00570  M=INT(RND(1)*25)+1
    0x626f4e97c510 ---------A   00575  GOTO 1160
    0x626f4e97c840 ---------A T 00580  IF X=G THEN 920
    0x626f4e97cac0 ---------A   00590  IF X=H THEN 920
    0x626f4e97cd40 ---------A   00600  IF X=L THEN 920
    0x626f4e97cfc0 ---------A   00610  IF X=K THEN 920
    0x626f4e97d060 ---------A   00620  GOTO 670
    0x626f4e97d170 ---------A T 00630  PRINT "HA, HA YOU MISSED. MY TURN NOW:"
    0x626f4e97d1d0 ----------   00640  PRINT
    0x626f4e97d230 ----------        a PRINT
    0x626f4e97d2e0 ---------A        b GOTO 570
    0x626f4e97d650 ---------A T 00670  PRINT "I MISSED YOU, YOU DIRTY RAT. I PICKED";M". YOUR TURN:"
    0x626f4e97d6b0 ----------   00680  PRINT
    0x626f4e97d710 ----------        a PRINT
    0x626f4e97d790 ---------A        b GOTO 500
    0x626f4e97db80 ---------A T 00710  Q=Q+1
    0x626f4e97dde0 ---------A   00720  IF Q=4 THEN 890
    0x626f4e97df50 ---------A   00730  PRINT "YOU GOT ONE OF MY OUTPOSTS!"
    0x626f4e97e1b0 ---------A   00740  IF Q=1 THEN 770
    0x626f4e97e410 ---------A   00750  IF Q=2 THEN 810
    0x626f4e97e680 ---------A   00760  IF Q=3 THEN 850
    0x626f4e97e800 ---------A T 00770  PRINT "ONE DOWN, THREE TO GO."
    0x626f4e97e860 ----------   00780  PRINT
    0x626f4e97e8c0 ----------        a PRINT
    0x626f4e97e950 ---------A        b GOTO 570
    0x626f4e97eab0 ---------A T 00810  PRINT "TWO DOWN, TWO TO GO."
    0x626f4e97eb10 ----------   00820  PRINT
    0x626f4e97eb70 ----------        a PRINT
    0x626f4e97ec00 ---------A        b GOTO 570
    0x626f4e97ed70 ---------A T 00850  PRINT "THREE DOWN, ONE TO GO."
    0x626f4e97f1e0 ----------   00860  PRINT
    0x626f4e97f240 ----------        a PRINT
    0x626f4e97f2f0 ---------A        b GOTO 570
    0x626f4e97f470 ---------A T 00890  PRINT "YOU GOT ME, I'M GOING FAST. BUT I'LL GET YOU WHEN"
    0x626f4e97f5e0 ---------A   00900  PRINT "MY TRANSISTO&S RECUP%RA*E!"
    0x626f4e97f660 ---------A   00910  GOTO 1235
    0x626f4e97fa50 ---------A T 00920  Z=Z+1
    0x626f4e97fcd0 ---------A   00930  IF Z=4 THEN 1110
    0x626f4e980040 ---------A   00940  PRINT "I GOT YOU. IT WON'T BE LONG NOW. POST";X;"WAS HIT."
    0x626f4e9802a0 ---------A   00950  IF Z=1 THEN 990
    0x626f4e980500 ---------A   00960  IF Z=2 THEN 1030
    0x626f4e980780 ---------A   00970  IF Z=3 THEN 1070
    0x626f4e980900 ---------A T 00990  PRINT "YOU HAVE ONLY THREE OUTPOSTS LEFT."
    0x626f4e980960 ----------   01000  PRINT
    0x626f4e9809c0 ----------        a PRINT
    0x626f4e980a60 ---------A        b GOTO 500
    0x626f4e980bd0 ---------A T 01030  PRINT "YOU HAVE ONLY TWO OUTPOSTS LEFT."
    0x626f4e980c30 ----------   01040  PRINT
    0x626f4e980c90 ----------        a PRINT
    0x626f4e980d30 ---------A        b GOTO 500
    0x626f4e980ea0 ---------A T 01070  PRINT "YOU HAVE ONLY ONE OUTPOST LEFT."
    0x626f4e980f00 ----------   01080  PRINT
    0x626f4e980f60 ----------        a PRINT
    0x626f4e981010 ---------A        b GOTO 500
    0x626f4e981380 ---------A T 01110  PRINT "YOU'RE DEAD. YOUR LAST OUTPOST WAS AT";X;". HA, HA, HA."
    0x626f4e9814f0 ---------A   01120  PRINT "BETTER LUCK NEXT TIME."
    0x626f4e981570 ---------A   01150  GOTO 1235
    0x626f4e981960 ---------A T 01160  P=P+1
    0x626f4e981d50 ---------A   01170  N=P-1
    0x626f4e982100 ---------A   01180  FOR T=1 TO N
    0x626f4e982460 ---------A   01190  IF M=M(T) THEN 570
    0x626f4e9825a0 ---------A   01200  NEXT T
    0x626f4e9827f0 ---------A   01210  X=M
    0x626f4e982b00 ---------A   01220  M(P)=M
    0x626f4e982b70 ---------A   01230  GOTO 580
    0x626f4e982bc0 ---------A T 01235  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/bombard.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x626f4e96d6d0 ---------A   01000  PRINT TAB(33);"BOMBARDMENT"
    0x626f4e96d670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x626f4e95e2b0 ----------   01020  PRINT
    0x626f4e96d9e0 ---------- T 01030  PRINT
    0x626f4e96d7f0 ---------A   01040  PRINT
    0x626f4e96e040 ---------A   01050  PRINT "YOU ARE ON A BATTLEFIELD WITH 4 PLATOONS AND YOU"
    0x626f4e96de40 ---------A   01060  PRINT "HAVE 25 OUTPOSTS AVAILABLE WHERE THEY MAY BE PLACED."
    0x626f4e96e4c0 ---------A T 01070  PRINT "YOU CAN ONLY PLACE ONE PLATOON AT ANY ONE OUTPOST."
    0x626f4e96dbe0 ---------A   01080  PRINT "THE COMPUTER DOES THE SAME WITH ITS FOUR PLATOONS."
    0x626f4e96dc90 ---------A   01090  PRINT
    0x626f4e96e620 ---------A   01100  PRINT "THE OBJECT OF THE GAME IS TO FIRE MISSLES AT THE"
    0x626f4e96e750 ---------A T 01110  PRINT "OUTPOSTS OF THE COMPUTER.  IT WILL DO THE SAME TO YOU."
    0x626f4e9758a0 ---------A   01120  PRINT "THE ONE WHO DESTROYS ALL FOUR OF THE ENEMY'S PLATOONS"
    0x626f4e9759c0 ---------A   01130  PRINT "FIRST IS THE WINNER."
    0x626f4e975a70 ---------A   01140  PRINT
    0x626f4e975be0 ---------A   01150  PRINT "GOOD LUCK... AND TELL US WHERE YOU WANT THE BODIES SENT!"
    0x626f4e975c90 ---------A T 01160  PRINT
    0x626f4e975df0 ---------A   01170  PRINT "TEAR OFF MATRIX AND USE IT TO CHECK OFF THE NUMBERS."
    0x626f4e976130 ----------   01180  FOR R=1 TO 5
    0x626f4e976190 ----------   01190  PRINT
    0x626f4e9762b0 ---------A   01200  NEXT R
    0x626f4e976520 ---------A   01210  DIM M(100)
    0x626f4e9767b0 ---------A   01220  FOR R=1 TO 5
    0x626f4e976d70 ---------A   01230  I=(R-1)*5+1
    0x626f4e9776c0 ---------A   01240  PRINT I,I+1,I+2,I+3,I+4
    0x626f4e977800 ---------A   01250  NEXT R
    0x626f4e977ab0 ----------   01260  FOR R=1 TO 10
    0x626f4e977b10 ----------   01270  PRINT
    0x626f4e977c50 ---------A   01280  NEXT R
    0x626f4e978300 ---------A   01290  C=INT(RND(1)*25)+1
    0x626f4e978990 ---------A   01300  D=INT(RND(1)*25)+1
    0x626f4e979020 ---------A   01310  E=INT(RND(1)*25)+1
    0x626f4e9796b0 ---------A   01320  F=INT(RND(1)*25)+1
    0x626f4e979920 ---------A   01330  IF C=D THEN 1300
    0x626f4e979ba0 ---------A   01340  IF C=E THEN 1310
    0x626f4e979e20 ---------A   01350  IF C=F THEN 1320
    0x626f4e97a0a0 ---------A   01360  IF D=E THEN 1310
    0x626f4e97a320 ---------A   01370  IF D=F THEN 1320
    0x626f4e97a5c0 ---------A   01380  IF E=F THEN 1320
    0x626f4e97a930 ---------A   01390  PRINT "WHAT ARE YOUR FOUR POSITIONS";
    0x626f4e97b030 ---------A   01400  INPUT G,H,K,L
    0x626f4e97b0d0 ---------A   01410  PRINT
    0x626f4e97b230 ---------A   01420  PRINT "WHERE DO YOU WISH TO FIRE YOUR MISSLE";
    0x626f4e97b450 ---------A   01430  INPUT Y
    0x626f4e97b6d0 ---------A   01440  IF Y=C THEN 1640
    0x626f4e97b950 ---------A   01450  IF Y=D THEN 1640
    0x626f4e97bbd0 ---------A   01460  IF Y=E THEN 1640
    0x626f4e97be50 ---------A   01470  IF Y=F THEN 1640
    0x626f4e97bed0 ---------A   01480  GOTO 1560
    0x626f4e97c4a0 ---------A   01490  M=INT(RND(1)*25)+1
    0x626f4e97c510 ---------A   01500  GOTO 2060
    0x626f4e97c840 ---------A   01510  IF X=G THEN 1850
    0x626f4e97cac0 ---------A   01520  IF X=H THEN 1850
    0x626f4e97cd40 ---------A   01530  IF X=L THEN 1850
    0x626f4e97cfc0 ---------A   01540  IF X=K THEN 1850
    0x626f4e97d060 ---------A   01550  GOTO 1600
    0x626f4e97d170 ---------A   01560  PRINT "HA, HA YOU MISSED. MY TURN NOW:"
    0x626f4e97d1d0 ----------   01570  PRINT
    0x626f4e97d230 ----------   01580  PRINT
    0x626f4e97d2e0 ---------A   01590  GOTO 1490
    0x626f4e97d650 ---------A   01600  PRINT "I MISSED YOU, YOU DIRTY RAT. I PICKED";M". YOUR TURN:"
    0x626f4e97d6b0 ----------   01610  PRINT
    0x626f4e97d710 ----------   01620  PRINT
    0x626f4e97d790 ---------A   01630  GOTO 1420
    0x626f4e97db80 ---------A   01640  Q=Q+1
    0x626f4e97dde0 ---------A   01650  IF Q=4 THEN 1820
    0x626f4e97df50 ---------A   01660  PRINT "YOU GOT ONE OF MY OUTPOSTS!"
    0x626f4e97e1b0 ---------A   01670  IF Q=1 THEN 1700
    0x626f4e97e410 ---------A   01680  IF Q=2 THEN 1740
    0x626f4e97e680 ---------A   01690  IF Q=3 THEN 1780
    0x626f4e97e800 ---------A   01700  PRINT "ONE DOWN, THREE TO GO."
    0x626f4e97e860 ----------   01710  PRINT
    0x626f4e97e8c0 ----------   01720  PRINT
    0x626f4e97e950 ---------A   01730  GOTO 1490
    0x626f4e97eab0 ---------A   01740  PRINT "TWO DOWN, TWO TO GO."
    0x626f4e97eb10 ----------   01750  PRINT
    0x626f4e97eb70 ----------   01760  PRINT
    0x626f4e97ec00 ---------A   01770  GOTO 1490
    0x626f4e97ed70 ---------A   01780  PRINT "THREE DOWN, ONE TO GO."
    0x626f4e97f1e0 ----------   01790  PRINT
    0x626f4e97f240 ----------   01800  PRINT
    0x626f4e97f2f0 ---------A   01810  GOTO 1490
    0x626f4e97f470 ---------A   01820  PRINT "YOU GOT ME, I'M GOING FAST. BUT I'LL GET YOU WHEN"
    0x626f4e97f5e0 ---------A   01830  PRINT "MY TRANSISTO&S RECUP%RA*E!"
    0x626f4e97f660 ---------A   01840  GOTO 2140
    0x626f4e97fa50 ---------A   01850  Z=Z+1
    0x626f4e97fcd0 ---------A   01860  IF Z=4 THEN 2030
    0x626f4e980040 ---------A   01870  PRINT "I GOT YOU. IT WON'T BE LONG NOW. POST";X;"WAS HIT."
    0x626f4e9802a0 ---------A   01880  IF Z=1 THEN 1910
    0x626f4e980500 ---------A   01890  IF Z=2 THEN 1950
    0x626f4e980780 ---------A   01900  IF Z=3 THEN 1990
    0x626f4e980900 ---------A   01910  PRINT "YOU HAVE ONLY THREE OUTPOSTS LEFT."
    0x626f4e980960 ----------   01920  PRINT
    0x626f4e9809c0 ----------   01930  PRINT
    0x626f4e980a60 ---------A   01940  GOTO 1420
    0x626f4e980bd0 ---------A   01950  PRINT "YOU HAVE ONLY TWO OUTPOSTS LEFT."
    0x626f4e980c30 ----------   01960  PRINT
    0x626f4e980c90 ----------   01970  PRINT
    0x626f4e980d30 ---------A   01980  GOTO 1420
    0x626f4e980ea0 ---------A   01990  PRINT "YOU HAVE ONLY ONE OUTPOST LEFT."
    0x626f4e980f00 ----------   02000  PRINT
    0x626f4e980f60 ----------   02010  PRINT
    0x626f4e981010 ---------A   02020  GOTO 1420
    0x626f4e981380 ---------A   02030  PRINT "YOU'RE DEAD. YOUR LAST OUTPOST WAS AT";X;". HA, HA, HA."
    0x626f4e9814f0 ---------A   02040  PRINT "BETTER LUCK NEXT TIME."
    0x626f4e981570 ---------A   02050  GOTO 2140
    0x626f4e981960 ---------A   02060  P=P+1
    0x626f4e981d50 ---------A   02070  N=P-1
    0x626f4e982100 ---------A   02080  FOR T=1 TO N
    0x626f4e982460 ---------A   02090  IF M=M(T) THEN 1490
    0x626f4e9825a0 ---------A   02100  NEXT T
    0x626f4e9827f0 ---------A   02110  X=M
    0x626f4e982b00 ---------A   02120  M(P)=M
    0x626f4e982b70 ---------A   02130  GOTO 1510
    0x626f4e982bc0 ---------A   02140  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02150 - 10000    7860 

 */



/*
 *  Symbol Table Listing for 'basic/bombard.bas'
 *
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
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
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
    K                        Integer     
    L                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M               Array    Integer         {0,99} 
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
    X                        Integer     
    Y                        Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bombard.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x626f4e96d6d0 ---------A   01000  PRINT TAB(33);"BOMBARDMENT"
    0x626f4e96d670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x626f4e95e2b0 ---------A   01020  PRINT
    0x626f4e96d9e0 ---------A   01030  PRINT
    0x626f4e96d7f0 ---------A   01040  PRINT
    0x626f4e96e040 ---------A   01050  PRINT "YOU ARE ON A BATTLEFIELD WITH 4 PLATOONS AND YOU"
    0x626f4e96de40 ---------A   01060  PRINT "HAVE 25 OUTPOSTS AVAILABLE WHERE THEY MAY BE PLACED."
    0x626f4e96e4c0 ---------A   01070  PRINT "YOU CAN ONLY PLACE ONE PLATOON AT ANY ONE OUTPOST."
    0x626f4e96dbe0 ---------A   01080  PRINT "THE COMPUTER DOES THE SAME WITH ITS FOUR PLATOONS."
    0x626f4e96dc90 ---------A   01090  PRINT
    0x626f4e96e620 ---------A   01100  PRINT "THE OBJECT OF THE GAME IS TO FIRE MISSLES AT THE"
    0x626f4e96e750 ---------A   01110  PRINT "OUTPOSTS OF THE COMPUTER.  IT WILL DO THE SAME TO YOU."
    0x626f4e9758a0 ---------A   01120  PRINT "THE ONE WHO DESTROYS ALL FOUR OF THE ENEMY'S PLATOONS"
    0x626f4e9759c0 ---------A   01130  PRINT "FIRST IS THE WINNER."
    0x626f4e975a70 ---------A   01140  PRINT
    0x626f4e975be0 ---------A   01150  PRINT "GOOD LUCK... AND TELL US WHERE YOU WANT THE BODIES SENT!"
    0x626f4e975c90 ---------A   01160  PRINT
    0x626f4e975df0 ---------A   01170  PRINT "TEAR OFF MATRIX AND USE IT TO CHECK OFF THE NUMBERS."
    0x626f4e976130 ---------A   01180  FOR R=1 TO 5
    0x626f4e976190 ---------A   01190  PRINT
    0x626f4e9762b0 ---------A   01200  NEXT R
    0x626f4e976520 ---------A   01210  DIM M(100)
    0x626f4e9767b0 ---------A   01220  FOR R=1 TO 5
    0x626f4e976d70 ---------A   01230  I=(R-1)*5+1
    0x626f4e9776c0 ---------A   01240  PRINT I,I+1,I+2,I+3,I+4
    0x626f4e977800 ---------A   01250  NEXT R
    0x626f4e977ab0 ---------A   01260  FOR R=1 TO 10
    0x626f4e977b10 ---------A   01270  PRINT
    0x626f4e977c50 ---------A   01280  NEXT R
    0x626f4e978300 ---------A   01290  C=INT(RND(1)*25)+1
    0x626f4e978990 ---------A T 01300  D=INT(RND(1)*25)+1
    0x626f4e979020 ---------A T 01310  E=INT(RND(1)*25)+1
    0x626f4e9796b0 ---------A T 01320  F=INT(RND(1)*25)+1
    0x626f4e979920 ---------A   01330  IF C=D THEN 1300
    0x626f4e979ba0 ---------A   01340  IF C=E THEN 1310
    0x626f4e979e20 ---------A   01350  IF C=F THEN 1320
    0x626f4e97a0a0 ---------A   01360  IF D=E THEN 1310
    0x626f4e97a320 ---------A   01370  IF D=F THEN 1320
    0x626f4e97a5c0 ---------A   01380  IF E=F THEN 1320
    0x626f4e97a930 ---------A   01390  PRINT "WHAT ARE YOUR FOUR POSITIONS";
    0x626f4e97b030 ---------A   01400  INPUT G,H,K,L
    0x626f4e97b0d0 ---------A   01410  PRINT
    0x626f4e97b230 ---------A T 01420  PRINT "WHERE DO YOU WISH TO FIRE YOUR MISSLE";
    0x626f4e97b450 ---------A   01430  INPUT Y
    0x626f4e97b6d0 ---------A   01440  IF Y=C THEN 1640
    0x626f4e97b950 ---------A   01450  IF Y=D THEN 1640
    0x626f4e97bbd0 ---------A   01460  IF Y=E THEN 1640
    0x626f4e97be50 ---------A   01470  IF Y=F THEN 1640
    0x626f4e97bed0 ---------A   01480  GOTO 1560
    0x626f4e97c4a0 ---------A T 01490  M=INT(RND(1)*25)+1
    0x626f4e97c510 ---------A   01500  GOTO 2060
    0x626f4e97c840 ---------A T 01510  IF X=G THEN 1850
    0x626f4e97cac0 ---------A   01520  IF X=H THEN 1850
    0x626f4e97cd40 ---------A   01530  IF X=L THEN 1850
    0x626f4e97cfc0 ---------A   01540  IF X=K THEN 1850
    0x626f4e97d060 ---------A   01550  GOTO 1600
    0x626f4e97d170 ---------A T 01560  PRINT "HA, HA YOU MISSED. MY TURN NOW:"
    0x626f4e97d1d0 ---------A   01570  PRINT
    0x626f4e97d230 ---------A   01580  PRINT
    0x626f4e97d2e0 ---------A   01590  GOTO 1490
    0x626f4e97d650 ---------A T 01600  PRINT "I MISSED YOU, YOU DIRTY RAT. I PICKED";M". YOUR TURN:"
    0x626f4e97d6b0 ---------A   01610  PRINT
    0x626f4e97d710 ---------A   01620  PRINT
    0x626f4e97d790 ---------A   01630  GOTO 1420
    0x626f4e97db80 ---------A T 01640  Q=Q+1
    0x626f4e97dde0 ---------A   01650  IF Q=4 THEN 1820
    0x626f4e97df50 ---------A   01660  PRINT "YOU GOT ONE OF MY OUTPOSTS!"
    0x626f4e97e1b0 ---------A   01670  IF Q=1 THEN 1700
    0x626f4e97e410 ---------A   01680  IF Q=2 THEN 1740
    0x626f4e97e680 ---------A   01690  IF Q=3 THEN 1780
    0x626f4e97e800 ---------A T 01700  PRINT "ONE DOWN, THREE TO GO."
    0x626f4e97e860 ---------A   01710  PRINT
    0x626f4e97e8c0 ---------A   01720  PRINT
    0x626f4e97e950 ---------A   01730  GOTO 1490
    0x626f4e97eab0 ---------A T 01740  PRINT "TWO DOWN, TWO TO GO."
    0x626f4e97eb10 ---------A   01750  PRINT
    0x626f4e97eb70 ---------A   01760  PRINT
    0x626f4e97ec00 ---------A   01770  GOTO 1490
    0x626f4e97ed70 ---------A T 01780  PRINT "THREE DOWN, ONE TO GO."
    0x626f4e97f1e0 ---------A   01790  PRINT
    0x626f4e97f240 ---------A   01800  PRINT
    0x626f4e97f2f0 ---------A   01810  GOTO 1490
    0x626f4e97f470 ---------A T 01820  PRINT "YOU GOT ME, I'M GOING FAST. BUT I'LL GET YOU WHEN"
    0x626f4e97f5e0 ---------A   01830  PRINT "MY TRANSISTO&S RECUP%RA*E!"
    0x626f4e97f660 ---------A   01840  GOTO 2140
    0x626f4e97fa50 ---------A T 01850  Z=Z+1
    0x626f4e97fcd0 ---------A   01860  IF Z=4 THEN 2030
    0x626f4e980040 ---------A   01870  PRINT "I GOT YOU. IT WON'T BE LONG NOW. POST";X;"WAS HIT."
    0x626f4e9802a0 ---------A   01880  IF Z=1 THEN 1910
    0x626f4e980500 ---------A   01890  IF Z=2 THEN 1950
    0x626f4e980780 ---------A   01900  IF Z=3 THEN 1990
    0x626f4e980900 ---------A T 01910  PRINT "YOU HAVE ONLY THREE OUTPOSTS LEFT."
    0x626f4e980960 ---------A   01920  PRINT
    0x626f4e9809c0 ---------A   01930  PRINT
    0x626f4e980a60 ---------A   01940  GOTO 1420
    0x626f4e980bd0 ---------A T 01950  PRINT "YOU HAVE ONLY TWO OUTPOSTS LEFT."
    0x626f4e980c30 ---------A   01960  PRINT
    0x626f4e980c90 ---------A   01970  PRINT
    0x626f4e980d30 ---------A   01980  GOTO 1420
    0x626f4e980ea0 ---------A T 01990  PRINT "YOU HAVE ONLY ONE OUTPOST LEFT."
    0x626f4e980f00 ---------A   02000  PRINT
    0x626f4e980f60 ---------A   02010  PRINT
    0x626f4e981010 ---------A   02020  GOTO 1420
    0x626f4e981380 ---------A T 02030  PRINT "YOU'RE DEAD. YOUR LAST OUTPOST WAS AT";X;". HA, HA, HA."
    0x626f4e9814f0 ---------A   02040  PRINT "BETTER LUCK NEXT TIME."
    0x626f4e981570 ---------A   02050  GOTO 2140
    0x626f4e981960 ---------A T 02060  P=P+1
    0x626f4e981d50 ---------A   02070  N=P-1
    0x626f4e982100 ---------A   02080  FOR T=1 TO N
    0x626f4e982460 ---------A   02090  IF M=M(T) THEN 1490
    0x626f4e9825a0 ---------A   02100  NEXT T
    0x626f4e9827f0 ---------A   02110  X=M
    0x626f4e982b00 ---------A   02120  M(P)=M
    0x626f4e982b70 ---------A   02130  GOTO 1510
    0x626f4e982bc0 ---------A T 02140  END
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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
int    M_int_arr[100];                            // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
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
    // 01000 PRINT TAB(33);"BOMBARDMENT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"BOMBARDMENT");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "YOU ARE ON A BATTLEFIELD WITH 4 PLATOONS AND YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE ON A BATTLEFIELD WITH 4 PLATOONS AND YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "HAVE 25 OUTPOSTS AVAILABLE WHERE THEY MAY BE PLACED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAVE 25 OUTPOSTS AVAILABLE WHERE THEY MAY BE PLACED.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "YOU CAN ONLY PLACE ONE PLATOON AT ANY ONE OUTPOST."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU CAN ONLY PLACE ONE PLATOON AT ANY ONE OUTPOST.");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "THE COMPUTER DOES THE SAME WITH ITS FOUR PLATOONS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE COMPUTER DOES THE SAME WITH ITS FOUR PLATOONS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "THE OBJECT OF THE GAME IS TO FIRE MISSLES AT THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE OBJECT OF THE GAME IS TO FIRE MISSLES AT THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "OUTPOSTS OF THE COMPUTER.  IT WILL DO THE SAME TO YOU."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OUTPOSTS OF THE COMPUTER.  IT WILL DO THE SAME TO YOU.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "THE ONE WHO DESTROYS ALL FOUR OF THE ENEMY'S PLATOONS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE ONE WHO DESTROYS ALL FOUR OF THE ENEMY'S PLATOONS");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "FIRST IS THE WINNER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FIRST IS THE WINNER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "GOOD LUCK... AND TELL US WHERE YOU WANT THE BODIES SENT!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK... AND TELL US WHERE YOU WANT THE BODIES SENT!");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "TEAR OFF MATRIX AND USE IT TO CHECK OFF THE NUMBERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEAR OFF MATRIX AND USE IT TO CHECK OFF THE NUMBERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 FOR R=1 TO 5
    for(R_int=1;R_int<=5;R_int++){
        // 01190 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01200 NEXT R
        int dummy_1200=0; // Ignore this line.
    }; // End-For(R_int)
    // 01210 DIM M(100)
    // 01220 FOR R=1 TO 5
    for(R_int=1;R_int<=5;R_int++){
        // 01230 I=(R-1)*5+1
        I_int = (R_int-1)*5+1;
        // 01240 PRINT I,I+1,I+2,I+3,I+4
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,I_int); b2c_INT(buf,I_int+1); b2c_INT(buf,I_int+2); b2c_INT(buf,I_int+3); b2c_INT(buf,I_int+4);strcat(buf,"\n");fputs(buf,fh); };
        // 01250 NEXT R
        int dummy_1250=0; // Ignore this line.
    }; // End-For(R_int)
    // 01260 FOR R=1 TO 10
    for(R_int=1;R_int<=10;R_int++){
        // 01270 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01280 NEXT R
        int dummy_1280=0; // Ignore this line.
    }; // End-For(R_int)
    // 01290 C=INT(RND(1)*25)+1
    C_int = INT(RND(1)*25)+1;

  Lbl_01300:
    // 01300 D=INT(RND(1)*25)+1
    D_int = INT(RND(1)*25)+1;

  Lbl_01310:
    // 01310 E=INT(RND(1)*25)+1
    E_int = INT(RND(1)*25)+1;

  Lbl_01320:
    // 01320 F=INT(RND(1)*25)+1
    F_int = INT(RND(1)*25)+1;
    // 01330 IF C=D THEN 1300
    if(C_int==D_int)goto Lbl_01300;
    // 01340 IF C=E THEN 1310
    if(C_int==E_int)goto Lbl_01310;
    // 01350 IF C=F THEN 1320
    if(C_int==F_int)goto Lbl_01320;
    // 01360 IF D=E THEN 1310
    if(D_int==E_int)goto Lbl_01310;
    // 01370 IF D=F THEN 1320
    if(D_int==F_int)goto Lbl_01320;
    // 01380 IF E=F THEN 1320
    if(E_int==F_int)goto Lbl_01320;
    // 01390 PRINT "WHAT ARE YOUR FOUR POSITIONS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT ARE YOUR FOUR POSITIONS");fputs(buf,fh); };
    // 01400 INPUT G,H,K,L
    // Start of Basic INPUT statement 01400
    {
        int numargs=4;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&G_int,args,0)) ||
                (err += b2c_strtoi(&H_int,args,1)) ||
                (err += b2c_strtoi(&K_int,args,2)) ||
                (err += b2c_strtoi(&L_int,args,3)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01400
    // 01410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01420:
    // 01420 PRINT "WHERE DO YOU WISH TO FIRE YOUR MISSLE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHERE DO YOU WISH TO FIRE YOUR MISSLE");fputs(buf,fh); };
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
                (err += b2c_strtoi(&Y_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01430
    // 01440 IF Y=C THEN 1640
    if(Y_int==C_int)goto Lbl_01640;
    // 01450 IF Y=D THEN 1640
    if(Y_int==D_int)goto Lbl_01640;
    // 01460 IF Y=E THEN 1640
    if(Y_int==E_int)goto Lbl_01640;
    // 01470 IF Y=F THEN 1640
    if(Y_int==F_int)goto Lbl_01640;
    // 01480 GOTO 1560
    goto Lbl_01560;

  Lbl_01490:
    // 01490 M=INT(RND(1)*25)+1
    M_int_arr[0] = INT(RND(1)*25)+1;
    // 01500 GOTO 2060
    goto Lbl_02060;

  Lbl_01510:
    // 01510 IF X=G THEN 1850
    if(X_int==G_int)goto Lbl_01850;
    // 01520 IF X=H THEN 1850
    if(X_int==H_int)goto Lbl_01850;
    // 01530 IF X=L THEN 1850
    if(X_int==L_int)goto Lbl_01850;
    // 01540 IF X=K THEN 1850
    if(X_int==K_int)goto Lbl_01850;
    // 01550 GOTO 1600
    goto Lbl_01600;

  Lbl_01560:
    // 01560 PRINT "HA, HA YOU MISSED. MY TURN NOW:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HA, HA YOU MISSED. MY TURN NOW:");strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01580 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01590 GOTO 1490
    goto Lbl_01490;

  Lbl_01600:
    // 01600 PRINT "I MISSED YOU, YOU DIRTY RAT. I PICKED";M". YOUR TURN:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I MISSED YOU, YOU DIRTY RAT. I PICKED"); b2c_INT(buf,M_int_arr[0]);strcat(buf,". YOUR TURN:");strcat(buf,"\n");fputs(buf,fh); };
    // 01610 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01620 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01630 GOTO 1420
    goto Lbl_01420;

  Lbl_01640:
    // 01640 Q=Q+1
    Q_int = Q_int+1;
    // 01650 IF Q=4 THEN 1820
    if(Q_int==4)goto Lbl_01820;
    // 01660 PRINT "YOU GOT ONE OF MY OUTPOSTS!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU GOT ONE OF MY OUTPOSTS!");strcat(buf,"\n");fputs(buf,fh); };
    // 01670 IF Q=1 THEN 1700
    if(Q_int==1)goto Lbl_01700;
    // 01680 IF Q=2 THEN 1740
    if(Q_int==2)goto Lbl_01740;
    // 01690 IF Q=3 THEN 1780
    if(Q_int==3)goto Lbl_01780;

  Lbl_01700:
    // 01700 PRINT "ONE DOWN, THREE TO GO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONE DOWN, THREE TO GO.");strcat(buf,"\n");fputs(buf,fh); };
    // 01710 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01720 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01730 GOTO 1490
    goto Lbl_01490;

  Lbl_01740:
    // 01740 PRINT "TWO DOWN, TWO TO GO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TWO DOWN, TWO TO GO.");strcat(buf,"\n");fputs(buf,fh); };
    // 01750 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01760 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01770 GOTO 1490
    goto Lbl_01490;

  Lbl_01780:
    // 01780 PRINT "THREE DOWN, ONE TO GO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THREE DOWN, ONE TO GO.");strcat(buf,"\n");fputs(buf,fh); };
    // 01790 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01800 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01810 GOTO 1490
    goto Lbl_01490;

  Lbl_01820:
    // 01820 PRINT "YOU GOT ME, I'M GOING FAST. BUT I'LL GET YOU WHEN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU GOT ME, I'M GOING FAST. BUT I'LL GET YOU WHEN");strcat(buf,"\n");fputs(buf,fh); };
    // 01830 PRINT "MY TRANSISTO&S RECUP%RA*E!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MY TRANSISTO&S RECUP%%RA*E!");strcat(buf,"\n");fputs(buf,fh); };
    // 01840 GOTO 2140
    goto Lbl_02140;

  Lbl_01850:
    // 01850 Z=Z+1
    Z_int = Z_int+1;
    // 01860 IF Z=4 THEN 2030
    if(Z_int==4)goto Lbl_02030;
    // 01870 PRINT "I GOT YOU. IT WON'T BE LONG NOW. POST";X;"WAS HIT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I GOT YOU. IT WON'T BE LONG NOW. POST"); b2c_INT(buf,X_int);strcat(buf,"WAS HIT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01880 IF Z=1 THEN 1910
    if(Z_int==1)goto Lbl_01910;
    // 01890 IF Z=2 THEN 1950
    if(Z_int==2)goto Lbl_01950;
    // 01900 IF Z=3 THEN 1990
    if(Z_int==3)goto Lbl_01990;

  Lbl_01910:
    // 01910 PRINT "YOU HAVE ONLY THREE OUTPOSTS LEFT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE ONLY THREE OUTPOSTS LEFT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01920 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01930 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01940 GOTO 1420
    goto Lbl_01420;

  Lbl_01950:
    // 01950 PRINT "YOU HAVE ONLY TWO OUTPOSTS LEFT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE ONLY TWO OUTPOSTS LEFT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01960 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01970 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01980 GOTO 1420
    goto Lbl_01420;

  Lbl_01990:
    // 01990 PRINT "YOU HAVE ONLY ONE OUTPOST LEFT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE ONLY ONE OUTPOST LEFT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02000 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02010 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02020 GOTO 1420
    goto Lbl_01420;

  Lbl_02030:
    // 02030 PRINT "YOU'RE DEAD. YOUR LAST OUTPOST WAS AT";X;". HA, HA, HA."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU'RE DEAD. YOUR LAST OUTPOST WAS AT"); b2c_INT(buf,X_int);strcat(buf,". HA, HA, HA.");strcat(buf,"\n");fputs(buf,fh); };
    // 02040 PRINT "BETTER LUCK NEXT TIME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BETTER LUCK NEXT TIME.");strcat(buf,"\n");fputs(buf,fh); };
    // 02050 GOTO 2140
    goto Lbl_02140;

  Lbl_02060:
    // 02060 P=P+1
    P_int = P_int+1;
    // 02070 N=P-1
    N_int = P_int-1;
    // 02080 FOR T=1 TO N
    for(T_int=1;T_int<=N_int;T_int++){
        // 02090 IF M=M(T) THEN 1490
        if(M_int_arr[0]==M_int_arr[T_int])goto Lbl_01490;
        // 02100 NEXT T
        int dummy_2100=0; // Ignore this line.
    }; // End-For(T_int)
    // 02110 X=M
    X_int = M_int_arr[0];
    // 02120 M(P)=M
    M_int_arr[P_int] = M_int_arr[0];
    // 02130 GOTO 1510
    goto Lbl_01510;

  Lbl_02140:
    // 02140 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
