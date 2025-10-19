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
int    C0_int;                                    // Basic: C0 
int    C1_int;                                    // Basic: C1 
int    D_int;                                     // Basic: D 
int    D0_int;                                    // Basic: D0 
int    D1_int;                                    // Basic: D1 
int    D2_int;                                    // Basic: D2 
int    D3_int;                                    // Basic: D3 
int    D4_int;                                    // Basic: D4 
int    E_int;                                     // Basic: E 
int    E1_int;                                    // Basic: E1 
int    E2_int;                                    // Basic: E2 
int    E3_int;                                    // Basic: E3 
int    E4_int;                                    // Basic: E4 
int    F0_int;                                    // Basic: F0 
int    F3_int;                                    // Basic: F3 
char*  I_str;                                     // Basic: I$ 
int    K_int;                                     // Basic: K 
int    M_int;                                     // Basic: M 
char*  M_str;                                     // Basic: M$ 
int    N_int;                                     // Basic: N 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    N3_int;                                    // Basic: N3 
int    N4_int;                                    // Basic: N4 
int    N5_int;                                    // Basic: N5 
int    O_int;                                     // Basic: O 
int    P0_int;                                    // Basic: P0 
int    P1_int;                                    // Basic: P1 
int    R_int;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
int    S_int;                                     // Basic: S 
int    S0_int;                                    // Basic: S0 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    S9_int;                                    // Basic: S9 
int    U_int;                                     // Basic: U 
int    W_int;                                     // Basic: W 
char*  XX_str;                                    // Basic: XX$ 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03480();

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

