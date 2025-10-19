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
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    L_int;                                     // Basic: L 
int    L1_int;                                    // Basic: L1 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01360();

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

void Routine_01360(){
    // 01360 FOR H=1 TO 5
    for(H_int=1;H_int<=5;H_int++){
        // 01370 PRINT
        b2c_printf("");
        // 01380 NEXT H
        int dummy_1380=0; // Ignore this line.
    }; // End-For(H_int)
    // 01390 GOTO 01400
    goto Lbl_01400;

  Lbl_01400:
    // 01400 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{

  Lbl_01000:
    // 01000 PRINT TAB(33);"GUESS"
    b2c_printf("Guess\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "THIS IS A NUMBER GUESSING GAME. I'LL THINK"
    b2c_printf("This is a number guessing game. I'll think\n");
    // 01040 PRINT "OF A NUMBER BETWEEN 1 AND ANY LIMIT YOU WANT."
    b2c_printf("Of a number between 1 and any limit you want.\n");
    // 01050 PRINT "THEN YOU HAVE TO GUESS WHAT IT IS."
    b2c_printf("Then you have to guess what it is.\n");
    // 01060 PRINT
    b2c_printf("");
    // 01070 PRINT "WHAT LIMIT DO YOU WANT";
    b2c_printf("What limit do you want");
    // 01080 INPUT L
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
                (err += b2c_strtoi(&L_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 PRINT
    b2c_printf("");
    // 01100 L1=INT(LOG(L)/LOG(2))+1
    L1_int = INT(LOG(L_int)/LOG(2))+1;

  Lbl_01110:
    // 01110 PRINT "I'M THINKING OF A NUMBER BETWEEN 1 AND";L
    b2c_printf("I'm thinking of a number between 1 and %d \n",L_int);
    // 01120 G=1
    G_int = 1;
    // 01130 PRINT "NOW YOU TRY TO GUESS WHAT IT IS."
    b2c_printf("Now you try to guess what it is.\n");
    // 01140 M=INT(L*RND(1)+1)
    M_int = INT(L_int*RND(1)+1);

  Lbl_01150:
    // 01150 INPUT N
    // Start of Basic INPUT statement 01150
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
    }; // End of Basic INPUT statement 01150
    // 01160 IF N>0 THEN 1190
    if(N_int>0)goto Lbl_01190;
    // 01170 GOSUB 1360
    Routine_01360();
    // 01180 GOTO 1000
    goto Lbl_01000;

  Lbl_01190:
    // 01190 IF N=M THEN 1260
    if(N_int==M_int)goto Lbl_01260;
    // 01200 G=G+1
    G_int = G_int+1;
    // 01210 IF N>M THEN 1240
    if(N_int>M_int)goto Lbl_01240;
    // 01220 PRINT "TOO LOW. TRY A BIGGER ANSWER."
    b2c_printf("Too low. Try a bigger answer.\n");
    // 01230 GOTO 1150
    goto Lbl_01150;

  Lbl_01240:
    // 01240 PRINT "TOO HIGH. TRY A SMALLER ANSWER."
    b2c_printf("Too high. Try a smaller answer.\n");
    // 01250 GOTO 1150
    goto Lbl_01150;

  Lbl_01260:
    // 01260 PRINT "THAT'S IT! YOU GOT IT IN";G;"TRIES."
    b2c_printf("That's it! You got it in %d That's it! You got it inTries.\n",G_int);
    // 01270 IF G<L1 THEN 1310
    if(G_int<L1_int)goto Lbl_01310;
    // 01280 IF G=L1 THEN 1320
    if(G_int==L1_int)goto Lbl_01320;
    // 01290 PRINT "YOU SHOULD HAVE BEEN ABLE TO GET IT IN ONLY";L1
    b2c_printf("You should have been able to get it in only %d \n",L1_int);
    // 01300 GOTO 1330
    goto Lbl_01330;

  Lbl_01310:
    // 01310 PRINT "VERY ";
    b2c_printf("Very ");

  Lbl_01320:
    // 01320 PRINT "GOOD."
    b2c_printf("Good.\n");

  Lbl_01330:
    // 01330 GOSUB 1360
    Routine_01360();
    // 01340 GOTO 1110
    goto Lbl_01110;
    // 01350 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
