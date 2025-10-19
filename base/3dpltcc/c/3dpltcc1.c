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
char*  B_str;                                     // Basic: B$ 
int    L_int;                                     // Basic: L 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    QZ_int;                                    // Basic: QZ 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01340();

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

void Routine_01340(){
    // 01340 ON A GOTO 1350,1370,1390,1410,1430,1450
    switch((int)(A_int)){
        case 1: goto Lbl_01350;
        case 2: goto Lbl_01370;
        case 3: goto Lbl_01390;
        case 4: goto Lbl_01410;
        case 5: goto Lbl_01430;
        case 6: goto Lbl_01450;
        default: break; 
    };

  Lbl_01350:
    // 01350 Z=INT(25+(SQR(900.01-P*P)*.9-2)-.7*Y)
    Z_int = INT(25+(SQR(900.01-P_int*P_int)*0.9-2)-0.7*Y_int);
    // 01360 GOTO1460
    goto Lbl_01460;

  Lbl_01370:
    // 01370 Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    Z_int = INT(25+(30*CSNG(P_int*P_int/100))-0.7*Y_int);
    // 01380 GOTO1460
    goto Lbl_01460;

  Lbl_01390:
    // 01390 Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    Z_int = INT(25+(30*(IPower(COS(P_int/16),2)))-0.7*Y_int);
    // 01400 GOTO1460
    goto Lbl_01460;

  Lbl_01410:
    // 01410 Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    Z_int = INT(25+(30-30*SIN(P_int/19))-0.7*Y_int);
    // 01420 GOTO1460
    goto Lbl_01460;

  Lbl_01430:
    // 01430 Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    Z_int = INT(25+(30*CSNG(-COS(P_int/16))-30)-0.7*Y_int);
    // 01440 GOTO1460
    goto Lbl_01460;

  Lbl_01450:
    // 01450 Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    Z_int = INT(25+(30+4*SIN(P_int/15))-0.7*Y_int);

  Lbl_01460:
    // 01460 GOTO 01470
    goto Lbl_01470;

  Lbl_01470:
    // 01470 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS
    ClearScreen(0);
    // 01030 PRINT@283,"3-D PLOT"
    b2c_printf("3-d plot\n");
    // 01040 PRINT@409,"COPYRIGHT BY"
    b2c_printf("Copyright by\n");
    // 01050 PRINT@534,"CREATIVE COMPUTING"
    b2c_printf("Creative computing\n");
    // 01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    b2c_printf("Morristown, new jersey 07960\n");
    // 01070 FOR QZ=1 TO 1500
    for(QZ_int=1;QZ_int<=1500;QZ_int++){
        // 01080 NEXT
        int dummy_1080=0; // Ignore this line.
    };
    // 01090 CLS
    ClearScreen(0);
    // 01100 Q=0
    Q_int = 0;
    // 01110 GOTO1130
    goto Lbl_01130;

  Lbl_01120:
    // 01120 PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    b2c_printf("There are only six functions. One through six inclusive\n");

  Lbl_01130:
    // 01130 CLS:PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    b2c_printf("Which function would you like me to print (1-6)\n");
    // 01140 INPUT A: IF A<1 OR A>6 THEN 1120
    if(A_int<1||A_int>6)goto Lbl_01120;
    // 01150 CLS
    ClearScreen(0);
    // 01160 FOR X=-30 TO 30 STEP 1.5
    for(X_int=-30;X_int<=30;X_int+=1.5){
        // 01170 L=0
        L_int = 0;
        // 01180 Y1=5*INT(SQR(900-X*X)/5)
        Y1_int = 5*INT(SQR(900-X_int*X_int)/5);
        // 01190 FOR Y=Y1 TO -Y1 STEP -5
        for(Y_int=Y1_int;Y_int>=Y1_int;Y_int+=-5){
            // 01200 P=SQR(X*X+Y*Y)
            P_int = SQR(X_int*X_int+Y_int*Y_int);
            // 01210 GOSUB 1340
            Routine_01340();
            // 01220 IF Z<=L THEN 1260
            if(Z_int<=L_int)goto Lbl_01260;
            // 01230 L=Z
            L_int = Z_int;
            // 01240 IF Q=0 THEN 1250
            if(Q_int==0)goto Lbl_01250;

  Lbl_01250:
            // 01250 PRINT TAB(Z);"*";
            b2c_printf("*");

  Lbl_01260:
            // 01260 NEXT Y
            int dummy_1260=0; // Ignore this line.
        }; // End-For(Y_int)
        // 01270 IF Q=0 THEN 1280
        if(Q_int==0)goto Lbl_01280;

  Lbl_01280:
        // 01280 PRINT
        b2c_printf("");
        // 01290 NEXT X
        int dummy_1290=0; // Ignore this line.
    }; // End-For(X_int)
    // 01300 GOTO 1310
    goto Lbl_01310;

  Lbl_01310:
    // 01310 PRINT"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION";
    b2c_printf("Would you like me to print another function");
    // 01320 INPUTB$:IF LEFT$(B$,1)="Y"THEN1130
    if(LEFT$(B_str,1)=='Y')goto Lbl_01130;
    // 01330 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
