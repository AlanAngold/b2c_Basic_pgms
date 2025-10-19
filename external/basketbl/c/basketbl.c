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
int    D_int;                                     // Basic: D 
char*  O_str;                                     // Basic: O$ 
int    P_int;                                     // Basic: P 
int    S_int_arr[10];                             // Basic: S 
int    T_int;                                     // Basic: T 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02670();
void Routine_02730();
void Routine_02850();
void Routine_02890();

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

void Routine_02670(){
    // 02670 PRINT
    b2c_printf("");
    // 02680 PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    b2c_printf("   *** two minutes left in the game ***\n");
    // 02690 PRINT
    b2c_printf("");
    // 02700 GOTO 02710
    goto Lbl_02710;

  Lbl_02710:
    // 02710 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 02720 REM FOUL SHOOTING

void Routine_02730(){
    // 02730 IF RND(1)>.49 THEN 2780
    if(RND(1)>0.49)goto Lbl_02780;
    // 02740 PRINT "SHOOTER MAKES BOTH SHOTS."
    b2c_printf("Shooter makes both shots.\n");
    // 02750 S(1-P)=S(1-P)+2
    S_int_arr[1-P_int] = S_int_arr[1-P_int]+2;

  Lbl_02760:
    // 02760 GOSUB 2860
    Routine_02860();
    // 02770 GOTO 02840
    goto Lbl_02840;

  Lbl_02780:
    // 02780 IF RND(1)>.75 THEN 2820
    if(RND(1)>0.75)goto Lbl_02820;
    // 02790 PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    b2c_printf("Shooter makes one shot and misses one.\n");
    // 02800 S(1-P)=S(1-P)+1
    S_int_arr[1-P_int] = S_int_arr[1-P_int]+1;
    // 02810 GOTO 2760
    goto Lbl_02760;

  Lbl_02820:
    // 02820 PRINT "BOTH SHOTS MISSED."
    b2c_printf("Both shots missed.\n");
    // 02830 GOTO 2760
    goto Lbl_02760;

  Lbl_02840:
    // 02840 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_02850(){
    // 02850 S(0)=S(0)+2
    S_int_arr[0] = S_int_arr[0]+2;

void Routine_02860(){
    // 02860 PRINT "SCORE: ";S(1);"TO";S(0)
    b2c_printf("Score:  %d Score: ToTo %d \n",S_int_arr[1],S_int_arr[0]);
    // 02870 GOTO 02880
    goto Lbl_02880;

  Lbl_02880:
    // 02880 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

void Routine_02890(){
    // 02890 S(1)=S(1)+2
    S_int_arr[1] = S_int_arr[1]+2;
    // 02900 GOSUB 2860
    Routine_02860();
    // 02910 GOTO 02920
    goto Lbl_02920;

  Lbl_02920:
    // 02920 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(31);"BASKETBALL"
    b2c_printf("Basketball\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "THIS IS DARTMOUTH COLLEGE BASKETBALL.  YOU WILL BE DARTMOUTH"
    b2c_printf("This is dartmouth college basketball.  You will be dartmouth\n");
    // 01040 PRINT " CAPTAIN AND PLAYMAKER.  CALL SHOTS AS FOLLOWS:  1. LONG"
    b2c_printf(" captain and playmaker.  Call shots as follows:  1. Long\n");
    // 01050 PRINT " (1050 FT.) JUMP SHOT; 2. SHORT (15 FT.) JUMP SHOT; 3. LAY"
    b2c_printf(" (30 ft.) Jump shot; 2. Short (15 ft.) Jump shot; 3. Lay\n");
    // 01060 PRINT " UP; 4. SET SHOT."
    b2c_printf(" up; 4. Set shot.\n");
    // 01070 PRINT "BOTH TEAMS WILL USE THE SAME DEFENSE.  CALL DEFENSE AS"
    b2c_printf("Both teams will use the same defense.  Call defense as\n");
    // 01080 PRINT "FOLLOWS:  6. PRESS; 6.5 MAN-TO MAN; 7. ZONE; 7.5 NONE."
    b2c_printf("Follows:  6. Press; 6.5 Man-to man; 7. Zone; 7.5 None.\n");
    // 01090 PRINT "TO CHANGE DEFENSE, JUST TYPE 0 AS YOUR NEXT SHOT."
    b2c_printf("To change defense, just type 0 as your next shot.\n");
    // 01100 INPUT "YOUR STARTING DEFENSE WILL BE";D:IF D<6 THEN 2090
    if(D_int<6)goto Lbl_02090;
    // 01110 PRINT
    b2c_printf("");
    // 01120 INPUT "CHOOSE YOUR OPPONENT";O$
    // Start of Basic INPUT statement 01120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""CHOOSE YOUR OPPONENT"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&O_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01120

  Lbl_01130:
    // 01130 PRINT "CENTER JUMP"
    b2c_printf("Center jump\n");
    // 01140 IF RND(1)> 3/5 THEN 1170
    if(RND(1)>3/5)goto Lbl_01170;
    // 01150 PRINT O$;" CONTROLS THE TAP."
    b2c_printf("%so”8Y controls the tap.\n",O_str);
    // 01160 GOTO 2120
    goto Lbl_02120;

  Lbl_01170:
    // 01170 PRINT "DARTMOUTH CONTROLS THE TAP."
    b2c_printf("Dartmouth controls the tap.\n");

  Lbl_01180:
    // 01180 PRINT
    b2c_printf("");

  Lbl_01190:
    // 01190 INPUT "YOUR SHOT";Z
    // Start of Basic INPUT statement 01190
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""YOUR SHOT"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01190
    // 01200 P=0
    P_int = 0;
    // 01210 IF Z<>INT(Z) THEN 1240
    if(Z_int!=INT(Z_int))goto Lbl_01240;
    // 01220 IF Z<0 OR Z>4 THEN 1240
    if(Z_int<0||Z_int>4)goto Lbl_01240;
    // 01230 GOTO 1250
    goto Lbl_01250;

  Lbl_01240:
    // 01240 PRINT "INCORRECT ANSWER.  RETYPE IT. ";:GOTO 1190
    goto Lbl_01190;

  Lbl_01250:
    // 01250 IF RND(1)<.5 THEN 1390
    if(RND(1)<0.5)goto Lbl_01390;
    // 01260 IF T<100 THEN 1390
    if(T_int<100)goto Lbl_01390;
    // 01270 PRINT
    b2c_printf("");
    // 01280 IF S(1)<>S(0) THEN 1360
    if(S_int_arr[1]!=S_int_arr[0])goto Lbl_01360;
    // 01290 PRINT:PRINT "   ***** END OF SECOND HALF *****":PRINT
    b2c_printf("");
    // 01300 PRINT "SCORE AT END OF REGULATION TIME:"
    b2c_printf("Score at end of regulation time:\n");
    // 01310 PRINT "        DARTMOUTH:";S(1);"  ";O$;":";S(0)
    b2c_printf("        dartmouth: %d         dartmouth:    %s  :: %d \n",S_int_arr[1],O_str,S_int_arr[0]);
    // 01320 PRINT
    b2c_printf("");
    // 01330 PRINT "BEGIN TWO MINUTE OVERTIME PERIOD"
    b2c_printf("Begin two minute overtime period\n");
    // 01340 T=93
    T_int = 93;
    // 01350 GOTO 1130
    goto Lbl_01130;

  Lbl_01360:
    // 01360 PRINT "   ***** END OF GAME *****"
    b2c_printf("   ***** end of game *****\n");
    // 01370 PRINT "FINAL SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    b2c_printf("Final score: dartmouth: %d Final score: dartmouth:    %s  :: %d \n",S_int_arr[1],O_str,S_int_arr[0]);
    // 01380 STOP
    exit(1);

  Lbl_01390:
    // 01390 ON Z GOTO 1410,1410
    switch((int)(Z_int)){
        case 1: goto Lbl_01410;
        case 2: goto Lbl_01410;
        default: break; 
    };
    // 01400 GOTO 1760
    goto Lbl_01760;

  Lbl_01410:
    // 01410 T=T+1
    T_int = T_int+1;
    // 01420 IF T=50 THEN 2610
    if(T_int==50)goto Lbl_02610;
    // 01430 IF T=92 THEN 1450
    if(T_int==92)goto Lbl_01450;
    // 01440 GOTO 1460
    goto Lbl_01460;

  Lbl_01450:
    // 01450 GOSUB 2670
    Routine_02670();

  Lbl_01460:
    // 01460 PRINT "JUMP SHOT"
    b2c_printf("Jump shot\n");
    // 01470 IF RND(1)>.341*D/8 THEN 1510
    if(RND(1)>0.34*D_int/8)goto Lbl_01510;
    // 01480 PRINT "SHOT IS GOOD."
    b2c_printf("Shot is good.\n");
    // 01490 GOSUB 2890
    Routine_02890();
    // 01500 GOTO 2120
    goto Lbl_02120;

  Lbl_01510:
    // 01510 IF RND(1)>.682*D/8 THEN 1630
    if(RND(1)>0.68*D_int/8)goto Lbl_01630;
    // 01520 PRINT "SHOT IS OFF TARGET."
    b2c_printf("Shot is off target.\n");
    // 01530 IF D/6*RND(1)>.45 THEN 1560
    if(D_int/6*RND(1)>0.45)goto Lbl_01560;
    // 01540 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    b2c_printf("Dartmouth controls the rebound.\n");
    // 01550 GOTO 1580
    goto Lbl_01580;

  Lbl_01560:
    // 01560 PRINT "REBOUND TO ";O$
    b2c_printf("Rebound to %s\n",O_str);
    // 01570 GOTO 2120
    goto Lbl_02120;

  Lbl_01580:
    // 01580 IF RND(1)>.4 THEN 1600
    if(RND(1)>0.4)goto Lbl_01600;
    // 01590 GOTO 1760
    goto Lbl_01760;

  Lbl_01600:
    // 01600 IF D=6 THEN 2560
    if(D_int==6)goto Lbl_02560;

  Lbl_01610:
    // 01610 PRINT "BALL PASSED BACK TO YOU. ";
    b2c_printf("Ball passed back to you. ");
    // 01620 GOTO 1190
    goto Lbl_01190;

  Lbl_01630:
    // 01630 IF RND(1)>.782*D/8 THEN 1700
    if(RND(1)>0.78*D_int/8)goto Lbl_01700;
    // 01640 PRINT "SHOT IS BLOCKED.  BALL CONTROLLED BY ";
    b2c_printf("Shot is blocked.  Ball controlled by ");
    // 01650 IF RND(1)>.5 THEN 1680
    if(RND(1)>0.5)goto Lbl_01680;
    // 01660 PRINT "DARTMOUTH."
    b2c_printf("Dartmouth.\n");
    // 01670 GOTO 1190
    goto Lbl_01190;

  Lbl_01680:
    // 01680 PRINT O$;"."
    b2c_printf("%sý_ÿ.\n",O_str);
    // 01690 GOTO 2120
    goto Lbl_02120;

  Lbl_01700:
    // 01700 IF RND(1)>.843*D/8 THEN 1740
    if(RND(1)>0.84*D_int/8)goto Lbl_01740;
    // 01710 PRINT "SHOOTER IS FOULED.  TWO SHOTS."
    b2c_printf("Shooter is fouled.  Two shots.\n");
    // 01720 GOSUB 2730
    Routine_02730();
    // 01730 GOTO 2120
    goto Lbl_02120;

  Lbl_01740:
    // 01740 PRINT "CHARGING FOUL.  DARTMOUTH LOSES BALL."
    b2c_printf("Charging foul.  Dartmouth loses ball.\n");
    // 01750 GOTO 2120
    goto Lbl_02120;

  Lbl_01760:
    // 01760 T=T+1
    T_int = T_int+1;
    // 01770 IF T=50 THEN 2610
    if(T_int==50)goto Lbl_02610;
    // 01780 IF T=92 THEN 1800
    if(T_int==92)goto Lbl_01800;
    // 01790 GOTO 1810
    goto Lbl_01810;

  Lbl_01800:
    // 01800 GOSUB 2670
    Routine_02670();

  Lbl_01810:
    // 01810 IF Z=0 THEN 2090
    if(Z_int==0)goto Lbl_02090;
    // 01820 IF Z>3 THEN 2070
    if(Z_int>3)goto Lbl_02070;
    // 01830 PRINT "LAY UP."
    b2c_printf("Lay up.\n");

  Lbl_01840:
    // 01840 IF 7/D*RND(1)>.4 THEN 1880
    if(7/D_int*RND(1)>0.4)goto Lbl_01880;
    // 01850 PRINT "SHOT IS GOOD.  TWO POINTS."
    b2c_printf("Shot is good.  Two points.\n");
    // 01860 GOSUB 2890
    Routine_02890();
    // 01870 GOTO 2120
    goto Lbl_02120;

  Lbl_01880:
    // 01880 IF 7/D*RND(1)>.7 THEN 1980
    if(7/D_int*RND(1)>0.7)goto Lbl_01980;
    // 01890 PRINT "SHOT IS OFF THE RIM."
    b2c_printf("Shot is off the rim.\n");
    // 01900 IF RND(1)>2/3 THEN 1930
    if(RND(1)>2/3)goto Lbl_01930;
    // 01910 PRINT O$;" CONTROLS THE REBOUND."
    b2c_printf("%s§”8Y controls the rebound.\n",O_str);
    // 01920 GOTO 2120
    goto Lbl_02120;

  Lbl_01930:
    // 01930 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    b2c_printf("Dartmouth controls the rebound.\n");
    // 01940 IF RND(1)>.4 THEN 1960
    if(RND(1)>0.4)goto Lbl_01960;
    // 01950 GOTO 1760
    goto Lbl_01760;

  Lbl_01960:
    // 01960 PRINT "BALL PASSED BACK TO YOU.";
    b2c_printf("Ball passed back to you.");
    // 01970 GOTO 1190
    goto Lbl_01190;

  Lbl_01980:
    // 01980 IF 7/D*RND(1)>.875 THEN 2020
    if(7/D_int*RND(1)>0.88)goto Lbl_02020;
    // 01990 PRINT "SHOOTER FOULED.  TWO SHOTS."
    b2c_printf("Shooter fouled.  Two shots.\n");
    // 02000 GOSUB 2730
    Routine_02730();
    // 02010 GOTO 2120
    goto Lbl_02120;

  Lbl_02020:
    // 02020 IF 7/D*RND(1)>.925 THEN 2050
    if(7/D_int*RND(1)>0.93)goto Lbl_02050;
    // 02030 PRINT "SHOT BLOCKED. ";O$;"'S BALL."
    b2c_printf("Shot blocked. %sShot blocked. 's ball.\n",O_str);
    // 02040 GOTO 2120
    goto Lbl_02120;

  Lbl_02050:
    // 02050 PRINT "CHARGING FOUL.  DARTMOUTH LOSES THE BALL."
    b2c_printf("Charging foul.  Dartmouth loses the ball.\n");
    // 02060 GOTO 2120
    goto Lbl_02120;

  Lbl_02070:
    // 02070 PRINT "SET SHOT."
    b2c_printf("Set shot.\n");
    // 02080 GOTO 1840
    goto Lbl_01840;

  Lbl_02090:
    // 02090 INPUT "YOUR NEW DEFENSIVE ALLIGNMENT IS";D
    // Start of Basic INPUT statement 02090
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""YOUR NEW DEFENSIVE ALLIGNMENT IS"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02090
    // 02100 IF D<6 THEN 2090
    if(D_int<6)goto Lbl_02090;
    // 02110 GOTO 1180
    goto Lbl_01180;

  Lbl_02120:
    // 02120 P=1
    P_int = 1;
    // 02130 T=T+1
    T_int = T_int+1;
    // 02140 IF T=50 THEN 2610
    if(T_int==50)goto Lbl_02610;
    // 02150 GOTO 2160
    goto Lbl_02160;

  Lbl_02160:
    // 02160 PRINT
    b2c_printf("");
    // 02170 Z1=10/4*RND(1)+1
    Z1_int = 10/4*RND(1)+1;
    // 02180 IF Z1>2 THEN 2410
    if(Z1_int>2)goto Lbl_02410;
    // 02190 PRINT "JUMP SHOT."
    b2c_printf("Jump shot.\n");
    // 02200 IF 8/D*RND(1)>.35 THEN 2240
    if(8/D_int*RND(1)>0.35)goto Lbl_02240;
    // 02210 PRINT "SHOT IS GOOD."
    b2c_printf("Shot is good.\n");
    // 02220 GOSUB 2850
    Routine_02850();
    // 02230 GOTO 1180
    goto Lbl_01180;

  Lbl_02240:
    // 02240 IF 8/D*RND(1)>.75 THEN 2350
    if(8/D_int*RND(1)>0.75)goto Lbl_02350;
    // 02250 PRINT "SHOT IS OFF RIM."
    b2c_printf("Shot is off rim.\n");

  Lbl_02260:
    // 02260 IF D/6*RND(1)>.5 THEN 2290
    if(D_int/6*RND(1)>0.5)goto Lbl_02290;
    // 02270 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    b2c_printf("Dartmouth controls the rebound.\n");
    // 02280 GOTO 1180
    goto Lbl_01180;

  Lbl_02290:
    // 02290 PRINT O$;" CONTROLS THE REBOUND."
    b2c_printf("%sý_ÿ controls the rebound.\n",O_str);
    // 02300 IF D=6 THEN 2510
    if(D_int==6)goto Lbl_02510;

  Lbl_02310:
    // 02310 IF RND(1)>.5 THEN 2340
    if(RND(1)>0.5)goto Lbl_02340;
    // 02320 PRINT "PASS BACK TO ";O$;" GUARD."
    b2c_printf("Pass back to %sPass back to  guard.\n",O_str);
    // 02330 GOTO 2120
    goto Lbl_02120;

  Lbl_02340:
    // 02340 GOTO 2410
    goto Lbl_02410;

  Lbl_02350:
    // 02350 IF 8/D*RND(1)>.9 THEN 2390
    if(8/D_int*RND(1)>0.9)goto Lbl_02390;
    // 02360 PRINT "PLAYER FOULED.  TWO SHOTS."
    b2c_printf("Player fouled.  Two shots.\n");
    // 02370 GOSUB 2730
    Routine_02730();
    // 02380 GOTO 1180
    goto Lbl_01180;

  Lbl_02390:
    // 02390 PRINT "OFFENSIVE FOUL.  DARTMOUTH'S BALL."
    b2c_printf("Offensive foul.  Dartmouth's ball.\n");
    // 02400 GOTO 1180
    goto Lbl_01180;

  Lbl_02410:
    // 02410 IF Z1>3 THEN 2490
    if(Z1_int>3)goto Lbl_02490;
    // 02420 PRINT "LAY UP."
    b2c_printf("Lay up.\n");

  Lbl_02430:
    // 02430 IF 7/D*RND(1)>.413 THEN 2470
    if(7/D_int*RND(1)>0.41)goto Lbl_02470;
    // 02440 PRINT "SHOT IS GOOD."
    b2c_printf("Shot is good.\n");
    // 02450 GOSUB 2850
    Routine_02850();
    // 02460 GOTO 1180
    goto Lbl_01180;

  Lbl_02470:
    // 02470 PRINT "SHOT IS MISSED."
    b2c_printf("Shot is missed.\n");
    // 02480 GOTO 2260
    goto Lbl_02260;

  Lbl_02490:
    // 02490 PRINT "SET SHOT."
    b2c_printf("Set shot.\n");
    // 02500 GOTO 2430
    goto Lbl_02430;

  Lbl_02510:
    // 02510 IF RND(1)>.75 THEN 2530
    if(RND(1)>0.75)goto Lbl_02530;
    // 02520 GOTO 2310
    goto Lbl_02310;

  Lbl_02530:
    // 02530 PRINT "BALL STOLEN.  EASY LAY UP FOR DARTMOUTH."
    b2c_printf("Ball stolen.  Easy lay up for dartmouth.\n");
    // 02540 GOSUB 2890
    Routine_02890();
    // 02550 GOTO 2120
    goto Lbl_02120;

  Lbl_02560:
    // 02560 IF RND(1)>.6 THEN 2580
    if(RND(1)>0.6)goto Lbl_02580;
    // 02570 GOTO 1610
    goto Lbl_01610;

  Lbl_02580:
    // 02580 PRINT "PASS STOLEN BY ";O$;" EASY LAYUP."
    b2c_printf("Pass stolen by %sPass stolen by  easy layup.\n",O_str);
    // 02590 GOSUB 2850
    Routine_02850();
    // 02600 GOTO 1180
    goto Lbl_01180;

  Lbl_02610:
    // 02610 PRINT:PRINT "   ***** END OF FIRST HALF *****":PRINT
    b2c_printf("");
    // 02620 PRINT "SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    b2c_printf("Score: dartmouth: %d Score: dartmouth:    %s  :: %d \n",S_int_arr[1],O_str,S_int_arr[0]);
    // 02630 PRINT
    b2c_printf("");
    // 02640 PRINT
    b2c_printf("");
    // 02650 GOTO 1130
    goto Lbl_01130;
    // 02660 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
