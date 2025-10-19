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
int    G_int;                                     // Basic: G 
int    N_int;                                     // Basic: N 
int    X_int;                                     // Basic: X 
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
    // 01000 PRINT TAB(30);"DEPTH CHARGE"
    b2c_printf("Depth charge\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 INPUT "DIMENSION OF SEARCH AREA";G: PRINT
    b2c_printf("");
    // 01040 N=INT(LOG(G)/LOG(2))+1
    N_int = INT(LOG(G_int)/LOG(2))+1;
    // 01050 PRINT "YOU ARE THE CAPTAIN OF THE DESTROYER USS COMPUTER"
    b2c_printf("You are the captain of the destroyer uss computer\n");
    // 01060 PRINT "AN ENEMY SUB HAS BEEN CAUSING YOU TROUBLE.  YOUR"
    b2c_printf("An enemy sub has been causing you trouble.  Your\n");
    // 01070 PRINT "MISSION IS TO DESTROY IT.  YOU HAVE";N;"SHOTS."
    b2c_printf("Mission is to destroy it.  You have %d Mission is to destroy it.  You haveShots.\n",N_int);
    // 01080 PRINT "SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A"
    b2c_printf("Specify depth charge explosion point with a\n");
    // 01090 PRINT "TRIO OF NUMBERS -- THE FIRST TWO ARE THE"
    b2c_printf("Trio of numbers -- the first two are the\n");
    // 01100 PRINT "SURFACE COORDINATES; THE THIRD IS THE DEPTH."
    b2c_printf("Surface coordinates; the third is the depth.\n");

  Lbl_01110:
    // 01110 PRINT : PRINT "GOOD LUCK !": PRINT
    b2c_printf("");
    // 01120 A=INT(G*RND(1)) : B=INT(G*RND(1)) : C=INT(G*RND(1))
    C_int = INT(G_int*RND(1));
    // 01130 FOR D=1 TO N : PRINT : PRINT "TRIAL #";D; : INPUT X,Y,Z
    // Start of Basic INPUT statement 01130
    {
        int numargs=3;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ||
                (err += b2c_strtoi(&Y_int,args,1)) ||
                (err += b2c_strtoi(&Z_int,args,2)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1180
    if(ABS(X_int-A_int)+ABS(Y_int-B_int)+ABS(Z_int-C_int)==0)goto Lbl_01180;
    // 01150 GOSUB 500 : PRINT : NEXT D
    int dummy_1150=0; // Ignore this line.
}; // End-For(D_int)
// 01160 PRINT : PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
b2c_printf("You have been torpedoed!  Abandon ship!\n");
// 01170 PRINT "THE SUBMARINE WAS AT";A;",";B;",";C : GOTO 1190
goto Lbl_01190;

  Lbl_01180:
// 01180 PRINT : PRINT "B O O M ! ! YOU FOUND IT IN";D;"TRIES!"
b2c_printf("B o o m ! ! You found it in %d B o o m ! ! You found it inTries!\n",D_int);

  Lbl_01190:
// 01190 PRINT : PRINT: INPUT "ANOTHER GAME (Y OR N)";A$
// Start of Basic INPUT statement 01190
{
    int numargs=1;
    char *args[numargs+1];
    bool echoeol=true;
    while(true){
        fprintf(stdout,""ANOTHER GAME (Y OR N)"");
        int err=input(args,numargs,echoeol);
        if(err==0x03) break;
        if(err || 
            (err += b2c_strtos(&A_str,args,0)) ){
             printf("?Redo from start\n");
        }else{
            break;
        };
    };
}; // End of Basic INPUT statement 01190
// 01200 IF A$="Y" THEN 1110
if(strcmp(A_str,"Y")==0)goto Lbl_01110;
// 01210 PRINT "OK.  HOPE YOU ENJOYED YOURSELF." : GOTO 1220
goto Lbl_01220;

  Lbl_01220:
// 01220 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
