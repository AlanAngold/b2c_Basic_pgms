/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/hangmn.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x569fb02e6670 ---------A   01010  PRINT "BASIC LIBRARY--'HANGMN'--18-JUL-70"
    0x569fb02e7b80 ---------A   01020  REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    0x569fb02e8f30 ---------A   01030  REM
    0x569fb02e8e70 ---------A   01040  RANDOMIZE
    0x569fb02e8ff0 ---------A   01050  LET S7=1
    0x569fb02e7910 ---------A T 01060  PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
    0x569fb02e85e0 ---------A   01070  INPUT N7$
    0x569fb02e6e40 ---------A   01080  IF N7$="N" THEN 1170
    0x569fb02e7480 ---------A   01090  PRINT
    0x569fb02e8730 ---------A   01100  PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
    0x569fb02e9160 ---------A   01110  PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
    0x569fb02e76b0 ---------A   01120  PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
    0x569fb02e7870 ---------A   01130  PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
    0x569fb02eea00 ---------A   01140  PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
    0x569fb02eeb60 ---------A   01150  PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
    0x569fb02eec80 ---------A   01160  PRINT"LOSE."
    0x569fb02eef00 ---------A T 01170  LET T2=0
    0x569fb02eefb0 ---------A   01180  PRINT
    0x569fb02ef140 ---------A   01190  PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
    0x569fb02ef340 ---------A   01200  INPUT Q9$
    0x569fb02ef5c0 ---------A   01210  IF Q9$="Y" THEN 2030
    0x569fb02ef7e0 ---------A T 01220  LET T2=1
    0x569fb02efa30 ---------A   01230  IF S7=0 THEN 1430
    0x569fb02efd10 ---------A   01240  LET Q=0
    0x569fb02effe0 ---------A   01250  LET L=1
    0x569fb02f02b0 ---------A   01260  DIM S(200)
    0x569fb02f0580 ---------A   01270  DIM F$(2000)
    0x569fb02f0850 ---------A   01280  DIM A$(20)
    0x569fb02f0b20 ---------A   01290  DIM B$(20)
    0x569fb02f0df0 ---------A   01300  DIM I(200)
    0x569fb02f10c0 ---------A   01310  LET O1=1
    0x569fb02f12d0 ---------A T 01320  READ S(O1)
    0x569fb02f1600 ---------A   01330  IF S(O1)<0 THEN 1420
    0x569fb02f1b10 ---------A   01340  LET I(O1)=L
    0x569fb02f21e0 ---------A   01350  FOR O=L TO L+S(O1)-1
    0x569fb02f2420 ---------A   01360  READ F$(O)
    0x569fb02f2550 ---------A   01370  NEXT O
    0x569fb02f28a0 ---------A   01380  LET Q=Q+1
    0x569fb02f2cd0 ---------A   01390  LET L=L+S(O1)
    0x569fb02f3000 ---------A   01400  LET O1=O1+1
    0x569fb02f3070 ---------A   01410  GO TO 1320
    0x569fb02f3380 ---------A T 01420  LET O1=O1-1
    0x569fb02f3970 ---------A T 01430  LET R=INT(1+O1*RND)
    0x569fb02f3c80 ---------A   01440  LET S=S(R)
    0x569fb02f4050 ---------A   01450  LET O6=I(R)
    0x569fb02f44e0 ---------A   01460  FOR Z2=1 TO S(R)
    0x569fb02f4810 ---------A   01470  LET O6=I(R)
    0x569fb02f4e20 ---------A   01480  LET A$(Z2)=F$(O6+Z2-1)
    0x569fb02f4f50 ---------A   01490  NEXT Z2
    0x569fb02f5240 ---------A   01500  DIM U$(26)
    0x569fb02f5510 ---------A   01510  DIM E$(26)
    0x569fb02f57e0 ---------A   01520  LET V=1
    0x569fb02f5ad0 ---------A   01530  FOR I=1 TO S
    0x569fb02f5df0 ---------A   01540  LET B$(I)=" - "
    0x569fb02f5f20 ---------A   01550  NEXT I
    0x569fb02f5fb0 ---------A   01560  GO TO 1740
    0x569fb02f6030 ----------   01570  PRINT
    0x569fb02f61b0 ---------A T 01580  PRINT"WHAT IS YOUR GUESS";
    0x569fb02f6490 ---------A   01590  LET K=1
    0x569fb02f66a0 ---------A   01600  INPUT G$
    0x569fb02f6a70 ---------A   01610  FOR Y=1 TO S
    0x569fb02f6dd0 ---------A   01620  IF G$=A$(Y) THEN 1640
    0x569fb02f6e50 ---------A   01630  GO TO 1650
    0x569fb02f7060 ---------A T 01640  LET K=0
    0x569fb02f7190 ---------A T 01650  NEXT Y
    0x569fb02f7810 ---------A   01660  IF K=0 THEN 1690
    0x569fb02f7b30 ---------A   01670  LET E$(V)=G$
    0x569fb02f7e60 ---------A   01680  LET V=V+1
    0x569fb02f8220 ---------A T 01690  FOR T=1 TO S 
    0x569fb02f8580 ---------A   01700  IF G$=A$(T) THEN 1720
    0x569fb02f8600 ---------A   01710  GO TO 1730
    0x569fb02f8910 ---------A T 01720  LET B$(T)=G$
    0x569fb02f8a40 ---------A T 01730  NEXT T
    0x569fb02f8ad0 ---------A T 01740  PRINT
    0x569fb02f8dd0 ---------A   01750  FOR I=1 TO S
    0x569fb02f9030 ---------A   01760  PRINT B$(I);
    0x569fb02f9170 ---------A   01770  NEXT I
    0x569fb02f9300 ---------A   01780  PRINT " ",
    0x569fb02f97c0 ---------A   01790  FOR G6=1 TO V-1
    0x569fb02f9a20 ---------A   01800  PRINT E$(G6);
    0x569fb02f9b60 ---------A   01810  NEXT G6
    0x569fb02f9bf0 ---------A   01820  PRINT
    0x569fb02f9ff0 ---------A   01830  LET E1=V-1
    0x569fb02fa240 ---------A   01840  IF E1<9 THEN 1970
    0x569fb02fa3b0 ---------A   01850  PRINT"I WIN..."
    0x569fb02fa540 ---------A   01860  PRINT"THE CORRECT ANSWER IS ";
    0x569fb02fa840 ---------A   01870  FOR Z2=1 TO S
    0x569fb02faaa0 ---------A   01880  PRINT A$(Z2);
    0x569fb02fabe0 ---------A   01890  NEXT Z2
    0x569fb02fac90 ---------A   01900  PRINT
    0x569fb02fae20 ---------A   01910  PRINT " DO YOU WANT TO PLAY AGAIN";
    0x569fb02fb100 ---------A   01920  LET W=1
    0x569fb02fb310 ---------A   01930  INPUT T$
    0x569fb02fb540 ---------A   01940  LET S7=0
    0x569fb02fb7b0 ---------A   01950  IF T$="Y" THEN 1060
    0x569fb02fb830 ---------A   01960  GO TO 3660
    0x569fb02fb8a0 ---------A T 01970  PRINT
    0x569fb02fbb00 ---------A   01980  IF K=0 THEN 2380
    0x569fb02fbd80 ---------A   01990  IF W=1 THEN 2360
    0x569fb02fbf10 ---------A   02000  PRINT"DO YOU WANT TO SEE THE PICTURE";
    0x569fb02fc140 ---------A   02010  INPUT T2$
    0x569fb02fc3d0 ---------A   02020  IF T2$="N" THEN2380
    0x569fb02fc540 ---------A T 02030  PRINT"       *-:-*"
    0x569fb02fc6b0 ---------A   02040  PRINT"     %&     &%"
    0x569fb02fc810 ---------A   02050  PRINT"    #         #"
    0x569fb02fca80 ---------A   02060  IF E1=8 THEN 2380
    0x569fb02fcbe0 ---------A   02070  PRINT"   ^  (.) (.)  ^"
    0x569fb02fce50 ---------A   02080  IF E1=7 THEN 2380
    0x569fb02fcfb0 ---------A   02090  PRINT" <<<           >>>"
    0x569fb02fd220 ---------A   02100  IF E1=6 THEN 2380
    0x569fb02fd380 ---------A   02110  PRINT"   !    :?:    !"
    0x569fb02fd5f0 ---------A   02120  IF E1=5 THEN 2380
    0x569fb02fd760 ---------A   02130  PRINT"   *  -     -  *"
    0x569fb02fd8d0 ---------A   02140  PRINT"   '   +++++   '"
    0x569fb02fda40 ---------A   02150  PRINT"   &           &"
    0x569fb02fdbb0 ---------A   02160  PRINT"    %%%     %%%"
    0x569fb02fdd10 ---------A   02170  PRINT"      :!#$#!:"
    0x569fb02fdf70 ---------A   02180  IF E1=4 THEN 2380
    0x569fb02fe0d0 ---------A   02190  PRINT"         I"
    0x569fb02fe230 ---------A   02200  PRINT"         I"
    0x569fb02fe390 ---------A   02210  PRINT"         I"
    0x569fb02fe600 ---------A   02220  IF E1=3 THEN 2380
    0x569fb02fe760 ---------A   02230  PRINT"???????????????????"
    0x569fb02fe9c0 ---------A   02240  IF E1=2 THEN 2380
    0x569fb02feb20 ---------A   02250  PRINT"         @"
    0x569fb02fec80 ---------A   02260  PRINT"         @"
    0x569fb02fede0 ---------A   02270  PRINT"         @"
    0x569fb02ff040 ---------A   02280  IF E1=1 THEN 2380
    0x569fb02ff1b0 ---------A   02290  PRINT"        ( )"
    0x569fb02ffb30 ---------A   02300  PRINT"       (   )"
    0x569fb02ffca0 ---------A   02310  PRINT"      (     )"
    0x569fb02ffe10 ---------A   02320  PRINT"     (       )"
    0x569fb02fff80 ---------A   02330  PRINT"    (         )"
    0x569fb03000f0 ---------A   02340  PRINT"   (           )"
    0x569fb0300250 ---------A   02350  PRINT"  (#$%&     &%$#)"
    0x569fb0300470 ---------A T 02360  LETW=0
    0x569fb03006c0 ---------A   02370  IF T2=0 THEN 1220
    0x569fb03009d0 ---------A T 02380  FOR I=1 TO S
    0x569fb0300e10 ---------A   02390  IF A$(I)=B$(I) THEN 2410
    0x569fb0300e90 ---------A   02400  GO TO 1580
    0x569fb0300fc0 ---------A T 02410  NEXT I
    0x569fb0301150 ---------A   02420  PRINT"VERY GOOD! YOU WIN!"
    0x569fb03012e0 ---------A   02430  PRINT"DO YOU WANT TO PLAY AGAIN";
    0x569fb0301500 ---------A   02440  LET S7=0
    0x569fb0301720 ---------A   02450  INPUT H8$
    0x569fb03019a0 ---------A   02460  IF H8$="Y" THEN 1060
    0x569fb0301a40 ---------A   02470  GO TO 3660
    0x569fb03029a0 ---------A   02480  DATA 10,I,M,P,O,S,S,I,B,L,E,  5,I,D,I,O,T
    0x569fb03032e0 ---------A   02490  DATA 9,A,P,A,T,H,E,T,I,C
    0x569fb0303d00 ---------A   02500  DATA10,W,A,T,E,R,F,R,O,N,T
    0x569fb0304800 ---------A   02510  DATA11,C,O,L,L,E,C,T,I,O,N,S
    0x569fb0305140 ---------A   02520  DATA 9,Y,E,S,T,E,R,D,A,Y
    0x569fb0305d20 ---------A   02530  DATA12,K,I,N,D,E,R,G,A,R,T,E,N
    0x569fb0306ac0 ---------A   02540  DATA14,A,D,M,I,N,I,S,T,R,A,T,I,O,N
    0x569fb0307320 ---------A   02550  DATA 8,E,M,P,H,A,S,I,S
    0x569fb0307c60 ---------A   02560  DATA 9,E,D,U,C,A,T,I,O,N
    0x569fb0308680 ---------A   02570  DATA 10,R,E,C,I,P,R,O,C,A,L
    0x569fb0309180 ---------A   02580  DATA  11,D,E,C,L,A,R,A,T,I,O,N
    0x569fb0309900 ---------A   02590  DATA 7,P,I,T,C,H,E,R
    0x569fb030a320 ---------A   02600  DATA 10,S,U,P,E,R,S,O,N,I,C
    0x569fb030ae20 ---------A   02610  DATA 11,C,O,M,M,E,N,D,A,B,L,E
    0x569fb030b5a0 ---------A   02620  DATA 7,P,A,S,S,A,G,E
    0x569fb030bfb0 ---------A   02630  DATA 10,P,E,R,C,E,N,T,A,G,E
    0x569fb030c570 ---------A   02640  DATA 5,J,O,I,N,T
    0x569fb030cdd0 ---------A   02650  DATA8,G,O,V,E,R,N,O,R
    0x569fb030d550 ---------A   02660  DATA 7,P,R,O,G,R,A,M
    0x569fb030e210 ---------A   02670  DATA 13,D,I,S,A,P,P,E,A,R,A,N,C,E
    0x569fb030ea70 ---------A   02680  DATA 8,S,E,C,U,R,I,T,Y
    0x569fb030f1e0 ---------A   02690  DATA 7,W,E,L,C,O,M,E
    0x569fb030f6c0 ---------A   02700  DATA 4,Z,E,R,O
    0x569fb0310000 ---------A   02710  DATA9,P,O,T,E,N,T,I,A,L
    0x569fb0310860 ---------A   02720  DATA 8,C,O,M,P,O,S,E,D
    0x569fb0311360 ---------A   02730  DATA 11,P,O,S,S,I,B,I,L,I,T,Y
    0x569fb0311bb0 ---------A   02740  DATA 8,D,I,R,E,C,T,O,R
    0x569fb0312250 ---------A   02750  DATA 6,R,E,S,U,L,T
    0x569fb0312ab0 ---------A   02760  DATA 8,C,H,I,L,D,R,E,N
    0x569fb03133f0 ---------A   02770  DATA 9,C,L,A,S,S,R,O,O,M
    0x569fb0313c50 ---------A   02780  DATA 8,E,C,O,N,O,M,I,C
    0x569fb0314590 ---------A   02790  DATA 9,E,Q,U,I,V,O,C,A,L
    0x569fb0314d10 ---------A   02800  DATA 7,H,O,S,T,I,L,E
    0x569fb0315490 ---------A   02810  DATA 7,R,O,G,U,I,S,H
    0x569fb0315dd0 ---------A   02820  DATA 9,M,I,G,R,A,T,I,O,N
    0x569fb0316a90 ---------A   02830  DATA 13,A,U,T,H,O,R,I,Z,A,T,I,O,N
    0x569fb0317200 ---------A   02840  DATA 7,C,U,R,S,O,R,Y
    0x569fb03177c0 ---------A   02850  DATA 5,M,O,N,E,Y
    0x569fb0317f40 ---------A   02860  DATA 7,A,B,S,O,L,V,E
    0x569fb0318b20 ---------A   02870  DATA 12,P,R,E,R,E,Q,U,I,S,I,T,E
    0x569fb03192b0 ---------A   02880  DATA 7,I,N,S,I,P,I,D
    0x569fb031a050 ---------A   02890  DATA 14 ,C,O,N,G,L,O,M,E,R,A,T,I,O,N
    0x569fb031aa70 ---------A   02900  DATA 10,N,E,G,O,T,I,A,B,L,E
    0x569fb031b1e0 ---------A   02910  DATA 7,D,E,P,O,S,I,T
    0x569fb031b6c0 ---------A   02920  DATA 4,L,A,M,P
    0x569fb031c000 ---------A   02930  DATA 9,Q,U,A,L,I,F,I,E,D
    0x569fb031cb00 ---------A   02940  DATA 11,M,A,I,N,T,E,N,A,N,C,E
    0x569fb031d280 ---------A   02950  DATA 7,F,U,N,E,R,A,L
    0x569fb031dbb0 ---------A   02960  DATA 9,C,A,R,P,E,N,T,E,R
    0x569fb031e170 ---------A   02970  DATA 5,F,U,G,U,E
    0x569fb031ec60 ---------A   02980  DATA 11,M,A,N,U,F,A,C,T,U,R,E
    0x569fb031f300 ---------A   02990  DATA 6,B,A,K,E,R,Y
    0x569fb031fb50 ---------A   03000  DATA 8,M,I,L,I,T,A,R,Y
    0x569fb0320110 ---------A   03010  DATA 5,G,U,A,R,D
    0x569fb0320a50 ---------A   03020  DATA 9,T,E,C,H,N,I,C,A,L
    0x569fb03212b0 ---------A   03030  DATA 8,S,Y,M,P,H,O,N,Y
    0x569fb0321a30 ---------A   03040  DATA 7,A,D,V,A,N,C,E
    0x569fb03221b0 ---------A   03050  DATA 7,M,I,N,I,M,U,M
    0x569fb0322af0 ---------A   03060  DATA 9,A,L,E,R,T,N,E,S,S
    0x569fb0323260 ---------A   03070  DATA 7,Q,U,A,R,T,E,T
    0x569fb0323900 ---------A   03080  DATA 6,P,O,L,I,S,H
    0x569fb0324080 ---------A   03090  DATA 7,B,E,N,E,F,I,T
    0x569fb03248d0 ---------A   03100  DATA 8,C,O,M,P,O,S,E,R
    0x569fb0324da0 ---------A   03110  DATA 4,H,E,R,O
    0x569fb0325430 ---------A   03120  DATA 6,D,E,S,I,S,T
    0x569fb0325ac0 ---------A   03130  DATA 6,C,I,T,I,E,S
    0x569fb0325f90 ---------A   03140  DATA 4,S,L,U,M
    0x569fb0326620 ---------A   03150  DATA 6,R,E,G,I,M,E
    0x569fb0326bd0 ---------A   03160  DATA 5,D,O,U,B,T
    0x569fb03270b0 ---------A   03170  DATA 4,J,O,K,E
    0x569fb03279f0 ---------A   03180  DATA 9,P,R,O,T,E,S,T,E,R
    0x569fb0328160 ---------A   03190  DATA 7,S,I,M,I,L,A,R
    0x569fb0328630 ---------A   03200  DATA 4,C,U,R,B
    0x569fb0328bf0 ---------A   03210  DATA 5,E,L,I,T,E
    0x569fb0329440 ---------A   03220  DATA 8,M,E,D,I,C,A,R,E
    0x569fb03299f0 ---------A   03230  DATA 5,M,A,Y,O,R
    0x569fb0329ec0 ---------A   03240  DATA 4,F,U,N,D
    0x569fb032a550 ---------A   03250  DATA 6,A,C,T,I,O,N
    0x569fb032abe0 ---------A   03260  DATA 6,C,L,O,U,D,Y
    0x569fb032b0b0 ---------A   03270  DATA 4,N,E,W,S
    0x569fb032b660 ---------A   03280  DATA 5,Y,O,U,N,G
    0x569fb032bc20 ---------A   03290  DATA 5,M,A,F,I,A
    0x569fb032c560 ---------A   03300  DATA 9,G,U,E,R,R,I,L,L,A
    0x569fb032cce0 ---------A   03310  DATA 7,R,E,Q,U,E,S,T
    0x569fb032d450 ---------A   03320  DATA 7,G,O,U,R,M,E,T
    0x569fb032d850 ---------A   03330  DATA 3,P,U,B
    0x569fb032e0a0 ---------A   03340  DATA 8,S,K,I,R,M,I,S,H
    0x569fb032e650 ---------A   03350  DATA 5,B,L,A,C,K
    0x569fb032ec10 ---------A   03360  DATA 5,W,H,I,T,E
    0x569fb032f380 ---------A   03370  DATA 7,H,I,S,T,O,R,Y
    0x569fb032fa20 ---------A   03380  DATA 6,P,O,L,I,C,Y
    0x569fb0330360 ---------A   03390  DATA 9,G,Y,M,N,A,S,I,U,M
    0x569fb0330ae0 ---------A   03400  DATA 7,V,E,H,I,C,L,E
    0x569fb0331410 ---------A   03410  DATA 9,A,U,T,O,M,O,T,O,N
    0x569fb0331aa0 ---------A   03420  DATA 6,B,L,I,G,H,T
    0x569fb0331e90 ---------A   03430  DATA 3,S,I,X
    0x569fb0332370 ---------A   03440  DATA 4,C,A,L,L
    0x569fb0332cb0 ---------A   03450  DATA 9,P,S,Y,C,H,O,T,I,C
    0x569fb0333510 ---------A   03460  DATA 8,N,E,U,R,O,T,I,C
    0x569fb0333c90 ---------A   03470  DATA 7,A,N,X,I,E,T,Y
    0x569fb0334410 ---------A   03480  DATA 7,S,Y,M,P,T,O,M
    0x569fb03350c0 ---------A   03490  DATA13,H,Y,P,O,C,H,O,N,D,R,I,A,C
    0x569fb0335760 ---------A   03500  DATA 6,P,H,O,B,I,A
    0x569fb03360a0 ---------A   03510  DATA 9,O,B,S,E,S,S,I,O,N
    0x569fb0336ac0 ---------A   03520  DATA10,C,O,M,P,U,L,S,I,O,N
    0x569fb0337320 ---------A   03530  DATA 8,H,Y,S,T,E,R,I,A
    0x569fb0337aa0 ---------A   03540  DATA 7,A,M,N,E,S,I,A
    0x569fb0338760 ---------A   03550  DATA13,S,C,H,I,Z,O,P,H,R,E,N,I,A
    0x569fb03390a0 ---------A   03560  DATA 9,P,R,O,G,N,O,S,I,S
    0x569fb0339900 ---------A   03570  DATA 8,P,A,R,A,N,O,I,D
    0x569fb033aa50 ---------A   03580  DATA 9,C,A,T,A,T,O,N,I,C
    0x569fb033b1d0 ---------A   03590  DATA 7,A,L,C,O,H,O,L
    0x569fb033ba30 ---------A   03600  DATA 8,C,O,M,P,U,T,E,R
    0x569fb033c280 ---------A   03610  DATA 8,T,E,R,M,I,N,A,L
    0x569fb033c750 ---------A   03620  DATA 4,C,U,T,E
    0x569fb033cb50 ---------A   03630  DATA 3,F,U,N
    0x569fb033d560 ---------A   03640  DATA10,A,C,C,E,S,S,A,B,L,E
    0x569fb033d6b0 ---------A   03650  DATA -103
    0x569fb033d700 ---------A T 03660  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01060      01950T, 02460T
     01170      01080T
     01220      02370T
     01320      01410T
     01420      01330T
     01430      01230T
     01580      02400T
     01640      01620T
     01650      01630T
     01690      01660T
     01720      01700T
     01730      01710T
     01740      01560T
     01970      01840T
     02030      01210T
     02360      01990T
     02380      01980T, 02020T, 02060T, 02080T, 02100T, 02120T, 02180T, 02220T, 
                02240T, 02280T
     02410      02390T
     03660      01960T, 02470T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x569fb02e6670 (01010)   0x569fb02e6670 (01010)   0x569fb033d700 (03660)   0x569fb033d700 (03660)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/hangmn.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x569fb02e6670 ---------A   01010  PRINT "BASIC LIBRARY--'HANGMN'--18-JUL-70"
    0x569fb02e7b80 ---------A   01020  REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    0x569fb02e8f30 ---------A   01030  REM
    0x569fb02e8e70 ---------A   01040  RANDOMIZE
    0x569fb02e8ff0 ---------A   01050  LET S7=1
    0x569fb02e7910 ---------A T 01060  PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
    0x569fb02e85e0 ---------A   01070  INPUT N7$
    0x569fb02e6e40 ---------A   01080  IF N7$="N" THEN 1170
    0x569fb02e7480 ---------A   01090  PRINT
    0x569fb02e8730 ---------A   01100  PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
    0x569fb02e9160 ---------A   01110  PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
    0x569fb02e76b0 ---------A   01120  PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
    0x569fb02e7870 ---------A   01130  PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
    0x569fb02eea00 ---------A   01140  PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
    0x569fb02eeb60 ---------A   01150  PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
    0x569fb02eec80 ---------A   01160  PRINT"LOSE."
    0x569fb02eef00 ---------A T 01170  LET T2=0
    0x569fb02eefb0 ---------A   01180  PRINT
    0x569fb02ef140 ---------A   01190  PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
    0x569fb02ef340 ---------A   01200  INPUT Q9$
    0x569fb02ef5c0 ---------A   01210  IF Q9$="Y" THEN 2030
    0x569fb02ef7e0 ---------A T 01220  LET T2=1
    0x569fb02efa30 ---------A   01230  IF S7=0 THEN 1430
    0x569fb02efd10 ---------A   01240  LET Q=0
    0x569fb02effe0 ---------A   01250  LET L=1
    0x569fb02f02b0 ---------A   01260  DIM S(200)
    0x569fb02f0580 ---------A   01270  DIM F$(2000)
    0x569fb02f0850 ---------A   01280  DIM A$(20)
    0x569fb02f0b20 ---------A   01290  DIM B$(20)
    0x569fb02f0df0 ---------A   01300  DIM I(200)
    0x569fb02f10c0 ---------A   01310  LET O1=1
    0x569fb02f12d0 ---------A T 01320  READ S(O1)
    0x569fb02f1600 ---------A   01330  IF S(O1)<0 THEN 1420
    0x569fb02f1b10 ---------A   01340  LET I(O1)=L
    0x569fb02f21e0 ---------A   01350  FOR O=L TO L+S(O1)-1
    0x569fb02f2420 ---------A   01360  READ F$(O)
    0x569fb02f2550 ---------A   01370  NEXT O
    0x569fb02f28a0 ---------A   01380  LET Q=Q+1
    0x569fb02f2cd0 ---------A   01390  LET L=L+S(O1)
    0x569fb02f3000 ---------A   01400  LET O1=O1+1
    0x569fb02f3070 ---------A   01410  GO TO 1320
    0x569fb02f3380 ---------A T 01420  LET O1=O1-1
    0x569fb02f3970 ---------A T 01430  LET R=INT(1+O1*RND)
    0x569fb02f3c80 ---------A   01440  LET S=S(R)
    0x569fb02f4050 ---------A   01450  LET O6=I(R)
    0x569fb02f44e0 ---------A   01460  FOR Z2=1 TO S(R)
    0x569fb02f4810 ---------A   01470  LET O6=I(R)
    0x569fb02f4e20 ---------A   01480  LET A$(Z2)=F$(O6+Z2-1)
    0x569fb02f4f50 ---------A   01490  NEXT Z2
    0x569fb02f5240 ---------A   01500  DIM U$(26)
    0x569fb02f5510 ---------A   01510  DIM E$(26)
    0x569fb02f57e0 ---------A   01520  LET V=1
    0x569fb02f5ad0 ---------A   01530  FOR I=1 TO S
    0x569fb02f5df0 ---------A   01540  LET B$(I)=" - "
    0x569fb02f5f20 ---------A   01550  NEXT I
    0x569fb02f5fb0 ---------A   01560  GO TO 1740
    0x569fb02f6030 ----------   01570  PRINT
    0x569fb02f61b0 ---------A T 01580  PRINT"WHAT IS YOUR GUESS";
    0x569fb02f6490 ---------A   01590  LET K=1
    0x569fb02f66a0 ---------A   01600  INPUT G$
    0x569fb02f6a70 ---------A   01610  FOR Y=1 TO S
    0x569fb02f6dd0 ---------A   01620  IF G$=A$(Y) THEN 1640
    0x569fb02f6e50 ---------A   01630  GO TO 1650
    0x569fb02f7060 ---------A T 01640  LET K=0
    0x569fb02f7190 ---------A T 01650  NEXT Y
    0x569fb02f7810 ---------A   01660  IF K=0 THEN 1690
    0x569fb02f7b30 ---------A   01670  LET E$(V)=G$
    0x569fb02f7e60 ---------A   01680  LET V=V+1
    0x569fb02f8220 ---------A T 01690  FOR T=1 TO S 
    0x569fb02f8580 ---------A   01700  IF G$=A$(T) THEN 1720
    0x569fb02f8600 ---------A   01710  GO TO 1730
    0x569fb02f8910 ---------A T 01720  LET B$(T)=G$
    0x569fb02f8a40 ---------A T 01730  NEXT T
    0x569fb02f8ad0 ---------A T 01740  PRINT
    0x569fb02f8dd0 ---------A   01750  FOR I=1 TO S
    0x569fb02f9030 ---------A   01760  PRINT B$(I);
    0x569fb02f9170 ---------A   01770  NEXT I
    0x569fb02f9300 ---------A   01780  PRINT " ",
    0x569fb02f97c0 ---------A   01790  FOR G6=1 TO V-1
    0x569fb02f9a20 ---------A   01800  PRINT E$(G6);
    0x569fb02f9b60 ---------A   01810  NEXT G6
    0x569fb02f9bf0 ---------A   01820  PRINT
    0x569fb02f9ff0 ---------A   01830  LET E1=V-1
    0x569fb02fa240 ---------A   01840  IF E1<9 THEN 1970
    0x569fb02fa3b0 ---------A   01850  PRINT"I WIN..."
    0x569fb02fa540 ---------A   01860  PRINT"THE CORRECT ANSWER IS ";
    0x569fb02fa840 ---------A   01870  FOR Z2=1 TO S
    0x569fb02faaa0 ---------A   01880  PRINT A$(Z2);
    0x569fb02fabe0 ---------A   01890  NEXT Z2
    0x569fb02fac90 ---------A   01900  PRINT
    0x569fb02fae20 ---------A   01910  PRINT " DO YOU WANT TO PLAY AGAIN";
    0x569fb02fb100 ---------A   01920  LET W=1
    0x569fb02fb310 ---------A   01930  INPUT T$
    0x569fb02fb540 ---------A   01940  LET S7=0
    0x569fb02fb7b0 ---------A   01950  IF T$="Y" THEN 1060
    0x569fb02fb830 ---------A   01960  GO TO 3660
    0x569fb02fb8a0 ---------A T 01970  PRINT
    0x569fb02fbb00 ---------A   01980  IF K=0 THEN 2380
    0x569fb02fbd80 ---------A   01990  IF W=1 THEN 2360
    0x569fb02fbf10 ---------A   02000  PRINT"DO YOU WANT TO SEE THE PICTURE";
    0x569fb02fc140 ---------A   02010  INPUT T2$
    0x569fb02fc3d0 ---------A   02020  IF T2$="N" THEN2380
    0x569fb02fc540 ---------A T 02030  PRINT"       *-:-*"
    0x569fb02fc6b0 ---------A   02040  PRINT"     %&     &%"
    0x569fb02fc810 ---------A   02050  PRINT"    #         #"
    0x569fb02fca80 ---------A   02060  IF E1=8 THEN 2380
    0x569fb02fcbe0 ---------A   02070  PRINT"   ^  (.) (.)  ^"
    0x569fb02fce50 ---------A   02080  IF E1=7 THEN 2380
    0x569fb02fcfb0 ---------A   02090  PRINT" <<<           >>>"
    0x569fb02fd220 ---------A   02100  IF E1=6 THEN 2380
    0x569fb02fd380 ---------A   02110  PRINT"   !    :?:    !"
    0x569fb02fd5f0 ---------A   02120  IF E1=5 THEN 2380
    0x569fb02fd760 ---------A   02130  PRINT"   *  -     -  *"
    0x569fb02fd8d0 ---------A   02140  PRINT"   '   +++++   '"
    0x569fb02fda40 ---------A   02150  PRINT"   &           &"
    0x569fb02fdbb0 ---------A   02160  PRINT"    %%%     %%%"
    0x569fb02fdd10 ---------A   02170  PRINT"      :!#$#!:"
    0x569fb02fdf70 ---------A   02180  IF E1=4 THEN 2380
    0x569fb02fe0d0 ---------A   02190  PRINT"         I"
    0x569fb02fe230 ---------A   02200  PRINT"         I"
    0x569fb02fe390 ---------A   02210  PRINT"         I"
    0x569fb02fe600 ---------A   02220  IF E1=3 THEN 2380
    0x569fb02fe760 ---------A   02230  PRINT"???????????????????"
    0x569fb02fe9c0 ---------A   02240  IF E1=2 THEN 2380
    0x569fb02feb20 ---------A   02250  PRINT"         @"
    0x569fb02fec80 ---------A   02260  PRINT"         @"
    0x569fb02fede0 ---------A   02270  PRINT"         @"
    0x569fb02ff040 ---------A   02280  IF E1=1 THEN 2380
    0x569fb02ff1b0 ---------A   02290  PRINT"        ( )"
    0x569fb02ffb30 ---------A   02300  PRINT"       (   )"
    0x569fb02ffca0 ---------A   02310  PRINT"      (     )"
    0x569fb02ffe10 ---------A   02320  PRINT"     (       )"
    0x569fb02fff80 ---------A   02330  PRINT"    (         )"
    0x569fb03000f0 ---------A   02340  PRINT"   (           )"
    0x569fb0300250 ---------A   02350  PRINT"  (#$%&     &%$#)"
    0x569fb0300470 ---------A T 02360  LETW=0
    0x569fb03006c0 ---------A   02370  IF T2=0 THEN 1220
    0x569fb03009d0 ---------A T 02380  FOR I=1 TO S
    0x569fb0300e10 ---------A   02390  IF A$(I)=B$(I) THEN 2410
    0x569fb0300e90 ---------A   02400  GO TO 1580
    0x569fb0300fc0 ---------A T 02410  NEXT I
    0x569fb0301150 ---------A   02420  PRINT"VERY GOOD! YOU WIN!"
    0x569fb03012e0 ---------A   02430  PRINT"DO YOU WANT TO PLAY AGAIN";
    0x569fb0301500 ---------A   02440  LET S7=0
    0x569fb0301720 ---------A   02450  INPUT H8$
    0x569fb03019a0 ---------A   02460  IF H8$="Y" THEN 1060
    0x569fb0301a40 ---------A   02470  GO TO 3660
    0x569fb03029a0 ---------A   02480  DATA 10,I,M,P,O,S,S,I,B,L,E,  5,I,D,I,O,T
    0x569fb03032e0 ---------A   02490  DATA 9,A,P,A,T,H,E,T,I,C
    0x569fb0303d00 ---------A   02500  DATA10,W,A,T,E,R,F,R,O,N,T
    0x569fb0304800 ---------A   02510  DATA11,C,O,L,L,E,C,T,I,O,N,S
    0x569fb0305140 ---------A   02520  DATA 9,Y,E,S,T,E,R,D,A,Y
    0x569fb0305d20 ---------A   02530  DATA12,K,I,N,D,E,R,G,A,R,T,E,N
    0x569fb0306ac0 ---------A   02540  DATA14,A,D,M,I,N,I,S,T,R,A,T,I,O,N
    0x569fb0307320 ---------A   02550  DATA 8,E,M,P,H,A,S,I,S
    0x569fb0307c60 ---------A   02560  DATA 9,E,D,U,C,A,T,I,O,N
    0x569fb0308680 ---------A   02570  DATA 10,R,E,C,I,P,R,O,C,A,L
    0x569fb0309180 ---------A   02580  DATA  11,D,E,C,L,A,R,A,T,I,O,N
    0x569fb0309900 ---------A   02590  DATA 7,P,I,T,C,H,E,R
    0x569fb030a320 ---------A   02600  DATA 10,S,U,P,E,R,S,O,N,I,C
    0x569fb030ae20 ---------A   02610  DATA 11,C,O,M,M,E,N,D,A,B,L,E
    0x569fb030b5a0 ---------A   02620  DATA 7,P,A,S,S,A,G,E
    0x569fb030bfb0 ---------A   02630  DATA 10,P,E,R,C,E,N,T,A,G,E
    0x569fb030c570 ---------A   02640  DATA 5,J,O,I,N,T
    0x569fb030cdd0 ---------A   02650  DATA8,G,O,V,E,R,N,O,R
    0x569fb030d550 ---------A   02660  DATA 7,P,R,O,G,R,A,M
    0x569fb030e210 ---------A   02670  DATA 13,D,I,S,A,P,P,E,A,R,A,N,C,E
    0x569fb030ea70 ---------A   02680  DATA 8,S,E,C,U,R,I,T,Y
    0x569fb030f1e0 ---------A   02690  DATA 7,W,E,L,C,O,M,E
    0x569fb030f6c0 ---------A   02700  DATA 4,Z,E,R,O
    0x569fb0310000 ---------A   02710  DATA9,P,O,T,E,N,T,I,A,L
    0x569fb0310860 ---------A   02720  DATA 8,C,O,M,P,O,S,E,D
    0x569fb0311360 ---------A   02730  DATA 11,P,O,S,S,I,B,I,L,I,T,Y
    0x569fb0311bb0 ---------A   02740  DATA 8,D,I,R,E,C,T,O,R
    0x569fb0312250 ---------A   02750  DATA 6,R,E,S,U,L,T
    0x569fb0312ab0 ---------A   02760  DATA 8,C,H,I,L,D,R,E,N
    0x569fb03133f0 ---------A   02770  DATA 9,C,L,A,S,S,R,O,O,M
    0x569fb0313c50 ---------A   02780  DATA 8,E,C,O,N,O,M,I,C
    0x569fb0314590 ---------A   02790  DATA 9,E,Q,U,I,V,O,C,A,L
    0x569fb0314d10 ---------A   02800  DATA 7,H,O,S,T,I,L,E
    0x569fb0315490 ---------A   02810  DATA 7,R,O,G,U,I,S,H
    0x569fb0315dd0 ---------A   02820  DATA 9,M,I,G,R,A,T,I,O,N
    0x569fb0316a90 ---------A   02830  DATA 13,A,U,T,H,O,R,I,Z,A,T,I,O,N
    0x569fb0317200 ---------A   02840  DATA 7,C,U,R,S,O,R,Y
    0x569fb03177c0 ---------A   02850  DATA 5,M,O,N,E,Y
    0x569fb0317f40 ---------A   02860  DATA 7,A,B,S,O,L,V,E
    0x569fb0318b20 ---------A   02870  DATA 12,P,R,E,R,E,Q,U,I,S,I,T,E
    0x569fb03192b0 ---------A   02880  DATA 7,I,N,S,I,P,I,D
    0x569fb031a050 ---------A   02890  DATA 14 ,C,O,N,G,L,O,M,E,R,A,T,I,O,N
    0x569fb031aa70 ---------A   02900  DATA 10,N,E,G,O,T,I,A,B,L,E
    0x569fb031b1e0 ---------A   02910  DATA 7,D,E,P,O,S,I,T
    0x569fb031b6c0 ---------A   02920  DATA 4,L,A,M,P
    0x569fb031c000 ---------A   02930  DATA 9,Q,U,A,L,I,F,I,E,D
    0x569fb031cb00 ---------A   02940  DATA 11,M,A,I,N,T,E,N,A,N,C,E
    0x569fb031d280 ---------A   02950  DATA 7,F,U,N,E,R,A,L
    0x569fb031dbb0 ---------A   02960  DATA 9,C,A,R,P,E,N,T,E,R
    0x569fb031e170 ---------A   02970  DATA 5,F,U,G,U,E
    0x569fb031ec60 ---------A   02980  DATA 11,M,A,N,U,F,A,C,T,U,R,E
    0x569fb031f300 ---------A   02990  DATA 6,B,A,K,E,R,Y
    0x569fb031fb50 ---------A   03000  DATA 8,M,I,L,I,T,A,R,Y
    0x569fb0320110 ---------A   03010  DATA 5,G,U,A,R,D
    0x569fb0320a50 ---------A   03020  DATA 9,T,E,C,H,N,I,C,A,L
    0x569fb03212b0 ---------A   03030  DATA 8,S,Y,M,P,H,O,N,Y
    0x569fb0321a30 ---------A   03040  DATA 7,A,D,V,A,N,C,E
    0x569fb03221b0 ---------A   03050  DATA 7,M,I,N,I,M,U,M
    0x569fb0322af0 ---------A   03060  DATA 9,A,L,E,R,T,N,E,S,S
    0x569fb0323260 ---------A   03070  DATA 7,Q,U,A,R,T,E,T
    0x569fb0323900 ---------A   03080  DATA 6,P,O,L,I,S,H
    0x569fb0324080 ---------A   03090  DATA 7,B,E,N,E,F,I,T
    0x569fb03248d0 ---------A   03100  DATA 8,C,O,M,P,O,S,E,R
    0x569fb0324da0 ---------A   03110  DATA 4,H,E,R,O
    0x569fb0325430 ---------A   03120  DATA 6,D,E,S,I,S,T
    0x569fb0325ac0 ---------A   03130  DATA 6,C,I,T,I,E,S
    0x569fb0325f90 ---------A   03140  DATA 4,S,L,U,M
    0x569fb0326620 ---------A   03150  DATA 6,R,E,G,I,M,E
    0x569fb0326bd0 ---------A   03160  DATA 5,D,O,U,B,T
    0x569fb03270b0 ---------A   03170  DATA 4,J,O,K,E
    0x569fb03279f0 ---------A   03180  DATA 9,P,R,O,T,E,S,T,E,R
    0x569fb0328160 ---------A   03190  DATA 7,S,I,M,I,L,A,R
    0x569fb0328630 ---------A   03200  DATA 4,C,U,R,B
    0x569fb0328bf0 ---------A   03210  DATA 5,E,L,I,T,E
    0x569fb0329440 ---------A   03220  DATA 8,M,E,D,I,C,A,R,E
    0x569fb03299f0 ---------A   03230  DATA 5,M,A,Y,O,R
    0x569fb0329ec0 ---------A   03240  DATA 4,F,U,N,D
    0x569fb032a550 ---------A   03250  DATA 6,A,C,T,I,O,N
    0x569fb032abe0 ---------A   03260  DATA 6,C,L,O,U,D,Y
    0x569fb032b0b0 ---------A   03270  DATA 4,N,E,W,S
    0x569fb032b660 ---------A   03280  DATA 5,Y,O,U,N,G
    0x569fb032bc20 ---------A   03290  DATA 5,M,A,F,I,A
    0x569fb032c560 ---------A   03300  DATA 9,G,U,E,R,R,I,L,L,A
    0x569fb032cce0 ---------A   03310  DATA 7,R,E,Q,U,E,S,T
    0x569fb032d450 ---------A   03320  DATA 7,G,O,U,R,M,E,T
    0x569fb032d850 ---------A   03330  DATA 3,P,U,B
    0x569fb032e0a0 ---------A   03340  DATA 8,S,K,I,R,M,I,S,H
    0x569fb032e650 ---------A   03350  DATA 5,B,L,A,C,K
    0x569fb032ec10 ---------A   03360  DATA 5,W,H,I,T,E
    0x569fb032f380 ---------A   03370  DATA 7,H,I,S,T,O,R,Y
    0x569fb032fa20 ---------A   03380  DATA 6,P,O,L,I,C,Y
    0x569fb0330360 ---------A   03390  DATA 9,G,Y,M,N,A,S,I,U,M
    0x569fb0330ae0 ---------A   03400  DATA 7,V,E,H,I,C,L,E
    0x569fb0331410 ---------A   03410  DATA 9,A,U,T,O,M,O,T,O,N
    0x569fb0331aa0 ---------A   03420  DATA 6,B,L,I,G,H,T
    0x569fb0331e90 ---------A   03430  DATA 3,S,I,X
    0x569fb0332370 ---------A   03440  DATA 4,C,A,L,L
    0x569fb0332cb0 ---------A   03450  DATA 9,P,S,Y,C,H,O,T,I,C
    0x569fb0333510 ---------A   03460  DATA 8,N,E,U,R,O,T,I,C
    0x569fb0333c90 ---------A   03470  DATA 7,A,N,X,I,E,T,Y
    0x569fb0334410 ---------A   03480  DATA 7,S,Y,M,P,T,O,M
    0x569fb03350c0 ---------A   03490  DATA13,H,Y,P,O,C,H,O,N,D,R,I,A,C
    0x569fb0335760 ---------A   03500  DATA 6,P,H,O,B,I,A
    0x569fb03360a0 ---------A   03510  DATA 9,O,B,S,E,S,S,I,O,N
    0x569fb0336ac0 ---------A   03520  DATA10,C,O,M,P,U,L,S,I,O,N
    0x569fb0337320 ---------A   03530  DATA 8,H,Y,S,T,E,R,I,A
    0x569fb0337aa0 ---------A   03540  DATA 7,A,M,N,E,S,I,A
    0x569fb0338760 ---------A   03550  DATA13,S,C,H,I,Z,O,P,H,R,E,N,I,A
    0x569fb03390a0 ---------A   03560  DATA 9,P,R,O,G,N,O,S,I,S
    0x569fb0339900 ---------A   03570  DATA 8,P,A,R,A,N,O,I,D
    0x569fb033aa50 ---------A   03580  DATA 9,C,A,T,A,T,O,N,I,C
    0x569fb033b1d0 ---------A   03590  DATA 7,A,L,C,O,H,O,L
    0x569fb033ba30 ---------A   03600  DATA 8,C,O,M,P,U,T,E,R
    0x569fb033c280 ---------A   03610  DATA 8,T,E,R,M,I,N,A,L
    0x569fb033c750 ---------A   03620  DATA 4,C,U,T,E
    0x569fb033cb50 ---------A   03630  DATA 3,F,U,N
    0x569fb033d560 ---------A   03640  DATA10,A,C,C,E,S,S,A,B,L,E
    0x569fb033d6b0 ---------A   03650  DATA -103
    0x569fb033d700 ---------A T 03660  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/hangmn.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x569fb02e6670 ---------A   01000  PRINT "BASIC LIBRARY--'HANGMN'--18-JUL-70"
    0x569fb02e7b80 ---------A   01010  REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    0x569fb02e8f30 ---------A   01020  REM
    0x569fb02e8e70 ---------A   01030  RANDOMIZE
    0x569fb02e8ff0 ---------A   01040  LET S7=1
    0x569fb02e7910 ---------A   01050  PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
    0x569fb02e85e0 ---------A T 01060  INPUT N7$
    0x569fb02e6e40 ---------A   01070  IF N7$="N" THEN 1160
    0x569fb02e7480 ---------A   01080  PRINT
    0x569fb02e8730 ---------A   01090  PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
    0x569fb02e9160 ---------A   01100  PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
    0x569fb02e76b0 ---------A   01110  PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
    0x569fb02e7870 ---------A   01120  PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
    0x569fb02eea00 ---------A   01130  PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
    0x569fb02eeb60 ---------A   01140  PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
    0x569fb02eec80 ---------A   01150  PRINT"LOSE."
    0x569fb02eef00 ---------A   01160  LET T2=0
    0x569fb02eefb0 ---------A T 01170  PRINT
    0x569fb02ef140 ---------A   01180  PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
    0x569fb02ef340 ---------A   01190  INPUT Q9$
    0x569fb02ef5c0 ---------A   01200  IF Q9$="Y" THEN 2020
    0x569fb02ef7e0 ---------A   01210  LET T2=1
    0x569fb02efa30 ---------A T 01220  IF S7=0 THEN 1420
    0x569fb02efd10 ---------A   01230  LET Q=0
    0x569fb02effe0 ---------A   01240  LET L=1
    0x569fb02f02b0 ---------A   01250  DIM S(200)
    0x569fb02f0580 ---------A   01260  DIM F$(2000)
    0x569fb02f0850 ---------A   01270  DIM A$(20)
    0x569fb02f0b20 ---------A   01280  DIM B$(20)
    0x569fb02f0df0 ---------A   01290  DIM I(200)
    0x569fb02f10c0 ---------A   01300  LET O1=1
    0x569fb02f12d0 ---------A   01310  READ S(O1)
    0x569fb02f1600 ---------A T 01320  IF S(O1)<0 THEN 1410
    0x569fb02f1b10 ---------A   01330  LET I(O1)=L
    0x569fb02f21e0 ---------A   01340  FOR O=L TO L+S(O1)-1
    0x569fb02f2420 ---------A   01350  READ F$(O)
    0x569fb02f2550 ---------A   01360  NEXT O
    0x569fb02f28a0 ---------A   01370  LET Q=Q+1
    0x569fb02f2cd0 ---------A   01380  LET L=L+S(O1)
    0x569fb02f3000 ---------A   01390  LET O1=O1+1
    0x569fb02f3070 ---------A   01400  GO TO 1310
    0x569fb02f3380 ---------A   01410  LET O1=O1-1
    0x569fb02f3970 ---------A T 01420  LET R=INT(1+O1*RND)
    0x569fb02f3c80 ---------A T 01430  LET S=S(R)
    0x569fb02f4050 ---------A   01440  LET O6=I(R)
    0x569fb02f44e0 ---------A   01450  FOR Z2=1 TO S(R)
    0x569fb02f4810 ---------A   01460  LET O6=I(R)
    0x569fb02f4e20 ---------A   01470  LET A$(Z2)=F$(O6+Z2-1)
    0x569fb02f4f50 ---------A   01480  NEXT Z2
    0x569fb02f5240 ---------A   01490  DIM U$(26)
    0x569fb02f5510 ---------A   01500  DIM E$(26)
    0x569fb02f57e0 ---------A   01510  LET V=1
    0x569fb02f5ad0 ---------A   01520  FOR I=1 TO S
    0x569fb02f5df0 ---------A   01530  LET B$(I)=" - "
    0x569fb02f5f20 ---------A   01540  NEXT I
    0x569fb02f5fb0 ---------A   01550  GO TO 1730
    0x569fb02f6030 ----------   01560  PRINT
    0x569fb02f61b0 ---------A   01570  PRINT"WHAT IS YOUR GUESS";
    0x569fb02f6490 ---------A T 01580  LET K=1
    0x569fb02f66a0 ---------A   01590  INPUT G$
    0x569fb02f6a70 ---------A   01600  FOR Y=1 TO S
    0x569fb02f6dd0 ---------A   01610  IF G$=A$(Y) THEN 1630
    0x569fb02f6e50 ---------A   01620  GO TO 1640
    0x569fb02f7060 ---------A   01630  LET K=0
    0x569fb02f7190 ---------A T 01640  NEXT Y
    0x569fb02f7810 ---------A T 01650  IF K=0 THEN 1680
    0x569fb02f7b30 ---------A   01660  LET E$(V)=G$
    0x569fb02f7e60 ---------A   01670  LET V=V+1
    0x569fb02f8220 ---------A   01680  FOR T=1 TO S 
    0x569fb02f8580 ---------A T 01690  IF G$=A$(T) THEN 1710
    0x569fb02f8600 ---------A   01700  GO TO 1720
    0x569fb02f8910 ---------A   01710  LET B$(T)=G$
    0x569fb02f8a40 ---------A T 01720  NEXT T
    0x569fb02f8ad0 ---------A T 01730  PRINT
    0x569fb02f8dd0 ---------A T 01740  FOR I=1 TO S
    0x569fb02f9030 ---------A   01750  PRINT B$(I);
    0x569fb02f9170 ---------A   01760  NEXT I
    0x569fb02f9300 ---------A   01770  PRINT " ",
    0x569fb02f97c0 ---------A   01780  FOR G6=1 TO V-1
    0x569fb02f9a20 ---------A   01790  PRINT E$(G6);
    0x569fb02f9b60 ---------A   01800  NEXT G6
    0x569fb02f9bf0 ---------A   01810  PRINT
    0x569fb02f9ff0 ---------A   01820  LET E1=V-1
    0x569fb02fa240 ---------A   01830  IF E1<9 THEN 1960
    0x569fb02fa3b0 ---------A   01840  PRINT"I WIN..."
    0x569fb02fa540 ---------A   01850  PRINT"THE CORRECT ANSWER IS ";
    0x569fb02fa840 ---------A   01860  FOR Z2=1 TO S
    0x569fb02faaa0 ---------A   01870  PRINT A$(Z2);
    0x569fb02fabe0 ---------A   01880  NEXT Z2
    0x569fb02fac90 ---------A   01890  PRINT
    0x569fb02fae20 ---------A   01900  PRINT " DO YOU WANT TO PLAY AGAIN";
    0x569fb02fb100 ---------A   01910  LET W=1
    0x569fb02fb310 ---------A   01920  INPUT T$
    0x569fb02fb540 ---------A   01930  LET S7=0
    0x569fb02fb7b0 ---------A   01940  IF T$="Y" THEN 1050
    0x569fb02fb830 ---------A   01950  GO TO 3650
    0x569fb02fb8a0 ---------A   01960  PRINT
    0x569fb02fbb00 ---------A T 01970  IF K=0 THEN 2370
    0x569fb02fbd80 ---------A   01980  IF W=1 THEN 2350
    0x569fb02fbf10 ---------A   01990  PRINT"DO YOU WANT TO SEE THE PICTURE";
    0x569fb02fc140 ---------A   02000  INPUT T2$
    0x569fb02fc3d0 ---------A   02010  IF T2$="N" THEN2370
    0x569fb02fc540 ---------A   02020  PRINT"       *-:-*"
    0x569fb02fc6b0 ---------A T 02030  PRINT"     %&     &%"
    0x569fb02fc810 ---------A   02040  PRINT"    #         #"
    0x569fb02fca80 ---------A   02050  IF E1=8 THEN 2370
    0x569fb02fcbe0 ---------A   02060  PRINT"   ^  (.) (.)  ^"
    0x569fb02fce50 ---------A   02070  IF E1=7 THEN 2370
    0x569fb02fcfb0 ---------A   02080  PRINT" <<<           >>>"
    0x569fb02fd220 ---------A   02090  IF E1=6 THEN 2370
    0x569fb02fd380 ---------A   02100  PRINT"   !    :?:    !"
    0x569fb02fd5f0 ---------A   02110  IF E1=5 THEN 2370
    0x569fb02fd760 ---------A   02120  PRINT"   *  -     -  *"
    0x569fb02fd8d0 ---------A   02130  PRINT"   '   +++++   '"
    0x569fb02fda40 ---------A   02140  PRINT"   &           &"
    0x569fb02fdbb0 ---------A   02150  PRINT"    %%%     %%%"
    0x569fb02fdd10 ---------A   02160  PRINT"      :!#$#!:"
    0x569fb02fdf70 ---------A   02170  IF E1=4 THEN 2370
    0x569fb02fe0d0 ---------A   02180  PRINT"         I"
    0x569fb02fe230 ---------A   02190  PRINT"         I"
    0x569fb02fe390 ---------A   02200  PRINT"         I"
    0x569fb02fe600 ---------A   02210  IF E1=3 THEN 2370
    0x569fb02fe760 ---------A   02220  PRINT"???????????????????"
    0x569fb02fe9c0 ---------A   02230  IF E1=2 THEN 2370
    0x569fb02feb20 ---------A   02240  PRINT"         @"
    0x569fb02fec80 ---------A   02250  PRINT"         @"
    0x569fb02fede0 ---------A   02260  PRINT"         @"
    0x569fb02ff040 ---------A   02270  IF E1=1 THEN 2370
    0x569fb02ff1b0 ---------A   02280  PRINT"        ( )"
    0x569fb02ffb30 ---------A   02290  PRINT"       (   )"
    0x569fb02ffca0 ---------A   02300  PRINT"      (     )"
    0x569fb02ffe10 ---------A   02310  PRINT"     (       )"
    0x569fb02fff80 ---------A   02320  PRINT"    (         )"
    0x569fb03000f0 ---------A   02330  PRINT"   (           )"
    0x569fb0300250 ---------A   02340  PRINT"  (#$%&     &%$#)"
    0x569fb0300470 ---------A   02350  LETW=0
    0x569fb03006c0 ---------A T 02360  IF T2=0 THEN 1210
    0x569fb03009d0 ---------A   02370  FOR I=1 TO S
    0x569fb0300e10 ---------A T 02380  IF A$(I)=B$(I) THEN 2400
    0x569fb0300e90 ---------A   02390  GO TO 1570
    0x569fb0300fc0 ---------A   02400  NEXT I
    0x569fb0301150 ---------A T 02410  PRINT"VERY GOOD! YOU WIN!"
    0x569fb03012e0 ---------A   02420  PRINT"DO YOU WANT TO PLAY AGAIN";
    0x569fb0301500 ---------A   02430  LET S7=0
    0x569fb0301720 ---------A   02440  INPUT H8$
    0x569fb03019a0 ---------A   02450  IF H8$="Y" THEN 1050
    0x569fb0301a40 ---------A   02460  GO TO 3650
    0x569fb03029a0 ---------A   02470  DATA 10,I,M,P,O,S,S,I,B,L,E,  5,I,D,I,O,T
    0x569fb03032e0 ---------A   02480  DATA 9,A,P,A,T,H,E,T,I,C
    0x569fb0303d00 ---------A   02490  DATA10,W,A,T,E,R,F,R,O,N,T
    0x569fb0304800 ---------A   02500  DATA11,C,O,L,L,E,C,T,I,O,N,S
    0x569fb0305140 ---------A   02510  DATA 9,Y,E,S,T,E,R,D,A,Y
    0x569fb0305d20 ---------A   02520  DATA12,K,I,N,D,E,R,G,A,R,T,E,N
    0x569fb0306ac0 ---------A   02530  DATA14,A,D,M,I,N,I,S,T,R,A,T,I,O,N
    0x569fb0307320 ---------A   02540  DATA 8,E,M,P,H,A,S,I,S
    0x569fb0307c60 ---------A   02550  DATA 9,E,D,U,C,A,T,I,O,N
    0x569fb0308680 ---------A   02560  DATA 10,R,E,C,I,P,R,O,C,A,L
    0x569fb0309180 ---------A   02570  DATA  11,D,E,C,L,A,R,A,T,I,O,N
    0x569fb0309900 ---------A   02580  DATA 7,P,I,T,C,H,E,R
    0x569fb030a320 ---------A   02590  DATA 10,S,U,P,E,R,S,O,N,I,C
    0x569fb030ae20 ---------A   02600  DATA 11,C,O,M,M,E,N,D,A,B,L,E
    0x569fb030b5a0 ---------A   02610  DATA 7,P,A,S,S,A,G,E
    0x569fb030bfb0 ---------A   02620  DATA 10,P,E,R,C,E,N,T,A,G,E
    0x569fb030c570 ---------A   02630  DATA 5,J,O,I,N,T
    0x569fb030cdd0 ---------A   02640  DATA8,G,O,V,E,R,N,O,R
    0x569fb030d550 ---------A   02650  DATA 7,P,R,O,G,R,A,M
    0x569fb030e210 ---------A   02660  DATA 13,D,I,S,A,P,P,E,A,R,A,N,C,E
    0x569fb030ea70 ---------A   02670  DATA 8,S,E,C,U,R,I,T,Y
    0x569fb030f1e0 ---------A   02680  DATA 7,W,E,L,C,O,M,E
    0x569fb030f6c0 ---------A   02690  DATA 4,Z,E,R,O
    0x569fb0310000 ---------A   02700  DATA9,P,O,T,E,N,T,I,A,L
    0x569fb0310860 ---------A   02710  DATA 8,C,O,M,P,O,S,E,D
    0x569fb0311360 ---------A   02720  DATA 11,P,O,S,S,I,B,I,L,I,T,Y
    0x569fb0311bb0 ---------A   02730  DATA 8,D,I,R,E,C,T,O,R
    0x569fb0312250 ---------A   02740  DATA 6,R,E,S,U,L,T
    0x569fb0312ab0 ---------A   02750  DATA 8,C,H,I,L,D,R,E,N
    0x569fb03133f0 ---------A   02760  DATA 9,C,L,A,S,S,R,O,O,M
    0x569fb0313c50 ---------A   02770  DATA 8,E,C,O,N,O,M,I,C
    0x569fb0314590 ---------A   02780  DATA 9,E,Q,U,I,V,O,C,A,L
    0x569fb0314d10 ---------A   02790  DATA 7,H,O,S,T,I,L,E
    0x569fb0315490 ---------A   02800  DATA 7,R,O,G,U,I,S,H
    0x569fb0315dd0 ---------A   02810  DATA 9,M,I,G,R,A,T,I,O,N
    0x569fb0316a90 ---------A   02820  DATA 13,A,U,T,H,O,R,I,Z,A,T,I,O,N
    0x569fb0317200 ---------A   02830  DATA 7,C,U,R,S,O,R,Y
    0x569fb03177c0 ---------A   02840  DATA 5,M,O,N,E,Y
    0x569fb0317f40 ---------A   02850  DATA 7,A,B,S,O,L,V,E
    0x569fb0318b20 ---------A   02860  DATA 12,P,R,E,R,E,Q,U,I,S,I,T,E
    0x569fb03192b0 ---------A   02870  DATA 7,I,N,S,I,P,I,D
    0x569fb031a050 ---------A   02880  DATA 14 ,C,O,N,G,L,O,M,E,R,A,T,I,O,N
    0x569fb031aa70 ---------A   02890  DATA 10,N,E,G,O,T,I,A,B,L,E
    0x569fb031b1e0 ---------A   02900  DATA 7,D,E,P,O,S,I,T
    0x569fb031b6c0 ---------A   02910  DATA 4,L,A,M,P
    0x569fb031c000 ---------A   02920  DATA 9,Q,U,A,L,I,F,I,E,D
    0x569fb031cb00 ---------A   02930  DATA 11,M,A,I,N,T,E,N,A,N,C,E
    0x569fb031d280 ---------A   02940  DATA 7,F,U,N,E,R,A,L
    0x569fb031dbb0 ---------A   02950  DATA 9,C,A,R,P,E,N,T,E,R
    0x569fb031e170 ---------A   02960  DATA 5,F,U,G,U,E
    0x569fb031ec60 ---------A   02970  DATA 11,M,A,N,U,F,A,C,T,U,R,E
    0x569fb031f300 ---------A   02980  DATA 6,B,A,K,E,R,Y
    0x569fb031fb50 ---------A   02990  DATA 8,M,I,L,I,T,A,R,Y
    0x569fb0320110 ---------A   03000  DATA 5,G,U,A,R,D
    0x569fb0320a50 ---------A   03010  DATA 9,T,E,C,H,N,I,C,A,L
    0x569fb03212b0 ---------A   03020  DATA 8,S,Y,M,P,H,O,N,Y
    0x569fb0321a30 ---------A   03030  DATA 7,A,D,V,A,N,C,E
    0x569fb03221b0 ---------A   03040  DATA 7,M,I,N,I,M,U,M
    0x569fb0322af0 ---------A   03050  DATA 9,A,L,E,R,T,N,E,S,S
    0x569fb0323260 ---------A   03060  DATA 7,Q,U,A,R,T,E,T
    0x569fb0323900 ---------A   03070  DATA 6,P,O,L,I,S,H
    0x569fb0324080 ---------A   03080  DATA 7,B,E,N,E,F,I,T
    0x569fb03248d0 ---------A   03090  DATA 8,C,O,M,P,O,S,E,R
    0x569fb0324da0 ---------A   03100  DATA 4,H,E,R,O
    0x569fb0325430 ---------A   03110  DATA 6,D,E,S,I,S,T
    0x569fb0325ac0 ---------A   03120  DATA 6,C,I,T,I,E,S
    0x569fb0325f90 ---------A   03130  DATA 4,S,L,U,M
    0x569fb0326620 ---------A   03140  DATA 6,R,E,G,I,M,E
    0x569fb0326bd0 ---------A   03150  DATA 5,D,O,U,B,T
    0x569fb03270b0 ---------A   03160  DATA 4,J,O,K,E
    0x569fb03279f0 ---------A   03170  DATA 9,P,R,O,T,E,S,T,E,R
    0x569fb0328160 ---------A   03180  DATA 7,S,I,M,I,L,A,R
    0x569fb0328630 ---------A   03190  DATA 4,C,U,R,B
    0x569fb0328bf0 ---------A   03200  DATA 5,E,L,I,T,E
    0x569fb0329440 ---------A   03210  DATA 8,M,E,D,I,C,A,R,E
    0x569fb03299f0 ---------A   03220  DATA 5,M,A,Y,O,R
    0x569fb0329ec0 ---------A   03230  DATA 4,F,U,N,D
    0x569fb032a550 ---------A   03240  DATA 6,A,C,T,I,O,N
    0x569fb032abe0 ---------A   03250  DATA 6,C,L,O,U,D,Y
    0x569fb032b0b0 ---------A   03260  DATA 4,N,E,W,S
    0x569fb032b660 ---------A   03270  DATA 5,Y,O,U,N,G
    0x569fb032bc20 ---------A   03280  DATA 5,M,A,F,I,A
    0x569fb032c560 ---------A   03290  DATA 9,G,U,E,R,R,I,L,L,A
    0x569fb032cce0 ---------A   03300  DATA 7,R,E,Q,U,E,S,T
    0x569fb032d450 ---------A   03310  DATA 7,G,O,U,R,M,E,T
    0x569fb032d850 ---------A   03320  DATA 3,P,U,B
    0x569fb032e0a0 ---------A   03330  DATA 8,S,K,I,R,M,I,S,H
    0x569fb032e650 ---------A   03340  DATA 5,B,L,A,C,K
    0x569fb032ec10 ---------A   03350  DATA 5,W,H,I,T,E
    0x569fb032f380 ---------A   03360  DATA 7,H,I,S,T,O,R,Y
    0x569fb032fa20 ---------A   03370  DATA 6,P,O,L,I,C,Y
    0x569fb0330360 ---------A   03380  DATA 9,G,Y,M,N,A,S,I,U,M
    0x569fb0330ae0 ---------A   03390  DATA 7,V,E,H,I,C,L,E
    0x569fb0331410 ---------A   03400  DATA 9,A,U,T,O,M,O,T,O,N
    0x569fb0331aa0 ---------A   03410  DATA 6,B,L,I,G,H,T
    0x569fb0331e90 ---------A   03420  DATA 3,S,I,X
    0x569fb0332370 ---------A   03430  DATA 4,C,A,L,L
    0x569fb0332cb0 ---------A   03440  DATA 9,P,S,Y,C,H,O,T,I,C
    0x569fb0333510 ---------A   03450  DATA 8,N,E,U,R,O,T,I,C
    0x569fb0333c90 ---------A   03460  DATA 7,A,N,X,I,E,T,Y
    0x569fb0334410 ---------A   03470  DATA 7,S,Y,M,P,T,O,M
    0x569fb03350c0 ---------A   03480  DATA13,H,Y,P,O,C,H,O,N,D,R,I,A,C
    0x569fb0335760 ---------A   03490  DATA 6,P,H,O,B,I,A
    0x569fb03360a0 ---------A   03500  DATA 9,O,B,S,E,S,S,I,O,N
    0x569fb0336ac0 ---------A   03510  DATA10,C,O,M,P,U,L,S,I,O,N
    0x569fb0337320 ---------A   03520  DATA 8,H,Y,S,T,E,R,I,A
    0x569fb0337aa0 ---------A   03530  DATA 7,A,M,N,E,S,I,A
    0x569fb0338760 ---------A   03540  DATA13,S,C,H,I,Z,O,P,H,R,E,N,I,A
    0x569fb03390a0 ---------A   03550  DATA 9,P,R,O,G,N,O,S,I,S
    0x569fb0339900 ---------A   03560  DATA 8,P,A,R,A,N,O,I,D
    0x569fb033aa50 ---------A   03570  DATA 9,C,A,T,A,T,O,N,I,C
    0x569fb033b1d0 ---------A   03580  DATA 7,A,L,C,O,H,O,L
    0x569fb033ba30 ---------A   03590  DATA 8,C,O,M,P,U,T,E,R
    0x569fb033c280 ---------A   03600  DATA 8,T,E,R,M,I,N,A,L
    0x569fb033c750 ---------A   03610  DATA 4,C,U,T,E
    0x569fb033cb50 ---------A   03620  DATA 3,F,U,N
    0x569fb033d560 ---------A   03630  DATA10,A,C,C,E,S,S,A,B,L,E
    0x569fb033d6b0 ---------A   03640  DATA -103
    0x569fb033d700 ---------A   03650  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03650 - 10000    6360 

 */



