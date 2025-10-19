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
int    C_int;                                     // Basic: C 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    L_int;                                     // Basic: L 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    T_int_arr[20];                             // Basic: T 
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
    // 01000 PRINT TAB(33);"BOUNCE"
    b2c_printf("Bounce\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 DIM T(20)
    // 01040 PRINT "THIS SIMULATION LETS YOU SPECIFY THE INITIAL VELOCITY"
    b2c_printf("This simulation lets you specify the initial velocity\n");
    // 01050 PRINT "OF A BALL THROWN STRAIGHT UP, AND THE COEFFICIENT OF"
    b2c_printf("Of a ball thrown straight up, and the coefficient of\n");
    // 01060 PRINT "ELASTICITY OF THE BALL.  PLEASE USE A DECIMAL FRACTION"
    b2c_printf("Elasticity of the ball.  Please use a decimal fraction\n");
    // 01070 PRINT "COEFFICIENCY (LESS THAN 1)."
    b2c_printf("Coefficiency (less than 1).\n");
    // 01080 PRINT
    b2c_printf("");
    // 01090 PRINT "YOU ALSO SPECIFY THE TIME INCREMENT TO BE USED IN"
    b2c_printf("You also specify the time increment to be used in\n");
    // 01100 PRINT "'STROBING' THE BALL'S FLIGHT (TRY .1 INITIALLY)."
    b2c_printf("'strobing' the ball's flight (try .1 Initially).\n");
    // 01110 PRINT
    b2c_printf("");

  Lbl_01120:
    // 01120 INPUT "TIME INCREMENT (SEC)";S2
    // Start of Basic INPUT statement 01120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""TIME INCREMENT (SEC)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S2_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01120
    // 01130 PRINT
    b2c_printf("");
    // 01140 INPUT "VELOCITY (FPS)";V
    // Start of Basic INPUT statement 01140
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""VELOCITY (FPS)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&V_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01140
    // 01150 PRINT
    b2c_printf("");
    // 01160 INPUT "COEFFICIENT";C
    // Start of Basic INPUT statement 01160
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""COEFFICIENT"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01160
    // 01170 PRINT
    b2c_printf("");
    // 01180 PRINT "FEET"
    b2c_printf("Feet\n");
    // 01190 PRINT
    b2c_printf("");
    // 01200 S1=INT(70/(V/(16*S2)))
    S1_int = INT(70/(V_int/(16*S2_int)));
    // 01210 FOR I=1 TO S1
    for(I_int=1;I_int<=S1_int;I_int++){
        // 01220 T(I)=V*C^(I-1)/16
        T_int_arr[I_int] = V_int*IPower(C_int,(I_int-1))/16;
        // 01230 NEXT I
        int dummy_1230=0; // Ignore this line.
    }; // End-For(I_int)
    // 01240 FOR H=INT(-16*(V/32)^2+V^2/32+.5) TO 0 STEP -.5
    for(H_int=INT(-16*IPower((V_int/32),2)+IPower(V_int,2)/32+0.5);H_int>=0;H_int+=-0.5){
        // 01250 IF INT(H)<>H THEN 1270
        if(INT(H_int)!=H_int)goto Lbl_01270;
        // 01260 PRINT H;
        b2c_printf(" %d ú¿²^\n",H_int);

  Lbl_01270:
        // 01270 L=0
        L_int = 0;
        // 01280 FOR I=1 TO S1
        for(I_int=1;I_int<=S1_int;I_int++){
            // 01290 FOR T=0 TO T(I) STEP S2
            for(T_int_arr[0]=0;T_int_arr[0]<=T_int_arr[I_int];T_int_arr[0]+=S2_int){
                // 01300 L=L+S2
                L_int = L_int+S2_int;
                // 01310 IF ABS(H-(.5*(-32)*T^2+V*C^(I-1)*T))>.25 THEN 1330
                if(ABS(H_int-(0.5*(-32)*IPower(T_int_arr[0],2)+V_int*IPower(C_int,(I_int-1))*T_int_arr[0]))>0.25)goto Lbl_01330;
                // 01320 PRINT TAB(L/S2);"0";
                b2c_printf("0");

  Lbl_01330:
                // 01330 NEXT T
                int dummy_1330=0; // Ignore this line.
            }; // End-For(T_int_arr[0])
            // 01340 T=T(I+1)/2
            T_int_arr[0] = T_int_arr[I_int+1]/2;
            // 01350 IF -16*T^2+V*C^(I-1)*T<H THEN 1370
            if(-16*IPower(T_int_arr[0],2)+V_int*IPower(C_int,(I_int-1))*T_int_arr[0]<H_int)goto Lbl_01370;
            // 01360 NEXT I
            int dummy_1360=0; // Ignore this line.
        }; // End-For(I_int)

  Lbl_01370:
        // 01370 PRINT
        b2c_printf("");
        // 01380 NEXT H
        int dummy_1380=0; // Ignore this line.
    }; // End-For(H_int)
    // 01390 PRINT TAB(1);
    b2c_printf("");
    // 01400 FOR I=1 TO INT(L+1)/S2+1
    for(I_int=1;I_int<=INT(L_int+1)/S2_int+1;I_int++){
        // 01410 PRINT ".";
        b2c_printf(".");
        // 01420 NEXT I
        int dummy_1420=0; // Ignore this line.
    }; // End-For(I_int)
    // 01430 PRINT
    b2c_printf("");
    // 01440 PRINT " 0";
    b2c_printf(" 0");
    // 01450 FOR I=1 TO INT(L+.9995)
    for(I_int=1;I_int<=INT(L_int+1.);I_int++){
        // 01460 PRINT TAB(INT(I/S2));I;
        b2c_printf(" %d ç¿²^\n",I_int);
        // 01470 NEXT I
        int dummy_1470=0; // Ignore this line.
    }; // End-For(I_int)
    // 01480 PRINT
    b2c_printf("");
    // 01490 PRINT TAB(INT(L+1)/(2*S2)-2);"SECONDS"
    b2c_printf("Seconds\n");
    // 01500 PRINT
    b2c_printf("");
    // 01510 GOTO 1120
    goto Lbl_01120;
    // 01520 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
