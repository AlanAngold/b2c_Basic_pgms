/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/salvocc/basic/salvocc.bas: 
 *
                   +-+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | | |
        Address    v v v Original BASIC statement
    -------------- --- - ------------------------------------------------------------------------------
    0x558a3728ad10 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x558a3728ae00 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x558a3728ae80 ---------A   00010 CLS
    0x558a3728afc0 ---------A   00020 PRINT@284,"SALVO"
    0x558a3728b100 ---------A   00030 PRINT@409,"COPYRIGHT BY"
    0x558a3728b2a0 ---------A   00040 PRINT@534,"CREATIVE COMPUTING"
    0x558a3728b3c0 ---------A   00050 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x558a3728b6b0 ---------A   00060 FOR II=1TO1500:NEXT
    0x558a3728b710 ---------A   00070 CLS
    0x558a3728b830 ---------A   00080 PRINT:PRINT
    0x558a3728bb20 ---------A   00090 PRINTTAB(6)"WHILE I AM PLANNING MY BOARD, YOU CAN BE THINKING OF"
    0x558a3728bbc0 ---------A   00100 PRINT
    0x558a37290070 ---------A   00110 PRINTTAB(8)"THE LAY OUT FOR YOUR SHIPS. YOUR SHIPS INCLUDE:"
    0x558a37290110 ---------A   00120 PRINT
    0x558a37290380 ---------A   00130 PRINTTAB(15)"A BATTLESHIP, (FIVE CO-ORDINATES LONG)"
    0x558a37290420 ---------A   00140 PRINT
    0x558a37290680 ---------A   00150 PRINTTAB(15)"A CRUISER, (THREE CO-ORDINATES LONG)"
    0x558a37290810 ---------A   00160 PRINT
    0x558a37290a60 ---------A   00170 PRINTTAB(15)"DESTROYER <A>"
    0x558a37290ad0 ---------A   00180 PRINT
    0x558a37290b40 ---------A   00200 '
    0x558a37291b50 ---------A   00210 DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    0x558a37291d30 ---------A   00220 Z8=0
    0x558a37291fc0 ---------A   00230 FOR W=1TO12
    0x558a372921a0 ---------A   00240 E(W)=-1
    0x558a37292370 ---------A   00250 H(W)=-1
    0x558a37292420 ---------A   00260 NEXT W
    0x558a372926c0 ---------A   00270 FOR X=1TO10
    0x558a37292960 ---------A   00280 FOR Y=1TO10
    0x558a37292ba0 ---------A   00290 B(X,Y)=0
    0x558a37292c50 ---------A   00300 NEXT Y
    0x558a37292d10 ---------A   00310 NEXT X
    0x558a37292f30 ---------A   00320 FOR X=1TO12
    0x558a37293320 ---------A   00330 F(X)=0
    0x558a372934f0 ---------A   00340 G(X)=0
    0x558a372935a0 ---------A   00350 NEXT X
    0x558a372937c0 ---------A T 00360 FOR X=1TO10
    0x558a372939e0 ---------A   00370 FOR Y=1TO10
    0x558a37293c20 ---------A   00380 A(X,Y)=0
    0x558a37293cd0 ---------A   00390 NEXT Y
    0x558a37293d90 ---------A   00400 NEXT X
    0x558a372940e0 ---------A   00410 FOR K=4 TO 1 STEP -1
    0x558a372942e0 ---------A   00420 U6=0
    0x558a37294360 ---------A T 00430 GOSUB 1920
    0x558a372947f0 ---------A   00440 IF V+V2+V*V2=0 THEN 430
    0x558a37294bc0 ---------A   00450 GOSUB 3290:IF Y+V*PU>10 THEN 430
    0x558a37294f10 ---------A   00460 GOSUB 3290:IF Y+V*PU<1 THEN 430
    0x558a37295260 ---------A   00470 GOSUB 3290:IF X+V2*PU>10 THEN 430
    0x558a372955a0 ---------A   00480 GOSUB 3290:IF X+V2*PU<1 THEN 430
    0x558a372957c0 ---------A   00490 U6=U6+1
    0x558a37295980 ---------A   00500 IF U6>25 THEN 360
    0x558a37295c30 ---------A   00510 GOSUB 3290:FOR Z=0 TO PU
    0x558a37296000 ---------A   00520 GOSUB 3270:F(Z+PU)=X+V2*Z
    0x558a372963b0 ---------A   00530 GOSUB 3270:G(Z+PU)=Y+V*Z
    0x558a37296460 ---------A   00540 NEXT Z
    0x558a37296670 ---------A   00550 GOSUB 3270:U8=PU
    0x558a372968d0 ---------A   00560 GOSUB 3290:IF U8>U8+PU THEN 630
    0x558a37296bd0 ---------A   00570 GOSUB 3290:FOR Z2=U8 TO U8+PU
    0x558a37296d90 ---------A   00580 IF U8<2 THEN 620
    0x558a37297100 ---------A   00590 FOR Z3=1 TO U8-1
    0x558a37297940 ---------A   00600 IF SQR((F(Z3)-F(Z2))^2+(G(Z3)-G(Z2))^2)<3.59 THEN 430
    0x558a37297a00 ---------A   00610 NEXT Z3
    0x558a37297ac0 ---------A T 00620 NEXT Z2
    0x558a37297d10 ---------A T 00630 GOSUB 3290:FOR Z=0TOPU
    0x558a37298570 ---------A   00640 A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
    0x558a37298a30 ---------A   00650 NEXT Z
    0x558a37298af0 ---------A   00660 NEXT K
    0x558a37298b80 ---------A   00670 CLS
    0x558a37298cb0 ---------A   00680 PRINT"ENTER COORDINATES FOR ..."
    0x558a37298de0 ---------A   00690 PRINT"BATTLESHIP"
    0x558a37298ff0 ---------A   00700 FOR X=1TO5
    0x558a37299130 ---------A   00710 INPUT Y,Z
    0x558a37299370 ---------A   00720 B(Y,Z)=3
    0x558a37299420 ---------A   00730 NEXT X
    0x558a37299560 ---------A   00740 PRINT"CRUISER"
    0x558a37299770 ---------A   00750 FOR X=1TO3
    0x558a372998b0 ---------A   00760 INPUT Y,Z
    0x558a37299af0 ---------A   00770 B(Y,Z)=2
    0x558a37299ba0 ---------A   00780 NEXT X
    0x558a37299cf0 ---------A   00790 PRINT"DESTROYER <A>"
    0x558a37299f00 ---------A   00800 FOR X=1TO2
    0x558a3729a040 ---------A   00810 INPUT Y,Z
    0x558a3729a280 ---------A   00820 B(Y,Z)=1
    0x558a3729a330 ---------A   00830 NEXT X
    0x558a3729a3c0 ---------A   00840 CLS
    0x558a3729a4e0 ---------A   00850 PRINT"DESTROYER <B>"
    0x558a3729a6f0 ---------A   00860 FOR X=1TO2
    0x558a3729a830 ---------A   00870 INPUT Y,Z
    0x558a3729aa70 ---------A   00880 B(Y,Z)=.5
    0x558a3729ab20 ---------A   00890 NEXT X
    0x558a3729acb0 ---------A   00900 PRINT"DO YOU WANT TO SEE MY SHOTS";
    0x558a3729ae00 ---------A   00910 INPUT K$
    0x558a3729ae90 ---------A   00920 PRINT
    0x558a3729b0e0 ---------A   00930 IFJ$<>"YES" THEN 1630
    0x558a3729b160 ---------A   00940 '****START
    0x558a3729b350 ---------A T 00950 IF J$<>"YES" THEN 1000
    0x558a3729b5f0 ---------A   00960 C=C+1
    0x558a3729b660 ---------A   00970 PRINT
    0x558a3729b6d0 ---------A   00980 GOSUB 3310
    0x558a3729b870 ---------A   00990 PRINT"TURN";C
    0x558a3729ba70 ---------A T 01000 A=0
    0x558a3729bd20 ---------A   01010 FOR W=.5TO3 STEP .5
    0x558a3729bf40 ---------A   01020 FOR X=1TO10
    0x558a3729c170 ---------A   01030 FOR Y=1 TO 10
    0x558a3729c3b0 ---------A   01040 IF B(X,Y)=W THEN 1080
    0x558a3729c470 ---------A   01050 NEXT Y
    0x558a3729c530 ---------A   01060 NEXT X
    0x558a3729c5b0 ---------A   01070 GOTO 1090
    0x558a3729c930 ---------A T 01080 A=A+INT(W+.5)
    0x558a3729c9e0 ---------A T 01090 NEXT W
    0x558a3729cc00 ---------A   01100 FOR W=1TO7
    0x558a3729cde0 ---------A   01110 C(W)=0
    0x558a3729cfb0 ---------A   01120 D(W)=0
    0x558a3729d180 ---------A   01130 F(W)=0
    0x558a3729d350 ---------A   01140 G(W)=0
    0x558a3729d400 ---------A   01150 NEXT W
    0x558a3729d600 ---------A   01160 P3=0
    0x558a3729d810 ---------A   01170 FOR X=1TO10
    0x558a3729da40 ---------A   01180 FOR Y=1TO10
    0x558a3729dcc0 ---------A   01190 IF A(X,Y)>10 THEN 1210
    0x558a3729dee0 ---------A   01200 P3=P3+1
    0x558a3729df90 ---------A T 01210 NEXT Y
    0x558a3729e050 ---------A   01220 NEXT X
    0x558a3729e340 ---------A   01230 CLS:PRINT"YOU HAVE";A;"SHOTS."
    0x558a3729e4e0 ---------A   01240 IF P3>A THEN 1270
    0x558a3729e640 ---------A   01250 PRINT"YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    0x558a3729e6b0 ---------A   01260 GOTO 1900
    0x558a3729e860 ---------A T 01270 IF A<>0 THEN 1300
    0x558a3729e9a0 ---------A T 01280 PRINT"I HAVE WON."
    0x558a3729f2a0 ---------A   01290 PRINT:PRINT:END
    0x558a3729f480 ---------A T 01300 FOR W=1TOA
    0x558a3729f5d0 ---------A T 01310 INPUT X,Y
    0x558a3729f7b0 ---------A   01320 IF X<>INT(X) THEN 1380
    0x558a3729f970 ---------A   01330 IF X>10 THEN 1380
    0x558a3729fb40 ---------A   01340 IF X<1 THEN 1380
    0x558a3729fd20 ---------A   01350 IF Y<>INT(Y) THEN 1380
    0x558a3729fee0 ---------A   01360 IF Y>10 THEN 1380
    0x558a372a00b0 ---------A   01370 IF Y>=1 THEN 1400
    0x558a372a01f0 ---------A T 01380 PRINT"ILLEGAL, ENTER AGAIN."
    0x558a372a0270 ---------A   01390 GOTO 1310
    0x558a372a04d0 ---------A T 01400 IF A(X,Y)>10 THEN 1450
    0x558a372a0670 ---------A   01410 C(W)=X
    0x558a372a0800 ---------A   01420 D(W)=Y
    0x558a372a08b0 ---------A   01430 NEXT W
    0x558a372a0950 ---------A   01440 GOTO 1470
    0x558a372a0ca0 ---------A T 01450 PRINT"YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    0x558a372a0d10 ---------A   01460 GOTO 1310
    0x558a372a0ee0 ---------A T 01470 FOR W=1TOA
    0x558a372a1230 ---------A   01480 IF A(C(W),D(W))=3 THEN 1550
    0x558a372a1580 ---------A   01490 IF A(C(W),D(W))=2 THEN 1570
    0x558a372a18d0 ---------A   01500 IF A(C(W),D(W))=1 THEN 1590
    0x558a372a1c10 ---------A   01510 IF A(C(W),D(W))=.5 THEN 1610
    0x558a372a1fb0 ---------A T 01520 A(C(W),D(W))=10+C
    0x558a372a2060 ---------A   01530 NEXT W
    0x558a372a20f0 ---------A   01540 GOTO 1630
    0x558a372a2220 ---------A T 01550 PRINT"YOU HIT MY BATTLESHIP."
    0x558a372a22a0 ---------A   01560 GOTO 1520
    0x558a372a23c0 ---------A T 01570 PRINT"YOU HIT MY CRUISER."
    0x558a372a2440 ---------A   01580 GOTO 1520
    0x558a372a2570 ---------A T 01590 PRINT"YOU HIT MY DESTROYER <A>."
    0x558a372a25f0 ---------A   01600 GOTO 1520
    0x558a372a2720 ---------A T 01610 PRINT"YOU HIT MY DESTROYER <B>."
    0x558a372a2790 ---------A   01620 GOTO 1520
    0x558a372a2900 ---------A T 01630 A=0
    0x558a372a2ad0 ---------A   01640 IF J$="YES" THEN 1680
    0x558a372a2cf0 ---------A   01650 C=C+1
    0x558a372a2db0 ---------A   01660 PRINT:GOSUB 3310
    0x558a372a2f50 ---------A   01670 PRINT"TURN";C
    0x558a372a30d0 ---------A T 01680 A=0
    0x558a372a3380 ---------A   01690 FOR W=.5TO3 STEP .5
    0x558a372a35a0 ---------A   01700 FOR X=1TO10
    0x558a372a37d0 ---------A   01710 FOR Y=1TO10
    0x558a372a3a10 ---------A   01720 IF A(X,Y)=W THEN 1760
    0x558a372a3ad0 ---------A   01730 NEXT Y
    0x558a372a3b90 ---------A   01740 NEXT X
    0x558a372a3c10 ---------A   01750 GOTO 1770
    0x558a372a3f10 ---------A T 01760 A=A+INT(W+.5)
    0x558a372a3fc0 ---------A T 01770 NEXT W
    0x558a372a4140 ---------A   01780 P3=0
    0x558a372a4350 ---------A   01790 FOR X=1TO10
    0x558a372a4580 ---------A   01800 FOR Y=1TO10
    0x558a372a4800 ---------A   01810 IF A(X,Y)>10 THEN 1830
    0x558a372a4a20 ---------A   01820 P3=P3+1
    0x558a372a4ad0 ---------A T 01830 NEXT Y
    0x558a372a4b90 ---------A   01840 NEXT X
    0x558a372a4e40 ---------A   01850 PRINT"I HAVE";A;"SHOTS"
    0x558a372a4fd0 ---------A   01860 IF P3>A THEN 1890
    0x558a372a5120 ---------A   01870 PRINT"I HAVE MORE SHOTS THAN BLANK SQUARES."
    0x558a372a5190 ---------A   01880 GOTO 1280
    0x558a372a5340 ---------A T 01890 IF A<>0 THEN 1970
    0x558a372a5480 ---------A T 01900 PRINT"YOU HAVE WON."
    0x558a372a5500 ---------A   01910 GOTO 3340
    0x558a372a5970 ---------B G 01920 X=INT(RND(0)*10+1)
    0x558a372a5d60 ---------B   01930 Y=INT(RND(0)*10+1)
    0x558a372a6160 ---------B   01940 V=INT(3*RND(0)-1)
    0x558a372a6550 ---------B   01950 V2=INT(3*RND(0)-1)
    0x558a372a65a0 ---------B   01960 RETURN
    0x558a372a67d0 ---------A T 01970 FOR W=1TO 12
    0x558a372a69f0 ---------A   01980 IF H(W)>0 THEN 2810
    0x558a372a6ab0 ---------A   01990 NEXT W
    0x558a372a6b30 ---------A   02000 '*****RANDOM
    0x558a372a6cb0 ---------A   02010 W=0
    0x558a372a6ea0 ---------A T 02020 R3=0
    0x558a372a6f10 ---------A   02030 GOSUB 1920
    0x558a372a6f70 ---------A T 02040 RESTORE
    0x558a372a7150 ---------A   02050 R2=0
    0x558a372a7370 ---------A   02060 R3=R3+1
    0x558a372a7520 ---------A   02070 IF R3>100 THEN 2020
    0x558a372a76e0 ---------A   02080 IF X>10 THEN 2120
    0x558a372a78b0 ---------A   02090 IF X>0 THEN 2130
    0x558a372a7cb0 ---------A   02100 X=1+INT(RND(0)*2.5)
    0x558a372a7d30 ---------A   02110 GOTO 2130
    0x558a372a8110 ---------A T 02120 X=10-INT(RND(0)*2.5)
    0x558a372a82c0 ---------A T 02130 IF Y>10 THEN 2170
    0x558a372a8490 ---------A   02140 IF Y>0 THEN 2280
    0x558a372a8890 ---------A   02150 Y=1+INT(RND(0)*2.5)
    0x558a372a8910 ---------A   02160 GOTO 2280
    0x558a372a8cf0 ---------A T 02170 Y=10-INT(RND(0)*2.5)
    0x558a372a8d60 ---------A   02180 GOTO 2280
    0x558a372a8ee0 ---------A T 02190 F(W)=X
    0x558a372a9070 ---------A   02200 G(W)=Y
    0x558a372a91e0 ---------A   02210 IF W=A THEN 2390
    0x558a372a93a0 ---------A T 02220 IF R2=6 THEN 2040
    0x558a372a95e0 ---------A   02230 READ X1,Y1
    0x558a372a97f0 ---------A   02240 R2=R2+1
    0x558a372aa160 ---------A   02250 DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    0x558a372aa330 ---------A   02260 X=X+X1
    0x558a372aa500 ---------A   02270 Y=Y+Y1
    0x558a372aa6b0 ---------A T 02280 IF X>10 THEN 2220
    0x558a372aa870 ---------A   02290 IF X<1 THEN 2220
    0x558a372aaa30 ---------A   02300 IF Y>10 THEN 2220
    0x558a372aac00 ---------A   02310 IF Y<1 THEN 2220
    0x558a372aae80 ---------A   02320 IF B(X,Y)>10 THEN 2220
    0x558a372ab0f0 ---------A   02330 FOR Q9=1 TO W
    0x558a372ab2e0 ---------A   02340 IF F(Q9)<>X THEN 2360
    0x558a372ab4c0 ---------A   02350 IF G(Q9)=Y THEN 2220
    0x558a372ab580 ---------A T 02360 NEXT Q9
    0x558a372ab7a0 ---------A   02370 W=W+1
    0x558a372ab820 ---------A   02380 GOTO 2190
    0x558a372abb60 ---------A T 02390 IF LEFT$(K$,1)<>"Y" THEN 2430
    0x558a372abdc0 ---------A   02400 FOR Z5=1TOA
    0x558a372abfe0 ---------A   02410 PRINTF(Z5);G(Z5)
    0x558a372ac090 ---------A   02420 NEXT Z5
    0x558a372ac280 ---------A T 02430 FOR W=1TOA
    0x558a372ac5d0 ---------A   02440 IF B(F(W),G(W))=3 THEN 2510
    0x558a372ac920 ---------A   02450 IF B(F(W),G(W))=2 THEN 2530
    0x558a372acc70 ---------A   02460 IF B(F(W),G(W))=1 THEN 2570
    0x558a372acfb0 ---------A   02470 IF B(F(W),G(W))=.5 THEN 2550
    0x558a372ad350 ---------A T 02480 B(F(W),G(W))=10+C
    0x558a372ad400 ---------A   02490 NEXT W
    0x558a372ad490 ---------A   02500 GOTO 950
    0x558a372ad5b0 ---------A T 02510 PRINT"I HIT YOUR BATTLESHIP"
    0x558a372ad630 ---------A   02520 GOTO 2580
    0x558a372ad750 ---------A T 02530 PRINT"I HIT YOUR CRUISER"
    0x558a372ad7d0 ---------A   02540 GOTO 2580
    0x558a372ad900 ---------A T 02550 PRINT"I HIT YOUR DESTROYER<B>"
    0x558a372ad980 ---------A   02560 GOTO 2580
    0x558a3729eae0 ---------A T 02570 PRINT"I HIT YOUR DESTROYER<A>"
    0x558a3729ed80 ---------A T 02580 FOR Q=1 TO 12
    0x558a3729efa0 ---------A   02590 IF E(Q)<>-1 THEN 2740
    0x558a372aea10 ---------A   02600 E(Q)=10+C
    0x558a372aed00 ---------A   02610 H(Q)=B(F(W),G(W))
    0x558a372aeef0 ---------A   02620 M3=0
    0x558a372af190 ---------A   02630 FOR M2=1TO12
    0x558a372af3d0 ---------A   02640 IF H(M2)<>H(Q) THEN 2660
    0x558a372af5f0 ---------A   02650 M3=M3+1
    0x558a372af6a0 ---------A T 02660 NEXT M2
    0x558a372afe50 ---------A   02670 IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 2480
    0x558a372b0080 ---------A   02680 FOR M2=1 TO 12
    0x558a372b02c0 ---------A   02690 IF H(M2)<>H(Q) THEN 2720
    0x558a372b04a0 ---------A   02700 E(M2)=-1
    0x558a372b0670 ---------A   02710 H(M2)=-1
    0x558a372b0720 ---------A T 02720 NEXT M2
    0x558a372b07a0 ---------A   02730 GOTO 2480
    0x558a372b0840 ---------A T 02740 NEXT Q
    0x558a372b0990 ---------A   02750 PRINT"PROGRAM ABORT:"
    0x558a372b0bb0 ---------A   02760 FOR Q=1TO12
    0x558a372b0f40 ---------A   02770 PRINT"E(";Q;")=";E(Q)
    0x558a372b12b0 ---------A   02780 PRINT"H(";Q;")=";H(Q)
    0x558a372b1360 ---------A   02790 NEXT Q
    0x558a372b13f0 ---------A   02800 GOTO 3310
    0x558a372b1450 ---------A T 02810 '********USINGEARRAY
    0x558a372b16f0 ---------A   02820 FOR R=1TO10
    0x558a372b1990 ---------A   02830 FOR S=1TO10
    0x558a372b1bd0 ---------A   02840 K(R,S)=0
    0x558a372b1c80 ---------A   02850 NEXT S
    0x558a372b1d40 ---------A   02860 NEXT R
    0x558a372b1ff0 ---------A   02870 FOR U=1TO12
    0x558a372b2210 ---------A   02880 IF E(U)<10 THEN 3030
    0x558a372b2430 ---------A   02890 FOR R=1TO10
    0x558a372b2660 ---------A   02900 FOR S=1TO10
    0x558a372b28e0 ---------A   02910 IF B(R,S)<10 THEN 2940
    0x558a372b2b20 ---------A   02920 K(R,S)=-10000000
    0x558a372b2ba0 ---------A   02930 GOTO 3010
    0x558a372b3030 ---------A T 02940 FOR M=SGN(1-R) TO SGN(10-R)
    0x558a372b3520 ---------A   02950 FOR N=SGN(1-2) TO SGN(10-S)
    0x558a372b38d0 ---------A   02960 IF N+M+N*M=0 THEN 2990
    0x558a372b3cc0 ---------A   02970 IF B(R+M,S+N)<>E(U) THEN 2990
    0x558a372b4360 ---------A   02980 K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
    0x558a372b4410 ---------A T 02990 NEXT N
    0x558a372b44d0 ---------A   03000 NEXT M
    0x558a372b4590 ---------A T 03010 NEXT S
    0x558a372b4650 ---------A   03020 NEXT R
    0x558a372b4710 ---------A T 03030 NEXT U
    0x558a372b48f0 ---------A   03040 FOR R=1TOA
    0x558a372b4a90 ---------A   03050 F(R)=R
    0x558a372b4c20 ---------A   03060 G(R)=R
    0x558a372b4cd0 ---------A   03070 NEXT R
    0x558a372b4ef0 ---------A   03080 FOR R=1TO10
    0x558a372b5110 ---------A   03090 FOR S=1TO10
    0x558a372b5290 ---------A   03100 Q9=1
    0x558a372b5480 ---------A   03110 FOR M=1TOA
    0x558a372b5900 ---------A   03120 IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 3140
    0x558a372b5a40 ---------A   03130 Q9=M
    0x558a372b5af0 ---------A T 03140 NEXT M
    0x558a372b5c70 ---------A   03150 IF R>A THEN 3170
    0x558a372b5e10 ---------A   03160 IF R=S THEN 3240
    0x558a372b61d0 ---------A T 03170 IF K(R,S)<K(F(Q9),G(Q9)) THEN 3240
    0x558a372b63c0 ---------A   03180 FOR M=1TOA
    0x558a372b65b0 ---------A   03190 IF F(M)<>R THEN 3220
    0x558a372b6790 ---------A   03200 IF G(M)=S THEN 3240
    0x558a372b6850 ---------A   03210 NEXT M
    0x558a372b69f0 ---------A T 03220 F(Q9)=R
    0x558a372b6b80 ---------A   03230 G(Q9)=S
    0x558a372b6c30 ---------A T 03240 NEXT S
    0x558a372b6cf0 ---------A   03250 NEXT R
    0x558a372b6d80 ---------A   03260 GOTO 2390
    0x558a372b7620 ----------   03270 PU=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    0x558a372b7670 ----------   03280 RETURN
    0x558a372b7b80 ----------   03290 PU=K+INT(K/4)-SGN(K-1)
    0x558a372b7bd0 ----------   03300 RETURN
    0x558a372b7d40 --------CA B 03310 PRINT"TO CONTINUE, HIT ANY KEY"
    0x558a372b8120 --------CA T 03320 A$=INKEY$:IF A$="" THEN 3320
    0x558a372b81c0 --------CA   03330 CLS:RETURN
    0x558a372b82c0 ---------A T 03340 PRINT:PRINT:END
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

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x558a3728ad10   0x558a3728ad10   0x558a372b82c0   0x558a372b82c0 
   B) 0x558a372a5970   0x558a372a5970   0x558a372a65a0   0x558a372a65a0 
   C) 0x558a372b7d40   0x558a372b7d40   0x558a372b81c0   0x558a372b81c0 

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     04380 - 10000    5630 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/salvocc/basic/salvocc.bas'
 *
    A     Array    Integer     {0,11} {0,11} 
    A              Integer 
    A$             String  
    B     Array    Integer     {0,11} {0,11} 
    C     Array    Integer     {0,8} 
    C              Integer 
    D     Array    Integer     {0,8} 
    E     Array    Integer     {0,13} 
    F     Array    Integer     {0,13} 
    G     Array    Integer     {0,13} 
    H     Array    Integer     {0,13} 
    II             Integer 
    INKEY$          String  
    INT   Function Integer     args=1, float 
    J$             String  
    K     Array    Integer     {0,11} {0,11} 
    K              Integer 
    K$             String  
    LEFT$ Function String      args=2, char* int   
    M              Integer 
    M2             Integer 
    M3             Integer 
    N              Integer 
    P3             Integer 
    PU             Integer 
    Q              Integer 
    Q9             Integer 
    R              Integer 
    R2             Integer 
    R3             Integer 
    RND   Function Integer     args=1, int   
    S              Integer 
    SGN   Function Integer     args=1, int   
    SQR   Function Integer     args=1, float 
    TAB   Function String      args=1, 
    U              Integer 
    U6             Integer 
    U8             Integer 
    V              Integer 
    V2             Integer 
    W              Integer 
    X              Integer 
    X1             Integer 
    Y              Integer 
    Y1             Integer 
    Z              Integer 
    Z2             Integer 
    Z3             Integer 
    Z5             Integer 
    Z8             Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/salvocc/basic/salvocc.bas: 
 *
                   +-+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | | |
        Address    v v v Original BASIC statement
    -------------- --- - ------------------------------------------------------------------------------
    0x558a3728ad10 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x558a3728ae00 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x558a3728ae80 ---------A   01020 CLS
    0x558a3728afc0 ---------A   01030 PRINT@284,"SALVO"
    0x558a3728b100 ---------A   01040 PRINT@409,"COPYRIGHT BY"
    0x558a3728b2a0 ---------A   01050 PRINT@534,"CREATIVE COMPUTING"
    0x558a3728b3c0 ---------A   01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x558a3728b6b0 ---------A   01070 FOR II=1TO1500:NEXT
    0x558a3728b710 ---------A   01080 CLS
    0x558a3728b830 ---------A   01090 PRINT:PRINT
    0x558a3728bb20 ---------A   01100 PRINTTAB(6)"WHILE I AM PLANNING MY BOARD, YOU CAN BE THINKING OF"
    0x558a3728bbc0 ---------A   01110 PRINT
    0x558a37290070 ---------A   01120 PRINTTAB(8)"THE LAY OUT FOR YOUR SHIPS. YOUR SHIPS INCLUDE:"
    0x558a37290110 ---------A   01130 PRINT
    0x558a37290380 ---------A   01140 PRINTTAB(15)"A BATTLESHIP, (FIVE CO-ORDINATES LONG)"
    0x558a37290420 ---------A   01150 PRINT
    0x558a37290680 ---------A   01160 PRINTTAB(15)"A CRUISER, (THREE CO-ORDINATES LONG)"
    0x558a37290810 ---------A   01170 PRINT
    0x558a37290a60 ---------A   01180 PRINTTAB(15)"DESTROYER <A>"
    0x558a37290ad0 ---------A   01190 PRINT
    0x558a37290b40 ---------A   01200 '
    0x558a37291b50 ---------A   01210 DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
    0x558a37291d30 ---------A   01220 Z8=0
    0x558a37291fc0 ---------A   01230 FOR W=1TO12
    0x558a372921a0 ---------A   01240 E(W)=-1
    0x558a37292370 ---------A   01250 H(W)=-1
    0x558a37292420 ---------A   01260 NEXT W
    0x558a372926c0 ---------A   01270 FOR X=1TO10
    0x558a37292960 ---------A   01280 FOR Y=1TO10
    0x558a37292ba0 ---------A   01290 B(X,Y)=0
    0x558a37292c50 ---------A   01300 NEXT Y
    0x558a37292d10 ---------A   01310 NEXT X
    0x558a37292f30 ---------A   01320 FOR X=1TO12
    0x558a37293320 ---------A   01330 F(X)=0
    0x558a372934f0 ---------A   01340 G(X)=0
    0x558a372935a0 ---------A   01350 NEXT X
    0x558a372937c0 ---------A T 01360 FOR X=1TO10
    0x558a372939e0 ---------A   01370 FOR Y=1TO10
    0x558a37293c20 ---------A   01380 A(X,Y)=0
    0x558a37293cd0 ---------A   01390 NEXT Y
    0x558a37293d90 ---------A   01400 NEXT X
    0x558a372940e0 ---------A   01410 FOR K=4 TO 1 STEP -1
    0x558a372942e0 ---------A   01420 U6=0
    0x558a37294360 ---------A T 01430 GOSUB 4300
    0x558a372947f0 ---------A   01440 IF V+V2+V*V2=0 THEN 1430
    0x558a37294bc0 ---------A   01450 GOSUB 3290:IF Y+V*PU>10 THEN 1430
    0x558a37294f10 ---------A   01460 GOSUB 3290:IF Y+V*PU<1 THEN 1430
    0x558a37295260 ---------A   01470 GOSUB 3290:IF X+V2*PU>10 THEN 1430
    0x558a372955a0 ---------A   01480 GOSUB 3290:IF X+V2*PU<1 THEN 1430
    0x558a372957c0 ---------A   01490 U6=U6+1
    0x558a37295980 ---------A   01500 IF U6>25 THEN 1360
    0x558a37295c30 ---------A   01510 GOSUB 3290:FOR Z=0 TO PU
    0x558a37296000 ---------A   01520 GOSUB 3270:F(Z+PU)=X+V2*Z
    0x558a372963b0 ---------A   01530 GOSUB 3270:G(Z+PU)=Y+V*Z
    0x558a37296460 ---------A   01540 NEXT Z
    0x558a37296670 ---------A   01550 GOSUB 3270:U8=PU
    0x558a372968d0 ---------A   01560 GOSUB 3290:IF U8>U8+PU THEN 1630
    0x558a37296bd0 ---------A   01570 GOSUB 3290:FOR Z2=U8 TO U8+PU
    0x558a37296d90 ---------A   01580 IF U8<2 THEN 1620
    0x558a37297100 ---------A   01590 FOR Z3=1 TO U8-1
    0x558a37297940 ---------A   01600 IF SQR((F(Z3)-F(Z2))^2+(G(Z3)-G(Z2))^2)<3.59 THEN 1430
    0x558a37297a00 ---------A   01610 NEXT Z3
    0x558a37297ac0 ---------A T 01620 NEXT Z2
    0x558a37297d10 ---------A T 01630 GOSUB 3290:FOR Z=0TOPU
    0x558a37298570 ---------A   01640 A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
    0x558a37298a30 ---------A   01650 NEXT Z
    0x558a37298af0 ---------A   01660 NEXT K
    0x558a37298b80 ---------A   01670 CLS
    0x558a37298cb0 ---------A   01680 PRINT"ENTER COORDINATES FOR ..."
    0x558a37298de0 ---------A   01690 PRINT"BATTLESHIP"
    0x558a37298ff0 ---------A   01700 FOR X=1TO5
    0x558a37299130 ---------A   01710 INPUT Y,Z
    0x558a37299370 ---------A   01720 B(Y,Z)=3
    0x558a37299420 ---------A   01730 NEXT X
    0x558a37299560 ---------A   01740 PRINT"CRUISER"
    0x558a37299770 ---------A   01750 FOR X=1TO3
    0x558a372998b0 ---------A   01760 INPUT Y,Z
    0x558a37299af0 ---------A   01770 B(Y,Z)=2
    0x558a37299ba0 ---------A   01780 NEXT X
    0x558a37299cf0 ---------A   01790 PRINT"DESTROYER <A>"
    0x558a37299f00 ---------A   01800 FOR X=1TO2
    0x558a3729a040 ---------A   01810 INPUT Y,Z
    0x558a3729a280 ---------A   01820 B(Y,Z)=1
    0x558a3729a330 ---------A   01830 NEXT X
    0x558a3729a3c0 ---------A   01840 CLS
    0x558a3729a4e0 ---------A   01850 PRINT"DESTROYER <B>"
    0x558a3729a6f0 ---------A   01860 FOR X=1TO2
    0x558a3729a830 ---------A   01870 INPUT Y,Z
    0x558a3729aa70 ---------A   01880 B(Y,Z)=.5
    0x558a3729ab20 ---------A   01890 NEXT X
    0x558a3729acb0 ---------A   01900 PRINT"DO YOU WANT TO SEE MY SHOTS";
    0x558a3729ae00 ---------A   01910 INPUT K$
    0x558a3729ae90 ---------A   01920 PRINT
    0x558a3729b0e0 ---------A   01930 IFJ$<>"YES" THEN 2630
    0x558a3729b160 ---------A   01940 '****START
    0x558a3729b350 ---------A T 01950 IF J$<>"YES" THEN 2000
    0x558a3729b5f0 ---------A   01960 C=C+1
    0x558a3729b660 ---------A   01970 PRINT
    0x558a3729b6d0 ---------A   01980 GOSUB 4350
    0x558a3729b870 ---------A   01990 PRINT"TURN";C
    0x558a3729ba70 ---------A T 02000 A=0
    0x558a3729bd20 ---------A   02010 FOR W=.5TO3 STEP .5
    0x558a3729bf40 ---------A   02020 FOR X=1TO10
    0x558a3729c170 ---------A   02030 FOR Y=1 TO 10
    0x558a3729c3b0 ---------A   02040 IF B(X,Y)=W THEN 2080
    0x558a3729c470 ---------A   02050 NEXT Y
    0x558a3729c530 ---------A   02060 NEXT X
    0x558a3729c5b0 ---------A   02070 GOTO 2090
    0x558a3729c930 ---------A T 02080 A=A+INT(W+.5)
    0x558a3729c9e0 ---------A T 02090 NEXT W
    0x558a3729cc00 ---------A   02100 FOR W=1TO7
    0x558a3729cde0 ---------A   02110 C(W)=0
    0x558a3729cfb0 ---------A   02120 D(W)=0
    0x558a3729d180 ---------A   02130 F(W)=0
    0x558a3729d350 ---------A   02140 G(W)=0
    0x558a3729d400 ---------A   02150 NEXT W
    0x558a3729d600 ---------A   02160 P3=0
    0x558a3729d810 ---------A   02170 FOR X=1TO10
    0x558a3729da40 ---------A   02180 FOR Y=1TO10
    0x558a3729dcc0 ---------A   02190 IF A(X,Y)>10 THEN 2210
    0x558a3729dee0 ---------A   02200 P3=P3+1
    0x558a3729df90 ---------A T 02210 NEXT Y
    0x558a3729e050 ---------A   02220 NEXT X
    0x558a3729e340 ---------A   02230 CLS:PRINT"YOU HAVE";A;"SHOTS."
    0x558a3729e4e0 ---------A   02240 IF P3>A THEN 2270
    0x558a3729e640 ---------A   02250 PRINT"YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
    0x558a3729e6b0 ---------A   02260 GOTO 2900
    0x558a3729e860 ---------A T 02270 IF A<>0 THEN 2300
    0x558a3729e9a0 ---------A T 02280 PRINT"I HAVE WON."
    0x558a3729f2a0 ---------A   02290 PRINT:PRINT:END
    0x558a3729f480 ---------A T 02300 FOR W=1TOA
    0x558a3729f5d0 ---------A T 02310 INPUT X,Y
    0x558a3729f7b0 ---------A   02320 IF X<>INT(X) THEN 2380
    0x558a3729f970 ---------A   02330 IF X>10 THEN 2380
    0x558a3729fb40 ---------A   02340 IF X<1 THEN 2380
    0x558a3729fd20 ---------A   02350 IF Y<>INT(Y) THEN 2380
    0x558a3729fee0 ---------A   02360 IF Y>10 THEN 2380
    0x558a372a00b0 ---------A   02370 IF Y>=1 THEN 2400
    0x558a372a01f0 ---------A T 02380 PRINT"ILLEGAL, ENTER AGAIN."
    0x558a372a0270 ---------A   02390 GOTO 2310
    0x558a372a04d0 ---------A T 02400 IF A(X,Y)>10 THEN 2450
    0x558a372a0670 ---------A   02410 C(W)=X
    0x558a372a0800 ---------A   02420 D(W)=Y
    0x558a372a08b0 ---------A   02430 NEXT W
    0x558a372a0950 ---------A   02440 GOTO 2470
    0x558a372a0ca0 ---------A T 02450 PRINT"YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
    0x558a372a0d10 ---------A   02460 GOTO 2310
    0x558a372a0ee0 ---------A T 02470 FOR W=1TOA
    0x558a372a1230 ---------A   02480 IF A(C(W),D(W))=3 THEN 2550
    0x558a372a1580 ---------A   02490 IF A(C(W),D(W))=2 THEN 2570
    0x558a372a18d0 ---------A   02500 IF A(C(W),D(W))=1 THEN 2590
    0x558a372a1c10 ---------A   02510 IF A(C(W),D(W))=.5 THEN 2610
    0x558a372a1fb0 ---------A T 02520 A(C(W),D(W))=10+C
    0x558a372a2060 ---------A   02530 NEXT W
    0x558a372a20f0 ---------A   02540 GOTO 2630
    0x558a372a2220 ---------A T 02550 PRINT"YOU HIT MY BATTLESHIP."
    0x558a372a22a0 ---------A   02560 GOTO 2520
    0x558a372a23c0 ---------A T 02570 PRINT"YOU HIT MY CRUISER."
    0x558a372a2440 ---------A   02580 GOTO 2520
    0x558a372a2570 ---------A T 02590 PRINT"YOU HIT MY DESTROYER <A>."
    0x558a372a25f0 ---------A   02600 GOTO 2520
    0x558a372a2720 ---------A T 02610 PRINT"YOU HIT MY DESTROYER <B>."
    0x558a372a2790 ---------A   02620 GOTO 2520
    0x558a372a2900 ---------A T 02630 A=0
    0x558a372a2ad0 ---------A   02640 IF J$="YES" THEN 2680
    0x558a372a2cf0 ---------A   02650 C=C+1
    0x558a372a2db0 ---------A   02660 PRINT:GOSUB 4350
    0x558a372a2f50 ---------A   02670 PRINT"TURN";C
    0x558a372a30d0 ---------A T 02680 A=0
    0x558a372a3380 ---------A   02690 FOR W=.5TO3 STEP .5
    0x558a372a35a0 ---------A   02700 FOR X=1TO10
    0x558a372a37d0 ---------A   02710 FOR Y=1TO10
    0x558a372a3a10 ---------A   02720 IF A(X,Y)=W THEN 2760
    0x558a372a3ad0 ---------A   02730 NEXT Y
    0x558a372a3b90 ---------A   02740 NEXT X
    0x558a372a3c10 ---------A   02750 GOTO 2770
    0x558a372a3f10 ---------A T 02760 A=A+INT(W+.5)
    0x558a372a3fc0 ---------A T 02770 NEXT W
    0x558a372a4140 ---------A   02780 P3=0
    0x558a372a4350 ---------A   02790 FOR X=1TO10
    0x558a372a4580 ---------A   02800 FOR Y=1TO10
    0x558a372a4800 ---------A   02810 IF A(X,Y)>10 THEN 2830
    0x558a372a4a20 ---------A   02820 P3=P3+1
    0x558a372a4ad0 ---------A T 02830 NEXT Y
    0x558a372a4b90 ---------A   02840 NEXT X
    0x558a372a4e40 ---------A   02850 PRINT"I HAVE";A;"SHOTS"
    0x558a372a4fd0 ---------A   02860 IF P3>A THEN 2890
    0x558a372a5120 ---------A   02870 PRINT"I HAVE MORE SHOTS THAN BLANK SQUARES."
    0x558a372a5190 ---------A   02880 GOTO 2280
    0x558a372a5340 ---------A T 02890 IF A<>0 THEN 2920
    0x558a372a5480 ---------A T 02900 PRINT"YOU HAVE WON."
    0x558a372a5500 ---------A   02910 GOTO 4290
    0x558a372a67d0 ---------A T 02920 FOR W=1TO 12
    0x558a372a69f0 ---------A   02930 IF H(W)>0 THEN 3770
    0x558a372a6ab0 ---------A   02940 NEXT W
    0x558a372a6b30 ---------A   02950 '*****RANDOM
    0x558a372a6cb0 ---------A   02960 W=0
    0x558a372a6ea0 ---------A T 02970 R3=0
    0x558a372a6f10 ---------A   02980 GOSUB 4300
    0x558a372a6f70 ---------A T 02990 RESTORE
    0x558a372a7150 ---------A   03000 R2=0
    0x558a372a7370 ---------A   03010 R3=R3+1
    0x558a372a7520 ---------A   03020 IF R3>100 THEN 2970
    0x558a372a76e0 ---------A   03030 IF X>10 THEN 3070
    0x558a372a78b0 ---------A   03040 IF X>0 THEN 3080
    0x558a372a7cb0 ---------A   03050 X=1+INT(RND(0)*2.5)
    0x558a372a7d30 ---------A   03060 GOTO 3080
    0x558a372a8110 ---------A T 03070 X=10-INT(RND(0)*2.5)
    0x558a372a82c0 ---------A T 03080 IF Y>10 THEN 3120
    0x558a372a8490 ---------A   03090 IF Y>0 THEN 3230
    0x558a372a8890 ---------A   03100 Y=1+INT(RND(0)*2.5)
    0x558a372a8910 ---------A   03110 GOTO 3230
    0x558a372a8cf0 ---------A T 03120 Y=10-INT(RND(0)*2.5)
    0x558a372a8d60 ---------A   03130 GOTO 3230
    0x558a372a8ee0 ---------A T 03140 F(W)=X
    0x558a372a9070 ---------A   03150 G(W)=Y
    0x558a372a91e0 ---------A   03160 IF W=A THEN 3340
    0x558a372a93a0 ---------A T 03170 IF R2=6 THEN 2990
    0x558a372a95e0 ---------A   03180 READ X1,Y1
    0x558a372a97f0 ---------A   03190 R2=R2+1
    0x558a372aa160 ---------A   03200 DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
    0x558a372aa330 ---------A   03210 X=X+X1
    0x558a372aa500 ---------A   03220 Y=Y+Y1
    0x558a372aa6b0 ---------A T 03230 IF X>10 THEN 3170
    0x558a372aa870 ---------A   03240 IF X<1 THEN 3170
    0x558a372aaa30 ---------A   03250 IF Y>10 THEN 3170
    0x558a372aac00 ---------A   03260 IF Y<1 THEN 3170
    0x558a372aae80 ---------A   03270 IF B(X,Y)>10 THEN 3170
    0x558a372ab0f0 ---------A   03280 FOR Q9=1 TO W
    0x558a372ab2e0 ---------A   03290 IF F(Q9)<>X THEN 3310
    0x558a372ab4c0 ---------A   03300 IF G(Q9)=Y THEN 3170
    0x558a372ab580 ---------A T 03310 NEXT Q9
    0x558a372ab7a0 ---------A   03320 W=W+1
    0x558a372ab820 ---------A   03330 GOTO 3140
    0x558a372abb60 ---------A T 03340 IF LEFT$(K$,1)<>"Y" THEN 3380
    0x558a372abdc0 ---------A   03350 FOR Z5=1TOA
    0x558a372abfe0 ---------A   03360 PRINTF(Z5);G(Z5)
    0x558a372ac090 ---------A   03370 NEXT Z5
    0x558a372ac280 ---------A T 03380 FOR W=1TOA
    0x558a372ac5d0 ---------A   03390 IF B(F(W),G(W))=3 THEN 3460
    0x558a372ac920 ---------A   03400 IF B(F(W),G(W))=2 THEN 3480
    0x558a372acc70 ---------A   03410 IF B(F(W),G(W))=1 THEN 3520
    0x558a372acfb0 ---------A   03420 IF B(F(W),G(W))=.5 THEN 3500
    0x558a372ad350 ---------A T 03430 B(F(W),G(W))=10+C
    0x558a372ad400 ---------A   03440 NEXT W
    0x558a372ad490 ---------A   03450 GOTO 1950
    0x558a372ad5b0 ---------A T 03460 PRINT"I HIT YOUR BATTLESHIP"
    0x558a372ad630 ---------A   03470 GOTO 3530
    0x558a372ad750 ---------A T 03480 PRINT"I HIT YOUR CRUISER"
    0x558a372ad7d0 ---------A   03490 GOTO 3530
    0x558a372ad900 ---------A T 03500 PRINT"I HIT YOUR DESTROYER<B>"
    0x558a372ad980 ---------A   03510 GOTO 3530
    0x558a3729eae0 ---------A T 03520 PRINT"I HIT YOUR DESTROYER<A>"
    0x558a3729ed80 ---------A T 03530 FOR Q=1 TO 12
    0x558a3729efa0 ---------A   03540 IF E(Q)<>-1 THEN 3690
    0x558a372aea10 ---------A   03550 E(Q)=10+C
    0x558a372aed00 ---------A   03560 H(Q)=B(F(W),G(W))
    0x558a372aeef0 ---------A   03570 M3=0
    0x558a372af190 ---------A   03580 FOR M2=1TO12
    0x558a372af3d0 ---------A   03590 IF H(M2)<>H(Q) THEN 3610
    0x558a372af5f0 ---------A   03600 M3=M3+1
    0x558a372af6a0 ---------A T 03610 NEXT M2
    0x558a372afe50 ---------A   03620 IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 3430
    0x558a372b0080 ---------A   03630 FOR M2=1 TO 12
    0x558a372b02c0 ---------A   03640 IF H(M2)<>H(Q) THEN 3670
    0x558a372b04a0 ---------A   03650 E(M2)=-1
    0x558a372b0670 ---------A   03660 H(M2)=-1
    0x558a372b0720 ---------A T 03670 NEXT M2
    0x558a372b07a0 ---------A   03680 GOTO 3430
    0x558a372b0840 ---------A T 03690 NEXT Q
    0x558a372b0990 ---------A   03700 PRINT"PROGRAM ABORT:"
    0x558a372b0bb0 ---------A   03710 FOR Q=1TO12
    0x558a372b0f40 ---------A   03720 PRINT"E(";Q;")=";E(Q)
    0x558a372b12b0 ---------A   03730 PRINT"H(";Q;")=";H(Q)
    0x558a372b1360 ---------A   03740 NEXT Q
    0x558a372b13f0 ---------A   03750 GOTO 4260
    0x558a372b1450 ---------A   03760 '********USINGEARRAY
    0x558a372b16f0 ---------A T 03770 FOR R=1TO10
    0x558a372b1990 ---------A   03780 FOR S=1TO10
    0x558a372b1bd0 ---------A   03790 K(R,S)=0
    0x558a372b1c80 ---------A   03800 NEXT S
    0x558a372b1d40 ---------A   03810 NEXT R
    0x558a372b1ff0 ---------A   03820 FOR U=1TO12
    0x558a372b2210 ---------A   03830 IF E(U)<10 THEN 3980
    0x558a372b2430 ---------A   03840 FOR R=1TO10
    0x558a372b2660 ---------A   03850 FOR S=1TO10
    0x558a372b28e0 ---------A   03860 IF B(R,S)<10 THEN 3890
    0x558a372b2b20 ---------A   03870 K(R,S)=-10000000
    0x558a372b2ba0 ---------A   03880 GOTO 3960
    0x558a372b3030 ---------A T 03890 FOR M=SGN(1-R) TO SGN(10-R)
    0x558a372b3520 ---------A   03900 FOR N=SGN(1-2) TO SGN(10-S)
    0x558a372b38d0 ---------A   03910 IF N+M+N*M=0 THEN 3940
    0x558a372b3cc0 ---------A   03920 IF B(R+M,S+N)<>E(U) THEN 3940
    0x558a372b4360 ---------A   03930 K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
    0x558a372b4410 ---------A T 03940 NEXT N
    0x558a372b44d0 ---------A   03950 NEXT M
    0x558a372b4590 ---------A T 03960 NEXT S
    0x558a372b4650 ---------A   03970 NEXT R
    0x558a372b4710 ---------A T 03980 NEXT U
    0x558a372b48f0 ---------A   03990 FOR R=1TOA
    0x558a372b4a90 ---------A   04000 F(R)=R
    0x558a372b4c20 ---------A   04010 G(R)=R
    0x558a372b4cd0 ---------A   04020 NEXT R
    0x558a372b4ef0 ---------A   04030 FOR R=1TO10
    0x558a372b5110 ---------A   04040 FOR S=1TO10
    0x558a372b5290 ---------A   04050 Q9=1
    0x558a372b5480 ---------A   04060 FOR M=1TOA
    0x558a372b5900 ---------A   04070 IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 4090
    0x558a372b5a40 ---------A   04080 Q9=M
    0x558a372b5af0 ---------A T 04090 NEXT M
    0x558a372b5c70 ---------A   04100 IF R>A THEN 4120
    0x558a372b5e10 ---------A   04110 IF R=S THEN 4190
    0x558a372b61d0 ---------A T 04120 IF K(R,S)<K(F(Q9),G(Q9)) THEN 4190
    0x558a372b63c0 ---------A   04130 FOR M=1TOA
    0x558a372b65b0 ---------A   04140 IF F(M)<>R THEN 4170
    0x558a372b6790 ---------A   04150 IF G(M)=S THEN 4190
    0x558a372b6850 ---------A   04160 NEXT M
    0x558a372b69f0 ---------A T 04170 F(Q9)=R
    0x558a372b6b80 ---------A   04180 G(Q9)=S
    0x558a372b6c30 ---------A T 04190 NEXT S
    0x558a372b6cf0 ---------A   04200 NEXT R
    0x558a372b6d80 ---------A   04210 GOTO 3340
    0x558a372b7620 ----------   04220 PU=(5-K)*3-2*INT(K/4)+SGN(K-1)-1
    0x558a372b7670 ----------   04230 RETURN
    0x558a372b7b80 ----------   04240 PU=K+INT(K/4)-SGN(K-1)
    0x558a372b7bd0 ----------   04250 RETURN
    0x558a372b7d40 ---------A T 04260 PRINT"TO CONTINUE, HIT ANY KEY"
    0x558a372b8120 ---------A T 04270 A$=INKEY$:IF A$="" THEN 4270
    0x558a372b81c0 ---------A   04280 CLS:RETURN
    0x558a372b82c0 ---------A T 04290 PRINT:PRINT:END
    0x558a372a5970 ---------B G 04300 X=INT(RND(0)*10+1)
    0x558a372a5d60 ---------B   04310 Y=INT(RND(0)*10+1)
    0x558a372a6160 ---------B   04320 V=INT(3*RND(0)-1)
    0x558a372a6550 ---------B   04330 V2=INT(3*RND(0)-1)
    0x558a372a65a0 ---------B   04340 RETURN
    0x558a372bd260 ---------C G 04350 PRINT"TO CONTINUE, HIT ANY KEY"
    0x558a372c0570 ---------C T 04360 A$=INKEY$:IF A$="" THEN 4360
    0x558a372c05d0 ---------C   04370 CLS:RETURN
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
char* data_03200s[]={"1","1","-1","1","1","-3","1","1","0","2","-1","1"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3200, 12,data_03200s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int   A_int_arr[11][11];// Comments?
int   A_int;        // Comments?
char* A_str;        // Comments?
int   B_int_arr[11][11];// Comments?
int   C_int_arr[8]; // Comments?
int   C_int;        // Comments?
int   D_int_arr[8]; // Comments?
int   E_int_arr[13];// Comments?
int   F_int_arr[13];// Comments?
int   G_int_arr[13];// Comments?
int   H_int_arr[13];// Comments?
int   II_int;       // Comments?
char* INKEY_str;    // Comments?
char* J_str;        // Comments?
int   K_int_arr[11][11];// Comments?
int   K_int;        // Comments?
char* K_str;        // Comments?
int   M_int;        // Comments?
int   M2_int;       // Comments?
int   M3_int;       // Comments?
int   N_int;        // Comments?
int   P3_int;       // Comments?
int   PU_int;       // Comments?
int   Q_int;        // Comments?
int   Q9_int;       // Comments?
int   R_int;        // Comments?
int   R2_int;       // Comments?
int   R3_int;       // Comments?
int   S_int;        // Comments?
int   U_int;        // Comments?
int   U6_int;       // Comments?
int   U8_int;       // Comments?
int   V_int;        // Comments?
int   V2_int;       // Comments?
int   W_int;        // Comments?
int   X_int;        // Comments?
int   X1_int;       // Comments?
int   Y_int;        // Comments?
int   Y1_int;       // Comments?
int   Z_int;        // Comments?
int   Z2_int;       // Comments?
int   Z3_int;       // Comments?
int   Z5_int;       // Comments?
int   Z8_int;       // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_04300();
void Routine_04350();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_04300(){
    // 04300 X=INT(RND(0)*10+1)
    X_int = INT(RND(0)*10+1);
    // 04310 Y=INT(RND(0)*10+1)
    Y_int = INT(RND(0)*10+1);
    // 04320 V=INT(3*RND(0)-1)
    V_int = INT(3*RND(0)-1);
    // 04330 V2=INT(3*RND(0)-1)
    V2_int = INT(3*RND(0)-1);
    // 04340 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_04350(){
    // 04350 PRINT"TO CONTINUE, HIT ANY KEY"
    b2c_fprintf(stdout,"TO CONTINUE, HIT ANY KEY"); b2c_fprintf(stdout,"\n");

  Lbl_04360:
    // 04360 A$=INKEY$:IF A$="" THEN 4360
    if(strcmp(A_str,"")==0)goto Lbl_04360;
    // 04370 CLS:RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS
    ClearScreen(0);
    // 01030 PRINT@284,"SALVO"
    b2c_fprintf(stdout,"SALVO"); b2c_fprintf(stdout,"\n");
    // 01040 PRINT@409,"COPYRIGHT BY"
    b2c_fprintf(stdout,"COPYRIGHT BY"); b2c_fprintf(stdout,"\n");
    // 01050 PRINT@534,"CREATIVE COMPUTING"
    b2c_fprintf(stdout,"CREATIVE COMPUTING"); b2c_fprintf(stdout,"\n");
    // 01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    b2c_fprintf(stdout,"MORRISTOWN, NEW JERSEY 07960"); b2c_fprintf(stdout,"\n");
    // 01070 FOR II=1TO1500:NEXT
    int dummy_1070=0; // Ignore this line.
};
// 01080 CLS
ClearScreen(0);
// 01090 PRINT:PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 01100 PRINTTAB(6)"WHILE I AM PLANNING MY BOARD, YOU CAN BE THINKING OF"
b2c_fprintf(stdout,"%sWHILE I AM PLANNING MY BOARD, YOU CAN BE THINKING OF",TAB(6)); b2c_fprintf(stdout,"\n");
// 01110 PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 01120 PRINTTAB(8)"THE LAY OUT FOR YOUR SHIPS. YOUR SHIPS INCLUDE:"
b2c_fprintf(stdout,"%sTHE LAY OUT FOR YOUR SHIPS. YOUR SHIPS INCLUDE:",TAB(8)); b2c_fprintf(stdout,"\n");
// 01130 PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 01140 PRINTTAB(15)"A BATTLESHIP, (FIVE CO-ORDINATES LONG)"
b2c_fprintf(stdout,"%sA BATTLESHIP, (FIVE CO-ORDINATES LONG)",TAB(15)); b2c_fprintf(stdout,"\n");
// 01150 PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 01160 PRINTTAB(15)"A CRUISER, (THREE CO-ORDINATES LONG)"
b2c_fprintf(stdout,"%sA CRUISER, (THREE CO-ORDINATES LONG)",TAB(15)); b2c_fprintf(stdout,"\n");
// 01170 PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 01180 PRINTTAB(15)"DESTROYER <A>"
b2c_fprintf(stdout,"%sDESTROYER <A>",TAB(15)); b2c_fprintf(stdout,"\n");
// 01190 PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 01200 '
// 01210 DIM A(10,10),B(10,10),C(7),D(7),E(12),F(12),G(12),H(12),K(10,10)
// 01220 Z8=0
Z8_int = 0;
// 01230 FOR W=1TO12
for(W_int=1;W_int<=12;W_int++){
    // 01240 E(W)=-1
    E_int_arr[(int)W_int] = -1;
    // 01250 H(W)=-1
    H_int_arr[(int)W_int] = -1;
    // 01260 NEXT W
    int dummy_1260=0; // Ignore this line.
}; // End-For(W_int)
// 01270 FOR X=1TO10
for(X_int=1;X_int<=10;X_int++){
    // 01280 FOR Y=1TO10
    for(Y_int=1;Y_int<=10;Y_int++){
        // 01290 B(X,Y)=0
        B_int_arr[(int)X_int][(int)Y_int] = 0;
        // 01300 NEXT Y
        int dummy_1300=0; // Ignore this line.
    }; // End-For(Y_int)
    // 01310 NEXT X
    int dummy_1310=0; // Ignore this line.
}; // End-For(X_int)
// 01320 FOR X=1TO12
for(X_int=1;X_int<=12;X_int++){
    // 01330 F(X)=0
    F_int_arr[(int)X_int] = 0;
    // 01340 G(X)=0
    G_int_arr[(int)X_int] = 0;
    // 01350 NEXT X
    int dummy_1350=0; // Ignore this line.
}; // End-For(X_int)

  Lbl_01360:
// 01360 FOR X=1TO10
for(X_int=1;X_int<=10;X_int++){
    // 01370 FOR Y=1TO10
    for(Y_int=1;Y_int<=10;Y_int++){
        // 01380 A(X,Y)=0
        A_int_arr[(int)X_int][(int)Y_int] = 0;
        // 01390 NEXT Y
        int dummy_1390=0; // Ignore this line.
    }; // End-For(Y_int)
    // 01400 NEXT X
    int dummy_1400=0; // Ignore this line.
}; // End-For(X_int)
// 01410 FOR K=4 TO 1 STEP -1
for(K_int=4;K_int>=1;K_int+=-1){
    // 01420 U6=0
    U6_int = 0;

  Lbl_01430:
    // 01430 GOSUB 4300
    Routine_04300();
    // 01440 IF V+V2+V*V2=0 THEN 1430
    if(V_int+V2_int+V_int*V2_int==0)goto Lbl_01430;
    // 01450 GOSUB 3290:IF Y+V*PU>10 THEN 1430
    if(Y_int+V_int*PU_int>10)goto Lbl_01430;
    // 01460 GOSUB 3290:IF Y+V*PU<1 THEN 1430
    if(Y_int+V_int*PU_int<1)goto Lbl_01430;
    // 01470 GOSUB 3290:IF X+V2*PU>10 THEN 1430
    if(X_int+V2_int*PU_int>10)goto Lbl_01430;
    // 01480 GOSUB 3290:IF X+V2*PU<1 THEN 1430
    if(X_int+V2_int*PU_int<1)goto Lbl_01430;
    // 01490 U6=U6+1
    U6_int = U6_int+1;
    // 01500 IF U6>25 THEN 1360
    if(U6_int>25)goto Lbl_01360;
    // 01510 GOSUB 3290:FOR Z=0 TO PU
    for(Z_int=0;Z_int<=PU_int;Z_int++){
        // 01520 GOSUB 3270:F(Z+PU)=X+V2*Z
        F_int_arr[(int)Z_int+PU_int] = X_int+V2_int*Z_int;
        // 01530 GOSUB 3270:G(Z+PU)=Y+V*Z
        G_int_arr[(int)Z_int+PU_int] = Y_int+V_int*Z_int;
        // 01540 NEXT Z
        int dummy_1540=0; // Ignore this line.
    }; // End-For(Z_int)
    // 01550 GOSUB 3270:U8=PU
    U8_int = PU_int;
    // 01560 GOSUB 3290:IF U8>U8+PU THEN 1630
    if(U8_int>U8_int+PU_int)goto Lbl_01630;
    // 01570 GOSUB 3290:FOR Z2=U8 TO U8+PU
    for(Z2_int=U8_int;Z2_int<=U8_int+PU_int;Z2_int++){
        // 01580 IF U8<2 THEN 1620
        if(U8_int<2)goto Lbl_01620;
        // 01590 FOR Z3=1 TO U8-1
        for(Z3_int=1;Z3_int<=U8_int-1;Z3_int++){
            // 01600 IF SQR((F(Z3)-F(Z2))^2+(G(Z3)-G(Z2))^2)<3.59 THEN 1430
            if(SQR(IPower((F_int_arr[(int)Z3_int]-F_int_arr[(int)Z2_int]),2)+IPower((G_int_arr[(int)Z3_int]-G_int_arr[(int)Z2_int]),2))<3.59)goto Lbl_01430;
            // 01610 NEXT Z3
            int dummy_1610=0; // Ignore this line.
        }; // End-For(Z3_int)

  Lbl_01620:
        // 01620 NEXT Z2
        int dummy_1620=0; // Ignore this line.
    }; // End-For(Z2_int)

  Lbl_01630:
    // 01630 GOSUB 3290:FOR Z=0TOPU
    for(Z_int=0;Z_int<=PU_int;Z_int++){
        // 01640 A(F(Z+U8),G(Z+U8))=.5+SGN(K-1)*(K-1.5)
        A_int_arr[(int)F_int_arr[(int)Z_int+U8_int]][(int)G_int_arr[(int)Z_int+U8_int]] = 0.5+SGN(K_int-1)*(K_int-1.5);
        // 01650 NEXT Z
        int dummy_1650=0; // Ignore this line.
    }; // End-For(Z_int)
    // 01660 NEXT K
    int dummy_1660=0; // Ignore this line.
}; // End-For(K_int)
// 01670 CLS
ClearScreen(0);
// 01680 PRINT"ENTER COORDINATES FOR ..."
b2c_fprintf(stdout,"ENTER COORDINATES FOR ..."); b2c_fprintf(stdout,"\n");
// 01690 PRINT"BATTLESHIP"
b2c_fprintf(stdout,"BATTLESHIP"); b2c_fprintf(stdout,"\n");
// 01700 FOR X=1TO5
for(X_int=1;X_int<=5;X_int++){
    // 01710 INPUT Y,Z
    // Start of Basic INPUT statement 01710
    printf(" ? ");
    char inpbuf_01710[100];
    if(fgets(inpbuf_01710,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01710=strtok(inpbuf_01710," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01710==nullptr){
            Y_int = 0;
        }else{
            Y_int = atof(ps_01710);
        };
        ps_01710=strtok(nullptr," ,\t\n");
        if(ps_01710==nullptr){
            Z_int = 0;
        }else{
            Z_int = atof(ps_01710);
        };
    }; // End of Basic INPUT statement 01710
    // 01720 B(Y,Z)=3
    B_int_arr[(int)Y_int][(int)Z_int] = 3;
    // 01730 NEXT X
    int dummy_1730=0; // Ignore this line.
}; // End-For(X_int)
// 01740 PRINT"CRUISER"
b2c_fprintf(stdout,"CRUISER"); b2c_fprintf(stdout,"\n");
// 01750 FOR X=1TO3
for(X_int=1;X_int<=3;X_int++){
    // 01760 INPUT Y,Z
    // Start of Basic INPUT statement 01760
    printf(" ? ");
    char inpbuf_01760[100];
    if(fgets(inpbuf_01760,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01760=strtok(inpbuf_01760," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01760==nullptr){
            Y_int = 0;
        }else{
            Y_int = atof(ps_01760);
        };
        ps_01760=strtok(nullptr," ,\t\n");
        if(ps_01760==nullptr){
            Z_int = 0;
        }else{
            Z_int = atof(ps_01760);
        };
    }; // End of Basic INPUT statement 01760
    // 01770 B(Y,Z)=2
    B_int_arr[(int)Y_int][(int)Z_int] = 2;
    // 01780 NEXT X
    int dummy_1780=0; // Ignore this line.
}; // End-For(X_int)
// 01790 PRINT"DESTROYER <A>"
b2c_fprintf(stdout,"DESTROYER <A>"); b2c_fprintf(stdout,"\n");
// 01800 FOR X=1TO2
for(X_int=1;X_int<=2;X_int++){
    // 01810 INPUT Y,Z
    // Start of Basic INPUT statement 01810
    printf(" ? ");
    char inpbuf_01810[100];
    if(fgets(inpbuf_01810,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01810=strtok(inpbuf_01810," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01810==nullptr){
            Y_int = 0;
        }else{
            Y_int = atof(ps_01810);
        };
        ps_01810=strtok(nullptr," ,\t\n");
        if(ps_01810==nullptr){
            Z_int = 0;
        }else{
            Z_int = atof(ps_01810);
        };
    }; // End of Basic INPUT statement 01810
    // 01820 B(Y,Z)=1
    B_int_arr[(int)Y_int][(int)Z_int] = 1;
    // 01830 NEXT X
    int dummy_1830=0; // Ignore this line.
}; // End-For(X_int)
// 01840 CLS
ClearScreen(0);
// 01850 PRINT"DESTROYER <B>"
b2c_fprintf(stdout,"DESTROYER <B>"); b2c_fprintf(stdout,"\n");
// 01860 FOR X=1TO2
for(X_int=1;X_int<=2;X_int++){
    // 01870 INPUT Y,Z
    // Start of Basic INPUT statement 01870
    printf(" ? ");
    char inpbuf_01870[100];
    if(fgets(inpbuf_01870,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01870=strtok(inpbuf_01870," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01870==nullptr){
            Y_int = 0;
        }else{
            Y_int = atof(ps_01870);
        };
        ps_01870=strtok(nullptr," ,\t\n");
        if(ps_01870==nullptr){
            Z_int = 0;
        }else{
            Z_int = atof(ps_01870);
        };
    }; // End of Basic INPUT statement 01870
    // 01880 B(Y,Z)=.5
    B_int_arr[(int)Y_int][(int)Z_int] = 0.5;
    // 01890 NEXT X
    int dummy_1890=0; // Ignore this line.
}; // End-For(X_int)
// 01900 PRINT"DO YOU WANT TO SEE MY SHOTS";
b2c_fprintf(stdout,"DO YOU WANT TO SEE MY SHOTS"); 
// 01910 INPUT K$
// Start of Basic INPUT statement 01910
printf(" ? ");
char inpbuf_01910[100];
if(fgets(inpbuf_01910,100,stdin)==nullptr){
    fprintf(stderr,"ERROR: End of file on input.\n");
    exit(2);
}else{
    char *ps_01910=strtok(inpbuf_01910," ,\t\n");
    // This may cause problems if BASIC programmer expected
    // input strings to be copied instead of just pointing
    // to the input buffer (ie. strings can be over written).
    if(ps_01910==nullptr){
        K_str = "";
    }else{
        K_str = ps_01910;
    };
}; // End of Basic INPUT statement 01910
// 01920 PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 01930 IFJ$<>"YES" THEN 2630
if(strcmp(J_str,"YES")!=0)goto Lbl_02630;
// 01940 '****START

  Lbl_01950:
// 01950 IF J$<>"YES" THEN 2000
if(strcmp(J_str,"YES")!=0)goto Lbl_02000;
// 01960 C=C+1
C_int = C_int+1;
// 01970 PRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 01980 GOSUB 4350
Routine_04350();
// 01990 PRINT"TURN";C
b2c_fprintf(stdout,"TURN %d ",C_int); b2c_fprintf(stdout,"\n");

  Lbl_02000:
// 02000 A=0
A_int = 0;
// 02010 FOR W=.5TO3 STEP .5
for(W_int=0.5;W_int<=3;W_int+=0.5){
    // 02020 FOR X=1TO10
    for(X_int=1;X_int<=10;X_int++){
        // 02030 FOR Y=1 TO 10
        for(Y_int=1;Y_int<=10;Y_int++){
            // 02040 IF B(X,Y)=W THEN 2080
            if(B_int_arr[(int)X_int][(int)Y_int]==W_int)goto Lbl_02080;
            // 02050 NEXT Y
            int dummy_2050=0; // Ignore this line.
        }; // End-For(Y_int)
        // 02060 NEXT X
        int dummy_2060=0; // Ignore this line.
    }; // End-For(X_int)
    // 02070 GOTO 2090
    goto Lbl_02090;

  Lbl_02080:
    // 02080 A=A+INT(W+.5)
    A_int = A_int+INT(W_int+0.5);

  Lbl_02090:
    // 02090 NEXT W
    int dummy_2090=0; // Ignore this line.
}; // End-For(W_int)
// 02100 FOR W=1TO7
for(W_int=1;W_int<=7;W_int++){
    // 02110 C(W)=0
    C_int_arr[(int)W_int] = 0;
    // 02120 D(W)=0
    D_int_arr[(int)W_int] = 0;
    // 02130 F(W)=0
    F_int_arr[(int)W_int] = 0;
    // 02140 G(W)=0
    G_int_arr[(int)W_int] = 0;
    // 02150 NEXT W
    int dummy_2150=0; // Ignore this line.
}; // End-For(W_int)
// 02160 P3=0
P3_int = 0;
// 02170 FOR X=1TO10
for(X_int=1;X_int<=10;X_int++){
    // 02180 FOR Y=1TO10
    for(Y_int=1;Y_int<=10;Y_int++){
        // 02190 IF A(X,Y)>10 THEN 2210
        if(A_int_arr[(int)X_int][(int)Y_int]>10)goto Lbl_02210;
        // 02200 P3=P3+1
        P3_int = P3_int+1;

  Lbl_02210:
        // 02210 NEXT Y
        int dummy_2210=0; // Ignore this line.
    }; // End-For(Y_int)
    // 02220 NEXT X
    int dummy_2220=0; // Ignore this line.
}; // End-For(X_int)
// 02230 CLS:PRINT"YOU HAVE";A;"SHOTS."
b2c_fprintf(stdout,"YOU HAVE %d SHOTS.",A_int); b2c_fprintf(stdout,"\n");
// 02240 IF P3>A THEN 2270
if(P3_int>A_int)goto Lbl_02270;
// 02250 PRINT"YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."
b2c_fprintf(stdout,"YOU HAVE MORE SHOTS THAN THERE ARE BLANK SQUARES."); b2c_fprintf(stdout,"\n");
// 02260 GOTO 2900
goto Lbl_02900;

  Lbl_02270:
// 02270 IF A<>0 THEN 2300
if(A_int!=0)goto Lbl_02300;

  Lbl_02280:
// 02280 PRINT"I HAVE WON."
b2c_fprintf(stdout,"I HAVE WON."); b2c_fprintf(stdout,"\n");
// 02290 PRINT:PRINT:END

  Lbl_02300:
// 02300 FOR W=1TOA
for(W_int=1;W_int<=A_int;W_int++){

  Lbl_02310:
    // 02310 INPUT X,Y
    // Start of Basic INPUT statement 02310
    printf(" ? ");
    char inpbuf_02310[100];
    if(fgets(inpbuf_02310,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02310=strtok(inpbuf_02310," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02310==nullptr){
            X_int = 0;
        }else{
            X_int = atof(ps_02310);
        };
        ps_02310=strtok(nullptr," ,\t\n");
        if(ps_02310==nullptr){
            Y_int = 0;
        }else{
            Y_int = atof(ps_02310);
        };
    }; // End of Basic INPUT statement 02310
    // 02320 IF X<>INT(X) THEN 2380
    if(X_int!=INT(X_int))goto Lbl_02380;
    // 02330 IF X>10 THEN 2380
    if(X_int>10)goto Lbl_02380;
    // 02340 IF X<1 THEN 2380
    if(X_int<1)goto Lbl_02380;
    // 02350 IF Y<>INT(Y) THEN 2380
    if(Y_int!=INT(Y_int))goto Lbl_02380;
    // 02360 IF Y>10 THEN 2380
    if(Y_int>10)goto Lbl_02380;
    // 02370 IF Y>=1 THEN 2400
    if(Y_int>=1)goto Lbl_02400;

  Lbl_02380:
    // 02380 PRINT"ILLEGAL, ENTER AGAIN."
    b2c_fprintf(stdout,"ILLEGAL, ENTER AGAIN."); b2c_fprintf(stdout,"\n");
    // 02390 GOTO 2310
    goto Lbl_02310;

  Lbl_02400:
    // 02400 IF A(X,Y)>10 THEN 2450
    if(A_int_arr[(int)X_int][(int)Y_int]>10)goto Lbl_02450;
    // 02410 C(W)=X
    C_int_arr[(int)W_int] = X_int;
    // 02420 D(W)=Y
    D_int_arr[(int)W_int] = Y_int;
    // 02430 NEXT W
    int dummy_2430=0; // Ignore this line.
}; // End-For(W_int)
// 02440 GOTO 2470
goto Lbl_02470;

  Lbl_02450:
// 02450 PRINT"YOU SHOT THERE BEFORE ON TURN";A(X,Y)-10
b2c_fprintf(stdout,"YOU SHOT THERE BEFORE ON TURN%d",A_int_arr[(int)X_int][(int)Y_int]-10); b2c_fprintf(stdout,"\n");
// 02460 GOTO 2310
goto Lbl_02310;

  Lbl_02470:
// 02470 FOR W=1TOA
for(W_int=1;W_int<=A_int;W_int++){
    // 02480 IF A(C(W),D(W))=3 THEN 2550
    if(A_int_arr[(int)C_int_arr[(int)W_int]][(int)D_int_arr[(int)W_int]]==3)goto Lbl_02550;
    // 02490 IF A(C(W),D(W))=2 THEN 2570
    if(A_int_arr[(int)C_int_arr[(int)W_int]][(int)D_int_arr[(int)W_int]]==2)goto Lbl_02570;
    // 02500 IF A(C(W),D(W))=1 THEN 2590
    if(A_int_arr[(int)C_int_arr[(int)W_int]][(int)D_int_arr[(int)W_int]]==1)goto Lbl_02590;
    // 02510 IF A(C(W),D(W))=.5 THEN 2610
    if(A_int_arr[(int)C_int_arr[(int)W_int]][(int)D_int_arr[(int)W_int]]==0.5)goto Lbl_02610;

  Lbl_02520:
    // 02520 A(C(W),D(W))=10+C
    A_int_arr[(int)C_int_arr[(int)W_int]][(int)D_int_arr[(int)W_int]] = 10+C_int;
    // 02530 NEXT W
    int dummy_2530=0; // Ignore this line.
}; // End-For(W_int)
// 02540 GOTO 2630
goto Lbl_02630;

  Lbl_02550:
// 02550 PRINT"YOU HIT MY BATTLESHIP."
b2c_fprintf(stdout,"YOU HIT MY BATTLESHIP."); b2c_fprintf(stdout,"\n");
// 02560 GOTO 2520
goto Lbl_02520;

  Lbl_02570:
// 02570 PRINT"YOU HIT MY CRUISER."
b2c_fprintf(stdout,"YOU HIT MY CRUISER."); b2c_fprintf(stdout,"\n");
// 02580 GOTO 2520
goto Lbl_02520;

  Lbl_02590:
// 02590 PRINT"YOU HIT MY DESTROYER <A>."
b2c_fprintf(stdout,"YOU HIT MY DESTROYER <A>."); b2c_fprintf(stdout,"\n");
// 02600 GOTO 2520
goto Lbl_02520;

  Lbl_02610:
// 02610 PRINT"YOU HIT MY DESTROYER <B>."
b2c_fprintf(stdout,"YOU HIT MY DESTROYER <B>."); b2c_fprintf(stdout,"\n");
// 02620 GOTO 2520
goto Lbl_02520;

  Lbl_02630:
// 02630 A=0
A_int = 0;
// 02640 IF J$="YES" THEN 2680
if(strcmp(J_str,"YES")==0)goto Lbl_02680;
// 02650 C=C+1
C_int = C_int+1;
// 02660 PRINT:GOSUB 4350
Routine_04350();
// 02670 PRINT"TURN";C
b2c_fprintf(stdout,"TURN %d ",C_int); b2c_fprintf(stdout,"\n");

  Lbl_02680:
// 02680 A=0
A_int = 0;
// 02690 FOR W=.5TO3 STEP .5
for(W_int=0.5;W_int<=3;W_int+=0.5){
    // 02700 FOR X=1TO10
    for(X_int=1;X_int<=10;X_int++){
        // 02710 FOR Y=1TO10
        for(Y_int=1;Y_int<=10;Y_int++){
            // 02720 IF A(X,Y)=W THEN 2760
            if(A_int_arr[(int)X_int][(int)Y_int]==W_int)goto Lbl_02760;
            // 02730 NEXT Y
            int dummy_2730=0; // Ignore this line.
        }; // End-For(Y_int)
        // 02740 NEXT X
        int dummy_2740=0; // Ignore this line.
    }; // End-For(X_int)
    // 02750 GOTO 2770
    goto Lbl_02770;

  Lbl_02760:
    // 02760 A=A+INT(W+.5)
    A_int = A_int+INT(W_int+0.5);

  Lbl_02770:
    // 02770 NEXT W
    int dummy_2770=0; // Ignore this line.
}; // End-For(W_int)
// 02780 P3=0
P3_int = 0;
// 02790 FOR X=1TO10
for(X_int=1;X_int<=10;X_int++){
    // 02800 FOR Y=1TO10
    for(Y_int=1;Y_int<=10;Y_int++){
        // 02810 IF A(X,Y)>10 THEN 2830
        if(A_int_arr[(int)X_int][(int)Y_int]>10)goto Lbl_02830;
        // 02820 P3=P3+1
        P3_int = P3_int+1;

  Lbl_02830:
        // 02830 NEXT Y
        int dummy_2830=0; // Ignore this line.
    }; // End-For(Y_int)
    // 02840 NEXT X
    int dummy_2840=0; // Ignore this line.
}; // End-For(X_int)
// 02850 PRINT"I HAVE";A;"SHOTS"
b2c_fprintf(stdout,"I HAVE %d SHOTS",A_int); b2c_fprintf(stdout,"\n");
// 02860 IF P3>A THEN 2890
if(P3_int>A_int)goto Lbl_02890;
// 02870 PRINT"I HAVE MORE SHOTS THAN BLANK SQUARES."
b2c_fprintf(stdout,"I HAVE MORE SHOTS THAN BLANK SQUARES."); b2c_fprintf(stdout,"\n");
// 02880 GOTO 2280
goto Lbl_02280;

  Lbl_02890:
// 02890 IF A<>0 THEN 2920
if(A_int!=0)goto Lbl_02920;

  Lbl_02900:
// 02900 PRINT"YOU HAVE WON."
b2c_fprintf(stdout,"YOU HAVE WON."); b2c_fprintf(stdout,"\n");
// 02910 GOTO 4290
goto Lbl_04290;

  Lbl_02920:
// 02920 FOR W=1TO 12
for(W_int=1;W_int<=12;W_int++){
    // 02930 IF H(W)>0 THEN 3770
    if(H_int_arr[(int)W_int]>0)goto Lbl_03770;
    // 02940 NEXT W
    int dummy_2940=0; // Ignore this line.
}; // End-For(W_int)
// 02950 '*****RANDOM
// 02960 W=0
W_int = 0;

  Lbl_02970:
// 02970 R3=0
R3_int = 0;
// 02980 GOSUB 4300
Routine_04300();

  Lbl_02990:
// 02990 RESTORE
Data_Index=0;
RestoreData(0);
// 03000 R2=0
R2_int = 0;
// 03010 R3=R3+1
R3_int = R3_int+1;
// 03020 IF R3>100 THEN 2970
if(R3_int>100)goto Lbl_02970;
// 03030 IF X>10 THEN 3070
if(X_int>10)goto Lbl_03070;
// 03040 IF X>0 THEN 3080
if(X_int>0)goto Lbl_03080;
// 03050 X=1+INT(RND(0)*2.5)
X_int = 1+INT(RND(0)*2.5);
// 03060 GOTO 3080
goto Lbl_03080;

  Lbl_03070:
// 03070 X=10-INT(RND(0)*2.5)
X_int = 10-INT(RND(0)*2.5);

  Lbl_03080:
// 03080 IF Y>10 THEN 3120
if(Y_int>10)goto Lbl_03120;
// 03090 IF Y>0 THEN 3230
if(Y_int>0)goto Lbl_03230;
// 03100 Y=1+INT(RND(0)*2.5)
Y_int = 1+INT(RND(0)*2.5);
// 03110 GOTO 3230
goto Lbl_03230;

  Lbl_03120:
// 03120 Y=10-INT(RND(0)*2.5)
Y_int = 10-INT(RND(0)*2.5);
// 03130 GOTO 3230
goto Lbl_03230;

  Lbl_03140:
// 03140 F(W)=X
F_int_arr[(int)W_int] = X_int;
// 03150 G(W)=Y
G_int_arr[(int)W_int] = Y_int;
// 03160 IF W=A THEN 3340
if(W_int==A_int)goto Lbl_03340;

  Lbl_03170:
// 03170 IF R2=6 THEN 2990
if(R2_int==6)goto Lbl_02990;
// 03180 READ X1,Y1
X1_int = Get_Data_Int();
Y1_int = Get_Data_Int();
// 03190 R2=R2+1
R2_int = R2_int+1;
// 03200 DATA 1,1,-1,1,1,-3,1,1,0,2,-1,1
// 03210 X=X+X1
X_int = X_int+X1_int;
// 03220 Y=Y+Y1
Y_int = Y_int+Y1_int;

  Lbl_03230:
// 03230 IF X>10 THEN 3170
if(X_int>10)goto Lbl_03170;
// 03240 IF X<1 THEN 3170
if(X_int<1)goto Lbl_03170;
// 03250 IF Y>10 THEN 3170
if(Y_int>10)goto Lbl_03170;
// 03260 IF Y<1 THEN 3170
if(Y_int<1)goto Lbl_03170;
// 03270 IF B(X,Y)>10 THEN 3170
if(B_int_arr[(int)X_int][(int)Y_int]>10)goto Lbl_03170;
// 03280 FOR Q9=1 TO W
for(Q9_int=1;Q9_int<=W_int;Q9_int++){
    // 03290 IF F(Q9)<>X THEN 3310
    if(F_int_arr[(int)Q9_int]!=X_int)goto Lbl_03310;
    // 03300 IF G(Q9)=Y THEN 3170
    if(G_int_arr[(int)Q9_int]==Y_int)goto Lbl_03170;

  Lbl_03310:
    // 03310 NEXT Q9
    int dummy_3310=0; // Ignore this line.
}; // End-For(Q9_int)
// 03320 W=W+1
W_int = W_int+1;
// 03330 GOTO 3140
goto Lbl_03140;

  Lbl_03340:
// 03340 IF LEFT$(K$,1)<>"Y" THEN 3380
if(strcmp(LEFT(K_str,1),"Y")!=0)goto Lbl_03380;
// 03350 FOR Z5=1TOA
for(Z5_int=1;Z5_int<=A_int;Z5_int++){
    // 03360 PRINTF(Z5);G(Z5)
    b2c_fprintf(stdout," %d  %d ",F_int_arr[(int)Z5_int],G_int_arr[(int)Z5_int]); b2c_fprintf(stdout,"\n");
    // 03370 NEXT Z5
    int dummy_3370=0; // Ignore this line.
}; // End-For(Z5_int)

  Lbl_03380:
// 03380 FOR W=1TOA
for(W_int=1;W_int<=A_int;W_int++){
    // 03390 IF B(F(W),G(W))=3 THEN 3460
    if(B_int_arr[(int)F_int_arr[(int)W_int]][(int)G_int_arr[(int)W_int]]==3)goto Lbl_03460;
    // 03400 IF B(F(W),G(W))=2 THEN 3480
    if(B_int_arr[(int)F_int_arr[(int)W_int]][(int)G_int_arr[(int)W_int]]==2)goto Lbl_03480;
    // 03410 IF B(F(W),G(W))=1 THEN 3520
    if(B_int_arr[(int)F_int_arr[(int)W_int]][(int)G_int_arr[(int)W_int]]==1)goto Lbl_03520;
    // 03420 IF B(F(W),G(W))=.5 THEN 3500
    if(B_int_arr[(int)F_int_arr[(int)W_int]][(int)G_int_arr[(int)W_int]]==0.5)goto Lbl_03500;

  Lbl_03430:
    // 03430 B(F(W),G(W))=10+C
    B_int_arr[(int)F_int_arr[(int)W_int]][(int)G_int_arr[(int)W_int]] = 10+C_int;
    // 03440 NEXT W
    int dummy_3440=0; // Ignore this line.
}; // End-For(W_int)
// 03450 GOTO 1950
goto Lbl_01950;

  Lbl_03460:
// 03460 PRINT"I HIT YOUR BATTLESHIP"
b2c_fprintf(stdout,"I HIT YOUR BATTLESHIP"); b2c_fprintf(stdout,"\n");
// 03470 GOTO 3530
goto Lbl_03530;

  Lbl_03480:
// 03480 PRINT"I HIT YOUR CRUISER"
b2c_fprintf(stdout,"I HIT YOUR CRUISER"); b2c_fprintf(stdout,"\n");
// 03490 GOTO 3530
goto Lbl_03530;

  Lbl_03500:
// 03500 PRINT"I HIT YOUR DESTROYER<B>"
b2c_fprintf(stdout,"I HIT YOUR DESTROYER<B>"); b2c_fprintf(stdout,"\n");
// 03510 GOTO 3530
goto Lbl_03530;

  Lbl_03520:
// 03520 PRINT"I HIT YOUR DESTROYER<A>"
b2c_fprintf(stdout,"I HIT YOUR DESTROYER<A>"); b2c_fprintf(stdout,"\n");

  Lbl_03530:
// 03530 FOR Q=1 TO 12
for(Q_int=1;Q_int<=12;Q_int++){
    // 03540 IF E(Q)<>-1 THEN 3690
    if(E_int_arr[(int)Q_int]!=-1)goto Lbl_03690;
    // 03550 E(Q)=10+C
    E_int_arr[(int)Q_int] = 10+C_int;
    // 03560 H(Q)=B(F(W),G(W))
    H_int_arr[(int)Q_int] = B_int_arr[(int)F_int_arr[(int)W_int]][(int)G_int_arr[(int)W_int]];
    // 03570 M3=0
    M3_int = 0;
    // 03580 FOR M2=1TO12
    for(M2_int=1;M2_int<=12;M2_int++){
        // 03590 IF H(M2)<>H(Q) THEN 3610
        if(H_int_arr[(int)M2_int]!=H_int_arr[(int)Q_int])goto Lbl_03610;
        // 03600 M3=M3+1
        M3_int = M3_int+1;

  Lbl_03610:
        // 03610 NEXT M2
        int dummy_3610=0; // Ignore this line.
    }; // End-For(M2_int)
    // 03620 IF M3<>INT(H(Q)+.5)+1+INT(INT(H(Q)+.5)/3) THEN 3430
    if(M3_int!=INT(H_int_arr[(int)Q_int]+0.5)+1+INT(INT(H_int_arr[(int)Q_int]+0.5)/3))goto Lbl_03430;
    // 03630 FOR M2=1 TO 12
    for(M2_int=1;M2_int<=12;M2_int++){
        // 03640 IF H(M2)<>H(Q) THEN 3670
        if(H_int_arr[(int)M2_int]!=H_int_arr[(int)Q_int])goto Lbl_03670;
        // 03650 E(M2)=-1
        E_int_arr[(int)M2_int] = -1;
        // 03660 H(M2)=-1
        H_int_arr[(int)M2_int] = -1;

  Lbl_03670:
        // 03670 NEXT M2
        int dummy_3670=0; // Ignore this line.
    }; // End-For(M2_int)
    // 03680 GOTO 3430
    goto Lbl_03430;

  Lbl_03690:
    // 03690 NEXT Q
    int dummy_3690=0; // Ignore this line.
}; // End-For(Q_int)
// 03700 PRINT"PROGRAM ABORT:"
b2c_fprintf(stdout,"PROGRAM ABORT:"); b2c_fprintf(stdout,"\n");
// 03710 FOR Q=1TO12
for(Q_int=1;Q_int<=12;Q_int++){
    // 03720 PRINT"E(";Q;")=";E(Q)
    b2c_fprintf(stdout,"E( %d )= %d ",Q_int,E_int_arr[(int)Q_int]); b2c_fprintf(stdout,"\n");
    // 03730 PRINT"H(";Q;")=";H(Q)
    b2c_fprintf(stdout,"H( %d )= %d ",Q_int,H_int_arr[(int)Q_int]); b2c_fprintf(stdout,"\n");
    // 03740 NEXT Q
    int dummy_3740=0; // Ignore this line.
}; // End-For(Q_int)
// 03750 GOTO 4260
goto Lbl_04260;
// 03760 '********USINGEARRAY

  Lbl_03770:
// 03770 FOR R=1TO10
for(R_int=1;R_int<=10;R_int++){
    // 03780 FOR S=1TO10
    for(S_int=1;S_int<=10;S_int++){
        // 03790 K(R,S)=0
        K_int_arr[(int)R_int][(int)S_int] = 0;
        // 03800 NEXT S
        int dummy_3800=0; // Ignore this line.
    }; // End-For(S_int)
    // 03810 NEXT R
    int dummy_3810=0; // Ignore this line.
}; // End-For(R_int)
// 03820 FOR U=1TO12
for(U_int=1;U_int<=12;U_int++){
    // 03830 IF E(U)<10 THEN 3980
    if(E_int_arr[(int)U_int]<10)goto Lbl_03980;
    // 03840 FOR R=1TO10
    for(R_int=1;R_int<=10;R_int++){
        // 03850 FOR S=1TO10
        for(S_int=1;S_int<=10;S_int++){
            // 03860 IF B(R,S)<10 THEN 3890
            if(B_int_arr[(int)R_int][(int)S_int]<10)goto Lbl_03890;
            // 03870 K(R,S)=-10000000
            K_int_arr[(int)R_int][(int)S_int] = -10000000;
            // 03880 GOTO 3960
            goto Lbl_03960;

  Lbl_03890:
            // 03890 FOR M=SGN(1-R) TO SGN(10-R)
            for(M_int=SGN(1-R_int);M_int<=SGN(10-R_int);M_int++){
                // 03900 FOR N=SGN(1-2) TO SGN(10-S)
                for(N_int=SGN(1-2);N_int<=SGN(10-S_int);N_int++){
                    // 03910 IF N+M+N*M=0 THEN 3940
                    if(N_int+M_int+N_int*M_int==0)goto Lbl_03940;
                    // 03920 IF B(R+M,S+N)<>E(U) THEN 3940
                    if(B_int_arr[(int)R_int+M_int][(int)S_int+N_int]!=E_int_arr[(int)U_int])goto Lbl_03940;
                    // 03930 K(R,S)=K(R,S)+E(U)-S*INT(H(U)+.5)
                    K_int_arr[(int)R_int][(int)S_int] = K_int_arr[(int)R_int][(int)S_int]+E_int_arr[(int)U_int]-S_int*INT(H_int_arr[(int)U_int]+0.5);

  Lbl_03940:
                    // 03940 NEXT N
                    int dummy_3940=0; // Ignore this line.
                }; // End-For(N_int)
                // 03950 NEXT M
                int dummy_3950=0; // Ignore this line.
            }; // End-For(M_int)

  Lbl_03960:
            // 03960 NEXT S
            int dummy_3960=0; // Ignore this line.
        }; // End-For(S_int)
        // 03970 NEXT R
        int dummy_3970=0; // Ignore this line.
    }; // End-For(R_int)

  Lbl_03980:
    // 03980 NEXT U
    int dummy_3980=0; // Ignore this line.
}; // End-For(U_int)
// 03990 FOR R=1TOA
for(R_int=1;R_int<=A_int;R_int++){
    // 04000 F(R)=R
    F_int_arr[(int)R_int] = R_int;
    // 04010 G(R)=R
    G_int_arr[(int)R_int] = R_int;
    // 04020 NEXT R
    int dummy_4020=0; // Ignore this line.
}; // End-For(R_int)
// 04030 FOR R=1TO10
for(R_int=1;R_int<=10;R_int++){
    // 04040 FOR S=1TO10
    for(S_int=1;S_int<=10;S_int++){
        // 04050 Q9=1
        Q9_int = 1;
        // 04060 FOR M=1TOA
        for(M_int=1;M_int<=A_int;M_int++){
            // 04070 IF K(F(M),G(M))>=K(F(Q9),G(Q9)) THEN 4090
            if(K_int_arr[(int)F_int_arr[(int)M_int]][(int)G_int_arr[(int)M_int]]>=K_int_arr[(int)F_int_arr[(int)Q9_int]][(int)G_int_arr[(int)Q9_int]])goto Lbl_04090;
            // 04080 Q9=M
            Q9_int = M_int;

  Lbl_04090:
            // 04090 NEXT M
            int dummy_4090=0; // Ignore this line.
        }; // End-For(M_int)
        // 04100 IF R>A THEN 4120
        if(R_int>A_int)goto Lbl_04120;
        // 04110 IF R=S THEN 4190
        if(R_int==S_int)goto Lbl_04190;

  Lbl_04120:
        // 04120 IF K(R,S)<K(F(Q9),G(Q9)) THEN 4190
        if(K_int_arr[(int)R_int][(int)S_int]<K_int_arr[(int)F_int_arr[(int)Q9_int]][(int)G_int_arr[(int)Q9_int]])goto Lbl_04190;
        // 04130 FOR M=1TOA
        for(M_int=1;M_int<=A_int;M_int++){
            // 04140 IF F(M)<>R THEN 4170
            if(F_int_arr[(int)M_int]!=R_int)goto Lbl_04170;
            // 04150 IF G(M)=S THEN 4190
            if(G_int_arr[(int)M_int]==S_int)goto Lbl_04190;
            // 04160 NEXT M
            int dummy_4160=0; // Ignore this line.
        }; // End-For(M_int)

  Lbl_04170:
        // 04170 F(Q9)=R
        F_int_arr[(int)Q9_int] = R_int;
        // 04180 G(Q9)=S
        G_int_arr[(int)Q9_int] = S_int;

  Lbl_04190:
        // 04190 NEXT S
        int dummy_4190=0; // Ignore this line.
    }; // End-For(S_int)
    // 04200 NEXT R
    int dummy_4200=0; // Ignore this line.
}; // End-For(R_int)
// 04210 GOTO 3340
goto Lbl_03340;

  Lbl_04260:
// 04260 PRINT"TO CONTINUE, HIT ANY KEY"
b2c_fprintf(stdout,"TO CONTINUE, HIT ANY KEY"); b2c_fprintf(stdout,"\n");

  Lbl_04270:
// 04270 A$=INKEY$:IF A$="" THEN 4270
if(strcmp(A_str,"")==0)goto Lbl_04270;
// 04280 CLS:RETURN
return;
};

  Lbl_04290:
// 04290 PRINT:PRINT:END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
