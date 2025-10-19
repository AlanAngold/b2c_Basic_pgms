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
int    C_int;                                     // Basic: C 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
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
    // 01000 PRINT TAB(26);"ACEY DUCEY CARD GAME"
    b2c_printf("Acey ducey card game\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT
    b2c_printf("");
    // 01030 PRINT
    b2c_printf("");
    // 01040 PRINT"ACEY-DUCEY IS PLAYED IN THE FOLLOWING MANNER "
    b2c_printf("Acey-ducey is played in the following manner \n");
    // 01050 PRINT"THE DEALER (COMPUTER) DEALS TWO CARDS FACE UP"
    b2c_printf("The dealer (computer) deals two cards face up\n");
    // 01060 PRINT"YOU HAVE AN OPTION TO BET OR NOT BET DEPENDING"
    b2c_printf("You have an option to bet or not bet depending\n");
    // 01070 PRINT"ON WHETHER OR NOT YOU FEEL THE CARD WILL HAVE"
    b2c_printf("On whether or not you feel the card will have\n");
    // 01080 PRINT"A VALUE BETWEEN THE FIRST TWO."
    b2c_printf("A value between the first two.\n");
    // 01090 PRINT"IF YOU DO NOT WANT TO BET, INPUT A 0"
    b2c_printf("If you do not want to bet, input a 0\n");
    // 01100 N=1100
    N_int = 100;

  Lbl_01110:
    // 01110 Q=100
    Q_int = 100;

  Lbl_01120:
    // 01120 PRINT "YOU NOW HAVE";Q;"DOLLARS."
    b2c_printf("You now have %d You now haveDollars.\n",Q_int);
    // 01130 PRINT
    b2c_printf("");
    // 01140 GOTO 1190
    goto Lbl_01190;

  Lbl_01150:
    // 01150 Q=Q+M
    Q_int = Q_int+M_int;
    // 01160 GOTO 1120
    goto Lbl_01120;

  Lbl_01170:
    // 01170 Q=Q-M
    Q_int = Q_int-M_int;
    // 01180 GOTO 1120
    goto Lbl_01120;

  Lbl_01190:
    // 01190 PRINT"HERE ARE YOUR NEXT TWO CARDS: "
    b2c_printf("Here are your next two cards: \n");

  Lbl_01200:
    // 01200 A=INT(14*RND(1))+2
    A_int = INT(14*RND(1))+2;
    // 01210 IF A<2 THEN 1200
    if(A_int<2)goto Lbl_01200;
    // 01220 IF A>14 THEN 1200
    if(A_int>14)goto Lbl_01200;

  Lbl_01230:
    // 01230 B=INT(14*RND(1))+2
    B_int = INT(14*RND(1))+2;
    // 01240 IF B<2 THEN 1230
    if(B_int<2)goto Lbl_01230;
    // 01250 IF B>14 THEN 1230
    if(B_int>14)goto Lbl_01230;
    // 01260 IF A>=B THEN 1200
    if(A_int>=B_int)goto Lbl_01200;
    // 01270 IF A<11 THEN 1320
    if(A_int<11)goto Lbl_01320;
    // 01280 IF A=11 THEN 1340
    if(A_int==11)goto Lbl_01340;
    // 01290 IF A=12 THEN 1360
    if(A_int==12)goto Lbl_01360;
    // 01300 IF A=13 THEN 1380
    if(A_int==13)goto Lbl_01380;
    // 01310 IF A=14 THEN 1400
    if(A_int==14)goto Lbl_01400;

  Lbl_01320:
    // 01320 PRINT A
    b2c_printf(" %d \n",A_int);
    // 01330 GOTO 1410
    goto Lbl_01410;

  Lbl_01340:
    // 01340 PRINT"JACK"
    b2c_printf("Jack\n");
    // 01350 GOTO 1410
    goto Lbl_01410;

  Lbl_01360:
    // 01360 PRINT"QUEEN"
    b2c_printf("Queen\n");
    // 01370 GOTO 1410
    goto Lbl_01410;

  Lbl_01380:
    // 01380 PRINT"KING"
    b2c_printf("King\n");
    // 01390 GOTO 1410
    goto Lbl_01410;

  Lbl_01400:
    // 01400 PRINT"ACE"
    b2c_printf("Ace\n");

  Lbl_01410:
    // 01410 IF B<11 THEN 1460
    if(B_int<11)goto Lbl_01460;
    // 01420 IF B=11 THEN 1480
    if(B_int==11)goto Lbl_01480;
    // 01430 IF B=12 THEN 1500
    if(B_int==12)goto Lbl_01500;
    // 01440 IF B=13 THEN 1520
    if(B_int==13)goto Lbl_01520;
    // 01450 IF B=14 THEN 1540
    if(B_int==14)goto Lbl_01540;

  Lbl_01460:
    // 01460 PRINT B
    b2c_printf(" %d \n",B_int);
    // 01470 GOTO 1560
    goto Lbl_01560;

  Lbl_01480:
    // 01480 PRINT"JACK"
    b2c_printf("Jack\n");
    // 01490 GOTO 1560
    goto Lbl_01560;

  Lbl_01500:
    // 01500 PRINT"QUEEN"
    b2c_printf("Queen\n");
    // 01510 GOTO 1560
    goto Lbl_01560;

  Lbl_01520:
    // 01520 PRINT"KING"
    b2c_printf("King\n");
    // 01530 GOTO 1560
    goto Lbl_01560;

  Lbl_01540:
    // 01540 PRINT"ACE"
    b2c_printf("Ace\n");
    // 01550 PRINT
    b2c_printf("");

  Lbl_01560:
    // 01560 PRINT
    b2c_printf("");
    // 01570 INPUT"WHAT IS YOUR BET";M
    // Start of Basic INPUT statement 01570
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""WHAT IS YOUR BET"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01570
    // 01580 IF M<>0 THEN 1620
    if(M_int!=0)goto Lbl_01620;
    // 01590 PRINT"CHICKEN!!"
    b2c_printf("Chicken!!\n");
    // 01600 PRINT
    b2c_printf("");
    // 01610 GOTO 1190
    goto Lbl_01190;

  Lbl_01620:
    // 01620 IF M<=Q THEN 1660
    if(M_int<=Q_int)goto Lbl_01660;
    // 01630 PRINT"SORRY, MY FRIEND, BUT YOU BET TOO MUCH."
    b2c_printf("Sorry, my friend, but you bet too much.\n");
    // 01640 PRINT"YOU HAVE ONLY ";Q;" DOLLARS TO BET."
    b2c_printf("You have only  %d You have only  dollars to bet.\n",Q_int);
    // 01650 GOTO 1560
    goto Lbl_01560;

  Lbl_01660:
    // 01660 C=INT(14*RND(1))+2
    C_int = INT(14*RND(1))+2;
    // 01670 IF C<2 THEN 1660
    if(C_int<2)goto Lbl_01660;
    // 01680 IF C>14 THEN 1660
    if(C_int>14)goto Lbl_01660;
    // 01690 IF C<11 THEN 1740
    if(C_int<11)goto Lbl_01740;
    // 01700 IF C=11 THEN 1760
    if(C_int==11)goto Lbl_01760;
    // 01710 IF C=12 THEN 1780
    if(C_int==12)goto Lbl_01780;
    // 01720 IF C=13 THEN 1800
    if(C_int==13)goto Lbl_01800;
    // 01730 IF C=14 THEN 1820
    if(C_int==14)goto Lbl_01820;

  Lbl_01740:
    // 01740 PRINT C
    b2c_printf(" %d \n",C_int);
    // 01750 GOTO 1840
    goto Lbl_01840;

  Lbl_01760:
    // 01760 PRINT"JACK"
    b2c_printf("Jack\n");
    // 01770 GOTO 1840
    goto Lbl_01840;

  Lbl_01780:
    // 01780 PRINT"QUEEN"
    b2c_printf("Queen\n");
    // 01790 GOTO 1840
    goto Lbl_01840;

  Lbl_01800:
    // 01800 PRINT"KING"
    b2c_printf("King\n");
    // 01810 GOTO 1840
    goto Lbl_01840;

  Lbl_01820:
    // 01820 PRINT "ACE"
    b2c_printf("Ace\n");
    // 01830 PRINT
    b2c_printf("");

  Lbl_01840:
    // 01840 IF C>A THEN 1860
    if(C_int>A_int)goto Lbl_01860;
    // 01850 GOTO 1890
    goto Lbl_01890;

  Lbl_01860:
    // 01860 IF C>=B THEN 1890
    if(C_int>=B_int)goto Lbl_01890;
    // 01870 PRINT"YOU WIN!!!"
    b2c_printf("You win!!!\n");
    // 01880 GOTO 1150
    goto Lbl_01150;

  Lbl_01890:
    // 01890 PRINT"SORRY, YOU LOSE"
    b2c_printf("Sorry, you lose\n");
    // 01900 IF M<Q THEN 1170
    if(M_int<Q_int)goto Lbl_01170;
    // 01910 PRINT
    b2c_printf("");
    // 01920 PRINT
    b2c_printf("");
    // 01930 PRINT"SORRY, FRIEND, BUT YOU BLEW YOUR WAD."
    b2c_printf("Sorry, friend, but you blew your wad.\n");
    // 01940 PRINT:PRINT
    b2c_printf("");
    // 01950 INPUT"TRY AGAIN (YES OR NO)";A$
    // Start of Basic INPUT statement 01950
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""TRY AGAIN (YES OR NO)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01950
    // 01960 PRINT:PRINT
    b2c_printf("");
    // 01970 IF A$="YES" THEN 1110
    if(strcmp(A_str,"Yes")==0)goto Lbl_01110;
    // 01980 PRINT"O.K., HOPE YOU HAD FUN!"
    b2c_printf("O.K., Hope you had fun!\n");
    // 01990 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
