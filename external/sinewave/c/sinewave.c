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
int    T_int;                                     // Basic: T 
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
    // 01000 PRINT TAB(30);"SINE WAVE"
    b2c_printf("Sine wave\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 REM ARKABLE PROGRAM BY DAVID AHL
    // 01040 B=0
    B_int = 0;
    // 01050 REM  START LONG LOOP
    // 01060 FOR T=0 TO 40 STEP .25
    for(T_int=0;T_int<=40;T_int+=0.25){
        // 01070 A=INT(26+25*SIN(T))
        A_int = INT(26+25*SIN(T_int));
        // 01080 PRINT TAB(A);
        b2c_printf("");
        // 01090 IF B=1 THEN 1130
        if(B_int==1)goto Lbl_01130;
        // 01100 PRINT "CREATIVE"
        b2c_printf("Creative\n");
        // 01110 B=1
        B_int = 1;
        // 01120 GOTO 1150
        goto Lbl_01150;

  Lbl_01130:
        // 01130 PRINT "COMPUTING"
        b2c_printf("Computing\n");
        // 01140 B=0
        B_int = 0;

  Lbl_01150:
        // 01150 NEXT T
        int dummy_1150=0; // Ignore this line.
    }; // End-For(T_int)
    // 01160 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
