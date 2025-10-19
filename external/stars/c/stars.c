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
char*  A_str;                                     // Basic: A$ 
int    D_int;                                     // Basic: D 
int    G_int;                                     // Basic: G 
int    K_int;                                     // Basic: K 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    X_int;                                     // Basic: X 
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
    // 01000 PRINT TAB(34);"STARS"
    b2c_printf("Stars\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 REM *** STARS - PEOPLE'S COMPUTER CENTER, MENLO PARK, CA
    // 01040 REM *** A IS LIMIT ON NUMBER, M IS NUMBER OF GUESSES
    // 01050 A=100:M=7
    M_int = 7;
    // 01060 INPUT "DO YOU WANT INSTRUCTIONS";A$
    // Start of Basic INPUT statement 01060
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""DO YOU WANT INSTRUCTIONS"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF LEFT$(A$,1)="N" THEN 1160
    if(LEFT$(A_str,1)=='N')goto Lbl_01160;
    // 01080 REM *** INSTRUCTIONS ON HOW TO PLAY
    // 01090 PRINT "I AM THINKING OF A WHOLE NUMBER FROM 1 TO";A
    b2c_printf("I am thinking of a whole number from 1 to %d \n",A_int);
    // 01100 PRINT "TRY TO GUESS MY NUMBER.  AFTER YOU GUESS, I"
    b2c_printf("Try to guess my number.  After you guess, i\n");
    // 01110 PRINT "WILL TYPE ONE OR MORE STARS (*).  THE MORE"
    b2c_printf("Will type one or more stars (*).  The more\n");
    // 01120 PRINT "STARS I TYPE, THE CLOSER YOU ARE TO MY NUMBER."
    b2c_printf("Stars i type, the closer you are to my number.\n");
    // 01130 PRINT "ONE STAR (*) MEANS FAR AWAY, SEVEN STARS (*******)"
    b2c_printf("One star (*) means far away, seven stars (*******)\n");
    // 01140 PRINT "MEANS REALLY CLOSE!  YOU GET";M;"GUESSES."
    b2c_printf("Means really close!  You get %d Means really close!  You getGuesses.\n",M_int);
    // 01150 REM *** COMPUTER THINKS OF A NUMBER

  Lbl_01160:
    // 01160 PRINT
    b2c_printf("");
    // 01170 PRINT
    b2c_printf("");
    // 01180 X=INT(A*RND(1)+1)
    X_int = INT(A_int*RND(1)+1);
    // 01190 PRINT "OK, I AM THINKING OF A NUMBER, START GUESSING."
    b2c_printf("Ok, i am thinking of a number, start guessing.\n");
    // 01200 REM *** GUESSING BEGINS, HUMAN GETS M GUESSES
    // 01210 FOR K=1 TO M
    for(K_int=1;K_int<=M_int;K_int++){
        // 01220 PRINT
        b2c_printf("");
        // 01230 PRINT "YOUR GUESS";
        b2c_printf("Your guess");
        // 01240 INPUT G
        // Start of Basic INPUT statement 01240
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&G_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01240
        // 01250 IF G=X THEN 1470
        if(G_int==X_int)goto Lbl_01470;
        // 01260 D=ABS(G-X)
        D_int = ABS(G_int-X_int);
        // 01270 IF D>=64 THEN 1390
        if(D_int>=64)goto Lbl_01390;
        // 01280 IF D>=32 THEN 1380
        if(D_int>=32)goto Lbl_01380;
        // 01290 IF D>=16 THEN 1370
        if(D_int>=16)goto Lbl_01370;
        // 01300 IF D>=8 THEN 1360
        if(D_int>=8)goto Lbl_01360;
        // 01310 IF D>=4 THEN 1350
        if(D_int>=4)goto Lbl_01350;
        // 01320 IF D>=2 THEN 1340
        if(D_int>=2)goto Lbl_01340;
        // 01330 PRINT "*";
        b2c_printf("*");

  Lbl_01340:
        // 01340 PRINT "*";
        b2c_printf("*");

  Lbl_01350:
        // 01350 PRINT "*";
        b2c_printf("*");

  Lbl_01360:
        // 01360 PRINT "*";
        b2c_printf("*");

  Lbl_01370:
        // 01370 PRINT "*";
        b2c_printf("*");

  Lbl_01380:
        // 01380 PRINT "*";
        b2c_printf("*");

  Lbl_01390:
        // 01390 PRINT "*";
        b2c_printf("*");
        // 01400 PRINT
        b2c_printf("");
        // 01410 NEXT K
        int dummy_1410=0; // Ignore this line.
    }; // End-For(K_int)
    // 01420 REM *** DID NOT GUESS IN M GUESSES
    // 01430 PRINT 
    b2c_printf("");
    // 01440 PRINT "SORRY, THAT'S";M;"GUESSES. THE NUMBER WAS";X
    b2c_printf("Sorry, that's %d Sorry, that'sGuesses. The number wasGuesses. The number was %d \n",M_int,X_int);
    // 01450 GOTO 1520
    goto Lbl_01520;
    // 01460 REM *** WE HAVE A WINNER

  Lbl_01470:
    // 01470 PRINT:FOR N=1 TO 79
    for(N_int=1;N_int<=79;N_int++){
        // 01480 PRINT "*";
        b2c_printf("*");
        // 01490 NEXT N
        int dummy_1490=0; // Ignore this line.
    }; // End-For(N_int)
    // 01500 PRINT:PRINT
    b2c_printf("");
    // 01510 PRINT "YOU GOT IT IN";K;"GUESSES!!!  LET'S PLAY AGAIN..."
    b2c_printf("You got it in %d You got it inGuesses!!!  Let's play again...\n",K_int);

  Lbl_01520:
    // 01520 GOTO 1160
    goto Lbl_01160;
    // 01530 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