/*
 *  Symbol Table Listing for 'basic/hangmn.bas'
 *
    A$              Array    String          {0,19} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$              Array    String          {0,19} 
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    E$              Array    String          {0,25} 
    E1                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F$              Array    String          {0,1999} 
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G$                       String      
    G6                       Integer     
    H8$                      String      
    HEX$            Function String          args=1, int    
    I               Array    Integer         {0,199} 
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
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N7$                      String      
    O                        Integer     
    O1                       Integer     
    O6                       Integer     
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    Q9$                      String      
    R                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,199} 
    S7                       Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    T$                       String      
    T2                       Integer     
    T2$                      String      
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U$              Array    String          {0,25} 
    V                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    Y                        Integer     
    Z2                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/hangmn.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x569fb02e6670 ---------A   01000  PRINT "BASIC LIBRARY--'HANGMN'--18-JUL-70"
    0x569fb02e7b80 ---------A   01010  REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    0x569fb02e8f30 ---------A   01020  REM
    0x569fb02e8e70 ---------A   01030  RANDOMIZE
    0x569fb02e8ff0 ---------A   01040  LET S7=1
    0x569fb02e7910 ---------A T 01050  PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
    0x569fb02e85e0 ---------A   01060  INPUT N7$
    0x569fb02e6e40 ---------A   01070  IF N7$="N" THEN 1160
    0x569fb02e7480 ---------A   01080  PRINT
    0x569fb02e8730 ---------A   01090  PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
    0x569fb02e9160 ---------A   01100  PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
    0x569fb02e76b0 ---------A   01110  PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
    0x569fb02e7870 ---------A   01120  PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
    0x569fb02eea00 ---------A   01130  PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
    0x569fb02eeb60 ---------A   01140  PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
    0x569fb02eec80 ---------A   01150  PRINT"LOSE."
    0x569fb02eef00 ---------A T 01160  LET T2=0
    0x569fb02eefb0 ---------A   01170  PRINT
    0x569fb02ef140 ---------A   01180  PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
    0x569fb02ef340 ---------A   01190  INPUT Q9$
    0x569fb02ef5c0 ---------A   01200  IF Q9$="Y" THEN 2010
    0x569fb02ef7e0 ---------A T 01210  LET T2=1
    0x569fb02efa30 ---------A   01220  IF S7=0 THEN 1420
    0x569fb02efd10 ---------A   01230  LET Q=0
    0x569fb02effe0 ---------A   01240  LET L=1
    0x569fb02f02b0 ---------A   01250  DIM S(200)
    0x569fb02f0580 ---------A   01260  DIM F$(2000)
    0x569fb02f0850 ---------A   01270  DIM A$(20)
    0x569fb02f0b20 ---------A   01280  DIM B$(20)
    0x569fb02f0df0 ---------A   01290  DIM I(200)
    0x569fb02f10c0 ---------A   01300  LET O1=1
    0x569fb02f12d0 ---------A T 01310  READ S(O1)
    0x569fb02f1600 ---------A   01320  IF S(O1)<0 THEN 1410
    0x569fb02f1b10 ---------A   01330  LET I(O1)=L
    0x569fb02f21e0 ---------A   01340  FOR O=L TO L+S(O1)-1
    0x569fb02f2420 ---------A   01350  READ F$(O)
    0x569fb02f2550 ---------A   01360  NEXT O
    0x569fb02f28a0 ---------A   01370  LET Q=Q+1
    0x569fb02f2cd0 ---------A   01380  LET L=L+S(O1)
    0x569fb02f3000 ---------A   01390  LET O1=O1+1
    0x569fb02f3070 ---------A   01400  GO TO 1310
    0x569fb02f3380 ---------A T 01410  LET O1=O1-1
    0x569fb02f3970 ---------A T 01420  LET R=INT(1+O1*RND)
    0x569fb02f3c80 ---------A   01430  LET S=S(R)
    0x569fb02f4050 ---------A   01440  LET O6=I(R)
    0x569fb02f44e0 ---------A   01450  FOR Z2=1 TO S(R)
    0x569fb02f4810 ---------A   01460  LET O6=I(R)
    0x569fb02f4e20 ---------A   01470  LET A$(Z2)=F$(O6+Z2-1)
    0x569fb02f4f50 ---------A   01480  NEXT Z2
    0x569fb02f5240 ---------A   01490  DIM U$(26)
    0x569fb02f5510 ---------A   01500  DIM E$(26)
    0x569fb02f57e0 ---------A   01510  LET V=1
    0x569fb02f5ad0 ---------A   01520  FOR I=1 TO S
    0x569fb02f5df0 ---------A   01530  LET B$(I)=" - "
    0x569fb02f5f20 ---------A   01540  NEXT I
    0x569fb02f5fb0 ---------A   01550  GO TO 1720
    0x569fb02f61b0 ---------A T 01560  PRINT"WHAT IS YOUR GUESS";
    0x569fb02f6490 ---------A   01570  LET K=1
    0x569fb02f66a0 ---------A   01580  INPUT G$
    0x569fb02f6a70 ---------A   01590  FOR Y=1 TO S
    0x569fb02f6dd0 ---------A   01600  IF G$=A$(Y) THEN 1620
    0x569fb02f6e50 ---------A   01610  GO TO 1630
    0x569fb02f7060 ---------A T 01620  LET K=0
    0x569fb02f7190 ---------A T 01630  NEXT Y
    0x569fb02f7810 ---------A   01640  IF K=0 THEN 1670
    0x569fb02f7b30 ---------A   01650  LET E$(V)=G$
    0x569fb02f7e60 ---------A   01660  LET V=V+1
    0x569fb02f8220 ---------A T 01670  FOR T=1 TO S 
    0x569fb02f8580 ---------A   01680  IF G$=A$(T) THEN 1700
    0x569fb02f8600 ---------A   01690  GO TO 1710
    0x569fb02f8910 ---------A T 01700  LET B$(T)=G$
    0x569fb02f8a40 ---------A T 01710  NEXT T
    0x569fb02f8ad0 ---------A T 01720  PRINT
    0x569fb02f8dd0 ---------A   01730  FOR I=1 TO S
    0x569fb02f9030 ---------A   01740  PRINT B$(I);
    0x569fb02f9170 ---------A   01750  NEXT I
    0x569fb02f9300 ---------A   01760  PRINT " ",
    0x569fb02f97c0 ---------A   01770  FOR G6=1 TO V-1
    0x569fb02f9a20 ---------A   01780  PRINT E$(G6);
    0x569fb02f9b60 ---------A   01790  NEXT G6
    0x569fb02f9bf0 ---------A   01800  PRINT
    0x569fb02f9ff0 ---------A   01810  LET E1=V-1
    0x569fb02fa240 ---------A   01820  IF E1<9 THEN 1950
    0x569fb02fa3b0 ---------A   01830  PRINT"I WIN..."
    0x569fb02fa540 ---------A   01840  PRINT"THE CORRECT ANSWER IS ";
    0x569fb02fa840 ---------A   01850  FOR Z2=1 TO S
    0x569fb02faaa0 ---------A   01860  PRINT A$(Z2);
    0x569fb02fabe0 ---------A   01870  NEXT Z2
    0x569fb02fac90 ---------A   01880  PRINT
    0x569fb02fae20 ---------A   01890  PRINT " DO YOU WANT TO PLAY AGAIN";
    0x569fb02fb100 ---------A   01900  LET W=1
    0x569fb02fb310 ---------A   01910  INPUT T$
    0x569fb02fb540 ---------A   01920  LET S7=0
    0x569fb02fb7b0 ---------A   01930  IF T$="Y" THEN 1050
    0x569fb02fb830 ---------A   01940  GO TO 3640
    0x569fb02fb8a0 ---------A T 01950  PRINT
    0x569fb02fbb00 ---------A   01960  IF K=0 THEN 2360
    0x569fb02fbd80 ---------A   01970  IF W=1 THEN 2340
    0x569fb02fbf10 ---------A   01980  PRINT"DO YOU WANT TO SEE THE PICTURE";
    0x569fb02fc140 ---------A   01990  INPUT T2$
    0x569fb02fc3d0 ---------A   02000  IF T2$="N" THEN2360
    0x569fb02fc540 ---------A T 02010  PRINT"       *-:-*"
    0x569fb02fc6b0 ---------A   02020  PRINT"     %&     &%"
    0x569fb02fc810 ---------A   02030  PRINT"    #         #"
    0x569fb02fca80 ---------A   02040  IF E1=8 THEN 2360
    0x569fb02fcbe0 ---------A   02050  PRINT"   ^  (.) (.)  ^"
    0x569fb02fce50 ---------A   02060  IF E1=7 THEN 2360
    0x569fb02fcfb0 ---------A   02070  PRINT" <<<           >>>"
    0x569fb02fd220 ---------A   02080  IF E1=6 THEN 2360
    0x569fb02fd380 ---------A   02090  PRINT"   !    :?:    !"
    0x569fb02fd5f0 ---------A   02100  IF E1=5 THEN 2360
    0x569fb02fd760 ---------A   02110  PRINT"   *  -     -  *"
    0x569fb02fd8d0 ---------A   02120  PRINT"   '   +++++   '"
    0x569fb02fda40 ---------A   02130  PRINT"   &           &"
    0x569fb02fdbb0 ---------A   02140  PRINT"    %%%     %%%"
    0x569fb02fdd10 ---------A   02150  PRINT"      :!#$#!:"
    0x569fb02fdf70 ---------A   02160  IF E1=4 THEN 2360
    0x569fb02fe0d0 ---------A   02170  PRINT"         I"
    0x569fb02fe230 ---------A   02180  PRINT"         I"
    0x569fb02fe390 ---------A   02190  PRINT"         I"
    0x569fb02fe600 ---------A   02200  IF E1=3 THEN 2360
    0x569fb02fe760 ---------A   02210  PRINT"???????????????????"
    0x569fb02fe9c0 ---------A   02220  IF E1=2 THEN 2360
    0x569fb02feb20 ---------A   02230  PRINT"         @"
    0x569fb02fec80 ---------A   02240  PRINT"         @"
    0x569fb02fede0 ---------A   02250  PRINT"         @"
    0x569fb02ff040 ---------A   02260  IF E1=1 THEN 2360
    0x569fb02ff1b0 ---------A   02270  PRINT"        ( )"
    0x569fb02ffb30 ---------A   02280  PRINT"       (   )"
    0x569fb02ffca0 ---------A   02290  PRINT"      (     )"
    0x569fb02ffe10 ---------A   02300  PRINT"     (       )"
    0x569fb02fff80 ---------A   02310  PRINT"    (         )"
    0x569fb03000f0 ---------A   02320  PRINT"   (           )"
    0x569fb0300250 ---------A   02330  PRINT"  (#$%&     &%$#)"
    0x569fb0300470 ---------A T 02340  LETW=0
    0x569fb03006c0 ---------A   02350  IF T2=0 THEN 1210
    0x569fb03009d0 ---------A T 02360  FOR I=1 TO S
    0x569fb0300e10 ---------A   02370  IF A$(I)=B$(I) THEN 2390
    0x569fb0300e90 ---------A   02380  GO TO 1560
    0x569fb0300fc0 ---------A T 02390  NEXT I
    0x569fb0301150 ---------A   02400  PRINT"VERY GOOD! YOU WIN!"
    0x569fb03012e0 ---------A   02410  PRINT"DO YOU WANT TO PLAY AGAIN";
    0x569fb0301500 ---------A   02420  LET S7=0
    0x569fb0301720 ---------A   02430  INPUT H8$
    0x569fb03019a0 ---------A   02440  IF H8$="Y" THEN 1050
    0x569fb0301a40 ---------A   02450  GO TO 3640
    0x569fb03029a0 ---------A   02460  DATA 10,I,M,P,O,S,S,I,B,L,E,  5,I,D,I,O,T
    0x569fb03032e0 ---------A   02470  DATA 9,A,P,A,T,H,E,T,I,C
    0x569fb0303d00 ---------A   02480  DATA10,W,A,T,E,R,F,R,O,N,T
    0x569fb0304800 ---------A   02490  DATA11,C,O,L,L,E,C,T,I,O,N,S
    0x569fb0305140 ---------A   02500  DATA 9,Y,E,S,T,E,R,D,A,Y
    0x569fb0305d20 ---------A   02510  DATA12,K,I,N,D,E,R,G,A,R,T,E,N
    0x569fb0306ac0 ---------A   02520  DATA14,A,D,M,I,N,I,S,T,R,A,T,I,O,N
    0x569fb0307320 ---------A   02530  DATA 8,E,M,P,H,A,S,I,S
    0x569fb0307c60 ---------A   02540  DATA 9,E,D,U,C,A,T,I,O,N
    0x569fb0308680 ---------A   02550  DATA 10,R,E,C,I,P,R,O,C,A,L
    0x569fb0309180 ---------A   02560  DATA  11,D,E,C,L,A,R,A,T,I,O,N
    0x569fb0309900 ---------A   02570  DATA 7,P,I,T,C,H,E,R
    0x569fb030a320 ---------A   02580  DATA 10,S,U,P,E,R,S,O,N,I,C
    0x569fb030ae20 ---------A   02590  DATA 11,C,O,M,M,E,N,D,A,B,L,E
    0x569fb030b5a0 ---------A   02600  DATA 7,P,A,S,S,A,G,E
    0x569fb030bfb0 ---------A   02610  DATA 10,P,E,R,C,E,N,T,A,G,E
    0x569fb030c570 ---------A   02620  DATA 5,J,O,I,N,T
    0x569fb030cdd0 ---------A   02630  DATA8,G,O,V,E,R,N,O,R
    0x569fb030d550 ---------A   02640  DATA 7,P,R,O,G,R,A,M
    0x569fb030e210 ---------A   02650  DATA 13,D,I,S,A,P,P,E,A,R,A,N,C,E
    0x569fb030ea70 ---------A   02660  DATA 8,S,E,C,U,R,I,T,Y
    0x569fb030f1e0 ---------A   02670  DATA 7,W,E,L,C,O,M,E
    0x569fb030f6c0 ---------A   02680  DATA 4,Z,E,R,O
    0x569fb0310000 ---------A   02690  DATA9,P,O,T,E,N,T,I,A,L
    0x569fb0310860 ---------A   02700  DATA 8,C,O,M,P,O,S,E,D
    0x569fb0311360 ---------A   02710  DATA 11,P,O,S,S,I,B,I,L,I,T,Y
    0x569fb0311bb0 ---------A   02720  DATA 8,D,I,R,E,C,T,O,R
    0x569fb0312250 ---------A   02730  DATA 6,R,E,S,U,L,T
    0x569fb0312ab0 ---------A   02740  DATA 8,C,H,I,L,D,R,E,N
    0x569fb03133f0 ---------A   02750  DATA 9,C,L,A,S,S,R,O,O,M
    0x569fb0313c50 ---------A   02760  DATA 8,E,C,O,N,O,M,I,C
    0x569fb0314590 ---------A   02770  DATA 9,E,Q,U,I,V,O,C,A,L
    0x569fb0314d10 ---------A   02780  DATA 7,H,O,S,T,I,L,E
    0x569fb0315490 ---------A   02790  DATA 7,R,O,G,U,I,S,H
    0x569fb0315dd0 ---------A   02800  DATA 9,M,I,G,R,A,T,I,O,N
    0x569fb0316a90 ---------A   02810  DATA 13,A,U,T,H,O,R,I,Z,A,T,I,O,N
    0x569fb0317200 ---------A   02820  DATA 7,C,U,R,S,O,R,Y
    0x569fb03177c0 ---------A   02830  DATA 5,M,O,N,E,Y
    0x569fb0317f40 ---------A   02840  DATA 7,A,B,S,O,L,V,E
    0x569fb0318b20 ---------A   02850  DATA 12,P,R,E,R,E,Q,U,I,S,I,T,E
    0x569fb03192b0 ---------A   02860  DATA 7,I,N,S,I,P,I,D
    0x569fb031a050 ---------A   02870  DATA 14 ,C,O,N,G,L,O,M,E,R,A,T,I,O,N
    0x569fb031aa70 ---------A   02880  DATA 10,N,E,G,O,T,I,A,B,L,E
    0x569fb031b1e0 ---------A   02890  DATA 7,D,E,P,O,S,I,T
    0x569fb031b6c0 ---------A   02900  DATA 4,L,A,M,P
    0x569fb031c000 ---------A   02910  DATA 9,Q,U,A,L,I,F,I,E,D
    0x569fb031cb00 ---------A   02920  DATA 11,M,A,I,N,T,E,N,A,N,C,E
    0x569fb031d280 ---------A   02930  DATA 7,F,U,N,E,R,A,L
    0x569fb031dbb0 ---------A   02940  DATA 9,C,A,R,P,E,N,T,E,R
    0x569fb031e170 ---------A   02950  DATA 5,F,U,G,U,E
    0x569fb031ec60 ---------A   02960  DATA 11,M,A,N,U,F,A,C,T,U,R,E
    0x569fb031f300 ---------A   02970  DATA 6,B,A,K,E,R,Y
    0x569fb031fb50 ---------A   02980  DATA 8,M,I,L,I,T,A,R,Y
    0x569fb0320110 ---------A   02990  DATA 5,G,U,A,R,D
    0x569fb0320a50 ---------A   03000  DATA 9,T,E,C,H,N,I,C,A,L
    0x569fb03212b0 ---------A   03010  DATA 8,S,Y,M,P,H,O,N,Y
    0x569fb0321a30 ---------A   03020  DATA 7,A,D,V,A,N,C,E
    0x569fb03221b0 ---------A   03030  DATA 7,M,I,N,I,M,U,M
    0x569fb0322af0 ---------A   03040  DATA 9,A,L,E,R,T,N,E,S,S
    0x569fb0323260 ---------A   03050  DATA 7,Q,U,A,R,T,E,T
    0x569fb0323900 ---------A   03060  DATA 6,P,O,L,I,S,H
    0x569fb0324080 ---------A   03070  DATA 7,B,E,N,E,F,I,T
    0x569fb03248d0 ---------A   03080  DATA 8,C,O,M,P,O,S,E,R
    0x569fb0324da0 ---------A   03090  DATA 4,H,E,R,O
    0x569fb0325430 ---------A   03100  DATA 6,D,E,S,I,S,T
    0x569fb0325ac0 ---------A   03110  DATA 6,C,I,T,I,E,S
    0x569fb0325f90 ---------A   03120  DATA 4,S,L,U,M
    0x569fb0326620 ---------A   03130  DATA 6,R,E,G,I,M,E
    0x569fb0326bd0 ---------A   03140  DATA 5,D,O,U,B,T
    0x569fb03270b0 ---------A   03150  DATA 4,J,O,K,E
    0x569fb03279f0 ---------A   03160  DATA 9,P,R,O,T,E,S,T,E,R
    0x569fb0328160 ---------A   03170  DATA 7,S,I,M,I,L,A,R
    0x569fb0328630 ---------A   03180  DATA 4,C,U,R,B
    0x569fb0328bf0 ---------A   03190  DATA 5,E,L,I,T,E
    0x569fb0329440 ---------A   03200  DATA 8,M,E,D,I,C,A,R,E
    0x569fb03299f0 ---------A   03210  DATA 5,M,A,Y,O,R
    0x569fb0329ec0 ---------A   03220  DATA 4,F,U,N,D
    0x569fb032a550 ---------A   03230  DATA 6,A,C,T,I,O,N
    0x569fb032abe0 ---------A   03240  DATA 6,C,L,O,U,D,Y
    0x569fb032b0b0 ---------A   03250  DATA 4,N,E,W,S
    0x569fb032b660 ---------A   03260  DATA 5,Y,O,U,N,G
    0x569fb032bc20 ---------A   03270  DATA 5,M,A,F,I,A
    0x569fb032c560 ---------A   03280  DATA 9,G,U,E,R,R,I,L,L,A
    0x569fb032cce0 ---------A   03290  DATA 7,R,E,Q,U,E,S,T
    0x569fb032d450 ---------A   03300  DATA 7,G,O,U,R,M,E,T
    0x569fb032d850 ---------A   03310  DATA 3,P,U,B
    0x569fb032e0a0 ---------A   03320  DATA 8,S,K,I,R,M,I,S,H
    0x569fb032e650 ---------A   03330  DATA 5,B,L,A,C,K
    0x569fb032ec10 ---------A   03340  DATA 5,W,H,I,T,E
    0x569fb032f380 ---------A   03350  DATA 7,H,I,S,T,O,R,Y
    0x569fb032fa20 ---------A   03360  DATA 6,P,O,L,I,C,Y
    0x569fb0330360 ---------A   03370  DATA 9,G,Y,M,N,A,S,I,U,M
    0x569fb0330ae0 ---------A   03380  DATA 7,V,E,H,I,C,L,E
    0x569fb0331410 ---------A   03390  DATA 9,A,U,T,O,M,O,T,O,N
    0x569fb0331aa0 ---------A   03400  DATA 6,B,L,I,G,H,T
    0x569fb0331e90 ---------A   03410  DATA 3,S,I,X
    0x569fb0332370 ---------A   03420  DATA 4,C,A,L,L
    0x569fb0332cb0 ---------A   03430  DATA 9,P,S,Y,C,H,O,T,I,C
    0x569fb0333510 ---------A   03440  DATA 8,N,E,U,R,O,T,I,C
    0x569fb0333c90 ---------A   03450  DATA 7,A,N,X,I,E,T,Y
    0x569fb0334410 ---------A   03460  DATA 7,S,Y,M,P,T,O,M
    0x569fb03350c0 ---------A   03470  DATA13,H,Y,P,O,C,H,O,N,D,R,I,A,C
    0x569fb0335760 ---------A   03480  DATA 6,P,H,O,B,I,A
    0x569fb03360a0 ---------A   03490  DATA 9,O,B,S,E,S,S,I,O,N
    0x569fb0336ac0 ---------A   03500  DATA10,C,O,M,P,U,L,S,I,O,N
    0x569fb0337320 ---------A   03510  DATA 8,H,Y,S,T,E,R,I,A
    0x569fb0337aa0 ---------A   03520  DATA 7,A,M,N,E,S,I,A
    0x569fb0338760 ---------A   03530  DATA13,S,C,H,I,Z,O,P,H,R,E,N,I,A
    0x569fb03390a0 ---------A   03540  DATA 9,P,R,O,G,N,O,S,I,S
    0x569fb0339900 ---------A   03550  DATA 8,P,A,R,A,N,O,I,D
    0x569fb033aa50 ---------A   03560  DATA 9,C,A,T,A,T,O,N,I,C
    0x569fb033b1d0 ---------A   03570  DATA 7,A,L,C,O,H,O,L
    0x569fb033ba30 ---------A   03580  DATA 8,C,O,M,P,U,T,E,R
    0x569fb033c280 ---------A   03590  DATA 8,T,E,R,M,I,N,A,L
    0x569fb033c750 ---------A   03600  DATA 4,C,U,T,E
    0x569fb033cb50 ---------A   03610  DATA 3,F,U,N
    0x569fb033d560 ---------A   03620  DATA10,A,C,C,E,S,S,A,B,L,E
    0x569fb033d6b0 ---------A   03630  DATA -103
    0x569fb033d700 ---------A T 03640  END
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
char* data_02460s[]={"10","I","M","P","O","S","S","I","B","L","E","5","I","D","I","O","T"};
char* data_02470s[]={"9","A","P","A","T","H","E","T","I","C"};
char* data_02480s[]={"10","W","A","T","E","R","F","R","O","N","T"};
char* data_02490s[]={"11","C","O","L","L","E","C","T","I","O","N","S"};
char* data_02500s[]={"9","Y","E","S","T","E","R","D","A","Y"};
char* data_02510s[]={"12","K","I","N","D","E","R","G","A","R","T","E","N"};
char* data_02520s[]={"14","A","D","M","I","N","I","S","T","R","A","T","I","O","N"};
char* data_02530s[]={"8","E","M","P","H","A","S","I","S"};
char* data_02540s[]={"9","E","D","U","C","A","T","I","O","N"};
char* data_02550s[]={"10","R","E","C","I","P","R","O","C","A","L"};
char* data_02560s[]={"11","D","E","C","L","A","R","A","T","I","O","N"};
char* data_02570s[]={"7","P","I","T","C","H","E","R"};
char* data_02580s[]={"10","S","U","P","E","R","S","O","N","I","C"};
char* data_02590s[]={"11","C","O","M","M","E","N","D","A","B","L","E"};
char* data_02600s[]={"7","P","A","S","S","A","G","E"};
char* data_02610s[]={"10","P","E","R","C","E","N","T","A","G","E"};
char* data_02620s[]={"5","J","O","I","N","T"};
char* data_02630s[]={"8","G","O","V","E","R","N","O","R"};
char* data_02640s[]={"7","P","R","O","G","R","A","M"};
char* data_02650s[]={"13","D","I","S","A","P","P","E","A","R","A","N","C","E"};
char* data_02660s[]={"8","S","E","C","U","R","I","T","Y"};
char* data_02670s[]={"7","W","E","L","C","O","M","E"};
char* data_02680s[]={"4","Z","E","R","O"};
char* data_02690s[]={"9","P","O","T","E","N","T","I","A","L"};
char* data_02700s[]={"8","C","O","M","P","O","S","E","D"};
char* data_02710s[]={"11","P","O","S","S","I","B","I","L","I","T","Y"};
char* data_02720s[]={"8","D","I","R","E","C","T","O","R"};
char* data_02730s[]={"6","R","E","S","U","L","T"};
char* data_02740s[]={"8","C","H","I","L","D","R","E","N"};
char* data_02750s[]={"9","C","L","A","S","S","R","O","O","M"};
char* data_02760s[]={"8","E","C","O","N","O","M","I","C"};
char* data_02770s[]={"9","E","Q","U","I","V","O","C","A","L"};
char* data_02780s[]={"7","H","O","S","T","I","L","E"};
char* data_02790s[]={"7","R","O","G","U","I","S","H"};
char* data_02800s[]={"9","M","I","G","R","A","T","I","O","N"};
char* data_02810s[]={"13","A","U","T","H","O","R","I","Z","A","T","I","O","N"};
char* data_02820s[]={"7","C","U","R","S","O","R","Y"};
char* data_02830s[]={"5","M","O","N","E","Y"};
char* data_02840s[]={"7","A","B","S","O","L","V","E"};
char* data_02850s[]={"12","P","R","E","R","E","Q","U","I","S","I","T","E"};
char* data_02860s[]={"7","I","N","S","I","P","I","D"};
char* data_02870s[]={"14","C","O","N","G","L","O","M","E","R","A","T","I","O","N"};
char* data_02880s[]={"10","N","E","G","O","T","I","A","B","L","E"};
char* data_02890s[]={"7","D","E","P","O","S","I","T"};
char* data_02900s[]={"4","L","A","M","P"};
char* data_02910s[]={"9","Q","U","A","L","I","F","I","E","D"};
char* data_02920s[]={"11","M","A","I","N","T","E","N","A","N","C","E"};
char* data_02930s[]={"7","F","U","N","E","R","A","L"};
char* data_02940s[]={"9","C","A","R","P","E","N","T","E","R"};
char* data_02950s[]={"5","F","U","G","U","E"};
char* data_02960s[]={"11","M","A","N","U","F","A","C","T","U","R","E"};
char* data_02970s[]={"6","B","A","K","E","R","Y"};
char* data_02980s[]={"8","M","I","L","I","T","A","R","Y"};
char* data_02990s[]={"5","G","U","A","R","D"};
char* data_03000s[]={"9","T","E","C","H","N","I","C","A","L"};
char* data_03010s[]={"8","S","Y","M","P","H","O","N","Y"};
char* data_03020s[]={"7","A","D","V","A","N","C","E"};
char* data_03030s[]={"7","M","I","N","I","M","U","M"};
char* data_03040s[]={"9","A","L","E","R","T","N","E","S","S"};
char* data_03050s[]={"7","Q","U","A","R","T","E","T"};
char* data_03060s[]={"6","P","O","L","I","S","H"};
char* data_03070s[]={"7","B","E","N","E","F","I","T"};
char* data_03080s[]={"8","C","O","M","P","O","S","E","R"};
char* data_03090s[]={"4","H","E","R","O"};
char* data_03100s[]={"6","D","E","S","I","S","T"};
char* data_03110s[]={"6","C","I","T","I","E","S"};
char* data_03120s[]={"4","S","L","U","M"};
char* data_03130s[]={"6","R","E","G","I","M","E"};
char* data_03140s[]={"5","D","O","U","B","T"};
char* data_03150s[]={"4","J","O","K","E"};
char* data_03160s[]={"9","P","R","O","T","E","S","T","E","R"};
char* data_03170s[]={"7","S","I","M","I","L","A","R"};
char* data_03180s[]={"4","C","U","R","B"};
char* data_03190s[]={"5","E","L","I","T","E"};
char* data_03200s[]={"8","M","E","D","I","C","A","R","E"};
char* data_03210s[]={"5","M","A","Y","O","R"};
char* data_03220s[]={"4","F","U","N","D"};
char* data_03230s[]={"6","A","C","T","I","O","N"};
char* data_03240s[]={"6","C","L","O","U","D","Y"};
char* data_03250s[]={"4","N","E","W","S"};
char* data_03260s[]={"5","Y","O","U","N","G"};
char* data_03270s[]={"5","M","A","F","I","A"};
char* data_03280s[]={"9","G","U","E","R","R","I","L","L","A"};
char* data_03290s[]={"7","R","E","Q","U","E","S","T"};
char* data_03300s[]={"7","G","O","U","R","M","E","T"};
char* data_03310s[]={"3","P","U","B"};
char* data_03320s[]={"8","S","K","I","R","M","I","S","H"};
char* data_03330s[]={"5","B","L","A","C","K"};
char* data_03340s[]={"5","W","H","I","T","E"};
char* data_03350s[]={"7","H","I","S","T","O","R","Y"};
char* data_03360s[]={"6","P","O","L","I","C","Y"};
char* data_03370s[]={"9","G","Y","M","N","A","S","I","U","M"};
char* data_03380s[]={"7","V","E","H","I","C","L","E"};
char* data_03390s[]={"9","A","U","T","O","M","O","T","O","N"};
char* data_03400s[]={"6","B","L","I","G","H","T"};
char* data_03410s[]={"3","S","I","X"};
char* data_03420s[]={"4","C","A","L","L"};
char* data_03430s[]={"9","P","S","Y","C","H","O","T","I","C"};
char* data_03440s[]={"8","N","E","U","R","O","T","I","C"};
char* data_03450s[]={"7","A","N","X","I","E","T","Y"};
char* data_03460s[]={"7","S","Y","M","P","T","O","M"};
char* data_03470s[]={"13","H","Y","P","O","C","H","O","N","D","R","I","A","C"};
char* data_03480s[]={"6","P","H","O","B","I","A"};
char* data_03490s[]={"9","O","B","S","E","S","S","I","O","N"};
char* data_03500s[]={"10","C","O","M","P","U","L","S","I","O","N"};
char* data_03510s[]={"8","H","Y","S","T","E","R","I","A"};
char* data_03520s[]={"7","A","M","N","E","S","I","A"};
char* data_03530s[]={"13","S","C","H","I","Z","O","P","H","R","E","N","I","A"};
char* data_03540s[]={"9","P","R","O","G","N","O","S","I","S"};
char* data_03550s[]={"8","P","A","R","A","N","O","I","D"};
char* data_03560s[]={"9","C","A","T","A","T","O","N","I","C"};
char* data_03570s[]={"7","A","L","C","O","H","O","L"};
char* data_03580s[]={"8","C","O","M","P","U","T","E","R"};
char* data_03590s[]={"8","T","E","R","M","I","N","A","L"};
char* data_03600s[]={"4","C","U","T","E"};
char* data_03610s[]={"3","F","U","N"};
char* data_03620s[]={"10","A","C","C","E","S","S","A","B","L","E"};
char* data_03630s[]={"-103"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 2460, 17,data_02460s},
    { 2470, 10,data_02470s},
    { 2480, 11,data_02480s},
    { 2490, 12,data_02490s},
    { 2500, 10,data_02500s},
    { 2510, 13,data_02510s},
    { 2520, 15,data_02520s},
    { 2530,  9,data_02530s},
    { 2540, 10,data_02540s},
    { 2550, 11,data_02550s},
    { 2560, 12,data_02560s},
    { 2570,  8,data_02570s},
    { 2580, 11,data_02580s},
    { 2590, 12,data_02590s},
    { 2600,  8,data_02600s},
    { 2610, 11,data_02610s},
    { 2620,  6,data_02620s},
    { 2630,  9,data_02630s},
    { 2640,  8,data_02640s},
    { 2650, 14,data_02650s},
    { 2660,  9,data_02660s},
    { 2670,  8,data_02670s},
    { 2680,  5,data_02680s},
    { 2690, 10,data_02690s},
    { 2700,  9,data_02700s},
    { 2710, 12,data_02710s},
    { 2720,  9,data_02720s},
    { 2730,  7,data_02730s},
    { 2740,  9,data_02740s},
    { 2750, 10,data_02750s},
    { 2760,  9,data_02760s},
    { 2770, 10,data_02770s},
    { 2780,  8,data_02780s},
    { 2790,  8,data_02790s},
    { 2800, 10,data_02800s},
    { 2810, 14,data_02810s},
    { 2820,  8,data_02820s},
    { 2830,  6,data_02830s},
    { 2840,  8,data_02840s},
    { 2850, 13,data_02850s},
    { 2860,  8,data_02860s},
    { 2870, 15,data_02870s},
    { 2880, 11,data_02880s},
    { 2890,  8,data_02890s},
    { 2900,  5,data_02900s},
    { 2910, 10,data_02910s},
    { 2920, 12,data_02920s},
    { 2930,  8,data_02930s},
    { 2940, 10,data_02940s},
    { 2950,  6,data_02950s},
    { 2960, 12,data_02960s},
    { 2970,  7,data_02970s},
    { 2980,  9,data_02980s},
    { 2990,  6,data_02990s},
    { 3000, 10,data_03000s},
    { 3010,  9,data_03010s},
    { 3020,  8,data_03020s},
    { 3030,  8,data_03030s},
    { 3040, 10,data_03040s},
    { 3050,  8,data_03050s},
    { 3060,  7,data_03060s},
    { 3070,  8,data_03070s},
    { 3080,  9,data_03080s},
    { 3090,  5,data_03090s},
    { 3100,  7,data_03100s},
    { 3110,  7,data_03110s},
    { 3120,  5,data_03120s},
    { 3130,  7,data_03130s},
    { 3140,  6,data_03140s},
    { 3150,  5,data_03150s},
    { 3160, 10,data_03160s},
    { 3170,  8,data_03170s},
    { 3180,  5,data_03180s},
    { 3190,  6,data_03190s},
    { 3200,  9,data_03200s},
    { 3210,  6,data_03210s},
    { 3220,  5,data_03220s},
    { 3230,  7,data_03230s},
    { 3240,  7,data_03240s},
    { 3250,  5,data_03250s},
    { 3260,  6,data_03260s},
    { 3270,  6,data_03270s},
    { 3280, 10,data_03280s},
    { 3290,  8,data_03290s},
    { 3300,  8,data_03300s},
    { 3310,  4,data_03310s},
    { 3320,  9,data_03320s},
    { 3330,  6,data_03330s},
    { 3340,  6,data_03340s},
    { 3350,  8,data_03350s},
    { 3360,  7,data_03360s},
    { 3370, 10,data_03370s},
    { 3380,  8,data_03380s},
    { 3390, 10,data_03390s},
    { 3400,  7,data_03400s},
    { 3410,  4,data_03410s},
    { 3420,  5,data_03420s},
    { 3430, 10,data_03430s},
    { 3440,  9,data_03440s},
    { 3450,  8,data_03450s},
    { 3460,  8,data_03460s},
    { 3470, 14,data_03470s},
    { 3480,  7,data_03480s},
    { 3490, 10,data_03490s},
    { 3500, 11,data_03500s},
    { 3510,  9,data_03510s},
    { 3520,  8,data_03520s},
    { 3530, 14,data_03530s},
    { 3540, 10,data_03540s},
    { 3550,  9,data_03550s},
    { 3560, 10,data_03560s},
    { 3570,  8,data_03570s},
    { 3580,  9,data_03580s},
    { 3590,  9,data_03590s},
    { 3600,  5,data_03600s},
    { 3610,  4,data_03610s},
    { 3620, 11,data_03620s},
    { 3630,  1,data_03630s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[20];                             // Basic: A$ 
char*  B_str_arr[20];                             // Basic: B$ 
char*  E_str_arr[26];                             // Basic: E$ 
int    E1_int;                                    // Basic: E1 
char*  F_str_arr[2000];                           // Basic: F$ 
char*  G_str;                                     // Basic: G$ 
int    G6_int;                                    // Basic: G6 
char*  H8_str;                                    // Basic: H8$ 
int    I_int_arr[200];                            // Basic: I 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
char*  N7_str;                                    // Basic: N7$ 
int    O_int;                                     // Basic: O 
int    O1_int;                                    // Basic: O1 
int    O6_int;                                    // Basic: O6 
int    Q_int;                                     // Basic: Q 
char*  Q9_str;                                    // Basic: Q9$ 
int    R_int;                                     // Basic: R 
int    S_int_arr[200];                            // Basic: S 
int    S7_int;                                    // Basic: S7 
int    T_int;                                     // Basic: T 
char*  T_str;                                     // Basic: T$ 
int    T2_int;                                    // Basic: T2 
char*  T2_str;                                    // Basic: T2$ 
char*  U_str_arr[26];                             // Basic: U$ 
int    V_int;                                     // Basic: V 
int    W_int;                                     // Basic: W 
int    Y_int;                                     // Basic: Y 
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
    // 01000 PRINT "BASIC LIBRARY--'HANGMN'--18-JUL-70"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BASIC LIBRARY--'HANGMN'--18-JUL-70");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    // 01020 REM
    // 01030 RANDOMIZE
    RANDOMIZE();
    // 01040 LET S7=1
    S7_int = 1;

  Lbl_01050:
    // 01050 PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO SEE THE INSTRUCTIONS");fputs(buf,fh); };
    // 01060 INPUT N7$
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
                (err += b2c_strtos(&N7_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF N7$="N" THEN 1160
    if(strcmp(N7_str,"N")==0)goto Lbl_01160;
    // 01080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT"LOSE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LOSE.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01160:
    // 01160 LET T2=0
    T2_int = 0;
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS");fputs(buf,fh); };
    // 01190 INPUT Q9$
    // Start of Basic INPUT statement 01190
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Q9_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01190
    // 01200 IF Q9$="Y" THEN 2010
    if(strcmp(Q9_str,"Y")==0)goto Lbl_02010;

  Lbl_01210:
    // 01210 LET T2=1
    T2_int = 1;
    // 01220 IF S7=0 THEN 1420
    if(S7_int==0)goto Lbl_01420;
    // 01230 LET Q=0
    Q_int = 0;
    // 01240 LET L=1
    L_int = 1;
    // 01250 DIM S(200)
    // 01260 DIM F$(2000)
    // 01270 DIM A$(20)
    // 01280 DIM B$(20)
    // 01290 DIM I(200)
    // 01300 LET O1=1
    O1_int = 1;

  Lbl_01310:
    // 01310 READ S(O1)
    S_int_arr[O1_int] = Get_Data_Int();
    // 01320 IF S(O1)<0 THEN 1410
    if(S_int_arr[O1_int]<0)goto Lbl_01410;
    // 01330 LET I(O1)=L
    I_int_arr[O1_int] = L_int;
    // 01340 FOR O=L TO L+S(O1)-1
    for(O_int=L_int;O_int<=L_int+S_int_arr[O1_int]-1;O_int++){
        // 01350 READ F$(O)
        F_str_arr[O_int] = Get_Data_String();
        // 01360 NEXT O
        int dummy_1360=0; // Ignore this line.
    }; // End-For(O_int)
    // 01370 LET Q=Q+1
    Q_int = Q_int+1;
    // 01380 LET L=L+S(O1)
    L_int = L_int+S_int_arr[O1_int];
    // 01390 LET O1=O1+1
    O1_int = O1_int+1;
    // 01400 GO TO 1310
    goto Lbl_01310;

  Lbl_01410:
    // 01410 LET O1=O1-1
    O1_int = O1_int-1;

  Lbl_01420:
    // 01420 LET R=INT(1+O1*RND)
    R_int = INT(1+O1_int*RND());
    // 01430 LET S=S(R)
    S_int_arr[0] = S_int_arr[R_int];
    // 01440 LET O6=I(R)
    O6_int = I_int_arr[R_int];
    // 01450 FOR Z2=1 TO S(R)
    for(Z2_int=1;Z2_int<=S_int_arr[R_int];Z2_int++){
        // 01460 LET O6=I(R)
        O6_int = I_int_arr[R_int];
        // 01470 LET A$(Z2)=F$(O6+Z2-1)
        GLBpStr=F_str_arr[O6_int+Z2_int-1];
        A_str_arr[Z2_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01480 NEXT Z2
        int dummy_1480=0; // Ignore this line.
    }; // End-For(Z2_int)
    // 01490 DIM U$(26)
    // 01500 DIM E$(26)
    // 01510 LET V=1
    V_int = 1;
    // 01520 FOR I=1 TO S
    for(I_int_arr[0]=1;I_int_arr[0]<=S_int_arr[0];I_int_arr[0]++){
        // 01530 LET B$(I)=" - "
        GLBpStr=" - ";
        B_str_arr[I_int_arr[0]] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01540 NEXT I
        int dummy_1540=0; // Ignore this line.
    }; // End-For(I_int_arr[0])
    // 01550 GO TO 1720
    goto Lbl_01720;

  Lbl_01560:
    // 01560 PRINT"WHAT IS YOUR GUESS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR GUESS");fputs(buf,fh); };
    // 01570 LET K=1
    K_int = 1;
    // 01580 INPUT G$
    // Start of Basic INPUT statement 01580
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&G_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01580
    // 01590 FOR Y=1 TO S
    for(Y_int=1;Y_int<=S_int_arr[0];Y_int++){
        // 01600 IF G$=A$(Y) THEN 1620
        if(strcmp(G_str,A_str_arr[Y_int])==0)goto Lbl_01620;
        // 01610 GO TO 1630
        goto Lbl_01630;

  Lbl_01620:
        // 01620 LET K=0
        K_int = 0;

  Lbl_01630:
        // 01630 NEXT Y
        int dummy_1630=0; // Ignore this line.
    }; // End-For(Y_int)
    // 01640 IF K=0 THEN 1670
    if(K_int==0)goto Lbl_01670;
    // 01650 LET E$(V)=G$
    GLBpStr=G_str;
    E_str_arr[V_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01660 LET V=V+1
    V_int = V_int+1;

  Lbl_01670:
    // 01670 FOR T=1 TO S 
    for(T_int=1;T_int<=S_int_arr[0];T_int++){
        // 01680 IF G$=A$(T) THEN 1700
        if(strcmp(G_str,A_str_arr[T_int])==0)goto Lbl_01700;
        // 01690 GO TO 1710
        goto Lbl_01710;

  Lbl_01700:
        // 01700 LET B$(T)=G$
        GLBpStr=G_str;
        B_str_arr[T_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01710:
        // 01710 NEXT T
        int dummy_1710=0; // Ignore this line.
    }; // End-For(T_int)

  Lbl_01720:
    // 01720 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01730 FOR I=1 TO S
    for(I_int_arr[0]=1;I_int_arr[0]<=S_int_arr[0];I_int_arr[0]++){
        // 01740 PRINT B$(I);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[I_int_arr[0]]);fputs(buf,fh); };
        // 01750 NEXT I
        int dummy_1750=0; // Ignore this line.
    }; // End-For(I_int_arr[0])
    // 01760 PRINT " ",
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
    // 01770 FOR G6=1 TO V-1
    for(G6_int=1;G6_int<=V_int-1;G6_int++){
        // 01780 PRINT E$(G6);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,E_str_arr[G6_int]);fputs(buf,fh); };
        // 01790 NEXT G6
        int dummy_1790=0; // Ignore this line.
    }; // End-For(G6_int)
    // 01800 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01810 LET E1=V-1
    E1_int = V_int-1;
    // 01820 IF E1<9 THEN 1950
    if(E1_int<9)goto Lbl_01950;
    // 01830 PRINT"I WIN..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WIN...");strcat(buf,"\n");fputs(buf,fh); };
    // 01840 PRINT"THE CORRECT ANSWER IS ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CORRECT ANSWER IS ");fputs(buf,fh); };
    // 01850 FOR Z2=1 TO S
    for(Z2_int=1;Z2_int<=S_int_arr[0];Z2_int++){
        // 01860 PRINT A$(Z2);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[Z2_int]);fputs(buf,fh); };
        // 01870 NEXT Z2
        int dummy_1870=0; // Ignore this line.
    }; // End-For(Z2_int)
    // 01880 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01890 PRINT " DO YOU WANT TO PLAY AGAIN";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," DO YOU WANT TO PLAY AGAIN");fputs(buf,fh); };
    // 01900 LET W=1
    W_int = 1;
    // 01910 INPUT T$
    // Start of Basic INPUT statement 01910
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&T_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01910
    // 01920 LET S7=0
    S7_int = 0;
    // 01930 IF T$="Y" THEN 1050
    if(strcmp(T_str,"Y")==0)goto Lbl_01050;
    // 01940 GO TO 3640
    goto Lbl_03640;

  Lbl_01950:
    // 01950 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01960 IF K=0 THEN 2360
    if(K_int==0)goto Lbl_02360;
    // 01970 IF W=1 THEN 2340
    if(W_int==1)goto Lbl_02340;
    // 01980 PRINT"DO YOU WANT TO SEE THE PICTURE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO SEE THE PICTURE");fputs(buf,fh); };
    // 01990 INPUT T2$
    // Start of Basic INPUT statement 01990
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&T2_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01990
    // 02000 IF T2$="N" THEN2360
    if(strcmp(T2_str,"N")==0)goto Lbl_02360;

  Lbl_02010:
    // 02010 PRINT"       *-:-*"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"       *-:-*");strcat(buf,"\n");fputs(buf,fh); };
    // 02020 PRINT"     %&     &%"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     %%&     &%%");strcat(buf,"\n");fputs(buf,fh); };
    // 02030 PRINT"    #         #"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    #         #");strcat(buf,"\n");fputs(buf,fh); };
    // 02040 IF E1=8 THEN 2360
    if(E1_int==8)goto Lbl_02360;
    // 02050 PRINT"   ^  (.) (.)  ^"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   ^  (.) (.)  ^");strcat(buf,"\n");fputs(buf,fh); };
    // 02060 IF E1=7 THEN 2360
    if(E1_int==7)goto Lbl_02360;
    // 02070 PRINT" <<<           >>>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," <<<           >>>");strcat(buf,"\n");fputs(buf,fh); };
    // 02080 IF E1=6 THEN 2360
    if(E1_int==6)goto Lbl_02360;
    // 02090 PRINT"   !    :?:    !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   !    :?:    !");strcat(buf,"\n");fputs(buf,fh); };
    // 02100 IF E1=5 THEN 2360
    if(E1_int==5)goto Lbl_02360;
    // 02110 PRINT"   *  -     -  *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   *  -     -  *");strcat(buf,"\n");fputs(buf,fh); };
    // 02120 PRINT"   '   +++++   '"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   '   +++++   '");strcat(buf,"\n");fputs(buf,fh); };
    // 02130 PRINT"   &           &"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   &           &");strcat(buf,"\n");fputs(buf,fh); };
    // 02140 PRINT"    %%%     %%%"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    %%%%%%     %%%%%%");strcat(buf,"\n");fputs(buf,fh); };
    // 02150 PRINT"      :!#$#!:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      :!#$#!:");strcat(buf,"\n");fputs(buf,fh); };
    // 02160 IF E1=4 THEN 2360
    if(E1_int==4)goto Lbl_02360;
    // 02170 PRINT"         I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"         I");strcat(buf,"\n");fputs(buf,fh); };
    // 02180 PRINT"         I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"         I");strcat(buf,"\n");fputs(buf,fh); };
    // 02190 PRINT"         I"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"         I");strcat(buf,"\n");fputs(buf,fh); };
    // 02200 IF E1=3 THEN 2360
    if(E1_int==3)goto Lbl_02360;
    // 02210 PRINT"???????????????????"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"???????????????????");strcat(buf,"\n");fputs(buf,fh); };
    // 02220 IF E1=2 THEN 2360
    if(E1_int==2)goto Lbl_02360;
    // 02230 PRINT"         @"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"         @");strcat(buf,"\n");fputs(buf,fh); };
    // 02240 PRINT"         @"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"         @");strcat(buf,"\n");fputs(buf,fh); };
    // 02250 PRINT"         @"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"         @");strcat(buf,"\n");fputs(buf,fh); };
    // 02260 IF E1=1 THEN 2360
    if(E1_int==1)goto Lbl_02360;
    // 02270 PRINT"        ( )"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"        ( )");strcat(buf,"\n");fputs(buf,fh); };
    // 02280 PRINT"       (   )"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"       (   )");strcat(buf,"\n");fputs(buf,fh); };
    // 02290 PRINT"      (     )"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      (     )");strcat(buf,"\n");fputs(buf,fh); };
    // 02300 PRINT"     (       )"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     (       )");strcat(buf,"\n");fputs(buf,fh); };
    // 02310 PRINT"    (         )"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"    (         )");strcat(buf,"\n");fputs(buf,fh); };
    // 02320 PRINT"   (           )"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   (           )");strcat(buf,"\n");fputs(buf,fh); };
    // 02330 PRINT"  (#$%&     &%$#)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  (#$%%&     &%%$#)");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02340:
    // 02340 LETW=0
    W_int = 0;
    // 02350 IF T2=0 THEN 1210
    if(T2_int==0)goto Lbl_01210;

  Lbl_02360:
    // 02360 FOR I=1 TO S
    for(I_int_arr[0]=1;I_int_arr[0]<=S_int_arr[0];I_int_arr[0]++){
        // 02370 IF A$(I)=B$(I) THEN 2390
        if(strcmp(A_str_arr[I_int_arr[0]],B_str_arr[I_int_arr[0]])==0)goto Lbl_02390;
        // 02380 GO TO 1560
        goto Lbl_01560;

  Lbl_02390:
        // 02390 NEXT I
        int dummy_2390=0; // Ignore this line.
    }; // End-For(I_int_arr[0])
    // 02400 PRINT"VERY GOOD! YOU WIN!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VERY GOOD! YOU WIN!");strcat(buf,"\n");fputs(buf,fh); };
    // 02410 PRINT"DO YOU WANT TO PLAY AGAIN";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO PLAY AGAIN");fputs(buf,fh); };
    // 02420 LET S7=0
    S7_int = 0;
    // 02430 INPUT H8$
    // Start of Basic INPUT statement 02430
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&H8_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02430
    // 02440 IF H8$="Y" THEN 1050
    if(strcmp(H8_str,"Y")==0)goto Lbl_01050;
    // 02450 GO TO 3640
    goto Lbl_03640;
    // 02460 DATA 10,I,M,P,O,S,S,I,B,L,E,  5,I,D,I,O,T
    // 02470 DATA 9,A,P,A,T,H,E,T,I,C
    // 02480 DATA10,W,A,T,E,R,F,R,O,N,T
    // 02490 DATA11,C,O,L,L,E,C,T,I,O,N,S
    // 02500 DATA 9,Y,E,S,T,E,R,D,A,Y
    // 02510 DATA12,K,I,N,D,E,R,G,A,R,T,E,N
    // 02520 DATA14,A,D,M,I,N,I,S,T,R,A,T,I,O,N
    // 02530 DATA 8,E,M,P,H,A,S,I,S
    // 02540 DATA 9,E,D,U,C,A,T,I,O,N
    // 02550 DATA 10,R,E,C,I,P,R,O,C,A,L
    // 02560 DATA  11,D,E,C,L,A,R,A,T,I,O,N
    // 02570 DATA 7,P,I,T,C,H,E,R
    // 02580 DATA 10,S,U,P,E,R,S,O,N,I,C
    // 02590 DATA 11,C,O,M,M,E,N,D,A,B,L,E
    // 02600 DATA 7,P,A,S,S,A,G,E
    // 02610 DATA 10,P,E,R,C,E,N,T,A,G,E
    // 02620 DATA 5,J,O,I,N,T
    // 02630 DATA8,G,O,V,E,R,N,O,R
    // 02640 DATA 7,P,R,O,G,R,A,M
    // 02650 DATA 13,D,I,S,A,P,P,E,A,R,A,N,C,E
    // 02660 DATA 8,S,E,C,U,R,I,T,Y
    // 02670 DATA 7,W,E,L,C,O,M,E
    // 02680 DATA 4,Z,E,R,O
    // 02690 DATA9,P,O,T,E,N,T,I,A,L
    // 02700 DATA 8,C,O,M,P,O,S,E,D
    // 02710 DATA 11,P,O,S,S,I,B,I,L,I,T,Y
    // 02720 DATA 8,D,I,R,E,C,T,O,R
    // 02730 DATA 6,R,E,S,U,L,T
    // 02740 DATA 8,C,H,I,L,D,R,E,N
    // 02750 DATA 9,C,L,A,S,S,R,O,O,M
    // 02760 DATA 8,E,C,O,N,O,M,I,C
    // 02770 DATA 9,E,Q,U,I,V,O,C,A,L
    // 02780 DATA 7,H,O,S,T,I,L,E
    // 02790 DATA 7,R,O,G,U,I,S,H
    // 02800 DATA 9,M,I,G,R,A,T,I,O,N
    // 02810 DATA 13,A,U,T,H,O,R,I,Z,A,T,I,O,N
    // 02820 DATA 7,C,U,R,S,O,R,Y
    // 02830 DATA 5,M,O,N,E,Y
    // 02840 DATA 7,A,B,S,O,L,V,E
    // 02850 DATA 12,P,R,E,R,E,Q,U,I,S,I,T,E
    // 02860 DATA 7,I,N,S,I,P,I,D
    // 02870 DATA 14 ,C,O,N,G,L,O,M,E,R,A,T,I,O,N
    // 02880 DATA 10,N,E,G,O,T,I,A,B,L,E
    // 02890 DATA 7,D,E,P,O,S,I,T
    // 02900 DATA 4,L,A,M,P
    // 02910 DATA 9,Q,U,A,L,I,F,I,E,D
    // 02920 DATA 11,M,A,I,N,T,E,N,A,N,C,E
    // 02930 DATA 7,F,U,N,E,R,A,L
    // 02940 DATA 9,C,A,R,P,E,N,T,E,R
    // 02950 DATA 5,F,U,G,U,E
    // 02960 DATA 11,M,A,N,U,F,A,C,T,U,R,E
    // 02970 DATA 6,B,A,K,E,R,Y
    // 02980 DATA 8,M,I,L,I,T,A,R,Y
    // 02990 DATA 5,G,U,A,R,D
    // 03000 DATA 9,T,E,C,H,N,I,C,A,L
    // 03010 DATA 8,S,Y,M,P,H,O,N,Y
    // 03020 DATA 7,A,D,V,A,N,C,E
    // 03030 DATA 7,M,I,N,I,M,U,M
    // 03040 DATA 9,A,L,E,R,T,N,E,S,S
    // 03050 DATA 7,Q,U,A,R,T,E,T
    // 03060 DATA 6,P,O,L,I,S,H
    // 03070 DATA 7,B,E,N,E,F,I,T
    // 03080 DATA 8,C,O,M,P,O,S,E,R
    // 03090 DATA 4,H,E,R,O
    // 03100 DATA 6,D,E,S,I,S,T
    // 03110 DATA 6,C,I,T,I,E,S
    // 03120 DATA 4,S,L,U,M
    // 03130 DATA 6,R,E,G,I,M,E
    // 03140 DATA 5,D,O,U,B,T
    // 03150 DATA 4,J,O,K,E
    // 03160 DATA 9,P,R,O,T,E,S,T,E,R
    // 03170 DATA 7,S,I,M,I,L,A,R
    // 03180 DATA 4,C,U,R,B
    // 03190 DATA 5,E,L,I,T,E
    // 03200 DATA 8,M,E,D,I,C,A,R,E
    // 03210 DATA 5,M,A,Y,O,R
    // 03220 DATA 4,F,U,N,D
    // 03230 DATA 6,A,C,T,I,O,N
    // 03240 DATA 6,C,L,O,U,D,Y
    // 03250 DATA 4,N,E,W,S
    // 03260 DATA 5,Y,O,U,N,G
    // 03270 DATA 5,M,A,F,I,A
    // 03280 DATA 9,G,U,E,R,R,I,L,L,A
    // 03290 DATA 7,R,E,Q,U,E,S,T
    // 03300 DATA 7,G,O,U,R,M,E,T
    // 03310 DATA 3,P,U,B
    // 03320 DATA 8,S,K,I,R,M,I,S,H
    // 03330 DATA 5,B,L,A,C,K
    // 03340 DATA 5,W,H,I,T,E
    // 03350 DATA 7,H,I,S,T,O,R,Y
    // 03360 DATA 6,P,O,L,I,C,Y
    // 03370 DATA 9,G,Y,M,N,A,S,I,U,M
    // 03380 DATA 7,V,E,H,I,C,L,E
    // 03390 DATA 9,A,U,T,O,M,O,T,O,N
    // 03400 DATA 6,B,L,I,G,H,T
    // 03410 DATA 3,S,I,X
    // 03420 DATA 4,C,A,L,L
    // 03430 DATA 9,P,S,Y,C,H,O,T,I,C
    // 03440 DATA 8,N,E,U,R,O,T,I,C
    // 03450 DATA 7,A,N,X,I,E,T,Y
    // 03460 DATA 7,S,Y,M,P,T,O,M
    // 03470 DATA13,H,Y,P,O,C,H,O,N,D,R,I,A,C
    // 03480 DATA 6,P,H,O,B,I,A
    // 03490 DATA 9,O,B,S,E,S,S,I,O,N
    // 03500 DATA10,C,O,M,P,U,L,S,I,O,N
    // 03510 DATA 8,H,Y,S,T,E,R,I,A
    // 03520 DATA 7,A,M,N,E,S,I,A
    // 03530 DATA13,S,C,H,I,Z,O,P,H,R,E,N,I,A
    // 03540 DATA 9,P,R,O,G,N,O,S,I,S
    // 03550 DATA 8,P,A,R,A,N,O,I,D
    // 03560 DATA 9,C,A,T,A,T,O,N,I,C
    // 03570 DATA 7,A,L,C,O,H,O,L
    // 03580 DATA 8,C,O,M,P,U,T,E,R
    // 03590 DATA 8,T,E,R,M,I,N,A,L
    // 03600 DATA 4,C,U,T,E
    // 03610 DATA 3,F,U,N
    // 03620 DATA10,A,C,C,E,S,S,A,B,L,E
    // 03630 DATA -103

  Lbl_03640:
    // 03640 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
