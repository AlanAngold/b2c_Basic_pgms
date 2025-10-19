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
char* data_01370s[]={"13","14","15","22","23","24","29","30","31","32","33","34","35","38","39","40","41"};
char* data_01380s[]={"42","43","44","47","48","49","50","51","52","53","58","59","60","67","68","69"};
char* data_01790s[]={"13","14","15","22","23","24","29","30","31","32","33","34","35","38","39","40","41"};
char* data_01800s[]={"42","43","44","47","48","49","50","51","52","53","58","59","60","67","68","69"};
char* data_02700s[]={"13","14","15","22","23","24","29","30","31","32","33","34","35","38","39","40","41"};
char* data_02710s[]={"42","43","44","47","48","49","50","51","52","53","58","59","60","67","68","69"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1370, 17,data_01370s},
    { 1380, 16,data_01380s},
    { 1790, 17,data_01790s},
    { 1800, 16,data_01800s},
    { 2700, 17,data_02700s},
    { 2710, 16,data_02710s},
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
int    B_int_arr[70];                             // Basic: B 
int    C_int;                                     // Basic: C 
int    F_int;                                     // Basic: F 
int    M_int;                                     // Basic: M 
int    P_int;                                     // Basic: P 
int    R_int;                                     // Basic: R 
int    T_int_arr[9][9];                           // Basic: T 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01560();
void Routine_01880();
void Routine_02470();

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
    // 01970 REM *** PRINT BOARD

