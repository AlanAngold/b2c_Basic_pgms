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
char* data_03120s[]={"361","4","4","2","389","4","3","3","206","3","4","2","500","5","7","2"};
char* data_03130s[]={"408","4","2","4","359","4","6","4","424","4","4","2","388","4","4","4"};
char* data_03140s[]={"196","3","7","2","400","4","7","2","560","5","7","2","132","3","2","2"};
char* data_03150s[]={"357","4","4","4","294","4","2","4","475","5","2","3","375","4","4","2"};
char* data_03160s[]={"180","3","6","2","550","5","6","6"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3120, 16,data_03120s},
    { 3130, 16,data_03130s},
    { 3140, 16,data_03140s},
    { 3150, 16,data_03150s},
    { 3160,  8,data_03160s},
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
int    D1_int;                                    // Basic: D1 
int    D2_int;                                    // Basic: D2 
int    F_int;                                     // Basic: F 
int    G1_int;                                    // Basic: G1 
int    G2_int;                                    // Basic: G2 
int    G3_int;                                    // Basic: G3 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int_arr[10];                             // Basic: L 
int    N_int;                                     // Basic: N 
int    O_int;                                     // Basic: O 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    S9_int;                                    // Basic: S9 
int    T_int;                                     // Basic: T 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03230();

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

