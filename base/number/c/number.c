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
int    L_int;                                     // Basic: L 
int    R_int;                                     // Basic: R 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
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
    // 01000 REM THE COMPUTER CHOOSES A NUMBER FROM
    // 01010 REM 1 TO 10,000 AT RANDOM, THE OBJECT OF
    // 01020 REM THE GAME IS TO GUESS THE CHOSEN
    // 01030 REM NUMBER IN AS FEW GUESSES AS POSSIBLE

  Lbl_01040:
    // 01040 LET R=1+INT(10000*RND)
    R_int = 1+INT(10000*RND());
    // 01050 LET Y=0
    Y_int = 0;
    // 01060 PRINT"A RANDOM NUMBER HAS BEEN PICKED"
    b2c_printf("A random number has been picked\n");
    // 01070 PRINT"TRY GUESSING IT, HINT THE NUMBER"
    b2c_printf("Try guessing it, hint the number\n");
    // 01080 PRINT" IS FROM 1 TO 10,000"
    b2c_printf(" is from 1 to 10,000\n");
    // 01090 PRINT"GOOD LUCK!!!!!!!"
    b2c_printf("Good luck!!!!!!!\n");
    // 01100 PRINT
    b2c_printf("");

  Lbl_01110:
    // 01110 PRINT"YOUR GUESS IS = ";
    b2c_printf("Your guess is = ");
    // 01120 INPUT X
    // Start of Basic INPUT statement 01120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01120
    // 01130 LET Y=Y+1
    Y_int = Y_int+1;
    // 01140 IF X=R THEN 1170
    if(X_int==R_int)goto Lbl_01170;
    // 01150 IF X>R THEN 1270
    if(X_int>R_int)goto Lbl_01270;
    // 01160 GOTO 1290
    goto Lbl_01290;

  Lbl_01170:
    // 01170 PRINT"NOT BAD!!!!-YOU GOT IT!!!!"
    b2c_printf("Not bad!!!!-You got it!!!!\n");
    // 01180 PRINT"YOUR NUMBER OF TRIES WERE ";Y
    b2c_printf("Your number of tries were  %d \n",Y_int);
    // 01190 PRINT
    b2c_printf("");
    // 01200 PRINT"IF YOU WANT TO TRY AGAIN, TYPE '1'"
    b2c_printf("If you want to try again, type '1'\n");
    // 01210 PRINT"IF NOT TYPE '0'"
    b2c_printf("If not type '0'\n");
    // 01220 INPUT L
    // Start of Basic INPUT statement 01220
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&L_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01220
    // 01230 IF L=1 THEN 1250
    if(L_int==1)goto Lbl_01250;
    // 01240 STOP
    exit(1);

  Lbl_01250:
    // 01250 PRINT
    b2c_printf("");
    // 01260 GOTO 1040
    goto Lbl_01040;

  Lbl_01270:
    // 01270 PRINT"TOO HIGH, TRY AGAIN"
    b2c_printf("Too high, try again\n");
    // 01280 GOTO 1110
    goto Lbl_01110;

  Lbl_01290:
    // 01290 PRINT"TOO LOW, TRY AGAIN"
    b2c_printf("Too low, try again\n");
    // 01300 GOTO 1110
    goto Lbl_01110;
    // 01310 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
