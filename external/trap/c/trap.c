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
int    G_int;                                     // Basic: G 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    X_int;                                     // Basic: X 
char*  Z_str;                                     // Basic: Z$ 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01450();

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

void Routine_01450(){
    // 01450 R=A
    R_int = A_int;
    // 01460 A=B
    A_int = B_int;
    // 01470 B=R
    B_int = R_int;
    // 01480 GOTO 01490
    goto Lbl_01490;

  Lbl_01490:
    // 01490 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(34);"TRAP"
    b2c_printf("Trap\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 G=6
    G_int = 6;
    // 01040 N=100
    N_int = 100;
    // 01050 REM-TRAP
    // 01060 REM-STEVE ULLMAN, 8-1-72
    // 01070 PRINT "INSTRUCTIONS";
    b2c_printf("Instructions");
    // 01080 INPUT Z$
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
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 IF LEFT$(Z$,1)<>"Y" THEN 1200
    if(LEFT$(Z_str,1)=='Y')goto Lbl_01200;
    // 01100 PRINT "I AM THINKING OF A NUMBER BETWEEN 1 AND";N
    b2c_printf("I am thinking of a number between 1 and %d \n",N_int);
    // 01110 PRINT "TRY TO GUESS MY NUMBER. ON EACH GUESS,"
    b2c_printf("Try to guess my number. On each guess,\n");
    // 01120 PRINT "YOU ARE TO ENTER 2 NUMBERS, TRYING TO TRAP"
    b2c_printf("You are to enter 2 numbers, trying to trap\n");
    // 01130 PRINT "MY NUMBER BETWEEN THE TWO NUMBERS. I WILL"
    b2c_printf("My number between the two numbers. I will\n");
    // 01140 PRINT "TELL YOU IF YOU HAVE TRAPPED MY NUMBER, IF MY"
    b2c_printf("Tell you if you have trapped my number, if my\n");
    // 01150 PRINT "NUMBER IS LARGER THAN YOUR TWO NUMBERS, OR IF"
    b2c_printf("Number is larger than your two numbers, or if\n");
    // 01160 PRINT "MY NUMBER IS SMALLER THAN YOUR TWO NUMBERS."
    b2c_printf("My number is smaller than your two numbers.\n");
    // 01170 PRINT "IF YOU WANT TO GUESS ONE SINGLE NUMBER, TYPE"
    b2c_printf("If you want to guess one single number, type\n");
    // 01180 PRINT "YOUR GUESS FOR BOTH YOUR TRAP NUMBERS."
    b2c_printf("Your guess for both your trap numbers.\n");
    // 01190 PRINT "YOU GET";G;"GUESSES TO GET MY NUMBER."
    b2c_printf("You get %d You getGuesses to get my number.\n",G_int);

  Lbl_01200:
    // 01200 X=INT(N*RND(1))+1
    X_int = INT(N_int*RND(1))+1;
    // 01210 FOR Q=1 TO G
    for(Q_int=1;Q_int<=G_int;Q_int++){
        // 01220 PRINT 
        b2c_printf("");
        // 01230 PRINT "GUESS #";Q;
        b2c_printf("Guess # %d Guess #\n",Q_int);
        // 01240 INPUT A,B
        // Start of Basic INPUT statement 01240
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&A_int,args,0)) ||
                    (err += b2c_strtoi(&B_int,args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01240
        // 01250 IF A=B AND X=A THEN 1390
        if(A_int==B_int&&X_int==A_int)goto Lbl_01390;
        // 01260 IF A <= B THEN 1280
        if(A_int<=B_int)goto Lbl_01280;
        // 01270 GOSUB 1450
        Routine_01450();

  Lbl_01280:
        // 01280 IF A <= X AND X <= B THEN 1340
        if(A_int<=X_int&&X_int<=B_int)goto Lbl_01340;
        // 01290 IF X<A THEN 1320
        if(X_int<A_int)goto Lbl_01320;
        // 01300 PRINT "MY NUMBER IS LARGER THAN YOUR TRAP NUMBERS."
        b2c_printf("My number is larger than your trap numbers.\n");
        // 01310 GOTO 1350
        goto Lbl_01350;

  Lbl_01320:
        // 01320 PRINT "MY NUMBER IS SMALLER THAN YOUR TRAP NUMBERS."
        b2c_printf("My number is smaller than your trap numbers.\n");
        // 01330 GOTO 1350
        goto Lbl_01350;

  Lbl_01340:
        // 01340 PRINT "YOU HAVE TRAPPED MY NUMBER."
        b2c_printf("You have trapped my number.\n");

  Lbl_01350:
        // 01350 NEXT Q
        int dummy_1350=0; // Ignore this line.
    }; // End-For(Q_int)
    // 01360 PRINT "SORRY, THAT'S";G;"GUESSES. THE NUMBER WAS";X
    b2c_printf("Sorry, that's %d Sorry, that'sGuesses. The number wasGuesses. The number was %d \n",G_int,X_int);
    // 01370 PRINT
    b2c_printf("");
    // 01380 GOTO 1400
    goto Lbl_01400;

  Lbl_01390:
    // 01390 PRINT "YOU GOT IT!!!"
    b2c_printf("You got it!!!\n");

  Lbl_01400:
    // 01400 PRINT 
    b2c_printf("");
    // 01410 PRINT "TRY AGAIN."
    b2c_printf("Try again.\n");
    // 01420 PRINT
    b2c_printf("");
    // 01430 GOTO 1200
    goto Lbl_01200;
    // 01440 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
