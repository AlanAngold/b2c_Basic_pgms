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
char* data_01330s[]={"BLACK","WHITE","RED","GREEN","ORANGE","YELLOW","PURPLE","TAN"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1330,  8,data_01330s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
char*  A_str_arr[0];                              // Basic: A$ 
int    B_int;                                     // Basic: B 
int    B1_int;                                    // Basic: B1 
int    C_int;                                     // Basic: C 
int    C9_int;                                    // Basic: C9 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
char*  G_str_arr[0];                              // Basic: G$ 
int    H_int;                                     // Basic: H 
char*  H_str_arr[0];                              // Basic: H$ 
int    I_int_arr[0];                              // Basic: I 
char*  L_str;                                     // Basic: L$ 
int    M_int;                                     // Basic: M 
int    P_int;                                     // Basic: P 
int    P9_int;                                    // Basic: P9 
int    Q_int_arr[0];                              // Basic: Q 
int    R_int;                                     // Basic: R 
int    R9_int;                                    // Basic: R9 
int    S_int_arr[10][2];                          // Basic: S 
char*  S_str_arr[10];                             // Basic: S$ 
int    T_int;                                     // Basic: T 
int    W_int;                                     // Basic: W 
int    W1_int;                                    // Basic: W1 
int    X_int;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
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
    // 01000 PRINT TAB(30);"MASTERMIND"
    b2c_printf("Mastermind\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 REM
    // 01040 REM     MASTERMIND II
    // 01050 REM     STEVE NORTH
    // 01060 REM     CREATIVE COMPUTING
    // 01070 REM     PO BOX 789-M MORRISTOWN NEW JERSEY 07960
    // 01080 REM
    // 01090 REM

  Lbl_01100:
    // 01100 INPUT "NUMBER OF COLORS";C9
    // Start of Basic INPUT statement 01100
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""NUMBER OF COLORS"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01100
    // 01110 IF C9>8 THEN PRINT "NO MORE THAN 8, PLEASE!":GOTO 1100
    goto Lbl_01100;
    // 01120 REM     GET A COMBINATION
    // 01130 REM     UNPACK X$ INTO G$(1-P9)
    // 01140 REM     NOW WE CONVERT Q(1-P9) INTO A$(1-P9) [ACTUAL GUESS]
    // 01150 REM     AND GET NUMBER OF BLACKS AND WHITES
    // 01160 REM     TELL HUMAN RESULTS
    // 01170 REM     SAVE ALL THIS STUFF FOR BOARD PRINTOUT LATER
    // 01180 REM
    // 01190 REM     NOW COMPUTER GUESSES
    // 01200 REM
    // 01210 REM     FIND A GUESS
    // 01220 REM     NOW WE CONVERT GUESS #G INTO G$
    // 01230 REM
    // 01240 REM     BOARD PRINTOUT ROUTINE
    // 01250 REM
    // 01260 REM
    // 01270 REM     QUIT ROUTINE
    // 01280 REM
    // 01290 REM
    // 01300 REM     CONVERT Q(1-P9) INTO G$(1-P9)
    // 01310 REM
    // 01320 REM     PROGRAM DATA FOR COLOR NAMES
    // 01330 DATA BLACK,WHITE,RED,GREEN,ORANGE,YELLOW,PURPLE,TAN
    // 01340 REM   ...WE'RE SORRY BUT IT'S TIME TO GO...
    // 01350 END
    // 01360 REM
    // 01370 REM     INITIALIZE Q(1-P9) TO ZEROS
    // 01380 REM
    // 01440 REM
    // 01450 REM     INCREMENT Q(1-P9)
    // 01460 REM
    // 01480 REM  IF ZERO, THIS IS OUR FIRST INCREMENT: MAKE ALL ONES
    // 01600 REM
    // 01610 REM     CONVERT Q(1-P9) TO A$(1-P9)
    // 01620 REM
    // 01680 REM
    // 01690 REM     GET NUMBER OF BLACKS (B) AND WHITES (W)
    // 01700 REM     MASHES G$ AND A$ IN THE PROCESS
    // 01710 REM
    // 01880 REM
    // 01890 REM     PRINT SCORE
    // 01900 REM
    // 01970 REM
    // 01980 REM     CONVERT Q(1-P9) TO H$(1-P9)
    // 01990 REM
    // 02050 REM
    // 02060 REM     COPY H$ INTO G$
    // 02070 REM
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