void Routine_03480(){
    // 03480 PRINT:LINE INPUT "ENTER 'RETURN' TO CONTINUE. ";XX$
    // Start of Basic INPUT statement 03480
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""ENTER 'RETURN' TO CONTINUE. "");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&XX_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03480
    // 03490 PRINT CHR$(26)
    b2c_printf("");
    // 03500 GOTO 03510
    goto Lbl_03510;

  Lbl_03510:
    // 03510 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT CHR$(26);TAB(24);"DEEPSPACE"
    b2c_printf("Deepspace\n");
    // 01010 PRINT TAB(20);"CREATIVE COMPUTING"
    b2c_printf("Creative computing\n");
    // 01020 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    b2c_printf("Morristown, new jersey\n");
    // 01030 PRINT:PRINT
    b2c_printf("");
    // 01040 PRINT "THIS IS DEEPSPACE, A TACTICAL SIMULATION OF SHIP TO SHIP"
    b2c_printf("This is deepspace, a tactical simulation of ship to ship\n");
    // 01050 PRINT "COMBAT IN DEEP SPACE."
    b2c_printf("Combat in deep space.\n");
    // 01060 PRINT
    b2c_printf("");
    // 01070 PRINT "DO YOU WISH INSTRUCTIONS";:INPUT I$
    // Start of Basic INPUT statement 01070
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&I_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01070
    // 01080 IF LEFT$(I$,1)="N" THEN 1510
    if(LEFT$(I_str,1)=='N')goto Lbl_01510;
    // 01090 PRINT CHR$(26)
    b2c_printf("");
    // 01100 PRINT "YOU ARE ONE OF A GROUP OF CAPTAINS ASSIGNED TO PATROL A"
    b2c_printf("You are one of a group of captains assigned to patrol a\n");
    // 01110 PRINT "SECTION OF YOUR STAR EMPIRE'S BORDER AGAINST HOSTILE"
    b2c_printf("Section of your star empire's border against hostile\n");
    // 01120 PRINT "ALIENS. ALL YOUR ENCOUNTERS HERE WILL BE AGAINST HOSTILE"
    b2c_printf("Aliens. All your encounters here will be against hostile\n");
    // 01130 PRINT "VESSELS. YOU WILL FIRST BE REQUIRED TO SELECT A VESSEL"
    b2c_printf("Vessels. You will first be required to select a vessel\n");
    // 01140 PRINT "FROM ONE OF THREE TYPES, EACH WITH ITS OWN CHARACTERISTICS:"
    b2c_printf("From one of three types, each with its own characteristics:\n");
    // 01150 PRINT:PRINT "    TYPE","SPEED","CARGO SPACE","PROTECTION"
    b2c_printf("    typeSpeedCargo spaceProtection\n");
    // 01160 PRINT "   ------","-----","-----------","----------"
    b2c_printf("   --------------------------------\n");
    // 01170 PRINT "1- SCOUT"," 10X","     16","    1"
    b2c_printf("1- scout 10x     16    1\n");
    // 01180 PRINT "2- CRUISER","  4X","     24","    2"
    b2c_printf("2- cruiser  4x     24    2\n");
    // 01190 PRINT "3- BATTLESHIP","  2X","     30","    5"
    b2c_printf("3- battleship  2x     30    5\n");
    // 01200 PRINT:PRINT "SPEED IS GIVEN RELATIVE TO THE OTHER SHIPS."
    b2c_printf("Speed is given relative to the other ships.\n");
    // 01210 PRINT "CARGO SPACE IS IN UNITS OF SPACE ABOARD SHIP WHICH CAN BE"
    b2c_printf("Cargo space is in units of space aboard ship which can be\n");
    // 01220 PRINT "FILLED WITH WEAPONS."
    b2c_printf("Filled with weapons.\n");
    // 01230 PRINT "PROTECTION IS THE RELATIVE STRENGTH OF THE SHIP'S ARMOR"
    b2c_printf("Protection is the relative strength of the ship's armor\n");
    // 01240 PRINT "AND FORCE FIELDS."
    b2c_printf("And force fields.\n");
    // 01250 GOSUB 3480
    Routine_03480();
    // 01260 PRINT:PRINT "ONCE A SHIP HAS BEEN SELECTED, YOU WILL BE INSTRUCTED TO ARM"
    b2c_printf("Once a ship has been selected, you will be instructed to arm\n");
    // 01270 PRINT "IT WITH WEAPONRY FROM THE FOLLOWING LIST:"
    b2c_printf("It with weaponry from the following list:\n");
    // 01280 PRINT
    b2c_printf("");
    // 01290 PRINT "     TYPE                    CARGO SPACE    REL. STRENGTH"
    b2c_printf("     type                    cargo space    rel. Strength\n");
    // 01300 PRINT "    ------                   -----------    -------------"
    b2c_printf("    ------                   -----------    -------------\n");
    // 01310 PRINT "1- PHASER BANKS                   12                4"
    b2c_printf("1- phaser banks                   12                4\n");
    // 01320 PRINT "2- ANTI-MATTER MISSILE             4               20"
    b2c_printf("2- anti-matter missile             4               20\n");
    // 01330 PRINT "3- HYPERSPACE LANCE                4               16"
    b2c_printf("3- hyperspace lance                4               16\n");
    // 01340 PRINT "4- PHOTON TORPEDO                  2               10"
    b2c_printf("4- photon torpedo                  2               10\n");
    // 01350 PRINT "5- HYPERON NEUTRALIZATION FIELD   20                6"
    b2c_printf("5- hyperon neutralization field   20                6\n");
    // 01360 PRINT:PRINT "WEAPONS #1 & #5 CAN BE FIRED 100 TIMES EACH; ALL OTHERS CAN"
    b2c_printf("Weapons #1 & #5 can be fired 100 times each; all others can\n");
    // 01370 PRINT "BE FIRED ONCE FOR EACH ON BOARD."
    b2c_printf("Be fired once for each on board.\n");
    // 01380 PRINT
    b2c_printf("");
    // 01390 PRINT "A TYPICAL LOAD FOR A CRUISER MIGHT CONSIST OF:"
    b2c_printf("A typical load for a cruiser might consist of:\n");
    // 01400 PRINT "          1-#1 PHASER BANK          = 12"
    b2c_printf("          1-#1 phaser bank          = 12\n");
    // 01410 PRINT "          2-#3 HYPERSPACE LANCES    =  8"
    b2c_printf("          2-#3 hyperspace lances    =  8\n");
    // 01420 PRINT "          2-#4 PHOTON TORPEDOES     =  4"
    b2c_printf("          2-#4 photon torpedoes     =  4\n");
    // 01430 PRINT "                                  ---------"
    b2c_printf("                                  ---------\n");
    // 01440 PRINT "                              24 UNITS OF CARGO"
    b2c_printf("                              24 units of cargo\n");
    // 01450 GOSUB 3480
    Routine_03480();
    // 01460 PRINT " A WORD OF CAUTION: FIRING HIGH YIELD WEAPONS AT CLOSE (<100)"
    b2c_printf(" a word of caution: firing high yield weapons at close (<100)\n");
    // 01470 PRINT "RANGE CAN BE DANGEROUS TO YOUR SHIP AND MINIMAL DAMAGE CAN"
    b2c_printf("Range can be dangerous to your ship and minimal damage can\n");
    // 01480 PRINT "OCCUR AS FAR OUT AS 200 IN SOME CIRCUMSTANCES."
    b2c_printf("Occur as far out as 200 in some circumstances.\n");
    // 01490 PRINT:PRINT "RANGE IS GIVEN IN THOUSANDS OF KILOMETERS."
    b2c_printf("Range is given in thousands of kilometers.\n");
    // 01500 GOTO 1530
    goto Lbl_01530;

  Lbl_01510:
    // 01510 PRINT "DO YOU WISH A MANEUVER CHART";:INPUT M$
    // Start of Basic INPUT statement 01510
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&M_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01510
    // 01520 IF LEFT$(M$,1)="N" THEN 1640
    if(LEFT$(M_str,1)=='N')goto Lbl_01640;

  Lbl_01530:
    // 01530 PRINT
    b2c_printf("");
    // 01540 PRINT "     MANEUVER CHART":PRINT "     --------------"
    b2c_printf("     --------------\n");
    // 01550 PRINT " 1      FIRE PHASERS"
    b2c_printf(" 1      fire phasers\n");
    // 01560 PRINT " 2      FIRE ANTI-MATTER MISSILE"
    b2c_printf(" 2      fire anti-matter missile\n");
    // 01570 PRINT " 3      FIRE HYPERSPACE LANCE"
    b2c_printf(" 3      fire hyperspace lance\n");
    // 01580 PRINT " 4      FIRE PHOTON TORPEDO"
    b2c_printf(" 4      fire photon torpedo\n");
    // 01590 PRINT " 5      ACTIVE HYPERON NEUTRALIZATION FIELD"
    b2c_printf(" 5      active hyperon neutralization field\n");
    // 01600 PRINT " 6      SELF-DESTRUCT"
    b2c_printf(" 6      self-destruct\n");
    // 01610 PRINT " 7      CHANGE VELOCITY"
    b2c_printf(" 7      change velocity\n");
    // 01620 PRINT " 8      DISENGAGE"
    b2c_printf(" 8      disengage\n");
    // 01630 PRINT " 9      PROCEED"
    b2c_printf(" 9      proceed\n");

  Lbl_01640:
    // 01640 PRINT:PRINT "YOU HAVE A CHOICE OF THREE SYSTEMS TO PATROL."
    b2c_printf("You have a choice of three systems to patrol.\n");
    // 01650 PRINT "1 - ORION"
    b2c_printf("1 - orion\n");
    // 01660 PRINT "2 - DENEB"
    b2c_printf("2 - deneb\n");
    // 01670 PRINT "3 - ARCTURUS"
    b2c_printf("3 - arcturus\n");

  Lbl_01680:
    // 01680 PRINT "SELECT A SYSTEM (1-3)";:INPUT S9
    // Start of Basic INPUT statement 01680
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
    }; // End of Basic INPUT statement 01680
    // 01690 IF S9=1 THEN 3070
    if(S9_int==1)goto Lbl_03070;
    // 01700 IF S9=2 THEN 3120
    if(S9_int==2)goto Lbl_03120;
    // 01710 GOTO 3170
    goto Lbl_03170;

  Lbl_01720:
    // 01720 D0=0
    D0_int = 0;
    // 01730 D1=0
    D1_int = 0;
    // 01740 N1=0
    N1_int = 0;
    // 01750 N2=0
    N2_int = 0;
    // 01760 N3=0
    N3_int = 0;
    // 01770 N4=0
    N4_int = 0;
    // 01780 D=0
    D_int = 0;

  Lbl_01790:
    // 01790 PRINT "WHICH SPACECRAFT WOULD YOU LIKE (1-3)";:INPUT S
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
                (err += b2c_strtoi(&S_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01790
    // 01800 ON S GOTO 2490,2530,2570
    switch((int)(S_int)){
        case 1: goto Lbl_02490;
        case 2: goto Lbl_02530;
        case 3: goto Lbl_02570;
        default: break; 
    };
    // 01810 GOTO 1790
    goto Lbl_01790;

  Lbl_01820:
    // 01820 C=C0
    C_int = C0_int;

  Lbl_01830:
    // 01830 PRINT "YOU HAVE";C;"UNITS OF CARGO SPACE TO FILL WITH WEAPONRY."
    b2c_printf("You have %d You haveUnits of cargo space to fill with weaponry.\n",C_int);
    // 01840 PRINT "CHOOSE A WEAPON AND THE AMOUNT YOU WISH";:INPUT W,N
    // Start of Basic INPUT statement 01840
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&W_int,args,0)) ||
                (err += b2c_strtoi(&N_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01840
    // 01850 ON W GOTO 2610,2700,2790,2880,2970
    switch((int)(W_int)){
        case 1: goto Lbl_02610;
        case 2: goto Lbl_02700;
        case 3: goto Lbl_02790;
        case 4: goto Lbl_02880;
        case 5: goto Lbl_02970;
        default: break; 
    };
    // 01860 GOTO 1830
    goto Lbl_01830;

  Lbl_01870:
    // 01870 IF N*C1>C THEN 3220
    if(N_int*C1_int>C_int)goto Lbl_03220;
    // 01880 C=C-N*C1
    C_int = C_int-N_int*C1_int;
    // 01890 ON W GOTO 2680,2770,2860,2950
    switch((int)(W_int)){
        case 1: goto Lbl_02680;
        case 2: goto Lbl_02770;
        case 3: goto Lbl_02860;
        case 4: goto Lbl_02950;
        default: break; 
    };
    // 01900 GOTO 3050
    goto Lbl_03050;

  Lbl_01910:
    // 01910 IF C>1 THEN 1830
    if(C_int>1)goto Lbl_01830;
    // 01920 REM
    // 01930 S1=S0*RND(0)
    S1_int = S0_int*RND(0);
    // 01940 R=(3*RND(0)+5)*100
    R_int = (3*RND(0)+5)*100;

  Lbl_01950:
    // 01950 PRINT:PRINT "RANGE TO TARGET:";R
    b2c_printf("Range to target: %d \n",R_int);
    // 01960 PRINT "RELATIVE VELOCITY:";S1
    b2c_printf("Relative velocity: %d \n",S1_int);

  Lbl_01970:
    // 01970 PRINT "ACTION";:INPUT M
    // Start of Basic INPUT statement 01970
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01970
    // 01980 ON M GOTO 2630,2720,2810,2900,3000,2360,2090,3430
    switch((int)(M_int)){
        case 1: goto Lbl_02630;
        case 2: goto Lbl_02720;
        case 3: goto Lbl_02810;
        case 4: goto Lbl_02900;
        case 5: goto Lbl_03000;
        case 6: goto Lbl_02360;
        case 7: goto Lbl_02090;
        case 8: goto Lbl_03430;
        default: break; 
    };

  Lbl_01990:
    // 01990 IF R<500 THEN 2200
    if(R_int<500)goto Lbl_02200;

  Lbl_02000:
    // 02000 IF S1>0 THEN 2030
    if(S1_int>0)goto Lbl_02030;
    // 02010 R=R+(S1*8.3)^1.25
    R_int = R_int+FPower((S1_int*8.3),1.25);
    // 02020 GOTO 2040
    goto Lbl_02040;

  Lbl_02030:
    // 02030 R=R-(S1*8.3)^1.25
    R_int = R_int-FPower((S1_int*8.3),1.25);

  Lbl_02040:
    // 02040 IF R>1500 THEN 3280
    if(R_int>1500)goto Lbl_03280;
    // 02050 IF R>0 THEN 2070
    if(R_int>0)goto Lbl_02070;
    // 02060 R=-R
    R_int = R_int;

  Lbl_02070:
    // 02070 PRINT
    b2c_printf("");
    // 02080 GOTO 1950
    goto Lbl_01950;

  Lbl_02090:
    // 02090 PRINT "CHANGE TO BE EFFECTED";:INPUT S2
    // Start of Basic INPUT statement 02090
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S2_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02090
    // 02100 IF (S1+S2)>S0 THEN 3240
    if((S1_int+S2_int)>S0_int)goto Lbl_03240;
    // 02110 S1=S1+S2
    S1_int = S1_int+S2_int;
    // 02120 GOTO 1950
    goto Lbl_01950;

  Lbl_02130:
    // 02130 F0=P1*(Z/R)^1.5
    F0_int = P1_int*FPower((Z_int/R_int),1.5);
    // 02140 REM
    // 02150 D0=(2*F0+3*F0*RND(0))/5
    D0_int = (2*F0_int+3*F0_int*RND(0))/5;
    // 02160 D=D+D0
    D_int = D_int+D0_int;
    // 02170 PRINT "SCANNERS REPORT ENEMY DAMAGE NOW:";D
    b2c_printf("Scanners report enemy damage now: %d \n",D_int);
    // 02180 IF D>99 THEN 3400
    if(D_int>99)goto Lbl_03400;
    // 02190 GOTO 2220
    goto Lbl_02220;

  Lbl_02200:
    // 02200 D0=0
    D0_int = 0;
    // 02210 REM

  Lbl_02220:
    // 02220 K=E1+E2*RND(0)
    K_int = E1_int+E2_int*RND(0);
    // 02230 REM
    // 02240 E=E3+E4*RND(0)+5/P0*RND(0)
    E_int = E3_int+E4_int*RND(0)+5/P0_int*RND(0);
    // 02250 REM
    // 02260 F3=E*(K/R)^1.85
    F3_int = E_int*FPower((K_int/R_int),1.85);
    // 02270 D2=(3*F3+3*F3*RND(0))/5.5
    D2_int = (3*F3_int+3*F3_int*RND(0))/5.5;
    // 02280 D1=D1+D2
    D1_int = D1_int+D2_int;
    // 02290 IF (Z*D0)/(R*500)>2.2 THEN 2320
    if((Z_int*D0_int)/(R_int*500)>2.2)goto Lbl_02320;
    // 02300 D3=D0*2/(R^2*P0)
    D3_int = D0_int*2/(IPower(R_int,2)*P0_int);
    // 02310 D1=D1+D3
    D1_int = D1_int+D3_int;

  Lbl_02320:
    // 02320 PRINT "DAMAGE CONTROL REPORTS YOUR VESSEL DAMAGE AT:";D1
    b2c_printf("Damage control reports your vessel damage at: %d \n",D1_int);
    // 02330 IF D1>99 THEN 3420
    if(D1_int>99)goto Lbl_03420;
    // 02340 IF D>99 THEN 3430
    if(D_int>99)goto Lbl_03430;
    // 02350 GOTO 2000
    goto Lbl_02000;

  Lbl_02360:
    // 02360 PRINT "SELF DESTRUCT FAILSAFE ACTIVATED!!"
    b2c_printf("Self destruct failsafe activated!!\n");
    // 02370 PRINT "INPUT 1 TO RELEASE FAILSAFE";:INPUT U
    // Start of Basic INPUT statement 02370
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&U_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02370
    // 02380 IF U=1 THEN 2400
    if(U_int==1)goto Lbl_02400;
    // 02390 GOTO 1990
    goto Lbl_01990;

  Lbl_02400:
    // 02400 PRINT "SELF DESTRUCT ACCOMPLISHED."
    b2c_printf("Self destruct accomplished.\n");
    // 02410 IF R>60 THEN 2440
    if(R_int>60)goto Lbl_02440;

  Lbl_02420:
    // 02420 PRINT "ENEMY VESSEL ALSO DESTROYED."
    b2c_printf("Enemy vessel also destroyed.\n");
    // 02430 GOTO 3430
    goto Lbl_03430;

  Lbl_02440:
    // 02440 D4=3200/R
    D4_int = 3200/R_int;
    // 02450 D=D+D4
    D_int = D_int+D4_int;
    // 02460 IF D>99 THEN 2420
    if(D_int>99)goto Lbl_02420;
    // 02470 PRINT "ENEMY VESSEL SURVIVES WITH";D;"DAMAGE."
    b2c_printf("Enemy vessel survives with %d Enemy vessel survives withDamage.\n",D_int);
    // 02480 GOTO 3430
    goto Lbl_03430;

  Lbl_02490:
    // 02490 S0=10
    S0_int = 10;
    // 02500 C0=16
    C0_int = 16;
    // 02510 P0=1
    P0_int = 1;
    // 02520 GOTO 1820
    goto Lbl_01820;

  Lbl_02530:
    // 02530 S0=4
    S0_int = 4;
    // 02540 C0=24
    C0_int = 24;
    // 02550 P0=2
    P0_int = 2;
    // 02560 GOTO 1820
    goto Lbl_01820;

  Lbl_02570:
    // 02570 S0=2
    S0_int = 2;
    // 02580 C0=30
    C0_int = 30;
    // 02590 P0=5
    P0_int = 5;
    // 02600 GOTO 1820
    goto Lbl_01820;

  Lbl_02610:
    // 02610 C1=12
    C1_int = 12;
    // 02620 GOTO 1870
    goto Lbl_01870;

  Lbl_02630:
    // 02630 P1=4
    P1_int = 4;
    // 02640 IF N1=0 THEN 2850
    if(N1_int==0)goto Lbl_02850;
    // 02650 N1=N1-1
    N1_int = N1_int-1;
    // 02660 Z=200
    Z_int = 200;
    // 02670 GOTO 2130
    goto Lbl_02130;

  Lbl_02680:
    // 02680 N1=N1+N
    N1_int = N1_int+N_int;
    // 02690 GOTO 1910
    goto Lbl_01910;

  Lbl_02700:
    // 02700 C1=4
    C1_int = 4;
    // 02710 GOTO 1870
    goto Lbl_01870;

  Lbl_02720:
    // 02720 P1=20
    P1_int = 20;
    // 02730 IF N2=0 THEN 3320
    if(N2_int==0)goto Lbl_03320;
    // 02740 N2=N2-1
    N2_int = N2_int-1;
    // 02750 Z=500
    Z_int = 500;
    // 02760 GOTO 2130
    goto Lbl_02130;

  Lbl_02770:
    // 02770 N2=N2+N
    N2_int = N2_int+N_int;
    // 02780 GOTO 1910
    goto Lbl_01910;

  Lbl_02790:
    // 02790 C1=4
    C1_int = 4;
    // 02800 GOTO 1870
    goto Lbl_01870;

  Lbl_02810:
    // 02810 P1=16
    P1_int = 16;
    // 02820 IF N3=0 THEN 3340
    if(N3_int==0)goto Lbl_03340;
    // 02830 N3=N3-1
    N3_int = N3_int-1;
    // 02840 Z=550
    Z_int = 550;

  Lbl_02850:
    // 02850 GOTO 2130
    goto Lbl_02130;

  Lbl_02860:
    // 02860 N3=N3+N
    N3_int = N3_int+N_int;
    // 02870 GOTO 1910
    goto Lbl_01910;

  Lbl_02880:
    // 02880 C1=2
    C1_int = 2;
    // 02890 GOTO 1870
    goto Lbl_01870;

  Lbl_02900:
    // 02900 P1=10
    P1_int = 10;
    // 02910 IF N4=O THEN 3360
    if(N4_int==O_int)goto Lbl_03360;
    // 02920 N4=N4-1
    N4_int = N4_int-1;
    // 02930 Z=400
    Z_int = 400;
    // 02940 GOTO 2130
    goto Lbl_02130;

  Lbl_02950:
    // 02950 N4=N4+N
    N4_int = N4_int+N_int;
    // 02960 GOTO 1910
    goto Lbl_01910;

  Lbl_02970:
    // 02970 C1=.2
    C1_int = 0.2;
    // 02980 N=100
    N_int = 100;
    // 02990 GOTO 1870
    goto Lbl_01870;

  Lbl_03000:
    // 03000 P1=6
    P1_int = 6;
    // 03010 IF N5=0 THEN 3380
    if(N5_int==0)goto Lbl_03380;
    // 03020 N5=N5-1
    N5_int = N5_int-1;
    // 03030 Z=250
    Z_int = 250;
    // 03040 GOTO 2130
    goto Lbl_02130;

  Lbl_03050:
    // 03050 N5=N5+N
    N5_int = N5_int+N_int;
    // 03060 GOTO 1910
    goto Lbl_01910;

  Lbl_03070:
    // 03070 E1=150
    E1_int = 150;
    // 03080 E2=500
    E2_int = 500;
    // 03090 E3=3
    E3_int = 3;
    // 03100 E4=4
    E4_int = 4;
    // 03110 GOTO 1720
    goto Lbl_01720;

  Lbl_03120:
    // 03120 E1=200
    E1_int = 200;
    // 03130 E2=350
    E2_int = 350;
    // 03140 E3=4
    E3_int = 4;
    // 03150 E4=3
    E4_int = 3;
    // 03160 GOTO 1720
    goto Lbl_01720;

  Lbl_03170:
    // 03170 E1=150
    E1_int = 150;
    // 03180 E2=400
    E2_int = 400;
    // 03190 E3=5
    E3_int = 5;
    // 03200 E4=2
    E4_int = 2;
    // 03210 GOTO 1720
    goto Lbl_01720;

  Lbl_03220:
    // 03220 PRINT "NOT ENOUGH SPACE. RESELECT."
    b2c_printf("Not enough space. Reselect.\n");
    // 03230 GOTO 1830
    goto Lbl_01830;

  Lbl_03240:
    // 03240 PRINT "CHANGE BEYOND MAXIMUM POSSIBLE."
    b2c_printf("Change beyond maximum possible.\n");
    // 03250 PRINT "INCREASING TO MAXIMUM."
    b2c_printf("Increasing to maximum.\n");
    // 03260 S1=S0
    S1_int = S0_int;
    // 03270 GOTO 2000
    goto Lbl_02000;

  Lbl_03280:
    // 03280 PRINT "OUT OF SENSOR RANGE. AUTOMATIC DISENGAGE."
    b2c_printf("Out of sensor range. Automatic disengage.\n");
    // 03290 GOTO 3430
    goto Lbl_03430;

  Lbl_03300:
    // 03300 PRINT "SELECT ANOTHER COURSE OF ACTION."
    b2c_printf("Select another course of action.\n");
    // 03310 GOTO 1970
    goto Lbl_01970;

  Lbl_03320:
    // 03320 PRINT " ALL ANTI-MATTER MISSLES EXPENDED."
    b2c_printf(" all anti-matter missles expended.\n");
    // 03330 GOTO 3300
    goto Lbl_03300;

  Lbl_03340:
    // 03340 PRINT "ALL HYPERSPACE LANCES EXPENDED."
    b2c_printf("All hyperspace lances expended.\n");
    // 03350 GOTO 3300
    goto Lbl_03300;

  Lbl_03360:
    // 03360 PRINT "ALL PHOTON TORPEDO TUBES EMPTY."
    b2c_printf("All photon torpedo tubes empty.\n");
    // 03370 GOTO 3300
    goto Lbl_03300;

  Lbl_03380:
    // 03380 PRINT "HYPERON NEUTRALIZATION FIELD DRAINED."
    b2c_printf("Hyperon neutralization field drained.\n");
    // 03390 GOTO 3300
    goto Lbl_03300;

  Lbl_03400:
    // 03400 PRINT "ENEMY VESSEL DESTROYED!"
    b2c_printf("Enemy vessel destroyed!\n");
    // 03410 GOTO 2220
    goto Lbl_02220;

  Lbl_03420:
    // 03420 PRINT "YOUR VESSEL HAS BEEN DESTROYED!"
    b2c_printf("Your vessel has been destroyed!\n");

  Lbl_03430:
    // 03430 PRINT "ANOTHER BATTLE";:INPUT R$
    // Start of Basic INPUT statement 03430
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&R_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03430
    // 03440 IF LEFT$(R$,1)="Y" THEN 1680
    if(LEFT$(R_str,1)=='Y')goto Lbl_01680;
    // 03450 PRINT:PRINT "TRY AGAIN LATER!":PRINT
    b2c_printf("");
    // 03460 GOTO 3470
    goto Lbl_03470;

  Lbl_03470:
    // 03470 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
