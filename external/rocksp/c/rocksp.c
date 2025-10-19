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
int    C_int;                                     // Basic: C 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    K_int;                                     // Basic: K 
int    Q_int;                                     // Basic: Q 
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
    // 01000 PRINT TAB(21);"GAME OF ROCK, SCISSORS, PAPER"
    b2c_printf("Game of rock, scissors, paper\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");

  Lbl_01030:
    // 01030 INPUT "HOW MANY GAMES";Q
    // Start of Basic INPUT statement 01030
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""HOW MANY GAMES"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Q_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01030
    // 01040 IF Q<11 THEN 1060
    if(Q_int<11)goto Lbl_01060;
    // 01050 PRINT "SORRY, BUT WE AREN'T ALLOWED TO PLAY THAT MANY.": GOTO 1030
    goto Lbl_01030;

  Lbl_01060:
    // 01060 FOR G=1 TO Q
    for(G_int=1;G_int<=Q_int;G_int++){
        // 01070 PRINT: PRINT "GAME NUMBER";G
        b2c_printf("Game number %d \n",G_int);
        // 01080 X=INT(RND(1)*3+1)
        X_int = INT(RND(1)*3+1);

  Lbl_01090:
        // 01090 PRINT "3=ROCK...2=SCISSORS...1=PAPER"
        b2c_printf("3=rock...2=Scissors...1=Paper\n");
        // 01100 INPUT "1...2...3...WHAT'S YOUR CHOICE";K
        // Start of Basic INPUT statement 01100
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout,""1...2...3...WHAT'S YOUR CHOICE"");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&K_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01100
        // 01110 IF (K-1)*(K-2)*(K-3)<>0 THEN PRINT "INVALID.": GOTO 1090
        goto Lbl_01090;
        // 01120 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
