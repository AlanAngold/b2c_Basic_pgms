/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/banner.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ba69b7506d0 ---------A   00010  INPUT "HORIZONTAL";X
    0x5ba69b750670 ---------A   00020  INPUT "VERTICAL";Y
    0x5ba69b751fc0 ---------A   00021  INPUT "CENTERED";L$
    0x5ba69b752700 ---------A   00022  G1=0:IF L$>"P" THEN G1=1
    0x5ba69b7531a0 ---------A   00023  INPUT "CHARACTER (TYPE 'ALL' IF YOU WANT CHARACTER BEING PRINTED)";M$
    0x5ba69b7516e0 ---------A   00029  PRINT "STATEMENT";
    0x5ba69b753220 ---------A   00030  INPUT A$
    0x5ba69b758aa0 ---------A   00035  INPUT "SET PAGE";O$
    0x5ba69b752ff0 ---------A   00040  A=ASC(LEFT$(A$,1))
    0x5ba69b752e70 ---------A   00050  REM
    0x5ba69b7530b0 ---------A   00060  REM
    0x5ba69b7594e0 ---------A   00070  FOR T=1 TO LEN(A$)
    0x5ba69b759a60 ---------A   00080  P$=MID$(A$,T,1)
    0x5ba69b759e10 ---------A   00090  FOR O=1 TO 50
    0x5ba69b75ac50 ---------A   00095  READ S$,S(1),S(2),S(3),S(4),S(5),S(6),S(7)
    0x5ba69b75aec0 ---------A   00096  IF P$=" " THEN 812
    0x5ba69b75b140 ---------A   00100  IF P$=S$ THEN 200
    0x5ba69b75b280 ---------A   00120  NEXT O
    0x5ba69b75b310 ---------A T 00200  RESTORE
    0x5ba69b75b5e0 ---------A   00201  X$=M$
    0x5ba69b75ba60 ---------A   00202  IF M$="ALL" THEN X$=S$
    0x5ba69b75bde0 ---------A   00205  FOR U=1 TO 7
    0x5ba69b75c220 ---------A   00210  FOR K=8 TO 0 STEP -1
    0x5ba69b75c680 ---------A   00230  IF 2^K<S(U) THEN 270
    0x5ba69b75cb40 ---------A   00240  J(9-K)=0
    0x5ba69b75cb90 ---------A   00250  GOTO 280
    0x5ba69b75d570 ---------A T 00270  J(9-K)=1: S(U)=S(U)-2^K
    0x5ba69b75d8a0 ---------A   00272  IF S(U)=1 THEN 815
    0x5ba69b75d9e0 ---------A T 00280  NEXT K
    0x5ba69b75ddd0 ---------A T 00445  FOR T1=1 TO X
    0x5ba69b75e650 ---------A   00447  PRINT TAB((63-4.5*Y)*G1/(LEN(X$))+1);
    0x5ba69b75ebb0 ---------A   00450  FOR B=1 TO F(U)
    0x5ba69b75eed0 ---------A   00460  IF J(B)=0 THEN 500
    0x5ba69b75f720 ---------A   00465  FOR I=1 TO Y: PRINT X$;: NEXT I
    0x5ba69b75f7b0 ---------A   00470  GOTO 600
    0x5ba69b75faa0 ---------A T 00500  FOR I=1 TO Y
    0x5ba69b75ff40 ---------A   00510  FOR I1=1 TO LEN(X$)
    0x5ba69b7601e0 ---------A   00520  PRINT " ";: NEXT I1
    0x5ba69b760330 ---------A   00530  NEXT I
    0x5ba69b760480 ---------A T 00600  NEXT B
    0x5ba69b760510 ---------A   00620  PRINT
    0x5ba69b760650 ---------A   00630  NEXT T1
    0x5ba69b7607a0 ---------A   00700  NEXT U
    0x5ba69b760dd0 ---------A   00750  FOR H=1 TO 2*X: PRINT: NEXT H
    0x5ba69b760f20 ---------A T 00800  NEXT T
    0x5ba69b760fd0 ---------A   00806  REM: FOR H=1 TO 75: PRINT: NEXT H
    0x5ba69b761040 ---------A   00810  END
    0x5ba69b7615d0 ---------A T 00812  FOR H=1 TO 7*X: PRINT: NEXT H
    0x5ba69b761660 ---------A   00813  GOTO 800
    0x5ba69b761ad0 ---------A T 00815  F(U)=9-K: GOTO 445
    0x5ba69b762250 ---------A   00899  DATA " ",0,0,0,0,0,0,0
    0x5ba69b7629e0 ---------A   00900  DATA "A",505,37,35,34,35,37,505
    0x5ba69b763170 ---------A   00901  DATA "G",125,131,258,258,290,163,101
    0x5ba69b7638f0 ---------A   00902  DATA "E",512,274,274,274,274,258,258
    0x5ba69b764070 ---------A   00903  DATA "T",2,2,2,512,2,2,2
    0x5ba69b764800 ---------A   00904  DATA "W",256,257,129,65,129,257,256
    0x5ba69b764f80 ---------A   00905  DATA "L",512,257,257,257,257,257,257
    0x5ba69b765710 ---------A   00906  DATA "S",69,139,274,274,274,163,69
    0x5ba69b765e90 ---------A   00907  DATA "O",125,131,258,258,258,131,125
    0x5ba69b766610 ---------A   00908  DATA "N",512,7,9,17,33,193,512
    0x5ba69b766d90 ---------A   00909  DATA "F",512,18,18,18,18,2,2
    0x5ba69b767520 ---------A   00910  DATA "K",512,17,17,41,69,131,258
    0x5ba69b767cb0 ---------A   00911  DATA "B",512,274,274,274,274,274,239
    0x5ba69b768430 ---------A   00912  DATA "D",512,258,258,258,258,131,125
    0x5ba69b768bb0 ---------A   00913  DATA "H",512,17,17,17,17,17,512
    0x5ba69b769740 ---------A   00914  DATA "M",512,7,13,25,13,7,512
    0x5ba69b769ed0 ---------A   00915  DATA "?",5,3,2,354,18,11,5
    0x5ba69b76a650 ---------A   00916  DATA "U",128,129,257,257,257,129,128
    0x5ba69b76add0 ---------A   00917  DATA "R",512,18,18,50,82,146,271
    0x5ba69b76b560 ---------A   00918  DATA "P",512,18,18,18,18,18,15
    0x5ba69b76bce0 ---------A   00919  DATA "Q",125,131,258,258,322,131,381
    0x5ba69b76c460 ---------A   00920  DATA "Y",8,9,17,481,17,9,8
    0x5ba69b76cbe0 ---------A   00921  DATA "V",64,65,129,257,129,65,64
    0x5ba69b76d370 ---------A   00922  DATA "X",388,69,41,17,41,69,388
    0x5ba69b76db00 ---------A   00923  DATA "Z",386,322,290,274,266,262,260
    0x5ba69b76e280 ---------A   00924  DATA "I",258,258,258,512,258,258,258
    0x5ba69b76ea00 ---------A   00925  DATA "C",125,131,258,258,258,131,69
    0x5ba69b76f180 ---------A   00926  DATA "J",65,129,257,257,257,129,128
    0x5ba69b76f910 ---------A   00927  DATA "1",0,0,261,259,512,257,257
    0x5ba69b770090 ---------A   00928  DATA "2",261,387,322,290,274,267,261
    0x5ba69b770810 ---------A   00929  DATA "*",69,41,17,512,17,41,69
    0x5ba69b770f90 ---------A   00930  DATA "3",66,130,258,274,266,150,100
    0x5ba69b771720 ---------A   00931  DATA "4",33,49,41,37,35,512,33
    0x5ba69b771eb0 ---------A   00932  DATA "5",160,274,274,274,274,274,226
    0x5ba69b772630 ---------A   00933  DATA "6",194,291,293,297,305,289,193
    0x5ba69b772db0 ---------A   00934  DATA "7",258,130,66,34,18,10,8
    0x5ba69b773530 ---------A   00935  DATA "8",69,171,274,274,274,171,69
    0x5ba69b773cb0 ---------A   00936  DATA "9",263,138,74,42,26,10,7
    0x5ba69b774430 ---------A   00937  DATA "=",41,41,41,41,41,41,41
    0x5ba69b774bb0 ---------A   00938  DATA "!",1,1,1,384,1,1,1
    0x5ba69b775330 ---------A   00939  DATA "0",57,69,131,258,131,69,57
    0x5ba69b775aa0 ---------A   00940  DATA ".",1,1,129,449,129,1,1
    0x5ba69b775af0 ----------   01000  STOP
    0x5ba69b775b50 ---------A   01002  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00200      00100T
     00270      00230T
     00280      00250T
     00445      00815T
     00500      00460T
     00600      00470T
     00800      00813T
     00812      00096T
     00815      00272T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5ba69b7506d0 (00010)   0x5ba69b7506d0 (00010)   0x5ba69b775b50 (01002)   0x5ba69b775b50 (01002)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/banner.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ba69b7506d0 ---------A   00010  INPUT "HORIZONTAL";X
    0x5ba69b750670 ---------A   00020  INPUT "VERTICAL";Y
    0x5ba69b751fc0 ---------A   00021  INPUT "CENTERED";L$
    0x5ba69b752db0 ----------   00022  G1=0
    0x5ba69b752700 ---------A        a IF L$>"P" THEN G1=1
    0x5ba69b7531a0 ---------A   00023  INPUT "CHARACTER (TYPE 'ALL' IF YOU WANT CHARACTER BEING PRINTED)";M$
    0x5ba69b7516e0 ---------A   00029  PRINT "STATEMENT";
    0x5ba69b753220 ---------A   00030  INPUT A$
    0x5ba69b758aa0 ---------A   00035  INPUT "SET PAGE";O$
    0x5ba69b752ff0 ---------A   00040  A=ASC(LEFT$(A$,1))
    0x5ba69b752e70 ---------A   00050  REM
    0x5ba69b7530b0 ---------A   00060  REM
    0x5ba69b7594e0 ---------A   00070  FOR T=1 TO LEN(A$)
    0x5ba69b759a60 ---------A   00080  P$=MID$(A$,T,1)
    0x5ba69b759e10 ---------A   00090  FOR O=1 TO 50
    0x5ba69b75ac50 ---------A   00095  READ S$,S(1),S(2),S(3),S(4),S(5),S(6),S(7)
    0x5ba69b75aec0 ---------A   00096  IF P$=" " THEN 812
    0x5ba69b75b140 ---------A   00100  IF P$=S$ THEN 200
    0x5ba69b75b280 ---------A   00120  NEXT O
    0x5ba69b75b310 ---------A T 00200  RESTORE
    0x5ba69b75b5e0 ---------A   00201  X$=M$
    0x5ba69b75ba60 ---------A   00202  IF M$="ALL" THEN X$=S$
    0x5ba69b75bde0 ---------A   00205  FOR U=1 TO 7
    0x5ba69b75c220 ---------A   00210  FOR K=8 TO 0 STEP -1
    0x5ba69b75c680 ---------A   00230  IF 2^K<S(U) THEN 270
    0x5ba69b75cb40 ---------A   00240  J(9-K)=0
    0x5ba69b75cb90 ---------A   00250  GOTO 280
    0x5ba69b75cf60 ---------- T 00270  J(9-K)=1
    0x5ba69b75d570 ---------A T      a S(U)=S(U)-2^K
    0x5ba69b75d8a0 ---------A   00272  IF S(U)=1 THEN 815
    0x5ba69b75d9e0 ---------A T 00280  NEXT K
    0x5ba69b75ddd0 ---------A T 00445  FOR T1=1 TO X
    0x5ba69b75e650 ---------A   00447  PRINT TAB((63-4.5*Y)*G1/(LEN(X$))+1);
    0x5ba69b75ebb0 ---------A   00450  FOR B=1 TO F(U)
    0x5ba69b75eed0 ---------A   00460  IF J(B)=0 THEN 500
    0x5ba69b75f480 ----------   00465  FOR I=1 TO Y
    0x5ba69b75f5e0 ----------        a PRINT X$;
    0x5ba69b75f720 ---------A        b NEXT I
    0x5ba69b75f7b0 ---------A   00470  GOTO 600
    0x5ba69b75faa0 ---------A T 00500  FOR I=1 TO Y
    0x5ba69b75ff40 ---------A   00510  FOR I1=1 TO LEN(X$)
    0x5ba69b7600a0 ----------   00520  PRINT " ";
    0x5ba69b7601e0 ---------A        a NEXT I1
    0x5ba69b760330 ---------A   00530  NEXT I
    0x5ba69b760480 ---------A T 00600  NEXT B
    0x5ba69b760510 ---------A   00620  PRINT
    0x5ba69b760650 ---------A   00630  NEXT T1
    0x5ba69b7607a0 ---------A   00700  NEXT U
    0x5ba69b760c30 ----------   00750  FOR H=1 TO 2*X
    0x5ba69b760c90 ----------        a PRINT
    0x5ba69b760dd0 ---------A        b NEXT H
    0x5ba69b760f20 ---------A T 00800  NEXT T
    0x5ba69b760fd0 ---------A   00806  REM
    0x5ba69b761040 ---------A   00810  END
    0x5ba69b761430 ---------- T 00812  FOR H=1 TO 7*X
    0x5ba69b761490 ---------- T      a PRINT
    0x5ba69b7615d0 ---------A T      b NEXT H
    0x5ba69b761660 ---------A   00813  GOTO 800
    0x5ba69b761a50 ---------- T 00815  F(U)=9-K
    0x5ba69b761ad0 ---------A T      a GOTO 445
    0x5ba69b762250 ---------A   00899  DATA " ",0,0,0,0,0,0,0
    0x5ba69b7629e0 ---------A   00900  DATA "A",505,37,35,34,35,37,505
    0x5ba69b763170 ---------A   00901  DATA "G",125,131,258,258,290,163,101
    0x5ba69b7638f0 ---------A   00902  DATA "E",512,274,274,274,274,258,258
    0x5ba69b764070 ---------A   00903  DATA "T",2,2,2,512,2,2,2
    0x5ba69b764800 ---------A   00904  DATA "W",256,257,129,65,129,257,256
    0x5ba69b764f80 ---------A   00905  DATA "L",512,257,257,257,257,257,257
    0x5ba69b765710 ---------A   00906  DATA "S",69,139,274,274,274,163,69
    0x5ba69b765e90 ---------A   00907  DATA "O",125,131,258,258,258,131,125
    0x5ba69b766610 ---------A   00908  DATA "N",512,7,9,17,33,193,512
    0x5ba69b766d90 ---------A   00909  DATA "F",512,18,18,18,18,2,2
    0x5ba69b767520 ---------A   00910  DATA "K",512,17,17,41,69,131,258
    0x5ba69b767cb0 ---------A   00911  DATA "B",512,274,274,274,274,274,239
    0x5ba69b768430 ---------A   00912  DATA "D",512,258,258,258,258,131,125
    0x5ba69b768bb0 ---------A   00913  DATA "H",512,17,17,17,17,17,512
    0x5ba69b769740 ---------A   00914  DATA "M",512,7,13,25,13,7,512
    0x5ba69b769ed0 ---------A   00915  DATA "?",5,3,2,354,18,11,5
    0x5ba69b76a650 ---------A   00916  DATA "U",128,129,257,257,257,129,128
    0x5ba69b76add0 ---------A   00917  DATA "R",512,18,18,50,82,146,271
    0x5ba69b76b560 ---------A   00918  DATA "P",512,18,18,18,18,18,15
    0x5ba69b76bce0 ---------A   00919  DATA "Q",125,131,258,258,322,131,381
    0x5ba69b76c460 ---------A   00920  DATA "Y",8,9,17,481,17,9,8
    0x5ba69b76cbe0 ---------A   00921  DATA "V",64,65,129,257,129,65,64
    0x5ba69b76d370 ---------A   00922  DATA "X",388,69,41,17,41,69,388
    0x5ba69b76db00 ---------A   00923  DATA "Z",386,322,290,274,266,262,260
    0x5ba69b76e280 ---------A   00924  DATA "I",258,258,258,512,258,258,258
    0x5ba69b76ea00 ---------A   00925  DATA "C",125,131,258,258,258,131,69
    0x5ba69b76f180 ---------A   00926  DATA "J",65,129,257,257,257,129,128
    0x5ba69b76f910 ---------A   00927  DATA "1",0,0,261,259,512,257,257
    0x5ba69b770090 ---------A   00928  DATA "2",261,387,322,290,274,267,261
    0x5ba69b770810 ---------A   00929  DATA "*",69,41,17,512,17,41,69
    0x5ba69b770f90 ---------A   00930  DATA "3",66,130,258,274,266,150,100
    0x5ba69b771720 ---------A   00931  DATA "4",33,49,41,37,35,512,33
    0x5ba69b771eb0 ---------A   00932  DATA "5",160,274,274,274,274,274,226
    0x5ba69b772630 ---------A   00933  DATA "6",194,291,293,297,305,289,193
    0x5ba69b772db0 ---------A   00934  DATA "7",258,130,66,34,18,10,8
    0x5ba69b773530 ---------A   00935  DATA "8",69,171,274,274,274,171,69
    0x5ba69b773cb0 ---------A   00936  DATA "9",263,138,74,42,26,10,7
    0x5ba69b774430 ---------A   00937  DATA "=",41,41,41,41,41,41,41
    0x5ba69b774bb0 ---------A   00938  DATA "!",1,1,1,384,1,1,1
    0x5ba69b775330 ---------A   00939  DATA "0",57,69,131,258,131,69,57
    0x5ba69b775aa0 ---------A   00940  DATA ".",1,1,129,449,129,1,1
    0x5ba69b775af0 ----------   01000  STOP
    0x5ba69b775b50 ---------A   01002  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/banner.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ba69b7506d0 ---------A   01000  INPUT "HORIZONTAL";X
    0x5ba69b750670 ---------A   01010  INPUT "VERTICAL";Y
    0x5ba69b751fc0 ---------A   01020  INPUT "CENTERED";L$
    0x5ba69b752db0 ----------   01030  G1=0
    0x5ba69b752700 ---------A   01040  IF L$>"P" THEN G1=1
    0x5ba69b7531a0 ---------A   01050  INPUT "CHARACTER (TYPE 'ALL' IF YOU WANT CHARACTER BEING PRINTED)";M$
    0x5ba69b7516e0 ---------A   01060  PRINT "STATEMENT";
    0x5ba69b753220 ---------A   01070  INPUT A$
    0x5ba69b758aa0 ---------A   01080  INPUT "SET PAGE";O$
    0x5ba69b752ff0 ---------A   01090  A=ASC(LEFT$(A$,1))
    0x5ba69b752e70 ---------A   01100  REM
    0x5ba69b7530b0 ---------A   01110  REM
    0x5ba69b7594e0 ---------A   01120  FOR T=1 TO LEN(A$)
    0x5ba69b759a60 ---------A   01130  P$=MID$(A$,T,1)
    0x5ba69b759e10 ---------A   01140  FOR O=1 TO 50
    0x5ba69b75ac50 ---------A   01150  READ S$,S(1),S(2),S(3),S(4),S(5),S(6),S(7)
    0x5ba69b75aec0 ---------A   01160  IF P$=" " THEN 1560
    0x5ba69b75b140 ---------A   01170  IF P$=S$ THEN 1190
    0x5ba69b75b280 ---------A   01180  NEXT O
    0x5ba69b75b310 ---------A   01190  RESTORE
    0x5ba69b75b5e0 ---------A   01200  X$=M$
    0x5ba69b75ba60 ---------A   01210  IF M$="ALL" THEN X$=S$
    0x5ba69b75bde0 ---------A   01220  FOR U=1 TO 7
    0x5ba69b75c220 ---------A   01230  FOR K=8 TO 0 STEP -1
    0x5ba69b75c680 ---------A   01240  IF 2^K<S(U) THEN 1280
    0x5ba69b75cb40 ---------A   01250  J(9-K)=0
    0x5ba69b75cb90 ---------A   01260  GOTO 1300
    0x5ba69b75cf60 ----------   01270  J(9-K)=1
    0x5ba69b75d570 ---------A   01280  S(U)=S(U)-2^K
    0x5ba69b75d8a0 ---------A   01290  IF S(U)=1 THEN 1590
    0x5ba69b75d9e0 ---------A   01300  NEXT K
    0x5ba69b75ddd0 ---------A   01310  FOR T1=1 TO X
    0x5ba69b75e650 ---------A   01320  PRINT TAB((63-4.5*Y)*G1/(LEN(X$))+1);
    0x5ba69b75ebb0 ---------A   01330  FOR B=1 TO F(U)
    0x5ba69b75eed0 ---------A   01340  IF J(B)=0 THEN 1390
    0x5ba69b75f480 ----------   01350  FOR I=1 TO Y
    0x5ba69b75f5e0 ----------   01360  PRINT X$;
    0x5ba69b75f720 ---------A   01370  NEXT I
    0x5ba69b75f7b0 ---------A   01380  GOTO 1440
    0x5ba69b75faa0 ---------A   01390  FOR I=1 TO Y
    0x5ba69b75ff40 ---------A   01400  FOR I1=1 TO LEN(X$)
    0x5ba69b7600a0 ----------   01410  PRINT " ";
    0x5ba69b7601e0 ---------A   01420  NEXT I1
    0x5ba69b760330 ---------A   01430  NEXT I
    0x5ba69b760480 ---------A   01440  NEXT B
    0x5ba69b760510 ---------A   01450  PRINT
    0x5ba69b760650 ---------A   01460  NEXT T1
    0x5ba69b7607a0 ---------A   01470  NEXT U
    0x5ba69b760c30 ----------   01480  FOR H=1 TO 2*X
    0x5ba69b760c90 ----------   01490  PRINT
    0x5ba69b760dd0 ---------A   01500  NEXT H
    0x5ba69b760f20 ---------A   01510  NEXT T
    0x5ba69b760fd0 ---------A   01520  REM
    0x5ba69b761040 ---------A   01530  END
    0x5ba69b761430 ----------   01540  FOR H=1 TO 7*X
    0x5ba69b761490 ----------   01550  PRINT
    0x5ba69b7615d0 ---------A   01560  NEXT H
    0x5ba69b761660 ---------A   01570  GOTO 1510
    0x5ba69b761a50 ----------   01580  F(U)=9-K
    0x5ba69b761ad0 ---------A   01590  GOTO 1310
    0x5ba69b762250 ---------A   01600  DATA " ",0,0,0,0,0,0,0
    0x5ba69b7629e0 ---------A   01610  DATA "A",505,37,35,34,35,37,505
    0x5ba69b763170 ---------A   01620  DATA "G",125,131,258,258,290,163,101
    0x5ba69b7638f0 ---------A   01630  DATA "E",512,274,274,274,274,258,258
    0x5ba69b764070 ---------A   01640  DATA "T",2,2,2,512,2,2,2
    0x5ba69b764800 ---------A   01650  DATA "W",256,257,129,65,129,257,256
    0x5ba69b764f80 ---------A   01660  DATA "L",512,257,257,257,257,257,257
    0x5ba69b765710 ---------A   01670  DATA "S",69,139,274,274,274,163,69
    0x5ba69b765e90 ---------A   01680  DATA "O",125,131,258,258,258,131,125
    0x5ba69b766610 ---------A   01690  DATA "N",512,7,9,17,33,193,512
    0x5ba69b766d90 ---------A   01700  DATA "F",512,18,18,18,18,2,2
    0x5ba69b767520 ---------A   01710  DATA "K",512,17,17,41,69,131,258
    0x5ba69b767cb0 ---------A   01720  DATA "B",512,274,274,274,274,274,239
    0x5ba69b768430 ---------A   01730  DATA "D",512,258,258,258,258,131,125
    0x5ba69b768bb0 ---------A   01740  DATA "H",512,17,17,17,17,17,512
    0x5ba69b769740 ---------A   01750  DATA "M",512,7,13,25,13,7,512
    0x5ba69b769ed0 ---------A   01760  DATA "?",5,3,2,354,18,11,5
    0x5ba69b76a650 ---------A   01770  DATA "U",128,129,257,257,257,129,128
    0x5ba69b76add0 ---------A   01780  DATA "R",512,18,18,50,82,146,271
    0x5ba69b76b560 ---------A   01790  DATA "P",512,18,18,18,18,18,15
    0x5ba69b76bce0 ---------A   01800  DATA "Q",125,131,258,258,322,131,381
    0x5ba69b76c460 ---------A   01810  DATA "Y",8,9,17,481,17,9,8
    0x5ba69b76cbe0 ---------A   01820  DATA "V",64,65,129,257,129,65,64
    0x5ba69b76d370 ---------A   01830  DATA "X",388,69,41,17,41,69,388
    0x5ba69b76db00 ---------A   01840  DATA "Z",386,322,290,274,266,262,260
    0x5ba69b76e280 ---------A   01850  DATA "I",258,258,258,512,258,258,258
    0x5ba69b76ea00 ---------A   01860  DATA "C",125,131,258,258,258,131,69
    0x5ba69b76f180 ---------A   01870  DATA "J",65,129,257,257,257,129,128
    0x5ba69b76f910 ---------A   01880  DATA "1",0,0,261,259,512,257,257
    0x5ba69b770090 ---------A   01890  DATA "2",261,387,322,290,274,267,261
    0x5ba69b770810 ---------A   01900  DATA "*",69,41,17,512,17,41,69
    0x5ba69b770f90 ---------A   01910  DATA "3",66,130,258,274,266,150,100
    0x5ba69b771720 ---------A   01920  DATA "4",33,49,41,37,35,512,33
    0x5ba69b771eb0 ---------A   01930  DATA "5",160,274,274,274,274,274,226
    0x5ba69b772630 ---------A   01940  DATA "6",194,291,293,297,305,289,193
    0x5ba69b772db0 ---------A   01950  DATA "7",258,130,66,34,18,10,8
    0x5ba69b773530 ---------A   01960  DATA "8",69,171,274,274,274,171,69
    0x5ba69b773cb0 ---------A   01970  DATA "9",263,138,74,42,26,10,7
    0x5ba69b774430 ---------A   01980  DATA "=",41,41,41,41,41,41,41
    0x5ba69b774bb0 ---------A   01990  DATA "!",1,1,1,384,1,1,1
    0x5ba69b775330 ---------A   02000  DATA "0",57,69,131,258,131,69,57
    0x5ba69b775aa0 ---------A   02010  DATA ".",1,1,129,449,129,1,1
    0x5ba69b775af0 ----------   02020  STOP
    0x5ba69b775b50 ---------A   02030  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01990 - 10000    8020 

 */



