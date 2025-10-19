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
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    FNM_int_arr[10];                           // Basic: FNM 
int    M_int;                                     // Basic: M 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    X_int;                                     // Basic: X 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01630();
void Routine_01680();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused X
int FNM(int X){
    int rtn=X_int-8*INT((X_int-1)/8);
    return(rtn);
}

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
    // 01620 REM

void Routine_01630(){
    // 01630 GOSUB 1680
    Routine_01680();
    // 01640 PRINT "YOUR MOVE";
    b2c_printf("Your move");
    // 01650 INPUT M
    // Start of Basic INPUT statement 01650
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01650
    // 01660 GOTO 01670
    goto Lbl_01670;

  Lbl_01670:
    // 01670 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01680(){
    // 01680 PRINT "COMPUTER MOVES";M
    b2c_printf("Computer moves %d \n",M_int);
    // 01690 GOTO 01700
    goto Lbl_01700;

  Lbl_01700:
    // 01700 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(30);"TIC TAC TOE"
    b2c_printf("Tic tac toe\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 REM
    // 01040 REM   THIS PROGRAM PLAYS TIC TAC TOE
    // 01050 REM   THE MACHINE GOES FIRST
    // 01060 PRINT "THE GAME BOARD IS NUMBERED:": PRINT
    b2c_printf("");
    // 01070 PRINT "1  2  3": PRINT "8  9  4": PRINT "7  6  5"
    b2c_printf("7  6  5\n");
    // 01080 PRINT
    b2c_printf("");
    // 01090 REM
    // 01100 REM
    // 01110 REM
    // 01120 DEF FNM(X)=X-8*INT((X-1)/8)
    // 01130 REM
    // 01140 REM  MAIN PROGRAM

  Lbl_01150:
    // 01150 PRINT
    b2c_printf("");
    // 01160 PRINT
    b2c_printf("");
    // 01170 A=9
    A_int = 9;
    // 01180 M=A
    M_int = A_int;
    // 01190 GOSUB 1630
    Routine_01630();
    // 01200 P=M
    P_int = M_int;
    // 01210 B=FNM(P+1)
    B_int = FNM_int_arr[P_int+1];
    // 01220 M=B
    M_int = B_int;
    // 01230 GOSUB 1630
    Routine_01630();
    // 01240 Q=M
    Q_int = M_int;
    // 01250 IF Q=FNM(B+4) THEN 1300
    if(Q_int==FNM_int_arr[B_int+4])goto Lbl_01300;
    // 01260 C=FNM(B+4)
    C_int = FNM_int_arr[B_int+4];
    // 01270 M=C
    M_int = C_int;
    // 01280 GOSUB 1680
    Routine_01680();
    // 01290 GOTO 1590
    goto Lbl_01590;

  Lbl_01300:
    // 01300 C=FNM(B+2)
    C_int = FNM_int_arr[B_int+2];
    // 01310 M=C
    M_int = C_int;
    // 01320 GOSUB 1630
    Routine_01630();
    // 01330 R=M
    R_int = M_int;
    // 01340 IF R=FNM(C+4) THEN 1390
    if(R_int==FNM_int_arr[C_int+4])goto Lbl_01390;
    // 01350 D=FNM(C+4)
    D_int = FNM_int_arr[C_int+4];
    // 01360 M=D
    M_int = D_int;
    // 01370 GOSUB 1680
    Routine_01680();
    // 01380 GOTO 1590
    goto Lbl_01590;

  Lbl_01390:
    // 01390 IF P/2<>INT(P/2) THEN 1440
    if(P_int/2!=INT(P_int/2))goto Lbl_01440;
    // 01400 D=FNM(C+7)
    D_int = FNM_int_arr[C_int+7];
    // 01410 M=D
    M_int = D_int;
    // 01420 GOSUB 1680
    Routine_01680();
    // 01430 GOTO 1590
    goto Lbl_01590;

  Lbl_01440:
    // 01440 D=FNM(C+3)
    D_int = FNM_int_arr[C_int+3];
    // 01450 M=D
    M_int = D_int;
    // 01460 GOSUB 1630
    Routine_01630();
    // 01470 S=M
    S_int = M_int;
    // 01480 IF S=FNM(D+4) THEN 1530
    if(S_int==FNM_int_arr[D_int+4])goto Lbl_01530;
    // 01490 E=FNM(D+4)
    E_int = FNM_int_arr[D_int+4];
    // 01500 M=E
    M_int = E_int;
    // 01510 GOSUB 1680
    Routine_01680();
    // 01520 REM

  Lbl_01530:
    // 01530 E=FNM(D+6)
    E_int = FNM_int_arr[D_int+6];
    // 01540 M=E
    M_int = E_int;
    // 01550 GOSUB 1680
    Routine_01680();
    // 01560 PRINT "THE GAME IS A DRAW."
    b2c_printf("The game is a draw.\n");
    // 01570 GOTO 1150
    goto Lbl_01150;
    // 01580 REM

  Lbl_01590:
    // 01590 PRINT "AND WINS ********"
    b2c_printf("And wins ********\n");
    // 01600 GOTO 1150
    goto Lbl_01150;
    // 01610 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
