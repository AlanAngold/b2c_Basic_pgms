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
    b2c_printf("Battle\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
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
            // 01190 ON D GOTO 1200,1410,1660,1870
            switch((int)(D_int)){
                case 1: goto Lbl_01200;
                case 2: goto Lbl_01410;
                case 3: goto Lbl_01660;
                case 4: goto Lbl_01870;
                default: break; 
            };

  Lbl_01200:
            // 01200 B(1)=B
            B_int = B_int;
            // 01210 B(2)=7:B(3)=7
            B_int = 7;
            // 01220 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01230 IF M>1 THEN 1290
                if(M_int>1)goto Lbl_01290;
                // 01240 IF B(K)=6 THEN 1280
                if(B_int==6)goto Lbl_01280;
                // 01250 IF F(A,B(K)+1)>0 THEN 1280
                if(F_int_arr[A_int][B_int+1]>0)goto Lbl_01280;
                // 01260 B(K+1)=B(K)+1
                B_int = B_int+1;
                // 01270 GOTO 1350
                goto Lbl_01350;

  Lbl_01280:
                // 01280 M=2
                M_int = 2;

  Lbl_01290:
                // 01290 IF B(1)<B(2) AND B(1)<B(3) THEN Z=B(1)
                if(B_int<B_int&&B_int<B_int) {
                }
                // 01300 IF B(2)<B(1) AND B(2)<B(3) THEN Z=B(2)
                if(B_int<B_int&&B_int<B_int) {
                }
                // 01310 IF B(3)<B(1) AND B(3)<B(2) THEN Z=B(3)
                if(B_int<B_int&&B_int<B_int) {
                }
                // 01320 IF Z=1 THEN 1140
                if(Z_int==1)goto Lbl_01140;
                // 01330 IF F(A,Z-1)>0 THEN 1140
                if(F_int_arr[A_int][Z_int-1]>0)goto Lbl_01140;
                // 01340 B(K+1)=Z-1
                B_int = Z_int-1;

  Lbl_01350:
                // 01350 NEXT K
                int dummy_1350=0; // Ignore this line.
            }; // End-For(K_int)
            // 01360 F(A,B)=9-2*I-J
            F_int_arr[A_int][B_int] = 9-2*I_int-J_int;
            // 01370 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01380 F(A,B(K+1))=F(A,B)
                F_int_arr[A_int][B_int] = F_int_arr[A_int][B_int];
                // 01390 NEXT K
                int dummy_1390=0; // Ignore this line.
            }; // End-For(K_int)
            // 01400 GOTO 2160
            goto Lbl_02160;

  Lbl_01410:
            // 01410 A(1)=A
            A_int = A_int;
            // 01420 B(1)=B
            B_int = B_int;
            // 01430 A(2)=0:A(3)=0:B(2)=0:B(3)=0
            B_int = 0;
            // 01440 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01450 IF M>1 THEN 1530
                if(M_int>1)goto Lbl_01530;
                // 01460 IF A(K)=1 OR B(K)=1 THEN 1520
                if(A_int==1||B_int==1)goto Lbl_01520;
                // 01470 IF F(A(K)-1,B(K)-1)>0 THEN 1520
                if(F_int_arr[A_int-1][B_int-1]>0)goto Lbl_01520;
                // 01480 IF F(A(K)-1,B(K))>0 AND F(A(K)-1,B(K))=F(A(K),B(K)-1) THEN 1520
                if(F_int_arr[A_int-1][B_int]>0&&F_int_arr[A_int-1][B_int]==F_int_arr[A_int][B_int-1])goto Lbl_01520;
                // 01490 A(K+1)=A(K)-1
                A_int = A_int-1;
                // 01500 B(K+1)=B(K)-1
                B_int = B_int-1;
                // 01510 GOTO 1640
                goto Lbl_01640;

  Lbl_01520:
                // 01520 M=2
                M_int = 2;

  Lbl_01530:
                // 01530 IF A(1)>A(2) AND A(1)>A(3) THEN Z1=A(1)
                if(A_int>A_int&&A_int>A_int) {
                }
                // 01540 IF A(2)>A(1) AND A(2)>A(3) THEN Z1=A(2)
                if(A_int>A_int&&A_int>A_int) {
                }
                // 01550 IF A(3)>A(1) AND A(3)>A(2) THEN Z1=A(3)
                if(A_int>A_int&&A_int>A_int) {
                }
                // 01560 IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 01570 IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 01580 IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 01590 IF Z1=6 OR Z2=6 THEN 1140
                if(Z1_int==6||Z2_int==6)goto Lbl_01140;
                // 01600 IF F(Z1+1,Z2+1)>0 THEN 1140
                if(F_int_arr[Z1_int+1][Z2_int+1]>0)goto Lbl_01140;
                // 01610 IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1+1,Z2) THEN 1140
                if(F_int_arr[Z1_int][Z2_int+1]>0&&F_int_arr[Z1_int][Z2_int+1]==F_int_arr[Z1_int+1][Z2_int])goto Lbl_01140;
                // 01620 A(K+1)=Z1+1
                A_int = Z1_int+1;
                // 01630 B(K+1)=Z2+1
                B_int = Z2_int+1;

  Lbl_01640:
                // 01640 NEXT K
                int dummy_1640=0; // Ignore this line.
            }; // End-For(K_int)
            // 01650 GOTO 2120
            goto Lbl_02120;

  Lbl_01660:
            // 01660 A(1)=A
            A_int = A_int;
            // 01670 A(2)=7:A(3)=7
            A_int = 7;
            // 01680 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01690 IF M>1 THEN 1750
                if(M_int>1)goto Lbl_01750;
                // 01700 IF A(K)=6 THEN 1740
                if(A_int==6)goto Lbl_01740;
                // 01710 IF F(A(K)+1,B)>0 THEN 1740
                if(F_int_arr[A_int+1][B_int]>0)goto Lbl_01740;
                // 01720 A(K+1)=A(K)+1
                A_int = A_int+1;
                // 01730 GOTO 1810
                goto Lbl_01810;

  Lbl_01740:
                // 01740 M=2
                M_int = 2;

  Lbl_01750:
                // 01750 IF A(1)<A(2) AND A(1)<A(3) THEN Z=A(1)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 01760 IF A(2)<A(1) AND A(2)<A(3) THEN Z=A(2)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 01770 IF A(3)<A(1) AND A(3)<A(2) THEN Z=A(3)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 01780 IF Z=1 THEN 1140
                if(Z_int==1)goto Lbl_01140;
                // 01790 IF F(Z-1,B)>0 THEN 1140
                if(F_int_arr[Z_int-1][B_int]>0)goto Lbl_01140;
                // 01800 A(K+1)=Z-1
                A_int = Z_int-1;

  Lbl_01810:
                // 01810 NEXT K
                int dummy_1810=0; // Ignore this line.
            }; // End-For(K_int)
            // 01820 F(A,B)=9-2*I-J
            F_int_arr[A_int][B_int] = 9-2*I_int-J_int;
            // 01830 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01840 F(A(K+1),B)=F(A,B)
                F_int_arr[A_int][B_int] = F_int_arr[A_int][B_int];
                // 01850 NEXT K
                int dummy_1850=0; // Ignore this line.
            }; // End-For(K_int)
            // 01860 GOTO 2160
            goto Lbl_02160;

  Lbl_01870:
            // 01870 A(1)=A
            A_int = A_int;
            // 01880 B(1)=B
            B_int = B_int;
            // 01890 A(2)=7:A(3)=7
            A_int = 7;
            // 01900 B(2)=0:B(3)=0
            B_int = 0;
            // 01910 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 01920 IF M>1 THEN 2000
                if(M_int>1)goto Lbl_02000;
                // 01930 IF A(K)=6 OR B(K)=1 THEN 1990
                if(A_int==6||B_int==1)goto Lbl_01990;
                // 01940 IF F(A(K)+1,B(K)-1)>0 THEN 1990
                if(F_int_arr[A_int+1][B_int-1]>0)goto Lbl_01990;
                // 01950 IF F(A(K)+1,B(K))>0 AND F(A(K)+1,B(K))=F(A(K),B(K)-1) THEN 1990
                if(F_int_arr[A_int+1][B_int]>0&&F_int_arr[A_int+1][B_int]==F_int_arr[A_int][B_int-1])goto Lbl_01990;
                // 01960 A(K+1)=A(K)+1
                A_int = A_int+1;
                // 01970 B(K+1)=B(K)-1
                B_int = B_int-1;
                // 01980 GOTO 2110
                goto Lbl_02110;

  Lbl_01990:
                // 01990 M=2
                M_int = 2;

  Lbl_02000:
                // 02000 IF A(1)<A(2) AND A(1)<A(3) THEN Z1=A(1)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 02010 IF A(2)<A(1) AND A(2)<A(3) THEN Z1=A(2)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 02020 IF A(3)<A(1) AND A(3)<A(2) THEN Z1=A(3)
                if(A_int<A_int&&A_int<A_int) {
                }
                // 02030 IF B(1)>B(2) AND B(1)>B(3) THEN Z2=B(1)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 02040 IF B(2)>B(1) AND B(2)>B(3) THEN Z2=B(2)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 02050 IF B(3)>B(1) AND B(3)>B(2) THEN Z2=B(3)
                if(B_int>B_int&&B_int>B_int) {
                }
                // 02060 IF Z1=1 OR Z2=6 THEN 1140
                if(Z1_int==1||Z2_int==6)goto Lbl_01140;
                // 02070 IF F(Z1-1,Z2+1)>0 THEN 1140
                if(F_int_arr[Z1_int-1][Z2_int+1]>0)goto Lbl_01140;
                // 02080 IF F(Z1,Z2+1)>0 AND F(Z1,Z2+1)=F(Z1-1,Z2) THEN 1140
                if(F_int_arr[Z1_int][Z2_int+1]>0&&F_int_arr[Z1_int][Z2_int+1]==F_int_arr[Z1_int-1][Z2_int])goto Lbl_01140;
                // 02090 A(K+1)=Z1-1
                A_int = Z1_int-1;
                // 02100 B(K+1)=Z2+1
                B_int = Z2_int+1;

  Lbl_02110:
                // 02110 NEXT K
                int dummy_2110=0; // Ignore this line.
            }; // End-For(K_int)

  Lbl_02120:
            // 02120 F(A,B)=9-2*I-J
            F_int_arr[A_int][B_int] = 9-2*I_int-J_int;
            // 02130 FOR K=1 TO N
            for(K_int=1;K_int<=N_int;K_int++){
                // 02140 F(A(K+1),B(K+1))=F(A,B)
                F_int_arr[A_int][B_int] = F_int_arr[A_int][B_int];
                // 02150 NEXT K
                int dummy_2150=0; // Ignore this line.
            }; // End-For(K_int)

  Lbl_02160:
            // 02160 NEXT J
            int dummy_2160=0; // Ignore this line.
        }; // End-For(J_int)
        // 02170 NEXT I
        int dummy_2170=0; // Ignore this line.
    }; // End-For(I_int)
    // 02180 PRINT
    b2c_printf("");
    // 02190 PRINT "THE FOLLOWING CODE OF THE BAD GUYS' FLEET DISPOSITION"
    b2c_printf("The following code of the bad guys' fleet disposition\n");
    // 02200 PRINT "HAS BEEN CAPTURED BUT NOT DECODED:"
    b2c_printf("Has been captured but not decoded:\n");
    // 02210 PRINT
    b2c_printf("");
    // 02220 FOR I=1 TO 6
    for(I_int=1;I_int<=6;I_int++){
        // 02230 FOR J=1 TO 6
        for(J_int=1;J_int<=6;J_int++){
            // 02240 H(I,J)=F(J,I)
            H_int_arr[I_int][J_int] = F_int_arr[J_int][I_int];
            // 02250 NEXT J
            int dummy_2250=0; // Ignore this line.
        }; // End-For(J_int)
        // 02260 NEXT I
        int dummy_2260=0; // Ignore this line.
    }; // End-For(I_int)
    // 02270 FOR I=1 TO 6
    for(I_int=1;I_int<=6;I_int++){
        // 02280 FOR J=1 TO 6
        for(J_int=1;J_int<=6;J_int++){
            // 02290 PRINT H(I,J);
            b2c_printf(" %d ÍÎuña\n",H_int_arr[I_int][J_int]);
            // 02300 NEXT J
            int dummy_2300=0; // Ignore this line.
        }; // End-For(J_int)
        // 02310 PRINT
        b2c_printf("");
        // 02320 NEXT I
        int dummy_2320=0; // Ignore this line.
    }; // End-For(I_int)
    // 02330 PRINT
    b2c_printf("");
    // 02340 PRINT "DE-CODE IT AND USE IT IF YOU CAN"
    b2c_printf("De-code it and use it if you can\n");
    // 02350 PRINT "BUT KEEP THE DE-CODING METHOD A SECRET."
    b2c_printf("But keep the de-coding method a secret.\n");
    // 02360 PRINT
    b2c_printf("");
    // 02370 FOR I=1 TO 6
    for(I_int=1;I_int<=6;I_int++){
        // 02380 FOR J=1 TO 6
        for(J_int=1;J_int<=6;J_int++){
            // 02390 H(I,J)=0
            H_int_arr[I_int][J_int] = 0;
            // 02400 NEXT J
            int dummy_2400=0; // Ignore this line.
        }; // End-For(J_int)
        // 02410 NEXT I
        int dummy_2410=0; // Ignore this line.
    }; // End-For(I_int)
    // 02420 FOR I=1 TO 3
    for(I_int=1;I_int<=3;I_int++){
        // 02430 L(I)=0
        L_int_arr[I_int] = 0;
        // 02440 NEXT I
        int dummy_2440=0; // Ignore this line.
    }; // End-For(I_int)
    // 02450 C(1)=2:C(2)=2
    C_int_arr[2] = 2;
    // 02460 C(3)=1:C(4)=1
    C_int_arr[4] = 1;
    // 02470 C(5)=0:C(6)=0
    C_int_arr[6] = 0;
    // 02480 S=0:H=0
    H_int_arr[0] = 0;
    // 02490 PRINT "START GAME"
    b2c_printf("Start game\n");

  Lbl_02500:
    // 02500 INPUT X,Y
    // Start of Basic INPUT statement 02500
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
    }; // End of Basic INPUT statement 02500
    // 02510 IF X<1 OR X>6 OR INT(X)<>ABS(X) THEN 2530
    if(X_int<1||X_int>6||INT(X_int)!=ABS(X_int))goto Lbl_02530;
    // 02520 IF Y>0 AND Y<7 AND INT(Y)=ABS(Y) THEN 2550
    if(Y_int>0&&Y_int<7&&INT(Y_int)==ABS(Y_int))goto Lbl_02550;

  Lbl_02530:
    // 02530 PRINT "INVALID INPUT.  TRY AGAIN."
    b2c_printf("Invalid input.  Try again.\n");
    // 02540 GOTO 2500
    goto Lbl_02500;

  Lbl_02550:
    // 02550 R=7-Y
    R_int = 7-Y_int;
    // 02560 C=X
    C_int_arr[0] = X_int;
    // 02570 IF F(R,C)>0 THEN 2610
    if(F_int_arr[R_int][C_int_arr[0]]>0)goto Lbl_02610;
    // 02580 S=S+1
    S_int = S_int+1;
    // 02590 PRINT "SPLASH!  TRY AGAIN."
    b2c_printf("Splash!  Try again.\n");
    // 02600 GOTO 2500
    goto Lbl_02500;

  Lbl_02610:
    // 02610 IF C(F(R,C))<4 THEN 2660
    if(C_int_arr[F_int_arr[R_int][C_int_arr[0]]]<4)goto Lbl_02660;
    // 02620 PRINT "THERE USED TO BE A SHIP AT THAT POINT, BUT YOU SUNK IT."
    b2c_printf("There used to be a ship at that point, but you sunk it.\n");
    // 02630 PRINT "SPLASH!  TRY AGAIN."
    b2c_printf("Splash!  Try again.\n");
    // 02640 S=S+1
    S_int = S_int+1;
    // 02650 GOTO 2500
    goto Lbl_02500;

  Lbl_02660:
    // 02660 IF H(R,C)>0 THEN 2740
    if(H_int_arr[R_int][C_int_arr[0]]>0)goto Lbl_02740;
    // 02670 H=H+1
    H_int_arr[0] = H_int_arr[0]+1;
    // 02680 H(R,C)=F(R,C)
    H_int_arr[R_int][C_int_arr[0]] = F_int_arr[R_int][C_int_arr[0]];
    // 02690 PRINT "A DIRECT HIT ON SHIP NUMBER";F(R,C)
    b2c_printf("A direct hit on ship number %d \n",F_int_arr[R_int][C_int_arr[0]]);
    // 02700 C(F(R,C))=C(F(R,C))+1
    C_int_arr[F_int_arr[R_int][C_int_arr[0]]] = C_int_arr[F_int_arr[R_int][C_int_arr[0]]]+1;
    // 02710 IF C(F(R,C))>=4 THEN 2790
    if(C_int_arr[F_int_arr[R_int][C_int_arr[0]]]>=4)goto Lbl_02790;
    // 02720 PRINT "TRY AGAIN."
    b2c_printf("Try again.\n");
    // 02730 GOTO 2500
    goto Lbl_02500;

  Lbl_02740:
    // 02740 PRINT "YOU ALREADY PUT A HOLE IN SHIP NUMBER";F(R,C);
    b2c_printf("You already put a hole in ship number %d You already put a hole in ship number\n",F_int_arr[R_int][C_int_arr[0]]);
    // 02750 PRINT "AT THAT POINT."
    b2c_printf("At that point.\n");
    // 02760 PRINT "SPLASH!  TRY AGAIN."
    b2c_printf("Splash!  Try again.\n");
    // 02770 S=S+1
    S_int = S_int+1;
    // 02780 GOTO 2500
    goto Lbl_02500;

  Lbl_02790:
    // 02790 L((INT(F(R,C)-1)/2)+1)=L((INT(F(R,C)-1)/2)+1)+1
    L_int_arr[(INT(F_int_arr[R_int][C_int_arr[0]]-1)/2)+1] = L_int_arr[(INT(F_int_arr[R_int][C_int_arr[0]]-1)/2)+1]+1;
    // 02800 PRINT "AND YOU SUNK IT.  HURRAH FOR THE GOOD GUYS."
    b2c_printf("And you sunk it.  Hurrah for the good guys.\n");
    // 02810 PRINT "SO FAR, THE BAD GUYS HAVE LOST"
    b2c_printf("So far, the bad guys have lost\n");
    // 02820 PRINT L(1);"DESTROYER(S),";L(2);"CRUISER(S), AND";
    b2c_printf(" %d êÎuñaDestroyer(s),Destroyer(s), %d Destroyer(s),Cruiser(s), andCruiser(s), and\n",L_int_arr[1],L_int_arr[2]);
    // 02830 PRINT L(3);"AIRCRAFT CARRIER(S)."
    b2c_printf(" %d êÎuñaAircraft carrier(s).\n",L_int_arr[3]);
    // 02840 PRINT "YOUR CURRENT SPLASH/HIT RATIO IS";S/H
    b2c_printf("Your current splash/hit ratio is");
    // 02850 IF (L(1)+L(2)+L(3))<6 THEN 2500
    if((L_int_arr[1]+L_int_arr[2]+L_int_arr[3])<6)goto Lbl_02500;
    // 02860 PRINT
    b2c_printf("");
    // 02870 PRINT "YOU HAVE TOTALLY WIPED OUT THE BAD GUYS' FLEET"
    b2c_printf("You have totally wiped out the bad guys' fleet\n");
    // 02880 PRINT "WITH A FINAL SPLASH/HIT RATIO OF";S/H
    b2c_printf("With a final splash/hit ratio of");
    // 02890 IF S/H>0 THEN 2910
    if(S_int/H_int_arr[0]>0)goto Lbl_02910;
    // 02900 PRINT "CONGRATULATIONS -- A DIRECT HIT EVERY TIME."
    b2c_printf("Congratulations -- a direct hit every time.\n");

  Lbl_02910:
    // 02910 PRINT
    b2c_printf("");
    // 02920 PRINT "****************************"
    b2c_printf("****************************\n");
    // 02930 PRINT
    b2c_printf("");
    // 02940 GOTO 1060
    goto Lbl_01060;
    // 02950 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
