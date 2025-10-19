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
int    C_int;                                     // Basic: C 
int    D_int_arr[10];                             // Basic: D 
int    F_int;                                     // Basic: F 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
int    M_int_arr[10];                             // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int_arr[10];                             // Basic: P 
int    Q_int_arr[10];                             // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int_arr[10];                             // Basic: S 
int    T_int;                                     // Basic: T 
char*  V_str_arr[10];                             // Basic: V$ 
char*  W_str_arr[10];                             // Basic: W$ 
char*  X_str;                                     // Basic: X$ 
int    Y_int_arr[10];                             // Basic: Y 
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
    // 01000 PRINT "BASIC LIBRARY--'HORSES'--18-JUL-70"
    b2c_printf("Basic library--'horses'--18-jul-70\n");
    // 01010 REM  *  *  *  *  *  *  *    MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *  *
    // 01020 REM
    // 01030 RANDOM
    RANDOMIZE();
    // 01040 PRINT"WELCOME TO DATALINE SYSTEMS RACETRACK"
    b2c_printf("Welcome to dataline systems racetrack\n");
    // 01050 PRINT
    b2c_printf("");
    // 01060 PRINT "DO YOU WANT DIRECTIONS";
    b2c_printf("Do you want directions");
    // 01070 INPUT X$
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
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01070
    // 01080 IF X$="NO" THEN1140
    if(strcmp(X_str,"No")==0)goto Lbl_01140;
    // 01090 PRINT"UP TO 10 MAY PLAY.A TABLE OF ODDS WILL BE PRINTED. YOU"
    b2c_printf("Up to 10 may play.A table of odds will be printed. You\n");
    // 01100 PRINT"MAY BET ANY + AMOUNT UNDER 100000 ON ONE HORSE."
    b2c_printf("May bet any + amount under 100000 on one horse.\n");
    // 01110 PRINT "DURING THE RACE , A HORSE WILL BE SHOWN BY ITS"
    b2c_printf("During the race , a horse will be shown by its\n");
    // 01120 PRINT"NUMBER.THE HORSES RACE DOWN THE PAPER!"
    b2c_printf("Number.The horses race down the paper!\n");
    // 01130 PRINT
    b2c_printf("");

  Lbl_01140:
    // 01140 PRINT "HOW MANY WANT TO BET";
    b2c_printf("How many want to bet");
    // 01150 INPUT C
    // Start of Basic INPUT statement 01150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160 PRINT "WHEN ? APPEARS,TYPE NAME"
    b2c_printf("When ? Appears,type name\n");
    // 01170 FOR A=1 TO C
    for(A_int=1;A_int<=C_int;A_int++){
        // 01180 INPUT W$(A)
        // Start of Basic INPUT statement 01180
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtos(&W_str_arr[A_int],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01180
        // 01190 NEXT A
        int dummy_1190=0; // Ignore this line.
    }; // End-For(A_int)
    // 01200 PRINT
    b2c_printf("");
    // 01210 PRINT"HORSE"," ","NUMBER","ODDS"
    b2c_printf("Horse NumberOdds\n");
    // 01220 PRINT
    b2c_printf("");
    // 01230 LET S(M(I))=0
    S_int_arr[M_int_arr[I_int]] = 0;
    // 01240 LET R=0
    R_int = 0;
    // 01250 FOR A=1 TO 8
    for(A_int=1;A_int<=8;A_int++){
        // 01260 LET D(A)=INT(10*RND+1)
        D_int_arr[A_int] = INT(10*RND()+1);
        // 01270 NEXT A
        int dummy_1270=0; // Ignore this line.
    }; // End-For(A_int)
    // 01280 FOR A=1TO 8
    for(A_int=1;A_int<=8;A_int++){
        // 01290 LET R=R+D(A)
        R_int = R_int+D_int_arr[A_int];
        // 01300 NEXT A
        int dummy_1300=0; // Ignore this line.
    }; // End-For(A_int)
    // 01310 LET V$(1)="JOE MAW"
    GLBpStr="Joe maw";
    V_str_arr[1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01320 LET V$(2)="L.B.J."
    GLBpStr="L.B.J.";
    V_str_arr[2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01330 LET V$(3)="MR.WASHBURN"
    GLBpStr="Mr.Washburn";
    V_str_arr[3] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01340 LET V$(4)="MISS KAREN"
    GLBpStr="Miss karen";
    V_str_arr[4] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01350 LET V$(5)="JOLLY"
    GLBpStr="Jolly";
    V_str_arr[5] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01360 LET V$(6)="FOR Q."
    GLBpStr="For q.";
    V_str_arr[6] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01370 LET V$(7)="JELLY DO NOT"
    GLBpStr="Jelly do not";
    V_str_arr[7] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01380 LET V$(8)="ACID ROCK"
    GLBpStr="Acid rock";
    V_str_arr[8] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01390 FOR N=1 TO8
    for(N_int=1;N_int<=8;N_int++){
        // 01400 PRINT V$(N)," ",N,R/D(N);":1"
        b2c_printf("%sü “[   %d  _int/D_int_arr[N_int]_int/D_int_arr[N_int]:1\n",V_str_arr[N_int],N_int);
        // 01410 NEXT N
        int dummy_1410=0; // Ignore this line.
    }; // End-For(N_int)
    // 01420 PRINT"--------------------------------------------------"
    b2c_printf("--------------------------------------------------\n");
    // 01430 PRINT "PLACE YOUR BETS...HORSE # THEN AMOUNT"
    b2c_printf("Place your bets...Horse # then amount\n");
    // 01440 FOR J=1 TO C
    for(J_int=1;J_int<=C_int;J_int++){

  Lbl_01450:
        // 01450 PRINT W$(J);
        b2c_printf("%sÁ\þ\n",W_str_arr[J_int]);
        // 01460 INPUT Q(J),P(J)
        // Start of Basic INPUT statement 01460
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&Q_int_arr[J_int],args,0)) ||
                    (err += b2c_strtoi(&P_int_arr[J_int],args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01460
        // 01470 IF P(J)<1 THEN 1490
        if(P_int_arr[J_int]<1)goto Lbl_01490;
        // 01480 IF P(J)<100000 THEN 1510
        if(P_int_arr[J_int]<100000)goto Lbl_01510;

  Lbl_01490:
        // 01490 PRINT"  YOU CAN'T DO THAT!"
        b2c_printf("  you can't do that!\n");
        // 01500 GOTO 1450
        goto Lbl_01450;

  Lbl_01510:
        // 01510 NEXT J
        int dummy_1510=0; // Ignore this line.
    }; // End-For(J_int)
    // 01520 PRINT
    b2c_printf("");
    // 01530 PRINT"1 2 3 4 5 6 7 8"
    b2c_printf("1 2 3 4 5 6 7 8\n");

  Lbl_01540:
    // 01540 PRINT"XXXXSTARTXXXX";
    b2c_printf("Xxxxstartxxxx");
    // 01550 FOR I=1 TON
    for(I_int=1;I_int<=N_int;I_int++){
        // 01560 LET M=I
        M_int_arr[0] = I_int;
        // 01570 LET M(I)=M
        M_int_arr[I_int] = M_int_arr[0];
        // 01580 LET Y(M(I))=INT(100*RND+1)
        Y_int_arr[M_int_arr[I_int]] = INT(100*RND()+1);
        // 01590 IF Y(M(I))<10 THEN1680
        if(Y_int_arr[M_int_arr[I_int]]<10)goto Lbl_01680;
        // 01600 LET S=INT(R/D(I)+.5)
        S_int_arr[0] = INT(R_int/D_int_arr[I_int]+0.5);
        // 01610 IF Y(M(I))<S+17 THEN 1700
        if(Y_int_arr[M_int_arr[I_int]]<S_int_arr[0]+17)goto Lbl_01700;
        // 01620 IF Y(M(I))<S+37 THEN 1720
        if(Y_int_arr[M_int_arr[I_int]]<S_int_arr[0]+37)goto Lbl_01720;
        // 01630 IF Y(M(I))<S+57 THEN1740
        if(Y_int_arr[M_int_arr[I_int]]<S_int_arr[0]+57)goto Lbl_01740;
        // 01640 IF Y(M(I))<77+S THEN1760
        if(Y_int_arr[M_int_arr[I_int]]<77+S_int_arr[0])goto Lbl_01760;
        // 01650 IF Y(M(I))<S+92 THEN1780
        if(Y_int_arr[M_int_arr[I_int]]<S_int_arr[0]+92)goto Lbl_01780;
        // 01660 LET Y(M(I))=7
        Y_int_arr[M_int_arr[I_int]] = 7;
        // 01670 GOTO 1790
        goto Lbl_01790;

  Lbl_01680:
        // 01680 LET Y(M(I))=1
        Y_int_arr[M_int_arr[I_int]] = 1;
        // 01690 GOTO 1790
        goto Lbl_01790;

  Lbl_01700:
        // 01700 LET Y(M(I))=2
        Y_int_arr[M_int_arr[I_int]] = 2;
        // 01710 GOTO 1790
        goto Lbl_01790;

  Lbl_01720:
        // 01720 LET Y(M(I))=3
        Y_int_arr[M_int_arr[I_int]] = 3;
        // 01730 GOTO 1790
        goto Lbl_01790;

  Lbl_01740:
        // 01740 LET Y(M(I))=4
        Y_int_arr[M_int_arr[I_int]] = 4;
        // 01750 GOTO 1790
        goto Lbl_01790;

  Lbl_01760:
        // 01760 LET Y(M(I))=5
        Y_int_arr[M_int_arr[I_int]] = 5;
        // 01770 GOTO 1790
        goto Lbl_01790;

  Lbl_01780:
        // 01780 LET Y(M(I))=6
        Y_int_arr[M_int_arr[I_int]] = 6;

  Lbl_01790:
        // 01790 NEXTI
        int dummy_1790=0; // Ignore this line.
    }; // End-For(I_int)
    // 01800 LET M=I
    M_int_arr[0] = I_int;
    // 01810 FOR I=1TO8
    for(I_int=1;I_int<=8;I_int++){
        // 01820 LET S(M(I))=S(M(I))+Y(M(I))
        S_int_arr[M_int_arr[I_int]] = S_int_arr[M_int_arr[I_int]]+Y_int_arr[M_int_arr[I_int]];
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
            if(S_int_arr[M_int_arr[I_int]]<S_int_arr[M_int_arr[I_int+1]])goto Lbl_01910;
            // 01880 LET H=M(I)
            H_int = M_int_arr[I_int];
            // 01890 LET M(I)=M(I+1)
            M_int_arr[I_int] = M_int_arr[I_int+1];
            // 01900 LET M(I+1)=H
            M_int_arr[I_int+1] = H_int;

  Lbl_01910:
            // 01910 NEXT I
            int dummy_1910=0; // Ignore this line.
        }; // End-For(I_int)
        // 01920 NEXT L
        int dummy_1920=0; // Ignore this line.
    }; // End-For(L_int)
    // 01930 LET T=S(M(8))
    T_int = S_int_arr[M_int_arr[8]];
    // 01940 FOR I=1 TO8
    for(I_int=1;I_int<=8;I_int++){
        // 01950 LET B=S(M(I))-S(M(I-1))
        B_int = S_int_arr[M_int_arr[I_int]]-S_int_arr[M_int_arr[I_int-1]];
        // 01960 IF B=0 THEN 2010
        if(B_int==0)goto Lbl_02010;
        // 01970 FOR A=1 TO B
        for(A_int=1;A_int<=B_int;A_int++){
            // 01980 PRINT
            b2c_printf("");
            // 01990 IF S(M(I))>27 THEN2060
            if(S_int_arr[M_int_arr[I_int]]>27)goto Lbl_02060;
            // 02000 NEXT A
            int dummy_2000=0; // Ignore this line.
        }; // End-For(A_int)

  Lbl_02010:
        // 02010 PRINT M(I);
        b2c_printf(" %d Á\þ\n",M_int_arr[I_int]);
        // 02020 NEXT I
        int dummy_2020=0; // Ignore this line.
    }; // End-For(I_int)
    // 02030 FOR A=1 TO 28-T
    for(A_int=1;A_int<=28-T_int;A_int++){
        // 02040 PRINT
        b2c_printf("");
        // 02050 NEXT A
        int dummy_2050=0; // Ignore this line.
    }; // End-For(A_int)

  Lbl_02060:
    // 02060 PRINT"XXXXFINISHXXXX"
    b2c_printf("Xxxxfinishxxxx\n");
    // 02070 IF T<28 THEN 1540
    if(T_int<28)goto Lbl_01540;
    // 02080 PRINT"**************"
    b2c_printf("**************\n");
    // 02090 PRINT"WINNER IS ";
    b2c_printf("Winner is ");
    // 02100 FOR I=8 TO 1STEP-1
    for(I_int=8;I_int>=1;I_int+=-1){
        // 02110 LET F=M(I)
        F_int = M_int_arr[I_int];
        // 02120 PRINT
        b2c_printf("");
        // 02130 PRINT "HORSE NO." F, V$(F)
        b2c_printf("Horse no. %d Horse no.%s\n",F_int,V_str_arr[F_int]);
        // 02140 NEXT I
        int dummy_2140=0; // Ignore this line.
    }; // End-For(I_int)
    // 02150 FOR J=1 TO C
    for(J_int=1;J_int<=C_int;J_int++){
        // 02160 IF Q(J)<>M(8) THEN 2190
        if(Q_int_arr[J_int]!=M_int_arr[8])goto Lbl_02190;
        // 02170 LET N=Q(J)
        N_int = Q_int_arr[J_int];
        // 02180 PRINT W$(J);"WINS $";(R/D(N))*P(J)
        b2c_printf("%sžü “[Wins $Wins $R_int/D_int_arr[N_int])*P_int_arr[J_int]\n",W_str_arr[J_int]);

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
