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
int    A_int_arr[19][19];                         // Basic: A 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01460();

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

void Routine_01460(){
    // 01460 L=1: IF X<1 THEN 1510
    if(X_int<1)goto Lbl_01510;
    // 01470 IF X>N THEN 1510
    if(X_int>N_int)goto Lbl_01510;
    // 01480 IF Y<1 THEN 1510
    if(Y_int<1)goto Lbl_01510;
    // 01490 IF Y>N THEN 1510
    if(Y_int>N_int)goto Lbl_01510;
    // 01500 GOTO 01520
    goto Lbl_01520;

  Lbl_01510:
    // 01510 GOTO 01520
    goto Lbl_01520;

  Lbl_01520:
    // 01520 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"GOMOKO"
    b2c_printf("Gomoko\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 DIM A(19,19)
    // 01040 PRINT "WELCOME TO THE ORIENTAL GAME OF GOMOKO."
    b2c_printf("Welcome to the oriental game of gomoko.\n");
    // 01050 PRINT: PRINT "THE GAME IS PLAYED ON AN N BY N GRID OF A SIZE"
    b2c_printf("The game is played on an n by n grid of a size\n");
    // 01060 PRINT "THAT YOU SPECIFY.  DURING YOUR PLAY, YOU MAY COVER ONE GRID"
    b2c_printf("That you specify.  During your play, you may cover one grid\n");
    // 01070 PRINT "INTERSECTION WITH A MARKER. THE OBJECT OF THE GAME IS TO GET"
    b2c_printf("Intersection with a marker. The object of the game is to get\n");
    // 01080 PRINT "5 ADJACENT MARKERS IN A ROW -- HORIZONTALLY, VERTICALLY, OR"
    b2c_printf("5 adjacent markers in a row -- horizontally, vertically, or\n");
    // 01090 PRINT "DIAGONALLY.  ON THE BOARD DIAGRAM, YOUR MOVES ARE MARKED"
    b2c_printf("Diagonally.  On the board diagram, your moves are marked\n");
    // 01100 PRINT "WITH A '1' AND THE COMPUTER MOVES WITH A '2'."
    b2c_printf("With a '1' and the computer moves with a '2'.\n");
    // 01110 PRINT: PRINT "THE COMPUTER DOES NOT KEEP TRACK OF WHO HAS WON."
    b2c_printf("The computer does not keep track of who has won.\n");
    // 01120 PRINT "TO END THE GAME, TYPE -1,-1 FOR YOUR MOVE.": PRINT
    b2c_printf("");

  Lbl_01130:
    // 01130 PRINT "WHAT IS YOUR BOARD SIZE (MIN 7/ MAX 19)";: INPUT N
    // Start of Basic INPUT statement 01130
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
    }; // End of Basic INPUT statement 01130
    // 01140 IF N>6 THEN 1160
    if(N_int>6)goto Lbl_01160;
    // 01150 GOTO 1170
    goto Lbl_01170;

  Lbl_01160:
    // 01160 IF N<20 THEN 1180
    if(N_int<20)goto Lbl_01180;

  Lbl_01170:
    // 01170 PRINT "I SAID, THE MINIMUM IS 7, THE MAXIMUM IS 19.": GOTO 1130
    goto Lbl_01130;

  Lbl_01180:
    // 01180 FOR I=1 TO N:FOR J=1 TO N: A(I,J)=0: NEXT J: NEXT I
    int dummy_1180=0; // Ignore this line.
}; // End-For(I_int)
// 01190 PRINT: PRINT "WE ALTERNATE MOVES.  YOU GO FIRST...": PRINT
b2c_printf("");

  Lbl_01200:
// 01200 PRINT "YOUR PLAY (I,J)";: INPUT I,J
// Start of Basic INPUT statement 01200
{
    int numargs=2;
    char *args[numargs+1];
    bool echoeol=true;
    while(true){
        fprintf(stdout," ? ");
        int err=input(args,numargs,echoeol);
        if(err==0x03) break;
        if(err || 
            (err += b2c_strtoi(&I_int,args,0)) ||
            (err += b2c_strtoi(&J_int,args,1)) ){
             printf("?Redo from start\n");
        }else{
            break;
        };
    };
}; // End of Basic INPUT statement 01200
// 01210 PRINT
b2c_printf("");
// 01220 IF I=-1 THEN 1420
if(I_int==-1)goto Lbl_01420;
// 01230 X=I: Y=J: GOSUB 910: IF L=1 THEN 1250
if(L_int==1)goto Lbl_01250;
// 01240 PRINT "ILLEGAL MOVE.  TRY AGAIN...": GOTO 1200
goto Lbl_01200;

  Lbl_01250:
// 01250 IF A(I,J)=0 THEN 1270
if(A_int_arr[I_int][J_int]==0)goto Lbl_01270;
// 01260 PRINT "SQUARE OCCUPIED.  TRY AGAIN...": GOTO 1200
goto Lbl_01200;

  Lbl_01270:
// 01270 A(I,J)=1
A_int_arr[I_int][J_int] = 1;
// 01280 REM *** COMPUTER TRIES AN INTELLIGENT MOVE ***
// 01290 FOR E=-1 TO 1: FOR F=-1 TO 1: IF E+F-E*F=0 THEN 1330
if(E_int+F_int-E_int*F_int==0)goto Lbl_01330;
// 01300 X=I+F: Y=J+F: GOSUB 1460
Routine_01460();
// 01310 IF L=0 THEN 1330
if(L_int==0)goto Lbl_01330;
// 01320 IF A(X,Y)=1 THEN 1380
if(A_int_arr[X_int][Y_int]==1)goto Lbl_01380;

  Lbl_01330:
// 01330 NEXT F: NEXT E
int dummy_1330=0; // Ignore this line.
r* CName(const char*)}; // End-For(E_int)
r* CName(const char*)// 01340 REM *** COMPUTER TRIES A RANDOM MOVE ***

  Lbl_01350:
r* CName(const char*)// 01350 X=INT(N*RND(1)+1): Y=INT(N*RND(1)+1): GOSUB 910: IF L=0 THEN 1350
r* CName(const char*)if(L_int==0)goto Lbl_01350;

  Lbl_01360:
r* CName(const char*)// 01360 IF A(X,Y)<>0 THEN 1350
r* CName(const char*)if(A_int_arr[X_int][Y_int]!=0)goto Lbl_01350;
r* CName(const char*)// 01370 A(X,Y)=2: GOSUB 810: GOTO 1200
r* CName(const char*)goto Lbl_01200;

  Lbl_01380:
r* CName(const char*)// 01380 X=I-E: Y=J-F: GOSUB 1460
r* CName(const char*)Routine_01460();
r* CName(const char*)// 01390 IF L=0 THEN 1350
r* CName(const char*)if(L_int==0)goto Lbl_01350;
r* CName(const char*)// 01400 GOTO 1360
r* CName(const char*)goto Lbl_01360;
r* CName(const char*)// 01410 REM *** PRINT THE BOARD ***

  Lbl_01420:
r* CName(const char*)// 01420 PRINT: PRINT "THANKS FOR THE GAME!!"
r* CName(const char*)b2c_printf("Thanks for the game!!\n");
r* CName(const char*)// 01430 PRINT "PLAY AGAIN (1 FOR YES, 0 FOR NO)";: INPUT Q
r* CName(const char*)// Start of Basic INPUT statement 01430
r* CName(const char*){
int numargs=1;
char *args[numargs+1];
bool echoeol=true;
while(true){
    fprintf(stdout," ? ");
    int err=input(args,numargs,echoeol);
    if(err==0x03) break;
    if(err || 
        (err += b2c_strtoi(&Q_int,args,0)) ){
         printf("?Redo from start\n");
    }else{
        break;
    };
};
r* CName(const char*)}; // End of Basic INPUT statement 01430
r* CName(const char*)// 01440 IF Q=1 THEN 1130
r* CName(const char*)if(Q_int==1)goto Lbl_01130;
r* CName(const char*)// 01450 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
