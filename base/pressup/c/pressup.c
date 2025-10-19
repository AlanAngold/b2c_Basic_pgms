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
int    B_int;                                     // Basic: B 
char*  F_str;                                     // Basic: F$ 
char*  F1_str;                                    // Basic: F1$ 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
char*  I_str;                                     // Basic: I$ 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
char*  P_str_arr[7];                              // Basic: P$ 
int    P6_int_arr[10];                            // Basic: P6 
int    P7_int_arr[10];                            // Basic: P7 
int    P8_int;                                    // Basic: P8 
int    P9_int;                                    // Basic: P9 
char*  P9_str;                                    // Basic: P9$ 
int    R_int;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02670();
void Routine_02830();
void Routine_03090();
void Routine_03320();
void Routine_04340();
void Routine_04550();

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
    // 03690 REM PRINT BOARD

void Routine_03700(){
    // 03700 PRINT
    b2c_printf("");
    // 03710 PRINT "      SECOND NUMBER"
    b2c_printf("      second number\n");
    // 03720 PRINT "      1 2 3 4 5 6 7"
    b2c_printf("      1 2 3 4 5 6 7\n");
    // 03730 PRINT
    b2c_printf("");
    // 03740 F1$="FIRST #"
    GLBpStr="First #";
    F1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 03750 FOR I=1 TO 7
    for(I_int=1;I_int<=7;I_int++){
        // 03760     FOR J=1 TO 7
        for(J_int=1;J_int<=7;J_int++){
            // 03770 	    IF J<>1 GOTO 3790
            if(J_int!=1)goto Lbl_03790;
            // 03780 	    PRINT MID$(F1$,I,1);" ";I;" ";
            b2c_printf("  %d    \n",I_int);

  Lbl_03790:
            // 03790 	    PRINT MID$(P$(I),J,1);
            b2c_printf("");
            // 03800 	    PRINT " ";
            b2c_printf(" ");
            // 03810     NEXT J
            int dummy_3810=0; // Ignore this line.
        }; // End-For(J_int)
        // 03820     PRINT CHR$(14)
        b2c_printf("");
        // 03830 NEXT I
        int dummy_3830=0; // Ignore this line.
    }; // End-For(I_int)
    // 03840 GOTO 03850
    goto Lbl_03850;

  Lbl_03850:
    // 03850 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_03860(){

  Lbl_03860:
    // 03860 INPUT X(1),Y(1)
    // Start of Basic INPUT statement 03860
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
    }; // End of Basic INPUT statement 03860
    // 03870 REM CHECK ADJACENCY
    // 03880 IF X(1)<0 THEN 3860
    if(X_int<0)goto Lbl_03860;
    // 03890 IF Y(1)<0 THEN 3860
    if(Y_int<0)goto Lbl_03860;
    // 03900 IF X(1)=0 THEN 4020
    if(X_int==0)goto Lbl_04020;
    // 03910 IF X(1)>7 THEN 3860
    if(X_int>7)goto Lbl_03860;
    // 03920 IF Y(1)>7 THEN 3860
    if(Y_int>7)goto Lbl_03860;
    // 03930 IF ABS(X-X(1))>1 THEN 3990
    if(ABS(X_int-X_int)>1)goto Lbl_03990;
    // 03940 IF ABS(Y-Y(1))>1 THEN 3990
    if(ABS(Y_int-Y_int)>1)goto Lbl_03990;
    // 03950 IF MID$(P$(X(1)),Y(1),1)="*" THEN 3860
    if(MID$(P_str_arr[X_int],Y_int,1)=='*')goto Lbl_03860;
    // 03960 X=X(1)
    X_int = X_int;
    // 03970 Y=Y(1)
    Y_int = Y_int;
    // 03980 GOTO 04010
    goto Lbl_04010;

  Lbl_03990:
    // 03990 PRINT "NOT ADJACENT!"
    b2c_printf("Not adjacent!\n");
    // 04000 GOTO 3860
    goto Lbl_03860;

  Lbl_04010:
    // 04010 RETURN
    return;
};

  Lbl_04020:
    // 04020 IF B>R  THEN 4050
    if(B_int>R_int)goto Lbl_04050;
    // 04030 IF R>B THEN 4070
    if(R_int>B_int)goto Lbl_04070;
    // 04040 IF R=B THEN 4090
    if(R_int==B_int)goto Lbl_04090;

  Lbl_04050:
    // 04050 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    b2c_printf("Blue is the winner!  %d Blue is the winner!  to  to  %d \n",B_int,R_int);
    // 04060 GOTO 4100
    goto Lbl_04100;

  Lbl_04070:
    // 04070 PRINT "RED IS THE WINNER! ";R;" TO ";B
    b2c_printf("Red is the winner!  %d Red is the winner!  to  to  %d \n",R_int,B_int);
    // 04080 GOTO 4100
    goto Lbl_04100;

  Lbl_04090:
    // 04090 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    b2c_printf("It's a tie!!  Each player has  %d \n",B_int);

  Lbl_04100:
    // 04100 GOTO 4110
    goto Lbl_04110;

  Lbl_04110:
    // 04110 END
    exit(4110);


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_04120(){
    // 04120 IF MID$(P$(X),Y,1)<>"B" THEN 4140
    if(MID$(P_str_arr[X_int],Y_int,1)=='B')goto Lbl_04140;
    // 04130  B=B+1
    B_int = B_int+1;

  Lbl_04140:
    // 04140 IF MID$(P$(X),Y,1)<>"R" THEN 4160
    if(MID$(P_str_arr[X_int],Y_int,1)=='R')goto Lbl_04160;
    // 04150 R=R+1
    R_int = R_int+1;

  Lbl_04160:
    // 04160 IF B=10 THEN 4200
    if(B_int==10)goto Lbl_04200;
    // 04170 IF R=10 THEN 4220
    if(R_int==10)goto Lbl_04220;
    // 04180 GOTO 04190
    goto Lbl_04190;

  Lbl_04190:
    // 04190 RETURN
    return;
};

  Lbl_04200:
    // 04200 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    b2c_printf("Blue is the winner!  %d Blue is the winner!  to  to  %d \n",B_int,R_int);
    // 04210 GOTO 4240
    goto Lbl_04240;

  Lbl_04220:
    // 04220 PRINT "RED IS THE WINNER! ";R;" TO ";B
    b2c_printf("Red is the winner!  %d Red is the winner!  to  to  %d \n",R_int,B_int);
    // 04230 GOTO 4240
    goto Lbl_04240;

  Lbl_04240:
    // 04240 GOTO 4250
    goto Lbl_04250;

  Lbl_04250:
    // 04250 END
    exit(4250);


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

  Lbl_04260:
    // 04260 IF B>R  THEN 4290
    if(B_int>R_int)goto Lbl_04290;
    // 04270 IF R>B THEN 4310
    if(R_int>B_int)goto Lbl_04310;
    // 04280 IF R=B THEN 4330
    if(R_int==B_int)goto Lbl_04330;

  Lbl_04290:
    // 04290 PRINT "BLUE IS THE WINNER! ";B;" TO ";R
    b2c_printf("Blue is the winner!  %d Blue is the winner!  to  to  %d \n",B_int,R_int);
    // 04300 GOTO 4340
    goto Lbl_04340;

  Lbl_04310:
    // 04310 PRINT "RED IS THE WINNER! ";R;" TO ";B
    b2c_printf("Red is the winner!  %d Red is the winner!  to  to  %d \n",R_int,B_int);
    // 04320 GOTO 4340
    goto Lbl_04340;

  Lbl_04330:
    // 04330 PRINT "IT'S A TIE!!  EACH PLAYER HAS ";B
    b2c_printf("It's a tie!!  Each player has  %d \n",B_int);

  Lbl_04340:
    // 04340 GOTO 4470
    goto Lbl_04470;

