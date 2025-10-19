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
char*  A_str;                                     // Basic: A$ 
int    B_int;                                     // Basic: B 
char*  B_str;                                     // Basic: B$ 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
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
    // 01000 RANDOMIZE
    RANDOMIZE();
    // 01010 PRINT TAB(26);"JOUST"
    b2c_printf("Joust\n");
    // 01020 PRINT TAB(20);"CREATIVE COMPUTING"
    b2c_printf("Creative computing\n");
    // 01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    b2c_printf("Morristown, new jersey\n");
    // 01040 PRINT
    b2c_printf("");
    // 01050 PRINT
    b2c_printf("");
    // 01060 PRINT
    b2c_printf("");
    // 01070 PRINT"WHAT IS YOUR NAME, PLEASE";
    b2c_printf("What is your name, please");
    // 01080 INPUT A$
    // Start of Basic INPUT statement 01080
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
    }; // End of Basic INPUT statement 01080
    // 01090 PRINT
    b2c_printf("");
    // 01100 PRINT"SIR ";A$;" YOU ARE A MEDIEVAL KNIGHT IN A JOUSTING TOURNAMENT."
    b2c_printf("Sir %sSir  you are a medieval knight in a jousting tournament.\n",A_str);
    // 01110 PRINT"THE PRIZE TO THE WINNER IS THE PRINCESS' HAND IN MARRIAGE."
    b2c_printf("The prize to the winner is the princess' hand in marriage.\n");
    // 01120 PRINT"TO WIN, YOU MUST BEAT FOUR OTHER KNIGHTS."
    b2c_printf("To win, you must beat four other knights.\n");
    // 01130 PRINT"TO JOUST, YOU PICK AN AIMING POINT FOR THE LANCE,"
    b2c_printf("To joust, you pick an aiming point for the lance,\n");
    // 01140 PRINT"AND THEN ONE OF FROM 3 TO 6 DIFFERENT POSSIBLE DEFENCE POSITIONS."
    b2c_printf("And then one of from 3 to 6 different possible defence positions.\n");
    // 01150 PRINT"THE AIMING POINTS ARE:"
    b2c_printf("The aiming points are:\n");
    // 01160 PRINT"1 - HELM"
    b2c_printf("1 - helm\n");
    // 01170 PRINT"2 - UPPER LEFT (OF SHIELD)"
    b2c_printf("2 - upper left (of shield)\n");
    // 01180 PRINT"3 - UPPER MIDDLE"
    b2c_printf("3 - upper middle\n");
    // 01190 PRINT"4 - UPPER RIGHT"
    b2c_printf("4 - upper right\n");
    // 01200 PRINT"5 - LOWER LEFT"
    b2c_printf("5 - lower left\n");
    // 01210 PRINT"6 - LOWER MIDDLE"
    b2c_printf("6 - lower middle\n");
    // 01220 PRINT"7 - LOWER RIGHT"
    b2c_printf("7 - lower right\n");
    // 01230 PRINT"8 - BASE OF SHIELD"
    b2c_printf("8 - base of shield\n");
    // 01240 PRINT
    b2c_printf("");
    // 01250 PRINT"IF YOU BREAK A LANCE OR LOSE A HELM, YOU WILL BE GIVEN ANOTHER."
    b2c_printf("If you break a lance or lose a helm, you will be given another.\n");
    // 01260 PRINT"GOOD LUCK, SIR!"
    b2c_printf("Good luck, sir!\n");

  Lbl_01270:
    // 01270 PRINT
    b2c_printf("");
    // 01280 FOR A = 1 TO 4
    for(A_int=1;A_int<=4;A_int++){
        // 01290 ON A GOTO 1320,1340,1360,1380
        switch((int)(A_int)){
            case 1: goto Lbl_01320;
            case 2: goto Lbl_01340;
            case 3: goto Lbl_01360;
            case 4: goto Lbl_01380;
            default: break; 
        };
        // 01300 REM OFF YOU GO TO THE FOUR JOUSTS
        // 01310 REM ------------------------------------------------

  Lbl_01320:
        // 01320 PRINT"THIS IS YOUR FIRST JOUST. YOU ARE UP AGAINST THE GOLD KNIGHT."
        b2c_printf("This is your first joust. You are up against the gold knight.\n");
        // 01330 GOTO 1400
        goto Lbl_01400;

  Lbl_01340:
        // 01340 PRINT"THIS IS YOUR SECOND JOUST. YOUR OPPONENT IS THE SILVER KNIGHT."
        b2c_printf("This is your second joust. Your opponent is the silver knight.\n");
        // 01350 GOTO 1400
        goto Lbl_01400;

  Lbl_01360:
        // 01360 PRINT"YOU ARE DOING WELL! YOUR THIRD JOUST IS AGAINST THE RED KNIGHT."
        b2c_printf("You are doing well! Your third joust is against the red knight.\n");
        // 01370 GOTO 1400
        goto Lbl_01400;

  Lbl_01380:
        // 01380 PRINT"THIS IS YOUR FINAL TEST!! IF YOU WIN THIS ONE, THE PRINCESS"
        b2c_printf("This is your final test!! If you win this one, the princess\n");
        // 01390 PRINT"IS YOURS!!! THIS FIGHT IS AGAINST THE FIERCE BLACK KNIGHT!!!!"
        b2c_printf("Is yours!!! This fight is against the fierce black knight!!!!\n");

  Lbl_01400:
        // 01400 PRINT "YOUR AIMING POINT(1-8) OR 0 {ZERO} FOR HELP";
        b2c_printf("Your aiming point(1-8) or 0 {zero} for help");
        // 01410 INPUT B
        // Start of Basic INPUT statement 01410
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
        }; // End of Basic INPUT statement 01410
        // 01420 IF B = 0 THEN 2600
        if(B_int==0)goto Lbl_02600;
        // 01430 IF B < 1 THEN 1400
        if(B_int<1)goto Lbl_01400;
        // 01440 IF B > 8 THEN 1400
        if(B_int>8)goto Lbl_01400;
        // 01450 PRINT"YOU MAY USE ONE OF THESE DEFENCES:"
        b2c_printf("You may use one of these defences:\n");
        // 01460 ON B  GOTO 1510,1470,1510,1560,1470,1490,1470,1540
        switch((int)(B_int)){
            case 1: goto Lbl_01470;
            case 2: goto Lbl_01490;
            case 3: goto Lbl_01510;
            case 4: goto Lbl_01540;
            case 5: goto Lbl_01470;
            case 6: goto Lbl_01510;
            case 7: goto Lbl_01470;
            case 8: goto Lbl_01560;
            default: break; 
        };

  Lbl_01470:
        // 01470 PRINT" 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
        b2c_printf(" 4 - steady seat, 5 - shield high, 6 - shield low.\n");
        // 01480 GOTO 1570
        goto Lbl_01570;

  Lbl_01490:
        // 01490 PRINT" 3 -LEFT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
        b2c_printf(" 3 -left lean, 4 - steady seat, 5 - shield high, 6 - shield low.\n");
        // 01500 GOTO 1570
        goto Lbl_01570;

  Lbl_01510:
        // 01510 PRINT"1 - LOWER HELM, 2 - RIGHT LEAN, 3 - LEFT LEAN, 4 - STEADY SEAT,"
        b2c_printf("1 - lower helm, 2 - right lean, 3 - left lean, 4 - steady seat,\n");
        // 01520 PRINT" 5 - SHIELD HIGH, 6 - SHIELD LOW."
        b2c_printf(" 5 - shield high, 6 - shield low.\n");
        // 01530 GOTO 1570
        goto Lbl_01570;

  Lbl_01540:
        // 01540 PRINT"2 - RIGHT LEAN, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
        b2c_printf("2 - right lean, 4 - steady seat, 5 - shield high, 6 - shield low.\n");
        // 01550 GOTO 1570
        goto Lbl_01570;

  Lbl_01560:
        // 01560 PRINT"1 - LOWER HELM, 4 - STEADY SEAT, 5 - SHIELD HIGH, 6 - SHIELD LOW."
        b2c_printf("1 - lower helm, 4 - steady seat, 5 - shield high, 6 - shield low.\n");

  Lbl_01570:
        // 01570 PRINT"WHAT IS YOUR CHOICE";
        b2c_printf("What is your choice");
        // 01580 INPUT C
        // Start of Basic INPUT statement 01580
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
        }; // End of Basic INPUT statement 01580
        // 01590 D=INT(RND(1)*8)+1
        D_int = INT(RND(1)*8)+1;
        // 01600 ON D GOTO 1670,1680,1610,1620,1630,1640,1650,1660
        switch((int)(D_int)){
            case 1: goto Lbl_01610;
            case 2: goto Lbl_01620;
            case 3: goto Lbl_01630;
            case 4: goto Lbl_01640;
            case 5: goto Lbl_01650;
            case 6: goto Lbl_01660;
            case 7: goto Lbl_01670;
            case 8: goto Lbl_01680;
            default: break; 
        };

  Lbl_01610:
        // 01610 ON C GOTO 1690,1690,1690,1750,1810,1690
        switch((int)(C_int)){
            case 1: goto Lbl_01690;
            case 2: goto Lbl_01690;
            case 3: goto Lbl_01690;
            case 4: goto Lbl_01750;
            case 5: goto Lbl_01810;
            case 6: goto Lbl_01690;
            default: break; 
        };

  Lbl_01620:
        // 01620 ON C GOTO 1810,1780,1690,1780,1780,1690
        switch((int)(C_int)){
            case 1: goto Lbl_01810;
            case 2: goto Lbl_01780;
            case 3: goto Lbl_01690;
            case 4: goto Lbl_01780;
            case 5: goto Lbl_01780;
            case 6: goto Lbl_01690;
            default: break; 
        };

  Lbl_01630:
        // 01630 ON C GOTO 1840,1810,1720,1780,1900,1870
        switch((int)(C_int)){
            case 1: goto Lbl_01840;
            case 2: goto Lbl_01810;
            case 3: goto Lbl_01720;
            case 4: goto Lbl_01780;
            case 5: goto Lbl_01900;
            case 6: goto Lbl_01870;
            default: break; 
        };

  Lbl_01640:
        // 01640 ON C GOTO 1720,1690,1780,1720,1720,1810
        switch((int)(C_int)){
            case 1: goto Lbl_01720;
            case 2: goto Lbl_01690;
            case 3: goto Lbl_01780;
            case 4: goto Lbl_01720;
            case 5: goto Lbl_01720;
            case 6: goto Lbl_01810;
            default: break; 
        };

  Lbl_01650:
        // 01650 ON C GOTO 1780,1900,1690,1780,1690,1780
        switch((int)(C_int)){
            case 1: goto Lbl_01780;
            case 2: goto Lbl_01900;
            case 3: goto Lbl_01690;
            case 4: goto Lbl_01780;
            case 5: goto Lbl_01690;
            case 6: goto Lbl_01780;
            default: break; 
        };

  Lbl_01660:
        // 01660 ON C GOTO 1900,1720,1780,1900,1840,1780
        switch((int)(C_int)){
            case 1: goto Lbl_01900;
            case 2: goto Lbl_01720;
            case 3: goto Lbl_01780;
            case 4: goto Lbl_01900;
            case 5: goto Lbl_01840;
            case 6: goto Lbl_01780;
            default: break; 
        };

  Lbl_01670:
        // 01670 ON C GOTO 1720,1690,1900,1720,1720,1720
        switch((int)(C_int)){
            case 1: goto Lbl_01720;
            case 2: goto Lbl_01690;
            case 3: goto Lbl_01900;
            case 4: goto Lbl_01720;
            case 5: goto Lbl_01720;
            case 6: goto Lbl_01720;
            default: break; 
        };

  Lbl_01680:
        // 01680 ON C GOTO 1780,1720,1840,1780,1840,1780
        switch((int)(C_int)){
            case 1: goto Lbl_01780;
            case 2: goto Lbl_01720;
            case 3: goto Lbl_01840;
            case 4: goto Lbl_01780;
            case 5: goto Lbl_01840;
            case 6: goto Lbl_01780;
            default: break; 
        };

  Lbl_01690:
        // 01690 PRINT"HE MISSED YOU!"
        b2c_printf("He missed you!\n");
        // 01700 S=0
        S_int = 0;
        // 01710 GOTO 1920
        goto Lbl_01920;

  Lbl_01720:
        // 01720 PRINT"HE HIT YOUR SHIELD BUT IT GLANCED OFF"
        b2c_printf("He hit your shield but it glanced off\n");
        // 01730 S=0
        S_int = 0;
        // 01740 GOTO 1920
        goto Lbl_01920;

  Lbl_01750:
        // 01750 PRINT"HE KNOCKED OFF YOUR HELM"
        b2c_printf("He knocked off your helm\n");
        // 01760 S=0
        S_int = 0;
        // 01770 GOTO 1920
        goto Lbl_01920;

  Lbl_01780:
        // 01780 PRINT"HE BROKE HIS LANCE."
        b2c_printf("He broke his lance.\n");
        // 01790 S=0
        S_int = 0;
        // 01800 GOTO 1920
        goto Lbl_01920;

  Lbl_01810:
        // 01810 PRINT"HE HAS UNSEATED YOU(THUD!)"
        b2c_printf("He has unseated you(thud!)\n");
        // 01820 S=5
        S_int = 5;
        // 01830 GOTO 1920
        goto Lbl_01920;

  Lbl_01840:
        // 01840 PRINT"HE HAS BROKEN HIS LANCE, INJURED AND UNSEATED YOU (OUCH!)"
        b2c_printf("He has broken his lance, injured and unseated you (ouch!)\n");
        // 01850 S=5
        S_int = 5;
        // 01860 GOTO 1920
        goto Lbl_01920;

  Lbl_01870:
        // 01870 PRINT"HE HAS INJURED AND UNSEATED YOU (CRASH!)"
        b2c_printf("He has injured and unseated you (crash!)\n");
        // 01880 S=5
        S_int = 5;
        // 01890 GOTO 1920
        goto Lbl_01920;

  Lbl_01900:
        // 01900 PRINT"HE HAS BROKEN HIS LANCE AND UNSEATED YOU (CLANG!)"
        b2c_printf("He has broken his lance and unseated you (clang!)\n");
        // 01910 S=5
        S_int = 5;

  Lbl_01920:
        // 01920 E=INT(RND(1)*6)+1
        E_int = INT(RND(1)*6)+1;
        // 01930 ON D GOTO 1980,1940,1980,1990,1940,1960,1940,2020
        switch((int)(D_int)){
            case 1: goto Lbl_01940;
            case 2: goto Lbl_01960;
            case 3: goto Lbl_01980;
            case 4: goto Lbl_01990;
            case 5: goto Lbl_01940;
            case 6: goto Lbl_01980;
            case 7: goto Lbl_01940;
            case 8: goto Lbl_02020;
            default: break; 
        };

  Lbl_01940:
        // 01940 IF E<4 THEN 1920
        if(E_int<4)goto Lbl_01920;
        // 01950 GOTO 2040
        goto Lbl_02040;

  Lbl_01960:
        // 01960 IF E<3 THEN 1920
        if(E_int<3)goto Lbl_01920;
        // 01970 GOTO 2040
        goto Lbl_02040;

  Lbl_01980:
        // 01980 GOTO 2040
        goto Lbl_02040;

  Lbl_01990:
        // 01990 IF E=1 THEN 1920
        if(E_int==1)goto Lbl_01920;
        // 02000 IF E=3 THEN 1920
        if(E_int==3)goto Lbl_01920;
        // 02010 GOTO 2040
        goto Lbl_02040;

  Lbl_02020:
        // 02020 IF E=2 THEN 1920
        if(E_int==2)goto Lbl_01920;
        // 02030 IF E=3 THEN 1920
        if(E_int==3)goto Lbl_01920;

  Lbl_02040:
        // 02040 ON E GOTO 2090,2100,2050,2060,2070,2080
        switch((int)(E_int)){
            case 1: goto Lbl_02050;
            case 2: goto Lbl_02060;
            case 3: goto Lbl_02070;
            case 4: goto Lbl_02080;
            case 5: goto Lbl_02090;
            case 6: goto Lbl_02100;
            default: break; 
        };

  Lbl_02050:
        // 02050 ON B GOTO 2110,2230,2260,2140,2200,2320,2140,2200
        switch((int)(B_int)){
            case 1: goto Lbl_02110;
            case 2: goto Lbl_02230;
            case 3: goto Lbl_02260;
            case 4: goto Lbl_02140;
            case 5: goto Lbl_02200;
            case 6: goto Lbl_02320;
            case 7: goto Lbl_02140;
            case 8: goto Lbl_02200;
            default: break; 
        };

  Lbl_02060:
        // 02060 ON B GOTO 2110,2200,2230,2110,2320,2140,2110,2140
        switch((int)(B_int)){
            case 1: goto Lbl_02110;
            case 2: goto Lbl_02200;
            case 3: goto Lbl_02230;
            case 4: goto Lbl_02110;
            case 5: goto Lbl_02320;
            case 6: goto Lbl_02140;
            case 7: goto Lbl_02110;
            case 8: goto Lbl_02140;
            default: break; 
        };

  Lbl_02070:
        // 02070 ON B GOTO 2110,2110,2140,2200,2110,2200,2320,2230
        switch((int)(B_int)){
            case 1: goto Lbl_02110;
            case 2: goto Lbl_02110;
            case 3: goto Lbl_02140;
            case 4: goto Lbl_02200;
            case 5: goto Lbl_02110;
            case 6: goto Lbl_02200;
            case 7: goto Lbl_02320;
            case 8: goto Lbl_02230;
            default: break; 
        };

  Lbl_02080:
        // 02080 ON B GOTO 2170,2200,2200,2140,2200,2320,2140,2200
        switch((int)(B_int)){
            case 1: goto Lbl_02170;
            case 2: goto Lbl_02200;
            case 3: goto Lbl_02200;
            case 4: goto Lbl_02140;
            case 5: goto Lbl_02200;
            case 6: goto Lbl_02320;
            case 7: goto Lbl_02140;
            case 8: goto Lbl_02200;
            default: break; 
        };

  Lbl_02090:
        // 02090 ON B GOTO 2230,2200,2320,2140,2110,2260,2140,2260
        switch((int)(B_int)){
            case 1: goto Lbl_02230;
            case 2: goto Lbl_02200;
            case 3: goto Lbl_02320;
            case 4: goto Lbl_02140;
            case 5: goto Lbl_02110;
            case 6: goto Lbl_02260;
            case 7: goto Lbl_02140;
            case 8: goto Lbl_02260;
            default: break; 
        };

  Lbl_02100:
        // 02100 ON B GOTO 2110,2110,2290,2230,2200,2200,2140,2200
        switch((int)(B_int)){
            case 1: goto Lbl_02110;
            case 2: goto Lbl_02110;
            case 3: goto Lbl_02290;
            case 4: goto Lbl_02230;
            case 5: goto Lbl_02200;
            case 6: goto Lbl_02200;
            case 7: goto Lbl_02140;
            case 8: goto Lbl_02200;
            default: break; 
        };

  Lbl_02110:
        // 02110 PRINT"YOU MISSED HIM (HISS!)"
        b2c_printf("You missed him (hiss!)\n");
        // 02120 T=0
        T_int = 0;
        // 02130 GOTO 2350
        goto Lbl_02350;

  Lbl_02140:
        // 02140 PRINT"YOU HIT HIS SHIELD BUT GLANCED OFF."
        b2c_printf("You hit his shield but glanced off.\n");
        // 02150 T=0
        T_int = 0;
        // 02160 GOTO 2350
        goto Lbl_02350;

  Lbl_02170:
        // 02170 PRINT"YOU KNOCKED OFF HIS HELM (CHEERS!)"
        b2c_printf("You knocked off his helm (cheers!)\n");
        // 02180 T=0
        T_int = 0;
        // 02190 GOTO 2350
        goto Lbl_02350;

  Lbl_02200:
        // 02200 PRINT"YOU BROKE YOUR LANCE (CRACK...!)"
        b2c_printf("You broke your lance (crack...!)\n");
        // 02210 T=0
        T_int = 0;
        // 02220 GOTO 2350
        goto Lbl_02350;

  Lbl_02230:
        // 02230 PRINT"YOU UNSEATED HIM(LOUD CHEERS AND MUZZAMS!!)"
        b2c_printf("You unseated him(loud cheers and muzzams!!)\n");
        // 02240 T=5
        T_int = 5;
        // 02250 GOTO 2350
        goto Lbl_02350;

  Lbl_02260:
        // 02260 PRINT"YOU BROKE YOUR LANCE, BUT UNSEATED AND INJURED YOUR FOE."
        b2c_printf("You broke your lance, but unseated and injured your foe.\n");
        // 02270 T=5
        T_int = 5;
        // 02280 GOTO 2350
        goto Lbl_02350;

  Lbl_02290:
        // 02290 PRINT"YOU INJURED AND UNSEATED YOUR OPPONENT."
        b2c_printf("You injured and unseated your opponent.\n");
        // 02300 T=5
        T_int = 5;
        // 02310 GOTO 2350
        goto Lbl_02350;

  Lbl_02320:
        // 02320 PRINT"YOU BROKE YOUR LANCE BUT UNSEATED YOUR OPPONENT."
        b2c_printf("You broke your lance but unseated your opponent.\n");
        // 02330 T=5
        T_int = 5;
        // 02340 GOTO 2350
        goto Lbl_02350;

  Lbl_02350:
        // 02350 IF S = T THEN 2370
        if(S_int==T_int)goto Lbl_02370;
        // 02360 GOTO 2380
        goto Lbl_02380;

  Lbl_02370:
        // 02370 IF S = 0 THEN 2500
        if(S_int==0)goto Lbl_02500;

  Lbl_02380:
        // 02380 IF S = T GOTO 2480
        if(S_int==T_int)goto Lbl_02480;
        // 02390 IF S < T GOTO 2410
        if(S_int<T_int)goto Lbl_02410;
        // 02400 IF S > T THEN 2460
        if(S_int>T_int)goto Lbl_02460;

  Lbl_02410:
        // 02410 PRINT"YOU HAVE WON THIS JOUST."
        b2c_printf("You have won this joust.\n");
        // 02420 PRINT
        b2c_printf("");
        // 02430 GOTO 2440
        goto Lbl_02440;

  Lbl_02440:
        // 02440 NEXT A
        int dummy_2440=0; // Ignore this line.
    }; // End-For(A_int)
    // 02450 GOTO 2580
    goto Lbl_02580;

  Lbl_02460:
    // 02460 PRINT"TOO BAD, YOU LOST. HOPE YOUR INSURANCE WAS PAID UP."
    b2c_printf("Too bad, you lost. Hope your insurance was paid up.\n");
    // 02470 GOTO 2520
    goto Lbl_02520;

  Lbl_02480:
    // 02480 PRINT"TOO BAD, YOU BOTH LOST. AT LEAST YOUR HONOUR IS INTACT."
    b2c_printf("Too bad, you both lost. At least your honour is intact.\n");
    // 02490 GOTO 2520
    goto Lbl_02520;

  Lbl_02500:
    // 02500 PRINT"YOU ARE READY TO TRY AGAIN."
    b2c_printf("You are ready to try again.\n");
    // 02510 GOTO 1400
    goto Lbl_01400;

  Lbl_02520:
    // 02520 PRINT"SORRY, BETTER LUCK NEXT JOUST."
    b2c_printf("Sorry, better luck next joust.\n");
    // 02530 PRINT"DO YOU WISH TO JOUST AGAIN ('Y' OR 'N')";
    b2c_printf("Do you wish to joust again ('y' or 'n')");
    // 02540 INPUT B$
    // Start of Basic INPUT statement 02540
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&B_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02540
    // 02550 IF B$ = "Y" THEN 1270
    if(strcmp(B_str,"Y")==0)goto Lbl_01270;
    // 02560 IF B$ = "N" THEN 2710
    if(strcmp(B_str,"N")==0)goto Lbl_02710;
    // 02570 GOTO 2770
    goto Lbl_02770;

  Lbl_02580:
    // 02580 PRINT"HOORAY! YOU ARE THE WINNER, HERE COMES THE BRIDE!"
    b2c_printf("Hooray! You are the winner, here comes the bride!\n");
    // 02590 GOTO 2770
    goto Lbl_02770;

  Lbl_02600:
    // 02600 PRINT"THE AIMING POINTS ARE:"
    b2c_printf("The aiming points are:\n");
    // 02610 PRINT"1 - HELM"
    b2c_printf("1 - helm\n");
    // 02620 PRINT"2 - UPPER LEFT (OF SHIELD)"
    b2c_printf("2 - upper left (of shield)\n");
    // 02630 PRINT"3 - UPPER MIDDLE"
    b2c_printf("3 - upper middle\n");
    // 02640 PRINT"4 - UPPER RIGHT"
    b2c_printf("4 - upper right\n");
    // 02650 PRINT"5 - LOWER LEFT"
    b2c_printf("5 - lower left\n");
    // 02660 PRINT"6 - LOWER MIDDLE"
    b2c_printf("6 - lower middle\n");
    // 02670 PRINT"7 - LOWER RIGHT"
    b2c_printf("7 - lower right\n");
    // 02680 PRINT"8 - BASE OF SHIELD"
    b2c_printf("8 - base of shield\n");
    // 02690 PRINT
    b2c_printf("");
    // 02700 GOTO 1400
    goto Lbl_01400;

  Lbl_02710:
    // 02710 PRINT 
    b2c_printf("");
    // 02720 PRINT"***************************************************"
    b2c_printf("***************************************************\n");
    // 02730 PRINT
    b2c_printf("");
    // 02740 PRINT"TOO BAD, THE PRINCESS WAS A VIRGIN!!!!"
    b2c_printf("Too bad, the princess was a virgin!!!!\n");
    // 02750 PRINT
    b2c_printf("");
    // 02760 PRINT"***************************************************"
    b2c_printf("***************************************************\n");

  Lbl_02770:
    // 02770 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
