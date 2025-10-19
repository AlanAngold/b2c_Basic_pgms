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
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    H_int;                                     // Basic: H 
int    M_int;                                     // Basic: M 
int    O_int;                                     // Basic: O 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
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
    // 01000 PRINT TAB(33);"CRAPS"
    b2c_printf("Craps\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 LET R=0
    R_int = 0;
    // 01040 PRINT"2,3,12 ARE LOSERS; 4,5,6,8,9,10 ARE POINTS; 7,11 ARE NATURAL WINNERS."
    b2c_printf("2,3,12 are losers; 4,5,6,8,9,10 are points; 7,11 are natural winners.\n");
    // 01050 LET T=1
    T_int = 1;
    // 01060 PRINT "PICK A NUMBER AND INPUT TO ROLL DICE";
    b2c_printf("Pick a number and input to roll dice");
    // 01070 INPUT Z
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
                (err += b2c_strtoi(&Z_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01070

  Lbl_01080:
    // 01080 LET X=(RND(0))
    X_int = (RND(0));
    // 01090 LET T =T+1
    T_int = T_int+1;
    // 01100 IF T<=Z GOTO 1080
    if(T_int<=Z_int)goto Lbl_01080;

  Lbl_01110:
    // 01110 PRINT"INPUT THE AMOUNT OF YOUR WAGER.";
    b2c_printf("Input the amount of your wager.");
    // 01120 INPUT F
    // Start of Basic INPUT statement 01120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&F_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01120
    // 01130 PRINT "I WILL NOW THROW THE DICE"
    b2c_printf("I will now throw the dice\n");

  Lbl_01140:
    // 01140 LET E=INT(7*RND(1))
    E_int = INT(7*RND(1));
    // 01150 LET S=INT(7*RND(1))
    S_int = INT(7*RND(1));
    // 01160 LET X=E+S
    X_int = E_int+S_int;
    // 01170 IF X=7 GOTO 1310 
    if(X_int==7)goto Lbl_01310;
    // 01180 IF X=11 GOTO 1310
    if(X_int==11)goto Lbl_01310;
    // 01190 IF X=1 GOTO 1140
    if(X_int==1)goto Lbl_01140;
    // 01200 IF X=2 GOTO 1340
    if(X_int==2)goto Lbl_01340;
    // 01210 IF X=0 GOTO 1140
    if(X_int==0)goto Lbl_01140;
    // 01220 IF X=2 GOTO 1380
    if(X_int==2)goto Lbl_01380;
    // 01230 IF X=3 GOTO 1380
    if(X_int==3)goto Lbl_01380;
    // 01240 IF X=12 GOTO 1380
    if(X_int==12)goto Lbl_01380;
    // 01250 IF X=5 GOTO 1430
    if(X_int==5)goto Lbl_01430;
    // 01260 IF X =6 GOTO 1430
    if(X_int==6)goto Lbl_01430;
    // 01270 IF X=8 GOTO 1430
    if(X_int==8)goto Lbl_01430;
    // 01280 IF X=9 GOTO 1430
    if(X_int==9)goto Lbl_01430;
    // 01290 IF X =10 GOTO 1430
    if(X_int==10)goto Lbl_01430;
    // 01300 IF X=4 GOTO 1430
    if(X_int==4)goto Lbl_01430;

  Lbl_01310:
    // 01310 PRINT X "- NATURAL....A WINNER!!!!"
    b2c_printf(" %d  Óþ- natural....A winner!!!!\n",X_int);
    // 01320 PRINT X"PAYS EVEN MONEY, YOU WIN"F"DOLLARS"
    b2c_printf(" %d ¶<Õ_Pays even money, you winPays even money, you win %d Pays even money, you winDollars\n",X_int,F_int);
    // 01330 GOTO 1410
    goto Lbl_01410;

  Lbl_01340:
    // 01340 PRINT X"- SNAKE EYES....YOU LOSE."
    b2c_printf(" %d  Óþ- snake eyes....You lose.\n",X_int);
    // 01350 PRINT "YOU LOSE"F "DOLLARS."
    b2c_printf("You lose %d You loseDollars.\n",F_int);
    // 01360 LET F=0-F
    F_int = 0-F_int;
    // 01370 GOTO 1410
    goto Lbl_01410;

  Lbl_01380:
    // 01380 PRINT X " - CRAPS...YOU LOSE."
    b2c_printf(" %d  Óþ - craps...You lose.\n",X_int);
    // 01390 PRINT "YOU LOSE"F"DOLLARS."
    b2c_printf("You lose %d You loseDollars.\n",F_int);
    // 01400 LET F=0-F
    F_int = 0-F_int;

  Lbl_01410:
    // 01410 LET R= R+F
    R_int = R_int+F_int;
    // 01420 GOTO 1610
    goto Lbl_01610;

  Lbl_01430:
    // 01430 PRINT X "IS THE POINT. I WILL ROLL AGAIN"
    b2c_printf(" %d  ÓþIs the point. I will roll again\n",X_int);

  Lbl_01440:
    // 01440 LET H=INT(7*RND(1))
    H_int = INT(7*RND(1));
    // 01450 LET Q=INT(7*RND(1))
    Q_int = INT(7*RND(1));
    // 01460 LET O=H+Q
    O_int = H_int+Q_int;
    // 01470 IF O=1 GOTO 1440
    if(O_int==1)goto Lbl_01440;
    // 01480 IF O=7 GOTO 1530
    if(O_int==7)goto Lbl_01530;
    // 01490 IF O=0 GOTO 1440
    if(O_int==0)goto Lbl_01440;
    // 01500 IF O=X GOTO 1570
    if(O_int==X_int)goto Lbl_01570;
    // 01510 PRINT O " - NO POINT. I WILL ROLL AGAIN"
    b2c_printf(" %d ¯<Õ_ - no point. I will roll again\n",O_int);
    // 01520 GOTO 1440
    goto Lbl_01440;

  Lbl_01530:
    // 01530 PRINT O "- CRAPS. YOU LOSE."
    b2c_printf(" %d  Óþ- craps. You lose.\n",O_int);
    // 01540 PRINT "YOU LOSE $"F
    b2c_printf("You lose $ %d \n",F_int);
    // 01550 F=0-F
    F_int = 0-F_int;
    // 01560 GOTO 1410
    goto Lbl_01410;

  Lbl_01570:
    // 01570 PRINT X"- A WINNER.........CONGRATS!!!!!!!!"
    b2c_printf(" %d  Óþ- a winner.........Congrats!!!!!!!!\n",X_int);
    // 01580 PRINT X "AT 2 TO 1 ODDS PAYS YOU...LET ME SEE..."2*F"DOLLARS"
    b2c_printf(" %d «<Õ_At 2 to 1 odds pays you...Let me see...At 2 to 1 odds pays you...Let me see...*F_int*F_intDollars\n",X_int);
    // 01590 LET F=2*F
    F_int = 2*F_int;
    // 01600 GOTO 1410
    goto Lbl_01410;

  Lbl_01610:
    // 01610 PRINT " IF YOU WANT TO PLAY AGAIN PRINT 5 IF NOT PRINT 2";
    b2c_printf(" if you want to play again print 5 if not print 2");
    // 01620 INPUT M
    // Start of Basic INPUT statement 01620
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
    }; // End of Basic INPUT statement 01620
    // 01630 IF R<0 GOTO 1660
    if(R_int<0)goto Lbl_01660;
    // 01640 IF R>0 GOTO 1680
    if(R_int>0)goto Lbl_01680;
    // 01650 IF R=0 GOTO 1700
    if(R_int==0)goto Lbl_01700;

  Lbl_01660:
    // 01660 PRINT "YOU ARE NOW UNDER $";-R
    b2c_printf("You are now under $ %d \n",R_int);
    // 01670 GOTO 1710
    goto Lbl_01710;

  Lbl_01680:
    // 01680 PRINT "YOU ARE NOW AHEAD $";R
    b2c_printf("You are now ahead $ %d \n",R_int);
    // 01690 GOTO 1710
    goto Lbl_01710;

  Lbl_01700:
    // 01700 PRINT "YOU ARE NOW EVEN AT 0"
    b2c_printf("You are now even at 0\n");

  Lbl_01710:
    // 01710 IF M=5 GOTO 1110
    if(M_int==5)goto Lbl_01110;
    // 01720 IF R<0 GOTO 1750
    if(R_int<0)goto Lbl_01750;
    // 01730 IF R>0 GOTO 1770
    if(R_int>0)goto Lbl_01770;
    // 01740 IF R=0 GOTO 1790
    if(R_int==0)goto Lbl_01790;

  Lbl_01750:
    // 01750 PRINT"TOO BAD, YOU ARE IN THE HOLE. COME AGAIN."
    b2c_printf("Too bad, you are in the hole. Come again.\n");
    // 01760 GOTO 1800
    goto Lbl_01800;

  Lbl_01770:
    // 01770 PRINT"CONGRATULATIONS---YOU CAME OUT A WINNER. COME AGAIN!"
    b2c_printf("Congratulations---you came out a winner. Come again!\n");
    // 01780 GOTO 1800
    goto Lbl_01800;

  Lbl_01790:
    // 01790 PRINT"CONGRATULATIONS---YOU CAME OUT EVEN, NOT BAD FOR AN AMATEUR"
    b2c_printf("Congratulations---you came out even, not bad for an amateur\n");

  Lbl_01800:
    // 01800 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
