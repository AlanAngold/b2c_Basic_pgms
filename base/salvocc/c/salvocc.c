/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/salvocc.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x587bb8327db0 ---------A   00001  REM NOTE: Basic language type forced to be:
    0x587bb8327f30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x587bb8327e70 ---------A   00010  CLS
    0x587bb83256d0 ---------A   00020  PRINT@284,"SALVO"
    0x587bb8325670 ---------A   00030  PRINT@409,"COPYRIGHT BY"
    0x587bb83162b0 ---------A   00040  PRINT@534,"CREATIVE COMPUTING"
    0x587bb83259e0 ---------A   00050  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x587bb83280b0 ---------A   00060  FOR II=1TO1500:NEXT
    0x587bb8325e40 ---------A   00070  CLS
    0x587bb8326480 ---------A   00080  PRINT:PRINT
    0x587bb8328100 ---------A   00090  PRINTTAB(6)"WHILE I AM PLANNING MY BOARD, YOU CAN BE THINKING OF"
    0x587bb83281b0 ---------A   00100  PRINT
    0x587bb83267c0 ---------A   00110  PRINTTAB(8)"THE LAY OUT FOR YOUR SHIPS. YOUR SHIPS INCLUDE:"
    0x587bb8326870 ---------A   00120  PRINT
    0x587bb832daa0 ---------A   00130  PRINTTAB(15)"A BATTLESHIP, (FIVE CO-ORDINATES LONG)"
    0x587bb832db50 ---------A   00140  PRINT
    0x587bb832dd70 ---------A   00150  PRINTTAB(15)"A CRUISER, (THREE CO-ORDINATES LONG)"
    0x587bb832ddd0 ---------A   00160  PRINT
    0x587bb832dff0 ---------A   00170  PRINTTAB(15)"DESTROYER <A>"
    0x587bb832e070 ---------A   00180  PRINT
    0x587bb832e0f0 ---------A   00200  '
    0x587bb832f950 ---------A   00210  DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    0x587bb832fc20 ---------A   00220  Z8=0
    0x587bb832ffb0 ---------A   00230  FOR W=1TO12
    0x587bb83302b0 ---------A   00240  E(W)=-1
    0x587bb83305a0 ---------A   00250  H(W)=-1
    0x587bb83306d0 ---------A   00260  NEXT W
    0x587bb8330a80 ---------A   00270  FOR X=1TO10
    0x587bb8330e20 ---------A   00280  FOR Y=1TO10
    0x587bb8331200 ---------A   00290  B(X,Y)=0
    0x587bb8331330 ---------A   00300  NEXT Y
    0x587bb8331480 ---------A   00310  NEXT X
    0x587bb8331770 ---------A   00320  FOR X=1TO12
    0x587bb8331c80 ---------A   00330  F(X)=0
    0x587bb8331f70 ---------A   00340  G(X)=0
    0x587bb83320a0 ---------A   00350  NEXT X
    0x587bb8332390 ---------A T 00360  FOR X=1TO10
    0x587bb8332670 ---------A   00370  FOR Y=1TO10
    0x587bb8332a50 ---------A   00380  A(X,Y)=0
    0x587bb8332b80 ---------A   00390  NEXT Y
    0x587bb8332cd0 ---------A   00400  NEXT X
    0x587bb8333060 ---------A   00410  FOR K=4 TO 1 STEP -1
    0x587bb8333340 ---------A   00420  U6=0
    0x587bb83333c0 ---------A T 00430  GOSUB 1920
    0x587bb8333b00 ---------A   00440  IF V+V2+V*V2=0 THEN 430
    0x587bb83340c0 ---------A   00450  GOSUB 3290:IF Y+V*PU>10 THEN 430
    0x587bb83345c0 ---------A   00460  GOSUB 3290:IF Y+V*PU<1 THEN 430
    0x587bb8334ac0 ---------A   00470  GOSUB 3290:IF X+V2*PU>10 THEN 430
    0x587bb8334fb0 ---------A   00480  GOSUB 3290:IF X+V2*PU<1 THEN 430
    0x587bb83352f0 ---------A   00490  U6=U6+1
    0x587bb8335550 ---------A   00500  IF U6>25 THEN 360
    0x587bb8335970 ---------A   00510  GOSUB 3290:FOR Z=0 TO PU
    0x587bb8336050 ---------A   00520  GOSUB 3270:F(Z+PU)=X+V2*Z
    0x587bb8336710 ---------A   00530  GOSUB 3270:G(Z+PU)=Y+V*Z
    0x587bb8336840 ---------A   00540  NEXT Z
    0x587bb8336bb0 ---------A   00550  GOSUB 3270:U8=PU
    0x587bb8336fa0 ---------A   00560  GOSUB 3290:IF U8>U8+PU THEN 630
    0x587bb83374f0 ---------A   00570  GOSUB 3290:FOR Z2=U8 TO U8+PU
    0x587bb8337750 ---------A   00580  IF U8<2 THEN 620
    0x587bb8337c40 ---------A   00590  FOR Z3=1 TO U8-1
    0x587bb83388e0 ---------A   00600  IF SQR((F(Z3)-F(Z2))^2+(G(Z3)-G(Z2))^2)<3.59 THEN 430
    0x587bb8338a20 ---------A   00610  NEXT Z3
    0x587bb8338b70 ---------A T 00620  NEXT Z2
    0x587bb8338f00 ---------A T 00630  GOSUB 3290:FOR Z=0TOPU
    0x587bb8339c40 ---------A   00640  A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
    0x587bb833a180 ---------A   00650  NEXT Z
    0x587bb833a2d0 ---------A   00660  NEXT K
    0x587bb833a370 ---------A   00670  CLS
    0x587bb833a4d0 ---------A   00680  PRINT"ENTER COORDINATES FOR ..."
    0x587bb833a630 ---------A   00690  PRINT"BATTLESHIP"
    0x587bb833a910 ---------A   00700  FOR X=1TO5
    0x587bb833ab50 ---------A   00710  INPUT Y,Z
    0x587bb833af30 ---------A   00720  B(Y,Z)=3
    0x587bb833b060 ---------A   00730  NEXT X
    0x587bb833b1d0 ---------A   00740  PRINT"CRUISER"
    0x587bb833b4b0 ---------A   00750  FOR X=1TO3
    0x587bb833b6f0 ---------A   00760  INPUT Y,Z
    0x587bb833bad0 ---------A   00770  B(Y,Z)=2
    0x587bb833bc00 ---------A   00780  NEXT X
    0x587bb833bd80 ---------A   00790  PRINT"DESTROYER <A>"
    0x587bb833c060 ---------A   00800  FOR X=1TO2
    0x587bb833c2a0 ---------A   00810  INPUT Y,Z
    0x587bb833c680 ---------A   00820  B(Y,Z)=1
    0x587bb833c7b0 ---------A   00830  NEXT X
    0x587bb833c850 ---------A   00840  CLS
    0x587bb833c9a0 ---------A   00850  PRINT"DESTROYER <B>"
    0x587bb833cc80 ---------A   00860  FOR X=1TO2
    0x587bb833cec0 ---------A   00870  INPUT Y,Z
    0x587bb833d2a0 ---------A   00880  B(Y,Z)=.5
    0x587bb833d3d0 ---------A   00890  NEXT X
    0x587bb833d590 ---------A   00900  PRINT"DO YOU WANT TO SEE MY SHOTS";
    0x587bb833d7b0 ---------A   00910  INPUT K$
    0x587bb833d840 ---------A   00920  PRINT
    0x587bb833db80 ---------A   00930  IFJ$<>"YES" THEN 1630
    0x587bb833dc00 ---------A   00940  '****START
    0x587bb833dea0 ---------A T 00950  IF J$<>"YES" THEN 1000
    0x587bb833e1e0 ---------A   00960  C=C+1
    0x587bb833e250 ---------A   00970  PRINT
    0x587bb833e2d0 ---------A   00980  GOSUB 3310
    0x587bb833e520 ---------A   00990  PRINT"TURN";C
    0x587bb833e750 ---------A T 01000  A=0
    0x587bb833eae0 ---------A   01010  FOR W=.5TO3 STEP .5
    0x587bb833edc0 ---------A   01020  FOR X=1TO10
    0x587bb833f0b0 ---------A   01030  FOR Y=1 TO 10
    0x587bb833f4f0 ---------A   01040  IF B(X,Y)=W THEN 1080
    0x587bb833f630 ---------A   01050  NEXT Y
    0x587bb833f780 ---------A   01060  NEXT X
    0x587bb833f810 ---------A   01070  GOTO 1090
    0x587bb833fd40 ---------A T 01080  A=A+INT(W+.5)
    0x587bb833fe70 ---------A T 01090  NEXT W
    0x587bb8340160 ---------A   01100  FOR W=1TO7
    0x587bb8340460 ---------A   01110  C(W)=0
    0x587bb8340750 ---------A   01120  D(W)=0
    0x587bb8340a40 ---------A   01130  F(W)=0
    0x587bb8340d30 ---------A   01140  G(W)=0
    0x587bb8340e60 ---------A   01150  NEXT W
    0x587bb8341150 ---------A   01160  P3=0
    0x587bb8341420 ---------A   01170  FOR X=1TO10
    0x587bb8341710 ---------A   01180  FOR Y=1TO10
    0x587bb8341b30 ---------A   01190  IF A(X,Y)>10 THEN 1210
    0x587bb8341e70 ---------A   01200  P3=P3+1
    0x587bb8341fa0 ---------A T 01210  NEXT Y
    0x587bb83420f0 ---------A   01220  NEXT X
    0x587bb83424c0 ---------A   01230  CLS:PRINT"YOU HAVE";A;"SHOTS."
    0x587bb8342770 ---------A   01240  IF P3>A THEN 1270
    0x587bb83428f0 ---------A   01250  PRINT"YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    0x587bb8342970 ---------A   01260  GOTO 1900
    0x587bb8342bd0 ---------A T 01270  IF A<>0 THEN 1300
    0x587bb8342d30 ---------A T 01280  PRINT"I HAVE WON."
    0x587bb8343660 ---------A   01290  PRINT:PRINT:END
    0x587bb8343960 ---------A T 01300  FOR W=1TOA
    0x587bb8343bb0 ---------A T 01310  INPUT X,Y
    0x587bb8343f10 ---------A   01320  IF X<>INT(X) THEN 1380
    0x587bb8344170 ---------A   01330  IF X>10 THEN 1380
    0x587bb83443e0 ---------A   01340  IF X<1 THEN 1380
    0x587bb8344740 ---------A   01350  IF Y<>INT(Y) THEN 1380
    0x587bb83449a0 ---------A   01360  IF Y>10 THEN 1380
    0x587bb8344c10 ---------A   01370  IF Y>=1 THEN 1400
    0x587bb8344d70 ---------A T 01380  PRINT"ILLEGAL, ENTER AGAIN."
    0x587bb8344e00 ---------A   01390  GOTO 1310
    0x587bb8345210 ---------A T 01400  IF A(X,Y)>10 THEN 1450
    0x587bb8345530 ---------A   01410  C(W)=X
    0x587bb8345840 ---------A   01420  D(W)=Y
    0x587bb8345970 ---------A   01430  NEXT W
    0x587bb8345a20 ---------A   01440  GOTO 1470
    0x587bb8345f40 ---------A T 01450  PRINT"YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    0x587bb8345fc0 ---------A   01460  GOTO 1310
    0x587bb83462c0 ---------A T 01470  FOR W=1TOA
    0x587bb83468b0 ---------A   01480  IF A(C(W),D(W))=3 THEN 1550
    0x587bb8346ea0 ---------A   01490  IF A(C(W),D(W))=2 THEN 1570
    0x587bb8347490 ---------A   01500  IF A(C(W),D(W))=1 THEN 1590
    0x587bb8347a70 ---------A   01510  IF A(C(W),D(W))=.5 THEN 1610
    0x587bb8348130 ---------A T 01520  A(C(W),D(W))=10+C
    0x587bb8348260 ---------A   01530  NEXT W
    0x587bb8348300 ---------A   01540  GOTO 1630
    0x587bb8348460 ---------A T 01550  PRINT"YOU HIT MY BATTLESHIP."
    0x587bb83484f0 ---------A   01560  GOTO 1520
    0x587bb8348640 ---------A T 01570  PRINT"YOU HIT MY CRUISER."
    0x587bb83486d0 ---------A   01580  GOTO 1520
    0x587bb8348830 ---------A T 01590  PRINT"YOU HIT MY DESTROYER <A>."
    0x587bb83488c0 ---------A   01600  GOTO 1520
    0x587bb8348a20 ---------A T 01610  PRINT"YOU HIT MY DESTROYER <B>."
    0x587bb8348aa0 ---------A   01620  GOTO 1520
    0x587bb8348cc0 ---------A T 01630  A=0
    0x587bb8348f30 ---------A   01640  IF J$="YES" THEN 1680
    0x587bb8349270 ---------A   01650  C=C+1
    0x587bb8349340 ---------A   01660  PRINT:GOSUB 3310
    0x587bb8349590 ---------A   01670  PRINT"TURN";C
    0x587bb83497c0 ---------A T 01680  A=0
    0x587bb8349b50 ---------A   01690  FOR W=.5TO3 STEP .5
    0x587bb8349e30 ---------A   01700  FOR X=1TO10
    0x587bb834a120 ---------A   01710  FOR Y=1TO10
    0x587bb834a560 ---------A   01720  IF A(X,Y)=W THEN 1760
    0x587bb834a6a0 ---------A   01730  NEXT Y
    0x587bb834a7f0 ---------A   01740  NEXT X
    0x587bb834a880 ---------A   01750  GOTO 1770
    0x587bb834adb0 ---------A T 01760  A=A+INT(W+.5)
    0x587bb834aee0 ---------A T 01770  NEXT W
    0x587bb834b110 ---------A   01780  P3=0
    0x587bb834b3e0 ---------A   01790  FOR X=1TO10
    0x587bb834b6d0 ---------A   01800  FOR Y=1TO10
    0x587bb834baf0 ---------A   01810  IF A(X,Y)>10 THEN 1830
    0x587bb834be30 ---------A   01820  P3=P3+1
    0x587bb834bf60 ---------A T 01830  NEXT Y
    0x587bb834c0b0 ---------A   01840  NEXT X
    0x587bb834c430 ---------A   01850  PRINT"I HAVE";A;"SHOTS"
    0x587bb834c6d0 ---------A   01860  IF P3>A THEN 1890
    0x587bb834c840 ---------A   01870  PRINT"I HAVE MORE SHOTS THAN BLANK SQUARES."
    0x587bb834c8c0 ---------A   01880  GOTO 1280
    0x587bb834cb20 ---------A T 01890  IF A<>0 THEN 1970
    0x587bb834cc80 ---------A T 01900  PRINT"YOU HAVE WON."
    0x587bb834cd10 ---------A   01910  GOTO 3340
    0x587bb834d2f0 ---------B G 01920  X=INT(RND(0)*10+1)
    0x587bb834d8c0 ---------B   01930  Y=INT(RND(0)*10+1)
    0x587bb834dea0 ---------B   01940  V=INT(3*RND(0)-1)
    0x587bb834e470 ---------B   01950  V2=INT(3*RND(0)-1)
    0x587bb834e4c0 ---------B   01960  RETURN
    0x587bb834e7b0 ---------A T 01970  FOR W=1TO 12
    0x587bb834eaf0 ---------A   01980  IF H(W)>0 THEN 2810
    0x587bb834ec30 ---------A   01990  NEXT W
    0x587bb834ecc0 ---------A   02000  '*****RANDOM
    0x587bb834eef0 ---------A   02010  W=0
    0x587bb834f1c0 ---------A T 02020  R3=0
    0x587bb834f230 ---------A   02030  GOSUB 1920
    0x587bb834f2a0 ---------A T 02040  RESTORE
    0x587bb834f570 ---------A   02050  R2=0
    0x587bb834f8b0 ---------A   02060  R3=R3+1
    0x587bb834fb00 ---------A   02070  IF R3>100 THEN 2020
    0x587bb834fd60 ---------A   02080  IF X>10 THEN 2120
    0x587bb834ffd0 ---------A   02090  IF X>0 THEN 2130
    0x587bb83505b0 ---------A   02100  X=1+INT(RND(0)*2.5)
    0x587bb8350630 ---------A   02110  GOTO 2130
    0x587bb8350c00 ---------A T 02120  X=10-INT(RND(0)*2.5)
    0x587bb8350e50 ---------A T 02130  IF Y>10 THEN 2170
    0x587bb83510c0 ---------A   02140  IF Y>0 THEN 2280
    0x587bb83516a0 ---------A   02150  Y=1+INT(RND(0)*2.5)
    0x587bb8351720 ---------A   02160  GOTO 2280
    0x587bb8351cf0 ---------A T 02170  Y=10-INT(RND(0)*2.5)
    0x587bb8351d60 ---------A   02180  GOTO 2280
    0x587bb8352070 ---------A T 02190  F(W)=X
    0x587bb8352380 ---------A   02200  G(W)=Y
    0x587bb83525f0 ---------A   02210  IF W=A THEN 2390
    0x587bb8352850 ---------A T 02220  IF R2=6 THEN 2040
    0x587bb8352c10 ---------A   02230  READ X1,Y1
    0x587bb8352f50 ---------A   02240  R2=R2+1
    0x587bb8353a40 ---------A   02250  DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    0x587bb8353d90 ---------A   02260  X=X+X1
    0x587bb83540e0 ---------A   02270  Y=Y+Y1
    0x587bb8354330 ---------A T 02280  IF X>10 THEN 2220
    0x587bb8354590 ---------A   02290  IF X<1 THEN 2220
    0x587bb83547f0 ---------A   02300  IF Y>10 THEN 2220
    0x587bb8354a60 ---------A   02310  IF Y<1 THEN 2220
    0x587bb8354e80 ---------A   02320  IF B(X,Y)>10 THEN 2220
    0x587bb8355250 ---------A   02330  FOR Q9=1 TO W
    0x587bb83555c0 ---------A   02340  IF F(Q9)<>X THEN 2360
    0x587bb8355920 ---------A   02350  IF G(Q9)=Y THEN 2220
    0x587bb8355a60 ---------A T 02360  NEXT Q9
    0x587bb8355db0 ---------A   02370  W=W+1
    0x587bb8355e30 ---------A   02380  GOTO 2190
    0x587bb8356240 ---------A T 02390  IF LEFT$(K$,1)<>"Y" THEN 2430
    0x587bb8356600 ---------A   02400  FOR Z5=1TOA
    0x587bb8356a20 ---------A   02410  PRINTF(Z5);G(Z5)
    0x587bb8356b60 ---------A   02420  NEXT Z5
    0x587bb8356e80 ---------A T 02430  FOR W=1TOA
    0x587bb8357470 ---------A   02440  IF B(F(W),G(W))=3 THEN 2510
    0x587bb8357a60 ---------A   02450  IF B(F(W),G(W))=2 THEN 2530
    0x587bb8358050 ---------A   02460  IF B(F(W),G(W))=1 THEN 2570
    0x587bb8358630 ---------A   02470  IF B(F(W),G(W))=.5 THEN 2550
    0x587bb8358cf0 ---------A T 02480  B(F(W),G(W))=10+C
    0x587bb8358e20 ---------A   02490  NEXT W
    0x587bb8358ec0 ---------A   02500  GOTO 950
    0x587bb8359010 ---------A T 02510  PRINT"I HIT YOUR BATTLESHIP"
    0x587bb83590a0 ---------A   02520  GOTO 2580
    0x587bb83591f0 ---------A T 02530  PRINT"I HIT YOUR CRUISER"
    0x587bb8359280 ---------A   02540  GOTO 2580
    0x587bb83593e0 ---------A T 02550  PRINT"I HIT YOUR DESTROYER<B>"
    0x587bb8359470 ---------A   02560  GOTO 2580
    0x587bb8342ea0 ---------A T 02570  PRINT"I HIT YOUR DESTROYER<A>"
    0x587bb8343250 ---------A T 02580  FOR Q=1 TO 12
    0x587bb835a4d0 ---------A   02590  IF E(Q)<>-1 THEN 2740
    0x587bb835a8f0 ---------A   02600  E(Q)=10+C
    0x587bb835af80 ---------A   02610  H(Q)=B(F(W),G(W))
    0x587bb835b250 ---------A   02620  M3=0
    0x587bb835b5f0 ---------A   02630  FOR M2=1TO12
    0x587bb835ba30 ---------A   02640  IF H(M2)<>H(Q) THEN 2660
    0x587bb835bd70 ---------A   02650  M3=M3+1
    0x587bb835bea0 ---------A T 02660  NEXT M2
    0x587bb835cae0 ---------A   02670  IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 2480
    0x587bb835cdd0 ---------A   02680  FOR M2=1 TO 12
    0x587bb835d210 ---------A   02690  IF H(M2)<>H(Q) THEN 2720
    0x587bb835d510 ---------A   02700  E(M2)=-1
    0x587bb835d800 ---------A   02710  H(M2)=-1
    0x587bb835d930 ---------A T 02720  NEXT M2
    0x587bb835d9c0 ---------A   02730  GOTO 2480
    0x587bb835daf0 ---------A T 02740  NEXT Q
    0x587bb835dc70 ---------A   02750  PRINT"PROGRAM ABORT:"
    0x587bb835df60 ---------A   02760  FOR Q=1TO12
    0x587bb835e4b0 ---------A   02770  PRINT"E(";Q;")=";E(Q)
    0x587bb835e9f0 ---------A   02780  PRINT"H(";Q;")=";H(Q)
    0x587bb835eb30 ---------A   02790  NEXT Q
    0x587bb835ebd0 ---------A   02800  GOTO 3310
    0x587bb835ec40 ---------A T 02810  '********USINGEARRAY
    0x587bb835eff0 ---------A   02820  FOR R=1TO10
    0x587bb835f390 ---------A   02830  FOR S=1TO10
    0x587bb835f770 ---------A   02840  K(R,S)=0
    0x587bb835f8a0 ---------A   02850  NEXT S
    0x587bb835f9f0 ---------A   02860  NEXT R
    0x587bb835fdb0 ---------A   02870  FOR U=1TO12
    0x587bb83600f0 ---------A   02880  IF E(U)<10 THEN 3030
    0x587bb83603d0 ---------A   02890  FOR R=1TO10
    0x587bb83606c0 ---------A   02900  FOR S=1TO10
    0x587bb8360ae0 ---------A   02910  IF B(R,S)<10 THEN 2940
    0x587bb8360ec0 ---------A   02920  K(R,S)=-10000000
    0x587bb8360f40 ---------A   02930  GOTO 3010
    0x587bb83616e0 ---------A T 02940  FOR M=SGN(1-R) TO SGN(10-R)
    0x587bb8361e70 ---------A   02950  FOR N=SGN(1-2) TO SGN(10-S)
    0x587bb8362440 ---------A   02960  IF N+M+N*M=0 THEN 2990
    0x587bb8362bb0 ---------A   02970  IF B(R+M,S+N)<>E(U) THEN 2990
    0x587bb8363870 ---------A   02980  K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
    0x587bb83639a0 ---------A T 02990  NEXT N
    0x587bb8363af0 ---------A   03000  NEXT M
    0x587bb8363c40 ---------A T 03010  NEXT S
    0x587bb8363d90 ---------A   03020  NEXT R
    0x587bb8363ee0 ---------A T 03030  NEXT U
    0x587bb83641f0 ---------A   03040  FOR R=1TOA
    0x587bb8364510 ---------A   03050  F(R)=R
    0x587bb8364820 ---------A   03060  G(R)=R
    0x587bb8364950 ---------A   03070  NEXT R
    0x587bb8364c40 ---------A   03080  FOR R=1TO10
    0x587bb8364f20 ---------A   03090  FOR S=1TO10
    0x587bb8365140 ---------A   03100  Q9=1
    0x587bb8365450 ---------A   03110  FOR M=1TOA
    0x587bb8365dd0 ---------A   03120  IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 3140
    0x587bb8366010 ---------A   03130  Q9=M
    0x587bb8366140 ---------A T 03140  NEXT M
    0x587bb83663d0 ---------A   03150  IF R>A THEN 3170
    0x587bb8366670 ---------A   03160  IF R=S THEN 3240
    0x587bb8366e30 ---------A T 03170  IF K(R,S)<K(F(Q9),G(Q9)) THEN 3240
    0x587bb8367140 ---------A   03180  FOR M=1TOA
    0x587bb83674b0 ---------A   03190  IF F(M)<>R THEN 3220
    0x587bb8367810 ---------A   03200  IF G(M)=S THEN 3240
    0x587bb8367950 ---------A   03210  NEXT M
    0x587bb8367c80 ---------A T 03220  F(Q9)=R
    0x587bb8367f90 ---------A   03230  G(Q9)=S
    0x587bb83680c0 ---------A T 03240  NEXT S
    0x587bb8368210 ---------A   03250  NEXT R
    0x587bb83682b0 ---------A   03260  GOTO 2390
    0x587bb8368f20 ----------   03270  PU=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    0x587bb8368f70 ----------   03280  RETURN
    0x587bb83697c0 ----------   03290  PU=K+INT(K/4)-SGN(K-1)
    0x587bb8369810 ----------   03300  RETURN
    0x587bb83699a0 ---------A B 03310  PRINT"TO CONTINUE, HIT ANY KEY"
    0x587bb8369fb0 ---------A T 03320  A$=INKEY$:IF A$="" THEN 3320
    0x587bb836a060 ---------A   03330  CLS:RETURN
    0x587bb836a180 ---------A T 03340  PRINT:PRINT:END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00360      00500T
     00430      00440T, 00450T, 00460T, 00470T, 00480T, 00600T
     00620      00580T
     00630      00560T
     00950      02500T
     01000      00950T
     01080      01040T
     01090      01070T
     01210      01190T
     01270      01240T
     01280      01880T
     01300      01270T
     01310      01390T, 01460T
     01380      01320T, 01330T, 01340T, 01350T, 01360T
     01400      01370T
     01450      01400T
     01470      01440T
     01520      01560T, 01580T, 01600T, 01620T
     01550      01480T
     01570      01490T
     01590      01500T
     01610      01510T
     01630      00930T, 01540T
     01680      01640T
     01760      01720T
     01770      01750T
     01830      01810T
     01890      01860T
     01900      01260T
     01920      00430G, 02030G
     01970      01890T
     02020      02070T
     02040      02220T
     02120      02080T
     02130      02090T, 02110T
     02170      02130T
     02190      02380T
     02220      02280T, 02290T, 02300T, 02310T, 02320T, 02350T
     02280      02140T, 02160T, 02180T
     02360      02340T
     02390      02210T, 03260T
     02430      02390T
     02480      02670T, 02730T
     02510      02440T
     02530      02450T
     02550      02470T
     02570      02460T
     02580      02520T, 02540T, 02560T
     02660      02640T
     02720      02690T
     02740      02590T
     02810      01980T
     02940      02910T
     02990      02960T, 02970T
     03010      02930T
     03030      02880T
     03140      03120T
     03170      03150T
     03220      03190T
     03240      03160T, 03170T, 03200T
     03310      00980G, 01660G, 02800T
     03320      03320T
     03340      01910T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x587bb8327db0 (00001)   0x587bb8327db0 (00001)   0x587bb836a180 (03340)   0x587bb836a180 (03340)   
   B) 0x587bb834d2f0 (01920)   0x587bb834d2f0 (01920)   0x587bb834e4c0 (01960)   0x587bb834e4c0 (01960)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/salvocc.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x587bb8327db0 ---------A   00001  REM NOTE
    0x587bb8327f30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x587bb8327e70 ---------A   00010  CLS
    0x587bb83256d0 ---------A   00020  PRINT@284,"SALVO"
    0x587bb8325670 ---------A   00030  PRINT@409,"COPYRIGHT BY"
    0x587bb83162b0 ---------A   00040  PRINT@534,"CREATIVE COMPUTING"
    0x587bb83259e0 ---------A   00050  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x587bb8326040 ----------   00060  FOR II=1TO1500
    0x587bb83280b0 ---------A        a NEXT
    0x587bb8325e40 ---------A   00070  CLS
    0x587bb8325e90 ----------   00080  PRINT
    0x587bb8326480 ---------A        a PRINT
    0x587bb8328100 ---------A   00090  PRINTTAB(6)"WHILE I AM PLANNING MY BOARD, YOU CAN BE THINKING OF"
    0x587bb83281b0 ---------A   00100  PRINT
    0x587bb83267c0 ---------A   00110  PRINTTAB(8)"THE LAY OUT FOR YOUR SHIPS. YOUR SHIPS INCLUDE:"
    0x587bb8326870 ---------A   00120  PRINT
    0x587bb832daa0 ---------A   00130  PRINTTAB(15)"A BATTLESHIP, (FIVE CO-ORDINATES LONG)"
    0x587bb832db50 ---------A   00140  PRINT
    0x587bb832dd70 ---------A   00150  PRINTTAB(15)"A CRUISER, (THREE CO-ORDINATES LONG)"
    0x587bb832ddd0 ---------A   00160  PRINT
    0x587bb832dff0 ---------A   00170  PRINTTAB(15)"DESTROYER <A>"
    0x587bb832e070 ---------A   00180  PRINT
    0x587bb832e0f0 ---------A   00200  '
    0x587bb832f950 ---------A   00210  DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    0x587bb832fc20 ---------A   00220  Z8=0
    0x587bb832ffb0 ---------A   00230  FOR W=1TO12
    0x587bb83302b0 ---------A   00240  E(W)=-1
    0x587bb83305a0 ---------A   00250  H(W)=-1
    0x587bb83306d0 ---------A   00260  NEXT W
    0x587bb8330a80 ---------A   00270  FOR X=1TO10
    0x587bb8330e20 ---------A   00280  FOR Y=1TO10
    0x587bb8331200 ---------A   00290  B(X,Y)=0
    0x587bb8331330 ---------A   00300  NEXT Y
    0x587bb8331480 ---------A   00310  NEXT X
    0x587bb8331770 ---------A   00320  FOR X=1TO12
    0x587bb8331c80 ---------A   00330  F(X)=0
    0x587bb8331f70 ---------A   00340  G(X)=0
    0x587bb83320a0 ---------A   00350  NEXT X
    0x587bb8332390 ---------A T 00360  FOR X=1TO10
    0x587bb8332670 ---------A   00370  FOR Y=1TO10
    0x587bb8332a50 ---------A   00380  A(X,Y)=0
    0x587bb8332b80 ---------A   00390  NEXT Y
    0x587bb8332cd0 ---------A   00400  NEXT X
    0x587bb8333060 ---------A   00410  FOR K=4 TO 1 STEP -1
    0x587bb8333340 ---------A   00420  U6=0
    0x587bb83333c0 ---------A T 00430  GOSUB 1920
    0x587bb8333b00 ---------A   00440  IF V+V2+V*V2=0 THEN 430
    0x587bb8333b60 ----------   00450  GOSUB 3290
    0x587bb83340c0 ---------A        a IF Y+V*PU>10 THEN 430
    0x587bb8334120 ----------   00460  GOSUB 3290
    0x587bb83345c0 ---------A        a IF Y+V*PU<1 THEN 430
    0x587bb8334620 ----------   00470  GOSUB 3290
    0x587bb8334ac0 ---------A        a IF X+V2*PU>10 THEN 430
    0x587bb8334b20 ----------   00480  GOSUB 3290
    0x587bb8334fb0 ---------A        a IF X+V2*PU<1 THEN 430
    0x587bb83352f0 ---------A   00490  U6=U6+1
    0x587bb8335550 ---------A   00500  IF U6>25 THEN 360
    0x587bb83355b0 ----------   00510  GOSUB 3290
    0x587bb8335970 ---------A        a FOR Z=0 TO PU
    0x587bb83359d0 ----------   00520  GOSUB 3270
    0x587bb8336050 ---------A        a F(Z+PU)=X+V2*Z
    0x587bb83360a0 ----------   00530  GOSUB 3270
    0x587bb8336710 ---------A        a G(Z+PU)=Y+V*Z
    0x587bb8336840 ---------A   00540  NEXT Z
    0x587bb83368b0 ----------   00550  GOSUB 3270
    0x587bb8336bb0 ---------A        a U8=PU
    0x587bb8336c00 ----------   00560  GOSUB 3290
    0x587bb8336fa0 ---------A        a IF U8>U8+PU THEN 630
    0x587bb8337000 ----------   00570  GOSUB 3290
    0x587bb83374f0 ---------A        a FOR Z2=U8 TO U8+PU
    0x587bb8337750 ---------A   00580  IF U8<2 THEN 620
    0x587bb8337c40 ---------A   00590  FOR Z3=1 TO U8-1
    0x587bb83388e0 ---------A   00600  IF SQR((F(Z3)-F(Z2))^2+(G(Z3)-G(Z2))^2)<3.59 THEN 430
    0x587bb8338a20 ---------A   00610  NEXT Z3
    0x587bb8338b70 ---------A T 00620  NEXT Z2
    0x587bb8338bf0 ---------- T 00630  GOSUB 3290
    0x587bb8338f00 ---------A T      a FOR Z=0TOPU
    0x587bb8339c40 ---------A   00640  A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
    0x587bb833a180 ---------A   00650  NEXT Z
    0x587bb833a2d0 ---------A   00660  NEXT K
    0x587bb833a370 ---------A   00670  CLS
    0x587bb833a4d0 ---------A   00680  PRINT"ENTER COORDINATES FOR ..."
    0x587bb833a630 ---------A   00690  PRINT"BATTLESHIP"
    0x587bb833a910 ---------A   00700  FOR X=1TO5
    0x587bb833ab50 ---------A   00710  INPUT Y,Z
    0x587bb833af30 ---------A   00720  B(Y,Z)=3
    0x587bb833b060 ---------A   00730  NEXT X
    0x587bb833b1d0 ---------A   00740  PRINT"CRUISER"
    0x587bb833b4b0 ---------A   00750  FOR X=1TO3
    0x587bb833b6f0 ---------A   00760  INPUT Y,Z
    0x587bb833bad0 ---------A   00770  B(Y,Z)=2
    0x587bb833bc00 ---------A   00780  NEXT X
    0x587bb833bd80 ---------A   00790  PRINT"DESTROYER <A>"
    0x587bb833c060 ---------A   00800  FOR X=1TO2
    0x587bb833c2a0 ---------A   00810  INPUT Y,Z
    0x587bb833c680 ---------A   00820  B(Y,Z)=1
    0x587bb833c7b0 ---------A   00830  NEXT X
    0x587bb833c850 ---------A   00840  CLS
    0x587bb833c9a0 ---------A   00850  PRINT"DESTROYER <B>"
    0x587bb833cc80 ---------A   00860  FOR X=1TO2
    0x587bb833cec0 ---------A   00870  INPUT Y,Z
    0x587bb833d2a0 ---------A   00880  B(Y,Z)=.5
    0x587bb833d3d0 ---------A   00890  NEXT X
    0x587bb833d590 ---------A   00900  PRINT"DO YOU WANT TO SEE MY SHOTS";
    0x587bb833d7b0 ---------A   00910  INPUT K$
    0x587bb833d840 ---------A   00920  PRINT
    0x587bb833db80 ---------A   00930  IFJ$<>"YES" THEN 1630
    0x587bb833dc00 ---------A   00940  '****START
    0x587bb833dea0 ---------A T 00950  IF J$<>"YES" THEN 1000
    0x587bb833e1e0 ---------A   00960  C=C+1
    0x587bb833e250 ---------A   00970  PRINT
    0x587bb833e2d0 ---------A   00980  GOSUB 3310
    0x587bb833e520 ---------A   00990  PRINT"TURN";C
    0x587bb833e750 ---------A T 01000  A=0
    0x587bb833eae0 ---------A   01010  FOR W=.5TO3 STEP .5
    0x587bb833edc0 ---------A   01020  FOR X=1TO10
    0x587bb833f0b0 ---------A   01030  FOR Y=1 TO 10
    0x587bb833f4f0 ---------A   01040  IF B(X,Y)=W THEN 1080
    0x587bb833f630 ---------A   01050  NEXT Y
    0x587bb833f780 ---------A   01060  NEXT X
    0x587bb833f810 ---------A   01070  GOTO 1090
    0x587bb833fd40 ---------A T 01080  A=A+INT(W+.5)
    0x587bb833fe70 ---------A T 01090  NEXT W
    0x587bb8340160 ---------A   01100  FOR W=1TO7
    0x587bb8340460 ---------A   01110  C(W)=0
    0x587bb8340750 ---------A   01120  D(W)=0
    0x587bb8340a40 ---------A   01130  F(W)=0
    0x587bb8340d30 ---------A   01140  G(W)=0
    0x587bb8340e60 ---------A   01150  NEXT W
    0x587bb8341150 ---------A   01160  P3=0
    0x587bb8341420 ---------A   01170  FOR X=1TO10
    0x587bb8341710 ---------A   01180  FOR Y=1TO10
    0x587bb8341b30 ---------A   01190  IF A(X,Y)>10 THEN 1210
    0x587bb8341e70 ---------A   01200  P3=P3+1
    0x587bb8341fa0 ---------A T 01210  NEXT Y
    0x587bb83420f0 ---------A   01220  NEXT X
    0x587bb8342170 ----------   01230  CLS
    0x587bb83424c0 ---------A        a PRINT"YOU HAVE";A;"SHOTS."
    0x587bb8342770 ---------A   01240  IF P3>A THEN 1270
    0x587bb83428f0 ---------A   01250  PRINT"YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    0x587bb8342970 ---------A   01260  GOTO 1900
    0x587bb8342bd0 ---------A T 01270  IF A<>0 THEN 1300
    0x587bb8342d30 ---------A T 01280  PRINT"I HAVE WON."
    0x587bb83435a0 ----------   01290  PRINT
    0x587bb8343600 ----------        a PRINT
    0x587bb8343660 ---------A        b END
    0x587bb8343960 ---------A T 01300  FOR W=1TOA
    0x587bb8343bb0 ---------A T 01310  INPUT X,Y
    0x587bb8343f10 ---------A   01320  IF X<>INT(X) THEN 1380
    0x587bb8344170 ---------A   01330  IF X>10 THEN 1380
    0x587bb83443e0 ---------A   01340  IF X<1 THEN 1380
    0x587bb8344740 ---------A   01350  IF Y<>INT(Y) THEN 1380
    0x587bb83449a0 ---------A   01360  IF Y>10 THEN 1380
    0x587bb8344c10 ---------A   01370  IF Y>=1 THEN 1400
    0x587bb8344d70 ---------A T 01380  PRINT"ILLEGAL, ENTER AGAIN."
    0x587bb8344e00 ---------A   01390  GOTO 1310
    0x587bb8345210 ---------A T 01400  IF A(X,Y)>10 THEN 1450
    0x587bb8345530 ---------A   01410  C(W)=X
    0x587bb8345840 ---------A   01420  D(W)=Y
    0x587bb8345970 ---------A   01430  NEXT W
    0x587bb8345a20 ---------A   01440  GOTO 1470
    0x587bb8345f40 ---------A T 01450  PRINT"YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    0x587bb8345fc0 ---------A   01460  GOTO 1310
    0x587bb83462c0 ---------A T 01470  FOR W=1TOA
    0x587bb83468b0 ---------A   01480  IF A(C(W),D(W))=3 THEN 1550
    0x587bb8346ea0 ---------A   01490  IF A(C(W),D(W))=2 THEN 1570
    0x587bb8347490 ---------A   01500  IF A(C(W),D(W))=1 THEN 1590
    0x587bb8347a70 ---------A   01510  IF A(C(W),D(W))=.5 THEN 1610
    0x587bb8348130 ---------A T 01520  A(C(W),D(W))=10+C
    0x587bb8348260 ---------A   01530  NEXT W
    0x587bb8348300 ---------A   01540  GOTO 1630
    0x587bb8348460 ---------A T 01550  PRINT"YOU HIT MY BATTLESHIP."
    0x587bb83484f0 ---------A   01560  GOTO 1520
    0x587bb8348640 ---------A T 01570  PRINT"YOU HIT MY CRUISER."
    0x587bb83486d0 ---------A   01580  GOTO 1520
    0x587bb8348830 ---------A T 01590  PRINT"YOU HIT MY DESTROYER <A>."
    0x587bb83488c0 ---------A   01600  GOTO 1520
    0x587bb8348a20 ---------A T 01610  PRINT"YOU HIT MY DESTROYER <B>."
    0x587bb8348aa0 ---------A   01620  GOTO 1520
    0x587bb8348cc0 ---------A T 01630  A=0
    0x587bb8348f30 ---------A   01640  IF J$="YES" THEN 1680
    0x587bb8349270 ---------A   01650  C=C+1
    0x587bb83492c0 ----------   01660  PRINT
    0x587bb8349340 ---------A        a GOSUB 3310
    0x587bb8349590 ---------A   01670  PRINT"TURN";C
    0x587bb83497c0 ---------A T 01680  A=0
    0x587bb8349b50 ---------A   01690  FOR W=.5TO3 STEP .5
    0x587bb8349e30 ---------A   01700  FOR X=1TO10
    0x587bb834a120 ---------A   01710  FOR Y=1TO10
    0x587bb834a560 ---------A   01720  IF A(X,Y)=W THEN 1760
    0x587bb834a6a0 ---------A   01730  NEXT Y
    0x587bb834a7f0 ---------A   01740  NEXT X
    0x587bb834a880 ---------A   01750  GOTO 1770
    0x587bb834adb0 ---------A T 01760  A=A+INT(W+.5)
    0x587bb834aee0 ---------A T 01770  NEXT W
    0x587bb834b110 ---------A   01780  P3=0
    0x587bb834b3e0 ---------A   01790  FOR X=1TO10
    0x587bb834b6d0 ---------A   01800  FOR Y=1TO10
    0x587bb834baf0 ---------A   01810  IF A(X,Y)>10 THEN 1830
    0x587bb834be30 ---------A   01820  P3=P3+1
    0x587bb834bf60 ---------A T 01830  NEXT Y
    0x587bb834c0b0 ---------A   01840  NEXT X
    0x587bb834c430 ---------A   01850  PRINT"I HAVE";A;"SHOTS"
    0x587bb834c6d0 ---------A   01860  IF P3>A THEN 1890
    0x587bb834c840 ---------A   01870  PRINT"I HAVE MORE SHOTS THAN BLANK SQUARES."
    0x587bb834c8c0 ---------A   01880  GOTO 1280
    0x587bb834cb20 ---------A T 01890  IF A<>0 THEN 1970
    0x587bb834cc80 ---------A T 01900  PRINT"YOU HAVE WON."
    0x587bb834cd10 ---------A   01910  GOTO 3340
    0x587bb834d2f0 ---------B G 01920  X=INT(RND(0)*10+1)
    0x587bb834d8c0 ---------B   01930  Y=INT(RND(0)*10+1)
    0x587bb834dea0 ---------B   01940  V=INT(3*RND(0)-1)
    0x587bb834e470 ---------B   01950  V2=INT(3*RND(0)-1)
    0x587bb834e4c0 ---------B   01960  RETURN
    0x587bb834e7b0 ---------A T 01970  FOR W=1TO 12
    0x587bb834eaf0 ---------A   01980  IF H(W)>0 THEN 2810
    0x587bb834ec30 ---------A   01990  NEXT W
    0x587bb834ecc0 ---------A   02000  '*****RANDOM
    0x587bb834eef0 ---------A   02010  W=0
    0x587bb834f1c0 ---------A T 02020  R3=0
    0x587bb834f230 ---------A   02030  GOSUB 1920
    0x587bb834f2a0 ---------A T 02040  RESTORE
    0x587bb834f570 ---------A   02050  R2=0
    0x587bb834f8b0 ---------A   02060  R3=R3+1
    0x587bb834fb00 ---------A   02070  IF R3>100 THEN 2020
    0x587bb834fd60 ---------A   02080  IF X>10 THEN 2120
    0x587bb834ffd0 ---------A   02090  IF X>0 THEN 2130
    0x587bb83505b0 ---------A   02100  X=1+INT(RND(0)*2.5)
    0x587bb8350630 ---------A   02110  GOTO 2130
    0x587bb8350c00 ---------A T 02120  X=10-INT(RND(0)*2.5)
    0x587bb8350e50 ---------A T 02130  IF Y>10 THEN 2170
    0x587bb83510c0 ---------A   02140  IF Y>0 THEN 2280
    0x587bb83516a0 ---------A   02150  Y=1+INT(RND(0)*2.5)
    0x587bb8351720 ---------A   02160  GOTO 2280
    0x587bb8351cf0 ---------A T 02170  Y=10-INT(RND(0)*2.5)
    0x587bb8351d60 ---------A   02180  GOTO 2280
    0x587bb8352070 ---------A T 02190  F(W)=X
    0x587bb8352380 ---------A   02200  G(W)=Y
    0x587bb83525f0 ---------A   02210  IF W=A THEN 2390
    0x587bb8352850 ---------A T 02220  IF R2=6 THEN 2040
    0x587bb8352c10 ---------A   02230  READ X1,Y1
    0x587bb8352f50 ---------A   02240  R2=R2+1
    0x587bb8353a40 ---------A   02250  DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    0x587bb8353d90 ---------A   02260  X=X+X1
    0x587bb83540e0 ---------A   02270  Y=Y+Y1
    0x587bb8354330 ---------A T 02280  IF X>10 THEN 2220
    0x587bb8354590 ---------A   02290  IF X<1 THEN 2220
    0x587bb83547f0 ---------A   02300  IF Y>10 THEN 2220
    0x587bb8354a60 ---------A   02310  IF Y<1 THEN 2220
    0x587bb8354e80 ---------A   02320  IF B(X,Y)>10 THEN 2220
    0x587bb8355250 ---------A   02330  FOR Q9=1 TO W
    0x587bb83555c0 ---------A   02340  IF F(Q9)<>X THEN 2360
    0x587bb8355920 ---------A   02350  IF G(Q9)=Y THEN 2220
    0x587bb8355a60 ---------A T 02360  NEXT Q9
    0x587bb8355db0 ---------A   02370  W=W+1
    0x587bb8355e30 ---------A   02380  GOTO 2190
    0x587bb8356240 ---------A T 02390  IF LEFT$(K$,1)<>"Y" THEN 2430
    0x587bb8356600 ---------A   02400  FOR Z5=1TOA
    0x587bb8356a20 ---------A   02410  PRINTF(Z5);G(Z5)
    0x587bb8356b60 ---------A   02420  NEXT Z5
    0x587bb8356e80 ---------A T 02430  FOR W=1TOA
    0x587bb8357470 ---------A   02440  IF B(F(W),G(W))=3 THEN 2510
    0x587bb8357a60 ---------A   02450  IF B(F(W),G(W))=2 THEN 2530
    0x587bb8358050 ---------A   02460  IF B(F(W),G(W))=1 THEN 2570
    0x587bb8358630 ---------A   02470  IF B(F(W),G(W))=.5 THEN 2550
    0x587bb8358cf0 ---------A T 02480  B(F(W),G(W))=10+C
    0x587bb8358e20 ---------A   02490  NEXT W
    0x587bb8358ec0 ---------A   02500  GOTO 950
    0x587bb8359010 ---------A T 02510  PRINT"I HIT YOUR BATTLESHIP"
    0x587bb83590a0 ---------A   02520  GOTO 2580
    0x587bb83591f0 ---------A T 02530  PRINT"I HIT YOUR CRUISER"
    0x587bb8359280 ---------A   02540  GOTO 2580
    0x587bb83593e0 ---------A T 02550  PRINT"I HIT YOUR DESTROYER<B>"
    0x587bb8359470 ---------A   02560  GOTO 2580
    0x587bb8342ea0 ---------A T 02570  PRINT"I HIT YOUR DESTROYER<A>"
    0x587bb8343250 ---------A T 02580  FOR Q=1 TO 12
    0x587bb835a4d0 ---------A   02590  IF E(Q)<>-1 THEN 2740
    0x587bb835a8f0 ---------A   02600  E(Q)=10+C
    0x587bb835af80 ---------A   02610  H(Q)=B(F(W),G(W))
    0x587bb835b250 ---------A   02620  M3=0
    0x587bb835b5f0 ---------A   02630  FOR M2=1TO12
    0x587bb835ba30 ---------A   02640  IF H(M2)<>H(Q) THEN 2660
    0x587bb835bd70 ---------A   02650  M3=M3+1
    0x587bb835bea0 ---------A T 02660  NEXT M2
    0x587bb835cae0 ---------A   02670  IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 2480
    0x587bb835cdd0 ---------A   02680  FOR M2=1 TO 12
    0x587bb835d210 ---------A   02690  IF H(M2)<>H(Q) THEN 2720
    0x587bb835d510 ---------A   02700  E(M2)=-1
    0x587bb835d800 ---------A   02710  H(M2)=-1
    0x587bb835d930 ---------A T 02720  NEXT M2
    0x587bb835d9c0 ---------A   02730  GOTO 2480
    0x587bb835daf0 ---------A T 02740  NEXT Q
    0x587bb835dc70 ---------A   02750  PRINT"PROGRAM ABORT:"
    0x587bb835df60 ---------A   02760  FOR Q=1TO12
    0x587bb835e4b0 ---------A   02770  PRINT"E(";Q;")=";E(Q)
    0x587bb835e9f0 ---------A   02780  PRINT"H(";Q;")=";H(Q)
    0x587bb835eb30 ---------A   02790  NEXT Q
    0x587bb835ebd0 ---------A   02800  GOTO 3310
    0x587bb835ec40 ---------A T 02810  '********USINGEARRAY
    0x587bb835eff0 ---------A   02820  FOR R=1TO10
    0x587bb835f390 ---------A   02830  FOR S=1TO10
    0x587bb835f770 ---------A   02840  K(R,S)=0
    0x587bb835f8a0 ---------A   02850  NEXT S
    0x587bb835f9f0 ---------A   02860  NEXT R
    0x587bb835fdb0 ---------A   02870  FOR U=1TO12
    0x587bb83600f0 ---------A   02880  IF E(U)<10 THEN 3030
    0x587bb83603d0 ---------A   02890  FOR R=1TO10
    0x587bb83606c0 ---------A   02900  FOR S=1TO10
    0x587bb8360ae0 ---------A   02910  IF B(R,S)<10 THEN 2940
    0x587bb8360ec0 ---------A   02920  K(R,S)=-10000000
    0x587bb8360f40 ---------A   02930  GOTO 3010
    0x587bb83616e0 ---------A T 02940  FOR M=SGN(1-R) TO SGN(10-R)
    0x587bb8361e70 ---------A   02950  FOR N=SGN(1-2) TO SGN(10-S)
    0x587bb8362440 ---------A   02960  IF N+M+N*M=0 THEN 2990
    0x587bb8362bb0 ---------A   02970  IF B(R+M,S+N)<>E(U) THEN 2990
    0x587bb8363870 ---------A   02980  K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
    0x587bb83639a0 ---------A T 02990  NEXT N
    0x587bb8363af0 ---------A   03000  NEXT M
    0x587bb8363c40 ---------A T 03010  NEXT S
    0x587bb8363d90 ---------A   03020  NEXT R
    0x587bb8363ee0 ---------A T 03030  NEXT U
    0x587bb83641f0 ---------A   03040  FOR R=1TOA
    0x587bb8364510 ---------A   03050  F(R)=R
    0x587bb8364820 ---------A   03060  G(R)=R
    0x587bb8364950 ---------A   03070  NEXT R
    0x587bb8364c40 ---------A   03080  FOR R=1TO10
    0x587bb8364f20 ---------A   03090  FOR S=1TO10
    0x587bb8365140 ---------A   03100  Q9=1
    0x587bb8365450 ---------A   03110  FOR M=1TOA
    0x587bb8365dd0 ---------A   03120  IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 3140
    0x587bb8366010 ---------A   03130  Q9=M
    0x587bb8366140 ---------A T 03140  NEXT M
    0x587bb83663d0 ---------A   03150  IF R>A THEN 3170
    0x587bb8366670 ---------A   03160  IF R=S THEN 3240
    0x587bb8366e30 ---------A T 03170  IF K(R,S)<K(F(Q9),G(Q9)) THEN 3240
    0x587bb8367140 ---------A   03180  FOR M=1TOA
    0x587bb83674b0 ---------A   03190  IF F(M)<>R THEN 3220
    0x587bb8367810 ---------A   03200  IF G(M)=S THEN 3240
    0x587bb8367950 ---------A   03210  NEXT M
    0x587bb8367c80 ---------A T 03220  F(Q9)=R
    0x587bb8367f90 ---------A   03230  G(Q9)=S
    0x587bb83680c0 ---------A T 03240  NEXT S
    0x587bb8368210 ---------A   03250  NEXT R
    0x587bb83682b0 ---------A   03260  GOTO 2390
    0x587bb8368f20 ----------   03270  PU=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    0x587bb8368f70 ----------   03280  RETURN
    0x587bb83697c0 ----------   03290  PU=K+INT(K/4)-SGN(K-1)
    0x587bb8369810 ----------   03300  RETURN
    0x587bb83699a0 ---------A B 03310  PRINT"TO CONTINUE, HIT ANY KEY"
    0x587bb8369d40 ---------- T 03320  A$=INKEY$
    0x587bb8369fb0 ---------A T      a IF A$="" THEN 3320
    0x587bb836a010 ----------   03330  CLS
    0x587bb836a060 ---------A        a RETURN
    0x587bb836a0c0 ---------- T 03340  PRINT
    0x587bb836a120 ---------- T      a PRINT
    0x587bb836a180 ---------A T      b END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/salvocc.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x587bb8327db0 ---------A T 01000  REM NOTE
    0x587bb8327f30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x587bb8327e70 ---------A   01020  CLS
    0x587bb83256d0 ---------A   01030  PRINT@284,"SALVO"
    0x587bb8325670 ---------A   01040  PRINT@409,"COPYRIGHT BY"
    0x587bb83162b0 ---------A   01050  PRINT@534,"CREATIVE COMPUTING"
    0x587bb83259e0 ---------A   01060  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x587bb8326040 ----------   01070  FOR II=1TO1500
    0x587bb83280b0 ---------A T 01080  NEXT
    0x587bb8325e40 ---------A T 01090  CLS
    0x587bb8325e90 ----------   01100  PRINT
    0x587bb8326480 ---------A   01110  PRINT
    0x587bb8328100 ---------A   01120  PRINTTAB(6)"WHILE I AM PLANNING MY BOARD, YOU CAN BE THINKING OF"
    0x587bb83281b0 ---------A   01130  PRINT
    0x587bb83267c0 ---------A   01140  PRINTTAB(8)"THE LAY OUT FOR YOUR SHIPS. YOUR SHIPS INCLUDE:"
    0x587bb8326870 ---------A   01150  PRINT
    0x587bb832daa0 ---------A   01160  PRINTTAB(15)"A BATTLESHIP, (FIVE CO-ORDINATES LONG)"
    0x587bb832db50 ---------A   01170  PRINT
    0x587bb832dd70 ---------A   01180  PRINTTAB(15)"A CRUISER, (THREE CO-ORDINATES LONG)"
    0x587bb832ddd0 ---------A   01190  PRINT
    0x587bb832dff0 ---------A   01200  PRINTTAB(15)"DESTROYER <A>"
    0x587bb832e070 ---------A T 01210  PRINT
    0x587bb832e0f0 ---------A   01220  '
    0x587bb832f950 ---------A   01230  DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    0x587bb832fc20 ---------A   01240  Z8=0
    0x587bb832ffb0 ---------A   01250  FOR W=1TO12
    0x587bb83302b0 ---------A   01260  E(W)=-1
    0x587bb83305a0 ---------A T 01270  H(W)=-1
    0x587bb83306d0 ---------A T 01280  NEXT W
    0x587bb8330a80 ---------A   01290  FOR X=1TO10
    0x587bb8330e20 ---------A T 01300  FOR Y=1TO10
    0x587bb8331200 ---------A T 01310  B(X,Y)=0
    0x587bb8331330 ---------A   01320  NEXT Y
    0x587bb8331480 ---------A   01330  NEXT X
    0x587bb8331770 ---------A   01340  FOR X=1TO12
    0x587bb8331c80 ---------A   01350  F(X)=0
    0x587bb8331f70 ---------A   01360  G(X)=0
    0x587bb83320a0 ---------A   01370  NEXT X
    0x587bb8332390 ---------A T 01380  FOR X=1TO10
    0x587bb8332670 ---------A   01390  FOR Y=1TO10
    0x587bb8332a50 ---------A T 01400  A(X,Y)=0
    0x587bb8332b80 ---------A   01410  NEXT Y
    0x587bb8332cd0 ---------A   01420  NEXT X
    0x587bb8333060 ---------A   01430  FOR K=4 TO 1 STEP -1
    0x587bb8333340 ---------A   01440  U6=0
    0x587bb83333c0 ---------A T 01450  GOSUB 3090
    0x587bb8333b00 ---------A   01460  IF V+V2+V*V2=0 THEN 1450
    0x587bb8333b60 ---------- T 01470  GOSUB 4460
    0x587bb83340c0 ---------A   01480  IF Y+V*PU>10 THEN 1450
    0x587bb8334120 ----------   01490  GOSUB 4460
    0x587bb83345c0 ---------A   01500  IF Y+V*PU<1 THEN 1450
    0x587bb8334620 ----------   01510  GOSUB 4460
    0x587bb8334ac0 ---------A T 01520  IF X+V2*PU>10 THEN 1450
    0x587bb8334b20 ----------   01530  GOSUB 4460
    0x587bb8334fb0 ---------A   01540  IF X+V2*PU<1 THEN 1450
    0x587bb83352f0 ---------A T 01550  U6=U6+1
    0x587bb8335550 ---------A   01560  IF U6>25 THEN 1380
    0x587bb83355b0 ---------- T 01570  GOSUB 4460
    0x587bb8335970 ---------A   01580  FOR Z=0 TO PU
    0x587bb83359d0 ---------- T 01590  GOSUB 4440
    0x587bb8336050 ---------A   01600  F(Z+PU)=X+V2*Z
    0x587bb83360a0 ---------- T 01610  GOSUB 4440
    0x587bb8336710 ---------A   01620  G(Z+PU)=Y+V*Z
    0x587bb8336840 ---------A T 01630  NEXT Z
    0x587bb83368b0 ----------   01640  GOSUB 4440
    0x587bb8336bb0 ---------A   01650  U8=PU
    0x587bb8336c00 ----------   01660  GOSUB 4460
    0x587bb8336fa0 ---------A   01670  IF U8>U8+PU THEN 1760
    0x587bb8337000 ---------- T 01680  GOSUB 4460
    0x587bb83374f0 ---------A   01690  FOR Z2=U8 TO U8+PU
    0x587bb8337750 ---------A   01700  IF U8<2 THEN 1740
    0x587bb8337c40 ---------A   01710  FOR Z3=1 TO U8-1
    0x587bb83388e0 ---------A   01720  IF SQR((F(Z3)-F(Z2))^2+(G(Z3)-G(Z2))^2)<3.59 THEN 1450
    0x587bb8338a20 ---------A   01730  NEXT Z3
    0x587bb8338b70 ---------A   01740  NEXT Z2
    0x587bb8338bf0 ----------   01750  GOSUB 4460
    0x587bb8338f00 ---------A T 01760  FOR Z=0TOPU
    0x587bb8339c40 ---------A T 01770  A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
    0x587bb833a180 ---------A   01780  NEXT Z
    0x587bb833a2d0 ---------A   01790  NEXT K
    0x587bb833a370 ---------A   01800  CLS
    0x587bb833a4d0 ---------A   01810  PRINT"ENTER COORDINATES FOR ..."
    0x587bb833a630 ---------A   01820  PRINT"BATTLESHIP"
    0x587bb833a910 ---------A T 01830  FOR X=1TO5
    0x587bb833ab50 ---------A   01840  INPUT Y,Z
    0x587bb833af30 ---------A   01850  B(Y,Z)=3
    0x587bb833b060 ---------A   01860  NEXT X
    0x587bb833b1d0 ---------A   01870  PRINT"CRUISER"
    0x587bb833b4b0 ---------A   01880  FOR X=1TO3
    0x587bb833b6f0 ---------A T 01890  INPUT Y,Z
    0x587bb833bad0 ---------A T 01900  B(Y,Z)=2
    0x587bb833bc00 ---------A   01910  NEXT X
    0x587bb833bd80 ---------A G 01920  PRINT"DESTROYER <A>"
    0x587bb833c060 ---------A   01930  FOR X=1TO2
    0x587bb833c2a0 ---------A   01940  INPUT Y,Z
    0x587bb833c680 ---------A   01950  B(Y,Z)=1
    0x587bb833c7b0 ---------A   01960  NEXT X
    0x587bb833c850 ---------A T 01970  CLS
    0x587bb833c9a0 ---------A   01980  PRINT"DESTROYER <B>"
    0x587bb833cc80 ---------A   01990  FOR X=1TO2
    0x587bb833cec0 ---------A   02000  INPUT Y,Z
    0x587bb833d2a0 ---------A   02010  B(Y,Z)=.5
    0x587bb833d3d0 ---------A T 02020  NEXT X
    0x587bb833d590 ---------A   02030  PRINT"DO YOU WANT TO SEE MY SHOTS";
    0x587bb833d7b0 ---------A T 02040  INPUT K$
    0x587bb833d840 ---------A   02050  PRINT
    0x587bb833db80 ---------A   02060  IFJ$<>"YES" THEN 2790
    0x587bb833dc00 ---------A   02070  '****START
    0x587bb833dea0 ---------A   02080  IF J$<>"YES" THEN 2130
    0x587bb833e1e0 ---------A   02090  C=C+1
    0x587bb833e250 ---------A   02100  PRINT
    0x587bb833e2d0 ---------A   02110  GOSUB 4480
    0x587bb833e520 ---------A T 02120  PRINT"TURN";C
    0x587bb833e750 ---------A T 02130  A=0
    0x587bb833eae0 ---------A   02140  FOR W=.5TO3 STEP .5
    0x587bb833edc0 ---------A   02150  FOR X=1TO10
    0x587bb833f0b0 ---------A   02160  FOR Y=1 TO 10
    0x587bb833f4f0 ---------A T 02170  IF B(X,Y)=W THEN 2210
    0x587bb833f630 ---------A   02180  NEXT Y
    0x587bb833f780 ---------A T 02190  NEXT X
    0x587bb833f810 ---------A   02200  GOTO 2220
    0x587bb833fd40 ---------A   02210  A=A+INT(W+.5)
    0x587bb833fe70 ---------A T 02220  NEXT W
    0x587bb8340160 ---------A   02230  FOR W=1TO7
    0x587bb8340460 ---------A   02240  C(W)=0
    0x587bb8340750 ---------A   02250  D(W)=0
    0x587bb8340a40 ---------A   02260  F(W)=0
    0x587bb8340d30 ---------A   02270  G(W)=0
    0x587bb8340e60 ---------A T 02280  NEXT W
    0x587bb8341150 ---------A   02290  P3=0
    0x587bb8341420 ---------A   02300  FOR X=1TO10
    0x587bb8341710 ---------A   02310  FOR Y=1TO10
    0x587bb8341b30 ---------A   02320  IF A(X,Y)>10 THEN 2340
    0x587bb8341e70 ---------A   02330  P3=P3+1
    0x587bb8341fa0 ---------A   02340  NEXT Y
    0x587bb83420f0 ---------A   02350  NEXT X
    0x587bb8342170 ---------- T 02360  CLS
    0x587bb83424c0 ---------A   02370  PRINT"YOU HAVE";A;"SHOTS."
    0x587bb8342770 ---------A   02380  IF P3>A THEN 2410
    0x587bb83428f0 ---------A T 02390  PRINT"YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    0x587bb8342970 ---------A   02400  GOTO 3070
    0x587bb8342bd0 ---------A   02410  IF A<>0 THEN 2460
    0x587bb8342d30 ---------A   02420  PRINT"I HAVE WON."
    0x587bb83435a0 ---------- T 02430  PRINT
    0x587bb8343600 ----------   02440  PRINT
    0x587bb8343660 ---------A   02450  END
    0x587bb8343960 ---------A   02460  FOR W=1TOA
    0x587bb8343bb0 ---------A   02470  INPUT X,Y
    0x587bb8343f10 ---------A T 02480  IF X<>INT(X) THEN 2540
    0x587bb8344170 ---------A   02490  IF X>10 THEN 2540
    0x587bb83443e0 ---------A   02500  IF X<1 THEN 2540
    0x587bb8344740 ---------A T 02510  IF Y<>INT(Y) THEN 2540
    0x587bb83449a0 ---------A   02520  IF Y>10 THEN 2540
    0x587bb8344c10 ---------A T 02530  IF Y>=1 THEN 2560
    0x587bb8344d70 ---------A   02540  PRINT"ILLEGAL, ENTER AGAIN."
    0x587bb8344e00 ---------A T 02550  GOTO 2470
    0x587bb8345210 ---------A   02560  IF A(X,Y)>10 THEN 2610
    0x587bb8345530 ---------A T 02570  C(W)=X
    0x587bb8345840 ---------A T 02580  D(W)=Y
    0x587bb8345970 ---------A   02590  NEXT W
    0x587bb8345a20 ---------A   02600  GOTO 2630
    0x587bb8345f40 ---------A   02610  PRINT"YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    0x587bb8345fc0 ---------A   02620  GOTO 2470
    0x587bb83462c0 ---------A   02630  FOR W=1TOA
    0x587bb83468b0 ---------A   02640  IF A(C(W),D(W))=3 THEN 2710
    0x587bb8346ea0 ---------A   02650  IF A(C(W),D(W))=2 THEN 2730
    0x587bb8347490 ---------A T 02660  IF A(C(W),D(W))=1 THEN 2750
    0x587bb8347a70 ---------A   02670  IF A(C(W),D(W))=.5 THEN 2770
    0x587bb8348130 ---------A   02680  A(C(W),D(W))=10+C
    0x587bb8348260 ---------A   02690  NEXT W
    0x587bb8348300 ---------A   02700  GOTO 2790
    0x587bb8348460 ---------A   02710  PRINT"YOU HIT MY BATTLESHIP."
    0x587bb83484f0 ---------A T 02720  GOTO 2680
    0x587bb8348640 ---------A   02730  PRINT"YOU HIT MY CRUISER."
    0x587bb83486d0 ---------A T 02740  GOTO 2680
    0x587bb8348830 ---------A   02750  PRINT"YOU HIT MY DESTROYER <A>."
    0x587bb83488c0 ---------A   02760  GOTO 2680
    0x587bb8348a20 ---------A   02770  PRINT"YOU HIT MY DESTROYER <B>."
    0x587bb8348aa0 ---------A   02780  GOTO 2680
    0x587bb8348cc0 ---------A   02790  A=0
    0x587bb8348f30 ---------A   02800  IF J$="YES" THEN 2850
    0x587bb8349270 ---------A T 02810  C=C+1
    0x587bb83492c0 ----------   02820  PRINT
    0x587bb8349340 ---------A   02830  GOSUB 4480
    0x587bb8349590 ---------A   02840  PRINT"TURN";C
    0x587bb83497c0 ---------A   02850  A=0
    0x587bb8349b50 ---------A   02860  FOR W=.5TO3 STEP .5
    0x587bb8349e30 ---------A   02870  FOR X=1TO10
    0x587bb834a120 ---------A   02880  FOR Y=1TO10
    0x587bb834a560 ---------A   02890  IF A(X,Y)=W THEN 2930
    0x587bb834a6a0 ---------A   02900  NEXT Y
    0x587bb834a7f0 ---------A   02910  NEXT X
    0x587bb834a880 ---------A   02920  GOTO 2940
    0x587bb834adb0 ---------A   02930  A=A+INT(W+.5)
    0x587bb834aee0 ---------A T 02940  NEXT W
    0x587bb834b110 ---------A   02950  P3=0
    0x587bb834b3e0 ---------A   02960  FOR X=1TO10
    0x587bb834b6d0 ---------A   02970  FOR Y=1TO10
    0x587bb834baf0 ---------A   02980  IF A(X,Y)>10 THEN 3000
    0x587bb834be30 ---------A T 02990  P3=P3+1
    0x587bb834bf60 ---------A   03000  NEXT Y
    0x587bb834c0b0 ---------A T 03010  NEXT X
    0x587bb834c430 ---------A   03020  PRINT"I HAVE";A;"SHOTS"
    0x587bb834c6d0 ---------A T 03030  IF P3>A THEN 3060
    0x587bb834c840 ---------A   03040  PRINT"I HAVE MORE SHOTS THAN BLANK SQUARES."
    0x587bb834c8c0 ---------A   03050  GOTO 2420
    0x587bb834cb20 ---------A   03060  IF A<>0 THEN 3140
    0x587bb834cc80 ---------A   03070  PRINT"YOU HAVE WON."
    0x587bb834cd10 ---------A   03080  GOTO 4550
    0x587bb834d2f0 ---------B   03090  X=INT(RND(0)*10+1)
    0x587bb834d8c0 ---------B   03100  Y=INT(RND(0)*10+1)
    0x587bb834dea0 ---------B   03110  V=INT(3*RND(0)-1)
    0x587bb834e470 ---------B   03120  V2=INT(3*RND(0)-1)
    0x587bb834e4c0 ---------B   03130  RETURN
    0x587bb834e7b0 ---------A T 03140  FOR W=1TO 12
    0x587bb834eaf0 ---------A   03150  IF H(W)>0 THEN 3980
    0x587bb834ec30 ---------A   03160  NEXT W
    0x587bb834ecc0 ---------A T 03170  '*****RANDOM
    0x587bb834eef0 ---------A   03180  W=0
    0x587bb834f1c0 ---------A   03190  R3=0
    0x587bb834f230 ---------A   03200  GOSUB 3090
    0x587bb834f2a0 ---------A   03210  RESTORE
    0x587bb834f570 ---------A T 03220  R2=0
    0x587bb834f8b0 ---------A   03230  R3=R3+1
    0x587bb834fb00 ---------A T 03240  IF R3>100 THEN 3190
    0x587bb834fd60 ---------A   03250  IF X>10 THEN 3290
    0x587bb834ffd0 ---------A   03260  IF X>0 THEN 3300
    0x587bb83505b0 ---------A   03270  X=1+INT(RND(0)*2.5)
    0x587bb8350630 ---------A   03280  GOTO 3300
    0x587bb8350c00 ---------A   03290  X=10-INT(RND(0)*2.5)
    0x587bb8350e50 ---------A   03300  IF Y>10 THEN 3340
    0x587bb83510c0 ---------A B 03310  IF Y>0 THEN 3450
    0x587bb83516a0 ---------A T 03320  Y=1+INT(RND(0)*2.5)
    0x587bb8351720 ---------A   03330  GOTO 3450
    0x587bb8351cf0 ---------A T 03340  Y=10-INT(RND(0)*2.5)
    0x587bb8351d60 ---------A   03350  GOTO 3450
    0x587bb8352070 ---------A   03360  F(W)=X
    0x587bb8352380 ---------A   03370  G(W)=Y
    0x587bb83525f0 ---------A   03380  IF W=A THEN 3560
    0x587bb8352850 ---------A   03390  IF R2=6 THEN 3210
    0x587bb8352c10 ---------A   03400  READ X1,Y1
    0x587bb8352f50 ---------A   03410  R2=R2+1
    0x587bb8353a40 ---------A   03420  DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    0x587bb8353d90 ---------A   03430  X=X+X1
    0x587bb83540e0 ---------A   03440  Y=Y+Y1
    0x587bb8354330 ---------A   03450  IF X>10 THEN 3390
    0x587bb8354590 ---------A   03460  IF X<1 THEN 3390
    0x587bb83547f0 ---------A   03470  IF Y>10 THEN 3390
    0x587bb8354a60 ---------A   03480  IF Y<1 THEN 3390
    0x587bb8354e80 ---------A   03490  IF B(X,Y)>10 THEN 3390
    0x587bb8355250 ---------A   03500  FOR Q9=1 TO W
    0x587bb83555c0 ---------A   03510  IF F(Q9)<>X THEN 3530
    0x587bb8355920 ---------A   03520  IF G(Q9)=Y THEN 3390
    0x587bb8355a60 ---------A   03530  NEXT Q9
    0x587bb8355db0 ---------A   03540  W=W+1
    0x587bb8355e30 ---------A   03550  GOTO 3360
    0x587bb8356240 ---------A   03560  IF LEFT$(K$,1)<>"Y" THEN 3600
    0x587bb8356600 ---------A   03570  FOR Z5=1TOA
    0x587bb8356a20 ---------A   03580  PRINTF(Z5);G(Z5)
    0x587bb8356b60 ---------A   03590  NEXT Z5
    0x587bb8356e80 ---------A   03600  FOR W=1TOA
    0x587bb8357470 ---------A   03610  IF B(F(W),G(W))=3 THEN 3680
    0x587bb8357a60 ---------A   03620  IF B(F(W),G(W))=2 THEN 3700
    0x587bb8358050 ---------A   03630  IF B(F(W),G(W))=1 THEN 3740
    0x587bb8358630 ---------A   03640  IF B(F(W),G(W))=.5 THEN 3720
    0x587bb8358cf0 ---------A   03650  B(F(W),G(W))=10+C
    0x587bb8358e20 ---------A   03660  NEXT W
    0x587bb8358ec0 ---------A   03670  GOTO 2080
    0x587bb8359010 ---------A   03680  PRINT"I HIT YOUR BATTLESHIP"
    0x587bb83590a0 ---------A   03690  GOTO 3750
    0x587bb83591f0 ---------A   03700  PRINT"I HIT YOUR CRUISER"
    0x587bb8359280 ---------A   03710  GOTO 3750
    0x587bb83593e0 ---------A   03720  PRINT"I HIT YOUR DESTROYER<B>"
    0x587bb8359470 ---------A   03730  GOTO 3750
    0x587bb8342ea0 ---------A   03740  PRINT"I HIT YOUR DESTROYER<A>"
    0x587bb8343250 ---------A   03750  FOR Q=1 TO 12
    0x587bb835a4d0 ---------A   03760  IF E(Q)<>-1 THEN 3910
    0x587bb835a8f0 ---------A   03770  E(Q)=10+C
    0x587bb835af80 ---------A   03780  H(Q)=B(F(W),G(W))
    0x587bb835b250 ---------A   03790  M3=0
    0x587bb835b5f0 ---------A   03800  FOR M2=1TO12
    0x587bb835ba30 ---------A   03810  IF H(M2)<>H(Q) THEN 3830
    0x587bb835bd70 ---------A   03820  M3=M3+1
    0x587bb835bea0 ---------A   03830  NEXT M2
    0x587bb835cae0 ---------A   03840  IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 3650
    0x587bb835cdd0 ---------A   03850  FOR M2=1 TO 12
    0x587bb835d210 ---------A   03860  IF H(M2)<>H(Q) THEN 3890
    0x587bb835d510 ---------A   03870  E(M2)=-1
    0x587bb835d800 ---------A   03880  H(M2)=-1
    0x587bb835d930 ---------A   03890  NEXT M2
    0x587bb835d9c0 ---------A   03900  GOTO 3650
    0x587bb835daf0 ---------A   03910  NEXT Q
    0x587bb835dc70 ---------A   03920  PRINT"PROGRAM ABORT:"
    0x587bb835df60 ---------A   03930  FOR Q=1TO12
    0x587bb835e4b0 ---------A   03940  PRINT"E(";Q;")=";E(Q)
    0x587bb835e9f0 ---------A   03950  PRINT"H(";Q;")=";H(Q)
    0x587bb835eb30 ---------A   03960  NEXT Q
    0x587bb835ebd0 ---------A   03970  GOTO 4480
    0x587bb835ec40 ---------A   03980  '********USINGEARRAY
    0x587bb835eff0 ---------A   03990  FOR R=1TO10
    0x587bb835f390 ---------A   04000  FOR S=1TO10
    0x587bb835f770 ---------A   04010  K(R,S)=0
    0x587bb835f8a0 ---------A   04020  NEXT S
    0x587bb835f9f0 ---------A   04030  NEXT R
    0x587bb835fdb0 ---------A   04040  FOR U=1TO12
    0x587bb83600f0 ---------A   04050  IF E(U)<10 THEN 4200
    0x587bb83603d0 ---------A   04060  FOR R=1TO10
    0x587bb83606c0 ---------A   04070  FOR S=1TO10
    0x587bb8360ae0 ---------A   04080  IF B(R,S)<10 THEN 4110
    0x587bb8360ec0 ---------A   04090  K(R,S)=-10000000
    0x587bb8360f40 ---------A   04100  GOTO 4180
    0x587bb83616e0 ---------A   04110  FOR M=SGN(1-R) TO SGN(10-R)
    0x587bb8361e70 ---------A   04120  FOR N=SGN(1-2) TO SGN(10-S)
    0x587bb8362440 ---------A   04130  IF N+M+N*M=0 THEN 4160
    0x587bb8362bb0 ---------A   04140  IF B(R+M,S+N)<>E(U) THEN 4160
    0x587bb8363870 ---------A   04150  K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
    0x587bb83639a0 ---------A   04160  NEXT N
    0x587bb8363af0 ---------A   04170  NEXT M
    0x587bb8363c40 ---------A   04180  NEXT S
    0x587bb8363d90 ---------A   04190  NEXT R
    0x587bb8363ee0 ---------A   04200  NEXT U
    0x587bb83641f0 ---------A   04210  FOR R=1TOA
    0x587bb8364510 ---------A   04220  F(R)=R
    0x587bb8364820 ---------A   04230  G(R)=R
    0x587bb8364950 ---------A   04240  NEXT R
    0x587bb8364c40 ---------A   04250  FOR R=1TO10
    0x587bb8364f20 ---------A   04260  FOR S=1TO10
    0x587bb8365140 ---------A   04270  Q9=1
    0x587bb8365450 ---------A   04280  FOR M=1TOA
    0x587bb8365dd0 ---------A   04290  IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 4310
    0x587bb8366010 ---------A   04300  Q9=M
    0x587bb8366140 ---------A   04310  NEXT M
    0x587bb83663d0 ---------A   04320  IF R>A THEN 4340
    0x587bb8366670 ---------A   04330  IF R=S THEN 4410
    0x587bb8366e30 ---------A   04340  IF K(R,S)<K(F(Q9),G(Q9)) THEN 4410
    0x587bb8367140 ---------A   04350  FOR M=1TOA
    0x587bb83674b0 ---------A   04360  IF F(M)<>R THEN 4390
    0x587bb8367810 ---------A   04370  IF G(M)=S THEN 4410
    0x587bb8367950 ---------A   04380  NEXT M
    0x587bb8367c80 ---------A   04390  F(Q9)=R
    0x587bb8367f90 ---------A   04400  G(Q9)=S
    0x587bb83680c0 ---------A   04410  NEXT S
    0x587bb8368210 ---------A   04420  NEXT R
    0x587bb83682b0 ---------A   04430  GOTO 3560
    0x587bb8368f20 ----------   04440  PU=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    0x587bb8368f70 ----------   04450  RETURN
    0x587bb83697c0 ----------   04460  PU=K+INT(K/4)-SGN(K-1)
    0x587bb8369810 ----------   04470  RETURN
    0x587bb83699a0 ---------A   04480  PRINT"TO CONTINUE, HIT ANY KEY"
    0x587bb8369d40 ----------   04490  A$=INKEY$
    0x587bb8369fb0 ---------A   04500  IF A$="" THEN 4500
    0x587bb836a010 ----------   04510  CLS
    0x587bb836a060 ---------A   04520  RETURN
    0x587bb836a0c0 ----------   04530  PRINT
    0x587bb836a120 ----------   04540  PRINT
    0x587bb836a180 ---------A   04550  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     04570 - 10000    5440 

 */



