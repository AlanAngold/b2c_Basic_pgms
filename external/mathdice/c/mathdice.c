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
int    N_int;                                     // Basic: N 
int    T_int;                                     // Basic: T 
int    T1_int;                                    // Basic: T1 
int    T2_int;                                    // Basic: T2 
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
    // 01000 PRINT TAB(31);"MATH DICE"
    b2c_printf("Math dice\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "THIS PROGRAM GENERATES SUCCESIVE PICTURES OF TWO DICE."
    b2c_printf("This program generates succesive pictures of two dice.\n");
    // 01040 PRINT "WHEN TWO DICE AND AN EQUAL SIGN FOLLOWED BY A QUESTION"
    b2c_printf("When two dice and an equal sign followed by a question\n");
    // 01050 PRINT "MARK HAVE BEEN PRINTED, TYPE YOUR ANSWER AND THE RETURN KEY."
    b2c_printf("Mark have been printed, type your answer and the return key.\n");
    // 01060 PRINT "TO CONCLUDE THE LESSON, TYPE CONTROL-C AS YOUR ANSWER."
    b2c_printf("To conclude the lesson, type control-c as your answer.\n");
    // 01070 PRINT
    b2c_printf("");
    // 01080 PRINT
    b2c_printf("");

  Lbl_01090:
    // 01090 N=N+1
    N_int = N_int+1;
    // 01100 D=INT(6*RND(1)+1)
    D_int = INT(6*RND(1)+1);
    // 01110 PRINT" ----- "
    b2c_printf(" ----- \n");
    // 01120 IF D=1 THEN 1190
    if(D_int==1)goto Lbl_01190;
    // 01130 IF D=2 THEN 1170
    if(D_int==2)goto Lbl_01170;
    // 01140 IF D=3 THEN 1170
    if(D_int==3)goto Lbl_01170;
    // 01150 PRINT "I * * I"
    b2c_printf("I * * i\n");
    // 01160 GOTO 1200
    goto Lbl_01200;

  Lbl_01170:
    // 01170 PRINT "I *   I"
    b2c_printf("I *   i\n");
    // 01180 GOTO 1200
    goto Lbl_01200;

  Lbl_01190:
    // 01190 PRINT "I     I"
    b2c_printf("I     i\n");

  Lbl_01200:
    // 01200 IF D=2 THEN 1250
    if(D_int==2)goto Lbl_01250;
    // 01210 IF D=4 THEN 1250
    if(D_int==4)goto Lbl_01250;
    // 01220 IF D=6 THEN 1270
    if(D_int==6)goto Lbl_01270;
    // 01230 PRINT "I  *  I"
    b2c_printf("I  *  i\n");
    // 01240 GOTO 1280
    goto Lbl_01280;

  Lbl_01250:
    // 01250 PRINT "I     I"
    b2c_printf("I     i\n");
    // 01260 GOTO 1280
    goto Lbl_01280;

  Lbl_01270:
    // 01270 PRINT "I * * I"
    b2c_printf("I * * i\n");

  Lbl_01280:
    // 01280 IF D=1 THEN 1350
    if(D_int==1)goto Lbl_01350;
    // 01290 IF D=2 THEN 1330
    if(D_int==2)goto Lbl_01330;
    // 01300 IF D=3 THEN 1330
    if(D_int==3)goto Lbl_01330;
    // 01310 PRINT "I * * I"
    b2c_printf("I * * i\n");
    // 01320 GOTO 1360
    goto Lbl_01360;

  Lbl_01330:
    // 01330 PRINT "I   * I"
    b2c_printf("I   * i\n");
    // 01340 GOTO 1360
    goto Lbl_01360;

  Lbl_01350:
    // 01350 PRINT "I     I"
    b2c_printf("I     i\n");

  Lbl_01360:
    // 01360 PRINT " ----- "
    b2c_printf(" ----- \n");
    // 01370 PRINT
    b2c_printf("");
    // 01380 IF N=2 THEN 1430
    if(N_int==2)goto Lbl_01430;
    // 01390 PRINT "   +"
    b2c_printf("   +\n");
    // 01400 PRINT
    b2c_printf("");
    // 01410 A=D
    A_int = D_int;
    // 01420 GOTO 1090
    goto Lbl_01090;

  Lbl_01430:
    // 01430 T=D+A
    T_int = D_int+A_int;
    // 01440 PRINT "      =";
    b2c_printf("      =");
    // 01450 INPUT T1
    // Start of Basic INPUT statement 01450
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&T1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01450
    // 01460 IF T1=T THEN 1530
    if(T1_int==T_int)goto Lbl_01530;
    // 01470 PRINT "NO, COUNT THE SPOTS AND GIVE ANOTHER ANSWER."
    b2c_printf("No, count the spots and give another answer.\n");
    // 01480 PRINT "      =";
    b2c_printf("      =");
    // 01490 INPUT T2
    // Start of Basic INPUT statement 01490
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&T2_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01490
    // 01500 IF T2=T THEN 1530
    if(T2_int==T_int)goto Lbl_01530;
    // 01510 PRINT "NO, THE ANSWER IS";T
    b2c_printf("No, the answer is %d \n",T_int);
    // 01520 GOTO 1540
    goto Lbl_01540;

  Lbl_01530:
    // 01530 PRINT "RIGHT!"
    b2c_printf("Right!\n");

  Lbl_01540:
    // 01540 PRINT
    b2c_printf("");
    // 01550 PRINT "THE DICE ROLL AGAIN..."
    b2c_printf("The dice roll again...\n");
    // 01560 PRINT
    b2c_printf("");
    // 01570 N=0
    N_int = 0;
    // 01580 GOTO 1090
    goto Lbl_01090;
    // 01590 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
