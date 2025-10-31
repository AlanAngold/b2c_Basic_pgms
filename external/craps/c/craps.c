/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/craps.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60570b21a6d0 ---------A   00005  PRINT TAB(33);"CRAPS"
    0x60570b21a670 ---------A   00010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60570b20b2b0 ---------A   00012  PRINT:PRINT:PRINT
    0x60570b21bb80 ---------A   00015  LET R=0
    0x60570b21b0a0 ---------A   00020  PRINT"2,3,12 ARE LOSERS; 4,5,6,8,9,10 ARE POINTS; 7,11 ARE NATURAL WINNERS."
    0x60570b21cf90 ---------A   00021  LET T=1
    0x60570b21d0a0 ---------A   00022  PRINT "PICK A NUMBER AND INPUT TO ROLL DICE";
    0x60570b21b6c0 ---------A   00023  INPUT Z
    0x60570b21d050 ---------A T 00024  LET X=(RND(0))
    0x60570b21ce10 ---------A   00025  LET T =T+1
    0x60570b222ea0 ---------A   00026  IF T<=Z GOTO 24
    0x60570b223040 ---------A T 00027  PRINT"INPUT THE AMOUNT OF YOUR WAGER.";
    0x60570b223240 ---------A   00028  INPUT F
    0x60570b223380 ---------A   00030  PRINT "I WILL NOW THROW THE DICE"
    0x60570b223920 ---------A T 00040  LET E=INT(7*RND(1))
    0x60570b223eb0 ---------A   00041  LET S=INT(7*RND(1))
    0x60570b224200 ---------A   00042  LET X=E+S
    0x60570b224430 ---------A   00050  IF X=7 GOTO 180 
    0x60570b224690 ---------A   00055  IF X=11 GOTO 180
    0x60570b2248f0 ---------A   00060  IF X=1 GOTO 40
    0x60570b224b50 ---------A   00062  IF X=2 GOTO 195
    0x60570b224db0 ---------A   00065  IF X=0 GOTO 40
    0x60570b225010 ---------A   00070  IF X=2 GOTO 200
    0x60570b225270 ---------A   00080  IF X=3 GOTO 200
    0x60570b2254d0 ---------A   00090  IF X=12 GOTO 200
    0x60570b225730 ---------A   00125  IF X=5 GOTO 220
    0x60570b225990 ---------A   00130  IF X =6 GOTO 220
    0x60570b225bf0 ---------A   00140  IF X=8 GOTO 220
    0x60570b225e50 ---------A   00150  IF X=9 GOTO 220
    0x60570b2260b0 ---------A   00160  IF X =10 GOTO 220
    0x60570b226310 ---------A   00170  IF X=4 GOTO 220
    0x60570b226570 ---------A T 00180  PRINT X "- NATURAL....A WINNER!!!!"
    0x60570b2269b0 ---------A   00185  PRINT X"PAYS EVEN MONEY, YOU WIN"F"DOLLARS"
    0x60570b226c50 ---------A   00190  GOTO 210
    0x60570b226ec0 ---------A T 00195  PRINT X"- SNAKE EYES....YOU LOSE."
    0x60570b227220 ---------A   00196  PRINT "YOU LOSE"F "DOLLARS."
    0x60570b227560 ---------A   00197  LET F=0-F
    0x60570b2275e0 ---------A   00198  GOTO 210
    0x60570b227840 ---------A T 00200  PRINT X " - CRAPS...YOU LOSE."
    0x60570b227ba0 ---------A   00205  PRINT "YOU LOSE"F"DOLLARS."
    0x60570b227ee0 ---------A   00206  LET F=0-F
    0x60570b228230 ---------A T 00210  LET R= R+F
    0x60570b2282c0 ---------A   00211  GOTO 320
    0x60570b228520 ---------A T 00220  PRINT X "IS THE POINT. I WILL ROLL AGAIN"
    0x60570b228ac0 ---------A T 00230  LET H=INT(7*RND(1))
    0x60570b229050 ---------A   00231  LET Q=INT(7*RND(1))
    0x60570b229460 ---------A   00232  LET O=H+Q
    0x60570b229690 ---------A   00240  IF O=1 GOTO 230
    0x60570b2298f0 ---------A   00250  IF O=7 GOTO 290
    0x60570b229b50 ---------A   00255  IF O=0 GOTO 230
    0x60570b229dd0 ---------A   00260  IF O=X GOTO 310
    0x60570b22a080 ---------A   00270  PRINT O " - NO POINT. I WILL ROLL AGAIN"
    0x60570b22a110 ---------A   00280  GOTO 230
    0x60570b22a360 ---------A T 00290  PRINT O "- CRAPS. YOU LOSE."
    0x60570b22a5c0 ---------A   00291  PRINT "YOU LOSE $"F
    0x60570b22a900 ---------A   00292  F=0-F
    0x60570b22a970 ---------A   00293  GOTO 210
    0x60570b22aa00 ----------   00300  GOTO 320
    0x60570b22ac90 ---------A T 00310  PRINT X"- A WINNER.........CONGRATS!!!!!!!!"
    0x60570b22b210 ---------A   00311  PRINT X "AT 2 TO 1 ODDS PAYS YOU...LET ME SEE..."2*F"DOLLARS"
    0x60570b22b550 ---------A   00312  LET F=2*F
    0x60570b22b5f0 ---------A   00313  GOTO 210
    0x60570b22b780 ---------A T 00320  PRINT " IF YOU WANT TO PLAY AGAIN PRINT 5 IF NOT PRINT 2";
    0x60570b22b9a0 ---------A   00330  INPUT M
    0x60570b22bbe0 ---------A   00331  IF R<0 GOTO 334
    0x60570b22c250 ---------A   00332  IF R>0 GOTO 336
    0x60570b22c4b0 ---------A   00333  IF R=0 GOTO 338
    0x60570b22c740 ---------A T 00334  PRINT "YOU ARE NOW UNDER $";-R
    0x60570b22c7d0 ---------A   00335  GOTO 340
    0x60570b22ca20 ---------A T 00336  PRINT "YOU ARE NOW AHEAD $";R
    0x60570b22cab0 ---------A   00337  GOTO 340
    0x60570b22cc00 ---------A T 00338  PRINT "YOU ARE NOW EVEN AT 0"
    0x60570b22ce40 ---------A T 00340  IF M=5 GOTO 27
    0x60570b22d0a0 ---------A   00341  IF R<0 GOTO 350
    0x60570b22d300 ---------A   00342  IF R>0 GOTO 353
    0x60570b22d560 ---------A   00343  IF R=0 GOTO 355
    0x60570b22d720 ---------A T 00350  PRINT"TOO BAD, YOU ARE IN THE HOLE. COME AGAIN."
    0x60570b22d7d0 ---------A   00351  GOTO 360
    0x60570b22d940 ---------A T 00353  PRINT"CONGRATULATIONS---YOU CAME OUT A WINNER. COME AGAIN!"
    0x60570b22d9f0 ---------A   00354  GOTO 360
    0x60570b22db70 ---------A T 00355  PRINT"CONGRATULATIONS---YOU CAME OUT EVEN, NOT BAD FOR AN AMATEUR"
    0x60570b22dbd0 ---------A T 00360  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00024      00026T
     00027      00340T
     00040      00060T, 00065T
     00180      00050T, 00055T
     00195      00062T
     00200      00070T, 00080T, 00090T
     00210      00190T, 00198T, 00293T, 00313T
     00220      00125T, 00130T, 00140T, 00150T, 00160T, 00170T
     00230      00240T, 00255T, 00280T
     00290      00250T
     00310      00260T
     00320      00211T, 00300T
     00334      00331T
     00336      00332T
     00338      00333T
     00340      00335T, 00337T
     00350      00341T
     00353      00342T
     00355      00343T
     00360      00351T, 00354T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x60570b21a6d0 (00005)   0x60570b21a6d0 (00005)   0x60570b22dbd0 (00360)   0x60570b22dbd0 (00360)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/craps.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60570b21a6d0 ---------A   00005  PRINT TAB(33);"CRAPS"
    0x60570b21a670 ---------A   00010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60570b21b2d0 ----------   00012  PRINT
    0x60570b21b910 ----------        a PRINT
    0x60570b20b2b0 ---------A        b PRINT
    0x60570b21bb80 ---------A   00015  LET R=0
    0x60570b21b0a0 ---------A   00020  PRINT"2,3,12 ARE LOSERS; 4,5,6,8,9,10 ARE POINTS; 7,11 ARE NATURAL WINNERS."
    0x60570b21cf90 ---------A   00021  LET T=1
    0x60570b21d0a0 ---------A   00022  PRINT "PICK A NUMBER AND INPUT TO ROLL DICE";
    0x60570b21b6c0 ---------A   00023  INPUT Z
    0x60570b21d050 ---------A T 00024  LET X=(RND(0))
    0x60570b21ce10 ---------A   00025  LET T =T+1
    0x60570b222ea0 ---------A   00026  IF T<=Z GOTO 24
    0x60570b223040 ---------A T 00027  PRINT"INPUT THE AMOUNT OF YOUR WAGER.";
    0x60570b223240 ---------A   00028  INPUT F
    0x60570b223380 ---------A   00030  PRINT "I WILL NOW THROW THE DICE"
    0x60570b223920 ---------A T 00040  LET E=INT(7*RND(1))
    0x60570b223eb0 ---------A   00041  LET S=INT(7*RND(1))
    0x60570b224200 ---------A   00042  LET X=E+S
    0x60570b224430 ---------A   00050  IF X=7 GOTO 180 
    0x60570b224690 ---------A   00055  IF X=11 GOTO 180
    0x60570b2248f0 ---------A   00060  IF X=1 GOTO 40
    0x60570b224b50 ---------A   00062  IF X=2 GOTO 195
    0x60570b224db0 ---------A   00065  IF X=0 GOTO 40
    0x60570b225010 ---------A   00070  IF X=2 GOTO 200
    0x60570b225270 ---------A   00080  IF X=3 GOTO 200
    0x60570b2254d0 ---------A   00090  IF X=12 GOTO 200
    0x60570b225730 ---------A   00125  IF X=5 GOTO 220
    0x60570b225990 ---------A   00130  IF X =6 GOTO 220
    0x60570b225bf0 ---------A   00140  IF X=8 GOTO 220
    0x60570b225e50 ---------A   00150  IF X=9 GOTO 220
    0x60570b2260b0 ---------A   00160  IF X =10 GOTO 220
    0x60570b226310 ---------A   00170  IF X=4 GOTO 220
    0x60570b226570 ---------A T 00180  PRINT X "- NATURAL....A WINNER!!!!"
    0x60570b2269b0 ---------A   00185  PRINT X"PAYS EVEN MONEY, YOU WIN"F"DOLLARS"
    0x60570b226c50 ---------A   00190  GOTO 210
    0x60570b226ec0 ---------A T 00195  PRINT X"- SNAKE EYES....YOU LOSE."
    0x60570b227220 ---------A   00196  PRINT "YOU LOSE"F "DOLLARS."
    0x60570b227560 ---------A   00197  LET F=0-F
    0x60570b2275e0 ---------A   00198  GOTO 210
    0x60570b227840 ---------A T 00200  PRINT X " - CRAPS...YOU LOSE."
    0x60570b227ba0 ---------A   00205  PRINT "YOU LOSE"F"DOLLARS."
    0x60570b227ee0 ---------A   00206  LET F=0-F
    0x60570b228230 ---------A T 00210  LET R= R+F
    0x60570b2282c0 ---------A   00211  GOTO 320
    0x60570b228520 ---------A T 00220  PRINT X "IS THE POINT. I WILL ROLL AGAIN"
    0x60570b228ac0 ---------A T 00230  LET H=INT(7*RND(1))
    0x60570b229050 ---------A   00231  LET Q=INT(7*RND(1))
    0x60570b229460 ---------A   00232  LET O=H+Q
    0x60570b229690 ---------A   00240  IF O=1 GOTO 230
    0x60570b2298f0 ---------A   00250  IF O=7 GOTO 290
    0x60570b229b50 ---------A   00255  IF O=0 GOTO 230
    0x60570b229dd0 ---------A   00260  IF O=X GOTO 310
    0x60570b22a080 ---------A   00270  PRINT O " - NO POINT. I WILL ROLL AGAIN"
    0x60570b22a110 ---------A   00280  GOTO 230
    0x60570b22a360 ---------A T 00290  PRINT O "- CRAPS. YOU LOSE."
    0x60570b22a5c0 ---------A   00291  PRINT "YOU LOSE $"F
    0x60570b22a900 ---------A   00292  F=0-F
    0x60570b22a970 ---------A   00293  GOTO 210
    0x60570b22aa00 ----------   00300  GOTO 320
    0x60570b22ac90 ---------A T 00310  PRINT X"- A WINNER.........CONGRATS!!!!!!!!"
    0x60570b22b210 ---------A   00311  PRINT X "AT 2 TO 1 ODDS PAYS YOU...LET ME SEE..."2*F"DOLLARS"
    0x60570b22b550 ---------A   00312  LET F=2*F
    0x60570b22b5f0 ---------A   00313  GOTO 210
    0x60570b22b780 ---------A T 00320  PRINT " IF YOU WANT TO PLAY AGAIN PRINT 5 IF NOT PRINT 2";
    0x60570b22b9a0 ---------A   00330  INPUT M
    0x60570b22bbe0 ---------A   00331  IF R<0 GOTO 334
    0x60570b22c250 ---------A   00332  IF R>0 GOTO 336
    0x60570b22c4b0 ---------A   00333  IF R=0 GOTO 338
    0x60570b22c740 ---------A T 00334  PRINT "YOU ARE NOW UNDER $";-R
    0x60570b22c7d0 ---------A   00335  GOTO 340
    0x60570b22ca20 ---------A T 00336  PRINT "YOU ARE NOW AHEAD $";R
    0x60570b22cab0 ---------A   00337  GOTO 340
    0x60570b22cc00 ---------A T 00338  PRINT "YOU ARE NOW EVEN AT 0"
    0x60570b22ce40 ---------A T 00340  IF M=5 GOTO 27
    0x60570b22d0a0 ---------A   00341  IF R<0 GOTO 350
    0x60570b22d300 ---------A   00342  IF R>0 GOTO 353
    0x60570b22d560 ---------A   00343  IF R=0 GOTO 355
    0x60570b22d720 ---------A T 00350  PRINT"TOO BAD, YOU ARE IN THE HOLE. COME AGAIN."
    0x60570b22d7d0 ---------A   00351  GOTO 360
    0x60570b22d940 ---------A T 00353  PRINT"CONGRATULATIONS---YOU CAME OUT A WINNER. COME AGAIN!"
    0x60570b22d9f0 ---------A   00354  GOTO 360
    0x60570b22db70 ---------A T 00355  PRINT"CONGRATULATIONS---YOU CAME OUT EVEN, NOT BAD FOR AN AMATEUR"
    0x60570b22dbd0 ---------A T 00360  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/craps.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60570b21a6d0 ---------A   01000  PRINT TAB(33);"CRAPS"
    0x60570b21a670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60570b21b2d0 ----------   01020  PRINT
    0x60570b21b910 ----------   01030  PRINT
    0x60570b20b2b0 ---------A   01040  PRINT
    0x60570b21bb80 ---------A   01050  LET R=0
    0x60570b21b0a0 ---------A   01060  PRINT"2,3,12 ARE LOSERS; 4,5,6,8,9,10 ARE POINTS; 7,11 ARE NATURAL WINNERS."
    0x60570b21cf90 ---------A   01070  LET T=1
    0x60570b21d0a0 ---------A   01080  PRINT "PICK A NUMBER AND INPUT TO ROLL DICE";
    0x60570b21b6c0 ---------A   01090  INPUT Z
    0x60570b21d050 ---------A   01100  LET X=(RND(0))
    0x60570b21ce10 ---------A   01110  LET T =T+1
    0x60570b222ea0 ---------A   01120  IF T<=Z GOTO 1100
    0x60570b223040 ---------A   01130  PRINT"INPUT THE AMOUNT OF YOUR WAGER.";
    0x60570b223240 ---------A   01140  INPUT F
    0x60570b223380 ---------A   01150  PRINT "I WILL NOW THROW THE DICE"
    0x60570b223920 ---------A   01160  LET E=INT(7*RND(1))
    0x60570b223eb0 ---------A   01170  LET S=INT(7*RND(1))
    0x60570b224200 ---------A   01180  LET X=E+S
    0x60570b224430 ---------A   01190  IF X=7 GOTO 1330 
    0x60570b224690 ---------A   01200  IF X=11 GOTO 1330
    0x60570b2248f0 ---------A   01210  IF X=1 GOTO 1160
    0x60570b224b50 ---------A   01220  IF X=2 GOTO 1360
    0x60570b224db0 ---------A   01230  IF X=0 GOTO 1160
    0x60570b225010 ---------A   01240  IF X=2 GOTO 1400
    0x60570b225270 ---------A   01250  IF X=3 GOTO 1400
    0x60570b2254d0 ---------A   01260  IF X=12 GOTO 1400
    0x60570b225730 ---------A   01270  IF X=5 GOTO 1450
    0x60570b225990 ---------A   01280  IF X =6 GOTO 1450
    0x60570b225bf0 ---------A   01290  IF X=8 GOTO 1450
    0x60570b225e50 ---------A   01300  IF X=9 GOTO 1450
    0x60570b2260b0 ---------A   01310  IF X =10 GOTO 1450
    0x60570b226310 ---------A   01320  IF X=4 GOTO 1450
    0x60570b226570 ---------A   01330  PRINT X "- NATURAL....A WINNER!!!!"
    0x60570b2269b0 ---------A   01340  PRINT X"PAYS EVEN MONEY, YOU WIN"F"DOLLARS"
    0x60570b226c50 ---------A   01350  GOTO 1430
    0x60570b226ec0 ---------A   01360  PRINT X"- SNAKE EYES....YOU LOSE."
    0x60570b227220 ---------A   01370  PRINT "YOU LOSE"F "DOLLARS."
    0x60570b227560 ---------A   01380  LET F=0-F
    0x60570b2275e0 ---------A   01390  GOTO 1430
    0x60570b227840 ---------A   01400  PRINT X " - CRAPS...YOU LOSE."
    0x60570b227ba0 ---------A   01410  PRINT "YOU LOSE"F"DOLLARS."
    0x60570b227ee0 ---------A   01420  LET F=0-F
    0x60570b228230 ---------A   01430  LET R= R+F
    0x60570b2282c0 ---------A   01440  GOTO 1640
    0x60570b228520 ---------A   01450  PRINT X "IS THE POINT. I WILL ROLL AGAIN"
    0x60570b228ac0 ---------A   01460  LET H=INT(7*RND(1))
    0x60570b229050 ---------A   01470  LET Q=INT(7*RND(1))
    0x60570b229460 ---------A   01480  LET O=H+Q
    0x60570b229690 ---------A   01490  IF O=1 GOTO 1460
    0x60570b2298f0 ---------A   01500  IF O=7 GOTO 1550
    0x60570b229b50 ---------A   01510  IF O=0 GOTO 1460
    0x60570b229dd0 ---------A   01520  IF O=X GOTO 1600
    0x60570b22a080 ---------A   01530  PRINT O " - NO POINT. I WILL ROLL AGAIN"
    0x60570b22a110 ---------A   01540  GOTO 1460
    0x60570b22a360 ---------A   01550  PRINT O "- CRAPS. YOU LOSE."
    0x60570b22a5c0 ---------A   01560  PRINT "YOU LOSE $"F
    0x60570b22a900 ---------A   01570  F=0-F
    0x60570b22a970 ---------A   01580  GOTO 1430
    0x60570b22aa00 ----------   01590  GOTO 1640
    0x60570b22ac90 ---------A   01600  PRINT X"- A WINNER.........CONGRATS!!!!!!!!"
    0x60570b22b210 ---------A   01610  PRINT X "AT 2 TO 1 ODDS PAYS YOU...LET ME SEE..."2*F"DOLLARS"
    0x60570b22b550 ---------A   01620  LET F=2*F
    0x60570b22b5f0 ---------A   01630  GOTO 1430
    0x60570b22b780 ---------A   01640  PRINT " IF YOU WANT TO PLAY AGAIN PRINT 5 IF NOT PRINT 2";
    0x60570b22b9a0 ---------A   01650  INPUT M
    0x60570b22bbe0 ---------A   01660  IF R<0 GOTO 1690
    0x60570b22c250 ---------A   01670  IF R>0 GOTO 1710
    0x60570b22c4b0 ---------A   01680  IF R=0 GOTO 1730
    0x60570b22c740 ---------A   01690  PRINT "YOU ARE NOW UNDER $";-R
    0x60570b22c7d0 ---------A   01700  GOTO 1740
    0x60570b22ca20 ---------A   01710  PRINT "YOU ARE NOW AHEAD $";R
    0x60570b22cab0 ---------A   01720  GOTO 1740
    0x60570b22cc00 ---------A   01730  PRINT "YOU ARE NOW EVEN AT 0"
    0x60570b22ce40 ---------A   01740  IF M=5 GOTO 1130
    0x60570b22d0a0 ---------A   01750  IF R<0 GOTO 1780
    0x60570b22d300 ---------A   01760  IF R>0 GOTO 1800
    0x60570b22d560 ---------A   01770  IF R=0 GOTO 1820
    0x60570b22d720 ---------A   01780  PRINT"TOO BAD, YOU ARE IN THE HOLE. COME AGAIN."
    0x60570b22d7d0 ---------A   01790  GOTO 1830
    0x60570b22d940 ---------A   01800  PRINT"CONGRATULATIONS---YOU CAME OUT A WINNER. COME AGAIN!"
    0x60570b22d9f0 ---------A   01810  GOTO 1830
    0x60570b22db70 ---------A   01820  PRINT"CONGRATULATIONS---YOU CAME OUT EVEN, NOT BAD FOR AN AMATEUR"
    0x60570b22dbd0 ---------A   01830  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01830 - 10000    8180 

 */



