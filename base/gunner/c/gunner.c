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
float  B_flt;                                     // Basic: B! 
int    B2_int;                                    // Basic: B2 
int    E_int;                                     // Basic: E 
int    I_int;                                     // Basic: I 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
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
    // 01000 PRINT "DATALINE SYSTEMS LIMITED  25-JULY-70"
    b2c_printf("Dataline systems limited  25-july-70\n");
    // 01010 PRINT "B A S I C  USER LIBRARY PROGRAM--GUNNER"
    b2c_printf("B a s i c  user library program--gunner\n");
    // 01020 PRINT"THIS TIME-SHARING DEMONSTRATION SIMULATES"
    b2c_printf("This time-sharing demonstration simulates\n");
    // 01030 PRINT"THE RESULTS OF FIRING A FIELD ARTILLERY WEAPON."
    b2c_printf("The results of firing a field artillery weapon.\n");
    // 01040 PRINT
    b2c_printf("");
    // 01050 PRINT"YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO THE GUN"
    b2c_printf("You are the officer-in-charge, giving orders to the gun\n");
    // 01060 PRINT"CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    b2c_printf("Crew, telling them the degrees of elevation you estimate\n");
    // 01070 PRINT"WILL PLACE THE PROJECTILE ON TARGET. A HIT WITHIN 100"
    b2c_printf("Will place the projectile on target. A hit within 100\n");
    // 01080 PRINT"YARDS OF THE TARGET WILL DESTROY IT."
    b2c_printf("Yards of the target will destroy it.\n");
    // 01090 PRINT
    b2c_printf("");
    // 01100 PRINT"MAXIMUM RANGE OF YOUR GUN IS 46500 YARDS."
    b2c_printf("Maximum range of your gun is 46500 yards.\n");
    // 01110 REM T=DISTANCE TO TARGET
    // 01120 REM I=DISTANCE OF SHOT
    // 01130 REM E=DISTANCE OVER(NEGATIVE), OR UNDER (POSITIVE) TARGET

  Lbl_01140:
    // 01140 LET T=43000-30000*RND(X)
    T_int = 43000-30000*RND(X_int);
    // 01150 LET S=0
    S_int = 0;
    // 01160 GOTO 1410
    goto Lbl_01410;

  Lbl_01170:
    // 01170 PRINT"MIN. ELEVTION OF GUN IS ONE DEGREE."
    b2c_printf("Min. Elevtion of gun is one degree.\n");
    // 01180 GOTO 1430
    goto Lbl_01430;

  Lbl_01190:
    // 01190 PRINT"MAX. ELEVATION OF GUN IS 89 DEGREES."
    b2c_printf("Max. Elevation of gun is 89 degrees.\n");
    // 01200 GOTO 1430
    goto Lbl_01430;

  Lbl_01210:
    // 01210 PRINT"OVER TARGET BY";ABS(E);"YARDS."
    b2c_printf("Over target byYards.\n");
    // 01220 GOTO 1430
    goto Lbl_01430;

  Lbl_01230:
    // 01230 PRINT"SHORT OF TARGET BY";ABS(E);"YARDS."
    b2c_printf("Short of target byYards.\n");
    // 01240 GOTO 1430
    goto Lbl_01430;

  Lbl_01250:
    // 01250 GOTO 1260
    goto Lbl_01260;

  Lbl_01260:
    // 01260 PRINT"***TARGET DESTROYED***  ";S;"ROUNDS EXPENDED"
    b2c_printf("***target destroyed***   %d ***target destroyed***  Rounds expended\n",S_int);
    // 01270 PRINT
    b2c_printf("");
    // 01280 PRINT
    b2c_printf("");
    // 01290 PRINT
    b2c_printf("");
    // 01300 PRINT
    b2c_printf("");
    // 01310 PRINT
    b2c_printf("");
    // 01320 PRINT
    b2c_printf("");
    // 01330 PRINT
    b2c_printf("");
    // 01340 PRINT
    b2c_printf("");
    // 01350 PRINT
    b2c_printf("");
    // 01360 PRINT
    b2c_printf("");
    // 01370 PRINT
    b2c_printf("");
    // 01380 PRINT
    b2c_printf("");
    // 01390 PRINT"THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY."
    b2c_printf("The forward observer has sighted more enemy activity.\n");
    // 01400 GOTO 1140
    goto Lbl_01140;

  Lbl_01410:
    // 01410 PRINT"   DISTANCE TO THE TARGET IS";INT(T);"YARDS"
    b2c_printf("   distance to the target isYards\n");
    // 01420 PRINT
    b2c_printf("");

  Lbl_01430:
    // 01430 PRINT
    b2c_printf("");
    // 01440 PRINT"ELEVATION:";
    b2c_printf("Elevation:");
    // 01450 INPUT B!
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
                (err += b2c_strtof(&B_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01450
    // 01460 IF B!>89 THEN 1190
    if(B_flt>89)goto Lbl_01190;
    // 01470 IF B!<1 THEN 1170
    if(B_flt<1)goto Lbl_01170;
    // 01480 LET S=S+1
    S_int = S_int+1;
    // 01490 LET B2=2*B!/57.3
    B2_int = 2*B_flt/57.3;
    // 01500 LET I=46500*SIN(B2)
    I_int = 46500*SIN(B2_int);
    // 01510 LET X=T-I
    X_int = T_int-I_int;
    // 01520 LET E=INT(X)
    E_int = INT(X_int);
    // 01530 IF ABS(E)<100 THEN 1250
    if(ABS(E_int)<100)goto Lbl_01250;
    // 01540 IF E>100 THEN 1230
    if(E_int>100)goto Lbl_01230;
    // 01550 IF E<-100 THEN 1210
    if(E_int<-100)goto Lbl_01210;
    // 01560 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
