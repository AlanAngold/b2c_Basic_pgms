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
int    A4_int;                                    // Basic: A4 
int    B_int;                                     // Basic: B 
int    B5_int;                                    // Basic: B5 
int    C_int;                                     // Basic: C 
int    C1_int;                                    // Basic: C1 
int    D_int;                                     // Basic: D 
int    F1_int;                                    // Basic: F1 
int    G1_int;                                    // Basic: G1 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    M6_int;                                    // Basic: M6 
int    N5_int;                                    // Basic: N5 
int    P1_int;                                    // Basic: P1 
int    Q_int;                                     // Basic: Q 
int    T1_int;                                    // Basic: T1 
int    U1_int;                                    // Basic: U1 
int    U2_int;                                    // Basic: U2 
int    V1_int;                                    // Basic: V1 
int    V2_int;                                    // Basic: V2 
int    V3_int;                                    // Basic: V3 
int    V9_int;                                    // Basic: V9 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    X5_int;                                    // Basic: X5 
char*  Z_str;                                     // Basic: Z$ 
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
    // 01000 PRINT TAB(34);"KING"
    b2c_printf("King\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "DO YOU WANT INSTRUCTIONS";
    b2c_printf("Do you want instructions");
    // 01040 INPUT Z$
    // Start of Basic INPUT statement 01040
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01040
    // 01050 N5=8
    N5_int = 8;
    // 01060 IF LEFT$(Z$,1)="N" THEN 1230
    if(LEFT$(Z_str,1)=='N')goto Lbl_01230;
    // 01070 IF Z$="AGAIN" THEN 3410
    if(strcmp(Z_str,"Again")==0)goto Lbl_03410;
    // 01080 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01090 PRINT "CONGRATULATIONS! YOU'VE JUST BEEN ELECTED PREMIER OF SETATS"
    b2c_printf("Congratulations! You've just been elected premier of setats\n");
    // 01100 PRINT "DETINU, A SMALL COMMUNIST ISLAND 30 BY 70 MILES LONG. YOUR"
    b2c_printf("Detinu, a small communist island 30 by 70 miles long. Your\n");
    // 01110 PRINT "JOB IS TO DECIDE UPON THE CONTRY'S BUDGET AND DISTRIBUTE"
    b2c_printf("Job is to decide upon the contry's budget and distribute\n");
    // 01120 PRINT "MONEY TO YOUR COUNTRYMEN FROM THE COMMUNAL TREASURY."
    b2c_printf("Money to your countrymen from the communal treasury.\n");
    // 01130 PRINT "THE MONEY SYSTEM IS RALLODS, AND EACH PERSON NEEDS 100"
    b2c_printf("The money system is rallods, and each person needs 100\n");
    // 01140 PRINT "RALLODS PER YEAR TO SURVIVE. YOUR COUNTRY'S INCOME COMES"
    b2c_printf("Rallods per year to survive. Your country's income comes\n");
    // 01150 PRINT "FROM FARM PRODUCE AND TOURISTS VISITING YOUR MAGNIFICENT"
    b2c_printf("From farm produce and tourists visiting your magnificent\n");
    // 01160 PRINT "FORESTS, HUNTING, FISHING, ETC. HALF YOUR LAND IS FARM LAND"
    b2c_printf("Forests, hunting, fishing, etc. Half your land is farm land\n");
    // 01170 PRINT "WHICH ALSO HAS AN EXCELLENT MINERAL CONTENT AND MAY BE SOLD"
    b2c_printf("Which also has an excellent mineral content and may be sold\n");
    // 01180 PRINT "TO FOREIGN INDUSTRY (STRIP MINING) WHO IMPORT AND SUPPORT"
    b2c_printf("To foreign industry (strip mining) who import and support\n");
    // 01190 PRINT "THEIR OWN WORKERS. CROPS COST BETWEEN 10 AND 15 RALLODS PER"
    b2c_printf("Their own workers. Crops cost between 10 and 15 rallods per\n");
    // 01200 PRINT "SQUARE MILE TO PLANT."
    b2c_printf("Square mile to plant.\n");
    // 01210 PRINT "YOUR GOAL IS TO COMPLETE YOUR";N5;"YEAR TERM OF OFFICE."
    b2c_printf("Your goal is to complete your %d Your goal is to complete yourYear term of office.\n",N5_int);
    // 01220 PRINT "GOOD LUCK!"
    b2c_printf("Good luck!\n");

  Lbl_01230:
    // 01230 PRINT
    b2c_printf("");
    // 01240 A=INT(60000+(1000*RND(1))-(1000*RND(1)))
    A_int = INT(60000+(1000*RND(1))-(1000*RND(1)));
    // 01250 B=INT(500+(10*RND(1))-(10*RND(1)))
    B_int = INT(500+(10*RND(1))-(10*RND(1)));
    // 01260 D=2000
    D_int = 2000;

  Lbl_01270:
    // 01270 W=INT(10*RND(1)+95)
    W_int = INT(10*RND(1)+95);
    // 01280 PRINT
    b2c_printf("");
    // 01290 PRINT "YOU NOW HAVE ";A;" RALLODS IN THE TREASURY."
    b2c_printf("You now have  %d You now have  rallods in the treasury.\n",A_int);
    // 01300 PRINT INT(B);:PRINT "COUNTRYMEN, ";
    b2c_printf("Countrymen, ");
    // 01310 V9=INT(((RND(1)/2)*10+10))
    V9_int = INT(((RND(1)/2)*10+10));
    // 01320 IF C=0 THEN 1340
    if(C_int==0)goto Lbl_01340;
    // 01330 PRINT INT(C);"FOREIGN WORKERS, ";
    b2c_printf("Foreign workers, ");

  Lbl_01340:
    // 01340 PRINT "AND";INT(D);"SQ. MILES OF LAND."
    b2c_printf("AndSq. Miles of land.\n");
    // 01350 PRINT "THIS YEAR INDUSTRY WILL BUY LAND FOR";W;
    b2c_printf("This year industry will buy land for %d This year industry will buy land for\n",W_int);
    // 01360 PRINT "RALLODS PER SQUARE MILE."
    b2c_printf("Rallods per square mile.\n");
    // 01370 PRINT "LAND CURRENTLY COSTS";V9;"RALLODS PER SQUARE MILE TO PLANT."
    b2c_printf("Land currently costs %d Land currently costsRallods per square mile to plant.\n",V9_int);
    // 01380 PRINT
    b2c_printf("");

  Lbl_01390:
    // 01390 PRINT "HOW MANY SQUARE MILES DO YOU WISH TO SELL TO INDUSTRY";
    b2c_printf("How many square miles do you wish to sell to industry");
    // 01400 INPUT H
    // Start of Basic INPUT statement 01400
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&H_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01400
    // 01410 IF H<0 THEN 1390
    if(H_int<0)goto Lbl_01390;
    // 01420 IF H<=D-1000 THEN 1500
    if(H_int<=D_int-1000)goto Lbl_01500;
    // 01430 PRINT "***  THINK AGAIN. YOU ONLY HAVE";D-1000;"SQUARE MILES OF FARM LAND."
    b2c_printf("***  think again. You only haveSquare miles of farm land.\n");
    // 01440 IF X<>0 THEN 1390
    if(X_int!=0)goto Lbl_01390;
    // 01450 PRINT:PRINT "(FOREIGN INDUSTRY WILL ONLY BUY FARM LAND BECAUSE"
    b2c_printf("(foreign industry will only buy farm land because\n");
    // 01460 PRINT "FOREST LAND IS UNECONOMICAL TO STRIP MINE DUE TO TREES,"
    b2c_printf("Forest land is uneconomical to strip mine due to trees,\n");
    // 01470 PRINT "THICKER TOP SOIL, ETC.)"
    b2c_printf("Thicker top soil, etc.)\n");
    // 01480 X=1
    X_int = 1;
    // 01490 GOTO 1390
    goto Lbl_01390;

  Lbl_01500:
    // 01500 D=INT(D-H)
    D_int = INT(D_int-H_int);
    // 01510 A=INT(A+(H*W))
    A_int = INT(A_int+(H_int*W_int));

  Lbl_01520:
    // 01520 PRINT "HOW MANY RALLODS WILL YOU DISTRIBUTE AMONG YOUR COUNTRYMEN";
    b2c_printf("How many rallods will you distribute among your countrymen");
    // 01530 INPUT I
    // Start of Basic INPUT statement 01530
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
    }; // End of Basic INPUT statement 01530
    // 01540 IF I<0 THEN 1520
    if(I_int<0)goto Lbl_01520;
    // 01550 IF I<A THEN 1630
    if(I_int<A_int)goto Lbl_01630;
    // 01560 IF I=A THEN 1590
    if(I_int==A_int)goto Lbl_01590;
    // 01570 PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS IN THE TREASURY"
    b2c_printf("   think again. You've only %d    think again. You've only rallods in the treasury\n",A_int);
    // 01580 GOTO 1520
    goto Lbl_01520;

  Lbl_01590:
    // 01590 J=0
    J_int = 0;
    // 01600 K=0
    K_int = 0;
    // 01610 A=0
    A_int = 0;
    // 01620 GOTO 1980
    goto Lbl_01980;

  Lbl_01630:
    // 01630 A=INT(A-I)
    A_int = INT(A_int-I_int);

  Lbl_01640:
    // 01640 PRINT "HOW MANY SQUARE MILES DO YOU WISH TO PLANT";
    b2c_printf("How many square miles do you wish to plant");
    // 01650 INPUT J
    // Start of Basic INPUT statement 01650
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&J_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01650
    // 01660 IF J<0 THEN 1640
    if(J_int<0)goto Lbl_01640;
    // 01670 IF J<=B*2 THEN 1700
    if(J_int<=B_int*2)goto Lbl_01700;
    // 01680 PRINT "   SORRY, BUT EACH COUNTRYMAN CAN ONLY PLANT 2 SQ. MILES."
    b2c_printf("   sorry, but each countryman can only plant 2 sq. Miles.\n");
    // 01690 GOTO 1640
    goto Lbl_01640;

  Lbl_01700:
    // 01700 IF J<=D-1000 THEN 1730
    if(J_int<=D_int-1000)goto Lbl_01730;
    // 01710 PRINT "   SORRY, BUT YOU'VE ONLY";D-1000;"SQ. MILES OF FARM LAND."
    b2c_printf("   sorry, but you've onlySq. Miles of farm land.\n");
    // 01720 GOTO 1640
    goto Lbl_01640;

  Lbl_01730:
    // 01730 U1=INT(J*V9)
    U1_int = INT(J_int*V9_int);
    // 01740 IF U1<A THEN 1810
    if(U1_int<A_int)goto Lbl_01810;
    // 01750 IF U1=A THEN 1780
    if(U1_int==A_int)goto Lbl_01780;
    // 01760 PRINT "   THINK AGAIN. YOU'VE ONLY";A;" RALLODS LEFT IN THE TREASURY."
    b2c_printf("   think again. You've only %d    think again. You've only rallods left in the treasury.\n",A_int);
    // 01770 GOTO 1640
    goto Lbl_01640;

  Lbl_01780:
    // 01780 K=0
    K_int = 0;
    // 01790 A=0
    A_int = 0;
    // 01800 GOTO 1980
    goto Lbl_01980;

  Lbl_01810:
    // 01810 A=A-U1
    A_int = A_int-U1_int;

  Lbl_01820:
    // 01820 PRINT "HOW MANY RALLODS DO YOU WISH TO SPEND ON POLLUTION CONTROL";
    b2c_printf("How many rallods do you wish to spend on pollution control");
    // 01830 INPUT K
    // Start of Basic INPUT statement 01830
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&K_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01830
    // 01840 IF K<0 THEN 1820
    if(K_int<0)goto Lbl_01820;
    // 01850 IF K<=A THEN 1980
    if(K_int<=A_int)goto Lbl_01980;
    // 01860 PRINT "   THINK AGAIN. YOU ONLY HAVE ";A;" RALLODS REMAINING."
    b2c_printf("   think again. You only have  %d    think again. You only have  rallods remaining.\n",A_int);
    // 01870 GOTO 1820
    goto Lbl_01820;

  Lbl_01880:
    // 01880 IF H<>0 THEN 1990
    if(H_int!=0)goto Lbl_01990;
    // 01890 IF I<>0 THEN 1990
    if(I_int!=0)goto Lbl_01990;
    // 01900 IF J<>0 THEN 1990
    if(J_int!=0)goto Lbl_01990;
    // 01910 IF K<>0 THEN 1990
    if(K_int!=0)goto Lbl_01990;
    // 01920 PRINT
    b2c_printf("");
    // 01930 PRINT "GOODBYE."
    b2c_printf("Goodbye.\n");
    // 01940 PRINT "(IF YOU WISH TO CONTINUE THIS GAME AT A LATER DATE, ANSWER"
    b2c_printf("(if you wish to continue this game at a later date, answer\n");
    // 01950 PRINT "'AGAIN' WHEN ASKED IF YOU WANT INSTRUCTIONS AT THE START"
    b2c_printf("'again' when asked if you want instructions at the start\n");
    // 01960 PRINT "OF THE GAME)."
    b2c_printf("Of the game).\n");
    // 01970 STOP
    exit(1);

  Lbl_01980:
    // 01980 GOTO 1880
    goto Lbl_01880;

  Lbl_01990:
    // 01990 PRINT
    b2c_printf("");
    // 02000 PRINT
    b2c_printf("");
    // 02010 A=INT(A-K)
    A_int = INT(A_int-K_int);
    // 02020 A4=A
    A4_int = A_int;
    // 02030 IF INT(I/100-B)>=0 THEN 2060
    if(INT(I_int/100-B_int)>=0)goto Lbl_02060;
    // 02040 IF I/100<50 THEN 3160
    if(I_int/100<50)goto Lbl_03160;
    // 02050 PRINT INT(B-(I/100));"COUNTRYMEN DIED OF STARVATION"
    b2c_printf("Countrymen died of starvation\n");

  Lbl_02060:
    // 02060 F1=INT(RND(1)*(2000-D))
    F1_int = INT(RND(1)*(2000-D_int));
    // 02070 IF K<25 THEN 2090
    if(K_int<25)goto Lbl_02090;
    // 02080 F1=INT(F1/(K/25))
    F1_int = INT(F1_int/(K_int/25));

  Lbl_02090:
    // 02090 IF F1<=0 THEN 2110
    if(F1_int<=0)goto Lbl_02110;
    // 02100 PRINT F1;"COUNTRYMEN DIED OF CARBON-MONOXIDE AND DUST INHALATION"
    b2c_printf(" %d „0nIbCountrymen died of carbon-monoxide and dust inhalation\n",F1_int);

  Lbl_02110:
    // 02110 IF INT((I/100)-B)<0 THEN 2140
    if(INT((I_int/100)-B_int)<0)goto Lbl_02140;
    // 02120 IF F1>0 THEN 2190
    if(F1_int>0)goto Lbl_02190;
    // 02130 GOTO 2280
    goto Lbl_02280;

  Lbl_02140:
    // 02140 PRINT "   YOU WERE FORCED TO SPEND";INT((F1+(B-(I/100)))*9);
    b2c_printf("   you were forced to spend");
    // 02150 PRINT "RALLODS ON FUNERAL EXPENSES"
    b2c_printf("Rallods on funeral expenses\n");
    // 02160 B5=INT(F1+(B-(I/100)))
    B5_int = INT(F1_int+(B_int-(I_int/100)));
    // 02170 A=INT(A-((F1+(B-(I/100)))*9))
    A_int = INT(A_int-((F1_int+(B_int-(I_int/100)))*9));
    // 02180 GOTO 2230
    goto Lbl_02230;

  Lbl_02190:
    // 02190 PRINT "   YOU WERE FORCED TO SPEND ";INT(F1*9);"RALLODS ON ";
    b2c_printf("   you were forced to spend Rallods on ");
    // 02200 PRINT "FUNERAL EXPENSES."
    b2c_printf("Funeral expenses.\n");
    // 02210 B5=F1
    B5_int = F1_int;
    // 02220 A=INT(A-(F1*9))
    A_int = INT(A_int-(F1_int*9));

  Lbl_02230:
    // 02230 IF A>=0 THEN 2270
    if(A_int>=0)goto Lbl_02270;
    // 02240 PRINT "   INSUFFICIENT RESERVES TO COVER COST - LAND WAS SOLD"
    b2c_printf("   insufficient reserves to cover cost - land was sold\n");
    // 02250 D=INT(D+(A/W))
    D_int = INT(D_int+(A_int/W_int));
    // 02260 A=0
    A_int = 0;

  Lbl_02270:
    // 02270 B=INT(B-B5)
    B_int = INT(B_int-B5_int);

  Lbl_02280:
    // 02280 IF H=0 THEN 2330
    if(H_int==0)goto Lbl_02330;
    // 02290 C1=INT(H+(RND(1)*10)-(RND(1)*20))
    C1_int = INT(H_int+(RND(1)*10)-(RND(1)*20));
    // 02300 IF C>0 THEN 2320
    if(C_int>0)goto Lbl_02320;
    // 02310 C1=C1+20
    C1_int = C1_int+20;

  Lbl_02320:
    // 02320 PRINT C1;"WORKERS CAME TO THE COUNTRY AND";
    b2c_printf(" %d êçx¸Workers came to the country andWorkers came to the country and\n",C1_int);

  Lbl_02330:
    // 02330 P1=INT(((I/100-B)/10)+(K/25)-((2000-D)/50)-(F1/2))
    P1_int = INT(((I_int/100-B_int)/10)+(K_int/25)-((2000-D_int)/50)-(F1_int/2));
    // 02340 PRINT ABS(P1);"COUNTRYMEN ";
    b2c_printf("Countrymen ");
    // 02350 IF P1<0 THEN 2380
    if(P1_int<0)goto Lbl_02380;
    // 02360 PRINT "CAME TO";
    b2c_printf("Came to");
    // 02370 GOTO 2390
    goto Lbl_02390;

  Lbl_02380:
    // 02380 PRINT "LEFT";
    b2c_printf("Left");

  Lbl_02390:
    // 02390 PRINT " THE ISLAND."
    b2c_printf(" the island.\n");
    // 02400 B=INT(B+P1)
    B_int = INT(B_int+P1_int);
    // 02410 C=INT(C+C1)
    C_int = INT(C_int+C1_int);
    // 02420 U2=INT(((2000-D)*((RND(1)+1.5)/2)))
    U2_int = INT(((2000-D_int)*((RND(1)+1.5)/2)));
    // 02430 IF C=0 THEN 2450
    if(C_int==0)goto Lbl_02450;
    // 02440 PRINT "OF ";INT(J);"SQ. MILES PLANTED,";
    b2c_printf("Of Sq. Miles planted,");

  Lbl_02450:
    // 02450 IF J>U2 THEN 2470
    if(J_int>U2_int)goto Lbl_02470;
    // 02460 U2=J
    U2_int = J_int;

  Lbl_02470:
    // 02470 PRINT " YOU HARVESTED ";INT(J-U2);"SQ. MILES OF CROPS."
    b2c_printf(" you harvested Sq. Miles of crops.\n");
    // 02480 IF U2=0 THEN 2540
    if(U2_int==0)goto Lbl_02540;
    // 02490 IF T1>=2 THEN 2540
    if(T1_int>=2)goto Lbl_02540;
    // 02500 PRINT "   (DUE TO ";
    b2c_printf("   (due to ");
    // 02510 IF T1=0 THEN 2530
    if(T1_int==0)goto Lbl_02530;
    // 02520 PRINT "INCREASED ";
    b2c_printf("Increased ");

  Lbl_02530:
    // 02530 PRINT "AIR AND WATER POLLUTION FROM FOREIGN INDUSTRY.)"
    b2c_printf("Air and water pollution from foreign industry.)\n");

  Lbl_02540:
    // 02540 Q=INT((J-U2)*(W/2))
    Q_int = INT((J_int-U2_int)*(W_int/2));
    // 02550 PRINT "MAKING";INT(Q);"RALLODS."
    b2c_printf("MakingRallods.\n");
    // 02560 A=INT(A+Q)
    A_int = INT(A_int+Q_int);
    // 02570 V1=INT(((B-P1)*22)+(RND(1)*500))
    V1_int = INT(((B_int-P1_int)*22)+(RND(1)*500));
    // 02580 V2=INT((2000-D)*15)
    V2_int = INT((2000-D_int)*15);
    // 02590 PRINT " YOU MADE";ABS(INT(V1-V2));"RALLODS FROM TOURIST TRADE."
    b2c_printf(" you madeRallods from tourist trade.\n");
    // 02600 IF V2=0 THEN 2690
    if(V2_int==0)goto Lbl_02690;
    // 02610 IF V1-V2>=V3 THEN 2690
    if(V1_int-V2_int>=V3_int)goto Lbl_02690;
    // 02620 PRINT "   DECREASE BECAUSE ";
    b2c_printf("   decrease because ");
    // 02630 G1=10*RND(1)
    G1_int = 10*RND(1);
    // 02640 IF G1<=2 THEN 2720
    if(G1_int<=2)goto Lbl_02720;
    // 02650 IF G1<=4 THEN 2740
    if(G1_int<=4)goto Lbl_02740;
    // 02660 IF G1<=6 THEN 2760
    if(G1_int<=6)goto Lbl_02760;
    // 02670 IF G1<=8 THEN 2780
    if(G1_int<=8)goto Lbl_02780;
    // 02680 IF G1<=10 THEN 2800
    if(G1_int<=10)goto Lbl_02800;

  Lbl_02690:
    // 02690 V3=INT(A+V3)
    V3_int = INT(A_int+V3_int);
    // 02700 A=INT(A+V3)
    A_int = INT(A_int+V3_int);
    // 02710 GOTO 2820
    goto Lbl_02820;

  Lbl_02720:
    // 02720 PRINT "FISH POPULATION HAS DWINDLED DUE TO WATER POLLUTION."
    b2c_printf("Fish population has dwindled due to water pollution.\n");
    // 02730 GOTO 2690
    goto Lbl_02690;

  Lbl_02740:
    // 02740 PRINT "AIR POLLUTION IS KILLING GAME BIRD POPULATION."
    b2c_printf("Air pollution is killing game bird population.\n");
    // 02750 GOTO 2690
    goto Lbl_02690;

  Lbl_02760:
    // 02760 PRINT "MINERAL BATHS ARE BEING RUINED BY WATER POLLUTION."
    b2c_printf("Mineral baths are being ruined by water pollution.\n");
    // 02770 GOTO 2690
    goto Lbl_02690;

  Lbl_02780:
    // 02780 PRINT "UNPLEASANT SMOG IS DISCOURAGING SUN BATHERS."
    b2c_printf("Unpleasant smog is discouraging sun bathers.\n");
    // 02790 GOTO 2690
    goto Lbl_02690;

  Lbl_02800:
    // 02800 PRINT "HOTELS ARE LOOKING SHABBY DUE TO SMOG GRIT."
    b2c_printf("Hotels are looking shabby due to smog grit.\n");
    // 02810 GOTO 2690
    goto Lbl_02690;

  Lbl_02820:
    // 02820 IF B5>200 THEN 3010
    if(B5_int>200)goto Lbl_03010;
    // 02830 IF B<343 THEN 3160
    if(B_int<343)goto Lbl_03160;
    // 02840 IF (A4/100)>5 THEN 3220
    if((A4_int/100)>5)goto Lbl_03220;

  Lbl_02850:
    // 02850 IF C>B THEN 2880
    if(C_int>B_int)goto Lbl_02880;
    // 02860 IF N5-1=X5 THEN 3320
    if(N5_int-1==X5_int)goto Lbl_03320;
    // 02870 GOTO 3640
    goto Lbl_03640;

  Lbl_02880:
    // 02880 PRINT
    b2c_printf("");
    // 02890 PRINT
    b2c_printf("");
    // 02900 PRINT "THE NUMBER OF FOREIGN WORKERS HAS EXCEEDED THE NUMBER"
    b2c_printf("The number of foreign workers has exceeded the number\n");
    // 02910 PRINT "OF COUNTRYMEN. AS A MINORITY, THEY HAVE REVOLTED AND"
    b2c_printf("Of countrymen. As a minority, they have revolted and\n");
    // 02920 PRINT "TAKEN OVER THE COUNTRY."
    b2c_printf("Taken over the country.\n");

  Lbl_02930:
    // 02930 IF RND(1)<=.5 THEN 2970
    if(RND(1)<=0.5)goto Lbl_02970;
    // 02940 PRINT "YOU HAVE BEEN THROWN OUT OF OFFICE AND ARE NOW"
    b2c_printf("You have been thrown out of office and are now\n");
    // 02950 PRINT "RESIDING IN PRISON."
    b2c_printf("Residing in prison.\n");
    // 02960 GOTO 2980
    goto Lbl_02980;

  Lbl_02970:
    // 02970 PRINT "YOU HAVE BEEN ASSASSINATED."
    b2c_printf("You have been assassinated.\n");

  Lbl_02980:
    // 02980 PRINT
    b2c_printf("");
    // 02990 PRINT
    b2c_printf("");
    // 03000 STOP
    exit(1);

  Lbl_03010:
    // 03010 PRINT
    b2c_printf("");
    // 03020 PRINT
    b2c_printf("");
    // 03030 PRINT B5;"COUNTRYMEN DIED IN ONE YEAR!!!!!"
    b2c_printf(" %d 1nIbCountrymen died in one year!!!!!\n",B5_int);
    // 03040 PRINT "DUE TO THIS EXTREME MISMANAGEMENT, YOU HAVE NOT ONLY"
    b2c_printf("Due to this extreme mismanagement, you have not only\n");
    // 03050 PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE, BUT YOU"
    b2c_printf("Been impeached and thrown out of office, but you\n");
    // 03060 M6=INT(RND(1)*10)
    M6_int = INT(RND(1)*10);
    // 03070 IF M6<=3 THEN 3100
    if(M6_int<=3)goto Lbl_03100;
    // 03080 IF M6<=6 THEN 3120
    if(M6_int<=6)goto Lbl_03120;
    // 03090 IF M6<=10 THEN 3140
    if(M6_int<=10)goto Lbl_03140;

  Lbl_03100:
    // 03100 PRINT "ALSO HAD YOUR LEFT EYE GOUGED OUT!"
    b2c_printf("Also had your left eye gouged out!\n");
    // 03110 GOTO 2980
    goto Lbl_02980;

  Lbl_03120:
    // 03120 PRINT "HAVE ALSO GAINED A VERY BAD REPUTATION."
    b2c_printf("Have also gained a very bad reputation.\n");
    // 03130 GOTO 2980
    goto Lbl_02980;

  Lbl_03140:
    // 03140 PRINT "HAVE ALSO BEEN DECLARED NATIONAL FINK."
    b2c_printf("Have also been declared national fink.\n");
    // 03150 GOTO 2980
    goto Lbl_02980;

  Lbl_03160:
    // 03160 PRINT
    b2c_printf("");
    // 03170 PRINT
    b2c_printf("");
    // 03180 PRINT "OVER ONE THIRD OF THE POPULTATION HAS DIED SINCE YOU"
    b2c_printf("Over one third of the popultation has died since you\n");
    // 03190 PRINT "WERE ELECTED TO OFFICE. THE PEOPLE (REMAINING)"
    b2c_printf("Were elected to office. The people (remaining)\n");
    // 03200 PRINT "HATE YOUR GUTS."
    b2c_printf("Hate your guts.\n");
    // 03210 GOTO 2930
    goto Lbl_02930;

  Lbl_03220:
    // 03220 IF B5-F1<2 THEN 2850
    if(B5_int-F1_int<2)goto Lbl_02850;
    // 03230 PRINT
    b2c_printf("");
    // 03240 PRINT "MONEY WAS LEFT OVER IN THE TREASURY WHICH YOU DID"
    b2c_printf("Money was left over in the treasury which you did\n");
    // 03250 PRINT "NOT SPEND. AS A RESULT, SOME OF YOUR COUNTRYMEN DIED"
    b2c_printf("Not spend. As a result, some of your countrymen died\n");
    // 03260 PRINT "OF STARVATION. THE PUBLIC IS ENRAGED AND YOU HAVE"
    b2c_printf("Of starvation. The public is enraged and you have\n");
    // 03270 PRINT "BEEN FORCED TO EITHER RESIGN OR COMMIT SUICIDE."
    b2c_printf("Been forced to either resign or commit suicide.\n");
    // 03280 PRINT "THE CHOICE IS YOURS."
    b2c_printf("The choice is yours.\n");
    // 03290 PRINT "IF YOU CHOOSE THE LATTER, PLEASE TURN OFF YOUR COMPUTER"
    b2c_printf("If you choose the latter, please turn off your computer\n");
    // 03300 PRINT "BEFORE PROCEEDING."
    b2c_printf("Before proceeding.\n");
    // 03310 GOTO 2980
    goto Lbl_02980;

  Lbl_03320:
    // 03320 PRINT
    b2c_printf("");
    // 03330 PRINT
    b2c_printf("");
    // 03340 PRINT "CONGRATULATIONS!!!!!!!!!!!!!!!!!!"
    b2c_printf("Congratulations!!!!!!!!!!!!!!!!!!\n");
    // 03350 PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR";N5;"YEAR TERM"
    b2c_printf("You have succesfully completed your %d You have succesfully completed yourYear term\n",N5_int);
    // 03360 PRINT "OF OFFICE. YOU WERE, OF COURSE, EXTREMELY LUCKY, BUT"
    b2c_printf("Of office. You were, of course, extremely lucky, but\n");
    // 03370 PRINT "NEVERTHELESS, IT'S QUITE AN ACHIEVEMENT. GOODBYE AND GOOD"
    b2c_printf("Nevertheless, it's quite an achievement. Goodbye and good\n");
    // 03380 PRINT "LUCK - YOU'LL PROBABLY NEED IT IF YOU'RE THE TYPE THAT"
    b2c_printf("Luck - you'll probably need it if you're the type that\n");
    // 03390 PRINT "PLAYS THIS GAME."
    b2c_printf("Plays this game.\n");
    // 03400 GOTO 2980
    goto Lbl_02980;

  Lbl_03410:
    // 03410 PRINT "HOW MANY YEARS HAD YOU BEEN IN OFFICE WHEN INTERRUPTED";
    b2c_printf("How many years had you been in office when interrupted");
    // 03420 INPUT X5
    // Start of Basic INPUT statement 03420
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X5_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03420
    // 03430 IF X5<0 THEN 2980
    if(X5_int<0)goto Lbl_02980;
    // 03440 IF X5<8 THEN 3470
    if(X5_int<8)goto Lbl_03470;
    // 03450 PRINT "   COME ON, YOUR TERM IN OFFICE IS ONLY";N5;"YEARS."
    b2c_printf("   come on, your term in office is only %d    come on, your term in office is onlyYears.\n",N5_int);
    // 03460 GOTO 3410
    goto Lbl_03410;

  Lbl_03470:
    // 03470 PRINT "HOW MUCH DID YOU HAVE IN THE TREASURY";
    b2c_printf("How much did you have in the treasury");
    // 03480 INPUT A
    // Start of Basic INPUT statement 03480
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
    }; // End of Basic INPUT statement 03480
    // 03490 IF A<0 THEN 2980
    if(A_int<0)goto Lbl_02980;
    // 03500 PRINT "HOW MANY COUNTRYMEN";    
    b2c_printf("How many countrymen");
    // 03510 INPUT B
    // Start of Basic INPUT statement 03510
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
    }; // End of Basic INPUT statement 03510
    // 03520 IF B<0 THEN 2980
    if(B_int<0)goto Lbl_02980;
    // 03530 PRINT "HOW MANY WORKERS";
    b2c_printf("How many workers");
    // 03540 INPUT C
    // Start of Basic INPUT statement 03540
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
    }; // End of Basic INPUT statement 03540
    // 03550 IF C<0 THEN 2980
    if(C_int<0)goto Lbl_02980;

  Lbl_03560:
    // 03560 PRINT "HOW MANY SQUARE MILES OF LAND";
    b2c_printf("How many square miles of land");
    // 03570 INPUT D
    // Start of Basic INPUT statement 03570
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03570
    // 03580 IF D<0 THEN 2980
    if(D_int<0)goto Lbl_02980;
    // 03590 IF D>2000 THEN 3610
    if(D_int>2000)goto Lbl_03610;
    // 03600 IF D>12700 THEN 100
    if(D_int>1000)goto Lbl_01270;

  Lbl_03610:
    // 03610 PRINT "   COME ON, YOU STARTED WITH 1000 SQ. MILES OF FARM LAND"
    b2c_printf("   come on, you started with 1000 sq. Miles of farm land\n");
    // 03620 PRINT "   AND 10,000 SQ. MILES OF FOREST LAND."
    b2c_printf("   and 10,000 sq. Miles of forest land.\n");
    // 03630 GOTO 3560
    goto Lbl_03560;

  Lbl_03640:
    // 03640 X5=X5+1
    X5_int = X5_int+1;
    // 03650 B5=0
    B5_int = 0;
    // 03660 GOTO 1270
    goto Lbl_01270;
    // 03670 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
