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
char*  A_str_arr[20];                             // Basic: A$ 
int    C_int;                                     // Basic: C 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    X_int;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
int    Z_int;                                     // Basic: Z 
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
    // 01000 PRINT TAB(31000);"FLIPFLOP"
    b2c_printf("Flipflop\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT
    b2c_printf("");
    // 01030 REM *** CREATED BY MICHAEL CASS
    // 01040 DIM A$(20)
    // 01050 PRINT "THE OBJECT OF THIS PUZZLE IS TO CHANGE THIS:"
    b2c_printf("The object of this puzzle is to change this:\n");
    // 01060 PRINT
    b2c_printf("");
    // 01070 PRINT "X X X X X X X X X X"
    b2c_printf("X x x x x x x x x x\n");
    // 01080 PRINT
    b2c_printf("");
    // 01090 PRINT "TO THIS:"
    b2c_printf("To this:\n");
    // 01100 PRINT
    b2c_printf("");
    // 01110 PRINT "O O O O O O O O O O"
    b2c_printf("O o o o o o o o o o\n");
    // 01120 PRINT
    b2c_printf("");
    // 01130 PRINT "BY TYPING THE NUMBER CORRESPONDING TO THE POSITION OF THE"
    b2c_printf("By typing the number corresponding to the position of the\n");
    // 01140 PRINT "LETTER ON SOME NUMBERS, ONE POSITION WILL CHANGE, ON"
    b2c_printf("Letter on some numbers, one position will change, on\n");
    // 01150 PRINT "OTHERS, TWO WILL CHANGE.  TO RESET LINE TO ALL X'S, TYPE 0"
    b2c_printf("Others, two will change.  To reset line to all x's, type 0\n");
    // 01160 PRINT "(ZERO) AND TO START OVER IN THE MIDDLE OF A GAME, TYPE "
    b2c_printf("(zero) and to start over in the middle of a game, type \n");
    // 01170 PRINT "11 (ELEVEN)."
    b2c_printf("11 (eleven).\n");
    // 01180 PRINT
    b2c_printf("");
    // 01190 REM

  Lbl_01200:
    // 01200 Q=RND(1)
    Q_int = RND(1);
    // 01210 PRINT "HERE IS THE STARTING LINE OF X'S."
    b2c_printf("Here is the starting line of x's.\n");
    // 01220 PRINT
    b2c_printf("");
    // 01230 C=0
    C_int = 0;

  Lbl_01240:
    // 01240 PRINT "1 2 3 4 5 6 7 8 9 10"
    b2c_printf("1 2 3 4 5 6 7 8 9 10\n");
    // 01250 PRINT "X X X X X X X X X X"
    b2c_printf("X x x x x x x x x x\n");
    // 01260 PRINT
    b2c_printf("");
    // 01270 REM
    // 01280 FOR X=1 TO 10
    for(X_int=1;X_int<=10;X_int++){
        // 01290 A$(X)="X"
        GLBpStr="X";
        A_str_arr[X_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01300 NEXT X
        int dummy_1300=0; // Ignore this line.
    }; // End-For(X_int)
    // 01310 GOTO 1330
    goto Lbl_01330;

  Lbl_01320:
    // 01320 PRINT "ILLEGAL ENTRY--TRY AGAIN."
    b2c_printf("Illegal entry--try again.\n");

  Lbl_01330:
    // 01330 PRINT "INPUT THE NUMBER";
    b2c_printf("Input the number");
    // 01340 INPUT N
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
                (err += b2c_strtoi(&N_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01340
    // 01350 IF N<>INT(N) THEN 1320
    if(N_int!=INT(N_int))goto Lbl_01320;
    // 01360 IF N=11 THEN 1200
    if(N_int==11)goto Lbl_01200;
    // 01370 IF N>11 THEN 1320
    if(N_int>11)goto Lbl_01320;
    // 01380 IF N=0 THEN 1240
    if(N_int==0)goto Lbl_01240;
    // 01390 IF M=N THEN 1520
    if(M_int==N_int)goto Lbl_01520;
    // 01400 M=N
    M_int = N_int;
    // 01410 IF A$(N)="O" THEN 1490
    if(strcmp(A_str_arr[N_int],"O")==0)goto Lbl_01490;
    // 01420 A$(N)="O"
    GLBpStr="O";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01430:
    // 01430 R=TAN(Q+N/Q-N)-SIN(Q/N)+336*SIN(8*N)
    R_int = TAN(Q_int+N_int/Q_int-N_int)-SIN(Q_int/N_int)+336*SIN(8*N_int);
    // 01440 N=R-INT(R)
    N_int = R_int-INT(R_int);
    // 01450 N=INT(10*N)
    N_int = INT(10*N_int);
    // 01460 IF A$(N)="O" THEN 1490
    if(strcmp(A_str_arr[N_int],"O")==0)goto Lbl_01490;
    // 01470 A$(N)="O"
    GLBpStr="O";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01480 GOTO 1620
    goto Lbl_01620;

  Lbl_01490:
    // 01490 A$(N)="X"
    GLBpStr="X";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01500 IF M=N THEN 1430
    if(M_int==N_int)goto Lbl_01430;
    // 01510 GOTO 1620
    goto Lbl_01620;

  Lbl_01520:
    // 01520 IF A$(N)="O" THEN 1600
    if(strcmp(A_str_arr[N_int],"O")==0)goto Lbl_01600;
    // 01530 A$(N)="O"
    GLBpStr="O";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01540:
    // 01540 R=.592*(1/TAN(Q/N+Q))/SIN(N*2+Q)-COS(N)
    R_int = 0.59*(1/TAN(Q_int/N_int+Q_int))/SIN(N_int*2+Q_int)-COS(N_int);
    // 01550 N=R-INT(R)
    N_int = R_int-INT(R_int);
    // 01560 N=INT(10*N)
    N_int = INT(10*N_int);
    // 01570 IF A$(N)="O" THEN 1600
    if(strcmp(A_str_arr[N_int],"O")==0)goto Lbl_01600;
    // 01580 A$(N)="O"
    GLBpStr="O";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01590 GOTO 1620
    goto Lbl_01620;

  Lbl_01600:
    // 01600 A$(N)="X"
    GLBpStr="X";
    A_str_arr[N_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01610 IF M=N THEN 1540
    if(M_int==N_int)goto Lbl_01540;

  Lbl_01620:
    // 01620 PRINT "1 2 3 4 5 6 7 8 9 10"
    b2c_printf("1 2 3 4 5 6 7 8 9 10\n");
    // 01630 FOR Z=1 TO 10: PRINT A$(Z);" ";: NEXT Z
    int dummy_1630=0; // Ignore this line.
}; // End-For(Z_int)
// 01640 C=C+1
C_int = C_int+1;
// 01650 PRINT
b2c_printf("");
// 01660 FOR Z=1 TO 10
for(Z_int=1;Z_int<=10;Z_int++){
    // 01670 IF A$(Z)<>"O" THEN 1330
    if(strcmp(A_str_arr[Z_int],"O")!=0)goto Lbl_01330;
    // 01680 NEXT Z
    int dummy_1680=0; // Ignore this line.
}; // End-For(Z_int)
// 01690 IF C>12 THEN 1720
if(C_int>12)goto Lbl_01720;
// 01700 PRINT "VERY GOOD.  YOU GUESSED IT IN ONLY";C;"GUESSES."
b2c_printf("Very good.  You guessed it in only %d Very good.  You guessed it in onlyGuesses.\n",C_int);
// 01710 GOTO 1730
goto Lbl_01730;

  Lbl_01720:
// 01720 PRINT "TRY HARDER NEXT TIME.  IT TOOK YOU";C;"GUESSES."
b2c_printf("Try harder next time.  It took you %d Try harder next time.  It took youGuesses.\n",C_int);

  Lbl_01730:
// 01730 PRINT "DO YOU WANT TO TRY ANOTHER PUZZLE";
b2c_printf("Do you want to try another puzzle");
// 01740 INPUT X$
// Start of Basic INPUT statement 01740
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
}; // End of Basic INPUT statement 01740
// 01750 IF LEFT$(X$,1)="N" THEN 1780
if(LEFT$(X_str,1)=='N')goto Lbl_01780;
// 01760 PRINT
b2c_printf("");
// 01770 GOTO 1200
goto Lbl_01200;

  Lbl_01780:
// 01780 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