void Routine_01980(){
    // 01980 FOR X=1 TO 9
    for(X_int=1;X_int<=9;X_int++){
        // 01990 FOR Y=1 TO 9
        for(Y_int=1;Y_int<=9;Y_int++){
            // 02000 IF (X-1)*(X-9)*(Y-1)*(Y-9)=0 THEN 2040
            if((X_int-1)*(X_int-9)*(Y_int-1)*(Y_int-9)==0)goto Lbl_02040;
            // 02010 IF (X-4)*(X-5)*(X-6)=0 THEN 2050
            if((X_int-4)*(X_int-5)*(X_int-6)==0)goto Lbl_02050;
            // 02020 IF (Y-4)*(Y-5)*(Y-6)=0 THEN 2050
            if((Y_int-4)*(Y_int-5)*(Y_int-6)==0)goto Lbl_02050;
            // 02030 REM

  Lbl_02040:
            // 02040 GOTO 2100
            goto Lbl_02100;

  Lbl_02050:
            // 02050 IF T(X,Y)<>5 THEN 2080
            if(T_int_arr[X_int][Y_int]!=5)goto Lbl_02080;
            // 02060 PRINT TAB(Y*2);"!";
            b2c_printf("!");
            // 02070 GOTO 2100
            goto Lbl_02100;

  Lbl_02080:
            // 02080 PRINT TAB(Y*2);"O";
            b2c_printf("O");
            // 02090 REM

  Lbl_02100:
            // 02100 NEXT Y
            int dummy_2100=0; // Ignore this line.
        }; // End-For(Y_int)
        // 02110 PRINT
        b2c_printf("");
        // 02120 NEXT X
        int dummy_2120=0; // Ignore this line.
    }; // End-For(X_int)
    // 02130 GOTO 02140
    goto Lbl_02140;

  Lbl_02140:
    // 02140 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 02150 REM *** UPDATE BOARD

void Routine_02160(){
    // 02160 C=1: FOR X=1 TO 9
    for(X_int=1;X_int<=9;X_int++){
        // 02170 FOR Y=1 TO 9
        for(Y_int=1;Y_int<=9;Y_int++){
            // 02180 IF C<>Z THEN 2370
            if(C_int!=Z_int)goto Lbl_02370;
            // 02190 IF C+2<>P THEN 2240
            if(C_int+2!=P_int)goto Lbl_02240;
            // 02200 IF T(X,Y+1)=0 THEN 2440
            if(T_int_arr[X_int][Y_int+1]==0)goto Lbl_02440;
            // 02210 T(X,Y+2)=5
            T_int_arr[X_int][Y_int+2] = 5;
            // 02220 T(X,Y+1)=0: B(C+1)=-3
            B_int_arr[C_int+1] = -3;
            // 02230 GOTO 2350
            goto Lbl_02350;

  Lbl_02240:
            // 02240 IF C+18<>P THEN 2280
            if(C_int+18!=P_int)goto Lbl_02280;
            // 02250 IF T(X+1,Y)=0 THEN 2440
            if(T_int_arr[X_int+1][Y_int]==0)goto Lbl_02440;
            // 02260 T(X+2,Y)=5: T(X+1,Y)=0: B(C+9)=-3
            B_int_arr[C_int+9] = -3;
            // 02270 GOTO 2350
            goto Lbl_02350;

  Lbl_02280:
            // 02280 IF C-2<>P THEN 2320
            if(C_int-2!=P_int)goto Lbl_02320;
            // 02290 IF T(X,Y-1)=0 THEN 2440
            if(T_int_arr[X_int][Y_int-1]==0)goto Lbl_02440;
            // 02300 T(X,Y-2)=5: T(X,Y-1)=0: B(C-1)=-3
            B_int_arr[C_int-1] = -3;
            // 02310 GOTO 2350
            goto Lbl_02350;

  Lbl_02320:
            // 02320 IF C-18<>P THEN 2370
            if(C_int-18!=P_int)goto Lbl_02370;
            // 02330 IF T(X-1,Y)=0 THEN 2440
            if(T_int_arr[X_int-1][Y_int]==0)goto Lbl_02440;
            // 02340 T(X-2,Y)=5: T(X-1,Y)=0: B(C-9)=-3
            B_int_arr[C_int-9] = -3;

  Lbl_02350:
            // 02350 B(Z)=-3: B(P)=-7
            B_int_arr[P_int] = -7;
            // 02360 T(X,Y)=0: GOTO 2400
            goto Lbl_02400;

  Lbl_02370:
            // 02370 C=C+1
            C_int = C_int+1;
            // 02380 NEXT Y
            int dummy_2380=0; // Ignore this line.
        }; // End-For(Y_int)
        // 02390 NEXT X
        int dummy_2390=0; // Ignore this line.
    }; // End-For(X_int)

  Lbl_02400:
    // 02400 GOTO 02410
    goto Lbl_02410;

  Lbl_02410:
    // 02410 RETURN
    return;
};

  Lbl_02420:
    // 02420 INPUT "MOVE WHICH PIECE";Z
    // Start of Basic INPUT statement 02420
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""MOVE WHICH PIECE"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02420
    // 02430 IF B(Z)=-7 THEN 2450
    if(B_int_arr[Z_int]==-7)goto Lbl_02450;

  Lbl_02440:
    // 02440 PRINT "ILLEGAL MOVE, TRY AGAIN...": GOTO 2420
    goto Lbl_02420;

  Lbl_02450:
    // 02450 INPUT "TO WHERE";P
    // Start of Basic INPUT statement 02450
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""TO WHERE"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02450
    // 02460 IF B(P)=0 THEN 2440
    if(B_int_arr[P_int]==0)goto Lbl_02440;
    // 02470 IF B(P)=-7 THEN 2440
    if(B_int_arr[P_int]==-7)goto Lbl_02440;
    // 02480 IF Z=P THEN 2420
    if(Z_int==P_int)goto Lbl_02420;
    // 02490 IF ((Z+P)/2)=INT((Z+P)/2) THEN 2510
    if(((Z_int+P_int)/2)==INT((Z_int+P_int)/2))goto Lbl_02510;
    // 02500 GOTO 2440
    goto Lbl_02440;

  Lbl_02510:
    // 02510 IF (ABS(Z-P)-2)*(ABS(Z-P)-18)<>0 THEN 2440
    if((ABS(Z_int-P_int)-2)*(ABS(Z_int-P_int)-18)!=0)goto Lbl_02440;
    // 02520 GOSUB 2160
    Routine_02160();
    // 02530 GOSUB 1980
    Routine_01980();
    // 02540 GOSUB 1510
    Routine_02890();
    // 02550 GOTO 2420
    goto Lbl_02420;


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

  Lbl_02560:
    // 02560 FOR R=1 TO 9
    for(R_int=1;R_int<=9;R_int++){
        // 02570 FOR C=1 TO 9
        for(C_int=1;C_int<=9;C_int++){
            // 02580 IF (R-4)*(R-5)*(R-6)=0 THEN 2620
            if((R_int-4)*(R_int-5)*(R_int-6)==0)goto Lbl_02620;
            // 02590 IF (C-4)*(C-5)*(C-6)=0 THEN 2620
            if((C_int-4)*(C_int-5)*(C_int-6)==0)goto Lbl_02620;

  Lbl_02600:
            // 02600 T(R,C)=-5
            T_int_arr[R_int][C_int] = -5;
            // 02610 GOTO 2640
            goto Lbl_02640;

  Lbl_02620:
            // 02620 IF (R-1)*(C-1)*(R-9)*(C-9)=0 THEN 2600
            if((R_int-1)*(C_int-1)*(R_int-9)*(C_int-9)==0)goto Lbl_02600;
            // 02630 T(R,C)=5
            T_int_arr[R_int][C_int] = 5;

  Lbl_02640:
            // 02640 NEXT C
            int dummy_2640=0; // Ignore this line.
        }; // End-For(C_int)
        // 02650 NEXT R
        int dummy_2650=0; // Ignore this line.
    }; // End-For(R_int)
    // 02660 T(5,5)=0: GOSUB 1980
    Routine_01980();
    // 02670 REM *** INPUT MOVE AND CHECK ON LEGALITY
    // 02680 FOR W=1 TO 33
    for(W_int=1;W_int<=33;W_int++){
        // 02690 READ M
        M_int = Get_Data_Int();
        // 02700 DATA 13,14,15,22,23,24,29,30,31,32,33,34,35,38,39,40,41
        // 02710 DATA 42,43,44,47,48,49,50,51,52,53,58,59,60,67,68,69
        // 02720 B(M)=-7: NEXT W
        int dummy_2720=0; // Ignore this line.
    }; // End-For(W_int)
    // 02730 B(41)=-3
    B_int_arr[41] = -3;

  Lbl_02740:
    // 02740 INPUT "MOVE WHICH PIECE";Z
    // Start of Basic INPUT statement 02740
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""MOVE WHICH PIECE"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02740
    // 02750 IF B(Z)=-7 THEN 2770
    if(B_int_arr[Z_int]==-7)goto Lbl_02770;

  Lbl_02760:
    // 02760 PRINT "ILLEGAL MOVE, TRY AGAIN...": GOTO 2740
    goto Lbl_02740;

  Lbl_02770:
    // 02770 INPUT "TO WHERE";P
    // Start of Basic INPUT statement 02770
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""TO WHERE"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02770
    // 02780 IF B(P)=0 THEN 2760
    if(B_int_arr[P_int]==0)goto Lbl_02760;
    // 02790 IF B(P)=-7 THEN 2760
    if(B_int_arr[P_int]==-7)goto Lbl_02760;
    // 02800 IF Z=P THEN 2740
    if(Z_int==P_int)goto Lbl_02740;
    // 02810 IF ((Z+P)/2)=INT((Z+P)/2) THEN 2830
    if(((Z_int+P_int)/2)==INT((Z_int+P_int)/2))goto Lbl_02830;
    // 02820 GOTO 2760
    goto Lbl_02760;

  Lbl_02830:
    // 02830 IF (ABS(Z-P)-2)*(ABS(Z-P)-18)<>0 THEN 2760
    if((ABS(Z_int-P_int)-2)*(ABS(Z_int-P_int)-18)!=0)goto Lbl_02760;
    // 02840 GOSUB 2160
    Routine_02160();
    // 02850 GOSUB 1980
    Routine_01980();
    // 02860 GOSUB 1510
    Routine_02890();
    // 02870 GOTO 2740
    goto Lbl_02740;
    // 02880 REM*** CHECK IF GAME IS OVER

void Routine_02890(){
    // 02890 F=0
    F_int = 0;
    // 02900 FOR R=2 TO 8
    for(R_int=2;R_int<=8;R_int++){
        // 02910 FOR C=2 TO 8
        for(C_int=2;C_int<=8;C_int++){
            // 02920 IF T(R,C)<>5 THEN 3100
            if(T_int_arr[R_int][C_int]!=5)goto Lbl_03100;
            // 02930 F=F+1
            F_int = F_int+1;
            // 02940 FOR A=R-1 TO R+1
            for(A_int=R_int-1;A_int<=R_int+1;A_int++){
                // 02950 T=0
                T_int_arr[0] = 0;
                // 02960 FOR B=C-1 TO C+1
                for(B_int_arr[0]=C_int-1;B_int_arr[0]<=C_int+1;B_int_arr[0]++){
                    // 02970 T=T+T(A,B)
                    T_int_arr[0] = T_int_arr[0]+T_int_arr[A_int][B_int_arr[0]];
                    // 02980 NEXT B
                    int dummy_2980=0; // Ignore this line.
                }; // End-For(B_int_arr[0])
                // 02990 IF T<>10 THEN 3010
                if(T_int_arr[0]!=10)goto Lbl_03010;
                // 03000 IF T(A,C)<>0 THEN 3210
                if(T_int_arr[A_int][C_int]!=0)goto Lbl_03210;

  Lbl_03010:
                // 03010 NEXT A
                int dummy_3010=0; // Ignore this line.
            }; // End-For(A_int)
            // 03020 FOR X=C-1 TO C+1
            for(X_int=C_int-1;X_int<=C_int+1;X_int++){
                // 03030 T=0
                T_int_arr[0] = 0;
                // 03040 FOR Y=R-1 TO R+1
                for(Y_int=R_int-1;Y_int<=R_int+1;Y_int++){
                    // 03050 T=T+T(Y,X)
                    T_int_arr[0] = T_int_arr[0]+T_int_arr[Y_int][X_int];
                    // 03060 NEXT Y
                    int dummy_3060=0; // Ignore this line.
                }; // End-For(Y_int)
                // 03070 IF T<>10 THEN 3090
                if(T_int_arr[0]!=10)goto Lbl_03090;
                // 03080 IF T(R,X)<>0 THEN 3210
                if(T_int_arr[R_int][X_int]!=0)goto Lbl_03210;

  Lbl_03090:
                // 03090 NEXT X
                int dummy_3090=0; // Ignore this line.
            }; // End-For(X_int)

  Lbl_03100:
            // 03100 NEXT C
            int dummy_3100=0; // Ignore this line.
        }; // End-For(C_int)
        // 03110 NEXT R
        int dummy_3110=0; // Ignore this line.
    }; // End-For(R_int)
    // 03120 REM *** GAME IS OVER
    // 03130 PRINT "THE GAME IS OVER."
    b2c_printf("The game is over.\n");
    // 03140 PRINT "YOU HAD";F;"PIECES REMAINING."
    b2c_printf("You had %d You hadPieces remaining.\n",F_int);
    // 03150 IF F<>1 THEN 3180
    if(F_int!=1)goto Lbl_03180;
    // 03160 PRINT "BRAVO!  YOU MADE A PERFECT SCORE!"
    b2c_printf("Bravo!  You made a perfect score!\n");
    // 03170 PRINT "SAVE THIS PAPER AS A RECORD OF YOUR ACCOMPLISHMENT!"
    b2c_printf("Save this paper as a record of your accomplishment!\n");

  Lbl_03180:
    // 03180 PRINT: INPUT "PLAY AGAIN (YES OR NO)";A$
    // Start of Basic INPUT statement 03180
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""PLAY AGAIN (YES OR NO)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03180
    // 03190 IF A$="NO" THEN 3220
    if(strcmp(A_str,"No")==0)goto Lbl_03220;
    // 03200 RESTORE: GOTO 2560
    goto Lbl_02560;

  Lbl_03210:
    // 03210 GOTO 03240
    goto Lbl_03240;

  Lbl_03220:
    // 03220 PRINT: PRINT "SO LONG FOR NOW.": PRINT
    b2c_printf("");
    // 03230 END
    exit(3230);

  Lbl_03240:
    // 03240 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"H-I-Q"
    b2c_printf("H-i-q\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 DIM B(70),T(9,9)
    // 01040 PRINT "HERE IS THE BOARD:": PRINT
    b2c_printf("");
    // 01050 PRINT "          !    !    !"
    b2c_printf("          !    !    !\n");
    // 01060 PRINT "         13   14   15": PRINT
    b2c_printf("");
    // 01070 PRINT "          !    !    !"
    b2c_printf("          !    !    !\n");
    // 01080 PRINT "         22   23   24": PRINT
    b2c_printf("");
    // 01090 PRINT "!    !    !    !    !    !    !"
    b2c_printf("!    !    !    !    !    !    !\n");
    // 01100 PRINT "29   30   31   32   33   34   35": PRINT
    b2c_printf("");
    // 01110 PRINT "!    !    !    !    !    !    !"
    b2c_printf("!    !    !    !    !    !    !\n");
    // 01120 PRINT "38   39   40   41   42   43   44": PRINT
    b2c_printf("");
    // 01130 PRINT "!    !    !    !    !    !    !"
    b2c_printf("!    !    !    !    !    !    !\n");
    // 01140 PRINT "47   48   49   50   51   52   53": PRINT
    b2c_printf("");
    // 01150 PRINT "          !    !    !"
    b2c_printf("          !    !    !\n");
    // 01160 PRINT "         58   59   60": PRINT
    b2c_printf("");
    // 01170 PRINT "          !    !    !"
    b2c_printf("          !    !    !\n");
    // 01180 PRINT "         67   68   69": PRINT
    b2c_printf("");
    // 01190 PRINT "TO SAVE TYPING TIME, A COMPRESSED VERSION OF THE GAME BOARD"
    b2c_printf("To save typing time, a compressed version of the game board\n");
    // 01200 PRINT "WILL BE USED DURING PLAY.  REFER TO THE ABOVE ONE FOR PEG"
    b2c_printf("Will be used during play.  Refer to the above one for peg\n");
    // 01210 PRINT "NUMBERS.  OK, LET'S BEGIN."
    b2c_printf("Numbers.  Ok, let's begin.\n");
    // 01220 REM *** SET UP BOARD
    // 01230 FOR R=1 TO 9
    for(R_int=1;R_int<=9;R_int++){
        // 01240 FOR C=1 TO 9
        for(C_int=1;C_int<=9;C_int++){
