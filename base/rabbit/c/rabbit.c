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
int    A_int_arr[15];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    C_int;                                     // Basic: C 
int    D1_int;                                    // Basic: D1 
int    D2_int;                                    // Basic: D2 
int    H_int;                                     // Basic: H 
int    H1_int;                                    // Basic: H1 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    P1_int;                                    // Basic: P1 
char*  S_str;                                     // Basic: S$ 
int    T_int;                                     // Basic: T 
int    V1_int;                                    // Basic: V1 
int    V2_int;                                    // Basic: V2 
int    W_int;                                     // Basic: W 
int    X1_int;                                    // Basic: X1 
int    X2_int;                                    // Basic: X2 
int    X3_int;                                    // Basic: X3 
int    X4_int;                                    // Basic: X4 
int    Y1_int;                                    // Basic: Y1 
int    Y2_int;                                    // Basic: Y2 
int    Y3_int;                                    // Basic: Y3 
int    Y4_int;                                    // Basic: Y4 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02300();

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
    // 02270 REM
    // 02280 REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    // 02290 REM

void Routine_02300(){
    // 02300 IF Z < 0 THEN 2330
    if(Z_int<0)goto Lbl_02330;
    // 02310 PRINT "+";
    b2c_printf("+");
    // 02320 GOTO 2350
    goto Lbl_02350;

  Lbl_02330:
    // 02330 PRINT"-";
    b2c_printf("-");
    // 02340 LET Z = -Z
    Z_int = Z_int;

void Routine_02350(){

  Lbl_02350:
    // 02350 LET Z = INT(Z+0.5)
    Z_int = INT(Z_int+0.5);
    // 02360 LET S$ = "0123456789"
    GLBpStr="0123456789";
    S_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02370 FOR I = 1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 02380     LET W = INT(Z/10^(4-I))
        W_int = INT(Z_int/IPower(10,(4-I_int)));
        // 02390     PRINT MID$(S$,W+1,1);
        b2c_printf("");
        // 02400     LET Z = Z-W*10^(4-I)
        Z_int = Z_int-W_int*IPower(10,(4-I_int));
        // 02410 NEXT I
        int dummy_2410=0; // Ignore this line.
    }; // End-For(I_int)
    // 02420 GOTO 02430
    goto Lbl_02430;

  Lbl_02430:
    // 02430 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT"DO YOU WANT INSTRUCTIONS :";
    b2c_printf("Do you want instructions :");
    // 01010 INPUT A$
    // Start of Basic INPUT statement 01010
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01010
    // 01020 IF MID$(A$,1,1)="N" THEN 1220
    if(MID$(A_str,1,1)=='N')goto Lbl_01220;
    // 01030 IF MID$(A$,1,1)="n" THEN 1220
    if(MID$(A_str,1,1)=='N')goto Lbl_01220;
    // 01040 PRINT
    b2c_printf("");
    // 01050 PRINT
    b2c_printf("");
    // 01060 PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    b2c_printf("    this is the game of rabbit.  The object of rabbit is\n");
    // 01070 PRINT"to come within a certian distance of the computer controlled"
    b2c_printf("To come within a certian distance of the computer controlled\n");
    // 01080 PRINT"rabbit, which also moves.  "
    b2c_printf("Rabbit, which also moves.  \n");
    // 01090 PRINT"    The way you do this is to hop around (the rabbit hops too) "
    b2c_printf("    the way you do this is to hop around (the rabbit hops too) \n");
    // 01100 PRINT"such that your path crosses the rabbit's path at the same time"
    b2c_printf("Such that your path crosses the rabbit's path at the same time\n");
    // 01110 PRINT"Or in other words you come close enough to grab the little "
    b2c_printf("Or in other words you come close enough to grab the little \n");
    // 01120 PRINT"booger.  "
    b2c_printf("Booger.  \n");
    // 01130 PRINT"    Oh by the way your arms are about 20 units long.  The number"
    b2c_printf("    oh by the way your arms are about 20 units long.  The number\n");
    // 01140 PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    b2c_printf("'closest approach' is the closest distance you and your bouncy\n");
    // 01150 PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    b2c_printf("Friend came to each other during the last hop.  The 'distance\n");
    // 01160 PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    b2c_printf("To rabbit' is the distance you are from the rabbit now.  The\n");
    // 01170 PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    b2c_printf("Rabbits 'direction' is the direction he is just about to hop,\n");
    // 01180 PRINT"so keep that in mind when jumping.  The computer will prompt"
    b2c_printf("So keep that in mind when jumping.  The computer will prompt\n");
    // 01190 PRINT"you for the direction you want to jump next.  Remember "
    b2c_printf("You for the direction you want to jump next.  Remember \n");
    // 01200 PRINT"you and the rabbit don't necessarily jump at the same velocity."
    b2c_printf("You and the rabbit don't necessarily jump at the same velocity.\n");
    // 01210 PRINT"   GOOD LUCK"
    b2c_printf("   good luck\n");

  Lbl_01220:
    // 01220 PRINT
    b2c_printf("");
    // 01230 PRINT"                   TYPE 'QUIT' TO STOP."
    b2c_printf("                   type 'quit' to stop.\n");
    // 01240 PRINT
    b2c_printf("");
    // 01250 RANDOMIZE
    RANDOMIZE();
    // 01260 REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    // 01270 LET T = 400
    T_int = 400;
    // 01280 REM
    // 01290 REM -- INITIALIZE VELOCITIES AND POSITIONS --
    // 01300 REM
    // 01310 LET V1 = INT(RND(0)*10+0.5)*10+50
    V1_int = INT(RND(0)*10+0.5)*10+50;
    // 01320 LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    V2_int = (INT(RND(0)*2+0.5)+1)*V1_int;

  Lbl_01330:
    // 01330 LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    X1_int = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5);
    // 01340 LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    Y1_int = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5);
    // 01350 IF Y1 = 0  THEN 1330
    if(Y1_int==0)goto Lbl_01330;
    // 01360 IF X1 = 0 THEN 1330
    if(X1_int==0)goto Lbl_01330;
    // 01370 LET X2 = 0
    X2_int = 0;
    // 01380 LET Y2 = 0
    Y2_int = 0;
    // 01390 PRINT"SPEEDS (UNITS/HOP):"
    b2c_printf("Speeds (units/hop):\n");
    // 01400 PRINT"RABBIT -";V1,"YOU -";V2
    b2c_printf("Rabbit - %d Rabbit -You -You - %d \n",V1_int,V2_int);
    // 01410 PRINT
    b2c_printf("");
    // 01420 PRINT
    b2c_printf("");
    // 01430 PRINT
    b2c_printf("");
    // 01440 LET C = (X2-X1)^2+(Y2-Y1)^2
    C_int = IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2);
    // 01450 LET P1 = 3.14159/180
    P1_int = 3.14/180;
    // 01460 LET H1 = 1
    H1_int = 1;
    // 01470 REM
    // 01480 REM -- PRINT OUT --
    // 01490 REM

  Lbl_01500:
    // 01500 LET D1 = INT(RND(0)*359)
    D1_int = INT(RND(0)*359);
    // 01510 PRINT"HOP#: ";
    b2c_printf("Hop#: ");
    // 01520 LET Z = H
    Z_int = H_int;
    // 01530 GOSUB 2350
    Routine_02350();
    // 01540 PRINT"    DISTANCE TO RABBIT: ";
    b2c_printf("    distance to rabbit: ");
    // 01550 LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    Z_int = SQR(IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2));
    // 01560 GOSUB 2350
    Routine_02350();
    // 01570 PRINT"    CLOSEST APPROACH: ";
    b2c_printf("    closest approach: ");
    // 01580 LET Z = SQR(C)
    Z_int = SQR(C_int);
    // 01590 GOSUB 2350
    Routine_02350();
    // 01600 PRINT
    b2c_printf("");
    // 01610 PRINT"RABBIT   ---    POSITION:  (";
    b2c_printf("Rabbit   ---    position:  (");
    // 01620 LET Z = X1
    Z_int = X1_int;
    // 01630 GOSUB 2300
    Routine_02300();
    // 01640 PRINT",";
    b2c_printf(",");
    // 01650 LET Z = Y1
    Z_int = Y1_int;
    // 01660 GOSUB 2300
    Routine_02300();
    // 01670 PRINT")     AND DIRECTION:  ";
    b2c_printf(")     and direction:  ");
    // 01680 LET Z = D1
    Z_int = D1_int;
    // 01690 GOSUB 2350
    Routine_02350();
    // 01700 PRINT
    b2c_printf("");
    // 01710 PRINT"YOU      ---    POSITION:  (";
    b2c_printf("You      ---    position:  (");
    // 01720 LET Z = X2
    Z_int = X2_int;
    // 01730 GOSUB 2300
    Routine_02300();
    // 01740 PRINT",";
    b2c_printf(",");
    // 01750 LET Z = Y2
    Z_int = Y2_int;
    // 01760 GOSUB 2300
    Routine_02300();
    // 01770 PRINT")     AND DIRECTION: ";
    b2c_printf(")     and direction: ");
    // 01780 GOTO 1800
    goto Lbl_01800;

  Lbl_01790:
    // 01790 PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    b2c_printf("Direction to hop (0-359 degrees): ");

  Lbl_01800:
    // 01800 INPUT A$
    // Start of Basic INPUT statement 01800
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01800
    // 01810 DIM A(15)
    // 01820 LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    D2_int = A_int_arr[5] = A_int_arr[4] = A_int_arr[3] = A_int_arr[2] = A_int_arr[1] = 0;
    // 01830 CHANGE A$ TO A
    if(A_str!=nullptr){
        for(int i=1;(i<=(int)strlen(A_str))&&(i<=14);i++){
            A_int_arr[0][i]=(int)A_str[i-1];
        }
    }
    // 01840 FOR I = 1 TO 15
    for(I_int=1;I_int<=15;I_int++){
        // 01850     IF A(I) = 0 THEN 1920
        if(A_int_arr[I_int]==0)goto Lbl_01920;
        // 01860     IF A(I) =113 THEN 2250
        if(A_int_arr[I_int]==113)goto Lbl_02250;
        // 01870     IF A(I) = 81 THEN 2250
        if(A_int_arr[I_int]==81)goto Lbl_02250;
        // 01880     IF A(I)-48 < 0 THEN 1790
        if(A_int_arr[I_int]-48<0)goto Lbl_01790;
        // 01890     IF A(I)-48 > 9 THEN 1790
        if(A_int_arr[I_int]-48>9)goto Lbl_01790;
        // 01900 NEXT I
        int dummy_1900=0; // Ignore this line.
    }; // End-For(I_int)
    // 01910 GO TO 1790
    goto Lbl_01790;

  Lbl_01920:
    // 01920 FOR J = 1 TO I-1
    for(J_int=1;J_int<=I_int-1;J_int++){
        // 01930     D2=D2+(A(I-J)-48)*10^(J-1)
        D2_int = D2_int+(A_int_arr[I_int-J_int]-48)*IPower(10,(J_int-1));
        // 01940 NEXT J
        int dummy_1940=0; // Ignore this line.
    }; // End-For(J_int)
    // 01950 IF D2 < 0 THEN 1790
    if(D2_int<0)goto Lbl_01790;
    // 01960 IF D2 >= 360 THEN 1790
    if(D2_int>=360)goto Lbl_01790;
    // 01970 PRINT
    b2c_printf("");
    // 01980 PRINT
    b2c_printf("");
    // 01990 REM
    // 02000 REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    // 02010 REM
    // 02020 LET X3 = V1*COS(D1*P1)/100
    X3_int = V1_int*COS(D1_int*P1_int)/100;
    // 02030 LET Y3 = V1*SIN(D1*P1)/100
    Y3_int = V1_int*SIN(D1_int*P1_int)/100;
    // 02040 LET X4 = V2*COS(D2*P1)/100
    X4_int = V2_int*COS(D2_int*P1_int)/100;
    // 02050 LET Y4 = V2*SIN(D2*P1)/100
    Y4_int = V2_int*SIN(D2_int*P1_int)/100;
    // 02060 LET C = (X2-X1)^2+(Y2-Y1)^2
    C_int = IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2);
    // 02070 FOR I = 1 TO 100
    for(I_int=1;I_int<=100;I_int++){
        // 02080     LET X1 = X1+X3
        X1_int = X1_int+X3_int;
        // 02090     LET Y1 = Y1+Y3
        Y1_int = Y1_int+Y3_int;
        // 02100     LET X2 = X2+X4
        X2_int = X2_int+X4_int;
        // 02110     LET Y2 = Y2+Y4
        Y2_int = Y2_int+Y4_int;
        // 02120     IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2140
        if(C_int<IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2))goto Lbl_02140;
        // 02130     C = (X2-X1)^2+(Y2-Y1)^2
        C_int = IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2);

  Lbl_02140:
        // 02140 NEXT I
        int dummy_2140=0; // Ignore this line.
    }; // End-For(I_int)
    // 02150 LET H = H+1
    H_int = H_int+1;
    // 02160 IF C > T THEN 1500
    if(C_int>T_int)goto Lbl_01500;
    // 02170 PRINT
    b2c_printf("");
    // 02180 PRINT
    b2c_printf("");
    // 02190 PRINT"**********"
    b2c_printf("**********\n");
    // 02200 PRINT"* GOT YA *"
    b2c_printf("* got ya *\n");
    // 02210 PRINT"**********"
    b2c_printf("**********\n");
    // 02220 PRINT
    b2c_printf("");
    // 02230 PRINT
    b2c_printf("");
    // 02240 PRINT
    b2c_printf("");

  Lbl_02250:
    // 02250 STOP
    exit(1);
    // 02260 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
