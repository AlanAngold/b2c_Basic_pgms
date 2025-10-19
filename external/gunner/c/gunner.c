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
int    B_int;                                     // Basic: B 
int    B2_int;                                    // Basic: B2 
int    E_int;                                     // Basic: E 
int    I_int;                                     // Basic: I 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    S1_int;                                    // Basic: S1 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
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
    // 01000 PRINT TAB(30);"GUNNER"
    b2c_printf("Gunner\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO A GUN"
    b2c_printf("You are the officer-in-charge, giving orders to a gun\n");
    // 01040 PRINT "CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    b2c_printf("Crew, telling them the degrees of elevation you estimate\n");
    // 01050 PRINT "WILL PLACE A PROJECTILE ON TARGET.  A HIT WITHIN 100 YARDS"
    b2c_printf("Will place a projectile on target.  A hit within 100 yards\n");
    // 01060 PRINT "OF THE TARGET WILL DESTROY IT." : PRINT
    b2c_printf("");

  Lbl_01070:
    // 01070 R=INT(40000*RND(1)+20000)
    R_int = INT(40000*RND(1)+20000);
    // 01080 PRINT "MAXIMUM RANGE OF YOUR GUN IS";R;" YARDS."
    b2c_printf("Maximum range of your gun is %d Maximum range of your gun is yards.\n",R_int);
    // 01090 Z=0
    Z_int = 0;
    // 01100 PRINT
    b2c_printf("");
    // 01110 S1=0
    S1_int = 0;

  Lbl_01120:
    // 01120 T=INT(R*(.1+.8*RND(1)))
    T_int = INT(R_int*(0.1+0.8*RND(1)));
    // 01130 S=0
    S_int = 0;
    // 01140 GOTO 1300
    goto Lbl_01300;

  Lbl_01150:
    // 01150 PRINT "MINIMUM ELEVATION IS ONE DEGREE."
    b2c_printf("Minimum elevation is one degree.\n");
    // 01160 GOTO 1320
    goto Lbl_01320;

  Lbl_01170:
    // 01170 PRINT "MAXIMUM ELEVATION IS 89 DEGREES."
    b2c_printf("Maximum elevation is 89 degrees.\n");
    // 01180 GOTO 1320
    goto Lbl_01320;

  Lbl_01190:
    // 01190 PRINT "OVER TARGET BY ";ABS(E);"YARDS."
    b2c_printf("Over target by Yards.\n");
    // 01200 GOTO 1320
    goto Lbl_01320;

  Lbl_01210:
    // 01210 PRINT "SHORT OF TARGET BY "ABS(E);"YARDS."
    b2c_printf("Short of target by Yards.\n");
    // 01220 GOTO 1320
    goto Lbl_01320;

  Lbl_01230:
    // 01230 PRINT "*** TARGET DESTROYED ***  ";S;"ROUNDS OF AMMUNITION EXPENDED."
    b2c_printf("*** target destroyed ***   %d *** target destroyed ***  Rounds of ammunition expended.\n",S_int);
    // 01240 S1=S1+S
    S1_int = S1_int+S_int;
    // 01250 IF Z=4 THEN 1440
    if(Z_int==4)goto Lbl_01440;
    // 01260 Z=Z+1
    Z_int = Z_int+1;
    // 01270 PRINT
    b2c_printf("");
    // 01280 PRINT "THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY..."
    b2c_printf("The forward observer has sighted more enemy activity...\n");
    // 01290 GOTO 1120
    goto Lbl_01120;

  Lbl_01300:
    // 01300 PRINT "DISTANCE TO THE TARGET IS "T;" YARDS."
    b2c_printf("Distance to the target is  %d Distance to the target is  yards.\n",T_int);
    // 01310 PRINT
    b2c_printf("");

  Lbl_01320:
    // 01320 PRINT
    b2c_printf("");
    // 01330 INPUT "ELEVATION";B
    // Start of Basic INPUT statement 01330
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""ELEVATION"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01330
    // 01340 IF B>89 THEN 1170
    if(B_int>89)goto Lbl_01170;
    // 01350 IF B<1 THEN 1150
    if(B_int<1)goto Lbl_01150;
    // 01360 S=S+1
    S_int = S_int+1;
    // 01370 IF S<6 THEN 1400
    if(S_int<6)goto Lbl_01400;
    // 01380 PRINT:PRINT "BOOM !!!!   YOU HAVE JUST BEEN DESTROYED ";
    b2c_printf("Boom !!!!   You have just been destroyed ");
    // 01390 PRINT "BY THE ENEMY." : PRINT : PRINT : PRINT : GOTO 1470
    goto Lbl_01470;

  Lbl_01400:
    // 01400 B2=2*B/57.3 : I=R*SIN(B2) : X=T-I : E=INT(X)
    E_int = INT(X_int);
    // 01410 IF ABS(E)<100 THEN 1230
    if(ABS(E_int)<100)goto Lbl_01230;
    // 01420 IF E>100 THEN 1210
    if(E_int>100)goto Lbl_01210;
    // 01430 GOTO 1190
    goto Lbl_01190;

  Lbl_01440:
    // 01440 PRINT : PRINT : PRINT "TOTAL ROUNDS EXPENDED WERE:";S1
    b2c_printf("Total rounds expended were: %d \n",S1_int);
    // 01450 IF S1>18 THEN 1470
    if(S1_int>18)goto Lbl_01470;
    // 01460 PRINT "NICE SHOOTING !!" : GOTO 1480
    goto Lbl_01480;

  Lbl_01470:
    // 01470 PRINT "BETTER GO BACK TO FORT SILL FOR REFRESHER TRAINING!"
    b2c_printf("Better go back to fort sill for refresher training!\n");

  Lbl_01480:
    // 01480 PRINT : INPUT "TRY AGAIN (Y OR N)";Z$
    // Start of Basic INPUT statement 01480
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""TRY AGAIN (Y OR N)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01480
    // 01490 IF Z$="Y" THEN 1070
    if(strcmp(Z_str,"Y")==0)goto Lbl_01070;
    // 01500 PRINT:PRINT "OK.  RETURN TO BASE CAMP."
    b2c_printf("Ok.  Return to base camp.\n");
    // 01510 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
