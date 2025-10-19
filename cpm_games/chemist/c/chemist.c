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
int    D_int;                                     // Basic: D 
int    L9_int;                                    // Basic: L9 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    W_int;                                     // Basic: W 
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
    // 01000 PRINT CHR$(26)
    b2c_printf("");
    // 01010 PRINT TAB(10103);"CHEMST":PRINT
    b2c_printf("");
    // 01020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01030 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01040 PRINT "THE FICTITIOUS CHECMICAL KRYPTOCYANIC ACID CAN ONLY BE"
    b2c_printf("The fictitious checmical kryptocyanic acid can only be\n");
    // 01050 PRINT "DILUTED BY THE RATIO OF 7 PARTS WATER TO 3 PARTS ACID."
    b2c_printf("Diluted by the ratio of 7 parts water to 3 parts acid.\n");
    // 01060 PRINT "IF ANY OTHER RATIO IS ATTEMPTED, THE ACID BECOMES UNSTABLE"
    b2c_printf("If any other ratio is attempted, the acid becomes unstable\n");
    // 01070 PRINT "AND SOON EXPLODES.  GIVEN THE AMOUNT OF ACID, YOU MUST"
    b2c_printf("And soon explodes.  Given the amount of acid, you must\n");
    // 01080 PRINT "DECIDE WHO MUCH WATER TO ADD FOR DILUTION.  IF YOU MISS"
    b2c_printf("Decide who much water to add for dilution.  If you miss\n");
    // 01090 PRINT "YOU FACE THE CONSEQUENCES."
    b2c_printf("You face the consequences.\n");
    // 01100 PRINT:PRINT
    b2c_printf("");

  Lbl_01110:
    // 01110 A=INT(RND(1)*50)
    A_int = INT(RND(1)*50);
    // 01120 W=7*A/3
    W_int = 7*A_int/3;
    // 01130 PRINT A;"LITERS OF KRYPTOCYANIC ACID.  HOW MUCH WATER";
    b2c_printf(" %d uá•	VLiters of kryptocyanic acid.  How much waterLiters of kryptocyanic acid.  How much water\n",A_int);
    // 01140 INPUT R
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
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01140
    // 01150 D=ABS(W-R)
    D_int = ABS(W_int-R_int);
    // 01160 IF D>W/20 THEN 1200
    if(D_int>W_int/20)goto Lbl_01200;
    // 01170 PRINT " GOOD JOB! YOU MAY BREATHE NOW, BUT DON'T INHALE THE FUMES!"
    b2c_printf(" good job! You may breathe now, but don't inhale the fumes!\n");
    // 01180 PRINT
    b2c_printf("");
    // 01190 GOTO 1110
    goto Lbl_01110;

  Lbl_01200:
    // 01200 PRINT " SIZZLE!  YOU HAVE JUST BEEN DESALINATED INTO A BLOB"
    b2c_printf(" sizzle!  You have just been desalinated into a blob\n");
    // 01210 PRINT " OF QUIVERING PROTOPLASM!":PRINT
    b2c_printf("");
    // 01220 T=T+1
    T_int = T_int+1;
    // 01230 IF T=9 THEN 1260
    if(T_int==9)goto Lbl_01260;
    // 01240 PRINT " HOWEVER, YOU MAY TRY AGAIN WITH ANOTHER LIFE.":PRINT
    b2c_printf("");
    // 01250 GOTO 1110
    goto Lbl_01110;

  Lbl_01260:
    // 01260 PRINT " YOUR 9 LIVES ARE USED, BUT YOU WILL BE LONG REMEMBERED FOR"
    b2c_printf(" your 9 lives are used, but you will be long remembered for\n");
    // 01270 PRINT " YOUR CONTRIBUTIONS TO THE FIELD OF COMIC BOOK CHEMISTRY."
    b2c_printf(" your contributions to the field of comic book chemistry.\n");
    // 01280 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01290 RUN "MENU"
    system(""MENU"");
    // 01300 INPUT L9
    // Start of Basic INPUT statement 01300
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&L9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01300
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
