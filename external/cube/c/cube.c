/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/cube.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x626d0ef4f6d0 ---------A   00010  PRINT TAB(34);"CUBE"
    0x626d0ef4f670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x626d0ef402b0 ---------A   00030  PRINT : PRINT : PRINT
    0x626d0ef511b0 ---------A   00100  PRINT "DO YOU WANT TO SEE THE INSTRUCTIONS? (YES--1,NO--0)"
    0x626d0ef51aa0 ---------A   00110  INPUT B7
    0x626d0ef50500 ---------A   00120  IF B7=0 THEN 370
    0x626d0ef4fbe0 ---------A   00130  PRINT"THIS IS A GAME IN WHICH YOU WILL BE PLAYING AGAINST THE"
    0x626d0ef4fc90 ---------A   00140  PRINT"RANDOM DECISION OF THE COMPUTER. THE FIELD OF PLAY IS A"
    0x626d0ef50730 ---------A   00150  PRINT"CUBE OF SIDE 3. ANY OF THE 27 LOCATIONS CAN BE DESIGNATED"
    0x626d0ef57840 ---------A   00160  PRINT"BY INPUTING THREE NUMBERS SUCH AS 2,3,1. AT THE START,"
    0x626d0ef579c0 ---------A   00170  PRINT"YOU ARE AUTOMATICALLY AT LOCATION 1,1,1. THE OBJECT OF"
    0x626d0ef57b80 ---------A   00180  PRINT"THE GAME IS TO GET TO LOCATION 3,3,3. ONE MINOR DETAIL:"
    0x626d0ef57d40 ---------A   00190  PRINT"THE COMPUTER WILL PICK, AT RANDOM, 5 LOCATIONS AT WHICH"
    0x626d0ef57f00 ---------A   00200  PRINT"IT WILL PLANT LAND MINES. IF YOU HIT ONE OF THESE LOCATIONS"
    0x626d0ef580c0 ---------A   00210  PRINT"YOU LOSE. ONE OTHER DETAIL: YOU MAY MOVE ONLY ONE SPACE "
    0x626d0ef58280 ---------A   00220  PRINT"IN ONE DIRECTION EACH MOVE. FOR  EXAMPLE: FROM 1,1,2 YOU"
    0x626d0ef58430 ---------A   00230  PRINT"MAY MOVE TO 2,1,2 OR 1,1,3. YOU MAY NOT CHANGE"
    0x626d0ef585f0 ---------A   00240  PRINT"TWO OF THE NUMBERS ON THE SAME MOVE. IF YOU MAKE AN ILLEGAL"
    0x626d0ef58760 ---------A   00250  PRINT"MOVE, YOU LOSE AND THE COMPUTER TAKES THE MONEY YOU MAY"
    0x626d0ef58880 ---------A   00260  PRINT"HAVE BET ON THAT ROUND."
    0x626d0ef588e0 ---------A   00270  PRINT
    0x626d0ef58990 ---------A   00280  PRINT
    0x626d0ef58b00 ---------A   00290  PRINT"ALL YES OR NO QUESTIONS WILL BE ANSWERED BY A 1 FOR YES"
    0x626d0ef58c20 ---------A   00300  PRINT"OR A 0 (ZERO) FOR NO."
    0x626d0ef58cd0 ---------A   00310  PRINT
    0x626d0ef58ea0 ---------A   00320  PRINT"WHEN STATING THE AMOUNT OF A WAGER, PRINT ONLY THE NUMBER"
    0x626d0ef59010 ---------A   00330  PRINT"OF DOLLARS (EXAMPLE: 250)  YOU ARE AUTOMATICALLY STARTED WITH"
    0x626d0ef59130 ---------A   00340  PRINT"500 DOLLARS IN YOUR ACCOUNT."
    0x626d0ef591b0 ---------A   00350  PRINT
    0x626d0ef59310 ---------A   00360  PRINT "GOOD LUCK!"
    0x626d0ef595d0 ---------A T 00370  LET A1=500
    0x626d0ef59c80 ---------A T 00380  LET A=INT(3*(RND(X)))
    0x626d0ef59ed0 ---------A   00390  IF A<>0 THEN 410
    0x626d0ef5a310 ---------A   00400  LET A=3
    0x626d0ef5a900 ---------A T 00410  LET B=INT(3*(RND(X)))
    0x626d0ef5ab50 ---------A   00420  IF B<>0 THEN 440
    0x626d0ef5ad80 ---------A   00430  LET B=2
    0x626d0ef5b370 ---------A T 00440  LET C=INT(3*(RND(X)))
    0x626d0ef5b5c0 ---------A   00450  IF C<>0 THEN 470
    0x626d0ef5b7f0 ---------A   00460  LET C=3
    0x626d0ef5bde0 ---------A T 00470  LET D=INT(3*(RND(X)))
    0x626d0ef5c030 ---------A   00480  IF D<>0 THEN 500
    0x626d0ef5c260 ---------A   00490  LET D=1
    0x626d0ef5c850 ---------A T 00500  LET E=INT(3*(RND(X)))
    0x626d0ef5caa0 ---------A   00510  IF E<>0 THEN 530
    0x626d0ef5ccd0 ---------A   00520  LET E=3
    0x626d0ef5d2c0 ---------A T 00530  LET F=INT(3*(RND(X)))
    0x626d0ef5d510 ---------A   00540  IF F<>0 THEN 560
    0x626d0ef5d740 ---------A   00550  LET F=3
    0x626d0ef5dd30 ---------A T 00560  LET G=INT(3*(RND(X)))
    0x626d0ef5df80 ---------A   00570  IF G<>0 THEN 590
    0x626d0ef5e1b0 ---------A   00580  LET G=3
    0x626d0ef5e7a0 ---------A T 00590  LET H=INT(3*(RND(X)))
    0x626d0ef5e9f0 ---------A   00600  IF H<>0 THEN 620
    0x626d0ef5ec20 ---------A   00610  LET H=3
    0x626d0ef5f210 ---------A T 00620  LET I=INT(3*(RND(X)))
    0x626d0ef5f460 ---------A   00630  IF I<>0 THEN 650
    0x626d0ef5f690 ---------A   00640  LET I=2
    0x626d0ef5fc80 ---------A T 00650  LET J=INT(3*(RND(X)))
    0x626d0ef5fed0 ---------A   00660  IF J<>0 THEN 680
    0x626d0ef60100 ---------A   00670  LET J=3
    0x626d0ef606f0 ---------A T 00680  LET K=INT(3*(RND(X)))
    0x626d0ef60940 ---------A   00690  IF K<>0 THEN 710
    0x626d0ef60b70 ---------A   00700  LET K=2
    0x626d0ef61160 ---------A T 00710  LET L=INT(3*(RND(X)))
    0x626d0ef617c0 ---------A   00720  IF L<>0 THEN 740
    0x626d0ef619f0 ---------A   00730  LET L=3
    0x626d0ef61fe0 ---------A T 00740  LET M=INT(3*(RND(X)))
    0x626d0ef62230 ---------A   00750  IF M<>0 THEN 770
    0x626d0ef62460 ---------A   00760  LET M=3
    0x626d0ef62a50 ---------A T 00770  LET N=INT(3*(RND(X)))
    0x626d0ef62ca0 ---------A   00780  IF N<>0 THEN 800
    0x626d0ef62ed0 ---------A   00790  LET N=1
    0x626d0ef634c0 ---------A T 00800  LET O=INT (3*(RND(X)))
    0x626d0ef63710 ---------A   00810  IF O <>0 THEN 830
    0x626d0ef63940 ---------A   00820  LET O=3
    0x626d0ef63a90 ---------A T 00830  PRINT "WANT TO MAKE A WAGER?"
    0x626d0ef63cb0 ---------A   00840  INPUT Z
    0x626d0ef63f10 ---------A   00850  IF Z=0 THEN 920
    0x626d0ef64090 ---------A   00860  PRINT "HOW MUCH ";
    0x626d0ef642b0 ---------A T 00870  INPUT Z1
    0x626d0ef64530 ---------A   00876  IF A1<Z1 THEN 1522
    0x626d0ef64810 ---------A   00880  LET W=1
    0x626d0ef64a20 ---------A   00890  LET X=1
    0x626d0ef64cf0 ---------A   00900  LET Y=1
    0x626d0ef64d70 ---------A   00910  PRINT
    0x626d0ef64ef0 ---------A T 00920  PRINT "IT'S YOUR MOVE:  ";
    0x626d0ef65450 ---------A T 00930  INPUT P,Q,R
    0x626d0ef657d0 ---------A   00940  IF P>W+1 THEN 1030
    0x626d0ef65b50 ---------A   00950  IF P=W+1 THEN 1000
    0x626d0ef65ee0 ---------A   00960  IF Q>X+1 THEN 1030
    0x626d0ef662b0 ---------A   00970  IF Q=(X+1) THEN 1010
    0x626d0ef66670 ---------A   00980  IF R >(Y+1)  THEN 1030
    0x626d0ef66700 ---------A   00990  GOTO 1050
    0x626d0ef66a80 ---------A T 01000  IF Q>= X+1 THEN 1030
    0x626d0ef66e00 ---------A T 01010  IF R>=Y+1 THEN 1030
    0x626d0ef66ea0 ---------A   01020  GOTO 1050
    0x626d0ef67060 ---------A T 01030  PRINT:PRINT "ILLEGAL MOVE. YOU LOSE."
    0x626d0ef670e0 ---------A   01040  GOTO 1440
    0x626d0ef67310 ---------A T 01050  LET W=P
    0x626d0ef67540 ---------A   01060  LET X=Q
    0x626d0ef67770 ---------A   01070  LET Y=R
    0x626d0ef679c0 ---------A   01080  IF P=3 THEN 1100
    0x626d0ef67a40 ---------A   01090  GOTO 1130
    0x626d0ef67c90 ---------A T 01100  IF  Q=3 THEN 1120
    0x626d0ef67d10 ---------A   01110  GOTO 1130
    0x626d0ef67f60 ---------A T 01120  IF R=3 THEN 1530
    0x626d0ef681e0 ---------A T 01130  IF P=A THEN 1150
    0x626d0ef68260 ---------A   01140  GOTO 1180
    0x626d0ef684d0 ---------A T 01150  IF Q=B THEN 1170
    0x626d0ef68550 ---------A   01160  GOTO 1180
    0x626d0ef687c0 ---------A T 01170  IF R=C THEN 1400
    0x626d0ef68a40 ---------A T 01180  IF P=D THEN 1200
    0x626d0ef68ac0 ---------A   01190  GOTO 1230
    0x626d0ef68d30 ---------A T 01200  IF Q=E THEN 1220
    0x626d0ef68db0 ---------A   01210  GOTO 1230
    0x626d0ef69020 ---------A T 01220  IF  R=F THEN 1400
    0x626d0ef692a0 ---------A T 01230  IF P=G THEN 1250
    0x626d0ef69320 ---------A   01240  GOTO 1280
    0x626d0ef69590 ---------A T 01250  IF Q=H THEN 1270
    0x626d0ef69610 ---------A   01260  GOTO 1280
    0x626d0ef69880 ---------A T 01270  IF R=I THEN 1400
    0x626d0ef69b00 ---------A T 01280  IF P=J THEN 1300
    0x626d0ef69b80 ---------A   01290  GOTO 1330
    0x626d0ef69df0 ---------A T 01300  IF Q=K THEN 1320
    0x626d0ef69e70 ---------A   01310  GOTO 1330
    0x626d0ef6a0e0 ---------A T 01320  IF R=L THEN 1440
    0x626d0ef6a360 ---------A T 01330  IF P=M THEN 1350
    0x626d0ef6a3e0 ---------A   01340  GOTO 1380
    0x626d0ef6ae60 ---------A T 01350  IF Q=N THEN 1370
    0x626d0ef6aee0 ---------A   01360  GOTO 1380
    0x626d0ef6b160 ---------A T 01370  IF R=O THEN 1400
    0x626d0ef6b2e0 ---------A T 01380  PRINT "NEXT MOVE: ";
    0x626d0ef6b370 ---------A   01390  GOTO 930 
    0x626d0ef6b4c0 ---------A T 01400  PRINT"******BANG******"
    0x626d0ef6b620 ---------A   01410  PRINT "YOU LOSE!"
    0x626d0ef6b6a0 ---------A   01420  PRINT
    0x626d0ef6b720 ---------A   01430  PRINT
    0x626d0ef6b980 ---------A T 01440  IF   Z=0 THEN 1580
    0x626d0ef6ba00 ---------A   01450  PRINT 
    0x626d0ef6be20 ---------A   01460  LET Z2=A1-Z1
    0x626d0ef6c070 ---------A   01470  IF Z2>0 THEN 1500
    0x626d0ef6c1d0 ---------A   01480  PRINT "YOU BUST."
    0x626d0ef6c270 ---------A   01490  GOTO 1610
    0x626d0ef6c5c0 ---------A T 01500  PRINT " YOU NOW HAVE"; Z2; "DOLLARS."
    0x626d0ef6c800 ---------A   01510  LET A1=Z2
    0x626d0ef6c890 ---------A   01520  GOTO 1580
    0x626d0ef6ca10 ---------A T 01522  PRINT"TRIED TO FOOL ME; BET AGAIN";
    0x626d0ef6caa0 ---------A   01525  GOTO 870
    0x626d0ef6cbf0 ---------A T 01530  PRINT"CONGRATULATIONS!"
    0x626d0ef6ce50 ---------A   01540  IF Z=0 THEN 1580
    0x626d0ef6d1d0 ---------A   01550  LET Z2=A1+Z1
    0x626d0ef6d520 ---------A   01560  PRINT "YOU NOW HAVE"; Z2;"DOLLARS."
    0x626d0ef6d770 ---------A   01570  LET A1=Z2
    0x626d0ef6d8f0 ---------A T 01580  PRINT"DO YOU WANT TO TRY AGAIN ";
    0x626d0ef6db10 ---------A   01590  INPUT S
    0x626d0ef6dd80 ---------A   01600  IF S=1 THEN 380
    0x626d0ef6dee0 ---------A T 01610  PRINT "TOUGH LUCK!"
    0x626d0ef6df60 ---------A   01620  PRINT
    0x626d0ef6e0c0 ---------A   01630  PRINT "GOODBYE."
    0x626d0ef6e120 ---------A   01640  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00370      00120T
     00380      01600T
     00410      00390T
     00440      00420T
     00470      00450T
     00500      00480T
     00530      00510T
     00560      00540T
     00590      00570T
     00620      00600T
     00650      00630T
     00680      00660T
     00710      00690T
     00740      00720T
     00770      00750T
     00800      00780T
     00830      00810T
     00870      01525T
     00920      00850T
     00930      01390T
     01000      00950T
     01010      00970T
     01030      00940T, 00960T, 00980T, 01000T, 01010T
     01050      00990T, 01020T
     01100      01080T
     01120      01100T
     01130      01090T, 01110T
     01150      01130T
     01170      01150T
     01180      01140T, 01160T
     01200      01180T
     01220      01200T
     01230      01190T, 01210T
     01250      01230T
     01270      01250T
     01280      01240T, 01260T
     01300      01280T
     01320      01300T
     01330      01290T, 01310T
     01350      01330T
     01370      01350T
     01380      01340T, 01360T
     01400      01170T, 01220T, 01270T, 01370T
     01440      01040T, 01320T
     01500      01470T
     01522      00876T
     01530      01120T
     01580      01440T, 01520T, 01540T
     01610      01490T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x626d0ef4f6d0 (00010)   0x626d0ef4f6d0 (00010)   0x626d0ef6e120 (01640)   0x626d0ef6e120 (01640)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/cube.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x626d0ef4f6d0 ---------A   00010  PRINT TAB(34);"CUBE"
    0x626d0ef4f670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x626d0ef502d0 ----------   00030  PRINT 
    0x626d0ef50910 ----------        a PRINT 
    0x626d0ef402b0 ---------A        b PRINT
    0x626d0ef511b0 ---------A   00100  PRINT "DO YOU WANT TO SEE THE INSTRUCTIONS? (YES--1,NO--0)"
    0x626d0ef51aa0 ---------A   00110  INPUT B7
    0x626d0ef50500 ---------A   00120  IF B7=0 THEN 370
    0x626d0ef4fbe0 ---------A   00130  PRINT"THIS IS A GAME IN WHICH YOU WILL BE PLAYING AGAINST THE"
    0x626d0ef4fc90 ---------A   00140  PRINT"RANDOM DECISION OF THE COMPUTER. THE FIELD OF PLAY IS A"
    0x626d0ef50730 ---------A   00150  PRINT"CUBE OF SIDE 3. ANY OF THE 27 LOCATIONS CAN BE DESIGNATED"
    0x626d0ef57840 ---------A   00160  PRINT"BY INPUTING THREE NUMBERS SUCH AS 2,3,1. AT THE START,"
    0x626d0ef579c0 ---------A   00170  PRINT"YOU ARE AUTOMATICALLY AT LOCATION 1,1,1. THE OBJECT OF"
    0x626d0ef57b80 ---------A   00180  PRINT"THE GAME IS TO GET TO LOCATION 3,3,3. ONE MINOR DETAIL:"
    0x626d0ef57d40 ---------A   00190  PRINT"THE COMPUTER WILL PICK, AT RANDOM, 5 LOCATIONS AT WHICH"
    0x626d0ef57f00 ---------A   00200  PRINT"IT WILL PLANT LAND MINES. IF YOU HIT ONE OF THESE LOCATIONS"
    0x626d0ef580c0 ---------A   00210  PRINT"YOU LOSE. ONE OTHER DETAIL: YOU MAY MOVE ONLY ONE SPACE "
    0x626d0ef58280 ---------A   00220  PRINT"IN ONE DIRECTION EACH MOVE. FOR  EXAMPLE: FROM 1,1,2 YOU"
    0x626d0ef58430 ---------A   00230  PRINT"MAY MOVE TO 2,1,2 OR 1,1,3. YOU MAY NOT CHANGE"
    0x626d0ef585f0 ---------A   00240  PRINT"TWO OF THE NUMBERS ON THE SAME MOVE. IF YOU MAKE AN ILLEGAL"
    0x626d0ef58760 ---------A   00250  PRINT"MOVE, YOU LOSE AND THE COMPUTER TAKES THE MONEY YOU MAY"
    0x626d0ef58880 ---------A   00260  PRINT"HAVE BET ON THAT ROUND."
    0x626d0ef588e0 ---------A   00270  PRINT
    0x626d0ef58990 ---------A   00280  PRINT
    0x626d0ef58b00 ---------A   00290  PRINT"ALL YES OR NO QUESTIONS WILL BE ANSWERED BY A 1 FOR YES"
    0x626d0ef58c20 ---------A   00300  PRINT"OR A 0 (ZERO) FOR NO."
    0x626d0ef58cd0 ---------A   00310  PRINT
    0x626d0ef58ea0 ---------A   00320  PRINT"WHEN STATING THE AMOUNT OF A WAGER, PRINT ONLY THE NUMBER"
    0x626d0ef59010 ---------A   00330  PRINT"OF DOLLARS (EXAMPLE: 250)  YOU ARE AUTOMATICALLY STARTED WITH"
    0x626d0ef59130 ---------A   00340  PRINT"500 DOLLARS IN YOUR ACCOUNT."
    0x626d0ef591b0 ---------A   00350  PRINT
    0x626d0ef59310 ---------A   00360  PRINT "GOOD LUCK!"
    0x626d0ef595d0 ---------A T 00370  LET A1=500
    0x626d0ef59c80 ---------A T 00380  LET A=INT(3*(RND(X)))
    0x626d0ef59ed0 ---------A   00390  IF A<>0 THEN 410
    0x626d0ef5a310 ---------A   00400  LET A=3
    0x626d0ef5a900 ---------A T 00410  LET B=INT(3*(RND(X)))
    0x626d0ef5ab50 ---------A   00420  IF B<>0 THEN 440
    0x626d0ef5ad80 ---------A   00430  LET B=2
    0x626d0ef5b370 ---------A T 00440  LET C=INT(3*(RND(X)))
    0x626d0ef5b5c0 ---------A   00450  IF C<>0 THEN 470
    0x626d0ef5b7f0 ---------A   00460  LET C=3
    0x626d0ef5bde0 ---------A T 00470  LET D=INT(3*(RND(X)))
    0x626d0ef5c030 ---------A   00480  IF D<>0 THEN 500
    0x626d0ef5c260 ---------A   00490  LET D=1
    0x626d0ef5c850 ---------A T 00500  LET E=INT(3*(RND(X)))
    0x626d0ef5caa0 ---------A   00510  IF E<>0 THEN 530
    0x626d0ef5ccd0 ---------A   00520  LET E=3
    0x626d0ef5d2c0 ---------A T 00530  LET F=INT(3*(RND(X)))
    0x626d0ef5d510 ---------A   00540  IF F<>0 THEN 560
    0x626d0ef5d740 ---------A   00550  LET F=3
    0x626d0ef5dd30 ---------A T 00560  LET G=INT(3*(RND(X)))
    0x626d0ef5df80 ---------A   00570  IF G<>0 THEN 590
    0x626d0ef5e1b0 ---------A   00580  LET G=3
    0x626d0ef5e7a0 ---------A T 00590  LET H=INT(3*(RND(X)))
    0x626d0ef5e9f0 ---------A   00600  IF H<>0 THEN 620
    0x626d0ef5ec20 ---------A   00610  LET H=3
    0x626d0ef5f210 ---------A T 00620  LET I=INT(3*(RND(X)))
    0x626d0ef5f460 ---------A   00630  IF I<>0 THEN 650
    0x626d0ef5f690 ---------A   00640  LET I=2
    0x626d0ef5fc80 ---------A T 00650  LET J=INT(3*(RND(X)))
    0x626d0ef5fed0 ---------A   00660  IF J<>0 THEN 680
    0x626d0ef60100 ---------A   00670  LET J=3
    0x626d0ef606f0 ---------A T 00680  LET K=INT(3*(RND(X)))
    0x626d0ef60940 ---------A   00690  IF K<>0 THEN 710
    0x626d0ef60b70 ---------A   00700  LET K=2
    0x626d0ef61160 ---------A T 00710  LET L=INT(3*(RND(X)))
    0x626d0ef617c0 ---------A   00720  IF L<>0 THEN 740
    0x626d0ef619f0 ---------A   00730  LET L=3
    0x626d0ef61fe0 ---------A T 00740  LET M=INT(3*(RND(X)))
    0x626d0ef62230 ---------A   00750  IF M<>0 THEN 770
    0x626d0ef62460 ---------A   00760  LET M=3
    0x626d0ef62a50 ---------A T 00770  LET N=INT(3*(RND(X)))
    0x626d0ef62ca0 ---------A   00780  IF N<>0 THEN 800
    0x626d0ef62ed0 ---------A   00790  LET N=1
    0x626d0ef634c0 ---------A T 00800  LET O=INT (3*(RND(X)))
    0x626d0ef63710 ---------A   00810  IF O <>0 THEN 830
    0x626d0ef63940 ---------A   00820  LET O=3
    0x626d0ef63a90 ---------A T 00830  PRINT "WANT TO MAKE A WAGER?"
    0x626d0ef63cb0 ---------A   00840  INPUT Z
    0x626d0ef63f10 ---------A   00850  IF Z=0 THEN 920
    0x626d0ef64090 ---------A   00860  PRINT "HOW MUCH ";
    0x626d0ef642b0 ---------A T 00870  INPUT Z1
    0x626d0ef64530 ---------A   00876  IF A1<Z1 THEN 1522
    0x626d0ef64810 ---------A   00880  LET W=1
    0x626d0ef64a20 ---------A   00890  LET X=1
    0x626d0ef64cf0 ---------A   00900  LET Y=1
    0x626d0ef64d70 ---------A   00910  PRINT
    0x626d0ef64ef0 ---------A T 00920  PRINT "IT'S YOUR MOVE:  ";
    0x626d0ef65450 ---------A T 00930  INPUT P,Q,R
    0x626d0ef657d0 ---------A   00940  IF P>W+1 THEN 1030
    0x626d0ef65b50 ---------A   00950  IF P=W+1 THEN 1000
    0x626d0ef65ee0 ---------A   00960  IF Q>X+1 THEN 1030
    0x626d0ef662b0 ---------A   00970  IF Q=(X+1) THEN 1010
    0x626d0ef66670 ---------A   00980  IF R >(Y+1)  THEN 1030
    0x626d0ef66700 ---------A   00990  GOTO 1050
    0x626d0ef66a80 ---------A T 01000  IF Q>= X+1 THEN 1030
    0x626d0ef66e00 ---------A T 01010  IF R>=Y+1 THEN 1030
    0x626d0ef66ea0 ---------A   01020  GOTO 1050
    0x626d0ef66ef0 ---------- T 01030  PRINT
    0x626d0ef67060 ---------A T      a PRINT "ILLEGAL MOVE. YOU LOSE."
    0x626d0ef670e0 ---------A   01040  GOTO 1440
    0x626d0ef67310 ---------A T 01050  LET W=P
    0x626d0ef67540 ---------A   01060  LET X=Q
    0x626d0ef67770 ---------A   01070  LET Y=R
    0x626d0ef679c0 ---------A   01080  IF P=3 THEN 1100
    0x626d0ef67a40 ---------A   01090  GOTO 1130
    0x626d0ef67c90 ---------A T 01100  IF  Q=3 THEN 1120
    0x626d0ef67d10 ---------A   01110  GOTO 1130
    0x626d0ef67f60 ---------A T 01120  IF R=3 THEN 1530
    0x626d0ef681e0 ---------A T 01130  IF P=A THEN 1150
    0x626d0ef68260 ---------A   01140  GOTO 1180
    0x626d0ef684d0 ---------A T 01150  IF Q=B THEN 1170
    0x626d0ef68550 ---------A   01160  GOTO 1180
    0x626d0ef687c0 ---------A T 01170  IF R=C THEN 1400
    0x626d0ef68a40 ---------A T 01180  IF P=D THEN 1200
    0x626d0ef68ac0 ---------A   01190  GOTO 1230
    0x626d0ef68d30 ---------A T 01200  IF Q=E THEN 1220
    0x626d0ef68db0 ---------A   01210  GOTO 1230
    0x626d0ef69020 ---------A T 01220  IF  R=F THEN 1400
    0x626d0ef692a0 ---------A T 01230  IF P=G THEN 1250
    0x626d0ef69320 ---------A   01240  GOTO 1280
    0x626d0ef69590 ---------A T 01250  IF Q=H THEN 1270
    0x626d0ef69610 ---------A   01260  GOTO 1280
    0x626d0ef69880 ---------A T 01270  IF R=I THEN 1400
    0x626d0ef69b00 ---------A T 01280  IF P=J THEN 1300
    0x626d0ef69b80 ---------A   01290  GOTO 1330
    0x626d0ef69df0 ---------A T 01300  IF Q=K THEN 1320
    0x626d0ef69e70 ---------A   01310  GOTO 1330
    0x626d0ef6a0e0 ---------A T 01320  IF R=L THEN 1440
    0x626d0ef6a360 ---------A T 01330  IF P=M THEN 1350
    0x626d0ef6a3e0 ---------A   01340  GOTO 1380
    0x626d0ef6ae60 ---------A T 01350  IF Q=N THEN 1370
    0x626d0ef6aee0 ---------A   01360  GOTO 1380
    0x626d0ef6b160 ---------A T 01370  IF R=O THEN 1400
    0x626d0ef6b2e0 ---------A T 01380  PRINT "NEXT MOVE: ";
    0x626d0ef6b370 ---------A   01390  GOTO 930 
    0x626d0ef6b4c0 ---------A T 01400  PRINT"******BANG******"
    0x626d0ef6b620 ---------A   01410  PRINT "YOU LOSE!"
    0x626d0ef6b6a0 ---------A   01420  PRINT
    0x626d0ef6b720 ---------A   01430  PRINT
    0x626d0ef6b980 ---------A T 01440  IF   Z=0 THEN 1580
    0x626d0ef6ba00 ---------A   01450  PRINT 
    0x626d0ef6be20 ---------A   01460  LET Z2=A1-Z1
    0x626d0ef6c070 ---------A   01470  IF Z2>0 THEN 1500
    0x626d0ef6c1d0 ---------A   01480  PRINT "YOU BUST."
    0x626d0ef6c270 ---------A   01490  GOTO 1610
    0x626d0ef6c5c0 ---------A T 01500  PRINT " YOU NOW HAVE"; Z2; "DOLLARS."
    0x626d0ef6c800 ---------A   01510  LET A1=Z2
    0x626d0ef6c890 ---------A   01520  GOTO 1580
    0x626d0ef6ca10 ---------A T 01522  PRINT"TRIED TO FOOL ME; BET AGAIN";
    0x626d0ef6caa0 ---------A   01525  GOTO 870
    0x626d0ef6cbf0 ---------A T 01530  PRINT"CONGRATULATIONS!"
    0x626d0ef6ce50 ---------A   01540  IF Z=0 THEN 1580
    0x626d0ef6d1d0 ---------A   01550  LET Z2=A1+Z1
    0x626d0ef6d520 ---------A   01560  PRINT "YOU NOW HAVE"; Z2;"DOLLARS."
    0x626d0ef6d770 ---------A   01570  LET A1=Z2
    0x626d0ef6d8f0 ---------A T 01580  PRINT"DO YOU WANT TO TRY AGAIN ";
    0x626d0ef6db10 ---------A   01590  INPUT S
    0x626d0ef6dd80 ---------A   01600  IF S=1 THEN 380
    0x626d0ef6dee0 ---------A T 01610  PRINT "TOUGH LUCK!"
    0x626d0ef6df60 ---------A   01620  PRINT
    0x626d0ef6e0c0 ---------A   01630  PRINT "GOODBYE."
    0x626d0ef6e120 ---------A   01640  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/cube.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x626d0ef4f6d0 ---------A T 01000  PRINT TAB(34);"CUBE"
    0x626d0ef4f670 ---------A T 01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x626d0ef502d0 ----------   01020  PRINT 
    0x626d0ef50910 ---------- T 01030  PRINT 
    0x626d0ef402b0 ---------A   01040  PRINT
    0x626d0ef511b0 ---------A T 01050  PRINT "DO YOU WANT TO SEE THE INSTRUCTIONS? (YES--1,NO--0)"
    0x626d0ef51aa0 ---------A   01060  INPUT B7
    0x626d0ef50500 ---------A   01070  IF B7=0 THEN 1320
    0x626d0ef4fbe0 ---------A   01080  PRINT"THIS IS A GAME IN WHICH YOU WILL BE PLAYING AGAINST THE"
    0x626d0ef4fc90 ---------A   01090  PRINT"RANDOM DECISION OF THE COMPUTER. THE FIELD OF PLAY IS A"
    0x626d0ef50730 ---------A T 01100  PRINT"CUBE OF SIDE 3. ANY OF THE 27 LOCATIONS CAN BE DESIGNATED"
    0x626d0ef57840 ---------A   01110  PRINT"BY INPUTING THREE NUMBERS SUCH AS 2,3,1. AT THE START,"
    0x626d0ef579c0 ---------A T 01120  PRINT"YOU ARE AUTOMATICALLY AT LOCATION 1,1,1. THE OBJECT OF"
    0x626d0ef57b80 ---------A T 01130  PRINT"THE GAME IS TO GET TO LOCATION 3,3,3. ONE MINOR DETAIL:"
    0x626d0ef57d40 ---------A   01140  PRINT"THE COMPUTER WILL PICK, AT RANDOM, 5 LOCATIONS AT WHICH"
    0x626d0ef57f00 ---------A T 01150  PRINT"IT WILL PLANT LAND MINES. IF YOU HIT ONE OF THESE LOCATIONS"
    0x626d0ef580c0 ---------A   01160  PRINT"YOU LOSE. ONE OTHER DETAIL: YOU MAY MOVE ONLY ONE SPACE "
    0x626d0ef58280 ---------A T 01170  PRINT"IN ONE DIRECTION EACH MOVE. FOR  EXAMPLE: FROM 1,1,2 YOU"
    0x626d0ef58430 ---------A T 01180  PRINT"MAY MOVE TO 2,1,2 OR 1,1,3. YOU MAY NOT CHANGE"
    0x626d0ef585f0 ---------A   01190  PRINT"TWO OF THE NUMBERS ON THE SAME MOVE. IF YOU MAKE AN ILLEGAL"
    0x626d0ef58760 ---------A T 01200  PRINT"MOVE, YOU LOSE AND THE COMPUTER TAKES THE MONEY YOU MAY"
    0x626d0ef58880 ---------A   01210  PRINT"HAVE BET ON THAT ROUND."
    0x626d0ef588e0 ---------A T 01220  PRINT
    0x626d0ef58990 ---------A T 01230  PRINT
    0x626d0ef58b00 ---------A   01240  PRINT"ALL YES OR NO QUESTIONS WILL BE ANSWERED BY A 1 FOR YES"
    0x626d0ef58c20 ---------A T 01250  PRINT"OR A 0 (ZERO) FOR NO."
    0x626d0ef58cd0 ---------A   01260  PRINT
    0x626d0ef58ea0 ---------A T 01270  PRINT"WHEN STATING THE AMOUNT OF A WAGER, PRINT ONLY THE NUMBER"
    0x626d0ef59010 ---------A T 01280  PRINT"OF DOLLARS (EXAMPLE: 250)  YOU ARE AUTOMATICALLY STARTED WITH"
    0x626d0ef59130 ---------A   01290  PRINT"500 DOLLARS IN YOUR ACCOUNT."
    0x626d0ef591b0 ---------A T 01300  PRINT
    0x626d0ef59310 ---------A   01310  PRINT "GOOD LUCK!"
    0x626d0ef595d0 ---------A T 01320  LET A1=500
    0x626d0ef59c80 ---------A T 01330  LET A=INT(3*(RND(X)))
    0x626d0ef59ed0 ---------A   01340  IF A<>0 THEN 1360
    0x626d0ef5a310 ---------A T 01350  LET A=3
    0x626d0ef5a900 ---------A   01360  LET B=INT(3*(RND(X)))
    0x626d0ef5ab50 ---------A T 01370  IF B<>0 THEN 1390
    0x626d0ef5ad80 ---------A T 01380  LET B=2
    0x626d0ef5b370 ---------A   01390  LET C=INT(3*(RND(X)))
    0x626d0ef5b5c0 ---------A T 01400  IF C<>0 THEN 1420
    0x626d0ef5b7f0 ---------A   01410  LET C=3
    0x626d0ef5bde0 ---------A   01420  LET D=INT(3*(RND(X)))
    0x626d0ef5c030 ---------A   01430  IF D<>0 THEN 1450
    0x626d0ef5c260 ---------A T 01440  LET D=1
    0x626d0ef5c850 ---------A   01450  LET E=INT(3*(RND(X)))
    0x626d0ef5caa0 ---------A   01460  IF E<>0 THEN 1480
    0x626d0ef5ccd0 ---------A   01470  LET E=3
    0x626d0ef5d2c0 ---------A   01480  LET F=INT(3*(RND(X)))
    0x626d0ef5d510 ---------A   01490  IF F<>0 THEN 1510
    0x626d0ef5d740 ---------A T 01500  LET F=3
    0x626d0ef5dd30 ---------A   01510  LET G=INT(3*(RND(X)))
    0x626d0ef5df80 ---------A   01520  IF G<>0 THEN 1540
    0x626d0ef5e1b0 ---------A T 01530  LET G=3
    0x626d0ef5e7a0 ---------A   01540  LET H=INT(3*(RND(X)))
    0x626d0ef5e9f0 ---------A   01550  IF H<>0 THEN 1570
    0x626d0ef5ec20 ---------A   01560  LET H=3
    0x626d0ef5f210 ---------A   01570  LET I=INT(3*(RND(X)))
    0x626d0ef5f460 ---------A T 01580  IF I<>0 THEN 1600
    0x626d0ef5f690 ---------A   01590  LET I=2
    0x626d0ef5fc80 ---------A   01600  LET J=INT(3*(RND(X)))
    0x626d0ef5fed0 ---------A T 01610  IF J<>0 THEN 1630
    0x626d0ef60100 ---------A   01620  LET J=3
    0x626d0ef606f0 ---------A   01630  LET K=INT(3*(RND(X)))
    0x626d0ef60940 ---------A   01640  IF K<>0 THEN 1660
    0x626d0ef60b70 ---------A   01650  LET K=2
    0x626d0ef61160 ---------A   01660  LET L=INT(3*(RND(X)))
    0x626d0ef617c0 ---------A   01670  IF L<>0 THEN 1690
    0x626d0ef619f0 ---------A   01680  LET L=3
    0x626d0ef61fe0 ---------A   01690  LET M=INT(3*(RND(X)))
    0x626d0ef62230 ---------A   01700  IF M<>0 THEN 1720
    0x626d0ef62460 ---------A   01710  LET M=3
    0x626d0ef62a50 ---------A   01720  LET N=INT(3*(RND(X)))
    0x626d0ef62ca0 ---------A   01730  IF N<>0 THEN 1750
    0x626d0ef62ed0 ---------A   01740  LET N=1
    0x626d0ef634c0 ---------A   01750  LET O=INT (3*(RND(X)))
    0x626d0ef63710 ---------A   01760  IF O <>0 THEN 1780
    0x626d0ef63940 ---------A   01770  LET O=3
    0x626d0ef63a90 ---------A   01780  PRINT "WANT TO MAKE A WAGER?"
    0x626d0ef63cb0 ---------A   01790  INPUT Z
    0x626d0ef63f10 ---------A   01800  IF Z=0 THEN 1880
    0x626d0ef64090 ---------A   01810  PRINT "HOW MUCH ";
    0x626d0ef642b0 ---------A   01820  INPUT Z1
    0x626d0ef64530 ---------A   01830  IF A1<Z1 THEN 2500
    0x626d0ef64810 ---------A   01840  LET W=1
    0x626d0ef64a20 ---------A   01850  LET X=1
    0x626d0ef64cf0 ---------A   01860  LET Y=1
    0x626d0ef64d70 ---------A   01870  PRINT
    0x626d0ef64ef0 ---------A   01880  PRINT "IT'S YOUR MOVE:  ";
    0x626d0ef65450 ---------A   01890  INPUT P,Q,R
    0x626d0ef657d0 ---------A   01900  IF P>W+1 THEN 2000
    0x626d0ef65b50 ---------A   01910  IF P=W+1 THEN 1960
    0x626d0ef65ee0 ---------A   01920  IF Q>X+1 THEN 2000
    0x626d0ef662b0 ---------A   01930  IF Q=(X+1) THEN 1970
    0x626d0ef66670 ---------A   01940  IF R >(Y+1)  THEN 2000
    0x626d0ef66700 ---------A   01950  GOTO 2020
    0x626d0ef66a80 ---------A   01960  IF Q>= X+1 THEN 2000
    0x626d0ef66e00 ---------A   01970  IF R>=Y+1 THEN 2000
    0x626d0ef66ea0 ---------A   01980  GOTO 2020
    0x626d0ef66ef0 ----------   01990  PRINT
    0x626d0ef67060 ---------A   02000  PRINT "ILLEGAL MOVE. YOU LOSE."
    0x626d0ef670e0 ---------A   02010  GOTO 2410
    0x626d0ef67310 ---------A   02020  LET W=P
    0x626d0ef67540 ---------A   02030  LET X=Q
    0x626d0ef67770 ---------A   02040  LET Y=R
    0x626d0ef679c0 ---------A   02050  IF P=3 THEN 2070
    0x626d0ef67a40 ---------A   02060  GOTO 2100
    0x626d0ef67c90 ---------A   02070  IF  Q=3 THEN 2090
    0x626d0ef67d10 ---------A   02080  GOTO 2100
    0x626d0ef67f60 ---------A   02090  IF R=3 THEN 2520
    0x626d0ef681e0 ---------A   02100  IF P=A THEN 2120
    0x626d0ef68260 ---------A   02110  GOTO 2150
    0x626d0ef684d0 ---------A   02120  IF Q=B THEN 2140
    0x626d0ef68550 ---------A   02130  GOTO 2150
    0x626d0ef687c0 ---------A   02140  IF R=C THEN 2370
    0x626d0ef68a40 ---------A   02150  IF P=D THEN 2170
    0x626d0ef68ac0 ---------A   02160  GOTO 2200
    0x626d0ef68d30 ---------A   02170  IF Q=E THEN 2190
    0x626d0ef68db0 ---------A   02180  GOTO 2200
    0x626d0ef69020 ---------A   02190  IF  R=F THEN 2370
    0x626d0ef692a0 ---------A   02200  IF P=G THEN 2220
    0x626d0ef69320 ---------A   02210  GOTO 2250
    0x626d0ef69590 ---------A   02220  IF Q=H THEN 2240
    0x626d0ef69610 ---------A   02230  GOTO 2250
    0x626d0ef69880 ---------A   02240  IF R=I THEN 2370
    0x626d0ef69b00 ---------A   02250  IF P=J THEN 2270
    0x626d0ef69b80 ---------A   02260  GOTO 2300
    0x626d0ef69df0 ---------A   02270  IF Q=K THEN 2290
    0x626d0ef69e70 ---------A   02280  GOTO 2300
    0x626d0ef6a0e0 ---------A   02290  IF R=L THEN 2410
    0x626d0ef6a360 ---------A   02300  IF P=M THEN 2320
    0x626d0ef6a3e0 ---------A   02310  GOTO 2350
    0x626d0ef6ae60 ---------A   02320  IF Q=N THEN 2340
    0x626d0ef6aee0 ---------A   02330  GOTO 2350
    0x626d0ef6b160 ---------A   02340  IF R=O THEN 2370
    0x626d0ef6b2e0 ---------A   02350  PRINT "NEXT MOVE: ";
    0x626d0ef6b370 ---------A   02360  GOTO 1890 
    0x626d0ef6b4c0 ---------A   02370  PRINT"******BANG******"
    0x626d0ef6b620 ---------A   02380  PRINT "YOU LOSE!"
    0x626d0ef6b6a0 ---------A   02390  PRINT
    0x626d0ef6b720 ---------A   02400  PRINT
    0x626d0ef6b980 ---------A   02410  IF   Z=0 THEN 2570
    0x626d0ef6ba00 ---------A   02420  PRINT 
    0x626d0ef6be20 ---------A   02430  LET Z2=A1-Z1
    0x626d0ef6c070 ---------A   02440  IF Z2>0 THEN 2470
    0x626d0ef6c1d0 ---------A   02450  PRINT "YOU BUST."
    0x626d0ef6c270 ---------A   02460  GOTO 2600
    0x626d0ef6c5c0 ---------A   02470  PRINT " YOU NOW HAVE"; Z2; "DOLLARS."
    0x626d0ef6c800 ---------A   02480  LET A1=Z2
    0x626d0ef6c890 ---------A   02490  GOTO 2570
    0x626d0ef6ca10 ---------A   02500  PRINT"TRIED TO FOOL ME; BET AGAIN";
    0x626d0ef6caa0 ---------A   02510  GOTO 1820
    0x626d0ef6cbf0 ---------A   02520  PRINT"CONGRATULATIONS!"
    0x626d0ef6ce50 ---------A   02530  IF Z=0 THEN 2570
    0x626d0ef6d1d0 ---------A   02540  LET Z2=A1+Z1
    0x626d0ef6d520 ---------A   02550  PRINT "YOU NOW HAVE"; Z2;"DOLLARS."
    0x626d0ef6d770 ---------A   02560  LET A1=Z2
    0x626d0ef6d8f0 ---------A   02570  PRINT"DO YOU WANT TO TRY AGAIN ";
    0x626d0ef6db10 ---------A   02580  INPUT S
    0x626d0ef6dd80 ---------A   02590  IF S=1 THEN 1330
    0x626d0ef6dee0 ---------A   02600  PRINT "TOUGH LUCK!"
    0x626d0ef6df60 ---------A   02610  PRINT
    0x626d0ef6e0c0 ---------A   02620  PRINT "GOODBYE."
    0x626d0ef6e120 ---------A   02630  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02630 - 10000    7380 

 */



