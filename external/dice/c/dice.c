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
int    F_int_arr[12];                             // Basic: F 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    V_int;                                     // Basic: V 
int    X_int;                                     // Basic: X 
char*  Z_str;                                     // Basic: Z$ 
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
    // 01000 PRINT TAB(34);"DICE"
    b2c_printf("Dice\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 DIM F(12)
    // 01040 REM  DANNY FREIDUS
    // 01050 PRINT "THIS PROGRAM SIMULATES THE ROLLING OF A"
    b2c_printf("This program simulates the rolling of a\n");
    // 01060 PRINT "PAIR OF DICE."
    b2c_printf("Pair of dice.\n");
    // 01070 PRINT "YOU ENTER THE NUMBER OF TIMES YOU WANT THE COMPUTER TO"
    b2c_printf("You enter the number of times you want the computer to\n");
    // 01080 PRINT "'ROLL' THE DICE.  WATCH OUT, VERY LARGE NUMBERS TAKE"
    b2c_printf("'roll' the dice.  Watch out, very large numbers take\n");
    // 01090 PRINT "A LONG TIME.  IN PARTICULAR, NUMBERS OVER 5000."
    b2c_printf("A long time.  In particular, numbers over 5000.\n");

  Lbl_01100:
    // 01100 FOR Q=1 TO 12
    for(Q_int=1;Q_int<=12;Q_int++){
        // 01110 F(Q)=0
        F_int_arr[Q_int] = 0;
        // 01120 NEXT Q
        int dummy_1120=0; // Ignore this line.
    }; // End-For(Q_int)
    // 01130 PRINT:PRINT "HOW MANY ROLLS";
    b2c_printf("How many rolls");
    // 01140 INPUT X
    // Start of Basic INPUT statement 01140
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01140
    // 01150 FOR S=1 TO X
    for(S_int=1;S_int<=X_int;S_int++){
        // 01160 A=INT(6*RND(1)+1)
        A_int = INT(6*RND(1)+1);
        // 01170 B=INT(6*RND(1)+1)
        B_int = INT(6*RND(1)+1);
        // 01180 R=A+B
        R_int = A_int+B_int;
        // 01190 F(R)=F(R)+1
        F_int_arr[R_int] = F_int_arr[R_int]+1;
        // 01200 NEXT S
        int dummy_1200=0; // Ignore this line.
    }; // End-For(S_int)
    // 01210 PRINT
    b2c_printf("");
    // 01220 PRINT "TOTAL SPOTS","NUMBER OF TIMES"
    b2c_printf("Total spotsNumber of times\n");
    // 01230 FOR V=2 TO 12
    for(V_int=2;V_int<=12;V_int++){
        // 01240 PRINT V,F(V)
        b2c_printf(" %d xŸa %d \n",V_int,F_int_arr[V_int]);
        // 01250 NEXT V
        int dummy_1250=0; // Ignore this line.
    }; // End-For(V_int)
    // 01260 PRINT
    b2c_printf("");
    // 01270 PRINT:PRINT "TRY AGAIN";
    b2c_printf("Try again");
    // 01280 INPUT Z$
    // Start of Basic INPUT statement 01280
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01280
    // 01290 IF Z$="YES" THEN 1100
    if(strcmp(Z_str,"Yes")==0)goto Lbl_01100;
    // 01300 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
