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
int    G_int;                                     // Basic: G 
int    Q_int;                                     // Basic: Q 
int    T_int;                                     // Basic: T 
int    V_int;                                     // Basic: V 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01250();

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

void Routine_01250(){
    // 01250 INPUT G
    // Start of Basic INPUT statement 01250
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&G_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01250
    // 01260 IF ABS((G-A)/A)<.15 THEN 1290
    if(ABS((G_int-A_int)/A_int)<0.15)goto Lbl_01290;
    // 01270 PRINT "NOT EVEN CLOSE...."
    b2c_printf("Not even close....\n");
    // 01280 GOTO 1310
    goto Lbl_01310;

  Lbl_01290:
    // 01290 PRINT "CLOSE ENOUGH."
    b2c_printf("Close enough.\n");
    // 01300 Q=Q+1
    Q_int = Q_int+1;

  Lbl_01310:
    // 01310 PRINT "CORRECT ANSWER IS ";A
    b2c_printf("Correct answer is  %d \n",A_int);
    // 01320 PRINT
    b2c_printf("");
    // 01330 GOTO 01340
    goto Lbl_01340;

  Lbl_01340:
    // 01340 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"KINEMA"
    b2c_printf("Kinema\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");

  Lbl_01030:
    // 01030 PRINT
    b2c_printf("");
    // 01040 PRINT
    b2c_printf("");
    // 01050 Q=0
    Q_int = 0;
    // 01060 V=5+INT(35*RND(1))
    V_int = 5+INT(35*RND(1));
    // 01070 PRINT "A BALL IS THROWN UPWARDS AT";V;"METERS PER SECOND."
    b2c_printf("A ball is thrown upwards at %d A ball is thrown upwards atMeters per second.\n",V_int);
    // 01080 PRINT
    b2c_printf("");
    // 01090 A=.05*V^2
    A_int = 0.05*IPower(V_int,2);
    // 01100 PRINT "HOW HIGH WILL IT GO (IN METERS)";
    b2c_printf("How high will it go (in meters)");
    // 01110 GOSUB 1250
    Routine_01250();
    // 01120 A=V/5
    A_int = V_int/5;
    // 01130 PRINT "HOW LONG UNTIL IT RETURNS (IN SECONDS)";
    b2c_printf("How long until it returns (in seconds)");
    // 01140 GOSUB 1250
    Routine_01250();
    // 01150 T=1+INT(2*V*RND(1))/10
    T_int = 1+INT(2*V_int*RND(1))/10;
    // 01160 A=V-10*T
    A_int = V_int-10*T_int;
    // 01170 PRINT "WHAT WILL ITS VELOCITY BE AFTER";T;"SECONDS";
    b2c_printf("What will its velocity be after %d What will its velocity be afterSecondsSeconds\n",T_int);
    // 01180 GOSUB 1250
    Routine_01250();
    // 01190 PRINT
    b2c_printf("");
    // 01200 PRINT Q;"RIGHT OUT OF 3.";
    b2c_printf(" %d &u¦y[Right out of 3.Right out of 3.\n",Q_int);
    // 01210 IF Q<2 THEN 1030
    if(Q_int<2)goto Lbl_01030;
    // 01220 PRINT "  NOT BAD."
    b2c_printf("  not bad.\n");
    // 01230 GOTO 1030
    goto Lbl_01030;
    // 01240 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
