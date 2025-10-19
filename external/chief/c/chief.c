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
char*  A_str;                                     // Basic: A$ 
int    B_int;                                     // Basic: B 
int    C_int;                                     // Basic: C 
char*  D_str;                                     // Basic: D$ 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
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
    // 01000 PRINT TAB(30) "CHIEF"
    b2c_printf("Chief\n");
    // 01010 PRINT TAB(15) "CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "I AM CHIEF NUMBERS FREEK, THE GREAT INDIAN MATH GOD."
    b2c_printf("I am chief numbers freek, the great indian math god.\n");
    // 01040 PRINT "ARE YOU READY TO TAKE THE TEST YOU CALLED ME OUT FOR";
    b2c_printf("Are you ready to take the test you called me out for");
    // 01050 INPUT A$
    // Start of Basic INPUT statement 01050
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
    }; // End of Basic INPUT statement 01050
    // 01060 IF A$="YES" THEN 1080
    if(strcmp(A_str,"Yes")==0)goto Lbl_01080;
    // 01070 PRINT "SHUT UP, PALE FACE WITH WISE TONGUE."
    b2c_printf("Shut up, pale face with wise tongue.\n");

  Lbl_01080:
    // 01080 PRINT " TAKE A NUMBER AND ADD 3. DIVIDE THIS NUMBER BY 5 AND"
    b2c_printf(" take a number and add 3. Divide this number by 5 and\n");
    // 01090 PRINT "MULTIPLY BY 8. DIVIDE BY 5 AND ADD THE SAME. SUBTRACT 1."
    b2c_printf("Multiply by 8. Divide by 5 and add the same. Subtract 1.\n");
    // 01100 PRINT "  WHAT DO YOU HAVE";
    b2c_printf("  what do you have");
    // 01110 INPUT B
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
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01110
    // 01120 LET C = (B+1-5)*5/8*5-3
    C_int = (B_int+1-5)*5/8*5-3;
    // 01130 PRINT "I BET YOUR NUMBER WAS" C". AM I RIGHT";
    b2c_printf("I bet your number was %d I bet your number was. Am i right. Am i right\n",C_int);
    // 01140 INPUT D$
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
                (err += b2c_strtos(&D_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01140
    // 01150 IF D$="YES" THEN 500
    if(strcmp(D_str,"Yes")==0)goto Lbl_00500;
    // 01160 PRINT "WHAT WAS YOUR ORIGINAL NUMBER";
    b2c_printf("What was your original number");
    // 01170 INPUT K
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
                (err += b2c_strtoi(&K_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01170
    // 01180 LET F=K+3
    F_int = K_int+3;
    // 01190 LET G=F/5
    G_int = F_int/5;
    // 01200 LET H=G*8
    H_int = G_int*8;
    // 01210 LET I=H/5+5
    I_int = H_int/5+5;
    // 01220 LET J=I-1
    J_int = I_int-1;
    // 01230 PRINT "SO YOU THINK YOU'RE SO SMART, EH?"
    b2c_printf("So you think you're so smart, eh?\n");
    // 01240 PRINT "NOW WATCH."
    b2c_printf("Now watch.\n");
    // 01250 PRINT K"PLUS 3 EQUALS"F". THIS DIVIDED BY 5 EQUALS"G";"
    b2c_printf(" %d ¤sCy[Plus 3 equalsPlus 3 equals %d Plus 3 equals. This divided by 5 equals. This divided by 5 equals %d . This divided by 5 equals;\n",K_int,F_int,G_int);
    // 01260 PRINT "THIS TIMES 8 EQUALS"H". IF WE DIVIDE BY 5 AND ADD 5,"
    b2c_printf("This times 8 equals %d This times 8 equals. If we divide by 5 and add 5,\n",H_int);
    // 01270 PRINT "WE GET"I", WHICH, MINUS 1, EQUALS"J"."
    b2c_printf("We get %d We get, which, minus 1, equals, which, minus 1, equals %d , which, minus 1, equals.\n",I_int,J_int);
    // 01280 PRINT "NOW DO YOU BELIEVE ME";
    b2c_printf("Now do you believe me");
    // 01290 INPUT Z$
    // Start of Basic INPUT statement 01290
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
    }; // End of Basic INPUT statement 01290
    // 01300 IF Z$="YES" THEN 500
    if(strcmp(Z_str,"Yes")==0)goto Lbl_00500;
    // 01310 PRINT "YOU HAVE MADE ME MAD!!!"
    b2c_printf("You have made me mad!!!\n");
    // 01320 PRINT "THERE MUST BE A GREAT LIGHTNING BOLT!"
    b2c_printf("There must be a great lightning bolt!\n");
    // 01330 PRINT:PRINT
    b2c_printf("");
    // 01340 FOR X=30 TO 22 STEP -1
    for(X_int=30;X_int>=22;X_int+=-1){
        // 01350 PRINT TAB(X) "X X"
        b2c_printf("X x\n");
        // 01360 NEXT X
        int dummy_1360=0; // Ignore this line.
    }; // End-For(X_int)
    // 01370 PRINT TAB(21) "X XXX"
    b2c_printf("X xxx\n");
    // 01380 PRINT TAB(20) "X   X"
    b2c_printf("X   x\n");
    // 01390 PRINT TAB(19) "XX X"
    b2c_printf("Xx x\n");
    // 01400 FOR Y=20 TO 13 STEP -1
    for(Y_int=20;Y_int>=13;Y_int+=-1){
        // 01410 PRINT TAB(Y) "X X"
        b2c_printf("X x\n");
        // 01420 NEXT Y
        int dummy_1420=0; // Ignore this line.
    }; // End-For(Y_int)
    // 01430 PRINT TAB(12) "XX"
    b2c_printf("Xx\n");
    // 01440 PRINT TAB(11) "X"
    b2c_printf("X\n");
    // 01450 PRINT TAB(10) "*"
    b2c_printf("*\n");
    // 01460 PRINT:PRINT"#########################":PRINT
    b2c_printf("");
    // 01470 PRINT "I HOPE YOU BELIEVE ME NOW, FOR YOUR SAKE!!"
    b2c_printf("I hope you believe me now, for your sake!!\n");
    // 01480 GOTO 1490
    goto Lbl_01490;

  Lbl_01490:
    // 01490 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
