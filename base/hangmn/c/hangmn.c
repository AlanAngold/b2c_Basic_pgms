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
    0x61c8cb729cf0 ---------A   01010 PRINT "BASIC LIBRARY--'HANGMN'--18-JUL-70"
    0x61c8cb7185d0 ---------A   01020 REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    0x61c8cb718610 ---------A   01030 REM
    0x61c8cb729e70 ---------A   01040 RANDOMIZE
    0x61c8cb729db0 ---------A   01050 LET S7=1
    0x61c8cb729ff0 ---------A T 01060 PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
    0x61c8cb7275b0 ---------A   01070 INPUT N7$
    0x61c8cb727d80 ---------A   01080 IF N7$="N" THEN 1170
    0x61c8cb7283c0 ---------A   01090 PRINT
    0x61c8cb729670 ---------A   01100 PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
    0x61c8cb72a0a0 ---------A   01110 PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
    0x61c8cb7285f0 ---------A   01120 PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
    0x61c8cb7287a0 ---------A   01130 PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
    0x61c8cb72f940 ---------A   01140 PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
    0x61c8cb72fa90 ---------A   01150 PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
    0x61c8cb72fba0 ---------A   01160 PRINT"LOSE."
    0x61c8cb72fe10 ---------A T 01170 LET T2=0
    0x61c8cb72fec0 ---------A   01180 PRINT
    0x61c8cb730020 ---------A   01190 PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
    0x61c8cb7301d0 ---------A   01200 INPUT Q9$
    0x61c8cb730450 ---------A   01210 IF Q9$="Y" THEN 2030
    0x61c8cb730670 ---------A T 01220 LET T2=1
    0x61c8cb7308c0 ---------A   01230 IF S7=0 THEN 1430
    0x61c8cb730ba0 ---------A   01240 LET Q=0
    0x61c8cb730e70 ---------A   01250 LET L=1
    0x61c8cb731140 ---------A   01260 DIM S(200)
    0x61c8cb731400 ---------A   01270 DIM F$(2000)
    0x61c8cb7316c0 ---------A   01280 DIM A$(20)
    0x61c8cb731980 ---------A   01290 DIM B$(20)
    0x61c8cb731c40 ---------A   01300 DIM I(200)
    0x61c8cb731f00 ---------A   01310 LET O1=1
    0x61c8cb732110 ---------A T 01320 READ S(O1)
    0x61c8cb732430 ---------A   01330 IF S(O1)<0 THEN 1420
    0x61c8cb732940 ---------A   01340 LET I(O1)=L
    0x61c8cb733010 ---------A   01350 FOR O=L TO L+S(O1)-1
    0x61c8cb733250 ---------A   01360 READ F$(O)
    0x61c8cb733370 ---------A   01370 NEXT O
    0x61c8cb7336b0 ---------A   01380 LET Q=Q+1
    0x61c8cb733ae0 ---------A   01390 LET L=L+S(O1)
    0x61c8cb733e10 ---------A   01400 LET O1=O1+1
    0x61c8cb733e80 ---------A   01410 GO TO 1320
    0x61c8cb734180 ---------A T 01420 LET O1=O1-1
    0x61c8cb734770 ---------A T 01430 LET R=INT(1+O1*RND)
    0x61c8cb734a80 ---------A   01440 LET S=S(R)
    0x61c8cb734e50 ---------A   01450 LET O6=I(R)
    0x61c8cb7352e0 ---------A   01460 FOR Z2=1 TO S(R)
    0x61c8cb735610 ---------A   01470 LET O6=I(R)
    0x61c8cb735c20 ---------A   01480 LET A$(Z2)=F$(O6+Z2-1)
    0x61c8cb735d50 ---------A   01490 NEXT Z2
    0x61c8cb736030 ---------A   01500 DIM U$(26)
    0x61c8cb7362f0 ---------A   01510 DIM E$(26)
    0x61c8cb7365b0 ---------A   01520 LET V=1
    0x61c8cb7368a0 ---------A   01530 FOR I=1 TO S
    0x61c8cb736bc0 ---------A   01540 LET B$(I)=" - "
    0x61c8cb736cf0 ---------A   01550 NEXT I
    0x61c8cb736d70 ---------A   01560 GO TO 1740
    0x61c8cb736de0 ----------   01570 PRINT
    0x61c8cb736f50 ---------A T 01580 PRINT"WHAT IS YOUR GUESS";
    0x61c8cb737220 ---------A   01590 LET K=1
    0x61c8cb737430 ---------A   01600 INPUT G$
    0x61c8cb737800 ---------A   01610 FOR Y=1 TO S
    0x61c8cb737b60 ---------A   01620 IF G$=A$(Y) THEN 1640
    0x61c8cb737be0 ---------A   01630 GO TO 1650
    0x61c8cb737de0 ---------A T 01640 LET K=0
    0x61c8cb737f10 ---------A T 01650 NEXT Y
    0x61c8cb738580 ---------A   01660 IF K=0 THEN 1690
    0x61c8cb7388a0 ---------A   01670 LET E$(V)=G$
    0x61c8cb738bd0 ---------A   01680 LET V=V+1
    0x61c8cb738f90 ---------A T 01690 FOR T=1 TO S 
    0x61c8cb7392f0 ---------A   01700 IF G$=A$(T) THEN 1720
    0x61c8cb739370 ---------A   01710 GO TO 1730
    0x61c8cb739670 ---------A T 01720 LET B$(T)=G$
    0x61c8cb7397a0 ---------A T 01730 NEXT T
    0x61c8cb739820 ---------A T 01740 PRINT
    0x61c8cb739b10 ---------A   01750 FOR I=1 TO S
    0x61c8cb739d70 ---------A   01760 PRINT B$(I);
    0x61c8cb739ea0 ---------A   01770 NEXT I
    0x61c8cb73a020 ---------A   01780 PRINT " ",
    0x61c8cb73a4d0 ---------A   01790 FOR G6=1 TO V-1
    0x61c8cb73a730 ---------A   01800 PRINT E$(G6);
    0x61c8cb73a860 ---------A   01810 NEXT G6
    0x61c8cb73a8e0 ---------A   01820 PRINT
    0x61c8cb73acd0 ---------A   01830 LET E1=V-1
    0x61c8cb73af20 ---------A   01840 IF E1<9 THEN 1970
    0x61c8cb73b090 ---------A   01850 PRINT"I WIN..."
    0x61c8cb73b210 ---------A   01860 PRINT"THE CORRECT ANSWER IS ";
    0x61c8cb73b500 ---------A   01870 FOR Z2=1 TO S
    0x61c8cb73b760 ---------A   01880 PRINT A$(Z2);
    0x61c8cb73b890 ---------A   01890 NEXT Z2
    0x61c8cb73b930 ---------A   01900 PRINT
    0x61c8cb73bab0 ---------A   01910 PRINT " DO YOU WANT TO PLAY AGAIN";
    0x61c8cb73bd80 ---------A   01920 LET W=1
    0x61c8cb73bf90 ---------A   01930 INPUT T$
    0x61c8cb73c1c0 ---------A   01940 LET S7=0
    0x61c8cb73c430 ---------A   01950 IF T$="Y" THEN 1060
    0x61c8cb73c4b0 ---------A   01960 GO TO 3660
    0x61c8cb73c510 ---------A T 01970 PRINT
    0x61c8cb73c760 ---------A   01980 IF K=0 THEN 2380
    0x61c8cb73c9e0 ---------A   01990 IF W=1 THEN 2360
    0x61c8cb73cb70 ---------A   02000 PRINT"DO YOU WANT TO SEE THE PICTURE";
    0x61c8cb73cd90 ---------A   02010 INPUT T2$
    0x61c8cb73d020 ---------A   02020 IF T2$="N" THEN2380
    0x61c8cb73d190 ---------A T 02030 PRINT"       *-:-*"
    0x61c8cb73d2f0 ---------A   02040 PRINT"     %&     &%"
    0x61c8cb73d440 ---------A   02050 PRINT"    #         #"
    0x61c8cb73d6a0 ---------A   02060 IF E1=8 THEN 2380
    0x61c8cb73d800 ---------A   02070 PRINT"   ^  (.) (.)  ^"
    0x61c8cb73da60 ---------A   02080 IF E1=7 THEN 2380
    0x61c8cb73dbc0 ---------A   02090 PRINT" <<<           >>>"
    0x61c8cb73de20 ---------A   02100 IF E1=6 THEN 2380
    0x61c8cb73df80 ---------A   02110 PRINT"   !    :?:    !"
    0x61c8cb73e1e0 ---------A   02120 IF E1=5 THEN 2380
    0x61c8cb73e350 ---------A   02130 PRINT"   *  -     -  *"
    0x61c8cb73e4b0 ---------A   02140 PRINT"   '   +++++   '"
    0x61c8cb73e610 ---------A   02150 PRINT"   &           &"
    0x61c8cb73e770 ---------A   02160 PRINT"    %%%     %%%"
    0x61c8cb73e8c0 ---------A   02170 PRINT"      :!#$#!:"
    0x61c8cb73eb10 ---------A   02180 IF E1=4 THEN 2380
    0x61c8cb73ec70 ---------A   02190 PRINT"         I"
    0x61c8cb73edc0 ---------A   02200 PRINT"         I"
    0x61c8cb73ef10 ---------A   02210 PRINT"         I"
    0x61c8cb73f170 ---------A   02220 IF E1=3 THEN 2380
    0x61c8cb73f2d0 ---------A   02230 PRINT"???????????????????"
    0x61c8cb73f520 ---------A   02240 IF E1=2 THEN 2380
    0x61c8cb73f680 ---------A   02250 PRINT"         @"
    0x61c8cb73f7d0 ---------A   02260 PRINT"         @"
    0x61c8cb73f920 ---------A   02270 PRINT"         @"
    0x61c8cb73fb70 ---------A   02280 IF E1=1 THEN 2380
    0x61c8cb73fce0 ---------A   02290 PRINT"        ( )"
    0x61c8cb740650 ---------A   02300 PRINT"       (   )"
    0x61c8cb7407b0 ---------A   02310 PRINT"      (     )"
    0x61c8cb740910 ---------A   02320 PRINT"     (       )"
    0x61c8cb740a70 ---------A   02330 PRINT"    (         )"
    0x61c8cb740bd0 ---------A   02340 PRINT"   (           )"
    0x61c8cb740d20 ---------A   02350 PRINT"  (#$%&     &%$#)"
    0x61c8cb740f30 ---------A T 02360 LETW=0
    0x61c8cb741180 ---------A   02370 IF T2=0 THEN 1220
    0x61c8cb741490 ---------A T 02380 FOR I=1 TO S
    0x61c8cb7418d0 ---------A   02390 IF A$(I)=B$(I) THEN 2410
    0x61c8cb741950 ---------A   02400 GO TO 1580
    0x61c8cb741a70 ---------A T 02410 NEXT I
    0x61c8cb741bf0 ---------A   02420 PRINT"VERY GOOD! YOU WIN!"
    0x61c8cb741d70 ---------A   02430 PRINT"DO YOU WANT TO PLAY AGAIN";
    0x61c8cb741f80 ---------A   02440 LET S7=0
    0x61c8cb7421a0 ---------A   02450 INPUT H8$
    0x61c8cb742420 ---------A   02460 IF H8$="Y" THEN 1060
    0x61c8cb7424c0 ---------A   02470 GO TO 3660
    0x61c8cb743410 ---------A   02480 DATA 10,I,M,P,O,S,S,I,B,L,E,  5,I,D,I,O,T
    0x61c8cb743d50 ---------A   02490 DATA 9,A,P,A,T,H,E,T,I,C
    0x61c8cb744770 ---------A   02500 DATA10,W,A,T,E,R,F,R,O,N,T
    0x61c8cb745270 ---------A   02510 DATA11,C,O,L,L,E,C,T,I,O,N,S
    0x61c8cb745bb0 ---------A   02520 DATA 9,Y,E,S,T,E,R,D,A,Y
    0x61c8cb746790 ---------A   02530 DATA12,K,I,N,D,E,R,G,A,R,T,E,N
    0x61c8cb747530 ---------A   02540 DATA14,A,D,M,I,N,I,S,T,R,A,T,I,O,N
    0x61c8cb747d90 ---------A   02550 DATA 8,E,M,P,H,A,S,I,S
    0x61c8cb7486d0 ---------A   02560 DATA 9,E,D,U,C,A,T,I,O,N
    0x61c8cb7490f0 ---------A   02570 DATA 10,R,E,C,I,P,R,O,C,A,L
    0x61c8cb749bf0 ---------A   02580 DATA  11,D,E,C,L,A,R,A,T,I,O,N
    0x61c8cb74a370 ---------A   02590 DATA 7,P,I,T,C,H,E,R
    0x61c8cb74ad90 ---------A   02600 DATA 10,S,U,P,E,R,S,O,N,I,C
    0x61c8cb74b890 ---------A   02610 DATA 11,C,O,M,M,E,N,D,A,B,L,E
    0x61c8cb74c010 ---------A   02620 DATA 7,P,A,S,S,A,G,E
    0x61c8cb74ca20 ---------A   02630 DATA 10,P,E,R,C,E,N,T,A,G,E
    0x61c8cb74cfe0 ---------A   02640 DATA 5,J,O,I,N,T
    0x61c8cb74d840 ---------A   02650 DATA8,G,O,V,E,R,N,O,R
    0x61c8cb74dfc0 ---------A   02660 DATA 7,P,R,O,G,R,A,M
    0x61c8cb74ec80 ---------A   02670 DATA 13,D,I,S,A,P,P,E,A,R,A,N,C,E
    0x61c8cb74f4e0 ---------A   02680 DATA 8,S,E,C,U,R,I,T,Y
    0x61c8cb74fc50 ---------A   02690 DATA 7,W,E,L,C,O,M,E
    0x61c8cb750130 ---------A   02700 DATA 4,Z,E,R,O
    0x61c8cb750a70 ---------A   02710 DATA9,P,O,T,E,N,T,I,A,L
    0x61c8cb7512d0 ---------A   02720 DATA 8,C,O,M,P,O,S,E,D
    0x61c8cb751dd0 ---------A   02730 DATA 11,P,O,S,S,I,B,I,L,I,T,Y
    0x61c8cb752620 ---------A   02740 DATA 8,D,I,R,E,C,T,O,R
    0x61c8cb752cc0 ---------A   02750 DATA 6,R,E,S,U,L,T
    0x61c8cb753520 ---------A   02760 DATA 8,C,H,I,L,D,R,E,N
    0x61c8cb753e60 ---------A   02770 DATA 9,C,L,A,S,S,R,O,O,M
    0x61c8cb7546c0 ---------A   02780 DATA 8,E,C,O,N,O,M,I,C
    0x61c8cb755000 ---------A   02790 DATA 9,E,Q,U,I,V,O,C,A,L
    0x61c8cb755780 ---------A   02800 DATA 7,H,O,S,T,I,L,E
    0x61c8cb755f00 ---------A   02810 DATA 7,R,O,G,U,I,S,H
    0x61c8cb756840 ---------A   02820 DATA 9,M,I,G,R,A,T,I,O,N
    0x61c8cb757500 ---------A   02830 DATA 13,A,U,T,H,O,R,I,Z,A,T,I,O,N
    0x61c8cb757c70 ---------A   02840 DATA 7,C,U,R,S,O,R,Y
    0x61c8cb758230 ---------A   02850 DATA 5,M,O,N,E,Y
    0x61c8cb7589b0 ---------A   02860 DATA 7,A,B,S,O,L,V,E
    0x61c8cb759590 ---------A   02870 DATA 12,P,R,E,R,E,Q,U,I,S,I,T,E
    0x61c8cb759d20 ---------A   02880 DATA 7,I,N,S,I,P,I,D
    0x61c8cb75aac0 ---------A   02890 DATA 14 ,C,O,N,G,L,O,M,E,R,A,T,I,O,N
    0x61c8cb75b4e0 ---------A   02900 DATA 10,N,E,G,O,T,I,A,B,L,E
    0x61c8cb75bc50 ---------A   02910 DATA 7,D,E,P,O,S,I,T
    0x61c8cb75c130 ---------A   02920 DATA 4,L,A,M,P
    0x61c8cb75ca70 ---------A   02930 DATA 9,Q,U,A,L,I,F,I,E,D
    0x61c8cb75d570 ---------A   02940 DATA 11,M,A,I,N,T,E,N,A,N,C,E
    0x61c8cb75dcf0 ---------A   02950 DATA 7,F,U,N,E,R,A,L
    0x61c8cb75e620 ---------A   02960 DATA 9,C,A,R,P,E,N,T,E,R
    0x61c8cb75ebe0 ---------A   02970 DATA 5,F,U,G,U,E
    0x61c8cb75f6d0 ---------A   02980 DATA 11,M,A,N,U,F,A,C,T,U,R,E
    0x61c8cb75fd70 ---------A   02990 DATA 6,B,A,K,E,R,Y
    0x61c8cb7605c0 ---------A   03000 DATA 8,M,I,L,I,T,A,R,Y
    0x61c8cb760b80 ---------A   03010 DATA 5,G,U,A,R,D
    0x61c8cb7614c0 ---------A   03020 DATA 9,T,E,C,H,N,I,C,A,L
    0x61c8cb761d20 ---------A   03030 DATA 8,S,Y,M,P,H,O,N,Y
    0x61c8cb7624a0 ---------A   03040 DATA 7,A,D,V,A,N,C,E
    0x61c8cb762c20 ---------A   03050 DATA 7,M,I,N,I,M,U,M
    0x61c8cb763560 ---------A   03060 DATA 9,A,L,E,R,T,N,E,S,S
    0x61c8cb763cd0 ---------A   03070 DATA 7,Q,U,A,R,T,E,T
    0x61c8cb764370 ---------A   03080 DATA 6,P,O,L,I,S,H
    0x61c8cb764af0 ---------A   03090 DATA 7,B,E,N,E,F,I,T
    0x61c8cb765340 ---------A   03100 DATA 8,C,O,M,P,O,S,E,R
    0x61c8cb765810 ---------A   03110 DATA 4,H,E,R,O
    0x61c8cb765ea0 ---------A   03120 DATA 6,D,E,S,I,S,T
    0x61c8cb766530 ---------A   03130 DATA 6,C,I,T,I,E,S
    0x61c8cb766a00 ---------A   03140 DATA 4,S,L,U,M
    0x61c8cb767090 ---------A   03150 DATA 6,R,E,G,I,M,E
    0x61c8cb767640 ---------A   03160 DATA 5,D,O,U,B,T
    0x61c8cb767b20 ---------A   03170 DATA 4,J,O,K,E
    0x61c8cb768460 ---------A   03180 DATA 9,P,R,O,T,E,S,T,E,R
    0x61c8cb768bd0 ---------A   03190 DATA 7,S,I,M,I,L,A,R
    0x61c8cb7690a0 ---------A   03200 DATA 4,C,U,R,B
    0x61c8cb769660 ---------A   03210 DATA 5,E,L,I,T,E
    0x61c8cb769eb0 ---------A   03220 DATA 8,M,E,D,I,C,A,R,E
    0x61c8cb76a460 ---------A   03230 DATA 5,M,A,Y,O,R
    0x61c8cb76a930 ---------A   03240 DATA 4,F,U,N,D
    0x61c8cb76afc0 ---------A   03250 DATA 6,A,C,T,I,O,N
    0x61c8cb76b650 ---------A   03260 DATA 6,C,L,O,U,D,Y
    0x61c8cb76bb20 ---------A   03270 DATA 4,N,E,W,S
    0x61c8cb76c0d0 ---------A   03280 DATA 5,Y,O,U,N,G
    0x61c8cb76c690 ---------A   03290 DATA 5,M,A,F,I,A
    0x61c8cb76cfd0 ---------A   03300 DATA 9,G,U,E,R,R,I,L,L,A
    0x61c8cb76d750 ---------A   03310 DATA 7,R,E,Q,U,E,S,T
    0x61c8cb76dec0 ---------A   03320 DATA 7,G,O,U,R,M,E,T
    0x61c8cb76e2c0 ---------A   03330 DATA 3,P,U,B
    0x61c8cb76eb10 ---------A   03340 DATA 8,S,K,I,R,M,I,S,H
    0x61c8cb76f0c0 ---------A   03350 DATA 5,B,L,A,C,K
    0x61c8cb76f680 ---------A   03360 DATA 5,W,H,I,T,E
    0x61c8cb76fdf0 ---------A   03370 DATA 7,H,I,S,T,O,R,Y
    0x61c8cb770490 ---------A   03380 DATA 6,P,O,L,I,C,Y
    0x61c8cb770dd0 ---------A   03390 DATA 9,G,Y,M,N,A,S,I,U,M
    0x61c8cb771550 ---------A   03400 DATA 7,V,E,H,I,C,L,E
    0x61c8cb771e80 ---------A   03410 DATA 9,A,U,T,O,M,O,T,O,N
    0x61c8cb772510 ---------A   03420 DATA 6,B,L,I,G,H,T
    0x61c8cb772900 ---------A   03430 DATA 3,S,I,X
    0x61c8cb772de0 ---------A   03440 DATA 4,C,A,L,L
    0x61c8cb773720 ---------A   03450 DATA 9,P,S,Y,C,H,O,T,I,C
    0x61c8cb773f80 ---------A   03460 DATA 8,N,E,U,R,O,T,I,C
    0x61c8cb774700 ---------A   03470 DATA 7,A,N,X,I,E,T,Y
    0x61c8cb774e80 ---------A   03480 DATA 7,S,Y,M,P,T,O,M
    0x61c8cb775b30 ---------A   03490 DATA13,H,Y,P,O,C,H,O,N,D,R,I,A,C
    0x61c8cb7761d0 ---------A   03500 DATA 6,P,H,O,B,I,A
    0x61c8cb776b10 ---------A   03510 DATA 9,O,B,S,E,S,S,I,O,N
    0x61c8cb777530 ---------A   03520 DATA10,C,O,M,P,U,L,S,I,O,N
    0x61c8cb777d90 ---------A   03530 DATA 8,H,Y,S,T,E,R,I,A
    0x61c8cb778510 ---------A   03540 DATA 7,A,M,N,E,S,I,A
    0x61c8cb7791d0 ---------A   03550 DATA13,S,C,H,I,Z,O,P,H,R,E,N,I,A
    0x61c8cb779b10 ---------A   03560 DATA 9,P,R,O,G,N,O,S,I,S
    0x61c8cb77a370 ---------A   03570 DATA 8,P,A,R,A,N,O,I,D
    0x61c8cb77b4c0 ---------A   03580 DATA 9,C,A,T,A,T,O,N,I,C
    0x61c8cb77bc40 ---------A   03590 DATA 7,A,L,C,O,H,O,L
    0x61c8cb77c4a0 ---------A   03600 DATA 8,C,O,M,P,U,T,E,R
    0x61c8cb77ccf0 ---------A   03610 DATA 8,T,E,R,M,I,N,A,L
    0x61c8cb77d1c0 ---------A   03620 DATA 4,C,U,T,E
    0x61c8cb77d5c0 ---------A   03630 DATA 3,F,U,N
    0x61c8cb77dfd0 ---------A   03640 DATA10,A,C,C,E,S,S,A,B,L,E
    0x61c8cb77e120 ---------A   03650 DATA -103
    0x61c8cb77e170 ---------A T 03660 END
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
   A) 0x61c8cb729cf0 (01010)   0x000000000000 (00000)   0x61c8cb77e170 (03660)   0x61c8cb77e170 (03660)   


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
    E1                       Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F$              Array    String          {0,1999} 
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G$                       String      
    G6                       Float       
    H8$                      String      
    HEX$            Function String          args=1, int    
    I               Array    Float           {0,199} 
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Float       
    L                        Float       
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
    O                        Float       
    O1                       Float       
    O6                       Float       
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Float       
    Q9$                      String      
    R                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Float           {0,199} 
    S7                       Float       
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Float       
    T$                       String      
    T2                       Float       
    T2$                      String      
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U$              Array    String          {0,25} 
    V                        Float       
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Float       
    Y                        Float       
    Z2                       Float       

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
    0x61c8cb729cf0 ---------A   01000 PRINT "BASIC LIBRARY--'HANGMN'--18-JUL-70"
    0x61c8cb7185d0 ---------A   01010 REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    0x61c8cb718610 ---------A   01020 REM
    0x61c8cb729e70 ---------A   01030 RANDOMIZE
    0x61c8cb729db0 ---------A   01040 LET S7=1
    0x61c8cb729ff0 ---------A T 01050 PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
    0x61c8cb7275b0 ---------A   01060 INPUT N7$
    0x61c8cb727d80 ---------A   01070 IF N7$="N" THEN 1160
    0x61c8cb7283c0 ---------A   01080 PRINT
    0x61c8cb729670 ---------A   01090 PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
    0x61c8cb72a0a0 ---------A   01100 PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
    0x61c8cb7285f0 ---------A   01110 PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
    0x61c8cb7287a0 ---------A   01120 PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
    0x61c8cb72f940 ---------A   01130 PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
    0x61c8cb72fa90 ---------A   01140 PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
    0x61c8cb72fba0 ---------A   01150 PRINT"LOSE."
    0x61c8cb72fe10 ---------A T 01160 LET T2=0
    0x61c8cb72fec0 ---------A   01170 PRINT
    0x61c8cb730020 ---------A   01180 PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
    0x61c8cb7301d0 ---------A   01190 INPUT Q9$
    0x61c8cb730450 ---------A   01200 IF Q9$="Y" THEN 2010
    0x61c8cb730670 ---------A T 01210 LET T2=1
    0x61c8cb7308c0 ---------A   01220 IF S7=0 THEN 1420
    0x61c8cb730ba0 ---------A   01230 LET Q=0
    0x61c8cb730e70 ---------A   01240 LET L=1
    0x61c8cb731140 ---------A   01250 DIM S(200)
    0x61c8cb731400 ---------A   01260 DIM F$(2000)
    0x61c8cb7316c0 ---------A   01270 DIM A$(20)
    0x61c8cb731980 ---------A   01280 DIM B$(20)
    0x61c8cb731c40 ---------A   01290 DIM I(200)
    0x61c8cb731f00 ---------A   01300 LET O1=1
    0x61c8cb732110 ---------A T 01310 READ S(O1)
    0x61c8cb732430 ---------A   01320 IF S(O1)<0 THEN 1410
    0x61c8cb732940 ---------A   01330 LET I(O1)=L
    0x61c8cb733010 ---------A   01340 FOR O=L TO L+S(O1)-1
    0x61c8cb733250 ---------A   01350 READ F$(O)
    0x61c8cb733370 ---------A   01360 NEXT O
    0x61c8cb7336b0 ---------A   01370 LET Q=Q+1
    0x61c8cb733ae0 ---------A   01380 LET L=L+S(O1)
    0x61c8cb733e10 ---------A   01390 LET O1=O1+1
    0x61c8cb733e80 ---------A   01400 GO TO 1310
    0x61c8cb734180 ---------A T 01410 LET O1=O1-1
    0x61c8cb734770 ---------A T 01420 LET R=INT(1+O1*RND)
    0x61c8cb734a80 ---------A   01430 LET S=S(R)
    0x61c8cb734e50 ---------A   01440 LET O6=I(R)
    0x61c8cb7352e0 ---------A   01450 FOR Z2=1 TO S(R)
    0x61c8cb735610 ---------A   01460 LET O6=I(R)
    0x61c8cb735c20 ---------A   01470 LET A$(Z2)=F$(O6+Z2-1)
    0x61c8cb735d50 ---------A   01480 NEXT Z2
    0x61c8cb736030 ---------A   01490 DIM U$(26)
    0x61c8cb7362f0 ---------A   01500 DIM E$(26)
    0x61c8cb7365b0 ---------A   01510 LET V=1
    0x61c8cb7368a0 ---------A   01520 FOR I=1 TO S
    0x61c8cb736bc0 ---------A   01530 LET B$(I)=" - "
    0x61c8cb736cf0 ---------A   01540 NEXT I
    0x61c8cb736d70 ---------A   01550 GO TO 1720
    0x61c8cb736f50 ---------A T 01560 PRINT"WHAT IS YOUR GUESS";
    0x61c8cb737220 ---------A   01570 LET K=1
    0x61c8cb737430 ---------A   01580 INPUT G$
    0x61c8cb737800 ---------A   01590 FOR Y=1 TO S
    0x61c8cb737b60 ---------A   01600 IF G$=A$(Y) THEN 1620
    0x61c8cb737be0 ---------A   01610 GO TO 1630
    0x61c8cb737de0 ---------A T 01620 LET K=0
    0x61c8cb737f10 ---------A T 01630 NEXT Y
    0x61c8cb738580 ---------A   01640 IF K=0 THEN 1670
    0x61c8cb7388a0 ---------A   01650 LET E$(V)=G$
    0x61c8cb738bd0 ---------A   01660 LET V=V+1
    0x61c8cb738f90 ---------A T 01670 FOR T=1 TO S 
    0x61c8cb7392f0 ---------A   01680 IF G$=A$(T) THEN 1700
    0x61c8cb739370 ---------A   01690 GO TO 1710
    0x61c8cb739670 ---------A T 01700 LET B$(T)=G$
    0x61c8cb7397a0 ---------A T 01710 NEXT T
    0x61c8cb739820 ---------A T 01720 PRINT
    0x61c8cb739b10 ---------A   01730 FOR I=1 TO S
    0x61c8cb739d70 ---------A   01740 PRINT B$(I);
    0x61c8cb739ea0 ---------A   01750 NEXT I
    0x61c8cb73a020 ---------A   01760 PRINT " ",
    0x61c8cb73a4d0 ---------A   01770 FOR G6=1 TO V-1
    0x61c8cb73a730 ---------A   01780 PRINT E$(G6);
    0x61c8cb73a860 ---------A   01790 NEXT G6
    0x61c8cb73a8e0 ---------A   01800 PRINT
    0x61c8cb73acd0 ---------A   01810 LET E1=V-1
    0x61c8cb73af20 ---------A   01820 IF E1<9 THEN 1950
    0x61c8cb73b090 ---------A   01830 PRINT"I WIN..."
    0x61c8cb73b210 ---------A   01840 PRINT"THE CORRECT ANSWER IS ";
    0x61c8cb73b500 ---------A   01850 FOR Z2=1 TO S
    0x61c8cb73b760 ---------A   01860 PRINT A$(Z2);
    0x61c8cb73b890 ---------A   01870 NEXT Z2
    0x61c8cb73b930 ---------A   01880 PRINT
    0x61c8cb73bab0 ---------A   01890 PRINT " DO YOU WANT TO PLAY AGAIN";
    0x61c8cb73bd80 ---------A   01900 LET W=1
    0x61c8cb73bf90 ---------A   01910 INPUT T$
    0x61c8cb73c1c0 ---------A   01920 LET S7=0
    0x61c8cb73c430 ---------A   01930 IF T$="Y" THEN 1050
    0x61c8cb73c4b0 ---------A   01940 GO TO 3640
    0x61c8cb73c510 ---------A T 01950 PRINT
    0x61c8cb73c760 ---------A   01960 IF K=0 THEN 2360
    0x61c8cb73c9e0 ---------A   01970 IF W=1 THEN 2340
    0x61c8cb73cb70 ---------A   01980 PRINT"DO YOU WANT TO SEE THE PICTURE";
    0x61c8cb73cd90 ---------A   01990 INPUT T2$
    0x61c8cb73d020 ---------A   02000 IF T2$="N" THEN2360
    0x61c8cb73d190 ---------A T 02010 PRINT"       *-:-*"
    0x61c8cb73d2f0 ---------A   02020 PRINT"     %&     &%"
    0x61c8cb73d440 ---------A   02030 PRINT"    #         #"
    0x61c8cb73d6a0 ---------A   02040 IF E1=8 THEN 2360
    0x61c8cb73d800 ---------A   02050 PRINT"   ^  (.) (.)  ^"
    0x61c8cb73da60 ---------A   02060 IF E1=7 THEN 2360
    0x61c8cb73dbc0 ---------A   02070 PRINT" <<<           >>>"
    0x61c8cb73de20 ---------A   02080 IF E1=6 THEN 2360
    0x61c8cb73df80 ---------A   02090 PRINT"   !    :?:    !"
    0x61c8cb73e1e0 ---------A   02100 IF E1=5 THEN 2360
    0x61c8cb73e350 ---------A   02110 PRINT"   *  -     -  *"
    0x61c8cb73e4b0 ---------A   02120 PRINT"   '   +++++   '"
    0x61c8cb73e610 ---------A   02130 PRINT"   &           &"
    0x61c8cb73e770 ---------A   02140 PRINT"    %%%     %%%"
    0x61c8cb73e8c0 ---------A   02150 PRINT"      :!#$#!:"
    0x61c8cb73eb10 ---------A   02160 IF E1=4 THEN 2360
    0x61c8cb73ec70 ---------A   02170 PRINT"         I"
    0x61c8cb73edc0 ---------A   02180 PRINT"         I"
    0x61c8cb73ef10 ---------A   02190 PRINT"         I"
    0x61c8cb73f170 ---------A   02200 IF E1=3 THEN 2360
    0x61c8cb73f2d0 ---------A   02210 PRINT"???????????????????"
    0x61c8cb73f520 ---------A   02220 IF E1=2 THEN 2360
    0x61c8cb73f680 ---------A   02230 PRINT"         @"
    0x61c8cb73f7d0 ---------A   02240 PRINT"         @"
    0x61c8cb73f920 ---------A   02250 PRINT"         @"
    0x61c8cb73fb70 ---------A   02260 IF E1=1 THEN 2360
    0x61c8cb73fce0 ---------A   02270 PRINT"        ( )"
    0x61c8cb740650 ---------A   02280 PRINT"       (   )"
    0x61c8cb7407b0 ---------A   02290 PRINT"      (     )"
    0x61c8cb740910 ---------A   02300 PRINT"     (       )"
    0x61c8cb740a70 ---------A   02310 PRINT"    (         )"
    0x61c8cb740bd0 ---------A   02320 PRINT"   (           )"
    0x61c8cb740d20 ---------A   02330 PRINT"  (#$%&     &%$#)"
    0x61c8cb740f30 ---------A T 02340 LETW=0
    0x61c8cb741180 ---------A   02350 IF T2=0 THEN 1210
    0x61c8cb741490 ---------A T 02360 FOR I=1 TO S
    0x61c8cb7418d0 ---------A   02370 IF A$(I)=B$(I) THEN 2390
    0x61c8cb741950 ---------A   02380 GO TO 1560
    0x61c8cb741a70 ---------A T 02390 NEXT I
    0x61c8cb741bf0 ---------A   02400 PRINT"VERY GOOD! YOU WIN!"
    0x61c8cb741d70 ---------A   02410 PRINT"DO YOU WANT TO PLAY AGAIN";
    0x61c8cb741f80 ---------A   02420 LET S7=0
    0x61c8cb7421a0 ---------A   02430 INPUT H8$
    0x61c8cb742420 ---------A   02440 IF H8$="Y" THEN 1050
    0x61c8cb7424c0 ---------A   02450 GO TO 3640
    0x61c8cb743410 ---------A   02460 DATA 10,I,M,P,O,S,S,I,B,L,E,  5,I,D,I,O,T
    0x61c8cb743d50 ---------A   02470 DATA 9,A,P,A,T,H,E,T,I,C
    0x61c8cb744770 ---------A   02480 DATA10,W,A,T,E,R,F,R,O,N,T
    0x61c8cb745270 ---------A   02490 DATA11,C,O,L,L,E,C,T,I,O,N,S
    0x61c8cb745bb0 ---------A   02500 DATA 9,Y,E,S,T,E,R,D,A,Y
    0x61c8cb746790 ---------A   02510 DATA12,K,I,N,D,E,R,G,A,R,T,E,N
    0x61c8cb747530 ---------A   02520 DATA14,A,D,M,I,N,I,S,T,R,A,T,I,O,N
    0x61c8cb747d90 ---------A   02530 DATA 8,E,M,P,H,A,S,I,S
    0x61c8cb7486d0 ---------A   02540 DATA 9,E,D,U,C,A,T,I,O,N
    0x61c8cb7490f0 ---------A   02550 DATA 10,R,E,C,I,P,R,O,C,A,L
    0x61c8cb749bf0 ---------A   02560 DATA  11,D,E,C,L,A,R,A,T,I,O,N
    0x61c8cb74a370 ---------A   02570 DATA 7,P,I,T,C,H,E,R
    0x61c8cb74ad90 ---------A   02580 DATA 10,S,U,P,E,R,S,O,N,I,C
    0x61c8cb74b890 ---------A   02590 DATA 11,C,O,M,M,E,N,D,A,B,L,E
    0x61c8cb74c010 ---------A   02600 DATA 7,P,A,S,S,A,G,E
    0x61c8cb74ca20 ---------A   02610 DATA 10,P,E,R,C,E,N,T,A,G,E
    0x61c8cb74cfe0 ---------A   02620 DATA 5,J,O,I,N,T
    0x61c8cb74d840 ---------A   02630 DATA8,G,O,V,E,R,N,O,R
    0x61c8cb74dfc0 ---------A   02640 DATA 7,P,R,O,G,R,A,M
    0x61c8cb74ec80 ---------A   02650 DATA 13,D,I,S,A,P,P,E,A,R,A,N,C,E
    0x61c8cb74f4e0 ---------A   02660 DATA 8,S,E,C,U,R,I,T,Y
    0x61c8cb74fc50 ---------A   02670 DATA 7,W,E,L,C,O,M,E
    0x61c8cb750130 ---------A   02680 DATA 4,Z,E,R,O
    0x61c8cb750a70 ---------A   02690 DATA9,P,O,T,E,N,T,I,A,L
    0x61c8cb7512d0 ---------A   02700 DATA 8,C,O,M,P,O,S,E,D
    0x61c8cb751dd0 ---------A   02710 DATA 11,P,O,S,S,I,B,I,L,I,T,Y
    0x61c8cb752620 ---------A   02720 DATA 8,D,I,R,E,C,T,O,R
    0x61c8cb752cc0 ---------A   02730 DATA 6,R,E,S,U,L,T
    0x61c8cb753520 ---------A   02740 DATA 8,C,H,I,L,D,R,E,N
    0x61c8cb753e60 ---------A   02750 DATA 9,C,L,A,S,S,R,O,O,M
    0x61c8cb7546c0 ---------A   02760 DATA 8,E,C,O,N,O,M,I,C
    0x61c8cb755000 ---------A   02770 DATA 9,E,Q,U,I,V,O,C,A,L
    0x61c8cb755780 ---------A   02780 DATA 7,H,O,S,T,I,L,E
    0x61c8cb755f00 ---------A   02790 DATA 7,R,O,G,U,I,S,H
    0x61c8cb756840 ---------A   02800 DATA 9,M,I,G,R,A,T,I,O,N
    0x61c8cb757500 ---------A   02810 DATA 13,A,U,T,H,O,R,I,Z,A,T,I,O,N
    0x61c8cb757c70 ---------A   02820 DATA 7,C,U,R,S,O,R,Y
    0x61c8cb758230 ---------A   02830 DATA 5,M,O,N,E,Y
    0x61c8cb7589b0 ---------A   02840 DATA 7,A,B,S,O,L,V,E
    0x61c8cb759590 ---------A   02850 DATA 12,P,R,E,R,E,Q,U,I,S,I,T,E
    0x61c8cb759d20 ---------A   02860 DATA 7,I,N,S,I,P,I,D
    0x61c8cb75aac0 ---------A   02870 DATA 14 ,C,O,N,G,L,O,M,E,R,A,T,I,O,N
    0x61c8cb75b4e0 ---------A   02880 DATA 10,N,E,G,O,T,I,A,B,L,E
    0x61c8cb75bc50 ---------A   02890 DATA 7,D,E,P,O,S,I,T
    0x61c8cb75c130 ---------A   02900 DATA 4,L,A,M,P
    0x61c8cb75ca70 ---------A   02910 DATA 9,Q,U,A,L,I,F,I,E,D
    0x61c8cb75d570 ---------A   02920 DATA 11,M,A,I,N,T,E,N,A,N,C,E
    0x61c8cb75dcf0 ---------A   02930 DATA 7,F,U,N,E,R,A,L
    0x61c8cb75e620 ---------A   02940 DATA 9,C,A,R,P,E,N,T,E,R
    0x61c8cb75ebe0 ---------A   02950 DATA 5,F,U,G,U,E
    0x61c8cb75f6d0 ---------A   02960 DATA 11,M,A,N,U,F,A,C,T,U,R,E
    0x61c8cb75fd70 ---------A   02970 DATA 6,B,A,K,E,R,Y
    0x61c8cb7605c0 ---------A   02980 DATA 8,M,I,L,I,T,A,R,Y
    0x61c8cb760b80 ---------A   02990 DATA 5,G,U,A,R,D
    0x61c8cb7614c0 ---------A   03000 DATA 9,T,E,C,H,N,I,C,A,L
    0x61c8cb761d20 ---------A   03010 DATA 8,S,Y,M,P,H,O,N,Y
    0x61c8cb7624a0 ---------A   03020 DATA 7,A,D,V,A,N,C,E
    0x61c8cb762c20 ---------A   03030 DATA 7,M,I,N,I,M,U,M
    0x61c8cb763560 ---------A   03040 DATA 9,A,L,E,R,T,N,E,S,S
    0x61c8cb763cd0 ---------A   03050 DATA 7,Q,U,A,R,T,E,T
    0x61c8cb764370 ---------A   03060 DATA 6,P,O,L,I,S,H
    0x61c8cb764af0 ---------A   03070 DATA 7,B,E,N,E,F,I,T
    0x61c8cb765340 ---------A   03080 DATA 8,C,O,M,P,O,S,E,R
    0x61c8cb765810 ---------A   03090 DATA 4,H,E,R,O
    0x61c8cb765ea0 ---------A   03100 DATA 6,D,E,S,I,S,T
    0x61c8cb766530 ---------A   03110 DATA 6,C,I,T,I,E,S
    0x61c8cb766a00 ---------A   03120 DATA 4,S,L,U,M
    0x61c8cb767090 ---------A   03130 DATA 6,R,E,G,I,M,E
    0x61c8cb767640 ---------A   03140 DATA 5,D,O,U,B,T
    0x61c8cb767b20 ---------A   03150 DATA 4,J,O,K,E
    0x61c8cb768460 ---------A   03160 DATA 9,P,R,O,T,E,S,T,E,R
    0x61c8cb768bd0 ---------A   03170 DATA 7,S,I,M,I,L,A,R
    0x61c8cb7690a0 ---------A   03180 DATA 4,C,U,R,B
    0x61c8cb769660 ---------A   03190 DATA 5,E,L,I,T,E
    0x61c8cb769eb0 ---------A   03200 DATA 8,M,E,D,I,C,A,R,E
    0x61c8cb76a460 ---------A   03210 DATA 5,M,A,Y,O,R
    0x61c8cb76a930 ---------A   03220 DATA 4,F,U,N,D
    0x61c8cb76afc0 ---------A   03230 DATA 6,A,C,T,I,O,N
    0x61c8cb76b650 ---------A   03240 DATA 6,C,L,O,U,D,Y
    0x61c8cb76bb20 ---------A   03250 DATA 4,N,E,W,S
    0x61c8cb76c0d0 ---------A   03260 DATA 5,Y,O,U,N,G
    0x61c8cb76c690 ---------A   03270 DATA 5,M,A,F,I,A
    0x61c8cb76cfd0 ---------A   03280 DATA 9,G,U,E,R,R,I,L,L,A
    0x61c8cb76d750 ---------A   03290 DATA 7,R,E,Q,U,E,S,T
    0x61c8cb76dec0 ---------A   03300 DATA 7,G,O,U,R,M,E,T
    0x61c8cb76e2c0 ---------A   03310 DATA 3,P,U,B
    0x61c8cb76eb10 ---------A   03320 DATA 8,S,K,I,R,M,I,S,H
    0x61c8cb76f0c0 ---------A   03330 DATA 5,B,L,A,C,K
    0x61c8cb76f680 ---------A   03340 DATA 5,W,H,I,T,E
    0x61c8cb76fdf0 ---------A   03350 DATA 7,H,I,S,T,O,R,Y
    0x61c8cb770490 ---------A   03360 DATA 6,P,O,L,I,C,Y
    0x61c8cb770dd0 ---------A   03370 DATA 9,G,Y,M,N,A,S,I,U,M
    0x61c8cb771550 ---------A   03380 DATA 7,V,E,H,I,C,L,E
    0x61c8cb771e80 ---------A   03390 DATA 9,A,U,T,O,M,O,T,O,N
    0x61c8cb772510 ---------A   03400 DATA 6,B,L,I,G,H,T
    0x61c8cb772900 ---------A   03410 DATA 3,S,I,X
    0x61c8cb772de0 ---------A   03420 DATA 4,C,A,L,L
    0x61c8cb773720 ---------A   03430 DATA 9,P,S,Y,C,H,O,T,I,C
    0x61c8cb773f80 ---------A   03440 DATA 8,N,E,U,R,O,T,I,C
    0x61c8cb774700 ---------A   03450 DATA 7,A,N,X,I,E,T,Y
    0x61c8cb774e80 ---------A   03460 DATA 7,S,Y,M,P,T,O,M
    0x61c8cb775b30 ---------A   03470 DATA13,H,Y,P,O,C,H,O,N,D,R,I,A,C
    0x61c8cb7761d0 ---------A   03480 DATA 6,P,H,O,B,I,A
    0x61c8cb776b10 ---------A   03490 DATA 9,O,B,S,E,S,S,I,O,N
    0x61c8cb777530 ---------A   03500 DATA10,C,O,M,P,U,L,S,I,O,N
    0x61c8cb777d90 ---------A   03510 DATA 8,H,Y,S,T,E,R,I,A
    0x61c8cb778510 ---------A   03520 DATA 7,A,M,N,E,S,I,A
    0x61c8cb7791d0 ---------A   03530 DATA13,S,C,H,I,Z,O,P,H,R,E,N,I,A
    0x61c8cb779b10 ---------A   03540 DATA 9,P,R,O,G,N,O,S,I,S
    0x61c8cb77a370 ---------A   03550 DATA 8,P,A,R,A,N,O,I,D
    0x61c8cb77b4c0 ---------A   03560 DATA 9,C,A,T,A,T,O,N,I,C
    0x61c8cb77bc40 ---------A   03570 DATA 7,A,L,C,O,H,O,L
    0x61c8cb77c4a0 ---------A   03580 DATA 8,C,O,M,P,U,T,E,R
    0x61c8cb77ccf0 ---------A   03590 DATA 8,T,E,R,M,I,N,A,L
    0x61c8cb77d1c0 ---------A   03600 DATA 4,C,U,T,E
    0x61c8cb77d5c0 ---------A   03610 DATA 3,F,U,N
    0x61c8cb77dfd0 ---------A   03620 DATA10,A,C,C,E,S,S,A,B,L,E
    0x61c8cb77e120 ---------A   03630 DATA -103
    0x61c8cb77e170 ---------A T 03640 END
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
float  E1_flt;                                    // Basic: E1 
char*  F_str_arr[2000];                           // Basic: F$ 
char*  G_str;                                     // Basic: G$ 
float  G6_flt;                                    // Basic: G6 
char*  H8_str;                                    // Basic: H8$ 
float  I_flt_arr[200];                            // Basic: I 
float  K_flt;                                     // Basic: K 
float  L_flt;                                     // Basic: L 
char*  N7_str;                                    // Basic: N7$ 
float  O_flt;                                     // Basic: O 
float  O1_flt;                                    // Basic: O1 
float  O6_flt;                                    // Basic: O6 
float  Q_flt;                                     // Basic: Q 
char*  Q9_str;                                    // Basic: Q9$ 
float  R_flt;                                     // Basic: R 
float  S_flt_arr[200];                            // Basic: S 
float  S7_flt;                                    // Basic: S7 
float  T_flt;                                     // Basic: T 
char*  T_str;                                     // Basic: T$ 
float  T2_flt;                                    // Basic: T2 
char*  T2_str;                                    // Basic: T2$ 
char*  U_str_arr[26];                             // Basic: U$ 
float  V_flt;                                     // Basic: V 
float  W_flt;                                     // Basic: W 
float  Y_flt;                                     // Basic: Y 
float  Z2_flt;                                    // Basic: Z2 
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
    b2c_printf("Basic library--'hangmn'--18-jul-70\n");
    // 01010 REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    // 01020 REM
    // 01030 RANDOMIZE
    RANDOMIZE();
    // 01040 LET S7=1
    S7_flt = 1;

  Lbl_01050:
    // 01050 PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
    b2c_printf("Do you want to see the instructions");
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
    b2c_printf("");
    // 01090 PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
    b2c_printf("This game is something like hangman.  The machine chooses\n");
    // 01100 PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
    b2c_printf("A word out of its storage and you are required to guess the\n");
    // 01110 PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
    b2c_printf("Word letter by letter.  After each mistake, you will be asked\n");
    // 01120 PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
    b2c_printf("Whether you want to see a picture of yourself.  The more\n");
    // 01130 PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
    b2c_printf("Mistakes you make, the less of you there will be. Until\n");
    // 01140 PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
    b2c_printf("After 9 mistakes, you will be all gone, and you will\n");
    // 01150 PRINT"LOSE."
    b2c_printf("Lose.\n");

  Lbl_01160:
    // 01160 LET T2=0
    T2_flt = 0;
    // 01170 PRINT
    b2c_printf("\n");
    // 01180 PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
    b2c_printf("Would you like to see the whole picture before the game starts");
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
    T2_flt = 1;
    // 01220 IF S7=0 THEN 1420
    if(S7_flt==0)goto Lbl_01420;
    // 01230 LET Q=0
    Q_flt = 0;
    // 01240 LET L=1
    L_flt = 1;
    // 01250 DIM S(200)
    // 01260 DIM F$(2000)
    // 01270 DIM A$(20)
    // 01280 DIM B$(20)
    // 01290 DIM I(200)
    // 01300 LET O1=1
    O1_flt = 1;

  Lbl_01310:
    // 01310 READ S(O1)
    S_flt_arr[(int)O1_flt] = Get_Data_Float();
    // 01320 IF S(O1)<0 THEN 1410
    if(S_flt_arr[(int)O1_flt]<0)goto Lbl_01410;
    // 01330 LET I(O1)=L
    I_flt_arr[(int)O1_flt] = L_flt;
    // 01340 FOR O=L TO L+S(O1)-1
    for(O_flt=L_flt;O_flt<=L_flt+S_flt_arr[(int)O1_flt]-1;O_flt++){
        // 01350 READ F$(O)
        F_str_arr[(int)O_flt] = Get_Data_String();
        // 01360 NEXT O
        int dummy_1360=0; // Ignore this line.
    }; // End-For(O_flt)
    // 01370 LET Q=Q+1
    Q_flt = Q_flt+1;
    // 01380 LET L=L+S(O1)
    L_flt = L_flt+S_flt_arr[(int)O1_flt];
    // 01390 LET O1=O1+1
    O1_flt = O1_flt+1;
    // 01400 GO TO 1310
    goto Lbl_01310;

  Lbl_01410:
    // 01410 LET O1=O1-1
    O1_flt = O1_flt-1;

  Lbl_01420:
    // 01420 LET R=INT(1+O1*RND)
    R_flt = INT(1+O1_flt*RND());
    // 01430 LET S=S(R)
    S_flt_arr[0] = S_flt_arr[(int)R_flt];
    // 01440 LET O6=I(R)
    O6_flt = I_flt_arr[(int)R_flt];
    // 01450 FOR Z2=1 TO S(R)
    for(Z2_flt=1;Z2_flt<=S_flt_arr[(int)R_flt];Z2_flt++){
        // 01460 LET O6=I(R)
        O6_flt = I_flt_arr[(int)R_flt];
        // 01470 LET A$(Z2)=F$(O6+Z2-1)
        GLBpStr=F_str_arr[(int)O6_flt+Z2_flt-1];
        A_str_arr[(int)Z2_flt] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01480 NEXT Z2
        int dummy_1480=0; // Ignore this line.
    }; // End-For(Z2_flt)
    // 01490 DIM U$(26)
    // 01500 DIM E$(26)
    // 01510 LET V=1
    V_flt = 1;
    // 01520 FOR I=1 TO S
    for(I_flt_arr[0]=1;I_flt_arr[0]<=S_flt_arr[0];I_flt_arr[0]++){
        // 01530 LET B$(I)=" - "
        GLBpStr=" - ";
        B_str_arr[(int)I_flt_arr[0]] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01540 NEXT I
        int dummy_1540=0; // Ignore this line.
    }; // End-For(I_flt_arr[0])
    // 01550 GO TO 1720
    goto Lbl_01720;

  Lbl_01560:
    // 01560 PRINT"WHAT IS YOUR GUESS";
    b2c_printf("What is your guess");
    // 01570 LET K=1
    K_flt = 1;
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
    for(Y_flt=1;Y_flt<=S_flt_arr[0];Y_flt++){
        // 01600 IF G$=A$(Y) THEN 1620
        if(strcmp(G_str,A_str_arr[(int)Y_flt])==0)goto Lbl_01620;
        // 01610 GO TO 1630
        goto Lbl_01630;

  Lbl_01620:
        // 01620 LET K=0
        K_flt = 0;

  Lbl_01630:
        // 01630 NEXT Y
        int dummy_1630=0; // Ignore this line.
    }; // End-For(Y_flt)
    // 01640 IF K=0 THEN 1670
    if(K_flt==0)goto Lbl_01670;
    // 01650 LET E$(V)=G$
    GLBpStr=G_str;
    E_str_arr[(int)V_flt] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01660 LET V=V+1
    V_flt = V_flt+1;

  Lbl_01670:
    // 01670 FOR T=1 TO S 
    for(T_flt=1;T_flt<=S_flt_arr[0];T_flt++){
        // 01680 IF G$=A$(T) THEN 1700
        if(strcmp(G_str,A_str_arr[(int)T_flt])==0)goto Lbl_01700;
        // 01690 GO TO 1710
        goto Lbl_01710;

  Lbl_01700:
        // 01700 LET B$(T)=G$
        GLBpStr=G_str;
        B_str_arr[(int)T_flt] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01710:
        // 01710 NEXT T
        int dummy_1710=0; // Ignore this line.
    }; // End-For(T_flt)

  Lbl_01720:
    // 01720 PRINT
    b2c_printf("\n");
    // 01730 FOR I=1 TO S
    for(I_flt_arr[0]=1;I_flt_arr[0]<=S_flt_arr[0];I_flt_arr[0]++){
        // 01740 PRINT B$(I);
        b2c_printf("%sñwËÈa\n",B_str_arr[(int)I_flt_arr[0]]);
        // 01750 NEXT I
        int dummy_1750=0; // Ignore this line.
    }; // End-For(I_flt_arr[0])
    // 01760 PRINT " ",
    b2c_printf(" ");
    // 01770 FOR G6=1 TO V-1
    for(G6_flt=1;G6_flt<=V_flt-1;G6_flt++){
        // 01780 PRINT E$(G6);
        b2c_printf("%sþwËÈa\n",E_str_arr[(int)G6_flt]);
        // 01790 NEXT G6
        int dummy_1790=0; // Ignore this line.
    }; // End-For(G6_flt)
    // 01800 PRINT
    b2c_printf("\n");
    // 01810 LET E1=V-1
    E1_flt = V_flt-1;
    // 01820 IF E1<9 THEN 1950
    if(E1_flt<9)goto Lbl_01950;
    // 01830 PRINT"I WIN..."
    b2c_printf("I win...\n");
    // 01840 PRINT"THE CORRECT ANSWER IS ";
    b2c_printf("The correct answer is ");
    // 01850 FOR Z2=1 TO S
    for(Z2_flt=1;Z2_flt<=S_flt_arr[0];Z2_flt++){
        // 01860 PRINT A$(Z2);
        b2c_printf("%s\n",A_str_arr[(int)Z2_flt]);
        // 01870 NEXT Z2
        int dummy_1870=0; // Ignore this line.
    }; // End-For(Z2_flt)
    // 01880 PRINT
    b2c_printf("\n");
    // 01890 PRINT " DO YOU WANT TO PLAY AGAIN";
    b2c_printf(" do you want to play again");
    // 01900 LET W=1
    W_flt = 1;
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
    S7_flt = 0;
    // 01930 IF T$="Y" THEN 1050
    if(strcmp(T_str,"Y")==0)goto Lbl_01050;
    // 01940 GO TO 3640
    goto Lbl_03640;

  Lbl_01950:
    // 01950 PRINT
    b2c_printf("\n");
    // 01960 IF K=0 THEN 2360
    if(K_flt==0)goto Lbl_02360;
    // 01970 IF W=1 THEN 2340
    if(W_flt==1)goto Lbl_02340;
    // 01980 PRINT"DO YOU WANT TO SEE THE PICTURE";
    b2c_printf("Do you want to see the picture");
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
    b2c_printf("       *-:-*\n");
    // 02020 PRINT"     %&     &%"
    b2c_printf("     %%&     &%%\n");
    // 02030 PRINT"    #         #"
    b2c_printf("    #         #\n");
    // 02040 IF E1=8 THEN 2360
    if(E1_flt==8)goto Lbl_02360;
    // 02050 PRINT"   ^  (.) (.)  ^"
    b2c_printf("   ^  (.) (.)  ^\n");
    // 02060 IF E1=7 THEN 2360
    if(E1_flt==7)goto Lbl_02360;
    // 02070 PRINT" <<<           >>>"
    b2c_printf(" <<<           >>>\n");
    // 02080 IF E1=6 THEN 2360
    if(E1_flt==6)goto Lbl_02360;
    // 02090 PRINT"   !    :?:    !"
    b2c_printf("   !    :?:    !\n");
    // 02100 IF E1=5 THEN 2360
    if(E1_flt==5)goto Lbl_02360;
    // 02110 PRINT"   *  -     -  *"
    b2c_printf("   *  -     -  *\n");
    // 02120 PRINT"   '   +++++   '"
    b2c_printf("   '   +++++   '\n");
    // 02130 PRINT"   &           &"
    b2c_printf("   &           &\n");
    // 02140 PRINT"    %%%     %%%"
    b2c_printf("    %%%%%%     %%%%%%\n");
    // 02150 PRINT"      :!#$#!:"
    b2c_printf("      :!#$#!:\n");
    // 02160 IF E1=4 THEN 2360
    if(E1_flt==4)goto Lbl_02360;
    // 02170 PRINT"         I"
    b2c_printf("         i\n");
    // 02180 PRINT"         I"
    b2c_printf("         i\n");
    // 02190 PRINT"         I"
    b2c_printf("         i\n");
    // 02200 IF E1=3 THEN 2360
    if(E1_flt==3)goto Lbl_02360;
    // 02210 PRINT"???????????????????"
    b2c_printf("???????????????????\n");
    // 02220 IF E1=2 THEN 2360
    if(E1_flt==2)goto Lbl_02360;
    // 02230 PRINT"         @"
    b2c_printf("         @\n");
    // 02240 PRINT"         @"
    b2c_printf("         @\n");
    // 02250 PRINT"         @"
    b2c_printf("         @\n");
    // 02260 IF E1=1 THEN 2360
    if(E1_flt==1)goto Lbl_02360;
    // 02270 PRINT"        ( )"
    b2c_printf("        ( )\n");
    // 02280 PRINT"       (   )"
    b2c_printf("       (   )\n");
    // 02290 PRINT"      (     )"
    b2c_printf("      (     )\n");
    // 02300 PRINT"     (       )"
    b2c_printf("     (       )\n");
    // 02310 PRINT"    (         )"
    b2c_printf("    (         )\n");
    // 02320 PRINT"   (           )"
    b2c_printf("   (           )\n");
    // 02330 PRINT"  (#$%&     &%$#)"
    b2c_printf("  (#$%%&     &%%$#)\n");

  Lbl_02340:
    // 02340 LETW=0
    W_flt = 0;
    // 02350 IF T2=0 THEN 1210
    if(T2_flt==0)goto Lbl_01210;

  Lbl_02360:
    // 02360 FOR I=1 TO S
    for(I_flt_arr[0]=1;I_flt_arr[0]<=S_flt_arr[0];I_flt_arr[0]++){
        // 02370 IF A$(I)=B$(I) THEN 2390
        if(strcmp(A_str_arr[(int)I_flt_arr[0]],B_str_arr[(int)I_flt_arr[0]])==0)goto Lbl_02390;
        // 02380 GO TO 1560
        goto Lbl_01560;

  Lbl_02390:
        // 02390 NEXT I
        int dummy_2390=0; // Ignore this line.
    }; // End-For(I_flt_arr[0])
    // 02400 PRINT"VERY GOOD! YOU WIN!"
    b2c_printf("Very good! You win!\n");
    // 02410 PRINT"DO YOU WANT TO PLAY AGAIN";
    b2c_printf("Do you want to play again");
    // 02420 LET S7=0
    S7_flt = 0;
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
