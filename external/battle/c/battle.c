/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/battle.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x629f6f17d6d0 ---------A   00005  PRINT TAB(33);"BATTLE"
    0x629f6f17d670 ---------A   00007  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x629f6f17eb80 ---------A   00010  REM -- BATTLE WRITTEN BY RAY WESTERGARD  10/70
    0x629f6f17fff0 ---------A   00020  REM COPYRIGHT 1971 BY THE REGENTS OF THE UNIV. OF CALIF.
    0x629f6f17da20 ---------A   00030  REM PRODUCED AT THE LAWRENCE HALL OF SCIENCE, BERKELEY
    0x629f6f17fae0 ---------A   00040  REM DIM F(6,6),H(6,6),A(4)<B(4),C(6),L(3)
    0x629f6f17e4c0 ---------A T 00050  FOR X=1 TO 6
    0x629f6f1801e0 ---------A   00051  FOR Y=1 TO 6
    0x629f6f1859c0 ---------A   00052  F(X,Y)=0
    0x629f6f17d830 ---------A   00053  NEXT Y
    0x629f6f185b90 ---------A   00054  NEXT X
    0x629f6f185ec0 ---------A   00060  FOR I=1 TO 3
    0x629f6f186280 ---------A   00070  N=4-I
    0x629f6f186610 ---------A   00080  FOR J=1 TO 2
    0x629f6f186cb0 ---------A T 00090  A=INT(6*RND(1)+1)
    0x629f6f187340 ---------A   00100  B=INT(6*RND(1)+1)
    0x629f6f1879d0 ---------A   00110  D=INT(4*RND(1)+1)
    0x629f6f187de0 ---------A   00120  IF F(A,B)>0 THEN 90
    0x629f6f1880a0 ---------A   00130  M=0
    0x629f6f1884f0 ---------A   00140  ON D GOTO 150,340,550,740
    0x629f6f1887f0 ---------A T 00150  B(1)=B
    0x629f6f188d70 ---------A   00160  B(2)=7:B(3)=7
    0x629f6f189120 ---------A   00170  FOR K=1 TO N
    0x629f6f189380 ---------A   00180  IF M>1 THEN 240
    0x629f6f1896a0 ---------A   00190  IF B(K)=6 THEN 230
    0x629f6f189ca0 ---------A   00200  IF F(A,B(K)+1)>0 THEN 230
    0x629f6f18a2a0 ---------A   00210  B(K+1)=B(K)+1
    0x629f6f18a310 ---------A   00220  GOTO 280
    0x629f6f18a540 ---------A T 00230  M=2
    0x629f6f18b0a0 ---------A T 00240  IF B(1)<B(2) AND B(1)<B(3) THEN Z=B(1)
    0x629f6f18bb50 ---------A   00242  IF B(2)<B(1) AND B(2)<B(3) THEN Z=B(2)
    0x629f6f18c5e0 ---------A   00244  IF B(3)<B(1) AND B(3)<B(2) THEN Z=B(3)
    0x629f6f18c820 ---------A   00250  IF Z=1 THEN 90
    0x629f6f18cf50 ---------A   00260  IF F(A,Z-1)>0 THEN 90
    0x629f6f18d470 ---------A   00270  B(K+1)=Z-1
    0x629f6f18d5a0 ---------A T 00280  NEXT K
    0x629f6f18dcd0 ---------A   00290  F(A,B)=9-2*I-J
    0x629f6f18dfc0 ---------A   00300  FOR K=1 TO N
    0x629f6f18e760 ---------A   00310  F(A,B(K+1))=F(A,B)
    0x629f6f18e890 ---------A   00320  NEXT K
    0x629f6f18e920 ---------A   00330  GOTO 990
    0x629f6f18ec10 ---------A T 00340  A(1)=A
    0x629f6f18eee0 ---------A   00350  B(1)=B
    0x629f6f18f9c0 ---------A   00360  A(2)=0:A(3)=0:B(2)=0:B(3)=0
    0x629f6f18fcb0 ---------A   00370  FOR K=1 TO N
    0x629f6f18fef0 ---------A   00380  IF M>1 THEN 460
    0x629f6f190510 ---------A   00390  IF A(K)=1 OR B(K)=1 THEN 450
    0x629f6f190d20 ---------A   00400  IF F(A(K)-1,B(K)-1)>0 THEN 450
    0x629f6f191f40 ---------A   00410  IF F(A(K)-1,B(K))>0 AND F(A(K)-1,B(K))=F(A(K),B(K)-1) THEN 450
    0x629f6f192540 ---------A   00420  A(K+1)=A(K)-1
    0x629f6f192b30 ---------A   00430  B(K+1)=B(K)-1
    0x629f6f192ba0 ---------A   00440  GOTO 530
    0x629f6f192dd0 ---------A T 00450  M=2
    0x629f6f193930 ---------A T 00460  IF A(1)>A(2) AND A(1)>A(3) THEN Z1=A(1)
    0x629f6f1943e0 ---------A   00462  IF A(2)>A(1) AND A(2)>A(3) THEN Z1=A(2)
    0x629f6f194e90 ---------A   00464  IF A(3)>A(1) AND A(3)>A(2) THEN Z1=A(3)
    0x629f6f195a00 ---------A   00470  IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x629f6f1964b0 ---------A   00474  IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x629f6f196f20 ---------A   00476  IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x629f6f1973b0 ---------A   00480  IF Z1=6 OR Z2=6 THEN 90
    0x629f6f1979f0 ---------A   00490  IF F(Z1+1,Z2+1)>0 THEN 90
    0x629f6f1986d0 ---------A   00500  IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1+1,Z2) THEN 90
    0x629f6f198bf0 ---------A   00510  A(K+1)=Z1+1
    0x629f6f199100 ---------A   00520  B(K+1)=Z2+1
    0x629f6f199230 ---------A T 00530  NEXT K
    0x629f6f1996d0 ---------A   00540  GOTO 950
    0x629f6f1999c0 ---------A T 00550  A(1)=A
    0x629f6f199f40 ---------A   00560  A(2)=7:A(3)=7
    0x629f6f19a230 ---------A   00570  FOR K=1 TO N
    0x629f6f19a490 ---------A   00580  IF M>1 THEN 640
    0x629f6f19a7e0 ---------A   00590  IF A(K)=6 THEN 630
    0x629f6f19ade0 ---------A   00600  IF F(A(K)+1,B)>0 THEN 630
    0x629f6f19b3e0 ---------A   00610  A(K+1)=A(K)+1
    0x629f6f19b450 ---------A   00620  GOTO 680
    0x629f6f19b680 ---------A T 00630  M=2
    0x629f6f19c120 ---------A T 00640  IF A(1)<A(2) AND A(1)<A(3) THEN Z=A(1)
    0x629f6f19cbd0 ---------A   00642  IF A(2)<A(1) AND A(2)<A(3) THEN Z=A(2)
    0x629f6f19d660 ---------A   00644  IF A(3)<A(1) AND A(3)<A(2) THEN Z=A(3)
    0x629f6f19d8d0 ---------A   00650  IF Z=1 THEN 90
    0x629f6f19ddf0 ---------A   00660  IF F(Z-1,B)>0 THEN 90
    0x629f6f19e310 ---------A   00670  A(K+1)=Z-1
    0x629f6f19e440 ---------A T 00680  NEXT K
    0x629f6f19eb70 ---------A   00690  F(A,B)=9-2*I-J
    0x629f6f19ee60 ---------A   00700  FOR K=1 TO N
    0x629f6f19f600 ---------A   00710  F(A(K+1),B)=F(A,B)
    0x629f6f19f730 ---------A   00720  NEXT K
    0x629f6f19f7c0 ---------A   00730  GOTO 990
    0x629f6f19fab0 ---------A T 00740  A(1)=A
    0x629f6f19fda0 ---------A   00750  B(1)=B
    0x629f6f1a0320 ---------A   00760  A(2)=7:A(3)=7
    0x629f6f1a08a0 ---------A   00770  B(2)=0:B(3)=0
    0x629f6f1a0b90 ---------A   00780  FOR K=1 TO N
    0x629f6f1a0e00 ---------A   00790  IF M>1 THEN 870
    0x629f6f1a1450 ---------A   00800  IF A(K)=6 OR B(K)=1 THEN 860
    0x629f6f1a1c60 ---------A   00810  IF F(A(K)+1,B(K)-1)>0 THEN 860
    0x629f6f1a2e80 ---------A   00820  IF F(A(K)+1,B(K))>0 AND F(A(K)+1,B(K))=F(A(K),B(K)-1) THEN 860
    0x629f6f1a3480 ---------A   00830  A(K+1)=A(K)+1
    0x629f6f1a3a70 ---------A   00840  B(K+1)=B(K)-1
    0x629f6f1a3ae0 ---------A   00850  GOTO 940
    0x629f6f1a3d10 ---------A T 00860  M=2
    0x629f6f1a47b0 ---------A T 00870  IF A(1)<A(2) AND A(1)<A(3) THEN Z1=A(1)
    0x629f6f1a5260 ---------A   00872  IF A(2)<A(1) AND A(2)<A(3) THEN Z1=A(2)
    0x629f6f1a5d10 ---------A   00874  IF A(3)<A(1) AND A(3)<A(2) THEN Z1=A(3)
    0x629f6f1a67c0 ---------A   00880  IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x629f6f1a7270 ---------A   00882  IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x629f6f1a7d10 ---------A   00884  IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x629f6f1a81a0 ---------A   00890  IF Z1=1 OR Z2=6 THEN 90
    0x629f6f1a87e0 ---------A   00900  IF F(Z1-1,Z2+1)>0 THEN 90
    0x629f6f1a94c0 ---------A   00910  IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1-1,Z2) THEN 90
    0x629f6f1a99e0 ---------A   00920  A(K+1)=Z1-1
    0x629f6f1a9ef0 ---------A   00930  B(K+1)=Z2+1
    0x629f6f1aa020 ---------A T 00940  NEXT K
    0x629f6f1aa750 ---------A T 00950  F(A,B)=9-2*I-J
    0x629f6f1aaa50 ---------A   00960  FOR K=1 TO N
    0x629f6f1ab3d0 ---------A   00970  F(A(K+1),B(K+1))=F(A,B)
    0x629f6f1ab500 ---------A   00980  NEXT K
    0x629f6f1ab650 ---------A T 00990  NEXT J
    0x629f6f1ab7a0 ---------A   01000  NEXT I
    0x629f6f1ab860 ---------A   01010  PRINT
    0x629f6f1aba00 ---------A   01020  PRINT "THE FOLLOWING CODE OF THE BAD GUYS' FLEET DISPOSITION"
    0x629f6f1abb70 ---------A   01030  PRINT "HAS BEEN CAPTURED BUT NOT DECODED:"
    0x629f6f1abbf0 ---------A   01040  PRINT
    0x629f6f1abed0 ---------A   01050  FOR I=1 TO 6
    0x629f6f1ac1b0 ---------A   01051  FOR J=1 TO 6
    0x629f6f1ac830 ---------A   01052  H(I,J)=F(J,I)
    0x629f6f1ac960 ---------A   01053  NEXT J
    0x629f6f1acab0 ---------A   01054  NEXT I
    0x629f6f1acda0 ---------A   01060  FOR I=1 TO 6
    0x629f6f1ad080 ---------A   01061  FOR J=1 TO 6
    0x629f6f1adbd0 ---------A   01062  PRINT H(I,J);
    0x629f6f1add10 ---------A   01063  NEXT J
    0x629f6f1adda0 ---------A   01064  PRINT
    0x629f6f1adee0 ---------A   01065  NEXT I
    0x629f6f1adf90 ---------A   01070  PRINT
    0x629f6f1ae120 ---------A   01080  PRINT "DE-CODE IT AND USE IT IF YOU CAN"
    0x629f6f1ae2a0 ---------A   01090  PRINT "BUT KEEP THE DE-CODING METHOD A SECRET."
    0x629f6f1ae320 ---------A   01100  PRINT
    0x629f6f1ae600 ---------A   01110  FOR I=1 TO 6
    0x629f6f1ae8e0 ---------A   01111  FOR J=1 TO 6
    0x629f6f1aecc0 ---------A   01112  H(I,J)=0
    0x629f6f1aedf0 ---------A   01113  NEXT J
    0x629f6f1aef40 ---------A   01114  NEXT I
    0x629f6f1af230 ---------A   01120  FOR I=1 TO 3
    0x629f6f1af5f0 ---------A   01121  L(I)=0
    0x629f6f1af720 ---------A   01122  NEXT I
    0x629f6f1afd80 ---------A   01130  C(1)=2:C(2)=2
    0x629f6f1b0300 ---------A   01140  C(3)=1:C(4)=1
    0x629f6f1b0880 ---------A   01150  C(5)=0:C(6)=0
    0x629f6f1b0d40 ---------A   01160  S=0:H=0
    0x629f6f1b0e90 ---------A   01170  PRINT "START GAME"
    0x629f6f1b10f0 ---------A T 01180  INPUT X,Y
    0x629f6f1b1990 ---------A   01190  IF X<1 OR X>6 OR INT(X)<>ABS(X) THEN 1210
    0x629f6f1b2220 ---------A   01200  IF Y>0 AND Y<7 AND INT(Y)=ABS(Y) THEN 1230
    0x629f6f1b2390 ---------A T 01210  PRINT "INVALID INPUT.  TRY AGAIN."
    0x629f6f1b2410 ---------A   01220  GOTO 1180
    0x629f6f1b2800 ---------A T 01230  R=7-Y
    0x629f6f1b2a40 ---------A   01240  C=X
    0x629f6f1b2e50 ---------A   01250  IF F(R,C)>0 THEN 1290
    0x629f6f1b31a0 ---------A   01260  S=S+1
    0x629f6f1b32f0 ---------A   01270  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b3380 ---------A   01280  GOTO 1180
    0x629f6f1b38a0 ---------A T 01290  IF C(F(R,C))<4 THEN 1340
    0x629f6f1b3a40 ---------A   01300  PRINT "THERE USED TO BE A SHIP AT THAT POINT, BUT YOU SUNK IT."
    0x629f6f1b3ba0 ---------A   01310  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b3ee0 ---------A   01320  S=S+1
    0x629f6f1b3f60 ---------A   01330  GOTO 1180
    0x629f6f1b4370 ---------A T 01340  IF H(R,C)>0 THEN 1420
    0x629f6f1b46b0 ---------A   01350  H=H+1
    0x629f6f1b4c80 ---------A   01360  H(R,C)=F(R,C)
    0x629f6f1b50b0 ---------A   01370  PRINT "A DIRECT HIT ON SHIP NUMBER";F(R,C)
    0x629f6f1b5940 ---------A   01380  C(F(R,C))=C(F(R,C))+1
    0x629f6f1b5e30 ---------A   01390  IF C(F(R,C))>=4 THEN 1470
    0x629f6f1b5f90 ---------A   01400  PRINT "TRY AGAIN."
    0x629f6f1b6040 ---------A   01410  GOTO 1180
    0x629f6f1b6490 ---------A T 01420  PRINT "YOU ALREADY PUT A HOLE IN SHIP NUMBER";F(R,C);
    0x629f6f1b6600 ---------A   01430  PRINT "AT THAT POINT."
    0x629f6f1b6760 ---------A   01440  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b6aa0 ---------A   01450  S=S+1
    0x629f6f1b6b30 ---------A   01460  GOTO 1180
    0x629f6f1b7c10 ---------A T 01470  L((INT(F(R,C)-1)/2)+1)=L((INT(F(R,C)-1)/2)+1)+1
    0x629f6f1b7da0 ---------A   01480  PRINT "AND YOU SUNK IT.  HURRAH FOR THE GOOD GUYS."
    0x629f6f1b7f30 ---------A   01490  PRINT "SO FAR, THE BAD GUYS HAVE LOST"
    0x629f6f1b8540 ---------A   01500  PRINT L(1);"DESTROYER(S),";L(2);"CRUISER(S), AND";
    0x629f6f1b8880 ---------A   01510  PRINT L(3);"AIRCRAFT CARRIER(S)."
    0x629f6f1b8c20 ---------A   01520  PRINT "YOUR CURRENT SPLASH/HIT RATIO IS";S/H
    0x629f6f1b9340 ---------A   01530  IF (L(1)+L(2)+L(3))<6 THEN 1180
    0x629f6f1b93f0 ---------A   01540  PRINT
    0x629f6f1b9590 ---------A   01550  PRINT "YOU HAVE TOTALLY WIPED OUT THE BAD GUYS' FLEET"
    0x629f6f1b9920 ---------A   01560  PRINT "WITH A FINAL SPLASH/HIT RATIO OF";S/H
    0x629f6f1b9cd0 ---------A   01570  IF S/H>0 THEN 1590
    0x629f6f1b9e50 ---------A   01580  PRINT "CONGRATULATIONS -- A DIRECT HIT EVERY TIME."
    0x629f6f1b9ef0 ---------A T 01590  PRINT
    0x629f6f1ba060 ---------A   01600  PRINT "****************************"
    0x629f6f1ba0e0 ---------A   01610  PRINT
    0x629f6f1ba160 ---------A   01620  GOTO 50
    0x629f6f1ba1b0 ---------A   01630  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00050      01620T
     00090      00120T, 00250T, 00260T, 00480T, 00490T, 00500T, 00650T, 00660T, 
                00890T, 00900T, 00910T
     00150      00140T
     00230      00190T, 00200T
     00240      00180T
     00280      00220T
     00340      00140T
     00450      00390T, 00400T, 00410T
     00460      00380T
     00530      00440T
     00550      00140T
     00630      00590T, 00600T
     00640      00580T
     00680      00620T
     00740      00140T
     00860      00800T, 00810T, 00820T
     00870      00790T
     00940      00850T
     00950      00540T
     00990      00330T, 00730T
     01180      01220T, 01280T, 01330T, 01410T, 01460T, 01530T
     01210      01190T
     01230      01200T
     01290      01250T
     01340      01290T
     01420      01340T
     01470      01390T
     01590      01570T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x629f6f17d6d0 (00005)   0x629f6f17d6d0 (00005)   0x629f6f1ba1b0 (01630)   0x629f6f1ba1b0 (01630)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/battle.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x629f6f17d6d0 ---------A   00005  PRINT TAB(33);"BATTLE"
    0x629f6f17d670 ---------A   00007  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x629f6f17eb80 ---------A   00010  REM -- BATTLE WRITTEN BY RAY WESTERGARD  10/70
    0x629f6f17fff0 ---------A   00020  REM COPYRIGHT 1971 BY THE REGENTS OF THE UNIV. OF CALIF.
    0x629f6f17da20 ---------A   00030  REM PRODUCED AT THE LAWRENCE HALL OF SCIENCE, BERKELEY
    0x629f6f17fae0 ---------A   00040  REM DIM F(6,6),H(6,6),A(4)<B(4),C(6),L(3)
    0x629f6f17e4c0 ---------A T 00050  FOR X=1 TO 6
    0x629f6f1801e0 ---------A   00051  FOR Y=1 TO 6
    0x629f6f1859c0 ---------A   00052  F(X,Y)=0
    0x629f6f17d830 ---------A   00053  NEXT Y
    0x629f6f185b90 ---------A   00054  NEXT X
    0x629f6f185ec0 ---------A   00060  FOR I=1 TO 3
    0x629f6f186280 ---------A   00070  N=4-I
    0x629f6f186610 ---------A   00080  FOR J=1 TO 2
    0x629f6f186cb0 ---------A T 00090  A=INT(6*RND(1)+1)
    0x629f6f187340 ---------A   00100  B=INT(6*RND(1)+1)
    0x629f6f1879d0 ---------A   00110  D=INT(4*RND(1)+1)
    0x629f6f187de0 ---------A   00120  IF F(A,B)>0 THEN 90
    0x629f6f1880a0 ---------A   00130  M=0
    0x629f6f1884f0 ---------A   00140  ON D GOTO 150,340,550,740
    0x629f6f1887f0 ---------A T 00150  B(1)=B
    0x629f6f188aa0 ----------   00160  B(2)=7
    0x629f6f188d70 ---------A        a B(3)=7
    0x629f6f189120 ---------A   00170  FOR K=1 TO N
    0x629f6f189380 ---------A   00180  IF M>1 THEN 240
    0x629f6f1896a0 ---------A   00190  IF B(K)=6 THEN 230
    0x629f6f189ca0 ---------A   00200  IF F(A,B(K)+1)>0 THEN 230
    0x629f6f18a2a0 ---------A   00210  B(K+1)=B(K)+1
    0x629f6f18a310 ---------A   00220  GOTO 280
    0x629f6f18a540 ---------A T 00230  M=2
    0x629f6f18b0a0 ---------A T 00240  IF B(1)<B(2) AND B(1)<B(3) THEN Z=B(1)
    0x629f6f18bb50 ---------A   00242  IF B(2)<B(1) AND B(2)<B(3) THEN Z=B(2)
    0x629f6f18c5e0 ---------A   00244  IF B(3)<B(1) AND B(3)<B(2) THEN Z=B(3)
    0x629f6f18c820 ---------A   00250  IF Z=1 THEN 90
    0x629f6f18cf50 ---------A   00260  IF F(A,Z-1)>0 THEN 90
    0x629f6f18d470 ---------A   00270  B(K+1)=Z-1
    0x629f6f18d5a0 ---------A T 00280  NEXT K
    0x629f6f18dcd0 ---------A   00290  F(A,B)=9-2*I-J
    0x629f6f18dfc0 ---------A   00300  FOR K=1 TO N
    0x629f6f18e760 ---------A   00310  F(A,B(K+1))=F(A,B)
    0x629f6f18e890 ---------A   00320  NEXT K
    0x629f6f18e920 ---------A   00330  GOTO 990
    0x629f6f18ec10 ---------A T 00340  A(1)=A
    0x629f6f18eee0 ---------A   00350  B(1)=B
    0x629f6f18f190 ----------   00360  A(2)=0
    0x629f6f18f440 ----------        a A(3)=0
    0x629f6f18f6f0 ----------        b B(2)=0
    0x629f6f18f9c0 ---------A        c B(3)=0
    0x629f6f18fcb0 ---------A   00370  FOR K=1 TO N
    0x629f6f18fef0 ---------A   00380  IF M>1 THEN 460
    0x629f6f190510 ---------A   00390  IF A(K)=1 OR B(K)=1 THEN 450
    0x629f6f190d20 ---------A   00400  IF F(A(K)-1,B(K)-1)>0 THEN 450
    0x629f6f191f40 ---------A   00410  IF F(A(K)-1,B(K))>0 AND F(A(K)-1,B(K))=F(A(K),B(K)-1) THEN 450
    0x629f6f192540 ---------A   00420  A(K+1)=A(K)-1
    0x629f6f192b30 ---------A   00430  B(K+1)=B(K)-1
    0x629f6f192ba0 ---------A   00440  GOTO 530
    0x629f6f192dd0 ---------A T 00450  M=2
    0x629f6f193930 ---------A T 00460  IF A(1)>A(2) AND A(1)>A(3) THEN Z1=A(1)
    0x629f6f1943e0 ---------A   00462  IF A(2)>A(1) AND A(2)>A(3) THEN Z1=A(2)
    0x629f6f194e90 ---------A   00464  IF A(3)>A(1) AND A(3)>A(2) THEN Z1=A(3)
    0x629f6f195a00 ---------A   00470  IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x629f6f1964b0 ---------A   00474  IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x629f6f196f20 ---------A   00476  IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x629f6f1973b0 ---------A   00480  IF Z1=6 OR Z2=6 THEN 90
    0x629f6f1979f0 ---------A   00490  IF F(Z1+1,Z2+1)>0 THEN 90
    0x629f6f1986d0 ---------A   00500  IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1+1,Z2) THEN 90
    0x629f6f198bf0 ---------A   00510  A(K+1)=Z1+1
    0x629f6f199100 ---------A   00520  B(K+1)=Z2+1
    0x629f6f199230 ---------A T 00530  NEXT K
    0x629f6f1996d0 ---------A   00540  GOTO 950
    0x629f6f1999c0 ---------A T 00550  A(1)=A
    0x629f6f199c70 ----------   00560  A(2)=7
    0x629f6f199f40 ---------A        a A(3)=7
    0x629f6f19a230 ---------A   00570  FOR K=1 TO N
    0x629f6f19a490 ---------A   00580  IF M>1 THEN 640
    0x629f6f19a7e0 ---------A   00590  IF A(K)=6 THEN 630
    0x629f6f19ade0 ---------A   00600  IF F(A(K)+1,B)>0 THEN 630
    0x629f6f19b3e0 ---------A   00610  A(K+1)=A(K)+1
    0x629f6f19b450 ---------A   00620  GOTO 680
    0x629f6f19b680 ---------A T 00630  M=2
    0x629f6f19c120 ---------A T 00640  IF A(1)<A(2) AND A(1)<A(3) THEN Z=A(1)
    0x629f6f19cbd0 ---------A   00642  IF A(2)<A(1) AND A(2)<A(3) THEN Z=A(2)
    0x629f6f19d660 ---------A   00644  IF A(3)<A(1) AND A(3)<A(2) THEN Z=A(3)
    0x629f6f19d8d0 ---------A   00650  IF Z=1 THEN 90
    0x629f6f19ddf0 ---------A   00660  IF F(Z-1,B)>0 THEN 90
    0x629f6f19e310 ---------A   00670  A(K+1)=Z-1
    0x629f6f19e440 ---------A T 00680  NEXT K
    0x629f6f19eb70 ---------A   00690  F(A,B)=9-2*I-J
    0x629f6f19ee60 ---------A   00700  FOR K=1 TO N
    0x629f6f19f600 ---------A   00710  F(A(K+1),B)=F(A,B)
    0x629f6f19f730 ---------A   00720  NEXT K
    0x629f6f19f7c0 ---------A   00730  GOTO 990
    0x629f6f19fab0 ---------A T 00740  A(1)=A
    0x629f6f19fda0 ---------A   00750  B(1)=B
    0x629f6f1a0050 ----------   00760  A(2)=7
    0x629f6f1a0320 ---------A        a A(3)=7
    0x629f6f1a05d0 ----------   00770  B(2)=0
    0x629f6f1a08a0 ---------A        a B(3)=0
    0x629f6f1a0b90 ---------A   00780  FOR K=1 TO N
    0x629f6f1a0e00 ---------A   00790  IF M>1 THEN 870
    0x629f6f1a1450 ---------A   00800  IF A(K)=6 OR B(K)=1 THEN 860
    0x629f6f1a1c60 ---------A   00810  IF F(A(K)+1,B(K)-1)>0 THEN 860
    0x629f6f1a2e80 ---------A   00820  IF F(A(K)+1,B(K))>0 AND F(A(K)+1,B(K))=F(A(K),B(K)-1) THEN 860
    0x629f6f1a3480 ---------A   00830  A(K+1)=A(K)+1
    0x629f6f1a3a70 ---------A   00840  B(K+1)=B(K)-1
    0x629f6f1a3ae0 ---------A   00850  GOTO 940
    0x629f6f1a3d10 ---------A T 00860  M=2
    0x629f6f1a47b0 ---------A T 00870  IF A(1)<A(2) AND A(1)<A(3) THEN Z1=A(1)
    0x629f6f1a5260 ---------A   00872  IF A(2)<A(1) AND A(2)<A(3) THEN Z1=A(2)
    0x629f6f1a5d10 ---------A   00874  IF A(3)<A(1) AND A(3)<A(2) THEN Z1=A(3)
    0x629f6f1a67c0 ---------A   00880  IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x629f6f1a7270 ---------A   00882  IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x629f6f1a7d10 ---------A   00884  IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x629f6f1a81a0 ---------A   00890  IF Z1=1 OR Z2=6 THEN 90
    0x629f6f1a87e0 ---------A   00900  IF F(Z1-1,Z2+1)>0 THEN 90
    0x629f6f1a94c0 ---------A   00910  IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1-1,Z2) THEN 90
    0x629f6f1a99e0 ---------A   00920  A(K+1)=Z1-1
    0x629f6f1a9ef0 ---------A   00930  B(K+1)=Z2+1
    0x629f6f1aa020 ---------A T 00940  NEXT K
    0x629f6f1aa750 ---------A T 00950  F(A,B)=9-2*I-J
    0x629f6f1aaa50 ---------A   00960  FOR K=1 TO N
    0x629f6f1ab3d0 ---------A   00970  F(A(K+1),B(K+1))=F(A,B)
    0x629f6f1ab500 ---------A   00980  NEXT K
    0x629f6f1ab650 ---------A T 00990  NEXT J
    0x629f6f1ab7a0 ---------A   01000  NEXT I
    0x629f6f1ab860 ---------A   01010  PRINT
    0x629f6f1aba00 ---------A   01020  PRINT "THE FOLLOWING CODE OF THE BAD GUYS' FLEET DISPOSITION"
    0x629f6f1abb70 ---------A   01030  PRINT "HAS BEEN CAPTURED BUT NOT DECODED:"
    0x629f6f1abbf0 ---------A   01040  PRINT
    0x629f6f1abed0 ---------A   01050  FOR I=1 TO 6
    0x629f6f1ac1b0 ---------A   01051  FOR J=1 TO 6
    0x629f6f1ac830 ---------A   01052  H(I,J)=F(J,I)
    0x629f6f1ac960 ---------A   01053  NEXT J
    0x629f6f1acab0 ---------A   01054  NEXT I
    0x629f6f1acda0 ---------A   01060  FOR I=1 TO 6
    0x629f6f1ad080 ---------A   01061  FOR J=1 TO 6
    0x629f6f1adbd0 ---------A   01062  PRINT H(I,J);
    0x629f6f1add10 ---------A   01063  NEXT J
    0x629f6f1adda0 ---------A   01064  PRINT
    0x629f6f1adee0 ---------A   01065  NEXT I
    0x629f6f1adf90 ---------A   01070  PRINT
    0x629f6f1ae120 ---------A   01080  PRINT "DE-CODE IT AND USE IT IF YOU CAN"
    0x629f6f1ae2a0 ---------A   01090  PRINT "BUT KEEP THE DE-CODING METHOD A SECRET."
    0x629f6f1ae320 ---------A   01100  PRINT
    0x629f6f1ae600 ---------A   01110  FOR I=1 TO 6
    0x629f6f1ae8e0 ---------A   01111  FOR J=1 TO 6
    0x629f6f1aecc0 ---------A   01112  H(I,J)=0
    0x629f6f1aedf0 ---------A   01113  NEXT J
    0x629f6f1aef40 ---------A   01114  NEXT I
    0x629f6f1af230 ---------A   01120  FOR I=1 TO 3
    0x629f6f1af5f0 ---------A   01121  L(I)=0
    0x629f6f1af720 ---------A   01122  NEXT I
    0x629f6f1afab0 ----------   01130  C(1)=2
    0x629f6f1afd80 ---------A        a C(2)=2
    0x629f6f1b0030 ----------   01140  C(3)=1
    0x629f6f1b0300 ---------A        a C(4)=1
    0x629f6f1b05b0 ----------   01150  C(5)=0
    0x629f6f1b0880 ---------A        a C(6)=0
    0x629f6f1b0b30 ----------   01160  S=0
    0x629f6f1b0d40 ---------A        a H=0
    0x629f6f1b0e90 ---------A   01170  PRINT "START GAME"
    0x629f6f1b10f0 ---------A T 01180  INPUT X,Y
    0x629f6f1b1990 ---------A   01190  IF X<1 OR X>6 OR INT(X)<>ABS(X) THEN 1210
    0x629f6f1b2220 ---------A   01200  IF Y>0 AND Y<7 AND INT(Y)=ABS(Y) THEN 1230
    0x629f6f1b2390 ---------A T 01210  PRINT "INVALID INPUT.  TRY AGAIN."
    0x629f6f1b2410 ---------A   01220  GOTO 1180
    0x629f6f1b2800 ---------A T 01230  R=7-Y
    0x629f6f1b2a40 ---------A   01240  C=X
    0x629f6f1b2e50 ---------A   01250  IF F(R,C)>0 THEN 1290
    0x629f6f1b31a0 ---------A   01260  S=S+1
    0x629f6f1b32f0 ---------A   01270  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b3380 ---------A   01280  GOTO 1180
    0x629f6f1b38a0 ---------A T 01290  IF C(F(R,C))<4 THEN 1340
    0x629f6f1b3a40 ---------A   01300  PRINT "THERE USED TO BE A SHIP AT THAT POINT, BUT YOU SUNK IT."
    0x629f6f1b3ba0 ---------A   01310  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b3ee0 ---------A   01320  S=S+1
    0x629f6f1b3f60 ---------A   01330  GOTO 1180
    0x629f6f1b4370 ---------A T 01340  IF H(R,C)>0 THEN 1420
    0x629f6f1b46b0 ---------A   01350  H=H+1
    0x629f6f1b4c80 ---------A   01360  H(R,C)=F(R,C)
    0x629f6f1b50b0 ---------A   01370  PRINT "A DIRECT HIT ON SHIP NUMBER";F(R,C)
    0x629f6f1b5940 ---------A   01380  C(F(R,C))=C(F(R,C))+1
    0x629f6f1b5e30 ---------A   01390  IF C(F(R,C))>=4 THEN 1470
    0x629f6f1b5f90 ---------A   01400  PRINT "TRY AGAIN."
    0x629f6f1b6040 ---------A   01410  GOTO 1180
    0x629f6f1b6490 ---------A T 01420  PRINT "YOU ALREADY PUT A HOLE IN SHIP NUMBER";F(R,C);
    0x629f6f1b6600 ---------A   01430  PRINT "AT THAT POINT."
    0x629f6f1b6760 ---------A   01440  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b6aa0 ---------A   01450  S=S+1
    0x629f6f1b6b30 ---------A   01460  GOTO 1180
    0x629f6f1b7c10 ---------A T 01470  L((INT(F(R,C)-1)/2)+1)=L((INT(F(R,C)-1)/2)+1)+1
    0x629f6f1b7da0 ---------A   01480  PRINT "AND YOU SUNK IT.  HURRAH FOR THE GOOD GUYS."
    0x629f6f1b7f30 ---------A   01490  PRINT "SO FAR, THE BAD GUYS HAVE LOST"
    0x629f6f1b8540 ---------A   01500  PRINT L(1);"DESTROYER(S),";L(2);"CRUISER(S), AND";
    0x629f6f1b8880 ---------A   01510  PRINT L(3);"AIRCRAFT CARRIER(S)."
    0x629f6f1b8c20 ---------A   01520  PRINT "YOUR CURRENT SPLASH/HIT RATIO IS";S/H
    0x629f6f1b9340 ---------A   01530  IF (L(1)+L(2)+L(3))<6 THEN 1180
    0x629f6f1b93f0 ---------A   01540  PRINT
    0x629f6f1b9590 ---------A   01550  PRINT "YOU HAVE TOTALLY WIPED OUT THE BAD GUYS' FLEET"
    0x629f6f1b9920 ---------A   01560  PRINT "WITH A FINAL SPLASH/HIT RATIO OF";S/H
    0x629f6f1b9cd0 ---------A   01570  IF S/H>0 THEN 1590
    0x629f6f1b9e50 ---------A   01580  PRINT "CONGRATULATIONS -- A DIRECT HIT EVERY TIME."
    0x629f6f1b9ef0 ---------A T 01590  PRINT
    0x629f6f1ba060 ---------A   01600  PRINT "****************************"
    0x629f6f1ba0e0 ---------A   01610  PRINT
    0x629f6f1ba160 ---------A   01620  GOTO 50
    0x629f6f1ba1b0 ---------A   01630  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/battle.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x629f6f17d6d0 ---------A   01000  PRINT TAB(33);"BATTLE"
    0x629f6f17d670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x629f6f17eb80 ---------A   01020  REM -- BATTLE WRITTEN BY RAY WESTERGARD  1020/70
    0x629f6f17fff0 ---------A   01030  REM COPYRIGHT 1971 BY THE REGENTS OF THE UNIV. OF CALIF.
    0x629f6f17da20 ---------A   01040  REM PRODUCED AT THE LAWRENCE HALL OF SCIENCE, BERKELEY
    0x629f6f17fae0 ---------A   01050  REM DIM F(6,6),H(6,6),A(4)<B(4),C(6),L(3)
    0x629f6f17e4c0 ---------A   01060  FOR X=1 TO 6
    0x629f6f1801e0 ---------A   01070  FOR Y=1 TO 6
    0x629f6f1859c0 ---------A   01080  F(X,Y)=0
    0x629f6f17d830 ---------A   01090  NEXT Y
    0x629f6f185b90 ---------A   01100  NEXT X
    0x629f6f185ec0 ---------A   01110  FOR I=1 TO 3
    0x629f6f186280 ---------A   01120  N=4-I
    0x629f6f186610 ---------A   01130  FOR J=1 TO 2
    0x629f6f186cb0 ---------A   01140  A=INT(6*RND(1)+1)
    0x629f6f187340 ---------A   01150  B=INT(6*RND(1)+1)
    0x629f6f1879d0 ---------A   01160  D=INT(4*RND(1)+1)
    0x629f6f187de0 ---------A   01170  IF F(A,B)>0 THEN 1140
    0x629f6f1880a0 ---------A T 01180  M=0
    0x629f6f1884f0 ---------A   01190  ON D GOTO 1200,1420,1700,1920
    0x629f6f1887f0 ---------A   01200  B(1)=B
    0x629f6f188aa0 ---------- T 01210  B(2)=7
    0x629f6f188d70 ---------A   01220  B(3)=7
    0x629f6f189120 ---------A T 01230  FOR K=1 TO N
    0x629f6f189380 ---------A   01240  IF M>1 THEN 1300
    0x629f6f1896a0 ---------A   01250  IF B(K)=6 THEN 1290
    0x629f6f189ca0 ---------A   01260  IF F(A,B(K)+1)>0 THEN 1290
    0x629f6f18a2a0 ---------A   01270  B(K+1)=B(K)+1
    0x629f6f18a310 ---------A   01280  GOTO 1360
    0x629f6f18a540 ---------A T 01290  M=2
    0x629f6f18b0a0 ---------A   01300  IF B(1)<B(2) AND B(1)<B(3) THEN Z=B(1)
    0x629f6f18bb50 ---------A   01310  IF B(2)<B(1) AND B(2)<B(3) THEN Z=B(2)
    0x629f6f18c5e0 ---------A   01320  IF B(3)<B(1) AND B(3)<B(2) THEN Z=B(3)
    0x629f6f18c820 ---------A   01330  IF Z=1 THEN 1140
    0x629f6f18cf50 ---------A T 01340  IF F(A,Z-1)>0 THEN 1140
    0x629f6f18d470 ---------A   01350  B(K+1)=Z-1
    0x629f6f18d5a0 ---------A   01360  NEXT K
    0x629f6f18dcd0 ---------A   01370  F(A,B)=9-2*I-J
    0x629f6f18dfc0 ---------A   01380  FOR K=1 TO N
    0x629f6f18e760 ---------A   01390  F(A,B(K+1))=F(A,B)
    0x629f6f18e890 ---------A   01400  NEXT K
    0x629f6f18e920 ---------A   01410  GOTO 2230
    0x629f6f18ec10 ---------A T 01420  A(1)=A
    0x629f6f18eee0 ---------A   01430  B(1)=B
    0x629f6f18f190 ----------   01440  A(2)=0
    0x629f6f18f440 ----------   01450  A(3)=0
    0x629f6f18f6f0 ----------   01460  B(2)=0
    0x629f6f18f9c0 ---------A T 01470  B(3)=0
    0x629f6f18fcb0 ---------A   01480  FOR K=1 TO N
    0x629f6f18fef0 ---------A   01490  IF M>1 THEN 1570
    0x629f6f190510 ---------A   01500  IF A(K)=1 OR B(K)=1 THEN 1560
    0x629f6f190d20 ---------A   01510  IF F(A(K)-1,B(K)-1)>0 THEN 1560
    0x629f6f191f40 ---------A   01520  IF F(A(K)-1,B(K))>0 AND F(A(K)-1,B(K))=F(A(K),B(K)-1) THEN 1560
    0x629f6f192540 ---------A   01530  A(K+1)=A(K)-1
    0x629f6f192b30 ---------A   01540  B(K+1)=B(K)-1
    0x629f6f192ba0 ---------A   01550  GOTO 1680
    0x629f6f192dd0 ---------A   01560  M=2
    0x629f6f193930 ---------A   01570  IF A(1)>A(2) AND A(1)>A(3) THEN Z1=A(1)
    0x629f6f1943e0 ---------A   01580  IF A(2)>A(1) AND A(2)>A(3) THEN Z1=A(2)
    0x629f6f194e90 ---------A T 01590  IF A(3)>A(1) AND A(3)>A(2) THEN Z1=A(3)
    0x629f6f195a00 ---------A   01600  IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x629f6f1964b0 ---------A   01610  IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x629f6f196f20 ---------A   01620  IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x629f6f1973b0 ---------A   01630  IF Z1=6 OR Z2=6 THEN 1140
    0x629f6f1979f0 ---------A   01640  IF F(Z1+1,Z2+1)>0 THEN 1140
    0x629f6f1986d0 ---------A   01650  IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1+1,Z2) THEN 1140
    0x629f6f198bf0 ---------A   01660  A(K+1)=Z1+1
    0x629f6f199100 ---------A   01670  B(K+1)=Z2+1
    0x629f6f199230 ---------A   01680  NEXT K
    0x629f6f1996d0 ---------A   01690  GOTO 2190
    0x629f6f1999c0 ---------A   01700  A(1)=A
    0x629f6f199c70 ----------   01710  A(2)=7
    0x629f6f199f40 ---------A   01720  A(3)=7
    0x629f6f19a230 ---------A   01730  FOR K=1 TO N
    0x629f6f19a490 ---------A   01740  IF M>1 THEN 1800
    0x629f6f19a7e0 ---------A   01750  IF A(K)=6 THEN 1790
    0x629f6f19ade0 ---------A   01760  IF F(A(K)+1,B)>0 THEN 1790
    0x629f6f19b3e0 ---------A   01770  A(K+1)=A(K)+1
    0x629f6f19b450 ---------A   01780  GOTO 1860
    0x629f6f19b680 ---------A   01790  M=2
    0x629f6f19c120 ---------A   01800  IF A(1)<A(2) AND A(1)<A(3) THEN Z=A(1)
    0x629f6f19cbd0 ---------A   01810  IF A(2)<A(1) AND A(2)<A(3) THEN Z=A(2)
    0x629f6f19d660 ---------A   01820  IF A(3)<A(1) AND A(3)<A(2) THEN Z=A(3)
    0x629f6f19d8d0 ---------A   01830  IF Z=1 THEN 1140
    0x629f6f19ddf0 ---------A   01840  IF F(Z-1,B)>0 THEN 1140
    0x629f6f19e310 ---------A   01850  A(K+1)=Z-1
    0x629f6f19e440 ---------A   01860  NEXT K
    0x629f6f19eb70 ---------A   01870  F(A,B)=9-2*I-J
    0x629f6f19ee60 ---------A   01880  FOR K=1 TO N
    0x629f6f19f600 ---------A   01890  F(A(K+1),B)=F(A,B)
    0x629f6f19f730 ---------A   01900  NEXT K
    0x629f6f19f7c0 ---------A   01910  GOTO 2230
    0x629f6f19fab0 ---------A   01920  A(1)=A
    0x629f6f19fda0 ---------A   01930  B(1)=B
    0x629f6f1a0050 ----------   01940  A(2)=7
    0x629f6f1a0320 ---------A   01950  A(3)=7
    0x629f6f1a05d0 ----------   01960  B(2)=0
    0x629f6f1a08a0 ---------A   01970  B(3)=0
    0x629f6f1a0b90 ---------A   01980  FOR K=1 TO N
    0x629f6f1a0e00 ---------A   01990  IF M>1 THEN 2070
    0x629f6f1a1450 ---------A   02000  IF A(K)=6 OR B(K)=1 THEN 2060
    0x629f6f1a1c60 ---------A   02010  IF F(A(K)+1,B(K)-1)>0 THEN 2060
    0x629f6f1a2e80 ---------A   02020  IF F(A(K)+1,B(K))>0 AND F(A(K)+1,B(K))=F(A(K),B(K)-1) THEN 2060
    0x629f6f1a3480 ---------A   02030  A(K+1)=A(K)+1
    0x629f6f1a3a70 ---------A   02040  B(K+1)=B(K)-1
    0x629f6f1a3ae0 ---------A   02050  GOTO 2180
    0x629f6f1a3d10 ---------A   02060  M=2
    0x629f6f1a47b0 ---------A   02070  IF A(1)<A(2) AND A(1)<A(3) THEN Z1=A(1)
    0x629f6f1a5260 ---------A   02080  IF A(2)<A(1) AND A(2)<A(3) THEN Z1=A(2)
    0x629f6f1a5d10 ---------A   02090  IF A(3)<A(1) AND A(3)<A(2) THEN Z1=A(3)
    0x629f6f1a67c0 ---------A   02100  IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x629f6f1a7270 ---------A   02110  IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x629f6f1a7d10 ---------A   02120  IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x629f6f1a81a0 ---------A   02130  IF Z1=1 OR Z2=6 THEN 1140
    0x629f6f1a87e0 ---------A   02140  IF F(Z1-1,Z2+1)>0 THEN 1140
    0x629f6f1a94c0 ---------A   02150  IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1-1,Z2) THEN 1140
    0x629f6f1a99e0 ---------A   02160  A(K+1)=Z1-1
    0x629f6f1a9ef0 ---------A   02170  B(K+1)=Z2+1
    0x629f6f1aa020 ---------A   02180  NEXT K
    0x629f6f1aa750 ---------A   02190  F(A,B)=9-2*I-J
    0x629f6f1aaa50 ---------A   02200  FOR K=1 TO N
    0x629f6f1ab3d0 ---------A   02210  F(A(K+1),B(K+1))=F(A,B)
    0x629f6f1ab500 ---------A   02220  NEXT K
    0x629f6f1ab650 ---------A   02230  NEXT J
    0x629f6f1ab7a0 ---------A   02240  NEXT I
    0x629f6f1ab860 ---------A   02250  PRINT
    0x629f6f1aba00 ---------A   02260  PRINT "THE FOLLOWING CODE OF THE BAD GUYS' FLEET DISPOSITION"
    0x629f6f1abb70 ---------A   02270  PRINT "HAS BEEN CAPTURED BUT NOT DECODED:"
    0x629f6f1abbf0 ---------A   02280  PRINT
    0x629f6f1abed0 ---------A   02290  FOR I=1 TO 6
    0x629f6f1ac1b0 ---------A   02300  FOR J=1 TO 6
    0x629f6f1ac830 ---------A   02310  H(I,J)=F(J,I)
    0x629f6f1ac960 ---------A   02320  NEXT J
    0x629f6f1acab0 ---------A   02330  NEXT I
    0x629f6f1acda0 ---------A   02340  FOR I=1 TO 6
    0x629f6f1ad080 ---------A   02350  FOR J=1 TO 6
    0x629f6f1adbd0 ---------A   02360  PRINT H(I,J);
    0x629f6f1add10 ---------A   02370  NEXT J
    0x629f6f1adda0 ---------A   02380  PRINT
    0x629f6f1adee0 ---------A   02390  NEXT I
    0x629f6f1adf90 ---------A   02400  PRINT
    0x629f6f1ae120 ---------A   02410  PRINT "DE-CODE IT AND USE IT IF YOU CAN"
    0x629f6f1ae2a0 ---------A   02420  PRINT "BUT KEEP THE DE-CODING METHOD A SECRET."
    0x629f6f1ae320 ---------A   02430  PRINT
    0x629f6f1ae600 ---------A   02440  FOR I=1 TO 6
    0x629f6f1ae8e0 ---------A   02450  FOR J=1 TO 6
    0x629f6f1aecc0 ---------A   02460  H(I,J)=0
    0x629f6f1aedf0 ---------A   02470  NEXT J
    0x629f6f1aef40 ---------A   02480  NEXT I
    0x629f6f1af230 ---------A   02490  FOR I=1 TO 3
    0x629f6f1af5f0 ---------A   02500  L(I)=0
    0x629f6f1af720 ---------A   02510  NEXT I
    0x629f6f1afab0 ----------   02520  C(1)=2
    0x629f6f1afd80 ---------A   02530  C(2)=2
    0x629f6f1b0030 ----------   02540  C(3)=1
    0x629f6f1b0300 ---------A   02550  C(4)=1
    0x629f6f1b05b0 ----------   02560  C(5)=0
    0x629f6f1b0880 ---------A   02570  C(6)=0
    0x629f6f1b0b30 ----------   02580  S=0
    0x629f6f1b0d40 ---------A   02590  H=0
    0x629f6f1b0e90 ---------A   02600  PRINT "START GAME"
    0x629f6f1b10f0 ---------A   02610  INPUT X,Y
    0x629f6f1b1990 ---------A   02620  IF X<1 OR X>6 OR INT(X)<>ABS(X) THEN 2640
    0x629f6f1b2220 ---------A   02630  IF Y>0 AND Y<7 AND INT(Y)=ABS(Y) THEN 2660
    0x629f6f1b2390 ---------A   02640  PRINT "INVALID INPUT.  TRY AGAIN."
    0x629f6f1b2410 ---------A   02650  GOTO 2610
    0x629f6f1b2800 ---------A   02660  R=7-Y
    0x629f6f1b2a40 ---------A   02670  C=X
    0x629f6f1b2e50 ---------A   02680  IF F(R,C)>0 THEN 2720
    0x629f6f1b31a0 ---------A   02690  S=S+1
    0x629f6f1b32f0 ---------A   02700  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b3380 ---------A   02710  GOTO 2610
    0x629f6f1b38a0 ---------A   02720  IF C(F(R,C))<4 THEN 2770
    0x629f6f1b3a40 ---------A   02730  PRINT "THERE USED TO BE A SHIP AT THAT POINT, BUT YOU SUNK IT."
    0x629f6f1b3ba0 ---------A   02740  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b3ee0 ---------A   02750  S=S+1
    0x629f6f1b3f60 ---------A   02760  GOTO 2610
    0x629f6f1b4370 ---------A   02770  IF H(R,C)>0 THEN 2850
    0x629f6f1b46b0 ---------A   02780  H=H+1
    0x629f6f1b4c80 ---------A   02790  H(R,C)=F(R,C)
    0x629f6f1b50b0 ---------A   02800  PRINT "A DIRECT HIT ON SHIP NUMBER";F(R,C)
    0x629f6f1b5940 ---------A   02810  C(F(R,C))=C(F(R,C))+1
    0x629f6f1b5e30 ---------A   02820  IF C(F(R,C))>=4 THEN 2900
    0x629f6f1b5f90 ---------A   02830  PRINT "TRY AGAIN."
    0x629f6f1b6040 ---------A   02840  GOTO 2610
    0x629f6f1b6490 ---------A   02850  PRINT "YOU ALREADY PUT A HOLE IN SHIP NUMBER";F(R,C);
    0x629f6f1b6600 ---------A   02860  PRINT "AT THAT POINT."
    0x629f6f1b6760 ---------A   02870  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b6aa0 ---------A   02880  S=S+1
    0x629f6f1b6b30 ---------A   02890  GOTO 2610
    0x629f6f1b7c10 ---------A   02900  L((INT(F(R,C)-1)/2)+1)=L((INT(F(R,C)-1)/2)+1)+1
    0x629f6f1b7da0 ---------A   02910  PRINT "AND YOU SUNK IT.  HURRAH FOR THE GOOD GUYS."
    0x629f6f1b7f30 ---------A   02920  PRINT "SO FAR, THE BAD GUYS HAVE LOST"
    0x629f6f1b8540 ---------A   02930  PRINT L(1);"DESTROYER(S),";L(2);"CRUISER(S), AND";
    0x629f6f1b8880 ---------A   02940  PRINT L(3);"AIRCRAFT CARRIER(S)."
    0x629f6f1b8c20 ---------A   02950  PRINT "YOUR CURRENT SPLASH/HIT RATIO IS";S/H
    0x629f6f1b9340 ---------A   02960  IF (L(1)+L(2)+L(3))<6 THEN 2610
    0x629f6f1b93f0 ---------A   02970  PRINT
    0x629f6f1b9590 ---------A   02980  PRINT "YOU HAVE TOTALLY WIPED OUT THE BAD GUYS' FLEET"
    0x629f6f1b9920 ---------A   02990  PRINT "WITH A FINAL SPLASH/HIT RATIO OF";S/H
    0x629f6f1b9cd0 ---------A   03000  IF S/H>0 THEN 3020
    0x629f6f1b9e50 ---------A   03010  PRINT "CONGRATULATIONS -- A DIRECT HIT EVERY TIME."
    0x629f6f1b9ef0 ---------A   03020  PRINT
    0x629f6f1ba060 ---------A   03030  PRINT "****************************"
    0x629f6f1ba0e0 ---------A   03040  PRINT
    0x629f6f1ba160 ---------A   03050  GOTO 1060
    0x629f6f1ba1b0 ---------A   03060  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03070 - 10000    6940 

 */



