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
int    A_int_arr[20];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01470();
void Routine_01510();

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
    // 01460 REM *** SUBROUTINE TO PRINT LIST

void Routine_01470(){
    // 01470 PRINT:FOR K=1 TO N:PRINT A(K);:NEXT K
    int dummy_1470=0; // Ignore this line.
}; // End-For(K_int)
// 01480 GOTO 01490
goto Lbl_01490;

  Lbl_01490:
// 01490 RETURN
return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
// 01500 REM *** SUBROUTINE TO PRINT THE RULES

void Routine_01510(){
// 01510 PRINT:PRINT "THIS IS THE GAME OF 'REVERSE'.  TO WIN, ALL YOU HAVE"
b2c_printf("This is the game of 'reverse'.  To win, all you have\n");
// 01520 PRINT "TO DO IS ARRANGE A LIST OF NUMBERS (1 THROUGH";N;")"
b2c_printf("To do is arrange a list of numbers (1 through %d To do is arrange a list of numbers (1 through)\n",N_int);
// 01530 PRINT "IN NUMERICAL ORDER FROM LEFT TO RIGHT.  TO MOVE, YOU"
b2c_printf("In numerical order from left to right.  To move, you\n");
// 01540 PRINT "TELL ME HOW MANY NUMBERS (COUNTING FROM THE LEFT) TO"
b2c_printf("Tell me how many numbers (counting from the left) to\n");
// 01550 PRINT "REVERSE.  FOR EXAMPLE, IF THE CURRENT LIST IS:"
b2c_printf("Reverse.  For example, if the current list is:\n");
// 01560 PRINT:PRINT "2 3 4 5 1 6 7 8 9"
b2c_printf("2 3 4 5 1 6 7 8 9\n");
// 01570 PRINT:PRINT "AND YOU REVERSE 4, THE RESULT WILL BE:"
b2c_printf("And you reverse 4, the result will be:\n");
// 01580 PRINT:PRINT "5 4 3 2 1 6 7 8 9"
b2c_printf("5 4 3 2 1 6 7 8 9\n");
// 01590 PRINT:PRINT "NOW IF YOU REVERSE 5, YOU WIN!"
b2c_printf("Now if you reverse 5, you win!\n");
// 01600 PRINT:PRINT "1 2 3 4 5 6 7 8 9":PRINT
b2c_printf("");
// 01610 PRINT "NO DOUBT YOU WILL LIKE THIS GAME, BUT"
b2c_printf("No doubt you will like this game, but\n");
// 01620 GOTO 01630
goto Lbl_01630;

  Lbl_01630:
// 01630 RETURN
return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(32);"REVERSE"
    b2c_printf("Reverse\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "REVERSE -- A GAME OF SKILL": PRINT
    b2c_printf("");
    // 01040 DIM A(20)
    // 01050 REM *** N=NUMBER OF NUMBERS
    // 01060 N=9
    N_int = 9;
    // 01070 PRINT "DO YOU WANT THE RULES";
    b2c_printf("Do you want the rules");
    // 01080 INPUT A$
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
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 IF A$="NO" THEN 1120
    if(strcmp(A_str,"No")==0)goto Lbl_01120;
    // 01100 GOSUB 1510
    Routine_01510();
    // 01110 REM *** MAKE A RANDOM LIST A(1) TO A(N)

  Lbl_01120:
    // 01120 A(1)=INT((N-1)*RND(1)+2)
    A_int_arr[1] = INT((N_int-1)*RND(1)+2);
    // 01130 FOR K=2 TO N
    for(K_int=2;K_int<=N_int;K_int++){

  Lbl_01140:
        // 01140 A(K)=INT(N*RND(1)+1)
        A_int_arr[K_int] = INT(N_int*RND(1)+1);
        // 01150 FOR J=1 TO K-1
        for(J_int=1;J_int<=K_int-1;J_int++){
            // 01160 IF A(K)=A(J) THEN 1140
            if(A_int_arr[K_int]==A_int_arr[J_int])goto Lbl_01140;
            // 01170 NEXT J:NEXT K
            int dummy_1170=0; // Ignore this line.
        }; // End-For(K_int)
        // 01180 REM *** PRINT ORIGINAL LIST AND START GAME
        // 01190 PRINT: PRINT "HERE WE GO ... THE LIST IS:"
        b2c_printf("Here we go ... The list is:\n");
        // 01200 T=0
        T_int = 0;
        // 01210 GOSUB 1470
        Routine_01470();

  Lbl_01220:
        // 01220 PRINT "HOW MANY SHALL I REVERSE";
        b2c_printf("How many shall i reverse");
        // 01230 INPUT R
        // Start of Basic INPUT statement 01230
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&R_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01230
        // 01240 IF R=0 THEN 1400
        if(R_int==0)goto Lbl_01400;
        // 01250 IF R<=N THEN 1270
        if(R_int<=N_int)goto Lbl_01270;
        // 01260 PRINT "OOPS! TOO MANY! I CAN REVERSE AT MOST";N:GOTO 1220
        goto Lbl_01220;

  Lbl_01270:
        // 01270 T=T+1
        T_int = T_int+1;
        // 01280 REM *** REVERSE R NUMBERS AND PRINT NEW LIST
        // 01290 FOR K=1 TO INT(R/2)
        for(K_int=1;K_int<=INT(R_int/2);K_int++){
            // 01300 Z=A(K)
            Z_int = A_int_arr[K_int];
            // 01310 A(K)=A(R-K+1)
            A_int_arr[K_int] = A_int_arr[R_int-K_int+1];
            // 01320 A(R-K+1)=Z
            A_int_arr[R_int-K_int+1] = Z_int;
            // 01330 NEXT K
            int dummy_1330=0; // Ignore this line.
        }; // End-For(K_int)
        // 01340 GOSUB 1470
        Routine_01470();
        // 01350 REM *** CHECK FOR A WIN
        // 01360 FOR K=1 TO N
        for(K_int=1;K_int<=N_int;K_int++){
            // 01370 IF A(K)<>K THEN 1220
            if(A_int_arr[K_int]!=K_int)goto Lbl_01220;
            // 01380 NEXT K
            int dummy_1380=0; // Ignore this line.
        }; // End-For(K_int)
        // 01390 PRINT "YOU WON IT IN";T;"MOVES!!!":PRINT
        b2c_printf("");

  Lbl_01400:
        // 01400 PRINT
        b2c_printf("");
        // 01410 PRINT "TRY AGAIN (YES OR NO)";
        b2c_printf("Try again (yes or no)");
        // 01420 INPUT A$
        // Start of Basic INPUT statement 01420
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
        }; // End of Basic INPUT statement 01420
        // 01430 IF A$="YES" THEN 1120
        if(strcmp(A_str,"Yes")==0)goto Lbl_01120;
        // 01440 PRINT: PRINT "O.K. HOPE YOU HAD FUN!!":GOTO 1450
        goto Lbl_01450;

  Lbl_01450:
        // 01450 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
