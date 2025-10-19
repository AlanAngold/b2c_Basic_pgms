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
int    FNR_int_arr[10];                           // Basic: FNR 
int    G_int;                                     // Basic: G 
int    P_int;                                     // Basic: P 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
int    U_int;                                     // Basic: U 
int    V_int;                                     // Basic: V 
int    X_int;                                     // Basic: X 
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
#pragma argsused X
int FNR(int X){
    int rtn=INT(5*RND(1)+1);
    return(rtn);
}

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
    // 01000 PRINT TAB(33);"NUMBER"
    b2c_printf("Number\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "YOU HAVE 100 POINTS.  BY GUESSING NUMBERS FROM 1 TO 5, YOU"
    b2c_printf("You have 100 points.  By guessing numbers from 1 to 5, you\n");
    // 01040 PRINT "CAN GAIN OR LOSE POINTS DEPENDING UPON HOW CLOSE YOU GET TO"
    b2c_printf("Can gain or lose points depending upon how close you get to\n");
    // 01050 PRINT "A RANDOM NUMBER SELECTED BY THE COMPUTER.": PRINT
    b2c_printf("");
    // 01060 PRINT "YOU OCCASIONALLY WILL GET A JACKPOT WHICH WILL DOUBLE(!)"
    b2c_printf("You occasionally will get a jackpot which will double(!)\n");
    // 01070 PRINT "YOUR POINT COUNT.  YOU WIN WHEN YOU GET 500 POINTS."
    b2c_printf("Your point count.  You win when you get 500 points.\n");
    // 01080 PRINT: P=100
    P_int = 100;
    // 01090 DEF FNR(X)=INT(5*RND(1)+1)

  Lbl_01100:
    // 01100 INPUT "GUESS A NUMBER FROM 1 TO 5";G
    // Start of Basic INPUT statement 01100
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""GUESS A NUMBER FROM 1 TO 5"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&G_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01100
    // 01110 R=FNR(1)
    R_int = FNR_int_arr[1];
    // 01120 S=FNR(1)
    S_int = FNR_int_arr[1];
    // 01130 T=FNR(1)
    T_int = FNR_int_arr[1];
    // 01140 U=FNR(1)
    U_int = FNR_int_arr[1];
    // 01150 V=FNR(1)
    V_int = FNR_int_arr[1];
    // 01160 IF G=R THEN 1220
    if(G_int==R_int)goto Lbl_01220;
    // 01170 IF G=S THEN 1240
    if(G_int==S_int)goto Lbl_01240;
    // 01180 IF G=T THEN 1260
    if(G_int==T_int)goto Lbl_01260;
    // 01190 IF G=U THEN 1290
    if(G_int==U_int)goto Lbl_01290;
    // 01200 IF G=V THEN 1310
    if(G_int==V_int)goto Lbl_01310;
    // 01210 IF G>5 THEN 1100
    if(G_int>5)goto Lbl_01100;

  Lbl_01220:
    // 01220 P=P-5
    P_int = P_int-5;
    // 01230 GOTO 1320
    goto Lbl_01320;

  Lbl_01240:
    // 01240 P=P+5
    P_int = P_int+5;
    // 01250 GOTO 1320
    goto Lbl_01320;

  Lbl_01260:
    // 01260 P=P+P
    P_int = P_int+P_int;
    // 01270 PRINT "YOU HIT THE JACKPOT!!!"
    b2c_printf("You hit the jackpot!!!\n");
    // 01280 GOTO 1320
    goto Lbl_01320;

  Lbl_01290:
    // 01290 P=P+1
    P_int = P_int+1;
    // 01300 GOTO 1320
    goto Lbl_01320;

  Lbl_01310:
    // 01310 P=P-(P*.5)
    P_int = P_int-(P_int*0.5);

  Lbl_01320:
    // 01320 IF P>500 THEN 1350
    if(P_int>500)goto Lbl_01350;
    // 01330 PRINT "YOU HAVE";P;"POINTS.":PRINT
    b2c_printf("");
    // 01340 GOTO 1100
    goto Lbl_01100;

  Lbl_01350:
    // 01350 PRINT "!!!!YOU WIN!!!! WITH ";P;"POINTS."
    b2c_printf("!!!!You win!!!! With  %d !!!!You win!!!! With Points.\n",P_int);
    // 01360 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
