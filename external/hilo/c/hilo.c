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
int    B_int;                                     // Basic: B 
int    R_int;                                     // Basic: R 
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
    // 01000 PRINT TAB(34);"HI LO"
    b2c_printf("Hi lo\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "THIS IS THE GAME OF HI LO.":PRINT
    b2c_printf("");
    // 01040 PRINT "YOU WILL HAVE 6 TRIES TO GUESS THE AMOUNT OF MONEY IN THE"
    b2c_printf("You will have 6 tries to guess the amount of money in the\n");
    // 01050 PRINT "HI LO JACKPOT, WHICH IS BETWEEN 1 AND 100 DOLLARS.  IF YOU"
    b2c_printf("Hi lo jackpot, which is between 1 and 100 dollars.  If you\n");
    // 01060 PRINT "GUESS THE AMOUNT, YOU WIN ALL THE MONEY IN THE JACKPOT!"
    b2c_printf("Guess the amount, you win all the money in the jackpot!\n");
    // 01070 PRINT "THEN YOU GET ANOTHER CHANCE TO WIN MORE MONEY.  HOWEVER,"
    b2c_printf("Then you get another chance to win more money.  However,\n");
    // 01080 PRINT "IF YOU DO NOT GUESS THE AMOUNT, THE GAME ENDS.":PRINT
    b2c_printf("");
    // 01090 R=0
    R_int = 0;

  Lbl_01100:
    // 01100 B=0:PRINT
    b2c_printf("");
    // 01110 Y=INT(100*RND(1)+1)
    Y_int = INT(100*RND(1)+1);

  Lbl_01120:
    // 01120 PRINT "YOUR GUESS";
    b2c_printf("Your guess");
    // 01130 INPUT A
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
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 B=B+1
    B_int = B_int+1;
    // 01150 IF A=Y THEN 1220
    if(A_int==Y_int)goto Lbl_01220;
    // 01160 IF A>Y THEN 1180
    if(A_int>Y_int)goto Lbl_01180;
    // 01170 PRINT "YOUR GUESS IS TOO LOW.":GOTO 1190
    goto Lbl_01190;

  Lbl_01180:
    // 01180 PRINT "YOUR GUESS IS TOO HIGH."
    b2c_printf("Your guess is too high.\n");

  Lbl_01190:
    // 01190 PRINT:IF B<6 THEN 1120
    if(B_int<6)goto Lbl_01120;
    // 01200 PRINT "YOU BLEW IT...TOO BAD...THE NUMBER WAS";Y
    b2c_printf("You blew it...Too bad...The number was %d \n",Y_int);
    // 01210 R=0:GOTO 1250
    goto Lbl_01250;

  Lbl_01220:
    // 01220 PRINT "GOT IT!!!!!!!!!!   YOU WIN";Y;"DOLLARS."
    b2c_printf("Got it!!!!!!!!!!   You win %d Got it!!!!!!!!!!   You winDollars.\n",Y_int);
    // 01230 R=R+Y
    R_int = R_int+Y_int;
    // 01240 PRINT "YOUR TOTAL WINNINGS ARE NOW";R;"DOLLARS."
    b2c_printf("Your total winnings are now %d Your total winnings are nowDollars.\n",R_int);

  Lbl_01250:
    // 01250 PRINT:PRINT "PLAY AGAIN (YES OR NO)";
    b2c_printf("Play again (yes or no)");
    // 01260 INPUT A$:IF A$="YES" THEN 1100
    if(strcmp(A_str,"Yes")==0)goto Lbl_01100;
    // 01270 PRINT:PRINT "SO LONG.  HOPE YOU ENJOYED YOURSELF!!!"
    b2c_printf("So long.  Hope you enjoyed yourself!!!\n");
    // 01280 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
