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
int    A1_int;                                    // Basic: A1 
int    B_int;                                     // Basic: B 
int    B1_int;                                    // Basic: B1 
int    D_int;                                     // Basic: D 
int    I_int;                                     // Basic: I 
int    P_int;                                     // Basic: P 
int    P1_int;                                    // Basic: P1 
int    P2_int;                                    // Basic: P2 
int    P3_int;                                    // Basic: P3 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    X1_int;                                    // Basic: X1 
int    X2_int;                                    // Basic: X2 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Y2_int;                                    // Basic: Y2 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
int    Z2_int;                                    // Basic: Z2 
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
    // 01000 PRINT TAB(33);"TARGET"
    b2c_printf("Target\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 R=1: R1=57.296: P=3.14159
    P_int = 3.14;
    // 01040 PRINT "YOU ARE THE WEAPONS OFFICER ON THE STARSHIP ENTERPRISE"
    b2c_printf("You are the weapons officer on the starship enterprise\n");
    // 01050 PRINT "AND THIS IS A TEST TO SEE HOW ACCURATE A SHOT YOU"
    b2c_printf("And this is a test to see how accurate a shot you\n");
    // 01060 PRINT "ARE IN A THREE-DIMENSIONAL RANGE.  YOU WILL BE TOLD"
    b2c_printf("Are in a three-dimensional range.  You will be told\n");
    // 01070 PRINT "THE RADIAN OFFSET FOR THE X AND Z AXES, THE LOCATION"
    b2c_printf("The radian offset for the x and z axes, the location\n");
    // 01080 PRINT "OF THE TARGET IN THREE DIMENSIONAL RECTANGULAR COORDINATES,"
    b2c_printf("Of the target in three dimensional rectangular coordinates,\n");
    // 01090 PRINT "THE APPROXIMATE NUMBER OF DEGREES FROM THE X AND Z"
    b2c_printf("The approximate number of degrees from the x and z\n");
    // 01100 PRINT "AXES, AND THE APPROXIMATE DISTANCE TO THE TARGET."
    b2c_printf("Axes, and the approximate distance to the target.\n");
    // 01110 PRINT "YOU WILL THEN PROCEEED TO SHOOT AT THE TARGET UNTIL IT IS"
    b2c_printf("You will then proceeed to shoot at the target until it is\n");
    // 01120 PRINT "DESTROYED!": PRINT: PRINT "GOOD LUCK!!":PRINT: PRINT
    b2c_printf("");

  Lbl_01130:
    // 01130 A=RND(1)*2*P: B=RND(1)*2*P: Q=INT(A*R1): W=INT(B*R1)
    W_int = INT(B_int*R1_int);
    // 01140 PRINT "RADIANS FROM X AXIS =";A;"   FROM Z AXIS =";B
    b2c_printf("Radians from x axis = %d Radians from x axis =   from z axis =   from z axis = %d \n",A_int,B_int);
    // 01150 P1=100000*RND(1)+RND(1): X=SIN(B)*COS(A)*P1: Y=SIN(B)*SIN(A)*P1
    Y_int = SIN(B_int)*SIN(A_int)*P1_int;
    // 01160 Z=COS(B)*P1
    Z_int = COS(B_int)*P1_int;
    // 01170 PRINT "TARGET SIGHTED: APPROXIMATE COORDINATES:  X=";X;"  Y=";Y;"  Z=";Z
    b2c_printf("Target sighted: approximate coordinates:  x= %d Target sighted: approximate coordinates:  x=  y=  y= %d   y=  z=  z= %d \n",X_int,Y_int,Z_int);
    // 01180 R=R+1: IF R>5 THEN 1250
    if(R_int>5)goto Lbl_01250;
    // 01190 ON R GOTO 1200,1210,1220,1230,1240
    switch((int)(R_int)){
        case 1: goto Lbl_01200;
        case 2: goto Lbl_01210;
        case 3: goto Lbl_01220;
        case 4: goto Lbl_01230;
        case 5: goto Lbl_01240;
        default: break; 
    };

  Lbl_01200:
    // 01200 P3=INT(P1*.05)*20: GOTO 1250
    goto Lbl_01250;

  Lbl_01210:
    // 01210 P3=INT(P1*.1)*10: GOTO 1250
    goto Lbl_01250;

  Lbl_01220:
    // 01220 P3=INT(P1*.5)*2: GOTO 1250
    goto Lbl_01250;

  Lbl_01230:
    // 01230 P3=INT(P1): GOTO 1250
    goto Lbl_01250;

  Lbl_01240:
    // 01240 P3=P1
    P3_int = P1_int;

  Lbl_01250:
    // 01250 PRINT "     ESTIMATED DISTANCE:";P3
    b2c_printf("     estimated distance: %d \n",P3_int);
    // 01260 PRINT:PRINT "INPUT ANGLE DEVIATION FROM X, DEVIATION FROM Z, DISTANCE";
    b2c_printf("Input angle deviation from x, deviation from z, distance");
    // 01270 INPUT A1,B1,P2
    // Start of Basic INPUT statement 01270
    {
        int numargs=3;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A1_int,args,0)) ||
                (err += b2c_strtoi(&B1_int,args,1)) ||
                (err += b2c_strtoi(&P2_int,args,2)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01270
    // 01280 PRINT: IF P2<20 THEN PRINT "YOU BLEW YOURSELF UP!!": GOTO 1290
    goto Lbl_01290;

  Lbl_01290:
    // 01290 R=0: FOR I=1 TO 5: PRINT: NEXT I: PRINT "NEXT TARGET...": PRINT
    b2c_printf("");
    // 01300 GOTO 1130
    goto Lbl_01130;
    // 01310 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
