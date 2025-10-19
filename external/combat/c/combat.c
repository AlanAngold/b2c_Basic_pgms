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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
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
    // 01000 PRINT TAB(33);"COMBAT"
    b2c_printf("Combat\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 PRINT "I AM AT WAR WITH YOU.": PRINT "WE HAVE 72000 SOLDIERS APIECE."
    b2c_printf("We have 72000 soldiers apiece.\n");

  Lbl_01040:
    // 01040 PRINT:PRINT "DISTRIBUTE YOUR FORCES."
    b2c_printf("Distribute your forces.\n");
    // 01050 PRINT ,"ME","  YOU"
    b2c_printf("Me  you\n");
    // 01060 PRINT "ARMY",30000,
    b2c_printf("Army0000");
    // 01070 INPUT A
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
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01070
    // 01080 PRINT "NAVY",20000,
    b2c_printf("Navy0000");
    // 01090 INPUT B
    // Start of Basic INPUT statement 01090
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01090
    // 01100 PRINT "A. F.",22000,
    b2c_printf("A. F.2000");
    // 01110 INPUT C
    // Start of Basic INPUT statement 01110
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01110
    // 01120 IF A+B+C>72000 THEN 1040
    if(A_int+B_int+C_int>72000)goto Lbl_01040;
    // 01130 D=30000
    D_int = 30000;
    // 01140 E=20000
    E_int = 20000;
    // 01150 F=22000
    F_int = 22000;
    // 01160 PRINT "YOU ATTACK FIRST. TYPE (1) FOR ARMY; (2) FOR NAVY;"
    b2c_printf("You attack first. Type (1) for army; (2) for navy;\n");
    // 01170 PRINT "AND (3) FOR AIR FORCE."
    b2c_printf("And (3) for air force.\n");
    // 01180 INPUT Y
    // Start of Basic INPUT statement 01180
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Y_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01180

  Lbl_01190:
    // 01190 PRINT "HOW MANY MEN"
    b2c_printf("How many men\n");
    // 01200 INPUT X
    // Start of Basic INPUT statement 01200
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
    }; // End of Basic INPUT statement 01200
    // 01210 IF X<0 THEN 1190
    if(X_int<0)goto Lbl_01190;
    // 01220 ON Y GOTO 1230,1340,1500
    switch((int)(Y_int)){
        case 1: goto Lbl_01230;
        case 2: goto Lbl_01340;
        case 3: goto Lbl_01500;
        default: break; 
    };

  Lbl_01230:
    // 01230 IF X>A THEN 1190
    if(X_int>A_int)goto Lbl_01190;
    // 01240 IF X<A/3 THEN 1270
    if(X_int<A_int/3)goto Lbl_01270;
    // 01250 IF X<2*A/3 THEN 1300
    if(X_int<2*A_int/3)goto Lbl_01300;
    // 01260 GOTO 1440
    goto Lbl_01440;

  Lbl_01270:
    // 01270 PRINT "YOU LOST";X;"MEN FROM YOUR ARMY."
    b2c_printf("You lost %d You lostMen from your army.\n",X_int);
    // 01280 A=INT(A-X)
    A_int = INT(A_int-X_int);
    // 01290 GOTO 1670
    goto Lbl_01670;

  Lbl_01300:
    // 01300 PRINT "YOU LOST";INT(X/3);"MEN, BUT I LOST ";INT(2*D/3)
    b2c_printf("You lostMen, but i lost ");
    // 01310 A=INT(A-X/3)
    A_int = INT(A_int-X_int/3);
    // 01320 D=0
    D_int = 0;
    // 01330 GOTO 1670 
    goto Lbl_01670;

  Lbl_01340:
    // 01340 IF X>B THEN 1190
    if(X_int>B_int)goto Lbl_01190;
    // 01350 IF X<E/3 THEN 1380
    if(X_int<E_int/3)goto Lbl_01380;
    // 01360 IF X<2*E/3 THEN 1410
    if(X_int<2*E_int/3)goto Lbl_01410;
    // 01370 GOTO 1440
    goto Lbl_01440;

  Lbl_01380:
    // 01380 PRINT "YOUR ATTACK WAS STOPPED!"
    b2c_printf("Your attack was stopped!\n");
    // 01390 B=INT(B-X)
    B_int = INT(B_int-X_int);
    // 01400 GOTO 1670
    goto Lbl_01670;

  Lbl_01410:
    // 01410 PRINT "YOU DESTROYED";INT(2*E/3);"OF MY ARMY."
    b2c_printf("You destroyedOf my army.\n");
    // 01420 E=INT(E/3)
    E_int = INT(E_int/3);
    // 01430 GOTO 1670
    goto Lbl_01670;

  Lbl_01440:
    // 01440 PRINT "YOU SUNK ONE OF MY PATROL BOATS, BUT I WIPED OUT TWO"
    b2c_printf("You sunk one of my patrol boats, but i wiped out two\n");
    // 01450 PRINT "OF YOUR AIR FORCE BASES AND 3 ARMY BASES."
    b2c_printf("Of your air force bases and 3 army bases.\n");
    // 01460 A=INT(A/3)
    A_int = INT(A_int/3);
    // 01470 C=INT(C/3)
    C_int = INT(C_int/3);
    // 01480 E=INT(2*E/3)
    E_int = INT(2*E_int/3);
    // 01490 GOTO 1670
    goto Lbl_01670;

  Lbl_01500:
    // 01500 IF X>C THEN 1190
    if(X_int>C_int)goto Lbl_01190;
    // 01510 IF X<C/3 THEN 1540
    if(X_int<C_int/3)goto Lbl_01540;
    // 01520 IF X<2*C/3 THEN 1570
    if(X_int<2*C_int/3)goto Lbl_01570;
    // 01530 GOTO 1620
    goto Lbl_01620;

  Lbl_01540:
    // 01540 PRINT "YOUR ATTACK WAS WIPED OUT."
    b2c_printf("Your attack was wiped out.\n");
    // 01550 C=INT(C-X)
    C_int = INT(C_int-X_int);
    // 01560 GOTO 1670
    goto Lbl_01670;

  Lbl_01570:
    // 01570 PRINT "WE HAD A DOGFIGHT. YOU WON - AND FINISHED YOUR MISSION."
    b2c_printf("We had a dogfight. You won - and finished your mission.\n");
    // 01580 D=INT(2*D/3)
    D_int = INT(2*D_int/3);
    // 01590 E=INT(E/3)
    E_int = INT(E_int/3);
    // 01600 F=INT(F/3)
    F_int = INT(F_int/3);
    // 01610 GOTO 1670
    goto Lbl_01670;

  Lbl_01620:
    // 01620 PRINT "YOU WIPED OUT ONE OF MY ARMY PATROLS, BUT I DESTROYED"
    b2c_printf("You wiped out one of my army patrols, but i destroyed\n");
    // 01630 PRINT "TWO NAVY BASES AND BOMBED THREE ARMY BASES."
    b2c_printf("Two navy bases and bombed three army bases.\n");
    // 01640 A=INT(A/4)
    A_int = INT(A_int/4);
    // 01650 B=INT(B/3)
    B_int = INT(B_int/3);
    // 01660 D=INT(2*D/3)
    D_int = INT(2*D_int/3);

  Lbl_01670:
    // 01670 PRINT
    b2c_printf("");
    // 01680 PRINT,"YOU","ME"
    b2c_printf("YouMe\n");
    // 01690 PRINT "ARMY",A,D
    b2c_printf("Army %d Army %d \n",A_int,D_int);
    // 01700 PRINT "NAVY",B,E
    b2c_printf("Navy %d Navy %d \n",B_int,E_int);
    // 01710 PRINT "A. F.",C,F
    b2c_printf("A. F. %d A. F. %d \n",C_int,F_int);
    // 01720 PRINT "WHAT IS YOUR NEXT MOVE?"
    b2c_printf("What is your next move?\n");
    // 01730 PRINT "ARMY=1  NAVY=2  AIR FORCE=3"
    b2c_printf("Army=1  navy=2  air force=3\n");
    // 01740 INPUT G
    // Start of Basic INPUT statement 01740
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
    }; // End of Basic INPUT statement 01740

  Lbl_01750:
    // 01750 PRINT "HOW MANY MEN"
    b2c_printf("How many men\n");
    // 01760 INPUT T
    // Start of Basic INPUT statement 01760
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&T_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01760
    // 01770 IF T<0 THEN 1750
    if(T_int<0)goto Lbl_01750;
    // 01780 ON G GOTO 1790,1870,2000
    switch((int)(G_int)){
        case 1: goto Lbl_01790;
        case 2: goto Lbl_01870;
        case 3: goto Lbl_02000;
        default: break; 
    };

  Lbl_01790:
    // 01790 IF T>A THEN 1750
    if(T_int>A_int)goto Lbl_01750;
    // 01800 IF T<D/2 THEN 1840
    if(T_int<D_int/2)goto Lbl_01840;
    // 01810 PRINT "YOU DESTROYED MY ARMY!"
    b2c_printf("You destroyed my army!\n");
    // 01820 D=0
    D_int = 0;
    // 01830 GOTO 2120
    goto Lbl_02120;

  Lbl_01840:
    // 01840 PRINT "I WIPED OUT YOUR ATTACK!"
    b2c_printf("I wiped out your attack!\n");
    // 01850 A=A-T
    A_int = A_int-T_int;
    // 01860 GOTO 2120
    goto Lbl_02120;

  Lbl_01870:
    // 01870 IF T>B THEN 1750 
    if(T_int>B_int)goto Lbl_01750;
    // 01880 IF T<E/2 THEN 1900
    if(T_int<E_int/2)goto Lbl_01900;
    // 01890 GOTO 1950
    goto Lbl_01950;

  Lbl_01900:
    // 01900 PRINT "I SUNK TWO OF YOUR BATTLESHIPS, AND MY AIR FORCE"
    b2c_printf("I sunk two of your battleships, and my air force\n");
    // 01910 PRINT "WIPED OUT YOUR UNGAURDED CAPITOL."
    b2c_printf("Wiped out your ungaurded capitol.\n");
    // 01920 A=A/4
    A_int = A_int/4;
    // 01930 B=B/2
    B_int = B_int/2;
    // 01940 GOTO 2120
    goto Lbl_02120;

  Lbl_01950:
    // 01950 PRINT "YOUR NAVY SHOT DOWN THREE OF MY XIII PLANES,"
    b2c_printf("Your navy shot down three of my xiii planes,\n");
    // 01960 PRINT "AND SUNK THREE BATTLESHIPS."
    b2c_printf("And sunk three battleships.\n");
    // 01970 F=2*F/3
    F_int = 2*F_int/3;
    // 01980 E=(E/2)
    E_int = (E_int/2);
    // 01990 GOTO 2120
    goto Lbl_02120;

  Lbl_02000:
    // 02000 IF T>C THEN 1750 
    if(T_int>C_int)goto Lbl_01750;
    // 02010 IF T>F/2 THEN 2030 
    if(T_int>F_int/2)goto Lbl_02030;
    // 02020 GOTO 2090
    goto Lbl_02090;

  Lbl_02030:
    // 02030 PRINT "MY NAVY AND AIR FORCE IN A COMBINED ATTACK LEFT"
    b2c_printf("My navy and air force in a combined attack left\n");
    // 02040 PRINT "YOUR COUNTRY IN SHAMBLES."
    b2c_printf("Your country in shambles.\n");
    // 02050 A=A/3
    A_int = A_int/3;
    // 02060 B=B/3
    B_int = B_int/3;
    // 02070 C=C/3
    C_int = C_int/3;
    // 02080 GOTO 2120
    goto Lbl_02120;

  Lbl_02090:
    // 02090 PRINT "ONE OF YOUR PLANES CRASHED INTO MY HOUSE. I AM DEAD."
    b2c_printf("One of your planes crashed into my house. I am dead.\n");
    // 02100 PRINT "MY COUNTRY FELL APART."
    b2c_printf("My country fell apart.\n");
    // 02110 GOTO 2190
    goto Lbl_02190;

  Lbl_02120:
    // 02120 PRINT
    b2c_printf("");
    // 02130 PRINT "FROM THE RESULTS OF BOTH OF YOUR ATTACKS,"
    b2c_printf("From the results of both of your attacks,\n");
    // 02140 IF A+B+C>3/2*(D+E+F) THEN 2190
    if(A_int+B_int+C_int>3/2*(D_int+E_int+F_int))goto Lbl_02190;
    // 02150 IF A+B+C<2/3*(D+E+F) THEN 2210
    if(A_int+B_int+C_int<2/3*(D_int+E_int+F_int))goto Lbl_02210;
    // 02160 PRINT "THE TREATY OF PARIS CONCLUDED THAT WE TAKE OUR"
    b2c_printf("The treaty of paris concluded that we take our\n");
    // 02170 PRINT "RESPECTIVE COUNTRIES AND LIVE IN PEACE."
    b2c_printf("Respective countries and live in peace.\n");
    // 02180 GOTO 2230
    goto Lbl_02230;

  Lbl_02190:
    // 02190 PRINT "YOU WON, OH! SHUCKS!!!!"
    b2c_printf("You won, oh! Shucks!!!!\n");
    // 02200 GOTO 2230
    goto Lbl_02230;

  Lbl_02210:
    // 02210 PRINT "YOU LOST-I CONQUERED YOUR COUNTRY.  IT SERVES YOU"
    b2c_printf("You lost-i conquered your country.  It serves you\n");
    // 02220 PRINT "RIGHT FOR PLAYING THIS STUPID GAME!!!"
    b2c_printf("Right for playing this stupid game!!!\n");

  Lbl_02230:
    // 02230 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
