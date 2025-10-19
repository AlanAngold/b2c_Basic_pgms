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
char*  A1_str;                                    // Basic: A1$ 
int    C_int;                                     // Basic: C 
int    ELSE_int;                                  // Basic: ELSE 
int    M_int_arr[20];                             // Basic: M 
int    M1_int;                                    // Basic: M1 
int    PRINT_int;                                 // Basic: PRINT 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    Y_int_arr[20];                             // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
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
    // 01000 PRINT CHR$(26);TAB(31000);"EVEN WINS"
    b2c_printf("Even wins\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT
    b2c_printf("");
    // 01030 Y1=0
    Y1_int = 0;
    // 01040 M1=0
    M1_int = 0;
    // 01050 DIM M(1050),Y(20)
    // 01060 PRINT "     THIS IS A TWO PERSON GAME CALLED 'EVEN WINS.'"
    b2c_printf("     this is a two person game called 'even wins.'\n");
    // 01070 PRINT "TO PLAY THE GAME, THE PLAYERS NEED 27 MARBLES OR"
    b2c_printf("To play the game, the players need 27 marbles or\n");
    // 01080 PRINT "OTHER OBJECTS ON A TABLE."
    b2c_printf("Other objects on a table.\n");
    // 01090 PRINT
    b2c_printf("");
    // 01100 PRINT 
    b2c_printf("");
    // 01110 PRINT "     THE 2 PLAYERS ALTERNATE TURNS, WITH EACH PLAYER"
    b2c_printf("     the 2 players alternate turns, with each player\n");
    // 01120 PRINT "REMOVING FROM 1 TO 4 MARBLES ON EACH MOVE.  THE GAME"
    b2c_printf("Removing from 1 to 4 marbles on each move.  The game\n");
    // 01130 PRINT "ENDS WHEN THERE ARE NO MARBLES LEFT, AND THE WINNER"
    b2c_printf("Ends when there are no marbles left, and the winner\n");
    // 01140 PRINT "IS THE ONE WITH AN EVEN NUMBER OF MARBLES."
    b2c_printf("Is the one with an even number of marbles.\n");
    // 01150 PRINT
    b2c_printf("");
    // 01160 PRINT
    b2c_printf("");
    // 01170 PRINT "     THE ONLY RULES ARE THAT (1) YOU MUST ALTERNATE TURNS,"
    b2c_printf("     the only rules are that (1) you must alternate turns,\n");
    // 01180 PRINT "(2) YOU MUST TAKE BETWEEN 1 AND 4 MARBLES EACH TURN,"
    b2c_printf("(2) you must take between 1 and 4 marbles each turn,\n");
    // 01190 PRINT "AND (3) YOU CANNOT SKIP A TURN."
    b2c_printf("And (3) you cannot skip a turn.\n");
    // 01200 PRINT
    b2c_printf("");
    // 01210 PRINT
    b2c_printf("");
    // 01220 PRINT
    b2c_printf("");

  Lbl_01230:
    // 01230 PRINT "     TYPE A '1' IF YOU WANT TO GO FIRST, AND TYPE"
    b2c_printf("     type a '1' if you want to go first, and type\n");
    // 01240 PRINT "A '0' IF YOU WANT ME TO GO FIRST."
    b2c_printf("A '0' if you want me to go first.\n");
    // 01250 INPUT C
    // Start of Basic INPUT statement 01250
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
    }; // End of Basic INPUT statement 01250
    // 01260 PRINT
    b2c_printf("");
    // 01270 IF C=0 THEN 1290
    if(C_int==0)goto Lbl_01290;
    // 01280 GOTO 2090
    goto Lbl_02090;

  Lbl_01290:
    // 01290 T=27
    T_int = 27;
    // 01300 M=2
    M_int_arr[0] = 2;
    // 01310 PRINT:PRINT "TOTAL=";T:PRINT
    b2c_printf("");
    // 01320 M1=M1+M
    M1_int = M1_int+M_int_arr[0];
    // 01330 T=T-M
    T_int = T_int-M_int_arr[0];

  Lbl_01340:
    // 01340 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    if(M_int_arr[0]==1) {
    }
    // 01350 IF T=0 THEN 1920
    if(T_int==0)goto Lbl_01920;
    // 01360 PRINT:PRINT "TOTAL=";T:PRINT
    b2c_printf("");
    // 01370 PRINT
    b2c_printf("");
    // 01380 PRINT "WHAT IS YOUR NEXT MOVE (MY TOTAL IS";M1;CHR$(8);")";
    b2c_printf("What is your next move (my total is %d What is your next move (my total isWhat is your next move (my total is))\n",M1_int);

  Lbl_01390:
    // 01390 INPUT Y
    // Start of Basic INPUT statement 01390
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Y_int_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01390

  Lbl_01400:
    // 01400 PRINT
    b2c_printf("");
    // 01410 IF Y<1 THEN 2190
    if(Y_int_arr[0]<1)goto Lbl_02190;
    // 01420 IF Y>4 THEN 2190
    if(Y_int_arr[0]>4)goto Lbl_02190;
    // 01430 IF Y<=T THEN 1470
    if(Y_int_arr[0]<=T_int)goto Lbl_01470;
    // 01440 PRINT "     YOU HAVE TRIED TO TAKE MORE MARBLES THAN THERE ARE"
    b2c_printf("     you have tried to take more marbles than there are\n");
    // 01450 PRINT "LEFT.  TRY AGAIN."
    b2c_printf("Left.  Try again.\n");
    // 01460 GOTO 1390
    goto Lbl_01390;

  Lbl_01470:
    // 01470 Y1=Y1+Y
    Y1_int = Y1_int+Y_int_arr[0];
    // 01480 T=T-Y
    T_int = T_int-Y_int_arr[0];
    // 01490 IF T=0 THEN 1920
    if(T_int==0)goto Lbl_01920;
    // 01500 PRINT "TOTAL=";T
    b2c_printf("Total= %d \n",T_int);
    // 01510 PRINT
    b2c_printf("");
    // 01520 PRINT "YOUR TOTAL IS";Y1;CHR$(8);"."
    b2c_printf("Your total is %d Your total isYour total is.\n",Y1_int);
    // 01530 IF T<.5 THEN 1920
    if(T_int<0.5)goto Lbl_01920;
    // 01540 R=T-6*INT(T/6)
    R_int = T_int-6*INT(T_int/6);
    // 01550 IF INT(Y1/2)=Y1/2 THEN 1750
    if(INT(Y1_int/2)==Y1_int/2)goto Lbl_01750;
    // 01560 IF T<4.2 THEN 1620
    if(T_int<4.2)goto Lbl_01620;
    // 01570 IF R>3.4 THEN 1660
    if(R_int>3.4)goto Lbl_01660;
    // 01580 M=R+1
    M_int_arr[0] = R_int+1;
    // 01590 M1=M1+M
    M1_int = M1_int+M_int_arr[0];
    // 01600 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01610 GOTO 1340
    goto Lbl_01340;

  Lbl_01620:
    // 01620 M=T
    M_int_arr[0] = T_int;
    // 01630 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01640 GOTO 1880
    goto Lbl_01880;
    // 01650 REM     250 IS WHERE I WIN.

  Lbl_01660:
    // 01660 IF R<4.7 THEN 1700
    if(R_int<4.7)goto Lbl_01700;
    // 01670 IF R>3.5 THEN 1700
    if(R_int>3.5)goto Lbl_01700;

  Lbl_01680:
    // 01680 M=1
    M_int_arr[0] = 1;
    // 01690 GOTO 1710
    goto Lbl_01710;

  Lbl_01700:
    // 01700 M=4
    M_int_arr[0] = 4;

  Lbl_01710:
    // 01710 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01720 M1=M1+M
    M1_int = M1_int+M_int_arr[0];
    // 01730 GOTO 1340
    goto Lbl_01340;
    // 01740 REM     I AM READY TO ENCODE THE STRAT FOR WHEN OPP TOT IS EVEN

  Lbl_01750:
    // 01750 IF R<1.5 THEN 2050
    if(R_int<1.5)goto Lbl_02050;
    // 01760 IF R>5.3 THEN 2050
    if(R_int>5.3)goto Lbl_02050;
    // 01770 M=R-1
    M_int_arr[0] = R_int-1;
    // 01780 M1=M1+M
    M1_int = M1_int+M_int_arr[0];
    // 01790 T=T-M
    T_int = T_int-M_int_arr[0];
    // 01800 IF T<.2 THEN 1840
    if(T_int<0.2)goto Lbl_01840;
    // 01810 REM     IS # ZERO HERE
    // 01820 GOTO 1340
    goto Lbl_01340;
    // 01830 REM     IS = ZERO HERE

  Lbl_01840:
    // 01840 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    if(M_int_arr[0]==1) {
    }
    // 01850 PRINT
    b2c_printf("");
    // 01860 GOTO 1920
    goto Lbl_01920;
    // 01870 REM    THIS IS WHERE I WIN

  Lbl_01880:
    // 01880 IF M=1 THEN PRINT "I PICK UP 1 MARBLE." ELSE PRINT "I PICK UP";M;"MARBLES."
    if(M_int_arr[0]==1) {
    }
    // 01890 PRINT
    b2c_printf("");
    // 01900 PRINT "TOTAL = 0"
    b2c_printf("Total = 0\n");
    // 01910 M1=M1+M
    M1_int = M1_int+M_int_arr[0];

  Lbl_01920:
    // 01920 PRINT "THAT IS ALL OF THE MARBLES."
    b2c_printf("That is all of the marbles.\n");
    // 01930 PRINT
    b2c_printf("");
    // 01940 PRINT " MY TOTAL IS";M1;CHR$(8);", YOUR TOTAL IS";Y1;CHR$(8);"."
    b2c_printf(" my total is %d  my total is my total is, your total is, your total is %d , your total is, your total is.\n",M1_int,Y1_int);
    // 01950 PRINT
    b2c_printf("");
    // 01960 IF INT(M1/2)=M1/2 THEN 1990
    if(INT(M1_int/2)==M1_int/2)goto Lbl_01990;
    // 01970 PRINT "     YOU WON.  DO YOU WANT TO PLAY";
    b2c_printf("     you won.  Do you want to play");
    // 01980 GOTO 2000
    goto Lbl_02000;

  Lbl_01990:
    // 01990 PRINT "     I WON.  DO YOU WANT TO PLAY";
    b2c_printf("     i won.  Do you want to play");

  Lbl_02000:
    // 02000 INPUT " AGAIN";A1$:PRINT:PRINT
    b2c_printf("");
    // 02010 IF LEFT$(A1$,1)="N" THEN 2060
    if(LEFT$(A1_str,1)=='N')goto Lbl_02060;
    // 02020 M1=0
    M1_int = 0;
    // 02030 Y1=0
    Y1_int = 0;
    // 02040 GOTO 1230
    goto Lbl_01230;

  Lbl_02050:
    // 02050 GOTO 1680
    goto Lbl_01680;

  Lbl_02060:
    // 02060 PRINT
    b2c_printf("");
    // 02070 PRINT "OK.  SEE YOU LATER."
    b2c_printf("Ok.  See you later.\n");
    // 02080 GOTO 2260
    goto Lbl_02260;

  Lbl_02090:
    // 02090 T=27
    T_int = 27;
    // 02100 PRINT
    b2c_printf("");
    // 02110 PRINT
    b2c_printf("");
    // 02120 PRINT
    b2c_printf("");
    // 02130 PRINT "TOTAL=";T
    b2c_printf("Total= %d \n",T_int);
    // 02140 PRINT
    b2c_printf("");
    // 02150 PRINT
    b2c_printf("");
    // 02160 PRINT "WHAT IS YOUR FIRST MOVE";
    b2c_printf("What is your first move");
    // 02170 INPUT Y
    // Start of Basic INPUT statement 02170
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Y_int_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02170
    // 02180 GOTO 1400
    goto Lbl_01400;

  Lbl_02190:
    // 02190 PRINT
    b2c_printf("");
    // 02200 PRINT "THE NUMBER OF MARBLES YOU TAKE MUST BE A POSITIVE"
    b2c_printf("The number of marbles you take must be a positive\n");
    // 02210 PRINT "INTEGER BETWEEN 1 AND 4."
    b2c_printf("Integer between 1 and 4.\n");
    // 02220 PRINT
    b2c_printf("");
    // 02230 PRINT "     WHAT IS YOUR NEXT MOVE?"
    b2c_printf("     what is your next move?\n");
    // 02240 PRINT
    b2c_printf("");
    // 02250 GOTO 1390
    goto Lbl_01390;

  Lbl_02260:
    // 02260 RUN "MENU"
    system(""MENU"");
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
