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
int    Earnings;                                  // Basic: J 
char*  QHelpAnswer;                               // Basic: L$ 
int    RandInt1to5_Result;                        // Basic: S 
char*  FruitIdx2Str_Result;                       // Basic: S$ 
int    Roll1;                                     // Basic: S1 
char*  Roll1Fruit;                                // Basic: S1$ 
int    Roll2;                                     // Basic: S2 
char*  Roll2Fruit;                                // Basic: S2$ 
int    Roll3;                                     // Basic: S3 
char*  Roll3Fruit;                                // Basic: S3$ 
char*  QContinueAnswer;                           // Basic: Z$ 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void RandInt1to5();
void Routine_01720();

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

void RandInt1to5(){
    // 01690 LET S=1+INT(5*RND)
    RandInt1to5_Result = 1+INT(5*RND());
    // 01700 GOTO 01710
    goto Lbl_01710;

  Lbl_01710:
    // 01710 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01720(){
    // 01720 ON S GOTO 1730,1750,1770,1790,1810
    switch((int)(RandInt1to5_Result)){
        case 1: goto Lbl_01730;
        case 2: goto Lbl_01750;
        case 3: goto Lbl_01770;
        case 4: goto Lbl_01790;
        case 5: goto FruitIdx2StrExit;
        default: break; 
    };

  Lbl_01730:
    // 01730 LET S$="CHERRY"
    GLBpStr="Cherry";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01740 GOTO 1820
    goto Lbl_01820;

  Lbl_01750:
    // 01750 LET S$="APPLE"
    GLBpStr="Apple";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01760 GOTO 1820
    goto Lbl_01820;

  Lbl_01770:
    // 01770 LET S$="LEMON"
    GLBpStr="Lemon";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01780 GOTO 1820
    goto Lbl_01820;

  Lbl_01790:
    // 01790 LET S$="ORANGE"
    GLBpStr="Orange";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01800 GOTO 1820
    goto Lbl_01820;

  FruitIdx2StrExit:
    // 01810 LET S$="BANANA"
    GLBpStr="Banana";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01820:
    // 01820 GOTO 01830
    goto Lbl_01830;

  Lbl_01830:
    // 01830 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM THIS PROGRAM SIMULATES THE MECHANICAL
    // 01010 REM THREE WHEEL ONE-ARM-BANDIT

  QInstructions:
    // 01020 PRINT"ARE INTRUCTIONS REQUIRED?"
    b2c_printf("Are intructions required?\n");
    // 01030 PRINT"TYPE EITHER 'YES' OR 'NO'"
    b2c_printf("Type either 'yes' or 'no'\n");
    // 01040 INPUT L$
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
                (err += b2c_strtos(&QHelpAnswer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01040
    // 01050 IF L$="YES" THEN 1090
    if(strcmp(QHelpAnswer,"yes")==0)goto Instructions;
    // 01060 IF L$="NO" THEN 1160
    if(strcmp(QHelpAnswer,"no")==0)goto StartGame;
    // 01070 PRINT"INVALID COMMAND"
    b2c_printf("Invalid command\n");
    // 01080 GOTO 1020
    goto QInstructions;

  Instructions:
    // 01090 PRINT"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR"
    b2c_printf("Scoring is simple; 3 oranges, lemons or\n");
    // 01100 PRINT"BANANAS EARN $10. 3 CHERRIES EARN $90."
    b2c_printf("Bananas earn $10. 3 Cherries earn $90.\n");
    // 01110 PRINT"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2"
    b2c_printf("If the first fruit is an apple, you earn $2\n");
    // 01120 PRINT"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3."
    b2c_printf("If the first and second are apples, you earn $3.\n");
    // 01130 PRINT"IF THE LAST FRUIT IS A CHERRY AND THE"
    b2c_printf("If the last fruit is a cherry and the\n");
    // 01140 PRINT"OTHER TWO ARE THE SAME BUT NOT APPLES YOU"
    b2c_printf("Other two are the same but not apples you\n");
    // 01150 PRINT"EARN $10. EACH TURN COSTS $1. GOOD LUCK"
    b2c_printf("Earn $10. Each turn costs $1. Good luck\n");

  StartGame:
    // 01160 LET J=0
    Earnings = 0;
    // 01170 PRINT
    b2c_printf("");

  GameLoop:
    // 01180 GOSUB 1690
    RandInt1to5();
    // 01190 LET S1=S
    Roll1 = RandInt1to5_Result;
    // 01200 GOSUB 1690
    RandInt1to5();
    // 01210 LET S2=S
    Roll2 = RandInt1to5_Result;
    // 01220 GOSUB 1690
    RandInt1to5();
    // 01230 LET S3=S
    Roll3 = RandInt1to5_Result;
    // 01240 LET S=S1
    RandInt1to5_Result = Roll1;
    // 01250 GOSUB 1720
    Routine_01720();
    // 01260 LET S1$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll1Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01270 LET S=S2
    RandInt1to5_Result = Roll2;
    // 01280 GOSUB 1720
    Routine_01720();
    // 01290 LET S2$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll2Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01300 LET S=S3
    RandInt1to5_Result = Roll3;
    // 01310 GOSUB 1720
    Routine_01720();
    // 01320 LET S3$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll3Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01330 IF S1$="CHERRY" THEN 1370
    if(strcmp(Roll1Fruit,"Cherry")==0)goto IsDoubleCherry;
    // 01340 IF S1$="APPLE" THEN 1410
    if(strcmp(Roll1Fruit,"Apple")==0)goto IsDoubleApple;
    // 01350 IF S1$=S2$ THEN 1430
    if(strcmp(Roll1Fruit,Roll2Fruit)==0)goto IsDouble;
    // 01360 GOTO 1450
    goto Nothing;

  IsDoubleCherry:
    // 01370 IF S1$=S2$ THEN 1390
    if(strcmp(Roll1Fruit,Roll2Fruit)==0)goto IsTripleCherry;
    // 01380 GOTO 1450
    goto Nothing;

  IsTripleCherry:
    // 01390 IF S2$=S3$ THEN 1470
    if(strcmp(Roll2Fruit,Roll3Fruit)==0)goto ThreeCherries;
    // 01400 GOTO 1450
    goto Nothing;

  IsDoubleApple:
    // 01410 IF S1$=S2$ THEN 1490
    if(strcmp(Roll1Fruit,Roll2Fruit)==0)goto DoubleApple;
    // 01420 GOTO 1510
    goto SingleApple;

  IsDouble:
    // 01430 IF S2$=S3$ THEN 1530
    if(strcmp(Roll2Fruit,Roll3Fruit)==0)goto TrippleOrDoubleAndCherry;
    // 01440 IF S3$="CHERRY" THEN 1530
    if(strcmp(Roll3Fruit,"Cherry")==0)goto TrippleOrDoubleAndCherry;

  Nothing:
    // 01450 LET J=J-1
    Earnings = Earnings-1;
    // 01460 GOTO 1540
    goto DspResults;

  ThreeCherries:
    // 01470 LET J=J+89
    Earnings = Earnings+89;
    // 01480 GOTO 1540
    goto DspResults;

  DoubleApple:
    // 01490 LET J=J+2
    Earnings = Earnings+2;
    // 01500 GOTO 1540
    goto DspResults;

  SingleApple:
    // 01510 LET J=J+1
    Earnings = Earnings+1;
    // 01520 GOTO 1540
    goto DspResults;

  TrippleOrDoubleAndCherry:
    // 01530 LET J=J+9
    Earnings = Earnings+9;

  DspResults:
    // 01540 PRINT
    b2c_printf("");
    // 01550 PRINT S1$;" ";S2$;" ";S3$
    b2c_printf("%sõ¢Ub  %s   %s\n",Roll1Fruit,Roll2Fruit,Roll3Fruit);
    // 01560 PRINT"YOUR TOTAL EARNINGS ARE NOW $";J
    b2c_printf("Your total earnings are now $ %d \n",Earnings);
    // 01570 GOTO 1580
    goto QContinue;

  QContinue:
    // 01580 PRINT
    b2c_printf("");
    // 01590 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'"
    b2c_printf("To continue type 'y', if not type 'n'\n");
    // 01600 INPUT Z$
    // Start of Basic INPUT statement 01600
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&QContinueAnswer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01600
    // 01610 IF Z$="Y" THEN 1660
    if(strcmp(QContinueAnswer,"Y")==0)goto PlayAgain;
    // 01620 IF Z$="N" THEN 1640
    if(strcmp(QContinueAnswer,"N")==0)goto QuitingTime;
    // 01630 PRINT"INVALID RESPONSE"
    b2c_printf("Invalid response\n");

  QuitingTime:
    // 01640 PRINT"ONE-ARM-BANDIT SAYS GOOD-BYE"
    b2c_printf("One-arm-bandit says good-bye\n");
    // 01650 STOP
    exit(1);

  PlayAgain:
    // 01660 PRINT
    b2c_printf("");
    // 01670 GOTO 1180
    goto GameLoop;
    // 01680 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