/*
 *  Symbol Table Listing for 'basic/craps.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
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
    O                        Integer     
    OCT$            Function String          args=1, float  
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
 *  Listing of basic/craps.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60570b21a6d0 ---------A   01000  PRINT TAB(33);"CRAPS"
    0x60570b21a670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60570b21b2d0 ---------A   01020  PRINT
    0x60570b21b910 ---------A   01030  PRINT
    0x60570b20b2b0 ---------A   01040  PRINT
    0x60570b21bb80 ---------A   01050  LET R=0
    0x60570b21b0a0 ---------A   01060  PRINT"2,3,12 ARE LOSERS; 4,5,6,8,9,10 ARE POINTS; 7,11 ARE NATURAL WINNERS."
    0x60570b21cf90 ---------A   01070  LET T=1
    0x60570b21d0a0 ---------A   01080  PRINT "PICK A NUMBER AND INPUT TO ROLL DICE";
    0x60570b21b6c0 ---------A   01090  INPUT Z
    0x60570b21d050 ---------A T 01100  LET X=(RND(0))
    0x60570b21ce10 ---------A   01110  LET T =T+1
    0x60570b222ea0 ---------A   01120  IF T<=Z GOTO 1100
    0x60570b223040 ---------A T 01130  PRINT"INPUT THE AMOUNT OF YOUR WAGER.";
    0x60570b223240 ---------A   01140  INPUT F
    0x60570b223380 ---------A   01150  PRINT "I WILL NOW THROW THE DICE"
    0x60570b223920 ---------A T 01160  LET E=INT(7*RND(1))
    0x60570b223eb0 ---------A   01170  LET S=INT(7*RND(1))
    0x60570b224200 ---------A   01180  LET X=E+S
    0x60570b224430 ---------A   01190  IF X=7 GOTO 1330 
    0x60570b224690 ---------A   01200  IF X=11 GOTO 1330
    0x60570b2248f0 ---------A   01210  IF X=1 GOTO 1160
    0x60570b224b50 ---------A   01220  IF X=2 GOTO 1360
    0x60570b224db0 ---------A   01230  IF X=0 GOTO 1160
    0x60570b225010 ---------A   01240  IF X=2 GOTO 1400
    0x60570b225270 ---------A   01250  IF X=3 GOTO 1400
    0x60570b2254d0 ---------A   01260  IF X=12 GOTO 1400
    0x60570b225730 ---------A   01270  IF X=5 GOTO 1450
    0x60570b225990 ---------A   01280  IF X =6 GOTO 1450
    0x60570b225bf0 ---------A   01290  IF X=8 GOTO 1450
    0x60570b225e50 ---------A   01300  IF X=9 GOTO 1450
    0x60570b2260b0 ---------A   01310  IF X =10 GOTO 1450
    0x60570b226310 ---------A   01320  IF X=4 GOTO 1450
    0x60570b226570 ---------A T 01330  PRINT X "- NATURAL....A WINNER!!!!"
    0x60570b2269b0 ---------A   01340  PRINT X"PAYS EVEN MONEY, YOU WIN"F"DOLLARS"
    0x60570b226c50 ---------A   01350  GOTO 1430
    0x60570b226ec0 ---------A T 01360  PRINT X"- SNAKE EYES....YOU LOSE."
    0x60570b227220 ---------A   01370  PRINT "YOU LOSE"F "DOLLARS."
    0x60570b227560 ---------A   01380  LET F=0-F
    0x60570b2275e0 ---------A   01390  GOTO 1430
    0x60570b227840 ---------A T 01400  PRINT X " - CRAPS...YOU LOSE."
    0x60570b227ba0 ---------A   01410  PRINT "YOU LOSE"F"DOLLARS."
    0x60570b227ee0 ---------A   01420  LET F=0-F
    0x60570b228230 ---------A T 01430  LET R= R+F
    0x60570b2282c0 ---------A   01440  GOTO 1630
    0x60570b228520 ---------A T 01450  PRINT X "IS THE POINT. I WILL ROLL AGAIN"
    0x60570b228ac0 ---------A T 01460  LET H=INT(7*RND(1))
    0x60570b229050 ---------A   01470  LET Q=INT(7*RND(1))
    0x60570b229460 ---------A   01480  LET O=H+Q
    0x60570b229690 ---------A   01490  IF O=1 GOTO 1460
    0x60570b2298f0 ---------A   01500  IF O=7 GOTO 1550
    0x60570b229b50 ---------A   01510  IF O=0 GOTO 1460
    0x60570b229dd0 ---------A   01520  IF O=X GOTO 1590
    0x60570b22a080 ---------A   01530  PRINT O " - NO POINT. I WILL ROLL AGAIN"
    0x60570b22a110 ---------A   01540  GOTO 1460
    0x60570b22a360 ---------A T 01550  PRINT O "- CRAPS. YOU LOSE."
    0x60570b22a5c0 ---------A   01560  PRINT "YOU LOSE $"F
    0x60570b22a900 ---------A   01570  F=0-F
    0x60570b22a970 ---------A   01580  GOTO 1430
    0x60570b22ac90 ---------A T 01590  PRINT X"- A WINNER.........CONGRATS!!!!!!!!"
    0x60570b22b210 ---------A   01600  PRINT X "AT 2 TO 1 ODDS PAYS YOU...LET ME SEE..."2*F"DOLLARS"
    0x60570b22b550 ---------A   01610  LET F=2*F
    0x60570b22b5f0 ---------A   01620  GOTO 1430
    0x60570b22b780 ---------A T 01630  PRINT " IF YOU WANT TO PLAY AGAIN PRINT 5 IF NOT PRINT 2";
    0x60570b22b9a0 ---------A   01640  INPUT M
    0x60570b22bbe0 ---------A   01650  IF R<0 GOTO 1680
    0x60570b22c250 ---------A   01660  IF R>0 GOTO 1700
    0x60570b22c4b0 ---------A   01670  IF R=0 GOTO 1720
    0x60570b22c740 ---------A T 01680  PRINT "YOU ARE NOW UNDER $";-R
    0x60570b22c7d0 ---------A   01690  GOTO 1730
    0x60570b22ca20 ---------A T 01700  PRINT "YOU ARE NOW AHEAD $";R
    0x60570b22cab0 ---------A   01710  GOTO 1730
    0x60570b22cc00 ---------A T 01720  PRINT "YOU ARE NOW EVEN AT 0"
    0x60570b22ce40 ---------A T 01730  IF M=5 GOTO 1130
    0x60570b22d0a0 ---------A   01740  IF R<0 GOTO 1770
    0x60570b22d300 ---------A   01750  IF R>0 GOTO 1790
    0x60570b22d560 ---------A   01760  IF R=0 GOTO 1810
    0x60570b22d720 ---------A T 01770  PRINT"TOO BAD, YOU ARE IN THE HOLE. COME AGAIN."
    0x60570b22d7d0 ---------A   01780  GOTO 1820
    0x60570b22d940 ---------A T 01790  PRINT"CONGRATULATIONS---YOU CAME OUT A WINNER. COME AGAIN!"
    0x60570b22d9f0 ---------A   01800  GOTO 1820
    0x60570b22db70 ---------A T 01810  PRINT"CONGRATULATIONS---YOU CAME OUT EVEN, NOT BAD FOR AN AMATEUR"
    0x60570b22dbd0 ---------A T 01820  END
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
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    H_int;                                     // Basic: H 
int    M_int;                                     // Basic: M 
int    O_int;                                     // Basic: O 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
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
    // 01000 PRINT TAB(33);"CRAPS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"CRAPS");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 LET R=0
    R_int = 0;
    // 01060 PRINT"2,3,12 ARE LOSERS; 4,5,6,8,9,10 ARE POINTS; 7,11 ARE NATURAL WINNERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2,3,12 ARE LOSERS; 4,5,6,8,9,10 ARE POINTS; 7,11 ARE NATURAL WINNERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 LET T=1
    T_int = 1;
    // 01080 PRINT "PICK A NUMBER AND INPUT TO ROLL DICE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PICK A NUMBER AND INPUT TO ROLL DICE");fputs(buf,fh); };
    // 01090 INPUT Z
    // Start of Basic INPUT statement 01090
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
    }; // End of Basic INPUT statement 01090

  Lbl_01100:
    // 01100 LET X=(RND(0))
    X_int = (RND(0));
    // 01110 LET T =T+1
    T_int = T_int+1;
    // 01120 IF T<=Z GOTO 1100
    if(T_int<=Z_int)goto Lbl_01100;

  Lbl_01130:
    // 01130 PRINT"INPUT THE AMOUNT OF YOUR WAGER.";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INPUT THE AMOUNT OF YOUR WAGER.");fputs(buf,fh); };
    // 01140 INPUT F
    // Start of Basic INPUT statement 01140
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&F_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01140
    // 01150 PRINT "I WILL NOW THROW THE DICE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WILL NOW THROW THE DICE");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01160:
    // 01160 LET E=INT(7*RND(1))
    E_int = INT(7*RND(1));
    // 01170 LET S=INT(7*RND(1))
    S_int = INT(7*RND(1));
    // 01180 LET X=E+S
    X_int = E_int+S_int;
    // 01190 IF X=7 GOTO 1330 
    if(X_int==7)goto Lbl_01330;
    // 01200 IF X=11 GOTO 1330
    if(X_int==11)goto Lbl_01330;
    // 01210 IF X=1 GOTO 1160
    if(X_int==1)goto Lbl_01160;
    // 01220 IF X=2 GOTO 1360
    if(X_int==2)goto Lbl_01360;
    // 01230 IF X=0 GOTO 1160
    if(X_int==0)goto Lbl_01160;
    // 01240 IF X=2 GOTO 1400
    if(X_int==2)goto Lbl_01400;
    // 01250 IF X=3 GOTO 1400
    if(X_int==3)goto Lbl_01400;
    // 01260 IF X=12 GOTO 1400
    if(X_int==12)goto Lbl_01400;
    // 01270 IF X=5 GOTO 1450
    if(X_int==5)goto Lbl_01450;
    // 01280 IF X =6 GOTO 1450
    if(X_int==6)goto Lbl_01450;
    // 01290 IF X=8 GOTO 1450
    if(X_int==8)goto Lbl_01450;
    // 01300 IF X=9 GOTO 1450
    if(X_int==9)goto Lbl_01450;
    // 01310 IF X =10 GOTO 1450
    if(X_int==10)goto Lbl_01450;
    // 01320 IF X=4 GOTO 1450
    if(X_int==4)goto Lbl_01450;

  Lbl_01330:
    // 01330 PRINT X "- NATURAL....A WINNER!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,X_int);strcat(buf,"- NATURAL....A WINNER!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT X"PAYS EVEN MONEY, YOU WIN"F"DOLLARS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,X_int);strcat(buf,"PAYS EVEN MONEY, YOU WIN"); b2c_INT(buf,F_int);strcat(buf,"DOLLARS");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 GOTO 1430
    goto Lbl_01430;

  Lbl_01360:
    // 01360 PRINT X"- SNAKE EYES....YOU LOSE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,X_int);strcat(buf,"- SNAKE EYES....YOU LOSE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT "YOU LOSE"F "DOLLARS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU LOSE"); b2c_INT(buf,F_int);strcat(buf,"DOLLARS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 LET F=0-F
    F_int = 0-F_int;
    // 01390 GOTO 1430
    goto Lbl_01430;

  Lbl_01400:
    // 01400 PRINT X " - CRAPS...YOU LOSE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,X_int);strcat(buf," - CRAPS...YOU LOSE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT "YOU LOSE"F"DOLLARS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU LOSE"); b2c_INT(buf,F_int);strcat(buf,"DOLLARS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01420 LET F=0-F
    F_int = 0-F_int;

  Lbl_01430:
    // 01430 LET R= R+F
    R_int = R_int+F_int;
    // 01440 GOTO 1630
    goto Lbl_01630;

  Lbl_01450:
    // 01450 PRINT X "IS THE POINT. I WILL ROLL AGAIN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,X_int);strcat(buf,"IS THE POINT. I WILL ROLL AGAIN");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01460:
    // 01460 LET H=INT(7*RND(1))
    H_int = INT(7*RND(1));
    // 01470 LET Q=INT(7*RND(1))
    Q_int = INT(7*RND(1));
    // 01480 LET O=H+Q
    O_int = H_int+Q_int;
    // 01490 IF O=1 GOTO 1460
    if(O_int==1)goto Lbl_01460;
    // 01500 IF O=7 GOTO 1550
    if(O_int==7)goto Lbl_01550;
    // 01510 IF O=0 GOTO 1460
    if(O_int==0)goto Lbl_01460;
    // 01520 IF O=X GOTO 1590
    if(O_int==X_int)goto Lbl_01590;
    // 01530 PRINT O " - NO POINT. I WILL ROLL AGAIN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,O_int);strcat(buf," - NO POINT. I WILL ROLL AGAIN");strcat(buf,"\n");fputs(buf,fh); };
    // 01540 GOTO 1460
    goto Lbl_01460;

  Lbl_01550:
    // 01550 PRINT O "- CRAPS. YOU LOSE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,O_int);strcat(buf,"- CRAPS. YOU LOSE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01560 PRINT "YOU LOSE $"F
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU LOSE $"); b2c_INT(buf,F_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 F=0-F
    F_int = 0-F_int;
    // 01580 GOTO 1430
    goto Lbl_01430;

  Lbl_01590:
    // 01590 PRINT X"- A WINNER.........CONGRATS!!!!!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,X_int);strcat(buf,"- A WINNER.........CONGRATS!!!!!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01600 PRINT X "AT 2 TO 1 ODDS PAYS YOU...LET ME SEE..."2*F"DOLLARS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,X_int);strcat(buf,"AT 2 TO 1 ODDS PAYS YOU...LET ME SEE..."); b2c_INT(buf,2*F_int);strcat(buf,"DOLLARS");strcat(buf,"\n");fputs(buf,fh); };
    // 01610 LET F=2*F
    F_int = 2*F_int;
    // 01620 GOTO 1430
    goto Lbl_01430;

  Lbl_01630:
    // 01630 PRINT " IF YOU WANT TO PLAY AGAIN PRINT 5 IF NOT PRINT 2";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," IF YOU WANT TO PLAY AGAIN PRINT 5 IF NOT PRINT 2");fputs(buf,fh); };
    // 01640 INPUT M
    // Start of Basic INPUT statement 01640
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01640
    // 01650 IF R<0 GOTO 1680
    if(R_int<0)goto Lbl_01680;
    // 01660 IF R>0 GOTO 1700
    if(R_int>0)goto Lbl_01700;
    // 01670 IF R=0 GOTO 1720
    if(R_int==0)goto Lbl_01720;

  Lbl_01680:
    // 01680 PRINT "YOU ARE NOW UNDER $";-R
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE NOW UNDER $"); b2c_INT(buf,R_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01690 GOTO 1730
    goto Lbl_01730;

  Lbl_01700:
    // 01700 PRINT "YOU ARE NOW AHEAD $";R
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE NOW AHEAD $"); b2c_INT(buf,R_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01710 GOTO 1730
    goto Lbl_01730;

  Lbl_01720:
    // 01720 PRINT "YOU ARE NOW EVEN AT 0"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE NOW EVEN AT 0");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01730:
    // 01730 IF M=5 GOTO 1130
    if(M_int==5)goto Lbl_01130;
    // 01740 IF R<0 GOTO 1770
    if(R_int<0)goto Lbl_01770;
    // 01750 IF R>0 GOTO 1790
    if(R_int>0)goto Lbl_01790;
    // 01760 IF R=0 GOTO 1810
    if(R_int==0)goto Lbl_01810;

  Lbl_01770:
    // 01770 PRINT"TOO BAD, YOU ARE IN THE HOLE. COME AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO BAD, YOU ARE IN THE HOLE. COME AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01780 GOTO 1820
    goto Lbl_01820;

  Lbl_01790:
    // 01790 PRINT"CONGRATULATIONS---YOU CAME OUT A WINNER. COME AGAIN!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS---YOU CAME OUT A WINNER. COME AGAIN!");strcat(buf,"\n");fputs(buf,fh); };
    // 01800 GOTO 1820
    goto Lbl_01820;

  Lbl_01810:
    // 01810 PRINT"CONGRATULATIONS---YOU CAME OUT EVEN, NOT BAD FOR AN AMATEUR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS---YOU CAME OUT EVEN, NOT BAD FOR AN AMATEUR");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01820:
    // 01820 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
