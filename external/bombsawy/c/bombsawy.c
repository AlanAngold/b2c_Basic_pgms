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
int    B_int;                                     // Basic: B 
int    D_int;                                     // Basic: D 
char*  F_str;                                     // Basic: F$ 
int    G_int;                                     // Basic: G 
int    M_int;                                     // Basic: M 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
char*  U_str;                                     // Basic: U$ 
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

  Lbl_01000:
    // 01000 PRINT "YOU ARE A PILOT IN A WORLD WAR II BOMBER."
    b2c_printf("You are a pilot in a world war ii bomber.\n");

  Lbl_01010:
    // 01010 INPUT "WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)";A
    // Start of Basic INPUT statement 01010
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01010
    // 01020 IF A>0 AND A<5 THEN 1040
    if(A_int>0&&A_int<5)goto Lbl_01040;
    // 01030 PRINT "TRY AGAIN..." : GOTO 1010
    goto Lbl_01010;

  Lbl_01040:
    // 01040 ON A GOTO 1050, 1130, 11250, 220
    switch((int)(A_int)){
        case 1: goto Lbl_01050;
        case 2: goto Lbl_01130;
        case 3: goto Lbl_01220;
        case 4: goto Lbl_01250;
        default: break; 
    };

  Lbl_01050:
    // 01050 INPUT "YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)";B
    // Start of Basic INPUT statement 01050
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01050
    // 01060 IF B>0 AND B<4 THEN 1080
    if(B_int>0&&B_int<4)goto Lbl_01080;
    // 01070 PRINT "TRY AGAIN..." : GOTO 1050
    goto Lbl_01050;

  Lbl_01080:
    // 01080 PRINT : ON B GOTO 101120, 1110,90
    switch((int)(B_int)){
        case 1: goto Lbl_01090;
        case 2: goto Lbl_01110;
        case 3: goto Lbl_01120;
        default: break; 
    };

  Lbl_01090:
    // 01090 PRINT "SHOULD BE EASY -- YOU'RE FLYING A NAZI-MADE PLANE."
    b2c_printf("Should be easy -- you're flying a nazi-made plane.\n");
    // 01100 GOTO 1320
    goto Lbl_01320;

  Lbl_01110:
    // 01110 PRINT "BE CAREFUL!!!" : GOTO 21110
    goto Lbl_01320;

  Lbl_01120:
    // 01120 PRINT "YOU'RE GOING FOR THE OIL, EH?" : GOTO 1320
    goto Lbl_01320;

  Lbl_01130:
    // 01130 INPUT "AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)";G
    // Start of Basic INPUT statement 01130
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&G_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 IF G>0 AND G<5 THEN 1160
    if(G_int>0&&G_int<5)goto Lbl_01160;
    // 01150 PRINT "TRY AGAIN..." : GOTO 1130
    goto Lbl_01130;

  Lbl_01160:
    // 01160 PRINT : ON G GOTO 111200, 1180, 170, 190
    switch((int)(G_int)){
        case 1: goto Lbl_01170;
        case 2: goto Lbl_01180;
        case 3: goto Lbl_01190;
        case 4: goto Lbl_01200;
        default: break; 
    };

  Lbl_01170:
    // 01170 PRINT "YOU'VE GOT 2 TONS OF BOMBS FLYING FOR PLOESTI." : GOTO 1320
    goto Lbl_01320;

  Lbl_01180:
    // 01180 PRINT "YOU'RE DUMPING THE A-BOMB ON HIROSHIMA." : GOTO 1320
    goto Lbl_01320;

  Lbl_01190:
    // 01190 PRINT "YOU'RE CHASING THE BISMARK IN THE NORTH SEA." : GOTO 1320
    goto Lbl_01320;

  Lbl_01200:
    // 01200 PRINT "YOU'RE BUSTING A GERMAN HEAVY WATER PLANT IN THE RUHR."
    b2c_printf("You're busting a german heavy water plant in the ruhr.\n");
    // 01210 GOTO 1320
    goto Lbl_01320;

  Lbl_01220:
    // 01220 PRINT "YOU'RE FLYING A KAMIKAZE MISSION OVER THE USS LEXINGTON."
    b2c_printf("You're flying a kamikaze mission over the uss lexington.\n");
    // 01230 INPUT "YOUR FIRST KAMIKAZE MISSION(Y OR N)";F$
    // Start of Basic INPUT statement 01230
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""YOUR FIRST KAMIKAZE MISSION(Y OR N)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&F_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01230
    // 01240 IF F$="N" THEN S=0 : GOTO 1520
    goto Lbl_01520;

  Lbl_01250:
    // 01250 PRINT "A NAZI, EH?  OH WELL.  ARE YOU GOING FOR RUSSIA(1),"
    b2c_printf("A nazi, eh?  Oh well.  Are you going for russia(1),\n");
    // 01260 INPUT "ENGLAND(2), OR FRANCE(3)";M : IF M>0 AND M<4 THEN 1280
    if(M_int>0&&M_int<4)goto Lbl_01280;
    // 01270 PRINT "TRY AGAIN..." : GOTO 1250
    goto Lbl_01250;

  Lbl_01280:
    // 01280 PRINT : ON M GOTO 1290, 1300, 1310
    switch((int)(M_int)){
        case 1: goto Lbl_01290;
        case 2: goto Lbl_01300;
        case 3: goto Lbl_01310;
        default: break; 
    };

  Lbl_01290:
    // 01290 PRINT "YOU'RE NEARING STALINGRAD." : GOTO 1320
    goto Lbl_01320;

  Lbl_01300:
    // 01300 PRINT "NEARING LONDON.  BE CAREFUL, THEY'VE GOT RADAR." : GOTO 1320
    goto Lbl_01320;

  Lbl_01310:
    // 01310 PRINT "NEARING VERSAILLES.  DUCK SOUP.  THEY'RE NEARLY DEFENSELESS."
    b2c_printf("Nearing versailles.  Duck soup.  They're nearly defenseless.\n");

  Lbl_01320:
    // 01320 PRINT
    b2c_printf("");

  Lbl_01330:
    // 01330 INPUT "HOW MANY MISSIONS HAVE YOU FLOWN";D
    // Start of Basic INPUT statement 01330
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""HOW MANY MISSIONS HAVE YOU FLOWN"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01330
    // 01340 IF D<160 THEN 1380
    if(D_int<160)goto Lbl_01380;
    // 01350 PRINT "MISSIONS, NOT MILES..." 
    b2c_printf("Missions, not miles...\n");
    // 01360 PRINT "150 MISSIONS IS HIGH EVEN FOR OLD-TIMERS."
    b2c_printf("150 missions is high even for old-timers.\n");
    // 01370 PRINT "NOW THEN, "; : GOTO 1330
    goto Lbl_01330;

  Lbl_01380:
    // 01380 PRINT:IF D<100 THEN 1400
    if(D_int<100)goto Lbl_01400;
    // 01390 PRINT "THAT'S PUSHING THE ODDS!" : GOTO 1410
    goto Lbl_01410;

  Lbl_01400:
    // 01400 IF D<25 THEN PRINT "FRESH OUT OF TRAINING, EH?"
    if(D_int<25) {
    }

  Lbl_01410:
    // 01410 PRINT : IF D<160*RND(1) THEN 1440
    if(D_int<160*RND(1))goto Lbl_01440;
    // 01420 PRINT "DIRECT HIT!!!! "INT(100*RND(1))"KILLED."
    b2c_printf("Direct hit!!!! Killed.\n");
    // 01430 PRINT "MISSION SUCCESSFUL." : GOTO 1600
    goto Lbl_01600;

  Lbl_01440:
    // 01440 PRINT "MISSED TARGET BY"INT(2+30*RND(1))"MILES!"
    b2c_printf("Missed target byMiles!\n");
    // 01450 PRINT "NOW YOU'RE REALLY IN FOR IT !!" : PRINT
    b2c_printf("");

  Lbl_01460:
    // 01460 INPUT "DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)";R
    // Start of Basic INPUT statement 01460
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01460
    // 01470 IF R>0 AND R<4 THEN 1490
    if(R_int>0&&R_int<4)goto Lbl_01490;
    // 01480 PRINT "TRY AGAIN..." : GOTO 1460
    goto Lbl_01460;

  Lbl_01490:
    // 01490 PRINT : T=0 : IF R=2 THEN 1530
    if(R_int==2)goto Lbl_01530;
    // 01500 INPUT "WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)";S
    // Start of Basic INPUT statement 01500
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01500
    // 01510 IF S<10 THEN PRINT "YOU LIE, BUT YOU'LL PAY...": GOTO 1560
    goto Lbl_01560;

  Lbl_01520:
    // 01520 PRINT
    b2c_printf("");

  Lbl_01530:
    // 01530 PRINT : IF R>1 THEN T=35
    if(R_int>1) {
    }
    // 01540 IF S+T>100*RND(1) THEN 1560
    if(S_int+T_int>100*RND(1))goto Lbl_01560;
    // 01550 PRINT "YOU MADE IT THROUGH TREMENDOUS FLAK!!" : GOTO 1600
    goto Lbl_01600;

  Lbl_01560:
    // 01560 PRINT "* * * * BOOM * * * *"
    b2c_printf("* * * * boom * * * *\n");
    // 01570 PRINT "YOU HAVE BEEN SHOT DOWN....."
    b2c_printf("You have been shot down.....\n");
    // 01580 PRINT "DEARLY BELOVED, WE ARE GATHERED HERE TODAY TO PAY OUR"
    b2c_printf("Dearly beloved, we are gathered here today to pay our\n");
    // 01590 PRINT "LAST TRIBUTE..."
    b2c_printf("Last tribute...\n");

  Lbl_01600:
    // 01600 PRINT:PRINT:PRINT:INPUT "ANOTHER MISSION (Y OR N)";U$
    // Start of Basic INPUT statement 01600
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""ANOTHER MISSION (Y OR N)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&U_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01600
    // 01610 IF U$="Y" THEN 1000
    if(strcmp(U_str,"Y")==0)goto Lbl_01000;
    // 01620 PRINT "CHICKEN !!!" : PRINT : END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
