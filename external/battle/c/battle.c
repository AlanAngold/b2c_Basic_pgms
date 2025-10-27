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
    0x5cda3354ab80 ---------A   00005 PRINT TAB(33);"BATTLE"
    0x5cda3354bf30 ---------A   00007 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cda335499e0 ---------A   00010 REM -- BATTLE WRITTEN BY RAY WESTERGARD  10/70
    0x5cda33549a20 ---------A   00020 REM COPYRIGHT 1971 BY THE REGENTS OF THE UNIV. OF CALIF.
    0x5cda33549830 ---------A   00030 REM PRODUCED AT THE LAWRENCE HALL OF SCIENCE, BERKELEY
    0x5cda3354a080 ---------A   00040 REM DIM F(6,6),H(6,6),A(4)<B(4),C(6),L(3)
    0x5cda335496d0 ---------A T 00050 FOR X=1 TO 6
    0x5cda33549670 ---------A   00051 FOR Y=1 TO 6
    0x5cda3354c220 ---------A   00052 F(X,Y)=0
    0x5cda33551a80 ---------A   00053 NEXT Y
    0x5cda33551b80 ---------A   00054 NEXT X
    0x5cda33551ea0 ---------A   00060 FOR I=1 TO 3
    0x5cda3354bae0 ---------A   00070 N=4-I
    0x5cda335525a0 ---------A   00080 FOR J=1 TO 2
    0x5cda33552c40 ---------A T 00090 A=INT(6*RND(1)+1)
    0x5cda335532d0 ---------A   00100 B=INT(6*RND(1)+1)
    0x5cda33553960 ---------A   00110 D=INT(4*RND(1)+1)
    0x5cda33553d70 ---------A   00120 IF F(A,B)>0 THEN 90
    0x5cda33554030 ---------A   00130 M=0
    0x5cda33554480 ---------A   00140 ON D GOTO 150,340,550,740
    0x5cda33554770 ---------A T 00150 B(1)=B
    0x5cda33554cf0 ---------A   00160 B(2)=7:B(3)=7
    0x5cda335550a0 ---------A   00170 FOR K=1 TO N
    0x5cda33555300 ---------A   00180 IF M>1 THEN 240
    0x5cda33555620 ---------A   00190 IF B(K)=6 THEN 230
    0x5cda33555c20 ---------A   00200 IF F(A,B(K)+1)>0 THEN 230
    0x5cda33556220 ---------A   00210 B(K+1)=B(K)+1
    0x5cda33556290 ---------A   00220 GOTO 280
    0x5cda335564b0 ---------A T 00230 M=2
    0x5cda33557010 ---------A T 00240 IF B(1)<B(2) AND B(1)<B(3) THEN Z=B(1)
    0x5cda33557ac0 ---------A   00242 IF B(2)<B(1) AND B(2)<B(3) THEN Z=B(2)
    0x5cda33558550 ---------A   00244 IF B(3)<B(1) AND B(3)<B(2) THEN Z=B(3)
    0x5cda33558790 ---------A   00250 IF Z=1 THEN 90
    0x5cda33558ec0 ---------A   00260 IF F(A,Z-1)>0 THEN 90
    0x5cda335593e0 ---------A   00270 B(K+1)=Z-1
    0x5cda33559510 ---------A T 00280 NEXT K
    0x5cda33559c30 ---------A   00290 F(A,B)=9-2*I-J
    0x5cda33559f20 ---------A   00300 FOR K=1 TO N
    0x5cda3355a6c0 ---------A   00310 F(A,B(K+1))=F(A,B)
    0x5cda3355a7f0 ---------A   00320 NEXT K
    0x5cda3355a870 ---------A   00330 GOTO 990
    0x5cda3355ab50 ---------A T 00340 A(1)=A
    0x5cda3355ae20 ---------A   00350 B(1)=B
    0x5cda3355b900 ---------A   00360 A(2)=0:A(3)=0:B(2)=0:B(3)=0
    0x5cda3355bbf0 ---------A   00370 FOR K=1 TO N
    0x5cda3355be30 ---------A   00380 IF M>1 THEN 460
    0x5cda3355c450 ---------A   00390 IF A(K)=1 OR B(K)=1 THEN 450
    0x5cda3355cc60 ---------A   00400 IF F(A(K)-1,B(K)-1)>0 THEN 450
    0x5cda3355de80 ---------A   00410 IF F(A(K)-1,B(K))>0 AND F(A(K)-1,B(K))=F(A(K),B(K)-1) THEN 450
    0x5cda3355e480 ---------A   00420 A(K+1)=A(K)-1
    0x5cda3355ea70 ---------A   00430 B(K+1)=B(K)-1
    0x5cda3355eae0 ---------A   00440 GOTO 530
    0x5cda3355ed00 ---------A T 00450 M=2
    0x5cda3355f860 ---------A T 00460 IF A(1)>A(2) AND A(1)>A(3) THEN Z1=A(1)
    0x5cda33560310 ---------A   00462 IF A(2)>A(1) AND A(2)>A(3) THEN Z1=A(2)
    0x5cda33560dc0 ---------A   00464 IF A(3)>A(1) AND A(3)>A(2) THEN Z1=A(3)
    0x5cda33561930 ---------A   00470 IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x5cda335623e0 ---------A   00474 IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x5cda33562e50 ---------A   00476 IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x5cda335632e0 ---------A   00480 IF Z1=6 OR Z2=6 THEN 90
    0x5cda33563920 ---------A   00490 IF F(Z1+1,Z2+1)>0 THEN 90
    0x5cda33564600 ---------A   00500 IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1+1,Z2) THEN 90
    0x5cda33564b20 ---------A   00510 A(K+1)=Z1+1
    0x5cda33565030 ---------A   00520 B(K+1)=Z2+1
    0x5cda33565160 ---------A T 00530 NEXT K
    0x5cda335655f0 ---------A   00540 GOTO 950
    0x5cda335658d0 ---------A T 00550 A(1)=A
    0x5cda33565e50 ---------A   00560 A(2)=7:A(3)=7
    0x5cda33566140 ---------A   00570 FOR K=1 TO N
    0x5cda335663a0 ---------A   00580 IF M>1 THEN 640
    0x5cda335666f0 ---------A   00590 IF A(K)=6 THEN 630
    0x5cda33566cf0 ---------A   00600 IF F(A(K)+1,B)>0 THEN 630
    0x5cda335672f0 ---------A   00610 A(K+1)=A(K)+1
    0x5cda33567360 ---------A   00620 GOTO 680
    0x5cda33567580 ---------A T 00630 M=2
    0x5cda33568020 ---------A T 00640 IF A(1)<A(2) AND A(1)<A(3) THEN Z=A(1)
    0x5cda33568ad0 ---------A   00642 IF A(2)<A(1) AND A(2)<A(3) THEN Z=A(2)
    0x5cda33569560 ---------A   00644 IF A(3)<A(1) AND A(3)<A(2) THEN Z=A(3)
    0x5cda335697d0 ---------A   00650 IF Z=1 THEN 90
    0x5cda33569cf0 ---------A   00660 IF F(Z-1,B)>0 THEN 90
    0x5cda3356a210 ---------A   00670 A(K+1)=Z-1
    0x5cda3356a340 ---------A T 00680 NEXT K
    0x5cda3356aa60 ---------A   00690 F(A,B)=9-2*I-J
    0x5cda3356ad50 ---------A   00700 FOR K=1 TO N
    0x5cda3356b4f0 ---------A   00710 F(A(K+1),B)=F(A,B)
    0x5cda3356b620 ---------A   00720 NEXT K
    0x5cda3356b6a0 ---------A   00730 GOTO 990
    0x5cda3356b980 ---------A T 00740 A(1)=A
    0x5cda3356bc70 ---------A   00750 B(1)=B
    0x5cda3356c1f0 ---------A   00760 A(2)=7:A(3)=7
    0x5cda3356c770 ---------A   00770 B(2)=0:B(3)=0
    0x5cda3356ca60 ---------A   00780 FOR K=1 TO N
    0x5cda3356ccd0 ---------A   00790 IF M>1 THEN 870
    0x5cda3356d320 ---------A   00800 IF A(K)=6 OR B(K)=1 THEN 860
    0x5cda3356db30 ---------A   00810 IF F(A(K)+1,B(K)-1)>0 THEN 860
    0x5cda3356ed50 ---------A   00820 IF F(A(K)+1,B(K))>0 AND F(A(K)+1,B(K))=F(A(K),B(K)-1) THEN 860
    0x5cda3356f350 ---------A   00830 A(K+1)=A(K)+1
    0x5cda3356f940 ---------A   00840 B(K+1)=B(K)-1
    0x5cda3356f9b0 ---------A   00850 GOTO 940
    0x5cda3356fbd0 ---------A T 00860 M=2
    0x5cda33570670 ---------A T 00870 IF A(1)<A(2) AND A(1)<A(3) THEN Z1=A(1)
    0x5cda33571120 ---------A   00872 IF A(2)<A(1) AND A(2)<A(3) THEN Z1=A(2)
    0x5cda33571bd0 ---------A   00874 IF A(3)<A(1) AND A(3)<A(2) THEN Z1=A(3)
    0x5cda33572680 ---------A   00880 IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x5cda33573130 ---------A   00882 IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x5cda33573bd0 ---------A   00884 IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x5cda33574060 ---------A   00890 IF Z1=1 OR Z2=6 THEN 90
    0x5cda335746a0 ---------A   00900 IF F(Z1-1,Z2+1)>0 THEN 90
    0x5cda33575380 ---------A   00910 IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1-1,Z2) THEN 90
    0x5cda335758a0 ---------A   00920 A(K+1)=Z1-1
    0x5cda33575db0 ---------A   00930 B(K+1)=Z2+1
    0x5cda33575ee0 ---------A T 00940 NEXT K
    0x5cda33576600 ---------A T 00950 F(A,B)=9-2*I-J
    0x5cda33576900 ---------A   00960 FOR K=1 TO N
    0x5cda33577280 ---------A   00970 F(A(K+1),B(K+1))=F(A,B)
    0x5cda335773b0 ---------A   00980 NEXT K
    0x5cda335774f0 ---------A T 00990 NEXT J
    0x5cda33577630 ---------A   01000 NEXT I
    0x5cda335776e0 ---------A   01010 PRINT
    0x5cda33577870 ---------A   01020 PRINT "THE FOLLOWING CODE OF THE BAD GUYS' FLEET DISPOSITION"
    0x5cda335779d0 ---------A   01030 PRINT "HAS BEEN CAPTURED BUT NOT DECODED:"
    0x5cda33577a40 ---------A   01040 PRINT
    0x5cda33577d10 ---------A   01050 FOR I=1 TO 6
    0x5cda33577ff0 ---------A   01051 FOR J=1 TO 6
    0x5cda33578670 ---------A   01052 H(I,J)=F(J,I)
    0x5cda335787a0 ---------A   01053 NEXT J
    0x5cda335788e0 ---------A   01054 NEXT I
    0x5cda33578bc0 ---------A   01060 FOR I=1 TO 6
    0x5cda33578ea0 ---------A   01061 FOR J=1 TO 6
    0x5cda335799f0 ---------A   01062 PRINT H(I,J);
    0x5cda33579b20 ---------A   01063 NEXT J
    0x5cda33579ba0 ---------A   01064 PRINT
    0x5cda33579cd0 ---------A   01065 NEXT I
    0x5cda33579d70 ---------A   01070 PRINT
    0x5cda33579ef0 ---------A   01080 PRINT "DE-CODE IT AND USE IT IF YOU CAN"
    0x5cda3357a060 ---------A   01090 PRINT "BUT KEEP THE DE-CODING METHOD A SECRET."
    0x5cda3357a0d0 ---------A   01100 PRINT
    0x5cda3357a3a0 ---------A   01110 FOR I=1 TO 6
    0x5cda3357a680 ---------A   01111 FOR J=1 TO 6
    0x5cda3357aa60 ---------A   01112 H(I,J)=0
    0x5cda3357ab90 ---------A   01113 NEXT J
    0x5cda3357acd0 ---------A   01114 NEXT I
    0x5cda3357afb0 ---------A   01120 FOR I=1 TO 3
    0x5cda3357b370 ---------A   01121 L(I)=0
    0x5cda3357b4a0 ---------A   01122 NEXT I
    0x5cda3357baf0 ---------A   01130 C(1)=2:C(2)=2
    0x5cda3357c070 ---------A   01140 C(3)=1:C(4)=1
    0x5cda3357c5f0 ---------A   01150 C(5)=0:C(6)=0
    0x5cda3357cab0 ---------A   01160 S=0:H=0
    0x5cda3357cc00 ---------A   01170 PRINT "START GAME"
    0x5cda3357ce50 ---------A T 01180 INPUT X,Y
    0x5cda3357d6f0 ---------A   01190 IF X<1 OR X>6 OR INT(X)<>ABS(X) THEN 1210
    0x5cda3357df80 ---------A   01200 IF Y>0 AND Y<7 AND INT(Y)=ABS(Y) THEN 1230
    0x5cda3357e0f0 ---------A T 01210 PRINT "INVALID INPUT.  TRY AGAIN."
    0x5cda3357e160 ---------A   01220 GOTO 1180
    0x5cda3357e540 ---------A T 01230 R=7-Y
    0x5cda3357e780 ---------A   01240 C=X
    0x5cda3357eb90 ---------A   01250 IF F(R,C)>0 THEN 1290
    0x5cda3357eee0 ---------A   01260 S=S+1
    0x5cda3357f030 ---------A   01270 PRINT "SPLASH!  TRY AGAIN."
    0x5cda3357f0b0 ---------A   01280 GOTO 1180
    0x5cda3357f5c0 ---------A T 01290 IF C(F(R,C))<4 THEN 1340
    0x5cda3357f760 ---------A   01300 PRINT "THERE USED TO BE A SHIP AT THAT POINT, BUT YOU SUNK IT."
    0x5cda3357f8b0 ---------A   01310 PRINT "SPLASH!  TRY AGAIN."
    0x5cda3357fbe0 ---------A   01320 S=S+1
    0x5cda3357fc60 ---------A   01330 GOTO 1180
    0x5cda33580060 ---------A T 01340 IF H(R,C)>0 THEN 1420
    0x5cda335803a0 ---------A   01350 H=H+1
    0x5cda33580970 ---------A   01360 H(R,C)=F(R,C)
    0x5cda33580da0 ---------A   01370 PRINT "A DIRECT HIT ON SHIP NUMBER";F(R,C)
    0x5cda33581620 ---------A   01380 C(F(R,C))=C(F(R,C))+1
    0x5cda33581b10 ---------A   01390 IF C(F(R,C))>=4 THEN 1470
    0x5cda33581c70 ---------A   01400 PRINT "TRY AGAIN."
    0x5cda33581d10 ---------A   01410 GOTO 1180
    0x5cda33582150 ---------A T 01420 PRINT "YOU ALREADY PUT A HOLE IN SHIP NUMBER";F(R,C);
    0x5cda335822b0 ---------A   01430 PRINT "AT THAT POINT."
    0x5cda33582400 ---------A   01440 PRINT "SPLASH!  TRY AGAIN."
    0x5cda33582730 ---------A   01450 S=S+1
    0x5cda335827c0 ---------A   01460 GOTO 1180
    0x5cda33583890 ---------A T 01470 L((INT(F(R,C)-1)/2)+1)=L((INT(F(R,C)-1)/2)+1)+1
    0x5cda33583a20 ---------A   01480 PRINT "AND YOU SUNK IT.  HURRAH FOR THE GOOD GUYS."
    0x5cda33583ba0 ---------A   01490 PRINT "SO FAR, THE BAD GUYS HAVE LOST"
    0x5cda335841a0 ---------A   01500 PRINT L(1);"DESTROYER(S),";L(2);"CRUISER(S), AND";
    0x5cda335844d0 ---------A   01510 PRINT L(3);"AIRCRAFT CARRIER(S)."
    0x5cda33584860 ---------A   01520 PRINT "YOUR CURRENT SPLASH/HIT RATIO IS";S/H
    0x5cda33584f70 ---------A   01530 IF (L(1)+L(2)+L(3))<6 THEN 1180
    0x5cda33585020 ---------A   01540 PRINT
    0x5cda335851b0 ---------A   01550 PRINT "YOU HAVE TOTALLY WIPED OUT THE BAD GUYS' FLEET"
    0x5cda33585530 ---------A   01560 PRINT "WITH A FINAL SPLASH/HIT RATIO OF";S/H
    0x5cda335858d0 ---------A   01570 IF S/H>0 THEN 1590
    0x5cda33585a50 ---------A   01580 PRINT "CONGRATULATIONS -- A DIRECT HIT EVERY TIME."
    0x5cda33585ae0 ---------A T 01590 PRINT
    0x5cda33585c40 ---------A   01600 PRINT "****************************"
    0x5cda33585cb0 ---------A   01610 PRINT
    0x5cda33585d20 ---------A   01620 GOTO 50
    0x5cda33585d60 ---------A   01630 END
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
   A) 0x5cda3354ab80 (00005)   0x5cda3354ab80 (00005)   0x5cda33585d60 (01630)   0x5cda33585d60 (01630)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02960 - 10000    7050 

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
    0x5cda3354ab80 ---------A   01000 PRINT TAB(33);"BATTLE"
    0x5cda3354bf30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cda335499e0 ---------A   01020 REM -- BATTLE WRITTEN BY RAY WESTERGARD  1020/70
    0x5cda33549a20 ---------A   01030 REM COPYRIGHT 1971 BY THE REGENTS OF THE UNIV. OF CALIF.
    0x5cda33549830 ---------A   01040 REM PRODUCED AT THE LAWRENCE HALL OF SCIENCE, BERKELEY
    0x5cda3354a080 ---------A   01050 REM DIM F(6,6),H(6,6),A(4)<B(4),C(6),L(3)
    0x5cda335496d0 ---------A T 01060 FOR X=1 TO 6
    0x5cda33549670 ---------A   01070 FOR Y=1 TO 6
    0x5cda3354c220 ---------A   01080 F(X,Y)=0
    0x5cda33551a80 ---------A   01090 NEXT Y
    0x5cda33551b80 ---------A   01100 NEXT X
    0x5cda33551ea0 ---------A   01110 FOR I=1 TO 3
    0x5cda3354bae0 ---------A   01120 N=4-I
    0x5cda335525a0 ---------A   01130 FOR J=1 TO 2
    0x5cda33552c40 ---------A T 01140 A=INT(6*RND(1)+1)
    0x5cda335532d0 ---------A   01150 B=INT(6*RND(1)+1)
    0x5cda33553960 ---------A   01160 D=INT(4*RND(1)+1)
    0x5cda33553d70 ---------A   01170 IF F(A,B)>0 THEN 1140
    0x5cda33554030 ---------A   01180 M=0
    0x5cda33554480 ---------A   01190 ON D GOTO 1200,1410,1660,1870
    0x5cda33554770 ---------A T 01200 B(1)=B
    0x5cda33554cf0 ---------A   01210 B(2)=7:B(3)=7
    0x5cda335550a0 ---------A   01220 FOR K=1 TO N
    0x5cda33555300 ---------A   01230 IF M>1 THEN 1290
    0x5cda33555620 ---------A   01240 IF B(K)=6 THEN 1280
    0x5cda33555c20 ---------A   01250 IF F(A,B(K)+1)>0 THEN 1280
    0x5cda33556220 ---------A   01260 B(K+1)=B(K)+1
    0x5cda33556290 ---------A   01270 GOTO 1350
    0x5cda335564b0 ---------A T 01280 M=2
    0x5cda33557010 ---------A T 01290 IF B(1)<B(2) AND B(1)<B(3) THEN Z=B(1)
    0x5cda33557ac0 ---------A   01300 IF B(2)<B(1) AND B(2)<B(3) THEN Z=B(2)
    0x5cda33558550 ---------A   01310 IF B(3)<B(1) AND B(3)<B(2) THEN Z=B(3)
    0x5cda33558790 ---------A   01320 IF Z=1 THEN 1140
    0x5cda33558ec0 ---------A   01330 IF F(A,Z-1)>0 THEN 1140
    0x5cda335593e0 ---------A   01340 B(K+1)=Z-1
    0x5cda33559510 ---------A T 01350 NEXT K
    0x5cda33559c30 ---------A   01360 F(A,B)=9-2*I-J
    0x5cda33559f20 ---------A   01370 FOR K=1 TO N
    0x5cda3355a6c0 ---------A   01380 F(A,B(K+1))=F(A,B)
    0x5cda3355a7f0 ---------A   01390 NEXT K
    0x5cda3355a870 ---------A   01400 GOTO 2160
    0x5cda3355ab50 ---------A T 01410 A(1)=A
    0x5cda3355ae20 ---------A   01420 B(1)=B
    0x5cda3355b900 ---------A   01430 A(2)=0:A(3)=0:B(2)=0:B(3)=0
    0x5cda3355bbf0 ---------A   01440 FOR K=1 TO N
    0x5cda3355be30 ---------A   01450 IF M>1 THEN 1530
    0x5cda3355c450 ---------A   01460 IF A(K)=1 OR B(K)=1 THEN 1520
    0x5cda3355cc60 ---------A   01470 IF F(A(K)-1,B(K)-1)>0 THEN 1520
    0x5cda3355de80 ---------A   01480 IF F(A(K)-1,B(K))>0 AND F(A(K)-1,B(K))=F(A(K),B(K)-1) THEN 1520
    0x5cda3355e480 ---------A   01490 A(K+1)=A(K)-1
    0x5cda3355ea70 ---------A   01500 B(K+1)=B(K)-1
    0x5cda3355eae0 ---------A   01510 GOTO 1640
    0x5cda3355ed00 ---------A T 01520 M=2
    0x5cda3355f860 ---------A T 01530 IF A(1)>A(2) AND A(1)>A(3) THEN Z1=A(1)
    0x5cda33560310 ---------A   01540 IF A(2)>A(1) AND A(2)>A(3) THEN Z1=A(2)
    0x5cda33560dc0 ---------A   01550 IF A(3)>A(1) AND A(3)>A(2) THEN Z1=A(3)
    0x5cda33561930 ---------A   01560 IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x5cda335623e0 ---------A   01570 IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x5cda33562e50 ---------A   01580 IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x5cda335632e0 ---------A   01590 IF Z1=6 OR Z2=6 THEN 1140
    0x5cda33563920 ---------A   01600 IF F(Z1+1,Z2+1)>0 THEN 1140
    0x5cda33564600 ---------A   01610 IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1+1,Z2) THEN 1140
    0x5cda33564b20 ---------A   01620 A(K+1)=Z1+1
    0x5cda33565030 ---------A   01630 B(K+1)=Z2+1
    0x5cda33565160 ---------A T 01640 NEXT K
    0x5cda335655f0 ---------A   01650 GOTO 2120
    0x5cda335658d0 ---------A T 01660 A(1)=A
    0x5cda33565e50 ---------A   01670 A(2)=7:A(3)=7
    0x5cda33566140 ---------A   01680 FOR K=1 TO N
    0x5cda335663a0 ---------A   01690 IF M>1 THEN 1750
    0x5cda335666f0 ---------A   01700 IF A(K)=6 THEN 1740
    0x5cda33566cf0 ---------A   01710 IF F(A(K)+1,B)>0 THEN 1740
    0x5cda335672f0 ---------A   01720 A(K+1)=A(K)+1
    0x5cda33567360 ---------A   01730 GOTO 1810
    0x5cda33567580 ---------A T 01740 M=2
    0x5cda33568020 ---------A T 01750 IF A(1)<A(2) AND A(1)<A(3) THEN Z=A(1)
    0x5cda33568ad0 ---------A   01760 IF A(2)<A(1) AND A(2)<A(3) THEN Z=A(2)
    0x5cda33569560 ---------A   01770 IF A(3)<A(1) AND A(3)<A(2) THEN Z=A(3)
    0x5cda335697d0 ---------A   01780 IF Z=1 THEN 1140
    0x5cda33569cf0 ---------A   01790 IF F(Z-1,B)>0 THEN 1140
    0x5cda3356a210 ---------A   01800 A(K+1)=Z-1
    0x5cda3356a340 ---------A T 01810 NEXT K
    0x5cda3356aa60 ---------A   01820 F(A,B)=9-2*I-J
    0x5cda3356ad50 ---------A   01830 FOR K=1 TO N
    0x5cda3356b4f0 ---------A   01840 F(A(K+1),B)=F(A,B)
    0x5cda3356b620 ---------A   01850 NEXT K
    0x5cda3356b6a0 ---------A   01860 GOTO 2160
    0x5cda3356b980 ---------A T 01870 A(1)=A
    0x5cda3356bc70 ---------A   01880 B(1)=B
    0x5cda3356c1f0 ---------A   01890 A(2)=7:A(3)=7
    0x5cda3356c770 ---------A   01900 B(2)=0:B(3)=0
    0x5cda3356ca60 ---------A   01910 FOR K=1 TO N
    0x5cda3356ccd0 ---------A   01920 IF M>1 THEN 2000
    0x5cda3356d320 ---------A   01930 IF A(K)=6 OR B(K)=1 THEN 1990
    0x5cda3356db30 ---------A   01940 IF F(A(K)+1,B(K)-1)>0 THEN 1990
    0x5cda3356ed50 ---------A   01950 IF F(A(K)+1,B(K))>0 AND F(A(K)+1,B(K))=F(A(K),B(K)-1) THEN 1990
    0x5cda3356f350 ---------A   01960 A(K+1)=A(K)+1
    0x5cda3356f940 ---------A   01970 B(K+1)=B(K)-1
    0x5cda3356f9b0 ---------A   01980 GOTO 2110
    0x5cda3356fbd0 ---------A T 01990 M=2
    0x5cda33570670 ---------A T 02000 IF A(1)<A(2) AND A(1)<A(3) THEN Z1=A(1)
    0x5cda33571120 ---------A   02010 IF A(2)<A(1) AND A(2)<A(3) THEN Z1=A(2)
    0x5cda33571bd0 ---------A   02020 IF A(3)<A(1) AND A(3)<A(2) THEN Z1=A(3)
    0x5cda33572680 ---------A   02030 IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
    0x5cda33573130 ---------A   02040 IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
    0x5cda33573bd0 ---------A   02050 IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
    0x5cda33574060 ---------A   02060 IF Z1=1 OR Z2=6 THEN 1140
    0x5cda335746a0 ---------A   02070 IF F(Z1-1,Z2+1)>0 THEN 1140
    0x5cda33575380 ---------A   02080 IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1-1,Z2) THEN 1140
    0x5cda335758a0 ---------A   02090 A(K+1)=Z1-1
    0x5cda33575db0 ---------A   02100 B(K+1)=Z2+1
    0x5cda33575ee0 ---------A T 02110 NEXT K
    0x5cda33576600 ---------A T 02120 F(A,B)=9-2*I-J
    0x5cda33576900 ---------A   02130 FOR K=1 TO N
    0x5cda33577280 ---------A   02140 F(A(K+1),B(K+1))=F(A,B)
    0x5cda335773b0 ---------A   02150 NEXT K
    0x5cda335774f0 ---------A T 02160 NEXT J
    0x5cda33577630 ---------A   02170 NEXT I
    0x5cda335776e0 ---------A   02180 PRINT
    0x5cda33577870 ---------A   02190 PRINT "THE FOLLOWING CODE OF THE BAD GUYS' FLEET DISPOSITION"
    0x5cda335779d0 ---------A   02200 PRINT "HAS BEEN CAPTURED BUT NOT DECODED:"
    0x5cda33577a40 ---------A   02210 PRINT
    0x5cda33577d10 ---------A   02220 FOR I=1 TO 6
    0x5cda33577ff0 ---------A   02230 FOR J=1 TO 6
    0x5cda33578670 ---------A   02240 H(I,J)=F(J,I)
    0x5cda335787a0 ---------A   02250 NEXT J
    0x5cda335788e0 ---------A   02260 NEXT I
    0x5cda33578bc0 ---------A   02270 FOR I=1 TO 6
    0x5cda33578ea0 ---------A   02280 FOR J=1 TO 6
    0x5cda335799f0 ---------A   02290 PRINT H(I,J);
    0x5cda33579b20 ---------A   02300 NEXT J
    0x5cda33579ba0 ---------A   02310 PRINT
    0x5cda33579cd0 ---------A   02320 NEXT I
    0x5cda33579d70 ---------A   02330 PRINT
    0x5cda33579ef0 ---------A   02340 PRINT "DE-CODE IT AND USE IT IF YOU CAN"
    0x5cda3357a060 ---------A   02350 PRINT "BUT KEEP THE DE-CODING METHOD A SECRET."
    0x5cda3357a0d0 ---------A   02360 PRINT
    0x5cda3357a3a0 ---------A   02370 FOR I=1 TO 6
    0x5cda3357a680 ---------A   02380 FOR J=1 TO 6
    0x5cda3357aa60 ---------A   02390 H(I,J)=0
    0x5cda3357ab90 ---------A   02400 NEXT J
    0x5cda3357acd0 ---------A   02410 NEXT I
    0x5cda3357afb0 ---------A   02420 FOR I=1 TO 3
    0x5cda3357b370 ---------A   02430 L(I)=0
    0x5cda3357b4a0 ---------A   02440 NEXT I
    0x5cda3357baf0 ---------A   02450 C(1)=2:C(2)=2
    0x5cda3357c070 ---------A   02460 C(3)=1:C(4)=1
    0x5cda3357c5f0 ---------A   02470 C(5)=0:C(6)=0
    0x5cda3357cab0 ---------A   02480 S=0:H=0
    0x5cda3357cc00 ---------A   02490 PRINT "START GAME"
    0x5cda3357ce50 ---------A T 02500 INPUT X,Y
    0x5cda3357d6f0 ---------A   02510 IF X<1 OR X>6 OR INT(X)<>ABS(X) THEN 2530
    0x5cda3357df80 ---------A   02520 IF Y>0 AND Y<7 AND INT(Y)=ABS(Y) THEN 2550
    0x5cda3357e0f0 ---------A T 02530 PRINT "INVALID INPUT.  TRY AGAIN."
    0x5cda3357e160 ---------A   02540 GOTO 2500
    0x5cda3357e540 ---------A T 02550 R=7-Y
    0x5cda3357e780 ---------A   02560 C=X
    0x5cda3357eb90 ---------A   02570 IF F(R,C)>0 THEN 2610
    0x5cda3357eee0 ---------A   02580 S=S+1
    0x5cda3357f030 ---------A   02590 PRINT "SPLASH!  TRY AGAIN."
    0x5cda3357f0b0 ---------A   02600 GOTO 2500
    0x5cda3357f5c0 ---------A T 02610 IF C(F(R,C))<4 THEN 2660
    0x5cda3357f760 ---------A   02620 PRINT "THERE USED TO BE A SHIP AT THAT POINT, BUT YOU SUNK IT."
    0x5cda3357f8b0 ---------A   02630 PRINT "SPLASH!  TRY AGAIN."
    0x5cda3357fbe0 ---------A   02640 S=S+1
    0x5cda3357fc60 ---------A   02650 GOTO 2500
    0x5cda33580060 ---------A T 02660 IF H(R,C)>0 THEN 2740
    0x5cda335803a0 ---------A   02670 H=H+1
    0x5cda33580970 ---------A   02680 H(R,C)=F(R,C)
    0x5cda33580da0 ---------A   02690 PRINT "A DIRECT HIT ON SHIP NUMBER";F(R,C)
    0x5cda33581620 ---------A   02700 C(F(R,C))=C(F(R,C))+1
    0x5cda33581b10 ---------A   02710 IF C(F(R,C))>=4 THEN 2790
    0x5cda33581c70 ---------A   02720 PRINT "TRY AGAIN."
    0x5cda33581d10 ---------A   02730 GOTO 2500
    0x5cda33582150 ---------A T 02740 PRINT "YOU ALREADY PUT A HOLE IN SHIP NUMBER";F(R,C);
    0x5cda335822b0 ---------A   02750 PRINT "AT THAT POINT."
    0x5cda33582400 ---------A   02760 PRINT "SPLASH!  TRY AGAIN."
    0x5cda33582730 ---------A   02770 S=S+1
    0x5cda335827c0 ---------A   02780 GOTO 2500
    0x5cda33583890 ---------A T 02790 L((INT(F(R,C)-1)/2)+1)=L((INT(F(R,C)-1)/2)+1)+1
    0x5cda33583a20 ---------A   02800 PRINT "AND YOU SUNK IT.  HURRAH FOR THE GOOD GUYS."
    0x5cda33583ba0 ---------A   02810 PRINT "SO FAR, THE BAD GUYS HAVE LOST"
    0x5cda335841a0 ---------A   02820 PRINT L(1);"DESTROYER(S),";L(2);"CRUISER(S), AND";
    0x5cda335844d0 ---------A   02830 PRINT L(3);"AIRCRAFT CARRIER(S)."
    0x5cda33584860 ---------A   02840 PRINT "YOUR CURRENT SPLASH/HIT RATIO IS";S/H
    0x5cda33584f70 ---------A   02850 IF (L(1)+L(2)+L(3))<6 THEN 2500
    0x5cda33585020 ---------A   02860 PRINT
    0x5cda335851b0 ---------A   02870 PRINT "YOU HAVE TOTALLY WIPED OUT THE BAD GUYS' FLEET"
    0x5cda33585530 ---------A   02880 PRINT "WITH A FINAL SPLASH/HIT RATIO OF";S/H
    0x5cda335858d0 ---------A   02890 IF S/H>0 THEN 2910
    0x5cda33585a50 ---------A   02900 PRINT "CONGRATULATIONS -- A DIRECT HIT EVERY TIME."
    0x5cda33585ae0 ---------A T 02910 PRINT
    0x5cda33585c40 ---------A   02920 PRINT "****************************"
    0x5cda33585cb0 ---------A   02930 PRINT
    0x5cda33585d20 ---------A   02940 GOTO 1060
    0x5cda33585d60 ---------A   02950 END
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
