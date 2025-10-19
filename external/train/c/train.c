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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    T_int;                                     // Basic: T 
int    V_int;                                     // Basic: V 
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
    // 01000 PRINT TAB(33);"TRAIN"
    b2c_printf("Train\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 PRINT "TIME - SPEED DISTANCE EXERCISE": PRINT
    b2c_printf("");

  Lbl_01040:
    // 01040 C=INT(25*RND(1))+40
    C_int = INT(25*RND(1))+40;
    // 01050 D=INT(1050*RND(1))+5
    D_int = INT(15*RND(1))+5;
    // 01060 T=INT(19*RND(1))+1060
    T_int = INT(19*RND(1))+20;
    // 01070 PRINT " A CAR TRAVELING";C;"MPH CAN MAKE A CERTAIN TRIP IN"
    b2c_printf(" a car traveling %d  a car travelingMph can make a certain trip in\n",C_int);
    // 01080 PRINT D;"HOURS LESS THAN A TRAIN TRAVELING AT";T;"MPH."
    b2c_printf(" %d žyçÓcHours less than a train traveling atHours less than a train traveling at %d Hours less than a train traveling atMph.\n",D_int,T_int);
    // 01090 PRINT "HOW LONG DOES THE TRIP TAKE BY CAR";
    b2c_printf("How long does the trip take by car");
    // 01100 INPUT A
    // Start of Basic INPUT statement 01100
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
    }; // End of Basic INPUT statement 01100
    // 01110 V=D*T/(C-T)
    V_int = D_int*T_int/(C_int-T_int);
    // 01120 E=INT(ABS((V-A)*100/A)+.5)
    E_int = INT(ABS((V_int-A_int)*100/A_int)+0.5);
    // 01130 IF E>5 THEN 1160
    if(E_int>5)goto Lbl_01160;
    // 01140 PRINT "GOOD! ANSWER WITHIN";E;"PERCENT."
    b2c_printf("Good! Answer within %d Good! Answer withinPercent.\n",E_int);
    // 01150 GOTO 1170
    goto Lbl_01170;

  Lbl_01160:
    // 01160 PRINT "SORRY.  YOU WERE OFF BY";E;"PERCENT."
    b2c_printf("Sorry.  You were off by %d Sorry.  You were off byPercent.\n",E_int);

  Lbl_01170:
    // 01170 PRINT "CORRECT ANSWER IS";V;"HOURS."
    b2c_printf("Correct answer is %d Correct answer isHours.\n",V_int);
    // 01180 PRINT
    b2c_printf("");
    // 01190 PRINT "ANOTHER PROBLEM (YES OR NO)";
    b2c_printf("Another problem (yes or no)");
    // 01200 INPUT A$
    // Start of Basic INPUT statement 01200
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
    }; // End of Basic INPUT statement 01200
    // 01210 PRINT
    b2c_printf("");
    // 01220 IF A$="YES" THEN 1040
    if(strcmp(A_str,"Yes")==0)goto Lbl_01040;
    // 01230 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
