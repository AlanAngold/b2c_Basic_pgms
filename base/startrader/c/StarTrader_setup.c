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
#include <jansson.h>
#include <unistd.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
char* data_03210s[]={"-0.025","-0.05","-0.025","0","-0.025","-0.025","0",".1",".1","-0.025",".1","0",".1",".2",".1",".1","-0.025","0"};
char* data_03220s[]={"1","1.5",".5",".75",".75",".75","-0.25","-0.25","-0.25","0","-0.5",".5","0","-0.5"};
char* data_03230s[]={"0",".5","1.5","0"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3210, 18,data_03210s},
    { 3220, 14,data_03220s},
    { 3230,  4,data_03230s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[6];                              // Basic: A$ 
int    B_int_arr[3][12];                          // Basic: B Common
int    B1_int;                                    // Basic: B1 
int    C_int_arr[6][3];                           // Basic: C Common
int    D1_int;                                    // Basic: D1 Common
int    D9_int;                                    // Basic: D9 Common
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G9_int;                                    // Basic: G9 Common
int    H_int;                                     // Basic: H Common
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K9_int;                                    // Basic: K9 Common
int    L_int;                                     // Basic: L 
int    M_int_arr[6][3];                           // Basic: M Common
int    MOD_int_arr[10];                           // Basic: MOD 
int    P1_int;                                    // Basic: P1 
int    P9_int;                                    // Basic: P9 Common
int    Q_int;                                     // Basic: Q Common
int    R_int;                                     // Basic: R Common
int    R9_int;                                    // Basic: R9 Common
int    S_int_arr[12][15];                         // Basic: S Common
int    S1_int;                                    // Basic: S1 Common
int    S9_int;                                    // Basic: S9 Common
int    T_int_arr[12][12];                         // Basic: T Common
char*  T_str_arr[72];                             // Basic: T$ Common
int    T1_int;                                    // Basic: T1 Common
int    T9_int;                                    // Basic: T9 Common
int    W_int;                                     // Basic: W Common
int    X_int;                                     // Basic: X 
int    X1_int;                                    // Basic: X1 Common
int    X9_int;                                    // Basic: X9 Common
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 Common
int    Y9_int;                                    // Basic: Y9 Common
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Frontier();
void Underdeveloped();
void Developed();
void GenCoords();
void ConvCoords();

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
    // 03250 REM *** GOSUBS FOLLOW ***
    // 03260 REM <FRONTIER> GOSUB

void Frontier(){

  Lbl_03270:
    // 03270 X=(RND(0)-.5)*100
    X_int = (RND(0)-0.5)*100;
    // 03280 Y=50*RND(0)
    Y_int = 50*RND(0);
    // 03290 IF (ABS(X)<25) AND (Y<25) THEN 3270
    if(ABS(X_int)<25&&Y_int<25)goto Lbl_03270;
    // 03300 F=1
    F_int = 1;
    // 03310 GOSUB 3580
    ConvCoords();
    // 03320 IF F=0 THEN 3270
    if(F_int==0)goto Lbl_03270;
    // 03330 S[7,S1]=0
    S_int_arr[7][S1_int] = 0;
    // 03340 GOTO 03350
    goto Lbl_03350;

  Lbl_03350:
    // 03350 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 03360 REM *** <UNDERDEVELOPED> GOSUB

void Underdeveloped(){
    // 03370 E=100
    E_int = 100;
    // 03380 GOSUB 3490
    GenCoords();
    // 03390 S[7,S1]=5
    S_int_arr[7][S1_int] = 5;
    // 03400 GOTO 03410
    goto Lbl_03410;

  Lbl_03410:
    // 03410 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------
    // 03420 REM *** <DEVELOPED> GOSUB

void Developed(){
    // 03430 E=50
    E_int = 50;
    // 03440 GOSUB 3490
    GenCoords();
    // 03450 S[7,S1]=10
    S_int_arr[7][S1_int] = 10;
    // 03460 GOTO 03470
    goto Lbl_03470;

  Lbl_03470:
    // 03470 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------
    // 03480 REM *** <GENERATE CO-ORDS> GOSUB

void GenCoords(){

  Lbl_03490:
    // 03490 X=(RND(0)-.5)*E
    X_int = (RND(0)-0.5)*E_int;
    // 03500 Y=RND(0)*E/2
    Y_int = RND(0)*E_int/2;
    // 03510 F=1
    F_int = 1;
    // 03520 GOSUB 3580
    ConvCoords();
    // 03530 IF F=0 THEN 3490
    if(F_int==0)goto Lbl_03490;
    // 03540 GOTO 03550
    goto Lbl_03550;

  Lbl_03550:
    // 03550 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------
    // 03560 REM *** <TEST STAR CO-ORDS> GOSUB
    // 03570 REM FIRST CONVERT CO-ORDS TO NEXT HALF-BOARD

void ConvCoords(){
    // 03580 GOTO H OF 3690,3650,3630,3590
    switch((int)(H_int)){
        case 1: goto Lbl_03690;
        case 2: goto Lbl_03650;
        case 3: goto Lbl_03630;
        case 4: goto Lbl_03590;
        default: break; 
    };

  Lbl_03590:
    // 03590 Z=X
    Z_int = X_int;
    // 03600 X=-Y
    X_int = Y_int;
    // 03610 Y=Z
    Y_int = Z_int;
    // 03620 GOTO 3690
    goto Lbl_03690;

  Lbl_03630:
    // 03630 Y=-Y
    Y_int = Y_int;
    // 03640 GOTO 3690
    goto Lbl_03690;

  Lbl_03650:
    // 03650 Z=X
    Z_int = X_int;
    // 03660 X=Y
    X_int = Y_int;
    // 03670 Y=Z
    Y_int = Z_int;
    // 03680 REM SECOND, TEST PROXIMITY

  Lbl_03690:
    // 03690 FOR J=1 TO S1-1
    for(J_int=1;J_int<=S1_int-1;J_int++){
        // 03700 IF SQR((X-S[11,J])^2+(Y-S[12,J])^2) >= D9 THEN 3730
        if(SQR(IPower((X_int-S_int_arr[11][J_int]),2)+IPower((Y_int-S_int_arr[12][J_int]),2))>=D9_int)goto Lbl_03730;
        // 03710 F=0
        F_int = 0;
        // 03720 GOTO 03800
        goto Lbl_03800;

  Lbl_03730:
        // 03730 NEXT J
        int dummy_3730=0; // Ignore this line.
    }; // End-For(J_int)
    // 03740 REM FINALLY, ENTER CO-ORDS AND INCREMENT HALF-BOARD CTR
    // 03750 S[11,S1]=INT(X)
    S_int_arr[11][S1_int] = INT(X_int);
    // 03760 S[12,S1]=INT(Y)
    S_int_arr[12][S1_int] = INT(Y_int);
    // 03770 REM H=1+(H <= 3)*H
    // 03780 H=MOD(1+H)
    H_int = MOD_int_arr[1+H_int];
    // 03790 GOTO 03800
    goto Lbl_03800;

  Lbl_03800:
    // 03800 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    LoadCommonAreas("basic/StarTrader_setup_cmn.json");
    // 01000  REM Written in HP Basic
    // 01010  REM From: http://www.langesite.com/startrader/
    // 01020 COM S[12,15],T[12,12],T$[72],B[3,12]
    // 01030 COM W,D9,K9,X9,D1,X1,P9,T9,S9,Y9,H
    // 01040 COM Y1,R9,G9,Q,M[6,3],C[6,3]
    // 01050 COM S1,T1,R
    // 01060 REM *** STAR TRADERS ***
    // 01070 REM <<<GAME SET-UP MODULE>>>
    // 01080 REM S IS THE STAR SYSTEM INFO ARRAY
    // 01090 REM T IS THE TRADING SHIP INFO ARRAY
    // 01100 REM T$ IS THE TRADING SHIP NAME STRING
    // 01110 REM M AND C DETERMINE A STAR'S PRODUCTIVITY/MONTH
    // 01120 REM   PROD/MO. = S(7,J) * M(I,R1)  +  C(I,R1)
    // 01130 REM   WHERE J IS THE STAR ID #,I THE MERCHANDISE #,
    // 01140 REM   AND R1 IS THE DEVELOPMENT CLASS OF THE STAR
    // 01150 REM B CONTAINS THE BANK ACCOUNTS
    // 01160 REM A$ IS THE STANDARD INPUT BUFFER
    // 01170 DIM A$[6]
    // 01180 REM R9 IS THE SPEED OF A SHIP IN LIGHT-YEARS PER DAY
    // 01190 REM D9 IS THE MINIMUM  DISTANCE ALLOWED BETWEEN STARS
    // 01200 REM Q IS THE PROBABILITY OF A DELAY
    // 01210 REM K9 IS THE MAX NUMBER OF BIDDING ROUNDS
    // 01220 REM W IS THE MAX WEIGHT OF A TRADING SHIP
    // 01230 REM X9 CONTROLS THE PROFIT MARGIN; HIGH X9 LIMITS THE %
    // 01240 REM G9 IS THE STELLAR DEVELOPMENT INCREMENT 1<=G9<=5
    // 01250 REM R=1 IF THIS IS A RESTART
    // 01260 LET R9=2/7
    R9_int = 2/7;
    // 01270 LET D9=15
    D9_int = 15;
    // 01280 LET Q=.1
    Q_int = 0.1;
    // 01290 LET K9=3
    K9_int = 3;
    // 01300 LET W=30
    W_int = 30;
    // 01310 LET X9=36
    X9_int = 36;
    // 01320 LET G9=1.25
    G9_int = 1.25;
    // 01330 LET R=0
    R_int = 0;
    // 01340 REM D1 IS THE DAY OF THIS YEAR (1<=D1<=360)
    // 01350 REM Y1 IS THIS YEAR
    // 01360 LET D1=1
    D1_int = 1;
    // 01370 LET Y1=2070
    Y1_int = 2070;
    // 01380 REM SET UP ECONOMETRICS MODEL
    // 01390 RESTORE 3200
    Data_Index=0;
    RestoreData(3200);
    // 01400 MAT READ M,C
    for(int d0=0;d0<=5;d0++){
        for(int d1=0;d1<=2;d1++){
            M_int_arr[d0][d1] = Get_Data_Int();
        }
    }
    for(int d0=0;d0<=5;d0++){
        for(int d1=0;d1<=2;d1++){
            C_int_arr[d0][d1] = Get_Data_Int();
        }
    }
    // 01410 REM *** BLOCK #1
    // 01420 PRINT "INSTRUCTIONS (TYPE 'Y' OR 'N' PLEASE)";
    b2c_printf("Instructions (type 'y' or 'n' please)");
    // 01430 INPUT A$
    // Start of Basic INPUT statement 01430
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01430
    // 01440 IF A$[1,1]="N" THEN 1690
    if(A_str_arr[1][1]=='N')goto Lbl_01690;
    // 01450 PRINT 
    b2c_printf("");
    // 01460 PRINT "     THE DATE IS JAN 1, 2070 AND INTERSTELLAR FLIGHT"
    b2c_printf("     the date is jan 1, 2070 and interstellar flight\n");
    // 01470 PRINT "HAS EXISTED FOR 70 YEARS.  THERE ARE SEVERAL STAR"
    b2c_printf("Has existed for 70 years.  There are several star\n");
    // 01480 PRINT "SYSTEMS THAT HAVE BEEN COLONIZED.  SOME ARE ONLY"
    b2c_printf("Systems that have been colonized.  Some are only\n");
    // 01490 PRINT "FRONTIER SYSTEMS, OTHERS ARE OLDER AND MORE DEVELOPED."
    b2c_printf("Frontier systems, others are older and more developed.\n");
    // 01500 PRINT 
    b2c_printf("");
    // 01510 PRINT "     EACH OF YOU IS THE CAPTAIN OF TWO INTERSTELLAR"
    b2c_printf("     each of you is the captain of two interstellar\n");
    // 01520 PRINT "TRADING SHIPS.  YOU WILL TRAVEL FROM STAR SYSTEM TO"
    b2c_printf("Trading ships.  You will travel from star system to\n");
    // 01530 PRINT "STAR SYSTEM, BUYING AND SELLING MERCHANDISE.  IF YOU"
    b2c_printf("Star system, buying and selling merchandise.  If you\n");
    // 01540 PRINT "DRIVE A GOOD BARGAIN YOU CAN MAKE LARGE PROFITS."
    b2c_printf("Drive a good bargain you can make large profits.\n");
    // 01550 PRINT 
    b2c_printf("");
    // 01560 PRINT "     AS TIME GOES ON, EACH STAR SYSTEM WILL SLOWLY"
    b2c_printf("     as time goes on, each star system will slowly\n");
    // 01570 PRINT "GROW, AND ITS NEEDS WILL CHANGE.  A STAR SYSTEM THAT"
    b2c_printf("Grow, and its needs will change.  A star system that\n");
    // 01580 PRINT "HOW IS SELLING MUCH URANIUM AND RAW METALS CHEAPLY"
    b2c_printf("How is selling much uranium and raw metals cheaply\n");
    // 01590 PRINT "MAY NOT HAVE ENOUGH FOR EXPORT IN A FEW YEARS."
    b2c_printf("May not have enough for export in a few years.\n");
    // 01600 PRINT 
    b2c_printf("");
    // 01610 PRINT "     YOUR SHIPS CAN TRAVEL ABOUT TWO LIGHTYEARS IN A"
    b2c_printf("     your ships can travel about two lightyears in a\n");
    // 01620 PRINT "WEEK AND CAN CARRY UP TO";W;" TONS OF CARGO.  ONLY"
    b2c_printf("Week and can carry up to %d Week and can carry up to tons of cargo.  Only\n",W_int);
    // 01630 PRINT "CLASS I AND CLASS II STAR SYSTEMS HAVE BANKS ON THEM."
    b2c_printf("Class i and class ii star systems have banks on them.\n");
    // 01640 PRINT "THEY PAY 5% INTEREST AND ANY MONEY YOU DEPOSIT ON ONE"
    b2c_printf("They pay 5%% interest and any money you deposit on one\n");
    // 01650 PRINT "PLANET IS AVAILABLE ON ANOTHER - PROVIDED THERE'S A LOCAL"
    b2c_printf("Planet is available on another - provided there's a local\n");
    // 01660 PRINT "BANK."
    b2c_printf("Bank.\n");
    // 01670 PRINT 
    b2c_printf("");
    // 01680 REM *** BLOCK #2

  Lbl_01690:
    // 01690 PRINT "HAVE ALL PLAYERS PLAYED BEFORE";
    b2c_printf("Have all players played before");
    // 01700 INPUT A$
    // Start of Basic INPUT statement 01700
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01700
    // 01710 PRINT 
    b2c_printf("");
    // 01720 IF A$[1,1]="Y" THEN 1740
    if(A_str_arr[1][1]=='Y')goto Lbl_01740;
    // 01730 GOTO 1780
    goto Lbl_01780;

  Lbl_01740:
    // 01740 PRINT "DO YOU WANT TO SET UP YOUR OWN GAME";
    b2c_printf("Do you want to set up your own game");
    // 01750 INPUT A$
    // Start of Basic INPUT statement 01750
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01750
    // 01760 PRINT 
    b2c_printf("");
    // 01770 IF A$[1,1]="Y" THEN 1890
    if(A_str_arr[1][1]=='Y')goto Lbl_01890;

  Lbl_01780:
    // 01780 PRINT "HOW MANY PLAYERS";
    b2c_printf("How many players");
    // 01790 INPUT P9
    // Start of Basic INPUT statement 01790
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01790
    // 01800 PRINT 
    b2c_printf("");
    // 01810 GOTO P9-1 OF 1840,1840,1840
    switch((int)(P9_int-1)){
        case 1: goto Lbl_01840;
        case 2: goto Lbl_01840;
        case 3: goto Lbl_01840;
        default: break; 
    };
    // 01820 PRINT "2,3, OR 4 CAN PLAY"
    b2c_printf("2,3, or 4 can play\n");
    // 01830 GOTO 1780
    goto Lbl_01780;

  Lbl_01840:
    // 01840 T9=2*P9
    T9_int = 2*P9_int;
    // 01850 S9=3*P9+1
    S9_int = 3*P9_int+1;
    // 01860 Y9=Y1+5
    Y9_int = Y1_int+5;
    // 01870 GOTO 2620
    goto Lbl_02620;
    // 01880 REM *** BLOCK #3

  Lbl_01890:
    // 01890 PRINT "IS THIS A RESTART";
    b2c_printf("Is this a restart");
    // 01900 INPUT A$
    // Start of Basic INPUT statement 01900
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01900
    // 01910 PRINT 
    b2c_printf("");
    // 01920 IF A$[1,1]="N" THEN 2140
    if(A_str_arr[1][1]=='N')goto Lbl_02140;
    // 01930 PRINT "LOAD THE TAPE INTO THE TAPE READER.  WHEN I TYPE A '?'"
    b2c_printf("Load the tape into the tape reader.  When i type a '?'\n");
    // 01940 PRINT "YOU CAN FLIP THE SWITCH TO 'START' WHENEVER YOU'RE READY"
    b2c_printf("You can flip the switch to 'start' whenever you're ready\n");
    // 01950 PRINT 
    b2c_printf("");
    // 01960 INPUT T$
    // Start of Basic INPUT statement 01960
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&T_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01960
    // 01970 INPUT W,D9,K9,X9,D1,Y1
    // Start of Basic INPUT statement 01970
    {
        int numargs=6;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&W_int,args,0)) ||
                (err += b2c_strtoi(&D9_int,args,1)) ||
                (err += b2c_strtoi(&K9_int,args,2)) ||
                (err += b2c_strtoi(&X9_int,args,3)) ||
                (err += b2c_strtoi(&D1_int,args,4)) ||
                (err += b2c_strtoi(&Y1_int,args,5)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01970
    // 01980 INPUT P9,T9,S9,Y9,T1,S1
    // Start of Basic INPUT statement 01980
    {
        int numargs=6;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P9_int,args,0)) ||
                (err += b2c_strtoi(&T9_int,args,1)) ||
                (err += b2c_strtoi(&S9_int,args,2)) ||
                (err += b2c_strtoi(&Y9_int,args,3)) ||
                (err += b2c_strtoi(&T1_int,args,4)) ||
                (err += b2c_strtoi(&S1_int,args,5)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01980
    // 01990 FOR J=1 TO S9
    for(J_int=1;J_int<=S9_int;J_int++){
        // 02000 FOR I=1 TO 9 STEP 4
        for(I_int=1;I_int<=9;I_int+=4){
            // 02010 INPUT S[I,J],S[I+1,J],S[I+2,J],S[I+3,J]
            // Start of Basic INPUT statement 02010
            {
                int numargs=4;
                char *args[numargs+1];
                bool echoeol=true;
                while(true){
                    fprintf(stdout," ? ");
                    int err=input(args,numargs,echoeol);
                    if(err==0x03) break;
                    if(err || 
                        (err += b2c_strtoi(&S_int_arr[I_int][J_int],args,0)) ||
                        (err += b2c_strtoi(&S_int_arr[I_int+1][J_int],args,1)) ||
                        (err += b2c_strtoi(&S_int_arr[I_int+2][J_int],args,2)) ||
                        (err += b2c_strtoi(&S_int_arr[I_int+3][J_int],args,3)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 02010
            // 02020 NEXT I
            int dummy_2020=0; // Ignore this line.
        }; // End-For(I_int)
        // 02030 NEXT J
        int dummy_2030=0; // Ignore this line.
    }; // End-For(J_int)
    // 02040 FOR J=1 TO T9
    for(J_int=1;J_int<=T9_int;J_int++){
        // 02050 FOR I=1 TO 9 STEP 4
        for(I_int=1;I_int<=9;I_int+=4){
            // 02060 INPUT T[I,J],T[I+1,J],T[I+2,J],T[I+3,J]
            // Start of Basic INPUT statement 02060
            {
                int numargs=4;
                char *args[numargs+1];
                bool echoeol=true;
                while(true){
                    fprintf(stdout," ? ");
                    int err=input(args,numargs,echoeol);
                    if(err==0x03) break;
                    if(err || 
                        (err += b2c_strtoi(&T_int_arr[I_int][J_int],args,0)) ||
                        (err += b2c_strtoi(&T_int_arr[I_int+1][J_int],args,1)) ||
                        (err += b2c_strtoi(&T_int_arr[I_int+2][J_int],args,2)) ||
                        (err += b2c_strtoi(&T_int_arr[I_int+3][J_int],args,3)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 02060
            // 02070 NEXT I
            int dummy_2070=0; // Ignore this line.
        }; // End-For(I_int)
        // 02080 NEXT J
        int dummy_2080=0; // Ignore this line.
    }; // End-For(J_int)
    // 02090 FOR I=1 TO P9
    for(I_int=1;I_int<=P9_int;I_int++){
        // 02100 INPUT B[1,I],B[2,I],B[3,I]
        // Start of Basic INPUT statement 02100
        {
            int numargs=3;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&B_int_arr[1][I_int],args,0)) ||
                    (err += b2c_strtoi(&B_int_arr[2][I_int],args,1)) ||
                    (err += b2c_strtoi(&B_int_arr[3][I_int],args,2)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 02100
        // 02110 NEXT I
        int dummy_2110=0; // Ignore this line.
    }; // End-For(I_int)
    // 02120 R=1
    R_int = 1;
    // 02130 CHAIN "$TRADES"
    SaveCommonAreas("%s_cmn.json");
    b2c_chain("$TRADES",-1);

  Lbl_02140:
    // 02140 PRINT "HOW MANY PLAYERS";
    b2c_printf("How many players");
    // 02150 INPUT P9
    // Start of Basic INPUT statement 02150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02150
    // 02160 PRINT 
    b2c_printf("");
    // 02170 IF P9 >= 2 AND P9 <= 12 THEN 2200
    if(P9_int>=2&&P9_int<=12)goto Lbl_02200;
    // 02180 PRINT "2,3,4, ... ,12 CAN PLAY"
    b2c_printf("2,3,4, ... ,12 Can play\n");
    // 02190 GOTO 2140
    goto Lbl_02140;

  Lbl_02200:
    // 02200 PRINT "HOW MANY SHIPS PER PLAYER";
    b2c_printf("How many ships per player");
    // 02210 INPUT X
    // Start of Basic INPUT statement 02210
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02210
    // 02220 PRINT 
    b2c_printf("");
    // 02230 IF X<1 THEN 2200
    if(X_int<1)goto Lbl_02200;
    // 02240 T9=P9*X
    T9_int = P9_int*X_int;
    // 02250 IF T9 <= 12 THEN 2290
    if(T9_int<=12)goto Lbl_02290;
    // 02260 PRINT "I CAN'T KEEP TRACK OF MORE THAN 12 SHIPS;"
    b2c_printf("I can't keep track of more than 12 ships;\n");
    // 02270 PRINT P9;" PLAYERS TIMES";X;" SHIPS MAKES";T9
    b2c_printf(" %d Ia a players times players times %d  players times ships makes ships makes %d \n",P9_int,X_int,T9_int);
    // 02280 GOTO 2200
    goto Lbl_02200;

  Lbl_02290:
    // 02290 PRINT "HOW MANY STAR SYSTEMS";
    b2c_printf("How many star systems");
    // 02300 INPUT S9
    // Start of Basic INPUT statement 02300
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02300
    // 02310 PRINT 
    b2c_printf("");
    // 02320 IF S9 >= 4 AND S9 <= 13 THEN 2350
    if(S9_int>=4&&S9_int<=13)goto Lbl_02350;
    // 02330 PRINT "FROM 4 TO 13 STARS"
    b2c_printf("From 4 to 13 stars\n");
    // 02340 GOTO 2290
    goto Lbl_02290;

  Lbl_02350:
    // 02350 PRINT "ENTER THE LENGTH OF GAME IN YEARS";
    b2c_printf("Enter the length of game in years");

  Lbl_02360:
    // 02360 INPUT X
    // Start of Basic INPUT statement 02360
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02360
    // 02370 PRINT 
    b2c_printf("");
    // 02380 IF X >= 1 AND INT(X)=X THEN 2410
    if(X_int>=1&&INT(X_int)==X_int)goto Lbl_02410;
    // 02390 PRINT "CHOOSE A POSITIVE INTEGER"
    b2c_printf("Choose a positive integer\n");
    // 02400 GOTO 2360
    goto Lbl_02360;

  Lbl_02410:
    // 02410 Y9=Y1+X
    Y9_int = Y1_int+X_int;

  Lbl_02420:
    // 02420 PRINT "WHAT'S THE MAX CARGOE TONNAGE(USUALLY 30)";
    b2c_printf("What's the max cargoe tonnage(usually 30)");
    // 02430 INPUT W
    // Start of Basic INPUT statement 02430
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&W_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02430
    // 02440 PRINT 
    b2c_printf("");
    // 02450 IF W<25 THEN 2420
    if(W_int<25)goto Lbl_02420;

  Lbl_02460:
    // 02460 PRINT "WHAT'S THE MINIMUM DISTANCE BETWEEN STARS(USUALLY 15)";
    b2c_printf("What's the minimum distance between stars(usually 15)");
    // 02470 INPUT D9
    // Start of Basic INPUT statement 02470
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02470
    // 02480 PRINT 
    b2c_printf("");
    // 02490 IF D9 <= 25 AND D9 >= 10 THEN 2520
    if(D9_int<=25&&D9_int>=10)goto Lbl_02520;
    // 02500 PRINT "MIN SPACING 10, MAX 25"
    b2c_printf("Min spacing 10, max 25\n");
    // 02510 GOTO 2460
    goto Lbl_02460;

  Lbl_02520:
    // 02520 PRINT "HOW MANY BIDS OR OFFERS(USUALLY 3)";
    b2c_printf("How many bids or offers(usually 3)");
    // 02530 INPUT K9
    // Start of Basic INPUT statement 02530
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&K9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02530
    // 02540 PRINT 
    b2c_printf("");
    // 02550 IF K9<1 THEN 2520
    if(K9_int<1)goto Lbl_02520;
    // 02560 PRINT "SET THE PROFIT MARGIN(1,2,3,4 OR 5)...THE HIGHER"
    b2c_printf("Set the profit margin(1,2,3,4 or 5)...The higher\n");
    // 02570 PRINT "THE NUMBER, THE LOWER THE PROFIT % ... USUALLY SET TO 2"
    b2c_printf("The number, the lower the profit %% ... Usually set to 2\n");
    // 02580 PRINT "...YOUR NUMBER";
    b2c_printf("...Your number");
    // 02590 INPUT X9
    // Start of Basic INPUT statement 02590
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02590
    // 02600 X9=18*(ABS(X9) MIN 5)
    X9_int = 18*(ABS(X9_int));
    // 02610 REM *** BLOCK #4.1

  Lbl_02620:
    // 02620 S[11,1]=S[12,1]=0
    S_int_arr[12][1] = S_int_arr[11][1] = 0;
    // 02630 S[7,1]=15
    S_int_arr[7][1] = 15;
    // 02640 REM *** BLOCK #4.2
    // 02650 H=1
    H_int = 1;
    // 02660 S1=2
    S1_int = 2;
    // 02670 GOSUB 3270
    Frontier();
    // 02680 S1=3
    S1_int = 3;
    // 02690 GOSUB 3270
    Frontier();
    // 02700 S1=4
    S1_int = 4;
    // 02710 GOSUB 3370
    Underdeveloped();
    // 02720 FOR S1=5 TO S9
    for(S1_int=5;S1_int<=S9_int;S1_int++){
        // 02730 GOSUB S1-3*INT((S1-1)/3) OF 3270,3370,3430
        switch((int)(S1_int-3*INT((S1_int-1)/3))){
            case 1: Frontier(); break;
            case 2: Underdeveloped(); break;
            case 3: Developed(); break;
            default: break; 
        };
        // 02740 NEXT S1
        int dummy_2740=0; // Ignore this line.
    }; // End-For(S1_int)
    // 02750 REM *** BLOCK #4.3
    // 02760 FOR S1=1 TO S9
    for(S1_int=1;S1_int<=S9_int;S1_int++){
        // 02770 FOR J=1 TO 6
        for(J_int=1;J_int<=6;J_int++){
            // 02780 S[J,S1]=0
            S_int_arr[J_int][S1_int] = 0;
            // 02790 NEXT J
            int dummy_2790=0; // Ignore this line.
        }; // End-For(J_int)
        // 02800 IF S1>1 THEN 2830
        if(S1_int>1)goto Lbl_02830;
        // 02810 I=1
        I_int = 1;
        // 02820 GOTO 2870
        goto Lbl_02870;

  Lbl_02830:
        // 02830 I=4*INT(14*RND(0))+5
        I_int = 4*INT(14*RND(0))+5;
        // 02840 FOR J=2 TO S1-1
        for(J_int=2;J_int<=S1_int-1;J_int++){
            // 02850 IF I=S[8,J] THEN 2830
            if(I_int==S_int_arr[8][J_int])goto Lbl_02830;
            // 02860 NEXT J
            int dummy_2860=0; // Ignore this line.
        }; // End-For(J_int)

  Lbl_02870:
        // 02870 S[8,S1]=I
        S_int_arr[8][S1_int] = I_int;
        // 02880 S[9,S1]=270
        S_int_arr[9][S1_int] = 270;
        // 02890 S[10,S1]=Y1-1
        S_int_arr[10][S1_int] = Y1_int-1;
        // 02900 NEXT S1
        int dummy_2900=0; // Ignore this line.
    }; // End-For(S1_int)
    // 02910 REM *** BLOCK #4.4
    // 02920 T1=L=1
    L_int = T1_int = 1;
    // 02930 PRINT 
    b2c_printf("");
    // 02940 PRINT 
    b2c_printf("");
    // 02950 PRINT "CAPTAINS, NAME YOUR SHIPS (UP TO 6 LETTERS/BLANKS/NUMBERS)"
    b2c_printf("Captains, name your ships (up to 6 letters/blanks/numbers)\n");
    // 02960 FOR I=1 TO T9/P9
    for(I_int=1;I_int<=T9_int/P9_int;I_int++){
        // 02970 PRINT 
        b2c_printf("");
        // 02980 FOR P1=1 TO P9
        for(P1_int=1;P1_int<=P9_int;P1_int++){
            // 02990 T[1,T1]=T[2,T1]=T[6,T1]=0
            T_int_arr[6][T1_int] = T_int_arr[2][T1_int] = T_int_arr[1][T1_int] = 0;
            // 03000 T[3,T1]=15
            T_int_arr[3][T1_int] = 15;
            // 03010 T[4,T1]=T[5,T1]=10
            T_int_arr[5][T1_int] = T_int_arr[4][T1_int] = 10;
            // 03020 T[7,T1]=25
            T_int_arr[7][T1_int] = 25;
            // 03030 T[9,T1]=D1
            T_int_arr[9][T1_int] = D1_int;
            // 03040 T[10,T1]=Y1
            T_int_arr[10][T1_int] = Y1_int;
            // 03050 T[11,T1]=5000
            T_int_arr[11][T1_int] = 5000;
            // 03060 PRINT "   CAPTAIN";P1;"WHAT DO YOU CHRISTEN YOUR SHIP #";I;
            b2c_printf("   captain %d    captainWhat do you christen your ship #What do you christen your ship # %d What do you christen your ship #\n",P1_int,I_int);
            // 03070 INPUT T$[L,L+5]
            // Start of Basic INPUT statement 03070
            {
                int numargs=1;
                char *args[numargs+1];
                bool echoeol=true;
                while(true){
                    fprintf(stdout," ? ");
                    int err=input(args,numargs,echoeol);
                    if(err==0x03) break;
                    if(err || 
                        (err += unknown_type(T_str_arr[L_int][L_int+5],args,0)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 03070
            // 03080 T1=T1+1
            T1_int = T1_int+1;
            // 03090 L=L+6
            L_int = L_int+6;
            // 03100 NEXT P1
            int dummy_3100=0; // Ignore this line.
        }; // End-For(P1_int)
        // 03110 NEXT I
        int dummy_3110=0; // Ignore this line.
    }; // End-For(I_int)
    // 03120 REM *** BLOCK #4.5
    // 03130 FOR B1=1 TO P9
    for(B1_int=1;B1_int<=P9_int;B1_int++){
        // 03140 B[1,B1]=0
        B_int_arr[1][B1_int] = 0;
        // 03150 B[2,B1]=D1
        B_int_arr[2][B1_int] = D1_int;
        // 03160 B[3,B1]=Y1
        B_int_arr[3][B1_int] = Y1_int;
        // 03170 NEXT B1
        int dummy_3170=0; // Ignore this line.
    }; // End-For(B1_int)
    // 03180 CHAIN "$TRADES"
    SaveCommonAreas("%s_cmn.json");
    b2c_chain("$TRADES",-1);
    // 03190 REM *** DATA FOR ECONOMETRIC MODEL FOLLOWS ***
    // 03200 REM MODEL #1
    // 03210 DATA -0.025,-0.05,-0.025,0,-0.025,-0.025,0,.1,.1,-0.025,.1,0,.1,.2,.1,.1,-0.025,0
    // 03220 DATA 1,1.5,.5,.75,.75,.75,-0.25,-0.25,-0.25,0,-0.5,.5,0,-0.5
    // 03230 DATA 0,.5,1.5,0
    // 03240 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
