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
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01380();

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

void Routine_01380(){
    // 01380 PRINT "GO ";
    b2c_printf("Go ");
    // 01390 IF Y=B THEN 1440
    if(Y_int==B_int)goto Lbl_01440;
    // 01400 IF Y<B THEN 1430
    if(Y_int<B_int)goto Lbl_01430;
    // 01410 PRINT "SOUTH";
    b2c_printf("South");
    // 01420 GOTO 1440
    goto Lbl_01440;

  Lbl_01430:
    // 01430 PRINT "NORTH";
    b2c_printf("North");

  Lbl_01440:
    // 01440 IF X=A THEN 1490
    if(X_int==A_int)goto Lbl_01490;
    // 01450 IF X<A THEN 1480
    if(X_int<A_int)goto Lbl_01480;
    // 01460 PRINT "WEST";
    b2c_printf("West");
    // 01470 GOTO 1490
    goto Lbl_01490;

  Lbl_01480:
    // 01480 PRINT "EAST";
    b2c_printf("East");

  Lbl_01490:
    // 01490 PRINT
    b2c_printf("");
    // 01500 GOTO 01510
    goto Lbl_01510;

  Lbl_01510:
    // 01510 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"HURKLE"
    b2c_printf("Hurkle\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 N=5
    N_int = 5;
    // 01040 G=10
    G_int = 10;
    // 01050 PRINT
    b2c_printf("");
    // 01060 PRINT "A HURKLE IS HIDING ON A";G;"BY";G;"GRID. HOMEBASE"
    b2c_printf("A hurkle is hiding on a %d A hurkle is hiding on aByBy %d ByGrid. Homebase\n",G_int,G_int);
    // 01070 PRINT "ON THE GRID IS POINT 0,0 IN THE SOUTHWEST CORNER,"
    b2c_printf("On the grid is point 0,0 in the southwest corner,\n");
    // 01080 PRINT "AND ANY POINT ON THE GRID IS DESIGNATED BY A"
    b2c_printf("And any point on the grid is designated by a\n");
    // 01090 PRINT "PAIR OF WHOLE NUMBERS SEPERATED BY A COMMA. THE FIRST"
    b2c_printf("Pair of whole numbers seperated by a comma. The first\n");
    // 01100 PRINT "NUMBER IS THE HORIZONTAL POSITION AND THE SECOND NUMBER"
    b2c_printf("Number is the horizontal position and the second number\n");
    // 01110 PRINT "IS THE VERTICAL POSITION. YOU MUST TRY TO"
    b2c_printf("Is the vertical position. You must try to\n");
    // 01120 PRINT "GUESS THE HURKLE'S GRIDPOINT. YOU GET";N;"TRIES."
    b2c_printf("Guess the hurkle's gridpoint. You get %d Guess the hurkle's gridpoint. You getTries.\n",N_int);
    // 01130 PRINT "AFTER EACH TRY, I WILL TELL YOU THE APPROXIMATE"
    b2c_printf("After each try, i will tell you the approximate\n");
    // 01140 PRINT "DIRECTION TO GO TO LOOK FOR THE HURKLE."
    b2c_printf("Direction to go to look for the hurkle.\n");
    // 01150 PRINT
    b2c_printf("");

  Lbl_01160:
    // 01160 A=INT(G*RND(1))
    A_int = INT(G_int*RND(1));
    // 01170 B=INT(G*RND(1))
    B_int = INT(G_int*RND(1));
    // 01180 FOR K=1 TO N
    for(K_int=1;K_int<=N_int;K_int++){
        // 01190 PRINT "GUESS #";K;
        b2c_printf("Guess # %d Guess #\n",K_int);
        // 01200 INPUT X,Y
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
                    (err += b2c_strtoi(&X_int,args,0)) ||
                    (err += b2c_strtoi(&Y_int,args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01200
        // 01210 IF ABS(X-A)+ABS(Y-B)=0 THEN 1340
        if(ABS(X_int-A_int)+ABS(Y_int-B_int)==0)goto Lbl_01340;
        // 01220 REM PRINT INFO
        // 01230 GOSUB 1380
        Routine_01380();
        // 01240 PRINT
        b2c_printf("");
        // 01250 NEXT K
        int dummy_1250=0; // Ignore this line.
    }; // End-For(K_int)
    // 01260 PRINT
    b2c_printf("");
    // 01270 PRINT "SORRY, THAT'S";N;"GUESSES."
    b2c_printf("Sorry, that's %d Sorry, that'sGuesses.\n",N_int);
    // 01280 PRINT "THE HURKLE IS AT ";A;",";B
    b2c_printf("The hurkle is at  %d The hurkle is at ,, %d \n",A_int,B_int);

  Lbl_01290:
    // 01290 PRINT
    b2c_printf("");
    // 01300 PRINT "LET'S PLAY AGAIN, HURKLE IS HIDING."
    b2c_printf("Let's play again, hurkle is hiding.\n");
    // 01310 PRINT
    b2c_printf("");
    // 01320 GOTO 1160
    goto Lbl_01160;
    // 01330 REM

  Lbl_01340:
    // 01340 PRINT
    b2c_printf("");
    // 01350 PRINT "YOU FOUND HIM IN";K;"GUESSES!"
    b2c_printf("You found him in %d You found him inGuesses!\n",K_int);
    // 01360 GOTO 1290
    goto Lbl_01290;
    // 01370 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
