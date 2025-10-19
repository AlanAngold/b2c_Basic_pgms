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
char*  A_str_arr[20];                             // Basic: A$ 
int    B_int;                                     // Basic: B 
int    I_int;                                     // Basic: I 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P1_int;                                    // Basic: P1 
int    P2_int;                                    // Basic: P2 
int    P3_int;                                    // Basic: P3 
int    P4_int;                                    // Basic: P4 
int    R_int;                                     // Basic: R 
int    S_int_arr[20];                             // Basic: S 
int    T_int;                                     // Basic: T 
int    U_int;                                     // Basic: U 
int    W_int_arr[10];                             // Basic: W 
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
    // 01000 PRINT TAB(32);"BULLSEYE"
    b2c_printf("Bullseye\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "IN THIS GAME, UP TO 20 PLAYERS THROW DARTS AT A TARGET"
    b2c_printf("In this game, up to 20 players throw darts at a target\n");
    // 01040 PRINT "WITH 10, 20, 30, AND 1040 POINT ZONES.  THE OBJECTIVE IS"
    b2c_printf("With 10, 20, 30, and 40 point zones.  The objective is\n");
    // 01050 PRINT "TO GET 200 POINTS.": PRINT
    b2c_printf("");
    // 01060 PRINT "THROW",TAB(20);"DESCRIPTION";TAB(45);"PROBABLE SCORE"
    b2c_printf("ThrowDescriptionProbable score\n");
    // 01070 PRINT" 1";TAB(20);"FAST OVERARM";TAB(45);"BULLSEYE OR COMPLETE MISS"
    b2c_printf(" 1Fast overarmBullseye or complete miss\n");
    // 01080 PRINT" 2";TAB(20);"CONTROLLED OVERARM";TAB(45);"10, 20 OR 30 POINTS"
    b2c_printf(" 2Controlled overarm10, 20 or 30 points\n");
    // 01090 PRINT" 3";TAB(20);"UNDERARM";TAB(45);"ANYTHING":PRINT
    b2c_printf("");
    // 01100 DIM A$(20),S(20),W(10): M=0: R=0: FOR I=1 TO 20: S(I)=0: NEXT I
    int dummy_1100=0; // Ignore this line.
}; // End-For(I_int)
// 01110 INPUT "HOW MANY PLAYERS";N: PRINT
b2c_printf("");
// 01120 FOR I=1 TO N
for(I_int=1;I_int<=N_int;I_int++){
    // 01130 PRINT "NAME OF PLAYER #";I;:INPUT A$(I)
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
                (err += b2c_strtos(&A_str_arr[I_int],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 NEXT I
    int dummy_1140=0; // Ignore this line.
}; // End-For(I_int)
// 01150 R=R+1: PRINT: PRINT "ROUND";R:PRINT "---------"
b2c_printf("---------\n");
// 01160 FOR I=1 TO N
for(I_int=1;I_int<=N_int;I_int++){

  Lbl_01170:
    // 01170 PRINT: PRINT A$(I)"'S THROW";: INPUT T
    // Start of Basic INPUT statement 01170
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&T_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01170
    // 01180 IF T<0 OR T>3 THEN PRINT "INPUT 1, 2, OR 3!": GOTO 1170
    goto Lbl_01170;
    // 01190 PRINT: PRINT "THANKS FOR THE GAME.": END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