/*
 *  Symbol Table Listing for 'basic/battle.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    C               Array    Integer         {0,9} 
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F               Array    Integer         {0,9} 
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H               Array    Integer         {0,9} 
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K                        Integer     
    L               Array    Integer         {0,9} 
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
    X                        Integer     
    Y                        Integer     
    Z                        Integer     
    Z1                       Integer     
    Z2                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/battle.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x629f6f17d6d0 ---------A   01000  PRINT TAB(33);"BATTLE"
    0x629f6f17d670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x629f6f17eb80 ---------A   01020  REM -- BATTLE WRITTEN BY RAY WESTERGARD  1020/70
    0x629f6f17fff0 ---------A   01030  REM COPYRIGHT 1971 BY THE REGENTS OF THE UNIV. OF CALIF.
    0x629f6f17da20 ---------A   01040  REM PRODUCED AT THE LAWRENCE HALL OF SCIENCE, BERKELEY
    0x629f6f17fae0 ---------A   01050  REM DIM F(6,6),H(6,6),A(4)<B(4),C(6),L(3)
    0x629f6f17e4c0 ---------A T 01060  FOR X=1 TO 6
    0x629f6f1801e0 ---------A   01070  FOR Y=1 TO 6
    0x629f6f1859c0 ---------A   01080  F(X,Y)=0
    0x629f6f17d830 ---------A   01090  NEXT Y
    0x629f6f185b90 ---------A   01100  NEXT X
    0x629f6f185ec0 ---------A   01110  FOR I=1 TO 3
    0x629f6f186280 ---------A   01120  N=4-I
    0x629f6f186610 ---------A   01130  FOR J=1 TO 2
    0x629f6f186cb0 ---------A T 01140  A=INT(6*RND(1)+1)
    0x629f6f187340 ---------A   01150  B=INT(6*RND(1)+1)
    0x629f6f1879d0 ---------A   01160  D=INT(4*RND(1)+1)
    0x629f6f187de0 ---------A   01170  IF F(A,B)>0 THEN 1140
    0x629f6f1880a0 ---------A   01180  M=0
    0x629f6f1884f0 ---------A   01190  ON D GOTO 1200,1420,1700,1920
    0x629f6f1887f0 ---------A T 01200  B(1)=B
    0x629f6f188aa0 ---------A   01210  B(2)=7
    0x629f6f188d70 ---------A   01220  B(3)=7
    0x629f6f189120 ---------A   01230  FOR K=1 TO N
    0x629f6f189380 ---------A   01240  IF M>1 THEN 1300
    0x629f6f1896a0 ---------A   01250  IF B(K)=6 THEN 1290
    0x629f6f189ca0 ---------A   01260  IF F(A,B(K)+1)>0 THEN 1290
    0x629f6f18a2a0 ---------A   01270  B(K+1)=B(K)+1
    0x629f6f18a310 ---------A   01280  GOTO 1360
    0x629f6f18a540 ---------A T 01290  M=2
    0x629f6f18b0a0 ---------A T 01300  IF B(1)<B(2) AND B(1)<B(3) THEN Z=B(1)
    0x629f6f18bb50 ---------A   01310  IF B(2)<B(1) AND B(2)<B(3) THEN Z=B(2)
    0x629f6f18c5e0 ---------A   01320  IF B(3)<B(1) AND B(3)<B(2) THEN Z=B(3)
    0x629f6f18c820 ---------A   01330  IF Z=1 THEN 1140
    0x629f6f18cf50 ---------A   01340  IF F(A,Z-1)>0 THEN 1140
    0x629f6f18d470 ---------A   01350  B(K+1)=Z-1
    0x629f6f18d5a0 ---------A T 01360  NEXT K
    0x629f6f18dcd0 ---------A   01370  F(A,B)=9-2*I-J
    0x629f6f18dfc0 ---------A   01380  FOR K=1 TO N
    0x629f6f18e760 ---------A   01390  F(A,B(K+1))=F(A,B)
    0x629f6f18e890 ---------A   01400  NEXT K
    0x629f6f18e920 ---------A   01410  GOTO 2230
    0x629f6f18ec10 ---------A T 01420  A(1)=A
    0x629f6f18eee0 ---------A   01430  B(1)=B
    0x629f6f18f190 ---------A   01440  A(2)=0
    0x629f6f18f440 ---------A   01450  A(3)=0
    0x629f6f18f6f0 ---------A   01460  B(2)=0
    0x629f6f18f9c0 ---------A   01470  B(3)=0
    0x629f6f18fcb0 ---------A   01480  FOR K=1 TO N
    0x629f6f18fef0 ---------A   01490  IF M>1 THEN 1570
    0x629f6f190510 ---------A   01500  IF A(K)=1 OR B(K)=1 THEN 1560
    0x629f6f190d20 ---------A   01510  IF F(A(K)-1,B(K)-1)>0 THEN 1560
    0x629f6f191f40 ---------A   01520  IF F(A(K)-1,B(K))>0 AND F(A(K)-1,B(K))=F(A(K),B(K)-1) THEN 1560
    0x629f6f192540 ---------A   01530  A(K+1)=A(K)-1
    0x629f6f192b30 ---------A   01540  B(K+1)=B(K)-1
    0x629f6f192ba0 ---------A   01550  GOTO 1680
    0x629f6f192dd0 ---------A T 01560  M=2
    0x629f6f193930 ---------A T 01570  IF A(1)>A(2) AND A(1)>A(3) THEN Z1=A(1)
    0x629f6f1943e0 ---------A   01580  IF A(2)>A(1) AND A(2)>A(3) THEN Z1=A(2)
    0x629f6f194e90 ---------A   01590  IF A(3)>A(1) AND A(3)>A(2) THEN Z1=A(3)
    0x629f6f195a00 ---------A   01600  IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x629f6f1964b0 ---------A   01610  IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x629f6f196f20 ---------A   01620  IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x629f6f1973b0 ---------A   01630  IF Z1=6 OR Z2=6 THEN 1140
    0x629f6f1979f0 ---------A   01640  IF F(Z1+1,Z2+1)>0 THEN 1140
    0x629f6f1986d0 ---------A   01650  IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1+1,Z2) THEN 1140
    0x629f6f198bf0 ---------A   01660  A(K+1)=Z1+1
    0x629f6f199100 ---------A   01670  B(K+1)=Z2+1
    0x629f6f199230 ---------A T 01680  NEXT K
    0x629f6f1996d0 ---------A   01690  GOTO 2190
    0x629f6f1999c0 ---------A T 01700  A(1)=A
    0x629f6f199c70 ---------A   01710  A(2)=7
    0x629f6f199f40 ---------A   01720  A(3)=7
    0x629f6f19a230 ---------A   01730  FOR K=1 TO N
    0x629f6f19a490 ---------A   01740  IF M>1 THEN 1800
    0x629f6f19a7e0 ---------A   01750  IF A(K)=6 THEN 1790
    0x629f6f19ade0 ---------A   01760  IF F(A(K)+1,B)>0 THEN 1790
    0x629f6f19b3e0 ---------A   01770  A(K+1)=A(K)+1
    0x629f6f19b450 ---------A   01780  GOTO 1860
    0x629f6f19b680 ---------A T 01790  M=2
    0x629f6f19c120 ---------A T 01800  IF A(1)<A(2) AND A(1)<A(3) THEN Z=A(1)
    0x629f6f19cbd0 ---------A   01810  IF A(2)<A(1) AND A(2)<A(3) THEN Z=A(2)
    0x629f6f19d660 ---------A   01820  IF A(3)<A(1) AND A(3)<A(2) THEN Z=A(3)
    0x629f6f19d8d0 ---------A   01830  IF Z=1 THEN 1140
    0x629f6f19ddf0 ---------A   01840  IF F(Z-1,B)>0 THEN 1140
    0x629f6f19e310 ---------A   01850  A(K+1)=Z-1
    0x629f6f19e440 ---------A T 01860  NEXT K
    0x629f6f19eb70 ---------A   01870  F(A,B)=9-2*I-J
    0x629f6f19ee60 ---------A   01880  FOR K=1 TO N
    0x629f6f19f600 ---------A   01890  F(A(K+1),B)=F(A,B)
    0x629f6f19f730 ---------A   01900  NEXT K
    0x629f6f19f7c0 ---------A   01910  GOTO 2230
    0x629f6f19fab0 ---------A T 01920  A(1)=A
    0x629f6f19fda0 ---------A   01930  B(1)=B
    0x629f6f1a0050 ---------A   01940  A(2)=7
    0x629f6f1a0320 ---------A   01950  A(3)=7
    0x629f6f1a05d0 ---------A   01960  B(2)=0
    0x629f6f1a08a0 ---------A   01970  B(3)=0
    0x629f6f1a0b90 ---------A   01980  FOR K=1 TO N
    0x629f6f1a0e00 ---------A   01990  IF M>1 THEN 2070
    0x629f6f1a1450 ---------A   02000  IF A(K)=6 OR B(K)=1 THEN 2060
    0x629f6f1a1c60 ---------A   02010  IF F(A(K)+1,B(K)-1)>0 THEN 2060
    0x629f6f1a2e80 ---------A   02020  IF F(A(K)+1,B(K))>0 AND F(A(K)+1,B(K))=F(A(K),B(K)-1) THEN 2060
    0x629f6f1a3480 ---------A   02030  A(K+1)=A(K)+1
    0x629f6f1a3a70 ---------A   02040  B(K+1)=B(K)-1
    0x629f6f1a3ae0 ---------A   02050  GOTO 2180
    0x629f6f1a3d10 ---------A T 02060  M=2
    0x629f6f1a47b0 ---------A T 02070  IF A(1)<A(2) AND A(1)<A(3) THEN Z1=A(1)
    0x629f6f1a5260 ---------A   02080  IF A(2)<A(1) AND A(2)<A(3) THEN Z1=A(2)
    0x629f6f1a5d10 ---------A   02090  IF A(3)<A(1) AND A(3)<A(2) THEN Z1=A(3)
    0x629f6f1a67c0 ---------A   02100  IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x629f6f1a7270 ---------A   02110  IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x629f6f1a7d10 ---------A   02120  IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x629f6f1a81a0 ---------A   02130  IF Z1=1 OR Z2=6 THEN 1140
    0x629f6f1a87e0 ---------A   02140  IF F(Z1-1,Z2+1)>0 THEN 1140
    0x629f6f1a94c0 ---------A   02150  IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1-1,Z2) THEN 1140
    0x629f6f1a99e0 ---------A   02160  A(K+1)=Z1-1
    0x629f6f1a9ef0 ---------A   02170  B(K+1)=Z2+1
    0x629f6f1aa020 ---------A T 02180  NEXT K
    0x629f6f1aa750 ---------A T 02190  F(A,B)=9-2*I-J
    0x629f6f1aaa50 ---------A   02200  FOR K=1 TO N
    0x629f6f1ab3d0 ---------A   02210  F(A(K+1),B(K+1))=F(A,B)
    0x629f6f1ab500 ---------A   02220  NEXT K
    0x629f6f1ab650 ---------A T 02230  NEXT J
    0x629f6f1ab7a0 ---------A   02240  NEXT I
    0x629f6f1ab860 ---------A   02250  PRINT
    0x629f6f1aba00 ---------A   02260  PRINT "THE FOLLOWING CODE OF THE BAD GUYS' FLEET DISPOSITION"
    0x629f6f1abb70 ---------A   02270  PRINT "HAS BEEN CAPTURED BUT NOT DECODED:"
    0x629f6f1abbf0 ---------A   02280  PRINT
    0x629f6f1abed0 ---------A   02290  FOR I=1 TO 6
    0x629f6f1ac1b0 ---------A   02300  FOR J=1 TO 6
    0x629f6f1ac830 ---------A   02310  H(I,J)=F(J,I)
    0x629f6f1ac960 ---------A   02320  NEXT J
    0x629f6f1acab0 ---------A   02330  NEXT I
    0x629f6f1acda0 ---------A   02340  FOR I=1 TO 6
    0x629f6f1ad080 ---------A   02350  FOR J=1 TO 6
    0x629f6f1adbd0 ---------A   02360  PRINT H(I,J);
    0x629f6f1add10 ---------A   02370  NEXT J
    0x629f6f1adda0 ---------A   02380  PRINT
    0x629f6f1adee0 ---------A   02390  NEXT I
    0x629f6f1adf90 ---------A   02400  PRINT
    0x629f6f1ae120 ---------A   02410  PRINT "DE-CODE IT AND USE IT IF YOU CAN"
    0x629f6f1ae2a0 ---------A   02420  PRINT "BUT KEEP THE DE-CODING METHOD A SECRET."
    0x629f6f1ae320 ---------A   02430  PRINT
    0x629f6f1ae600 ---------A   02440  FOR I=1 TO 6
    0x629f6f1ae8e0 ---------A   02450  FOR J=1 TO 6
    0x629f6f1aecc0 ---------A   02460  H(I,J)=0
    0x629f6f1aedf0 ---------A   02470  NEXT J
    0x629f6f1aef40 ---------A   02480  NEXT I
    0x629f6f1af230 ---------A   02490  FOR I=1 TO 3
    0x629f6f1af5f0 ---------A   02500  L(I)=0
    0x629f6f1af720 ---------A   02510  NEXT I
    0x629f6f1afab0 ---------A   02520  C(1)=2
    0x629f6f1afd80 ---------A   02530  C(2)=2
    0x629f6f1b0030 ---------A   02540  C(3)=1
    0x629f6f1b0300 ---------A   02550  C(4)=1
    0x629f6f1b05b0 ---------A   02560  C(5)=0
    0x629f6f1b0880 ---------A   02570  C(6)=0
    0x629f6f1b0b30 ---------A   02580  S=0
    0x629f6f1b0d40 ---------A   02590  H=0
    0x629f6f1b0e90 ---------A   02600  PRINT "START GAME"
    0x629f6f1b10f0 ---------A T 02610  INPUT X,Y
    0x629f6f1b1990 ---------A   02620  IF X<1 OR X>6 OR INT(X)<>ABS(X) THEN 2640
    0x629f6f1b2220 ---------A   02630  IF Y>0 AND Y<7 AND INT(Y)=ABS(Y) THEN 2660
    0x629f6f1b2390 ---------A T 02640  PRINT "INVALID INPUT.  TRY AGAIN."
    0x629f6f1b2410 ---------A   02650  GOTO 2610
    0x629f6f1b2800 ---------A T 02660  R=7-Y
    0x629f6f1b2a40 ---------A   02670  C=X
    0x629f6f1b2e50 ---------A   02680  IF F(R,C)>0 THEN 2720
    0x629f6f1b31a0 ---------A   02690  S=S+1
    0x629f6f1b32f0 ---------A   02700  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b3380 ---------A   02710  GOTO 2610
    0x629f6f1b38a0 ---------A T 02720  IF C(F(R,C))<4 THEN 2770
    0x629f6f1b3a40 ---------A   02730  PRINT "THERE USED TO BE A SHIP AT THAT POINT, BUT YOU SUNK IT."
    0x629f6f1b3ba0 ---------A   02740  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b3ee0 ---------A   02750  S=S+1
    0x629f6f1b3f60 ---------A   02760  GOTO 2610
    0x629f6f1b4370 ---------A T 02770  IF H(R,C)>0 THEN 2850
    0x629f6f1b46b0 ---------A   02780  H=H+1
    0x629f6f1b4c80 ---------A   02790  H(R,C)=F(R,C)
    0x629f6f1b50b0 ---------A   02800  PRINT "A DIRECT HIT ON SHIP NUMBER";F(R,C)
    0x629f6f1b5940 ---------A   02810  C(F(R,C))=C(F(R,C))+1
    0x629f6f1b5e30 ---------A   02820  IF C(F(R,C))>=4 THEN 2900
    0x629f6f1b5f90 ---------A   02830  PRINT "TRY AGAIN."
    0x629f6f1b6040 ---------A   02840  GOTO 2610
    0x629f6f1b6490 ---------A T 02850  PRINT "YOU ALREADY PUT A HOLE IN SHIP NUMBER";F(R,C);
    0x629f6f1b6600 ---------A   02860  PRINT "AT THAT POINT."
    0x629f6f1b6760 ---------A   02870  PRINT "SPLASH!  TRY AGAIN."
    0x629f6f1b6aa0 ---------A   02880  S=S+1
    0x629f6f1b6b30 ---------A   02890  GOTO 2610
    0x629f6f1b7c10 ---------A T 02900  L((INT(F(R,C)-1)/2)+1)=L((INT(F(R,C)-1)/2)+1)+1
    0x629f6f1b7da0 ---------A   02910  PRINT "AND YOU SUNK IT.  HURRAH FOR THE GOOD GUYS."
    0x629f6f1b7f30 ---------A   02920  PRINT "SO FAR, THE BAD GUYS HAVE LOST"
    0x629f6f1b8540 ---------A   02930  PRINT L(1);"DESTROYER(S),";L(2);"CRUISER(S), AND";
    0x629f6f1b8880 ---------A   02940  PRINT L(3);"AIRCRAFT CARRIER(S)."
    0x629f6f1b8c20 ---------A   02950  PRINT "YOUR CURRENT SPLASH/HIT RATIO IS";S/H
    0x629f6f1b9340 ---------A   02960  IF (L(1)+L(2)+L(3))<6 THEN 2610
    0x629f6f1b93f0 ---------A   02970  PRINT
    0x629f6f1b9590 ---------A   02980  PRINT "YOU HAVE TOTALLY WIPED OUT THE BAD GUYS' FLEET"
    0x629f6f1b9920 ---------A   02990  PRINT "WITH A FINAL SPLASH/HIT RATIO OF";S/H
    0x629f6f1b9cd0 ---------A   03000  IF S/H>0 THEN 3020
    0x629f6f1b9e50 ---------A   03010  PRINT "CONGRATULATIONS -- A DIRECT HIT EVERY TIME."
    0x629f6f1b9ef0 ---------A T 03020  PRINT
    0x629f6f1ba060 ---------A   03030  PRINT "****************************"
    0x629f6f1ba0e0 ---------A   03040  PRINT
    0x629f6f1ba160 ---------A   03050  GOTO 1060
    0x629f6f1ba1b0 ---------A   03060  END
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
int    B_int;                                     // Basic: B 
int    C_int_arr[10];                             // Basic: C 
int    D_int;                                     // Basic: D 
int    F_int_arr[10];                             // Basic: F 
int    H_int_arr[10];                             // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int_arr[10];                             // Basic: L 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
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
    // 01000 PRINT TAB(33);"BATTLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"BATTLE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 REM -- BATTLE WRITTEN BY RAY WESTERGARD  1020/70
    // 01030 REM COPYRIGHT 1971 BY THE REGENTS OF THE UNIV. OF CALIF.
    // 01040 REM PRODUCED AT THE LAWRENCE HALL OF SCIENCE, BERKELEY
    // 01050 REM DIM F(6,6),H(6,6),A(4)<B(4),C(6),L(3)

  Lbl_01060:
    // 01060 FOR X=1 TO 6
    for(X_int=1;X_int<=6;X_int++){
        // 01070 FOR Y=1 TO 6
        for(Y_int=1;Y_int<=6;Y_int++){
            // 01080 F(X,Y)=0
            F_int_arr[X_int][Y_int] = 0;
            // 01090 NEXT Y
            int dummy_1090=0; // Ignore this line.
        }; // End-For(Y_int)
        // 01100 NEXT X
        int dummy_1100=0; // Ignore this line.
    }; // End-For(X_int)
    // 01110 FOR I=1 TO 3
    for(I_int=1;I_int<=3;I_int++){
        // 01120 N=4-I
        N_int = 4-I_int;
        // 01130 FOR J=1 TO 2
        for(J_int=1;J_int<=2;J_int++){

  Lbl_01140:
            // 01140 A=INT(6*RND(1)+1)
            A_int = INT(6*RND(1)+1);
            // 01150 B=INT(6*RND(1)+1)
            B_int = INT(6*RND(1)+1);
            // 01160 D=INT(4*RND(1)+1)
            D_int = INT(4*RND(1)+1);
            // 01170 IF F(A,B)>0 THEN 1140
            if(F_int_arr[A_int][B_int]>0)goto Lbl_01140;
            // 01180 M=0
            M_int = 0;
            // 01190 ON D GOTO 1200,1420,1700,1920
            switch((int)(D_int)){
                case 1: goto Lbl_01200;
                case 2: goto Lbl_01420;
                case 3: goto Lbl_01700;
                case 4: goto Lbl_01920;
                default: break; 
            };

  Lbl_01200:
            // 01200 B(1)=B
            B_int = B_int;
            // 01210 B(2)=7
            B_int = 7;
            // 01220 B(3)=7
            B_int = 7;
            // 01230 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01240 IF M>1 THEN 1300
                if(M_int>1)goto Lbl_01300;
                // 01250 IF B(K)=6 THEN 1290
                if(B_int==6)goto Lbl_01290;
                // 01260 IF F(A,B(K)+1)>0 THEN 1290
                if(F_int_arr[A_int][B_int+1]>0)goto Lbl_01290;
                // 01270 B(K+1)=B(K)+1
                B_int = B_int+1;
                // 01280 GOTO 1360
                goto Lbl_01360;

  Lbl_01290:
                // 01290 M=2
                M_int = 2;

  Lbl_01300:
                // 01300 IF B(1)<B(2) AND B(1)<B(3) THEN Z=B(1)
                if(B_int<B_int&&B_int<B_int) {
                }
                // 01310 IF B(2)<B(1) AND B(2)<B(3) THEN Z=B(2)
                if(B_int<B_int&&B_int<B_int) {
                }
                // 01320 IF B(3)<B(1) AND B(3)<B(2) THEN Z=B(3)
                if(B_int<B_int&&B_int<B_int) {
                }
                // 01330 IF Z=1 THEN 1140
                if(Z_int==1)goto Lbl_01140;
                // 01340 IF F(A,Z-1)>0 THEN 1140
                if(F_int_arr[A_int][Z_int-1]>0)goto Lbl_01140;
                // 01350 B(K+1)=Z-1
                B_int = Z_int-1;

  Lbl_01360:
                // 01360 NEXT K
                int dummy_1360=0; // Ignore this line.
            }; // End-For(K_int)
            // 01370 F(A,B)=9-2*I-J
            F_int_arr[A_int][B_int] = 9-2*I_int-J_int;
            // 01380 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01390 F(A,B(K+1))=F(A,B)
                F_int_arr[A_int][B_int] = F_int_arr[A_int][B_int];
                // 01400 NEXT K
                int dummy_1400=0; // Ignore this line.
            }; // End-For(K_int)
            // 01410 GOTO 2230
            goto Lbl_02230;

  Lbl_01420:
            // 01420 A(1)=A
            A_int = A_int;
            // 01430 B(1)=B
            B_int = B_int;
            // 01440 A(2)=0
            A_int = 0;
            // 01450 A(3)=0
            A_int = 0;
            // 01460 B(2)=0
            B_int = 0;
            // 01470 B(3)=0
            B_int = 0;
            // 01480 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01490 IF M>1 THEN 1570
                if(M_int>1)goto Lbl_01570;
                // 01500 IF A(K)=1 OR B(K)=1 THEN 1560
                if(A_int==1||B_int==1)goto Lbl_01560;
                // 01510 IF F(A(K)-1,B(K)-1)>0 THEN 1560
                if(F_int_arr[A_int-1][B_int-1]>0)goto Lbl_01560;
                // 01520 IF F(A(K)-1,B(K))>0 AND F(A(K)-1,B(K))=F(A(K),B(K)-1) THEN 1560
                if(F_int_arr[A_int-1][B_int]>0&&F_int_arr[A_int-1][B_int]==F_int_arr[A_int][B_int-1])goto Lbl_01560;
                // 01530 A(K+1)=A(K)-1
                A_int = A_int-1;
                // 01540 B(K+1)=B(K)-1
                B_int = B_int-1;
                // 01550 GOTO 1680
                goto Lbl_01680;

  Lbl_01560:
                // 01560 M=2
                M_int = 2;

  Lbl_01570:
                // 01570 IF A(1)>A(2) AND A(1)>A(3) THEN Z1=A(1)
                if(A_int>A_int&&A_int>A_int) {
                }
                // 01580 IF A(2)>A(1) AND A(2)>A(3) THEN Z1=A(2)
                if(A_int>A_int&&A_int>A_int) {
                }
                // 01590 IF A(3)>A(1) AND A(3)>A(2) THEN Z1=A(3)
                if(A_int>A_int&&A_int>A_int) {
                }
                // 01600 IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 01610 IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 01620 IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 01630 IF Z1=6 OR Z2=6 THEN 1140
                if(Z1_int==6||Z2_int==6)goto Lbl_01140;
                // 01640 IF F(Z1+1,Z2+1)>0 THEN 1140
                if(F_int_arr[Z1_int+1][Z2_int+1]>0)goto Lbl_01140;
                // 01650 IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1+1,Z2) THEN 1140
                if(F_int_arr[Z1_int][Z2_int+1]>0&&F_int_arr[Z1_int][Z2_int+1]==F_int_arr[Z1_int+1][Z2_int])goto Lbl_01140;
                // 01660 A(K+1)=Z1+1
                A_int = Z1_int+1;
                // 01670 B(K+1)=Z2+1
                B_int = Z2_int+1;

  Lbl_01680:
                // 01680 NEXT K
                int dummy_1680=0; // Ignore this line.
            }; // End-For(K_int)
            // 01690 GOTO 2190
            goto Lbl_02190;

  Lbl_01700:
            // 01700 A(1)=A
            A_int = A_int;
            // 01710 A(2)=7
            A_int = 7;
            // 01720 A(3)=7
            A_int = 7;
            // 01730 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01740 IF M>1 THEN 1800
                if(M_int>1)goto Lbl_01800;
                // 01750 IF A(K)=6 THEN 1790
                if(A_int==6)goto Lbl_01790;
                // 01760 IF F(A(K)+1,B)>0 THEN 1790
                if(F_int_arr[A_int+1][B_int]>0)goto Lbl_01790;
                // 01770 A(K+1)=A(K)+1
                A_int = A_int+1;
                // 01780 GOTO 1860
                goto Lbl_01860;

  Lbl_01790:
                // 01790 M=2
                M_int = 2;

  Lbl_01800:
                // 01800 IF A(1)<A(2) AND A(1)<A(3) THEN Z=A(1)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 01810 IF A(2)<A(1) AND A(2)<A(3) THEN Z=A(2)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 01820 IF A(3)<A(1) AND A(3)<A(2) THEN Z=A(3)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 01830 IF Z=1 THEN 1140
                if(Z_int==1)goto Lbl_01140;
                // 01840 IF F(Z-1,B)>0 THEN 1140
                if(F_int_arr[Z_int-1][B_int]>0)goto Lbl_01140;
                // 01850 A(K+1)=Z-1
                A_int = Z_int-1;

  Lbl_01860:
                // 01860 NEXT K
                int dummy_1860=0; // Ignore this line.
            }; // End-For(K_int)
            // 01870 F(A,B)=9-2*I-J
            F_int_arr[A_int][B_int] = 9-2*I_int-J_int;
            // 01880 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01890 F(A(K+1),B)=F(A,B)
                F_int_arr[A_int][B_int] = F_int_arr[A_int][B_int];
                // 01900 NEXT K
                int dummy_1900=0; // Ignore this line.
            }; // End-For(K_int)
            // 01910 GOTO 2230
            goto Lbl_02230;

  Lbl_01920:
            // 01920 A(1)=A
            A_int = A_int;
            // 01930 B(1)=B
            B_int = B_int;
            // 01940 A(2)=7
            A_int = 7;
            // 01950 A(3)=7
            A_int = 7;
            // 01960 B(2)=0
            B_int = 0;
            // 01970 B(3)=0
            B_int = 0;
            // 01980 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01990 IF M>1 THEN 2070
                if(M_int>1)goto Lbl_02070;
                // 02000 IF A(K)=6 OR B(K)=1 THEN 2060
                if(A_int==6||B_int==1)goto Lbl_02060;
                // 02010 IF F(A(K)+1,B(K)-1)>0 THEN 2060
                if(F_int_arr[A_int+1][B_int-1]>0)goto Lbl_02060;
                // 02020 IF F(A(K)+1,B(K))>0 AND F(A(K)+1,B(K))=F(A(K),B(K)-1) THEN 2060
                if(F_int_arr[A_int+1][B_int]>0&&F_int_arr[A_int+1][B_int]==F_int_arr[A_int][B_int-1])goto Lbl_02060;
                // 02030 A(K+1)=A(K)+1
                A_int = A_int+1;
                // 02040 B(K+1)=B(K)-1
                B_int = B_int-1;
                // 02050 GOTO 2180
                goto Lbl_02180;

  Lbl_02060:
                // 02060 M=2
                M_int = 2;

  Lbl_02070:
                // 02070 IF A(1)<A(2) AND A(1)<A(3) THEN Z1=A(1)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 02080 IF A(2)<A(1) AND A(2)<A(3) THEN Z1=A(2)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 02090 IF A(3)<A(1) AND A(3)<A(2) THEN Z1=A(3)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 02100 IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 02110 IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 02120 IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 02130 IF Z1=1 OR Z2=6 THEN 1140
                if(Z1_int==1||Z2_int==6)goto Lbl_01140;
                // 02140 IF F(Z1-1,Z2+1)>0 THEN 1140
                if(F_int_arr[Z1_int-1][Z2_int+1]>0)goto Lbl_01140;
                // 02150 IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1-1,Z2) THEN 1140
                if(F_int_arr[Z1_int][Z2_int+1]>0&&F_int_arr[Z1_int][Z2_int+1]==F_int_arr[Z1_int-1][Z2_int])goto Lbl_01140;
                // 02160 A(K+1)=Z1-1
                A_int = Z1_int-1;
                // 02170 B(K+1)=Z2+1
                B_int = Z2_int+1;

  Lbl_02180:
                // 02180 NEXT K
                int dummy_2180=0; // Ignore this line.
            }; // End-For(K_int)

  Lbl_02190:
            // 02190 F(A,B)=9-2*I-J
            F_int_arr[A_int][B_int] = 9-2*I_int-J_int;
            // 02200 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 02210 F(A(K+1),B(K+1))=F(A,B)
                F_int_arr[A_int][B_int] = F_int_arr[A_int][B_int];
                // 02220 NEXT K
                int dummy_2220=0; // Ignore this line.
            }; // End-For(K_int)

  Lbl_02230:
            // 02230 NEXT J
            int dummy_2230=0; // Ignore this line.
        }; // End-For(J_int)
        // 02240 NEXT I
        int dummy_2240=0; // Ignore this line.
    }; // End-For(I_int)
    // 02250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02260 PRINT "THE FOLLOWING CODE OF THE BAD GUYS' FLEET DISPOSITION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE FOLLOWING CODE OF THE BAD GUYS' FLEET DISPOSITION");strcat(buf,"\n");fputs(buf,fh); };
    // 02270 PRINT "HAS BEEN CAPTURED BUT NOT DECODED:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAS BEEN CAPTURED BUT NOT DECODED:");strcat(buf,"\n");fputs(buf,fh); };
    // 02280 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02290 FOR I=1 TO 6
    for(I_int=1;I_int<=6;I_int++){
        // 02300 FOR J=1 TO 6
        for(J_int=1;J_int<=6;J_int++){
            // 02310 H(I,J)=F(J,I)
            H_int_arr[I_int][J_int] = F_int_arr[J_int][I_int];
            // 02320 NEXT J
            int dummy_2320=0; // Ignore this line.
        }; // End-For(J_int)
        // 02330 NEXT I
        int dummy_2330=0; // Ignore this line.
    }; // End-For(I_int)
    // 02340 FOR I=1 TO 6
    for(I_int=1;I_int<=6;I_int++){
        // 02350 FOR J=1 TO 6
        for(J_int=1;J_int<=6;J_int++){
            // 02360 PRINT H(I,J);
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,H_int_arr[I_int][J_int]);fputs(buf,fh); };
            // 02370 NEXT J
            int dummy_2370=0; // Ignore this line.
        }; // End-For(J_int)
        // 02380 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 02390 NEXT I
        int dummy_2390=0; // Ignore this line.
    }; // End-For(I_int)
    // 02400 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02410 PRINT "DE-CODE IT AND USE IT IF YOU CAN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DE-CODE IT AND USE IT IF YOU CAN");strcat(buf,"\n");fputs(buf,fh); };
    // 02420 PRINT "BUT KEEP THE DE-CODING METHOD A SECRET."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BUT KEEP THE DE-CODING METHOD A SECRET.");strcat(buf,"\n");fputs(buf,fh); };
    // 02430 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02440 FOR I=1 TO 6
    for(I_int=1;I_int<=6;I_int++){
        // 02450 FOR J=1 TO 6
        for(J_int=1;J_int<=6;J_int++){
            // 02460 H(I,J)=0
            H_int_arr[I_int][J_int] = 0;
            // 02470 NEXT J
            int dummy_2470=0; // Ignore this line.
        }; // End-For(J_int)
        // 02480 NEXT I
        int dummy_2480=0; // Ignore this line.
    }; // End-For(I_int)
    // 02490 FOR I=1 TO 3
    for(I_int=1;I_int<=3;I_int++){
        // 02500 L(I)=0
        L_int_arr[I_int] = 0;
        // 02510 NEXT I
        int dummy_2510=0; // Ignore this line.
    }; // End-For(I_int)
    // 02520 C(1)=2
    C_int_arr[1] = 2;
    // 02530 C(2)=2
    C_int_arr[2] = 2;
    // 02540 C(3)=1
    C_int_arr[3] = 1;
    // 02550 C(4)=1
    C_int_arr[4] = 1;
    // 02560 C(5)=0
    C_int_arr[5] = 0;
    // 02570 C(6)=0
    C_int_arr[6] = 0;
    // 02580 S=0
    S_int = 0;
    // 02590 H=0
    H_int_arr[0] = 0;
    // 02600 PRINT "START GAME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"START GAME");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02610:
    // 02610 INPUT X,Y
    // Start of Basic INPUT statement 02610
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
    }; // End of Basic INPUT statement 02610
    // 02620 IF X<1 OR X>6 OR INT(X)<>ABS(X) THEN 2640
    if(X_int<1||X_int>6||INT(X_int)!=ABS(X_int))goto Lbl_02640;
    // 02630 IF Y>0 AND Y<7 AND INT(Y)=ABS(Y) THEN 2660
    if(Y_int>0&&Y_int<7&&INT(Y_int)==ABS(Y_int))goto Lbl_02660;

  Lbl_02640:
    // 02640 PRINT "INVALID INPUT.  TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INVALID INPUT.  TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 02650 GOTO 2610
    goto Lbl_02610;

  Lbl_02660:
    // 02660 R=7-Y
    R_int = 7-Y_int;
    // 02670 C=X
    C_int_arr[0] = X_int;
    // 02680 IF F(R,C)>0 THEN 2720
    if(F_int_arr[R_int][C_int_arr[0]]>0)goto Lbl_02720;
    // 02690 S=S+1
    S_int = S_int+1;
    // 02700 PRINT "SPLASH!  TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SPLASH!  TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 02710 GOTO 2610
    goto Lbl_02610;

  Lbl_02720:
    // 02720 IF C(F(R,C))<4 THEN 2770
    if(C_int_arr[F_int_arr[R_int][C_int_arr[0]]]<4)goto Lbl_02770;
    // 02730 PRINT "THERE USED TO BE A SHIP AT THAT POINT, BUT YOU SUNK IT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THERE USED TO BE A SHIP AT THAT POINT, BUT YOU SUNK IT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02740 PRINT "SPLASH!  TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SPLASH!  TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 02750 S=S+1
    S_int = S_int+1;
    // 02760 GOTO 2610
    goto Lbl_02610;

  Lbl_02770:
    // 02770 IF H(R,C)>0 THEN 2850
    if(H_int_arr[R_int][C_int_arr[0]]>0)goto Lbl_02850;
    // 02780 H=H+1
    H_int_arr[0] = H_int_arr[0]+1;
    // 02790 H(R,C)=F(R,C)
    H_int_arr[R_int][C_int_arr[0]] = F_int_arr[R_int][C_int_arr[0]];
    // 02800 PRINT "A DIRECT HIT ON SHIP NUMBER";F(R,C)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A DIRECT HIT ON SHIP NUMBER"); b2c_INT(buf,F_int_arr[R_int][C_int_arr[0]]);strcat(buf,"\n");fputs(buf,fh); };
    // 02810 C(F(R,C))=C(F(R,C))+1
    C_int_arr[F_int_arr[R_int][C_int_arr[0]]] = C_int_arr[F_int_arr[R_int][C_int_arr[0]]]+1;
    // 02820 IF C(F(R,C))>=4 THEN 2900
    if(C_int_arr[F_int_arr[R_int][C_int_arr[0]]]>=4)goto Lbl_02900;
    // 02830 PRINT "TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 02840 GOTO 2610
    goto Lbl_02610;

  Lbl_02850:
    // 02850 PRINT "YOU ALREADY PUT A HOLE IN SHIP NUMBER";F(R,C);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ALREADY PUT A HOLE IN SHIP NUMBER"); b2c_INT(buf,F_int_arr[R_int][C_int_arr[0]]);fputs(buf,fh); };
    // 02860 PRINT "AT THAT POINT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AT THAT POINT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02870 PRINT "SPLASH!  TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SPLASH!  TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 02880 S=S+1
    S_int = S_int+1;
    // 02890 GOTO 2610
    goto Lbl_02610;

  Lbl_02900:
    // 02900 L((INT(F(R,C)-1)/2)+1)=L((INT(F(R,C)-1)/2)+1)+1
    L_int_arr[(INT(F_int_arr[R_int][C_int_arr[0]]-1)/2)+1] = L_int_arr[(INT(F_int_arr[R_int][C_int_arr[0]]-1)/2)+1]+1;
    // 02910 PRINT "AND YOU SUNK IT.  HURRAH FOR THE GOOD GUYS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND YOU SUNK IT.  HURRAH FOR THE GOOD GUYS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02920 PRINT "SO FAR, THE BAD GUYS HAVE LOST"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SO FAR, THE BAD GUYS HAVE LOST");strcat(buf,"\n");fputs(buf,fh); };
    // 02930 PRINT L(1);"DESTROYER(S),";L(2);"CRUISER(S), AND";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,L_int_arr[1]);strcat(buf,"DESTROYER(S),"); b2c_INT(buf,L_int_arr[2]);strcat(buf,"CRUISER(S), AND");fputs(buf,fh); };
    // 02940 PRINT L(3);"AIRCRAFT CARRIER(S)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,L_int_arr[3]);strcat(buf,"AIRCRAFT CARRIER(S).");strcat(buf,"\n");fputs(buf,fh); };
    // 02950 PRINT "YOUR CURRENT SPLASH/HIT RATIO IS";S/H
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR CURRENT SPLASH/HIT RATIO IS"); b2c_INT(buf,S_int/H_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };
    // 02960 IF (L(1)+L(2)+L(3))<6 THEN 2610
    if((L_int_arr[1]+L_int_arr[2]+L_int_arr[3])<6)goto Lbl_02610;
    // 02970 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02980 PRINT "YOU HAVE TOTALLY WIPED OUT THE BAD GUYS' FLEET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE TOTALLY WIPED OUT THE BAD GUYS' FLEET");strcat(buf,"\n");fputs(buf,fh); };
    // 02990 PRINT "WITH A FINAL SPLASH/HIT RATIO OF";S/H
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WITH A FINAL SPLASH/HIT RATIO OF"); b2c_INT(buf,S_int/H_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };
    // 03000 IF S/H>0 THEN 3020
    if(S_int/H_int_arr[0]>0)goto Lbl_03020;
    // 03010 PRINT "CONGRATULATIONS -- A DIRECT HIT EVERY TIME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS -- A DIRECT HIT EVERY TIME.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03020:
    // 03020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03030 PRINT "****************************"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"****************************");strcat(buf,"\n");fputs(buf,fh); };
    // 03040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 03050 GOTO 1060
    goto Lbl_01060;
    // 03060 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
