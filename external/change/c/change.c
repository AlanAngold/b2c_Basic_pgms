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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
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
    // 01000 PRINT TAB(33);"CHANGE"
    b2c_printf("Change\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "I, YOUR FRIENDLY MICROCOMPUTER, WILL DETERMINE"
    b2c_printf("I, your friendly microcomputer, will determine\n");
    // 01040 PRINT "THE CORRECT CHANGE FOR ITEMS COSTING UP TO $100."
    b2c_printf("The correct change for items costing up to $100.\n");
    // 01050 PRINT:PRINT
    b2c_printf("");

  Lbl_01060:
    // 01060 PRINT "COST OF ITEM";:INPUT A:PRINT "AMOUNT OF PAYMENT";:INPUT P
    // Start of Basic INPUT statement 01060
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 C=P-A:M=C:IF C<>0 THEN 1100
    if(C_int!=0)goto Lbl_01100;
    // 01080 PRINT "CORRECT AMOUNT, THANK YOU."
    b2c_printf("Correct amount, thank you.\n");
    // 01090 GOTO 1490
    goto Lbl_01490;

  Lbl_01100:
    // 01100 IF C>0 THEN 1130
    if(C_int>0)goto Lbl_01130;
    // 01110 PRINT "SORRY, YOU HAVE SHORT-CHANGED ME $";A-P
    b2c_printf("Sorry, you have short-changed me $");
    // 01120 GOTO 1060
    goto Lbl_01060;

  Lbl_01130:
    // 01130 PRINT "YOUR CHANGE, $";C
    b2c_printf("Your change, $ %d \n",C_int);
    // 01140 D=INT(C/10)
    D_int = INT(C_int/10);
    // 01150 IF D=0 THEN 1170
    if(D_int==0)goto Lbl_01170;
    // 01160 PRINT D;"TEN DOLLAR BILL(S)"
    b2c_printf(" %d h¡£–_Ten dollar bill(s)\n",D_int);

  Lbl_01170:
    // 01170 C=M-(D*10)
    C_int = M_int-(D_int*10);
    // 01180 E=INT(C/5)
    E_int = INT(C_int/5);
    // 01190 IF E=0 THEN 1210
    if(E_int==0)goto Lbl_01210;
    // 01200 PRINT E;"FIVE DOLLARS BILL(S)"
    b2c_printf(" %d i¡£–_Five dollars bill(s)\n",E_int);

  Lbl_01210:
    // 01210 C=M-(D*10+E*5)
    C_int = M_int-(D_int*10+E_int*5);
    // 01220 F=INT(C)
    F_int = INT(C_int);
    // 01230 IF F=0 THEN 1250
    if(F_int==0)goto Lbl_01250;
    // 01240 PRINT F;"ONE DOLLAR BILL(S)"
    b2c_printf(" %d X¡£–_One dollar bill(s)\n",F_int);

  Lbl_01250:
    // 01250 C=M-(D*10+E*5+F)
    C_int = M_int-(D_int*10+E_int*5+F_int);
    // 01260 C=C*100
    C_int = C_int*100;
    // 01270 N=C
    N_int = C_int;
    // 01280 G=INT(C/50)
    G_int = INT(C_int/50);
    // 01290 IF G=0 THEN 1310
    if(G_int==0)goto Lbl_01310;
    // 01300 PRINT G;"ONE HALF DOLLAR(S)"
    b2c_printf(" %d b¡£–_One half dollar(s)\n",G_int);

  Lbl_01310:
    // 01310 C=N-(G*50)
    C_int = N_int-(G_int*50);
    // 01320 H=INT(C/25)
    H_int = INT(C_int/25);
    // 01330 IF H=0 THEN 1350
    if(H_int==0)goto Lbl_01350;
    // 01340 PRINT H;"QUARTER(S)"
    b2c_printf(" %d ]¡£–_Quarter(s)\n",H_int);

  Lbl_01350:
    // 01350 C=N-(G*50+H*25)
    C_int = N_int-(G_int*50+H_int*25);
    // 01360 I=INT(C/10)
    I_int = INT(C_int/10);
    // 01370 IF I=0 THEN 1390
    if(I_int==0)goto Lbl_01390;
    // 01380 PRINT I;"DIME(S)"
    b2c_printf(" %d ^¡£–_Dime(s)\n",I_int);

  Lbl_01390:
    // 01390 C=N-(G*50+H*25+I*10)
    C_int = N_int-(G_int*50+H_int*25+I_int*10);
    // 01400 J=INT(C/5)
    J_int = INT(C_int/5);
    // 01410 IF J=0 THEN 1430
    if(J_int==0)goto Lbl_01430;
    // 01420 PRINT J;"NICKEL(S)"
    b2c_printf(" %d `¡£–_Nickel(s)\n",J_int);

  Lbl_01430:
    // 01430 C=N-(G*50+H*25+I*10+J*5)
    C_int = N_int-(G_int*50+H_int*25+I_int*10+J_int*5);
    // 01440 K=INT(C+.5)
    K_int = INT(C_int+0.5);
    // 01450 IF K=0 THEN 1470
    if(K_int==0)goto Lbl_01470;
    // 01460 PRINT K;"PENNY(S)"
    b2c_printf(" %d d¡£–_Penny(s)\n",K_int);

  Lbl_01470:
    // 01470 PRINT "THANK YOU, COME AGAIN."
    b2c_printf("Thank you, come again.\n");
    // 01480 PRINT:PRINT
    b2c_printf("");

  Lbl_01490:
    // 01490 GOTO 1060
    goto Lbl_01060;
    // 01500 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
