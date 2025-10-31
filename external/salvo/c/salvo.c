/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/salvo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cd9ffd8d6d0 ---------A   01000  PRINT TAB(33);"SALVO"
    0x5cd9ffd8d670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cd9ffd8e910 ---------A   01020  PRINT:PRINT:PRINT
    0x5cd9ffd8eb80 ---------A   01030  REM
    0x5cd9ffd8fed0 ---------A   01032  DEF FNA(K)=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    0x5cd9ffd90050 ---------A   01033  DEF FNB(K)=K+INT(K/4)-SGN(K-1)
    0x5cd9ffd97b20 ---------A   01040  DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    0x5cd9ffd97df0 ---------A   01050  Z8=0
    0x5cd9ffd98180 ---------A   01060  FOR W=1 TO 12
    0x5cd9ffd8fe10 ---------A   01070  E(W)=-1
    0x5cd9ffd98720 ---------A   01080  H(W)=-1
    0x5cd9ffd98850 ---------A   01090  NEXT W
    0x5cd9ffd98c00 ---------A   01100  FOR X=1 TO 10
    0x5cd9ffd98fa0 ---------A   01110  FOR Y=1 TO 10
    0x5cd9ffd99380 ---------A   01120  B(X,Y)=0
    0x5cd9ffd994b0 ---------A   01130  NEXT Y
    0x5cd9ffd99600 ---------A   01140  NEXT X
    0x5cd9ffd998f0 ---------A   01150  FOR X=1 TO 12
    0x5cd9ffd99bf0 ---------A   01160  F(X)=0
    0x5cd9ffd99ee0 ---------A   01170  G(X)=0
    0x5cd9ffd9a010 ---------A   01180  NEXT X
    0x5cd9ffd9a300 ---------A T 01190  FOR X=1 TO 10
    0x5cd9ffd9a5e0 ---------A   01200  FOR Y=1 TO 10
    0x5cd9ffd9a9c0 ---------A   01210  A(X,Y)=0
    0x5cd9ffd9aaf0 ---------A   01220  NEXT Y
    0x5cd9ffd9ac40 ---------A   01230  NEXT X
    0x5cd9ffd9afd0 ---------A   01240  FOR K=4 TO 1 STEP -1
    0x5cd9ffd9b2b0 ---------A   01250  U6=0
    0x5cd9ffd9b300 ---------A T 01260  GOSUB 2910
    0x5cd9ffd9ba10 ---------A   01290  IF V+V2+V*V2=0 THEN 1260
    0x5cd9ffd9bf70 ---------A   01300  IF Y+V*FNB(K)>10 THEN 1260
    0x5cd9ffd9c4d0 ---------A   01310  IF Y+V*FNB(K)<1 THEN 1260
    0x5cd9ffd9ca30 ---------A   01320  IF X+V2*FNB(K)>10 THEN 1260
    0x5cd9ffd9d1c0 ---------A   01330  IF X+V2*FNB(K)<1 THEN 1260
    0x5cd9ffd9d500 ---------A   01340  U6=U6+1
    0x5cd9ffd9d750 ---------A   01350  IF U6>25 THEN 1190
    0x5cd9ffd9dbf0 ---------A   01360  FOR Z=0 TO FNB(K)
    0x5cd9ffd9e350 ---------A   01370  F(Z+FNA(K))=X+V2*Z
    0x5cd9ffd9eaa0 ---------A   01380  G(Z+FNA(K))=Y+V*Z
    0x5cd9ffd9ebd0 ---------A   01390  NEXT Z
    0x5cd9ffd9efd0 ---------A   01400  U8=FNA(K)
    0x5cd9ffd9f450 ---------A   01405  IF U8>U8+FNB(K) THEN 1460
    0x5cd9ffd9fa30 ---------A   01410  FOR Z2= U8 TO U8+FNB(K)
    0x5cd9ffd9fc90 ---------A   01415  IF U8<2 THEN 1450
    0x5cd9ffda0180 ---------A   01420  FOR Z3=1 TO U8-1
    0x5cd9ffda0e20 ---------A   01430  IF SQR((F(Z3)-F(Z2))^2 + (G(Z3)-G(Z2))^2) < 3.59 THEN 1260
    0x5cd9ffda0f60 ---------A   01440  NEXT Z3
    0x5cd9ffda10b0 ---------A T 01450  NEXT Z2
    0x5cd9ffda14c0 ---------A T 01460  FOR Z=0 TO FNB(K)
    0x5cd9ffda2200 ---------A   01470  A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
    0x5cd9ffda2330 ---------A   01480  NEXT Z
    0x5cd9ffda2480 ---------A   01490  NEXT K
    0x5cd9ffda2610 ---------A   01500  PRINT "ENTER COORDINATES FOR..."
    0x5cd9ffda2770 ---------A   01510  PRINT "BATTLESHIP"
    0x5cd9ffda2a50 ---------A   01520  FOR X=1 TO 5
    0x5cd9ffda2c90 ---------A   01530  INPUT Y,Z
    0x5cd9ffda3070 ---------A   01540  B(Y,Z)=3
    0x5cd9ffda31a0 ---------A   01550  NEXT X
    0x5cd9ffda3310 ---------A   01560  PRINT "CRUISER"
    0x5cd9ffda35f0 ---------A   01570  FOR X=1 TO 3
    0x5cd9ffda3830 ---------A   01580  INPUT Y,Z
    0x5cd9ffda3c10 ---------A   01590  B(Y,Z)=2
    0x5cd9ffda3d40 ---------A   01600  NEXT X
    0x5cd9ffda3ec0 ---------A   01610  PRINT "DESTROYER<A>"
    0x5cd9ffda41a0 ---------A   01620  FOR X=1 TO 2
    0x5cd9ffda47f0 ---------A   01630  INPUT Y,Z
    0x5cd9ffda4bd0 ---------A   01640  B(Y,Z)=1
    0x5cd9ffda4d00 ---------A   01650  NEXT X
    0x5cd9ffda4e80 ---------A   01660  PRINT "DESTROYER<B>"
    0x5cd9ffda5160 ---------A   01670  FOR X=1 TO 2
    0x5cd9ffda53a0 ---------A   01680  INPUT Y,Z
    0x5cd9ffda5780 ---------A   01690  B(Y,Z)=.5
    0x5cd9ffda58b0 ---------A   01700  NEXT X
    0x5cd9ffda5a50 ---------A T 01710  PRINT "DO YOU WANT TO START";
    0x5cd9ffda5c90 ---------A   01720  INPUT J$
    0x5cd9ffda5f10 ---------A   01730  IF J$<>"WHERE ARE YOUR SHIPS?" THEN 1890
    0x5cd9ffda6070 ---------A   01740  PRINT "BATTLESHIP"
    0x5cd9ffda6350 ---------A   01750  FOR Z=1 TO 5
    0x5cd9ffda6770 ---------A   01760  PRINT F(Z);G(Z)
    0x5cd9ffda68b0 ---------A   01770  NEXT Z
    0x5cd9ffda6a20 ---------A   01780  PRINT "CRUISER"
    0x5cd9ffda6e00 ---------A   01790  PRINT F(6);G(6)
    0x5cd9ffda71e0 ---------A   01800  PRINT F(7);G(7)
    0x5cd9ffda75d0 ---------A   01810  PRINT F(8);G(8)
    0x5cd9ffda7730 ---------A   01820  PRINT "DESTROYER<A>"
    0x5cd9ffda7b10 ---------A   01830  PRINT F(9);G(9)
    0x5cd9ffda7f00 ---------A   01840  PRINT F(10);G(10)
    0x5cd9ffda8060 ---------A   01850  PRINT "DESTROYER<B>"
    0x5cd9ffda8440 ---------A   01860  PRINT F(11);G(11)
    0x5cd9ffda8820 ---------A   01870  PRINT F(12);G(12)
    0x5cd9ffda88a0 ---------A   01880  GOTO 1710
    0x5cd9ffda8ad0 ---------A T 01890  C=0
    0x5cd9ffda8c50 ---------A   01900  PRINT "DO YOU WANT TO SEE MY SHOTS";
    0x5cd9ffda8e70 ---------A   01910  INPUT K$
    0x5cd9ffda8f00 ---------A   01920  PRINT
    0x5cd9ffda9190 ---------A   01930  IF J$<>"YES" THEN 2620
    0x5cd9ffda9220 ---------A   01940  REM*******************START
    0x5cd9ffda94c0 ---------A T 01950  IF J$<>"YES" THEN 1990
    0x5cd9ffda9800 ---------A   01960  C=C+1
    0x5cd9ffda9870 ---------A   01970  PRINT
    0x5cd9ffda9ad0 ---------A   01980  PRINT "TURN";C
    0x5cd9ffda9d00 ---------A T 01990  A=0
    0x5cd9ffdaa090 ---------A   02000  FOR W=.5 TO 3 STEP .5
    0x5cd9ffdaa370 ---------A   02010  FOR X=1 TO 10
    0x5cd9ffdaa660 ---------A   02020  FOR Y=1 TO 10
    0x5cd9ffdaaaa0 ---------A   02030  IF B(X,Y)=W THEN 2070
    0x5cd9ffdaabe0 ---------A   02040  NEXT Y
    0x5cd9ffdaad30 ---------A   02050  NEXT X
    0x5cd9ffdaadc0 ---------A   02060  GOTO 2080
    0x5cd9ffdab2f0 ---------A T 02070  A=A+INT(W+.5)
    0x5cd9ffdab420 ---------A T 02080  NEXT W
    0x5cd9ffdab710 ---------A   02090  FOR W=1 TO 7
    0x5cd9ffdaba10 ---------A   02100  C(W)=0
    0x5cd9ffdabd00 ---------A   02110  D(W)=0
    0x5cd9ffdabff0 ---------A   02120  F(W)=0
    0x5cd9ffdac2e0 ---------A   02130  G(W)=0
    0x5cd9ffdac410 ---------A   02140  NEXT W
    0x5cd9ffdac700 ---------A   02150  P3=0
    0x5cd9ffdac9d0 ---------A   02160  FOR X=1 TO 10
    0x5cd9ffdaccc0 ---------A   02170  FOR Y=1 TO 10
    0x5cd9ffdad0e0 ---------A   02180  IF A(X,Y)>10 THEN 2200
    0x5cd9ffdad420 ---------A   02190  P3=P3+1
    0x5cd9ffdad550 ---------A T 02200  NEXT Y
    0x5cd9ffdad6a0 ---------A   02210  NEXT X
    0x5cd9ffdada20 ---------A   02220  PRINT "YOU HAVE";A;"SHOTS."
    0x5cd9ffdadcd0 ---------A   02230  IF P3>=A THEN 2260
    0x5cd9ffdade50 ---------A   02240  PRINT "YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    0x5cd9ffdaded0 ---------A   02250  GOTO 2890
    0x5cd9ffdae130 ---------A T 02260  IF A<>0 THEN 2290
    0x5cd9ffdaeaa0 ---------A T 02270  PRINT "I HAVE WON."
    0x5cd9ffdaeb00 ---------A   02280  STOP
    0x5cd9ffdaee00 ---------A T 02290  FOR W=1 TO A
    0x5cd9ffdaf050 ---------A T 02300  INPUT X,Y
    0x5cd9ffdaf3b0 ---------A   02310  IF X<>INT(X) THEN 2370
    0x5cd9ffdaf610 ---------A   02320  IF X>10 THEN 2370
    0x5cd9ffdaf880 ---------A   02330  IF X<1 THEN 2370
    0x5cd9ffdafbe0 ---------A   02340  IF Y<>INT(Y) THEN 2370
    0x5cd9ffdafe40 ---------A   02350  IF Y>10 THEN 2370
    0x5cd9ffdb00b0 ---------A   02360  IF Y>=1 THEN 2390
    0x5cd9ffdb0210 ---------A T 02370  PRINT "ILLEGAL, ENTER AGAIN."
    0x5cd9ffdb02a0 ---------A   02380  GOTO 2300
    0x5cd9ffdb06b0 ---------A T 02390  IF A(X,Y)>10 THEN 2440
    0x5cd9ffdb09d0 ---------A   02400  C(W)=X
    0x5cd9ffdb0ce0 ---------A   02410  D(W)=Y
    0x5cd9ffdb0e10 ---------A   02420  NEXT W
    0x5cd9ffdb0ec0 ---------A   02430  GOTO 2460
    0x5cd9ffdb13e0 ---------A T 02440  PRINT "YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    0x5cd9ffdb1460 ---------A   02450  GOTO 2300
    0x5cd9ffdb1760 ---------A T 02460  FOR W=1 TO A
    0x5cd9ffdb1d50 ---------A   02470  IF A(C(W),D(W))=3 THEN 2540
    0x5cd9ffdb2340 ---------A   02480  IF A(C(W),D(W))=2 THEN 2560
    0x5cd9ffdb2930 ---------A   02490  IF A(C(W),D(W))=1 THEN 2580
    0x5cd9ffdb2f10 ---------A   02500  IF A(C(W),D(W))=.5 THEN 2600
    0x5cd9ffdb35d0 ---------A T 02510  A(C(W),D(W))=10+C
    0x5cd9ffdb3700 ---------A   02520  NEXT W
    0x5cd9ffdb37a0 ---------A   02530  GOTO 2620
    0x5cd9ffdb3900 ---------A T 02540  PRINT "YOU HIT MY BATTLESHIP."
    0x5cd9ffdb3990 ---------A   02550  GOTO 2510
    0x5cd9ffdb3ae0 ---------A T 02560  PRINT "YOU HIT MY CRUISER."
    0x5cd9ffdb3b70 ---------A   02570  GOTO 2510
    0x5cd9ffdb3cd0 ---------A T 02580  PRINT "YOU HIT MY DESTROYER<A>."
    0x5cd9ffdb3d60 ---------A   02590  GOTO 2510
    0x5cd9ffdb3ec0 ---------A T 02600  PRINT "YOU HIT MY DESTROYER<B>."
    0x5cd9ffdb3f40 ---------A   02610  GOTO 2510
    0x5cd9ffdb4160 ---------A T 02620  A=0
    0x5cd9ffdb43d0 ---------A   02630  IF J$="YES" THEN 2670
    0x5cd9ffdb4710 ---------A   02640  C=C+1
    0x5cd9ffdb4780 ---------A   02650  PRINT
    0x5cd9ffdb49e0 ---------A   02660  PRINT "TURN";C
    0x5cd9ffdb4c10 ---------A T 02670  A=0
    0x5cd9ffdb4fa0 ---------A   02680  FOR W=.5 TO 3 STEP .5
    0x5cd9ffdb5280 ---------A   02690  FOR X=1 TO 10
    0x5cd9ffdb5570 ---------A   02700  FOR Y=1 TO 10
    0x5cd9ffdb59b0 ---------A   02710  IF A(X,Y)=W THEN 2750
    0x5cd9ffdb5af0 ---------A   02720  NEXT Y
    0x5cd9ffdb5c40 ---------A   02730  NEXT X
    0x5cd9ffdb5cd0 ---------A   02740  GOTO 2760
    0x5cd9ffdb6200 ---------A T 02750  A=A+INT(W+.5)
    0x5cd9ffdb6330 ---------A T 02760  NEXT W
    0x5cd9ffdb6560 ---------A   02770  P3=0
    0x5cd9ffdb6830 ---------A   02780  FOR X=1 TO 10
    0x5cd9ffdb6b20 ---------A   02790  FOR Y=1 TO 10
    0x5cd9ffdb6f40 ---------A   02800  IF A(X,Y)>10 THEN 2820
    0x5cd9ffdb7280 ---------A   02810  P3=P3+1
    0x5cd9ffdb73b0 ---------A T 02820  NEXT Y
    0x5cd9ffdb7500 ---------A   02830  NEXT X
    0x5cd9ffdb7880 ---------A   02840  PRINT "I HAVE";A;"SHOTS."
    0x5cd9ffdb7b20 ---------A   02850  IF P3>A THEN 2880
    0x5cd9ffdb7c90 ---------A   02860  PRINT "I HAVE MORE SHOTS THAN BLANK SQUARES."
    0x5cd9ffdb7d10 ---------A   02870  GOTO 2270
    0x5cd9ffdb7f70 ---------A T 02880  IF A<>0 THEN 2960
    0x5cd9ffdb80d0 ---------A T 02890  PRINT "YOU HAVE WON."
    0x5cd9ffdb8130 ---------A   02900  STOP
    0x5cd9ffdb8710 ---------B G 02910  X=INT(RND(1)*10+1)
    0x5cd9ffdb8ce0 ---------B   02920  Y=INT(RND(1)*10+1)
    0x5cd9ffdb92b0 ---------B   02930  V=INT(3*RND(1)-1)
    0x5cd9ffdb9880 ---------B   02940  V2=INT(3*RND(1)-1)
    0x5cd9ffdb98d0 ---------B   02950  RETURN
    0x5cd9ffdb9bc0 ---------A T 02960  FOR W=1 TO 12
    0x5cd9ffdb9f00 ---------A   02970  IF H(W)>0 THEN 3800
    0x5cd9ffdba040 ---------A   02980  NEXT W
    0x5cd9ffdba0f0 ---------A   02990  REM*******************RANDOM
    0x5cd9ffdba320 ---------A   03000  W=0
    0x5cd9ffdba5f0 ---------A T 03010  R3=0
    0x5cd9ffdba660 ---------A   03020  GOSUB 2910
    0x5cd9ffdba6d0 ---------A T 03030  RESTORE
    0x5cd9ffdba9a0 ---------A   03040  R2=0
    0x5cd9ffdbace0 ---------A   03050  R3=R3+1
    0x5cd9ffdbaf30 ---------A   03060  IF R3>100 THEN 3010
    0x5cd9ffdbb190 ---------A   03070  IF X>10 THEN 3110
    0x5cd9ffdbb400 ---------A   03080  IF X>0 THEN 3120
    0x5cd9ffdbb9e0 ---------A   03090  X=1+INT(RND(1)*2.5)
    0x5cd9ffdbba60 ---------A   03100  GOTO 3120
    0x5cd9ffdbc030 ---------A T 03110  X=10-INT(RND(1)*2.5)
    0x5cd9ffdbc280 ---------A T 03120  IF Y>10 THEN 3160
    0x5cd9ffdbc4f0 ---------A   03130  IF Y>0 THEN 3270
    0x5cd9ffdbcad0 ---------A   03140  Y=1+INT(RND(1)*2.5)
    0x5cd9ffdbcb50 ---------A   03150  GOTO 3270
    0x5cd9ffdbd120 ---------A T 03160  Y=10-INT(RND(1)*2.5)
    0x5cd9ffdbd190 ---------A   03170  GOTO 3270
    0x5cd9ffdbd4a0 ---------A T 03180  F(W)=X
    0x5cd9ffdbd7b0 ---------A   03190  G(W)=Y
    0x5cd9ffdbda20 ---------A   03200  IF W=A THEN 3380
    0x5cd9ffdbdc80 ---------A T 03210  IF R2=6 THEN 3030
    0x5cd9ffdbe040 ---------A   03220  READ X1,Y1
    0x5cd9ffdbe380 ---------A   03230  R2=R2+1
    0x5cd9ffdbee70 ---------A   03240  DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    0x5cd9ffdbf1c0 ---------A   03250  X=X+X1
    0x5cd9ffdbf510 ---------A   03260  Y=Y+Y1
    0x5cd9ffdbf760 ---------A T 03270  IF X>10 THEN 3210
    0x5cd9ffdbf9c0 ---------A   03280  IF X<1 THEN 3210
    0x5cd9ffdbfc20 ---------A   03290  IF Y>10 THEN 3210
    0x5cd9ffdbfe90 ---------A   03300  IF Y<1 THEN 3210
    0x5cd9ffdc02b0 ---------A   03310  IF B(X,Y)>10 THEN 3210
    0x5cd9ffdc0680 ---------A   03320  FOR Q9=1 TO W
    0x5cd9ffdc09f0 ---------A   03330  IF F(Q9)<>X THEN 3350
    0x5cd9ffdc0d50 ---------A   03340  IF G(Q9)=Y THEN 3210
    0x5cd9ffdc0e90 ---------A T 03350  NEXT Q9
    0x5cd9ffdc11e0 ---------A   03360  W=W+1
    0x5cd9ffdc1260 ---------A   03370  GOTO 3180
    0x5cd9ffdc14d0 ---------A T 03380  IF K$<>"YES" THEN 3420
    0x5cd9ffdc1890 ---------A   03390  FOR Z5=1 TO A
    0x5cd9ffdc1cb0 ---------A   03400  PRINT F(Z5);G(Z5)
    0x5cd9ffdc1df0 ---------A   03410  NEXT Z5
    0x5cd9ffdc2110 ---------A T 03420  FOR W=1 TO A
    0x5cd9ffdc2700 ---------A   03430  IF B(F(W),G(W))=3 THEN 3500
    0x5cd9ffdc2cf0 ---------A   03440  IF B(F(W),G(W))=2 THEN 3520
    0x5cd9ffdc32e0 ---------A   03450  IF B(F(W),G(W))=1 THEN 3560
    0x5cd9ffdc38c0 ---------A   03460  IF B(F(W),G(W))=.5 THEN 3540
    0x5cd9ffdc3f80 ---------A T 03470  B(F(W),G(W))=10+C
    0x5cd9ffdc40b0 ---------A   03480  NEXT W
    0x5cd9ffdc4150 ---------A   03490  GOTO 1950
    0x5cd9ffdc42a0 ---------A T 03500  PRINT "I HIT YOUR BATTLESHIP"
    0x5cd9ffdc4330 ---------A   03510  GOTO 3570
    0x5cd9ffdc4480 ---------A T 03520  PRINT "I HIT YOUR CRUISER"
    0x5cd9ffdc4510 ---------A   03530  GOTO 3570
    0x5cd9ffdc4670 ---------A T 03540  PRINT "I HIT YOUR DESTROYER<B>"
    0x5cd9ffdae1c0 ---------A   03550  GOTO 3570
    0x5cd9ffdae320 ---------A T 03560  PRINT "I HIT YOUR DESTROYER<A>"
    0x5cd9ffdae6d0 ---------A T 03570  FOR Q=1 TO 12
    0x5cd9ffdc5760 ---------A   03580  IF E(Q)<>-1 THEN 3730
    0x5cd9ffdc5b80 ---------A   03590  E(Q)=10+C
    0x5cd9ffdc6210 ---------A   03600  H(Q)=B(F(W),G(W))
    0x5cd9ffdc64e0 ---------A   03610  M3=0
    0x5cd9ffdc6880 ---------A   03620  FOR M2=1 TO 12
    0x5cd9ffdc6cc0 ---------A   03630  IF H(M2)<>H(Q) THEN 3650
    0x5cd9ffdc7000 ---------A   03640  M3=M3+1
    0x5cd9ffdc7130 ---------A T 03650  NEXT M2
    0x5cd9ffdc7d70 ---------A   03660  IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 3470
    0x5cd9ffdc8060 ---------A   03670  FOR M2=1 TO 12
    0x5cd9ffdc84a0 ---------A   03680  IF H(M2)<>H(Q) THEN 3710
    0x5cd9ffdc87a0 ---------A   03690  E(M2)=-1
    0x5cd9ffdc8a90 ---------A   03700  H(M2)=-1
    0x5cd9ffdc8bc0 ---------A T 03710  NEXT M2
    0x5cd9ffdc8c50 ---------A   03720  GOTO 3470
    0x5cd9ffdc8d80 ---------A T 03730  NEXT Q
    0x5cd9ffdc8f00 ---------A   03740  PRINT "PROGRAM ABORT:"
    0x5cd9ffdc91f0 ---------A   03750  FOR Q=1 TO 12
    0x5cd9ffdc9740 ---------A   03760  PRINT "E(";Q;") =";E(Q)
    0x5cd9ffdc9c80 ---------A   03770  PRINT "H(";Q;") =";H(Q)
    0x5cd9ffdc9dc0 ---------A   03780  NEXT Q
    0x5cd9ffdc9e30 ---------A   03790  STOP
    0x5cd9ffdc9ee0 ---------A T 03800  REM************************USINGEARRAY
    0x5cd9ffdca290 ---------A   03810  FOR R=1 TO 10
    0x5cd9ffdca630 ---------A   03820  FOR S=1 TO 10
    0x5cd9ffdcaa10 ---------A   03830  K(R,S)=0
    0x5cd9ffdcab40 ---------A   03840  NEXT S
    0x5cd9ffdcac90 ---------A   03850  NEXT R
    0x5cd9ffdcb050 ---------A   03860  FOR U=1 TO 12
    0x5cd9ffdcb390 ---------A   03870  IF E(U)<10 THEN 4020
    0x5cd9ffdcb670 ---------A   03880  FOR R=1 TO 10
    0x5cd9ffdcb960 ---------A   03890  FOR S=1 TO 10
    0x5cd9ffdcbd80 ---------A   03900  IF B(R,S)<10 THEN 3930
    0x5cd9ffdcc160 ---------A   03910  K(R,S)=-10000000
    0x5cd9ffdcc1e0 ---------A   03920  GOTO 4000
    0x5cd9ffdcc980 ---------A T 03930  FOR M=SGN(1-R) TO SGN(10-R)
    0x5cd9ffdcd130 ---------A   03940  FOR N=SGN(1-S) TO SGN(10-S)
    0x5cd9ffdcd700 ---------A   03950  IF N+M+N*M=0 THEN 3980
    0x5cd9ffdcde70 ---------A   03960  IF B(R+M,S+N)<>E(U) THEN 3980
    0x5cd9ffdceb30 ---------A   03970  K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
    0x5cd9ffdcec60 ---------A T 03980  NEXT N
    0x5cd9ffdcedb0 ---------A   03990  NEXT M
    0x5cd9ffdcef00 ---------A T 04000  NEXT S
    0x5cd9ffdcf050 ---------A   04010  NEXT R
    0x5cd9ffdcf1a0 ---------A T 04020  NEXT U
    0x5cd9ffdcf4b0 ---------A   04030  FOR R=1 TO A
    0x5cd9ffdcf7d0 ---------A   04040  F(R)=R
    0x5cd9ffdcfae0 ---------A   04050  G(R)=R
    0x5cd9ffdcfc10 ---------A   04060  NEXT R
    0x5cd9ffdcff00 ---------A   04070  FOR R=1 TO 10
    0x5cd9ffdd01e0 ---------A   04080  FOR S=1 TO 10
    0x5cd9ffdd0400 ---------A   04090  Q9=1
    0x5cd9ffdd0710 ---------A   04100  FOR M=1 TO A
    0x5cd9ffdd1090 ---------A   04110  IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 4130
    0x5cd9ffdd12d0 ---------A   04120  Q9=M
    0x5cd9ffdd1400 ---------A T 04130  NEXT M
    0x5cd9ffdd1690 ---------A   04131  IF R>A THEN 4140
    0x5cd9ffdd1920 ---------A   04132  IF R=S THEN 4210
    0x5cd9ffdd20e0 ---------A T 04140  IF K(R,S)<K(F(Q9),G(Q9)) THEN 4210
    0x5cd9ffdd23f0 ---------A   04150  FOR M=1 TO A
    0x5cd9ffdd2760 ---------A   04160  IF F(M)<>R THEN 4190
    0x5cd9ffdd2ac0 ---------A   04170  IF G(M)=S THEN 4210
    0x5cd9ffdd2c00 ---------A   04180  NEXT M
    0x5cd9ffdd2f30 ---------A T 04190  F(Q9)=R
    0x5cd9ffdd3240 ---------A   04200  G(Q9)=S
    0x5cd9ffdd3370 ---------A T 04210  NEXT S
    0x5cd9ffdd34c0 ---------A   04220  NEXT R
    0x5cd9ffdd3550 ---------A   04230  GOTO 3380
    0x5cd9ffdd35a0 ---------A   04240  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01190      01350T
     01260      01290T, 01300T, 01310T, 01320T, 01330T, 01430T
     01450      01415T
     01460      01405T
     01710      01880T
     01890      01730T
     01950      03490T
     01990      01950T
     02070      02030T
     02080      02060T
     02200      02180T
     02260      02230T
     02270      02870T
     02290      02260T
     02300      02380T, 02450T
     02370      02310T, 02320T, 02330T, 02340T, 02350T
     02390      02360T
     02440      02390T
     02460      02430T
     02510      02550T, 02570T, 02590T, 02610T
     02540      02470T
     02560      02480T
     02580      02490T
     02600      02500T
     02620      01930T, 02530T
     02670      02630T
     02750      02710T
     02760      02740T
     02820      02800T
     02880      02850T
     02890      02250T
     02910      01260G, 03020G
     02960      02880T
     03010      03060T
     03030      03210T
     03110      03070T
     03120      03080T, 03100T
     03160      03120T
     03180      03370T
     03210      03270T, 03280T, 03290T, 03300T, 03310T, 03340T
     03270      03130T, 03150T, 03170T
     03350      03330T
     03380      03200T, 04230T
     03420      03380T
     03470      03660T, 03720T
     03500      03430T
     03520      03440T
     03540      03460T
     03560      03450T
     03570      03510T, 03530T, 03550T
     03650      03630T
     03710      03680T
     03730      03580T
     03800      02970T
     03930      03900T
     03980      03950T, 03960T
     04000      03920T
     04020      03870T
     04130      04110T
     04140      04131T
     04190      04160T
     04210      04132T, 04140T, 04170T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5cd9ffd8d6d0 (01000)   0x5cd9ffd8d6d0 (01000)   0x5cd9ffdd35a0 (04240)   0x5cd9ffdd35a0 (04240)   
   B) 0x5cd9ffdb8710 (02910)   0x5cd9ffdb8710 (02910)   0x5cd9ffdb98d0 (02950)   0x5cd9ffdb98d0 (02950)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/salvo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cd9ffd8d6d0 ---------A   01000  PRINT TAB(33);"SALVO"
    0x5cd9ffd8d670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cd9ffd8efc0 ----------   01020  PRINT
    0x5cd9ffd8e2d0 ----------        a PRINT
    0x5cd9ffd8e910 ---------A        b PRINT
    0x5cd9ffd8eb80 ---------A   01030  REM
    0x5cd9ffd8fed0 ---------A   01032  DEF FNA(K)=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    0x5cd9ffd90050 ---------A   01033  DEF FNB(K)=K+INT(K/4)-SGN(K-1)
    0x5cd9ffd97b20 ---------A   01040  DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    0x5cd9ffd97df0 ---------A   01050  Z8=0
    0x5cd9ffd98180 ---------A   01060  FOR W=1 TO 12
    0x5cd9ffd8fe10 ---------A   01070  E(W)=-1
    0x5cd9ffd98720 ---------A   01080  H(W)=-1
    0x5cd9ffd98850 ---------A   01090  NEXT W
    0x5cd9ffd98c00 ---------A   01100  FOR X=1 TO 10
    0x5cd9ffd98fa0 ---------A   01110  FOR Y=1 TO 10
    0x5cd9ffd99380 ---------A   01120  B(X,Y)=0
    0x5cd9ffd994b0 ---------A   01130  NEXT Y
    0x5cd9ffd99600 ---------A   01140  NEXT X
    0x5cd9ffd998f0 ---------A   01150  FOR X=1 TO 12
    0x5cd9ffd99bf0 ---------A   01160  F(X)=0
    0x5cd9ffd99ee0 ---------A   01170  G(X)=0
    0x5cd9ffd9a010 ---------A   01180  NEXT X
    0x5cd9ffd9a300 ---------A T 01190  FOR X=1 TO 10
    0x5cd9ffd9a5e0 ---------A   01200  FOR Y=1 TO 10
    0x5cd9ffd9a9c0 ---------A   01210  A(X,Y)=0
    0x5cd9ffd9aaf0 ---------A   01220  NEXT Y
    0x5cd9ffd9ac40 ---------A   01230  NEXT X
    0x5cd9ffd9afd0 ---------A   01240  FOR K=4 TO 1 STEP -1
    0x5cd9ffd9b2b0 ---------A   01250  U6=0
    0x5cd9ffd9b300 ---------A T 01260  GOSUB 2910
    0x5cd9ffd9ba10 ---------A   01290  IF V+V2+V*V2=0 THEN 1260
    0x5cd9ffd9bf70 ---------A   01300  IF Y+V*FNB(K)>10 THEN 1260
    0x5cd9ffd9c4d0 ---------A   01310  IF Y+V*FNB(K)<1 THEN 1260
    0x5cd9ffd9ca30 ---------A   01320  IF X+V2*FNB(K)>10 THEN 1260
    0x5cd9ffd9d1c0 ---------A   01330  IF X+V2*FNB(K)<1 THEN 1260
    0x5cd9ffd9d500 ---------A   01340  U6=U6+1
    0x5cd9ffd9d750 ---------A   01350  IF U6>25 THEN 1190
    0x5cd9ffd9dbf0 ---------A   01360  FOR Z=0 TO FNB(K)
    0x5cd9ffd9e350 ---------A   01370  F(Z+FNA(K))=X+V2*Z
    0x5cd9ffd9eaa0 ---------A   01380  G(Z+FNA(K))=Y+V*Z
    0x5cd9ffd9ebd0 ---------A   01390  NEXT Z
    0x5cd9ffd9efd0 ---------A   01400  U8=FNA(K)
    0x5cd9ffd9f450 ---------A   01405  IF U8>U8+FNB(K) THEN 1460
    0x5cd9ffd9fa30 ---------A   01410  FOR Z2= U8 TO U8+FNB(K)
    0x5cd9ffd9fc90 ---------A   01415  IF U8<2 THEN 1450
    0x5cd9ffda0180 ---------A   01420  FOR Z3=1 TO U8-1
    0x5cd9ffda0e20 ---------A   01430  IF SQR((F(Z3)-F(Z2))^2 + (G(Z3)-G(Z2))^2) < 3.59 THEN 1260
    0x5cd9ffda0f60 ---------A   01440  NEXT Z3
    0x5cd9ffda10b0 ---------A T 01450  NEXT Z2
    0x5cd9ffda14c0 ---------A T 01460  FOR Z=0 TO FNB(K)
    0x5cd9ffda2200 ---------A   01470  A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
    0x5cd9ffda2330 ---------A   01480  NEXT Z
    0x5cd9ffda2480 ---------A   01490  NEXT K
    0x5cd9ffda2610 ---------A   01500  PRINT "ENTER COORDINATES FOR..."
    0x5cd9ffda2770 ---------A   01510  PRINT "BATTLESHIP"
    0x5cd9ffda2a50 ---------A   01520  FOR X=1 TO 5
    0x5cd9ffda2c90 ---------A   01530  INPUT Y,Z
    0x5cd9ffda3070 ---------A   01540  B(Y,Z)=3
    0x5cd9ffda31a0 ---------A   01550  NEXT X
    0x5cd9ffda3310 ---------A   01560  PRINT "CRUISER"
    0x5cd9ffda35f0 ---------A   01570  FOR X=1 TO 3
    0x5cd9ffda3830 ---------A   01580  INPUT Y,Z
    0x5cd9ffda3c10 ---------A   01590  B(Y,Z)=2
    0x5cd9ffda3d40 ---------A   01600  NEXT X
    0x5cd9ffda3ec0 ---------A   01610  PRINT "DESTROYER<A>"
    0x5cd9ffda41a0 ---------A   01620  FOR X=1 TO 2
    0x5cd9ffda47f0 ---------A   01630  INPUT Y,Z
    0x5cd9ffda4bd0 ---------A   01640  B(Y,Z)=1
    0x5cd9ffda4d00 ---------A   01650  NEXT X
    0x5cd9ffda4e80 ---------A   01660  PRINT "DESTROYER<B>"
    0x5cd9ffda5160 ---------A   01670  FOR X=1 TO 2
    0x5cd9ffda53a0 ---------A   01680  INPUT Y,Z
    0x5cd9ffda5780 ---------A   01690  B(Y,Z)=.5
    0x5cd9ffda58b0 ---------A   01700  NEXT X
    0x5cd9ffda5a50 ---------A T 01710  PRINT "DO YOU WANT TO START";
    0x5cd9ffda5c90 ---------A   01720  INPUT J$
    0x5cd9ffda5f10 ---------A   01730  IF J$<>"WHERE ARE YOUR SHIPS?" THEN 1890
    0x5cd9ffda6070 ---------A   01740  PRINT "BATTLESHIP"
    0x5cd9ffda6350 ---------A   01750  FOR Z=1 TO 5
    0x5cd9ffda6770 ---------A   01760  PRINT F(Z);G(Z)
    0x5cd9ffda68b0 ---------A   01770  NEXT Z
    0x5cd9ffda6a20 ---------A   01780  PRINT "CRUISER"
    0x5cd9ffda6e00 ---------A   01790  PRINT F(6);G(6)
    0x5cd9ffda71e0 ---------A   01800  PRINT F(7);G(7)
    0x5cd9ffda75d0 ---------A   01810  PRINT F(8);G(8)
    0x5cd9ffda7730 ---------A   01820  PRINT "DESTROYER<A>"
    0x5cd9ffda7b10 ---------A   01830  PRINT F(9);G(9)
    0x5cd9ffda7f00 ---------A   01840  PRINT F(10);G(10)
    0x5cd9ffda8060 ---------A   01850  PRINT "DESTROYER<B>"
    0x5cd9ffda8440 ---------A   01860  PRINT F(11);G(11)
    0x5cd9ffda8820 ---------A   01870  PRINT F(12);G(12)
    0x5cd9ffda88a0 ---------A   01880  GOTO 1710
    0x5cd9ffda8ad0 ---------A T 01890  C=0
    0x5cd9ffda8c50 ---------A   01900  PRINT "DO YOU WANT TO SEE MY SHOTS";
    0x5cd9ffda8e70 ---------A   01910  INPUT K$
    0x5cd9ffda8f00 ---------A   01920  PRINT
    0x5cd9ffda9190 ---------A   01930  IF J$<>"YES" THEN 2620
    0x5cd9ffda9220 ---------A   01940  REM*******************START
    0x5cd9ffda94c0 ---------A T 01950  IF J$<>"YES" THEN 1990
    0x5cd9ffda9800 ---------A   01960  C=C+1
    0x5cd9ffda9870 ---------A   01970  PRINT
    0x5cd9ffda9ad0 ---------A   01980  PRINT "TURN";C
    0x5cd9ffda9d00 ---------A T 01990  A=0
    0x5cd9ffdaa090 ---------A   02000  FOR W=.5 TO 3 STEP .5
    0x5cd9ffdaa370 ---------A   02010  FOR X=1 TO 10
    0x5cd9ffdaa660 ---------A   02020  FOR Y=1 TO 10
    0x5cd9ffdaaaa0 ---------A   02030  IF B(X,Y)=W THEN 2070
    0x5cd9ffdaabe0 ---------A   02040  NEXT Y
    0x5cd9ffdaad30 ---------A   02050  NEXT X
    0x5cd9ffdaadc0 ---------A   02060  GOTO 2080
    0x5cd9ffdab2f0 ---------A T 02070  A=A+INT(W+.5)
    0x5cd9ffdab420 ---------A T 02080  NEXT W
    0x5cd9ffdab710 ---------A   02090  FOR W=1 TO 7
    0x5cd9ffdaba10 ---------A   02100  C(W)=0
    0x5cd9ffdabd00 ---------A   02110  D(W)=0
    0x5cd9ffdabff0 ---------A   02120  F(W)=0
    0x5cd9ffdac2e0 ---------A   02130  G(W)=0
    0x5cd9ffdac410 ---------A   02140  NEXT W
    0x5cd9ffdac700 ---------A   02150  P3=0
    0x5cd9ffdac9d0 ---------A   02160  FOR X=1 TO 10
    0x5cd9ffdaccc0 ---------A   02170  FOR Y=1 TO 10
    0x5cd9ffdad0e0 ---------A   02180  IF A(X,Y)>10 THEN 2200
    0x5cd9ffdad420 ---------A   02190  P3=P3+1
    0x5cd9ffdad550 ---------A T 02200  NEXT Y
    0x5cd9ffdad6a0 ---------A   02210  NEXT X
    0x5cd9ffdada20 ---------A   02220  PRINT "YOU HAVE";A;"SHOTS."
    0x5cd9ffdadcd0 ---------A   02230  IF P3>=A THEN 2260
    0x5cd9ffdade50 ---------A   02240  PRINT "YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    0x5cd9ffdaded0 ---------A   02250  GOTO 2890
    0x5cd9ffdae130 ---------A T 02260  IF A<>0 THEN 2290
    0x5cd9ffdaeaa0 ---------A T 02270  PRINT "I HAVE WON."
    0x5cd9ffdaeb00 ---------A   02280  STOP
    0x5cd9ffdaee00 ---------A T 02290  FOR W=1 TO A
    0x5cd9ffdaf050 ---------A T 02300  INPUT X,Y
    0x5cd9ffdaf3b0 ---------A   02310  IF X<>INT(X) THEN 2370
    0x5cd9ffdaf610 ---------A   02320  IF X>10 THEN 2370
    0x5cd9ffdaf880 ---------A   02330  IF X<1 THEN 2370
    0x5cd9ffdafbe0 ---------A   02340  IF Y<>INT(Y) THEN 2370
    0x5cd9ffdafe40 ---------A   02350  IF Y>10 THEN 2370
    0x5cd9ffdb00b0 ---------A   02360  IF Y>=1 THEN 2390
    0x5cd9ffdb0210 ---------A T 02370  PRINT "ILLEGAL, ENTER AGAIN."
    0x5cd9ffdb02a0 ---------A   02380  GOTO 2300
    0x5cd9ffdb06b0 ---------A T 02390  IF A(X,Y)>10 THEN 2440
    0x5cd9ffdb09d0 ---------A   02400  C(W)=X
    0x5cd9ffdb0ce0 ---------A   02410  D(W)=Y
    0x5cd9ffdb0e10 ---------A   02420  NEXT W
    0x5cd9ffdb0ec0 ---------A   02430  GOTO 2460
    0x5cd9ffdb13e0 ---------A T 02440  PRINT "YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    0x5cd9ffdb1460 ---------A   02450  GOTO 2300
    0x5cd9ffdb1760 ---------A T 02460  FOR W=1 TO A
    0x5cd9ffdb1d50 ---------A   02470  IF A(C(W),D(W))=3 THEN 2540
    0x5cd9ffdb2340 ---------A   02480  IF A(C(W),D(W))=2 THEN 2560
    0x5cd9ffdb2930 ---------A   02490  IF A(C(W),D(W))=1 THEN 2580
    0x5cd9ffdb2f10 ---------A   02500  IF A(C(W),D(W))=.5 THEN 2600
    0x5cd9ffdb35d0 ---------A T 02510  A(C(W),D(W))=10+C
    0x5cd9ffdb3700 ---------A   02520  NEXT W
    0x5cd9ffdb37a0 ---------A   02530  GOTO 2620
    0x5cd9ffdb3900 ---------A T 02540  PRINT "YOU HIT MY BATTLESHIP."
    0x5cd9ffdb3990 ---------A   02550  GOTO 2510
    0x5cd9ffdb3ae0 ---------A T 02560  PRINT "YOU HIT MY CRUISER."
    0x5cd9ffdb3b70 ---------A   02570  GOTO 2510
    0x5cd9ffdb3cd0 ---------A T 02580  PRINT "YOU HIT MY DESTROYER<A>."
    0x5cd9ffdb3d60 ---------A   02590  GOTO 2510
    0x5cd9ffdb3ec0 ---------A T 02600  PRINT "YOU HIT MY DESTROYER<B>."
    0x5cd9ffdb3f40 ---------A   02610  GOTO 2510
    0x5cd9ffdb4160 ---------A T 02620  A=0
    0x5cd9ffdb43d0 ---------A   02630  IF J$="YES" THEN 2670
    0x5cd9ffdb4710 ---------A   02640  C=C+1
    0x5cd9ffdb4780 ---------A   02650  PRINT
    0x5cd9ffdb49e0 ---------A   02660  PRINT "TURN";C
    0x5cd9ffdb4c10 ---------A T 02670  A=0
    0x5cd9ffdb4fa0 ---------A   02680  FOR W=.5 TO 3 STEP .5
    0x5cd9ffdb5280 ---------A   02690  FOR X=1 TO 10
    0x5cd9ffdb5570 ---------A   02700  FOR Y=1 TO 10
    0x5cd9ffdb59b0 ---------A   02710  IF A(X,Y)=W THEN 2750
    0x5cd9ffdb5af0 ---------A   02720  NEXT Y
    0x5cd9ffdb5c40 ---------A   02730  NEXT X
    0x5cd9ffdb5cd0 ---------A   02740  GOTO 2760
    0x5cd9ffdb6200 ---------A T 02750  A=A+INT(W+.5)
    0x5cd9ffdb6330 ---------A T 02760  NEXT W
    0x5cd9ffdb6560 ---------A   02770  P3=0
    0x5cd9ffdb6830 ---------A   02780  FOR X=1 TO 10
    0x5cd9ffdb6b20 ---------A   02790  FOR Y=1 TO 10
    0x5cd9ffdb6f40 ---------A   02800  IF A(X,Y)>10 THEN 2820
    0x5cd9ffdb7280 ---------A   02810  P3=P3+1
    0x5cd9ffdb73b0 ---------A T 02820  NEXT Y
    0x5cd9ffdb7500 ---------A   02830  NEXT X
    0x5cd9ffdb7880 ---------A   02840  PRINT "I HAVE";A;"SHOTS."
    0x5cd9ffdb7b20 ---------A   02850  IF P3>A THEN 2880
    0x5cd9ffdb7c90 ---------A   02860  PRINT "I HAVE MORE SHOTS THAN BLANK SQUARES."
    0x5cd9ffdb7d10 ---------A   02870  GOTO 2270
    0x5cd9ffdb7f70 ---------A T 02880  IF A<>0 THEN 2960
    0x5cd9ffdb80d0 ---------A T 02890  PRINT "YOU HAVE WON."
    0x5cd9ffdb8130 ---------A   02900  STOP
    0x5cd9ffdb8710 ---------B G 02910  X=INT(RND(1)*10+1)
    0x5cd9ffdb8ce0 ---------B   02920  Y=INT(RND(1)*10+1)
    0x5cd9ffdb92b0 ---------B   02930  V=INT(3*RND(1)-1)
    0x5cd9ffdb9880 ---------B   02940  V2=INT(3*RND(1)-1)
    0x5cd9ffdb98d0 ---------B   02950  RETURN
    0x5cd9ffdb9bc0 ---------A T 02960  FOR W=1 TO 12
    0x5cd9ffdb9f00 ---------A   02970  IF H(W)>0 THEN 3800
    0x5cd9ffdba040 ---------A   02980  NEXT W
    0x5cd9ffdba0f0 ---------A   02990  REM*******************RANDOM
    0x5cd9ffdba320 ---------A   03000  W=0
    0x5cd9ffdba5f0 ---------A T 03010  R3=0
    0x5cd9ffdba660 ---------A   03020  GOSUB 2910
    0x5cd9ffdba6d0 ---------A T 03030  RESTORE
    0x5cd9ffdba9a0 ---------A   03040  R2=0
    0x5cd9ffdbace0 ---------A   03050  R3=R3+1
    0x5cd9ffdbaf30 ---------A   03060  IF R3>100 THEN 3010
    0x5cd9ffdbb190 ---------A   03070  IF X>10 THEN 3110
    0x5cd9ffdbb400 ---------A   03080  IF X>0 THEN 3120
    0x5cd9ffdbb9e0 ---------A   03090  X=1+INT(RND(1)*2.5)
    0x5cd9ffdbba60 ---------A   03100  GOTO 3120
    0x5cd9ffdbc030 ---------A T 03110  X=10-INT(RND(1)*2.5)
    0x5cd9ffdbc280 ---------A T 03120  IF Y>10 THEN 3160
    0x5cd9ffdbc4f0 ---------A   03130  IF Y>0 THEN 3270
    0x5cd9ffdbcad0 ---------A   03140  Y=1+INT(RND(1)*2.5)
    0x5cd9ffdbcb50 ---------A   03150  GOTO 3270
    0x5cd9ffdbd120 ---------A T 03160  Y=10-INT(RND(1)*2.5)
    0x5cd9ffdbd190 ---------A   03170  GOTO 3270
    0x5cd9ffdbd4a0 ---------A T 03180  F(W)=X
    0x5cd9ffdbd7b0 ---------A   03190  G(W)=Y
    0x5cd9ffdbda20 ---------A   03200  IF W=A THEN 3380
    0x5cd9ffdbdc80 ---------A T 03210  IF R2=6 THEN 3030
    0x5cd9ffdbe040 ---------A   03220  READ X1,Y1
    0x5cd9ffdbe380 ---------A   03230  R2=R2+1
    0x5cd9ffdbee70 ---------A   03240  DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    0x5cd9ffdbf1c0 ---------A   03250  X=X+X1
    0x5cd9ffdbf510 ---------A   03260  Y=Y+Y1
    0x5cd9ffdbf760 ---------A T 03270  IF X>10 THEN 3210
    0x5cd9ffdbf9c0 ---------A   03280  IF X<1 THEN 3210
    0x5cd9ffdbfc20 ---------A   03290  IF Y>10 THEN 3210
    0x5cd9ffdbfe90 ---------A   03300  IF Y<1 THEN 3210
    0x5cd9ffdc02b0 ---------A   03310  IF B(X,Y)>10 THEN 3210
    0x5cd9ffdc0680 ---------A   03320  FOR Q9=1 TO W
    0x5cd9ffdc09f0 ---------A   03330  IF F(Q9)<>X THEN 3350
    0x5cd9ffdc0d50 ---------A   03340  IF G(Q9)=Y THEN 3210
    0x5cd9ffdc0e90 ---------A T 03350  NEXT Q9
    0x5cd9ffdc11e0 ---------A   03360  W=W+1
    0x5cd9ffdc1260 ---------A   03370  GOTO 3180
    0x5cd9ffdc14d0 ---------A T 03380  IF K$<>"YES" THEN 3420
    0x5cd9ffdc1890 ---------A   03390  FOR Z5=1 TO A
    0x5cd9ffdc1cb0 ---------A   03400  PRINT F(Z5);G(Z5)
    0x5cd9ffdc1df0 ---------A   03410  NEXT Z5
    0x5cd9ffdc2110 ---------A T 03420  FOR W=1 TO A
    0x5cd9ffdc2700 ---------A   03430  IF B(F(W),G(W))=3 THEN 3500
    0x5cd9ffdc2cf0 ---------A   03440  IF B(F(W),G(W))=2 THEN 3520
    0x5cd9ffdc32e0 ---------A   03450  IF B(F(W),G(W))=1 THEN 3560
    0x5cd9ffdc38c0 ---------A   03460  IF B(F(W),G(W))=.5 THEN 3540
    0x5cd9ffdc3f80 ---------A T 03470  B(F(W),G(W))=10+C
    0x5cd9ffdc40b0 ---------A   03480  NEXT W
    0x5cd9ffdc4150 ---------A   03490  GOTO 1950
    0x5cd9ffdc42a0 ---------A T 03500  PRINT "I HIT YOUR BATTLESHIP"
    0x5cd9ffdc4330 ---------A   03510  GOTO 3570
    0x5cd9ffdc4480 ---------A T 03520  PRINT "I HIT YOUR CRUISER"
    0x5cd9ffdc4510 ---------A   03530  GOTO 3570
    0x5cd9ffdc4670 ---------A T 03540  PRINT "I HIT YOUR DESTROYER<B>"
    0x5cd9ffdae1c0 ---------A   03550  GOTO 3570
    0x5cd9ffdae320 ---------A T 03560  PRINT "I HIT YOUR DESTROYER<A>"
    0x5cd9ffdae6d0 ---------A T 03570  FOR Q=1 TO 12
    0x5cd9ffdc5760 ---------A   03580  IF E(Q)<>-1 THEN 3730
    0x5cd9ffdc5b80 ---------A   03590  E(Q)=10+C
    0x5cd9ffdc6210 ---------A   03600  H(Q)=B(F(W),G(W))
    0x5cd9ffdc64e0 ---------A   03610  M3=0
    0x5cd9ffdc6880 ---------A   03620  FOR M2=1 TO 12
    0x5cd9ffdc6cc0 ---------A   03630  IF H(M2)<>H(Q) THEN 3650
    0x5cd9ffdc7000 ---------A   03640  M3=M3+1
    0x5cd9ffdc7130 ---------A T 03650  NEXT M2
    0x5cd9ffdc7d70 ---------A   03660  IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 3470
    0x5cd9ffdc8060 ---------A   03670  FOR M2=1 TO 12
    0x5cd9ffdc84a0 ---------A   03680  IF H(M2)<>H(Q) THEN 3710
    0x5cd9ffdc87a0 ---------A   03690  E(M2)=-1
    0x5cd9ffdc8a90 ---------A   03700  H(M2)=-1
    0x5cd9ffdc8bc0 ---------A T 03710  NEXT M2
    0x5cd9ffdc8c50 ---------A   03720  GOTO 3470
    0x5cd9ffdc8d80 ---------A T 03730  NEXT Q
    0x5cd9ffdc8f00 ---------A   03740  PRINT "PROGRAM ABORT:"
    0x5cd9ffdc91f0 ---------A   03750  FOR Q=1 TO 12
    0x5cd9ffdc9740 ---------A   03760  PRINT "E(";Q;") =";E(Q)
    0x5cd9ffdc9c80 ---------A   03770  PRINT "H(";Q;") =";H(Q)
    0x5cd9ffdc9dc0 ---------A   03780  NEXT Q
    0x5cd9ffdc9e30 ---------A   03790  STOP
    0x5cd9ffdc9ee0 ---------A T 03800  REM************************USINGEARRAY
    0x5cd9ffdca290 ---------A   03810  FOR R=1 TO 10
    0x5cd9ffdca630 ---------A   03820  FOR S=1 TO 10
    0x5cd9ffdcaa10 ---------A   03830  K(R,S)=0
    0x5cd9ffdcab40 ---------A   03840  NEXT S
    0x5cd9ffdcac90 ---------A   03850  NEXT R
    0x5cd9ffdcb050 ---------A   03860  FOR U=1 TO 12
    0x5cd9ffdcb390 ---------A   03870  IF E(U)<10 THEN 4020
    0x5cd9ffdcb670 ---------A   03880  FOR R=1 TO 10
    0x5cd9ffdcb960 ---------A   03890  FOR S=1 TO 10
    0x5cd9ffdcbd80 ---------A   03900  IF B(R,S)<10 THEN 3930
    0x5cd9ffdcc160 ---------A   03910  K(R,S)=-10000000
    0x5cd9ffdcc1e0 ---------A   03920  GOTO 4000
    0x5cd9ffdcc980 ---------A T 03930  FOR M=SGN(1-R) TO SGN(10-R)
    0x5cd9ffdcd130 ---------A   03940  FOR N=SGN(1-S) TO SGN(10-S)
    0x5cd9ffdcd700 ---------A   03950  IF N+M+N*M=0 THEN 3980
    0x5cd9ffdcde70 ---------A   03960  IF B(R+M,S+N)<>E(U) THEN 3980
    0x5cd9ffdceb30 ---------A   03970  K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
    0x5cd9ffdcec60 ---------A T 03980  NEXT N
    0x5cd9ffdcedb0 ---------A   03990  NEXT M
    0x5cd9ffdcef00 ---------A T 04000  NEXT S
    0x5cd9ffdcf050 ---------A   04010  NEXT R
    0x5cd9ffdcf1a0 ---------A T 04020  NEXT U
    0x5cd9ffdcf4b0 ---------A   04030  FOR R=1 TO A
    0x5cd9ffdcf7d0 ---------A   04040  F(R)=R
    0x5cd9ffdcfae0 ---------A   04050  G(R)=R
    0x5cd9ffdcfc10 ---------A   04060  NEXT R
    0x5cd9ffdcff00 ---------A   04070  FOR R=1 TO 10
    0x5cd9ffdd01e0 ---------A   04080  FOR S=1 TO 10
    0x5cd9ffdd0400 ---------A   04090  Q9=1
    0x5cd9ffdd0710 ---------A   04100  FOR M=1 TO A
    0x5cd9ffdd1090 ---------A   04110  IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 4130
    0x5cd9ffdd12d0 ---------A   04120  Q9=M
    0x5cd9ffdd1400 ---------A T 04130  NEXT M
    0x5cd9ffdd1690 ---------A   04131  IF R>A THEN 4140
    0x5cd9ffdd1920 ---------A   04132  IF R=S THEN 4210
    0x5cd9ffdd20e0 ---------A T 04140  IF K(R,S)<K(F(Q9),G(Q9)) THEN 4210
    0x5cd9ffdd23f0 ---------A   04150  FOR M=1 TO A
    0x5cd9ffdd2760 ---------A   04160  IF F(M)<>R THEN 4190
    0x5cd9ffdd2ac0 ---------A   04170  IF G(M)=S THEN 4210
    0x5cd9ffdd2c00 ---------A   04180  NEXT M
    0x5cd9ffdd2f30 ---------A T 04190  F(Q9)=R
    0x5cd9ffdd3240 ---------A   04200  G(Q9)=S
    0x5cd9ffdd3370 ---------A T 04210  NEXT S
    0x5cd9ffdd34c0 ---------A   04220  NEXT R
    0x5cd9ffdd3550 ---------A   04230  GOTO 3380
    0x5cd9ffdd35a0 ---------A   04240  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/salvo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cd9ffd8d6d0 ---------A   01000  PRINT TAB(33);"SALVO"
    0x5cd9ffd8d670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cd9ffd8efc0 ----------   01020  PRINT
    0x5cd9ffd8e2d0 ----------   01030  PRINT
    0x5cd9ffd8e910 ---------A   01040  PRINT
    0x5cd9ffd8eb80 ---------A   01050  REM
    0x5cd9ffd8fed0 ---------A   01060  DEF FNA(K)=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    0x5cd9ffd90050 ---------A   01070  DEF FNB(K)=K+INT(K/4)-SGN(K-1)
    0x5cd9ffd97b20 ---------A   01080  DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    0x5cd9ffd97df0 ---------A   01090  Z8=0
    0x5cd9ffd98180 ---------A   01100  FOR W=1 TO 12
    0x5cd9ffd8fe10 ---------A   01110  E(W)=-1
    0x5cd9ffd98720 ---------A   01120  H(W)=-1
    0x5cd9ffd98850 ---------A   01130  NEXT W
    0x5cd9ffd98c00 ---------A   01140  FOR X=1 TO 10
    0x5cd9ffd98fa0 ---------A   01150  FOR Y=1 TO 10
    0x5cd9ffd99380 ---------A   01160  B(X,Y)=0
    0x5cd9ffd994b0 ---------A   01170  NEXT Y
    0x5cd9ffd99600 ---------A   01180  NEXT X
    0x5cd9ffd998f0 ---------A T 01190  FOR X=1 TO 12
    0x5cd9ffd99bf0 ---------A   01200  F(X)=0
    0x5cd9ffd99ee0 ---------A   01210  G(X)=0
    0x5cd9ffd9a010 ---------A   01220  NEXT X
    0x5cd9ffd9a300 ---------A   01230  FOR X=1 TO 10
    0x5cd9ffd9a5e0 ---------A   01240  FOR Y=1 TO 10
    0x5cd9ffd9a9c0 ---------A   01250  A(X,Y)=0
    0x5cd9ffd9aaf0 ---------A T 01260  NEXT Y
    0x5cd9ffd9ac40 ---------A   01270  NEXT X
    0x5cd9ffd9afd0 ---------A   01280  FOR K=4 TO 1 STEP -1
    0x5cd9ffd9b2b0 ---------A   01290  U6=0
    0x5cd9ffd9b300 ---------A   01300  GOSUB 2950
    0x5cd9ffd9ba10 ---------A   01310  IF V+V2+V*V2=0 THEN 1300
    0x5cd9ffd9bf70 ---------A   01320  IF Y+V*FNB(K)>10 THEN 1300
    0x5cd9ffd9c4d0 ---------A   01330  IF Y+V*FNB(K)<1 THEN 1300
    0x5cd9ffd9ca30 ---------A   01340  IF X+V2*FNB(K)>10 THEN 1300
    0x5cd9ffd9d1c0 ---------A   01350  IF X+V2*FNB(K)<1 THEN 1300
    0x5cd9ffd9d500 ---------A   01360  U6=U6+1
    0x5cd9ffd9d750 ---------A   01370  IF U6>25 THEN 1230
    0x5cd9ffd9dbf0 ---------A   01380  FOR Z=0 TO FNB(K)
    0x5cd9ffd9e350 ---------A   01390  F(Z+FNA(K))=X+V2*Z
    0x5cd9ffd9eaa0 ---------A   01400  G(Z+FNA(K))=Y+V*Z
    0x5cd9ffd9ebd0 ---------A   01410  NEXT Z
    0x5cd9ffd9efd0 ---------A   01420  U8=FNA(K)
    0x5cd9ffd9f450 ---------A   01430  IF U8>U8+FNB(K) THEN 1500
    0x5cd9ffd9fa30 ---------A   01440  FOR Z2= U8 TO U8+FNB(K)
    0x5cd9ffd9fc90 ---------A T 01450  IF U8<2 THEN 1490
    0x5cd9ffda0180 ---------A T 01460  FOR Z3=1 TO U8-1
    0x5cd9ffda0e20 ---------A   01470  IF SQR((F(Z3)-F(Z2))^2 + (G(Z3)-G(Z2))^2) < 3.59 THEN 1300
    0x5cd9ffda0f60 ---------A   01480  NEXT Z3
    0x5cd9ffda10b0 ---------A   01490  NEXT Z2
    0x5cd9ffda14c0 ---------A   01500  FOR Z=0 TO FNB(K)
    0x5cd9ffda2200 ---------A   01510  A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
    0x5cd9ffda2330 ---------A   01520  NEXT Z
    0x5cd9ffda2480 ---------A   01530  NEXT K
    0x5cd9ffda2610 ---------A   01540  PRINT "ENTER COORDINATES FOR..."
    0x5cd9ffda2770 ---------A   01550  PRINT "BATTLESHIP"
    0x5cd9ffda2a50 ---------A   01560  FOR X=1 TO 5
    0x5cd9ffda2c90 ---------A   01570  INPUT Y,Z
    0x5cd9ffda3070 ---------A   01580  B(Y,Z)=3
    0x5cd9ffda31a0 ---------A   01590  NEXT X
    0x5cd9ffda3310 ---------A   01600  PRINT "CRUISER"
    0x5cd9ffda35f0 ---------A   01610  FOR X=1 TO 3
    0x5cd9ffda3830 ---------A   01620  INPUT Y,Z
    0x5cd9ffda3c10 ---------A   01630  B(Y,Z)=2
    0x5cd9ffda3d40 ---------A   01640  NEXT X
    0x5cd9ffda3ec0 ---------A   01650  PRINT "DESTROYER<A>"
    0x5cd9ffda41a0 ---------A   01660  FOR X=1 TO 2
    0x5cd9ffda47f0 ---------A   01670  INPUT Y,Z
    0x5cd9ffda4bd0 ---------A   01680  B(Y,Z)=1
    0x5cd9ffda4d00 ---------A   01690  NEXT X
    0x5cd9ffda4e80 ---------A   01700  PRINT "DESTROYER<B>"
    0x5cd9ffda5160 ---------A T 01710  FOR X=1 TO 2
    0x5cd9ffda53a0 ---------A   01720  INPUT Y,Z
    0x5cd9ffda5780 ---------A   01730  B(Y,Z)=.5
    0x5cd9ffda58b0 ---------A   01740  NEXT X
    0x5cd9ffda5a50 ---------A   01750  PRINT "DO YOU WANT TO START";
    0x5cd9ffda5c90 ---------A   01760  INPUT J$
    0x5cd9ffda5f10 ---------A   01770  IF J$<>"WHERE ARE YOUR SHIPS?" THEN 1930
    0x5cd9ffda6070 ---------A   01780  PRINT "BATTLESHIP"
    0x5cd9ffda6350 ---------A   01790  FOR Z=1 TO 5
    0x5cd9ffda6770 ---------A   01800  PRINT F(Z);G(Z)
    0x5cd9ffda68b0 ---------A   01810  NEXT Z
    0x5cd9ffda6a20 ---------A   01820  PRINT "CRUISER"
    0x5cd9ffda6e00 ---------A   01830  PRINT F(6);G(6)
    0x5cd9ffda71e0 ---------A   01840  PRINT F(7);G(7)
    0x5cd9ffda75d0 ---------A   01850  PRINT F(8);G(8)
    0x5cd9ffda7730 ---------A   01860  PRINT "DESTROYER<A>"
    0x5cd9ffda7b10 ---------A   01870  PRINT F(9);G(9)
    0x5cd9ffda7f00 ---------A   01880  PRINT F(10);G(10)
    0x5cd9ffda8060 ---------A T 01890  PRINT "DESTROYER<B>"
    0x5cd9ffda8440 ---------A   01900  PRINT F(11);G(11)
    0x5cd9ffda8820 ---------A   01910  PRINT F(12);G(12)
    0x5cd9ffda88a0 ---------A   01920  GOTO 1750
    0x5cd9ffda8ad0 ---------A   01930  C=0
    0x5cd9ffda8c50 ---------A   01940  PRINT "DO YOU WANT TO SEE MY SHOTS";
    0x5cd9ffda8e70 ---------A T 01950  INPUT K$
    0x5cd9ffda8f00 ---------A   01960  PRINT
    0x5cd9ffda9190 ---------A   01970  IF J$<>"YES" THEN 2660
    0x5cd9ffda9220 ---------A   01980  REM*******************START
    0x5cd9ffda94c0 ---------A T 01990  IF J$<>"YES" THEN 2030
    0x5cd9ffda9800 ---------A   02000  C=C+1
    0x5cd9ffda9870 ---------A   02010  PRINT
    0x5cd9ffda9ad0 ---------A   02020  PRINT "TURN";C
    0x5cd9ffda9d00 ---------A   02030  A=0
    0x5cd9ffdaa090 ---------A   02040  FOR W=.5 TO 3 STEP .5
    0x5cd9ffdaa370 ---------A   02050  FOR X=1 TO 10
    0x5cd9ffdaa660 ---------A   02060  FOR Y=1 TO 10
    0x5cd9ffdaaaa0 ---------A T 02070  IF B(X,Y)=W THEN 2110
    0x5cd9ffdaabe0 ---------A T 02080  NEXT Y
    0x5cd9ffdaad30 ---------A   02090  NEXT X
    0x5cd9ffdaadc0 ---------A   02100  GOTO 2120
    0x5cd9ffdab2f0 ---------A   02110  A=A+INT(W+.5)
    0x5cd9ffdab420 ---------A   02120  NEXT W
    0x5cd9ffdab710 ---------A   02130  FOR W=1 TO 7
    0x5cd9ffdaba10 ---------A   02140  C(W)=0
    0x5cd9ffdabd00 ---------A   02150  D(W)=0
    0x5cd9ffdabff0 ---------A   02160  F(W)=0
    0x5cd9ffdac2e0 ---------A   02170  G(W)=0
    0x5cd9ffdac410 ---------A   02180  NEXT W
    0x5cd9ffdac700 ---------A   02190  P3=0
    0x5cd9ffdac9d0 ---------A T 02200  FOR X=1 TO 10
    0x5cd9ffdaccc0 ---------A   02210  FOR Y=1 TO 10
    0x5cd9ffdad0e0 ---------A   02220  IF A(X,Y)>10 THEN 2240
    0x5cd9ffdad420 ---------A   02230  P3=P3+1
    0x5cd9ffdad550 ---------A   02240  NEXT Y
    0x5cd9ffdad6a0 ---------A   02250  NEXT X
    0x5cd9ffdada20 ---------A T 02260  PRINT "YOU HAVE";A;"SHOTS."
    0x5cd9ffdadcd0 ---------A T 02270  IF P3>=A THEN 2300
    0x5cd9ffdade50 ---------A   02280  PRINT "YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    0x5cd9ffdaded0 ---------A T 02290  GOTO 2930
    0x5cd9ffdae130 ---------A T 02300  IF A<>0 THEN 2330
    0x5cd9ffdaeaa0 ---------A   02310  PRINT "I HAVE WON."
    0x5cd9ffdaeb00 ---------A   02320  STOP
    0x5cd9ffdaee00 ---------A   02330  FOR W=1 TO A
    0x5cd9ffdaf050 ---------A   02340  INPUT X,Y
    0x5cd9ffdaf3b0 ---------A   02350  IF X<>INT(X) THEN 2410
    0x5cd9ffdaf610 ---------A   02360  IF X>10 THEN 2410
    0x5cd9ffdaf880 ---------A T 02370  IF X<1 THEN 2410
    0x5cd9ffdafbe0 ---------A   02380  IF Y<>INT(Y) THEN 2410
    0x5cd9ffdafe40 ---------A T 02390  IF Y>10 THEN 2410
    0x5cd9ffdb00b0 ---------A   02400  IF Y>=1 THEN 2430
    0x5cd9ffdb0210 ---------A   02410  PRINT "ILLEGAL, ENTER AGAIN."
    0x5cd9ffdb02a0 ---------A   02420  GOTO 2340
    0x5cd9ffdb06b0 ---------A   02430  IF A(X,Y)>10 THEN 2480
    0x5cd9ffdb09d0 ---------A T 02440  C(W)=X
    0x5cd9ffdb0ce0 ---------A   02450  D(W)=Y
    0x5cd9ffdb0e10 ---------A T 02460  NEXT W
    0x5cd9ffdb0ec0 ---------A   02470  GOTO 2500
    0x5cd9ffdb13e0 ---------A   02480  PRINT "YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    0x5cd9ffdb1460 ---------A   02490  GOTO 2340
    0x5cd9ffdb1760 ---------A   02500  FOR W=1 TO A
    0x5cd9ffdb1d50 ---------A T 02510  IF A(C(W),D(W))=3 THEN 2580
    0x5cd9ffdb2340 ---------A   02520  IF A(C(W),D(W))=2 THEN 2600
    0x5cd9ffdb2930 ---------A   02530  IF A(C(W),D(W))=1 THEN 2620
    0x5cd9ffdb2f10 ---------A T 02540  IF A(C(W),D(W))=.5 THEN 2640
    0x5cd9ffdb35d0 ---------A   02550  A(C(W),D(W))=10+C
    0x5cd9ffdb3700 ---------A T 02560  NEXT W
    0x5cd9ffdb37a0 ---------A   02570  GOTO 2660
    0x5cd9ffdb3900 ---------A T 02580  PRINT "YOU HIT MY BATTLESHIP."
    0x5cd9ffdb3990 ---------A   02590  GOTO 2550
    0x5cd9ffdb3ae0 ---------A T 02600  PRINT "YOU HIT MY CRUISER."
    0x5cd9ffdb3b70 ---------A   02610  GOTO 2550
    0x5cd9ffdb3cd0 ---------A T 02620  PRINT "YOU HIT MY DESTROYER<A>."
    0x5cd9ffdb3d60 ---------A   02630  GOTO 2550
    0x5cd9ffdb3ec0 ---------A   02640  PRINT "YOU HIT MY DESTROYER<B>."
    0x5cd9ffdb3f40 ---------A   02650  GOTO 2550
    0x5cd9ffdb4160 ---------A   02660  A=0
    0x5cd9ffdb43d0 ---------A T 02670  IF J$="YES" THEN 2710
    0x5cd9ffdb4710 ---------A   02680  C=C+1
    0x5cd9ffdb4780 ---------A   02690  PRINT
    0x5cd9ffdb49e0 ---------A   02700  PRINT "TURN";C
    0x5cd9ffdb4c10 ---------A   02710  A=0
    0x5cd9ffdb4fa0 ---------A   02720  FOR W=.5 TO 3 STEP .5
    0x5cd9ffdb5280 ---------A   02730  FOR X=1 TO 10
    0x5cd9ffdb5570 ---------A   02740  FOR Y=1 TO 10
    0x5cd9ffdb59b0 ---------A T 02750  IF A(X,Y)=W THEN 2790
    0x5cd9ffdb5af0 ---------A T 02760  NEXT Y
    0x5cd9ffdb5c40 ---------A   02770  NEXT X
    0x5cd9ffdb5cd0 ---------A   02780  GOTO 2800
    0x5cd9ffdb6200 ---------A   02790  A=A+INT(W+.5)
    0x5cd9ffdb6330 ---------A   02800  NEXT W
    0x5cd9ffdb6560 ---------A   02810  P3=0
    0x5cd9ffdb6830 ---------A T 02820  FOR X=1 TO 10
    0x5cd9ffdb6b20 ---------A   02830  FOR Y=1 TO 10
    0x5cd9ffdb6f40 ---------A   02840  IF A(X,Y)>10 THEN 2860
    0x5cd9ffdb7280 ---------A   02850  P3=P3+1
    0x5cd9ffdb73b0 ---------A   02860  NEXT Y
    0x5cd9ffdb7500 ---------A   02870  NEXT X
    0x5cd9ffdb7880 ---------A T 02880  PRINT "I HAVE";A;"SHOTS."
    0x5cd9ffdb7b20 ---------A T 02890  IF P3>A THEN 2920
    0x5cd9ffdb7c90 ---------A   02900  PRINT "I HAVE MORE SHOTS THAN BLANK SQUARES."
    0x5cd9ffdb7d10 ---------A G 02910  GOTO 2310
    0x5cd9ffdb7f70 ---------A   02920  IF A<>0 THEN 3000
    0x5cd9ffdb80d0 ---------A   02930  PRINT "YOU HAVE WON."
    0x5cd9ffdb8130 ---------A   02940  STOP
    0x5cd9ffdb8710 ---------B   02950  X=INT(RND(1)*10+1)
    0x5cd9ffdb8ce0 ---------B T 02960  Y=INT(RND(1)*10+1)
    0x5cd9ffdb92b0 ---------B   02970  V=INT(3*RND(1)-1)
    0x5cd9ffdb9880 ---------B   02980  V2=INT(3*RND(1)-1)
    0x5cd9ffdb98d0 ---------B   02990  RETURN
    0x5cd9ffdb9bc0 ---------A   03000  FOR W=1 TO 12
    0x5cd9ffdb9f00 ---------A T 03010  IF H(W)>0 THEN 3840
    0x5cd9ffdba040 ---------A   03020  NEXT W
    0x5cd9ffdba0f0 ---------A T 03030  REM*******************RANDOM
    0x5cd9ffdba320 ---------A   03040  W=0
    0x5cd9ffdba5f0 ---------A   03050  R3=0
    0x5cd9ffdba660 ---------A   03060  GOSUB 2950
    0x5cd9ffdba6d0 ---------A   03070  RESTORE
    0x5cd9ffdba9a0 ---------A   03080  R2=0
    0x5cd9ffdbace0 ---------A   03090  R3=R3+1
    0x5cd9ffdbaf30 ---------A   03100  IF R3>100 THEN 3050
    0x5cd9ffdbb190 ---------A T 03110  IF X>10 THEN 3150
    0x5cd9ffdbb400 ---------A T 03120  IF X>0 THEN 3160
    0x5cd9ffdbb9e0 ---------A   03130  X=1+INT(RND(1)*2.5)
    0x5cd9ffdbba60 ---------A   03140  GOTO 3160
    0x5cd9ffdbc030 ---------A   03150  X=10-INT(RND(1)*2.5)
    0x5cd9ffdbc280 ---------A T 03160  IF Y>10 THEN 3200
    0x5cd9ffdbc4f0 ---------A   03170  IF Y>0 THEN 3310
    0x5cd9ffdbcad0 ---------A T 03180  Y=1+INT(RND(1)*2.5)
    0x5cd9ffdbcb50 ---------A   03190  GOTO 3310
    0x5cd9ffdbd120 ---------A   03200  Y=10-INT(RND(1)*2.5)
    0x5cd9ffdbd190 ---------A T 03210  GOTO 3310
    0x5cd9ffdbd4a0 ---------A   03220  F(W)=X
    0x5cd9ffdbd7b0 ---------A   03230  G(W)=Y
    0x5cd9ffdbda20 ---------A   03240  IF W=A THEN 3420
    0x5cd9ffdbdc80 ---------A   03250  IF R2=6 THEN 3070
    0x5cd9ffdbe040 ---------A   03260  READ X1,Y1
    0x5cd9ffdbe380 ---------A T 03270  R2=R2+1
    0x5cd9ffdbee70 ---------A   03280  DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    0x5cd9ffdbf1c0 ---------A   03290  X=X+X1
    0x5cd9ffdbf510 ---------A   03300  Y=Y+Y1
    0x5cd9ffdbf760 ---------A   03310  IF X>10 THEN 3250
    0x5cd9ffdbf9c0 ---------A   03320  IF X<1 THEN 3250
    0x5cd9ffdbfc20 ---------A   03330  IF Y>10 THEN 3250
    0x5cd9ffdbfe90 ---------A   03340  IF Y<1 THEN 3250
    0x5cd9ffdc02b0 ---------A T 03350  IF B(X,Y)>10 THEN 3250
    0x5cd9ffdc0680 ---------A   03360  FOR Q9=1 TO W
    0x5cd9ffdc09f0 ---------A   03370  IF F(Q9)<>X THEN 3390
    0x5cd9ffdc0d50 ---------A T 03380  IF G(Q9)=Y THEN 3250
    0x5cd9ffdc0e90 ---------A   03390  NEXT Q9
    0x5cd9ffdc11e0 ---------A   03400  W=W+1
    0x5cd9ffdc1260 ---------A   03410  GOTO 3220
    0x5cd9ffdc14d0 ---------A T 03420  IF K$<>"YES" THEN 3460
    0x5cd9ffdc1890 ---------A   03430  FOR Z5=1 TO A
    0x5cd9ffdc1cb0 ---------A   03440  PRINT F(Z5);G(Z5)
    0x5cd9ffdc1df0 ---------A   03450  NEXT Z5
    0x5cd9ffdc2110 ---------A   03460  FOR W=1 TO A
    0x5cd9ffdc2700 ---------A T 03470  IF B(F(W),G(W))=3 THEN 3540
    0x5cd9ffdc2cf0 ---------A   03480  IF B(F(W),G(W))=2 THEN 3560
    0x5cd9ffdc32e0 ---------A   03490  IF B(F(W),G(W))=1 THEN 3600
    0x5cd9ffdc38c0 ---------A T 03500  IF B(F(W),G(W))=.5 THEN 3580
    0x5cd9ffdc3f80 ---------A   03510  B(F(W),G(W))=10+C
    0x5cd9ffdc40b0 ---------A T 03520  NEXT W
    0x5cd9ffdc4150 ---------A   03530  GOTO 1990
    0x5cd9ffdc42a0 ---------A T 03540  PRINT "I HIT YOUR BATTLESHIP"
    0x5cd9ffdc4330 ---------A   03550  GOTO 3610
    0x5cd9ffdc4480 ---------A T 03560  PRINT "I HIT YOUR CRUISER"
    0x5cd9ffdc4510 ---------A T 03570  GOTO 3610
    0x5cd9ffdc4670 ---------A   03580  PRINT "I HIT YOUR DESTROYER<B>"
    0x5cd9ffdae1c0 ---------A   03590  GOTO 3610
    0x5cd9ffdae320 ---------A   03600  PRINT "I HIT YOUR DESTROYER<A>"
    0x5cd9ffdae6d0 ---------A   03610  FOR Q=1 TO 12
    0x5cd9ffdc5760 ---------A   03620  IF E(Q)<>-1 THEN 3770
    0x5cd9ffdc5b80 ---------A   03630  E(Q)=10+C
    0x5cd9ffdc6210 ---------A   03640  H(Q)=B(F(W),G(W))
    0x5cd9ffdc64e0 ---------A T 03650  M3=0
    0x5cd9ffdc6880 ---------A   03660  FOR M2=1 TO 12
    0x5cd9ffdc6cc0 ---------A   03670  IF H(M2)<>H(Q) THEN 3690
    0x5cd9ffdc7000 ---------A   03680  M3=M3+1
    0x5cd9ffdc7130 ---------A   03690  NEXT M2
    0x5cd9ffdc7d70 ---------A   03700  IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 3510
    0x5cd9ffdc8060 ---------A T 03710  FOR M2=1 TO 12
    0x5cd9ffdc84a0 ---------A   03720  IF H(M2)<>H(Q) THEN 3750
    0x5cd9ffdc87a0 ---------A T 03730  E(M2)=-1
    0x5cd9ffdc8a90 ---------A   03740  H(M2)=-1
    0x5cd9ffdc8bc0 ---------A   03750  NEXT M2
    0x5cd9ffdc8c50 ---------A   03760  GOTO 3510
    0x5cd9ffdc8d80 ---------A   03770  NEXT Q
    0x5cd9ffdc8f00 ---------A   03780  PRINT "PROGRAM ABORT:"
    0x5cd9ffdc91f0 ---------A   03790  FOR Q=1 TO 12
    0x5cd9ffdc9740 ---------A T 03800  PRINT "E(";Q;") =";E(Q)
    0x5cd9ffdc9c80 ---------A   03810  PRINT "H(";Q;") =";H(Q)
    0x5cd9ffdc9dc0 ---------A   03820  NEXT Q
    0x5cd9ffdc9e30 ---------A   03830  STOP
    0x5cd9ffdc9ee0 ---------A   03840  REM************************USINGEARRAY
    0x5cd9ffdca290 ---------A   03850  FOR R=1 TO 10
    0x5cd9ffdca630 ---------A   03860  FOR S=1 TO 10
    0x5cd9ffdcaa10 ---------A   03870  K(R,S)=0
    0x5cd9ffdcab40 ---------A   03880  NEXT S
    0x5cd9ffdcac90 ---------A   03890  NEXT R
    0x5cd9ffdcb050 ---------A   03900  FOR U=1 TO 12
    0x5cd9ffdcb390 ---------A   03910  IF E(U)<10 THEN 4060
    0x5cd9ffdcb670 ---------A   03920  FOR R=1 TO 10
    0x5cd9ffdcb960 ---------A T 03930  FOR S=1 TO 10
    0x5cd9ffdcbd80 ---------A   03940  IF B(R,S)<10 THEN 3970
    0x5cd9ffdcc160 ---------A   03950  K(R,S)=-10000000
    0x5cd9ffdcc1e0 ---------A   03960  GOTO 4040
    0x5cd9ffdcc980 ---------A   03970  FOR M=SGN(1-R) TO SGN(10-R)
    0x5cd9ffdcd130 ---------A T 03980  FOR N=SGN(1-S) TO SGN(10-S)
    0x5cd9ffdcd700 ---------A   03990  IF N+M+N*M=0 THEN 4020
    0x5cd9ffdcde70 ---------A T 04000  IF B(R+M,S+N)<>E(U) THEN 4020
    0x5cd9ffdceb30 ---------A   04010  K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
    0x5cd9ffdcec60 ---------A T 04020  NEXT N
    0x5cd9ffdcedb0 ---------A   04030  NEXT M
    0x5cd9ffdcef00 ---------A   04040  NEXT S
    0x5cd9ffdcf050 ---------A   04050  NEXT R
    0x5cd9ffdcf1a0 ---------A   04060  NEXT U
    0x5cd9ffdcf4b0 ---------A   04070  FOR R=1 TO A
    0x5cd9ffdcf7d0 ---------A   04080  F(R)=R
    0x5cd9ffdcfae0 ---------A   04090  G(R)=R
    0x5cd9ffdcfc10 ---------A   04100  NEXT R
    0x5cd9ffdcff00 ---------A   04110  FOR R=1 TO 10
    0x5cd9ffdd01e0 ---------A   04120  FOR S=1 TO 10
    0x5cd9ffdd0400 ---------A T 04130  Q9=1
    0x5cd9ffdd0710 ---------A T 04140  FOR M=1 TO A
    0x5cd9ffdd1090 ---------A   04150  IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 4170
    0x5cd9ffdd12d0 ---------A   04160  Q9=M
    0x5cd9ffdd1400 ---------A   04170  NEXT M
    0x5cd9ffdd1690 ---------A   04180  IF R>A THEN 4200
    0x5cd9ffdd1920 ---------A T 04190  IF R=S THEN 4270
    0x5cd9ffdd20e0 ---------A   04200  IF K(R,S)<K(F(Q9),G(Q9)) THEN 4270
    0x5cd9ffdd23f0 ---------A T 04210  FOR M=1 TO A
    0x5cd9ffdd2760 ---------A   04220  IF F(M)<>R THEN 4250
    0x5cd9ffdd2ac0 ---------A   04230  IF G(M)=S THEN 4270
    0x5cd9ffdd2c00 ---------A   04240  NEXT M
    0x5cd9ffdd2f30 ---------A   04250  F(Q9)=R
    0x5cd9ffdd3240 ---------A   04260  G(Q9)=S
    0x5cd9ffdd3370 ---------A   04270  NEXT S
    0x5cd9ffdd34c0 ---------A   04280  NEXT R
    0x5cd9ffdd3550 ---------A   04290  GOTO 3420
    0x5cd9ffdd35a0 ---------A   04300  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     04320 - 10000    5690 

 */