/*
 *  Symbol Table Listing for 'basic/cube.bas'
 *
    A                        Integer     
    A1                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B7                       Integer     
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
    O                        Integer     
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
    W                        Integer     
    X                        Integer     
    Y                        Integer     
    Z                        Integer     
    Z1                       Integer     
    Z2                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/cube.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x626d0ef4f6d0 ---------A   01000  PRINT TAB(34);"CUBE"
    0x626d0ef4f670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x626d0ef502d0 ---------A   01020  PRINT 
    0x626d0ef50910 ---------A   01030  PRINT 
    0x626d0ef402b0 ---------A   01040  PRINT
    0x626d0ef511b0 ---------A   01050  PRINT "DO YOU WANT TO SEE THE INSTRUCTIONS? (YES--1,NO--0)"
    0x626d0ef51aa0 ---------A   01060  INPUT B7
    0x626d0ef50500 ---------A   01070  IF B7=0 THEN 1320
    0x626d0ef4fbe0 ---------A   01080  PRINT"THIS IS A GAME IN WHICH YOU WILL BE PLAYING AGAINST THE"
    0x626d0ef4fc90 ---------A   01090  PRINT"RANDOM DECISION OF THE COMPUTER. THE FIELD OF PLAY IS A"
    0x626d0ef50730 ---------A   01100  PRINT"CUBE OF SIDE 3. ANY OF THE 27 LOCATIONS CAN BE DESIGNATED"
    0x626d0ef57840 ---------A   01110  PRINT"BY INPUTING THREE NUMBERS SUCH AS 2,3,1. AT THE START,"
    0x626d0ef579c0 ---------A   01120  PRINT"YOU ARE AUTOMATICALLY AT LOCATION 1,1,1. THE OBJECT OF"
    0x626d0ef57b80 ---------A   01130  PRINT"THE GAME IS TO GET TO LOCATION 3,3,3. ONE MINOR DETAIL:"
    0x626d0ef57d40 ---------A   01140  PRINT"THE COMPUTER WILL PICK, AT RANDOM, 5 LOCATIONS AT WHICH"
    0x626d0ef57f00 ---------A   01150  PRINT"IT WILL PLANT LAND MINES. IF YOU HIT ONE OF THESE LOCATIONS"
    0x626d0ef580c0 ---------A   01160  PRINT"YOU LOSE. ONE OTHER DETAIL: YOU MAY MOVE ONLY ONE SPACE "
    0x626d0ef58280 ---------A   01170  PRINT"IN ONE DIRECTION EACH MOVE. FOR  EXAMPLE: FROM 1,1,2 YOU"
    0x626d0ef58430 ---------A   01180  PRINT"MAY MOVE TO 2,1,2 OR 1,1,3. YOU MAY NOT CHANGE"
    0x626d0ef585f0 ---------A   01190  PRINT"TWO OF THE NUMBERS ON THE SAME MOVE. IF YOU MAKE AN ILLEGAL"
    0x626d0ef58760 ---------A   01200  PRINT"MOVE, YOU LOSE AND THE COMPUTER TAKES THE MONEY YOU MAY"
    0x626d0ef58880 ---------A   01210  PRINT"HAVE BET ON THAT ROUND."
    0x626d0ef588e0 ---------A   01220  PRINT
    0x626d0ef58990 ---------A   01230  PRINT
    0x626d0ef58b00 ---------A   01240  PRINT"ALL YES OR NO QUESTIONS WILL BE ANSWERED BY A 1 FOR YES"
    0x626d0ef58c20 ---------A   01250  PRINT"OR A 0 (ZERO) FOR NO."
    0x626d0ef58cd0 ---------A   01260  PRINT
    0x626d0ef58ea0 ---------A   01270  PRINT"WHEN STATING THE AMOUNT OF A WAGER, PRINT ONLY THE NUMBER"
    0x626d0ef59010 ---------A   01280  PRINT"OF DOLLARS (EXAMPLE: 250)  YOU ARE AUTOMATICALLY STARTED WITH"
    0x626d0ef59130 ---------A   01290  PRINT"500 DOLLARS IN YOUR ACCOUNT."
    0x626d0ef591b0 ---------A   01300  PRINT
    0x626d0ef59310 ---------A   01310  PRINT "GOOD LUCK!"
    0x626d0ef595d0 ---------A T 01320  LET A1=500
    0x626d0ef59c80 ---------A T 01330  LET A=INT(3*(RND(X)))
    0x626d0ef59ed0 ---------A   01340  IF A<>0 THEN 1360
    0x626d0ef5a310 ---------A   01350  LET A=3
    0x626d0ef5a900 ---------A T 01360  LET B=INT(3*(RND(X)))
    0x626d0ef5ab50 ---------A   01370  IF B<>0 THEN 1390
    0x626d0ef5ad80 ---------A   01380  LET B=2
    0x626d0ef5b370 ---------A T 01390  LET C=INT(3*(RND(X)))
    0x626d0ef5b5c0 ---------A   01400  IF C<>0 THEN 1420
    0x626d0ef5b7f0 ---------A   01410  LET C=3
    0x626d0ef5bde0 ---------A T 01420  LET D=INT(3*(RND(X)))
    0x626d0ef5c030 ---------A   01430  IF D<>0 THEN 1450
    0x626d0ef5c260 ---------A   01440  LET D=1
    0x626d0ef5c850 ---------A T 01450  LET E=INT(3*(RND(X)))
    0x626d0ef5caa0 ---------A   01460  IF E<>0 THEN 1480
    0x626d0ef5ccd0 ---------A   01470  LET E=3
    0x626d0ef5d2c0 ---------A T 01480  LET F=INT(3*(RND(X)))
    0x626d0ef5d510 ---------A   01490  IF F<>0 THEN 1510
    0x626d0ef5d740 ---------A   01500  LET F=3
    0x626d0ef5dd30 ---------A T 01510  LET G=INT(3*(RND(X)))
    0x626d0ef5df80 ---------A   01520  IF G<>0 THEN 1540
    0x626d0ef5e1b0 ---------A   01530  LET G=3
    0x626d0ef5e7a0 ---------A T 01540  LET H=INT(3*(RND(X)))
    0x626d0ef5e9f0 ---------A   01550  IF H<>0 THEN 1570
    0x626d0ef5ec20 ---------A   01560  LET H=3
    0x626d0ef5f210 ---------A T 01570  LET I=INT(3*(RND(X)))
    0x626d0ef5f460 ---------A   01580  IF I<>0 THEN 1600
    0x626d0ef5f690 ---------A   01590  LET I=2
    0x626d0ef5fc80 ---------A T 01600  LET J=INT(3*(RND(X)))
    0x626d0ef5fed0 ---------A   01610  IF J<>0 THEN 1630
    0x626d0ef60100 ---------A   01620  LET J=3
    0x626d0ef606f0 ---------A T 01630  LET K=INT(3*(RND(X)))
    0x626d0ef60940 ---------A   01640  IF K<>0 THEN 1660
    0x626d0ef60b70 ---------A   01650  LET K=2
    0x626d0ef61160 ---------A T 01660  LET L=INT(3*(RND(X)))
    0x626d0ef617c0 ---------A   01670  IF L<>0 THEN 1690
    0x626d0ef619f0 ---------A   01680  LET L=3
    0x626d0ef61fe0 ---------A T 01690  LET M=INT(3*(RND(X)))
    0x626d0ef62230 ---------A   01700  IF M<>0 THEN 1720
    0x626d0ef62460 ---------A   01710  LET M=3
    0x626d0ef62a50 ---------A T 01720  LET N=INT(3*(RND(X)))
    0x626d0ef62ca0 ---------A   01730  IF N<>0 THEN 1750
    0x626d0ef62ed0 ---------A   01740  LET N=1
    0x626d0ef634c0 ---------A T 01750  LET O=INT (3*(RND(X)))
    0x626d0ef63710 ---------A   01760  IF O <>0 THEN 1780
    0x626d0ef63940 ---------A   01770  LET O=3
    0x626d0ef63a90 ---------A T 01780  PRINT "WANT TO MAKE A WAGER?"
    0x626d0ef63cb0 ---------A   01790  INPUT Z
    0x626d0ef63f10 ---------A   01800  IF Z=0 THEN 1880
    0x626d0ef64090 ---------A   01810  PRINT "HOW MUCH ";
    0x626d0ef642b0 ---------A T 01820  INPUT Z1
    0x626d0ef64530 ---------A   01830  IF A1<Z1 THEN 2490
    0x626d0ef64810 ---------A   01840  LET W=1
    0x626d0ef64a20 ---------A   01850  LET X=1
    0x626d0ef64cf0 ---------A   01860  LET Y=1
    0x626d0ef64d70 ---------A   01870  PRINT
    0x626d0ef64ef0 ---------A T 01880  PRINT "IT'S YOUR MOVE:  ";
    0x626d0ef65450 ---------A T 01890  INPUT P,Q,R
    0x626d0ef657d0 ---------A   01900  IF P>W+1 THEN 1990
    0x626d0ef65b50 ---------A   01910  IF P=W+1 THEN 1960
    0x626d0ef65ee0 ---------A   01920  IF Q>X+1 THEN 1990
    0x626d0ef662b0 ---------A   01930  IF Q=(X+1) THEN 1970
    0x626d0ef66670 ---------A   01940  IF R >(Y+1)  THEN 1990
    0x626d0ef66700 ---------A   01950  GOTO 2010
    0x626d0ef66a80 ---------A T 01960  IF Q>= X+1 THEN 1990
    0x626d0ef66e00 ---------A T 01970  IF R>=Y+1 THEN 1990
    0x626d0ef66ea0 ---------A   01980  GOTO 2010
    0x626d0ef67060 ---------A T 01990  PRINT "ILLEGAL MOVE. YOU LOSE."
    0x626d0ef670e0 ---------A   02000  GOTO 2400
    0x626d0ef67310 ---------A T 02010  LET W=P
    0x626d0ef67540 ---------A   02020  LET X=Q
    0x626d0ef67770 ---------A   02030  LET Y=R
    0x626d0ef679c0 ---------A   02040  IF P=3 THEN 2060
    0x626d0ef67a40 ---------A   02050  GOTO 2090
    0x626d0ef67c90 ---------A T 02060  IF  Q=3 THEN 2080
    0x626d0ef67d10 ---------A   02070  GOTO 2090
    0x626d0ef67f60 ---------A T 02080  IF R=3 THEN 2510
    0x626d0ef681e0 ---------A T 02090  IF P=A THEN 2110
    0x626d0ef68260 ---------A   02100  GOTO 2140
    0x626d0ef684d0 ---------A T 02110  IF Q=B THEN 2130
    0x626d0ef68550 ---------A   02120  GOTO 2140
    0x626d0ef687c0 ---------A T 02130  IF R=C THEN 2360
    0x626d0ef68a40 ---------A T 02140  IF P=D THEN 2160
    0x626d0ef68ac0 ---------A   02150  GOTO 2190
    0x626d0ef68d30 ---------A T 02160  IF Q=E THEN 2180
    0x626d0ef68db0 ---------A   02170  GOTO 2190
    0x626d0ef69020 ---------A T 02180  IF  R=F THEN 2360
    0x626d0ef692a0 ---------A T 02190  IF P=G THEN 2210
    0x626d0ef69320 ---------A   02200  GOTO 2240
    0x626d0ef69590 ---------A T 02210  IF Q=H THEN 2230
    0x626d0ef69610 ---------A   02220  GOTO 2240
    0x626d0ef69880 ---------A T 02230  IF R=I THEN 2360
    0x626d0ef69b00 ---------A T 02240  IF P=J THEN 2260
    0x626d0ef69b80 ---------A   02250  GOTO 2290
    0x626d0ef69df0 ---------A T 02260  IF Q=K THEN 2280
    0x626d0ef69e70 ---------A   02270  GOTO 2290
    0x626d0ef6a0e0 ---------A T 02280  IF R=L THEN 2400
    0x626d0ef6a360 ---------A T 02290  IF P=M THEN 2310
    0x626d0ef6a3e0 ---------A   02300  GOTO 2340
    0x626d0ef6ae60 ---------A T 02310  IF Q=N THEN 2330
    0x626d0ef6aee0 ---------A   02320  GOTO 2340
    0x626d0ef6b160 ---------A T 02330  IF R=O THEN 2360
    0x626d0ef6b2e0 ---------A T 02340  PRINT "NEXT MOVE: ";
    0x626d0ef6b370 ---------A   02350  GOTO 1890 
    0x626d0ef6b4c0 ---------A T 02360  PRINT"******BANG******"
    0x626d0ef6b620 ---------A   02370  PRINT "YOU LOSE!"
    0x626d0ef6b6a0 ---------A   02380  PRINT
    0x626d0ef6b720 ---------A   02390  PRINT
    0x626d0ef6b980 ---------A T 02400  IF   Z=0 THEN 2560
    0x626d0ef6ba00 ---------A   02410  PRINT 
    0x626d0ef6be20 ---------A   02420  LET Z2=A1-Z1
    0x626d0ef6c070 ---------A   02430  IF Z2>0 THEN 2460
    0x626d0ef6c1d0 ---------A   02440  PRINT "YOU BUST."
    0x626d0ef6c270 ---------A   02450  GOTO 2590
    0x626d0ef6c5c0 ---------A T 02460  PRINT " YOU NOW HAVE"; Z2; "DOLLARS."
    0x626d0ef6c800 ---------A   02470  LET A1=Z2
    0x626d0ef6c890 ---------A   02480  GOTO 2560
    0x626d0ef6ca10 ---------A T 02490  PRINT"TRIED TO FOOL ME; BET AGAIN";
    0x626d0ef6caa0 ---------A   02500  GOTO 1820
    0x626d0ef6cbf0 ---------A T 02510  PRINT"CONGRATULATIONS!"
    0x626d0ef6ce50 ---------A   02520  IF Z=0 THEN 2560
    0x626d0ef6d1d0 ---------A   02530  LET Z2=A1+Z1
    0x626d0ef6d520 ---------A   02540  PRINT "YOU NOW HAVE"; Z2;"DOLLARS."
    0x626d0ef6d770 ---------A   02550  LET A1=Z2
    0x626d0ef6d8f0 ---------A T 02560  PRINT"DO YOU WANT TO TRY AGAIN ";
    0x626d0ef6db10 ---------A   02570  INPUT S
    0x626d0ef6dd80 ---------A   02580  IF S=1 THEN 1330
    0x626d0ef6dee0 ---------A T 02590  PRINT "TOUGH LUCK!"
    0x626d0ef6df60 ---------A   02600  PRINT
    0x626d0ef6e0c0 ---------A   02610  PRINT "GOODBYE."
    0x626d0ef6e120 ---------A   02620  END
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
int    A1_int;                                    // Basic: A1 
int    B_int;                                     // Basic: B 
int    B7_int;                                    // Basic: B7 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    O_int;                                     // Basic: O 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
int    Z2_int;                                    // Basic: Z2 
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
    // 01000 PRINT TAB(34);"CUBE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,34);strcat(buf,"CUBE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "DO YOU WANT TO SEE THE INSTRUCTIONS? (YES--1,NO--0)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO SEE THE INSTRUCTIONS? (YES--1,NO--0)");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 INPUT B7
    // Start of Basic INPUT statement 01060
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B7_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF B7=0 THEN 1320
    if(B7_int==0)goto Lbl_01320;
    // 01080 PRINT"THIS IS A GAME IN WHICH YOU WILL BE PLAYING AGAINST THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS A GAME IN WHICH YOU WILL BE PLAYING AGAINST THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT"RANDOM DECISION OF THE COMPUTER. THE FIELD OF PLAY IS A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RANDOM DECISION OF THE COMPUTER. THE FIELD OF PLAY IS A");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT"CUBE OF SIDE 3. ANY OF THE 27 LOCATIONS CAN BE DESIGNATED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CUBE OF SIDE 3. ANY OF THE 27 LOCATIONS CAN BE DESIGNATED");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT"BY INPUTING THREE NUMBERS SUCH AS 2,3,1. AT THE START,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BY INPUTING THREE NUMBERS SUCH AS 2,3,1. AT THE START,");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT"YOU ARE AUTOMATICALLY AT LOCATION 1,1,1. THE OBJECT OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE AUTOMATICALLY AT LOCATION 1,1,1. THE OBJECT OF");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT"THE GAME IS TO GET TO LOCATION 3,3,3. ONE MINOR DETAIL:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE GAME IS TO GET TO LOCATION 3,3,3. ONE MINOR DETAIL:");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT"THE COMPUTER WILL PICK, AT RANDOM, 5 LOCATIONS AT WHICH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE COMPUTER WILL PICK, AT RANDOM, 5 LOCATIONS AT WHICH");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT"IT WILL PLANT LAND MINES. IF YOU HIT ONE OF THESE LOCATIONS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT WILL PLANT LAND MINES. IF YOU HIT ONE OF THESE LOCATIONS");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT"YOU LOSE. ONE OTHER DETAIL: YOU MAY MOVE ONLY ONE SPACE "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU LOSE. ONE OTHER DETAIL: YOU MAY MOVE ONLY ONE SPACE ");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT"IN ONE DIRECTION EACH MOVE. FOR  EXAMPLE: FROM 1,1,2 YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN ONE DIRECTION EACH MOVE. FOR  EXAMPLE: FROM 1,1,2 YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT"MAY MOVE TO 2,1,2 OR 1,1,3. YOU MAY NOT CHANGE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MAY MOVE TO 2,1,2 OR 1,1,3. YOU MAY NOT CHANGE");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT"TWO OF THE NUMBERS ON THE SAME MOVE. IF YOU MAKE AN ILLEGAL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TWO OF THE NUMBERS ON THE SAME MOVE. IF YOU MAKE AN ILLEGAL");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT"MOVE, YOU LOSE AND THE COMPUTER TAKES THE MONEY YOU MAY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MOVE, YOU LOSE AND THE COMPUTER TAKES THE MONEY YOU MAY");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT"HAVE BET ON THAT ROUND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAVE BET ON THAT ROUND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT"ALL YES OR NO QUESTIONS WILL BE ANSWERED BY A 1 FOR YES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ALL YES OR NO QUESTIONS WILL BE ANSWERED BY A 1 FOR YES");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT"OR A 0 (ZERO) FOR NO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OR A 0 (ZERO) FOR NO.");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT"WHEN STATING THE AMOUNT OF A WAGER, PRINT ONLY THE NUMBER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHEN STATING THE AMOUNT OF A WAGER, PRINT ONLY THE NUMBER");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT"OF DOLLARS (EXAMPLE: 250)  YOU ARE AUTOMATICALLY STARTED WITH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF DOLLARS (EXAMPLE: 250)  YOU ARE AUTOMATICALLY STARTED WITH");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT"500 DOLLARS IN YOUR ACCOUNT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"500 DOLLARS IN YOUR ACCOUNT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01310 PRINT "GOOD LUCK!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01320:
    // 01320 LET A1=500
    A1_int = 500;

  Lbl_01330:
    // 01330 LET A=INT(3*(RND(X)))
    A_int = INT(3*(RND(X_int)));
    // 01340 IF A<>0 THEN 1360
    if(A_int!=0)goto Lbl_01360;
    // 01350 LET A=3
    A_int = 3;

  Lbl_01360:
    // 01360 LET B=INT(3*(RND(X)))
    B_int = INT(3*(RND(X_int)));
    // 01370 IF B<>0 THEN 1390
    if(B_int!=0)goto Lbl_01390;
    // 01380 LET B=2
    B_int = 2;

  Lbl_01390:
    // 01390 LET C=INT(3*(RND(X)))
    C_int = INT(3*(RND(X_int)));
    // 01400 IF C<>0 THEN 1420
    if(C_int!=0)goto Lbl_01420;
    // 01410 LET C=3
    C_int = 3;

  Lbl_01420:
    // 01420 LET D=INT(3*(RND(X)))
    D_int = INT(3*(RND(X_int)));
    // 01430 IF D<>0 THEN 1450
    if(D_int!=0)goto Lbl_01450;
    // 01440 LET D=1
    D_int = 1;

  Lbl_01450:
    // 01450 LET E=INT(3*(RND(X)))
    E_int = INT(3*(RND(X_int)));
    // 01460 IF E<>0 THEN 1480
    if(E_int!=0)goto Lbl_01480;
    // 01470 LET E=3
    E_int = 3;

  Lbl_01480:
    // 01480 LET F=INT(3*(RND(X)))
    F_int = INT(3*(RND(X_int)));
    // 01490 IF F<>0 THEN 1510
    if(F_int!=0)goto Lbl_01510;
    // 01500 LET F=3
    F_int = 3;

  Lbl_01510:
    // 01510 LET G=INT(3*(RND(X)))
    G_int = INT(3*(RND(X_int)));
    // 01520 IF G<>0 THEN 1540
    if(G_int!=0)goto Lbl_01540;
    // 01530 LET G=3
    G_int = 3;

  Lbl_01540:
    // 01540 LET H=INT(3*(RND(X)))
    H_int = INT(3*(RND(X_int)));
    // 01550 IF H<>0 THEN 1570
    if(H_int!=0)goto Lbl_01570;
    // 01560 LET H=3
    H_int = 3;

  Lbl_01570:
    // 01570 LET I=INT(3*(RND(X)))
    I_int = INT(3*(RND(X_int)));
    // 01580 IF I<>0 THEN 1600
    if(I_int!=0)goto Lbl_01600;
    // 01590 LET I=2
    I_int = 2;

  Lbl_01600:
    // 01600 LET J=INT(3*(RND(X)))
    J_int = INT(3*(RND(X_int)));
    // 01610 IF J<>0 THEN 1630
    if(J_int!=0)goto Lbl_01630;
    // 01620 LET J=3
    J_int = 3;

  Lbl_01630:
    // 01630 LET K=INT(3*(RND(X)))
    K_int = INT(3*(RND(X_int)));
    // 01640 IF K<>0 THEN 1660
    if(K_int!=0)goto Lbl_01660;
    // 01650 LET K=2
    K_int = 2;

  Lbl_01660:
    // 01660 LET L=INT(3*(RND(X)))
    L_int = INT(3*(RND(X_int)));
    // 01670 IF L<>0 THEN 1690
    if(L_int!=0)goto Lbl_01690;
    // 01680 LET L=3
    L_int = 3;

  Lbl_01690:
    // 01690 LET M=INT(3*(RND(X)))
    M_int = INT(3*(RND(X_int)));
    // 01700 IF M<>0 THEN 1720
    if(M_int!=0)goto Lbl_01720;
    // 01710 LET M=3
    M_int = 3;

  Lbl_01720:
    // 01720 LET N=INT(3*(RND(X)))
    N_int = INT(3*(RND(X_int)));
    // 01730 IF N<>0 THEN 1750
    if(N_int!=0)goto Lbl_01750;
    // 01740 LET N=1
    N_int = 1;

  Lbl_01750:
    // 01750 LET O=INT (3*(RND(X)))
    O_int = INT(3*(RND(X_int)));
    // 01760 IF O <>0 THEN 1780
    if(O_int!=0)goto Lbl_01780;
    // 01770 LET O=3
    O_int = 3;

  Lbl_01780:
    // 01780 PRINT "WANT TO MAKE A WAGER?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WANT TO MAKE A WAGER?");strcat(buf,"\n");fputs(buf,fh); };
    // 01790 INPUT Z
    // Start of Basic INPUT statement 01790
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01790
    // 01800 IF Z=0 THEN 1880
    if(Z_int==0)goto Lbl_01880;
    // 01810 PRINT "HOW MUCH ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MUCH ");fputs(buf,fh); };

  Lbl_01820:
    // 01820 INPUT Z1
    // Start of Basic INPUT statement 01820
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01820
    // 01830 IF A1<Z1 THEN 2490
    if(A1_int<Z1_int)goto Lbl_02490;
    // 01840 LET W=1
    W_int = 1;
    // 01850 LET X=1
    X_int = 1;
    // 01860 LET Y=1
    Y_int = 1;
    // 01870 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01880:
    // 01880 PRINT "IT'S YOUR MOVE:  ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT'S YOUR MOVE:  ");fputs(buf,fh); };

  Lbl_01890:
    // 01890 INPUT P,Q,R
    // Start of Basic INPUT statement 01890
    {
        int numargs=3;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P_int,args,0)) ||
                (err += b2c_strtoi(&Q_int,args,1)) ||
                (err += b2c_strtoi(&R_int,args,2)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01890
    // 01900 IF P>W+1 THEN 1990
    if(P_int>W_int+1)goto Lbl_01990;
    // 01910 IF P=W+1 THEN 1960
    if(P_int==W_int+1)goto Lbl_01960;
    // 01920 IF Q>X+1 THEN 1990
    if(Q_int>X_int+1)goto Lbl_01990;
    // 01930 IF Q=(X+1) THEN 1970
    if(Q_int==(X_int+1))goto Lbl_01970;
    // 01940 IF R >(Y+1)  THEN 1990
    if(R_int>(Y_int+1))goto Lbl_01990;
    // 01950 GOTO 2010
    goto Lbl_02010;

  Lbl_01960:
    // 01960 IF Q>= X+1 THEN 1990
    if(Q_int>=X_int+1)goto Lbl_01990;

  Lbl_01970:
    // 01970 IF R>=Y+1 THEN 1990
    if(R_int>=Y_int+1)goto Lbl_01990;
    // 01980 GOTO 2010
    goto Lbl_02010;

  Lbl_01990:
    // 01990 PRINT "ILLEGAL MOVE. YOU LOSE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL MOVE. YOU LOSE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02000 GOTO 2400
    goto Lbl_02400;

  Lbl_02010:
    // 02010 LET W=P
    W_int = P_int;
    // 02020 LET X=Q
    X_int = Q_int;
    // 02030 LET Y=R
    Y_int = R_int;
    // 02040 IF P=3 THEN 2060
    if(P_int==3)goto Lbl_02060;
    // 02050 GOTO 2090
    goto Lbl_02090;

  Lbl_02060:
    // 02060 IF  Q=3 THEN 2080
    if(Q_int==3)goto Lbl_02080;
    // 02070 GOTO 2090
    goto Lbl_02090;

  Lbl_02080:
    // 02080 IF R=3 THEN 2510
    if(R_int==3)goto Lbl_02510;

  Lbl_02090:
    // 02090 IF P=A THEN 2110
    if(P_int==A_int)goto Lbl_02110;
    // 02100 GOTO 2140
    goto Lbl_02140;

  Lbl_02110:
    // 02110 IF Q=B THEN 2130
    if(Q_int==B_int)goto Lbl_02130;
    // 02120 GOTO 2140
    goto Lbl_02140;

  Lbl_02130:
    // 02130 IF R=C THEN 2360
    if(R_int==C_int)goto Lbl_02360;

  Lbl_02140:
    // 02140 IF P=D THEN 2160
    if(P_int==D_int)goto Lbl_02160;
    // 02150 GOTO 2190
    goto Lbl_02190;

  Lbl_02160:
    // 02160 IF Q=E THEN 2180
    if(Q_int==E_int)goto Lbl_02180;
    // 02170 GOTO 2190
    goto Lbl_02190;

  Lbl_02180:
    // 02180 IF  R=F THEN 2360
    if(R_int==F_int)goto Lbl_02360;

  Lbl_02190:
    // 02190 IF P=G THEN 2210
    if(P_int==G_int)goto Lbl_02210;
    // 02200 GOTO 2240
    goto Lbl_02240;

  Lbl_02210:
    // 02210 IF Q=H THEN 2230
    if(Q_int==H_int)goto Lbl_02230;
    // 02220 GOTO 2240
    goto Lbl_02240;

  Lbl_02230:
    // 02230 IF R=I THEN 2360
    if(R_int==I_int)goto Lbl_02360;

  Lbl_02240:
    // 02240 IF P=J THEN 2260
    if(P_int==J_int)goto Lbl_02260;
    // 02250 GOTO 2290
    goto Lbl_02290;

  Lbl_02260:
    // 02260 IF Q=K THEN 2280
    if(Q_int==K_int)goto Lbl_02280;
    // 02270 GOTO 2290
    goto Lbl_02290;

  Lbl_02280:
    // 02280 IF R=L THEN 2400
    if(R_int==L_int)goto Lbl_02400;

  Lbl_02290:
    // 02290 IF P=M THEN 2310
    if(P_int==M_int)goto Lbl_02310;
    // 02300 GOTO 2340
    goto Lbl_02340;

  Lbl_02310:
    // 02310 IF Q=N THEN 2330
    if(Q_int==N_int)goto Lbl_02330;
    // 02320 GOTO 2340
    goto Lbl_02340;

  Lbl_02330:
    // 02330 IF R=O THEN 2360
    if(R_int==O_int)goto Lbl_02360;

  Lbl_02340:
    // 02340 PRINT "NEXT MOVE: ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NEXT MOVE: ");fputs(buf,fh); };
    // 02350 GOTO 1890 
    goto Lbl_01890;

  Lbl_02360:
    // 02360 PRINT"******BANG******"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"******BANG******");strcat(buf,"\n");fputs(buf,fh); };
    // 02370 PRINT "YOU LOSE!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU LOSE!");strcat(buf,"\n");fputs(buf,fh); };
    // 02380 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02390 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02400:
    // 02400 IF   Z=0 THEN 2560
    if(Z_int==0)goto Lbl_02560;
    // 02410 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02420 LET Z2=A1-Z1
    Z2_int = A1_int-Z1_int;
    // 02430 IF Z2>0 THEN 2460
    if(Z2_int>0)goto Lbl_02460;
    // 02440 PRINT "YOU BUST."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU BUST.");strcat(buf,"\n");fputs(buf,fh); };
    // 02450 GOTO 2590
    goto Lbl_02590;

  Lbl_02460:
    // 02460 PRINT " YOU NOW HAVE"; Z2; "DOLLARS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," YOU NOW HAVE"); b2c_INT(buf,Z2_int);strcat(buf,"DOLLARS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02470 LET A1=Z2
    A1_int = Z2_int;
    // 02480 GOTO 2560
    goto Lbl_02560;

  Lbl_02490:
    // 02490 PRINT"TRIED TO FOOL ME; BET AGAIN";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRIED TO FOOL ME; BET AGAIN");fputs(buf,fh); };
    // 02500 GOTO 1820
    goto Lbl_01820;

  Lbl_02510:
    // 02510 PRINT"CONGRATULATIONS!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS!");strcat(buf,"\n");fputs(buf,fh); };
    // 02520 IF Z=0 THEN 2560
    if(Z_int==0)goto Lbl_02560;
    // 02530 LET Z2=A1+Z1
    Z2_int = A1_int+Z1_int;
    // 02540 PRINT "YOU NOW HAVE"; Z2;"DOLLARS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU NOW HAVE"); b2c_INT(buf,Z2_int);strcat(buf,"DOLLARS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02550 LET A1=Z2
    A1_int = Z2_int;

  Lbl_02560:
    // 02560 PRINT"DO YOU WANT TO TRY AGAIN ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO TRY AGAIN ");fputs(buf,fh); };
    // 02570 INPUT S
    // Start of Basic INPUT statement 02570
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02570
    // 02580 IF S=1 THEN 1330
    if(S_int==1)goto Lbl_01330;

  Lbl_02590:
    // 02590 PRINT "TOUGH LUCK!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOUGH LUCK!");strcat(buf,"\n");fputs(buf,fh); };
    // 02600 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02610 PRINT "GOODBYE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOODBYE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02620 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
