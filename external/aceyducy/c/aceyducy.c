/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/aceyducy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57cb35eb16d0 ---------A   00010  PRINT TAB(26);"ACEY DUCEY CARD GAME"
    0x57cb35eb1670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57cb35ea22b0 ---------A   00021  PRINT
    0x57cb35eb17f0 ---------A   00022  PRINT
    0x57cb35eb2040 ---------A   00030  PRINT"ACEY-DUCEY IS PLAYED IN THE FOLLOWING MANNER "
    0x57cb35eb1e40 ---------A   00040  PRINT"THE DEALER (COMPUTER) DEALS TWO CARDS FACE UP"
    0x57cb35eb2500 ---------A   00050  PRINT"YOU HAVE AN OPTION TO BET OR NOT BET DEPENDING"
    0x57cb35eb1c60 ---------A   00060  PRINT"ON WHETHER OR NOT YOU FEEL THE CARD WILL HAVE"
    0x57cb35eb41c0 ---------A   00070  PRINT"A VALUE BETWEEN THE FIRST TWO."
    0x57cb35eb26e0 ---------A   00080  PRINT"IF YOU DO NOT WANT TO BET, INPUT A 0"
    0x57cb35eb2b80 ---------A   00100  N=100
    0x57cb35eb3e70 ---------A T 00110  Q=100
    0x57cb35eb9d80 ---------A T 00120  PRINT "YOU NOW HAVE";Q;"DOLLARS."
    0x57cb35eb9de0 ---------A   00130  PRINT
    0x57cb35eb3ff0 ---------A   00140  GOTO 260
    0x57cb35eb40b0 ---------A T 00210  Q=Q+M
    0x57cb35eba1e0 ---------A   00220  GOTO 120
    0x57cb35eba530 ---------A T 00240  Q=Q-M
    0x57cb35eba5c0 ---------A   00250  GOTO 120
    0x57cb35eba6f0 ---------A T 00260  PRINT"HERE ARE YOUR NEXT TWO CARDS: "
    0x57cb35ebad90 ---------A T 00270  A=INT(14*RND(1))+2
    0x57cb35ebafe0 ---------A   00280  IF A<2 THEN 270
    0x57cb35ebb240 ---------A   00290  IF A>14 THEN 270
    0x57cb35ebb8e0 ---------A T 00300  B=INT(14*RND(1))+2
    0x57cb35ebbb30 ---------A   00310  IF B<2 THEN 300
    0x57cb35ebbd90 ---------A   00320  IF B>14 THEN 300
    0x57cb35ebc010 ---------A   00330  IF A>=B THEN 270
    0x57cb35ebc270 ---------A   00350  IF A<11 THEN 400
    0x57cb35ebc4d0 ---------A   00360  IF A=11 THEN 420
    0x57cb35ebc730 ---------A   00370  IF A=12 THEN 440
    0x57cb35ebc990 ---------A   00380  IF A=13 THEN 460
    0x57cb35ebcbf0 ---------A   00390  IF A=14 THEN 480
    0x57cb35ebcd50 ---------A T 00400  PRINT A
    0x57cb35ebcfe0 ---------A   00410  GOTO 500
    0x57cb35ebd130 ---------A T 00420  PRINT"JACK"
    0x57cb35ebd1b0 ---------A   00430  GOTO 500
    0x57cb35ebd300 ---------A T 00440  PRINT"QUEEN"
    0x57cb35ebd380 ---------A   00450  GOTO 500
    0x57cb35ebd4d0 ---------A T 00460  PRINT"KING"
    0x57cb35ebd550 ---------A   00470  GOTO 500
    0x57cb35ebd6a0 ---------A T 00480  PRINT"ACE"
    0x57cb35ebd900 ---------A T 00500  IF B<11 THEN 550
    0x57cb35ebdb60 ---------A   00510  IF B=11 THEN 570
    0x57cb35ebddc0 ---------A   00520  IF B=12 THEN 590
    0x57cb35ebe020 ---------A   00530  IF B=13 THEN 610
    0x57cb35ebe280 ---------A   00540  IF B=14 THEN 630
    0x57cb35ebe3e0 ---------A T 00550  PRINT B
    0x57cb35ebe460 ---------A   00560  GOTO 650
    0x57cb35ebe5b0 ---------A T 00570  PRINT"JACK"
    0x57cb35ebe630 ---------A   00580  GOTO 650
    0x57cb35ebe780 ---------A T 00590  PRINT"QUEEN"
    0x57cb35ebe800 ---------A   00600  GOTO 650
    0x57cb35ebe950 ---------A T 00610  PRINT"KING"
    0x57cb35ebe9d0 ---------A   00620  GOTO 650
    0x57cb35ebeb20 ---------A T 00630  PRINT"ACE"
    0x57cb35ebeba0 ---------A   00640  PRINT
    0x57cb35ebec00 ---------A T 00650  PRINT
    0x57cb35ebed80 ---------A   00660  INPUT"WHAT IS YOUR BET";M
    0x57cb35ebefe0 ---------A   00670  IF M<>0 THEN 680
    0x57cb35ebf140 ---------A   00675  PRINT"CHICKEN!!"
    0x57cb35ebf1c0 ---------A   00676  PRINT
    0x57cb35ebf240 ---------A   00677  GOTO 260
    0x57cb35ebf4d0 ---------A T 00680  IF M<=Q THEN 730
    0x57cb35ebf670 ---------A   00690  PRINT"SORRY, MY FRIEND, BUT YOU BET TOO MUCH."
    0x57cb35ebf9d0 ---------A   00700  PRINT"YOU HAVE ONLY ";Q;" DOLLARS TO BET."
    0x57cb35ebfe40 ---------A   00710  GOTO 650
    0x57cb35ec04d0 ---------A T 00730  C=INT(14*RND(1))+2
    0x57cb35ec0720 ---------A   00740  IF C<2 THEN 730
    0x57cb35ec0980 ---------A   00750  IF C>14 THEN 730
    0x57cb35ec0be0 ---------A   00760  IF C<11 THEN 810
    0x57cb35ec0e40 ---------A   00770  IF C=11 THEN 830
    0x57cb35ec10a0 ---------A   00780  IF C=12 THEN 850
    0x57cb35ec1300 ---------A   00790  IF C=13 THEN 870
    0x57cb35ec1560 ---------A   00800  IF C=14 THEN 890
    0x57cb35ec16c0 ---------A T 00810  PRINT C
    0x57cb35ec1740 ---------A   00820  GOTO 910
    0x57cb35ec1890 ---------A T 00830  PRINT"JACK"
    0x57cb35ec1910 ---------A   00840  GOTO 910
    0x57cb35ec1a60 ---------A T 00850  PRINT"QUEEN"
    0x57cb35ec1ae0 ---------A   00860  GOTO 910
    0x57cb35ec1c30 ---------A T 00870  PRINT"KING"
    0x57cb35ec1cb0 ---------A   00880  GOTO 910
    0x57cb35ec1e00 ---------A T 00890  PRINT "ACE"
    0x57cb35ec1e80 ---------A   00900  PRINT
    0x57cb35ec2100 ---------A T 00910  IF C>A THEN 930
    0x57cb35ec2180 ---------A   00920  GOTO 970
    0x57cb35ec23f0 ---------A T 00930  IF C>=B THEN 970
    0x57cb35ec2550 ---------A   00950  PRINT"YOU WIN!!!"
    0x57cb35ec25b0 ---------A   00960  GOTO 210
    0x57cb35ec2700 ---------A T 00970  PRINT"SORRY, YOU LOSE"
    0x57cb35ec2980 ---------A   00980  IF M<Q THEN 240
    0x57cb35ec2a00 ---------A   00990  PRINT
    0x57cb35ec2aa0 ---------A   01000  PRINT
    0x57cb35ec2be0 ---------A   01010  PRINT"SORRY, FRIEND, BUT YOU BLEW YOUR WAD."
    0x57cb35ec2cd0 ---------A   01015  PRINT:PRINT
    0x57cb35ec2f10 ---------A   01020  INPUT"TRY AGAIN (YES OR NO)";A$
    0x57cb35ec3000 ---------A   01025  PRINT:PRINT
    0x57cb35ec3290 ---------A   01030  IF A$="YES" THEN 110
    0x57cb35ec3400 ---------A   01040  PRINT"O.K., HOPE YOU HAD FUN!"
    0x57cb35ec3460 ---------A   01050  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00110      01030T
     00120      00220T, 00250T
     00210      00960T
     00240      00980T
     00260      00140T, 00677T
     00270      00280T, 00290T, 00330T
     00300      00310T, 00320T
     00400      00350T
     00420      00360T
     00440      00370T
     00460      00380T
     00480      00390T
     00500      00410T, 00430T, 00450T, 00470T
     00550      00500T
     00570      00510T
     00590      00520T
     00610      00530T
     00630      00540T
     00650      00560T, 00580T, 00600T, 00620T, 00710T
     00680      00670T
     00730      00680T, 00740T, 00750T
     00810      00760T
     00830      00770T
     00850      00780T
     00870      00790T
     00890      00800T
     00910      00820T, 00840T, 00860T, 00880T
     00930      00910T
     00970      00920T, 00930T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x57cb35eb16d0 (00010)   0x57cb35eb16d0 (00010)   0x57cb35ec3460 (01050)   0x57cb35ec3460 (01050)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/aceyducy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57cb35eb16d0 ---------A   00010  PRINT TAB(26);"ACEY DUCEY CARD GAME"
    0x57cb35eb1670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57cb35ea22b0 ---------A   00021  PRINT
    0x57cb35eb17f0 ---------A   00022  PRINT
    0x57cb35eb2040 ---------A   00030  PRINT"ACEY-DUCEY IS PLAYED IN THE FOLLOWING MANNER "
    0x57cb35eb1e40 ---------A   00040  PRINT"THE DEALER (COMPUTER) DEALS TWO CARDS FACE UP"
    0x57cb35eb2500 ---------A   00050  PRINT"YOU HAVE AN OPTION TO BET OR NOT BET DEPENDING"
    0x57cb35eb1c60 ---------A   00060  PRINT"ON WHETHER OR NOT YOU FEEL THE CARD WILL HAVE"
    0x57cb35eb41c0 ---------A   00070  PRINT"A VALUE BETWEEN THE FIRST TWO."
    0x57cb35eb26e0 ---------A   00080  PRINT"IF YOU DO NOT WANT TO BET, INPUT A 0"
    0x57cb35eb2b80 ---------A   00100  N=100
    0x57cb35eb3e70 ---------A T 00110  Q=100
    0x57cb35eb9d80 ---------A T 00120  PRINT "YOU NOW HAVE";Q;"DOLLARS."
    0x57cb35eb9de0 ---------A   00130  PRINT
    0x57cb35eb3ff0 ---------A   00140  GOTO 260
    0x57cb35eb40b0 ---------A T 00210  Q=Q+M
    0x57cb35eba1e0 ---------A   00220  GOTO 120
    0x57cb35eba530 ---------A T 00240  Q=Q-M
    0x57cb35eba5c0 ---------A   00250  GOTO 120
    0x57cb35eba6f0 ---------A T 00260  PRINT"HERE ARE YOUR NEXT TWO CARDS: "
    0x57cb35ebad90 ---------A T 00270  A=INT(14*RND(1))+2
    0x57cb35ebafe0 ---------A   00280  IF A<2 THEN 270
    0x57cb35ebb240 ---------A   00290  IF A>14 THEN 270
    0x57cb35ebb8e0 ---------A T 00300  B=INT(14*RND(1))+2
    0x57cb35ebbb30 ---------A   00310  IF B<2 THEN 300
    0x57cb35ebbd90 ---------A   00320  IF B>14 THEN 300
    0x57cb35ebc010 ---------A   00330  IF A>=B THEN 270
    0x57cb35ebc270 ---------A   00350  IF A<11 THEN 400
    0x57cb35ebc4d0 ---------A   00360  IF A=11 THEN 420
    0x57cb35ebc730 ---------A   00370  IF A=12 THEN 440
    0x57cb35ebc990 ---------A   00380  IF A=13 THEN 460
    0x57cb35ebcbf0 ---------A   00390  IF A=14 THEN 480
    0x57cb35ebcd50 ---------A T 00400  PRINT A
    0x57cb35ebcfe0 ---------A   00410  GOTO 500
    0x57cb35ebd130 ---------A T 00420  PRINT"JACK"
    0x57cb35ebd1b0 ---------A   00430  GOTO 500
    0x57cb35ebd300 ---------A T 00440  PRINT"QUEEN"
    0x57cb35ebd380 ---------A   00450  GOTO 500
    0x57cb35ebd4d0 ---------A T 00460  PRINT"KING"
    0x57cb35ebd550 ---------A   00470  GOTO 500
    0x57cb35ebd6a0 ---------A T 00480  PRINT"ACE"
    0x57cb35ebd900 ---------A T 00500  IF B<11 THEN 550
    0x57cb35ebdb60 ---------A   00510  IF B=11 THEN 570
    0x57cb35ebddc0 ---------A   00520  IF B=12 THEN 590
    0x57cb35ebe020 ---------A   00530  IF B=13 THEN 610
    0x57cb35ebe280 ---------A   00540  IF B=14 THEN 630
    0x57cb35ebe3e0 ---------A T 00550  PRINT B
    0x57cb35ebe460 ---------A   00560  GOTO 650
    0x57cb35ebe5b0 ---------A T 00570  PRINT"JACK"
    0x57cb35ebe630 ---------A   00580  GOTO 650
    0x57cb35ebe780 ---------A T 00590  PRINT"QUEEN"
    0x57cb35ebe800 ---------A   00600  GOTO 650
    0x57cb35ebe950 ---------A T 00610  PRINT"KING"
    0x57cb35ebe9d0 ---------A   00620  GOTO 650
    0x57cb35ebeb20 ---------A T 00630  PRINT"ACE"
    0x57cb35ebeba0 ---------A   00640  PRINT
    0x57cb35ebec00 ---------A T 00650  PRINT
    0x57cb35ebed80 ---------A   00660  INPUT"WHAT IS YOUR BET";M
    0x57cb35ebefe0 ---------A   00670  IF M<>0 THEN 680
    0x57cb35ebf140 ---------A   00675  PRINT"CHICKEN!!"
    0x57cb35ebf1c0 ---------A   00676  PRINT
    0x57cb35ebf240 ---------A   00677  GOTO 260
    0x57cb35ebf4d0 ---------A T 00680  IF M<=Q THEN 730
    0x57cb35ebf670 ---------A   00690  PRINT"SORRY, MY FRIEND, BUT YOU BET TOO MUCH."
    0x57cb35ebf9d0 ---------A   00700  PRINT"YOU HAVE ONLY ";Q;" DOLLARS TO BET."
    0x57cb35ebfe40 ---------A   00710  GOTO 650
    0x57cb35ec04d0 ---------A T 00730  C=INT(14*RND(1))+2
    0x57cb35ec0720 ---------A   00740  IF C<2 THEN 730
    0x57cb35ec0980 ---------A   00750  IF C>14 THEN 730
    0x57cb35ec0be0 ---------A   00760  IF C<11 THEN 810
    0x57cb35ec0e40 ---------A   00770  IF C=11 THEN 830
    0x57cb35ec10a0 ---------A   00780  IF C=12 THEN 850
    0x57cb35ec1300 ---------A   00790  IF C=13 THEN 870
    0x57cb35ec1560 ---------A   00800  IF C=14 THEN 890
    0x57cb35ec16c0 ---------A T 00810  PRINT C
    0x57cb35ec1740 ---------A   00820  GOTO 910
    0x57cb35ec1890 ---------A T 00830  PRINT"JACK"
    0x57cb35ec1910 ---------A   00840  GOTO 910
    0x57cb35ec1a60 ---------A T 00850  PRINT"QUEEN"
    0x57cb35ec1ae0 ---------A   00860  GOTO 910
    0x57cb35ec1c30 ---------A T 00870  PRINT"KING"
    0x57cb35ec1cb0 ---------A   00880  GOTO 910
    0x57cb35ec1e00 ---------A T 00890  PRINT "ACE"
    0x57cb35ec1e80 ---------A   00900  PRINT
    0x57cb35ec2100 ---------A T 00910  IF C>A THEN 930
    0x57cb35ec2180 ---------A   00920  GOTO 970
    0x57cb35ec23f0 ---------A T 00930  IF C>=B THEN 970
    0x57cb35ec2550 ---------A   00950  PRINT"YOU WIN!!!"
    0x57cb35ec25b0 ---------A   00960  GOTO 210
    0x57cb35ec2700 ---------A T 00970  PRINT"SORRY, YOU LOSE"
    0x57cb35ec2980 ---------A   00980  IF M<Q THEN 240
    0x57cb35ec2a00 ---------A   00990  PRINT
    0x57cb35ec2aa0 ---------A   01000  PRINT
    0x57cb35ec2be0 ---------A   01010  PRINT"SORRY, FRIEND, BUT YOU BLEW YOUR WAD."
    0x57cb35ec2c40 ----------   01015  PRINT
    0x57cb35ec2cd0 ---------A        a PRINT
    0x57cb35ec2f10 ---------A   01020  INPUT"TRY AGAIN (YES OR NO)";A$
    0x57cb35ec2f70 ----------   01025  PRINT
    0x57cb35ec3000 ---------A        a PRINT
    0x57cb35ec3290 ---------A   01030  IF A$="YES" THEN 110
    0x57cb35ec3400 ---------A   01040  PRINT"O.K., HOPE YOU HAD FUN!"
    0x57cb35ec3460 ---------A   01050  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/aceyducy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57cb35eb16d0 ---------A   01000  PRINT TAB(26);"ACEY DUCEY CARD GAME"
    0x57cb35eb1670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57cb35ea22b0 ---------A   01020  PRINT
    0x57cb35eb17f0 ---------A   01030  PRINT
    0x57cb35eb2040 ---------A   01040  PRINT"ACEY-DUCEY IS PLAYED IN THE FOLLOWING MANNER "
    0x57cb35eb1e40 ---------A   01050  PRINT"THE DEALER (COMPUTER) DEALS TWO CARDS FACE UP"
    0x57cb35eb2500 ---------A   01060  PRINT"YOU HAVE AN OPTION TO BET OR NOT BET DEPENDING"
    0x57cb35eb1c60 ---------A   01070  PRINT"ON WHETHER OR NOT YOU FEEL THE CARD WILL HAVE"
    0x57cb35eb41c0 ---------A   01080  PRINT"A VALUE BETWEEN THE FIRST TWO."
    0x57cb35eb26e0 ---------A   01090  PRINT"IF YOU DO NOT WANT TO BET, INPUT A 0"
    0x57cb35eb2b80 ---------A   01100  N=1100
    0x57cb35eb3e70 ---------A   01110  Q=100
    0x57cb35eb9d80 ---------A   01120  PRINT "YOU NOW HAVE";Q;"DOLLARS."
    0x57cb35eb9de0 ---------A   01130  PRINT
    0x57cb35eb3ff0 ---------A   01140  GOTO 1190
    0x57cb35eb40b0 ---------A   01150  Q=Q+M
    0x57cb35eba1e0 ---------A   01160  GOTO 1120
    0x57cb35eba530 ---------A   01170  Q=Q-M
    0x57cb35eba5c0 ---------A   01180  GOTO 1120
    0x57cb35eba6f0 ---------A   01190  PRINT"HERE ARE YOUR NEXT TWO CARDS: "
    0x57cb35ebad90 ---------A   01200  A=INT(14*RND(1))+2
    0x57cb35ebafe0 ---------A   01210  IF A<2 THEN 1200
    0x57cb35ebb240 ---------A   01220  IF A>14 THEN 1200
    0x57cb35ebb8e0 ---------A   01230  B=INT(14*RND(1))+2
    0x57cb35ebbb30 ---------A   01240  IF B<2 THEN 1230
    0x57cb35ebbd90 ---------A   01250  IF B>14 THEN 1230
    0x57cb35ebc010 ---------A   01260  IF A>=B THEN 1200
    0x57cb35ebc270 ---------A   01270  IF A<11 THEN 1320
    0x57cb35ebc4d0 ---------A   01280  IF A=11 THEN 1340
    0x57cb35ebc730 ---------A   01290  IF A=12 THEN 1360
    0x57cb35ebc990 ---------A   01300  IF A=13 THEN 1380
    0x57cb35ebcbf0 ---------A   01310  IF A=14 THEN 1400
    0x57cb35ebcd50 ---------A   01320  PRINT A
    0x57cb35ebcfe0 ---------A   01330  GOTO 1410
    0x57cb35ebd130 ---------A   01340  PRINT"JACK"
    0x57cb35ebd1b0 ---------A   01350  GOTO 1410
    0x57cb35ebd300 ---------A   01360  PRINT"QUEEN"
    0x57cb35ebd380 ---------A   01370  GOTO 1410
    0x57cb35ebd4d0 ---------A   01380  PRINT"KING"
    0x57cb35ebd550 ---------A   01390  GOTO 1410
    0x57cb35ebd6a0 ---------A   01400  PRINT"ACE"
    0x57cb35ebd900 ---------A   01410  IF B<11 THEN 1460
    0x57cb35ebdb60 ---------A   01420  IF B=11 THEN 1480
    0x57cb35ebddc0 ---------A   01430  IF B=12 THEN 1500
    0x57cb35ebe020 ---------A   01440  IF B=13 THEN 1520
    0x57cb35ebe280 ---------A   01450  IF B=14 THEN 1540
    0x57cb35ebe3e0 ---------A   01460  PRINT B
    0x57cb35ebe460 ---------A   01470  GOTO 1560
    0x57cb35ebe5b0 ---------A   01480  PRINT"JACK"
    0x57cb35ebe630 ---------A   01490  GOTO 1560
    0x57cb35ebe780 ---------A   01500  PRINT"QUEEN"
    0x57cb35ebe800 ---------A   01510  GOTO 1560
    0x57cb35ebe950 ---------A   01520  PRINT"KING"
    0x57cb35ebe9d0 ---------A   01530  GOTO 1560
    0x57cb35ebeb20 ---------A   01540  PRINT"ACE"
    0x57cb35ebeba0 ---------A   01550  PRINT
    0x57cb35ebec00 ---------A   01560  PRINT
    0x57cb35ebed80 ---------A   01570  INPUT"WHAT IS YOUR BET";M
    0x57cb35ebefe0 ---------A   01580  IF M<>0 THEN 1620
    0x57cb35ebf140 ---------A   01590  PRINT"CHICKEN!!"
    0x57cb35ebf1c0 ---------A   01600  PRINT
    0x57cb35ebf240 ---------A   01610  GOTO 1190
    0x57cb35ebf4d0 ---------A   01620  IF M<=Q THEN 1660
    0x57cb35ebf670 ---------A   01630  PRINT"SORRY, MY FRIEND, BUT YOU BET TOO MUCH."
    0x57cb35ebf9d0 ---------A   01640  PRINT"YOU HAVE ONLY ";Q;" DOLLARS TO BET."
    0x57cb35ebfe40 ---------A   01650  GOTO 1560
    0x57cb35ec04d0 ---------A   01660  C=INT(14*RND(1))+2
    0x57cb35ec0720 ---------A   01670  IF C<2 THEN 1660
    0x57cb35ec0980 ---------A   01680  IF C>14 THEN 1660
    0x57cb35ec0be0 ---------A   01690  IF C<11 THEN 1740
    0x57cb35ec0e40 ---------A   01700  IF C=11 THEN 1760
    0x57cb35ec10a0 ---------A   01710  IF C=12 THEN 1780
    0x57cb35ec1300 ---------A   01720  IF C=13 THEN 1800
    0x57cb35ec1560 ---------A   01730  IF C=14 THEN 1820
    0x57cb35ec16c0 ---------A   01740  PRINT C
    0x57cb35ec1740 ---------A   01750  GOTO 1840
    0x57cb35ec1890 ---------A   01760  PRINT"JACK"
    0x57cb35ec1910 ---------A   01770  GOTO 1840
    0x57cb35ec1a60 ---------A   01780  PRINT"QUEEN"
    0x57cb35ec1ae0 ---------A   01790  GOTO 1840
    0x57cb35ec1c30 ---------A   01800  PRINT"KING"
    0x57cb35ec1cb0 ---------A   01810  GOTO 1840
    0x57cb35ec1e00 ---------A   01820  PRINT "ACE"
    0x57cb35ec1e80 ---------A   01830  PRINT
    0x57cb35ec2100 ---------A   01840  IF C>A THEN 1860
    0x57cb35ec2180 ---------A   01850  GOTO 1890
    0x57cb35ec23f0 ---------A   01860  IF C>=B THEN 1890
    0x57cb35ec2550 ---------A   01870  PRINT"YOU WIN!!!"
    0x57cb35ec25b0 ---------A   01880  GOTO 1150
    0x57cb35ec2700 ---------A   01890  PRINT"SORRY, YOU LOSE"
    0x57cb35ec2980 ---------A   01900  IF M<Q THEN 1170
    0x57cb35ec2a00 ---------A   01910  PRINT
    0x57cb35ec2aa0 ---------A   01920  PRINT
    0x57cb35ec2be0 ---------A   01930  PRINT"SORRY, FRIEND, BUT YOU BLEW YOUR WAD."
    0x57cb35ec2c40 ----------   01940  PRINT
    0x57cb35ec2cd0 ---------A   01950  PRINT
    0x57cb35ec2f10 ---------A   01960  INPUT"TRY AGAIN (YES OR NO)";A$
    0x57cb35ec2f70 ----------   01970  PRINT
    0x57cb35ec3000 ---------A   01980  PRINT
    0x57cb35ec3290 ---------A   01990  IF A$="YES" THEN 1110
    0x57cb35ec3400 ---------A   02000  PRINT"O.K., HOPE YOU HAD FUN!"
    0x57cb35ec3460 ---------A   02010  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02020 - 10000    7990 

 */