/*
 *  Symbol Table Listing for 'basic/salvocc.bas'
 *
    A               Array    Integer         {0,9} {0,9} 
    A$                       String      
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
    FRE             Function Integer         args=1, char*  
    G               Array    Integer         {0,11} 
    H               Array    Integer         {0,11} 
    HEX$            Function String          args=1, int    
    II                       Integer     
    INKEY$                   String      
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J$                       String      
    K               Array    Integer         {0,9} {0,9} 
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
    PU                       Integer     
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
 *  Listing of basic/salvocc.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x587bb8327db0 ---------A   01000  REM NOTE
    0x587bb8327f30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x587bb8327e70 ---------A   01020  CLS
    0x587bb83256d0 ---------A   01030  PRINT@284,"SALVO"
    0x587bb8325670 ---------A   01040  PRINT@409,"COPYRIGHT BY"
    0x587bb83162b0 ---------A   01050  PRINT@534,"CREATIVE COMPUTING"
    0x587bb83259e0 ---------A   01060  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x587bb8326040 ---------A   01070  FOR II=1TO1500
    0x587bb83280b0 ---------A   01080  NEXT
    0x587bb8325e40 ---------A   01090  CLS
    0x587bb8325e90 ---------A   01100  PRINT
    0x587bb8326480 ---------A   01110  PRINT
    0x587bb8328100 ---------A   01120  PRINTTAB(6)"WHILE I AM PLANNING MY BOARD, YOU CAN BE THINKING OF"
    0x587bb83281b0 ---------A   01130  PRINT
    0x587bb83267c0 ---------A   01140  PRINTTAB(8)"THE LAY OUT FOR YOUR SHIPS. YOUR SHIPS INCLUDE:"
    0x587bb8326870 ---------A   01150  PRINT
    0x587bb832daa0 ---------A   01160  PRINTTAB(15)"A BATTLESHIP, (FIVE CO-ORDINATES LONG)"
    0x587bb832db50 ---------A   01170  PRINT
    0x587bb832dd70 ---------A   01180  PRINTTAB(15)"A CRUISER, (THREE CO-ORDINATES LONG)"
    0x587bb832ddd0 ---------A   01190  PRINT
    0x587bb832dff0 ---------A   01200  PRINTTAB(15)"DESTROYER <A>"
    0x587bb832e070 ---------A   01210  PRINT
    0x587bb832e0f0 ---------A   01220  '
    0x587bb832f950 ---------A   01230  DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    0x587bb832fc20 ---------A   01240  Z8=0
    0x587bb832ffb0 ---------A   01250  FOR W=1TO12
    0x587bb83302b0 ---------A   01260  E(W)=-1
    0x587bb83305a0 ---------A   01270  H(W)=-1
    0x587bb83306d0 ---------A   01280  NEXT W
    0x587bb8330a80 ---------A   01290  FOR X=1TO10
    0x587bb8330e20 ---------A   01300  FOR Y=1TO10
    0x587bb8331200 ---------A   01310  B(X,Y)=0
    0x587bb8331330 ---------A   01320  NEXT Y
    0x587bb8331480 ---------A   01330  NEXT X
    0x587bb8331770 ---------A   01340  FOR X=1TO12
    0x587bb8331c80 ---------A   01350  F(X)=0
    0x587bb8331f70 ---------A   01360  G(X)=0
    0x587bb83320a0 ---------A   01370  NEXT X
    0x587bb8332390 ---------A T 01380  FOR X=1TO10
    0x587bb8332670 ---------A   01390  FOR Y=1TO10
    0x587bb8332a50 ---------A   01400  A(X,Y)=0
    0x587bb8332b80 ---------A   01410  NEXT Y
    0x587bb8332cd0 ---------A   01420  NEXT X
    0x587bb8333060 ---------A   01430  FOR K=4 TO 1 STEP -1
    0x587bb8333340 ---------A   01440  U6=0
    0x587bb83333c0 ---------A T 01450  GOSUB 4450
    0x587bb8333b00 ---------A   01460  IF V+V2+V*V2=0 THEN 1450
    0x587bb8333b60 ---------A   01470  GOSUB 4540
    0x587bb83340c0 ---------A   01480  IF Y+V*PU>10 THEN 1450
    0x587bb8334120 ---------A   01490  GOSUB 4540
    0x587bb83345c0 ---------A   01500  IF Y+V*PU<1 THEN 1450
    0x587bb8334620 ---------A   01510  GOSUB 4540
    0x587bb8334ac0 ---------A   01520  IF X+V2*PU>10 THEN 1450
    0x587bb8334b20 ---------A   01530  GOSUB 4540
    0x587bb8334fb0 ---------A   01540  IF X+V2*PU<1 THEN 1450
    0x587bb83352f0 ---------A   01550  U6=U6+1
    0x587bb8335550 ---------A   01560  IF U6>25 THEN 1380
    0x587bb83355b0 ---------A   01570  GOSUB 4540
    0x587bb8335970 ---------A   01580  FOR Z=0 TO PU
    0x587bb83359d0 ---------A   01590  GOSUB 4510
    0x587bb8336050 ---------A   01600  F(Z+PU)=X+V2*Z
    0x587bb83360a0 ---------A   01610  GOSUB 4510
    0x587bb8336710 ---------A   01620  G(Z+PU)=Y+V*Z
    0x587bb8336840 ---------A   01630  NEXT Z
    0x587bb83368b0 ---------A   01640  GOSUB 4510
    0x587bb8336bb0 ---------A   01650  U8=PU
    0x587bb8336c00 ---------A   01660  GOSUB 4540
    0x587bb8336fa0 ---------A   01670  IF U8>U8+PU THEN 1760
    0x587bb8337000 ---------A   01680  GOSUB 4540
    0x587bb83374f0 ---------A   01690  FOR Z2=U8 TO U8+PU
    0x587bb8337750 ---------A   01700  IF U8<2 THEN 1740
    0x587bb8337c40 ---------A   01710  FOR Z3=1 TO U8-1
    0x587bb83388e0 ---------A   01720  IF SQR((F(Z3)-F(Z2))^2+(G(Z3)-G(Z2))^2)<3.59 THEN 1450
    0x587bb8338a20 ---------A   01730  NEXT Z3
    0x587bb8338b70 ---------A T 01740  NEXT Z2
    0x587bb8338bf0 ---------A   01750  GOSUB 4540
    0x587bb8338f00 ---------A T 01760  FOR Z=0TOPU
    0x587bb8339c40 ---------A   01770  A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
    0x587bb833a180 ---------A   01780  NEXT Z
    0x587bb833a2d0 ---------A   01790  NEXT K
    0x587bb833a370 ---------A   01800  CLS
    0x587bb833a4d0 ---------A   01810  PRINT"ENTER COORDINATES FOR ..."
    0x587bb833a630 ---------A   01820  PRINT"BATTLESHIP"
    0x587bb833a910 ---------A   01830  FOR X=1TO5
    0x587bb833ab50 ---------A   01840  INPUT Y,Z
    0x587bb833af30 ---------A   01850  B(Y,Z)=3
    0x587bb833b060 ---------A   01860  NEXT X
    0x587bb833b1d0 ---------A   01870  PRINT"CRUISER"
    0x587bb833b4b0 ---------A   01880  FOR X=1TO3
    0x587bb833b6f0 ---------A   01890  INPUT Y,Z
    0x587bb833bad0 ---------A   01900  B(Y,Z)=2
    0x587bb833bc00 ---------A   01910  NEXT X
    0x587bb833bd80 ---------A   01920  PRINT"DESTROYER <A>"
    0x587bb833c060 ---------A   01930  FOR X=1TO2
    0x587bb833c2a0 ---------A   01940  INPUT Y,Z
    0x587bb833c680 ---------A   01950  B(Y,Z)=1
    0x587bb833c7b0 ---------A   01960  NEXT X
    0x587bb833c850 ---------A   01970  CLS
    0x587bb833c9a0 ---------A   01980  PRINT"DESTROYER <B>"
    0x587bb833cc80 ---------A   01990  FOR X=1TO2
    0x587bb833cec0 ---------A   02000  INPUT Y,Z
    0x587bb833d2a0 ---------A   02010  B(Y,Z)=.5
    0x587bb833d3d0 ---------A   02020  NEXT X
    0x587bb833d590 ---------A   02030  PRINT"DO YOU WANT TO SEE MY SHOTS";
    0x587bb833d7b0 ---------A   02040  INPUT K$
    0x587bb833d840 ---------A   02050  PRINT
    0x587bb833db80 ---------A   02060  IFJ$<>"YES" THEN 2790
    0x587bb833dc00 ---------A   02070  '****START
    0x587bb833dea0 ---------A T 02080  IF J$<>"YES" THEN 2130
    0x587bb833e1e0 ---------A   02090  C=C+1
    0x587bb833e250 ---------A   02100  PRINT
    0x587bb833e2d0 ---------A   02110  GOSUB 4390
    0x587bb833e520 ---------A   02120  PRINT"TURN";C
    0x587bb833e750 ---------A T 02130  A=0
    0x587bb833eae0 ---------A   02140  FOR W=.5TO3 STEP .5
    0x587bb833edc0 ---------A   02150  FOR X=1TO10
    0x587bb833f0b0 ---------A   02160  FOR Y=1 TO 10
    0x587bb833f4f0 ---------A   02170  IF B(X,Y)=W THEN 2210
    0x587bb833f630 ---------A   02180  NEXT Y
    0x587bb833f780 ---------A   02190  NEXT X
    0x587bb833f810 ---------A   02200  GOTO 2220
    0x587bb833fd40 ---------A T 02210  A=A+INT(W+.5)
    0x587bb833fe70 ---------A T 02220  NEXT W
    0x587bb8340160 ---------A   02230  FOR W=1TO7
    0x587bb8340460 ---------A   02240  C(W)=0
    0x587bb8340750 ---------A   02250  D(W)=0
    0x587bb8340a40 ---------A   02260  F(W)=0
    0x587bb8340d30 ---------A   02270  G(W)=0
    0x587bb8340e60 ---------A   02280  NEXT W
    0x587bb8341150 ---------A   02290  P3=0
    0x587bb8341420 ---------A   02300  FOR X=1TO10
    0x587bb8341710 ---------A   02310  FOR Y=1TO10
    0x587bb8341b30 ---------A   02320  IF A(X,Y)>10 THEN 2340
    0x587bb8341e70 ---------A   02330  P3=P3+1
    0x587bb8341fa0 ---------A T 02340  NEXT Y
    0x587bb83420f0 ---------A   02350  NEXT X
    0x587bb8342170 ---------A   02360  CLS
    0x587bb83424c0 ---------A   02370  PRINT"YOU HAVE";A;"SHOTS."
    0x587bb8342770 ---------A   02380  IF P3>A THEN 2410
    0x587bb83428f0 ---------A   02390  PRINT"YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    0x587bb8342970 ---------A   02400  GOTO 3070
    0x587bb8342bd0 ---------A T 02410  IF A<>0 THEN 2460
    0x587bb8342d30 ---------A T 02420  PRINT"I HAVE WON."
    0x587bb83435a0 ---------A   02430  PRINT
    0x587bb8343600 ---------A   02440  PRINT
    0x587bb8343660 ---------A   02450  END
    0x587bb8343960 ---------A T 02460  FOR W=1TOA
    0x587bb8343bb0 ---------A T 02470  INPUT X,Y
    0x587bb8343f10 ---------A   02480  IF X<>INT(X) THEN 2540
    0x587bb8344170 ---------A   02490  IF X>10 THEN 2540
    0x587bb83443e0 ---------A   02500  IF X<1 THEN 2540
    0x587bb8344740 ---------A   02510  IF Y<>INT(Y) THEN 2540
    0x587bb83449a0 ---------A   02520  IF Y>10 THEN 2540
    0x587bb8344c10 ---------A   02530  IF Y>=1 THEN 2560
    0x587bb8344d70 ---------A T 02540  PRINT"ILLEGAL, ENTER AGAIN."
    0x587bb8344e00 ---------A   02550  GOTO 2470
    0x587bb8345210 ---------A T 02560  IF A(X,Y)>10 THEN 2610
    0x587bb8345530 ---------A   02570  C(W)=X
    0x587bb8345840 ---------A   02580  D(W)=Y
    0x587bb8345970 ---------A   02590  NEXT W
    0x587bb8345a20 ---------A   02600  GOTO 2630
    0x587bb8345f40 ---------A T 02610  PRINT"YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    0x587bb8345fc0 ---------A   02620  GOTO 2470
    0x587bb83462c0 ---------A T 02630  FOR W=1TOA
    0x587bb83468b0 ---------A   02640  IF A(C(W),D(W))=3 THEN 2710
    0x587bb8346ea0 ---------A   02650  IF A(C(W),D(W))=2 THEN 2730
    0x587bb8347490 ---------A   02660  IF A(C(W),D(W))=1 THEN 2750
    0x587bb8347a70 ---------A   02670  IF A(C(W),D(W))=.5 THEN 2770
    0x587bb8348130 ---------A T 02680  A(C(W),D(W))=10+C
    0x587bb8348260 ---------A   02690  NEXT W
    0x587bb8348300 ---------A   02700  GOTO 2790
    0x587bb8348460 ---------A T 02710  PRINT"YOU HIT MY BATTLESHIP."
    0x587bb83484f0 ---------A   02720  GOTO 2680
    0x587bb8348640 ---------A T 02730  PRINT"YOU HIT MY CRUISER."
    0x587bb83486d0 ---------A   02740  GOTO 2680
    0x587bb8348830 ---------A T 02750  PRINT"YOU HIT MY DESTROYER <A>."
    0x587bb83488c0 ---------A   02760  GOTO 2680
    0x587bb8348a20 ---------A T 02770  PRINT"YOU HIT MY DESTROYER <B>."
    0x587bb8348aa0 ---------A   02780  GOTO 2680
    0x587bb8348cc0 ---------A T 02790  A=0
    0x587bb8348f30 ---------A   02800  IF J$="YES" THEN 2850
    0x587bb8349270 ---------A   02810  C=C+1
    0x587bb83492c0 ---------A   02820  PRINT
    0x587bb8349340 ---------A   02830  GOSUB 4390
    0x587bb8349590 ---------A   02840  PRINT"TURN";C
    0x587bb83497c0 ---------A T 02850  A=0
    0x587bb8349b50 ---------A   02860  FOR W=.5TO3 STEP .5
    0x587bb8349e30 ---------A   02870  FOR X=1TO10
    0x587bb834a120 ---------A   02880  FOR Y=1TO10
    0x587bb834a560 ---------A   02890  IF A(X,Y)=W THEN 2930
    0x587bb834a6a0 ---------A   02900  NEXT Y
    0x587bb834a7f0 ---------A   02910  NEXT X
    0x587bb834a880 ---------A   02920  GOTO 2940
    0x587bb834adb0 ---------A T 02930  A=A+INT(W+.5)
    0x587bb834aee0 ---------A T 02940  NEXT W
    0x587bb834b110 ---------A   02950  P3=0
    0x587bb834b3e0 ---------A   02960  FOR X=1TO10
    0x587bb834b6d0 ---------A   02970  FOR Y=1TO10
    0x587bb834baf0 ---------A   02980  IF A(X,Y)>10 THEN 3000
    0x587bb834be30 ---------A   02990  P3=P3+1
    0x587bb834bf60 ---------A T 03000  NEXT Y
    0x587bb834c0b0 ---------A   03010  NEXT X
    0x587bb834c430 ---------A   03020  PRINT"I HAVE";A;"SHOTS"
    0x587bb834c6d0 ---------A   03030  IF P3>A THEN 3060
    0x587bb834c840 ---------A   03040  PRINT"I HAVE MORE SHOTS THAN BLANK SQUARES."
    0x587bb834c8c0 ---------A   03050  GOTO 2420
    0x587bb834cb20 ---------A T 03060  IF A<>0 THEN 3090
    0x587bb834cc80 ---------A T 03070  PRINT"YOU HAVE WON."
    0x587bb834cd10 ---------A   03080  GOTO 4440
    0x587bb834e7b0 ---------A T 03090  FOR W=1TO 12
    0x587bb834eaf0 ---------A   03100  IF H(W)>0 THEN 3930
    0x587bb834ec30 ---------A   03110  NEXT W
    0x587bb834ecc0 ---------A   03120  '*****RANDOM
    0x587bb834eef0 ---------A   03130  W=0
    0x587bb834f1c0 ---------A T 03140  R3=0
    0x587bb834f230 ---------A   03150  GOSUB 4450
    0x587bb834f2a0 ---------A T 03160  RESTORE
    0x587bb834f570 ---------A   03170  R2=0
    0x587bb834f8b0 ---------A   03180  R3=R3+1
    0x587bb834fb00 ---------A   03190  IF R3>100 THEN 3140
    0x587bb834fd60 ---------A   03200  IF X>10 THEN 3240
    0x587bb834ffd0 ---------A   03210  IF X>0 THEN 3250
    0x587bb83505b0 ---------A   03220  X=1+INT(RND(0)*2.5)
    0x587bb8350630 ---------A   03230  GOTO 3250
    0x587bb8350c00 ---------A T 03240  X=10-INT(RND(0)*2.5)
    0x587bb8350e50 ---------A T 03250  IF Y>10 THEN 3290
    0x587bb83510c0 ---------A   03260  IF Y>0 THEN 3400
    0x587bb83516a0 ---------A   03270  Y=1+INT(RND(0)*2.5)
    0x587bb8351720 ---------A   03280  GOTO 3400
    0x587bb8351cf0 ---------A T 03290  Y=10-INT(RND(0)*2.5)
    0x587bb8351d60 ---------A   03300  GOTO 3400
    0x587bb8352070 ---------A T 03310  F(W)=X
    0x587bb8352380 ---------A   03320  G(W)=Y
    0x587bb83525f0 ---------A   03330  IF W=A THEN 3510
    0x587bb8352850 ---------A T 03340  IF R2=6 THEN 3160
    0x587bb8352c10 ---------A   03350  READ X1,Y1
    0x587bb8352f50 ---------A   03360  R2=R2+1
    0x587bb8353a40 ---------A   03370  DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    0x587bb8353d90 ---------A   03380  X=X+X1
    0x587bb83540e0 ---------A   03390  Y=Y+Y1
    0x587bb8354330 ---------A T 03400  IF X>10 THEN 3340
    0x587bb8354590 ---------A   03410  IF X<1 THEN 3340
    0x587bb83547f0 ---------A   03420  IF Y>10 THEN 3340
    0x587bb8354a60 ---------A   03430  IF Y<1 THEN 3340
    0x587bb8354e80 ---------A   03440  IF B(X,Y)>10 THEN 3340
    0x587bb8355250 ---------A   03450  FOR Q9=1 TO W
    0x587bb83555c0 ---------A   03460  IF F(Q9)<>X THEN 3480
    0x587bb8355920 ---------A   03470  IF G(Q9)=Y THEN 3340
    0x587bb8355a60 ---------A T 03480  NEXT Q9
    0x587bb8355db0 ---------A   03490  W=W+1
    0x587bb8355e30 ---------A   03500  GOTO 3310
    0x587bb8356240 ---------A T 03510  IF LEFT$(K$,1)<>"Y" THEN 3550
    0x587bb8356600 ---------A   03520  FOR Z5=1TOA
    0x587bb8356a20 ---------A   03530  PRINTF(Z5);G(Z5)
    0x587bb8356b60 ---------A   03540  NEXT Z5
    0x587bb8356e80 ---------A T 03550  FOR W=1TOA
    0x587bb8357470 ---------A   03560  IF B(F(W),G(W))=3 THEN 3630
    0x587bb8357a60 ---------A   03570  IF B(F(W),G(W))=2 THEN 3650
    0x587bb8358050 ---------A   03580  IF B(F(W),G(W))=1 THEN 3690
    0x587bb8358630 ---------A   03590  IF B(F(W),G(W))=.5 THEN 3670
    0x587bb8358cf0 ---------A T 03600  B(F(W),G(W))=10+C
    0x587bb8358e20 ---------A   03610  NEXT W
    0x587bb8358ec0 ---------A   03620  GOTO 2080
    0x587bb8359010 ---------A T 03630  PRINT"I HIT YOUR BATTLESHIP"
    0x587bb83590a0 ---------A   03640  GOTO 3700
    0x587bb83591f0 ---------A T 03650  PRINT"I HIT YOUR CRUISER"
    0x587bb8359280 ---------A   03660  GOTO 3700
    0x587bb83593e0 ---------A T 03670  PRINT"I HIT YOUR DESTROYER<B>"
    0x587bb8359470 ---------A   03680  GOTO 3700
    0x587bb8342ea0 ---------A T 03690  PRINT"I HIT YOUR DESTROYER<A>"
    0x587bb8343250 ---------A T 03700  FOR Q=1 TO 12
    0x587bb835a4d0 ---------A   03710  IF E(Q)<>-1 THEN 3860
    0x587bb835a8f0 ---------A   03720  E(Q)=10+C
    0x587bb835af80 ---------A   03730  H(Q)=B(F(W),G(W))
    0x587bb835b250 ---------A   03740  M3=0
    0x587bb835b5f0 ---------A   03750  FOR M2=1TO12
    0x587bb835ba30 ---------A   03760  IF H(M2)<>H(Q) THEN 3780
    0x587bb835bd70 ---------A   03770  M3=M3+1
    0x587bb835bea0 ---------A T 03780  NEXT M2
    0x587bb835cae0 ---------A   03790  IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 3600
    0x587bb835cdd0 ---------A   03800  FOR M2=1 TO 12
    0x587bb835d210 ---------A   03810  IF H(M2)<>H(Q) THEN 3840
    0x587bb835d510 ---------A   03820  E(M2)=-1
    0x587bb835d800 ---------A   03830  H(M2)=-1
    0x587bb835d930 ---------A T 03840  NEXT M2
    0x587bb835d9c0 ---------A   03850  GOTO 3600
    0x587bb835daf0 ---------A T 03860  NEXT Q
    0x587bb835dc70 ---------A   03870  PRINT"PROGRAM ABORT:"
    0x587bb835df60 ---------A   03880  FOR Q=1TO12
    0x587bb835e4b0 ---------A   03890  PRINT"E(";Q;")=";E(Q)
    0x587bb835e9f0 ---------A   03900  PRINT"H(";Q;")=";H(Q)
    0x587bb835eb30 ---------A   03910  NEXT Q
    0x587bb835ebd0 ---------A   03920  GOTO 4390
    0x587bb835ec40 ---------A T 03930  '********USINGEARRAY
    0x587bb835eff0 ---------A   03940  FOR R=1TO10
    0x587bb835f390 ---------A   03950  FOR S=1TO10
    0x587bb835f770 ---------A   03960  K(R,S)=0
    0x587bb835f8a0 ---------A   03970  NEXT S
    0x587bb835f9f0 ---------A   03980  NEXT R
    0x587bb835fdb0 ---------A   03990  FOR U=1TO12
    0x587bb83600f0 ---------A   04000  IF E(U)<10 THEN 4150
    0x587bb83603d0 ---------A   04010  FOR R=1TO10
    0x587bb83606c0 ---------A   04020  FOR S=1TO10
    0x587bb8360ae0 ---------A   04030  IF B(R,S)<10 THEN 4060
    0x587bb8360ec0 ---------A   04040  K(R,S)=-10200000
    0x587bb8360f40 ---------A   04050  GOTO 4130
    0x587bb83616e0 ---------A T 04060  FOR M=SGN(1-R) TO SGN(10-R)
    0x587bb8361e70 ---------A   04070  FOR N=SGN(1-2) TO SGN(10-S)
    0x587bb8362440 ---------A   04080  IF N+M+N*M=0 THEN 4110
    0x587bb8362bb0 ---------A   04090  IF B(R+M,S+N)<>E(U) THEN 4110
    0x587bb8363870 ---------A   04100  K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
    0x587bb83639a0 ---------A T 04110  NEXT N
    0x587bb8363af0 ---------A   04120  NEXT M
    0x587bb8363c40 ---------A T 04130  NEXT S
    0x587bb8363d90 ---------A   04140  NEXT R
    0x587bb8363ee0 ---------A T 04150  NEXT U
    0x587bb83641f0 ---------A   04160  FOR R=1TOA
    0x587bb8364510 ---------A   04170  F(R)=R
    0x587bb8364820 ---------A   04180  G(R)=R
    0x587bb8364950 ---------A   04190  NEXT R
    0x587bb8364c40 ---------A   04200  FOR R=1TO10
    0x587bb8364f20 ---------A   04210  FOR S=1TO10
    0x587bb8365140 ---------A   04220  Q9=1
    0x587bb8365450 ---------A   04230  FOR M=1TOA
    0x587bb8365dd0 ---------A   04240  IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 4260
    0x587bb8366010 ---------A   04250  Q9=M
    0x587bb8366140 ---------A T 04260  NEXT M
    0x587bb83663d0 ---------A   04270  IF R>A THEN 4290
    0x587bb8366670 ---------A   04280  IF R=S THEN 4360
    0x587bb8366e30 ---------A T 04290  IF K(R,S)<K(F(Q9),G(Q9)) THEN 4360
    0x587bb8367140 ---------A   04300  FOR M=1TOA
    0x587bb83674b0 ---------A   04310  IF F(M)<>R THEN 4340
    0x587bb8367810 ---------A   04320  IF G(M)=S THEN 4360
    0x587bb8367950 ---------A   04330  NEXT M
    0x587bb8367c80 ---------A T 04340  F(Q9)=R
    0x587bb8367f90 ---------A   04350  G(Q9)=S
    0x587bb83680c0 ---------A T 04360  NEXT S
    0x587bb8368210 ---------A   04370  NEXT R
    0x587bb83682b0 ---------A   04380  GOTO 3510
    0x587bb83699a0 ---------A B 04390  PRINT"TO CONTINUE, HIT ANY KEY"
    0x587bb8369d40 ---------A   04400  A$=INKEY$
    0x587bb8369fb0 ---------A T 04410  IF A$="" THEN 4410
    0x587bb836a010 ---------A   04420  CLS
    0x587bb837df30 ---------A   04430  GOTO 09900
    0x587bb836a180 ---------A T 04440  END
    0x587bb834d2f0 ---------B G 04450  X=INT(RND(0)*10+1)
    0x587bb834d8c0 ---------B   04460  Y=INT(RND(0)*10+1)
    0x587bb834dea0 ---------B   04470  V=INT(3*RND(0)-1)
    0x587bb834e470 ---------B   04480  V2=INT(3*RND(0)-1)
    0x587bb837dee0 ---------B   04490  GOTO 04500
    0x587bb837fe90 ---------B T 04500  RETURN
    0x587bb8368f20 ---------C G 04510  PU=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    0x587bb837de90 ---------C   04520  GOTO 04530
    0x587bb837ff10 ---------C T 04530  RETURN
    0x587bb83697c0 ---------D G 04540  PU=K+INT(K/4)-SGN(K-1)
    0x587bb837de40 ---------D   04550  GOTO 04560
    0x587bb837ff90 ---------D T 04560  RETURN
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
char* data_03370s[]={"1","1","-1","1","1","-3","1","1","0","2","-1","1"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3370, 12,data_03370s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[10][10];                         // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    B_int_arr[10][10];                         // Basic: B 
int    C_int_arr[7];                              // Basic: C 
int    D_int_arr[7];                              // Basic: D 
int    E_int_arr[12];                             // Basic: E 
int    F_int_arr[12];                             // Basic: F 
int    G_int_arr[12];                             // Basic: G 
int    H_int_arr[12];                             // Basic: H 
int    II_int;                                    // Basic: II 
char*  INKEY_str;                                 // Basic: INKEY$ 
char*  J_str;                                     // Basic: J$ 
int    K_int_arr[10][10];                         // Basic: K 
char*  K_str;                                     // Basic: K$ 
int    M_int;                                     // Basic: M 
int    M2_int;                                    // Basic: M2 
int    M3_int;                                    // Basic: M3 
int    N_int;                                     // Basic: N 
int    P3_int;                                    // Basic: P3 
int    PU_int;                                    // Basic: PU 
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
void Routine_04450();
void Routine_04510();
void Routine_04540();

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

void Routine_04450(){
    // 04450 X=INT(RND(0)*10+1)
    X_int = INT(RND(0)*10+1);
    // 04460 Y=INT(RND(0)*10+1)
    Y_int = INT(RND(0)*10+1);
    // 04470 V=INT(3*RND(0)-1)
    V_int = INT(3*RND(0)-1);
    // 04480 V2=INT(3*RND(0)-1)
    V2_int = INT(3*RND(0)-1);
    // 04490 GOTO 04500
    goto Lbl_04500;

  Lbl_04500:
    // 04500 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_04510(){
    // 04510 PU=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    PU_int = (5-K_int_arr[0])*3-2*INT(K_int_arr[0]/4)+SGN(K_int_arr[0]-1)-1;
    // 04520 GOTO 04530
    goto Lbl_04530;

  Lbl_04530:
    // 04530 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_04540(){
    // 04540 PU=K+INT(K/4)-SGN(K-1)
    PU_int = K_int_arr[0]+INT(K_int_arr[0]/4)-SGN(K_int_arr[0]-1);
    // 04550 GOTO 04560
    goto Lbl_04560;

  Lbl_04560:
    // 04560 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM NOTE
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS
    ClearScreen(0);
    // 01030 PRINT@284,"SALVO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SALVO");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT@409,"COPYRIGHT BY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COPYRIGHT BY");strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT@534,"CREATIVE COMPUTING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CREATIVE COMPUTING");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MORRISTOWN, NEW JERSEY 07960");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 FOR II=1TO1500
    for(II_int=1;II_int<=1500;II_int++){
        // 01080 NEXT
        int dummy_1080=0; // Ignore this line.
    };
    // 01090 CLS
    ClearScreen(0);
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINTTAB(6)"WHILE I AM PLANNING MY BOARD, YOU CAN BE THINKING OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,6);strcat(buf,"WHILE I AM PLANNING MY BOARD, YOU CAN BE THINKING OF");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINTTAB(8)"THE LAY OUT FOR YOUR SHIPS. YOUR SHIPS INCLUDE:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,8);strcat(buf,"THE LAY OUT FOR YOUR SHIPS. YOUR SHIPS INCLUDE:");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINTTAB(15)"A BATTLESHIP, (FIVE CO-ORDINATES LONG)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"A BATTLESHIP, (FIVE CO-ORDINATES LONG)");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINTTAB(15)"A CRUISER, (THREE CO-ORDINATES LONG)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"A CRUISER, (THREE CO-ORDINATES LONG)");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINTTAB(15)"DESTROYER <A>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"DESTROYER <A>");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 '
    // 01230 DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    // 01240 Z8=0
    Z8_int = 0;
    // 01250 FOR W=1TO12
    for(W_int=1;W_int<=12;W_int++){
        // 01260 E(W)=-1
        E_int_arr[W_int] = -1;
        // 01270 H(W)=-1
        H_int_arr[W_int] = -1;
        // 01280 NEXT W
        int dummy_1280=0; // Ignore this line.
    }; // End-For(W_int)
    // 01290 FOR X=1TO10
    for(X_int=1;X_int<=10;X_int++){
        // 01300 FOR Y=1TO10
        for(Y_int=1;Y_int<=10;Y_int++){
            // 01310 B(X,Y)=0
            B_int_arr[X_int][Y_int] = 0;
            // 01320 NEXT Y
            int dummy_1320=0; // Ignore this line.
        }; // End-For(Y_int)
        // 01330 NEXT X
        int dummy_1330=0; // Ignore this line.
    }; // End-For(X_int)
    // 01340 FOR X=1TO12
    for(X_int=1;X_int<=12;X_int++){
        // 01350 F(X)=0
        F_int_arr[X_int] = 0;
        // 01360 G(X)=0
        G_int_arr[X_int] = 0;
        // 01370 NEXT X
        int dummy_1370=0; // Ignore this line.
    }; // End-For(X_int)

  Lbl_01380:
    // 01380 FOR X=1TO10
    for(X_int=1;X_int<=10;X_int++){
        // 01390 FOR Y=1TO10
        for(Y_int=1;Y_int<=10;Y_int++){
            // 01400 A(X,Y)=0
            A_int_arr[X_int][Y_int] = 0;
            // 01410 NEXT Y
            int dummy_1410=0; // Ignore this line.
        }; // End-For(Y_int)
        // 01420 NEXT X
        int dummy_1420=0; // Ignore this line.
    }; // End-For(X_int)
    // 01430 FOR K=4 TO 1 STEP -1
    for(K_int_arr[0]=4;K_int_arr[0]>=1;K_int_arr[0]+=-1){
        // 01440 U6=0
        U6_int = 0;

  Lbl_01450:
        // 01450 GOSUB 4450
        Routine_04450();
        // 01460 IF V+V2+V*V2=0 THEN 1450
        if(V_int+V2_int+V_int*V2_int==0)goto Lbl_01450;
        // 01470 GOSUB 4540
        Routine_04540();
        // 01480 IF Y+V*PU>10 THEN 1450
        if(Y_int+V_int*PU_int>10)goto Lbl_01450;
        // 01490 GOSUB 4540
        Routine_04540();
        // 01500 IF Y+V*PU<1 THEN 1450
        if(Y_int+V_int*PU_int<1)goto Lbl_01450;
        // 01510 GOSUB 4540
        Routine_04540();
        // 01520 IF X+V2*PU>10 THEN 1450
        if(X_int+V2_int*PU_int>10)goto Lbl_01450;
        // 01530 GOSUB 4540
        Routine_04540();
        // 01540 IF X+V2*PU<1 THEN 1450
        if(X_int+V2_int*PU_int<1)goto Lbl_01450;
        // 01550 U6=U6+1
        U6_int = U6_int+1;
        // 01560 IF U6>25 THEN 1380
        if(U6_int>25)goto Lbl_01380;
        // 01570 GOSUB 4540
        Routine_04540();
        // 01580 FOR Z=0 TO PU
        for(Z_int=0;Z_int<=PU_int;Z_int++){
            // 01590 GOSUB 4510
            Routine_04510();
            // 01600 F(Z+PU)=X+V2*Z
            F_int_arr[Z_int+PU_int] = X_int+V2_int*Z_int;
            // 01610 GOSUB 4510
            Routine_04510();
            // 01620 G(Z+PU)=Y+V*Z
            G_int_arr[Z_int+PU_int] = Y_int+V_int*Z_int;
            // 01630 NEXT Z
            int dummy_1630=0; // Ignore this line.
        }; // End-For(Z_int)
        // 01640 GOSUB 4510
        Routine_04510();
        // 01650 U8=PU
        U8_int = PU_int;
        // 01660 GOSUB 4540
        Routine_04540();
        // 01670 IF U8>U8+PU THEN 1760
        if(U8_int>U8_int+PU_int)goto Lbl_01760;
        // 01680 GOSUB 4540
        Routine_04540();
        // 01690 FOR Z2=U8 TO U8+PU
        for(Z2_int=U8_int;Z2_int<=U8_int+PU_int;Z2_int++){
            // 01700 IF U8<2 THEN 1740
            if(U8_int<2)goto Lbl_01740;
            // 01710 FOR Z3=1 TO U8-1
            for(Z3_int=1;Z3_int<=U8_int-1;Z3_int++){
                // 01720 IF SQR((F(Z3)-F(Z2))^2+(G(Z3)-G(Z2))^2)<3.59 THEN 1450
                if(SQR(IPower((F_int_arr[Z3_int]-F_int_arr[Z2_int]),2)+IPower((G_int_arr[Z3_int]-G_int_arr[Z2_int]),2))<3.59)goto Lbl_01450;
                // 01730 NEXT Z3
                int dummy_1730=0; // Ignore this line.
            }; // End-For(Z3_int)

  Lbl_01740:
            // 01740 NEXT Z2
            int dummy_1740=0; // Ignore this line.
        }; // End-For(Z2_int)
        // 01750 GOSUB 4540
        Routine_04540();

  Lbl_01760:
        // 01760 FOR Z=0TOPU
        for(Z_int=0;Z_int<=PU_int;Z_int++){
            // 01770 A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
            A_int_arr[F_int_arr[Z_int+U8_int]][G_int_arr[Z_int+U8_int]] = 0.5+SGN(K_int_arr[0]-1)*(K_int_arr[0]-1.5);
            // 01780 NEXT Z
            int dummy_1780=0; // Ignore this line.
        }; // End-For(Z_int)
        // 01790 NEXT K
        int dummy_1790=0; // Ignore this line.
    }; // End-For(K_int_arr[0])
    // 01800 CLS
    ClearScreen(0);
    // 01810 PRINT"ENTER COORDINATES FOR ..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER COORDINATES FOR ...");strcat(buf,"\n");fputs(buf,fh); };
    // 01820 PRINT"BATTLESHIP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BATTLESHIP");strcat(buf,"\n");fputs(buf,fh); };
    // 01830 FOR X=1TO5
    for(X_int=1;X_int<=5;X_int++){
        // 01840 INPUT Y,Z
        // Start of Basic INPUT statement 01840
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
        }; // End of Basic INPUT statement 01840
        // 01850 B(Y,Z)=3
        B_int_arr[Y_int][Z_int] = 3;
        // 01860 NEXT X
        int dummy_1860=0; // Ignore this line.
    }; // End-For(X_int)
    // 01870 PRINT"CRUISER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CRUISER");strcat(buf,"\n");fputs(buf,fh); };
    // 01880 FOR X=1TO3
    for(X_int=1;X_int<=3;X_int++){
        // 01890 INPUT Y,Z
        // Start of Basic INPUT statement 01890
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
        }; // End of Basic INPUT statement 01890
        // 01900 B(Y,Z)=2
        B_int_arr[Y_int][Z_int] = 2;
        // 01910 NEXT X
        int dummy_1910=0; // Ignore this line.
    }; // End-For(X_int)
    // 01920 PRINT"DESTROYER <A>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DESTROYER <A>");strcat(buf,"\n");fputs(buf,fh); };
    // 01930 FOR X=1TO2
    for(X_int=1;X_int<=2;X_int++){
        // 01940 INPUT Y,Z
        // Start of Basic INPUT statement 01940
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
        }; // End of Basic INPUT statement 01940
        // 01950 B(Y,Z)=1
        B_int_arr[Y_int][Z_int] = 1;
        // 01960 NEXT X
        int dummy_1960=0; // Ignore this line.
    }; // End-For(X_int)
    // 01970 CLS
    ClearScreen(0);
    // 01980 PRINT"DESTROYER <B>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DESTROYER <B>");strcat(buf,"\n");fputs(buf,fh); };
    // 01990 FOR X=1TO2
    for(X_int=1;X_int<=2;X_int++){
        // 02000 INPUT Y,Z
        // Start of Basic INPUT statement 02000
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
        }; // End of Basic INPUT statement 02000
        // 02010 B(Y,Z)=.5
        B_int_arr[Y_int][Z_int] = 0.5;
        // 02020 NEXT X
        int dummy_2020=0; // Ignore this line.
    }; // End-For(X_int)
    // 02030 PRINT"DO YOU WANT TO SEE MY SHOTS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO SEE MY SHOTS");fputs(buf,fh); };
    // 02040 INPUT K$
    // Start of Basic INPUT statement 02040
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
    }; // End of Basic INPUT statement 02040
    // 02050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02060 IFJ$<>"YES" THEN 2790
    if(strcmp(J_str,"YES")!=0)goto Lbl_02790;
    // 02070 '****START

  Lbl_02080:
    // 02080 IF J$<>"YES" THEN 2130
    if(strcmp(J_str,"YES")!=0)goto Lbl_02130;
    // 02090 C=C+1
    C_int_arr[0] = C_int_arr[0]+1;
    // 02100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02110 GOSUB 4390
    Routine_04390();
    // 02120 PRINT"TURN";C
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TURN"); b2c_INT(buf,C_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02130:
    // 02130 A=0
    A_int_arr[0] = 0;
    // 02140 FOR W=.5TO3 STEP .5
    for(W_int=0.5;W_int<=3;W_int+=0.5){
        // 02150 FOR X=1TO10
        for(X_int=1;X_int<=10;X_int++){
            // 02160 FOR Y=1 TO 10
            for(Y_int=1;Y_int<=10;Y_int++){
                // 02170 IF B(X,Y)=W THEN 2210
                if(B_int_arr[X_int][Y_int]==W_int)goto Lbl_02210;
                // 02180 NEXT Y
                int dummy_2180=0; // Ignore this line.
            }; // End-For(Y_int)
            // 02190 NEXT X
            int dummy_2190=0; // Ignore this line.
        }; // End-For(X_int)
        // 02200 GOTO 2220
        goto Lbl_02220;

  Lbl_02210:
        // 02210 A=A+INT(W+.5)
        A_int_arr[0] = A_int_arr[0]+INT(W_int+0.5);

  Lbl_02220:
        // 02220 NEXT W
        int dummy_2220=0; // Ignore this line.
    }; // End-For(W_int)
    // 02230 FOR W=1TO7
    for(W_int=1;W_int<=7;W_int++){
        // 02240 C(W)=0
        C_int_arr[W_int] = 0;
        // 02250 D(W)=0
        D_int_arr[W_int] = 0;
        // 02260 F(W)=0
        F_int_arr[W_int] = 0;
        // 02270 G(W)=0
        G_int_arr[W_int] = 0;
        // 02280 NEXT W
        int dummy_2280=0; // Ignore this line.
    }; // End-For(W_int)
    // 02290 P3=0
    P3_int = 0;
    // 02300 FOR X=1TO10
    for(X_int=1;X_int<=10;X_int++){
        // 02310 FOR Y=1TO10
        for(Y_int=1;Y_int<=10;Y_int++){
            // 02320 IF A(X,Y)>10 THEN 2340
            if(A_int_arr[X_int][Y_int]>10)goto Lbl_02340;
            // 02330 P3=P3+1
            P3_int = P3_int+1;

  Lbl_02340:
            // 02340 NEXT Y
            int dummy_2340=0; // Ignore this line.
        }; // End-For(Y_int)
        // 02350 NEXT X
        int dummy_2350=0; // Ignore this line.
    }; // End-For(X_int)
    // 02360 CLS
    ClearScreen(0);
    // 02370 PRINT"YOU HAVE";A;"SHOTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE"); b2c_INT(buf,A_int_arr[0]);strcat(buf,"SHOTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02380 IF P3>A THEN 2410
    if(P3_int>A_int_arr[0])goto Lbl_02410;
    // 02390 PRINT"YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES.");strcat(buf,"\n");fputs(buf,fh); };
    // 02400 GOTO 3070
    goto Lbl_03070;

  Lbl_02410:
    // 02410 IF A<>0 THEN 2460
    if(A_int_arr[0]!=0)goto Lbl_02460;

  Lbl_02420:
    // 02420 PRINT"I HAVE WON."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HAVE WON.");strcat(buf,"\n");fputs(buf,fh); };
    // 02430 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02440 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02450 END

  Lbl_02460:
    // 02460 FOR W=1TOA
    for(W_int=1;W_int<=A_int_arr[0];W_int++){

  Lbl_02470:
        // 02470 INPUT X,Y
        // Start of Basic INPUT statement 02470
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
        }; // End of Basic INPUT statement 02470
        // 02480 IF X<>INT(X) THEN 2540
        if(X_int!=INT(X_int))goto Lbl_02540;
        // 02490 IF X>10 THEN 2540
        if(X_int>10)goto Lbl_02540;
        // 02500 IF X<1 THEN 2540
        if(X_int<1)goto Lbl_02540;
        // 02510 IF Y<>INT(Y) THEN 2540
        if(Y_int!=INT(Y_int))goto Lbl_02540;
        // 02520 IF Y>10 THEN 2540
        if(Y_int>10)goto Lbl_02540;
        // 02530 IF Y>=1 THEN 2560
        if(Y_int>=1)goto Lbl_02560;

  Lbl_02540:
        // 02540 PRINT"ILLEGAL, ENTER AGAIN."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL, ENTER AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
        // 02550 GOTO 2470
        goto Lbl_02470;

  Lbl_02560:
        // 02560 IF A(X,Y)>10 THEN 2610
        if(A_int_arr[X_int][Y_int]>10)goto Lbl_02610;
        // 02570 C(W)=X
        C_int_arr[W_int] = X_int;
        // 02580 D(W)=Y
        D_int_arr[W_int] = Y_int;
        // 02590 NEXT W
        int dummy_2590=0; // Ignore this line.
    }; // End-For(W_int)
    // 02600 GOTO 2630
    goto Lbl_02630;

  Lbl_02610:
    // 02610 PRINT"YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU SHOT THERE BEFORE ON TURN"); b2c_INT(buf,A_int_arr[X_int][Y_int]-10);strcat(buf,"\n");fputs(buf,fh); };
    // 02620 GOTO 2470
    goto Lbl_02470;

  Lbl_02630:
    // 02630 FOR W=1TOA
    for(W_int=1;W_int<=A_int_arr[0];W_int++){
        // 02640 IF A(C(W),D(W))=3 THEN 2710
        if(A_int_arr[C_int_arr[W_int]][D_int_arr[W_int]]==3)goto Lbl_02710;
        // 02650 IF A(C(W),D(W))=2 THEN 2730
        if(A_int_arr[C_int_arr[W_int]][D_int_arr[W_int]]==2)goto Lbl_02730;
        // 02660 IF A(C(W),D(W))=1 THEN 2750
        if(A_int_arr[C_int_arr[W_int]][D_int_arr[W_int]]==1)goto Lbl_02750;
        // 02670 IF A(C(W),D(W))=.5 THEN 2770
        if(A_int_arr[C_int_arr[W_int]][D_int_arr[W_int]]==0.5)goto Lbl_02770;

  Lbl_02680:
        // 02680 A(C(W),D(W))=10+C
        A_int_arr[C_int_arr[W_int]][D_int_arr[W_int]] = 10+C_int_arr[0];
        // 02690 NEXT W
        int dummy_2690=0; // Ignore this line.
    }; // End-For(W_int)
    // 02700 GOTO 2790
    goto Lbl_02790;

  Lbl_02710:
    // 02710 PRINT"YOU HIT MY BATTLESHIP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HIT MY BATTLESHIP.");strcat(buf,"\n");fputs(buf,fh); };
    // 02720 GOTO 2680
    goto Lbl_02680;

  Lbl_02730:
    // 02730 PRINT"YOU HIT MY CRUISER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HIT MY CRUISER.");strcat(buf,"\n");fputs(buf,fh); };
    // 02740 GOTO 2680
    goto Lbl_02680;

  Lbl_02750:
    // 02750 PRINT"YOU HIT MY DESTROYER <A>."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HIT MY DESTROYER <A>.");strcat(buf,"\n");fputs(buf,fh); };
    // 02760 GOTO 2680
    goto Lbl_02680;

  Lbl_02770:
    // 02770 PRINT"YOU HIT MY DESTROYER <B>."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HIT MY DESTROYER <B>.");strcat(buf,"\n");fputs(buf,fh); };
    // 02780 GOTO 2680
    goto Lbl_02680;

  Lbl_02790:
    // 02790 A=0
    A_int_arr[0] = 0;
    // 02800 IF J$="YES" THEN 2850
    if(strcmp(J_str,"YES")==0)goto Lbl_02850;
    // 02810 C=C+1
    C_int_arr[0] = C_int_arr[0]+1;
    // 02820 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02830 GOSUB 4390
    Routine_04390();
    // 02840 PRINT"TURN";C
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TURN"); b2c_INT(buf,C_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02850:
    // 02850 A=0
    A_int_arr[0] = 0;
    // 02860 FOR W=.5TO3 STEP .5
    for(W_int=0.5;W_int<=3;W_int+=0.5){
        // 02870 FOR X=1TO10
        for(X_int=1;X_int<=10;X_int++){
            // 02880 FOR Y=1TO10
            for(Y_int=1;Y_int<=10;Y_int++){
                // 02890 IF A(X,Y)=W THEN 2930
                if(A_int_arr[X_int][Y_int]==W_int)goto Lbl_02930;
                // 02900 NEXT Y
                int dummy_2900=0; // Ignore this line.
            }; // End-For(Y_int)
            // 02910 NEXT X
            int dummy_2910=0; // Ignore this line.
        }; // End-For(X_int)
        // 02920 GOTO 2940
        goto Lbl_02940;

  Lbl_02930:
        // 02930 A=A+INT(W+.5)
        A_int_arr[0] = A_int_arr[0]+INT(W_int+0.5);

  Lbl_02940:
        // 02940 NEXT W
        int dummy_2940=0; // Ignore this line.
    }; // End-For(W_int)
    // 02950 P3=0
    P3_int = 0;
    // 02960 FOR X=1TO10
    for(X_int=1;X_int<=10;X_int++){
        // 02970 FOR Y=1TO10
        for(Y_int=1;Y_int<=10;Y_int++){
            // 02980 IF A(X,Y)>10 THEN 3000
            if(A_int_arr[X_int][Y_int]>10)goto Lbl_03000;
            // 02990 P3=P3+1
            P3_int = P3_int+1;

  Lbl_03000:
            // 03000 NEXT Y
            int dummy_3000=0; // Ignore this line.
        }; // End-For(Y_int)
        // 03010 NEXT X
        int dummy_3010=0; // Ignore this line.
    }; // End-For(X_int)
    // 03020 PRINT"I HAVE";A;"SHOTS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HAVE"); b2c_INT(buf,A_int_arr[0]);strcat(buf,"SHOTS");strcat(buf,"\n");fputs(buf,fh); };
    // 03030 IF P3>A THEN 3060
    if(P3_int>A_int_arr[0])goto Lbl_03060;
    // 03040 PRINT"I HAVE MORE SHOTS THAN BLANK SQUARES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HAVE MORE SHOTS THAN BLANK SQUARES.");strcat(buf,"\n");fputs(buf,fh); };
    // 03050 GOTO 2420
    goto Lbl_02420;

  Lbl_03060:
    // 03060 IF A<>0 THEN 3090
    if(A_int_arr[0]!=0)goto Lbl_03090;

  Lbl_03070:
    // 03070 PRINT"YOU HAVE WON."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE WON.");strcat(buf,"\n");fputs(buf,fh); };
    // 03080 GOTO 4440
    goto Lbl_04440;

  Lbl_03090:
    // 03090 FOR W=1TO 12
    for(W_int=1;W_int<=12;W_int++){
        // 03100 IF H(W)>0 THEN 3930
        if(H_int_arr[W_int]>0)goto Lbl_03930;
        // 03110 NEXT W
        int dummy_3110=0; // Ignore this line.
    }; // End-For(W_int)
    // 03120 '*****RANDOM
    // 03130 W=0
    W_int = 0;

  Lbl_03140:
    // 03140 R3=0
    R3_int = 0;
    // 03150 GOSUB 4450
    Routine_04450();

  Lbl_03160:
    // 03160 RESTORE
    Data_Index=0;
    RestoreData(0);
    // 03170 R2=0
    R2_int = 0;
    // 03180 R3=R3+1
    R3_int = R3_int+1;
    // 03190 IF R3>100 THEN 3140
    if(R3_int>100)goto Lbl_03140;
    // 03200 IF X>10 THEN 3240
    if(X_int>10)goto Lbl_03240;
    // 03210 IF X>0 THEN 3250
    if(X_int>0)goto Lbl_03250;
    // 03220 X=1+INT(RND(0)*2.5)
    X_int = 1+INT(RND(0)*2.5);
    // 03230 GOTO 3250
    goto Lbl_03250;

  Lbl_03240:
    // 03240 X=10-INT(RND(0)*2.5)
    X_int = 10-INT(RND(0)*2.5);

  Lbl_03250:
    // 03250 IF Y>10 THEN 3290
    if(Y_int>10)goto Lbl_03290;
    // 03260 IF Y>0 THEN 3400
    if(Y_int>0)goto Lbl_03400;
    // 03270 Y=1+INT(RND(0)*2.5)
    Y_int = 1+INT(RND(0)*2.5);
    // 03280 GOTO 3400
    goto Lbl_03400;

  Lbl_03290:
    // 03290 Y=10-INT(RND(0)*2.5)
    Y_int = 10-INT(RND(0)*2.5);
    // 03300 GOTO 3400
    goto Lbl_03400;

  Lbl_03310:
    // 03310 F(W)=X
    F_int_arr[W_int] = X_int;
    // 03320 G(W)=Y
    G_int_arr[W_int] = Y_int;
    // 03330 IF W=A THEN 3510
    if(W_int==A_int_arr[0])goto Lbl_03510;

  Lbl_03340:
    // 03340 IF R2=6 THEN 3160
    if(R2_int==6)goto Lbl_03160;
    // 03350 READ X1,Y1
    X1_int = Get_Data_Int();
    Y1_int = Get_Data_Int();
    // 03360 R2=R2+1
    R2_int = R2_int+1;
    // 03370 DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    // 03380 X=X+X1
    X_int = X_int+X1_int;
    // 03390 Y=Y+Y1
    Y_int = Y_int+Y1_int;

  Lbl_03400:
    // 03400 IF X>10 THEN 3340
    if(X_int>10)goto Lbl_03340;
    // 03410 IF X<1 THEN 3340
    if(X_int<1)goto Lbl_03340;
    // 03420 IF Y>10 THEN 3340
    if(Y_int>10)goto Lbl_03340;
    // 03430 IF Y<1 THEN 3340
    if(Y_int<1)goto Lbl_03340;
    // 03440 IF B(X,Y)>10 THEN 3340
    if(B_int_arr[X_int][Y_int]>10)goto Lbl_03340;
    // 03450 FOR Q9=1 TO W
    for(Q9_int=1;Q9_int<=W_int;Q9_int++){
        // 03460 IF F(Q9)<>X THEN 3480
        if(F_int_arr[Q9_int]!=X_int)goto Lbl_03480;
        // 03470 IF G(Q9)=Y THEN 3340
        if(G_int_arr[Q9_int]==Y_int)goto Lbl_03340;

  Lbl_03480:
        // 03480 NEXT Q9
        int dummy_3480=0; // Ignore this line.
    }; // End-For(Q9_int)
    // 03490 W=W+1
    W_int = W_int+1;
    // 03500 GOTO 3310
    goto Lbl_03310;

  Lbl_03510:
    // 03510 IF LEFT$(K$,1)<>"Y" THEN 3550
    if(LEFT$(K_str,1)=='Y')goto Lbl_03550;
    // 03520 FOR Z5=1TOA
    for(Z5_int=1;Z5_int<=A_int_arr[0];Z5_int++){
        // 03530 PRINTF(Z5);G(Z5)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,F_int_arr[Z5_int]); b2c_INT(buf,G_int_arr[Z5_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 03540 NEXT Z5
        int dummy_3540=0; // Ignore this line.
    }; // End-For(Z5_int)

  Lbl_03550:
    // 03550 FOR W=1TOA
    for(W_int=1;W_int<=A_int_arr[0];W_int++){
        // 03560 IF B(F(W),G(W))=3 THEN 3630
        if(B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]]==3)goto Lbl_03630;
        // 03570 IF B(F(W),G(W))=2 THEN 3650
        if(B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]]==2)goto Lbl_03650;
        // 03580 IF B(F(W),G(W))=1 THEN 3690
        if(B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]]==1)goto Lbl_03690;
        // 03590 IF B(F(W),G(W))=.5 THEN 3670
        if(B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]]==0.5)goto Lbl_03670;

  Lbl_03600:
        // 03600 B(F(W),G(W))=10+C
        B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]] = 10+C_int_arr[0];
        // 03610 NEXT W
        int dummy_3610=0; // Ignore this line.
    }; // End-For(W_int)
    // 03620 GOTO 2080
    goto Lbl_02080;

  Lbl_03630:
    // 03630 PRINT"I HIT YOUR BATTLESHIP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HIT YOUR BATTLESHIP");strcat(buf,"\n");fputs(buf,fh); };
    // 03640 GOTO 3700
    goto Lbl_03700;

  Lbl_03650:
    // 03650 PRINT"I HIT YOUR CRUISER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HIT YOUR CRUISER");strcat(buf,"\n");fputs(buf,fh); };
    // 03660 GOTO 3700
    goto Lbl_03700;

  Lbl_03670:
    // 03670 PRINT"I HIT YOUR DESTROYER<B>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HIT YOUR DESTROYER<B>");strcat(buf,"\n");fputs(buf,fh); };
    // 03680 GOTO 3700
    goto Lbl_03700;

  Lbl_03690:
    // 03690 PRINT"I HIT YOUR DESTROYER<A>"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I HIT YOUR DESTROYER<A>");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03700:
    // 03700 FOR Q=1 TO 12
    for(Q_int=1;Q_int<=12;Q_int++){
        // 03710 IF E(Q)<>-1 THEN 3860
        if(E_int_arr[Q_int]!=-1)goto Lbl_03860;
        // 03720 E(Q)=10+C
        E_int_arr[Q_int] = 10+C_int_arr[0];
        // 03730 H(Q)=B(F(W),G(W))
        H_int_arr[Q_int] = B_int_arr[F_int_arr[W_int]][G_int_arr[W_int]];
        // 03740 M3=0
        M3_int = 0;
        // 03750 FOR M2=1TO12
        for(M2_int=1;M2_int<=12;M2_int++){
            // 03760 IF H(M2)<>H(Q) THEN 3780
            if(H_int_arr[M2_int]!=H_int_arr[Q_int])goto Lbl_03780;
            // 03770 M3=M3+1
            M3_int = M3_int+1;

  Lbl_03780:
            // 03780 NEXT M2
            int dummy_3780=0; // Ignore this line.
        }; // End-For(M2_int)
        // 03790 IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 3600
        if(M3_int!=INT(H_int_arr[Q_int]+0.5)+1+INT(INT(H_int_arr[Q_int]+0.5)/3))goto Lbl_03600;
        // 03800 FOR M2=1 TO 12
        for(M2_int=1;M2_int<=12;M2_int++){
            // 03810 IF H(M2)<>H(Q) THEN 3840
            if(H_int_arr[M2_int]!=H_int_arr[Q_int])goto Lbl_03840;
            // 03820 E(M2)=-1
            E_int_arr[M2_int] = -1;
            // 03830 H(M2)=-1
            H_int_arr[M2_int] = -1;

  Lbl_03840:
            // 03840 NEXT M2
            int dummy_3840=0; // Ignore this line.
        }; // End-For(M2_int)
        // 03850 GOTO 3600
        goto Lbl_03600;

  Lbl_03860:
        // 03860 NEXT Q
        int dummy_3860=0; // Ignore this line.
    }; // End-For(Q_int)
    // 03870 PRINT"PROGRAM ABORT:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PROGRAM ABORT:");strcat(buf,"\n");fputs(buf,fh); };
    // 03880 FOR Q=1TO12
    for(Q_int=1;Q_int<=12;Q_int++){
        // 03890 PRINT"E(";Q;")=";E(Q)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"E("); b2c_INT(buf,Q_int);strcat(buf,")="); b2c_INT(buf,E_int_arr[Q_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 03900 PRINT"H(";Q;")=";H(Q)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"H("); b2c_INT(buf,Q_int);strcat(buf,")="); b2c_INT(buf,H_int_arr[Q_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 03910 NEXT Q
        int dummy_3910=0; // Ignore this line.
    }; // End-For(Q_int)
    // 03920 GOTO 4390
    goto Lbl_04390;

  Lbl_03930:
    // 03930 '********USINGEARRAY
    // 03940 FOR R=1TO10
    for(R_int=1;R_int<=10;R_int++){
        // 03950 FOR S=1TO10
        for(S_int=1;S_int<=10;S_int++){
            // 03960 K(R,S)=0
            K_int_arr[R_int][S_int] = 0;
            // 03970 NEXT S
            int dummy_3970=0; // Ignore this line.
        }; // End-For(S_int)
        // 03980 NEXT R
        int dummy_3980=0; // Ignore this line.
    }; // End-For(R_int)
    // 03990 FOR U=1TO12
    for(U_int=1;U_int<=12;U_int++){
        // 04000 IF E(U)<10 THEN 4150
        if(E_int_arr[U_int]<10)goto Lbl_04150;
        // 04010 FOR R=1TO10
        for(R_int=1;R_int<=10;R_int++){
            // 04020 FOR S=1TO10
            for(S_int=1;S_int<=10;S_int++){
                // 04030 IF B(R,S)<10 THEN 4060
                if(B_int_arr[R_int][S_int]<10)goto Lbl_04060;
                // 04040 K(R,S)=-10200000
                K_int_arr[R_int][S_int] = -10000000;
                // 04050 GOTO 4130
                goto Lbl_04130;

  Lbl_04060:
                // 04060 FOR M=SGN(1-R) TO SGN(10-R)
                for(M_int=SGN(1-R_int);M_int<=SGN(10-R_int);M_int++){
                    // 04070 FOR N=SGN(1-2) TO SGN(10-S)
                    for(N_int=SGN(1-2);N_int<=SGN(10-S_int);N_int++){
                        // 04080 IF N+M+N*M=0 THEN 4110
                        if(N_int+M_int+N_int*M_int==0)goto Lbl_04110;
                        // 04090 IF B(R+M,S+N)<>E(U) THEN 4110
                        if(B_int_arr[R_int+M_int][S_int+N_int]!=E_int_arr[U_int])goto Lbl_04110;
                        // 04100 K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
                        K_int_arr[R_int][S_int] = K_int_arr[R_int][S_int]+E_int_arr[U_int]-S_int*INT(H_int_arr[U_int]+0.5);

  Lbl_04110:
                        // 04110 NEXT N
                        int dummy_4110=0; // Ignore this line.
                    }; // End-For(N_int)
                    // 04120 NEXT M
                    int dummy_4120=0; // Ignore this line.
                }; // End-For(M_int)

  Lbl_04130:
                // 04130 NEXT S
                int dummy_4130=0; // Ignore this line.
            }; // End-For(S_int)
            // 04140 NEXT R
            int dummy_4140=0; // Ignore this line.
        }; // End-For(R_int)

  Lbl_04150:
        // 04150 NEXT U
        int dummy_4150=0; // Ignore this line.
    }; // End-For(U_int)
    // 04160 FOR R=1TOA
    for(R_int=1;R_int<=A_int_arr[0];R_int++){
        // 04170 F(R)=R
        F_int_arr[R_int] = R_int;
        // 04180 G(R)=R
        G_int_arr[R_int] = R_int;
        // 04190 NEXT R
        int dummy_4190=0; // Ignore this line.
    }; // End-For(R_int)
    // 04200 FOR R=1TO10
    for(R_int=1;R_int<=10;R_int++){
        // 04210 FOR S=1TO10
        for(S_int=1;S_int<=10;S_int++){
            // 04220 Q9=1
            Q9_int = 1;
            // 04230 FOR M=1TOA
            for(M_int=1;M_int<=A_int_arr[0];M_int++){
                // 04240 IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 4260
                if(K_int_arr[F_int_arr[M_int]][G_int_arr[M_int]]>=K_int_arr[F_int_arr[Q9_int]][G_int_arr[Q9_int]])goto Lbl_04260;
                // 04250 Q9=M
                Q9_int = M_int;

  Lbl_04260:
                // 04260 NEXT M
                int dummy_4260=0; // Ignore this line.
            }; // End-For(M_int)
            // 04270 IF R>A THEN 4290
            if(R_int>A_int_arr[0])goto Lbl_04290;
            // 04280 IF R=S THEN 4360
            if(R_int==S_int)goto Lbl_04360;

  Lbl_04290:
            // 04290 IF K(R,S)<K(F(Q9),G(Q9)) THEN 4360
            if(K_int_arr[R_int][S_int]<K_int_arr[F_int_arr[Q9_int]][G_int_arr[Q9_int]])goto Lbl_04360;
            // 04300 FOR M=1TOA
            for(M_int=1;M_int<=A_int_arr[0];M_int++){
                // 04310 IF F(M)<>R THEN 4340
                if(F_int_arr[M_int]!=R_int)goto Lbl_04340;
                // 04320 IF G(M)=S THEN 4360
                if(G_int_arr[M_int]==S_int)goto Lbl_04360;
                // 04330 NEXT M
                int dummy_4330=0; // Ignore this line.
            }; // End-For(M_int)

  Lbl_04340:
            // 04340 F(Q9)=R
            F_int_arr[Q9_int] = R_int;
            // 04350 G(Q9)=S
            G_int_arr[Q9_int] = S_int;

  Lbl_04360:
            // 04360 NEXT S
            int dummy_4360=0; // Ignore this line.
        }; // End-For(S_int)
        // 04370 NEXT R
        int dummy_4370=0; // Ignore this line.
    }; // End-For(R_int)
    // 04380 GOTO 3510
    goto Lbl_03510;

void Routine_04390(){

  Lbl_04390:
    // 04390 PRINT"TO CONTINUE, HIT ANY KEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO CONTINUE, HIT ANY KEY");strcat(buf,"\n");fputs(buf,fh); };
    // 04400 A$=INKEY$
    GLBpStr=INKEY_str;
    A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_04410:
    // 04410 IF A$="" THEN 4410
    if(strcmp(A_str,"")==0)goto Lbl_04410;
    // 04420 CLS
    ClearScreen(0);
    // 04430 GOTO 09900
    goto Lbl_09900;

  Lbl_04440:
    // 04440 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
