/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/horses/basic/horses.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x560b12ed4e00 ---------A   01010 PRINT "BASIC LIBRARY--'HORSES'--18-JUL-70"
    0x560b12ed4ed0 ---------A   01020 REM  *  *  *  *  *  *  *    MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *  *
    0x560b12ed4f50 ---------A   01030 REM
    0x560b12ed5020 ---------A   01040 RANDOM
    0x560b12ed5140 ---------A   01050 PRINT"WELCOME TO DATALINE SYSTEMS RACETRACK"
    0x560b12ed51e0 ---------A   01060 PRINT
    0x560b12ed5340 ---------A   01070 PRINT "DO YOU WANT DIRECTIONS";
    0x560b12ed54a0 ---------A   01080 INPUT X$
    0x560b12ed56b0 ---------A   01090 IF X$="NO" THEN1150
    0x560b12ed5890 ---------A   01100 PRINT"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU"
    0x560b12ed5a10 ---------A   01110 PRINT"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE."
    0x560b12ed5b80 ---------A   01120 PRINT "DURING THE RACE , A HORSE WILL BE SHOWN BY ITS"
    0x560b12ed9f10 ---------A   01130 PRINT"NUMBER.THE HORSES RACE DOWN THE PAPER!"
    0x560b12ed9f90 ---------A   01140 PRINT
    0x560b12eda0e0 ---------A T 01150 PRINT "HOW MANY WANT TO BET";
    0x560b12eda240 ---------A   01160 INPUT C
    0x560b12eda390 ---------A   01170 PRINT "WHEN ? APPEARS,TYPE NAME"
    0x560b12eda6f0 ---------A   01180 FOR A=1 TO C
    0x560b12eda8b0 ---------A   01190 INPUT W$(A)
    0x560b12eda970 ---------A   01200 NEXT A
    0x560b12edaa00 ---------A   01210 PRINT
    0x560b12edadd0 ---------A   01220 PRINT"HORSE"," ","NUMBER","ODDS"
    0x560b12edae40 ---------A   01230 PRINT
    0x560b12edb1f0 ---------A   01240 LET S(M(I))=0
    0x560b12edb3e0 ---------A   01250 LET R=0
    0x560b12edb600 ---------A   01260 FOR A=1 TO 8
    0x560b12edbb40 ---------A   01270 LET D(A)=INT(10*RND+1)
    0x560b12edbbf0 ---------A   01280 NEXT A
    0x560b12edbe10 ---------A   01290 FOR A=1TO 8
    0x560b12edc050 ---------A   01300 LET R=R+D(A)
    0x560b12edc100 ---------A   01310 NEXT A
    0x560b12edc3d0 ---------A   01320 LET V$(1)="JOE MAW"
    0x560b12edc610 ---------A   01330 LET V$(2)="L.B.J."
    0x560b12edca60 ---------A   01340 LET V$(3)="MR.WASHBURN"
    0x560b12edcc90 ---------A   01350 LET V$(4)="MISS KAREN"
    0x560b12edcec0 ---------A   01360 LET V$(5)="JOLLY"
    0x560b12edd100 ---------A   01370 LET V$(6)="FOR Q."
    0x560b12edd340 ---------A   01380 LET V$(7)="JELLY DO NOT"
    0x560b12edd570 ---------A   01390 LET V$(8)="ACID ROCK"
    0x560b12edd810 ---------A   01400 FOR N=1 TO8
    0x560b12eddd10 ---------A   01410 PRINT V$(N)," ",N,R/D(N);":1"
    0x560b12edddc0 ---------A   01420 NEXT N
    0x560b12eddf70 ---------A   01430 PRINT"--------------------------------------------------"
    0x560b12ede0b0 ---------A   01440 PRINT "PLACE YOUR BETS...HORSE # THEN AMOUNT"
    0x560b12ede300 ---------A   01450 FOR J=1 TO C
    0x560b12ede460 ---------A T 01460 PRINT W$(J);
    0x560b12ede760 ---------A   01470 INPUT Q(J),P(J)
    0x560b12ede990 ---------A   01480 IF P(J)<1 THEN 1500
    0x560b12edebc0 ---------A   01490 IF P(J)<100000 THEN 1520
    0x560b12eded00 ---------A T 01500 PRINT"  YOU CAN'T DO THAT!"
    0x560b12eded70 ---------A   01510 GOTO 1460
    0x560b12edee10 ---------A T 01520 NEXT J
    0x560b12edeea0 ---------A   01530 PRINT
    0x560b12edefe0 ---------A   01540 PRINT"1 2 3 4 5 6 7 8"
    0x560b12edf130 ---------A T 01550 PRINT"XXXXSTARTXXXX";
    0x560b12edf300 ---------A   01560 FOR I=1 TON
    0x560b12edf4c0 ---------A   01570 LET M=I
    0x560b12edf660 ---------A   01580 LET M(I)=M
    0x560b12edfb00 ---------A   01590 LET Y(M(I))=INT(100*RND+1)
    0x560b12edfd80 ---------A   01600 IF Y(M(I))<10 THEN1690
    0x560b12ee0190 ---------A   01610 LET S=INT(R/D(I)+.5)
    0x560b12ee04b0 ---------A   01620 IF Y(M(I))<S+17 THEN 1710
    0x560b12ee07e0 ---------A   01630 IF Y(M(I))<S+37 THEN 1730
    0x560b12ee0b10 ---------A   01640 IF Y(M(I))<S+57 THEN1750
    0x560b12ee0e40 ---------A   01650 IF Y(M(I))<77+S THEN1770
    0x560b12ee1570 ---------A   01660 IF Y(M(I))<S+92 THEN1790
    0x560b12ee17b0 ---------A   01670 LET Y(M(I))=7
    0x560b12ee1820 ---------A   01680 GOTO 1800
    0x560b12ee1a40 ---------A T 01690 LET Y(M(I))=1
    0x560b12ee1ab0 ---------A   01700 GOTO 1800
    0x560b12ee1cd0 ---------A T 01710 LET Y(M(I))=2
    0x560b12ee1d40 ---------A   01720 GOTO 1800
    0x560b12ee1f60 ---------A T 01730 LET Y(M(I))=3
    0x560b12ee1fd0 ---------A   01740 GOTO 1800
    0x560b12ee21f0 ---------A T 01750 LET Y(M(I))=4
    0x560b12ee2260 ---------A   01760 GOTO 1800
    0x560b12ee2480 ---------A T 01770 LET Y(M(I))=5
    0x560b12ee24f0 ---------A   01780 GOTO 1800
    0x560b12ee2710 ---------A T 01790 LET Y(M(I))=6
    0x560b12ee27c0 ---------A T 01800 NEXTI
    0x560b12ee2900 ---------A   01810 LET M=I
    0x560b12ee2b20 ---------A   01820 FOR I=1TO8
    0x560b12ee2f40 ---------A   01830 LET S(M(I))=S(M(I))+Y(M(I))
    0x560b12ee2ff0 ---------A   01840 NEXTI
    0x560b12ee3170 ---------A   01850 LET I=1
    0x560b12ee3400 ---------A   01860 FOR L=1 TO8
    0x560b12ee36d0 ---------A   01870 FORI=1TO 8-L
    0x560b12ee3ab0 ---------A   01880 IF S(M(I))<S(M(I+1))THEN 1920
    0x560b12ee3cd0 ---------A   01890 LET H=M(I)
    0x560b12ee3fa0 ---------A   01900 LET M(I)=M(I+1)
    0x560b12ee4210 ---------A   01910 LET M(I+1)=H
    0x560b12ee42c0 ---------A T 01920 NEXT I
    0x560b12ee4380 ---------A   01930 NEXT L
    0x560b12ee4640 ---------A   01940 LET T=S(M(8))
    0x560b12ee4860 ---------A   01950 FOR I=1 TO8
    0x560b12ee4d20 ---------A   01960 LET B=S(M(I))-S(M(I-1))
    0x560b12ee4ed0 ---------A   01970 IF B=0 THEN 2020
    0x560b12ee50b0 ---------A   01980 FOR A=1 TO B
    0x560b12ee5140 ---------A   01990 PRINT
    0x560b12ee53b0 ---------A   02000 IF S(M(I))>27 THEN2070
    0x560b12ee5470 ---------A   02010 NEXT A
    0x560b12ee55d0 ---------A T 02020 PRINT M(I);
    0x560b12ee5680 ---------A   02030 NEXT I
    0x560b12ee5940 ---------A   02040 FOR A=1 TO 28-T
    0x560b12ee59c0 ---------A   02050 PRINT
    0x560b12ee5a70 ---------A   02060 NEXT A
    0x560b12ee5bc0 ---------A T 02070 PRINT"XXXXFINISHXXXX"
    0x560b12ee5d80 ---------A   02080 IF T<28 THEN 1550
    0x560b12ee5ec0 ---------A   02090 PRINT"**************"
    0x560b12ee6010 ---------A   02100 PRINT"WINNER IS ";
    0x560b12ee62c0 ---------A   02110 FOR I=8 TO 1STEP-1
    0x560b12ee64e0 ---------A   02120 LET F=M(I)
    0x560b12ee6560 ---------A   02130 PRINT
    0x560b12ee67f0 ---------A   02140 PRINT "HORSE NO." F, V$(F)
    0x560b12ee68a0 ---------A   02150 NEXT I
    0x560b12ee6a90 ---------A   02160 FOR J=1 TO C
    0x560b12ee6d10 ---------A   02170 IF Q(J)<>M(8) THEN 2200
    0x560b12ee6ec0 ---------A   02180 LET N=Q(J)
    0x560b12ee7390 ---------A   02190 PRINT W$(J);"WINS $";(R/D(N))*P(J)
    0x560b12ee7440 ---------A T 02200 NEXT J
    0x560b12ee74a0 ---------A   02210 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01150      01090T
     01460      01510T
     01500      01480T
     01520      01490T
     01550      02080T
     01690      01600T
     01710      01620T
     01730      01630T
     01750      01640T
     01770      01650T
     01790      01660T
     01800      01680T, 01700T, 01720T, 01740T, 01760T, 01780T
     01920      01880T
     02020      01970T
     02070      02000T
     02200      02170T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x560b12ed4e00   0x560b12ed4e00   0x560b12ee74a0   0x560b12ee74a0 


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02210 - 10000    7800 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/horses/basic/horses.bas'
 *
    A              Integer 
    B              Integer 
    C              Integer 
    D     Array    Integer     {0,10} 
    F              Integer 
    H              Integer 
    I              Integer 
    INT   Function Integer     args=1, float 
    J              Integer 
    L              Integer 
    M     Array    Integer     {0,10} 
    M              Integer 
    N              Integer 
    P     Array    Integer     {0,10} 
    Q     Array    Integer     {0,10} 
    R              Integer 
    RND   Function Integer     args=1, int   
    S     Array    Integer     {0,10} 
    S              Integer 
    T              Integer 
    V$    Array    String      {0,10} 
    W$    Array    String      {0,10} 
    X$             String  
    Y     Array    Integer     {0,10} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/horses/basic/horses.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x560b12ed4e00 ---------A   01000 PRINT "BASIC LIBRARY--'HORSES'--18-JUL-70"
    0x560b12ed4ed0 ---------A   01010 REM  *  *  *  *  *  *  *    MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *  *
    0x560b12ed4f50 ---------A   01020 REM
    0x560b12ed5020 ---------A   01030 RANDOM
    0x560b12ed5140 ---------A   01040 PRINT"WELCOME TO DATALINE SYSTEMS RACETRACK"
    0x560b12ed51e0 ---------A   01050 PRINT
    0x560b12ed5340 ---------A   01060 PRINT "DO YOU WANT DIRECTIONS";
    0x560b12ed54a0 ---------A   01070 INPUT X$
    0x560b12ed56b0 ---------A   01080 IF X$="NO" THEN1140
    0x560b12ed5890 ---------A   01090 PRINT"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU"
    0x560b12ed5a10 ---------A   01100 PRINT"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE."
    0x560b12ed5b80 ---------A   01110 PRINT "DURING THE RACE , A HORSE WILL BE SHOWN BY ITS"
    0x560b12ed9f10 ---------A   01120 PRINT"NUMBER.THE HORSES RACE DOWN THE PAPER!"
    0x560b12ed9f90 ---------A   01130 PRINT
    0x560b12eda0e0 ---------A T 01140 PRINT "HOW MANY WANT TO BET";
    0x560b12eda240 ---------A   01150 INPUT C
    0x560b12eda390 ---------A   01160 PRINT "WHEN ? APPEARS,TYPE NAME"
    0x560b12eda6f0 ---------A   01170 FOR A=1 TO C
    0x560b12eda8b0 ---------A   01180 INPUT W$(A)
    0x560b12eda970 ---------A   01190 NEXT A
    0x560b12edaa00 ---------A   01200 PRINT
    0x560b12edadd0 ---------A   01210 PRINT"HORSE"," ","NUMBER","ODDS"
    0x560b12edae40 ---------A   01220 PRINT
    0x560b12edb1f0 ---------A   01230 LET S(M(I))=0
    0x560b12edb3e0 ---------A   01240 LET R=0
    0x560b12edb600 ---------A   01250 FOR A=1 TO 8
    0x560b12edbb40 ---------A   01260 LET D(A)=INT(10*RND+1)
    0x560b12edbbf0 ---------A   01270 NEXT A
    0x560b12edbe10 ---------A   01280 FOR A=1TO 8
    0x560b12edc050 ---------A   01290 LET R=R+D(A)
    0x560b12edc100 ---------A   01300 NEXT A
    0x560b12edc3d0 ---------A   01310 LET V$(1)="JOE MAW"
    0x560b12edc610 ---------A   01320 LET V$(2)="L.B.J."
    0x560b12edca60 ---------A   01330 LET V$(3)="MR.WASHBURN"
    0x560b12edcc90 ---------A   01340 LET V$(4)="MISS KAREN"
    0x560b12edcec0 ---------A   01350 LET V$(5)="JOLLY"
    0x560b12edd100 ---------A   01360 LET V$(6)="FOR Q."
    0x560b12edd340 ---------A   01370 LET V$(7)="JELLY DO NOT"
    0x560b12edd570 ---------A   01380 LET V$(8)="ACID ROCK"
    0x560b12edd810 ---------A   01390 FOR N=1 TO8
    0x560b12eddd10 ---------A   01400 PRINT V$(N)," ",N,R/D(N);":1"
    0x560b12edddc0 ---------A   01410 NEXT N
    0x560b12eddf70 ---------A   01420 PRINT"--------------------------------------------------"
    0x560b12ede0b0 ---------A   01430 PRINT "PLACE YOUR BETS...HORSE # THEN AMOUNT"
    0x560b12ede300 ---------A   01440 FOR J=1 TO C
    0x560b12ede460 ---------A T 01450 PRINT W$(J);
    0x560b12ede760 ---------A   01460 INPUT Q(J),P(J)
    0x560b12ede990 ---------A   01470 IF P(J)<1 THEN 1490
    0x560b12edebc0 ---------A   01480 IF P(J)<100000 THEN 1510
    0x560b12eded00 ---------A T 01490 PRINT"  YOU CAN'T DO THAT!"
    0x560b12eded70 ---------A   01500 GOTO 1450
    0x560b12edee10 ---------A T 01510 NEXT J
    0x560b12edeea0 ---------A   01520 PRINT
    0x560b12edefe0 ---------A   01530 PRINT"1 2 3 4 5 6 7 8"
    0x560b12edf130 ---------A T 01540 PRINT"XXXXSTARTXXXX";
    0x560b12edf300 ---------A   01550 FOR I=1 TON
    0x560b12edf4c0 ---------A   01560 LET M=I
    0x560b12edf660 ---------A   01570 LET M(I)=M
    0x560b12edfb00 ---------A   01580 LET Y(M(I))=INT(100*RND+1)
    0x560b12edfd80 ---------A   01590 IF Y(M(I))<10 THEN1680
    0x560b12ee0190 ---------A   01600 LET S=INT(R/D(I)+.5)
    0x560b12ee04b0 ---------A   01610 IF Y(M(I))<S+17 THEN 1700
    0x560b12ee07e0 ---------A   01620 IF Y(M(I))<S+37 THEN 1720
    0x560b12ee0b10 ---------A   01630 IF Y(M(I))<S+57 THEN1740
    0x560b12ee0e40 ---------A   01640 IF Y(M(I))<77+S THEN1760
    0x560b12ee1570 ---------A   01650 IF Y(M(I))<S+92 THEN1780
    0x560b12ee17b0 ---------A   01660 LET Y(M(I))=7
    0x560b12ee1820 ---------A   01670 GOTO 1790
    0x560b12ee1a40 ---------A T 01680 LET Y(M(I))=1
    0x560b12ee1ab0 ---------A   01690 GOTO 1790
    0x560b12ee1cd0 ---------A T 01700 LET Y(M(I))=2
    0x560b12ee1d40 ---------A   01710 GOTO 1790
    0x560b12ee1f60 ---------A T 01720 LET Y(M(I))=3
    0x560b12ee1fd0 ---------A   01730 GOTO 1790
    0x560b12ee21f0 ---------A T 01740 LET Y(M(I))=4
    0x560b12ee2260 ---------A   01750 GOTO 1790
    0x560b12ee2480 ---------A T 01760 LET Y(M(I))=5
    0x560b12ee24f0 ---------A   01770 GOTO 1790
    0x560b12ee2710 ---------A T 01780 LET Y(M(I))=6
    0x560b12ee27c0 ---------A T 01790 NEXTI
    0x560b12ee2900 ---------A   01800 LET M=I
    0x560b12ee2b20 ---------A   01810 FOR I=1TO8
    0x560b12ee2f40 ---------A   01820 LET S(M(I))=S(M(I))+Y(M(I))
    0x560b12ee2ff0 ---------A   01830 NEXTI
    0x560b12ee3170 ---------A   01840 LET I=1
    0x560b12ee3400 ---------A   01850 FOR L=1 TO8
    0x560b12ee36d0 ---------A   01860 FORI=1TO 8-L
    0x560b12ee3ab0 ---------A   01870 IF S(M(I))<S(M(I+1))THEN 1910
    0x560b12ee3cd0 ---------A   01880 LET H=M(I)
    0x560b12ee3fa0 ---------A   01890 LET M(I)=M(I+1)
    0x560b12ee4210 ---------A   01900 LET M(I+1)=H
    0x560b12ee42c0 ---------A T 01910 NEXT I
    0x560b12ee4380 ---------A   01920 NEXT L
    0x560b12ee4640 ---------A   01930 LET T=S(M(8))
    0x560b12ee4860 ---------A   01940 FOR I=1 TO8
    0x560b12ee4d20 ---------A   01950 LET B=S(M(I))-S(M(I-1))
    0x560b12ee4ed0 ---------A   01960 IF B=0 THEN 2010
    0x560b12ee50b0 ---------A   01970 FOR A=1 TO B
    0x560b12ee5140 ---------A   01980 PRINT
    0x560b12ee53b0 ---------A   01990 IF S(M(I))>27 THEN2060
    0x560b12ee5470 ---------A   02000 NEXT A
    0x560b12ee55d0 ---------A T 02010 PRINT M(I);
    0x560b12ee5680 ---------A   02020 NEXT I
    0x560b12ee5940 ---------A   02030 FOR A=1 TO 28-T
    0x560b12ee59c0 ---------A   02040 PRINT
    0x560b12ee5a70 ---------A   02050 NEXT A
    0x560b12ee5bc0 ---------A T 02060 PRINT"XXXXFINISHXXXX"
    0x560b12ee5d80 ---------A   02070 IF T<28 THEN 1540
    0x560b12ee5ec0 ---------A   02080 PRINT"**************"
    0x560b12ee6010 ---------A   02090 PRINT"WINNER IS ";
    0x560b12ee62c0 ---------A   02100 FOR I=8 TO 1STEP-1
    0x560b12ee64e0 ---------A   02110 LET F=M(I)
    0x560b12ee6560 ---------A   02120 PRINT
    0x560b12ee67f0 ---------A   02130 PRINT "HORSE NO." F, V$(F)
    0x560b12ee68a0 ---------A   02140 NEXT I
    0x560b12ee6a90 ---------A   02150 FOR J=1 TO C
    0x560b12ee6d10 ---------A   02160 IF Q(J)<>M(8) THEN 2190
    0x560b12ee6ec0 ---------A   02170 LET N=Q(J)
    0x560b12ee7390 ---------A   02180 PRINT W$(J);"WINS $";(R/D(N))*P(J)
    0x560b12ee7440 ---------A T 02190 NEXT J
    0x560b12ee74a0 ---------A   02200 END
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
int   A_int;        // Comments?
int   B_int;        // Comments?
int   C_int;        // Comments?
int   D_int_arr[10];// Comments?
int   F_int;        // Comments?
int   H_int;        // Comments?
int   I_int;        // Comments?
int   J_int;        // Comments?
int   L_int;        // Comments?
int   M_int_arr[10];// Comments?
int   M_int;        // Comments?
int   N_int;        // Comments?
int   P_int_arr[10];// Comments?
int   Q_int_arr[10];// Comments?
int   R_int;        // Comments?
int   S_int_arr[10];// Comments?
int   S_int;        // Comments?
int   T_int;        // Comments?
char* V_str_arr[10];// Comments?
char* W_str_arr[10];// Comments?
char* X_str;        // Comments?
int   Y_int_arr[10];// Comments?
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
// Program Subroutines.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT "BASIC LIBRARY--'HORSES'--18-JUL-70"
    b2c_fprintf(stdout,"BASIC LIBRARY--'HORSES'--18-JUL-70"); b2c_fprintf(stdout,"\n");
    // 01010 REM  *  *  *  *  *  *  *    MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *  *
    // 01020 REM
    // 01030 RANDOM
    RANDOMIZE();
    // 01040 PRINT"WELCOME TO DATALINE SYSTEMS RACETRACK"
    b2c_fprintf(stdout,"WELCOME TO DATALINE SYSTEMS RACETRACK"); b2c_fprintf(stdout,"\n");
    // 01050 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01060 PRINT "DO YOU WANT DIRECTIONS";
    b2c_fprintf(stdout,"DO YOU WANT DIRECTIONS"); 
    // 01070 INPUT X$
    // Start of Basic INPUT statement 01070
    printf(" ? ");
    char inpbuf_01070[100];
    if(fgets(inpbuf_01070,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01070=strtok(inpbuf_01070," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01070==nullptr){
            X_str = "";
        }else{
            X_str = ps_01070;
        };
    }; // End of Basic INPUT statement 01070
    // 01080 IF X$="NO" THEN1140
    if(strcmp(X_str,"NO")==0)goto Lbl_01140;
    // 01090 PRINT"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU"
    b2c_fprintf(stdout,"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU"); b2c_fprintf(stdout,"\n");
    // 01100 PRINT"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE."
    b2c_fprintf(stdout,"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE."); b2c_fprintf(stdout,"\n");
    // 01110 PRINT "DURING THE RACE , A HORSE WILL BE SHOWN BY ITS"
    b2c_fprintf(stdout,"DURING THE RACE , A HORSE WILL BE SHOWN BY ITS"); b2c_fprintf(stdout,"\n");
    // 01120 PRINT"NUMBER.THE HORSES RACE DOWN THE PAPER!"
    b2c_fprintf(stdout,"NUMBER.THE HORSES RACE DOWN THE PAPER!"); b2c_fprintf(stdout,"\n");
    // 01130 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

  Lbl_01140:
    // 01140 PRINT "HOW MANY WANT TO BET";
    b2c_fprintf(stdout,"HOW MANY WANT TO BET"); 
    // 01150 INPUT C
    // Start of Basic INPUT statement 01150
    printf(" ? ");
    char inpbuf_01150[100];
    if(fgets(inpbuf_01150,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01150=strtok(inpbuf_01150," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01150==nullptr){
            C_int = 0;
        }else{
            C_int = atof(ps_01150);
        };
    }; // End of Basic INPUT statement 01150
    // 01160 PRINT "WHEN ? APPEARS,TYPE NAME"
    b2c_fprintf(stdout,"WHEN ? APPEARS,TYPE NAME"); b2c_fprintf(stdout,"\n");
    // 01170 FOR A=1 TO C
    for(A_int=1;A_int<=C_int;A_int++){
        // 01180 INPUT W$(A)
        // Start of Basic INPUT statement 01180
        printf(" ? ");
        char inpbuf_01180[100];
        if(fgets(inpbuf_01180,100,stdin)==nullptr){
            fprintf(stderr,"ERROR: End of file on input.\n");
            exit(2);
        }else{
            char *ps_01180=strtok(inpbuf_01180," ,\t\n");
            // This may cause problems if BASIC programmer expected
            // input strings to be copied instead of just pointing
            // to the input buffer (ie. strings can be over written).
            if(ps_01180==nullptr){
                W_str_arr[(int)A_int] = "";
            }else{
                W_str_arr[(int)A_int] = ps_01180;
            };
        }; // End of Basic INPUT statement 01180
        // 01190 NEXT A
        int dummy_1190=0; // Ignore this line.
    }; // End-For(A_int)
    // 01200 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01210 PRINT"HORSE"," ","NUMBER","ODDS"
    b2c_fprintf(stdout,"HORSE@ @NUMBER@ODDS"); b2c_fprintf(stdout,"\n");
    // 01220 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01230 LET S(M(I))=0
    S_int_arr[(int)M_int_arr[(int)I_int]] = 0;
    // 01240 LET R=0
    R_int = 0;
    // 01250 FOR A=1 TO 8
    for(A_int=1;A_int<=8;A_int++){
        // 01260 LET D(A)=INT(10*RND+1)
        D_int_arr[(int)A_int] = INT(10*RND()+1);
        // 01270 NEXT A
        int dummy_1270=0; // Ignore this line.
    }; // End-For(A_int)
    // 01280 FOR A=1TO 8
    for(A_int=1;A_int<=8;A_int++){
        // 01290 LET R=R+D(A)
        R_int = R_int+D_int_arr[(int)A_int];
        // 01300 NEXT A
        int dummy_1300=0; // Ignore this line.
    }; // End-For(A_int)
    // 01310 LET V$(1)="JOE MAW"
    GLBpStr="JOE MAW";
    V_str_arr[(int)1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01320 LET V$(2)="L.B.J."
    GLBpStr="L.B.J.";
    V_str_arr[(int)2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01330 LET V$(3)="MR.WASHBURN"
    GLBpStr="MR.WASHBURN";
    V_str_arr[(int)3] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01340 LET V$(4)="MISS KAREN"
    GLBpStr="MISS KAREN";
    V_str_arr[(int)4] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01350 LET V$(5)="JOLLY"
    GLBpStr="JOLLY";
    V_str_arr[(int)5] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01360 LET V$(6)="FOR Q."
    GLBpStr="FOR Q.";
    V_str_arr[(int)6] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01370 LET V$(7)="JELLY DO NOT"
    GLBpStr="JELLY DO NOT";
    V_str_arr[(int)7] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01380 LET V$(8)="ACID ROCK"
    GLBpStr="ACID ROCK";
    V_str_arr[(int)8] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01390 FOR N=1 TO8
    for(N_int=1;N_int<=8;N_int++){
        // 01400 PRINT V$(N)," ",N,R/D(N);":1"
        b2c_fprintf(stdout,"%s@ @ %d @%d:1",V_str_arr[(int)N_int],N_int,R_int/D_int_arr[(int)N_int]); b2c_fprintf(stdout,"\n");
        // 01410 NEXT N
        int dummy_1410=0; // Ignore this line.
    }; // End-For(N_int)
    // 01420 PRINT"--------------------------------------------------"
    b2c_fprintf(stdout,"--------------------------------------------------"); b2c_fprintf(stdout,"\n");
    // 01430 PRINT "PLACE YOUR BETS...HORSE # THEN AMOUNT"
    b2c_fprintf(stdout,"PLACE YOUR BETS...HORSE # THEN AMOUNT"); b2c_fprintf(stdout,"\n");
    // 01440 FOR J=1 TO C
    for(J_int=1;J_int<=C_int;J_int++){

  Lbl_01450:
        // 01450 PRINT W$(J);
        b2c_fprintf(stdout,"%s",W_str_arr[(int)J_int]); 
        // 01460 INPUT Q(J),P(J)
        // Start of Basic INPUT statement 01460
        printf(" ? ");
        char inpbuf_01460[100];
        if(fgets(inpbuf_01460,100,stdin)==nullptr){
            fprintf(stderr,"ERROR: End of file on input.\n");
            exit(2);
        }else{
            char *ps_01460=strtok(inpbuf_01460," ,\t\n");
            // This may cause problems if BASIC programmer expected
            // input strings to be copied instead of just pointing
            // to the input buffer (ie. strings can be over written).
            if(ps_01460==nullptr){
                Q_int_arr[(int)J_int] = 0;
            }else{
                Q_int_arr[(int)J_int] = atof(ps_01460);
            };
            ps_01460=strtok(nullptr," ,\t\n");
            if(ps_01460==nullptr){
                P_int_arr[(int)J_int] = 0;
            }else{
                P_int_arr[(int)J_int] = atof(ps_01460);
            };
        }; // End of Basic INPUT statement 01460
        // 01470 IF P(J)<1 THEN 1490
        if(P_int_arr[(int)J_int]<1)goto Lbl_01490;
        // 01480 IF P(J)<100000 THEN 1510
        if(P_int_arr[(int)J_int]<100000)goto Lbl_01510;

  Lbl_01490:
        // 01490 PRINT"  YOU CAN'T DO THAT!"
        b2c_fprintf(stdout,"  YOU CAN'T DO THAT!"); b2c_fprintf(stdout,"\n");
        // 01500 GOTO 1450
        goto Lbl_01450;

  Lbl_01510:
        // 01510 NEXT J
        int dummy_1510=0; // Ignore this line.
    }; // End-For(J_int)
    // 01520 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01530 PRINT"1 2 3 4 5 6 7 8"
    b2c_fprintf(stdout,"1 2 3 4 5 6 7 8"); b2c_fprintf(stdout,"\n");

  Lbl_01540:
    // 01540 PRINT"XXXXSTARTXXXX";
    b2c_fprintf(stdout,"XXXXSTARTXXXX"); 
    // 01550 FOR I=1 TON
    for(I_int=1;I_int<=N_int;I_int++){
        // 01560 LET M=I
        M_int = I_int;
        // 01570 LET M(I)=M
        M_int_arr[(int)I_int] = M_int;
        // 01580 LET Y(M(I))=INT(100*RND+1)
        Y_int_arr[(int)M_int_arr[(int)I_int]] = INT(100*RND()+1);
        // 01590 IF Y(M(I))<10 THEN1680
        if(Y_int_arr[(int)M_int_arr[(int)I_int]]<10)goto Lbl_01680;
        // 01600 LET S=INT(R/D(I)+.5)
        S_int = INT(R_int/D_int_arr[(int)I_int]+0.5);
        // 01610 IF Y(M(I))<S+17 THEN 1700
        if(Y_int_arr[(int)M_int_arr[(int)I_int]]<S_int+17)goto Lbl_01700;
        // 01620 IF Y(M(I))<S+37 THEN 1720
        if(Y_int_arr[(int)M_int_arr[(int)I_int]]<S_int+37)goto Lbl_01720;
        // 01630 IF Y(M(I))<S+57 THEN1740
        if(Y_int_arr[(int)M_int_arr[(int)I_int]]<S_int+57)goto Lbl_01740;
        // 01640 IF Y(M(I))<77+S THEN1760
        if(Y_int_arr[(int)M_int_arr[(int)I_int]]<77+S_int)goto Lbl_01760;
        // 01650 IF Y(M(I))<S+92 THEN1780
        if(Y_int_arr[(int)M_int_arr[(int)I_int]]<S_int+92)goto Lbl_01780;
        // 01660 LET Y(M(I))=7
        Y_int_arr[(int)M_int_arr[(int)I_int]] = 7;
        // 01670 GOTO 1790
        goto Lbl_01790;

  Lbl_01680:
        // 01680 LET Y(M(I))=1
        Y_int_arr[(int)M_int_arr[(int)I_int]] = 1;
        // 01690 GOTO 1790
        goto Lbl_01790;

  Lbl_01700:
        // 01700 LET Y(M(I))=2
        Y_int_arr[(int)M_int_arr[(int)I_int]] = 2;
        // 01710 GOTO 1790
        goto Lbl_01790;

  Lbl_01720:
        // 01720 LET Y(M(I))=3
        Y_int_arr[(int)M_int_arr[(int)I_int]] = 3;
        // 01730 GOTO 1790
        goto Lbl_01790;

  Lbl_01740:
        // 01740 LET Y(M(I))=4
        Y_int_arr[(int)M_int_arr[(int)I_int]] = 4;
        // 01750 GOTO 1790
        goto Lbl_01790;

  Lbl_01760:
        // 01760 LET Y(M(I))=5
        Y_int_arr[(int)M_int_arr[(int)I_int]] = 5;
        // 01770 GOTO 1790
        goto Lbl_01790;

  Lbl_01780:
        // 01780 LET Y(M(I))=6
        Y_int_arr[(int)M_int_arr[(int)I_int]] = 6;

  Lbl_01790:
        // 01790 NEXTI
        int dummy_1790=0; // Ignore this line.
    }; // End-For(I_int)
    // 01800 LET M=I
    M_int = I_int;
    // 01810 FOR I=1TO8
    for(I_int=1;I_int<=8;I_int++){
        // 01820 LET S(M(I))=S(M(I))+Y(M(I))
        S_int_arr[(int)M_int_arr[(int)I_int]] = S_int_arr[(int)M_int_arr[(int)I_int]]+Y_int_arr[(int)M_int_arr[(int)I_int]];
        // 01830 NEXTI
        int dummy_1830=0; // Ignore this line.
    }; // End-For(I_int)
    // 01840 LET I=1
    I_int = 1;
    // 01850 FOR L=1 TO8
    for(L_int=1;L_int<=8;L_int++){
        // 01860 FORI=1TO 8-L
        for(I_int=1;I_int<=8-L_int;I_int++){
            // 01870 IF S(M(I))<S(M(I+1))THEN 1910
            if(S_int_arr[(int)M_int_arr[(int)I_int]]<S_int_arr[(int)M_int_arr[(int)I_int+1]])goto Lbl_01910;
            // 01880 LET H=M(I)
            H_int = M_int_arr[(int)I_int];
            // 01890 LET M(I)=M(I+1)
            M_int_arr[(int)I_int] = M_int_arr[(int)I_int+1];
            // 01900 LET M(I+1)=H
            M_int_arr[(int)I_int+1] = H_int;

  Lbl_01910:
            // 01910 NEXT I
            int dummy_1910=0; // Ignore this line.
        }; // End-For(I_int)
        // 01920 NEXT L
        int dummy_1920=0; // Ignore this line.
    }; // End-For(L_int)
    // 01930 LET T=S(M(8))
    T_int = S_int_arr[(int)M_int_arr[(int)8]];
    // 01940 FOR I=1 TO8
    for(I_int=1;I_int<=8;I_int++){
        // 01950 LET B=S(M(I))-S(M(I-1))
        B_int = S_int_arr[(int)M_int_arr[(int)I_int]]-S_int_arr[(int)M_int_arr[(int)I_int-1]];
        // 01960 IF B=0 THEN 2010
        if(B_int==0)goto Lbl_02010;
        // 01970 FOR A=1 TO B
        for(A_int=1;A_int<=B_int;A_int++){
            // 01980 PRINT
            b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
            // 01990 IF S(M(I))>27 THEN2060
            if(S_int_arr[(int)M_int_arr[(int)I_int]]>27)goto Lbl_02060;
            // 02000 NEXT A
            int dummy_2000=0; // Ignore this line.
        }; // End-For(A_int)

  Lbl_02010:
        // 02010 PRINT M(I);
        b2c_fprintf(stdout," %d ",M_int_arr[(int)I_int]); 
        // 02020 NEXT I
        int dummy_2020=0; // Ignore this line.
    }; // End-For(I_int)
    // 02030 FOR A=1 TO 28-T
    for(A_int=1;A_int<=28-T_int;A_int++){
        // 02040 PRINT
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 02050 NEXT A
        int dummy_2050=0; // Ignore this line.
    }; // End-For(A_int)

  Lbl_02060:
    // 02060 PRINT"XXXXFINISHXXXX"
    b2c_fprintf(stdout,"XXXXFINISHXXXX"); b2c_fprintf(stdout,"\n");
    // 02070 IF T<28 THEN 1540
    if(T_int<28)goto Lbl_01540;
    // 02080 PRINT"**************"
    b2c_fprintf(stdout,"**************"); b2c_fprintf(stdout,"\n");
    // 02090 PRINT"WINNER IS ";
    b2c_fprintf(stdout,"WINNER IS "); 
    // 02100 FOR I=8 TO 1STEP-1
    for(I_int=8;I_int>=1;I_int+=-1){
        // 02110 LET F=M(I)
        F_int = M_int_arr[(int)I_int];
        // 02120 PRINT
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 02130 PRINT "HORSE NO." F, V$(F)
        b2c_fprintf(stdout,"HORSE NO. %d @%s",F_int,V_str_arr[(int)F_int]); b2c_fprintf(stdout,"\n");
        // 02140 NEXT I
        int dummy_2140=0; // Ignore this line.
    }; // End-For(I_int)
    // 02150 FOR J=1 TO C
    for(J_int=1;J_int<=C_int;J_int++){
        // 02160 IF Q(J)<>M(8) THEN 2190
        if(Q_int_arr[(int)J_int]!=M_int_arr[(int)8])goto Lbl_02190;
        // 02170 LET N=Q(J)
        N_int = Q_int_arr[(int)J_int];
        // 02180 PRINT W$(J);"WINS $";(R/D(N))*P(J)
        b2c_fprintf(stdout,"%sWINS $%d",W_str_arr[(int)J_int],(R_int/D_int_arr[(int)N_int])*P_int_arr[(int)J_int]); b2c_fprintf(stdout,"\n");

  Lbl_02190:
        // 02190 NEXT J
        int dummy_2190=0; // Ignore this line.
    }; // End-For(J_int)
    // 02200 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