/*
 *  Symbol Table Listing for 'basic/banner.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
    F               Array    Integer         {0,9} 
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G1                       Integer     
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    I1                       Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J               Array    Integer         {0,9} 
    K                        Integer     
    L$                       String      
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M$                       String      
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    O                        Integer     
    O$                       String      
    OCT$            Function String          args=1, float  
    P$                       String      
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,9} 
    S$                       String      
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    T1                       Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    X$                       String      
    Y                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/banner.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ba69b7506d0 ---------A   01000  INPUT "HORIZONTAL";X
    0x5ba69b750670 ---------A   01010  INPUT "VERTICAL";Y
    0x5ba69b751fc0 ---------A   01020  INPUT "CENTERED";L$
    0x5ba69b752db0 ---------A   01030  G1=0
    0x5ba69b752700 ---------A   01040  IF L$>"P" THEN G1=1
    0x5ba69b7531a0 ---------A   01050  INPUT "CHARACTER (TYPE 'ALL' IF YOU WANT CHARACTER BEING PRINTED)";M$
    0x5ba69b7516e0 ---------A   01060  PRINT "STATEMENT";
    0x5ba69b753220 ---------A   01070  INPUT A$
    0x5ba69b758aa0 ---------A   01080  INPUT "SET PAGE";O$
    0x5ba69b752ff0 ---------A   01090  A=ASC(LEFT$(A$,1))
    0x5ba69b752e70 ---------A   01100  REM
    0x5ba69b7530b0 ---------A   01110  REM
    0x5ba69b7594e0 ---------A   01120  FOR T=1 TO LEN(A$)
    0x5ba69b759a60 ---------A   01130  P$=MID$(A$,T,1)
    0x5ba69b759e10 ---------A   01140  FOR O=1 TO 50
    0x5ba69b75ac50 ---------A   01150  READ S$,S(1),S(2),S(3),S(4),S(5),S(6),S(7)
    0x5ba69b75aec0 ---------A   01160  IF P$=" " THEN 1530
    0x5ba69b75b140 ---------A   01170  IF P$=S$ THEN 1190
    0x5ba69b75b280 ---------A   01180  NEXT O
    0x5ba69b75b310 ---------A T 01190  RESTORE
    0x5ba69b75b5e0 ---------A   01200  X$=M$
    0x5ba69b75ba60 ---------A   01210  IF M$="ALL" THEN X$=S$
    0x5ba69b75bde0 ---------A   01220  FOR U=1 TO 7
    0x5ba69b75c220 ---------A   01230  FOR K=8 TO 0 STEP -1
    0x5ba69b75c680 ---------A   01240  IF 2^K<S(U) THEN 1270
    0x5ba69b75cb40 ---------A   01250  J(9-K)=0
    0x5ba69b75cb90 ---------A   01260  GOTO 1290
    0x5ba69b75d570 ---------A T 01270  S(U)=S(U)-2^K
    0x5ba69b75d8a0 ---------A   01280  IF S(U)=1 THEN 1550
    0x5ba69b75d9e0 ---------A T 01290  NEXT K
    0x5ba69b75ddd0 ---------A T 01300  FOR T1=1 TO X
    0x5ba69b75e650 ---------A   01310  PRINT TAB((63-4.5*Y)*G1/(LEN(X$))+1);
    0x5ba69b75ebb0 ---------A   01320  FOR B=1 TO F(U)
    0x5ba69b75eed0 ---------A   01330  IF J(B)=0 THEN 1380
    0x5ba69b75f480 ---------A   01340  FOR I=1 TO Y
    0x5ba69b75f5e0 ---------A   01350  PRINT X$;
    0x5ba69b75f720 ---------A   01360  NEXT I
    0x5ba69b75f7b0 ---------A   01370  GOTO 1430
    0x5ba69b75faa0 ---------A T 01380  FOR I=1 TO Y
    0x5ba69b75ff40 ---------A   01390  FOR I1=1 TO LEN(X$)
    0x5ba69b7600a0 ---------A   01400  PRINT " ";
    0x5ba69b7601e0 ---------A   01410  NEXT I1
    0x5ba69b760330 ---------A   01420  NEXT I
    0x5ba69b760480 ---------A T 01430  NEXT B
    0x5ba69b760510 ---------A   01440  PRINT
    0x5ba69b760650 ---------A   01450  NEXT T1
    0x5ba69b7607a0 ---------A   01460  NEXT U
    0x5ba69b760c30 ---------A   01470  FOR H=1 TO 2*X
    0x5ba69b760c90 ---------A   01480  PRINT
    0x5ba69b760dd0 ---------A   01490  NEXT H
    0x5ba69b760f20 ---------A T 01500  NEXT T
    0x5ba69b760fd0 ---------A   01510  REM
    0x5ba69b761040 ---------A   01520  END
    0x5ba69b7615d0 ---------A T 01530  NEXT H
    0x5ba69b761660 ---------A   01540  GOTO 1500
    0x5ba69b761ad0 ---------A T 01550  GOTO 1300
    0x5ba69b762250 ---------A   01560  DATA " ",0,0,0,0,0,0,0
    0x5ba69b7629e0 ---------A   01570  DATA "A",505,37,35,34,35,37,505
    0x5ba69b763170 ---------A   01580  DATA "G",125,131,258,258,290,163,101
    0x5ba69b7638f0 ---------A   01590  DATA "E",512,274,274,274,274,258,258
    0x5ba69b764070 ---------A   01600  DATA "T",2,2,2,512,2,2,2
    0x5ba69b764800 ---------A   01610  DATA "W",256,257,129,65,129,257,256
    0x5ba69b764f80 ---------A   01620  DATA "L",512,257,257,257,257,257,257
    0x5ba69b765710 ---------A   01630  DATA "S",69,139,274,274,274,163,69
    0x5ba69b765e90 ---------A   01640  DATA "O",125,131,258,258,258,131,125
    0x5ba69b766610 ---------A   01650  DATA "N",512,7,9,17,33,193,512
    0x5ba69b766d90 ---------A   01660  DATA "F",512,18,18,18,18,2,2
    0x5ba69b767520 ---------A   01670  DATA "K",512,17,17,41,69,131,258
    0x5ba69b767cb0 ---------A   01680  DATA "B",512,274,274,274,274,274,239
    0x5ba69b768430 ---------A   01690  DATA "D",512,258,258,258,258,131,125
    0x5ba69b768bb0 ---------A   01700  DATA "H",512,17,17,17,17,17,512
    0x5ba69b769740 ---------A   01710  DATA "M",512,7,13,25,13,7,512
    0x5ba69b769ed0 ---------A   01720  DATA "?",5,3,2,354,18,11,5
    0x5ba69b76a650 ---------A   01730  DATA "U",128,129,257,257,257,129,128
    0x5ba69b76add0 ---------A   01740  DATA "R",512,18,18,50,82,146,271
    0x5ba69b76b560 ---------A   01750  DATA "P",512,18,18,18,18,18,15
    0x5ba69b76bce0 ---------A   01760  DATA "Q",125,131,258,258,322,131,381
    0x5ba69b76c460 ---------A   01770  DATA "Y",8,9,17,481,17,9,8
    0x5ba69b76cbe0 ---------A   01780  DATA "V",64,65,129,257,129,65,64
    0x5ba69b76d370 ---------A   01790  DATA "X",388,69,41,17,41,69,388
    0x5ba69b76db00 ---------A   01800  DATA "Z",386,322,290,274,266,262,260
    0x5ba69b76e280 ---------A   01810  DATA "I",258,258,258,512,258,258,258
    0x5ba69b76ea00 ---------A   01820  DATA "C",125,131,258,258,258,131,69
    0x5ba69b76f180 ---------A   01830  DATA "J",65,129,257,257,257,129,128
    0x5ba69b76f910 ---------A   01840  DATA "1",0,0,261,259,512,257,257
    0x5ba69b770090 ---------A   01850  DATA "2",261,387,322,290,274,267,261
    0x5ba69b770810 ---------A   01860  DATA "*",69,41,17,512,17,41,69
    0x5ba69b770f90 ---------A   01870  DATA "3",66,130,258,274,266,150,100
    0x5ba69b771720 ---------A   01880  DATA "4",33,49,41,37,35,512,33
    0x5ba69b771eb0 ---------A   01890  DATA "5",160,274,274,274,274,274,226
    0x5ba69b772630 ---------A   01900  DATA "6",194,291,293,297,305,289,193
    0x5ba69b772db0 ---------A   01910  DATA "7",258,130,66,34,18,10,8
    0x5ba69b773530 ---------A   01920  DATA "8",69,171,274,274,274,171,69
    0x5ba69b773cb0 ---------A   01930  DATA "9",263,138,74,42,26,10,7
    0x5ba69b774430 ---------A   01940  DATA "=",41,41,41,41,41,41,41
    0x5ba69b774bb0 ---------A   01950  DATA "!",1,1,1,384,1,1,1
    0x5ba69b775330 ---------A   01960  DATA "0",57,69,131,258,131,69,57
    0x5ba69b775aa0 ---------A   01970  DATA ".",1,1,129,449,129,1,1
    0x5ba69b775b50 ---------A   01980  END
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
char* data_01560s[]={" ","0","0","0","0","0","0","0"};
char* data_01570s[]={"A","505","37","35","34","35","37","505"};
char* data_01580s[]={"G","125","131","258","258","290","163","101"};
char* data_01590s[]={"E","512","274","274","274","274","258","258"};
char* data_01600s[]={"T","2","2","2","512","2","2","2"};
char* data_01610s[]={"W","256","257","129","65","129","257","256"};
char* data_01620s[]={"L","512","257","257","257","257","257","257"};
char* data_01630s[]={"S","69","139","274","274","274","163","69"};
char* data_01640s[]={"O","125","131","258","258","258","131","125"};
char* data_01650s[]={"N","512","7","9","17","33","193","512"};
char* data_01660s[]={"F","512","18","18","18","18","2","2"};
char* data_01670s[]={"K","512","17","17","41","69","131","258"};
char* data_01680s[]={"B","512","274","274","274","274","274","239"};
char* data_01690s[]={"D","512","258","258","258","258","131","125"};
char* data_01700s[]={"H","512","17","17","17","17","17","512"};
char* data_01710s[]={"M","512","7","13","25","13","7","512"};
char* data_01720s[]={"?","5","3","2","354","18","11","5"};
char* data_01730s[]={"U","128","129","257","257","257","129","128"};
char* data_01740s[]={"R","512","18","18","50","82","146","271"};
char* data_01750s[]={"P","512","18","18","18","18","18","15"};
char* data_01760s[]={"Q","125","131","258","258","322","131","381"};
char* data_01770s[]={"Y","8","9","17","481","17","9","8"};
char* data_01780s[]={"V","64","65","129","257","129","65","64"};
char* data_01790s[]={"X","388","69","41","17","41","69","388"};
char* data_01800s[]={"Z","386","322","290","274","266","262","260"};
char* data_01810s[]={"I","258","258","258","512","258","258","258"};
char* data_01820s[]={"C","125","131","258","258","258","131","69"};
char* data_01830s[]={"J","65","129","257","257","257","129","128"};
char* data_01840s[]={"1","0","0","261","259","512","257","257"};
char* data_01850s[]={"2","261","387","322","290","274","267","261"};
char* data_01860s[]={"*","69","41","17","512","17","41","69"};
char* data_01870s[]={"3","66","130","258","274","266","150","100"};
char* data_01880s[]={"4","33","49","41","37","35","512","33"};
char* data_01890s[]={"5","160","274","274","274","274","274","226"};
char* data_01900s[]={"6","194","291","293","297","305","289","193"};
char* data_01910s[]={"7","258","130","66","34","18","10","8"};
char* data_01920s[]={"8","69","171","274","274","274","171","69"};
char* data_01930s[]={"9","263","138","74","42","26","10","7"};
char* data_01940s[]={"=","41","41","41","41","41","41","41"};
char* data_01950s[]={"!","1","1","1","384","1","1","1"};
char* data_01960s[]={"0","57","69","131","258","131","69","57"};
char* data_01970s[]={".","1","1","129","449","129","1","1"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1560,  8,data_01560s},
    { 1570,  8,data_01570s},
    { 1580,  8,data_01580s},
    { 1590,  8,data_01590s},
    { 1600,  8,data_01600s},
    { 1610,  8,data_01610s},
    { 1620,  8,data_01620s},
    { 1630,  8,data_01630s},
    { 1640,  8,data_01640s},
    { 1650,  8,data_01650s},
    { 1660,  8,data_01660s},
    { 1670,  8,data_01670s},
    { 1680,  8,data_01680s},
    { 1690,  8,data_01690s},
    { 1700,  8,data_01700s},
    { 1710,  8,data_01710s},
    { 1720,  8,data_01720s},
    { 1730,  8,data_01730s},
    { 1740,  8,data_01740s},
    { 1750,  8,data_01750s},
    { 1760,  8,data_01760s},
    { 1770,  8,data_01770s},
    { 1780,  8,data_01780s},
    { 1790,  8,data_01790s},
    { 1800,  8,data_01800s},
    { 1810,  8,data_01810s},
    { 1820,  8,data_01820s},
    { 1830,  8,data_01830s},
    { 1840,  8,data_01840s},
    { 1850,  8,data_01850s},
    { 1860,  8,data_01860s},
    { 1870,  8,data_01870s},
    { 1880,  8,data_01880s},
    { 1890,  8,data_01890s},
    { 1900,  8,data_01900s},
    { 1910,  8,data_01910s},
    { 1920,  8,data_01920s},
    { 1930,  8,data_01930s},
    { 1940,  8,data_01940s},
    { 1950,  8,data_01950s},
    { 1960,  8,data_01960s},
    { 1970,  8,data_01970s},
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
int    F_int_arr[10];                             // Basic: F 
int    G1_int;                                    // Basic: G1 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    J_int_arr[10];                             // Basic: J 
int    K_int;                                     // Basic: K 
char*  L_str;                                     // Basic: L$ 
char*  M_str;                                     // Basic: M$ 
int    O_int;                                     // Basic: O 
char*  O_str;                                     // Basic: O$ 
char*  P_str;                                     // Basic: P$ 
int    S_int_arr[10];                             // Basic: S 
char*  S_str;                                     // Basic: S$ 
int    T_int;                                     // Basic: T 
int    T1_int;                                    // Basic: T1 
int    U_int;                                     // Basic: U 
int    X_int;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
int    Y_int;                                     // Basic: Y 
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
    // 01000 INPUT "HORIZONTAL";X
    // Start of Basic INPUT statement 01000
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"HORIZONTAL");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01000
    // 01010 INPUT "VERTICAL";Y
    // Start of Basic INPUT statement 01010
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"VERTICAL");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Y_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01010
    // 01020 INPUT "CENTERED";L$
    // Start of Basic INPUT statement 01020
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"CENTERED");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&L_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01020
    // 01030 G1=0
    G1_int = 0;
    // 01040 IF L$>"P" THEN G1=1
    if(strcmp(L_str,"P")>0) {
    }
    // 01050 INPUT "CHARACTER (TYPE 'ALL' IF YOU WANT CHARACTER BEING PRINTED)";M$
    // Start of Basic INPUT statement 01050
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"CHARACTER (TYPE 'ALL' IF YOU WANT CHARACTER BEING PRINTED)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&M_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01050
    // 01060 PRINT "STATEMENT";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"STATEMENT");fputs(buf,fh); };
    // 01070 INPUT A$
    // Start of Basic INPUT statement 01070
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01070
    // 01080 INPUT "SET PAGE";O$
    // Start of Basic INPUT statement 01080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"SET PAGE");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&O_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 A=ASC(LEFT$(A$,1))
    A_int = ASC(LEFT$(A_str,1));
    // 01100 REM
    // 01110 REM
    // 01120 FOR T=1 TO LEN(A$)
    for(T_int=1;T_int<=LEN(A_str);T_int++){
        // 01130 P$=MID$(A$,T,1)
        GLBpStr=MID$(A_str,T_int,1);
        P_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01140 FOR O=1 TO 50
        for(O_int=1;O_int<=50;O_int++){
            // 01150 READ S$,S(1),S(2),S(3),S(4),S(5),S(6),S(7)
            S_str = Get_Data_String();
            S_int_arr[1] = Get_Data_Int();
            S_int_arr[2] = Get_Data_Int();
            S_int_arr[3] = Get_Data_Int();
            S_int_arr[4] = Get_Data_Int();
            S_int_arr[5] = Get_Data_Int();
            S_int_arr[6] = Get_Data_Int();
            S_int_arr[7] = Get_Data_Int();
            // 01160 IF P$=" " THEN 1530
            if(strcmp(P_str," ")==0)goto Lbl_01530;
            // 01170 IF P$=S$ THEN 1190
            if(strcmp(P_str,S_str)==0)goto Lbl_01190;
            // 01180 NEXT O
            int dummy_1180=0; // Ignore this line.
        }; // End-For(O_int)

  Lbl_01190:
        // 01190 RESTORE
        Data_Index=0;
        RestoreData(0);
        // 01200 X$=M$
        GLBpStr=M_str;
        X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01210 IF M$="ALL" THEN X$=S$
        if(strcmp(M_str,"ALL")==0) {
        }
        // 01220 FOR U=1 TO 7
        for(U_int=1;U_int<=7;U_int++){
            // 01230 FOR K=8 TO 0 STEP -1
            for(K_int=8;K_int>=0;K_int+=-1){
                // 01240 IF 2^K<S(U) THEN 1270
                if(IPower(2,K_int)<S_int_arr[U_int])goto Lbl_01270;
                // 01250 J(9-K)=0
                J_int_arr[9-K_int] = 0;
                // 01260 GOTO 1290
                goto Lbl_01290;

  Lbl_01270:
                // 01270 S(U)=S(U)-2^K
                S_int_arr[U_int] = S_int_arr[U_int]-IPower(2,K_int);
                // 01280 IF S(U)=1 THEN 1550
                if(S_int_arr[U_int]==1)goto Lbl_01550;

  Lbl_01290:
                // 01290 NEXT K
                int dummy_1290=0; // Ignore this line.
            }; // End-For(K_int)

  Lbl_01300:
            // 01300 FOR T1=1 TO X
            for(T1_int=1;T1_int<=X_int;T1_int++){
                // 01310 PRINT TAB((63-4.5*Y)*G1/(LEN(X$))+1);
                { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,(63-4_int)*G1_int/(LEN(X_str))+1);fputs(buf,fh); };
                // 01320 FOR B=1 TO F(U)
                for(B_int=1;B_int<=F_int_arr[U_int];B_int++){
                    // 01330 IF J(B)=0 THEN 1380
                    if(J_int_arr[B_int]==0)goto Lbl_01380;
                    // 01340 FOR I=1 TO Y
                    for(I_int=1;I_int<=Y_int;I_int++){
                        // 01350 PRINT X$;
                        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,X_str);fputs(buf,fh); };
                        // 01360 NEXT I
                        int dummy_1360=0; // Ignore this line.
                    }; // End-For(I_int)
                    // 01370 GOTO 1430
                    goto Lbl_01430;

  Lbl_01380:
                    // 01380 FOR I=1 TO Y
                    for(I_int=1;I_int<=Y_int;I_int++){
                        // 01390 FOR I1=1 TO LEN(X$)
                        for(I1_int=1;I1_int<=LEN(X_str);I1_int++){
                            // 01400 PRINT " ";
                            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ");fputs(buf,fh); };
                            // 01410 NEXT I1
                            int dummy_1410=0; // Ignore this line.
                        }; // End-For(I1_int)
                        // 01420 NEXT I
                        int dummy_1420=0; // Ignore this line.
                    }; // End-For(I_int)

  Lbl_01430:
                    // 01430 NEXT B
                    int dummy_1430=0; // Ignore this line.
                }; // End-For(B_int)
                // 01440 PRINT
                { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
                // 01450 NEXT T1
                int dummy_1450=0; // Ignore this line.
            }; // End-For(T1_int)
            // 01460 NEXT U
            int dummy_1460=0; // Ignore this line.
        }; // End-For(U_int)
        // 01470 FOR H=1 TO 2*X
        for(H_int=1;H_int<=2*X_int;H_int++){
            // 01480 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 01490 NEXT H
            int dummy_1490=0; // Ignore this line.
        }; // End-For(H_int)

  Lbl_01500:
        // 01500 NEXT T
        int dummy_1500=0; // Ignore this line.
    }; // End-For(T_int)
    // 01510 REM
    // 01520 END

  Lbl_01530:
    // 01530 NEXT H
    int dummy_1530=0; // Ignore this line.
}; // End-For(H_int)
// 01540 GOTO 1500
goto Lbl_01500;

  Lbl_01550:
// 01550 GOTO 1300
goto Lbl_01300;
// 01560 DATA " ",0,0,0,0,0,0,0
// 01570 DATA "A",505,37,35,34,35,37,505
// 01580 DATA "G",125,131,258,258,290,163,101
// 01590 DATA "E",512,274,274,274,274,258,258
// 01600 DATA "T",2,2,2,512,2,2,2
// 01610 DATA "W",256,257,129,65,129,257,256
// 01620 DATA "L",512,257,257,257,257,257,257
// 01630 DATA "S",69,139,274,274,274,163,69
// 01640 DATA "O",125,131,258,258,258,131,125
// 01650 DATA "N",512,7,9,17,33,193,512
// 01660 DATA "F",512,18,18,18,18,2,2
// 01670 DATA "K",512,17,17,41,69,131,258
// 01680 DATA "B",512,274,274,274,274,274,239
// 01690 DATA "D",512,258,258,258,258,131,125
// 01700 DATA "H",512,17,17,17,17,17,512
// 01710 DATA "M",512,7,13,25,13,7,512
// 01720 DATA "?",5,3,2,354,18,11,5
// 01730 DATA "U",128,129,257,257,257,129,128
// 01740 DATA "R",512,18,18,50,82,146,271
// 01750 DATA "P",512,18,18,18,18,18,15
// 01760 DATA "Q",125,131,258,258,322,131,381
// 01770 DATA "Y",8,9,17,481,17,9,8
// 01780 DATA "V",64,65,129,257,129,65,64
// 01790 DATA "X",388,69,41,17,41,69,388
// 01800 DATA "Z",386,322,290,274,266,262,260
// 01810 DATA "I",258,258,258,512,258,258,258
// 01820 DATA "C",125,131,258,258,258,131,69
// 01830 DATA "J",65,129,257,257,257,129,128
// 01840 DATA "1",0,0,261,259,512,257,257
// 01850 DATA "2",261,387,322,290,274,267,261
// 01860 DATA "*",69,41,17,512,17,41,69
// 01870 DATA "3",66,130,258,274,266,150,100
// 01880 DATA "4",33,49,41,37,35,512,33
// 01890 DATA "5",160,274,274,274,274,274,226
// 01900 DATA "6",194,291,293,297,305,289,193
// 01910 DATA "7",258,130,66,34,18,10,8
// 01920 DATA "8",69,171,274,274,274,171,69
// 01930 DATA "9",263,138,74,42,26,10,7
// 01940 DATA "=",41,41,41,41,41,41,41
// 01950 DATA "!",1,1,1,384,1,1,1
// 01960 DATA "0",57,69,131,258,131,69,57
// 01970 DATA ".",1,1,129,449,129,1,1
// 01980 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
