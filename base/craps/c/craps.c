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
int    D1_int;                                    // Basic: D1 
int    D2_int;                                    // Basic: D2 
int    D3_int;                                    // Basic: D3 
int    D4_int;                                    // Basic: D4 
int    J_int;                                     // Basic: J 
char*  L_str;                                     // Basic: L$ 
int    N_int;                                     // Basic: N 
char*  R_str;                                     // Basic: R$ 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01490();

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
// Routine B
//---------------------------------------------------------------------------

void Routine_01490(){
    // 01490 LET N=1+INT(6*RND)
    N_int = 1+INT(6*RND());
    // 01500 GOTO 01510
    goto Lbl_01510;

  Lbl_01510:
    // 01510 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM THIS PROGRAM SIMULATES THE GAME OF CRAPS
    // 01010 RANDOMIZE
    RANDOMIZE();

  Lbl_01020:
    // 01020 PRINT"FOR RULES, TYPE 'RULES', OTHERWISE TYPE 'GO'"
    b2c_printf("For rules, type 'rules', otherwise type 'go'\n");
    // 01030 INPUT R$
    // Start of Basic INPUT statement 01030
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&R_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01030
    // 01040 IF R$="RULES" THEN 1080
    if(strcmp(R_str,"Rules")==0)goto Lbl_01080;
    // 01050 IF R$="GO" THEN 1130
    if(strcmp(R_str,"Go")==0)goto Lbl_01130;
    // 01060 PRINT"INVALID COMMAND"
    b2c_printf("Invalid command\n");
    // 01070 GOTO 1020
    goto Lbl_01020;

  Lbl_01080:
    // 01080 PRINT"A 7 OR 11 ON THE FIRST THROW WINS"
    b2c_printf("A 7 or 11 on the first throw wins\n");
    // 01090 PRINT"YOU CAN ALSO WIN BY THROWING A 4,5,6,8,9,10"
    b2c_printf("You can also win by throwing a 4,5,6,8,9,10\n");
    // 01100 PRINT"AND MATCHING IT BEFORE THROWING A 7, IF ON"
    b2c_printf("And matching it before throwing a 7, if on\n");
    // 01110 PRINT"THE FIRST THROW A 2,3, OR A 12 COMES UP"
    b2c_printf("The first throw a 2,3, or a 12 comes up\n");
    // 01120 PRINT"YOU LOSE AUTOMATICALLY"
    b2c_printf("You lose automatically\n");

  Lbl_01130:
    // 01130 LET J=0
    J_int = 0;

  Lbl_01140:
    // 01140 GOSUB 1490
    Routine_01490();
    // 01150 LET D1=N
    D1_int = N_int;
    // 01160 GOSUB 1490
    Routine_01490();
    // 01170 LET D2=N
    D2_int = N_int;
    // 01180 LET D3=D1+D2
    D3_int = D1_int+D2_int;
    // 01190 LET J=J+1
    J_int = J_int+1;
    // 01200 IF J=1 THEN 1250
    if(J_int==1)goto Lbl_01250;
    // 01210 IF D3=D4 THEN 1440
    if(D3_int==D4_int)goto Lbl_01440;
    // 01220 IF D3=7 THEN 1460
    if(D3_int==7)goto Lbl_01460;

  Lbl_01230:
    // 01230 PRINT"YOU THROW A ";D3
    b2c_printf("You throw a  %d \n",D3_int);
    // 01240 GOTO 1140
    goto Lbl_01140;

  Lbl_01250:
    // 01250 IF D3=7 THEN 1320
    if(D3_int==7)goto Lbl_01320;
    // 01260 IF D3=2 THEN 1340
    if(D3_int==2)goto Lbl_01340;
    // 01270 IF D3=3 THEN 1340
    if(D3_int==3)goto Lbl_01340;
    // 01280 IF D3=12 THEN 1340
    if(D3_int==12)goto Lbl_01340;
    // 01290 IF D3=11 THEN 1320
    if(D3_int==11)goto Lbl_01320;
    // 01300 LET D4=D3
    D4_int = D3_int;
    // 01310 GOTO 1230
    goto Lbl_01230;

  Lbl_01320:
    // 01320 PRINT"YOU THROW A ";D3;" YOU WIN"
    b2c_printf("You throw a  %d You throw a  you win\n",D3_int);
    // 01330 GOTO 1350
    goto Lbl_01350;

  Lbl_01340:
    // 01340 PRINT"YOU THROW A ";D3;" YOU LOSE"
    b2c_printf("You throw a  %d You throw a  you lose\n",D3_int);

  Lbl_01350:
    // 01350 PRINT
    b2c_printf("");
    // 01360 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE'N'"
    b2c_printf("To continue type 'y', if not type'n'\n");
    // 01370 INPUT L$
    // Start of Basic INPUT statement 01370
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&L_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01370
    // 01380 IF L$="Y" THEN 1420
    if(strcmp(L_str,"Y")==0)goto Lbl_01420;
    // 01390 IF L$="N" THEN 1400
    if(strcmp(L_str,"N")==0)goto Lbl_01400;

  Lbl_01400:
    // 01400 PRINT"WHAT? QUITTING ALREADY, CRAP OUT DID YOU?"
    b2c_printf("What? Quitting already, crap out did you?\n");
    // 01410 STOP
    exit(1);

  Lbl_01420:
    // 01420 PRINT
    b2c_printf("");
    // 01430 GOTO 1130
    goto Lbl_01130;

  Lbl_01440:
    // 01440 PRINT"YOU THROW A ";D3;" YOU WIN BY MATCHING"
    b2c_printf("You throw a  %d You throw a  you win by matching\n",D3_int);
    // 01450 GOTO 1350
    goto Lbl_01350;

  Lbl_01460:
    // 01460 PRINT"YOU THROW A ";D3;" SORRY, YOU LOSE"
    b2c_printf("You throw a  %d You throw a  sorry, you lose\n",D3_int);
    // 01470 GOTO 1350
    goto Lbl_01350;
    // 01480 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