/*
 *  Symbol Table Listing for 'basic/salvo.bas'
 *
    A               Array    Integer         {0,9} {0,9} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B               Array    Integer         {0,9} {0,9} 
    C               Array    Integer         {0,6} 
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D               Array    Integer         {0,6} 
    E               Array    Integer         {0,11} 
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F               Array    Integer         {0,11} 
    FIX             Function Integer         args=1, float  
    FNA             Array    Integer         {0,9} 
    FNB             Array    Integer         {0,9} 
    FRE             Function Integer         args=1, char*  
    G               Array    Integer         {0,11} 
    H               Array    Integer         {0,11} 
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J$                       String      
    K                        Integer     
    K$                       String      
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
    M2                       Integer     
    M3                       Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    OCT$            Function String          args=1, float  
    P3                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    Q9                       Integer     
    R                        Integer     
    R2                       Integer     
    R3                       Integer     
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
    U                        Integer     
    U6                       Integer     
    U8                       Integer     
    V                        Integer     
    V2                       Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     
    X                        Integer     
    X1                       Integer     
    Y                        Integer     
    Y1                       Integer     
    Z                        Integer     
    Z2                       Integer     
    Z3                       Integer     
    Z5                       Integer     
    Z8                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/salvo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cd9ffd8d6d0 ---------A   01000  PRINT TAB(33);"SALVO"
    0x5cd9ffd8d670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cd9ffd8efc0 ---------A   01020  PRINT
    0x5cd9ffd8e2d0 ---------A   01030  PRINT
    0x5cd9ffd8e910 ---------A   01040  PRINT
    0x5cd9ffd8eb80 ---------A   01050  REM
    0x5cd9ffd8fed0 ---------A   01060  DEF FNA(K)=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    0x5cd9ffd90050 ---------A   01070  DEF FNB(K)=K+INT(K/4)-SGN(K-1)
    0x5cd9ffd97b20 ---------A   01080  DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    0x5cd9ffd97df0 ---------A   01090  Z8=0
    0x5cd9ffd98180 ---------A   01100  FOR W=1 TO 12
    0x5cd9ffd8fe10 ---------A   01110  E(W)=-1
    0x5cd9ffd98720 ---------A   01120  H(W)=-1
    0x5cd9ffd98850 ---------A   01130  NEXT W
    0x5cd9ffd98c00 ---------A   01140  FOR X=1 TO 10
    0x5cd9ffd98fa0 ---------A   01150  FOR Y=1 TO 10
    0x5cd9ffd99380 ---------A   01160  B(X,Y)=0
    0x5cd9ffd994b0 ---------A   01170  NEXT Y
    0x5cd9ffd99600 ---------A   01180  NEXT X
    0x5cd9ffd998f0 ---------A   01190  FOR X=1 TO 12
    0x5cd9ffd99bf0 ---------A   01200  F(X)=0
    0x5cd9ffd99ee0 ---------A   01210  G(X)=0
    0x5cd9ffd9a010 ---------A   01220  NEXT X
    0x5cd9ffd9a300 ---------A T 01230  FOR X=1 TO 10
    0x5cd9ffd9a5e0 ---------A   01240  FOR Y=1 TO 10
    0x5cd9ffd9a9c0 ---------A   01250  A(X,Y)=0
    0x5cd9ffd9aaf0 ---------A   01260  NEXT Y
    0x5cd9ffd9ac40 ---------A   01270  NEXT X
    0x5cd9ffd9afd0 ---------A   01280  FOR K=4 TO 1 STEP -1
    0x5cd9ffd9b2b0 ---------A   01290  U6=0
    0x5cd9ffd9b300 ---------A T 01300  GOSUB 4260
    0x5cd9ffd9ba10 ---------A   01310  IF V+V2+V*V2=0 THEN 1300
    0x5cd9ffd9bf70 ---------A   01320  IF Y+V*FNB(K)>10 THEN 1300
    0x5cd9ffd9c4d0 ---------A   01330  IF Y+V*FNB(K)<1 THEN 1300
    0x5cd9ffd9ca30 ---------A   01340  IF X+V2*FNB(K)>10 THEN 1300
    0x5cd9ffd9d1c0 ---------A   01350  IF X+V2*FNB(K)<1 THEN 1300
    0x5cd9ffd9d500 ---------A   01360  U6=U6+1
    0x5cd9ffd9d750 ---------A   01370  IF U6>25 THEN 1230
    0x5cd9ffd9dbf0 ---------A   01380  FOR Z=0 TO FNB(K)
    0x5cd9ffd9e350 ---------A   01390  F(Z+FNA(K))=X+V2*Z
    0x5cd9ffd9eaa0 ---------A   01400  G(Z+FNA(K))=Y+V*Z
    0x5cd9ffd9ebd0 ---------A   01410  NEXT Z
    0x5cd9ffd9efd0 ---------A   01420  U8=FNA(K)
    0x5cd9ffd9f450 ---------A   01430  IF U8>U8+FNB(K) THEN 1500
    0x5cd9ffd9fa30 ---------A   01440  FOR Z2= U8 TO U8+FNB(K)
    0x5cd9ffd9fc90 ---------A   01450  IF U8<2 THEN 1490
    0x5cd9ffda0180 ---------A   01460  FOR Z3=1 TO U8-1
    0x5cd9ffda0e20 ---------A   01470  IF SQR((F(Z3)-F(Z2))^2 + (G(Z3)-G(Z2))^2) < 3.59 THEN 1300
    0x5cd9ffda0f60 ---------A   01480  NEXT Z3
    0x5cd9ffda10b0 ---------A T 01490  NEXT Z2
    0x5cd9ffda14c0 ---------A T 01500  FOR Z=0 TO FNB(K)
    0x5cd9ffda2200 ---------A   01510  A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
    0x5cd9ffda2330 ---------A   01520  NEXT Z
    0x5cd9ffda2480 ---------A   01530  NEXT K
    0x5cd9ffda2610 ---------A   01540  PRINT "ENTER COORDINATES FOR..."
    0x5cd9ffda2770 ---------A   01550  PRINT "BATTLESHIP"
    0x5cd9ffda2a50 ---------A   01560  FOR X=1 TO 5
    0x5cd9ffda2c90 ---------A   01570  INPUT Y,Z
    0x5cd9ffda3070 ---------A   01580  B(Y,Z)=3
    0x5cd9ffda31a0 ---------A   01590  NEXT X
    0x5cd9ffda3310 ---------A   01600  PRINT "CRUISER"
    0x5cd9ffda35f0 ---------A   01610  FOR X=1 TO 3
    0x5cd9ffda3830 ---------A   01620  INPUT Y,Z
    0x5cd9ffda3c10 ---------A   01630  B(Y,Z)=2
    0x5cd9ffda3d40 ---------A   01640  NEXT X
    0x5cd9ffda3ec0 ---------A   01650  PRINT "DESTROYER<A>"
    0x5cd9ffda41a0 ---------A   01660  FOR X=1 TO 2
    0x5cd9ffda47f0 ---------A   01670  INPUT Y,Z
    0x5cd9ffda4bd0 ---------A   01680  B(Y,Z)=1
    0x5cd9ffda4d00 ---------A   01690  NEXT X
    0x5cd9ffda4e80 ---------A   01700  PRINT "DESTROYER<B>"
    0x5cd9ffda5160 ---------A   01710  FOR X=1 TO 2
    0x5cd9ffda53a0 ---------A   01720  INPUT Y,Z
    0x5cd9ffda5780 ---------A   01730  B(Y,Z)=.5
    0x5cd9ffda58b0 ---------A   01740  NEXT X
    0x5cd9ffda5a50 ---------A T 01750  PRINT "DO YOU WANT TO START";
    0x5cd9ffda5c90 ---------A   01760  INPUT J$
    0x5cd9ffda5f10 ---------A   01770  IF J$<>"WHERE ARE YOUR SHIPS?" THEN 1930
    0x5cd9ffda6070 ---------A   01780  PRINT "BATTLESHIP"
    0x5cd9ffda6350 ---------A   01790  FOR Z=1 TO 5
    0x5cd9ffda6770 ---------A   01800  PRINT F(Z);G(Z)
    0x5cd9ffda68b0 ---------A   01810  NEXT Z
    0x5cd9ffda6a20 ---------A   01820  PRINT "CRUISER"
    0x5cd9ffda6e00 ---------A   01830  PRINT F(6);G(6)
    0x5cd9ffda71e0 ---------A   01840  PRINT F(7);G(7)
    0x5cd9ffda75d0 ---------A   01850  PRINT F(8);G(8)
    0x5cd9ffda7730 ---------A   01860  PRINT "DESTROYER<A>"
    0x5cd9ffda7b10 ---------A   01870  PRINT F(9);G(9)
    0x5cd9ffda7f00 ---------A   01880  PRINT F(10);G(10)
    0x5cd9ffda8060 ---------A   01890  PRINT "DESTROYER<B>"
    0x5cd9ffda8440 ---------A   01900  PRINT F(11);G(11)
    0x5cd9ffda8820 ---------A   01910  PRINT F(12);G(12)
    0x5cd9ffda88a0 ---------A   01920  GOTO 1750
    0x5cd9ffda8ad0 ---------A T 01930  C=0
    0x5cd9ffda8c50 ---------A   01940  PRINT "DO YOU WANT TO SEE MY SHOTS";
    0x5cd9ffda8e70 ---------A   01950  INPUT K$
    0x5cd9ffda8f00 ---------A   01960  PRINT
    0x5cd9ffda9190 ---------A   01970  IF J$<>"YES" THEN 2660
    0x5cd9ffda9220 ---------A   01980  REM*******************START
    0x5cd9ffda94c0 ---------A T 01990  IF J$<>"YES" THEN 2030
    0x5cd9ffda9800 ---------A   02000  C=C+1
    0x5cd9ffda9870 ---------A   02010  PRINT
    0x5cd9ffda9ad0 ---------A   02020  PRINT "TURN";C
    0x5cd9ffda9d00 ---------A T 02030  A=0
    0x5cd9ffdaa090 ---------A   02040  FOR W=.5 TO 3 STEP .5
    0x5cd9ffdaa370 ---------A   02050  FOR X=1 TO 10
    0x5cd9ffdaa660 ---------A   02060  FOR Y=1 TO 10
    0x5cd9ffdaaaa0 ---------A   02070  IF B(X,Y)=W THEN 2110
    0x5cd9ffdaabe0 ---------A   02080  NEXT Y
    0x5cd9ffdaad30 ---------A   02090  NEXT X
    0x5cd9ffdaadc0 ---------A   02100  GOTO 2120
    0x5cd9ffdab2f0 ---------A T 02110  A=A+INT(W+.5)
    0x5cd9ffdab420 ---------A T 02120  NEXT W
    0x5cd9ffdab710 ---------A   02130  FOR W=1 TO 7
    0x5cd9ffdaba10 ---------A   02140  C(W)=0
    0x5cd9ffdabd00 ---------A   02150  D(W)=0
    0x5cd9ffdabff0 ---------A   02160  F(W)=0
    0x5cd9ffdac2e0 ---------A   02170  G(W)=0
    0x5cd9ffdac410 ---------A   02180  NEXT W
    0x5cd9ffdac700 ---------A   02190  P3=0
    0x5cd9ffdac9d0 ---------A   02200  FOR X=1 TO 10
    0x5cd9ffdaccc0 ---------A   02210  FOR Y=1 TO 10
    0x5cd9ffdad0e0 ---------A   02220  IF A(X,Y)>10 THEN 2240
    0x5cd9ffdad420 ---------A   02230  P3=P3+1
    0x5cd9ffdad550 ---------A T 02240  NEXT Y
    0x5cd9ffdad6a0 ---------A   02250  NEXT X
    0x5cd9ffdada20 ---------A   02260  PRINT "YOU HAVE";A;"SHOTS."
    0x5cd9ffdadcd0 ---------A   02270  IF P3>=A THEN 2300
    0x5cd9ffdade50 ---------A   02280  PRINT "YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    0x5cd9ffdaded0 ---------A   02290  GOTO 2930
    0x5cd9ffdae130 ---------A T 02300  IF A<>0 THEN 2330
    0x5cd9ffdaeaa0 ---------A T 02310  PRINT "I HAVE WON."
    0x5cd9ffdaeb00 ---------A   02320  STOP
    0x5cd9ffdaee00 ---------A T 02330  FOR W=1 TO A
    0x5cd9ffdaf050 ---------A T 02340  INPUT X,Y
    0x5cd9ffdaf3b0 ---------A   02350  IF X<>INT(X) THEN 2410
    0x5cd9ffdaf610 ---------A   02360  IF X>10 THEN 2410
    0x5cd9ffdaf880 ---------A   02370  IF X<1 THEN 2410
    0x5cd9ffdafbe0 ---------A   02380  IF Y<>INT(Y) THEN 2410
    0x5cd9ffdafe40 ---------A   02390  IF Y>10 THEN 2410
    0x5cd9ffdb00b0 ---------A   02400  IF Y>=1 THEN 2430
    0x5cd9ffdb0210 ---------A T 02410  PRINT "ILLEGAL, ENTER AGAIN."
    0x5cd9ffdb02a0 ---------A   02420  GOTO 2340
    0x5cd9ffdb06b0 ---------A T 02430  IF A(X,Y)>10 THEN 2480
    0x5cd9ffdb09d0 ---------A   02440  C(W)=X
    0x5cd9ffdb0ce0 ---------A   02450  D(W)=Y
    0x5cd9ffdb0e10 ---------A   02460  NEXT W
    0x5cd9ffdb0ec0 ---------A   02470  GOTO 2500
    0x5cd9ffdb13e0 ---------A T 02480  PRINT "YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    0x5cd9ffdb1460 ---------A   02490  GOTO 2340
    0x5cd9ffdb1760 ---------A T 02500  FOR W=1 TO A
    0x5cd9ffdb1d50 ---------A   02510  IF A(C(W),D(W))=3 THEN 2580
    0x5cd9ffdb2340 ---------A   02520  IF A(C(W),D(W))=2 THEN 2600
    0x5cd9ffdb2930 ---------A   02530  IF A(C(W),D(W))=1 THEN 2620
    0x5cd9ffdb2f10 ---------A   02540  IF A(C(W),D(W))=.5 THEN 2640
    0x5cd9ffdb35d0 ---------A T 02550  A(C(W),D(W))=10+C
    0x5cd9ffdb3700 ---------A   02560  NEXT W
    0x5cd9ffdb37a0 ---------A   02570  GOTO 2660
    0x5cd9ffdb3900 ---------A T 02580  PRINT "YOU HIT MY BATTLESHIP."
    0x5cd9ffdb3990 ---------A   02590  GOTO 2550
    0x5cd9ffdb3ae0 ---------A T 02600  PRINT "YOU HIT MY CRUISER."
    0x5cd9ffdb3b70 ---------A   02610  GOTO 2550
    0x5cd9ffdb3cd0 ---------A T 02620  PRINT "YOU HIT MY DESTROYER<A>."
    0x5cd9ffdb3d60 ---------A   02630  GOTO 2550
    0x5cd9ffdb3ec0 ---------A T 02640  PRINT "YOU HIT MY DESTROYER<B>."
    0x5cd9ffdb3f40 ---------A   02650  GOTO 2550
    0x5cd9ffdb4160 ---------A T 02660  A=0
    0x5cd9ffdb43d0 ---------A   02670  IF J$="YES" THEN 2710
    0x5cd9ffdb4710 ---------A   02680  C=C+1
    0x5cd9ffdb4780 ---------A   02690  PRINT
    0x5cd9ffdb49e0 ---------A   02700  PRINT "TURN";C
    0x5cd9ffdb4c10 ---------A T 02710  A=0
    0x5cd9ffdb4fa0 ---------A   02720  FOR W=.5 TO 3 STEP .5
    0x5cd9ffdb5280 ---------A   02730  FOR X=1 TO 10
    0x5cd9ffdb5570 ---------A   02740  FOR Y=1 TO 10
    0x5cd9ffdb59b0 ---------A   02750  IF A(X,Y)=W THEN 2790
    0x5cd9ffdb5af0 ---------A   02760  NEXT Y
    0x5cd9ffdb5c40 ---------A   02770  NEXT X
    0x5cd9ffdb5cd0 ---------A   02780  GOTO 2800
    0x5cd9ffdb6200 ---------A T 02790  A=A+INT(W+.5)
    0x5cd9ffdb6330 ---------A T 02800  NEXT W
    0x5cd9ffdb6560 ---------A   02810  P3=0
    0x5cd9ffdb6830 ---------A   02820  FOR X=1 TO 10
    0x5cd9ffdb6b20 ---------A   02830  FOR Y=1 TO 10
    0x5cd9ffdb6f40 ---------A   02840  IF A(X,Y)>10 THEN 2860
    0x5cd9ffdb7280 ---------A   02850  P3=P3+1
    0x5cd9ffdb73b0 ---------A T 02860  NEXT Y
    0x5cd9ffdb7500 ---------A   02870  NEXT X
    0x5cd9ffdb7880 ---------A   02880  PRINT "I HAVE";A;"SHOTS."
    0x5cd9ffdb7b20 ---------A   02890  IF P3>A THEN 2920
    0x5cd9ffdb7c90 ---------A   02900  PRINT "I HAVE MORE SHOTS THAN BLANK SQUARES."
    0x5cd9ffdb7d10 ---------A   02910  GOTO 2310
    0x5cd9ffdb7f70 ---------A T 02920  IF A<>0 THEN 2950
    0x5cd9ffdb80d0 ---------A T 02930  PRINT "YOU HAVE WON."
    0x5cd9ffdb8130 ---------A   02940  STOP
    0x5cd9ffdb9bc0 ---------A T 02950  FOR W=1 TO 12
    0x5cd9ffdb9f00 ---------A   02960  IF H(W)>0 THEN 3790
    0x5cd9ffdba040 ---------A   02970  NEXT W
    0x5cd9ffdba0f0 ---------A   02980  REM*******************RANDOM
    0x5cd9ffdba320 ---------A   02990  W=0
    0x5cd9ffdba5f0 ---------A T 03000  R3=0
    0x5cd9ffdba660 ---------A   03010  GOSUB 4260
    0x5cd9ffdba6d0 ---------A T 03020  RESTORE
    0x5cd9ffdba9a0 ---------A   03030  R2=0
    0x5cd9ffdbace0 ---------A   03040  R3=R3+1
    0x5cd9ffdbaf30 ---------A   03050  IF R3>100 THEN 3000
    0x5cd9ffdbb190 ---------A   03060  IF X>10 THEN 3100
    0x5cd9ffdbb400 ---------A   03070  IF X>0 THEN 3110
    0x5cd9ffdbb9e0 ---------A   03080  X=1+INT(RND(1)*2.5)
    0x5cd9ffdbba60 ---------A   03090  GOTO 3110
    0x5cd9ffdbc030 ---------A T 03100  X=10-INT(RND(1)*2.5)
    0x5cd9ffdbc280 ---------A T 03110  IF Y>10 THEN 3150
    0x5cd9ffdbc4f0 ---------A   03120  IF Y>0 THEN 3260
    0x5cd9ffdbcad0 ---------A   03130  Y=1+INT(RND(1)*2.5)
    0x5cd9ffdbcb50 ---------A   03140  GOTO 3260
    0x5cd9ffdbd120 ---------A T 03150  Y=10-INT(RND(1)*2.5)
    0x5cd9ffdbd190 ---------A   03160  GOTO 3260
    0x5cd9ffdbd4a0 ---------A T 03170  F(W)=X
    0x5cd9ffdbd7b0 ---------A   03180  G(W)=Y
    0x5cd9ffdbda20 ---------A   03190  IF W=A THEN 3370
    0x5cd9ffdbdc80 ---------A T 03200  IF R2=6 THEN 3020
    0x5cd9ffdbe040 ---------A   03210  READ X1,Y1
    0x5cd9ffdbe380 ---------A   03220  R2=R2+1
    0x5cd9ffdbee70 ---------A   03230  DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    0x5cd9ffdbf1c0 ---------A   03240  X=X+X1
    0x5cd9ffdbf510 ---------A   03250  Y=Y+Y1
    0x5cd9ffdbf760 ---------A T 03260  IF X>10 THEN 3200
    0x5cd9ffdbf9c0 ---------A   03270  IF X<1 THEN 3200
    0x5cd9ffdbfc20 ---------A   03280  IF Y>10 THEN 3200
    0x5cd9ffdbfe90 ---------A   03290  IF Y<1 THEN 3200
    0x5cd9ffdc02b0 ---------A   03300  IF B(X,Y)>10 THEN 3200
    0x5cd9ffdc0680 ---------A   03310  FOR Q9=1 TO W
    0x5cd9ffdc09f0 ---------A   03320  IF F(Q9)<>X THEN 3340
    0x5cd9ffdc0d50 ---------A   03330  IF G(Q9)=Y THEN 3200
    0x5cd9ffdc0e90 ---------A T 03340  NEXT Q9
    0x5cd9ffdc11e0 ---------A   03350  W=W+1
    0x5cd9ffdc1260 ---------A   03360  GOTO 3170
    0x5cd9ffdc14d0 ---------A T 03370  IF K$<>"YES" THEN 3410
    0x5cd9ffdc1890 ---------A   03380  FOR Z5=1 TO A
    0x5cd9ffdc1cb0 ---------A   03390  PRINT F(Z5);G(Z5)
    0x5cd9ffdc1df0 ---------A   03400  NEXT Z5
    0x5cd9ffdc2110 ---------A T 03410  FOR W=1 TO A
    0x5cd9ffdc2700 ---------A   03420  IF B(F(W),G(W))=3 THEN 3490
    0x5cd9ffdc2cf0 ---------A   03430  IF B(F(W),G(W))=2 THEN 3510
    0x5cd9ffdc32e0 ---------A   03440  IF B(F(W),G(W))=1 THEN 3550
    0x5cd9ffdc38c0 ---------A   03450  IF B(F(W),G(W))=.5 THEN 3530
    0x5cd9ffdc3f80 ---------A T 03460  B(F(W),G(W))=10+C
    0x5cd9ffdc40b0 ---------A   03470  NEXT W
    0x5cd9ffdc4150 ---------A   03480  GOTO 1990
    0x5cd9ffdc42a0 ---------A T 03490  PRINT "I HIT YOUR BATTLESHIP"
    0x5cd9ffdc4330 ---------A   03500  GOTO 3560
    0x5cd9ffdc4480 ---------A T 03510  PRINT "I HIT YOUR CRUISER"
    0x5cd9ffdc4510 ---------A   03520  GOTO 3560
    0x5cd9ffdc4670 ---------A T 03530  PRINT "I HIT YOUR DESTROYER<B>"
    0x5cd9ffdae1c0 ---------A   03540  GOTO 3560
    0x5cd9ffdae320 ---------A T 03550  PRINT "I HIT YOUR DESTROYER<A>"
    0x5cd9ffdae6d0 ---------A T 03560  FOR Q=1 TO 12
    0x5cd9ffdc5760 ---------A   03570  IF E(Q)<>-1 THEN 3720
    0x5cd9ffdc5b80 ---------A   03580  E(Q)=10+C
    0x5cd9ffdc6210 ---------A   03590  H(Q)=B(F(W),G(W))
    0x5cd9ffdc64e0 ---------A   03600  M3=0
    0x5cd9ffdc6880 ---------A   03610  FOR M2=1 TO 12
    0x5cd9ffdc6cc0 ---------A   03620  IF H(M2)<>H(Q) THEN 3640
    0x5cd9ffdc7000 ---------A   03630  M3=M3+1
    0x5cd9ffdc7130 ---------A T 03640  NEXT M2
    0x5cd9ffdc7d70 ---------A   03650  IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 3460
    0x5cd9ffdc8060 ---------A   03660  FOR M2=1 TO 12
    0x5cd9ffdc84a0 ---------A   03670  IF H(M2)<>H(Q) THEN 3700
    0x5cd9ffdc87a0 ---------A   03680  E(M2)=-1
    0x5cd9ffdc8a90 ---------A   03690  H(M2)=-1
    0x5cd9ffdc8bc0 ---------A T 03700  NEXT M2
    0x5cd9ffdc8c50 ---------A   03710  GOTO 3460
    0x5cd9ffdc8d80 ---------A T 03720  NEXT Q
    0x5cd9ffdc8f00 ---------A   03730  PRINT "PROGRAM ABORT:"
    0x5cd9ffdc91f0 ---------A   03740  FOR Q=1 TO 12
    0x5cd9ffdc9740 ---------A   03750  PRINT "E(";Q;") =";E(Q)
    0x5cd9ffdc9c80 ---------A   03760  PRINT "H(";Q;") =";H(Q)
    0x5cd9ffdc9dc0 ---------A   03770  NEXT Q
    0x5cd9ffdc9e30 ---------A   03780  STOP
    0x5cd9ffdc9ee0 ---------A T 03790  REM************************USINGEARRAY
    0x5cd9ffdca290 ---------A   03800  FOR R=1 TO 10
    0x5cd9ffdca630 ---------A   03810  FOR S=1 TO 10
    0x5cd9ffdcaa10 ---------A   03820  K(R,S)=0
    0x5cd9ffdcab40 ---------A   03830  NEXT S
    0x5cd9ffdcac90 ---------A   03840  NEXT R
    0x5cd9ffdcb050 ---------A   03850  FOR U=1 TO 12
    0x5cd9ffdcb390 ---------A   03860  IF E(U)<10 THEN 4010
    0x5cd9ffdcb670 ---------A   03870  FOR R=1 TO 10
    0x5cd9ffdcb960 ---------A   03880  FOR S=1 TO 10
    0x5cd9ffdcbd80 ---------A   03890  IF B(R,S)<10 THEN 3920
    0x5cd9ffdcc160 ---------A   03900  K(R,S)=-10000000
    0x5cd9ffdcc1e0 ---------A   03910  GOTO 3990
    0x5cd9ffdcc980 ---------A T 03920  FOR M=SGN(1-R) TO SGN(10-R)
    0x5cd9ffdcd130 ---------A   03930  FOR N=SGN(1-S) TO SGN(10-S)
    0x5cd9ffdcd700 ---------A   03940  IF N+M+N*M=0 THEN 3970
    0x5cd9ffdcde70 ---------A   03950  IF B(R+M,S+N)<>E(U) THEN 3970
    0x5cd9ffdceb30 ---------A   03960  K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
    0x5cd9ffdcec60 ---------A T 03970  NEXT N
    0x5cd9ffdcedb0 ---------A   03980  NEXT M
    0x5cd9ffdcef00 ---------A T 03990  NEXT S
    0x5cd9ffdcf050 ---------A   04000  NEXT R
    0x5cd9ffdcf1a0 ---------A T 04010  NEXT U
    0x5cd9ffdcf4b0 ---------A   04020  FOR R=1 TO A
    0x5cd9ffdcf7d0 ---------A   04030  F(R)=R
    0x5cd9ffdcfae0 ---------A   04040  G(R)=R
    0x5cd9ffdcfc10 ---------A   04050  NEXT R
    0x5cd9ffdcff00 ---------A   04060  FOR R=1 TO 10
    0x5cd9ffdd01e0 ---------A   04070  FOR S=1 TO 10
    0x5cd9ffdd0400 ---------A   04080  Q9=1
    0x5cd9ffdd0710 ---------A   04090  FOR M=1 TO A
    0x5cd9ffdd1090 ---------A   04100  IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 4120
    0x5cd9ffdd12d0 ---------A   04110  Q9=M
    0x5cd9ffdd1400 ---------A T 04120  NEXT M
    0x5cd9ffdd1690 ---------A   04130  IF R>A THEN 4150
    0x5cd9ffdd1920 ---------A   04140  IF R=S THEN 4220
    0x5cd9ffdd20e0 ---------A T 04150  IF K(R,S)<K(F(Q9),G(Q9)) THEN 4220
    0x5cd9ffdd23f0 ---------A   04160  FOR M=1 TO A
    0x5cd9ffdd2760 ---------A   04170  IF F(M)<>R THEN 4200
    0x5cd9ffdd2ac0 ---------A   04180  IF G(M)=S THEN 4220
    0x5cd9ffdd2c00 ---------A   04190  NEXT M
    0x5cd9ffdd2f30 ---------A T 04200  F(Q9)=R
    0x5cd9ffdd3240 ---------A   04210  G(Q9)=S
    0x5cd9ffdd3370 ---------A T 04220  NEXT S
    0x5cd9ffdd34c0 ---------A   04230  NEXT R
    0x5cd9ffdd3550 ---------A   04240  GOTO 3370
    0x5cd9ffdd35a0 ---------A   04250  END
    0x5cd9ffdb8710 ---------B G 04260  X=INT(RND(1)*10+1)
    0x5cd9ffdb8ce0 ---------B   04270  Y=INT(RND(1)*10+1)
    0x5cd9ffdb92b0 ---------B   04280  V=INT(3*RND(1)-1)
    0x5cd9ffdb9880 ---------B   04290  V2=INT(3*RND(1)-1)
    0x5cd9ffdda240 ---------B   04300  GOTO 04310
    0x5cd9ffde66a0 ---------B T 04310  RETURN
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
char* data_03230s[]={"1","1","-1","1","1","-3","1","1","0","2","-1","1"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3230, 12,data_03230s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[10][10];                         // Basic: A 
int    B_int_arr[10][10];                         // Basic: B 
int    C_int_arr[7];                              // Basic: C 
int    D_int_arr[7];                              // Basic: D 
int    E_int_arr[12];                             // Basic: E 
int    F_int_arr[12];                             // Basic: F 
int    FNA_int_arr[10];                           // Basic: FNA 
int    FNB_int_arr[10];                           // Basic: FNB 
int    G_int_arr[12];                             // Basic: G 
int    H_int_arr[12];                             // Basic: H 
char*  J_str;                                     // Basic: J$ 
int    K_int;                                     // Basic: K 
char*  K_str;                                     // Basic: K$ 
int    M_int;                                     // Basic: M 
int    M2_int;                                    // Basic: M2 
int    M3_int;                                    // Basic: M3 
int    N_int;                                     // Basic: N 
int    P3_int;                                    // Basic: P3 
int    Q_int;                                     // Basic: Q 
int    Q9_int;                                    // Basic: Q9 
int    R_int;                                     // Basic: R 
int    R2_int;                                    // Basic: R2 
int    R3_int;                                    // Basic: R3 
int    S_int;                                     // Basic: S 
int    U_int;                                     // Basic: U 
int    U6_int;                                    // Basic: U6 
int    U8_int;                                    // Basic: U8 
int    V_int;                                     // Basic: V 
int    V2_int;                                    // Basic: V2 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    X1_int;                                    // Basic: X1 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Z_int;                                     // Basic: Z 
int    Z2_int;                                    // Basic: Z2 
int    Z3_int;                                    // Basic: Z3 
int    Z5_int;                                    // Basic: Z5 
int    Z8_int;                                    // Basic: Z8 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_04260();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused K
int FNA(int K){
    int rtn=(5-K_int)*3-2*INT(K_int/4)+SGN(K_int-1)-1;
    return(rtn);
}

#pragma argsused K
int FNB(int K){
    int rtn=K_int+INT(K_int/4)-SGN(K_int-1);
    return(rtn);
}

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

void Routine_04260(){
    // 04260 X=INT(RND(1)*10+1)
    X_int = INT(RND(1)*10+1);
    // 04270 Y=INT(RND(1)*10+1)
    Y_int = INT(RND(1)*10+1);
    // 04280 V=INT(3*RND(1)-1)
    V_int = INT(3*RND(1)-1);
    // 04290 V2=INT(3*RND(1)-1)
    V2_int = INT(3*RND(1)-1);
    // 04300 GOTO 04310
    goto Lbl_04310;

  Lbl_04310:
    // 04310 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"SALVO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"SALVO");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 REM
    // 01060 DEF FNA(K)=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    // 01070 DEF FNB(K)=K+INT(K/4)-SGN(K-1)
    // 01080 DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    // 01090 Z8=0
    Z8_int = 0;
    // 01100 FOR W=1 TO 12
    for(W_int=1;W_int<=12;W_int++){
        // 01110 E(W)=-1
        E_int_arr[W_int] = -1;
        // 01120 H(W)=-1
        H_int_arr[W_int] = -1;
        // 01130 NEXT W
        int dummy_1130=0; // Ignore this line.
    }; // End-For(W_int)
    // 01140 FOR X=1 TO 10
    for(X_int=1;X_int<=10;X_int++){
        // 01150 FOR Y=1 TO 10
        for(Y_int=1;Y_int<=10;Y_int++){
            // 01160 B(X,Y)=0
            B_int_arr[X_int][Y_int] = 0;
            // 01170 NEXT Y
            int dummy_1170=0; // Ignore this line.
        }; // End-For(Y_int)
        // 01180 NEXT X
        int dummy_1180=0; // Ignore this line.
    }; // End-For(X_int)
    // 01190 FOR X=1 TO 12
    for(X_int=1;X_int<=12;X_int++){
        // 01200 F(X)=0
        F_int_arr[X_int] = 0;
        // 01210 G(X)=0
        G_int_arr[X_int] = 0;
        // 01220 NEXT X
        int dummy_1220=0; // Ignore this line.
    }; // End-For(X_int)

  Lbl_01230:
    // 01230 FOR X=1 TO 10
    for(X_int=1;X_int<=10;X_int++){
        // 01240 FOR Y=1 TO 10
        for(Y_int=1;Y_int<=10;Y_int++){
            // 01250 A(X,Y)=0
            A_int_arr[X_int][Y_int] = 0;
            // 01260 NEXT Y
            int dummy_1260=0; // Ignore this line.
        }; // End-For(Y_int)
        // 01270 NEXT X
        int dummy_1270=0; // Ignore this line.
    }; // End-For(X_int)
    // 01280 FOR K=4 TO 1 STEP -1
    for(K_int=4;K_int>=1;K_int+=-1){
        // 01290 U6=0
        U6_int = 0;

  Lbl_01300:
        // 01300 GOSUB 4260
        Routine_04260();
        // 01310 IF V+V2+V*V2=0 THEN 1300
        if(V_int+V2_int+V_int*V2_int==0)goto Lbl_01300;
        // 01320 IF Y+V*FNB(K)>10 THEN 1300
        if(Y_int+V_int*FNB_int_arr[K_int]>10)goto Lbl_01300;
        // 01330 IF Y+V*FNB(K)<1 THEN 1300
        if(Y_int+V_int*FNB_int_arr[K_int]<1)goto Lbl_01300;
        // 01340 IF X+V2*FNB(K)>10 THEN 1300
        if(X_int+V2_int*FNB_int_arr[K_int]>10)goto Lbl_01300;
        // 01350 IF X+V2*FNB(K)<1 THEN 1300
        if(X_int+V2_int*FNB_int_arr[K_int]<1)goto Lbl_01300;
        // 01360 U6=U6+1
        U6_int = U6_int+1;
        // 01370 IF U6>25 THEN 1230
        if(U6_int>25)goto Lbl_01230;
        // 01380 FOR Z=0 TO FNB(K)
        for(Z_int=0;Z_int<=FNB_int_arr[K_int];Z_int++){
            // 01390 F(Z+FNA(K))=X+V2*Z
            F_int_arr[Z_int+FNA_int_arr[K_int]] = X_int+V2_int*Z_int;
            // 01400 G(Z+FNA(K))=Y+V*Z
            G_int_arr[Z_int+FNA_int_arr[K_int]] = Y_int+V_int*Z_int;
            // 01410 NEXT Z
            int dummy_1410=0; // Ignore this line.
        }; // End-For(Z_int)
        // 01420 U8=FNA(K)
        U8_int = FNA_int_arr[K_int];
        // 01430 IF U8>U8+FNB(K) THEN 1500
        if(U8_int>U8_int+FNB_int_arr[K_int])goto Lbl_01500;
        // 01440 FOR Z2= U8 TO U8+FNB(K)
        for(Z2_int=U8_int;Z2_int<=U8_int+FNB_int_arr[K_int];Z2_int++){
            // 01450 IF U8<2 THEN 1490
            if(U8_int<2)goto Lbl_01490;
            // 01460 FOR Z3=1 TO U8-1
            for(Z3_int=1;Z3_int<=U8_int-1;Z3_int++){
                // 01470 IF SQR((F(Z3)-F(Z2))^2 + (G(Z3)-G(Z2))^2) < 3.59 THEN 1300
                if(SQR(IPower((F_int_arr[Z3_int]-F_int_arr[Z2_int]),2)+IPower((G_int_arr[Z3_int]-G_int_arr[Z2_int]),2))<3.59)goto Lbl_01300;
                // 01480 NEXT Z3
                int dummy_1480=0; // Ignore this line.
            }; // End-For(Z3_int)

  Lbl_01490:
            // 01490 NEXT Z2
            int dummy_1490=0; // Ignore this line.
        }; // End-For(Z2_int)

  Lbl_01500:
        // 01500 FOR Z=0 TO FNB(K)
        for(Z_int=0;Z_int<=FNB_int_arr[K_int];Z_int++){
            // 01510 A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
            A_int_arr[F_int_arr[Z_int+U8_int]][G_int_arr[Z_int+U8_int]] = 0.5+SGN(K_int-1)*(K_int-1.5);
            // 01520 NEXT Z
            int dummy_1520=0; // Ignore this line.
        }; // End-For(Z_int)
        // 01530 NEXT K
        int dummy_1530=0; // Ignore this line.
    }; // End-For(K_int)
    // 01540 PRINT "ENTER COORDINATES FOR..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER COORDINATES FOR...");strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT "BATTLESHIP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BATTLESHIP");strcat(buf,"\n");fputs(buf,fh); };
    // 01560 FOR X=1 TO 5
    for(X_int=1;X_int<=5;X_int++){
        // 01570 INPUT Y,Z
        // Start of Basic INPUT statement 01570
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&Y_int,args,0)) ||
                    (err += b2c_strtoi(&Z_int,args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01570
        // 01580 B(Y,Z)=3
        B_int_arr[Y_int][Z_int] = 3;
        // 01590 NEXT X
        int dummy_1590=0; // Ignore this line.
    }; // End-For(X_int)
    // 01600 PRINT "CRUISER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CRUISER");strcat(buf,"\n");fputs(buf,fh); };
    // 01610 FOR X=1 TO 3
    for(X_int=1;X_int<=3;X_int++){
        // 01620 INPUT Y,Z
        // Start of Basic INPUT statement 01620
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&Y_int,args,0)) ||
                    (err += b2c_strtoi(&Z_int,args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01620
        // 01630 B(Y,Z)=2
        B_int_arr[Y_int][Z_int] = 2;
        // 01640 NEXT X
        int dummy_1640=0; // Ignore this line.
    }; // End-For(X_int)
    // 01650 PRINT "DESTROYER<A>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DESTROYER<A>");strcat(buf,"\n");fputs(buf,fh); };
    // 01660 FOR X=1 TO 2
    for(X_int=1;X_int<=2;X_int++){
        // 01670 INPUT Y,Z
        // Start of Basic INPUT statement 01670
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&Y_int,args,0)) ||
                    (err += b2c_strtoi(&Z_int,args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01670
        // 01680 B(Y,Z)=1
        B_int_arr[Y_int][Z_int] = 1;
        // 01690 NEXT X
        int dummy_1690=0; // Ignore this line.
    }; // End-For(X_int)
    // 01700 PRINT "DESTROYER<B>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DESTROYER<B>");strcat(buf,"\n");fputs(buf,fh); };
    // 01710 FOR X=1 TO 2
    for(X_int=1;X_int<=2;X_int++){
        // 01720 INPUT Y,Z
        // Start of Basic INPUT statement 01720
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&Y_int,args,0)) ||
                    (err += b2c_strtoi(&Z_int,args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01720
        // 01730 B(Y,Z)=.5
        B_int_arr[Y_int][Z_int] = 0.5;
        // 01740 NEXT X
        int dummy_1740=0; // Ignore this line.
    }; // End-For(X_int)

  Lbl_01750:
    // 01750 PRINT "DO YOU WANT TO START";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO START");fputs(buf,fh); };
    // 01760 INPUT J$
    // Start of Basic INPUT statement 01760
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&J_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01760
    // 01770 IF J$<>"WHERE ARE YOUR SHIPS?" THEN 1930
    if(strcmp(J_str,"WHERE ARE YOUR SHIPS?")!=0)goto Lbl_01930;
    // 01780 PRINT "BATTLESHIP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BATTLESHIP");strcat(buf,"\n");fputs(buf,fh); };
    // 01790 FOR Z=1 TO 5
    for(Z_int=1;Z_int<=5;Z_int++){
        // 01800 PRINT F(Z);G(Z)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int_arr[Z_int]); b2c_INT(buf,G_int_arr[Z_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 01810 NEXT Z
        int dummy_1810=0; // Ignore this line.
    }; // End-For(Z_int)
    // 01820 PRINT "CRUISER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CRUISER");strcat(buf,"\n");fputs(buf,fh); };
    // 01830 PRINT F(6);G(6)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int_arr[6]); b2c_INT(buf,G_int_arr[6]);strcat(buf,"\n");fputs(buf,fh); };
    // 01840 PRINT F(7);G(7)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int_arr[7]); b2c_INT(buf,G_int_arr[7]);strcat(buf,"\n");fputs(buf,fh); };
    // 01850 PRINT F(8);G(8)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int_arr[8]); b2c_INT(buf,G_int_arr[8]);strcat(buf,"\n");fputs(buf,fh); };
    // 01860 PRINT "DESTROYER<A>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DESTROYER<A>");strcat(buf,"\n");fputs(buf,fh); };
    // 01870 PRINT F(9);G(9)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int_arr[9]); b2c_INT(buf,G_int_arr[9]);strcat(buf,"\n");fputs(buf,fh); };
    // 01880 PRINT F(10);G(10)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int_arr[10]); b2c_INT(buf,G_int_arr[10]);strcat(buf,"\n");fputs(buf,fh); };
    // 01890 PRINT "DESTROYER<B>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DESTROYER<B>");strcat(buf,"\n");fputs(buf,fh); };
    // 01900 PRINT F(11);G(11)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int_arr[11]); b2c_INT(buf,G_int_arr[11]);strcat(buf,"\n");fputs(buf,fh); };
    // 01910 PRINT F(12);G(12)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int_arr[12]); b2c_INT(buf,G_int_arr[12]);strcat(buf,"\n");fputs(buf,fh); };
    // 01920 GOTO 1750
    goto Lbl_01750;

  Lbl_01930:
    // 01930 C=0
    C_int_arr[0] = 0;
    // 01940 PRINT "DO YOU WANT TO SEE MY SHOTS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO SEE MY SHOTS");fputs(buf,fh); };
    // 01950 INPUT K$
    // Start of Basic INPUT statement 01950
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&K_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01950
    // 01960 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01970 IF J$<>"YES" THEN 2660
    if(strcmp(J_str,"YES")!=0)goto Lbl_02660;
    // 01980 REM*******************START

  Lbl_01990:
    // 01990 IF J$<>"YES" THEN 2030
    if(strcmp(J_str,"YES")!=0)goto Lbl_02030;
    // 02000 C=C+1
    C_int_arr[0] = C_int_arr[0]+1;
    // 02010 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02020 PRINT "TURN";C
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TURN"); b2c_INT(buf,C_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02030:
    // 02030 A=0
    A_int_arr[0] = 0;
    // 02040 FOR W=.5 TO 3 STEP .5
    for(W_int=0.5;W_int<=3;W_int+=0.5){
        // 02050 FOR X=1 TO 10
        for(X_int=1;X_int<=10;X_int++){
            // 02060 FOR Y=1 TO 10
            for(Y_int=1;Y_int<=10;Y_int++){
                // 02070 IF B(X,Y)=W THEN 2110
                if(B_int_arr[X_int][Y_int]==W_int)goto Lbl_02110;
                // 02080 NEXT Y
                int dummy_2080=0; // Ignore this line.
            }; // End-For(Y_int)
            // 02090 NEXT X
            int dummy_2090=0; // Ignore this line.
        }; // End-For(X_int)
        // 02100 GOTO 2120
        goto Lbl_02120;

  Lbl_02110:
        // 02110 A=A+INT(W+.5)
        A_int_arr[0] = A_int_arr[0]+INT(W_int+0.5);

  Lbl_02120:
        // 02120 NEXT W
        int dummy_2120=0; // Ignore this line.
    }; // End-For(W_int)
    // 02130 FOR W=1 TO 7
    for(W_int=1;W_int<=7;W_int++){
        // 02140 C(W)=0
        C_int_arr[W_int] = 0;
        // 02150 D(W)=0
        D_int_arr[W_int] = 0;
        // 02160 F(W)=0
        F_int_arr[W_int] = 0;
        // 02170 G(W)=0
        G_int_arr[W_int] = 0;
        // 02180 NEXT W
        int dummy_2180=0; // Ignore this line.
    }; // End-For(W_int)
    // 02190 P3=0
    P3_int = 0;
    // 02200 FOR X=1 TO 10
    for(X_int=1;X_int<=10;X_int++){
        // 02210 FOR Y=1 TO 10
        for(Y_int=1;Y_int<=10;Y_int++){
            // 02220 IF A(X,Y)>10 THEN 2240
            if(A_int_arr[X_int][Y_int]>10)goto Lbl_02240;
            // 02230 P3=P3+1
            P3_int = P3_int+1;

  Lbl_02240:
            // 02240 NEXT Y
            int dummy_2240=0; // Ignore this line.
        }; // End-For(Y_int)
        // 02250 NEXT X
        int dummy_2250=0; // Ignore this line.
    }; // End-For(X_int)
    // 02260 PRINT "YOU HAVE";A;"SHOTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE"); b2c_INT(buf,A_int_arr[0]);strcat(buf,"SHOTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02270 IF P3>=A THEN 2300
    if(P3_int>=A_int_arr[0])goto Lbl_02300;
    // 02280 PRINT "YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES.");strcat(buf,"\n");fputs(buf,fh); };
    // 02290 GOTO 2930
    goto Lbl_02930;

  Lbl_02300:
    // 02300 IF A<>0 THEN 2330
    if(A_int_arr[0]!=0)goto Lbl_02330;

  Lbl_02310:
    // 02310 PRINT "I HAVE WON."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HAVE WON.");strcat(buf,"\n");fputs(buf,fh); };
    // 02320 STOP
    exit(1);

  Lbl_02330:
    // 02330 FOR W=1 TO A
    for(W_int=1;W_int<=A_int_arr[0];W_int++){

  Lbl_02340:
        // 02340 INPUT X,Y
        // Start of Basic INPUT statement 02340
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
        }; // End of Basic INPUT statement 02340
        // 02350 IF X<>INT(X) THEN 2410
        if(X_int!=INT(X_int))goto Lbl_02410;
        // 02360 IF X>10 THEN 2410
        if(X_int>10)goto Lbl_02410;
        // 02370 IF X<1 THEN 2410
        if(X_int<1)goto Lbl_02410;
        // 02380 IF Y<>INT(Y) THEN 2410
        if(Y_int!=INT(Y_int))goto Lbl_02410;
        // 02390 IF Y>10 THEN 2410
        if(Y_int>10)goto Lbl_02410;
        // 02400 IF Y>=1 THEN 2430
        if(Y_int>=1)goto Lbl_02430;

  Lbl_02410:
        // 02410 PRINT "ILLEGAL, ENTER AGAIN."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL, ENTER AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
        // 02420 GOTO 2340
        goto Lbl_02340;

  Lbl_02430:
        // 02430 IF A(X,Y)>10 THEN 2480
        if(A_int_arr[X_int][Y_int]>10)goto Lbl_02480;
        // 02440 C(W)=X
        C_int_arr[W_int] = X_int;
        // 02450 D(W)=Y
        D_int_arr[W_int] = Y_int;
        // 02460 NEXT W
        int dummy_2460=0; // Ignore this line.
    }; // End-For(W_int)
    // 02470 GOTO 2500
    goto Lbl_02500;

  Lbl_02480:
    // 02480 PRINT "YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU SHOT THERE BEFORE ON TURN"); b2c_INT(buf,A_int_arr[X_int][Y_int]-10);strcat(buf,"\n");fputs(buf,fh); };
    // 02490 GOTO 2340
    goto Lbl_02340;

  Lbl_02500:
    // 02500 FOR W=1 TO A
    for(W_int=1;W_int<=A_int_arr[0];W_int++){
        // 02510 IF A(C(W),D(W))=3 THEN 2580
        if(A_int_arr[C_int_arr[W_int]][D_int_arr[W_int]]==3)goto Lbl_02580;
        // 02520 IF A(C(W),D(W))=2 THEN 2600
        if(A_int_arr[C_int_arr[W_int]][D_int_arr[W_int]]==2)goto Lbl_02600;
        // 02530 IF A(C(W),D(W))=1 THEN 2620
        if(A_int_arr[C_int_arr[W_int]][D_int_arr[W_int]]==1)goto Lbl_02620;
        // 02540 IF A(C(W),D(W))=.5 THEN 2640
        if(A_int_arr[C_int_arr[W_int]][D_int_arr[W_int]]==0.5)goto Lbl_02640;

  Lbl_02550:
        // 02550 A(C(W),D(W))=10+C
        A_int_arr[C_int_arr[W_int]][D_int_arr[W_int]] = 10+C_int_arr[0];
        // 02560 NEXT W
        int dummy_2560=0; // Ignore this line.
    }; // End-For(W_int)
    // 02570 GOTO 2660
    goto Lbl_02660;

  Lbl_02580:
    // 02580 PRINT "YOU HIT MY BATTLESHIP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HIT MY BATTLESHIP.");strcat(buf,"\n");fputs(buf,fh); };
    // 02590 GOTO 2550
    goto Lbl_02550;

  Lbl_02600:
    // 02600 PRINT "YOU HIT MY CRUISER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HIT MY CRUISER.");strcat(buf,"\n");fputs(buf,fh); };
    // 02610 GOTO 2550
    goto Lbl_02550;

  Lbl_02620:
    // 02620 PRINT "YOU HIT MY DESTROYER<A>."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HIT MY DESTROYER<A>.");strcat(buf,"\n");fputs(buf,fh); };
    // 02630 GOTO 2550
    goto Lbl_02550;

  Lbl_02640:
    // 02640 PRINT "YOU HIT MY DESTROYER<B>."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HIT MY DESTROYER<B>.");strcat(buf,"\n");fputs(buf,fh); };
    // 02650 GOTO 2550
    goto Lbl_02550;

  Lbl_02660:
    // 02660 A=0
    A_int_arr[0] = 0;
    // 02670 IF J$="YES" THEN 2710
    if(strcmp(J_str,"YES")==0)goto Lbl_02710;
    // 02680 C=C+1
    C_int_arr[0] = C_int_arr[0]+1;
    // 02690 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02700 PRINT "TURN";C
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TURN"); b2c_INT(buf,C_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02710:
    // 02710 A=0
    A_int_arr[0] = 0;
    // 02720 FOR W=.5 TO 3 STEP .5
    for(W_int=0.5;W_int<=3;W_int+=0.5){
        // 02730 FOR X=1 TO 10
        for(X_int=1;X_int<=10;X_int++){
            // 02740 FOR Y=1 TO 10
            for(Y_int=1;Y_int<=10;Y_int++){
                // 02750 IF A(X,Y)=W THEN 2790
                if(A_int_arr[X_int][Y_int]==W_int)goto Lbl_02790;
                // 02760 NEXT Y
                int dummy_2760=0; // Ignore this line.
            }; // End-For(Y_int)
            // 02770 NEXT X
            int dummy_2770=0; // Ignore this line.
        }; // End-For(X_int)
        // 02780 GOTO 2800
        goto Lbl_02800;

  Lbl_02790:
        // 02790 A=A+INT(W+.5)
        A_int_arr[0] = A_int_arr[0]+INT(W_int+0.5);

  Lbl_02800:
        // 02800 NEXT W
        int dummy_2800=0; // Ignore this line.
    }; // End-For(W_int)
    // 02810 P3=0
    P3_int = 0;
    // 02820 FOR X=1 TO 10
    for(X_int=1;X_int<=10;X_int++){
        // 02830 FOR Y=1 TO 10
        for(Y_int=1;Y_int<=10;Y_int++){
            // 02840 IF A(X,Y)>10 THEN 2860
            if(A_int_arr[X_int][Y_int]>10)goto Lbl_02860;
            // 02850 P3=P3+1
            P3_int = P3_int+1;

  Lbl_02860:
            // 02860 NEXT Y
            int dummy_2860=0; // Ignore this line.
        }; // End-For(Y_int)
        // 02870 NEXT X
        int dummy_2870=0; // Ignore this line.
    }; // End-For(X_int)
    // 02880 PRINT "I HAVE";A;"SHOTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HAVE"); b2c_INT(buf,A_int_arr[0]);strcat(buf,"SHOTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02890 IF P3>A THEN 2920
    if(P3_int>A_int_arr[0])goto Lbl_02920;
    // 02900 PRINT "I HAVE MORE SHOTS THAN BLANK SQUARES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HAVE MORE SHOTS THAN BLANK SQUARES.");strcat(buf,"\n");fputs(buf,fh); };
    // 02910 GOTO 2310
    goto Lbl_02310;

  Lbl_02920:
    // 02920 IF A<>0 THEN 2950
    if(A_int_arr[0]!=0)goto Lbl_02950;

  Lbl_02930:
    // 02930 PRINT "YOU HAVE WON."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE WON.");strcat(buf,"\n");fputs(buf,fh); };
    // 02940 STOP
    exit(1);

  Lbl_02950:
    // 02950 FOR W=1 TO 12
    for(W_int=1;W_int<=12;W_int++){
        // 02960 IF H(W)>0 THEN 3790
        if(H_int_arr[W_int]>0)goto Lbl_03790;
        // 02970 NEXT W
        int dummy_2970=0; // Ignore this line.
    }; // End-For(W_int)
    // 02980 REM*******************RANDOM
    // 02990 W=0
    W_int = 0;

  Lbl_03000:
    // 03000 R3=0
    R3_int = 0;
    // 03010 GOSUB 4260
    Routine_04260();

  Lbl_03020:
    // 03020 RESTORE
    Data_Index=0;
    RestoreData(0);
    // 03030 R2=0
    R2_int = 0;
    // 03040 R3=R3+1
    R3_int = R3_int+1;
    // 03050 IF R3>100 THEN 3000
    if(R3_int>100)goto Lbl_03000;
    // 03060 IF X>10 THEN 3100
    if(X_int>10)goto Lbl_03100;
    // 03070 IF X>0 THEN 3110
    if(X_int>0)goto Lbl_03110;
    // 03080 X=1+INT(RND(1)*2.5)
    X_int = 1+INT(RND(1)*2.5);
    // 03090 GOTO 3110
    goto Lbl_03110;

  Lbl_03100:
    // 03100 X=10-INT(RND(1)*2.5)
    X_int = 10-INT(RND(1)*2.5);

  Lbl_03110:
    // 03110 IF Y>10 THEN 3150
    if(Y_int>10)goto Lbl_03150;
    // 03120 IF Y>0 THEN 3260
    if(Y_int>0)goto Lbl_03260;
    // 03130 Y=1+INT(RND(1)*2.5)
    Y_int = 1+INT(RND(1)*2.5);
    // 03140 GOTO 3260
    goto Lbl_03260;

  Lbl_03150:
    // 03150 Y=10-INT(RND(1)*2.5)
    Y_int = 10-INT(RND(1)*2.5);
    // 03160 GOTO 3260
    goto Lbl_03260;

  Lbl_03170:
    // 03170 F(W)=X
    F_int_arr[W_int] = X_int;
    // 03180 G(W)=Y
    G_int_arr[W_int] = Y_int;
    // 03190 IF W=A THEN 3370
    if(W_int==A_int_arr[0])goto Lbl_03370;

  Lbl_03200:
    // 03200 IF R2=6 THEN 3020
    if(R2_int==6)goto Lbl_03020;
    // 03210 READ X1,Y1
    X1_int = Get_Data_Int();
    Y1_int = Get_Data_Int();
    // 03220 R2=R2+1
    R2_int = R2_int+1;
    // 03230 DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    // 03240 X=X+X1
    X_int = X_int+X1_int;
    // 03250 Y=Y+Y1
    Y_int = Y_int+Y1_int;

  Lbl_03260:
    // 03260 IF X>10 THEN 3200
    if(X_int>10)goto Lbl_03200;
    // 03270 IF X<1 THEN 3200
    if(X_int<1)goto Lbl_03200;
    // 03280 IF Y>10 THEN 3200
    if(Y_int>10)goto Lbl_03200;
    // 03290 IF Y<1 THEN 3200
    if(Y_int<1)goto Lbl_03200;
    // 03300 IF B(X,Y)>10 THEN 3200
    if(B_int_arr[X_int][Y_int]>10)goto Lbl_03200;
    // 03310 FOR Q9=1 TO W
    for(Q9_int=1;Q9_int<=W_int;Q9_int++){
        // 03320 IF F(Q9)<>X THEN 3340
        if(F_int_arr[Q9_int]!=X_int)goto Lbl_03340;
        // 03330 IF G(Q9)=Y THEN 3200
        if(G_int_arr[Q9_int]==Y_int)goto Lbl_03200;

  Lbl_03340:
        // 03340 NEXT Q9
        int dummy_3340=0; // Ignore this line.
    }; // End-For(Q9_int)
    // 03350 W=W+1
    W_int = W_int+1;
    // 03360 GOTO 3170
    goto Lbl_03170;

  Lbl_03370:
    // 03370 IF K$<>"YES" THEN 3410
    if(strcmp(K_str,"YES")!=0)goto Lbl_03410;
    // 03380 FOR Z5=1 TO A
    for(Z5_int=1;Z5_int<=A_int_arr[0];Z5_int++){
        // 03390 PRINT F(Z5);G(Z5)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int_arr[Z5_int]); b2c_INT(buf,G_int_arr[Z5_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 03400 NEXT Z5
        int dummy_3400=0; // Ignore this line.
    }; // End-For(Z5_int)

  Lbl_03410:
    // 03410 FOR W=1 TO A
    for(W_int=1;W_int<=A_int_arr[0];W_int++){
        // 03420 IF B(F(W),G(W))=3 THEN 3490
        if(B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]]==3)goto Lbl_03490;
        // 03430 IF B(F(W),G(W))=2 THEN 3510
        if(B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]]==2)goto Lbl_03510;
        // 03440 IF B(F(W),G(W))=1 THEN 3550
        if(B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]]==1)goto Lbl_03550;
        // 03450 IF B(F(W),G(W))=.5 THEN 3530
        if(B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]]==0.5)goto Lbl_03530;

  Lbl_03460:
        // 03460 B(F(W),G(W))=10+C
        B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]] = 10+C_int_arr[0];
        // 03470 NEXT W
        int dummy_3470=0; // Ignore this line.
    }; // End-For(W_int)
    // 03480 GOTO 1990
    goto Lbl_01990;

  Lbl_03490:
    // 03490 PRINT "I HIT YOUR BATTLESHIP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HIT YOUR BATTLESHIP");strcat(buf,"\n");fputs(buf,fh); };
    // 03500 GOTO 3560
    goto Lbl_03560;

  Lbl_03510:
    // 03510 PRINT "I HIT YOUR CRUISER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HIT YOUR CRUISER");strcat(buf,"\n");fputs(buf,fh); };
    // 03520 GOTO 3560
    goto Lbl_03560;

  Lbl_03530:
    // 03530 PRINT "I HIT YOUR DESTROYER<B>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HIT YOUR DESTROYER<B>");strcat(buf,"\n");fputs(buf,fh); };
    // 03540 GOTO 3560
    goto Lbl_03560;

  Lbl_03550:
    // 03550 PRINT "I HIT YOUR DESTROYER<A>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HIT YOUR DESTROYER<A>");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03560:
    // 03560 FOR Q=1 TO 12
    for(Q_int=1;Q_int<=12;Q_int++){
        // 03570 IF E(Q)<>-1 THEN 3720
        if(E_int_arr[Q_int]!=-1)goto Lbl_03720;
        // 03580 E(Q)=10+C
        E_int_arr[Q_int] = 10+C_int_arr[0];
        // 03590 H(Q)=B(F(W),G(W))
        H_int_arr[Q_int] = B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]];
        // 03600 M3=0
        M3_int = 0;
        // 03610 FOR M2=1 TO 12
        for(M2_int=1;M2_int<=12;M2_int++){
            // 03620 IF H(M2)<>H(Q) THEN 3640
            if(H_int_arr[M2_int]!=H_int_arr[Q_int])goto Lbl_03640;
            // 03630 M3=M3+1
            M3_int = M3_int+1;

  Lbl_03640:
            // 03640 NEXT M2
            int dummy_3640=0; // Ignore this line.
        }; // End-For(M2_int)
        // 03650 IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 3460
        if(M3_int!=INT(H_int_arr[Q_int]+0.5)+1+INT(INT(H_int_arr[Q_int]+0.5)/3))goto Lbl_03460;
        // 03660 FOR M2=1 TO 12
        for(M2_int=1;M2_int<=12;M2_int++){
            // 03670 IF H(M2)<>H(Q) THEN 3700
            if(H_int_arr[M2_int]!=H_int_arr[Q_int])goto Lbl_03700;
            // 03680 E(M2)=-1
            E_int_arr[M2_int] = -1;
            // 03690 H(M2)=-1
            H_int_arr[M2_int] = -1;

  Lbl_03700:
            // 03700 NEXT M2
            int dummy_3700=0; // Ignore this line.
        }; // End-For(M2_int)
        // 03710 GOTO 3460
        goto Lbl_03460;

  Lbl_03720:
        // 03720 NEXT Q
        int dummy_3720=0; // Ignore this line.
    }; // End-For(Q_int)
    // 03730 PRINT "PROGRAM ABORT:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PROGRAM ABORT:");strcat(buf,"\n");fputs(buf,fh); };
    // 03740 FOR Q=1 TO 12
    for(Q_int=1;Q_int<=12;Q_int++){
        // 03750 PRINT "E(";Q;") =";E(Q)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"E("); b2c_INT(buf,Q_int);strcat(buf,") ="); b2c_INT(buf,E_int_arr[Q_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 03760 PRINT "H(";Q;") =";H(Q)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"H("); b2c_INT(buf,Q_int);strcat(buf,") ="); b2c_INT(buf,H_int_arr[Q_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 03770 NEXT Q
        int dummy_3770=0; // Ignore this line.
    }; // End-For(Q_int)
    // 03780 STOP
    exit(1);

  Lbl_03790:
    // 03790 REM************************USINGEARRAY
    // 03800 FOR R=1 TO 10
    for(R_int=1;R_int<=10;R_int++){
        // 03810 FOR S=1 TO 10
        for(S_int=1;S_int<=10;S_int++){
            // 03820 K(R,S)=0
            K_int = 0;
            // 03830 NEXT S
            int dummy_3830=0; // Ignore this line.
        }; // End-For(S_int)
        // 03840 NEXT R
        int dummy_3840=0; // Ignore this line.
    }; // End-For(R_int)
    // 03850 FOR U=1 TO 12
    for(U_int=1;U_int<=12;U_int++){
        // 03860 IF E(U)<10 THEN 4010
        if(E_int_arr[U_int]<10)goto Lbl_04010;
        // 03870 FOR R=1 TO 10
        for(R_int=1;R_int<=10;R_int++){
            // 03880 FOR S=1 TO 10
            for(S_int=1;S_int<=10;S_int++){
                // 03890 IF B(R,S)<10 THEN 3920
                if(B_int_arr[R_int][S_int]<10)goto Lbl_03920;
                // 03900 K(R,S)=-10000000
                K_int = -10000000;
                // 03910 GOTO 3990
                goto Lbl_03990;

  Lbl_03920:
                // 03920 FOR M=SGN(1-R) TO SGN(10-R)
                for(M_int=SGN(1-R_int);M_int<=SGN(10-R_int);M_int++){
                    // 03930 FOR N=SGN(1-S) TO SGN(10-S)
                    for(N_int=SGN(1-S_int);N_int<=SGN(10-S_int);N_int++){
                        // 03940 IF N+M+N*M=0 THEN 3970
                        if(N_int+M_int+N_int*M_int==0)goto Lbl_03970;
                        // 03950 IF B(R+M,S+N)<>E(U) THEN 3970
                        if(B_int_arr[R_int+M_int][S_int+N_int]!=E_int_arr[U_int])goto Lbl_03970;
                        // 03960 K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
                        K_int = K_int+E_int_arr[U_int]-S_int*INT(H_int_arr[U_int]+0.5);

  Lbl_03970:
                        // 03970 NEXT N
                        int dummy_3970=0; // Ignore this line.
                    }; // End-For(N_int)
                    // 03980 NEXT M
                    int dummy_3980=0; // Ignore this line.
                }; // End-For(M_int)

  Lbl_03990:
                // 03990 NEXT S
                int dummy_3990=0; // Ignore this line.
            }; // End-For(S_int)
            // 04000 NEXT R
            int dummy_4000=0; // Ignore this line.
        }; // End-For(R_int)

  Lbl_04010:
        // 04010 NEXT U
        int dummy_4010=0; // Ignore this line.
    }; // End-For(U_int)
    // 04020 FOR R=1 TO A
    for(R_int=1;R_int<=A_int_arr[0];R_int++){
        // 04030 F(R)=R
        F_int_arr[R_int] = R_int;
        // 04040 G(R)=R
        G_int_arr[R_int] = R_int;
        // 04050 NEXT R
        int dummy_4050=0; // Ignore this line.
    }; // End-For(R_int)
    // 04060 FOR R=1 TO 10
    for(R_int=1;R_int<=10;R_int++){
        // 04070 FOR S=1 TO 10
        for(S_int=1;S_int<=10;S_int++){
            // 04080 Q9=1
            Q9_int = 1;
            // 04090 FOR M=1 TO A
            for(M_int=1;M_int<=A_int_arr[0];M_int++){
                // 04100 IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 4120
                if(K_int>=K_int)goto Lbl_04120;
                // 04110 Q9=M
                Q9_int = M_int;

  Lbl_04120:
                // 04120 NEXT M
                int dummy_4120=0; // Ignore this line.
            }; // End-For(M_int)
            // 04130 IF R>A THEN 4150
            if(R_int>A_int_arr[0])goto Lbl_04150;
            // 04140 IF R=S THEN 4220
            if(R_int==S_int)goto Lbl_04220;

  Lbl_04150:
            // 04150 IF K(R,S)<K(F(Q9),G(Q9)) THEN 4220
            if(K_int<K_int)goto Lbl_04220;
            // 04160 FOR M=1 TO A
            for(M_int=1;M_int<=A_int_arr[0];M_int++){
                // 04170 IF F(M)<>R THEN 4200
                if(F_int_arr[M_int]!=R_int)goto Lbl_04200;
                // 04180 IF G(M)=S THEN 4220
                if(G_int_arr[M_int]==S_int)goto Lbl_04220;
                // 04190 NEXT M
                int dummy_4190=0; // Ignore this line.
            }; // End-For(M_int)

  Lbl_04200:
            // 04200 F(Q9)=R
            F_int_arr[Q9_int] = R_int;
            // 04210 G(Q9)=S
            G_int_arr[Q9_int] = S_int;

  Lbl_04220:
            // 04220 NEXT S
            int dummy_4220=0; // Ignore this line.
        }; // End-For(S_int)
        // 04230 NEXT R
        int dummy_4230=0; // Ignore this line.
    }; // End-For(R_int)
    // 04240 GOTO 3370
    goto Lbl_03370;
    // 04250 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