/*
 *  Symbol Table Listing for 'basic/aceyducy.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/aceyducy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57cb35eb16d0 ---------A   01000  PRINT TAB(26);"ACEY DUCEY CARD GAME"
    0x57cb35eb1670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57cb35ea22b0 ---------A   01020  PRINT
    0x57cb35eb17f0 ---------A   01030  PRINT
    0x57cb35eb2040 ---------A   01040  PRINT"ACEY-DUCEY IS PLAYED IN THE FOLLOWING MANNER "
    0x57cb35eb1e40 ---------A   01050  PRINT"THE DEALER (COMPUTER) DEALS TWO CARDS FACE UP"
    0x57cb35eb2500 ---------A   01060  PRINT"YOU HAVE AN OPTION TO BET OR NOT BET DEPENDING"
    0x57cb35eb1c60 ---------A   01070  PRINT"ON WHETHER OR NOT YOU FEEL THE CARD WILL HAVE"
    0x57cb35eb41c0 ---------A   01080  PRINT"A VALUE BETWEEN THE FIRST TWO."
    0x57cb35eb26e0 ---------A   01090  PRINT"IF YOU DO NOT WANT TO BET, INPUT A 0"
    0x57cb35eb2b80 ---------A   01100  N=1100
    0x57cb35eb3e70 ---------A T 01110  Q=100
    0x57cb35eb9d80 ---------A T 01120  PRINT "YOU NOW HAVE";Q;"DOLLARS."
    0x57cb35eb9de0 ---------A   01130  PRINT
    0x57cb35eb3ff0 ---------A   01140  GOTO 1190
    0x57cb35eb40b0 ---------A T 01150  Q=Q+M
    0x57cb35eba1e0 ---------A   01160  GOTO 1120
    0x57cb35eba530 ---------A T 01170  Q=Q-M
    0x57cb35eba5c0 ---------A   01180  GOTO 1120
    0x57cb35eba6f0 ---------A T 01190  PRINT"HERE ARE YOUR NEXT TWO CARDS: "
    0x57cb35ebad90 ---------A T 01200  A=INT(14*RND(1))+2
    0x57cb35ebafe0 ---------A   01210  IF A<2 THEN 1200
    0x57cb35ebb240 ---------A   01220  IF A>14 THEN 1200
    0x57cb35ebb8e0 ---------A T 01230  B=INT(14*RND(1))+2
    0x57cb35ebbb30 ---------A   01240  IF B<2 THEN 1230
    0x57cb35ebbd90 ---------A   01250  IF B>14 THEN 1230
    0x57cb35ebc010 ---------A   01260  IF A>=B THEN 1200
    0x57cb35ebc270 ---------A   01270  IF A<11 THEN 1320
    0x57cb35ebc4d0 ---------A   01280  IF A=11 THEN 1340
    0x57cb35ebc730 ---------A   01290  IF A=12 THEN 1360
    0x57cb35ebc990 ---------A   01300  IF A=13 THEN 1380
    0x57cb35ebcbf0 ---------A   01310  IF A=14 THEN 1400
    0x57cb35ebcd50 ---------A T 01320  PRINT A
    0x57cb35ebcfe0 ---------A   01330  GOTO 1410
    0x57cb35ebd130 ---------A T 01340  PRINT"JACK"
    0x57cb35ebd1b0 ---------A   01350  GOTO 1410
    0x57cb35ebd300 ---------A T 01360  PRINT"QUEEN"
    0x57cb35ebd380 ---------A   01370  GOTO 1410
    0x57cb35ebd4d0 ---------A T 01380  PRINT"KING"
    0x57cb35ebd550 ---------A   01390  GOTO 1410
    0x57cb35ebd6a0 ---------A T 01400  PRINT"ACE"
    0x57cb35ebd900 ---------A T 01410  IF B<11 THEN 1460
    0x57cb35ebdb60 ---------A   01420  IF B=11 THEN 1480
    0x57cb35ebddc0 ---------A   01430  IF B=12 THEN 1500
    0x57cb35ebe020 ---------A   01440  IF B=13 THEN 1520
    0x57cb35ebe280 ---------A   01450  IF B=14 THEN 1540
    0x57cb35ebe3e0 ---------A T 01460  PRINT B
    0x57cb35ebe460 ---------A   01470  GOTO 1560
    0x57cb35ebe5b0 ---------A T 01480  PRINT"JACK"
    0x57cb35ebe630 ---------A   01490  GOTO 1560
    0x57cb35ebe780 ---------A T 01500  PRINT"QUEEN"
    0x57cb35ebe800 ---------A   01510  GOTO 1560
    0x57cb35ebe950 ---------A T 01520  PRINT"KING"
    0x57cb35ebe9d0 ---------A   01530  GOTO 1560
    0x57cb35ebeb20 ---------A T 01540  PRINT"ACE"
    0x57cb35ebeba0 ---------A   01550  PRINT
    0x57cb35ebec00 ---------A T 01560  PRINT
    0x57cb35ebed80 ---------A   01570  INPUT"WHAT IS YOUR BET";M
    0x57cb35ebefe0 ---------A   01580  IF M<>0 THEN 1620
    0x57cb35ebf140 ---------A   01590  PRINT"CHICKEN!!"
    0x57cb35ebf1c0 ---------A   01600  PRINT
    0x57cb35ebf240 ---------A   01610  GOTO 1190
    0x57cb35ebf4d0 ---------A T 01620  IF M<=Q THEN 1660
    0x57cb35ebf670 ---------A   01630  PRINT"SORRY, MY FRIEND, BUT YOU BET TOO MUCH."
    0x57cb35ebf9d0 ---------A   01640  PRINT"YOU HAVE ONLY ";Q;" DOLLARS TO BET."
    0x57cb35ebfe40 ---------A   01650  GOTO 1560
    0x57cb35ec04d0 ---------A T 01660  C=INT(14*RND(1))+2
    0x57cb35ec0720 ---------A   01670  IF C<2 THEN 1660
    0x57cb35ec0980 ---------A   01680  IF C>14 THEN 1660
    0x57cb35ec0be0 ---------A   01690  IF C<11 THEN 1740
    0x57cb35ec0e40 ---------A   01700  IF C=11 THEN 1760
    0x57cb35ec10a0 ---------A   01710  IF C=12 THEN 1780
    0x57cb35ec1300 ---------A   01720  IF C=13 THEN 1800
    0x57cb35ec1560 ---------A   01730  IF C=14 THEN 1820
    0x57cb35ec16c0 ---------A T 01740  PRINT C
    0x57cb35ec1740 ---------A   01750  GOTO 1840
    0x57cb35ec1890 ---------A T 01760  PRINT"JACK"
    0x57cb35ec1910 ---------A   01770  GOTO 1840
    0x57cb35ec1a60 ---------A T 01780  PRINT"QUEEN"
    0x57cb35ec1ae0 ---------A   01790  GOTO 1840
    0x57cb35ec1c30 ---------A T 01800  PRINT"KING"
    0x57cb35ec1cb0 ---------A   01810  GOTO 1840
    0x57cb35ec1e00 ---------A T 01820  PRINT "ACE"
    0x57cb35ec1e80 ---------A   01830  PRINT
    0x57cb35ec2100 ---------A T 01840  IF C>A THEN 1860
    0x57cb35ec2180 ---------A   01850  GOTO 1890
    0x57cb35ec23f0 ---------A T 01860  IF C>=B THEN 1890
    0x57cb35ec2550 ---------A   01870  PRINT"YOU WIN!!!"
    0x57cb35ec25b0 ---------A   01880  GOTO 1150
    0x57cb35ec2700 ---------A T 01890  PRINT"SORRY, YOU LOSE"
    0x57cb35ec2980 ---------A   01900  IF M<Q THEN 1170
    0x57cb35ec2a00 ---------A   01910  PRINT
    0x57cb35ec2aa0 ---------A   01920  PRINT
    0x57cb35ec2be0 ---------A   01930  PRINT"SORRY, FRIEND, BUT YOU BLEW YOUR WAD."
    0x57cb35ec2c40 ---------A   01940  PRINT
    0x57cb35ec2cd0 ---------A   01950  PRINT
    0x57cb35ec2f10 ---------A   01960  INPUT"TRY AGAIN (YES OR NO)";A$
    0x57cb35ec2f70 ---------A   01970  PRINT
    0x57cb35ec3000 ---------A   01980  PRINT
    0x57cb35ec3290 ---------A   01990  IF A$="YES" THEN 1110
    0x57cb35ec3400 ---------A   02000  PRINT"O.K., HOPE YOU HAD FUN!"
    0x57cb35ec3460 ---------A   02010  END
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
char*  A_str;                                     // Basic: A$ 
int    B_int;                                     // Basic: B 
int    C_int;                                     // Basic: C 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
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
    // 01000 PRINT TAB(26);"ACEY DUCEY CARD GAME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,26);strcat(buf,"ACEY DUCEY CARD GAME");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT"ACEY-DUCEY IS PLAYED IN THE FOLLOWING MANNER "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ACEY-DUCEY IS PLAYED IN THE FOLLOWING MANNER ");strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT"THE DEALER (COMPUTER) DEALS TWO CARDS FACE UP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE DEALER (COMPUTER) DEALS TWO CARDS FACE UP");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT"YOU HAVE AN OPTION TO BET OR NOT BET DEPENDING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE AN OPTION TO BET OR NOT BET DEPENDING");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT"ON WHETHER OR NOT YOU FEEL THE CARD WILL HAVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ON WHETHER OR NOT YOU FEEL THE CARD WILL HAVE");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT"A VALUE BETWEEN THE FIRST TWO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A VALUE BETWEEN THE FIRST TWO.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT"IF YOU DO NOT WANT TO BET, INPUT A 0"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF YOU DO NOT WANT TO BET, INPUT A 0");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 N=1100
    N_int = 100;

  Lbl_01110:
    // 01110 Q=100
    Q_int = 100;

  Lbl_01120:
    // 01120 PRINT "YOU NOW HAVE";Q;"DOLLARS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU NOW HAVE"); b2c_INT(buf,Q_int);strcat(buf,"DOLLARS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 GOTO 1190
    goto Lbl_01190;

  Lbl_01150:
    // 01150 Q=Q+M
    Q_int = Q_int+M_int;
    // 01160 GOTO 1120
    goto Lbl_01120;

  Lbl_01170:
    // 01170 Q=Q-M
    Q_int = Q_int-M_int;
    // 01180 GOTO 1120
    goto Lbl_01120;

  Lbl_01190:
    // 01190 PRINT"HERE ARE YOUR NEXT TWO CARDS: "
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE ARE YOUR NEXT TWO CARDS: ");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01200:
    // 01200 A=INT(14*RND(1))+2
    A_int = INT(14*RND(1))+2;
    // 01210 IF A<2 THEN 1200
    if(A_int<2)goto Lbl_01200;
    // 01220 IF A>14 THEN 1200
    if(A_int>14)goto Lbl_01200;

  Lbl_01230:
    // 01230 B=INT(14*RND(1))+2
    B_int = INT(14*RND(1))+2;
    // 01240 IF B<2 THEN 1230
    if(B_int<2)goto Lbl_01230;
    // 01250 IF B>14 THEN 1230
    if(B_int>14)goto Lbl_01230;
    // 01260 IF A>=B THEN 1200
    if(A_int>=B_int)goto Lbl_01200;
    // 01270 IF A<11 THEN 1320
    if(A_int<11)goto Lbl_01320;
    // 01280 IF A=11 THEN 1340
    if(A_int==11)goto Lbl_01340;
    // 01290 IF A=12 THEN 1360
    if(A_int==12)goto Lbl_01360;
    // 01300 IF A=13 THEN 1380
    if(A_int==13)goto Lbl_01380;
    // 01310 IF A=14 THEN 1400
    if(A_int==14)goto Lbl_01400;

  Lbl_01320:
    // 01320 PRINT A
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,A_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01330 GOTO 1410
    goto Lbl_01410;

  Lbl_01340:
    // 01340 PRINT"JACK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"JACK");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 GOTO 1410
    goto Lbl_01410;

  Lbl_01360:
    // 01360 PRINT"QUEEN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"QUEEN");strcat(buf,"\n");fputs(buf,fh); };
    // 01370 GOTO 1410
    goto Lbl_01410;

  Lbl_01380:
    // 01380 PRINT"KING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"KING");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 GOTO 1410
    goto Lbl_01410;

  Lbl_01400:
    // 01400 PRINT"ACE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ACE");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01410:
    // 01410 IF B<11 THEN 1460
    if(B_int<11)goto Lbl_01460;
    // 01420 IF B=11 THEN 1480
    if(B_int==11)goto Lbl_01480;
    // 01430 IF B=12 THEN 1500
    if(B_int==12)goto Lbl_01500;
    // 01440 IF B=13 THEN 1520
    if(B_int==13)goto Lbl_01520;
    // 01450 IF B=14 THEN 1540
    if(B_int==14)goto Lbl_01540;

  Lbl_01460:
    // 01460 PRINT B
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,B_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01470 GOTO 1560
    goto Lbl_01560;

  Lbl_01480:
    // 01480 PRINT"JACK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"JACK");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 GOTO 1560
    goto Lbl_01560;

  Lbl_01500:
    // 01500 PRINT"QUEEN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"QUEEN");strcat(buf,"\n");fputs(buf,fh); };
    // 01510 GOTO 1560
    goto Lbl_01560;

  Lbl_01520:
    // 01520 PRINT"KING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"KING");strcat(buf,"\n");fputs(buf,fh); };
    // 01530 GOTO 1560
    goto Lbl_01560;

  Lbl_01540:
    // 01540 PRINT"ACE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ACE");strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01560:
    // 01560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 INPUT"WHAT IS YOUR BET";M
    // Start of Basic INPUT statement 01570
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"WHAT IS YOUR BET");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01570
    // 01580 IF M<>0 THEN 1620
    if(M_int!=0)goto Lbl_01620;
    // 01590 PRINT"CHICKEN!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHICKEN!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01600 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01610 GOTO 1190
    goto Lbl_01190;

  Lbl_01620:
    // 01620 IF M<=Q THEN 1660
    if(M_int<=Q_int)goto Lbl_01660;
    // 01630 PRINT"SORRY, MY FRIEND, BUT YOU BET TOO MUCH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, MY FRIEND, BUT YOU BET TOO MUCH.");strcat(buf,"\n");fputs(buf,fh); };
    // 01640 PRINT"YOU HAVE ONLY ";Q;" DOLLARS TO BET."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE ONLY "); b2c_INT(buf,Q_int);strcat(buf," DOLLARS TO BET.");strcat(buf,"\n");fputs(buf,fh); };
    // 01650 GOTO 1560
    goto Lbl_01560;

  Lbl_01660:
    // 01660 C=INT(14*RND(1))+2
    C_int = INT(14*RND(1))+2;
    // 01670 IF C<2 THEN 1660
    if(C_int<2)goto Lbl_01660;
    // 01680 IF C>14 THEN 1660
    if(C_int>14)goto Lbl_01660;
    // 01690 IF C<11 THEN 1740
    if(C_int<11)goto Lbl_01740;
    // 01700 IF C=11 THEN 1760
    if(C_int==11)goto Lbl_01760;
    // 01710 IF C=12 THEN 1780
    if(C_int==12)goto Lbl_01780;
    // 01720 IF C=13 THEN 1800
    if(C_int==13)goto Lbl_01800;
    // 01730 IF C=14 THEN 1820
    if(C_int==14)goto Lbl_01820;

  Lbl_01740:
    // 01740 PRINT C
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,C_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01750 GOTO 1840
    goto Lbl_01840;

  Lbl_01760:
    // 01760 PRINT"JACK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"JACK");strcat(buf,"\n");fputs(buf,fh); };
    // 01770 GOTO 1840
    goto Lbl_01840;

  Lbl_01780:
    // 01780 PRINT"QUEEN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"QUEEN");strcat(buf,"\n");fputs(buf,fh); };
    // 01790 GOTO 1840
    goto Lbl_01840;

  Lbl_01800:
    // 01800 PRINT"KING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"KING");strcat(buf,"\n");fputs(buf,fh); };
    // 01810 GOTO 1840
    goto Lbl_01840;

  Lbl_01820:
    // 01820 PRINT "ACE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ACE");strcat(buf,"\n");fputs(buf,fh); };
    // 01830 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01840:
    // 01840 IF C>A THEN 1860
    if(C_int>A_int)goto Lbl_01860;
    // 01850 GOTO 1890
    goto Lbl_01890;

  Lbl_01860:
    // 01860 IF C>=B THEN 1890
    if(C_int>=B_int)goto Lbl_01890;
    // 01870 PRINT"YOU WIN!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WIN!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01880 GOTO 1150
    goto Lbl_01150;

  Lbl_01890:
    // 01890 PRINT"SORRY, YOU LOSE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, YOU LOSE");strcat(buf,"\n");fputs(buf,fh); };
    // 01900 IF M<Q THEN 1170
    if(M_int<Q_int)goto Lbl_01170;
    // 01910 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01920 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01930 PRINT"SORRY, FRIEND, BUT YOU BLEW YOUR WAD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, FRIEND, BUT YOU BLEW YOUR WAD.");strcat(buf,"\n");fputs(buf,fh); };
    // 01940 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01950 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01960 INPUT"TRY AGAIN (YES OR NO)";A$
    // Start of Basic INPUT statement 01960
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"TRY AGAIN (YES OR NO)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01960
    // 01970 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01980 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01990 IF A$="YES" THEN 1110
    if(strcmp(A_str,"YES")==0)goto Lbl_01110;
    // 02000 PRINT"O.K., HOPE YOU HAD FUN!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"O.K., HOPE YOU HAD FUN!");strcat(buf,"\n");fputs(buf,fh); };
    // 02010 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