void Routine_04350(){
    // 04350 FOR G=X-1 TO X+1
    for(G_int=X_int-1;G_int<=X_int+1;G_int++){
        // 04360     FOR H=Y-1 TO Y+1
        for(H_int=Y_int-1;H_int<=Y_int+1;H_int++){
            // 04370     	IF G=0 THEN 4430
            if(G_int==0)goto Lbl_04430;
            // 04380     	IF H=0 THEN 4420
            if(H_int==0)goto Lbl_04420;
            // 04390     	IF G=8 THEN 4430
            if(G_int==8)goto Lbl_04430;
            // 04400     	IF H=8 THEN 4420
            if(H_int==8)goto Lbl_04420;
            // 04410     	IF MID$(P$(G),H,1)<>"*" THEN 4460
            if(MID$(P_str_arr[G_int],H_int,1)=='*')goto Lbl_04460;

  Lbl_04420:
            // 04420     NEXT H
            int dummy_4420=0; // Ignore this line.
        }; // End-For(H_int)

  Lbl_04430:
        // 04430 NEXT G
        int dummy_4430=0; // Ignore this line.
    }; // End-For(G_int)
    // 04440 PRINT "GAME OVER"
    b2c_printf("Game over\n");
    // 04450 GOTO 4260
    goto Lbl_04260;

  Lbl_04460:
    // 04460 GOTO 04480
    goto Lbl_04480;

  Lbl_04470:
    // 04470 END
    exit(4470);

  Lbl_04480:
    // 04480 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------

  Lbl_04490:
    // 04490 PRINT "MOVE: PLAYER B"
    b2c_printf("Move: player b\n");
    // 04500 GOSUB 3860
    Routine_03860();
    // 04510 GOSUB 4120
    Routine_04120();
    // 04520 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 04530 P9=X
    P9_int = X_int;
    // 04540 P8=Y
    P8_int = Y_int;
    // 04550 GOSUB 5580
    Routine_05580();
    // 04560 GOSUB 4350
    Routine_04350();
    // 04570 IF R$="C" THEN 4710
    if(strcmp(R_str,"C")==0)goto Lbl_04710;
    // 04580 GOSUB 3700
    Routine_03700();
    // 04590 PRINT
    b2c_printf("");
    // 04600 PRINT "MOVE: PLAYER A"
    b2c_printf("Move: player a\n");
    // 04610 GOSUB 3860
    Routine_03860();
    // 04620 GOSUB 4120
    Routine_04120();
    // 04630 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 04640 P9=X
    P9_int = X_int;
    // 04650 P8=Y
    P8_int = Y_int;
    // 04660 GOSUB 5580
    Routine_05580();
    // 04670 GOSUB 4350
    Routine_04350();
    // 04680 GOSUB 3700
    Routine_03700();
    // 04690 PRINT
    b2c_printf("");
    // 04700 GOTO 4490
    goto Lbl_04490;

  Lbl_04710:
    // 04710 IF X=1 THEN 4730
    if(X_int==1)goto Lbl_04730;
    // 04720 IF X<>7 THEN 4900
    if(X_int!=7)goto Lbl_04900;

  Lbl_04730:
    // 04730 IF Y>=4 THEN 4790
    if(Y_int>=4)goto Lbl_04790;
    // 04740 K=X
    K_int = X_int;
    // 04750 L=Y+1
    L_int = Y_int+1;
    // 04760 IF MID$(P$(K),L,1)<>"*" THEN 4780
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_04780;
    // 04770 L=Y-1
    L_int = Y_int-1;

  Lbl_04780:
    // 04780 GOTO 5160
    goto Lbl_05160;

  Lbl_04790:
    // 04790 IF Y<>4 THEN 4850
    if(Y_int!=4)goto Lbl_04850;
    // 04800 K=X
    K_int = X_int;
    // 04810 L=Y-1
    L_int = Y_int-1;
    // 04820 IF MID$(P$(K),L,1)<>"*" THEN 4840
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_04840;
    // 04830 L=Y+1
    L_int = Y_int+1;

  Lbl_04840:
    // 04840 GOTO 5160
    goto Lbl_05160;

  Lbl_04850:
    // 04850 K=X
    K_int = X_int;
    // 04860 L=Y-1
    L_int = Y_int-1;
    // 04870 IF MID$(P$(K),L,1)<>"*" THEN 4890
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_04890;
    // 04880 L=Y+1
    L_int = Y_int+1;

  Lbl_04890:
    // 04890 GOTO 5160
    goto Lbl_05160;

  Lbl_04900:
    // 04900 IF X>=5 THEN 5040
    if(X_int>=5)goto Lbl_05040;
    // 04910 IF Y>=4 THEN 4960
    if(Y_int>=4)goto Lbl_04960;
    // 04920 GOSUB 5370
    Routine_05370();
    // 04930 K=X-1
    K_int = X_int-1;
    // 04940 L=Y+1
    L_int = Y_int+1;
    // 04950 GOTO 5160
    goto Lbl_05160;

  Lbl_04960:
    // 04960 IF Y<>4 THEN 5000
    if(Y_int!=4)goto Lbl_05000;
    // 04970 K=X-1
    K_int = X_int-1;
    // 04980 L=Y
    L_int = Y_int;
    // 04990 GOTO 5160
    goto Lbl_05160;

  Lbl_05000:
    // 05000 GOSUB 5370
    Routine_05370();
    // 05010 K=X-1
    K_int = X_int-1;
    // 05020 L=Y-1
    L_int = Y_int-1;
    // 05030 GOTO 5160
    goto Lbl_05160;

  Lbl_05040:
    // 05040 IF Y>=4 THEN 5090
    if(Y_int>=4)goto Lbl_05090;
    // 05050 GOSUB 5370
    Routine_05370();
    // 05060 K=X+1
    K_int = X_int+1;
    // 05070 L=Y+1
    L_int = Y_int+1;
    // 05080 GOTO 5160
    goto Lbl_05160;

  Lbl_05090:
    // 05090 IF Y<>4 THEN 5130
    if(Y_int!=4)goto Lbl_05130;
    // 05100 K=X+1
    K_int = X_int+1;
    // 05110 L=Y
    L_int = Y_int;
    // 05120 GOTO 5160
    goto Lbl_05160;

  Lbl_05130:
    // 05130 GOSUB 5370
    Routine_05370();
    // 05140 K=X+1
    K_int = X_int+1;
    // 05150 L=Y-1
    L_int = Y_int-1;

  Lbl_05160:
    // 05160 IF MID$(P$(K),L,1)<>"*" THEN 5240
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_05240;

  Lbl_05170:
    // 05170 K=INT(3*RND(0)-0.99999) + X
    K_int = INT(3*RND(0)-1.)+X_int;
    // 05180 IF K=0 THEN 5170
    if(K_int==0)goto Lbl_05170;
    // 05190 IF K=8 THEN 5170
    if(K_int==8)goto Lbl_05170;

  Lbl_05200:
    // 05200 L=INT(3*RND(0)-0.99999) + Y
    L_int = INT(3*RND(0)-1.)+Y_int;
    // 05210 IF L=0 THEN 5200
    if(L_int==0)goto Lbl_05200;
    // 05220 IF L=8 THEN 5200
    if(L_int==8)goto Lbl_05200;
    // 05230 IF MID$(P$(K),L,1)="*" THEN 5170
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_05170;

  Lbl_05240:
    // 05240 X=K
    X_int = K_int;
    // 05250 Y=L
    Y_int = L_int;
    // 05260 GOSUB 4120
    Routine_04120();
    // 05270 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 05280 P9=X
    P9_int = X_int;
    // 05290 P8=Y
    P8_int = Y_int;
    // 05300 GOSUB 5580
    Routine_05580();
    // 05310 PRINT "I MOVE ";X;Y
    b2c_printf("I move  %d I move  %d \n",X_int,Y_int);
    // 05320 GOSUB 3700
    Routine_03700();
    // 05330 PRINT
    b2c_printf("");
    // 05340 GOSUB 4350
    Routine_04350();
    // 05350 GOTO 4490
    goto Lbl_04490;
    // 05360 REM GRAB CORNER PEG

void Routine_05370(){
    // 05370 X(2)=X
    X_int = X_int;
    // 05380 Y(2)=Y
    Y_int = Y_int;
    // 05390 FOR M=X(2)-1 TO X(2)+1
    for(M_int=X_int-1;M_int<=X_int+1;M_int++){
        // 05400     FOR N=Y(2)-1 TO Y(2)+1
        for(N_int=Y_int-1;N_int<=Y_int+1;N_int++){
            // 05410     	IF M=0 THEN 5540
            if(M_int==0)goto Lbl_05540;
            // 05420     	IF N=0 THEN 5530
            if(N_int==0)goto Lbl_05530;
            // 05430     	IF M=8 THEN 5540
            if(M_int==8)goto Lbl_05540;
            // 05440     	IF N=8 THEN 5530
            if(N_int==8)goto Lbl_05530;
            // 05450     	IF M=1 THEN 5470
            if(M_int==1)goto Lbl_05470;
            // 05460     	IF M<>7 THEN 5540
            if(M_int!=7)goto Lbl_05540;

  Lbl_05470:
            // 05470     	IF N=1 THEN 5490
            if(N_int==1)goto Lbl_05490;
            // 05480     	IF N<>7 THEN 5530
            if(N_int!=7)goto Lbl_05530;

  Lbl_05490:
            // 05490     	IF MID$(P$(M),N,1)="*" THEN 5550
            if(MID$(P_str_arr[M_int],N_int,1)=='*')goto Lbl_05550;
            // 05500     	K=M
            K_int = M_int;
            // 05510     	L=N
            L_int = N_int;
            // 05520     	GOTO 5240
            goto Lbl_05240;

  Lbl_05530:
            // 05530     NEXT N
            int dummy_5530=0; // Ignore this line.
        }; // End-For(N_int)

  Lbl_05540:
        // 05540 NEXT M
        int dummy_5540=0; // Ignore this line.
    }; // End-For(M_int)

  Lbl_05550:
    // 05550 GOTO 05560
    goto Lbl_05560;

  Lbl_05560:
    // 05560 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine G
//---------------------------------------------------------------------------
    // 05570 REM SUBROUTINE TO INSERT A CHARATER IN A CHARATER STRING

void Routine_05580(){
    // 05580 DIM P7(10)
    // 05590 CHANGE P$(P9) TO P7
    if(P_str_arr[P9_int]!=nullptr){
        for(int i=1;(i<=(int)strlen(P_str_arr[P9_int]))&&(i<=9);i++){
            P7_int_arr[0][i]=(int)P_str_arr[P9_int][i-1];
        }
    }
    // 05600 DIM P6(10)
    // 05610 CHANGE P9$ TO P6
    if(P9_str!=nullptr){
        for(int i=1;(i<=(int)strlen(P9_str))&&(i<=9);i++){
            P6_int_arr[0][i]=(int)P9_str[i-1];
        }
    }
    // 05620 P7(P8) = P6(1)
    P7_int_arr[P8_int] = P6_int_arr[1];
    // 05630 CHANGE P7 TO P$(P9)
    if(P_str_arr[P9_int]!=nullptr){
        for(int i=1;(i<=(int)strlen(P_str_arr[P9_int]))&&(i<=-1);i++){
            P_str_arr[P9_int][i-1]=(int)P7_int_arr[0][i];
        }
    }
    // 05640 GOTO 05650
    goto Lbl_05650;

  Lbl_05650:
    // 05650 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 RANDOMIZE
    RANDOMIZE();
    // 01010 REM *** PRESS UPS ***
    // 01020 REM *** RON BEHRNS ***
    // 01030 REM *** 1979 ***
    // 01040 B=0
    B_int = 0;
    // 01050 R=0
    R_int = 0;
    // 01060 PRINT "THIS IS THE GAME OF PRESS UPS"
    b2c_printf("This is the game of press ups\n");
    // 01070 PRINT "INSTRUCTIONS (Y OR N) ";
    b2c_printf("Instructions (y or n) ");
    // 01080 INPUT I$
    // Start of Basic INPUT statement 01080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&I_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 IF I$<>"Y" THEN 1270
    if(strcmp(I_str,"Y")!=0)goto Lbl_01270;
    // 01100 PRINT "TWO MAY PLAY -- THE COMPUTER IS YOUR REFEREE"
    b2c_printf("Two may play -- the computer is your referee\n");
    // 01110 PRINT "OR YOU MAY PLAY AGAINST THE COMPUTER"
    b2c_printf("Or you may play against the computer\n");
    // 01120 PRINT
    b2c_printf("");
    // 01130 PRINT "ONE PLAYER HAS RED PEGS, THE OTHER BLUE:YELLOW IS NEUTRAL"
    b2c_printf("One player has red pegs, the other blue:yellow is neutral\n");
    // 01140 PRINT "A PEG IS PRESSED DOWN BY INPUTTING COORDINATES OF A GRID"
    b2c_printf("A peg is pressed down by inputting coordinates of a grid\n");
    // 01150 PRINT "THE PLAYER WHO PRESSES DOWN ALL HIS PEGS FIRST WINS"
    b2c_printf("The player who presses down all his pegs first wins\n");
    // 01160 PRINT "YOU CAN PRESS DOWN YOUR OPPONENT'S PEGS"
    b2c_printf("You can press down your opponent's pegs\n");
    // 01170 PRINT "IF IT IS IMPOSSIBLE TO PRESS DOWN A PEG NEXT TO THE LAST"
    b2c_printf("If it is impossible to press down a peg next to the last\n");
    // 01180 PRINT "ONE PRESSED, THE GAME IS OVER."
    b2c_printf("One pressed, the game is over.\n");
    // 01190 PRINT "THE PLAYER WITH THE MOST PEGS PRESSED OF HIS COLOUR WINS"
    b2c_printf("The player with the most pegs pressed of his colour wins\n");
    // 01200 PRINT "END THE GAME AT ANY TIME BY INPUTTING ZERO(0) FOR THE "
    b2c_printf("End the game at any time by inputting zero(0) for the \n");
    // 01210 PRINT "X-COORDINATE"
    b2c_printf("X-coordinate\n");
    // 01220 PRINT
    b2c_printf("");
    // 01230 PRINT "DECIDE WHO STARTS (PLAYER A); A YELLOW PEG MUST BE PRESSED FIRST"
    b2c_printf("Decide who starts (player a); a yellow peg must be pressed first\n");
    // 01240 PRINT "THEN EACH PLAYER IN TURN PRESSES DOWN A PEG (OF ANY COLOUR)"
    b2c_printf("Then each player in turn presses down a peg (of any colour)\n");
    // 01250 PRINT "NEXT TO THE PREVIOUS ONE PRESSED (IN ANY DIRECTION INCLUDING"
    b2c_printf("Next to the previous one pressed (in any direction including\n");
    // 01260 PRINT "DIAGONALLY)."
    b2c_printf("Diagonally).\n");

  Lbl_01270:
    // 01270 PRINT
    b2c_printf("");
    // 01280 PRINT "PLAY WITH PARTNER(P) OR COMPUTER(C) ";
    b2c_printf("Play with partner(p) or computer(c) ");
    // 01290 INPUT R$
    // Start of Basic INPUT statement 01290
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&R_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01290
    // 01300 IF R$="C" THEN 1320
    if(strcmp(R_str,"C")==0)goto Lbl_01320;
    // 01310 GOTO 1350
    goto Lbl_01350;

  Lbl_01320:
    // 01320 PRINT "COMPUTER HAS BLUE PEGS--OPPONENT IS PLAYER B"
    b2c_printf("Computer has blue pegs--opponent is player b\n");
    // 01330 PRINT "COMPUTER FIRST(Y OR N) ";
    b2c_printf("Computer first(y or n) ");
    // 01340 INPUT F$
    // Start of Basic INPUT statement 01340
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&F_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01340

  Lbl_01350:
    // 01350 PRINT
    b2c_printf("");
    // 01360 PRINT "READY... HERE IS THE BOARD"
    b2c_printf("Ready... Here is the board\n");
    // 01370 PRINT
    b2c_printf("");
    // 01380 PRINT
    b2c_printf("");
    // 01390 DIM P$(7)
    // 01400 P$(1)="YBBBBBY"
    GLBpStr="Ybbbbby";
    P_str_arr[1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01410 P$(2)="RYYYYYR"
    GLBpStr="Ryyyyyr";
    P_str_arr[2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01420 P$(3)="RYYYYYR"
    GLBpStr="Ryyyyyr";
    P_str_arr[3] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01430 P$(4)="RYYYYYR"
    GLBpStr="Ryyyyyr";
    P_str_arr[4] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01440 P$(5)="RYYYYYR"
    GLBpStr="Ryyyyyr";
    P_str_arr[5] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01450 P$(6)="RYYYYYR"
    GLBpStr="Ryyyyyr";
    P_str_arr[6] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01460 P$(7)="YBBBBBY"
    GLBpStr="Ybbbbby";
    P_str_arr[7] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01470 GOSUB 3700
    Routine_03700();
    // 01480 PRINT
    b2c_printf("");
    // 01490 IF R$="C" THEN 1650
    if(strcmp(R_str,"C")==0)goto Lbl_01650;
    // 01500 PRINT "MOVE:PLAYER A"
    b2c_printf("Move:player a\n");

  Lbl_01510:
    // 01510 INPUT X,Y
    // Start of Basic INPUT statement 01510
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
    }; // End of Basic INPUT statement 01510
    // 01520 IF X>7 THEN 1510
    if(X_int>7)goto Lbl_01510;
    // 01530 IF Y>7 THEN 1510
    if(Y_int>7)goto Lbl_01510;
    // 01540 IF MID$(P$(X),Y,1)="Y" THEN 1570
    if(MID$(P_str_arr[X_int],Y_int,1)=='Y')goto Lbl_01570;
    // 01550 PRINT "ILLEGAL MOVE...PRESS A YELLOW PEG!! "
    b2c_printf("Illegal move...Press a yellow peg!! \n");
    // 01560 GOTO 1510
    goto Lbl_01510;

  Lbl_01570:
    // 01570 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01580 P9=X
    P9_int = X_int;
    // 01590 P8=Y
    P8_int = Y_int;
    // 01600 GOSUB 5580
    Routine_05580();
    // 01610 GOSUB 3700
    Routine_03700();
    // 01620 PRINT
    b2c_printf("");
    // 01630 IF R$="C" THEN 3040
    if(strcmp(R_str,"C")==0)goto Lbl_03040;
    // 01640 GO TO 2820
    goto Lbl_02820;

  Lbl_01650:
    // 01650 IF F$<>"Y" THEN 1760
    if(strcmp(F_str,"Y")!=0)goto Lbl_01760;
    // 01660 X=INT(3*RND(0) + 3)
    X_int = INT(3*RND(0)+3);
    // 01670 Y=4
    Y_int = 4;
    // 01680 PRINT "I MOVE ";X;Y
    b2c_printf("I move  %d I move  %d \n",X_int,Y_int);
    // 01690 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01700 P9=X
    P9_int = X_int;
    // 01710 P8=Y
    P8_int = Y_int;
    // 01720 GOSUB 5580
    Routine_05580();
    // 01730 GOSUB 3700
    Routine_03700();
    // 01740 PRINT
    b2c_printf("");
    // 01750 GOTO 2820
    goto Lbl_02820;

  Lbl_01760:
    // 01760 PRINT "MOVE; PLAYER B"
    b2c_printf("Move; player b\n");
    // 01770 GOTO1510
    goto Lbl_01510;
    // 02000 REM COMPUTER'S MOVE
    // 02750 END
    // 02810 END

  Lbl_02820:
    // 02820 PRINT "MOVE: PLAYER B"
    b2c_printf("Move: player b\n");
    // 02830 GOSUB 3860
    Routine_03860();
    // 02840 GOSUB 4120
    Routine_04120();
    // 02850 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02860 P9=X
    P9_int = X_int;
    // 02870 P8=Y
    P8_int = Y_int;
    // 02880 GOSUB 5580
    Routine_05580();
    // 02890 GOSUB 4350
    Routine_04350();
    // 02900 IF R$="C" THEN 3040
    if(strcmp(R_str,"C")==0)goto Lbl_03040;
    // 02910 GOSUB 3700
    Routine_03700();
    // 02920 PRINT
    b2c_printf("");
    // 02930 PRINT "MOVE: PLAYER A"
    b2c_printf("Move: player a\n");
    // 02940 GOSUB 3860
    Routine_03860();
    // 02950 GOSUB 4120
    Routine_04120();
    // 02960 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02970 P9=X
    P9_int = X_int;
    // 02980 P8=Y
    P8_int = Y_int;
    // 02990 GOSUB 5580
    Routine_05580();
    // 03000 GOSUB 4350
    Routine_04350();
    // 03010 GOSUB 3700
    Routine_03700();
    // 03020 PRINT
    b2c_printf("");
    // 03030 GOTO 2820
    goto Lbl_02820;

  Lbl_03040:
    // 03040 IF X=1 THEN 3060
    if(X_int==1)goto Lbl_03060;
    // 03050 IF X<>7 THEN 3230
    if(X_int!=7)goto Lbl_03230;

  Lbl_03060:
    // 03060 IF Y>=4 THEN 3120
    if(Y_int>=4)goto Lbl_03120;
    // 03070 K=X
    K_int = X_int;
    // 03080 L=Y+1
    L_int = Y_int+1;
    // 03090 IF MID$(P$(K),L,1)<>"*" THEN 3110
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_03110;
    // 03100 L=Y-1
    L_int = Y_int-1;

  Lbl_03110:
    // 03110 GOTO 3490
    goto Lbl_03490;

  Lbl_03120:
    // 03120 IF Y<>4 THEN 3180
    if(Y_int!=4)goto Lbl_03180;
    // 03130 K=X
    K_int = X_int;
    // 03140 L=Y-1
    L_int = Y_int-1;
    // 03150 IF MID$(P$(K),L,1)<>"*" THEN 3170
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_03170;
    // 03160 L=Y+1
    L_int = Y_int+1;

  Lbl_03170:
    // 03170 GOTO 3490
    goto Lbl_03490;

  Lbl_03180:
    // 03180 K=X
    K_int = X_int;
    // 03190 L=Y-1
    L_int = Y_int-1;
    // 03200 IF MID$(P$(K),L,1)<>"*" THEN 3220
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_03220;
    // 03210 L=Y+1
    L_int = Y_int+1;

  Lbl_03220:
    // 03220 GOTO 3490
    goto Lbl_03490;

  Lbl_03230:
    // 03230 IF X>=5 THEN 3370
    if(X_int>=5)goto Lbl_03370;
    // 03240 IF Y>=4 THEN 3290
    if(Y_int>=4)goto Lbl_03290;
    // 03250 GOSUB 5370
    Routine_05370();

  Lbl_03260:
    // 03260 K=X-1
    K_int = X_int-1;
    // 03270 L=Y+1
    L_int = Y_int+1;

  Lbl_03280:
    // 03280 GOTO 3490
    goto Lbl_03490;

  Lbl_03290:
    // 03290 IF Y<>4 THEN 3330
    if(Y_int!=4)goto Lbl_03330;

  Lbl_03300:
    // 03300 K=X-1
    K_int = X_int-1;

  Lbl_03310:
    // 03310 L=Y
    L_int = Y_int;
    // 03320 GOTO 3490
    goto Lbl_03490;

  Lbl_03330:
    // 03330 GOSUB 5370
    Routine_05370();
    // 03340 K=X-1
    K_int = X_int-1;
    // 03350 L=Y-1
    L_int = Y_int-1;
    // 03360 GOTO 3490
    goto Lbl_03490;

  Lbl_03370:
    // 03370 IF Y>=4 THEN 3420
    if(Y_int>=4)goto Lbl_03420;
    // 03380 GOSUB 5370
    Routine_05370();
    // 03390 K=X+1
    K_int = X_int+1;
    // 03400 L=Y+1
    L_int = Y_int+1;
    // 03410 GOTO 3490
    goto Lbl_03490;

  Lbl_03420:
    // 03420 IF Y<>4 THEN 3460
    if(Y_int!=4)goto Lbl_03460;
    // 03430 K=X+1
    K_int = X_int+1;

  Lbl_03440:
    // 03440 L=Y
    L_int = Y_int;
    // 03450 GOTO 3490
    goto Lbl_03490;

  Lbl_03460:
    // 03460 GOSUB 5370
    Routine_05370();
    // 03470 K=X+1
    K_int = X_int+1;
    // 03480 L=Y-1
    L_int = Y_int-1;

  Lbl_03490:
    // 03490 IF MID$(P$(K),L,1)<>"*" THEN 3570
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_03570;

  Lbl_03500:
    // 03500 K=INT(3*RND(0)-0.99999) + X
    K_int = INT(3*RND(0)-1.)+X_int;
    // 03510 IF K=0 THEN 3500
    if(K_int==0)goto Lbl_03500;
    // 03520 IF K=8 THEN 3500
    if(K_int==8)goto Lbl_03500;

  Lbl_03530:
    // 03530 L=INT(3*RND(0)-0.99999) + Y
    L_int = INT(3*RND(0)-1.)+Y_int;
    // 03540 IF L=0 THEN 3530
    if(L_int==0)goto Lbl_03530;
    // 03550 IF L=8 THEN 3530
    if(L_int==8)goto Lbl_03530;
    // 03560 IF MID$(P$(K),L,1)="*" THEN 3500
    if(MID$(P_str_arr[K_int],L_int,1)=='*')goto Lbl_03500;

  Lbl_03570:
    // 03570 X=K
    X_int = K_int;
    // 03580 Y=L
    Y_int = L_int;
    // 03590 GOSUB 4120
    Routine_04120();
    // 03600 P9$="*"
    GLBpStr="*";
    P9_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 03610 P9=X
    P9_int = X_int;
    // 03620 P8=Y
    P8_int = Y_int;
    // 03630 GOSUB 5580
    Routine_05580();
    // 03640 PRINT "I MOVE ";X;Y
    b2c_printf("I move  %d I move  %d \n",X_int,Y_int);
    // 03650 GOSUB 3700
    Routine_03700();
    // 03660 PRINT
    b2c_printf("");
    // 03670 GOSUB 4350
    Routine_04350();
    // 03680 GOTO 2820
    goto Lbl_02820;
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
