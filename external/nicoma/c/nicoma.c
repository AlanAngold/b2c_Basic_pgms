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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    I_int;                                     // Basic: I 
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
    // 01000 PRINT TAB(33);"NICOMA"
    b2c_printf("Nicoma\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 PRINT "BOOMERANG PUZZLE FROM ARITHMETICA OF NICOMACHUS -- A.D. 90!"
    b2c_printf("Boomerang puzzle from arithmetica of nicomachus -- a.D. 90!\n");

  Lbl_01040:
    // 01040 PRINT
    b2c_printf("");
    // 01050 PRINT "PLEASE THINK OF A NUMBER BETWEEN 1 AND 100."
    b2c_printf("Please think of a number between 1 and 100.\n");
    // 01060 PRINT "YOUR NUMBER DIVIDED BY 3 HAS A REMAINDER OF";
    b2c_printf("Your number divided by 3 has a remainder of");
    // 01070 INPUT A
    // Start of Basic INPUT statement 01070
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
    }; // End of Basic INPUT statement 01070
    // 01080 PRINT "YOUR NUMBER DIVIDED BY 5 HAS A REMAINDER OF";
    b2c_printf("Your number divided by 5 has a remainder of");
    // 01090 INPUT B
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
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01090
    // 01100 PRINT "YOUR NUMBER DIVIDED BY 7 HAS A REMAINDER OF";
    b2c_printf("Your number divided by 7 has a remainder of");
    // 01110 INPUT C
    // Start of Basic INPUT statement 01110
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01110
    // 01120 PRINT
    b2c_printf("");
    // 01130 PRINT "LET ME THINK A MOMENT..."
    b2c_printf("Let me think a moment...\n");
    // 01140 PRINT
    b2c_printf("");
    // 01150 FOR I=1 TO 1500: NEXT I
    int dummy_1150=0; // Ignore this line.
}; // End-For(I_int)
// 01160 D=70*A+21*B+15*C
D_int = 70*A_int+21*B_int+15*C_int;

  Lbl_01170:
// 01170 IF D<=105 THEN 1200
if(D_int<=105)goto Lbl_01200;
// 01180 D=D-105
D_int = D_int-105;
// 01190 GOTO 1170
goto Lbl_01170;

  Lbl_01200:
// 01200 PRINT "YOUR NUMBER WAS";D;", RIGHT";
b2c_printf("Your number was %d Your number was, right, right\n",D_int);

  Lbl_01210:
// 01210 INPUT A$
// Start of Basic INPUT statement 01210
{
    int numargs=1;
    char *args[numargs+1];
    bool echoeol=true;
    while(true){
        fprintf(stdout," ? ");
        int err=input(args,numargs,echoeol);
        if(err==0x03) break;
        if(err || 
            (err += b2c_strtos(&A_str,args,0)) ){
             printf("?Redo from start\n");
        }else{
            break;
        };
    };
}; // End of Basic INPUT statement 01210
// 01220 PRINT
b2c_printf("");
// 01230 IF A$="YES" THEN 1270
if(strcmp(A_str,"Yes")==0)goto Lbl_01270;
// 01240 IF A$="NO" THEN 1290
if(strcmp(A_str,"No")==0)goto Lbl_01290;
// 01250 PRINT "EH?  I DON'T UNDERSTAND '";A$;"'  TRY 'YES' OR 'NO'."
b2c_printf("Eh?  I don't understand '%sEh?  I don't understand ''  try 'yes' or 'no'.\n",A_str);
// 01260 GOTO 1210
goto Lbl_01210;

  Lbl_01270:
// 01270 PRINT "HOW ABOUT THAT!!"
b2c_printf("How about that!!\n");
// 01280 GOTO 1300
goto Lbl_01300;

  Lbl_01290:
// 01290 PRINT "I FEEL YOUR ARITHMETIC IS IN ERROR."
b2c_printf("I feel your arithmetic is in error.\n");

  Lbl_01300:
// 01300 PRINT
b2c_printf("");
// 01310 PRINT "LET'S TRY ANOTHER."
b2c_printf("Let's try another.\n");
// 01320 GOTO 1040
goto Lbl_01040;
// 01330 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
