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
int    G_int;                                     // Basic: G 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
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
    // 01000 PRINT TAB(33);"LETTER"
    b2c_printf("Letter\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "LETTER GUESSING GAME": PRINT
    b2c_printf("");
    // 01040 PRINT "I'LL THINK OF A LETTER OF THE ALPHABET, A TO Z."
    b2c_printf("I'll think of a letter of the alphabet, a to z.\n");
    // 01050 PRINT "TRY TO GUESS MY LETTER AND I'LL GIVE YOU CLUES"
    b2c_printf("Try to guess my letter and i'll give you clues\n");
    // 01060 PRINT "AS TO HOW CLOSE YOU'RE GETTING TO MY LETTER."
    b2c_printf("As to how close you're getting to my letter.\n");

  Lbl_01070:
    // 01070 L=65+INT(RND(1)*26)
    L_int = 65+INT(RND(1)*26);
    // 01080 G=0
    G_int = 0;
    // 01090 PRINT: PRINT "O.K., I HAVE A LETTER.  START GUESSING."
    b2c_printf("O.K., I have a letter.  Start guessing.\n");

  Lbl_01100:
    // 01100 PRINT: PRINT "WHAT IS YOUR GUESS";
    b2c_printf("What is your guess");
    // 01110 G=G+1
    G_int = G_int+1;
    // 01120 INPUT A$: A=ASC(A$): PRINT
    b2c_printf("");
    // 01130 IF A=L THEN 1170
    if(A_int==L_int)goto Lbl_01170;
    // 01140 IF A>L THEN 1160
    if(A_int>L_int)goto Lbl_01160;
    // 01150 PRINT "TOO LOW.  TRY A HIGHER LETTER.": GOTO 1100
    goto Lbl_01100;

  Lbl_01160:
    // 01160 PRINT "TOO HIGH.  TRY A LOWER LETTER.": GOTO 1100
    goto Lbl_01100;

  Lbl_01170:
    // 01170 PRINT: PRINT "YOU GOT IT IN";G;"GUESSES!!"
    b2c_printf("You got it in %d You got it inGuesses!!\n",G_int);
    // 01180 IF G<=5 THEN 1200
    if(G_int<=5)goto Lbl_01200;
    // 01190 PRINT "BUT IT SHOULDN'T TAKE MORE THAN 5 GUESSES!": GOTO 1220
    goto Lbl_01220;

  Lbl_01200:
    // 01200 PRINT "GOOD JOB !!!!!"
    b2c_printf("Good job !!!!!\n");
    // 01210 FOR N=1 TO 15: PRINT CHR$(7);: NEXT N
    int dummy_1210=0; // Ignore this line.
}; // End-For(N_int)

  Lbl_01220:
// 01220 PRINT
b2c_printf("");
// 01230 PRINT "LET'S PLAN AGAIN....."
b2c_printf("Let's plan again.....\n");
// 01240 GOTO 1070
goto Lbl_01070;
// 01250 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
