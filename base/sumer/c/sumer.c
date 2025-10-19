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
#include <unistd.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
char* data_01810s[]={"20","35","50","67","75","84","95","999"};
char* data_01820s[]={"400","10","0","0","0","0","750","675","10","300","2.5","750","75","400","15","40","0","1","0","5"};
char* UsingFmt_02040 = "sumer version 1.35   (%2d years)%s";
char* UsingFmt_02540 = "    and harvested %4.2f bushels per acre...%s";
char* UsingFmt_02560 = "the total harvest was therefore %8d bushels%s";
char* UsingFmt_02800 = "repay your debt to %-35s%s";
char* UsingFmt_02880 = " and %-33s%s";
char* UsingFmt_02990 = "thus you now have %8d bushels in your storehouse.%s";
char* UsingFmt_03110 = "    that you owe %-40s%s";
char* UsingFmt_03530 = "to your people...(at this juncture, you possess a mere %8d bushels)%s";
char* UsingFmt_05070 = "think, master you have only %8d bushels left in the storehouse.%s";
char* UsingFmt_05120 = "however, your neighbor %-34s%s";
char* UsingFmt_05400 = "however thou hast a mere %8d bushels%s";
char* UsingFmt_06100 = "honoured master, i and your %4d  loyal subjects,%s";
char* UsingFmt_06150 = "having prospered for %2d years under your reign,%s";
char* UsingFmt_06770 = "your performance was %-18s%s";
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1810,  8,data_01810s},
    { 1820, 20,data_01820s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
char*  Ruler_Performance_Evaluations[10];         // Basic: A$ 
int    A1_int;                                    // Basic: A1 
int    B_int;                                     // Basic: B 
char*  TimeStr;                                   // Basic: B$ 
int    C1_int;                                    // Basic: C1 
int    C2_int;                                    // Basic: C2 
int    C3_int;                                    // Basic: C3 
int    C4_int;                                    // Basic: C4 
char*  ClockStr();                                // Basic: CLK$ 
int    D_int;                                     // Basic: D 
int    D5_int;                                    // Basic: D5 
int    D9_int;                                    // Basic: D9 
int    E1_int;                                    // Basic: E1 
int    E2_int;                                    // Basic: E2 
int    E5_int;                                    // Basic: E5 
int    E8_int;                                    // Basic: E8 
int    E9_int;                                    // Basic: E9 
int    F3_int;                                    // Basic: F3 
int    F6_int;                                    // Basic: F6 
int    F7_int;                                    // Basic: F7 
int    F9_int;                                    // Basic: F9 
int    G1_int;                                    // Basic: G1 
int    G2_int;                                    // Basic: G2 
int    H3_int;                                    // Basic: H3 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    I2_int;                                    // Basic: I2 
int    I5_int;                                    // Basic: I5 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    N3_int;                                    // Basic: N3 
int    N4_int;                                    // Basic: N4 
int    N5_int;                                    // Basic: N5 
int    N6_int;                                    // Basic: N6 
int    N7_int;                                    // Basic: N7 
int    N8_int;                                    // Basic: N8 
int    N9_int;                                    // Basic: N9 
int    P_int;                                     // Basic: P 
int    P1_int;                                    // Basic: P1 
int    Q_int;                                     // Basic: Q 
int    Q1_int;                                    // Basic: Q1 
int    Q9_int;                                    // Basic: Q9 
int    R_int;                                     // Basic: R 
int    R9_int;                                    // Basic: R9 
int    S_int;                                     // Basic: S 
int    T_int_arr[8];                              // Basic: T 
int    W_int;                                     // Basic: W 
int    W0_int;                                    // Basic: W0 
int    W2_int;                                    // Basic: W2 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
char*  MoneyLender_Names[11];                     // Basic: Z$ 
int    Z8_int;                                    // Basic: Z8 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_06500();
void Routine_06620();
void Routine_06720();

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
    // 06490 REM SUBROUTINE TO READ ONE BUDGET FIGURE

void Routine_06500(){

  Lbl_06500:
    // 06500 INPUT B
    // Start of Basic INPUT statement 06500
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
    }; // End of Basic INPUT statement 06500
    // 06510 Q = INT(B)
    Q_int = INT(B_int);
    // 06520 IF Q = B GOTO 6570
    if(Q_int==B_int)goto Lbl_06570;
    // 06530 PRINT "LAND O'GOSHEN,MASTER, FRACTIONS!!  MY POOR LITTLE CPU REELS"
    b2c_printf("Land o'goshen,master, fractions!!  My poor little cpu reels\n");
    // 06540 PRINT"PLEASE GIVE ME THAT NUMBER AGAIN, OH GREAT ONE"
    b2c_printf("Please give me that number again, oh great one\n");
    // 06550 E9 = E9+INT(.5+RND(Q9+E9))
    E9_int = E9_int+INT(0.5+RND(Q9_int+E9_int));
    // 06560 GOTO 6500
    goto Lbl_06500;

  Lbl_06570:
    // 06570 IF Q = -73 GOTO 6590
    if(Q_int==-73)goto Lbl_06590;
    // 06580 GOTO 06600
    goto ChainExit;

  Lbl_06590:
    // 06590 CHAIN "DSK:BASIC.BAS",20
    b2c_chain("BASIC.BAS",20);

  ChainExit:
    // 06600 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 06610 REM SUBROUTINE TO DEDUCT 10% OF STOREHOUSE GRAIN FOR SILLY MISTAKES

void Routine_06620(){
    // 06620 I5 = I/10
    I5_int = I_int/10;
    // 06630 I5 = INT(I5)
    I5_int = INT(I5_int);
    // 06640 PRINT"FOR A GIFT OF BUT"I5" BUSHELS, I GUARANTEE THAT NO-ONE SHALL"
    b2c_printf("For a gift of but %d For a gift of but bushels, i guarantee that no-one shall\n",I5_int);
    // 06650 PRINT"EXPOSE YOUR STUPIDITY BEFORE THE POPULACE."
    b2c_printf("Expose your stupidity before the populace.\n");
    // 06660 PRINT
    b2c_printf("");
    // 06670 REM
    // 06680 I = I-I5
    I_int = I_int-I5_int;
    // 06690 PRINT "THANK YOU, SIRE.  NOW, PRAY TELL ME AGAIN,"
    b2c_printf("Thank you, sire.  Now, pray tell me again,\n");
    // 06700 GOTO 06710
    goto Lbl_06710;

  Lbl_06710:
    // 06710 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_06720(){
    // 06720 S = P*.8+I/40+N5/20-E8/2-G1*9-Y*4-(G2/(R+1))*3-F3*50-(D9/(R+1))*1.5+8
    S_int = P_int*0.8+I_int/40+N5_int/20-E8_int/2-G1_int*9-Y_int*4-(G2_int/(R_int+1))*3-F3_int*50-(D9_int/(R_int+1))*1.5+8;
    // 06730 FOR X = 1 TO 8
    for(X_int=1;X_int<=8;X_int++){
        // 06740 IF S<T(X) GOTO 6760
        if(S_int<T_int_arr[X_int])goto Lbl_06760;
        // 06750 NEXT X
        int dummy_6750=0; // Ignore this line.
    }; // End-For(X_int)

  Lbl_06760:
    // 06760 PRINT USING 6770,A$(X)
    b2c_printf(UsingFmt_06770,ST(Ruler_Performance_Evaluations[X_int]),"\n");
    // 06770 :YOUR PERFORMANCE WAS 'LLLLLLLLLLLLLLLLLL
    // 06780 GOTO 06790
    goto Lbl_06790;

  Lbl_06790:
    // 06790 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM ***********************************
    // 01010 REM ***                             ***
    // 01020 REM *** SUMER  V3.5 L2  JOHN MELLOR ***
    // 01030 REM ***                             ***
    // 01040 REM ***********************************
    // 01050 REM
    // 01060 REM LAST UPDATED: 04/05/74
    // 01070 REM ADAPTED FROM: DICK'S VERSION ON VM/370
    // 01080 REM
    // 01090 REM *** "SUMER" - GOVERNMENT EXERCISE (IMAGINARY KINGDOM) ***
    // 01100 REM *********************************************************
    // 01110 REM * PROGRAM DOCUMENTATION BLOCK:                          *
    // 01120 REM A  = INITIAL LAND OWNED - ACRES
    // 01130 REM A1 = DEFENSE BUDGET
    // 01140 REM A$ = RULER PERFORMANCE EVALUATIONS
    // 01150 REM B  = PRE-INTEGERIZED BUDGET FIGURE
    // 01160 REM D  = PEOPLE DEAD FROM STARVATION
    // 01170 REM D5 = PEOPLE DEAD FROM THE PLAGUE
    // 01180 REM D9 = CUMULATIVE DEATHS
    // 01190 REM E1 = ELECTION CONTRIBUTION
    // 01200 REM E2 = ELECTION FLAG (0 = NO ELECT, 1 = WIN, 2 = LOSS)
    // 01210 REM E5 = FIRST ELECTION FLAG 0 = NO ELECTION YET
    // 01220 REM E8 = CUMULATIVE ERROR COUNT
    // 01230 REM E9 = ERRORS THIS YEAR
    // 01240 REM F3 = RULER IS A FLOP FLAG (1= FLOP)
    // 01250 REM F6 = ACRES LEFT AFTER PROPOSED SALE OF LAND
    // 01260 REM F7 = NUMBER OF ACRES CAPABLE OF CULTIVATION
    // 01270 REM F9 = BRIBE TO PRIESTS
    // 01280 REM G1 = HUNGER FLAG (0 = NOT HUNGRY)
    // 01290 REM G2 = CUMULATIVE HARVEST QUALITY
    // 01300 REM H3 = GROSS HARVEST
    // 01310 REM I  = NET STOREHOUSE BUSHELS
    // 01320 REM I1 = NUMBER OF IMMIGRANTS
    // 01330 REM I2 = INTEREST RATE
    // 01340 REM I5 = AMOUNT OF BRIBE FOR M5
    // 01350 REM J  = RANDOM NUMBER
    // 01360 REM L  = AMOUNT BORROWED FROM GONZOR AND ALL HIS FRIENDS...
    // 01370 REM N1 = ACRES PLANTED
    // 01380 REM N2 = HARVEST DENSITY IN BUSHELS/ACRE
    // 01390 REM N3 = NET HARVEST
    // 01400 REM N4 = PSSSTOCK THEFT
    // 01410 REM N5 = ACRES OWNED
    // 01420 REM N6 = PRICE OF LAND
    // 01430 REM N7 = NUMBER OF ACRES BOUGHT
    // 01440 REM N8 = NUMBER OF ACRES SOLD
    // 01450 REM N9 = FOOD ALLOCATION
    // 01460 REM P  = POPULATION
    // 01470 REM P1 = PLAGUE FLAG (1 = PLAGUE)
    // 01480 REM Q  = BUDGET QUANTITY INPUT
    // 01490 REM R  = CURRENT YEAR NUMBER (ZERO ORIGIN INDEXING)
    // 01500 REM R9 = REVOLUTION FLAG (1 = NO REVOLUTION)
    // 01510 REM S  = SCORE
    // 01520 REM T  = PERFORMANCE SCORE GRADE POINTS
    // 01530 REM W  = BAD WEATHER FLAG (1  = STORMS)
    // 01540 REM W0 = WHO WE BORROWED FROM (INDEX INTO Z$)
    // 01550 REM X  = LOOP INDEX
    // 01560 REM Y  = TOTAL NUMBER OF YEARS FOR THIS GAME
    // 01570 REM Z$ = LIST OF NAMES OF MONEYLENDERS
    // 01580 REM
    // 01590 DIM T(8)
    // 01600 RANDOMIZE
    RANDOMIZE();
    // 01610 DIM Z$(11)
    // 01620 A$(1) = "GHASTLY"
    GLBpStr="Ghastly";
    Ruler_Performance_Evaluations[1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01630 A$(2) = "APPALLING"
    GLBpStr="Appalling";
    Ruler_Performance_Evaluations[2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01640 A$(3) = "SLUGGISH AT BEST"
    GLBpStr="Sluggish at best";
    Ruler_Performance_Evaluations[3] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01650 A$(4) = "SO-SO"
    GLBpStr="So-so";
    Ruler_Performance_Evaluations[4] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01660 A$(5) = "GOOD"
    GLBpStr="Good";
    Ruler_Performance_Evaluations[5] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01670 A$(6) = "VERY GOOD"
    GLBpStr="Very good";
    Ruler_Performance_Evaluations[6] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01680 A$(7) = "EXCELLENT"
    GLBpStr="Excellent";
    Ruler_Performance_Evaluations[7] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01690 A$(8) = "SUPER FANTASTIC"
    GLBpStr="Super fantastic";
    Ruler_Performance_Evaluations[8] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01700 Z$(1) = "IGNARP THE HAIRLESS"
    GLBpStr="Ignarp the hairless";
    MoneyLender_Names[1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01710 Z$(5) = "GONZOR THE TOOTHLESS"
    GLBpStr="Gonzor the toothless";
    MoneyLender_Names[5] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01720 Z$(10) = "THE THUMBSCREW COLLECTION AGENCY"
    GLBpStr="The thumbscrew collection agency";
    MoneyLender_Names[10] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01730 Z$(3) = "WILVILLE AND ORBUR"
    GLBpStr="Wilville and orbur";
    MoneyLender_Names[3] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01740 Z$(8) = "TRAXLER THE WISE"
    GLBpStr="Traxler the wise";
    MoneyLender_Names[8] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01750 Z$(4) = "THUNDERMUG THE ODIFEROUS"
    GLBpStr="Thundermug the odiferous";
    MoneyLender_Names[4] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01760 Z$(11) = "DICKY THE TRICKY"
    GLBpStr="Dicky the tricky";
    MoneyLender_Names[11] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01770 Z$(2) = "YGGDRASIL THE STRANGE"
    GLBpStr="Yggdrasil the strange";
    MoneyLender_Names[2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01780 Z$(7) = "THE TREEFROG FINANCE COMPANY"
    GLBpStr="The treefrog finance company";
    MoneyLender_Names[7] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01790 Z$(9) = "ZARDOZ THE WICKED"
    GLBpStr="Zardoz the wicked";
    MoneyLender_Names[9] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01800 Z$(6) = "SHOOGAR THE MAGICIAN"
    GLBpStr="Shoogar the magician";
    MoneyLender_Names[6] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01810 DATA 20,35,50,67,75,84,95,999
    // 01820 DATA 400,10,0,0,0,0,750,675,10,300,2.5,750,75,400,15,40,0,1,0,5
    // 01830 MAT READ T
    for(int d0=0;d0<=7;d0++){
        T_int_arr[d0] = Get_Data_Int();
    }
    // 01840 READ A,D,E2,E5,E8,E9,H3,I,I1,N1,N2,N3,N4,N5,N6,P,R,R9,W,Y
    A_int = Get_Data_Int();
    D_int = Get_Data_Int();
    E2_int = Get_Data_Int();
    E5_int = Get_Data_Int();
    E8_int = Get_Data_Int();
    E9_int = Get_Data_Int();
    H3_int = Get_Data_Int();
    I_int = Get_Data_Int();
    I1_int = Get_Data_Int();
    N1_int = Get_Data_Int();
    N2_int = Get_Data_Int();
    N3_int = Get_Data_Int();
    N4_int = Get_Data_Int();
    N5_int = Get_Data_Int();
    N6_int = Get_Data_Int();
    P_int = Get_Data_Int();
    R_int = Get_Data_Int();
    R9_int = Get_Data_Int();
    W_int = Get_Data_Int();
    Y_int = Get_Data_Int();
    // 01850 D9 = 0
    D9_int = 0;
    // 01860 F3 = 0
    F3_int = 0;
    // 01870 L  = 0
    L_int = 0;
    // 01880 G1 = 0
    G1_int = 0;
    // 01890 P1 = 0
    P1_int = 0;
    // 01900 G2 = 0
    G2_int = 0;
    // 01910 Q9 = 150
    Q9_int = 150;
    // 01920 B$ = CLK$
    GLBpStr=ClockStr();
    TimeStr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01930 CHANGE B$ TO W2
    W2_int = atoi(TimeStr);
    // 01940 W2 = W2 + 50 * RND(P)
    W2_int = W2_int+50*RND(P_int);
    // 01950 J  = INT(RND(W2)*100+1)
    J_int = INT(RND(W2_int)*100+1);
    // 01960 J  = RND(J)
    J_int = RND(J_int);
    // 01970 Z  = J
    Z_int = J_int;
    // 01980 J  = RND( INT( SQR( Z * Z + .5)))
    J_int = RND(INT(SQR(Z_int*Z_int+0.5)));
    // 01990 N6 = INT( 7 * J + 13)
    N6_int = INT(7*J_int+13);
    // 02000 Y  =  INT( RND(J)*5) + 8
    Y_int = INT(RND(J_int)*5)+8;
    // 02010 IF Y > 4 GOTO 2030
    if(Y_int>4)goto MinYearsOK;
    // 02020 Y  = 5
    Y_int = 5;

  MinYearsOK:
    // 02030 PRINT USING 2040,Y
    b2c_printf(UsingFmt_02040,IT(Y_int),"\n");
    // 02040 :SUMER VERSION 1.35   (## YEARS)
    // 02050 PRINT
    b2c_printf("");
    // 02060 PRINT
    b2c_printf("");
    // 02070 PRINT "MY LORD AND MASTER,"
    b2c_printf("My lord and master,\n");
    // 02080 PRINT "ABSOLUTE RULER OF SUMER,"
    b2c_printf("Absolute ruler of sumer,\n");
    // 02090 PRINT "I, YOUR HUMBLE SERVANT, THE M5 MULTITRONIC UNIT,"
    b2c_printf("I, your humble servant, the m5 multitronic unit,\n");
    // 02100 PRINT "BEG TO REPORT ON THE STATE OF YOUR DOMAIN..."
    b2c_printf("Beg to report on the state of your domain...\n");
    // 02110 REM
    // 02120 REM SUBSEQUENT YEARS LOOP BACK TO NEXT STATEMENT
    // 02130 REM

  StateOfDomain:
    // 02140 PRINT "IT IS NOW YEAR"R+1" OF YOUR REIGN."
    b2c_printf("It is now year of your reign.\n");
    // 02150 PRINT "LAST YEAR" D" PE";
    b2c_printf("Last year %d Last year pe pe\n",D_int);
    // 02160 IF D = 1 GOTO 2190
    if(D_int==1)goto SingleDeath;
    // 02170 PRINT "OPLE";
    b2c_printf("Ople");
    // 02180 GOTO 2200
    goto NumbImigrants;

  SingleDeath:
    // 02190 PRINT "RSON";
    b2c_printf("Rson");

  NumbImigrants:
    // 02200 PRINT " DIED AND"I1" IMMIGRANT";
    b2c_printf(" died and %d  died and immigrant immigrant\n",I1_int);
    // 02210 IF I1 = 1 GOTO 2230
    if(I1_int==1)goto SingleImigrant;
    // 02220 PRINT "S";
    b2c_printf("S");

  SingleImigrant:
    // 02230 PRINT " CAME INTO YOUR DOMAIN"
    b2c_printf(" came into your domain\n");
    // 02240 D9 = D9 + D
    D9_int = D9_int+D_int;
    // 02250 IF I1 > 0 GOTO 2280
    if(I1_int>0)goto CheckPlague;
    // 02260 PRINT "(YOU'VE BEEN RECEIVING A BAD PRESS LATELY...)"
    b2c_printf("(you've been receiving a bad press lately...)\n");
    // 02270 GOTO 2370
    goto PopulationSummary;

  CheckPlague:
    // 02280 IF P1 = 1 GOTO 2300
    if(P1_int==1)goto BroughtPlague;
    // 02290 GOTO 2370
    goto PopulationSummary;

  BroughtPlague:
    // 02300 IF I1 < 2 GOTO 2370
    if(I1_int<2)goto PopulationSummary;
    // 02310 PRINT "MOST REGRETTABLY, THEY BROUGHT WITH THEM A MYSTERIOUS PLAGUE"
    b2c_printf("Most regrettably, they brought with them a mysterious plague\n");
    // 02320 J  = RND(J)
    J_int = RND(J_int);
    // 02330 D5 = INT( I1 / 2 + 10 * J * I1 / P)
    D5_int = INT(I1_int/2+10*J_int*I1_int/P_int);
    // 02340 D9 = D9 + D5
    D9_int = D9_int+D5_int;
    // 02350 P  = P - D5
    P_int = P_int-D5_int;
    // 02360 PRINT " AND"D5" PEOPLE DIED IN THE ENSUING EPIDEMIC."
    b2c_printf(" and %d  and people died in the ensuing epidemic.\n",D5_int);

  PopulationSummary:
    // 02370 PRINT "THE PRESENT POPULATION OF SUMER IS THEREFORE"P;
    b2c_printf("The present population of sumer is therefore %d The present population of sumer is therefore\n",P_int);
    // 02380 IF G1 = 0 GOTO 2410
    if(G1_int==0)goto LoyalSubjects;
    // 02390 PRINT "HUNGRY SUBJECTS"
    b2c_printf("Hungry subjects\n");
    // 02400 GOTO 2420
    goto CheckMinPopulation;

  LoyalSubjects:
    // 02410 PRINT "LOYAL SUBJECTS"
    b2c_printf("Loyal subjects\n");

  CheckMinPopulation:
    // 02420 IF P > 9 GOTO 2470
    if(P_int>9)goto CheckPeasantWeight;
    // 02430 PRINT "WE WHO REMAIN HAVE DECIDED TO LEAVE FOR A HEALTHIER PLANET."
    b2c_printf("We who remain have decided to leave for a healthier planet.\n");

  RulerIsFlop:
    // 02440 PRINT "FRANKLY, MASTER, AS A RULER YOU ARE A FLOP"
    b2c_printf("Frankly, master, as a ruler you are a flop\n");
    // 02450 F3 = 1
    F3_int = 1;
    // 02460 GOTO 6220
    goto DspPerformanceAndExit;

  CheckPeasantWeight:
    // 02470 PRINT
    b2c_printf("");
    // 02480 IF Q9 < 150 GOTO 2500
    if(Q9_int<150)goto ReportPeasantWeight;
    // 02490 N2 = (150 * 150) / (Q9 * Q9) * N2
    N2_int = (150*150)/(Q9_int*Q9_int)*N2_int;

  ReportPeasantWeight:
    // 02500 PRINT "THE PEASANTS NOW WEIGH "Q9 "LBS."
    b2c_printf("The peasants now weigh  %d The peasants now weigh Lbs.\n",Q9_int);
    // 02510 G2 = G2 + N2
    G2_int = G2_int+N2_int;
    // 02520 PRINT "WE PLANTED"N1" OF YOUR"N5" ACRES LAST YEAR"
    b2c_printf("We planted %d We planted of your of your %d  of your acres last year\n",N1_int,N5_int);
    // 02530 PRINT USING 2540,N2
    b2c_printf(UsingFmt_02540,FT(N2_int),"\n");
    // 02540 :    AND HARVESTED #.## BUSHELS PER ACRE...
    // 02550 PRINT USING 2560,H3
    b2c_printf(UsingFmt_02560,IT(H3_int),"\n");
    // 02560 :THE TOTAL HARVEST WAS THEREFORE ######## BUSHELS
    // 02570 IF W  = 0 GOTO 2700
    if(W_int==0)goto RptPssstockTheft2;
    // 02580 IF H3 = 0 GOTO 2610
    if(H3_int==0)goto GoodWeather;
    // 02590 PRINT "BUT, UNFORTUNATELY, STORMS DESTROYED HALF YOUR CROP"
    b2c_printf("But, unfortunately, storms destroyed half your crop\n");
    // 02600 G2 = G2 - N2 / 2
    G2_int = G2_int-N2_int/2;

  GoodWeather:
    // 02610 W  = 0
    W_int = 0;
    // 02620 IF N4 = 0 GOTO 2680
    if(N4_int==0)goto RptPssstockTheft1;

  MultipleCalamities:
    // 02630 PRINT "AND";
    b2c_printf("And");

  ReportPssstockTheft:
    // 02640 PRINT " THE PSSSTOCK";
    b2c_printf(" the pssstock");
    // 02650 IF N4 = 0 GOTO 2730
    if(N4_int==0)goto RaidersRepelled;
    // 02660 PRINT "S STOLE"N4" BUSHELS"
    b2c_printf("S stole %d S stole bushels\n",N4_int);
    // 02670 IF W = 0 GOTO 2740
    if(W_int==0)goto CalcLenderRepayment;

  RptPssstockTheft1:
    // 02680 PRINT "- HOWEVER";
    b2c_printf("- however");
    // 02690 GOTO 2640
    goto ReportPssstockTheft;

  RptPssstockTheft2:
    // 02700 IF N4 = 0 GOTO 2630
    if(N4_int==0)goto MultipleCalamities;
    // 02710 PRINT "BUT";
    b2c_printf("But");
    // 02720 GOTO 2640
    goto ReportPssstockTheft;

  RaidersRepelled:
    // 02730 PRINT " RAIDERS WERE SUCCESSFULLY REPELLED"
    b2c_printf(" raiders were successfully repelled\n");

  CalcLenderRepayment:
    // 02740 IF L <= 0 GOTO 2970
    if(L_int<=0)goto ReportStorehouse;
    // 02750 L = INT( ((100 + I2) * L) / 100)
    L_int = INT(((100+I2_int)*L_int)/100);
    // 02760 IF I >= L GOTO 2870
    if(I_int>=L_int)goto RptLenderRepayment;
    // 02770 IF I + (N5-P)*(N6/6)<L GOTO 3080
    if(I_int+(N5_int-P_int)*(N6_int/6)<L_int)goto RptRulerIsFlop;
    // 02780 PRINT "UNFORTUNATELY, YOU DO NOT HAVE ENOUGH GRAIN LEFT TO "
    b2c_printf("Unfortunately, you do not have enough grain left to \n");
    // 02790 PRINT USING 2800, Z$(W0)
    b2c_printf(UsingFmt_02800,ST(MoneyLender_Names[W0_int]),"\n");
    // 02800 :REPAY YOUR DEBT TO 'LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
    // 02810 PRINT "OF "L" BUSHELS. HOWEVER, IN HIS INFINITE GENEROSITY, HE HAS"
    b2c_printf("Of  %d Of  bushels. However, in his infinite generosity, he has\n",L_int);
    // 02820 PRINT "DECIDED NOT TO FORECLOSE ON OUR KINGDOM BUT WILL TAKE"
    b2c_printf("Decided not to foreclose on our kingdom but will take\n");
    // 02830 PRINT "LAND IN REPAYMENT AT ONE-SIXTH THE GOING RATE (IN"
    b2c_printf("Land in repayment at one-sixth the going rate (in\n");
    // 02840 PRINT "ADDITION TO THE GRAIN IN THE STOREHOUSE) UNTIL YOUR DEBT"
    b2c_printf("Addition to the grain in the storehouse) until your debt\n");
    // 02850 PRINT "IS PAID."
    b2c_printf("Is paid.\n");
    // 02860 GOTO 2910
    goto SellLandToPayLenders;

  RptLenderRepayment:
    // 02870 PRINT USING 2880,Z$(W0)
    b2c_printf(UsingFmt_02880,ST(MoneyLender_Names[W0_int]),"\n");
    // 02880 : AND 'LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
    // 02890 PRINT "COLLECTED THE "L" BUSHELS  THAT YOU OWED."
    b2c_printf("Collected the  %d Collected the  bushels  that you owed.\n",L_int);
    // 02900 GOTO 2960
    goto PayOffLenders;

  SellLandToPayLenders:
    // 02910 Z8 = INT((6*(L-I)/N6)+.5)
    Z8_int = INT((6*(L_int-I_int)/N6_int)+0.5);
    // 02920 N5 = N5 - Z8
    N5_int = N5_int-Z8_int;
    // 02930 PRINT "YOU THEREFORE HAVE "N5" ACRES OF LAND REMAINING."
    b2c_printf("You therefore have  %d You therefore have  acres of land remaining.\n",N5_int);
    // 02940 I = 0
    I_int = 0;
    // 02950 GOTO 2970
    goto ReportStorehouse;

  PayOffLenders:
    // 02960 I = I - L
    I_int = I_int-L_int;

  ReportStorehouse:
    // 02970 L = 0
    L_int = 0;
    // 02980 PRINT USING 2990,I
    b2c_printf(UsingFmt_02990,IT(I_int),"\n");
    // 02990 :THUS YOU NOW HAVE ######## BUSHELS IN YOUR STOREHOUSE.
    // 03000 IF E2 = 0 GOTO 3200
    if(E2_int==0)goto ChkTermOfOfficeExpired;
    // 03010 IF E1 > 0 GOTO 3150
    if(E1_int>0)goto ChkLostElection;
    // 03020 IF E1 < 0 GOTO 3040
    if(E1_int<0)goto Coup_DEtat;
    // 03030 IF E2 = 1 GOTO 3060
    if(E2_int==1)goto Dictatorship;

  Coup_DEtat:
    // 03040 PRINT "HOWEVER, ALAS! A RECENT COUP D'ETAT HAS DEPOSED YOU FROM OFFICE."
    b2c_printf("However, alas! A recent coup d'etat has deposed you from office.\n");
    // 03050 GOTO 2440
    goto RulerIsFlop;

  Dictatorship:
    // 03060 PRINT "LUCKILY, YOU MANAGED TO MAINTAIN YOUR DICTATORSHIP DURING THE YEAR."
    b2c_printf("Luckily, you managed to maintain your dictatorship during the year.\n");
    // 03070 GOTO 3190
    goto NoElectionDictatorship;

  RptRulerIsFlop:
    // 03080 PRINT USING 2990,I
    b2c_printf(UsingFmt_02990,IT(I_int),"\n");
    // 03090 PRINT "HOWEVER AND ALAS! THIS IS LESS THAN THE "L" BUSHELS"
    b2c_printf("However and alas! This is less than the  %d However and alas! This is less than the  bushels\n",L_int);
    // 03100 PRINT USING 3110,Z$(W0)
    b2c_printf(UsingFmt_03110,ST(MoneyLender_Names[W0_int]),"\n");
    // 03110 :    THAT YOU OWE 'LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
    // 03120 PRINT " WE HAVE THEREFORE BEEN FORECLOSED"
    b2c_printf(" we have therefore been foreclosed\n");
    // 03130 PRINT "   ON YOUR HAPPY KINGDOM.  YOU ARE DEPOSED."
    b2c_printf("   on your happy kingdom.  You are deposed.\n");
    // 03140 GOTO 2440
    goto RulerIsFlop;

  ChkLostElection:
    // 03150 IF E2 = 1 GOTO 3180
    if(E2_int==1)goto WonElection;
    // 03160 PRINT "ALAS! YOU LOST THE ELECTION - IT THEREFORE SEEMS"
    b2c_printf("Alas! You lost the election - it therefore seems\n");
    // 03170 GOTO 2440
    goto RulerIsFlop;

  WonElection:
    // 03180 PRINT "LUCKILY, THE ELECTION GAVE YOU THE REQUIRED MAJORITY."
    b2c_printf("Luckily, the election gave you the required majority.\n");

  NoElectionDictatorship:
    // 03190 E2 = 0
    E2_int = 0;

  ChkTermOfOfficeExpired:
    // 03200 PRINT
    b2c_printf("");
    // 03210 REM
    // 03220 REM TEST IF TERM OF OFFICE HAS EXPIRED
    // 03230 REM
    // 03240 IF R >= Y GOTO 6090
    if(R_int>=Y_int)goto YearsSufferedUnderReign;
    // 03250 IF E9 > 1 GOTO 3280
    if(E9_int>1)goto ChkTimeForElection;
    // 03260 IF R = INT(Y/2) GOTO 3280
    if(R_int==INT(Y_int/2))goto ChkTimeForElection;
    // 03270 GOTO 3600
    goto FirstYearRuleDsp;

  ChkTimeForElection:
    // 03280 IF E5 = 0 GOTO 3310
    if(E5_int==0)goto FirstElection;
    // 03290 PRINT "AGAIN"
    b2c_printf("Again\n");
    // 03300 GOTO 3330
    goto ExplainElection;

  FirstElection:
    // 03310 PRINT "NOW";
    b2c_printf("Now");
    // 03320 E5 = 1
    E5_int = 1;

  ExplainElection:
    // 03330 PRINT ", A MOVEMENT IS AFOOT TO OUST YOU FROM OFFICE AND"
    b2c_printf(", a movement is afoot to oust you from office and\n");
    // 03340 PRINT "YOUR ADVISERS URGE YOU TO OBTAIN A MANDATE FROM THE PEOPLE."
    b2c_printf("Your advisers urge you to obtain a mandate from the people.\n");
    // 03350 PRINT "SHOULD YOU DECIDE TO HOLD AN ELECTION,"
    b2c_printf("Should you decide to hold an election,\n");
    // 03360 PRINT "YOUR CAMPAIGN WORKERS MAY BE PAID IN BUSHELS OF GRAIN:"
    b2c_printf("Your campaign workers may be paid in bushels of grain:\n");
    // 03370 PRINT "NOW, ";
    b2c_printf("Now, ");

  PayCampaignWorkers:
    // 03380 PRINT "HOW MANY (IF ANY) BUSHELS DO YOU WISH TO DISTRIBUTE IN THIS MANNER?"
    b2c_printf("How many (if any) bushels do you wish to distribute in this manner?\n");
    // 03390 GOSUB 6500
    Routine_06500();
    // 03400 E1 = Q
    E1_int = Q_int;
    // 03410 E8 = E8 + E9
    E8_int = E8_int+E9_int;
    // 03420 E9 = 0
    E9_int = 0;
    // 03430 E2 = 1
    E2_int = 1;
    // 03440 IF E1 = 0 GOTO 3600
    if(E1_int==0)goto FirstYearRuleDsp;
    // 03450 IF E1 > 0 GOTO 3500
    if(E1_int>0)goto Cheapscape;
    // 03460 PRINT "OH, MASTER!! THEFT FROM THY CAMPAIGN WORKERS"
    b2c_printf("Oh, master!! Theft from thy campaign workers\n");
    // 03470 PRINT "    IS A PUNISHABLE OFFENCE!"
    b2c_printf("    is a punishable offence!\n");
    // 03480 GOSUB 6620
    Routine_06620();
    // 03490 GOTO 3380
    goto PayCampaignWorkers;

  Cheapscape:
    // 03500 IF I > E1 GOTO 3570
    if(I_int>E1_int)goto CampaignWorkersHappy;
    // 03510 PRINT "YOUR GENEROSITY, SIRE, IS A SOURCE OF CONTINUAL EMBARRASSMENT"
    b2c_printf("Your generosity, sire, is a source of continual embarrassment\n");
    // 03520 PRINT USING 3530,I
    b2c_printf(UsingFmt_03530,IT(I_int),"\n");
    // 03530 :TO YOUR PEOPLE...(AT THIS JUNCTURE, YOU POSSESS A MERE ######## BUSHELS)
    // 03540 E9 = E9 + INT(.5 + RND(Q9 + E9))
    E9_int = E9_int+INT(0.5+RND(Q9_int+E9_int));
    // 03550 PRINT "PLEASE TELL ME AGAIN:"
    b2c_printf("Please tell me again:\n");
    // 03560 GOTO 3380
    goto PayCampaignWorkers;

  CampaignWorkersHappy:
    // 03570 PRINT "THANK YOU, SIRE...."
    b2c_printf("Thank you, sire....\n");
    // 03580 PRINT "AN ELECTION WILL BE HELD TO STABILIZE CONFIDENCE IN YOUR REGIME."
    b2c_printf("An election will be held to stabilize confidence in your regime.\n");
    // 03590 I = I - E1
    I_int = I_int-E1_int;

  FirstYearRuleDsp:
    // 03600 IF R >= 1 GOTO 3650
    if(R_int>=1)goto Chk1stYearWeather;
    // 03610 PRINT "THE GODS DECREE THAT ONE BUSHEL IS REQUIRED TO PLANT ONE ACRE AND"
    b2c_printf("The gods decree that one bushel is required to plant one acre and\n");
    // 03620 PRINT "THE LAWS DECREE THAT ONE ACRE PER PERSON MUST BE SET ASIDE"
    b2c_printf("The laws decree that one acre per person must be set aside\n");
    // 03630 PRINT "    FOR NON-AGRICULTURAL USE"
    b2c_printf("    for non-agricultural use\n");
    // 03640 PRINT
    b2c_printf("");

  Chk1stYearWeather:
    // 03650 IF RND(0) * 8 > 6 GOTO 3670
    if(RND(0)*8>6)goto ProphesyBadWeather;
    // 03660 GOTO 3930
    goto ChkCrowding;

  ProphesyBadWeather:
    // 03670 PRINT "SOOTHSAYERS ARE PROPHESYING BAD WEATHER THIS SUMMER, MASTER."
    b2c_printf("Soothsayers are prophesying bad weather this summer, master.\n");
    // 03680 W  = 1
    W_int = 1;
    // 03690 IF I > 2*P+N5+L+100 GOTO 3930
    if(I_int>2*P_int+N5_int+L_int+100)goto ChkCrowding;
    // 03700 PRINT "THAT'S KIND OF A ROUGH BLOW, MASTER.  IF YOU WISH, YOU MAY"
    b2c_printf("That's kind of a rough blow, master.  If you wish, you may\n");
    // 03710 PRINT "EMPLOY THE PRIESTS IN AN EFFORT TO WARD OFF THE BAD WEATHER."
    b2c_printf("Employ the priests in an effort to ward off the bad weather.\n");
    // 03720 PRINT "NOW, HOW MANY (IF ANY) BUSHELS DO YOU WISH TO GIVE THE"
    b2c_printf("Now, how many (if any) bushels do you wish to give the\n");
    // 03730 PRINT "PRIESTS FOR THIS CEREMONY?"
    b2c_printf("Priests for this ceremony?\n");
    // 03740 GOSUB 6500
    Routine_06500();
    // 03750 F9 = Q
    F9_int = Q_int;
    // 03760 IF F9 > 0 GOTO 3800
    if(F9_int>0)goto ChkPriestsPayoff;
    // 03770 PRINT "DE PREESTS AIN'T GONNA LIKE BEIN TAXED, MASTER."
    b2c_printf("De preests ain't gonna like bein taxed, master.\n");
    // 03780 E9 = E9 + INT( RND( J) + .5)
    E9_int = E9_int+INT(RND(J_int)+0.5);
    // 03790 F9 = 0
    F9_int = 0;

  ChkPriestsPayoff:
    // 03800 IF F9 = 0 GOTO 3930
    if(F9_int==0)goto ChkCrowding;
    // 03810 IF F9<=I GOTO 3850
    if(F9_int<=I_int)goto PriestsPaidOff;
    // 03820 E9=E9+INT(RND(J)+.5)
    E9_int = E9_int+INT(RND(J_int)+0.5);
    // 03830 PRINT "YOU AIN'T GOT THAT MUCH. I'M GONNA BLOW THE WHOLE WAD, MASTER."
    b2c_printf("You ain't got that much. I'm gonna blow the whole wad, master.\n");
    // 03840 F9 = I
    F9_int = I_int;

  PriestsPaidOff:
    // 03850 PRINT "THANK YOU, EMINENCE.  THE PRIESTS WILL DO THEIR THING!"
    b2c_printf("Thank you, eminence.  The priests will do their thing!\n");
    // 03860 REM CALC. CHANCES OF SUCCESSFUL RAIN DANCE
    // 03870 W = 1-(F9/P)*RND(J)
    W_int = 1-(F9_int/P_int)*RND(J_int);
    // 03880 W = INT(W)
    W_int = INT(W_int);
    // 03890 IF W>0 GOTO 3910
    if(W_int>0)goto ChkBadWeatherRng;
    // 03900 W = 0
    W_int = 0;

  ChkBadWeatherRng:
    // 03910 IF W<1 GOTO 3930
    if(W_int<1)goto ChkCrowding;
    // 03920 W = 1
    W_int = 1;

  ChkCrowding:
    // 03930 PRINT"THIS YEAR WE CAN BUY OR SELL LAND FOR"N6" BUSHELS PER ACRE."
    b2c_printf("This year we can buy or sell land for %d This year we can buy or sell land for bushels per acre.\n",N6_int);
    // 03940 IF 5*P<N5 GOTO 3970
    if(5*P_int<N5_int)goto QuestionBuyLand;
    // 03950 PRINT"HOWEVER, I RESPECTFULLY REMIND YOU THAT SUMER IS BECOMING"
    b2c_printf("However, i respectfully remind you that sumer is becoming\n");
    // 03960 PRINT"    RATHER OVERCROWDED, SO"
    b2c_printf("    rather overcrowded, so\n");

  QuestionBuyLand:
    // 03970 PRINT "HOW MANY ACRES OF LAND DO YOU WISH TO BUY THIS YEAR?"
    b2c_printf("How many acres of land do you wish to buy this year?\n");
    // 03980 IF N6>12 GOTO 4000
    if(N6_int>12)goto AskBuyLandAmount;
    // 03990 PRINT "(THE PRICE IS RIGHT!)"
    b2c_printf("(the price is right!)\n");

  AskBuyLandAmount:
    // 04000 GOSUB6500
    Routine_06500();
    // 04010 N7 = Q
    N7_int = Q_int;
    // 04020 IF N7 = 0 GOTO 4070
    if(N7_int==0)goto QuestionSellLand;
    // 04030 IF N7>0 GOTO 4170
    if(N7_int>0)goto ChkBuyLandAmount;
    // 04040 PRINT "IT IS WRITTEN THAT THOU CANST NOT BUY A NEGATIVE NUMBER OF ACRES."
    b2c_printf("It is written that thou canst not buy a negative number of acres.\n");

  AskBuyLandAmountError:
    // 04050 E9 = E9+INT(.5+RND(Q9+E9))
    E9_int = E9_int+INT(0.5+RND(Q9_int+E9_int));
    // 04060 GOTO 3970
    goto QuestionBuyLand;

  QuestionSellLand:
    // 04070 PRINT "HOW MANY ACRES DO YOU WISH TO SELL?"
    b2c_printf("How many acres do you wish to sell?\n");
    // 04080 IF N6<20 GOTO 4100
    if(N6_int<20)goto AskSellLandAmount;
    // 04090 PRINT"(THE PRICE IS RIGHT!)"
    b2c_printf("(the price is right!)\n");

  AskSellLandAmount:
    // 04100 GOSUB6500
    Routine_06500();
    // 04110 N8 = Q
    N8_int = Q_int;
    // 04120 IF N8 = 0 GOTO 4460
    if(N8_int==0)goto AskDistributeFood;
    // 04130 IF N8>0 GOTO 4270
    if(N8_int>0)goto CalcLandOwned;
    // 04140 PRINT"IT IS WRITTEN THAT THOU CANST NOT SELL A NEGATIVE NUMBER OF ACRES."
    b2c_printf("It is written that thou canst not sell a negative number of acres.\n");

  AskSellLandAmountError:
    // 04150 E9 = E9+INT(.5+RND(Q9+E9))
    E9_int = E9_int+INT(0.5+RND(Q9_int+E9_int));
    // 04160 GOTO 4070
    goto QuestionSellLand;

  ChkBuyLandAmount:
    // 04170 IF I-N6*N7 = 0 GOTO 4240
    if(I_int-N6_int*N7_int==0)goto WarnLowGrain;
    // 04180 IF I-N6*N7>0 GOTO 4420
    if(I_int-N6_int*N7_int>0)goto CalcLandBoughtCost;
    // 04190 PRINT"MUCH THOUGH I WOULD LIKE TO EFFECT THIS TRANSACTION ON YOUR BEHALF,"
    b2c_printf("Much though i would like to effect this transaction on your behalf,\n");
    // 04200 PRINT"MASTER, IT WOULD COST"N6*N7" BUSHELS -- WHICH IS"
    b2c_printf("Master, it would cost bushels -- which is\n");
    // 04210 PRINT"MORE THAN THE"I" BUSHELS IN YOUR STOREHOUSE."
    b2c_printf("More than the %d More than the bushels in your storehouse.\n",I_int);
    // 04220 PRINT"THEREFORE, PLEASE RECONSIDER:"
    b2c_printf("Therefore, please reconsider:\n");
    // 04230 GOTO 4050
    goto AskBuyLandAmountError;

  WarnLowGrain:
    // 04240 PRINT"YOU WILL HAVE NO GRAIN LEFT IN THE STOREHOUSE FOR SEED."
    b2c_printf("You will have no grain left in the storehouse for seed.\n");
    // 04250 GOSUB 6620
    Routine_06620();
    // 04260 GOTO 4050
    goto AskBuyLandAmountError;

  CalcLandOwned:
    // 04270 IF N5-N8 = 0 GOTO 4330
    if(N5_int-N8_int==0)goto NoLandLeftError;
    // 04280 IF N5-N8>P GOTO 4390
    if(N5_int-N8_int>P_int)goto CalcLandSoldPayment;
    // 04290 IF N5>N8 GOTO 4350
    if(N5_int>N8_int)goto LittleLandLeftError;
    // 04300 PRINT"GOOD GRIEF, MASTER.  YOU HAVE ONLY"N5" ACRES."
    b2c_printf("Good grief, master.  You have only %d Good grief, master.  You have only acres.\n",N5_int);

  LandSaleError:
    // 04310 GOSUB6620
    Routine_06620();
    // 04320 GOTO 4150
    goto AskSellLandAmountError;

  NoLandLeftError:
    // 04330 PRINT "HEAVENS, MASTER! YOU WILL HAVE NO LAND LEFT!!"
    b2c_printf("Heavens, master! You will have no land left!!\n");
    // 04340 GOTO 4310
    goto LandSaleError;

  LittleLandLeftError:
    // 04350 F6 = N5-N8
    F6_int = N5_int-N8_int;
    // 04360 PRINT "BY GOSH, MASTER! IF"P" PEOPLE ARE CRAMMED INTO "F6" ACRES,"
    b2c_printf("By gosh, master! If %d By gosh, master! If people are crammed into  people are crammed into  %d  people are crammed into  acres,\n",P_int,F6_int);
    // 04370 PRINT "THERE WILL BE TROUBLE AT THE PALACE TONIGHT!"
    b2c_printf("There will be trouble at the palace tonight!\n");
    // 04380 GOTO 4310
    goto LandSaleError;

  CalcLandSoldPayment:
    // 04390 N5 = N5-N8
    N5_int = N5_int-N8_int;
    // 04400 I = I+N6*N8
    I_int = I_int+N6_int*N8_int;
    // 04410 GOTO 4440
    goto RptStorehouseBushels;

  CalcLandBoughtCost:
    // 04420 N5 = N5+N7
    N5_int = N5_int+N7_int;
    // 04430 I = I-N6*N7
    I_int = I_int-N6_int*N7_int;

  RptStorehouseBushels:
    // 04440 PRINT"AS YOU KNOW, MASTER, THAT MEANS THERE ARE NOW"I"BUSHELS"
    b2c_printf("As you know, master, that means there are now %d As you know, master, that means there are nowBushels\n",I_int);
    // 04450 PRINT"     STASHED IN THE STOREHOUSE."
    b2c_printf("     stashed in the storehouse.\n");

  AskDistributeFood:
    // 04460 PRINT "HOW MANY BUSHELS OF GRAIN DO YOU WISH TO DISTRIBUTE AS FOOD?"
    b2c_printf("How many bushels of grain do you wish to distribute as food?\n");
    // 04470 GOSUB6500
    Routine_06500();
    // 04480 N9 = Q
    N9_int = Q_int;
    // 04490 G1 = 0
    G1_int = 0;
    // 04500 IF N9>= P GOTO 4630
    if(N9_int>=P_int)goto ChkSeedRemaining;
    // 04510 G1 = 1
    G1_int = 1;
    // 04520 IF N9>= 0 GOTO 4550
    if(N9_int>=0)goto TooLittleFood;
    // 04530 PRINT "I KNOW NOT THE MEANING OF NEGATIVE NUMBERS, MASTER."
    b2c_printf("I know not the meaning of negative numbers, master.\n");
    // 04540 GOTO 4670
    goto SeedError;

  TooLittleFood:
    // 04550 PRINT "TYRANT!! "
    b2c_printf("Tyrant!! \n");
    // 04560 R9 = N9/P
    R9_int = N9_int/P_int;
    // 04570 IF R9 = 0 GOTO 4600
    if(R9_int==0)goto AllStarve;
    // 04580 PRINT"MANY ";
    b2c_printf("Many ");
    // 04590 GOTO 4610
    goto StarvationError;

  AllStarve:
    // 04600 PRINT"ALL THY ";
    b2c_printf("All thy ");

  StarvationError:
    // 04610 PRINT "PEOPLE WILL STARVE... I SHALL LEAD THE REVOLUTION!!"
    b2c_printf("People will starve... I shall lead the revolution!!\n");
    // 04620 E8 = E8+1
    E8_int = E8_int+1;

  ChkSeedRemaining:
    // 04630 IF I-N9 = 0 GOTO 4690
    if(I_int-N9_int==0)goto SeedForPlantingError;
    // 04640 IF I-N9>0 GOTO 4720
    if(I_int-N9_int>0)goto CalcPeasantWeight;
    // 04650 PRINT"THINK, MASTER. YOU HAVE ONLY"I" BUSHELS LEFT IN THE ";
    b2c_printf("Think, master. You have only %d Think, master. You have only bushels left in the  bushels left in the \n",I_int);
    // 04660 PRINT "STOREHOUSE"
    b2c_printf("Storehouse\n");

  SeedError:
    // 04670 E9 = E9+INT(.5+RND(Q9+E9))
    E9_int = E9_int+INT(0.5+RND(Q9_int+E9_int));
    // 04680 GOTO 4460
    goto AskDistributeFood;

  SeedForPlantingError:
    // 04690 PRINT"YOU WILL HAVE NO GRAIN LEFT IN THE STOREHOUSE FOR SEED"
    b2c_printf("You will have no grain left in the storehouse for seed\n");
    // 04700 PRINT"SURELY I MISHEARD YOU, MASTER.  PRAY TELL ME AGAIN,"
    b2c_printf("Surely i misheard you, master.  Pray tell me again,\n");
    // 04710 GOTO 4670
    goto SeedError;

  CalcPeasantWeight:
    // 04720 Q9 = Q9*((LOG(2+N9/P))/(LOG(6)))*(SQR(150/Q9))
    Q9_int = Q9_int*((LOG(2+N9_int/P_int))/(LOG(6)))*(SQR(150/Q9_int));
    // 04730 IF N9>= 2*P GOTO 4760
    if(N9_int>=2*P_int)goto TooMuchLittleFoodError;
    // 04740 IF N9<P GOTO 4760
    if(N9_int<P_int)goto TooMuchLittleFoodError;
    // 04750 PRINT"NO POINT LETTING THEM GET TOO FAT, EH MASTER?"
    b2c_printf("No point letting them get too fat, eh master?\n");

  TooMuchLittleFoodError:
    // 04760 IF N9<6*P GOTO 4790
    if(N9_int<6*P_int)goto DisperseGrainForFood;
    // 04770 PRINT "BY GOLLY, MASTER, THY PEOPLE WILL BLOAT UP LIKE ZEPPELINS!"
    b2c_printf("By golly, master, thy people will bloat up like zeppelins!\n");
    // 04780 E9 = E9+INT(.5+RND(Q9+E9))
    E9_int = E9_int+INT(0.5+RND(Q9_int+E9_int));

  DisperseGrainForFood:
    // 04790 I = I-N9
    I_int = I_int-N9_int;
    // 04800 PRINT"THERE ARE"N5-P"ACRES AVAILABLE FOR CULTIVATION, SIRE"
    b2c_printf("There areAcres available for cultivation, sire\n");

  AskAcresToPlant:
    // 04810 PRINT "HOW MANY DO YOU WISH TO PLANT WITH SEED?"
    b2c_printf("How many do you wish to plant with seed?\n");
    // 04820 GOSUB6500
    Routine_06500();
    // 04830 N1 = Q
    N1_int = Q_int;
    // 04840 IF N1>= 0 GOTO 4890
    if(N1_int>=0)goto ChkTooFewAcresError;
    // 04850 PRINT "I KNOW NOT THE MEANING OF NEGATIVE NUMBERS, MASTER."
    b2c_printf("I know not the meaning of negative numbers, master.\n");
    // 04860 PRINT "PRAY TELL ME AGAIN,"
    b2c_printf("Pray tell me again,\n");

  PlantAcresError:
    // 04870 E9 = E9+INT(.5+RND(Q9+E9))
    E9_int = E9_int+INT(0.5+RND(Q9_int+E9_int));
    // 04880 GOTO 4810
    goto AskAcresToPlant;

  ChkTooFewAcresError:
    // 04890 F7 = N5-P
    F7_int = N5_int-P_int;
    // 04900 IF F7>=N1 GOTO4950
    if(F7_int>=N1_int)goto ChkTooFewAcresGrownError;
    // 04910 PRINT " YOU DON'T HAVE THAT MUCH LAND, MASTER."
    b2c_printf(" you don't have that much land, master.\n");
    // 04920 E9 = E9+INT(.5+RND(Q9+E9))
    E9_int = E9_int+INT(0.5+RND(Q9_int+E9_int));
    // 04930 PRINT " BUT I'LL GIVE YOU ANOTHER CHANCE TO MAKE GOOD"
    b2c_printf(" but i'll give you another chance to make good\n");
    // 04940 GOTO 4810
    goto AskAcresToPlant;

  ChkTooFewAcresGrownError:
    // 04950 IF N1>F7/3 GOTO 4980
    if(N1_int>F7_int/3)goto ChkForOtherPlantingErrors;
    // 04960 PRINT "YOUR DISTASTE FOR AGRICULTURE NEVER FAILS TO AMAZE ME, SIRE"
    b2c_printf("Your distaste for agriculture never fails to amaze me, sire\n");
    // 04970 E9 = E9+INT(.5+RND(Q9+E9))
    E9_int = E9_int+INT(0.5+RND(Q9_int+E9_int));

  ChkForOtherPlantingErrors:
    // 04980 IF N1>F7 GOTO 5000
    if(N1_int>F7_int)goto ChkForSeedToPlantError;
    // 04990 IF I>= N1 GOTO 5180
    if(I_int>=N1_int)goto ChkTooManyAcresToPlant;

  ChkForSeedToPlantError:
    // 05000 IF F7>I GOTO 5060
    if(F7_int>I_int)goto ChkTooLittleSeedAndBorrow;
    // 05010 PRINT"COME NOW, MASTER..."
    b2c_printf("Come now, master...\n");
    // 05020 PRINT"SUMER CURRENTLY HAS ONLY"F7" ACRES CAPABLE OF CULTIVATION"
    b2c_printf("Sumer currently has only %d Sumer currently has only acres capable of cultivation\n",F7_int);
    // 05030 IF N1>N5 GOTO 4870
    if(N1_int>N5_int)goto PlantAcresError;
    // 05040 PRINT"(YOUR PEOPLE HAVE TO LIVE SOMEWHERE)"
    b2c_printf("(your people have to live somewhere)\n");
    // 05050 GOTO 4870
    goto PlantAcresError;

  ChkTooLittleSeedAndBorrow:
    // 05060 PRINT USING 5070,I
    b2c_printf(UsingFmt_05070,IT(I_int),"\n");
    // 05070 :THINK, MASTER YOU HAVE ONLY ######## BUSHELS LEFT IN THE STOREHOUSE.
    // 05080 PRINT"(REMEMBER: ONE BUSHEL PER ACRE)"
    b2c_printf("(remember: one bushel per acre)\n");
    // 05090 IF N1-I<20 GOTO 4870
    if(N1_int-I_int<20)goto PlantAcresError;
    // 05100 W0=INT(RND(F6+F7+H3+I+P+6+J)*11+1)
    W0_int = INT(RND(F6_int+F7_int+H3_int+I_int+P_int+6+J_int)*11+1);
    // 05110 PRINT USING 5120,Z$(W0)
    b2c_printf(UsingFmt_05120,ST(MoneyLender_Names[W0_int]),"\n");
    // 05120 :HOWEVER, YOUR NEIGHBOR 'LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
    // 05130 I2 = INT(25+25*(RND(J))+INT(50*W0/11))
    I2_int = INT(25+25*(RND(J_int))+INT(50*W0_int/11));
    // 05140 L = N1-I
    L_int = N1_int-I_int;
    // 05150 PRINT" HAS AGREED TO LEND YOU THE NECESSARY "L" BUSHELS AT A MODEST"
    b2c_printf(" has agreed to lend you the necessary  %d  has agreed to lend you the necessary  bushels at a modest\n",L_int);
    // 05160 PRINT"   RATE OF "I2"% INTEREST"
    b2c_printf("   rate of  %d    rate of %% interest\n",I2_int);
    // 05170 I = I+L
    I_int = I_int+L_int;

  ChkTooManyAcresToPlant:
    // 05180 IF 40*P>N1 GOTO 5250
    if(40*P_int>N1_int)goto ExtractSeedFromStorehouse;
    // 05190 PRINT"YOUR"P" PEOPLE ARE GOING TO BE HARD-PRESSED TO PLANT"
    b2c_printf("Your %d Your people are going to be hard-pressed to plant\n",P_int);
    // 05200 PRINT N1" ACRES THIS SPRING, MASTER, WATCH OUT!"
    b2c_printf(" %d ÿ×a‹] acres this spring, master, watch out!\n",N1_int);
    // 05210 N9 = N9+N1-50*P
    N9_int = N9_int+N1_int-50*P_int;
    // 05220 N9 = 50*P
    N9_int = 50*P_int;
    // 05230 IF N9>0 GOTO 5250
    if(N9_int>0)goto ExtractSeedFromStorehouse;
    // 05240 N1 =0
    N1_int = 0;

  ExtractSeedFromStorehouse:
    // 05250 I = I-N1
    I_int = I_int-N1_int;
    // 05260 IF I<1 GOTO 5440
    if(I_int<1)goto AllocAllGrainForDefense;
    // 05270 PRINT"AND HOW MANY OF YOUR"I"BUSHELS DO YOU WISH TO SPEND"
    b2c_printf("And how many of your %d And how many of yourBushels do you wish to spend\n",I_int);
    // 05280 PRINT"    ON PROTECTING YOUR GRAIN FROM THE PSSSTOCKS?"
    b2c_printf("    on protecting your grain from the pssstocks?\n");

  AskDefenseBudget:
    // 05290 GOSUB6500
    Routine_06500();
    // 05300 A1 = Q
    A1_int = Q_int;
    // 05310 IF A1>= 0 GOTO 5360
    if(A1_int>=0)goto ChkDefenseBudget;
    // 05320 PRINT"NEGATIVE NUMBERS REMAIN A COMPLETE MYSTERY TO ME, MASTER,"
    b2c_printf("Negative numbers remain a complete mystery to me, master,\n");
    // 05330 PRINT"CAN YOU PLEASE GIVE ME THAT FIGURE AGAIN?"
    b2c_printf("Can you please give me that figure again?\n");
    // 05340 E9 = E9+INT(.5+RND(Q9+E9))
    E9_int = E9_int+INT(0.5+RND(Q9_int+E9_int));
    // 05350 GOTO 5290
    goto AskDefenseBudget;

  ChkDefenseBudget:
    // 05360 IF I>= A1 GOTO 5500
    if(I_int>=A1_int)goto PayDefenseBudget;
    // 05370 PRINT"THOU, MASTER, ART TRULY AFRAID OF THE MIGHTY PSSSTOCKS"
    b2c_printf("Thou, master, art truly afraid of the mighty pssstocks\n");
    // 05380 IF I = 0 GOTO 5470
    if(I_int==0)goto TheStorehouseIsEmpty;
    // 05390 PRINT USING 5400,I
    b2c_printf(UsingFmt_05400,IT(I_int),"\n");
    // 05400 :HOWEVER THOU HAST A MERE ######## BUSHELS
    // 05410 PRINT"REPOSING IN A CORNER OF YOUR STOREHOUSE..."
    b2c_printf("Reposing in a corner of your storehouse...\n");
    // 05420 PRINT"I SHALL PRESUME UPON YOUR DESIRE TO BLOW IT ALL ON THE OUTER"
    b2c_printf("I shall presume upon your desire to blow it all on the outer\n");
    // 05430 PRINT"WALLS, RATHER THAN LET IT FALL INTO THE HANDS OF THE ENEMY."
    b2c_printf("Walls, rather than let it fall into the hands of the enemy.\n");

  AllocAllGrainForDefense:
    // 05440 A1 = I
    A1_int = I_int;
    // 05450 I = 0
    I_int = 0;
    // 05460 GOTO 5510
    goto DetermineIfElection;

  TheStorehouseIsEmpty:
    // 05470 PRINT"BUT THIS YEAR THY FEARS ARE UNFOUNDED,"
    b2c_printf("But this year thy fears are unfounded,\n");
    // 05480 PRINT"FOR THOU HAST LEFT NO GRAIN IN THE STOREHOUSE FOR THE THIEVES."
    b2c_printf("For thou hast left no grain in the storehouse for the thieves.\n");
    // 05490 GOTO 5440
    goto AllocAllGrainForDefense;

  PayDefenseBudget:
    // 05500 I = I-A1
    I_int = I_int-A1_int;

  DetermineIfElection:
    // 05510 IF E2 = 0 GOTO 5600
    if(E2_int==0)goto CalcNetHarvest;
    // 05520 J = RND(J)
    J_int = RND(J_int);
    // 05530 IF J>.5 GOTO 5560
    if(J_int>0.5)goto DetermineIfRevolution;
    // 05540 J = 1-J
    J_int = 1-J_int;
    // 05550 REM CALC. CHANCE OF SURVIVING NEXT YR. WITH CONTRIB. OF E1

  DetermineIfRevolution:
    // 05560 IF R9<.5 GOTO 5580
    if(R9_int<0.5)goto TriggerElection;
    // 05570 IF 2.5*J+E1/P+P/40>3 GOTO 5600
    if(2.5*J_int+E1_int/P_int+P_int/40>3)goto CalcNetHarvest;

  TriggerElection:
    // 05580 E2 = 2
    E2_int = 2;
    // 05590 REM CALC. HARVEST

  CalcNetHarvest:
    // 05600 J = RND(J)
    J_int = RND(J_int);
    // 05610 N2 = 3.5*J+1.5
    N2_int = 3.5*J_int+1.5;
    // 05620 N3 = INT(N2*N1)
    N3_int = INT(N2_int*N1_int);
    // 05630 IF Q9<150 GOTO 5650
    if(Q9_int<150)goto CalcBadWeatherLoss;
    // 05640 N3 = N3*((150*150)/(Q9*Q9))
    N3_int = N3_int*((150*150)/(Q9_int*Q9_int));

  CalcBadWeatherLoss:
    // 05650 H3 = N3
    H3_int = N3_int;
    // 05660 IF W = 0 GOTO 5680
    if(W_int==0)goto CalcPssstockTheft;
    // 05670 N3 = INT(H3/2)
    N3_int = INT(H3_int/2);

  CalcPssstockTheft:
    // 05680 J = RND(J)
    J_int = RND(J_int);
    // 05690 REM CALCULATE N4: PSSSTOCK THEFT
    // 05700 N4 = I^2/(2*(I+A1+1))-A1*J+(N3-8*A1)/(10-N2-E9)
    N4_int = IPower(I_int,2)/(2*(I_int+A1_int+1))-A1_int*J_int+(N3_int-8*A1_int)/(10-N2_int-E9_int);
    // 05710 IF N4>20 GOTO 5730
    if(N4_int>20)goto CalcHarvestAndImagration;
    // 05720 N4 = 0
    N4_int = 0;

  CalcHarvestAndImagration:
    // 05730 N4 = INT(N4)
    N4_int = INT(N4_int);
    // 05740 I = I+N3-N4
    I_int = I_int+N3_int-N4_int;
    // 05750 REM CALCULATE I1: NUMBER OF IMMIGRANTS
    // 05760 I1 = R9*(N5^2*SQR(A1+N9)/(A*P^1.5)-4*E9-2*E8)
    I1_int = R9_int*(IPower(N5_int,2)*SQR(A1_int+N9_int)/(A_int*FPower(P_int,1.5))-4*E9_int-2*E8_int);
    // 05770 I1 = INT(I1)
    I1_int = INT(I1_int);
    // 05780 IF I1<N5-P GOTO 5800
    if(I1_int<N5_int-P_int)goto ChkPlague;
    // 05790 I1=N5-P
    I1_int = N5_int-P_int;

  ChkPlague:
    // 05800 P1 = 0
    P1_int = 0;
    // 05810 IF 10*RND(J)<9 GOTO 5830
    if(10*RND(J_int)<9)goto ChkImigrationStatus;
    // 05820 P1 = 1
    P1_int = 1;

  ChkImigrationStatus:
    // 05830 IF I1<15 GOTO 5860
    if(I1_int<15)goto CalcStarvationDeaths;
    // 05840 PRINT"A RUMOR OF SUMER'S PROSPERITY IS SPREADING TO"
    b2c_printf("A rumor of sumer's prosperity is spreading to\n");
    // 05850 PRINT"NEIGHBORING COUNTRIES."
    b2c_printf("Neighboring countries.\n");

  CalcStarvationDeaths:
    // 05860 J = RND(J)
    J_int = RND(J_int);
    // 05870 REM CALCULATE D: NUMBER OF DEATHS FROM STARVATION AND MISC CAUSES
    // 05880 D = (P^2)/((2*N9+1)*(Q9*Q9)/(150*150)) + (10*E9*J) - (20*A1)/(I+1)
    D_int = (IPower(P_int,2))/((2*N9_int+1)*(Q9_int*Q9_int)/(150*150))+(10*E9_int*J_int)-(20*A1_int)/(I_int+1);
    // 05890 D = D*((150*150)/(Q9*Q9))
    D_int = D_int*((150*150)/(Q9_int*Q9_int));
    // 05900 IF D>0 GOTO 5920
    if(D_int>0)goto ChkAmountStarvation;
    // 05910 D = 0
    D_int = 0;

  ChkAmountStarvation:
    // 05920 IF P>D GOTO 5980
    if(P_int>D_int)goto BuryDeadAndEndOfYear;
    // 05930 D = (P-1)*(5+J+E9)/(6+E9)
    D_int = (P_int-1)*(5+J_int+E9_int)/(6+E9_int);
    // 05940 PRINT"UNDER YOUR RULE, MASTER, YOUR PEOPLE ARE FAST SICKENING"
    b2c_printf("Under your rule, master, your people are fast sickening\n");
    // 05950 IF E8<2 GOTO 5980
    if(E8_int<2)goto BuryDeadAndEndOfYear;
    // 05960 PRINT"AND THE INTELLIGENTSIA ARE COMMITTING SUICIDE,"
    b2c_printf("And the intelligentsia are committing suicide,\n");
    // 05970 PRINT"RATHER THAN SUFFER THE RESULTS OF YOUR MISTAKES"
    b2c_printf("Rather than suffer the results of your mistakes\n");

  BuryDeadAndEndOfYear:
    // 05980 D = INT(D)
    D_int = INT(D_int);
    // 05990 P = P-D+I1
    P_int = P_int-D_int+I1_int;
    // 06000 REM CALC. PRICE OF LAND
    // 06010 J = RND(J)
    J_int = RND(J_int);
    // 06020 N6 = 11*J+11
    N6_int = 11*J_int+11;
    // 06030 N6 = INT(N6)
    N6_int = INT(N6_int);
    // 06040 PRINT
    b2c_printf("");
    // 06050 PRINT "   (A YEAR PASSETH.....)"
    b2c_printf("   (a year passeth.....)\n");
    // 06060 PRINT
    b2c_printf("");
    // 06070 R = R+1
    R_int = R_int+1;
    // 06080 GOTO 2140
    goto StateOfDomain;

  YearsSufferedUnderReign:
    // 06090 PRINT USING 6100,P
    b2c_printf(UsingFmt_06100,IT(P_int),"\n");
    // 06100 :HONOURED MASTER, I AND YOUR ####  LOYAL SUBJECTS,
    // 06110 IF D9<12*Y GOTO 6140
    if(D9_int<12*Y_int)goto YearsProsperedUnderReign;
    // 06120 PRINT"HAVING SUFFERED FOR"R"YEARS UNDER YOUR REIGN,"
    b2c_printf("Having suffered for %d Having suffered forYears under your reign,\n",R_int);
    // 06130 GOTO 6160
    goto PopulanceFuture;

  YearsProsperedUnderReign:
    // 06140 PRINT USING 6150,R
    b2c_printf(UsingFmt_06150,IT(R_int),"\n");
    // 06150 :HAVING PROSPERED FOR ## YEARS UNDER YOUR REIGN,

  PopulanceFuture:
    // 06160 PRINT"HAVE ALL DECIDED TO EMIGRATE AND JOIN THE"
    b2c_printf("Have all decided to emigrate and join the\n");
    // 06170 IF P>50 GOTO 6200
    if(P_int>50)goto SmartFuture;
    // 06180 PRINT"JANITORIAL DEPARTMENT"
    b2c_printf("Janitorial department\n");
    // 06190 GOTO 6210
    goto ComplementRuler;

  SmartFuture:
    // 06200 PRINT"RESEARCH AND DEVELOPMENT DEPARTMENT"
    b2c_printf("Research and development department\n");

  ComplementRuler:
    // 06210 PRINT"THAT WE MIGHT LEARN TO BE AS WISE AS THEE..."
    b2c_printf("That we might learn to be as wise as thee...\n");

  DspPerformanceAndExit:
    // 06220 GOSUB 6720
    Routine_06720();
    // 06230 PRINT"FAREWELL"
    b2c_printf("Farewell\n");
    // 06240 PRINT"SCORE BREAKDOWN"
    b2c_printf("Score breakdown\n");
    // 06250 PRINT"---------------"
    b2c_printf("---------------\n");
    // 06260 C1 =INT(P*.8+.5)-22
    C1_int = INT(P_int*0.8+0.5)-22;
    // 06270 PRINT"POPULATION"C1
    b2c_printf("Population %d \n",C1_int);
    // 06280 C2 =  INT(I/40+0.5)
    C2_int = INT(I_int/40+0.5);
    // 06290 PRINT"GRAIN     "C2
    b2c_printf("Grain      %d \n",C2_int);
    // 06300 C3 = INT(N5/20+0.5)
    C3_int = INT(N5_int/20+0.5);
    // 06310 PRINT"LAND      "C3
    b2c_printf("Land       %d \n",C3_int);
    // 06320 C4 = -INT(E8/2+0.5)
    C4_int = -INT(E8_int/2+0.5);
    // 06330 PRINT"MISTAKES  "C4
    b2c_printf("Mistakes   %d \n",C4_int);
    // 06340 Q1=-INT(G1*9+0.5)
    Q1_int = -INT(G1_int*9+0.5);
    // 06350 PRINT"HUNGER    "Q1
    b2c_printf("Hunger     %d \n",Q1_int);
    // 06360 Q1=-INT(Y*4+0.5)+36
    Q1_int = -INT(Y_int*4+0.5)+36;
    // 06370 PRINT"YEARS     "Q1
    b2c_printf("Years      %d \n",Q1_int);
    // 06380 Q1=-INT((G2/(R+1))*3+0.5)+7
    Q1_int = -INT((G2_int/(R_int+1))*3+0.5)+7;
    // 06390 PRINT"HARVEST   "Q1
    b2c_printf("Harvest    %d \n",Q1_int);
    // 06400 Q1=-INT(F3*50+0.5)
    Q1_int = -INT(F3_int*50+0.5);
    // 06410 PRINT"FLOP      "Q1
    b2c_printf("Flop       %d \n",Q1_int);
    // 06420 Q1=-INT((D9/(R+1))*1.5+0.5)+10
    Q1_int = -INT((D9_int/(R_int+1))*1.5+0.5)+10;
    // 06430 PRINT"DEATHS    "Q1
    b2c_printf("Deaths     %d \n",Q1_int);
    // 06440 PRINT"---------- ---"
    b2c_printf("---------- ---\n");
    // 06450 PRINT"TOTAL     "INT(S)
    b2c_printf("Total     ");
    // 06460 J = RND(J)
    J_int = RND(J_int);
    // 06470 CHAIN "DSK:BASIC.BAS",20
    b2c_chain("BASIC.BAS",20);
    // 06480 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