void Routine_03230(){
    // 03230 IF L(X)=1 THEN 3310
    if(L_int_arr[X_int]==1)goto Lbl_03310;
    // 03240 IF L(X)=2 THEN 3330
    if(L_int_arr[X_int]==2)goto Lbl_03330;
    // 03250 IF L(X)=3 THEN 3350
    if(L_int_arr[X_int]==3)goto Lbl_03350;
    // 03260 IF L(X)=4 THEN 3370
    if(L_int_arr[X_int]==4)goto Lbl_03370;
    // 03270 IF L(X)=5 THEN 3390
    if(L_int_arr[X_int]==5)goto Lbl_03390;
    // 03280 IF L(X)=6 THEN 3410
    if(L_int_arr[X_int]==6)goto Lbl_03410;
    // 03290 PRINT "OUT OF BOUNDS."
    b2c_printf("Out of bounds.\n");
    // 03300 GOTO 3430
    goto Lbl_03430;

  Lbl_03310:
    // 03310 PRINT "FAIRWAY."
    b2c_printf("Fairway.\n");
    // 03320 GOTO 3430
    goto Lbl_03430;

  Lbl_03330:
    // 03330 PRINT "ROUGH."
    b2c_printf("Rough.\n");
    // 03340 GOTO 3430
    goto Lbl_03430;

  Lbl_03350:
    // 03350 PRINT "TREES."
    b2c_printf("Trees.\n");
    // 03360 GOTO 3430
    goto Lbl_03430;

  Lbl_03370:
    // 03370 PRINT "ADJACENT FAIRWAY."
    b2c_printf("Adjacent fairway.\n");
    // 03380 GOTO 3430
    goto Lbl_03430;

  Lbl_03390:
    // 03390 PRINT "TRAP."
    b2c_printf("Trap.\n");
    // 03400 GOTO 3430
    goto Lbl_03430;

  Lbl_03410:
    // 03410 PRINT "WATER."
    b2c_printf("Water.\n");
    // 03420 GOTO 3430
    goto Lbl_03430;

  Lbl_03430:
    // 03430 GOTO 03440
    goto Lbl_03440;

  Lbl_03440:
    // 03440 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(34);"GOLF"
    b2c_printf("Golf\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "WELCOME TO THE CREATIVE COMPUTING COUNTRY CLUB,"
    b2c_printf("Welcome to the creative computing country club,\n");
    // 01040 PRINT "AN EIGHTEEN HOLE CHAMPIONSHIP LAYOUT LOCATED A SHORT"
    b2c_printf("An eighteen hole championship layout located a short\n");
    // 01050 PRINT "DISTANCE FROM SCENIC DOWNTOWN MORRISTOWN.  THE"
    b2c_printf("Distance from scenic downtown morristown.  The\n");
    // 01060 PRINT "COMMENTATOR WILL EXPLAIN THE GAME AS YOU PLAY."
    b2c_printf("Commentator will explain the game as you play.\n");
    // 01070 PRINT "ENJOY YOUR GAME; SEE YOU AT THE 19TH HOLE..."
    b2c_printf("Enjoy your game; see you at the 19th hole...\n");
    // 01080 PRINT:PRINT: DIM L(10)
    // 01090 G1=18
    G1_int = 18;
    // 01100 G2=0
    G2_int = 0;
    // 01110 G3=0
    G3_int = 0;
    // 01120 A=0
    A_int = 0;
    // 01130 N=.8
    N_int = 0.8;
    // 01140 S2=0
    S2_int = 0;
    // 01150 F=1
    F_int = 1;

  Lbl_01160:
    // 01160 PRINT "WHAT IS YOUR HANDICAP";
    b2c_printf("What is your handicap");
    // 01170 INPUT H:PRINT
    b2c_printf("");
    // 01180 IF H>30 THEN 1610
    if(H_int>30)goto Lbl_01610;
    // 01190 IF H<0 THEN 1610
    if(H_int<0)goto Lbl_01610;

  Lbl_01200:
    // 01200 PRINT "DIFFICULTIES AT GOLF INCLUDE:"
    b2c_printf("Difficulties at golf include:\n");
    // 01210 PRINT "0=HOOK, 1=SLICE, 2=POOR DISTANCE, 4=TRAP SHOTS, 5=PUTTING"
    b2c_printf("0=hook, 1=slice, 2=poor distance, 4=trap shots, 5=putting\n");
    // 01220 PRINT "WHICH ONE (ONLY ONE) IS YOUR WORST";
    b2c_printf("Which one (only one) is your worst");
    // 01230 INPUT T:PRINT
    b2c_printf("");
    // 01240 IF T>5 THEN 1200
    if(T_int>5)goto Lbl_01200;
    // 01250 S1=0
    S1_int = 0;
    // 01260 REM

  Lbl_01270:
    // 01270 L(0)=0
    L_int_arr[0] = 0;
    // 01280 J=0
    J_int = 0;
    // 01290 Q=0
    Q_int = 0;
    // 01300 S2=S2+1
    S2_int = S2_int+1;
    // 01310 K=0
    K_int = 0;
    // 01320 IF F=1 THEN 1500
    if(F_int==1)goto Lbl_01500;
    // 01330 PRINT "YOUR SCORE ON HOLE";F-1;"WAS";S1
    b2c_printf("Your score on holeWas %d \n",S1_int);
    // 01340 GOTO 3180
    goto Lbl_03180;

  Lbl_01350:
    // 01350 IF S1>P+2 THEN 1400
    if(S1_int>P_int+2)goto Lbl_01400;
    // 01360 IF S1=P THEN 1420
    if(S1_int==P_int)goto Lbl_01420;
    // 01370 IF S1=P-1 THEN 1440
    if(S1_int==P_int-1)goto Lbl_01440;
    // 01380 IF S1=P-2 THEN 1460
    if(S1_int==P_int-2)goto Lbl_01460;
    // 01390 GOTO 1500
    goto Lbl_01500;

  Lbl_01400:
    // 01400 PRINT "KEEP YOUR HEAD DOWN."
    b2c_printf("Keep your head down.\n");
    // 01410 GOTO 1500
    goto Lbl_01500;

  Lbl_01420:
    // 01420 PRINT "A PAR.  NICE GOING."
    b2c_printf("A par.  Nice going.\n");
    // 01430 GOTO 1500
    goto Lbl_01500;

  Lbl_01440:
    // 01440 PRINT "A BIRDIE."
    b2c_printf("A birdie.\n");
    // 01450 GOTO 1500
    goto Lbl_01500;

  Lbl_01460:
    // 01460 IF P=3 THEN 1490
    if(P_int==3)goto Lbl_01490;
    // 01470 PRINT "A GREAT BIG EAGLE."
    b2c_printf("A great big eagle.\n");
    // 01480 GOTO 1500
    goto Lbl_01500;

  Lbl_01490:
    // 01490 PRINT "A HOLE IN ONE."
    b2c_printf("A hole in one.\n");

  Lbl_01500:
    // 01500 IF F=19 THEN 3170
    if(F_int==19)goto Lbl_03170;
    // 01510 S1=0
    S1_int = 0;
    // 01520 PRINT
    b2c_printf("");

  Lbl_01530:
    // 01530 IF S1=0 THEN 3010
    if(S1_int==0)goto Lbl_03010;
    // 01540 IF L(0)<1 THEN 2550
    if(L_int_arr[0]<1)goto Lbl_02550;
    // 01550 X=0
    X_int = 0;
    // 01560 IF L(0)>5 THEN 2590
    if(L_int_arr[0]>5)goto Lbl_02590;
    // 01570 PRINT "SHOT WENT";D1;"YARDS.  IT'S";D2;"YARDS FROM THE CUP."
    b2c_printf("Shot went %d Shot wentYards.  It'sYards.  It's %d Yards.  It'sYards from the cup.\n",D1_int,D2_int);
    // 01580 PRINT "BALL IS";INT(O);"YARDS OFF LINE... IN ";
    b2c_printf("Ball isYards off line... In ");
    // 01590 GOSUB 3230
    Routine_03230();
    // 01600 GOTO 1630
    goto Lbl_01630;

  Lbl_01610:
    // 01610 PRINT "PGA HANDICAPS RANGE FROM 0 TO 30."
    b2c_printf("Pga handicaps range from 0 to 30.\n");
    // 01620 GOTO 1160
    goto Lbl_01160;

  Lbl_01630:
    // 01630 IF A=1 THEN 1700
    if(A_int==1)goto Lbl_01700;
    // 01640 PRINT "SELECTION OF CLUBS"
    b2c_printf("Selection of clubs\n");
    // 01650 PRINT "YARDAGE DESIRED                       SUGGESTED CLUBS"
    b2c_printf("Yardage desired                       suggested clubs\n");
    // 01660 PRINT "200 TO 280 YARDS                           1 TO 4"
    b2c_printf("200 to 280 yards                           1 to 4\n");
    // 01670 PRINT "100 TO 200 YARDS                          19 TO 13"
    b2c_printf("100 to 200 yards                          19 to 13\n");
    // 01680 PRINT "  0 TO 100 YARDS                          29 TO 23"
    b2c_printf("  0 to 100 yards                          29 to 23\n");
    // 01690 A=1
    A_int = 1;

  Lbl_01700:
    // 01700 PRINT "WHAT CLUB DO YOU CHOOSE";
    b2c_printf("What club do you choose");
    // 01710 INPUT C
    // Start of Basic INPUT statement 01710
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
    }; // End of Basic INPUT statement 01710
    // 01720 PRINT
    b2c_printf("");
    // 01730 IF C<1 THEN 1810
    if(C_int<1)goto Lbl_01810;
    // 01740 IF C>29 THEN 1810
    if(C_int>29)goto Lbl_01810;
    // 01750 IF C>4 THEN 1840
    if(C_int>4)goto Lbl_01840;

  Lbl_01760:
    // 01760 IF L(0)<=5 THEN 1870
    if(L_int_arr[0]<=5)goto Lbl_01870;
    // 01770 IF C=14 THEN 1870
    if(C_int==14)goto Lbl_01870;
    // 01780 IF C=23 THEN 1870
    if(C_int==23)goto Lbl_01870;
    // 01790 GOTO 1810
    goto Lbl_01810;

  Lbl_01800:
    // 01800 S1=S1-1
    S1_int = S1_int-1;

  Lbl_01810:
    // 01810 PRINT "THAT CLUB IS NOT IN THE BAG."
    b2c_printf("That club is not in the bag.\n");
    // 01820 PRINT
    b2c_printf("");
    // 01830 GOTO 1630
    goto Lbl_01630;

  Lbl_01840:
    // 01840 IF C<12 THEN 1810
    if(C_int<12)goto Lbl_01810;
    // 01850 C=C-6
    C_int = C_int-6;
    // 01860 GOTO 1760
    goto Lbl_01760;

  Lbl_01870:
    // 01870 S1=S1+1
    S1_int = S1_int+1;
    // 01880 W=1
    W_int = 1;
    // 01890 IF C>13 THEN 2210
    if(C_int>13)goto Lbl_02210;
    // 01900 IF INT(F/3)=F/3 THEN 2160
    if(INT(F_int/3)==F_int/3)goto Lbl_02160;

  Lbl_01910:
    // 01910 IF C<4 THEN 1930
    if(C_int<4)goto Lbl_01930;
    // 01920 GOTO 1940
    goto Lbl_01940;

  Lbl_01930:
    // 01930 IF L(0)=2 THEN 2020
    if(L_int_arr[0]==2)goto Lbl_02020;

  Lbl_01940:
    // 01940 IF S1>7 THEN 2050
    if(S1_int>7)goto Lbl_02050;

  Lbl_01950:
    // 01950 D1=INT(((30-H)*2.5+187-((30-H)*.25+15)*C/2)+25*RND(1))
    D1_int = INT(((30-H_int)*2.5+187-((30-H_int)*0.25+15)*C_int/2)+25*RND(1));
    // 01960 D1=INT(D1*W)
    D1_int = INT(D1_int*W_int);
    // 01970 IF T=2 THEN 2570
    if(T_int==2)goto Lbl_02570;

  Lbl_01980:
    // 01980 O=(RND(1)/.8)*(2*H+16)*ABS(TAN(D1*.0035))
    O_int = (RND(1)/0.8)*(2*H_int+16)*ABS(TAN(D1_int*0.));
    // 01990 D2=INT(SQR(O^2+ABS(D-D1)^2))
    D2_int = INT(SQR(IPower(O_int,2)+IPower(ABS(D_int-D1_int),2)));
    // 02000 IF D-D1<0 THEN 2070
    if(D_int-D1_int<0)goto Lbl_02070;
    // 02010 GOTO 2090
    goto Lbl_02090;

  Lbl_02020:
    // 02020 PRINT "YOU DUBBED IT."
    b2c_printf("You dubbed it.\n");
    // 02030 D1=35
    D1_int = 35;
    // 02040 GOTO 1980
    goto Lbl_01980;

  Lbl_02050:
    // 02050 IF D<200 THEN 2700
    if(D_int<200)goto Lbl_02700;
    // 02060 GOTO 1950
    goto Lbl_01950;

  Lbl_02070:
    // 02070 IF D2<20 THEN 2090
    if(D2_int<20)goto Lbl_02090;
    // 02080 PRINT "TOO MUCH CLUB. YOU'RE PAST THE HOLE."
    b2c_printf("Too much club. You're past the hole.\n");

  Lbl_02090:
    // 02090 B=D
    B_int = D_int;
    // 02100 D=D2
    D_int = D2_int;
    // 02110 IF D2>27 THEN 2340
    if(D2_int>27)goto Lbl_02340;
    // 02120 IF D2>20 THEN 2500
    if(D2_int>20)goto Lbl_02500;
    // 02130 IF D2>.5 THEN 2520
    if(D2_int>0.5)goto Lbl_02520;
    // 02140 L(0)=9
    L_int_arr[0] = 9;
    // 02150 GOTO 2890
    goto Lbl_02890;

  Lbl_02160:
    // 02160 IF S2+Q+(10*(F-1)/18)<(F-1)*(72+((H+1)/.85))/18 THEN 2180
    if(S2_int+Q_int+(10*(F_int-1)/18)<(F_int-1)*(72+((H_int+1)/0.85))/18)goto Lbl_02180;
    // 02170 GOTO 1910
    goto Lbl_01910;

  Lbl_02180:
    // 02180 Q=Q+1
    Q_int = Q_int+1;
    // 02190 IF S1/2<>INT(S1/2) THEN 2300
    if(S1_int/2!=INT(S1_int/2))goto Lbl_02300;
    // 02200 GOTO 2020
    goto Lbl_02020;

  Lbl_02210:
    // 02210 PRINT "NOW GAUGE YOUR DISTANCE BY A PERCENTAGE (1 TO 100)"
    b2c_printf("Now gauge your distance by a percentage (1 to 100)\n");
    // 02220 PRINT "OF A FULL SWING";
    b2c_printf("Of a full swing");
    // 02230 INPUT W: W=W/100
    W_int = W_int/100;
    // 02240 PRINT
    b2c_printf("");
    // 02250 IF W>1 THEN 1800
    if(W_int>1)goto Lbl_01800;
    // 02260 IF L(0)=5 THEN 2690
    if(L_int_arr[0]==5)goto Lbl_02690;
    // 02270 IF C=14 THEN 1940
    if(C_int==14)goto Lbl_01940;
    // 02280 C=C-10
    C_int = C_int-10;
    // 02290 GOTO 1940
    goto Lbl_01940;

  Lbl_02300:
    // 02300 IF D<95 THEN 2020
    if(D_int<95)goto Lbl_02020;
    // 02310 PRINT "BALL HIT TREE - BOUNCED INTO ROUGH";D-75;"YARDS FROM HOLE."
    b2c_printf("Ball hit tree - bounced into roughYards from hole.\n");
    // 02320 D=D-75
    D_int = D_int-75;
    // 02330 GOTO 1630
    goto Lbl_01630;

  Lbl_02340:
    // 02340 IF O<30 THEN 2550
    if(O_int<30)goto Lbl_02550;
    // 02350 IF J>0 THEN 2550
    if(J_int>0)goto Lbl_02550;
    // 02360 IF T>0 THEN 2430
    if(T_int>0)goto Lbl_02430;
    // 02370 S9=(S2+1)/15
    S9_int = (S2_int+1)/15;
    // 02380 IF INT(S9)=S9 THEN 2450
    if(INT(S9_int)==S9_int)goto Lbl_02450;

  Lbl_02390:
    // 02390 PRINT "YOU HOOKED- ";
    b2c_printf("You hooked- ");
    // 02400 L(0)=L(2)
    L_int_arr[0] = L_int_arr[2];

  Lbl_02410:
    // 02410 IF O>45 THEN 2480
    if(O_int>45)goto Lbl_02480;
    // 02420 GOTO 1530
    goto Lbl_01530;

  Lbl_02430:
    // 02430 S9=(S2+1)/15
    S9_int = (S2_int+1)/15;
    // 02440 IF INT(S9)=S9 THEN 2390
    if(INT(S9_int)==S9_int)goto Lbl_02390;

  Lbl_02450:
    // 02450 PRINT "YOU SLICED- ";
    b2c_printf("You sliced- ");
    // 02460 L(0)=L(1)
    L_int_arr[0] = L_int_arr[1];
    // 02470 GOTO 2410
    goto Lbl_02410;

  Lbl_02480:
    // 02480 PRINT "BADLY."
    b2c_printf("Badly.\n");
    // 02490 GOTO 1530
    goto Lbl_01530;

  Lbl_02500:
    // 02500 L(0)=5
    L_int_arr[0] = 5;
    // 02510 GOTO 1530
    goto Lbl_01530;

  Lbl_02520:
    // 02520 L(0)=8
    L_int_arr[0] = 8;
    // 02530 D2=INT(D2*3)
    D2_int = INT(D2_int*3);
    // 02540 GOTO 2780
    goto Lbl_02780;

  Lbl_02550:
    // 02550 L(0)=1
    L_int_arr[0] = 1;
    // 02560 GOTO 1530
    goto Lbl_01530;

  Lbl_02570:
    // 02570 D1=INT(.85*D1)
    D1_int = INT(0.85*D1_int);
    // 02580 GOTO 1980
    goto Lbl_01980;

  Lbl_02590:
    // 02590 IF L(0)>6 THEN 2670
    if(L_int_arr[0]>6)goto Lbl_02670;
    // 02600 PRINT "YOUR SHOT WENT INTO THE WATER."
    b2c_printf("Your shot went into the water.\n");

  Lbl_02610:
    // 02610 S1=S1+1
    S1_int = S1_int+1;
    // 02620 PRINT "PENALTY STROKE ASSESSED.  HIT FROM PREVIOUS LOCATION."
    b2c_printf("Penalty stroke assessed.  Hit from previous location.\n");
    // 02630 J=J+1
    J_int = J_int+1;
    // 02640 L(0)=1
    L_int_arr[0] = 1;
    // 02650 D=B
    D_int = B_int;
    // 02660 GOTO 1630
    goto Lbl_01630;

  Lbl_02670:
    // 02670 PRINT "YOUR SHOT WENT OUT OF BOUNDS."
    b2c_printf("Your shot went out of bounds.\n");
    // 02680 GOTO 2610
    goto Lbl_02610;

  Lbl_02690:
    // 02690 IF T=3 THEN 2720
    if(T_int==3)goto Lbl_02720;

  Lbl_02700:
    // 02700 D2=1+(3*INT((80/(40-H))*RND(1)))
    D2_int = 1+(3*INT((80/(40-H_int))*RND(1)));
    // 02710 GOTO 2780
    goto Lbl_02780;

  Lbl_02720:
    // 02720 IF RND(1)>N THEN 2760
    if(RND(1)>N_int)goto Lbl_02760;
    // 02730 N=N*.2
    N_int = N_int*0.2;
    // 02740 PRINT "SHOT DUBBED, STILL IN TRAP."
    b2c_printf("Shot dubbed, still in trap.\n");
    // 02750 GOTO 1630
    goto Lbl_01630;

  Lbl_02760:
    // 02760 N=.8
    N_int = 0.8;
    // 02770 GOTO 2700
    goto Lbl_02700;

  Lbl_02780:
    // 02780 PRINT "ON GREEN,";D2;"FEET FROM THE PIN."
    b2c_printf("On green, %d On green,Feet from the pin.\n",D2_int);
    // 02790 PRINT "CHOOSE YOUR PUTT POTENCY (1 TO 13):";
    b2c_printf("Choose your putt potency (1 to 13):");
    // 02800 INPUT I
    // Start of Basic INPUT statement 02800
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&I_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02800
    // 02810 S1=S1+1
    S1_int = S1_int+1;
    // 02820 IF S1+1-P>(H*.072)+2 THEN 2890
    if(S1_int+1-P_int>(H_int*0.07)+2)goto Lbl_02890;
    // 02830 IF K>2 THEN 2890
    if(K_int>2)goto Lbl_02890;
    // 02840 K=K+1
    K_int = K_int+1;
    // 02850 IF T=4 THEN 2960
    if(T_int==4)goto Lbl_02960;
    // 02860 D2=D2-I*(4+2*RND(1))+1.5
    D2_int = D2_int-I_int*(4+2*RND(1))+1.5;

  Lbl_02870:
    // 02870 IF D2<-2 THEN 2980
    if(D2_int<-2)goto Lbl_02980;
    // 02880 IF D2>2 THEN 2930
    if(D2_int>2)goto Lbl_02930;

  Lbl_02890:
    // 02890 PRINT "YOU HOLED IT."
    b2c_printf("You holed it.\n");
    // 02900 PRINT
    b2c_printf("");
    // 02910 F=F+1
    F_int = F_int+1;
    // 02920 GOTO 1270
    goto Lbl_01270;

  Lbl_02930:
    // 02930 PRINT "PUTT SHORT."
    b2c_printf("Putt short.\n");

  Lbl_02940:
    // 02940 D2=INT(D2)
    D2_int = INT(D2_int);
    // 02950 GOTO 2780
    goto Lbl_02780;

  Lbl_02960:
    // 02960 D2=D2-I*(4+1*RND(1))+1
    D2_int = D2_int-I_int*(4+1*RND(1))+1;
    // 02970 GOTO 2870
    goto Lbl_02870;

  Lbl_02980:
    // 02980 PRINT "PASSED BY CUP."
    b2c_printf("Passed by cup.\n");
    // 02990 D2=-D2
    D2_int = D2_int;
    // 03000 GOTO 2940
    goto Lbl_02940;

  Lbl_03010:
    // 03010 READ D,P,L(1),L(2)
    D_int = Get_Data_Int();
    P_int = Get_Data_Int();
    L_int_arr[1] = Get_Data_Int();
    L_int_arr[2] = Get_Data_Int();
    // 03020 PRINT
    b2c_printf("");
    // 03030 PRINT "YOU ARE AT THE TEE OFF HOLE";F;"DISTANCE";D;"YARDS, PAR";P
    b2c_printf("You are at the tee off hole %d You are at the tee off holeDistanceDistance %d DistanceYards, parYards, par %d \n",F_int,D_int,P_int);
    // 03040 G3=G3+P
    G3_int = G3_int+P_int;
    // 03050 PRINT "ON YOUR RIGHT IS ";
    b2c_printf("On your right is ");
    // 03060 X=1
    X_int = 1;
    // 03070 GOSUB 3230
    Routine_03230();
    // 03080 PRINT "ON YOUR LEFT IS ";
    b2c_printf("On your left is ");
    // 03090 X=2
    X_int = 2;
    // 03100 GOSUB 3230
    Routine_03230();
    // 03110 GOTO 1630
    goto Lbl_01630;
    // 03120 DATA 361,4,4,2,389,4,3,3,206,3,4,2,500,5,7,2
    // 03130 DATA 408,4,2,4,359,4,6,4,424,4,4,2,388,4,4,4
    // 03140 DATA 196,3,7,2,400,4,7,2,560,5,7,2,132,3,2,2
    // 03150 DATA 357,4,4,4,294,4,2,4,475,5,2,3,375,4,4,2
    // 03160 DATA 180,3,6,2,550,5,6,6

  Lbl_03170:
    // 03170 PRINT
    b2c_printf("");

  Lbl_03180:
    // 03180 G2=G2+S1
    G2_int = G2_int+S1_int;
    // 03190 PRINT "TOTAL PAR FOR";F-1;"HOLES IS";G3;"  YOUR TOTAL IS";G2
    b2c_printf("Total par forHoles is %d Holes is  your total is  your total is %d \n",G3_int,G2_int);
    // 03200 IF G1=F-1 THEN 3220
    if(G1_int==F_int-1)goto Lbl_03220;
    // 03210 GOTO 1350
    goto Lbl_01350;

  Lbl_03220:
    // 03220 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
