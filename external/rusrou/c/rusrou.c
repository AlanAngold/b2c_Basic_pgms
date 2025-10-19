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
int    I_int;                                     // Basic: I 
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
    // 01000 PRINT TAB(28);"RUSSIAN ROULETTE"
    b2c_printf("Russian roulette\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "THIS IS A GAME OF >>>>>>>>>>RUSSIAN ROULETTE."
    b2c_printf("This is a game of >>>>>>>>>>russian roulette.\n");

  Lbl_01040:
    // 01040 PRINT:PRINT "HERE IS A REVOLVER."
    b2c_printf("Here is a revolver.\n");

  Lbl_01050:
    // 01050 PRINT "TYPE '1' TO SPIN CHAMBER AND PULL TRIGGER."
    b2c_printf("Type '1' to spin chamber and pull trigger.\n");
    // 01060 PRINT "TYPE '2' TO GIVE UP."
    b2c_printf("Type '2' to give up.\n");
    // 01070 PRINT "GO";
    b2c_printf("Go");
    // 01080 N=0
    N_int = 0;

  Lbl_01090:
    // 01090 INPUT I
    // Start of Basic INPUT statement 01090
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&I_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01090
    // 01100 IF I<>2 THEN 1130
    if(I_int!=2)goto Lbl_01130;
    // 01110 PRINT "     CHICKEN!!!!!"
    b2c_printf("     chicken!!!!!\n");
    // 01120 GOTO 1200
    goto Lbl_01200;

  Lbl_01130:
    // 01130 N=N+1
    N_int = N_int+1;
    // 01140 IF RND(1)>.833333 THEN 1180
    if(RND(1)>0.83)goto Lbl_01180;
    // 01150 IF N>10 THEN 1220
    if(N_int>10)goto Lbl_01220;
    // 01160 PRINT "- CLICK -"
    b2c_printf("- click -\n");
    // 01170 PRINT: GOTO 1090
    goto Lbl_01090;

  Lbl_01180:
    // 01180 PRINT "     BANG!!!!!   YOU'RE DEAD!"
    b2c_printf("     bang!!!!!   You're dead!\n");
    // 01190 PRINT "CONDOLENCES WILL BE SENT TO YOUR RELATIVES."
    b2c_printf("Condolences will be sent to your relatives.\n");

  Lbl_01200:
    // 01200 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01210 PRINT "...NEXT VICTIM...":GOTO 1050
    goto Lbl_01050;

  Lbl_01220:
    // 01220 PRINT "YOU WIN!!!!!"
    b2c_printf("You win!!!!!\n");
    // 01230 PRINT "LET SOMEONE ELSE BLOW HIS BRAINS OUT."
    b2c_printf("Let someone else blow his brains out.\n");
    // 01240 GOTO 1040
    goto Lbl_01040;
    // 01250 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
